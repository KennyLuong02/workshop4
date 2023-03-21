#include <iostream>

using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main() {
    int* first_array;
    int* second_array;
    int length = 10;

    first_array = readNumbers();
    cout << endl;
    second_array = readNumbers();
    bool asc = equalsArray(first_array, second_array, length);
    cout << asc << endl;

    return 0;
}