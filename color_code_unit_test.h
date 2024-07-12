#ifndef COLOR_CODE_UNIT_TEST_H
#define COLOR_CODE_UNIT_TEST_H

#include "tc_cable_pair_color_code.h"

const int MAX_COLORPAIR_NAME_CHARS = 16;

void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);

#endif
