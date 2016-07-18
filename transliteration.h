// Файл: transliteration.h
// Автор: Степанов К.А., КЭ - 105
// Дата: 13.07.2016
// Назначение:
/* преобразовывает исходную символьную цепочку (string)
 * в цепочку лексем вида {"символ цепочки", "класс символа цепочки"} (vector<vector<string>>). */

#ifndef PRACTICE_TRANSLITERATION_H
#define PRACTICE_TRANSLITERATION_H

#include <iostream>
#include <vector>

using namespace std;


vector<vector<string>> transliteration(string input);

#endif //PRACTICE_TRANSLITERATION_H