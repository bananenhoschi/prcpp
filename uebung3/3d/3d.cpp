#include <iostream>

using namespace std;

void resize(int *&array, int oldSize, int newSize) {

    int *temp = new int[newSize];

    int toCopy = oldSize < newSize ? oldSize : newSize;

    for (int i = 0; i < toCopy; ++i) {
        temp[i] = array[i];
    }


    array = temp;
    delete[] temp;

}


int main() {
    int array[6] = {1,2,3,4,5,6};
    int* a;
    a = array;
    int oldSize = 6;
    int newSize = 9;

    resize(a, oldSize, newSize);

    int c = 0;
    while(a[c] != 0) {
        cout << a[c];
        c++;
    }

    return 0;
}