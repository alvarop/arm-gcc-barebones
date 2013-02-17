#include "LPC17xx.h"
#include <stdint.h>

#define LED4_PIN (23)

int main() {
  // Setup
  LPC_GPIO1->FIODIR |= (1 << LED4_PIN);
  
  LPC_GPIO1->FIOSET = (1 << LED4_PIN);
  
  for(;;) {
    for(volatile uint32_t delay = 0; delay < 1000000; delay++) {
       __asm__("NOP");
    }
    LPC_GPIO1->FIOCLR = (1 << LED4_PIN);
    
    for(volatile uint32_t delay = 0; delay < 1000000; delay++) {
       __asm__("NOP");
    }
    LPC_GPIO1->FIOSET = (1 << LED4_PIN);
  }
}
