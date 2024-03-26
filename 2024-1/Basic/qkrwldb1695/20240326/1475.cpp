#include <iostream>
using namespace std;

int main() {
	int n, count[10] = { 0, };

	cin >> n;

	while (n != 0) {
		count[n % 10]++;
		n /= 10;
	}

	int sum = (count[6] + count[9] + 1) / 2;
	count[6] = sum;
	count[9] = sum;
	int max = 0;

	for (int i = 0; i < 10; i++) {
		if (count[i] > max) {
			max = count[i];
		}
	}

	cout << max;

	return 0;
}
