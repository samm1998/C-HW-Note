#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int word(string str1,string str3,string str2,string str4){
	
	if((str1==str3)&&(str2==str4)){
	 return 2;
	} else {
	 return 1;
	}    
	
}



int main() {
	
	fstream pass;
	
	string str1[50];
	string str2[50];
	string str3;
	string str4;
	int i=0;
	int x=0,y=0; 
	pass.open("input.txt");
	if (!pass){
		cout << "898";
		return 0;
	}

	while (!pass.eof()){
		i=i+1;
		x=i;
		pass>>str1[i];
		pass>>str2[i];
		
}



	cout << "username :";
	cin >> str3;
	cout << "password :";
	cin >> str4;
	i=1;
while (i<x+1){
	word(str1[i],str3,str2[i],str4);
	if (word(str1[i],str3,str2[i],str4)==2){
		cout << "is correct! Access granted!\n";
		i=x+1;
		y=0;
	}else {
		y=50;
		i=i+1;
	}
}
	if (y==50){
		cout << "Invalid password!";
	}
	
	
	pass.close();
	return 0;
}
