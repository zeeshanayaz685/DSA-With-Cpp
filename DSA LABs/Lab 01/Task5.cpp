#include<iostream>
using namespace std;
int main (){
	int length;
	cout<<"Enter Name Length:"<<endl;
	cin>>length;
	
	char *name =new char [length+1];
	
	cout<<"Enter Name:"<<endl;
	cin>>name;
	
	char *ptr=name;
	
	cout<<"YOUR NAME IS:";
	
	while(*ptr!='\0'){
		cout<<*ptr<<" ";
		*ptr++;
	}
	
	delete ptr;
	ptr=NULL;
	return 0;
}