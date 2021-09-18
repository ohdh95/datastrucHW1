#include <stdio.h>

int main() {
	int digitnum;
	int digitsum;

	scanf("%d", &digitnum);
	scanf("%d", &digitsum);

	if ((digitnum < 1 || digitnum > 6) || (digitsum < 0 || digitsum > 18))
		return 0;
	
	else {
		switch (digitnum) {
			case 1:
				if (digitsum < 4)
					printf("%d, digitsum);

				else
					return 0;

				break;
				
			case 2:
				if (digitsum < 4) {
					for (int i = 0; i < digitsum + 1; i++)
						printf("%d%d", i, digitsum - i);
				}

				else if (digitsum < 7) {
					for (int i = 0; i < 4; i++) {
						if (i < 4 && digitsum - i < 4)
							printf("%d%d", i, digitsum);
					}

				else 
					return 0;

				break;

	
