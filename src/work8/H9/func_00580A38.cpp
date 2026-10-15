// Gather a 4-float block: lo = func_00580AE8(self,b) at sp+0, hi = func_00580C50(self,b) at sp+8; then
// data_00715160->v4(lo.a, lo.b, hi.a, hi.b) (VFP args s0..s3).
struct Pair { float a, b; };
struct Quad { Pair lo; Pair hi; };
struct IFace { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(float, float, float, float); };
extern IFace* data_00715160;
void func_00580AE8(void* self, Pair* out, unsigned b);
void func_00580C50(void* self, Pair* out, unsigned b);
void func_00580A38(void* self, unsigned b) {
    Quad q;
    func_00580AE8(self, &q.lo, b);
    func_00580C50(self, &q.hi, b);
    data_00715160->v4(q.lo.a, q.lo.b, q.hi.a, q.hi.b);
}
