struct H { char pad[16]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
