#include <stdio.h>
#include <string.h>

int main() {
	int temp, i = 0;
	char arr[100001];
	char n;

	scanf("%s", arr);

	for (int j = 0; j < strlen(arr) - 1; j++)
	{
		for (int k = 0; k < strlen(arr); k++)
			if (arr[k] < arr[k + 1])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
	}
	printf("%s", arr);

	return 0;
}
