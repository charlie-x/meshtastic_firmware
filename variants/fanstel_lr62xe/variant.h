/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_FANSTEL_XE_
#define _VARIANT_FANSTEL_XE_

/** Master clock frequency */
#define VARIANT_MCK (64000000ul)

#define USE_LFXO // Board uses 32khz crystal for LF
// #define USE_LFRC // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#define USE_SEGGER
// Number of pins defined in PinDescription array
#define PINS_COUNT (48)
#define NUM_DIGITAL_PINS (48)
#define NUM_ANALOG_INPUTS (6)
#define NUM_ANALOG_OUTPUTS (0)

#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA (8) // P0.12 22
#define PIN_WIRE_SCL (9) // P0.12 23

// P0.17
#define PIN_LED1 (0 + 23)

// P0.13
#define PIN_LED2 (0 + 22)

// P0.2 or P0.30
#define PIN_LED3 (0 + 25)

#define LED_BUILTIN PIN_LED1

#define LED_GREEN PIN_LED2 // Actually red
#define LED_BLUE PIN_LED1

#define LED_STATE_ON 1 // State when LED is litted

#define BUTTON_PIN (0 + 16) // P1.02 7

/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX (-1) // P0.24 1
#define PIN_SERIAL1_TX (-1) // P0.25 0

#define PIN_SERIAL2_RX (-1)
#define PIN_SERIAL2_TX (-1)

#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_SS (0 + 30)
#define PIN_SPI_MISO (0 + 1)
#define PIN_SPI_MOSI (0 + 31)
#define PIN_SPI_SCK (0 + 0)

#define LORA_DIO0 -1        // a No connect on the SX1262/SX1268 module
#define LORA_RESET (0 + 28) // P1.09 13 // RST for SX1276, and for SX1262/SX1268
#define LORA_DIO1 (0 + 32)  // P0.06 11  // IRQ for SX1262/SX1268
#define LORA_DIO2 (0 + 26)  // P0.08 12  // BUSY for SX1262/SX1268
#define LORA_DIO3           // Not connected on PCB, but internally on the TTGO SX1262/SX1268, if DIO3 is high the TXCO is enabled

#define LORA_SCK PIN_SPI_SCK
#define LORA_MISO PIN_SPI_MISO
#define LORA_MOSI PIN_SPI_MOSI
#define LORA_CS PIN_SPI_SS

// #define SX126X_RXEN (0 + 24)

// enables 3.3V periphery like GPS or IO Module
#define PIN_3V3_EN (-1)

#undef USE_EINK

// supported modules list
#define USE_SX1262

// common pinouts for SX126X modules
#define SX126X_CS LORA_CS // NSS for SX126X
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
  // #define SX126X_RXEN (0 + 27) // P0.27 10
  // #define SX126X_TXEN (0 + 26) // P0.26 9
  // #define SX126X_DIO3_TCXO_VOLTAGE 1.8

// #define SX126X_TXEN RADIOLIB_NC
#define SX126X_RXEN (0 + 24) // P0.27 10

#ifdef EBYTE_E22
// Internally the TTGO module hooks the SX126x-DIO2 in to control the TX/RX switch
// (which is the default for the sx1262interface code)
#define SX126X_DIO3_TCXO_VOLTAGE 0
#endif

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
