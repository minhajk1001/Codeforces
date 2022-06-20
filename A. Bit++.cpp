# include <bits/stdc++.h>
 
using namespace std;
 
int tCase, rst = 0;
string str;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	cin >> tCase;
	for(int t = 0; t < tCase; t++){
		cin >> str;
		if(str[1] == '+'){
			rst++;
		}else{
			rst--;
		}
	}
	cout << rst << endl;
	return 0;
}