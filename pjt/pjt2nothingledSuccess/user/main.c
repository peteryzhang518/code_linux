// gpio xin pian sou ce di zhi
#define GPIOA_BASE 0x40010800
#define GPIOC_BASE 0x40011000
#define GPIOD_BASE 0x40011400

// gpio xin pian sou ce di zhi
//shi zhong kongzhi xiang ying de di zhi
#define RCC_BASE_PZ (*(unsigned int *)0x40021000)
//apb is the gpio clock contral
//in rcc session there write the gpio rcc
#define RCC_APB2ENR (*(unsigned int *)0x40021018)


#define GPIOA_CRL (*(unsigned int *)0x40010800)
#define GPIOA_CRH (*(unsigned int *)0x40010804)
//odr offset is 0xc
#define GPIOA_IDR (*(unsigned int *)0x40010808)
#define GPIOA_ODR (*(unsigned int *)0x4001080C)
	

#define GPIOD_CRL (*(unsigned int *)0x40011400)
#define GPIOD_ODR (*(unsigned int *)0x4001140C)
	

#define GPIOC_CRL (*(unsigned int *)0x40011000)
#define GPIOC_CRH (*(unsigned int *)0x40011004)
#define GPIOC_IDR (*(unsigned int *)0x40011008)
#define GPIOC_ODR (*(unsigned int *)0x4001100C)
	



void SystemInit(void);
void SystemInit(){
	
}

void Delay_ms(volatile  unsigned  int);
void Delay_ms( volatile  unsigned  int  t)
{
     unsigned  int  i;
     while(t--)
         for (i=0;i<800;i++);
}

int gpioC_read_fun_pz (int*);
int gpioC_read_fun_pz (int* result)
{
	unsigned int i = GPIOC_IDR;
	i |= (0xffffffdf);

	if (i == 0xffffffdf) {
		*result = 1;
	} else {
		*result = 0;
	}
	return 0;
}

int gpioA_read_fun_pz (int *);
int gpioA_read_fun_pz (int * result)
{
	unsigned int i = GPIOA_IDR;
	i |= (0xffff7fff);

	if (i == 0xffff7fff) {
		*result = 1;
	} else {
		*result = 0;
	}
	return 0;
}

int main(){
	// shi neng  gpio  clock  to use
	RCC_APB2ENR |= (1<<2); // ?? GPIOA ??
	RCC_APB2ENR |= (1<<4); // ?? GPIOC ??
	RCC_APB2ENR |= (1<<5); // ?? GPIOD ??	
	
	//GPIOA  mode out    pin 1<<8
	GPIOA_CRH |= (1<<0);  // ???????1
	GPIOA_CRH &= ~(0xE);  // ???????????0
	GPIOA_ODR |= (1<<8);  // ???????1
	
	//GPIOD  mode out    pin 1<<2
	GPIOD_CRL |= (1<<8);  // ???????1
	GPIOD_CRL &= ~(0xE00);  // ???????????0
	GPIOD_ODR |= (1<<2);  // ???????1
	
	
	//GPIO  mode in    pin 1<<5
	GPIOC_CRL |= (1<<23);  // ???????1
	GPIOC_CRL &= ~(0x700000);  // ???????????0
	
		//GPIOA  mode in   pin 1<<15
	GPIOA_CRH |= (1<<31);  // ???????1
	GPIOA_CRH &= ~(0x70000000);  // ???????????0
	
//	volatile int result1 = i	0;
	int result1 = 0;
	int result2 = 0;
	
	while(1){ 
    gpioC_read_fun_pz(&result1);
		if (result1 == 1) {	
			Delay_ms(1);
			gpioC_read_fun_pz(&result1);
			if(result1 == 1) {
				GPIOA_ODR &= ~(1<<8); // ??3
				Delay_ms(10);
				GPIOA_ODR |= (1<<8);  // ??3
			}
		}

		gpioA_read_fun_pz (&result2);
		if (result2 == 1) {
			Delay_ms(1);
			gpioA_read_fun_pz (&result2);
			if(result2 == 1) {
				GPIOD_ODR &= ~(1<<2); // ??3
				Delay_ms(10);
				GPIOD_ODR |= (1<<2);  // ??3
			}
		}
	}
}