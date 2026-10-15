struct H { char pad[20]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
