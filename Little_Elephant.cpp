#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long array[n];
	for (int i = 0; i < n; ++i)cin>>array[i];
	long long min = array[0];
	int key = 0;
	for (int i = 1; i < n; ++i)
	{
		if (min > array[i])
		{
			min = array[i];
			key = i;
		}

	}
	for (int i = 0; i < n; ++i)
	{
		if(i != key)
			if(min == array[i]){
				cout<<"Still Rozdil";
				return 0;
			}
	}
	cout<<key+1;

	return 0;
}