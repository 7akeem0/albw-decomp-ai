struct P{char pad[76];void* f;};
extern "C" void g(void*);
void f_002973C4(P* p){ g(p->f); }
