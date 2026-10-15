#include "range.h"
struct Record4CF5 { char pad0[0x24]; u32 values[76]; };
struct Bank4CF5 { Record4CF5* records; };
struct Object4CF5 { char pad0[0x20]; Bank4CF5* bank; void set(u32,u32,u32); };
void Object4CF5::set(u32 index, u32 slot, u32 value) {
    Record4CF5* record=&bank->records[index];
    record->values[slot]=(record->values[slot]&0x00ffffffu) | (value<<24);
}
