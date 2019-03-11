// vtg + 2017-02-09

#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){
	LinkedList list1;
	for (int i=7; i>0; --i)
		list1.appendFront(i*i);
	cout << list1 << endl;
	cout << list1.get(0) << endl;
	cout << list1.get(1) << endl;
	cout << list1.get(4) << endl;
	cout << boolalpha;
	cout << list1.contains(16) << endl;
	cout << list1.contains(15) << endl;

	// optional section
	//LinkedList list2(list1);
	//cout << list2 << endl;
	//list2.appendFront(0);
	//cout << list2 << endl;
}
