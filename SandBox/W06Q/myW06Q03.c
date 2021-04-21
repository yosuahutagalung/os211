/*
 * Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: mySetMem.c
 *
 * REV00 Thu  8 Apr 05:04:37 WIB 2021
 * START Thu  8 Apr 05:04:37 WIB 2021
 */

#include "mylib.h"

int main(void) {
    memStructPtr  mymap = createShareMemory(mymap, sizeof(memStruct), SHAREMEM);
    uChr token[BUFFERSIZE];
    sprintf(token, "%c%8.8x%c", mymap->token1, mymap->token2, mymap->token3);
    uChr result[BUFFERSIZE];
    chktoken  (result, token);
    printf("Email ke operatingsystems@vlsm.org/Subject: OS211QUIZ\n");
    printf("ZCZC W06 Q03 %s\n", result);
    printf("\nFYI:\nTOKEN=[%s] ", token);
    printf("(Ini sekedar \"FYI\"/BUKAN BAGIAN DARI QUIZ, YA!)\n");
}

