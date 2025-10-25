#pragma once

#define TARGET_BOARD_IDENTIFIER "JHEF"
#define USBD_PRODUCT_STRING "JHEMCU_F411_NOXE_v3"

#define LED0 PC13

#define BEEPER PC14
#define BEEPER_INVERTED

// *************** SPI **********************
#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN PA5
#define SPI1_MISO_PIN PA6
#define SPI1_MOSI_PIN PA7

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN PB13
#define SPI2_MISO_PIN PB14
#define SPI2_MOSI_PIN PB15

// *************** SPI Gyro & ACC **********************

#define IMU_CS_PIN PA4

// BMI270
#define USE_IMU_BMI270
#define IMU_BMI270_ALIGN CW270_DEG_FLIP
#define BMI270_CS_PIN IMU_CS_PIN
#define BMI270_SPI_BUS BUS_SPI1

// ICM42688P
#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN CW0_DEG
#define ICM42605_CS_PIN IMU_CS_PIN
#define ICM42605_SPI_BUS BUS_SPI1

// MPU6000
#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN CW180_DEG
#define MPU6000_CS_PIN IMU_CS_PIN
#define MPU6000_SPI_BUS BUS_SPI1

// *************** SPI OSD *****************************
#define USE_MAX7456
#define MAX7456_SPI_BUS BUS_SPI2
#define MAX7456_CS_PIN PB12

// *************** SPI FLASH **************************
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_CS_PIN PB2
#define M25P16_SPI_BUS BUS_SPI2
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN PB6
#define UART1_RX_PIN PB7

#define USE_UART2
#define UART2_TX_PIN PA2
#define UART2_RX_PIN PA3

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN PA15 // pin led
#define SOFTSERIAL_1_RX_PIN PB10 // pin cam ctrl

#define SERIAL_PORT_COUNT 4 // VCP, USART1, USART2, ss1

#define DEFAULT_RX_TYPE RX_TYPE_NONE

// *************** Baro *****************************

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL PB8
#define I2C1_SDA PB9

#define USE_BARO
#define BARO_I2C_BUS BUS_I2C1
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_DPS310
#define USE_BARO_SPL06

#define USE_MAG
#define MAG_I2C_BUS BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL
#define USE_MAG_AK8975

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE ADC1
#define ADC_CHANNEL_1_PIN PA1 // ADC_CURR
#define ADC_CHANNEL_2_PIN PA0 // ADC_BATT

#define CURRENT_METER_ADC_CHANNEL ADC_CHN_1
#define VBAT_ADC_CHANNEL ADC_CHN_2

// *************** OTHERS *************************
#define DEFAULT_FEATURES (FEATURE_OSD | FEATURE_VBAT)

#define USE_DSHOT
#define USE_ESC_SENSOR
#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD (BIT(2))

#define MAX_PWM_OUTPUT_PORTS 4