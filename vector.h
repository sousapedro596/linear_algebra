#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    double x;
    double y;
    double z;
} vector_t;


vector_t create_vector(double x, double y, double z);
vector_t vect_addition(vector_t vector1, vector_t vector2);
vector_t vect_subtraction(vector_t vector1, vector_t vector2);
vector_t vect_scalar_multiplication(vector_t vector, double scalar);
double vect_magnitude(vector_t vector);
vector_t vect_normalize(vector_t vector);


#endif // VECTOR_H
