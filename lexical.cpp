// тЮИК: lexical.cpp
// юБРНП: яРЕОЮМНБ й.ю., йщ - 105
// дЮРЮ: 13.07.2016
// мЮГМЮВЕМХЕ: ХЯУНДМШИ ЙНД КЕЙЯХВЕЯЕНЦН АКНЙЮ

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

        if (type == "асйбю" || type == "жхтпю")
            cur += sym;
        else {
            if (cur != "" && !isdigit(cur[0])) {
                output.push_back({cur, "хдемрхтхйюрнп"});
                cur = "";
            }
            else if (cur != "") {
                output.push_back({cur, "жекне"});
                cur = "";
            }
            if (type != "опнаек")
                output.push_back({sym, type});
        }

        switch (state) {
            case 1:
                if (type == "асйбю")
                    state = 2;
                else if (type == "опнаек")
                    state = 1;
                else
                    return output;
                break;
            case 2:
                if (type == "асйбю")
                    state = 2;
                else if (type == "жхтпю")
                    state = 2;
                else if (type == "опнаек")
                    state = 3;
                else
                    return output;
                break;
            case 3:
                if (type == "асйбю")
                    state = 4;
                else if (type == "опнаек")
                    state = 3;
                else
                    return output;
                break;
            case 4:
                if (type == "асйбю")
                    state = 4;
                else if (type == "жхтпю")
                    state = 4;
                else if (type == "опнаек")
                    state = 5;
                else if (type == "пюбмн")
                    state = 6;
                else
                    return output;
                break;
            case 5:
                if (type == "опнаек")
                    state = 5;
                else if (type == "пюбмн")
                    state = 6;
                else
                    return output;
                break;
            case 6:
                if (type == "асйбю")
                    state = 7;
                else if (type == "опнаек")
                    state = 6;
                else
                    return output;
                break;
            case 7:
                if (type == "асйбю")
                    state = 7;
                else if (type == "жхтпю")
                    state = 7;
                else if (type == "опнаек")
                    state = 8;
                else if (type == "гмюй")
                    state = 9;
                else
                    return output;
                break;
            case 8:
                if (type == "опнаек")
                    state = 8;
                else if (type == "гмюй")
                    state = 9;
                else
                    return output;
                break;
            case 9:
                if (type == "жхтпю")
                    state = 10;
                else if (type == "опнаек")
                    state = 9;
                else if (type == "гмюй")
                    state = 9;
                else
                    return output;
                break;
            case 10: /* жхтпю 1 */
                if (type == "жхтпю")
                    state = 10;
                else if (type == "опнаек")
                    state = 11;
                else if (type == "гмюй")
                    state = 12;
                else
                    return output;
                break;
            case 11: /* опнаек 7 */
                if (type == "опнаек")
                    state = 11;
                else if (type == "гмюй")
                    state = 12;
                else
                    return output;
                break;
            case 12: /* рнвйю 1 */
                if (type == "гмюй")
                    state = 13;
                else
                    return output;
                break;
            case 13: /* рнвйю 2 */
                if (type == "жхтпю")
                    state = 14;
                else if (type == "опнаек")
                    state = 13;
                else if (type == "гмюй")
                    state = 13;
                else
                    return output;
                break;
            case 14: /* жхтпю 2 */
                if (type == "жхтпю")
                    state = 14;
                else if (type == "опнаек")
                    state = 15;
                else if (type == "гмюй")
                    state = 16;
                else
                    return output;
                break;
            case 15: /* опнаек 10 */
                if (type == "опнаек")
                    state = 15;
                else if (type == "гмюй")
                    state = 16;
                else
                    return output;
                break;
            case 16: /* ] */
                if (type == "асйбю")
                    state = 17;
                else if (type == "опнаек")
                    state = 16;
                else
                    return output;
                break;
            case 17: /* йкякнбн 3 */
                if (type == "асйбю")
                    state = 17;
                else if (type == "жхтпю")
                    state = 17;
                else if (type == "опнаек")
                    state = 18;
                else
                    return output;
                break;
            case 18: /* опнаек 12 */
                if (type == "асйбю")
                    state = 19;
                else if (type == "опнаек")
                    state = 18;
                else
                    return output;
                break;
            case 19: /* йкякнбн 4 */
                if (type == "асйбю")
                    state = 19;
                else if (type == "жхтпю")
                    state = 19;
                else if (type == "опнаек")
                    state = 20;
                else if (type == "гмюй")
                    state = 21;
                else if (type == "рвйгор")
                    state = -1;
                else
                    return output;
                break;
            case 20: /* опнаек 13 */
                if (type == "опнаек")
                    state = 20;
                else if (type == "гмюй")
                    state = 21;
                else if (type == "рвйгор")
                    state = -1;
                else
                    return output;
                break;
            case 21: /* [ 2 */
                if (type == "асйбю")
                    state = 22;
                else if (type == "опнаек")
                    state = 21;
                else
                    return output;
                break;
            case 22: /* хлъ 2 */
                if (type == "асйбю")
                    state = 22;
                else if (type == "жхтпю")
                    state = 22;
                else if (type == "опнаек")
                    state = 23;
                else if (type == "гмюй")
                    state = 24;
                else
                    return output;
                break;
            case 23: /* опнаек 15 */
                if (type == "опнаек")
                    state = 23;
                else if (type == "гмюй")
                    state = 24;
                else
                    return output;
                break;
            case 24: /* ] 2 */
                if (type == "опнаек")
                    state = 24;
                else if (type == "рвйгор")
                    state = -1;
                else
                    return output;
                break;
            case -1:
                return output;

        }
    }
};