extern void func_00115154(float *s, float *c, unsigned angle);
struct Vec3 { float x, y, z; };
void func_004D7F70(struct Vec3 *v, unsigned angle)
{
    float s, c;
    float x, z;
    func_00115154(&s, &c, angle);
    x = v->x * c + v->z * s;
    z = v->z * c - v->x * s;
    v->x = x;
    v->z = z;
}
