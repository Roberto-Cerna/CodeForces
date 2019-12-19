#include<bits/stdc++.h>
using namespace std;

int main(){
	int r,b,d1=0,d2=0;
	cin>>r>>b;
	while(r!=0 && b!=0){
		d1++; r--; b--;
	}
	if(r==0){
		while(b>1){
			d2++; b-=2;
		}
	}
	else if(b==0){
		while(r>1){
			d2++; r-=2;
		}
	}
	cout<<d1<<" "<<d2;
}