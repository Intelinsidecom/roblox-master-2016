/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404195
 * Raw Name    : System.Collections.IEnumerator.Reset
 * Demangled   : System.Collections.IEnumerator.Reset
 * Prototype   : void System.Collections.IEnumerator.Reset(byte * param_1, byte * param_2, undefined4 param_3, int * param_4)
 * Local Vars  : bVar2, cVar1, piVar3, in_EAX, uVar5, pcVar4, iVar7, uVar6, unaff_EBX, bVar8, param_1, param_2, uVar10, bVar9, param_3, param_4, unaff_EDI, unaff_ESI, in_CF, in_DS, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404193) overlaps instruction at (ram,0x00404192)
    */

void __fastcall
System_Collections_IEnumerator_Reset(byte *param_1,byte *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  int *in_EAX;
  uint3 uVar5;
  int *piVar3;
  char *pcVar4;
  undefined3 uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  int unaff_EBX;
  undefined2 uVar10;
  char *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_DS;
  undefined1 in_CF;
  byte *unaff_retaddr;
  
                    /* .NET CLR Managed Code */
  while (!(bool)in_CF) {
    bVar9 = (byte)unaff_EBX;
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),bVar9 - *param_2);
    in_CF = bVar9 < *param_2;
  }
  while( true ) {
    *(char *)in_EAX = (char)*in_EAX + (char)in_EAX;
    uVar10 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar8 = (byte)unaff_EBX;
    bVar9 = (byte)((uint)unaff_EBX >> 8) | *param_2;
    unaff_ESI = unaff_ESI + -*in_EAX;
    uVar5 = (uint3)((uint)in_EAX >> 8);
    cVar1 = (char)in_EAX + (char)*in_EAX;
    pcVar4 = (char *)CONCAT31(uVar5,cVar1);
    *pcVar4 = *pcVar4 + cVar1;
    *param_1 = *param_1 + (char)param_2;
    cVar1 = bVar9 + *(char *)(CONCAT22(uVar10,CONCAT11(bVar9,bVar8)) + -0x46);
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
    bVar9 = *param_2;
    bVar2 = -bVar9 + 10;
    if ((POPCOUNT(bVar2) & 1U) == 0) break;
    bVar9 = in((short)param_2);
    pcVar4 = (char *)CONCAT31(uVar5,bVar9);
    *unaff_EDI = *unaff_EDI + bVar9;
    *pcVar4 = *pcVar4 + bVar9;
    *pcVar4 = *pcVar4 + bVar9;
    unaff_EBX = CONCAT22(uVar10,CONCAT11(cVar1 + *(char *)(CONCAT22(uVar10,CONCAT11(cVar1,bVar8)) +
                                                          -0x47),bVar8));
    *pcVar4 = *pcVar4 + bVar9;
    in_EAX = (int *)CONCAT31(uVar5,bVar9 + 0x2a);
    param_2._1_1_ = (char)((uint)param_2 >> 8);
    param_2._2_2_ = (undefined2)((uint)param_2 >> 0x10);
    param_2._1_1_ = (param_2._1_1_ - *(char *)(unaff_EBX + -4)) - (0xd5 < bVar9);
    param_2._0_2_ = CONCAT11(param_2._1_1_,(char)param_2);
    param_2 = (byte *)CONCAT22(param_2._2_2_,param_2._0_2_);
    param_1 = unaff_retaddr;
    unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_DS);
  }
  *(char *)CONCAT31(uVar5,bVar2) = *(char *)CONCAT31(uVar5,bVar2) + bVar2;
  piVar3 = (int *)CONCAT31(uVar5,-bVar9 + '\x15');
  unaff_retaddr[0x45] = (unaff_retaddr[0x45] - bVar8) - (0xf4 < bVar2);
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
  *unaff_retaddr = *unaff_retaddr | bVar8;
  cVar1 = cVar1 + '\f' + *(char *)CONCAT31(uVar6,cVar1 + '\f');
  pcVar4 = (char *)CONCAT31(uVar6,cVar1);
  *pcVar4 = *pcVar4 + cVar1;
  cVar1 = cVar1 + *pcVar4;
  pcVar4 = (char *)CONCAT31(uVar6,cVar1);
  *pcVar4 = *pcVar4 + cVar1;
  bVar9 = cVar1 + *pcVar4;
  pcVar4 = (char *)CONCAT31(uVar6,bVar9);
  *pcVar4 = *pcVar4 + bVar9;
  iVar7 = (int)param_4 - *param_4;
  *unaff_ESI = *unaff_ESI +
               (bVar9 | *(byte *)CONCAT22((short)((uint)iVar7 >> 0x10),
                                          CONCAT11((char)((uint)iVar7 >> 8) + *pcVar4,(char)iVar7)))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


