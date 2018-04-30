/****************************************
* Symphony AI OS Neural Network Layer
* 
*
* **************************************/

/*
#include "dll.h"
#include <windows.h>

DllClass::DllClass()
{

}


DllClass::~DllClass ()
{

}


BOOL APIENTRY DllMain (HINSTANCE hInst,     // Library instance handle.
                       DWORD reason,        // Reason this function is being called.
                       LPVOID reserved)    // Not used
{
    switch (reason)
    {
      case DLL_PROCESS_ATTACH:
        break;

      case DLL_PROCESS_DETACH:
        break;

      case DLL_THREAD_ATTACH:
        break;

      case DLL_THREAD_DETACH:
        break;
    }

    // Returns TRUE on success, FALSE on failure
    return TRUE;
}

*/

class Neuron;
static bool valueType;

#ifndef _NEURAL_NETWORK
#define _NEURAL_NETWORK 1
#endif

class Neuron                    // Test class
{
    float f, fbias, cbias, cWeight, fWeight;
    char o;
    
    public:
            Neuron(){setDefaultBias();};
            ~Neuron(){};
            
            void fSetVal(float ff){f = ff;};          // Set float value
            void cSetVal(char oo){o = oo;};    // Set char value

            void showVal(){std::cout << "[" << f << "], [" << o << "], [" << fbias << "], [" << cbias << "]\n";};

            void setDefaultBias(){fbias = 1000.00; cbias = 256;};                                          // Initialize default bias
            void fUpdateBias(float ff){while(ff > fbias){ff / 2.0;}; fbias = fbias / ff;};      // Change bias based on weight
            void cUpdateBias(char oo){while((int)oo > cbias){oo / 2;}; cbias = cbias / oo;};    // Change bias based on weight

            void fWeigh(float ff){ff = ff * 0.5; if(ff > 0){ff = ff - 25;} else if(ff < 0){ff = ff * -1.0; ff = ff + 25;};}; // Data weighing
            void cWeigh(char cc){cc = cc * 0.5; if(cc > 0){cc = cc - 25;} else if(cc < 0){cc = cc * -1; cc = cc + 25;};};    // Data weighing

            void fPassData(float ff, Neuron Z){Z.fSetVal(ff);};            // Data passing
            void cPassData(char oo, Neuron Z){Z.cSetVal(oo);};             // Data passing
            
            float fRetVal(){return f;};         // Return f
            char cRetVal(){return o;};   // Return o
};
