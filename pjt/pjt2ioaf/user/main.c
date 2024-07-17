#include <stdint.h>
typedef enum
{
/******  Cortex-M3 Processor Exceptions Numbers ***************************************************/
  NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                             */
  HardFault_IRQn              = -13,    /*!< 3 Cortex-M3 Hard Fault Interrupt                     */
  MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M3 Memory Management Interrupt              */
  BusFault_IRQn               = -11,    /*!< 5 Cortex-M3 Bus Fault Interrupt                      */
  UsageFault_IRQn             = -10,    /*!< 6 Cortex-M3 Usage Fault Interrupt                    */
  SVCall_IRQn                 = -5,     /*!< 11 Cortex-M3 SV Call Interrupt                       */
  DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M3 Debug Monitor Interrupt                 */
  PendSV_IRQn                 = -2,     /*!< 14 Cortex-M3 Pend SV Interrupt                       */
  SysTick_IRQn                = -1,     /*!< 15 Cortex-M3 System Tick Interrupt                   */

/******  STM32 specific Interrupt Numbers *********************************************************/
  WWDG_IRQn                   = 0,      /*!< Window WatchDog Interrupt                            */
  PVD_IRQn                    = 1,      /*!< PVD through EXTI Line detection Interrupt            */
  TAMPER_IRQn                 = 2,      /*!< Tamper Interrupt                                     */
  RTC_IRQn                    = 3,      /*!< RTC global Interrupt                                 */
  FLASH_IRQn                  = 4,      /*!< FLASH global Interrupt                               */
  RCC_IRQn                    = 5,      /*!< RCC global Interrupt                                 */
  EXTI0_IRQn                  = 6,      /*!< EXTI Line0 Interrupt                                 */
  EXTI1_IRQn                  = 7,      /*!< EXTI Line1 Interrupt                                 */
  EXTI2_IRQn                  = 8,      /*!< EXTI Line2 Interrupt                                 */
  EXTI3_IRQn                  = 9,      /*!< EXTI Line3 Interrupt                                 */
  EXTI4_IRQn                  = 10,     /*!< EXTI Line4 Interrupt                                 */
  DMA1_Channel1_IRQn          = 11,     /*!< DMA1 Channel 1 global Interrupt                      */
  DMA1_Channel2_IRQn          = 12,     /*!< DMA1 Channel 2 global Interrupt                      */
  DMA1_Channel3_IRQn          = 13,     /*!< DMA1 Channel 3 global Interrupt                      */
  DMA1_Channel4_IRQn          = 14,     /*!< DMA1 Channel 4 global Interrupt                      */
  DMA1_Channel5_IRQn          = 15,     /*!< DMA1 Channel 5 global Interrupt                      */
  DMA1_Channel6_IRQn          = 16,     /*!< DMA1 Channel 6 global Interrupt                      */
  DMA1_Channel7_IRQn          = 17,     /*!< DMA1 Channel 7 global Interrupt                      */
  ADC1_2_IRQn                 = 18,     /*!< ADC1 and ADC2 global Interrupt                       */
  USB_HP_CAN1_TX_IRQn         = 19,     /*!< USB Device High Priority or CAN1 TX Interrupts       */
  USB_LP_CAN1_RX0_IRQn        = 20,     /*!< USB Device Low Priority or CAN1 RX0 Interrupts       */
  CAN1_RX1_IRQn               = 21,     /*!< CAN1 RX1 Interrupt                                   */
  CAN1_SCE_IRQn               = 22,     /*!< CAN1 SCE Interrupt                                   */
  EXTI9_5_IRQn                = 23,     /*!< External Line[9:5] Interrupts                        */
  TIM1_BRK_IRQn               = 24,     /*!< TIM1 Break Interrupt                                 */
  TIM1_UP_IRQn                = 25,     /*!< TIM1 Update Interrupt                                */
  TIM1_TRG_COM_IRQn           = 26,     /*!< TIM1 Trigger and Commutation Interrupt               */
  TIM1_CC_IRQn                = 27,     /*!< TIM1 Capture Compare Interrupt                       */
  TIM2_IRQn                   = 28,     /*!< TIM2 global Interrupt                                */
  TIM3_IRQn                   = 29,     /*!< TIM3 global Interrupt                                */
  TIM4_IRQn                   = 30,     /*!< TIM4 global Interrupt                                */
  I2C1_EV_IRQn                = 31,     /*!< I2C1 Event Interrupt                                 */
  I2C1_ER_IRQn                = 32,     /*!< I2C1 Error Interrupt                                 */
  I2C2_EV_IRQn                = 33,     /*!< I2C2 Event Interrupt                                 */
  I2C2_ER_IRQn                = 34,     /*!< I2C2 Error Interrupt                                 */
  SPI1_IRQn                   = 35,     /*!< SPI1 global Interrupt                                */
  SPI2_IRQn                   = 36,     /*!< SPI2 global Interrupt                                */
  USART1_IRQn                 = 37,     /*!< USART1 global Interrupt                              */
  USART2_IRQn                 = 38,     /*!< USART2 global Interrupt                              */
  USART3_IRQn                 = 39,     /*!< USART3 global Interrupt                              */
  EXTI15_10_IRQn              = 40,     /*!< External Line[15:10] Interrupts                      */
  RTC_Alarm_IRQn              = 41,     /*!< RTC Alarm through EXTI Line Interrupt                */
  USBWakeUp_IRQn              = 42,     /*!< USB Device WakeUp from suspend through EXTI Line Interrupt */
  TIM8_BRK_IRQn               = 43,     /*!< TIM8 Break Interrupt                                 */
  TIM8_UP_IRQn                = 44,     /*!< TIM8 Update Interrupt                                */
  TIM8_TRG_COM_IRQn           = 45,     /*!< TIM8 Trigger and Commutation Interrupt               */
  TIM8_CC_IRQn                = 46,     /*!< TIM8 Capture Compare Interrupt                       */
  ADC3_IRQn                   = 47,     /*!< ADC3 global Interrupt                                */
  FSMC_IRQn                   = 48,     /*!< FSMC global Interrupt                                */
  SDIO_IRQn                   = 49,     /*!< SDIO global Interrupt                                */
  TIM5_IRQn                   = 50,     /*!< TIM5 global Interrupt                                */
  SPI3_IRQn                   = 51,     /*!< SPI3 global Interrupt                                */
  UART4_IRQn                  = 52,     /*!< UART4 global Interrupt                               */
  UART5_IRQn                  = 53,     /*!< UART5 global Interrupt                               */
  TIM6_IRQn                   = 54,     /*!< TIM6 global Interrupt                                */
  TIM7_IRQn                   = 55,     /*!< TIM7 global Interrupt                                */
  DMA2_Channel1_IRQn          = 56,     /*!< DMA2 Channel 1 global Interrupt                      */
  DMA2_Channel2_IRQn          = 57,     /*!< DMA2 Channel 2 global Interrupt                      */
  DMA2_Channel3_IRQn          = 58,     /*!< DMA2 Channel 3 global Interrupt                      */
  DMA2_Channel4_5_IRQn        = 59,     /*!< DMA2 Channel 4 and Channel 5 global Interrupt        */
} IRQn_Type;

#define __IOM volatile  // 可读可写
#define __IM volatile const  // 只读
#define __OM volatile  // 只写

typedef struct
{
  __IM  uint32_t CPUID;                  /*!< Offset: 0x000 (R/ )  CPUID Base Register */
  __IOM uint32_t ICSR;                   /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */
  __IOM uint32_t VTOR;                   /*!< Offset: 0x008 (R/W)  Vector Table Offset Register */
  __IOM uint32_t AIRCR;                  /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
  __IOM uint32_t SCR;                    /*!< Offset: 0x010 (R/W)  System Control Register */
  __IOM uint32_t CCR;                    /*!< Offset: 0x014 (R/W)  Configuration Control Register */
  __IOM uint8_t  SHP[12U];               /*!< Offset: 0x018 (R/W)  System Handlers Priority Registers (4-7, 8-11, 12-15) */
  __IOM uint32_t SHCSR;                  /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
  __IOM uint32_t CFSR;                   /*!< Offset: 0x028 (R/W)  Configurable Fault Status Register */
  __IOM uint32_t HFSR;                   /*!< Offset: 0x02C (R/W)  HardFault Status Register */
  __IOM uint32_t DFSR;                   /*!< Offset: 0x030 (R/W)  Debug Fault Status Register */
  __IOM uint32_t MMFAR;                  /*!< Offset: 0x034 (R/W)  MemManage Fault Address Register */
  __IOM uint32_t BFAR;                   /*!< Offset: 0x038 (R/W)  BusFault Address Register */
  __IOM uint32_t AFSR;                   /*!< Offset: 0x03C (R/W)  Auxiliary Fault Status Register */
  __IM  uint32_t PFR[2U];                /*!< Offset: 0x040 (R/ )  Processor Feature Register */
  __IM  uint32_t DFR;                    /*!< Offset: 0x048 (R/ )  Debug Feature Register */
  __IM  uint32_t ADR;                    /*!< Offset: 0x04C (R/ )  Auxiliary Feature Register */
  __IM  uint32_t MMFR[4U];               /*!< Offset: 0x050 (R/ )  Memory Model Feature Register */
  __IM  uint32_t ISAR[5U];               /*!< Offset: 0x060 (R/ )  Instruction Set Attributes Register */
        uint32_t RESERVED0[5U];
  __IOM uint32_t CPACR;                  /*!< Offset: 0x088 (R/W)  Coprocessor Access Control Register */
} SCB_Type;

typedef struct {
  __IOM uint32_t ISER[8U];               /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
        uint32_t RESERVED0[24U];
  __IOM uint32_t ICER[8U];               /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
        uint32_t RSERVED1[24U];
  __IOM uint32_t ISPR[8U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
        uint32_t RESERVED2[24U];
  __IOM uint32_t ICPR[8U];               /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
        uint32_t RESERVED3[24U];
  __IOM uint32_t IABR[8U];               /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register */
        uint32_t RESERVED4[56U];
  __IOM uint8_t  IP[240U];               /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
        uint32_t RESERVED5[644U];
  __OM  uint32_t STIR;                   /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register */
}  NVIC_Type;

#define SCS_BASE            (0xE000E000UL)                            /*!< System Control Space Base Address */
#define SCB_BASE            (SCS_BASE +  0x0D00UL)                    /*!< System Control Block Base Address */
#define NVIC_BASE           (SCS_BASE +  0x0100UL)                    /*!< NVIC Base Address */
#define SCnSCB              ((SCnSCB_Type    *)     SCS_BASE      )   /*!< System control Register not in SCB */
#define SCB                 ((SCB_Type       *)     SCB_BASE      )   /*!< SCB configuration struct */
#define NVIC                ((NVIC_Type      *)     NVIC_BASE     )   /*!< NVIC configuration struct */











#define RCC_BASE_ADDR   0x40021000
#define GPIOC_BASE_ADDR 0x40011000
#define GPIOA_BASE_ADDR 0x40010800
#define TIM6_BASE_ADDR  0x40001000
#define TIM7_BASE_ADDR  0x40001400

#define RCC_APB2ENR_OFFSET 0x18
#define RCC_APB1ENR_OFFSET 0x1C

#define GPIO_CRL_OFFSET  0x00
#define GPIO_CRH_OFFSET  0x04
#define GPIO_IDR_OFFSET  0x08
#define GPIO_ODR_OFFSET  0x0C

#define TIM_CR1_OFFSET   0x00
#define TIM_DIER_OFFSET  0x0C
#define TIM_SR_OFFSET    0x10
#define TIM_PSC_OFFSET   0x28
#define TIM_ARR_OFFSET   0x2C

#define LED_PIN 8 // PC13
#define NVIC_ISER_BASE_ADDR 0xE000E100



#define TIM6_DAC_IRQn           TIM6_IRQn
#define BTIM_TIMX_INT_IRQn                  TIM6_DAC_IRQn

#define TIM6_DAC_IRQHandler           TIM6_IRQHandler
#define BTIM_TIMX_INT_IRQHandler            TIM6_DAC_IRQHandler


void BTIM_TIMX_INT_IRQHandler(void);

int main(void) {
    // ?? GPIOC ? TIM6 ??
    (*(volatile int*)(RCC_BASE_ADDR + RCC_APB2ENR_OFFSET)) |= (1 << 2); // GPIOA
    (*(volatile int*)(RCC_BASE_ADDR + RCC_APB2ENR_OFFSET)) |= (1 << 4); // GPIOC

    // ?? PC13 ???????,?????10MHz
    (*(volatile int *)(GPIOA_BASE_ADDR + GPIO_CRH_OFFSET)) &= ~(0xF << 0); // ?? PA8 ????
    (*(volatile int *)(GPIOA_BASE_ADDR + GPIO_CRH_OFFSET)) |= (0x3 << 0);   // ?? PA8 ???????, 10MHz

    (*(volatile int *)(GPIOC_BASE_ADDR + GPIO_CRL_OFFSET)) &= ~(0xF << 0); // ?? PC13 ????
    (*(volatile int *)(GPIOC_BASE_ADDR + GPIO_CRL_OFFSET)) |= (0x1 << 23);   // ?? PC13 ???????, 10MHz

    // ?? TIM6 ??????

    (*(volatile int *)(NVIC_ISER_BASE_ADDR)) |= (1 << 17); // TIM6_DAC_IRQn = 17

	
	
	


//sys_nvic_init(1, 3, BTIM_TIMX_INT_IRQn, 2); /* 抢占1，子优先级3，组2 */
		uint32_t temp;
		uint32_t temp1;
		uint32_t temp2;


//sys_nvic_priority_group_config(2);  /* 设置分组 */
		temp1 = (~2) & 0x07;/* 取后三位 */
		temp1 = temp1 << 8;
		temp = SCB->AIRCR;      /* 读取先前的设置 */
    temp &= 0X0000F8FF;     /* 清空先前分组 */
    temp |= 0X05FA0000;     /* 写入钥匙 */
    temp |= temp1;
    SCB->AIRCR = temp;      /* 设置分组 */

    temp2 = 1 << (4 - 2);
    temp2 |= 3 & (0x0f >> 2);
    temp2 &= 0xf;                            /* 取低四位 */
    NVIC->ISER[BTIM_TIMX_INT_IRQn / 32] |= 1 << (BTIM_TIMX_INT_IRQn % 32);  /* 使能中断位(要清除的话,设置ICER对应位为1即可) */
    NVIC->IP[BTIM_TIMX_INT_IRQn] |= temp << 4; 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
    while (1) {
        // ?? TIM6 ????
//        while (!(*(volatile int *)(TIM6_BASE_ADDR + TIM_SR_OFFSET) & (1 << 0)));
//
//        // ?? TIM6 ????
//        (*(volatile int *)(TIM6_BASE_ADDR + TIM_SR_OFFSET)) &= ~(1 << 0);
//
//        // ?? PC13 ????,?? LED ??
//        (*(volatile int *)(GPIOA_BASE_ADDR + GPIO_ODR_OFFSET)) ^= (1 << LED_PIN);
    }

    return 0;
}

// TIM6 中断处理程序
void BTIM_TIMX_INT_IRQHandler(void) {
    // 检查更新中断标志
    if ((*(volatile int *)(TIM6_BASE_ADDR + TIM_SR_OFFSET)) & (1 << 0)) {
        // 切换 PA8 引脚状态，控制 LED 闪烁
        (*(volatile int *)(GPIOA_BASE_ADDR + GPIO_ODR_OFFSET)) ^= (1 << LED_PIN);
        // 清除更新中断标志
        (*(volatile int *)(TIM6_BASE_ADDR + TIM_SR_OFFSET)) &= ~(1 << 0);
    }
}


