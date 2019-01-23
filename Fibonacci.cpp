//FIBONACCI
#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a=0,b=1,c,x;
	cin>>x;
	for (int i=1; i<=x; i++){
		c=a+b;
		a=b;
		b=c;
		cout<<c<<endl;
	}
}
