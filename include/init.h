/*
 * init.h -- init param header
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */



#ifndef INIT_H
#define INIT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "config.h"

typedef struct
{
	int iOpcode;
	int rgiOperand[3];
} inst_entry;

extern int rgiReg[I_REG_MAX];
extern float rgfReg[FP_REG_MAX];

void get_memory_locations(FILE *fpAsm);
void init_registers(FILE *fpFReg, FILE *fpIReg);
inst_entry inst_fetch(int iAddr, FILE *fpAsm);

#endif