#ifndef _BACK_H_
#define _BACK_H_

// ------------ HEADERS ------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//------------ DEFINICIONES ------------
#define CHANCE 5

// ------------ FUNCIONES ------------
extern char *inicializar (int, int);

extern void actualizar_tablero(char * , int , int );

static void get_vecinos(char* , char* , int , int);

static int contar_vecinos(char* , int , int , int , int);

#endif
