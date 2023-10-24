#include <stdio.h>
#include <math.h>
#include <time.h>
#include "./include/k2c_include.h"
#include "model_2.h"
#include <assert.h>

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp();

int main() {

    int N_input = 1;
    float test_input_array[13] = {3.9, 3.9, 4, 3.9, 3.9, 4, 4, 4, 3.9, 4, 4.2, 4.1, 4.2};
    k2c_tensor test_input = {&test_input_array[0], 1, 13, {13, 1, 1, 1, 1}};
    
    float expected_output_array[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    k2c_tensor expected_output = {&expected_output_array[0], 1, 13, {13, 1, 1, 1, 1}};
                                     // {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0};
    float model_output_array[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    k2c_tensor model_output = {&model_output_array[0], 1, 13, {13, 1, 1, 1, 1}};

    model_2_initialize();
    //clock_t t0 = clock();
    model_2(&test_input, &model_output);
   
    //clock_t t1 = clock();
    //printf("Execution time: %e s\n", ((double)t1 - t0) / (double)CLOCKS_PER_SEC);
    
    float error = maxabs(&expected_output, &model_output);
    //printf("Max absolute error for the test: %e\n", error);

    model_2_terminate();

    if (error > 1e-05) {
        return 1;
    }
    
    return 0;
}

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2) {
    float x = 0;
    float y = 0;
    float temp = 0;
    float temp_2 = 0;
    float diff = 0;
    for (size_t i = 0; i < tensor1->numel; i++) {
        temp = tensor2->array[i] + 1;
        temp_2 = tensor1->array[i] + 1;
        

        diff = fabsf(temp_2-temp);
        printf("differance: %f\n", diff);
        //if (diff != 0)
        diff = diff/temp_2;
            
        
        printf("porcentage diff %f\n", diff);
        printf("model_output: %f\n", temp);
        printf("expected_output: %f\n", temp_2);
        assert(0.5 >= diff);
        
        y = fabsf(tensor1->array[i] - tensor2->array[i]);
        if (y > x) {
            x = y;
        }
    }
    return x;
}
