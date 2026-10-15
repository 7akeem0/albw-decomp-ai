
extern "C" void func_004A58B0(void*, int);
struct Cls;
extern "C" unsigned int func_00451050(Cls*);
struct Arr {
    unsigned int num;
    unsigned int cap;
    void** data;
};
struct Cls {
    char pad[0x108];
    Arr mArr;
    char pad114[0x138-0x114];
    unsigned int m138;
    unsigned int m13c;
    void a();
    void b();
};
static void* at(Arr*a,unsigned int i){if(i<a->num)return a->data[i];return 0;}
void Cls::a() {
    for (int i = 0; i < 3; i++) {
        Arr* a = &mArr;
        void* p = at(a,i); 
        func_004A58B0(p, 0);
    }
    m138 = func_00451050(this);
    m13c = 0;
}
void Cls::b() {
    Arr* a = &mArr;
    for (int i = 0; i < 3; i++) {
        void* p = at(a,i);
        func_004A58B0(p, 0);
    }
}
