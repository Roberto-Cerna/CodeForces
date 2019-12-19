#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int op[n];
	for (int i = 0; i < n; i++)
	{
		cin>>op[i];
	}
	for (int i = 0; i < n; i++)
	{
		if(op[i] == 1) {
			cout<<"HARD";
			return 0;
		}
	}
	cout<<"EASY";
	return 0;
}