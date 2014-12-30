#include <stdio.h> 
#include <conio.h> 
int main(){ 
    char ch1, ch2; 
    while( ch1 = getch() ) 
        if(ch1 == -32){ 
            ch2 = getch(); 
            if(ch2 == 72) 
                printf("up key press\n"); 
            if(ch2 == 75) 
                printf("left key press\n"); 
            if(ch2 == 77) 
                printf("right key press\n"); 
            if(ch2 == 80) 
                printf("down key press\n"); 
        } 
    return 0; 
} 
