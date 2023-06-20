# ifndef Stm32f446RE.H
# define Stm32f446RE.H

/*************************various memories Base Addresses*******************/

#define FLASH_BASE_ADDRESS         0X08000000UL //UL=UNSGINDED LONG
#define RAM_BASE_ADDRESS           0X20000000UL
#define Sys_memory_BASE_ADDRESS    0x1FFF0000UL
/**58/1347 RM0390 Rev 6********AHB1 PERIPGHERAL Base  Addresses*******************/
#define GPIOA_BASE_ADDRESS     0x40020000UL
#define GPIOB_BASE_ADDRESS     0x40020400UL
#define GPIOC_BASE_ADDRESS     0x40020800UL
#define GPIOD_BASE_ADDRESS     0x40020C00UL
#define GPIOE_BASE_ADDRESS     0x40021000UL
#define GPIOF_BASE_ADDRESS     0x40021400UL
#define GPIOG_BASE_ADDRESS     0x40021800UL
#define GPIOH_BASE_ADDRESS     0x40021800UL


#define RCC_BASE_ADDRESS       0x40023800UL
/**************************AHB1 PERIPGHERAL Base  Addresses*******************/

/**************************AHB2 PERIPGHERAL Base  Addresses*******************/


/**************************AHB3 PERIPGHERAL Base  Addresses*******************/

/**************************APB1 PERIPGHERAL Base  Addresses*******************/

/**************************APB2 PERIPGHERAL Base  Addresses*******************/

/**************************GPIO Register Definition Structure*****************/

typedef struct
{
volatile uint32_t  MODER ;                      /* GPIO PORT IN,OUT,AL,ANALOG Register */
volatile uint32_t  OTYPER;                      /* GPIO PORT PUSH PULL OPEN DRAIN  Register */
volatile uint32_t  OSPEEDER;                    /* GPIO PORT OUTPUT SPEED Register */
volatile uint32_t  PUPDR;                       /* GPIO PORT PULL_UP PULL DOWN OR NO Register */
volatile uint32_t  IDR;                         /* GPIO PORT INPUT  Register */
volatile uint32_t  ODR;                         /* GPIO PORT OUTPUT  Register */
volatile uint32_t  BSRR;                        /* GPIO PORT SET REST Register */
volatile uint32_t  LCKR;                        /* GPIO PORT LOCK CON Register */
volatile uint32_t  AFRL;                        /* GPIO PORT AFR[2]Register */
volatile uint32_t  AFRH;                        /* GPIO PORT ALTERNATE FUNCTION  Register */
} GPIO_Regdef_t;

/**************************GPIO Peripgheral Definition *****************/

#define GPIOA            ((GPIO_Regdef_t*)GPIOA_BASE_ADDRESS)
#define GPIOB            ((GPIO_Regdef_t*)GPIOB_BASE_ADDRESS)
#define GPIOC            ((GPIO_Regdef_t*)GPIOC_BASE_ADDRESS)
#define GPIOD            ((GPIO_Regdef_t*)GPIOD_BASE_ADDRESS)
#define GPIOE            ((GPIO_Regdef_t*)GPIOE_BASE_ADDRESS)
#define GPIOF            ((GPIO_Regdef_t*)GPIOF_BASE_ADDRESS)
#define GPIOG            ((GPIO_Regdef_t*)GPIOG_BASE_ADDRESS)
#define GPIOH            ((GPIO_Regdef_t*)GPIOH_BASE_ADDRESS)


/**************************RCC Peripgheral Definition *****************/

#define RCC            ((RCC_Regdef_t*)RCC_BASE_ADDRESS)
















#endif