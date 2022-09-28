
#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

struct grafo {
    int num_vertices;
    int num_arestas;
    int **matriz;
};

Grafo *GRAFOconstroi(int v) {
    Grafo *g;

    g = malloc(sizeof(*g));

    g->num_vertices = v;
    g->num_arestas = 0;

    g->matriz = malloc(v * sizeof(int*));

    for(int i = 0; i < v; i++){
        g->matriz[i] = malloc(sizeof(v * sizeof(int)));
    }

    for(int i = 0; i < v; v++){
        for(int j = 0; j < v; j++){
            g->matriz[i][j] = 0;
        }
    }

    return g;
}

void GRAFOdestroi(Grafo *g) {

    for(int i = 0; i < g->num_vertices; i++){
        free(g->matriz[i]);
    }

    free(g->matriz);

    free(g);
}
