#include <stdio.h>
int main (){
    printf("Hola mundo\n");
    int a = 2;
    int *p;
    p = &a;
    printf("Contenido de numero a traves de punt:%d\n", *p);//3)e)1)
    printf("Direccion de memoria de numero:%p\n", p);//3)e)2)
    printf("Direccion de memoria de num sin punt:%p\n", &a);//3)e)3)
    printf("Direccion de memoria del puntero: %p\n", &p);//3)e)4)
    printf("Tamano de memoria utilizado por la variable: %lu bytes\n", sizeof(a));//3)e)5)
  
    return 0;
}