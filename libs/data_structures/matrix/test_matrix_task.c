#include <stdio.h>
#include "matrix.h"
#include "D:\Users\MSI.HOME-PC\CLionProjects\untitled1\libs\algorithms\algorithm.h"

void test_swapMaxMinRows_1_standard_swap() {
    matrix m = createMatrixFromArray((int[]) {1, 2, 3,
                                              4, 5, 6,
                                              7, 8, 9}, 3, 3);
    matrix result = createMatrixFromArray((int[]) {7, 8, 9,
                                                   4, 5, 6,
                                                   1, 2, 3}, 3, 3);
    swapMaxMinRows(&m);
    assert (areTwoMatricesEqual(m, result));
    freeMemMatrix(m);
    freeMemMatrix(result);
}
void test_swapMaxMinRows_2_min_and_max_element_in_one_row() {
    matrix m = createMatrixFromArray((int[]) {1, 1, 9,
                                              1, 1, 1,
                                              1, 1, 1}, 3, 3);
    matrix check = createMatrixFromArray((int[]) {1, 1, 9,
                                                  1, 1, 1,
                                                  1, 1, 1}, 3, 3);
    swapMaxMinRows(&m);
    assert(areTwoMatricesEqual(m, check));
    freeMemMatrix(m);
    freeMemMatrix(check);
}
void test_swapMaxMinRows() {
    test_swapMaxMinRows_1_standard_swap();
    test_swapMaxMinRows_2_min_and_max_element_in_one_row();
}

void test_sortRowsByMaxElem_1_standard_value() {
    matrix m = createMatrixFromArray((int[]) {1, 2, 3,
                                              4, 5, 6,
                                              7, 8, 9}, 3, 3);
    matrix result = createMatrixFromArray((int[]) {1, 2, 3,
                                                   4, 5, 6,
                                                   7, 8, 9}, 3, 3);
    sortRowsByMaxElem(&m);
    assert (areTwoMatricesEqual(m, result));
    freeMemMatrix(m);
    freeMemMatrix(result);
}
void test_sortRowsByMaxElem_2_max_value_equal() {
    matrix m = createMatrixFromArray((int[]) {7, 8, 9,
                                              9, 5, 6,
                                              9, 2, 4}, 3, 3);
    matrix result = createMatrixFromArray((int[]) {7, 8, 9,
                                                   9, 5, 6,
                                                   9, 2, 4}, 3, 3);
    sortRowsByMaxElem(&m);
    assert (areTwoMatricesEqual(m, result));
    freeMemMatrix(m);
    freeMemMatrix(result);
}
void test_sortRowsByMaxElem() {
    test_sortRowsByMaxElem_1_standard_value();
    test_sortRowsByMaxElem_2_max_value_equal();
}

void test_sortColsByMinElem_1_standard_value() {
    matrix m = createMatrixFromArray((int[]) {1, 2, 3,
                                              4, 5, 6,
                                              7, 8, 9}, 3, 3);
    matrix result = createMatrixFromArray((int[]) {1, 2, 3,
                                                   4, 5, 6,
                                                   7, 8, 9}, 3, 3);
    sortColsByMinElem(&m);
    assert (areTwoMatricesEqual(m, result));
    freeMemMatrix(m);
    freeMemMatrix(result);
}
void test_sortColsByMinElem_2_min_value_equal() {
    matrix m = createMatrixFromArray((int[]) {7, 8, 9,
                                              1, 1, 6,
                                              8, 7, 1}, 3, 3);
    matrix result = createMatrixFromArray((int[]) {7, 8, 9,
                                                   1, 1, 6,
                                                   8, 7, 1}, 3, 3);
    sortColsByMinElem(&m);
    assert (areTwoMatricesEqual(m, result));
    freeMemMatrix(m);
    freeMemMatrix(result);
}
void test_sortColsByMinElem() {
    test_sortColsByMinElem_1_standard_value();
    test_sortColsByMinElem_2_min_value_equal();
}