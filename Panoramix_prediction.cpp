#include<bits/stdc++.h>
using namespace std;

bool is_prime(int x){
	int div=0;
	for (int i = 1; i <= x; i++)
		if(x%i == 0)div++;
	if(div == 2) return true;
	else return false;
}


int main(){
	int n,m; 
	cin>>n>>m;
	n++;
	while(!is_prime(n))n++;
	if(n == m)cout<<"YES";
	else cout<<"NO";
}