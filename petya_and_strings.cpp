#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;

	for (int i = 0; i <s1.length() ; ++i)
	{
		if(s1[i]>=97) s1[i] -= ' ';
		if(s2[i]>=97) s2[i] -= ' ';
	}
	for (int i = 0; i < s1.length(); ++i)
	{
		if(s1[i]>s2[i]){
			cout<<"1";
			return 0;
		}
		if(s1[i]<s2[i]){
			cout<<"-1";
			return 0;
		}
	}
	cout<<"0";
	return 0;
}