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

typedef struct {
    cable_major_color majorColor;
    cable_minor_color minorColor;
} ColorPair;

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);

void ColorPairToString(const ColorPair* colorPair, char* buffer);

#endif
