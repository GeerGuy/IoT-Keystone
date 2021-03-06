/*
 * Copyright (c) 2017-2018, Texas Instruments Incorporated
 * Copyright (c) 2018, This. Is. IoT. - https://thisisiot.io
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __BOARD_H
#define __BOARD_H

#define Board_KEYSTONE_R1
#define BOARD_STRING    "IoT.Keystone.1A"

#ifdef __cplusplus
extern "C" {
#endif

#include "KEYSTONE_R1.h"

#define Board_shutDownExtFlash() KEYSTONE_R1_shutDownExtFlash()
#define Board_wakeUpExtFlash()   KEYSTONE_R1_wakeUpExtFlash()

#define Board_setAntennaMeshRadio()  KEYSTONE_R1_setAntennaMeshRadio()
#define Board_unsetAntennaMeshRadio()  KEYSTONE_R1_unsetAntennaMeshRadio()
#define Board_setAntennaLoRaRadio()  KEYSTONE_R1_setAntennaLoRaRadio()
#define Board_unsetAntennaLoRaRadio()  KEYSTONE_R1_unsetAntennaLoRaRadio()

/* These #defines allow us to reuse TI-RTOS across other device families */

#define Board_ADC0              KEYSTONE_R1_ADC0
#define Board_ADC1              KEYSTONE_R1_ADC1

#define Board_ADCBUF0           KEYSTONE_R1_ADCBUF0
#define Board_ADCBUF0CHANNEL0   KEYSTONE_R1_ADCBUF0CHANNEL0
#define Board_ADCBUF0CHANNEL1   KEYSTONE_R1_ADCBUF0CHANNEL1

#define Board_ECDH0             KEYSTONE_R1_ECDH0
#define Board_ECDSA0            KEYSTONE_R1_ECDSA0
#define Board_ECJPAKE0          KEYSTONE_R1_ECJPAKE0
#define Board_AESCCM0           KEYSTONE_R1_AESCCM0
#define Board_AESECB0           KEYSTONE_R1_AESECB0
#define Board_SHA20             KEYSTONE_R1_SHA20

#define Board_DIO12             KEYSTONE_R1_DIO12
#define Board_DIO15             KEYSTONE_R1_DIO15
#define Board_DIO16_TDO         KEYSTONE_R1_DIO16_TDO
#define Board_DIO17_TDI         KEYSTONE_R1_DIO17_TDI
#define Board_DIO21             KEYSTONE_R1_DIO21
#define Board_DIO22             KEYSTONE_R1_DIO22

#define Board_DIO23_ANALOG      KEYSTONE_R1_DIO23_ANALOG
#define Board_DIO24_ANALOG      KEYSTONE_R1_DIO24_ANALOG
#define Board_DIO25_ANALOG      KEYSTONE_R1_DIO25_ANALOG
#define Board_DIO26_ANALOG      KEYSTONE_R1_DIO26_ANALOG
#define Board_DIO27_ANALOG      KEYSTONE_R1_DIO27_ANALOG
#define Board_DIO28_ANALOG      KEYSTONE_R1_DIO28_ANALOG
#define Board_DIO29_ANALOG      KEYSTONE_R1_DIO29_ANALOG

/*
 *  Control of PE4259
 */
#define Board_RF_SUB1GHZ_CTRL   KEYSTONE_R1_RF_SUB1GHZ_CTRL
#define Board_RF_SUB1GHZ_NCTRL  KEYSTONE_R1_RF_SUB1GHZ_NCTRL

#define Board_PIN_LORA_INT      KEYSTONE_R1_PIN_LORA_INT
#define Board_PIN_LORA_RST      KEYSTONE_R1_PIN_LORA_RST
#define Board_PIN_LORA_BUSY     KEYSTONE_R1_PIN_LORA_BUSY
#define Board_PIN_FLASH_EN      KEYSTONE_R1_PIN_FLASH_EN
#define Board_PIN_HALL          KEYSTONE_R1_PIN_HALL

#define Board_PIN_IMU_INT       KEYSTONE_R1_PIN_IMU_INT

#define Board_GPTIMER0A         KEYSTONE_R1_GPTIMER0A
#define Board_GPTIMER0B         KEYSTONE_R1_GPTIMER0B
#define Board_GPTIMER1A         KEYSTONE_R1_GPTIMER1A
#define Board_GPTIMER1B         KEYSTONE_R1_GPTIMER1B
#define Board_GPTIMER2A         KEYSTONE_R1_GPTIMER2A
#define Board_GPTIMER2B         KEYSTONE_R1_GPTIMER2B
#define Board_GPTIMER3A         KEYSTONE_R1_GPTIMER3A
#define Board_GPTIMER3B         KEYSTONE_R1_GPTIMER3B

#define Board_I2C0              KEYSTONE_R1_I2C0

#define Board_NVSINTERNAL       KEYSTONE_R1_NVSCC26XX0
#define Board_NVSEXTERNAL       KEYSTONE_R1_NVSSPI25X0

#if 0 /* no buttons */
#define Board_PIN_BUTTON0       KEYSTONE_R1_PIN_BTN1
#define Board_PIN_BUTTON1       KEYSTONE_R1_PIN_BTN2
#define Board_PIN_BTN1          KEYSTONE_R1_PIN_BTN1
#define Board_PIN_BTN2          KEYSTONE_R1_PIN_BTN2
#endif
#define Board_PIN_LED0          KEYSTONE_R1_PIN_RLED
#define Board_PIN_LED1          KEYSTONE_R1_PIN_GLED
#define Board_PIN_LED2          KEYSTONE_R1_PIN_RLED
#define Board_PIN_RLED          KEYSTONE_R1_PIN_RLED
#define Board_PIN_GLED          KEYSTONE_R1_PIN_GLED

#define Board_PWM0              KEYSTONE_R1_PWM0
#define Board_PWM1              KEYSTONE_R1_PWM1
#define Board_PWM2              KEYSTONE_R1_PWM2
#define Board_PWM3              KEYSTONE_R1_PWM3
#define Board_PWM4              KEYSTONE_R1_PWM4
#define Board_PWM5              KEYSTONE_R1_PWM5
#define Board_PWM6              KEYSTONE_R1_PWM6
#define Board_PWM7              KEYSTONE_R1_PWM7

#define Board_SD0               KEYSTONE_R1_SDSPI0

#define Board_SPI0              KEYSTONE_R1_SPI0
#define Board_SPI0_MISO         KEYSTONE_R1_SPI0_MISO
#define Board_SPI0_MOSI         KEYSTONE_R1_SPI0_MOSI
#define Board_SPI0_CLK          KEYSTONE_R1_SPI0_CLK
#define Board_SPI0_CSN          KEYSTONE_R1_SPI0_CSN
#define Board_SPI1              KEYSTONE_R1_SPI1
#define Board_SPI1_MISO         KEYSTONE_R1_SPI1_MISO
#define Board_SPI1_MOSI         KEYSTONE_R1_SPI1_MOSI
#define Board_SPI1_CLK          KEYSTONE_R1_SPI1_CLK
#define Board_SPI1_CSN          KEYSTONE_R1_SPI1_CSN
#define Board_SPI_FLASH_CS      KEYSTONE_R1_SPI_FLASH_CS
#define Board_FLASH_CS_ON       KEYSTONE_R1_FLASH_CS_ON
#define Board_FLASH_CS_OFF      KEYSTONE_R1_FLASH_CS_OFF
#define Board_SPI_LORA_CS       KEYSTONE_R1_SPI_LORA_CS
#define Board_LORA_CS_ON        KEYSTONE_R1_LORA_CS_ON
#define Board_LORA_CS_OFF       KEYSTONE_R1_LORA_CS_OF
#define Board_SPI_BME280_CS     KEYSTONE_R1_SPI_BME280_CS
#define Board_BME280_CS_ON      KEYSTONE_R1_BME280_CS_ON
#define Board_BME280_CS_OFF     KEYSTONE_R1_BME280_CS_OF
#define Board_SPI_IMU_CS        KEYSTONE_R1_SPI_IMU_CS
#define Board_IMU_CS_ON         KEYSTONE_R1_IMU_CS_ON
#define Board_IMU_CS_OFF        KEYSTONE_R1_IMU_CS_OF

#define Board_UART0             KEYSTONE_R1_UART0
#define Board_UART1             KEYSTONE_R1_UART1

#define Board_WATCHDOG0         KEYSTONE_R1_WATCHDOG0

/* LoRa settings */
#define BOARD_LORA_TXCO_WAKEUP_TIME KEYSTONE_R1_LORA_TXCO_WAKEUP_TIME 
#define Board_SX126X_SetDio2AsRfSwitchCtrl  KEYSTONE_R1_SX126X_SetDio2AsRfSwitchCtrl

#define Board_SX1262_TX_POWER_LIMIT KEYSTONE_R1_SX1262_TX_POWER_LIMIT


/* Board specific I2C addresses */
#define Board_OPT3001_ADDR      (0x44)

#ifdef __cplusplus
}
#endif

#endif /* __BOARD_H */
