/****************************************
* Symphony AI OS
* 
* Operates by using neuron "blocks" of 100 neurons.
* There are by default, 100 blocks initialized
*
* Accessing is as simple as block[x]._Neuron[y].<neuron_function>()
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
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
    _Neuron a[10], b[10], c[10], d[10], e[10], f[10], g[10], h[10], i[10], j[10];
};

NeuronBlock block[100];

int main()
{
    std::cout << "Symphony - Artificially Intelligent Operating System [AIOS] - v0.0.0.1\n";
    
    /* Use NeuronBlock to test how the neurons function.
       Valid Neuron calls:
            .fSetVal(float);
            .cSetVal(char);
            .showVal();
            .fUpdateBias(float);  // should take weight as param
            .cUpdateBias(char);   // should take weight as param
            .initialize();
            .fWeigh(float);  // return float
            .cWeigh(char);   // return char
            .fPassData(float,_Neuron);
            .cPassData(char,_Neuron);
            .fRetVal();      // return f value
            .cRetVal();      // return c value
    */
    
    block[0].a[0].initialize();   // Loop block[x] 0-99 on subloop a[y] 0-9 .initialize(); to initialize a block
    block[0].a[1].initialize();   // 

    block[0].a[0].fSetVal(3.14159);
    block[0].a[1].fSetVal(10);

    block[0].a[0].fUpdateBias( block[0].a[0].fWeigh( block[0].a[0].fRetVal() ));
    block[0].a[1].fUpdateBias( block[0].a[1].fWeigh( block[0].a[1].fRetVal() ));

    block[0].a[0].showVal();
    std::cout << "\n";
    block[0].a[1].showVal();
    std::cout << "\n\n";

    block[0].a[0].fUpdateBias( block[0].a[0].fWeigh( block[0].a[0].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[0].fRetBias() * ((block[0].a[0].fRetVal() * 0.19037) / 3.01666) );
    block[0].a[1].fUpdateBias( block[0].a[1].fWeigh( block[0].a[1].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[1].fRetBias() * ((block[0].a[1].fRetVal() * 0.19037) / 3.01666) );

    block[0].a[0].showVal();
    std::cout << "\n";
    block[0].a[1].showVal();
    std::cout << "\n\n";

    block[0].a[0].fUpdateBias( block[0].a[0].fWeigh( block[0].a[0].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[0].fRetBias() * ((block[0].a[0].fRetVal() * 0.19037) / 3.01666) );
    block[0].a[1].fUpdateBias( block[0].a[1].fWeigh( block[0].a[1].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[1].fRetBias() * ((block[0].a[1].fRetVal() * 0.19037) / 3.01666) );

    block[0].a[0].showVal();
    std::cout << "\n";
    block[0].a[1].showVal();
    std::cout << "\n\n";

    block[0].a[0].fUpdateBias( block[0].a[0].fWeigh( block[0].a[0].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[0].fRetBias() * ((block[0].a[0].fRetVal() * 0.19037) / 3.01666) );
    block[0].a[1].fUpdateBias( block[0].a[1].fWeigh( block[0].a[1].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[1].fRetBias() * ((block[0].a[1].fRetVal() * 0.19037) / 3.01666) );

    block[0].a[0].showVal();
    std::cout << "\n";
    block[0].a[1].showVal();
    std::cout << "\n\n";

    block[0].a[0].fUpdateBias( block[0].a[0].fWeigh( block[0].a[0].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[0].fRetBias() * ((block[0].a[0].fRetVal() * 0.19037) / 3.01666) );
    block[0].a[1].fUpdateBias( block[0].a[1].fWeigh( block[0].a[1].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[1].fRetBias() * ((block[0].a[1].fRetVal() * 0.19037) / 3.01666) );

    block[0].a[0].showVal();
    std::cout << "\n";
    block[0].a[1].showVal();
    std::cout << "\n\n";

    block[0].a[0].fUpdateBias( block[0].a[0].fWeigh( block[0].a[0].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[0].fRetBias() * ((block[0].a[0].fRetVal() * 0.19037) / 3.01666) );
    block[0].a[1].fUpdateBias( block[0].a[1].fWeigh( block[0].a[1].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[1].fRetBias() * ((block[0].a[1].fRetVal() * 0.19037) / 3.01666) );

    block[0].a[0].showVal();
    std::cout << "\n";
    block[0].a[1].showVal();
    std::cout << "\n\n";

    block[0].a[0].fUpdateBias( block[0].a[0].fWeigh( block[0].a[0].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[0].fRetBias() * ((block[0].a[0].fRetVal() * 0.19037) / 3.01666) );
    block[0].a[1].fUpdateBias( block[0].a[1].fWeigh( block[0].a[1].fRetVal() ));
    block[0].a[1].fSetVal(block[0].a[1].fRetBias() * ((block[0].a[1].fRetVal() * 0.19037) / 3.01666) );

    block[0].a[0].showVal();
    std::cout << "\n";
    block[0].a[1].showVal();
    std::cout << "\n\n";

    std::cin.get();
    return 0;
}
