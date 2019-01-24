//FACTORIAL
#include<iostream>
#include<conio.h>
using namespace std;
main(){
int a=1,b=1,c,x;
	cin>>x;
	for (int i=1; i<=x; i++){
		c=a*b;
		a=a+1;
		b=c;
		cout<<i<<"  ";
	}
	cout<<"="<<c;
}


