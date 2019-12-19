#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int array[n],ans[m],aux[m],min=0;
	for (int i = 0; i < n; i++)cin>>array[i];
	sort(array,array+n);
	min = array[m-1]-array[0];
	for (int i = 0; i < m; ++i)ans[i] = array[i];

	int k=1,j=0;
	while(k+m != n+1){
		for (int i = k; i <k+m; i++)
		{
			aux[j]=array[i];
			j++;
		}
		if(aux[m-1]-aux[0]<min){
			for (int h = 0; h < m; h++){
				ans[h] = aux[h];
			}
			min = ans[m-1]-ans[0];
		}
		j = 0;
		k++;
	}
	cout<<min;
	return 0;
}