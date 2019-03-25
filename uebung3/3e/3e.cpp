#include <iostream>

using namespace std;


void *makeData() {
    float *array = new float[4];
    array[1] = -7;
    array[2] = 4.5;
    array[3] = 1;
    unsigned int *pui = reinterpret_cast<unsigned int *>(array);
    pui[0] = 3;
    return array;
}

int getLength(void *data) {

    unsigned int *a = reinterpret_cast<unsigned int *>(data);
    return *a;

}

float getAverage(void *data) {
    unsigned int a = getLength(data);


    float *array = reinterpret_cast<float *>(data);

    float sum = 0;
    ++array;
    for (unsigned int i = 0; i < a; i++)
        sum += array[i];

    return sum / a;

}

int main() {

    void *data = makeData();

    float avg = getAverage(data);

    cout << avg;
    return 0;
}

