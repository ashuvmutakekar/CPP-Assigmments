#include<iostream>
using namespace std;
class Complex
{
	int real,img;
  static int count;
	public:
        Complex():real(0),img(0)
	{
          count++;
	}	
        Complex(int real,int img)
	{
         cout<<real<<endl;
	 cout<<img<<endl;
	 count++;
	}
         static void Display()

	 {
            cout<<count<<endl;


	 }	

};

int Complex::count=0;
int main()
{
  Complex c1;
  Complex c[3];
  Complex c5;
  Complex c6(12,67);  
  Complex::Display();
  return 0;
}
