//
// Created by Carlo Baumann on 2019-03-10.
//
#include <string>
using namespace std;

#ifndef PROJECT_TEXTANALYZER_H
#define PROJECT_TEXTANALYZER_H

class TextAnalyzer {
    public:

        TextAnalyzer();

        TextAnalyzer(string s);

        TextAnalyzer(bool blanksEnabled, bool caseSensitve, string s);

        void setCaseSensitive(bool);
        void setBlanksEnabled(bool);
        void testText(string);
        float getPercentual(char);

    private:
        bool caseSensitive;
        bool blanksIncluded;
        string text;
};


#endif //PROJECT_TEXTANALYZER_H
