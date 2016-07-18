//
// Created by IMPERATOR on 28.06.2016.
//

#ifndef PRACTICE_PRINT_VVECTOR_H
#define PRACTICE_PRINT_VVECTOR_H

#endif //PRACTICE_PRINT_VVECTOR_H

#include <iostream>
#include <vector>


using namespace std;

void print(vector<vector<string>> input) {
    cout << "{";
    for(int i=0; i<input.size(); i++) {
        cout << "(";
        for(int j=0; j<input[i].size(); j++) {
            cout<< input[i][j];
            if(j+1 != input[i].size())
                cout << " - ";
        }
        cout << ")";
        if(i+1 != input.size())
            cout << "\n";
    }
    cout << "}" << endl;
}