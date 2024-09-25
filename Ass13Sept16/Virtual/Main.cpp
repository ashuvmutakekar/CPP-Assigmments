#include"Employee.h"
#include"PermEmployee.h"
#include"ConEmployee.h"
int main()
{
PermEmployee p;
Employee* e=&p;
e->Accept();
e->Display();
e->calSalary();
ConEmployee c;
e=&c;
e->Accept();
e->Display();
e->calSalary();
return 0;
}

