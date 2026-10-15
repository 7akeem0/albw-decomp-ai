#ifndef DS7_RANGE_H
#define DS7_RANGE_H
// Recovered partial types for ladder list 7 (addresses 0x53f098-0x60a368).
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

// Allocation tag used by the 0x10BAB4 operator new (nothrow-style, tag ignored).
struct NoThrow {};
void* operator new(unsigned int, NoThrow);
inline void* operator new(unsigned int, void* p) { return p; }

// 0x58Dxxx family: host holds a pointer at +0xf0 to an object with a byte
// flag field at +0xc4. Each tiny method tests one bit and returns bool.
struct Host58;
struct Flags58 {
    char pad0[0xc4];
    u8 mC4;
};
struct Host58 {
    char pad0[0xf0];
    Flags58* mF0;
};

#endif
