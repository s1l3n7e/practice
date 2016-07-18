// ����: lexical.cpp
// �����: �������� �.�., �� - 105
// ����: 13.07.2016
// ����������: �������� ��� ������������ �����

#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<vector<string>> lexical(vector<vector<string>> input) {
    string type, sym, cur;
    int state = 1;

    vector<vector<string>> output;

    for (int i = 0; i < input.size(); i++) {
        sym = input[i][0];
        type = input[i][1];

        if (type == "�����" || type == "�����")
            cur += sym;
        else {
            if (cur != "" && !isdigit(cur[0])) {
                output.push_back({cur, "�������������"});
                cur = "";
            }
            else if (cur != "") {
                output.push_back({cur, "�����"});
                cur = "";
            }
            if (type != "������")
                output.push_back({sym, type});
        }

        switch (state) {
            case 1:
                if (type == "�����")
                    state = 2;
                else if (type == "������")
                    state = 1;
                else
                    return output;
                break;
            case 2:
                if (type == "�����")
                    state = 2;
                else if (type == "�����")
                    state = 2;
                else if (type == "������")
                    state = 3;
                else
                    return output;
                break;
            case 3:
                if (type == "�����")
                    state = 4;
                else if (type == "������")
                    state = 3;
                else
                    return output;
                break;
            case 4:
                if (type == "�����")
                    state = 4;
                else if (type == "�����")
                    state = 4;
                else if (type == "������")
                    state = 5;
                else if (type == "�����")
                    state = 6;
                else
                    return output;
                break;
            case 5:
                if (type == "������")
                    state = 5;
                else if (type == "�����")
                    state = 6;
                else
                    return output;
                break;
            case 6:
                if (type == "�����")
                    state = 7;
                else if (type == "������")
                    state = 6;
                else
                    return output;
                break;
            case 7:
                if (type == "�����")
                    state = 7;
                else if (type == "�����")
                    state = 7;
                else if (type == "������")
                    state = 8;
                else if (type == "����")
                    state = 9;
                else
                    return output;
                break;
            case 8:
                if (type == "������")
                    state = 8;
                else if (type == "����")
                    state = 9;
                else
                    return output;
                break;
            case 9:
                if (type == "�����")
                    state = 10;
                else if (type == "������")
                    state = 9;
                else if (type == "����")
                    state = 9;
                else
                    return output;
                break;
            case 10: /* ����� 1 */
                if (type == "�����")
                    state = 10;
                else if (type == "������")
                    state = 11;
                else if (type == "����")
                    state = 12;
                else
                    return output;
                break;
            case 11: /* ������ 7 */
                if (type == "������")
                    state = 11;
                else if (type == "����")
                    state = 12;
                else
                    return output;
                break;
            case 12: /* ����� 1 */
                if (type == "����")
                    state = 13;
                else
                    return output;
                break;
            case 13: /* ����� 2 */
                if (type == "�����")
                    state = 14;
                else if (type == "������")
                    state = 13;
                else if (type == "����")
                    state = 13;
                else
                    return output;
                break;
            case 14: /* ����� 2 */
                if (type == "�����")
                    state = 14;
                else if (type == "������")
                    state = 15;
                else if (type == "����")
                    state = 16;
                else
                    return output;
                break;
            case 15: /* ������ 10 */
                if (type == "������")
                    state = 15;
                else if (type == "����")
                    state = 16;
                else
                    return output;
                break;
            case 16: /* ] */
                if (type == "�����")
                    state = 17;
                else if (type == "������")
                    state = 16;
                else
                    return output;
                break;
            case 17: /* ������� 3 */
                if (type == "�����")
                    state = 17;
                else if (type == "�����")
                    state = 17;
                else if (type == "������")
                    state = 18;
                else
                    return output;
                break;
            case 18: /* ������ 12 */
                if (type == "�����")
                    state = 19;
                else if (type == "������")
                    state = 18;
                else
                    return output;
                break;
            case 19: /* ������� 4 */
                if (type == "�����")
                    state = 19;
                else if (type == "�����")
                    state = 19;
                else if (type == "������")
                    state = 20;
                else if (type == "����")
                    state = 21;
                else if (type == "������")
                    state = -1;
                else
                    return output;
                break;
            case 20: /* ������ 13 */
                if (type == "������")
                    state = 20;
                else if (type == "����")
                    state = 21;
                else if (type == "������")
                    state = -1;
                else
                    return output;
                break;
            case 21: /* [ 2 */
                if (type == "�����")
                    state = 22;
                else if (type == "������")
                    state = 21;
                else
                    return output;
                break;
            case 22: /* ��� 2 */
                if (type == "�����")
                    state = 22;
                else if (type == "�����")
                    state = 22;
                else if (type == "������")
                    state = 23;
                else if (type == "����")
                    state = 24;
                else
                    return output;
                break;
            case 23: /* ������ 15 */
                if (type == "������")
                    state = 23;
                else if (type == "����")
                    state = 24;
                else
                    return output;
                break;
            case 24: /* ] 2 */
                if (type == "������")
                    state = 24;
                else if (type == "������")
                    state = -1;
                else
                    return output;
                break;
            case -1:
                return output;

        }
    }
};