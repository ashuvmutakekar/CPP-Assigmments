#include"Mobile.h"
Mobile::Mobile():serialNo(0),modelNo(0),price(0)
{
	brandName[0] = '\0';
}
void Mobile::Accept()
{
 cout<<"Enter Serial Number :"<<endl;
 cin>>serialNo;
 cout<<"Enter Model Number :"<<endl;
 cin>>modelNo;
 cin.get();
 cout<<"Enter Name of Brand :"<<endl;
 cin.getline(brandName, sizeof(brandName));
 cout<<"Enter Price of Mobile :"<<endl;
 cin>>price;
}
void Mobile::Display()
{
  cout<<"Serial Number :"<<this->serialNo<<endl;
  cout<<"Model Number :"<<this->modelNo<<endl;
  cout<<"Brand Name :"<<this->brandName<<endl;
  cout<<"Price :"<<this->price<<endl;

}
