#include <iostream>
#include <string>
using namespace std;
struct Persona {
    string nombre;
    int edad;
    float altura;
};

int main() {
    Persona persona1;
    persona1.nombre = "Stan";
    persona1.edad = 30;
    persona1.altura = 1.75f;

    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << "Altura: " << persona1.altura <<endl;

    persona1.edad = 31;
    cout << "Nueva edad: " << persona1.edad << endl;

    return 0;
}
