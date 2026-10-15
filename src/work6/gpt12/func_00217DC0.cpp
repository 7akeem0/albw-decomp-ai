struct B;
struct Timeline { void func_00352210(bool,float); };
struct State { typedef void(B::*Func)(); unsigned counter; signed char cur,next; unsigned char num,pad; char p[8]; Timeline* timeline; B* owner; Func* enter;Func* exec;Func* exit;
 void update(){(owner->*exec[cur])();++counter;if(timeline)timeline->func_00352210(true,(float)counter);}
};
struct B {char p[0x8c0];State state;void func_004F48F0();void func_004F5BD8(int,bool);bool f();};
bool B::f(){state.update();func_004F48F0();func_004F5BD8(0,true);return true;}
