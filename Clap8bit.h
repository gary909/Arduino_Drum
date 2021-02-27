#ifndef CLAP01_H_
#define CLAP01_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define CLAP01_NUM_CELLS 5499
#define CLAP01_SAMPLERATE 16384
 
CONSTTABLE_STORAGE(int8_t) CLAP01_DATA [] = {10, 19, 7, 38, 39, -1, 7, -6, -48,
-25, -10, -1, 1, -18, -25, -30, -13, -13, -7, -3, 8, 13, 12, 27, 22, 19, 2, -5,
-11, -1, 1, -2, 3, -1, 3, -9, -18, -20, -12, -8, -1, 7, 12, 6, 4, 11, 11, 8, 3,
-2, -5, -6, -10, -12, -8, -2, 1, -2, -6, 2, 4, 3, 7, 9, 4, 0, -1, -2, -3, -4,
-8, -5, -1, -1, 2, -2, -4, -1, 0, 2, 5, 4, 1, 0, -3, -3, -3, -1, 0, 0, -2, -1,
1, -2, -1, 1, 1, 0, 2, 2, 1, 0, -2, -1, -3, -2, 0, 0, 0, -1, -1, -1, -2, -1, -1,
0, 0, 1, 1, 2, 1, 1, 0, -1, -2, -1, 0, -2, -1, -2, -1, -1, -2, 0, 1, -1, -1, 0,
0, 1, 0, -1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0,
-1, -1, -2, -1, -2, -1, -2, -1, -1, 1, 0, 2, -4, -11, 12, 20, 65, 39, -16, -21,
-31, -18, -29, -31, -16, 6, 8, 1, -8, -3, 14, 9, 20, 25, 6, -10, -15, -19, -24,
-12, -1, 2, 12, 11, 14, -6, -4, 5, -5, -1, 2, 1, 0, 1, -1, -2, 5, 11, 1, -3, -6,
-16, -13, 0, 1, 5, 11, 6, 3, 1, 5, 1, -1, -2, -7, -11, -8, -8, -7, -2, 0, 5, 3,
2, 4, 9, 8, 3, -4, -8, -3, -3, -3, 2, 8, 3, -2, -3, -1, 0, 2, 0, -2, -1, -2, 0,
-1, -2, -2, -2, -1, 2, 1, -4, -3, 0, 1, 1, 2, 3, 1, -1, 0, -3, -3, -2, -2, -2,
-1, 1, 1, 3, 2, 0, 3, 1, 0, -1, -2, -2, -1, -1, -1, -2, -3, -2, -1, 0, 1, 2, 1,
0, -1, -1, -1, 0, 0, 0, -1, -2, -2, -2, -1, 0, 0, 1, 2, 1, 1, 1, 1, 0, -2, -1,
-1, -1, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, -1, 0, -2, -1,
-2, 0, -2, 1, -2, 2, -18, -7, 23, 30, 64, 3, -34, -48, -42, -19, -20, 1, 0, 18,
22, 27, 23, 17, 8, -2, -22, -24, -9, -6, 9, 5, -7, 7, 13, -1, -10, -26, -20,
-19, -11, -7, 3, 14, 19, 22, 21, 13, 1, 6, 0, -1, -3, -12, -23, -16, -14, -5, 1,
-1, 13, 12, 9, 5, -2, -5, -5, 2, -3, -6, 2, 10, 12, -3, -10, -4, -6, -9, 2, 1,
-3, 3, 6, 7, 6, 0, -6, -12, -12, -5, -3, 2, 6, 8, 4, 2, -1, -3, -5, -6, -5, -1,
3, 1, 3, 3, 1, 2, 1, 0, 0, -4, -3, -2, 1, 0, -1, 1, 0, -1, -1, -4, -4, -2, -2,
-1, 0, -1, 0, 0, 1, 2, 2, 2, 2, 3, 2, 2, 2, 0, -3, -2, -4, -4, -2, -1, 0, -1,
-2, -1, -1, -2, 1, -9, -41, -21, 38, 32, 23, 10, -6, 1, -6, -16, -8, -1, -3, 0,
8, 9, 0, 1, 5, -14, -16, -7, -17, -7, -4, 10, 16, 13, 15, 11, -1, -6, -1, -8,
-2, -1, 3, -3, -11, -21, -13, -12, -6, 6, 0, 19, 19, 20, 12, -1, -2, -11, -7,
-6, -6, -6, -5, -5, -10, 5, 5, -5, -5, 1, 14, 11, 7, 5, 0, -3, -3, 3, 8, -2,
-12, -21, -25, -18, -7, -2, 5, 4, 3, 17, 14, 12, 16, 13, 5, 1, 4, -6, -19, -20,
-14, -13, -8, 3, 8, 15, 17, 11, 1, -9, -10, -16, -18, -12, 2, -4, -2, 8, 18, 20,
13, 16, 0, -3, -5, -16, -19, -5, 1, 6, 12, 4, -4, -8, -11, -18, -13, -6, -4, 0,
18, 18, 12, 9, 3, 3, 1, 1, -1, -4, -8, -7, -15, -17, -13, -4, 2, 2, -2, 3, 11,
10, 19, 9, -1, 0, -3, -2, -5, -10, -2, 3, 0, -2, -10, -13, -5, 7, 11, 4, 2, 3,
-1, -2, -1, -10, -5, 0, 5, 7, -2, 2, -4, -11, -6, 0, -1, -2, 3, 10, 6, 1, 5, 3,
0, -2, -9, -11, -7, 0, 2, 4, 6, 1, -4, -8, -5, -1, -2, -1, 5, 3, 3, 2, 1, -2, 0,
3, -2, 1, 4, 1, -9, -9, -4, -5, 5, 7, -2, -4, 1, -3, 3, 3, -5, 0, 3, 4, 2, -3,
-1, 1, -7, -8, -3, -2, -3, 1, 1, 5, 5, 0, 1, 3, 1, -2, -5, -6, -3, -6, 0, 3, 2,
1, 6, 1, 1, 6, -2, -4, -4, -3, -5, 0, 1, -2, 0, 5, -1, -5, -2, -1, 2, -2, -2, 2,
3, -4, -3, -5, -1, 1, 1, 6, 2, 1, -1, -2, -4, -3, 2, 2, -2, -4, -3, 0, 0, -1, 3,
3, -2, -1, -1, -2, -1, -5, -1, 3, 3, 0, -1, -2, -4, -1, -3, -4, -2, 2, 1, -1, 2,
3, 2, 1, -3, -9, -9, -3, -2, 2, 7, 9, 7, 5, 1, -4, -6, -3, -1, -4, -3, -1, 2,
-1, -6, -4, -2, -1, 2, 4, 8, 6, 0, -4, -4, -4, -3, -1, -7, -6, -5, -1, -1, 1, 5,
2, 3, 3, 2, 4, 3, -2, -3, -5, -4, -2, 0, -2, -5, -3, -1, 2, -1, 0, 4, 4, 4, 2,
0, -2, -7, -4, -4, -4, -1, -1, 1, 0, -2, 2, 4, 0, 0, 1, 1, 0, -2, -4, -4, -4,
-5, -6, -3, -2, -1, 3, 4, 1, -1, -3, -2, 1, 0, 2, 5, 6, 3, -2, -2, -1, -1, -2,
-3, -2, -1, -1, -3, -3, 0, -1, 0, 3, 2, 1, -1, -1, 1, 0, 3, 1, -1, -3, -4, -4,
-5, -3, -1, -3, -1, 0, -1, 0, 3, 4, 1, -3, -4, -4, -1, 1, -2, 0, 0, 2, 2, 2, 2,
3, 1, 0, 1, -2, -3, -3, -3, -6, -7, -5, -3, 0, 2, 4, 3, 0, 2, 3, 1, -1, -1, 0,
0, -4, -7, -4, -3, 0, 2, 3, 4, 3, 0, -1, -1, -2, 0, 1, -3, -4, -3, -1, 0, 2, 2,
0, 0, 2, 1, -2, -3, -4, -4, -4, -4, -6, -4, -3, -1, 0, 0, 1, 3, 5, 5, 5, 3, 3,
2, 0, -2, -2, -3, -4, -2, -4, -2, -3, -5, -1, 1, 2, 2, 0, 0, -3, -2, -2, -3, 0,
2, 4, 0, -2, 1, 0, -1, 1, 2, -1, -2, -1, -1, -2, -2, -1, -1, -1, 1, 1, 0, -1,
-2, -4, -4, -3, -2, 0, 1, 2, 3, 2, 0, 0, -2, -3, -4, -5, -3, -1, 0, 1, 1, 1, -1,
-3, -3, -3, -3, -1, 0, 1, 2, 1, 0, 0, 0, 1, -1, 0, 2, 2, 0, 0, 0, 0, -1, -3, -4,
-5, -3, -3, -2, 2, 2, 1, 2, 2, 1, 1, -1, -2, -2, -3, -4, -3, -2, 0, 0, 0, 1, 2,
3, 2, 2, 1, -1, -4, -6, -5, -4, -2, -1, 1, 2, 2, 3, 2, 2, 1, 0, 0, -2, -3, -3,
-4, -4, -2, -2, -1, 0, 2, 1, -1, -2, -3, -3, -2, -1, 1, 2, 2, 1, 1, 1, 0, 0, 0,
-1, -3, -3, -3, -2, -1, -2, 0, 1, 2, 2, 2, 1, 0, 0, -1, -3, -5, -5, -3, -2, -1,
1, 2, 2, 2, 1, 1, -1, -1, -1, -3, -2, -1, -1, -1, -1, -1, -1, 1, 1, 0, 1, 1, 0,
-1, -2, -3, -3, -4, -4, -3, -2, 0, 1, 2, 3, 2, 0, 1, 1, 0, 1, 0, 0, -1, -1, -3,
-4, -4, -2, -1, -1, 1, 1, 2, 1, 1, 1, 0, 0, 0, -1, -1, 0, -1, -2, -1, -1, -1,
-1, -2, -1, 0, 0, 0, -1, 0, -1, -2, -2, -2, -1, 0, 0, 0, 0, -2, -2, -3, -2, -2,
-1, 1, 1, 2, 2, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, -2, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -2, -1, 0, 1, 0, 0, 0, 0, 0, -1, -2, -2, -2, -1, -1, 0, 1,
0, 0, 0, -1, 0, 0, -1, -1, -1, -1, -2, -3, -2, -2, -1, 1, 1, 1, 1, 1, 0, 1, 0,
-1, -1, -2, -2, -1, 0, 0, 1, 0, 0, -1, -2, -2, -1, -1, -1, -1, 0, 0, -1, 0, 0,
0, -1, -1, 0, 0, -1, -1, -2, -2, -1, 0, 0, 1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0,
-1, -1, -2, -2, -1, 0, 0, 1, 1, 0, -1, -2, -3, -3, -3, -2, 0, 1, 1, 1, 1, 1, 1,
1, 0, -1, -1, -2, -3, -3, -4, -3, -2, -1, 0, 1, 1, 2, 2, 3, 2, 1, 0, -1, -2, -2,
-3, -3, -3, -3, -2, -1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, -1, -1, -2, -2, -2, -2,
-1, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, -2, -2, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, -1, -2, -2, -2, -2, -1, 0, 0, 0, 0, 0, 1,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -3, -3, -3, -2, -2, -1, 0, 1,
2, 2, 3, 3, 2, 1, 0, 0, -1, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0,
-1, -1, -1, -2, -2, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 1, 1, 2, 2,
1, 1, 1, 1, 0, 0, 0, -1, -2, -2, -2, -2, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2,
-1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 0, -1, -2, -3, -2, -2, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, 0, 0, 0, 0, -1, -2, -2, -2, -1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0,
-1, -1, 0, 0, -1, -1, -1, -2, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -1, -1,
-1, 0, 0, -1, -1, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, -1, -2, -2, -2, -2, -1, -1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0,
0, 0, 0, -1, -1, -2, -1, -1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0,
0, -1, -1, -1, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0,
0, 0, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 1, 1, 1, 1, 1, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -1, 0,
1, 1, 2, 2, 2, 2, 1, 1, 0, -1, -1, -2, -2, -2, -2, -1, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 1, 1, 1, 1, 1, 1, 0, 0, -1,
-2, -3, -3, -3, -2, -1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, 0, 0, 0,
-1, -1, -2, -2, -1, -1, 0, 0, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -1,
-1, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1,
0, 0, 0, -1, -2, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -1, -1, 0, 0, 0,
0, 0, 0, 0, -1, -1, 0, 0, 0, 1, 1, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -1, -1, 0, 0,
0, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1,
1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2,
-2, -2, -1, 0, 0, 0, 1, 1, 1, 1, 0, -1, -1, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1,
-2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, 0,
0, -1, -1, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1,
-2, -2, -2, -2, -1, -1, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2,
-1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -1, -1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0,
-1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, -1, };

#endif /* CLAP01_H_ */