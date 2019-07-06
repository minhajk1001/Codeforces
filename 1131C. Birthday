#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int n;
	scanf("%d",&n);
	
	int ar[n];
	for(int i=0; i<n; i++)
		scanf("%d",&ar[i]);
	
	sort(ar, ar+n);
		
	int a[n],i,j,k;

	if(n%2!=0){
		for(i=0,j=1;  j<n;  i++,j+=2)
			a[i]=ar[j];
		
		for(k=i,j=n-1;  j>=0; i++,j-=2)
			a[i]=ar[j];
	}
	
	else{
		for(i=0,j=1;  j<n;  i++,j+=2)
			a[i]=ar[j];
		
		for(k=i,j=n-2;  j>=0; i++,j-=2)
			a[i]=ar[j];
	}
	
		
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
		
	cout<<endl;
	
	return 0;
}
