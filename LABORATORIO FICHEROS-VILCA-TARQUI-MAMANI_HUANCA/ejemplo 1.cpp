#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream archivo; // Objeto de la clase ofstream para manejar archivos de salida
    archivo.open("datos.txt"); // Abre el archivo "datos.txt" en modo escritura
    archivo << "Primera linea de texto" << endl; // Escribe una l�nea de texto en el archivo
    archivo << "Segunda linea de texto" << endl; // Escribe la segunda l�nea en el archivo
    archivo << "�ltima l�nea de texto" << endl; // Escribe la tercera l�nea en el archivo
    archivo.close(); // Cierra el archivo despu�s de escribir
    return 0; // Fin del programa
}

