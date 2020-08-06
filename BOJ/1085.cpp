#include <iostream>
//#include <cmath>

using namespace std;

int distance(int me, int goal) {
	return me - goal > 0 ? me - goal : goal - me;
}
int minimum(int min, int compare) {
	if (min > compare) {
		return compare;
	}
}
int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min = w > h ? w : h;

	min = minimum(min, distance(x, 0));
	min = minimum(min, distance(x, w));
	min = minimum(min, distance(y, 0));
	min = minimum(min, distance(y, h));
	cout << min;
	return 0;
}