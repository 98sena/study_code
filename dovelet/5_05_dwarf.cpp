#include <iostream>
using namespace std;
int main() {
	int n[9];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> n[i];
		sum += n[i];
	}

	int left = sum - 100;
	int not1=0, not2 = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (n[i] + n[j] == left) {
				not1 = i; not2 = j;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i != not1 && i != not2) {
			cout << n[i] << endl;
		}
	}

	return 0;
}