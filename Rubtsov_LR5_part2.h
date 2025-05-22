#include <iostream>
#include <string>
#include <limits>

using namespace std;

bool UserInput(string input) {
    if (input.empty()) return false;
    try {
    int number = stoi(input);
    }
    catch (...) 
    { return false; }
    return true;
}

bool isNumber(string input) {
        if (input.empty()) return false;
        
        for (char c : input) {
            if (!isdigit(c)) {
                return false;
            }
        }
        return true;
    }

bool isAlpha(string input) {
        if (input.empty()) return false;
        
        for (char c : input) {
            if (!isalpha(c)) {
                return false;
            }
        }
        return true;
    }

bool UserInputK(const string& input) {
    if (!UserInput(input)) return false;
    if (!isNumber(input)) return false;
    if (isAlpha(input)) return false;
    return true;
}

bool UserInputD(const string& input) {
    if (!UserInput(input)) return false;
    if (!isNumber(input)) return false;
    if (input.length() != 1) return false;
    int d = stoi(input);
    return d >= 1 && d <= 9;
}

int addDigitRight(int K, int D) {
    return K * 10 + D;
}

int addDigitLeft(int K, int D) {
    string s = to_string(D) + to_string(K);
    return stoi(s);
}