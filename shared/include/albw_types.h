// Base integer/float typedefs shared by all ALBW sources.
// Files that define conflicting shapes (e.g. a different Vec3) include this
// header only; the common byte-verified shapes live in albw_common.h.

#ifndef ALBW_TYPES_H
#define ALBW_TYPES_H

typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;
typedef signed char s8;
typedef float f32;
typedef unsigned long long u64;

#endif
