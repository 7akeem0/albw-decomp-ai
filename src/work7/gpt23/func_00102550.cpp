#include "range.h"
extern "C" DiagnosticRecord12 bss_0079CCA8;
extern "C" void func_00104560(DiagnosticRecord12*);
extern "C" void func_00102550(u32 result,u8 kind,u32 pc) {
    DiagnosticRecord12* p=&bss_0079CCA8;
    p->active=0;
    p->kind=kind;
    p->tag=0xcaca;
    p->pc=pc;
    p->result=result;
    func_00104560(p);
}
