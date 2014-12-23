#include <windows.h>
#include <iostream>

struct Color
{
    int color;

    Color(int color_): color(color_) {}

    Color operator + (const Color & other) const { return Color(this->color | other.color); }
};

#define FORE_LIGHT(color) const Color cfl##color##_ = FOREGROUND_##color | FOREGROUND_INTENSITY;
#define BACK_LIGHT(color) const Color cbl##color##_ = BACKGROUND_##color | BACKGROUND_INTENSITY;
#define FORE_DARK(color)  const Color cfd##color##_ = FOREGROUND_##color;
#define BACK_DARK(color)  const Color cbd##color##_ = BACKGROUND_##color;

FORE_LIGHT(RED) FORE_LIGHT(GREEN) FORE_LIGHT(BLUE)
BACK_LIGHT(RED) BACK_LIGHT(GREEN) BACK_LIGHT(BLUE)
FORE_DARK (RED) FORE_DARK (GREEN) FORE_DARK (BLUE)
BACK_DARK (RED) BACK_DARK (GREEN) BACK_DARK (BLUE)

const Color cdefault_ = cfdRED_ + cfdGREEN_ + cfdBLUE_;

std::ostream & operator << (std::ostream & os, Color c)
{
    return SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c.color), os;
}

int main()
{
    using std::cout;

    cout << "Hello, " << cflRED_                        << "Red   " << cdefault_ << " World!\n";
    cout << "Hello, " <<           cflGREEN_            << "Green " << cdefault_ << " World!\n";
    cout << "Hello, " <<                       cflBLUE_ << "Blue  " << cdefault_ << " World!\n";
    cout << "Hello, " << cflRED_ + cflGREEN_            << "Yellow" << cdefault_ << " World!\n";
    cout << "Hello, " << cflRED_             + cflBLUE_ << "Pink  " << cdefault_ << " World!\n";
    cout << "Hello, " <<           cflGREEN_ + cflBLUE_ << "Cyan  " << cdefault_ << " World!\n";
    cout << "Hello, " << cblRED_ + cblGREEN_ + cblBLUE_ << "Black " << cdefault_ << " World!\n";

    cout << cflRED_ + cflGREEN_ + cflBLUE_ << "\n(hit enter to quit...)" << cdefault_;

    std::cin.get();
}
