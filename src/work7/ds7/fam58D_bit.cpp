#include "range.h"
// 0x58Dxxx/0x58Exxx: six tiny bit tests on Host58::mF0->mC4.
// Idiom that yields 'ands rN,rN,#mask; movne rN,#1' (not and;lsr):
//   u8 r = v & MASK; if (r) r = 1; return r;
bool f58DD9C(Host58* h) { u8 r = h->mF0->mC4 & 2;    if (r) r = 1; return r; }
bool f58E134(Host58* h) { u8 r = h->mF0->mC4 & 0x10; if (r) r = 1; return r; }
bool f58E148(Host58* h) { u8 r = h->mF0->mC4 & 1;    if (r) r = 1; return r; }
bool f58E194(Host58* h) { u8 r = h->mF0->mC4 & 0x20; if (r) r = 1; return r; }
bool f58E244(Host58* h) { u8 r = h->mF0->mC4 & 8;    if (r) r = 1; return r; }
bool f58E258(Host58* h) { u8 r = h->mF0->mC4 & 4;    if (r) r = 1; return r; }
