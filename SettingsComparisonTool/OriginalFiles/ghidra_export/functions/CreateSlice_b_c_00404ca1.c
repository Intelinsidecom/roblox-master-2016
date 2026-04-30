/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404ca1
 * Raw Name    : <CreateSlice>b__c
 * Demangled   : <CreateSlice>b__c
 * Prototype   : undefined4 <CreateSlice>b__c(uint * o, uint * param_2, char * param_3, uint param_4, undefined4 param_5, byte * param_6, uint * param_7, undefined4 param_8, char * param_9)
 * Local Vars  : param_7, uVar33, param_8, puVar32, cVar35, param_9, bVar34, unaff_EBP, cVar36, unaff_EDI, unaff_ESI, puVar38, puVar37, in_DS, in_ES, bVar40, uVar39, unaff_retaddr, in_AF, o, uStack_3c, uStack_3a, uStack_3b, uVar1, uStack_38, uVar3, uVar2, cVar5, uVar4, in_EAX, bVar6, pcVar8, pbVar7, pcVar10, pbVar9, pbVar12, puVar11, pcVar14, piVar13, uVar16, uVar15, iVar18, bVar17, iVar20, pcVar19, cVar22, bVar21, bVar24, bVar23, uVar26, uVar25, iVar28, param_2, pbVar27, cVar30, param_3, cVar29, param_4, param_5, pbVar31, param_6, unaff_EBX
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
<CreateSlice>b__c(uint *o,uint *param_2,char *param_3,uint param_4,undefined4 param_5,byte *param_6,
                 uint *param_7,undefined4 param_8,char *param_9)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  char cVar5;
  byte bVar6;
  uint *in_EAX;
  undefined3 uVar15;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  uint *puVar11;
  undefined3 uVar16;
  byte *pbVar12;
  int *piVar13;
  char *pcVar14;
  byte bVar17;
  byte bVar21;
  int iVar18;
  char cVar22;
  byte bVar23;
  byte bVar24;
  undefined2 uVar25;
  char *pcVar19;
  int iVar20;
  undefined2 uVar26;
  byte *pbVar27;
  int iVar28;
  char cVar29;
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
  int unaff_EDI;
  uint *puVar37;
  uint *puVar38;
  ushort in_ES;
  ushort in_DS;
  ushort uVar39;
  bool bVar40;
  byte in_AF;
  uint *unaff_retaddr;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  ushort uStack_38;
  
                    /* .NET CLR Managed Code */
  puVar37 = (uint *)(unaff_EDI + *(int *)(unaff_EBX + 0x6f));
  do {
    *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
    uVar15 = (undefined3)((uint)in_EAX >> 8);
    cVar5 = (char)in_EAX + '\x02';
    pcVar14 = (char *)CONCAT31(uVar15,cVar5);
    if ((POPCOUNT(cVar5) & 1U) == 0) {
      *pcVar14 = *pcVar14 + cVar5;
      *param_9 = *param_9 + (byte)param_9;
      puVar11 = (uint *)CONCAT22((short)((uint)param_8 >> 0x10),
                                 CONCAT11((byte)((uint)param_8 >> 8) | (byte)*param_7,(char)param_8)
                                );
      *param_6 = *param_6 + (char)param_6;
      *(byte *)((int)param_9 * 2) = *(byte *)((int)param_9 * 2) ^ (byte)param_9;
      uVar3 = *(undefined6 *)param_9;
      in_DS = (ushort)((uint6)uVar3 >> 0x20);
      pbVar7 = (byte *)uVar3;
      bVar6 = (byte)uVar3;
      *pbVar7 = *pbVar7 + bVar6;
      bVar17 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar6;
      puVar37 = (uint *)((int)puVar11 + 0x11673);
      uVar1 = *puVar37;
      uVar33 = *puVar37;
      *puVar37 = uVar33 + (int)param_7 + (uint)CARRY1(bVar17,bVar6);
      param_9 = (char *)CONCAT22(param_9._2_2_,in_ES);
      cVar22 = (char)(pbVar7 + (uint)(CARRY4(uVar1,(uint)param_7) ||
                                     CARRY4(uVar33 + (int)param_7,(uint)CARRY1(bVar17,bVar6))) +
                               *(int *)((int)puVar11 + (int)param_7));
      cVar5 = cVar22 + '\x04';
      puVar38 = (uint *)CONCAT31((int3)((uint)(pbVar7 + (uint)(CARRY4(uVar1,(uint)param_7) ||
                                                              CARRY4(uVar33 + (int)param_7,
                                                                     (uint)CARRY1(bVar17,bVar6))) +
                                                        *(int *)((int)puVar11 + (int)param_7)) >> 8)
                                 ,cVar5);
      param_2 = param_7;
      unaff_EBX = param_6;
      unaff_EBP = param_4;
      unaff_ESI = param_3;
      puVar37 = unaff_retaddr;
      if (SCARRY1(cVar22,'\x04') != cVar5 < '\0') goto code_r0x00404cce;
    }
    else {
      cVar22 = (char)o;
      *(byte *)param_2 = (byte)*param_2 + cVar22;
      bVar17 = cVar5 - *pcVar14;
      uVar33 = *o;
      *(byte *)o = (byte)*o + bVar17;
      cVar5 = bVar17 - CARRY1((byte)uVar33,bVar17);
      *(byte *)param_2 = (byte)*param_2 + cVar5;
      cVar30 = (char)((uint)o >> 8);
      *(byte *)(puVar37 + 0x673b40) = (byte)puVar37[0x673b40] + cVar30;
      puVar38 = (uint *)CONCAT31(uVar15,cVar5);
      *(byte *)puVar38 = (byte)*puVar38 + cVar5;
      *(byte *)param_2 = (byte)*param_2 + cVar5;
      *(char **)(unaff_EBX + 0x58) = unaff_ESI + *(int *)(unaff_EBX + 0x58);
      puVar11 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)o >> 0x10),
                                                 CONCAT11(cVar30 + (char)((uint)in_EAX >> 8),cVar22)
                                                ) >> 8),cVar22 + *(char *)((int)puVar38 * 2));
      *(byte *)puVar38 = (byte)*puVar38 + cVar5;
      *unaff_ESI = *unaff_ESI + (char)unaff_EBX;
    }
    bVar6 = (byte)((uint)puVar11 >> 8);
    uVar33 = *puVar38;
    bVar17 = (byte)puVar11;
    in_EAX = (uint *)((int)puVar38 + (uint)CARRY1(bVar6,(byte)*puVar38) + *puVar38);
    *(byte *)param_2 = (byte)*param_2 + bVar17;
    cVar5 = bVar17 - *(byte *)((int)param_2 + 3);
    o = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar11 >> 0x10),
                                         CONCAT11(bVar6 + (byte)uVar33,bVar17)) >> 8),cVar5);
  } while ((POPCOUNT(cVar5) & 1U) == 0);
  param_7 = param_2;
  if (bVar17 < *(byte *)((int)param_2 + 3)) {
code_r0x00404d15:
    uVar33 = *in_EAX;
    bVar17 = (byte)in_EAX;
    *(byte *)in_EAX = (byte)*in_EAX + bVar17;
    pcVar14 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_7);
    in_AF = 9 < (bVar17 & 0xf) | in_AF;
    bVar6 = bVar17 + in_AF * '\x06';
    in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),
                              bVar6 + (0x90 < (bVar6 & 0xf0) |
                                      CARRY1((byte)uVar33,bVar17) | in_AF * (0xf9 < bVar6)) * '`');
  }
  else {
    *in_EAX = (uint)(*in_EAX + (int)in_EAX);
    param_7 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *unaff_EBX);
    puVar38 = in_EAX + 0x230e;
    puVar11 = o;
code_r0x00404cce:
    *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
    pcVar14 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_7);
    uVar33 = *puVar11;
    uVar1 = *param_7;
    bVar17 = (byte)puVar11;
    *(byte *)param_7 = (byte)*param_7 + bVar17;
    iVar18 = (CONCAT31((int3)((uint)puVar38 >> 8),(char)puVar38 + '\x03') & uVar33) + iRam00008c38;
    *(byte *)puVar11 = (byte)*puVar11 + (char)param_7;
    pcVar8 = (char *)(iVar18 + (uint)CARRY1((byte)uVar1,bVar17) + 0x1246f);
    uVar15 = (undefined3)((uint)puVar11 >> 8);
    bVar17 = bVar17 | (byte)*param_7;
    o = (uint *)CONCAT31(uVar15,bVar17);
    cRam090a0001 = cRam090a0001 - (char)((uint)pcVar8 >> 8);
    in_EAX = (uint *)(CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + *pcVar8) + 0x1fbeef2);
    uVar33 = *in_EAX;
    *in_EAX = (uint)(*in_EAX + (int)in_EAX);
    if (CARRY4(uVar33,(uint)in_EAX)) {
      *in_EAX = (uint)(*in_EAX + (int)in_EAX);
      pcVar8 = (char *)CONCAT31(uVar15,bVar17 | bRam00282809);
      cVar5 = (char)((uint)puVar11 >> 8);
      *unaff_EBX = *unaff_EBX + cVar5;
      *pcVar8 = *pcVar8 - cVar5;
      *(byte *)in_EAX = *(byte *)in_EAX + (char)in_EAX;
      iVar18 = (int)pcVar8 - *(int *)unaff_EBX;
      unaff_ESI = unaff_ESI + 8;
      out(*(undefined4 *)pcVar14,(short)param_7);
      *in_EAX = (uint)(*in_EAX + (int)in_EAX);
      o = (uint *)CONCAT22((short)((uint)iVar18 >> 0x10),
                           CONCAT11((byte)((uint)iVar18 >> 8) | bRambf73070b,(char)iVar18));
      goto code_r0x00404d15;
    }
  }
  *in_EAX = (uint)(*in_EAX + (int)in_EAX);
  bVar17 = (byte)in_EAX | (byte)*puVar37;
  pbVar7 = (byte *)(pcVar14 + 4);
  uVar26 = SUB42(param_7,0);
  out(*(undefined4 *)pcVar14,uVar26);
  *(byte *)o = (byte)*o - bVar17;
  uVar33 = *param_7;
  bVar6 = (byte)o;
  *(byte *)param_7 = (byte)*param_7 + bVar6;
  iVar18 = CONCAT31((int3)((uint)in_EAX >> 8),bVar17) + *(int *)pbVar7 +
           (uint)CARRY1((byte)uVar33,bVar6);
  pcVar8 = (char *)(unaff_EBP - *param_7);
  uVar15 = (undefined3)((uint)iVar18 >> 8);
  cVar5 = (char)iVar18 + *pbVar7 + (unaff_EBP < *param_7);
  puVar11 = (uint *)CONCAT31(uVar15,cVar5);
  bVar17 = (byte)((uint)o >> 8);
  *(byte *)o = (byte)*o - bVar17;
  *puVar11 = (uint)(*puVar11 + (int)puVar11);
  bVar6 = bVar6 | *(byte *)((int)param_7 + (int)puVar11);
  uVar25 = (undefined2)((uint)o >> 0x10);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(byte *)puVar11 = (byte)*puVar11 + cVar5;
    pcVar19 = (char *)CONCAT31(uVar15,cVar5 + '\x12');
    *pcVar19 = *pcVar19 + bVar17;
    puVar11 = (uint *)CONCAT31(uVar15,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)o >> 8),bVar6));
    uVar33 = *param_7;
    *(byte *)param_7 = (byte)*param_7 + bVar6;
    if (CARRY1((byte)uVar33,bVar6)) {
      *unaff_EBX = *unaff_EBX - (char)param_7;
      goto code_r0x00404da8;
    }
    pbVar9 = (byte *)((uint)puVar11 | *puVar11);
    out(*(undefined4 *)pbVar7,uVar26);
    *pbVar9 = *pbVar9 + (char)pbVar9;
    bVar21 = *pbVar9;
    piVar13 = (int *)CONCAT22(uVar25,CONCAT11(bVar17 | bVar21,bVar6));
    iVar18 = (int)pbVar9 - *piVar13;
    *(byte *)param_7 = (byte)*param_7 + bVar6;
    pcVar19 = pcVar14 + 0xc;
    out(*(undefined4 *)(pcVar14 + 8),uVar26);
    uRam12060000 = (undefined1)iVar18;
    *(char *)((int)piVar13 + iVar18) = *(char *)((int)piVar13 + iVar18) - (bVar17 | bVar21);
    *(byte *)param_7 = (byte)*param_7 + bVar6;
    pbVar7 = (byte *)(iVar18 + -0x120edecd);
    *pcVar19 = *pcVar19 + '\x01';
    bVar17 = *pbVar7;
    bVar21 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar21;
    pcVar8 = pcVar8 + ((-1 - *(int *)((int)puVar37 + 0x42)) - (uint)CARRY1(bVar17,bVar21));
    *pbVar7 = *pbVar7 + bVar21;
    bVar17 = (byte)unaff_EBX | (byte)((uint)pbVar7 >> 8);
    pbRam0000416f = pbRam0000416f + (int)pbVar7;
    uVar33 = *param_7;
    pcVar10 = (char *)(((uint)pbVar7 | 0x11) + 0x511072c);
    pbVar7 = (byte *)(pcVar14 + 0x10);
    out(*(undefined4 *)pcVar19,uVar26);
    param_7 = (uint *)((int)param_7 + 1);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    bVar21 = (byte)((uint)pcVar10 >> 8);
    unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                          (byte)uVar33,bVar17)) >> 8),
                                 bVar17 | bVar21);
    uVar15 = (undefined3)((uint)pcVar10 >> 8);
    bVar17 = (char)pcVar10 - *pcVar10;
    pcVar14 = (char *)CONCAT31(uVar15,bVar17);
    *pcVar14 = *pcVar14 + bVar17;
    *(int *)((int)pcVar14 * 2) = (int)(unaff_EBX + *(int *)((int)pcVar14 * 2));
    *(byte *)param_7 = *(byte *)param_7 + bVar17;
    *pcVar8 = *pcVar8 + bVar21;
    in_AF = 9 < (bVar17 & 0xf) | in_AF;
    uVar33 = CONCAT31(uVar15,bVar17 + in_AF * '\x06') & 0xffffff0f;
    bVar17 = (byte)uVar33;
    pbVar9 = (byte *)CONCAT22((short)(uVar33 >> 0x10),CONCAT11(bVar21 + in_AF,bVar17));
    *pbVar7 = *pbVar7 + bVar6;
    *pbVar9 = *pbVar9 + bVar17;
    *pbVar9 = *pbVar9 + bVar17;
    bVar40 = CARRY1(bVar17,*pbVar9);
    puVar11 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar17 + *pbVar9);
  }
  else {
code_r0x00404da8:
    *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
    bVar40 = false;
    piVar13 = (int *)CONCAT22(uVar25,CONCAT11(bVar17 | (byte)*param_7,bVar6));
  }
  do {
    puVar32 = param_7;
    *puVar11 = (*puVar11 - (int)puVar11) - (uint)bVar40;
    bVar17 = (byte)((uint)piVar13 >> 8);
    uVar25 = (undefined2)((uint)piVar13 >> 0x10);
    bVar6 = (byte)piVar13;
    bVar21 = bVar17 + (byte)iRam00000c00;
    pbVar9 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar17,(byte)iRam00000c00));
    *(byte *)puVar32 = (byte)*puVar32 + bVar6;
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *pbVar7);
    bVar17 = *pbVar9;
    puVar11 = (uint *)(pbVar9 + (uint)CARRY1(bVar21,*pbVar9) + *(int *)pbVar9);
    *(byte *)puVar32 = (byte)*puVar32 + bVar6;
    cVar22 = ((bVar21 + bVar17) - (byte)*puVar32) + (byte)*puVar11;
    pcVar14 = (char *)CONCAT22(uVar25,CONCAT11(cVar22,bVar6));
    puVar38 = puVar37 + 1;
    uVar33 = in((short)puVar32);
    *puVar37 = uVar33;
    cVar5 = (char)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + cVar5;
    uVar15 = (undefined3)((uint)puVar32 >> 8);
    bVar21 = (byte)puVar32 | *pbVar7;
    pcVar19 = (char *)CONCAT31(uVar15,bVar21);
    *pcVar14 = *pcVar14 + '\x01';
    bVar17 = (cVar22 - *pcVar19) + (byte)*puVar11;
    pcVar14 = (char *)CONCAT22(uVar25,CONCAT11(bVar17,bVar6));
    puVar37 = puVar37 + 2;
    uVar33 = in((short)pcVar19);
    *puVar38 = uVar33;
    *(byte *)puVar11 = (byte)*puVar11 + cVar5;
    bVar21 = bVar21 | *pbVar7;
    param_7 = (uint *)CONCAT31(uVar15,bVar21);
    *pcVar14 = *pcVar14 + '\x01';
    bVar40 = bVar6 < *(byte *)((int)param_7 + 2);
    cVar22 = bVar6 - *(byte *)((int)param_7 + 2);
    piVar13 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar22);
  } while ((POPCOUNT(cVar22) & 1U) != 0);
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  bVar6 = cVar5 + 0x7b;
  pbVar12 = (byte *)CONCAT31((int3)((uint)puVar11 >> 8),bVar6);
  unaff_EBX[(int)pbVar12] = unaff_EBX[(int)pbVar12] + bVar6;
  pbVar9 = pbVar7 + 4;
  uVar26 = SUB42(param_7,0);
  out(*(undefined4 *)pbVar7,uVar26);
  pbVar31 = unaff_EBX + -1;
  *pbVar12 = *pbVar12 + bVar6;
  bVar17 = bVar17 | (byte)*param_7;
  piVar13 = (int *)CONCAT22(uVar25,CONCAT11(bVar17,cVar22));
  *pbVar12 = *pbVar12 + bVar6;
  *pbVar31 = *pbVar31 + bVar21;
  *pbVar31 = *pbVar31 ^ bVar6;
  *(byte *)param_7 = (byte)*param_7 + bVar17;
  *pbVar12 = *pbVar12 + bVar6;
  do {
    bVar23 = (byte)((uint)piVar13 >> 8);
    *(byte *)puVar37 = (byte)*puVar37 + bVar23;
    bVar17 = *pbVar12;
    bVar6 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar6;
    *(byte **)(unaff_EBX + 0x17) = pbVar9 + (uint)CARRY1(bVar17,bVar6) + *(int *)(unaff_EBX + 0x17);
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    uVar16 = (undefined3)((uint)pbVar12 >> 8);
    bVar6 = bVar6 | *pbVar9;
    puVar37 = (uint *)((int)puVar37 + *(int *)(pcVar8 + -0x34));
    *(char *)CONCAT31(uVar16,bVar6) = *(char *)CONCAT31(uVar16,bVar6) + bVar6;
    bVar17 = bVar6 + 2;
    cVar5 = (char)((uint)puVar32 >> 8);
    bVar24 = (byte)piVar13;
    if ((POPCOUNT(bVar17) & 1U) != 0) {
      pbVar12 = (byte *)CONCAT31(uVar16,bVar6 + 0x15 + (0xfd < bVar6));
      if (0xec < bVar17 || CARRY1(bVar6 + 0x15,0xfd < bVar6)) {
        *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      }
code_r0x00404e60:
      pcVar8 = pcVar8 + -*param_7;
      bVar17 = *pbVar12;
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      pbVar9 = pbVar9 + (-(uint)CARRY1(bVar17,(byte)pbVar12) - *(int *)pbVar12);
      pbVar12 = pbVar12 + *(int *)pbVar12;
      param_4 = (uint)in_DS;
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      *(char *)piVar13 = (char)*piVar13 + cVar5;
      bVar17 = *pbVar12;
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      *(byte **)(pbVar31 + (int)param_7) =
           (byte *)((int)param_7 +
                   (uint)CARRY1(bVar17,(byte)pbVar12) + *(int *)(pbVar31 + (int)param_7));
      pbVar12 = pbVar12 + 0x73061314;
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      uVar16 = (undefined3)((uint)piVar13 >> 8);
      bVar24 = bVar24 | (byte)*param_7;
      pcVar19 = (char *)CONCAT31(uVar16,bVar24);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      cVar5 = (char)pbVar12 + 'o';
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar5);
      *pcVar14 = *pcVar14 + cVar5;
      out(*(undefined4 *)pbVar9,uVar26);
      uVar33 = *param_7;
      *(byte *)param_7 = (byte)*param_7 + bVar24;
      pcVar14 = pcVar14 + (uint)CARRY1((byte)uVar33,bVar24) + *puVar37;
      *pcVar14 = *pcVar14 + (char)pcVar14;
      *pcVar19 = *pcVar19 + bVar21;
      pbVar12 = pbVar9 + 8;
      out(*(undefined4 *)(pbVar9 + 4),uVar26);
      *(byte *)param_7 = (byte)*param_7 + bVar24;
      piVar13 = (int *)((uint)pcVar14 | *puVar37);
      pcVar19[0x390a0000] = pcVar19[0x390a0000] - bVar23;
      pbVar9 = (byte *)0x7000000;
      *(byte *)puVar37 = (byte)*puVar37 - bVar23;
      *piVar13 = *piVar13 + (int)piVar13;
      puVar11 = (uint *)CONCAT31(uVar16,bVar24 | *(byte *)((int)piVar13 + (int)pcVar19));
      *(char *)((int)piVar13 * 2) = *(char *)((int)piVar13 * 2) - bVar23;
      cRam07000000 = cRam07000000 + bVar23;
      piVar13 = (int *)((uint)piVar13 | 0x777b02);
      pbVar7 = (byte *)((int)puVar37 + (int)pcVar8 * 2);
      bVar40 = SCARRY1(*pbVar7,(char)piVar13);
      *pbVar7 = *pbVar7 + (char)piVar13;
      bVar17 = *pbVar7;
      *(char *)piVar13 = (char)*piVar13;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar16,bVar17) = *(char *)CONCAT31(uVar16,bVar17) + bVar17;
    bVar6 = bVar6 + 0x71;
    pbVar12 = (byte *)CONCAT31(uVar16,bVar6);
    *pbVar12 = *pbVar12;
    *pbVar9 = *pbVar9 + 1;
    *piVar13 = (*piVar13 - (int)pbVar12) - (uint)(0x90 < bVar17);
    bVar17 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar6;
    if (!CARRY1(bVar17,bVar6)) goto code_r0x00404e60;
    *pbVar12 = *pbVar12 + bVar6;
    uVar25 = (undefined2)((uint)piVar13 >> 0x10);
    bVar23 = bVar23 | *pbVar12;
    pbVar12 = pbVar12 + -*(int *)pbVar12;
    *pbVar31 = *pbVar31 + bVar23;
    cVar22 = bVar24 - *(byte *)((int)param_7 + 2);
    piVar13 = (int *)CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar23,bVar24)) >> 8),cVar22);
  } while ((POPCOUNT(cVar22) & 1U) != 0);
  cVar30 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cVar30;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  pcVar14 = (char *)CONCAT31(uVar16,cVar30 + '{');
  out(*(undefined4 *)pbVar9,uVar26);
  *pcVar14 = *pcVar14 + cVar30 + '{';
  bVar6 = cVar30 + 0x7e;
  pbVar31 = (byte *)CONCAT31(uVar16,bVar6);
  pbVar12 = pbVar7 + 0xc;
  out(*(undefined4 *)(pbVar7 + 8),uVar26);
  pbVar9 = unaff_EBX + -2;
  *pbVar31 = *pbVar31 + bVar6;
  bVar23 = bVar23 | (byte)*param_7;
  puVar11 = (uint *)CONCAT22(uVar25,CONCAT11(bVar23,cVar22));
  *pbVar31 = *pbVar31 + bVar6;
  *pbVar9 = *pbVar9 + bVar21;
  *pbVar9 = *pbVar9 ^ bVar6;
  *(byte *)param_7 = (byte)*param_7 + bVar23;
  *pbVar31 = *pbVar31 + bVar6;
  *pbVar31 = *pbVar31 + cVar5;
  bVar17 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar6;
  *(byte **)(unaff_EBX + 0x18) = pbVar12 + (uint)CARRY1(bVar17,bVar6) + *(int *)(unaff_EBX + 0x18);
  *(byte **)pbVar31 = pbVar31 + *(int *)pbVar31;
  bVar6 = bVar6 | *pbVar12;
  puVar37 = (uint *)((int)puVar37 + *(int *)(pcVar8 + -0x33));
  *(char *)CONCAT31(uVar16,bVar6) = *(char *)CONCAT31(uVar16,bVar6) + bVar6;
  bVar40 = SCARRY1(bVar6,'\x02');
  bVar17 = bVar6 + 2;
  piVar13 = (int *)CONCAT31(uVar16,bVar17);
  if ((POPCOUNT(bVar17) & 1U) == 0) {
    *(byte *)piVar13 = (char)*piVar13 + bVar17;
    return CONCAT31(uVar16,bVar6 + 0x71);
  }
code_r0x00404ebf:
  bVar6 = (byte)piVar13;
  uVar16 = (undefined3)((uint)piVar13 >> 8);
  if (bVar17 != 0 && bVar40 == (char)bVar17 < '\0') {
    *(byte *)piVar13 = (char)*piVar13 + bVar6;
    *(byte **)(pbVar12 + (int)puVar37 * 8) =
         (byte *)((int)param_7 + (uint)(0xd2 < bVar6) + *(int *)(pbVar12 + (int)puVar37 * 8));
    return CONCAT31(uVar16,bVar6 + 0x2d);
  }
  *piVar13 = (int)(*piVar13 + (int)piVar13);
  bVar17 = *pbVar9;
  *(char **)pbVar12 = (char *)(*(int *)pbVar12 + (int)piVar13);
  bVar24 = (byte)((uint)puVar11 >> 8);
  *(byte *)piVar13 = (char)*piVar13 - bVar24;
  *(byte *)piVar13 = (char)*piVar13 + bVar6;
  pbVar31 = (byte *)(CONCAT31(uVar15,bVar21 | bVar17) - *(int *)pbVar9);
  puVar38 = (uint *)CONCAT31(uVar16,bVar6 + 6);
  *(uint *)(pbVar9 + (int)pbVar12 * 2) =
       (int)puVar38 + (uint)(0xf9 < bVar6) + *(int *)(pbVar9 + (int)pbVar12 * 2);
  *(byte *)puVar11 = (byte)*puVar11 ^ bVar6 + 6;
  bVar6 = (byte)puVar11;
  *pbVar31 = *pbVar31 + bVar6;
  pbVar7 = pbVar12 + 4;
  uVar25 = SUB42(pbVar31,0);
  out(*(undefined4 *)pbVar12,uVar25);
  *puVar11 = *puVar11 ^ (uint)puVar38;
  *pbVar31 = *pbVar31 + bVar6;
  puVar32 = (uint *)(pbVar9 + -*(int *)pbVar9);
  *(uint *)((int)puVar37 + 0x31) = *(uint *)((int)puVar37 + 0x31) | (uint)pcVar8;
  *puVar38 = *puVar38 + (int)puVar38;
  puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),CONCAT11(bVar24 | (byte)*puVar32,bVar6))
  ;
  *(byte **)(pbVar31 + 0x6e) = pbVar7 + *(int *)(pbVar31 + 0x6e);
  piVar13 = (int *)((uint)puVar38 | *puVar38);
  bVar21 = (byte)puVar32;
  *(byte *)puVar37 = (byte)*puVar37 - bVar21;
  bVar17 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar6;
  if (CARRY1(bVar17,bVar6)) {
    *piVar13 = (int)(*piVar13 + (int)piVar13);
    bVar17 = pbVar31[0x11];
    uVar26 = (undefined2)((uint)puVar32 >> 0x10);
    out(*(undefined4 *)pbVar7,uVar25);
    puVar11 = (uint *)((int)puVar11 + 1);
    *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
    bVar34 = (byte)((uint)puVar32 >> 8) | bVar17 | *pbVar31;
    pcVar14 = (char *)((int)piVar13 + -0x21000001);
    bVar17 = (byte)pcVar14 | 0x11;
    uVar15 = (undefined3)((uint)pcVar14 >> 8);
    cVar5 = bVar17 - 7;
    pcVar19 = (char *)CONCAT31(uVar15,cVar5);
    *puVar37 = (uint)(pcVar19 + (uint)(bVar17 < 7) + *puVar37);
    pbVar7 = pbVar12 + 0xc;
    out(*(undefined4 *)(pbVar12 + 8),uVar25);
    pbVar31 = pbVar31 + 1;
    *pcVar19 = *pcVar19 + cVar5;
    bVar24 = (byte)((uint)pcVar14 >> 8);
    bVar23 = bVar21 | bVar24;
    bVar6 = cVar5 - *pcVar19;
    bVar17 = *(byte *)puVar11;
    *(byte *)puVar11 = *(byte *)puVar11 + bVar6;
    *(char *)CONCAT31(uVar15,bVar6) = *(char *)CONCAT31(uVar15,bVar6) + bVar6 + CARRY1(bVar17,bVar6)
    ;
    *pbVar31 = *pbVar31 + bVar6;
    *pbVar7 = *pbVar7 + bVar23;
    bVar17 = (byte)((uint)pbVar31 >> 8);
    *(byte *)puVar11 = *(byte *)puVar11 + bVar6 + CARRY1((byte)pbVar31,bVar17);
    piVar13 = (int *)CONCAT31(uVar15,bVar6);
    *(byte *)piVar13 = (char)*piVar13 + bVar6;
    pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                               CONCAT11(bVar17 + bVar24,(byte)pbVar31 + bVar17));
    puVar32 = (uint *)CONCAT22(uVar26,CONCAT11(bVar34 + *(char *)(CONCAT31((int3)(CONCAT22(uVar26,
                                                  CONCAT11(bVar34,bVar21)) >> 8),bVar23) + 0x76),
                                               bVar23));
code_r0x00404fa4:
    *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
    pcVar14 = (char *)(CONCAT31((int3)((uint)piVar13 >> 8),(char)piVar13 + '(') ^ *puVar11);
    cVar30 = (char)puVar11;
    *pbVar31 = *pbVar31 + cVar30;
    uVar25 = (undefined2)((uint)puVar32 >> 0x10);
    cVar29 = (char)puVar32;
    cVar35 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x75);
    *pcVar14 = *pcVar14 + (char)pcVar14;
    cVar5 = (char)pcVar14 + 'o';
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar5);
    *pcVar14 = *pcVar14 + cVar5;
    cVar36 = (char)((uint)puVar11 >> 8);
    *pcVar8 = *pcVar8 - cVar36;
    pbVar31[1] = pbVar31[1] + cVar30;
    pcVar14 = pcVar14 + -0x757b021b;
    cVar5 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar5;
    uVar15 = (undefined3)((uint)pcVar14 >> 8);
    cVar22 = cVar5 + 'o';
    pcVar14 = (char *)CONCAT31(uVar15,cVar22);
    pbVar12 = pbVar31 + 2;
    *pcVar14 = *pcVar14 + cVar22;
    iVar18 = CONCAT22(uVar25,CONCAT11(cVar35 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar35,cVar29)) +
                                                        0x76),cVar29));
    *pcVar14 = *pcVar14 + cVar22;
    pcVar14 = (char *)CONCAT31(uVar15,cVar5 + -0x22);
    puVar38 = (uint *)((int)puVar37 + 1);
    *(byte *)puVar37 = *pbVar7;
    *pcVar14 = *pcVar14 + cVar5 + -0x22;
    *(byte *)((int)puVar11 + (int)pcVar14) =
         *(byte *)((int)puVar11 + (int)pcVar14) - (char)((uint)pbVar12 >> 8);
    *pbVar12 = *pbVar12 + cVar30;
    bVar6 = cVar36 - pbVar31[4];
    pbVar9 = pbVar7 + 5;
    out(*(undefined4 *)(pbVar7 + 1),(short)pbVar12);
    puVar37 = (uint *)((uint)(pcVar14 + *(int *)(pcVar14 + iVar18)) ^ 0x280a0001);
    *(byte *)puVar37 = (byte)*puVar37 << 1 | (char)(byte)*puVar37 < '\0';
    *pbVar9 = *pbVar9 + (char)puVar37;
    pbVar9 = pbVar9 + *(int *)(pbVar31 + -0x5c);
    pbVar7 = (byte *)((uint)puVar37 | *puVar37);
    *pbVar9 = *pbVar9 + (char)pbVar7;
    puVar32 = (uint *)CONCAT31((int3)((uint)iVar18 >> 8),cVar29 - (char)pbVar12);
    bVar17 = *pbVar7;
    puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),CONCAT11(bVar6 + *pbVar7,cVar30));
    iVar18 = *(int *)pbVar7;
    *pbVar12 = *pbVar12 + cVar30;
    cVar5 = (char)(pbVar7 + (uint)CARRY1(bVar6,bVar17) + iVar18) + 'r';
    puVar37 = (uint *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar6,bVar17) + iVar18) >> 8),
                               cVar5);
    pbVar31 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(10,(char)pbVar12));
    *(char *)(puVar37 + 10) = (char)puVar37[10] + '\n';
    *pbVar9 = *pbVar9 + cVar5;
    pbVar7 = pbVar9 + *(int *)(pbVar31 + -0x5e);
    uVar33 = *puVar37;
    cVar5 = (char)((uint)puVar37 | uVar33);
    *pbVar7 = *pbVar7 + cVar5;
    uVar15 = (undefined3)(((uint)puVar37 | uVar33) >> 8);
    cVar22 = cVar5 + (byte)*puVar32;
    puVar37 = (uint *)CONCAT31(uVar15,cVar22);
    if (SCARRY1(cVar5,(byte)*puVar32) == cVar22 < '\0') goto code_r0x00405090;
    *(byte *)puVar37 = (byte)*puVar37 + cVar22;
    piVar13 = (int *)CONCAT31(uVar15,cVar22 + '\x02');
    puVar37 = puVar38;
  }
  else {
    out(2,(char)piVar13);
    param_4._0_2_ = in_ES;
    if ((POPCOUNT(*pbVar31) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar15 = (undefined3)((uint)piVar13 >> 8);
  cVar5 = (char)piVar13 + '}';
  pbVar9 = (byte *)CONCAT31(uVar15,cVar5);
  pbVar31[(int)pbVar9] = pbVar31[(int)pbVar9] + cVar5;
  pbVar31[0x280a0000] = pbVar31[0x280a0000] - (char)((uint)piVar13 >> 8);
  bVar17 = (byte)puVar11 & 7;
  *pbVar9 = *pbVar9 << bVar17 | *pbVar9 >> 8 - bVar17;
  *pbVar7 = *pbVar7 + cVar5;
  cVar30 = (char)puVar32 - *pbVar7;
  uVar25 = (undefined2)((uint)puVar32 >> 0x10);
  cVar36 = (char)((uint)puVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar32 >> 8),cVar30) + 0x7c);
  pcVar14 = (char *)CONCAT22(uVar25,CONCAT11(cVar36,cVar30));
  *pbVar9 = *pbVar9 + cVar5;
  bVar6 = (char)piVar13 + 0xa7U & *pbVar31;
  puVar38 = (uint *)((int)puVar37 + *(int *)(pcVar8 + 0x7c));
  *(char *)CONCAT31(uVar15,bVar6) = *(char *)CONCAT31(uVar15,bVar6) + bVar6;
  bVar6 = bVar6 + 0x2a;
  pbVar9 = (byte *)CONCAT31(uVar15,bVar6);
  *pbVar9 = *pbVar9 + bVar6;
  *pcVar14 = *pcVar14 + cVar30;
  *pbVar31 = *pbVar31 ^ bVar6;
  *pcVar14 = *pcVar14 + bVar6;
  bVar17 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar6;
  cVar5 = (bVar6 - *pbVar9) - CARRY1(bVar17,bVar6);
  *(byte *)puVar11 = (byte)*puVar11 + (byte)pbVar31;
  cVar36 = cVar36 + pcVar14[0x7b];
  *(char *)CONCAT31(uVar15,cVar5) = *(char *)CONCAT31(uVar15,cVar5) + cVar5;
  pcVar14 = (char *)CONCAT31(uVar15,cVar5 + 'o');
  *pcVar14 = *pcVar14 + cVar5 + 'o';
  pcVar14 = pcVar14 + 0x2ed7fde6;
  cVar22 = (char)pcVar14;
  *pcVar14 = *pcVar14 + cVar22;
  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar36,cVar30)) + 0x7b);
  *pcVar14 = *pcVar14 + cVar22;
  piVar13 = (int *)(CONCAT31((int3)((uint)pcVar14 >> 8),cVar22 + 'o') + 0x6f060000);
  *piVar13 = *piVar13 + (int)piVar13;
  uVar16 = (undefined3)((uint)pbVar31 >> 8);
  bVar6 = (byte)pbVar31 | *pbVar7;
  pbVar27 = (byte *)CONCAT31(uVar16,bVar6);
  uVar33 = CONCAT22(uVar25,CONCAT11(cVar36 + cVar5,cVar30)) | (uint)pbVar7;
  uVar15 = (undefined3)((uint)piVar13 >> 8);
  bVar17 = (byte)piVar13 | *pbVar27;
  pbVar12 = (byte *)CONCAT31(uVar15,bVar17);
  cVar5 = (byte)puVar11 - bVar6;
  puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),cVar5);
  *pbVar12 = *pbVar12 + bVar17;
  pbVar9 = pbVar7 + 4;
  out(*(undefined4 *)pbVar7,(short)pbVar27);
  *pbVar12 = bVar17;
  *pbVar27 = *pbVar27 + cVar5;
  pbVar7 = pbVar7 + 8;
  out(*(undefined4 *)pbVar9,(short)pbVar27);
  *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
  puVar32 = (uint *)(CONCAT31((int3)(uVar33 >> 8),(char)uVar33 - (char)((uint)pbVar31 >> 8)) |
                    (uint)pbVar7);
  pbVar31 = (byte *)CONCAT31(uVar16,(bVar6 | *pbVar7) + (byte)*puVar38);
  cVar5 = bVar17 - (byte)*puVar38;
  puVar37 = (uint *)CONCAT31(uVar15,cVar5 - *(char *)CONCAT31(uVar15,cVar5));
code_r0x00405090:
  *puVar37 = (uint)(pbVar31 + *puVar37);
  cVar5 = (char)puVar37;
  *(byte *)puVar37 = (byte)*puVar37 + cVar5;
  *(byte *)puVar37 = (byte)*puVar37 + cVar5;
  *(byte *)puVar37 = (byte)*puVar37 + cVar5;
  *puVar11 = *puVar11 - (int)pcVar8;
  bVar17 = *pbVar7;
  bVar6 = (byte)pbVar31;
  *pbVar7 = *pbVar7 + bVar6;
  *(byte *)puVar37 = (byte)*puVar37 + cVar5 + CARRY1(bVar17,bVar6);
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  uVar33 = *puVar32;
  *(byte *)puVar32 = (byte)*puVar32 + 0x72;
  *(byte *)puVar32 = (byte)*puVar32;
  cVar5 = (char)((uint)pbVar31 >> 8);
  if (SCARRY1((byte)uVar33,'r')) {
    pbVar7 = pbVar7 + *(int *)(pbVar31 + -10);
  }
  else {
    while( true ) {
      *pbVar7 = *pbVar7 + (char)puVar37;
      uVar15 = (undefined3)((uint)puVar37 >> 8);
      cVar22 = (char)puVar37 + (byte)*puVar32;
      pcVar14 = (char *)CONCAT31(uVar15,cVar22);
      puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                 CONCAT11((char)((uint)puVar32 >> 8) +
                                          *(byte *)((int)puVar32 + 0x7b),(char)puVar32));
      *pcVar14 = *pcVar14 + cVar22;
      in_AF = 9 < (cVar22 + 0x6fU & 0xf) | in_AF;
      uVar33 = CONCAT31(uVar15,cVar22 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar21 = (byte)uVar33;
      piVar13 = (int *)CONCAT22((short)(uVar33 >> 0x10),
                                CONCAT11((char)((uint)puVar37 >> 8) + in_AF,bVar21));
      *piVar13 = *piVar13 + (int)piVar13;
      uVar15 = (undefined3)((uint)piVar13 >> 8);
      bVar21 = bVar21 | *(byte *)(piVar13 + 0x354a);
      bVar21 = bVar21 - *(char *)CONCAT31(uVar15,bVar21);
      pbVar9 = (byte *)CONCAT31(uVar15,bVar21);
      bVar17 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar21;
      pbVar7 = pbVar7 + (-(uint)CARRY1(bVar17,bVar21) - *(int *)pbVar9);
      puVar37 = (uint *)(pbVar9 + 0xfc00);
      *pbVar31 = *pbVar31 + cVar5;
      uVar33 = *puVar37;
      bVar17 = (byte)puVar37;
      *(byte *)puVar37 = (byte)*puVar37 + bVar17;
      uVar2 = (uint)CARRY1((byte)uVar33,bVar17);
      uVar33 = *puVar32;
      uVar1 = *puVar32;
      *puVar32 = (uint)((byte *)(uVar1 + (int)puVar37) + uVar2);
      if (!CARRY4(uVar33,(uint)puVar37) && !CARRY4(uVar1 + (int)puVar37,uVar2)) break;
      *(byte *)puVar37 = (byte)*puVar37 + bVar17;
    }
  }
  uVar33 = (uint)puVar37 | *puVar37;
  uVar25 = SUB42(pbVar31,0);
  *pbVar7 = *pbVar7 + (char)uVar33;
  piVar13 = (int *)(uVar33 + 0xc1872);
  if (SCARRY4(uVar33,0xc1872)) {
    cVar22 = (char)piVar13;
    *(char *)piVar13 = *(char *)piVar13 + cVar22;
    *pbVar31 = *pbVar31 + cVar22;
    *(char *)piVar13 = *(char *)piVar13 + cVar22;
    *(byte *)puVar32 = (byte)*puVar32 + (char)puVar11;
    *(char *)piVar13 = *(char *)piVar13 + cVar22;
    *(char *)((int)piVar13 * 2) = *(char *)((int)piVar13 * 2) + bVar6;
    pbVar9 = pbVar7;
    goto code_r0x00405117;
  }
  do {
    bVar17 = *pbVar7;
    bVar6 = (byte)piVar13;
    *pbVar7 = *pbVar7 + bVar6;
    if (CARRY1(bVar17,bVar6)) {
      *piVar13 = (int)(*piVar13 + (int)piVar13);
      uVar15 = (undefined3)((uint)puVar11 >> 8);
      bVar17 = (byte)puVar11 | bRam396f1609;
      *piVar13 = (int)(*piVar13 + (int)piVar13);
      puVar11 = (uint *)CONCAT31(uVar15,bVar17 | *(byte *)CONCAT31(uVar15,bVar17));
      uVar15 = (undefined3)((uint)piVar13 >> 8);
      bVar6 = bVar6 | *pbVar31;
      pcVar14 = (char *)CONCAT31(uVar15,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        pbVar9 = pbVar7 + 4;
        out(*(undefined4 *)pbVar7,uVar25);
        uVar33 = CONCAT22((short)((uint)piVar13 >> 0x10),(ushort)bVar6);
        *pbVar9 = *pbVar9 + bVar6;
        pcVar14 = (char *)(uVar33 | 8);
        cVar22 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x7a);
        puVar37 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(cVar22,(char)puVar32));
        *pcVar14 = *pcVar14 + (char)pcVar14;
        cVar5 = (char)pcVar14 + 'o';
        piVar13 = (int *)CONCAT31((int3)(uVar33 >> 8),cVar5);
        *(char *)piVar13 = (char)*piVar13 + cVar5;
        *(byte *)puVar11 = (byte)*puVar11 + 1;
        pbVar7 = pbVar7 + 8;
        out(*(undefined4 *)pbVar9,uVar25);
        pbVar31 = (byte *)((uint)pbVar31 ^ uRam08122c04);
        iVar18 = CONCAT31((int3)((uint)(*piVar13 * 0x17070600) >> 8),2);
        *(char *)(iVar18 * 2) = *(char *)(iVar18 * 2) - cVar22;
        do {
          bVar17 = (byte)iVar18;
          *pbVar7 = *pbVar7 + bVar17;
          bVar40 = CARRY1(bVar17,(byte)*puVar37);
          uVar15 = (undefined3)((uint)iVar18 >> 8);
          cVar5 = bVar17 + (byte)*puVar37;
          pbVar9 = (byte *)CONCAT31(uVar15,cVar5);
          uVar39 = in_DS;
          uVar4 = uStack_38;
          if (SCARRY1(bVar17,(byte)*puVar37) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar9 = *pbVar9 + cVar5;
          uVar33 = CONCAT31(uVar15,cVar5 + '\'') + 0x1ebd9f3;
          uStack_3c = (undefined1)(ushort)param_4;
          uStack_3b = (undefined1)((ushort)param_4 >> 8);
          piVar13 = (int *)(uVar33 ^ 0x73060000);
          puVar11 = (uint *)((int)puVar11 + 1);
          *piVar13 = (int)(*piVar13 + (int)piVar13);
          puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                     CONCAT11((byte)((uint)puVar37 >> 8) | pcVar8[0x7e],
                                              (char)puVar37));
          cVar5 = (char)uVar33;
          *(char *)piVar13 = (char)*piVar13 + cVar5;
          uVar33 = CONCAT31((int3)((uint)piVar13 >> 8),cVar5 + '\x02');
          bVar40 = 0xd9f2d2da < uVar33;
          iVar18 = uVar33 + 0x260d2d25;
          pcVar14 = pcVar8;
          do {
            uVar15 = (undefined3)((uint)iVar18 >> 8);
            bVar6 = (char)iVar18 + -2 + bVar40;
            pbVar9 = (byte *)CONCAT31(uVar15,bVar6);
            bVar17 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar6;
            bVar21 = (byte)puVar37;
            uStack_38 = (ushort)param_4;
            if (CARRY1(bVar17,bVar6)) {
              *pbVar9 = *pbVar9 + bVar6;
              puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                         CONCAT11((byte)((uint)puVar37 >> 8) | pcVar14[0x7f],bVar21)
                                        );
              *pbVar9 = *pbVar9 + bVar6;
              pbVar9 = (byte *)CONCAT31(uVar15,bVar6 + 0x2a);
              *pbVar9 = *pbVar9 + bVar6 + 0x2a;
              *(byte *)puVar37 = (byte)*puVar37 + (char)pbVar31;
              uVar39 = in_DS;
              while( true ) {
                in_DS = uVar39;
                bVar6 = (byte)pbVar9;
                *pbVar31 = *pbVar31 ^ bVar6;
                *pbVar31 = *pbVar31 + (char)puVar37;
                *pbVar9 = *pbVar9 + bVar6;
                *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)pbVar31 >> 8);
                bVar17 = *pbVar9;
                *pbVar9 = *pbVar9 + bVar6;
                uVar33 = *puVar37;
                uVar1 = *puVar37;
                *puVar37 = (uint)(pbVar9 + uVar1 + CARRY1(bVar17,bVar6));
                uVar15 = (undefined3)((uint)pbVar9 >> 8);
                if (CARRY4(uVar33,(uint)pbVar9) ||
                    CARRY4((uint)(pbVar9 + uVar1),(uint)CARRY1(bVar17,bVar6))) break;
                *pbVar7 = *pbVar7 + bVar6;
                pcVar19 = (char *)CONCAT22((short)((uint)puVar11 >> 0x10),
                                           CONCAT11((char)((uint)puVar11 >> 8) + *pbVar9,
                                                    (char)puVar11));
                *pbVar7 = *pbVar7 + bVar6;
                piVar13 = (int *)CONCAT31(uVar15,bVar6 | (byte)*puVar37);
                pbVar9 = pbVar7;
                while( true ) {
                  pbVar7 = pbVar9 + 4;
                  out(*(undefined4 *)pbVar9,(short)pbVar31);
                  pbVar31 = pbVar31 + 1;
                  *piVar13 = (int)(*piVar13 + (int)piVar13);
                  bVar21 = (byte)((uint)pcVar19 >> 8) | *pbVar31;
                  uVar15 = (undefined3)((uint)piVar13 >> 8);
                  bVar6 = (byte)piVar13 ^ *pbVar31;
                  pcVar10 = (char *)CONCAT31(uVar15,bVar6);
                  cRam282b0000 = cRam282b0000 - bVar21;
                  *pcVar10 = *pcVar10 + bVar6;
                  pcVar8 = pcVar14 + -*(int *)pbVar31;
                  uStack_3c = (undefined1)in_DS;
                  uStack_3b = (undefined1)(in_DS >> 8);
                  bVar17 = *(byte *)((int)puVar38 + 0x17);
                  *pcVar10 = *pcVar10 + bVar6;
                  puVar11 = (uint *)CONCAT22((short)((uint)pcVar19 >> 0x10),
                                             CONCAT11(bVar21 + bVar17 | *pbVar31,(char)pcVar19));
                  *(byte *)puVar37 = (byte)*puVar37 + (char)puVar37;
                  *(byte *)((int)pcVar10 * 2) = *(byte *)((int)pcVar10 * 2) ^ bVar6;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  bVar6 = bVar6 + in_AF * -6;
                  pbVar9 = (byte *)CONCAT31(uVar15,bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) *
                                                           -0x60);
                  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
                  *(char *)((int)pbVar9 * 2) =
                       *(char *)((int)pbVar9 * 2) + (char)((uint)pbVar31 >> 8);
                  bVar40 = CARRY1((byte)*puVar11,(byte)pbVar31);
                  *(byte *)puVar11 = (byte)*puVar11 + (byte)pbVar31;
                  uVar39 = in_DS;
                  uVar4 = (ushort)param_4;
GenerateStatusText:
                  in_DS = uVar4;
                  pcVar14 = pcVar8;
                  uStack_38 = in_DS;
                  if (!bVar40) break;
                  *pbVar9 = *pbVar9 + (char)pbVar9;
                  iVar18 = CONCAT31((int3)((uint)puVar11 >> 8),(byte)puVar11 | *pbVar31);
                  uVar25 = (undefined2)((uint)puVar37 >> 0x10);
                  cVar30 = (char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + 0x7d);
                  *pbVar9 = *pbVar9 + (char)pbVar9;
                  *(byte *)puVar38 = (byte)*puVar38 - (char)((uint)puVar11 >> 8);
                  iVar18 = iVar18 - *(int *)(iVar18 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar30,(char)puVar37)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar7,(short)pbVar31);
                  pbVar31 = (byte *)CONCAT22(uStack_3a,CONCAT11(uStack_3b,uStack_3c));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar9 = pbVar7 + 8;
                  out(*(undefined4 *)(pbVar7 + 4),CONCAT11(uStack_3b,uStack_3c));
                  pcVar14 = pcVar8 + 1;
                  cVar22 = (char)iVar18;
                  pcVar19 = (char *)CONCAT22((short)((uint)iVar18 >> 0x10),
                                             CONCAT11((byte)((uint)iVar18 >> 8) |
                                                      *(byte *)((int)puVar38 + 0x46),cVar22));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  param_4._0_2_ = CONCAT11(uStack_3b,uStack_3c);
                  uVar15 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar9,0xf0)) >> 8);
                  piVar13 = (int *)CONCAT31(uVar15,0x5f);
                  puVar38 = (uint *)((int)puVar38 + 1);
                  *piVar13 = (int)(*piVar13 + (int)piVar13);
                  puVar37 = (uint *)CONCAT22(uVar25,CONCAT11(cVar30 + cVar5 | pbVar7[-0x78],
                                                             (char)puVar37));
                  *(char *)piVar13 = (char)*piVar13 + '_';
                  puVar11 = (uint *)CONCAT31(uVar15,0x8c);
                  *(byte **)(pbVar9 + (int)puVar38 * 8) =
                       pbVar31 + *(int *)(pbVar9 + (int)puVar38 * 8);
                  bVar17 = *pbVar9;
                  *pbVar9 = *pbVar9 + 0x8c;
                  if (bVar17 < 0x74) {
                    *pbVar31 = *pbVar31 + cVar22;
                    *(byte *)puVar37 = (byte)*puVar37 >> 1;
                    *(char *)puVar11 = (char)*puVar11 + -0x74;
                    *puVar11 = (uint)(pcVar14 + *puVar11);
                    *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
                    *pbVar31 = *pbVar31 + cVar22;
                    pcVar8[2] = pcVar8[2] - cVar22;
                    *pbVar31 = *pbVar31 + cVar22;
                    pbVar7 = (byte *)CONCAT31(uVar15,0x83);
                    puVar11 = puVar37;
                    goto code_r0x00405312;
                  }
                  *puVar11 = (uint)(*puVar11 + (int)puVar11);
                  piVar13 = (int *)(CONCAT31(uVar15,(byte)puVar11[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar11[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar13 = (int *)((int)piVar13 + *(int *)pbVar9);
                }
              }
              *pbVar31 = *pbVar31 + bVar6;
              *(byte *)puVar37 = (byte)*puVar37 - (char)pbVar31;
              *pbVar9 = *pbVar9 + bVar6;
              pbVar9 = (byte *)CONCAT31(uVar15,bVar6 | (byte)*puVar37);
            }
            else {
              cVar5 = (char)puVar11;
              *pbVar31 = *pbVar31 + cVar5;
              *(byte **)pbVar9 = pbVar31 + *(int *)pbVar9;
              *pbVar9 = *pbVar9 + bVar6;
              bVar6 = bVar6 + *pbVar9;
              pbVar9 = (byte *)CONCAT31(uVar15,bVar6);
              if (-1 < (char)bVar6) {
                *(byte *)puVar37 = (byte)*puVar37 + bVar21;
                out(*(undefined4 *)pbVar7,(short)pbVar31);
                pbVar31 = pbVar31 + 1;
                *pbVar9 = *pbVar9 + bVar6;
                puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),
                                           bVar21 | (byte)((uint)iVar18 >> 8));
                cVar22 = bVar6 - (byte)*puVar11;
                pcVar8 = (char *)CONCAT31(uVar15,cVar22);
                *pcVar8 = *pcVar8 + cVar22 + (bVar6 < (byte)*puVar11);
                *pbVar31 = *pbVar31 + cVar22;
                pcVar8 = (char *)((int)pcVar8 * 2 + 0x79);
                *pcVar8 = *pcVar8 + (char)((uint)pbVar31 >> 8);
                pbVar9 = (byte *)in((short)pbVar31);
                pbVar7 = pbVar7 + 4;
              }
              *pbVar7 = *pbVar7 + cVar5;
              *pbVar9 = *pbVar9 + (char)pbVar9;
              *pbVar9 = *pbVar9 + (char)pbVar9;
              uStack_3c = (undefined1)in_DS;
              uStack_3b = (undefined1)(in_DS >> 8);
              bVar17 = *pbVar9;
              bVar21 = (byte)((uint)puVar11 >> 8);
              bVar24 = bVar21 + *pbVar9;
              iVar18 = *(int *)pbVar9;
              *pbVar31 = *pbVar31 + cVar5;
              bVar6 = (char)(pbVar9 + (uint)CARRY1(bVar21,bVar17) + iVar18) - (byte)*puVar37;
              pbVar9 = (byte *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar21,bVar17) + iVar18)
                                              >> 8),bVar6);
              *(byte *)puVar37 = (byte)*puVar37 ^ bVar6;
              *pcVar14 = *pcVar14 + (char)puVar37;
              *pbVar9 = *pbVar9 + bVar6;
              *pbVar9 = *pbVar9 + bVar6;
              *pbVar9 = *pbVar9 + bVar6;
              puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                                         CONCAT11(bVar24 + *pbVar9,cVar5));
              pbVar9 = pbVar9 + (uint)CARRY1(bVar24,*pbVar9) + *(int *)pbVar9;
              *pbVar31 = *pbVar31 + cVar5;
              pbVar7 = pbVar7 + *(int *)(pbVar31 + 0x3e);
            }
            *pbVar7 = *pbVar7 + (char)pbVar9;
            cVar5 = (char)pbVar9 + 'r';
            pbVar7 = pbVar7 + -1;
            uVar33 = CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
            *pbVar7 = *pbVar7 + cVar5;
            bVar40 = 0xfff38f8d < uVar33;
            iVar18 = uVar33 + 0xc7072;
            pcVar8 = pcVar14;
          } while (SCARRY4(uVar33,0xc7072));
        } while( true );
      }
      *pcVar14 = *pcVar14 + bVar6;
      bVar6 = bVar6 + 0x6f;
      pbVar9 = (byte *)CONCAT31(uVar15,bVar6);
      bVar17 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar6;
      uVar15 = (undefined3)
               ((uint)(pbVar9 + (uint)CARRY1(bVar17,bVar6) + *(int *)((int)puVar11 + (int)pbVar31))
               >> 8);
      cVar22 = (char)(pbVar9 + (uint)CARRY1(bVar17,bVar6) + *(int *)((int)puVar11 + (int)pbVar31)) +
               'E';
      pcVar14 = (char *)CONCAT31(uVar15,cVar22);
      *pcVar14 = *pcVar14 + cVar22;
      cVar22 = cVar22 + *pcVar14;
      pcVar14 = (char *)CONCAT31(uVar15,cVar22);
      *pcVar14 = *pcVar14 + cVar22;
      puVar37 = (uint *)CONCAT31(uVar15,cVar22 + *pcVar14);
      *(char *)puVar37 = (char)*puVar37 + cVar22 + *pcVar14;
      pbVar9 = (byte *)((uint)puVar37 | *puVar37);
      bVar17 = *pbVar9;
      bVar6 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar6;
      piVar13 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6 + CARRY1(bVar17,bVar6));
      pbVar9 = pbVar7;
code_r0x00405117:
      *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
      puVar32 = (uint *)((int)puVar32 - *puVar32);
      pbVar7 = pbVar9 + 4;
      out(*(undefined4 *)pbVar9,uVar25);
    }
    *pbVar31 = *pbVar31 + (char)puVar11;
    bVar40 = puVar32 < (uint *)*piVar13;
    puVar32 = (uint *)((int)puVar32 - *piVar13);
    bVar17 = (byte)((uint)puVar11 >> 8);
    *(byte *)((int)puVar38 + 0x39) = (*(byte *)((int)puVar38 + 0x39) - bVar17) - bVar40;
    *piVar13 = (int)(*piVar13 + (int)piVar13);
    uVar33 = *puVar32;
    *(int *)((int)puVar38 + 0x39) = *(int *)((int)puVar38 + 0x39) - (int)pcVar8;
    *piVar13 = (int)(*piVar13 + (int)piVar13);
    puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                               CONCAT11(bVar17 | (byte)uVar33 | (byte)*puVar32,(char)puVar11));
    *(char *)(piVar13 + 10) = (char)piVar13[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
  bVar17 = (char)piVar13 + 0x28;
  pbVar7 = (byte *)CONCAT31((int3)((uint)piVar13 >> 8),bVar17);
  *pbVar7 = *pbVar7 ^ bVar17;
  *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)pcVar19 >> 8);
  bVar17 = *pbVar31;
  *pbVar31 = *pbVar31 + (byte)pcVar19;
  piVar13 = (int *)(((uint)pbVar7 | 0x1496f09) + *puVar38 + (uint)CARRY1(bVar17,(byte)pcVar19));
  pbVar12 = pbVar9 + 4;
  out(*(undefined4 *)pbVar9,(short)pbVar31);
  pbVar27 = pbVar31 + -1;
  *piVar13 = *piVar13 + (int)piVar13;
  pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),(byte)pbVar27 | (byte)*puVar37);
  cVar5 = (char)piVar13 + '\x13';
  pbVar7 = (byte *)CONCAT31((int3)((uint)piVar13 >> 8),cVar5);
  puVar11 = puVar37;
  pbVar9 = pbVar12;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar31 = *pbVar31 - (char)((uint)pbVar27 >> 8);
    *pbVar7 = *pbVar7 + cVar5;
code_r0x00405396:
    bVar17 = *pbVar7;
    bVar6 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar6;
    *(byte **)pbVar12 = pbVar7 + (uint)CARRY1(bVar17,bVar6) + *(int *)pbVar12;
    out(*(undefined4 *)pbVar12,(short)pbVar31);
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    pcVar14 = (char *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                               CONCAT11((byte)((uint)pbVar7 >> 8) | pbVar12[4],bVar6));
    *(char **)((int)puVar38 + -1) = pcVar14 + *(int *)((int)puVar38 + -1);
    out(*(undefined4 *)(pbVar12 + 4),(short)pbVar31);
    *pcVar14 = *pcVar14 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar7 = *pbVar7 + (char)pbVar7;
  piVar13 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),(char)pbVar7 + 'o');
  puVar37 = (uint *)((int)puVar11 + -1);
  *piVar13 = *piVar13 + (int)piVar13;
  uVar15 = (undefined3)((uint)pbVar31 >> 8);
  piVar13 = (int *)((int)piVar13 + 0x1b7e);
  bVar21 = (byte)pbVar31 | *(byte *)puVar37 | *(byte *)puVar37;
  iRam04115f2c = iRam04115f2c + (int)piVar13;
  out(*(undefined4 *)pbVar9,(short)CONCAT31(uVar15,bVar21));
  *piVar13 = *piVar13 + (int)piVar13;
  bVar21 = bVar21 | (byte)piVar13;
  iVar28 = CONCAT31(uVar15,bVar21);
  pbVar7 = (byte *)((int)piVar13 - *piVar13);
  cVar5 = (char)pbVar7;
  *pcVar19 = *pcVar19 + cVar5;
  cVar22 = (char)pcVar19 - bVar21;
  *pbVar7 = *pbVar7 + cVar5;
  uVar25 = (undefined2)((uint)pcVar19 >> 0x10);
  bVar6 = (byte)((uint)pcVar19 >> 8) | *pbVar7;
  pcVar14 = pcVar14 + -1;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar17 = *(byte *)(CONCAT22(uVar25,CONCAT11(bVar6,cVar22)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar7;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar14;
  *pbVar7 = *pbVar7 + cVar5;
  bVar17 = bVar6 | bVar17 | *(byte *)puVar37;
  iVar20 = CONCAT22(uVar25,CONCAT11(bVar17,cVar22));
  pbVar27 = (byte *)((uint)(pbVar9 + 4) ^ *(uint *)(iVar28 + -0x43));
  iVar18 = *(int *)pbVar7;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  if (SCARRY4(iVar18,(int)pbVar7)) {
    *pbVar7 = *pbVar7 + cVar5;
  }
  pbVar9 = pbVar7 + 0x5674;
  puVar38 = (uint *)((int)puVar38 +
                    (-(uint)((byte *)0xffffa98b < pbVar7) - *(int *)(pbVar27 + -0x7f)));
  bVar6 = (byte)pbVar9;
  *pbVar9 = *pbVar9 + bVar6;
  uVar16 = (undefined3)((uint)pbVar9 >> 8);
  bVar24 = bVar6 + 0x2d;
  piVar13 = (int *)CONCAT31(uVar16,bVar24);
  *(uint *)(pbVar27 + (int)puVar38 * 8) =
       *(int *)(pbVar27 + (int)puVar38 * 8) + iVar28 + (uint)(0xd2 < bVar6);
  bVar6 = *pbVar27;
  *pbVar27 = *pbVar27 + bVar24;
  if (!CARRY1(bVar6,bVar24)) {
    do {
      pbVar9 = (byte *)(iVar28 + 1);
      bVar6 = (byte)piVar13;
      *(byte *)piVar13 = (char)*piVar13 + bVar6;
      bVar21 = (byte)((uint)piVar13 >> 8);
      bVar24 = (byte)puVar37 | bVar21;
      puVar11 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),bVar24);
      out(*(undefined4 *)pbVar27,(short)pbVar9);
      *(byte *)piVar13 = (char)*piVar13 + bVar6;
      uVar25 = (undefined2)((uint)iVar20 >> 0x10);
      cVar5 = (char)iVar20;
      pbVar7 = (byte *)CONCAT22(uVar25,CONCAT11((byte)((uint)iVar20 >> 8) | *pbVar9,cVar5));
      bVar17 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar6;
      *(byte *)piVar13 = (char)*piVar13 + bVar6 + CARRY1(bVar17,bVar6);
      *pbVar9 = *pbVar9 + bVar6;
      *(byte *)puVar38 = (byte)*puVar38 + bVar21;
      *(int *)((int)piVar13 * 2) =
           *(int *)((int)piVar13 * 2) + CONCAT22(uVar25,CONCAT11(0x1c,cVar5));
      *(byte *)piVar13 = (char)*piVar13 + bVar6;
      cVar22 = (char)pbVar9;
      *(byte *)puVar11 = (byte)*puVar11 + cVar22;
      *(byte *)((int)piVar13 * 2) = *(byte *)((int)piVar13 * 2) ^ bVar6;
      *(byte *)piVar13 = (char)*piVar13 + bVar6;
      pbVar7 = pbVar27 + 8;
      out(*(undefined4 *)(pbVar27 + 4),(short)pbVar9);
      piVar13 = (int *)0xa0a0000;
      *pbVar9 = *pbVar9;
      bVar6 = cVar5 - cVar22;
      iVar20 = CONCAT22(uVar25,CONCAT11((byte)puVar38[0x14] | 0x1c | bRam0ca87216,bVar6));
      *pbVar9 = *pbVar9;
      bVar17 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar6;
      if (!CARRY1(bVar17,bVar6)) {
        piVar13 = (int *)0x1e7b7000;
        bVar17 = (byte)((uint)puVar37 >> 8) | *(byte *)(iVar28 + 3);
        puVar11 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar17,bVar24));
        if (bVar17 != 0) {
          pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar22 + pbVar7[(int)puVar38 * 8]);
          piVar13 = (int *)0x6d7d7000;
          iVar20 = iVar20 + 1;
        }
      }
      *piVar13 = (int)(*piVar13 + (int)piVar13);
      iVar28 = CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 | pbVar7[(int)puVar38 * 8]);
      *(char *)piVar13 = (char)*piVar13;
      piVar13 = (int *)CONCAT31((int3)((uint)piVar13 >> 8),0xf9);
      *puVar38 = (uint)((int)piVar13 + *puVar38 + 1);
      pbVar27 = pbVar27 + 0xc;
      out(*(undefined4 *)pbVar7,(short)iVar28);
      puVar37 = puVar11;
    } while( true );
  }
  *piVar13 = (int)(*piVar13 + (int)piVar13);
  bVar24 = bVar24 | *(byte *)((int)piVar13 + 0x4000081);
  piVar13 = (int *)CONCAT31(uVar16,bVar24);
  if ('\0' < (char)bVar24) {
    *(byte *)piVar13 = (char)*piVar13 + bVar24;
    puVar32 = (uint *)CONCAT31(uVar16,bVar24 + 0x28);
    *puVar32 = *puVar32 ^ (uint)puVar32;
    *(byte *)puVar37 = *(byte *)puVar37 + bVar17;
    cVar5 = (bVar24 + 0x28) - bVar17;
    pcVar14 = (char *)CONCAT31(uVar16,cVar5);
    *pcVar14 = *pcVar14 + cVar5;
    pbVar31 = (byte *)CONCAT31(uVar15,bVar21 | *(byte *)puVar37);
    pcVar8 = (char *)CONCAT22((short)((uint)puVar37 >> 0x10),
                              CONCAT11((char)((uint)puVar37 >> 8) + *(byte *)((int)puVar11 + 0x7d),
                                       (char)puVar37));
    *pcVar14 = *pcVar14 + cVar5;
    pbVar7 = (byte *)CONCAT31(uVar16,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar16,cVar5 + 0x39U));
    *pcVar8 = *pcVar8 + bVar17;
    pbVar12 = pbVar27 + 4;
    out(*(undefined4 *)pbVar27,(short)pbVar31);
    goto code_r0x00405396;
  }
  pbVar9 = pbVar27 + 4;
  out(*(undefined4 *)pbVar27,(short)iVar28);
  pcVar19 = (char *)(iVar20 + -1);
  *piVar13 = (int)(*piVar13 + (int)piVar13);
  pbVar31 = (byte *)CONCAT31(uVar15,bVar21 | *(byte *)puVar37);
  goto code_r0x004052ee;
}


