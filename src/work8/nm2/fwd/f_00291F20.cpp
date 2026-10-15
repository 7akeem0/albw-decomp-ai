struct P{char pad[20];void* f;};
extern "C" void g(void*);
void f_00291F20(P* p){ g(p->f); }
