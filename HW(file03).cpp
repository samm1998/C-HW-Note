#include <iostream>
#include <fstream>
using namespace std;

void Q(int a){
	int b;
	cout << "_____________________________\n";
	while (a!=b){
		cout << "input first number";
		cin >> b;
		if (b<a){
			cout << "sorry,you need to bigger\n";
		}else if (b>a){
			cout << "sorry,you need to smaller\n";
		}
	}
}

void W(int a){
	int b;
	cout << "_____________________________\n";
	while (a!=b){
		cout << "input second number";
		cin >> b;
		if (b<a){
			cout << "sorry,you need to bigger\n";
		}else if (b>a){
			cout << "sorry,you need to smaller\n";
		}
	}
}

void E(int a){
	int b;
	cout << "_____________________________\n";
	while (a!=b){
		cout << "input third number";
		cin >> b;
		if (b<a){
			cout << "sorry,you need to bigger\n";
		}else if (b>a){
			cout << "sorry,you need to smaller\n";
		}
	}
	
}





int main() {
	ifstream input;
	int a,b,c;
	input.open("input.txt");
	if (!input){
		cout << "You don't have this file!\n";
		cout << "Please open the file!";
		return 0;
	}
	input >>a>>b>>c;
	Q(a);
	W(b);
	E(c);
	input.close();
	cout << "_____________________________\n";
	cout << "You are so clever";
	return 0;
}
