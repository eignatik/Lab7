#include <iostream>

#ifndef LAB7_FUNCTOR_H
#define LAB7_FUNCTOR_H

using namespace std;

class Functor {
private:
    int sum = 0;
    int zeros;
    /** a. Максимальное число в последовательности */
    int max;
    /** b. Минимальное число в последовательности */
    int min;
    /** c. Среднее число в последовательности */
    int avg;
    /** d. Количество положительных чисел
        e. Количество отрицательных чисел */
    int positives = 0;
    /** f. Сумму нечетных элементов последовательности
        g. Сумму четных элементов последовательности */
    int evens = 0;
    /** h. Совпадают ли первый и последний элементы последовательности. */
    int first;
    int last;
public:
    Functor operator()(int x);
    void printStatistics();
};


#endif //LAB7_FUNCTOR_H
