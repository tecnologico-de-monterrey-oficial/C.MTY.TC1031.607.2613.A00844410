#include <iostream>
using namespace std;

#include "List.h"

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

string sum(string a, string b) {
    return a + b;
}

int main() {

    double a = 5.0;
    double b = 10.0;

    cout << "La suma de " << a << " y " << b << " es " << sum(a, b) << endl;

    List<int> list;

    cout << "agregando valores a la lista:" << endl;
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.insert(20);

    cout << "mostrando la lista:" << endl;
    list.print();

    cout << "el tamano de la lista es: " << list.getSize() << endl;

    cout << "el valor de la posicion 2 es: " << list.getData(2) << endl;

    cout << "el valor mas grande es: " << list.getMax() << endl;

    cout << "insertando 99 en la posicion 1:" << endl;
    list.insertAt(1, 99);
    list.print();

    cout << "eliminando el valor de la posicion 2:" << endl;
    list.removeAt(2);
    list.print();

    cout << "eliminando el ultimo valor:" << endl;
    list.removeLast();
    list.print();

    cout << "probando una posicion invalida:" << endl;
    list.insertAt(20, 50);

    cout << "probando la lista con doubles:" << endl;

    List<double> decimals;

    decimals.insert(2.5);
    decimals.insert(8.7);
    decimals.insert(4.2);

    decimals.print();

    cout << "el valor decimal mas grande es: " << decimals.getMax() << endl;

    return 0;
}