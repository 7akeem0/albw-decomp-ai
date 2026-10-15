
typedef unsigned char u8;
typedef int s32;

struct Obj708 {
    char pad[0x10];
    float m10;              
    float m14;              
    char pad18[0x1c - 0x18];
    float m1c;              
    char pad20[0x2d - 0x20];
    u8 m2d;                 
    char pad2e[0x3c - 0x2e];
    int m3c;                
};

struct Arg708 { void* m0; char pad4[8]; float mC; };

float func_0056F3E4(Obj708* o);
float func_0069141C(Obj708* o);

int func_00680708(void* self, int id, Arg708* arg) {
    if (id == 9) {
        Obj708* o = (Obj708*)arg->m0;
        int n = o->m3c; 
        if (n > 0) {
        float r = o->m2d ? o->m1c : func_0056F3E4(o);
        float k = (float)n * r;
        int i = (int)((o->m10 - arg->mC) / k) + 1; 
        o->m10 = arg->mC + k * (float)i; 
        }
        id = 1;
        return id;
    }
    if (id != 10) return 0;
    Obj708* o = (Obj708*)arg->m0;
    float a = arg->mC;
    float d = func_0069141C(o);
    float v = o->m14;
    o->m10 = a;
    o->m14 = d + v;
    return 3;
}
