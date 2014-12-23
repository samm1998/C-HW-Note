# include <iostream>
# include <string >
using namespace std;

int HCF(int a,int b){
	int h;
while(a!=b)
{
if(a>b){
a=a-b;
h=a;
}
else
b=b-a;
h =b;
}
return h;
	}

int LCM(int c,int a,int b){
	int l;
	l = a*b/c;
	return l;
	}



int main()
{
	int a,b,c,f=1;
	char d;
system ("color F0");
while (f>0){
cout<< "input a nemberA : ";
cin>>a;
cout<< "input a nemberB : ";
cin>>b;
HCF(a,b);
cout<< "HCF = " << HCF(a,b)<<endl;
c = HCF(a,b);
cout<< "LCM = " << LCM(c,a,b)<<endl;
cout << "again?Y/N?\n";
cin >> d;
switch (d){
	case 'Y':case 'y':
		f = 1;
	system ("cls");
	break;
	case 'N':case 'n':
	    f = 0;
	break;    
}		
}

return 0;
}
