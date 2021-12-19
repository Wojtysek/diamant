#include <stdio.h>

int main(void) {
	//diamant

	int mezera = 10;

	//vlevo
	for (int j = 0; j < 10; j++) {

		for (int i = 0; i < mezera; i++) {
			printf(" ");
		}
		for (int k = j; k >= 1; k--) {
			printf("%d", k);
		}

		for (int k = 2; k <= j; k++) {
			printf("%d", k);
		}
		printf("\n");
		mezera--;
	}
	mezera = 0;

	//vpravo

}

