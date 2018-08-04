#include "stm32f1xx_hal.h"
#include "spi.h"
#include "usb_device.h"
#include "gpio.h"
#include "tim.h" 

void start_app();
void dyn_step();
void transmit(uint8_t n);
void skip(uint32_t n);
void clrscr();
uint16_t xy_to_word(uint8_t x,uint8_t y);
void update();

void anim_up();