#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

#ifndef DATA_T
#define DATA_T
typedef uint64_t Data;
#endif // DATA_T

#ifndef VECTOR_H
#define VECTOR_H

typedef struct Vector {
	size_t size; // amount of storage space in the Vector
	Data *array; // pointer to the storage space
} Vector;

Vector *newVector(size_t size);
void deleteVector(Vector *v);

Data *at(Vector *v, size_t index);
Vector *clear(Vector *v);
size_t find(Vector *v, Data d);
Data *insert(Vector *v, Data d, size_t idx);
void print_Vector(Vector *v);
Vector *resize(Vector *v, size_t size);
Data remove(Vector *v, size_t index);

#endif // VECTOR_H