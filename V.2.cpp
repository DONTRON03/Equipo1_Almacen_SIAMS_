#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

void inicializarAlmacen(int almacen[MAX][MAX], int filas, int columnas){
  for( int i=0 ; i<filas ; i++ ){
    for( int j=0 ; j<columnas ; j++ ){
      almacen[i][j] = 0;
      cout << "Ingrese la cantidad de filas" << endl;
      cin >> filas;
      cout << "Ingrese la cantidad de columnas" << endl;
      cin >> columnas;
    }
  }
}

void agregarproducto (int almacen[MAX][MAX],int filas,int columnas, int cantidad ){
  almacen[filas][columnas] += cantidad;
}

void mostrarAlmacen(int almacen[MAX][MAX], int filas, int columnas){
  for(int i = 0 ; i < filas ; i++ ){
    for(int j = 0 ; j < columnas ; j++ ){ 
      cout<<"Posicion ["<< i <<"] ["<<j<<"]: "<<almacen[i][j]<<endl;
    }
  }
}

int main(){
  int almacen[MAX][MAX];
  int filas = 10;
  int columnas = 10;
  int opc;
  int cantidad;
  cout << "Bienvenido al Inventario del MiniSuper\n" << endl;
  while(true){
    cout << "Presione 1) para agregar productos nuevos" << endl;
    cout << "Presione 2) para mostrar los productos"<< endl;
    cout << "Presione 0) para salir del almacen" << endl;
    cin >> opc;
    switch(opc){
      case 1:
        cout << "Ingrese la cantidad de producto a agregar: "<<endl;;
        cin >> cantidad;
        agregarproducto(almacen,filas,columnas,cantidad);
        break;
      case 2:
    	mostrarAlmacen(almacen, filas, columnas);
    	break;
      case 0:
        cout<<"Usted ha salido del Inventario"<<endl;
        return 0;
    }
  }
}
