#include "mbed.h"

DigitalIn mypin(USER_BUTTON);
DigitalOut myled(LED1);

int main()
{
    // check
    if (mypin.is_connected()) {
        printf("mypin is connected and initialized\n\r");
    }

    //Optional: set mode(PullUp, PullDown, PullNone, PullDrain)
    mypin.mode(PullNone);

    while (1) {
        printf("mypin has value : %d \n\r", mypin.read());
        myled = mypin;
        ThisThread::sleep_for(250ms);
    }
}