// Файл: identification.h
// Автор: Степанов К.А., КЭ - 105
// Дата: 13.07.2016
// Назначение:
/* устанавливает, какое из ключевых слов языка Pascal соответствует
 * заданному идентификатору из списка (vector<vector<string>>), либо сообщает,
 * что заданный идентификатор не является ключевым словом языка Pascal */

#ifndef PRACTICE_IDENTIFICATION_H
#define PRACTICE_IDENTIFICATION_H

#include <iostream>
#include <vector>

using namespace std;


vector<vector<string>> ident(vector<vector<string>> input);

#endif //PRACTICE_IDENTIFICATION_H
