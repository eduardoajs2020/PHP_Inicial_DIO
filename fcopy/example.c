/* 
example.c license

Copyright (c) 2008 Thiago Silveira <durubs at gmail dot com>

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
    claim that you wrote the original software. If you use this software
    in a product, an acknowledgment in the product documentation would be
    appreciated but is not required.

    2. Altered source versions must be plainly marked as such, and must not be
    misrepresented as being the original software.
*/

#include <stdio.h>
#include "fcopy.h"

int main(void) {
	printf("Testing fcopy..\n");
	switch(fcopy("file.txt", "copy of file.txt")) {
		case -1:
			printf("Error opening file.txt");
			break;
		case 0:
			printf("Success!");
			break;
		case 1:
			printf("Error opening/creating copy of file.txt");
	}

	return 0;
}