#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	float array[n];
	float p=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>array[i];
		p += array[i];
	}
	cout<<p/n;
}