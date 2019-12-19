#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,bill=0;
	cin>>n;
	while(n>=100){
		n = n -	100;
		bill++;
	}
	while(n>=20){
		n = n -	20;
		bill++;
	}
	while(n>=10){
		n = n -	10;
		bill++;
	}
	while(n>=5){
		n = n -	5;
		bill++;
	}
	while(n>=1){
		n = n -	1;
		bill++;
	}

	cout<<bill;

}
