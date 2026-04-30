/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004030e4
 * Raw Name    : <ConvertToUnified>b__2
 * Demangled   : <ConvertToUnified>b__2
 * Prototype   : pointer <ConvertToUnified>b__2(undefined4 pair, byte * param_2)
 * Local Vars  : bVar2, cVar1, pcVar3, in_EAX, pair, piVar5, pbVar4, bVar7, param_2, uVar6, cVar9, bVar8, unaff_EBX, cVar10, in_CF, unaff_ESI, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004030d5) overlaps instruction at (ram,0x004030d4)
    */

undefined * __fastcall <ConvertToUnified>b__2(undefined4 pair,byte *param_2)

{
  char cVar1;
  byte bVar2;
  undefined3 uVar6;
  byte *pbVar4;
  int *piVar5;
  byte *in_EAX;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  char *unaff_EBX;
  byte *unaff_ESI;
  bool in_CF;
  undefined4 unaff_retaddr;
  char *pcVar3;
  
                    /* .NET CLR Managed Code */
  if (!in_CF) {
    cVar1 = (char)in_EAX;
    uVar6 = (undefined3)
            (CONCAT22((short)((uint)in_EAX >> 0x10),
                      CONCAT11((char)((uint)in_EAX >> 8) - *param_2,cVar1)) >> 8);
    bVar2 = cVar1 + *unaff_EBX;
    in_EAX = (byte *)CONCAT31(uVar6,bVar2);
    cVar9 = (char)param_2;
    bVar7 = (byte)((uint)pair >> 8);
    if (SCARRY1(cVar1,*unaff_EBX) == (char)bVar2 < '\0') {
      bVar8 = bVar7 | *param_2;
      *unaff_EBX = *unaff_EBX + cVar9;
      *param_2 = *param_2 ^ bVar2;
      *(char *)((int)in_EAX * 2) = *(char *)((int)in_EAX * 2) + bVar2;
    }
    else {
      *in_EAX = *in_EAX + bVar2;
      cVar1 = bVar2 + 0x2a;
      pcVar3 = (char *)CONCAT31(uVar6,cVar1);
      unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
      *pcVar3 = *pcVar3 + cVar1;
      cVar10 = (char)unaff_retaddr - *unaff_ESI;
      unaff_EBX = (char *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),
                                   CONCAT11((char)((uint)unaff_retaddr >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_retaddr >> 8),
                                                               cVar10) + 0x34),cVar10));
      *pcVar3 = *pcVar3 + cVar1;
      bVar2 = bVar2 + 0x54 & *param_2;
      *(char *)CONCAT31(uVar6,bVar2) = *(char *)CONCAT31(uVar6,bVar2) + bVar2;
      pbVar4 = (byte *)CONCAT31(uVar6,bVar2 + 0x2a);
      bVar8 = bVar7 + *pbVar4;
      pbVar4 = pbVar4 + (uint)CARRY1(bVar7,*pbVar4) + *(int *)pbVar4;
      *param_2 = *param_2 + (char)pair;
      uVar6 = (undefined3)((uint)pbVar4 >> 8);
      cVar1 = (byte)pbVar4 - *pbVar4;
      piVar5 = (int *)CONCAT31(uVar6,cVar1);
      unaff_ESI = unaff_ESI + (uint)((byte)pbVar4 < *pbVar4) + *piVar5;
      cVar1 = cVar1 + (char)*piVar5;
      in_EAX = (byte *)CONCAT31(uVar6,cVar1);
      *in_EAX = *in_EAX + cVar1;
    }
    pcVar3 = (char *)CONCAT22((short)((uint)pair >> 0x10),CONCAT11(bVar8,(char)pair));
    *pcVar3 = *pcVar3 + cVar9;
    bVar2 = *in_EAX;
    *in_EAX = *in_EAX + (byte)in_EAX;
    *(byte **)(unaff_EBX + -0x41) =
         unaff_ESI + (uint)CARRY1(bVar2,(byte)in_EAX) + *(int *)(unaff_EBX + -0x41);
  }
  *in_EAX = *in_EAX + (byte)in_EAX;
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  bVar2 = (byte)in_EAX | *unaff_ESI;
  *(char *)CONCAT31(uVar6,bVar2) = *(char *)CONCAT31(uVar6,bVar2) + bVar2;
  pcVar3 = (char *)CONCAT31(uVar6,bVar2 + 0x7b);
  *pcVar3 = *pcVar3 + bVar2 + 0x7b;
  unaff_ESI[CONCAT31(uVar6,bVar2 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar6,bVar2 - 8) + -1] + (bVar2 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


