struct Elem { char d[0x18]; };
struct Arr { struct Elem e[2]; };
struct S { char pad[0x10]; unsigned char m10; char pad2[3]; struct Arr arr; };
extern void func_00394E3C(struct Elem *e);
static struct Elem *at(struct Arr *a, int i) { return &a->e[i]; }
void func_00351C7C(struct S *s)
{
    int i;
    s->m10 = 0;
    for (i = 0; i < 2; i++) {
        func_00394E3C(at(&s->arr, i));
    }
}
