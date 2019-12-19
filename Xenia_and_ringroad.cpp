#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long pos =0 ,n,m,cont=0;
	cin>>n>>m;
	long long array[m];
	for (int i = 0; i < m; ++i){
		cin>>array[i];
		if(array[i]-1>pos){
			cont += array[i]-1-pos;
			pos = array[i]-1;
		}
		else if(array[i]-1<pos){
			cont += n +array[i] - 1 -pos;
			pos = array[i]-1;
		}
	}

	cout<<cont;

	return 0;
}