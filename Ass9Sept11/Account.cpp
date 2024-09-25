#include<iostream>
using namespace std;
int acc=12345678;
class Account
{
   int Accno;
   double balance;
   
   public :
  Account():Accno(acc),balance(0000)
   {
     Accno=acc++;
   }
   void addAccount()
   {
    cout<<"enter the Balance You want :"<<endl;
    cin>>balance;
   }
   int accno()
   {
    return Accno;
   }
   void Display()
   {
   
    cout<<" Account Number :"<<Accno;
    
    cout<<" Balance:"<<balance<<endl;
   
   }
void Deposit()
   {
   double d;
   
    cout<<"Enter Amount you want to deposit :"<<endl;
    cin>>d;
    balance+=d;
    cout<<"Your Final Balance :"<<balance<<endl;
   
   }
void Withdraw()
   {
   double w;
   
    cout<<"Enter Amount you want to withdrawl:"<<endl;
    cin>>w;
   if (w > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= w;
            cout << "Your Final Balance: " << balance << endl;
        }
   }
};
int main()
{
Account arr[100];
int cnt=0;
 
while(1)
{
  int x;
  cout<<"Enter Option :"<<endl;
  cout<<"1. add account "<<endl<<"2.  Deposit"<<endl<<"3. Withdraw "<<endl<<"4. Delete Account" <<endl<<"5. Account Information "<<endl;
  cin>>x;
  
  switch(x)
{

  case 1:
  {
  
  int n;
    {
    Account *ptr=new Account();
    arr[cnt]=*ptr;
  cout<<"Enter The Information for every account:"<< endl;
  arr[cnt].addAccount();
  arr[cnt].Display();}
  cnt++;}
      break;
  case 2:
  {
  cout<<"In Which account you want to add balance:"<<endl;
  int y;
     cin>>y;
     for(int i=0;i<cnt;i++)
     {
      if( arr[i].accno()==y)  
       arr[i].Deposit();	
     }}
      break;
  case 3 :{
  cout<<"In Which account you want to add balance:"<<endl;
  int z;
     cin>>z;
     for(int i=0;i<cnt;i++)
     {
     if(arr[i].accno()==z)
     arr[i].Withdraw();
  }
	  }
  break;
  case 4:{
  cout<<"Enter account you want to delete :"<<endl;
  int m;
   cin>>m;
   for(int i=0;i<cnt;i++)
   {
	   if(arr[i].accno()==m)
    delete arr;
   }}
     break;
     
  case 5:
       
  {
  cout<<"All Accounts Details:"<<endl;
  for(int i=0;i<cnt;i++)
  {
     
  arr[i].Display();
 }}
  break;

default:
{
cout<<"Enter Correct optiom"<<endl;
exit(0);}
} 
}
return 0;
}
