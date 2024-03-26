#include <iostream>
#include <vector>
using namespace std;

int main() {
	int sum = 1, x;
	vector<int> v(10, 0);

	for (int i = 0; i < 3; i++) {
		cin >> x;
		sum *= x;
	}
	while (1) {
		v[sum % 10]++;
		if (sum < 10) break;
		sum /= 10;
	}
	for (int j = 0; j < 10; j++) {
		cout << v[j] << '\n';
	}

	return 0;
}
