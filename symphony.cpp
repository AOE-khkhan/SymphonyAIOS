/****************************************
* Symphony AI OS
* 
* Version 0.0.0.1
* **************************************/

#include <cstdlib>                   /* wxDev-C++ libraries */
#include <iostream>
#include <fstream>
#include <string>
#include "textfunctions.h"           /* Custom libraries */
#include "filefunctions.h"
#include "interpret.h"
#include "symphony.h"
#include "neuralnetwork.h"

#ifndef _SYMPHONY_MAIN               /* Symphony begins here */
#define _SYMPHONY_MAIN 1
#endif

struct NeuronBlock {              // Test Neuron Block  10x10
    Neuron a[10], b[10], c[10], d[10], e[10], f[10], g[10], h[10], i[10], j[10];
};

int main()
{
    std::cout << "Symphony - Artificially Intelligent Operating System [AIOS] - v0.0.0.1\n";
    
    /* Use NeuronBlock to test how the neurons function.
       Valid Neuron calls:
            .fSetVal(float);
            .cSetVal(char);
            .showVal();
            .fUpdateBias(float)
            .cUpdateBias(char)
            .fWeigh(float)
            .cWeigh(char)
            .fPassData(float)
            .cPassData(char)
            .fRetVal()
            .cRetVal()
    */
    
    NeuronBlock x;
    
    x.a[0].fSetVal(22.0 / 7.0);
    x.a[0].cSetVal(65);
    x.a[0].showVal();
    std::cout << "\n";
    
    x.a[0].fUpdateBias();
    x.a[0].cUpdateBias();
    x.a[0].showVal();
    std::cout << "\n";

    std::cin.get();
    return 0;
}
