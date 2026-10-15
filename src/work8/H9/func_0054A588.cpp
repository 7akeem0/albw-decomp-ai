// bool f(self): if (m4a9 == 0 && func_00588BF0(self,0)) return true; if (m4a9 == 1 && !func_00588BF0(self,0)) return true; return false.
typedef unsigned char u8;
struct Self { char p0[0x4a9]; u8 m4a9; };
int func_00588BF0(Self* self, unsigned x);
bool func_0054A588(Self* self) {
    if (self->m4a9 == 0) {
        if (func_00588BF0(self, 0) != 0) return true;
    }
    if (self->m4a9 == 1) {
        if (func_00588BF0(self, 0) == 0) return true;
    }
    return false;
}
