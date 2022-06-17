# include <bits/stdc++.h>
using namespace std;
 
int tCase, a, b;
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int tCase; cin >> tCase;
    for(int t = 0; t < tCase; t++){
		cin >> a >> b;
		string s = "";
		if(a == b){
			for(int i = 0; i < a; i++){
				s = s + "01";
			}
		}
		else if(a < b){
			for(int i = 0; i < a; i++){
				if(i % 2 == 0){
					s = s + "0";
					s = s + "1";
					b--;
				}else{
					s = s + "0";
					s = s + "1";
					b--;
				}
			}
			for(int i = 0; i < b; i++){
				s = s + "1";
			}
		}else{
			for(int i = 0; i < b; i++){
				if(i % 2 == 0){
					s = s + "0";
					s = s + "1";
					a--;
				}else{
					s = s + "0";
					s = s + "1";
					a--;
				}
			}
			for(int i = 0; i < a; i++){
				s = s + "0";
			}
		}
		cout << s << endl;
    }
	return 0;
}
