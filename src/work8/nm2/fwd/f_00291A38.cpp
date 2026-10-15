struct P{char pad[20];void* f;};
extern "C" void g(void*);
void f_00291A38(P* p){ g(p->f); }
