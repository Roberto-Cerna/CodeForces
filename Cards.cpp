#include<bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	int l;
	int n=0,z=0;
	cin>>l;
	cin>>S;
	for (int i = 0; i < l; i++)
	{
		if(S[i]=='n')n++;
		if(S[i]=='z')z++;
	}
	for (int i = 0; i < n; ++i) {
		cout<<"1";
		cout<<" ";
	}
	for (int i = 0; i < z; ++i) {
		cout<<"0";
		cout<<" ";
	}

	return 0;
}