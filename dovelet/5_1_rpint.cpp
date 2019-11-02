#include <iostream>

using namespace std;

 

int main() {

	int N[1000];

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> N[i];

	}

	for (int i = n - 1; i >= 0; i--) {

		cout << N[i] << " ";

	}

 

	return 0;

}

 
