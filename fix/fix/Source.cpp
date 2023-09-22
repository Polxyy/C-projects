#include <iostream>

#if 0
input number count, count < 250
    input count integers

    repeat
    input divisor
    remove numbers that are divided by divisor

#endif

    void readArray(int array[], int count) {
    for (int c = 0; c < count; c++) {
        std::cin >> array[c];
    }
}

int* removeDivisable(int array[], int count, int divisor, int& resultArrayCounter) {
    int result[250];
    int counter = 0;
    for (int c = 0; c < count; c++) {
        if (array[c] % divisor != 0) {
            result[counter] = array[c];
            counter++;
        }
    }
    resultArrayCounter = counter;
    return result;
}
#if 0
25
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
2

#endif
int main() {
    int count;
    std::cin >> count;
    int numbers[250];

    readArray(numbers, count);

    while (true) {
        int divisor;
        std::cout << "Enter divisor:";
        std::cin >> divisor;
        int resultCounter;
        int* result = removeDivisable(numbers, count, divisor, resultCounter);

        std::cout << std::endl;

        for (int c = 0; c < resultCounter; c++) {
            std::cout << result[c] << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}