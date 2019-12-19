#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int matriz[n][2];
	for (int i = 0; i < n; ++i)
		for (int j= 0; j <2 ; j++)cin>>matriz[i][j];
	int left_open = 0,left_closed , right_open = 0, right_closed;
	for (int i = 0; i < n; ++i)
		if(matriz[i][0] == 1)left_open++;
	for (int i = 0; i < n; ++i)
		if (matriz[i][1] == 1)right_open++;
	left_closed = n - left_open;
	right_closed = n - right_open;
	cout<<min(left_closed,left_open)+min(right_closed,right_open);
}
		