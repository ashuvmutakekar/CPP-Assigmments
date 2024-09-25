#include<iostream>
#include"Mobile.h"
#include<fstream>
using namespace std;
int main()
{
  string str;
  cout<<"Enter File name for store data :"<<endl;
  cin>>str;
  ofstream fout(str,ios::app);
  if(!fout)
  {
   cout<<"Can not open a file :"<<endl;
   return -1;
  }

    int n;
  cout<<"Enter the size :"<<endl;
  cin>>n;
    Mobile m[n];  
    for(int i=0;i<n;i++)
      {
            m[i].Accept();    
     fout.write((char*)&m,sizeof(Mobile));
 

      }

    
      
 fout.close();
return 0;

}

