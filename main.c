#include <stdio.h>

#include "vector.h"


int main(){


    vector_t vector1 = create_vector(-0.221, 7.437, 0);
    vector_t vector2 = create_vector(8.813, -1.331, -6.247);
    vector_t vector3 = create_vector(1.996, 3.108,-4.554);
    vector_t vect_result = vect_normalize(vector3);

    printf("res = %lf %lf %lf\n", vect_result.x, vect_result.y, vect_result.z);

    printf("norm = %lf  \n", vect_magnitude(vector2));


    return 1;

}
