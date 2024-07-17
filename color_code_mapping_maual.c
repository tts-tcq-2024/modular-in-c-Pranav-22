#include "tc_cable_pair_color_code.h"

typedef struct
{
  int cable_num;
  char cable_major[10];
  char cable_minor[10];
}map;

void cable_pair_mapping_manual(void)
{
  map map_manual[25];
  ColorPair colorPair;
  for(int i = 1 ; i<=25 ;i++)
  {
    colorPair = GetColorFromPairNumber(i);
    map_manual[i].cable_num = i;
     sprintf(map_manual[i].cable_major,%s,MajorColorNames[colorPair->majorColor]);
     sprintf(map_manual[i].cable_major,%s,MinorColorNames[colorPair->minorColor]);
  }
}
