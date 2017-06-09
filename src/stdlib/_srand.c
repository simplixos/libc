/***********************************************************************
 * SimplixOS Operating System
 *
 * File: lib/libc/src/stdlib/_rand.c
 *
 * Description:
 *      srand - seed pseudo-random number generator
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

/** Pseudo-Random Generator Seeder, srand
 * The srand() function uses the argument as a seed for a
 * new sequence of pseudo-random numbers to be returned by
 * subsequent calls to rand().
 *
 * If srand() is then called with the same seed value, the
 * sequence of pseudo-random numbers shall be repeated. If
 * rand() is called before any calls to srand() are made,
 * the same sequence shall be generated as when srand() is
 * first called with a seed value of 1.
 *
 * @param seed Seed value to set
 */
void srand(unsigned int seed)
{
	if (seed != 0)
		next = seed;
}
