// Copyright (c) 2015 Rowley Associates Limited.
//
// This file may be distributed under the terms of the License Agreement
// provided with this software.
//
// THIS FILE IS PROVIDED AS IS WITH NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

#ifndef AM335x_h
#define AM335x_h


#ifndef CM_PER_BASE
#define CM_PER_BASE 0x44E00000
#endif

#define CM_PER_L4LS_CLKSTCTRL (*(volatile unsigned *)0x44E00000)
#define CM_PER_L4LS_CLKSTCTRL_OFFSET 0x0

#define CM_PER_L3S_CLKSTCTRL (*(volatile unsigned *)0x44E00004)
#define CM_PER_L3S_CLKSTCTRL_OFFSET 0x4

#define CM_PER_L4FW_CLKSTCTRL (*(volatile unsigned *)0x44E00008)
#define CM_PER_L4FW_CLKSTCTRL_OFFSET 0x8

#define CM_PER_L3_CLKSTCTRL (*(volatile unsigned *)0x44E0000C)
#define CM_PER_L3_CLKSTCTRL_OFFSET 0xC

#define CM_PER_CPGMAC0_CLKCTRL (*(volatile unsigned *)0x44E00014)
#define CM_PER_CPGMAC0_CLKCTRL_OFFSET 0x14

#define CM_PER_LCDC_CLKCTRL (*(volatile unsigned *)0x44E00018)
#define CM_PER_LCDC_CLKCTRL_OFFSET 0x18

#define CM_PER_USB0_CLKCTRL (*(volatile unsigned *)0x44E0001C)
#define CM_PER_USB0_CLKCTRL_OFFSET 0x1C

#define CM_PER_MLB_CLKCTRL (*(volatile unsigned *)0x44E00020)
#define CM_PER_MLB_CLKCTRL_OFFSET 0x20

#define CM_PER_TPTC0_CLKCTRL (*(volatile unsigned *)0x44E00024)
#define CM_PER_TPTC0_CLKCTRL_OFFSET 0x24

#define CM_PER_EMIF_CLKCTRL (*(volatile unsigned *)0x44E00028)
#define CM_PER_EMIF_CLKCTRL_OFFSET 0x28

#define CM_PER_OCMCRAM_CLKCTRL (*(volatile unsigned *)0x44E0002C)
#define CM_PER_OCMCRAM_CLKCTRL_OFFSET 0x2C

#define CM_PER_GPMC_CLKCTRL (*(volatile unsigned *)0x44E00030)
#define CM_PER_GPMC_CLKCTRL_OFFSET 0x30

#define CM_PER_MCASP0_CLKCTRL (*(volatile unsigned *)0x44E00034)
#define CM_PER_MCASP0_CLKCTRL_OFFSET 0x34

#define CM_PER_UART5_CLKCTRL (*(volatile unsigned *)0x44E00038)
#define CM_PER_UART5_CLKCTRL_OFFSET 0x38

#define CM_PER_MMC0_CLKCTRL (*(volatile unsigned *)0x44E0003C)
#define CM_PER_MMC0_CLKCTRL_OFFSET 0x3C

#define CM_PER_ELM_CLKCTRL (*(volatile unsigned *)0x44E00040)
#define CM_PER_ELM_CLKCTRL_OFFSET 0x40

#define CM_PER_I2C2_CLKCTRL (*(volatile unsigned *)0x44E00044)
#define CM_PER_I2C2_CLKCTRL_OFFSET 0x44

#define CM_PER_I2C1_CLKCTRL (*(volatile unsigned *)0x44E00048)
#define CM_PER_I2C1_CLKCTRL_OFFSET 0x48

#define CM_PER_SPI0_CLKCTRL (*(volatile unsigned *)0x44E0004C)
#define CM_PER_SPI0_CLKCTRL_OFFSET 0x4C

#define CM_PER_SPI1_CLKCTRL (*(volatile unsigned *)0x44E00050)
#define CM_PER_SPI1_CLKCTRL_OFFSET 0x50

#define CM_PER_L4LS_CLKCTRL (*(volatile unsigned *)0x44E00060)
#define CM_PER_L4LS_CLKCTRL_OFFSET 0x60

#define CM_PER_L4FW_CLKCTRL (*(volatile unsigned *)0x44E00064)
#define CM_PER_L4FW_CLKCTRL_OFFSET 0x64

#define CM_PER_MCASP1_CLKCTRL (*(volatile unsigned *)0x44E00068)
#define CM_PER_MCASP1_CLKCTRL_OFFSET 0x68

#define CM_PER_UART1_CLKCTRL (*(volatile unsigned *)0x44E0006C)
#define CM_PER_UART1_CLKCTRL_OFFSET 0x6C

#define CM_PER_UART2_CLKCTRL (*(volatile unsigned *)0x44E00070)
#define CM_PER_UART2_CLKCTRL_OFFSET 0x70

#define CM_PER_UART3_CLKCTRL (*(volatile unsigned *)0x44E00074)
#define CM_PER_UART3_CLKCTRL_OFFSET 0x74

#define CM_PER_UART4_CLKCTRL (*(volatile unsigned *)0x44E00078)
#define CM_PER_UART4_CLKCTRL_OFFSET 0x78

#define CM_PER_TIMER7_CLKCTRL (*(volatile unsigned *)0x44E0007C)
#define CM_PER_TIMER7_CLKCTRL_OFFSET 0x7C

#define CM_PER_TIMER2_CLKCTRL (*(volatile unsigned *)0x44E00080)
#define CM_PER_TIMER2_CLKCTRL_OFFSET 0x80

#define CM_PER_TIMER3_CLKCTRL (*(volatile unsigned *)0x44E00084)
#define CM_PER_TIMER3_CLKCTRL_OFFSET 0x84

#define CM_PER_TIMER4_CLKCTRL (*(volatile unsigned *)0x44E00088)
#define CM_PER_TIMER4_CLKCTRL_OFFSET 0x88

#define CM_PER_RNG_CLKCTRL (*(volatile unsigned *)0x44E00090)
#define CM_PER_RNG_CLKCTRL_OFFSET 0x90

#define CM_PER_AES0_CLKCTRL (*(volatile unsigned *)0x44E00094)
#define CM_PER_AES0_CLKCTRL_OFFSET 0x94

#define CM_PER_SHA0_CLKCTRL (*(volatile unsigned *)0x44E000A0)
#define CM_PER_SHA0_CLKCTRL_OFFSET 0xA0

#define CM_PER_PKA_CLKCTRL (*(volatile unsigned *)0x44E000A4)
#define CM_PER_PKA_CLKCTRL_OFFSET 0xA4

#define CM_PER_GPIO6_CLKCTRL (*(volatile unsigned *)0x44E000A8)
#define CM_PER_GPIO6_CLKCTRL_OFFSET 0xA8

#define CM_PER_GPIO1_CLKCTRL (*(volatile unsigned *)0x44E000AC)
#define CM_PER_GPIO1_CLKCTRL_OFFSET 0xAC

#define CM_PER_GPIO2_CLKCTRL (*(volatile unsigned *)0x44E000B0)
#define CM_PER_GPIO2_CLKCTRL_OFFSET 0xB0

#define CM_PER_GPIO3_CLKCTRL (*(volatile unsigned *)0x44E000B4)
#define CM_PER_GPIO3_CLKCTRL_OFFSET 0xB4

#define CM_PER_TPCC_CLKCTRL (*(volatile unsigned *)0x44E000BC)
#define CM_PER_TPCC_CLKCTRL_OFFSET 0xBC

#define CM_PER_DCAN0_CLKCTRL (*(volatile unsigned *)0x44E000C0)
#define CM_PER_DCAN0_CLKCTRL_OFFSET 0xC0

#define CM_PER_DCAN1_CLKCTRL (*(volatile unsigned *)0x44E000C4)
#define CM_PER_DCAN1_CLKCTRL_OFFSET 0xC4

#define CM_PER_EPWMSS1_CLKCTRL (*(volatile unsigned *)0x44E000CC)
#define CM_PER_EPWMSS1_CLKCTRL_OFFSET 0xCC

#define CM_PER_EMIF_FW_CLKCTRL (*(volatile unsigned *)0x44E000D0)
#define CM_PER_EMIF_FW_CLKCTRL_OFFSET 0xD0

#define CM_PER_EPWMSS0_CLKCTRL (*(volatile unsigned *)0x44E000D4)
#define CM_PER_EPWMSS0_CLKCTRL_OFFSET 0xD4

#define CM_PER_EPWMSS2_CLKCTRL (*(volatile unsigned *)0x44E000D8)
#define CM_PER_EPWMSS2_CLKCTRL_OFFSET 0xD8

#define CM_PER_L3_INSTR_CLKCTRL (*(volatile unsigned *)0x44E000DC)
#define CM_PER_L3_INSTR_CLKCTRL_OFFSET 0xDC

#define CM_PER_L3_CLKCTRL (*(volatile unsigned *)0x44E000E0)
#define CM_PER_L3_CLKCTRL_OFFSET 0xE0

#define CM_PER_IEEE5000_CLKCTRL (*(volatile unsigned *)0x44E000E4)
#define CM_PER_IEEE5000_CLKCTRL_OFFSET 0xE4

#define CM_PER_ICSS_CLKCTRL (*(volatile unsigned *)0x44E000E8)
#define CM_PER_ICSS_CLKCTRL_OFFSET 0xE8

#define CM_PER_TIMER5_CLKCTRL (*(volatile unsigned *)0x44E000EC)
#define CM_PER_TIMER5_CLKCTRL_OFFSET 0xEC

#define CM_PER_TIMER6_CLKCTRL (*(volatile unsigned *)0x44E000F0)
#define CM_PER_TIMER6_CLKCTRL_OFFSET 0xF0

#define CM_PER_MMC1_CLKCTRL (*(volatile unsigned *)0x44E000F4)
#define CM_PER_MMC1_CLKCTRL_OFFSET 0xF4

#define CM_PER_MMC2_CLKCTRL (*(volatile unsigned *)0x44E000F8)
#define CM_PER_MMC2_CLKCTRL_OFFSET 0xF8

#define CM_PER_TPTC1_CLKCTRL (*(volatile unsigned *)0x44E000FC)
#define CM_PER_TPTC1_CLKCTRL_OFFSET 0xFC

#define CM_PER_TPTC2_CLKCTRL (*(volatile unsigned *)0x44E00100)
#define CM_PER_TPTC2_CLKCTRL_OFFSET 0x100

#define CM_PER_SPINLOCK_CLKCTRL (*(volatile unsigned *)0x44E0010C)
#define CM_PER_SPINLOCK_CLKCTRL_OFFSET 0x10C

#define CM_PER_MAILBOX0_CLKCTRL (*(volatile unsigned *)0x44E00110)
#define CM_PER_MAILBOX0_CLKCTRL_OFFSET 0x110

#define CM_PER_L4HS_CLKSTCTRL (*(volatile unsigned *)0x44E0011C)
#define CM_PER_L4HS_CLKSTCTRL_OFFSET 0x11C

#define CM_PER_L4HS_CLKCTRL (*(volatile unsigned *)0x44E00120)
#define CM_PER_L4HS_CLKCTRL_OFFSET 0x120

#define CM_PER_MSTR_EXPS_CLKCTRL (*(volatile unsigned *)0x44E00124)
#define CM_PER_MSTR_EXPS_CLKCTRL_OFFSET 0x124

#define CM_PER_SLV_EXPS_CLKCTRL (*(volatile unsigned *)0x44E00128)
#define CM_PER_SLV_EXPS_CLKCTRL_OFFSET 0x128

#define CM_PER_OCPWP_L3_CLKSTCTRL (*(volatile unsigned *)0x44E0012C)
#define CM_PER_OCPWP_L3_CLKSTCTRL_OFFSET 0x12C

#define CM_PER_OCPWP_CLKCTRL (*(volatile unsigned *)0x44E00130)
#define CM_PER_OCPWP_CLKCTRL_OFFSET 0x130

#define CM_PER_ICSS_CLKSTCTRL (*(volatile unsigned *)0x44E00140)
#define CM_PER_ICSS_CLKSTCTRL_OFFSET 0x140

#define CM_PER_CPSW_CLKSTCTRL (*(volatile unsigned *)0x44E00144)
#define CM_PER_CPSW_CLKSTCTRL_OFFSET 0x144

#define CM_PER_LCDC_CLKSTCTRL (*(volatile unsigned *)0x44E00148)
#define CM_PER_LCDC_CLKSTCTRL_OFFSET 0x148

#define CM_PER_CLKDIV32K_CLKCTRL (*(volatile unsigned *)0x44E0014C)
#define CM_PER_CLKDIV32K_CLKCTRL_OFFSET 0x14C

#define CM_PER_CLK_24MHZ_CLKSTCTRL (*(volatile unsigned *)0x44E00150)
#define CM_PER_CLK_24MHZ_CLKSTCTRL_OFFSET 0x150

#ifndef CM_WKUP_BASE
#define CM_WKUP_BASE 0x44E00400
#endif

#define CM_WKUP_CLKSTCTRL (*(volatile unsigned *)0x44E00400)
#define CM_WKUP_CLKSTCTRL_OFFSET 0x0

#define CM_WKUP_CONTROL_CLKCTRL (*(volatile unsigned *)0x44E00404)
#define CM_WKUP_CONTROL_CLKCTRL_OFFSET 0x4

#define CM_WKUP_GPIO0_CLKCTRL (*(volatile unsigned *)0x44E00408)
#define CM_WKUP_GPIO0_CLKCTRL_OFFSET 0x8

#define CM_WKUP_L4WKUP_CLKCTRL (*(volatile unsigned *)0x44E0040C)
#define CM_WKUP_L4WKUP_CLKCTRL_OFFSET 0xC

#define CM_WKUP_TIMER0_CLKCTRL (*(volatile unsigned *)0x44E00410)
#define CM_WKUP_TIMER0_CLKCTRL_OFFSET 0x10

#define CM_WKUP_DEBUGSS_CLKCTRL (*(volatile unsigned *)0x44E00414)
#define CM_WKUP_DEBUGSS_CLKCTRL_OFFSET 0x14

#define CM_WKUP_CM_L3_AON_CLKSTCTRL (*(volatile unsigned *)0x44E00418)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_OFFSET 0x18

#define CM_WKUP_CM_AUTOIDLE_DPLL_MPU (*(volatile unsigned *)0x44E0041C)
#define CM_WKUP_CM_AUTOIDLE_DPLL_MPU_OFFSET 0x1C

#define CM_WKUP_CM_IDLEST_DPLL_MPU (*(volatile unsigned *)0x44E00420)
#define CM_WKUP_CM_IDLEST_DPLL_MPU_OFFSET 0x20

#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_MPU (*(volatile unsigned *)0x44E00424)
#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_MPU_OFFSET 0x24

#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_MPU (*(volatile unsigned *)0x44E00428)
#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_MPU_OFFSET 0x28

#define CM_WKUP_CM_CLKSEL_DPLL_MPU (*(volatile unsigned *)0x44E0042C)
#define CM_WKUP_CM_CLKSEL_DPLL_MPU_OFFSET 0x2C

#define CM_WKUP_CM_AUTOIDLE_DPLL_DDR (*(volatile unsigned *)0x44E00430)
#define CM_WKUP_CM_AUTOIDLE_DPLL_DDR_OFFSET 0x30

#define CM_WKUP_CM_IDLEST_DPLL_DDR (*(volatile unsigned *)0x44E00434)
#define CM_WKUP_CM_IDLEST_DPLL_DDR_OFFSET 0x34

#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_DDR (*(volatile unsigned *)0x44E00438)
#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_DDR_OFFSET 0x38

#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_DDR (*(volatile unsigned *)0x44E0043C)
#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_DDR_OFFSET 0x3C

#define CM_WKUP_CM_CLKSEL_DPLL_DDR (*(volatile unsigned *)0x44E00440)
#define CM_WKUP_CM_CLKSEL_DPLL_DDR_OFFSET 0x40

#define CM_WKUP_CM_AUTOIDLE_DPLL_DISP (*(volatile unsigned *)0x44E00444)
#define CM_WKUP_CM_AUTOIDLE_DPLL_DISP_OFFSET 0x44

#define CM_WKUP_CM_IDLEST_DPLL_DISP (*(volatile unsigned *)0x44E00448)
#define CM_WKUP_CM_IDLEST_DPLL_DISP_OFFSET 0x48

#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_DISP (*(volatile unsigned *)0x44E0044C)
#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_DISP_OFFSET 0x4C

#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_DISP (*(volatile unsigned *)0x44E00450)
#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_DISP_OFFSET 0x50

#define CM_WKUP_CM_CLKSEL_DPLL_DISP (*(volatile unsigned *)0x44E00454)
#define CM_WKUP_CM_CLKSEL_DPLL_DISP_OFFSET 0x54

#define CM_WKUP_CM_AUTOIDLE_DPLL_CORE (*(volatile unsigned *)0x44E00458)
#define CM_WKUP_CM_AUTOIDLE_DPLL_CORE_OFFSET 0x58

#define CM_WKUP_CM_IDLEST_DPLL_CORE (*(volatile unsigned *)0x44E0045C)
#define CM_WKUP_CM_IDLEST_DPLL_CORE_OFFSET 0x5C

#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_CORE (*(volatile unsigned *)0x44E00460)
#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_CORE_OFFSET 0x60

#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_CORE (*(volatile unsigned *)0x44E00464)
#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_CORE_OFFSET 0x64

#define CM_WKUP_CM_CLKSEL_DPLL_CORE (*(volatile unsigned *)0x44E00468)
#define CM_WKUP_CM_CLKSEL_DPLL_CORE_OFFSET 0x68

#define CM_WKUP_CM_AUTOIDLE_DPLL_PER (*(volatile unsigned *)0x44E0046C)
#define CM_WKUP_CM_AUTOIDLE_DPLL_PER_OFFSET 0x6C

#define CM_WKUP_CM_IDLEST_DPLL_PER (*(volatile unsigned *)0x44E00470)
#define CM_WKUP_CM_IDLEST_DPLL_PER_OFFSET 0x70

#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_PER (*(volatile unsigned *)0x44E00474)
#define CM_WKUP_CM_SSC_DELTAMSTEP_DPLL_PER_OFFSET 0x74

#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_PER (*(volatile unsigned *)0x44E00478)
#define CM_WKUP_CM_SSC_MODFREQDIV_DPLL_PER_OFFSET 0x78

#define CM_WKUP_CM_CLKDCOLDO_DPLL_PER (*(volatile unsigned *)0x44E0047C)
#define CM_WKUP_CM_CLKDCOLDO_DPLL_PER_OFFSET 0x7C

#define CM_WKUP_CM_DIV_M4_DPLL_CORE (*(volatile unsigned *)0x44E00480)
#define CM_WKUP_CM_DIV_M4_DPLL_CORE_OFFSET 0x80

#define CM_WKUP_CM_DIV_M5_DPLL_CORE (*(volatile unsigned *)0x44E00484)
#define CM_WKUP_CM_DIV_M5_DPLL_CORE_OFFSET 0x84

#define CM_WKUP_CM_CLKMODE_DPLL_MPU (*(volatile unsigned *)0x44E00488)
#define CM_WKUP_CM_CLKMODE_DPLL_MPU_OFFSET 0x88

#define CM_WKUP_CM_CLKMODE_DPLL_PER (*(volatile unsigned *)0x44E0048C)
#define CM_WKUP_CM_CLKMODE_DPLL_PER_OFFSET 0x8C

#define CM_WKUP_CM_CLKMODE_DPLL_CORE (*(volatile unsigned *)0x44E00490)
#define CM_WKUP_CM_CLKMODE_DPLL_CORE_OFFSET 0x90

#define CM_WKUP_CM_CLKMODE_DPLL_DDR (*(volatile unsigned *)0x44E00494)
#define CM_WKUP_CM_CLKMODE_DPLL_DDR_OFFSET 0x94

#define CM_WKUP_CM_CLKMODE_DPLL_DISP (*(volatile unsigned *)0x44E00498)
#define CM_WKUP_CM_CLKMODE_DPLL_DISP_OFFSET 0x98

#define CM_WKUP_CM_CLKSEL_DPLL_PERIPH (*(volatile unsigned *)0x44E0049C)
#define CM_WKUP_CM_CLKSEL_DPLL_PERIPH_OFFSET 0x9C

#define CM_WKUP_CM_DIV_M2_DPLL_DDR (*(volatile unsigned *)0x44E004A0)
#define CM_WKUP_CM_DIV_M2_DPLL_DDR_OFFSET 0xA0

#define CM_WKUP_CM_DIV_M2_DPLL_DISP (*(volatile unsigned *)0x44E004A4)
#define CM_WKUP_CM_DIV_M2_DPLL_DISP_OFFSET 0xA4

#define CM_WKUP_CM_DIV_M2_DPLL_MPU (*(volatile unsigned *)0x44E004A8)
#define CM_WKUP_CM_DIV_M2_DPLL_MPU_OFFSET 0xA8

#define CM_WKUP_CM_DIV_M2_DPLL_PER (*(volatile unsigned *)0x44E004AC)
#define CM_WKUP_CM_DIV_M2_DPLL_PER_OFFSET 0xAC

#define CM_WKUP_WKUP_M3_CLKCTRL (*(volatile unsigned *)0x44E004B0)
#define CM_WKUP_WKUP_M3_CLKCTRL_OFFSET 0xB0

#define CM_WKUP_UART0_CLKCTRL (*(volatile unsigned *)0x44E004B4)
#define CM_WKUP_UART0_CLKCTRL_OFFSET 0xB4

#define CM_WKUP_I2C0_CLKCTRL (*(volatile unsigned *)0x44E004B8)
#define CM_WKUP_I2C0_CLKCTRL_OFFSET 0xB8

#define CM_WKUP_ADC_TSC_CLKCTRL (*(volatile unsigned *)0x44E004BC)
#define CM_WKUP_ADC_TSC_CLKCTRL_OFFSET 0xBC

#define CM_WKUP_SMARTREFLEX0_CLKCTRL (*(volatile unsigned *)0x44E004C0)
#define CM_WKUP_SMARTREFLEX0_CLKCTRL_OFFSET 0xC0

#define CM_WKUP_TIMER1_CLKCTRL (*(volatile unsigned *)0x44E004C4)
#define CM_WKUP_TIMER1_CLKCTRL_OFFSET 0xC4

#define CM_WKUP_SMARTREFLEX1_CLKCTRL (*(volatile unsigned *)0x44E004C8)
#define CM_WKUP_SMARTREFLEX1_CLKCTRL_OFFSET 0xC8

#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL (*(volatile unsigned *)0x44E004CC)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_OFFSET 0xCC

#define CM_WKUP_WDT0_CLKCTRL (*(volatile unsigned *)0x44E004D0)
#define CM_WKUP_WDT0_CLKCTRL_OFFSET 0xD0

#define CM_WKUP_WDT1_CLKCTRL (*(volatile unsigned *)0x44E004D4)
#define CM_WKUP_WDT1_CLKCTRL_OFFSET 0xD4

#define CM_WKUP_CM_DIV_M6_DPLL_CORE (*(volatile unsigned *)0x44E004D8)
#define CM_WKUP_CM_DIV_M6_DPLL_CORE_OFFSET 0xD8

#ifndef CM_DPLL_BASE
#define CM_DPLL_BASE 0x44E00500
#endif

#define CM_DPLL_CLKSEL_TIMER7_CLK (*(volatile unsigned *)0x44E00504)
#define CM_DPLL_CLKSEL_TIMER7_CLK_OFFSET 0x4

#define CM_DPLL_CLKSEL_TIMER2_CLK (*(volatile unsigned *)0x44E00508)
#define CM_DPLL_CLKSEL_TIMER2_CLK_OFFSET 0x8

#define CM_DPLL_CLKSEL_TIMER3_CLK (*(volatile unsigned *)0x44E0050C)
#define CM_DPLL_CLKSEL_TIMER3_CLK_OFFSET 0xC

#define CM_DPLL_CLKSEL_TIMER4_CLK (*(volatile unsigned *)0x44E00510)
#define CM_DPLL_CLKSEL_TIMER4_CLK_OFFSET 0x10

#define CM_DPLL_CM_MAC_CLKSEL (*(volatile unsigned *)0x44E00514)
#define CM_DPLL_CM_MAC_CLKSEL_OFFSET 0x14

#define CM_DPLL_CLKSEL_TIMER5_CLK (*(volatile unsigned *)0x44E00518)
#define CM_DPLL_CLKSEL_TIMER5_CLK_OFFSET 0x18

#define CM_DPLL_CLKSEL_TIMER6_CLK (*(volatile unsigned *)0x44E0051C)
#define CM_DPLL_CLKSEL_TIMER6_CLK_OFFSET 0x1C

#define CM_DPLL_CM_CPTS_RFT_CLKSEL (*(volatile unsigned *)0x44E00520)
#define CM_DPLL_CM_CPTS_RFT_CLKSEL_OFFSET 0x20

#define CM_DPLL_CLKSEL_TIMER1MS_CLK (*(volatile unsigned *)0x44E00528)
#define CM_DPLL_CLKSEL_TIMER1MS_CLK_OFFSET 0x28

#define CM_DPLL_CLKSEL_GFX_FCLK (*(volatile unsigned *)0x44E0052C)
#define CM_DPLL_CLKSEL_GFX_FCLK_OFFSET 0x2C

#define CM_DPLL_CLKSEL_ICSS_OCP_CLK (*(volatile unsigned *)0x44E00530)
#define CM_DPLL_CLKSEL_ICSS_OCP_CLK_OFFSET 0x30

#define CM_DPLL_CLKSEL_LCDC_PIXEL_CLK (*(volatile unsigned *)0x44E00534)
#define CM_DPLL_CLKSEL_LCDC_PIXEL_CLK_OFFSET 0x34

#define CM_DPLL_CLKSEL_WDT1_CLK (*(volatile unsigned *)0x44E00538)
#define CM_DPLL_CLKSEL_WDT1_CLK_OFFSET 0x38

#define CM_DPLL_CLKSEL_GPIO0_DBCLK (*(volatile unsigned *)0x44E0053C)
#define CM_DPLL_CLKSEL_GPIO0_DBCLK_OFFSET 0x3C

#ifndef CM_MPU_BASE
#define CM_MPU_BASE 0x44E00600
#endif

#define CM_MPU_CLKSTCTRL (*(volatile unsigned *)0x44E00600)
#define CM_MPU_CLKSTCTRL_OFFSET 0x0

#define CM_MPU_MPU_CLKCTRL (*(volatile unsigned *)0x44E00604)
#define CM_MPU_MPU_CLKCTRL_OFFSET 0x4

#ifndef CM_DEVICE_BASE
#define CM_DEVICE_BASE 0x44E00700
#endif

#define CM_DEVICE_CM_CLKOUT_CTRL (*(volatile unsigned *)0x44E00700)
#define CM_DEVICE_CM_CLKOUT_CTRL_OFFSET 0x0

#ifndef CM_RTC_BASE
#define CM_RTC_BASE 0x44E00800
#endif

#define CM_RTC_RTC_CLKCTRL (*(volatile unsigned *)0x44E00800)
#define CM_RTC_RTC_CLKCTRL_OFFSET 0x0

#define CM_RTC_CLKSTCTRL (*(volatile unsigned *)0x44E00804)
#define CM_RTC_CLKSTCTRL_OFFSET 0x4

#ifndef CM_GFX_BASE
#define CM_GFX_BASE 0x44E00900
#endif

#define CM_GFX_L3_CLKSTCTRL (*(volatile unsigned *)0x44E00900)
#define CM_GFX_L3_CLKSTCTRL_OFFSET 0x0

#define CM_GFX_GFX_CLKCTRL (*(volatile unsigned *)0x44E00904)
#define CM_GFX_GFX_CLKCTRL_OFFSET 0x4

#define CM_GFX_BITBLT_CLKCTRL (*(volatile unsigned *)0x44E00908)
#define CM_GFX_BITBLT_CLKCTRL_OFFSET 0x8

#define CM_GFX_L4LS_GFX_CLKSTCTRL (*(volatile unsigned *)0x44E0090C)
#define CM_GFX_L4LS_GFX_CLKSTCTRL_OFFSET 0xC

#ifndef CM_CEFUSE_BASE
#define CM_CEFUSE_BASE 0x44E00A00
#endif

#define CM_CEFUSE_CLKSTCTRL (*(volatile unsigned *)0x44E00A00)
#define CM_CEFUSE_CLKSTCTRL_OFFSET 0x0

#define CM_CEFUSE_CEFUSE_CLKCTRL (*(volatile unsigned *)0x44E00A20)
#define CM_CEFUSE_CEFUSE_CLKCTRL_OFFSET 0x20

#ifndef PRM_IRQ_BASE
#define PRM_IRQ_BASE 0x44E00B00
#endif

#define PRM_IRQ_REVISION_PRM (*(volatile unsigned *)0x44E00B00)
#define PRM_IRQ_REVISION_PRM_OFFSET 0x0

#define PRM_IRQ_PRM_IRQSTATUS_MPU (*(volatile unsigned *)0x44E00B04)
#define PRM_IRQ_PRM_IRQSTATUS_MPU_OFFSET 0x4

#define PRM_IRQ_PRM_IRQENABLE_MPU (*(volatile unsigned *)0x44E00B08)
#define PRM_IRQ_PRM_IRQENABLE_MPU_OFFSET 0x8

#define PRM_IRQ_PRM_IRQSTATUS_M3 (*(volatile unsigned *)0x44E00B0C)
#define PRM_IRQ_PRM_IRQSTATUS_M3_OFFSET 0xC

#define PRM_IRQ_PRM_IRQENABLE_M3 (*(volatile unsigned *)0x44E00B10)
#define PRM_IRQ_PRM_IRQENABLE_M3_OFFSET 0x10

#ifndef PRM_PER_BASE
#define PRM_PER_BASE 0x44E00C00
#endif

#define PRM_PER_RM_PER_RSTCTRL (*(volatile unsigned *)0x44E00C00)
#define PRM_PER_RM_PER_RSTCTRL_OFFSET 0x0

#define PRM_PER_RM_PER_RSTST (*(volatile unsigned *)0x44E00C04)
#define PRM_PER_RM_PER_RSTST_OFFSET 0x4

#define PRM_PER_PM_PER_PWRSTST (*(volatile unsigned *)0x44E00C08)
#define PRM_PER_PM_PER_PWRSTST_OFFSET 0x8

#define PRM_PER_PM_PER_PWRSTCTRL (*(volatile unsigned *)0x44E00C0C)
#define PRM_PER_PM_PER_PWRSTCTRL_OFFSET 0xC

#ifndef PRM_WKUP_BASE
#define PRM_WKUP_BASE 0x44E00D00
#endif

#define PRM_WKUP_RM_WKUP_RSTCTRL (*(volatile unsigned *)0x44E00D00)
#define PRM_WKUP_RM_WKUP_RSTCTRL_OFFSET 0x0

#define PRM_WKUP_PM_WKUP_PWRSTCTRL (*(volatile unsigned *)0x44E00D04)
#define PRM_WKUP_PM_WKUP_PWRSTCTRL_OFFSET 0x4

#define PRM_WKUP_PM_WKUP_PWRSTST (*(volatile unsigned *)0x44E00D08)
#define PRM_WKUP_PM_WKUP_PWRSTST_OFFSET 0x8

#define PRM_WKUP_RM_WKUP_RSTST (*(volatile unsigned *)0x44E00D0C)
#define PRM_WKUP_RM_WKUP_RSTST_OFFSET 0xC

#ifndef PRM_MPU_BASE
#define PRM_MPU_BASE 0x44E00E00
#endif

#define PRM_MPU_PM_MPU_PWRSTCTRL (*(volatile unsigned *)0x44E00E00)
#define PRM_MPU_PM_MPU_PWRSTCTRL_OFFSET 0x0

#define PRM_MPU_PM_MPU_PWRSTST (*(volatile unsigned *)0x44E00E04)
#define PRM_MPU_PM_MPU_PWRSTST_OFFSET 0x4

#define PRM_MPU_RM_MPU_RSTST (*(volatile unsigned *)0x44E00E08)
#define PRM_MPU_RM_MPU_RSTST_OFFSET 0x8

#ifndef PRM_DEVICE_BASE
#define PRM_DEVICE_BASE 0x44E00F00
#endif

#define PRM_DEVICE_PRM_RSTCTRL (*(volatile unsigned *)0x44E00F00)
#define PRM_DEVICE_PRM_RSTCTRL_OFFSET 0x0

#define PRM_DEVICE_PRM_RSTTIME (*(volatile unsigned *)0x44E00F04)
#define PRM_DEVICE_PRM_RSTTIME_OFFSET 0x4

#define PRM_DEVICE_PRM_RSTST (*(volatile unsigned *)0x44E00F08)
#define PRM_DEVICE_PRM_RSTST_OFFSET 0x8

#define PRM_DEVICE_PRM_SRAM_COUNT (*(volatile unsigned *)0x44E00F0C)
#define PRM_DEVICE_PRM_SRAM_COUNT_OFFSET 0xC

#define PRM_DEVICE_PRM_LDO_SRAM_CORE_SETUP (*(volatile unsigned *)0x44E00F10)
#define PRM_DEVICE_PRM_LDO_SRAM_CORE_SETUP_OFFSET 0x10

#define PRM_DEVICE_PRM_LDO_SRAM_CORE_CTRL (*(volatile unsigned *)0x44E00F14)
#define PRM_DEVICE_PRM_LDO_SRAM_CORE_CTRL_OFFSET 0x14

#define PRM_DEVICE_PRM_LDO_SRAM_MPU_SETUP (*(volatile unsigned *)0x44E00F18)
#define PRM_DEVICE_PRM_LDO_SRAM_MPU_SETUP_OFFSET 0x18

#define PRM_DEVICE_PRM_LDO_SRAM_MPU_CTRL (*(volatile unsigned *)0x44E00F1C)
#define PRM_DEVICE_PRM_LDO_SRAM_MPU_CTRL_OFFSET 0x1C

#ifndef PRM_RTC_BASE
#define PRM_RTC_BASE 0x44E01000
#endif

#define PRM_RTC_PM_RTC_PWRSTCTRL (*(volatile unsigned *)0x44E01000)
#define PRM_RTC_PM_RTC_PWRSTCTRL_OFFSET 0x0

#define PRM_RTC_PM_RTC_PWRSTST (*(volatile unsigned *)0x44E01004)
#define PRM_RTC_PM_RTC_PWRSTST_OFFSET 0x4

#ifndef PRM_GFX_BASE
#define PRM_GFX_BASE 0x44E01100
#endif

#define PRM_GFX_PM_GFX_PWRSTCTRL (*(volatile unsigned *)0x44E01100)
#define PRM_GFX_PM_GFX_PWRSTCTRL_OFFSET 0x0

#define PRM_GFX_RM_GFX_RSTCTRL (*(volatile unsigned *)0x44E01104)
#define PRM_GFX_RM_GFX_RSTCTRL_OFFSET 0x4

#define PRM_GFX_PM_GFX_PWRSTST (*(volatile unsigned *)0x44E01110)
#define PRM_GFX_PM_GFX_PWRSTST_OFFSET 0x10

#define PRM_GFX_RM_GFX_RSTST (*(volatile unsigned *)0x44E01114)
#define PRM_GFX_RM_GFX_RSTST_OFFSET 0x14

#ifndef PRM_CEFUSE_BASE
#define PRM_CEFUSE_BASE 0x44E01200
#endif

#define PRM_CEFUSE_PM_CEFUSE_PWRSTCTRL (*(volatile unsigned *)0x44E01200)
#define PRM_CEFUSE_PM_CEFUSE_PWRSTCTRL_OFFSET 0x0

#define PRM_CEFUSE_PM_CEFUSE_PWRSTST (*(volatile unsigned *)0x44E01204)
#define PRM_CEFUSE_PM_CEFUSE_PWRSTST_OFFSET 0x4

#ifndef DMTIMER0_BASE
#define DMTIMER0_BASE 0x44E05000
#endif

#define DMTIMER0_TIDR (*(volatile unsigned *)0x44E05000)
#define DMTIMER0_TIDR_OFFSET 0x0

#define DMTIMER0_TIOCP_CFG (*(volatile unsigned *)0x44E05010)
#define DMTIMER0_TIOCP_CFG_OFFSET 0x10

#define DMTIMER0_IRQ_EOI (*(volatile unsigned *)0x44E05020)
#define DMTIMER0_IRQ_EOI_OFFSET 0x20

#define DMTIMER0_IRQSTATUS_RAW (*(volatile unsigned *)0x44E05024)
#define DMTIMER0_IRQSTATUS_RAW_OFFSET 0x24

#define DMTIMER0_IRQSTATUS (*(volatile unsigned *)0x44E05028)
#define DMTIMER0_IRQSTATUS_OFFSET 0x28

#define DMTIMER0_IRQENABLE_SET (*(volatile unsigned *)0x44E0502C)
#define DMTIMER0_IRQENABLE_SET_OFFSET 0x2C

#define DMTIMER0_IRQENABLE_CLR (*(volatile unsigned *)0x44E05030)
#define DMTIMER0_IRQENABLE_CLR_OFFSET 0x30

#define DMTIMER0_IRQWAKEEN (*(volatile unsigned *)0x44E05034)
#define DMTIMER0_IRQWAKEEN_OFFSET 0x34

#define DMTIMER0_TCLR (*(volatile unsigned *)0x44E05038)
#define DMTIMER0_TCLR_OFFSET 0x38

#define DMTIMER0_TCRR (*(volatile unsigned *)0x44E0503C)
#define DMTIMER0_TCRR_OFFSET 0x3C

#define DMTIMER0_TLDR (*(volatile unsigned *)0x44E05040)
#define DMTIMER0_TLDR_OFFSET 0x40

#define DMTIMER0_TTGR (*(volatile unsigned *)0x44E05044)
#define DMTIMER0_TTGR_OFFSET 0x44

#define DMTIMER0_TWPS (*(volatile unsigned *)0x44E05048)
#define DMTIMER0_TWPS_OFFSET 0x48

#define DMTIMER0_TMAR (*(volatile unsigned *)0x44E0504C)
#define DMTIMER0_TMAR_OFFSET 0x4C

#define DMTIMER0_TCAR1 (*(volatile unsigned *)0x44E05050)
#define DMTIMER0_TCAR1_OFFSET 0x50

#define DMTIMER0_TSICR (*(volatile unsigned *)0x44E05054)
#define DMTIMER0_TSICR_OFFSET 0x54

#define DMTIMER0_TCAR2 (*(volatile unsigned *)0x44E05058)
#define DMTIMER0_TCAR2_OFFSET 0x58

#ifndef GPIO0_BASE
#define GPIO0_BASE 0x44E07000
#endif

#define GPIO0_REVISION (*(volatile unsigned *)0x44E07000)
#define GPIO0_REVISION_OFFSET 0x0

#define GPIO0_SYSCONFIG (*(volatile unsigned *)0x44E07010)
#define GPIO0_SYSCONFIG_OFFSET 0x10

#define GPIO0_EOI (*(volatile unsigned *)0x44E07020)
#define GPIO0_EOI_OFFSET 0x20

#define GPIO0_IRQSTATUS_RAW_0 (*(volatile unsigned *)0x44E07024)
#define GPIO0_IRQSTATUS_RAW_0_OFFSET 0x24

#define GPIO0_IRQSTATUS_RAW_1 (*(volatile unsigned *)0x44E07028)
#define GPIO0_IRQSTATUS_RAW_1_OFFSET 0x28

#define GPIO0_IRQSTATUS_0 (*(volatile unsigned *)0x44E0702C)
#define GPIO0_IRQSTATUS_0_OFFSET 0x2C

#define GPIO0_IRQSTATUS_1 (*(volatile unsigned *)0x44E07030)
#define GPIO0_IRQSTATUS_1_OFFSET 0x30

#define GPIO0_IRQSTATUS_SET_0 (*(volatile unsigned *)0x44E07034)
#define GPIO0_IRQSTATUS_SET_0_OFFSET 0x34

#define GPIO0_IRQSTATUS_SET_1 (*(volatile unsigned *)0x44E07038)
#define GPIO0_IRQSTATUS_SET_1_OFFSET 0x38

#define GPIO0_IRQSTATUS_CLR_0 (*(volatile unsigned *)0x44E0703C)
#define GPIO0_IRQSTATUS_CLR_0_OFFSET 0x3C

#define GPIO0_IRQSTATUS_CLR_1 (*(volatile unsigned *)0x44E07040)
#define GPIO0_IRQSTATUS_CLR_1_OFFSET 0x40

#define GPIO0_SYSSTATUS (*(volatile unsigned *)0x44E07114)
#define GPIO0_SYSSTATUS_OFFSET 0x114

#define GPIO0_WAKEUPENABLE (*(volatile unsigned *)0x44E07120)
#define GPIO0_WAKEUPENABLE_OFFSET 0x120

#define GPIO0_CTRL (*(volatile unsigned *)0x44E07130)
#define GPIO0_CTRL_OFFSET 0x130

#define GPIO0_OE (*(volatile unsigned *)0x44E07134)
#define GPIO0_OE_OFFSET 0x134

#define GPIO0_DATAIN (*(volatile unsigned *)0x44E07138)
#define GPIO0_DATAIN_OFFSET 0x138

#define GPIO0_DATAOUT (*(volatile unsigned *)0x44E0713C)
#define GPIO0_DATAOUT_OFFSET 0x13C

#define GPIO0_LEVELDETECT0 (*(volatile unsigned *)0x44E07140)
#define GPIO0_LEVELDETECT0_OFFSET 0x140

#define GPIO0_LEVELDETECT1 (*(volatile unsigned *)0x44E07144)
#define GPIO0_LEVELDETECT1_OFFSET 0x144

#define GPIO0_RISINGDETECT (*(volatile unsigned *)0x44E07148)
#define GPIO0_RISINGDETECT_OFFSET 0x148

#define GPIO0_FALLINGDETECT (*(volatile unsigned *)0x44E0714C)
#define GPIO0_FALLINGDETECT_OFFSET 0x14C

#define GPIO0_DEBOUNCENABLE (*(volatile unsigned *)0x44E07150)
#define GPIO0_DEBOUNCENABLE_OFFSET 0x150

#define GPIO0_DEBOUNCINGTIME (*(volatile unsigned *)0x44E07154)
#define GPIO0_DEBOUNCINGTIME_OFFSET 0x154

#define GPIO0_CLEARDATAOUT (*(volatile unsigned *)0x44E07190)
#define GPIO0_CLEARDATAOUT_OFFSET 0x190

#define GPIO0_SETDATAOUT (*(volatile unsigned *)0x44E07194)
#define GPIO0_SETDATAOUT_OFFSET 0x194

#ifndef UART0_BASE
#define UART0_BASE 0x44E09000
#endif

#define UART0_RHR_THR (*(volatile unsigned *)0x44E09000)
#define UART0_RHR_THR_OFFSET 0x0

#define UART0_IER (*(volatile unsigned *)0x44E09004)
#define UART0_IER_OFFSET 0x4

#define UART0_IIR (*(volatile unsigned *)0x44E09008)
#define UART0_IIR_OFFSET 0x8

#define UART0_LCR (*(volatile unsigned *)0x44E0900C)
#define UART0_LCR_OFFSET 0xC

#define UART0_MCR (*(volatile unsigned *)0x44E09010)
#define UART0_MCR_OFFSET 0x10

#define UART0_LSR (*(volatile unsigned *)0x44E09014)
#define UART0_LSR_OFFSET 0x14

#define UART0_MSR (*(volatile unsigned *)0x44E09018)
#define UART0_MSR_OFFSET 0x18

#define UART0_SPR (*(volatile unsigned *)0x44E0901C)
#define UART0_SPR_OFFSET 0x1C

#define UART0_MDR1 (*(volatile unsigned *)0x44E09020)
#define UART0_MDR1_OFFSET 0x20

#define UART0_MDR2 (*(volatile unsigned *)0x44E09024)
#define UART0_MDR2_OFFSET 0x24

#define UART0_SFLSR (*(volatile unsigned *)0x44E09028)
#define UART0_SFLSR_OFFSET 0x28

#define UART0_RESUME (*(volatile unsigned *)0x44E0902C)
#define UART0_RESUME_OFFSET 0x2C

#define UART0_RXFLL (*(volatile unsigned *)0x44E09030)
#define UART0_RXFLL_OFFSET 0x30

#define UART0_RXFLH (*(volatile unsigned *)0x44E09034)
#define UART0_RXFLH_OFFSET 0x34

#define UART0_BLR (*(volatile unsigned *)0x44E09038)
#define UART0_BLR_OFFSET 0x38

#define UART0_ACREG (*(volatile unsigned *)0x44E0903C)
#define UART0_ACREG_OFFSET 0x3C

#define UART0_SCR (*(volatile unsigned *)0x44E09040)
#define UART0_SCR_OFFSET 0x40

#define UART0_SSR (*(volatile unsigned *)0x44E09044)
#define UART0_SSR_OFFSET 0x44

#define UART0_EBLR (*(volatile unsigned *)0x44E09048)
#define UART0_EBLR_OFFSET 0x48

#define UART0_MVR (*(volatile unsigned *)0x44E09050)
#define UART0_MVR_OFFSET 0x50

#define UART0_SYSC (*(volatile unsigned *)0x44E09054)
#define UART0_SYSC_OFFSET 0x54

#define UART0_SYSS (*(volatile unsigned *)0x44E09058)
#define UART0_SYSS_OFFSET 0x58

#define UART0_WER (*(volatile unsigned *)0x44E0905C)
#define UART0_WER_OFFSET 0x5C

#define UART0_CFPS (*(volatile unsigned *)0x44E09060)
#define UART0_CFPS_OFFSET 0x60

#ifndef I2C0_BASE
#define I2C0_BASE 0x44E0B000
#endif

#define I2C0_REVNB_LO (*(volatile unsigned *)0x44E0B000)
#define I2C0_REVNB_LO_OFFSET 0x0

#define I2C0_REVNB_HI (*(volatile unsigned *)0x44E0B004)
#define I2C0_REVNB_HI_OFFSET 0x4

#define I2C0_SYSC (*(volatile unsigned *)0x44E0B010)
#define I2C0_SYSC_OFFSET 0x10

#define I2C0_EOI (*(volatile unsigned *)0x44E0B020)
#define I2C0_EOI_OFFSET 0x20

#define I2C0_IRQSTATUS_RAW (*(volatile unsigned *)0x44E0B024)
#define I2C0_IRQSTATUS_RAW_OFFSET 0x24

#define I2C0_IRQSTATUS (*(volatile unsigned *)0x44E0B028)
#define I2C0_IRQSTATUS_OFFSET 0x28

#define I2C0_IRQENABLE_SET (*(volatile unsigned *)0x44E0B02C)
#define I2C0_IRQENABLE_SET_OFFSET 0x2C

#define I2C0_IRQENABLE_CLR (*(volatile unsigned *)0x44E0B030)
#define I2C0_IRQENABLE_CLR_OFFSET 0x30

#define I2C0_WE (*(volatile unsigned *)0x44E0B034)
#define I2C0_WE_OFFSET 0x34

#define I2C0_DMARXENABLE_SET (*(volatile unsigned *)0x44E0B038)
#define I2C0_DMARXENABLE_SET_OFFSET 0x38

#define I2C0_DMATXENABLE_SET (*(volatile unsigned *)0x44E0B03C)
#define I2C0_DMATXENABLE_SET_OFFSET 0x3C

#define I2C0_DMARXENABLE_CLR (*(volatile unsigned *)0x44E0B040)
#define I2C0_DMARXENABLE_CLR_OFFSET 0x40

#define I2C0_DMATXENABLE_CLR (*(volatile unsigned *)0x44E0B044)
#define I2C0_DMATXENABLE_CLR_OFFSET 0x44

#define I2C0_DMARXWAKE_EN (*(volatile unsigned *)0x44E0B048)
#define I2C0_DMARXWAKE_EN_OFFSET 0x48

#define I2C0_DMATXWAKE_EN (*(volatile unsigned *)0x44E0B04C)
#define I2C0_DMATXWAKE_EN_OFFSET 0x4C

#define I2C0_SYSS (*(volatile unsigned *)0x44E0B090)
#define I2C0_SYSS_OFFSET 0x90

#define I2C0_BUF (*(volatile unsigned *)0x44E0B094)
#define I2C0_BUF_OFFSET 0x94

#define I2C0_CNT (*(volatile unsigned *)0x44E0B098)
#define I2C0_CNT_OFFSET 0x98

#define I2C0_DATA (*(volatile unsigned *)0x44E0B09C)
#define I2C0_DATA_OFFSET 0x9C

#define I2C0_CON (*(volatile unsigned *)0x44E0B0A4)
#define I2C0_CON_OFFSET 0xA4

#define I2C0_OA (*(volatile unsigned *)0x44E0B0A8)
#define I2C0_OA_OFFSET 0xA8

#define I2C0_SA (*(volatile unsigned *)0x44E0B0AC)
#define I2C0_SA_OFFSET 0xAC

#define I2C0_PSC (*(volatile unsigned *)0x44E0B0B0)
#define I2C0_PSC_OFFSET 0xB0

#define I2C0_SCLL (*(volatile unsigned *)0x44E0B0B4)
#define I2C0_SCLL_OFFSET 0xB4

#define I2C0_SCLH (*(volatile unsigned *)0x44E0B0B8)
#define I2C0_SCLH_OFFSET 0xB8

#define I2C0_SYSTEST (*(volatile unsigned *)0x44E0B0BC)
#define I2C0_SYSTEST_OFFSET 0xBC

#define I2C0_BUFSTAT (*(volatile unsigned *)0x44E0B0C0)
#define I2C0_BUFSTAT_OFFSET 0xC0

#define I2C0_OA1 (*(volatile unsigned *)0x44E0B0C4)
#define I2C0_OA1_OFFSET 0xC4

#define I2C0_OA2 (*(volatile unsigned *)0x44E0B0C8)
#define I2C0_OA2_OFFSET 0xC8

#define I2C0_OA3 (*(volatile unsigned *)0x44E0B0CC)
#define I2C0_OA3_OFFSET 0xCC

#define I2C0_ACTOA (*(volatile unsigned *)0x44E0B0D0)
#define I2C0_ACTOA_OFFSET 0xD0

#define I2C0_SBLOCK (*(volatile unsigned *)0x44E0B0D4)
#define I2C0_SBLOCK_OFFSET 0xD4

#ifndef TSC_ADC_SS_BASE
#define TSC_ADC_SS_BASE 0x44E0D000
#endif

#define TSC_ADC_SS_REVISION (*(volatile unsigned *)0x44E0D000)
#define TSC_ADC_SS_REVISION_OFFSET 0x0

#define TSC_ADC_SS_SYSCONFIG (*(volatile unsigned *)0x44E0D010)
#define TSC_ADC_SS_SYSCONFIG_OFFSET 0x10

#define TSC_ADC_SS_IRQ_EOI (*(volatile unsigned *)0x44E0D020)
#define TSC_ADC_SS_IRQ_EOI_OFFSET 0x20

#define TSC_ADC_SS_IRQSTATUS_RAW (*(volatile unsigned *)0x44E0D024)
#define TSC_ADC_SS_IRQSTATUS_RAW_OFFSET 0x24

#define TSC_ADC_SS_IRQSTATUS (*(volatile unsigned *)0x44E0D028)
#define TSC_ADC_SS_IRQSTATUS_OFFSET 0x28

#define TSC_ADC_SS_IRQENABLE_SET (*(volatile unsigned *)0x44E0D02C)
#define TSC_ADC_SS_IRQENABLE_SET_OFFSET 0x2C

#define TSC_ADC_SS_IRQENABLE_CLR (*(volatile unsigned *)0x44E0D030)
#define TSC_ADC_SS_IRQENABLE_CLR_OFFSET 0x30

#define TSC_ADC_SS_IRQWAKEUP (*(volatile unsigned *)0x44E0D034)
#define TSC_ADC_SS_IRQWAKEUP_OFFSET 0x34

#define TSC_ADC_SS_DMAENABLE_SET (*(volatile unsigned *)0x44E0D038)
#define TSC_ADC_SS_DMAENABLE_SET_OFFSET 0x38

#define TSC_ADC_SS_DMAENABLE_CLR (*(volatile unsigned *)0x44E0D03C)
#define TSC_ADC_SS_DMAENABLE_CLR_OFFSET 0x3C

#define TSC_ADC_SS_CTRL (*(volatile unsigned *)0x44E0D040)
#define TSC_ADC_SS_CTRL_OFFSET 0x40

#define TSC_ADC_SS_ADCSTAT (*(volatile unsigned *)0x44E0D044)
#define TSC_ADC_SS_ADCSTAT_OFFSET 0x44

#define TSC_ADC_SS_ADCRANGE (*(volatile unsigned *)0x44E0D048)
#define TSC_ADC_SS_ADCRANGE_OFFSET 0x48

#define TSC_ADC_SS_ADC_CLKDIV (*(volatile unsigned *)0x44E0D04C)
#define TSC_ADC_SS_ADC_CLKDIV_OFFSET 0x4C

#define TSC_ADC_SS_ADC_MISC (*(volatile unsigned *)0x44E0D050)
#define TSC_ADC_SS_ADC_MISC_OFFSET 0x50

#define TSC_ADC_SS_STEPENABLE (*(volatile unsigned *)0x44E0D054)
#define TSC_ADC_SS_STEPENABLE_OFFSET 0x54

#define TSC_ADC_SS_IDLECONFIG (*(volatile unsigned *)0x44E0D058)
#define TSC_ADC_SS_IDLECONFIG_OFFSET 0x58

#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG (*(volatile unsigned *)0x44E0D05C)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_OFFSET 0x5C

#define TSC_ADC_SS_TS_CHARGE_DELAY (*(volatile unsigned *)0x44E0D060)
#define TSC_ADC_SS_TS_CHARGE_DELAY_OFFSET 0x60

#define TSC_ADC_SS_STEPCONFIG1 (*(volatile unsigned *)0x44E0D064)
#define TSC_ADC_SS_STEPCONFIG1_OFFSET 0x64

#define TSC_ADC_SS_STEPDELAY1 (*(volatile unsigned *)0x44E0D068)
#define TSC_ADC_SS_STEPDELAY1_OFFSET 0x68

#define TSC_ADC_SS_STEPCONFIG2 (*(volatile unsigned *)0x44E0D06C)
#define TSC_ADC_SS_STEPCONFIG2_OFFSET 0x6C

#define TSC_ADC_SS_STEPDELAY2 (*(volatile unsigned *)0x44E0D070)
#define TSC_ADC_SS_STEPDELAY2_OFFSET 0x70

#define TSC_ADC_SS_STEPCONFIG3 (*(volatile unsigned *)0x44E0D074)
#define TSC_ADC_SS_STEPCONFIG3_OFFSET 0x74

#define TSC_ADC_SS_STEPDELAY3 (*(volatile unsigned *)0x44E0D078)
#define TSC_ADC_SS_STEPDELAY3_OFFSET 0x78

#define TSC_ADC_SS_STEPCONFIG4 (*(volatile unsigned *)0x44E0D07C)
#define TSC_ADC_SS_STEPCONFIG4_OFFSET 0x7C

#define TSC_ADC_SS_STEPDELAY4 (*(volatile unsigned *)0x44E0D080)
#define TSC_ADC_SS_STEPDELAY4_OFFSET 0x80

#define TSC_ADC_SS_STEPCONFIG5 (*(volatile unsigned *)0x44E0D084)
#define TSC_ADC_SS_STEPCONFIG5_OFFSET 0x84

#define TSC_ADC_SS_STEPDELAY5 (*(volatile unsigned *)0x44E0D088)
#define TSC_ADC_SS_STEPDELAY5_OFFSET 0x88

#define TSC_ADC_SS_STEPCONFIG6 (*(volatile unsigned *)0x44E0D08C)
#define TSC_ADC_SS_STEPCONFIG6_OFFSET 0x8C

#define TSC_ADC_SS_STEPDELAY6 (*(volatile unsigned *)0x44E0D090)
#define TSC_ADC_SS_STEPDELAY6_OFFSET 0x90

#define TSC_ADC_SS_STEPCONFIG7 (*(volatile unsigned *)0x44E0D094)
#define TSC_ADC_SS_STEPCONFIG7_OFFSET 0x94

#define TSC_ADC_SS_STEPDELAY7 (*(volatile unsigned *)0x44E0D098)
#define TSC_ADC_SS_STEPDELAY7_OFFSET 0x98

#define TSC_ADC_SS_STEPCONFIG8 (*(volatile unsigned *)0x44E0D09C)
#define TSC_ADC_SS_STEPCONFIG8_OFFSET 0x9C

#define TSC_ADC_SS_STEPDELAY8 (*(volatile unsigned *)0x44E0D0A0)
#define TSC_ADC_SS_STEPDELAY8_OFFSET 0xA0

#define TSC_ADC_SS_STEPCONFIG9 (*(volatile unsigned *)0x44E0D0A4)
#define TSC_ADC_SS_STEPCONFIG9_OFFSET 0xA4

#define TSC_ADC_SS_STEPDELAY9 (*(volatile unsigned *)0x44E0D0A8)
#define TSC_ADC_SS_STEPDELAY9_OFFSET 0xA8

#define TSC_ADC_SS_STEPCONFIG10 (*(volatile unsigned *)0x44E0D0AC)
#define TSC_ADC_SS_STEPCONFIG10_OFFSET 0xAC

#define TSC_ADC_SS_STEPDELAY10 (*(volatile unsigned *)0x44E0D0B0)
#define TSC_ADC_SS_STEPDELAY10_OFFSET 0xB0

#define TSC_ADC_SS_STEPCONFIG11 (*(volatile unsigned *)0x44E0D0B4)
#define TSC_ADC_SS_STEPCONFIG11_OFFSET 0xB4

#define TSC_ADC_SS_STEPDELAY11 (*(volatile unsigned *)0x44E0D0B8)
#define TSC_ADC_SS_STEPDELAY11_OFFSET 0xB8

#define TSC_ADC_SS_STEPCONFIG12 (*(volatile unsigned *)0x44E0D0BC)
#define TSC_ADC_SS_STEPCONFIG12_OFFSET 0xBC

#define TSC_ADC_SS_STEPDELAY12 (*(volatile unsigned *)0x44E0D0C0)
#define TSC_ADC_SS_STEPDELAY12_OFFSET 0xC0

#define TSC_ADC_SS_STEPCONFIG13 (*(volatile unsigned *)0x44E0D0C4)
#define TSC_ADC_SS_STEPCONFIG13_OFFSET 0xC4

#define TSC_ADC_SS_STEPDELAY13 (*(volatile unsigned *)0x44E0D0C8)
#define TSC_ADC_SS_STEPDELAY13_OFFSET 0xC8

#define TSC_ADC_SS_STEPCONFIG14 (*(volatile unsigned *)0x44E0D0CC)
#define TSC_ADC_SS_STEPCONFIG14_OFFSET 0xCC

#define TSC_ADC_SS_STEPDELAY14 (*(volatile unsigned *)0x44E0D0D0)
#define TSC_ADC_SS_STEPDELAY14_OFFSET 0xD0

#define TSC_ADC_SS_STEPCONFIG15 (*(volatile unsigned *)0x44E0D0D4)
#define TSC_ADC_SS_STEPCONFIG15_OFFSET 0xD4

#define TSC_ADC_SS_STEPDELAY15 (*(volatile unsigned *)0x44E0D0D8)
#define TSC_ADC_SS_STEPDELAY15_OFFSET 0xD8

#define TSC_ADC_SS_STEPCONFIG16 (*(volatile unsigned *)0x44E0D0DC)
#define TSC_ADC_SS_STEPCONFIG16_OFFSET 0xDC

#define TSC_ADC_SS_STEPDELAY16 (*(volatile unsigned *)0x44E0D0E0)
#define TSC_ADC_SS_STEPDELAY16_OFFSET 0xE0

#define TSC_ADC_SS_FIFO0COUNT (*(volatile unsigned *)0x44E0D0E4)
#define TSC_ADC_SS_FIFO0COUNT_OFFSET 0xE4

#define TSC_ADC_SS_FIFO0THRESHOLD (*(volatile unsigned *)0x44E0D0E8)
#define TSC_ADC_SS_FIFO0THRESHOLD_OFFSET 0xE8

#define TSC_ADC_SS_DMA0REQ (*(volatile unsigned *)0x44E0D0EC)
#define TSC_ADC_SS_DMA0REQ_OFFSET 0xEC

#define TSC_ADC_SS_FIFO0DATA (*(volatile unsigned *)0x44E0D100)
#define TSC_ADC_SS_FIFO0DATA_OFFSET 0x100

#define TSC_ADC_SS_FIFO1COUNT (*(volatile unsigned *)0x44E0D0F0)
#define TSC_ADC_SS_FIFO1COUNT_OFFSET 0xF0

#define TSC_ADC_SS_FIFO1THRESHOLD (*(volatile unsigned *)0x44E0D0F4)
#define TSC_ADC_SS_FIFO1THRESHOLD_OFFSET 0xF4

#define TSC_ADC_SS_DMA1REQ (*(volatile unsigned *)0x44E0D0F8)
#define TSC_ADC_SS_DMA1REQ_OFFSET 0xF8

#define TSC_ADC_SS_FIFO1DATA (*(volatile unsigned *)0x44E0D200)
#define TSC_ADC_SS_FIFO1DATA_OFFSET 0x200

#ifndef CONTROL_BASE
#define CONTROL_BASE 0x44E10000
#endif

#define CONTROL_REVISION (*(volatile unsigned *)0x44E10000)
#define CONTROL_REVISION_OFFSET 0x0

#define CONTROL_HWINFO (*(volatile unsigned *)0x44E10004)
#define CONTROL_HWINFO_OFFSET 0x4

#define CONTROL_SYSCONFIG (*(volatile unsigned *)0x44E10010)
#define CONTROL_SYSCONFIG_OFFSET 0x10

#define CONTROL_STATUS (*(volatile unsigned *)0x44E10040)
#define CONTROL_STATUS_OFFSET 0x40

#define CONTROL_CORTEX_VBBLDO_CTRL (*(volatile unsigned *)0x44E1041C)
#define CONTROL_CORTEX_VBBLDO_CTRL_OFFSET 0x41C

#define CONTROL_CORE_SLDO_CTRL (*(volatile unsigned *)0x44E10428)
#define CONTROL_CORE_SLDO_CTRL_OFFSET 0x428

#define CONTROL_MPU_SLDO_CTRL (*(volatile unsigned *)0x44E1042C)
#define CONTROL_MPU_SLDO_CTRL_OFFSET 0x42C

#define CONTROL_REFCLK_LJCBLDO_CTRL (*(volatile unsigned *)0x44E10440)
#define CONTROL_REFCLK_LJCBLDO_CTRL_OFFSET 0x440

#define CONTROL_CLK32KDIVRATIO_CTRL (*(volatile unsigned *)0x44E10444)
#define CONTROL_CLK32KDIVRATIO_CTRL_OFFSET 0x444

#define CONTROL_BANDGAP_CTRL (*(volatile unsigned *)0x44E10448)
#define CONTROL_BANDGAP_CTRL_OFFSET 0x448

#define CONTROL_BANDGAP_TRIM (*(volatile unsigned *)0x44E1044C)
#define CONTROL_BANDGAP_TRIM_OFFSET 0x44C

#define CONTROL_PLL_CLKINPULOW_CTRL (*(volatile unsigned *)0x44E10458)
#define CONTROL_PLL_CLKINPULOW_CTRL_OFFSET 0x458

#define CONTROL_MOSC_CTRL (*(volatile unsigned *)0x44E10468)
#define CONTROL_MOSC_CTRL_OFFSET 0x468

#define CONTROL_RCOSC_CTRL (*(volatile unsigned *)0x44E1046C)
#define CONTROL_RCOSC_CTRL_OFFSET 0x46C

#define CONTROL_DEEPSLEEP_CTRL (*(volatile unsigned *)0x44E10470)
#define CONTROL_DEEPSLEEP_CTRL_OFFSET 0x470

#define CONTROL_DEVICE_ID (*(volatile unsigned *)0x44E10600)
#define CONTROL_DEVICE_ID_OFFSET 0x600

#define CONTROL_DEV_FEATURE (*(volatile unsigned *)0x44E10604)
#define CONTROL_DEV_FEATURE_OFFSET 0x604

#define CONTROL_INIT_PRIORITY_0 (*(volatile unsigned *)0x44E10608)
#define CONTROL_INIT_PRIORITY_0_OFFSET 0x608

#define CONTROL_INIT_PRIORITY_1 (*(volatile unsigned *)0x44E1060C)
#define CONTROL_INIT_PRIORITY_1_OFFSET 0x60C

#define CONTROL_MMU_CFG (*(volatile unsigned *)0x44E10610)
#define CONTROL_MMU_CFG_OFFSET 0x610

#define CONTROL_TPTC_CFG (*(volatile unsigned *)0x44E10614)
#define CONTROL_TPTC_CFG_OFFSET 0x614

#define CONTROL_OCMC_CFG (*(volatile unsigned *)0x44E10618)
#define CONTROL_OCMC_CFG_OFFSET 0x618

#define CONTROL_USB_CTRL0 (*(volatile unsigned *)0x44E10620)
#define CONTROL_USB_CTRL0_OFFSET 0x620

#define CONTROL_USB_STS0 (*(volatile unsigned *)0x44E10624)
#define CONTROL_USB_STS0_OFFSET 0x624

#define CONTROL_USB_CTRL1 (*(volatile unsigned *)0x44E10628)
#define CONTROL_USB_CTRL1_OFFSET 0x628

#define CONTROL_USB_STS1 (*(volatile unsigned *)0x44E1062C)
#define CONTROL_USB_STS1_OFFSET 0x62C

#define CONTROL_MAC_ID0_LO (*(volatile unsigned *)0x44E10630)
#define CONTROL_MAC_ID0_LO_OFFSET 0x630

#define CONTROL_MAC_ID0_HI (*(volatile unsigned *)0x44E10634)
#define CONTROL_MAC_ID0_HI_OFFSET 0x634

#define CONTROL_MAC_ID1_LO (*(volatile unsigned *)0x44E10638)
#define CONTROL_MAC_ID1_LO_OFFSET 0x638

#define CONTROL_MAC_ID1_HI (*(volatile unsigned *)0x44E1063C)
#define CONTROL_MAC_ID1_HI_OFFSET 0x63C

#define CONTROL_DCAN_RAMINIT (*(volatile unsigned *)0x44E10644)
#define CONTROL_DCAN_RAMINIT_OFFSET 0x644

#define CONTROL_USB_WKUP_CTRL (*(volatile unsigned *)0x44E10648)
#define CONTROL_USB_WKUP_CTRL_OFFSET 0x648

#define CONTROL_GMII_SEL (*(volatile unsigned *)0x44E10650)
#define CONTROL_GMII_SEL_OFFSET 0x650

#define CONTROL_PWMSS_CTRL (*(volatile unsigned *)0x44E10664)
#define CONTROL_PWMSS_CTRL_OFFSET 0x664

#define CONTROL_MREQPRIO_0 (*(volatile unsigned *)0x44E10670)
#define CONTROL_MREQPRIO_0_OFFSET 0x670

#define CONTROL_MREQPRIO_1 (*(volatile unsigned *)0x44E10674)
#define CONTROL_MREQPRIO_1_OFFSET 0x674

#define CONTROL_HW_EVENT_SEL_GRP1 (*(volatile unsigned *)0x44E10690)
#define CONTROL_HW_EVENT_SEL_GRP1_OFFSET 0x690

#define CONTROL_HW_EVENT_SEL_GRP2 (*(volatile unsigned *)0x44E10694)
#define CONTROL_HW_EVENT_SEL_GRP2_OFFSET 0x694

#define CONTROL_HW_EVENT_SEL_GRP3 (*(volatile unsigned *)0x44E10698)
#define CONTROL_HW_EVENT_SEL_GRP3_OFFSET 0x698

#define CONTROL_HW_EVENT_SEL_GRP4 (*(volatile unsigned *)0x44E1069C)
#define CONTROL_HW_EVENT_SEL_GRP4_OFFSET 0x69C

#define CONTROL_SMRT_CTRL (*(volatile unsigned *)0x44E106A0)
#define CONTROL_SMRT_CTRL_OFFSET 0x6A0

#define CONTROL_SABTOOTH_HW_DEBUG_SEL (*(volatile unsigned *)0x44E106A4)
#define CONTROL_SABTOOTH_HW_DEBUG_SEL_OFFSET 0x6A4

#define CONTROL_SABTOOTH_HW_DBG_INFO (*(volatile unsigned *)0x44E106A8)
#define CONTROL_SABTOOTH_HW_DBG_INFO_OFFSET 0x6A8

#define CONTROL_VDD_MPU_OPP_050 (*(volatile unsigned *)0x44E10770)
#define CONTROL_VDD_MPU_OPP_050_OFFSET 0x770

#define CONTROL_VDD_MPU_OPP_100 (*(volatile unsigned *)0x44E10774)
#define CONTROL_VDD_MPU_OPP_100_OFFSET 0x774

#define CONTROL_VDD_MPU_OPP_120 (*(volatile unsigned *)0x44E10778)
#define CONTROL_VDD_MPU_OPP_120_OFFSET 0x778

#define CONTROL_VDD_MPU_OPP_TURBO (*(volatile unsigned *)0x44E1077C)
#define CONTROL_VDD_MPU_OPP_TURBO_OFFSET 0x77C

#define CONTROL_VDD_CORE_OPP_050 (*(volatile unsigned *)0x44E107B8)
#define CONTROL_VDD_CORE_OPP_050_OFFSET 0x7B8

#define CONTROL_VDD_CORE_OPP_100 (*(volatile unsigned *)0x44E107BC)
#define CONTROL_VDD_CORE_OPP_100_OFFSET 0x7BC

#define CONTROL_BB_SCALE (*(volatile unsigned *)0x44E107D0)
#define CONTROL_BB_SCALE_OFFSET 0x7D0

#define CONTROL_USB_VID_PID (*(volatile unsigned *)0x44E107F4)
#define CONTROL_USB_VID_PID_OFFSET 0x7F4

#define CONTROL_EFUSE_SMA (*(volatile unsigned *)0x44E107FC)
#define CONTROL_EFUSE_SMA_OFFSET 0x7FC

#define CONTROL_CONF_GPMC_AD0 (*(volatile unsigned *)0x44E10800)
#define CONTROL_CONF_GPMC_AD0_OFFSET 0x800

#define CONTROL_CONF_GPMC_AD1 (*(volatile unsigned *)0x44E10804)
#define CONTROL_CONF_GPMC_AD1_OFFSET 0x804

#define CONTROL_CONF_GPMC_AD2 (*(volatile unsigned *)0x44E10808)
#define CONTROL_CONF_GPMC_AD2_OFFSET 0x808

#define CONTROL_CONF_GPMC_AD3 (*(volatile unsigned *)0x44E1080C)
#define CONTROL_CONF_GPMC_AD3_OFFSET 0x80C

#define CONTROL_CONF_GPMC_AD4 (*(volatile unsigned *)0x44E10810)
#define CONTROL_CONF_GPMC_AD4_OFFSET 0x810

#define CONTROL_CONF_GPMC_AD5 (*(volatile unsigned *)0x44E10814)
#define CONTROL_CONF_GPMC_AD5_OFFSET 0x814

#define CONTROL_CONF_GPMC_AD6 (*(volatile unsigned *)0x44E10818)
#define CONTROL_CONF_GPMC_AD6_OFFSET 0x818

#define CONTROL_CONF_GPMC_AD7 (*(volatile unsigned *)0x44E1081C)
#define CONTROL_CONF_GPMC_AD7_OFFSET 0x81C

#define CONTROL_CONF_GPMC_AD8 (*(volatile unsigned *)0x44E10820)
#define CONTROL_CONF_GPMC_AD8_OFFSET 0x820

#define CONTROL_CONF_GPMC_AD9 (*(volatile unsigned *)0x44E10824)
#define CONTROL_CONF_GPMC_AD9_OFFSET 0x824

#define CONTROL_CONF_GPMC_AD10 (*(volatile unsigned *)0x44E10828)
#define CONTROL_CONF_GPMC_AD10_OFFSET 0x828

#define CONTROL_CONF_GPMC_AD11 (*(volatile unsigned *)0x44E1082C)
#define CONTROL_CONF_GPMC_AD11_OFFSET 0x82C

#define CONTROL_CONF_GPMC_AD12 (*(volatile unsigned *)0x44E10830)
#define CONTROL_CONF_GPMC_AD12_OFFSET 0x830

#define CONTROL_CONF_GPMC_AD13 (*(volatile unsigned *)0x44E10834)
#define CONTROL_CONF_GPMC_AD13_OFFSET 0x834

#define CONTROL_CONF_GPMC_AD14 (*(volatile unsigned *)0x44E10838)
#define CONTROL_CONF_GPMC_AD14_OFFSET 0x838

#define CONTROL_CONF_GPMC_AD15 (*(volatile unsigned *)0x44E1083C)
#define CONTROL_CONF_GPMC_AD15_OFFSET 0x83C

#define CONTROL_CONF_GPMC_A0 (*(volatile unsigned *)0x44E10840)
#define CONTROL_CONF_GPMC_A0_OFFSET 0x840

#define CONTROL_CONF_GPMC_A1 (*(volatile unsigned *)0x44E10844)
#define CONTROL_CONF_GPMC_A1_OFFSET 0x844

#define CONTROL_CONF_GPMC_A2 (*(volatile unsigned *)0x44E10848)
#define CONTROL_CONF_GPMC_A2_OFFSET 0x848

#define CONTROL_CONF_GPMC_A3 (*(volatile unsigned *)0x44E1084C)
#define CONTROL_CONF_GPMC_A3_OFFSET 0x84C

#define CONTROL_CONF_GPMC_A4 (*(volatile unsigned *)0x44E10850)
#define CONTROL_CONF_GPMC_A4_OFFSET 0x850

#define CONTROL_CONF_GPMC_A5 (*(volatile unsigned *)0x44E10854)
#define CONTROL_CONF_GPMC_A5_OFFSET 0x854

#define CONTROL_CONF_GPMC_A6 (*(volatile unsigned *)0x44E10858)
#define CONTROL_CONF_GPMC_A6_OFFSET 0x858

#define CONTROL_CONF_GPMC_A7 (*(volatile unsigned *)0x44E1085C)
#define CONTROL_CONF_GPMC_A7_OFFSET 0x85C

#define CONTROL_CONF_GPMC_A8 (*(volatile unsigned *)0x44E10860)
#define CONTROL_CONF_GPMC_A8_OFFSET 0x860

#define CONTROL_CONF_GPMC_A9 (*(volatile unsigned *)0x44E10864)
#define CONTROL_CONF_GPMC_A9_OFFSET 0x864

#define CONTROL_CONF_GPMC_A10 (*(volatile unsigned *)0x44E10868)
#define CONTROL_CONF_GPMC_A10_OFFSET 0x868

#define CONTROL_CONF_GPMC_A11 (*(volatile unsigned *)0x44E1086C)
#define CONTROL_CONF_GPMC_A11_OFFSET 0x86C

#define CONTROL_CONF_GPMC_WAIT0 (*(volatile unsigned *)0x44E10870)
#define CONTROL_CONF_GPMC_WAIT0_OFFSET 0x870

#define CONTROL_CONF_GPMC_WPN (*(volatile unsigned *)0x44E10874)
#define CONTROL_CONF_GPMC_WPN_OFFSET 0x874

#define CONTROL_CONF_GPMC_BE1N (*(volatile unsigned *)0x44E10878)
#define CONTROL_CONF_GPMC_BE1N_OFFSET 0x878

#define CONTROL_CONF_GPMC_CSN0 (*(volatile unsigned *)0x44E1087C)
#define CONTROL_CONF_GPMC_CSN0_OFFSET 0x87C

#define CONTROL_CONF_GPMC_CSN1 (*(volatile unsigned *)0x44E10880)
#define CONTROL_CONF_GPMC_CSN1_OFFSET 0x880

#define CONTROL_CONF_GPMC_CSN2 (*(volatile unsigned *)0x44E10884)
#define CONTROL_CONF_GPMC_CSN2_OFFSET 0x884

#define CONTROL_CONF_GPMC_CSN3 (*(volatile unsigned *)0x44E10888)
#define CONTROL_CONF_GPMC_CSN3_OFFSET 0x888

#define CONTROL_CONF_GPMC_CLK (*(volatile unsigned *)0x44E1088C)
#define CONTROL_CONF_GPMC_CLK_OFFSET 0x88C

#define CONTROL_CONF_GPMC_ADVN_ALE (*(volatile unsigned *)0x44E10890)
#define CONTROL_CONF_GPMC_ADVN_ALE_OFFSET 0x890

#define CONTROL_CONF_GPMC_OEN_REN (*(volatile unsigned *)0x44E10894)
#define CONTROL_CONF_GPMC_OEN_REN_OFFSET 0x894

#define CONTROL_CONF_GPMC_WEN (*(volatile unsigned *)0x44E10898)
#define CONTROL_CONF_GPMC_WEN_OFFSET 0x898

#define CONTROL_CONF_GPMC_BE0N_CLE (*(volatile unsigned *)0x44E1089C)
#define CONTROL_CONF_GPMC_BE0N_CLE_OFFSET 0x89C

#define CONTROL_CONF_LCD_DATA0 (*(volatile unsigned *)0x44E108A0)
#define CONTROL_CONF_LCD_DATA0_OFFSET 0x8A0

#define CONTROL_CONF_LCD_DATA1 (*(volatile unsigned *)0x44E108A4)
#define CONTROL_CONF_LCD_DATA1_OFFSET 0x8A4

#define CONTROL_CONF_LCD_DATA2 (*(volatile unsigned *)0x44E108A8)
#define CONTROL_CONF_LCD_DATA2_OFFSET 0x8A8

#define CONTROL_CONF_LCD_DATA3 (*(volatile unsigned *)0x44E108AC)
#define CONTROL_CONF_LCD_DATA3_OFFSET 0x8AC

#define CONTROL_CONF_LCD_DATA4 (*(volatile unsigned *)0x44E108B0)
#define CONTROL_CONF_LCD_DATA4_OFFSET 0x8B0

#define CONTROL_CONF_LCD_DATA5 (*(volatile unsigned *)0x44E108B4)
#define CONTROL_CONF_LCD_DATA5_OFFSET 0x8B4

#define CONTROL_CONF_LCD_DATA6 (*(volatile unsigned *)0x44E108B8)
#define CONTROL_CONF_LCD_DATA6_OFFSET 0x8B8

#define CONTROL_CONF_LCD_DATA7 (*(volatile unsigned *)0x44E108BC)
#define CONTROL_CONF_LCD_DATA7_OFFSET 0x8BC

#define CONTROL_CONF_LCD_DATA8 (*(volatile unsigned *)0x44E108C0)
#define CONTROL_CONF_LCD_DATA8_OFFSET 0x8C0

#define CONTROL_CONF_LCD_DATA9 (*(volatile unsigned *)0x44E108C4)
#define CONTROL_CONF_LCD_DATA9_OFFSET 0x8C4

#define CONTROL_CONF_LCD_DATA10 (*(volatile unsigned *)0x44E108C8)
#define CONTROL_CONF_LCD_DATA10_OFFSET 0x8C8

#define CONTROL_CONF_LCD_DATA11 (*(volatile unsigned *)0x44E108CC)
#define CONTROL_CONF_LCD_DATA11_OFFSET 0x8CC

#define CONTROL_CONF_LCD_DATA12 (*(volatile unsigned *)0x44E108D0)
#define CONTROL_CONF_LCD_DATA12_OFFSET 0x8D0

#define CONTROL_CONF_LCD_DATA13 (*(volatile unsigned *)0x44E108D4)
#define CONTROL_CONF_LCD_DATA13_OFFSET 0x8D4

#define CONTROL_CONF_LCD_DATA14 (*(volatile unsigned *)0x44E108D8)
#define CONTROL_CONF_LCD_DATA14_OFFSET 0x8D8

#define CONTROL_CONF_LCD_DATA15 (*(volatile unsigned *)0x44E108DC)
#define CONTROL_CONF_LCD_DATA15_OFFSET 0x8DC

#define CONTROL_CONF_LCD_VSYNC (*(volatile unsigned *)0x44E108E0)
#define CONTROL_CONF_LCD_VSYNC_OFFSET 0x8E0

#define CONTROL_CONF_LCD_HSYNC (*(volatile unsigned *)0x44E108E4)
#define CONTROL_CONF_LCD_HSYNC_OFFSET 0x8E4

#define CONTROL_CONF_LCD_PCLK (*(volatile unsigned *)0x44E108E8)
#define CONTROL_CONF_LCD_PCLK_OFFSET 0x8E8

#define CONTROL_CONF_LCD_AC_BIAS_EN (*(volatile unsigned *)0x44E108EC)
#define CONTROL_CONF_LCD_AC_BIAS_EN_OFFSET 0x8EC

#define CONTROL_CONF_MMC0_DAT3 (*(volatile unsigned *)0x44E108F0)
#define CONTROL_CONF_MMC0_DAT3_OFFSET 0x8F0

#define CONTROL_CONF_MMC0_DAT2 (*(volatile unsigned *)0x44E108F4)
#define CONTROL_CONF_MMC0_DAT2_OFFSET 0x8F4

#define CONTROL_CONF_MMC0_DAT1 (*(volatile unsigned *)0x44E108F8)
#define CONTROL_CONF_MMC0_DAT1_OFFSET 0x8F8

#define CONTROL_CONF_MMC0_DAT0 (*(volatile unsigned *)0x44E108FC)
#define CONTROL_CONF_MMC0_DAT0_OFFSET 0x8FC

#define CONTROL_CONF_MMC0_CLK (*(volatile unsigned *)0x44E10900)
#define CONTROL_CONF_MMC0_CLK_OFFSET 0x900

#define CONTROL_CONF_MMC0_CMD (*(volatile unsigned *)0x44E10904)
#define CONTROL_CONF_MMC0_CMD_OFFSET 0x904

#define CONTROL_CONF_MII1_COL (*(volatile unsigned *)0x44E10908)
#define CONTROL_CONF_MII1_COL_OFFSET 0x908

#define CONTROL_CONF_MII1_CRS (*(volatile unsigned *)0x44E1090C)
#define CONTROL_CONF_MII1_CRS_OFFSET 0x90C

#define CONTROL_CONF_MII1_RXERR (*(volatile unsigned *)0x44E10910)
#define CONTROL_CONF_MII1_RXERR_OFFSET 0x910

#define CONTROL_CONF_MII1_TXEN (*(volatile unsigned *)0x44E10914)
#define CONTROL_CONF_MII1_TXEN_OFFSET 0x914

#define CONTROL_CONF_MII1_RXDV (*(volatile unsigned *)0x44E10918)
#define CONTROL_CONF_MII1_RXDV_OFFSET 0x918

#define CONTROL_CONF_MII1_TXD3 (*(volatile unsigned *)0x44E1091C)
#define CONTROL_CONF_MII1_TXD3_OFFSET 0x91C

#define CONTROL_CONF_MII1_TXD2 (*(volatile unsigned *)0x44E10920)
#define CONTROL_CONF_MII1_TXD2_OFFSET 0x920

#define CONTROL_CONF_MII1_TXD1 (*(volatile unsigned *)0x44E10924)
#define CONTROL_CONF_MII1_TXD1_OFFSET 0x924

#define CONTROL_CONF_MII1_TXD0 (*(volatile unsigned *)0x44E10928)
#define CONTROL_CONF_MII1_TXD0_OFFSET 0x928

#define CONTROL_CONF_MII1_TXCLK (*(volatile unsigned *)0x44E1092C)
#define CONTROL_CONF_MII1_TXCLK_OFFSET 0x92C

#define CONTROL_CONF_MII1_RXCLK (*(volatile unsigned *)0x44E10930)
#define CONTROL_CONF_MII1_RXCLK_OFFSET 0x930

#define CONTROL_CONF_MII1_RXD3 (*(volatile unsigned *)0x44E10934)
#define CONTROL_CONF_MII1_RXD3_OFFSET 0x934

#define CONTROL_CONF_MII1_RXD2 (*(volatile unsigned *)0x44E10938)
#define CONTROL_CONF_MII1_RXD2_OFFSET 0x938

#define CONTROL_CONF_MII1_RXD1 (*(volatile unsigned *)0x44E1093C)
#define CONTROL_CONF_MII1_RXD1_OFFSET 0x93C

#define CONTROL_CONF_MII1_RXD0 (*(volatile unsigned *)0x44E10940)
#define CONTROL_CONF_MII1_RXD0_OFFSET 0x940

#define CONTROL_CONF_RMII1_REFCLK (*(volatile unsigned *)0x44E10944)
#define CONTROL_CONF_RMII1_REFCLK_OFFSET 0x944

#define CONTROL_CONF_MDIO_DATA (*(volatile unsigned *)0x44E10948)
#define CONTROL_CONF_MDIO_DATA_OFFSET 0x948

#define CONTROL_CONF_MDIO_CLK (*(volatile unsigned *)0x44E1094C)
#define CONTROL_CONF_MDIO_CLK_OFFSET 0x94C

#define CONTROL_CONF_SPI0_SCLK (*(volatile unsigned *)0x44E10950)
#define CONTROL_CONF_SPI0_SCLK_OFFSET 0x950

#define CONTROL_CONF_SPI0_D0 (*(volatile unsigned *)0x44E10954)
#define CONTROL_CONF_SPI0_D0_OFFSET 0x954

#define CONTROL_CONF_SPI0_D1 (*(volatile unsigned *)0x44E10958)
#define CONTROL_CONF_SPI0_D1_OFFSET 0x958

#define CONTROL_CONF_SPI0_CS0 (*(volatile unsigned *)0x44E1095C)
#define CONTROL_CONF_SPI0_CS0_OFFSET 0x95C

#define CONTROL_CONF_SPI0_CS1 (*(volatile unsigned *)0x44E10960)
#define CONTROL_CONF_SPI0_CS1_OFFSET 0x960

#define CONTROL_CONF_ECAP0_IN_PWM0_OUT (*(volatile unsigned *)0x44E10964)
#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_OFFSET 0x964

#define CONTROL_CONF_UART0_CTSN (*(volatile unsigned *)0x44E10968)
#define CONTROL_CONF_UART0_CTSN_OFFSET 0x968

#define CONTROL_CONF_UART0_RTSN (*(volatile unsigned *)0x44E1096C)
#define CONTROL_CONF_UART0_RTSN_OFFSET 0x96C

#define CONTROL_CONF_UART0_RXD (*(volatile unsigned *)0x44E10970)
#define CONTROL_CONF_UART0_RXD_OFFSET 0x970

#define CONTROL_CONF_UART0_TXD (*(volatile unsigned *)0x44E10974)
#define CONTROL_CONF_UART0_TXD_OFFSET 0x974

#define CONTROL_CONF_UART1_CTSN (*(volatile unsigned *)0x44E10978)
#define CONTROL_CONF_UART1_CTSN_OFFSET 0x978

#define CONTROL_CONF_UART1_RTSN (*(volatile unsigned *)0x44E1097C)
#define CONTROL_CONF_UART1_RTSN_OFFSET 0x97C

#define CONTROL_CONF_UART1_RXD (*(volatile unsigned *)0x44E10980)
#define CONTROL_CONF_UART1_RXD_OFFSET 0x980

#define CONTROL_CONF_UART1_TXD (*(volatile unsigned *)0x44E10984)
#define CONTROL_CONF_UART1_TXD_OFFSET 0x984

#define CONTROL_CONF_I2C0_SDA (*(volatile unsigned *)0x44E10988)
#define CONTROL_CONF_I2C0_SDA_OFFSET 0x988

#define CONTROL_CONF_I2C0_SCL (*(volatile unsigned *)0x44E1098C)
#define CONTROL_CONF_I2C0_SCL_OFFSET 0x98C

#define CONTROL_CONF_MCASP0_ACLKX (*(volatile unsigned *)0x44E10990)
#define CONTROL_CONF_MCASP0_ACLKX_OFFSET 0x990

#define CONTROL_CONF_MCASP0_FSX (*(volatile unsigned *)0x44E10994)
#define CONTROL_CONF_MCASP0_FSX_OFFSET 0x994

#define CONTROL_CONF_MCASP0_AXR0 (*(volatile unsigned *)0x44E10998)
#define CONTROL_CONF_MCASP0_AXR0_OFFSET 0x998

#define CONTROL_CONF_MCASP0_AHCLKR (*(volatile unsigned *)0x44E1099C)
#define CONTROL_CONF_MCASP0_AHCLKR_OFFSET 0x99C

#define CONTROL_CONF_MCASP0_ACLKR (*(volatile unsigned *)0x44E109A0)
#define CONTROL_CONF_MCASP0_ACLKR_OFFSET 0x9A0

#define CONTROL_CONF_MCASP0_FSR (*(volatile unsigned *)0x44E109A4)
#define CONTROL_CONF_MCASP0_FSR_OFFSET 0x9A4

#define CONTROL_CONF_MCASP0_AXR1 (*(volatile unsigned *)0x44E109A8)
#define CONTROL_CONF_MCASP0_AXR1_OFFSET 0x9A8

#define CONTROL_CONF_MCASP0_AHCLKX (*(volatile unsigned *)0x44E109AC)
#define CONTROL_CONF_MCASP0_AHCLKX_OFFSET 0x9AC

#define CONTROL_CONF_XDMA_EVENT_INTR0 (*(volatile unsigned *)0x44E109B0)
#define CONTROL_CONF_XDMA_EVENT_INTR0_OFFSET 0x9B0

#define CONTROL_CONF_XDMA_EVENT_INTR1 (*(volatile unsigned *)0x44E109B4)
#define CONTROL_CONF_XDMA_EVENT_INTR1_OFFSET 0x9B4

#define CONTROL_CONF_NRESETIN_OUT (*(volatile unsigned *)0x44E109B8)
#define CONTROL_CONF_NRESETIN_OUT_OFFSET 0x9B8

#define CONTROL_CONF_PORZ (*(volatile unsigned *)0x44E109BC)
#define CONTROL_CONF_PORZ_OFFSET 0x9BC

#define CONTROL_CONF_NNMI (*(volatile unsigned *)0x44E109C0)
#define CONTROL_CONF_NNMI_OFFSET 0x9C0

#define CONTROL_CONF_OSC0_IN (*(volatile unsigned *)0x44E109C4)
#define CONTROL_CONF_OSC0_IN_OFFSET 0x9C4

#define CONTROL_CONF_OSC0_OUT (*(volatile unsigned *)0x44E109C8)
#define CONTROL_CONF_OSC0_OUT_OFFSET 0x9C8

#define CONTROL_CONF_OSC0_VSS (*(volatile unsigned *)0x44E109CC)
#define CONTROL_CONF_OSC0_VSS_OFFSET 0x9CC

#define CONTROL_CONF_OSC1_IN (*(volatile unsigned *)0x44E109E8)
#define CONTROL_CONF_OSC1_IN_OFFSET 0x9E8

#define CONTROL_CONF_OSC1_OUT (*(volatile unsigned *)0x44E109EC)
#define CONTROL_CONF_OSC1_OUT_OFFSET 0x9EC

#define CONTROL_CONF_OSC1_VSS (*(volatile unsigned *)0x44E109F0)
#define CONTROL_CONF_OSC1_VSS_OFFSET 0x9F0

#define CONTROL_CONF_TMS (*(volatile unsigned *)0x44E109D0)
#define CONTROL_CONF_TMS_OFFSET 0x9D0

#define CONTROL_CONF_TDI (*(volatile unsigned *)0x44E109D4)
#define CONTROL_CONF_TDI_OFFSET 0x9D4

#define CONTROL_CONF_TDO (*(volatile unsigned *)0x44E109D8)
#define CONTROL_CONF_TDO_OFFSET 0x9D8

#define CONTROL_CONF_TCK (*(volatile unsigned *)0x44E109DC)
#define CONTROL_CONF_TCK_OFFSET 0x9DC

#define CONTROL_CONF_NTRST (*(volatile unsigned *)0x44E109E0)
#define CONTROL_CONF_NTRST_OFFSET 0x9E0

#define CONTROL_CONF_EMU0 (*(volatile unsigned *)0x44E109E4)
#define CONTROL_CONF_EMU0_OFFSET 0x9E4

#define CONTROL_CONF_EMU1 (*(volatile unsigned *)0x44E109E8)
#define CONTROL_CONF_EMU1_OFFSET 0x9E8

#define CONTROL_CONF_RTC_PORZ (*(volatile unsigned *)0x44E109F8)
#define CONTROL_CONF_RTC_PORZ_OFFSET 0x9F8

#define CONTROL_CONF_PMIC_POWER_EN (*(volatile unsigned *)0x44E109FC)
#define CONTROL_CONF_PMIC_POWER_EN_OFFSET 0x9FC

#define CONTROL_CONF_EXT_WAKEUP (*(volatile unsigned *)0x44E10A00)
#define CONTROL_CONF_EXT_WAKEUP_OFFSET 0xA00

#define CONTROL_CONF_ENZ_KALDO_1P8V (*(volatile unsigned *)0x44E10A04)
#define CONTROL_CONF_ENZ_KALDO_1P8V_OFFSET 0xA04

#define CONTROL_CONF_USB0_DM (*(volatile unsigned *)0x44E10A08)
#define CONTROL_CONF_USB0_DM_OFFSET 0xA08

#define CONTROL_CONF_USB0_DP (*(volatile unsigned *)0x44E10A0C)
#define CONTROL_CONF_USB0_DP_OFFSET 0xA0C

#define CONTROL_CONF_USB0_CE (*(volatile unsigned *)0x44E10A10)
#define CONTROL_CONF_USB0_CE_OFFSET 0xA10

#define CONTROL_CONF_USB0_ID (*(volatile unsigned *)0x44E10A14)
#define CONTROL_CONF_USB0_ID_OFFSET 0xA14

#define CONTROL_CONF_USB0_VBUS (*(volatile unsigned *)0x44E10A18)
#define CONTROL_CONF_USB0_VBUS_OFFSET 0xA18

#define CONTROL_CONF_USB0_DRVVBUS (*(volatile unsigned *)0x44E10A1C)
#define CONTROL_CONF_USB0_DRVVBUS_OFFSET 0xA1C

#define CONTROL_CONF_USB1_DM (*(volatile unsigned *)0x44E10A20)
#define CONTROL_CONF_USB1_DM_OFFSET 0xA20

#define CONTROL_CONF_USB1_DP (*(volatile unsigned *)0x44E10A24)
#define CONTROL_CONF_USB1_DP_OFFSET 0xA24

#define CONTROL_CONF_USB1_CE (*(volatile unsigned *)0x44E10A28)
#define CONTROL_CONF_USB1_CE_OFFSET 0xA28

#define CONTROL_CONF_USB1_ID (*(volatile unsigned *)0x44E10A2C)
#define CONTROL_CONF_USB1_ID_OFFSET 0xA2C

#define CONTROL_CONF_USB1_VBUS (*(volatile unsigned *)0x44E10A30)
#define CONTROL_CONF_USB1_VBUS_OFFSET 0xA30

#define CONTROL_CONF_USB1_DRVVBUS (*(volatile unsigned *)0x44E10A34)
#define CONTROL_CONF_USB1_DRVVBUS_OFFSET 0xA34

#define CONTROL_CONF_DDR_RESETN (*(volatile unsigned *)0x44E10A38)
#define CONTROL_CONF_DDR_RESETN_OFFSET 0xA38

#define CONTROL_CONF_DDR_CSN0 (*(volatile unsigned *)0x44E10A3C)
#define CONTROL_CONF_DDR_CSN0_OFFSET 0xA3C

#define CONTROL_CONF_DDR_CKE (*(volatile unsigned *)0x44E10A40)
#define CONTROL_CONF_DDR_CKE_OFFSET 0xA40

#define CONTROL_CONF_DDR_CK (*(volatile unsigned *)0x44E10A44)
#define CONTROL_CONF_DDR_CK_OFFSET 0xA44

#define CONTROL_CONF_DDR_NCK (*(volatile unsigned *)0x44E10A48)
#define CONTROL_CONF_DDR_NCK_OFFSET 0xA48

#define CONTROL_CONF_DDR_CASN (*(volatile unsigned *)0x44E10A4C)
#define CONTROL_CONF_DDR_CASN_OFFSET 0xA4C

#define CONTROL_CONF_DDR_RASN (*(volatile unsigned *)0x44E10A50)
#define CONTROL_CONF_DDR_RASN_OFFSET 0xA50

#define CONTROL_CONF_DDR_WEN (*(volatile unsigned *)0x44E10A54)
#define CONTROL_CONF_DDR_WEN_OFFSET 0xA54

#define CONTROL_CONF_DDR_BA0 (*(volatile unsigned *)0x44E10A58)
#define CONTROL_CONF_DDR_BA0_OFFSET 0xA58

#define CONTROL_CONF_DDR_BA1 (*(volatile unsigned *)0x44E10A5C)
#define CONTROL_CONF_DDR_BA1_OFFSET 0xA5C

#define CONTROL_CONF_DDR_BA2 (*(volatile unsigned *)0x44E10A60)
#define CONTROL_CONF_DDR_BA2_OFFSET 0xA60

#define CONTROL_CONF_DDR_A0 (*(volatile unsigned *)0x44E10A64)
#define CONTROL_CONF_DDR_A0_OFFSET 0xA64

#define CONTROL_CONF_DDR_A1 (*(volatile unsigned *)0x44E10A68)
#define CONTROL_CONF_DDR_A1_OFFSET 0xA68

#define CONTROL_CONF_DDR_A2 (*(volatile unsigned *)0x44E10A6C)
#define CONTROL_CONF_DDR_A2_OFFSET 0xA6C

#define CONTROL_CONF_DDR_A3 (*(volatile unsigned *)0x44E10A70)
#define CONTROL_CONF_DDR_A3_OFFSET 0xA70

#define CONTROL_CONF_DDR_A4 (*(volatile unsigned *)0x44E10A74)
#define CONTROL_CONF_DDR_A4_OFFSET 0xA74

#define CONTROL_CONF_DDR_A5 (*(volatile unsigned *)0x44E10A78)
#define CONTROL_CONF_DDR_A5_OFFSET 0xA78

#define CONTROL_CONF_DDR_A6 (*(volatile unsigned *)0x44E10A7C)
#define CONTROL_CONF_DDR_A6_OFFSET 0xA7C

#define CONTROL_CONF_DDR_A7 (*(volatile unsigned *)0x44E10A80)
#define CONTROL_CONF_DDR_A7_OFFSET 0xA80

#define CONTROL_CONF_DDR_A8 (*(volatile unsigned *)0x44E10A84)
#define CONTROL_CONF_DDR_A8_OFFSET 0xA84

#define CONTROL_CONF_DDR_A9 (*(volatile unsigned *)0x44E10A88)
#define CONTROL_CONF_DDR_A9_OFFSET 0xA88

#define CONTROL_CONF_DDR_A10 (*(volatile unsigned *)0x44E10A8C)
#define CONTROL_CONF_DDR_A10_OFFSET 0xA8C

#define CONTROL_CONF_DDR_A11 (*(volatile unsigned *)0x44E10A90)
#define CONTROL_CONF_DDR_A11_OFFSET 0xA90

#define CONTROL_CONF_DDR_A12 (*(volatile unsigned *)0x44E10A94)
#define CONTROL_CONF_DDR_A12_OFFSET 0xA94

#define CONTROL_CONF_DDR_A13 (*(volatile unsigned *)0x44E10A98)
#define CONTROL_CONF_DDR_A13_OFFSET 0xA98

#define CONTROL_CONF_DDR_A14 (*(volatile unsigned *)0x44E10A9C)
#define CONTROL_CONF_DDR_A14_OFFSET 0xA9C

#define CONTROL_CONF_DDR_A15 (*(volatile unsigned *)0x44E10AA0)
#define CONTROL_CONF_DDR_A15_OFFSET 0xAA0

#define CONTROL_CONF_DDR_ODT (*(volatile unsigned *)0x44E10AA4)
#define CONTROL_CONF_DDR_ODT_OFFSET 0xAA4

#define CONTROL_CONF_DDR_D0 (*(volatile unsigned *)0x44E10AA8)
#define CONTROL_CONF_DDR_D0_OFFSET 0xAA8

#define CONTROL_CONF_DDR_D1 (*(volatile unsigned *)0x44E10AAC)
#define CONTROL_CONF_DDR_D1_OFFSET 0xAAC

#define CONTROL_CONF_DDR_D2 (*(volatile unsigned *)0x44E10AB0)
#define CONTROL_CONF_DDR_D2_OFFSET 0xAB0

#define CONTROL_CONF_DDR_D3 (*(volatile unsigned *)0x44E10AB4)
#define CONTROL_CONF_DDR_D3_OFFSET 0xAB4

#define CONTROL_CONF_DDR_D4 (*(volatile unsigned *)0x44E10AB8)
#define CONTROL_CONF_DDR_D4_OFFSET 0xAB8

#define CONTROL_CONF_DDR_D5 (*(volatile unsigned *)0x44E10ABC)
#define CONTROL_CONF_DDR_D5_OFFSET 0xABC

#define CONTROL_CONF_DDR_D6 (*(volatile unsigned *)0x44E10AC0)
#define CONTROL_CONF_DDR_D6_OFFSET 0xAC0

#define CONTROL_CONF_DDR_D7 (*(volatile unsigned *)0x44E10AC4)
#define CONTROL_CONF_DDR_D7_OFFSET 0xAC4

#define CONTROL_CONF_DDR_D8 (*(volatile unsigned *)0x44E10AC8)
#define CONTROL_CONF_DDR_D8_OFFSET 0xAC8

#define CONTROL_CONF_DDR_D9 (*(volatile unsigned *)0x44E10ACC)
#define CONTROL_CONF_DDR_D9_OFFSET 0xACC

#define CONTROL_CONF_DDR_D10 (*(volatile unsigned *)0x44E10AD0)
#define CONTROL_CONF_DDR_D10_OFFSET 0xAD0

#define CONTROL_CONF_DDR_D11 (*(volatile unsigned *)0x44E10AD4)
#define CONTROL_CONF_DDR_D11_OFFSET 0xAD4

#define CONTROL_CONF_DDR_D12 (*(volatile unsigned *)0x44E10AD8)
#define CONTROL_CONF_DDR_D12_OFFSET 0xAD8

#define CONTROL_CONF_DDR_D13 (*(volatile unsigned *)0x44E10ADC)
#define CONTROL_CONF_DDR_D13_OFFSET 0xADC

#define CONTROL_CONF_DDR_D14 (*(volatile unsigned *)0x44E10AE0)
#define CONTROL_CONF_DDR_D14_OFFSET 0xAE0

#define CONTROL_CONF_DDR_D15 (*(volatile unsigned *)0x44E10AE4)
#define CONTROL_CONF_DDR_D15_OFFSET 0xAE4

#define CONTROL_CONF_DDR_DQM0 (*(volatile unsigned *)0x44E10AE8)
#define CONTROL_CONF_DDR_DQM0_OFFSET 0xAE8

#define CONTROL_CONF_DDR_DQM1 (*(volatile unsigned *)0x44E10AEC)
#define CONTROL_CONF_DDR_DQM1_OFFSET 0xAEC

#define CONTROL_CONF_DDR_DQS0 (*(volatile unsigned *)0x44E10AF0)
#define CONTROL_CONF_DDR_DQS0_OFFSET 0xAF0

#define CONTROL_CONF_DDR_DQSN0 (*(volatile unsigned *)0x44E10AF4)
#define CONTROL_CONF_DDR_DQSN0_OFFSET 0xAF4

#define CONTROL_CONF_DDR_DQS1 (*(volatile unsigned *)0x44E10AF8)
#define CONTROL_CONF_DDR_DQS1_OFFSET 0xAF8

#define CONTROL_CONF_DDR_DQSN1 (*(volatile unsigned *)0x44E10AFC)
#define CONTROL_CONF_DDR_DQSN1_OFFSET 0xAFC

#define CONTROL_CONF_DDR_VREF (*(volatile unsigned *)0x44E10B00)
#define CONTROL_CONF_DDR_VREF_OFFSET 0xB00

#define CONTROL_CONF_DDR_VTP (*(volatile unsigned *)0x44E10B04)
#define CONTROL_CONF_DDR_VTP_OFFSET 0xB04

#define CONTROL_CONF_DDR_STRBEN0 (*(volatile unsigned *)0x44E10B08)
#define CONTROL_CONF_DDR_STRBEN0_OFFSET 0xB08

#define CONTROL_CONF_DDR_STRBEN1 (*(volatile unsigned *)0x44E10B0C)
#define CONTROL_CONF_DDR_STRBEN1_OFFSET 0xB0C

#define CONTROL_CONF_AIN0 (*(volatile unsigned *)0x44E10B2C)
#define CONTROL_CONF_AIN0_OFFSET 0xB2C

#define CONTROL_CONF_AIN1 (*(volatile unsigned *)0x44E10B28)
#define CONTROL_CONF_AIN1_OFFSET 0xB28

#define CONTROL_CONF_AIN2 (*(volatile unsigned *)0x44E10B24)
#define CONTROL_CONF_AIN2_OFFSET 0xB24

#define CONTROL_CONF_AIN3 (*(volatile unsigned *)0x44E10B20)
#define CONTROL_CONF_AIN3_OFFSET 0xB20

#define CONTROL_CONF_AIN4 (*(volatile unsigned *)0x44E10B1C)
#define CONTROL_CONF_AIN4_OFFSET 0xB1C

#define CONTROL_CONF_AIN5 (*(volatile unsigned *)0x44E10B18)
#define CONTROL_CONF_AIN5_OFFSET 0xB18

#define CONTROL_CONF_AIN6 (*(volatile unsigned *)0x44E10B14)
#define CONTROL_CONF_AIN6_OFFSET 0xB14

#define CONTROL_CONF_AIN7 (*(volatile unsigned *)0x44E10B10)
#define CONTROL_CONF_AIN7_OFFSET 0xB10

#define CONTROL_CONF_VREFP (*(volatile unsigned *)0x44E10B30)
#define CONTROL_CONF_VREFP_OFFSET 0xB30

#define CONTROL_CONF_VREFN (*(volatile unsigned *)0x44E10B34)
#define CONTROL_CONF_VREFN_OFFSET 0xB34

#define CONTROL_CONF_AVDD (*(volatile unsigned *)0x44E10B38)
#define CONTROL_CONF_AVDD_OFFSET 0xB38

#define CONTROL_CONF_AVSS (*(volatile unsigned *)0x44E10B3C)
#define CONTROL_CONF_AVSS_OFFSET 0xB3C

#define CONTROL_CONF_IFORCE (*(volatile unsigned *)0x44E10B40)
#define CONTROL_CONF_IFORCE_OFFSET 0xB40

#define CONTROL_CONF_VSENSE (*(volatile unsigned *)0x44E10B44)
#define CONTROL_CONF_VSENSE_OFFSET 0xB44

#define CONTROL_CONF_TESTOUT (*(volatile unsigned *)0x44E10B48)
#define CONTROL_CONF_TESTOUT_OFFSET 0xB48

#define CONTROL_CQDETECT_STATUS (*(volatile unsigned *)0x44E10E00)
#define CONTROL_CQDETECT_STATUS_OFFSET 0xE00

#define CONTROL_DDR_IO_CTRL (*(volatile unsigned *)0x44E10E04)
#define CONTROL_DDR_IO_CTRL_OFFSET 0xE04

#define CONTROL_VTP_CTRL (*(volatile unsigned *)0x44E10E0C)
#define CONTROL_VTP_CTRL_OFFSET 0xE0C

#define CONTROL_VREF_CTRL (*(volatile unsigned *)0x44E10E14)
#define CONTROL_VREF_CTRL_OFFSET 0xE14

#define CONTROL_SERDES_REFCLK_CTL (*(volatile unsigned *)0x44E10E24)
#define CONTROL_SERDES_REFCLK_CTL_OFFSET 0xE24

#define CONTROL_TPCC_EVT_MUX_0_3 (*(volatile unsigned *)0x44E10F90)
#define CONTROL_TPCC_EVT_MUX_0_3_OFFSET 0xF90

#define CONTROL_TPCC_EVT_MUX_4_7 (*(volatile unsigned *)0x44E10F94)
#define CONTROL_TPCC_EVT_MUX_4_7_OFFSET 0xF94

#define CONTROL_TPCC_EVT_MUX_8_11 (*(volatile unsigned *)0x44E10F98)
#define CONTROL_TPCC_EVT_MUX_8_11_OFFSET 0xF98

#define CONTROL_TPCC_EVT_MUX_12_15 (*(volatile unsigned *)0x44E10F9C)
#define CONTROL_TPCC_EVT_MUX_12_15_OFFSET 0xF9C

#define CONTROL_TPCC_EVT_MUX_16_19 (*(volatile unsigned *)0x44E10FA0)
#define CONTROL_TPCC_EVT_MUX_16_19_OFFSET 0xFA0

#define CONTROL_TPCC_EVT_MUX_20_23 (*(volatile unsigned *)0x44E10FA4)
#define CONTROL_TPCC_EVT_MUX_20_23_OFFSET 0xFA4

#define CONTROL_TPCC_EVT_MUX_24_27 (*(volatile unsigned *)0x44E10FA8)
#define CONTROL_TPCC_EVT_MUX_24_27_OFFSET 0xFA8

#define CONTROL_TPCC_EVT_MUX_28_31 (*(volatile unsigned *)0x44E10FAC)
#define CONTROL_TPCC_EVT_MUX_28_31_OFFSET 0xFAC

#define CONTROL_TPCC_EVT_MUX_32_35 (*(volatile unsigned *)0x44E10FB0)
#define CONTROL_TPCC_EVT_MUX_32_35_OFFSET 0xFB0

#define CONTROL_TPCC_EVT_MUX_36_39 (*(volatile unsigned *)0x44E10FB4)
#define CONTROL_TPCC_EVT_MUX_36_39_OFFSET 0xFB4

#define CONTROL_TPCC_EVT_MUX_40_43 (*(volatile unsigned *)0x44E10FB8)
#define CONTROL_TPCC_EVT_MUX_40_43_OFFSET 0xFB8

#define CONTROL_TPCC_EVT_MUX_44_47 (*(volatile unsigned *)0x44E10FBC)
#define CONTROL_TPCC_EVT_MUX_44_47_OFFSET 0xFBC

#define CONTROL_TPCC_EVT_MUX_48_51 (*(volatile unsigned *)0x44E10FC0)
#define CONTROL_TPCC_EVT_MUX_48_51_OFFSET 0xFC0

#define CONTROL_TPCC_EVT_MUX_52_55 (*(volatile unsigned *)0x44E10FC4)
#define CONTROL_TPCC_EVT_MUX_52_55_OFFSET 0xFC4

#define CONTROL_TPCC_EVT_MUX_56_59 (*(volatile unsigned *)0x44E10FC8)
#define CONTROL_TPCC_EVT_MUX_56_59_OFFSET 0xFC8

#define CONTROL_TPCC_EVT_MUX_60_63 (*(volatile unsigned *)0x44E10FCC)
#define CONTROL_TPCC_EVT_MUX_60_63_OFFSET 0xFCC

#define CONTROL_TIMER_EVT_CAPT (*(volatile unsigned *)0x44E10FD0)
#define CONTROL_TIMER_EVT_CAPT_OFFSET 0xFD0

#define CONTROL_ECAP_EVT_CAPT (*(volatile unsigned *)0x44E10FD4)
#define CONTROL_ECAP_EVT_CAPT_OFFSET 0xFD4

#define CONTROL_ADC_EVT_CAPT (*(volatile unsigned *)0x44E10FD8)
#define CONTROL_ADC_EVT_CAPT_OFFSET 0xFD8

#define CONTROL_RESET_ISO (*(volatile unsigned *)0x44E11000)
#define CONTROL_RESET_ISO_OFFSET 0x1000

#define CONTROL_DDR_CKE_CTRL (*(volatile unsigned *)0x44E1131C)
#define CONTROL_DDR_CKE_CTRL_OFFSET 0x131C

#define CONTROL_M3_TXEV_EOI (*(volatile unsigned *)0x44E11324)
#define CONTROL_M3_TXEV_EOI_OFFSET 0x1324

#define CONTROL_IPC_MSG_REG0 (*(volatile unsigned *)0x44E11328)
#define CONTROL_IPC_MSG_REG0_OFFSET 0x1328

#define CONTROL_IPC_MSG_REG1 (*(volatile unsigned *)0x44E1132C)
#define CONTROL_IPC_MSG_REG1_OFFSET 0x132C

#define CONTROL_IPC_MSG_REG2 (*(volatile unsigned *)0x44E11330)
#define CONTROL_IPC_MSG_REG2_OFFSET 0x1330

#define CONTROL_IPC_MSG_REG3 (*(volatile unsigned *)0x44E11334)
#define CONTROL_IPC_MSG_REG3_OFFSET 0x1334

#define CONTROL_IPC_MSG_REG4 (*(volatile unsigned *)0x44E11338)
#define CONTROL_IPC_MSG_REG4_OFFSET 0x1338

#define CONTROL_IPC_MSG_REG5 (*(volatile unsigned *)0x44E1133C)
#define CONTROL_IPC_MSG_REG5_OFFSET 0x133C

#define CONTROL_IPC_MSG_REG6 (*(volatile unsigned *)0x44E11340)
#define CONTROL_IPC_MSG_REG6_OFFSET 0x1340

#define CONTROL_IPC_MSG_REG7 (*(volatile unsigned *)0x44E11344)
#define CONTROL_IPC_MSG_REG7_OFFSET 0x1344

#define CONTROL_DDR_CMD0_IOCTRL (*(volatile unsigned *)0x44E11404)
#define CONTROL_DDR_CMD0_IOCTRL_OFFSET 0x1404

#define CONTROL_DDR_CMD1_IOCTRL (*(volatile unsigned *)0x44E11408)
#define CONTROL_DDR_CMD1_IOCTRL_OFFSET 0x1408

#define CONTROL_DDR_CMD2_IOCTRL (*(volatile unsigned *)0x44E1140C)
#define CONTROL_DDR_CMD2_IOCTRL_OFFSET 0x140C

#define CONTROL_DDR_DATA0_IOCTRL (*(volatile unsigned *)0x44E11440)
#define CONTROL_DDR_DATA0_IOCTRL_OFFSET 0x1440

#define CONTROL_DDR_DATA1_IOCTRL (*(volatile unsigned *)0x44E11444)
#define CONTROL_DDR_DATA1_IOCTRL_OFFSET 0x1444

#ifndef DDR_PHY_BASE
#define DDR_PHY_BASE 0x44E12000
#endif

#define DDR_PHY_CMD0_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E1201C)
#define DDR_PHY_CMD0_SLAVE_RATIO_0_OFFSET 0x1C

#define DDR_PHY_CMD0_SLAVE_FORCE_0 (*(volatile unsigned *)0x44E12020)
#define DDR_PHY_CMD0_SLAVE_FORCE_0_OFFSET 0x20

#define DDR_PHY_CMD0_SLAVE_DELAY_0 (*(volatile unsigned *)0x44E12024)
#define DDR_PHY_CMD0_SLAVE_DELAY_0_OFFSET 0x24

#define DDR_PHY_CMD0_LOCK_DIFF_0 (*(volatile unsigned *)0x44E12028)
#define DDR_PHY_CMD0_LOCK_DIFF_0_OFFSET 0x28

#define DDR_PHY_CMD0_INVERT_CLKOUT_0 (*(volatile unsigned *)0x44E1202C)
#define DDR_PHY_CMD0_INVERT_CLKOUT_0_OFFSET 0x2C

#define DDR_PHY_CMD1_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E12050)
#define DDR_PHY_CMD1_SLAVE_RATIO_0_OFFSET 0x50

#define DDR_PHY_CMD1_SLAVE_FORCE_0 (*(volatile unsigned *)0x44E12054)
#define DDR_PHY_CMD1_SLAVE_FORCE_0_OFFSET 0x54

#define DDR_PHY_CMD1_SLAVE_DELAY_0 (*(volatile unsigned *)0x44E12058)
#define DDR_PHY_CMD1_SLAVE_DELAY_0_OFFSET 0x58

#define DDR_PHY_CMD1_LOCK_DIFF_0 (*(volatile unsigned *)0x44E1205C)
#define DDR_PHY_CMD1_LOCK_DIFF_0_OFFSET 0x5C

#define DDR_PHY_CMD1_INVERT_CLKOUT_0 (*(volatile unsigned *)0x44E12060)
#define DDR_PHY_CMD1_INVERT_CLKOUT_0_OFFSET 0x60

#define DDR_PHY_CMD2_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E12084)
#define DDR_PHY_CMD2_SLAVE_RATIO_0_OFFSET 0x84

#define DDR_PHY_CMD2_SLAVE_FORCE_0 (*(volatile unsigned *)0x44E12088)
#define DDR_PHY_CMD2_SLAVE_FORCE_0_OFFSET 0x88

#define DDR_PHY_CMD2_SLAVE_DELAY_0 (*(volatile unsigned *)0x44E1208C)
#define DDR_PHY_CMD2_SLAVE_DELAY_0_OFFSET 0x8C

#define DDR_PHY_CMD2_LOCK_DIFF_0 (*(volatile unsigned *)0x44E12090)
#define DDR_PHY_CMD2_LOCK_DIFF_0_OFFSET 0x90

#define DDR_PHY_CMD2_INVERT_CLKOUT_0 (*(volatile unsigned *)0x44E12094)
#define DDR_PHY_CMD2_INVERT_CLKOUT_0_OFFSET 0x94

#define DDR_PHY_DATA0_RD_DQS_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E120C8)
#define DDR_PHY_DATA0_RD_DQS_SLAVE_RATIO_0_OFFSET 0xC8

#define DDR_PHY_DATA0_RD_DQS_SLAVE_RATIO_1 (*(volatile unsigned *)0x44E120CC)
#define DDR_PHY_DATA0_RD_DQS_SLAVE_RATIO_1_OFFSET 0xCC

#define DDR_PHY_DATA0_WR_DQS_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E120DC)
#define DDR_PHY_DATA0_WR_DQS_SLAVE_RATIO_0_OFFSET 0xDC

#define DDR_PHY_DATA0_WR_DQS_SLAVE_RATIO_1 (*(volatile unsigned *)0x44E120E0)
#define DDR_PHY_DATA0_WR_DQS_SLAVE_RATIO_1_OFFSET 0xE0

#define DDR_PHY_DATA0_WRLVL_INIT_RATIO_0 (*(volatile unsigned *)0x44E120F0)
#define DDR_PHY_DATA0_WRLVL_INIT_RATIO_0_OFFSET 0xF0

#define DDR_PHY_DATA0_WRLVL_INIT_RATIO_1 (*(volatile unsigned *)0x44E120F4)
#define DDR_PHY_DATA0_WRLVL_INIT_RATIO_1_OFFSET 0xF4

#define DDR_PHY_DATA0_GATELVL_INIT_RATIO_0 (*(volatile unsigned *)0x44E120FC)
#define DDR_PHY_DATA0_GATELVL_INIT_RATIO_0_OFFSET 0xFC

#define DDR_PHY_DATA0_GATELVL_INIT_RATIO_1 (*(volatile unsigned *)0x44E12100)
#define DDR_PHY_DATA0_GATELVL_INIT_RATIO_1_OFFSET 0x100

#define DDR_PHY_DATA0_FIFO_WE_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E12108)
#define DDR_PHY_DATA0_FIFO_WE_SLAVE_RATIO_0_OFFSET 0x108

#define DDR_PHY_DATA0_FIFO_WE_SLAVE_RATIO_1 (*(volatile unsigned *)0x44E1210C)
#define DDR_PHY_DATA0_FIFO_WE_SLAVE_RATIO_1_OFFSET 0x10C

#define DDR_PHY_DATA0_WR_DATA_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E12120)
#define DDR_PHY_DATA0_WR_DATA_SLAVE_RATIO_0_OFFSET 0x120

#define DDR_PHY_DATA0_WR_DATA_SLAVE_RATIO_1 (*(volatile unsigned *)0x44E12124)
#define DDR_PHY_DATA0_WR_DATA_SLAVE_RATIO_1_OFFSET 0x124

#define DDR_PHY_DATA0_USE_RANK0_DELAYS_0 (*(volatile unsigned *)0x44E12134)
#define DDR_PHY_DATA0_USE_RANK0_DELAYS_0_OFFSET 0x134

#define DDR_PHY_DATA0_LOCK_DIFF_0 (*(volatile unsigned *)0x44E12138)
#define DDR_PHY_DATA0_LOCK_DIFF_0_OFFSET 0x138

#define DDR_PHY_DATA1_RD_DQS_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E1216C)
#define DDR_PHY_DATA1_RD_DQS_SLAVE_RATIO_0_OFFSET 0x16C

#define DDR_PHY_DATA1_RD_DQS_SLAVE_RATIO_1 (*(volatile unsigned *)0x44E12170)
#define DDR_PHY_DATA1_RD_DQS_SLAVE_RATIO_1_OFFSET 0x170

#define DDR_PHY_DATA1_WR_DQS_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E12180)
#define DDR_PHY_DATA1_WR_DQS_SLAVE_RATIO_0_OFFSET 0x180

#define DDR_PHY_DATA1_WR_DQS_SLAVE_RATIO_1 (*(volatile unsigned *)0x44E12184)
#define DDR_PHY_DATA1_WR_DQS_SLAVE_RATIO_1_OFFSET 0x184

#define DDR_PHY_DATA1_WRLVL_INIT_RATIO_0 (*(volatile unsigned *)0x44E12194)
#define DDR_PHY_DATA1_WRLVL_INIT_RATIO_0_OFFSET 0x194

#define DDR_PHY_DATA1_WRLVL_INIT_RATIO_1 (*(volatile unsigned *)0x44E12198)
#define DDR_PHY_DATA1_WRLVL_INIT_RATIO_1_OFFSET 0x198

#define DDR_PHY_DATA1_GATELVL_INIT_RATIO_0 (*(volatile unsigned *)0x44E121A0)
#define DDR_PHY_DATA1_GATELVL_INIT_RATIO_0_OFFSET 0x1A0

#define DDR_PHY_DATA1_GATELVL_INIT_RATIO_1 (*(volatile unsigned *)0x44E121A4)
#define DDR_PHY_DATA1_GATELVL_INIT_RATIO_1_OFFSET 0x1A4

#define DDR_PHY_DATA1_FIFO_WE_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E121AC)
#define DDR_PHY_DATA1_FIFO_WE_SLAVE_RATIO_0_OFFSET 0x1AC

#define DDR_PHY_DATA1_FIFO_WE_SLAVE_RATIO_1 (*(volatile unsigned *)0x44E121B0)
#define DDR_PHY_DATA1_FIFO_WE_SLAVE_RATIO_1_OFFSET 0x1B0

#define DDR_PHY_DATA1_WR_DATA_SLAVE_RATIO_0 (*(volatile unsigned *)0x44E121C4)
#define DDR_PHY_DATA1_WR_DATA_SLAVE_RATIO_0_OFFSET 0x1C4

#define DDR_PHY_DATA1_WR_DATA_SLAVE_RATIO_1 (*(volatile unsigned *)0x44E121C8)
#define DDR_PHY_DATA1_WR_DATA_SLAVE_RATIO_1_OFFSET 0x1C8

#define DDR_PHY_DATA1_USE_RANK0_DELAYS_0 (*(volatile unsigned *)0x44E121D8)
#define DDR_PHY_DATA1_USE_RANK0_DELAYS_0_OFFSET 0x1D8

#define DDR_PHY_DATA1_LOCK_DIFF_0 (*(volatile unsigned *)0x44E121DC)
#define DDR_PHY_DATA1_LOCK_DIFF_0_OFFSET 0x1DC

#ifndef DMTIMER1_1MS_BASE
#define DMTIMER1_1MS_BASE 0x44E31000
#endif

#define DMTIMER1_1MS_TIDR (*(volatile unsigned *)0x44E31000)
#define DMTIMER1_1MS_TIDR_OFFSET 0x0

#define DMTIMER1_1MS_TIOCP_CFG (*(volatile unsigned *)0x44E31010)
#define DMTIMER1_1MS_TIOCP_CFG_OFFSET 0x10

#define DMTIMER1_1MS_TISTAT (*(volatile unsigned *)0x44E31014)
#define DMTIMER1_1MS_TISTAT_OFFSET 0x14

#define DMTIMER1_1MS_TISR (*(volatile unsigned *)0x44E31018)
#define DMTIMER1_1MS_TISR_OFFSET 0x18

#define DMTIMER1_1MS_TIER (*(volatile unsigned *)0x44E3101C)
#define DMTIMER1_1MS_TIER_OFFSET 0x1C

#define DMTIMER1_1MS_TWER (*(volatile unsigned *)0x44E31020)
#define DMTIMER1_1MS_TWER_OFFSET 0x20

#define DMTIMER1_1MS_TCLR (*(volatile unsigned *)0x44E31024)
#define DMTIMER1_1MS_TCLR_OFFSET 0x24

#define DMTIMER1_1MS_TCCR (*(volatile unsigned *)0x44E31028)
#define DMTIMER1_1MS_TCCR_OFFSET 0x28

#define DMTIMER1_1MS_TLDR (*(volatile unsigned *)0x44E3102C)
#define DMTIMER1_1MS_TLDR_OFFSET 0x2C

#define DMTIMER1_1MS_TTGR (*(volatile unsigned *)0x44E31030)
#define DMTIMER1_1MS_TTGR_OFFSET 0x30

#define DMTIMER1_1MS_TWPS (*(volatile unsigned *)0x44E31034)
#define DMTIMER1_1MS_TWPS_OFFSET 0x34

#define DMTIMER1_1MS_TMAR (*(volatile unsigned *)0x44E31038)
#define DMTIMER1_1MS_TMAR_OFFSET 0x38

#define DMTIMER1_1MS_TCAR1 (*(volatile unsigned *)0x44E3103C)
#define DMTIMER1_1MS_TCAR1_OFFSET 0x3C

#define DMTIMER1_1MS_TSICR (*(volatile unsigned *)0x44E31040)
#define DMTIMER1_1MS_TSICR_OFFSET 0x40

#define DMTIMER1_1MS_TCAR2 (*(volatile unsigned *)0x44E31044)
#define DMTIMER1_1MS_TCAR2_OFFSET 0x44

#define DMTIMER1_1MS_TPIR (*(volatile unsigned *)0x44E31048)
#define DMTIMER1_1MS_TPIR_OFFSET 0x48

#define DMTIMER1_1MS_TNIR (*(volatile unsigned *)0x44E3104C)
#define DMTIMER1_1MS_TNIR_OFFSET 0x4C

#define DMTIMER1_1MS_TCVR (*(volatile unsigned *)0x44E31050)
#define DMTIMER1_1MS_TCVR_OFFSET 0x50

#define DMTIMER1_1MS_TOCR (*(volatile unsigned *)0x44E31054)
#define DMTIMER1_1MS_TOCR_OFFSET 0x54

#define DMTIMER1_1MS_TOWR (*(volatile unsigned *)0x44E31058)
#define DMTIMER1_1MS_TOWR_OFFSET 0x58

#ifndef WDT1_BASE
#define WDT1_BASE 0x44E35000
#endif

#define WDT1_WIDR (*(volatile unsigned *)0x44E35000)
#define WDT1_WIDR_OFFSET 0x0

#define WDT1_WDSC (*(volatile unsigned *)0x44E35010)
#define WDT1_WDSC_OFFSET 0x10

#define WDT1_WDST (*(volatile unsigned *)0x44E35014)
#define WDT1_WDST_OFFSET 0x14

#define WDT1_WISR (*(volatile unsigned *)0x44E35018)
#define WDT1_WISR_OFFSET 0x18

#define WDT1_WIER (*(volatile unsigned *)0x44E3501C)
#define WDT1_WIER_OFFSET 0x1C

#define WDT1_WWER (*(volatile unsigned *)0x44E35020)
#define WDT1_WWER_OFFSET 0x20

#define WDT1_WCLR (*(volatile unsigned *)0x44E35024)
#define WDT1_WCLR_OFFSET 0x24

#define WDT1_WCRR (*(volatile unsigned *)0x44E35028)
#define WDT1_WCRR_OFFSET 0x28

#define WDT1_WLDR (*(volatile unsigned *)0x44E3502C)
#define WDT1_WLDR_OFFSET 0x2C

#define WDT1_WTGR (*(volatile unsigned *)0x44E35030)
#define WDT1_WTGR_OFFSET 0x30

#define WDT1_WWPS (*(volatile unsigned *)0x44E35034)
#define WDT1_WWPS_OFFSET 0x34

#define WDT1_WDLY (*(volatile unsigned *)0x44E35044)
#define WDT1_WDLY_OFFSET 0x44

#define WDT1_WSPR (*(volatile unsigned *)0x44E35048)
#define WDT1_WSPR_OFFSET 0x48

#define WDT1_WIRQSTATRAW (*(volatile unsigned *)0x44E35054)
#define WDT1_WIRQSTATRAW_OFFSET 0x54

#define WDT1_WIRQSTAT (*(volatile unsigned *)0x44E35058)
#define WDT1_WIRQSTAT_OFFSET 0x58

#define WDT1_WIRQENSET (*(volatile unsigned *)0x44E3505C)
#define WDT1_WIRQENSET_OFFSET 0x5C

#define WDT1_WIRQENCLR (*(volatile unsigned *)0x44E35060)
#define WDT1_WIRQENCLR_OFFSET 0x60

#ifndef RTC_BASE
#define RTC_BASE 0x44E3E000
#endif

#define RTC_SECONDS_REG (*(volatile unsigned *)0x0)
#define RTC_SECONDS_REG_OFFSET 0xBB1C2000

#define RTC_MINUTES_REG (*(volatile unsigned *)0x4)
#define RTC_MINUTES_REG_OFFSET 0xBB1C2004

#define RTC_HOURS_REG (*(volatile unsigned *)0x8)
#define RTC_HOURS_REG_OFFSET 0xBB1C2008

#define RTC_DAYS_REG (*(volatile unsigned *)0xC)
#define RTC_DAYS_REG_OFFSET 0xBB1C200C

#define RTC_MONTHS_REG (*(volatile unsigned *)0x10)
#define RTC_MONTHS_REG_OFFSET 0xBB1C2010

#define RTC_YEARS_REG (*(volatile unsigned *)0x14)
#define RTC_YEARS_REG_OFFSET 0xBB1C2014

#define RTC_WEEK_REG (*(volatile unsigned *)0x18)
#define RTC_WEEK_REG_OFFSET 0xBB1C2018

#define RTC_ALARM_SECONDS_REG (*(volatile unsigned *)0x20)
#define RTC_ALARM_SECONDS_REG_OFFSET 0xBB1C2020

#define RTC_ALARM_MINUTES_REG (*(volatile unsigned *)0x24)
#define RTC_ALARM_MINUTES_REG_OFFSET 0xBB1C2024

#define RTC_ALARM_HOURS_REG (*(volatile unsigned *)0x28)
#define RTC_ALARM_HOURS_REG_OFFSET 0xBB1C2028

#define RTC_ALARM_DAYS_REG (*(volatile unsigned *)0x2C)
#define RTC_ALARM_DAYS_REG_OFFSET 0xBB1C202C

#define RTC_ALARM_MONTHS_REG (*(volatile unsigned *)0x30)
#define RTC_ALARM_MONTHS_REG_OFFSET 0xBB1C2030

#define RTC_ALARM_YEARS_REG (*(volatile unsigned *)0x34)
#define RTC_ALARM_YEARS_REG_OFFSET 0xBB1C2034

#define RTC_CTRL_REG (*(volatile unsigned *)0x40)
#define RTC_CTRL_REG_OFFSET 0xBB1C2040

#define RTC_STATUS_REG (*(volatile unsigned *)0x44)
#define RTC_STATUS_REG_OFFSET 0xBB1C2044

#define RTC_INTERRUPTS_REG (*(volatile unsigned *)0x48)
#define RTC_INTERRUPTS_REG_OFFSET 0xBB1C2048

#define RTC_COMP_LSB_REG (*(volatile unsigned *)0x4C)
#define RTC_COMP_LSB_REG_OFFSET 0xBB1C204C

#define RTC_COMP_MSB_REG (*(volatile unsigned *)0x50)
#define RTC_COMP_MSB_REG_OFFSET 0xBB1C2050

#define RTC_OSC_REG (*(volatile unsigned *)0x54)
#define RTC_OSC_REG_OFFSET 0xBB1C2054

#define RTC_SCRATCH0_REG (*(volatile unsigned *)0x60)
#define RTC_SCRATCH0_REG_OFFSET 0xBB1C2060

#define RTC_SCRATCH1_REG (*(volatile unsigned *)0x64)
#define RTC_SCRATCH1_REG_OFFSET 0xBB1C2064

#define RTC_SCRATCH2_REG (*(volatile unsigned *)0x68)
#define RTC_SCRATCH2_REG_OFFSET 0xBB1C2068

#define RTC_KICK0R (*(volatile unsigned *)0x6C)
#define RTC_KICK0R_OFFSET 0xBB1C206C

#define RTC_KICK1R (*(volatile unsigned *)0x70)
#define RTC_KICK1R_OFFSET 0xBB1C2070

#define RTC_REVISION (*(volatile unsigned *)0x74)
#define RTC_REVISION_OFFSET 0xBB1C2074

#define RTC_SYSCONFIG (*(volatile unsigned *)0x78)
#define RTC_SYSCONFIG_OFFSET 0xBB1C2078

#define RTC_IRQWAKEEN_0 (*(volatile unsigned *)0x7C)
#define RTC_IRQWAKEEN_0_OFFSET 0xBB1C207C

#define RTC_ALARM2_SECONDS (*(volatile unsigned *)0x80)
#define RTC_ALARM2_SECONDS_OFFSET 0xBB1C2080

#define RTC_ALARM2_MINUTES (*(volatile unsigned *)0x84)
#define RTC_ALARM2_MINUTES_OFFSET 0xBB1C2084

#define RTC_ALARM2_HOURS (*(volatile unsigned *)0x88)
#define RTC_ALARM2_HOURS_OFFSET 0xBB1C2088

#define RTC_ALARM2_DAYS (*(volatile unsigned *)0x8C)
#define RTC_ALARM2_DAYS_OFFSET 0xBB1C208C

#define RTC_ALARM2_MONTHS (*(volatile unsigned *)0x90)
#define RTC_ALARM2_MONTHS_OFFSET 0xBB1C2090

#define RTC_ALARM2_YEARS (*(volatile unsigned *)0x94)
#define RTC_ALARM2_YEARS_OFFSET 0xBB1C2094

#define RTC_PMIC (*(volatile unsigned *)0x98)
#define RTC_PMIC_OFFSET 0xBB1C2098

#define RTC_DEBOUNCE (*(volatile unsigned *)0x9C)
#define RTC_DEBOUNCE_OFFSET 0xBB1C209C

#ifndef USBSS_BASE
#define USBSS_BASE 0x47400000
#endif

#define USBSS_REVREG (*(volatile unsigned *)0x47400000)
#define USBSS_REVREG_OFFSET 0x0

#define USBSS_SYSCONFIG (*(volatile unsigned *)0x47400010)
#define USBSS_SYSCONFIG_OFFSET 0x10

#define USBSS_EOI (*(volatile unsigned *)0x47400020)
#define USBSS_EOI_OFFSET 0x20

#define USBSS_IRQSTATRAW (*(volatile unsigned *)0x47400024)
#define USBSS_IRQSTATRAW_OFFSET 0x24

#define USBSS_IRQSTAT (*(volatile unsigned *)0x47400028)
#define USBSS_IRQSTAT_OFFSET 0x28

#define USBSS_IRQENABLER (*(volatile unsigned *)0x4740002C)
#define USBSS_IRQENABLER_OFFSET 0x2C

#define USBSS_IRQCLEARR (*(volatile unsigned *)0x47400030)
#define USBSS_IRQCLEARR_OFFSET 0x30

#define USBSS_IRQDMATHOLDTX00 (*(volatile unsigned *)0x47400100)
#define USBSS_IRQDMATHOLDTX00_OFFSET 0x100

#define USBSS_IRQDMATHOLDTX01 (*(volatile unsigned *)0x47400104)
#define USBSS_IRQDMATHOLDTX01_OFFSET 0x104

#define USBSS_IRQDMATHOLDTX02 (*(volatile unsigned *)0x47400108)
#define USBSS_IRQDMATHOLDTX02_OFFSET 0x108

#define USBSS_IRQDMATHOLDTX03 (*(volatile unsigned *)0x4740010C)
#define USBSS_IRQDMATHOLDTX03_OFFSET 0x10C

#define USBSS_IRQDMATHOLDRX00 (*(volatile unsigned *)0x47400110)
#define USBSS_IRQDMATHOLDRX00_OFFSET 0x110

#define USBSS_IRQDMATHOLDRX01 (*(volatile unsigned *)0x47400114)
#define USBSS_IRQDMATHOLDRX01_OFFSET 0x114

#define USBSS_IRQDMATHOLDRX02 (*(volatile unsigned *)0x47400118)
#define USBSS_IRQDMATHOLDRX02_OFFSET 0x118

#define USBSS_IRQDMATHOLDRX03 (*(volatile unsigned *)0x4740011C)
#define USBSS_IRQDMATHOLDRX03_OFFSET 0x11C

#define USBSS_IRQDMATHOLDTX10 (*(volatile unsigned *)0x47400120)
#define USBSS_IRQDMATHOLDTX10_OFFSET 0x120

#define USBSS_IRQDMATHOLDTX11 (*(volatile unsigned *)0x47400124)
#define USBSS_IRQDMATHOLDTX11_OFFSET 0x124

#define USBSS_IRQDMATHOLDTX12 (*(volatile unsigned *)0x47400128)
#define USBSS_IRQDMATHOLDTX12_OFFSET 0x128

#define USBSS_IRQDMATHOLDTX13 (*(volatile unsigned *)0x4740012C)
#define USBSS_IRQDMATHOLDTX13_OFFSET 0x12C

#define USBSS_IRQDMATHOLDRX10 (*(volatile unsigned *)0x47400130)
#define USBSS_IRQDMATHOLDRX10_OFFSET 0x130

#define USBSS_IRQDMATHOLDRX11 (*(volatile unsigned *)0x47400134)
#define USBSS_IRQDMATHOLDRX11_OFFSET 0x134

#define USBSS_IRQDMATHOLDRX12 (*(volatile unsigned *)0x47400138)
#define USBSS_IRQDMATHOLDRX12_OFFSET 0x138

#define USBSS_IRQDMATHOLDRX13 (*(volatile unsigned *)0x4740013C)
#define USBSS_IRQDMATHOLDRX13_OFFSET 0x13C

#define USBSS_IRQDMAENABLE0 (*(volatile unsigned *)0x47400140)
#define USBSS_IRQDMAENABLE0_OFFSET 0x140

#define USBSS_IRQDMAENABLE1 (*(volatile unsigned *)0x47400144)
#define USBSS_IRQDMAENABLE1_OFFSET 0x144

#define USBSS_IRQFRAMETHOLDTX00 (*(volatile unsigned *)0x47400200)
#define USBSS_IRQFRAMETHOLDTX00_OFFSET 0x200

#define USBSS_IRQFRAMETHOLDTX01 (*(volatile unsigned *)0x47400204)
#define USBSS_IRQFRAMETHOLDTX01_OFFSET 0x204

#define USBSS_IRQFRAMETHOLDTX02 (*(volatile unsigned *)0x47400208)
#define USBSS_IRQFRAMETHOLDTX02_OFFSET 0x208

#define USBSS_IRQFRAMETHOLDTX03 (*(volatile unsigned *)0x4740020C)
#define USBSS_IRQFRAMETHOLDTX03_OFFSET 0x20C

#define USBSS_IRQFRAMETHOLDRX00 (*(volatile unsigned *)0x47400210)
#define USBSS_IRQFRAMETHOLDRX00_OFFSET 0x210

#define USBSS_IRQFRAMETHOLDRX01 (*(volatile unsigned *)0x47400214)
#define USBSS_IRQFRAMETHOLDRX01_OFFSET 0x214

#define USBSS_IRQFRAMETHOLDRX02 (*(volatile unsigned *)0x47400218)
#define USBSS_IRQFRAMETHOLDRX02_OFFSET 0x218

#define USBSS_IRQFRAMETHOLDRX03 (*(volatile unsigned *)0x4740021C)
#define USBSS_IRQFRAMETHOLDRX03_OFFSET 0x21C

#define USBSS_IRQFRAMETHOLDTX10 (*(volatile unsigned *)0x47400220)
#define USBSS_IRQFRAMETHOLDTX10_OFFSET 0x220

#define USBSS_IRQFRAMETHOLDTX11 (*(volatile unsigned *)0x47400224)
#define USBSS_IRQFRAMETHOLDTX11_OFFSET 0x224

#define USBSS_IRQFRAMETHOLDTX12 (*(volatile unsigned *)0x47400228)
#define USBSS_IRQFRAMETHOLDTX12_OFFSET 0x228

#define USBSS_IRQFRAMETHOLDTX13 (*(volatile unsigned *)0x4740022C)
#define USBSS_IRQFRAMETHOLDTX13_OFFSET 0x22C

#define USBSS_IRQFRAMETHOLDRX10 (*(volatile unsigned *)0x47400230)
#define USBSS_IRQFRAMETHOLDRX10_OFFSET 0x230

#define USBSS_IRQFRAMETHOLDRX11 (*(volatile unsigned *)0x47400234)
#define USBSS_IRQFRAMETHOLDRX11_OFFSET 0x234

#define USBSS_IRQFRAMETHOLDRX12 (*(volatile unsigned *)0x47400238)
#define USBSS_IRQFRAMETHOLDRX12_OFFSET 0x238

#define USBSS_IRQFRAMETHOLDRX13 (*(volatile unsigned *)0x4740023C)
#define USBSS_IRQFRAMETHOLDRX13_OFFSET 0x23C

#define USBSS_IRQFRAMEENABLE0 (*(volatile unsigned *)0x47400240)
#define USBSS_IRQFRAMEENABLE0_OFFSET 0x240

#define USBSS_IRQFRAMEENABLE1 (*(volatile unsigned *)0x47400244)
#define USBSS_IRQFRAMEENABLE1_OFFSET 0x244

#ifndef USB0_BASE
#define USB0_BASE 0x47401000
#endif

#define USB0_REV (*(volatile unsigned *)0x47401000)
#define USB0_REV_OFFSET 0x0

#define USB0_CTRL (*(volatile unsigned *)0x47401014)
#define USB0_CTRL_OFFSET 0x14

#define USB0_STAT (*(volatile unsigned *)0x47401018)
#define USB0_STAT_OFFSET 0x18

#define USB0_IRQMSTAT (*(volatile unsigned *)0x47401020)
#define USB0_IRQMSTAT_OFFSET 0x20

#define USB0_IRQEOI (*(volatile unsigned *)0x47401024)
#define USB0_IRQEOI_OFFSET 0x24

#define USB0_IRQSTATRAW0 (*(volatile unsigned *)0x47401028)
#define USB0_IRQSTATRAW0_OFFSET 0x28

#define USB0_IRQSTATRAW1 (*(volatile unsigned *)0x4740102C)
#define USB0_IRQSTATRAW1_OFFSET 0x2C

#define USB0_IRQSTAT0 (*(volatile unsigned *)0x47401030)
#define USB0_IRQSTAT0_OFFSET 0x30

#define USB0_IRQSTAT1 (*(volatile unsigned *)0x47401034)
#define USB0_IRQSTAT1_OFFSET 0x34

#define USB0_IRQENABLESET0 (*(volatile unsigned *)0x47401038)
#define USB0_IRQENABLESET0_OFFSET 0x38

#define USB0_IRQENABLESET1 (*(volatile unsigned *)0x4740103C)
#define USB0_IRQENABLESET1_OFFSET 0x3C

#define USB0_IRQENABLECLR0 (*(volatile unsigned *)0x47401040)
#define USB0_IRQENABLECLR0_OFFSET 0x40

#define USB0_IRQENABLECLR1 (*(volatile unsigned *)0x47401044)
#define USB0_IRQENABLECLR1_OFFSET 0x44

#define USB0_TXMODE (*(volatile unsigned *)0x47401070)
#define USB0_TXMODE_OFFSET 0x70

#define USB0_RXMODE (*(volatile unsigned *)0x47401074)
#define USB0_RXMODE_OFFSET 0x74

#define USB0_GENRNDISEP0 (*(volatile unsigned *)0x47401080)
#define USB0_GENRNDISEP0_OFFSET 0x80

#define USB0_GENRNDISEP1 (*(volatile unsigned *)0x47401084)
#define USB0_GENRNDISEP1_OFFSET 0x84

#define USB0_GENRNDISEP2 (*(volatile unsigned *)0x47401088)
#define USB0_GENRNDISEP2_OFFSET 0x88

#define USB0_GENRNDISEP3 (*(volatile unsigned *)0x4740108C)
#define USB0_GENRNDISEP3_OFFSET 0x8C

#define USB0_GENRNDISEP4 (*(volatile unsigned *)0x47401090)
#define USB0_GENRNDISEP4_OFFSET 0x90

#define USB0_GENRNDISEP5 (*(volatile unsigned *)0x47401094)
#define USB0_GENRNDISEP5_OFFSET 0x94

#define USB0_GENRNDISEP6 (*(volatile unsigned *)0x47401098)
#define USB0_GENRNDISEP6_OFFSET 0x98

#define USB0_GENRNDISEP7 (*(volatile unsigned *)0x4740109C)
#define USB0_GENRNDISEP7_OFFSET 0x9C

#define USB0_GENRNDISEP8 (*(volatile unsigned *)0x474010A0)
#define USB0_GENRNDISEP8_OFFSET 0xA0

#define USB0_GENRNDISEP9 (*(volatile unsigned *)0x474010A4)
#define USB0_GENRNDISEP9_OFFSET 0xA4

#define USB0_GENRNDISEP10 (*(volatile unsigned *)0x474010A8)
#define USB0_GENRNDISEP10_OFFSET 0xA8

#define USB0_GENRNDISEP11 (*(volatile unsigned *)0x474010AC)
#define USB0_GENRNDISEP11_OFFSET 0xAC

#define USB0_GENRNDISEP12 (*(volatile unsigned *)0x474010B0)
#define USB0_GENRNDISEP12_OFFSET 0xB0

#define USB0_GENRNDISEP13 (*(volatile unsigned *)0x474010B4)
#define USB0_GENRNDISEP13_OFFSET 0xB4

#define USB0_GENRNDISEP14 (*(volatile unsigned *)0x474010B8)
#define USB0_GENRNDISEP14_OFFSET 0xB8

#define USB0_GENRNDISEP15 (*(volatile unsigned *)0x474010BC)
#define USB0_GENRNDISEP15_OFFSET 0xBC

#define USB0_AUTOREQ (*(volatile unsigned *)0x474010D0)
#define USB0_AUTOREQ_OFFSET 0xD0

#define USB0_SRPFIXTIME (*(volatile unsigned *)0x474010D4)
#define USB0_SRPFIXTIME_OFFSET 0xD4

#define USB0__TDOWN (*(volatile unsigned *)0x474010D8)
#define USB0__TDOWN_OFFSET 0xD8

#define USB0_OUTMI (*(volatile unsigned *)0x474010E0)
#define USB0_OUTMI_OFFSET 0xE0

#define USB0_MGCUTMILB (*(volatile unsigned *)0x474010E4)
#define USB0_MGCUTMILB_OFFSET 0xE4

#define USB0_MODE (*(volatile unsigned *)0x474010E8)
#define USB0_MODE_OFFSET 0xE8

#ifndef USB0_PHY_BASE
#define USB0_PHY_BASE 0x47401300
#endif

#define USB0_PHY_Termination_control (*(volatile unsigned *)0x47401300)
#define USB0_PHY_Termination_control_OFFSET 0x0

#define USB0_PHY_RX_CALIB (*(volatile unsigned *)0x47401304)
#define USB0_PHY_RX_CALIB_OFFSET 0x4

#define USB0_PHY_DLLHS_2 (*(volatile unsigned *)0x47401308)
#define USB0_PHY_DLLHS_2_OFFSET 0x8

#define USB0_PHY_RX_TEST_2 (*(volatile unsigned *)0x4740130C)
#define USB0_PHY_RX_TEST_2_OFFSET 0xC

#define USB0_PHY_CHRG_DET (*(volatile unsigned *)0x47401314)
#define USB0_PHY_CHRG_DET_OFFSET 0x14

#define USB0_PHY_PWR_CNTL (*(volatile unsigned *)0x47401318)
#define USB0_PHY_PWR_CNTL_OFFSET 0x18

#define USB0_PHY_UTIM_INTERFACE_CNTL_1 (*(volatile unsigned *)0x4740131C)
#define USB0_PHY_UTIM_INTERFACE_CNTL_1_OFFSET 0x1C

#define USB0_PHY_UTIM_INTERFACE_CNTL_2 (*(volatile unsigned *)0x47401320)
#define USB0_PHY_UTIM_INTERFACE_CNTL_2_OFFSET 0x20

#define USB0_PHY_BIST (*(volatile unsigned *)0x47401324)
#define USB0_PHY_BIST_OFFSET 0x24

#define USB0_PHY_BIST_CRC (*(volatile unsigned *)0x47401328)
#define USB0_PHY_BIST_CRC_OFFSET 0x28

#define USB0_PHY_CDR_BIST2 (*(volatile unsigned *)0x4740132C)
#define USB0_PHY_CDR_BIST2_OFFSET 0x2C

#define USB0_PHY_GPIO (*(volatile unsigned *)0x47401330)
#define USB0_PHY_GPIO_OFFSET 0x30

#define USB0_PHY_DLLHS (*(volatile unsigned *)0x47401334)
#define USB0_PHY_DLLHS_OFFSET 0x34

#define USB0_PHY_USB2PHYCM_TRIM (*(volatile unsigned *)0x47401338)
#define USB0_PHY_USB2PHYCM_TRIM_OFFSET 0x38

#define USB0_PHY_USB2PHYCM_CONFIG (*(volatile unsigned *)0x4740133C)
#define USB0_PHY_USB2PHYCM_CONFIG_OFFSET 0x3C

#define USB0_PHY_USBOTG (*(volatile unsigned *)0x47401340)
#define USB0_PHY_USBOTG_OFFSET 0x40

#define USB0_PHY_AD_INTERFACE_REG1 (*(volatile unsigned *)0x47401344)
#define USB0_PHY_AD_INTERFACE_REG1_OFFSET 0x44

#define USB0_PHY_AD_INTERFACE_REG2 (*(volatile unsigned *)0x47401348)
#define USB0_PHY_AD_INTERFACE_REG2_OFFSET 0x48

#define USB0_PHY_AD_INTERFACE_REG3 (*(volatile unsigned *)0x4740134C)
#define USB0_PHY_AD_INTERFACE_REG3_OFFSET 0x4C

#define USB0_PHY_ANA_CONFIG1 (*(volatile unsigned *)0x47401350)
#define USB0_PHY_ANA_CONFIG1_OFFSET 0x50

#define USB0_PHY_ANA_CONFIG2 (*(volatile unsigned *)0x47401354)
#define USB0_PHY_ANA_CONFIG2_OFFSET 0x54

#ifndef USB1_BASE
#define USB1_BASE 0x47401800
#endif

#define USB1_REV (*(volatile unsigned *)0x47401800)
#define USB1_REV_OFFSET 0x0

#define USB1_CTRL (*(volatile unsigned *)0x47401814)
#define USB1_CTRL_OFFSET 0x14

#define USB1_STAT (*(volatile unsigned *)0x47401818)
#define USB1_STAT_OFFSET 0x18

#define USB1_IRQMSTAT (*(volatile unsigned *)0x47401820)
#define USB1_IRQMSTAT_OFFSET 0x20

#define USB1_IRQEOI (*(volatile unsigned *)0x47401824)
#define USB1_IRQEOI_OFFSET 0x24

#define USB1_IRQSTATRAW0 (*(volatile unsigned *)0x47401828)
#define USB1_IRQSTATRAW0_OFFSET 0x28

#define USB1_IRQSTATRAW1 (*(volatile unsigned *)0x4740182C)
#define USB1_IRQSTATRAW1_OFFSET 0x2C

#define USB1_IRQSTAT0 (*(volatile unsigned *)0x47401830)
#define USB1_IRQSTAT0_OFFSET 0x30

#define USB1_IRQSTAT1 (*(volatile unsigned *)0x47401834)
#define USB1_IRQSTAT1_OFFSET 0x34

#define USB1_IRQENABLESET0 (*(volatile unsigned *)0x47401838)
#define USB1_IRQENABLESET0_OFFSET 0x38

#define USB1_IRQENABLESET1 (*(volatile unsigned *)0x4740183C)
#define USB1_IRQENABLESET1_OFFSET 0x3C

#define USB1_IRQENABLECLR0 (*(volatile unsigned *)0x47401840)
#define USB1_IRQENABLECLR0_OFFSET 0x40

#define USB1_IRQENABLECLR1 (*(volatile unsigned *)0x47401844)
#define USB1_IRQENABLECLR1_OFFSET 0x44

#define USB1_TXMODE (*(volatile unsigned *)0x47401870)
#define USB1_TXMODE_OFFSET 0x70

#define USB1_RXMODE (*(volatile unsigned *)0x47401874)
#define USB1_RXMODE_OFFSET 0x74

#define USB1_GENRNDISEP0 (*(volatile unsigned *)0x47401880)
#define USB1_GENRNDISEP0_OFFSET 0x80

#define USB1_GENRNDISEP1 (*(volatile unsigned *)0x47401884)
#define USB1_GENRNDISEP1_OFFSET 0x84

#define USB1_GENRNDISEP2 (*(volatile unsigned *)0x47401888)
#define USB1_GENRNDISEP2_OFFSET 0x88

#define USB1_GENRNDISEP3 (*(volatile unsigned *)0x4740188C)
#define USB1_GENRNDISEP3_OFFSET 0x8C

#define USB1_GENRNDISEP4 (*(volatile unsigned *)0x47401890)
#define USB1_GENRNDISEP4_OFFSET 0x90

#define USB1_GENRNDISEP5 (*(volatile unsigned *)0x47401894)
#define USB1_GENRNDISEP5_OFFSET 0x94

#define USB1_GENRNDISEP6 (*(volatile unsigned *)0x47401898)
#define USB1_GENRNDISEP6_OFFSET 0x98

#define USB1_GENRNDISEP7 (*(volatile unsigned *)0x4740189C)
#define USB1_GENRNDISEP7_OFFSET 0x9C

#define USB1_GENRNDISEP8 (*(volatile unsigned *)0x474018A0)
#define USB1_GENRNDISEP8_OFFSET 0xA0

#define USB1_GENRNDISEP9 (*(volatile unsigned *)0x474018A4)
#define USB1_GENRNDISEP9_OFFSET 0xA4

#define USB1_GENRNDISEP10 (*(volatile unsigned *)0x474018A8)
#define USB1_GENRNDISEP10_OFFSET 0xA8

#define USB1_GENRNDISEP11 (*(volatile unsigned *)0x474018AC)
#define USB1_GENRNDISEP11_OFFSET 0xAC

#define USB1_GENRNDISEP12 (*(volatile unsigned *)0x474018B0)
#define USB1_GENRNDISEP12_OFFSET 0xB0

#define USB1_GENRNDISEP13 (*(volatile unsigned *)0x474018B4)
#define USB1_GENRNDISEP13_OFFSET 0xB4

#define USB1_GENRNDISEP14 (*(volatile unsigned *)0x474018B8)
#define USB1_GENRNDISEP14_OFFSET 0xB8

#define USB1_GENRNDISEP15 (*(volatile unsigned *)0x474018BC)
#define USB1_GENRNDISEP15_OFFSET 0xBC

#define USB1_AUTOREQ (*(volatile unsigned *)0x474018D0)
#define USB1_AUTOREQ_OFFSET 0xD0

#define USB1_SRPFIXTIME (*(volatile unsigned *)0x474018D4)
#define USB1_SRPFIXTIME_OFFSET 0xD4

#define USB1__TDOWN (*(volatile unsigned *)0x474018D8)
#define USB1__TDOWN_OFFSET 0xD8

#define USB1_OUTMI (*(volatile unsigned *)0x474018E0)
#define USB1_OUTMI_OFFSET 0xE0

#define USB1_MGCUTMILB (*(volatile unsigned *)0x474018E4)
#define USB1_MGCUTMILB_OFFSET 0xE4

#define USB1_MODE (*(volatile unsigned *)0x474018E8)
#define USB1_MODE_OFFSET 0xE8

#ifndef USB1_PHY_BASE
#define USB1_PHY_BASE 0x47401B00
#endif

#define USB1_PHY_Termination_control (*(volatile unsigned *)0x47401B00)
#define USB1_PHY_Termination_control_OFFSET 0x0

#define USB1_PHY_RX_CALIB (*(volatile unsigned *)0x47401B04)
#define USB1_PHY_RX_CALIB_OFFSET 0x4

#define USB1_PHY_DLLHS_2 (*(volatile unsigned *)0x47401B08)
#define USB1_PHY_DLLHS_2_OFFSET 0x8

#define USB1_PHY_RX_TEST_2 (*(volatile unsigned *)0x47401B0C)
#define USB1_PHY_RX_TEST_2_OFFSET 0xC

#define USB1_PHY_CHRG_DET (*(volatile unsigned *)0x47401B14)
#define USB1_PHY_CHRG_DET_OFFSET 0x14

#define USB1_PHY_PWR_CNTL (*(volatile unsigned *)0x47401B18)
#define USB1_PHY_PWR_CNTL_OFFSET 0x18

#define USB1_PHY_UTIM_INTERFACE_CNTL_1 (*(volatile unsigned *)0x47401B1C)
#define USB1_PHY_UTIM_INTERFACE_CNTL_1_OFFSET 0x1C

#define USB1_PHY_UTIM_INTERFACE_CNTL_2 (*(volatile unsigned *)0x47401B20)
#define USB1_PHY_UTIM_INTERFACE_CNTL_2_OFFSET 0x20

#define USB1_PHY_BIST (*(volatile unsigned *)0x47401B24)
#define USB1_PHY_BIST_OFFSET 0x24

#define USB1_PHY_BIST_CRC (*(volatile unsigned *)0x47401B28)
#define USB1_PHY_BIST_CRC_OFFSET 0x28

#define USB1_PHY_CDR_BIST2 (*(volatile unsigned *)0x47401B2C)
#define USB1_PHY_CDR_BIST2_OFFSET 0x2C

#define USB1_PHY_GPIO (*(volatile unsigned *)0x47401B30)
#define USB1_PHY_GPIO_OFFSET 0x30

#define USB1_PHY_DLLHS (*(volatile unsigned *)0x47401B34)
#define USB1_PHY_DLLHS_OFFSET 0x34

#define USB1_PHY_USB2PHYCM_TRIM (*(volatile unsigned *)0x47401B38)
#define USB1_PHY_USB2PHYCM_TRIM_OFFSET 0x38

#define USB1_PHY_USB2PHYCM_CONFIG (*(volatile unsigned *)0x47401B3C)
#define USB1_PHY_USB2PHYCM_CONFIG_OFFSET 0x3C

#define USB1_PHY_USBOTG (*(volatile unsigned *)0x47401B40)
#define USB1_PHY_USBOTG_OFFSET 0x40

#define USB1_PHY_AD_INTERFACE_REG1 (*(volatile unsigned *)0x47401B44)
#define USB1_PHY_AD_INTERFACE_REG1_OFFSET 0x44

#define USB1_PHY_AD_INTERFACE_REG2 (*(volatile unsigned *)0x47401B48)
#define USB1_PHY_AD_INTERFACE_REG2_OFFSET 0x48

#define USB1_PHY_AD_INTERFACE_REG3 (*(volatile unsigned *)0x47401B4C)
#define USB1_PHY_AD_INTERFACE_REG3_OFFSET 0x4C

#define USB1_PHY_ANA_CONFIG1 (*(volatile unsigned *)0x47401B50)
#define USB1_PHY_ANA_CONFIG1_OFFSET 0x50

#define USB1_PHY_ANA_CONFIG2 (*(volatile unsigned *)0x47401B54)
#define USB1_PHY_ANA_CONFIG2_OFFSET 0x54

#ifndef MMCHS2_BASE
#define MMCHS2_BASE 0x47810000
#endif

#define MMCHS2_SD_SYSCONFIG (*(volatile unsigned *)0x47810110)
#define MMCHS2_SD_SYSCONFIG_OFFSET 0x110

#define MMCHS2_SD_SYSSTATUS (*(volatile unsigned *)0x47810114)
#define MMCHS2_SD_SYSSTATUS_OFFSET 0x114

#define MMCHS2_SD_CSRE (*(volatile unsigned *)0x47810124)
#define MMCHS2_SD_CSRE_OFFSET 0x124

#define MMCHS2_SD_SYSTEST (*(volatile unsigned *)0x47810128)
#define MMCHS2_SD_SYSTEST_OFFSET 0x128

#define MMCHS2_SD_CON (*(volatile unsigned *)0x4781012C)
#define MMCHS2_SD_CON_OFFSET 0x12C

#define MMCHS2_SD_PWCNT (*(volatile unsigned *)0x47810130)
#define MMCHS2_SD_PWCNT_OFFSET 0x130

#define MMCHS2_SD_SDMASA (*(volatile unsigned *)0x47810200)
#define MMCHS2_SD_SDMASA_OFFSET 0x200

#define MMCHS2_SD_BLK (*(volatile unsigned *)0x47810204)
#define MMCHS2_SD_BLK_OFFSET 0x204

#define MMCHS2_SD_ARG (*(volatile unsigned *)0x47810208)
#define MMCHS2_SD_ARG_OFFSET 0x208

#define MMCHS2_SD_CMD (*(volatile unsigned *)0x4781020C)
#define MMCHS2_SD_CMD_OFFSET 0x20C

#define MMCHS2_SD_RSP10 (*(volatile unsigned *)0x47810210)
#define MMCHS2_SD_RSP10_OFFSET 0x210

#define MMCHS2_SD_RSP32 (*(volatile unsigned *)0x47810214)
#define MMCHS2_SD_RSP32_OFFSET 0x214

#define MMCHS2_SD_RSP54 (*(volatile unsigned *)0x47810218)
#define MMCHS2_SD_RSP54_OFFSET 0x218

#define MMCHS2_SD_RSP76 (*(volatile unsigned *)0x4781021C)
#define MMCHS2_SD_RSP76_OFFSET 0x21C

#define MMCHS2_SD_DATA (*(volatile unsigned *)0x47810220)
#define MMCHS2_SD_DATA_OFFSET 0x220

#define MMCHS2_SD_PSTATE (*(volatile unsigned *)0x47810224)
#define MMCHS2_SD_PSTATE_OFFSET 0x224

#define MMCHS2_SD_HCTL (*(volatile unsigned *)0x47810228)
#define MMCHS2_SD_HCTL_OFFSET 0x228

#define MMCHS2_SD_SYSCTL (*(volatile unsigned *)0x4781022C)
#define MMCHS2_SD_SYSCTL_OFFSET 0x22C

#define MMCHS2_SD_STAT (*(volatile unsigned *)0x47810230)
#define MMCHS2_SD_STAT_OFFSET 0x230

#define MMCHS2_SD_IE (*(volatile unsigned *)0x47810234)
#define MMCHS2_SD_IE_OFFSET 0x234

#define MMCHS2_SD_ISE (*(volatile unsigned *)0x47810238)
#define MMCHS2_SD_ISE_OFFSET 0x238

#define MMCHS2_SD_AC12 (*(volatile unsigned *)0x4781023C)
#define MMCHS2_SD_AC12_OFFSET 0x23C

#define MMCHS2_SD_CAPA (*(volatile unsigned *)0x47810240)
#define MMCHS2_SD_CAPA_OFFSET 0x240

#define MMCHS2_SD_CUR_CAPA (*(volatile unsigned *)0x47810248)
#define MMCHS2_SD_CUR_CAPA_OFFSET 0x248

#define MMCHS2_SD_FE (*(volatile unsigned *)0x47810250)
#define MMCHS2_SD_FE_OFFSET 0x250

#define MMCHS2_SD_ADMAES (*(volatile unsigned *)0x47810254)
#define MMCHS2_SD_ADMAES_OFFSET 0x254

#define MMCHS2_SD_ADMASAL (*(volatile unsigned *)0x47810258)
#define MMCHS2_SD_ADMASAL_OFFSET 0x258

#define MMCHS2_SD_ADMASAH (*(volatile unsigned *)0x4781025C)
#define MMCHS2_SD_ADMASAH_OFFSET 0x25C

#define MMCHS2_SD_REV (*(volatile unsigned *)0x478102FC)
#define MMCHS2_SD_REV_OFFSET 0x2FC

#ifndef UART1_BASE
#define UART1_BASE 0x48022000
#endif

#define UART1_RHR_THR (*(volatile unsigned *)0x48022000)
#define UART1_RHR_THR_OFFSET 0x0

#define UART1_IER (*(volatile unsigned *)0x48022004)
#define UART1_IER_OFFSET 0x4

#define UART1_IIR (*(volatile unsigned *)0x48022008)
#define UART1_IIR_OFFSET 0x8

#define UART1_LCR (*(volatile unsigned *)0x4802200C)
#define UART1_LCR_OFFSET 0xC

#define UART1_MCR (*(volatile unsigned *)0x48022010)
#define UART1_MCR_OFFSET 0x10

#define UART1_LSR (*(volatile unsigned *)0x48022014)
#define UART1_LSR_OFFSET 0x14

#define UART1_MSR (*(volatile unsigned *)0x48022018)
#define UART1_MSR_OFFSET 0x18

#define UART1_SPR (*(volatile unsigned *)0x4802201C)
#define UART1_SPR_OFFSET 0x1C

#define UART1_MDR1 (*(volatile unsigned *)0x48022020)
#define UART1_MDR1_OFFSET 0x20

#define UART1_MDR2 (*(volatile unsigned *)0x48022024)
#define UART1_MDR2_OFFSET 0x24

#define UART1_SFLSR (*(volatile unsigned *)0x48022028)
#define UART1_SFLSR_OFFSET 0x28

#define UART1_RESUME (*(volatile unsigned *)0x4802202C)
#define UART1_RESUME_OFFSET 0x2C

#define UART1_RXFLL (*(volatile unsigned *)0x48022030)
#define UART1_RXFLL_OFFSET 0x30

#define UART1_RXFLH (*(volatile unsigned *)0x48022034)
#define UART1_RXFLH_OFFSET 0x34

#define UART1_BLR (*(volatile unsigned *)0x48022038)
#define UART1_BLR_OFFSET 0x38

#define UART1_ACREG (*(volatile unsigned *)0x4802203C)
#define UART1_ACREG_OFFSET 0x3C

#define UART1_SCR (*(volatile unsigned *)0x48022040)
#define UART1_SCR_OFFSET 0x40

#define UART1_SSR (*(volatile unsigned *)0x48022044)
#define UART1_SSR_OFFSET 0x44

#define UART1_EBLR (*(volatile unsigned *)0x48022048)
#define UART1_EBLR_OFFSET 0x48

#define UART1_MVR (*(volatile unsigned *)0x48022050)
#define UART1_MVR_OFFSET 0x50

#define UART1_SYSC (*(volatile unsigned *)0x48022054)
#define UART1_SYSC_OFFSET 0x54

#define UART1_SYSS (*(volatile unsigned *)0x48022058)
#define UART1_SYSS_OFFSET 0x58

#define UART1_WER (*(volatile unsigned *)0x4802205C)
#define UART1_WER_OFFSET 0x5C

#define UART1_CFPS (*(volatile unsigned *)0x48022060)
#define UART1_CFPS_OFFSET 0x60

#ifndef UART2_BASE
#define UART2_BASE 0x48024000
#endif

#define UART2_RHR_THR (*(volatile unsigned *)0x48024000)
#define UART2_RHR_THR_OFFSET 0x0

#define UART2_IER (*(volatile unsigned *)0x48024004)
#define UART2_IER_OFFSET 0x4

#define UART2_IIR (*(volatile unsigned *)0x48024008)
#define UART2_IIR_OFFSET 0x8

#define UART2_LCR (*(volatile unsigned *)0x4802400C)
#define UART2_LCR_OFFSET 0xC

#define UART2_MCR (*(volatile unsigned *)0x48024010)
#define UART2_MCR_OFFSET 0x10

#define UART2_LSR (*(volatile unsigned *)0x48024014)
#define UART2_LSR_OFFSET 0x14

#define UART2_MSR (*(volatile unsigned *)0x48024018)
#define UART2_MSR_OFFSET 0x18

#define UART2_SPR (*(volatile unsigned *)0x4802401C)
#define UART2_SPR_OFFSET 0x1C

#define UART2_MDR1 (*(volatile unsigned *)0x48024020)
#define UART2_MDR1_OFFSET 0x20

#define UART2_MDR2 (*(volatile unsigned *)0x48024024)
#define UART2_MDR2_OFFSET 0x24

#define UART2_SFLSR (*(volatile unsigned *)0x48024028)
#define UART2_SFLSR_OFFSET 0x28

#define UART2_RESUME (*(volatile unsigned *)0x4802402C)
#define UART2_RESUME_OFFSET 0x2C

#define UART2_RXFLL (*(volatile unsigned *)0x48024030)
#define UART2_RXFLL_OFFSET 0x30

#define UART2_RXFLH (*(volatile unsigned *)0x48024034)
#define UART2_RXFLH_OFFSET 0x34

#define UART2_BLR (*(volatile unsigned *)0x48024038)
#define UART2_BLR_OFFSET 0x38

#define UART2_ACREG (*(volatile unsigned *)0x4802403C)
#define UART2_ACREG_OFFSET 0x3C

#define UART2_SCR (*(volatile unsigned *)0x48024040)
#define UART2_SCR_OFFSET 0x40

#define UART2_SSR (*(volatile unsigned *)0x48024044)
#define UART2_SSR_OFFSET 0x44

#define UART2_EBLR (*(volatile unsigned *)0x48024048)
#define UART2_EBLR_OFFSET 0x48

#define UART2_MVR (*(volatile unsigned *)0x48024050)
#define UART2_MVR_OFFSET 0x50

#define UART2_SYSC (*(volatile unsigned *)0x48024054)
#define UART2_SYSC_OFFSET 0x54

#define UART2_SYSS (*(volatile unsigned *)0x48024058)
#define UART2_SYSS_OFFSET 0x58

#define UART2_WER (*(volatile unsigned *)0x4802405C)
#define UART2_WER_OFFSET 0x5C

#define UART2_CFPS (*(volatile unsigned *)0x48024060)
#define UART2_CFPS_OFFSET 0x60

#ifndef I2C1_BASE
#define I2C1_BASE 0x4802A000
#endif

#define I2C1_REVNB_LO (*(volatile unsigned *)0x4802A000)
#define I2C1_REVNB_LO_OFFSET 0x0

#define I2C1_REVNB_HI (*(volatile unsigned *)0x4802A004)
#define I2C1_REVNB_HI_OFFSET 0x4

#define I2C1_SYSC (*(volatile unsigned *)0x4802A010)
#define I2C1_SYSC_OFFSET 0x10

#define I2C1_EOI (*(volatile unsigned *)0x4802A020)
#define I2C1_EOI_OFFSET 0x20

#define I2C1_IRQSTATUS_RAW (*(volatile unsigned *)0x4802A024)
#define I2C1_IRQSTATUS_RAW_OFFSET 0x24

#define I2C1_IRQSTATUS (*(volatile unsigned *)0x4802A028)
#define I2C1_IRQSTATUS_OFFSET 0x28

#define I2C1_IRQENABLE_SET (*(volatile unsigned *)0x4802A02C)
#define I2C1_IRQENABLE_SET_OFFSET 0x2C

#define I2C1_IRQENABLE_CLR (*(volatile unsigned *)0x4802A030)
#define I2C1_IRQENABLE_CLR_OFFSET 0x30

#define I2C1_WE (*(volatile unsigned *)0x4802A034)
#define I2C1_WE_OFFSET 0x34

#define I2C1_DMARXENABLE_SET (*(volatile unsigned *)0x4802A038)
#define I2C1_DMARXENABLE_SET_OFFSET 0x38

#define I2C1_DMATXENABLE_SET (*(volatile unsigned *)0x4802A03C)
#define I2C1_DMATXENABLE_SET_OFFSET 0x3C

#define I2C1_DMARXENABLE_CLR (*(volatile unsigned *)0x4802A040)
#define I2C1_DMARXENABLE_CLR_OFFSET 0x40

#define I2C1_DMATXENABLE_CLR (*(volatile unsigned *)0x4802A044)
#define I2C1_DMATXENABLE_CLR_OFFSET 0x44

#define I2C1_DMARXWAKE_EN (*(volatile unsigned *)0x4802A048)
#define I2C1_DMARXWAKE_EN_OFFSET 0x48

#define I2C1_DMATXWAKE_EN (*(volatile unsigned *)0x4802A04C)
#define I2C1_DMATXWAKE_EN_OFFSET 0x4C

#define I2C1_SYSS (*(volatile unsigned *)0x4802A090)
#define I2C1_SYSS_OFFSET 0x90

#define I2C1_BUF (*(volatile unsigned *)0x4802A094)
#define I2C1_BUF_OFFSET 0x94

#define I2C1_CNT (*(volatile unsigned *)0x4802A098)
#define I2C1_CNT_OFFSET 0x98

#define I2C1_DATA (*(volatile unsigned *)0x4802A09C)
#define I2C1_DATA_OFFSET 0x9C

#define I2C1_CON (*(volatile unsigned *)0x4802A0A4)
#define I2C1_CON_OFFSET 0xA4

#define I2C1_OA (*(volatile unsigned *)0x4802A0A8)
#define I2C1_OA_OFFSET 0xA8

#define I2C1_SA (*(volatile unsigned *)0x4802A0AC)
#define I2C1_SA_OFFSET 0xAC

#define I2C1_PSC (*(volatile unsigned *)0x4802A0B0)
#define I2C1_PSC_OFFSET 0xB0

#define I2C1_SCLL (*(volatile unsigned *)0x4802A0B4)
#define I2C1_SCLL_OFFSET 0xB4

#define I2C1_SCLH (*(volatile unsigned *)0x4802A0B8)
#define I2C1_SCLH_OFFSET 0xB8

#define I2C1_SYSTEST (*(volatile unsigned *)0x4802A0BC)
#define I2C1_SYSTEST_OFFSET 0xBC

#define I2C1_BUFSTAT (*(volatile unsigned *)0x4802A0C0)
#define I2C1_BUFSTAT_OFFSET 0xC0

#define I2C1_OA1 (*(volatile unsigned *)0x4802A0C4)
#define I2C1_OA1_OFFSET 0xC4

#define I2C1_OA2 (*(volatile unsigned *)0x4802A0C8)
#define I2C1_OA2_OFFSET 0xC8

#define I2C1_OA3 (*(volatile unsigned *)0x4802A0CC)
#define I2C1_OA3_OFFSET 0xCC

#define I2C1_ACTOA (*(volatile unsigned *)0x4802A0D0)
#define I2C1_ACTOA_OFFSET 0xD0

#define I2C1_SBLOCK (*(volatile unsigned *)0x4802A0D4)
#define I2C1_SBLOCK_OFFSET 0xD4

#ifndef MCSPI0_BASE
#define MCSPI0_BASE 0x48030000
#endif

#define MCSPI0_REVISION (*(volatile unsigned *)0x48030100)
#define MCSPI0_REVISION_OFFSET 0x100

#define MCSPI0_SYSCONFIG (*(volatile unsigned *)0x48030110)
#define MCSPI0_SYSCONFIG_OFFSET 0x110

#define MCSPI0_SYSSTATUS (*(volatile unsigned *)0x48030114)
#define MCSPI0_SYSSTATUS_OFFSET 0x114

#define MCSPI0_IRQSTATUS (*(volatile unsigned *)0x48030118)
#define MCSPI0_IRQSTATUS_OFFSET 0x118

#define MCSPI0_IRQENABLE (*(volatile unsigned *)0x4803011C)
#define MCSPI0_IRQENABLE_OFFSET 0x11C

#define MCSPI0_WAKEUPENABLE (*(volatile unsigned *)0x48030120)
#define MCSPI0_WAKEUPENABLE_OFFSET 0x120

#define MCSPI0_SYST (*(volatile unsigned *)0x48030124)
#define MCSPI0_SYST_OFFSET 0x124

#define MCSPI0_MODULCTRL (*(volatile unsigned *)0x48030128)
#define MCSPI0_MODULCTRL_OFFSET 0x128

#define MCSPI0_CH0CONF (*(volatile unsigned *)0x4803012C)
#define MCSPI0_CH0CONF_OFFSET 0x12C

#define MCSPI0_CH0STAT (*(volatile unsigned *)0x48030130)
#define MCSPI0_CH0STAT_OFFSET 0x130

#define MCSPI0_CH0CTRL (*(volatile unsigned *)0x48030134)
#define MCSPI0_CH0CTRL_OFFSET 0x134

#define MCSPI0_TX0 (*(volatile unsigned *)0x48030138)
#define MCSPI0_TX0_OFFSET 0x138

#define MCSPI0_RX0 (*(volatile unsigned *)0x4803013C)
#define MCSPI0_RX0_OFFSET 0x13C

#define MCSPI0_CH1CONF (*(volatile unsigned *)0x48030140)
#define MCSPI0_CH1CONF_OFFSET 0x140

#define MCSPI0_CH1STAT (*(volatile unsigned *)0x48030144)
#define MCSPI0_CH1STAT_OFFSET 0x144

#define MCSPI0_CH1CTRL (*(volatile unsigned *)0x48030148)
#define MCSPI0_CH1CTRL_OFFSET 0x148

#define MCSPI0_TX1 (*(volatile unsigned *)0x4803014C)
#define MCSPI0_TX1_OFFSET 0x14C

#define MCSPI0_RX1 (*(volatile unsigned *)0x48030150)
#define MCSPI0_RX1_OFFSET 0x150

#define MCSPI0_CH2CONF (*(volatile unsigned *)0x48030154)
#define MCSPI0_CH2CONF_OFFSET 0x154

#define MCSPI0_CH2STAT (*(volatile unsigned *)0x48030158)
#define MCSPI0_CH2STAT_OFFSET 0x158

#define MCSPI0_CH2CTRL (*(volatile unsigned *)0x4803015C)
#define MCSPI0_CH2CTRL_OFFSET 0x15C

#define MCSPI0_TX2 (*(volatile unsigned *)0x48030160)
#define MCSPI0_TX2_OFFSET 0x160

#define MCSPI0_RX2 (*(volatile unsigned *)0x48030164)
#define MCSPI0_RX2_OFFSET 0x164

#define MCSPI0_CH3CONF (*(volatile unsigned *)0x48030168)
#define MCSPI0_CH3CONF_OFFSET 0x168

#define MCSPI0_CH3STAT (*(volatile unsigned *)0x4803016C)
#define MCSPI0_CH3STAT_OFFSET 0x16C

#define MCSPI0_CH3CTRL (*(volatile unsigned *)0x48030170)
#define MCSPI0_CH3CTRL_OFFSET 0x170

#define MCSPI0_TX3 (*(volatile unsigned *)0x48030174)
#define MCSPI0_TX3_OFFSET 0x174

#define MCSPI0_RX3 (*(volatile unsigned *)0x48030178)
#define MCSPI0_RX3_OFFSET 0x178

#define MCSPI0_XFERLEVEL (*(volatile unsigned *)0x4803017C)
#define MCSPI0_XFERLEVEL_OFFSET 0x17C

#ifndef MCASP0_BASE
#define MCASP0_BASE 0x48038000
#endif

#define MCASP0_REV (*(volatile unsigned *)0x48038000)
#define MCASP0_REV_OFFSET 0x0

#define MCASP0_PFUNC (*(volatile unsigned *)0x48038010)
#define MCASP0_PFUNC_OFFSET 0x10

#define MCASP0_PDIR (*(volatile unsigned *)0x48038014)
#define MCASP0_PDIR_OFFSET 0x14

#define MCASP0_PDOUT (*(volatile unsigned *)0x48038018)
#define MCASP0_PDOUT_OFFSET 0x18

#define MCASP0_PDIN (*(volatile unsigned *)0x4803801C)
#define MCASP0_PDIN_OFFSET 0x1C

#define MCASP0_PDSET (*(volatile unsigned *)0x4803801C)
#define MCASP0_PDSET_OFFSET 0x1C

#define MCASP0_PDCLR (*(volatile unsigned *)0x48038020)
#define MCASP0_PDCLR_OFFSET 0x20

#define MCASP0_GBLCTL (*(volatile unsigned *)0x48038044)
#define MCASP0_GBLCTL_OFFSET 0x44

#define MCASP0_AMUTE (*(volatile unsigned *)0x48038048)
#define MCASP0_AMUTE_OFFSET 0x48

#define MCASP0_DLBCTL (*(volatile unsigned *)0x4803804C)
#define MCASP0_DLBCTL_OFFSET 0x4C

#define MCASP0_DITCTL (*(volatile unsigned *)0x48038050)
#define MCASP0_DITCTL_OFFSET 0x50

#define MCASP0_RGBLCTL (*(volatile unsigned *)0x48038060)
#define MCASP0_RGBLCTL_OFFSET 0x60

#define MCASP0_RMASK (*(volatile unsigned *)0x48038064)
#define MCASP0_RMASK_OFFSET 0x64

#define MCASP0_RFMT (*(volatile unsigned *)0x48038068)
#define MCASP0_RFMT_OFFSET 0x68

#define MCASP0_AFSRCTL (*(volatile unsigned *)0x4803806C)
#define MCASP0_AFSRCTL_OFFSET 0x6C

#define MCASP0_ACLKRCTL (*(volatile unsigned *)0x48038070)
#define MCASP0_ACLKRCTL_OFFSET 0x70

#define MCASP0_AHCLKRCTL (*(volatile unsigned *)0x48038074)
#define MCASP0_AHCLKRCTL_OFFSET 0x74

#define MCASP0_RTDM (*(volatile unsigned *)0x48038078)
#define MCASP0_RTDM_OFFSET 0x78

#define MCASP0_RINTCTL (*(volatile unsigned *)0x4803807C)
#define MCASP0_RINTCTL_OFFSET 0x7C

#define MCASP0_RSTAT (*(volatile unsigned *)0x48038080)
#define MCASP0_RSTAT_OFFSET 0x80

#define MCASP0_RSLOT (*(volatile unsigned *)0x48038084)
#define MCASP0_RSLOT_OFFSET 0x84

#define MCASP0_RCLKCHK (*(volatile unsigned *)0x48038088)
#define MCASP0_RCLKCHK_OFFSET 0x88

#define MCASP0_REVTCTL (*(volatile unsigned *)0x4803808C)
#define MCASP0_REVTCTL_OFFSET 0x8C

#define MCASP0_XGBLCTL (*(volatile unsigned *)0x480380A0)
#define MCASP0_XGBLCTL_OFFSET 0xA0

#define MCASP0_XMASK (*(volatile unsigned *)0x480380A4)
#define MCASP0_XMASK_OFFSET 0xA4

#define MCASP0_XFMT (*(volatile unsigned *)0x480380A8)
#define MCASP0_XFMT_OFFSET 0xA8

#define MCASP0_AFSXCTL (*(volatile unsigned *)0x480380AC)
#define MCASP0_AFSXCTL_OFFSET 0xAC

#define MCASP0_ACLKXCTL (*(volatile unsigned *)0x480380B0)
#define MCASP0_ACLKXCTL_OFFSET 0xB0

#define MCASP0_AHCLKXCTL (*(volatile unsigned *)0x480380B4)
#define MCASP0_AHCLKXCTL_OFFSET 0xB4

#define MCASP0_XTDM (*(volatile unsigned *)0x480380B8)
#define MCASP0_XTDM_OFFSET 0xB8

#define MCASP0_XINTCTL (*(volatile unsigned *)0x480380BC)
#define MCASP0_XINTCTL_OFFSET 0xBC

#define MCASP0_XSTAT (*(volatile unsigned *)0x480380C0)
#define MCASP0_XSTAT_OFFSET 0xC0

#define MCASP0_XSLOT (*(volatile unsigned *)0x480380C4)
#define MCASP0_XSLOT_OFFSET 0xC4

#define MCASP0_XCLKCHK (*(volatile unsigned *)0x480380C8)
#define MCASP0_XCLKCHK_OFFSET 0xC8

#define MCASP0_XEVTCTL (*(volatile unsigned *)0x480380CC)
#define MCASP0_XEVTCTL_OFFSET 0xCC

#define MCASP0_DITCSRA0 (*(volatile unsigned *)0x48038100)
#define MCASP0_DITCSRA0_OFFSET 0x100

#define MCASP0_DITCSRA1 (*(volatile unsigned *)0x48038104)
#define MCASP0_DITCSRA1_OFFSET 0x104

#define MCASP0_DITCSRA2 (*(volatile unsigned *)0x48038108)
#define MCASP0_DITCSRA2_OFFSET 0x108

#define MCASP0_DITCSRA3 (*(volatile unsigned *)0x4803810C)
#define MCASP0_DITCSRA3_OFFSET 0x10C

#define MCASP0_DITCSRA4 (*(volatile unsigned *)0x48038110)
#define MCASP0_DITCSRA4_OFFSET 0x110

#define MCASP0_DITCSRA5 (*(volatile unsigned *)0x48038114)
#define MCASP0_DITCSRA5_OFFSET 0x114

#define MCASP0_DITCSRB0 (*(volatile unsigned *)0x48038118)
#define MCASP0_DITCSRB0_OFFSET 0x118

#define MCASP0_DITCSRB1 (*(volatile unsigned *)0x4803811C)
#define MCASP0_DITCSRB1_OFFSET 0x11C

#define MCASP0_DITCSRB2 (*(volatile unsigned *)0x48038120)
#define MCASP0_DITCSRB2_OFFSET 0x120

#define MCASP0_DITCSRB3 (*(volatile unsigned *)0x48038124)
#define MCASP0_DITCSRB3_OFFSET 0x124

#define MCASP0_DITCSRB4 (*(volatile unsigned *)0x48038128)
#define MCASP0_DITCSRB4_OFFSET 0x128

#define MCASP0_DITCSRB5 (*(volatile unsigned *)0x4803812C)
#define MCASP0_DITCSRB5_OFFSET 0x12C

#define MCASP0_DITUDRA0 (*(volatile unsigned *)0x48038130)
#define MCASP0_DITUDRA0_OFFSET 0x130

#define MCASP0_DITUDRA1 (*(volatile unsigned *)0x48038134)
#define MCASP0_DITUDRA1_OFFSET 0x134

#define MCASP0_DITUDRA2 (*(volatile unsigned *)0x48038138)
#define MCASP0_DITUDRA2_OFFSET 0x138

#define MCASP0_DITUDRA3 (*(volatile unsigned *)0x4803813C)
#define MCASP0_DITUDRA3_OFFSET 0x13C

#define MCASP0_DITUDRA4 (*(volatile unsigned *)0x48038140)
#define MCASP0_DITUDRA4_OFFSET 0x140

#define MCASP0_DITUDRA5 (*(volatile unsigned *)0x48038144)
#define MCASP0_DITUDRA5_OFFSET 0x144

#define MCASP0_DITUDRB0 (*(volatile unsigned *)0x48038148)
#define MCASP0_DITUDRB0_OFFSET 0x148

#define MCASP0_DITUDRB1 (*(volatile unsigned *)0x4803814C)
#define MCASP0_DITUDRB1_OFFSET 0x14C

#define MCASP0_DITUDRB2 (*(volatile unsigned *)0x48038150)
#define MCASP0_DITUDRB2_OFFSET 0x150

#define MCASP0_DITUDRB3 (*(volatile unsigned *)0x48038154)
#define MCASP0_DITUDRB3_OFFSET 0x154

#define MCASP0_DITUDRB4 (*(volatile unsigned *)0x48038158)
#define MCASP0_DITUDRB4_OFFSET 0x158

#define MCASP0_DITUDRB5 (*(volatile unsigned *)0x4803815C)
#define MCASP0_DITUDRB5_OFFSET 0x15C

#define MCASP0_SRCTL0 (*(volatile unsigned *)0x48038180)
#define MCASP0_SRCTL0_OFFSET 0x180

#define MCASP0_SRCTL1 (*(volatile unsigned *)0x48038184)
#define MCASP0_SRCTL1_OFFSET 0x184

#define MCASP0_SRCTL2 (*(volatile unsigned *)0x48038188)
#define MCASP0_SRCTL2_OFFSET 0x188

#define MCASP0_SRCTL3 (*(volatile unsigned *)0x4803818C)
#define MCASP0_SRCTL3_OFFSET 0x18C

#define MCASP0_XBUF0 (*(volatile unsigned *)0x48038200)
#define MCASP0_XBUF0_OFFSET 0x200

#define MCASP0_XBUF1 (*(volatile unsigned *)0x48038204)
#define MCASP0_XBUF1_OFFSET 0x204

#define MCASP0_XBUF2 (*(volatile unsigned *)0x48038208)
#define MCASP0_XBUF2_OFFSET 0x208

#define MCASP0_XBUF3 (*(volatile unsigned *)0x4803820C)
#define MCASP0_XBUF3_OFFSET 0x20C

#define MCASP0_RBUF0 (*(volatile unsigned *)0x48038280)
#define MCASP0_RBUF0_OFFSET 0x280

#define MCASP0_RBUF1 (*(volatile unsigned *)0x48038284)
#define MCASP0_RBUF1_OFFSET 0x284

#define MCASP0_RBUF2 (*(volatile unsigned *)0x48038288)
#define MCASP0_RBUF2_OFFSET 0x288

#define MCASP0_RBUF3 (*(volatile unsigned *)0x4803828C)
#define MCASP0_RBUF3_OFFSET 0x28C

#ifndef MCASP1_BASE
#define MCASP1_BASE 0x4803C000
#endif

#define MCASP1_REV (*(volatile unsigned *)0x4803C000)
#define MCASP1_REV_OFFSET 0x0

#define MCASP1_PFUNC (*(volatile unsigned *)0x4803C010)
#define MCASP1_PFUNC_OFFSET 0x10

#define MCASP1_PDIR (*(volatile unsigned *)0x4803C014)
#define MCASP1_PDIR_OFFSET 0x14

#define MCASP1_PDOUT (*(volatile unsigned *)0x4803C018)
#define MCASP1_PDOUT_OFFSET 0x18

#define MCASP1_PDIN (*(volatile unsigned *)0x4803C01C)
#define MCASP1_PDIN_OFFSET 0x1C

#define MCASP1_PDSET (*(volatile unsigned *)0x4803C01C)
#define MCASP1_PDSET_OFFSET 0x1C

#define MCASP1_PDCLR (*(volatile unsigned *)0x4803C020)
#define MCASP1_PDCLR_OFFSET 0x20

#define MCASP1_GBLCTL (*(volatile unsigned *)0x4803C044)
#define MCASP1_GBLCTL_OFFSET 0x44

#define MCASP1_AMUTE (*(volatile unsigned *)0x4803C048)
#define MCASP1_AMUTE_OFFSET 0x48

#define MCASP1_DLBCTL (*(volatile unsigned *)0x4803C04C)
#define MCASP1_DLBCTL_OFFSET 0x4C

#define MCASP1_DITCTL (*(volatile unsigned *)0x4803C050)
#define MCASP1_DITCTL_OFFSET 0x50

#define MCASP1_RGBLCTL (*(volatile unsigned *)0x4803C060)
#define MCASP1_RGBLCTL_OFFSET 0x60

#define MCASP1_RMASK (*(volatile unsigned *)0x4803C064)
#define MCASP1_RMASK_OFFSET 0x64

#define MCASP1_RFMT (*(volatile unsigned *)0x4803C068)
#define MCASP1_RFMT_OFFSET 0x68

#define MCASP1_AFSRCTL (*(volatile unsigned *)0x4803C06C)
#define MCASP1_AFSRCTL_OFFSET 0x6C

#define MCASP1_ACLKRCTL (*(volatile unsigned *)0x4803C070)
#define MCASP1_ACLKRCTL_OFFSET 0x70

#define MCASP1_AHCLKRCTL (*(volatile unsigned *)0x4803C074)
#define MCASP1_AHCLKRCTL_OFFSET 0x74

#define MCASP1_RTDM (*(volatile unsigned *)0x4803C078)
#define MCASP1_RTDM_OFFSET 0x78

#define MCASP1_RINTCTL (*(volatile unsigned *)0x4803C07C)
#define MCASP1_RINTCTL_OFFSET 0x7C

#define MCASP1_RSTAT (*(volatile unsigned *)0x4803C080)
#define MCASP1_RSTAT_OFFSET 0x80

#define MCASP1_RSLOT (*(volatile unsigned *)0x4803C084)
#define MCASP1_RSLOT_OFFSET 0x84

#define MCASP1_RCLKCHK (*(volatile unsigned *)0x4803C088)
#define MCASP1_RCLKCHK_OFFSET 0x88

#define MCASP1_REVTCTL (*(volatile unsigned *)0x4803C08C)
#define MCASP1_REVTCTL_OFFSET 0x8C

#define MCASP1_XGBLCTL (*(volatile unsigned *)0x4803C0A0)
#define MCASP1_XGBLCTL_OFFSET 0xA0

#define MCASP1_XMASK (*(volatile unsigned *)0x4803C0A4)
#define MCASP1_XMASK_OFFSET 0xA4

#define MCASP1_XFMT (*(volatile unsigned *)0x4803C0A8)
#define MCASP1_XFMT_OFFSET 0xA8

#define MCASP1_AFSXCTL (*(volatile unsigned *)0x4803C0AC)
#define MCASP1_AFSXCTL_OFFSET 0xAC

#define MCASP1_ACLKXCTL (*(volatile unsigned *)0x4803C0B0)
#define MCASP1_ACLKXCTL_OFFSET 0xB0

#define MCASP1_AHCLKXCTL (*(volatile unsigned *)0x4803C0B4)
#define MCASP1_AHCLKXCTL_OFFSET 0xB4

#define MCASP1_XTDM (*(volatile unsigned *)0x4803C0B8)
#define MCASP1_XTDM_OFFSET 0xB8

#define MCASP1_XINTCTL (*(volatile unsigned *)0x4803C0BC)
#define MCASP1_XINTCTL_OFFSET 0xBC

#define MCASP1_XSTAT (*(volatile unsigned *)0x4803C0C0)
#define MCASP1_XSTAT_OFFSET 0xC0

#define MCASP1_XSLOT (*(volatile unsigned *)0x4803C0C4)
#define MCASP1_XSLOT_OFFSET 0xC4

#define MCASP1_XCLKCHK (*(volatile unsigned *)0x4803C0C8)
#define MCASP1_XCLKCHK_OFFSET 0xC8

#define MCASP1_XEVTCTL (*(volatile unsigned *)0x4803C0CC)
#define MCASP1_XEVTCTL_OFFSET 0xCC

#define MCASP1_DITCSRA0 (*(volatile unsigned *)0x4803C100)
#define MCASP1_DITCSRA0_OFFSET 0x100

#define MCASP1_DITCSRA1 (*(volatile unsigned *)0x4803C104)
#define MCASP1_DITCSRA1_OFFSET 0x104

#define MCASP1_DITCSRA2 (*(volatile unsigned *)0x4803C108)
#define MCASP1_DITCSRA2_OFFSET 0x108

#define MCASP1_DITCSRA3 (*(volatile unsigned *)0x4803C10C)
#define MCASP1_DITCSRA3_OFFSET 0x10C

#define MCASP1_DITCSRA4 (*(volatile unsigned *)0x4803C110)
#define MCASP1_DITCSRA4_OFFSET 0x110

#define MCASP1_DITCSRA5 (*(volatile unsigned *)0x4803C114)
#define MCASP1_DITCSRA5_OFFSET 0x114

#define MCASP1_DITCSRB0 (*(volatile unsigned *)0x4803C118)
#define MCASP1_DITCSRB0_OFFSET 0x118

#define MCASP1_DITCSRB1 (*(volatile unsigned *)0x4803C11C)
#define MCASP1_DITCSRB1_OFFSET 0x11C

#define MCASP1_DITCSRB2 (*(volatile unsigned *)0x4803C120)
#define MCASP1_DITCSRB2_OFFSET 0x120

#define MCASP1_DITCSRB3 (*(volatile unsigned *)0x4803C124)
#define MCASP1_DITCSRB3_OFFSET 0x124

#define MCASP1_DITCSRB4 (*(volatile unsigned *)0x4803C128)
#define MCASP1_DITCSRB4_OFFSET 0x128

#define MCASP1_DITCSRB5 (*(volatile unsigned *)0x4803C12C)
#define MCASP1_DITCSRB5_OFFSET 0x12C

#define MCASP1_DITUDRA0 (*(volatile unsigned *)0x4803C130)
#define MCASP1_DITUDRA0_OFFSET 0x130

#define MCASP1_DITUDRA1 (*(volatile unsigned *)0x4803C134)
#define MCASP1_DITUDRA1_OFFSET 0x134

#define MCASP1_DITUDRA2 (*(volatile unsigned *)0x4803C138)
#define MCASP1_DITUDRA2_OFFSET 0x138

#define MCASP1_DITUDRA3 (*(volatile unsigned *)0x4803C13C)
#define MCASP1_DITUDRA3_OFFSET 0x13C

#define MCASP1_DITUDRA4 (*(volatile unsigned *)0x4803C140)
#define MCASP1_DITUDRA4_OFFSET 0x140

#define MCASP1_DITUDRA5 (*(volatile unsigned *)0x4803C144)
#define MCASP1_DITUDRA5_OFFSET 0x144

#define MCASP1_DITUDRB0 (*(volatile unsigned *)0x4803C148)
#define MCASP1_DITUDRB0_OFFSET 0x148

#define MCASP1_DITUDRB1 (*(volatile unsigned *)0x4803C14C)
#define MCASP1_DITUDRB1_OFFSET 0x14C

#define MCASP1_DITUDRB2 (*(volatile unsigned *)0x4803C150)
#define MCASP1_DITUDRB2_OFFSET 0x150

#define MCASP1_DITUDRB3 (*(volatile unsigned *)0x4803C154)
#define MCASP1_DITUDRB3_OFFSET 0x154

#define MCASP1_DITUDRB4 (*(volatile unsigned *)0x4803C158)
#define MCASP1_DITUDRB4_OFFSET 0x158

#define MCASP1_DITUDRB5 (*(volatile unsigned *)0x4803C15C)
#define MCASP1_DITUDRB5_OFFSET 0x15C

#define MCASP1_SRCTL0 (*(volatile unsigned *)0x4803C180)
#define MCASP1_SRCTL0_OFFSET 0x180

#define MCASP1_SRCTL1 (*(volatile unsigned *)0x4803C184)
#define MCASP1_SRCTL1_OFFSET 0x184

#define MCASP1_SRCTL2 (*(volatile unsigned *)0x4803C188)
#define MCASP1_SRCTL2_OFFSET 0x188

#define MCASP1_SRCTL3 (*(volatile unsigned *)0x4803C18C)
#define MCASP1_SRCTL3_OFFSET 0x18C

#define MCASP1_XBUF0 (*(volatile unsigned *)0x4803C200)
#define MCASP1_XBUF0_OFFSET 0x200

#define MCASP1_XBUF1 (*(volatile unsigned *)0x4803C204)
#define MCASP1_XBUF1_OFFSET 0x204

#define MCASP1_XBUF2 (*(volatile unsigned *)0x4803C208)
#define MCASP1_XBUF2_OFFSET 0x208

#define MCASP1_XBUF3 (*(volatile unsigned *)0x4803C20C)
#define MCASP1_XBUF3_OFFSET 0x20C

#define MCASP1_RBUF0 (*(volatile unsigned *)0x4803C280)
#define MCASP1_RBUF0_OFFSET 0x280

#define MCASP1_RBUF1 (*(volatile unsigned *)0x4803C284)
#define MCASP1_RBUF1_OFFSET 0x284

#define MCASP1_RBUF2 (*(volatile unsigned *)0x4803C288)
#define MCASP1_RBUF2_OFFSET 0x288

#define MCASP1_RBUF3 (*(volatile unsigned *)0x4803C28C)
#define MCASP1_RBUF3_OFFSET 0x28C

#ifndef DMTIMER2_BASE
#define DMTIMER2_BASE 0x48040000
#endif

#define DMTIMER2_TIDR (*(volatile unsigned *)0x48040000)
#define DMTIMER2_TIDR_OFFSET 0x0

#define DMTIMER2_TIOCP_CFG (*(volatile unsigned *)0x48040010)
#define DMTIMER2_TIOCP_CFG_OFFSET 0x10

#define DMTIMER2_IRQ_EOI (*(volatile unsigned *)0x48040020)
#define DMTIMER2_IRQ_EOI_OFFSET 0x20

#define DMTIMER2_IRQSTATUS_RAW (*(volatile unsigned *)0x48040024)
#define DMTIMER2_IRQSTATUS_RAW_OFFSET 0x24

#define DMTIMER2_IRQSTATUS (*(volatile unsigned *)0x48040028)
#define DMTIMER2_IRQSTATUS_OFFSET 0x28

#define DMTIMER2_IRQENABLE_SET (*(volatile unsigned *)0x4804002C)
#define DMTIMER2_IRQENABLE_SET_OFFSET 0x2C

#define DMTIMER2_IRQENABLE_CLR (*(volatile unsigned *)0x48040030)
#define DMTIMER2_IRQENABLE_CLR_OFFSET 0x30

#define DMTIMER2_IRQWAKEEN (*(volatile unsigned *)0x48040034)
#define DMTIMER2_IRQWAKEEN_OFFSET 0x34

#define DMTIMER2_TCLR (*(volatile unsigned *)0x48040038)
#define DMTIMER2_TCLR_OFFSET 0x38

#define DMTIMER2_TCRR (*(volatile unsigned *)0x4804003C)
#define DMTIMER2_TCRR_OFFSET 0x3C

#define DMTIMER2_TLDR (*(volatile unsigned *)0x48040040)
#define DMTIMER2_TLDR_OFFSET 0x40

#define DMTIMER2_TTGR (*(volatile unsigned *)0x48040044)
#define DMTIMER2_TTGR_OFFSET 0x44

#define DMTIMER2_TWPS (*(volatile unsigned *)0x48040048)
#define DMTIMER2_TWPS_OFFSET 0x48

#define DMTIMER2_TMAR (*(volatile unsigned *)0x4804004C)
#define DMTIMER2_TMAR_OFFSET 0x4C

#define DMTIMER2_TCAR1 (*(volatile unsigned *)0x48040050)
#define DMTIMER2_TCAR1_OFFSET 0x50

#define DMTIMER2_TSICR (*(volatile unsigned *)0x48040054)
#define DMTIMER2_TSICR_OFFSET 0x54

#define DMTIMER2_TCAR2 (*(volatile unsigned *)0x48040058)
#define DMTIMER2_TCAR2_OFFSET 0x58

#ifndef DMTIMER3_BASE
#define DMTIMER3_BASE 0x48042000
#endif

#define DMTIMER3_TIDR (*(volatile unsigned *)0x48042000)
#define DMTIMER3_TIDR_OFFSET 0x0

#define DMTIMER3_TIOCP_CFG (*(volatile unsigned *)0x48042010)
#define DMTIMER3_TIOCP_CFG_OFFSET 0x10

#define DMTIMER3_IRQ_EOI (*(volatile unsigned *)0x48042020)
#define DMTIMER3_IRQ_EOI_OFFSET 0x20

#define DMTIMER3_IRQSTATUS_RAW (*(volatile unsigned *)0x48042024)
#define DMTIMER3_IRQSTATUS_RAW_OFFSET 0x24

#define DMTIMER3_IRQSTATUS (*(volatile unsigned *)0x48042028)
#define DMTIMER3_IRQSTATUS_OFFSET 0x28

#define DMTIMER3_IRQENABLE_SET (*(volatile unsigned *)0x4804202C)
#define DMTIMER3_IRQENABLE_SET_OFFSET 0x2C

#define DMTIMER3_IRQENABLE_CLR (*(volatile unsigned *)0x48042030)
#define DMTIMER3_IRQENABLE_CLR_OFFSET 0x30

#define DMTIMER3_IRQWAKEEN (*(volatile unsigned *)0x48042034)
#define DMTIMER3_IRQWAKEEN_OFFSET 0x34

#define DMTIMER3_TCLR (*(volatile unsigned *)0x48042038)
#define DMTIMER3_TCLR_OFFSET 0x38

#define DMTIMER3_TCRR (*(volatile unsigned *)0x4804203C)
#define DMTIMER3_TCRR_OFFSET 0x3C

#define DMTIMER3_TLDR (*(volatile unsigned *)0x48042040)
#define DMTIMER3_TLDR_OFFSET 0x40

#define DMTIMER3_TTGR (*(volatile unsigned *)0x48042044)
#define DMTIMER3_TTGR_OFFSET 0x44

#define DMTIMER3_TWPS (*(volatile unsigned *)0x48042048)
#define DMTIMER3_TWPS_OFFSET 0x48

#define DMTIMER3_TMAR (*(volatile unsigned *)0x4804204C)
#define DMTIMER3_TMAR_OFFSET 0x4C

#define DMTIMER3_TCAR1 (*(volatile unsigned *)0x48042050)
#define DMTIMER3_TCAR1_OFFSET 0x50

#define DMTIMER3_TSICR (*(volatile unsigned *)0x48042054)
#define DMTIMER3_TSICR_OFFSET 0x54

#define DMTIMER3_TCAR2 (*(volatile unsigned *)0x48042058)
#define DMTIMER3_TCAR2_OFFSET 0x58

#ifndef DMTIMER4_BASE
#define DMTIMER4_BASE 0x48044000
#endif

#define DMTIMER4_TIDR (*(volatile unsigned *)0x48044000)
#define DMTIMER4_TIDR_OFFSET 0x0

#define DMTIMER4_TIOCP_CFG (*(volatile unsigned *)0x48044010)
#define DMTIMER4_TIOCP_CFG_OFFSET 0x10

#define DMTIMER4_IRQ_EOI (*(volatile unsigned *)0x48044020)
#define DMTIMER4_IRQ_EOI_OFFSET 0x20

#define DMTIMER4_IRQSTATUS_RAW (*(volatile unsigned *)0x48044024)
#define DMTIMER4_IRQSTATUS_RAW_OFFSET 0x24

#define DMTIMER4_IRQSTATUS (*(volatile unsigned *)0x48044028)
#define DMTIMER4_IRQSTATUS_OFFSET 0x28

#define DMTIMER4_IRQENABLE_SET (*(volatile unsigned *)0x4804402C)
#define DMTIMER4_IRQENABLE_SET_OFFSET 0x2C

#define DMTIMER4_IRQENABLE_CLR (*(volatile unsigned *)0x48044030)
#define DMTIMER4_IRQENABLE_CLR_OFFSET 0x30

#define DMTIMER4_IRQWAKEEN (*(volatile unsigned *)0x48044034)
#define DMTIMER4_IRQWAKEEN_OFFSET 0x34

#define DMTIMER4_TCLR (*(volatile unsigned *)0x48044038)
#define DMTIMER4_TCLR_OFFSET 0x38

#define DMTIMER4_TCRR (*(volatile unsigned *)0x4804403C)
#define DMTIMER4_TCRR_OFFSET 0x3C

#define DMTIMER4_TLDR (*(volatile unsigned *)0x48044040)
#define DMTIMER4_TLDR_OFFSET 0x40

#define DMTIMER4_TTGR (*(volatile unsigned *)0x48044044)
#define DMTIMER4_TTGR_OFFSET 0x44

#define DMTIMER4_TWPS (*(volatile unsigned *)0x48044048)
#define DMTIMER4_TWPS_OFFSET 0x48

#define DMTIMER4_TMAR (*(volatile unsigned *)0x4804404C)
#define DMTIMER4_TMAR_OFFSET 0x4C

#define DMTIMER4_TCAR1 (*(volatile unsigned *)0x48044050)
#define DMTIMER4_TCAR1_OFFSET 0x50

#define DMTIMER4_TSICR (*(volatile unsigned *)0x48044054)
#define DMTIMER4_TSICR_OFFSET 0x54

#define DMTIMER4_TCAR2 (*(volatile unsigned *)0x48044058)
#define DMTIMER4_TCAR2_OFFSET 0x58

#ifndef DMTIMER5_BASE
#define DMTIMER5_BASE 0x48046000
#endif

#define DMTIMER5_TIDR (*(volatile unsigned *)0x48046000)
#define DMTIMER5_TIDR_OFFSET 0x0

#define DMTIMER5_TIOCP_CFG (*(volatile unsigned *)0x48046010)
#define DMTIMER5_TIOCP_CFG_OFFSET 0x10

#define DMTIMER5_IRQ_EOI (*(volatile unsigned *)0x48046020)
#define DMTIMER5_IRQ_EOI_OFFSET 0x20

#define DMTIMER5_IRQSTATUS_RAW (*(volatile unsigned *)0x48046024)
#define DMTIMER5_IRQSTATUS_RAW_OFFSET 0x24

#define DMTIMER5_IRQSTATUS (*(volatile unsigned *)0x48046028)
#define DMTIMER5_IRQSTATUS_OFFSET 0x28

#define DMTIMER5_IRQENABLE_SET (*(volatile unsigned *)0x4804602C)
#define DMTIMER5_IRQENABLE_SET_OFFSET 0x2C

#define DMTIMER5_IRQENABLE_CLR (*(volatile unsigned *)0x48046030)
#define DMTIMER5_IRQENABLE_CLR_OFFSET 0x30

#define DMTIMER5_IRQWAKEEN (*(volatile unsigned *)0x48046034)
#define DMTIMER5_IRQWAKEEN_OFFSET 0x34

#define DMTIMER5_TCLR (*(volatile unsigned *)0x48046038)
#define DMTIMER5_TCLR_OFFSET 0x38

#define DMTIMER5_TCRR (*(volatile unsigned *)0x4804603C)
#define DMTIMER5_TCRR_OFFSET 0x3C

#define DMTIMER5_TLDR (*(volatile unsigned *)0x48046040)
#define DMTIMER5_TLDR_OFFSET 0x40

#define DMTIMER5_TTGR (*(volatile unsigned *)0x48046044)
#define DMTIMER5_TTGR_OFFSET 0x44

#define DMTIMER5_TWPS (*(volatile unsigned *)0x48046048)
#define DMTIMER5_TWPS_OFFSET 0x48

#define DMTIMER5_TMAR (*(volatile unsigned *)0x4804604C)
#define DMTIMER5_TMAR_OFFSET 0x4C

#define DMTIMER5_TCAR1 (*(volatile unsigned *)0x48046050)
#define DMTIMER5_TCAR1_OFFSET 0x50

#define DMTIMER5_TSICR (*(volatile unsigned *)0x48046054)
#define DMTIMER5_TSICR_OFFSET 0x54

#define DMTIMER5_TCAR2 (*(volatile unsigned *)0x48046058)
#define DMTIMER5_TCAR2_OFFSET 0x58

#ifndef DMTIMER6_BASE
#define DMTIMER6_BASE 0x48048000
#endif

#define DMTIMER6_TIDR (*(volatile unsigned *)0x48048000)
#define DMTIMER6_TIDR_OFFSET 0x0

#define DMTIMER6_TIOCP_CFG (*(volatile unsigned *)0x48048010)
#define DMTIMER6_TIOCP_CFG_OFFSET 0x10

#define DMTIMER6_IRQ_EOI (*(volatile unsigned *)0x48048020)
#define DMTIMER6_IRQ_EOI_OFFSET 0x20

#define DMTIMER6_IRQSTATUS_RAW (*(volatile unsigned *)0x48048024)
#define DMTIMER6_IRQSTATUS_RAW_OFFSET 0x24

#define DMTIMER6_IRQSTATUS (*(volatile unsigned *)0x48048028)
#define DMTIMER6_IRQSTATUS_OFFSET 0x28

#define DMTIMER6_IRQENABLE_SET (*(volatile unsigned *)0x4804802C)
#define DMTIMER6_IRQENABLE_SET_OFFSET 0x2C

#define DMTIMER6_IRQENABLE_CLR (*(volatile unsigned *)0x48048030)
#define DMTIMER6_IRQENABLE_CLR_OFFSET 0x30

#define DMTIMER6_IRQWAKEEN (*(volatile unsigned *)0x48048034)
#define DMTIMER6_IRQWAKEEN_OFFSET 0x34

#define DMTIMER6_TCLR (*(volatile unsigned *)0x48048038)
#define DMTIMER6_TCLR_OFFSET 0x38

#define DMTIMER6_TCRR (*(volatile unsigned *)0x4804803C)
#define DMTIMER6_TCRR_OFFSET 0x3C

#define DMTIMER6_TLDR (*(volatile unsigned *)0x48048040)
#define DMTIMER6_TLDR_OFFSET 0x40

#define DMTIMER6_TTGR (*(volatile unsigned *)0x48048044)
#define DMTIMER6_TTGR_OFFSET 0x44

#define DMTIMER6_TWPS (*(volatile unsigned *)0x48048048)
#define DMTIMER6_TWPS_OFFSET 0x48

#define DMTIMER6_TMAR (*(volatile unsigned *)0x4804804C)
#define DMTIMER6_TMAR_OFFSET 0x4C

#define DMTIMER6_TCAR1 (*(volatile unsigned *)0x48048050)
#define DMTIMER6_TCAR1_OFFSET 0x50

#define DMTIMER6_TSICR (*(volatile unsigned *)0x48048054)
#define DMTIMER6_TSICR_OFFSET 0x54

#define DMTIMER6_TCAR2 (*(volatile unsigned *)0x48048058)
#define DMTIMER6_TCAR2_OFFSET 0x58

#ifndef DMTIMER7_BASE
#define DMTIMER7_BASE 0x4804A000
#endif

#define DMTIMER7_TIDR (*(volatile unsigned *)0x4804A000)
#define DMTIMER7_TIDR_OFFSET 0x0

#define DMTIMER7_TIOCP_CFG (*(volatile unsigned *)0x4804A010)
#define DMTIMER7_TIOCP_CFG_OFFSET 0x10

#define DMTIMER7_IRQ_EOI (*(volatile unsigned *)0x4804A020)
#define DMTIMER7_IRQ_EOI_OFFSET 0x20

#define DMTIMER7_IRQSTATUS_RAW (*(volatile unsigned *)0x4804A024)
#define DMTIMER7_IRQSTATUS_RAW_OFFSET 0x24

#define DMTIMER7_IRQSTATUS (*(volatile unsigned *)0x4804A028)
#define DMTIMER7_IRQSTATUS_OFFSET 0x28

#define DMTIMER7_IRQENABLE_SET (*(volatile unsigned *)0x4804A02C)
#define DMTIMER7_IRQENABLE_SET_OFFSET 0x2C

#define DMTIMER7_IRQENABLE_CLR (*(volatile unsigned *)0x4804A030)
#define DMTIMER7_IRQENABLE_CLR_OFFSET 0x30

#define DMTIMER7_IRQWAKEEN (*(volatile unsigned *)0x4804A034)
#define DMTIMER7_IRQWAKEEN_OFFSET 0x34

#define DMTIMER7_TCLR (*(volatile unsigned *)0x4804A038)
#define DMTIMER7_TCLR_OFFSET 0x38

#define DMTIMER7_TCRR (*(volatile unsigned *)0x4804A03C)
#define DMTIMER7_TCRR_OFFSET 0x3C

#define DMTIMER7_TLDR (*(volatile unsigned *)0x4804A040)
#define DMTIMER7_TLDR_OFFSET 0x40

#define DMTIMER7_TTGR (*(volatile unsigned *)0x4804A044)
#define DMTIMER7_TTGR_OFFSET 0x44

#define DMTIMER7_TWPS (*(volatile unsigned *)0x4804A048)
#define DMTIMER7_TWPS_OFFSET 0x48

#define DMTIMER7_TMAR (*(volatile unsigned *)0x4804A04C)
#define DMTIMER7_TMAR_OFFSET 0x4C

#define DMTIMER7_TCAR1 (*(volatile unsigned *)0x4804A050)
#define DMTIMER7_TCAR1_OFFSET 0x50

#define DMTIMER7_TSICR (*(volatile unsigned *)0x4804A054)
#define DMTIMER7_TSICR_OFFSET 0x54

#define DMTIMER7_TCAR2 (*(volatile unsigned *)0x4804A058)
#define DMTIMER7_TCAR2_OFFSET 0x58

#ifndef GPIO1_BASE
#define GPIO1_BASE 0x4804C000
#endif

#define GPIO1_REVISION (*(volatile unsigned *)0x4804C000)
#define GPIO1_REVISION_OFFSET 0x0

#define GPIO1_SYSCONFIG (*(volatile unsigned *)0x4804C010)
#define GPIO1_SYSCONFIG_OFFSET 0x10

#define GPIO1_EOI (*(volatile unsigned *)0x4804C020)
#define GPIO1_EOI_OFFSET 0x20

#define GPIO1_IRQSTATUS_RAW_0 (*(volatile unsigned *)0x4804C024)
#define GPIO1_IRQSTATUS_RAW_0_OFFSET 0x24

#define GPIO1_IRQSTATUS_RAW_1 (*(volatile unsigned *)0x4804C028)
#define GPIO1_IRQSTATUS_RAW_1_OFFSET 0x28

#define GPIO1_IRQSTATUS_0 (*(volatile unsigned *)0x4804C02C)
#define GPIO1_IRQSTATUS_0_OFFSET 0x2C

#define GPIO1_IRQSTATUS_1 (*(volatile unsigned *)0x4804C030)
#define GPIO1_IRQSTATUS_1_OFFSET 0x30

#define GPIO1_IRQSTATUS_SET_0 (*(volatile unsigned *)0x4804C034)
#define GPIO1_IRQSTATUS_SET_0_OFFSET 0x34

#define GPIO1_IRQSTATUS_SET_1 (*(volatile unsigned *)0x4804C038)
#define GPIO1_IRQSTATUS_SET_1_OFFSET 0x38

#define GPIO1_IRQSTATUS_CLR_0 (*(volatile unsigned *)0x4804C03C)
#define GPIO1_IRQSTATUS_CLR_0_OFFSET 0x3C

#define GPIO1_IRQSTATUS_CLR_1 (*(volatile unsigned *)0x4804C040)
#define GPIO1_IRQSTATUS_CLR_1_OFFSET 0x40

#define GPIO1_SYSSTATUS (*(volatile unsigned *)0x4804C114)
#define GPIO1_SYSSTATUS_OFFSET 0x114

#define GPIO1_WAKEUPENABLE (*(volatile unsigned *)0x4804C120)
#define GPIO1_WAKEUPENABLE_OFFSET 0x120

#define GPIO1_CTRL (*(volatile unsigned *)0x4804C130)
#define GPIO1_CTRL_OFFSET 0x130

#define GPIO1_OE (*(volatile unsigned *)0x4804C134)
#define GPIO1_OE_OFFSET 0x134

#define GPIO1_DATAIN (*(volatile unsigned *)0x4804C138)
#define GPIO1_DATAIN_OFFSET 0x138

#define GPIO1_DATAOUT (*(volatile unsigned *)0x4804C13C)
#define GPIO1_DATAOUT_OFFSET 0x13C

#define GPIO1_LEVELDETECT0 (*(volatile unsigned *)0x4804C140)
#define GPIO1_LEVELDETECT0_OFFSET 0x140

#define GPIO1_LEVELDETECT1 (*(volatile unsigned *)0x4804C144)
#define GPIO1_LEVELDETECT1_OFFSET 0x144

#define GPIO1_RISINGDETECT (*(volatile unsigned *)0x4804C148)
#define GPIO1_RISINGDETECT_OFFSET 0x148

#define GPIO1_FALLINGDETECT (*(volatile unsigned *)0x4804C14C)
#define GPIO1_FALLINGDETECT_OFFSET 0x14C

#define GPIO1_DEBOUNCENABLE (*(volatile unsigned *)0x4804C150)
#define GPIO1_DEBOUNCENABLE_OFFSET 0x150

#define GPIO1_DEBOUNCINGTIME (*(volatile unsigned *)0x4804C154)
#define GPIO1_DEBOUNCINGTIME_OFFSET 0x154

#define GPIO1_CLEARDATAOUT (*(volatile unsigned *)0x4804C190)
#define GPIO1_CLEARDATAOUT_OFFSET 0x190

#define GPIO1_SETDATAOUT (*(volatile unsigned *)0x4804C194)
#define GPIO1_SETDATAOUT_OFFSET 0x194

#ifndef MMCHS0_BASE
#define MMCHS0_BASE 0x48060000
#endif

#define MMCHS0_SD_SYSCONFIG (*(volatile unsigned *)0x48060110)
#define MMCHS0_SD_SYSCONFIG_OFFSET 0x110

#define MMCHS0_SD_SYSSTATUS (*(volatile unsigned *)0x48060114)
#define MMCHS0_SD_SYSSTATUS_OFFSET 0x114

#define MMCHS0_SD_CSRE (*(volatile unsigned *)0x48060124)
#define MMCHS0_SD_CSRE_OFFSET 0x124

#define MMCHS0_SD_SYSTEST (*(volatile unsigned *)0x48060128)
#define MMCHS0_SD_SYSTEST_OFFSET 0x128

#define MMCHS0_SD_CON (*(volatile unsigned *)0x4806012C)
#define MMCHS0_SD_CON_OFFSET 0x12C

#define MMCHS0_SD_PWCNT (*(volatile unsigned *)0x48060130)
#define MMCHS0_SD_PWCNT_OFFSET 0x130

#define MMCHS0_SD_SDMASA (*(volatile unsigned *)0x48060200)
#define MMCHS0_SD_SDMASA_OFFSET 0x200

#define MMCHS0_SD_BLK (*(volatile unsigned *)0x48060204)
#define MMCHS0_SD_BLK_OFFSET 0x204

#define MMCHS0_SD_ARG (*(volatile unsigned *)0x48060208)
#define MMCHS0_SD_ARG_OFFSET 0x208

#define MMCHS0_SD_CMD (*(volatile unsigned *)0x4806020C)
#define MMCHS0_SD_CMD_OFFSET 0x20C

#define MMCHS0_SD_RSP10 (*(volatile unsigned *)0x48060210)
#define MMCHS0_SD_RSP10_OFFSET 0x210

#define MMCHS0_SD_RSP32 (*(volatile unsigned *)0x48060214)
#define MMCHS0_SD_RSP32_OFFSET 0x214

#define MMCHS0_SD_RSP54 (*(volatile unsigned *)0x48060218)
#define MMCHS0_SD_RSP54_OFFSET 0x218

#define MMCHS0_SD_RSP76 (*(volatile unsigned *)0x4806021C)
#define MMCHS0_SD_RSP76_OFFSET 0x21C

#define MMCHS0_SD_DATA (*(volatile unsigned *)0x48060220)
#define MMCHS0_SD_DATA_OFFSET 0x220

#define MMCHS0_SD_PSTATE (*(volatile unsigned *)0x48060224)
#define MMCHS0_SD_PSTATE_OFFSET 0x224

#define MMCHS0_SD_HCTL (*(volatile unsigned *)0x48060228)
#define MMCHS0_SD_HCTL_OFFSET 0x228

#define MMCHS0_SD_SYSCTL (*(volatile unsigned *)0x4806022C)
#define MMCHS0_SD_SYSCTL_OFFSET 0x22C

#define MMCHS0_SD_STAT (*(volatile unsigned *)0x48060230)
#define MMCHS0_SD_STAT_OFFSET 0x230

#define MMCHS0_SD_IE (*(volatile unsigned *)0x48060234)
#define MMCHS0_SD_IE_OFFSET 0x234

#define MMCHS0_SD_ISE (*(volatile unsigned *)0x48060238)
#define MMCHS0_SD_ISE_OFFSET 0x238

#define MMCHS0_SD_AC12 (*(volatile unsigned *)0x4806023C)
#define MMCHS0_SD_AC12_OFFSET 0x23C

#define MMCHS0_SD_CAPA (*(volatile unsigned *)0x48060240)
#define MMCHS0_SD_CAPA_OFFSET 0x240

#define MMCHS0_SD_CUR_CAPA (*(volatile unsigned *)0x48060248)
#define MMCHS0_SD_CUR_CAPA_OFFSET 0x248

#define MMCHS0_SD_FE (*(volatile unsigned *)0x48060250)
#define MMCHS0_SD_FE_OFFSET 0x250

#define MMCHS0_SD_ADMAES (*(volatile unsigned *)0x48060254)
#define MMCHS0_SD_ADMAES_OFFSET 0x254

#define MMCHS0_SD_ADMASAL (*(volatile unsigned *)0x48060258)
#define MMCHS0_SD_ADMASAL_OFFSET 0x258

#define MMCHS0_SD_ADMASAH (*(volatile unsigned *)0x4806025C)
#define MMCHS0_SD_ADMASAH_OFFSET 0x25C

#define MMCHS0_SD_REV (*(volatile unsigned *)0x480602FC)
#define MMCHS0_SD_REV_OFFSET 0x2FC

#ifndef ELM_BASE
#define ELM_BASE 0x48080000
#endif

#define ELM_REVISION (*(volatile unsigned *)0x48080000)
#define ELM_REVISION_OFFSET 0x0

#define ELM_SYSCONFIG (*(volatile unsigned *)0x48080010)
#define ELM_SYSCONFIG_OFFSET 0x10

#define ELM_SYSSTATUS (*(volatile unsigned *)0x48080014)
#define ELM_SYSSTATUS_OFFSET 0x14

#define ELM_IRQSTATUS (*(volatile unsigned *)0x48080018)
#define ELM_IRQSTATUS_OFFSET 0x18

#define ELM_IRQENABLE (*(volatile unsigned *)0x4808001C)
#define ELM_IRQENABLE_OFFSET 0x1C

#define ELM_LOCATION_CONFIG (*(volatile unsigned *)0x48080020)
#define ELM_LOCATION_CONFIG_OFFSET 0x20

#define ELM_PAGE_CTRL (*(volatile unsigned *)0x48080080)
#define ELM_PAGE_CTRL_OFFSET 0x80

#define ELM_SYNDROME_FRAGMENT_0 (*(volatile unsigned *)0x48080400)
#define ELM_SYNDROME_FRAGMENT_0_OFFSET 0x400

#define ELM_SYNDROME_FRAGMENT_1 (*(volatile unsigned *)0x48080404)
#define ELM_SYNDROME_FRAGMENT_1_OFFSET 0x404

#define ELM_SYNDROME_FRAGMENT_2 (*(volatile unsigned *)0x48080408)
#define ELM_SYNDROME_FRAGMENT_2_OFFSET 0x408

#define ELM_SYNDROME_FRAGMENT_3 (*(volatile unsigned *)0x4808040C)
#define ELM_SYNDROME_FRAGMENT_3_OFFSET 0x40C

#define ELM_SYNDROME_FRAGMENT_4 (*(volatile unsigned *)0x48080410)
#define ELM_SYNDROME_FRAGMENT_4_OFFSET 0x410

#define ELM_SYNDROME_FRAGMENT_5 (*(volatile unsigned *)0x48080414)
#define ELM_SYNDROME_FRAGMENT_5_OFFSET 0x414

#define ELM_SYNDROME_FRAGMENT_6 (*(volatile unsigned *)0x48080418)
#define ELM_SYNDROME_FRAGMENT_6_OFFSET 0x418

#define ELM_LOCATION_STATUS (*(volatile unsigned *)0x48080800)
#define ELM_LOCATION_STATUS_OFFSET 0x800

#define ELM_ERROR_LOCATION_0 (*(volatile unsigned *)0x48080880)
#define ELM_ERROR_LOCATION_0_OFFSET 0x880

#define ELM_ERROR_LOCATION_1 (*(volatile unsigned *)0x48080884)
#define ELM_ERROR_LOCATION_1_OFFSET 0x884

#define ELM_ERROR_LOCATION_2 (*(volatile unsigned *)0x48080888)
#define ELM_ERROR_LOCATION_2_OFFSET 0x888

#define ELM_ERROR_LOCATION_3 (*(volatile unsigned *)0x4808088C)
#define ELM_ERROR_LOCATION_3_OFFSET 0x88C

#define ELM_ERROR_LOCATION_4 (*(volatile unsigned *)0x48080890)
#define ELM_ERROR_LOCATION_4_OFFSET 0x890

#define ELM_ERROR_LOCATION_5 (*(volatile unsigned *)0x48080894)
#define ELM_ERROR_LOCATION_5_OFFSET 0x894

#define ELM_ERROR_LOCATION_6 (*(volatile unsigned *)0x48080898)
#define ELM_ERROR_LOCATION_6_OFFSET 0x898

#define ELM_ERROR_LOCATION_7 (*(volatile unsigned *)0x4808089C)
#define ELM_ERROR_LOCATION_7_OFFSET 0x89C

#define ELM_ERROR_LOCATION_8 (*(volatile unsigned *)0x480808A0)
#define ELM_ERROR_LOCATION_8_OFFSET 0x8A0

#define ELM_ERROR_LOCATION_9 (*(volatile unsigned *)0x480808A4)
#define ELM_ERROR_LOCATION_9_OFFSET 0x8A4

#define ELM_ERROR_LOCATION_10 (*(volatile unsigned *)0x480808A8)
#define ELM_ERROR_LOCATION_10_OFFSET 0x8A8

#define ELM_ERROR_LOCATION_11 (*(volatile unsigned *)0x480808AC)
#define ELM_ERROR_LOCATION_11_OFFSET 0x8AC

#define ELM_ERROR_LOCATION_12 (*(volatile unsigned *)0x480808B0)
#define ELM_ERROR_LOCATION_12_OFFSET 0x8B0

#define ELM_ERROR_LOCATION_13 (*(volatile unsigned *)0x480808B4)
#define ELM_ERROR_LOCATION_13_OFFSET 0x8B4

#define ELM_ERROR_LOCATION_14 (*(volatile unsigned *)0x480808B8)
#define ELM_ERROR_LOCATION_14_OFFSET 0x8B8

#define ELM_ERROR_LOCATION_15 (*(volatile unsigned *)0x480808BC)
#define ELM_ERROR_LOCATION_15_OFFSET 0x8BC

#ifndef MAILBOX_BASE
#define MAILBOX_BASE 0x480C8000
#endif

#define MAILBOX_REVISION (*(volatile unsigned *)0x480C8000)
#define MAILBOX_REVISION_OFFSET 0x0

#define MAILBOX_SYSCONFIG (*(volatile unsigned *)0x480C8004)
#define MAILBOX_SYSCONFIG_OFFSET 0x4

#define MAILBOX_MESSAGE_0 (*(volatile unsigned *)0x480C8040)
#define MAILBOX_MESSAGE_0_OFFSET 0x40

#define MAILBOX_MESSAGE_1 (*(volatile unsigned *)0x480C8044)
#define MAILBOX_MESSAGE_1_OFFSET 0x44

#define MAILBOX_MESSAGE_2 (*(volatile unsigned *)0x480C8048)
#define MAILBOX_MESSAGE_2_OFFSET 0x48

#define MAILBOX_MESSAGE_3 (*(volatile unsigned *)0x480C804C)
#define MAILBOX_MESSAGE_3_OFFSET 0x4C

#define MAILBOX_MESSAGE_4 (*(volatile unsigned *)0x480C8050)
#define MAILBOX_MESSAGE_4_OFFSET 0x50

#define MAILBOX_MESSAGE_5 (*(volatile unsigned *)0x480C8054)
#define MAILBOX_MESSAGE_5_OFFSET 0x54

#define MAILBOX_MESSAGE_6 (*(volatile unsigned *)0x480C8058)
#define MAILBOX_MESSAGE_6_OFFSET 0x58

#define MAILBOX_MESSAGE_7 (*(volatile unsigned *)0x480C805C)
#define MAILBOX_MESSAGE_7_OFFSET 0x5C

#define MAILBOX_FIFOSTATUS_0 (*(volatile unsigned *)0x480C8080)
#define MAILBOX_FIFOSTATUS_0_OFFSET 0x80

#define MAILBOX_FIFOSTATUS_1 (*(volatile unsigned *)0x480C8084)
#define MAILBOX_FIFOSTATUS_1_OFFSET 0x84

#define MAILBOX_FIFOSTATUS_2 (*(volatile unsigned *)0x480C8088)
#define MAILBOX_FIFOSTATUS_2_OFFSET 0x88

#define MAILBOX_FIFOSTATUS_3 (*(volatile unsigned *)0x480C808C)
#define MAILBOX_FIFOSTATUS_3_OFFSET 0x8C

#define MAILBOX_FIFOSTATUS_4 (*(volatile unsigned *)0x480C8090)
#define MAILBOX_FIFOSTATUS_4_OFFSET 0x90

#define MAILBOX_FIFOSTATUS_5 (*(volatile unsigned *)0x480C8094)
#define MAILBOX_FIFOSTATUS_5_OFFSET 0x94

#define MAILBOX_FIFOSTATUS_6 (*(volatile unsigned *)0x480C8098)
#define MAILBOX_FIFOSTATUS_6_OFFSET 0x98

#define MAILBOX_FIFOSTATUS_7 (*(volatile unsigned *)0x480C809C)
#define MAILBOX_FIFOSTATUS_7_OFFSET 0x9C

#define MAILBOX_MSGSTATUS_0 (*(volatile unsigned *)0x480C80C0)
#define MAILBOX_MSGSTATUS_0_OFFSET 0xC0

#define MAILBOX_MSGSTATUS_1 (*(volatile unsigned *)0x480C80C4)
#define MAILBOX_MSGSTATUS_1_OFFSET 0xC4

#define MAILBOX_MSGSTATUS_2 (*(volatile unsigned *)0x480C80C8)
#define MAILBOX_MSGSTATUS_2_OFFSET 0xC8

#define MAILBOX_MSGSTATUS_3 (*(volatile unsigned *)0x480C80CC)
#define MAILBOX_MSGSTATUS_3_OFFSET 0xCC

#define MAILBOX_MSGSTATUS_4 (*(volatile unsigned *)0x480C80D0)
#define MAILBOX_MSGSTATUS_4_OFFSET 0xD0

#define MAILBOX_MSGSTATUS_5 (*(volatile unsigned *)0x480C80D4)
#define MAILBOX_MSGSTATUS_5_OFFSET 0xD4

#define MAILBOX_MSGSTATUS_6 (*(volatile unsigned *)0x480C80D8)
#define MAILBOX_MSGSTATUS_6_OFFSET 0xD8

#define MAILBOX_MSGSTATUS_7 (*(volatile unsigned *)0x480C80DC)
#define MAILBOX_MSGSTATUS_7_OFFSET 0xDC

#define MAILBOX_IRQSTATUS_RAW_0 (*(volatile unsigned *)0x480C8100)
#define MAILBOX_IRQSTATUS_RAW_0_OFFSET 0x100

#define MAILBOX_IRQSTATUS_CLR_0 (*(volatile unsigned *)0x480C8104)
#define MAILBOX_IRQSTATUS_CLR_0_OFFSET 0x104

#define MAILBOX_IRQENABLE_SET_0 (*(volatile unsigned *)0x480C8108)
#define MAILBOX_IRQENABLE_SET_0_OFFSET 0x108

#define MAILBOX_IRQENABLE_CLR_0 (*(volatile unsigned *)0x480C810C)
#define MAILBOX_IRQENABLE_CLR_0_OFFSET 0x10C

#define MAILBOX_IRQSTATUS_RAW_1 (*(volatile unsigned *)0x480C8110)
#define MAILBOX_IRQSTATUS_RAW_1_OFFSET 0x110

#define MAILBOX_IRQSTATUS_CLR_1 (*(volatile unsigned *)0x480C8114)
#define MAILBOX_IRQSTATUS_CLR_1_OFFSET 0x114

#define MAILBOX_IRQENABLE_SET_1 (*(volatile unsigned *)0x480C8118)
#define MAILBOX_IRQENABLE_SET_1_OFFSET 0x118

#define MAILBOX_IRQENABLE_CLR_1 (*(volatile unsigned *)0x480C811C)
#define MAILBOX_IRQENABLE_CLR_1_OFFSET 0x11C

#define MAILBOX_IRQSTATUS_RAW_2 (*(volatile unsigned *)0x480C8120)
#define MAILBOX_IRQSTATUS_RAW_2_OFFSET 0x120

#define MAILBOX_IRQSTATUS_CLR_2 (*(volatile unsigned *)0x480C8124)
#define MAILBOX_IRQSTATUS_CLR_2_OFFSET 0x124

#define MAILBOX_IRQENABLE_SET_2 (*(volatile unsigned *)0x480C8128)
#define MAILBOX_IRQENABLE_SET_2_OFFSET 0x128

#define MAILBOX_IRQENABLE_CLR_2 (*(volatile unsigned *)0x480C812C)
#define MAILBOX_IRQENABLE_CLR_2_OFFSET 0x12C

#define MAILBOX_IRQSTATUS_RAW_3 (*(volatile unsigned *)0x480C8130)
#define MAILBOX_IRQSTATUS_RAW_3_OFFSET 0x130

#define MAILBOX_IRQSTATUS_CLR_3 (*(volatile unsigned *)0x480C8134)
#define MAILBOX_IRQSTATUS_CLR_3_OFFSET 0x134

#define MAILBOX_IRQENABLE_SET_3 (*(volatile unsigned *)0x480C8138)
#define MAILBOX_IRQENABLE_SET_3_OFFSET 0x138

#define MAILBOX_IRQENABLE_CLR_3 (*(volatile unsigned *)0x480C813C)
#define MAILBOX_IRQENABLE_CLR_3_OFFSET 0x13C

#ifndef SPINLOCK_BASE
#define SPINLOCK_BASE 0x480CA000
#endif

#define SPINLOCK_REV (*(volatile unsigned *)0x480CA000)
#define SPINLOCK_REV_OFFSET 0x0

#define SPINLOCK_SYSCONFIG (*(volatile unsigned *)0x480CA010)
#define SPINLOCK_SYSCONFIG_OFFSET 0x10

#define SPINLOCK_SYSSTATUS (*(volatile unsigned *)0x480CA010)
#define SPINLOCK_SYSSTATUS_OFFSET 0x10

#define SPINLOCK_LOCK_REG_0 (*(volatile unsigned *)0x480CA800)
#define SPINLOCK_LOCK_REG_0_OFFSET 0x800

#define SPINLOCK_LOCK_REG_1 (*(volatile unsigned *)0x480CA804)
#define SPINLOCK_LOCK_REG_1_OFFSET 0x804

#define SPINLOCK_LOCK_REG_2 (*(volatile unsigned *)0x480CA808)
#define SPINLOCK_LOCK_REG_2_OFFSET 0x808

#define SPINLOCK_LOCK_REG_3 (*(volatile unsigned *)0x480CA80C)
#define SPINLOCK_LOCK_REG_3_OFFSET 0x80C

#define SPINLOCK_LOCK_REG_4 (*(volatile unsigned *)0x480CA810)
#define SPINLOCK_LOCK_REG_4_OFFSET 0x810

#define SPINLOCK_LOCK_REG_5 (*(volatile unsigned *)0x480CA814)
#define SPINLOCK_LOCK_REG_5_OFFSET 0x814

#define SPINLOCK_LOCK_REG_6 (*(volatile unsigned *)0x480CA818)
#define SPINLOCK_LOCK_REG_6_OFFSET 0x818

#define SPINLOCK_LOCK_REG_7 (*(volatile unsigned *)0x480CA81C)
#define SPINLOCK_LOCK_REG_7_OFFSET 0x81C

#define SPINLOCK_LOCK_REG_8 (*(volatile unsigned *)0x480CA820)
#define SPINLOCK_LOCK_REG_8_OFFSET 0x820

#define SPINLOCK_LOCK_REG_9 (*(volatile unsigned *)0x480CA824)
#define SPINLOCK_LOCK_REG_9_OFFSET 0x824

#define SPINLOCK_LOCK_REG_10 (*(volatile unsigned *)0x480CA828)
#define SPINLOCK_LOCK_REG_10_OFFSET 0x828

#define SPINLOCK_LOCK_REG_11 (*(volatile unsigned *)0x480CA82C)
#define SPINLOCK_LOCK_REG_11_OFFSET 0x82C

#define SPINLOCK_LOCK_REG_12 (*(volatile unsigned *)0x480CA830)
#define SPINLOCK_LOCK_REG_12_OFFSET 0x830

#define SPINLOCK_LOCK_REG_13 (*(volatile unsigned *)0x480CA834)
#define SPINLOCK_LOCK_REG_13_OFFSET 0x834

#define SPINLOCK_LOCK_REG_14 (*(volatile unsigned *)0x480CA838)
#define SPINLOCK_LOCK_REG_14_OFFSET 0x838

#define SPINLOCK_LOCK_REG_15 (*(volatile unsigned *)0x480CA83C)
#define SPINLOCK_LOCK_REG_15_OFFSET 0x83C

#define SPINLOCK_LOCK_REG_16 (*(volatile unsigned *)0x480CA840)
#define SPINLOCK_LOCK_REG_16_OFFSET 0x840

#define SPINLOCK_LOCK_REG_17 (*(volatile unsigned *)0x480CA844)
#define SPINLOCK_LOCK_REG_17_OFFSET 0x844

#define SPINLOCK_LOCK_REG_18 (*(volatile unsigned *)0x480CA848)
#define SPINLOCK_LOCK_REG_18_OFFSET 0x848

#define SPINLOCK_LOCK_REG_19 (*(volatile unsigned *)0x480CA84C)
#define SPINLOCK_LOCK_REG_19_OFFSET 0x84C

#define SPINLOCK_LOCK_REG_20 (*(volatile unsigned *)0x480CA850)
#define SPINLOCK_LOCK_REG_20_OFFSET 0x850

#define SPINLOCK_LOCK_REG_21 (*(volatile unsigned *)0x480CA854)
#define SPINLOCK_LOCK_REG_21_OFFSET 0x854

#define SPINLOCK_LOCK_REG_22 (*(volatile unsigned *)0x480CA858)
#define SPINLOCK_LOCK_REG_22_OFFSET 0x858

#define SPINLOCK_LOCK_REG_23 (*(volatile unsigned *)0x480CA85C)
#define SPINLOCK_LOCK_REG_23_OFFSET 0x85C

#define SPINLOCK_LOCK_REG_24 (*(volatile unsigned *)0x480CA860)
#define SPINLOCK_LOCK_REG_24_OFFSET 0x860

#define SPINLOCK_LOCK_REG_25 (*(volatile unsigned *)0x480CA864)
#define SPINLOCK_LOCK_REG_25_OFFSET 0x864

#define SPINLOCK_LOCK_REG_26 (*(volatile unsigned *)0x480CA868)
#define SPINLOCK_LOCK_REG_26_OFFSET 0x868

#define SPINLOCK_LOCK_REG_27 (*(volatile unsigned *)0x480CA86C)
#define SPINLOCK_LOCK_REG_27_OFFSET 0x86C

#define SPINLOCK_LOCK_REG_28 (*(volatile unsigned *)0x480CA870)
#define SPINLOCK_LOCK_REG_28_OFFSET 0x870

#define SPINLOCK_LOCK_REG_29 (*(volatile unsigned *)0x480CA874)
#define SPINLOCK_LOCK_REG_29_OFFSET 0x874

#define SPINLOCK_LOCK_REG_30 (*(volatile unsigned *)0x480CA878)
#define SPINLOCK_LOCK_REG_30_OFFSET 0x878

#define SPINLOCK_LOCK_REG_31 (*(volatile unsigned *)0x480CA87C)
#define SPINLOCK_LOCK_REG_31_OFFSET 0x87C

#ifndef I2C2_BASE
#define I2C2_BASE 0x4819C000
#endif

#define I2C2_REVNB_LO (*(volatile unsigned *)0x4819C000)
#define I2C2_REVNB_LO_OFFSET 0x0

#define I2C2_REVNB_HI (*(volatile unsigned *)0x4819C004)
#define I2C2_REVNB_HI_OFFSET 0x4

#define I2C2_SYSC (*(volatile unsigned *)0x4819C010)
#define I2C2_SYSC_OFFSET 0x10

#define I2C2_EOI (*(volatile unsigned *)0x4819C020)
#define I2C2_EOI_OFFSET 0x20

#define I2C2_IRQSTATUS_RAW (*(volatile unsigned *)0x4819C024)
#define I2C2_IRQSTATUS_RAW_OFFSET 0x24

#define I2C2_IRQSTATUS (*(volatile unsigned *)0x4819C028)
#define I2C2_IRQSTATUS_OFFSET 0x28

#define I2C2_IRQENABLE_SET (*(volatile unsigned *)0x4819C02C)
#define I2C2_IRQENABLE_SET_OFFSET 0x2C

#define I2C2_IRQENABLE_CLR (*(volatile unsigned *)0x4819C030)
#define I2C2_IRQENABLE_CLR_OFFSET 0x30

#define I2C2_WE (*(volatile unsigned *)0x4819C034)
#define I2C2_WE_OFFSET 0x34

#define I2C2_DMARXENABLE_SET (*(volatile unsigned *)0x4819C038)
#define I2C2_DMARXENABLE_SET_OFFSET 0x38

#define I2C2_DMATXENABLE_SET (*(volatile unsigned *)0x4819C03C)
#define I2C2_DMATXENABLE_SET_OFFSET 0x3C

#define I2C2_DMARXENABLE_CLR (*(volatile unsigned *)0x4819C040)
#define I2C2_DMARXENABLE_CLR_OFFSET 0x40

#define I2C2_DMATXENABLE_CLR (*(volatile unsigned *)0x4819C044)
#define I2C2_DMATXENABLE_CLR_OFFSET 0x44

#define I2C2_DMARXWAKE_EN (*(volatile unsigned *)0x4819C048)
#define I2C2_DMARXWAKE_EN_OFFSET 0x48

#define I2C2_DMATXWAKE_EN (*(volatile unsigned *)0x4819C04C)
#define I2C2_DMATXWAKE_EN_OFFSET 0x4C

#define I2C2_SYSS (*(volatile unsigned *)0x4819C090)
#define I2C2_SYSS_OFFSET 0x90

#define I2C2_BUF (*(volatile unsigned *)0x4819C094)
#define I2C2_BUF_OFFSET 0x94

#define I2C2_CNT (*(volatile unsigned *)0x4819C098)
#define I2C2_CNT_OFFSET 0x98

#define I2C2_DATA (*(volatile unsigned *)0x4819C09C)
#define I2C2_DATA_OFFSET 0x9C

#define I2C2_CON (*(volatile unsigned *)0x4819C0A4)
#define I2C2_CON_OFFSET 0xA4

#define I2C2_OA (*(volatile unsigned *)0x4819C0A8)
#define I2C2_OA_OFFSET 0xA8

#define I2C2_SA (*(volatile unsigned *)0x4819C0AC)
#define I2C2_SA_OFFSET 0xAC

#define I2C2_PSC (*(volatile unsigned *)0x4819C0B0)
#define I2C2_PSC_OFFSET 0xB0

#define I2C2_SCLL (*(volatile unsigned *)0x4819C0B4)
#define I2C2_SCLL_OFFSET 0xB4

#define I2C2_SCLH (*(volatile unsigned *)0x4819C0B8)
#define I2C2_SCLH_OFFSET 0xB8

#define I2C2_SYSTEST (*(volatile unsigned *)0x4819C0BC)
#define I2C2_SYSTEST_OFFSET 0xBC

#define I2C2_BUFSTAT (*(volatile unsigned *)0x4819C0C0)
#define I2C2_BUFSTAT_OFFSET 0xC0

#define I2C2_OA1 (*(volatile unsigned *)0x4819C0C4)
#define I2C2_OA1_OFFSET 0xC4

#define I2C2_OA2 (*(volatile unsigned *)0x4819C0C8)
#define I2C2_OA2_OFFSET 0xC8

#define I2C2_OA3 (*(volatile unsigned *)0x4819C0CC)
#define I2C2_OA3_OFFSET 0xCC

#define I2C2_ACTOA (*(volatile unsigned *)0x4819C0D0)
#define I2C2_ACTOA_OFFSET 0xD0

#define I2C2_SBLOCK (*(volatile unsigned *)0x4819C0D4)
#define I2C2_SBLOCK_OFFSET 0xD4

#ifndef MCSPI1_BASE
#define MCSPI1_BASE 0x481A0000
#endif

#define MCSPI1_REVISION (*(volatile unsigned *)0x481A0100)
#define MCSPI1_REVISION_OFFSET 0x100

#define MCSPI1_SYSCONFIG (*(volatile unsigned *)0x481A0110)
#define MCSPI1_SYSCONFIG_OFFSET 0x110

#define MCSPI1_SYSSTATUS (*(volatile unsigned *)0x481A0114)
#define MCSPI1_SYSSTATUS_OFFSET 0x114

#define MCSPI1_IRQSTATUS (*(volatile unsigned *)0x481A0118)
#define MCSPI1_IRQSTATUS_OFFSET 0x118

#define MCSPI1_IRQENABLE (*(volatile unsigned *)0x481A011C)
#define MCSPI1_IRQENABLE_OFFSET 0x11C

#define MCSPI1_WAKEUPENABLE (*(volatile unsigned *)0x481A0120)
#define MCSPI1_WAKEUPENABLE_OFFSET 0x120

#define MCSPI1_SYST (*(volatile unsigned *)0x481A0124)
#define MCSPI1_SYST_OFFSET 0x124

#define MCSPI1_MODULCTRL (*(volatile unsigned *)0x481A0128)
#define MCSPI1_MODULCTRL_OFFSET 0x128

#define MCSPI1_CH0CONF (*(volatile unsigned *)0x481A012C)
#define MCSPI1_CH0CONF_OFFSET 0x12C

#define MCSPI1_CH0STAT (*(volatile unsigned *)0x481A0130)
#define MCSPI1_CH0STAT_OFFSET 0x130

#define MCSPI1_CH0CTRL (*(volatile unsigned *)0x481A0134)
#define MCSPI1_CH0CTRL_OFFSET 0x134

#define MCSPI1_TX0 (*(volatile unsigned *)0x481A0138)
#define MCSPI1_TX0_OFFSET 0x138

#define MCSPI1_RX0 (*(volatile unsigned *)0x481A013C)
#define MCSPI1_RX0_OFFSET 0x13C

#define MCSPI1_CH1CONF (*(volatile unsigned *)0x481A0140)
#define MCSPI1_CH1CONF_OFFSET 0x140

#define MCSPI1_CH1STAT (*(volatile unsigned *)0x481A0144)
#define MCSPI1_CH1STAT_OFFSET 0x144

#define MCSPI1_CH1CTRL (*(volatile unsigned *)0x481A0148)
#define MCSPI1_CH1CTRL_OFFSET 0x148

#define MCSPI1_TX1 (*(volatile unsigned *)0x481A014C)
#define MCSPI1_TX1_OFFSET 0x14C

#define MCSPI1_RX1 (*(volatile unsigned *)0x481A0150)
#define MCSPI1_RX1_OFFSET 0x150

#define MCSPI1_CH2CONF (*(volatile unsigned *)0x481A0154)
#define MCSPI1_CH2CONF_OFFSET 0x154

#define MCSPI1_CH2STAT (*(volatile unsigned *)0x481A0158)
#define MCSPI1_CH2STAT_OFFSET 0x158

#define MCSPI1_CH2CTRL (*(volatile unsigned *)0x481A015C)
#define MCSPI1_CH2CTRL_OFFSET 0x15C

#define MCSPI1_TX2 (*(volatile unsigned *)0x481A0160)
#define MCSPI1_TX2_OFFSET 0x160

#define MCSPI1_RX2 (*(volatile unsigned *)0x481A0164)
#define MCSPI1_RX2_OFFSET 0x164

#define MCSPI1_CH3CONF (*(volatile unsigned *)0x481A0168)
#define MCSPI1_CH3CONF_OFFSET 0x168

#define MCSPI1_CH3STAT (*(volatile unsigned *)0x481A016C)
#define MCSPI1_CH3STAT_OFFSET 0x16C

#define MCSPI1_CH3CTRL (*(volatile unsigned *)0x481A0170)
#define MCSPI1_CH3CTRL_OFFSET 0x170

#define MCSPI1_TX3 (*(volatile unsigned *)0x481A0174)
#define MCSPI1_TX3_OFFSET 0x174

#define MCSPI1_RX3 (*(volatile unsigned *)0x481A0178)
#define MCSPI1_RX3_OFFSET 0x178

#define MCSPI1_XFERLEVEL (*(volatile unsigned *)0x481A017C)
#define MCSPI1_XFERLEVEL_OFFSET 0x17C

#ifndef UART3_BASE
#define UART3_BASE 0x481A6000
#endif

#define UART3_RHR_THR (*(volatile unsigned *)0x481A6000)
#define UART3_RHR_THR_OFFSET 0x0

#define UART3_IER (*(volatile unsigned *)0x481A6004)
#define UART3_IER_OFFSET 0x4

#define UART3_IIR (*(volatile unsigned *)0x481A6008)
#define UART3_IIR_OFFSET 0x8

#define UART3_LCR (*(volatile unsigned *)0x481A600C)
#define UART3_LCR_OFFSET 0xC

#define UART3_MCR (*(volatile unsigned *)0x481A6010)
#define UART3_MCR_OFFSET 0x10

#define UART3_LSR (*(volatile unsigned *)0x481A6014)
#define UART3_LSR_OFFSET 0x14

#define UART3_MSR (*(volatile unsigned *)0x481A6018)
#define UART3_MSR_OFFSET 0x18

#define UART3_SPR (*(volatile unsigned *)0x481A601C)
#define UART3_SPR_OFFSET 0x1C

#define UART3_MDR1 (*(volatile unsigned *)0x481A6020)
#define UART3_MDR1_OFFSET 0x20

#define UART3_MDR2 (*(volatile unsigned *)0x481A6024)
#define UART3_MDR2_OFFSET 0x24

#define UART3_SFLSR (*(volatile unsigned *)0x481A6028)
#define UART3_SFLSR_OFFSET 0x28

#define UART3_RESUME (*(volatile unsigned *)0x481A602C)
#define UART3_RESUME_OFFSET 0x2C

#define UART3_RXFLL (*(volatile unsigned *)0x481A6030)
#define UART3_RXFLL_OFFSET 0x30

#define UART3_RXFLH (*(volatile unsigned *)0x481A6034)
#define UART3_RXFLH_OFFSET 0x34

#define UART3_BLR (*(volatile unsigned *)0x481A6038)
#define UART3_BLR_OFFSET 0x38

#define UART3_ACREG (*(volatile unsigned *)0x481A603C)
#define UART3_ACREG_OFFSET 0x3C

#define UART3_SCR (*(volatile unsigned *)0x481A6040)
#define UART3_SCR_OFFSET 0x40

#define UART3_SSR (*(volatile unsigned *)0x481A6044)
#define UART3_SSR_OFFSET 0x44

#define UART3_EBLR (*(volatile unsigned *)0x481A6048)
#define UART3_EBLR_OFFSET 0x48

#define UART3_MVR (*(volatile unsigned *)0x481A6050)
#define UART3_MVR_OFFSET 0x50

#define UART3_SYSC (*(volatile unsigned *)0x481A6054)
#define UART3_SYSC_OFFSET 0x54

#define UART3_SYSS (*(volatile unsigned *)0x481A6058)
#define UART3_SYSS_OFFSET 0x58

#define UART3_WER (*(volatile unsigned *)0x481A605C)
#define UART3_WER_OFFSET 0x5C

#define UART3_CFPS (*(volatile unsigned *)0x481A6060)
#define UART3_CFPS_OFFSET 0x60

#ifndef UART4_BASE
#define UART4_BASE 0x481A8000
#endif

#define UART4_RHR_THR (*(volatile unsigned *)0x481A8000)
#define UART4_RHR_THR_OFFSET 0x0

#define UART4_IER (*(volatile unsigned *)0x481A8004)
#define UART4_IER_OFFSET 0x4

#define UART4_IIR (*(volatile unsigned *)0x481A8008)
#define UART4_IIR_OFFSET 0x8

#define UART4_LCR (*(volatile unsigned *)0x481A800C)
#define UART4_LCR_OFFSET 0xC

#define UART4_MCR (*(volatile unsigned *)0x481A8010)
#define UART4_MCR_OFFSET 0x10

#define UART4_LSR (*(volatile unsigned *)0x481A8014)
#define UART4_LSR_OFFSET 0x14

#define UART4_MSR (*(volatile unsigned *)0x481A8018)
#define UART4_MSR_OFFSET 0x18

#define UART4_SPR (*(volatile unsigned *)0x481A801C)
#define UART4_SPR_OFFSET 0x1C

#define UART4_MDR1 (*(volatile unsigned *)0x481A8020)
#define UART4_MDR1_OFFSET 0x20

#define UART4_MDR2 (*(volatile unsigned *)0x481A8024)
#define UART4_MDR2_OFFSET 0x24

#define UART4_SFLSR (*(volatile unsigned *)0x481A8028)
#define UART4_SFLSR_OFFSET 0x28

#define UART4_RESUME (*(volatile unsigned *)0x481A802C)
#define UART4_RESUME_OFFSET 0x2C

#define UART4_RXFLL (*(volatile unsigned *)0x481A8030)
#define UART4_RXFLL_OFFSET 0x30

#define UART4_RXFLH (*(volatile unsigned *)0x481A8034)
#define UART4_RXFLH_OFFSET 0x34

#define UART4_BLR (*(volatile unsigned *)0x481A8038)
#define UART4_BLR_OFFSET 0x38

#define UART4_ACREG (*(volatile unsigned *)0x481A803C)
#define UART4_ACREG_OFFSET 0x3C

#define UART4_SCR (*(volatile unsigned *)0x481A8040)
#define UART4_SCR_OFFSET 0x40

#define UART4_SSR (*(volatile unsigned *)0x481A8044)
#define UART4_SSR_OFFSET 0x44

#define UART4_EBLR (*(volatile unsigned *)0x481A8048)
#define UART4_EBLR_OFFSET 0x48

#define UART4_MVR (*(volatile unsigned *)0x481A8050)
#define UART4_MVR_OFFSET 0x50

#define UART4_SYSC (*(volatile unsigned *)0x481A8054)
#define UART4_SYSC_OFFSET 0x54

#define UART4_SYSS (*(volatile unsigned *)0x481A8058)
#define UART4_SYSS_OFFSET 0x58

#define UART4_WER (*(volatile unsigned *)0x481A805C)
#define UART4_WER_OFFSET 0x5C

#define UART4_CFPS (*(volatile unsigned *)0x481A8060)
#define UART4_CFPS_OFFSET 0x60

#ifndef UART5_BASE
#define UART5_BASE 0x481AA000
#endif

#define UART5_RHR_THR (*(volatile unsigned *)0x481AA000)
#define UART5_RHR_THR_OFFSET 0x0

#define UART5_IER (*(volatile unsigned *)0x481AA004)
#define UART5_IER_OFFSET 0x4

#define UART5_IIR (*(volatile unsigned *)0x481AA008)
#define UART5_IIR_OFFSET 0x8

#define UART5_LCR (*(volatile unsigned *)0x481AA00C)
#define UART5_LCR_OFFSET 0xC

#define UART5_MCR (*(volatile unsigned *)0x481AA010)
#define UART5_MCR_OFFSET 0x10

#define UART5_LSR (*(volatile unsigned *)0x481AA014)
#define UART5_LSR_OFFSET 0x14

#define UART5_MSR (*(volatile unsigned *)0x481AA018)
#define UART5_MSR_OFFSET 0x18

#define UART5_SPR (*(volatile unsigned *)0x481AA01C)
#define UART5_SPR_OFFSET 0x1C

#define UART5_MDR1 (*(volatile unsigned *)0x481AA020)
#define UART5_MDR1_OFFSET 0x20

#define UART5_MDR2 (*(volatile unsigned *)0x481AA024)
#define UART5_MDR2_OFFSET 0x24

#define UART5_SFLSR (*(volatile unsigned *)0x481AA028)
#define UART5_SFLSR_OFFSET 0x28

#define UART5_RESUME (*(volatile unsigned *)0x481AA02C)
#define UART5_RESUME_OFFSET 0x2C

#define UART5_RXFLL (*(volatile unsigned *)0x481AA030)
#define UART5_RXFLL_OFFSET 0x30

#define UART5_RXFLH (*(volatile unsigned *)0x481AA034)
#define UART5_RXFLH_OFFSET 0x34

#define UART5_BLR (*(volatile unsigned *)0x481AA038)
#define UART5_BLR_OFFSET 0x38

#define UART5_ACREG (*(volatile unsigned *)0x481AA03C)
#define UART5_ACREG_OFFSET 0x3C

#define UART5_SCR (*(volatile unsigned *)0x481AA040)
#define UART5_SCR_OFFSET 0x40

#define UART5_SSR (*(volatile unsigned *)0x481AA044)
#define UART5_SSR_OFFSET 0x44

#define UART5_EBLR (*(volatile unsigned *)0x481AA048)
#define UART5_EBLR_OFFSET 0x48

#define UART5_MVR (*(volatile unsigned *)0x481AA050)
#define UART5_MVR_OFFSET 0x50

#define UART5_SYSC (*(volatile unsigned *)0x481AA054)
#define UART5_SYSC_OFFSET 0x54

#define UART5_SYSS (*(volatile unsigned *)0x481AA058)
#define UART5_SYSS_OFFSET 0x58

#define UART5_WER (*(volatile unsigned *)0x481AA05C)
#define UART5_WER_OFFSET 0x5C

#define UART5_CFPS (*(volatile unsigned *)0x481AA060)
#define UART5_CFPS_OFFSET 0x60

#ifndef GPIO2_BASE
#define GPIO2_BASE 0x481AC000
#endif

#define GPIO2_REVISION (*(volatile unsigned *)0x481AC000)
#define GPIO2_REVISION_OFFSET 0x0

#define GPIO2_SYSCONFIG (*(volatile unsigned *)0x481AC010)
#define GPIO2_SYSCONFIG_OFFSET 0x10

#define GPIO2_EOI (*(volatile unsigned *)0x481AC020)
#define GPIO2_EOI_OFFSET 0x20

#define GPIO2_IRQSTATUS_RAW_0 (*(volatile unsigned *)0x481AC024)
#define GPIO2_IRQSTATUS_RAW_0_OFFSET 0x24

#define GPIO2_IRQSTATUS_RAW_1 (*(volatile unsigned *)0x481AC028)
#define GPIO2_IRQSTATUS_RAW_1_OFFSET 0x28

#define GPIO2_IRQSTATUS_0 (*(volatile unsigned *)0x481AC02C)
#define GPIO2_IRQSTATUS_0_OFFSET 0x2C

#define GPIO2_IRQSTATUS_1 (*(volatile unsigned *)0x481AC030)
#define GPIO2_IRQSTATUS_1_OFFSET 0x30

#define GPIO2_IRQSTATUS_SET_0 (*(volatile unsigned *)0x481AC034)
#define GPIO2_IRQSTATUS_SET_0_OFFSET 0x34

#define GPIO2_IRQSTATUS_SET_1 (*(volatile unsigned *)0x481AC038)
#define GPIO2_IRQSTATUS_SET_1_OFFSET 0x38

#define GPIO2_IRQSTATUS_CLR_0 (*(volatile unsigned *)0x481AC03C)
#define GPIO2_IRQSTATUS_CLR_0_OFFSET 0x3C

#define GPIO2_IRQSTATUS_CLR_1 (*(volatile unsigned *)0x481AC040)
#define GPIO2_IRQSTATUS_CLR_1_OFFSET 0x40

#define GPIO2_SYSSTATUS (*(volatile unsigned *)0x481AC114)
#define GPIO2_SYSSTATUS_OFFSET 0x114

#define GPIO2_WAKEUPENABLE (*(volatile unsigned *)0x481AC120)
#define GPIO2_WAKEUPENABLE_OFFSET 0x120

#define GPIO2_CTRL (*(volatile unsigned *)0x481AC130)
#define GPIO2_CTRL_OFFSET 0x130

#define GPIO2_OE (*(volatile unsigned *)0x481AC134)
#define GPIO2_OE_OFFSET 0x134

#define GPIO2_DATAIN (*(volatile unsigned *)0x481AC138)
#define GPIO2_DATAIN_OFFSET 0x138

#define GPIO2_DATAOUT (*(volatile unsigned *)0x481AC13C)
#define GPIO2_DATAOUT_OFFSET 0x13C

#define GPIO2_LEVELDETECT0 (*(volatile unsigned *)0x481AC140)
#define GPIO2_LEVELDETECT0_OFFSET 0x140

#define GPIO2_LEVELDETECT1 (*(volatile unsigned *)0x481AC144)
#define GPIO2_LEVELDETECT1_OFFSET 0x144

#define GPIO2_RISINGDETECT (*(volatile unsigned *)0x481AC148)
#define GPIO2_RISINGDETECT_OFFSET 0x148

#define GPIO2_FALLINGDETECT (*(volatile unsigned *)0x481AC14C)
#define GPIO2_FALLINGDETECT_OFFSET 0x14C

#define GPIO2_DEBOUNCENABLE (*(volatile unsigned *)0x481AC150)
#define GPIO2_DEBOUNCENABLE_OFFSET 0x150

#define GPIO2_DEBOUNCINGTIME (*(volatile unsigned *)0x481AC154)
#define GPIO2_DEBOUNCINGTIME_OFFSET 0x154

#define GPIO2_CLEARDATAOUT (*(volatile unsigned *)0x481AC190)
#define GPIO2_CLEARDATAOUT_OFFSET 0x190

#define GPIO2_SETDATAOUT (*(volatile unsigned *)0x481AC194)
#define GPIO2_SETDATAOUT_OFFSET 0x194

#ifndef GPIO3_BASE
#define GPIO3_BASE 0x481AE000
#endif

#define GPIO3_REVISION (*(volatile unsigned *)0x481AE000)
#define GPIO3_REVISION_OFFSET 0x0

#define GPIO3_SYSCONFIG (*(volatile unsigned *)0x481AE010)
#define GPIO3_SYSCONFIG_OFFSET 0x10

#define GPIO3_EOI (*(volatile unsigned *)0x481AE020)
#define GPIO3_EOI_OFFSET 0x20

#define GPIO3_IRQSTATUS_RAW_0 (*(volatile unsigned *)0x481AE024)
#define GPIO3_IRQSTATUS_RAW_0_OFFSET 0x24

#define GPIO3_IRQSTATUS_RAW_1 (*(volatile unsigned *)0x481AE028)
#define GPIO3_IRQSTATUS_RAW_1_OFFSET 0x28

#define GPIO3_IRQSTATUS_0 (*(volatile unsigned *)0x481AE02C)
#define GPIO3_IRQSTATUS_0_OFFSET 0x2C

#define GPIO3_IRQSTATUS_1 (*(volatile unsigned *)0x481AE030)
#define GPIO3_IRQSTATUS_1_OFFSET 0x30

#define GPIO3_IRQSTATUS_SET_0 (*(volatile unsigned *)0x481AE034)
#define GPIO3_IRQSTATUS_SET_0_OFFSET 0x34

#define GPIO3_IRQSTATUS_SET_1 (*(volatile unsigned *)0x481AE038)
#define GPIO3_IRQSTATUS_SET_1_OFFSET 0x38

#define GPIO3_IRQSTATUS_CLR_0 (*(volatile unsigned *)0x481AE03C)
#define GPIO3_IRQSTATUS_CLR_0_OFFSET 0x3C

#define GPIO3_IRQSTATUS_CLR_1 (*(volatile unsigned *)0x481AE040)
#define GPIO3_IRQSTATUS_CLR_1_OFFSET 0x40

#define GPIO3_SYSSTATUS (*(volatile unsigned *)0x481AE114)
#define GPIO3_SYSSTATUS_OFFSET 0x114

#define GPIO3_WAKEUPENABLE (*(volatile unsigned *)0x481AE120)
#define GPIO3_WAKEUPENABLE_OFFSET 0x120

#define GPIO3_CTRL (*(volatile unsigned *)0x481AE130)
#define GPIO3_CTRL_OFFSET 0x130

#define GPIO3_OE (*(volatile unsigned *)0x481AE134)
#define GPIO3_OE_OFFSET 0x134

#define GPIO3_DATAIN (*(volatile unsigned *)0x481AE138)
#define GPIO3_DATAIN_OFFSET 0x138

#define GPIO3_DATAOUT (*(volatile unsigned *)0x481AE13C)
#define GPIO3_DATAOUT_OFFSET 0x13C

#define GPIO3_LEVELDETECT0 (*(volatile unsigned *)0x481AE140)
#define GPIO3_LEVELDETECT0_OFFSET 0x140

#define GPIO3_LEVELDETECT1 (*(volatile unsigned *)0x481AE144)
#define GPIO3_LEVELDETECT1_OFFSET 0x144

#define GPIO3_RISINGDETECT (*(volatile unsigned *)0x481AE148)
#define GPIO3_RISINGDETECT_OFFSET 0x148

#define GPIO3_FALLINGDETECT (*(volatile unsigned *)0x481AE14C)
#define GPIO3_FALLINGDETECT_OFFSET 0x14C

#define GPIO3_DEBOUNCENABLE (*(volatile unsigned *)0x481AE150)
#define GPIO3_DEBOUNCENABLE_OFFSET 0x150

#define GPIO3_DEBOUNCINGTIME (*(volatile unsigned *)0x481AE154)
#define GPIO3_DEBOUNCINGTIME_OFFSET 0x154

#define GPIO3_CLEARDATAOUT (*(volatile unsigned *)0x481AE190)
#define GPIO3_CLEARDATAOUT_OFFSET 0x190

#define GPIO3_SETDATAOUT (*(volatile unsigned *)0x481AE194)
#define GPIO3_SETDATAOUT_OFFSET 0x194

#ifndef DCAN0_BASE
#define DCAN0_BASE 0x481CC000
#endif

#define DCAN0_CTL (*(volatile unsigned *)0x481CC000)
#define DCAN0_CTL_OFFSET 0x0

#define DCAN0_PARITYERR_EOI (*(volatile unsigned *)0x481CC004)
#define DCAN0_PARITYERR_EOI_OFFSET 0x4

#define DCAN0_ES (*(volatile unsigned *)0x481CC004)
#define DCAN0_ES_OFFSET 0x4

#define DCAN0_ERRC (*(volatile unsigned *)0x481CC008)
#define DCAN0_ERRC_OFFSET 0x8

#define DCAN0_BTR (*(volatile unsigned *)0x481CC00C)
#define DCAN0_BTR_OFFSET 0xC

#define DCAN0_INT (*(volatile unsigned *)0x481CC010)
#define DCAN0_INT_OFFSET 0x10

#define DCAN0_TEST (*(volatile unsigned *)0x481CC014)
#define DCAN0_TEST_OFFSET 0x14

#define DCAN0_PERR (*(volatile unsigned *)0x481CC01C)
#define DCAN0_PERR_OFFSET 0x1C

#define DCAN0_ABOTR (*(volatile unsigned *)0x481CC080)
#define DCAN0_ABOTR_OFFSET 0x80

#define DCAN0_TXRQ_X (*(volatile unsigned *)0x481CC084)
#define DCAN0_TXRQ_X_OFFSET 0x84

#define DCAN0_TXRQ12 (*(volatile unsigned *)0x481CC088)
#define DCAN0_TXRQ12_OFFSET 0x88

#define DCAN0_TXRQ34 (*(volatile unsigned *)0x481CC08C)
#define DCAN0_TXRQ34_OFFSET 0x8C

#define DCAN0_TXRQ56 (*(volatile unsigned *)0x481CC090)
#define DCAN0_TXRQ56_OFFSET 0x90

#define DCAN0_TXRQ78 (*(volatile unsigned *)0x481CC094)
#define DCAN0_TXRQ78_OFFSET 0x94

#define DCAN0_NWDAT_X (*(volatile unsigned *)0x481CC098)
#define DCAN0_NWDAT_X_OFFSET 0x98

#define DCAN0_NWDAT12 (*(volatile unsigned *)0x481CC09C)
#define DCAN0_NWDAT12_OFFSET 0x9C

#define DCAN0_NWDAT34 (*(volatile unsigned *)0x481CC0A0)
#define DCAN0_NWDAT34_OFFSET 0xA0

#define DCAN0_NWDAT56 (*(volatile unsigned *)0x481CC0A4)
#define DCAN0_NWDAT56_OFFSET 0xA4

#define DCAN0_NWDAT78 (*(volatile unsigned *)0x481CC0A8)
#define DCAN0_NWDAT78_OFFSET 0xA8

#define DCAN0_INTPND_X (*(volatile unsigned *)0x481CC0AC)
#define DCAN0_INTPND_X_OFFSET 0xAC

#define DCAN0_INTPND12 (*(volatile unsigned *)0x481CC0B0)
#define DCAN0_INTPND12_OFFSET 0xB0

#define DCAN0_INTPND34 (*(volatile unsigned *)0x481CC0B4)
#define DCAN0_INTPND34_OFFSET 0xB4

#define DCAN0_INTPND56 (*(volatile unsigned *)0x481CC0B8)
#define DCAN0_INTPND56_OFFSET 0xB8

#define DCAN0_INTPND78 (*(volatile unsigned *)0x481CC0BC)
#define DCAN0_INTPND78_OFFSET 0xBC

#define DCAN0_MSGVAL_X (*(volatile unsigned *)0x481CC0C0)
#define DCAN0_MSGVAL_X_OFFSET 0xC0

#define DCAN0_MSGVAL12 (*(volatile unsigned *)0x481CC0C4)
#define DCAN0_MSGVAL12_OFFSET 0xC4

#define DCAN0_MSGVAL34 (*(volatile unsigned *)0x481CC0C8)
#define DCAN0_MSGVAL34_OFFSET 0xC8

#define DCAN0_MSGVAL56 (*(volatile unsigned *)0x481CC0CC)
#define DCAN0_MSGVAL56_OFFSET 0xCC

#define DCAN0_MSGVAL78 (*(volatile unsigned *)0x481CC0D0)
#define DCAN0_MSGVAL78_OFFSET 0xD0

#define DCAN0_INTMUX12 (*(volatile unsigned *)0x481CC0D8)
#define DCAN0_INTMUX12_OFFSET 0xD8

#define DCAN0_INTMUX34 (*(volatile unsigned *)0x481CC0DC)
#define DCAN0_INTMUX34_OFFSET 0xDC

#define DCAN0_INTMUX56 (*(volatile unsigned *)0x481CC0E0)
#define DCAN0_INTMUX56_OFFSET 0xE0

#define DCAN0_INTMUX38 (*(volatile unsigned *)0x481CC0E4)
#define DCAN0_INTMUX38_OFFSET 0xE4

#define DCAN0_IF1CMD (*(volatile unsigned *)0x481CC100)
#define DCAN0_IF1CMD_OFFSET 0x100

#define DCAN0_IF1MSK (*(volatile unsigned *)0x481CC104)
#define DCAN0_IF1MSK_OFFSET 0x104

#define DCAN0_IF1ARB (*(volatile unsigned *)0x481CC108)
#define DCAN0_IF1ARB_OFFSET 0x108

#define DCAN0_IF1MCTL (*(volatile unsigned *)0x481CC10C)
#define DCAN0_IF1MCTL_OFFSET 0x10C

#define DCAN0_IF1DATA (*(volatile unsigned *)0x481CC110)
#define DCAN0_IF1DATA_OFFSET 0x110

#define DCAN0_IF1DATB (*(volatile unsigned *)0x481CC114)
#define DCAN0_IF1DATB_OFFSET 0x114

#define DCAN0_IF2CMD (*(volatile unsigned *)0x481CC120)
#define DCAN0_IF2CMD_OFFSET 0x120

#define DCAN0_IF2MSK (*(volatile unsigned *)0x481CC124)
#define DCAN0_IF2MSK_OFFSET 0x124

#define DCAN0_IF2ARB (*(volatile unsigned *)0x481CC128)
#define DCAN0_IF2ARB_OFFSET 0x128

#define DCAN0_IF2MCTL (*(volatile unsigned *)0x481CC12C)
#define DCAN0_IF2MCTL_OFFSET 0x12C

#define DCAN0_IF2DATA (*(volatile unsigned *)0x481CC130)
#define DCAN0_IF2DATA_OFFSET 0x130

#define DCAN0_IF2DATB (*(volatile unsigned *)0x481CC134)
#define DCAN0_IF2DATB_OFFSET 0x134

#define DCAN0_IF3CMD (*(volatile unsigned *)0x481CC140)
#define DCAN0_IF3CMD_OFFSET 0x140

#define DCAN0_IF3MSK (*(volatile unsigned *)0x481CC144)
#define DCAN0_IF3MSK_OFFSET 0x144

#define DCAN0_IF3ARB (*(volatile unsigned *)0x481CC148)
#define DCAN0_IF3ARB_OFFSET 0x148

#define DCAN0_IF3MCTL (*(volatile unsigned *)0x481CC14C)
#define DCAN0_IF3MCTL_OFFSET 0x14C

#define DCAN0_IF3DATA (*(volatile unsigned *)0x481CC150)
#define DCAN0_IF3DATA_OFFSET 0x150

#define DCAN0_IF3DATB (*(volatile unsigned *)0x481CC154)
#define DCAN0_IF3DATB_OFFSET 0x154

#define DCAN0_IF3OBS (*(volatile unsigned *)0x481CC140)
#define DCAN0_IF3OBS_OFFSET 0x140

#define DCAN0_IF3UPD12 (*(volatile unsigned *)0x481CC160)
#define DCAN0_IF3UPD12_OFFSET 0x160

#define DCAN0_IF3UPD34 (*(volatile unsigned *)0x481CC164)
#define DCAN0_IF3UPD34_OFFSET 0x164

#define DCAN0_IF3UPD56 (*(volatile unsigned *)0x481CC168)
#define DCAN0_IF3UPD56_OFFSET 0x168

#define DCAN0_IF3UPD78 (*(volatile unsigned *)0x481CC16C)
#define DCAN0_IF3UPD78_OFFSET 0x16C

#define DCAN0_TIOC (*(volatile unsigned *)0x481CC1E0)
#define DCAN0_TIOC_OFFSET 0x1E0

#define DCAN0_RIOC (*(volatile unsigned *)0x481CC1E4)
#define DCAN0_RIOC_OFFSET 0x1E4

#ifndef DCAN1_BASE
#define DCAN1_BASE 0x481D0000
#endif

#define DCAN1_CTL (*(volatile unsigned *)0x481D0000)
#define DCAN1_CTL_OFFSET 0x0

#define DCAN1_PARITYERR_EOI (*(volatile unsigned *)0x481D0004)
#define DCAN1_PARITYERR_EOI_OFFSET 0x4

#define DCAN1_ES (*(volatile unsigned *)0x481D0004)
#define DCAN1_ES_OFFSET 0x4

#define DCAN1_ERRC (*(volatile unsigned *)0x481D0008)
#define DCAN1_ERRC_OFFSET 0x8

#define DCAN1_BTR (*(volatile unsigned *)0x481D000C)
#define DCAN1_BTR_OFFSET 0xC

#define DCAN1_INT (*(volatile unsigned *)0x481D0010)
#define DCAN1_INT_OFFSET 0x10

#define DCAN1_TEST (*(volatile unsigned *)0x481D0014)
#define DCAN1_TEST_OFFSET 0x14

#define DCAN1_PERR (*(volatile unsigned *)0x481D001C)
#define DCAN1_PERR_OFFSET 0x1C

#define DCAN1_ABOTR (*(volatile unsigned *)0x481D0080)
#define DCAN1_ABOTR_OFFSET 0x80

#define DCAN1_TXRQ_X (*(volatile unsigned *)0x481D0084)
#define DCAN1_TXRQ_X_OFFSET 0x84

#define DCAN1_TXRQ12 (*(volatile unsigned *)0x481D0088)
#define DCAN1_TXRQ12_OFFSET 0x88

#define DCAN1_TXRQ34 (*(volatile unsigned *)0x481D008C)
#define DCAN1_TXRQ34_OFFSET 0x8C

#define DCAN1_TXRQ56 (*(volatile unsigned *)0x481D0090)
#define DCAN1_TXRQ56_OFFSET 0x90

#define DCAN1_TXRQ78 (*(volatile unsigned *)0x481D0094)
#define DCAN1_TXRQ78_OFFSET 0x94

#define DCAN1_NWDAT_X (*(volatile unsigned *)0x481D0098)
#define DCAN1_NWDAT_X_OFFSET 0x98

#define DCAN1_NWDAT12 (*(volatile unsigned *)0x481D009C)
#define DCAN1_NWDAT12_OFFSET 0x9C

#define DCAN1_NWDAT34 (*(volatile unsigned *)0x481D00A0)
#define DCAN1_NWDAT34_OFFSET 0xA0

#define DCAN1_NWDAT56 (*(volatile unsigned *)0x481D00A4)
#define DCAN1_NWDAT56_OFFSET 0xA4

#define DCAN1_NWDAT78 (*(volatile unsigned *)0x481D00A8)
#define DCAN1_NWDAT78_OFFSET 0xA8

#define DCAN1_INTPND_X (*(volatile unsigned *)0x481D00AC)
#define DCAN1_INTPND_X_OFFSET 0xAC

#define DCAN1_INTPND12 (*(volatile unsigned *)0x481D00B0)
#define DCAN1_INTPND12_OFFSET 0xB0

#define DCAN1_INTPND34 (*(volatile unsigned *)0x481D00B4)
#define DCAN1_INTPND34_OFFSET 0xB4

#define DCAN1_INTPND56 (*(volatile unsigned *)0x481D00B8)
#define DCAN1_INTPND56_OFFSET 0xB8

#define DCAN1_INTPND78 (*(volatile unsigned *)0x481D00BC)
#define DCAN1_INTPND78_OFFSET 0xBC

#define DCAN1_MSGVAL_X (*(volatile unsigned *)0x481D00C0)
#define DCAN1_MSGVAL_X_OFFSET 0xC0

#define DCAN1_MSGVAL12 (*(volatile unsigned *)0x481D00C4)
#define DCAN1_MSGVAL12_OFFSET 0xC4

#define DCAN1_MSGVAL34 (*(volatile unsigned *)0x481D00C8)
#define DCAN1_MSGVAL34_OFFSET 0xC8

#define DCAN1_MSGVAL56 (*(volatile unsigned *)0x481D00CC)
#define DCAN1_MSGVAL56_OFFSET 0xCC

#define DCAN1_MSGVAL78 (*(volatile unsigned *)0x481D00D0)
#define DCAN1_MSGVAL78_OFFSET 0xD0

#define DCAN1_INTMUX12 (*(volatile unsigned *)0x481D00D8)
#define DCAN1_INTMUX12_OFFSET 0xD8

#define DCAN1_INTMUX34 (*(volatile unsigned *)0x481D00DC)
#define DCAN1_INTMUX34_OFFSET 0xDC

#define DCAN1_INTMUX56 (*(volatile unsigned *)0x481D00E0)
#define DCAN1_INTMUX56_OFFSET 0xE0

#define DCAN1_INTMUX38 (*(volatile unsigned *)0x481D00E4)
#define DCAN1_INTMUX38_OFFSET 0xE4

#define DCAN1_IF1CMD (*(volatile unsigned *)0x481D0100)
#define DCAN1_IF1CMD_OFFSET 0x100

#define DCAN1_IF1MSK (*(volatile unsigned *)0x481D0104)
#define DCAN1_IF1MSK_OFFSET 0x104

#define DCAN1_IF1ARB (*(volatile unsigned *)0x481D0108)
#define DCAN1_IF1ARB_OFFSET 0x108

#define DCAN1_IF1MCTL (*(volatile unsigned *)0x481D010C)
#define DCAN1_IF1MCTL_OFFSET 0x10C

#define DCAN1_IF1DATA (*(volatile unsigned *)0x481D0110)
#define DCAN1_IF1DATA_OFFSET 0x110

#define DCAN1_IF1DATB (*(volatile unsigned *)0x481D0114)
#define DCAN1_IF1DATB_OFFSET 0x114

#define DCAN1_IF2CMD (*(volatile unsigned *)0x481D0120)
#define DCAN1_IF2CMD_OFFSET 0x120

#define DCAN1_IF2MSK (*(volatile unsigned *)0x481D0124)
#define DCAN1_IF2MSK_OFFSET 0x124

#define DCAN1_IF2ARB (*(volatile unsigned *)0x481D0128)
#define DCAN1_IF2ARB_OFFSET 0x128

#define DCAN1_IF2MCTL (*(volatile unsigned *)0x481D012C)
#define DCAN1_IF2MCTL_OFFSET 0x12C

#define DCAN1_IF2DATA (*(volatile unsigned *)0x481D0130)
#define DCAN1_IF2DATA_OFFSET 0x130

#define DCAN1_IF2DATB (*(volatile unsigned *)0x481D0134)
#define DCAN1_IF2DATB_OFFSET 0x134

#define DCAN1_IF3CMD (*(volatile unsigned *)0x481D0140)
#define DCAN1_IF3CMD_OFFSET 0x140

#define DCAN1_IF3MSK (*(volatile unsigned *)0x481D0144)
#define DCAN1_IF3MSK_OFFSET 0x144

#define DCAN1_IF3ARB (*(volatile unsigned *)0x481D0148)
#define DCAN1_IF3ARB_OFFSET 0x148

#define DCAN1_IF3MCTL (*(volatile unsigned *)0x481D014C)
#define DCAN1_IF3MCTL_OFFSET 0x14C

#define DCAN1_IF3DATA (*(volatile unsigned *)0x481D0150)
#define DCAN1_IF3DATA_OFFSET 0x150

#define DCAN1_IF3DATB (*(volatile unsigned *)0x481D0154)
#define DCAN1_IF3DATB_OFFSET 0x154

#define DCAN1_IF3OBS (*(volatile unsigned *)0x481D0140)
#define DCAN1_IF3OBS_OFFSET 0x140

#define DCAN1_IF3UPD12 (*(volatile unsigned *)0x481D0160)
#define DCAN1_IF3UPD12_OFFSET 0x160

#define DCAN1_IF3UPD34 (*(volatile unsigned *)0x481D0164)
#define DCAN1_IF3UPD34_OFFSET 0x164

#define DCAN1_IF3UPD56 (*(volatile unsigned *)0x481D0168)
#define DCAN1_IF3UPD56_OFFSET 0x168

#define DCAN1_IF3UPD78 (*(volatile unsigned *)0x481D016C)
#define DCAN1_IF3UPD78_OFFSET 0x16C

#define DCAN1_TIOC (*(volatile unsigned *)0x481D01E0)
#define DCAN1_TIOC_OFFSET 0x1E0

#define DCAN1_RIOC (*(volatile unsigned *)0x481D01E4)
#define DCAN1_RIOC_OFFSET 0x1E4

#ifndef MMCHS1_BASE
#define MMCHS1_BASE 0x481D8000
#endif

#define MMCHS1_SD_SYSCONFIG (*(volatile unsigned *)0x481D8110)
#define MMCHS1_SD_SYSCONFIG_OFFSET 0x110

#define MMCHS1_SD_SYSSTATUS (*(volatile unsigned *)0x481D8114)
#define MMCHS1_SD_SYSSTATUS_OFFSET 0x114

#define MMCHS1_SD_CSRE (*(volatile unsigned *)0x481D8124)
#define MMCHS1_SD_CSRE_OFFSET 0x124

#define MMCHS1_SD_SYSTEST (*(volatile unsigned *)0x481D8128)
#define MMCHS1_SD_SYSTEST_OFFSET 0x128

#define MMCHS1_SD_CON (*(volatile unsigned *)0x481D812C)
#define MMCHS1_SD_CON_OFFSET 0x12C

#define MMCHS1_SD_PWCNT (*(volatile unsigned *)0x481D8130)
#define MMCHS1_SD_PWCNT_OFFSET 0x130

#define MMCHS1_SD_SDMASA (*(volatile unsigned *)0x481D8200)
#define MMCHS1_SD_SDMASA_OFFSET 0x200

#define MMCHS1_SD_BLK (*(volatile unsigned *)0x481D8204)
#define MMCHS1_SD_BLK_OFFSET 0x204

#define MMCHS1_SD_ARG (*(volatile unsigned *)0x481D8208)
#define MMCHS1_SD_ARG_OFFSET 0x208

#define MMCHS1_SD_CMD (*(volatile unsigned *)0x481D820C)
#define MMCHS1_SD_CMD_OFFSET 0x20C

#define MMCHS1_SD_RSP10 (*(volatile unsigned *)0x481D8210)
#define MMCHS1_SD_RSP10_OFFSET 0x210

#define MMCHS1_SD_RSP32 (*(volatile unsigned *)0x481D8214)
#define MMCHS1_SD_RSP32_OFFSET 0x214

#define MMCHS1_SD_RSP54 (*(volatile unsigned *)0x481D8218)
#define MMCHS1_SD_RSP54_OFFSET 0x218

#define MMCHS1_SD_RSP76 (*(volatile unsigned *)0x481D821C)
#define MMCHS1_SD_RSP76_OFFSET 0x21C

#define MMCHS1_SD_DATA (*(volatile unsigned *)0x481D8220)
#define MMCHS1_SD_DATA_OFFSET 0x220

#define MMCHS1_SD_PSTATE (*(volatile unsigned *)0x481D8224)
#define MMCHS1_SD_PSTATE_OFFSET 0x224

#define MMCHS1_SD_HCTL (*(volatile unsigned *)0x481D8228)
#define MMCHS1_SD_HCTL_OFFSET 0x228

#define MMCHS1_SD_SYSCTL (*(volatile unsigned *)0x481D822C)
#define MMCHS1_SD_SYSCTL_OFFSET 0x22C

#define MMCHS1_SD_STAT (*(volatile unsigned *)0x481D8230)
#define MMCHS1_SD_STAT_OFFSET 0x230

#define MMCHS1_SD_IE (*(volatile unsigned *)0x481D8234)
#define MMCHS1_SD_IE_OFFSET 0x234

#define MMCHS1_SD_ISE (*(volatile unsigned *)0x481D8238)
#define MMCHS1_SD_ISE_OFFSET 0x238

#define MMCHS1_SD_AC12 (*(volatile unsigned *)0x481D823C)
#define MMCHS1_SD_AC12_OFFSET 0x23C

#define MMCHS1_SD_CAPA (*(volatile unsigned *)0x481D8240)
#define MMCHS1_SD_CAPA_OFFSET 0x240

#define MMCHS1_SD_CUR_CAPA (*(volatile unsigned *)0x481D8248)
#define MMCHS1_SD_CUR_CAPA_OFFSET 0x248

#define MMCHS1_SD_FE (*(volatile unsigned *)0x481D8250)
#define MMCHS1_SD_FE_OFFSET 0x250

#define MMCHS1_SD_ADMAES (*(volatile unsigned *)0x481D8254)
#define MMCHS1_SD_ADMAES_OFFSET 0x254

#define MMCHS1_SD_ADMASAL (*(volatile unsigned *)0x481D8258)
#define MMCHS1_SD_ADMASAL_OFFSET 0x258

#define MMCHS1_SD_ADMASAH (*(volatile unsigned *)0x481D825C)
#define MMCHS1_SD_ADMASAH_OFFSET 0x25C

#define MMCHS1_SD_REV (*(volatile unsigned *)0x481D82FC)
#define MMCHS1_SD_REV_OFFSET 0x2FC

#ifndef INTC_BASE
#define INTC_BASE 0x48200000
#endif

#define INTC_REVISION (*(volatile unsigned *)0x48200000)
#define INTC_REVISION_OFFSET 0x0

#define INTC_SYSCONFIG (*(volatile unsigned *)0x48200010)
#define INTC_SYSCONFIG_OFFSET 0x10

#define INTC_SYSSTATUS (*(volatile unsigned *)0x48200014)
#define INTC_SYSSTATUS_OFFSET 0x14

#define INTC_SIR_IRQ (*(volatile unsigned *)0x48200040)
#define INTC_SIR_IRQ_OFFSET 0x40

#define INTC_SIR_FIQ (*(volatile unsigned *)0x48200044)
#define INTC_SIR_FIQ_OFFSET 0x44

#define INTC_CONTROL (*(volatile unsigned *)0x48200048)
#define INTC_CONTROL_OFFSET 0x48

#define INTC_PROTECTION (*(volatile unsigned *)0x4820004C)
#define INTC_PROTECTION_OFFSET 0x4C

#define INTC_IDLE (*(volatile unsigned *)0x48200050)
#define INTC_IDLE_OFFSET 0x50

#define INTC_IRQ_PRIORITY (*(volatile unsigned *)0x48200060)
#define INTC_IRQ_PRIORITY_OFFSET 0x60

#define INTC_FIQ_PRIORITY (*(volatile unsigned *)0x48200064)
#define INTC_FIQ_PRIORITY_OFFSET 0x64

#define INTC_THRESHOLD (*(volatile unsigned *)0x48200068)
#define INTC_THRESHOLD_OFFSET 0x68

#define INTC_ITR0 (*(volatile unsigned *)0x48200080)
#define INTC_ITR0_OFFSET 0x80

#define INTC_MIR0 (*(volatile unsigned *)0x48200084)
#define INTC_MIR0_OFFSET 0x84

#define INTC_MIR_CLEAR0 (*(volatile unsigned *)0x48200088)
#define INTC_MIR_CLEAR0_OFFSET 0x88

#define INTC_MIR_SET0 (*(volatile unsigned *)0x4820008C)
#define INTC_MIR_SET0_OFFSET 0x8C

#define INTC_ISR_SET0 (*(volatile unsigned *)0x48200090)
#define INTC_ISR_SET0_OFFSET 0x90

#define INTC_ISR_CLEAR0 (*(volatile unsigned *)0x48200094)
#define INTC_ISR_CLEAR0_OFFSET 0x94

#define INTC_PENDING_IRQ0 (*(volatile unsigned *)0x48200098)
#define INTC_PENDING_IRQ0_OFFSET 0x98

#define INTC_PENDING_FIQ0 (*(volatile unsigned *)0x4820009C)
#define INTC_PENDING_FIQ0_OFFSET 0x9C

#define INTC_ITR1 (*(volatile unsigned *)0x482000A0)
#define INTC_ITR1_OFFSET 0xA0

#define INTC_MIR1 (*(volatile unsigned *)0x482000A4)
#define INTC_MIR1_OFFSET 0xA4

#define INTC_MIR_CLEAR1 (*(volatile unsigned *)0x482000A8)
#define INTC_MIR_CLEAR1_OFFSET 0xA8

#define INTC_MIR_SET1 (*(volatile unsigned *)0x482000AC)
#define INTC_MIR_SET1_OFFSET 0xAC

#define INTC_ISR_SET1 (*(volatile unsigned *)0x482000B0)
#define INTC_ISR_SET1_OFFSET 0xB0

#define INTC_ISR_CLEAR1 (*(volatile unsigned *)0x482000B4)
#define INTC_ISR_CLEAR1_OFFSET 0xB4

#define INTC_PENDING_IRQ1 (*(volatile unsigned *)0x482000B8)
#define INTC_PENDING_IRQ1_OFFSET 0xB8

#define INTC_PENDING_FIQ1 (*(volatile unsigned *)0x482000BC)
#define INTC_PENDING_FIQ1_OFFSET 0xBC

#define INTC_ITR2 (*(volatile unsigned *)0x482000C0)
#define INTC_ITR2_OFFSET 0xC0

#define INTC_MIR2 (*(volatile unsigned *)0x482000C4)
#define INTC_MIR2_OFFSET 0xC4

#define INTC_MIR_CLEAR2 (*(volatile unsigned *)0x482000C8)
#define INTC_MIR_CLEAR2_OFFSET 0xC8

#define INTC_MIR_SET2 (*(volatile unsigned *)0x482000CC)
#define INTC_MIR_SET2_OFFSET 0xCC

#define INTC_ISR_SET2 (*(volatile unsigned *)0x482000D0)
#define INTC_ISR_SET2_OFFSET 0xD0

#define INTC_ISR_CLEAR2 (*(volatile unsigned *)0x482000D4)
#define INTC_ISR_CLEAR2_OFFSET 0xD4

#define INTC_PENDING_IRQ2 (*(volatile unsigned *)0x482000D8)
#define INTC_PENDING_IRQ2_OFFSET 0xD8

#define INTC_PENDING_FIQ2 (*(volatile unsigned *)0x482000DC)
#define INTC_PENDING_FIQ2_OFFSET 0xDC

#define INTC_ITR3 (*(volatile unsigned *)0x482000E0)
#define INTC_ITR3_OFFSET 0xE0

#define INTC_MIR3 (*(volatile unsigned *)0x482000E4)
#define INTC_MIR3_OFFSET 0xE4

#define INTC_MIR_CLEAR3 (*(volatile unsigned *)0x482000E8)
#define INTC_MIR_CLEAR3_OFFSET 0xE8

#define INTC_MIR_SET3 (*(volatile unsigned *)0x482000EC)
#define INTC_MIR_SET3_OFFSET 0xEC

#define INTC_ISR_SET3 (*(volatile unsigned *)0x482000F0)
#define INTC_ISR_SET3_OFFSET 0xF0

#define INTC_ISR_CLEAR3 (*(volatile unsigned *)0x482000F4)
#define INTC_ISR_CLEAR3_OFFSET 0xF4

#define INTC_PENDING_IRQ3 (*(volatile unsigned *)0x482000F8)
#define INTC_PENDING_IRQ3_OFFSET 0xF8

#define INTC_PENDING_FIQ3 (*(volatile unsigned *)0x482000FC)
#define INTC_PENDING_FIQ3_OFFSET 0xFC

#define INTC_ILR0 (*(volatile unsigned *)0x48200100)
#define INTC_ILR0_OFFSET 0x100

#define INTC_ILR1 (*(volatile unsigned *)0x48200104)
#define INTC_ILR1_OFFSET 0x104

#define INTC_ILR2 (*(volatile unsigned *)0x48200108)
#define INTC_ILR2_OFFSET 0x108

#define INTC_ILR3 (*(volatile unsigned *)0x4820010C)
#define INTC_ILR3_OFFSET 0x10C

#define INTC_ILR4 (*(volatile unsigned *)0x48200110)
#define INTC_ILR4_OFFSET 0x110

#define INTC_ILR5 (*(volatile unsigned *)0x48200114)
#define INTC_ILR5_OFFSET 0x114

#define INTC_ILR6 (*(volatile unsigned *)0x48200118)
#define INTC_ILR6_OFFSET 0x118

#define INTC_ILR7 (*(volatile unsigned *)0x4820011C)
#define INTC_ILR7_OFFSET 0x11C

#define INTC_ILR8 (*(volatile unsigned *)0x48200120)
#define INTC_ILR8_OFFSET 0x120

#define INTC_ILR9 (*(volatile unsigned *)0x48200124)
#define INTC_ILR9_OFFSET 0x124

#define INTC_ILR10 (*(volatile unsigned *)0x48200128)
#define INTC_ILR10_OFFSET 0x128

#define INTC_ILR11 (*(volatile unsigned *)0x4820012C)
#define INTC_ILR11_OFFSET 0x12C

#define INTC_ILR12 (*(volatile unsigned *)0x48200130)
#define INTC_ILR12_OFFSET 0x130

#define INTC_ILR13 (*(volatile unsigned *)0x48200134)
#define INTC_ILR13_OFFSET 0x134

#define INTC_ILR14 (*(volatile unsigned *)0x48200138)
#define INTC_ILR14_OFFSET 0x138

#define INTC_ILR15 (*(volatile unsigned *)0x4820013C)
#define INTC_ILR15_OFFSET 0x13C

#define INTC_ILR16 (*(volatile unsigned *)0x48200140)
#define INTC_ILR16_OFFSET 0x140

#define INTC_ILR17 (*(volatile unsigned *)0x48200144)
#define INTC_ILR17_OFFSET 0x144

#define INTC_ILR18 (*(volatile unsigned *)0x48200148)
#define INTC_ILR18_OFFSET 0x148

#define INTC_ILR19 (*(volatile unsigned *)0x4820014C)
#define INTC_ILR19_OFFSET 0x14C

#define INTC_ILR20 (*(volatile unsigned *)0x48200150)
#define INTC_ILR20_OFFSET 0x150

#define INTC_ILR21 (*(volatile unsigned *)0x48200154)
#define INTC_ILR21_OFFSET 0x154

#define INTC_ILR22 (*(volatile unsigned *)0x48200158)
#define INTC_ILR22_OFFSET 0x158

#define INTC_ILR23 (*(volatile unsigned *)0x4820015C)
#define INTC_ILR23_OFFSET 0x15C

#define INTC_ILR24 (*(volatile unsigned *)0x48200160)
#define INTC_ILR24_OFFSET 0x160

#define INTC_ILR25 (*(volatile unsigned *)0x48200164)
#define INTC_ILR25_OFFSET 0x164

#define INTC_ILR26 (*(volatile unsigned *)0x48200168)
#define INTC_ILR26_OFFSET 0x168

#define INTC_ILR27 (*(volatile unsigned *)0x4820016C)
#define INTC_ILR27_OFFSET 0x16C

#define INTC_ILR28 (*(volatile unsigned *)0x48200170)
#define INTC_ILR28_OFFSET 0x170

#define INTC_ILR29 (*(volatile unsigned *)0x48200174)
#define INTC_ILR29_OFFSET 0x174

#define INTC_ILR30 (*(volatile unsigned *)0x48200178)
#define INTC_ILR30_OFFSET 0x178

#define INTC_ILR31 (*(volatile unsigned *)0x4820017C)
#define INTC_ILR31_OFFSET 0x17C

#define INTC_ILR32 (*(volatile unsigned *)0x48200180)
#define INTC_ILR32_OFFSET 0x180

#define INTC_ILR33 (*(volatile unsigned *)0x48200184)
#define INTC_ILR33_OFFSET 0x184

#define INTC_ILR34 (*(volatile unsigned *)0x48200188)
#define INTC_ILR34_OFFSET 0x188

#define INTC_ILR35 (*(volatile unsigned *)0x4820018C)
#define INTC_ILR35_OFFSET 0x18C

#define INTC_ILR36 (*(volatile unsigned *)0x48200190)
#define INTC_ILR36_OFFSET 0x190

#define INTC_ILR37 (*(volatile unsigned *)0x48200194)
#define INTC_ILR37_OFFSET 0x194

#define INTC_ILR38 (*(volatile unsigned *)0x48200198)
#define INTC_ILR38_OFFSET 0x198

#define INTC_ILR39 (*(volatile unsigned *)0x4820019C)
#define INTC_ILR39_OFFSET 0x19C

#define INTC_ILR40 (*(volatile unsigned *)0x482001A0)
#define INTC_ILR40_OFFSET 0x1A0

#define INTC_ILR41 (*(volatile unsigned *)0x482001A4)
#define INTC_ILR41_OFFSET 0x1A4

#define INTC_ILR42 (*(volatile unsigned *)0x482001A8)
#define INTC_ILR42_OFFSET 0x1A8

#define INTC_ILR43 (*(volatile unsigned *)0x482001AC)
#define INTC_ILR43_OFFSET 0x1AC

#define INTC_ILR44 (*(volatile unsigned *)0x482001B0)
#define INTC_ILR44_OFFSET 0x1B0

#define INTC_ILR45 (*(volatile unsigned *)0x482001B4)
#define INTC_ILR45_OFFSET 0x1B4

#define INTC_ILR46 (*(volatile unsigned *)0x482001B8)
#define INTC_ILR46_OFFSET 0x1B8

#define INTC_ILR47 (*(volatile unsigned *)0x482001BC)
#define INTC_ILR47_OFFSET 0x1BC

#define INTC_ILR48 (*(volatile unsigned *)0x482001C0)
#define INTC_ILR48_OFFSET 0x1C0

#define INTC_ILR49 (*(volatile unsigned *)0x482001C4)
#define INTC_ILR49_OFFSET 0x1C4

#define INTC_ILR50 (*(volatile unsigned *)0x482001C8)
#define INTC_ILR50_OFFSET 0x1C8

#define INTC_ILR51 (*(volatile unsigned *)0x482001CC)
#define INTC_ILR51_OFFSET 0x1CC

#define INTC_ILR52 (*(volatile unsigned *)0x482001D0)
#define INTC_ILR52_OFFSET 0x1D0

#define INTC_ILR53 (*(volatile unsigned *)0x482001D4)
#define INTC_ILR53_OFFSET 0x1D4

#define INTC_ILR54 (*(volatile unsigned *)0x482001D8)
#define INTC_ILR54_OFFSET 0x1D8

#define INTC_ILR55 (*(volatile unsigned *)0x482001DC)
#define INTC_ILR55_OFFSET 0x1DC

#define INTC_ILR56 (*(volatile unsigned *)0x482001E0)
#define INTC_ILR56_OFFSET 0x1E0

#define INTC_ILR57 (*(volatile unsigned *)0x482001E4)
#define INTC_ILR57_OFFSET 0x1E4

#define INTC_ILR58 (*(volatile unsigned *)0x482001E8)
#define INTC_ILR58_OFFSET 0x1E8

#define INTC_ILR59 (*(volatile unsigned *)0x482001EC)
#define INTC_ILR59_OFFSET 0x1EC

#define INTC_ILR60 (*(volatile unsigned *)0x482001F0)
#define INTC_ILR60_OFFSET 0x1F0

#define INTC_ILR61 (*(volatile unsigned *)0x482001F4)
#define INTC_ILR61_OFFSET 0x1F4

#define INTC_ILR62 (*(volatile unsigned *)0x482001F8)
#define INTC_ILR62_OFFSET 0x1F8

#define INTC_ILR63 (*(volatile unsigned *)0x482001FC)
#define INTC_ILR63_OFFSET 0x1FC

#define INTC_ILR64 (*(volatile unsigned *)0x48200200)
#define INTC_ILR64_OFFSET 0x200

#define INTC_ILR65 (*(volatile unsigned *)0x48200204)
#define INTC_ILR65_OFFSET 0x204

#define INTC_ILR66 (*(volatile unsigned *)0x48200208)
#define INTC_ILR66_OFFSET 0x208

#define INTC_ILR67 (*(volatile unsigned *)0x4820020C)
#define INTC_ILR67_OFFSET 0x20C

#define INTC_ILR68 (*(volatile unsigned *)0x48200210)
#define INTC_ILR68_OFFSET 0x210

#define INTC_ILR69 (*(volatile unsigned *)0x48200214)
#define INTC_ILR69_OFFSET 0x214

#define INTC_ILR70 (*(volatile unsigned *)0x48200218)
#define INTC_ILR70_OFFSET 0x218

#define INTC_ILR71 (*(volatile unsigned *)0x4820021C)
#define INTC_ILR71_OFFSET 0x21C

#define INTC_ILR72 (*(volatile unsigned *)0x48200220)
#define INTC_ILR72_OFFSET 0x220

#define INTC_ILR73 (*(volatile unsigned *)0x48200224)
#define INTC_ILR73_OFFSET 0x224

#define INTC_ILR74 (*(volatile unsigned *)0x48200228)
#define INTC_ILR74_OFFSET 0x228

#define INTC_ILR75 (*(volatile unsigned *)0x4820022C)
#define INTC_ILR75_OFFSET 0x22C

#define INTC_ILR76 (*(volatile unsigned *)0x48200230)
#define INTC_ILR76_OFFSET 0x230

#define INTC_ILR77 (*(volatile unsigned *)0x48200234)
#define INTC_ILR77_OFFSET 0x234

#define INTC_ILR78 (*(volatile unsigned *)0x48200238)
#define INTC_ILR78_OFFSET 0x238

#define INTC_ILR79 (*(volatile unsigned *)0x4820023C)
#define INTC_ILR79_OFFSET 0x23C

#define INTC_ILR80 (*(volatile unsigned *)0x48200240)
#define INTC_ILR80_OFFSET 0x240

#define INTC_ILR81 (*(volatile unsigned *)0x48200244)
#define INTC_ILR81_OFFSET 0x244

#define INTC_ILR82 (*(volatile unsigned *)0x48200248)
#define INTC_ILR82_OFFSET 0x248

#define INTC_ILR83 (*(volatile unsigned *)0x4820024C)
#define INTC_ILR83_OFFSET 0x24C

#define INTC_ILR84 (*(volatile unsigned *)0x48200250)
#define INTC_ILR84_OFFSET 0x250

#define INTC_ILR85 (*(volatile unsigned *)0x48200254)
#define INTC_ILR85_OFFSET 0x254

#define INTC_ILR86 (*(volatile unsigned *)0x48200258)
#define INTC_ILR86_OFFSET 0x258

#define INTC_ILR87 (*(volatile unsigned *)0x4820025C)
#define INTC_ILR87_OFFSET 0x25C

#define INTC_ILR88 (*(volatile unsigned *)0x48200260)
#define INTC_ILR88_OFFSET 0x260

#define INTC_ILR89 (*(volatile unsigned *)0x48200264)
#define INTC_ILR89_OFFSET 0x264

#define INTC_ILR90 (*(volatile unsigned *)0x48200268)
#define INTC_ILR90_OFFSET 0x268

#define INTC_ILR91 (*(volatile unsigned *)0x4820026C)
#define INTC_ILR91_OFFSET 0x26C

#define INTC_ILR92 (*(volatile unsigned *)0x48200270)
#define INTC_ILR92_OFFSET 0x270

#define INTC_ILR93 (*(volatile unsigned *)0x48200274)
#define INTC_ILR93_OFFSET 0x274

#define INTC_ILR94 (*(volatile unsigned *)0x48200278)
#define INTC_ILR94_OFFSET 0x278

#define INTC_ILR95 (*(volatile unsigned *)0x4820027C)
#define INTC_ILR95_OFFSET 0x27C

#define INTC_ILR96 (*(volatile unsigned *)0x48200280)
#define INTC_ILR96_OFFSET 0x280

#define INTC_ILR97 (*(volatile unsigned *)0x48200284)
#define INTC_ILR97_OFFSET 0x284

#define INTC_ILR98 (*(volatile unsigned *)0x48200288)
#define INTC_ILR98_OFFSET 0x288

#define INTC_ILR99 (*(volatile unsigned *)0x4820028C)
#define INTC_ILR99_OFFSET 0x28C

#define INTC_ILR100 (*(volatile unsigned *)0x48200290)
#define INTC_ILR100_OFFSET 0x290

#define INTC_ILR101 (*(volatile unsigned *)0x48200294)
#define INTC_ILR101_OFFSET 0x294

#define INTC_ILR102 (*(volatile unsigned *)0x48200298)
#define INTC_ILR102_OFFSET 0x298

#define INTC_ILR103 (*(volatile unsigned *)0x4820029C)
#define INTC_ILR103_OFFSET 0x29C

#define INTC_ILR104 (*(volatile unsigned *)0x482002A0)
#define INTC_ILR104_OFFSET 0x2A0

#define INTC_ILR105 (*(volatile unsigned *)0x482002A4)
#define INTC_ILR105_OFFSET 0x2A4

#define INTC_ILR106 (*(volatile unsigned *)0x482002A8)
#define INTC_ILR106_OFFSET 0x2A8

#define INTC_ILR107 (*(volatile unsigned *)0x482002AC)
#define INTC_ILR107_OFFSET 0x2AC

#define INTC_ILR108 (*(volatile unsigned *)0x482002B0)
#define INTC_ILR108_OFFSET 0x2B0

#define INTC_ILR109 (*(volatile unsigned *)0x482002B4)
#define INTC_ILR109_OFFSET 0x2B4

#define INTC_ILR110 (*(volatile unsigned *)0x482002B8)
#define INTC_ILR110_OFFSET 0x2B8

#define INTC_ILR111 (*(volatile unsigned *)0x482002BC)
#define INTC_ILR111_OFFSET 0x2BC

#define INTC_ILR112 (*(volatile unsigned *)0x482002C0)
#define INTC_ILR112_OFFSET 0x2C0

#define INTC_ILR113 (*(volatile unsigned *)0x482002C4)
#define INTC_ILR113_OFFSET 0x2C4

#define INTC_ILR114 (*(volatile unsigned *)0x482002C8)
#define INTC_ILR114_OFFSET 0x2C8

#define INTC_ILR115 (*(volatile unsigned *)0x482002CC)
#define INTC_ILR115_OFFSET 0x2CC

#define INTC_ILR116 (*(volatile unsigned *)0x482002D0)
#define INTC_ILR116_OFFSET 0x2D0

#define INTC_ILR117 (*(volatile unsigned *)0x482002D4)
#define INTC_ILR117_OFFSET 0x2D4

#define INTC_ILR118 (*(volatile unsigned *)0x482002D8)
#define INTC_ILR118_OFFSET 0x2D8

#define INTC_ILR119 (*(volatile unsigned *)0x482002DC)
#define INTC_ILR119_OFFSET 0x2DC

#define INTC_ILR120 (*(volatile unsigned *)0x482002E0)
#define INTC_ILR120_OFFSET 0x2E0

#define INTC_ILR121 (*(volatile unsigned *)0x482002E4)
#define INTC_ILR121_OFFSET 0x2E4

#define INTC_ILR122 (*(volatile unsigned *)0x482002E8)
#define INTC_ILR122_OFFSET 0x2E8

#define INTC_ILR123 (*(volatile unsigned *)0x482002EC)
#define INTC_ILR123_OFFSET 0x2EC

#define INTC_ILR124 (*(volatile unsigned *)0x482002F0)
#define INTC_ILR124_OFFSET 0x2F0

#define INTC_ILR125 (*(volatile unsigned *)0x482002F4)
#define INTC_ILR125_OFFSET 0x2F4

#define INTC_ILR126 (*(volatile unsigned *)0x482002F8)
#define INTC_ILR126_OFFSET 0x2F8

#define INTC_ILR127 (*(volatile unsigned *)0x482002FC)
#define INTC_ILR127_OFFSET 0x2FC

#ifndef PWMSS0_BASE
#define PWMSS0_BASE 0x48300000
#endif

#define PWMSS0_IDVER (*(volatile unsigned *)0x48300000)
#define PWMSS0_IDVER_OFFSET 0x0

#define PWMSS0_SYSCONFIG (*(volatile unsigned *)0x48300004)
#define PWMSS0_SYSCONFIG_OFFSET 0x4

#define PWMSS0_CLKCONFIG (*(volatile unsigned *)0x48300008)
#define PWMSS0_CLKCONFIG_OFFSET 0x8

#define PWMSS0_CLKSTATUS (*(volatile unsigned *)0x4830000C)
#define PWMSS0_CLKSTATUS_OFFSET 0xC

#ifndef PWMSSeCAP0_BASE
#define PWMSSeCAP0_BASE 0x48300100
#endif

#define PWMSSeCAP0_TSCTR (*(volatile unsigned *)0x48300100)
#define PWMSSeCAP0_TSCTR_OFFSET 0x0

#define PWMSSeCAP0_CTRPHS (*(volatile unsigned *)0x48300104)
#define PWMSSeCAP0_CTRPHS_OFFSET 0x4

#define PWMSSeCAP0_CAP1 (*(volatile unsigned *)0x48300108)
#define PWMSSeCAP0_CAP1_OFFSET 0x8

#define PWMSSeCAP0_CAP2 (*(volatile unsigned *)0x4830010C)
#define PWMSSeCAP0_CAP2_OFFSET 0xC

#define PWMSSeCAP0_CAP3 (*(volatile unsigned *)0x48300110)
#define PWMSSeCAP0_CAP3_OFFSET 0x10

#define PWMSSeCAP0_CAP4 (*(volatile unsigned *)0x48300114)
#define PWMSSeCAP0_CAP4_OFFSET 0x14

#define PWMSSeCAP0_ECCTL1 (*(volatile unsigned short *)0x48300128)
#define PWMSSeCAP0_ECCTL1_OFFSET 0x28

#define PWMSSeCAP0_ECCTL2 (*(volatile unsigned short *)0x4830012A)
#define PWMSSeCAP0_ECCTL2_OFFSET 0x2A

#define PWMSSeCAP0_ECEINT (*(volatile unsigned short *)0x4830012C)
#define PWMSSeCAP0_ECEINT_OFFSET 0x2C

#define PWMSSeCAP0_ECFLG (*(volatile unsigned short *)0x4830012E)
#define PWMSSeCAP0_ECFLG_OFFSET 0x2E

#define PWMSSeCAP0_ECCLR (*(volatile unsigned short *)0x48300130)
#define PWMSSeCAP0_ECCLR_OFFSET 0x30

#define PWMSSeCAP0_ECFRC (*(volatile unsigned short *)0x48300132)
#define PWMSSeCAP0_ECFRC_OFFSET 0x32

#define PWMSSeCAP0_REVID (*(volatile unsigned *)0x4830015C)
#define PWMSSeCAP0_REVID_OFFSET 0x5C

#ifndef PWMSSeQEP0_BASE
#define PWMSSeQEP0_BASE 0x48300180
#endif

#define PWMSSeQEP0_QPOSCNT (*(volatile unsigned *)0x48300180)
#define PWMSSeQEP0_QPOSCNT_OFFSET 0x0

#define PWMSSeQEP0_QPOSINIT (*(volatile unsigned *)0x48300184)
#define PWMSSeQEP0_QPOSINIT_OFFSET 0x4

#define PWMSSeQEP0_QPOSMAX (*(volatile unsigned *)0x48300188)
#define PWMSSeQEP0_QPOSMAX_OFFSET 0x8

#define PWMSSeQEP0_QPOSCMP (*(volatile unsigned *)0x4830018C)
#define PWMSSeQEP0_QPOSCMP_OFFSET 0xC

#define PWMSSeQEP0_QPOSILAT (*(volatile unsigned *)0x48300190)
#define PWMSSeQEP0_QPOSILAT_OFFSET 0x10

#define PWMSSeQEP0_QPOSSLAT (*(volatile unsigned *)0x48300194)
#define PWMSSeQEP0_QPOSSLAT_OFFSET 0x14

#define PWMSSeQEP0_QPOSLAT (*(volatile unsigned *)0x48300198)
#define PWMSSeQEP0_QPOSLAT_OFFSET 0x18

#define PWMSSeQEP0_QUTMR (*(volatile unsigned *)0x4830019C)
#define PWMSSeQEP0_QUTMR_OFFSET 0x1C

#define PWMSSeQEP0_QUPRD (*(volatile unsigned *)0x483001A0)
#define PWMSSeQEP0_QUPRD_OFFSET 0x20

#define PWMSSeQEP0_QWDTMR (*(volatile unsigned short *)0x483001A4)
#define PWMSSeQEP0_QWDTMR_OFFSET 0x24

#define PWMSSeQEP0_QWDPRD (*(volatile unsigned short *)0x483001A6)
#define PWMSSeQEP0_QWDPRD_OFFSET 0x26

#define PWMSSeQEP0_QDECCTL (*(volatile unsigned short *)0x483001A8)
#define PWMSSeQEP0_QDECCTL_OFFSET 0x28

#define PWMSSeQEP0_QEPCTL (*(volatile unsigned short *)0x483001AA)
#define PWMSSeQEP0_QEPCTL_OFFSET 0x2A

#define PWMSSeQEP0_QCAPCTL (*(volatile unsigned short *)0x483001AC)
#define PWMSSeQEP0_QCAPCTL_OFFSET 0x2C

#define PWMSSeQEP0_QPOSCTL (*(volatile unsigned short *)0x483001AE)
#define PWMSSeQEP0_QPOSCTL_OFFSET 0x2E

#define PWMSSeQEP0_QEINT (*(volatile unsigned short *)0x483001B0)
#define PWMSSeQEP0_QEINT_OFFSET 0x30

#define PWMSSeQEP0_QFLG (*(volatile unsigned short *)0x483001B2)
#define PWMSSeQEP0_QFLG_OFFSET 0x32

#define PWMSSeQEP0_QCLR (*(volatile unsigned short *)0x483001B4)
#define PWMSSeQEP0_QCLR_OFFSET 0x34

#define PWMSSeQEP0_QFRC (*(volatile unsigned short *)0x483001B6)
#define PWMSSeQEP0_QFRC_OFFSET 0x36

#define PWMSSeQEP0_QEPSTS (*(volatile unsigned short *)0x483001B8)
#define PWMSSeQEP0_QEPSTS_OFFSET 0x38

#define PWMSSeQEP0_QCTMR (*(volatile unsigned short *)0x483001BA)
#define PWMSSeQEP0_QCTMR_OFFSET 0x3A

#define PWMSSeQEP0_QCPRD (*(volatile unsigned short *)0x483001BC)
#define PWMSSeQEP0_QCPRD_OFFSET 0x3C

#define PWMSSeQEP0_QCTMRLAT (*(volatile unsigned short *)0x483001BE)
#define PWMSSeQEP0_QCTMRLAT_OFFSET 0x3E

#define PWMSSeQEP0_QCPRDLAT (*(volatile unsigned short *)0x483001C0)
#define PWMSSeQEP0_QCPRDLAT_OFFSET 0x40

#define PWMSSeQEP0_REVID (*(volatile unsigned *)0x483001DC)
#define PWMSSeQEP0_REVID_OFFSET 0x5C

#ifndef PWMSSePWM0_BASE
#define PWMSSePWM0_BASE 0x48300200
#endif

#define PWMSSePWM0_TBCTL (*(volatile unsigned short *)0x48300200)
#define PWMSSePWM0_TBCTL_OFFSET 0x0

#define PWMSSePWM0_TBSTS (*(volatile unsigned short *)0x48300202)
#define PWMSSePWM0_TBSTS_OFFSET 0x2

#define PWMSSePWM0_TBPHSHR (*(volatile unsigned short *)0x48300204)
#define PWMSSePWM0_TBPHSHR_OFFSET 0x4

#define PWMSSePWM0_TBPHS (*(volatile unsigned short *)0x48300206)
#define PWMSSePWM0_TBPHS_OFFSET 0x6

#define PWMSSePWM0_TBCNT (*(volatile unsigned short *)0x48300208)
#define PWMSSePWM0_TBCNT_OFFSET 0x8

#define PWMSSePWM0_TBPRD (*(volatile unsigned short *)0x4830020A)
#define PWMSSePWM0_TBPRD_OFFSET 0xA

#define PWMSSePWM0_CMPCTL (*(volatile unsigned short *)0x4830020E)
#define PWMSSePWM0_CMPCTL_OFFSET 0xE

#define PWMSSePWM0_CMPAHR (*(volatile unsigned short *)0x48300210)
#define PWMSSePWM0_CMPAHR_OFFSET 0x10

#define PWMSSePWM0_CMPA (*(volatile unsigned short *)0x48300212)
#define PWMSSePWM0_CMPA_OFFSET 0x12

#define PWMSSePWM0_CMPB (*(volatile unsigned short *)0x48300214)
#define PWMSSePWM0_CMPB_OFFSET 0x14

#define PWMSSePWM0_AQCTLA (*(volatile unsigned short *)0x48300216)
#define PWMSSePWM0_AQCTLA_OFFSET 0x16

#define PWMSSePWM0_AQCTLB (*(volatile unsigned short *)0x48300218)
#define PWMSSePWM0_AQCTLB_OFFSET 0x18

#define PWMSSePWM0_AQSFRC (*(volatile unsigned short *)0x4830021A)
#define PWMSSePWM0_AQSFRC_OFFSET 0x1A

#define PWMSSePWM0_AQCSFRC (*(volatile unsigned short *)0x4830021C)
#define PWMSSePWM0_AQCSFRC_OFFSET 0x1C

#define PWMSSePWM0_DBCTL (*(volatile unsigned short *)0x4830021E)
#define PWMSSePWM0_DBCTL_OFFSET 0x1E

#define PWMSSePWM0_DBRED (*(volatile unsigned short *)0x48300220)
#define PWMSSePWM0_DBRED_OFFSET 0x20

#define PWMSSePWM0_DBFED (*(volatile unsigned short *)0x48300222)
#define PWMSSePWM0_DBFED_OFFSET 0x22

#define PWMSSePWM0_TZSEL (*(volatile unsigned short *)0x48300224)
#define PWMSSePWM0_TZSEL_OFFSET 0x24

#define PWMSSePWM0_TZCTL (*(volatile unsigned short *)0x48300228)
#define PWMSSePWM0_TZCTL_OFFSET 0x28

#define PWMSSePWM0_TZEINT (*(volatile unsigned short *)0x4830022A)
#define PWMSSePWM0_TZEINT_OFFSET 0x2A

#define PWMSSePWM0_TZFLG (*(volatile unsigned short *)0x4830022C)
#define PWMSSePWM0_TZFLG_OFFSET 0x2C

#define PWMSSePWM0_TZCLR (*(volatile unsigned short *)0x4830022E)
#define PWMSSePWM0_TZCLR_OFFSET 0x2E

#define PWMSSePWM0_TZFRC (*(volatile unsigned short *)0x48300230)
#define PWMSSePWM0_TZFRC_OFFSET 0x30

#define PWMSSePWM0_ETSEL (*(volatile unsigned short *)0x48300232)
#define PWMSSePWM0_ETSEL_OFFSET 0x32

#define PWMSSePWM0_ETPS (*(volatile unsigned short *)0x48300234)
#define PWMSSePWM0_ETPS_OFFSET 0x34

#define PWMSSePWM0_ETFLG (*(volatile unsigned short *)0x48300236)
#define PWMSSePWM0_ETFLG_OFFSET 0x36

#define PWMSSePWM0_ETCLR (*(volatile unsigned short *)0x48300238)
#define PWMSSePWM0_ETCLR_OFFSET 0x38

#define PWMSSePWM0_ETFRC (*(volatile unsigned short *)0x4830023A)
#define PWMSSePWM0_ETFRC_OFFSET 0x3A

#define PWMSSePWM0_PCCTL (*(volatile unsigned short *)0x4830023C)
#define PWMSSePWM0_PCCTL_OFFSET 0x3C

#define PWMSSePWM0_HRCTL (*(volatile unsigned short *)0x48300240)
#define PWMSSePWM0_HRCTL_OFFSET 0x40

#ifndef PWMSS1_BASE
#define PWMSS1_BASE 0x48302000
#endif

#define PWMSS1_IDVER (*(volatile unsigned *)0x48302000)
#define PWMSS1_IDVER_OFFSET 0x0

#define PWMSS1_SYSCONFIG (*(volatile unsigned *)0x48302004)
#define PWMSS1_SYSCONFIG_OFFSET 0x4

#define PWMSS1_CLKCONFIG (*(volatile unsigned *)0x48302008)
#define PWMSS1_CLKCONFIG_OFFSET 0x8

#define PWMSS1_CLKSTATUS (*(volatile unsigned *)0x4830200C)
#define PWMSS1_CLKSTATUS_OFFSET 0xC

#ifndef PWMSSeCAP1_BASE
#define PWMSSeCAP1_BASE 0x48302100
#endif

#define PWMSSeCAP1_TSCTR (*(volatile unsigned *)0x48302100)
#define PWMSSeCAP1_TSCTR_OFFSET 0x0

#define PWMSSeCAP1_CTRPHS (*(volatile unsigned *)0x48302104)
#define PWMSSeCAP1_CTRPHS_OFFSET 0x4

#define PWMSSeCAP1_CAP1 (*(volatile unsigned *)0x48302108)
#define PWMSSeCAP1_CAP1_OFFSET 0x8

#define PWMSSeCAP1_CAP2 (*(volatile unsigned *)0x4830210C)
#define PWMSSeCAP1_CAP2_OFFSET 0xC

#define PWMSSeCAP1_CAP3 (*(volatile unsigned *)0x48302110)
#define PWMSSeCAP1_CAP3_OFFSET 0x10

#define PWMSSeCAP1_CAP4 (*(volatile unsigned *)0x48302114)
#define PWMSSeCAP1_CAP4_OFFSET 0x14

#define PWMSSeCAP1_ECCTL1 (*(volatile unsigned short *)0x48302128)
#define PWMSSeCAP1_ECCTL1_OFFSET 0x28

#define PWMSSeCAP1_ECCTL2 (*(volatile unsigned short *)0x4830212A)
#define PWMSSeCAP1_ECCTL2_OFFSET 0x2A

#define PWMSSeCAP1_ECEINT (*(volatile unsigned short *)0x4830212C)
#define PWMSSeCAP1_ECEINT_OFFSET 0x2C

#define PWMSSeCAP1_ECFLG (*(volatile unsigned short *)0x4830212E)
#define PWMSSeCAP1_ECFLG_OFFSET 0x2E

#define PWMSSeCAP1_ECCLR (*(volatile unsigned short *)0x48302130)
#define PWMSSeCAP1_ECCLR_OFFSET 0x30

#define PWMSSeCAP1_ECFRC (*(volatile unsigned short *)0x48302132)
#define PWMSSeCAP1_ECFRC_OFFSET 0x32

#define PWMSSeCAP1_REVID (*(volatile unsigned *)0x4830215C)
#define PWMSSeCAP1_REVID_OFFSET 0x5C

#ifndef PWMSSeQEP1_BASE
#define PWMSSeQEP1_BASE 0x48302180
#endif

#define PWMSSeQEP1_QPOSCNT (*(volatile unsigned *)0x48302180)
#define PWMSSeQEP1_QPOSCNT_OFFSET 0x0

#define PWMSSeQEP1_QPOSINIT (*(volatile unsigned *)0x48302184)
#define PWMSSeQEP1_QPOSINIT_OFFSET 0x4

#define PWMSSeQEP1_QPOSMAX (*(volatile unsigned *)0x48302188)
#define PWMSSeQEP1_QPOSMAX_OFFSET 0x8

#define PWMSSeQEP1_QPOSCMP (*(volatile unsigned *)0x4830218C)
#define PWMSSeQEP1_QPOSCMP_OFFSET 0xC

#define PWMSSeQEP1_QPOSILAT (*(volatile unsigned *)0x48302190)
#define PWMSSeQEP1_QPOSILAT_OFFSET 0x10

#define PWMSSeQEP1_QPOSSLAT (*(volatile unsigned *)0x48302194)
#define PWMSSeQEP1_QPOSSLAT_OFFSET 0x14

#define PWMSSeQEP1_QPOSLAT (*(volatile unsigned *)0x48302198)
#define PWMSSeQEP1_QPOSLAT_OFFSET 0x18

#define PWMSSeQEP1_QUTMR (*(volatile unsigned *)0x4830219C)
#define PWMSSeQEP1_QUTMR_OFFSET 0x1C

#define PWMSSeQEP1_QUPRD (*(volatile unsigned *)0x483021A0)
#define PWMSSeQEP1_QUPRD_OFFSET 0x20

#define PWMSSeQEP1_QWDTMR (*(volatile unsigned short *)0x483021A4)
#define PWMSSeQEP1_QWDTMR_OFFSET 0x24

#define PWMSSeQEP1_QWDPRD (*(volatile unsigned short *)0x483021A6)
#define PWMSSeQEP1_QWDPRD_OFFSET 0x26

#define PWMSSeQEP1_QDECCTL (*(volatile unsigned short *)0x483021A8)
#define PWMSSeQEP1_QDECCTL_OFFSET 0x28

#define PWMSSeQEP1_QEPCTL (*(volatile unsigned short *)0x483021AA)
#define PWMSSeQEP1_QEPCTL_OFFSET 0x2A

#define PWMSSeQEP1_QCAPCTL (*(volatile unsigned short *)0x483021AC)
#define PWMSSeQEP1_QCAPCTL_OFFSET 0x2C

#define PWMSSeQEP1_QPOSCTL (*(volatile unsigned short *)0x483021AE)
#define PWMSSeQEP1_QPOSCTL_OFFSET 0x2E

#define PWMSSeQEP1_QEINT (*(volatile unsigned short *)0x483021B0)
#define PWMSSeQEP1_QEINT_OFFSET 0x30

#define PWMSSeQEP1_QFLG (*(volatile unsigned short *)0x483021B2)
#define PWMSSeQEP1_QFLG_OFFSET 0x32

#define PWMSSeQEP1_QCLR (*(volatile unsigned short *)0x483021B4)
#define PWMSSeQEP1_QCLR_OFFSET 0x34

#define PWMSSeQEP1_QFRC (*(volatile unsigned short *)0x483021B6)
#define PWMSSeQEP1_QFRC_OFFSET 0x36

#define PWMSSeQEP1_QEPSTS (*(volatile unsigned short *)0x483021B8)
#define PWMSSeQEP1_QEPSTS_OFFSET 0x38

#define PWMSSeQEP1_QCTMR (*(volatile unsigned short *)0x483021BA)
#define PWMSSeQEP1_QCTMR_OFFSET 0x3A

#define PWMSSeQEP1_QCPRD (*(volatile unsigned short *)0x483021BC)
#define PWMSSeQEP1_QCPRD_OFFSET 0x3C

#define PWMSSeQEP1_QCTMRLAT (*(volatile unsigned short *)0x483021BE)
#define PWMSSeQEP1_QCTMRLAT_OFFSET 0x3E

#define PWMSSeQEP1_QCPRDLAT (*(volatile unsigned short *)0x483021C0)
#define PWMSSeQEP1_QCPRDLAT_OFFSET 0x40

#define PWMSSeQEP1_REVID (*(volatile unsigned *)0x483021DC)
#define PWMSSeQEP1_REVID_OFFSET 0x5C

#ifndef PWMSSePWM1_BASE
#define PWMSSePWM1_BASE 0x48302200
#endif

#define PWMSSePWM1_TBCTL (*(volatile unsigned short *)0x48302200)
#define PWMSSePWM1_TBCTL_OFFSET 0x0

#define PWMSSePWM1_TBSTS (*(volatile unsigned short *)0x48302202)
#define PWMSSePWM1_TBSTS_OFFSET 0x2

#define PWMSSePWM1_TBPHSHR (*(volatile unsigned short *)0x48302204)
#define PWMSSePWM1_TBPHSHR_OFFSET 0x4

#define PWMSSePWM1_TBPHS (*(volatile unsigned short *)0x48302206)
#define PWMSSePWM1_TBPHS_OFFSET 0x6

#define PWMSSePWM1_TBCNT (*(volatile unsigned short *)0x48302208)
#define PWMSSePWM1_TBCNT_OFFSET 0x8

#define PWMSSePWM1_TBPRD (*(volatile unsigned short *)0x4830220A)
#define PWMSSePWM1_TBPRD_OFFSET 0xA

#define PWMSSePWM1_CMPCTL (*(volatile unsigned short *)0x4830220E)
#define PWMSSePWM1_CMPCTL_OFFSET 0xE

#define PWMSSePWM1_CMPAHR (*(volatile unsigned short *)0x48302210)
#define PWMSSePWM1_CMPAHR_OFFSET 0x10

#define PWMSSePWM1_CMPA (*(volatile unsigned short *)0x48302212)
#define PWMSSePWM1_CMPA_OFFSET 0x12

#define PWMSSePWM1_CMPB (*(volatile unsigned short *)0x48302214)
#define PWMSSePWM1_CMPB_OFFSET 0x14

#define PWMSSePWM1_AQCTLA (*(volatile unsigned short *)0x48302216)
#define PWMSSePWM1_AQCTLA_OFFSET 0x16

#define PWMSSePWM1_AQCTLB (*(volatile unsigned short *)0x48302218)
#define PWMSSePWM1_AQCTLB_OFFSET 0x18

#define PWMSSePWM1_AQSFRC (*(volatile unsigned short *)0x4830221A)
#define PWMSSePWM1_AQSFRC_OFFSET 0x1A

#define PWMSSePWM1_AQCSFRC (*(volatile unsigned short *)0x4830221C)
#define PWMSSePWM1_AQCSFRC_OFFSET 0x1C

#define PWMSSePWM1_DBCTL (*(volatile unsigned short *)0x4830221E)
#define PWMSSePWM1_DBCTL_OFFSET 0x1E

#define PWMSSePWM1_DBRED (*(volatile unsigned short *)0x48302220)
#define PWMSSePWM1_DBRED_OFFSET 0x20

#define PWMSSePWM1_DBFED (*(volatile unsigned short *)0x48302222)
#define PWMSSePWM1_DBFED_OFFSET 0x22

#define PWMSSePWM1_TZSEL (*(volatile unsigned short *)0x48302224)
#define PWMSSePWM1_TZSEL_OFFSET 0x24

#define PWMSSePWM1_TZCTL (*(volatile unsigned short *)0x48302228)
#define PWMSSePWM1_TZCTL_OFFSET 0x28

#define PWMSSePWM1_TZEINT (*(volatile unsigned short *)0x4830222A)
#define PWMSSePWM1_TZEINT_OFFSET 0x2A

#define PWMSSePWM1_TZFLG (*(volatile unsigned short *)0x4830222C)
#define PWMSSePWM1_TZFLG_OFFSET 0x2C

#define PWMSSePWM1_TZCLR (*(volatile unsigned short *)0x4830222E)
#define PWMSSePWM1_TZCLR_OFFSET 0x2E

#define PWMSSePWM1_TZFRC (*(volatile unsigned short *)0x48302230)
#define PWMSSePWM1_TZFRC_OFFSET 0x30

#define PWMSSePWM1_ETSEL (*(volatile unsigned short *)0x48302232)
#define PWMSSePWM1_ETSEL_OFFSET 0x32

#define PWMSSePWM1_ETPS (*(volatile unsigned short *)0x48302234)
#define PWMSSePWM1_ETPS_OFFSET 0x34

#define PWMSSePWM1_ETFLG (*(volatile unsigned short *)0x48302236)
#define PWMSSePWM1_ETFLG_OFFSET 0x36

#define PWMSSePWM1_ETCLR (*(volatile unsigned short *)0x48302238)
#define PWMSSePWM1_ETCLR_OFFSET 0x38

#define PWMSSePWM1_ETFRC (*(volatile unsigned short *)0x4830223A)
#define PWMSSePWM1_ETFRC_OFFSET 0x3A

#define PWMSSePWM1_PCCTL (*(volatile unsigned short *)0x4830223C)
#define PWMSSePWM1_PCCTL_OFFSET 0x3C

#define PWMSSePWM1_HRCTL (*(volatile unsigned short *)0x48302240)
#define PWMSSePWM1_HRCTL_OFFSET 0x40

#ifndef PWMSS2_BASE
#define PWMSS2_BASE 0x48304000
#endif

#define PWMSS2_IDVER (*(volatile unsigned *)0x48304000)
#define PWMSS2_IDVER_OFFSET 0x0

#define PWMSS2_SYSCONFIG (*(volatile unsigned *)0x48304004)
#define PWMSS2_SYSCONFIG_OFFSET 0x4

#define PWMSS2_CLKCONFIG (*(volatile unsigned *)0x48304008)
#define PWMSS2_CLKCONFIG_OFFSET 0x8

#define PWMSS2_CLKSTATUS (*(volatile unsigned *)0x4830400C)
#define PWMSS2_CLKSTATUS_OFFSET 0xC

#ifndef PWMSSeCAP2_BASE
#define PWMSSeCAP2_BASE 0x48304100
#endif

#define PWMSSeCAP2_TSCTR (*(volatile unsigned *)0x48304100)
#define PWMSSeCAP2_TSCTR_OFFSET 0x0

#define PWMSSeCAP2_CTRPHS (*(volatile unsigned *)0x48304104)
#define PWMSSeCAP2_CTRPHS_OFFSET 0x4

#define PWMSSeCAP2_CAP1 (*(volatile unsigned *)0x48304108)
#define PWMSSeCAP2_CAP1_OFFSET 0x8

#define PWMSSeCAP2_CAP2 (*(volatile unsigned *)0x4830410C)
#define PWMSSeCAP2_CAP2_OFFSET 0xC

#define PWMSSeCAP2_CAP3 (*(volatile unsigned *)0x48304110)
#define PWMSSeCAP2_CAP3_OFFSET 0x10

#define PWMSSeCAP2_CAP4 (*(volatile unsigned *)0x48304114)
#define PWMSSeCAP2_CAP4_OFFSET 0x14

#define PWMSSeCAP2_ECCTL1 (*(volatile unsigned short *)0x48304128)
#define PWMSSeCAP2_ECCTL1_OFFSET 0x28

#define PWMSSeCAP2_ECCTL2 (*(volatile unsigned short *)0x4830412A)
#define PWMSSeCAP2_ECCTL2_OFFSET 0x2A

#define PWMSSeCAP2_ECEINT (*(volatile unsigned short *)0x4830412C)
#define PWMSSeCAP2_ECEINT_OFFSET 0x2C

#define PWMSSeCAP2_ECFLG (*(volatile unsigned short *)0x4830412E)
#define PWMSSeCAP2_ECFLG_OFFSET 0x2E

#define PWMSSeCAP2_ECCLR (*(volatile unsigned short *)0x48304130)
#define PWMSSeCAP2_ECCLR_OFFSET 0x30

#define PWMSSeCAP2_ECFRC (*(volatile unsigned short *)0x48304132)
#define PWMSSeCAP2_ECFRC_OFFSET 0x32

#define PWMSSeCAP2_REVID (*(volatile unsigned *)0x4830415C)
#define PWMSSeCAP2_REVID_OFFSET 0x5C

#ifndef PWMSSeQEP2_BASE
#define PWMSSeQEP2_BASE 0x48304180
#endif

#define PWMSSeQEP2_QPOSCNT (*(volatile unsigned *)0x48304180)
#define PWMSSeQEP2_QPOSCNT_OFFSET 0x0

#define PWMSSeQEP2_QPOSINIT (*(volatile unsigned *)0x48304184)
#define PWMSSeQEP2_QPOSINIT_OFFSET 0x4

#define PWMSSeQEP2_QPOSMAX (*(volatile unsigned *)0x48304188)
#define PWMSSeQEP2_QPOSMAX_OFFSET 0x8

#define PWMSSeQEP2_QPOSCMP (*(volatile unsigned *)0x4830418C)
#define PWMSSeQEP2_QPOSCMP_OFFSET 0xC

#define PWMSSeQEP2_QPOSILAT (*(volatile unsigned *)0x48304190)
#define PWMSSeQEP2_QPOSILAT_OFFSET 0x10

#define PWMSSeQEP2_QPOSSLAT (*(volatile unsigned *)0x48304194)
#define PWMSSeQEP2_QPOSSLAT_OFFSET 0x14

#define PWMSSeQEP2_QPOSLAT (*(volatile unsigned *)0x48304198)
#define PWMSSeQEP2_QPOSLAT_OFFSET 0x18

#define PWMSSeQEP2_QUTMR (*(volatile unsigned *)0x4830419C)
#define PWMSSeQEP2_QUTMR_OFFSET 0x1C

#define PWMSSeQEP2_QUPRD (*(volatile unsigned *)0x483041A0)
#define PWMSSeQEP2_QUPRD_OFFSET 0x20

#define PWMSSeQEP2_QWDTMR (*(volatile unsigned short *)0x483041A4)
#define PWMSSeQEP2_QWDTMR_OFFSET 0x24

#define PWMSSeQEP2_QWDPRD (*(volatile unsigned short *)0x483041A6)
#define PWMSSeQEP2_QWDPRD_OFFSET 0x26

#define PWMSSeQEP2_QDECCTL (*(volatile unsigned short *)0x483041A8)
#define PWMSSeQEP2_QDECCTL_OFFSET 0x28

#define PWMSSeQEP2_QEPCTL (*(volatile unsigned short *)0x483041AA)
#define PWMSSeQEP2_QEPCTL_OFFSET 0x2A

#define PWMSSeQEP2_QCAPCTL (*(volatile unsigned short *)0x483041AC)
#define PWMSSeQEP2_QCAPCTL_OFFSET 0x2C

#define PWMSSeQEP2_QPOSCTL (*(volatile unsigned short *)0x483041AE)
#define PWMSSeQEP2_QPOSCTL_OFFSET 0x2E

#define PWMSSeQEP2_QEINT (*(volatile unsigned short *)0x483041B0)
#define PWMSSeQEP2_QEINT_OFFSET 0x30

#define PWMSSeQEP2_QFLG (*(volatile unsigned short *)0x483041B2)
#define PWMSSeQEP2_QFLG_OFFSET 0x32

#define PWMSSeQEP2_QCLR (*(volatile unsigned short *)0x483041B4)
#define PWMSSeQEP2_QCLR_OFFSET 0x34

#define PWMSSeQEP2_QFRC (*(volatile unsigned short *)0x483041B6)
#define PWMSSeQEP2_QFRC_OFFSET 0x36

#define PWMSSeQEP2_QEPSTS (*(volatile unsigned short *)0x483041B8)
#define PWMSSeQEP2_QEPSTS_OFFSET 0x38

#define PWMSSeQEP2_QCTMR (*(volatile unsigned short *)0x483041BA)
#define PWMSSeQEP2_QCTMR_OFFSET 0x3A

#define PWMSSeQEP2_QCPRD (*(volatile unsigned short *)0x483041BC)
#define PWMSSeQEP2_QCPRD_OFFSET 0x3C

#define PWMSSeQEP2_QCTMRLAT (*(volatile unsigned short *)0x483041BE)
#define PWMSSeQEP2_QCTMRLAT_OFFSET 0x3E

#define PWMSSeQEP2_QCPRDLAT (*(volatile unsigned short *)0x483041C0)
#define PWMSSeQEP2_QCPRDLAT_OFFSET 0x40

#define PWMSSeQEP2_REVID (*(volatile unsigned *)0x483041DC)
#define PWMSSeQEP2_REVID_OFFSET 0x5C

#ifndef PWMSSePWM2_BASE
#define PWMSSePWM2_BASE 0x48304200
#endif

#define PWMSSePWM2_TBCTL (*(volatile unsigned short *)0x48304200)
#define PWMSSePWM2_TBCTL_OFFSET 0x0

#define PWMSSePWM2_TBSTS (*(volatile unsigned short *)0x48304202)
#define PWMSSePWM2_TBSTS_OFFSET 0x2

#define PWMSSePWM2_TBPHSHR (*(volatile unsigned short *)0x48304204)
#define PWMSSePWM2_TBPHSHR_OFFSET 0x4

#define PWMSSePWM2_TBPHS (*(volatile unsigned short *)0x48304206)
#define PWMSSePWM2_TBPHS_OFFSET 0x6

#define PWMSSePWM2_TBCNT (*(volatile unsigned short *)0x48304208)
#define PWMSSePWM2_TBCNT_OFFSET 0x8

#define PWMSSePWM2_TBPRD (*(volatile unsigned short *)0x4830420A)
#define PWMSSePWM2_TBPRD_OFFSET 0xA

#define PWMSSePWM2_CMPCTL (*(volatile unsigned short *)0x4830420E)
#define PWMSSePWM2_CMPCTL_OFFSET 0xE

#define PWMSSePWM2_CMPAHR (*(volatile unsigned short *)0x48304210)
#define PWMSSePWM2_CMPAHR_OFFSET 0x10

#define PWMSSePWM2_CMPA (*(volatile unsigned short *)0x48304212)
#define PWMSSePWM2_CMPA_OFFSET 0x12

#define PWMSSePWM2_CMPB (*(volatile unsigned short *)0x48304214)
#define PWMSSePWM2_CMPB_OFFSET 0x14

#define PWMSSePWM2_AQCTLA (*(volatile unsigned short *)0x48304216)
#define PWMSSePWM2_AQCTLA_OFFSET 0x16

#define PWMSSePWM2_AQCTLB (*(volatile unsigned short *)0x48304218)
#define PWMSSePWM2_AQCTLB_OFFSET 0x18

#define PWMSSePWM2_AQSFRC (*(volatile unsigned short *)0x4830421A)
#define PWMSSePWM2_AQSFRC_OFFSET 0x1A

#define PWMSSePWM2_AQCSFRC (*(volatile unsigned short *)0x4830421C)
#define PWMSSePWM2_AQCSFRC_OFFSET 0x1C

#define PWMSSePWM2_DBCTL (*(volatile unsigned short *)0x4830421E)
#define PWMSSePWM2_DBCTL_OFFSET 0x1E

#define PWMSSePWM2_DBRED (*(volatile unsigned short *)0x48304220)
#define PWMSSePWM2_DBRED_OFFSET 0x20

#define PWMSSePWM2_DBFED (*(volatile unsigned short *)0x48304222)
#define PWMSSePWM2_DBFED_OFFSET 0x22

#define PWMSSePWM2_TZSEL (*(volatile unsigned short *)0x48304224)
#define PWMSSePWM2_TZSEL_OFFSET 0x24

#define PWMSSePWM2_TZCTL (*(volatile unsigned short *)0x48304228)
#define PWMSSePWM2_TZCTL_OFFSET 0x28

#define PWMSSePWM2_TZEINT (*(volatile unsigned short *)0x4830422A)
#define PWMSSePWM2_TZEINT_OFFSET 0x2A

#define PWMSSePWM2_TZFLG (*(volatile unsigned short *)0x4830422C)
#define PWMSSePWM2_TZFLG_OFFSET 0x2C

#define PWMSSePWM2_TZCLR (*(volatile unsigned short *)0x4830422E)
#define PWMSSePWM2_TZCLR_OFFSET 0x2E

#define PWMSSePWM2_TZFRC (*(volatile unsigned short *)0x48304230)
#define PWMSSePWM2_TZFRC_OFFSET 0x30

#define PWMSSePWM2_ETSEL (*(volatile unsigned short *)0x48304232)
#define PWMSSePWM2_ETSEL_OFFSET 0x32

#define PWMSSePWM2_ETPS (*(volatile unsigned short *)0x48304234)
#define PWMSSePWM2_ETPS_OFFSET 0x34

#define PWMSSePWM2_ETFLG (*(volatile unsigned short *)0x48304236)
#define PWMSSePWM2_ETFLG_OFFSET 0x36

#define PWMSSePWM2_ETCLR (*(volatile unsigned short *)0x48304238)
#define PWMSSePWM2_ETCLR_OFFSET 0x38

#define PWMSSePWM2_ETFRC (*(volatile unsigned short *)0x4830423A)
#define PWMSSePWM2_ETFRC_OFFSET 0x3A

#define PWMSSePWM2_PCCTL (*(volatile unsigned short *)0x4830423C)
#define PWMSSePWM2_PCCTL_OFFSET 0x3C

#define PWMSSePWM2_HRCTL (*(volatile unsigned short *)0x48304240)
#define PWMSSePWM2_HRCTL_OFFSET 0x40

#ifndef LCD_BASE
#define LCD_BASE 0x4830E000
#endif

#define LCD_PID (*(volatile unsigned *)0x4830E000)
#define LCD_PID_OFFSET 0x0

#define LCD_LCD_CTRL (*(volatile unsigned *)0x4830E004)
#define LCD_LCD_CTRL_OFFSET 0x4

#define LCD_LCD_STAT (*(volatile unsigned *)0x4830E008)
#define LCD_LCD_STAT_OFFSET 0x8

#define LCD_LIDD_CTRL (*(volatile unsigned *)0x4830E00C)
#define LCD_LIDD_CTRL_OFFSET 0xC

#define LCD_LIDD_CS0_CONF (*(volatile unsigned *)0x4830E010)
#define LCD_LIDD_CS0_CONF_OFFSET 0x10

#define LCD_LIDD_CS0_ADDR (*(volatile unsigned *)0x4830E014)
#define LCD_LIDD_CS0_ADDR_OFFSET 0x14

#define LCD_LIDD_CS0_DATA (*(volatile unsigned *)0x4830E018)
#define LCD_LIDD_CS0_DATA_OFFSET 0x18

#define LCD_LIDD_CS1_CONF (*(volatile unsigned *)0x4830E01C)
#define LCD_LIDD_CS1_CONF_OFFSET 0x1C

#define LCD_LIDD_CS1_ADDR (*(volatile unsigned *)0x4830E020)
#define LCD_LIDD_CS1_ADDR_OFFSET 0x20

#define LCD_LIDD_CS2_DATA (*(volatile unsigned *)0x4830E024)
#define LCD_LIDD_CS2_DATA_OFFSET 0x24

#define LCD_RASTER_CTRL (*(volatile unsigned *)0x4830E028)
#define LCD_RASTER_CTRL_OFFSET 0x28

#define LCD_RASTER_TIMING_0 (*(volatile unsigned *)0x4830E02C)
#define LCD_RASTER_TIMING_0_OFFSET 0x2C

#define LCD_RASTER_TIMING_1 (*(volatile unsigned *)0x4830E030)
#define LCD_RASTER_TIMING_1_OFFSET 0x30

#define LCD_RASTER_TIMING_2 (*(volatile unsigned *)0x4830E034)
#define LCD_RASTER_TIMING_2_OFFSET 0x34

#define LCD_RASTER_SUBPANEL (*(volatile unsigned *)0x4830E038)
#define LCD_RASTER_SUBPANEL_OFFSET 0x38

#define LCD_RASTER_SUBPANEL2 (*(volatile unsigned *)0x4830E03C)
#define LCD_RASTER_SUBPANEL2_OFFSET 0x3C

#define LCD_LCDDMA_CTRL (*(volatile unsigned *)0x4830E040)
#define LCD_LCDDMA_CTRL_OFFSET 0x40

#define LCD_LCDDMA_FB0_BASE (*(volatile unsigned *)0x4830E044)
#define LCD_LCDDMA_FB0_BASE_OFFSET 0x44

#define LCD_LCDDMA_FB0_CEILING (*(volatile unsigned *)0x4830E048)
#define LCD_LCDDMA_FB0_CEILING_OFFSET 0x48

#define LCD_LCDDMA_FB1_BASE (*(volatile unsigned *)0x4830E04C)
#define LCD_LCDDMA_FB1_BASE_OFFSET 0x4C

#define LCD_LCDDMA_FB1_CEILING (*(volatile unsigned *)0x4830E050)
#define LCD_LCDDMA_FB1_CEILING_OFFSET 0x50

#define LCD_SYSCONFIG (*(volatile unsigned *)0x4830E054)
#define LCD_SYSCONFIG_OFFSET 0x54

#define LCD_IRQSTATUS_RAW (*(volatile unsigned *)0x4830E058)
#define LCD_IRQSTATUS_RAW_OFFSET 0x58

#define LCD_IRQSTATUS (*(volatile unsigned *)0x4830E05C)
#define LCD_IRQSTATUS_OFFSET 0x5C

#define LCD_IRQENABLE_SET (*(volatile unsigned *)0x4830E060)
#define LCD_IRQENABLE_SET_OFFSET 0x60

#define LCD_IRQENABLE_CLEAR (*(volatile unsigned *)0x4830E064)
#define LCD_IRQENABLE_CLEAR_OFFSET 0x64

#define LCD_IRQEOI_VECTOR (*(volatile unsigned *)0x4830E068)
#define LCD_IRQEOI_VECTOR_OFFSET 0x68

#define LCD_CLKC_ENABLE (*(volatile unsigned *)0x4830E06C)
#define LCD_CLKC_ENABLE_OFFSET 0x6C

#define LCD_CLKC_RESET (*(volatile unsigned *)0x4830E070)
#define LCD_CLKC_RESET_OFFSET 0x70

#ifndef EDMA3_BASE
#define EDMA3_BASE 0x49000000
#endif

#define EDMA3_REVID (*(volatile unsigned *)0x0)
#define EDMA3_REVID_OFFSET 0xB7000000

#define EDMA3_CCCFG (*(volatile unsigned *)0x4)
#define EDMA3_CCCFG_OFFSET 0xB7000004

#define EDMA3_DCHMAP0 (*(volatile unsigned *)0x100)
#define EDMA3_DCHMAP0_OFFSET 0xB7000100

#define EDMA3_DCHMAP1 (*(volatile unsigned *)0x104)
#define EDMA3_DCHMAP1_OFFSET 0xB7000104

#define EDMA3_DCHMAP2 (*(volatile unsigned *)0x108)
#define EDMA3_DCHMAP2_OFFSET 0xB7000108

#define EDMA3_DCHMAP3 (*(volatile unsigned *)0x10C)
#define EDMA3_DCHMAP3_OFFSET 0xB700010C

#define EDMA3_DCHMAP4 (*(volatile unsigned *)0x110)
#define EDMA3_DCHMAP4_OFFSET 0xB7000110

#define EDMA3_DCHMAP5 (*(volatile unsigned *)0x114)
#define EDMA3_DCHMAP5_OFFSET 0xB7000114

#define EDMA3_DCHMAP6 (*(volatile unsigned *)0x118)
#define EDMA3_DCHMAP6_OFFSET 0xB7000118

#define EDMA3_DCHMAP7 (*(volatile unsigned *)0x11C)
#define EDMA3_DCHMAP7_OFFSET 0xB700011C

#define EDMA3_DCHMAP8 (*(volatile unsigned *)0x120)
#define EDMA3_DCHMAP8_OFFSET 0xB7000120

#define EDMA3_DCHMAP9 (*(volatile unsigned *)0x124)
#define EDMA3_DCHMAP9_OFFSET 0xB7000124

#define EDMA3_DCHMAP10 (*(volatile unsigned *)0x128)
#define EDMA3_DCHMAP10_OFFSET 0xB7000128

#define EDMA3_DCHMAP11 (*(volatile unsigned *)0x12C)
#define EDMA3_DCHMAP11_OFFSET 0xB700012C

#define EDMA3_DCHMAP12 (*(volatile unsigned *)0x130)
#define EDMA3_DCHMAP12_OFFSET 0xB7000130

#define EDMA3_DCHMAP13 (*(volatile unsigned *)0x134)
#define EDMA3_DCHMAP13_OFFSET 0xB7000134

#define EDMA3_DCHMAP14 (*(volatile unsigned *)0x138)
#define EDMA3_DCHMAP14_OFFSET 0xB7000138

#define EDMA3_DCHMAP15 (*(volatile unsigned *)0x13C)
#define EDMA3_DCHMAP15_OFFSET 0xB700013C

#define EDMA3_DCHMAP16 (*(volatile unsigned *)0x140)
#define EDMA3_DCHMAP16_OFFSET 0xB7000140

#define EDMA3_DCHMAP17 (*(volatile unsigned *)0x144)
#define EDMA3_DCHMAP17_OFFSET 0xB7000144

#define EDMA3_DCHMAP18 (*(volatile unsigned *)0x148)
#define EDMA3_DCHMAP18_OFFSET 0xB7000148

#define EDMA3_DCHMAP19 (*(volatile unsigned *)0x14C)
#define EDMA3_DCHMAP19_OFFSET 0xB700014C

#define EDMA3_DCHMAP20 (*(volatile unsigned *)0x150)
#define EDMA3_DCHMAP20_OFFSET 0xB7000150

#define EDMA3_DCHMAP21 (*(volatile unsigned *)0x154)
#define EDMA3_DCHMAP21_OFFSET 0xB7000154

#define EDMA3_DCHMAP22 (*(volatile unsigned *)0x158)
#define EDMA3_DCHMAP22_OFFSET 0xB7000158

#define EDMA3_DCHMAP23 (*(volatile unsigned *)0x15C)
#define EDMA3_DCHMAP23_OFFSET 0xB700015C

#define EDMA3_DCHMAP24 (*(volatile unsigned *)0x160)
#define EDMA3_DCHMAP24_OFFSET 0xB7000160

#define EDMA3_DCHMAP25 (*(volatile unsigned *)0x164)
#define EDMA3_DCHMAP25_OFFSET 0xB7000164

#define EDMA3_DCHMAP26 (*(volatile unsigned *)0x168)
#define EDMA3_DCHMAP26_OFFSET 0xB7000168

#define EDMA3_DCHMAP27 (*(volatile unsigned *)0x16C)
#define EDMA3_DCHMAP27_OFFSET 0xB700016C

#define EDMA3_DCHMAP28 (*(volatile unsigned *)0x170)
#define EDMA3_DCHMAP28_OFFSET 0xB7000170

#define EDMA3_DCHMAP29 (*(volatile unsigned *)0x174)
#define EDMA3_DCHMAP29_OFFSET 0xB7000174

#define EDMA3_DCHMAP30 (*(volatile unsigned *)0x178)
#define EDMA3_DCHMAP30_OFFSET 0xB7000178

#define EDMA3_DCHMAP31 (*(volatile unsigned *)0x17C)
#define EDMA3_DCHMAP31_OFFSET 0xB700017C

#define EDMA3_DCHMAP32 (*(volatile unsigned *)0x180)
#define EDMA3_DCHMAP32_OFFSET 0xB7000180

#define EDMA3_DCHMAP33 (*(volatile unsigned *)0x184)
#define EDMA3_DCHMAP33_OFFSET 0xB7000184

#define EDMA3_DCHMAP34 (*(volatile unsigned *)0x188)
#define EDMA3_DCHMAP34_OFFSET 0xB7000188

#define EDMA3_DCHMAP35 (*(volatile unsigned *)0x18C)
#define EDMA3_DCHMAP35_OFFSET 0xB700018C

#define EDMA3_DCHMAP36 (*(volatile unsigned *)0x190)
#define EDMA3_DCHMAP36_OFFSET 0xB7000190

#define EDMA3_DCHMAP37 (*(volatile unsigned *)0x194)
#define EDMA3_DCHMAP37_OFFSET 0xB7000194

#define EDMA3_DCHMAP38 (*(volatile unsigned *)0x198)
#define EDMA3_DCHMAP38_OFFSET 0xB7000198

#define EDMA3_DCHMAP39 (*(volatile unsigned *)0x19C)
#define EDMA3_DCHMAP39_OFFSET 0xB700019C

#define EDMA3_DCHMAP40 (*(volatile unsigned *)0x1A0)
#define EDMA3_DCHMAP40_OFFSET 0xB70001A0

#define EDMA3_DCHMAP41 (*(volatile unsigned *)0x1A4)
#define EDMA3_DCHMAP41_OFFSET 0xB70001A4

#define EDMA3_DCHMAP42 (*(volatile unsigned *)0x1A8)
#define EDMA3_DCHMAP42_OFFSET 0xB70001A8

#define EDMA3_DCHMAP43 (*(volatile unsigned *)0x1AC)
#define EDMA3_DCHMAP43_OFFSET 0xB70001AC

#define EDMA3_DCHMAP44 (*(volatile unsigned *)0x1B0)
#define EDMA3_DCHMAP44_OFFSET 0xB70001B0

#define EDMA3_DCHMAP45 (*(volatile unsigned *)0x1B4)
#define EDMA3_DCHMAP45_OFFSET 0xB70001B4

#define EDMA3_DCHMAP46 (*(volatile unsigned *)0x1B8)
#define EDMA3_DCHMAP46_OFFSET 0xB70001B8

#define EDMA3_DCHMAP47 (*(volatile unsigned *)0x1BC)
#define EDMA3_DCHMAP47_OFFSET 0xB70001BC

#define EDMA3_DCHMAP48 (*(volatile unsigned *)0x1C0)
#define EDMA3_DCHMAP48_OFFSET 0xB70001C0

#define EDMA3_DCHMAP49 (*(volatile unsigned *)0x1C4)
#define EDMA3_DCHMAP49_OFFSET 0xB70001C4

#define EDMA3_DCHMAP50 (*(volatile unsigned *)0x1C8)
#define EDMA3_DCHMAP50_OFFSET 0xB70001C8

#define EDMA3_DCHMAP51 (*(volatile unsigned *)0x1CC)
#define EDMA3_DCHMAP51_OFFSET 0xB70001CC

#define EDMA3_DCHMAP52 (*(volatile unsigned *)0x1D0)
#define EDMA3_DCHMAP52_OFFSET 0xB70001D0

#define EDMA3_DCHMAP53 (*(volatile unsigned *)0x1D4)
#define EDMA3_DCHMAP53_OFFSET 0xB70001D4

#define EDMA3_DCHMAP54 (*(volatile unsigned *)0x1D8)
#define EDMA3_DCHMAP54_OFFSET 0xB70001D8

#define EDMA3_DCHMAP55 (*(volatile unsigned *)0x1DC)
#define EDMA3_DCHMAP55_OFFSET 0xB70001DC

#define EDMA3_DCHMAP56 (*(volatile unsigned *)0x1E0)
#define EDMA3_DCHMAP56_OFFSET 0xB70001E0

#define EDMA3_DCHMAP57 (*(volatile unsigned *)0x1E4)
#define EDMA3_DCHMAP57_OFFSET 0xB70001E4

#define EDMA3_DCHMAP58 (*(volatile unsigned *)0x1E8)
#define EDMA3_DCHMAP58_OFFSET 0xB70001E8

#define EDMA3_DCHMAP59 (*(volatile unsigned *)0x1EC)
#define EDMA3_DCHMAP59_OFFSET 0xB70001EC

#define EDMA3_DCHMAP60 (*(volatile unsigned *)0x1F0)
#define EDMA3_DCHMAP60_OFFSET 0xB70001F0

#define EDMA3_DCHMAP61 (*(volatile unsigned *)0x1F4)
#define EDMA3_DCHMAP61_OFFSET 0xB70001F4

#define EDMA3_DCHMAP62 (*(volatile unsigned *)0x1F8)
#define EDMA3_DCHMAP62_OFFSET 0xB70001F8

#define EDMA3_DCHMAP63 (*(volatile unsigned *)0x1FC)
#define EDMA3_DCHMAP63_OFFSET 0xB70001FC

#define EDMA3_QCHMAP0 (*(volatile unsigned *)0x200)
#define EDMA3_QCHMAP0_OFFSET 0xB7000200

#define EDMA3_QCHMAP1 (*(volatile unsigned *)0x204)
#define EDMA3_QCHMAP1_OFFSET 0xB7000204

#define EDMA3_QCHMAP2 (*(volatile unsigned *)0x208)
#define EDMA3_QCHMAP2_OFFSET 0xB7000208

#define EDMA3_QCHMAP3 (*(volatile unsigned *)0x20C)
#define EDMA3_QCHMAP3_OFFSET 0xB700020C

#define EDMA3_QCHMAP4 (*(volatile unsigned *)0x210)
#define EDMA3_QCHMAP4_OFFSET 0xB7000210

#define EDMA3_QCHMAP5 (*(volatile unsigned *)0x214)
#define EDMA3_QCHMAP5_OFFSET 0xB7000214

#define EDMA3_QCHMAP6 (*(volatile unsigned *)0x218)
#define EDMA3_QCHMAP6_OFFSET 0xB7000218

#define EDMA3_QCHMAP7 (*(volatile unsigned *)0x21C)
#define EDMA3_QCHMAP7_OFFSET 0xB700021C

#define EDMA3_DMAQNUM0 (*(volatile unsigned *)0x240)
#define EDMA3_DMAQNUM0_OFFSET 0xB7000240

#define EDMA3_DMAQNUM1 (*(volatile unsigned *)0x244)
#define EDMA3_DMAQNUM1_OFFSET 0xB7000244

#define EDMA3_DMAQNUM2 (*(volatile unsigned *)0x248)
#define EDMA3_DMAQNUM2_OFFSET 0xB7000248

#define EDMA3_DMAQNUM3 (*(volatile unsigned *)0x24C)
#define EDMA3_DMAQNUM3_OFFSET 0xB700024C

#define EDMA3_DMAQNUM4 (*(volatile unsigned *)0x250)
#define EDMA3_DMAQNUM4_OFFSET 0xB7000250

#define EDMA3_DMAQNUM5 (*(volatile unsigned *)0x254)
#define EDMA3_DMAQNUM5_OFFSET 0xB7000254

#define EDMA3_DMAQNUM6 (*(volatile unsigned *)0x258)
#define EDMA3_DMAQNUM6_OFFSET 0xB7000258

#define EDMA3_DMAQNUM7 (*(volatile unsigned *)0x25C)
#define EDMA3_DMAQNUM7_OFFSET 0xB700025C

#define EDMA3_QDMAQNUM (*(volatile unsigned *)0x260)
#define EDMA3_QDMAQNUM_OFFSET 0xB7000260

#define EDMA3_QUEPRI (*(volatile unsigned *)0x284)
#define EDMA3_QUEPRI_OFFSET 0xB7000284

#define EDMA3_EMR (*(volatile unsigned *)0x300)
#define EDMA3_EMR_OFFSET 0xB7000300

#define EDMA3_EMRH (*(volatile unsigned *)0x304)
#define EDMA3_EMRH_OFFSET 0xB7000304

#define EDMA3_EMCR (*(volatile unsigned *)0x308)
#define EDMA3_EMCR_OFFSET 0xB7000308

#define EDMA3_EMCRH (*(volatile unsigned *)0x30C)
#define EDMA3_EMCRH_OFFSET 0xB700030C

#define EDMA3_QEMR (*(volatile unsigned *)0x310)
#define EDMA3_QEMR_OFFSET 0xB7000310

#define EDMA3_QEMCR (*(volatile unsigned *)0x314)
#define EDMA3_QEMCR_OFFSET 0xB7000314

#define EDMA3_CCERR (*(volatile unsigned *)0x318)
#define EDMA3_CCERR_OFFSET 0xB7000318

#define EDMA3_CCERRCLR (*(volatile unsigned *)0x31C)
#define EDMA3_CCERRCLR_OFFSET 0xB700031C

#define EDMA3_EEVAL (*(volatile unsigned *)0x320)
#define EDMA3_EEVAL_OFFSET 0xB7000320

#define EDMA3_DRAE0 (*(volatile unsigned *)0x340)
#define EDMA3_DRAE0_OFFSET 0xB7000340

#define EDMA3_DRAEH0 (*(volatile unsigned *)0x344)
#define EDMA3_DRAEH0_OFFSET 0xB7000344

#define EDMA3_DRAE1 (*(volatile unsigned *)0x348)
#define EDMA3_DRAE1_OFFSET 0xB7000348

#define EDMA3_DRAEH1 (*(volatile unsigned *)0x34C)
#define EDMA3_DRAEH1_OFFSET 0xB700034C

#define EDMA3_DRAE2 (*(volatile unsigned *)0x350)
#define EDMA3_DRAE2_OFFSET 0xB7000350

#define EDMA3_DRAEH2 (*(volatile unsigned *)0x354)
#define EDMA3_DRAEH2_OFFSET 0xB7000354

#define EDMA3_DRAE3 (*(volatile unsigned *)0x358)
#define EDMA3_DRAE3_OFFSET 0xB7000358

#define EDMA3_DRAEH3 (*(volatile unsigned *)0x35C)
#define EDMA3_DRAEH3_OFFSET 0xB700035C

#define EDMA3_DRAE4 (*(volatile unsigned *)0x360)
#define EDMA3_DRAE4_OFFSET 0xB7000360

#define EDMA3_DRAEH4 (*(volatile unsigned *)0x364)
#define EDMA3_DRAEH4_OFFSET 0xB7000364

#define EDMA3_DRAE5 (*(volatile unsigned *)0x368)
#define EDMA3_DRAE5_OFFSET 0xB7000368

#define EDMA3_DRAEH5 (*(volatile unsigned *)0x36C)
#define EDMA3_DRAEH5_OFFSET 0xB700036C

#define EDMA3_DRAE6 (*(volatile unsigned *)0x370)
#define EDMA3_DRAE6_OFFSET 0xB7000370

#define EDMA3_DRAEH6 (*(volatile unsigned *)0x374)
#define EDMA3_DRAEH6_OFFSET 0xB7000374

#define EDMA3_DRAE7 (*(volatile unsigned *)0x378)
#define EDMA3_DRAE7_OFFSET 0xB7000378

#define EDMA3_DRAEH7 (*(volatile unsigned *)0x37C)
#define EDMA3_DRAEH7_OFFSET 0xB700037C

#define EDMA3_QRAE0 (*(volatile unsigned *)0x380)
#define EDMA3_QRAE0_OFFSET 0xB7000380

#define EDMA3_QRAE1 (*(volatile unsigned *)0x384)
#define EDMA3_QRAE1_OFFSET 0xB7000384

#define EDMA3_QRAE2 (*(volatile unsigned *)0x388)
#define EDMA3_QRAE2_OFFSET 0xB7000388

#define EDMA3_QRAE3 (*(volatile unsigned *)0x38C)
#define EDMA3_QRAE3_OFFSET 0xB700038C

#define EDMA3_QRAE4 (*(volatile unsigned *)0x390)
#define EDMA3_QRAE4_OFFSET 0xB7000390

#define EDMA3_QRAE5 (*(volatile unsigned *)0x394)
#define EDMA3_QRAE5_OFFSET 0xB7000394

#define EDMA3_QRAE6 (*(volatile unsigned *)0x398)
#define EDMA3_QRAE6_OFFSET 0xB7000398

#define EDMA3_QRAE7 (*(volatile unsigned *)0x39C)
#define EDMA3_QRAE7_OFFSET 0xB700039C

#define EDMA3_Q0E0 (*(volatile unsigned *)0x400)
#define EDMA3_Q0E0_OFFSET 0xB7000400

#define EDMA3_Q0E1 (*(volatile unsigned *)0x404)
#define EDMA3_Q0E1_OFFSET 0xB7000404

#define EDMA3_Q0E2 (*(volatile unsigned *)0x408)
#define EDMA3_Q0E2_OFFSET 0xB7000408

#define EDMA3_Q0E3 (*(volatile unsigned *)0x40C)
#define EDMA3_Q0E3_OFFSET 0xB700040C

#define EDMA3_Q0E4 (*(volatile unsigned *)0x410)
#define EDMA3_Q0E4_OFFSET 0xB7000410

#define EDMA3_Q0E5 (*(volatile unsigned *)0x414)
#define EDMA3_Q0E5_OFFSET 0xB7000414

#define EDMA3_Q0E6 (*(volatile unsigned *)0x418)
#define EDMA3_Q0E6_OFFSET 0xB7000418

#define EDMA3_Q0E7 (*(volatile unsigned *)0x41C)
#define EDMA3_Q0E7_OFFSET 0xB700041C

#define EDMA3_Q0E8 (*(volatile unsigned *)0x420)
#define EDMA3_Q0E8_OFFSET 0xB7000420

#define EDMA3_Q0E9 (*(volatile unsigned *)0x424)
#define EDMA3_Q0E9_OFFSET 0xB7000424

#define EDMA3_Q0E10 (*(volatile unsigned *)0x428)
#define EDMA3_Q0E10_OFFSET 0xB7000428

#define EDMA3_Q0E11 (*(volatile unsigned *)0x42C)
#define EDMA3_Q0E11_OFFSET 0xB700042C

#define EDMA3_Q0E12 (*(volatile unsigned *)0x430)
#define EDMA3_Q0E12_OFFSET 0xB7000430

#define EDMA3_Q0E13 (*(volatile unsigned *)0x434)
#define EDMA3_Q0E13_OFFSET 0xB7000434

#define EDMA3_Q0E14 (*(volatile unsigned *)0x438)
#define EDMA3_Q0E14_OFFSET 0xB7000438

#define EDMA3_Q0E15 (*(volatile unsigned *)0x43C)
#define EDMA3_Q0E15_OFFSET 0xB700043C

#define EDMA3_Q1E0 (*(volatile unsigned *)0x440)
#define EDMA3_Q1E0_OFFSET 0xB7000440

#define EDMA3_Q1E1 (*(volatile unsigned *)0x444)
#define EDMA3_Q1E1_OFFSET 0xB7000444

#define EDMA3_Q1E2 (*(volatile unsigned *)0x448)
#define EDMA3_Q1E2_OFFSET 0xB7000448

#define EDMA3_Q1E3 (*(volatile unsigned *)0x44C)
#define EDMA3_Q1E3_OFFSET 0xB700044C

#define EDMA3_Q1E4 (*(volatile unsigned *)0x450)
#define EDMA3_Q1E4_OFFSET 0xB7000450

#define EDMA3_Q1E5 (*(volatile unsigned *)0x454)
#define EDMA3_Q1E5_OFFSET 0xB7000454

#define EDMA3_Q1E6 (*(volatile unsigned *)0x458)
#define EDMA3_Q1E6_OFFSET 0xB7000458

#define EDMA3_Q1E7 (*(volatile unsigned *)0x45C)
#define EDMA3_Q1E7_OFFSET 0xB700045C

#define EDMA3_Q1E8 (*(volatile unsigned *)0x460)
#define EDMA3_Q1E8_OFFSET 0xB7000460

#define EDMA3_Q1E9 (*(volatile unsigned *)0x464)
#define EDMA3_Q1E9_OFFSET 0xB7000464

#define EDMA3_Q1E10 (*(volatile unsigned *)0x468)
#define EDMA3_Q1E10_OFFSET 0xB7000468

#define EDMA3_Q1E11 (*(volatile unsigned *)0x46C)
#define EDMA3_Q1E11_OFFSET 0xB700046C

#define EDMA3_Q1E12 (*(volatile unsigned *)0x470)
#define EDMA3_Q1E12_OFFSET 0xB7000470

#define EDMA3_Q1E13 (*(volatile unsigned *)0x474)
#define EDMA3_Q1E13_OFFSET 0xB7000474

#define EDMA3_Q1E14 (*(volatile unsigned *)0x478)
#define EDMA3_Q1E14_OFFSET 0xB7000478

#define EDMA3_Q1E15 (*(volatile unsigned *)0x47C)
#define EDMA3_Q1E15_OFFSET 0xB700047C

#define EDMA3_Q2E0 (*(volatile unsigned *)0x480)
#define EDMA3_Q2E0_OFFSET 0xB7000480

#define EDMA3_Q2E1 (*(volatile unsigned *)0x484)
#define EDMA3_Q2E1_OFFSET 0xB7000484

#define EDMA3_Q2E2 (*(volatile unsigned *)0x488)
#define EDMA3_Q2E2_OFFSET 0xB7000488

#define EDMA3_Q2E3 (*(volatile unsigned *)0x48C)
#define EDMA3_Q2E3_OFFSET 0xB700048C

#define EDMA3_Q2E4 (*(volatile unsigned *)0x490)
#define EDMA3_Q2E4_OFFSET 0xB7000490

#define EDMA3_Q2E5 (*(volatile unsigned *)0x494)
#define EDMA3_Q2E5_OFFSET 0xB7000494

#define EDMA3_Q2E6 (*(volatile unsigned *)0x498)
#define EDMA3_Q2E6_OFFSET 0xB7000498

#define EDMA3_Q2E7 (*(volatile unsigned *)0x49C)
#define EDMA3_Q2E7_OFFSET 0xB700049C

#define EDMA3_Q2E8 (*(volatile unsigned *)0x4A0)
#define EDMA3_Q2E8_OFFSET 0xB70004A0

#define EDMA3_Q2E9 (*(volatile unsigned *)0x4A4)
#define EDMA3_Q2E9_OFFSET 0xB70004A4

#define EDMA3_Q2E10 (*(volatile unsigned *)0x4A8)
#define EDMA3_Q2E10_OFFSET 0xB70004A8

#define EDMA3_Q2E11 (*(volatile unsigned *)0x4AC)
#define EDMA3_Q2E11_OFFSET 0xB70004AC

#define EDMA3_Q2E12 (*(volatile unsigned *)0x4B0)
#define EDMA3_Q2E12_OFFSET 0xB70004B0

#define EDMA3_Q2E13 (*(volatile unsigned *)0x4B4)
#define EDMA3_Q2E13_OFFSET 0xB70004B4

#define EDMA3_Q2E14 (*(volatile unsigned *)0x4B8)
#define EDMA3_Q2E14_OFFSET 0xB70004B8

#define EDMA3_Q2E15 (*(volatile unsigned *)0x4BC)
#define EDMA3_Q2E15_OFFSET 0xB70004BC

#define EDMA3_Q3E0 (*(volatile unsigned *)0x4C0)
#define EDMA3_Q3E0_OFFSET 0xB70004C0

#define EDMA3_Q3E1 (*(volatile unsigned *)0x4C4)
#define EDMA3_Q3E1_OFFSET 0xB70004C4

#define EDMA3_Q3E2 (*(volatile unsigned *)0x4C8)
#define EDMA3_Q3E2_OFFSET 0xB70004C8

#define EDMA3_Q3E3 (*(volatile unsigned *)0x4CC)
#define EDMA3_Q3E3_OFFSET 0xB70004CC

#define EDMA3_Q3E4 (*(volatile unsigned *)0x4D0)
#define EDMA3_Q3E4_OFFSET 0xB70004D0

#define EDMA3_Q3E5 (*(volatile unsigned *)0x4D4)
#define EDMA3_Q3E5_OFFSET 0xB70004D4

#define EDMA3_Q3E6 (*(volatile unsigned *)0x4D8)
#define EDMA3_Q3E6_OFFSET 0xB70004D8

#define EDMA3_Q3E7 (*(volatile unsigned *)0x4DC)
#define EDMA3_Q3E7_OFFSET 0xB70004DC

#define EDMA3_Q3E8 (*(volatile unsigned *)0x4E0)
#define EDMA3_Q3E8_OFFSET 0xB70004E0

#define EDMA3_Q3E9 (*(volatile unsigned *)0x4E4)
#define EDMA3_Q3E9_OFFSET 0xB70004E4

#define EDMA3_Q3E10 (*(volatile unsigned *)0x4E8)
#define EDMA3_Q3E10_OFFSET 0xB70004E8

#define EDMA3_Q3E11 (*(volatile unsigned *)0x4EC)
#define EDMA3_Q3E11_OFFSET 0xB70004EC

#define EDMA3_Q3E12 (*(volatile unsigned *)0x4F0)
#define EDMA3_Q3E12_OFFSET 0xB70004F0

#define EDMA3_Q3E13 (*(volatile unsigned *)0x4F4)
#define EDMA3_Q3E13_OFFSET 0xB70004F4

#define EDMA3_Q3E14 (*(volatile unsigned *)0x4F8)
#define EDMA3_Q3E14_OFFSET 0xB70004F8

#define EDMA3_Q3E15 (*(volatile unsigned *)0x4FC)
#define EDMA3_Q3E15_OFFSET 0xB70004FC

#define EDMA3_QSTAT0 (*(volatile unsigned *)0x600)
#define EDMA3_QSTAT0_OFFSET 0xB7000600

#define EDMA3_QSTAT1 (*(volatile unsigned *)0x604)
#define EDMA3_QSTAT1_OFFSET 0xB7000604

#define EDMA3_QSTAT2 (*(volatile unsigned *)0x608)
#define EDMA3_QSTAT2_OFFSET 0xB7000608

#define EDMA3_QSTAT3 (*(volatile unsigned *)0x60C)
#define EDMA3_QSTAT3_OFFSET 0xB700060C

#define EDMA3_QWMTHRA (*(volatile unsigned *)0x620)
#define EDMA3_QWMTHRA_OFFSET 0xB7000620

#define EDMA3_CCSTAT (*(volatile unsigned *)0x640)
#define EDMA3_CCSTAT_OFFSET 0xB7000640

#define EDMA3_MPFAR (*(volatile unsigned *)0x800)
#define EDMA3_MPFAR_OFFSET 0xB7000800

#define EDMA3_MPFSR (*(volatile unsigned *)0x804)
#define EDMA3_MPFSR_OFFSET 0xB7000804

#define EDMA3_MPFCR (*(volatile unsigned *)0x808)
#define EDMA3_MPFCR_OFFSET 0xB7000808

#define EDMA3_MPPAG (*(volatile unsigned *)0x80C)
#define EDMA3_MPPAG_OFFSET 0xB700080C

#define EDMA3_MPPA0 (*(volatile unsigned *)0x810)
#define EDMA3_MPPA0_OFFSET 0xB7000810

#define EDMA3_MPPA1 (*(volatile unsigned *)0x814)
#define EDMA3_MPPA1_OFFSET 0xB7000814

#define EDMA3_MPPA2 (*(volatile unsigned *)0x818)
#define EDMA3_MPPA2_OFFSET 0xB7000818

#define EDMA3_MPPA3 (*(volatile unsigned *)0x81C)
#define EDMA3_MPPA3_OFFSET 0xB700081C

#define EDMA3_MPPA4 (*(volatile unsigned *)0x820)
#define EDMA3_MPPA4_OFFSET 0xB7000820

#define EDMA3_MPPA5 (*(volatile unsigned *)0x824)
#define EDMA3_MPPA5_OFFSET 0xB7000824

#define EDMA3_MPPA6 (*(volatile unsigned *)0x828)
#define EDMA3_MPPA6_OFFSET 0xB7000828

#define EDMA3_MPPA7 (*(volatile unsigned *)0x82C)
#define EDMA3_MPPA7_OFFSET 0xB700082C

#define EDMA3_ER (*(volatile unsigned *)0x1000)
#define EDMA3_ER_OFFSET 0xB7001000

#define EDMA3_ERH (*(volatile unsigned *)0x1004)
#define EDMA3_ERH_OFFSET 0xB7001004

#define EDMA3_ECR (*(volatile unsigned *)0x1008)
#define EDMA3_ECR_OFFSET 0xB7001008

#define EDMA3_ECRH (*(volatile unsigned *)0x100C)
#define EDMA3_ECRH_OFFSET 0xB700100C

#define EDMA3_ESR (*(volatile unsigned *)0x1010)
#define EDMA3_ESR_OFFSET 0xB7001010

#define EDMA3_ESRH (*(volatile unsigned *)0x1014)
#define EDMA3_ESRH_OFFSET 0xB7001014

#define EDMA3_CER (*(volatile unsigned *)0x1018)
#define EDMA3_CER_OFFSET 0xB7001018

#define EDMA3_CERH (*(volatile unsigned *)0x101C)
#define EDMA3_CERH_OFFSET 0xB700101C

#define EDMA3_EER (*(volatile unsigned *)0x1020)
#define EDMA3_EER_OFFSET 0xB7001020

#define EDMA3_EERH (*(volatile unsigned *)0x1024)
#define EDMA3_EERH_OFFSET 0xB7001024

#define EDMA3_EECR (*(volatile unsigned *)0x1028)
#define EDMA3_EECR_OFFSET 0xB7001028

#define EDMA3_EECRH (*(volatile unsigned *)0x102C)
#define EDMA3_EECRH_OFFSET 0xB700102C

#define EDMA3_EESR (*(volatile unsigned *)0x1030)
#define EDMA3_EESR_OFFSET 0xB7001030

#define EDMA3_EESRH (*(volatile unsigned *)0x1034)
#define EDMA3_EESRH_OFFSET 0xB7001034

#define EDMA3_SER (*(volatile unsigned *)0x1038)
#define EDMA3_SER_OFFSET 0xB7001038

#define EDMA3_SERH (*(volatile unsigned *)0x103C)
#define EDMA3_SERH_OFFSET 0xB700103C

#define EDMA3_SECR (*(volatile unsigned *)0x1040)
#define EDMA3_SECR_OFFSET 0xB7001040

#define EDMA3_SECRH (*(volatile unsigned *)0x1044)
#define EDMA3_SECRH_OFFSET 0xB7001044

#define EDMA3_IER (*(volatile unsigned *)0x1050)
#define EDMA3_IER_OFFSET 0xB7001050

#define EDMA3_IERH (*(volatile unsigned *)0x1054)
#define EDMA3_IERH_OFFSET 0xB7001054

#define EDMA3_IECR (*(volatile unsigned *)0x1058)
#define EDMA3_IECR_OFFSET 0xB7001058

#define EDMA3_IECRH (*(volatile unsigned *)0x105C)
#define EDMA3_IECRH_OFFSET 0xB700105C

#define EDMA3_IESR (*(volatile unsigned *)0x1060)
#define EDMA3_IESR_OFFSET 0xB7001060

#define EDMA3_IESRH (*(volatile unsigned *)0x1064)
#define EDMA3_IESRH_OFFSET 0xB7001064

#define EDMA3_IPR (*(volatile unsigned *)0x1068)
#define EDMA3_IPR_OFFSET 0xB7001068

#define EDMA3_IPRH (*(volatile unsigned *)0x106C)
#define EDMA3_IPRH_OFFSET 0xB700106C

#define EDMA3_ICR (*(volatile unsigned *)0x1070)
#define EDMA3_ICR_OFFSET 0xB7001070

#define EDMA3_ICRH (*(volatile unsigned *)0x1074)
#define EDMA3_ICRH_OFFSET 0xB7001074

#define EDMA3_IEVAL (*(volatile unsigned *)0x1078)
#define EDMA3_IEVAL_OFFSET 0xB7001078

#define EDMA3_QER (*(volatile unsigned *)0x1080)
#define EDMA3_QER_OFFSET 0xB7001080

#define EDMA3_QEER (*(volatile unsigned *)0x1084)
#define EDMA3_QEER_OFFSET 0xB7001084

#define EDMA3_QEECR (*(volatile unsigned *)0x1088)
#define EDMA3_QEECR_OFFSET 0xB7001088

#define EDMA3_QEESR (*(volatile unsigned *)0x108C)
#define EDMA3_QEESR_OFFSET 0xB700108C

#define EDMA3_QSER (*(volatile unsigned *)0x1090)
#define EDMA3_QSER_OFFSET 0xB7001090

#define EDMA3_QSECR (*(volatile unsigned *)0x1094)
#define EDMA3_QSECR_OFFSET 0xB7001094

#define EDMA3_S0_ER (*(volatile unsigned *)0x2000)
#define EDMA3_S0_ER_OFFSET 0xB7002000

#define EDMA3_S0_ERH (*(volatile unsigned *)0x2004)
#define EDMA3_S0_ERH_OFFSET 0xB7002004

#define EDMA3_S0_ECR (*(volatile unsigned *)0x2008)
#define EDMA3_S0_ECR_OFFSET 0xB7002008

#define EDMA3_S0_ECRH (*(volatile unsigned *)0x200C)
#define EDMA3_S0_ECRH_OFFSET 0xB700200C

#define EDMA3_S0_ESR (*(volatile unsigned *)0x2010)
#define EDMA3_S0_ESR_OFFSET 0xB7002010

#define EDMA3_S0_ESRH (*(volatile unsigned *)0x2014)
#define EDMA3_S0_ESRH_OFFSET 0xB7002014

#define EDMA3_S0_CER (*(volatile unsigned *)0x2018)
#define EDMA3_S0_CER_OFFSET 0xB7002018

#define EDMA3_S0_CERH (*(volatile unsigned *)0x201C)
#define EDMA3_S0_CERH_OFFSET 0xB700201C

#define EDMA3_S0_EER (*(volatile unsigned *)0x2020)
#define EDMA3_S0_EER_OFFSET 0xB7002020

#define EDMA3_S0_EERH (*(volatile unsigned *)0x2024)
#define EDMA3_S0_EERH_OFFSET 0xB7002024

#define EDMA3_S0_EECR (*(volatile unsigned *)0x2028)
#define EDMA3_S0_EECR_OFFSET 0xB7002028

#define EDMA3_S0_EECRH (*(volatile unsigned *)0x202C)
#define EDMA3_S0_EECRH_OFFSET 0xB700202C

#define EDMA3_S0_EESR (*(volatile unsigned *)0x2030)
#define EDMA3_S0_EESR_OFFSET 0xB7002030

#define EDMA3_S0_EESRH (*(volatile unsigned *)0x2034)
#define EDMA3_S0_EESRH_OFFSET 0xB7002034

#define EDMA3_S0_SER (*(volatile unsigned *)0x2038)
#define EDMA3_S0_SER_OFFSET 0xB7002038

#define EDMA3_S0_SERH (*(volatile unsigned *)0x203C)
#define EDMA3_S0_SERH_OFFSET 0xB700203C

#define EDMA3_S0_SECR (*(volatile unsigned *)0x2040)
#define EDMA3_S0_SECR_OFFSET 0xB7002040

#define EDMA3_S0_SECRH (*(volatile unsigned *)0x2044)
#define EDMA3_S0_SECRH_OFFSET 0xB7002044

#define EDMA3_S0_IER (*(volatile unsigned *)0x2050)
#define EDMA3_S0_IER_OFFSET 0xB7002050

#define EDMA3_S0_IERH (*(volatile unsigned *)0x2054)
#define EDMA3_S0_IERH_OFFSET 0xB7002054

#define EDMA3_S0_IECR (*(volatile unsigned *)0x2058)
#define EDMA3_S0_IECR_OFFSET 0xB7002058

#define EDMA3_S0_IECRH (*(volatile unsigned *)0x205C)
#define EDMA3_S0_IECRH_OFFSET 0xB700205C

#define EDMA3_S0_IESR (*(volatile unsigned *)0x2060)
#define EDMA3_S0_IESR_OFFSET 0xB7002060

#define EDMA3_S0_IESRH (*(volatile unsigned *)0x2064)
#define EDMA3_S0_IESRH_OFFSET 0xB7002064

#define EDMA3_S0_IPR (*(volatile unsigned *)0x2068)
#define EDMA3_S0_IPR_OFFSET 0xB7002068

#define EDMA3_S0_IPRH (*(volatile unsigned *)0x206C)
#define EDMA3_S0_IPRH_OFFSET 0xB700206C

#define EDMA3_S0_ICR (*(volatile unsigned *)0x2070)
#define EDMA3_S0_ICR_OFFSET 0xB7002070

#define EDMA3_S0_ICRH (*(volatile unsigned *)0x2074)
#define EDMA3_S0_ICRH_OFFSET 0xB7002074

#define EDMA3_S0_IEVAL (*(volatile unsigned *)0x2078)
#define EDMA3_S0_IEVAL_OFFSET 0xB7002078

#define EDMA3_S0_QER (*(volatile unsigned *)0x2080)
#define EDMA3_S0_QER_OFFSET 0xB7002080

#define EDMA3_S0_QEER (*(volatile unsigned *)0x2084)
#define EDMA3_S0_QEER_OFFSET 0xB7002084

#define EDMA3_S0_QEECR (*(volatile unsigned *)0x2088)
#define EDMA3_S0_QEECR_OFFSET 0xB7002088

#define EDMA3_S0_QEESR (*(volatile unsigned *)0x208C)
#define EDMA3_S0_QEESR_OFFSET 0xB700208C

#define EDMA3_S0_QSER (*(volatile unsigned *)0x2090)
#define EDMA3_S0_QSER_OFFSET 0xB7002090

#define EDMA3_S0_QSECR (*(volatile unsigned *)0x2094)
#define EDMA3_S0_QSECR_OFFSET 0xB7002094

#define EDMA3_S1_ER (*(volatile unsigned *)0x2200)
#define EDMA3_S1_ER_OFFSET 0xB7002200

#define EDMA3_S1_ERH (*(volatile unsigned *)0x2204)
#define EDMA3_S1_ERH_OFFSET 0xB7002204

#define EDMA3_S1_ECR (*(volatile unsigned *)0x2208)
#define EDMA3_S1_ECR_OFFSET 0xB7002208

#define EDMA3_S1_ECRH (*(volatile unsigned *)0x220C)
#define EDMA3_S1_ECRH_OFFSET 0xB700220C

#define EDMA3_S1_ESR (*(volatile unsigned *)0x2210)
#define EDMA3_S1_ESR_OFFSET 0xB7002210

#define EDMA3_S1_ESRH (*(volatile unsigned *)0x2214)
#define EDMA3_S1_ESRH_OFFSET 0xB7002214

#define EDMA3_S1_CER (*(volatile unsigned *)0x2218)
#define EDMA3_S1_CER_OFFSET 0xB7002218

#define EDMA3_S1_CERH (*(volatile unsigned *)0x221C)
#define EDMA3_S1_CERH_OFFSET 0xB700221C

#define EDMA3_S1_EER (*(volatile unsigned *)0x2220)
#define EDMA3_S1_EER_OFFSET 0xB7002220

#define EDMA3_S1_EERH (*(volatile unsigned *)0x2224)
#define EDMA3_S1_EERH_OFFSET 0xB7002224

#define EDMA3_S1_EECR (*(volatile unsigned *)0x2228)
#define EDMA3_S1_EECR_OFFSET 0xB7002228

#define EDMA3_S1_EECRH (*(volatile unsigned *)0x222C)
#define EDMA3_S1_EECRH_OFFSET 0xB700222C

#define EDMA3_S1_EESR (*(volatile unsigned *)0x2230)
#define EDMA3_S1_EESR_OFFSET 0xB7002230

#define EDMA3_S1_EESRH (*(volatile unsigned *)0x2234)
#define EDMA3_S1_EESRH_OFFSET 0xB7002234

#define EDMA3_S1_SER (*(volatile unsigned *)0x2238)
#define EDMA3_S1_SER_OFFSET 0xB7002238

#define EDMA3_S1_SERH (*(volatile unsigned *)0x223C)
#define EDMA3_S1_SERH_OFFSET 0xB700223C

#define EDMA3_S1_SECR (*(volatile unsigned *)0x2240)
#define EDMA3_S1_SECR_OFFSET 0xB7002240

#define EDMA3_S1_SECRH (*(volatile unsigned *)0x2244)
#define EDMA3_S1_SECRH_OFFSET 0xB7002244

#define EDMA3_S1_IER (*(volatile unsigned *)0x2250)
#define EDMA3_S1_IER_OFFSET 0xB7002250

#define EDMA3_S1_IERH (*(volatile unsigned *)0x2254)
#define EDMA3_S1_IERH_OFFSET 0xB7002254

#define EDMA3_S1_IECR (*(volatile unsigned *)0x2258)
#define EDMA3_S1_IECR_OFFSET 0xB7002258

#define EDMA3_S1_IECRH (*(volatile unsigned *)0x225C)
#define EDMA3_S1_IECRH_OFFSET 0xB700225C

#define EDMA3_S1_IESR (*(volatile unsigned *)0x2260)
#define EDMA3_S1_IESR_OFFSET 0xB7002260

#define EDMA3_S1_IESRH (*(volatile unsigned *)0x2264)
#define EDMA3_S1_IESRH_OFFSET 0xB7002264

#define EDMA3_S1_IPR (*(volatile unsigned *)0x2268)
#define EDMA3_S1_IPR_OFFSET 0xB7002268

#define EDMA3_S1_IPRH (*(volatile unsigned *)0x226C)
#define EDMA3_S1_IPRH_OFFSET 0xB700226C

#define EDMA3_S1_ICR (*(volatile unsigned *)0x2270)
#define EDMA3_S1_ICR_OFFSET 0xB7002270

#define EDMA3_S1_ICRH (*(volatile unsigned *)0x2274)
#define EDMA3_S1_ICRH_OFFSET 0xB7002274

#define EDMA3_S1_IEVAL (*(volatile unsigned *)0x2278)
#define EDMA3_S1_IEVAL_OFFSET 0xB7002278

#define EDMA3_S1_QER (*(volatile unsigned *)0x2280)
#define EDMA3_S1_QER_OFFSET 0xB7002280

#define EDMA3_S1_QEER (*(volatile unsigned *)0x2284)
#define EDMA3_S1_QEER_OFFSET 0xB7002284

#define EDMA3_S1_QEECR (*(volatile unsigned *)0x2288)
#define EDMA3_S1_QEECR_OFFSET 0xB7002288

#define EDMA3_S1_QEESR (*(volatile unsigned *)0x228C)
#define EDMA3_S1_QEESR_OFFSET 0xB700228C

#define EDMA3_S1_QSER (*(volatile unsigned *)0x2290)
#define EDMA3_S1_QSER_OFFSET 0xB7002290

#define EDMA3_S1_QSECR (*(volatile unsigned *)0x2294)
#define EDMA3_S1_QSECR_OFFSET 0xB7002294

#define EDMA3_S2_ER (*(volatile unsigned *)0x2400)
#define EDMA3_S2_ER_OFFSET 0xB7002400

#define EDMA3_S2_ERH (*(volatile unsigned *)0x2404)
#define EDMA3_S2_ERH_OFFSET 0xB7002404

#define EDMA3_S2_ECR (*(volatile unsigned *)0x2408)
#define EDMA3_S2_ECR_OFFSET 0xB7002408

#define EDMA3_S2_ECRH (*(volatile unsigned *)0x240C)
#define EDMA3_S2_ECRH_OFFSET 0xB700240C

#define EDMA3_S2_ESR (*(volatile unsigned *)0x2410)
#define EDMA3_S2_ESR_OFFSET 0xB7002410

#define EDMA3_S2_ESRH (*(volatile unsigned *)0x2414)
#define EDMA3_S2_ESRH_OFFSET 0xB7002414

#define EDMA3_S2_CER (*(volatile unsigned *)0x2418)
#define EDMA3_S2_CER_OFFSET 0xB7002418

#define EDMA3_S2_CERH (*(volatile unsigned *)0x241C)
#define EDMA3_S2_CERH_OFFSET 0xB700241C

#define EDMA3_S2_EER (*(volatile unsigned *)0x2420)
#define EDMA3_S2_EER_OFFSET 0xB7002420

#define EDMA3_S2_EERH (*(volatile unsigned *)0x2424)
#define EDMA3_S2_EERH_OFFSET 0xB7002424

#define EDMA3_S2_EECR (*(volatile unsigned *)0x2428)
#define EDMA3_S2_EECR_OFFSET 0xB7002428

#define EDMA3_S2_EECRH (*(volatile unsigned *)0x242C)
#define EDMA3_S2_EECRH_OFFSET 0xB700242C

#define EDMA3_S2_EESR (*(volatile unsigned *)0x2430)
#define EDMA3_S2_EESR_OFFSET 0xB7002430

#define EDMA3_S2_EESRH (*(volatile unsigned *)0x2434)
#define EDMA3_S2_EESRH_OFFSET 0xB7002434

#define EDMA3_S2_SER (*(volatile unsigned *)0x2438)
#define EDMA3_S2_SER_OFFSET 0xB7002438

#define EDMA3_S2_SERH (*(volatile unsigned *)0x243C)
#define EDMA3_S2_SERH_OFFSET 0xB700243C

#define EDMA3_S2_SECR (*(volatile unsigned *)0x2440)
#define EDMA3_S2_SECR_OFFSET 0xB7002440

#define EDMA3_S2_SECRH (*(volatile unsigned *)0x2444)
#define EDMA3_S2_SECRH_OFFSET 0xB7002444

#define EDMA3_S2_IER (*(volatile unsigned *)0x2450)
#define EDMA3_S2_IER_OFFSET 0xB7002450

#define EDMA3_S2_IERH (*(volatile unsigned *)0x2454)
#define EDMA3_S2_IERH_OFFSET 0xB7002454

#define EDMA3_S2_IECR (*(volatile unsigned *)0x2458)
#define EDMA3_S2_IECR_OFFSET 0xB7002458

#define EDMA3_S2_IECRH (*(volatile unsigned *)0x245C)
#define EDMA3_S2_IECRH_OFFSET 0xB700245C

#define EDMA3_S2_IESR (*(volatile unsigned *)0x2460)
#define EDMA3_S2_IESR_OFFSET 0xB7002460

#define EDMA3_S2_IESRH (*(volatile unsigned *)0x2464)
#define EDMA3_S2_IESRH_OFFSET 0xB7002464

#define EDMA3_S2_IPR (*(volatile unsigned *)0x2468)
#define EDMA3_S2_IPR_OFFSET 0xB7002468

#define EDMA3_S2_IPRH (*(volatile unsigned *)0x246C)
#define EDMA3_S2_IPRH_OFFSET 0xB700246C

#define EDMA3_S2_ICR (*(volatile unsigned *)0x2470)
#define EDMA3_S2_ICR_OFFSET 0xB7002470

#define EDMA3_S2_ICRH (*(volatile unsigned *)0x2474)
#define EDMA3_S2_ICRH_OFFSET 0xB7002474

#define EDMA3_S2_IEVAL (*(volatile unsigned *)0x2478)
#define EDMA3_S2_IEVAL_OFFSET 0xB7002478

#define EDMA3_S2_QER (*(volatile unsigned *)0x2480)
#define EDMA3_S2_QER_OFFSET 0xB7002480

#define EDMA3_S2_QEER (*(volatile unsigned *)0x2484)
#define EDMA3_S2_QEER_OFFSET 0xB7002484

#define EDMA3_S2_QEECR (*(volatile unsigned *)0x2488)
#define EDMA3_S2_QEECR_OFFSET 0xB7002488

#define EDMA3_S2_QEESR (*(volatile unsigned *)0x248C)
#define EDMA3_S2_QEESR_OFFSET 0xB700248C

#define EDMA3_S2_QSER (*(volatile unsigned *)0x2490)
#define EDMA3_S2_QSER_OFFSET 0xB7002490

#define EDMA3_S2_QSECR (*(volatile unsigned *)0x2494)
#define EDMA3_S2_QSECR_OFFSET 0xB7002494

#define EDMA3_S3_ER (*(volatile unsigned *)0x2600)
#define EDMA3_S3_ER_OFFSET 0xB7002600

#define EDMA3_S3_ERH (*(volatile unsigned *)0x2604)
#define EDMA3_S3_ERH_OFFSET 0xB7002604

#define EDMA3_S3_ECR (*(volatile unsigned *)0x2608)
#define EDMA3_S3_ECR_OFFSET 0xB7002608

#define EDMA3_S3_ECRH (*(volatile unsigned *)0x260C)
#define EDMA3_S3_ECRH_OFFSET 0xB700260C

#define EDMA3_S3_ESR (*(volatile unsigned *)0x2610)
#define EDMA3_S3_ESR_OFFSET 0xB7002610

#define EDMA3_S3_ESRH (*(volatile unsigned *)0x2614)
#define EDMA3_S3_ESRH_OFFSET 0xB7002614

#define EDMA3_S3_CER (*(volatile unsigned *)0x2618)
#define EDMA3_S3_CER_OFFSET 0xB7002618

#define EDMA3_S3_CERH (*(volatile unsigned *)0x261C)
#define EDMA3_S3_CERH_OFFSET 0xB700261C

#define EDMA3_S3_EER (*(volatile unsigned *)0x2620)
#define EDMA3_S3_EER_OFFSET 0xB7002620

#define EDMA3_S3_EERH (*(volatile unsigned *)0x2624)
#define EDMA3_S3_EERH_OFFSET 0xB7002624

#define EDMA3_S3_EECR (*(volatile unsigned *)0x2628)
#define EDMA3_S3_EECR_OFFSET 0xB7002628

#define EDMA3_S3_EECRH (*(volatile unsigned *)0x262C)
#define EDMA3_S3_EECRH_OFFSET 0xB700262C

#define EDMA3_S3_EESR (*(volatile unsigned *)0x2630)
#define EDMA3_S3_EESR_OFFSET 0xB7002630

#define EDMA3_S3_EESRH (*(volatile unsigned *)0x2634)
#define EDMA3_S3_EESRH_OFFSET 0xB7002634

#define EDMA3_S3_SER (*(volatile unsigned *)0x2638)
#define EDMA3_S3_SER_OFFSET 0xB7002638

#define EDMA3_S3_SERH (*(volatile unsigned *)0x263C)
#define EDMA3_S3_SERH_OFFSET 0xB700263C

#define EDMA3_S3_SECR (*(volatile unsigned *)0x2640)
#define EDMA3_S3_SECR_OFFSET 0xB7002640

#define EDMA3_S3_SECRH (*(volatile unsigned *)0x2644)
#define EDMA3_S3_SECRH_OFFSET 0xB7002644

#define EDMA3_S3_IER (*(volatile unsigned *)0x2650)
#define EDMA3_S3_IER_OFFSET 0xB7002650

#define EDMA3_S3_IERH (*(volatile unsigned *)0x2654)
#define EDMA3_S3_IERH_OFFSET 0xB7002654

#define EDMA3_S3_IECR (*(volatile unsigned *)0x2658)
#define EDMA3_S3_IECR_OFFSET 0xB7002658

#define EDMA3_S3_IECRH (*(volatile unsigned *)0x265C)
#define EDMA3_S3_IECRH_OFFSET 0xB700265C

#define EDMA3_S3_IESR (*(volatile unsigned *)0x2660)
#define EDMA3_S3_IESR_OFFSET 0xB7002660

#define EDMA3_S3_IESRH (*(volatile unsigned *)0x2664)
#define EDMA3_S3_IESRH_OFFSET 0xB7002664

#define EDMA3_S3_IPR (*(volatile unsigned *)0x2668)
#define EDMA3_S3_IPR_OFFSET 0xB7002668

#define EDMA3_S3_IPRH (*(volatile unsigned *)0x266C)
#define EDMA3_S3_IPRH_OFFSET 0xB700266C

#define EDMA3_S3_ICR (*(volatile unsigned *)0x2670)
#define EDMA3_S3_ICR_OFFSET 0xB7002670

#define EDMA3_S3_ICRH (*(volatile unsigned *)0x2674)
#define EDMA3_S3_ICRH_OFFSET 0xB7002674

#define EDMA3_S3_IEVAL (*(volatile unsigned *)0x2678)
#define EDMA3_S3_IEVAL_OFFSET 0xB7002678

#define EDMA3_S3_QER (*(volatile unsigned *)0x2680)
#define EDMA3_S3_QER_OFFSET 0xB7002680

#define EDMA3_S3_QEER (*(volatile unsigned *)0x2684)
#define EDMA3_S3_QEER_OFFSET 0xB7002684

#define EDMA3_S3_QEECR (*(volatile unsigned *)0x2688)
#define EDMA3_S3_QEECR_OFFSET 0xB7002688

#define EDMA3_S3_QEESR (*(volatile unsigned *)0x268C)
#define EDMA3_S3_QEESR_OFFSET 0xB700268C

#define EDMA3_S3_QSER (*(volatile unsigned *)0x2690)
#define EDMA3_S3_QSER_OFFSET 0xB7002690

#define EDMA3_S3_QSECR (*(volatile unsigned *)0x2694)
#define EDMA3_S3_QSECR_OFFSET 0xB7002694

#define EDMA3_S4_ER (*(volatile unsigned *)0x2800)
#define EDMA3_S4_ER_OFFSET 0xB7002800

#define EDMA3_S4_ERH (*(volatile unsigned *)0x2804)
#define EDMA3_S4_ERH_OFFSET 0xB7002804

#define EDMA3_S4_ECR (*(volatile unsigned *)0x2808)
#define EDMA3_S4_ECR_OFFSET 0xB7002808

#define EDMA3_S4_ECRH (*(volatile unsigned *)0x280C)
#define EDMA3_S4_ECRH_OFFSET 0xB700280C

#define EDMA3_S4_ESR (*(volatile unsigned *)0x2810)
#define EDMA3_S4_ESR_OFFSET 0xB7002810

#define EDMA3_S4_ESRH (*(volatile unsigned *)0x2814)
#define EDMA3_S4_ESRH_OFFSET 0xB7002814

#define EDMA3_S4_CER (*(volatile unsigned *)0x2818)
#define EDMA3_S4_CER_OFFSET 0xB7002818

#define EDMA3_S4_CERH (*(volatile unsigned *)0x281C)
#define EDMA3_S4_CERH_OFFSET 0xB700281C

#define EDMA3_S4_EER (*(volatile unsigned *)0x2820)
#define EDMA3_S4_EER_OFFSET 0xB7002820

#define EDMA3_S4_EERH (*(volatile unsigned *)0x2824)
#define EDMA3_S4_EERH_OFFSET 0xB7002824

#define EDMA3_S4_EECR (*(volatile unsigned *)0x2828)
#define EDMA3_S4_EECR_OFFSET 0xB7002828

#define EDMA3_S4_EECRH (*(volatile unsigned *)0x282C)
#define EDMA3_S4_EECRH_OFFSET 0xB700282C

#define EDMA3_S4_EESR (*(volatile unsigned *)0x2830)
#define EDMA3_S4_EESR_OFFSET 0xB7002830

#define EDMA3_S4_EESRH (*(volatile unsigned *)0x2834)
#define EDMA3_S4_EESRH_OFFSET 0xB7002834

#define EDMA3_S4_SER (*(volatile unsigned *)0x2838)
#define EDMA3_S4_SER_OFFSET 0xB7002838

#define EDMA3_S4_SERH (*(volatile unsigned *)0x283C)
#define EDMA3_S4_SERH_OFFSET 0xB700283C

#define EDMA3_S4_SECR (*(volatile unsigned *)0x2840)
#define EDMA3_S4_SECR_OFFSET 0xB7002840

#define EDMA3_S4_SECRH (*(volatile unsigned *)0x2844)
#define EDMA3_S4_SECRH_OFFSET 0xB7002844

#define EDMA3_S4_IER (*(volatile unsigned *)0x2850)
#define EDMA3_S4_IER_OFFSET 0xB7002850

#define EDMA3_S4_IERH (*(volatile unsigned *)0x2854)
#define EDMA3_S4_IERH_OFFSET 0xB7002854

#define EDMA3_S4_IECR (*(volatile unsigned *)0x2858)
#define EDMA3_S4_IECR_OFFSET 0xB7002858

#define EDMA3_S4_IECRH (*(volatile unsigned *)0x285C)
#define EDMA3_S4_IECRH_OFFSET 0xB700285C

#define EDMA3_S4_IESR (*(volatile unsigned *)0x2860)
#define EDMA3_S4_IESR_OFFSET 0xB7002860

#define EDMA3_S4_IESRH (*(volatile unsigned *)0x2864)
#define EDMA3_S4_IESRH_OFFSET 0xB7002864

#define EDMA3_S4_IPR (*(volatile unsigned *)0x2868)
#define EDMA3_S4_IPR_OFFSET 0xB7002868

#define EDMA3_S4_IPRH (*(volatile unsigned *)0x286C)
#define EDMA3_S4_IPRH_OFFSET 0xB700286C

#define EDMA3_S4_ICR (*(volatile unsigned *)0x2870)
#define EDMA3_S4_ICR_OFFSET 0xB7002870

#define EDMA3_S4_ICRH (*(volatile unsigned *)0x2874)
#define EDMA3_S4_ICRH_OFFSET 0xB7002874

#define EDMA3_S4_IEVAL (*(volatile unsigned *)0x2878)
#define EDMA3_S4_IEVAL_OFFSET 0xB7002878

#define EDMA3_S4_QER (*(volatile unsigned *)0x2880)
#define EDMA3_S4_QER_OFFSET 0xB7002880

#define EDMA3_S4_QEER (*(volatile unsigned *)0x2884)
#define EDMA3_S4_QEER_OFFSET 0xB7002884

#define EDMA3_S4_QEECR (*(volatile unsigned *)0x2888)
#define EDMA3_S4_QEECR_OFFSET 0xB7002888

#define EDMA3_S4_QEESR (*(volatile unsigned *)0x288C)
#define EDMA3_S4_QEESR_OFFSET 0xB700288C

#define EDMA3_S4_QSER (*(volatile unsigned *)0x2890)
#define EDMA3_S4_QSER_OFFSET 0xB7002890

#define EDMA3_S4_QSECR (*(volatile unsigned *)0x2894)
#define EDMA3_S4_QSECR_OFFSET 0xB7002894

#define EDMA3_S5_ER (*(volatile unsigned *)0x2A00)
#define EDMA3_S5_ER_OFFSET 0xB7002A00

#define EDMA3_S5_ERH (*(volatile unsigned *)0x2A04)
#define EDMA3_S5_ERH_OFFSET 0xB7002A04

#define EDMA3_S5_ECR (*(volatile unsigned *)0x2A08)
#define EDMA3_S5_ECR_OFFSET 0xB7002A08

#define EDMA3_S5_ECRH (*(volatile unsigned *)0x2A0C)
#define EDMA3_S5_ECRH_OFFSET 0xB7002A0C

#define EDMA3_S5_ESR (*(volatile unsigned *)0x2A10)
#define EDMA3_S5_ESR_OFFSET 0xB7002A10

#define EDMA3_S5_ESRH (*(volatile unsigned *)0x2A14)
#define EDMA3_S5_ESRH_OFFSET 0xB7002A14

#define EDMA3_S5_CER (*(volatile unsigned *)0x2A18)
#define EDMA3_S5_CER_OFFSET 0xB7002A18

#define EDMA3_S5_CERH (*(volatile unsigned *)0x2A1C)
#define EDMA3_S5_CERH_OFFSET 0xB7002A1C

#define EDMA3_S5_EER (*(volatile unsigned *)0x2A20)
#define EDMA3_S5_EER_OFFSET 0xB7002A20

#define EDMA3_S5_EERH (*(volatile unsigned *)0x2A24)
#define EDMA3_S5_EERH_OFFSET 0xB7002A24

#define EDMA3_S5_EECR (*(volatile unsigned *)0x2A28)
#define EDMA3_S5_EECR_OFFSET 0xB7002A28

#define EDMA3_S5_EECRH (*(volatile unsigned *)0x2A2C)
#define EDMA3_S5_EECRH_OFFSET 0xB7002A2C

#define EDMA3_S5_EESR (*(volatile unsigned *)0x2A30)
#define EDMA3_S5_EESR_OFFSET 0xB7002A30

#define EDMA3_S5_EESRH (*(volatile unsigned *)0x2A34)
#define EDMA3_S5_EESRH_OFFSET 0xB7002A34

#define EDMA3_S5_SER (*(volatile unsigned *)0x2A38)
#define EDMA3_S5_SER_OFFSET 0xB7002A38

#define EDMA3_S5_SERH (*(volatile unsigned *)0x2A3C)
#define EDMA3_S5_SERH_OFFSET 0xB7002A3C

#define EDMA3_S5_SECR (*(volatile unsigned *)0x2A40)
#define EDMA3_S5_SECR_OFFSET 0xB7002A40

#define EDMA3_S5_SECRH (*(volatile unsigned *)0x2A44)
#define EDMA3_S5_SECRH_OFFSET 0xB7002A44

#define EDMA3_S5_IER (*(volatile unsigned *)0x2A50)
#define EDMA3_S5_IER_OFFSET 0xB7002A50

#define EDMA3_S5_IERH (*(volatile unsigned *)0x2A54)
#define EDMA3_S5_IERH_OFFSET 0xB7002A54

#define EDMA3_S5_IECR (*(volatile unsigned *)0x2A58)
#define EDMA3_S5_IECR_OFFSET 0xB7002A58

#define EDMA3_S5_IECRH (*(volatile unsigned *)0x2A5C)
#define EDMA3_S5_IECRH_OFFSET 0xB7002A5C

#define EDMA3_S5_IESR (*(volatile unsigned *)0x2A60)
#define EDMA3_S5_IESR_OFFSET 0xB7002A60

#define EDMA3_S5_IESRH (*(volatile unsigned *)0x2A64)
#define EDMA3_S5_IESRH_OFFSET 0xB7002A64

#define EDMA3_S5_IPR (*(volatile unsigned *)0x2A68)
#define EDMA3_S5_IPR_OFFSET 0xB7002A68

#define EDMA3_S5_IPRH (*(volatile unsigned *)0x2A6C)
#define EDMA3_S5_IPRH_OFFSET 0xB7002A6C

#define EDMA3_S5_ICR (*(volatile unsigned *)0x2A70)
#define EDMA3_S5_ICR_OFFSET 0xB7002A70

#define EDMA3_S5_ICRH (*(volatile unsigned *)0x2A74)
#define EDMA3_S5_ICRH_OFFSET 0xB7002A74

#define EDMA3_S5_IEVAL (*(volatile unsigned *)0x2A78)
#define EDMA3_S5_IEVAL_OFFSET 0xB7002A78

#define EDMA3_S5_QER (*(volatile unsigned *)0x2A80)
#define EDMA3_S5_QER_OFFSET 0xB7002A80

#define EDMA3_S5_QEER (*(volatile unsigned *)0x2A84)
#define EDMA3_S5_QEER_OFFSET 0xB7002A84

#define EDMA3_S5_QEECR (*(volatile unsigned *)0x2A88)
#define EDMA3_S5_QEECR_OFFSET 0xB7002A88

#define EDMA3_S5_QEESR (*(volatile unsigned *)0x2A8C)
#define EDMA3_S5_QEESR_OFFSET 0xB7002A8C

#define EDMA3_S5_QSER (*(volatile unsigned *)0x2A90)
#define EDMA3_S5_QSER_OFFSET 0xB7002A90

#define EDMA3_S5_QSECR (*(volatile unsigned *)0x2A94)
#define EDMA3_S5_QSECR_OFFSET 0xB7002A94

#define EDMA3_S6_ER (*(volatile unsigned *)0x2C00)
#define EDMA3_S6_ER_OFFSET 0xB7002C00

#define EDMA3_S6_ERH (*(volatile unsigned *)0x2C04)
#define EDMA3_S6_ERH_OFFSET 0xB7002C04

#define EDMA3_S6_ECR (*(volatile unsigned *)0x2C08)
#define EDMA3_S6_ECR_OFFSET 0xB7002C08

#define EDMA3_S6_ECRH (*(volatile unsigned *)0x2C0C)
#define EDMA3_S6_ECRH_OFFSET 0xB7002C0C

#define EDMA3_S6_ESR (*(volatile unsigned *)0x2C10)
#define EDMA3_S6_ESR_OFFSET 0xB7002C10

#define EDMA3_S6_ESRH (*(volatile unsigned *)0x2C14)
#define EDMA3_S6_ESRH_OFFSET 0xB7002C14

#define EDMA3_S6_CER (*(volatile unsigned *)0x2C18)
#define EDMA3_S6_CER_OFFSET 0xB7002C18

#define EDMA3_S6_CERH (*(volatile unsigned *)0x2C1C)
#define EDMA3_S6_CERH_OFFSET 0xB7002C1C

#define EDMA3_S6_EER (*(volatile unsigned *)0x2C20)
#define EDMA3_S6_EER_OFFSET 0xB7002C20

#define EDMA3_S6_EERH (*(volatile unsigned *)0x2C24)
#define EDMA3_S6_EERH_OFFSET 0xB7002C24

#define EDMA3_S6_EECR (*(volatile unsigned *)0x2C28)
#define EDMA3_S6_EECR_OFFSET 0xB7002C28

#define EDMA3_S6_EECRH (*(volatile unsigned *)0x2C2C)
#define EDMA3_S6_EECRH_OFFSET 0xB7002C2C

#define EDMA3_S6_EESR (*(volatile unsigned *)0x2C30)
#define EDMA3_S6_EESR_OFFSET 0xB7002C30

#define EDMA3_S6_EESRH (*(volatile unsigned *)0x2C34)
#define EDMA3_S6_EESRH_OFFSET 0xB7002C34

#define EDMA3_S6_SER (*(volatile unsigned *)0x2C38)
#define EDMA3_S6_SER_OFFSET 0xB7002C38

#define EDMA3_S6_SERH (*(volatile unsigned *)0x2C3C)
#define EDMA3_S6_SERH_OFFSET 0xB7002C3C

#define EDMA3_S6_SECR (*(volatile unsigned *)0x2C40)
#define EDMA3_S6_SECR_OFFSET 0xB7002C40

#define EDMA3_S6_SECRH (*(volatile unsigned *)0x2C44)
#define EDMA3_S6_SECRH_OFFSET 0xB7002C44

#define EDMA3_S6_IER (*(volatile unsigned *)0x2C50)
#define EDMA3_S6_IER_OFFSET 0xB7002C50

#define EDMA3_S6_IERH (*(volatile unsigned *)0x2C54)
#define EDMA3_S6_IERH_OFFSET 0xB7002C54

#define EDMA3_S6_IECR (*(volatile unsigned *)0x2C58)
#define EDMA3_S6_IECR_OFFSET 0xB7002C58

#define EDMA3_S6_IECRH (*(volatile unsigned *)0x2C5C)
#define EDMA3_S6_IECRH_OFFSET 0xB7002C5C

#define EDMA3_S6_IESR (*(volatile unsigned *)0x2C60)
#define EDMA3_S6_IESR_OFFSET 0xB7002C60

#define EDMA3_S6_IESRH (*(volatile unsigned *)0x2C64)
#define EDMA3_S6_IESRH_OFFSET 0xB7002C64

#define EDMA3_S6_IPR (*(volatile unsigned *)0x2C68)
#define EDMA3_S6_IPR_OFFSET 0xB7002C68

#define EDMA3_S6_IPRH (*(volatile unsigned *)0x2C6C)
#define EDMA3_S6_IPRH_OFFSET 0xB7002C6C

#define EDMA3_S6_ICR (*(volatile unsigned *)0x2C70)
#define EDMA3_S6_ICR_OFFSET 0xB7002C70

#define EDMA3_S6_ICRH (*(volatile unsigned *)0x2C74)
#define EDMA3_S6_ICRH_OFFSET 0xB7002C74

#define EDMA3_S6_IEVAL (*(volatile unsigned *)0x2C78)
#define EDMA3_S6_IEVAL_OFFSET 0xB7002C78

#define EDMA3_S6_QER (*(volatile unsigned *)0x2C80)
#define EDMA3_S6_QER_OFFSET 0xB7002C80

#define EDMA3_S6_QEER (*(volatile unsigned *)0x2C84)
#define EDMA3_S6_QEER_OFFSET 0xB7002C84

#define EDMA3_S6_QEECR (*(volatile unsigned *)0x2C88)
#define EDMA3_S6_QEECR_OFFSET 0xB7002C88

#define EDMA3_S6_QEESR (*(volatile unsigned *)0x2C8C)
#define EDMA3_S6_QEESR_OFFSET 0xB7002C8C

#define EDMA3_S6_QSER (*(volatile unsigned *)0x2C90)
#define EDMA3_S6_QSER_OFFSET 0xB7002C90

#define EDMA3_S6_QSECR (*(volatile unsigned *)0x2C94)
#define EDMA3_S6_QSECR_OFFSET 0xB7002C94

#define EDMA3_S7_ER (*(volatile unsigned *)0x2E00)
#define EDMA3_S7_ER_OFFSET 0xB7002E00

#define EDMA3_S7_ERH (*(volatile unsigned *)0x2E04)
#define EDMA3_S7_ERH_OFFSET 0xB7002E04

#define EDMA3_S7_ECR (*(volatile unsigned *)0x2E08)
#define EDMA3_S7_ECR_OFFSET 0xB7002E08

#define EDMA3_S7_ECRH (*(volatile unsigned *)0x2E0C)
#define EDMA3_S7_ECRH_OFFSET 0xB7002E0C

#define EDMA3_S7_ESR (*(volatile unsigned *)0x2E10)
#define EDMA3_S7_ESR_OFFSET 0xB7002E10

#define EDMA3_S7_ESRH (*(volatile unsigned *)0x2E14)
#define EDMA3_S7_ESRH_OFFSET 0xB7002E14

#define EDMA3_S7_CER (*(volatile unsigned *)0x2E18)
#define EDMA3_S7_CER_OFFSET 0xB7002E18

#define EDMA3_S7_CERH (*(volatile unsigned *)0x2E1C)
#define EDMA3_S7_CERH_OFFSET 0xB7002E1C

#define EDMA3_S7_EER (*(volatile unsigned *)0x2E20)
#define EDMA3_S7_EER_OFFSET 0xB7002E20

#define EDMA3_S7_EERH (*(volatile unsigned *)0x2E24)
#define EDMA3_S7_EERH_OFFSET 0xB7002E24

#define EDMA3_S7_EECR (*(volatile unsigned *)0x2E28)
#define EDMA3_S7_EECR_OFFSET 0xB7002E28

#define EDMA3_S7_EECRH (*(volatile unsigned *)0x2E2C)
#define EDMA3_S7_EECRH_OFFSET 0xB7002E2C

#define EDMA3_S7_EESR (*(volatile unsigned *)0x2E30)
#define EDMA3_S7_EESR_OFFSET 0xB7002E30

#define EDMA3_S7_EESRH (*(volatile unsigned *)0x2E34)
#define EDMA3_S7_EESRH_OFFSET 0xB7002E34

#define EDMA3_S7_SER (*(volatile unsigned *)0x2E38)
#define EDMA3_S7_SER_OFFSET 0xB7002E38

#define EDMA3_S7_SERH (*(volatile unsigned *)0x2E3C)
#define EDMA3_S7_SERH_OFFSET 0xB7002E3C

#define EDMA3_S7_SECR (*(volatile unsigned *)0x2E40)
#define EDMA3_S7_SECR_OFFSET 0xB7002E40

#define EDMA3_S7_SECRH (*(volatile unsigned *)0x2E44)
#define EDMA3_S7_SECRH_OFFSET 0xB7002E44

#define EDMA3_S7_IER (*(volatile unsigned *)0x2E50)
#define EDMA3_S7_IER_OFFSET 0xB7002E50

#define EDMA3_S7_IERH (*(volatile unsigned *)0x2E54)
#define EDMA3_S7_IERH_OFFSET 0xB7002E54

#define EDMA3_S7_IECR (*(volatile unsigned *)0x2E58)
#define EDMA3_S7_IECR_OFFSET 0xB7002E58

#define EDMA3_S7_IECRH (*(volatile unsigned *)0x2E5C)
#define EDMA3_S7_IECRH_OFFSET 0xB7002E5C

#define EDMA3_S7_IESR (*(volatile unsigned *)0x2E60)
#define EDMA3_S7_IESR_OFFSET 0xB7002E60

#define EDMA3_S7_IESRH (*(volatile unsigned *)0x2E64)
#define EDMA3_S7_IESRH_OFFSET 0xB7002E64

#define EDMA3_S7_IPR (*(volatile unsigned *)0x2E68)
#define EDMA3_S7_IPR_OFFSET 0xB7002E68

#define EDMA3_S7_IPRH (*(volatile unsigned *)0x2E6C)
#define EDMA3_S7_IPRH_OFFSET 0xB7002E6C

#define EDMA3_S7_ICR (*(volatile unsigned *)0x2E70)
#define EDMA3_S7_ICR_OFFSET 0xB7002E70

#define EDMA3_S7_ICRH (*(volatile unsigned *)0x2E74)
#define EDMA3_S7_ICRH_OFFSET 0xB7002E74

#define EDMA3_S7_IEVAL (*(volatile unsigned *)0x2E78)
#define EDMA3_S7_IEVAL_OFFSET 0xB7002E78

#define EDMA3_S7_QER (*(volatile unsigned *)0x2E80)
#define EDMA3_S7_QER_OFFSET 0xB7002E80

#define EDMA3_S7_QEER (*(volatile unsigned *)0x2E84)
#define EDMA3_S7_QEER_OFFSET 0xB7002E84

#define EDMA3_S7_QEECR (*(volatile unsigned *)0x2E88)
#define EDMA3_S7_QEECR_OFFSET 0xB7002E88

#define EDMA3_S7_QEESR (*(volatile unsigned *)0x2E8C)
#define EDMA3_S7_QEESR_OFFSET 0xB7002E8C

#define EDMA3_S7_QSER (*(volatile unsigned *)0x2E90)
#define EDMA3_S7_QSER_OFFSET 0xB7002E90

#define EDMA3_S7_QSECR (*(volatile unsigned *)0x2E94)
#define EDMA3_S7_QSECR_OFFSET 0xB7002E94

#ifndef EDMA3TC0_BASE
#define EDMA3TC0_BASE 0x49800000
#endif

#define EDMA3TC0_PID (*(volatile unsigned *)0x49800000)
#define EDMA3TC0_PID_OFFSET 0x0

#define EDMA3TC0_TCCFG (*(volatile unsigned *)0x49800004)
#define EDMA3TC0_TCCFG_OFFSET 0x4

#define EDMA3TC0_TCSTAT (*(volatile unsigned *)0x49800100)
#define EDMA3TC0_TCSTAT_OFFSET 0x100

#define EDMA3TC0_ERRSTAT (*(volatile unsigned *)0x49800120)
#define EDMA3TC0_ERRSTAT_OFFSET 0x120

#define EDMA3TC0_ERREN (*(volatile unsigned *)0x49800124)
#define EDMA3TC0_ERREN_OFFSET 0x124

#define EDMA3TC0_ERRCLR (*(volatile unsigned *)0x49800128)
#define EDMA3TC0_ERRCLR_OFFSET 0x128

#define EDMA3TC0_ERRDET (*(volatile unsigned *)0x4980012C)
#define EDMA3TC0_ERRDET_OFFSET 0x12C

#define EDMA3TC0_ERRCMD (*(volatile unsigned *)0x49800130)
#define EDMA3TC0_ERRCMD_OFFSET 0x130

#define EDMA3TC0_RDRATE (*(volatile unsigned *)0x49800140)
#define EDMA3TC0_RDRATE_OFFSET 0x140

#define EDMA3TC0_SAOPT (*(volatile unsigned *)0x49800240)
#define EDMA3TC0_SAOPT_OFFSET 0x240

#define EDMA3TC0_SASRC (*(volatile unsigned *)0x49800244)
#define EDMA3TC0_SASRC_OFFSET 0x244

#define EDMA3TC0_SACNT (*(volatile unsigned *)0x49800248)
#define EDMA3TC0_SACNT_OFFSET 0x248

#define EDMA3TC0_SADST (*(volatile unsigned *)0x4980024C)
#define EDMA3TC0_SADST_OFFSET 0x24C

#define EDMA3TC0_SABIDX (*(volatile unsigned *)0x49800250)
#define EDMA3TC0_SABIDX_OFFSET 0x250

#define EDMA3TC0_SAMPPRXY (*(volatile unsigned *)0x49800254)
#define EDMA3TC0_SAMPPRXY_OFFSET 0x254

#define EDMA3TC0_SACNTRLD (*(volatile unsigned *)0x49800258)
#define EDMA3TC0_SACNTRLD_OFFSET 0x258

#define EDMA3TC0_SASRCBREF (*(volatile unsigned *)0x4980025C)
#define EDMA3TC0_SASRCBREF_OFFSET 0x25C

#define EDMA3TC0_SADSTBREF (*(volatile unsigned *)0x49800260)
#define EDMA3TC0_SADSTBREF_OFFSET 0x260

#define EDMA3TC0_DFCNTRLD (*(volatile unsigned *)0x49800280)
#define EDMA3TC0_DFCNTRLD_OFFSET 0x280

#define EDMA3TC0_DFSRCBREF (*(volatile unsigned *)0x49800284)
#define EDMA3TC0_DFSRCBREF_OFFSET 0x284

#define EDMA3TC0_DFDSTBREF (*(volatile unsigned *)0x49800288)
#define EDMA3TC0_DFDSTBREF_OFFSET 0x288

#define EDMA3TC0_DFOPT0 (*(volatile unsigned *)0x49800300)
#define EDMA3TC0_DFOPT0_OFFSET 0x300

#define EDMA3TC0_DFSRC0 (*(volatile unsigned *)0x49800304)
#define EDMA3TC0_DFSRC0_OFFSET 0x304

#define EDMA3TC0_DFCNT0 (*(volatile unsigned *)0x49800308)
#define EDMA3TC0_DFCNT0_OFFSET 0x308

#define EDMA3TC0_DFDST0 (*(volatile unsigned *)0x4980030C)
#define EDMA3TC0_DFDST0_OFFSET 0x30C

#define EDMA3TC0_DFBIDX0 (*(volatile unsigned *)0x49800310)
#define EDMA3TC0_DFBIDX0_OFFSET 0x310

#define EDMA3TC0_DFMPPRXY0 (*(volatile unsigned *)0x49800314)
#define EDMA3TC0_DFMPPRXY0_OFFSET 0x314

#define EDMA3TC0_DFOPT1 (*(volatile unsigned *)0x49800340)
#define EDMA3TC0_DFOPT1_OFFSET 0x340

#define EDMA3TC0_DFSRC1 (*(volatile unsigned *)0x49800344)
#define EDMA3TC0_DFSRC1_OFFSET 0x344

#define EDMA3TC0_DFCNT1 (*(volatile unsigned *)0x49800348)
#define EDMA3TC0_DFCNT1_OFFSET 0x348

#define EDMA3TC0_DFDST1 (*(volatile unsigned *)0x4980034C)
#define EDMA3TC0_DFDST1_OFFSET 0x34C

#define EDMA3TC0_DFBIDX1 (*(volatile unsigned *)0x49800350)
#define EDMA3TC0_DFBIDX1_OFFSET 0x350

#define EDMA3TC0_DFMPPRXY1 (*(volatile unsigned *)0x49800354)
#define EDMA3TC0_DFMPPRXY1_OFFSET 0x354

#define EDMA3TC0_DFOPT2 (*(volatile unsigned *)0x49800380)
#define EDMA3TC0_DFOPT2_OFFSET 0x380

#define EDMA3TC0_DFSRC2 (*(volatile unsigned *)0x49800384)
#define EDMA3TC0_DFSRC2_OFFSET 0x384

#define EDMA3TC0_DFCNT2 (*(volatile unsigned *)0x49800388)
#define EDMA3TC0_DFCNT2_OFFSET 0x388

#define EDMA3TC0_DFDST2 (*(volatile unsigned *)0x4980038C)
#define EDMA3TC0_DFDST2_OFFSET 0x38C

#define EDMA3TC0_DFBIDX2 (*(volatile unsigned *)0x49800390)
#define EDMA3TC0_DFBIDX2_OFFSET 0x390

#define EDMA3TC0_DFMPPRXY2 (*(volatile unsigned *)0x49800394)
#define EDMA3TC0_DFMPPRXY2_OFFSET 0x394

#define EDMA3TC0_DFOPT3 (*(volatile unsigned *)0x498003C0)
#define EDMA3TC0_DFOPT3_OFFSET 0x3C0

#define EDMA3TC0_DFSRC3 (*(volatile unsigned *)0x498003C4)
#define EDMA3TC0_DFSRC3_OFFSET 0x3C4

#define EDMA3TC0_DFCNT3 (*(volatile unsigned *)0x498003C8)
#define EDMA3TC0_DFCNT3_OFFSET 0x3C8

#define EDMA3TC0_DFDST3 (*(volatile unsigned *)0x498003CC)
#define EDMA3TC0_DFDST3_OFFSET 0x3CC

#define EDMA3TC0_DFBIDX3 (*(volatile unsigned *)0x498003D0)
#define EDMA3TC0_DFBIDX3_OFFSET 0x3D0

#define EDMA3TC0_DFMPPRXY3 (*(volatile unsigned *)0x498003D4)
#define EDMA3TC0_DFMPPRXY3_OFFSET 0x3D4

#ifndef EDMA3TC1_BASE
#define EDMA3TC1_BASE 0x49900000
#endif

#define EDMA3TC1_PID (*(volatile unsigned *)0x49900000)
#define EDMA3TC1_PID_OFFSET 0x0

#define EDMA3TC1_TCCFG (*(volatile unsigned *)0x49900004)
#define EDMA3TC1_TCCFG_OFFSET 0x4

#define EDMA3TC1_TCSTAT (*(volatile unsigned *)0x49900100)
#define EDMA3TC1_TCSTAT_OFFSET 0x100

#define EDMA3TC1_ERRSTAT (*(volatile unsigned *)0x49900120)
#define EDMA3TC1_ERRSTAT_OFFSET 0x120

#define EDMA3TC1_ERREN (*(volatile unsigned *)0x49900124)
#define EDMA3TC1_ERREN_OFFSET 0x124

#define EDMA3TC1_ERRCLR (*(volatile unsigned *)0x49900128)
#define EDMA3TC1_ERRCLR_OFFSET 0x128

#define EDMA3TC1_ERRDET (*(volatile unsigned *)0x4990012C)
#define EDMA3TC1_ERRDET_OFFSET 0x12C

#define EDMA3TC1_ERRCMD (*(volatile unsigned *)0x49900130)
#define EDMA3TC1_ERRCMD_OFFSET 0x130

#define EDMA3TC1_RDRATE (*(volatile unsigned *)0x49900140)
#define EDMA3TC1_RDRATE_OFFSET 0x140

#define EDMA3TC1_SAOPT (*(volatile unsigned *)0x49900240)
#define EDMA3TC1_SAOPT_OFFSET 0x240

#define EDMA3TC1_SASRC (*(volatile unsigned *)0x49900244)
#define EDMA3TC1_SASRC_OFFSET 0x244

#define EDMA3TC1_SACNT (*(volatile unsigned *)0x49900248)
#define EDMA3TC1_SACNT_OFFSET 0x248

#define EDMA3TC1_SADST (*(volatile unsigned *)0x4990024C)
#define EDMA3TC1_SADST_OFFSET 0x24C

#define EDMA3TC1_SABIDX (*(volatile unsigned *)0x49900250)
#define EDMA3TC1_SABIDX_OFFSET 0x250

#define EDMA3TC1_SAMPPRXY (*(volatile unsigned *)0x49900254)
#define EDMA3TC1_SAMPPRXY_OFFSET 0x254

#define EDMA3TC1_SACNTRLD (*(volatile unsigned *)0x49900258)
#define EDMA3TC1_SACNTRLD_OFFSET 0x258

#define EDMA3TC1_SASRCBREF (*(volatile unsigned *)0x4990025C)
#define EDMA3TC1_SASRCBREF_OFFSET 0x25C

#define EDMA3TC1_SADSTBREF (*(volatile unsigned *)0x49900260)
#define EDMA3TC1_SADSTBREF_OFFSET 0x260

#define EDMA3TC1_DFCNTRLD (*(volatile unsigned *)0x49900280)
#define EDMA3TC1_DFCNTRLD_OFFSET 0x280

#define EDMA3TC1_DFSRCBREF (*(volatile unsigned *)0x49900284)
#define EDMA3TC1_DFSRCBREF_OFFSET 0x284

#define EDMA3TC1_DFDSTBREF (*(volatile unsigned *)0x49900288)
#define EDMA3TC1_DFDSTBREF_OFFSET 0x288

#define EDMA3TC1_DFOPT0 (*(volatile unsigned *)0x49900300)
#define EDMA3TC1_DFOPT0_OFFSET 0x300

#define EDMA3TC1_DFSRC0 (*(volatile unsigned *)0x49900304)
#define EDMA3TC1_DFSRC0_OFFSET 0x304

#define EDMA3TC1_DFCNT0 (*(volatile unsigned *)0x49900308)
#define EDMA3TC1_DFCNT0_OFFSET 0x308

#define EDMA3TC1_DFDST0 (*(volatile unsigned *)0x4990030C)
#define EDMA3TC1_DFDST0_OFFSET 0x30C

#define EDMA3TC1_DFBIDX0 (*(volatile unsigned *)0x49900310)
#define EDMA3TC1_DFBIDX0_OFFSET 0x310

#define EDMA3TC1_DFMPPRXY0 (*(volatile unsigned *)0x49900314)
#define EDMA3TC1_DFMPPRXY0_OFFSET 0x314

#define EDMA3TC1_DFOPT1 (*(volatile unsigned *)0x49900340)
#define EDMA3TC1_DFOPT1_OFFSET 0x340

#define EDMA3TC1_DFSRC1 (*(volatile unsigned *)0x49900344)
#define EDMA3TC1_DFSRC1_OFFSET 0x344

#define EDMA3TC1_DFCNT1 (*(volatile unsigned *)0x49900348)
#define EDMA3TC1_DFCNT1_OFFSET 0x348

#define EDMA3TC1_DFDST1 (*(volatile unsigned *)0x4990034C)
#define EDMA3TC1_DFDST1_OFFSET 0x34C

#define EDMA3TC1_DFBIDX1 (*(volatile unsigned *)0x49900350)
#define EDMA3TC1_DFBIDX1_OFFSET 0x350

#define EDMA3TC1_DFMPPRXY1 (*(volatile unsigned *)0x49900354)
#define EDMA3TC1_DFMPPRXY1_OFFSET 0x354

#define EDMA3TC1_DFOPT2 (*(volatile unsigned *)0x49900380)
#define EDMA3TC1_DFOPT2_OFFSET 0x380

#define EDMA3TC1_DFSRC2 (*(volatile unsigned *)0x49900384)
#define EDMA3TC1_DFSRC2_OFFSET 0x384

#define EDMA3TC1_DFCNT2 (*(volatile unsigned *)0x49900388)
#define EDMA3TC1_DFCNT2_OFFSET 0x388

#define EDMA3TC1_DFDST2 (*(volatile unsigned *)0x4990038C)
#define EDMA3TC1_DFDST2_OFFSET 0x38C

#define EDMA3TC1_DFBIDX2 (*(volatile unsigned *)0x49900390)
#define EDMA3TC1_DFBIDX2_OFFSET 0x390

#define EDMA3TC1_DFMPPRXY2 (*(volatile unsigned *)0x49900394)
#define EDMA3TC1_DFMPPRXY2_OFFSET 0x394

#define EDMA3TC1_DFOPT3 (*(volatile unsigned *)0x499003C0)
#define EDMA3TC1_DFOPT3_OFFSET 0x3C0

#define EDMA3TC1_DFSRC3 (*(volatile unsigned *)0x499003C4)
#define EDMA3TC1_DFSRC3_OFFSET 0x3C4

#define EDMA3TC1_DFCNT3 (*(volatile unsigned *)0x499003C8)
#define EDMA3TC1_DFCNT3_OFFSET 0x3C8

#define EDMA3TC1_DFDST3 (*(volatile unsigned *)0x499003CC)
#define EDMA3TC1_DFDST3_OFFSET 0x3CC

#define EDMA3TC1_DFBIDX3 (*(volatile unsigned *)0x499003D0)
#define EDMA3TC1_DFBIDX3_OFFSET 0x3D0

#define EDMA3TC1_DFMPPRXY3 (*(volatile unsigned *)0x499003D4)
#define EDMA3TC1_DFMPPRXY3_OFFSET 0x3D4

#ifndef EDMA3TC2_BASE
#define EDMA3TC2_BASE 0x49A00000
#endif

#define EDMA3TC2_PID (*(volatile unsigned *)0x49A00000)
#define EDMA3TC2_PID_OFFSET 0x0

#define EDMA3TC2_TCCFG (*(volatile unsigned *)0x49A00004)
#define EDMA3TC2_TCCFG_OFFSET 0x4

#define EDMA3TC2_TCSTAT (*(volatile unsigned *)0x49A00100)
#define EDMA3TC2_TCSTAT_OFFSET 0x100

#define EDMA3TC2_ERRSTAT (*(volatile unsigned *)0x49A00120)
#define EDMA3TC2_ERRSTAT_OFFSET 0x120

#define EDMA3TC2_ERREN (*(volatile unsigned *)0x49A00124)
#define EDMA3TC2_ERREN_OFFSET 0x124

#define EDMA3TC2_ERRCLR (*(volatile unsigned *)0x49A00128)
#define EDMA3TC2_ERRCLR_OFFSET 0x128

#define EDMA3TC2_ERRDET (*(volatile unsigned *)0x49A0012C)
#define EDMA3TC2_ERRDET_OFFSET 0x12C

#define EDMA3TC2_ERRCMD (*(volatile unsigned *)0x49A00130)
#define EDMA3TC2_ERRCMD_OFFSET 0x130

#define EDMA3TC2_RDRATE (*(volatile unsigned *)0x49A00140)
#define EDMA3TC2_RDRATE_OFFSET 0x140

#define EDMA3TC2_SAOPT (*(volatile unsigned *)0x49A00240)
#define EDMA3TC2_SAOPT_OFFSET 0x240

#define EDMA3TC2_SASRC (*(volatile unsigned *)0x49A00244)
#define EDMA3TC2_SASRC_OFFSET 0x244

#define EDMA3TC2_SACNT (*(volatile unsigned *)0x49A00248)
#define EDMA3TC2_SACNT_OFFSET 0x248

#define EDMA3TC2_SADST (*(volatile unsigned *)0x49A0024C)
#define EDMA3TC2_SADST_OFFSET 0x24C

#define EDMA3TC2_SABIDX (*(volatile unsigned *)0x49A00250)
#define EDMA3TC2_SABIDX_OFFSET 0x250

#define EDMA3TC2_SAMPPRXY (*(volatile unsigned *)0x49A00254)
#define EDMA3TC2_SAMPPRXY_OFFSET 0x254

#define EDMA3TC2_SACNTRLD (*(volatile unsigned *)0x49A00258)
#define EDMA3TC2_SACNTRLD_OFFSET 0x258

#define EDMA3TC2_SASRCBREF (*(volatile unsigned *)0x49A0025C)
#define EDMA3TC2_SASRCBREF_OFFSET 0x25C

#define EDMA3TC2_SADSTBREF (*(volatile unsigned *)0x49A00260)
#define EDMA3TC2_SADSTBREF_OFFSET 0x260

#define EDMA3TC2_DFCNTRLD (*(volatile unsigned *)0x49A00280)
#define EDMA3TC2_DFCNTRLD_OFFSET 0x280

#define EDMA3TC2_DFSRCBREF (*(volatile unsigned *)0x49A00284)
#define EDMA3TC2_DFSRCBREF_OFFSET 0x284

#define EDMA3TC2_DFDSTBREF (*(volatile unsigned *)0x49A00288)
#define EDMA3TC2_DFDSTBREF_OFFSET 0x288

#define EDMA3TC2_DFOPT0 (*(volatile unsigned *)0x49A00300)
#define EDMA3TC2_DFOPT0_OFFSET 0x300

#define EDMA3TC2_DFSRC0 (*(volatile unsigned *)0x49A00304)
#define EDMA3TC2_DFSRC0_OFFSET 0x304

#define EDMA3TC2_DFCNT0 (*(volatile unsigned *)0x49A00308)
#define EDMA3TC2_DFCNT0_OFFSET 0x308

#define EDMA3TC2_DFDST0 (*(volatile unsigned *)0x49A0030C)
#define EDMA3TC2_DFDST0_OFFSET 0x30C

#define EDMA3TC2_DFBIDX0 (*(volatile unsigned *)0x49A00310)
#define EDMA3TC2_DFBIDX0_OFFSET 0x310

#define EDMA3TC2_DFMPPRXY0 (*(volatile unsigned *)0x49A00314)
#define EDMA3TC2_DFMPPRXY0_OFFSET 0x314

#define EDMA3TC2_DFOPT1 (*(volatile unsigned *)0x49A00340)
#define EDMA3TC2_DFOPT1_OFFSET 0x340

#define EDMA3TC2_DFSRC1 (*(volatile unsigned *)0x49A00344)
#define EDMA3TC2_DFSRC1_OFFSET 0x344

#define EDMA3TC2_DFCNT1 (*(volatile unsigned *)0x49A00348)
#define EDMA3TC2_DFCNT1_OFFSET 0x348

#define EDMA3TC2_DFDST1 (*(volatile unsigned *)0x49A0034C)
#define EDMA3TC2_DFDST1_OFFSET 0x34C

#define EDMA3TC2_DFBIDX1 (*(volatile unsigned *)0x49A00350)
#define EDMA3TC2_DFBIDX1_OFFSET 0x350

#define EDMA3TC2_DFMPPRXY1 (*(volatile unsigned *)0x49A00354)
#define EDMA3TC2_DFMPPRXY1_OFFSET 0x354

#define EDMA3TC2_DFOPT2 (*(volatile unsigned *)0x49A00380)
#define EDMA3TC2_DFOPT2_OFFSET 0x380

#define EDMA3TC2_DFSRC2 (*(volatile unsigned *)0x49A00384)
#define EDMA3TC2_DFSRC2_OFFSET 0x384

#define EDMA3TC2_DFCNT2 (*(volatile unsigned *)0x49A00388)
#define EDMA3TC2_DFCNT2_OFFSET 0x388

#define EDMA3TC2_DFDST2 (*(volatile unsigned *)0x49A0038C)
#define EDMA3TC2_DFDST2_OFFSET 0x38C

#define EDMA3TC2_DFBIDX2 (*(volatile unsigned *)0x49A00390)
#define EDMA3TC2_DFBIDX2_OFFSET 0x390

#define EDMA3TC2_DFMPPRXY2 (*(volatile unsigned *)0x49A00394)
#define EDMA3TC2_DFMPPRXY2_OFFSET 0x394

#define EDMA3TC2_DFOPT3 (*(volatile unsigned *)0x49A003C0)
#define EDMA3TC2_DFOPT3_OFFSET 0x3C0

#define EDMA3TC2_DFSRC3 (*(volatile unsigned *)0x49A003C4)
#define EDMA3TC2_DFSRC3_OFFSET 0x3C4

#define EDMA3TC2_DFCNT3 (*(volatile unsigned *)0x49A003C8)
#define EDMA3TC2_DFCNT3_OFFSET 0x3C8

#define EDMA3TC2_DFDST3 (*(volatile unsigned *)0x49A003CC)
#define EDMA3TC2_DFDST3_OFFSET 0x3CC

#define EDMA3TC2_DFBIDX3 (*(volatile unsigned *)0x49A003D0)
#define EDMA3TC2_DFBIDX3_OFFSET 0x3D0

#define EDMA3TC2_DFMPPRXY3 (*(volatile unsigned *)0x49A003D4)
#define EDMA3TC2_DFMPPRXY3_OFFSET 0x3D4

#ifndef CPSW_SS_BASE
#define CPSW_SS_BASE 0x4A100000
#endif

#define CPSW_SS_CPSW_SS_ID_VER (*(volatile unsigned *)0x4A100000)
#define CPSW_SS_CPSW_SS_ID_VER_OFFSET 0x0

#define CPSW_SS_CPSW_SS_CONTROL (*(volatile unsigned *)0x4A100004)
#define CPSW_SS_CPSW_SS_CONTROL_OFFSET 0x4

#define CPSW_SS_CPSW_SS_SOFT_RESET (*(volatile unsigned *)0x4A100008)
#define CPSW_SS_CPSW_SS_SOFT_RESET_OFFSET 0x8

#define CPSW_SS_CPSW_SS_STAT_PORT_EN (*(volatile unsigned *)0x4A10000C)
#define CPSW_SS_CPSW_SS_STAT_PORT_EN_OFFSET 0xC

#define CPSW_SS_CPSW_SS_PTYPE (*(volatile unsigned *)0x4A100010)
#define CPSW_SS_CPSW_SS_PTYPE_OFFSET 0x10

#define CPSW_SS_CPSW_SS_SOFT_IDLE (*(volatile unsigned *)0x4A100014)
#define CPSW_SS_CPSW_SS_SOFT_IDLE_OFFSET 0x14

#define CPSW_SS_CPSW_SS_THRU_RATE (*(volatile unsigned *)0x4A100018)
#define CPSW_SS_CPSW_SS_THRU_RATE_OFFSET 0x18

#define CPSW_SS_CPSW_SS_GAP_THRESH (*(volatile unsigned *)0x4A10001C)
#define CPSW_SS_CPSW_SS_GAP_THRESH_OFFSET 0x1C

#define CPSW_SS_CPSW_SS_TX_START_WDS (*(volatile unsigned *)0x4A100020)
#define CPSW_SS_CPSW_SS_TX_START_WDS_OFFSET 0x20

#define CPSW_SS_CPSW_SS_FLOW_CONTRO (*(volatile unsigned *)0x4A100024)
#define CPSW_SS_CPSW_SS_FLOW_CONTRO_OFFSET 0x24

#define CPSW_SS_CPSW_SS_VLAN_LTYPE (*(volatile unsigned *)0x4A100028)
#define CPSW_SS_CPSW_SS_VLAN_LTYPE_OFFSET 0x28

#define CPSW_SS_CPSW_SS_TS_LTYPE (*(volatile unsigned *)0x4A10002C)
#define CPSW_SS_CPSW_SS_TS_LTYPE_OFFSET 0x2C

#define CPSW_SS_CPSW_SS_DLR_LTYPE (*(volatile unsigned *)0x4A100030)
#define CPSW_SS_CPSW_SS_DLR_LTYPE_OFFSET 0x30

#ifndef CPSW_PORT_BASE
#define CPSW_PORT_BASE 0x4A100100
#endif

#define CPSW_PORT_P0_CONTROL (*(volatile unsigned *)0x4A100100)
#define CPSW_PORT_P0_CONTROL_OFFSET 0x0

#define CPSW_PORT_P0_MAX_BLKS (*(volatile unsigned *)0x4A100108)
#define CPSW_PORT_P0_MAX_BLKS_OFFSET 0x8

#define CPSW_PORT_P0_BLK_CNT (*(volatile unsigned *)0x4A10010C)
#define CPSW_PORT_P0_BLK_CNT_OFFSET 0xC

#define CPSW_PORT_P0_TX_IN_CTL (*(volatile unsigned *)0x4A100110)
#define CPSW_PORT_P0_TX_IN_CTL_OFFSET 0x10

#define CPSW_PORT_P0_PORT_VLAN (*(volatile unsigned *)0x4A100114)
#define CPSW_PORT_P0_PORT_VLAN_OFFSET 0x14

#define CPSW_PORT_P0_TX_PRI_MAP (*(volatile unsigned *)0x4A100118)
#define CPSW_PORT_P0_TX_PRI_MAP_OFFSET 0x18

#define CPSW_PORT_P0_CPDMA_TX_PRI_MAP (*(volatile unsigned *)0x4A10011C)
#define CPSW_PORT_P0_CPDMA_TX_PRI_MAP_OFFSET 0x1C

#define CPSW_PORT_P0_CPDMA_RX_CH_MAP (*(volatile unsigned *)0x4A100120)
#define CPSW_PORT_P0_CPDMA_RX_CH_MAP_OFFSET 0x20

#define CPSW_PORT_P0_RX_DSCP_PRI_MAP0 (*(volatile unsigned *)0x4A100130)
#define CPSW_PORT_P0_RX_DSCP_PRI_MAP0_OFFSET 0x30

#define CPSW_PORT_P0_RX_DSCP_PRI_MAP1 (*(volatile unsigned *)0x4A100134)
#define CPSW_PORT_P0_RX_DSCP_PRI_MAP1_OFFSET 0x34

#define CPSW_PORT_P0_RX_DSCP_PRI_MAP2 (*(volatile unsigned *)0x4A100138)
#define CPSW_PORT_P0_RX_DSCP_PRI_MAP2_OFFSET 0x38

#define CPSW_PORT_P0_RX_DSCP_PRI_MAP3 (*(volatile unsigned *)0x4A10013C)
#define CPSW_PORT_P0_RX_DSCP_PRI_MAP3_OFFSET 0x3C

#define CPSW_PORT_P0_RX_DSCP_PRI_MAP4 (*(volatile unsigned *)0x4A100140)
#define CPSW_PORT_P0_RX_DSCP_PRI_MAP4_OFFSET 0x40

#define CPSW_PORT_P0_RX_DSCP_PRI_MAP5 (*(volatile unsigned *)0x4A100144)
#define CPSW_PORT_P0_RX_DSCP_PRI_MAP5_OFFSET 0x44

#define CPSW_PORT_P0_RX_DSCP_PRI_MAP6 (*(volatile unsigned *)0x4A100148)
#define CPSW_PORT_P0_RX_DSCP_PRI_MAP6_OFFSET 0x48

#define CPSW_PORT_P0_RX_DSCP_PRI_MAP7 (*(volatile unsigned *)0x4A10014C)
#define CPSW_PORT_P0_RX_DSCP_PRI_MAP7_OFFSET 0x4C

#define CPSW_PORT_P1_CONTROL (*(volatile unsigned *)0x4A100200)
#define CPSW_PORT_P1_CONTROL_OFFSET 0x100

#define CPSW_PORT_P1_MAX_BLKS (*(volatile unsigned *)0x4A100208)
#define CPSW_PORT_P1_MAX_BLKS_OFFSET 0x108

#define CPSW_PORT_P1_BLK_CNT (*(volatile unsigned *)0x4A10020C)
#define CPSW_PORT_P1_BLK_CNT_OFFSET 0x10C

#define CPSW_PORT_P1_TX_IN_CTL (*(volatile unsigned *)0x4A100210)
#define CPSW_PORT_P1_TX_IN_CTL_OFFSET 0x110

#define CPSW_PORT_P1_PORT_VLAN (*(volatile unsigned *)0x4A100214)
#define CPSW_PORT_P1_PORT_VLAN_OFFSET 0x114

#define CPSW_PORT_P1_TX_PRI_MAP (*(volatile unsigned *)0x4A100218)
#define CPSW_PORT_P1_TX_PRI_MAP_OFFSET 0x118

#define CPSW_PORT_P1_CPDMA_TX_PRI_MAP (*(volatile unsigned *)0x4A10021C)
#define CPSW_PORT_P1_CPDMA_TX_PRI_MAP_OFFSET 0x11C

#define CPSW_PORT_P1_CPDMA_RX_CH_MAP (*(volatile unsigned *)0x4A100220)
#define CPSW_PORT_P1_CPDMA_RX_CH_MAP_OFFSET 0x120

#define CPSW_PORT_P1_RX_DSCP_PRI_MAP0 (*(volatile unsigned *)0x4A100230)
#define CPSW_PORT_P1_RX_DSCP_PRI_MAP0_OFFSET 0x130

#define CPSW_PORT_P1_RX_DSCP_PRI_MAP1 (*(volatile unsigned *)0x4A100234)
#define CPSW_PORT_P1_RX_DSCP_PRI_MAP1_OFFSET 0x134

#define CPSW_PORT_P1_RX_DSCP_PRI_MAP2 (*(volatile unsigned *)0x4A100238)
#define CPSW_PORT_P1_RX_DSCP_PRI_MAP2_OFFSET 0x138

#define CPSW_PORT_P1_RX_DSCP_PRI_MAP3 (*(volatile unsigned *)0x4A10023C)
#define CPSW_PORT_P1_RX_DSCP_PRI_MAP3_OFFSET 0x13C

#define CPSW_PORT_P1_RX_DSCP_PRI_MAP4 (*(volatile unsigned *)0x4A100240)
#define CPSW_PORT_P1_RX_DSCP_PRI_MAP4_OFFSET 0x140

#define CPSW_PORT_P1_RX_DSCP_PRI_MAP5 (*(volatile unsigned *)0x4A100244)
#define CPSW_PORT_P1_RX_DSCP_PRI_MAP5_OFFSET 0x144

#define CPSW_PORT_P1_RX_DSCP_PRI_MAP6 (*(volatile unsigned *)0x4A100248)
#define CPSW_PORT_P1_RX_DSCP_PRI_MAP6_OFFSET 0x148

#define CPSW_PORT_P1_RX_DSCP_PRI_MAP7 (*(volatile unsigned *)0x4A10024C)
#define CPSW_PORT_P1_RX_DSCP_PRI_MAP7_OFFSET 0x14C

#define CPSW_PORT_P2_CONTROL (*(volatile unsigned *)0x4A100300)
#define CPSW_PORT_P2_CONTROL_OFFSET 0x200

#define CPSW_PORT_P2_MAX_BLKS (*(volatile unsigned *)0x4A100308)
#define CPSW_PORT_P2_MAX_BLKS_OFFSET 0x208

#define CPSW_PORT_P2_BLK_CNT (*(volatile unsigned *)0x4A10030C)
#define CPSW_PORT_P2_BLK_CNT_OFFSET 0x20C

#define CPSW_PORT_P2_TX_IN_CTL (*(volatile unsigned *)0x4A100310)
#define CPSW_PORT_P2_TX_IN_CTL_OFFSET 0x210

#define CPSW_PORT_P2_PORT_VLAN (*(volatile unsigned *)0x4A100314)
#define CPSW_PORT_P2_PORT_VLAN_OFFSET 0x214

#define CPSW_PORT_P2_TX_PRI_MAP (*(volatile unsigned *)0x4A100318)
#define CPSW_PORT_P2_TX_PRI_MAP_OFFSET 0x218

#define CPSW_PORT_P2_CPDMA_TX_PRI_MAP (*(volatile unsigned *)0x4A10031C)
#define CPSW_PORT_P2_CPDMA_TX_PRI_MAP_OFFSET 0x21C

#define CPSW_PORT_P2_CPDMA_RX_CH_MAP (*(volatile unsigned *)0x4A100320)
#define CPSW_PORT_P2_CPDMA_RX_CH_MAP_OFFSET 0x220

#define CPSW_PORT_P2_RX_DSCP_PRI_MAP0 (*(volatile unsigned *)0x4A100330)
#define CPSW_PORT_P2_RX_DSCP_PRI_MAP0_OFFSET 0x230

#define CPSW_PORT_P2_RX_DSCP_PRI_MAP1 (*(volatile unsigned *)0x4A100334)
#define CPSW_PORT_P2_RX_DSCP_PRI_MAP1_OFFSET 0x234

#define CPSW_PORT_P2_RX_DSCP_PRI_MAP2 (*(volatile unsigned *)0x4A100338)
#define CPSW_PORT_P2_RX_DSCP_PRI_MAP2_OFFSET 0x238

#define CPSW_PORT_P2_RX_DSCP_PRI_MAP3 (*(volatile unsigned *)0x4A10033C)
#define CPSW_PORT_P2_RX_DSCP_PRI_MAP3_OFFSET 0x23C

#define CPSW_PORT_P2_RX_DSCP_PRI_MAP4 (*(volatile unsigned *)0x4A100340)
#define CPSW_PORT_P2_RX_DSCP_PRI_MAP4_OFFSET 0x240

#define CPSW_PORT_P2_RX_DSCP_PRI_MAP5 (*(volatile unsigned *)0x4A100344)
#define CPSW_PORT_P2_RX_DSCP_PRI_MAP5_OFFSET 0x244

#define CPSW_PORT_P2_RX_DSCP_PRI_MAP6 (*(volatile unsigned *)0x4A100348)
#define CPSW_PORT_P2_RX_DSCP_PRI_MAP6_OFFSET 0x248

#define CPSW_PORT_P2_RX_DSCP_PRI_MAP7 (*(volatile unsigned *)0x4A10034C)
#define CPSW_PORT_P2_RX_DSCP_PRI_MAP7_OFFSET 0x24C

#ifndef CPSW_CPDMA_BASE
#define CPSW_CPDMA_BASE 0x4A100800
#endif

#define CPSW_CPDMA_TX_IDVER (*(volatile unsigned *)0x4A100800)
#define CPSW_CPDMA_TX_IDVER_OFFSET 0x0

#define CPSW_CPDMA_TX_CONTROL (*(volatile unsigned *)0x4A100804)
#define CPSW_CPDMA_TX_CONTROL_OFFSET 0x4

#define CPSW_CPDMA_TX_TEARDOWN (*(volatile unsigned *)0x4A100808)
#define CPSW_CPDMA_TX_TEARDOWN_OFFSET 0x8

#define CPSW_CPDMA_RX_IDVER (*(volatile unsigned *)0x4A100810)
#define CPSW_CPDMA_RX_IDVER_OFFSET 0x10

#define CPSW_CPDMA_RX_CONTROL (*(volatile unsigned *)0x4A100814)
#define CPSW_CPDMA_RX_CONTROL_OFFSET 0x14

#define CPSW_CPDMA_RX_TEARDOWN (*(volatile unsigned *)0x4A100818)
#define CPSW_CPDMA_RX_TEARDOWN_OFFSET 0x18

#define CPSW_CPDMA_CPDMA_SOFT_RESET (*(volatile unsigned *)0x4A10081C)
#define CPSW_CPDMA_CPDMA_SOFT_RESET_OFFSET 0x1C

#define CPSW_CPDMA_DMACONTROL (*(volatile unsigned *)0x4A100820)
#define CPSW_CPDMA_DMACONTROL_OFFSET 0x20

#define CPSW_CPDMA_DMASTATUS (*(volatile unsigned *)0x4A100824)
#define CPSW_CPDMA_DMASTATUS_OFFSET 0x24

#define CPSW_CPDMA_RX_BUFFER_OFFSET (*(volatile unsigned *)0x4A100828)
#define CPSW_CPDMA_RX_BUFFER_OFFSET_OFFSET 0x28

#define CPSW_CPDMA_EMCONTROL (*(volatile unsigned *)0x4A10082C)
#define CPSW_CPDMA_EMCONTROL_OFFSET 0x2C

#define CPSW_CPDMA_TX_PRI0_RATE (*(volatile unsigned *)0x4A100830)
#define CPSW_CPDMA_TX_PRI0_RATE_OFFSET 0x30

#define CPSW_CPDMA_TX_PRI1_RATE (*(volatile unsigned *)0x4A100834)
#define CPSW_CPDMA_TX_PRI1_RATE_OFFSET 0x34

#define CPSW_CPDMA_TX_PRI2_RATE (*(volatile unsigned *)0x4A100838)
#define CPSW_CPDMA_TX_PRI2_RATE_OFFSET 0x38

#define CPSW_CPDMA_TX_PRI3_RATE (*(volatile unsigned *)0x4A10083C)
#define CPSW_CPDMA_TX_PRI3_RATE_OFFSET 0x3C

#define CPSW_CPDMA_TX_PRI4_RATE (*(volatile unsigned *)0x4A100840)
#define CPSW_CPDMA_TX_PRI4_RATE_OFFSET 0x40

#define CPSW_CPDMA_TX_PRI5_RATE (*(volatile unsigned *)0x4A100844)
#define CPSW_CPDMA_TX_PRI5_RATE_OFFSET 0x44

#define CPSW_CPDMA_TX_PRI6_RATE (*(volatile unsigned *)0x4A100848)
#define CPSW_CPDMA_TX_PRI6_RATE_OFFSET 0x48

#define CPSW_CPDMA_TX_PRI7_RATE (*(volatile unsigned *)0x4A10084C)
#define CPSW_CPDMA_TX_PRI7_RATE_OFFSET 0x4C

#define CPSW_CPDMA_TX_INTSTAT_RAW (*(volatile unsigned *)0x4A100880)
#define CPSW_CPDMA_TX_INTSTAT_RAW_OFFSET 0x80

#define CPSW_CPDMA_TX_INTSTAT_MASKED (*(volatile unsigned *)0x4A100884)
#define CPSW_CPDMA_TX_INTSTAT_MASKED_OFFSET 0x84

#define CPSW_CPDMA_TX_INTMASK_SET (*(volatile unsigned *)0x4A100888)
#define CPSW_CPDMA_TX_INTMASK_SET_OFFSET 0x88

#define CPSW_CPDMA_TX_INTMASK_CLEAR (*(volatile unsigned *)0x4A10088C)
#define CPSW_CPDMA_TX_INTMASK_CLEAR_OFFSET 0x8C

#define CPSW_CPDMA_CPDMA_IN_VECTOR (*(volatile unsigned *)0x4A100890)
#define CPSW_CPDMA_CPDMA_IN_VECTOR_OFFSET 0x90

#define CPSW_CPDMA_CPDMA_EOI_VECTOR (*(volatile unsigned *)0x4A100894)
#define CPSW_CPDMA_CPDMA_EOI_VECTOR_OFFSET 0x94

#define CPSW_CPDMA_RX_INTSTAT_RAW (*(volatile unsigned *)0x4A1008A0)
#define CPSW_CPDMA_RX_INTSTAT_RAW_OFFSET 0xA0

#define CPSW_CPDMA_RX_INTSTAT_MASKED (*(volatile unsigned *)0x4A1008A4)
#define CPSW_CPDMA_RX_INTSTAT_MASKED_OFFSET 0xA4

#define CPSW_CPDMA_RX_INTMASK_SET (*(volatile unsigned *)0x4A1008A8)
#define CPSW_CPDMA_RX_INTMASK_SET_OFFSET 0xA8

#define CPSW_CPDMA_RX_INTMASK_CLEAR (*(volatile unsigned *)0x4A1008AC)
#define CPSW_CPDMA_RX_INTMASK_CLEAR_OFFSET 0xAC

#define CPSW_CPDMA_DMA_INTSTAT_RAW (*(volatile unsigned *)0x4A1008B0)
#define CPSW_CPDMA_DMA_INTSTAT_RAW_OFFSET 0xB0

#define CPSW_CPDMA_DMA_INTSTAT_MASKED (*(volatile unsigned *)0x4A1008B4)
#define CPSW_CPDMA_DMA_INTSTAT_MASKED_OFFSET 0xB4

#define CPSW_CPDMA_DMA_INTMASK_SET (*(volatile unsigned *)0x4A1008B8)
#define CPSW_CPDMA_DMA_INTMASK_SET_OFFSET 0xB8

#define CPSW_CPDMA_DMA_INTMASK_CLEAR (*(volatile unsigned *)0x4A1008BC)
#define CPSW_CPDMA_DMA_INTMASK_CLEAR_OFFSET 0xBC

#define CPSW_CPDMA_RX0_PENDTHRESH (*(volatile unsigned *)0x4A1008C0)
#define CPSW_CPDMA_RX0_PENDTHRESH_OFFSET 0xC0

#define CPSW_CPDMA_RX0_FREEBUFFER (*(volatile unsigned *)0x4A1008E0)
#define CPSW_CPDMA_RX0_FREEBUFFER_OFFSET 0xE0

#define CPSW_CPDMA_TX0_HDP (*(volatile unsigned *)0x4A100A00)
#define CPSW_CPDMA_TX0_HDP_OFFSET 0x200

#define CPSW_CPDMA_RX0_HDP (*(volatile unsigned *)0x4A100A20)
#define CPSW_CPDMA_RX0_HDP_OFFSET 0x220

#define CPSW_CPDMA_TX0_CP (*(volatile unsigned *)0x4A100A40)
#define CPSW_CPDMA_TX0_CP_OFFSET 0x240

#define CPSW_CPDMA_RX0_CP (*(volatile unsigned *)0x4A100A60)
#define CPSW_CPDMA_RX0_CP_OFFSET 0x260

#define CPSW_CPDMA_RX1_PENDTHRESH (*(volatile unsigned *)0x4A1008C4)
#define CPSW_CPDMA_RX1_PENDTHRESH_OFFSET 0xC4

#define CPSW_CPDMA_RX1_FREEBUFFER (*(volatile unsigned *)0x4A1008E4)
#define CPSW_CPDMA_RX1_FREEBUFFER_OFFSET 0xE4

#define CPSW_CPDMA_TX1_HDP (*(volatile unsigned *)0x4A100A04)
#define CPSW_CPDMA_TX1_HDP_OFFSET 0x204

#define CPSW_CPDMA_RX1_HDP (*(volatile unsigned *)0x4A100A24)
#define CPSW_CPDMA_RX1_HDP_OFFSET 0x224

#define CPSW_CPDMA_TX1_CP (*(volatile unsigned *)0x4A100A44)
#define CPSW_CPDMA_TX1_CP_OFFSET 0x244

#define CPSW_CPDMA_RX1_CP (*(volatile unsigned *)0x4A100A64)
#define CPSW_CPDMA_RX1_CP_OFFSET 0x264

#define CPSW_CPDMA_RX2_PENDTHRESH (*(volatile unsigned *)0x4A1008C8)
#define CPSW_CPDMA_RX2_PENDTHRESH_OFFSET 0xC8

#define CPSW_CPDMA_RX2_FREEBUFFER (*(volatile unsigned *)0x4A1008E8)
#define CPSW_CPDMA_RX2_FREEBUFFER_OFFSET 0xE8

#define CPSW_CPDMA_TX2_HDP (*(volatile unsigned *)0x4A100A08)
#define CPSW_CPDMA_TX2_HDP_OFFSET 0x208

#define CPSW_CPDMA_RX2_HDP (*(volatile unsigned *)0x4A100A28)
#define CPSW_CPDMA_RX2_HDP_OFFSET 0x228

#define CPSW_CPDMA_TX2_CP (*(volatile unsigned *)0x4A100A48)
#define CPSW_CPDMA_TX2_CP_OFFSET 0x248

#define CPSW_CPDMA_RX2_CP (*(volatile unsigned *)0x4A100A68)
#define CPSW_CPDMA_RX2_CP_OFFSET 0x268

#define CPSW_CPDMA_RX3_PENDTHRESH (*(volatile unsigned *)0x4A1008CC)
#define CPSW_CPDMA_RX3_PENDTHRESH_OFFSET 0xCC

#define CPSW_CPDMA_RX3_FREEBUFFER (*(volatile unsigned *)0x4A1008EC)
#define CPSW_CPDMA_RX3_FREEBUFFER_OFFSET 0xEC

#define CPSW_CPDMA_TX3_HDP (*(volatile unsigned *)0x4A100A0C)
#define CPSW_CPDMA_TX3_HDP_OFFSET 0x20C

#define CPSW_CPDMA_RX3_HDP (*(volatile unsigned *)0x4A100A2C)
#define CPSW_CPDMA_RX3_HDP_OFFSET 0x22C

#define CPSW_CPDMA_TX3_CP (*(volatile unsigned *)0x4A100A4C)
#define CPSW_CPDMA_TX3_CP_OFFSET 0x24C

#define CPSW_CPDMA_RX3_CP (*(volatile unsigned *)0x4A100A6C)
#define CPSW_CPDMA_RX3_CP_OFFSET 0x26C

#define CPSW_CPDMA_RX4_PENDTHRESH (*(volatile unsigned *)0x4A1008D0)
#define CPSW_CPDMA_RX4_PENDTHRESH_OFFSET 0xD0

#define CPSW_CPDMA_RX4_FREEBUFFER (*(volatile unsigned *)0x4A1008F0)
#define CPSW_CPDMA_RX4_FREEBUFFER_OFFSET 0xF0

#define CPSW_CPDMA_TX4_HDP (*(volatile unsigned *)0x4A100A10)
#define CPSW_CPDMA_TX4_HDP_OFFSET 0x210

#define CPSW_CPDMA_RX4_HDP (*(volatile unsigned *)0x4A100A30)
#define CPSW_CPDMA_RX4_HDP_OFFSET 0x230

#define CPSW_CPDMA_TX4_CP (*(volatile unsigned *)0x4A100A50)
#define CPSW_CPDMA_TX4_CP_OFFSET 0x250

#define CPSW_CPDMA_RX4_CP (*(volatile unsigned *)0x4A100A70)
#define CPSW_CPDMA_RX4_CP_OFFSET 0x270

#define CPSW_CPDMA_RX5_PENDTHRESH (*(volatile unsigned *)0x4A1008D4)
#define CPSW_CPDMA_RX5_PENDTHRESH_OFFSET 0xD4

#define CPSW_CPDMA_RX5_FREEBUFFER (*(volatile unsigned *)0x4A1008F4)
#define CPSW_CPDMA_RX5_FREEBUFFER_OFFSET 0xF4

#define CPSW_CPDMA_TX5_HDP (*(volatile unsigned *)0x4A100A14)
#define CPSW_CPDMA_TX5_HDP_OFFSET 0x214

#define CPSW_CPDMA_RX5_HDP (*(volatile unsigned *)0x4A100A34)
#define CPSW_CPDMA_RX5_HDP_OFFSET 0x234

#define CPSW_CPDMA_TX5_CP (*(volatile unsigned *)0x4A100A54)
#define CPSW_CPDMA_TX5_CP_OFFSET 0x254

#define CPSW_CPDMA_RX5_CP (*(volatile unsigned *)0x4A100A74)
#define CPSW_CPDMA_RX5_CP_OFFSET 0x274

#define CPSW_CPDMA_RX6_PENDTHRESH (*(volatile unsigned *)0x4A1008D8)
#define CPSW_CPDMA_RX6_PENDTHRESH_OFFSET 0xD8

#define CPSW_CPDMA_RX6_FREEBUFFER (*(volatile unsigned *)0x4A1008F8)
#define CPSW_CPDMA_RX6_FREEBUFFER_OFFSET 0xF8

#define CPSW_CPDMA_TX6_HDP (*(volatile unsigned *)0x4A100A18)
#define CPSW_CPDMA_TX6_HDP_OFFSET 0x218

#define CPSW_CPDMA_RX6_HDP (*(volatile unsigned *)0x4A100A38)
#define CPSW_CPDMA_RX6_HDP_OFFSET 0x238

#define CPSW_CPDMA_TX6_CP (*(volatile unsigned *)0x4A100A58)
#define CPSW_CPDMA_TX6_CP_OFFSET 0x258

#define CPSW_CPDMA_RX6_CP (*(volatile unsigned *)0x4A100A78)
#define CPSW_CPDMA_RX6_CP_OFFSET 0x278

#define CPSW_CPDMA_RX7_PENDTHRESH (*(volatile unsigned *)0x4A1008DC)
#define CPSW_CPDMA_RX7_PENDTHRESH_OFFSET 0xDC

#define CPSW_CPDMA_RX7_FREEBUFFER (*(volatile unsigned *)0x4A1008FC)
#define CPSW_CPDMA_RX7_FREEBUFFER_OFFSET 0xFC

#define CPSW_CPDMA_TX7_HDP (*(volatile unsigned *)0x4A100A1C)
#define CPSW_CPDMA_TX7_HDP_OFFSET 0x21C

#define CPSW_CPDMA_RX7_HDP (*(volatile unsigned *)0x4A100A3C)
#define CPSW_CPDMA_RX7_HDP_OFFSET 0x23C

#define CPSW_CPDMA_TX7_CP (*(volatile unsigned *)0x4A100A5C)
#define CPSW_CPDMA_TX7_CP_OFFSET 0x25C

#define CPSW_CPDMA_RX7_CP (*(volatile unsigned *)0x4A100A7C)
#define CPSW_CPDMA_RX7_CP_OFFSET 0x27C

#ifndef CPSW_ALE_BASE
#define CPSW_ALE_BASE 0x4A100D00
#endif

#define CPSW_ALE_IDVER (*(volatile unsigned *)0x4A100D00)
#define CPSW_ALE_IDVER_OFFSET 0x0

#define CPSW_ALE_CONTROL (*(volatile unsigned *)0x4A100D08)
#define CPSW_ALE_CONTROL_OFFSET 0x8

#define CPSW_ALE_PRESCALE (*(volatile unsigned *)0x4A100D10)
#define CPSW_ALE_PRESCALE_OFFSET 0x10

#define CPSW_ALE_UNKNOWN_VLAN (*(volatile unsigned *)0x4A100D18)
#define CPSW_ALE_UNKNOWN_VLAN_OFFSET 0x18

#define CPSW_ALE_TBLCTL (*(volatile unsigned *)0x4A100D20)
#define CPSW_ALE_TBLCTL_OFFSET 0x20

#define CPSW_ALE_TBLW0 (*(volatile unsigned *)0x4A100D3C)
#define CPSW_ALE_TBLW0_OFFSET 0x3C

#define CPSW_ALE_TBLW1 (*(volatile unsigned *)0x4A100D38)
#define CPSW_ALE_TBLW1_OFFSET 0x38

#define CPSW_ALE_TBLW2 (*(volatile unsigned *)0x4A100D34)
#define CPSW_ALE_TBLW2_OFFSET 0x34

#define CPSW_ALE_PORTCTL0 (*(volatile unsigned *)0x4A100D40)
#define CPSW_ALE_PORTCTL0_OFFSET 0x40

#define CPSW_ALE_PORTCTL1 (*(volatile unsigned *)0x4A100D44)
#define CPSW_ALE_PORTCTL1_OFFSET 0x44

#define CPSW_ALE_PORTCTL2 (*(volatile unsigned *)0x4A100D48)
#define CPSW_ALE_PORTCTL2_OFFSET 0x48

#define CPSW_ALE_PORTCTL3 (*(volatile unsigned *)0x4A100D4C)
#define CPSW_ALE_PORTCTL3_OFFSET 0x4C

#define CPSW_ALE_PORTCTL4 (*(volatile unsigned *)0x4A100D50)
#define CPSW_ALE_PORTCTL4_OFFSET 0x50

#define CPSW_ALE_PORTCTL5 (*(volatile unsigned *)0x4A100D54)
#define CPSW_ALE_PORTCTL5_OFFSET 0x54

#ifndef CPSW_SL1_BASE
#define CPSW_SL1_BASE 0x4A100D80
#endif

#define CPSW_SL1_IDVER (*(volatile unsigned *)0x4A100D80)
#define CPSW_SL1_IDVER_OFFSET 0x0

#define CPSW_SL1_MACCONTROL (*(volatile unsigned *)0x4A100D84)
#define CPSW_SL1_MACCONTROL_OFFSET 0x4

#define CPSW_SL1_MACSTATUS (*(volatile unsigned *)0x4A100D88)
#define CPSW_SL1_MACSTATUS_OFFSET 0x8

#define CPSW_SL1_SOFT_RESET (*(volatile unsigned *)0x4A100D8C)
#define CPSW_SL1_SOFT_RESET_OFFSET 0xC

#define CPSW_SL1_RX_MAXLEN (*(volatile unsigned *)0x4A100D90)
#define CPSW_SL1_RX_MAXLEN_OFFSET 0x10

#define CPSW_SL1_BOFFTEST (*(volatile unsigned *)0x4A100D94)
#define CPSW_SL1_BOFFTEST_OFFSET 0x14

#define CPSW_SL1_RX_PAUSE (*(volatile unsigned *)0x4A100D98)
#define CPSW_SL1_RX_PAUSE_OFFSET 0x18

#define CPSW_SL1_TX_PAUSE (*(volatile unsigned *)0x4A100D9C)
#define CPSW_SL1_TX_PAUSE_OFFSET 0x1C

#define CPSW_SL1_EMCONTROL (*(volatile unsigned *)0x4A100DA0)
#define CPSW_SL1_EMCONTROL_OFFSET 0x20

#define CPSW_SL1_RX_PRI_MAP (*(volatile unsigned *)0x4A100DA4)
#define CPSW_SL1_RX_PRI_MAP_OFFSET 0x24

#define CPSW_SL1_TX_GAP (*(volatile unsigned *)0x4A100DA8)
#define CPSW_SL1_TX_GAP_OFFSET 0x28

#ifndef CPSW_SL2_BASE
#define CPSW_SL2_BASE 0x4A100DC0
#endif

#define CPSW_SL2_IDVER (*(volatile unsigned *)0x4A100DC0)
#define CPSW_SL2_IDVER_OFFSET 0x0

#define CPSW_SL2_MACCONTROL (*(volatile unsigned *)0x4A100DC4)
#define CPSW_SL2_MACCONTROL_OFFSET 0x4

#define CPSW_SL2_MACSTATUS (*(volatile unsigned *)0x4A100DC8)
#define CPSW_SL2_MACSTATUS_OFFSET 0x8

#define CPSW_SL2_SOFT_RESET (*(volatile unsigned *)0x4A100DCC)
#define CPSW_SL2_SOFT_RESET_OFFSET 0xC

#define CPSW_SL2_RX_MAXLEN (*(volatile unsigned *)0x4A100DD0)
#define CPSW_SL2_RX_MAXLEN_OFFSET 0x10

#define CPSW_SL2_BOFFTEST (*(volatile unsigned *)0x4A100DD4)
#define CPSW_SL2_BOFFTEST_OFFSET 0x14

#define CPSW_SL2_RX_PAUSE (*(volatile unsigned *)0x4A100DD8)
#define CPSW_SL2_RX_PAUSE_OFFSET 0x18

#define CPSW_SL2_TX_PAUSE (*(volatile unsigned *)0x4A100DDC)
#define CPSW_SL2_TX_PAUSE_OFFSET 0x1C

#define CPSW_SL2_EMCONTROL (*(volatile unsigned *)0x4A100DE0)
#define CPSW_SL2_EMCONTROL_OFFSET 0x20

#define CPSW_SL2_RX_PRI_MAP (*(volatile unsigned *)0x4A100DE4)
#define CPSW_SL2_RX_PRI_MAP_OFFSET 0x24

#define CPSW_SL2_TX_GAP (*(volatile unsigned *)0x4A100DE8)
#define CPSW_SL2_TX_GAP_OFFSET 0x28

#ifndef MDIO_BASE
#define MDIO_BASE 0x4A101000
#endif

#define MDIO_OVER (*(volatile unsigned *)0x4A101000)
#define MDIO_OVER_OFFSET 0x0

#define MDIO_CONTROL (*(volatile unsigned *)0x4A101004)
#define MDIO_CONTROL_OFFSET 0x4

#define MDIO_ALIVE (*(volatile unsigned *)0x4A101008)
#define MDIO_ALIVE_OFFSET 0x8

#define MDIO_LINK (*(volatile unsigned *)0x4A10100C)
#define MDIO_LINK_OFFSET 0xC

#define MDIO_LINKINTRAW (*(volatile unsigned *)0x4A101010)
#define MDIO_LINKINTRAW_OFFSET 0x10

#define MDIO_LINKINTMASKED (*(volatile unsigned *)0x4A101014)
#define MDIO_LINKINTMASKED_OFFSET 0x14

#define MDIO_USERINTRAW (*(volatile unsigned *)0x4A101020)
#define MDIO_USERINTRAW_OFFSET 0x20

#define MDIO_USERINTMASKED (*(volatile unsigned *)0x4A101024)
#define MDIO_USERINTMASKED_OFFSET 0x24

#define MDIO_USERINTMASKSET (*(volatile unsigned *)0x4A101028)
#define MDIO_USERINTMASKSET_OFFSET 0x28

#define MDIO_USERINTMASKCLEAR (*(volatile unsigned *)0x4A10102C)
#define MDIO_USERINTMASKCLEAR_OFFSET 0x2C

#define MDIO_USERACCESS0 (*(volatile unsigned *)0x4A101080)
#define MDIO_USERACCESS0_OFFSET 0x80

#define MDIO_USERPHYSEL0 (*(volatile unsigned *)0x4A101084)
#define MDIO_USERPHYSEL0_OFFSET 0x84

#define MDIO_USERACCESS1 (*(volatile unsigned *)0x4A101088)
#define MDIO_USERACCESS1_OFFSET 0x88

#define MDIO_USERPHYSEL1 (*(volatile unsigned *)0x4A10108C)
#define MDIO_USERPHYSEL1_OFFSET 0x8C

#ifndef CPSW_WR_BASE
#define CPSW_WR_BASE 0x4A101200
#endif

#define CPSW_WR_IDVER (*(volatile unsigned *)0x4A101200)
#define CPSW_WR_IDVER_OFFSET 0x0

#define CPSW_WR_SOFT_RESET (*(volatile unsigned *)0x4A101204)
#define CPSW_WR_SOFT_RESET_OFFSET 0x4

#define CPSW_WR_CONTROL (*(volatile unsigned *)0x4A101208)
#define CPSW_WR_CONTROL_OFFSET 0x8

#define CPSW_WR_INT_CONTROL (*(volatile unsigned *)0x4A10120C)
#define CPSW_WR_INT_CONTROL_OFFSET 0xC

#define CPSW_WR_C0_RX_THRESH_EN (*(volatile unsigned *)0x4A101210)
#define CPSW_WR_C0_RX_THRESH_EN_OFFSET 0x10

#define CPSW_WR_C0_RX_EN (*(volatile unsigned *)0x4A101214)
#define CPSW_WR_C0_RX_EN_OFFSET 0x14

#define CPSW_WR_C0_TX_EN (*(volatile unsigned *)0x4A101218)
#define CPSW_WR_C0_TX_EN_OFFSET 0x18

#define CPSW_WR_C0_MISC_EN (*(volatile unsigned *)0x4A10121C)
#define CPSW_WR_C0_MISC_EN_OFFSET 0x1C

#define CPSW_WR_C0_RX_THRESH_STAT (*(volatile unsigned *)0x4A101240)
#define CPSW_WR_C0_RX_THRESH_STAT_OFFSET 0x40

#define CPSW_WR_C0_RX_STAT (*(volatile unsigned *)0x4A101244)
#define CPSW_WR_C0_RX_STAT_OFFSET 0x44

#define CPSW_WR_C0_TX_STAT (*(volatile unsigned *)0x4A101248)
#define CPSW_WR_C0_TX_STAT_OFFSET 0x48

#define CPSW_WR_C0_MISC_STAT (*(volatile unsigned *)0x4A10124C)
#define CPSW_WR_C0_MISC_STAT_OFFSET 0x4C

#define CPSW_WR_C0_RX_IMAX (*(volatile unsigned *)0x4A101270)
#define CPSW_WR_C0_RX_IMAX_OFFSET 0x70

#define CPSW_WR_C0_TX_IMAX (*(volatile unsigned *)0x4A101274)
#define CPSW_WR_C0_TX_IMAX_OFFSET 0x74

#define CPSW_WR_C1_RX_THRESH_EN (*(volatile unsigned *)0x4A101220)
#define CPSW_WR_C1_RX_THRESH_EN_OFFSET 0x20

#define CPSW_WR_C1_RX_EN (*(volatile unsigned *)0x4A101224)
#define CPSW_WR_C1_RX_EN_OFFSET 0x24

#define CPSW_WR_C1_TX_EN (*(volatile unsigned *)0x4A101228)
#define CPSW_WR_C1_TX_EN_OFFSET 0x28

#define CPSW_WR_C1_MISC_EN (*(volatile unsigned *)0x4A10122C)
#define CPSW_WR_C1_MISC_EN_OFFSET 0x2C

#define CPSW_WR_C1_RX_THRESH_STAT (*(volatile unsigned *)0x4A101250)
#define CPSW_WR_C1_RX_THRESH_STAT_OFFSET 0x50

#define CPSW_WR_C1_RX_STAT (*(volatile unsigned *)0x4A101254)
#define CPSW_WR_C1_RX_STAT_OFFSET 0x54

#define CPSW_WR_C1_TX_STAT (*(volatile unsigned *)0x4A101258)
#define CPSW_WR_C1_TX_STAT_OFFSET 0x58

#define CPSW_WR_C1_MISC_STAT (*(volatile unsigned *)0x4A10125C)
#define CPSW_WR_C1_MISC_STAT_OFFSET 0x5C

#define CPSW_WR_C1_RX_IMAX (*(volatile unsigned *)0x4A101278)
#define CPSW_WR_C1_RX_IMAX_OFFSET 0x78

#define CPSW_WR_C1_TX_IMAX (*(volatile unsigned *)0x4A10127C)
#define CPSW_WR_C1_TX_IMAX_OFFSET 0x7C

#define CPSW_WR_C2_RX_THRESH_EN (*(volatile unsigned *)0x4A101230)
#define CPSW_WR_C2_RX_THRESH_EN_OFFSET 0x30

#define CPSW_WR_C2_RX_EN (*(volatile unsigned *)0x4A101234)
#define CPSW_WR_C2_RX_EN_OFFSET 0x34

#define CPSW_WR_C2_TX_EN (*(volatile unsigned *)0x4A101238)
#define CPSW_WR_C2_TX_EN_OFFSET 0x38

#define CPSW_WR_C2_MISC_EN (*(volatile unsigned *)0x4A10123C)
#define CPSW_WR_C2_MISC_EN_OFFSET 0x3C

#define CPSW_WR_C2_RX_THRESH_STAT (*(volatile unsigned *)0x4A101260)
#define CPSW_WR_C2_RX_THRESH_STAT_OFFSET 0x60

#define CPSW_WR_C2_RX_STAT (*(volatile unsigned *)0x4A101264)
#define CPSW_WR_C2_RX_STAT_OFFSET 0x64

#define CPSW_WR_C2_TX_STAT (*(volatile unsigned *)0x4A101268)
#define CPSW_WR_C2_TX_STAT_OFFSET 0x68

#define CPSW_WR_C2_MISC_STAT (*(volatile unsigned *)0x4A10126C)
#define CPSW_WR_C2_MISC_STAT_OFFSET 0x6C

#define CPSW_WR_C2_RX_IMAX (*(volatile unsigned *)0x4A101280)
#define CPSW_WR_C2_RX_IMAX_OFFSET 0x80

#define CPSW_WR_C2_TX_IMAX (*(volatile unsigned *)0x4A101284)
#define CPSW_WR_C2_TX_IMAX_OFFSET 0x84

#define CPSW_WR_RGMII_CTL (*(volatile unsigned *)0x4A101288)
#define CPSW_WR_RGMII_CTL_OFFSET 0x88

#ifndef EMIF_BASE
#define EMIF_BASE 0x4C000000
#endif

#define EMIF_EMIF_MOD_ID_REV (*(volatile unsigned *)0x4C000000)
#define EMIF_EMIF_MOD_ID_REV_OFFSET 0x0

#define EMIF_STATUS (*(volatile unsigned *)0x4C000004)
#define EMIF_STATUS_OFFSET 0x4

#define EMIF_SDRAM_CONFIG (*(volatile unsigned *)0x4C000008)
#define EMIF_SDRAM_CONFIG_OFFSET 0x8

#define EMIF_SDRAM_CONFIG_2 (*(volatile unsigned *)0x4C00000C)
#define EMIF_SDRAM_CONFIG_2_OFFSET 0xC

#define EMIF_SDRAM_REF_CTRL (*(volatile unsigned *)0x4C000010)
#define EMIF_SDRAM_REF_CTRL_OFFSET 0x10

#define EMIF_SDRAM_REF_CTRL_SHDW (*(volatile unsigned *)0x4C000014)
#define EMIF_SDRAM_REF_CTRL_SHDW_OFFSET 0x14

#define EMIF_SDRAM_TIM_1 (*(volatile unsigned *)0x4C000018)
#define EMIF_SDRAM_TIM_1_OFFSET 0x18

#define EMIF_SDRAM_TIM_1_SHDW (*(volatile unsigned *)0x4C00001C)
#define EMIF_SDRAM_TIM_1_SHDW_OFFSET 0x1C

#define EMIF_SDRAM_TIM_2 (*(volatile unsigned *)0x4C000020)
#define EMIF_SDRAM_TIM_2_OFFSET 0x20

#define EMIF_SDRAM_TIM_2_SHDW (*(volatile unsigned *)0x4C000024)
#define EMIF_SDRAM_TIM_2_SHDW_OFFSET 0x24

#define EMIF_SDRAM_TIM_3 (*(volatile unsigned *)0x4C000028)
#define EMIF_SDRAM_TIM_3_OFFSET 0x28

#define EMIF_SDRAM_TIM_3_SHDW (*(volatile unsigned *)0x4C00002C)
#define EMIF_SDRAM_TIM_3_SHDW_OFFSET 0x2C

#define EMIF_LPDDR_NVM_TIM2 (*(volatile unsigned *)0x4C000030)
#define EMIF_LPDDR_NVM_TIM2_OFFSET 0x30

#define EMIF_LPDDR_NVM_TIM_SHDW2 (*(volatile unsigned *)0x4C000034)
#define EMIF_LPDDR_NVM_TIM_SHDW2_OFFSET 0x34

#define EMIF_PWR_MGMT_CTRL (*(volatile unsigned *)0x4C000038)
#define EMIF_PWR_MGMT_CTRL_OFFSET 0x38

#define EMIF_PWR_MGMT_CTRL_SHDW (*(volatile unsigned *)0x4C00003C)
#define EMIF_PWR_MGMT_CTRL_SHDW_OFFSET 0x3C

#define EMIF_LPDDR_MODE_REG_DATA2 (*(volatile unsigned *)0x4C000040)
#define EMIF_LPDDR_MODE_REG_DATA2_OFFSET 0x40

#define EMIF_LPDDR_MODE_REG_CFG2 (*(volatile unsigned *)0x4C000050)
#define EMIF_LPDDR_MODE_REG_CFG2_OFFSET 0x50

#define EMIF_OCP_CONFIG (*(volatile unsigned *)0x4C000054)
#define EMIF_OCP_CONFIG_OFFSET 0x54

#define EMIF_OCP_CFG_VAL_1 (*(volatile unsigned *)0x4C000058)
#define EMIF_OCP_CFG_VAL_1_OFFSET 0x58

#define EMIF_OCP_CFG_VAL_2 (*(volatile unsigned *)0x4C00005C)
#define EMIF_OCP_CFG_VAL_2_OFFSET 0x5C

#define EMIF_IODFT_TLGC (*(volatile unsigned *)0x4C000060)
#define EMIF_IODFT_TLGC_OFFSET 0x60

#define EMIF_IODFT_CTRL_MISR_RSLT (*(volatile unsigned *)0x4C000064)
#define EMIF_IODFT_CTRL_MISR_RSLT_OFFSET 0x64

#define EMIF_IODFT_ADDR_MISR_RSLT (*(volatile unsigned *)0x4C000068)
#define EMIF_IODFT_ADDR_MISR_RSLT_OFFSET 0x68

#define EMIF_IODFT_DATA_MISR_RSLT_1 (*(volatile unsigned *)0x4C00006C)
#define EMIF_IODFT_DATA_MISR_RSLT_1_OFFSET 0x6C

#define EMIF_IODFT_DATA_MISR_RSLT_2 (*(volatile unsigned *)0x4C000070)
#define EMIF_IODFT_DATA_MISR_RSLT_2_OFFSET 0x70

#define EMIF_IODFT_DATA_MISR_RSLT_3 (*(volatile unsigned *)0x4C000074)
#define EMIF_IODFT_DATA_MISR_RSLT_3_OFFSET 0x74

#define EMIF_PERF_CNT_1 (*(volatile unsigned *)0x4C000080)
#define EMIF_PERF_CNT_1_OFFSET 0x80

#define EMIF_PERF_CNT_2 (*(volatile unsigned *)0x4C000084)
#define EMIF_PERF_CNT_2_OFFSET 0x84

#define EMIF_PERF_CNT_CFG (*(volatile unsigned *)0x4C000088)
#define EMIF_PERF_CNT_CFG_OFFSET 0x88

#define EMIF_PERF_CNT_SEL (*(volatile unsigned *)0x4C00008C)
#define EMIF_PERF_CNT_SEL_OFFSET 0x8C

#define EMIF_PERF_CNT_TIM (*(volatile unsigned *)0x4C000090)
#define EMIF_PERF_CNT_TIM_OFFSET 0x90

#define EMIF_READ_IDLE_CTRL (*(volatile unsigned *)0x4C000098)
#define EMIF_READ_IDLE_CTRL_OFFSET 0x98

#define EMIF_READ_IDLE_CTRL_SHDW (*(volatile unsigned *)0x4C00009C)
#define EMIF_READ_IDLE_CTRL_SHDW_OFFSET 0x9C

#define EMIF_IRQ_EOI (*(volatile unsigned *)0x4C0000A0)
#define EMIF_IRQ_EOI_OFFSET 0xA0

#define EMIF_IRQSTATUS_RAW_SYS (*(volatile unsigned *)0x4C0000A4)
#define EMIF_IRQSTATUS_RAW_SYS_OFFSET 0xA4

#define EMIF_IRQSTATUS_RAW_LL (*(volatile unsigned *)0x4C0000A8)
#define EMIF_IRQSTATUS_RAW_LL_OFFSET 0xA8

#define EMIF_IRQSTATUS_SYS (*(volatile unsigned *)0x4C0000AC)
#define EMIF_IRQSTATUS_SYS_OFFSET 0xAC

#define EMIF_IRQSTATUS_LL (*(volatile unsigned *)0x4C0000B0)
#define EMIF_IRQSTATUS_LL_OFFSET 0xB0

#define EMIF_IRQENABLE_SET_SYS (*(volatile unsigned *)0x4C0000B4)
#define EMIF_IRQENABLE_SET_SYS_OFFSET 0xB4

#define EMIF_IRQENABLE_SET_LL (*(volatile unsigned *)0x4C0000B8)
#define EMIF_IRQENABLE_SET_LL_OFFSET 0xB8

#define EMIF_IRQENABLE_CLR_SYS (*(volatile unsigned *)0x4C0000BC)
#define EMIF_IRQENABLE_CLR_SYS_OFFSET 0xBC

#define EMIF_IRQENABLE_CLR_LL (*(volatile unsigned *)0x4C0000C0)
#define EMIF_IRQENABLE_CLR_LL_OFFSET 0xC0

#define EMIF_ZQ_CONFIG (*(volatile unsigned *)0x4C0000C8)
#define EMIF_ZQ_CONFIG_OFFSET 0xC8

#define EMIF_TEMP_ALERT_CONFIG (*(volatile unsigned *)0x4C0000CC)
#define EMIF_TEMP_ALERT_CONFIG_OFFSET 0xCC

#define EMIF_OCP_ERR_LOG (*(volatile unsigned *)0x4C0000D0)
#define EMIF_OCP_ERR_LOG_OFFSET 0xD0

#define EMIF_DDR_PHY_CTRL_1 (*(volatile unsigned *)0x4C0000E4)
#define EMIF_DDR_PHY_CTRL_1_OFFSET 0xE4

#define EMIF_DDR_PHY_CTRL_1_SHDW (*(volatile unsigned *)0x4C0000E8)
#define EMIF_DDR_PHY_CTRL_1_SHDW_OFFSET 0xE8

#define EMIF_DDR_PHY_CTRL_2 (*(volatile unsigned *)0x4C0000EC)
#define EMIF_DDR_PHY_CTRL_2_OFFSET 0xEC

#ifndef GPMC_BASE
#define GPMC_BASE 0x50000000
#endif

#define GPMC_REVISION (*(volatile unsigned *)0x50000000)
#define GPMC_REVISION_OFFSET 0x0

#define GPMC_SYSCONFIG (*(volatile unsigned *)0x50000010)
#define GPMC_SYSCONFIG_OFFSET 0x10

#define GPMC_SYSSTATUS (*(volatile unsigned *)0x50000014)
#define GPMC_SYSSTATUS_OFFSET 0x14

#define GPMC_IRQSTATUS (*(volatile unsigned *)0x50000018)
#define GPMC_IRQSTATUS_OFFSET 0x18

#define GPMC_IRQENABLE (*(volatile unsigned *)0x5000001C)
#define GPMC_IRQENABLE_OFFSET 0x1C

#define GPMC_TIMEOUT_CONTROL (*(volatile unsigned *)0x50000040)
#define GPMC_TIMEOUT_CONTROL_OFFSET 0x40

#define GPMC_ERR_ADDRESS (*(volatile unsigned *)0x50000044)
#define GPMC_ERR_ADDRESS_OFFSET 0x44

#define GPMC_ERR_TYPE (*(volatile unsigned *)0x50000048)
#define GPMC_ERR_TYPE_OFFSET 0x48

#define GPMC_CONFIG (*(volatile unsigned *)0x50000050)
#define GPMC_CONFIG_OFFSET 0x50

#define GPMC_STATUS (*(volatile unsigned *)0x50000054)
#define GPMC_STATUS_OFFSET 0x54

#define GPMC_CONFIG1_0 (*(volatile unsigned *)0x50000060)
#define GPMC_CONFIG1_0_OFFSET 0x60

#define GPMC_CONFIG2_0 (*(volatile unsigned *)0x50000064)
#define GPMC_CONFIG2_0_OFFSET 0x64

#define GPMC_CONFIG3_0 (*(volatile unsigned *)0x50000068)
#define GPMC_CONFIG3_0_OFFSET 0x68

#define GPMC_CONFIG4_0 (*(volatile unsigned *)0x5000006C)
#define GPMC_CONFIG4_0_OFFSET 0x6C

#define GPMC_CONFIG5_0 (*(volatile unsigned *)0x50000070)
#define GPMC_CONFIG5_0_OFFSET 0x70

#define GPMC_CONFIG6_0 (*(volatile unsigned *)0x50000074)
#define GPMC_CONFIG6_0_OFFSET 0x74

#define GPMC_CONFIG7_0 (*(volatile unsigned *)0x50000078)
#define GPMC_CONFIG7_0_OFFSET 0x78

#define GPMC_NAND_COMMAND_0 (*(volatile unsigned *)0x5000007C)
#define GPMC_NAND_COMMAND_0_OFFSET 0x7C

#define GPMC_NAND_ADDRESS_0 (*(volatile unsigned *)0x50000080)
#define GPMC_NAND_ADDRESS_0_OFFSET 0x80

#define GPMC_NAND_DATA_0 (*(volatile unsigned *)0x50000084)
#define GPMC_NAND_DATA_0_OFFSET 0x84

#define GPMC_CONFIG1_1 (*(volatile unsigned *)0x50000090)
#define GPMC_CONFIG1_1_OFFSET 0x90

#define GPMC_CONFIG2_1 (*(volatile unsigned *)0x50000094)
#define GPMC_CONFIG2_1_OFFSET 0x94

#define GPMC_CONFIG3_1 (*(volatile unsigned *)0x50000098)
#define GPMC_CONFIG3_1_OFFSET 0x98

#define GPMC_CONFIG4_1 (*(volatile unsigned *)0x5000009C)
#define GPMC_CONFIG4_1_OFFSET 0x9C

#define GPMC_CONFIG5_1 (*(volatile unsigned *)0x500000A0)
#define GPMC_CONFIG5_1_OFFSET 0xA0

#define GPMC_CONFIG6_1 (*(volatile unsigned *)0x500000A4)
#define GPMC_CONFIG6_1_OFFSET 0xA4

#define GPMC_CONFIG7_1 (*(volatile unsigned *)0x500000A8)
#define GPMC_CONFIG7_1_OFFSET 0xA8

#define GPMC_NAND_COMMAND_1 (*(volatile unsigned *)0x500000AC)
#define GPMC_NAND_COMMAND_1_OFFSET 0xAC

#define GPMC_NAND_ADDRESS_1 (*(volatile unsigned *)0x500000B0)
#define GPMC_NAND_ADDRESS_1_OFFSET 0xB0

#define GPMC_NAND_DATA_1 (*(volatile unsigned *)0x500000B4)
#define GPMC_NAND_DATA_1_OFFSET 0xB4

#define GPMC_CONFIG1_2 (*(volatile unsigned *)0x500000C0)
#define GPMC_CONFIG1_2_OFFSET 0xC0

#define GPMC_CONFIG2_2 (*(volatile unsigned *)0x500000C4)
#define GPMC_CONFIG2_2_OFFSET 0xC4

#define GPMC_CONFIG3_2 (*(volatile unsigned *)0x500000C8)
#define GPMC_CONFIG3_2_OFFSET 0xC8

#define GPMC_CONFIG4_2 (*(volatile unsigned *)0x500000CC)
#define GPMC_CONFIG4_2_OFFSET 0xCC

#define GPMC_CONFIG5_2 (*(volatile unsigned *)0x500000D0)
#define GPMC_CONFIG5_2_OFFSET 0xD0

#define GPMC_CONFIG6_2 (*(volatile unsigned *)0x500000D4)
#define GPMC_CONFIG6_2_OFFSET 0xD4

#define GPMC_CONFIG7_2 (*(volatile unsigned *)0x500000D8)
#define GPMC_CONFIG7_2_OFFSET 0xD8

#define GPMC_NAND_COMMAND_2 (*(volatile unsigned *)0x500000DC)
#define GPMC_NAND_COMMAND_2_OFFSET 0xDC

#define GPMC_NAND_ADDRESS_2 (*(volatile unsigned *)0x500000E0)
#define GPMC_NAND_ADDRESS_2_OFFSET 0xE0

#define GPMC_NAND_DATA_2 (*(volatile unsigned *)0x500000E4)
#define GPMC_NAND_DATA_2_OFFSET 0xE4

#define GPMC_CONFIG1_3 (*(volatile unsigned *)0x500000F0)
#define GPMC_CONFIG1_3_OFFSET 0xF0

#define GPMC_CONFIG2_3 (*(volatile unsigned *)0x500000F4)
#define GPMC_CONFIG2_3_OFFSET 0xF4

#define GPMC_CONFIG3_3 (*(volatile unsigned *)0x500000F8)
#define GPMC_CONFIG3_3_OFFSET 0xF8

#define GPMC_CONFIG4_3 (*(volatile unsigned *)0x500000FC)
#define GPMC_CONFIG4_3_OFFSET 0xFC

#define GPMC_CONFIG5_3 (*(volatile unsigned *)0x50000100)
#define GPMC_CONFIG5_3_OFFSET 0x100

#define GPMC_CONFIG6_3 (*(volatile unsigned *)0x50000104)
#define GPMC_CONFIG6_3_OFFSET 0x104

#define GPMC_CONFIG7_3 (*(volatile unsigned *)0x50000108)
#define GPMC_CONFIG7_3_OFFSET 0x108

#define GPMC_NAND_COMMAND_3 (*(volatile unsigned *)0x5000010C)
#define GPMC_NAND_COMMAND_3_OFFSET 0x10C

#define GPMC_NAND_ADDRESS_3 (*(volatile unsigned *)0x50000110)
#define GPMC_NAND_ADDRESS_3_OFFSET 0x110

#define GPMC_NAND_DATA_3 (*(volatile unsigned *)0x50000114)
#define GPMC_NAND_DATA_3_OFFSET 0x114

#define GPMC_CONFIG1_4 (*(volatile unsigned *)0x50000120)
#define GPMC_CONFIG1_4_OFFSET 0x120

#define GPMC_CONFIG2_4 (*(volatile unsigned *)0x50000124)
#define GPMC_CONFIG2_4_OFFSET 0x124

#define GPMC_CONFIG3_4 (*(volatile unsigned *)0x50000128)
#define GPMC_CONFIG3_4_OFFSET 0x128

#define GPMC_CONFIG4_4 (*(volatile unsigned *)0x5000012C)
#define GPMC_CONFIG4_4_OFFSET 0x12C

#define GPMC_CONFIG5_4 (*(volatile unsigned *)0x50000130)
#define GPMC_CONFIG5_4_OFFSET 0x130

#define GPMC_CONFIG6_4 (*(volatile unsigned *)0x50000134)
#define GPMC_CONFIG6_4_OFFSET 0x134

#define GPMC_CONFIG7_4 (*(volatile unsigned *)0x50000138)
#define GPMC_CONFIG7_4_OFFSET 0x138

#define GPMC_NAND_COMMAND_4 (*(volatile unsigned *)0x5000013C)
#define GPMC_NAND_COMMAND_4_OFFSET 0x13C

#define GPMC_NAND_ADDRESS_4 (*(volatile unsigned *)0x50000140)
#define GPMC_NAND_ADDRESS_4_OFFSET 0x140

#define GPMC_NAND_DATA_4 (*(volatile unsigned *)0x50000144)
#define GPMC_NAND_DATA_4_OFFSET 0x144

#define GPMC_CONFIG1_5 (*(volatile unsigned *)0x50000150)
#define GPMC_CONFIG1_5_OFFSET 0x150

#define GPMC_CONFIG2_5 (*(volatile unsigned *)0x50000154)
#define GPMC_CONFIG2_5_OFFSET 0x154

#define GPMC_CONFIG3_5 (*(volatile unsigned *)0x50000158)
#define GPMC_CONFIG3_5_OFFSET 0x158

#define GPMC_CONFIG4_5 (*(volatile unsigned *)0x5000015C)
#define GPMC_CONFIG4_5_OFFSET 0x15C

#define GPMC_CONFIG5_5 (*(volatile unsigned *)0x50000160)
#define GPMC_CONFIG5_5_OFFSET 0x160

#define GPMC_CONFIG6_5 (*(volatile unsigned *)0x50000164)
#define GPMC_CONFIG6_5_OFFSET 0x164

#define GPMC_CONFIG7_5 (*(volatile unsigned *)0x50000168)
#define GPMC_CONFIG7_5_OFFSET 0x168

#define GPMC_NAND_COMMAND_5 (*(volatile unsigned *)0x5000016C)
#define GPMC_NAND_COMMAND_5_OFFSET 0x16C

#define GPMC_NAND_ADDRESS_5 (*(volatile unsigned *)0x50000170)
#define GPMC_NAND_ADDRESS_5_OFFSET 0x170

#define GPMC_NAND_DATA_5 (*(volatile unsigned *)0x50000174)
#define GPMC_NAND_DATA_5_OFFSET 0x174

#define GPMC_CONFIG1_6 (*(volatile unsigned *)0x50000180)
#define GPMC_CONFIG1_6_OFFSET 0x180

#define GPMC_CONFIG2_6 (*(volatile unsigned *)0x50000184)
#define GPMC_CONFIG2_6_OFFSET 0x184

#define GPMC_CONFIG3_6 (*(volatile unsigned *)0x50000188)
#define GPMC_CONFIG3_6_OFFSET 0x188

#define GPMC_CONFIG4_6 (*(volatile unsigned *)0x5000018C)
#define GPMC_CONFIG4_6_OFFSET 0x18C

#define GPMC_CONFIG5_6 (*(volatile unsigned *)0x50000190)
#define GPMC_CONFIG5_6_OFFSET 0x190

#define GPMC_CONFIG6_6 (*(volatile unsigned *)0x50000194)
#define GPMC_CONFIG6_6_OFFSET 0x194

#define GPMC_CONFIG7_6 (*(volatile unsigned *)0x50000198)
#define GPMC_CONFIG7_6_OFFSET 0x198

#define GPMC_NAND_COMMAND_6 (*(volatile unsigned *)0x5000019C)
#define GPMC_NAND_COMMAND_6_OFFSET 0x19C

#define GPMC_NAND_ADDRESS_6 (*(volatile unsigned *)0x500001A0)
#define GPMC_NAND_ADDRESS_6_OFFSET 0x1A0

#define GPMC_NAND_DATA_6 (*(volatile unsigned *)0x500001A4)
#define GPMC_NAND_DATA_6_OFFSET 0x1A4

#define GPMC_PREFETCH_CONFIG1 (*(volatile unsigned *)0x500001E0)
#define GPMC_PREFETCH_CONFIG1_OFFSET 0x1E0

#define GPMC_PREFETCH_CONFIG2 (*(volatile unsigned *)0x500001E4)
#define GPMC_PREFETCH_CONFIG2_OFFSET 0x1E4

#define GPMC_PREFETCH_CONTROL (*(volatile unsigned *)0x500001EC)
#define GPMC_PREFETCH_CONTROL_OFFSET 0x1EC

#define GPMC_PREFETCH_STATUS (*(volatile unsigned *)0x500001F0)
#define GPMC_PREFETCH_STATUS_OFFSET 0x1F0

#define GPMC_ECC_CONFIG (*(volatile unsigned *)0x500001F4)
#define GPMC_ECC_CONFIG_OFFSET 0x1F4

#define GPMC_ECC_CONTROL (*(volatile unsigned *)0x500001F8)
#define GPMC_ECC_CONTROL_OFFSET 0x1F8

#define GPMC_ECC_SIZE_CONFIG (*(volatile unsigned *)0x500001FC)
#define GPMC_ECC_SIZE_CONFIG_OFFSET 0x1FC

#define GPMC_ECC_RESULT_1 (*(volatile unsigned *)0x50000200)
#define GPMC_ECC_RESULT_1_OFFSET 0x200

#define GPMC_ECC_RESULT_2 (*(volatile unsigned *)0x50000204)
#define GPMC_ECC_RESULT_2_OFFSET 0x204

#define GPMC_ECC_RESULT_3 (*(volatile unsigned *)0x50000208)
#define GPMC_ECC_RESULT_3_OFFSET 0x208

#define GPMC_ECC_RESULT_4 (*(volatile unsigned *)0x5000020C)
#define GPMC_ECC_RESULT_4_OFFSET 0x20C

#define GPMC_ECC_RESULT_5 (*(volatile unsigned *)0x50000210)
#define GPMC_ECC_RESULT_5_OFFSET 0x210

#define GPMC_ECC_RESULT_6 (*(volatile unsigned *)0x50000214)
#define GPMC_ECC_RESULT_6_OFFSET 0x214

#define GPMC_ECC_RESULT_7 (*(volatile unsigned *)0x50000218)
#define GPMC_ECC_RESULT_7_OFFSET 0x218

#define GPMC_ECC_RESULT_8 (*(volatile unsigned *)0x5000021C)
#define GPMC_ECC_RESULT_8_OFFSET 0x21C

#define GPMC_ECC_RESULT_9 (*(volatile unsigned *)0x50000220)
#define GPMC_ECC_RESULT_9_OFFSET 0x220

#define GPMC_BCH_RESULT0_0 (*(volatile unsigned *)0x50000240)
#define GPMC_BCH_RESULT0_0_OFFSET 0x240

#define GPMC_BCH_RESULT1_0 (*(volatile unsigned *)0x50000244)
#define GPMC_BCH_RESULT1_0_OFFSET 0x244

#define GPMC_BCH_RESULT2_0 (*(volatile unsigned *)0x50000248)
#define GPMC_BCH_RESULT2_0_OFFSET 0x248

#define GPMC_BCH_RESULT3_0 (*(volatile unsigned *)0x5000024C)
#define GPMC_BCH_RESULT3_0_OFFSET 0x24C

#define GPMC_BCH_RESULT4_0 (*(volatile unsigned *)0x50000300)
#define GPMC_BCH_RESULT4_0_OFFSET 0x300

#define GPMC_BCH_RESULT5_0 (*(volatile unsigned *)0x50000304)
#define GPMC_BCH_RESULT5_0_OFFSET 0x304

#define GPMC_BCH_RESULT6_0 (*(volatile unsigned *)0x50000308)
#define GPMC_BCH_RESULT6_0_OFFSET 0x308

#define GPMC_BCH_RESULT0_1 (*(volatile unsigned *)0x50000250)
#define GPMC_BCH_RESULT0_1_OFFSET 0x250

#define GPMC_BCH_RESULT1_1 (*(volatile unsigned *)0x50000254)
#define GPMC_BCH_RESULT1_1_OFFSET 0x254

#define GPMC_BCH_RESULT2_1 (*(volatile unsigned *)0x50000258)
#define GPMC_BCH_RESULT2_1_OFFSET 0x258

#define GPMC_BCH_RESULT3_1 (*(volatile unsigned *)0x5000025C)
#define GPMC_BCH_RESULT3_1_OFFSET 0x25C

#define GPMC_BCH_RESULT4_1 (*(volatile unsigned *)0x50000310)
#define GPMC_BCH_RESULT4_1_OFFSET 0x310

#define GPMC_BCH_RESULT5_1 (*(volatile unsigned *)0x50000314)
#define GPMC_BCH_RESULT5_1_OFFSET 0x314

#define GPMC_BCH_RESULT6_1 (*(volatile unsigned *)0x50000318)
#define GPMC_BCH_RESULT6_1_OFFSET 0x318

#define GPMC_BCH_RESULT0_2 (*(volatile unsigned *)0x50000260)
#define GPMC_BCH_RESULT0_2_OFFSET 0x260

#define GPMC_BCH_RESULT1_2 (*(volatile unsigned *)0x50000264)
#define GPMC_BCH_RESULT1_2_OFFSET 0x264

#define GPMC_BCH_RESULT2_2 (*(volatile unsigned *)0x50000268)
#define GPMC_BCH_RESULT2_2_OFFSET 0x268

#define GPMC_BCH_RESULT3_2 (*(volatile unsigned *)0x5000026C)
#define GPMC_BCH_RESULT3_2_OFFSET 0x26C

#define GPMC_BCH_RESULT4_2 (*(volatile unsigned *)0x50000320)
#define GPMC_BCH_RESULT4_2_OFFSET 0x320

#define GPMC_BCH_RESULT5_2 (*(volatile unsigned *)0x50000324)
#define GPMC_BCH_RESULT5_2_OFFSET 0x324

#define GPMC_BCH_RESULT6_2 (*(volatile unsigned *)0x50000328)
#define GPMC_BCH_RESULT6_2_OFFSET 0x328

#define GPMC_BCH_RESULT0_3 (*(volatile unsigned *)0x50000270)
#define GPMC_BCH_RESULT0_3_OFFSET 0x270

#define GPMC_BCH_RESULT1_3 (*(volatile unsigned *)0x50000274)
#define GPMC_BCH_RESULT1_3_OFFSET 0x274

#define GPMC_BCH_RESULT2_3 (*(volatile unsigned *)0x50000278)
#define GPMC_BCH_RESULT2_3_OFFSET 0x278

#define GPMC_BCH_RESULT3_3 (*(volatile unsigned *)0x5000027C)
#define GPMC_BCH_RESULT3_3_OFFSET 0x27C

#define GPMC_BCH_RESULT4_3 (*(volatile unsigned *)0x50000330)
#define GPMC_BCH_RESULT4_3_OFFSET 0x330

#define GPMC_BCH_RESULT5_3 (*(volatile unsigned *)0x50000334)
#define GPMC_BCH_RESULT5_3_OFFSET 0x334

#define GPMC_BCH_RESULT6_3 (*(volatile unsigned *)0x50000338)
#define GPMC_BCH_RESULT6_3_OFFSET 0x338

#define GPMC_BCH_RESULT0_4 (*(volatile unsigned *)0x50000280)
#define GPMC_BCH_RESULT0_4_OFFSET 0x280

#define GPMC_BCH_RESULT1_4 (*(volatile unsigned *)0x50000284)
#define GPMC_BCH_RESULT1_4_OFFSET 0x284

#define GPMC_BCH_RESULT2_4 (*(volatile unsigned *)0x50000288)
#define GPMC_BCH_RESULT2_4_OFFSET 0x288

#define GPMC_BCH_RESULT3_4 (*(volatile unsigned *)0x5000028C)
#define GPMC_BCH_RESULT3_4_OFFSET 0x28C

#define GPMC_BCH_RESULT4_4 (*(volatile unsigned *)0x50000340)
#define GPMC_BCH_RESULT4_4_OFFSET 0x340

#define GPMC_BCH_RESULT5_4 (*(volatile unsigned *)0x50000344)
#define GPMC_BCH_RESULT5_4_OFFSET 0x344

#define GPMC_BCH_RESULT6_4 (*(volatile unsigned *)0x50000348)
#define GPMC_BCH_RESULT6_4_OFFSET 0x348

#define GPMC_BCH_RESULT0_5 (*(volatile unsigned *)0x50000290)
#define GPMC_BCH_RESULT0_5_OFFSET 0x290

#define GPMC_BCH_RESULT1_5 (*(volatile unsigned *)0x50000294)
#define GPMC_BCH_RESULT1_5_OFFSET 0x294

#define GPMC_BCH_RESULT2_5 (*(volatile unsigned *)0x50000298)
#define GPMC_BCH_RESULT2_5_OFFSET 0x298

#define GPMC_BCH_RESULT3_5 (*(volatile unsigned *)0x5000029C)
#define GPMC_BCH_RESULT3_5_OFFSET 0x29C

#define GPMC_BCH_RESULT4_5 (*(volatile unsigned *)0x50000350)
#define GPMC_BCH_RESULT4_5_OFFSET 0x350

#define GPMC_BCH_RESULT5_5 (*(volatile unsigned *)0x50000354)
#define GPMC_BCH_RESULT5_5_OFFSET 0x354

#define GPMC_BCH_RESULT6_5 (*(volatile unsigned *)0x50000358)
#define GPMC_BCH_RESULT6_5_OFFSET 0x358

#define GPMC_BCH_RESULT0_6 (*(volatile unsigned *)0x500002A0)
#define GPMC_BCH_RESULT0_6_OFFSET 0x2A0

#define GPMC_BCH_RESULT1_6 (*(volatile unsigned *)0x500002A4)
#define GPMC_BCH_RESULT1_6_OFFSET 0x2A4

#define GPMC_BCH_RESULT2_6 (*(volatile unsigned *)0x500002A8)
#define GPMC_BCH_RESULT2_6_OFFSET 0x2A8

#define GPMC_BCH_RESULT3_6 (*(volatile unsigned *)0x500002AC)
#define GPMC_BCH_RESULT3_6_OFFSET 0x2AC

#define GPMC_BCH_RESULT4_6 (*(volatile unsigned *)0x50000360)
#define GPMC_BCH_RESULT4_6_OFFSET 0x360

#define GPMC_BCH_RESULT5_6 (*(volatile unsigned *)0x50000364)
#define GPMC_BCH_RESULT5_6_OFFSET 0x364

#define GPMC_BCH_RESULT6_6 (*(volatile unsigned *)0x50000368)
#define GPMC_BCH_RESULT6_6_OFFSET 0x368

#define GPMC_BCH_SWDATA (*(volatile unsigned *)0x500002D0)
#define GPMC_BCH_SWDATA_OFFSET 0x2D0

#endif
