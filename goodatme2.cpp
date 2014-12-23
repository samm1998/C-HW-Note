
#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream outputFile("file.txt"); //ofstream will create the file if it doesn't exist, ifstream will not
	ifstream inputFile;

	char String[10];

	cout << "Enter a string: ";
	cin.getline(String, 10, '\n');
	cout << "Writting string to file...\n";
	
	outputFile << String;
	

	outputFile.close();

	inputFile.open("file.txt");

	cout << "Reading string from file...\n";

	inputFile.getline(String,10,'\n');


	cout << String<<"\n";




	system("pause");

	return 0;

}
