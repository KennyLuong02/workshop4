#include <iostream>

using namespace std;

extern int *readNumbers();
extern void hexDigits(int *numbers,int length);

int main() {
    int* second_one;
    int length = 10;

    second_one = readNumbers();
    hexDigits(second_one, length);

    return 0;
}