#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string S[n];
	for (int i = 0; i <n ; ++i){
		cin>>S[i];
		if(S[i].length()>10){
			cout<<S[i][0]<<S[i].length()-2<<S[i][S[i].length()-1]<<endl;
		}
		else cout<<S[i]<<endl;
	}
	return 0;
}