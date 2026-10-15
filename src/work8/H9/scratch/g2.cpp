struct V3 { unsigned x, y, z; V3& operator=(const V3& o) { x = o.x; y = o.y; z = o.z; return *this; } };
struct Owner { char p0[0x30]; V3* m30; };
int func_0054682C(Owner* self, unsigned v);
int func_005467C0(Owner* self, V3* out);
int func_00546F18(Owner* self, V3* out) {
    int r = func_0054682C(self, *(unsigned*)((char*)self + 0x70));
    if (r == 6) {
        V3* src = self->m30;
        *out = *src;
        return r;
    }
    return func_005467C0(self, out);
}
