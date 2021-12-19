#include <stdio.h>

int main(void) {
	//nasobilka
	for (int j = 1; j <= 10; j++) {
		
		for (int i = 1; i <= 10; i++) {
			printf("%4d", i * j);
		}
		printf("\n");
	}
	//diamant
	//sikma plocha(horní 2)
	for (int j = 1; j <= 9; j++) {

		for (int i = 1; i <= j; i++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	//sikma plocha(dolni 2)
	for (int j = 8; j >= 1; j--) {

		for (int i = 1; i <= j; i++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	//sikma plocha(horni 1)
	for (int j = 1; j >= 9; j++) {

		for (int i = 0; j <= 1; j++) {
			printf("%d ", i);
		}
	}
}

