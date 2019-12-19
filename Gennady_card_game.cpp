#include<bits/stdc++.h>
using namespace std;
int main(){
	string T[6];
	for (int i = 0; i < 6; ++i)	cin>>T[i];

	for (int i = 1; i < 6; i++)
		for (int j = 0; j < 2; j++)
		{
			if(j == 0){
				if(T[i][j]==T[0][0]){
					cout<<"YES";
					return 0;
				}
			}
			else{
				if(T[i][j] == T[0][1]){
					cout<<"YES";
					return 0;
				}
			}
		}
	
	cout<<"NO";
	return 0;
}