#ifndef GPT16_DTOR_TYPES_H
#define GPT16_DTOR_TYPES_H
// ActorBase-shaped primary and secondary bases; primary has 19 slots here.
struct ActorA19{virtual void v0();virtual void v1();virtual void v2();virtual ~ActorA19();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();char pad[0x31c];};
struct ActorB19{virtual void b0();};
struct ActorBase19:ActorA19,ActorB19{virtual ~ActorBase19();}; // D1 1510A4
struct DtorNop{~DtorNop(){}};
#endif
