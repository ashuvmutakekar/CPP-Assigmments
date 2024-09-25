#include "Address.h"
Address::Address():houseno(0),laneno(0),area("")
{
}
void Address::addAddress()
{
 cout<<"Enter House Number :"<<endl;
 cin>>houseno;
 cout<<"Enter Lane Number :"<<endl;
 cin>>laneno;
 cout<<"Enter Area :"<<endl;
 cin>>area;

}
void Address::displayAddress()
{
 cout<<"Address :"<<endl;
 cout<<"House Number :"<<houseno<<endl;
 cout<<"Lane Number :"<<laneno<<endl;
 cout<<"Area :"<<area<<endl;

}
