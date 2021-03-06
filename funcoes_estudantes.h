#ifndef funcoes_estudantes
#define funcoes_estudantes

#include "constantes.h"

void escreveDadosEstudante(tipoEstudante vEstudante[]);
tipoEstudante leDadosEstudante();
void listaDadosEstudante(tipoEstudante vEstudante[MAX_ESTUDANTES], int numTotalEstudantes);
int procuraEstudante(tipoEstudante vEstudante[], int numTotalEstudantes, int numeroEstudante);
void acrescentaEstudante(tipoEstudante vEstudante[], int *numTotalEstudantes, int numeroEstudante);
void alterarVetorEstudante(tipoEstudante vEstudante[], int numTotalEstudantes);
void eliminarEstudante(tipoEstudante vEstudante[], int *numTotalEstudantes);

void gravarEstudantesTexto(tipoEstudante vEstudante[], int numTotalEstudante);
void gravarEstudantesBinario(tipoEstudante vEstudante[], int numTotalEstudante);
void leEstudantesTexto(tipoEstudante vEstudante[], int *numTotalEstudante);
void leEstudantesBinario(tipoEstudante vEstudante[], int *numTotalEstudante);

#endif
