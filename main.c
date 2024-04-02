#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "libs/data_structures/vector/vector.h"

void test_pushBack_emptyVector() {
    vector v = createVector(0);
    pushBack(&v, 5);
    assert(v.size == 1);
    assert(v.capacity == 1);
    assert(v.data[0] == 5);
    deleteVector(&v);
}

void test_pushBack_fullVector() {
    vector v = createVector(5);
    for (int i = 0; i < v.capacity; i++) {
        pushBack(&v, i);
    }
    assert(v.size == 5);
    pushBack(&v, 5);
    assert(v.data[v.size - 1] == 5);
    assert(v.size == 6);
    assert(v.capacity == 10);
    deleteVector(&v);
}

void test_popBack_notEmptyVector() {
    vector v = createVector(0);
    pushBack(&v, 10);
    assert(v.size == 1);
    popBack(&v);
    assert(v.size == 0);
    assert(v.capacity == 1);
}

void test_atVector_notEmptyVector() {
    vector v = createVector(5);
    for (int i = 0; i < 5; ++i) {
        pushBack(&v, i);
    }
    for (int i = 0; i < 5; i++) {
        int *result = atVector(&v, i);
        assert(*result == i);
    }
    deleteVector(&v);
}

void test_atVector_requestToLastElement() {
    vector v = createVector(5);
    for (int i = 0; i < 5; ++i) {
        pushBack(&v, i);
    }
    int *result = atVector(&v, 4);
    assert(*result == 4);
    deleteVector(&v);
}

void test_back_oneElementInVector() {
    vector v = createVector(1);
    pushBack(&v, 42);
    int *result = back(&v);
    assert(*result == 42);
    deleteVector(&v);
}

void test_front_oneElementInVector() {
    vector v = createVector(1);
    pushBack(&v, 42);
    int *result = front(&v);
    assert(*result == 42);
    deleteVector(&v);
}


void test() {
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
    test_popBack_notEmptyVector;
    test_atVector_notEmptyVector();
    test_atVector_requestToLastElement();
    test_back_oneElementInVector();
    test_front_oneElementInVector();
}

int main() {
    test();

    return 0;
}


