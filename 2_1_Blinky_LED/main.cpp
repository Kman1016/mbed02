#include "mbed.h"

DigitalOut myled(LED1);

int main()
{
    // check
    if (myled.is_connected()) {
        printf("myled is initialized and connect!\n\r");
    }

    // Blink LED1
    while (1) {
        myled = 1;
        printf("myled = %d\n\r", (uint8_t)myled);
        ThisThread::sleep_for(500ms);

        myled.write(0);
        printf("myled = %d\n\r", myled.read());
        ThisThread::sleep_for(500ms);
    }
}