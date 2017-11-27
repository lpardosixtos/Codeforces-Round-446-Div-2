#include <bits/stdc++.h>

using namespace std;

int main(void){

	int n;
	long long int sum=0, cap, aux, ans=1;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> aux;
		if(sum<=2000000000-aux && ans==1){
			sum+=aux;
		}
		else{
			ans=0;
		}
	}
	long long int maxi1=0, maxi2=0;
	for(int i=0; i<n; i++){
		cin >> aux;
		if(maxi1<aux){
			maxi2=maxi1;
			maxi1=aux;
		}
		else{
			if(aux>maxi2) maxi2=aux;
		}
	}
	if(ans==0) cout << "NO\n";
	else{
		if(maxi1+maxi2>=sum) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}