#include<bits/stdc++.h>
using namespace std;

int main(){
	string S,W;
	cin>>S>>W;
	for (int i = 0; i < S.length(); ++i)
	{
		if (S[i] != W[i])cout<<1;
		else cout<<0;
	}
}