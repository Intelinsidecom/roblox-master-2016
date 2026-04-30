/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403017
 * Raw Name    : set_ConfigurationDatabaseServer
 * Demangled   : set_ConfigurationDatabaseServer
 * Prototype   : void set_ConfigurationDatabaseServer(undefined4 value, byte * param_2)
 * Local Vars  : uStack_8, cVar1, bVar2, bVar3, cVar4, bVar5, in_EAX, pcVar6, pbVar7, piVar8, uVar9, uVar10, cVar11, cVar12, value, unaff_EBX, unaff_ESI, in_ES, in_DS, bVar13, unaff_retaddr, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall set_ConfigurationDatabaseServer(undefined4 value,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined4 in_EAX;
  undefined3 uVar9;
  char *pcVar6;
  byte *pbVar7;
  int *piVar8;
  undefined2 uVar10;
  char cVar11;
  char cVar12;
  byte *unaff_EBX;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar13;
  uint unaff_retaddr;
  undefined4 uStack_8;
  
                    /* .NET CLR Managed Code */
  bVar2 = (byte)in_EAX;
  bVar13 = CARRY1(bVar2,*unaff_EBX);
  uVar9 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = bVar2 + *unaff_EBX;
  pbVar7 = (byte *)CONCAT31(uVar9,cVar1);
  cVar11 = (char)param_2;
  if (SCARRY1(bVar2,*unaff_EBX) == cVar1 < '\0') {
code_r0x00403040:
    uVar9 = (undefined3)((uint)pbVar7 >> 8);
    bVar5 = (byte)((uint)value >> 8);
    uVar10 = (undefined2)((uint)value >> 0x10);
    bVar2 = (byte)pbVar7;
    if (!bVar13) {
      if (!SCARRY1(bVar2,'\0')) {
        *pbVar7 = *pbVar7 + bVar2;
        value = CONCAT22(uVar10,CONCAT11(bVar5 | *param_2,(char)value));
        bVar2 = bVar2 & *param_2;
        *(char *)CONCAT31(uVar9,bVar2) = *(char *)CONCAT31(uVar9,bVar2) + bVar2;
        pcVar6 = (char *)CONCAT31(uVar9,bVar2 + 0x2a);
        unaff_retaddr = unaff_retaddr & 0xffff0000;
        goto code_r0x00403058;
      }
      pcVar6 = (char *)CONCAT31(uVar9,bVar2 + *unaff_EBX);
      if (SCARRY1(bVar2,*unaff_EBX) != (char)(bVar2 + *unaff_EBX) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar3 = bVar2 + *unaff_EBX;
    pbVar7 = (byte *)CONCAT31(uVar9,bVar3);
    if (SCARRY1(bVar2,*unaff_EBX) == (char)bVar3 < '\0') {
      pcVar6 = (char *)CONCAT22(uVar10,CONCAT11(bVar5 | *param_2,(char)value));
      *unaff_EBX = *unaff_EBX + cVar11;
      *param_2 = *param_2 ^ bVar3;
      *(char *)((int)pbVar7 * 2) = *(char *)((int)pbVar7 * 2) + bVar3;
      goto code_r0x004030df;
    }
  }
  else {
    *pbVar7 = *pbVar7 + cVar1;
    pcVar6 = (char *)CONCAT31(uVar9,cVar1 + '*');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x26],
                                          (char)unaff_EBX));
    *pcVar6 = *pcVar6 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar9,bVar2) = *(char *)CONCAT31(uVar9,bVar2) + bVar2;
    cVar1 = bVar2 + 0x2a;
    pcVar6 = (char *)CONCAT31(uVar9,cVar1);
    uStack_8._2_2_ = 0;
    uVar10 = uStack_8._2_2_;
    uStack_8._2_2_ = 0;
    if ((POPCOUNT(cVar1) & 1U) == 0) {
      *pcVar6 = *pcVar6 + cVar1;
      pbVar7 = (byte *)(CONCAT31(uVar9,bVar2 + 0x4f) + -0x33282610);
      bVar13 = CARRY1(*pbVar7,(byte)pbVar7);
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      uStack_8._2_2_ = uVar10;
      goto code_r0x00403040;
    }
code_r0x00403058:
    *pcVar6 = *pcVar6 + (char)pcVar6;
    uVar9 = (undefined3)((uint)pcVar6 >> 8);
    bVar2 = (char)pcVar6 + 0x2aU & *param_2;
    *(char *)CONCAT31(uVar9,bVar2) = *(char *)CONCAT31(uVar9,bVar2) + bVar2;
    pcVar6 = (char *)CONCAT31(uVar9,bVar2 + 0x2a);
    unaff_retaddr = unaff_retaddr & 0xffff0000;
    *pcVar6 = *pcVar6 + bVar2 + 0x2a;
    pcVar6 = (char *)CONCAT31(uVar9,bVar2 + 0x54 & *param_2);
code_r0x00403072:
    cVar1 = (char)pcVar6;
    *pcVar6 = *pcVar6 + cVar1;
    uVar9 = (undefined3)((uint)pcVar6 >> 8);
    pcVar6 = (char *)CONCAT31(uVar9,cVar1 + '*');
    unaff_retaddr = unaff_retaddr & 0xffff0000;
    *pcVar6 = *pcVar6 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar9,bVar2) = *(char *)CONCAT31(uVar9,bVar2) + bVar2;
    uStack_8 = (char *)CONCAT22(uStack_8._2_2_,in_DS);
    value = CONCAT22((short)((uint)value >> 0x10),
                     CONCAT11((char)((uint)value >> 8) + *(char *)CONCAT31(uVar9,bVar2 + 0x2a),
                              (char)value));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar11;
    pcVar6 = uStack_8;
code_r0x0040309a:
    cVar1 = (char)pcVar6;
    *pcVar6 = *pcVar6 + cVar1;
    unaff_retaddr = CONCAT22((short)(unaff_retaddr >> 0x10),in_ES);
    *pcVar6 = *pcVar6 + cVar1;
    pbVar7 = (byte *)CONCAT31((int3)((uint)pcVar6 >> 8),cVar1 + 0x2aU & *param_2);
  }
  cVar1 = (char)pbVar7;
  *pbVar7 = *pbVar7 + cVar1;
  uVar9 = (undefined3)((uint)pbVar7 >> 8);
  cVar4 = cVar1 + '*';
  pcVar6 = (char *)CONCAT31(uVar9,cVar4);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar11;
  *pcVar6 = *pcVar6 + cVar4;
  cVar12 = (char)unaff_retaddr - *unaff_ESI;
  unaff_EBX = (byte *)CONCAT22((short)(unaff_retaddr >> 0x10),
                               CONCAT11((char)(unaff_retaddr >> 8) +
                                        *(char *)(CONCAT31((int3)(unaff_retaddr >> 8),cVar12) + 0x34
                                                 ),cVar12));
  *pcVar6 = *pcVar6 + cVar4;
  bVar2 = cVar1 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar9,bVar2) = *(char *)CONCAT31(uVar9,bVar2) + bVar2;
  pbVar7 = (byte *)CONCAT31(uVar9,bVar2 + 0x2a);
  bVar2 = (byte)((uint)value >> 8);
  pcVar6 = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar2 + *pbVar7,(char)value));
  pbVar7 = pbVar7 + (uint)CARRY1(bVar2,*pbVar7) + *(int *)pbVar7;
  *param_2 = *param_2 + (char)value;
  uVar9 = (undefined3)((uint)pbVar7 >> 8);
  cVar1 = (byte)pbVar7 - *pbVar7;
  piVar8 = (int *)CONCAT31(uVar9,cVar1);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar7 < *pbVar7) + *piVar8;
  cVar1 = cVar1 + (char)*piVar8;
  pbVar7 = (byte *)CONCAT31(uVar9,cVar1);
  *pbVar7 = *pbVar7 + cVar1;
code_r0x004030df:
  *pcVar6 = *pcVar6 + cVar11;
  bVar2 = *pbVar7;
  bVar5 = (byte)pbVar7;
  *pbVar7 = *pbVar7 + bVar5;
  *(byte **)(unaff_EBX + -0x41) =
       unaff_ESI + (uint)CARRY1(bVar2,bVar5) + *(int *)(unaff_EBX + -0x41);
  *pbVar7 = *pbVar7 + bVar5;
  uVar9 = (undefined3)((uint)pbVar7 >> 8);
  bVar5 = bVar5 | *unaff_ESI;
  *(char *)CONCAT31(uVar9,bVar5) = *(char *)CONCAT31(uVar9,bVar5) + bVar5;
  pcVar6 = (char *)CONCAT31(uVar9,bVar5 + 0x7b);
  *pcVar6 = *pcVar6 + bVar5 + 0x7b;
  unaff_ESI[CONCAT31(uVar9,bVar5 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar9,bVar5 - 8) + -1] + (bVar5 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


