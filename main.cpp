#include <iostream>
#include <cmath>

using namespace std;

void nzs (int m ,int n){
	int x,i;
	x=m*n;
	for(i=1;i<=x;i++){
		if(x%i==0 && i%m==0 && i%n==0){
			cout<<i<<endl;
			break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[n], b[n];
	a[n]={0};
	b[n]={0};
	for(int i = 0;i < n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i = 0;i < n;i++){
		nzs(a[i],b[i]);
	}
}
