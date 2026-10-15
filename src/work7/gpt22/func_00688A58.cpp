#include "range.h"
struct List{void*prev,*next;u32 count;};
struct Node{void*prev,*next;};extern "C" void func_0010F1F8(Node*);
struct Link{Node node;u32 data;List*owner;void remove(){List*l=owner;if(l){owner=0;func_0010F1F8(&node);--l->count;}}};
struct Disposer{virtual ~Disposer();u8 pad4[12];};
struct D:Disposer{Link link;u8 pad20[0x38-0x20];u8 active;void clean();virtual ~D();};
D::~D(){clean();}
void D::clean(){if(active){const u8&z=0;link.remove();active=z;}}
// Disposer destructor004A1520.
