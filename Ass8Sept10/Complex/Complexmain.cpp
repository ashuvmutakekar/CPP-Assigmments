#include<iostream>
#include "Complexheader.h"
using namespace std;
int main()
{
  Complex c;
  c.Accept();
  Complex c1(12,76);
  c.Display();
  c1.Display();
  return 0;
}
