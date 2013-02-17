#include "mbed.h"

DigitalOut myled(LED3);

int main() {
    while(1) {
        myled = 1;
        wait(0.1);
        myled = 0;
        wait(5.0);
    }
}
