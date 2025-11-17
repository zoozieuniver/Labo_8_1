#define _crt_secure_no_warnings
#include <stdio.h>
#include <vector>

int main() {

	int i, quantity;
	float enter_value, S=1, x;

	std::vector <float> a;

	printf("Enter value of x: ");
	scanf("%f", &x);

	printf("How many numbers massive needs? Enter amount: ");
	scanf("%i", quantity);

	for (i = 0, i <= quantity - 1; i++) {
		printf("enter value of massive number %i", i);
		scanf("%f", &enter_value);

		a.push_back(enter_value);
		S *= a[i];
	}

	return 0;
}