#include <iostream>


//void enterNums(float &num1,float &num2) {
//
//	std::cout << "Enter the 2 numbers> " << std::endl;
//	std::cin >> num1 >> num2;
//}

//int main() {
//	char operation;
//	float num1;
//	float num2;
//
//
//	std::cout << "Enter opertaion: number1 [+,-,*,/] number2" << std::endl;
//	std::cin >> num1 >> operation >> num2;
//	//std::cout << num1 << operation << num2;
//	switch (operation) {
//	case '+':
//		std::cout << num1 + num2;
//		break;
//	case '-':
//		std::cout << num1 - num2;
//		break;
//	case '*':
//		std::cout << num1 * num2;
//		break;
//	case'/':
//		(num2 != 0) ? std::cout << num1 / num2 : std::cout << "Division by zero not allowed!";
//		break;
//	default:
//		std::cout << "Choose A,S,M,D";
//	}
//
//
//}


//int main() {
//	srand(time(NULL));
//	int const size = 20;
//	int count[size] = { 0 };
//	int num;
//	for (long long int i = 0; i < 20000; i++) {
//		num = (rand() % size + 1);
//		count[num - 1]++;
//	}
//
//	for (int a = 0; a < size;a++) {
//		printf("Count %d: %d\n", a + 1, count[a]);
//	}
//}




//void nacLot(const char cas[]) {
//	std::cout << "@@@@@@@@@@ "<< cas << " @@@@@@@@@@" << std::endl;
//}
//
//int main() {
//	int num;
//	int guess;
//	int tries=1;
//	srand(time(NULL));
//
//	char cas[20];
//
//	std::cin >> cas;
//
//	num = (rand() % 100) + 1;
//	nacLot(cas);
//	do {
//		std::cout << "\t Enter guess: ";
//		std::cin >> guess;
//		if (guess > num) {
//			std::cout << "\t Too high!\n";
//		}
//		else if (guess < num) {
//			std::cout << "\t Too low\n";
//		}
//		else {
//			std::cout << "\t Correct, tries: " << tries << std::endl;
//			nacLot("Lotariqq ");
//		}
//		tries++;
//	} while (guess != num);
//}






//void getUserChoice(char* choice, int maxSize) {
//	std::cout << "Enter your choice: ";
//	std::cin.getline(choice, maxSize);
//}
//
//char getComputerChoice() {
//	srand(time(NULL));
//	char choice = 'a';
//	int num = (rand() % 3) + 1;
//	switch (num) {
//	case 1:choice = 'r'; break; case 2:choice = 'p'; break; case 3:choice = 's'; break;
//	}
//	return choice;
//}
//
//void showChoice(char* choice) {
//	std::cout << choice;
//}
//
//
//char chooseWinner(char player[], char computer) {
//	char result;
//	switch (player[0]) {
//	case 'r': if (computer == 's') {
//		std::cout << "you win!\n";
//		break;
//	}
//			else if (computer == 'p') {
//		std::cout << "You lose!\n";
//		break;
//	}
//	case 'p':if (computer == 'r') {
//		std::cout << "you win!\n";
//		break;
//	}
//			else if (computer == 's') {
//		std::cout << "You lose!\n";
//		break;
//
//	}
//	case 's':if (computer == 'p') {
//		std::cout << "you win!\n";
//		break;
//	}
//			else if (computer == 'r') {
//		std::cout << "You lose!\n";
//		break;
//
//	}
//	default:std::cout << "Invalid input\n"; return result = 'b';
//	}
//}
//
//
//int main() {
//	const int maxs = 9;
//	char usrchoice[maxs];
//	usrchoice[0] = '1';
//	char computerchoice = '1';
//	while (true) {
//		getUserChoice(usrchoice, maxs);
//		computerchoice = getComputerChoice();
//		if (computerchoice == usrchoice[0]) {
//			std::cout << "Tie, try again!" << std::endl;
//			std::cout << computerchoice << std::endl;
//			continue;
//		}
//		char result = chooseWinner(usrchoice, computerchoice);
//		if (result == 'b')continue;
//		else { chooseWinner(usrchoice, computerchoice); break; }
//
//	}
//	std::cout << "Comp choice: " << computerchoice << std::endl;
//	std::cout << "User choice: "; showChoice(usrchoice);
//
//}

//int searchArr(int arr[], int mynum, int size) {
//	int index;
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == mynum) return i;
//	}
//	return -404;
//}
//
//int main() {
//	int array[] = { 9,8,10,11,15,23,634,3,4,5,1,2,6,7, };
//	int size = sizeof(array) / sizeof(int);
//	int index;
//	int myNum;
//
//	std::cout << "Enter the number you are searching for" << std::endl;
//	std::cin >> myNum;
//	index = searchArr(array, myNum, size);
//	if (index == -404) { std::cout << "Number not found"; }
//	else {
//		std::cout << myNum << " found at " << index << " index.\n";
//	}
//}

//void sort(int arr[], int size) {
//	int temp;
//	for (int i = 0; i < size; i++) {
//		for (int k = 0; k < size; k++) {
//			if (arr[i] < arr[k]) {
//				temp = arr[i];
//				arr[i] = arr[k];
//				arr[k] = temp;
// 			}
//		}
//	}
//}
//int main() {
//	int array[] = { 9,5,77,24,57,234,64527,85,2,6,7,443,9,5,77,24,57,234 };
//	int size = sizeof(array) / sizeof(int);
//	sort(array, size);
//	for (int i = 0; i < size; i++) {
//		std::cout << array[i] << std::endl;
//	}
//}


//int getDigit(const int number) {
//	return number % 10 + (number / 10 % 10);
//}
//
//int sumOdd(const std::string cardNumber) {
//	int sum = 0;
//	for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
//		sum += getDigit(cardNumber[i] - '0');
//	}
//	return sum;
//}
//
//int sumEven(const std::string cardNumber) {
//	int sum = 0;
//	for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
//		sum += getDigit((cardNumber[i] - '0') * 2);
//	}
//	return sum;
//}
//
//
//int main() {
//	std::string cardNumber;
//	int result;
//	
//	std::cout << "Card num: " << std::endl;
//	std::cin >> cardNumber;
//	result = sumEven(cardNumber) + sumOdd(cardNumber);
//
//	if (result % 10 == 0) {
//		std::cout << "Valid";
//	}
//	else {
//		std::cout << "Not valid!";
//	}
//
//}



//
//int main() {
//	std::string pizza[] = { "pizza1","pizza2","pizza3" };
//	std::string* piqa = pizza;
//	piqa++;
//	std::cout << *piqa << '\n';
//	piqa = nullptr;
//	std::cout << piqa << '\n';
//	std::string* cipa = NULL;
//	if (cipa == piqa)std::cout << "asd";
//}

void drrawBoard(char* spaces) {};
void playerMove(char* saces, char player) {};
void computerMove(char* spaces, char computer) {};
void checkWinner(char* spaces, char player, char computer) {};




int main() {

}