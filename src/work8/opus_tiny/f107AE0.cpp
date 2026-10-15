// 0x107AE0: offset-list ctor: inline base list ctor {next=&head; count=0; prev=&head;} + node offset 0x18
typedef int s32;
struct ListNode { ListNode* prev; ListNode* next; };
struct ListImpl { ListNode head; s32 count; ListImpl() { head.next = &head; count = 0; head.prev = &head; } };
struct OffsetList_107AE0 : ListImpl { s32 offset; OffsetList_107AE0(); };
OffsetList_107AE0::OffsetList_107AE0() : offset(0x18) {}
