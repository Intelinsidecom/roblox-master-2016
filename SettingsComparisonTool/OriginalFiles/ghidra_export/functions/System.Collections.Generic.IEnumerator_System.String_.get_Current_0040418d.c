/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040418d
 * Raw Name    : System.Collections.Generic.IEnumerator<System.String>.get_Current
 * Demangled   : System.Collections.Generic.IEnumerator<System.String>.get_Current
 * Prototype   : char * System.Collections.Generic.IEnumerator<System.String>.get_Current(byte * param_1, byte * param_2, undefined4 param_3, int * param_4)
 * Local Vars  : bVar2, cVar1, piVar3, in_EAX, uVar5, pcVar4, iVar7, uVar6, uVar9, cVar8, unaff_EBX, bVar10, uVar12, bVar11, unaff_EDI, unaff_ESI, unaff_retaddr, in_DS, param_1, param_2, param_3, param_4
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

char * __fastcall
System_Collections_Generic_IEnumerator<System_String>_get_Current
          (byte *param_1,byte *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  char *in_EAX;
  uint3 uVar5;
  char *pcVar4;
  undefined3 uVar6;
  int iVar7;
  char cVar8;
  byte bVar10;
  byte bVar11;
  int unaff_EBX;
  undefined2 uVar12;
  char *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_DS;
  byte *unaff_retaddr;
  int *piVar3;
  undefined2 uVar9;
  
  while( true ) {
                    /* .NET CLR Managed Code */
    uVar12 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar10 = (byte)unaff_EBX;
    bVar11 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x47);
    bVar2 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar2;
    uVar5 = (uint3)((uint)in_EAX >> 8);
    cVar1 = bVar2 + 0x2a;
    piVar3 = (int *)CONCAT31(uVar5,cVar1);
    cVar8 = (char)param_2;
    uVar9 = CONCAT11(((char)((uint)param_2 >> 8) -
                     *(char *)(CONCAT22(uVar12,CONCAT11(bVar11,bVar10)) + -4)) - (0xd5 < bVar2),
                     cVar8);
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar9);
    *(char *)piVar3 = (char)*piVar3 + cVar1;
    bVar11 = bVar11 | *param_2;
    unaff_ESI = unaff_ESI + -*piVar3;
    cVar1 = cVar1 + (char)*piVar3;
    pcVar4 = (char *)CONCAT31(uVar5,cVar1);
    *pcVar4 = *pcVar4 + cVar1;
    *param_1 = *param_1 + cVar8;
    unaff_EBX = CONCAT22(uVar12,CONCAT11(bVar11 + *(char *)(CONCAT22(uVar12,CONCAT11(bVar11,bVar10))
                                                           + -0x46),bVar10));
    *(undefined1 *)((uint)uVar5 << 8) = *(undefined1 *)((uint)uVar5 << 8);
    piVar3 = (int *)CONCAT31(uVar5,10);
    *(char *)piVar3 = (char)*piVar3 + '\n';
    *piVar3 = (int)(*piVar3 + (int)piVar3);
    *(char *)piVar3 = (char)*piVar3 + '\n';
    *piVar3 = (int)(*piVar3 + (int)piVar3);
    *(char *)piVar3 = (char)*piVar3 + '\n';
    *piVar3 = (int)(*piVar3 + (int)piVar3);
    *(char *)piVar3 = (char)*piVar3 + '\n';
    *piVar3 = (int)(*piVar3 + (int)piVar3);
    *(char *)piVar3 = (char)*piVar3 + '\n';
    bVar2 = *param_2;
    bVar11 = -bVar2 + 10;
    if ((POPCOUNT(bVar11) & 1U) == 0) break;
    cVar1 = in(uVar9);
    in_EAX = (char *)CONCAT31(uVar5,cVar1);
    *unaff_EDI = *unaff_EDI + cVar1;
    *in_EAX = *in_EAX + cVar1;
    *in_EAX = *in_EAX + cVar1;
    param_1 = unaff_retaddr;
    unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_DS);
  }
  *(char *)CONCAT31(uVar5,bVar11) = *(char *)CONCAT31(uVar5,bVar11) + bVar11;
  piVar3 = (int *)CONCAT31(uVar5,-bVar2 + '\x15');
  unaff_retaddr[0x45] = (unaff_retaddr[0x45] - bVar10) - (0xf4 < bVar11);
  pcVar4 = (char *)((int)piVar3 + *piVar3);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  uVar6 = (undefined3)((uint)pcVar4 >> 8);
  cVar1 = (char)pcVar4 + *pcVar4;
  pcVar4 = (char *)CONCAT31(uVar6,cVar1);
  *pcVar4 = *pcVar4 + cVar1;
  cVar1 = cVar1 + *pcVar4;
  pcVar4 = (char *)CONCAT31(uVar6,cVar1);
  *pcVar4 = *pcVar4 + cVar1;
  cVar1 = cVar1 + *pcVar4;
  pcVar4 = (char *)CONCAT31(uVar6,cVar1);
  *pcVar4 = *pcVar4 + cVar1;
  *pcVar4 = *pcVar4 + cVar1;
  *unaff_retaddr = *unaff_retaddr | bVar10;
  cVar1 = cVar1 + '\f' + *(char *)CONCAT31(uVar6,cVar1 + '\f');
  pcVar4 = (char *)CONCAT31(uVar6,cVar1);
  *pcVar4 = *pcVar4 + cVar1;
  cVar1 = cVar1 + *pcVar4;
  pcVar4 = (char *)CONCAT31(uVar6,cVar1);
  *pcVar4 = *pcVar4 + cVar1;
  bVar2 = cVar1 + *pcVar4;
  pcVar4 = (char *)CONCAT31(uVar6,bVar2);
  *pcVar4 = *pcVar4 + bVar2;
  iVar7 = (int)param_4 - *param_4;
  *unaff_ESI = *unaff_ESI +
               (bVar2 | *(byte *)CONCAT22((short)((uint)iVar7 >> 0x10),
                                          CONCAT11((char)((uint)iVar7 >> 8) + *pcVar4,(char)iVar7)))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


