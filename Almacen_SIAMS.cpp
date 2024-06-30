#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

#define COLOR_DEFAULT   7
#define COLOR_MENU      14
#define COLOR_TITULO    11
#define COLOR_ERRORS    12
#define COLOR_TEXTO2    6


void limpiarPantalla() {
    system("cls");
}

void centrarTexto(const string& texto) {
    int anchoConsola = 40;
    int anchoTexto = texto.length();
    int margen = (anchoConsola - anchoTexto) / 2;
    cout << setw(margen + anchoTexto) << texto << endl;
}

void mostrarAnimacionCarga(int segundos) {
    limpiarPantalla();
    setColor(COLOR_TEXTO2);
    const string animacion = "|/-\\";

    int contador = 0;
    clock_t inicio = clock();
    clock_t fin = inicio + segundos * CLOCKS_PER_SEC;

    cout<<" \n\n"<<endl;
    centrarTexto("Cargando...");

    while (clock() < fin) {
        cout << "\r" << setw(20) << animacion[contador % animacion.size()];
        fflush(stdout);
        contador++;
        Sleep(100);
    }

    cout << "\rCarga completada!     " << endl;
}

void animacionParpadeo(const string& mensaje, int veces, int duracion) {
    limpiarPantalla();

    for (int i = 0; i < veces; ++i) {
        cout << mensaje;
        Sleep(duracion);
        limpiarPantalla();
        Sleep(duracion);
    }
}


#define COLOR_FADE 8
//coordenadas de transcici�n
void gotoxy(int x, int y) {
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void transcicion(int duration) {
    int unodos = 10;

    for (int i = 0; i <= unodos; ++i) {
        int color = COLOR_DEFAULT + (i * (COLOR_FADE - COLOR_DEFAULT) / unodos);
        setColor(color);
        limpiarPantalla();
        Sleep(duration / unodos);
    }
}


void imprimirEncabezado(const string& titulo) {
 limpiarPantalla();
    const int ANCHO_MARCO = 60;

    setColor(COLOR_TITULO);
    cout << "+-" << string(ANCHO_MARCO - 4, '-') << "-+" << endl;

    int tituloLength = titulo.length();
    int espaciosIzquierda = (ANCHO_MARCO - 4 - tituloLength) / 2;
    int espaciosDerecha = ANCHO_MARCO - 4 - tituloLength - espaciosIzquierda;
    cout << "| " << string(espaciosIzquierda, ' ') << titulo << string(espaciosDerecha, ' ') << " |" << endl;

    cout << "+-" << string(ANCHO_MARCO - 4, '-') << "-+" << endl << endl;

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
        cout << (opcion == 1 ? " >" : "    ") << " Administrador\n";
        setColor(opcion == 2 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 2 ? " >" : "    ") << " Usuario Registrado\n";
        setColor(opcion == 3 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 3 ? " >" : "    ") << " Anonimo\n";
        setColor(opcion == 0 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 0 ? " >" : "    ") << " <Salir>\n\n";
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
    string categoria;
};

producto matriz[MAX];

void crearnew(int Nuevos) {
    imprimirEncabezado("Agregar Productos");
    setColor(COLOR_MENU);
    cout << "\nSeleccione la categoria de los productos a valorar: \n-alimentos,bebidas o snacks" << endl;
    setColor(COLOR_DEFAULT);
    cin >> matriz[numeroproduc].categoria;
    limpiarPantalla();
    imprimirEncabezado("Agregar Productos");
    setColor(COLOR_MENU);
    cout << "Ingrese la cantidad de productos por agregar:" << endl;
    setColor(COLOR_DEFAULT);
    cin >> Nuevos;
    for (int j = numeroproduc; j < numeroproduc + Nuevos; j++) {
        setColor(COLOR_MENU);
        cout << "Ingrese el ID del producto nuevo:" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].id;
        setColor(COLOR_MENU);
        cout << "Ingrese el nombre del producto nuevo:" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].nombre;
        setColor(COLOR_MENU);
        cout << "Ingrese el precio del producto nuevo:" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].precio;
        setColor(COLOR_MENU);
        cout << "Ingrese una descripcion breve del producto:" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].descripcion;
        setColor(COLOR_MENU);
        cout << "Escriba el tipo de presentacion del producto (botella, paquete, bolsa, caja, docena)" << endl;
        setColor(COLOR_DEFAULT);
        cin >> matriz[j].presentacion;
        matriz[j].categoria = matriz[numeroproduc].categoria;
    }
    numeroproduc += Nuevos;
}

void info(string categoria) {
    imprimirEncabezado(categoria);
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
            cout << "Descripcion del producto: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].descripcion << endl;
            setColor(COLOR_MENU);
            cout << "Presentacion en: ";
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
    imprimirEncabezado("Eliminar Productos");
    int idElim;
    info("Todas");
    setColor(COLOR_TITULO);
    cout << "\nIngrese el ID del producto que desea eliminar:" << endl;
    setColor(COLOR_DEFAULT);
    cin >> idElim;
    transcicion(1);

    for (int i = 0; i < numeroproduc; i++) {
        if (matriz[i].id == idElim) {
            setColor(COLOR_TITULO);
            cout << "\nDe verdad desea eliminar el siguiente producto? :\n" << endl;
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
            cout << "Descripcion del producto: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].descripcion << endl;
            setColor(COLOR_MENU);
            cout << "Presentacion en: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].presentacion << endl;
            setColor(COLOR_MENU);
            cout << "Categoria: ";
            setColor(COLOR_DEFAULT);
            cout << matriz[i].categoria << endl;
            cout << "\n";
            setColor(COLOR_TITULO);
            cout << "Selecione: (y/n)" << endl;

            char choice;
            while (true) {
                choice = _getch();
                if (choice == 'y' || choice == 'Y') {
                    for (int j = i; j < numeroproduc - 1; j++) {
                        matriz[j] = matriz[j + 1];
                    }
                    numeroproduc--;
                    setColor(COLOR_MENU);
                    cout << "Producto eliminado correctamente." << endl;
                    break;
                } else if (choice == 'n' || choice == 'N') {
                    setColor(COLOR_MENU);
                    cout << "\nEliminacion de producto anulada" << endl;
                    break;
                } else {
                    cout << "Opcion invalida. Por favor, seleccione 'y' o 'n': ";
                }
            }
            return;
        }
    }
    setColor(COLOR_ERRORS);
    cout << "No se encontro ningun producto con el ID especificado." << endl;
    setColor(COLOR_DEFAULT);
}


void modifProducto() {
    imprimirEncabezado("Modificar Productos");
    int idMod;
    info("Todas");
    setColor(COLOR_TITULO);
    cout << "Seleccione el ID del producto que desea modificar:" << endl;
    setColor(COLOR_DEFAULT);
    cin >> idMod;
    for (int i = 0; i < numeroproduc; i++) {
        if (matriz[i].id == idMod) {
            setColor(COLOR_MENU);
            cout << "\nSeleccione la nueva categoria del producto: \n-alimentos,bebidas o snacks" << endl;
            setColor(COLOR_DEFAULT);
            cin >> matriz[numeroproduc].categoria;
            setColor(COLOR_MENU);
            cout << "Ingrese el nuevo ID: ";
            setColor(COLOR_DEFAULT);
            cin >> matriz[i].id;
            setColor(COLOR_MENU);
            cout << "Ingrese el nuevo nombre del producto: ";
            setColor(COLOR_DEFAULT);
            cin >> matriz[i].nombre;
            setColor(COLOR_MENU);
            cout << "Ingrese el nuevo precio del producto: ";
            setColor(COLOR_DEFAULT);
            cin >> matriz[i].precio;
            setColor(COLOR_MENU);
            cout << "Ingrese la nueva descripci�n del producto: ";
            setColor(COLOR_DEFAULT);
            cin >> matriz[i].descripcion;
            setColor(COLOR_MENU);
            cout << "Presentaci�n en: ";
            setColor(COLOR_DEFAULT);
            cin >> matriz[i].presentacion;
            cout << "\n";
            setColor(COLOR_MENU);
            cout << "Producto modificado correctamente." << endl;
            setColor(COLOR_DEFAULT);
            matriz[i].categoria = matriz[numeroproduc].categoria;
            return;
        }
    }
    setColor(COLOR_ERRORS);
    cout << "No se encontr� ning�n producto con el ID especificado." << endl;
    setColor(COLOR_DEFAULT);
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
    imprimirEncabezado("Agregar Vendedor");
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
    imprimirEncabezado("Vendedores");
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
    imprimirEncabezado("Eliminar Vendedor");
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
        cout << "No se encontr� ningun vendedor con el ID especificado." << endl;
    }
}

producto Alimentos = {1,"Arroz",35,"Es_de_Buena_Calidad","Bolsa","alimentos"};

producto Bebidas = {2,"Agua",15,"Hidratante_como_Fascinante","Botella","bebidas"};

producto Snacks = {3,"Hersey's",35,"Como_un_canto_al_paladar","Bolsa","snacks"};

void mostrarProductosPorCategoria() {
    bool salir = false;
    do{
    bool seleccionado = false;
    int opcion = 1;
    const int OPCIONES_CATEGORIAS = 5;

    while (!seleccionado) {
        limpiarPantalla();
        imprimirEncabezado("Seleccionar Categoria de Producto");

        setColor(COLOR_MENU);
        cout << "Seleccione la categor�a:\n\n";
        setColor(opcion == 1 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 1 ? " >" : "    ") << "  Alimentos\n";
        setColor(opcion == 2 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 2 ? " >" : "    ") << "  Bebidas\n";
        setColor(opcion == 3 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 3 ? " >" : "    ") << "  Snacks\n";
        setColor(opcion == 4 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 4 ? " >" : "    ") << "  <Todas>\n\n";
        setColor(opcion == 0 ? COLOR_MENU : COLOR_DEFAULT);
        cout << (opcion == 0 ? " >" : "    ") << "  <Salir>\n\n";
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
            transcicion(2);
            info("alimentos");
            setColor(COLOR_ERRORS);
            cout << "\nPresione cualquier tecla para continuar...";
            getch();
            break;
        case 2:
            transcicion(2);
            info("bebidas");
            setColor(COLOR_ERRORS);
            cout << "\nPresione cualquier tecla para continuar...";
            getch();
            break;
        case 3:
            transcicion(2);
            info("snacks");
            setColor(COLOR_ERRORS);
            cout << "\nPresione cualquier tecla para continuar...";
            getch();
            break;
        case 4:
            transcicion(2);
            info("Todas");
            setColor(COLOR_ERRORS);
            cout << "\nPresione cualquier tecla para continuar...";
            getch();
            break;
        case 0:
            salir = true;
            break;
    }
    }while(!salir);
}

int main() {

    vente[numVendedores++] = {"1", "1234567890", "Miles Axelrod", "Frituras Dulces"};
    vente[numVendedores++] = {"2", "199221011", "Miles Prower", "Cajas de Mentas"};
    vente[numVendedores++] = {"3", "2003160316", "Edd G.", "Bebidas Gasificadas"};

    matriz[0]=Alimentos;
    matriz[1]=Bebidas;
    matriz[2]=Snacks;
    numeroproduc = 3;
    int opcionUsuario = 1;
    string usuario;
    mostrarAnimacionCarga(3);
    do {
        opcionUsuario = menuPrincipal(opcionUsuario);

        switch (opcionUsuario) {
            case 1: {
                limpiarPantalla();
                imprimirEncabezado("Inicio de sesion");
                string us, clave;
                setColor(COLOR_TEXTO2);
                cout << "   -------------------------------------------------------"<<endl;
                setColor(COLOR_TEXTO2);
                cout <<"            Ingresa tu usuario: ";
                setColor(COLOR_MENU);
                cin>>us;
                setColor(COLOR_TEXTO2);
                cout <<"            Ingresa la clave:   ";
                setColor(COLOR_MENU);
                cin>>clave;
                setColor(COLOR_TEXTO2);
                cout << "   -------------------------------------------------------"<<endl;
                setColor(COLOR_DEFAULT);
                cout<<"\nPresiona ENTER para continuar...";
                getch();

                if (us == "admin" && clave == "admin123"){
                limpiarPantalla();
                mostrarAnimacionCarga(3);
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
                        cout << (opcion2 == 1 ? " >" : "    ") << "  Mostrar productos a la venta por categoria\n";
                        setColor(opcion2 == 2 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion2 == 2 ? " >" : "    ") << "  Mostrar todos los vendedores\n";
                        setColor(opcion2 == 3 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion2 == 3 ? " >" : "    ") << "  Eliminar un vendedor\n";
                        setColor(opcion2 == 4 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion2 == 4 ? " >" : "    ") << "  Eliminar un producto\n";
                        setColor(opcion2 == 0 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion2 == 0 ? " >" : "    ") << "  <Desconectarse>\n\n";
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
                            transcicion(2);
                            mostrarProductosPorCategoria();
                            break;
                        case 2:
                            transcicion(2);
                            mostrarvendedors();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 3:
                            transcicion(2);
                            eliminarVendedor();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 4:
                            transcicion(2);
                            eliminarProducto();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 0:
                            desconectar = true;
                            transcicion(2);
                            mostrarAnimacionCarga(1);
                            limpiarPantalla();
                            break;
                        default:
                            break;
                    }
                } while (!desconectar);
                break;
            }else{
                limpiarPantalla();
                mostrarAnimacionCarga(2);
                limpiarPantalla();
                setColor(COLOR_ERRORS);
                animacionParpadeo("\n\n  Datos incorrectos (x _ x)\n",3,6);
                setColor(COLOR_ERRORS);
                centrarTexto("\n\n  Datos incorrectos (x _ x)\n");
                setColor(COLOR_DEFAULT);
                centrarTexto("\nPresione enter para regresar al menu principal");
                getch();
                return main();
            }

            }

            case 2: {
                imprimirEncabezado("Inicio de sesion");
                string us, clave;
                setColor(COLOR_TEXTO2);
                cout << "   -------------------------------------------------------"<<endl;
                setColor(COLOR_TEXTO2);
                cout <<"            Ingresa tu usuario: ";
                setColor(COLOR_MENU);
                cin>>us;
                setColor(COLOR_TEXTO2);
                cout <<"            Ingresa la clave:   ";
                setColor(COLOR_MENU);
                cin>>clave;
                setColor(COLOR_TEXTO2);
                cout << "   -------------------------------------------------------"<<endl;
                setColor(COLOR_DEFAULT);
                cout<<"Presiona ENTER para continuar...";
                getch();

                if (us == "usuario" && clave == "usuario123"){
                limpiarPantalla();
                mostrarAnimacionCarga(5);
                limpiarPantalla();
                bool desconectar = false;
                mostrarBienvenida("Usuario Registrado");
                do {
                    const int OPCIONES_USUA = 6;
                    int opcion3 = 1;
                    bool seleccion = false;

                    while (!seleccion) {
                        limpiarPantalla();
                        imprimirEncabezado("Usuario - Opciones");

                        setColor(COLOR_MENU);
                        cout << "Opciones: " << endl;
                        setColor(opcion3 == 1 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 1 ? " >" : "    ") << " Mostrar productos a la venta por categoria\n";
                        setColor(opcion3 == 2 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 2 ? " >" : "    ") << " Agregar un vendedor\n";
                        setColor(opcion3 == 3 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 3 ? " >" : "    ") << " Agregar un producto\n";
                        setColor(opcion3 == 4 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 4 ? " >" : "    ") << " Eliminar un producto\n";
                        setColor(opcion3 == 5 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 5 ? " >" : "    ") << " Modificar un producto\n";
                        setColor(opcion3 == 0 ? COLOR_MENU : COLOR_DEFAULT);
                        cout << (opcion3 == 0 ? " >" : "    ") << " <Desconectarse>\n\n";
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
                            transcicion(2);
                            mostrarProductosPorCategoria();
                            break;
                        case 2:
                            transcicion(2);
                            nuevovendedor();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 3:
                            transcicion(2);
                            crearnew(Nuevos);
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 4:
                            transcicion(2);
                            eliminarProducto();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                         case 5:
                            transcicion(2);
                            modifProducto();
                            setColor(COLOR_ERRORS);
                            cout << "\nPresione cualquier tecla para continuar...";
                            _getch();
                            break;
                        case 0:
                            desconectar = true;
                            transcicion(2);
                            mostrarAnimacionCarga(1);
                            limpiarPantalla();
                            break;
                    }
                } while (!desconectar);
                break;
                }else{
                limpiarPantalla();
                mostrarAnimacionCarga(2);
                limpiarPantalla();
                setColor(COLOR_ERRORS);
                animacionParpadeo("\n\n  Datos incorrectos (x _ x)\n",3,6);
                setColor(COLOR_ERRORS);
                centrarTexto("\n\n  Datos incorrectos (x _ x)\n");
                setColor(COLOR_DEFAULT);
                centrarTexto("\nPresione enter para regresar al menu principal");
                getch();
            }
            }
            case 3:
                transcicion(2);
                mostrarBienvenida("Anonimo");

                mostrarProductosPorCategoria();
                break;
            case 0:
                limpiarPantalla();
                mostrarAnimacionCarga(4);
                limpiarPantalla();
                setColor(COLOR_DEFAULT);
                imprimirEncabezado("Saliste del Mini Super...");
                setColor(COLOR_MENU);
                centrarTexto("�Hasta luego! (:D)");
                setColor(COLOR_DEFAULT);
                break;
            default:
                setColor(COLOR_ERRORS);
                cout << ":( \nOpcion no valida.";
                setColor(COLOR_DEFAULT);
                cout << " Int�ntelo de nuevo.\n";
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



