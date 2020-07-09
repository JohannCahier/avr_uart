## Description

Very light AVR-C lib to define stdin, stdout and stderr, enable the use of printf/scanf functions family 

## Sample use

```
#include "avr_uart.h"

int main(void) {
    avr_uart_init();
    stdout = &avr_uart_output;
    stdin  = &avr_uart_input_echo;

    printf("Hello, world !");

    return 0;
}
```

