#include <iostream>
using namespace std;
int main() {
	int n;
	int hi[50];

	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> hi[i];
		sum += hi[i];
	}
	int hight = sum / n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int diff = hi[i] - hight;
		if (diff > 0) {
			cnt += diff;
		}
	}
	cout << "The minimum number of moves is " << cnt << ".";
	return 0;
}