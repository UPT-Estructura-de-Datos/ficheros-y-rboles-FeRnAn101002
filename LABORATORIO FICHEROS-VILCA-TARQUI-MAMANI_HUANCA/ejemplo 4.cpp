#include <stdio.h>
#include <string.h>

int main() {
    FILE *ptFichero; // Declaración del puntero al archivo
    char fin[] = "fin"; // Cadena que indica el final del programa
    char frase[60]; // Variable para almacenar la frase leída

    ptFichero = fopen("registroDeUsuario.txt", "wt"); // Abre el archivo en modo escritura (texto)
    if (!ptFichero) {
        printf("No se pudo abrir el archivo para escritura.\n");
        return 1;
    }

    printf("PROGRAMA para ESCRIBIR FRASES.\nCuando quiera salir, escriba la palabra 'fin'.\n\n");
    do {
        puts("\nEscriba una FRASE:\n(o fin). \n");
        fgets(frase, sizeof(frase), stdin); // Lee la frase del usuario
        frase[strcspn(frase, "\n")] = 0; // Elimina el salto de línea al final de la frase

        if (strcmp(frase, fin) == 0) // Si la frase es "fin", termina el ciclo
            break;

        fprintf(ptFichero, "%s\n", frase); // Escribe la frase en el archivo
    } while (strcmp(frase, fin) != 0); // Continúa hasta que se ingrese "fin"

    fclose(ptFichero); // Cierra el archivo
    return 0; // Fin del programa
}

