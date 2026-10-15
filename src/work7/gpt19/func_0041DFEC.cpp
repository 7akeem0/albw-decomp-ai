#include "range.h"
struct Base {virtual ~Base(){mode=3;}char pad[0x97];u8 mode;char rest[0x84];};
struct Member {u32 opaque;~Member();};
struct S:Base {Member member;virtual ~S();};S::~S(){}
// Member D1 004194F4; derived/base vtables 006F092C/006F047C.
