//increment & decrement
#include<iostream>
#include<conio.h>
using namespace std;
int increment(int a){
	return a+1;
}
int decrement(int a){
	return a-1;
}
main(){
	int x;
	cout<<"enter num:"<<endl;
	cin>>x;
	cout<<increment(x)<<endl;
	cout<<decrement(x)<<endl;
}

