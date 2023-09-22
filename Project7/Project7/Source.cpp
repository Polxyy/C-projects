#include <iostream>

int main() {
	int mili;
	int hours, days, minutes, seconds;
	std::cout << "Enter miliseconds: " << std::endl;
	std::cin >> mili;
	seconds = mili / 1000;
	mili %= 1000;
	minutes = seconds / 60;
	seconds %= 60;
	hours = minutes / 60;
	minutes %= 60;
	days = hours / 24;
	hours %= 24;
	if (days != 0)
	{
		std::cout << days << ":" << hours << ":" << minutes << ":" << seconds << ":" << mili;
	}
	else if (days = 0,hours != 0)
	{
		std::cout << hours << ":" << minutes << ":" << seconds << ":" << mili;
	}
	else if (days =0 , hours = 0, minutes != 0) {
		std::cout << minutes << ":" << seconds << ":" << mili;
	}
	else if (days = 0, hours = 0, minutes = 0, seconds != 0) {
		std::cout << seconds << ":" << mili;
	}
	else {
		std::cout << mili;
	}
	return 0;
}