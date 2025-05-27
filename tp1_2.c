#include <stdio.h>
int cuadrado (int n);
void cuadradoVoid(int numero);
void DireccionYContenido(int *x);
void invertir(int a, int b);
void orden(int *a, int *b);
int main(){
    int numero = 10, x = 5, a = 5, b = 2;
    int resul = cuadrado(numero);
    printf("El cuadrado de %d es: %d\n", numero, resul);
    cuadradoVoid(numero);
    DireccionYContenido(&x);
    printf("El valor de a es %d\n", a);
    printf("El valor de b es %d\n", b);
    invertir(a, b);
    orden(&a, &b);
    printf("\n");
    int num1, num2, seguir;
    do
    {
        printf("Ingrese el valor de num1:\n");
        scanf("%d", &num1);
        printf("Ingrese el valor de num2:\n");
        scanf("%d", &num2);
        cuadradoVoid(num1);
        cuadradoVoid(num2);
        printf("Direccion y contenido del primer numero:\n");
        DireccionYContenido(&num1);
        printf("Direccion y contenido del segundo numero:\n");
        DireccionYContenido(&num2);
        invertir(num1, num2);
        orden(&num1, &num2);
        printf("Desea continuar con otros valores?\n");
        printf("1-Si || 2-No\n");
        scanf("%d", &seguir);
    } while (seguir == 1);
    
    return 0;
}
int cuadrado (int n){
    return n * n;
}
void cuadradoVoid(int numero) {
    int resultado = numero * numero;
    printf("El cuadrado de %d es %d\n", numero, resultado);
}
void DireccionYContenido(int *x) {
    printf("Direccion: %p\n", x);
    printf("Contenido: %d\n", *x);
}
void invertir(int a, int b){
    int c = 0;
    c = a;
    a = b;
    b = c;
    printf("El valor de a ahora es %d\n", a);
    printf("El valor de b ahora es %d\n", b);
}
void orden(int *a, int *b){
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    printf("El valor mas chico esta en a: %d\n", *a);
    printf("El valor mas grande esta en b: %d\n", *b);

}
