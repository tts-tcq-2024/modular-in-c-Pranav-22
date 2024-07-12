#ifndef TC_CABLE_PAIR_COLOR_CODE_H
#define TC_CABLE_PAIR_COLOR_CODE_H

typedef enum MajorColor 
{WHITE,
RED,
BLACK,
YELLOW,
VIOLET} cable_major_color;

typedef enum MinorColor 
{BLUE,
ORANGE, 
GREEN, 
BROWN, 
SLATE}cable_minor_color;

const int MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    cable_major_color majorColor;
    cable_minor_color minorColor;
} ColorPair;


const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

#endif
