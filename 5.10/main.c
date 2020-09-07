/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 11:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int h1, h2, h3;
    
    printf("Ingresar los 3 edades de los hijos:\n");
    scanf("%d %d %d", &h1, &h2, &h3);
    
    if(h1>h2){
        if(h1>h3){
            printf("%d el hijo mayor\n", h1);
            if(h3>h2){
                printf("%d  el hijo mediano\n", h3);
                printf("%d  el hijo menor\n", h2);
            }else{
                printf("%d  el hijo mediano\n", h2);
                printf("%d  el hijo menor\n", h3);
            }
        }else{
            printf("%d  el hijo mayor\n", h3);
            if(h1>h2){
                printf("%d  el hijo mediano\n", h1);
                printf("%d  el hijo menor\n", h2);
            }else{
                printf("%d  el hijo mediano\n", h2);
                printf("%d  el hijo menor\n", h1);
            }
        }
    }else
        if(h2>h3){
            printf("%d  el hijo mayor\n", h2);
            if(h3>h1){
                printf("%d  el hijo mediano\n", h3);
                printf("%d  el hijo menor\n", h1);
            }else{
                printf("%d  el hijo mediano\n", h1);
                printf("%d  el hijo menor\n", h3);
            }
                  
        }else{
            printf("%d el hijo mayor\n", h3);
            printf("%d el hijo mediano\n", h2);
            printf("%d el hijo menor\n", h1);
        }

    return (EXIT_SUCCESS);
}

