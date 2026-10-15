#include "range.h"
struct SecondaryF0_24{virtual void f0();char pad[0xec];};
struct Base410_24:ActorPrimary20_24,SecondaryF0_24{virtual~Base410_24();virtual void f20();}; // 001510A4
struct MemberA4_24{~MemberA4_24();char pad[0xa4];}; // 004EE540
struct Mid4B4_24:Base410_24{MemberA4_24 member;virtual~Mid4B4_24(){}};
struct Member4EDD04_24{~Member4EDD04_24();char pad[0x40];};
struct S:Mid4B4_24{Member4EDD04_24 leaf;virtual~S();};
S::~S(){}
