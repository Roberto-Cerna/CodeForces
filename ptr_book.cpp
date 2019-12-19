#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int array[7];
	for (int i = 0; i < 7; ++i)cin>>array[i];
	int key = -1;
	while(n > 0){
		key = (key+1)%7;
		n -= array[key];
	}
	cout<<key+1;
}