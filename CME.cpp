#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	for (int i = 0; i < n; i++)	{
		cin>>array[i];
		if(array[i] == 1)cout<<"3"<<endl;
		else if(array[i] ==2)cout<<"2"<<endl;
		else if(array[i]%2 == 1)cout<<"1"<<endl;
		else if(array[i]%2 == 0)cout<<"0"<<endl;
	}

}