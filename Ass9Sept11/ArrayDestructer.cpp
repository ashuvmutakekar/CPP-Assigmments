#include<iostream>
using namespace std;

class Array {
    int s;
    int* p;

public:
    
    Array() {
        s = 0;
        p = nullptr;
    }

    
    ~Array() {
        delete[] p;
    }

    void Accept() {
        cout << "Enter the size :" << endl;
        cin >> s;

        
        p = new int[s];

        cout << "Enter Array :" << endl;
        for (int i = 0; i < s; i++) {
            cin >> p[i];
        }
    }

    void Display() {
        for (int i = 0; i < s; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array* a = new Array();
    a->Accept();
    a->Display();

   
    delete a;

    return 0;
}

