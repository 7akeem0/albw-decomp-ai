struct H { char pad[128]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
