#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int n;
	int scores[1000];

	int sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> scores[i];
		sum += scores[i];
	}

	int avg = sum / n;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		if (avg < scores[i]) cnt++;
	}

	printf("%.3f%%",(float)cnt / n * 100);

	return 0;
}