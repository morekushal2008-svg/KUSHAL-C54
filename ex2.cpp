#include<iostream>
#include<string>
using namespace std;

class student{
    private:
        string name;
        int rollno;
        float marks;

    public:
       void inputDetails(){

        cout<<"Enter Student Name: ";
        getline(cin>>ws,name);
        cout<<"Enter Roll No. ";
        cin>>rollno;
        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void displayDetails()const{

        cout<<"\n-----Student Details-----\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No. : "<<rollno<<endl;
        cout<<"Marks:  "<<marks<<endl;
    }
           
};

int main(){

   
     student s1;
    s1.inputDetails();
    s1.displayDetails();

     student s2;
    s2.inputDetails();
    s2.displayDetails();
    return 0;
}