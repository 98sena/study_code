#include <iostream>
using namespace std;
int main() {
	int n[20];
	for (int i = 0; i < 20; i++) {
		cin >> n[i];
	}
	int max1 = n[0];
	int max2 = n[0];

	for (int i = 0; i < 20; i++) {
		if (n[i] > max2) {
			max2 = n[i];
			//cout << i << " " << max1 << " " << max2 << endl;
		}
		if (n[i] > max1) {
			max2 = max1;
			max1 = n[i];
			//cout << i << " " << max1 << " " << max2 << endl;
		}
		//cout << i << " -------------------" << endl;

		
	}
	cout << max1 + max2 << endl;
	cout << max1 << " " << max2;
	return 0;
}