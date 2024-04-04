#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A[20];
	int k1;
	int sum = 0;

	srand(time(NULL));

	k1 = rand() % 10 + 1;

	printf("Массив A:\n");
	for (int* ptr = A; ptr < &A[19]; ptr++) {
		*ptr = rand() % 201 - 100;
		printf("%d ", *ptr);
		if (*ptr > 0 && *ptr % k1 == 0) {
			sum += *ptr;
		}
	}

	printf("\nСумма положительных элементов, кратных %d: %d\n", k1, sum);

	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int M[8][8];
	int maxRow = 0;
	int maxElement = M[0][0];
	int c = 1;

	int* final = M[0] + 8 * 8;

	srand(time(NULL));

	printf("Двумерный массив M (сгенерированный):\n");
	for (int* ptr = M[0], i = 1; ptr < final; ptr++, i++) {
		*ptr = rand() % 201 - 100;
		printf("%d\t", *ptr);
		if (*ptr > maxElement) {
			maxElement = *ptr;
			maxRow = c;
		}
		if (i % 8 == 0) {
			printf("\n");
			c++;
		}
	}

	printf("Наибольший элемент: %d\n", maxElement);
	printf("Наибольший элемент находится в строке с номером: %d\n", maxRow);

	return 0;
}