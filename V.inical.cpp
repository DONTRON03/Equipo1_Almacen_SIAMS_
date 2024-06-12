#include <iostream>
#include <vector>
using namespace std;

int Opcio(int y1) {
    return y1;
}

int agr(int cantidad, int y1) {
    return cantidad + y1;
}

int eli(int cantidad, int y1) {
    return cantidad - y1;
}

void agregarProductoN(int& producto) {
    int z, a;
    float precio;
    char productoname[25];
    char prov[25];
    char produ[25];
    char matriz[productoname[20]][prov[20]];
    do {
        cout<<"Nombre del producto a agregar:\n"<<endl;
        cin>>productoname;
        cout << "Cantidad de unidades: \n";
        cin >> z;
        cout<<"Precio unitario:\n"<<endl;
        cin>>precio;
        cout<<"Proveedor: \n";
        cin>>prov;
        matriz[productoname[25]][prov[25]];
        cout<<"El Producto ingresado tiene las caracteristicas "<<matriz[productoname[25]][prov[25]]<<endl;
        producto = agr(producto, z);
        cout << "Desea agregar más? (1: Sí, 0: No)\n";
        cin >> a;
        if(a==0){
            break;
        }
    } while(a != 0);
}

void agregarProducto(int& producto) {
    int z, a;
    do {
        cout << "Cantidad de unidades: \n";
        cin >> z;
        producto = agr(producto, z);
        cout << "Desea agregar más? (1: Sí, 0: No)\n";
        cin >> a;
        if(a==0){
            break;
        }
    } while(a != 0);
}


int main() {

    int opc, opc2;
    int p = 0, s = 0, g = 0, j = 0, c = 0, d = 0;
    do {
        cout << "Presionen 1 para agregar productos al inventario: " << endl;
        cout << "Presionen 2 para revisar los precios de los productos" << endl;
        cout << "Presionen 3 para actualizarte sobre los productos que hay" << endl;
        cout << "Presionen 4 para eliminar productos del inventario" << endl;
        cout << "Presionen 0 para salir" << endl;
        cin >> opc;
        switch(opc) {
            case 1:
                do {
                    cout << "Presionen 1 para agregar papas" << endl;
                    cout << "Presionen 2 para agregar sodas" << endl;
                    cout << "Presionen 3 para agregar media docena de galletas" << endl;
                    cout << "Presionen 4 para agregar jugos" << endl;
                    cout << "Presionen 5 para agregar cerveza" << endl;
                    cout<<"Presione 6 para agregar un producto nuevo"<<endl;
                    cout << "Presionen 0 para volver al menú principal" << endl;
                    cin >> opc2;
                    switch(opc2) {
                        case 1:
                            agregarProducto(p);
                            break;
                        case 2:
                            agregarProducto(s);
                            break;
                        case 3:
                            agregarProducto(g);
                            break;
                        case 4:
                            agregarProducto(j);
                            break;
                        case 5:
                            agregarProducto(c);
                            break;
                        case 6:
                            agregarProductoN(d);
                        break;
                    }
                } while(opc2 != 0);
                break;
            case 2:
                cout << "** Los productos están registrados por docena **" << endl;
                cout << "papas: $230.00" << endl;
                cout << "sodas: $240.00" << endl;
                cout << "1/2 docena de galletas: $100.00" << endl;
                cout << "jugos: $300.00" << endl;
                cout << "cerveza: $500.00" << endl;
                break;
            case 3:
                cout << "Hay " << p << " del producto 1" << endl;
                cout << "Hay " << s << " sodas" << endl;
                cout << "Hay " << g << " galletas" << endl;
                cout << "Hay " << j << " jugos" << endl;
                cout << "Hay " << c << " cervezas" << endl;
                break;
            case 4:
                int z;
                cout << "Qué producto quitaron:" << endl;
                cout << "Presionen 1 para quitar producto1" << endl;
                cout << "Presionen 2 para quitar producto2" << endl;
                cout << "Presionen 3 para quitar producto 3" << endl;
                cout << "Presionen 4 para quitar producto 4" << endl;
                cout << "Presionen 5 para quitar producto 5" << endl;
                cin >> z;
                switch(z) {
                    case 1:
                        cout << "Cuántos quitaron: ";
                        cin >> z;
                        p = eli(p, z);
                        if(p < 0) {
                            p = 0;
                        }
                        cout << "Ok, menos eso aún nos quedan: " << p << endl;
                        break;
                    case 2:
                        cout << "Cuántos se quitaron: ";
                        cin >> z;
                        s = eli(s, z);
                        if(s < 0) {
                            s = 0;
                        }
                        cout << "Ok, menos eso aún nos quedan: " << s << endl;
                        break;
                    case 3:
                        cout << "Cuántos se quitaron: ";
                        cin >> z;
                        g = eli(g, z);
                        if(g < 0) {
                            g = 0;
                        }
                        cout << "Ok, menos eso aún nos quedan: " << g << endl;
                        break;
                    case 4:
                        cout << "Cuántos se quitaron: ";
                        cin >> z;
                        j = eli(j, z);
                        if(j < 0) {
                            j = 0;
                        }
                        cout << "Ok, menos eso aún nos quedan: " << j << endl;
                        break;
                    case 5:
                        cout << "Cuántos quitaron: ";
                        cin >> z;
                        c = eli(c, z);
                        if(c < 0) {
                            c = 0;
                        }
                        cout << "Ok, menos eso aún nos quedan: " << c << endl;
                        break;
                }
                break;
            case 0:
                cout << "Usted ha salido de la compra" << endl;
                break;
        }
    } while(opc != 0);

    return 0;
}

