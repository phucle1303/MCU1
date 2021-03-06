/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include<stdint.h>


// this is a const data or ready only data stored in the flash memory of the MCU
char const my_data[]="I love embedded programming";

#define BASE_ADDRESS_OF_SRAM 0x20000000

int main(void)
{

  for(int i=0; i< sizeof(my_data);i++)
 {

     *((uint8_t*) BASE_ADDRESS_OF_SRAM +i)=my_data[i];
 }
  return 0;
}


void NMI_Handler (void)
{

}


void USART3_IRQHandler(void)
{

}
