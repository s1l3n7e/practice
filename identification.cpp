// ����: identification.cpp
// �����: �������� �.�., �� - 105
// ����: 13.07.2016
// ����������: �������� ��� ����� ������������� �������� ����

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const vector<string> KEY_WORDS = {"ARRAY", "TYPE", "OF", "STRING"};

vector<vector<string>> ident(vector<vector<string>> input) {
    string current;
    int position;

    for (int i = 0; i < input.size(); i++) {
        current = input[i][0];
        transform(current.begin(), current.end(), current.begin(), ::toupper);
        position = distance(KEY_WORDS.begin(), find(KEY_WORDS.begin(), KEY_WORDS.end(), current));

        if (position < KEY_WORDS.size())
            input[i][1] = "�������_" + KEY_WORDS[position];
    }
    return input;
}