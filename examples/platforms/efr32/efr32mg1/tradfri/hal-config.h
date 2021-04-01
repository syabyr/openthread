#ifndef HAL_CONFIG_H
#define HAL_CONFIG_H

#include "em_device.h"
#include "hal-config-types.h"

// This file is auto-generated by Hardware Configurator in Simplicity Studio.
// Any content between $[ and ]$ will be replaced whenever the file is regenerated.
// Content outside these regions will be preserved.

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ADC0]
// [ADC0]$

// $[ANTDIV]
// [ANTDIV]$

// $[BATTERYMON]
// [BATTERYMON]$

// $[BTL_BUTTON]
// [BTL_BUTTON]$

// $[BULBPWM]
// [BULBPWM]$

// $[BULBPWM_COLOR]
// [BULBPWM_COLOR]$

// $[BUTTON]
#define BSP_BUTTON_PRESENT (1)

#define BSP_BUTTON0_PIN (14U)
#define BSP_BUTTON0_PORT (gpioPortD)

#define BSP_BUTTON1_PIN (15U)
#define BSP_BUTTON1_PORT (gpioPortD)

#define BSP_BUTTON_COUNT (2U)
#define BSP_BUTTON_INIT                                                            \
    {                                                                              \
        {BSP_BUTTON0_PORT, BSP_BUTTON0_PIN}, { BSP_BUTTON1_PORT, BSP_BUTTON1_PIN } \
    }
#define BSP_BUTTON_GPIO_DOUT (HAL_GPIO_DOUT_LOW)
#define BSP_BUTTON_GPIO_MODE (HAL_GPIO_MODE_INPUT)
// [BUTTON]$

// $[CMU]
#define HAL_CLK_HFCLK_SOURCE (HAL_CLK_HFCLK_SOURCE_HFXO)
#define HAL_CLK_LFECLK_SOURCE (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define HAL_CLK_LFBCLK_SOURCE (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define BSP_CLK_LFXO_PRESENT (1)
#define BSP_CLK_HFXO_PRESENT (1)
#define BSP_CLK_LFXO_INIT CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_CTUNE (32U)
#define BSP_CLK_LFXO_FREQ (32768U)
#define HAL_CLK_LFACLK_SOURCE (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define BSP_CLK_HFXO_FREQ (38400000UL)
#define BSP_CLK_HFXO_CTUNE (332)
#define BSP_CLK_HFXO_INIT CMU_HFXOINIT_DEFAULT
#define BSP_CLK_HFXO_CTUNE_TOKEN (0)
#define HAL_CLK_HFXO_AUTOSTART (HAL_CLK_HFXO_AUTOSTART_NONE)
// [CMU]$

// $[COEX]
// [COEX]$

// $[CS5463]
// [CS5463]$

// $[CSEN0]
// [CSEN0]$

// $[DCDC]
#define BSP_DCDC_PRESENT (1)

#define HAL_DCDC_BYPASS (0)
#define BSP_DCDC_INIT EMU_DCDCINIT_DEFAULT
// [DCDC]$

// $[EMU]
// [EMU]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[EZRADIOPRO]
// [EZRADIOPRO]$

// $[GPIO]
#define PORTIO_GPIO_SWCLKTCK_PIN (0)
#define PORTIO_GPIO_SWCLKTCK_PORT (gpioPortF)
#define PORTIO_GPIO_DBGROUTE_LOC (0)

#define PORTIO_GPIO_SWDIOTMS_PIN (1)
#define PORTIO_GPIO_SWDIOTMS_PORT (gpioPortF)

#define PORTIO_GPIO_SWV_PIN (2)
#define PORTIO_GPIO_SWV_PORT (gpioPortF)
#define PORTIO_GPIO_SWV_LOC (0)

#define PORTIO_GPIO_TCLK_PIN (8)
#define PORTIO_GPIO_TCLK_PORT (gpioPortF)
#define PORTIO_GPIO_TCLK_LOC (0)

#define PORTIO_GPIO_TD0_PIN (9)
#define PORTIO_GPIO_TD0_PORT (gpioPortF)
#define PORTIO_GPIO_TD0_LOC (0)

#define PORTIO_GPIO_TD1_PIN (10)
#define PORTIO_GPIO_TD1_PORT (gpioPortF)
#define PORTIO_GPIO_TD1_LOC (0)

#define PORTIO_GPIO_TD2_PIN (11)
#define PORTIO_GPIO_TD2_PORT (gpioPortF)
#define PORTIO_GPIO_TD2_LOC (0)

#define PORTIO_GPIO_TD3_PIN (12)
#define PORTIO_GPIO_TD3_PORT (gpioPortF)
#define PORTIO_GPIO_TD3_LOC (0)

// [GPIO]$

// $[I2C0]
#define PORTIO_I2C0_SCL_PIN (10)
#define PORTIO_I2C0_SCL_PORT (gpioPortC)
#define PORTIO_I2C0_SCL_LOC (14)

#define PORTIO_I2C0_SDA_PIN (11)
#define PORTIO_I2C0_SDA_PORT (gpioPortC)
#define PORTIO_I2C0_SDA_LOC (16)

// [I2C0]$

// $[I2C1]
// [I2C1]$

// $[I2CSENSOR]
// [I2CSENSOR]$

// $[IDAC0]
// [IDAC0]$

// $[IOEXP]
// [IOEXP]$

// $[LED]
#define BSP_LED_PRESENT (1)

#define BSP_LED0_PIN (8)
#define BSP_LED0_PORT (gpioPortD)

#define BSP_LED1_PIN (9)
#define BSP_LED1_PORT (gpioPortD)

#define HAL_LED_ENABLE \
    {                  \
        0, 1           \
    }
#define HAL_LED_COUNT (2)
#define BSP_LED_COUNT (2)
#define BSP_LED_INIT                                                   \
    {                                                                  \
        {BSP_LED0_PORT, BSP_LED0_PIN}, { BSP_LED1_PORT, BSP_LED1_PIN } \
    }
// [LED]$

// $[LESENSE]
// [LESENSE]$

// $[LETIMER0]
// [LETIMER0]$

// $[LEUART0]
// [LEUART0]$

// $[LFXO]
// [LFXO]$

// $[LNA]
// [LNA]$

// $[PA]
#define HAL_PA_ENABLE (1)

#define HAL_PA_RAMP (10)
#define HAL_PA_2P4_LOWPOWER (0)
#define HAL_PA_POWER (252)
#define HAL_PA_VOLTAGE (3300)
#define HAL_PA_CURVE_HEADER "pa_curves_efr32.h"
// [PA]$

// $[PCNT0]
// [PCNT0]$

// $[PCNT1]
// [PCNT1]$

// $[PCNT2]
// [PCNT2]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
#define PORTIO_PRS_CH4_PIN (13)
#define PORTIO_PRS_CH4_PORT (gpioPortD)
#define PORTIO_PRS_CH4_LOC (4)

// [PRS]$

// $[PTI]
#define PORTIO_PTI_DFRAME_PIN (13)
#define PORTIO_PTI_DFRAME_PORT (gpioPortB)
#define PORTIO_PTI_DFRAME_LOC (6)

#define PORTIO_PTI_DOUT_PIN (12)
#define PORTIO_PTI_DOUT_PORT (gpioPortB)
#define PORTIO_PTI_DOUT_LOC (6)

#define HAL_PTI_ENABLE (1)

#define BSP_PTI_DFRAME_PIN (13)
#define BSP_PTI_DFRAME_PORT (gpioPortB)
#define BSP_PTI_DFRAME_LOC (6)

#define BSP_PTI_DOUT_PIN (12)
#define BSP_PTI_DOUT_PORT (gpioPortB)
#define BSP_PTI_DOUT_LOC (6)

#define HAL_PTI_MODE (HAL_PTI_MODE_UART)
#define HAL_PTI_BAUD_RATE (1600000)
// [PTI]$

// $[PYD1698]
// [PYD1698]$

// $[SERIAL]
#define HAL_SERIAL_USART0_ENABLE (0)
#define HAL_SERIAL_LEUART0_ENABLE (0)
#define HAL_SERIAL_USART1_ENABLE (0)
#define HAL_SERIAL_USART2_ENABLE (0)
#define HAL_SERIAL_USART3_ENABLE (0)
#define HAL_SERIAL_RXWAKE_ENABLE (0)
#define BSP_SERIAL_APP_CTS_PIN (2)
#define BSP_SERIAL_APP_CTS_PORT (gpioPortA)
#define BSP_SERIAL_APP_CTS_LOC (30)

#define BSP_SERIAL_APP_RX_PIN (14)
#define BSP_SERIAL_APP_RX_PORT (gpioPortB)
#define BSP_SERIAL_APP_RX_LOC (8)

#define BSP_SERIAL_APP_TX_PIN (15)
#define BSP_SERIAL_APP_TX_PORT (gpioPortB)
#define BSP_SERIAL_APP_TX_LOC (10)

#define BSP_SERIAL_APP_RTS_PIN (3)
#define BSP_SERIAL_APP_RTS_PORT (gpioPortA)
#define BSP_SERIAL_APP_RTS_LOC (30)

#define HAL_SERIAL_APP_RX_QUEUE_SIZE (128)
#define HAL_SERIAL_APP_BAUD_RATE (115200)
#define HAL_SERIAL_APP_RXSTOP (16)
#define HAL_SERIAL_APP_RXSTART (16)
#define HAL_SERIAL_APP_TX_QUEUE_SIZE (128)
#define HAL_SERIAL_APP_FLOW_CONTROL (HAL_USART_FLOW_CONTROL_NONE)
// [SERIAL]$

// $[SPIDISPLAY]
// [SPIDISPLAY]$

// $[SPINCP]
// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[UARTNCP]
// [UARTNCP]$

// $[USART0]
#define PORTIO_USART0_CTS_PIN (2)
#define PORTIO_USART0_CTS_PORT (gpioPortA)
#define PORTIO_USART0_CTS_LOC (30)

#define PORTIO_USART0_RTS_PIN (3)
#define PORTIO_USART0_RTS_PORT (gpioPortA)
#define PORTIO_USART0_RTS_LOC (30)

#define PORTIO_USART0_RX_PIN (14)
#define PORTIO_USART0_RX_PORT (gpioPortB)
#define PORTIO_USART0_RX_LOC (8)

#define PORTIO_USART0_TX_PIN (15)
#define PORTIO_USART0_TX_PORT (gpioPortB)
#define PORTIO_USART0_TX_LOC (10)

#define HAL_USART0_ENABLE (1)

#define BSP_USART0_CTS_PIN (2)
#define BSP_USART0_CTS_PORT (gpioPortA)
#define BSP_USART0_CTS_LOC (30)

#define BSP_USART0_RX_PIN (1)
#define BSP_USART0_RX_PORT (gpioPortA)
#define BSP_USART0_RX_LOC (0)

#define BSP_USART0_TX_PIN (0)
#define BSP_USART0_TX_PORT (gpioPortA)
#define BSP_USART0_TX_LOC (0)

#define BSP_USART0_RTS_PIN (3)
#define BSP_USART0_RTS_PORT (gpioPortA)
#define BSP_USART0_RTS_LOC (30)

#define HAL_USART0_RX_QUEUE_SIZE (128)
#define HAL_USART0_BAUD_RATE (115200)
#define HAL_USART0_RXSTOP (16)
#define HAL_USART0_RXSTART (16)
#define HAL_USART0_TX_QUEUE_SIZE (128)
#define HAL_USART0_FLOW_CONTROL (HAL_USART_FLOW_CONTROL_NONE)
// [USART0]$

// $[USART1]
#define PORTIO_USART1_CLK_PIN (8)
#define PORTIO_USART1_CLK_PORT (gpioPortC)
#define PORTIO_USART1_CLK_LOC (11)

#define PORTIO_USART1_CS_PIN (9)
#define PORTIO_USART1_CS_PORT (gpioPortC)
#define PORTIO_USART1_CS_LOC (11)

#define PORTIO_USART1_RX_PIN (7)
#define PORTIO_USART1_RX_PORT (gpioPortC)
#define PORTIO_USART1_RX_LOC (11)

#define PORTIO_USART1_TX_PIN (6)
#define PORTIO_USART1_TX_PORT (gpioPortC)
#define PORTIO_USART1_TX_LOC (11)

// [USART1]$

// $[USART2]
#define PORTIO_USART2_CLK_PIN (8)
#define PORTIO_USART2_CLK_PORT (gpioPortA)
#define PORTIO_USART2_CLK_LOC (1)

#define PORTIO_USART2_CS_PIN (9)
#define PORTIO_USART2_CS_PORT (gpioPortA)
#define PORTIO_USART2_CS_LOC (1)

#define PORTIO_USART2_RX_PIN (7)
#define PORTIO_USART2_RX_PORT (gpioPortA)
#define PORTIO_USART2_RX_LOC (1)

#define PORTIO_USART2_TX_PIN (6)
#define PORTIO_USART2_TX_PORT (gpioPortA)
#define PORTIO_USART2_TX_LOC (1)

// [USART2]$

// $[USART3]
#define PORTIO_USART3_CTS_PIN (8)
#define PORTIO_USART3_CTS_PORT (gpioPortD)
#define PORTIO_USART3_CTS_LOC (28)

#define PORTIO_USART3_RTS_PIN (9)
#define PORTIO_USART3_RTS_PORT (gpioPortD)
#define PORTIO_USART3_RTS_LOC (28)

#define PORTIO_USART3_RX_PIN (7)
#define PORTIO_USART3_RX_PORT (gpioPortB)
#define PORTIO_USART3_RX_LOC (10)

#define PORTIO_USART3_TX_PIN (6)
#define PORTIO_USART3_TX_PORT (gpioPortB)
#define PORTIO_USART3_TX_LOC (10)

// [USART3]$

// $[VCOM]
// [VCOM]$

// $[VDAC0]
// [VDAC0]$

// $[VUART]
// [VUART]$

// $[WDOG]
// [WDOG]$

// $[WTIMER0]
// [WTIMER0]$

// $[WTIMER1]
// [WTIMER1]$

#endif /* HAL_CONFIG_H */
