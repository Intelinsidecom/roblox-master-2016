/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004030b0
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 description, byte * param_2)
 * Local Vars  : cVar1, bVar2, cVar3, in_EAX, pcVar4, pbVar5, piVar6, uVar7, bVar8, cVar9, description, unaff_ESI, pbVar10, unaff_retaddr, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

void __fastcall _ctor(undefined4 description,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char *in_EAX;
  undefined3 uVar7;
  byte *pbVar5;
  byte bVar8;
  char cVar9;
  char *unaff_ESI;
  byte *pbVar10;
  undefined4 unaff_retaddr;
  char *pcVar4;
  int *piVar6;
  
                    /* .NET CLR Managed Code */
  bVar8 = (char)((uint)description >> 8) + *in_EAX;
  *unaff_ESI = *unaff_ESI + (byte)unaff_ESI;
  uVar7 = (undefined3)((uint)unaff_ESI >> 8);
  bVar2 = (byte)unaff_ESI | *param_2;
  pcVar4 = (char *)CONCAT31(uVar7,bVar2);
  *pcVar4 = *pcVar4 + bVar2;
  cVar9 = (char)unaff_retaddr - *in_EAX;
  cVar1 = *(char *)(CONCAT31((int3)((uint)unaff_retaddr >> 8),cVar9) + 0x34);
  *pcVar4 = *pcVar4 + bVar2;
  bVar2 = bVar2 + 0x2a & *param_2;
  *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar2 + 0x2a);
  pcVar4 = (char *)CONCAT22((short)((uint)description >> 0x10),
                            CONCAT11(bVar8 + *pbVar5,(char)description));
  pbVar5 = pbVar5 + (uint)CARRY1(bVar8,*pbVar5) + *(int *)pbVar5;
  *param_2 = *param_2 + (char)description;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  cVar3 = (byte)pbVar5 - *pbVar5;
  piVar6 = (int *)CONCAT31(uVar7,cVar3);
  pbVar10 = (byte *)(in_EAX + (uint)((byte)pbVar5 < *pbVar5) + *piVar6);
  bVar8 = cVar3 + (char)*piVar6;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar8);
  *pbVar5 = *pbVar5 + bVar8;
  *pcVar4 = *pcVar4 + (char)param_2;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  piVar6 = (int *)(CONCAT22((short)((uint)unaff_retaddr >> 0x10),
                            CONCAT11((char)((uint)unaff_retaddr >> 8) + cVar1,cVar9)) + -0x41);
  *piVar6 = (int)(pbVar10 + (uint)CARRY1(bVar2,bVar8) + *piVar6);
  *pbVar5 = *pbVar5 + bVar8;
  bVar8 = bVar8 | *pbVar10;
  *(char *)CONCAT31(uVar7,bVar8) = *(char *)CONCAT31(uVar7,bVar8) + bVar8;
  pcVar4 = (char *)CONCAT31(uVar7,bVar8 + 0x7b);
  *pcVar4 = *pcVar4 + bVar8 + 0x7b;
  pbVar10[CONCAT31(uVar7,bVar8 - 8) + -1] = pbVar10[CONCAT31(uVar7,bVar8 - 8) + -1] + (bVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


