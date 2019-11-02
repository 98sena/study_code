#include <iostream>

using namespace std;

 

int main() {

	int N[100];

	int n;

	cin >> n;

	int min = 1000;

	for (int i = 0; i < n; i++) {

		cin >> N[i];

		if (min > N[i]) {

			min = N[i];

		}

	}

	for (int i = 0; i < n; i++) {

		if (min == N[i]) {

			cout << i+1 << " ";

		}

	}

	return 0;

}
