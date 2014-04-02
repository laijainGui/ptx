/*
 * DVB driver for Earthsoft PT3 ISDB-S/T PCI-E card
 *
 * Copyright (C) 2013 Budi Rachmanto, AreMa Inc. <info@are.ma>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef	__PT3_I2C_H__
#define	__PT3_I2C_H__

#include "pt3_common.h"

void pt3_i2c_reset(struct pt3_board *pt3);
int pt3_i2c_add_adapter(struct pt3_board *pt3);

#endif
