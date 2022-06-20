#include <iostream>
using namespace std;

int main() {
	
	int n,cnt=0;
	scanf("%d",&n);
	
	int a[(n*2)+2];
	a[0]=n;
	for(int i=1; i<(n*2)+2; i++)
		scanf("%d",&a[i]);
	
	for(int i=2; i<(n*2)+2; i++){
		if((a[i]==a[a[1]*2])&&(a[i+1]==a[a[1]*2+1]))
			cnt++;
	}
	
	printf("%d\n",cnt);

	return 0;
}
