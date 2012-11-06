#ifndef __MACH_GPIO_C1KOR_H
#define __MACH_GPIO_C1KOR_H __FILE__

#include <mach/gpio.h>

extern void midas_config_gpio_table(void);
extern void midas_config_sleep_gpio_table(void);

#define GPIO_eMMC_EN		EXYNOS4_GPK0(2)

#define GPIO_BOOT_MODE		EXYNOS4_GPX0(3)

#define GPIO_FM_I2S_CLK		EXYNOS4_GPC0(0)
#define GPIO_FM_I2S_SYNC	EXYNOS4_GPC0(2)
#define GPIO_FM_I2S_DI		EXYNOS4_GPC0(3)
#define GPIO_FM_I2S_DO		EXYNOS4_GPC0(4)

#define GPIO_IF_PMIC_SDA	EXYNOS4212_GPM2(0)
#define GPIO_IF_PMIC_SCL	EXYNOS4212_GPM2(1)
#define GPIO_PMIC_SDA		EXYNOS4_GPB(2)
#define GPIO_PMIC_SCL		EXYNOS4_GPB(3)

#define GPIO_ADC_SCL		EXYNOS4_GPY0(2)
#define GPIO_ADC_SDA		EXYNOS4_GPY0(3)
#define GPIO_ADC_INT		EXYNOS4_GPX2(4)

#define GPIO_CAM_SPI_SCLK	EXYNOS4_GPB(4)
#define GPIO_CAM_SPI_SSN	EXYNOS4_GPB(5)
#define GPIO_CAM_SPI_MISO	EXYNOS4_GPB(6)
#define GPIO_CAM_SPI_MOSI	EXYNOS4_GPB(7)

#define GPIO_CAM_MCLK		EXYNOS4212_GPJ1(3)
#define GPIO_VTCAM_MCLK		EXYNOS4212_GPM2(2)

#define GPIO_ISP_STANDBY			EXYNOS4212_GPM0(1)
#define GPIO_CAM_IO_EN				EXYNOS4212_GPM0(2)
#define GPIO_ISP_CORE_EN			EXYNOS4212_GPM0(3)
#define GPIO_CAM_AF_EN				EXYNOS4212_GPM0(4)
#define GPIO_CAM_SENSOR_CORE_EN		EXYNOS4212_GPM0(7)
#define GPIO_CAM_VT_nRST	EXYNOS4212_GPM1(6)

#define GPIO_8M_CAM_SCL_18V	EXYNOS4_GPD1(0)
#define GPIO_8M_CAM_SDA_18V	EXYNOS4_GPD1(1)

#define GPIO_VT_CAM_SCL_18V	EXYNOS4212_GPM4(2)
#define GPIO_VT_CAM_SDA_18V	EXYNOS4212_GPM4(3)
#define GPIO_VT_CAM_ID		EXYNOS4_GPF1(2)

/* Sensors & NFC*/
#define GPIO_PS_ALS_EN		EXYNOS4212_GPJ0(5)
#define GPIO_PS_ALS_SDA_28V	EXYNOS4_GPK1(1)
#define GPIO_PS_ALS_SCL_28V	EXYNOS4_GPK2(2)
#define GPIO_PS_ALS_INT		EXYNOS4_GPX0(2)

#define GPIO_ACC_INT		EXYNOS4_GPX0(0)

#define GPIO_GYRO_DE		EXYNOS4_GPL2(0)
#define GPIO_GPS_nRST		EXYNOS4_GPL2(1)
#define GPIO_GPS_PWR_EN		EXYNOS4_GPL2(2)

#define GPIO_GYRO_INT		EXYNOS4_GPF0(3)
#define GPIO_GSENSE_SDA_18V	EXYNOS4_GPD1(2)
#define GPIO_GSENSE_SCL_18V	EXYNOS4_GPD1(3)

#define GPIO_MSENSOR_INT	EXYNOS4212_GPJ0(7)
#define GPIO_MSENSOR_SDA_18V	EXYNOS4_GPY2(4)
#define GPIO_MSENSOR_SCL_18V	EXYNOS4_GPY2(5)

#define GPIO_BENSE_SCL_18V	EXYNOS4_GPY2(3)
#define GPIO_BSENSE_SDA_18V	EXYNOS4_GPY2(2)
#define GPIO_BARO_INT		EXYNOS4_GPF0(5)

#define GPIO_TF_EN		EXYNOS4_GPY2(0)

#define GPIO_NFC_SCL_18V	EXYNOS4_GPD1(1)
#define GPIO_NFC_SDA_18V	EXYNOS4_GPD1(0)
#define GPIO_NFC_SCL_18V_00	EXYNOS4_GPB(3)
#define GPIO_NFC_SDA_18V_00	EXYNOS4_GPB(2)
#define GPIO_NFC_IRQ		EXYNOS4_GPX1(7)
#define GPIO_NFC_EN		EXYNOS4_GPL2(6)
#define GPIO_NFC_FIRMWARE	EXYNOS4_GPL2(7)
#define GPIO_NFC_CLK_REQ	EXYNOS4212_GPM0(0)
/* Sensors & NFC*/

#define GPIO_DET_35		EXYNOS4_GPX0(1)

#define GPIO_MIC_BIAS_EN	EXYNOS4_GPF1(7)
#define GPIO_SUB_MIC_BIAS_EN	EXYNOS4_GPF2(0)

#define GPIO_PMIC_IRQ		EXYNOS4_GPX0(7)
#define GPIO_IF_PMIC_IRQ	EXYNOS4_GPX1(5)

#define GPIO_TSP_INT		EXYNOS4212_GPM2(3)
#define GPIO_TSP_SDA_18V	EXYNOS4_GPA1(2)
#define GPIO_TSP_SCL_18V	EXYNOS4_GPA1(3)

#define GPIO_BT_EN		EXYNOS4_GPL0(6)
#define GPIO_BT_WAKE		EXYNOS4_GPX3(1)
#define GPIO_BT_HOST_WAKE	EXYNOS4_GPX2(6)
#define IRQ_BT_HOST_WAKE	IRQ_EINT(22)

#define GPIO_BT_RXD		EXYNOS4_GPA0(0)
#define GPIO_BT_RXD_AF		2

#define GPIO_BT_TXD		EXYNOS4_GPA0(1)
#define GPIO_BT_TXD_AF		2

#define GPIO_BT_CTS		EXYNOS4_GPA0(2)
#define GPIO_BT_CTS_AF		2

#define GPIO_BT_RTS		EXYNOS4_GPA0(3)
#define GPIO_BT_RTS_AF		2

#define GPIO_GPS_RXD		EXYNOS4_GPA0(4)
#define GPIO_GPS_RXD_AF		2

#define GPIO_GPS_TXD		EXYNOS4_GPA0(5)
#define GPIO_GPS_TXD_AF		2

#define GPIO_GPS_CTS		EXYNOS4_GPA0(6)
#define GPIO_GPS_CTS_AF		2

#define GPIO_GPS_RTS		EXYNOS4_GPA0(7)
#define GPIO_GPS_RTS_AF		2

#define GPIO_FLM_RXD		EXYNOS4_GPA1(4)
#define GPIO_FLM_RXD_AF		2

#define GPIO_FLM_TXD		EXYNOS4_GPA1(5)
#define GPIO_FLM_TXD_AF		2

#ifdef CONFIG_FM34_WE395
#define	GPIO_FM34_PWDN		EXYNOS4_GPL0(3)
#define	GPIO_FM34_RESET		EXYNOS4_GPL0(1)
#define	GPIO_FM34_BYPASS	EXYNOS4_GPL0(2)
#define	GPIO_FM34_RESET_05	EXYNOS4_GPY1(3)
#define	GPIO_FM34_BYPASS_05	EXYNOS4_GPY1(2)
#define GPIO_FM34_SCL		EXYNOS4212_GPM4(0)
#define GPIO_FM34_SDA		EXYNOS4212_GPM4(1)
#endif

#define GPIO_3_TOUCH_SCL	EXYNOS4_GPL0(1)
#define GPIO_3_TOUCH_SDA	EXYNOS4_GPL0(2)


#define GPIO_HDMI_EN		EXYNOS4_GPL0(4)

#define GPIO_3_TOUCH_INT	EXYNOS4212_GPJ0(3)
#define GPIO_OK_KEY_ANDROID	EXYNOS4_GPX0(1)
#define GPIO_3_TOUCH_EN	EXYNOS4212_GPM0(0)
#if defined(CONFIG_MACH_C1_KOR_LGT)
#define GPIO_3_TOUCH_LDO_EN EXYNOS4212_GPM3(4)
#endif

#define GPIO_PWM0		EXYNOS4_GPD0(0)
#define GPIO_PWM1		EXYNOS4_GPD0(1)
#define GPIO_PWM2		EXYNOS4_GPD0(2)
#define GPIO_PWM3		EXYNOS4_GPD0(3)

#define GPIO_VIBTONE_EN		EXYNOS4212_GPJ0(6)

#define GPIO_WLAN_EN		EXYNOS4212_GPJ0(0)
#define GPIO_WLAN_EN_AF		1
#define GPIO_WLAN_HOST_WAKE	EXYNOS4_GPX2(5)
#define GPIO_WLAN_HOST_WAKE_AF	0xF
#define GPIO_WLAN_SDIO_CLK	EXYNOS4_GPK3(0)
#define GPIO_WLAN_SDIO_CLK_AF	2
#define GPIO_WLAN_SDIO_CMD	EXYNOS4_GPK3(1)
#define GPIO_WLAN_SDIO_CMD_AF	2
#define GPIO_WLAN_SDIO_D0	EXYNOS4_GPK3(3)
#define GPIO_WLAN_SDIO_D0_AF	2
#define GPIO_WLAN_SDIO_D1	EXYNOS4_GPK3(4)
#define GPIO_WLAN_SDIO_D1_AF	2
#define GPIO_WLAN_SDIO_D2	EXYNOS4_GPK3(5)
#define GPIO_WLAN_SDIO_D2_AF	2
#define GPIO_WLAN_SDIO_D3	EXYNOS4_GPK3(6)
#define GPIO_WLAN_SDIO_D3_AF	2

#define GPIO_USB_SEL		EXYNOS4212_GPJ0(1)

#define GPIO_LCD_22V_EN		EXYNOS4212_GPM4(4)
#define GPIO_LCD_22V_EN_00	EXYNOS4_GPC0(1)

#define GPIO_ISP_TXD		EXYNOS4212_GPM4(5)
#define GPIO_ISP_RXD		EXYNOS4212_GPM4(6)

#define GPIO_TA_EN		EXYNOS4_GPL2(2)

#if !defined(CONFIG_MACH_C1_KOR_LGT)
#define GPIO_MHL_SEL		EXYNOS4_GPL0(3)
#endif

#define GPIO_MHL_SDA_1_8V	EXYNOS4_GPF0(4)
#define GPIO_MHL_SCL_1_8V	EXYNOS4_GPF0(6)
#define GPIO_MHL_SDA_1_8V_00	EXYNOS4_GPB(2)
#define GPIO_MHL_SCL_1_8V_00	EXYNOS4_GPB(3)

#define GPIO_OTG_EN		EXYNOS4_GPF0(7)

#define GPIO_OLED_ID		EXYNOS4_GPF1(0)
#define GPIO_ISP_RESET		EXYNOS4_GPF1(3)
#define GPIO_FUEL_SCL		EXYNOS4_GPF1(4)
#define GPIO_FUEL_SDA		EXYNOS4_GPF1(5)

#define GPIO_MLCD_RST		EXYNOS4_GPF2(1)
#define GPIO_UART_SEL		EXYNOS4_GPF2(3)
#if defined(CONFIG_MACH_C1_KOR_LGT)
#define GPIO_LTE_VIA_UART_SEL	EXYNOS4212_GPJ0(6)
#endif
#define GPIO_S_LED_I2C_SCL	EXYNOS4_GPF2(6)
#define GPIO_S_LED_I2C_SDA	EXYNOS4_GPF2(7)
#define GPIO_OLED_DET		EXYNOS4_GPF3(0)

#define GPIO_PMIC_DVS1		EXYNOS4212_GPM3(0)
#define GPIO_PMIC_DVS2		EXYNOS4212_GPM3(1)

/* Definitions for Sii 9244B0 */
#define GPIO_PMIC_DVS3		EXYNOS4212_GPM3(2)
#define GPIO_BUCK2_SEL		EXYNOS4_GPF3(1)
#define GPIO_BUCK3_SEL		EXYNOS4_GPF3(2)
#define GPIO_BUCK4_SEL		EXYNOS4_GPF3(3)
#define GPIO_MHL_RST		EXYNOS4_GPF3(4)
#define GPIO_MHL_INT		EXYNOS4_GPF3(5)
#define GPIO_MHL_INT_AF		S3C_GPIO_SFN(0xF)
#define GPIO_MHL_WAKE_UP	EXYNOS4212_GPJ1(4)

#define GPIO_RGB_SDA_1_8V	EXYNOS4_GPF0(0)
#define GPIO_RGB_SCL_1_8V	EXYNOS4_GPF0(1)
#define GPIO_RGB_INT		EXYNOS4_GPX2(2)
#define GPIO_VOL_UP		EXYNOS4212_GPJ1(1)
#define GPIO_VOL_DOWN		EXYNOS4212_GPJ1(2)
#define GPIO_VOL_UP_00		EXYNOS4_GPX2(2)
#define GPIO_VOL_DOWN_00	EXYNOS4_GPX3(3)

#define GPIO_CAM_SW_EN		EXYNOS4212_GPJ1(0)
#define GPIO_TORCH_EN		EXYNOS4212_GPJ1(1)
#define GPIO_TORCH_SET		EXYNOS4212_GPJ1(2)

#define GPIO_MHL_DSCL_2_8V	EXYNOS4_GPK1(0)
#define GPIO_MHL_DSDA_2_8V	EXYNOS4_GPK1(2)

#define MHL_INT_IRQ		gpio_to_irq(GPIO_MHL_INT)
#define MHL_WAKEUP_IRQ		gpio_to_irq(GPIO_MHL_WAKE_UP)

#define GPIO_HDMI_CEC		EXYNOS4_GPX3(6)
#define GPIO_HDMI_HPD		EXYNOS4_GPX3(7)

#define GPIO_nPOWER		EXYNOS4_GPX2(7)
#define GPIO_OK_KEY		EXYNOS4_GPX3(5)

#define GPIO_FUEL_ALERT EXYNOS4_GPX2(3)
#define GPIO_V_BUS_INT  EXYNOS4_GPX2(4)
#define GPIO_WPC_INT    EXYNOS4_GPX3(0)

#define GPIO_VIBTONE_PWM	EXYNOS4_GPD0(1)

#define GPIO_CODEC_SDA_18V	EXYNOS4_GPD0(2)
#define GPIO_CODEC_SCL_18V	EXYNOS4_GPD0(3)
#define GPIO_CODEC_SDA_18V_00	EXYNOS4_GPB(0)
#define GPIO_CODEC_SCL_18V_00	EXYNOS4_GPB(1)

#define GPIO_CODEC_LDO_EN	EXYNOS4212_GPJ0(4)

#define GPIO_WM8994_LDO		EXYNOS4212_GPJ0(4)

/* Definitions for DPRAM */
#define GPIO_DPRAM_CSN		EXYNOS4_GPY0(0)
#define GPIO_DPRAM_CSN0		EXYNOS4_GPY0(0)
#define GPIO_DPRAM_CSN1		EXYNOS4_GPY0(1)
#define GPIO_DPRAM_CSN2		EXYNOS4_GPY0(2)
#define GPIO_DPRAM_CSN3		EXYNOS4_GPY0(3)
#define GPIO_DPRAM_REN		EXYNOS4_GPY0(4)
#define GPIO_DPRAM_WEN		EXYNOS4_GPY0(5)
#define GPIO_DPRAM_LBN		EXYNOS4_GPY1(0)
#define GPIO_DPRAM_UBN		EXYNOS4_GPY1(1)
#define GPIO_SROM_ADDR_BUS_LOW	EXYNOS4_GPY3(0)
#define GPIO_SROM_ADDR_BUS_HIGH	EXYNOS4_GPY4(0)
#define GPIO_SROM_DATA_BUS_LOW	EXYNOS4_GPY5(0)
#define GPIO_SROM_DATA_BUS_HIGH	EXYNOS4_GPY6(0)

/* Definitions for CMC221 */
#define CP_CMC221_PMIC_PWRON	EXYNOS4_GPL2(5)
#define CP_CMC221_CPU_RST	EXYNOS4_GPL2(4)

#define GPIO_LTE_ACTIVE		EXYNOS4_GPX1(6)
#define LTE_ACTIVE_IRQ		IRQ_EINT(14)	/* IRQ of GPX1[6] */

#if defined(CONFIG_MACH_C1_KOR_LGT)
#define GPIO_CMC_IDPRAM_INT_00	EXYNOS4_GPX3(3)
#define CMC_IDPRAM_INT_IRQ_00	IRQ_EINT(27)	/* IRQ of GPX3[3] */
#else
#define GPIO_CMC_IDPRAM_INT_00	EXYNOS4_GPX2(0)
#define CMC_IDPRAM_INT_IRQ_00	IRQ_EINT(16)	/* IRQ of GPX2[0] */
#endif
#define GPIO_CMC_IDPRAM_INT_01	EXYNOS4_GPX2(0)
#define CMC_IDPRAM_INT_IRQ_01	IRQ_EINT(16)	/* IRQ of GPX2[0] */

#define GPIO_CMC_IDPRAM_STATUS	EXYNOS4_GPX0(5)
#define GPIO_CMC_IDPRAM_WAKEUP	EXYNOS4_GPX3(2)

#define GPIO_ACTIVE_STATE	EXYNOS4_GPF1(1)
#define GPIO_IPC_SLAVE_WAKEUP	EXYNOS4_GPX1(0)
#define GPIO_IPC_HOST_WAKEUP	EXYNOS4_GPX1(1)

#define GPIO_AP2CMC_INT2	EXYNOS4_GPX1(2)
#define GPIO_CMC_SPI_CLK_REQ	EXYNOS4212_GPM3(6)

/* Definitions for an USB HUB for CMC221 */
#define GPIO_USB_HUB_RST	EXYNOS4_GPL0(0)
#define GPIO_USB_HUB_SCL	EXYNOS4_GPL1(0)
#define GPIO_USB_HUB_SDA	EXYNOS4_GPL1(1)
#define GPIO_USB_HUB_INT	EXYNOS4_GPX2(1)

/* Definitions for PDA_ACTIVE for CMC221 & CBP7.2 */
#define GPIO_PDA_ACTIVE		EXYNOS4_GPF1(6)

#if defined(CONFIG_MACH_C1_KOR_LGT)
/* Definitions for CBP7.2 */
#define GPIO_CBP_PMIC_PWRON	EXYNOS4212_GPM0(6)
#define GPIO_CBP_PS_HOLD_OFF	EXYNOS4212_GPM1(0)
#define GPIO_CBP_CP_RST		EXYNOS4_GPF2(4)

#define GPIO_CBP_PHONE_ACTIVE	EXYNOS4_GPX1(3)
#define CBP_PHONE_ACTIVE_IRQ	IRQ_EINT(11)

#define GPIO_CBP_DPRAM_INT_00	EXYNOS4_GPX2(0)
#define CBP_DPRAM_INT_IRQ_00	IRQ_EINT(16)	/* IRQ of GPX2[0] */
#define GPIO_CBP_DPRAM_INT_01	EXYNOS4_GPX3(5)
#define CBP_DPRAM_INT_IRQ_01	IRQ_EINT(29)	/* IRQ of GPX3[5] */

#define GPIO_CBP_BOOT_SEL	EXYNOS4212_GPM0(5)
#endif

#if defined(CONFIG_TDMB) || defined(CONFIG_TDMB_MODULE)
#if defined(CONFIG_MACH_C1_KOR_LGT)
#define GPIO_TDMB_EN		EXYNOS4_GPC0(0)
#else
#define GPIO_TDMB_EN		EXYNOS4_GPC0(2)
#endif
#define GPIO_TDMB_INT		EXYNOS4_GPC0(4)
#define GPIO_TDMB_IRQ		gpio_to_irq(GPIO_TDMB_INT)
#define GPIO_TDMB_INT_AF	0xf
#define GPIO_TDMB_SPI_CLK	EXYNOS4_GPC1(1)
#define GPIO_TDMB_SPI_CS	EXYNOS4_GPC1(2)
#define GPIO_TDMB_SPI_MISO	EXYNOS4_GPC1(3)
#define GPIO_TDMB_SPI_MOSI	EXYNOS4_GPC1(4)
#endif

#endif /* __MACH_GPIO_C1KOR_H */
