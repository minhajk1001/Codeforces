# include <bits/stdc++.h>
 
using namespace std;
 
string str;
int ar[3],x = 0;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	cin >> str; 
	for(int i = 0; i < str.length(); i++){
		switch(str[i]){
			case '1':
				ar[0]++;
				break;
			case '2':
				ar[1]++;
				break;
			case '3':
				ar[2]++;
				break;
		}
	}
	str = "";
	bool flag = false;
	for(int i = 0; i < 3; i++){  
		for(int j = ar[i]; j > 0; j--){
			if(flag){
				str += '+';
			}
			flag = true;
			x = i + 1;
			str += to_string(x);
		}
	}
	cout << str << endl;
	return 0;
}
