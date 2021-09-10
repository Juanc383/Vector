/**
 * @Author Juan C Rosales
 * @Date 17 Aug 2021
 * @Name Vector.h
 * @Copyright TDA 2021
 */

// SOLID Convention

#ifndef Vector_h
 #define Vector_h

//Bibliotecas Standard
#include <stdio.h>

//User Libraries


// Data Types

struct _vector{
	float *components;
	size_t n_members;
};

//Wrapper
typedef struct _vector* vector;

// Generator/Constructors
vector newVector(size_t definir);

void setVector(size_t n_members, float members[n_members], float components);

vector freeVector(vector phasor);

#endif
