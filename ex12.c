/*
 * ex12.c
 * 
 * Copyright 2024 aivars <aivars@aivars-ThinkPad-L530>
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
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

#define PI_NUMBER 3.1415926535897932f

int main(int argc, char **argv)
{
	
	int r;
	
	float volume;
	
	printf("Ievadiet lodes rādiusu: ");
	scanf("%d",&r);
	
	volume=4.0f/3.0f*PI_NUMBER*r*r*r;
	
	printf("Lodes tilpums: %0.2f",volume);
		
	return 0;
}

