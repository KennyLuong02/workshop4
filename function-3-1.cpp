#include <iostream>

using namespace std;

int *readNumbers() {
    int* numbers = new int(10);

    for (int i = 0; i < 10 ; i ++) {
        cout << "Enter number: ";
        cin >> *(numbers + i);
    }

    return numbers;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    bool asc = false;

    for (int i = 0; i < 10; i++) {
        if (numbers1[i] == numbers2[i]) {
            asc = true;
        } else {
            asc = false;
            delete[] numbers1;
            delete[] numbers2;
            return asc;
        }
    }

    delete[] numbers1;
    delete[] numbers2;

    return asc;
}
