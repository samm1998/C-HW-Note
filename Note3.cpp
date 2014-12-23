#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{ 
    int a;
    int b;
    
    cout << "number?";
    cin >> a;
    for (int i = 1;i <= a;i = i + 1 )
    if (i % 2 == 0 )
    cout << i <<'\n';
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
