//Antonio Coronado Chavez
//A00844410

#include <iostream>
using namespace std;

int sumaIterativa(int n) {
    int suma = 0;

    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    return suma;
}

int sumaRecursiva(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sumaRecursiva(n - 1);
}

int sumaFormula(int n) {
    return n * (n + 1) / 2;
}

int fibonacciIterativo(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    int anterior = 1;
    int actual = 1;

    for (int i = 3; i <= n; i++) {
        int siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
    }

    return actual;
}

int fibonacciRecursivo(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

int bacteriasIterativo(int n) {
    int bacterias = 1;

    for (int i = 1; i <= n; i++) {
        int nacimientos = bacterias * 378 / 100;
        int muertes = bacterias * 234 / 100;

        bacterias = bacterias + nacimientos - muertes;
    }

    return bacterias;
}

int bacteriasRecursivo(int n) {
    if (n == 0) {
        return 1;
    }

    int bacterias = bacteriasRecursivo(n - 1);

    int nacimientos = bacterias * 378 / 100;
    int muertes = bacterias * 234 / 100;

    return bacterias + nacimientos - muertes;
}

double inversionIterativa(double cantidad, int meses) {
    for (int i = 1; i <= meses; i++) {
        cantidad = cantidad + cantidad * 18.75 / 100;
    }

    return cantidad;
}

double inversionRecursiva(double cantidad, int meses) {
    if (meses == 0) {
        return cantidad;
    }

    cantidad = cantidad + cantidad * 18.75 / 100;

    return inversionRecursiva(cantidad, meses - 1);
}

int potenciaIterativa(int numero, int exponente) {
    int resultado = 1;

    for (int i = 1; i <= exponente; i++) {
        resultado *= numero;
    }

    return resultado;
}

int potenciaRecursiva(int numero, int exponente) {
    if (exponente == 0) {
        return 1;
    }

    return numero * potenciaRecursiva(numero, exponente - 1);
}

int main() {

    cout << "Suma iterativa: " << sumaIterativa(5) << endl;
    cout << "Suma recursiva: " << sumaRecursiva(5) << endl;
    cout << "Suma formula: " << sumaFormula(5) << endl;

    cout << "Fibonacci iterativo: " << fibonacciIterativo(6) << endl;
    cout << "Fibonacci recursivo: " << fibonacciRecursivo(6) << endl;

    cout << "Bacterias iterativo: " << bacteriasIterativo(5) << endl;
    cout << "Bacterias recursivo: " << bacteriasRecursivo(5) << endl;

    cout << "Inversion iterativa: " << inversionIterativa(1000, 3) << endl;
    cout << "Inversion recursiva: " << inversionRecursiva(1000, 3) << endl;

    cout << "Potencia iterativa: " << potenciaIterativa(2, 5) << endl;
    cout << "Potencia recursiva: " << potenciaRecursiva(2, 5) << endl;

    return 0;
}