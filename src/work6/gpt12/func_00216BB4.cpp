struct Timer { unsigned cur,max; float rate; bool done()const { Timer t=*this; return t.cur>=t.max; } };
struct En { char p[0xadc]; Timer timer; bool func_004F7BB8(int); bool f(int); };
bool En::f(int arg) { if(!timer.done()) return false; return func_004F7BB8(arg); }
