#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <math.h>

int main() {

	int i, quantity;
	float enter_value, S=1, x;

	std::vector <float> a;

	printf("Enter value of x: ");
	scanf("%f", &x);

	printf("How many numbers massive needs? Enter amount : ");
	scanf("%i", &quantity);

	for (i = 0; i <= quantity - 1; i++) {
		printf("enter value of a[%i] =", i);
		scanf("%f", &enter_value);

		a.push_back(enter_value);
		S *= a[i];
	}

	float y = log(x) + sqrt(S);
	printf("y = %f", y);

	return 0;
}