#include<iostream>
#include "Employeeheader.h"
using namespace std;
Employee::Employee():Eid(0),name("null"),Dept("null")
{

}
Employee::Employee(int Eid,string name,string Dept)
{
  this->Eid=Eid;
  this->name=name;
  this->Dept=Dept;

}
void Employee::Accept()
{
  cout<<"Enter Employee Id:"<<endl;
  cin>>this->Eid;
  cout<<"Emter name :"<<endl;
  cin>>this->name;
  cout<<"Enter Department :"<<endl;
  cin>>this->Dept;
}
void Employee::Display()
{
  cout<<"name:"<<name<<endl;
  cout<<"Eid :"<<Eid<<endl;
  cout<<"Dept:"<<Dept<<endl;
}
