





#include<iostream>
#include<cmath> 
using namespace std;


void findRoots(int a, int b, int c)
{

    if (a == 0) {
        cout << "Invalid";
        return;
    }

    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));

    if (d > 0) {
        cout << "Roots are real and different ";
        cout << (double)(-b + sqrt_val) / (2 * a) << " "
             << (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
        cout << "Roots are real and same ";
        cout << -(double)b / (2 * a);
    }


    else {
        cout << "Roots are complex ";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_val / (2 * a) << " "
             << -(double)b / (2 * a) << " - i"
             << sqrt_val / (2 * a);
    }
}


int main()
{
    int a,b,c;
    cout<<"Enter the values of a,b,c: "<<endl;
    cin>>a>>b>>c;


    findRoots(a, b, c);
return 0;
}




