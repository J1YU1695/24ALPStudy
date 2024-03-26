#include <stdio.h>

int main() {
	int n, arr[1001] = { 0, }, rank[1001] = { 0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		rank[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (arr[i] < arr[j])
				rank[i]++;
	}

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n; j++)
		{
			if (rank[j] == i)
				printf("%d\n", arr[j]);
		}
	}



	return 0;
}
