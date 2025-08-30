#include<iostream>
#include<cstring>
using namespace std;

class word{
	char *word1;
	char *word2;
	char *concatWord;
public :
	word (const char *w1,const char *w2){
		word1= new char[strlen(w1)+1];
		strcpy(word1,w1);
		word2= new char[strlen(w2)+1];
		strcpy(word2,w2);
		concatWord=nullptr;
	}
	~word(){
		cout<<"Destructor called!!\n";
		delete[] word1;
		delete[] word2;
		delete[] concatWord;
	}
	word(const word &o1){
		word1=new char[strlen(o1.word1)+1];
		strcpy(word1,o1.word1);
		
		word2=new char[strlen(o1.word1)+1];
		strcpy(word1,o1.word2);
		
		concatWord=nullptr;
	}
	void ConcatinationOfWords(){
		int size = strlen(word1)+strlen(word2)+2;
		concatWord= new char[size];
		strcpy(concatWord,word1);
		strcat(concatWord," ");
		strcat(concatWord,word2);
	}
	void DisplayConcatination(){
		cout<<"Word 1:"<<word1<<endl;
		cout<<"Word 2:"<<word2<<endl;
		cout<<"Concatinated word:"<<concatWord<<endl;
	}
	
};
int main (){
	word w1("Zeeshan","Ayaz");
	w1.ConcatinationOfWords();
	w1.DisplayConcatination();
	
	
}