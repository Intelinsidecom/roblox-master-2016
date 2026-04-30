/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403088
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 param_1, byte * param_2)
 * Local Vars  : cVar1, bVar2, cVar3, in_EAX, pcVar4, pbVar5, piVar6, param_1, uVar7, bVar8, param_2, cVar9, cVar10, unaff_ESI, pbVar11, in_ES, unaff_retaddr, uVar12
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

void __fastcall _ctor(undefined4 param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char *in_EAX;
  undefined3 uVar7;
  byte *pbVar5;
  int *piVar6;
  byte bVar8;
  char cVar9;
  char cVar10;
  char *unaff_ESI;
  byte *pbVar11;
  undefined2 in_ES;
  char *unaff_retaddr;
  undefined2 uVar12;
  char *pcVar4;
  
                    /* .NET CLR Managed Code */
  bVar8 = (char)((uint)param_1 >> 8) + *in_EAX;
  cVar9 = (char)param_2;
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
  cVar1 = (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + cVar1;
  uVar12 = (undefined2)((uint)unaff_retaddr >> 0x10);
  *unaff_retaddr = *unaff_retaddr + cVar1;
  uVar7 = (undefined3)((uint)unaff_retaddr >> 8);
  bVar2 = cVar1 + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
  cVar3 = bVar2 + 0x2a;
  pcVar4 = (char *)CONCAT31(uVar7,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
  *pcVar4 = *pcVar4 + cVar3;
  cVar10 = (char)in_ES - *unaff_ESI;
  cVar1 = *(char *)(CONCAT31((int3)(CONCAT22(uVar12,in_ES) >> 8),cVar10) + 0x34);
  *pcVar4 = *pcVar4 + cVar3;
  bVar2 = bVar2 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar2 + 0x2a);
  pcVar4 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar8 + *pbVar5,(char)param_1));
  pbVar5 = pbVar5 + (uint)CARRY1(bVar8,*pbVar5) + *(int *)pbVar5;
  *param_2 = *param_2 + (char)param_1;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  cVar3 = (byte)pbVar5 - *pbVar5;
  piVar6 = (int *)CONCAT31(uVar7,cVar3);
  pbVar11 = (byte *)(unaff_ESI + (uint)((byte)pbVar5 < *pbVar5) + *piVar6);
  bVar8 = cVar3 + (char)*piVar6;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar8);
  *pbVar5 = *pbVar5 + bVar8;
  *pcVar4 = *pcVar4 + cVar9;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  piVar6 = (int *)(CONCAT22(uVar12,CONCAT11((char)((ushort)in_ES >> 8) + cVar1,cVar10)) + -0x41);
  *piVar6 = (int)(pbVar11 + (uint)CARRY1(bVar2,bVar8) + *piVar6);
  *pbVar5 = *pbVar5 + bVar8;
  bVar8 = bVar8 | *pbVar11;
  *(char *)CONCAT31(uVar7,bVar8) = *(char *)CONCAT31(uVar7,bVar8) + bVar8;
  pcVar4 = (char *)CONCAT31(uVar7,bVar8 + 0x7b);
  *pcVar4 = *pcVar4 + bVar8 + 0x7b;
  pbVar11[CONCAT31(uVar7,bVar8 - 8) + -1] = pbVar11[CONCAT31(uVar7,bVar8 - 8) + -1] + (bVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


