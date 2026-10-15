struct Timer { unsigned cur,max; float rate; void start(unsigned n,unsigned c=0) { max=n; if(n)rate=1.0f/n;else rate=0;cur=c; } };
struct Flags { unsigned v; void reset(unsigned b){v&=~b;} };
struct Sub { void func_004FD038(int); char p[0x8e4-0x5a8]; };
struct En { char p[0x59c]; Flags flags; char q[8]; Sub sub; Timer timer; void f(); };
void En::f(){timer.start(25);flags.reset(4);sub.func_004FD038(0);}
