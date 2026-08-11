#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    int empId;
    string branch;
    float basicSalary;
    string designation;
    float grossSalary;

public:
    void getData(){
        cout<<"Enter Employee ID: ";
        cin>>empId;
        cout<<"Enter Branch: ";
        getline(cin>>ws,branch);
        cout<<"Enter Basic Salary: ";
        cin>>basicSalary;
        cout<<"Enter Employee Designation: ";
        getline(cin>>ws,designation);
    }

    void calculateSalary(){
        float hra, da, allowance;

        hra = basicSalary * 0.20;      // 20% HRA
        da = basicSalary * 0.10;       // 10% DA
        allowance = basicSalary * 0.05; // 5% other allowance

        grossSalary = basicSalary + hra + da + allowance;
    }

    void displayData()const{
        cout<<"\n-----Employee Details-----\n";
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Designation: "<<designation<<endl;
        cout<<"Basic Salary: "<<basicSalary<<endl;
        cout<<"Gross Salary: "<<grossSalary<<endl;
    }
};

int main(){

    Employee e1;
    e1.getData();
    e1.calculateSalary();
    e1.displayData();

    Employee e2;
    e2.getData();
    e2.calculateSalary();
    e2.displayData();

    return 0;
}