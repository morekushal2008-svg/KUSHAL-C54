#include<iostream> 
using namespace std; 

class Complex { 
private: 
    int real, imag; 

public: 
    // Constructor
    Complex(int r = 0, int i = 0) : real(r), imag(i) {} 

    // Fixed capitalization, typos, and added missing semicolon
    Complex add(Complex x1, Complex x2) { 
        Complex x3; 
        x3.real = x1.real + x2.real; 
        x3.imag = x1.imag + x2.imag; // Fixed .image to .imag
        return x3; // Added missing semicolon
    } 

    Complex subtract(const Complex &c) { 
        return Complex(real - c.real, imag - c.imag); 
    } 

    void display() const { 
        cout << real << "+i" << imag << endl; 
    } 
}; 

int main() { 
    Complex c1(4, 5), c2(8, 9); 

    // Fixed the invalid syntax line here
    Complex sum = c1.add(c1, c2); 
    Complex diff = c1.subtract(c2); 

    cout << "First Complex Number: "; c1.display(); 
    cout << "Second Complex Number: "; c2.display(); 
    cout << "Addition: "; sum.display(); 
    cout << "Subtraction: "; diff.display(); 

    return 0; 
}
