#include <iostream>

using namespace std;

int *fillArr(int arr[], int d1) {
    for (int i = 0; i < d1; ++i) {
        arr[i] = 17;
    }
    return arr;
}


int main() {
    int y[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 10;
    int *a = fillArr(y, size);
    for (int i = 0; i < size; ++i) {
        cout << a[i] << endl;
    }
    return 0;
}