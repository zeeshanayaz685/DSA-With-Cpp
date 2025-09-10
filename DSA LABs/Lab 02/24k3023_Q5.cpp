#include <iostream>
using namespace std;

int main (){
	int r,c;
	cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
	int **a1 = new int*[r];
	int **a2 = new int*[r];
	for(int i =0 ;i<r;i++){
		a1[i]= new int[c];
		a2[i]= new int[c];
	} 
	
	for(int i=0 ;i<r;i++){
		for(int j=0 ;j<c;j++){
			cout << "Enter element for array 1 at index [" << i << "][" << j << "]: ";
			cin >> a1[i][j];
			cout << "Enter element for array 2 at index [" << i << "][" << j << "]: ";
			cin >> a2[i][j];	
		}
	}
	
	for(int i=0 ;i<r;i++){
		for(int j=0 ;j<c;j++){
			a1[i][j]-=a2[i][j];
		}
	}
	
	cout<<"Subtracted Array=\n";
	for(int i=0 ;i<r;i++){
		for(int j=0 ;j<c;j++){
			cout<<a1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i =0 ;i<r;i++){
		delete a1[r];
		delete a2[r];
	}
	delete a1,a2;
}
