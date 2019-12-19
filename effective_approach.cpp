#include<bits/stdc++.h>
using namespace std;

/*
int linear_search(int array[],int n,int x){
	int comp=0;
	for (int i = 0; i < n; ++i)
	{
		if(array[i] == x){
			comp++;
			return comp;
		}
		comp++;
	}
	return comp;
}

int inverse_linear_search(int array[],int n,int x){
	int comp=0;
	for (int i = n-1; i >=0; i--)
	{
		if(array[i] == x){
			comp++;
			return comp;
		}
		comp++;
	}
	return comp;
}
*/


int main(){

	long long n,comp1=0,comp2=0,aux=0,ind;
	cin>>n;
	int array[n+1];
	for (int i = 1; i < n+1; ++i){
		cin>>ind;
		array[ind] = i;
	}
	int m;
	cin>>m;
	int x;
	for (int i = 0; i < m; ++i){
		cin>>x;
		aux = array[x];
		comp1 += aux;
		comp2 += n+1-aux;
	}
	cout<<comp1<<" "<<comp2;
}