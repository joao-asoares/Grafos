/*
 * Tarefa de laboratorio 01 - Grafo
 *
 * GEN254 - Grafos - 2022/1
 *
 * Nome:      XXXX
 * Matricula: XXXX
 */

#ifndef GRAFO_H

#define GRAFO_H

#include <stdbool.h>
#include "aresta.h"

typedef struct grafo Grafo;

Grafo *GRAFOconstroi();

void GRAFOinsere_aresta(Grafo *p, Aresta a);

void GRAFOremove_aresta(Grafo *p, Aresta a);

int GRAFOnum_arestas(Grafo *p);

int GRAFOnum_vertices(Grafo *p);

void GRAFOimprime(Grafo *p);

void GRAFOdestroi(Grafo *p);

#endif /* GRAFO_H */
