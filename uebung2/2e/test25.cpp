// vtg + 2017-02-09

#include <iostream>
#include "TextAnalyzer.h"

using namespace std;

int main(){
	TextAnalyzer t(true, true, string("Der Eber kotzte in den Wald"));
	cout << "{case & blanks}     : ";
	cout << t.getPercentual('e') << '%' << endl;
	t.setBlanksEnabled(false);
	cout << "{case & noBlanks}   : ";
	cout << t.getPercentual('e') << '%' << endl;
	t.setCaseSensitive(false);
	cout << "{noCase & noBlanks} : ";
	cout << t.getPercentual('e') << '%' << endl;
	t.setBlanksEnabled(true);
	cout << "{noCase & blanks}   : ";
	cout << t.getPercentual('e') << '%' << endl;
	return 0;
}
