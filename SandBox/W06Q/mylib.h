/*
 * Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * REV09: Thu  8 Apr 04:31:40 WIB 2021
 * REV08: Sun 04 Apr 07:28:09 WIB 2021
 * REV07: Sun 04 Apr 00:11:43 WIB 2021
 * REV06: Sat 03 Apr 11:00:46 WIB 2021
 * REV05: Tue 30 Mar 14:55:36 WIB 2021
 * START: Mon 22 Mar 16:14:36 WIB 2021
 *
# INFO: mylib.h
 */

#define SHAREMEM       "MYTOKEN.bin"
#define BUFFERSIZE     256
#define SSIZE          4
#define STAMPSIZE      11
#define CHMOD          0666
#define CMDSHA1 "echo %s | sha1sum | cut -c1-4 | tr '[:lower:]' '[:upper:]' "
#define MYFLAGS        O_CREAT|O_RDWR
#define MYPROTECTION   PROT_READ|PROT_WRITE
#define MYVISIBILITY   MAP_SHARED

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

typedef           char  Chr;
typedef           char* ChrPtr;
typedef  unsigned char  uChr;
typedef  unsigned char* uChrPtr;
typedef  struct {
    Chr token1;
    int token2;
    Chr token3;
    Chr newline;
} memStruct;
typedef memStruct* memStructPtr;

void            chktoken         (uChrPtr result, uChrPtr token);
memStructPtr createShareMemory(memStructPtr mymap, int memorySize, ChrPtr memoryName);
void            getTimeStamp     (uChrPtr timeStamp);
void            mySHA1           (uChrPtr output, uChrPtr input, int length);
void            pickToken        (uChrPtr result, uChrPtr token);
void            verifyToken      (uChrPtr result, uChrPtr token, uChrPtr input);

