#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;

#define COLOR_DEFAULT   7
#define COLOR_MENU      14
#define COLOR_TITULO    11
#define COLOR_ERRORS    12

void limpiarPantalla() {
    system("cls");
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void imprimirEncabezado(const string& titulo) {
    limpiarPantalla();
    setColor(COLOR_TITULO);
    cout << setw(60) << setfill('=') << "" << endl;
    cout << setw(30 + titulo.length()/2) << setfill(' ') << titulo << endl;
    cout << setw(60) << setfill('=') << "" << endl << endl;
    setColor(COLOR_DEFAULT);
}

int menuPrincipal(int opcionActual) {
    const int OPCIONES = 4;
    int opcion = opcionActual;
    bool seleccionado = false;

    while (!seleccionado) {
        imprimirEncabezado("Mini Super - Menu Principal");

        setColor(COLOR_MENU);
        cout << "Seleccione su tipo de usuario:\n\n";
        setColor(opcion == 1 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 1 ? "-> " : "   ") << "1) Administrador\n";
        setColor(opcion == 2 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 2 ? "-> " : "   ") << "2) Usuario Registrado\n";
        setColor(opcion == 3 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 3 ? "-> " : "   ") << "3) Anonimo\n";
        setColor(opcion == 0 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 0 ? "-> " : "   ") << "  <Salir>     \n\n";
        setColor(COLOR_DEFAULT);
        cout << "\nUse las flechas arriba/abajo para seleccionar, y Enter para confirmar.\n";

        switch (_getch()) {
            case 72:
                opcion = (opcion - 1 + OPCIONES) % OPCIONES;
                break;
            case 80:
                opcion = (opcion + 1) % OPCIONES;
                break;
            case 13:
                seleccionado = true;
                break;
            default:
                break;
        }
    }

    return opcion;
}

void mostrarBienvenida(const string& usuario) {
    imprimirEncabezado("Bienvenido al Mini Super");
    cout << "Usted ha ingresado como ";
    setColor(COLOR_MENU);
    cout << usuario;
    setColor(COLOR_DEFAULT);
    cout << ".\n\n";
    cout << "Presione Enter para continuar...";
    cin.ignore();
    cin.get();
}

#define MAX 50
int numeroproduc = 0;
int numUsuarios = 0;
int Nuevos = 0;

struct producto {
    int id;
    string nombre;
    float precio;
    string descripcion;
    string presentacion;
    string categoria;  // Nuevo :D
};

producto matriz[MAX];

void crearnew(int Nuevos) {
    setColor(COLOR_TITULO);
    cout << "Seleccione la categoria de los productos a valorar(alimentos, bebidas, snacks)" << endl;
    setColor(COLOR_DEFAULT);
    cin >> matriz[numeroproduc].categoria;
    setColor(COLOR_MENU);
    cout << "Ingrese la cantidad de productos que van a agregar" << endl;
    setColor(COLOR_DEFAULT);
    cin >> Nuevos;
    for (int j = numeroproduc; j < numeroproduc + Nuevos; j++) {
        setColor(COLOR_MENU);
        cout << "Ingrese el ID del producto nuevo :" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].id;
        setColor(COLOR_MENU);
        cout << "Ingrese el nombre del producto nuevo :" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].nombre;
        setColor(COLOR_MENU);
        cout << "Ingrese el precio del producto nuevo :" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].precio;
        setColor(COLOR_MENU);
        cout << "Ingrese una descripción breve del producto :" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].descripcion;
        setColor(COLOR_MENU);
        cout << "Escriba el tipo de presentación del producto (botella, paquete, bolsa, caja, docena)" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].presentacion;
        matriz[j].categoria = matriz[numeroproduc].categoria;
    }
    numeroproduc += Nuevos;
}

//categorias
void info(string categoria) {
    for (int i = 0; i < numeroproduc + Nuevos; i++) {
        if (matriz[i].categoria == categoria || categoria == "Todas") {
            setColor(COLOR_MENU);
            cout << "Producto " << i+1 << " :" << endl;
            setColor(COLOR_MENU);
            cout << "ID: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].id << endl;
            setColor(COLOR_MENU);
            cout << "Nombre: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].nombre << endl;
            setColor(COLOR_MENU);
            cout << "Precio: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].precio << endl;
            setColor(COLOR_MENU);
            cout << "Descripción del producto: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].descripcion << endl;
            setColor(COLOR_MENU);
            cout << "Presentación en: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].presentacion << endl;
            setColor(COLOR_MENU);
            cout << "Categoria: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].categoria << endl;
            cout << "\n";
        }
    }
}

void eliminarProducto() {
    int idElim;
    setColor(COLOR_TITULO);
    cout << "Ingrese el ID del producto que desea eliminar:" << endl;
    setColor(COLOR_DEFAULT);
    cin >> idElim;

    for (int i = 0; i < numeroproduc; i++) {
        if (matriz[i].id == idElim) {
            for (int j = i; j < numeroproduc - 1; j++) {
                matriz[j] = matriz[j + 1];
            }
            numeroproduc--;
            setColor(COLOR_MENU);
            cout << "Producto eliminado correctamente." << endl;
            return;
        }
    }
    setColor(COLOR_ERRORS);
    cout << "No se encontró ningun producto con el ID especificado." << endl;
}



struct vendedorsh {
    string ID;
    string contacto;
    string vendedor;
    string productovend;
    string recom;
    string recomprodu;
};

vendedorsh vente[MAX];

int numVendedores = 0;
void nuevovendedor() {
    setColor(COLOR_MENU);
    cout << "Ingrese el ID del vendedor:" << endl;
    setColor(COLOR_DEFAULT);
    cin >> vente[numVendedores].ID;
    setColor(COLOR_MENU);
    cout << "Ingrese el nombre del vendedor:" << endl;
    setColor(COLOR_DEFAULT);
    cin >> vente[numVendedores].vendedor;
    setColor(COLOR_MENU);
    cout << "Ingrese el producto que vende:" << endl;
    setColor(COLOR_DEFAULT);
    cin >> vente[numVendedores].productovend;
    setColor(COLOR_MENU);
    cout << "Ingrese su contacto (numero de telefono):" << endl;
    setColor(COLOR_DEFAULT);
    cin >> vente[numVendedores].contacto;
    numVendedores++;
}

void mostrarvendedors() {
    for (int i = 0; i < numVendedores; i++) {
        setColor(COLOR_MENU);
        cout << "Vendedor " << i + 1 << ": " << endl;
        setColor(COLOR_DEFAULT);
        cout << "ID: " << vente[i].ID << endl;
        cout << "Nombre: " << vente[i].vendedor << endl;
        cout << "Producto Vendido: " << vente[i].productovend << endl;
        cout << "Contacto: " << vente[i].contacto << endl;
        cout << endl;
    }
}

void eliminarVendedor() {
    string idElim;
    setColor(COLOR_TITULO);
    cout << "Ingrese el ID del vendedor que desea eliminar:" << endl;
    setColor(COLOR_DEFAULT);
    cin >> idElim;

    bool encontrado = false;

    for (int i = 0; i < numVendedores; i++) {
        if (vente[i].ID == idElim) {
            encontrado = true;
            for (int j = i; j < numVendedores - 1; j++) {
                vente[j] = vente[j + 1];
            }
            numVendedores--;
            setColor(COLOR_MENU);
            cout << "Vendedor eliminado correctamente." << endl;
            break;
        }
    }

    if (!encontrado) {
        setColor(COLOR_ERRORS);
        cout << "No se encontró ningun vendedor con el ID especificado." << endl;
    }
}



producto Alimentos = {1,"Arroz",35,"Es_de__Buena_Calidad","Bolsa","alimentos"};

producto Bebidas = {2,"Agua",15,"Hidratante_como_Fascinante","Botella","bebidas"};

producto Snacks = {3,"Hersey's",35,"Como_un_canto_al_paladar","Bolsa","snacks"};

void mostrarProductosPorCategoria() {
    bool seleccionado = false;
    int opcion = 0;
    const int OPCIONES_CATEGORIAS = 4;

    while (!seleccionado) {
        limpiarPantalla();
        imprimirEncabezado("Seleccionar Categoría de Producto");

        setColor(COLOR_MENU);
        cout << "Seleccione la categoría:\n\n";
        setColor(opcion == 1 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 1 ? "-> " : "   ") << "1) Alimentos\n";
        setColor(opcion == 2 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 2 ? "-> " : "   ") << "2) Bebidas\n";
        setColor(opcion == 3 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 3 ? "-> " : "   ") << "3) Snacks\n";
        setColor(opcion == 0 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 0 ? "-> " : "   ") << "  <Todas>\n\n";
        setColor(COLOR_DEFAULT);
        cout << "Use las flechas arriba/abajo para seleccionar, y Enter para confirmar.\n";

        switch (_getch()) {
            case 72:
                opcion = (opcion - 1 + OPCIONES_CATEGORIAS) % OPCIONES_CATEGORIAS;
                break;
            case 80:
                opcion = (opcion + 1) % OPCIONES_CATEGORIAS;
                break;
            case 13:
                seleccionado = true;
                break;
            default:
                break;
        }
    }

    switch (opcion) {
        case 1:
            limpiarPantalla();
            info("alimentos");
            break;
        case 2:
            limpiarPantalla();
            info("bebidas");
            break;
        case 3:
            limpiarPantalla();
            info("snacks");
            break;
        case 0:
            limpiarPantalla();
            info("Todas");
            break;
    }

    setColor(COLOR_ERRORS);
    cout << "\nPresione cualquier tecla para continuar...";
    _getch();
}

int main() {
    matriz[0]=Alimentos;
    matriz[1]=Bebidas;
    matriz[2]=Snacks;
    numeroproduc = 3;
    int opcionUsuario = 1;
    string usuario;

    do {
        opcionUsuario = menuPrincipal(opcionUsuario);

        switch (opcionUsuario) {
            case 1: {
                limpiarPantalla();
                imprimirEncabezado("Inicio de sesion");
                string us, clave;
                setColor(COLOR_TITULO);
                cout << "Ingresa tu usuario:    ";
                setColor(COLOR_DEFAULT);
                cin>> us;
                setColor(COLOR_TITULO);
                cout << "Ingresa la clave:  ";
                setColor(COLOR_DEFAULT);
                cin>> clave;

                if (us == "admin" && clave == "admin123"){
                limpiarPantalla();
                bool desconectar = false;
                mostrarBienvenida("Administrador");
                do {
                    const int OPCIONES_ADMIN = 5;
                    int opcion2 = 1;
                    bool seleccion = false;

                    while (!seleccion) {
                        limpiarPantalla();
                        imprimirEncabezado("Administrador - Opciones");

                        setColor(COLOR_MENU);
                        cout << "Opciones: " << endl;
                        setColor(opcion2 == 1 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion2 == 1 ? "-> " : "   ") << "1) Mostrar productos a la venta por categoría\n";
                        setColor(opcion2 == 2 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion2 == 2 ? "-> " : "   ") << "2) Mostrar todos los vendedores\n";
                        setColor(opcion2 == 3 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion2 == 3 ? "-> " : "   ") << "3) Eliminar un vendedor\n";
                        setColor(opcion2 == 4 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion2 == 4 ? "-> " : "   ") << "4) Eliminar un producto\n";
                        setColor(opcion2 == 0 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion2 == 0 ? "-> " : "   ") << "  <Desconectarse>\n\n";
                        setColor(COLOR_DEFAULT);
                        cout << "Use las flechas arriba/abajo para seleccionar, y Enter para confirmar.\n";

                        switch (_getch()) {
                            case 72:
                                opcion2 = (opcion2 - 1 + OPCIONES_ADMIN) % OPCIONES_ADMIN;
                                break;
                            case 80:
                                opcion2 = (opcion2 + 1) % OPCIONES_ADMIN;
                                break;
                            case 13:
                                seleccion = true;
                                break;
                            default:
                                break;
                        }
                    }

                    switch (opcion2) {
                        case 1:
                            limpiarPantalla();
                            mostrarProductosPorCategoria();
                            break;
                        case 2:
                            limpiarPantalla();
                            vente[numVendedores++] = {"1", "1234567890", "Miles Axelrod", "Frituras Dulces"};
                            vente[numVendedores++] = {"2", "199221011", "Miles Prower", "Cajas de Mentas"};
                            vente[numVendedores++] = {"3", "2003160316", "Edd G.", "Bebidas Gasificadas"};

                            mostrarvendedors();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 3:
                            limpiarPantalla();
                            eliminarVendedor();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 4:
                            limpiarPantalla();
                            eliminarProducto();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 0:
                            desconectar = true;
                            break;
                        default:
                            break;
                    }
                } while (!desconectar);
                break;
            }else{
                setColor(COLOR_ERRORS);
                cout<<"\nDatos incorrectos (x _ x)\n";
                setColor(COLOR_DEFAULT);
                cout<<"\nPresione enter para regresar al menu principal";
                getch();
                return main();
            }

            }

            case 2: {
                limpiarPantalla();
                imprimirEncabezado("Inicio de sesion");
                string us, clave;
                setColor(COLOR_TITULO);
                cout << "\nIngresa tu usuario:    ";
                setColor(COLOR_DEFAULT);
                cin>> us;
                setColor(COLOR_TITULO);
                cout << "Ingresa la clave:  ";
                setColor(COLOR_DEFAULT);
                cin>> clave;

                if (us == "usuario" && clave == "usuario123"){
                bool desconectar = false;
                mostrarBienvenida("Usuario Registrado");
                do {
                    const int OPCIONES_USUA = 5;
                    int opcion3 = 1;
                    bool seleccion = false;

                    while (!seleccion) {
                        limpiarPantalla();
                        imprimirEncabezado("Usuario - Opciones");

                        setColor(COLOR_MENU);
                        cout << "Opciones: " << endl;
                        setColor(opcion3 == 1 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 1 ? "-> " : "   ") << "1) Mostrar productos a la venta por categoría\n";
                        setColor(opcion3 == 2 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 2 ? "-> " : "   ") << "2) Agregar un vendedor\n";
                        setColor(opcion3 == 3 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 3 ? "-> " : "   ") << "4) Agregar un producto\n";
                        setColor(opcion3 == 4 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 4 ? "-> " : "   ") << "5) Eliminar un producto\n";
                        setColor(opcion3 == 0 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 0 ? "-> " : "   ") << "  <Desconectarse>\n\n";
                        setColor(COLOR_DEFAULT);
                        cout << "Use las flechas arriba/abajo para seleccionar, y Enter para confirmar.\n";

                        switch (_getch()) {
                            case 72:
                                opcion3 = (opcion3 - 1 + OPCIONES_USUA) % OPCIONES_USUA;
                                break;
                            case 80:
                                opcion3 = (opcion3 + 1) % OPCIONES_USUA;
                                break;
                            case 13:
                                seleccion = true;
                                break;
                            default:
                                break;
                        }
                    }

                    switch (opcion3) {
                        case 1:
                            limpiarPantalla();
                            mostrarProductosPorCategoria();
                            break;
                        case 2:
                            limpiarPantalla();
                            nuevovendedor();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 3:
                            limpiarPantalla();
                            crearnew(Nuevos);
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 4:
                            limpiarPantalla();
                            eliminarProducto();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 0:
                            desconectar = true;
                            break;
                    }
                } while (!desconectar);
                break;
                }else{
                setColor(COLOR_ERRORS);
                cout<<"\nDatos incorrectos (= _ =)\n";
                setColor(COLOR_DEFAULT);
                cout<<"\nPresione enter para regresar al menu principal";
                getch();
                return main();
            }
            }
            case 3:
                limpiarPantalla();
                mostrarBienvenida("Anonimo");
                mostrarProductosPorCategoria();
                break;
            case 0:
                limpiarPantalla();
                setColor(COLOR_DEFAULT);
                cout << "\n\n             Saliendo del Mini Super...\n";
                setColor(COLOR_MENU);
                cout << "\n                 ¡Hasta luego! (:D)\n\n\n";
                setColor(COLOR_DEFAULT);
                break;
            default:
                setColor(COLOR_ERRORS);
                cout << ":( \nOpción no válida.";
                setColor(COLOR_DEFAULT);
                cout << " Inténtelo de nuevo.\n";
                setColor(COLOR_MENU);
                cout << "Presione Enter para continuar...";
                setColor(COLOR_DEFAULT);
                cin.ignore();
                cin.get();
                break;
        }

    } while (opcionUsuario != 0);

    return 0;
}

