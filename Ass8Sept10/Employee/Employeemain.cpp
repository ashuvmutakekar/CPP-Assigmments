#include<iostream>
#include "Employeeheader.h"
using namespace std;
int main()
{
   int n;
   cout<<"Enter number of employee :"<<endl;
   cin>>n;
   Employee e[n];
   cout<<"Enter Information :"<<endl;
   for(int i=0;i<n;i++)
   {
     e[i].Accept();
   }
   cout<<"Entered Information :"<<endl;
   for(int i=0;i<n;i++)
   {
     e[i].Display();

   }
return 0;
   
}
