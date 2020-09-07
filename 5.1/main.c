/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 07:56 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int x=5;
    if(x>-0)
        x++;
    else{
        if(x>-1);
        x+=2;
    }
    printf("%d\n" , x);
    
    x=5;
    if(x >=0)
        x++;
    if(x >=1)
        x +=2;
    printf("%d\n" , x);
    printf("Lo diferente es que el primer if si la primer condicion es positiva");
    printf("Solo realizara la accion que indica y el negativo se ira a la segunda condicion");
    printf("condicion, pero ya que esta es similar no va a entrar en esta");
    printf("Condicion al menos que sea (1), y ejecuta la operacion que sigue");
    printf(" y en el segundo ejercicio se ejecutaran los dos if");
    printf("Pero de igual mado si en la primera no cumple, sera lo mismo para la segunda");
    printf("Condicion, al menos que sea (1), y si entra en las dos condiciones se realizara");
    printf("Las dos condiciones que se indican");

    return (EXIT_SUCCESS);
}

