/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402fcb
 * Raw Name    : set_SliceOption
 * Demangled   : set_SliceOption
 * Prototype   : void set_SliceOption(undefined4 value, byte * param_2)
 * Local Vars  : pcStack_24, cVar1, bVar2, bVar3, cVar4, in_EAX, pcVar5, pbVar6, piVar7, uVar8, uVar9, uVar10, bVar11, uVar12, uVar13, cVar14, unaff_EBX, pcVar15, cVar16, uVar17, unaff_ESI, in_ES, in_DS, value, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall set_SliceOption(undefined4 value,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_EAX;
  undefined3 uVar8;
  byte *pbVar6;
  int *piVar7;
  undefined1 uVar9;
  byte bVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  char cVar14;
  char cVar16;
  char *unaff_EBX;
  undefined2 uVar17;
  char *pcVar15;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_24;
  char *pcVar5;
  undefined4 uVar10;
  
                    /* .NET CLR Managed Code */
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (char)in_EAX + *unaff_EBX;
  pcVar5 = (char *)CONCAT31(uVar8,cVar1);
  if (SCARRY1((char)in_EAX,*unaff_EBX) != cVar1 < '\0') {
    *pcVar5 = *pcVar5 + cVar1;
    pcVar5 = (char *)CONCAT31(uVar8,cVar1 + '*');
    uVar12 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar16 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x20];
    *pcVar5 = *pcVar5 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
    unaff_EBX = (char *)CONCAT22(uVar12,CONCAT11(cVar16 + *(char *)(CONCAT22(uVar12,CONCAT11(cVar16,
                                                  (char)unaff_EBX)) + 0x21),(char)unaff_EBX));
    *pcVar5 = *pcVar5 + bVar2 + 0x2a;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x54 & *param_2);
  }
  cVar1 = (char)pcVar5;
  *pcVar5 = *pcVar5 + cVar1;
  uVar8 = (undefined3)((uint)pcVar5 >> 8);
  pcVar5 = (char *)CONCAT31(uVar8,cVar1 + '*');
  uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar13 = SUB41(unaff_EBX,0);
  cVar16 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x22];
  *pcVar5 = *pcVar5 + cVar1 + '*';
  bVar2 = cVar1 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
  uVar12 = (undefined2)((uint)value >> 0x10);
  uVar9 = (undefined1)value;
  bVar11 = (char)((uint)value >> 8) + *pcVar5;
  uVar10 = CONCAT22(uVar12,CONCAT11(bVar11,uVar9));
  cVar16 = cVar16 + *(char *)(CONCAT22(uVar17,CONCAT11(cVar16,uVar13)) + 0x25);
  *pcVar5 = *pcVar5 + bVar2 + 0x2a;
  bVar2 = bVar2 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
  pcVar15 = (char *)CONCAT22(uVar17,CONCAT11(cVar16 + *(char *)(CONCAT22(uVar17,CONCAT11(cVar16,
                                                  uVar13)) + 0x26),uVar13));
  *pcVar5 = *pcVar5 + bVar2 + 0x2a;
  bVar2 = bVar2 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  cVar1 = bVar2 + 0x2a;
  pcVar5 = (char *)CONCAT31(uVar8,cVar1);
  cVar16 = (char)param_2;
  if ((POPCOUNT(cVar1) & 1U) == 0) {
    *pcVar5 = *pcVar5 + cVar1;
    pbVar6 = (byte *)(CONCAT31(uVar8,bVar2 + 0x4f) + -0x33282610);
    bVar2 = *pbVar6;
    bVar3 = (byte)pbVar6;
    *pbVar6 = *pbVar6 + bVar3;
    uVar8 = (undefined3)((uint)pbVar6 >> 8);
    if (!CARRY1(bVar2,bVar3)) {
      if (!SCARRY1(bVar3,'\0')) {
        *pbVar6 = *pbVar6 + bVar3;
        uVar10 = CONCAT22(uVar12,CONCAT11(bVar11 | *param_2,uVar9));
        bVar3 = bVar3 & *param_2;
        *(char *)CONCAT31(uVar8,bVar3) = *(char *)CONCAT31(uVar8,bVar3) + bVar3;
        pcVar5 = (char *)CONCAT31(uVar8,bVar3 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar5 = (char *)CONCAT31(uVar8,bVar3 + *pcVar15);
      if (SCARRY1(bVar3,*pcVar15) != (char)(bVar3 + *pcVar15) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar2 = bVar3 + *pcVar15;
    pbVar6 = (byte *)CONCAT31(uVar8,bVar2);
    if (SCARRY1(bVar3,*pcVar15) == (char)bVar2 < '\0') {
      pcVar5 = (char *)CONCAT22(uVar12,CONCAT11(bVar11 | *param_2,uVar9));
      *pcVar15 = *pcVar15 + cVar16;
      *param_2 = *param_2 ^ bVar2;
      *(char *)((int)pbVar6 * 2) = *(char *)((int)pbVar6 * 2) + bVar2;
      goto code_r0x004030df;
    }
  }
  else {
code_r0x00403058:
    *pcVar5 = *pcVar5 + (char)pcVar5;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    bVar2 = (char)pcVar5 + 0x2aU & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
    *pcVar5 = *pcVar5 + bVar2 + 0x2a;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x54 & *param_2);
code_r0x00403072:
    cVar1 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar1;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    pcVar5 = (char *)CONCAT31(uVar8,cVar1 + '*');
    *pcVar5 = *pcVar5 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcStack_24 = (char *)CONCAT22(pcStack_24._2_2_,in_DS);
    uVar10 = CONCAT22((short)((uint)uVar10 >> 0x10),
                      CONCAT11((char)((uint)uVar10 >> 8) + *(char *)CONCAT31(uVar8,bVar2 + 0x2a),
                               (char)uVar10));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar16;
    pcVar5 = pcStack_24;
code_r0x0040309a:
    cVar1 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar1;
    pcStack_24 = (char *)CONCAT22(pcStack_24._2_2_,in_ES);
    *pcVar5 = *pcVar5 + cVar1;
    pbVar6 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),cVar1 + 0x2aU & *param_2);
  }
  cVar1 = (char)pbVar6;
  *pbVar6 = *pbVar6 + cVar1;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar4 = cVar1 + '*';
  pcVar5 = (char *)CONCAT31(uVar8,cVar4);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar16;
  *pcVar5 = *pcVar5 + cVar4;
  cVar14 = (char)pcStack_24 - *unaff_ESI;
  pcVar15 = (char *)CONCAT22((short)((uint)pcStack_24 >> 0x10),
                             CONCAT11((char)((uint)pcStack_24 >> 8) +
                                      *(char *)(CONCAT31((int3)((uint)pcStack_24 >> 8),cVar14) +
                                               0x34),cVar14));
  *pcVar5 = *pcVar5 + cVar4;
  bVar2 = cVar1 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar2 + 0x2a);
  bVar2 = (byte)((uint)uVar10 >> 8);
  pcVar5 = (char *)CONCAT22((short)((uint)uVar10 >> 0x10),CONCAT11(bVar2 + *pbVar6,(char)uVar10));
  pbVar6 = pbVar6 + (uint)CARRY1(bVar2,*pbVar6) + *(int *)pbVar6;
  *param_2 = *param_2 + (char)uVar10;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar1 = (byte)pbVar6 - *pbVar6;
  piVar7 = (int *)CONCAT31(uVar8,cVar1);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar6 < *pbVar6) + *piVar7;
  cVar1 = cVar1 + (char)*piVar7;
  pbVar6 = (byte *)CONCAT31(uVar8,cVar1);
  *pbVar6 = *pbVar6 + cVar1;
code_r0x004030df:
  *pcVar5 = *pcVar5 + cVar16;
  bVar2 = *pbVar6;
  bVar11 = (byte)pbVar6;
  *pbVar6 = *pbVar6 + bVar11;
  *(byte **)(pcVar15 + -0x41) = unaff_ESI + (uint)CARRY1(bVar2,bVar11) + *(int *)(pcVar15 + -0x41);
  *pbVar6 = *pbVar6 + bVar11;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  bVar11 = bVar11 | *unaff_ESI;
  *(char *)CONCAT31(uVar8,bVar11) = *(char *)CONCAT31(uVar8,bVar11) + bVar11;
  pcVar5 = (char *)CONCAT31(uVar8,bVar11 + 0x7b);
  *pcVar5 = *pcVar5 + bVar11 + 0x7b;
  unaff_ESI[CONCAT31(uVar8,bVar11 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar8,bVar11 - 8) + -1] + (bVar11 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


