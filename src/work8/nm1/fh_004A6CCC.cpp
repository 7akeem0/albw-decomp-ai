struct H { char pad[32]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
