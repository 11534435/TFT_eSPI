// For sprite only functionality (untested)
// ==============================================
// ESP32-S3-CAM + ST7735 1.8寸 128x160 屏幕专用配置
// ==============================================

// 1. 选择屏幕驱动
#define ST7735_DRIVER      // 定义ST7735驱动
#define ST7735_REDTAB      // 1.8寸128x160屏幕用这个tab
#define TFT_WIDTH  128     // 屏幕宽度
#define TFT_HEIGHT 160     // 屏幕高度

// 2. 屏幕引脚定义（完全避开摄像头，零冲突）
#define TFT_MOSI 47    // VSPI MOSI
#define TFT_SCLK 45    // VSPI SCK
#define TFT_CS   42    // 片选
#define TFT_DC   41    // 数据/命令
#define TFT_RST  40    // 复位
#define TFT_BL   39    // 背光（可选，接3V3常亮可注释）

// 3. SPI配置（稳定优先）
#define SPI_FREQUENCY  27000000  // 27MHz，ST7735黄金稳定频率
#define SPI_READ_FREQUENCY  20000000

// 4. 颜色校正（避免偏色）
#define TFT_RGB_ORDER TFT_BGR
#define TFT_INVERSION_ON

/*
#define TFT_MADCTL  0x00
#define TFT_MAD_MY  0x00
#define TFT_MAD_MX  0x00
#define TFT_MAD_MV  0x00
#define TFT_MAD_ML  0x00
#define TFT_MAD_BGR 0x00
#define TFT_MAD_MH  0x00
#define TFT_MAD_RGB 0x00
*/
#define TFT_INVOFF  0x00
#define TFT_INVON   0x00


#define TFT_MISO -1
#define TFT_MOSI -1
#define TFT_SCLK -1


#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
//#define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT
