#include<iostream>
using namespace std;
class Employee
{
  int Eid;
  string name;
  string Dept;
	public:
        Employee();
	Employee(int,string,string);
	void Accept();
	void Display();
};
