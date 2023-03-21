#include <iostream>

using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);

int main() {
    int* array;
    int* reverse_array;
    int length = 10;

    array = readNumbers();
    reverse_array = reverseArray(array, 10);
    bool asc = equalsArray(array, reverse_array, 10);
    cout << asc << endl;

    return 0;
}