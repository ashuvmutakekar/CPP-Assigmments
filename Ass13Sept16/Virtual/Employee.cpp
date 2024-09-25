#include"Employee.h"
Employee::Employee():eid(0),name(""),salary(0.0)
{}

void Employee::Accept()
{
  cout<<"Enter Information :"<<endl;
  cout<<"Enter Name :"<<endl;
  cin>>name;
  cout<<"Enter Id :"<<endl;
  cin>>eid;
  cout<<"Enter Salary :"<<endl;
  cin>>salary;
  
}
double Employee::getSalary()
{
return salary;}
void Employee::Display()
{
 cout<<"Employee Information :"<<endl;
 cout<<"Name :"<<name<<endl;
 cout<<"Eid :"<<eid<<endl;

}
void Employee::calSalary()
{
 cout<<"Salary:"<<salary<<endl;
}
