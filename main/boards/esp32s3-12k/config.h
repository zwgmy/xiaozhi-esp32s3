// 示例结构，务必替换为你板子的真实引脚
#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_
// 音频配置
#define AUDIO_I2S_GPIO_MCLK GPIO_NUM_xx
#define AUDIO_I2S_GPIO_WS   GPIO_NUM_xx
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_xx
#define AUDIO_I2S_GPIO_DIN  GPIO_NUM_xx
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_xx
// I2C (音频编解码芯片控制)
#define AUDIO_CODEC_I2C_SDA_PIN GPIO_NUM_xx
#define AUDIO_CODEC_I2C_SCL_PIN GPIO_NUM_xx
// 按键
#define BOOT_BUTTON_GPIO GPIO_NUM_xx
// 显示屏 (如果有)
// #define DISPLAY_SPI_SCK_PIN ...
#endif
