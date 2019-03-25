#include <iostream>

using namespace std;

int main() {

    char msg[10];
    char *p;
    char msg2[] = "Hello";

    // msg = "Bonjour" // Array ist nachträglich in seiner Grösse nicht veränderbar
    p = "Bonjour"; // Pointer auf char Array setzen

    // msg = p; // msg ist ein Array mit Grösse 10, p ist ein Pointer auf ein char Array der Grösse 7
    p = msg; // Pointer auf msg setzen
    p[0] = 'H', p[1] = 'i', p[2] = '\0';
    cout << "Content of array p[] is: " << p << endl;


    return 0;
}
