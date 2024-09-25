#include<iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
class Employee
{
 int eid;
 string name;
 double salary;
 public:
 Employee();
 double getSalary();
 virtual void Accept()=0;
 virtual void Display()=0;
 virtual void calSalary()=0;
};

#endif
