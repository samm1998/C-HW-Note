#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

int main(){

	char myArray[50];

	cout << "Whats the password? ";
	
	cin.getline( myArray, 50, '\n');
	
	if( !strcmp( myArray, "password")){
	 
	 cout <<" is correct! Access granted!\n";
   
	} else {
	 
     cout <<"Invalid password!\n";
	    
 	}    
	

	return 0;

}


//strcpy(str1, str2);  // str2字串複製給str1字串 
//strcat(str1, str2);  // str2字串串接在str1字串後 
//strlen(str);  // 計算不含空字元的字串長度 
//strcmp(str1, str2); // 比較兩個字串
