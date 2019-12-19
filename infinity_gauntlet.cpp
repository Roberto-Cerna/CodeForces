#include<bits/stdc++.h>
using namespace std;
bool buscar(string S[],string color,int n){
	for (int i = 0; i < n; ++i)
		if(S[i] == color) return true;
	return false;
}

int main(){
	int n;
	cin>>n;
	string S[n];
	for (int i = 0; i < n; ++i)cin>>S[i];
	cout<<6-n<<endl;
	if(buscar(S,"purple",n)==false)cout<<"Power"<<endl;
	if(buscar(S,"green",n)==false)cout<<"Time"<<endl;
	if(buscar(S,"blue",n)==false)cout<<"Space"<<endl;
	if(buscar(S,"orange",n)==false)cout<<"Soul"<<endl;
	if(buscar(S,"red",n)==false)cout<<"Reality"<<endl;
	if(buscar(S,"yellow",n)==false)cout<<"Mind"<<endl;
	
}