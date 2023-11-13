#include <stdio.h>
#include <math.h>
#include <time.h>
#include "./include/k2c_include.h"
#include "model_2.h"
#include <assert.h>

void maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp();

int main() {

    int N_input = 1;
    float test_input_array[13] = {};//, 4, 3.9, 3.9, 4, 4, 4, 3.9, 4, 4.2, 4.1, 4.2};
    k2c_tensor test_input = {&test_input_array[0], 1, 13, {13, 1, 1, 1, 1}};
    
    float expected_output_array[13] = {};//,0,0,0,0,0,0,0,0,0,0,0};
    k2c_tensor expected_output = {&expected_output_array[0], 1, 13, {13, 1, 1, 1, 1}};
                                     // {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0};
    float model_output_array[13] = {};//,0,0,0,0,0,0,0,0,0,0,0};
    k2c_tensor model_output = {&model_output_array[0], 1, 13, {13, 1, 1, 1, 1}};

    model_2_initialize();
    //clock_t t0 = clock();
    model_2(&test_input, &model_output);
    for (size_t i = 0; i < 2; i++) 
        printf("input array: %f", test_input_array[i]);
    //clock_t t1 = clock();
    //printf("Execution time: %e s\n", ((double)t1 - t0) / (double)CLOCKS_PER_SEC);
    
    maxabs(&expected_output, &model_output);
    //printf("Max absolute error for the test: %e\n", error);

    model_2_terminate();

   // if (error > 1e-05) {
     //   return 1;
   // }
    
   // return 0;
}

void maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2) {
    //float x = 0;
   // float y = 0;
    float model_value = 0;
    float expected_value = 0;
    float diff = 0;
    for (size_t i = 0; i < tensor1->numel; i++) {
        model_value = tensor2->array[i] + 1;
        expected_value = tensor1->array[i] + 1;
        

        diff = fabsf(expected_value-model_value);
        printf("model_value: %f\n", model_value);
        printf("expected_value: %f\n", expected_value);
        printf("differance: %f\n", diff);
        //if (diff != 0)
        diff = diff/expected_value;
            
        
        printf("porcentage diff %f\n", diff);
 
        if (diff >= 0.5)
            printf("output error\n");
        //printf("------------------------------------\n");
        assert(0.5 >= diff);
        
  //      y = fabsf(tensor1->array[i] - tensor2->array[i]);
//        if (y > x) {
         //   x = y;
       // }
    }
   // return 0;//x;
}
