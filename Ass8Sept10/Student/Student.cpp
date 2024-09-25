#include<iostream>
#include "Studentheader.h"
using namespace std;
Student::Student():rollno(0),name("NULL")
{

}
Student::Student(int rollno,string name)
{
  this->rollno=rollno;
  this->name=name;

}
void Student::Accept()
{
  cout<<"Enter name :"<<endl;
  cin>>this->name;
  cout<<"Ener Roll no :"<<endl;
  cin>>this->rollno;

}
void Student ::Display()
{
  cout<<"name :"<<this->name<<endl;
  cout<<"rollno:"<<this->rollno<<endl;
}
