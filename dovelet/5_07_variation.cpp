#include <iostream>
using namespace std;
int main() {
	int N = 0;
	cin >> N;

	float num[100];
	float sum = 0;

	for (int i = 0; i < N; i++) {
		cin >> num[i];
		sum += num[i];
	}

	float avg = sum / N;

	float var = 0;
	
	for (int i = 0; i < N; i++) {
		var += (num[i] - avg)*(num[i]-avg);
	}
	printf("%.2f", var / N); // 출력 형식 유의하기
	return 0;
}