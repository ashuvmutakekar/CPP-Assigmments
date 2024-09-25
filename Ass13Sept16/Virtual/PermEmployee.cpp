#include"PermEmployee.h"
PermEmployee::PermEmployee():insentive(0.0)
{}

void PermEmployee::Accept()
{
 Employee::Accept(); 
  cout<<"Enter Insentive:"<<endl;
  cin>>insentive;
  
}
void PermEmployee::Display()
{
 cout<<"Employee Information :"<<endl;
 Employee::Display();

}
void PermEmployee::calSalary()
{
 
 cout<<"Salary:"<<Employee::getSalary()+insentive<<endl;
}
