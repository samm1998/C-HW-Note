#include <stdio.h> 
#include <conio.h> 
int main(){ 
    char ch1, ch2; 
    
    while( (ch1 = getch()) != 'q') 
        if(ch1 == 0){ 
            ch2 = getch(); 
            printf("The extended code is %d %d\n", ch1, ch2); 
        } 
        else 
            printf("The ASCII code is %d\n", ch1); 
     return 0; 
} 
