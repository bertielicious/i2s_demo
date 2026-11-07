#include <stdio.h>
#include "esp_log.h"
#include "constants.h"
#include "driver/i2s_std.h"
#include "init_i2s.h"

static const char *TAG = "i2s_pcm5102A";/*The static keyword limits the 
                                    symbol’s visibility to the current file, 
                                    while const ensures the string is stored 
                                    in read-only memory instead of consuming RAM.*/

void app_main(void)
{
    //assign gpio to i2s  pins
    i2s_pins_t pin;
    i2s_pins_t *p = &pin;
   
    p->i2s_bclk = 26;
    p->i2s_lrck = 25;
    p->i2s_dout = 22;
    ESP_LOGI(TAG, "bclk = %d\n", p->i2s_bclk);
    ESP_LOGI(TAG, "lrck = %d\n", p->i2s_lrck);
    ESP_LOGI(TAG, "dout = %d\n", p->i2s_dout);

    //assign values to PI, SINE_FREQ and SAMPLE_RATE
    sine_t var;
    sine_t *s = &var;
    //s = &var;

    s->pi = 3.14159265358979;
    s->sample_rate = 48000;
    s->sine_freq = 1000;

    ESP_LOGI(TAG, "pi = %f\n", s->pi);
    ESP_LOGI(TAG, "sample_rate = %d\n", s->sample_rate);
    ESP_LOGI(TAG, "sine_freq = %d\n", s->sine_freq);


    //I2S channel object handle, the control unit of the I2S driver
    i2s_chan_handle_t tx_chan;

   init_i2s();
   //soc_periph_i2s_clk_src_t

}