struct H { char pad[104]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
