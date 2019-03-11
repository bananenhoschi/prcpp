//
// Created by Carlo Baumann on 2019-03-10.
//

#include "TextAnalyzer.h"
#include <string>

using namespace std;

TextAnalyzer::TextAnalyzer(string s) {
    text = s;
    setBlanksEnabled(true);
    setCaseSensitive(true);
}

TextAnalyzer::TextAnalyzer() {
    text = "";
    setBlanksEnabled(true);
    setCaseSensitive(true);
}

TextAnalyzer::TextAnalyzer(bool blanksEnabled, bool caseSensitve, string s) {
    setBlanksEnabled(blanksEnabled);
    setCaseSensitive(caseSensitve);
    testText(s);
}


void TextAnalyzer::testText(string t) {
    text = t;

};

void TextAnalyzer::setBlanksEnabled(bool b) {
    blanksIncluded = b;
}

void TextAnalyzer::setCaseSensitive(bool b) {
    caseSensitive = b;
}


float TextAnalyzer::getPercentual(char c) {


    // This solution is not finished
    int size = text.length();
    int numOfChar;

    if (!caseSensitive) {
        string data = text;
        transform(data.begin(), data.end(),
                  data.begin(), ::toupper);
        text = data;
    }
    if (!blanksIncluded) {
        string data = text;
        remove_if(data.begin(), data.end(), isspace);
        text = data;
    }

    for (int i = 0; i < size; i++) {
        if (text[i] == c) {
            numOfChar++;
        }
    }

    return (float) numOfChar * 1 / (float) size;

}
