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
    std::cout << "Symphony - Artificially Intelligent Operating System [AIOS] - v1.0.0.0\n";
    Neuron nt1, nt2, nt3, nt4;               // Create 4 test neuron objects, assign values, then show values.
    nt1.fSetVal(3.14); nt2.fSetVal((23.0 / 0.73) * 0.207);
    nt1.cSetVal('p'); nt2.cSetVal('\x8E');
    nt1.showVal(); nt2.showVal();
    std::cout << "\n\n";

    NeuronBlock blockA;             // Create NeuronBlock called blockA

    blockA.a[0].fSetVal(3.14159 / 0.09337);       // Set x[0] numeric storage to 3.14159 / 0.09337
    blockA.a[0].cSetVal('\xFE');
    blockA.a[0].showVal();
    std::cout << "\n\n";

    blockA.a[0].fUpdateBias(blockA.a[0].fRetVal());
    blockA.a[0].showVal();
    std::cout << "\n\n";

    blockA.a[0].cUpdateBias(blockA.a[0].cRetVal());
    blockA.a[0].showVal();
    std::cout << "\n\n";

    std::cin.get();
    return 0;
}
