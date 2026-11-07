#include "constants.h"

/*in C, global variables should be defined in exactly one .c file. This is where memory is actually allocated.

There must only be one definition of each global variable in the entire project.*/

//global variable definitions

// Define the variables


sine_t sines =
{
    .pi = 3.14159265358979,
    .sample_rate = 48000,
    .sine_freq = 1000
};

i2s_pins_t i2s_pins =
{
    .i2s_bclk = 26,
    .i2s_lrck = 25,
    .i2s_dout = 22
};