// vtg + 2017-02-14

#include <iostream>
#include "BitSet.h"
using namespace std;

int main(){
	cout << "UEB 3.6:" << endl << endl;
	BitSet b1;
	BitSet b2;
	size_t set1[] = {0, 1, 2, 7, 10, 11};
	size_t set2[] = {0, 1, 3, 4, 9, 10};
	b1.addAll(6, set1);
	b2.addAll(6, set2);
	BitSet b3(b2);
	cout << "b1 :  " << b1 << endl;
	cout << "b2 :  " << b2 << endl;
	cout << "----------------------------" << endl;
	b2.unite(b1);
	cout << "b2 :  " << b2 << "  union with b1" << endl;
	cout << "----------------------------" << endl;
	b3.intersect(b1);
	cout << "b3 :  " << b3 << "  intersection with b1" << endl;
	cout << "----------------------------" << endl;
	b3.add(27);
	cout << "b3 :  " << b3 << "  new elements out of bounds" << endl;

}
