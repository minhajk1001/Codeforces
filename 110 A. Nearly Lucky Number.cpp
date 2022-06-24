# include <bits/stdc++.h>

using namespace std;

long long int n;
string str;
int cnt = 0;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> n;
	
	str = to_string(n); 
	for(int i = 0; i < str.length(); i++){
		if(str[i] == '4' || str[i] == '7') cnt++;
	}
	if(cnt == 4 || cnt == 7) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
