struct Obj { char pad[0x1C]; void *m1C; };
unsigned func_0056463C(struct Obj *o, void *buf, void *out, unsigned size)
{
    if (o->m1C == 0) return 0xD820EBF8;
    if (buf == 0 || out == 0) return 0xE0E0EBF6;
    if (size > 0x10) return 0xE0E0EBEC;
    return 0;
}
