#include <stdio.h>
#include <math.h>
#include <time.h>
#include "./include/k2c_include.h"
#include "model_2.h"

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp();

float test1_dense_input_input_array[1] = {
    -1.71023587e+00f,
    };
k2c_tensor test1_dense_input_input = {&test1_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test1_array[1] = {
    +9.96089220e-01f,
    };
k2c_tensor keras_dense_3_test1 = {&keras_dense_3_test1_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test1_array[1] = {0};
k2c_tensor c_dense_3_test1 = {&c_dense_3_test1_array[0],1,1,{1,1,1,1,1}};
float test2_dense_input_input_array[1] = {
    +2.38180898e-01f,
    };
k2c_tensor test2_dense_input_input = {&test2_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test2_array[1] = {
    +9.92125809e-01f,
    };
k2c_tensor keras_dense_3_test2 = {&keras_dense_3_test2_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test2_array[1] = {0};
k2c_tensor c_dense_3_test2 = {&c_dense_3_test2_array[0],1,1,{1,1,1,1,1}};
float test3_dense_input_input_array[1] = {
    -1.57928866e+00f,
    };
k2c_tensor test3_dense_input_input = {&test3_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test3_array[1] = {
    +9.96057868e-01f,
    };
k2c_tensor keras_dense_3_test3 = {&keras_dense_3_test3_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test3_array[1] = {0};
k2c_tensor c_dense_3_test3 = {&c_dense_3_test3_array[0],1,1,{1,1,1,1,1}};
float test4_dense_input_input_array[1] = {
    -5.50780967e-01f,
    };
k2c_tensor test4_dense_input_input = {&test4_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test4_array[1] = {
    +9.95384574e-01f,
    };
k2c_tensor keras_dense_3_test4 = {&keras_dense_3_test4_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test4_array[1] = {0};
k2c_tensor c_dense_3_test4 = {&c_dense_3_test4_array[0],1,1,{1,1,1,1,1}};
float test5_dense_input_input_array[1] = {
    +1.80845811e-01f,
    };
k2c_tensor test5_dense_input_input = {&test5_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test5_array[1] = {
    +9.92654681e-01f,
    };
k2c_tensor keras_dense_3_test5 = {&keras_dense_3_test5_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test5_array[1] = {0};
k2c_tensor c_dense_3_test5 = {&c_dense_3_test5_array[0],1,1,{1,1,1,1,1}};
float test6_dense_input_input_array[1] = {
    +3.99036287e-01f,
    };
k2c_tensor test6_dense_input_input = {&test6_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test6_array[1] = {
    +9.90001440e-01f,
    };
k2c_tensor keras_dense_3_test6 = {&keras_dense_3_test6_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test6_array[1] = {0};
k2c_tensor c_dense_3_test6 = {&c_dense_3_test6_array[0],1,1,{1,1,1,1,1}};
float test7_dense_input_input_array[1] = {
    -7.29948377e-01f,
    };
k2c_tensor test7_dense_input_input = {&test7_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test7_array[1] = {
    +9.95601118e-01f,
    };
k2c_tensor keras_dense_3_test7 = {&keras_dense_3_test7_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test7_array[1] = {0};
k2c_tensor c_dense_3_test7 = {&c_dense_3_test7_array[0],1,1,{1,1,1,1,1}};
float test8_dense_input_input_array[1] = {
    -1.06740229e+00f,
    };
k2c_tensor test8_dense_input_input = {&test8_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test8_array[1] = {
    +9.95858431e-01f,
    };
k2c_tensor keras_dense_3_test8 = {&keras_dense_3_test8_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test8_array[1] = {0};
k2c_tensor c_dense_3_test8 = {&c_dense_3_test8_array[0],1,1,{1,1,1,1,1}};
float test9_dense_input_input_array[1] = {
    -8.12519194e-01f,
    };
k2c_tensor test9_dense_input_input = {&test9_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test9_array[1] = {
    +9.95678782e-01f,
    };
k2c_tensor keras_dense_3_test9 = {&keras_dense_3_test9_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test9_array[1] = {0};
k2c_tensor c_dense_3_test9 = {&c_dense_3_test9_array[0],1,1,{1,1,1,1,1}};
float test10_dense_input_input_array[1] = {
    -1.99335412e+00f,
    };
k2c_tensor test10_dense_input_input = {&test10_dense_input_input_array[0],1,1,{1,1,1,1,1}};
float keras_dense_3_test10_array[1] = {
    +9.96140897e-01f,
    };
k2c_tensor keras_dense_3_test10 = {&keras_dense_3_test10_array[0],1,1,{1,1,1,1,1}};
float c_dense_3_test10_array[1] = {0};
k2c_tensor c_dense_3_test10 = {&c_dense_3_test10_array[0],1,1,{1,1,1,1,1}};
int main() {
    float errors[10];
    size_t num_tests = 10;
    size_t num_outputs = 1;
    model_2_initialize();
    clock_t t0 = clock();
    model_2(&test1_dense_input_input,&c_dense_3_test1);
    model_2(&test2_dense_input_input,&c_dense_3_test2);
    model_2(&test3_dense_input_input,&c_dense_3_test3);
    model_2(&test4_dense_input_input,&c_dense_3_test4);
    model_2(&test5_dense_input_input,&c_dense_3_test5);
    model_2(&test6_dense_input_input,&c_dense_3_test6);
    model_2(&test7_dense_input_input,&c_dense_3_test7);
    model_2(&test8_dense_input_input,&c_dense_3_test8);
    model_2(&test9_dense_input_input,&c_dense_3_test9);
    model_2(&test10_dense_input_input,&c_dense_3_test10);

    clock_t t1 = clock();
    printf("Average time over 10 tests: %e s \n",
           ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10);
    errors[0] = maxabs(&keras_dense_3_test1,&c_dense_3_test1);
    errors[1] = maxabs(&keras_dense_3_test2,&c_dense_3_test2);
    errors[2] = maxabs(&keras_dense_3_test3,&c_dense_3_test3);
    errors[3] = maxabs(&keras_dense_3_test4,&c_dense_3_test4);
    errors[4] = maxabs(&keras_dense_3_test5,&c_dense_3_test5);
    errors[5] = maxabs(&keras_dense_3_test6,&c_dense_3_test6);
    errors[6] = maxabs(&keras_dense_3_test7,&c_dense_3_test7);
    errors[7] = maxabs(&keras_dense_3_test8,&c_dense_3_test8);
    errors[8] = maxabs(&keras_dense_3_test9,&c_dense_3_test9);
    errors[9] = maxabs(&keras_dense_3_test10,&c_dense_3_test10);
    float maxerror = errors[0];
    for(size_t i=1; i< num_tests*num_outputs; i++) {
        if (errors[i] > maxerror) {
            maxerror = errors[i];
        }
    }
    printf("Max absolute error for 10 tests: %e \n", maxerror);
    model_2_terminate();
    if (maxerror > 1e-05) {
        return 1;
    }
    return 0;
}

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2) {

    float x = 0;

    float y = 0;

    for(size_t i=0; i<tensor1->numel; i++) {

        y = fabsf(tensor1->array[i]-tensor2->array[i]);
        if (y>x) {
            x=y;
        }
    }
    return x;
}

