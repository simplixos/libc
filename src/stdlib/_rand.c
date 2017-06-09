/***********************************************************************
 * SimplixOS Operating System
 *
 * File: lib/libc/src/stdlib/_rand.c
 *
 * Description:
 *      rand - pseudo-random number generator
 *      This file is part of the SimplixOS Kernel LibC.
 *
 * License:
 * SimplixOS Operating System - An experimental operating system.
 * Copyright (C) 2015-17 Aun-Ali Zaidi and its contributors
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

#include <stdlib.h>

#include "rand.h"

/** Pseudo-Random Generator, rand
 * The rand() function shall compute a sequence of
 * pseudo-random integers in the range [0, {RAND_MAX}]
 * with a period of at least 2^32.
 *
 * @return  Next Pseudo-Random number in sequence.
 */
int rand(void)
{
	next = next * 1103515245 + 12345;
	return((unsigned int)(next/65536) % (RAND_MAX));
}
