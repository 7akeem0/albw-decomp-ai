typedef int s32;
struct ListNode { ListNode* prev; ListNode* next; };
struct ListImpl { ListNode head; s32 count; ListImpl() { head.next = &head; count = 0; head.prev = &head; } };
struct OL : ListImpl { s32 offset; OL(); };
OL::OL() : offset(-1) {}
struct LI2 { ListNode head; s32 count; LI2(); };
LI2::LI2() { head.next = &head; count = 0; head.prev = &head; }
struct Wrap { ListImpl l; Wrap(); };
Wrap::Wrap() {}
