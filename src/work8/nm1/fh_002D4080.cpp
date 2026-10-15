struct H { char pad[1528]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
