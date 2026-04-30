/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004030a7
 * Raw Name    : set_Description
 * Demangled   : set_Description
 * Prototype   : void set_Description(undefined4 value, byte * param_2)
 * Local Vars  : bVar1, cVar2, bVar3, in_EAX, pcVar4, pbVar5, piVar6, param_2, uVar7, value, bVar8, cVar9, cVar10, unaff_EBX, unaff_ESI, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004030d5) overlaps instruction at (ram,0x004030d4)
    */

void __fastcall set_Description(undefined4 value,byte *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_EAX;
  undefined3 uVar7;
  byte *pbVar5;
  int *piVar6;
  byte bVar8;
  char cVar9;
  char cVar10;
  char *unaff_EBX;
  byte *unaff_ESI;
  undefined4 unaff_retaddr;
  char *pcVar4;
  
                    /* .NET CLR Managed Code */
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  bVar1 = (char)in_EAX + *unaff_EBX;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar1);
  cVar9 = (char)param_2;
  bVar3 = (byte)((uint)value >> 8);
  if (SCARRY1((char)in_EAX,*unaff_EBX) == (char)bVar1 < '\0') {
    bVar8 = bVar3 | *param_2;
    *unaff_EBX = *unaff_EBX + cVar9;
    *param_2 = *param_2 ^ bVar1;
    *(char *)((int)pbVar5 * 2) = *(char *)((int)pbVar5 * 2) + bVar1;
  }
  else {
    *pbVar5 = *pbVar5 + bVar1;
    cVar2 = bVar1 + 0x2a;
    pcVar4 = (char *)CONCAT31(uVar7,cVar2);
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
    *pcVar4 = *pcVar4 + cVar2;
    cVar10 = (char)unaff_retaddr - *unaff_ESI;
    unaff_EBX = (char *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),
                                 CONCAT11((char)((uint)unaff_retaddr >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)unaff_retaddr >> 8),cVar10
                                                            ) + 0x34),cVar10));
    *pcVar4 = *pcVar4 + cVar2;
    bVar1 = bVar1 + 0x54 & *param_2;
    *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
    pbVar5 = (byte *)CONCAT31(uVar7,bVar1 + 0x2a);
    bVar8 = bVar3 + *pbVar5;
    pbVar5 = pbVar5 + (uint)CARRY1(bVar3,*pbVar5) + *(int *)pbVar5;
    *param_2 = *param_2 + (char)value;
    uVar7 = (undefined3)((uint)pbVar5 >> 8);
    cVar2 = (byte)pbVar5 - *pbVar5;
    piVar6 = (int *)CONCAT31(uVar7,cVar2);
    unaff_ESI = unaff_ESI + (uint)((byte)pbVar5 < *pbVar5) + *piVar6;
    cVar2 = cVar2 + (char)*piVar6;
    pbVar5 = (byte *)CONCAT31(uVar7,cVar2);
    *pbVar5 = *pbVar5 + cVar2;
  }
  pcVar4 = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar8,(char)value));
  *pcVar4 = *pcVar4 + cVar9;
  bVar1 = *pbVar5;
  bVar3 = (byte)pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  *(byte **)(unaff_EBX + -0x41) =
       unaff_ESI + (uint)CARRY1(bVar1,bVar3) + *(int *)(unaff_EBX + -0x41);
  *pbVar5 = *pbVar5 + bVar3;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  bVar3 = bVar3 | *unaff_ESI;
  *(char *)CONCAT31(uVar7,bVar3) = *(char *)CONCAT31(uVar7,bVar3) + bVar3;
  pcVar4 = (char *)CONCAT31(uVar7,bVar3 + 0x7b);
  *pcVar4 = *pcVar4 + bVar3 + 0x7b;
  unaff_ESI[CONCAT31(uVar7,bVar3 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar7,bVar3 - 8) + -1] + (bVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


