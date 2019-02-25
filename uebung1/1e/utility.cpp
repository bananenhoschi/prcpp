#include "utility.h"


int utility::ggt(int a, int b){
    while ( b != 0) {
        unsigned r = a % b;
        a = b;
        b = r;
    }
    return a;
}