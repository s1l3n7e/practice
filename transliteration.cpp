// ����: transliteration.cpp
// �����: �������� �.�., �� - 105
// ����: 13.07.2016
// ����������: �������� ��� ����� ��������������

#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

map<string, string> CHAR_TYPES {
        {" ", "������"},
        {"=", "�����"},
        {";", "������"}
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
            char_type = "�����";
        else if (LETTERS.find(cur_char[0]) != string::npos)
            char_type = "�����";
        else if (SINGES.find(cur_char[0]) != string::npos)
            char_type = "����";
        else if (CHAR_TYPES.count(cur_char) != 0)
            char_type = CHAR_TYPES[cur_char];
        else
            char_type = "������";

        output.push_back({cur_char, char_type});
    };

    return output;
};