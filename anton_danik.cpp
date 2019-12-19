#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a=0,d=0;
	string S;
	cin>>n>>S;
	for (int i = 0; i < n; ++i)
	{
		if (S[i] == 'A')a++;
		if (S[i] == 'D')d++;	
	}
	if (a>d)cout<<"Anton";
	if (a<d)cout<<"Danik";
	if (a ==d)cout<<"Friendship";

}