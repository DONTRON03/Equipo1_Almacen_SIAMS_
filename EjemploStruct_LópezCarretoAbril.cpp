#include <iostream>
#include <string>

struct Empleado {
    std::string nombre;
    char sexo;
    double salario;
    std::string puesto;
};

void mostrarEmpleado(const Empleado& empleado) {
    using namespace std;
    cout << "\nInformacion del empleado:" << endl;
    cout << "Nombre: " << empleado.nombre << endl;
    cout << "Sexo: " << empleado.sexo << endl;
    cout << "Salario: " << empleado.salario << endl;
    cout << "Puesto: " << empleado.puesto << endl;
}

void crearEmpleado(Empleado& empleado, const std::string& nombre, char sexo, double salario, const std::string& puesto) {
    empleado.nombre = nombre;
    empleado.sexo = sexo;
    empleado.salario = salario;
    empleado.puesto = puesto;
}

void actualizarSalario(Empleado& empleado, double nuevoSalario) {
    empleado.salario = nuevoSalario;
}

void actualizarPuesto(Empleado& empleado, const std::string& nuevoPuesto) {
    empleado.puesto = nuevoPuesto;
}

int main() {
    Empleado empleado1;

    crearEmpleado(empleado1, "Carlos Perez", 'M', 35000.50, "Gerente");

    mostrarEmpleado(empleado1);

    actualizarSalario(empleado1, 37000.75);
    actualizarPuesto(empleado1, "Director");
    mostrarEmpleado(empleado1);

    return 0;
}
