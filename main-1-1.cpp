#include <iostream>

using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main() {
    int* second_one;
    int length = 10;

    second_one = readNumbers();
    printNumbers(second_one, length);

    return 0;
}