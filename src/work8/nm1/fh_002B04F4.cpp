struct H { char pad[1296]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
