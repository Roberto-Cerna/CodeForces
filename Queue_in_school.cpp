#include<bits/stdc++.h>
using namespace std;

string swap(int n,string S){
	for (int i = 0; i < n-1; i++)
	{
		if(S[i]=='B' && S[i+1]=='G'){
			S[i]='G';
			S[i+1] ='B';
			i++;
		}
	}
	return S;	
}

int main(){
	int n,t;
	cin>>n>>t;
	string S;
	cin>>S;
	for (int k = 0; k < t; k++)
		S = swap(n,S);
	cout<<S;


}