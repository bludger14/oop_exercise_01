//
// Created by Koleal on 27.09.2020.
//

#ifndef LAB1_COMPLEX_H
#define LAB1_COMPLEX_H

#include <iostream>
#include <math.h>
using namespace std;

struct Complex {
    Complex(); //Конструктор когда на вход не подается ничего
    Complex(double a, double b); //Конструктор когда на вход подали 2 числа
    void print();
    Complex add(Complex &a);
    Complex sub(Complex &a);
    Complex mul(Complex &a);
    Complex div(Complex &a);
    bool equ(Complex &a);
    Complex conj();
    Complex modcomp(Complex &a, Complex &b);

private:
    double arr[2];
};


#endif //LAB1_COMPLEX_H
