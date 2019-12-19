#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	if(n > m){
		cout<<"NO";
		return 0;
	}
	if(n > k){
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
	return 0;
}