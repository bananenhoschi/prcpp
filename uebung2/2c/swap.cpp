#include <iostream>

using namespace std;

void swapPointers(int *a, int *b) {

    int x = *a;
    *a = *b;
    *b = x;

}

void swapRef(int &a, int &b) {

    int x = a;
    a = b;
    b = x;

}

int main() {
    int x = 42;
    int y = 7;

    swapPointers(&x, &y);

    cout << "After swapping, a=" << x << " and b=" << y << "\n";

    swapRef(x, y);

    cout << "After swapping, a=" << x << " and b=" << y << "";

    return 0;
}


