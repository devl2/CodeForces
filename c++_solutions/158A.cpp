#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	int *b = new int [n];
	for(int i=0; i<n; i++) {
		cin>>b[i];
	}

	int ans = 0;

	for(int i=0; i<n; i++) {
		if(b[i]>=b[k-1] && b[i] != 0) {
			ans += 1;
		}
	}

	delete [] b;
	
	cout<<ans;

	return 0;
}