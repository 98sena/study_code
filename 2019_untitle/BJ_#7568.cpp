#include <iostream>

using namespace std;

 

int max(int p1, int p2) {

	return (p1 > p2) ? 1 : 0;

}

 

int main(void) {

	int N;

	cin >> N;

	int person[50][2];

 

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < 2; j++) {

			cin >> person[i][j];

		}

	}

	int count[50];

	fill_n(count, 50, 0);

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			if (max(person[i][0], person[j][0]) == 0 && max(person[i][1], person[j][1]) == 0) {

				count[i]++;

			}

		}

	}

	for (int i = 0; i < N; i++) {

		cout << count[i] << " ";

	}

 

	return 0;

}
//this is not working on BJ but i got the answer 191025


