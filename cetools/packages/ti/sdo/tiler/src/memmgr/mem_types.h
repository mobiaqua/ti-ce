/*
 *  Copyright 2013 by Texas Instruments Incorporated.
 *
 */

/*
 *  Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see
 */

/*
 * types.h
 *
 * Type definitions for the Memory Interface for TI OMAP processors.
 */

#ifndef _MEM_TYPES_H_
#define _MEM_TYPES_H_

/* for bool definition */
#ifndef __cplusplus
typedef unsigned int bool;
#endif
#include <stdint.h>

/** ---------------------------------------------------------------------------
 * Type definitions
 */

/**
 * Buffer length in bytes
 */
typedef uint32_t bytes_t;

/**
 * Length in pixels
 */
typedef uint16_t pixels_t;


/**
 * Pixel format
 *
 * Page mode is encoded in the pixel format to handle different
 * set of buffers uniformly
 */
enum pixel_fmt_t {
    PIXEL_FMT_MIN   = 0,
    PIXEL_FMT_8BIT  = 0,
    PIXEL_FMT_16BIT = 1,
    PIXEL_FMT_32BIT = 2,
    PIXEL_FMT_PAGE  = 3,
    PIXEL_FMT_MAX   = 3
};

typedef enum pixel_fmt_t pixel_fmt_t;

/**
 * Ducati Space Virtual Address Pointer
 *
 * This is handled as a unsigned long so that no dereferencing
 * is allowed by user space components.
 */
typedef uint32_t DSPtr;

/**
 * System Space Pointer
 *
 * This is handled as a unsigned long so that no dereferencing
 * is allowed by user space components.
 */
typedef uint32_t SSPtr;

/**
 * Error values
 *
 * Page mode is encoded in the pixel format to handle different
 * set of buffers uniformly
 */
#define MEMMGR_ERR_NONE    0
#define MEMMGR_ERR_GENERIC 1

#endif

/*
 *  @(#) ti.sdo.tiler; 1, 0, 0,1; 6-12-2013 19:58:27; /db/atree/library/trees/fc/fc-t09/src/ xlibrary

 */

