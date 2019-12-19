#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,suma=0,cont =0;
	cin>>n;
	int array[n];
	for (int i = 0; i < n; i++){
		cin>>array[i];
		suma += array[i];
	}
	suma = suma%(n+1);
	if((suma+1)%(n+1) != 1 )cont++;
	if((suma+2)%(n+1) != 1 )cont++;
	if((suma+3)%(n+1) != 1 )cont++;
	if((suma+4)%(n+1) != 1 )cont++;
	if((suma+5)%(n+1) != 1 )cont++;
	cout<<cont;
}