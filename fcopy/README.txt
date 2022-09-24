fcopy.h Documentation

---------------------------------------

fcopy(char *source, char *destination);

Provides a lightning fast method to copy text files

Example:
fcopy("file1.txt", "copy of file1.txt");

---------------------------------------

bfcopy(char *source, char *destination);

Provides a fast method to copy binary files

Example:
bfcopy("contents.tar.gz", "copy of contents.tar.gz");

---------------------------------------

WARNING: This software was only tested under Windows, it doesn't have his efficiency tested under Linux and MacOS
Please forward to durubs@gmail.com if you are able to test on any of these OS
_____________________________________________________________________________________________

fcopy.h License


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