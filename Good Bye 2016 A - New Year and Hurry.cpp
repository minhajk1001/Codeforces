# include <bits/stdc++.h>
#include <algorithm>
 
using namespace std;
 
int n,k, tMin = 240, cnt = 0;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	cin >> n >> k;
	tMin -= k; 
	
	for(int i = 1; i <= n; i++){  
		if(tMin < i*5) break;
		if(tMin < 5){
			break;
		}else{
			cnt++; 
			tMin -= (i*5);
		}
	}
	cout << cnt << endl;
	return 0;
}
