#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void eg(){
            Beep(450,300);//3
            Beep(400,300);//2
            Beep(350,300);//1
            Beep(400,300);//2
            Beep(450,300);//3
            Beep(450,300);//3
            Beep(450,300);//3
            Sleep(350);//s
            Beep(400,300);//2
            Beep(400,300);//2
            Beep(400,300);//2
            Sleep(350);//s
            Beep(450,300);//3
            Beep(550,300);//5
            Beep(550,300);//5
            Sleep(350);//s
            Beep(450,300);//3
            Beep(400,300);//2
            Beep(350,300);//1
            Beep(400,300);//2            
            Beep(450,300);//3
            Beep(450,300);//3
            Beep(450,300);//3
            Sleep(350);//s
            Beep(400,300);//2
            Beep(400,300);//2
            Beep(450,300);//3
            Beep(400,300);//2
            Beep(350,300);//1
     }









int main(int argc, char *argv[])
{
char ch1; 
    
    while( (ch1 = getch()) != 32){
       switch(ch1){
          case 49:   //1      
            Beep(523,300);
          break;       
          case 50:      //2   
            Beep(587,300);
          break;         
          case 51:     //3    
            Beep(659,300);
          break;         
          case 52:     //4    
            Beep(698,300);
          break;         
          case 53:     //5    
            Beep(784,300);
          break;         
          case 54:     //6    
            Beep(880,300);
          break;
          case 55:     //7    
            Beep(988,300);
          break;
          case 56:    //8     
            Beep(1060,300);
          break;
          case 'e':case 'E'://eg      
          eg();
          break;         
                   
}          
           }
       
    system("PAUSE");
    return EXIT_SUCCESS;
}
