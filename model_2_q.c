#include <math.h>
#include <string.h>
#include "./include/k2c_include.h"
#include "./include/k2c_tensor_include.h"




void model_2(k2c_tensor* dense_input_input, k2c_tensor* dense_3_output) {

    float dense_output_array[10] = {0};
    k2c_tensor dense_output = {&dense_output_array[0],1,10,{10, 1, 1, 1, 1}};
    int dense_kernel_array[10] = {
        -1, 1, -1, -1, 1,
        -1, -1, -1, -1, -1
    };
    k2c_tensor dense_kernel = {&dense_kernel_array[0],2,10,{ 1,10, 1, 1, 1}};
        
    int dense_bias_array[10] = {
        0, -1, 0, 0, -1,
        0, 0, 1, 0, 0
    };
    k2c_tensor dense_bias = {&dense_bias_array[0],1,10,{10, 1, 1, 1, 1}};
    float dense_fwork[11] = {0};


    float dense_1_output_array[10] = {0};
    k2c_tensor dense_1_output = {&dense_1_output_array[0],1,10,{10, 1, 1, 1, 1}};
    int dense_1_kernel_array[100] = {
        0, 1, 1, 1, -1, 1, 0, 0, 1, 0,
        -1, 0, -1, -1, 1, -1, -1, 1, -1, -1,
        0, 0, 1, 0, -1, 0, 1, 0, 0, 0,
        1, 1, 1, 1, -1, 1, 1, 1, 1, -1,
        0, 0, -1, 0, -1, 0, 1, 0, 0, 0,
        -1, -1, -1, -1, 1, -1, -1, -1, -1, 0,
        0, 0, 1, 0, -1, 0, 0, 1, 0, -1,
        1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
        -1, -1, 0, 0, 0, 0, 0, 0, 1, 0,
        -1, -1, 1, -1, 1, 0, 1, 0, 1, -1
    };
    k2c_tensor dense_1_kernel = {&dense_1_kernel_array[0],2,100,{10,10, 1, 1, 1}};
     int dense_1_bias_array[10] = {
        0, 0, 0, 0, 1, 0, 0, 1, 0, 0
    };
    k2c_tensor dense_1_bias = {&dense_1_bias_array[0],1,10,{10, 1, 1, 1, 1}};
    float dense_1_fwork[110] = {0};


    float dense_2_output_array[10] = {0};
    k2c_tensor dense_2_output = {&dense_2_output_array[0],1,10,{10, 1, 1, 1, 1}};
   int dense_2_kernel_array[100] = {
        0, 1, 0, 0, 1, 1, 1, 1, 1, 0,
        0, 1, 0, 1, 1, 0, 0, 1, 0, 0,
        -1, 0, -1, 0, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 1, -1, 0, 0, 0,
        -1, 1, 0, 0, 0, 1, 0, 0, 0, 0,
        -1, -1, -1, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 1, 0, 0,
        1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
        -1, -1, 0, 0, 0, 0, 0, 0, 1, 0,
        -1, -1, 1, -1, 0, 0, 1, 0, 1, -1
    };
    k2c_tensor dense_2_kernel = {&dense_2_kernel_array[0],2,100,{10,10, 1, 1, 1}};
    int dense_2_bias_array[10] = {
        0, 0, 1, 0, -1, -1, 0, -1, 0, 0
    };
    k2c_tensor dense_2_bias = {&dense_2_bias_array[0],1,10,{10, 1, 1, 1, 1}};
    float dense_2_fwork[110] = {0};


    int dense_3_kernel_array[10] = {
        1, 1, -1, 1, 1, 1, 1, 1, 1, -1
    };
    k2c_tensor dense_3_kernel = {&dense_3_kernel_array[0],2,10,{10, 1, 1, 1, 1}};
     int dense_3_bias_array[1] = {
        0
    };
    k2c_tensor dense_3_bias = {&dense_3_bias_array[0],1,1,{1,1,1,1,1}};
    float dense_3_fwork[20] = {0};


    k2c_dense(&dense_output,dense_input_input,&dense_kernel,
              &dense_bias,k2c_sigmoid,dense_fwork);
    k2c_dense(&dense_1_output,&dense_output,&dense_1_kernel,
              &dense_1_bias,k2c_sigmoid,dense_1_fwork);
    k2c_dense(&dense_2_output,&dense_1_output,&dense_2_kernel,
              &dense_2_bias,k2c_sigmoid,dense_2_fwork);
    k2c_dense(dense_3_output,&dense_2_output,&dense_3_kernel,
              &dense_3_bias,k2c_sigmoid,dense_3_fwork);

}

void model_2_initialize() {

}

void model_2_terminate() {

}

