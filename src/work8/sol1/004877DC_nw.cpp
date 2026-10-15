
extern "C" void func_0066F3FC(void*, int) ;
struct Elem {
    char pad[0x35];
    unsigned char m35;
    char pad2[56 - 0x36];
};
struct Arr {
    char pad[8];
    unsigned int m8;
    Elem* m0c;
};
static Elem* at47(Arr*a,unsigned int i){if(i<a->m8)return a->m0c+i;return a->m0c;}
struct Sub { char pad[2]; short m2; };
struct Cls {
    char pad0[0x1c];
    Arr* m1c;
    char pad1[0xe4 - 0x20];
    char mE4[1];
    char pad2[0x138 - 0xe5];
    Sub* m138;
    void f();
};
void Cls::f() {
    Sub* s=m138; Arr* a=m1c;
    short i = s->m2;
    if (i >= 0) {

        Elem*e=at47(a,i);
        if (e->m35 != 0) return;
    }
    func_0066F3FC((char*)this + 0xe4, 3);
}
