/*
 * AT42QT602240/ATMXT224 Touchscreen driver
 *
 * Copyright (C) 2010 Samsung Electronics Co.Ltd
 * Author: Joonyoung Shim <jy0922.shim@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __LINUX_QT602240_TS_H
#define __LINUX_QT602240_TS_H
#include <linux/i2c-kona.h>

/* Orient */
#define QT602240_NORMAL			0x0
#define QT602240_DIAGONAL		0x1
#define QT602240_HORIZONTAL_FLIP	0x2
#define QT602240_ROTATED_90_COUNTER	0x3
#define QT602240_VERTICAL_FLIP		0x4
#define QT602240_ROTATED_90		0x5
#define QT602240_ROTATED_180		0x6
#define QT602240_DIAGONAL_COUNTER	0x7

/* The platform data for the AT42QT602240/ATMXT224 touchscreen driver */
struct qt602240_platform_data {
	struct i2c_slave_platform_data i2c_pdata;
	unsigned int x_line;
	unsigned int y_line;
	unsigned int x_size;
	unsigned int y_size;
	unsigned int x_min;
	unsigned int y_min;
	unsigned int x_max;
	unsigned int y_max;
	unsigned int max_area;
	unsigned int blen;
	unsigned int threshold;
	unsigned int voltage;
	unsigned char orient;

	int	(*init_platform_hw)(void);
	void (*exit_platform_hw)(void);
};

#endif /* __LINUX_QT602240_TS_H */
