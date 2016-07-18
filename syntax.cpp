// Файл: syntax.cpp
// Автор: Степанов К.А., КЭ - 105
// Дата: 13.07.2016
// Назначение: исходный код синтаксического блока

#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool syntax_check(vector<vector<string>> input) {
    string type;
    int state = 1;

    for (int i = 0; i < input.size(); i++) {
        type = input[i][1];

        switch(state) {
            case 1:
                if (type == "КЛСЛОВО_TYPE")
                    state = 2;
                else
                    return false;
                break;
            case 2:
                if (type == "ИДЕНТИФИКАТОР")
                    state = 3;
                else
                    return false;
                break;
            case 3:
                if (type == "РАВНО")
                    state = 4;
                else
                    return false;
                break;
            case 4:
                if (type == "КЛСЛОВО_ARRAY")
                    state = 5;
                else
                    return false;
                break;
            case 5:
                if (type == "ЗНАК" || type == "ЦЕЛОЕ")
                    state = 5;
                else if (type == "КЛСЛОВО_OF")
                    state = 6;
                else
                    return false;
                break;
            case 6:
                if (type == "КЛСЛОВО_STRING")
                    state = 7;
                else
                    return false;
                break;
            case 7:
                if (type == "ЗНАК")
                    state = 8;
                else if (type == "ТЧКЗПТ")
                    return true;
                else
                    return false;
                break;
            case 8:
                if (type == "ИДЕНТИФИКАТОР")
                    state = 9;
                else
                    return false;
                break;
            case 9:
                if (type == "ЗНАК")
                    state = 10;
                else
                    return false;
                break;
            case 10:
                if (type == "ТЧКЗПТ")
                    return true;
                else
                    return false;
        }
    }
    return false;
}