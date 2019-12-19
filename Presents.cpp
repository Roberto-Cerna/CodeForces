#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n+1];
	for (int i = 1; i < n+1; ++i)	cin>>array[i];

	for (int i = 1; i < n+1; ++i)
		{
			for (int j = 1; j < n+1 ; j++)
			{
				if (array[j] == i)
				{
					cout<<j<<" ";
					break;
				}
			}
		}
}