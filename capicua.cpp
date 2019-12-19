#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	string S;
	cin>>n>>S;
	int cont1 =0, cont2 = n-1;
	for (int i = 1; i <= n/2 ; i++)
	{
		if(S[cont1] == S[cont2]){
			cont1++;
			cont2--;
		}
		else {
			cout<<"No es capicua"<<endl;
			return 0;
		}
	}
	cout<<"Es capicua"<<endl;
	return 0;
}


