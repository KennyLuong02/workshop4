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

int *reverseArray(int *numbers1,int length) {
    int* numbers2 = new int(length);

    for (int i = 0; i < length ; i ++) {
        numbers2[i] = numbers1[length - i - 1];
    }

    return numbers2;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    bool asc = true;

    for (int i = 0; i < length; i++) {
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
