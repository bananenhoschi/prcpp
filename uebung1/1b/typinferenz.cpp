
#define MAX_NUMBER 100 
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float data[MAX_NUMBER];
    auto v3 = data[0];

    cout << typeid(v3).name();
    return 0;
}
