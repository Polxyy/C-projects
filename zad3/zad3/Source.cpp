#include <iostream>

int main() {
	double k;
	int n;
	std::cin >> k >> n;

	const float check = 1e-6;
	float a = 1;
	float result = k / double(n);
	float b = 0;
	int c = 1;

	do {
		float temp = 1.f;
		for (int c = 0; c < n; ++c) {
			temp *= result;
		}
		b = temp - k;
		const int now = (b > 0.f) - (b < 0);

		if (now != c) {
			a *= 0.75;
			c = now;
		}

		if (b > 0.f) {
			result *= 1.f / (1.f + a);
		}
		else {
			result = result * (1.f + a);
		}
	} while (check < fabs(b));

	std::cout << result;

	return 0;
}