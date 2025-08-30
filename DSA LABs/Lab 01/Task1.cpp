#include <iostream>
using namespace std;

class Student {
    string *name;
    int *marks;

public:
    Student(string n) {
        name = new string(n);
        marks = new int[3];
        for (int i = 0; i < 3; i++) {
            marks[i] = 0;
        }
    }

    ~Student() {
        cout << "Destructor called!!\n";
        delete[] marks;
        delete name;
    }

    void SetMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    float averageScore() {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum / 3.0;
    }
    string GetName(){
    	return *name; 
	}
};

int main() {
    Student s1("Zeeshan");
    s1.SetMarks(50, 60, 70);
    Student s2 = s1;

    cout << "Average marks of Student "<<s1.GetName() <<" "<< s1.averageScore() << endl;
    cout << "Average marks of Student "<<s2.GetName()<<" "<< s1.averageScore() << endl;
	
// Because s2 is a shallow copy of s1, both share the same memory
// When destructors run, they will both try to delete the same memory
// which causes a double free error (dangling pointer problem)

    return 0;
}
