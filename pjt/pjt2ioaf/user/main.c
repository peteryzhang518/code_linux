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

#define __IOM volatile  // �?读可�?
#define __IM volatile const  // �?�?
#define __OM volatile  // �?�?

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

#define GPIOC_BASE_ADDR 0x40011000
#define GPIOA_BASE_ADDR 0x40010800
#define GPIO_CRL_OFFSET  0x00
#define GPIO_CRH_OFFSET  0x04
#define GPIO_IDR_OFFSET  0x08
#define GPIO_ODR_OFFSET  0x0C

#define AFIO_BASE_ADDR  0x40010000
#define AFIO_EXTICR1_OFFSET  0x08
#define AFIO_EXTICR2_OFFSET  0x0C
#define AFIO_EXTICR3_OFFSET  0x10
#define AFIO_EXTICR4_OFFSET  0x14

#define EXTI_BASE_ADDR 0x40010400
#define EXTI_IMR_OFFSET 0x0
#define EXTI_FTSR_OFFSET 0x0C
#define EXTI_PR_OFFSET 0x14

void BTIM_TIMX_INT_IRQHandler(void);
int signPZ = 0;
int main(void) {
    // ?? GPIOC ? TIM6 ??
    (*(volatile int*)(RCC_BASE_ADDR + RCC_APB2ENR_OFFSET)) |= (1 << 0); // AFIO
    (*(volatile int*)(RCC_BASE_ADDR + RCC_APB2ENR_OFFSET)) |= (1 << 2); // GPIOA
    (*(volatile int*)(RCC_BASE_ADDR + RCC_APB2ENR_OFFSET)) |= (1 << 4); // GPIOC

    // ?? PC13 ???????,?????10MHz
    (*(volatile int *)(GPIOA_BASE_ADDR + GPIO_CRH_OFFSET)) &= ~(0xF << 0); // ?? PA8 ????
    (*(volatile int *)(GPIOA_BASE_ADDR + GPIO_CRH_OFFSET)) |= (0x3 << 0);   // ?? PA8 ???????, 10MHz

      //key 0
    (*(volatile int *)(GPIOC_BASE_ADDR + GPIO_CRL_OFFSET)) &= ~(0xF << 20); // ?? PC5 ????
    (*(volatile int *)(GPIOC_BASE_ADDR + GPIO_CRL_OFFSET)) |= (0x1 << 23);   // ?? PC5 ???????, 10MHz
    (*(volatile int *)(GPIOC_BASE_ADDR + GPIO_ODR_OFFSET)) |= (1 << 5);
    //(*(volatile int *)(GPIOC_BASE_ADDR + GPIO_ODR_OFFSET)) &= ~(1 << 5);


    //(*(volatile int *)(NVIC_ISER_BASE_ADDR)) |= (1 << 17); // TIM6_DAC_IRQn = 17


      //pc5

      int pinpos = 5;
      int offset = (pinpos % 4) * 4;
      (*(volatile int *)(AFIO_BASE_ADDR + AFIO_EXTICR2_OFFSET)) &= ~(0xF << offset);    /* 清除原来设置！！�? */
      //(*(volatile int *)(AFIO_BASE_ADDR + AFIO_EXTICR2_OFFSET)) &= ~(0x000F << offset);    /* 清除原来设置！！�? */
      //AFIO_BASE_ADDR + AFIO_EXTICR2_OFFSET |= gpio_num << offset;     /* EXTI.BITx映射到gpiox.bitx */
      (*(volatile int *)(AFIO_BASE_ADDR + AFIO_EXTICR2_OFFSET)) |= 0x2 << offset;     /* EXTI.BITx映射到gpiox.bitx */

      (*(volatile int *)(EXTI_BASE_ADDR + EXTI_IMR_OFFSET)) |= 1 << pinpos;   /* 开启line BITx上的�?�?(如果要�?��??�?�?，则反操作即�?) */
      (*(volatile int *)(EXTI_BASE_ADDR + EXTI_FTSR_OFFSET)) |= 1 << pinpos;        /* line bitx上事件下降沿触发 */


//    sys_nvic_ex_config(KEY0_INT_GPIO_PORT, KEY0_INT_GPIO_PIN, SYS_GPIO_FTIR);   /* KEY0配置为下降沿触发中断 */
//      void sys_nvic_ex_config(GPIO_TypeDef *p_gpiox, uint16_t pinx, uint8_t tmode)
//      {
//      uint8_t offset;
//      uint32_t gpio_num = 0;      /* gpio编号, 0~10, 代表GPIOA~GPIOG */
//      uint32_t pinpos = 0, pos = 0, curpin = 0;
//
//      gpio_num = ((uint32_t)p_gpiox - (uint32_t)GPIOA) / 0X400 ;/* 得到gpio编号 */
//      //RCC->APB2ENR |= 1 << 0;     /* AFIO = 1,使能AFIO时钟 */
//
//      for (pinpos = 0; pinpos < 16; pinpos++)
//      {
//            pos = 1 << pinpos;      /* 一个个位检查 */
//            curpin = pinx & pos;    /* 检查引脚是否要设置 */
//
//            if (curpin == pos)      /* 需要设置 */
//            {
//                  offset = (pinpos % 4) * 4;
//                  AFIO->EXTICR[pinpos / 4] &= ~(0x000F << offset);    /* 清除原来设置！！！ */
//                  AFIO->EXTICR[pinpos / 4] |= gpio_num << offset;     /* EXTI.BITx映射到gpiox.bitx */
//
//                  EXTI->IMR |= 1 << pinpos;   /* 开启line BITx上的中断(如果要禁止中断，则反操作即可) */
//
//                  if (tmode & 0x01) EXTI->FTSR |= 1 << pinpos;        /* line bitx上事件下降沿触发 */
//
//                  if (tmode & 0x02) EXTI->RTSR |= 1 << pinpos;        /* line bitx上事件上升降沿触发 */
//            }
//      }
//      }


    //sys_nvic_init( 0, 2, KEY0_INT_IRQn, 2); /* 抢占0，子优先级2，组2 */
     // void sys_nvic_init(uint8_t pprio, uint8_t sprio, uint8_t ch, uint8_t group)
      
      uint32_t temp3 = 0;
      //sys_nvic_priority_group_config(group);  /* 设置分组 */

      uint32_t temp = 0;
      uint32_t temp1 = 0;
            
      temp1 = (~2 /*group*/) & 0x07;/* 取后三位 */
      temp1 <<= 8;
      temp = SCB->AIRCR;      /* 读取先前的设置 */
      temp &= 0X0000F8FF;     /* 清空先前分组 */
      temp |= 0X05FA0000;     /* 写入钥匙 */
      temp |= temp1;
      SCB->AIRCR = temp;      /* 设置分组 */

      temp3 = 0 /*pprio*/ << (4 - 2 /*group*/);
      temp3 |= 2 /*sprio*/ & (0x0f >> 2 /*group*/);
      temp3 &= 0xf;                            /* 取低四位 */
      NVIC->ISER[EXTI9_5_IRQn / 32] |= 1 << (EXTI9_5_IRQn % 32);  /* 使能中断位(要清除的话,设置ICER对应位为1即可) */
      NVIC->IP[EXTI9_5_IRQn] |= temp3 << 4;              /* 设置响应优先级和抢断优先级 */
      























      //if (tmode & 0x02) EXTI->RTSR |= 1 << pinpos;        /* line bitx上事件上升降沿触�? */

////     (*(volatile int *)(NVIC_ISER_BASE_ADDR)) |= (1 << 23); // TIM6_DAC_IRQn = 17
////sys_nvic_init(1, 3, BTIM_TIMX_INT_IRQn, 2); /* 抢占1，子优先�?3，组2 */
//      uint32_t temp = 0;
//      uint32_t temp1 = 0;
//      uint32_t temp2 = 0;
////sys_nvic_priority_group_config(2);  /* 设置分组 */
//      temp1 = (~2) & 0x07;/* 取后三位 */
//      temp1 = temp1 << 8;
//      temp = SCB->AIRCR;      /* 读取先前的�?�置 */
//      temp &= 0X0000F8FF;     /* 清空先前分组 */
//      temp |= 0X05FA0000;     /* 写入钥匙 */
//      temp |= temp1;
//      SCB->AIRCR = temp;      /* 设置分组 */
//
//      temp2 = 1 << (4 - 2);
//      temp2 |= 3 & (0x0f >> 2);
//      temp2 &= 0xf;                            /* 取低四位 */
//
//      (*(volatile int *)(NVIC_ISER_BASE_ADDR + (EXTI9_5_IRQn / 32))) |= (1 << (EXTI9_5_IRQn % 32)); // 使能EXTI9_5中断
//      NVIC->ISER[EXTI9_5_IRQn / 32] |= 1 << (EXTI9_5_IRQn % 32);  /* 使能�?�?�?(要清除的�?,设置ICER对应位为1即可) */
//      NVIC->IP[EXTI9_5_IRQn] |= temp << 4; 
    while (1) {
    }

    return 0;
}

void EXTI9_5_IRQHandler (void) {
    //if ((*(volatile int *)(EXTI_BASE_ADDR + EXTI_PR_OFFSET)) = (1 << 5)) {
    if ((*(volatile int *)(EXTI_BASE_ADDR + EXTI_PR_OFFSET)) & (1 << 5)) {
      //if (KEY0 == 0)
//      if ((*(volatile int *)(GPIOC_BASE_ADDR + GPIO_IDR_OFFSET)) & (1 << 5))
//      {
            (*(volatile int *)(GPIOA_BASE_ADDR + GPIO_ODR_OFFSET)) ^= (1 << LED_PIN);
            (*(volatile int *)(EXTI_BASE_ADDR + EXTI_PR_OFFSET)) |= ~(1 << 5);
            signPZ++;
//      }

    }  /* ���KEY0�����ж��� ���жϱ�־λ */

    // 检查更新中�?标志
    //if ((*(volatile int *)(TIM6_BASE_ADDR + TIM_SR_OFFSET)) & (1 << 0)) {
    //    // 切换 PA8 引脚状态，控制 LED �?�?
    //    (*(volatile int *)(GPIOA_BASE_ADDR + GPIO_ODR_OFFSET)) ^= (1 << LED_PIN);
    //    // 清除更新�?�?标志
    //    (*(volatile int *)(TIM6_BASE_ADDR + TIM_SR_OFFSET)) &= ~(1 << 0);
    //}
}
