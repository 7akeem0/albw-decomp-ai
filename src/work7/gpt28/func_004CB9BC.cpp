#include "range.h"
struct Object4CB9 { char pad0[0x8e5]; u8 mode; char pad8e6[0xa8]; u8 active; bool blocked() const; bool test() const; };
bool Object4CB9::blocked() const { if(active) return true; return mode==2; }
bool Object4CB9::test() const { return !blocked(); }
