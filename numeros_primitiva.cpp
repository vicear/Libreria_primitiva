// numeros_primitiva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(nullptr));

    int numeros[6] = { 0 }; // Inicializamos el array para almacenar los números generados

    // Generamos los 6 números
    for (int i = 0; i < 6; ++i) {
        bool repetido;
        int num_generado;

        do {
            num_generado = rand() % 49 + 1; // Genera un número aleatorio entre 1 y 49
            repetido = false;

            // Comprobamos si el número generado ya ha sido generado antes
            for (int j = 0; j < i; ++j) {
                if (num_generado == numeros[j]) {
                    repetido = true;
                    break;
                }
            }
        } while (repetido); // Si el número está repetido, genera otro número

        numeros[i] = num_generado;
    }

    // Ordenamos los números
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 6; ++j) {
            if (numeros[i] > numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Mostramos los números generados
    std::cout << "Números de la primitiva: ";
    for (int i = 0; i < 6; ++i) {
        std::cout << numeros[i] << " ";
    }

    // Generamos y mostramos el reintegro
    int reintegro = rand() % 10;
    std::cout << "\nReintegro: " << reintegro << std::endl;

    return 0;
}

// Hola Javi, he intentado hacer las librerías estáticas y no he podido de ninguna manera, 
// no entiendo lo que tengo que hacer ni como, 
// espero que en la siguiente clase me lo puedas explicar.
