#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex() : real(0), img(0) 
    {
    }
    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
};


ostream& operator<<(ostream& os, const Complex& c) {
    return os << "Real:" << c.real << " Img:" << c.img;
}


istream& operator>>(istream& is, Complex& c) {
    cout << "Enter info: ";
    return is >> c.real >> c.img;
}

int main() {
    Complex c1;
    cin >> c1; 
    cout << c1; 

    return 0;
}

