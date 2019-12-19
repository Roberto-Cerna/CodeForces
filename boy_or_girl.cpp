#include<bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin>>S;
	int cont1 = 1;
	for (int i = 1; i < S.length(); ++i)
	{
		int j=i-1;
		bool repite = false;
		while(j>=0){
			if(S[i] == S[j])repite = true;
			j--;
		}
		if(repite == false) cont1++;
	}
	if(cont1%2 == 0)cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";


}