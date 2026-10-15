// 0x1DCD60  Cls::func_001DCD60(int)  -- m604 query chain
typedef unsigned char u8;

struct Obj604;
bool func_00552FDC(Obj604* o);
bool func_005531F8(Obj604* o, int* angle);

class Cls {
public:
    bool func_001DCD60(int* angle);
    char pad[0x604];
    Obj604* m604;
};

bool Cls::func_001DCD60(int* angle) {
    return func_00552FDC(m604) && func_005531F8(m604, angle);
}
