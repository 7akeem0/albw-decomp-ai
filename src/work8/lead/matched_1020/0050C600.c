struct Vec3 { float x, y, z; };
struct Elem { char pad[0x10]; float m10; char pad2[0x40 - 0x14]; };
struct ElemArray { char pad[0xC]; int count; int max; struct Elem *data; };
struct Obj { char pad[0x410]; struct ElemArray *anims; char pad2[0x42C - 0x414]; struct Vec3 vel; };
static struct Elem *arrAt(struct ElemArray *a, int i) { return (unsigned)i < (unsigned)a->count ? &a->data[i] : a->data; }
static void vec3_zero(struct Vec3 *v) { float z = 0.0f; v->x = z; v->y = z; v->z = z; }
void func_0050C600(struct Obj *o)
{
    vec3_zero(&o->vel);
    arrAt(o->anims, 0)->m10 = -1.0f;
}
