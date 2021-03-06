/***********************************************************************
 * SimplixOS Operating System
 *
 * File: lib/libc/include/stdlib.h
 *
 * Description:
 *      Standard LibC related functions.
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

#ifndef _K_STDLIB_H
#define _K_STDLIB_H

#include <sys/cdefs.h>

#ifdef __cplusplus
extern "C" {
#endif

__attribute__((__noreturn__))
void abort(void);

/* Pseudo-Random Number Functions */

#define RAND_MAX 32768

int rand(void);
int rand_r(unsigned *seed);
void srand(unsigned int seed);

#ifdef __cplusplus
}
#endif

#endif // _K_STDLIB_H
