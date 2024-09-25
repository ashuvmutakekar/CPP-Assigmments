#include<iostream>
#include "Address.cpp"
using namespace std;
class Student
{
  int rollno;
  string name;
  Address addr;
	public:
         Student():rollno(0),name(""),addr()
	{

	}

	 void studentInfo()
	 {
	   cout<<"Enter Roll Number:"<<endl;
	   cin>>rollno;
           cout<<"Enter Name :"<<endl;
	   cin>>name;
	   addr.addInfo();
	   
	 }
	 void displayInfo()
	 {
       
		 cout<<"Roll Number :"<<rollno<<endl;
	  cout<<"Name :"<<name<<endl;
	  addr.Display();

	 }
};
int main()
{
  Student s;
	  s.studentInfo();
          s.displayInfo();
return 0;

}
