// 0x10D3D0: callback: pick one of two SDK calls on the global object by a flag
// (compiler's own nop at the beq target; flag as int, global read per arm)
struct T10D;
extern T10D* data_00715160;
extern void func_0010E0E0(T10D*);
extern void func_0010E15C(T10D*);
void func_0010D3D0(int b) { if (b) func_0010E0E0(data_00715160); else func_0010E15C(data_00715160); }
