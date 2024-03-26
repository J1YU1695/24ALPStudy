#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int func(int  arr[], int x, int n) {
	int sum = 0;
	int max = *max_element(arr, arr + n);
	vector<int> occur(max + x);
	for (int i = 0; i < n; i++) {
		if (x - arr[i] >= 0 && occur[x - arr[i]] == 1) sum++;
		occur[arr[i]] = 1;
	}
	return sum;
}

int main() {
	int n, x, a;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	cin >> x;
	cout << func(v.data(), x, n);

	return 0;
}
