/*
 * ssd1306.h
 *
 *  Created on: 23-Apr-2018
 *      Author: blackfly
 */

#ifndef OLED_SSD1306_H_
#define OLED_SSD1306_H_

#define SSD1306_LCDWIDTH                128
#define SSD1306_LCDHEIGHT               64
#define SSD1306_SETCONTRAST             0x81
#define SSD1306_DISPLAYALLON_RESUME     0xA4
#define SSD1306_DISPLAYALLON            0xA5
#define SSD1306_NORMALDISPLAY           0xA6
#define SSD1306_INVERTDISPLAY           0xA7
#define SSD1306_DISPLAYOFF              0xAE
#define SSD1306_DISPLAYON               0xAF
#define SSD1306_SETDISPLAYOFFSET        0xD3
#define SSD1306_SETCOMPINS              0xDA
#define SSD1306_SETVCOMDETECT           0xDB
#define SSD1306_SETDISPLAYCLOCKDIV      0xD5
#define SSD1306_SETPRECHARGE            0xD9
#define SSD1306_SETMULTIPLEX            0xA8
#define SSD1306_SETLOWCOLUMN            0x00
#define SSD1306_SETHIGHCOLUMN           0x10
#define SSD1306_SETSTARTLINE            0x40
#define SSD1306_MEMORYMODE              0x20
#define SSD1306_COLUMNADDR              0x21
#define SSD1306_PAGEADDR                0x22
#define SSD1306_COMSCANINC              0xC0
#define SSD1306_COMSCANDEC              0xC8
#define SSD1306_SEGREMAP                0xA0
#define SSD1306_CHARGEPUMP              0x8D
#define SSD1306_EXTERNALVCC             0x1
#define SSD1306_SWITCHCAPVCC            0x2

I2C_Handle      i2c;
I2C_Params      i2cParams;
I2C_Transaction i2cTransaction;

extern void ssd_dat(uint8_t);
extern void ssd_cmd(uint8_t);


#endif /* OLED_SSD1306_H_ */
