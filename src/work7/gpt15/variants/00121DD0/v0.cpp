#include "../../range.h"
struct Base_004A1520{u8 pad[12];virtual ~Base_004A1520();};
struct B{u8 pad[260];~B();};struct Member{u32 data;~Member();};
struct S:Base_004A1520,B{Member m;virtual ~S();};S::~S(){}
