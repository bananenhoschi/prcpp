#include <iostream>

using namespace std;

bool strCompare(char s1[], char s2[]) {

    int i = 0;
    int j = 0;

    while (s1[i] != 0) i++;
    while (s2[j] != 0) j++;

    // while(i != sizeof(s1)) i++;
    // while(j != sizeof(s2)) j++;
    return i == j;

}


int main() {
    char string0[] = {'J', 'a', 'a', 'v', 's', 's', '\0'};
    char string1[] = {'J', 'a', 'a', 'v', 's', '\0'};
    //char string2[] = ?Jaavs?;
    char string3[] = {'J', 'a', 'a'};

    cout << "string0:string1 -> " << std::boolalpha << strCompare(string0, string1) << "\n";
    cout << "string1:string2 -> " << strCompare(string1, string3) << "\n";
    //cout << "string2:string3" << strCompare(string2, string3);
    cout << "string3:string0 -> " << strCompare(string3, string0) << "\n";
    return 0;
}