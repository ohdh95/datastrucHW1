#include <stdio.h>

int arr[7] = {4,4,4,4,4,4,4};

void fourarynum(int n, int x) {
	int i;
	int j;

	if (n == 1 && x >= 0) {
		for (j = 6; j > 0; j--) {
			if (arr[j] == 4)
				continue;

			else
				printf("%d", arr[j]);
		}

		printf("%d\n", x);
		return;
	}

	else if ((n >= 1 && n <= 6) && (x >= 0 && x <= 18)) {
		for (i = 0; i < 4; i++) {
			if (i + 3 * (n-1) < x)
				continue;

			else {
				arr[n] = i;
				fourarynum(n-1, x - i);
			}
		}
	}

	else
		return;
}

int main() {
	int digitnum;
	int digitsum;

	scanf("%d", &digitnum);
	scanf("%d", &digitsum);

	fourarynum(digitnum, digitsum);

	return 0;
}


