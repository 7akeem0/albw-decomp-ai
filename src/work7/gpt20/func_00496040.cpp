#include "ladder_types.h"
struct Member4960A {char data[0xac];~Member4960A();};
struct Member4960B {char data[0x58];~Member4960B();};
struct Member4960C {void finish(){}virtual ~Member4960C(){finish();}};
struct Object4960 {virtual ~Object4960();Member4960A a;Member4960B b;Member4960C c;};
Object4960::~Object4960(){}
