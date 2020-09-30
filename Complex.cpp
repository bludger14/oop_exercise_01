//
// Created by Koleal on 27.09.2020.
//

#include "Complex.h"

Complex::Complex() {
    for(int i=0;i<2;++i)
    {
        arr[i]=0;
    }
}

Complex::Complex(double a, double b) {
    arr[0]=a;
    arr[1]=b;
}

Complex Complex::add(Complex &a) {
    Complex result;
    for(int i=0;i<2;++i)
    {
        result.arr[i]=arr[i]+a.arr[i];
    }
    return result;
}

Complex Complex::sub(Complex &a) {
    Complex result;
    for(int i=0;i<2;++i)
    {
        result.arr[i]=arr[i]-a.arr[i];
    }
    return result;
}

Complex Complex::mul(Complex &a) {
    Complex result;
    result.arr[0]=arr[0]*a.arr[0]-arr[1]*a.arr[1];
    result.arr[1]=arr[0]*a.arr[1]+arr[1]*a.arr[0];
    return result;
}

Complex Complex::div(Complex &a) {
    Complex result;
    result.arr[0]=(arr[0]*a.arr[0]+arr[1]*a.arr[1])/(a.arr[0]*a.arr[0]+a.arr[1]*a.arr[1]);
    result.arr[1]=((arr[1]*a.arr[0]-arr[0]*a.arr[1])/(a.arr[0]*a.arr[0]+a.arr[1]*a.arr[1]));
    return result;
}

bool Complex::equ(Complex &a) {
    if(arr[0]==a.arr[0] && arr[1]==a.arr[1])
    {
        cout<<true;
    }
    else{
        cout<<false;
    }
}

Complex Complex::conj() {
    Complex result;
    result.arr[0]=arr[0];
    result.arr[1]=-arr[1];
    return result;

}

Complex Complex::modcomp(Complex &a, Complex &b) {
    double mod1;
    double mod2;
    mod1=sqrt(a.arr[0]*a.arr[0]+(a.arr[1]*a.arr[1]));
    mod2=sqrt(b.arr[0]*b.arr[0]+(b.arr[1]*b.arr[1]));
    if(mod1>mod2){
        cout<<"mod1>mod2";
    }
    else if(mod2>mod1){
        cout<<"mod1<mod2";
    }
    else{
        cout<<"mod1=mod2";
    }
}

void Complex::print() {
    cout<<"Re:"<<arr[0]<<" "<<"Im:"<<arr[1];
}