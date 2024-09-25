#include<iostream>
using namespace std;
class Array
{
 int s;
 int* p;
 public :
 Array(int s)
 {
  p=new int[s];
 }
 void getAt(int i)
 {
   int val;
   cout<<"enter value:"<<endl;
   cin>>val;
   p[i]=val;
 
 }
  void getFrom(int i)
{

  cout<<p[i]<<endl;

}
 
};
int main()
{
  Array a(2);
  for(int i=0;i<2;i++)
  {
   a.getAt(i);
  
  }
  for(int i=0;i<2;i++)
  {
  
   a.getFrom(i);
  }
  
  Array b=a;
  cout<<"after a copy";
   for(int i=0;i<2;i++)
  {
  
   b.getFrom(i);
  }
  
return 0;
}
