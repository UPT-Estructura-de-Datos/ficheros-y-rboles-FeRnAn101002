#include <fstream> // Biblioteca para el manejo de ficheros
#include <iostream>
using namespace std; // Biblioteca para la entrada-salida estándar

typedef char TCadena[30]; // Define un tipo de dato para cadenas de caracteres de tamaño 30

int main() {
    int i;
    float r;
    TCadena cad; // Variable para almacenar la cadena leída
    ifstream fichin("EJEMPLOS.TXT"); // Declaración y apertura del fichero

    if (!fichin) { // Si no se pudo abrir el archivo, mostrar un mensaje de error
        cout << "\n Incapaz de crear o abrir el fichero ";
    } else {
        fichin >> i; // Lectura de un valor entero desde el archivo
        while (!fichin.eof()) { // Mientras no se llegue al final del archivo
            cout << i << " "; // Mostrar el valor entero leído
            fichin >> r; // Leer un valor flotante
            cout << r << " "; // Mostrar el valor flotante
            fichin >> cad; // Leer una cadena de caracteres
            cout << cad << "\n"; // Mostrar la cadena leída
            fichin >> i; // Leer otro valor entero
        }
        fichin.close(); // Cerrar el archivo después de leer
    }
    return 0; // Fin del programa
}

