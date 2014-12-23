#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{ 
   int a = rand() % 100;
   int b =0;
   
   
   while (a != b){
         cout << "input a number(0-100)\n";
         cin >> b;
         if ( a > b)
         cout << "bigger\n";
         else if ( b > a)
         cout << "smaller\n";
         
         
         
         
         }
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
