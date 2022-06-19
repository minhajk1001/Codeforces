# include <bits/stdc++.h>
 
using namespace std;
 
int tCase,n,m;
long long int rst = 0;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> tCase;
	for(int t = 0; t < tCase; t++){
		cin >> n >> m;
		if(n == 1 && m == 1){
			cout<< 1 << endl;
			continue;
		}
		if(n == 1){
			rst = m*(m+1)/2;
			cout << rst << endl;
			continue;
		}
		rst = (m-1)*(m)/2;
		if(n != 1){
			int idx = m;
			for(int i = 0; i < n; i++){
				rst += idx;
				idx += m;
			}
		}
		cout<< rst << endl;
	}
	return 0;
}
