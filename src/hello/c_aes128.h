﻿#ifndef C_AES128_H
#define C_AES128_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

	/*
	 * 功能：单向函数 AES128
	 * 输入：1. input ：输入消息
	 *		 2. output：输出结果
	*/
	void crypto_aes128(uint8_t *input, uint32_t inputLen, uint8_t *output);

#ifdef __cplusplus
}
#endif

#endif
