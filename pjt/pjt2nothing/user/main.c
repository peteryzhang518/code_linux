// gpio xin pian sou ce di zhi
#define GPIOA_BASE 0x40010800
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
#define GPIOA_ODR (*(unsigned int *)0x4001080C)
	

#define GPIOD_CRL (*(unsigned int *)0x40011400)
#define GPIOD_ODR (*(unsigned int *)0x4001140C)
	



void SystemInit(void);
void Delay_ms(volatile  unsigned  int);

void Delay_ms( volatile  unsigned  int  t)
{
     unsigned  int  i;
     while(t--)
         for (i=0;i<800;i++);
}


int main(){
	// ????
	RCC_APB2ENR |= (1<<2); // ?? GPIOA ??
	RCC_APB2ENR |= (1<<5); // ?? GPIOD ??	
	
	// ?? GPIOA ????? 0001 (A0)
	GPIOA_CRH |= (1<<0);  // ???????1
	GPIOA_CRH &= ~(0xE);  // ???????????0
	// 3?LED??????(????)
	GPIOA_ODR |= (1<<8);  // ???????1
	
		// ?? GPIOA ????? 0001 (A0)
	GPIOD_CRL |= (1<<8);  // ???????1
	GPIOD_CRL &= ~(0xE00);  // ???????????0
	// 3?LED??????(????)
	GPIOD_ODR |= (1<<2);  // ???????1
	
	while(1){		
		GPIOA_ODR &= ~(1<<8); // ??3
		Delay_ms(1000000);
		GPIOA_ODR |= (1<<8);  // ??3
		Delay_ms(1000000);
		
		GPIOD_ODR &= ~(1<<2); // ??3
		Delay_ms(1000000);
		GPIOD_ODR |= (1<<2);  // ??3
		Delay_ms(1000000);
	}
}


void SystemInit(){
	
}