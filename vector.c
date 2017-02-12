#include "vector.h"
#include <stdio.h>
#include <math.h>

vector_t create_vector(double x, double y, double z){
    vector_t vector;

    vector.x=x; vector.y=y; vector.z=z;

    return vector;

}
vector_t vect_addition(vector_t vector1, vector_t vector2){
    vector_t vector;

    vector.x = vector1.x + vector2.x;
    vector.y = vector1.y + vector2.y;
    vector.z = vector1.z + vector2.z;

    return vector;

}
vector_t vect_subtraction(vector_t vector1, vector_t vector2){
    vector_t vector;

    vector.x = vector1.x - vector2.x;
    vector.y = vector1.y - vector2.y;
    vector.z = vector1.z - vector2.z;

    return vector;
}
vector_t vect_scalar_multiplication(vector_t vector, double scalar){
    vector_t vect_res;

    vect_res.x = vector.x * scalar;
    vect_res.y = vector.y * scalar;
    vect_res.z = vector.z * scalar;

    return vect_res;
}
double vect_magnitude(vector_t vector){
    return sqrt(vector.x*vector.x + vector.y*vector.y + vector.z*vector.z);
}
vector_t vect_normalize(vector_t vector){
    if((vect_magnitude(vector) != 0))
        return vect_scalar_multiplication(vector, 1/vect_magnitude(vector));
    else
        return vector;
}

