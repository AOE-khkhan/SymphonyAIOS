/****************************************
* Symphony AI OS Neural Network Layer
* 
* Bias values closer to 0 indicate higher correctness
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

class _Neuron;
static bool valueType;

#ifndef _NEURAL_NETWORK
#define _NEURAL_NETWORK 1
#endif

class _Neuron    // Test class - need to develop bias and weight algorithms to perform as intended
{
    double f, fbias, cbias, cWeight, fWeight, i;
    char o;
    
    public:
            _Neuron(){
                initialize();
            };
            ~_Neuron(){};
            
            void fSetVal(double ff){  // Set double value
                f = ff;
            };
            void cSetVal(char oo){   // Set char value
                o = oo;
            };

            void showVal(){
                std::cout << "[" << f << "], [" << o << "], [" << fbias << "], [" << cbias << "]\n";
            };

            void initialize(){     // Initialize default bias
                fbias = 500.00; cbias = 128;
            };
            void fUpdateBias(double ff){        // Change bias based on weight
                while(fWeigh(f) > fbias){
                    f = fWeigh(ff) / 2.0;
                }; fbias = fbias / f;
            };
            void cUpdateBias(char oo){        // Change bias based on weight
                while((int)cWeigh(o) > cbias){
                    o = cWeigh(oo) / 2;
                }; cbias = cbias / o;
            };

            double fWeigh(double ff){     // Data weighing
                ff = ff * 0.67309; 
                    if(ff > 0){
                        ff = (ff - 25) * 0.67309;}
                    else if(ff < 0){
                        ff = ff * -1.0; ff = (ff + 17.034) * 1.00134;};
                return ff;
            };
            char cWeigh(char cc){      // Data weighing
                cc = cc * 0.67309;
                    if(cc > 0){
                        cc = (cc - 25) * 0.67309;}
                        else if(cc < 0){
                            cc = cc * -1; cc = (cc + 17.034) * 1.00134;};
                return cc;
            };

            void fPassData(double ff, _Neuron Z){Z.fSetVal(ff);};            // Data passing
            void cPassData(char oo, _Neuron Z){Z.cSetVal(oo);};             // Data passing
            
            double fRetVal(){return f;};  // Return f
            char cRetVal(){return o;};   // Return o
            
            double fRetBias(){return fbias;};
            char cRetBias(){return cbias;};
};
