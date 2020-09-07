/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 10:32 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
     int horas, minutos, resultado;
    printf("Escribe la hora y minutos (en 24hr)\n Ejemplo 01:10\n");
    scanf("%d:%d",&horas, &minutos);
    if(horas>12){
        horas-=12;
        printf("La hora es: %d:%d pm\n", horas, minutos);
    }else
        printf("La hora es: %d:%d am\n", horas, minutos);

    return (EXIT_SUCCESS);
}

