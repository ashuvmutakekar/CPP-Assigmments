#include<iostream>
using namespace std;
int addition(int no1,int no2);
int main(){
int no1,no2;
cout<<"Enter two numbers:\n";
cin>>no1>>no2;
addition(no1,no2);
return 0;
}
int addition(int n1,int n2){
int sum=n1+n2;

cout<<"Addition:"<<sum;
return 0;
}


















