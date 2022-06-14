#include <iostream>
using namespace std; 

void pal_c(string s, int l){
	if(l == 2){
		cout<<2<<endl;
		return;
	}
	int flag = -1;
	for(int  i = 0, j = l-1; i < l/2; i++, j--){
		if(s[i] != s[j]){
			if(s[i] == s[j-1]){
				flag = j;
			}else{
				flag = i;
			}
			cout<<flag<<endl;
		}
	}
	if(flag == -1){
		cout<<l/2<<endl;
	}
}

int main() {
	int tCase; cin >> tCase;
	for(int t = 0; t < tCase; t++){
		int s_len = 0; cin >> s_len;
		string s; cin >> s;
		
		pal_c(s,s_len);
	}
	return 0;
}