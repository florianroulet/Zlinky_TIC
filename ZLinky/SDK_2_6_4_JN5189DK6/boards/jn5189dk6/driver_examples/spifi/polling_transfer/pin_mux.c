/*
 * Copyright  2019-2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v6.0
processor: JN5189
package_id: JN5189HN
mcu_data: ksdk2_0
processor_version: 0.0.0
pin_labels:
- {pin_num: '3', pin_signal: PIO0_0/USART0_SCK/USART1_TXD/PWM0/SPI1_SCK/PDM0_DATA, label: LED0, identifier: LED0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_iocon.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '15', peripheral: SWD, signal: SWCLK, pin_signal: PIO0_12/IR_BLASTER/SWCLK/PWM0/I2C1_SCL/SPI0_MOSI/ANA_COMP_OUT, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '16', peripheral: SWD, signal: SWDIO, pin_signal: PIO0_13/SPI1_SSELN2/SWDIO/PWM2/I2C1_SDA/SPI0_SSELN, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '12', peripheral: USART0, signal: RXD, pin_signal: PIO0_9/SPI0_SSELN/USART0_RXD/CT32B1_CAP1/PWM9/USART1_SCK/ADO/PDM1_CLK, mode: pullUp, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '11', peripheral: USART0, signal: TXD, pin_signal: PIO0_8/SPI0_MOSI/USART0_TXD/CT32B0_MAT0/PWM8/ANA_COMP_OUT/RFTX/PDM1_DATA, mode: pullUp, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '19', peripheral: SPIFI, signal: CSN, pin_signal: PIO0_16/SPI1_SSELN0/ISO7816_RST/PWM5/I2C0_SDA/PDM1_CLK/SPIFI_CSN, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '22', peripheral: SPIFI, signal: SPIFI_CLK, pin_signal: PIO0_18/SPI1_MISO/ISO7816_IO/CT32B0_MAT1/PWM7/USART0_TXD/SPIFI_CLK, mode: pullDown, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '24', peripheral: SPIFI, signal: 'SPIFI_IO, 2', pin_signal: PIO0_20/IR_BLASTER/USART1_TXD/PWM8/RFTX/SPIFI_IO2, mode: pullDown, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '21', peripheral: SPIFI, signal: 'SPIFI_IO, 3', pin_signal: PIO0_17/SPI1_MOSI/ISO7816_CLK/SWO/PWM6/CLK_OUT/SPIFI_IO3, mode: pullDown, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '23', peripheral: SPIFI, signal: SPIFI_IO0_or_SPIFI_MOSI, pin_signal: PIO0_19/ADO/USART1_RXD/CLK_IN/PWM4/USART0_RXD/SPIFI_IO0, mode: pullDown, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '25', peripheral: SPIFI, signal: SPIFI_IO1_or_SPIFI_MISO, pin_signal: PIO0_21/IR_BLASTER/USART1_SCK/PWM9/RFRX/SWO/SPIFI_IO1, mode: pullUp, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4 */
void BOARD_InitPins(void)
{
    /* Enables the clock for the I/O controller block. 0: Disable. 1: Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    const uint32_t port0_pin12_config = (/* Pin is configured as SWCLK */
                                         IOCON_PIO_FUNC2 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN12 (coords: 15) is configured as SWCLK */
    IOCON_PinMuxSet(IOCON, 0U, 12U, port0_pin12_config);

    const uint32_t port0_pin13_config = (/* Pin is configured as SWDIO */
                                         IOCON_PIO_FUNC2 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN13 (coords: 16) is configured as SWDIO */
    IOCON_PinMuxSet(IOCON, 0U, 13U, port0_pin13_config);

    const uint32_t port0_pin16_config = (/* Pin is configured as SPIFI_CSN */
                                         IOCON_PIO_FUNC7 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN16 (coords: 19) is configured as SPIFI_CSN */
    IOCON_PinMuxSet(IOCON, 0U, 16U, port0_pin16_config);

    const uint32_t port0_pin17_config = (/* Pin is configured as SPIFI_IO3 */
                                         IOCON_PIO_FUNC7 |
                                         /* Selects pull-down function */
                                         IOCON_PIO_MODE_PULLDOWN |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN17 (coords: 21) is configured as SPIFI_IO3 */
    IOCON_PinMuxSet(IOCON, 0U, 17U, port0_pin17_config);

    const uint32_t port0_pin18_config = (/* Pin is configured as SPIFI_CLK */
                                         IOCON_PIO_FUNC7 |
                                         /* Selects pull-down function */
                                         IOCON_PIO_MODE_PULLDOWN |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN18 (coords: 22) is configured as SPIFI_CLK */
    IOCON_PinMuxSet(IOCON, 0U, 18U, port0_pin18_config);

    const uint32_t port0_pin19_config = (/* Pin is configured as SPIFI_IO0 */
                                         IOCON_PIO_FUNC7 |
                                         /* Selects pull-down function */
                                         IOCON_PIO_MODE_PULLDOWN |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN19 (coords: 23) is configured as SPIFI_IO0 */
    IOCON_PinMuxSet(IOCON, 0U, 19U, port0_pin19_config);

    const uint32_t port0_pin20_config = (/* Pin is configured as SPIFI_IO2 */
                                         IOCON_PIO_FUNC7 |
                                         /* Selects pull-down function */
                                         IOCON_PIO_MODE_PULLDOWN |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN20 (coords: 24) is configured as SPIFI_IO2 */
    IOCON_PinMuxSet(IOCON, 0U, 20U, port0_pin20_config);

    const uint32_t port0_pin21_config = (/* Pin is configured as SPIFI_IO1 */
                                         IOCON_PIO_FUNC7 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN21 (coords: 25) is configured as SPIFI_IO1 */
    IOCON_PinMuxSet(IOCON, 0U, 21U, port0_pin21_config);

    const uint32_t port0_pin8_config = (/* Pin is configured as USART0_TXD */
                                        IOCON_PIO_FUNC2 |
                                        /* Selects pull-up function */
                                        IOCON_PIO_MODE_PULLUP |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN8 (coords: 11) is configured as USART0_TXD */
    IOCON_PinMuxSet(IOCON, 0U, 8U, port0_pin8_config);

    const uint32_t port0_pin9_config = (/* Pin is configured as USART0_RXD */
                                        IOCON_PIO_FUNC2 |
                                        /* Selects pull-up function */
                                        IOCON_PIO_MODE_PULLUP |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN9 (coords: 12) is configured as USART0_RXD */
    IOCON_PinMuxSet(IOCON, 0U, 9U, port0_pin9_config);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/