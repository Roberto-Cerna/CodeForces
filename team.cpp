#include<bits/stdc++.h>

using namespace std;

int main(){
	int pro=0,n;
	cin>>n;
	int array[n][3];
	for (int i = 0; i < n; ++i)
	{	
		int cont=0;
		for (int j = 0; j < 3; j++)
		{
			cin>>array[i][j];
			if(array[i][j]==1)cont++;
		}
		if(cont>=2)pro++;
	}
	cout<<pro;
}