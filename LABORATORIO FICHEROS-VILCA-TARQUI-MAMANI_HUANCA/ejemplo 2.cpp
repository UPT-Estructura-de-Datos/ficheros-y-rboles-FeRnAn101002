#include <fstream> // Biblioteca para el manejo de ficheros
#include <iostream> // Biblioteca para la entrada-salida estándar
using namespace std; // Espacio de nombres para la entrada y salida estándar

int main() {
    ofstream fichout("EJEMPLOS.TXT", ios::out); // Abre el archivo "EJEMPLOS.TXT" en modo escritura
    if (!fichout) { // Verifica si no se pudo abrir el archivo
        cout << "\n Inhabilitado para crear o abrir el fichero \n"; // Muestra un mensaje de error
    } else {
        fichout << 1 << " " << 5.0 << " APROBADO" << endl; // Escribe en el archivo
        fichout << 2 << " " << 1.1 << " SUSPENSO" << endl; // Escribe en el archivo
        fichout << 3 << " " << 8.0 << " NOTABLE" << endl; // Escribe en el archivo
        fichout.close(); // Cierra el archivo después de escribir
    }
    return 0; // Fin del programa
}

