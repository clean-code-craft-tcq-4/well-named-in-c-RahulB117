#include<stdio.h>
#include "common.h"

static const int MAX_COLORPAIR_NAME_CHARS = 16;
const int MAX_COLOR_PAIRS = 25;
void printColorCodingManual(){
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    for(int pairNumber = 1; pairNumber<MAX_COLOR_PAIRS+1;pairNumber++){
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        ColorPairToString(&colorPair, colorPairNames);
        printf("For pairNumber %d\n The Color pair is %s\n", pairNumber, colorPairNames);
    }
}
