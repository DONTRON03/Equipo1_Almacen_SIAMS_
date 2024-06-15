#include <iostream>
#include <string.h>
using namespace std;
void usuarios(string usuario){
  cout << "Usted ha ingresado como" << usuario << endl;
}
#define MAX 50
int numeroproduc = 0;
int numUsuarios = 0;

struct producto{
  int id;
  string nombre;
  float precio;
  string descripcion;
  string presentacion;
};
producto matriz[MAX];
void vender(){
  cout << " Ingrese la cantidad de productos a vender " << endl;
  cin >> numeroproduc;
  for (int i=0;i<numeroproduc;i++){
    cout << "Ingrese el ID del producto  "<< i + 1 << ":" << endl;
    cin >> matriz[i].id;
    cout << "Ingrese el nombre del producto "<< i +1 << ":" << endl;
    cin >> matriz[i].nombre;
    cout <<"Ingrese el precio del producto  "<< i + 1 << ":" << endl;
    cin >> matriz[i].precio;
    cout << "Ingrese una descripcion breve del producto  " << i + 1 << " : " << endl;
    cin >> matriz[i].descripcion;
    cout << "Escriba el tipo de presentacion del producto "<< " en botella \n "<< "en paquete \n " << " en bolsa \n " << " en caja \n " << " en docena \n "<< endl;
    cout << "Presentacion en \n "<< i + 1 << " : " << endl;
    cin >> matriz[i].presentacion;
  }
}
void crearnew(){
  cout<< " ingresa la cantidad del producto por docena que deseas crear "<<endl;
  cin>>numeroproduc;
  for(int i=0;i<numeroproduc;i++){
    cout<<" ingrese el ID del producto  "<< i + 1 << ":" << endl;
    cin >> matriz[i].id;
    cout<< " ingrese el nombre del producto "<< i +1 << ":"<< endl;
    cin>> matriz[i].nombre;
    cout<<"ingrese el precio del producto  "<< i + 1 << ":"<< endl;
    cin>> matriz[i].precio;
    cout<< " ingrese una descripcion breve del producto  "<< i + 1 << " : "<< endl;
    cin>> matriz[i].descripcion;
    cout<< " escriba el tipo de presentacion del producto "<< " en botella \n "<< "en paquete \n " << " en bolsa \n " << " en caja \n " << " en docena \n "<< endl;
    cout<< " presentacion en \n "<< i + 1 << " : " << endl;
    cin>> matriz[i].presentacion;
    
  }
}

void info(){
  cout<<"Ingrese la cantidad de productos a mostrar"<<endl;
  cin>>numeroproduc;
  for(int i=0;i<numeroproduc;i++){
    cout<<"Producto "<< i+1 <<" :"<<endl;
    cout<<"ID: "<<matriz[i].id<<endl;
    cout<<"Nombre: "<<matriz[i].nombre<<endl;
    cout<<"Precio: "<<matriz[i].precio<<endl;
    cout<<"Descripcion del producto: "<<matriz[i].descripcion<<endl;
    cout<<"Presentacion en: "<<matriz[i].presentacion<<endl;
  }
}
struct usuarioss{
  string usuario;
};
usuarioss usu[MAX];

void crearUsuarioss(){
  cout<<"Ingrese el nombre del usuario"<<endl;
  cin>>usu[numUsuarios].usuario;
  numUsuarios++;
}
void mostrarUsuarioss(){
  for(int i=0;i < numUsuarios;i++){
    cout<< "Usuario: "<< i+1 << ": "<< usu[i].usuario <<endl;
  }
}
void cambiardatospersonales(){
string usuario;
  int indice = -1;
  cout << " Ingrese el nombre de usuario para el que desea cambiar " << endl;
  cin >> usuario;
  for (int i = 0; i < numUsuarios; i++) {
    if(usu[i].usuario == usuario){
      indice = i;
      break;
  }
}

  if (indice != -1){
  cout<< " ingrese el nuevo usario ";
    cin>> usu[indice].usuario;
  }else {
    cout<< " usuario no encontrado ";
    
  }
}

struct vendedorsh{
  string vendedor;
  string productovend;
  string recom;
  string recomprodu;
};
vendedorsh vente[MAX];
  
int numVendedores = 0;
int numProducts = 0;
int recomendacion = 0;
int recomprod = 0;
  
void nuevovendedor(){
  cout << "Ingrese el nombre del vendedor:" <<endl;
  cin >> vente[numVendedores].vendedor;
  cout << "\nIngrese el producto que vende:" <<endl;
  cin >> vente[numProducts].productovend;
  numVendedores++;
  numProducts++;
}
void mostrarvendedors(){
  for(int i=0; i<numVendedores; i++){
    for(int j=0; j<numProducts; j++){
      cout << "vendedor:" << vente[i].vendedor << " producto vendido :"<< i + 1 << " : " << vente[j].productovend << endl;
    }
  }
}
void recomendar(){
  cout << "Ingrese el nombre del vendedor a recomendar: " << endl;
  cin >> vente[recomendacion].recom;
  cout << "\nIngrese el producto que vende: " << endl;
  cin >> vente[recomprod].recomprodu;
  recomendacion++;
  recomprod++;
}
void vendedorprod(){
  for(int i=0; i < recomendacion; i++){
    for(int j=0; j< recomprod; j++){
      cout<< " vendedor recomendado "<< i +1 << vente[i].recom;
      cout<< "\n producto " << j + 1 << ":" << vente[j].recomprodu;
    }
  }
  
}

void menu(){
  cout<<"Bienvenido al Mini Super\n"<<endl;
  cout<<"Seleccione su tipo de usuario: \n"<<endl;
  cout<<"1) * Administrador* \n"<<endl;
  cout<<"2) * Usuario registrado \n*"<<endl;
  cout<<"3) * Anonimo * \n"<<endl;
  cout<<"4) * Registrarme * \n"<<endl;
}
int main(){
  int o,op;
  string usuario;
  do{
  menu();
  cin>>o;
  switch(o){
    case 1:
      cout<<"Usted ha ingresado como Administrador. Identifiquese para continuar: \n"<<endl;
      cin>>usuario;
      usuarios(usuario);
      cout<<"\n¿Que desea hacer\n?"<<endl;
      cout<<"1) Dar de alta un nuevo usuario\n"<<endl;
      cout<<"2) Mostrar todos los usuarios\n"<<endl;
      cout<<"3) Mostrar todos los vendedores recomendados por un usuario\n"<<endl;
      cout<<"4) Ver todos los productos ofrecidos por un vendedor\n"<<endl;
      cout<<"5) Mostrar todos los productos a la venta\n"<<endl;
      cout<<"6) Desconectarse (Volver a Anonimo)\n"<<endl;
      cin>>op;
      switch(op){
        case 1:
          crearUsuarioss();
          break;
        case 2:
          mostrarUsuarioss();
          break;
        case 3:
          recomendar();
          break;
        case 4:
          vendedorprod();
           break;
        case 5:
          info();
          break;
        case 6:
          break;
      }
      break;
      return 0;
    
    case 2:
      cout<<"Usted ha ingresado como Usuario Registrado. Identifiquese para continuar: \n"<<endl;
      cin>>usuario;
      usuarios(usuario);
      cout<<"<Seleccione una opcion>\n"<<endl;
      cout<<"1) Mostrar mis vendedores recomendados\n"<<endl;
      cout<<"2) Recomendar vendedor\n"<<endl;
      cout<<"3) Ver todos los productos a la venta\n"<<endl;
      cout<<"4) Ver todos los productos de los vendedores\n"<<endl;
      cout<<"5) Valorar un producto\n"<<endl;
      cout<<"6) Poner un producto a la venta\n"<<endl;
      cout<<"7) Desconectarse\n"<<endl;
      cout<<"0) Salir\n"<<endl;
      cin>>op;
      switch(op){
        case 1:
          vendedorprod();
          break;
        case 2:
          recomendar();
          break;
        case 3:
          info();
          break;
        case 4:
          mostrarvendedors();
          break;
        case 5:
          crearnew();
          break;
        case 6:
          vender();
           break;
        case 7:
          menu();
          break;
        case 0:
          break;
        default :
          cout << "Opcion invalida" << endl;
        break;
      }
    return 0;
    break;
    
    case 3:
      cout << "Usted ha ingresado como Anonimo" << endl;
      cout << "Identifiquese para coninuar" << endl;
      cin >> usuario;
      cout << "Bienvenido/a" << endl;
      cout << "Productos a la venta" << endl;
      info();
      break;
    case 4:
      crearUsuarioss();
    default:
      cout<<"Opcion no válida"<<endl;
      break;
  }
  }while (o != 0); 
    return 0;
}
