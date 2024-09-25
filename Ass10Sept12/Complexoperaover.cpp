#include<iostream>
using namespace std;
class Complex
{
  int real;
  int img;
  public:
  Complex():real(0),img(0)
  {}
 Complex(int real,int img):real(real),img(img)
 {
  this->real=real;
  this->img=img;
 
 
 }
 Complex operator +(const Complex &c)
 {
  Complex res;
  res.real=this->real+c.real;
  res.img=this->img+c.img;
  return res;
 }
 Complex operator -(const Complex &c)
 {
  Complex res;
  res.real=this->real-c.real;
  res.img=this->img-c.img;
  return res;
 }
 Complex operator *(const Complex &c)
 {
  Complex res;
  res.real=this->real*c.real;
  res.img=this->img*c.img;
  return res;
 }
 Complex operator /(const Complex &c)
 {
  Complex res;
  res.real=this->real/c.real;
  res.img=this->img/c.img;
  return res;
 }
void Display()
{
 cout<<this->real<<endl;
 cout<<this->img<<endl;

}

};
int main()
{
 Complex c1(40,20);
 c1.Display();
 Complex c2(20,10);
 c2.Display();
 cout<<"Addition"<<endl;
 Complex c3=c1+c2;
 c3.Display();
 cout<<"Substraction:"<<endl;
 Complex c4=c1-c2;
  c4.Display();
   cout<<"Multiplication:"<<endl;
 Complex c5=c1*c2;
  c4.Display();
  cout<<"Division:"<<endl;
 Complex c6=c1/c2;
  c4.Display();
  return 0;
}

