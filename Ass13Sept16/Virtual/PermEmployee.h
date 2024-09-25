#include<iostream>
#include"Employee.h"
using namespace std;
class PermEmployee:public Employee
{
 double insentive;
 public:
 PermEmployee();
 PermEmployee(int id,string name,double salary,double insentive);
 void Accept();
 void Display();
 void calSalary();
};
