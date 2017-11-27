#include <bits/stdc++.h>

using namespace std;

int main(void){

	ios_base::sync_with_stdio(0);	
	int n, n1;
	cin >> n;
	int A[n];
	int aux;
	n1=n;
	n1--;

	

	while(n1>=0){
		cin >> aux;
		A[n1]=aux;
		n1--;
	}
	
	int ans=0, maxclaw=-1;
	for(int i=0; i<n; i++){
		if(i>maxclaw){
			ans++;
			maxclaw=i+A[i];
		}
		else{
			maxclaw=max(maxclaw, i+A[i]);
		}
	}

	cout << ans << "\n";

	return 0;
}