#include <iostream>
#include <fstream>
using namespace std;
int main() {
	
	fstream num;
	
	int A[4];
	int y=0,z=0;
	num.open("number.txt");
		if (!num){
		cout << "You don't have this file!\n";
		cout << "Please open the file!";
		return 0;
	}
	cout << "The number is :\n";
	if (!num.eof()){
			for (int i;i<4;i++){
				if (!num.eof()){
					num >> A[i];
					cout<<"num:"<<A[i]<<endl;
				}else{
					A[i] = 0;
				}
			}
	}
	cout << "______________________\n";
	cout << "sum : "<<A[0]+A[1]+A[2]+A[3]+A[4] ;
	num.close();
	
	return 0;
}
