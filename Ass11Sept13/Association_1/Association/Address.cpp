#include<iostream>
using namespace std;
class Address
{
 int houseno;
 int laneno;
 string area;
 public :
 Address():houseno(0),laneno(0),area("")
 {}
 void addInfo()
 {
  cout<<"house no:"<<endl;
  cin>>houseno;
  cout<<"Lane no:"<<endl;
  cin>>laneno;
  cout<<"Area :"<<endl;
  cin>>area;
 }
 void Display()
 {
   cout<<"House Number :"<<houseno<<endl;
   cout<<"Lane Number :"<<laneno<<endl;
   cout<<"Area :"<<area<<endl;
 }
 
};
