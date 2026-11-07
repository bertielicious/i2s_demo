#include "constants.h"
#include "driver/i2s_std.h"
/*Any .c file that needs the global variables simply includes the constants.h header file.*/

void init_i2s(void)
{
    // create tx channel
    i2s_chan_config_t chan_cfg = 
    {
        .id = I2S_NUM_0,        //I2S port id
        .role = I2S_ROLE_MASTER //
    };

    // clock congiguration
    i2s_std_clk_config_t clk_cfg =
    {
        .sample_rate_hz = sines.sample_rate,
        .clk_src = I2S_CLK_SRC_DEFAULT
    };
    
    // Slot config (Philips = normal I2S)
    i2s_std_slot_config_t slot_cfg =
    {
       .data_bit_width = I2S_DATA_BIT_WIDTH_16BIT,
       .slot_mode = I2S_SLOT_MODE_STEREO
    };

    // GPIO config
    i2s_pins gpio_cfg =
    {
        
    };
    
}