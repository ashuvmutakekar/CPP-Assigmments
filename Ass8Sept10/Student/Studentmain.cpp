#include<iostream>
#include "Studentheader.h"
using namespace std;
int main()
{
  int n;
  cout<<"Enter total number of student you want to enter :";
  cin>>n;
  Student s[n];
  cout<<"Enter Details :";
  for(int i=0;i<n;i++)
  {
    s[i].Accept();
  }

  cout<<"Student Information:"<<endl;
  for(int i=0;i<n;i++)
  {
    s[i].Display();
  }
 Student a(12,"ashu");
 a.Display();
  
return 0;
  
}	
