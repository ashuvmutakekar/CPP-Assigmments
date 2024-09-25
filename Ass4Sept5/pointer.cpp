#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
  int *p1,a;
  int *p2;
  int *p3;
  
  
   p1=&a;
   *p2=(int)p1;
   *p3=(int)p2;
  cout<<"a:"<<*p2<<endl;
  
  //gives garbage initially
  //*p1=NULL;gives answer initially p=0;
  //int a=20;
  //p1=&a;
  //cout<<p1<<endl;
  //cout << typeid(*p1).name() << endl; find type
  //cout<<*p1;
  return 0;
}
