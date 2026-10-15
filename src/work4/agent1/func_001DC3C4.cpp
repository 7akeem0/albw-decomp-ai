#define CLS_EXTRA bool func_001DC3C4(int a, bool b);
#include "../shared_include/cls_1DE.h"

// held actor view: vtable slot 23 (+0x5c) = bool (void* owner2cc, int a)
struct HandleObjV : public HandleObjT {
    virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05();
    virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22();
    virtual bool v23(void* x, int a);
};
void func_001E48E4(HandleObjT* o);

// 0x1DC3C4: release the actor held via handle m620 (returns true if the actor accepted it).
// Layout needs the NESTED if form with an explicit 'else { reset; return false; }' and a single
// trailing 'return false' shared by !valid and the vfunc-failed path.
bool Cls::func_001DC3C4(int a, bool b) {
    if (m620.isValid()) {
        HandleObj* p = func_0052FBA0(&data_00706E20->handles, m620.v);
        if (!IsDerivedFrom<HandleObjT>(p))
            p = 0;
        HandleObjT* o = static_cast<HandleObjT*>(p);
        if (isAliveObj(o)) {
            if (static_cast<HandleObjV*>(o)->v23(m2cc, a)) {
                if (b)
                    func_001E48E4(o);
                m620.reset();
                return true;
            }
        } else {
            m620.reset();
            return false;
        }
    }
    return false;
}
