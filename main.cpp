#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include "Functor.h"

int main() {
    vector<int> sequence;
    srand(time(0));
    cout << "\n\n\t\tThe initial sequence of int values" << endl;
    for (int i = 0; i < 20; i++) {
        sequence.push_back(rand() % 1000 - 500);
        cout << sequence.at(i) << " ";
    }
    cout << "\n" <<endl;
    Functor f;
    f = for_each(sequence.begin(), sequence.end(), f);
    f.printStatistics();
    return 0;
}