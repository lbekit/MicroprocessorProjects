/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC1 0x01u         /*!<@brief Selects pin function 1 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO0_29 (number 92), P8[2]/U6[13]/FC0_USART_RXD
  @{ */
/*!
 * @brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PORT 0U
/*!
 * @brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN 29U
/*!
 * @brief PORT pin mask */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN_MASK (1U << 29U)
/* @} */

/*! @name PIO0_30 (number 94), P8[3]/U6[12]/FC0_USART_TXD
  @{ */
/*!
 * @brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PORT 0U
/*!
 * @brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN 30U
/*!
 * @brief PORT pin mask */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN_MASK (1U << 30U)
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#define IOCON_PIO_ASW_DI 0x00u        /*!<@brief Analog switch is open (disabled) */
#define IOCON_PIO_ASW_DIS_EN 0x00u    /*!<@brief Analog switch is closed (enabled), only for A0 version */
#define IOCON_PIO_ASW_EN 0x0400u      /*!<@brief Analog switch is closed (enabled) */
#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC6 0x06u         /*!<@brief Selects pin function 6 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLDOWN 0x10u /*!<@brief Selects pull-down function */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO0_11 (number 13), U14[4]/SWDCLK_TRGT
  @{ */
/*!
 * @brief PORT peripheral base pointer */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PORT 0U
/*!
 * @brief PORT pin number */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PIN 11U
/*!
 * @brief PORT pin mask */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PIN_MASK (1U << 11U)
/* @} */

/*! @name PIO0_12 (number 12), U15[4]/D7/P7[2]/IF_SWDIO
  @{ */
/*!
 * @brief PORT peripheral base pointer */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PORT 0U
/*!
 * @brief PORT pin number */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PIN 12U
/*!
 * @brief PORT pin mask */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PIN_MASK (1U << 12U)
/* @} */

/*! @name PIO0_10 (number 21), U14[12]/SWO_TRGT
  @{ */
/*!
 * @brief PORT peripheral base pointer */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWO_PORT 0U
/*!
 * @brief PORT pin number */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWO_PIN 10U
/*!
 * @brief PORT pin mask */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWO_PIN_MASK (1U << 10U)
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSWD_DEBUGPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC4 0x04u         /*!<@brief Selects pin function 4 */
#define IOCON_PIO_FUNC7 0x07u         /*!<@brief Selects pin function 7 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO0_22 (number 78), P10[1]/USB0_VBUS
  @{ */
#define BOARD_INITUSBPINS_USB0_VBUS_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITUSBPINS_USB0_VBUS_PIN 22U                   /*!<@brief PORT pin number */
#define BOARD_INITUSBPINS_USB0_VBUS_PIN_MASK (1U << 22U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitUSBPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u         /*!<@brief Selects pin function 0 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO1_4 (number 1), R78/P18[5]/LEDR/PWM_ARD
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */
#define BOARD_INITLEDSPINS_LED_BLUE_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_BLUE_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_LED_BLUE_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PIO1_6 (number 5), R80/P18[9]/LEDB/PWM_ARD
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_LED_RED_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_RED_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */
#define BOARD_INITLEDSPINS_LED_RED_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_RED_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_LED_RED_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PIO1_7 (number 9), R79/P18[7]/LEDG/PWM_ARD
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */
#define BOARD_INITLEDSPINS_LED_GREEN_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_GREEN_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_LED_GREEN_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#define IOCON_PIO_ASW_DIS_EN 0x00u    /*!<@brief Analog switch is closed (enabled), only for A0 version */
#define IOCON_PIO_ASW_EN 0x0400u      /*!<@brief Analog switch is closed (enabled) */
#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u         /*!<@brief Selects pin function 0 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO0_5 (number 88), S1/J10[1]/U3[12]/P17[8]/P7[7]/U11[4]/P0_5-ISP1
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_S1_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_S1_GPIO_PIN_MASK (1U << 5U) /*!<@brief GPIO pin mask */
#define BOARD_INITBUTTONSPINS_S1_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_S1_PIN 5U                   /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_S1_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PIO1_18 (number 64), S2/P18[16]/P24[2]/WAKE/GPIO
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_S2_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_S2_GPIO_PIN_MASK (1U << 18U) /*!<@brief GPIO pin mask */
#define BOARD_INITBUTTONSPINS_S2_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_S2_PIN 18U                   /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_S2_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PIO1_9 (number 10), S3/P18[1]/PIO1_9_GPIO_ARD
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_S3_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_S3_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */
#define BOARD_INITBUTTONSPINS_S3_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_S3_PIN 9U                   /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_S3_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitBUTTONsPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#define IOCON_PIO_ASW_EN 0x0400u      /*!<@brief Analog switch is closed (enabled) */
#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC1 0x01u         /*!<@brief Selects pin function 1 */
#define IOCON_PIO_FUNC2 0x02u         /*!<@brief Selects pin function 2 */
#define IOCON_PIO_FUNC5 0x05u         /*!<@brief Selects pin function 5 */
#define IOCON_PIO_FUNC7 0x07u         /*!<@brief Selects pin function 7 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO1_20 (number 4), P17[1]/P24[5]/FC4_I2C_SCL_ARD
  @{ */
#define BOARD_INITI2SPINS_FC4_I2C_SCL_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITI2SPINS_FC4_I2C_SCL_PIN 20U                   /*!<@brief PORT pin number */
#define BOARD_INITI2SPINS_FC4_I2C_SCL_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PIO1_21 (number 30), P17[3]/P24[6]/FC4_I2C_SDA_ARD
  @{ */
#define BOARD_INITI2SPINS_FC4_I2C_SDA_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITI2SPINS_FC4_I2C_SDA_PIN 21U                   /*!<@brief PORT pin number */
#define BOARD_INITI2SPINS_FC4_I2C_SDA_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PIO1_31 (number 91), P19[7]/P19[8]/PLU_IN0/GPIO
  @{ */
#define BOARD_INITI2SPINS_MCLK_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITI2SPINS_MCLK_PIN 31U                   /*!<@brief PORT pin number */
#define BOARD_INITI2SPINS_MCLK_PIN_MASK (1U << 31U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PIO0_21 (number 76), P17[14]/FC7_I2S_SCK
  @{ */
#define BOARD_INITI2SPINS_FC7_I2S_SCK_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITI2SPINS_FC7_I2S_SCK_PIN 21U                   /*!<@brief PORT pin number */
#define BOARD_INITI2SPINS_FC7_I2S_SCK_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PIO0_20 (number 74), P17[10]/FC7_I2S_TX
  @{ */
#define BOARD_INITI2SPINS_FC7_I2S_TX_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITI2SPINS_FC7_I2S_TX_PIN 20U                   /*!<@brief PORT pin number */
#define BOARD_INITI2SPINS_FC7_I2S_TX_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO0_19 (number 90), P17[12]/FC7_I2S_WS
  @{ */
#define BOARD_INITI2SPINS_FC7_I2S_WS_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITI2SPINS_FC7_I2S_WS_PIN 19U                   /*!<@brief PORT pin number */
#define BOARD_INITI2SPINS_FC7_I2S_WS_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO0_10 (number 21), U14[12]/SWO_TRGT
  @{ */
#define BOARD_INITI2SPINS_FC6_I2S_CLK_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITI2SPINS_FC6_I2S_CLK_PIN 10U                   /*!<@brief PORT pin number */
#define BOARD_INITI2SPINS_FC6_I2S_CLK_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PIO1_13 (number 2), P17[20]/FC6_I2S_RX
  @{ */
#define BOARD_INITI2SPINS_FC6_I2S_RX_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITI2SPINS_FC6_I2S_RX_PIN 13U                   /*!<@brief PORT pin number */
#define BOARD_INITI2SPINS_FC6_I2S_RX_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO1_16 (number 87), P18[17]/SD1_PWR_EN
  @{ */
#define BOARD_INITI2SPINS_FC6_I2S_WS_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITI2SPINS_FC6_I2S_WS_PIN 16U                   /*!<@brief PORT pin number */
#define BOARD_INITI2SPINS_FC6_I2S_WS_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitI2SPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#define IOCON_PIO_ASW_DI 0x00u        /*!<@brief Analog switch is open (disabled) */
#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u         /*!<@brief Selects pin function 0 */
#define IOCON_PIO_FUNC5 0x05u         /*!<@brief Selects pin function 5 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO1_21 (number 30), P17[3]/P24[6]/FC4_I2C_SDA_ARD
  @{ */
#define BOARD_INITACCELPINS_FC4_I2C_SDA_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_FC4_I2C_SDA_PIN 21U                   /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_FC4_I2C_SDA_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                                  /* @} */

/*! @name PIO1_20 (number 4), P17[1]/P24[5]/FC4_I2C_SCL_ARD
  @{ */
#define BOARD_INITACCELPINS_FC4_I2C_SCL_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_FC4_I2C_SCL_PIN 20U                   /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_FC4_I2C_SCL_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                                                  /* @} */

/*! @name PIO1_19 (number 58), U7[3]/P18[14]/PLU_OUT1/GPIO
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITACCELPINS_ACCL_INTR_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCL_INTR_GPIO_PIN_MASK (1U << 19U) /*!<@brief GPIO pin mask */
#define BOARD_INITACCELPINS_ACCL_INTR_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCL_INTR_PIN 19U                   /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCL_INTR_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCELPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

/*!
 * @brief Enables analog function */
#define IOCON_PIO_ANALOG_EN 0x00u
/*!
 * @brief Analog switch is open (disabled) */
#define IOCON_PIO_ASW_DI 0x00u
/*!
 * @brief Analog switch is open (disabled), only for A0 version */
#define IOCON_PIO_ASW_DIS_DI 0x0400u
/*!
 * @brief Enables digital function */
#define IOCON_PIO_DIGITAL_EN 0x0100u
/*!
 * @brief IO is an open drain cell */
#define IOCON_PIO_ECS_DI 0x00u
/*!
 * @brief GPIO mode */
#define IOCON_PIO_EGP_GPIO 0x4000u
/*!
 * @brief Selects pin function 0 */
#define IOCON_PIO_FUNC0 0x00u
/*!
 * @brief Selects pin function 6 */
#define IOCON_PIO_FUNC6 0x06u
/*!
 * @brief I2C 50 ns glitch filter enabled. Typically used for Standard mode, Fast-mode and Fast-mode Plus I2C. */
#define IOCON_PIO_I2CFILTER_NONHIGHSPEED 0x00u
/*!
 * @brief Input filter disabled */
#define IOCON_PIO_INPFILT_OFF 0x1000u
/*!
 * @brief Input function is not inverted */
#define IOCON_PIO_INV_DI 0x00u
/*!
 * @brief No addition pin function */
#define IOCON_PIO_MODE_INACT 0x00u
/*!
 * @brief Selects pull-down function */
#define IOCON_PIO_MODE_PULLDOWN 0x10u
/*!
 * @brief Selects pull-up function */
#define IOCON_PIO_MODE_PULLUP 0x20u
/*!
 * @brief Open drain is disabled */
#define IOCON_PIO_OPENDRAIN_DI 0x00u
/*!
 * @brief Standard mode, output slew rate control is enabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u
/*!
 * @brief 3V3 signaling in I2C mode */
#define IOCON_PIO_SSEL_3V3 0x00u

/*! @name PIO1_4 (number 1), R78/P18[5]/LEDR/PWM_ARD
  @{ */
#define SETDEFAULTROUTING_LED_BLUE_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_LED_BLUE_PIN 4U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_LED_BLUE_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PIO1_13 (number 2), P17[20]/FC6_I2S_RX
  @{ */
#define SETDEFAULTROUTING_FC6_I2S_RX_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_FC6_I2S_RX_PIN 13U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_FC6_I2S_RX_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO1_20 (number 4), P17[1]/P24[5]/FC4_I2C_SCL_ARD
  @{ */
#define SETDEFAULTROUTING_FC4_I2C_SCL_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_FC4_I2C_SCL_PIN 20U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_FC4_I2C_SCL_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PIO1_6 (number 5), R80/P18[9]/LEDB/PWM_ARD
  @{ */
#define SETDEFAULTROUTING_LED_RED_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_LED_RED_PIN 6U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_LED_RED_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PIO1_7 (number 9), R79/P18[7]/LEDG/PWM_ARD
  @{ */
#define SETDEFAULTROUTING_LED_GREEN_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_LED_GREEN_PIN 7U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_LED_GREEN_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PIO1_9 (number 10), S3/P18[1]/PIO1_9_GPIO_ARD
  @{ */
#define SETDEFAULTROUTING_S3_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_S3_PIN 9U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_S3_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PIO0_12 (number 12), U15[4]/D7/P7[2]/IF_SWDIO
  @{ */
#define SETDEFAULTROUTING_DEBUG_SWD_SWDIO_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_DEBUG_SWD_SWDIO_PIN 12U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_DEBUG_SWD_SWDIO_PIN_MASK (1U << 12U)      /*!<@brief PORT pin mask */
                                                                    /* @} */

/*! @name PIO0_11 (number 13), U14[4]/SWDCLK_TRGT
  @{ */
#define SETDEFAULTROUTING_DEBUG_SWD_SWDCLK_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_DEBUG_SWD_SWDCLK_PIN 11U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_DEBUG_SWD_SWDCLK_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                                                     /* @} */

/*! @name PIO1_21 (number 30), P17[3]/P24[6]/FC4_I2C_SDA_ARD
  @{ */
#define SETDEFAULTROUTING_FC4_I2C_SDA_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_FC4_I2C_SDA_PIN 21U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_FC4_I2C_SDA_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PIO1_19 (number 58), U7[3]/P18[14]/PLU_OUT1/GPIO
  @{ */
#define SETDEFAULTROUTING_ACCL_INTR_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_ACCL_INTR_PIN 19U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_ACCL_INTR_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PIO1_18 (number 64), S2/P18[16]/P24[2]/WAKE/GPIO
  @{ */
#define SETDEFAULTROUTING_S2_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_S2_PIN 18U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_S2_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_20 (number 74), P17[10]/FC7_I2S_TX
  @{ */
#define SETDEFAULTROUTING_FC7_I2S_TX_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_FC7_I2S_TX_PIN 20U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_FC7_I2S_TX_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO0_21 (number 76), P17[14]/FC7_I2S_SCK
  @{ */
#define SETDEFAULTROUTING_FC7_I2S_SCK_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_FC7_I2S_SCK_PIN 21U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_FC7_I2S_SCK_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PIO0_22 (number 78), P10[1]/USB0_VBUS
  @{ */
#define SETDEFAULTROUTING_USB0_VBUS_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_USB0_VBUS_PIN 22U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_USB0_VBUS_PIN_MASK (1U << 22U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PIO1_16 (number 87), P18[17]/SD1_PWR_EN
  @{ */
#define SETDEFAULTROUTING_FC6_I2S_WS_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_FC6_I2S_WS_PIN 16U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_FC6_I2S_WS_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO0_19 (number 90), P17[12]/FC7_I2S_WS
  @{ */
#define SETDEFAULTROUTING_FC7_I2S_WS_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_FC7_I2S_WS_PIN 19U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_FC7_I2S_WS_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO1_31 (number 91), P19[7]/P19[8]/PLU_IN0/GPIO
  @{ */
#define SETDEFAULTROUTING_MCLK_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_MCLK_PIN 31U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_MCLK_PIN_MASK (1U << 31U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PIO0_29 (number 92), P8[2]/U6[13]/FC0_USART_RXD
  @{ */
#define SETDEFAULTROUTING_DEBUG_UART_RX_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_DEBUG_UART_RX_PIN 29U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_DEBUG_UART_RX_PIN_MASK (1U << 29U)      /*!<@brief PORT pin mask */
                                                                  /* @} */

/*! @name PIO0_30 (number 94), P8[3]/U6[12]/FC0_USART_TXD
  @{ */
#define SETDEFAULTROUTING_DEBUG_UART_TX_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define SETDEFAULTROUTING_DEBUG_UART_TX_PIN 30U                   /*!<@brief PORT pin number */
#define SETDEFAULTROUTING_DEBUG_UART_TX_PIN_MASK (1U << 30U)      /*!<@brief PORT pin mask */
                                                                  /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void SetDefaultRouting(void); /* Function assigned for the Cortex-M33 (Core #0) */

#define PIO1_9_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_9_FUNC_ALT0 0x00u        /*!<@brief Selects pin function.: Alternative connection 0. */

/*! @name PIO1_9 (number 10), S3/P18[1]/PIO1_9_GPIO_ARD
  @{ */
#define BOARD_INITPINS_S3_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_S3_PIN 9U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_S3_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void Board_InitPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
