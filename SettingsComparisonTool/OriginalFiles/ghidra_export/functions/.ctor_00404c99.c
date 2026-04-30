/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404c99
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : undefined4 .ctor(uint * param_1, uint * param_2, char * param_3, uint param_4, undefined4 param_5, byte * param_6, uint * param_7, undefined4 param_8, char * param_9)
 * Local Vars  : pbVar11, pcVar10, pcVar13, piVar12, uVar15, puVar14, cVar17, uVar16, iVar19, bVar18, iVar21, pcVar20, bVar23, cVar22, bVar25, bVar24, uVar27, uVar26, iVar29, pbVar28, unaff_EBX, cVar30, puVar32, pbVar31, bVar34, uVar33, cVar36, cVar35, unaff_ESI, unaff_EBP, puVar37, unaff_EDI, in_DS, in_ES, in_AF, bVar38, unaff_retaddr, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, uStack_58, uStack_56, uStack_57, uStack_14, uStack_54, uVar2, uVar1, cVar4, uVar3, in_EAX, bVar5, pbVar7, puVar6, pbVar9, pcVar8
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
_ctor(uint *param_1,uint *param_2,char *param_3,uint param_4,undefined4 param_5,byte *param_6,
     uint *param_7,undefined4 param_8,char *param_9)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  char cVar4;
  byte bVar5;
  uint *in_EAX;
  uint *puVar6;
  undefined3 uVar15;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined3 uVar16;
  byte *pbVar11;
  int *piVar12;
  char *pcVar13;
  uint *puVar14;
  char cVar17;
  byte bVar18;
  char cVar22;
  undefined2 uVar26;
  int iVar19;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  char *pcVar20;
  int iVar21;
  undefined2 uVar27;
  byte *pbVar28;
  int iVar29;
  char cVar30;
  byte bVar34;
  byte *unaff_EBX;
  byte *pbVar31;
  uint *puVar32;
  char cVar35;
  char cVar36;
  uint uVar33;
  uint unaff_EBP;
  char *unaff_ESI;
  uint *unaff_EDI;
  uint *puVar37;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar38;
  byte in_AF;
  uint *unaff_retaddr;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_14;
  
  do {
    while( true ) {
                    /* .NET CLR Managed Code */
      bVar5 = (byte)((uint)param_1 >> 8);
      uVar26 = (undefined2)((uint)param_1 >> 0x10);
      bVar18 = (byte)param_1;
      cVar22 = bVar5 + (byte)*in_EAX;
      puVar6 = (uint *)((int)in_EAX + (uint)CARRY1(bVar5,(byte)*in_EAX) + *in_EAX);
      *(byte *)param_2 = (byte)*param_2 + bVar18;
      cVar17 = bVar18 - *(byte *)((int)param_2 + 3);
      param_1 = (uint *)CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(cVar22,bVar18)) >> 8),cVar17);
      if ((POPCOUNT(cVar17) & 1U) != 0) {
        param_7 = param_2;
        if (bVar18 < *(byte *)((int)param_2 + 3)) goto code_r0x00404d15;
        *puVar6 = (uint)(*puVar6 + (int)puVar6);
        param_7 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *unaff_EBX);
        in_EAX = puVar6 + 0x230e;
        goto code_r0x00404cce;
      }
      *(byte *)puVar6 = (byte)*puVar6 + (char)puVar6;
      uVar15 = (undefined3)((uint)puVar6 >> 8);
      cVar4 = (char)puVar6 + '\x02';
      pcVar13 = (char *)CONCAT31(uVar15,cVar4);
      if ((POPCOUNT(cVar4) & 1U) == 0) break;
      *(byte *)param_2 = (byte)*param_2 + cVar17;
      bVar18 = cVar4 - *pcVar13;
      uVar33 = *param_1;
      *(byte *)param_1 = (byte)*param_1 + bVar18;
      cVar4 = bVar18 - CARRY1((byte)uVar33,bVar18);
      *(byte *)param_2 = (byte)*param_2 + cVar4;
      *(byte *)(unaff_EDI + 0x673b40) = (byte)unaff_EDI[0x673b40] + cVar22;
      in_EAX = (uint *)CONCAT31(uVar15,cVar4);
      *(byte *)in_EAX = (byte)*in_EAX + cVar4;
      *(byte *)param_2 = (byte)*param_2 + cVar4;
      *(char **)(unaff_EBX + 0x58) = unaff_ESI + *(int *)(unaff_EBX + 0x58);
      param_1 = (uint *)CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(cVar22 + (char)((uint)puVar6 >> 8),
                                                                 cVar17)) >> 8),
                                 cVar17 + *(char *)((int)in_EAX * 2));
      *(byte *)in_EAX = (byte)*in_EAX + cVar4;
      *unaff_ESI = *unaff_ESI + (char)unaff_EBX;
    }
    *pcVar13 = *pcVar13 + cVar4;
    *param_9 = *param_9 + (byte)param_9;
    param_1 = (uint *)CONCAT22((short)((uint)param_8 >> 0x10),
                               CONCAT11((byte)((uint)param_8 >> 8) | (byte)*param_7,(char)param_8));
    *param_6 = *param_6 + (char)param_6;
    *(byte *)((int)param_9 * 2) = *(byte *)((int)param_9 * 2) ^ (byte)param_9;
    uVar3 = *(undefined6 *)param_9;
    in_DS = (undefined2)((uint6)uVar3 >> 0x20);
    pbVar7 = (byte *)uVar3;
    bVar5 = (byte)uVar3;
    *pbVar7 = *pbVar7 + bVar5;
    bVar18 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar5;
    puVar6 = (uint *)((int)param_1 + 0x11673);
    uVar1 = *puVar6;
    uVar33 = *puVar6;
    *puVar6 = uVar33 + (int)param_7 + (uint)CARRY1(bVar18,bVar5);
    cVar22 = (char)(pbVar7 + (uint)(CARRY4(uVar1,(uint)param_7) ||
                                   CARRY4(uVar33 + (int)param_7,(uint)CARRY1(bVar18,bVar5))) +
                             *(int *)((int)param_1 + (int)param_7));
    cVar17 = cVar22 + '\x04';
    in_EAX = (uint *)CONCAT31((int3)((uint)(pbVar7 + (uint)(CARRY4(uVar1,(uint)param_7) ||
                                                           CARRY4(uVar33 + (int)param_7,
                                                                  (uint)CARRY1(bVar18,bVar5))) +
                                                     *(int *)((int)param_1 + (int)param_7)) >> 8),
                              cVar17);
    param_2 = param_7;
    unaff_EBX = param_6;
    unaff_EBP = param_4;
    unaff_ESI = param_3;
    unaff_EDI = unaff_retaddr;
    unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
  } while (SCARRY1(cVar22,'\x04') == cVar17 < '\0');
code_r0x00404cce:
  *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
  pcVar13 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,(short)param_7);
  uVar33 = *param_1;
  uVar1 = *param_7;
  bVar18 = (byte)param_1;
  *(byte *)param_7 = (byte)*param_7 + bVar18;
  iVar19 = (CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '\x03') & uVar33) + iRam00008c38;
  *(byte *)param_1 = (byte)*param_1 + (char)param_7;
  pcVar8 = (char *)(iVar19 + (uint)CARRY1((byte)uVar1,bVar18) + 0x1246f);
  uVar15 = (undefined3)((uint)param_1 >> 8);
  bVar18 = bVar18 | (byte)*param_7;
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar8 >> 8);
  puVar6 = (uint *)(CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + *pcVar8) + 0x1fbeef2);
  uVar33 = *puVar6;
  *puVar6 = (uint)(*puVar6 + (int)puVar6);
  puVar37 = (uint *)CONCAT31(uVar15,bVar18);
  if (CARRY4(uVar33,(uint)puVar6)) {
    *puVar6 = (uint)(*puVar6 + (int)puVar6);
    pcVar8 = (char *)CONCAT31(uVar15,bVar18 | bRam00282809);
    cVar17 = (char)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + cVar17;
    *pcVar8 = *pcVar8 - cVar17;
    *(byte *)puVar6 = *(byte *)puVar6 + (char)puVar6;
    iVar19 = (int)pcVar8 - *(int *)unaff_EBX;
    unaff_ESI = unaff_ESI + 8;
    out(*(undefined4 *)pcVar13,(short)param_7);
    *puVar6 = (uint)(*puVar6 + (int)puVar6);
    param_1 = (uint *)CONCAT22((short)((uint)iVar19 >> 0x10),
                               CONCAT11((byte)((uint)iVar19 >> 8) | bRambf73070b,(char)iVar19));
code_r0x00404d15:
    uVar33 = *puVar6;
    bVar18 = (byte)puVar6;
    *(byte *)puVar6 = (byte)*puVar6 + bVar18;
    pcVar13 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_7);
    in_AF = 9 < (bVar18 & 0xf) | in_AF;
    bVar5 = bVar18 + in_AF * '\x06';
    puVar6 = (uint *)CONCAT31((int3)((uint)puVar6 >> 8),
                              bVar5 + (0x90 < (bVar5 & 0xf0) |
                                      CARRY1((byte)uVar33,bVar18) | in_AF * (0xf9 < bVar5)) * '`');
    puVar37 = param_1;
  }
  *puVar6 = (uint)(*puVar6 + (int)puVar6);
  bVar18 = (byte)puVar6 | (byte)*unaff_EDI;
  pbVar7 = (byte *)(pcVar13 + 4);
  uVar27 = SUB42(param_7,0);
  out(*(undefined4 *)pcVar13,uVar27);
  *(byte *)puVar37 = (byte)*puVar37 - bVar18;
  uVar33 = *param_7;
  bVar5 = (byte)puVar37;
  *(byte *)param_7 = (byte)*param_7 + bVar5;
  iVar19 = CONCAT31((int3)((uint)puVar6 >> 8),bVar18) + *(int *)pbVar7 +
           (uint)CARRY1((byte)uVar33,bVar5);
  pcVar8 = (char *)(unaff_EBP - *param_7);
  uVar15 = (undefined3)((uint)iVar19 >> 8);
  cVar17 = (char)iVar19 + *pbVar7 + (unaff_EBP < *param_7);
  puVar6 = (uint *)CONCAT31(uVar15,cVar17);
  bVar18 = (byte)((uint)puVar37 >> 8);
  *(byte *)puVar37 = (byte)*puVar37 - bVar18;
  *puVar6 = (uint)(*puVar6 + (int)puVar6);
  bVar5 = bVar5 | *(byte *)((int)param_7 + (int)puVar6);
  uVar26 = (undefined2)((uint)puVar37 >> 0x10);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)puVar6 = (byte)*puVar6 + cVar17;
    pcVar20 = (char *)CONCAT31(uVar15,cVar17 + '\x12');
    *pcVar20 = *pcVar20 + bVar18;
    puVar6 = (uint *)CONCAT31(uVar15,(cVar17 + '\x12') -
                                     *(char *)CONCAT31((int3)((uint)puVar37 >> 8),bVar5));
    uVar33 = *param_7;
    *(byte *)param_7 = (byte)*param_7 + bVar5;
    if (CARRY1((byte)uVar33,bVar5)) {
      *unaff_EBX = *unaff_EBX - (char)param_7;
      goto code_r0x00404da8;
    }
    pbVar9 = (byte *)((uint)puVar6 | *puVar6);
    out(*(undefined4 *)pbVar7,uVar27);
    *pbVar9 = *pbVar9 + (char)pbVar9;
    bVar23 = *pbVar9;
    piVar12 = (int *)CONCAT22(uVar26,CONCAT11(bVar18 | bVar23,bVar5));
    iVar19 = (int)pbVar9 - *piVar12;
    *(byte *)param_7 = (byte)*param_7 + bVar5;
    pcVar20 = pcVar13 + 0xc;
    out(*(undefined4 *)(pcVar13 + 8),uVar27);
    uRam12060000 = (undefined1)iVar19;
    *(char *)((int)piVar12 + iVar19) = *(char *)((int)piVar12 + iVar19) - (bVar18 | bVar23);
    *(byte *)param_7 = (byte)*param_7 + bVar5;
    pbVar7 = (byte *)(iVar19 + -0x120edecd);
    *pcVar20 = *pcVar20 + '\x01';
    bVar18 = *pbVar7;
    bVar23 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar23;
    pcVar8 = pcVar8 + ((-1 - *(int *)((int)unaff_EDI + 0x42)) - (uint)CARRY1(bVar18,bVar23));
    *pbVar7 = *pbVar7 + bVar23;
    bVar18 = (byte)unaff_EBX | (byte)((uint)pbVar7 >> 8);
    pbRam0000416f = pbRam0000416f + (int)pbVar7;
    uVar33 = *param_7;
    pcVar10 = (char *)(((uint)pbVar7 | 0x11) + 0x511072c);
    pbVar7 = (byte *)(pcVar13 + 0x10);
    out(*(undefined4 *)pcVar20,uVar27);
    param_7 = (uint *)((int)param_7 + 1);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    bVar23 = (byte)((uint)pcVar10 >> 8);
    unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                          (byte)uVar33,bVar18)) >> 8),
                                 bVar18 | bVar23);
    uVar15 = (undefined3)((uint)pcVar10 >> 8);
    bVar18 = (char)pcVar10 - *pcVar10;
    pcVar13 = (char *)CONCAT31(uVar15,bVar18);
    *pcVar13 = *pcVar13 + bVar18;
    *(int *)((int)pcVar13 * 2) = (int)(unaff_EBX + *(int *)((int)pcVar13 * 2));
    *(byte *)param_7 = *(byte *)param_7 + bVar18;
    *pcVar8 = *pcVar8 + bVar23;
    in_AF = 9 < (bVar18 & 0xf) | in_AF;
    uVar33 = CONCAT31(uVar15,bVar18 + in_AF * '\x06') & 0xffffff0f;
    bVar18 = (byte)uVar33;
    pbVar9 = (byte *)CONCAT22((short)(uVar33 >> 0x10),CONCAT11(bVar23 + in_AF,bVar18));
    *pbVar7 = *pbVar7 + bVar5;
    *pbVar9 = *pbVar9 + bVar18;
    *pbVar9 = *pbVar9 + bVar18;
    bVar38 = CARRY1(bVar18,*pbVar9);
    puVar6 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar18 + *pbVar9);
  }
  else {
code_r0x00404da8:
    *(byte *)puVar6 = (byte)*puVar6 + (char)puVar6;
    bVar38 = false;
    piVar12 = (int *)CONCAT22(uVar26,CONCAT11(bVar18 | (byte)*param_7,bVar5));
  }
  do {
    puVar32 = param_7;
    *puVar6 = (*puVar6 - (int)puVar6) - (uint)bVar38;
    bVar18 = (byte)((uint)piVar12 >> 8);
    uVar26 = (undefined2)((uint)piVar12 >> 0x10);
    bVar5 = (byte)piVar12;
    bVar23 = bVar18 + (byte)iRam00000c00;
    pbVar9 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar18,(byte)iRam00000c00));
    *(byte *)puVar32 = (byte)*puVar32 + bVar5;
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *pbVar7);
    bVar18 = *pbVar9;
    puVar6 = (uint *)(pbVar9 + (uint)CARRY1(bVar23,*pbVar9) + *(int *)pbVar9);
    *(byte *)puVar32 = (byte)*puVar32 + bVar5;
    cVar22 = ((bVar23 + bVar18) - (byte)*puVar32) + (byte)*puVar6;
    pcVar13 = (char *)CONCAT22(uVar26,CONCAT11(cVar22,bVar5));
    puVar37 = unaff_EDI + 1;
    uVar33 = in((short)puVar32);
    *unaff_EDI = uVar33;
    cVar17 = (char)puVar6;
    *(byte *)puVar6 = (byte)*puVar6 + cVar17;
    uVar15 = (undefined3)((uint)puVar32 >> 8);
    bVar23 = (byte)puVar32 | *pbVar7;
    pcVar20 = (char *)CONCAT31(uVar15,bVar23);
    *pcVar13 = *pcVar13 + '\x01';
    bVar18 = (cVar22 - *pcVar20) + (byte)*puVar6;
    pcVar13 = (char *)CONCAT22(uVar26,CONCAT11(bVar18,bVar5));
    unaff_EDI = unaff_EDI + 2;
    uVar33 = in((short)pcVar20);
    *puVar37 = uVar33;
    *(byte *)puVar6 = (byte)*puVar6 + cVar17;
    bVar23 = bVar23 | *pbVar7;
    param_7 = (uint *)CONCAT31(uVar15,bVar23);
    *pcVar13 = *pcVar13 + '\x01';
    bVar38 = bVar5 < *(byte *)((int)param_7 + 2);
    cVar22 = bVar5 - *(byte *)((int)param_7 + 2);
    piVar12 = (int *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar22);
  } while ((POPCOUNT(cVar22) & 1U) != 0);
  *(byte *)puVar6 = (byte)*puVar6 + cVar17;
  bVar5 = cVar17 + 0x7b;
  pbVar11 = (byte *)CONCAT31((int3)((uint)puVar6 >> 8),bVar5);
  unaff_EBX[(int)pbVar11] = unaff_EBX[(int)pbVar11] + bVar5;
  pbVar9 = pbVar7 + 4;
  uVar27 = SUB42(param_7,0);
  out(*(undefined4 *)pbVar7,uVar27);
  pbVar31 = unaff_EBX + -1;
  *pbVar11 = *pbVar11 + bVar5;
  bVar18 = bVar18 | (byte)*param_7;
  piVar12 = (int *)CONCAT22(uVar26,CONCAT11(bVar18,cVar22));
  *pbVar11 = *pbVar11 + bVar5;
  *pbVar31 = *pbVar31 + bVar23;
  *pbVar31 = *pbVar31 ^ bVar5;
  *(byte *)param_7 = (byte)*param_7 + bVar18;
  *pbVar11 = *pbVar11 + bVar5;
  do {
    bVar24 = (byte)((uint)piVar12 >> 8);
    *(byte *)unaff_EDI = (byte)*unaff_EDI + bVar24;
    bVar18 = *pbVar11;
    bVar5 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar5;
    *(byte **)(unaff_EBX + 0x17) = pbVar9 + (uint)CARRY1(bVar18,bVar5) + *(int *)(unaff_EBX + 0x17);
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar16 = (undefined3)((uint)pbVar11 >> 8);
    bVar5 = bVar5 | *pbVar9;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pcVar8 + -0x34));
    *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
    bVar18 = bVar5 + 2;
    cVar17 = (char)((uint)puVar32 >> 8);
    bVar25 = (byte)piVar12;
    if ((POPCOUNT(bVar18) & 1U) != 0) {
      pbVar11 = (byte *)CONCAT31(uVar16,bVar5 + 0x15 + (0xfd < bVar5));
      if (0xec < bVar18 || CARRY1(bVar5 + 0x15,0xfd < bVar5)) {
        *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      }
code_r0x00404e60:
      pcVar8 = pcVar8 + -*param_7;
      bVar18 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      pbVar9 = pbVar9 + (-(uint)CARRY1(bVar18,(byte)pbVar11) - *(int *)pbVar11);
      pbVar11 = pbVar11 + *(int *)pbVar11;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      *(char *)piVar12 = (char)*piVar12 + cVar17;
      bVar18 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      *(byte **)(pbVar31 + (int)param_7) =
           (byte *)((int)param_7 +
                   (uint)CARRY1(bVar18,(byte)pbVar11) + *(int *)(pbVar31 + (int)param_7));
      pbVar11 = pbVar11 + 0x73061314;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      uVar16 = (undefined3)((uint)piVar12 >> 8);
      bVar25 = bVar25 | (byte)*param_7;
      pcVar20 = (char *)CONCAT31(uVar16,bVar25);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      cVar17 = (char)pbVar11 + 'o';
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar17);
      *pcVar13 = *pcVar13 + cVar17;
      out(*(undefined4 *)pbVar9,uVar27);
      uVar33 = *param_7;
      *(byte *)param_7 = (byte)*param_7 + bVar25;
      pcVar13 = pcVar13 + (uint)CARRY1((byte)uVar33,bVar25) + *unaff_EDI;
      *pcVar13 = *pcVar13 + (char)pcVar13;
      *pcVar20 = *pcVar20 + bVar23;
      pbVar11 = pbVar9 + 8;
      out(*(undefined4 *)(pbVar9 + 4),uVar27);
      *(byte *)param_7 = (byte)*param_7 + bVar25;
      piVar12 = (int *)((uint)pcVar13 | *unaff_EDI);
      pcVar20[0x390a0000] = pcVar20[0x390a0000] - bVar24;
      pbVar9 = (byte *)0x7000000;
      *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar24;
      *piVar12 = *piVar12 + (int)piVar12;
      puVar6 = (uint *)CONCAT31(uVar16,bVar25 | *(byte *)((int)piVar12 + (int)pcVar20));
      *(char *)((int)piVar12 * 2) = *(char *)((int)piVar12 * 2) - bVar24;
      cRam07000000 = cRam07000000 + bVar24;
      piVar12 = (int *)((uint)piVar12 | 0x777b02);
      pbVar7 = (byte *)((int)unaff_EDI + (int)pcVar8 * 2);
      bVar38 = SCARRY1(*pbVar7,(char)piVar12);
      *pbVar7 = *pbVar7 + (char)piVar12;
      bVar18 = *pbVar7;
      *(char *)piVar12 = (char)*piVar12;
      uStack_14 = in_DS;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
    bVar5 = bVar5 + 0x71;
    pbVar11 = (byte *)CONCAT31(uVar16,bVar5);
    *pbVar11 = *pbVar11;
    *pbVar9 = *pbVar9 + 1;
    *piVar12 = (*piVar12 - (int)pbVar11) - (uint)(0x90 < bVar18);
    bVar18 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar5;
    if (!CARRY1(bVar18,bVar5)) goto code_r0x00404e60;
    *pbVar11 = *pbVar11 + bVar5;
    uVar26 = (undefined2)((uint)piVar12 >> 0x10);
    bVar24 = bVar24 | *pbVar11;
    pbVar11 = pbVar11 + -*(int *)pbVar11;
    *pbVar31 = *pbVar31 + bVar24;
    cVar22 = bVar25 - *(byte *)((int)param_7 + 2);
    piVar12 = (int *)CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar24,bVar25)) >> 8),cVar22);
  } while ((POPCOUNT(cVar22) & 1U) != 0);
  cVar4 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar4;
  uVar16 = (undefined3)((uint)pbVar11 >> 8);
  pcVar13 = (char *)CONCAT31(uVar16,cVar4 + '{');
  out(*(undefined4 *)pbVar9,uVar27);
  *pcVar13 = *pcVar13 + cVar4 + '{';
  bVar5 = cVar4 + 0x7e;
  pbVar31 = (byte *)CONCAT31(uVar16,bVar5);
  pbVar11 = pbVar7 + 0xc;
  out(*(undefined4 *)(pbVar7 + 8),uVar27);
  pbVar9 = unaff_EBX + -2;
  *pbVar31 = *pbVar31 + bVar5;
  bVar24 = bVar24 | (byte)*param_7;
  puVar6 = (uint *)CONCAT22(uVar26,CONCAT11(bVar24,cVar22));
  *pbVar31 = *pbVar31 + bVar5;
  *pbVar9 = *pbVar9 + bVar23;
  *pbVar9 = *pbVar9 ^ bVar5;
  *(byte *)param_7 = (byte)*param_7 + bVar24;
  *pbVar31 = *pbVar31 + bVar5;
  *pbVar31 = *pbVar31 + cVar17;
  bVar18 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar5;
  *(byte **)(unaff_EBX + 0x18) = pbVar11 + (uint)CARRY1(bVar18,bVar5) + *(int *)(unaff_EBX + 0x18);
  *(byte **)pbVar31 = pbVar31 + *(int *)pbVar31;
  bVar5 = bVar5 | *pbVar11;
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pcVar8 + -0x33));
  *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
  bVar38 = SCARRY1(bVar5,'\x02');
  bVar18 = bVar5 + 2;
  piVar12 = (int *)CONCAT31(uVar16,bVar18);
  if ((POPCOUNT(bVar18) & 1U) == 0) {
    *(byte *)piVar12 = (char)*piVar12 + bVar18;
    return CONCAT31(uVar16,bVar5 + 0x71);
  }
code_r0x00404ebf:
  bVar5 = (byte)piVar12;
  uVar16 = (undefined3)((uint)piVar12 >> 8);
  if (bVar18 != 0 && bVar38 == (char)bVar18 < '\0') {
    *(byte *)piVar12 = (char)*piVar12 + bVar5;
    *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
         (byte *)((int)param_7 + (uint)(0xd2 < bVar5) + *(int *)(pbVar11 + (int)unaff_EDI * 8));
    return CONCAT31(uVar16,bVar5 + 0x2d);
  }
  *piVar12 = (int)(*piVar12 + (int)piVar12);
  bVar18 = *pbVar9;
  *(char **)pbVar11 = (char *)(*(int *)pbVar11 + (int)piVar12);
  bVar25 = (byte)((uint)puVar6 >> 8);
  *(byte *)piVar12 = (char)*piVar12 - bVar25;
  *(byte *)piVar12 = (char)*piVar12 + bVar5;
  pbVar31 = (byte *)(CONCAT31(uVar15,bVar23 | bVar18) - *(int *)pbVar9);
  puVar37 = (uint *)CONCAT31(uVar16,bVar5 + 6);
  *(uint *)(pbVar9 + (int)pbVar11 * 2) =
       (int)puVar37 + (uint)(0xf9 < bVar5) + *(int *)(pbVar9 + (int)pbVar11 * 2);
  *(byte *)puVar6 = (byte)*puVar6 ^ bVar5 + 6;
  bVar5 = (byte)puVar6;
  *pbVar31 = *pbVar31 + bVar5;
  pbVar7 = pbVar11 + 4;
  uVar26 = SUB42(pbVar31,0);
  out(*(undefined4 *)pbVar11,uVar26);
  *puVar6 = *puVar6 ^ (uint)puVar37;
  *pbVar31 = *pbVar31 + bVar5;
  puVar32 = (uint *)(pbVar9 + -*(int *)pbVar9);
  *(uint *)((int)unaff_EDI + 0x31) = *(uint *)((int)unaff_EDI + 0x31) | (uint)pcVar8;
  *puVar37 = *puVar37 + (int)puVar37;
  puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),CONCAT11(bVar25 | (byte)*puVar32,bVar5));
  *(byte **)(pbVar31 + 0x6e) = pbVar7 + *(int *)(pbVar31 + 0x6e);
  piVar12 = (int *)((uint)puVar37 | *puVar37);
  bVar23 = (byte)puVar32;
  *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar23;
  bVar18 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar5;
  if (CARRY1(bVar18,bVar5)) {
    *piVar12 = (int)(*piVar12 + (int)piVar12);
    bVar18 = pbVar31[0x11];
    uVar27 = (undefined2)((uint)puVar32 >> 0x10);
    out(*(undefined4 *)pbVar7,uVar26);
    puVar6 = (uint *)((int)puVar6 + 1);
    *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
    bVar34 = (byte)((uint)puVar32 >> 8) | bVar18 | *pbVar31;
    pcVar13 = (char *)((int)piVar12 + -0x21000001);
    bVar18 = (byte)pcVar13 | 0x11;
    uVar15 = (undefined3)((uint)pcVar13 >> 8);
    cVar17 = bVar18 - 7;
    pcVar20 = (char *)CONCAT31(uVar15,cVar17);
    *unaff_EDI = (uint)(pcVar20 + (uint)(bVar18 < 7) + *unaff_EDI);
    pbVar7 = pbVar11 + 0xc;
    out(*(undefined4 *)(pbVar11 + 8),uVar26);
    pbVar31 = pbVar31 + 1;
    *pcVar20 = *pcVar20 + cVar17;
    bVar25 = (byte)((uint)pcVar13 >> 8);
    bVar24 = bVar23 | bVar25;
    bVar5 = cVar17 - *pcVar20;
    bVar18 = *(byte *)puVar6;
    *(byte *)puVar6 = *(byte *)puVar6 + bVar5;
    *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5 + CARRY1(bVar18,bVar5)
    ;
    *pbVar31 = *pbVar31 + bVar5;
    *pbVar7 = *pbVar7 + bVar24;
    bVar18 = (byte)((uint)pbVar31 >> 8);
    *(byte *)puVar6 = *(byte *)puVar6 + bVar5 + CARRY1((byte)pbVar31,bVar18);
    piVar12 = (int *)CONCAT31(uVar15,bVar5);
    *(byte *)piVar12 = (char)*piVar12 + bVar5;
    pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                               CONCAT11(bVar18 + bVar25,(byte)pbVar31 + bVar18));
    puVar32 = (uint *)CONCAT22(uVar27,CONCAT11(bVar34 + *(char *)(CONCAT31((int3)(CONCAT22(uVar27,
                                                  CONCAT11(bVar34,bVar23)) >> 8),bVar24) + 0x76),
                                               bVar24));
code_r0x00404fa4:
    *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
    pcVar13 = (char *)(CONCAT31((int3)((uint)piVar12 >> 8),(char)piVar12 + '(') ^ *puVar6);
    cVar4 = (char)puVar6;
    *pbVar31 = *pbVar31 + cVar4;
    uVar26 = (undefined2)((uint)puVar32 >> 0x10);
    cVar30 = (char)puVar32;
    cVar35 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x75);
    *pcVar13 = *pcVar13 + (char)pcVar13;
    cVar17 = (char)pcVar13 + 'o';
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar17);
    *pcVar13 = *pcVar13 + cVar17;
    cVar36 = (char)((uint)puVar6 >> 8);
    *pcVar8 = *pcVar8 - cVar36;
    pbVar31[1] = pbVar31[1] + cVar4;
    pcVar13 = pcVar13 + -0x757b021b;
    cVar17 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar17;
    uVar15 = (undefined3)((uint)pcVar13 >> 8);
    cVar22 = cVar17 + 'o';
    pcVar13 = (char *)CONCAT31(uVar15,cVar22);
    pbVar11 = pbVar31 + 2;
    *pcVar13 = *pcVar13 + cVar22;
    iVar19 = CONCAT22(uVar26,CONCAT11(cVar35 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar35,cVar30)) +
                                                        0x76),cVar30));
    *pcVar13 = *pcVar13 + cVar22;
    pcVar13 = (char *)CONCAT31(uVar15,cVar17 + -0x22);
    puVar37 = (uint *)((int)unaff_EDI + 1);
    *(byte *)unaff_EDI = *pbVar7;
    *pcVar13 = *pcVar13 + cVar17 + -0x22;
    *(byte *)((int)puVar6 + (int)pcVar13) =
         *(byte *)((int)puVar6 + (int)pcVar13) - (char)((uint)pbVar11 >> 8);
    *pbVar11 = *pbVar11 + cVar4;
    bVar5 = cVar36 - pbVar31[4];
    pbVar9 = pbVar7 + 5;
    out(*(undefined4 *)(pbVar7 + 1),(short)pbVar11);
    puVar32 = (uint *)((uint)(pcVar13 + *(int *)(pcVar13 + iVar19)) ^ 0x280a0001);
    *(byte *)puVar32 = (byte)*puVar32 << 1 | (char)(byte)*puVar32 < '\0';
    *pbVar9 = *pbVar9 + (char)puVar32;
    pbVar9 = pbVar9 + *(int *)(pbVar31 + -0x5c);
    pbVar7 = (byte *)((uint)puVar32 | *puVar32);
    *pbVar9 = *pbVar9 + (char)pbVar7;
    puVar32 = (uint *)CONCAT31((int3)((uint)iVar19 >> 8),cVar30 - (char)pbVar11);
    bVar18 = *pbVar7;
    puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),CONCAT11(bVar5 + *pbVar7,cVar4));
    iVar19 = *(int *)pbVar7;
    *pbVar11 = *pbVar11 + cVar4;
    cVar17 = (char)(pbVar7 + (uint)CARRY1(bVar5,bVar18) + iVar19) + 'r';
    puVar14 = (uint *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar5,bVar18) + iVar19) >> 8),
                               cVar17);
    pbVar31 = (byte *)CONCAT22((short)((uint)pbVar11 >> 0x10),CONCAT11(10,(char)pbVar11));
    *(char *)(puVar14 + 10) = (char)puVar14[10] + '\n';
    *pbVar9 = *pbVar9 + cVar17;
    pbVar7 = pbVar9 + *(int *)(pbVar31 + -0x5e);
    uVar33 = *puVar14;
    cVar17 = (char)((uint)puVar14 | uVar33);
    *pbVar7 = *pbVar7 + cVar17;
    uVar15 = (undefined3)(((uint)puVar14 | uVar33) >> 8);
    cVar22 = cVar17 + (byte)*puVar32;
    puVar14 = (uint *)CONCAT31(uVar15,cVar22);
    if (SCARRY1(cVar17,(byte)*puVar32) == cVar22 < '\0') goto code_r0x00405090;
    *(byte *)puVar14 = (byte)*puVar14 + cVar22;
    piVar12 = (int *)CONCAT31(uVar15,cVar22 + '\x02');
    unaff_EDI = puVar37;
  }
  else {
    out(2,(char)piVar12);
    uStack_14 = in_ES;
    if ((POPCOUNT(*pbVar31) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar15 = (undefined3)((uint)piVar12 >> 8);
  cVar17 = (char)piVar12 + '}';
  pbVar9 = (byte *)CONCAT31(uVar15,cVar17);
  pbVar31[(int)pbVar9] = pbVar31[(int)pbVar9] + cVar17;
  pbVar31[0x280a0000] = pbVar31[0x280a0000] - (char)((uint)piVar12 >> 8);
  bVar18 = (byte)puVar6 & 7;
  *pbVar9 = *pbVar9 << bVar18 | *pbVar9 >> 8 - bVar18;
  *pbVar7 = *pbVar7 + cVar17;
  cVar4 = (char)puVar32 - *pbVar7;
  uVar26 = (undefined2)((uint)puVar32 >> 0x10);
  cVar36 = (char)((uint)puVar32 >> 8) + *(char *)(CONCAT31((int3)((uint)puVar32 >> 8),cVar4) + 0x7c)
  ;
  pcVar13 = (char *)CONCAT22(uVar26,CONCAT11(cVar36,cVar4));
  *pbVar9 = *pbVar9 + cVar17;
  bVar5 = (char)piVar12 + 0xa7U & *pbVar31;
  puVar37 = (uint *)((int)unaff_EDI + *(int *)(pcVar8 + 0x7c));
  *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
  bVar5 = bVar5 + 0x2a;
  pbVar9 = (byte *)CONCAT31(uVar15,bVar5);
  *pbVar9 = *pbVar9 + bVar5;
  *pcVar13 = *pcVar13 + cVar4;
  *pbVar31 = *pbVar31 ^ bVar5;
  *pcVar13 = *pcVar13 + bVar5;
  bVar18 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  cVar17 = (bVar5 - *pbVar9) - CARRY1(bVar18,bVar5);
  *(byte *)puVar6 = (byte)*puVar6 + (byte)pbVar31;
  cVar36 = cVar36 + pcVar13[0x7b];
  *(char *)CONCAT31(uVar15,cVar17) = *(char *)CONCAT31(uVar15,cVar17) + cVar17;
  pcVar13 = (char *)CONCAT31(uVar15,cVar17 + 'o');
  *pcVar13 = *pcVar13 + cVar17 + 'o';
  pcVar13 = pcVar13 + 0x2ed7fde6;
  cVar22 = (char)pcVar13;
  *pcVar13 = *pcVar13 + cVar22;
  cVar17 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar36,cVar4)) + 0x7b);
  *pcVar13 = *pcVar13 + cVar22;
  piVar12 = (int *)(CONCAT31((int3)((uint)pcVar13 >> 8),cVar22 + 'o') + 0x6f060000);
  *piVar12 = *piVar12 + (int)piVar12;
  uVar16 = (undefined3)((uint)pbVar31 >> 8);
  bVar5 = (byte)pbVar31 | *pbVar7;
  pbVar28 = (byte *)CONCAT31(uVar16,bVar5);
  uVar33 = CONCAT22(uVar26,CONCAT11(cVar36 + cVar17,cVar4)) | (uint)pbVar7;
  uVar15 = (undefined3)((uint)piVar12 >> 8);
  bVar18 = (byte)piVar12 | *pbVar28;
  pbVar11 = (byte *)CONCAT31(uVar15,bVar18);
  cVar17 = (byte)puVar6 - bVar5;
  puVar6 = (uint *)CONCAT31((int3)((uint)puVar6 >> 8),cVar17);
  *pbVar11 = *pbVar11 + bVar18;
  pbVar9 = pbVar7 + 4;
  out(*(undefined4 *)pbVar7,(short)pbVar28);
  *pbVar11 = bVar18;
  *pbVar28 = *pbVar28 + cVar17;
  pbVar7 = pbVar7 + 8;
  out(*(undefined4 *)pbVar9,(short)pbVar28);
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  puVar32 = (uint *)(CONCAT31((int3)(uVar33 >> 8),(char)uVar33 - (char)((uint)pbVar31 >> 8)) |
                    (uint)pbVar7);
  pbVar31 = (byte *)CONCAT31(uVar16,(bVar5 | *pbVar7) + (byte)*puVar37);
  cVar17 = bVar18 - (byte)*puVar37;
  puVar14 = (uint *)CONCAT31(uVar15,cVar17 - *(char *)CONCAT31(uVar15,cVar17));
code_r0x00405090:
  *puVar14 = (uint)(pbVar31 + *puVar14);
  cVar17 = (char)puVar14;
  *(byte *)puVar14 = (byte)*puVar14 + cVar17;
  *(byte *)puVar14 = (byte)*puVar14 + cVar17;
  *(byte *)puVar14 = (byte)*puVar14 + cVar17;
  *puVar6 = *puVar6 - (int)pcVar8;
  bVar18 = *pbVar7;
  bVar5 = (byte)pbVar31;
  *pbVar7 = *pbVar7 + bVar5;
  *(byte *)puVar14 = (byte)*puVar14 + cVar17 + CARRY1(bVar18,bVar5);
  *(byte *)puVar6 = (byte)*puVar6 + cVar17;
  uVar33 = *puVar32;
  *(byte *)puVar32 = (byte)*puVar32 + 0x72;
  *(byte *)puVar32 = (byte)*puVar32;
  cVar17 = (char)((uint)pbVar31 >> 8);
  if (SCARRY1((byte)uVar33,'r')) {
    pbVar7 = pbVar7 + *(int *)(pbVar31 + -10);
  }
  else {
    while( true ) {
      *pbVar7 = *pbVar7 + (char)puVar14;
      uVar15 = (undefined3)((uint)puVar14 >> 8);
      cVar22 = (char)puVar14 + (byte)*puVar32;
      pcVar13 = (char *)CONCAT31(uVar15,cVar22);
      puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                 CONCAT11((char)((uint)puVar32 >> 8) +
                                          *(byte *)((int)puVar32 + 0x7b),(char)puVar32));
      *pcVar13 = *pcVar13 + cVar22;
      in_AF = 9 < (cVar22 + 0x6fU & 0xf) | in_AF;
      uVar33 = CONCAT31(uVar15,cVar22 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar23 = (byte)uVar33;
      piVar12 = (int *)CONCAT22((short)(uVar33 >> 0x10),
                                CONCAT11((char)((uint)puVar14 >> 8) + in_AF,bVar23));
      *piVar12 = *piVar12 + (int)piVar12;
      uVar15 = (undefined3)((uint)piVar12 >> 8);
      bVar23 = bVar23 | *(byte *)(piVar12 + 0x354a);
      bVar23 = bVar23 - *(char *)CONCAT31(uVar15,bVar23);
      pbVar9 = (byte *)CONCAT31(uVar15,bVar23);
      bVar18 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar23;
      pbVar7 = pbVar7 + (-(uint)CARRY1(bVar18,bVar23) - *(int *)pbVar9);
      puVar14 = (uint *)(pbVar9 + 0xfc00);
      *pbVar31 = *pbVar31 + cVar17;
      uVar33 = *puVar14;
      bVar18 = (byte)puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar18;
      uVar2 = (uint)CARRY1((byte)uVar33,bVar18);
      uVar33 = *puVar32;
      uVar1 = *puVar32;
      *puVar32 = (uint)((byte *)(uVar1 + (int)puVar14) + uVar2);
      if (!CARRY4(uVar33,(uint)puVar14) && !CARRY4(uVar1 + (int)puVar14,uVar2)) break;
      *(byte *)puVar14 = (byte)*puVar14 + bVar18;
    }
  }
  uVar33 = (uint)puVar14 | *puVar14;
  uVar26 = SUB42(pbVar31,0);
  *pbVar7 = *pbVar7 + (char)uVar33;
  piVar12 = (int *)(uVar33 + 0xc1872);
  if (SCARRY4(uVar33,0xc1872)) {
    cVar22 = (char)piVar12;
    *(char *)piVar12 = *(char *)piVar12 + cVar22;
    *pbVar31 = *pbVar31 + cVar22;
    *(char *)piVar12 = *(char *)piVar12 + cVar22;
    *(byte *)puVar32 = (byte)*puVar32 + (char)puVar6;
    *(char *)piVar12 = *(char *)piVar12 + cVar22;
    *(char *)((int)piVar12 * 2) = *(char *)((int)piVar12 * 2) + bVar5;
    pbVar9 = pbVar7;
    goto code_r0x00405117;
  }
  do {
    bVar18 = *pbVar7;
    bVar5 = (byte)piVar12;
    *pbVar7 = *pbVar7 + bVar5;
    if (CARRY1(bVar18,bVar5)) {
      *piVar12 = (int)(*piVar12 + (int)piVar12);
      uVar15 = (undefined3)((uint)puVar6 >> 8);
      bVar18 = (byte)puVar6 | bRam396f1609;
      *piVar12 = (int)(*piVar12 + (int)piVar12);
      puVar6 = (uint *)CONCAT31(uVar15,bVar18 | *(byte *)CONCAT31(uVar15,bVar18));
      uVar15 = (undefined3)((uint)piVar12 >> 8);
      bVar5 = bVar5 | *pbVar31;
      pcVar13 = (char *)CONCAT31(uVar15,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        pbVar9 = pbVar7 + 4;
        out(*(undefined4 *)pbVar7,uVar26);
        uVar33 = CONCAT22((short)((uint)piVar12 >> 0x10),(ushort)bVar5);
        *pbVar9 = *pbVar9 + bVar5;
        pcVar13 = (char *)(uVar33 | 8);
        cVar22 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x7a);
        puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(cVar22,(char)puVar32));
        *pcVar13 = *pcVar13 + (char)pcVar13;
        cVar17 = (char)pcVar13 + 'o';
        piVar12 = (int *)CONCAT31((int3)(uVar33 >> 8),cVar17);
        *(char *)piVar12 = (char)*piVar12 + cVar17;
        *(byte *)puVar6 = (byte)*puVar6 + 1;
        pbVar7 = pbVar7 + 8;
        out(*(undefined4 *)pbVar9,uVar26);
        pbVar31 = (byte *)((uint)pbVar31 ^ uRam08122c04);
        iVar19 = CONCAT31((int3)((uint)(*piVar12 * 0x17070600) >> 8),2);
        *(char *)(iVar19 * 2) = *(char *)(iVar19 * 2) - cVar22;
        do {
          bVar18 = (byte)iVar19;
          *pbVar7 = *pbVar7 + bVar18;
          bVar38 = CARRY1(bVar18,(byte)*puVar32);
          uVar15 = (undefined3)((uint)iVar19 >> 8);
          cVar17 = bVar18 + (byte)*puVar32;
          pbVar9 = (byte *)CONCAT31(uVar15,cVar17);
          uVar26 = in_DS;
          uVar27 = uStack_54;
          if (SCARRY1(bVar18,(byte)*puVar32) == cVar17 < '\0') goto GenerateStatusText;
          *pbVar9 = *pbVar9 + cVar17;
          uVar33 = CONCAT31(uVar15,cVar17 + '\'') + 0x1ebd9f3;
          uStack_58 = (undefined1)uStack_14;
          uStack_57 = (undefined1)((ushort)uStack_14 >> 8);
          piVar12 = (int *)(uVar33 ^ 0x73060000);
          puVar6 = (uint *)((int)puVar6 + 1);
          *piVar12 = (int)(*piVar12 + (int)piVar12);
          puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                     CONCAT11((byte)((uint)puVar32 >> 8) | pcVar8[0x7e],
                                              (char)puVar32));
          cVar17 = (char)uVar33;
          *(char *)piVar12 = (char)*piVar12 + cVar17;
          uVar33 = CONCAT31((int3)((uint)piVar12 >> 8),cVar17 + '\x02');
          bVar38 = 0xd9f2d2da < uVar33;
          iVar19 = uVar33 + 0x260d2d25;
          pcVar13 = pcVar8;
          do {
            uVar15 = (undefined3)((uint)iVar19 >> 8);
            bVar5 = (char)iVar19 + -2 + bVar38;
            pbVar9 = (byte *)CONCAT31(uVar15,bVar5);
            bVar18 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar5;
            bVar23 = (byte)puVar32;
            uStack_54 = uStack_14;
            if (CARRY1(bVar18,bVar5)) {
              *pbVar9 = *pbVar9 + bVar5;
              puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                         CONCAT11((byte)((uint)puVar32 >> 8) | pcVar13[0x7f],bVar23)
                                        );
              *pbVar9 = *pbVar9 + bVar5;
              pbVar9 = (byte *)CONCAT31(uVar15,bVar5 + 0x2a);
              *pbVar9 = *pbVar9 + bVar5 + 0x2a;
              *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar31;
              uVar26 = in_DS;
              while( true ) {
                in_DS = uVar26;
                bVar5 = (byte)pbVar9;
                *pbVar31 = *pbVar31 ^ bVar5;
                *pbVar31 = *pbVar31 + (char)puVar32;
                *pbVar9 = *pbVar9 + bVar5;
                *(byte *)puVar32 = (byte)*puVar32 + (char)((uint)pbVar31 >> 8);
                bVar18 = *pbVar9;
                *pbVar9 = *pbVar9 + bVar5;
                uVar33 = *puVar32;
                uVar1 = *puVar32;
                *puVar32 = (uint)(pbVar9 + uVar1 + CARRY1(bVar18,bVar5));
                uVar15 = (undefined3)((uint)pbVar9 >> 8);
                if (CARRY4(uVar33,(uint)pbVar9) ||
                    CARRY4((uint)(pbVar9 + uVar1),(uint)CARRY1(bVar18,bVar5))) break;
                *pbVar7 = *pbVar7 + bVar5;
                pcVar20 = (char *)CONCAT22((short)((uint)puVar6 >> 0x10),
                                           CONCAT11((char)((uint)puVar6 >> 8) + *pbVar9,(char)puVar6
                                                   ));
                *pbVar7 = *pbVar7 + bVar5;
                piVar12 = (int *)CONCAT31(uVar15,bVar5 | (byte)*puVar32);
                pbVar9 = pbVar7;
                while( true ) {
                  pbVar7 = pbVar9 + 4;
                  out(*(undefined4 *)pbVar9,(short)pbVar31);
                  pbVar31 = pbVar31 + 1;
                  *piVar12 = (int)(*piVar12 + (int)piVar12);
                  bVar23 = (byte)((uint)pcVar20 >> 8) | *pbVar31;
                  uVar15 = (undefined3)((uint)piVar12 >> 8);
                  bVar5 = (byte)piVar12 ^ *pbVar31;
                  pcVar10 = (char *)CONCAT31(uVar15,bVar5);
                  cRam282b0000 = cRam282b0000 - bVar23;
                  *pcVar10 = *pcVar10 + bVar5;
                  pcVar8 = pcVar13 + -*(int *)pbVar31;
                  uStack_58 = (undefined1)in_DS;
                  uStack_57 = (undefined1)((ushort)in_DS >> 8);
                  bVar18 = *(byte *)((int)puVar37 + 0x17);
                  *pcVar10 = *pcVar10 + bVar5;
                  puVar6 = (uint *)CONCAT22((short)((uint)pcVar20 >> 0x10),
                                            CONCAT11(bVar23 + bVar18 | *pbVar31,(char)pcVar20));
                  *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
                  *(byte *)((int)pcVar10 * 2) = *(byte *)((int)pcVar10 * 2) ^ bVar5;
                  in_AF = 9 < (bVar5 & 0xf) | in_AF;
                  bVar5 = bVar5 + in_AF * -6;
                  pbVar9 = (byte *)CONCAT31(uVar15,bVar5 + (0x9f < bVar5 | in_AF * (bVar5 < 6)) *
                                                           -0x60);
                  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
                  *(char *)((int)pbVar9 * 2) =
                       *(char *)((int)pbVar9 * 2) + (char)((uint)pbVar31 >> 8);
                  bVar38 = CARRY1((byte)*puVar6,(byte)pbVar31);
                  *(byte *)puVar6 = (byte)*puVar6 + (byte)pbVar31;
                  uVar26 = in_DS;
                  uVar27 = uStack_14;
GenerateStatusText:
                  in_DS = uVar27;
                  pcVar13 = pcVar8;
                  uStack_54 = in_DS;
                  if (!bVar38) break;
                  *pbVar9 = *pbVar9 + (char)pbVar9;
                  iVar19 = CONCAT31((int3)((uint)puVar6 >> 8),(byte)puVar6 | *pbVar31);
                  uVar26 = (undefined2)((uint)puVar32 >> 0x10);
                  cVar4 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x7d);
                  *pbVar9 = *pbVar9 + (char)pbVar9;
                  *(byte *)puVar37 = (byte)*puVar37 - (char)((uint)puVar6 >> 8);
                  iVar19 = iVar19 - *(int *)(iVar19 + 0xb0a0000);
                  cVar17 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar4,(char)puVar32)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar7,(short)pbVar31);
                  pbVar31 = (byte *)CONCAT22(uStack_56,CONCAT11(uStack_57,uStack_58));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar9 = pbVar7 + 8;
                  out(*(undefined4 *)(pbVar7 + 4),CONCAT11(uStack_57,uStack_58));
                  pcVar13 = pcVar8 + 1;
                  cVar22 = (char)iVar19;
                  pcVar20 = (char *)CONCAT22((short)((uint)iVar19 >> 0x10),
                                             CONCAT11((byte)((uint)iVar19 >> 8) |
                                                      *(byte *)((int)puVar37 + 0x46),cVar22));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_14 = CONCAT11(uStack_57,uStack_58);
                  uVar15 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar9,0xf0)) >> 8);
                  piVar12 = (int *)CONCAT31(uVar15,0x5f);
                  puVar37 = (uint *)((int)puVar37 + 1);
                  *piVar12 = (int)(*piVar12 + (int)piVar12);
                  puVar32 = (uint *)CONCAT22(uVar26,CONCAT11(cVar4 + cVar17 | pbVar7[-0x78],
                                                             (char)puVar32));
                  *(char *)piVar12 = (char)*piVar12 + '_';
                  puVar6 = (uint *)CONCAT31(uVar15,0x8c);
                  *(byte **)(pbVar9 + (int)puVar37 * 8) =
                       pbVar31 + *(int *)(pbVar9 + (int)puVar37 * 8);
                  bVar18 = *pbVar9;
                  *pbVar9 = *pbVar9 + 0x8c;
                  if (bVar18 < 0x74) {
                    *pbVar31 = *pbVar31 + cVar22;
                    *(byte *)puVar32 = (byte)*puVar32 >> 1;
                    *(char *)puVar6 = (char)*puVar6 + -0x74;
                    *puVar6 = (uint)(pcVar13 + *puVar6);
                    *puVar6 = *puVar6 << 1 | (uint)((int)*puVar6 < 0);
                    *pbVar31 = *pbVar31 + cVar22;
                    pcVar8[2] = pcVar8[2] - cVar22;
                    *pbVar31 = *pbVar31 + cVar22;
                    pbVar7 = (byte *)CONCAT31(uVar15,0x83);
                    puVar6 = puVar32;
                    goto code_r0x00405312;
                  }
                  *puVar6 = (uint)(*puVar6 + (int)puVar6);
                  piVar12 = (int *)(CONCAT31(uVar15,(byte)puVar6[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar6[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar12 = (int *)((int)piVar12 + *(int *)pbVar9);
                }
              }
              *pbVar31 = *pbVar31 + bVar5;
              *(byte *)puVar32 = (byte)*puVar32 - (char)pbVar31;
              *pbVar9 = *pbVar9 + bVar5;
              pbVar9 = (byte *)CONCAT31(uVar15,bVar5 | (byte)*puVar32);
            }
            else {
              cVar17 = (char)puVar6;
              *pbVar31 = *pbVar31 + cVar17;
              *(byte **)pbVar9 = pbVar31 + *(int *)pbVar9;
              *pbVar9 = *pbVar9 + bVar5;
              bVar5 = bVar5 + *pbVar9;
              pbVar9 = (byte *)CONCAT31(uVar15,bVar5);
              if (-1 < (char)bVar5) {
                *(byte *)puVar32 = (byte)*puVar32 + bVar23;
                out(*(undefined4 *)pbVar7,(short)pbVar31);
                pbVar31 = pbVar31 + 1;
                *pbVar9 = *pbVar9 + bVar5;
                puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),
                                           bVar23 | (byte)((uint)iVar19 >> 8));
                cVar22 = bVar5 - (byte)*puVar6;
                pcVar8 = (char *)CONCAT31(uVar15,cVar22);
                *pcVar8 = *pcVar8 + cVar22 + (bVar5 < (byte)*puVar6);
                *pbVar31 = *pbVar31 + cVar22;
                pcVar8 = (char *)((int)pcVar8 * 2 + 0x79);
                *pcVar8 = *pcVar8 + (char)((uint)pbVar31 >> 8);
                pbVar9 = (byte *)in((short)pbVar31);
                pbVar7 = pbVar7 + 4;
              }
              *pbVar7 = *pbVar7 + cVar17;
              *pbVar9 = *pbVar9 + (char)pbVar9;
              *pbVar9 = *pbVar9 + (char)pbVar9;
              uStack_58 = (undefined1)in_DS;
              uStack_57 = (undefined1)((ushort)in_DS >> 8);
              bVar18 = *pbVar9;
              bVar23 = (byte)((uint)puVar6 >> 8);
              bVar25 = bVar23 + *pbVar9;
              iVar19 = *(int *)pbVar9;
              *pbVar31 = *pbVar31 + cVar17;
              bVar5 = (char)(pbVar9 + (uint)CARRY1(bVar23,bVar18) + iVar19) - (byte)*puVar32;
              pbVar9 = (byte *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar23,bVar18) + iVar19)
                                              >> 8),bVar5);
              *(byte *)puVar32 = (byte)*puVar32 ^ bVar5;
              *pcVar13 = *pcVar13 + (char)puVar32;
              *pbVar9 = *pbVar9 + bVar5;
              *pbVar9 = *pbVar9 + bVar5;
              *pbVar9 = *pbVar9 + bVar5;
              puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),
                                        CONCAT11(bVar25 + *pbVar9,cVar17));
              pbVar9 = pbVar9 + (uint)CARRY1(bVar25,*pbVar9) + *(int *)pbVar9;
              *pbVar31 = *pbVar31 + cVar17;
              pbVar7 = pbVar7 + *(int *)(pbVar31 + 0x3e);
            }
            *pbVar7 = *pbVar7 + (char)pbVar9;
            cVar17 = (char)pbVar9 + 'r';
            pbVar7 = pbVar7 + -1;
            uVar33 = CONCAT31((int3)((uint)pbVar9 >> 8),cVar17);
            *pbVar7 = *pbVar7 + cVar17;
            bVar38 = 0xfff38f8d < uVar33;
            iVar19 = uVar33 + 0xc7072;
            pcVar8 = pcVar13;
          } while (SCARRY4(uVar33,0xc7072));
        } while( true );
      }
      *pcVar13 = *pcVar13 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar9 = (byte *)CONCAT31(uVar15,bVar5);
      bVar18 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar5;
      uVar15 = (undefined3)
               ((uint)(pbVar9 + (uint)CARRY1(bVar18,bVar5) + *(int *)((int)puVar6 + (int)pbVar31))
               >> 8);
      cVar22 = (char)(pbVar9 + (uint)CARRY1(bVar18,bVar5) + *(int *)((int)puVar6 + (int)pbVar31)) +
               'E';
      pcVar13 = (char *)CONCAT31(uVar15,cVar22);
      *pcVar13 = *pcVar13 + cVar22;
      cVar22 = cVar22 + *pcVar13;
      pcVar13 = (char *)CONCAT31(uVar15,cVar22);
      *pcVar13 = *pcVar13 + cVar22;
      puVar14 = (uint *)CONCAT31(uVar15,cVar22 + *pcVar13);
      *(char *)puVar14 = (char)*puVar14 + cVar22 + *pcVar13;
      pbVar9 = (byte *)((uint)puVar14 | *puVar14);
      bVar18 = *pbVar9;
      bVar5 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar5;
      piVar12 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar5 + CARRY1(bVar18,bVar5));
      pbVar9 = pbVar7;
code_r0x00405117:
      *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
      puVar32 = (uint *)((int)puVar32 - *puVar32);
      pbVar7 = pbVar9 + 4;
      out(*(undefined4 *)pbVar9,uVar26);
    }
    *pbVar31 = *pbVar31 + (char)puVar6;
    bVar38 = puVar32 < (uint *)*piVar12;
    puVar32 = (uint *)((int)puVar32 - *piVar12);
    bVar18 = (byte)((uint)puVar6 >> 8);
    *(byte *)((int)puVar37 + 0x39) = (*(byte *)((int)puVar37 + 0x39) - bVar18) - bVar38;
    *piVar12 = (int)(*piVar12 + (int)piVar12);
    uVar33 = *puVar32;
    *(int *)((int)puVar37 + 0x39) = *(int *)((int)puVar37 + 0x39) - (int)pcVar8;
    *piVar12 = (int)(*piVar12 + (int)piVar12);
    puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),
                              CONCAT11(bVar18 | (byte)uVar33 | (byte)*puVar32,(char)puVar6));
    *(char *)(piVar12 + 10) = (char)piVar12[10] + cVar17;
  } while( true );
code_r0x004052ee:
  *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
  bVar18 = (char)piVar12 + 0x28;
  pbVar7 = (byte *)CONCAT31((int3)((uint)piVar12 >> 8),bVar18);
  *pbVar7 = *pbVar7 ^ bVar18;
  *(byte *)puVar32 = (byte)*puVar32 + (char)((uint)pcVar20 >> 8);
  bVar18 = *pbVar31;
  *pbVar31 = *pbVar31 + (byte)pcVar20;
  piVar12 = (int *)(((uint)pbVar7 | 0x1496f09) + *puVar37 + (uint)CARRY1(bVar18,(byte)pcVar20));
  pbVar11 = pbVar9 + 4;
  out(*(undefined4 *)pbVar9,(short)pbVar31);
  pbVar28 = pbVar31 + -1;
  *piVar12 = *piVar12 + (int)piVar12;
  pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar28 >> 8),(byte)pbVar28 | (byte)*puVar32);
  cVar17 = (char)piVar12 + '\x13';
  pbVar7 = (byte *)CONCAT31((int3)((uint)piVar12 >> 8),cVar17);
  puVar6 = puVar32;
  pbVar9 = pbVar11;
  if ((POPCOUNT(cVar17) & 1U) != 0) {
    *pbVar31 = *pbVar31 - (char)((uint)pbVar28 >> 8);
    *pbVar7 = *pbVar7 + cVar17;
code_r0x00405396:
    bVar18 = *pbVar7;
    bVar5 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar5;
    *(byte **)pbVar11 = pbVar7 + (uint)CARRY1(bVar18,bVar5) + *(int *)pbVar11;
    out(*(undefined4 *)pbVar11,(short)pbVar31);
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    pcVar13 = (char *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                               CONCAT11((byte)((uint)pbVar7 >> 8) | pbVar11[4],bVar5));
    *(char **)((int)puVar37 + -1) = pcVar13 + *(int *)((int)puVar37 + -1);
    out(*(undefined4 *)(pbVar11 + 4),(short)pbVar31);
    *pcVar13 = *pcVar13 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar7 = *pbVar7 + (char)pbVar7;
  piVar12 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),(char)pbVar7 + 'o');
  puVar32 = (uint *)((int)puVar6 + -1);
  *piVar12 = *piVar12 + (int)piVar12;
  uVar15 = (undefined3)((uint)pbVar31 >> 8);
  piVar12 = (int *)((int)piVar12 + 0x1b7e);
  bVar23 = (byte)pbVar31 | *(byte *)puVar32 | *(byte *)puVar32;
  iRam04115f2c = iRam04115f2c + (int)piVar12;
  out(*(undefined4 *)pbVar9,(short)CONCAT31(uVar15,bVar23));
  *piVar12 = *piVar12 + (int)piVar12;
  bVar23 = bVar23 | (byte)piVar12;
  iVar29 = CONCAT31(uVar15,bVar23);
  pbVar7 = (byte *)((int)piVar12 - *piVar12);
  cVar17 = (char)pbVar7;
  *pcVar20 = *pcVar20 + cVar17;
  cVar22 = (char)pcVar20 - bVar23;
  *pbVar7 = *pbVar7 + cVar17;
  uVar26 = (undefined2)((uint)pcVar20 >> 0x10);
  bVar5 = (byte)((uint)pcVar20 >> 8) | *pbVar7;
  pcVar13 = pcVar13 + -1;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar18 = *(byte *)(CONCAT22(uVar26,CONCAT11(bVar5,cVar22)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar7;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar13;
  *pbVar7 = *pbVar7 + cVar17;
  bVar18 = bVar5 | bVar18 | *(byte *)puVar32;
  iVar21 = CONCAT22(uVar26,CONCAT11(bVar18,cVar22));
  pbVar28 = (byte *)((uint)(pbVar9 + 4) ^ *(uint *)(iVar29 + -0x43));
  iVar19 = *(int *)pbVar7;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  if (SCARRY4(iVar19,(int)pbVar7)) {
    *pbVar7 = *pbVar7 + cVar17;
  }
  pbVar9 = pbVar7 + 0x5674;
  puVar37 = (uint *)((int)puVar37 +
                    (-(uint)((byte *)0xffffa98b < pbVar7) - *(int *)(pbVar28 + -0x7f)));
  bVar5 = (byte)pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  uVar16 = (undefined3)((uint)pbVar9 >> 8);
  bVar25 = bVar5 + 0x2d;
  piVar12 = (int *)CONCAT31(uVar16,bVar25);
  *(uint *)(pbVar28 + (int)puVar37 * 8) =
       *(int *)(pbVar28 + (int)puVar37 * 8) + iVar29 + (uint)(0xd2 < bVar5);
  bVar5 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar25;
  if (!CARRY1(bVar5,bVar25)) {
    do {
      pbVar9 = (byte *)(iVar29 + 1);
      bVar5 = (byte)piVar12;
      *(byte *)piVar12 = (char)*piVar12 + bVar5;
      bVar23 = (byte)((uint)piVar12 >> 8);
      bVar25 = (byte)puVar32 | bVar23;
      puVar6 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),bVar25);
      out(*(undefined4 *)pbVar28,(short)pbVar9);
      *(byte *)piVar12 = (char)*piVar12 + bVar5;
      uVar26 = (undefined2)((uint)iVar21 >> 0x10);
      cVar17 = (char)iVar21;
      pbVar7 = (byte *)CONCAT22(uVar26,CONCAT11((byte)((uint)iVar21 >> 8) | *pbVar9,cVar17));
      bVar18 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar5;
      *(byte *)piVar12 = (char)*piVar12 + bVar5 + CARRY1(bVar18,bVar5);
      *pbVar9 = *pbVar9 + bVar5;
      *(byte *)puVar37 = (byte)*puVar37 + bVar23;
      *(int *)((int)piVar12 * 2) =
           *(int *)((int)piVar12 * 2) + CONCAT22(uVar26,CONCAT11(0x1c,cVar17));
      *(byte *)piVar12 = (char)*piVar12 + bVar5;
      cVar22 = (char)pbVar9;
      *(byte *)puVar6 = (byte)*puVar6 + cVar22;
      *(byte *)((int)piVar12 * 2) = *(byte *)((int)piVar12 * 2) ^ bVar5;
      *(byte *)piVar12 = (char)*piVar12 + bVar5;
      pbVar7 = pbVar28 + 8;
      out(*(undefined4 *)(pbVar28 + 4),(short)pbVar9);
      piVar12 = (int *)0xa0a0000;
      *pbVar9 = *pbVar9;
      bVar5 = cVar17 - cVar22;
      iVar21 = CONCAT22(uVar26,CONCAT11((byte)puVar37[0x14] | 0x1c | bRam0ca87216,bVar5));
      *pbVar9 = *pbVar9;
      bVar18 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar5;
      if (!CARRY1(bVar18,bVar5)) {
        piVar12 = (int *)0x1e7b7000;
        bVar18 = (byte)((uint)puVar32 >> 8) | *(byte *)(iVar29 + 3);
        puVar6 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(bVar18,bVar25));
        if (bVar18 != 0) {
          pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar22 + pbVar7[(int)puVar37 * 8]);
          piVar12 = (int *)0x6d7d7000;
          iVar21 = iVar21 + 1;
        }
      }
      *piVar12 = (int)(*piVar12 + (int)piVar12);
      iVar29 = CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 | pbVar7[(int)puVar37 * 8]);
      *(char *)piVar12 = (char)*piVar12;
      piVar12 = (int *)CONCAT31((int3)((uint)piVar12 >> 8),0xf9);
      *puVar37 = (uint)((int)piVar12 + *puVar37 + 1);
      pbVar28 = pbVar28 + 0xc;
      out(*(undefined4 *)pbVar7,(short)iVar29);
      puVar32 = puVar6;
    } while( true );
  }
  *piVar12 = (int)(*piVar12 + (int)piVar12);
  bVar25 = bVar25 | *(byte *)((int)piVar12 + 0x4000081);
  piVar12 = (int *)CONCAT31(uVar16,bVar25);
  if ('\0' < (char)bVar25) {
    *(byte *)piVar12 = (char)*piVar12 + bVar25;
    puVar14 = (uint *)CONCAT31(uVar16,bVar25 + 0x28);
    *puVar14 = *puVar14 ^ (uint)puVar14;
    *(byte *)puVar32 = *(byte *)puVar32 + bVar18;
    cVar17 = (bVar25 + 0x28) - bVar18;
    pcVar13 = (char *)CONCAT31(uVar16,cVar17);
    *pcVar13 = *pcVar13 + cVar17;
    pbVar31 = (byte *)CONCAT31(uVar15,bVar23 | *(byte *)puVar32);
    pcVar8 = (char *)CONCAT22((short)((uint)puVar32 >> 0x10),
                              CONCAT11((char)((uint)puVar32 >> 8) + *(byte *)((int)puVar6 + 0x7d),
                                       (char)puVar32));
    *pcVar13 = *pcVar13 + cVar17;
    pbVar7 = (byte *)CONCAT31(uVar16,cVar17 + 0x39U ^ *(byte *)CONCAT31(uVar16,cVar17 + 0x39U));
    *pcVar8 = *pcVar8 + bVar18;
    pbVar11 = pbVar28 + 4;
    out(*(undefined4 *)pbVar28,(short)pbVar31);
    goto code_r0x00405396;
  }
  pbVar9 = pbVar28 + 4;
  out(*(undefined4 *)pbVar28,(short)iVar29);
  pcVar20 = (char *)(iVar21 + -1);
  *piVar12 = (int)(*piVar12 + (int)piVar12);
  pbVar31 = (byte *)CONCAT31(uVar15,bVar23 | *(byte *)puVar32);
  goto code_r0x004052ee;
}


