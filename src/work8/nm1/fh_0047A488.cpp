struct H { char pad[344]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
