#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%2 == 1)cout<<-1;
	else{
		for (int i = 0; i < n; ++i)
		{
			if (i%2 == 0)cout<<i+2<<" ";
			else cout<<i<<" ";
		}
	}

}