/* Original idea from : https://github.com/tuupola/avr_demo/tree/master/blog/simple_usart  -- code was a bit tweaked */
#ifndef __LANTERN_UART_H__
#define __LANTERN_UART_H__

#include <stdio.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// init, to be called before using any further this library
void avr_uart_init(void);


// blocking functions for writing/reading one byte to/from the UART
void avr_uart_putchar(char c, FILE *stream);
char avr_uart_getchar(FILE *stream);

//non-blocking read. Return false if no data available.
//Return true, with data set to the available byte,
//NB : reading a bytes consumes it in any case, blocking or not.
bool avr_uart_data_avaiable(char *data);


extern FILE avr_uart_output;
extern FILE avr_uart_input;
extern FILE avr_uart_input_echo;

#ifdef __cplusplus
}
#endif


#endif
