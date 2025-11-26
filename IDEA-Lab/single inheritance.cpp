#include<iostream>
using namespace std;
//Base class
class person {
    public:
    string name;


void getName() {
    cout<<"Enter name:";
    cin>>name;
}

void displayName() {
    cout<<"Name:"<<name<<endl;
}
};

//Derived class
class Student : public person {
    public:
    int rollNo;

    void getRollNo() {
        cout<<"Enter roll number:";
        cin >> rollNo;
    }

    void displayRollNo() {
        cout<<"Roll Number:"<<rollNo<<endl;
    }
};
int main() {
    Student s;

    s.getName();   //Accessing base class function
    s.getRollNo(); //Accessing derived class function

    cout<<"\nStudent Details:\n";
    s.displayName();  //From base class
    s.displayRollNo(); //From derived class

    return 0;
}