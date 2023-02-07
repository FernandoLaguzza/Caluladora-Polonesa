/* ------------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/
#include <getopt.h> /* get options from system argc/argv */
#include "calculadora-polonesa.h" /* To be created for this template if needed */

/* #include <time.h> */ /* Time and date functions */
/* #include <math.h> */ /* Mathematics functions */
/* #include <string.h> */ /* Strings functions definitions */
/* #include <dlfcn.h> */ /* Dynamic library */
/* #include <malloc.h> */ /* Dynamic memory allocation */
/* #include <unistd.h> */ /* UNIX standard function */
/* #include <limits.h> */ /* Various C limits */
/* #include <ctype.h> */ /* Character functions */
/* #include <errno.h> */ /* Error number codes errno */
/* #include <signal.h> */ /* Signal processing */
/* #include <stdarg.h> */ /* Functions with variable arguments */
/* #include <pthread.h> */ /* Parallel programming with threads */
/* #include <fcntl.h> */ /* File control definitions */
/* #include <termios.h> */ /* Terminal I/O definitions POSIX */
/* #include <sys/stat.h> */ /* File status and information */
/* #include <float.h> */ /* Float constants to help portability */
/* #include <setjmp.h> */ /* Bypass standard function calls and return */
/* #include <stddef.h> */ /* Various types and MACROS */
/* #include <SWI-Prolog.h> */ /* Prolog integration with C */
/* #include <ncurses.h> */ /* Screen handling and optimisation functions */
/* #include <allegro.h> */ /* A game library for graphics, sounds, etc. */
/* #include <libintl.h> */ /* Internationalization / translation */
/* #include <locale.h> */ /* MACROS LC_ for location specific settings */

int main(int argc, char *argv[])
{

    exN_init(); /* initialization function */

    return 0;
}

/* Write your functions here... */

void Calc_init(void)
{
    return;
}


/* ---------------------------------------------------------------------- */

int valida(char *s)
{
    const char sval[]="0123456789 +-*/";
    errno=0;
}

/* ---------------------------------------------------------------------- */

info_t *pop(pilha_t **p)
{
    pilha_t *remove = NULL;

    if(empty(*p) != 1) {
        remove = *p;
        *p = remove->prox;
    }
    else
        printf("Pilha vazia\n");
    return remove;
}

/* ---------------------------------------------------------------------- */

void push(pilha_t **p, info_t i)
{
    pilha_t *novo = malloc(sizeof(pilha_t)); //Aloca a memoria necessaria
	if(novo) //Se a memoria foi alocada
	{
		novo->val = i;
		novo->prox = p;
		return novo;
	}
	else
		printf("Erro ao alocar memoria\n");
    return NULL;
}

/* ---------------------------------------------------------------------- */

int empty(pilha_t *p)
{
    if(p == NULL)
        return 1;
    else
        return 0;
}

/* ---------------------------------------------------------------------- */

void clean(pilha_t **p)
{
    ;
}

/* ---------------------------------------------------------------------- */

int size(pilha_t *p)
{
    int count = 0;
    while(empty(p) != 1)
    {
        count++;
        p = p->prox;
    }

    return count;
}

/* ---------------------------------------------------------------------- */

info_t *top(pilha_t *p)
{
    while(empty(p) != 1)
    {
        return p;
    }
    
}
/* ---------------------------------------------------------------------- */

void print(pilha_t *p)
{
    printf("\n\t---Pilha---\n");
    while(p)
    {
		printf("\t%.2f\n", p->val);
		p = p->prox;
    }
}

/* ------------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline    */
/* Template by Dr. Beco <rcb at beco dot cc>       Version 20180716.101436   */