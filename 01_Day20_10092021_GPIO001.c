
//Demonstration of GPIO Programming without using LPC17xx Header file

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
/* Private includes ----------------------------------------------------------*/

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

#define TESTCASE0 1
#define TESTCASE1 0

#define FIO1DIR *((volatile unsigned int *)0x2009C020)
#define FIO1SET *((volatile unsigned int *)0x2009C038)
#define FIO1CLR *((volatile unsigned int *)0x2009C03C)

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/* Crude Delay Implementation */
void vAppDelay(uint32_t count)
{
	int i,j;
	for(i=0;i<count;i++)
		for(j=0;j<0xA00;j++);
}


/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* MCU Configuration--------------------------------------------------------*/

  /* Initialize all configured peripherals */

#if TESTCASE0
	/* Setting the control register of the GPIO */
	/* Setting Port 1 Pin 29 as OUTPUT */
	FIO1DIR = 0x20000000;

#elif TESTCASE1
	/* Setting the control register of the GPIO */
	/* Setting Port 1 Pin 29 as OUTPUT */
	FIO1DIR = 1<<29;

#endif

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)  // for(;;)
  {

#if TESTCASE0

		/* For making the Port 1 Pin29  as HIGH */
		FIO1SET = 0x20000000;

		/* Simply wasting time for creating a delay */
		vAppDelay(1000);

		/* For making the Port 1 Pin29  as LOW */
		FIO1CLR = 0x20000000;

		/* Simply wasting time for creating a delay */
		vAppDelay(1000);

#elif TESTCASE1

		/* For making the Port 1 Pin29  as HIGH */
		FIO1SET = 1<<29;

		/* Simply wasting time for creating a delay */
		vAppDelay(1000);

		/* For making the Port 1 Pin29  as LOW */
		FIO1CLR = 1<<29;

		/* Simply wasting time for creating a delay */
		vAppDelay(1000);


#endif




  }
  /* End of Application entry point */
}




