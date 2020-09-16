#ifndef Ejercicios_h
#define Ejercicios_h
#include <iostream>
#include <fstream>

using namespace std;

void MenuEjer2();
void Ejerci2(int Vector[],int Vec[],int n);
void Ingresar(int n, int Vector[], int Vec[]);
void Dividir(int Elementos[],int inicial,int final);
void Fucionar(int Elementos[],int pinicial,int pfinal, int medio);
int Busqueda(int Vec[], int Elem, int n);

int N=100,pq=0;
void randomico(int a[]);
void imprimir(int a[]);
void ordenar(int a[]);
void m_m(int a[]);

void ejercicio3();
void escribir(ofstream& archivo, char x);

int menug();

#endif