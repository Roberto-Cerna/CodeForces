#include<bits/stdc++.h>
using namespace std;

int search(int array[],int n, int x){
	for (int i = 1; i <n+1 ; ++i)
	{
		if(array[i] == x){
			array[i] = 0;
			return i;
		}
	}
	return 0;
}


int main()
{
	int n;
	cin>>n;
	int array[n];
	for (int i = 0; i < n; ++i)cin>>array[i];
	int min = abs(array[0]-array[1]);
	int key1 = 0, key2 = 1;
	for (int i = 1; i <n-1 ; ++i)
	{
		if(abs(array[i+1]-array[i])<min){
			min = abs(array[i+1]-array[i]);
			key1 = i;
			key2 = i+1;
		}
	}

	if(abs(array[n-1]-array[0])<min){
			min = array[n-1]-array[0];
			key1 = n-1;
			key2 = 0;
		}

	cout<<key1+1<<" "<<key2+1;
}