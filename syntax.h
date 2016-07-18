// Файл: syntax.h
// Автор: Степанов К.А., КЭ - 105
// Дата: 13.07.2016
// Назначение:
/* проверка цепочки лексем вида {"символ входного языка", "класс входного языка"},
 * (в данном случае vector<vector<string>>) на соответствие
 * заданным формулам Бэкуса-Наура */

#ifndef PRACTICE_SYNTAX_H
#define PRACTICE_SYNTAX_H

#include <iostream>
#include <vector>

using namespace std;

bool syntax_check(vector<vector<string>> input);

#endif //PRACTICE_SYNTAX_H