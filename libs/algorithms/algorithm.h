#ifndef UNTITLED1_ALGORITHMS_H
#define UNTITLED1_ALGORITHMS_H

#include "../data_structures/matrix/matrix.h"

// меняет местами строки матрицы m, в которых находятся максимальный и минимальный элементы
void swapMaxMinRows(matrix *m);
// возвращает максимальный элемент массива a размера n
int getMax(int *a, const int n);
// сортирует строки матрицы m по неубыванию наибольших элементов строк
void sortRowsByMaxElem(matrix *m);
// возвращает минимальный элемента массива a размера n
int getMin(int *a, const int n);
// сортирует столбцы матрицы по неубыванию минимальных элементов столбцов
void sortColsByMinElem(matrix *m);
// возвращает матрицу, которая является результатом перемножения матриц m1 и m2
matrix mulMatrices(matrix m1, matrix m2);
// меняет матрицу m ее квадратом, если матрица является симметричной
void getSquareOfMatrixIfSymmetric(matrix *m);
// возвращает true, если массив a размера n состоит только из уникальных элементов, иначе false
bool isUnique(long long *a, int n);
// возвращает сумму элементов массива a размера n
long long getSum(int *a, int n);
// транспонирует матрицу, если среди сумм элементов строк нет равных
void transposeIfMatrixHasNotEqualSumOfRows(matrix *m);
// возвращает true, если матрицы m1 и m2 являются взаимно обратными, иначе false
bool isMutuallyInverseMatrices(matrix m1, matrix m2);
// возвращает максимальный элемент между a и b
int max(int a, int b);
// возвращает сумму максимальных элементов псевдодиагоналей матрицы m, если они положительны, иначе 0
long long findSumOfMaxesOfPseudoDiagonal(matrix m);
// возвращает минимальный элемента матрицы m, который находится в области максимального элемента
int getMinInArea(matrix m);
// возвращает расстояние вектора a размера n до начала координат
float getDistance(int *a, int n);
// выполняет сортировку вставками строк матрицы m по неубыванию значения функции criteria применяемой для строк
void insertionSortRowsMatrixByRowCriteriaF(matrix m, float (*criteria)(int *,
                                                                       int));
// сортирует строки матрицы m, относительно их расстояния от начала координат
void sortByDistances(matrix *m);
// сравнивает 2 числа типа long long
int cmp_long_long(const void *pa, const void *pb);
// возвращает количество уникальных элементов массива a размера n
int countNUnique(long long *a, int n);
// возвращает количество уникальных сумм строк матрицы m
int countEqClassesByRowsSum(matrix m);
// возвращает количество "особых элементов матрицы"
// элемент считается "особым", если он больше суммы элементов своего столбца
int getNSpecialElement(matrix m);
// возвращает позицию минимального элемента матрицы
position getLeftMin(matrix m);
// заменяет предпоследнюю строку матрицы m первым из столбцов, в котором находится минимальный элемент матрицы
void swapPenultimateRow(matrix *m);
// возвращает true, если массив a размера n отсортирован по неубыванию, иначе false
bool isNonDescendingSorted(int *a, int n);
// возвращает true, если все строки матрицы отсортированы по неубыванию, иначе false
bool hasAllNonDescendingRows(matrix m);
// возвращает количество матриц, строки которых упорядочены по неубыванию элементов
int countNonDescendingRowsMatrices(matrix *ms, int nMatrix);
// возвращает количество элементов value в массиве a размера n
int countValues(const int *a, int n, int value);
// возвращает количество нулевых строк в матрице m
int countZeroRows(matrix m);
// выводит матрицы из массива матриц ms с наибольшим числом нулевых строк
void printMatrixWithMaxZeroRows(matrix *ms, int nMatrix);
// возвращает максимум абсолютных величин матрицы m (то есть ее норму)
int matrixNorm(matrix m);
// находит и выводит матрицы с наименьшей нормой
void printMinNormMatrix(matrix *ms, int nMatrix);
#endif