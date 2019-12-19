#include<bits/stdc++.h>
using namespace std;

int main()
{
	int X=0,n;
	string S;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>S;
		for (int j = 0; j <3 ; j++)
		{
			if(S[j]== '+'){
				X++;
				break;
			}
			if(S[j] == '-'){
				X--;
				break;
			}
		}
	}
	cout<<X;
	return 0;
}