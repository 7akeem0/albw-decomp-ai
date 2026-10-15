#include "../../range.h"
struct Base_0010CE7C{u8 pad[12];Base_0010CE7C();virtual ~Base_0010CE7C();};
struct Mutex{u32 state,count,owner;Mutex(){state=0;init();}void init();};void Mutex::init(){extern void func_0010DEB0(Mutex*);func_0010DEB0(this);}struct S:Base_0010CE7C{Mutex m;S();};S::S(){}
