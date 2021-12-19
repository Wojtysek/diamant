#include <stdio.h>

int main(void) {
	//diamant

	int mezera = 9;

	//vlevo
	for (int j = 0; j <= 9; j++) {

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
	mezera = 1; //LG-ho nápad

	//vpravo
	for (int j = 8; j >= 0; j--) {
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
		mezera++;
	}
}

