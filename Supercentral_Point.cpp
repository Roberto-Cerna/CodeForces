#include<bits/stdc++.h>
using namespace std;


int main(){

	int n,cont =0;
	cin>>n;
	int matrix[n][2];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < 2 ; j++)
			cin>>matrix[i][j];

	for (int i = 0; i < n; ++i)
	{
		bool right = false;
		bool left = false;
		bool upper = false;
		bool lower = false;
		int x = matrix[i][0];
		int y = matrix[i][1];
		for (int k = 0; k < n; k++)
		{
			if(k != i){
				if(x == matrix[k][0] && y < matrix[k][1])upper=true;
				if(x == matrix[k][0] && y > matrix[k][1])lower=true;
				if(x < matrix[k][0] && y == matrix[k][1])right=true;
				if(x > matrix[k][0] && y == matrix[k][1])left=true;
			}
		}
		if(lower && upper && right && left)cont++;
	}

	cout<<cont;
}