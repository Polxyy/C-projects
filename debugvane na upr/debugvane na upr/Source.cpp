#include <iostream>
#if 0

7:44
4 : 54


1000

add <id>
remove <id>
find <id>

print

array 1000

{}
binary search
- split array in half
- check number if in left or right half
- repeat until empty

5
5 4 1 2 3

#endif

void print(const int idArray[], int count);
bool add(int idArray[], int count, int id);
int find(int idArray[], int count, int id);
int slowFind(int idArray[], int count, int id);
// remove();

int main() {
    int idArray[1000] = { 0 };
    int count = 0;

    std::cin >> count;
    for (int c = 0; c < count; c++) {
        int id = 0;
        std::cin >> id;
        if (!add(idArray, c, id)) {
            std::cout << "Already added" << std::endl;
            c--;
        }
        print(idArray, c + 1);
    }

}

bool add(int idArray[], int count, int id) {
    int position = slowFind(idArray, count, id);
    if (position<count) {
        if (idArray[position] == id) {
            return false;
        }
    }

    for (int c = count - 1; c >= position; c--) {
        idArray[c + 1] = idArray[c];
    }

    idArray[position] = id;
    return true;
}

int slowFind(int idArray[], int count, int id) {
    for (int c = 0; c < count; c++) {
        if (idArray[c] >= id) {
            return c;
        }
    }
    return count;
}


int find(int idArray[], int count, int id) {
    return -1;
}


void print(const int idArray[], int count) {
    std::cout << "Data: ";
    for (int c = 0; c < count; c++) {
        std::cout << idArray[c] << ' ';
    }
    std::cout << std::endl;
}