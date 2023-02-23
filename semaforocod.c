#include <16F877a.h>

#device ADC = 10

#use delay(crystal = 20000000)

#FUSES NOWDT, NOBROWNOUT, NOLVP

//Directiva para utilizar puerto USART

#use rs232(BAUD=9600, XMIT = PIN_C6, RCV=PIN_C7)

#use STANDARD_IO(B)

#define BOTONA PIN_B0

#define B1 PIN_B1

#define B2 PIN_B2

#define B3 PIN_B3



void main(){

   output_low(B1);
   int8 i=0;
   input(BOTONA);

  
   while (true){
    
      for (i=0;i<49;i++){
       output_high(B1);    
       delay_ms (100);       
       if(input(BOTONA)==1){
            break;      
       }
      }
       output_low(B1);

     for( i=0;i<4;i++){
       output_high(B2);
       delay_ms (375);
       output_low(B2);
       delay_ms (375);
      /* output_high(B2);
       delay_ms (375);
       output_low(B2);
       delay_ms (375);
       output_high(B2);
       delay_ms (375);
       output_low(B2);
       delay_ms (375);
       output_high(B2);
       delay_ms (375);
       output_low(B2);
       delay_ms (375);*/
     }
     
     for( i=0;i<79;i++){
       output_high(B3);
       delay_ms (100);
       if(input(BOTONA)==1){
       i=0;
       }
       
     }
  output_low(B3);
    }
    }


