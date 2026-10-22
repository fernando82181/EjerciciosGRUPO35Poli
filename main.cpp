#include <iostream>
using namespace std;


int main() {

    string productos = "\n1. Cafe \t $2000"
                       "\n2. Jugo Natural\t $4000"
                       "\n3. Sandwich\t $7000"
                       "\n4. Empanada\t $2500";

    int opcionProductos = 0;
    int cantidadProducto = 0; //Esta variable nos va a servir para solicitar la cantidad de un producto en especifico
    double subtotal = 0, precioProducto = 0;
    int transacciones = 0;

    do {

        cout << productos << endl;
        cout<< "\n5. Finalizar jornada";
        cin >> opcionProductos;


        switch (opcionProductos) {
            case 1:
                precioProducto = 2000;
                break;

            case 2:
                precioProducto = 4000;
                break;
            case 3:
                precioProducto = 7000;
                break;

            case 4:
                precioProducto = 2500;
                break;
            case 5:
                cout << "Fin de la jornada" << endl;

                break;
                default:
                    cout << "Opcion no valida";
                break;

        }

        if (opcionProductos < 5  && opcionProductos > 0) {
            cout << "Ingrese la cantidad de productos a consumir: ";
            cin >> cantidadProducto;
            subtotal = subtotal + precioProducto*cantidadProducto;
        }




    } while ( opcionProductos != 5 );

    cout << "El subtotal es = " <<subtotal << endl;


    return 0;
}
