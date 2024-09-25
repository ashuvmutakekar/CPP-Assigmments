#include "Student.h"
Student :: Student():rollno(0),name(""),addr()
{

}
void Student :: addInfo()
{
 cout<<"Enter Information :"<<endl;
 cout<<"Enter Roll Number :"<<endl;
 cin>>rollno;
 cout<<"Enter Name :"<<endl;
 cin>>name;
 addr.addAddress();
}
void Student::displayInfo()
{
 cout<<"Roll Number :"<<rollno<<endl;
 cout<<"Name :"<<name<<endl;
 addr.displayAddress();

}
