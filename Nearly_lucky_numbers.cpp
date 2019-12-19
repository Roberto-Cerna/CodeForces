#include<bits/stdc++.h>
using namespace std;

bool is_lucky(int a){
	string number = to_string(a);
	for (int i = 0; i <number.length() ; ++i)
	{
		if(number[i] != '4' && number[i] != '7') {
			return false;
		}		
	}
	return true;
}

int main(){
	string S;
	cin>>S;
	int cont=0;
	for (int i = 0; i < S.length(); ++i)
		if (S[i] == '4' || S[i] == '7' )cont++;

	if(is_lucky(cont))cout<<"YES";
	else cout<<"NO";
}