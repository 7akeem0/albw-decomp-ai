#include "range.h"
struct S{char pad[0x20];RecordData340*child;};u32*f(S*p,u32 i,u32 j){Record340*q=&p->child->data[i];return q->values+j;}
