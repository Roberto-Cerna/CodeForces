#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,group=1;
	cin>>n;
	string S[n];
	for (int i = 0; i < n; i++)cin>>S[i];	
	for (int i = 0; i < n-1; i++)
		if(S[i][1]==S[i+1][0])group++;
	
	cout<<group;
}