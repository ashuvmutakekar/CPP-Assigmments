#include<iostream>
using namespace std;
int* sort(int* a,int n)
{
    for(int i=0;i<n;i++)
   {
     for(int j=i+1;j<n;j++)
     {
        int* s=&a[i];
        int* l=&a[j];
        
        if(*s>=*l)
        {
         int temp=*s;
         *s=*l;
         *l=temp;
        } 
        
     
     }
     
  }	    
    return a;
    }
  

int main()
{
  int n;
  cout<<"Enter n :";
  cin>>n;
  int* a=new int[n];
  cout<<"Enter number :"<<endl;
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
   
   
int* x=sort(a,n);

for(int i=0;i<n;i++)
{
 cout<<x[i]<<" ";
}

  return 0;

}





