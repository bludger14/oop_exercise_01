#include"Complex.h"


int main() {
    double a, b, c, d;
    cout<<"a ";
    cin>>a;
    cout<<"b ";
    cin>>b;
    cout<<"c ";
    cin>>c;
    cout<<"d ";
    cin>>d;
    Complex Comp1{a, b};
    Complex Comp2(c, d);
    cout<<"add ";
    Comp1.add(Comp2).print();
    cout<<endl;
    cout<<"sub ";
    Comp1.sub(Comp2).print();
    cout<<endl;
    cout<<"mul ";
    Comp1.mul(Comp2).print();
    cout<<endl;
    cout<<"div ";
    Comp1.div(Comp2).print();
    cout<<endl;
    cout<<"equ ";
    Comp1.equ(Comp2);
    cout<<endl;
    cout<<"conj ";
    Comp1.conj().print();
    return 0;
}
