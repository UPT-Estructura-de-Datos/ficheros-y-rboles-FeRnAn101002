#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream archivo; // Objeto de la clase ofstream para manejar archivos de salida
    archivo.open("datos.txt"); // Abre el archivo "datos.txt" en modo escritura
    archivo << "Primera linea de texto" << endl; // Escribe una línea de texto en el archivo
    archivo << "Segunda linea de texto" << endl; // Escribe la segunda línea en el archivo
    archivo << "Última línea de texto" << endl; // Escribe la tercera línea en el archivo
    archivo.close(); // Cierra el archivo después de escribir
    return 0; // Fin del programa
}

