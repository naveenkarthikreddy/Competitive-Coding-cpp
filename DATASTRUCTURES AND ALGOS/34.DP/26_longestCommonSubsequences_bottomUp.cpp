#include <bits/stdc++.h>
using namespace std;

int main(){

	string s1,s2;
	cin>>s1>>s2;
	int m=s1.size();
	int n=s2.size();

	vector<vector<int>> v(m+1,vector<int>(n+1,0));

	for(int i=0;i<=m;i++){
		for( int j=0;j<=n;j++){
			if(i==0 or j==0){
				v[i][j]=0;
			}
			else if(s1[i]==s2[j]){
				
				v[i][j]=1+v[i-1][j-1];
			}
			else{
				v[i][j]=max(v[i-1][j],v[i][j-1]);
			}

		}
	}
	cout<<v[m][n];

	return 0;
}