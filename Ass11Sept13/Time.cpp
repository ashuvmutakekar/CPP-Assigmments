
#include<iostream>
using namespace std;
class Time
{
    int hour;
    int mint;
    int sec;
	public :
    Time():hour(00),mint(00),sec(00)
	{

	}
    Time(int h,int m,int s)
	{
          hour=h;
	  mint=m;
	  sec=s;

	}
    void Display() const
    {
       cout<<"time :"<<hour<<":"<<mint<<":"<<sec<<endl;

    } 
    Time(const Time &t) 
    {
       hour=t.hour;
       mint=t.mint;
       sec=t.sec;

    }

 const Time operator +(const Time &t) const //return constant value ,constant invoking object constant argument
  { 
	  Time res;
     int mt=0;
     int st=0;
     res.sec=sec+t.sec;
     res.mint=mint+t.mint;
     res.hour=hour+t.hour;
     if(res.sec>=60)
     { 
	     res.mint+=1;
	     res.sec-=60;
        
     }
     if(res.mint>=60)
     {

       res.hour+=1;
       res.mint-=60;
     }

return res;
  }
};
int main()
{
  
   Time t1(12,3,45);
   t1.Display();
   Time t2(t1);
   Time t3(23,6,30);
   t3.Display();
   Time t4=t1+t3;
   t4.Display();
   // t1+t3=t4; 
   	
    return 0;
}
