#include "range.h"
extern const char data_00716538[];
extern void func_004A693C(String4A6C*);
void String4A6C::set(const char* value) {
    const char* sentinel=data_00716538;
    if(value) text=value;
    else { value=sentinel; text=sentinel; }
    if(value!=sentinel) func_004A693C(this);
}
