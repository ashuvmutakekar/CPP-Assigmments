#include<iostream>
#include"Mobile.h"
#include<fstream>
using namespace std;
int main()
{
  ifstream fin("studentfile.txt",ios::binary);
  if(!fin)
  {
   cout<<"Can not open a file :"<<endl;
   return -1;
  }



  int n;
    cout<<"enter Size to display how many mobile here:"<<endl;
    cin>>n;
    Mobile m[n];
    for(int i=0;i<n;i++)
    {
     fin.read((char*)&m[i],sizeof(Mobile));
     if(fin.eof())
     {
	     cout << "Error reading data or end of file reached." << endl;
            break;
     }
 
    }
          for(int i=0;i<n;i++)
      {
            m[i].Display();
      }
  
  
  fin.close();

return 0;

}

