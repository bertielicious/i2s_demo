#ifndef CONSTANTS_H
#define CONSTANTS_H
#include "stdint.h"
/*in C, global variables should be defined in exactly one .c file and declared in a header file (.h) 
if they need to be accessed from multiple source files. 
Notice the use of extern. 
This tells the compiler:

"These variables exist somewhere else."

No memory is allocated here.*/

// Global variable declarations
//declare the struct
typedef struct
{
    float pi;
    uint16_t sample_rate;
    uint16_t sine_freq;
}sine_t;
// Declare a global variable
extern sine_t sines;

/*Notice the use of extern. This tells the compiler:

"These variables exist somewhere else."

No memory is allocated here.

extern int volume;
extern bool wifi_connected;
extern uint8_t audio_buffer[1024];*/

typedef struct 
{
    uint8_t i2s_bclk;   //bit clock
    uint16_t i2s_lrck;  //ws word/m slot left/ right stereo channels
    uint16_t i2s_dout;  //serial data output
}i2s_pins_t;
// Declare a global variable
extern i2s_pins_t i2s_pins;

#endif // include everything you want to define before the #endif guard



