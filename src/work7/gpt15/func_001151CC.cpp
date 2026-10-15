#include "range.h"
struct Matrix33 { float e[9]; };
extern "C" void func_001151CC(Matrix33* dst,const Matrix33* src) {
float v0=src->e[0];
float v1=src->e[1];
float v2=src->e[2];
float v3=src->e[3];
float v4=src->e[4];
float v5=src->e[5];
float v6=src->e[6];
float v7=src->e[7];
float v8=src->e[8];
dst->e[0]=v0;
dst->e[1]=v1;
dst->e[2]=v2;
dst->e[3]=v3;
dst->e[4]=v4;
dst->e[5]=v5;
dst->e[6]=v6;
dst->e[7]=v7;
dst->e[8]=v8;
}
