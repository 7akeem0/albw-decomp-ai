
extern "C" void func_0041D830(void*, void*);
struct Obj {
    virtual int v0();
    char pad[0x12c - 4];
    int m12c;
};
struct Cls {
    char pad[8];
    void v1(Obj* p);
    void v2(Obj* p);
    void v3(Obj* p);
    void v4(Obj* p);
};
struct Zero{int v;Zero(int n):v(n){}};struct Receiver{Obj*p;Receiver(Obj*n):p(n){}};
void phase(Cls*self,Receiver arg,Zero z){Obj*p=arg.p;unsigned live=(unsigned)p;void*q=(char*)self+8;p->m12c=z.v;if(!live)return;p->v0();func_0041D830(q,p);}
void Cls::v1(Obj*p){phase(this,p,0);}
