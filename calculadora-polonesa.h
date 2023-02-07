#ifndef _CALCULADORA-POLONESA_H
#define _CALCULADORA-POLONESA_H

/* ------------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* ------------------------------------------------------------------------- */
/* definitions */

#define SBUFF 256 /**< String buffer */
#define NUM 0 /* valor na pilha eh operando */
#define OPE 1 /* valor na pilha eh operador */

/* Organizacao:
 *
 *                                        info_t:
 *                                     +-----------+
 *                                     | int val;  |
 *                               +---> +-----------+             +---> info_t
 *                               |     | int tipo; |             |
 *                               |     +-----------+             |
 *                               |                               |
 *               pilha_t:        |               pilha_t:        |
 *          +----------------+   |          +----------------+   |
 *          | info_t *info;  |---+          | info_t *info;  |---+
 * base---> +----------------+        +---> +----------------+
 *          | pilha_t *prox; |--------+     | pilha_t *prox; |---> pilha_t ---> ...
 *          +----------------+              +----------------+
 *                                                                               |
 *                                                                               V
 *                                                                             topo
 */

/* informacao de cada nodo da pilha */
typedef struct info_pilha
{
    int val; /* valor no nodo da pilha */
    int tipo; /* Se tipo=NUM, val = numero; Se tipo=OPE, val = '+', '-', '*' ou '/' */
} info_t;

/* ponteiro para nodo da pilha contendo informacoes */
typedef struct nodo_pilha
{
    info_t *info; /* estrutura contendo os dados do nodo */
    struct nodo_pilha *prox; /* ponteiro para o proximo nodo */
} pilha_t;

/* ------------------------------------------------------------------------- */
/* prototypes */

void help(void); /**< Prints help information and exit */
void copyr(void); /**< Prints copyright information and exit */
void Caluladora_init(void);  /**< Initializes some operations before start */

/* funcoes de pilha */
int empty(pilha_t *p); /* retorna verdadeiro se pilha vazia */
void push(pilha_t **p, info_t i); /* insere elemento val no topo */
info_t *pop(pilha_t **p); /* remove elemento do topo */
info_t *top(pilha_t *p); /* consulta elemento no topo, sem remove-lo */
int size(pilha_t *p); /* retorna o total de elementos na pilha */
void clean(pilha_t **p); /* limpa toda a memoria utilizada pela pilha */
void print(pilha_t *p); /* printa todos os elementos da pilha */

/* funcoes auxiliares */
int valida(char *s); /* valida a equacao retornando verdadeiro/falso */

#endif /* NOT def _CALCULADORA-POLONESA_H */

