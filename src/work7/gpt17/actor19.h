#ifndef GPT17_ACTOR19_H
#define GPT17_ACTOR19_H
// Reduced vtable view from work4/agent4/func_001E309C.cpp.
struct ActorPrimary19 {
 virtual void v0();virtual void v1();virtual void v2();virtual ~ActorPrimary19();
 virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();
 virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();
 virtual void v15();virtual void v16();virtual void v17();virtual void v18();
 char pad[0x320-4];
};
struct ActorSecondary {virtual void b0();};
struct ActorBase19:ActorPrimary19,ActorSecondary {ActorBase19(void*);virtual ~ActorBase19();}; // ctor00150E40, dtor001510A4
#endif
