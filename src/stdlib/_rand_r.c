/***********************************************************************
 * SimplixOS Operating System
 *
 * File: lib/libc/src/stdlib/_rand_r.c
 *
 * Description:
 *      rand_r - pseudo-random number generator
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

/** Pseudo-Random Generator, rand_r
 * The rand_r() function shall compute a sequence of
 * pseudo-random integers in the range [0, {RAND_MAX}].
 * (The value of the {RAND_MAX} macro shall be at least
 * 32767.)
 *
 * @param  seed Value to seed generator.
 * @return      Pseudo-Random integer.
 */
int rand_r(unsigned *seed)
{
	*seed = *seed * 1103515245 + 12345;
	*seed ^= *seed>>11;
	*seed ^= *seed<<7 & 0x9D2C5680;
	*seed ^= *seed<<15 & 0xEFC60000;
	*seed ^= *seed>>18;
	return *seed/2;
}
