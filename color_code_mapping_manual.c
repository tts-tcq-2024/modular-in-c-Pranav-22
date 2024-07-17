#include <stdio.h>
#include "tc_cable_pair_color_code.h"

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

void cable_pair_manual_print(map *map_manual)
{
    for(int i=0;i<25;i++)
    {
        printf("%d  %s  %s\n",map_manual[i].cable_num,map_manual[i].cable_major,map_manual[i].cable_minor);
    }
}
