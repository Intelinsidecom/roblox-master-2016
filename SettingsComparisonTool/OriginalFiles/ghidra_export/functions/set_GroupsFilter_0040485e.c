/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040485e
 * Raw Name    : set_GroupsFilter
 * Demangled   : set_GroupsFilter
 * Prototype   : int set_GroupsFilter(uint * value, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8, uint * param_9, char * param_10, uint * param_11, uint * param_12, int param_13, char * param_14)
 * Local Vars  : uStack_53, uStack_54, uStack_50, uStack_52, puStack_10, uStack_14, puStack_8, iStack_c, uVar1, puStack_4, uVar3, uVar2, bVar5, cVar4, uVar7, bVar6, pbVar8, in_EAX, piVar10, uVar9, puVar12, pcVar11, uVar14, puVar13, iVar16, puVar15, pcVar18, pbVar17, value, uVar20, pcVar19, puVar22, uVar21, pcVar24, puVar23, bVar26, iVar25, bVar28, bVar27, uVar30, uVar29, puVar32, bVar31, pbVar34, puVar33, uVar36, iVar35, cVar38, cVar37, puVar39, unaff_EBX, cVar41, puVar40, cVar43, cVar42, unaff_EBP, ppuVar44, puVar46, param_2, ppuVar45, param_3, unaff_ESI, param_4, ppuVar47, param_5, unaff_EDI, param_6, puVar48, param_7, puVar50, param_8, puVar49, in_SS, param_9, in_ES, param_10, bVar51, param_11, in_DS, param_12, param_13, in_AF, param_14
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */

int __fastcall
set_GroupsFilter(uint *value,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
                uint *param_7,uint *param_8,uint *param_9,char *param_10,uint *param_11,
                uint *param_12,int param_13,char *param_14)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 in_EAX;
  undefined3 uVar20;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  ushort *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined3 uVar21;
  char *pcVar19;
  byte bVar26;
  undefined2 uVar29;
  uint *puVar22;
  uint *puVar23;
  byte bVar27;
  byte bVar28;
  undefined2 uVar30;
  char *pcVar24;
  int iVar25;
  byte bVar31;
  uint *puVar32;
  uint *puVar33;
  byte *pbVar34;
  int iVar35;
  undefined1 uVar36;
  char cVar37;
  char cVar38;
  char cVar41;
  uint *unaff_EBX;
  uint *puVar39;
  char cVar42;
  char cVar43;
  uint *puVar40;
  uint **ppuVar44;
  uint *unaff_EBP;
  uint **ppuVar45;
  uint *puVar46;
  uint **ppuVar47;
  uint *unaff_ESI;
  uint *puVar48;
  uint *unaff_EDI;
  uint *puVar49;
  uint *puVar50;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar51;
  byte in_AF;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_14;
  uint *puStack_10;
  int iStack_c;
  uint *puStack_8;
  uint *puStack_4;
  
                    /* .NET CLR Managed Code */
  bVar5 = (byte)in_EAX;
  bVar51 = CARRY1(bVar5,(byte)*unaff_EBX);
  uVar20 = (undefined3)((uint)in_EAX >> 8);
  cVar4 = bVar5 + (byte)*unaff_EBX;
  piVar10 = (int *)CONCAT31(uVar20,cVar4);
  if (SCARRY1(bVar5,(byte)*unaff_EBX) == cVar4 < '\0') {
code_r0x004048d5:
    pcVar11 = (char *)((int)piVar10 + (-(uint)bVar51 - *piVar10));
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    uRam00c16f07 = SUB41(pcVar11,0);
  }
  else {
    *(char *)piVar10 = (char)*piVar10 + cVar4;
    pcVar11 = (char *)CONCAT31(uVar20,cVar4 + '*');
    puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_DS);
    uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar36 = SUB41(unaff_EBX,0);
    cVar41 = (char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[0x1d];
    unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar41,uVar36));
    *pcVar11 = *pcVar11 + cVar4 + '*';
    bVar5 = cVar4 + 0x54U & (byte)*param_2;
    unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBP[0x1d]);
    *(char *)CONCAT31(uVar20,bVar5) = *(char *)CONCAT31(uVar20,bVar5) + bVar5;
    pbVar8 = (byte *)CONCAT31(uVar20,bVar5 + 0x2a);
    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_DS);
    bVar5 = (byte)((uint)value >> 8);
    cVar4 = (char)value;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar5 + *pbVar8,cVar4));
    pbVar8 = pbVar8 + (uint)CARRY1(bVar5,*pbVar8) + *(int *)pbVar8;
    *(char *)param_2 = (char)*param_2 + cVar4;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),(byte)pbVar8 - *pbVar8);
    unaff_ESI = (uint *)((int)unaff_ESI + (uint)((byte)pbVar8 < *pbVar8) + *(int *)pbVar17);
    iStack_c = CONCAT22(iStack_c._2_2_,in_ES);
    while( true ) {
      bVar26 = (byte)pbVar17;
      pbVar17[0x2c000000] = pbVar17[0x2c000000] + bVar26;
      bVar5 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar26;
      *param_2 = (uint)(pbVar17 + (uint)CARRY1(bVar5,bVar26) + *param_2);
      cVar37 = (char)param_2;
      *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar37;
      *pbVar17 = *pbVar17 + bVar26;
      puVar48 = (uint *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar26 | (byte)*unaff_EBX);
      uVar9 = (uint)puVar48 | *puVar48;
      cVar4 = (char)uVar9;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar4;
      uVar20 = (undefined3)(uVar9 >> 8);
      bVar5 = cVar4 + (byte)*unaff_EBX;
      pcVar11 = (char *)CONCAT31(uVar20,bVar5);
      bVar26 = (byte)((uint)value >> 8);
      uVar29 = (undefined2)((uint)value >> 0x10);
      if (SCARRY1(cVar4,(byte)*unaff_EBX) == (char)bVar5 < '\0') break;
      *pcVar11 = *pcVar11 + bVar5;
      bVar6 = bVar5 + 2;
      pcVar11 = (char *)CONCAT31(uVar20,bVar6);
      if (bVar5 < 0xfe) {
        *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
        puVar48 = unaff_EBX;
        goto code_r0x004048f5;
      }
      *pcVar11 = *pcVar11 + bVar6;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) |
                                          *(byte *)((int)unaff_EBX + -0x5b),cVar37));
      cVar4 = *pcVar11;
      *pcVar11 = *pcVar11 + bVar6;
      puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
      if (SCARRY1(cVar4,bVar6) == *pcVar11 < '\0') goto code_r0x00404927;
      *pcVar11 = *pcVar11 + bVar6;
      bVar5 = bVar5 + 4;
      pbVar17 = (byte *)CONCAT31(uVar20,bVar5);
      if (0xfd < bVar6) {
        *pbVar17 = *pbVar17 + bVar5;
        puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_ES);
        bVar5 = bVar5 | (byte)*unaff_ESI;
        pcVar11 = (char *)CONCAT31(uVar20,bVar5);
        *pcVar11 = *pcVar11 + bVar5;
        *unaff_EBX = (uint)(*unaff_EBX + (int)value);
        puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
        unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar41 + *(byte *)((int)unaff_EBX + 0x75),
                                                     uVar36));
        *pcVar11 = *pcVar11 + bVar5;
        pcVar11 = (char *)CONCAT31(uVar20,bVar5 + 0x6f);
        *pcVar11 = *pcVar11 + bVar5 + 0x6f;
        bVar51 = false;
        piVar10 = (int *)((uint)pcVar11 & 0x7e26062d);
        goto code_r0x004048d5;
      }
      *pbVar17 = *pbVar17 + bVar5;
      value = (uint *)CONCAT22(uVar29,CONCAT11(bVar26 | (byte)*param_2,(char)value));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar37;
      *(byte *)unaff_ESI = (byte)*unaff_ESI ^ bVar5;
    }
    *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar37;
    *pcVar11 = *pcVar11 + bVar5;
    value = (uint *)CONCAT22(uVar29,CONCAT11(bVar26 | (byte)*param_2,(char)value));
    param_2 = (uint *)((int)param_2 + 1);
    pcVar11 = pcVar11 + *param_2;
    if ((POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0) goto code_r0x00404921;
    pcVar11 = (char *)((uint)pcVar11 | 8);
  }
  cVar4 = (char)pcVar11;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar4;
  *pcVar11 = *pcVar11 + cVar4;
  *(byte **)(pcVar11 + (int)value) = (byte *)(*(int *)(pcVar11 + (int)value) + (int)value);
  puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
  bVar5 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar11 = *pcVar11 + cVar4;
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar4 + 'o');
  unaff_ESI = (uint *)((int)unaff_ESI + 1);
  *pcVar11 = *pcVar11 + cVar4 + 'o';
  puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_ES);
  puVar48 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5,(char)unaff_EBX));
  unaff_EBP = unaff_EBX;
  in_SS = in_ES;
code_r0x004048f5:
  unaff_EBX = puVar48;
  pcVar11 = (char *)((int)((uint)pcVar11 & 0x7e26062d) - *(int *)((uint)pcVar11 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)value;
  do {
    uRam00c36f08 = SUB41(pcVar11,0);
    while( true ) {
      uVar9 = *unaff_ESI;
      cVar4 = (char)pcVar11;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar4;
      iStack_c = CONCAT22(iStack_c._2_2_,in_ES);
      if (SCARRY1((byte)uVar9,cVar4) == (char)(byte)*unaff_ESI < '\0') {
        pcVar11[(int)unaff_EBP] = pcVar11[(int)unaff_EBP] + cVar4;
        goto code_r0x00404982;
      }
      *pcVar11 = *pcVar11 + cVar4;
      pbVar8 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar4 + '*');
      puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_DS);
      bVar5 = (byte)((uint)value >> 8);
      cVar4 = (char)value;
      bVar26 = bVar5 + *pbVar8;
      pbVar8 = pbVar8 + (uint)CARRY1(bVar5,*pbVar8) + *(int *)pbVar8;
      *(byte *)param_2 = (byte)*param_2 + cVar4;
      cVar41 = (char)unaff_EBX - (byte)*unaff_ESI;
      bVar5 = *pbVar8;
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar26 + *pbVar8,cVar4));
      iVar16 = *(int *)pbVar8;
      *(byte *)param_2 = (byte)*param_2 + cVar4;
      pcVar11 = (char *)CONCAT31((int3)((uint)(pbVar8 + (uint)CARRY1(bVar26,bVar5) + iVar16) >> 8),
                                 (char)(pbVar8 + (uint)CARRY1(bVar26,bVar5) + iVar16) -
                                 *(byte *)((int)param_2 + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar41)
                                                     + -0x3a),cVar41));
code_r0x00404921:
      bVar5 = (byte)pcVar11;
      *pcVar11 = *pcVar11 + bVar5;
      pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar5 + 0x6f);
      *(byte *)value = ((byte)*value - (bVar5 + 0x6f)) - (0x90 < bVar5);
code_r0x00404927:
      *(byte *)param_2 = (byte)*param_2 + (char)value;
      puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_SS);
      *(byte *)value = (byte)*value + 1;
      cVar4 = (char)((uint)value >> 8) - *(byte *)((int)unaff_ESI + 2);
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(cVar4,(char)value));
      if ((POPCOUNT(cVar4) & 1U) == 0) break;
      pcVar11 = pcVar11 + -0x1b7e2606;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar11 >> 8) | (byte)param_2[0x30dbc2],
                                          (char)pcVar11));
    }
code_r0x00404931:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar4 = (char)pcVar11 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar4);
    puVar48 = unaff_ESI;
  } while ((POPCOUNT(cVar4) & 1U) != 0);
  do {
    bVar5 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar5;
    uVar20 = (undefined3)((uint)pcVar11 >> 8);
    piVar10 = (int *)CONCAT31(uVar20,bVar5 + 0x6f);
    *value = (*value - (int)piVar10) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    iVar16 = *(int *)((int)unaff_EDI + 0x1a);
    *piVar10 = *piVar10 + (int)piVar10;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*puVar48);
    *(byte *)value = (byte)*value + 1;
    bVar5 = (bVar5 + 0x6f) - (char)*piVar10;
    pbVar8 = (byte *)CONCAT31(uVar20,bVar5);
    *pbVar8 = *pbVar8 + bVar5;
    puVar48 = (uint *)((int)puVar48 + *(int *)pbVar8);
    cVar4 = bVar5 + *pbVar8;
    puVar12 = (ushort *)CONCAT31(uVar20,cVar4);
    *puVar12 = *puVar12 + (ushort)CARRY1(bVar5,*pbVar8) * (((ushort)puVar12 & 3) - (*puVar12 & 3));
    *(char *)puVar12 = (char)*puVar12 + cVar4;
    *(char *)puVar12 = (char)*puVar12 + cVar4;
    *(char *)puVar12 = (char)*puVar12 + cVar4;
    unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
    unaff_EBP = (uint *)((int)unaff_EBP + iVar16);
code_r0x0040495b:
    cVar4 = (char)puVar12;
    *(char *)puVar12 = (char)*puVar12 + cVar4;
    uVar20 = (undefined3)((uint)puVar12 >> 8);
    cVar41 = cVar4 + '\x02';
    pcVar11 = (char *)CONCAT31(uVar20,cVar41);
    if ((POPCOUNT(cVar41) & 1U) != 0) {
      *param_2 = (uint)(*param_2 + (int)unaff_EBP);
      unaff_ESI = (uint *)((int)puVar48 + 1);
      out((byte)*puVar48,(short)param_2);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar11 = *pcVar11 + cVar41;
    pbVar8 = (byte *)(CONCAT31(uVar20,cVar4 + '}') + (int)unaff_EBP);
    *pbVar8 = *pbVar8 + cVar4 + '}';
    *param_14 = *param_14 + (char)param_14;
    value = (uint *)CONCAT22((short)((uint)param_13 >> 0x10),
                             CONCAT11((byte)((uint)param_13 >> 8) | *(byte *)(param_13 * 3),
                                      (char)param_13));
    unaff_EDI = (uint *)((int)param_7 + *(int *)((int)param_11 + 0x6f));
    pcVar11 = param_14;
    param_2 = param_12;
    unaff_EBX = param_11;
    unaff_EBP = param_9;
    puVar48 = param_8;
    while( true ) {
      cVar4 = (char)pcVar11;
      *pcVar11 = *pcVar11 + cVar4;
      uVar20 = (undefined3)((uint)pcVar11 >> 8);
      cVar41 = cVar4 + '\x02';
      pcVar11 = (char *)CONCAT31(uVar20,cVar41);
      if ((POPCOUNT(cVar41) & 1U) != 0) break;
      *pcVar11 = *pcVar11 + cVar41;
      pcVar11 = (char *)CONCAT31(uVar20,cVar4 + '}');
      out(*puVar48,(short)param_2);
      *pcVar11 = *pcVar11 + cVar4 + '}';
code_r0x00404982:
      *(char *)param_6 = (char)*param_6 + (char)param_6;
      value = (uint *)CONCAT22((short)((uint)param_5 >> 0x10),
                               CONCAT11((byte)((uint)param_5 >> 8) |
                                        *(byte *)((int)param_5 + (int)puStack_8),(char)param_5));
      unaff_EDI = (uint *)(iStack_c + *(int *)((int)param_3 + 0x71));
      puVar13 = param_6;
      param_2 = param_4;
      unaff_EBX = param_3;
      puVar48 = puStack_8;
      while( true ) {
        cVar4 = (char)puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + cVar4;
        uVar20 = (undefined3)((uint)puVar13 >> 8);
        cVar41 = cVar4 + '\x02';
        puVar12 = (ushort *)CONCAT31(uVar20,cVar41);
        unaff_EBP = puStack_4;
        if ((POPCOUNT(cVar41) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar12 = (char)*puVar12 + cVar41;
        bVar26 = cVar4 + 0x7d;
        iVar16 = CONCAT31(uVar20,bVar26);
        pbVar8 = (byte *)(iVar16 + (int)puStack_4);
        bVar5 = *pbVar8;
        *pbVar8 = *pbVar8 + bVar26;
        uVar9 = *value;
        *(byte *)param_2 = (byte)*param_2 + (char)value;
        pcVar11 = (char *)(((iVar16 - uVar9) - (uint)CARRY1(bVar5,bVar26)) + -0x727b0317);
        cVar4 = (char)pcVar11;
        *pcVar11 = *pcVar11 + cVar4;
        uVar20 = (undefined3)((uint)pcVar11 >> 8);
        cVar41 = cVar4 + '\x02';
        pcVar11 = (char *)CONCAT31(uVar20,cVar41);
        if ((POPCOUNT(cVar41) & 1U) != 0) break;
        *pcVar11 = *pcVar11 + cVar41;
        bVar26 = cVar4 + 0x7d;
        iVar16 = CONCAT31(uVar20,bVar26);
        pbVar8 = (byte *)(iVar16 + (int)puStack_4);
        bVar5 = *pbVar8;
        *pbVar8 = *pbVar8 + bVar26;
        puVar13 = (uint *)((iVar16 - *value) - (uint)CARRY1(bVar5,bVar26));
        puVar46 = param_2;
code_r0x004049b4:
        *(byte *)puVar46 = (byte)*puVar46 + (char)value;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),
                                   ((char)puVar46 - (char)*unaff_EDI) - (byte)*puVar48);
        bVar26 = *(byte *)((int)puVar48 + 0x72);
        *puVar13 = *puVar13 & (uint)value;
        pbVar8 = (byte *)((int)puVar13 + 2);
        *pbVar8 = *pbVar8 + (char)((uint)puVar46 >> 8);
        bVar5 = *pbVar8;
        puVar50 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar26);
        puVar46 = puVar48;
        while (unaff_EBX = puVar50, puVar48 = puVar46, (POPCOUNT(bVar5) & 1U) == 0) {
          cVar4 = (char)puVar13;
          *(byte *)puVar13 = (byte)*puVar13 + cVar4;
          uVar20 = (undefined3)((uint)puVar13 >> 8);
          cVar41 = cVar4 + '\x03';
          pbVar8 = (byte *)CONCAT31(uVar20,cVar41);
          puVar48 = puVar46 + 1;
          out(*puVar46,(short)param_2);
          in_SS = param_7._0_2_;
          *pbVar8 = *pbVar8 + cVar41;
          cVar37 = (char)value;
          value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11((byte)((uint)value >> 8) | *pbVar8,cVar37));
          *(int *)pbVar8 = *(int *)pbVar8 - (int)pbVar8;
          *(byte *)param_2 = (byte)*param_2 + cVar37;
          cVar37 = (char)puVar50 - *(byte *)((int)puVar46 + 6);
          unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar50 >> 8),cVar37);
          if ((POPCOUNT(cVar37) & 1U) != 0) {
            pcVar11 = (char *)((int)unaff_EDI + (int)puStack_4 * 2);
            *pcVar11 = *pcVar11 + cVar41;
            ppuVar47 = (uint **)puStack_4;
            goto code_r0x00404a51;
          }
          *pbVar8 = *pbVar8 + cVar41;
          puVar13 = (uint *)CONCAT31(uVar20,cVar4 + 'r');
          *(byte *)puVar13 = (byte)*puVar13;
          param_7 = (uint *)CONCAT22(param_7._2_2_,in_ES);
          do {
            unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
            bVar5 = (byte)puVar13;
            *(byte *)puVar13 = (byte)*puVar13 + bVar5;
            uVar20 = (undefined3)((uint)puVar13 >> 8);
            bVar5 = (bVar5 + 0x6e) - (0x90 < bVar5);
            puVar13 = (uint *)CONCAT31(uVar20,bVar5);
            cVar4 = (char)value;
            *(byte *)param_2 = (byte)*param_2 + cVar4;
            bVar26 = (char)((uint)value >> 8) - *(byte *)((int)puVar48 + 2);
            value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar26,cVar4));
            puVar46 = param_2;
            if ((POPCOUNT(bVar26) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar13 = (byte)*puVar13 + bVar5;
            bVar6 = bVar5 + 2;
            puVar13 = (uint *)CONCAT31(uVar20,bVar6);
            ppuVar45 = (uint **)puStack_4;
            if ((POPCOUNT(bVar6) & 1U) == 0) goto code_r0x004049f5;
            puVar48 = param_7;
          } while (0xfd < bVar5);
          *(byte *)puVar13 = (byte)*puVar13 | bVar6;
          puVar50 = unaff_EBX;
          puVar46 = param_7;
          bVar5 = (byte)*puVar13;
        }
      }
    }
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    param_7 = (uint *)CONCAT22(param_7._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar5 = (byte)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    uVar20 = (undefined3)((uint)puVar13 >> 8);
    bVar6 = bVar5 + 0x6f;
    pbVar8 = (byte *)CONCAT31(uVar20,bVar6);
    *value = (*value - (int)pbVar8) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + cVar4;
    puVar46 = (uint *)((int)ppuVar45 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
    uVar21 = (undefined3)((uint)param_2 >> 8);
    bVar5 = (byte)param_2 | (byte)*puVar48;
    param_2 = (uint *)CONCAT31(uVar21,bVar5);
    *(byte *)value = (byte)*value + 1;
    cVar41 = bVar6 - *pbVar8;
    puVar48 = (uint *)((int)puVar48 + (-(uint)(bVar6 < *pbVar8) - *(int *)CONCAT31(uVar20,cVar41)));
    uVar14 = CONCAT31(uVar20,cVar41 + *(char *)CONCAT31(uVar20,cVar41));
    bVar51 = CARRY1(bRam14110000,bVar26);
    bRam14110000 = bRam14110000 + bVar26;
    puVar13 = (uint *)((int)unaff_EBX + (int)puVar48 * 2);
    uVar9 = *puVar13;
    uVar2 = uVar14 + *puVar13;
    puVar15 = (undefined4 *)(uVar2 + bVar51);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar15 = uVar1;
    param_6 = (uint *)CONCAT22(param_6._2_2_,in_ES);
    uVar9 = (uint)(CARRY4(uVar14,uVar9) || CARRY4(uVar2,(uint)bVar51));
    puVar13 = (uint *)((int)puVar15 + uRam7d020511 + uVar9);
    ppuVar44 = &param_5;
    ppuVar47 = &param_5;
    ppuVar45 = &param_5;
    param_5 = puVar46;
    cVar41 = '\x03';
    do {
      puVar46 = puVar46 + -1;
      ppuVar44 = ppuVar44 + -1;
      *ppuVar44 = (uint *)*puVar46;
      cVar41 = cVar41 + -1;
    } while ('\0' < cVar41);
    param_7 = (uint *)&param_5;
    pbRam00c82802 =
         (byte *)((int)puVar13 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar15,uRam7d020511) ||
                      CARRY4((int)puVar15 + uRam7d020511,uVar9))));
    uVar9 = *puVar48;
    cVar41 = (char)puVar13;
    *(byte *)puVar48 = (byte)*puVar48 + cVar41;
  } while (SCARRY1((byte)uVar9,cVar41) == (char)(byte)*puVar48 < '\0');
  *(byte *)puVar13 = (byte)*puVar13 + cVar41;
  iVar16 = CONCAT31((int3)((uint)puVar13 >> 8),cVar41 + '\x11') + 0xc57b;
  bVar26 = (byte)iVar16;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar21,bVar5 + (byte)*value);
  iVar16 = (CONCAT31((int3)((uint)iVar16 >> 8),bVar26 + 0x6f) - (uint)(0x90 < bVar26)) + -0x18093a86
  ;
  cVar41 = (char)iVar16;
  uVar20 = (undefined3)((uint)iVar16 >> 8);
  cVar4 = cVar41 + '\x02';
  pbVar8 = (byte *)CONCAT31(uVar20,cVar4);
  if ((POPCOUNT(cVar4) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar8 = *pbVar8 + cVar4;
  pbVar8 = (byte *)CONCAT31(uVar20,cVar41 + 'q');
  ppuVar47 = &param_5;
code_r0x00404a51:
  pbVar17 = pbVar8 + 1;
  cVar4 = (char)pbVar17;
  *pbVar17 = *pbVar17 + cVar4;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar50 >> 0x10),
                               CONCAT11((char)((uint)puVar50 >> 8) - cVar4,cVar37));
  *pbVar17 = *pbVar17 + cVar4;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*value);
  pbVar8 = pbVar8 + 0x757b03;
  pcVar11 = (char *)((int)unaff_EDI + (int)ppuVar47 * 2);
  cVar4 = (char)pbVar8;
  *pcVar11 = *pcVar11 + cVar4;
  *pbVar8 = *pbVar8 + cVar4;
  *(byte *)puVar48 = (byte)*puVar48 - (char)((uint)pbVar8 >> 8);
  *pbVar8 = *pbVar8 + cVar4;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar47 + -0x3a));
  *pbVar8 = *pbVar8 + cVar4;
  pbVar8 = (byte *)(CONCAT31((int3)((uint)pbVar8 >> 8),cVar4 + '\x11') + 0x757b02);
  pcVar11 = (char *)((int)unaff_EDI + (int)ppuVar47 * 2);
  bVar26 = (byte)pbVar8;
  *pcVar11 = *pcVar11 + bVar26;
  bVar5 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar26;
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
  pbRam011006fe = pbVar8 + (int)(pbRam011006fe + CARRY1(bVar5,bVar26));
  uVar9 = *puVar48;
  *(byte *)puVar48 = (byte)*puVar48 + bVar26;
  if (!CARRY1((byte)uVar9,bVar26)) goto code_r0x00404add;
  do {
    bVar5 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    bVar6 = (byte)value;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                             CONCAT11((byte)((uint)value >> 8) | *pbVar8,bVar6));
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    uVar20 = (undefined3)((uint)pbVar8 >> 8);
    bVar5 = bVar5 + in_AF * '\x06';
    cVar4 = bVar5 + (0x90 < (bVar5 & 0xf0) | in_AF * (0xf9 < bVar5)) * '`';
    pcVar11 = (char *)CONCAT31(uVar20,cVar4);
    *pcVar11 = *pcVar11 + cVar4;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar47 + -0x39));
    *pcVar11 = *pcVar11 + cVar4;
    iVar16 = CONCAT31(uVar20,cVar4 + '\x11') + 0xc57b;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x11') + 0xc67b;
    bVar5 = (byte)iVar16;
    bVar26 = bVar5 + 0x6f;
    pbVar8 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar26);
    *value = (*value - (int)pbVar8) - (uint)(0x90 < bVar5);
    uVar9 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    pbRam011106fe = pbVar8 + (int)(pbRam011106fe + CARRY1((byte)uVar9,bVar6));
    uVar9 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + bVar26;
    if (!CARRY1((byte)uVar9,bVar26)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
    bVar5 = (byte)value;
    bVar26 = (byte)((uint)value >> 8) | *pbVar8;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar26,bVar5));
    *pbVar8 = *pbVar8 - (char)pbVar8;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar26;
    out(*puVar48,(short)param_2);
    *value = *value & (uint)pbVar8;
    uVar9 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    pbVar8 = pbVar8 + (uint)CARRY1((byte)uVar9,bVar5) + puVar48[1];
    *pbVar8 = *pbVar8 + (char)pbVar8;
    *(byte *)value = (byte)*value + (char)param_2;
    puVar48 = puVar48 + 1;
    while( true ) {
      out(*puVar48,(short)param_2);
      pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),(byte)pbVar8 & (byte)*value);
      *(byte *)param_2 = (byte)*param_2 + (char)value;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[5],
                                          (char)param_2));
      *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
      puVar48 = puVar48 + 1;
code_r0x00404ad4:
      puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
      pbVar8 = (byte *)((uint)pbVar8 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar8;
code_r0x00404add:
      bVar5 = (byte)pbVar8;
      uVar20 = (undefined3)((uint)pbVar8 >> 8);
      cVar4 = bVar5 + 8;
      pbVar8 = (byte *)CONCAT31(uVar20,cVar4);
      if (SCARRY1(bVar5,'\b') == cVar4 < '\0') break;
      *pbVar8 = *pbVar8 + cVar4;
      cVar4 = bVar5 + 10;
      piVar10 = (int *)CONCAT31(uVar20,cVar4);
      if ((POPCOUNT(cVar4) & 1U) != 0) {
        *piVar10 = (int)(*piVar10 + (int)piVar10);
        goto code_r0x00404b18;
      }
      *(char *)piVar10 = (char)*piVar10 + cVar4;
      puVar13 = (uint *)CONCAT31(uVar20,bVar5 + 0x7c);
      *puVar13 = *puVar13 & (uint)value;
      *(char *)((int)puVar13 + 0x11) = *(char *)((int)puVar13 + 0x11) + (char)((uint)param_2 >> 8);
      cVar4 = (char)((int)puVar13 + 0xc67b);
      uVar20 = (undefined3)((uint)((int)puVar13 + 0xc67b) >> 8);
      bVar5 = cVar4 + 8;
      pbVar8 = (byte *)CONCAT31(uVar20,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar8 = *pbVar8 + bVar5;
        cRam02060000 = cVar4 + 'w';
        puVar46 = (uint *)CONCAT31(uVar20,cRam02060000);
        *(byte *)puVar46 = (byte)*puVar46 + cRam02060000;
        cVar4 = (char)value;
        value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                 CONCAT11((byte)((uint)value >> 8) | (byte)*puVar46,cVar4));
        *puVar46 = *puVar46 - (int)puVar46;
        *(byte *)param_2 = (byte)*param_2 + cVar4;
        puVar13 = puVar48 + 1;
        out(*puVar48,(short)param_2);
        puVar48 = puVar13;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar11 = (char *)((uint)puVar46 | *puVar46);
        goto code_r0x00404b89;
      }
      bVar26 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar5;
      *puVar48 = (uint)(pbVar8 + (uint)CARRY1(bVar26,bVar5) + *puVar48);
    }
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    *value = (uint)(pbVar8 + (uint)(0xf7 < bVar5) + *value);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(char)puVar46 + 'r');
    piVar10 = (int *)((uint)puVar13 | *puVar13);
    param_2 = puStack_10;
code_r0x00404b18:
    bRam11060000 = (byte)piVar10;
    iVar16 = CONCAT31((int3)((uint)((int)piVar10 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar10 + 0xc57b) + '\x11') + 0xc77b;
    bVar5 = (byte)iVar16;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),bVar5 + 0x6f);
    *value = (*value - iVar16) - (uint)(0x90 < bVar5);
    cVar4 = (char)value;
    *(byte *)param_2 = (byte)*param_2 + cVar4;
    bVar27 = (byte)((uint)unaff_EBX >> 8);
    bVar6 = (byte)((uint)param_2 >> 8) | bVar27;
    pcVar18 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar6,(byte)param_2));
    piVar10 = (int *)(iVar16 + 0x73060001);
    *(byte *)value = (byte)*value & (byte)piVar10;
    *pcVar18 = *pcVar18 + cVar4;
    bVar26 = (byte)((uint)value >> 8);
    *(byte *)piVar10 = *(char *)piVar10 - bVar26;
    *(byte *)piVar10 = *(char *)piVar10 + (byte)piVar10;
    iVar16 = *piVar10;
    *piVar10 = *piVar10 - (int)piVar10;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar26;
    pcVar11 = (char *)((uint)piVar10 | *unaff_EDI);
    *pcVar18 = *pcVar18 - bVar26;
    bVar5 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar5;
    ppuVar47 = (uint **)(((int)ppuVar47 - iVar16) - *(int *)(pcVar11 + ((int)ppuVar47 - iVar16)));
    uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar28 = (byte)unaff_EBX;
    cVar41 = bVar27 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar8 = (byte *)CONCAT22(uVar30,CONCAT11(cVar41,bVar28));
    *pcVar11 = *pcVar11 + bVar5;
    uVar20 = (undefined3)((uint)pcVar11 >> 8);
    uVar14 = CONCAT31(uVar20,bVar5 + 7);
    puVar13 = (uint *)((int)ppuVar47 + -0x1faeef1);
    uVar9 = *puVar13;
    uVar2 = *puVar13 + uVar14;
    *puVar13 = uVar2 + (0xf8 < bVar5);
    puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
    puVar50 = puStack_10;
    bVar5 = bVar5 + 7 + (byte)*value + (CARRY4(uVar9,uVar14) || CARRY4(uVar2,(uint)(0xf8 < bVar5)));
    puVar46 = (uint *)CONCAT31(uVar20,bVar5);
    uVar9 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + bVar5;
    if (CARRY1((byte)uVar9,bVar5)) break;
    *(byte *)puVar46 = (byte)*puVar46 + bVar5;
    unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar41 + pbVar8[0x76],bVar28));
    uStack_14 = in_ES;
  }
  *(byte *)puVar46 = (byte)*puVar46 + bVar5;
  uVar21 = (undefined3)((uint)pcVar18 >> 8);
  bVar31 = (byte)param_2 | *pbVar8;
  param_2 = (uint *)CONCAT31(uVar21,bVar31);
  pcRam2b060000 = (char *)CONCAT31(uVar20,bVar5 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar5 + 0x39)) - (0xd7 < (byte)(bVar5 + 0x11));
  bVar27 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar26;
  puVar13 = puVar48 + 1;
  out(*puVar48,(short)param_2);
  bVar5 = (bVar5 + 0x37) - CARRY1(bVar27,bVar26);
  piVar10 = (int *)CONCAT31(uVar20,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar10 = (char)*piVar10 + bVar5;
    iVar16 = CONCAT31(uVar20,bVar5 + 0x11) + 0xc77b;
    pcVar11 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + 'r');
    pcVar11[0x28] = pcVar11[0x28] + bVar6;
code_r0x00404b89:
    cVar4 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + cVar4;
    puVar12 = (ushort *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar4 + 'r');
    uVar7 = (ushort)puVar12 | *puVar12;
    pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),uVar7);
    bRam11060000 = (byte)uVar7;
    out(*puVar13,(short)param_2);
    *pcVar11 = *pcVar11 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar10 = (char)*piVar10 + bVar5;
  puVar40 = (uint *)((int)ppuVar47 - *(int *)((int)unaff_EDI + 0x21));
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  pcVar11 = (char *)CONCAT31(uVar21,bVar31 | *pbVar8);
  puVar46 = puVar48 + 2;
  out(*puVar13,(short)pcVar11);
  uVar9 = *value;
  *pcVar11 = *pcVar11 + cVar4;
  uVar9 = CONCAT31(uVar20,bVar5 & (byte)uVar9) | 0x767b02;
  *(byte *)((int)value + (int)pcVar11) = *(byte *)((int)value + (int)pcVar11) + (char)uVar9;
  iVar16 = uVar9 + 0xc67b;
  cVar43 = (char)iVar16;
  uVar20 = (undefined3)((uint)iVar16 >> 8);
  cVar37 = cVar43 + 'r';
  pcVar11 = (char *)CONCAT31(uVar20,cVar37);
  pcVar11[0x28] = pcVar11[0x28] + bVar6;
  *pcVar11 = *pcVar11 + cVar37;
  uVar29 = (undefined2)((uint)value >> 0x10);
  bVar26 = bVar26 | *(byte *)((int)puStack_10 + -0x5e);
  puVar23 = (uint *)CONCAT22(uVar29,CONCAT11(bVar26,cVar4));
  *pcVar11 = *pcVar11 + cVar37;
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uStack_14);
  puVar13 = (uint *)CONCAT22(uVar30,CONCAT11(cVar41 + pbVar8[0x76],bVar28));
  *pcVar11 = *pcVar11 + cVar37;
  puVar32 = (uint *)CONCAT31(uVar20,cVar43 + -0x1c);
  pcVar11 = (char *)((uint)puVar32 | *puVar32);
  bVar51 = (POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar11;
  puVar32 = puStack_10;
  puVar39 = puVar13;
  puVar22 = puVar40;
  puVar49 = puVar50;
  uVar30 = uStack_14;
  if (!bVar51) goto code_r0x00404ca8;
  *pcVar11 = *pcVar11 + cRam02060000;
  puVar32 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cRam02060000 + 'r');
  *puVar32 = *puVar32 & (uint)puVar23;
  *(char *)((int)puVar32 + 0x11) = *(char *)((int)puVar32 + 0x11) + (char)((ushort)uStack_14 >> 8);
  iVar16 = (int)puVar32 + 0xc77b;
  uVar20 = (undefined3)((uint)iVar16 >> 8);
  cRam02060000 = (char)iVar16 + '\t';
  pbVar8 = (byte *)CONCAT31(uVar20,cRam02060000);
  out(*puVar46,uStack_14);
  *pbVar8 = *pbVar8 + cRam02060000;
  puVar22 = (uint *)CONCAT22(uVar29,CONCAT11(bVar26 | *pbVar8,cVar4));
  *(int *)pbVar8 = *(int *)pbVar8 - (int)pbVar8;
  *(byte *)puStack_10 = (byte)*puStack_10 + cVar4;
  out(puVar48[3],uStack_14);
  puVar33 = puStack_10;
  puVar46 = puVar48 + 4;
  uVar30 = uStack_14;
  if ((POPCOUNT((byte)*puStack_10) & 1U) != 0) goto code_r0x00404cca;
  *pbVar8 = *pbVar8 + cRam02060000;
  puVar12 = (ushort *)CONCAT31(uVar20,(char)iVar16 + '{');
  uVar7 = (ushort)puVar12 | *puVar12;
  pcVar11 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),uVar7);
  bVar5 = (byte)uVar7;
  out(puVar48[4],uStack_14);
  pbVar8 = (byte *)((int)puVar22 + 1);
  bRam11060000 = bVar5;
  *pcVar11 = *pcVar11 + bVar5;
  puVar23 = (uint *)CONCAT22((short)((uint)pbVar8 >> 0x10),
                             CONCAT11((byte)((uint)pbVar8 >> 8) | bRam110cde91,(char)pbVar8));
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar5 - 7);
  *puVar50 = (uint)(pcVar11 + (uint)(bVar5 < 7) + *puVar50);
  puVar46 = puVar48 + 6;
  out(puVar48[5],uStack_14);
  puVar32 = (uint *)((int)puStack_10 + 1);
  *pcVar11 = *pcVar11 + (bVar5 - 7);
  puVar39 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar28 | (byte)(uVar7 >> 8));
  do {
    bVar5 = (char)pcVar11 - *pcVar11;
    uVar9 = *puVar23;
    *(byte *)puVar23 = (byte)*puVar23 + bVar5;
    cVar4 = bVar5 - CARRY1((byte)uVar9,bVar5);
    *(byte *)puVar32 = (byte)*puVar32 + cVar4;
    cVar41 = (char)((uint)puVar23 >> 8);
    *(byte *)(puVar50 + 0x673b40) = (byte)puVar50[0x673b40] + cVar41;
    puVar48 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar4);
    *(byte *)puVar48 = (byte)*puVar48 + cVar4;
    *(byte *)puVar32 = (byte)*puVar32 + cVar4;
    puVar39[0x16] = (uint)(puVar39[0x16] + (int)puVar46);
    puVar22 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar23 >> 0x10),
                                               CONCAT11(cVar41 + (char)((uint)pcVar11 >> 8),
                                                        (char)puVar23)) >> 8),
                               (char)puVar23 + *(char *)((int)puVar48 * 2));
    *(byte *)puVar48 = (byte)*puVar48 + cVar4;
    *(byte *)puVar46 = (byte)*puVar46 + (char)puVar39;
    puVar33 = puVar32;
    puVar13 = puVar39;
_ctor:
    bVar26 = (byte)((uint)puVar22 >> 8);
    uVar9 = *puVar48;
    bVar5 = (byte)puVar22;
    puVar48 = (uint *)((int)puVar48 + (uint)CARRY1(bVar26,(byte)*puVar48) + *puVar48);
    *(byte *)puVar33 = (byte)*puVar33 + bVar5;
    cVar4 = bVar5 - *(byte *)((int)puVar33 + 3);
    puVar23 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar22 >> 0x10),
                                               CONCAT11(bVar26 + (byte)uVar9,bVar5)) >> 8),cVar4);
    if ((POPCOUNT(cVar4) & 1U) != 0) {
      if (*(byte *)((int)puVar33 + 3) <= bVar5) {
        *puVar48 = (uint)(*puVar48 + (int)puVar48);
        puVar33 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),(byte)puVar33 | (byte)*puVar13);
        puVar48 = puVar48 + 0x230e;
        puVar22 = puVar23;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar48 = (byte)*puVar48 + (char)puVar48;
    cVar4 = (char)puVar48 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)puVar48 >> 8),cVar4);
    bVar51 = (POPCOUNT(cVar4) & 1U) == 0;
    puVar32 = puVar33;
    puVar39 = puVar13;
    puVar22 = puVar40;
    puVar49 = puVar50;
    uVar30 = puStack_4._0_2_;
code_r0x00404ca8:
    puStack_4._0_2_ = uVar30;
    pcVar18 = param_10;
    puVar33 = param_8;
    puVar13 = param_7;
    puVar40 = param_5;
    puVar50 = param_3;
    if (bVar51) break;
    *(byte *)puVar32 = (byte)*puVar32 + (char)puVar23;
    puVar40 = puVar22;
    puVar50 = puVar49;
  } while( true );
  *pcVar11 = *pcVar11 + (char)pcVar11;
  bVar5 = (byte)param_10;
  *param_10 = *param_10 + bVar5;
  puVar22 = (uint *)CONCAT22((short)((uint)param_9 >> 0x10),
                             CONCAT11((byte)((uint)param_9 >> 8) | (byte)*param_8,(char)param_9));
  *(char *)param_7 = (char)*param_7 + (char)param_7;
  pbVar8 = (byte *)((int)pcVar18 * 2);
  *pbVar8 = *pbVar8 ^ bVar5;
  uVar3 = *(undefined6 *)pcVar18;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar8 = (byte *)uVar3;
  bVar26 = (byte)uVar3;
  *pbVar8 = *pbVar8 + bVar26;
  bVar5 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar26;
  puVar48 = (uint *)((int)puVar22 + 0x11673);
  uVar9 = *puVar48;
  uVar2 = *puVar48;
  *puVar48 = uVar2 + (int)puVar33 + (uint)CARRY1(bVar5,bVar26);
  param_3 = (uint *)CONCAT22(param_3._2_2_,puStack_4._0_2_);
  pbVar8 = pbVar8 + (uint)(CARRY4(uVar9,(uint)puVar33) ||
                          CARRY4(uVar2 + (int)puVar33,(uint)CARRY1(bVar5,bVar26))) +
                    *(int *)((int)puVar22 + (int)puVar33);
  puVar46 = param_4;
  uVar30 = puStack_4._0_2_;
code_r0x00404cca:
  puStack_4._0_2_ = uVar30;
  cVar4 = (char)pbVar8 + '\x04';
  puVar48 = (uint *)CONCAT31((int3)((uint)pbVar8 >> 8),cVar4);
  if (SCARRY1((char)pbVar8,'\x04') == cVar4 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar48;
  puVar32 = puVar46 + 1;
  out(*puVar46,(short)puVar33);
  uVar9 = *puVar22;
  uVar2 = *puVar33;
  bVar5 = (byte)puVar22;
  *(byte *)puVar33 = (byte)*puVar33 + bVar5;
  iVar16 = (CONCAT31((int3)((uint)puVar48 >> 8),(char)puVar48 + '\x03') & uVar9) + iRam00008c38;
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar33;
  pcVar11 = (char *)(iVar16 + (uint)CARRY1((byte)uVar2,bVar5) + 0x1246f);
  uVar20 = (undefined3)((uint)puVar22 >> 8);
  bVar5 = bVar5 | (byte)*puVar33;
  puVar23 = (uint *)CONCAT31(uVar20,bVar5);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar11 >> 8);
  puVar48 = (uint *)(CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + *pcVar11) + 0x1fbeef2);
  uVar9 = *puVar48;
  *puVar48 = (uint)(*puVar48 + (int)puVar48);
  if (CARRY4(uVar9,(uint)puVar48)) {
    *puVar48 = (uint)(*puVar48 + (int)puVar48);
    pcVar11 = (char *)CONCAT31(uVar20,bVar5 | bRam00282809);
    cVar4 = (char)((uint)puVar22 >> 8);
    *(byte *)puVar13 = (byte)*puVar13 + cVar4;
    *pcVar11 = *pcVar11 - cVar4;
    *(byte *)puVar48 = *(byte *)puVar48 + (char)puVar48;
    iVar16 = (int)pcVar11 - *puVar13;
    puVar46 = puVar46 + 2;
    out(*puVar32,(short)puVar33);
    *puVar48 = (uint)(*puVar48 + (int)puVar48);
    puVar23 = (uint *)CONCAT22((short)((uint)iVar16 >> 0x10),
                               CONCAT11((byte)((uint)iVar16 >> 8) | bRambf73070b,(char)iVar16));
code_r0x00404d15:
    uVar9 = *puVar48;
    bVar5 = (byte)puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + bVar5;
    puVar32 = puVar46 + 1;
    out(*puVar46,(short)puVar33);
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar26 = bVar5 + in_AF * '\x06';
    puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),
                               bVar26 + (0x90 < (bVar26 & 0xf0) |
                                        CARRY1((byte)uVar9,bVar5) | in_AF * (0xf9 < bVar26)) * '`');
  }
  *puVar48 = (uint)(*puVar48 + (int)puVar48);
  bVar5 = (byte)puVar48 | (byte)*puVar50;
  puVar46 = puVar32 + 1;
  uVar29 = SUB42(puVar33,0);
  out(*puVar32,uVar29);
  *(byte *)puVar23 = (byte)*puVar23 - bVar5;
  uVar9 = *puVar33;
  bVar26 = (byte)puVar23;
  *(byte *)puVar33 = (byte)*puVar33 + bVar26;
  iVar16 = CONCAT31((int3)((uint)puVar48 >> 8),bVar5) + *puVar46 + (uint)CARRY1((byte)uVar9,bVar26);
  pcVar11 = (char *)((int)puVar40 - *puVar33);
  uVar20 = (undefined3)((uint)iVar16 >> 8);
  cVar4 = (char)iVar16 + (byte)*puVar46 + (puVar40 < (uint *)*puVar33);
  puVar48 = (uint *)CONCAT31(uVar20,cVar4);
  bVar5 = (byte)((uint)puVar23 >> 8);
  *(byte *)puVar23 = (byte)*puVar23 - bVar5;
  *puVar48 = (uint)(*puVar48 + (int)puVar48);
  bVar26 = bVar26 | *(byte *)((int)puVar33 + (int)puVar48);
  uVar30 = (undefined2)((uint)puVar23 >> 0x10);
  if ((POPCOUNT(bVar26) & 1U) == 0) {
    *(byte *)puVar48 = (byte)*puVar48 + cVar4;
    pcVar18 = (char *)CONCAT31(uVar20,cVar4 + '\x12');
    *pcVar18 = *pcVar18 + bVar5;
    puVar48 = (uint *)CONCAT31(uVar20,(cVar4 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar23 >> 8),bVar26));
    uVar9 = *puVar33;
    *(byte *)puVar33 = (byte)*puVar33 + bVar26;
    if (!CARRY1((byte)uVar9,bVar26)) {
      pbVar8 = (byte *)((uint)puVar48 | *puVar48);
      out(*puVar46,uVar29);
      *pbVar8 = *pbVar8 + (char)pbVar8;
      bVar6 = *pbVar8;
      piVar10 = (int *)CONCAT22(uVar30,CONCAT11(bVar5 | bVar6,bVar26));
      iVar16 = (int)pbVar8 - *piVar10;
      *(byte *)puVar33 = (byte)*puVar33 + bVar26;
      puVar48 = puVar32 + 3;
      out(puVar32[2],uVar29);
      uRam12060000 = (undefined1)iVar16;
      *(char *)((int)piVar10 + iVar16) = *(char *)((int)piVar10 + iVar16) - (bVar5 | bVar6);
      *(byte *)puVar33 = (byte)*puVar33 + bVar26;
      pbVar8 = (byte *)(iVar16 + -0x120edecd);
      *(byte *)puVar48 = (byte)*puVar48 + 1;
      bVar5 = *pbVar8;
      bVar6 = (byte)pbVar8;
      *pbVar8 = *pbVar8 + bVar6;
      pcVar11 = pcVar11 + ((-1 - *(int *)((int)puVar50 + 0x42)) - (uint)CARRY1(bVar5,bVar6));
      *pbVar8 = *pbVar8 + bVar6;
      bVar5 = (byte)puVar13 | (byte)((uint)pbVar8 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar8;
      uVar9 = *puVar33;
      pcVar18 = (char *)(((uint)pbVar8 | 0x11) + 0x511072c);
      puVar46 = puVar32 + 4;
      out(*puVar48,uVar29);
      puVar33 = (uint *)((int)puVar33 + 1);
      *pcVar18 = *pcVar18 + (char)pcVar18;
      bVar6 = (byte)((uint)pcVar18 >> 8);
      puVar13 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar13 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar13 >> 8) | (byte)uVar9,
                                                          bVar5)) >> 8),bVar5 | bVar6);
      uVar20 = (undefined3)((uint)pcVar18 >> 8);
      bVar5 = (char)pcVar18 - *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar20,bVar5);
      *pcVar18 = *pcVar18 + bVar5;
      *(int *)((int)pcVar18 * 2) = (int)(*(int *)((int)pcVar18 * 2) + (int)puVar13);
      *(byte *)puVar33 = *(byte *)puVar33 + bVar5;
      *pcVar11 = *pcVar11 + bVar6;
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar9 = CONCAT31(uVar20,bVar5 + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar9;
      pbVar8 = (byte *)CONCAT22((short)(uVar9 >> 0x10),CONCAT11(bVar6 + in_AF,bVar5));
      *(byte *)puVar46 = (byte)*puVar46 + bVar26;
      *pbVar8 = *pbVar8 + bVar5;
      *pbVar8 = *pbVar8 + bVar5;
      bVar51 = CARRY1(bVar5,*pbVar8);
      puVar48 = (uint *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar5 + *pbVar8);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar13 = (byte)*puVar13 - (char)puVar33;
  }
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar48;
  bVar51 = false;
  piVar10 = (int *)CONCAT22(uVar30,CONCAT11(bVar5 | (byte)*puVar33,bVar26));
code_r0x00404d9a:
  do {
    puVar32 = puVar33;
    *puVar48 = (*puVar48 - (int)puVar48) - (uint)bVar51;
    bVar5 = (byte)((uint)piVar10 >> 8);
    uVar30 = (undefined2)((uint)piVar10 >> 0x10);
    bVar26 = (byte)piVar10;
    bVar6 = bVar5 + (byte)iRam00000c00;
    pbVar8 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar5,(byte)iRam00000c00));
    *(byte *)puVar32 = (byte)*puVar32 + bVar26;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 - (byte)*puVar46);
    bVar5 = *pbVar8;
    puVar48 = (uint *)(pbVar8 + (uint)CARRY1(bVar6,*pbVar8) + *(int *)pbVar8);
    *(byte *)puVar32 = (byte)*puVar32 + bVar26;
    cVar41 = ((bVar6 + bVar5) - (byte)*puVar32) + (byte)*puVar48;
    pcVar18 = (char *)CONCAT22(uVar30,CONCAT11(cVar41,bVar26));
    puVar40 = puVar50 + 1;
    uVar9 = in((short)puVar32);
    *puVar50 = uVar9;
    cVar4 = (char)puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + cVar4;
    uVar20 = (undefined3)((uint)puVar32 >> 8);
    bVar6 = (byte)puVar32 | (byte)*puVar46;
    pcVar24 = (char *)CONCAT31(uVar20,bVar6);
    *pcVar18 = *pcVar18 + '\x01';
    bVar5 = (cVar41 - *pcVar24) + (byte)*puVar48;
    pcVar18 = (char *)CONCAT22(uVar30,CONCAT11(bVar5,bVar26));
    puVar50 = puVar50 + 2;
    uVar9 = in((short)pcVar24);
    *puVar40 = uVar9;
    *(byte *)puVar48 = (byte)*puVar48 + cVar4;
    bVar6 = bVar6 | (byte)*puVar46;
    puVar33 = (uint *)CONCAT31(uVar20,bVar6);
    *pcVar18 = *pcVar18 + '\x01';
    bVar51 = bVar26 < *(byte *)((int)puVar33 + 2);
    cVar41 = bVar26 - *(byte *)((int)puVar33 + 2);
    piVar10 = (int *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar41);
  } while ((POPCOUNT(cVar41) & 1U) != 0);
  *(byte *)puVar48 = (byte)*puVar48 + cVar4;
  bVar26 = cVar4 + 0x7b;
  pbVar8 = (byte *)CONCAT31((int3)((uint)puVar48 >> 8),bVar26);
  *(byte *)((int)puVar13 + (int)pbVar8) = *(byte *)((int)puVar13 + (int)pbVar8) + bVar26;
  puVar48 = puVar46 + 1;
  uVar29 = SUB42(puVar33,0);
  out(*puVar46,uVar29);
  pbVar17 = (byte *)((int)puVar13 + -1);
  *pbVar8 = *pbVar8 + bVar26;
  bVar5 = bVar5 | (byte)*puVar33;
  piVar10 = (int *)CONCAT22(uVar30,CONCAT11(bVar5,cVar41));
  *pbVar8 = *pbVar8 + bVar26;
  *pbVar17 = *pbVar17 + bVar6;
  *pbVar17 = *pbVar17 ^ bVar26;
  *(byte *)puVar33 = (byte)*puVar33 + bVar5;
  *pbVar8 = *pbVar8 + bVar26;
  do {
    bVar27 = (byte)((uint)piVar10 >> 8);
    *(byte *)puVar50 = (byte)*puVar50 + bVar27;
    bVar5 = *pbVar8;
    bVar26 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar26;
    *(byte **)((int)puVar13 + 0x17) =
         (byte *)((int)puVar48 + (uint)CARRY1(bVar5,bVar26) + *(int *)((int)puVar13 + 0x17));
    *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
    uVar21 = (undefined3)((uint)pbVar8 >> 8);
    bVar26 = bVar26 | (byte)*puVar48;
    puVar50 = (uint *)((int)puVar50 + *(int *)(pcVar11 + -0x34));
    *(char *)CONCAT31(uVar21,bVar26) = *(char *)CONCAT31(uVar21,bVar26) + bVar26;
    bVar5 = bVar26 + 2;
    cVar4 = (char)((uint)puVar32 >> 8);
    bVar28 = (byte)piVar10;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      pbVar8 = (byte *)CONCAT31(uVar21,bVar26 + 0x15 + (0xfd < bVar26));
      if (0xec < bVar5 || CARRY1(bVar26 + 0x15,0xfd < bVar26)) {
        *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
      }
code_r0x00404e60:
      pcVar11 = pcVar11 + -*puVar33;
      bVar5 = *pbVar8;
      *pbVar8 = *pbVar8 + (byte)pbVar8;
      pbVar34 = (byte *)((int)puVar48 + (-(uint)CARRY1(bVar5,(byte)pbVar8) - *(int *)pbVar8));
      pbVar8 = pbVar8 + *(int *)pbVar8;
      puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_DS);
      *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
      *(char *)piVar10 = (char)*piVar10 + cVar4;
      bVar5 = *pbVar8;
      *pbVar8 = *pbVar8 + (byte)pbVar8;
      *(byte **)(pbVar17 + (int)puVar33) =
           (byte *)((int)puVar33 +
                   (uint)CARRY1(bVar5,(byte)pbVar8) + *(int *)(pbVar17 + (int)puVar33));
      pbVar8 = pbVar8 + 0x73061314;
      *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
      uVar21 = (undefined3)((uint)piVar10 >> 8);
      bVar28 = bVar28 | (byte)*puVar33;
      pcVar24 = (char *)CONCAT31(uVar21,bVar28);
      *pbVar8 = *pbVar8 + (char)pbVar8;
      cVar4 = (char)pbVar8 + 'o';
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar8 >> 8),cVar4);
      *pcVar18 = *pcVar18 + cVar4;
      out(*(undefined4 *)pbVar34,uVar29);
      uVar9 = *puVar33;
      *(byte *)puVar33 = (byte)*puVar33 + bVar28;
      pcVar18 = pcVar18 + (uint)CARRY1((byte)uVar9,bVar28) + *puVar50;
      *pcVar18 = *pcVar18 + (char)pcVar18;
      *pcVar24 = *pcVar24 + bVar6;
      puVar48 = (uint *)(pbVar34 + 8);
      out(*(undefined4 *)(pbVar34 + 4),uVar29);
      *(byte *)puVar33 = (byte)*puVar33 + bVar28;
      piVar10 = (int *)((uint)pcVar18 | *puVar50);
      pcVar24[0x390a0000] = pcVar24[0x390a0000] - bVar27;
      pbVar17 = (byte *)0x7000000;
      *(byte *)puVar50 = (byte)*puVar50 - bVar27;
      *piVar10 = *piVar10 + (int)piVar10;
      puVar46 = (uint *)CONCAT31(uVar21,bVar28 | *(byte *)((int)piVar10 + (int)pcVar24));
      *(char *)((int)piVar10 * 2) = *(char *)((int)piVar10 * 2) - bVar27;
      cRam07000000 = cRam07000000 + bVar27;
      piVar10 = (int *)((uint)piVar10 | 0x777b02);
      pbVar8 = (byte *)((int)puVar50 + (int)pcVar11 * 2);
      bVar51 = SCARRY1(*pbVar8,(char)piVar10);
      *pbVar8 = *pbVar8 + (char)piVar10;
      bVar5 = *pbVar8;
      *(char *)piVar10 = (char)*piVar10;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
    bVar26 = bVar26 + 0x71;
    pbVar8 = (byte *)CONCAT31(uVar21,bVar26);
    *pbVar8 = *pbVar8;
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    *piVar10 = (*piVar10 - (int)pbVar8) - (uint)(0x90 < bVar5);
    uVar9 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + bVar26;
    if (!CARRY1((byte)uVar9,bVar26)) goto code_r0x00404e60;
    *pbVar8 = *pbVar8 + bVar26;
    uVar30 = (undefined2)((uint)piVar10 >> 0x10);
    bVar27 = bVar27 | *pbVar8;
    pbVar8 = pbVar8 + -*(int *)pbVar8;
    *pbVar17 = *pbVar17 + bVar27;
    cVar41 = bVar28 - *(byte *)((int)puVar33 + 2);
    piVar10 = (int *)CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar27,bVar28)) >> 8),cVar41);
  } while ((POPCOUNT(cVar41) & 1U) != 0);
  cVar37 = (char)pbVar8;
  *pbVar8 = *pbVar8 + cVar37;
  uVar21 = (undefined3)((uint)pbVar8 >> 8);
  pcVar18 = (char *)CONCAT31(uVar21,cVar37 + '{');
  out(*puVar48,uVar29);
  *pcVar18 = *pcVar18 + cVar37 + '{';
  bVar26 = cVar37 + 0x7e;
  pbVar8 = (byte *)CONCAT31(uVar21,bVar26);
  puVar48 = puVar46 + 3;
  out(puVar46[2],uVar29);
  pbVar17 = (byte *)((int)puVar13 + -2);
  *pbVar8 = *pbVar8 + bVar26;
  bVar27 = bVar27 | (byte)*puVar33;
  puVar46 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27,cVar41));
  *pbVar8 = *pbVar8 + bVar26;
  *pbVar17 = *pbVar17 + bVar6;
  *pbVar17 = *pbVar17 ^ bVar26;
  *(byte *)puVar33 = (byte)*puVar33 + bVar27;
  *pbVar8 = *pbVar8 + bVar26;
  *pbVar8 = *pbVar8 + cVar4;
  bVar5 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar26;
  puVar13[6] = (uint)((int)puVar48 + (uint)CARRY1(bVar5,bVar26) + puVar13[6]);
  *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
  bVar26 = bVar26 | (byte)*puVar48;
  puVar50 = (uint *)((int)puVar50 + *(int *)(pcVar11 + -0x33));
  *(char *)CONCAT31(uVar21,bVar26) = *(char *)CONCAT31(uVar21,bVar26) + bVar26;
  bVar51 = SCARRY1(bVar26,'\x02');
  bVar5 = bVar26 + 2;
  piVar10 = (int *)CONCAT31(uVar21,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar10 = (char)*piVar10 + bVar5;
    return CONCAT31(uVar21,bVar26 + 0x71);
  }
code_r0x00404ebf:
  bVar26 = (byte)piVar10;
  uVar21 = (undefined3)((uint)piVar10 >> 8);
  if (bVar5 != 0 && bVar51 == (char)bVar5 < '\0') {
    *(byte *)piVar10 = (char)*piVar10 + bVar26;
    puVar48[(int)puVar50 * 2] =
         (uint)((int)puVar33 + (uint)(0xd2 < bVar26) + puVar48[(int)puVar50 * 2]);
    return CONCAT31(uVar21,bVar26 + 0x2d);
  }
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  bVar5 = *pbVar17;
  *puVar48 = (uint)(*puVar48 + (int)piVar10);
  bVar28 = (byte)((uint)puVar46 >> 8);
  *(byte *)piVar10 = (char)*piVar10 - bVar28;
  *(byte *)piVar10 = (char)*piVar10 + bVar26;
  pbVar8 = (byte *)(CONCAT31(uVar20,bVar6 | bVar5) - *(int *)pbVar17);
  puVar40 = (uint *)CONCAT31(uVar21,bVar26 + 6);
  *(uint *)(pbVar17 + (int)puVar48 * 2) =
       (int)puVar40 + (uint)(0xf9 < bVar26) + *(int *)(pbVar17 + (int)puVar48 * 2);
  *(byte *)puVar46 = (byte)*puVar46 ^ bVar26 + 6;
  bVar26 = (byte)puVar46;
  *pbVar8 = *pbVar8 + bVar26;
  puVar13 = puVar48 + 1;
  uVar30 = SUB42(pbVar8,0);
  out(*puVar48,uVar30);
  *puVar46 = *puVar46 ^ (uint)puVar40;
  *pbVar8 = *pbVar8 + bVar26;
  puVar32 = (uint *)(pbVar17 + -*(int *)pbVar17);
  *(uint *)((int)puVar50 + 0x31) = *(uint *)((int)puVar50 + 0x31) | (uint)pcVar11;
  *puVar40 = *puVar40 + (int)puVar40;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar28 | (byte)*puVar32,bVar26)
                            );
  *(byte **)(pbVar8 + 0x6e) = (byte *)(*(int *)(pbVar8 + 0x6e) + (int)puVar13);
  piVar10 = (int *)((uint)puVar40 | *puVar40);
  bVar6 = (byte)puVar32;
  *(byte *)puVar50 = (byte)*puVar50 - bVar6;
  bVar5 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar26;
  if (CARRY1(bVar5,bVar26)) {
    *piVar10 = (int)(*piVar10 + (int)piVar10);
    bVar5 = pbVar8[0x11];
    uVar29 = (undefined2)((uint)puVar32 >> 0x10);
    out(*puVar13,uVar30);
    puVar46 = (uint *)((int)puVar46 + 1);
    *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
    bVar31 = (byte)((uint)puVar32 >> 8) | bVar5 | *pbVar8;
    pcVar18 = (char *)((int)piVar10 + -0x21000001);
    bVar5 = (byte)pcVar18 | 0x11;
    uVar20 = (undefined3)((uint)pcVar18 >> 8);
    cVar4 = bVar5 - 7;
    pcVar24 = (char *)CONCAT31(uVar20,cVar4);
    *puVar50 = (uint)(pcVar24 + (uint)(bVar5 < 7) + *puVar50);
    puVar13 = puVar48 + 3;
    out(puVar48[2],uVar30);
    pbVar8 = pbVar8 + 1;
    *pcVar24 = *pcVar24 + cVar4;
    bVar28 = (byte)((uint)pcVar18 >> 8);
    bVar27 = bVar6 | bVar28;
    bVar26 = cVar4 - *pcVar24;
    bVar5 = *(byte *)puVar46;
    *(byte *)puVar46 = *(byte *)puVar46 + bVar26;
    *(char *)CONCAT31(uVar20,bVar26) =
         *(char *)CONCAT31(uVar20,bVar26) + bVar26 + CARRY1(bVar5,bVar26);
    *pbVar8 = *pbVar8 + bVar26;
    *(byte *)puVar13 = (byte)*puVar13 + bVar27;
    bVar5 = (byte)((uint)pbVar8 >> 8);
    *(byte *)puVar46 = *(byte *)puVar46 + bVar26 + CARRY1((byte)pbVar8,bVar5);
    piVar10 = (int *)CONCAT31(uVar20,bVar26);
    *(byte *)piVar10 = (char)*piVar10 + bVar26;
    pbVar8 = (byte *)CONCAT22((short)((uint)pbVar8 >> 0x10),
                              CONCAT11(bVar5 + bVar28,(byte)pbVar8 + bVar5));
    puVar32 = (uint *)CONCAT22(uVar29,CONCAT11(bVar31 + *(char *)(CONCAT31((int3)(CONCAT22(uVar29,
                                                  CONCAT11(bVar31,bVar6)) >> 8),bVar27) + 0x76),
                                               bVar27));
    puStack_4._0_2_ = puStack_10._0_2_;
code_r0x00404fa4:
    *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
    pcVar18 = (char *)(CONCAT31((int3)((uint)piVar10 >> 8),(char)piVar10 + '(') ^ *puVar46);
    cVar37 = (char)puVar46;
    *pbVar8 = *pbVar8 + cVar37;
    uVar30 = (undefined2)((uint)puVar32 >> 0x10);
    cVar38 = (char)puVar32;
    cVar42 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x75);
    *pcVar18 = *pcVar18 + (char)pcVar18;
    cVar4 = (char)pcVar18 + 'o';
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar4);
    *pcVar18 = *pcVar18 + cVar4;
    cVar43 = (char)((uint)puVar46 >> 8);
    *pcVar11 = *pcVar11 - cVar43;
    pbVar8[1] = pbVar8[1] + cVar37;
    pcVar18 = pcVar18 + -0x757b021b;
    cVar4 = (char)pcVar18;
    *pcVar18 = *pcVar18 + cVar4;
    uVar20 = (undefined3)((uint)pcVar18 >> 8);
    cVar41 = cVar4 + 'o';
    pcVar18 = (char *)CONCAT31(uVar20,cVar41);
    pbVar34 = pbVar8 + 2;
    *pcVar18 = *pcVar18 + cVar41;
    iVar16 = CONCAT22(uVar30,CONCAT11(cVar42 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar42,cVar38)) +
                                                        0x76),cVar38));
    *pcVar18 = *pcVar18 + cVar41;
    pcVar18 = (char *)CONCAT31(uVar20,cVar4 + -0x22);
    puVar48 = (uint *)((int)puVar50 + 1);
    *(byte *)puVar50 = (byte)*puVar13;
    *pcVar18 = *pcVar18 + cVar4 + -0x22;
    *(byte *)((int)puVar46 + (int)pcVar18) =
         *(byte *)((int)puVar46 + (int)pcVar18) - (char)((uint)pbVar34 >> 8);
    *pbVar34 = *pbVar34 + cVar37;
    bVar26 = cVar43 - pbVar8[4];
    pbVar17 = (byte *)((int)puVar13 + 5);
    out(*(undefined4 *)((int)puVar13 + 1),(short)pbVar34);
    puVar13 = (uint *)((uint)(pcVar18 + *(int *)(pcVar18 + iVar16)) ^ 0x280a0001);
    *(byte *)puVar13 = (byte)*puVar13 << 1 | (char)(byte)*puVar13 < '\0';
    *pbVar17 = *pbVar17 + (char)puVar13;
    pbVar17 = pbVar17 + *(int *)(pbVar8 + -0x5c);
    pbVar8 = (byte *)((uint)puVar13 | *puVar13);
    *pbVar17 = *pbVar17 + (char)pbVar8;
    puVar32 = (uint *)CONCAT31((int3)((uint)iVar16 >> 8),cVar38 - (char)pbVar34);
    bVar5 = *pbVar8;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar26 + *pbVar8,cVar37));
    iVar16 = *(int *)pbVar8;
    *pbVar34 = *pbVar34 + cVar37;
    cVar4 = (char)(pbVar8 + (uint)CARRY1(bVar26,bVar5) + iVar16) + 'r';
    puVar50 = (uint *)CONCAT31((int3)((uint)(pbVar8 + (uint)CARRY1(bVar26,bVar5) + iVar16) >> 8),
                               cVar4);
    pbVar8 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),CONCAT11(10,(char)pbVar34));
    *(char *)(puVar50 + 10) = (char)puVar50[10] + '\n';
    *pbVar17 = *pbVar17 + cVar4;
    puVar13 = (uint *)(pbVar17 + *(int *)(pbVar8 + -0x5e));
    uVar9 = *puVar50;
    cVar4 = (char)((uint)puVar50 | uVar9);
    *(byte *)puVar13 = (byte)*puVar13 + cVar4;
    uVar20 = (undefined3)(((uint)puVar50 | uVar9) >> 8);
    cVar41 = cVar4 + (byte)*puVar32;
    puVar50 = (uint *)CONCAT31(uVar20,cVar41);
    if (SCARRY1(cVar4,(byte)*puVar32) == cVar41 < '\0') goto code_r0x00405090;
    *(byte *)puVar50 = (byte)*puVar50 + cVar41;
    piVar10 = (int *)CONCAT31(uVar20,cVar41 + '\x02');
    puVar50 = puVar48;
  }
  else {
    out(2,(char)piVar10);
    if ((POPCOUNT(*pbVar8) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar20 = (undefined3)((uint)piVar10 >> 8);
  cVar4 = (char)piVar10 + '}';
  pbVar17 = (byte *)CONCAT31(uVar20,cVar4);
  pbVar8[(int)pbVar17] = pbVar8[(int)pbVar17] + cVar4;
  pbVar8[0x280a0000] = pbVar8[0x280a0000] - (char)((uint)piVar10 >> 8);
  bVar5 = (byte)puVar46 & 7;
  *pbVar17 = *pbVar17 << bVar5 | *pbVar17 >> 8 - bVar5;
  *(byte *)puVar13 = (byte)*puVar13 + cVar4;
  cVar37 = (char)puVar32 - (byte)*puVar13;
  uVar30 = (undefined2)((uint)puVar32 >> 0x10);
  cVar43 = (char)((uint)puVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar32 >> 8),cVar37) + 0x7c);
  pcVar18 = (char *)CONCAT22(uVar30,CONCAT11(cVar43,cVar37));
  *pbVar17 = *pbVar17 + cVar4;
  bVar26 = (char)piVar10 + 0xa7U & *pbVar8;
  puVar48 = (uint *)((int)puVar50 + *(int *)(pcVar11 + 0x7c));
  *(char *)CONCAT31(uVar20,bVar26) = *(char *)CONCAT31(uVar20,bVar26) + bVar26;
  bVar26 = bVar26 + 0x2a;
  pbVar17 = (byte *)CONCAT31(uVar20,bVar26);
  *pbVar17 = *pbVar17 + bVar26;
  *pcVar18 = *pcVar18 + cVar37;
  *pbVar8 = *pbVar8 ^ bVar26;
  *pcVar18 = *pcVar18 + bVar26;
  bVar5 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar26;
  cVar4 = (bVar26 - *pbVar17) - CARRY1(bVar5,bVar26);
  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar8;
  cVar43 = cVar43 + pcVar18[0x7b];
  *(char *)CONCAT31(uVar20,cVar4) = *(char *)CONCAT31(uVar20,cVar4) + cVar4;
  pcVar18 = (char *)CONCAT31(uVar20,cVar4 + 'o');
  *pcVar18 = *pcVar18 + cVar4 + 'o';
  pcVar18 = pcVar18 + 0x2ed7fde6;
  cVar41 = (char)pcVar18;
  *pcVar18 = *pcVar18 + cVar41;
  cVar4 = *(char *)(CONCAT22(uVar30,CONCAT11(cVar43,cVar37)) + 0x7b);
  *pcVar18 = *pcVar18 + cVar41;
  piVar10 = (int *)(CONCAT31((int3)((uint)pcVar18 >> 8),cVar41 + 'o') + 0x6f060000);
  *piVar10 = *piVar10 + (int)piVar10;
  uVar21 = (undefined3)((uint)pbVar8 >> 8);
  bVar26 = (byte)pbVar8 | (byte)*puVar13;
  pbVar34 = (byte *)CONCAT31(uVar21,bVar26);
  uVar9 = CONCAT22(uVar30,CONCAT11(cVar43 + cVar4,cVar37)) | (uint)puVar13;
  uVar20 = (undefined3)((uint)piVar10 >> 8);
  bVar5 = (byte)piVar10 | *pbVar34;
  pbVar17 = (byte *)CONCAT31(uVar20,bVar5);
  cVar4 = (byte)puVar46 - bVar26;
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),cVar4);
  *pbVar17 = *pbVar17 + bVar5;
  puVar50 = puVar13 + 1;
  out(*puVar13,(short)pbVar34);
  *pbVar17 = bVar5;
  *pbVar34 = *pbVar34 + cVar4;
  puVar13 = puVar13 + 2;
  out(*puVar50,(short)pbVar34);
  *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
  puVar32 = (uint *)(CONCAT31((int3)(uVar9 >> 8),(char)uVar9 - (char)((uint)pbVar8 >> 8)) |
                    (uint)puVar13);
  pbVar8 = (byte *)CONCAT31(uVar21,(bVar26 | (byte)*puVar13) + (byte)*puVar48);
  cVar4 = bVar5 - (byte)*puVar48;
  puVar50 = (uint *)CONCAT31(uVar20,cVar4 - *(char *)CONCAT31(uVar20,cVar4));
code_r0x00405090:
  *puVar50 = (uint)(pbVar8 + *puVar50);
  cVar4 = (char)puVar50;
  *(byte *)puVar50 = (byte)*puVar50 + cVar4;
  *(byte *)puVar50 = (byte)*puVar50 + cVar4;
  *(byte *)puVar50 = (byte)*puVar50 + cVar4;
  *puVar46 = *puVar46 - (int)pcVar11;
  uVar9 = *puVar13;
  bVar5 = (byte)pbVar8;
  *(byte *)puVar13 = (byte)*puVar13 + bVar5;
  *(byte *)puVar50 = (byte)*puVar50 + cVar4 + CARRY1((byte)uVar9,bVar5);
  *(byte *)puVar46 = (byte)*puVar46 + cVar4;
  uVar9 = *puVar32;
  *(byte *)puVar32 = (byte)*puVar32 + 0x72;
  *(byte *)puVar32 = (byte)*puVar32;
  cVar4 = (char)((uint)pbVar8 >> 8);
  if (SCARRY1((byte)uVar9,'r')) {
    puVar13 = (uint *)((int)puVar13 + *(int *)(pbVar8 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar50;
      uVar20 = (undefined3)((uint)puVar50 >> 8);
      cVar41 = (char)puVar50 + (byte)*puVar32;
      pcVar18 = (char *)CONCAT31(uVar20,cVar41);
      puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                 CONCAT11((char)((uint)puVar32 >> 8) +
                                          *(byte *)((int)puVar32 + 0x7b),(char)puVar32));
      *pcVar18 = *pcVar18 + cVar41;
      in_AF = 9 < (cVar41 + 0x6fU & 0xf) | in_AF;
      uVar9 = CONCAT31(uVar20,cVar41 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar9;
      piVar10 = (int *)CONCAT22((short)(uVar9 >> 0x10),
                                CONCAT11((char)((uint)puVar50 >> 8) + in_AF,bVar6));
      *piVar10 = *piVar10 + (int)piVar10;
      uVar20 = (undefined3)((uint)piVar10 >> 8);
      bVar6 = bVar6 | *(byte *)(piVar10 + 0x354a);
      bVar6 = bVar6 - *(char *)CONCAT31(uVar20,bVar6);
      pbVar17 = (byte *)CONCAT31(uVar20,bVar6);
      bVar26 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar6;
      puVar13 = (uint *)((int)puVar13 + (-(uint)CARRY1(bVar26,bVar6) - *(int *)pbVar17));
      puVar50 = (uint *)(pbVar17 + 0xfc00);
      *pbVar8 = *pbVar8 + cVar4;
      uVar9 = *puVar50;
      bVar26 = (byte)puVar50;
      *(byte *)puVar50 = (byte)*puVar50 + bVar26;
      uVar14 = (uint)CARRY1((byte)uVar9,bVar26);
      uVar9 = *puVar32;
      uVar2 = *puVar32;
      *puVar32 = (uint)((byte *)(uVar2 + (int)puVar50) + uVar14);
      if (!CARRY4(uVar9,(uint)puVar50) && !CARRY4(uVar2 + (int)puVar50,uVar14)) break;
      *(byte *)puVar50 = (byte)*puVar50 + bVar26;
    }
  }
  uVar9 = (uint)puVar50 | *puVar50;
  uVar30 = SUB42(pbVar8,0);
  *(byte *)puVar13 = (byte)*puVar13 + (char)uVar9;
  piVar10 = (int *)(uVar9 + 0xc1872);
  if (SCARRY4(uVar9,0xc1872)) {
    cVar41 = (char)piVar10;
    *(char *)piVar10 = *(char *)piVar10 + cVar41;
    *pbVar8 = *pbVar8 + cVar41;
    *(char *)piVar10 = *(char *)piVar10 + cVar41;
    *(byte *)puVar32 = (byte)*puVar32 + (char)puVar46;
    *(char *)piVar10 = *(char *)piVar10 + cVar41;
    *(char *)((int)piVar10 * 2) = *(char *)((int)piVar10 * 2) + bVar5;
    puVar50 = puVar13;
    goto code_r0x00405117;
  }
  do {
    uVar9 = *puVar13;
    bVar5 = (byte)piVar10;
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    if (CARRY1((byte)uVar9,bVar5)) {
      *piVar10 = (int)(*piVar10 + (int)piVar10);
      uVar20 = (undefined3)((uint)puVar46 >> 8);
      bVar26 = (byte)puVar46 | bRam396f1609;
      *piVar10 = (int)(*piVar10 + (int)piVar10);
      puVar46 = (uint *)CONCAT31(uVar20,bVar26 | *(byte *)CONCAT31(uVar20,bVar26));
      uVar20 = (undefined3)((uint)piVar10 >> 8);
      bVar5 = bVar5 | *pbVar8;
      pcVar18 = (char *)CONCAT31(uVar20,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        puVar50 = puVar13 + 1;
        out(*puVar13,uVar30);
        uVar9 = CONCAT22((short)((uint)piVar10 >> 0x10),(ushort)bVar5);
        *(byte *)puVar50 = (byte)*puVar50 + bVar5;
        pcVar18 = (char *)(uVar9 | 8);
        cVar41 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x7a);
        puVar40 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(cVar41,(char)puVar32));
        *pcVar18 = *pcVar18 + (char)pcVar18;
        cVar4 = (char)pcVar18 + 'o';
        piVar10 = (int *)CONCAT31((int3)(uVar9 >> 8),cVar4);
        *(char *)piVar10 = (char)*piVar10 + cVar4;
        *(byte *)puVar46 = (byte)*puVar46 + 1;
        puVar13 = puVar13 + 2;
        out(*puVar50,uVar30);
        pbVar8 = (byte *)((uint)pbVar8 ^ uRam08122c04);
        iVar16 = CONCAT31((int3)((uint)(*piVar10 * 0x17070600) >> 8),2);
        *(char *)(iVar16 * 2) = *(char *)(iVar16 * 2) - cVar41;
        do {
          bVar5 = (byte)iVar16;
          *(byte *)puVar13 = (byte)*puVar13 + bVar5;
          bVar51 = CARRY1(bVar5,(byte)*puVar40);
          uVar20 = (undefined3)((uint)iVar16 >> 8);
          cVar4 = bVar5 + (byte)*puVar40;
          pbVar17 = (byte *)CONCAT31(uVar20,cVar4);
          uVar30 = in_DS;
          uVar29 = uStack_50;
          if (SCARRY1(bVar5,(byte)*puVar40) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar17 = *pbVar17 + cVar4;
          uVar9 = CONCAT31(uVar20,cVar4 + '\'') + 0x1ebd9f3;
          uStack_54 = (undefined1)puStack_4._0_2_;
          uStack_53 = (undefined1)((ushort)puStack_4._0_2_ >> 8);
          piVar10 = (int *)(uVar9 ^ 0x73060000);
          puVar46 = (uint *)((int)puVar46 + 1);
          *piVar10 = (int)(*piVar10 + (int)piVar10);
          puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                     CONCAT11((byte)((uint)puVar40 >> 8) | pcVar11[0x7e],
                                              (char)puVar40));
          cVar4 = (char)uVar9;
          *(char *)piVar10 = (char)*piVar10 + cVar4;
          uVar9 = CONCAT31((int3)((uint)piVar10 >> 8),cVar4 + '\x02');
          bVar51 = 0xd9f2d2da < uVar9;
          iVar16 = uVar9 + 0x260d2d25;
          pcVar18 = pcVar11;
          do {
            uVar20 = (undefined3)((uint)iVar16 >> 8);
            bVar26 = (char)iVar16 + -2 + bVar51;
            pbVar17 = (byte *)CONCAT31(uVar20,bVar26);
            bVar5 = *pbVar17;
            *pbVar17 = *pbVar17 + bVar26;
            bVar6 = (byte)puVar40;
            uStack_50 = puStack_4._0_2_;
            if (CARRY1(bVar5,bVar26)) {
              *pbVar17 = *pbVar17 + bVar26;
              puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                         CONCAT11((byte)((uint)puVar40 >> 8) | pcVar18[0x7f],bVar6))
              ;
              *pbVar17 = *pbVar17 + bVar26;
              pbVar17 = (byte *)CONCAT31(uVar20,bVar26 + 0x2a);
              *pbVar17 = *pbVar17 + bVar26 + 0x2a;
              *(byte *)puVar40 = (byte)*puVar40 + (char)pbVar8;
              uVar30 = in_DS;
              while( true ) {
                in_DS = uVar30;
                bVar26 = (byte)pbVar17;
                *pbVar8 = *pbVar8 ^ bVar26;
                *pbVar8 = *pbVar8 + (char)puVar40;
                *pbVar17 = *pbVar17 + bVar26;
                *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)pbVar8 >> 8);
                bVar5 = *pbVar17;
                *pbVar17 = *pbVar17 + bVar26;
                uVar9 = *puVar40;
                uVar2 = *puVar40;
                *puVar40 = (uint)(pbVar17 + uVar2 + CARRY1(bVar5,bVar26));
                uVar20 = (undefined3)((uint)pbVar17 >> 8);
                if (CARRY4(uVar9,(uint)pbVar17) ||
                    CARRY4((uint)(pbVar17 + uVar2),(uint)CARRY1(bVar5,bVar26))) break;
                *(byte *)puVar13 = (byte)*puVar13 + bVar26;
                pcVar24 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                           CONCAT11((char)((uint)puVar46 >> 8) + *pbVar17,
                                                    (char)puVar46));
                *(byte *)puVar13 = (byte)*puVar13 + bVar26;
                piVar10 = (int *)CONCAT31(uVar20,bVar26 | (byte)*puVar40);
                puVar46 = puVar13;
                while( true ) {
                  puVar13 = puVar46 + 1;
                  out(*puVar46,(short)pbVar8);
                  pbVar8 = pbVar8 + 1;
                  *piVar10 = (int)(*piVar10 + (int)piVar10);
                  bVar6 = (byte)((uint)pcVar24 >> 8) | *pbVar8;
                  uVar20 = (undefined3)((uint)piVar10 >> 8);
                  bVar26 = (byte)piVar10 ^ *pbVar8;
                  pcVar19 = (char *)CONCAT31(uVar20,bVar26);
                  cRam282b0000 = cRam282b0000 - bVar6;
                  *pcVar19 = *pcVar19 + bVar26;
                  pcVar11 = pcVar18 + -*(int *)pbVar8;
                  uStack_54 = (undefined1)in_DS;
                  uStack_53 = (undefined1)((ushort)in_DS >> 8);
                  bVar5 = *(byte *)((int)puVar48 + 0x17);
                  *pcVar19 = *pcVar19 + bVar26;
                  puVar46 = (uint *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                                             CONCAT11(bVar6 + bVar5 | *pbVar8,(char)pcVar24));
                  *(byte *)puVar40 = (byte)*puVar40 + (char)puVar40;
                  *(byte *)((int)pcVar19 * 2) = *(byte *)((int)pcVar19 * 2) ^ bVar26;
                  in_AF = 9 < (bVar26 & 0xf) | in_AF;
                  bVar26 = bVar26 + in_AF * -6;
                  pbVar17 = (byte *)CONCAT31(uVar20,bVar26 + (0x9f < bVar26 | in_AF * (bVar26 < 6))
                                                             * -0x60);
                  *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
                  *(char *)((int)pbVar17 * 2) =
                       *(char *)((int)pbVar17 * 2) + (char)((uint)pbVar8 >> 8);
                  bVar51 = CARRY1((byte)*puVar46,(byte)pbVar8);
                  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar8;
                  uVar30 = in_DS;
                  uVar29 = puStack_4._0_2_;
GenerateStatusText:
                  in_DS = uVar29;
                  pcVar18 = pcVar11;
                  uStack_50 = in_DS;
                  if (!bVar51) break;
                  *pbVar17 = *pbVar17 + (char)pbVar17;
                  iVar16 = CONCAT31((int3)((uint)puVar46 >> 8),(byte)puVar46 | *pbVar8);
                  uVar30 = (undefined2)((uint)puVar40 >> 0x10);
                  cVar37 = (char)((uint)puVar40 >> 8) + *(byte *)((int)puVar40 + 0x7d);
                  *pbVar17 = *pbVar17 + (char)pbVar17;
                  *(byte *)puVar48 = (byte)*puVar48 - (char)((uint)puVar46 >> 8);
                  iVar16 = iVar16 - *(int *)(iVar16 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar30,CONCAT11(cVar37,(char)puVar40)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar13,(short)pbVar8);
                  pbVar8 = (byte *)CONCAT22(uStack_52,CONCAT11(uStack_53,uStack_54));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar46 = puVar13 + 2;
                  out(puVar13[1],CONCAT11(uStack_53,uStack_54));
                  pcVar18 = pcVar11 + 1;
                  cVar41 = (char)iVar16;
                  pcVar24 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                             CONCAT11((byte)((uint)iVar16 >> 8) |
                                                      *(byte *)((int)puVar48 + 0x46),cVar41));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_4._0_2_ = CONCAT11(uStack_53,uStack_54);
                  uVar20 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar46,0xf0)) >> 8);
                  piVar10 = (int *)CONCAT31(uVar20,0x5f);
                  puVar48 = (uint *)((int)puVar48 + 1);
                  *piVar10 = (int)(*piVar10 + (int)piVar10);
                  puVar40 = (uint *)CONCAT22(uVar30,CONCAT11(cVar37 + cVar4 | (byte)puVar13[-0x1e],
                                                             (char)puVar40));
                  *(char *)piVar10 = (char)*piVar10 + '_';
                  puVar13 = (uint *)CONCAT31(uVar20,0x8c);
                  puVar46[(int)puVar48 * 2] = (uint)(pbVar8 + puVar46[(int)puVar48 * 2]);
                  uVar9 = *puVar46;
                  *(byte *)puVar46 = (byte)*puVar46 + 0x8c;
                  if ((byte)uVar9 < 0x74) {
                    *pbVar8 = *pbVar8 + cVar41;
                    *(byte *)puVar40 = (byte)*puVar40 >> 1;
                    *(char *)puVar13 = (char)*puVar13 + -0x74;
                    *puVar13 = (uint)(pcVar18 + *puVar13);
                    *puVar13 = *puVar13 << 1 | (uint)((int)*puVar13 < 0);
                    *pbVar8 = *pbVar8 + cVar41;
                    pcVar11[2] = pcVar11[2] - cVar41;
                    *pbVar8 = *pbVar8 + cVar41;
                    pbVar17 = (byte *)CONCAT31(uVar20,0x83);
                    puVar13 = puVar40;
                    goto code_r0x00405312;
                  }
                  *puVar13 = (uint)(*puVar13 + (int)puVar13);
                  piVar10 = (int *)(CONCAT31(uVar20,(byte)puVar13[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar13[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar10 = (int *)((int)piVar10 + *puVar46);
                }
              }
              *pbVar8 = *pbVar8 + bVar26;
              *(byte *)puVar40 = (byte)*puVar40 - (char)pbVar8;
              *pbVar17 = *pbVar17 + bVar26;
              pbVar17 = (byte *)CONCAT31(uVar20,bVar26 | (byte)*puVar40);
            }
            else {
              cVar4 = (char)puVar46;
              *pbVar8 = *pbVar8 + cVar4;
              *(byte **)pbVar17 = pbVar8 + *(int *)pbVar17;
              *pbVar17 = *pbVar17 + bVar26;
              bVar26 = bVar26 + *pbVar17;
              pbVar17 = (byte *)CONCAT31(uVar20,bVar26);
              if (-1 < (char)bVar26) {
                *(byte *)puVar40 = (byte)*puVar40 + bVar6;
                out(*puVar13,(short)pbVar8);
                pbVar8 = pbVar8 + 1;
                *pbVar17 = *pbVar17 + bVar26;
                puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                           bVar6 | (byte)((uint)iVar16 >> 8));
                cVar41 = bVar26 - (byte)*puVar46;
                pcVar11 = (char *)CONCAT31(uVar20,cVar41);
                *pcVar11 = *pcVar11 + cVar41 + (bVar26 < (byte)*puVar46);
                *pbVar8 = *pbVar8 + cVar41;
                pcVar11 = (char *)((int)pcVar11 * 2 + 0x79);
                *pcVar11 = *pcVar11 + (char)((uint)pbVar8 >> 8);
                pbVar17 = (byte *)in((short)pbVar8);
                puVar13 = puVar13 + 1;
              }
              *(byte *)puVar13 = (byte)*puVar13 + cVar4;
              *pbVar17 = *pbVar17 + (char)pbVar17;
              *pbVar17 = *pbVar17 + (char)pbVar17;
              uStack_54 = (undefined1)in_DS;
              uStack_53 = (undefined1)((ushort)in_DS >> 8);
              bVar5 = *pbVar17;
              bVar6 = (byte)((uint)puVar46 >> 8);
              bVar28 = bVar6 + *pbVar17;
              iVar16 = *(int *)pbVar17;
              *pbVar8 = *pbVar8 + cVar4;
              bVar26 = (char)(pbVar17 + (uint)CARRY1(bVar6,bVar5) + iVar16) - (byte)*puVar40;
              pbVar17 = (byte *)CONCAT31((int3)((uint)(pbVar17 + (uint)CARRY1(bVar6,bVar5) + iVar16)
                                               >> 8),bVar26);
              *(byte *)puVar40 = (byte)*puVar40 ^ bVar26;
              *pcVar18 = *pcVar18 + (char)puVar40;
              *pbVar17 = *pbVar17 + bVar26;
              *pbVar17 = *pbVar17 + bVar26;
              *pbVar17 = *pbVar17 + bVar26;
              puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                         CONCAT11(bVar28 + *pbVar17,cVar4));
              pbVar17 = pbVar17 + (uint)CARRY1(bVar28,*pbVar17) + *(int *)pbVar17;
              *pbVar8 = *pbVar8 + cVar4;
              puVar13 = (uint *)((int)puVar13 + *(int *)(pbVar8 + 0x3e));
            }
            *(byte *)puVar13 = (byte)*puVar13 + (char)pbVar17;
            cVar4 = (char)pbVar17 + 'r';
            puVar13 = (uint *)((int)puVar13 + -1);
            uVar9 = CONCAT31((int3)((uint)pbVar17 >> 8),cVar4);
            *(byte *)puVar13 = *(byte *)puVar13 + cVar4;
            bVar51 = 0xfff38f8d < uVar9;
            iVar16 = uVar9 + 0xc7072;
            pcVar11 = pcVar18;
          } while (SCARRY4(uVar9,0xc7072));
        } while( true );
      }
      *pcVar18 = *pcVar18 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar17 = (byte *)CONCAT31(uVar20,bVar5);
      bVar26 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar5;
      uVar20 = (undefined3)
               ((uint)(pbVar17 + (uint)CARRY1(bVar26,bVar5) + *(int *)((int)puVar46 + (int)pbVar8))
               >> 8);
      cVar41 = (char)(pbVar17 + (uint)CARRY1(bVar26,bVar5) + *(int *)((int)puVar46 + (int)pbVar8)) +
               'E';
      pcVar18 = (char *)CONCAT31(uVar20,cVar41);
      *pcVar18 = *pcVar18 + cVar41;
      cVar41 = cVar41 + *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar20,cVar41);
      *pcVar18 = *pcVar18 + cVar41;
      puVar50 = (uint *)CONCAT31(uVar20,cVar41 + *pcVar18);
      *(char *)puVar50 = (char)*puVar50 + cVar41 + *pcVar18;
      pbVar17 = (byte *)((uint)puVar50 | *puVar50);
      bVar5 = *pbVar17;
      bVar26 = (byte)pbVar17;
      *pbVar17 = *pbVar17 + bVar26;
      piVar10 = (int *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar26 + CARRY1(bVar5,bVar26));
      puVar50 = puVar13;
code_r0x00405117:
      *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
      puVar32 = (uint *)((int)puVar32 - *puVar32);
      puVar13 = puVar50 + 1;
      out(*puVar50,uVar30);
    }
    *pbVar8 = *pbVar8 + (char)puVar46;
    bVar51 = puVar32 < (uint *)*piVar10;
    puVar32 = (uint *)((int)puVar32 - *piVar10);
    bVar5 = (byte)((uint)puVar46 >> 8);
    *(byte *)((int)puVar48 + 0x39) = (*(byte *)((int)puVar48 + 0x39) - bVar5) - bVar51;
    *piVar10 = (int)(*piVar10 + (int)piVar10);
    uVar9 = *puVar32;
    *(int *)((int)puVar48 + 0x39) = *(int *)((int)puVar48 + 0x39) - (int)pcVar11;
    *piVar10 = (int)(*piVar10 + (int)piVar10);
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar9 | (byte)*puVar32,(char)puVar46));
    *(char *)(piVar10 + 10) = (char)piVar10[10] + cVar4;
  } while( true );
code_r0x004052ee:
  *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
  bVar5 = (char)piVar10 + 0x28;
  pbVar17 = (byte *)CONCAT31((int3)((uint)piVar10 >> 8),bVar5);
  *pbVar17 = *pbVar17 ^ bVar5;
  *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)pcVar24 >> 8);
  bVar5 = *pbVar8;
  *pbVar8 = *pbVar8 + (byte)pcVar24;
  piVar10 = (int *)(((uint)pbVar17 | 0x1496f09) + *puVar48 + (uint)CARRY1(bVar5,(byte)pcVar24));
  puVar50 = puVar46 + 1;
  out(*puVar46,(short)pbVar8);
  pbVar34 = pbVar8 + -1;
  *piVar10 = *piVar10 + (int)piVar10;
  pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),(byte)pbVar34 | (byte)*puVar40);
  cVar4 = (char)piVar10 + '\x13';
  pbVar17 = (byte *)CONCAT31((int3)((uint)piVar10 >> 8),cVar4);
  puVar13 = puVar40;
  puVar46 = puVar50;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar8 = *pbVar8 - (char)((uint)pbVar34 >> 8);
    *pbVar17 = *pbVar17 + cVar4;
code_r0x00405396:
    bVar5 = *pbVar17;
    bVar26 = (byte)pbVar17;
    *pbVar17 = *pbVar17 + bVar26;
    *puVar50 = (uint)(pbVar17 + (uint)CARRY1(bVar5,bVar26) + *puVar50);
    out(*puVar50,(short)pbVar8);
    *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
    *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
    pcVar11 = (char *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                               CONCAT11((byte)((uint)pbVar17 >> 8) | (byte)puVar50[1],bVar26));
    *(char **)((int)puVar48 + -1) = pcVar11 + *(int *)((int)puVar48 + -1);
    out(puVar50[1],(short)pbVar8);
    *pcVar11 = *pcVar11 + bVar26;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar17 = *pbVar17 + (char)pbVar17;
  piVar10 = (int *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + 'o');
  puVar40 = (uint *)((int)puVar13 + -1);
  *piVar10 = *piVar10 + (int)piVar10;
  uVar20 = (undefined3)((uint)pbVar8 >> 8);
  piVar10 = (int *)((int)piVar10 + 0x1b7e);
  bVar6 = (byte)pbVar8 | *(byte *)puVar40 | *(byte *)puVar40;
  iRam04115f2c = iRam04115f2c + (int)piVar10;
  out(*puVar46,(short)CONCAT31(uVar20,bVar6));
  *piVar10 = *piVar10 + (int)piVar10;
  bVar6 = bVar6 | (byte)piVar10;
  iVar35 = CONCAT31(uVar20,bVar6);
  pbVar8 = (byte *)((int)piVar10 - *piVar10);
  cVar4 = (char)pbVar8;
  *pcVar24 = *pcVar24 + cVar4;
  cVar41 = (char)pcVar24 - bVar6;
  *pbVar8 = *pbVar8 + cVar4;
  uVar30 = (undefined2)((uint)pcVar24 >> 0x10);
  bVar26 = (byte)((uint)pcVar24 >> 8) | *pbVar8;
  pcVar18 = pcVar18 + -1;
  *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
  bVar5 = *(byte *)(CONCAT22(uVar30,CONCAT11(bVar26,cVar41)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar8;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar18;
  *pbVar8 = *pbVar8 + cVar4;
  bVar5 = bVar26 | bVar5 | *(byte *)puVar40;
  iVar25 = CONCAT22(uVar30,CONCAT11(bVar5,cVar41));
  pbVar34 = (byte *)((uint)(puVar46 + 1) ^ *(uint *)(iVar35 + -0x43));
  iVar16 = *(int *)pbVar8;
  *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
  if (SCARRY4(iVar16,(int)pbVar8)) {
    *pbVar8 = *pbVar8 + cVar4;
  }
  pbVar17 = pbVar8 + 0x5674;
  puVar48 = (uint *)((int)puVar48 +
                    (-(uint)((byte *)0xffffa98b < pbVar8) - *(int *)(pbVar34 + -0x7f)));
  bVar26 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar26;
  uVar21 = (undefined3)((uint)pbVar17 >> 8);
  bVar28 = bVar26 + 0x2d;
  piVar10 = (int *)CONCAT31(uVar21,bVar28);
  *(uint *)(pbVar34 + (int)puVar48 * 8) =
       *(int *)(pbVar34 + (int)puVar48 * 8) + iVar35 + (uint)(0xd2 < bVar26);
  bVar26 = *pbVar34;
  *pbVar34 = *pbVar34 + bVar28;
  if (!CARRY1(bVar26,bVar28)) {
    do {
      pbVar17 = (byte *)(iVar35 + 1);
      bVar26 = (byte)piVar10;
      *(byte *)piVar10 = (char)*piVar10 + bVar26;
      bVar6 = (byte)((uint)piVar10 >> 8);
      bVar28 = (byte)puVar40 | bVar6;
      puVar13 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar28);
      out(*(undefined4 *)pbVar34,(short)pbVar17);
      *(byte *)piVar10 = (char)*piVar10 + bVar26;
      uVar30 = (undefined2)((uint)iVar25 >> 0x10);
      cVar4 = (char)iVar25;
      pbVar8 = (byte *)CONCAT22(uVar30,CONCAT11((byte)((uint)iVar25 >> 8) | *pbVar17,cVar4));
      bVar5 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar26;
      *(byte *)piVar10 = (char)*piVar10 + bVar26 + CARRY1(bVar5,bVar26);
      *pbVar17 = *pbVar17 + bVar26;
      *(byte *)puVar48 = (byte)*puVar48 + bVar6;
      *(int *)((int)piVar10 * 2) =
           *(int *)((int)piVar10 * 2) + CONCAT22(uVar30,CONCAT11(0x1c,cVar4));
      *(byte *)piVar10 = (char)*piVar10 + bVar26;
      cVar41 = (char)pbVar17;
      *(byte *)puVar13 = (byte)*puVar13 + cVar41;
      *(byte *)((int)piVar10 * 2) = *(byte *)((int)piVar10 * 2) ^ bVar26;
      *(byte *)piVar10 = (char)*piVar10 + bVar26;
      pbVar8 = pbVar34 + 8;
      out(*(undefined4 *)(pbVar34 + 4),(short)pbVar17);
      piVar10 = (int *)0xa0a0000;
      *pbVar17 = *pbVar17;
      bVar26 = cVar4 - cVar41;
      iVar25 = CONCAT22(uVar30,CONCAT11((byte)puVar48[0x14] | 0x1c | bRam0ca87216,bVar26));
      *pbVar17 = *pbVar17;
      bVar5 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar26;
      if (!CARRY1(bVar5,bVar26)) {
        piVar10 = (int *)0x1e7b7000;
        bVar5 = (byte)((uint)puVar40 >> 8) | *(byte *)(iVar35 + 3);
        puVar13 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar5,bVar28));
        if (bVar5 != 0) {
          pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),cVar41 + pbVar8[(int)puVar48 * 8]);
          piVar10 = (int *)0x6d7d7000;
          iVar25 = iVar25 + 1;
        }
      }
      *piVar10 = (int)(*piVar10 + (int)piVar10);
      iVar35 = CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | pbVar8[(int)puVar48 * 8]);
      *(char *)piVar10 = (char)*piVar10;
      piVar10 = (int *)CONCAT31((int3)((uint)piVar10 >> 8),0xf9);
      *puVar48 = (uint)((int)piVar10 + *puVar48 + 1);
      pbVar34 = pbVar34 + 0xc;
      out(*(undefined4 *)pbVar8,(short)iVar35);
      puVar40 = puVar13;
    } while( true );
  }
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  bVar28 = bVar28 | *(byte *)((int)piVar10 + 0x4000081);
  piVar10 = (int *)CONCAT31(uVar21,bVar28);
  if ('\0' < (char)bVar28) {
    *(byte *)piVar10 = (char)*piVar10 + bVar28;
    puVar46 = (uint *)CONCAT31(uVar21,bVar28 + 0x28);
    *puVar46 = *puVar46 ^ (uint)puVar46;
    *(byte *)puVar40 = *(byte *)puVar40 + bVar5;
    cVar4 = (bVar28 + 0x28) - bVar5;
    pcVar11 = (char *)CONCAT31(uVar21,cVar4);
    *pcVar11 = *pcVar11 + cVar4;
    pbVar8 = (byte *)CONCAT31(uVar20,bVar6 | *(byte *)puVar40);
    pcVar18 = (char *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((char)((uint)puVar40 >> 8) + *(byte *)((int)puVar13 + 0x7d),
                                        (char)puVar40));
    *pcVar11 = *pcVar11 + cVar4;
    pbVar17 = (byte *)CONCAT31(uVar21,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar21,cVar4 + 0x39U));
    *pcVar18 = *pcVar18 + bVar5;
    puVar50 = (uint *)(pbVar34 + 4);
    out(*(undefined4 *)pbVar34,(short)pbVar8);
    goto code_r0x00405396;
  }
  puVar46 = (uint *)(pbVar34 + 4);
  out(*(undefined4 *)pbVar34,(short)iVar35);
  pcVar24 = (char *)(iVar25 + -1);
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  pbVar8 = (byte *)CONCAT31(uVar20,bVar6 | *(byte *)puVar40);
  goto code_r0x004052ee;
}


