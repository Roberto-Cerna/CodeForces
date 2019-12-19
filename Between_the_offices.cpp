#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, numS=0,numF=0;
	string S;
	cin>>n>>S;
	for (int i = 0; i < n-1; i++)
	{
		if (S[i] == 'S' && S[i+1] == 'F') numF++;
		if (S[i] == 'F' && S[i+1] == 'S') numS++;
	}
	if (numF > numS)cout<<"YES";
	else cout<<"NO";

}