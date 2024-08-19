#include <stdio.h>
#include "telecomm_cable_pair_color_code.h"

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

void cable_pair_mapping_manual(map *map_manual)
{
  ColorPair colorPair_manual;
  for(int i = 0 ; i<25 ;i++)
  {
    colorPair_manual = GetColorFromPairNumber(i+1);
     map_manual[i].cable_num = i+1;
     sprintf(map_manual[i].cable_major,"%s",MajorColorNames[colorPair_manual.majorColor]);
     sprintf(map_manual[i].cable_minor,"%s",MinorColorNames[colorPair_manual.minorColor]);
  }
}
