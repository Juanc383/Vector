#include <stdlib.h>
#include <stdio.h>
#include "../libs/Vector.h"

/*
static vector initNewVector(vector newVector, size_t dimensions){
  vector new_vector=NULL;
  new_vector=malloc(sizeof(vector));
  new_vector->n_members=dimensions;
  new_vector->components=malloc(sizeof(float)*dimensions);
  return new_vector;
}*/

vector newVector(size_t definir){
	vector new_vector=NULL;
	new_vector = malloc(sizeof(definir));
  new_vector->components = calloc(definir, sizeof(float));
  //new_vector->components = malloc(sizeof(definir));
	new_vector->n_members = definir;
	return new_vector;
}

void setVector(size_t n_members, float members[n_members], float components)
{
  vector myVector;
  int i;

  for(i=0;i<n_members;i++){
    members[i]=components;
  }
}

vector freeVector(vector phasor){
  vector myPhasor;
  myPhasor=phasor;
  free(myPhasor);
}
