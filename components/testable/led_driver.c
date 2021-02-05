/**
 * @file led_driver.c
 * @author Alex Tuddenham
 * @brief led_ driver for TDD practise
 * @version 0.1
 * @date 2021-02-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "led_driver.h"

//Private variable of 16 bits to simulate 16 led register.
static uint16_t * ledsAddress;

void led_driver_create(uint16_t *address)
{
    ledsAddress = address;
    *ledsAddress = 0;
}

void led_driver_destroy(void)
{
}

void led_driver_turn_on(int ledNumber)
{
    *ledsAddress = 1;
}