#include "algorithm.h"
#include <stdio.h>
#include <assert.h>

void swapMaxMinRows(matrix *m) {
    position max_value = getMaxValuePos(*m);
    position min_value = getMinValuePos(*m);
    swapRows(*m, max_value.rowIndex, min_value.rowIndex);
}