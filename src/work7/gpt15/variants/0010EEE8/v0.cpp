#include "../../range.h"
struct Base_0010DA7C{u8 pad[12];Base_0010DA7C(u32,bool);virtual ~Base_0010DA7C();};struct Mutex{u32 state,count,owner;Mutex(){state=0;init();}void init();};void Mutex::init(){extern void func_0010DEB0(Mutex*);func_0010DEB0(this);}struct S:Base_0010DA7C{Mutex m;S(u32);};S::S(u32 n):Base_0010DA7C(n,true){}
