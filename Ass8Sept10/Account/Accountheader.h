#include<iostream>
using namespace std;

class Account
{
        
	double balance;
        
	public:
	 double accno;
	
	Account();
	Account(double,double);
	void Deposite(double);
	void Withdraw(double);
	void Checkbal();

};

