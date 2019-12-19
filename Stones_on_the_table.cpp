#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cont = 0;
	string S;
	cin>>n>>S;	
	char aux;
	for (int i = 0; i < n; ++i)
	{
	aux = S[i];
	while(S[i]== S[i+1]){
		cont++; i++;
	}
	}
	cout<<cont;
}