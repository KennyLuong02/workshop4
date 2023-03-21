#include <iostream>

using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length) ;

int main() {
    int* array;
    int length = 10;
    int sum = 0;

    array = readNumbers();
    sum = secondSmallestSum(array, length);
    cout << sum << endl;

    return 0;
}