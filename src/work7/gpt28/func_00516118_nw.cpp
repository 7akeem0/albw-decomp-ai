#include "range.h"
struct Child5161 { u8 first,kind; };
struct Message5161 { char pad[0x2c]; Child5161* child; };
struct State5161 { char bytes[4]; };
struct Object516118 { char pad[0x414]; State5161 state; bool update(const Message5161*); };
extern  void func_0066BA90(State5161*,s32);
bool Object516118::update(const Message5161* message) {
    if(message->child && message->child->kind==2) func_0066BA90(&state,1);
    return false;
}

