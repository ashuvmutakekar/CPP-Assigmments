#include<iostream>
using namespace std;
struct student{
 string name;
 int rollno;

};

void studentDetails(student* s,int n)
{

  cout<<"Enter student details :"<<endl;
  for(int i=0;i<n;i++)
  {
   cout<<"Enter Name :"<<endl;
   cin>>s[i].name;
   cout<<"Enter rollno :"<<endl;
   cin>>s[i].rollno;
  }

}
void Display(student* s,int n)
{
cout<<" student details :"<<endl;
 for(int i=0;i<n;i++)
  {
   cout<<"Enter Name :"<<s[i].name<<endl;
   
   cout<<"Enter rollno :"<<s[i].rollno<<endl;
  
  }
  }
int main()
{
 
  int n;
  cout<<"Enter number of student for entry :"<<endl;
  cin>>n;
   student s[n];
  studentDetails(s,n);
  Display(s, n);
  return 0;

}





