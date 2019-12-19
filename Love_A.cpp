#include<bits/stdc++.h>
using namespace std;

bool is_good(string S){
	int a=0;
	for (int i = 0; i < S.length() ; ++i)
		if (S[i] == 'a') a++;
	if(a > S.length()/2)return true;
	return false;
}
int number_of_a(string S){
	int a=0;
	for (int i = 0; i < S.length() ; ++i)
		if (S[i] == 'a') a++;
	return a;
}
int main(){
	int n;
	string S;
	cin>>S;
	if(is_good(S)){ 
		cout<<S.length();
		return 0;
	}	
		n = 2*number_of_a(S)-1;
		cout<<n;
}
