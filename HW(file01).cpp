#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream read;
	char ch;
	read.open("hello.txt");
	if (!read){
		cout << "You don't have this file!\n";
		cout << "Please open the file!";
		return 0;
	}

	cout << "Reading string from file\n";
	cout << "↓↓↓↓↓↓↓↓↓↓↓↓↓\n";
	while (read.get(ch)){
		cout << ch;
	}
	cout << "\n_______________________________";
	read.close();
	return 0;

}
