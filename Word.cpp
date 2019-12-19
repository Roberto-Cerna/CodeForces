#include<bits/stdc++.h>
using namespace std;


bool contador(string S){
	int min=0, may = 0;
	for (int i = 0; i < S.length(); i++)
	{
		if(S[i]<=90) may++;
		else min++;
	}

	if(min < may)return true;
	else return false;
}
int main(){
	string S;
	cin>>S;
	if (contador(S))
	{
		for (int i = 0; i < S.length(); ++i)
			if(S[i]>90) S[i] = char(S[i]- 32);
	}
	else{
		for (int i = 0; i < S.length(); ++i)
			if(S[i]<=90) S[i] = char(S[i]+ 32);
	}

	cout<<S;


}