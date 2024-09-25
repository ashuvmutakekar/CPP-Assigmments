#include<iostream>
using namespace std;
template <class T>
class Array{
 int s;
 T* p;
 public :
	 Array():s(0)
	{

	}
	 Array(int s):s(s)
	{
		p=new T[s];

	}
	 void accept()
	 {
            for(int i=0;i<s;i++)
	    {
              cout<<"Enter element:"<<endl;
	      cin>>p[i];

	    }
	 }
   void display()
   {
     for(int i=0;i<s;i++)
     {
       cout<<p[i];
     }
   }


};
int main()
{
  Array <int>arr[2];
  arr.accept();
  arr.display();
  Array <char>ch[2];
  ch.accept();
  ch.display();
  return 0;


}
