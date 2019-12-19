#include <bits/stdc++.h>
using namespace std;
int aux[10000],l=0;
bool is_order(int array[],int p,int u){
	for(int i=p;i<u;i++){
		if(array[i]>array[i+1])return false;
	}
	return true;
}
int max(int array[],int n){
	int max=0;
	for (int i = 0; i < n; ++i)
		if(array[i]>max) max = array[i];
	return max;
}

void snap(int array[],int p,int u){
		if (is_order(array,p,u)){
			aux[l]= u-p+1;
			l++;
		}
		else{
			snap(array,p,(p+u)/2);
			snap(array,(u+p)/2+1,u);
		}
}

int main() {
	int n;
	cin>>n;
	int array[n];
	for (int i = 0; i < n; i++)	cin>>array[i];
		snap(array,0,n-1);
		cout<<endl<<max(aux,l);
	return 0;
}