#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int prev_value = 0;

    for (int i = s.size() - 1; i >= 0; --i) {
        int current_value = roman[s[i]];
        if (current_value < prev_value) {
            result -= current_value;
        } else {
            result += current_value;
        }
        prev_value = current_value;
    }

    return result;
}

int main() {
    string s1 = "III";
    cout << "Input: " << s1 << "\tOutput: " << romanToInt(s1) << endl;

    string s2 = "LVIII";
    cout << "Input: " << s2 << "\tOutput: " << romanToInt(s2) << endl;

    string s3 = "MCMXCIV";
    cout << "Input: " << s3 << "\tOutput: " << romanToInt(s3) << endl;

}

