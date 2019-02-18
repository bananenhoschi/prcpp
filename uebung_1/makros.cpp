#define MAX(a, b) ((a) < (b) ? (b) : (a))
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 5, y = 10;
    int z = MAX(x++, y++);

    // Gibt 11 zurück
    cout << z;

    return 0;
}
