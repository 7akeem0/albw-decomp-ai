// 0x10D3B0: vec_ctor element ctor (literal from 0x10C428): intrusive list {size; head{next,prev}} built with a
// chained self-link assignment, plus a trailing int initialised to 1.
typedef unsigned int u32; typedef int s32;
struct LinkNode { LinkNode* next; LinkNode* prev; };
struct LinkList { u32 size; LinkNode head; LinkList() : size(0) { head.prev = head.next = &head; } };
struct Elem10D3 { LinkList list; s32 count; Elem10D3(); };
Elem10D3::Elem10D3() : count(1) {}
