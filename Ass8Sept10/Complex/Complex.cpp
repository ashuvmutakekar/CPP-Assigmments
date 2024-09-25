#include<iostream>
#include "Complexheader.h"
using namespace std;
Complex::Complex():real(0),img(0)
{

}
Complex::Complex(int real,int img)
{
  this->real=real;
  this->img=img;
}
void Complex::Accept()
{
  cout<<"Enter real:"<<endl;
  cin>>this->real;
  cout<<"Enter img :"<<endl;
  cin>>this->img;
}
void Complex::Display()
{
 cout<<"real :"<<real;
 cout<<"img :"<<img;
}
