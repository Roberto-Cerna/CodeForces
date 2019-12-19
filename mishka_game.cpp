#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int d1,d2,M=0,C=0;
	for (int i = 0; i < n; i++)
	{
		cin>>d1>>d2;
		if (d1>d2)M++;
		if (d2>d1)C++;
	}
	if (M>C)cout<<"Mishka";
	if (C>M)cout<<"Chris";
	if (C==M)cout<<"Friendship is magic!^^";

}