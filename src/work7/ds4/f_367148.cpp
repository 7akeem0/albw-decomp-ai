#include "ds4.h"
// Single-inheritance D1 dtor: vptr store at 0 (no writeback), body sets
// *(f32*)(p4c+0x100)=1.0f and p2c->b_c7=1, destroys member @0xcc (dtor
// 0x4EE540), tails to EMPTY base dtor 0x2D5D3C (bx lr).
struct Base_002D5D3C { virtual ~Base_002D5D3C(); };
struct Box100 { u8 pad[0x100]; f32 f; };
struct BoxC7  { u8 pad[0xc7];  u8  b; };
struct Member_004EE540 { u8 pad[0x54]; ~Member_004EE540(); };
struct S : Base_002D5D3C {
  u8 pad1[0x2c-4];
  BoxC7*  p2c;         // +0x2c
  u8 pad2[0x4c-0x30];
  Box100* p4c;         // +0x4c
  u8 pad3[0xcc-0x50];
  Member_004EE540 m;   // +0xcc
  virtual ~S();
};
S::~S(){ Box100* a=p4c; a->f=1.0f; p2c->b=1; }

