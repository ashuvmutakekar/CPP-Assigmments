#include <iostream>
#include <vector>
#include <string>
using namespace std; 
string solve(string a, string b){     
      string ret = ""; 
      int i = a.size()- 1; 
      int j = b.size()- 1; 
      int carry = 0; 
      while(i >= 0 || j >= 0){ 
      int addA = i >= 0 ? a[i] - '0' : 0; 
      int addB = j >= 0 ? b[j] - '0' : 0; 
      int sum = addA + addB + carry; 
      carry = sum / 2; 
      sum %= 2; 
      ret += to_string(sum); 
      i--; 
      j--; 
   } 
   if(carry) 
      ret += to_string(carry);         
                 
      return ret; 
   } 
int main(){ 
   string a = "10110", b = "10010";    
   cout <<solve(a, b); 
   return 0;
}
