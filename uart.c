#include<16f877a.h>
#use delay(clock = 1000000)
#use rs232(baud = 9600, xmit = pin_c6, rcv = pin_c7)




void main()
{
  set_tris_c(0x80);
  
  for(;;)
  {
    printf("hi h r u\n\r");   //this line print every 3000 ms continously
    delay_ms(3000);
    
    }
    
    }
