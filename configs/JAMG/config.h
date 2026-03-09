#pragma once

#define FC_TARGET_MCU                    STM32H743
#define BOARD_NAME                       JAMG-FC
#define MANUFACTURER_ID                  JAMG
#define USE_CONFIG_TARGET_PREINIT

//****************** Giroscopio y acelerometro ICM42688P *********************//
#define USE_SPI
#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_SPI_DEVICE_4
#define GYRO_1_CS_PIN                    PE4
#define SPI4_SCK_PIN                     PE2
#define SPI4_SDI_PIN                     PE5
#define SPI4_SDO_PIN                     PE6
#define GYRO_1_SPI_INSTANCE              SPI4
//#define GYRO_1_ALIGN                     CW90_DEG
#define USE_SPI_DEVICE_2
#define GYRO_2_CS_PIN                    PB12
#define SPI2_SCK_PIN                     PB13
#define SPI2_SDI_PIN                     PB14
#define SPI2_SDO_PIN                     PB15
#define GYRO_2_SPI_INSTANCE              SPI2
#define GYRO_2_ALIGN                     CW90_DEG
//#define DEFAULT_GYRO_TO_USE              GYRO_CONFIG_USE_GYRO_BOTH

//************************ Memoria FLASH 2 Mb ******************************//
#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_FLASH_W25N01G
#define USE_SPI_DEVICE_1
#define FLASH_CS_PIN                     PA4
#define SPI1_SCK_PIN                     PA5
#define SPI1_SDI_PIN                     PA6
#define SPI1_SDO_PIN                     PA7
#define FLASH_SPI_INSTANCE               SPI1
#define DEFAULT_BLACKBOX_DEVICE          BLACKBOX_DEVICE_FLASH

//*********************** Barometro y Magnetometro ************************//
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL_PIN                     PB8
#define I2C1_SDA_PIN                     PB9
#define USE_I2C_DEVICE_2
#define I2C2_SCL_PIN                     PB10
#define I2C2_SDA_PIN                     PB11
#define USE_BARO
#define USE_BARO_BMP280
#define BARO_I2C_INSTANCE                I2CDEV_1
#define USE_MAG
#define USE_MAG_QMC5883
#define MAG_I2C_INSTANCE                 I2CDEV_2

//**************** Otras opciones bateria, buzzer, Led ********************//
#define BEEPER_PIN                       PD14
#define LED0_PIN                         PC5
#define LED_STRIP_PIN                    PD12
#define USE_ADC3
#define ADC_VBAT_PIN                     PC0
#define ADC_INSTANCE                     ADC3
#define ADC3_DMA_OPT                     1
#define DEFAULT_VOLTAGE_METER_SOURCE     VOLTAGE_METER_ADC

//******************************** Motores *******************************//
#define MOTOR1_PIN                       PE9
#define MOTOR2_PIN                       PE11
#define MOTOR3_PIN                       PE13
#define MOTOR4_PIN                       PE14
#define TIMER_PIN_MAPPING \
        TIMER_PIN_MAP(0, MOTOR1_PIN,    1, 0) \
        TIMER_PIN_MAP(1, MOTOR2_PIN,    1, 1) \
        TIMER_PIN_MAP(2, MOTOR3_PIN,    1, 2) \
        TIMER_PIN_MAP(3, MOTOR4_PIN,    1, 3) \
        TIMER_PIN_MAP(4, LED_STRIP_PIN, 1, 4) 

//*********************** Dispositivos UART / USB ***********************//
#define USE_VCP
#define USE_USB_DETECT
#define UART1_TX_PIN                     PA9
#define UART1_RX_PIN                     PA10
#define UART3_TX_PIN                     PD8
#define UART3_RX_PIN                     PD9
#define UART6_TX_PIN                     PC6
#define UART6_RX_PIN                     PC7
#define UART8_TX_PIN                     PE1
#define UART8_RX_PIN                     PE0

//***************************** ELRS SPI *******************************//
#define USE_RX_SPI
#define USE_RX_EXPRESSLRS
#define USE_RX_SX1280
#define RX_CHANNELS_AETR
#define RX_SPI_DEFAULT_PROTOCOL          RX_SPI_EXPRESSLRS
#define DEFAULT_RX_FEATURE               FEATURE_RX_SPI
#define RX_EXPRESSLRS_TIMER_INSTANCE     TIM5
#define RX_EXPRESSLRS_SPI_RESET_PIN      PD3
#define RX_EXPRESSLRS_SPI_BUSY_PIN       PD4
#define RX_SPI_CS                        PA15
#define RX_SPI_EXTI                      PD5
#define RX_SPI_LED                       PE15
#define RX_SPI_LED_INVERTED
#define RX_SPI_EXPRESSLRS_RESET_PIN      PD3
#define RX_SPI_EXPRESSLRS_BUSY_PIN       PD4
#define SPI3_SCK_PIN                     PC10
#define SPI3_SDI_PIN                     PC11
#define SPI3_SDO_PIN                     PC12
#define RX_SPI_INSTANCE                  SPI3
#define RX_SPI_CS_PIN                    PA15
#define RX_SPI_EXTI_PIN                  PD5
#define RX_SPI_BIND_PIN                  NONE
#define RX_SPI_LED_PIN                   PE15
#define SPEKTRUM_RX_BIND_PIN             NONE
#define RX_BIND_PLUG_PIN                 NONE
//Frase de enlace                        Jamg@65535

//************************ Otras opciones ****************************//
#define SPEKTRUM_RX_BIND_PIN             NONE
#define RX_BIND_PLUG_PIN                 NONE
#define TARGET_IO_PORTA                  0xffff
#define TARGET_IO_PORTB                  0xffff
#define TARGET_IO_PORTC                  0xffff
#define TARGET_IO_PORTD                  0xffff
#define TARGET_IO_PORTE                  0xffff
#define TARGET_IO_PORTF                  0xffff
#define TARGET_IO_PORTG                  0xffff
#define TARGET_IO_PORTH                  0xffff

