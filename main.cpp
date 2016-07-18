// Файл: syntax.h
// Автор: Степанов К.А., КЭ - 105
// Дата: 13.07.2016
// Назначение:
/* проверка входной строки на соответствие
 * заданным формулам Бэкуса-Наура */

#include <iostream>
#include <fstream>

#include "transliteration.h"
#include "lexical.h"
#include "syntax.h"
#include "identification.h"

using namespace std;

int main() {
    setlocale(LC_ALL,"RUS");

    string input;
    vector<vector<string>> process;
    ifstream input_file;
    ofstream out_file;

    input_file.open("input.txt");
    getline(input_file, input);
    input_file.close();

    process = transliteration(input);
    process = lexical(process);
    process = ident(process);

    out_file.open("output.txt");

    if (syntax_check(process))
        out_file << "ACCEPT";
    else
        out_file << "REJECT";

    out_file.close();

    return 0;
}