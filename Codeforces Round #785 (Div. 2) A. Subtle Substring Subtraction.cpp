# include <bits/stdc++.h>
#include <numeric>

using namespace std;

int tCase, len = 0;
string s;

void str_sort(string &str){
	sort(str.begin(), str.end());
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> tCase;
	for(int t = 0; t < tCase; t++){
		cin >> s;
		len = s.length();
		str_sort(s);
		int ar[len];
		for(int i = 0; i < len; i++){
			ar[i] = (int) s[i] % 96;
		}
		if(len > 1 && len % 2 != 0){
			cout <<"Alice " << accumulate(ar + 1, ar + len, 0) - ar[0] << endl;
		}else if(len > 1 && len % 2 == 0){
			cout <<"Alice " << accumulate(ar, ar + len, 0)<< endl;
		}else{
			cout << "Bob " << ar[0] << endl;
		}
	}
	return 0;
}
