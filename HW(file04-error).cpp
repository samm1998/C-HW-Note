#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
	fstream input;
	char ac[50],pw[50];
	char ac2[50],pw2[50];

	input.open("input.txt");
	if (!input){
		cout << "You don't have this file!\n";
		cout << "Please open the file!";
		return 0;
	}
	input.getline(ac,50,'\n');
	input.getline(pw,50,'\n');
	input.close();
	cout << "username :";
	cin.getline(ac2,50,'\n');
	cout << "password :";
	cin.getline(pw2,50,'\n');
	if (!strcmp(ac2,ac)&&!strcmp(pw2,pw)){
		cout <<"is correct!Access granted!\n";	
	}else{
		cout <<"Invalid password!\n";
	}
	
	return 0;
}
