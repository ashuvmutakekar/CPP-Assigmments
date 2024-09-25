#include<iostream>
#include "Accountheader.h"
using namespace std;
 double acc=281834;
int main()
{
  int n=10;
  Account arr[n];
   
  int cnt=0;
  Account a(acc++,12000);
  arr[cnt++]=a;

  Account b(acc++,25000);
  arr[cnt++]=b;

  cout<<"check balance:"<<endl;
  for(int i=0;i<cnt;i++)
  {
    arr[i].Checkbal();
  }
  cout<<"for Deposite money insert accno:"<<endl;
  double wno;
  for(int i=0;i<cnt;i++)
  { 

   cin>>wno;
   
  if(wno==arr[i].accno)
   arr[i].Deposite(1000);
  }
  cout<<"for Withdraw money insert accno :"<<endl;
  for(int i=0;i<n;i++)
  { double dno;
	  cin>>dno;
	  if(arr[i].accno==dno)
		  arr[i].Withdraw(1000);
  }
return 0;

}

