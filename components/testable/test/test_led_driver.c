/**
 * @file test_led_driver.c
 * @author Alex Tuddenham
 * @brief led_ driver tests for TDD practise
 * @version 0.1
 * @date 2021-02-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <limits.h>
#include "unity.h"
#include "led_driver.h"

TEST_CASE("led_off_after_creation","led_driver")
{
    uint16_t virtual_leds = 0xffff;
    led_driver_create(&virtual_leds);
    TEST_ASSERT_EQUAL_HEX16(0,virtual_leds);
}

TEST_CASE("single_led_on","led_driver")
{
    uint16_t virtual_leds;
    led_driver_create(&virtual_leds);
    led_driver_turn_on(1);
    TEST_ASSERT_EQUAL_HEX16(1,virtual_leds);
}

TEST_CASE("single_led_on_off","led_driver")
{
    uint16_t virtual_leds;
    led_driver_turn_on(1);
    led_driver_turn_off(1);
    TEST_ASSERT_EQUAL_HEX16(0,virtual_leds);
}

TEST_CASE("test_name","test_tag")
{
   TEST_FAIL_MESSAGE("FAILING");
}