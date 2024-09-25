#include<iostream>
using namespace std;
void Fact(int &n)
{
 return (n*Fact(n-1));

};
int main()
{
int const a=10;
int &b = a; 
int a= Fact(b);
cout<<a<<endl;
 return 0;


}


