#include<iostream>
using namespace std;
int fact(int no)
{
  if(no>1)
  {
   return no*(fact(no-1));
  }
  else 
  {return 1;}
}
int displaySeries(int no)
{
 for(int i=0;i<no;i++)
 {
   cout<<fact(i)<<endl;
 }
 return 0;
}
int main()
{
  int no;
  cout<<"Enter no for factorial :"<<endl;
  cin>>no;

  cout<<"Factorial Series :"<<endl;
  displaySeries(no);
  return 0;

}
