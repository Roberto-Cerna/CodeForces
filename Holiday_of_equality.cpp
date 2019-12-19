#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,max=-1,r=0;
	cin>>n;
	int array[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>array[i];
		if(array[i]>max)max=array[i];
	}
	for (int i = 0; i < n; ++i)
	{
		r += max - array[i];
	}
	cout<<r;

}