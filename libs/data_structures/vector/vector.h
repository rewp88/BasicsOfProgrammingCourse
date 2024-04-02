//
// Created by MSI on 21.03.2024.
//
#include <stdio.h>
#include <stdint.h>
#include <stdint.h>
#include <stdbool.h>

#ifndef UNTITLED1_VECTOR_H
#define UNTITLED1_VECTOR_H

typedef struct vector {
    int *data; // указатель на элементы вектора
    size_t size; // размер вектора
    size_t capacity; // вместимость вектора
} vector;

vector createVector(size_t n);

void reserve(vector *v, size_t newCapacity);

void clear(vector *v);

void shrinkToFit(vector *v);

void deleteVector(vector *v);

bool isEmpty(vector *v);

bool isFull(vector *v);

int getVectorValue(vector *v, size_t i);

void pushBack(vector *v, int x);

void popBack(vector *v);

#endif //UNTITLED1_VECTOR_H