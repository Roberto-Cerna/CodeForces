#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	string S;
	cin>>n;
	cin>>S;
	for (int i = 1; i < n; ++i)
	{
		string aux;
		cin>>aux;
		S += aux;
	}
	int cincos=0,ceros=0;
	
	for (int i = 0; i < n; ++i)
	{
		if(S[i] == '0')ceros++;
		else cincos++;
	}

	if(cincos<9 && ceros>0){
		cout<<"0";
		return 0;
	}
	else if(ceros == 0) {
		cout<<"-1";
		return 0;
	}
	else if(cincos>=9){	
		if(cincos%9 !=0){
			for (int i = 0; i < (cincos/9)*9; ++i)
				cout<<"5";
		}
		else{
			for (int i = 0; i < cincos; ++i)
				cout<<"5";
		}
		for (int i = 0; i < ceros; ++i)
			cout<<"0";
		return 0;
	}
}

	