#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
  int t=a;
      a=b;
     b=t;
   cout<<a<<endl<<b;  


};
int main()
{
 int n1,n2;
 cout<<"Enter two numbers for swap :"<<endl;
 cin>>n1>>n2;
 swap(n1,n2);
 return 0;

}
