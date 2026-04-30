/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040307f
 * Raw Name    : set_NoTimer
 * Demangled   : set_NoTimer
 * Prototype   : void set_NoTimer(undefined4 param_1, byte * param_2)
 * Local Vars  : param_1, pcStack_4, cVar1, bVar2, cVar3, bVar4, in_EAX, pcVar5, pbVar6, piVar7, uVar8, cVar9, cVar10, unaff_EBX, unaff_EBP, unaff_ESI, pbVar11, in_DS, unaff_retaddr, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004030ac) overlaps instruction at (ram,0x004030ab)
    */

void __fastcall set_NoTimer(undefined4 param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined3 uVar8;
  byte *pbVar6;
  char cVar9;
  char cVar10;
  char *unaff_EBX;
  int unaff_EBP;
  char *unaff_ESI;
  byte *pbVar11;
  undefined2 in_DS;
  undefined4 unaff_retaddr;
  char *pcStack_4;
  char *pcVar5;
  int *piVar7;
  
                    /* .NET CLR Managed Code */
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (char)in_EAX + *unaff_EBX;
  pcVar5 = (char *)CONCAT31(uVar8,cVar1);
  cVar9 = (char)param_2;
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar1 < '\0') {
    param_2[unaff_EBP] = param_2[unaff_EBP] + cVar1;
  }
  else {
    *pcVar5 = *pcVar5 + cVar1;
    pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_DS);
    param_1 = CONCAT22((short)((uint)param_1 >> 0x10),
                       CONCAT11((char)((uint)param_1 >> 8) + *(char *)CONCAT31(uVar8,cVar1 + '*'),
                                (char)param_1));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
    cVar1 = (char)in_DS;
    *pcStack_4 = *pcStack_4 + cVar1;
    *pcStack_4 = *pcStack_4 + cVar1;
    uVar8 = (undefined3)((uint)pcStack_4 >> 8);
    bVar2 = cVar1 + 0x2aU & *param_2;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2);
    *pcVar5 = *pcVar5 + bVar2;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
  }
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
  cVar3 = (char)pcVar5;
  *pcVar5 = *pcVar5 + cVar3;
  cVar10 = (char)unaff_retaddr - *unaff_ESI;
  cVar1 = *(char *)(CONCAT31((int3)((uint)unaff_retaddr >> 8),cVar10) + 0x34);
  *pcVar5 = *pcVar5 + cVar3;
  uVar8 = (undefined3)((uint)pcVar5 >> 8);
  bVar2 = cVar3 + 0x2aU & *param_2;
  pcVar5 = (char *)CONCAT31(uVar8,bVar2);
  *pcVar5 = *pcVar5 + bVar2;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar2 + 0x2a);
  bVar2 = (byte)((uint)param_1 >> 8);
  pcVar5 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar2 + *pbVar6,(char)param_1));
  pbVar6 = pbVar6 + (uint)CARRY1(bVar2,*pbVar6) + *(int *)pbVar6;
  *param_2 = *param_2 + (char)param_1;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar3 = (byte)pbVar6 - *pbVar6;
  piVar7 = (int *)CONCAT31(uVar8,cVar3);
  pbVar11 = (byte *)(unaff_ESI + (uint)((byte)pbVar6 < *pbVar6) + *piVar7);
  bVar4 = cVar3 + (char)*piVar7;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar4);
  *pbVar6 = *pbVar6 + bVar4;
  *pcVar5 = *pcVar5 + cVar9;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  piVar7 = (int *)(CONCAT22((short)((uint)unaff_retaddr >> 0x10),
                            CONCAT11((char)((uint)unaff_retaddr >> 8) + cVar1,cVar10)) + -0x41);
  *piVar7 = (int)(pbVar11 + (uint)CARRY1(bVar2,bVar4) + *piVar7);
  *pbVar6 = *pbVar6 + bVar4;
  bVar4 = bVar4 | *pbVar11;
  *(char *)CONCAT31(uVar8,bVar4) = *(char *)CONCAT31(uVar8,bVar4) + bVar4;
  pcVar5 = (char *)CONCAT31(uVar8,bVar4 + 0x7b);
  *pcVar5 = *pcVar5 + bVar4 + 0x7b;
  pbVar11[CONCAT31(uVar8,bVar4 - 8) + -1] = pbVar11[CONCAT31(uVar8,bVar4 - 8) + -1] + (bVar4 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


