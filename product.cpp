#include<iostream>
#include<string>
using namespace std;

class Product{
private:
    string productName;
    int productId;
    int quantity;
    float price;
    float totalBill;

public:
    void getData(){
        cout<<"Enter Product Name: ";
        getline(cin>>ws,productName);
        cout<<"Enter Product ID: ";
        cin>>productId;
        cout<<"Enter Quantity: ";
        cin>>quantity;
        cout<<"Enter Price: ";
        cin>>price;
    }

    void calculateBill(){
        totalBill = quantity * price;
    }

    void displayData()const{
        cout<<"\n-----Product Details-----\n";
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Product ID: "<<productId<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Total Bill: "<<totalBill<<endl;
    }
};

int main(){

    Product p1;
    p1.getData();
    p1.calculateBill();
    p1.displayData();

    Product p2;
    p2.getData();
    p2.calculateBill();
    p2.displayData();

    return 0;
}