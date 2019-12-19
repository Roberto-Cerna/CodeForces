#include<bits/stdc++.h>
using namespace std;

void swap(int* x, int* y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}


int main(){
	int n;
	cin>>n;
	int array[n], cont=0;
	for (int i = 0; i < n; ++i)cin>>array[i];
	int max,key_max=0,key_min=0,min;
	max = array[0];
	min = array[0];
	for (int i = 1; i < n; ++i)
	{
		if(array[i]>max) {
			max = array[i];
			key_max = i;
		}
		if (array[i]<=min){

			min = array[i];
			key_min = i;
		}
	}
	if (key_max != 0)
	{
		while(key_max !=0){
			if(key_max-1 == key_min)key_min++;
			swap(array[key_max],array[key_max-1]);
			key_max--;
			cont++;
			}
	}
	if (key_min != n-1)
	{
		while(key_min != n-1){
			swap(array[key_min],array[key_min+1]);
			key_min++;
			cont++;
		}	
	}
	cout<<cont;
}

