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


typedef struct
{
  int cable_num;
  char cable_major[10];
  char cable_minor[10];
}map;

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);

void ColorPairToString(const ColorPair* colorPair, char* buffer);

void cable_pair_mapping_manual(map *map_manual);

void cable_pair_manual_print(map *map_manual);

#endif
