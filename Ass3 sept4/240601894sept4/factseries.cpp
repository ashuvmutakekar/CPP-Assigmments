#include<iostream>
using namespace std;
int n;
int fact_seri(int n){
if(n <= 0)
	return 1;
else
	return ((n)*(fact_seri(n-1)));
	}
int print_fact_series(int n){
for(int i = 0; i <=n; i++){
	cout<<fact_seri(i)<<endl;
	}
	return 0;
	} 


int main(){


cout<<"Enter the value of n:  "<<endl;
cin>>n;
print_fact_series(n);

return 0;
}
