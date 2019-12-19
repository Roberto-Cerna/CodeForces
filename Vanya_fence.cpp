#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,w=0;
	cin>>n>>l;
	int array[n];
	for (int i = 0; i <n ; i++)
	{
		cin>>array[i];
		if(array[i]>l)w +=2;
		else w+=1;
	}
	cout<<w;
}