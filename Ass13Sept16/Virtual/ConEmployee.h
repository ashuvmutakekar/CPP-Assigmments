#include<iostream>
#include"Employee.h"
using namespace std;
class ConEmployee:public Employee
{
 double workhour;
 public:
 ConEmployee();
 ConEmployee(int id,string name,double salary,double workhour);
 void Accept();
 void Display();
 void calSalary();
};
