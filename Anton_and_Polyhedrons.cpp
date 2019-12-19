#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,suma=0;
	cin>>n;
	string S[n];
	for(int i=0;i<n;i++){
		cin>>S[i];
		if(S[i] == "Tetrahedron") suma +=4;
		else if (S[i] == "Cube") suma +=6;
		else if (S[i] == "Octahedron") suma +=8;
		else if (S[i] == "Dodecahedron") suma +=12;
		else if (S[i] == "Icosahedron") suma +=20;
	}
	cout<<suma;
}