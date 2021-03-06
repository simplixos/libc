/***********************************************************************
 * SimplixOS Operating System
 *
 * File: lib/libc/include/assert.h
 *
 * Description:
 *      Verify program assertion.
 *      This file is part of the SimplixOS Kernel LibC.
 *
 * License:
 * SimplixOS Operating System - An experimental operating system.
 * Copyright (C) 2015-17 Aun-Ali Zaidi and its contributors.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 ***********************************************************************/

#ifndef ASSERT_H
#define ASSERT_H

#include <stdio.h>

#define __symbol2value(x)  #x
#define __symbol2string(x) __symbol2value(x)

#ifdef __cplusplus
extern "C" {
#endif

#ifdef NDEBUG
#define assert(ignore) ((void) 0)
#else
#define assert( expression ) ( ( expression ) ? (void) 0 \
       : kprintf( "Assertion failed: " #expression \
                       ", function ", __func__, \
                       ", file " __FILE__ \
                       ", line " __symbol2string( __LINE__ ) \
                       "." ) )
#endif

#ifdef __cplusplus
}
#endif

#endif // ASSERT_H
