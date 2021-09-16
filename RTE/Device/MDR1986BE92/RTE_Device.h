/* -----------------------------------------------------------------------------
 * Copyright (c) 2013 - 2015 ARM Ltd.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software. Permission is granted to anyone to use this
 * software for any purpose, including commercial applications, and to alter
 * it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * $Date:        13. June 2015
 * $Revision:    V1.00
 *
 * Project:      RTE Device Configuration for Milandr MDR32Fx
 * -------------------------------------------------------------------------- */

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

#ifndef __RTE_DEVICE_H
#define __RTE_DEVICE_H

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3
#define PORTE 4
#define PORTF 5

#define PORTx_RXTX_SHIFT 0x00
#define PORTx_OE_SHIFT 0x04
#define PORTx_FUNC_SHIFT 0x08
#define PORTx_ANALOG_SHIFT 0x0C
#define PORTx_PULL_SHIFT 0x10
#define PORTx_PD_SHIFT 0x14
#define PORTx_PWR_SHIFT 0x18
#define PORTx_GFEN_SHIFT 0x1C

#define PORTx_PIN_IN 0
#define PORTx_PIN_OUT 1
#define PORTx_PIN_OFF 0
#define PORTx_PIN_ON 1

//		<h> System Core Clock
//			<o> HCLK (Hz) <1-80000000>
//			<i> System Core Clock
//		</h> System Core Clock
#define RTE_HCLK 80000000

// <e> SSP0 (Synchronous Serial Port 0) [Driver_SPI0]
// <i> Configuration settings for Driver_SPI0 in component ::Drivers:SPI
#define   RTE_SSP0                      0

//   <h> Pin Configuration
//     <o> SSP0_SSEL <0=>Not used <1=>PB12 <2=>PD9 <3=>PE13 <4=>PF2
//     <i> Slave Select for SSP0
#define   RTE_SSP0_SSEL_PIN_SEL         4
#if      (RTE_SSP0_SSEL_PIN_SEL == 0)
#define   RTE_SSP0_SSEL_PIN_EN          0
#elif    (RTE_SSP0_SSEL_PIN_SEL == 1)
  #define RTE_SSP0_SSEL_PORT            1
  #define RTE_SSP0_SSEL_BIT             12
  #define RTE_SSP0_SSEL_FUNC            2
#elif    (RTE_SSP0_SSEL_PIN_SEL == 2)
  #define RTE_SSP0_SSEL_PORT            3
  #define RTE_SSP0_SSEL_BIT             9
  #define RTE_SSP0_SSEL_FUNC            3
#elif    (RTE_SSP0_SSEL_PIN_SEL == 3)
  #define RTE_SSP0_SSEL_PORT            4
  #define RTE_SSP0_SSEL_BIT             13
  #define RTE_SSP0_SSEL_FUNC            2
#elif    (RTE_SSP0_SSEL_PIN_SEL == 4)
  #define RTE_SSP0_SSEL_PORT            5
  #define RTE_SSP0_SSEL_BIT             2
  #define RTE_SSP0_SSEL_FUNC            2
#else
  #error "Invalid SSP0 SSP0_SSEL Pin Configuration!"
#endif
#ifndef   RTE_SSP0_SSEL_PIN_EN
#define   RTE_SSP0_SSEL_PIN_EN          1
#endif
//     <o> SSP0_SCK <0=>PB13 <1=>PD10 <2=>PF1
//     <i> Serial clock for SSP0
#define   RTE_SSP0_SCK_PIN_SEL          2
#if      (RTE_SSP0_SCK_PIN_SEL == 0)
  #define RTE_SSP0_SCK_PORT             1
  #define RTE_SSP0_SCK_BIT              13
  #define RTE_SSP0_SCK_FUNC             2
#elif    (RTE_SSP0_SCK_PIN_SEL == 1)
  #define RTE_SSP0_SCK_PORT             3
  #define RTE_SSP0_SCK_BIT              10
  #define RTE_SSP0_SCK_FUNC             3
#elif    (RTE_SSP0_SCK_PIN_SEL == 2)
  #define RTE_SSP0_SCK_PORT             5
  #define RTE_SSP0_SCK_BIT              1
  #define RTE_SSP0_SCK_FUNC             2
#else
  #error "Invalid SSP0 SSP0_SCK Pin Configuration!"
#endif
//     <o> SSP0_MISO <0=>PB14 <1=>PD11 <2=>PE12 <3=>PF3
//     <i> Master In Slave Out for SSP0
#define   RTE_SSP0_MISO_PIN_SEL         3
#if      (RTE_SSP0_MISO_PIN_SEL == 0)
  #define RTE_SSP0_MISO_PORT            1
  #define RTE_SSP0_MISO_BIT             14
  #define RTE_SSP0_MISO_FUNC            2
#elif    (RTE_SSP0_MISO_PIN_SEL == 1)
  #define RTE_SSP0_MISO_PORT            3
  #define RTE_SSP0_MISO_BIT             11
  #define RTE_SSP0_MISO_FUNC            3
#elif    (RTE_SSP0_MISO_PIN_SEL == 2)
  #define RTE_SSP0_MISO_PORT            4
  #define RTE_SSP0_MISO_BIT             12
  #define RTE_SSP0_MISO_FUNC            2
#elif    (RTE_SSP0_MISO_PIN_SEL == 3)
  #define RTE_SSP0_MISO_PORT            5
  #define RTE_SSP0_MISO_BIT             3
  #define RTE_SSP0_MISO_FUNC            2
#else
  #error "Invalid SSP0 SSP0_MISO Pin Configuration!"
#endif
//     <o> SSP0_MOSI <0=>PB15 <1=>PD12 <2=>PF0
//     <i> Master Out Slave In for SSP0
#define   RTE_SSP0_MOSI_PIN_SEL         2
#if      (RTE_SSP0_MOSI_PIN_SEL == 0)
  #define RTE_SSP0_MOSI_PORT            1
  #define RTE_SSP0_MOSI_BIT             15
  #define RTE_SSP0_MOSI_FUNC            2
#elif    (RTE_SSP0_MOSI_PIN_SEL == 1)
  #define RTE_SSP0_MOSI_PORT            3
  #define RTE_SSP0_MOSI_BIT             12
  #define RTE_SSP0_MOSI_FUNC            3
#elif    (RTE_SSP0_MOSI_PIN_SEL == 2)
  #define RTE_SSP0_MOSI_PORT            5
  #define RTE_SSP0_MOSI_BIT             0
  #define RTE_SSP0_MOSI_FUNC            2
#else
  #error "Invalid SSP0 SSP0_MOSI Pin Configuration!"
#endif
//   </h> Pin Configuration

//	<h> Clock
//		<o> SSP0 clock divider
//		<i> SSP0 clock divider
//			<0=> Not used
//			<1=> /2
//			<2=> /4
//			<3=> /8
//			<4=> /16
//			<5=> /32
//			<6=> /64
//			<7=> /128
//	</h> Clock
#define RTE_SSP0_BRG 0

// </e> SSP0 (Synchronous Serial Port 0) [Driver_SPI0]

// <e> SSP1 (Synchronous Serial Port 0) [Driver_SPI1]
// <i> Configuration settings for Driver_SPI1 in component ::Drivers:SPI
#define   RTE_SSP1                      0

//   <h> Pin Configuration
//     <o> SSP1_SSEL <0=>Not used <1=>PB12 <2=>PC0 <3=>PC14 <4=>PD3 <5=>PF12
//     <i> Slave Select for SSP1
#define   RTE_SSP1_SSEL_PIN_SEL         4
#if      (RTE_SSP1_SSEL_PIN_SEL == 0)
  #define RTE_SSP1_SSEL_PIN_EN          0
#elif    (RTE_SSP1_SSEL_PIN_SEL == 1)
  #define RTE_SSP1_SSEL_PORT            1
  #define RTE_SSP1_SSEL_BIT             12
  #define RTE_SSP1_SSEL_FUNC            3
#elif    (RTE_SSP1_SSEL_PIN_SEL == 2)
  #define RTE_SSP1_SSEL_PORT            2
  #define RTE_SSP1_SSEL_BIT             0
  #define RTE_SSP1_SSEL_FUNC            3
#elif    (RTE_SSP1_SSEL_PIN_SEL == 3)
  #define RTE_SSP1_SSEL_PORT            2
  #define RTE_SSP1_SSEL_BIT             14
  #define RTE_SSP1_SSEL_FUNC            2
#elif    (RTE_SSP1_SSEL_PIN_SEL == 4)
  #define RTE_SSP1_SSEL_PORT            3
  #define RTE_SSP1_SSEL_BIT             3
  #define RTE_SSP1_SSEL_FUNC            2
#elif    (RTE_SSP1_SSEL_PIN_SEL == 5)
  #define RTE_SSP1_SSEL_PORT            5
  #define RTE_SSP1_SSEL_BIT             12
  #define RTE_SSP1_SSEL_FUNC            3
#else
  #error "Invalid SSP1 SSP1_SSEL Pin Configuration!"
#endif
#ifndef   RTE_SSP1_SSEL_PIN_EN
#define   RTE_SSP1_SSEL_PIN_EN          1
#endif
//     <o> SSP1_SCK <0=>PB13 <1=>PC1 <2=>PD5 <3=>PF13
//     <i> Serial clock for SSP1
#define   RTE_SSP1_SCK_PIN_SEL          2
#if      (RTE_SSP1_SCK_PIN_SEL == 0)
  #define RTE_SSP1_SCK_PORT             1
  #define RTE_SSP1_SCK_BIT              13
  #define RTE_SSP1_SCK_FUNC             3
#elif    (RTE_SSP1_SCK_PIN_SEL == 1)
  #define RTE_SSP1_SCK_PORT             2
  #define RTE_SSP1_SCK_BIT              1
  #define RTE_SSP1_SCK_FUNC             3
#elif    (RTE_SSP1_SCK_PIN_SEL == 2)
  #define RTE_SSP1_SCK_PORT             3
  #define RTE_SSP1_SCK_BIT              5
  #define RTE_SSP1_SCK_FUNC             2
#elif    (RTE_SSP1_SCK_PIN_SEL == 3)
  #define RTE_SSP1_SCK_PORT             5
  #define RTE_SSP1_SCK_BIT              13
  #define RTE_SSP1_SCK_FUNC             3
#else
  #error "Invalid SSP1 SSP1_SCK Pin Configuration!"
#endif
//     <o> SSP1_MISO <0=>PB14 <1=>PC2 <2=>PC15 <3=>PD2 <4=>PF14
//     <i> Master In Slave Out for SSP1
#define   RTE_SSP1_MISO_PIN_SEL         3
#if      (RTE_SSP1_MISO_PIN_SEL == 0)
  #define RTE_SSP1_MISO_PORT            1
  #define RTE_SSP1_MISO_BIT             14
  #define RTE_SSP1_MISO_FUNC            3
#elif    (RTE_SSP1_MISO_PIN_SEL == 1)
  #define RTE_SSP1_MISO_PORT            2
  #define RTE_SSP1_MISO_BIT             2
  #define RTE_SSP1_MISO_FUNC            3
#elif    (RTE_SSP1_MISO_PIN_SEL == 2)
  #define RTE_SSP1_MISO_PORT            2
  #define RTE_SSP1_MISO_BIT             15
  #define RTE_SSP1_MISO_FUNC            2
#elif    (RTE_SSP1_MISO_PIN_SEL == 3)
  #define RTE_SSP1_MISO_PORT            3
  #define RTE_SSP1_MISO_BIT             2
  #define RTE_SSP1_MISO_FUNC            2
#elif    (RTE_SSP1_MISO_PIN_SEL == 4)
  #define RTE_SSP1_MISO_PORT            5
  #define RTE_SSP1_MISO_BIT             14
  #define RTE_SSP1_MISO_FUNC            3
#else
  #error "Invalid SSP1 SSP1_MISO Pin Configuration!"
#endif
//     <o> SSP1_MOSI <0=>PB15 <1=>PC3 <2=>PD6 <3=>PF15
//     <i> Master Out Slave In for SSP1
#define   RTE_SSP1_MOSI_PIN_SEL         2
#if      (RTE_SSP1_MOSI_PIN_SEL == 0)
  #define RTE_SSP1_MOSI_PORT            1
  #define RTE_SSP1_MOSI_BIT             15
  #define RTE_SSP1_MOSI_FUNC            3
#elif    (RTE_SSP1_MOSI_PIN_SEL == 1)
  #define RTE_SSP1_MOSI_PORT            2
  #define RTE_SSP1_MOSI_BIT             3
  #define RTE_SSP1_MOSI_FUNC            3
#elif    (RTE_SSP1_MOSI_PIN_SEL == 2)
  #define RTE_SSP1_MOSI_PORT            3
  #define RTE_SSP1_MOSI_BIT             6
  #define RTE_SSP1_MOSI_FUNC            2
#elif    (RTE_SSP1_MOSI_PIN_SEL == 3)
  #define RTE_SSP1_MOSI_PORT            5
  #define RTE_SSP1_MOSI_BIT             15
  #define RTE_SSP1_MOSI_FUNC            3
#else
  #error "Invalid SSP1 SSP1_MOSI Pin Configuration!"
#endif
//   </h> Pin Configuration

//	<h> Clock
//		<o> SSP1 clock divider
//		<i> SSP1 clock divider
//			<0=> Not used
//			<1=> /2
//			<2=> /4
//			<3=> /8
//			<4=> /16
//			<5=> /32
//			<6=> /64
//			<7=> /128
//	</h> Clock
#define RTE_SSP1_BRG 0

// </e> SSP1 (Synchronous Serial Port 0) [Driver_SPI1]

#endif  /* __RTE_DEVICE_H */
