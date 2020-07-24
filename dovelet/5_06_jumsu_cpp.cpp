#include <iostream>
using namespace std;
int main() {
	int N = 0;
	cin >> N;

	int point = 0;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		int buff = 0;
		cin >> buff;

		if (buff == 1) {
			point++;
			sum += point;
		}
		else {
			point = 0;
		}
	}

	cout << sum;

	return 0;
}
//0.11s