#include <math.h>
#include <string.h>
#include "./include/k2c_include.h"
#include "./include/k2c_tensor_include.h"




void model_2(k2c_tensor* dense_input_input, k2c_tensor* dense_3_output) {

    float dense_output_array[10] = {0};
    k2c_tensor dense_output = {&dense_output_array[0],1,10,{10, 1, 1, 1, 1}};
    float dense_kernel_array[10] = {
        -9.72043276e-01f,+1.27394485e+00f,-8.56696486e-01f,-8.96862566e-01f,+1.14759564e+00f,
            -7.44570136e-01f,-8.98356736e-01f,-1.24807656e+00f,-1.12078857e+00f,-7.67258048e-01f,
        };
    k2c_tensor dense_kernel = {&dense_kernel_array[0],2,10,{ 1,10, 1, 1, 1}};
    float dense_bias_array[10] = {
        +4.44895506e-01f,-9.45934534e-01f,+2.90882468e-01f,+4.57973182e-01f,-8.28435719e-01f,
            +1.30103186e-01f,+3.76787990e-01f,+8.20934892e-01f,+4.50561732e-01f,+2.30920315e-01f,
        };
    k2c_tensor dense_bias = {&dense_bias_array[0],1,10,{10, 1, 1, 1, 1}};
    float dense_fwork[11] = {0};


    float dense_1_output_array[10] = {0};
    k2c_tensor dense_1_output = {&dense_1_output_array[0],1,10,{10, 1, 1, 1, 1}};
    float dense_1_kernel_array[100] = {
        +3.05467367e-01f,+1.19678187e+00f,+1.24665189e+00f,+8.03767502e-01f,-1.28563285e+00f,
            +1.12774062e+00f,+4.08489287e-01f,-7.71722436e-01f,+7.56285369e-01f,+1.57977745e-01f,
            -1.50465178e+00f,-6.96727276e-01f,-1.17453599e+00f,-9.24852490e-01f,+6.75982237e-01f,
            -1.30730903e+00f,-1.13782287e+00f,+9.19544578e-01f,-1.08283985e+00f,-9.51127470e-01f,
            +4.08444041e-03f,+2.00261682e-01f,+1.53011954e+00f,+4.69284534e-01f,-1.18541217e+00f,
            +3.90086591e-01f,+9.84947979e-01f,-4.51669276e-01f,+7.50580072e-01f,-3.82557884e-02f,
            +1.03457451e+00f,+1.16490185e+00f,+9.40543950e-01f,+1.08676672e+00f,-1.08112347e+00f,
            +8.82556736e-01f,+6.15822911e-01f,+2.58188304e-02f,+4.77319777e-01f,+4.49088365e-01f,
            -7.53405809e-01f,-9.29069817e-01f,-1.31089926e+00f,-7.70168662e-01f,+9.23716605e-01f,
            -1.25890505e+00f,-1.32233822e+00f,+5.68912327e-01f,-1.03442097e+00f,-1.50407720e+00f,
            +1.81317061e-01f,+2.50903577e-01f,+6.21508181e-01f,+8.58766377e-01f,-6.41541481e-01f,
            +8.92938018e-01f,+6.57272562e-02f,-5.10216475e-01f,+1.31122231e-01f,+5.69574356e-01f,
            +1.55530110e-01f,+9.40136552e-01f,+7.80491769e-01f,+1.35099530e+00f,-1.19002020e+00f,
            +3.12055022e-01f,+1.17976308e+00f,-6.43179193e-02f,+4.93589610e-01f,+5.70879757e-01f,
            +9.02077079e-01f,+9.99985337e-01f,+1.07555401e+00f,+1.50962901e+00f,-1.67577088e+00f,
            +7.02778757e-01f,+4.93198574e-01f,-8.51036131e-01f,+2.78674394e-01f,+3.77092272e-01f,
            +4.72745746e-01f,+1.08828449e+00f,+6.51825666e-01f,+7.76189685e-01f,-8.87892663e-01f,
            +9.55874979e-01f,+6.65529907e-01f,-6.88155651e-01f,+1.45978510e-01f,+5.50443709e-01f,
            -2.14688659e-01f,+6.41416311e-02f,+8.38372111e-01f,+5.60916007e-01f,-7.21038103e-01f,
            -5.32008782e-02f,+8.87822390e-01f,-4.78364676e-01f,+7.08980262e-01f,+4.56479430e-01f,
        };
    k2c_tensor dense_1_kernel = {&dense_1_kernel_array[0],2,100,{10,10, 1, 1, 1}};
    float dense_1_bias_array[10] = {
        -5.87984264e-01f,-4.96353954e-01f,-1.86115280e-01f,-4.55945879e-01f,+5.66898406e-01f,
            -3.57032955e-01f,-4.23644274e-01f,+7.14694858e-01f,-4.60295439e-01f,-5.32171607e-01f,
        };
    k2c_tensor dense_1_bias = {&dense_1_bias_array[0],1,10,{10, 1, 1, 1, 1}};
    float dense_1_fwork[110] = {0};


    float dense_2_output_array[10] = {0};
    k2c_tensor dense_2_output = {&dense_2_output_array[0],1,10,{10, 1, 1, 1, 1}};
    float dense_2_kernel_array[100] = {
        -1.36202499e-01f,+6.22073293e-01f,-1.56228067e-02f,-5.37292175e-02f,+5.91220498e-01f,
            +6.63384736e-01f,+8.21255028e-01f,+5.11770606e-01f,+6.15929127e-01f,-1.43011540e-01f,
            +2.09266722e-01f,+8.42269421e-01f,-5.24964146e-02f,+7.77140081e-01f,+2.41755351e-01f,
            -2.05427781e-01f,-2.65598111e-02f,+7.16260672e-01f,+1.11292496e-01f,-9.83113945e-01f,
            +9.67926383e-01f,+9.18254137e-01f,-9.25758243e-01f,+2.93906271e-01f,+5.04538119e-01f,
            +1.52637094e-01f,+4.24522698e-01f,+7.03917027e-01f,+1.35574117e-01f,-1.33602047e+00f,
            +1.61535457e-01f,+3.79655480e-01f,-4.71888483e-01f,+3.35320905e-02f,+1.73546411e-02f,
            +4.83570099e-01f,+1.22457258e-01f,+4.60541993e-01f,+2.80000061e-01f,-9.50492203e-01f,
            -1.14528835e+00f,-1.46002328e+00f,+1.27862668e+00f,-1.34192014e+00f,-1.06729710e+00f,
            -1.13118231e+00f,-1.81467164e+00f,-1.55108953e+00f,-1.72385180e+00f,+1.56611645e+00f,
            +5.43654621e-01f,+3.47428888e-01f,-1.10996783e+00f,+1.05053234e+00f,+6.44265890e-01f,
            +2.04694167e-01f,+5.78836381e-01f,+4.91565496e-01f,+1.89679563e-01f,-3.47847402e-01f,
            +5.80815375e-01f,+6.98536873e-01f,-8.56614113e-01f,+6.29871309e-01f,+5.88288624e-03f,
            +4.69827324e-01f,+9.74337757e-01f,+7.75746226e-01f,+2.21604049e-01f,-2.89583057e-01f,
            -8.64965320e-01f,-8.86845410e-01f,+1.18851006e+00f,-1.05699944e+00f,-6.15153015e-01f,
            -1.24774563e+00f,-9.18548644e-01f,-7.10883677e-01f,-7.96187937e-01f,+9.42300797e-01f,
            +4.32392091e-01f,+1.03778586e-01f,-3.24796200e-01f,+2.63524264e-01f,+4.61331159e-01f,
            +4.31881547e-01f,-5.95099777e-02f,+5.78345299e-01f,+3.31934720e-01f,-7.85721302e-01f,
            +2.63824791e-01f,-1.67122692e-01f,-1.00281380e-01f,-1.02169681e-02f,+5.53677320e-01f,
            +6.12524092e-01f,+1.35992184e-01f,+2.82039076e-01f,+8.14025104e-01f,-4.34519529e-01f,
        };
    k2c_tensor dense_2_kernel = {&dense_2_kernel_array[0],2,100,{10,10, 1, 1, 1}};
    float dense_2_bias_array[10] = {
        -5.86770058e-01f,-5.64450085e-01f,+5.21101773e-01f,-5.37201941e-01f,-7.85071492e-01f,
            -7.05687702e-01f,-4.99497145e-01f,-7.53653347e-01f,-5.39860785e-01f,+4.01898980e-01f,
        };
    k2c_tensor dense_2_bias = {&dense_2_bias_array[0],1,10,{10, 1, 1, 1, 1}};
    float dense_2_fwork[110] = {0};


    float dense_3_kernel_array[10] = {
        +6.06505692e-01f,+7.35440135e-01f,-1.79999781e+00f,+1.04781234e+00f,+7.67829001e-01f,
            +7.02601135e-01f,+8.23290288e-01f,+6.04354739e-01f,+1.35989296e+00f,-1.67551076e+00f,
        };
    k2c_tensor dense_3_kernel = {&dense_3_kernel_array[0],2,10,{10, 1, 1, 1, 1}};
    float dense_3_bias_array[1] = {
        -3.76658231e-01f,
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

