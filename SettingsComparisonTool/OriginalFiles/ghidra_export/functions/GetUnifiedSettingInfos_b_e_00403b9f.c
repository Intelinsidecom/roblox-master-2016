/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403b9f
 * Raw Name    : <GetUnifiedSettingInfos>b__e
 * Demangled   : <GetUnifiedSettingInfos>b__e
 * Prototype   : pointer <GetUnifiedSettingInfos>b__e(undefined4 s, byte * param_2)
 * Local Vars  : bVar2, pcVar1, in_EAX, bVar3, param_2, pcVar5, pbVar4, uVar7, puVar6, pbVar8, unaff_EBX, unaff_ESI, s
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403baf) overlaps instruction at (ram,0x00403baa)
    */
/* WARNING: Unable to track spacebase fully for stack */

undefined * __fastcall <GetUnifiedSettingInfos>b__e(undefined4 s,byte *param_2)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  char *in_EAX;
  byte *pbVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined2 uVar7;
  int unaff_EBX;
  byte *pbVar8;
  undefined4 *unaff_ESI;
  
  uVar7 = (undefined2)s;
                    /* .NET CLR Managed Code */
  pbVar8 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                            CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x35),
                                     (char)unaff_EBX));
  *in_EAX = *in_EAX + (byte)in_EAX;
  bVar2 = (byte)in_EAX | *pbVar8;
  pbVar4 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
  if (bVar2 != 0) {
    *pbVar4 = *pbVar4 + bVar2;
    uVar7 = CONCAT11((byte)((uint)s >> 8) | *param_2,(char)s);
    bVar3 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar2;
    unaff_ESI = (undefined4 *)((int)unaff_ESI + (uint)CARRY1(bVar3,bVar2) + *(int *)pbVar4);
    pbVar4 = pbVar4 + *(int *)pbVar4;
    bVar3 = (char)pbVar4 - *pbVar4;
    pbVar4 = (byte *)CONCAT31((int3)((uint)pbVar4 >> 8),bVar3);
    bVar2 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar3;
    pbVar4 = pbVar4 + (-0x73110000 - (uint)CARRY1(bVar2,bVar3));
  }
  *pbVar4 = *pbVar4 + (char)pbVar4;
  out(*unaff_ESI,(short)param_2);
  pbVar4 = pbVar4 + -*(int *)pbVar4;
  *param_2 = *param_2 + (char)uVar7;
  bVar2 = (char)pbVar4 - *pbVar4;
  pcVar5 = (char *)CONCAT31((int3)((uint)pbVar4 >> 8),bVar2);
  *pbVar8 = *pbVar8 + (char)param_2;
  *pbVar8 = *pbVar8 ^ bVar2;
  *param_2 = *param_2 + (char)((ushort)uVar7 >> 8);
  *pcVar5 = *pcVar5 + bVar2;
  cRam73110000 = cRam73110000 + (char)unaff_EBX;
  pcVar1 = (code *)swi(3);
  puVar6 = (undefined *)(*pcVar1)();
  return puVar6;
}


