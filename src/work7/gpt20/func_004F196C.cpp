#include "ladder_types.h"
struct Primary4F19{virtual ~Primary4F19(){};virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();char pad4[0x30];};
struct Secondary4F19{virtual ~Secondary4F19(){};};
struct Member352A{virtual ~Member352A();char pad4[0x44];};
struct Member2979{u32 word;~Member2979();char pad4[0x10];};
struct Object4F19:Primary4F19,Secondary4F19{char pad38[0x74];Member352A a;Member2979 b;virtual ~Object4F19();};
Object4F19::~Object4F19(){}

