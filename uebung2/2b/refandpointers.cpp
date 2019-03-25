#include <iostream>

using namespace std;

int main() {


    int i = 'a';
    cout << i;

    /*   const int ic = i;
       cout << ic;

       const int *pic = &ic;
       cout << *pic;

        // int *const cpi = &ic;
       const int *const cpic = &ic;
       cout << cpic;
       */
    //int& i = 'a';
    const int ic = i;
    // const int& ric = &ic;
    //int& const rpi = &ic;

    const int &const cpic = &ic;

}
