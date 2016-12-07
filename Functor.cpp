//
// Created by Plutto on 12/7/2016.
//

#include "Functor.h"

Functor Functor::operator()(int x) {
    if (sum == 0) { // Initialize min, max and avg from first element
        max = x;
        min = x;
        avg = x;
        first = x;
    } else { // If not the first, check min, max and count avg
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
        avg = (avg*sum + x)/(sum+1);
    }
    if (x == 0) { // 0 is neither odd nor even, also neither negative nor positive, keep separated
        zeros++;
    } else {
        if (x % 2 == 0) {
            evens++;
        }
        if (x > 0) {
            positives++;
        }
    }
    sum++;
    last = x;
    return *this;
}

void Functor::printStatistics() {
    cout << "\nSTATISTIC" << endl;
    cout << "---Values:" << endl;
    cout << "\tMaximal = " << max << endl;
    cout << "\tMinimal = " << min << endl;
    cout << "\tAverage = " << avg << endl;
    cout << "---Numbers and other" << endl;
    cout << "\tPositive count = " << positives << endl;
    cout << "\tNegative count = " << sum-zeros-positives << endl;
    cout << "\tEven numbers count: " << evens << endl;
    cout << "\tOdd numbers count: " << sum-zeros-evens << endl;
    cout << "\tFirst == Last: " << (first == last ? "'true'" : "'false'") << endl;
}
