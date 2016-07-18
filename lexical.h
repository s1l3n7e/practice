// Файл: lexical.h
// Автор: Степанов К.А., КЭ - 105
// Дата: 13.07.2016
// Назначение:
/* преобразовывает цепочку лексем, полученную от
* транслитератора (vector<vector<string>>), в цепочку лексем вида {"символ входного языка", "класс символа
* входного языка"} (vector<vector<string>>) */

#ifndef PRACTICE_LEXICAL_H
#define PRACTICE_LEXICAL_H

#include <iostream>
#include <vector>

using namespace std;


vector<vector<string>> lexical(vector<vector<string>> input);

#endif //PRACTICE_LEXICAL_H