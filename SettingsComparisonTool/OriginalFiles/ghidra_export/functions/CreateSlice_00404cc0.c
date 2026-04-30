/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404cc0
 * Raw Name    : CreateSlice
 * Demangled   : CreateSlice
 * Prototype   : undefined4 CreateSlice(uint * optionsSets, uint * sliceOption, uint param_3, undefined4 param_4, byte * param_5, uint * param_6, undefined4 param_7, char * param_8)
 * Local Vars  : piVar11, pcVar10, pcVar13, puVar12, uVar15, uVar14, iVar17, bVar16, pcVar19, puVar18, bVar21, iVar20, bVar23, cVar22, uVar25, uVar24, iVar27, pbVar26, cVar29, cVar28, pbVar30, unaff_EBX, uVar32, puVar31, cVar34, bVar33, param_3, unaff_EBP, cVar35, param_4, param_5, unaff_ESI, param_6, pcVar36, in_ES, param_7, param_8, unaff_EDI, in_CF, in_DS, in_AF, bVar37, unaff_retaddr, optionsSets, sliceOption, uStack_58, uStack_56, uStack_57, uStack_14, uStack_54, uVar2, uVar1, bVar4, uVar3, bVar6, cVar5, pbVar7, in_EAX, puVar9, puVar8
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall
CreateSlice(uint *optionsSets,uint *sliceOption,uint param_3,undefined4 param_4,byte *param_5,
           uint *param_6,undefined4 param_7,char *param_8)

{
  uint uVar1;
  undefined6 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined3 uVar14;
  undefined4 in_EAX;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  undefined3 uVar15;
  int *piVar11;
  uint *puVar12;
  char *pcVar13;
  byte bVar16;
  byte bVar21;
  undefined2 uVar24;
  int iVar17;
  char cVar22;
  byte bVar23;
  uint *puVar18;
  char *pcVar19;
  int iVar20;
  undefined2 uVar25;
  byte *pbVar26;
  int iVar27;
  char cVar28;
  char cVar29;
  byte bVar33;
  byte *unaff_EBX;
  byte *pbVar30;
  uint *puVar31;
  char cVar34;
  char cVar35;
  uint uVar32;
  uint unaff_EBP;
  char *pcVar36;
  uint *unaff_ESI;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_DS;
  byte in_CF;
  bool bVar37;
  byte in_AF;
  uint *unaff_retaddr;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_14;
  
                    /* .NET CLR Managed Code */
  bVar16 = (byte)in_EAX + 0xd;
  bVar4 = bVar16 + in_CF;
  puVar8 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar4);
  if ((byte)in_EAX < 0xf3 && !CARRY1(bVar16,in_CF)) {
    *(undefined2 *)puVar8 = in_ES;
    uVar32 = *puVar8;
    *(byte *)puVar8 = (byte)*puVar8 + bVar4;
    pbRam0001246f = (byte *)((int)puVar8 + (int)(pbRam0001246f + CARRY1((byte)uVar32,bVar4)));
  }
  else {
    bVar37 = CARRY4(*puVar8,(uint)puVar8);
    *puVar8 = (uint)(*puVar8 + (int)puVar8);
    puVar18 = unaff_ESI;
    while( true ) {
      unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
      pbVar7 = (byte *)((int)puVar8 + (uint)bVar37 + *(int *)((int)optionsSets + (int)sliceOption));
      cVar22 = (char)pbVar7;
      cVar5 = cVar22 + '\x04';
      puVar8 = (uint *)CONCAT31((int3)((uint)pbVar7 >> 8),cVar5);
      if (SCARRY1(cVar22,'\x04') != cVar5 < '\0') break;
      while( true ) {
        bVar4 = (byte)((uint)optionsSets >> 8);
        uVar24 = (undefined2)((uint)optionsSets >> 0x10);
        bVar16 = (byte)optionsSets;
        cVar22 = bVar4 + (byte)*puVar8;
        puVar9 = (uint *)((int)puVar8 + (uint)CARRY1(bVar4,(byte)*puVar8) + *puVar8);
        *(byte *)sliceOption = (byte)*sliceOption + bVar16;
        cVar5 = bVar16 - *(byte *)((int)sliceOption + 3);
        optionsSets = (uint *)CONCAT31((int3)(CONCAT22(uVar24,CONCAT11(cVar22,bVar16)) >> 8),cVar5);
        if ((POPCOUNT(cVar5) & 1U) != 0) {
          if (bVar16 < *(byte *)((int)sliceOption + 3)) goto code_r0x00404d15;
          *puVar9 = (uint)(*puVar9 + (int)puVar9);
          sliceOption = (uint *)CONCAT31((int3)((uint)sliceOption >> 8),
                                         (byte)sliceOption | *unaff_EBX);
          puVar8 = puVar9 + 0x230e;
          goto code_r0x00404cce;
        }
        *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
        uVar14 = (undefined3)((uint)puVar9 >> 8);
        cVar29 = (char)puVar9 + '\x02';
        pcVar36 = (char *)CONCAT31(uVar14,cVar29);
        if ((POPCOUNT(cVar29) & 1U) == 0) break;
        *(byte *)sliceOption = (byte)*sliceOption + cVar5;
        bVar16 = cVar29 - *pcVar36;
        uVar32 = *optionsSets;
        *(byte *)optionsSets = (byte)*optionsSets + bVar16;
        cVar29 = bVar16 - CARRY1((byte)uVar32,bVar16);
        *(byte *)sliceOption = (byte)*sliceOption + cVar29;
        *(byte *)(unaff_EDI + 0x673b40) = (byte)unaff_EDI[0x673b40] + cVar22;
        puVar8 = (uint *)CONCAT31(uVar14,cVar29);
        *(byte *)puVar8 = (byte)*puVar8 + cVar29;
        *(byte *)sliceOption = (byte)*sliceOption + cVar29;
        *(byte **)(unaff_EBX + 0x58) = (byte *)(*(int *)(unaff_EBX + 0x58) + (int)puVar18);
        optionsSets = (uint *)CONCAT31((int3)(CONCAT22(uVar24,CONCAT11(cVar22 + (char)((uint)puVar9
                                                                                      >> 8),cVar5))
                                             >> 8),cVar5 + *(char *)((int)puVar8 * 2));
        *(byte *)puVar8 = (byte)*puVar8 + cVar29;
        *(byte *)puVar18 = (byte)*puVar18 + (char)unaff_EBX;
      }
      *pcVar36 = *pcVar36 + cVar29;
      *param_8 = *param_8 + (byte)param_8;
      optionsSets = (uint *)CONCAT22((short)((uint)param_7 >> 0x10),
                                     CONCAT11((byte)((uint)param_7 >> 8) | (byte)*param_6,
                                              (char)param_7));
      *param_5 = *param_5 + (char)param_5;
      *(byte *)((int)param_8 * 2) = *(byte *)((int)param_8 * 2) ^ (byte)param_8;
      uVar2 = *(undefined6 *)param_8;
      in_DS = (undefined2)((uint6)uVar2 >> 0x20);
      puVar8 = (uint *)uVar2;
      bVar16 = (byte)uVar2;
      *(byte *)puVar8 = (byte)*puVar8 + bVar16;
      uVar32 = *puVar8;
      *(byte *)puVar8 = (byte)*puVar8 + bVar16;
      puVar18 = (uint *)((int)optionsSets + 0x11673);
      uVar32 = (uint)CARRY1((byte)uVar32,bVar16);
      bVar37 = CARRY4(*puVar18,(uint)param_6) || CARRY4(*puVar18 + (int)param_6,uVar32);
      *puVar18 = *puVar18 + (int)param_6 + uVar32;
      sliceOption = param_6;
      unaff_EBX = param_5;
      unaff_EBP = param_3;
      puVar18 = unaff_retaddr;
      unaff_EDI = unaff_retaddr;
    }
code_r0x00404cce:
    *(byte *)puVar8 = (byte)*puVar8 + (char)puVar8;
    unaff_ESI = puVar18 + 1;
    out(*puVar18,(short)sliceOption);
    uVar32 = *optionsSets;
    uVar3 = *sliceOption;
    *(byte *)sliceOption = (byte)*sliceOption + (byte)optionsSets;
    iVar17 = (CONCAT31((int3)((uint)puVar8 >> 8),(char)puVar8 + '\x03') & uVar32) + iRam00008c38;
    *(byte *)optionsSets = (byte)*optionsSets + (char)sliceOption;
    puVar8 = (uint *)(iVar17 + (uint)CARRY1((byte)uVar3,(byte)optionsSets) + 0x1246f);
  }
  uVar14 = (undefined3)((uint)optionsSets >> 8);
  bVar16 = (byte)optionsSets | (byte)*sliceOption;
  cRam090a0001 = cRam090a0001 - (char)((uint)puVar8 >> 8);
  puVar9 = (uint *)(CONCAT31((int3)((uint)puVar8 >> 8),(char)puVar8 + (byte)*puVar8) + 0x1fbeef2);
  uVar32 = *puVar9;
  *puVar9 = (uint)(*puVar9 + (int)puVar9);
  puVar8 = (uint *)CONCAT31(uVar14,bVar16);
  if (CARRY4(uVar32,(uint)puVar9)) {
    *puVar9 = (uint)(*puVar9 + (int)puVar9);
    pcVar36 = (char *)CONCAT31(uVar14,bVar16 | bRam00282809);
    cVar5 = (char)((uint)optionsSets >> 8);
    *unaff_EBX = *unaff_EBX + cVar5;
    *pcVar36 = *pcVar36 - cVar5;
    *(byte *)puVar9 = *(byte *)puVar9 + (char)puVar9;
    iVar17 = (int)pcVar36 - *(int *)unaff_EBX;
    puVar18 = unaff_ESI + 1;
    out(*unaff_ESI,(short)sliceOption);
    *puVar9 = (uint)(*puVar9 + (int)puVar9);
    optionsSets = (uint *)CONCAT22((short)((uint)iVar17 >> 0x10),
                                   CONCAT11((byte)((uint)iVar17 >> 8) | bRambf73070b,(char)iVar17));
code_r0x00404d15:
    uVar32 = *puVar9;
    bVar16 = (byte)puVar9;
    *(byte *)puVar9 = (byte)*puVar9 + bVar16;
    unaff_ESI = puVar18 + 1;
    out(*puVar18,(short)sliceOption);
    in_AF = 9 < (bVar16 & 0xf) | in_AF;
    bVar4 = bVar16 + in_AF * '\x06';
    puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),
                              bVar4 + (0x90 < (bVar4 & 0xf0) |
                                      CARRY1((byte)uVar32,bVar16) | in_AF * (0xf9 < bVar4)) * '`');
    puVar8 = optionsSets;
  }
  *puVar9 = (uint)(*puVar9 + (int)puVar9);
  bVar16 = (byte)puVar9 | (byte)*unaff_EDI;
  puVar18 = unaff_ESI + 1;
  uVar25 = SUB42(sliceOption,0);
  out(*unaff_ESI,uVar25);
  *(byte *)puVar8 = (byte)*puVar8 - bVar16;
  uVar32 = *sliceOption;
  bVar4 = (byte)puVar8;
  *(byte *)sliceOption = (byte)*sliceOption + bVar4;
  iVar17 = CONCAT31((int3)((uint)puVar9 >> 8),bVar16) + *puVar18 + (uint)CARRY1((byte)uVar32,bVar4);
  pcVar36 = (char *)(unaff_EBP - *sliceOption);
  uVar14 = (undefined3)((uint)iVar17 >> 8);
  cVar5 = (char)iVar17 + (byte)*puVar18 + (unaff_EBP < *sliceOption);
  puVar9 = (uint *)CONCAT31(uVar14,cVar5);
  bVar16 = (byte)((uint)puVar8 >> 8);
  *(byte *)puVar8 = (byte)*puVar8 - bVar16;
  *puVar9 = (uint)(*puVar9 + (int)puVar9);
  bVar4 = bVar4 | *(byte *)((int)sliceOption + (int)puVar9);
  uVar24 = (undefined2)((uint)puVar8 >> 0x10);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)puVar9 = (byte)*puVar9 + cVar5;
    pcVar10 = (char *)CONCAT31(uVar14,cVar5 + '\x12');
    *pcVar10 = *pcVar10 + bVar16;
    puVar9 = (uint *)CONCAT31(uVar14,(cVar5 + '\x12') -
                                     *(char *)CONCAT31((int3)((uint)puVar8 >> 8),bVar4));
    uVar32 = *sliceOption;
    *(byte *)sliceOption = (byte)*sliceOption + bVar4;
    if (CARRY1((byte)uVar32,bVar4)) {
      *unaff_EBX = *unaff_EBX - (char)sliceOption;
      goto code_r0x00404da8;
    }
    pbVar7 = (byte *)((uint)puVar9 | *puVar9);
    out(*puVar18,uVar25);
    *pbVar7 = *pbVar7 + (char)pbVar7;
    bVar21 = *pbVar7;
    piVar11 = (int *)CONCAT22(uVar24,CONCAT11(bVar16 | bVar21,bVar4));
    iVar17 = (int)pbVar7 - *piVar11;
    *(byte *)sliceOption = (byte)*sliceOption + bVar4;
    puVar8 = unaff_ESI + 3;
    out(unaff_ESI[2],uVar25);
    uRam12060000 = (undefined1)iVar17;
    *(char *)((int)piVar11 + iVar17) = *(char *)((int)piVar11 + iVar17) - (bVar16 | bVar21);
    *(byte *)sliceOption = (byte)*sliceOption + bVar4;
    pbVar7 = (byte *)(iVar17 + -0x120edecd);
    *(byte *)puVar8 = (byte)*puVar8 + 1;
    bVar16 = *pbVar7;
    bVar21 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar21;
    pcVar36 = pcVar36 + ((-1 - *(int *)((int)unaff_EDI + 0x42)) - (uint)CARRY1(bVar16,bVar21));
    *pbVar7 = *pbVar7 + bVar21;
    bVar16 = (byte)unaff_EBX | (byte)((uint)pbVar7 >> 8);
    pbRam0000416f = pbRam0000416f + (int)pbVar7;
    uVar32 = *sliceOption;
    pcVar10 = (char *)(((uint)pbVar7 | 0x11) + 0x511072c);
    puVar18 = unaff_ESI + 4;
    out(*puVar8,uVar25);
    sliceOption = (uint *)((int)sliceOption + 1);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    bVar21 = (byte)((uint)pcVar10 >> 8);
    unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                          (byte)uVar32,bVar16)) >> 8),
                                 bVar16 | bVar21);
    uVar14 = (undefined3)((uint)pcVar10 >> 8);
    bVar16 = (char)pcVar10 - *pcVar10;
    pcVar10 = (char *)CONCAT31(uVar14,bVar16);
    *pcVar10 = *pcVar10 + bVar16;
    *(int *)((int)pcVar10 * 2) = (int)(unaff_EBX + *(int *)((int)pcVar10 * 2));
    *(byte *)sliceOption = *(byte *)sliceOption + bVar16;
    *pcVar36 = *pcVar36 + bVar21;
    in_AF = 9 < (bVar16 & 0xf) | in_AF;
    uVar32 = CONCAT31(uVar14,bVar16 + in_AF * '\x06') & 0xffffff0f;
    bVar16 = (byte)uVar32;
    pbVar7 = (byte *)CONCAT22((short)(uVar32 >> 0x10),CONCAT11(bVar21 + in_AF,bVar16));
    *(byte *)puVar18 = (byte)*puVar18 + bVar4;
    *pbVar7 = *pbVar7 + bVar16;
    *pbVar7 = *pbVar7 + bVar16;
    bVar37 = CARRY1(bVar16,*pbVar7);
    puVar9 = (uint *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar16 + *pbVar7);
  }
  else {
code_r0x00404da8:
    *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
    bVar37 = false;
    piVar11 = (int *)CONCAT22(uVar24,CONCAT11(bVar16 | (byte)*sliceOption,bVar4));
  }
  do {
    puVar12 = sliceOption;
    *puVar9 = (*puVar9 - (int)puVar9) - (uint)bVar37;
    bVar16 = (byte)((uint)piVar11 >> 8);
    uVar24 = (undefined2)((uint)piVar11 >> 0x10);
    bVar4 = (byte)piVar11;
    bVar21 = bVar16 + (byte)iRam00000c00;
    pbVar7 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar16,(byte)iRam00000c00));
    *(byte *)puVar12 = (byte)*puVar12 + bVar4;
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*puVar18);
    bVar16 = *pbVar7;
    puVar9 = (uint *)(pbVar7 + (uint)CARRY1(bVar21,*pbVar7) + *(int *)pbVar7);
    *(byte *)puVar12 = (byte)*puVar12 + bVar4;
    cVar22 = ((bVar21 + bVar16) - (byte)*puVar12) + (byte)*puVar9;
    pcVar10 = (char *)CONCAT22(uVar24,CONCAT11(cVar22,bVar4));
    puVar8 = unaff_EDI + 1;
    uVar32 = in((short)puVar12);
    *unaff_EDI = uVar32;
    cVar5 = (char)puVar9;
    *(byte *)puVar9 = (byte)*puVar9 + cVar5;
    uVar14 = (undefined3)((uint)puVar12 >> 8);
    bVar21 = (byte)puVar12 | (byte)*puVar18;
    pcVar19 = (char *)CONCAT31(uVar14,bVar21);
    *pcVar10 = *pcVar10 + '\x01';
    bVar16 = (cVar22 - *pcVar19) + (byte)*puVar9;
    pcVar10 = (char *)CONCAT22(uVar24,CONCAT11(bVar16,bVar4));
    unaff_EDI = unaff_EDI + 2;
    uVar32 = in((short)pcVar19);
    *puVar8 = uVar32;
    *(byte *)puVar9 = (byte)*puVar9 + cVar5;
    bVar21 = bVar21 | (byte)*puVar18;
    sliceOption = (uint *)CONCAT31(uVar14,bVar21);
    *pcVar10 = *pcVar10 + '\x01';
    bVar37 = bVar4 < *(byte *)((int)sliceOption + 2);
    cVar22 = bVar4 - *(byte *)((int)sliceOption + 2);
    piVar11 = (int *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar22);
  } while ((POPCOUNT(cVar22) & 1U) != 0);
  *(byte *)puVar9 = (byte)*puVar9 + cVar5;
  bVar4 = cVar5 + 0x7b;
  pbVar7 = (byte *)CONCAT31((int3)((uint)puVar9 >> 8),bVar4);
  unaff_EBX[(int)pbVar7] = unaff_EBX[(int)pbVar7] + bVar4;
  puVar8 = puVar18 + 1;
  uVar25 = SUB42(sliceOption,0);
  out(*puVar18,uVar25);
  pbVar30 = unaff_EBX + -1;
  *pbVar7 = *pbVar7 + bVar4;
  bVar16 = bVar16 | (byte)*sliceOption;
  piVar11 = (int *)CONCAT22(uVar24,CONCAT11(bVar16,cVar22));
  *pbVar7 = *pbVar7 + bVar4;
  *pbVar30 = *pbVar30 + bVar21;
  *pbVar30 = *pbVar30 ^ bVar4;
  *(byte *)sliceOption = (byte)*sliceOption + bVar16;
  *pbVar7 = *pbVar7 + bVar4;
  do {
    bVar23 = (byte)((uint)piVar11 >> 8);
    *(byte *)unaff_EDI = (byte)*unaff_EDI + bVar23;
    bVar16 = *pbVar7;
    bVar4 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar4;
    *(byte **)(unaff_EBX + 0x17) =
         (byte *)((int)puVar8 + (uint)CARRY1(bVar16,bVar4) + *(int *)(unaff_EBX + 0x17));
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    uVar15 = (undefined3)((uint)pbVar7 >> 8);
    bVar4 = bVar4 | (byte)*puVar8;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pcVar36 + -0x34));
    *(char *)CONCAT31(uVar15,bVar4) = *(char *)CONCAT31(uVar15,bVar4) + bVar4;
    bVar16 = bVar4 + 2;
    cVar5 = (char)((uint)puVar12 >> 8);
    bVar6 = (byte)piVar11;
    if ((POPCOUNT(bVar16) & 1U) != 0) {
      pbVar7 = (byte *)CONCAT31(uVar15,bVar4 + 0x15 + (0xfd < bVar4));
      if (0xec < bVar16 || CARRY1(bVar4 + 0x15,0xfd < bVar4)) {
        *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      }
code_r0x00404e60:
      pcVar36 = pcVar36 + -*sliceOption;
      bVar16 = *pbVar7;
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      pbVar26 = (byte *)((int)puVar8 + (-(uint)CARRY1(bVar16,(byte)pbVar7) - *(int *)pbVar7));
      pbVar7 = pbVar7 + *(int *)pbVar7;
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      *(char *)piVar11 = (char)*piVar11 + cVar5;
      bVar16 = *pbVar7;
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      *(byte **)(pbVar30 + (int)sliceOption) =
           (byte *)((int)sliceOption +
                   (uint)CARRY1(bVar16,(byte)pbVar7) + *(int *)(pbVar30 + (int)sliceOption));
      pbVar7 = pbVar7 + 0x73061314;
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      uVar15 = (undefined3)((uint)piVar11 >> 8);
      bVar6 = bVar6 | (byte)*sliceOption;
      pcVar19 = (char *)CONCAT31(uVar15,bVar6);
      *pbVar7 = *pbVar7 + (char)pbVar7;
      cVar5 = (char)pbVar7 + 'o';
      pcVar10 = (char *)CONCAT31((int3)((uint)pbVar7 >> 8),cVar5);
      *pcVar10 = *pcVar10 + cVar5;
      out(*(undefined4 *)pbVar26,uVar25);
      uVar32 = *sliceOption;
      *(byte *)sliceOption = (byte)*sliceOption + bVar6;
      pcVar10 = pcVar10 + (uint)CARRY1((byte)uVar32,bVar6) + *unaff_EDI;
      *pcVar10 = *pcVar10 + (char)pcVar10;
      *pcVar19 = *pcVar19 + bVar21;
      puVar8 = (uint *)(pbVar26 + 8);
      out(*(undefined4 *)(pbVar26 + 4),uVar25);
      *(byte *)sliceOption = (byte)*sliceOption + bVar6;
      piVar11 = (int *)((uint)pcVar10 | *unaff_EDI);
      pcVar19[0x390a0000] = pcVar19[0x390a0000] - bVar23;
      pbVar30 = (byte *)0x7000000;
      *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar23;
      *piVar11 = *piVar11 + (int)piVar11;
      puVar18 = (uint *)CONCAT31(uVar15,bVar6 | *(byte *)((int)piVar11 + (int)pcVar19));
      *(char *)((int)piVar11 * 2) = *(char *)((int)piVar11 * 2) - bVar23;
      cRam07000000 = cRam07000000 + bVar23;
      piVar11 = (int *)((uint)piVar11 | 0x777b02);
      pbVar7 = (byte *)((int)unaff_EDI + (int)pcVar36 * 2);
      bVar37 = SCARRY1(*pbVar7,(char)piVar11);
      *pbVar7 = *pbVar7 + (char)piVar11;
      bVar16 = *pbVar7;
      *(char *)piVar11 = (char)*piVar11;
      uStack_14 = in_DS;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar15,bVar16) = *(char *)CONCAT31(uVar15,bVar16) + bVar16;
    bVar4 = bVar4 + 0x71;
    pbVar7 = (byte *)CONCAT31(uVar15,bVar4);
    *pbVar7 = *pbVar7;
    *(byte *)puVar8 = (byte)*puVar8 + 1;
    *piVar11 = (*piVar11 - (int)pbVar7) - (uint)(0x90 < bVar16);
    uVar32 = *puVar8;
    *(byte *)puVar8 = (byte)*puVar8 + bVar4;
    if (!CARRY1((byte)uVar32,bVar4)) goto code_r0x00404e60;
    *pbVar7 = *pbVar7 + bVar4;
    uVar24 = (undefined2)((uint)piVar11 >> 0x10);
    bVar23 = bVar23 | *pbVar7;
    pbVar7 = pbVar7 + -*(int *)pbVar7;
    *pbVar30 = *pbVar30 + bVar23;
    cVar22 = bVar6 - *(byte *)((int)sliceOption + 2);
    piVar11 = (int *)CONCAT31((int3)(CONCAT22(uVar24,CONCAT11(bVar23,bVar6)) >> 8),cVar22);
  } while ((POPCOUNT(cVar22) & 1U) != 0);
  cVar29 = (char)pbVar7;
  *pbVar7 = *pbVar7 + cVar29;
  uVar15 = (undefined3)((uint)pbVar7 >> 8);
  pcVar10 = (char *)CONCAT31(uVar15,cVar29 + '{');
  out(*puVar8,uVar25);
  *pcVar10 = *pcVar10 + cVar29 + '{';
  bVar4 = cVar29 + 0x7e;
  pbVar7 = (byte *)CONCAT31(uVar15,bVar4);
  puVar8 = puVar18 + 3;
  out(puVar18[2],uVar25);
  pbVar30 = unaff_EBX + -2;
  *pbVar7 = *pbVar7 + bVar4;
  bVar23 = bVar23 | (byte)*sliceOption;
  puVar18 = (uint *)CONCAT22(uVar24,CONCAT11(bVar23,cVar22));
  *pbVar7 = *pbVar7 + bVar4;
  *pbVar30 = *pbVar30 + bVar21;
  *pbVar30 = *pbVar30 ^ bVar4;
  *(byte *)sliceOption = (byte)*sliceOption + bVar23;
  *pbVar7 = *pbVar7 + bVar4;
  *pbVar7 = *pbVar7 + cVar5;
  bVar16 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar4;
  *(byte **)(unaff_EBX + 0x18) =
       (byte *)((int)puVar8 + (uint)CARRY1(bVar16,bVar4) + *(int *)(unaff_EBX + 0x18));
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar4 = bVar4 | (byte)*puVar8;
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pcVar36 + -0x33));
  *(char *)CONCAT31(uVar15,bVar4) = *(char *)CONCAT31(uVar15,bVar4) + bVar4;
  bVar37 = SCARRY1(bVar4,'\x02');
  bVar16 = bVar4 + 2;
  piVar11 = (int *)CONCAT31(uVar15,bVar16);
  if ((POPCOUNT(bVar16) & 1U) == 0) {
    *(byte *)piVar11 = (char)*piVar11 + bVar16;
    return CONCAT31(uVar15,bVar4 + 0x71);
  }
code_r0x00404ebf:
  bVar4 = (byte)piVar11;
  uVar15 = (undefined3)((uint)piVar11 >> 8);
  if (bVar16 != 0 && bVar37 == (char)bVar16 < '\0') {
    *(byte *)piVar11 = (char)*piVar11 + bVar4;
    puVar8[(int)unaff_EDI * 2] =
         (uint)((int)sliceOption + (uint)(0xd2 < bVar4) + puVar8[(int)unaff_EDI * 2]);
    return CONCAT31(uVar15,bVar4 + 0x2d);
  }
  *piVar11 = (int)(*piVar11 + (int)piVar11);
  bVar16 = *pbVar30;
  *puVar8 = (uint)(*puVar8 + (int)piVar11);
  bVar6 = (byte)((uint)puVar18 >> 8);
  *(byte *)piVar11 = (char)*piVar11 - bVar6;
  *(byte *)piVar11 = (char)*piVar11 + bVar4;
  pbVar7 = (byte *)(CONCAT31(uVar14,bVar21 | bVar16) - *(int *)pbVar30);
  puVar12 = (uint *)CONCAT31(uVar15,bVar4 + 6);
  *(uint *)(pbVar30 + (int)puVar8 * 2) =
       (int)puVar12 + (uint)(0xf9 < bVar4) + *(int *)(pbVar30 + (int)puVar8 * 2);
  *(byte *)puVar18 = (byte)*puVar18 ^ bVar4 + 6;
  bVar4 = (byte)puVar18;
  *pbVar7 = *pbVar7 + bVar4;
  puVar9 = puVar8 + 1;
  uVar24 = SUB42(pbVar7,0);
  out(*puVar8,uVar24);
  *puVar18 = *puVar18 ^ (uint)puVar12;
  *pbVar7 = *pbVar7 + bVar4;
  puVar31 = (uint *)(pbVar30 + -*(int *)pbVar30);
  *(uint *)((int)unaff_EDI + 0x31) = *(uint *)((int)unaff_EDI + 0x31) | (uint)pcVar36;
  *puVar12 = *puVar12 + (int)puVar12;
  puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar6 | (byte)*puVar31,bVar4));
  *(byte **)(pbVar7 + 0x6e) = (byte *)(*(int *)(pbVar7 + 0x6e) + (int)puVar9);
  piVar11 = (int *)((uint)puVar12 | *puVar12);
  bVar21 = (byte)puVar31;
  *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar21;
  bVar16 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar4;
  if (CARRY1(bVar16,bVar4)) {
    *piVar11 = (int)(*piVar11 + (int)piVar11);
    bVar16 = pbVar7[0x11];
    uVar25 = (undefined2)((uint)puVar31 >> 0x10);
    out(*puVar9,uVar24);
    puVar18 = (uint *)((int)puVar18 + 1);
    *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
    bVar33 = (byte)((uint)puVar31 >> 8) | bVar16 | *pbVar7;
    pcVar10 = (char *)((int)piVar11 + -0x21000001);
    bVar16 = (byte)pcVar10 | 0x11;
    uVar14 = (undefined3)((uint)pcVar10 >> 8);
    cVar5 = bVar16 - 7;
    pcVar19 = (char *)CONCAT31(uVar14,cVar5);
    *unaff_EDI = (uint)(pcVar19 + (uint)(bVar16 < 7) + *unaff_EDI);
    puVar9 = puVar8 + 3;
    out(puVar8[2],uVar24);
    pbVar7 = pbVar7 + 1;
    *pcVar19 = *pcVar19 + cVar5;
    bVar6 = (byte)((uint)pcVar10 >> 8);
    bVar23 = bVar21 | bVar6;
    bVar4 = cVar5 - *pcVar19;
    bVar16 = *(byte *)puVar18;
    *(byte *)puVar18 = *(byte *)puVar18 + bVar4;
    *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4 + CARRY1(bVar16,bVar4)
    ;
    *pbVar7 = *pbVar7 + bVar4;
    *(byte *)puVar9 = (byte)*puVar9 + bVar23;
    bVar16 = (byte)((uint)pbVar7 >> 8);
    *(byte *)puVar18 = *(byte *)puVar18 + bVar4 + CARRY1((byte)pbVar7,bVar16);
    piVar11 = (int *)CONCAT31(uVar14,bVar4);
    *(byte *)piVar11 = (char)*piVar11 + bVar4;
    pbVar7 = (byte *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                              CONCAT11(bVar16 + bVar6,(byte)pbVar7 + bVar16));
    puVar31 = (uint *)CONCAT22(uVar25,CONCAT11(bVar33 + *(char *)(CONCAT31((int3)(CONCAT22(uVar25,
                                                  CONCAT11(bVar33,bVar21)) >> 8),bVar23) + 0x76),
                                               bVar23));
code_r0x00404fa4:
    *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
    pcVar10 = (char *)(CONCAT31((int3)((uint)piVar11 >> 8),(char)piVar11 + '(') ^ *puVar18);
    cVar29 = (char)puVar18;
    *pbVar7 = *pbVar7 + cVar29;
    uVar24 = (undefined2)((uint)puVar31 >> 0x10);
    cVar28 = (char)puVar31;
    cVar34 = (char)((uint)puVar31 >> 8) + *(byte *)((int)puVar31 + 0x75);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    cVar5 = (char)pcVar10 + 'o';
    pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar5);
    *pcVar10 = *pcVar10 + cVar5;
    cVar35 = (char)((uint)puVar18 >> 8);
    *pcVar36 = *pcVar36 - cVar35;
    pbVar7[1] = pbVar7[1] + cVar29;
    pcVar10 = pcVar10 + -0x757b021b;
    cVar5 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar5;
    uVar14 = (undefined3)((uint)pcVar10 >> 8);
    cVar22 = cVar5 + 'o';
    pcVar10 = (char *)CONCAT31(uVar14,cVar22);
    pbVar26 = pbVar7 + 2;
    *pcVar10 = *pcVar10 + cVar22;
    iVar17 = CONCAT22(uVar24,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar24,CONCAT11(cVar34,cVar28)) +
                                                        0x76),cVar28));
    *pcVar10 = *pcVar10 + cVar22;
    pcVar10 = (char *)CONCAT31(uVar14,cVar5 + -0x22);
    puVar8 = (uint *)((int)unaff_EDI + 1);
    *(byte *)unaff_EDI = (byte)*puVar9;
    *pcVar10 = *pcVar10 + cVar5 + -0x22;
    *(byte *)((int)puVar18 + (int)pcVar10) =
         *(byte *)((int)puVar18 + (int)pcVar10) - (char)((uint)pbVar26 >> 8);
    *pbVar26 = *pbVar26 + cVar29;
    bVar4 = cVar35 - pbVar7[4];
    pbVar30 = (byte *)((int)puVar9 + 5);
    out(*(undefined4 *)((int)puVar9 + 1),(short)pbVar26);
    puVar9 = (uint *)((uint)(pcVar10 + *(int *)(pcVar10 + iVar17)) ^ 0x280a0001);
    *(byte *)puVar9 = (byte)*puVar9 << 1 | (char)(byte)*puVar9 < '\0';
    *pbVar30 = *pbVar30 + (char)puVar9;
    pbVar30 = pbVar30 + *(int *)(pbVar7 + -0x5c);
    pbVar7 = (byte *)((uint)puVar9 | *puVar9);
    *pbVar30 = *pbVar30 + (char)pbVar7;
    puVar31 = (uint *)CONCAT31((int3)((uint)iVar17 >> 8),cVar28 - (char)pbVar26);
    bVar16 = *pbVar7;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar4 + *pbVar7,cVar29));
    iVar17 = *(int *)pbVar7;
    *pbVar26 = *pbVar26 + cVar29;
    cVar5 = (char)(pbVar7 + (uint)CARRY1(bVar4,bVar16) + iVar17) + 'r';
    puVar12 = (uint *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar4,bVar16) + iVar17) >> 8),
                               cVar5);
    pbVar7 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),CONCAT11(10,(char)pbVar26));
    *(char *)(puVar12 + 10) = (char)puVar12[10] + '\n';
    *pbVar30 = *pbVar30 + cVar5;
    puVar9 = (uint *)(pbVar30 + *(int *)(pbVar7 + -0x5e));
    uVar32 = *puVar12;
    cVar5 = (char)((uint)puVar12 | uVar32);
    *(byte *)puVar9 = (byte)*puVar9 + cVar5;
    uVar14 = (undefined3)(((uint)puVar12 | uVar32) >> 8);
    cVar22 = cVar5 + (byte)*puVar31;
    puVar12 = (uint *)CONCAT31(uVar14,cVar22);
    if (SCARRY1(cVar5,(byte)*puVar31) == cVar22 < '\0') goto code_r0x00405090;
    *(byte *)puVar12 = (byte)*puVar12 + cVar22;
    piVar11 = (int *)CONCAT31(uVar14,cVar22 + '\x02');
    unaff_EDI = puVar8;
  }
  else {
    out(2,(char)piVar11);
    uStack_14 = in_ES;
    if ((POPCOUNT(*pbVar7) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar14 = (undefined3)((uint)piVar11 >> 8);
  cVar5 = (char)piVar11 + '}';
  pbVar30 = (byte *)CONCAT31(uVar14,cVar5);
  pbVar7[(int)pbVar30] = pbVar7[(int)pbVar30] + cVar5;
  pbVar7[0x280a0000] = pbVar7[0x280a0000] - (char)((uint)piVar11 >> 8);
  bVar16 = (byte)puVar18 & 7;
  *pbVar30 = *pbVar30 << bVar16 | *pbVar30 >> 8 - bVar16;
  *(byte *)puVar9 = (byte)*puVar9 + cVar5;
  cVar29 = (char)puVar31 - (byte)*puVar9;
  uVar24 = (undefined2)((uint)puVar31 >> 0x10);
  cVar35 = (char)((uint)puVar31 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar31 >> 8),cVar29) + 0x7c);
  pcVar10 = (char *)CONCAT22(uVar24,CONCAT11(cVar35,cVar29));
  *pbVar30 = *pbVar30 + cVar5;
  bVar4 = (char)piVar11 + 0xa7U & *pbVar7;
  puVar8 = (uint *)((int)unaff_EDI + *(int *)(pcVar36 + 0x7c));
  *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
  bVar4 = bVar4 + 0x2a;
  pbVar30 = (byte *)CONCAT31(uVar14,bVar4);
  *pbVar30 = *pbVar30 + bVar4;
  *pcVar10 = *pcVar10 + cVar29;
  *pbVar7 = *pbVar7 ^ bVar4;
  *pcVar10 = *pcVar10 + bVar4;
  bVar16 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar4;
  cVar5 = (bVar4 - *pbVar30) - CARRY1(bVar16,bVar4);
  *(byte *)puVar18 = (byte)*puVar18 + (byte)pbVar7;
  cVar35 = cVar35 + pcVar10[0x7b];
  *(char *)CONCAT31(uVar14,cVar5) = *(char *)CONCAT31(uVar14,cVar5) + cVar5;
  pcVar10 = (char *)CONCAT31(uVar14,cVar5 + 'o');
  *pcVar10 = *pcVar10 + cVar5 + 'o';
  pcVar10 = pcVar10 + 0x2ed7fde6;
  cVar22 = (char)pcVar10;
  *pcVar10 = *pcVar10 + cVar22;
  cVar5 = *(char *)(CONCAT22(uVar24,CONCAT11(cVar35,cVar29)) + 0x7b);
  *pcVar10 = *pcVar10 + cVar22;
  piVar11 = (int *)(CONCAT31((int3)((uint)pcVar10 >> 8),cVar22 + 'o') + 0x6f060000);
  *piVar11 = *piVar11 + (int)piVar11;
  uVar15 = (undefined3)((uint)pbVar7 >> 8);
  bVar4 = (byte)pbVar7 | (byte)*puVar9;
  pbVar26 = (byte *)CONCAT31(uVar15,bVar4);
  uVar32 = CONCAT22(uVar24,CONCAT11(cVar35 + cVar5,cVar29)) | (uint)puVar9;
  uVar14 = (undefined3)((uint)piVar11 >> 8);
  bVar16 = (byte)piVar11 | *pbVar26;
  pbVar30 = (byte *)CONCAT31(uVar14,bVar16);
  cVar5 = (byte)puVar18 - bVar4;
  puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),cVar5);
  *pbVar30 = *pbVar30 + bVar16;
  puVar12 = puVar9 + 1;
  out(*puVar9,(short)pbVar26);
  *pbVar30 = bVar16;
  *pbVar26 = *pbVar26 + cVar5;
  puVar9 = puVar9 + 2;
  out(*puVar12,(short)pbVar26);
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  puVar31 = (uint *)(CONCAT31((int3)(uVar32 >> 8),(char)uVar32 - (char)((uint)pbVar7 >> 8)) |
                    (uint)puVar9);
  pbVar7 = (byte *)CONCAT31(uVar15,(bVar4 | (byte)*puVar9) + (byte)*puVar8);
  cVar5 = bVar16 - (byte)*puVar8;
  puVar12 = (uint *)CONCAT31(uVar14,cVar5 - *(char *)CONCAT31(uVar14,cVar5));
code_r0x00405090:
  *puVar12 = (uint)(pbVar7 + *puVar12);
  cVar5 = (char)puVar12;
  *(byte *)puVar12 = (byte)*puVar12 + cVar5;
  *(byte *)puVar12 = (byte)*puVar12 + cVar5;
  *(byte *)puVar12 = (byte)*puVar12 + cVar5;
  *puVar18 = *puVar18 - (int)pcVar36;
  uVar32 = *puVar9;
  bVar16 = (byte)pbVar7;
  *(byte *)puVar9 = (byte)*puVar9 + bVar16;
  *(byte *)puVar12 = (byte)*puVar12 + cVar5 + CARRY1((byte)uVar32,bVar16);
  *(byte *)puVar18 = (byte)*puVar18 + cVar5;
  uVar32 = *puVar31;
  *(byte *)puVar31 = (byte)*puVar31 + 0x72;
  *(byte *)puVar31 = (byte)*puVar31;
  cVar5 = (char)((uint)pbVar7 >> 8);
  if (SCARRY1((byte)uVar32,'r')) {
    puVar9 = (uint *)((int)puVar9 + *(int *)(pbVar7 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar9 = (byte)*puVar9 + (char)puVar12;
      uVar14 = (undefined3)((uint)puVar12 >> 8);
      cVar22 = (char)puVar12 + (byte)*puVar31;
      pcVar10 = (char *)CONCAT31(uVar14,cVar22);
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((char)((uint)puVar31 >> 8) +
                                          *(byte *)((int)puVar31 + 0x7b),(char)puVar31));
      *pcVar10 = *pcVar10 + cVar22;
      in_AF = 9 < (cVar22 + 0x6fU & 0xf) | in_AF;
      uVar32 = CONCAT31(uVar14,cVar22 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar21 = (byte)uVar32;
      piVar11 = (int *)CONCAT22((short)(uVar32 >> 0x10),
                                CONCAT11((char)((uint)puVar12 >> 8) + in_AF,bVar21));
      *piVar11 = *piVar11 + (int)piVar11;
      uVar14 = (undefined3)((uint)piVar11 >> 8);
      bVar21 = bVar21 | *(byte *)(piVar11 + 0x354a);
      bVar21 = bVar21 - *(char *)CONCAT31(uVar14,bVar21);
      pbVar30 = (byte *)CONCAT31(uVar14,bVar21);
      bVar4 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar21;
      puVar9 = (uint *)((int)puVar9 + (-(uint)CARRY1(bVar4,bVar21) - *(int *)pbVar30));
      puVar12 = (uint *)(pbVar30 + 0xfc00);
      *pbVar7 = *pbVar7 + cVar5;
      uVar32 = *puVar12;
      bVar4 = (byte)puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + bVar4;
      uVar1 = (uint)CARRY1((byte)uVar32,bVar4);
      uVar32 = *puVar31;
      uVar3 = *puVar31;
      *puVar31 = (uint)((byte *)(uVar3 + (int)puVar12) + uVar1);
      if (!CARRY4(uVar32,(uint)puVar12) && !CARRY4(uVar3 + (int)puVar12,uVar1)) break;
      *(byte *)puVar12 = (byte)*puVar12 + bVar4;
    }
  }
  uVar32 = (uint)puVar12 | *puVar12;
  uVar24 = SUB42(pbVar7,0);
  *(byte *)puVar9 = (byte)*puVar9 + (char)uVar32;
  piVar11 = (int *)(uVar32 + 0xc1872);
  if (SCARRY4(uVar32,0xc1872)) {
    cVar22 = (char)piVar11;
    *(char *)piVar11 = *(char *)piVar11 + cVar22;
    *pbVar7 = *pbVar7 + cVar22;
    *(char *)piVar11 = *(char *)piVar11 + cVar22;
    *(byte *)puVar31 = (byte)*puVar31 + (char)puVar18;
    *(char *)piVar11 = *(char *)piVar11 + cVar22;
    *(char *)((int)piVar11 * 2) = *(char *)((int)piVar11 * 2) + bVar16;
    puVar12 = puVar9;
    goto code_r0x00405117;
  }
  do {
    uVar32 = *puVar9;
    bVar16 = (byte)piVar11;
    *(byte *)puVar9 = (byte)*puVar9 + bVar16;
    if (CARRY1((byte)uVar32,bVar16)) {
      *piVar11 = (int)(*piVar11 + (int)piVar11);
      uVar14 = (undefined3)((uint)puVar18 >> 8);
      bVar4 = (byte)puVar18 | bRam396f1609;
      *piVar11 = (int)(*piVar11 + (int)piVar11);
      puVar18 = (uint *)CONCAT31(uVar14,bVar4 | *(byte *)CONCAT31(uVar14,bVar4));
      uVar14 = (undefined3)((uint)piVar11 >> 8);
      bVar16 = bVar16 | *pbVar7;
      pcVar10 = (char *)CONCAT31(uVar14,bVar16);
      if ((POPCOUNT(bVar16) & 1U) != 0) {
        puVar12 = puVar9 + 1;
        out(*puVar9,uVar24);
        uVar32 = CONCAT22((short)((uint)piVar11 >> 0x10),(ushort)bVar16);
        *(byte *)puVar12 = (byte)*puVar12 + bVar16;
        pcVar10 = (char *)(uVar32 | 8);
        cVar22 = (char)((uint)puVar31 >> 8) + *(byte *)((int)puVar31 + 0x7a);
        puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(cVar22,(char)puVar31));
        *pcVar10 = *pcVar10 + (char)pcVar10;
        cVar5 = (char)pcVar10 + 'o';
        piVar11 = (int *)CONCAT31((int3)(uVar32 >> 8),cVar5);
        *(char *)piVar11 = (char)*piVar11 + cVar5;
        *(byte *)puVar18 = (byte)*puVar18 + 1;
        puVar9 = puVar9 + 2;
        out(*puVar12,uVar24);
        pbVar7 = (byte *)((uint)pbVar7 ^ uRam08122c04);
        iVar17 = CONCAT31((int3)((uint)(*piVar11 * 0x17070600) >> 8),2);
        *(char *)(iVar17 * 2) = *(char *)(iVar17 * 2) - cVar22;
        do {
          bVar16 = (byte)iVar17;
          *(byte *)puVar9 = (byte)*puVar9 + bVar16;
          bVar37 = CARRY1(bVar16,(byte)*puVar31);
          uVar14 = (undefined3)((uint)iVar17 >> 8);
          cVar5 = bVar16 + (byte)*puVar31;
          pbVar30 = (byte *)CONCAT31(uVar14,cVar5);
          uVar24 = in_DS;
          uVar25 = uStack_54;
          if (SCARRY1(bVar16,(byte)*puVar31) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar30 = *pbVar30 + cVar5;
          uVar32 = CONCAT31(uVar14,cVar5 + '\'') + 0x1ebd9f3;
          uStack_58 = (undefined1)uStack_14;
          uStack_57 = (undefined1)((ushort)uStack_14 >> 8);
          piVar11 = (int *)(uVar32 ^ 0x73060000);
          puVar18 = (uint *)((int)puVar18 + 1);
          *piVar11 = (int)(*piVar11 + (int)piVar11);
          puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                     CONCAT11((byte)((uint)puVar31 >> 8) | pcVar36[0x7e],
                                              (char)puVar31));
          cVar5 = (char)uVar32;
          *(char *)piVar11 = (char)*piVar11 + cVar5;
          uVar32 = CONCAT31((int3)((uint)piVar11 >> 8),cVar5 + '\x02');
          bVar37 = 0xd9f2d2da < uVar32;
          iVar17 = uVar32 + 0x260d2d25;
          pcVar10 = pcVar36;
          do {
            uVar14 = (undefined3)((uint)iVar17 >> 8);
            bVar4 = (char)iVar17 + -2 + bVar37;
            pbVar30 = (byte *)CONCAT31(uVar14,bVar4);
            bVar16 = *pbVar30;
            *pbVar30 = *pbVar30 + bVar4;
            bVar21 = (byte)puVar31;
            uStack_54 = uStack_14;
            if (CARRY1(bVar16,bVar4)) {
              *pbVar30 = *pbVar30 + bVar4;
              puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                         CONCAT11((byte)((uint)puVar31 >> 8) | pcVar10[0x7f],bVar21)
                                        );
              *pbVar30 = *pbVar30 + bVar4;
              pbVar30 = (byte *)CONCAT31(uVar14,bVar4 + 0x2a);
              *pbVar30 = *pbVar30 + bVar4 + 0x2a;
              *(byte *)puVar31 = (byte)*puVar31 + (char)pbVar7;
              uVar24 = in_DS;
              while( true ) {
                in_DS = uVar24;
                bVar4 = (byte)pbVar30;
                *pbVar7 = *pbVar7 ^ bVar4;
                *pbVar7 = *pbVar7 + (char)puVar31;
                *pbVar30 = *pbVar30 + bVar4;
                *(byte *)puVar31 = (byte)*puVar31 + (char)((uint)pbVar7 >> 8);
                bVar16 = *pbVar30;
                *pbVar30 = *pbVar30 + bVar4;
                uVar32 = *puVar31;
                uVar3 = *puVar31;
                *puVar31 = (uint)(pbVar30 + uVar3 + CARRY1(bVar16,bVar4));
                uVar14 = (undefined3)((uint)pbVar30 >> 8);
                if (CARRY4(uVar32,(uint)pbVar30) ||
                    CARRY4((uint)(pbVar30 + uVar3),(uint)CARRY1(bVar16,bVar4))) break;
                *(byte *)puVar9 = (byte)*puVar9 + bVar4;
                pcVar19 = (char *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                           CONCAT11((char)((uint)puVar18 >> 8) + *pbVar30,
                                                    (char)puVar18));
                *(byte *)puVar9 = (byte)*puVar9 + bVar4;
                piVar11 = (int *)CONCAT31(uVar14,bVar4 | (byte)*puVar31);
                puVar18 = puVar9;
                while( true ) {
                  puVar9 = puVar18 + 1;
                  out(*puVar18,(short)pbVar7);
                  pbVar7 = pbVar7 + 1;
                  *piVar11 = (int)(*piVar11 + (int)piVar11);
                  bVar21 = (byte)((uint)pcVar19 >> 8) | *pbVar7;
                  uVar14 = (undefined3)((uint)piVar11 >> 8);
                  bVar4 = (byte)piVar11 ^ *pbVar7;
                  pcVar13 = (char *)CONCAT31(uVar14,bVar4);
                  cRam282b0000 = cRam282b0000 - bVar21;
                  *pcVar13 = *pcVar13 + bVar4;
                  pcVar36 = pcVar10 + -*(int *)pbVar7;
                  uStack_58 = (undefined1)in_DS;
                  uStack_57 = (undefined1)((ushort)in_DS >> 8);
                  bVar16 = *(byte *)((int)puVar8 + 0x17);
                  *pcVar13 = *pcVar13 + bVar4;
                  puVar18 = (uint *)CONCAT22((short)((uint)pcVar19 >> 0x10),
                                             CONCAT11(bVar21 + bVar16 | *pbVar7,(char)pcVar19));
                  *(byte *)puVar31 = (byte)*puVar31 + (char)puVar31;
                  *(byte *)((int)pcVar13 * 2) = *(byte *)((int)pcVar13 * 2) ^ bVar4;
                  in_AF = 9 < (bVar4 & 0xf) | in_AF;
                  bVar4 = bVar4 + in_AF * -6;
                  pbVar30 = (byte *)CONCAT31(uVar14,bVar4 + (0x9f < bVar4 | in_AF * (bVar4 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
                  *(char *)((int)pbVar30 * 2) =
                       *(char *)((int)pbVar30 * 2) + (char)((uint)pbVar7 >> 8);
                  bVar37 = CARRY1((byte)*puVar18,(byte)pbVar7);
                  *(byte *)puVar18 = (byte)*puVar18 + (byte)pbVar7;
                  uVar24 = in_DS;
                  uVar25 = uStack_14;
GenerateStatusText:
                  in_DS = uVar25;
                  pcVar10 = pcVar36;
                  uStack_54 = in_DS;
                  if (!bVar37) break;
                  *pbVar30 = *pbVar30 + (char)pbVar30;
                  iVar17 = CONCAT31((int3)((uint)puVar18 >> 8),(byte)puVar18 | *pbVar7);
                  uVar24 = (undefined2)((uint)puVar31 >> 0x10);
                  cVar29 = (char)((uint)puVar31 >> 8) + *(byte *)((int)puVar31 + 0x7d);
                  *pbVar30 = *pbVar30 + (char)pbVar30;
                  *(byte *)puVar8 = (byte)*puVar8 - (char)((uint)puVar18 >> 8);
                  iVar17 = iVar17 - *(int *)(iVar17 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar24,CONCAT11(cVar29,(char)puVar31)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar9,(short)pbVar7);
                  pbVar7 = (byte *)CONCAT22(uStack_56,CONCAT11(uStack_57,uStack_58));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar18 = puVar9 + 2;
                  out(puVar9[1],CONCAT11(uStack_57,uStack_58));
                  pcVar10 = pcVar36 + 1;
                  cVar22 = (char)iVar17;
                  pcVar19 = (char *)CONCAT22((short)((uint)iVar17 >> 0x10),
                                             CONCAT11((byte)((uint)iVar17 >> 8) |
                                                      *(byte *)((int)puVar8 + 0x46),cVar22));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_14 = CONCAT11(uStack_57,uStack_58);
                  uVar14 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar18,0xf0)) >> 8);
                  piVar11 = (int *)CONCAT31(uVar14,0x5f);
                  puVar8 = (uint *)((int)puVar8 + 1);
                  *piVar11 = (int)(*piVar11 + (int)piVar11);
                  puVar31 = (uint *)CONCAT22(uVar24,CONCAT11(cVar29 + cVar5 | (byte)puVar9[-0x1e],
                                                             (char)puVar31));
                  *(char *)piVar11 = (char)*piVar11 + '_';
                  puVar9 = (uint *)CONCAT31(uVar14,0x8c);
                  puVar18[(int)puVar8 * 2] = (uint)(pbVar7 + puVar18[(int)puVar8 * 2]);
                  uVar32 = *puVar18;
                  *(byte *)puVar18 = (byte)*puVar18 + 0x8c;
                  if ((byte)uVar32 < 0x74) {
                    *pbVar7 = *pbVar7 + cVar22;
                    *(byte *)puVar31 = (byte)*puVar31 >> 1;
                    *(char *)puVar9 = (char)*puVar9 + -0x74;
                    *puVar9 = (uint)(pcVar10 + *puVar9);
                    *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
                    *pbVar7 = *pbVar7 + cVar22;
                    pcVar36[2] = pcVar36[2] - cVar22;
                    *pbVar7 = *pbVar7 + cVar22;
                    pbVar30 = (byte *)CONCAT31(uVar14,0x83);
                    puVar9 = puVar31;
                    goto code_r0x00405312;
                  }
                  *puVar9 = (uint)(*puVar9 + (int)puVar9);
                  piVar11 = (int *)(CONCAT31(uVar14,(byte)puVar9[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar9[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar11 = (int *)((int)piVar11 + *puVar18);
                }
              }
              *pbVar7 = *pbVar7 + bVar4;
              *(byte *)puVar31 = (byte)*puVar31 - (char)pbVar7;
              *pbVar30 = *pbVar30 + bVar4;
              pbVar30 = (byte *)CONCAT31(uVar14,bVar4 | (byte)*puVar31);
            }
            else {
              cVar5 = (char)puVar18;
              *pbVar7 = *pbVar7 + cVar5;
              *(byte **)pbVar30 = pbVar7 + *(int *)pbVar30;
              *pbVar30 = *pbVar30 + bVar4;
              bVar4 = bVar4 + *pbVar30;
              pbVar30 = (byte *)CONCAT31(uVar14,bVar4);
              if (-1 < (char)bVar4) {
                *(byte *)puVar31 = (byte)*puVar31 + bVar21;
                out(*puVar9,(short)pbVar7);
                pbVar7 = pbVar7 + 1;
                *pbVar30 = *pbVar30 + bVar4;
                puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),
                                           bVar21 | (byte)((uint)iVar17 >> 8));
                cVar22 = bVar4 - (byte)*puVar18;
                pcVar36 = (char *)CONCAT31(uVar14,cVar22);
                *pcVar36 = *pcVar36 + cVar22 + (bVar4 < (byte)*puVar18);
                *pbVar7 = *pbVar7 + cVar22;
                pcVar36 = (char *)((int)pcVar36 * 2 + 0x79);
                *pcVar36 = *pcVar36 + (char)((uint)pbVar7 >> 8);
                pbVar30 = (byte *)in((short)pbVar7);
                puVar9 = puVar9 + 1;
              }
              *(byte *)puVar9 = (byte)*puVar9 + cVar5;
              *pbVar30 = *pbVar30 + (char)pbVar30;
              *pbVar30 = *pbVar30 + (char)pbVar30;
              uStack_58 = (undefined1)in_DS;
              uStack_57 = (undefined1)((ushort)in_DS >> 8);
              bVar16 = *pbVar30;
              bVar6 = (byte)((uint)puVar18 >> 8);
              bVar21 = bVar6 + *pbVar30;
              iVar17 = *(int *)pbVar30;
              *pbVar7 = *pbVar7 + cVar5;
              bVar4 = (char)(pbVar30 + (uint)CARRY1(bVar6,bVar16) + iVar17) - (byte)*puVar31;
              pbVar30 = (byte *)CONCAT31((int3)((uint)(pbVar30 + (uint)CARRY1(bVar6,bVar16) + iVar17
                                                      ) >> 8),bVar4);
              *(byte *)puVar31 = (byte)*puVar31 ^ bVar4;
              *pcVar10 = *pcVar10 + (char)puVar31;
              *pbVar30 = *pbVar30 + bVar4;
              *pbVar30 = *pbVar30 + bVar4;
              *pbVar30 = *pbVar30 + bVar4;
              puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                         CONCAT11(bVar21 + *pbVar30,cVar5));
              pbVar30 = pbVar30 + (uint)CARRY1(bVar21,*pbVar30) + *(int *)pbVar30;
              *pbVar7 = *pbVar7 + cVar5;
              puVar9 = (uint *)((int)puVar9 + *(int *)(pbVar7 + 0x3e));
            }
            *(byte *)puVar9 = (byte)*puVar9 + (char)pbVar30;
            cVar5 = (char)pbVar30 + 'r';
            puVar9 = (uint *)((int)puVar9 + -1);
            uVar32 = CONCAT31((int3)((uint)pbVar30 >> 8),cVar5);
            *(byte *)puVar9 = *(byte *)puVar9 + cVar5;
            bVar37 = 0xfff38f8d < uVar32;
            iVar17 = uVar32 + 0xc7072;
            pcVar36 = pcVar10;
          } while (SCARRY4(uVar32,0xc7072));
        } while( true );
      }
      *pcVar10 = *pcVar10 + bVar16;
      bVar16 = bVar16 + 0x6f;
      pbVar30 = (byte *)CONCAT31(uVar14,bVar16);
      bVar4 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar16;
      uVar14 = (undefined3)
               ((uint)(pbVar30 + (uint)CARRY1(bVar4,bVar16) + *(int *)((int)puVar18 + (int)pbVar7))
               >> 8);
      cVar22 = (char)(pbVar30 + (uint)CARRY1(bVar4,bVar16) + *(int *)((int)puVar18 + (int)pbVar7)) +
               'E';
      pcVar10 = (char *)CONCAT31(uVar14,cVar22);
      *pcVar10 = *pcVar10 + cVar22;
      cVar22 = cVar22 + *pcVar10;
      pcVar10 = (char *)CONCAT31(uVar14,cVar22);
      *pcVar10 = *pcVar10 + cVar22;
      puVar12 = (uint *)CONCAT31(uVar14,cVar22 + *pcVar10);
      *(char *)puVar12 = (char)*puVar12 + cVar22 + *pcVar10;
      pbVar30 = (byte *)((uint)puVar12 | *puVar12);
      bVar16 = *pbVar30;
      bVar4 = (byte)pbVar30;
      *pbVar30 = *pbVar30 + bVar4;
      piVar11 = (int *)CONCAT31((int3)((uint)pbVar30 >> 8),bVar4 + CARRY1(bVar16,bVar4));
      puVar12 = puVar9;
code_r0x00405117:
      *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
      puVar31 = (uint *)((int)puVar31 - *puVar31);
      puVar9 = puVar12 + 1;
      out(*puVar12,uVar24);
    }
    *pbVar7 = *pbVar7 + (char)puVar18;
    bVar37 = puVar31 < (uint *)*piVar11;
    puVar31 = (uint *)((int)puVar31 - *piVar11);
    bVar16 = (byte)((uint)puVar18 >> 8);
    *(byte *)((int)puVar8 + 0x39) = (*(byte *)((int)puVar8 + 0x39) - bVar16) - bVar37;
    *piVar11 = (int)(*piVar11 + (int)piVar11);
    uVar32 = *puVar31;
    *(int *)((int)puVar8 + 0x39) = *(int *)((int)puVar8 + 0x39) - (int)pcVar36;
    *piVar11 = (int)(*piVar11 + (int)piVar11);
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                               CONCAT11(bVar16 | (byte)uVar32 | (byte)*puVar31,(char)puVar18));
    *(char *)(piVar11 + 10) = (char)piVar11[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
  bVar16 = (char)piVar11 + 0x28;
  pbVar30 = (byte *)CONCAT31((int3)((uint)piVar11 >> 8),bVar16);
  *pbVar30 = *pbVar30 ^ bVar16;
  *(byte *)puVar31 = (byte)*puVar31 + (char)((uint)pcVar19 >> 8);
  bVar16 = *pbVar7;
  *pbVar7 = *pbVar7 + (byte)pcVar19;
  piVar11 = (int *)(((uint)pbVar30 | 0x1496f09) + *puVar8 + (uint)CARRY1(bVar16,(byte)pcVar19));
  puVar12 = puVar18 + 1;
  out(*puVar18,(short)pbVar7);
  pbVar26 = pbVar7 + -1;
  *piVar11 = *piVar11 + (int)piVar11;
  pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(byte)pbVar26 | (byte)*puVar31);
  cVar5 = (char)piVar11 + '\x13';
  pbVar30 = (byte *)CONCAT31((int3)((uint)piVar11 >> 8),cVar5);
  puVar9 = puVar31;
  puVar18 = puVar12;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar7 = *pbVar7 - (char)((uint)pbVar26 >> 8);
    *pbVar30 = *pbVar30 + cVar5;
code_r0x00405396:
    bVar16 = *pbVar30;
    bVar4 = (byte)pbVar30;
    *pbVar30 = *pbVar30 + bVar4;
    *puVar12 = (uint)(pbVar30 + (uint)CARRY1(bVar16,bVar4) + *puVar12);
    out(*puVar12,(short)pbVar7);
    *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
    *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
    pcVar36 = (char *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                               CONCAT11((byte)((uint)pbVar30 >> 8) | (byte)puVar12[1],bVar4));
    *(char **)((int)puVar8 + -1) = pcVar36 + *(int *)((int)puVar8 + -1);
    out(puVar12[1],(short)pbVar7);
    *pcVar36 = *pcVar36 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar30 = *pbVar30 + (char)pbVar30;
  piVar11 = (int *)CONCAT31((int3)((uint)pbVar30 >> 8),(char)pbVar30 + 'o');
  puVar31 = (uint *)((int)puVar9 + -1);
  *piVar11 = *piVar11 + (int)piVar11;
  uVar14 = (undefined3)((uint)pbVar7 >> 8);
  piVar11 = (int *)((int)piVar11 + 0x1b7e);
  bVar21 = (byte)pbVar7 | *(byte *)puVar31 | *(byte *)puVar31;
  iRam04115f2c = iRam04115f2c + (int)piVar11;
  out(*puVar18,(short)CONCAT31(uVar14,bVar21));
  *piVar11 = *piVar11 + (int)piVar11;
  bVar21 = bVar21 | (byte)piVar11;
  iVar27 = CONCAT31(uVar14,bVar21);
  pbVar7 = (byte *)((int)piVar11 - *piVar11);
  cVar5 = (char)pbVar7;
  *pcVar19 = *pcVar19 + cVar5;
  cVar22 = (char)pcVar19 - bVar21;
  *pbVar7 = *pbVar7 + cVar5;
  uVar24 = (undefined2)((uint)pcVar19 >> 0x10);
  bVar4 = (byte)((uint)pcVar19 >> 8) | *pbVar7;
  pcVar10 = pcVar10 + -1;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar16 = *(byte *)(CONCAT22(uVar24,CONCAT11(bVar4,cVar22)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar7;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar10;
  *pbVar7 = *pbVar7 + cVar5;
  bVar16 = bVar4 | bVar16 | *(byte *)puVar31;
  iVar20 = CONCAT22(uVar24,CONCAT11(bVar16,cVar22));
  pbVar26 = (byte *)((uint)(puVar18 + 1) ^ *(uint *)(iVar27 + -0x43));
  iVar17 = *(int *)pbVar7;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  if (SCARRY4(iVar17,(int)pbVar7)) {
    *pbVar7 = *pbVar7 + cVar5;
  }
  pbVar30 = pbVar7 + 0x5674;
  puVar8 = (uint *)((int)puVar8 + (-(uint)((byte *)0xffffa98b < pbVar7) - *(int *)(pbVar26 + -0x7f))
                   );
  bVar4 = (byte)pbVar30;
  *pbVar30 = *pbVar30 + bVar4;
  uVar15 = (undefined3)((uint)pbVar30 >> 8);
  bVar6 = bVar4 + 0x2d;
  piVar11 = (int *)CONCAT31(uVar15,bVar6);
  *(uint *)(pbVar26 + (int)puVar8 * 8) =
       *(int *)(pbVar26 + (int)puVar8 * 8) + iVar27 + (uint)(0xd2 < bVar4);
  bVar4 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar6;
  if (!CARRY1(bVar4,bVar6)) {
    do {
      pbVar30 = (byte *)(iVar27 + 1);
      bVar4 = (byte)piVar11;
      *(byte *)piVar11 = (char)*piVar11 + bVar4;
      bVar21 = (byte)((uint)piVar11 >> 8);
      bVar6 = (byte)puVar31 | bVar21;
      puVar18 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),bVar6);
      out(*(undefined4 *)pbVar26,(short)pbVar30);
      *(byte *)piVar11 = (char)*piVar11 + bVar4;
      uVar24 = (undefined2)((uint)iVar20 >> 0x10);
      cVar5 = (char)iVar20;
      pbVar7 = (byte *)CONCAT22(uVar24,CONCAT11((byte)((uint)iVar20 >> 8) | *pbVar30,cVar5));
      bVar16 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar4;
      *(byte *)piVar11 = (char)*piVar11 + bVar4 + CARRY1(bVar16,bVar4);
      *pbVar30 = *pbVar30 + bVar4;
      *(byte *)puVar8 = (byte)*puVar8 + bVar21;
      *(int *)((int)piVar11 * 2) =
           *(int *)((int)piVar11 * 2) + CONCAT22(uVar24,CONCAT11(0x1c,cVar5));
      *(byte *)piVar11 = (char)*piVar11 + bVar4;
      cVar22 = (char)pbVar30;
      *(byte *)puVar18 = (byte)*puVar18 + cVar22;
      *(byte *)((int)piVar11 * 2) = *(byte *)((int)piVar11 * 2) ^ bVar4;
      *(byte *)piVar11 = (char)*piVar11 + bVar4;
      pbVar7 = pbVar26 + 8;
      out(*(undefined4 *)(pbVar26 + 4),(short)pbVar30);
      piVar11 = (int *)0xa0a0000;
      *pbVar30 = *pbVar30;
      bVar4 = cVar5 - cVar22;
      iVar20 = CONCAT22(uVar24,CONCAT11((byte)puVar8[0x14] | 0x1c | bRam0ca87216,bVar4));
      *pbVar30 = *pbVar30;
      bVar16 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar4;
      if (!CARRY1(bVar16,bVar4)) {
        piVar11 = (int *)0x1e7b7000;
        bVar16 = (byte)((uint)puVar31 >> 8) | *(byte *)(iVar27 + 3);
        puVar18 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar16,bVar6));
        if (bVar16 != 0) {
          pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar22 + pbVar7[(int)puVar8 * 8]);
          piVar11 = (int *)0x6d7d7000;
          iVar20 = iVar20 + 1;
        }
      }
      *piVar11 = (int)(*piVar11 + (int)piVar11);
      iVar27 = CONCAT31((int3)((uint)pbVar30 >> 8),(byte)pbVar30 | pbVar7[(int)puVar8 * 8]);
      *(char *)piVar11 = (char)*piVar11;
      piVar11 = (int *)CONCAT31((int3)((uint)piVar11 >> 8),0xf9);
      *puVar8 = (uint)((int)piVar11 + *puVar8 + 1);
      pbVar26 = pbVar26 + 0xc;
      out(*(undefined4 *)pbVar7,(short)iVar27);
      puVar31 = puVar18;
    } while( true );
  }
  *piVar11 = (int)(*piVar11 + (int)piVar11);
  bVar6 = bVar6 | *(byte *)((int)piVar11 + 0x4000081);
  piVar11 = (int *)CONCAT31(uVar15,bVar6);
  if ('\0' < (char)bVar6) {
    *(byte *)piVar11 = (char)*piVar11 + bVar6;
    puVar18 = (uint *)CONCAT31(uVar15,bVar6 + 0x28);
    *puVar18 = *puVar18 ^ (uint)puVar18;
    *(byte *)puVar31 = *(byte *)puVar31 + bVar16;
    cVar5 = (bVar6 + 0x28) - bVar16;
    pcVar36 = (char *)CONCAT31(uVar15,cVar5);
    *pcVar36 = *pcVar36 + cVar5;
    pbVar7 = (byte *)CONCAT31(uVar14,bVar21 | *(byte *)puVar31);
    pcVar10 = (char *)CONCAT22((short)((uint)puVar31 >> 0x10),
                               CONCAT11((char)((uint)puVar31 >> 8) + *(byte *)((int)puVar9 + 0x7d),
                                        (char)puVar31));
    *pcVar36 = *pcVar36 + cVar5;
    pbVar30 = (byte *)CONCAT31(uVar15,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar15,cVar5 + 0x39U));
    *pcVar10 = *pcVar10 + bVar16;
    puVar12 = (uint *)(pbVar26 + 4);
    out(*(undefined4 *)pbVar26,(short)pbVar7);
    goto code_r0x00405396;
  }
  puVar18 = (uint *)(pbVar26 + 4);
  out(*(undefined4 *)pbVar26,(short)iVar27);
  pcVar19 = (char *)(iVar20 + -1);
  *piVar11 = (int)(*piVar11 + (int)piVar11);
  pbVar7 = (byte *)CONCAT31(uVar14,bVar21 | *(byte *)puVar31);
  goto code_r0x004052ee;
}


