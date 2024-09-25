#include<iostream>
using namespace std;
class Array
{
 int s;
 int* p;
 public :
 Array(int size):s(size)
 {
  p=new int[s];
 }
 
 int operator [](int i)
 { int val;
   cout<<"value :";
   cin>>val;
    p[i]=val;
  return p[i];
 }
 void Display()
 {
 
  for(int i=0;i<s;i++)
  {
  
    cout<<this->p[i]<<endl;
  }
 }
 Array(const Array &a)
{
    s=a.s;
    p = new int[s]; 
    for (int i = 0; i < s; i++)
    {
        p[i] = a.p[i];  
  }  }
  Array operator+(const Array &n)
{
   
    int size = s + n.s;
    Array res(size);  
    for (int i = 0; i < s; i++)
    {
        res.p[i] = p[i];
    }
    for (int i = 0; i < n.s; i++)
    {
        res.p[i + s] = n.p[i];
    }
    return res;
}
};
int main()
{
  Array a(2);
 a[0];
 a[1];
 cout<<"Array:";

  
  Array b(a);
  cout<<"after a copy"<<endl;
   b.Display();
  
  Array c(2);
  c[0];
 c[1];
  Array d=a+c;
  cout<<"after a addition";
  
   d.Display();
  
return 0;
}
