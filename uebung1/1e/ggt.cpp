#include <iostream>
#include "utility.h"

using namespace std;

int main() {
	utility u;
	int a = 33;
	int b = 21;
	int result = u.ggt(a,b);

	cout << "ggt von a = "<< a << " und b = " << b << " ist " << result << endl;
	return result;
}
