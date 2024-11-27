#include <fstream> // Biblioteca para el manejo de ficheros
#include <iostream>
using namespace std; // Biblioteca para la entrada-salida est�ndar

typedef char TCadena[30]; // Define un tipo de dato para cadenas de caracteres de tama�o 30

int main() {
    int i;
    float r;
    TCadena cad; // Variable para almacenar la cadena le�da
    ifstream fichin("EJEMPLOS.TXT"); // Declaraci�n y apertura del fichero

    if (!fichin) { // Si no se pudo abrir el archivo, mostrar un mensaje de error
        cout << "\n Incapaz de crear o abrir el fichero ";
    } else {
        fichin >> i; // Lectura de un valor entero desde el archivo
        while (!fichin.eof()) { // Mientras no se llegue al final del archivo
            cout << i << " "; // Mostrar el valor entero le�do
            fichin >> r; // Leer un valor flotante
            cout << r << " "; // Mostrar el valor flotante
            fichin >> cad; // Leer una cadena de caracteres
            cout << cad << "\n"; // Mostrar la cadena le�da
            fichin >> i; // Leer otro valor entero
        }
        fichin.close(); // Cerrar el archivo despu�s de leer
    }
    return 0; // Fin del programa
}

