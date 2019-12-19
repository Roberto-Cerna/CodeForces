#include<bits/stdc++.h>
using namespace std;

bool is_over(int array[],int n){
	bool flag = true;
		for (int i = 0; i < n ; ++i)
			if(array[i] != 0){
				flag = false;
				return flag;
			}

	return flag;
}

int main(){
	int n,m,key;
	cin>>n>>m;
	int array[n];
	for (int i = 0; i < n; ++i)cin>>array[i];


	
	while(!is_over(array,n))
	{	
		for (int i = 0; i < n; ++i)
		{
			if(array[i]>m)	array[i] -= m;
			else if(array[i]<=m && array[i] !=0){
				key = i;
				array[i] = 0;
			}
		}
	}
		
	cout<<key+1;
}
