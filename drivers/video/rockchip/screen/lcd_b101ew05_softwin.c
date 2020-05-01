#ifndef __LCD_B101EW05__
#define __LCD_B101EW05__

#if  defined(CONFIG_RK610_LVDS) 
#include "../transmitter/rk610_lcd.h"
#endif

#define SCREEN_TYPE	    	SCREEN_RGB
#define LVDS_FORMAT      	LVDS_8BIT_2
#define OUT_FACE	    	OUT_D888_P666


#define DCLK	          	50000000
#define LCDC_ACLK         	300000000           //29 lcdc axi DMA ÆµÂÊ

/* Timing */
#define H_PW			1
#define H_BP			160
#define H_VD			1024
#define H_FP			112

#define V_PW			1
#define V_BP			23
#define V_VD			600
#define V_FP			12

#define LCD_WIDTH          	154
#define LCD_HEIGHT         	85
/* Other */
#if  defined(CONFIG_RK610_LVDS) || defined(CONFIG_RK616_LVDS) || defined(CONFIG_RK3026_LVDS)
#define DCLK_POL	1
#else
#define DCLK_POL	0
#endif
#define DEN_POL		0
#define VSYNC_POL	0
#define HSYNC_POL	0

#define SWAP_RB		0
#define SWAP_RG		0
#define SWAP_GB		0

//#define USE_RK_DSP_LUT
int dsp_lut[256] ={
		0x0, 0x10101, 0x30303, 0x40404, 0x50505, 0x60606, 0x70707, 0x80808, 0x90909, 0xa0a0a, 0xb0b0b,
		0xc0c0c, 0xd0d0d, 0xf0f0f, 0x101010, 0x111111, 0x121212, 0x131313, 0x141414, 0x151515, 0x161616,
		0x171717, 0x181818, 0x191919, 0x1a1a1a, 0x1b1b1b, 0x1c1c1c, 0x1d1d1d, 0x1e1e1e, 0x1f1f1f, 0x202020,
		0x212121, 0x222222, 0x232323, 0x242424, 0x252525, 0x262626, 0x272727, 0x282828, 0x292929, 0x2a2a2a,
		0x2b2b2b, 0x2c2c2c, 0x2d2d2d, 0x2e2e2e, 0x2f2f2f, 0x303030, 0x313131, 0x323232, 0x333333, 0x343434,
		0x353535, 0x363636, 0x373737, 0x383838, 0x393939, 0x3a3a3a, 0x3b3b3b, 0x3c3c3c, 0x3d3d3d, 0x3e3e3e,
		0x3f3f3f, 0x404040, 0x414141, 0x424242, 0x434343, 0x444444, 0x454545, 0x464646, 0x474747, 0x484848,
		0x494949, 0x4a4a4a, 0x4b4b4b, 0x4c4c4c, 0x4d4d4d, 0x4e4e4e, 0x4f4f4f, 0x505050, 0x515151, 0x525252,
		0x535353, 0x545454, 0x555555, 0x565656, 0x575757, 0x585858, 0x595959, 0x5a5a5a, 0x5b5b5b, 0x5c5c5c,
		0x5d5d5d, 0x5d5d5d, 0x5f5f5f, 0x5f5f5f, 0x606060, 0x616161, 0x626262, 0x636363, 0x646464, 0x656565,
		0x666666, 0x676767, 0x686868, 0x696969, 0x6a6a6a, 0x6b6b6b, 0x6c6c6c, 0x6d6d6d, 0x6e6e6e, 0x6f6f6f,
		0x707070, 0x717171, 0x727272, 0x737373, 0x747474, 0x757575, 0x757575, 0x767676, 0x777777, 0x787878,
		0x797979, 0x7a7a7a, 0x7b7b7b, 0x7c7c7c, 0x7d7d7d, 0x7e7e7e, 0x7f7f7f, 0x808080, 0x818181, 0x828282,
		0x838383, 0x848484, 0x858585, 0x868686, 0x878787, 0x888888, 0x888888, 0x8a8a8a, 0x8a8a8a, 0x8b8b8b,
		0x8c8c8c, 0x8d8d8d, 0x8e8e8e, 0x8f8f8f, 0x909090, 0x919191, 0x929292, 0x939393, 0x949494, 0x959595,
		0x969696, 0x979797, 0x989898, 0x999999, 0x9a9a9a, 0x9b9b9b, 0x9c9c9c, 0x9d9d9d, 0x9e9e9e, 0x9f9f9f,
		0xa0a0a0, 0xa1a1a1, 0xa1a1a1, 0xa3a3a3, 0xa3a3a3, 0xa4a4a4, 0xa5a5a5, 0xa6a6a6, 0xa7a7a7, 0xa8a8a8,
		0xa9a9a9, 0xaaaaaa, 0xababab, 0xacacac, 0xadadad, 0xaeaeae, 0xafafaf, 0xb0b0b0, 0xb1b1b1, 0xb2b2b2,
		0xb3b3b3, 0xb4b4b4, 0xb5b5b5, 0xb6b6b6, 0xb7b7b7, 0xb8b8b8, 0xb9b9b9, 0xbababa, 0xbbbbbb, 0xbcbcbc,
		0xbdbdbd, 0xbebebe, 0xbfbfbf, 0xc0c0c0, 0xc1c1c1, 0xc1c1c1, 0xc3c3c3, 0xc4c4c4, 0xc4c4c4, 0xc6c6c6,
		0xc7c7c7, 0xc7c7c7, 0xc9c9c9, 0xc9c9c9, 0xcbcbcb, 0xcccccc, 0xcdcdcd, 0xcecece, 0xcfcfcf, 0xd0d0d0,
		0xd1d1d1, 0xd2d2d2, 0xd3d3d3, 0xd3d3d3, 0xd5d5d5, 0xd5d5d5, 0xd7d7d7, 0xd8d8d8, 0xd8d8d8, 0xdadada,
		0xdbdbdb, 0xdcdcdc, 0xdddddd, 0xdedede, 0xdfdfdf, 0xe0e0e0, 0xe1e1e1, 0xe1e1e1, 0xe3e3e3, 0xe4e4e4,
		0xe5e5e5, 0xe6e6e6, 0xe7e7e7, 0xe8e8e8, 0xe9e9e9, 0xeaeaea, 0xececec, 0xececec, 0xededed, 0xeeeeee,
		0xefefef, 0xf1f1f1, 0xf2f2f2, 0xf3f3f3, 0xf3f3f3, 0xf4f4f4, 0xf6f6f6, 0xf7f7f7, 0xf8f8f8, 0xf9f9f9,
		0xfafafa, 0xfbfbfb, 0xfdfdfd, 0xfefefe, 0xffffff, 
};

// if we use one lcdc with jetta for dual display,we need these configration
#if  defined(CONFIG_ONE_LCDC_DUAL_OUTPUT_INF)

/* scaler Timing    */
//1920*1080*60

#if defined(CONFIG_RK610_LVDS)
#define S_DCLK_POL       1
#define S_OUT_CLK		SCALE_RATE(148500000,74250000) //m=16 n=9 no=4
#define S_H_PW			48
#define S_H_BP			98
#define S_H_VD			1280
#define S_H_FP			59

#define S_V_PW			6
#define S_V_BP			25
#define S_V_VD			800
#define S_V_FP			2

#define S_H_ST			495
#define S_V_ST			2
#endif


#if defined(CONFIG_RK616_LVDS)
#define S_PLL_CFG_VAL		0x01443013
#define S_FRAC			0xa6c9b2
#define S_SCL_VST		0x009
#define S_SCL_HST		0x1b7
#define S_VIF_VST		0x1
#define S_VIF_HST		0xcf
#endif

//1920*1080*50
#if defined(CONFIG_RK610_LVDS)
#define S1_OUT_CLK		SCALE_RATE(148500000,57375000)  //m=17 n=11 no=4 
#define S1_H_PW			10
#define S1_H_BP			10
#define S1_H_VD			1280
#define S1_H_FP			77

#define S1_V_PW			10
#define S1_V_BP			10
#define S1_V_VD			800
#define S1_V_FP			13

#define S1_H_ST			459
#define S1_V_ST			13
#endif

#if defined(CONFIG_RK616_LVDS)
#define S1_PLL_CFG_VAL		0x01843013
#define S1_FRAC			0xa6c9b2
#define S1_SCL_VST		0x009
#define S1_SCL_HST		0x20f
#define S1_VIF_VST		0x1
#define S1_VIF_HST		0xcf
#endif

//1280*720*60
#if defined(CONFIG_RK610_LVDS)
#define S2_OUT_CLK		SCALE_RATE(74250000,74250000)  //m=32 n=9 no=4
#define S2_H_PW			48
#define S2_H_BP			98
#define S2_H_VD			1280
#define S2_H_FP			59

#define S2_V_PW			6
#define S2_V_BP			25
#define S2_V_VD			800
#define S2_V_FP			2

#define S2_H_ST			495
#define S2_V_ST			5
#endif

//bellow are for jettaB
#if defined(CONFIG_RK616_LVDS)
#define S2_PLL_CFG_VAL		0x01423013
#define S2_FRAC			0xa6c9b2
#define S2_SCL_VST		0x006
#define S2_SCL_HST		0x527
#define S2_VIF_VST		0x1
#define S2_VIF_HST		0xcf
#endif

//1280*720*50
#if defined(CONFIG_RK610_LVDS)
#define S3_OUT_CLK		SCALE_RATE(74250000,67500000)   // m=34 n=11 no=4
#define S3_H_PW			48
#define S3_H_BP			233
#define S3_H_VD			1280
#define S3_H_FP			59

#define S3_V_PW			6
#define S3_V_BP			25
#define S3_V_VD			800
#define S3_V_FP			2

#define S3_H_ST			540
#define S3_V_ST			3
#endif

#if defined(CONFIG_RK616_LVDS)
#define S3_PLL_CFG_VAL		0x01823013
#define S3_FRAC			0xa6c9b2
#define S3_SCL_VST		0x006
#define S3_SCL_HST		0x62f
#define S3_VIF_VST		0x1
#define S3_VIF_HST		0xcf
#endif

//720*576*50
#if defined(CONFIG_RK610_LVDS)
#define S4_OUT_CLK		SCALE_RATE(27000000,70312500)  //m=75 n=4 no=8
#define S4_H_PW			48
#define S4_H_BP			233
#define S4_H_VD			1280
#define S4_H_FP			59

#define S4_V_PW			9
#define S4_V_BP			57
#define S4_V_VD			800
#define S4_V_FP			2

#define S4_H_ST			90
#define S4_V_ST			2
#endif

#if defined(CONFIG_RK616_LVDS)
#define S4_PLL_CFG_VAL		0x01c12015
#define S4_FRAC			0xe45213
#define S4_SCL_VST		0x01e
#define S4_SCL_HST		0x2d5
#define S4_VIF_VST		0x1
#define S4_VIF_HST		0xcf
#endif

//720*480*60
#if defined(CONFIG_RK610_LVDS)
#define S5_OUT_CLK		SCALE_RATE(27000000,75000000)  //m=100 n=9 no=4
#define S5_H_PW			48
#define S5_H_BP			86
#define S5_H_VD			1280
#define S5_H_FP			16

#define S5_V_PW			9
#define S5_V_BP			35
#define S5_V_VD			800
#define S5_V_FP			30

#define S5_H_ST			476
#define S5_V_ST			12
#endif
#if defined(CONFIG_RK616_LVDS)

#define S5_PLL_CFG_VAL		0x01812016
#define S5_FRAC			0xacc155
#define S5_SCL_VST		0x01a
#define S5_SCL_HST		0x0ab
#define S5_VIF_VST		0x1
#define S5_VIF_HST		0xcf
#endif

#endif
#endif



