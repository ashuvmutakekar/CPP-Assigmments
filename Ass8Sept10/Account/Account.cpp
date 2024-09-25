#include<iostream>
#include "Accountheader.h"
using namespace std;
Account::Account():accno(0),balance(0)
{
}
Account::Account(double accno,double balance)

{
  this->accno=accno;
  this->balance=balance;

}
void Account::Checkbal()
{
 cout<<"Account No:"<<this->accno<<endl;
 cout<<"Balance :"<<this->balance<<endl;
}
void Account::Deposite(double a)
{
 this->balance+=a;
 cout<<"Balance:"<<this->balance;

}
void Account::Withdraw(double a)
{
 this->balance-+a;
 cout<<"Balance:"<<this->balance;
}
