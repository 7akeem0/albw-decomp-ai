/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned int undefined4;
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern char G_003DE294[];
extern char G_003DE2E0[];
extern char G_003DFCC8[];
extern char G_00714A40[];
extern char G_007A06A0[];
extern char G_007A06F0[];
extern char G_007A1CF0[];
extern int FUN_003d2bb0();
extern int FUN_003dc2e4();
extern int FUN_003dc828();
extern int FUN_003dcc44();
extern int FUN_003ddb48();
extern int FUN_003df8ec();

int FUN_003e0144(void)

{
  char *pcVar1;
  
  pcVar1 = ((char *)G_00714A40);
  if (*((char *)G_00714A40) == '\0') return 0;
  {
    *((char *)G_00714A40) = '\0';
    FUN_003d2bb0(((undefined4)G_003DE2E0),((undefined4)G_003DFCC8),((undefined4)G_003DE294));
    FUN_003dc2e4();
    FUN_003ddb48();
    FUN_003dcc44(((undefined4)G_007A06A0));
    FUN_003dc828(((undefined4)G_007A1CF0));
    if (pcVar1[3] == '\0') {
      FUN_003df8ec(((undefined4)G_007A06F0),0);
    }
  }
  return 0;
}

