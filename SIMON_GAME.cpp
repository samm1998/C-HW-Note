#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

using namespace std;
//system("CLS");
//system("PAUSE");
void de1(){
     Beep(988,300);
     }
void de2(){
     Beep(784,300);
     }
void de3(){
     Beep(659,300);
     }
void de4(){
     Beep(523,300);
     }


int main()
{
    srand(time(NULL)); 
    int be[20];//char
    int bea[20];
    int num; //= rand() %3+1;
    int a=1,b=1;
    char ch1,ch2;
    
    while(a!=0){ 
    system("CLS");
    for(int i=0;i<20;i++){
    num = rand()%3+1;
    be[i]=num;
    }
     cout << "----------------------\n";
     cout << "     SIMON GAME\n";
          if (a==1){
          cout << "    → START\n";          
          }else{
          cout << "       START\n";      
                }
          if (a==2){
          cout << "    → EXIT\n";    
          }else{
          cout << "       EXIT\n";      
                }       
          if (a == 3){
          cout << "    → TEST\n";    
          }else{
          cout << "       TEST\n";      
                }   
     
     ch1 = getch();
        if(ch1 == 32){
         if (a==1){
         a=0;
         system("CLS");
         cout << "   strat\n";
         cout << "_______________\n";
         
         
        while (b<20){
         b++;
         cout <<"NO."<<b-1<< "\n____________\n";   
         for (int j=0;j<b;j++){
         if (be[j]==1){
         de1();            
         }else if (be[j]==2){
         de2();      
         }else if (be[j]==3){
         de3();      
         }else if (be[j]==4){
         de4();      
         }
         cout << be[j]<<endl;
         cout << "___________\n";
        }
        system("CLS");
         for (int k=0;k<b;k++){
         cin >> bea[k];
         if (bea[k]!=be[k]){
           cout << "you lose\n";
           b=50;
           k=b;            
         cout << "____________\n";    
          }    
         }
         
        
 
 
 
         }
         }
         if (a == 2){
          a=0;             
         }
         if (a == 3){
          a=0;
          system("CLS");
          
          cout << "TEST\n";
          while ((ch1 = getch())!= 'q'){
          if (ch1 == 49){de1();}        
          else if (ch1 == 50){de2();}        
          else if (ch1 == 51){de3();}        
          else if (ch1 == 52){de4();}       
          }
         a=1;        
         }                
        }else if(ch1 == -32){ 
            ch2 = getch(); 
            if(ch2 == 72){ //up
                a=(a==1)?(a=3):(a=a-1);
                } 
            if(ch2 == 80){//down 
                a=(a==3)?(a=1):(a=a+1); 
                }
        } 
    
}
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
