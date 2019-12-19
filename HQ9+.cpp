#include<bits/stdc++.h>
using namespace std;

int main(){

	string S;
	cin>>S;
	for (int i = 0; i < S.length(); ++i)
		if(S[i]=='H' || S[i] == 'Q' || S[i] == '9'){
			cout<<"YES";
			return 0;
		}
	cout<<"NO";
	return 0;
}