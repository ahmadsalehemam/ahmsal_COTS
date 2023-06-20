#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H
typedef enum
{
	GPIOA =0,
	GPIOB ,
	GPIOC ,
	GPIOD ,
	GPIOE ,
	GPIOF ,
	GPIOG ,
	GPIOH 	
} port_t;
typedef enum
{	
   PIN0=0, //يفضل كتابه الثوابت حروف كبيره 
   PIN1,
   PIN2,
   PIN3,
   PIN4,  //قيمتها4
   PIN5,
   PIN6,
   PIN7,
   PIN8,
   PIN9,  //قيمتها 9
   PIN10,
   PIN11,
   PIN12,
   PIN13,
   PIN14,
   PIN15
} Pin_t;

typedef enum
{
	Input=0,  //    (reset state)
    Output mode,
    Alternate_function ,
    Analog // القيمه المقابله 3
} Mode_t;

typedef enum
{	
   push-pull=0,// (reset state)
   open-drai  // 1لقيمه المقابل 
} Output_type_t;

typedef enum
{
	Low =0,
    Medium ,
    Fast ,
    High 
} Outputspeed_t;

typedef enum
{	
   No pull=0,  //Port x configuration bits (y = 0..15)
              //These bits are written by software to configure the I/O pull-up or pull-down
   Pull-up,
   Pull-down,
   Reserved
} pull_register_t;

typedef enum
{
	Low =0,
    High 
} PinValue_t;

typedef enum
{	 
   AF0=0,
   AF1,
   AF2,
   AF3,
   AF4,
   AF5,
   AF6,
   AF7,
   AF8,
   AF9,
   AF10,
   AF11,
   AF12,
   AF13,
   AF14,
   AF15
} AltFunc_t;

typedef struct
{
	 port_t port;
     Pin_t  PinNum;
	 Mode_t Mode;
	 Outputspeed_t speed;
	 Output_type_t Output_type;
	 pull_register_t  pull_type;
	 AltFunc_t  AltFunc;
}PinConfig_t;	 
	
uint8_t GPIO_u8PinInit(const PinConfig_t* PinConfig);//output =return error stateخرج الداله سليمه اوصحيحه 
uint8_t GPIO_u8PenValueٍ(port_t port,Pin_t PinNum,PinValue_t pinVal );//خرج الداله سليمه اوصحيحه
uint8_t GPIO_u8TogglePenValueٍ(port_t port,Pin_t PinNum);//خرج الداله سليمه اوصحيحه
uint8_t GPIO_u8ٌReadPenValueٍ(port_t port,Pin_t PinNum,PinValue_t* pinVal );//return error stateخرج الداله سليمه اوصحيحه

#endif