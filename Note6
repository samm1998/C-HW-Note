#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL)); 
	
	char choose;
	int a,b;
	char op;
	char C;
	int x = 1;
	int q = rand() % 100;
	int p =0;
	
	
	
	
	cout << "打A係估數,打B係計數(A/B)?";
	cin >> choose;
	switch (choose){
	
	case 'A':
	while (q != p){
		cout << "input a number(0-100)\n";
		cin >> p;
		if (q > p)
		cout << "大D啦\n";
		else if (p > q)
		cout << "細D啦\n";
		}
		
	break;
	
	
	
	case 'B':
		while (x >=1){
    x = 0;
	cout <<"pleace input the number!\n";
	cout << "value(+,-,*,/)value\n" ;
	cin >> a >> op >> b;
	if (op == '+')
	cout << a + b;
	else if (op =='-')
	cout << a - b;
	else if (op == '*')
	cout << a*b;
	else if (op == '/')
	cout << a/b;
	cout <<"\nDo you want to play again?Y/N?";
	cin  >> C;
	if (C == 'Y'||C == 'y')
	x = x+1;
	else if (C == 'N'||C == 'n')
	x = x+0;
    }
    break;
    default :
    	cout << "ERROR";
	}	
	system("pause");
		return 0;
}
