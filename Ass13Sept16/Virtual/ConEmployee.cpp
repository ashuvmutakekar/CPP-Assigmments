#include"ConEmployee.h"
ConEmployee::ConEmployee():workhour(0.0)
{}

void ConEmployee::Accept()
{
 Employee::Accept(); 
  cout<<"Enter workhour:"<<endl;
  cin>>workhour;
  
}
void ConEmployee::Display()
{
 cout<<"Employee Information :"<<endl;
 Employee::Display();

}
void ConEmployee::calSalary()
{
 
 cout<<"Salary:"<<Employee::getSalary()+workhour<<endl;
}
