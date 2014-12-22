#include <msp430.h> 

unsigned int i = 0;

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    P1DIR |= 0x01;

    for (;;)
    {
    	P1OUT ^= 0x01;
    	for(i=0; i<2000; i++);
    }
}
