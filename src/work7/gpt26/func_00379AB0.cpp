#include "range.h"
Pair79A getPair(Obj79A*p){return p->pair;}bool func_00379AB0(Obj79A*p,const void*,u32 index){Pair79A pair=getPair(p);Model26*model=pair.actor->model;if(pair.index!=index)return false;func_001151EC(&p->matrix,&model->resource->matrices[index]);return false;}
