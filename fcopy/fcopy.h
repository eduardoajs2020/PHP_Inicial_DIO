/* 
fcopy.h license

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

#ifdef _MSC_VER
#pragma warning(disable: 4996)
#endif

#include <stdio.h>

int fcopy(char *source, char *destination) {
	FILE *sourceFile,
	     *destFile;
	char c;

	
	if( ( sourceFile = fopen(source, "r") ) == NULL )
		return -1;

	if( ( destFile = fopen(destination, "w") ) == NULL ) {
		fclose(sourceFile);
		return 1;
	}

	do {
		c = getc(sourceFile);
	
		if(c == EOF)
			break;

		putc(c, destFile);
	} while(1);

	fclose(sourceFile);
	fclose(destFile);
	
	return 0;
}

int bfcopy(char *source, char *destination) {
	FILE *sourceFile,
	     *destFile;
	char input[512];
	unsigned int bytesRead;

	if( ( sourceFile = fopen(source, "rb") ) == NULL )
		return -1;

	if( ( destFile = fopen(destination, "wb") ) == NULL ) {
		fclose(sourceFile);
		return 1;
	}

	do {
		bytesRead = (int) fread(input, 1, 512, sourceFile);

		if(bytesRead > 0) {
			fwrite(input, 1, bytesRead, destFile);

			if(bytesRead < 512)
				break;

			continue;
		}

		break;
	} while(1);

	fclose(sourceFile);
	fclose(destFile);

	return 0;
}