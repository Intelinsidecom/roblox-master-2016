/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004041a8
 * Raw Name    : System.IDisposable.Dispose
 * Demangled   : System.IDisposable.Dispose
 * Prototype   : void System.IDisposable.Dispose(undefined4 param_1, byte * param_2, undefined4 param_3, int * param_4)
 * Local Vars  : bVar2, cVar1, piVar3, in_EAX, uVar5, pcVar4, iVar7, uVar6, unaff_EBX, bVar8, cVar10, bVar9, unaff_ESI, uVar11, in_DS, unaff_EDI, unaff_retaddr, param_1, param_2, param_3, param_4
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

void __fastcall
System_IDisposable_Dispose(undefined4 param_1,byte *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  char *in_EAX;
  uint3 uVar5;
  char *pcVar4;
  undefined3 uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  int unaff_EBX;
  undefined2 uVar11;
  char *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_DS;
  byte *unaff_retaddr;
  
  while( true ) {
                    /* .NET CLR Managed Code */
    uVar11 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar8 = (byte)unaff_EBX;
    cVar10 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x46);
    *in_EAX = *in_EAX + (char)in_EAX;
    uVar5 = (uint3)((uint)in_EAX >> 8);
    cVar1 = (char)in_EAX + '\n';
    piVar3 = (int *)CONCAT31(uVar5,cVar1);
    *(char *)piVar3 = (char)*piVar3 + cVar1;
    *piVar3 = (int)(*piVar3 + (int)piVar3);
    *(char *)piVar3 = (char)*piVar3 + cVar1;
    *piVar3 = (int)(*piVar3 + (int)piVar3);
    *(char *)piVar3 = (char)*piVar3 + cVar1;
    *piVar3 = (int)(*piVar3 + (int)piVar3);
    *(char *)piVar3 = (char)*piVar3 + cVar1;
    *piVar3 = (int)(*piVar3 + (int)piVar3);
    *(char *)piVar3 = (char)*piVar3 + cVar1;
    bVar2 = cVar1 - *param_2;
    if ((POPCOUNT(bVar2) & 1U) == 0) break;
    bVar2 = in((short)param_2);
    pcVar4 = (char *)CONCAT31(uVar5,bVar2);
    *unaff_EDI = *unaff_EDI + bVar2;
    *pcVar4 = *pcVar4 + bVar2;
    *pcVar4 = *pcVar4 + bVar2;
    bVar9 = cVar10 + *(char *)(CONCAT22(uVar11,CONCAT11(cVar10,bVar8)) + -0x47);
    *pcVar4 = *pcVar4 + bVar2;
    cVar1 = bVar2 + 0x2a;
    piVar3 = (int *)CONCAT31(uVar5,cVar1);
    cVar10 = (char)param_2;
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11(((char)((uint)param_2 >> 8) -
                                        *(char *)(CONCAT22(uVar11,CONCAT11(bVar9,bVar8)) + -4)) -
                                        (0xd5 < bVar2),cVar10));
    *(char *)piVar3 = (char)*piVar3 + cVar1;
    unaff_EBX = CONCAT22(uVar11,CONCAT11(bVar9 | *param_2,bVar8));
    unaff_ESI = unaff_ESI + -*piVar3;
    cVar1 = cVar1 + (char)*piVar3;
    pcVar4 = (char *)CONCAT31(uVar5,cVar1);
    *pcVar4 = *pcVar4 + cVar1;
    in_EAX = (char *)((uint)uVar5 << 8);
    *unaff_retaddr = *unaff_retaddr + cVar10;
    unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_DS);
  }
  *(char *)CONCAT31(uVar5,bVar2) = *(char *)CONCAT31(uVar5,bVar2) + bVar2;
  piVar3 = (int *)CONCAT31(uVar5,bVar2 + 0xb);
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


