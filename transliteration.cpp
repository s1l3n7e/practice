// Файл: transliteration.cpp
// Автор: Степанов К.А., КЭ - 105
// Дата: 13.07.2016
// Назначение: исходный код блока транслитерации

#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

map<string, string> CHAR_TYPES {
        {" ", "ПРОБЕЛ"},
        {"=", "РАВНО"},
        {";", "ТЧКЗПТ"}
};

const string LETTERS = "ABCDEFGHIJKLMNOPQRSTUWXYZ",
        SINGES = ",+-[].";

vector<vector<string>> transliteration(string input) {

    vector<vector<string>> output;
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    string char_type;
    string cur_char;

    for (int i=0; i<input.size(); i++) {
        cur_char = input[i];

        if(isdigit(cur_char[0]))
            char_type = "ЦИФРА";
        else if (LETTERS.find(cur_char[0]) != string::npos)
            char_type = "БУКВА";
        else if (SINGES.find(cur_char[0]) != string::npos)
            char_type = "ЗНАК";
        else if (CHAR_TYPES.count(cur_char) != 0)
            char_type = CHAR_TYPES[cur_char];
        else
            char_type = "ОШИБКА";

        output.push_back({cur_char, char_type});
    };

    return output;
};