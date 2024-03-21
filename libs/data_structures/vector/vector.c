//
// Created by MSI on 21.03.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include "vector.h"

vector createVector(size_t n) {
    vector a;
    a.capacity = n;
    a.size = 0;
    a.data = malloc(sizeof(int) * n);

    if (a.data == NULL) {
        fprintf(stderr, "bad alloc");
        exit(1);
    }

    return a;
}

void reserve(vector *v, size_t newCapacity) {
    if (newCapacity == 0) {
        v->data = NULL;
        v->size = 0;
    } else if (v->size > newCapacity) {
        v->size = newCapacity;
    } else if (v->capacity < newCapacity) {
        v->data = realloc(v->data, sizeof(int) *
            newCapacity);
    }

    if (v->data == NULL) {
        fprintf(stderr, "bad alloc");
        exit(1);
    }

    v->capacity = newCapacity;
}

void clear(vector *v) {
    v->size = 0;
}

void shrinkToFit(vector *v) {
    reserve(v, v->size);
}

void deleteVector(vector *v) {
    free(v->data);
    v->size = 0;
    v->capacity = 0;
}
