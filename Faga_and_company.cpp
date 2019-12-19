#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,e,ways=0;
	cin>>n;
	for (int i = 1; i <= n/2; i++)
	{
		e = n/i -1;
		if(e*i + i == n)ways++;
	}
	cout<<ways;
}