#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, max =0, curr=0;
	cin>>n;
	int matrix[n][2];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin>>matrix[i][j];
		}
		curr += matrix[i][1]-matrix[i][0];
		if(curr>max) max = curr;
	}
	cout<<max;
}