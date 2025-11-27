#include <stdio.h>
int max_recursivo(int arr[], int inicio, int fin) {
    if (inicio == fin) {
        return arr[inicio];
    }
    int mitad = (inicio + fin) / 2;
    int maxIzq = max_recursivo(arr, inicio, mitad);
    int maxDer = max_recursivo(arr, mitad + 1, fin);
    return (maxIzq > maxDer) ? maxIzq : maxDer;
}

int main() {
    int n;
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);
    int arr[n];
    printf("Ingresa los elementos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int resultado = max_recursivo(arr, 0, n - 1);
    printf("El valor máximo es: %d\n", resultado);
    return 0;
}
