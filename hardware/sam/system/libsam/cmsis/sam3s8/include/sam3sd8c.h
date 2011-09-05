/* %ATMEL_LICENCE% */

#ifndef _SAM3SD8C_
#define _SAM3SD8C_

/** \addtogroup SAM3SD8C_definitions SAM3SD8C definitions
  This file defines all structures and symbols for SAM3SD8C:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/
/*@{*/

#ifdef __cplusplus
 extern "C" {
#endif 

#ifndef __ASSEMBLY__
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t RoReg; /**< Read only 32-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg; /**< Read only 32-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg; /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg; /**< Read-Write 32-bit register (volatile unsigned int) */
#define CAST(type, value) (((type)*)(value))
#define REG_ACCESS(type, address) (*((type)*)(address)) /**< C code: Register value */
#else
#define CAST(type, value) (value) 
#define REG_ACCESS(type, address) (address) /**< Assembly code: Register address */
#endif

/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAM3SD8C */
/* ************************************************************************** */
/** \addtogroup SAM3SD8C_cmsis CMSIS Definitions */
/*@{*/

/**< Interrupt Number Definition */
typedef enum IRQn
{
/******  Cortex-M3 Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn   = -14, /**<  2 Non Maskable Interrupt                */
  MemoryManagement_IRQn = -12, /**<  4 Cortex-M3 Memory Management Interrupt */
  BusFault_IRQn         = -11, /**<  5 Cortex-M3 Bus Fault Interrupt         */
  UsageFault_IRQn       = -10, /**<  6 Cortex-M3 Usage Fault Interrupt       */
  SVCall_IRQn           = -5,  /**< 11 Cortex-M3 SV Call Interrupt           */
  DebugMonitor_IRQn     = -4,  /**< 12 Cortex-M3 Debug Monitor Interrupt     */
  PendSV_IRQn           = -2,  /**< 14 Cortex-M3 Pend SV Interrupt           */
  SysTick_IRQn          = -1,  /**< 15 Cortex-M3 System Tick Interrupt       */
/******  SAM3SD8C specific Interrupt Numbers *********************************/
  
  SUPC_IRQn            =  0, /**<  0 SAM3SD8C Supply Controller (SUPC) */
  RSTC_IRQn            =  1, /**<  1 SAM3SD8C Reset Controller (RSTC) */
  RTC_IRQn             =  2, /**<  2 SAM3SD8C Real Time Clock (RTC) */
  RTT_IRQn             =  3, /**<  3 SAM3SD8C Real Time Timer (RTT) */
  WDT_IRQn             =  4, /**<  4 SAM3SD8C Watchdog Timer (WDT) */
  PMC_IRQn             =  5, /**<  5 SAM3SD8C Power Management Controller (PMC) */
  EFC_IRQn             =  6, /**<  6 SAM3SD8C Enhanced Embedded Flash Controller (EFC) */
  UART0_IRQn           =  8, /**<  8 SAM3SD8C UART 0 (UART0) */
  UART1_IRQn           =  9, /**<  9 SAM3SD8C UART 1 (UART1) */
  SMC_IRQn             = 10, /**< 10 SAM3SD8C Static Memory Controller (SMC) */
  PIOA_IRQn            = 11, /**< 11 SAM3SD8C Parallel I/O Controller A (PIOA) */
  PIOB_IRQn            = 12, /**< 12 SAM3SD8C Parallel I/O Controller B (PIOB) */
  PIOC_IRQn            = 13, /**< 13 SAM3SD8C Parallel I/O Controller C (PIOC) */
  USART0_IRQn          = 14, /**< 14 SAM3SD8C USART 0 (USART0) */
  USART1_IRQn          = 15, /**< 15 SAM3SD8C USART 1 (USART1) */
  USART2_IRQn          = 16, /**< 16 SAM3SD8C USART 2 (SAM3SD8 100 pins only) (USART2) */
  HSMCI_IRQn           = 18, /**< 18 SAM3SD8C Multimedia Card Interface (HSMCI) */
  TWI0_IRQn            = 19, /**< 19 SAM3SD8C Two Wire Interface 0 (TWI0) */
  TWI1_IRQn            = 20, /**< 20 SAM3SD8C Two Wire Interface 1 (TWI1) */
  SPI_IRQn             = 21, /**< 21 SAM3SD8C Serial Peripheral Interface (SPI) */
  SSC_IRQn             = 22, /**< 22 SAM3SD8C Synchronous Serial Controler (SSC) */
  TC0_IRQn             = 23, /**< 23 SAM3SD8C Timer/Counter 0 (TC0) */
  TC1_IRQn             = 24, /**< 24 SAM3SD8C Timer/Counter 1 (TC1) */
  TC2_IRQn             = 25, /**< 25 SAM3SD8C Timer/Counter 2 (TC2) */
  TC3_IRQn             = 26, /**< 26 SAM3SD8C Timer/Counter 3 (TC3) */
  TC4_IRQn             = 27, /**< 27 SAM3SD8C Timer/Counter 4 (TC4) */
  TC5_IRQn             = 28, /**< 28 SAM3SD8C Timer/Counter 5 (TC5) */
  ADC_IRQn             = 29, /**< 29 SAM3SD8C Analog To Digital Converter (ADC) */
  DACC_IRQn            = 30, /**< 30 SAM3SD8C Digital To Analog Converter (DACC) */
  PWM_IRQn             = 31, /**< 31 SAM3SD8C Pulse Width Modulation (PWM) */
  CRCCU_IRQn           = 32, /**< 32 SAM3SD8C CRC Calculation Unit (CRCCU) */
  ACC_IRQn             = 33, /**< 33 SAM3SD8C Analog Comparator (ACC) */
  UDP_IRQn             = 34  /**< 34 SAM3SD8C USB Device Port (UDP) */
} IRQn_Type;

/**
 * \brief Configuration of the Cortex-M3 Processor and Core Peripherals 
 */

#define __MPU_PRESENT          1 /**< SAM3SD8C does provide a MPU */
#define __NVIC_PRIO_BITS       4 /**< SAM3SD8C uses 4 Bits for the Priority Levels */
#define __Vendor_SysTickConfig 0 /**< Set to 1 if different SysTick Config is used */

/*
 * \brief CMSIS includes
 */

#include <core_cm3.h>

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAM3SD8C */
/* ************************************************************************** */
/** \addtogroup SAM3SD8C_api Peripheral Software API */
/*@{*/

#include "component/ACC.h"
#include "component/ADC.h"
#include "component/CHIPID.h"
#include "component/CRCCU.h"
#include "component/DACC.h"
#include "component/EFC.h"
#include "component/GPBR.h"
#include "component/HSMCI.h"
#include "component/MATRIX.h"
#include "component/PDC.h"
#include "component/PIO.h"
#include "component/PMC.h"
#include "component/PWM.h"
#include "component/RSTC.h"
#include "component/RTC.h"
#include "component/RTT.h"
#include "component/SMC.h"
#include "component/SPI.h"
#include "component/SSC.h"
#include "component/SUPC.h"
#include "component/TC.h"
#include "component/TWI.h"
#include "component/UART.h"
#include "component/UDP.h"
#include "component/USART.h"
#include "component/WDT.h"
/*@}*/

/* ************************************************************************** */
/*   REGISTER ACCESS DEFINITIONS FOR SAM3SD8C */
/* ************************************************************************** */
/** \addtogroup SAM3SD8C_reg Registers Access Definitions */
/*@{*/

#include "instance/HSMCI.h"
#include "instance/SSC.h"
#include "instance/SPI.h"
#include "instance/TC0.h"
#include "instance/TC1.h"
#include "instance/TWI0.h"
#include "instance/TWI1.h"
#include "instance/PWM.h"
#include "instance/USART0.h"
#include "instance/USART1.h"
#include "instance/USART2.h"
#include "instance/UDP.h"
#include "instance/ADC.h"
#include "instance/DACC.h"
#include "instance/ACC.h"
#include "instance/CRCCU.h"
#include "instance/SMC.h"
#include "instance/MATRIX.h"
#include "instance/PMC.h"
#include "instance/UART0.h"
#include "instance/CHIPID.h"
#include "instance/UART1.h"
#include "instance/EFC.h"
#include "instance/PIOA.h"
#include "instance/PIOB.h"
#include "instance/PIOC.h"
#include "instance/RSTC.h"
#include "instance/SUPC.h"
#include "instance/RTT.h"
#include "instance/WDT.h"
#include "instance/RTC.h"
#include "instance/GPBR.h"
/*@}*/

/* ************************************************************************** */
/*   PERIPHERAL ID DEFINITIONS FOR SAM3SD8C */
/* ************************************************************************** */
/** \addtogroup SAM3SD8C_id Peripheral Ids Definitions */
/*@{*/

#define ID_SUPC   ( 0) /**< \brief Supply Controller (SUPC) */
#define ID_RSTC   ( 1) /**< \brief Reset Controller (RSTC) */
#define ID_RTC    ( 2) /**< \brief Real Time Clock (RTC) */
#define ID_RTT    ( 3) /**< \brief Real Time Timer (RTT) */
#define ID_WDT    ( 4) /**< \brief Watchdog Timer (WDT) */
#define ID_PMC    ( 5) /**< \brief Power Management Controller (PMC) */
#define ID_EFC    ( 6) /**< \brief Enhanced Embedded Flash Controller (EFC) */
#define ID_UART0  ( 8) /**< \brief UART 0 (UART0) */
#define ID_UART1  ( 9) /**< \brief UART 1 (UART1) */
#define ID_SMC    (10) /**< \brief Static Memory Controller (SMC) */
#define ID_PIOA   (11) /**< \brief Parallel I/O Controller A (PIOA) */
#define ID_PIOB   (12) /**< \brief Parallel I/O Controller B (PIOB) */
#define ID_PIOC   (13) /**< \brief Parallel I/O Controller C (PIOC) */
#define ID_USART0 (14) /**< \brief USART 0 (USART0) */
#define ID_USART1 (15) /**< \brief USART 1 (USART1) */
#define ID_USART2 (16) /**< \brief USART 2 (SAM3SD8 100 pins only) (USART2) */
#define ID_HSMCI  (18) /**< \brief Multimedia Card Interface (HSMCI) */
#define ID_TWI0   (19) /**< \brief Two Wire Interface 0 (TWI0) */
#define ID_TWI1   (20) /**< \brief Two Wire Interface 1 (TWI1) */
#define ID_SPI    (21) /**< \brief Serial Peripheral Interface (SPI) */
#define ID_SSC    (22) /**< \brief Synchronous Serial Controler (SSC) */
#define ID_TC0    (23) /**< \brief Timer/Counter 0 (TC0) */
#define ID_TC1    (24) /**< \brief Timer/Counter 1 (TC1) */
#define ID_TC2    (25) /**< \brief Timer/Counter 2 (TC2) */
#define ID_TC3    (26) /**< \brief Timer/Counter 3 (TC3) */
#define ID_TC4    (27) /**< \brief Timer/Counter 4 (TC4) */
#define ID_TC5    (28) /**< \brief Timer/Counter 5 (TC5) */
#define ID_ADC    (29) /**< \brief Analog To Digital Converter (ADC) */
#define ID_DACC   (30) /**< \brief Digital To Analog Converter (DACC) */
#define ID_PWM    (31) /**< \brief Pulse Width Modulation (PWM) */
#define ID_CRCCU  (32) /**< \brief CRC Calculation Unit (CRCCU) */
#define ID_ACC    (33) /**< \brief Analog Comparator (ACC) */
#define ID_UDP    (34) /**< \brief USB Device Port (UDP) */
/*@}*/

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAM3SD8C */
/* ************************************************************************** */
/** \addtogroup SAM3SD8C_base Peripheral Base Address Definitions */
/*@{*/

#ifndef __ASSEMBLY__
#define HSMCI ((Hsmci*)0x40000000U)
#define PDC_HSMCI ((Pdc*)0x40000100U)
#define SSC ((Ssc*)0x40004000U)
#define PDC_SSC ((Pdc*)0x40004100U)
#define SPI ((Spi*)0x40008000U)
#define PDC_SPI ((Pdc*)0x40008100U)
#define TC0 ((Tc*)0x40010000U)
#define TC1 ((Tc*)0x40014000U)
#define TWI0 ((Twi*)0x40018000U)
#define PDC_TWI0 ((Pdc*)0x40018100U)
#define TWI1 ((Twi*)0x4001C000U)
#define PDC_TWI1 ((Pdc*)0x4001C100U)
#define PWM ((Pwm*)0x40020000U)
#define PDC_PWM ((Pdc*)0x40020100U)
#define USART0 ((Usart*)0x40024000U)
#define PDC_USART0 ((Pdc*)0x40024100U)
#define USART1 ((Usart*)0x40028000U)
#define PDC_USART1 ((Pdc*)0x40028100U)
#define USART2 ((Usart*)0x4002C000U)
#define PDC_USART2 ((Pdc*)0x4002C100U)
#define UDP ((Udp*)0x40034000U)
#define ADC ((Adc*)0x40038000U)
#define PDC_ADC ((Pdc*)0x40038100U)
#define DACC ((Dacc*)0x4003C000U)
#define PDC_DACC ((Pdc*)0x4003C100U)
#define ACC ((Acc*)0x40040000U)
#define CRCCU ((Crccu*)0x40044000U)
#define SMC ((Smc*)0x400E0000U)
#define MATRIX ((Matrix*)0x400E0200U)
#define PMC ((Pmc*)0x400E0400U)
#define UART0 ((Uart*)0x400E0600U)
#define PDC_UART0 ((Pdc*)0x400E0700U)
#define CHIPID ((Chipid*)0x400E0740U)
#define UART1 ((Uart*)0x400E0800U)
#define PDC_UART1 ((Pdc*)0x400E0900U)
#define EFC ((Efc*)0x400E0A00U)
#define PIOA ((Pio*)0x400E0E00U)
#define PDC_PIOA ((Pdc*)0x400E0F68U)
#define PIOB ((Pio*)0x400E1000U)
#define PIOC ((Pio*)0x400E1200U)
#define RSTC ((Rstc*)0x400E1400U)
#define SUPC ((Supc*)0x400E1410U)
#define RTT ((Rtt*)0x400E1430U)
#define WDT ((Wdt*)0x400E1450U)
#define RTC ((Rtc*)0x400E1460U)
#define GPBR ((Gpbr*)0x400E1490U)
#else
#define HSMCI		(0x40000000U)
#define PDC_HSMCI		(0x40000100U)
#define SSC		(0x40004000U)
#define PDC_SSC		(0x40004100U)
#define SPI		(0x40008000U)
#define PDC_SPI		(0x40008100U)
#define TC0		(0x40010000U)
#define TC1		(0x40014000U)
#define TWI0		(0x40018000U)
#define PDC_TWI0		(0x40018100U)
#define TWI1		(0x4001C000U)
#define PDC_TWI1		(0x4001C100U)
#define PWM		(0x40020000U)
#define PDC_PWM		(0x40020100U)
#define USART0		(0x40024000U)
#define PDC_USART0		(0x40024100U)
#define USART1		(0x40028000U)
#define PDC_USART1		(0x40028100U)
#define USART2		(0x4002C000U)
#define PDC_USART2		(0x4002C100U)
#define UDP		(0x40034000U)
#define ADC		(0x40038000U)
#define PDC_ADC		(0x40038100U)
#define DACC		(0x4003C000U)
#define PDC_DACC		(0x4003C100U)
#define ACC		(0x40040000U)
#define CRCCU		(0x40044000U)
#define SMC		(0x400E0000U)
#define MATRIX		(0x400E0200U)
#define PMC		(0x400E0400U)
#define UART0		(0x400E0600U)
#define PDC_UART0		(0x400E0700U)
#define CHIPID		(0x400E0740U)
#define UART1		(0x400E0800U)
#define PDC_UART1		(0x400E0900U)
#define EFC		(0x400E0A00U)
#define PIOA		(0x400E0E00U)
#define PDC_PIOA		(0x400E0F68U)
#define PIOB		(0x400E1000U)
#define PIOC		(0x400E1200U)
#define RSTC		(0x400E1400U)
#define SUPC		(0x400E1410U)
#define RTT		(0x400E1430U)
#define WDT		(0x400E1450U)
#define RTC		(0x400E1460U)
#define GPBR		(0x400E1490U)
#endif /* __ASSEMBLY__ */ 
/*@}*/

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAM3SD8C */
/* ************************************************************************** */
/** \addtogroup SAM3SD8C_pio Peripheral Pio Definitions */
/*@{*/

#include "pio/SAM3SD8C.h"
/*@}*/

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAM3SD8C */
/* ************************************************************************** */

#define IFLASH0_SIZE             0x40000
#define IFLASH0_PAGE_SIZE        256
#define IFLASH0_LOCK_REGION_SIZE 32768
#define IFLASH0_NB_OF_PAGES      1024
#define IFLASH0_NB_OF_LOCK_BITS  16
#define IFLASH1_SIZE             0x40000
#define IFLASH1_PAGE_SIZE        256
#define IFLASH1_LOCK_REGION_SIZE 32768
#define IFLASH1_NB_OF_PAGES      1024
#define IFLASH1_NB_OF_LOCK_BITS  16
#define IRAM_SIZE                0x10000
#define IFLASH_SIZE              0x80000

#define IFLASH_ADDR  (0x00400000u) /**< Internal Flash base address */
#define IFLASH0_ADDR (0x00400000u) /**< Internal Flash 0 base address */
#if defined IFLASH0_SIZE
#define IFLASH1_ADDR (IFLASH0_ADDR+IFLASH0_SIZE) /**< Internal Flash 1 base address */
#endif
#define IROM_ADDR    (0x00800000u) /**< Internal ROM base address */
#define IRAM_ADDR    (0x20000000u) /**< Internal RAM base address */
#define EBI_CS0_ADDR (0x60000000u) /**< EBI Chip Select 0 base address */
#define EBI_CS1_ADDR (0x61000000u) /**< EBI Chip Select 1 base address */
#define EBI_CS2_ADDR (0x62000000u) /**< EBI Chip Select 2 base address */
#define EBI_CS3_ADDR (0x63000000u) /**< EBI Chip Select 3 base address */

#ifdef __cplusplus
}
#endif

/*@}*/

#endif /* _SAM3SD8C_ */
