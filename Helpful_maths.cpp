#include<bits/stdc++.h>
using namespace std;

int main(){
	string S,aux;
	cin>>S;
	int j=0;
	for (int i = 0; i < S.length(); ++i)
		if(i%2 == 0){
			aux += S[i];
			j++;
		}
	for (int i = 0; i < aux.length(); i++)
		for (int j = 0; j < aux.length()-1; j++)
			if((int) aux[j]>(int) aux[j+1]){
			char c = aux[j+1];
			aux[j+1] = aux[j];
			aux[j] = c;
		}
	j = 0;
	for (int i = 0; i < S.length(); ++i)
		if(i%2 == 0){
			S[i] = aux[j];
			j++;
		}
	cout<<S;
}	