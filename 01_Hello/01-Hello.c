/**
 * @file        01-Hello.c
 * 
 * @brief       Hello & Simple Blink
 * 
 * @details     Using UART by printf & Display the blink
 * 
 */

 /* Includes */

 /**
  * - This is a standard C library header 
  * - Provides input and output functions
  * - In this code, it's used for printf()
  * - printf(): Output text to the terminal.
  */
#include <stdio.h>

 /**
  * - This standard C library header
  * - Defines fixed-width integer types
  * - like uint8_t, int32_t, etc
  * - To ensure consistent integer sizes across diff platforms.
  */
#include <stdint.h>

 /**
  * - This is specific to the Maxim/Analog Device microcontroller
  * - Contains device-specific definitions & configurations
  */
#include "mxc_device.h"

 /**
  * - Provides delay functions for the microcontroller
  * - The code using MXC_Delay() to create 0.5 second
  */
#include "mxc_delay.h"

 /**
  * - Provides functions for controlling LEDs on the board
  * - The code using LED_On() & LED_Off() function
  */
#include "led.h"

int main(void){
    int count = 0;
    printf("Hello!\n");
    while (1){
        LED_On(0);
        MXC_Delay(500000);
        LED_Off(0);
        MXC_Delay(500000);
        printf("Count = %d:\n", count++);
    }
}