// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: Displays every number between 1000-2000 and only prints
// five numbers per line
#include <iostream>
using std::cout;

int main() {
    for (int counter = 1000; counter <= 2000; counter++) {
        if (counter != 1000 && counter %5 == 0) {
            cout << "\n" << counter << " ";
        } else {
            cout << counter << " ";
        }
    }
}
