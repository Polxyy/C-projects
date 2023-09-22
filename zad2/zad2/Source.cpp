#include <iostream>


int main() {
	int sum;
	int count;
    int cnt = 0;
    std::cout << "count: " << std::endl;
    std::cin >> count;
    std::cout << "sum: " << std::endl;
    std::cin >> sum;

    int start = 1, end = (sum + 1) / 2;;
    while (start < end) {
        int sum1 = 0;
        for (int i = start; i <= end; i++) {
            sum1 = sum1 + i;
            if (sum1 == sum) {
                for (int j = start; j <= i; j++)
                {
                    cnt++;
                }
                std::cout << std::endl;
                break;
            }
            if (sum1 > sum)
                break;
        }
        sum1 = 0;
        start++;
    }
    if (count == cnt) {
        int start = 1, end = (sum + 1) / 2;;
        while (start < end) {
            int sum1 = 0;
            for (int i = start; i <= end; i++) {
                sum1 = sum1 + i;
                if (sum1 == sum) {
                    for (int j = start; j <= i; j++)
                    {
                        std::cout << j << " ";

                    }
                    std::cout << std::endl;
                    break;
                }
                if (sum1 > sum)
                    break;
            }
            sum1 = 0;
            start++;
        }
    }
    else {
        std::cout << "Not possible" << std::endl;
    }

    return 0;
}
