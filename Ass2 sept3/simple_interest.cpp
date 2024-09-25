#include<iostream>
using namespace std;

int SI(int P, int R, int N){





int simple_inter;
simple_inter= ((P*R*N)/100);
cout<<simple_inter;
return 0;



}

int main(){

int P, R, N;




cout<<"Enter the values of principle and rate of interest and period of investment: ";
cin>>P>>R>>N;



 SI(P,N,R);


return 0;

}

