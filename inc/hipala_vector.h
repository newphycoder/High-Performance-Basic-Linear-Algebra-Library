#pragma once

#include <stdlib.h>
#include <string.h>

#define HIPALA_VECTOR_MAX_SIZE 2000

typedef struct Hipala_Vector_Type {
    int len;
    double num[HIPALA_VECTOR_MAX_SIZE];

    Hipala_Vector_Type() {
        len = 0;
        memset(num, 0, sizeof(num));
    }
} Vec_;

Vec_ operator+(Vec_ Vec_a, Vec_ Vec_b) {
}

Vec_ operator-(Vec_ Vec_a, Vec_ Vec_b) {
}

Vec_ operator*(Vec_ Vec_a, Vec_ Vec_b) {
}
