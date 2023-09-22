//#include <iostream>
//#include <vector>
//
//class Shape {
//
//};
//
//class Rectangle:Shape
//{
//public:
//	int a;
//	int b;
//	Rectangle(int areaA, int areaB)
//		: a(areaA), b(areaB) {};
//	
//	Rectangle() = default;
//
//	
//	void showArea() {
//		std::cout << "Area of rectangle:" << a * b << std::endl;
//	}
//
//private:
//
//};
//
//class Square:Shape {
//public:
//	int a;
//	Square(int sideA) :a(sideA) {};
//	Square() = default;
//	void ShowArea() {
//		std::cout <<"Area of square" << a * a << std::endl;
//	}
//
//};
//
//
//
//int main() {
//	std::vector<Rectangle> rec;
//	bool choice=1;
//	int c = 0;
//	while (choice) {
//		std::cout << "Enter a rectangle?[y/n]" << std::endl;
//		char menu[1];
//		std::cin >> menu;
//		if (menu[0] == 'n') {
//			choice = false;
//			break;
//		}
//		else if (menu[0] != 'y' && menu[0] != 'n') {
//			std::cout << "Wrong input, please enter [y] or [n]" << std::endl;
//			continue;
//		}
//		int a, b;
//		std::cin >> a >> b;
//		rec.emplace_back(a, b);
//		rec[c].showArea();
//		c++;
//		std::cout << '\n';
//	}
//	
//}
//

#include <iostream>
#include <vector>

class Shapes {
public:
	virtual void showArea()const = 0 {};
};

class Rectangle : public Shapes {
public:
	int width, heigth;
	Rectangle(int width, int heigth) : width(width), heigth(heigth) {};
	int calculateArea() const {
		return heigth * width;
	}
	void showArea() const override{
		std::cout << "Area of rectangle: " << calculateArea() << std::endl;
	}
};

class Square : public Shapes {
public:
	int side;
	Square(int side) : side(side) { };
	int calculateArea()const  {
		return side * side;
	}
	void showArea ()const override {
		std::cout << "Area of square: " << calculateArea() << std::endl;
	}
};



int main() {
	std::vector<Shapes*> shape;
	char menu;
	bool asd = true;
	while (asd) {
		std::cout << "[r/s/n]" << std::endl;
		std::cin >> menu;
		if (menu == 'n')break;
		else if (menu != 'r' && menu != 's') continue;
		else if (menu == 'r') {
			int a, b;
			std::cout << "Enter [width] [heigth]: " << std::endl;
			std::cin >> a >> b;
			shape.push_back(new Rectangle(a, b));
		}
		else {
			int a;
			std::cout << "Enter side of square: " << std::endl;
			std::cin >> a;
			shape.push_back(new Square(a));
		}
	}

	for (const auto* x : shape) {
		x->showArea();
		delete x;
	}


	return 0;
}