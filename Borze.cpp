#include<bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin>>S;
	for (int i = 0; i < S.length(); ++i)
	{
		if(S[i]=='.')cout<<"0";
		if(S[i]=='-'){
			if(S[i+1]=='.')cout<<"1";
			else if(S[i+1]=='-')cout<<"2";
			i++;
		}
	}


}