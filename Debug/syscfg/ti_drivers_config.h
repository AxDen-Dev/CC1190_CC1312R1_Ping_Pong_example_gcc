/*
 *  ======== ti_drivers_config.h ========
 *  Configured TI-Drivers module declarations
 *
 *  The macros defines herein are intended for use by applications which
 *  directly include this header. These macros should NOT be hard coded or
 *  copied into library source code.
 *
 *  Symbols declared as const are intended for use with libraries.
 *  Library source code must extern the correct symbol--which is resolved
 *  when the application is linked.
 *
 *  DO NOT EDIT - This file is generated for the CC1312R1F3RGZ
 *  by the SysConfig tool.
 */
#ifndef ti_drivers_config_h
#define ti_drivers_config_h

#define CONFIG_SYSCONFIG_PREVIEW

#define CONFIG_CC1312R1F3RGZ
#ifndef DeviceFamily_CC13X2
#define DeviceFamily_CC13X2
#endif

#include <ti/devices/DeviceFamily.h>

#include <stdint.h>

/* support C++ sources */
#ifdef __cplusplus
extern "C" {
#endif


/*
 *  ======== CCFG ========
 */


/*
 *  ======== ADC ========
 */

/* DIO24 */
extern const uint_least8_t              CONFIG_ADC_0_CONST;
#define CONFIG_ADC_0                    0
#define CONFIG_TI_DRIVERS_ADC_COUNT     1


/*
 *  ======== I2C ========
 */

/*
 *  SCL: DIO5
 *  SDA: DIO6
 */
extern const uint_least8_t              CONFIG_I2C_0_CONST;
#define CONFIG_I2C_0                    0
#define CONFIG_TI_DRIVERS_I2C_COUNT     1

/* ======== I2C Addresses and Speeds ======== */
#include <ti/drivers/I2C.h>

/* ---- CONFIG_I2C_0 I2C bus components ---- */

/* no components connected to CONFIG_I2C_0 */

/* max speed unspecified, defaulting to 100 Kbps */
#define CONFIG_I2C_0_MAXSPEED   (100U) /* Kbps */
#define CONFIG_I2C_0_MAXBITRATE ((I2C_BitRate)I2C_100kHz)


/*
 *  ======== PIN ========
 */
#include <ti/drivers/PIN.h>

extern const PIN_Config BoardGpioInitTable[];

/* Parent Signal: CONFIG_ADC_0 ADC Pin, (DIO24) */
#define CONFIG_PIN_6                   0x00000018
/* Parent Signal: CONFIG_I2C_0 SDA, (DIO6) */
#define CONFIG_PIN_4                   0x00000006
/* Parent Signal: CONFIG_I2C_0 SCL, (DIO5) */
#define CONFIG_PIN_5                   0x00000005
/* Parent Signal: CONFIG_UART_0 TX, (DIO14) */
#define CONFIG_PIN_0                   0x0000000e
/* Parent Signal: CONFIG_UART_0 RX, (DIO13) */
#define CONFIG_PIN_1                   0x0000000d
/* Parent Signal: CONFIG_UART2_0 TX, (DIO11) */
#define CONFIG_PIN_2                   0x0000000b
/* Parent Signal: CONFIG_UART2_0 RX, (DIO12) */
#define CONFIG_PIN_3                   0x0000000c
#define CONFIG_TI_DRIVERS_PIN_COUNT    7




/*
 *  ======== UART ========
 */

/*
 *  TX: DIO14
 *  RX: DIO13
 */
extern const uint_least8_t              CONFIG_UART_0_CONST;
#define CONFIG_UART_0                   0
#define CONFIG_TI_DRIVERS_UART_COUNT    1


/*
 *  ======== UART2 ========
 */

/*
 *  TX: DIO11
 *  RX: DIO12
 */
extern const uint_least8_t                  CONFIG_UART2_0_CONST;
#define CONFIG_UART2_0                      0
#define CONFIG_TI_DRIVERS_UART2_COUNT       1


/*
 *  ======== Board_init ========
 *  Perform all required TI-Drivers initialization
 *
 *  This function should be called once at a point before any use of
 *  TI-Drivers.
 */
extern void Board_init(void);

/*
 *  ======== Board_initGeneral ========
 *  (deprecated)
 *
 *  Board_initGeneral() is defined purely for backward compatibility.
 *
 *  All new code should use Board_init() to do any required TI-Drivers
 *  initialization _and_ use <Driver>_init() for only where specific drivers
 *  are explicitly referenced by the application.  <Driver>_init() functions
 *  are idempotent.
 */
#define Board_initGeneral Board_init

#ifdef __cplusplus
}
#endif

#endif /* include guard */
