#include <iostream>
using namespace std;

int main (){
	int std = 5 ;
	int sub= 4;
	int **a = new int *[std];
	for (int i =0 ;i<std;i++){
		a[i]= new int [sub];
	}
	
	cout<<"Enter Marks :"<<endl;
	
	for (int i =0 ;i<std;i++){
		cout<<"For Students "<<i+1<<" : "<<endl;
		for(int j=0;j<sub;j++){
			cout<<"Subject "<<i+1<<" : ";
			cin>>a[i][j];
		}
	}
	int avg[std]={0};
	for(int i =0 ;i<std;i++){
		
		for(int j=0;j<sub;j++){
			avg[i]+=a[i][j];
			}
			avg[i]/=sub;
	}
	
	for(int i =0;i<std;i++){
		cout<<"\nMarks of Student "<<i+1<<" :";
		for(int j=0;j<sub;j++){
			cout<<"\nSubject "<<i+1<<" :"<<a[i][j]<<endl;
				
		}
		cout << "Average: " << avg[i] << endl;
	}
	
	for(int i=0 ;i<std;i++){
		delete[] a[std]; 
	}
	 delete[] a;
	 return 0;	
}
