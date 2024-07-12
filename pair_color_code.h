#ifndef PAIR_COLOR_CODE_H
#define PAIR_COLOR_CODE_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const int MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#endif
