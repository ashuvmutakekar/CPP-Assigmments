#include<iostream>
using namespace std;
class Complex
{
  int real;
  int img;
	public:
  Complex():real(0),img(0)
	{

	}
  Complex(int r,int i)
  {
   real=r;
   img=i;
  }
  void Display()
  {
   cout<<"Real :"<<real<<endl;
   cout<<"Img :"<<img<<endl;

  }
  Complex(Complex &c):real(c.real),img(c.img)
  { 
    real=this->real;
    img=this->img;
    
  }
    
  bool operator ==(const Complex &c ) const
  {
     
	  return((img==c.img)&&(real==c.real));
	 //return(*this==c);

  }
  bool operator !=( Complex &c)
  {
	return((img!=c.img)&&(real!=c.real));
    // return(c!=(*this));
  }
  Complex& operator ++()
  {
     ++real;
     return *this;
  }
  Complex operator ++(int)
  {
     Complex a=*this;
     ++real;
     return a;

  }
  
};
int main()
{
 Complex c1(16,56);
 c1.Display();
 Complex c2(c1);
 c2.Display();

if(c1==c2)
{
  cout<<"Equal"<<endl;
}
else
  cout<<"not Equal"<<endl;

Complex c3(23,12);

if(c1!=c3)
{
cout<<"not equal"<<endl;

}
else
cout<<"equal"<<endl;

Complex ps=c1++;
ps.Display();
c1.Display();
++c1;
c1.Display();

return 0;
}
