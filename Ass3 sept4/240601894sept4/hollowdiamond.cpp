#include <iostream>
using namespace std;

int main(){
	int n=5;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			cout<<"*";
			}
		for(j=0;j<i;j++){
			cout<<" ";
			}
		for(j=0;j<i;j++){
			cout<<" ";
			}
		for(j=0;j<n-i;j++){
			cout<<"*";
			}
		cout<<"\n";
}
	for(i=0;i<n-1;i++){
		for(j=0;j<i+2;j++){
			cout<<"*";
			}
		for(j=1;j<n-i-1;j++){
			cout<<" ";
			}
		for(j=1;j<n-i-1;j++){
			cout<<" ";
			}
		for(j=0;j<i+2;j++){
			cout<<"*";
			}
		cout<<"\n";
		}
	return 0;
	}
