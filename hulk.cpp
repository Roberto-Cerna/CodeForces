#include<bits/stdc++.h>
using namespace std;
int main(){
	string love= "I love ";
	string hate= "I hate ";
	int n;
	cin>>n;
	for(int i=0 ; i<n-1;i++){
		if(i%2==0)cout<<hate;
		else cout<<love;
		cout<<"that";
		cout<<" ";
	}
	if((n-1)%2==0)cout<<"I hate it";
	else cout<<"I love it";
}