struct Vec3 { float x, y, z; };
struct Src { char pad[0x1C]; struct Vec3 *pos; };
struct Obj {
    char pad[0x20];
    char ctrl[0x8C - 0x20];
    unsigned char m8C;
    char pad2[0xB8 - 0x8D];
    unsigned char mB8;
    char pad3[3];
    struct Vec3 pos;
    char pad4[0xD9 - 0xC8];
    unsigned char mD9;
};
extern struct Src *data_0070FB60;
extern void func_002317C0(void *ctrl, float v);
extern int func_00556E20(struct Src *s);
static void vcopy(struct Vec3 *d, const struct Vec3 *s) { *d = *s; }
void func_00455054(struct Obj *o)
{
    struct Src *s = data_0070FB60;
    if (s != 0) {
        vcopy(&o->pos, s->pos);
        o->m8C = 1;
        if (o->mB8 == 0) {
            func_002317C0(o->ctrl, 1.0f);
            o->mB8 = 1;
        }
        if (func_00556E20(s) != 0) {
            o->mD9 = 1;
        }
    }
}
