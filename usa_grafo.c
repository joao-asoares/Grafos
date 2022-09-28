/*
 * Tarefa de laboratorio 01 - Grafo
 *
 * GEN254 - Grafos - 2022/1
 *
 * Nome:      XXXX
 * Matricula: XXXX
 */

#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "grafo.h"

int main() {
    int N;
    Grafo *grafo;
    int i;
    Item val;
    Item item;

    scanf("%d", &N);

    grafo = GRAFOconstroi();

    for (i = 0; i < N; i++) {
        scanf("%d", &val);

        if (val >= 0) {
            GRAFOinsere(grafo, val);
        }
        else {
            if(GRAFOvazia(grafo)) {
                printf("Grafo vazia!\n");
            }
            else {
                item = GRAFOremove(grafo);

                printf("%d\n", item);
            }
        }
    }

    GRAFOdestroi(grafo);

    return 0;
}
