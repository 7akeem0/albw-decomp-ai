struct B;
struct Timeline { void func_00352210(bool,float); };
struct State { typedef void(B::*Func)(); unsigned counter; signed char cur,next; unsigned char num,pad; char p[8]; Timeline* timeline; B* owner; Func* enter;Func* exec;Func* exit;
 void update(){(owner->*exec[cur])();++counter;if(timeline)timeline->func_00352210(true,(float)counter);}
 void changeState(int) __attribute__((weak));
};
struct B {char p[0x410];State state;char p434[0x4c2-0x434];unsigned char m4c2;void func_00247830();void f();};
void B::f(){B*s=this;this->state.update();B*s2=this;signed char c=this->state.cur;if(c==1||c==2){s->func_00247830();if(s->m4c2>3)s->state.changeState(3);}else if(c==3)s->func_00247830();}
