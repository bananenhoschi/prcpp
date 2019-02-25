#include <iostream>
#include "utility.h"

using namespace std;

int main() {
    short modes;


    if(modes & 0x0040 == 0) {
        cout << "mono";
    }else {
        cout << "stereo";
    }

    return 0;
}
