#include<bits/stdc++.h>
using namespace std;


bool is_beatiful(string S){
	for (int i = 0; i < S.length()-1; i++)
		for (int j = i+1; j < S.length(); j++)
			if(S[i]== S[j])return false;
	return true;
}

int main(){

	string S;
	cin>>S;
	int a = stoi(S)+1;
	S = to_string(a);
	while(!is_beatiful(S)){
		int a = stoi(S)+1;
		S = to_string(a);
	}
	cout<<S;
}