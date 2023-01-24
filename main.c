#include "EPD_Test.h"



int main() {
    Pico_RS232_test();
    while (1)
        tight_loop_contents();
}

/// \end:uart_advanced[]
