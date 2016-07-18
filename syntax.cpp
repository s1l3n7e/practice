// ����: syntax.cpp
// �����: �������� �.�., �� - 105
// ����: 13.07.2016
// ����������: �������� ��� ��������������� �����

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
                if (type == "�������_TYPE")
                    state = 2;
                else
                    return false;
                break;
            case 2:
                if (type == "�������������")
                    state = 3;
                else
                    return false;
                break;
            case 3:
                if (type == "�����")
                    state = 4;
                else
                    return false;
                break;
            case 4:
                if (type == "�������_ARRAY")
                    state = 5;
                else
                    return false;
                break;
            case 5:
                if (type == "����" || type == "�����")
                    state = 5;
                else if (type == "�������_OF")
                    state = 6;
                else
                    return false;
                break;
            case 6:
                if (type == "�������_STRING")
                    state = 7;
                else
                    return false;
                break;
            case 7:
                if (type == "����")
                    state = 8;
                else if (type == "������")
                    return true;
                else
                    return false;
                break;
            case 8:
                if (type == "�������������")
                    state = 9;
                else
                    return false;
                break;
            case 9:
                if (type == "����")
                    state = 10;
                else
                    return false;
                break;
            case 10:
                if (type == "������")
                    return true;
                else
                    return false;
        }
    }
    return false;
}