#ifndef KICK02_H_
#define KICK02_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define KICK02_NUM_CELLS 3151
#define KICK02_SAMPLERATE 8000
 
CONSTTABLE_STORAGE(int8_t) KICK02_DATA [] = {-17, -44, -110, -114, -105, -108,
-103, -103, -95, -90, -79, -72, -54, -39, -22, -8, 7, 22, 34, 43, 51, 55, 58,
60, 61, 62, 61, 59, 53, 46, 36, 24, 12, 1, -13, -27, -41, -54, -65, -71, -75,
-78, -79, -79, -77, -74, -69, -63, -53, -39, -26, -13, 0, 12, 23, 34, 45, 52,
57, 60, 62, 64, 65, 64, 62, 60, 58, 55, 50, 43, 35, 25, 15, 4, -7, -18, -30,
-41, -52, -60, -67, -71, -74, -76, -78, -79, -76, -73, -70, -65, -60, -53, -43,
-32, -21, -10, 0, 10, 19, 28, 37, 44, 51, 56, 60, 63, 64, 65, 66, 66, 65, 64,
63, 61, 58, 55, 50, 43, 36, 29, 21, 12, 4, -5, -14, -24, -33, -43, -51, -58,
-64, -68, -71, -73, -74, -76, -77, -75, -73, -70, -67, -64, -60, -55, -49, -41,
-32, -23, -14, -5, 3, 11, 18, 26, 33, 39, 45, 51, 56, 60, 62, 64, 65, 66, 67,
68, 68, 68, 67, 65, 64, 62, 60, 58, 55, 50, 45, 40, 34, 27, 21, 14, 7, 0, -7,
-14, -22, -29, -37, -44, -51, -57, -61, -65, -67, -69, -71, -72, -73, -73, -74,
-72, -70, -68, -66, -63, -60, -57, -53, -49, -43, -37, -30, -23, -16, -9, -3, 4,
10, 16, 22, 28, 34, 39, 44, 49, 53, 57, 61, 63, 65, 66, 68, 68, 69, 69, 70, 70,
70, 69, 68, 67, 66, 65, 64, 62, 60, 58, 55, 51, 47, 43, 38, 33, 28, 23, 17, 12,
6, 1, -5, -11, -16, -22, -28, -34, -40, -46, -51, -55, -59, -61, -64, -65, -67,
-68, -69, -69, -70, -70, -70, -69, -67, -66, -64, -62, -59, -57, -55, -52, -49,
-46, -42, -38, -33, -28, -22, -17, -11, -6, -1, 4, 9, 14, 19, 23, 28, 32, 37,
41, 45, 49, 52, 56, 59, 62, 64, 66, 67, 69, 70, 70, 71, 71, 72, 72, 72, 72, 72,
72, 71, 70, 69, 68, 67, 66, 64, 63, 61, 60, 57, 55, 52, 49, 45, 41, 37, 33, 29,
25, 21, 17, 12, 8, 3, -1, -6, -11, -15, -20, -25, -30, -34, -39, -44, -48, -52,
-55, -58, -60, -62, -63, -65, -65, -66, -67, -67, -67, -68, -68, -67, -67, -66,
-64, -62, -61, -59, -57, -55, -53, -51, -48, -46, -43, -41, -37, -34, -30, -27,
-22, -18, -14, -10, -6, -1, 3, 7, 11, 15, 18, 22, 26, 29, 33, 36, 40, 43, 46,
49, 52, 55, 58, 60, 63, 65, 66, 68, 69, 70, 70, 71, 71, 72, 72, 72, 72, 72, 72,
72, 72, 72, 71, 70, 69, 68, 67, 67, 65, 64, 63, 62, 60, 59, 57, 55, 53, 50, 47,
44, 41, 38, 35, 32, 28, 25, 22, 18, 15, 11, 8, 5, 1, -2, -6, -10, -13, -17, -20,
-24, -27, -31, -34, -38, -41, -44, -47, -49, -51, -53, -54, -55, -56, -57, -57,
-58, -58, -59, -59, -59, -59, -59, -59, -59, -58, -57, -55, -54, -53, -51, -50,
-49, -47, -45, -44, -42, -40, -38, -36, -34, -32, -29, -26, -23, -20, -17, -14,
-10, -7, -4, -1, 2, 5, 8, 10, 13, 16, 18, 21, 23, 26, 28, 30, 33, 35, 37, 39,
41, 43, 44, 46, 48, 49, 50, 51, 52, 53, 53, 54, 54, 54, 54, 54, 54, 54, 54, 54,
54, 54, 54, 54, 54, 53, 52, 52, 51, 50, 50, 49, 48, 47, 46, 46, 45, 44, 43, 41,
40, 39, 37, 35, 34, 32, 30, 28, 26, 23, 21, 19, 17, 15, 13, 10, 8, 6, 4, 1, -1,
-3, -5, -8, -10, -12, -15, -17, -19, -21, -24, -26, -28, -30, -32, -34, -35,
-37, -38, -39, -39, -40, -41, -41, -42, -42, -42, -43, -43, -43, -43, -43, -43,
-43, -43, -43, -42, -41, -41, -40, -39, -38, -37, -37, -36, -35, -34, -33, -32,
-31, -29, -28, -26, -25, -23, -21, -19, -17, -15, -13, -11, -9, -7, -5, -3, -1,
1, 3, 5, 7, 9, 10, 12, 14, 15, 17, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 31,
31, 32, 33, 34, 34, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
35, 35, 34, 34, 33, 33, 32, 32, 31, 31, 30, 30, 29, 29, 28, 27, 27, 26, 25, 24,
23, 22, 21, 20, 18, 17, 16, 14, 13, 11, 10, 9, 7, 6, 4, 3, 1, 0, -1, -3, -4, -6,
-7, -9, -10, -12, -13, -15, -16, -18, -19, -21, -22, -24, -25, -26, -27, -28,
-29, -29, -30, -31, -31, -31, -32, -32, -32, -32, -33, -33, -33, -33, -33, -33,
-33, -33, -33, -33, -32, -32, -31, -31, -30, -30, -29, -29, -28, -28, -27, -26,
-26, -25, -24, -23, -23, -22, -21, -19, -18, -17, -16, -14, -13, -11, -10, -9,
-7, -6, -5, -3, -2, -1, 0, 1, 2, 3, 5, 6, 7, 7, 8, 9, 10, 11, 12, 13, 13, 14,
15, 16, 16, 17, 17, 18, 18, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
19, 19, 19, 19, 19, 18, 18, 18, 18, 17, 17, 17, 16, 16, 16, 15, 15, 15, 14, 14,
13, 13, 12, 12, 11, 10, 10, 9, 8, 7, 6, 5, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5,
-6, -7, -8, -9, -10, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20, -21,
-22, -22, -23, -23, -24, -24, -25, -25, -25, -25, -26, -26, -26, -26, -26, -26,
-26, -26, -26, -26, -26, -26, -26, -26, -26, -26, -25, -25, -25, -24, -24, -24,
-23, -23, -22, -22, -22, -21, -21, -20, -20, -19, -18, -18, -17, -16, -15, -14,
-13, -13, -12, -11, -10, -9, -8, -7, -7, -6, -5, -4, -4, -3, -2, -2, -1, 0, 0,
1, 1, 2, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2,
1, 1, 1, 0, -1, -1, -2, -2, -3, -3, -4, -5, -5, -6, -6, -7, -7, -8, -9, -9, -10,
-10, -11, -12, -12, -13, -13, -14, -14, -15, -16, -16, -17, -17, -18, -18, -19,
-19, -19, -20, -20, -20, -20, -20, -20, -20, -21, -21, -21, -21, -21, -21, -21,
-21, -21, -21, -21, -21, -21, -20, -20, -20, -20, -20, -19, -19, -19, -19, -18,
-18, -18, -18, -17, -17, -17, -16, -16, -15, -15, -15, -14, -13, -13, -12, -12,
-11, -11, -10, -10, -9, -9, -8, -8, -7, -7, -6, -6, -5, -5, -5, -4, -4, -4, -3,
-3, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-2, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -5, -5, -5, -6, -6, -6, -7, -7, -7,
-8, -8, -8, -9, -9, -9, -10, -10, -10, -11, -11, -11, -12, -12, -12, -13, -13,
-13, -14, -14, -14, -14, -14, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15,
-15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -14, -14, -14, -14,
-14, -14, -14, -13, -13, -13, -13, -13, -13, -12, -12, -12, -12, -11, -11, -11,
-11, -10, -10, -10, -9, -9, -9, -8, -8, -8, -7, -7, -7, -7, -6, -6, -6, -6, -5,
-5, -5, -5, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4,
-4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -7, -7, -7, -7,
-7, -7, -8, -8, -8, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9,
-9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9,
-9, -9, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -7, -6, -6,
-6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, };

#endif /* KICK02_H_ */