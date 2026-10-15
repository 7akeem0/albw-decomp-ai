#include "range.h"
void func_003773BC(Obj773* p,const Source773* source) {
    Matrix34_26* matrix=&p->model->matrix;
    p->model->flags.set(0x40000000);
    func_001151EC(matrix,func_0053ED3C(source->model));
    func_004CEAF0(p->model);
}
