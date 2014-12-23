#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char *argv[])
{
srand(time(NULL)); 

int x;
x=rand()%50 ;  
cout<<x;

system("PAUSE");
return EXIT_SUCCESS;
}
