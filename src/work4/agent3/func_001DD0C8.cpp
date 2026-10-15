#define CLS_EXTRA void func_001DD0C8(int a, int b, int c);
#include "../shared_include/cls_1DE.h"

struct Skel {
    void func_004CE804(int id, int b, int c);
};
struct Model600 {
    void func_004CE7F4(int id);   // m10->func_004CE804(id, 0, 0)
};
struct Obj604_28 {
    char pad[8];
    Skel* m8;
    void setId(int id) { m8->func_004CE804(id, 0, 0); }
    void func_004D012C(int c);
};
struct Part630 {
    void func_002D4194(int id);
};
struct HandleObjV : public HandleObjT {
    virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05();
    virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
    virtual void v26();
};

void Cls::func_001DD0C8(int a, int b, int c) {
    m600->func_004CE7F4(a);
    Obj604_28* x = m604->m28;
    x->setId(b);
    x->func_004D012C(c);
    for (int i = 0; i < 25; i++) {
        if (m630[i])
            m630[i]->func_002D4194(a);
    }
    HandleObj* p = func_0052FBA0(&data_00706E20->handles, m620.v);
    if (!IsDerivedFrom<HandleObjT>(p))
        p = 0;
    HandleObjT* o = static_cast<HandleObjT*>(p);
    if (o)
        static_cast<HandleObjV*>(o)->v26();
}
