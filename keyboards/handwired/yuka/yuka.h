#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
         L12, L13, L14, L15, L16, L17, \
         L22, L23, L24, L25, L26, L27, \
         L32, L33, L34, L35, L36, L37, \
    L41, L42, L43, L44, L45, L46, L47, \
    L51, L52, L53, L54, \
    \
         R12, R13, R14, R15, R16, R17, \
         R22, R23, R24, R25, R26, R27, \
         R32, R33, R34, R35, R36, R37, \
    R41, R42, R43, R44, R45, R46, R47, \
    R51, R52, R53, R54  \
) { \
    { XXX, L12, L13, L14, L15, L16, L17 }, \
    { XXX, L22, L23, L24, L25, L26, L27 }, \
    { XXX, L32, L33, L34, L35, L36, L37 }, \
    { L41, L42, L43, L44, L45, L46, L47 }, \
    { L51, L52, L53, L54, XXX, XXX, XXX }, \
    \
    { XXX, R12, R13, R14, R15, R16, R17 }, \
    { XXX, R22, R23, R24, R25, R26, R27 }, \
    { XXX, R32, R33, R34, R35, R36, R37 }, \
    { R41, R42, R43, R44, R45, R46, R47 }, \
    { R51, R52, R53, R54, XXX, XXX, XXX } \
}


#define LAYOUTfliped( \
         L12, L13, L14, L15, L16, L17, \
         L22, L23, L24, L25, L26, L27, \
         L32, L33, L34, L35, L36, L37, \
    L41, L42, L43, L44, L45, L46, L47, \
    L51, L52, L53, L54, \
    \
         R12, R13, R14, R15, R16, R17, \
         R22, R23, R24, R25, R26, R27, \
         R32, R33, R34, R35, R36, R37, \
    R41, R42, R43, R44, R45, R46, R47, \
    R51, R52, R53, R54  \
) { \
    { XXX, L12, L13, L14, L15, L16, L17 }, \
    { XXX, L22, L23, L24, L25, L26, L27 }, \
    { XXX, L32, L33, L34, L35, L36, L37 }, \
    { L41, L42, L43, L44, L45, L46, L47 }, \
    { L51, L52, L53, L54, XXX, XXX, XXX }, \
    \
    { XXX, R17, R16, R15, R14, R13, R12 }, \
    { XXX, R27, R26, R25, R24, R23, R22 }, \
    { XXX, R37, R36, R35, R34, R33, R32 }, \
    { R47, R46, R45, R44, R43, R42, R41 }, \
    { R54, R53, R52, R51, XXX, XXX, XXX } \
}
