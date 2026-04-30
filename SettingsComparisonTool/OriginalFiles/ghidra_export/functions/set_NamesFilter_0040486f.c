/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040486f
 * Raw Name    : set_NamesFilter
 * Demangled   : set_NamesFilter
 * Prototype   : int set_NamesFilter(uint * value, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8, uint * param_9, char * param_10, uint * param_11, uint * param_12, int param_13, char * param_14)
 * Local Vars  : uStack_54, uStack_52, uStack_53, uStack_14, uStack_50, iStack_c, puStack_10, puStack_4, puStack_8, uVar2, uVar1, cVar4, param_2, param_3, uVar3, bVar6, param_4, bVar5, param_5, param_6, uVar8, cVar7, param_7, param_8, pbVar9, in_EAX, param_9, param_10, puVar11, param_11, uVar10, param_12, puVar13, param_13, pcVar12, param_14, puVar15, uVar14, pbVar17, iVar16, pcVar19, piVar18, uVar21, pcVar20, puVar23, value, uVar22, pcVar25, puVar24, bVar27, iVar26, bVar29, bVar28, uVar31, uVar30, puVar33, bVar32, pbVar35, puVar34, cVar37, iVar36, cVar39, cVar38, puVar40, unaff_EBX, cVar42, puVar41, unaff_EBP, ppuVar43, puVar45, ppuVar44, unaff_ESI, ppuVar46, unaff_EDI, puVar47, puVar49, puVar48, in_SS, in_ES, bVar50, in_DS, in_AF
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
set_NamesFilter(uint *value,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
               uint *param_7,uint *param_8,uint *param_9,char *param_10,uint *param_11,
               uint *param_12,int param_13,char *param_14)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  undefined4 in_EAX;
  undefined3 uVar21;
  byte *pbVar9;
  uint uVar10;
  ushort *puVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  byte *pbVar17;
  int *piVar18;
  char *pcVar19;
  undefined3 uVar22;
  char *pcVar20;
  byte bVar27;
  undefined2 uVar30;
  uint *puVar23;
  uint *puVar24;
  byte bVar28;
  byte bVar29;
  undefined2 uVar31;
  char *pcVar25;
  int iVar26;
  byte bVar32;
  uint *puVar33;
  uint *puVar34;
  byte *pbVar35;
  int iVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar42;
  uint *unaff_EBX;
  uint *puVar40;
  uint *puVar41;
  uint **ppuVar43;
  uint *unaff_EBP;
  uint **ppuVar44;
  uint *puVar45;
  uint **ppuVar46;
  uint *unaff_ESI;
  uint *puVar47;
  uint *unaff_EDI;
  uint *puVar48;
  uint *puVar49;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar50;
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
  uVar21 = (undefined3)((uint)in_EAX >> 8);
  cVar4 = (char)in_EAX + (byte)*unaff_EBX;
  pcVar12 = (char *)CONCAT31(uVar21,cVar4);
  if (SCARRY1((char)in_EAX,(byte)*unaff_EBX) != cVar4 < '\0') {
    *pcVar12 = *pcVar12 + cVar4;
    pbVar9 = (byte *)CONCAT31(uVar21,cVar4 + '*');
    puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_DS);
    bVar5 = (byte)((uint)value >> 8);
    cVar4 = (char)value;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar5 + *pbVar9,cVar4));
    pbVar9 = pbVar9 + (uint)CARRY1(bVar5,*pbVar9) + *(int *)pbVar9;
    *(char *)param_2 = (char)*param_2 + cVar4;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 - *pbVar9);
    unaff_ESI = (uint *)((int)unaff_ESI + (uint)((byte)pbVar9 < *pbVar9) + *(int *)pbVar17);
    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_ES);
    while( true ) {
      bVar27 = (byte)pbVar17;
      pbVar17[0x2c000000] = pbVar17[0x2c000000] + bVar27;
      bVar5 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar27;
      *param_2 = (uint)(pbVar17 + (uint)CARRY1(bVar5,bVar27) + *param_2);
      cVar38 = (char)param_2;
      *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar38;
      *pbVar17 = *pbVar17 + bVar27;
      puVar47 = (uint *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar27 | (byte)*unaff_EBX);
      uVar10 = (uint)puVar47 | *puVar47;
      cVar37 = (char)value;
      cVar4 = (char)uVar10;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar4;
      uVar21 = (undefined3)(uVar10 >> 8);
      bVar5 = cVar4 + (byte)*unaff_EBX;
      pcVar12 = (char *)CONCAT31(uVar21,bVar5);
      bVar27 = (byte)((uint)value >> 8);
      uVar31 = (undefined2)((uint)value >> 0x10);
      if (SCARRY1(cVar4,(byte)*unaff_EBX) == (char)bVar5 < '\0') break;
      *pcVar12 = *pcVar12 + bVar5;
      bVar6 = bVar5 + 2;
      pcVar12 = (char *)CONCAT31(uVar21,bVar6);
      if (bVar5 < 0xfe) {
        *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
        puVar47 = unaff_EBX;
        goto code_r0x004048f5;
      }
      *pcVar12 = *pcVar12 + bVar6;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) |
                                          *(byte *)((int)unaff_EBX + -0x5b),cVar38));
      cVar4 = *pcVar12;
      *pcVar12 = *pcVar12 + bVar6;
      puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
      if (SCARRY1(cVar4,bVar6) == *pcVar12 < '\0') goto code_r0x00404927;
      *pcVar12 = *pcVar12 + bVar6;
      bVar5 = bVar5 + 4;
      pbVar17 = (byte *)CONCAT31(uVar21,bVar5);
      if (0xfd < bVar6) {
        *pbVar17 = *pbVar17 + bVar5;
        bVar5 = bVar5 | (byte)*unaff_ESI;
        pcVar12 = (char *)CONCAT31(uVar21,bVar5);
        *pcVar12 = *pcVar12 + bVar5;
        *unaff_EBX = (uint)(*unaff_EBX + (int)value);
        puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
        unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
        *pcVar12 = *pcVar12 + bVar5;
        pcVar12 = (char *)CONCAT31(uVar21,bVar5 + 0x6f);
        *pcVar12 = *pcVar12 + bVar5 + 0x6f;
        pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d))
        ;
        *(byte *)param_2 = (byte)*param_2 + cVar37;
        uRam00c16f07 = SUB41(pcVar12,0);
        goto code_r0x004048de;
      }
      *pbVar17 = *pbVar17 + bVar5;
      value = (uint *)CONCAT22(uVar31,CONCAT11(bVar27 | (byte)*param_2,cVar37));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar38;
      *(byte *)unaff_ESI = (byte)*unaff_ESI ^ bVar5;
    }
    *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar38;
    *pcVar12 = *pcVar12 + bVar5;
    value = (uint *)CONCAT22(uVar31,CONCAT11(bVar27 | (byte)*param_2,cVar37));
    param_2 = (uint *)((int)param_2 + 1);
    pcVar12 = pcVar12 + *param_2;
    if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0) goto code_r0x00404921;
  }
  pcVar12 = (char *)((uint)pcVar12 | 8);
code_r0x004048de:
  cVar4 = (char)pcVar12;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar4;
  *pcVar12 = *pcVar12 + cVar4;
  *(byte **)(pcVar12 + (int)value) = (byte *)(*(int *)(pcVar12 + (int)value) + (int)value);
  puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
  bVar5 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar12 = *pcVar12 + cVar4;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar4 + 'o');
  unaff_ESI = (uint *)((int)unaff_ESI + 1);
  *pcVar12 = *pcVar12 + cVar4 + 'o';
  puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_ES);
  puVar47 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5,(char)unaff_EBX));
  unaff_EBP = unaff_EBX;
  in_SS = in_ES;
code_r0x004048f5:
  unaff_EBX = puVar47;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)value;
  do {
    uRam00c36f08 = SUB41(pcVar12,0);
    while( true ) {
      uVar10 = *unaff_ESI;
      cVar4 = (char)pcVar12;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar4;
      iStack_c = CONCAT22(iStack_c._2_2_,in_ES);
      if (SCARRY1((byte)uVar10,cVar4) == (char)(byte)*unaff_ESI < '\0') {
        pcVar12[(int)unaff_EBP] = pcVar12[(int)unaff_EBP] + cVar4;
        goto code_r0x00404982;
      }
      *pcVar12 = *pcVar12 + cVar4;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar4 + '*');
      puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_DS);
      bVar5 = (byte)((uint)value >> 8);
      cVar4 = (char)value;
      bVar27 = bVar5 + *pbVar9;
      pbVar9 = pbVar9 + (uint)CARRY1(bVar5,*pbVar9) + *(int *)pbVar9;
      *(byte *)param_2 = (byte)*param_2 + cVar4;
      cVar37 = (char)unaff_EBX - (byte)*unaff_ESI;
      bVar5 = *pbVar9;
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar27 + *pbVar9,cVar4));
      iVar16 = *(int *)pbVar9;
      *(byte *)param_2 = (byte)*param_2 + cVar4;
      pcVar12 = (char *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar27,bVar5) + iVar16) >> 8),
                                 (char)(pbVar9 + (uint)CARRY1(bVar27,bVar5) + iVar16) -
                                 *(byte *)((int)param_2 + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar37)
                                                     + -0x3a),cVar37));
code_r0x00404921:
      bVar5 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar5;
      pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar5 + 0x6f);
      *(byte *)value = ((byte)*value - (bVar5 + 0x6f)) - (0x90 < bVar5);
code_r0x00404927:
      *(byte *)param_2 = (byte)*param_2 + (char)value;
      puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_SS);
      *(byte *)value = (byte)*value + 1;
      cVar4 = (char)((uint)value >> 8) - *(byte *)((int)unaff_ESI + 2);
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(cVar4,(char)value));
      if ((POPCOUNT(cVar4) & 1U) == 0) break;
      pcVar12 = pcVar12 + -0x1b7e2606;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar12 >> 8) | (byte)param_2[0x30dbc2],
                                          (char)pcVar12));
    }
code_r0x00404931:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar4 = (char)pcVar12 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar4);
    puVar47 = unaff_ESI;
  } while ((POPCOUNT(cVar4) & 1U) != 0);
  do {
    bVar5 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar5;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    piVar18 = (int *)CONCAT31(uVar21,bVar5 + 0x6f);
    *value = (*value - (int)piVar18) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    iVar16 = *(int *)((int)unaff_EDI + 0x1a);
    *piVar18 = *piVar18 + (int)piVar18;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*puVar47);
    *(byte *)value = (byte)*value + 1;
    bVar5 = (bVar5 + 0x6f) - (char)*piVar18;
    pbVar9 = (byte *)CONCAT31(uVar21,bVar5);
    *pbVar9 = *pbVar9 + bVar5;
    puVar47 = (uint *)((int)puVar47 + *(int *)pbVar9);
    cVar4 = bVar5 + *pbVar9;
    puVar11 = (ushort *)CONCAT31(uVar21,cVar4);
    *puVar11 = *puVar11 + (ushort)CARRY1(bVar5,*pbVar9) * (((ushort)puVar11 & 3) - (*puVar11 & 3));
    *(char *)puVar11 = (char)*puVar11 + cVar4;
    *(char *)puVar11 = (char)*puVar11 + cVar4;
    *(char *)puVar11 = (char)*puVar11 + cVar4;
    unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
    unaff_EBP = (uint *)((int)unaff_EBP + iVar16);
code_r0x0040495b:
    cVar4 = (char)puVar11;
    *(char *)puVar11 = (char)*puVar11 + cVar4;
    uVar21 = (undefined3)((uint)puVar11 >> 8);
    cVar37 = cVar4 + '\x02';
    pcVar12 = (char *)CONCAT31(uVar21,cVar37);
    if ((POPCOUNT(cVar37) & 1U) != 0) {
      *param_2 = (uint)(*param_2 + (int)unaff_EBP);
      unaff_ESI = (uint *)((int)puVar47 + 1);
      out((byte)*puVar47,(short)param_2);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar12 = *pcVar12 + cVar37;
    pbVar9 = (byte *)(CONCAT31(uVar21,cVar4 + '}') + (int)unaff_EBP);
    *pbVar9 = *pbVar9 + cVar4 + '}';
    *param_14 = *param_14 + (char)param_14;
    value = (uint *)CONCAT22((short)((uint)param_13 >> 0x10),
                             CONCAT11((byte)((uint)param_13 >> 8) | *(byte *)(param_13 * 3),
                                      (char)param_13));
    unaff_EDI = (uint *)((int)param_7 + *(int *)((int)param_11 + 0x6f));
    pcVar12 = param_14;
    param_2 = param_12;
    unaff_EBX = param_11;
    unaff_EBP = param_9;
    puVar47 = param_8;
    while( true ) {
      cVar4 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar4;
      uVar21 = (undefined3)((uint)pcVar12 >> 8);
      cVar37 = cVar4 + '\x02';
      pcVar12 = (char *)CONCAT31(uVar21,cVar37);
      if ((POPCOUNT(cVar37) & 1U) != 0) break;
      *pcVar12 = *pcVar12 + cVar37;
      pcVar12 = (char *)CONCAT31(uVar21,cVar4 + '}');
      out(*puVar47,(short)param_2);
      *pcVar12 = *pcVar12 + cVar4 + '}';
code_r0x00404982:
      *(char *)param_6 = (char)*param_6 + (char)param_6;
      value = (uint *)CONCAT22((short)((uint)param_5 >> 0x10),
                               CONCAT11((byte)((uint)param_5 >> 8) |
                                        *(byte *)((int)param_5 + (int)puStack_8),(char)param_5));
      unaff_EDI = (uint *)(iStack_c + *(int *)((int)param_3 + 0x71));
      puVar13 = param_6;
      param_2 = param_4;
      unaff_EBX = param_3;
      puVar47 = puStack_8;
      while( true ) {
        cVar4 = (char)puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + cVar4;
        uVar21 = (undefined3)((uint)puVar13 >> 8);
        cVar37 = cVar4 + '\x02';
        puVar11 = (ushort *)CONCAT31(uVar21,cVar37);
        unaff_EBP = puStack_4;
        if ((POPCOUNT(cVar37) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar11 = (char)*puVar11 + cVar37;
        bVar27 = cVar4 + 0x7d;
        iVar16 = CONCAT31(uVar21,bVar27);
        pbVar9 = (byte *)(iVar16 + (int)puStack_4);
        bVar5 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar27;
        uVar10 = *value;
        *(byte *)param_2 = (byte)*param_2 + (char)value;
        pcVar12 = (char *)(((iVar16 - uVar10) - (uint)CARRY1(bVar5,bVar27)) + -0x727b0317);
        cVar4 = (char)pcVar12;
        *pcVar12 = *pcVar12 + cVar4;
        uVar21 = (undefined3)((uint)pcVar12 >> 8);
        cVar37 = cVar4 + '\x02';
        pcVar12 = (char *)CONCAT31(uVar21,cVar37);
        if ((POPCOUNT(cVar37) & 1U) != 0) break;
        *pcVar12 = *pcVar12 + cVar37;
        bVar27 = cVar4 + 0x7d;
        iVar16 = CONCAT31(uVar21,bVar27);
        pbVar9 = (byte *)(iVar16 + (int)puStack_4);
        bVar5 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar27;
        puVar13 = (uint *)((iVar16 - *value) - (uint)CARRY1(bVar5,bVar27));
        puVar45 = param_2;
code_r0x004049b4:
        *(byte *)puVar45 = (byte)*puVar45 + (char)value;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),
                                   ((char)puVar45 - (char)*unaff_EDI) - (byte)*puVar47);
        bVar27 = *(byte *)((int)puVar47 + 0x72);
        *puVar13 = *puVar13 & (uint)value;
        pbVar9 = (byte *)((int)puVar13 + 2);
        *pbVar9 = *pbVar9 + (char)((uint)puVar45 >> 8);
        bVar5 = *pbVar9;
        puVar49 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar27);
        puVar45 = puVar47;
        while (unaff_EBX = puVar49, puVar47 = puVar45, (POPCOUNT(bVar5) & 1U) == 0) {
          cVar4 = (char)puVar13;
          *(byte *)puVar13 = (byte)*puVar13 + cVar4;
          uVar21 = (undefined3)((uint)puVar13 >> 8);
          cVar37 = cVar4 + '\x03';
          pbVar9 = (byte *)CONCAT31(uVar21,cVar37);
          puVar47 = puVar45 + 1;
          out(*puVar45,(short)param_2);
          in_SS = param_7._0_2_;
          *pbVar9 = *pbVar9 + cVar37;
          cVar38 = (char)value;
          value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11((byte)((uint)value >> 8) | *pbVar9,cVar38));
          *(int *)pbVar9 = *(int *)pbVar9 - (int)pbVar9;
          *(byte *)param_2 = (byte)*param_2 + cVar38;
          cVar38 = (char)puVar49 - *(byte *)((int)puVar45 + 6);
          unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar49 >> 8),cVar38);
          if ((POPCOUNT(cVar38) & 1U) != 0) {
            pcVar12 = (char *)((int)unaff_EDI + (int)puStack_4 * 2);
            *pcVar12 = *pcVar12 + cVar37;
            ppuVar46 = (uint **)puStack_4;
            goto code_r0x00404a51;
          }
          *pbVar9 = *pbVar9 + cVar37;
          puVar13 = (uint *)CONCAT31(uVar21,cVar4 + 'r');
          *(byte *)puVar13 = (byte)*puVar13;
          param_7 = (uint *)CONCAT22(param_7._2_2_,in_ES);
          do {
            unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
            bVar5 = (byte)puVar13;
            *(byte *)puVar13 = (byte)*puVar13 + bVar5;
            uVar21 = (undefined3)((uint)puVar13 >> 8);
            bVar5 = (bVar5 + 0x6e) - (0x90 < bVar5);
            puVar13 = (uint *)CONCAT31(uVar21,bVar5);
            cVar4 = (char)value;
            *(byte *)param_2 = (byte)*param_2 + cVar4;
            bVar27 = (char)((uint)value >> 8) - *(byte *)((int)puVar47 + 2);
            value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar27,cVar4));
            puVar45 = param_2;
            if ((POPCOUNT(bVar27) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar13 = (byte)*puVar13 + bVar5;
            bVar6 = bVar5 + 2;
            puVar13 = (uint *)CONCAT31(uVar21,bVar6);
            ppuVar44 = (uint **)puStack_4;
            if ((POPCOUNT(bVar6) & 1U) == 0) goto code_r0x004049f5;
            puVar47 = param_7;
          } while (0xfd < bVar5);
          *(byte *)puVar13 = (byte)*puVar13 | bVar6;
          puVar49 = unaff_EBX;
          puVar45 = param_7;
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
    uVar21 = (undefined3)((uint)puVar13 >> 8);
    bVar6 = bVar5 + 0x6f;
    pbVar9 = (byte *)CONCAT31(uVar21,bVar6);
    *value = (*value - (int)pbVar9) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + cVar4;
    puVar45 = (uint *)((int)ppuVar44 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    uVar22 = (undefined3)((uint)param_2 >> 8);
    bVar5 = (byte)param_2 | (byte)*puVar47;
    param_2 = (uint *)CONCAT31(uVar22,bVar5);
    *(byte *)value = (byte)*value + 1;
    cVar37 = bVar6 - *pbVar9;
    puVar47 = (uint *)((int)puVar47 + (-(uint)(bVar6 < *pbVar9) - *(int *)CONCAT31(uVar21,cVar37)));
    uVar14 = CONCAT31(uVar21,cVar37 + *(char *)CONCAT31(uVar21,cVar37));
    bVar50 = CARRY1(bRam14110000,bVar27);
    bRam14110000 = bRam14110000 + bVar27;
    puVar13 = (uint *)((int)unaff_EBX + (int)puVar47 * 2);
    uVar10 = *puVar13;
    uVar2 = uVar14 + *puVar13;
    puVar15 = (undefined4 *)(uVar2 + bVar50);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar15 = uVar1;
    param_6 = (uint *)CONCAT22(param_6._2_2_,in_ES);
    uVar10 = (uint)(CARRY4(uVar14,uVar10) || CARRY4(uVar2,(uint)bVar50));
    puVar13 = (uint *)((int)puVar15 + uRam7d020511 + uVar10);
    ppuVar43 = &param_5;
    ppuVar46 = &param_5;
    ppuVar44 = &param_5;
    param_5 = puVar45;
    cVar37 = '\x03';
    do {
      puVar45 = puVar45 + -1;
      ppuVar43 = ppuVar43 + -1;
      *ppuVar43 = (uint *)*puVar45;
      cVar37 = cVar37 + -1;
    } while ('\0' < cVar37);
    param_7 = (uint *)&param_5;
    pbRam00c82802 =
         (byte *)((int)puVar13 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar15,uRam7d020511) ||
                      CARRY4((int)puVar15 + uRam7d020511,uVar10))));
    uVar10 = *puVar47;
    cVar37 = (char)puVar13;
    *(byte *)puVar47 = (byte)*puVar47 + cVar37;
  } while (SCARRY1((byte)uVar10,cVar37) == (char)(byte)*puVar47 < '\0');
  *(byte *)puVar13 = (byte)*puVar13 + cVar37;
  iVar16 = CONCAT31((int3)((uint)puVar13 >> 8),cVar37 + '\x11') + 0xc57b;
  bVar27 = (byte)iVar16;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar22,bVar5 + (byte)*value);
  iVar16 = (CONCAT31((int3)((uint)iVar16 >> 8),bVar27 + 0x6f) - (uint)(0x90 < bVar27)) + -0x18093a86
  ;
  cVar37 = (char)iVar16;
  uVar21 = (undefined3)((uint)iVar16 >> 8);
  cVar4 = cVar37 + '\x02';
  pbVar9 = (byte *)CONCAT31(uVar21,cVar4);
  if ((POPCOUNT(cVar4) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar9 = *pbVar9 + cVar4;
  pbVar9 = (byte *)CONCAT31(uVar21,cVar37 + 'q');
  ppuVar46 = &param_5;
code_r0x00404a51:
  pbVar17 = pbVar9 + 1;
  cVar4 = (char)pbVar17;
  *pbVar17 = *pbVar17 + cVar4;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar49 >> 0x10),
                               CONCAT11((char)((uint)puVar49 >> 8) - cVar4,cVar38));
  *pbVar17 = *pbVar17 + cVar4;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*value);
  pbVar9 = pbVar9 + 0x757b03;
  pcVar12 = (char *)((int)unaff_EDI + (int)ppuVar46 * 2);
  cVar4 = (char)pbVar9;
  *pcVar12 = *pcVar12 + cVar4;
  *pbVar9 = *pbVar9 + cVar4;
  *(byte *)puVar47 = (byte)*puVar47 - (char)((uint)pbVar9 >> 8);
  *pbVar9 = *pbVar9 + cVar4;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar46 + -0x3a));
  *pbVar9 = *pbVar9 + cVar4;
  pbVar9 = (byte *)(CONCAT31((int3)((uint)pbVar9 >> 8),cVar4 + '\x11') + 0x757b02);
  pcVar12 = (char *)((int)unaff_EDI + (int)ppuVar46 * 2);
  bVar27 = (byte)pbVar9;
  *pcVar12 = *pcVar12 + bVar27;
  bVar5 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar27;
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
  pbRam011006fe = pbVar9 + (int)(pbRam011006fe + CARRY1(bVar5,bVar27));
  uVar10 = *puVar47;
  *(byte *)puVar47 = (byte)*puVar47 + bVar27;
  if (!CARRY1((byte)uVar10,bVar27)) goto code_r0x00404add;
  do {
    bVar5 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar5;
    bVar6 = (byte)value;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                             CONCAT11((byte)((uint)value >> 8) | *pbVar9,bVar6));
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    uVar21 = (undefined3)((uint)pbVar9 >> 8);
    bVar5 = bVar5 + in_AF * '\x06';
    cVar4 = bVar5 + (0x90 < (bVar5 & 0xf0) | in_AF * (0xf9 < bVar5)) * '`';
    pcVar12 = (char *)CONCAT31(uVar21,cVar4);
    *pcVar12 = *pcVar12 + cVar4;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar46 + -0x39));
    *pcVar12 = *pcVar12 + cVar4;
    iVar16 = CONCAT31(uVar21,cVar4 + '\x11') + 0xc57b;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x11') + 0xc67b;
    bVar27 = (byte)iVar16;
    bVar5 = bVar27 + 0x6f;
    pbVar9 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar5);
    *value = (*value - (int)pbVar9) - (uint)(0x90 < bVar27);
    uVar10 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    pbRam011106fe = pbVar9 + (int)(pbRam011106fe + CARRY1((byte)uVar10,bVar6));
    uVar10 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar5;
    if (!CARRY1((byte)uVar10,bVar5)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    bVar5 = (byte)value;
    bVar27 = (byte)((uint)value >> 8) | *pbVar9;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar27,bVar5));
    *pbVar9 = *pbVar9 - (char)pbVar9;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar27;
    out(*puVar47,(short)param_2);
    *value = *value & (uint)pbVar9;
    uVar10 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    pbVar9 = pbVar9 + (uint)CARRY1((byte)uVar10,bVar5) + puVar47[1];
    *pbVar9 = *pbVar9 + (char)pbVar9;
    *(byte *)value = (byte)*value + (char)param_2;
    puVar47 = puVar47 + 1;
    while( true ) {
      out(*puVar47,(short)param_2);
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 & (byte)*value);
      *(byte *)param_2 = (byte)*param_2 + (char)value;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[5],
                                          (char)param_2));
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      puVar47 = puVar47 + 1;
code_r0x00404ad4:
      puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
      pbVar9 = (byte *)((uint)pbVar9 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar9;
code_r0x00404add:
      bVar5 = (byte)pbVar9;
      uVar21 = (undefined3)((uint)pbVar9 >> 8);
      cVar4 = bVar5 + 8;
      pbVar9 = (byte *)CONCAT31(uVar21,cVar4);
      if (SCARRY1(bVar5,'\b') == cVar4 < '\0') break;
      *pbVar9 = *pbVar9 + cVar4;
      cVar4 = bVar5 + 10;
      piVar18 = (int *)CONCAT31(uVar21,cVar4);
      if ((POPCOUNT(cVar4) & 1U) != 0) {
        *piVar18 = (int)(*piVar18 + (int)piVar18);
        goto code_r0x00404b18;
      }
      *(char *)piVar18 = (char)*piVar18 + cVar4;
      puVar13 = (uint *)CONCAT31(uVar21,bVar5 + 0x7c);
      *puVar13 = *puVar13 & (uint)value;
      *(char *)((int)puVar13 + 0x11) = *(char *)((int)puVar13 + 0x11) + (char)((uint)param_2 >> 8);
      cVar4 = (char)((int)puVar13 + 0xc67b);
      uVar21 = (undefined3)((uint)((int)puVar13 + 0xc67b) >> 8);
      bVar5 = cVar4 + 8;
      pbVar9 = (byte *)CONCAT31(uVar21,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar9 = *pbVar9 + bVar5;
        cRam02060000 = cVar4 + 'w';
        puVar45 = (uint *)CONCAT31(uVar21,cRam02060000);
        *(byte *)puVar45 = (byte)*puVar45 + cRam02060000;
        cVar4 = (char)value;
        value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                 CONCAT11((byte)((uint)value >> 8) | (byte)*puVar45,cVar4));
        *puVar45 = *puVar45 - (int)puVar45;
        *(byte *)param_2 = (byte)*param_2 + cVar4;
        puVar13 = puVar47 + 1;
        out(*puVar47,(short)param_2);
        puVar47 = puVar13;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar12 = (char *)((uint)puVar45 | *puVar45);
        goto code_r0x00404b89;
      }
      bVar27 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar5;
      *puVar47 = (uint)(pbVar9 + (uint)CARRY1(bVar27,bVar5) + *puVar47);
    }
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    *value = (uint)(pbVar9 + (uint)(0xf7 < bVar5) + *value);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + 'r');
    piVar18 = (int *)((uint)puVar13 | *puVar13);
    param_2 = puStack_10;
code_r0x00404b18:
    bRam11060000 = (byte)piVar18;
    iVar16 = CONCAT31((int3)((uint)((int)piVar18 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar18 + 0xc57b) + '\x11') + 0xc77b;
    bVar5 = (byte)iVar16;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),bVar5 + 0x6f);
    *value = (*value - iVar16) - (uint)(0x90 < bVar5);
    cVar4 = (char)value;
    *(byte *)param_2 = (byte)*param_2 + cVar4;
    bVar28 = (byte)((uint)unaff_EBX >> 8);
    bVar6 = (byte)((uint)param_2 >> 8) | bVar28;
    pcVar19 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar6,(byte)param_2));
    piVar18 = (int *)(iVar16 + 0x73060001);
    *(byte *)value = (byte)*value & (byte)piVar18;
    *pcVar19 = *pcVar19 + cVar4;
    bVar27 = (byte)((uint)value >> 8);
    *(byte *)piVar18 = *(char *)piVar18 - bVar27;
    *(byte *)piVar18 = *(char *)piVar18 + (byte)piVar18;
    iVar16 = *piVar18;
    *piVar18 = *piVar18 - (int)piVar18;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar27;
    pcVar12 = (char *)((uint)piVar18 | *unaff_EDI);
    *pcVar19 = *pcVar19 - bVar27;
    bVar5 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar5;
    ppuVar46 = (uint **)(((int)ppuVar46 - iVar16) - *(int *)(pcVar12 + ((int)ppuVar46 - iVar16)));
    uVar31 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar29 = (byte)unaff_EBX;
    cVar37 = bVar28 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar9 = (byte *)CONCAT22(uVar31,CONCAT11(cVar37,bVar29));
    *pcVar12 = *pcVar12 + bVar5;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    uVar14 = CONCAT31(uVar21,bVar5 + 7);
    puVar13 = (uint *)((int)ppuVar46 + -0x1faeef1);
    uVar10 = *puVar13;
    uVar2 = *puVar13 + uVar14;
    *puVar13 = uVar2 + (0xf8 < bVar5);
    puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
    puVar49 = puStack_10;
    bVar5 = bVar5 + 7 + (byte)*value + (CARRY4(uVar10,uVar14) || CARRY4(uVar2,(uint)(0xf8 < bVar5)))
    ;
    puVar45 = (uint *)CONCAT31(uVar21,bVar5);
    uVar10 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar5;
    if (CARRY1((byte)uVar10,bVar5)) break;
    *(byte *)puVar45 = (byte)*puVar45 + bVar5;
    unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar37 + pbVar9[0x76],bVar29));
    uStack_14 = in_ES;
  }
  *(byte *)puVar45 = (byte)*puVar45 + bVar5;
  uVar22 = (undefined3)((uint)pcVar19 >> 8);
  bVar32 = (byte)param_2 | *pbVar9;
  param_2 = (uint *)CONCAT31(uVar22,bVar32);
  pcRam2b060000 = (char *)CONCAT31(uVar21,bVar5 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar5 + 0x39)) - (0xd7 < (byte)(bVar5 + 0x11));
  bVar28 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar27;
  puVar13 = puVar47 + 1;
  out(*puVar47,(short)param_2);
  bVar5 = (bVar5 + 0x37) - CARRY1(bVar28,bVar27);
  piVar18 = (int *)CONCAT31(uVar21,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar5;
    iVar16 = CONCAT31(uVar21,bVar5 + 0x11) + 0xc77b;
    pcVar12 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + 'r');
    pcVar12[0x28] = pcVar12[0x28] + bVar6;
code_r0x00404b89:
    cVar4 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar4;
    *pcVar12 = *pcVar12 + cVar4;
    *pcVar12 = *pcVar12 + cVar4;
    puVar11 = (ushort *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar4 + 'r');
    uVar8 = (ushort)puVar11 | *puVar11;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*puVar13,(short)param_2);
    *pcVar12 = *pcVar12 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar18 = (char)*piVar18 + bVar5;
  puVar41 = (uint *)((int)ppuVar46 - *(int *)((int)unaff_EDI + 0x21));
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pcVar12 = (char *)CONCAT31(uVar22,bVar32 | *pbVar9);
  puVar45 = puVar47 + 2;
  out(*puVar13,(short)pcVar12);
  uVar10 = *value;
  *pcVar12 = *pcVar12 + cVar4;
  uVar10 = CONCAT31(uVar21,bVar5 & (byte)uVar10) | 0x767b02;
  *(byte *)((int)value + (int)pcVar12) = *(byte *)((int)value + (int)pcVar12) + (char)uVar10;
  iVar16 = uVar10 + 0xc67b;
  cVar38 = (char)iVar16;
  uVar21 = (undefined3)((uint)iVar16 >> 8);
  cVar7 = cVar38 + 'r';
  pcVar12 = (char *)CONCAT31(uVar21,cVar7);
  pcVar12[0x28] = pcVar12[0x28] + bVar6;
  *pcVar12 = *pcVar12 + cVar7;
  uVar30 = (undefined2)((uint)value >> 0x10);
  bVar27 = bVar27 | *(byte *)((int)puStack_10 + -0x5e);
  puVar24 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27,cVar4));
  *pcVar12 = *pcVar12 + cVar7;
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uStack_14);
  puVar13 = (uint *)CONCAT22(uVar31,CONCAT11(cVar37 + pbVar9[0x76],bVar29));
  *pcVar12 = *pcVar12 + cVar7;
  puVar33 = (uint *)CONCAT31(uVar21,cVar38 + -0x1c);
  pcVar12 = (char *)((uint)puVar33 | *puVar33);
  bVar50 = (POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar12;
  puVar33 = puStack_10;
  puVar40 = puVar13;
  puVar23 = puVar41;
  puVar48 = puVar49;
  uVar31 = uStack_14;
  if (!bVar50) goto code_r0x00404ca8;
  *pcVar12 = *pcVar12 + cRam02060000;
  puVar33 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cRam02060000 + 'r');
  *puVar33 = *puVar33 & (uint)puVar24;
  *(char *)((int)puVar33 + 0x11) = *(char *)((int)puVar33 + 0x11) + (char)((ushort)uStack_14 >> 8);
  iVar16 = (int)puVar33 + 0xc77b;
  uVar21 = (undefined3)((uint)iVar16 >> 8);
  cRam02060000 = (char)iVar16 + '\t';
  pbVar9 = (byte *)CONCAT31(uVar21,cRam02060000);
  out(*puVar45,uStack_14);
  *pbVar9 = *pbVar9 + cRam02060000;
  puVar23 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 | *pbVar9,cVar4));
  *(int *)pbVar9 = *(int *)pbVar9 - (int)pbVar9;
  *(byte *)puStack_10 = (byte)*puStack_10 + cVar4;
  out(puVar47[3],uStack_14);
  puVar34 = puStack_10;
  puVar45 = puVar47 + 4;
  uVar31 = uStack_14;
  if ((POPCOUNT((byte)*puStack_10) & 1U) != 0) goto code_r0x00404cca;
  *pbVar9 = *pbVar9 + cRam02060000;
  puVar11 = (ushort *)CONCAT31(uVar21,(char)iVar16 + '{');
  uVar8 = (ushort)puVar11 | *puVar11;
  pcVar12 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),uVar8);
  bVar5 = (byte)uVar8;
  out(puVar47[4],uStack_14);
  pbVar9 = (byte *)((int)puVar23 + 1);
  bRam11060000 = bVar5;
  *pcVar12 = *pcVar12 + bVar5;
  puVar24 = (uint *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                             CONCAT11((byte)((uint)pbVar9 >> 8) | bRam110cde91,(char)pbVar9));
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar5 - 7);
  *puVar49 = (uint)(pcVar12 + (uint)(bVar5 < 7) + *puVar49);
  puVar45 = puVar47 + 6;
  out(puVar47[5],uStack_14);
  puVar33 = (uint *)((int)puStack_10 + 1);
  *pcVar12 = *pcVar12 + (bVar5 - 7);
  puVar40 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar29 | (byte)(uVar8 >> 8));
  do {
    bVar5 = (char)pcVar12 - *pcVar12;
    uVar10 = *puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + bVar5;
    cVar4 = bVar5 - CARRY1((byte)uVar10,bVar5);
    *(byte *)puVar33 = (byte)*puVar33 + cVar4;
    cVar37 = (char)((uint)puVar24 >> 8);
    *(byte *)(puVar49 + 0x673b40) = (byte)puVar49[0x673b40] + cVar37;
    puVar47 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar4);
    *(byte *)puVar47 = (byte)*puVar47 + cVar4;
    *(byte *)puVar33 = (byte)*puVar33 + cVar4;
    puVar40[0x16] = (uint)(puVar40[0x16] + (int)puVar45);
    puVar23 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar24 >> 0x10),
                                               CONCAT11(cVar37 + (char)((uint)pcVar12 >> 8),
                                                        (char)puVar24)) >> 8),
                               (char)puVar24 + *(char *)((int)puVar47 * 2));
    *(byte *)puVar47 = (byte)*puVar47 + cVar4;
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar40;
    puVar34 = puVar33;
    puVar13 = puVar40;
_ctor:
    bVar27 = (byte)((uint)puVar23 >> 8);
    uVar10 = *puVar47;
    bVar5 = (byte)puVar23;
    puVar47 = (uint *)((int)puVar47 + (uint)CARRY1(bVar27,(byte)*puVar47) + *puVar47);
    *(byte *)puVar34 = (byte)*puVar34 + bVar5;
    cVar4 = bVar5 - *(byte *)((int)puVar34 + 3);
    puVar24 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar23 >> 0x10),
                                               CONCAT11(bVar27 + (byte)uVar10,bVar5)) >> 8),cVar4);
    if ((POPCOUNT(cVar4) & 1U) != 0) {
      if (*(byte *)((int)puVar34 + 3) <= bVar5) {
        *puVar47 = (uint)(*puVar47 + (int)puVar47);
        puVar34 = (uint *)CONCAT31((int3)((uint)puVar34 >> 8),(byte)puVar34 | (byte)*puVar13);
        puVar47 = puVar47 + 0x230e;
        puVar23 = puVar24;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
    cVar4 = (char)puVar47 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)puVar47 >> 8),cVar4);
    bVar50 = (POPCOUNT(cVar4) & 1U) == 0;
    puVar33 = puVar34;
    puVar40 = puVar13;
    puVar23 = puVar41;
    puVar48 = puVar49;
    uVar31 = puStack_4._0_2_;
code_r0x00404ca8:
    puStack_4._0_2_ = uVar31;
    pcVar19 = param_10;
    puVar34 = param_8;
    puVar13 = param_7;
    puVar41 = param_5;
    puVar49 = param_3;
    if (bVar50) break;
    *(byte *)puVar33 = (byte)*puVar33 + (char)puVar24;
    puVar41 = puVar23;
    puVar49 = puVar48;
  } while( true );
  *pcVar12 = *pcVar12 + (char)pcVar12;
  bVar5 = (byte)param_10;
  *param_10 = *param_10 + bVar5;
  puVar23 = (uint *)CONCAT22((short)((uint)param_9 >> 0x10),
                             CONCAT11((byte)((uint)param_9 >> 8) | (byte)*param_8,(char)param_9));
  *(char *)param_7 = (char)*param_7 + (char)param_7;
  pbVar9 = (byte *)((int)pcVar19 * 2);
  *pbVar9 = *pbVar9 ^ bVar5;
  uVar3 = *(undefined6 *)pcVar19;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar9 = (byte *)uVar3;
  bVar27 = (byte)uVar3;
  *pbVar9 = *pbVar9 + bVar27;
  bVar5 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar27;
  puVar47 = (uint *)((int)puVar23 + 0x11673);
  uVar10 = *puVar47;
  uVar2 = *puVar47;
  *puVar47 = uVar2 + (int)puVar34 + (uint)CARRY1(bVar5,bVar27);
  param_3 = (uint *)CONCAT22(param_3._2_2_,puStack_4._0_2_);
  pbVar9 = pbVar9 + (uint)(CARRY4(uVar10,(uint)puVar34) ||
                          CARRY4(uVar2 + (int)puVar34,(uint)CARRY1(bVar5,bVar27))) +
                    *(int *)((int)puVar23 + (int)puVar34);
  puVar45 = param_4;
  uVar31 = puStack_4._0_2_;
code_r0x00404cca:
  puStack_4._0_2_ = uVar31;
  cVar4 = (char)pbVar9 + '\x04';
  puVar47 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar4);
  if (SCARRY1((char)pbVar9,'\x04') == cVar4 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
  puVar33 = puVar45 + 1;
  out(*puVar45,(short)puVar34);
  uVar10 = *puVar23;
  uVar2 = *puVar34;
  bVar5 = (byte)puVar23;
  *(byte *)puVar34 = (byte)*puVar34 + bVar5;
  iVar16 = (CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 + '\x03') & uVar10) + iRam00008c38;
  *(byte *)puVar23 = (byte)*puVar23 + (char)puVar34;
  pcVar12 = (char *)(iVar16 + (uint)CARRY1((byte)uVar2,bVar5) + 0x1246f);
  uVar21 = (undefined3)((uint)puVar23 >> 8);
  bVar5 = bVar5 | (byte)*puVar34;
  puVar24 = (uint *)CONCAT31(uVar21,bVar5);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar12 >> 8);
  puVar47 = (uint *)(CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + *pcVar12) + 0x1fbeef2);
  uVar10 = *puVar47;
  *puVar47 = (uint)(*puVar47 + (int)puVar47);
  if (CARRY4(uVar10,(uint)puVar47)) {
    *puVar47 = (uint)(*puVar47 + (int)puVar47);
    pcVar12 = (char *)CONCAT31(uVar21,bVar5 | bRam00282809);
    cVar4 = (char)((uint)puVar23 >> 8);
    *(byte *)puVar13 = (byte)*puVar13 + cVar4;
    *pcVar12 = *pcVar12 - cVar4;
    *(byte *)puVar47 = *(byte *)puVar47 + (char)puVar47;
    iVar16 = (int)pcVar12 - *puVar13;
    puVar45 = puVar45 + 2;
    out(*puVar33,(short)puVar34);
    *puVar47 = (uint)(*puVar47 + (int)puVar47);
    puVar24 = (uint *)CONCAT22((short)((uint)iVar16 >> 0x10),
                               CONCAT11((byte)((uint)iVar16 >> 8) | bRambf73070b,(char)iVar16));
code_r0x00404d15:
    uVar10 = *puVar47;
    bVar5 = (byte)puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar5;
    puVar33 = puVar45 + 1;
    out(*puVar45,(short)puVar34);
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar27 = bVar5 + in_AF * '\x06';
    puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),
                               bVar27 + (0x90 < (bVar27 & 0xf0) |
                                        CARRY1((byte)uVar10,bVar5) | in_AF * (0xf9 < bVar27)) * '`')
    ;
  }
  *puVar47 = (uint)(*puVar47 + (int)puVar47);
  bVar5 = (byte)puVar47 | (byte)*puVar49;
  puVar45 = puVar33 + 1;
  uVar30 = SUB42(puVar34,0);
  out(*puVar33,uVar30);
  *(byte *)puVar24 = (byte)*puVar24 - bVar5;
  uVar10 = *puVar34;
  bVar27 = (byte)puVar24;
  *(byte *)puVar34 = (byte)*puVar34 + bVar27;
  iVar16 = CONCAT31((int3)((uint)puVar47 >> 8),bVar5) + *puVar45 + (uint)CARRY1((byte)uVar10,bVar27)
  ;
  pcVar12 = (char *)((int)puVar41 - *puVar34);
  uVar21 = (undefined3)((uint)iVar16 >> 8);
  cVar4 = (char)iVar16 + (byte)*puVar45 + (puVar41 < (uint *)*puVar34);
  puVar47 = (uint *)CONCAT31(uVar21,cVar4);
  bVar5 = (byte)((uint)puVar24 >> 8);
  *(byte *)puVar24 = (byte)*puVar24 - bVar5;
  *puVar47 = (uint)(*puVar47 + (int)puVar47);
  bVar27 = bVar27 | *(byte *)((int)puVar34 + (int)puVar47);
  uVar31 = (undefined2)((uint)puVar24 >> 0x10);
  if ((POPCOUNT(bVar27) & 1U) == 0) {
    *(byte *)puVar47 = (byte)*puVar47 + cVar4;
    pcVar19 = (char *)CONCAT31(uVar21,cVar4 + '\x12');
    *pcVar19 = *pcVar19 + bVar5;
    puVar47 = (uint *)CONCAT31(uVar21,(cVar4 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar24 >> 8),bVar27));
    uVar10 = *puVar34;
    *(byte *)puVar34 = (byte)*puVar34 + bVar27;
    if (!CARRY1((byte)uVar10,bVar27)) {
      pbVar9 = (byte *)((uint)puVar47 | *puVar47);
      out(*puVar45,uVar30);
      *pbVar9 = *pbVar9 + (char)pbVar9;
      bVar6 = *pbVar9;
      piVar18 = (int *)CONCAT22(uVar31,CONCAT11(bVar5 | bVar6,bVar27));
      iVar16 = (int)pbVar9 - *piVar18;
      *(byte *)puVar34 = (byte)*puVar34 + bVar27;
      puVar47 = puVar33 + 3;
      out(puVar33[2],uVar30);
      uRam12060000 = (undefined1)iVar16;
      *(char *)((int)piVar18 + iVar16) = *(char *)((int)piVar18 + iVar16) - (bVar5 | bVar6);
      *(byte *)puVar34 = (byte)*puVar34 + bVar27;
      pbVar9 = (byte *)(iVar16 + -0x120edecd);
      *(byte *)puVar47 = (byte)*puVar47 + 1;
      bVar5 = *pbVar9;
      bVar6 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar6;
      pcVar12 = pcVar12 + ((-1 - *(int *)((int)puVar49 + 0x42)) - (uint)CARRY1(bVar5,bVar6));
      *pbVar9 = *pbVar9 + bVar6;
      bVar5 = (byte)puVar13 | (byte)((uint)pbVar9 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar9;
      uVar10 = *puVar34;
      pcVar19 = (char *)(((uint)pbVar9 | 0x11) + 0x511072c);
      puVar45 = puVar33 + 4;
      out(*puVar47,uVar30);
      puVar34 = (uint *)((int)puVar34 + 1);
      *pcVar19 = *pcVar19 + (char)pcVar19;
      bVar6 = (byte)((uint)pcVar19 >> 8);
      puVar13 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar13 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar13 >> 8) | (byte)uVar10,
                                                          bVar5)) >> 8),bVar5 | bVar6);
      uVar21 = (undefined3)((uint)pcVar19 >> 8);
      bVar5 = (char)pcVar19 - *pcVar19;
      pcVar19 = (char *)CONCAT31(uVar21,bVar5);
      *pcVar19 = *pcVar19 + bVar5;
      *(int *)((int)pcVar19 * 2) = (int)(*(int *)((int)pcVar19 * 2) + (int)puVar13);
      *(byte *)puVar34 = *(byte *)puVar34 + bVar5;
      *pcVar12 = *pcVar12 + bVar6;
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar10 = CONCAT31(uVar21,bVar5 + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar10;
      pbVar9 = (byte *)CONCAT22((short)(uVar10 >> 0x10),CONCAT11(bVar6 + in_AF,bVar5));
      *(byte *)puVar45 = (byte)*puVar45 + bVar27;
      *pbVar9 = *pbVar9 + bVar5;
      *pbVar9 = *pbVar9 + bVar5;
      bVar50 = CARRY1(bVar5,*pbVar9);
      puVar47 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar5 + *pbVar9);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar13 = (byte)*puVar13 - (char)puVar34;
  }
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
  bVar50 = false;
  piVar18 = (int *)CONCAT22(uVar31,CONCAT11(bVar5 | (byte)*puVar34,bVar27));
code_r0x00404d9a:
  do {
    puVar33 = puVar34;
    *puVar47 = (*puVar47 - (int)puVar47) - (uint)bVar50;
    bVar5 = (byte)((uint)piVar18 >> 8);
    uVar31 = (undefined2)((uint)piVar18 >> 0x10);
    bVar27 = (byte)piVar18;
    bVar6 = bVar5 + (byte)iRam00000c00;
    pbVar9 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar5,(byte)iRam00000c00));
    *(byte *)puVar33 = (byte)*puVar33 + bVar27;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 - (byte)*puVar45);
    bVar5 = *pbVar9;
    puVar47 = (uint *)(pbVar9 + (uint)CARRY1(bVar6,*pbVar9) + *(int *)pbVar9);
    *(byte *)puVar33 = (byte)*puVar33 + bVar27;
    cVar37 = ((bVar6 + bVar5) - (byte)*puVar33) + (byte)*puVar47;
    pcVar19 = (char *)CONCAT22(uVar31,CONCAT11(cVar37,bVar27));
    puVar41 = puVar49 + 1;
    uVar10 = in((short)puVar33);
    *puVar49 = uVar10;
    cVar4 = (char)puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + cVar4;
    uVar21 = (undefined3)((uint)puVar33 >> 8);
    bVar6 = (byte)puVar33 | (byte)*puVar45;
    pcVar25 = (char *)CONCAT31(uVar21,bVar6);
    *pcVar19 = *pcVar19 + '\x01';
    bVar5 = (cVar37 - *pcVar25) + (byte)*puVar47;
    pcVar19 = (char *)CONCAT22(uVar31,CONCAT11(bVar5,bVar27));
    puVar49 = puVar49 + 2;
    uVar10 = in((short)pcVar25);
    *puVar41 = uVar10;
    *(byte *)puVar47 = (byte)*puVar47 + cVar4;
    bVar6 = bVar6 | (byte)*puVar45;
    puVar34 = (uint *)CONCAT31(uVar21,bVar6);
    *pcVar19 = *pcVar19 + '\x01';
    bVar50 = bVar27 < *(byte *)((int)puVar34 + 2);
    cVar37 = bVar27 - *(byte *)((int)puVar34 + 2);
    piVar18 = (int *)CONCAT31((int3)((uint)pcVar19 >> 8),cVar37);
  } while ((POPCOUNT(cVar37) & 1U) != 0);
  *(byte *)puVar47 = (byte)*puVar47 + cVar4;
  bVar27 = cVar4 + 0x7b;
  pbVar9 = (byte *)CONCAT31((int3)((uint)puVar47 >> 8),bVar27);
  *(byte *)((int)puVar13 + (int)pbVar9) = *(byte *)((int)puVar13 + (int)pbVar9) + bVar27;
  puVar47 = puVar45 + 1;
  uVar30 = SUB42(puVar34,0);
  out(*puVar45,uVar30);
  pbVar17 = (byte *)((int)puVar13 + -1);
  *pbVar9 = *pbVar9 + bVar27;
  bVar5 = bVar5 | (byte)*puVar34;
  piVar18 = (int *)CONCAT22(uVar31,CONCAT11(bVar5,cVar37));
  *pbVar9 = *pbVar9 + bVar27;
  *pbVar17 = *pbVar17 + bVar6;
  *pbVar17 = *pbVar17 ^ bVar27;
  *(byte *)puVar34 = (byte)*puVar34 + bVar5;
  *pbVar9 = *pbVar9 + bVar27;
  do {
    bVar28 = (byte)((uint)piVar18 >> 8);
    *(byte *)puVar49 = (byte)*puVar49 + bVar28;
    bVar5 = *pbVar9;
    bVar27 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar27;
    *(byte **)((int)puVar13 + 0x17) =
         (byte *)((int)puVar47 + (uint)CARRY1(bVar5,bVar27) + *(int *)((int)puVar13 + 0x17));
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    uVar22 = (undefined3)((uint)pbVar9 >> 8);
    bVar27 = bVar27 | (byte)*puVar47;
    puVar49 = (uint *)((int)puVar49 + *(int *)(pcVar12 + -0x34));
    *(char *)CONCAT31(uVar22,bVar27) = *(char *)CONCAT31(uVar22,bVar27) + bVar27;
    bVar5 = bVar27 + 2;
    cVar4 = (char)((uint)puVar33 >> 8);
    bVar29 = (byte)piVar18;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      pbVar9 = (byte *)CONCAT31(uVar22,bVar27 + 0x15 + (0xfd < bVar27));
      if (0xec < bVar5 || CARRY1(bVar27 + 0x15,0xfd < bVar27)) {
        *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      }
code_r0x00404e60:
      pcVar12 = pcVar12 + -*puVar34;
      bVar5 = *pbVar9;
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      pbVar35 = (byte *)((int)puVar47 + (-(uint)CARRY1(bVar5,(byte)pbVar9) - *(int *)pbVar9));
      pbVar9 = pbVar9 + *(int *)pbVar9;
      puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_DS);
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      *(char *)piVar18 = (char)*piVar18 + cVar4;
      bVar5 = *pbVar9;
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      *(byte **)(pbVar17 + (int)puVar34) =
           (byte *)((int)puVar34 +
                   (uint)CARRY1(bVar5,(byte)pbVar9) + *(int *)(pbVar17 + (int)puVar34));
      pbVar9 = pbVar9 + 0x73061314;
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      uVar22 = (undefined3)((uint)piVar18 >> 8);
      bVar29 = bVar29 | (byte)*puVar34;
      pcVar25 = (char *)CONCAT31(uVar22,bVar29);
      *pbVar9 = *pbVar9 + (char)pbVar9;
      cVar4 = (char)pbVar9 + 'o';
      pcVar19 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar4);
      *pcVar19 = *pcVar19 + cVar4;
      out(*(undefined4 *)pbVar35,uVar30);
      uVar10 = *puVar34;
      *(byte *)puVar34 = (byte)*puVar34 + bVar29;
      pcVar19 = pcVar19 + (uint)CARRY1((byte)uVar10,bVar29) + *puVar49;
      *pcVar19 = *pcVar19 + (char)pcVar19;
      *pcVar25 = *pcVar25 + bVar6;
      puVar47 = (uint *)(pbVar35 + 8);
      out(*(undefined4 *)(pbVar35 + 4),uVar30);
      *(byte *)puVar34 = (byte)*puVar34 + bVar29;
      piVar18 = (int *)((uint)pcVar19 | *puVar49);
      pcVar25[0x390a0000] = pcVar25[0x390a0000] - bVar28;
      pbVar17 = (byte *)0x7000000;
      *(byte *)puVar49 = (byte)*puVar49 - bVar28;
      *piVar18 = *piVar18 + (int)piVar18;
      puVar45 = (uint *)CONCAT31(uVar22,bVar29 | *(byte *)((int)piVar18 + (int)pcVar25));
      *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) - bVar28;
      cRam07000000 = cRam07000000 + bVar28;
      piVar18 = (int *)((uint)piVar18 | 0x777b02);
      pbVar9 = (byte *)((int)puVar49 + (int)pcVar12 * 2);
      bVar50 = SCARRY1(*pbVar9,(char)piVar18);
      *pbVar9 = *pbVar9 + (char)piVar18;
      bVar5 = *pbVar9;
      *(char *)piVar18 = (char)*piVar18;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar22,bVar5) = *(char *)CONCAT31(uVar22,bVar5) + bVar5;
    bVar27 = bVar27 + 0x71;
    pbVar9 = (byte *)CONCAT31(uVar22,bVar27);
    *pbVar9 = *pbVar9;
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    *piVar18 = (*piVar18 - (int)pbVar9) - (uint)(0x90 < bVar5);
    uVar10 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar27;
    if (!CARRY1((byte)uVar10,bVar27)) goto code_r0x00404e60;
    *pbVar9 = *pbVar9 + bVar27;
    uVar31 = (undefined2)((uint)piVar18 >> 0x10);
    bVar28 = bVar28 | *pbVar9;
    pbVar9 = pbVar9 + -*(int *)pbVar9;
    *pbVar17 = *pbVar17 + bVar28;
    cVar37 = bVar29 - *(byte *)((int)puVar34 + 2);
    piVar18 = (int *)CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar28,bVar29)) >> 8),cVar37);
  } while ((POPCOUNT(cVar37) & 1U) != 0);
  cVar38 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cVar38;
  uVar22 = (undefined3)((uint)pbVar9 >> 8);
  pcVar19 = (char *)CONCAT31(uVar22,cVar38 + '{');
  out(*puVar47,uVar30);
  *pcVar19 = *pcVar19 + cVar38 + '{';
  bVar27 = cVar38 + 0x7e;
  pbVar9 = (byte *)CONCAT31(uVar22,bVar27);
  puVar47 = puVar45 + 3;
  out(puVar45[2],uVar30);
  pbVar17 = (byte *)((int)puVar13 + -2);
  *pbVar9 = *pbVar9 + bVar27;
  bVar28 = bVar28 | (byte)*puVar34;
  puVar45 = (uint *)CONCAT22(uVar31,CONCAT11(bVar28,cVar37));
  *pbVar9 = *pbVar9 + bVar27;
  *pbVar17 = *pbVar17 + bVar6;
  *pbVar17 = *pbVar17 ^ bVar27;
  *(byte *)puVar34 = (byte)*puVar34 + bVar28;
  *pbVar9 = *pbVar9 + bVar27;
  *pbVar9 = *pbVar9 + cVar4;
  bVar5 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar27;
  puVar13[6] = (uint)((int)puVar47 + (uint)CARRY1(bVar5,bVar27) + puVar13[6]);
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  bVar27 = bVar27 | (byte)*puVar47;
  puVar49 = (uint *)((int)puVar49 + *(int *)(pcVar12 + -0x33));
  *(char *)CONCAT31(uVar22,bVar27) = *(char *)CONCAT31(uVar22,bVar27) + bVar27;
  bVar50 = SCARRY1(bVar27,'\x02');
  bVar5 = bVar27 + 2;
  piVar18 = (int *)CONCAT31(uVar22,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar5;
    return CONCAT31(uVar22,bVar27 + 0x71);
  }
code_r0x00404ebf:
  bVar27 = (byte)piVar18;
  uVar22 = (undefined3)((uint)piVar18 >> 8);
  if (bVar5 != 0 && bVar50 == (char)bVar5 < '\0') {
    *(byte *)piVar18 = (char)*piVar18 + bVar27;
    puVar47[(int)puVar49 * 2] =
         (uint)((int)puVar34 + (uint)(0xd2 < bVar27) + puVar47[(int)puVar49 * 2]);
    return CONCAT31(uVar22,bVar27 + 0x2d);
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar5 = *pbVar17;
  *puVar47 = (uint)(*puVar47 + (int)piVar18);
  bVar29 = (byte)((uint)puVar45 >> 8);
  *(byte *)piVar18 = (char)*piVar18 - bVar29;
  *(byte *)piVar18 = (char)*piVar18 + bVar27;
  pbVar9 = (byte *)(CONCAT31(uVar21,bVar6 | bVar5) - *(int *)pbVar17);
  puVar41 = (uint *)CONCAT31(uVar22,bVar27 + 6);
  *(uint *)(pbVar17 + (int)puVar47 * 2) =
       (int)puVar41 + (uint)(0xf9 < bVar27) + *(int *)(pbVar17 + (int)puVar47 * 2);
  *(byte *)puVar45 = (byte)*puVar45 ^ bVar27 + 6;
  bVar27 = (byte)puVar45;
  *pbVar9 = *pbVar9 + bVar27;
  puVar13 = puVar47 + 1;
  uVar31 = SUB42(pbVar9,0);
  out(*puVar47,uVar31);
  *puVar45 = *puVar45 ^ (uint)puVar41;
  *pbVar9 = *pbVar9 + bVar27;
  puVar33 = (uint *)(pbVar17 + -*(int *)pbVar17);
  *(uint *)((int)puVar49 + 0x31) = *(uint *)((int)puVar49 + 0x31) | (uint)pcVar12;
  *puVar41 = *puVar41 + (int)puVar41;
  puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),CONCAT11(bVar29 | (byte)*puVar33,bVar27)
                            );
  *(byte **)(pbVar9 + 0x6e) = (byte *)(*(int *)(pbVar9 + 0x6e) + (int)puVar13);
  piVar18 = (int *)((uint)puVar41 | *puVar41);
  bVar6 = (byte)puVar33;
  *(byte *)puVar49 = (byte)*puVar49 - bVar6;
  bVar5 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar27;
  if (CARRY1(bVar5,bVar27)) {
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar5 = pbVar9[0x11];
    uVar30 = (undefined2)((uint)puVar33 >> 0x10);
    out(*puVar13,uVar31);
    puVar45 = (uint *)((int)puVar45 + 1);
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    bVar32 = (byte)((uint)puVar33 >> 8) | bVar5 | *pbVar9;
    pcVar19 = (char *)((int)piVar18 + -0x21000001);
    bVar5 = (byte)pcVar19 | 0x11;
    uVar21 = (undefined3)((uint)pcVar19 >> 8);
    cVar4 = bVar5 - 7;
    pcVar25 = (char *)CONCAT31(uVar21,cVar4);
    *puVar49 = (uint)(pcVar25 + (uint)(bVar5 < 7) + *puVar49);
    puVar13 = puVar47 + 3;
    out(puVar47[2],uVar31);
    pbVar9 = pbVar9 + 1;
    *pcVar25 = *pcVar25 + cVar4;
    bVar29 = (byte)((uint)pcVar19 >> 8);
    bVar28 = bVar6 | bVar29;
    bVar27 = cVar4 - *pcVar25;
    bVar5 = *(byte *)puVar45;
    *(byte *)puVar45 = *(byte *)puVar45 + bVar27;
    *(char *)CONCAT31(uVar21,bVar27) =
         *(char *)CONCAT31(uVar21,bVar27) + bVar27 + CARRY1(bVar5,bVar27);
    *pbVar9 = *pbVar9 + bVar27;
    *(byte *)puVar13 = (byte)*puVar13 + bVar28;
    bVar5 = (byte)((uint)pbVar9 >> 8);
    *(byte *)puVar45 = *(byte *)puVar45 + bVar27 + CARRY1((byte)pbVar9,bVar5);
    piVar18 = (int *)CONCAT31(uVar21,bVar27);
    *(byte *)piVar18 = (char)*piVar18 + bVar27;
    pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                              CONCAT11(bVar5 + bVar29,(byte)pbVar9 + bVar5));
    puVar33 = (uint *)CONCAT22(uVar30,CONCAT11(bVar32 + *(char *)(CONCAT31((int3)(CONCAT22(uVar30,
                                                  CONCAT11(bVar32,bVar6)) >> 8),bVar28) + 0x76),
                                               bVar28));
    puStack_4._0_2_ = puStack_10._0_2_;
code_r0x00404fa4:
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    pcVar19 = (char *)(CONCAT31((int3)((uint)piVar18 >> 8),(char)piVar18 + '(') ^ *puVar45);
    cVar38 = (char)puVar45;
    *pbVar9 = *pbVar9 + cVar38;
    uVar31 = (undefined2)((uint)puVar33 >> 0x10);
    cVar39 = (char)puVar33;
    cVar42 = (char)((uint)puVar33 >> 8) + *(byte *)((int)puVar33 + 0x75);
    *pcVar19 = *pcVar19 + (char)pcVar19;
    cVar4 = (char)pcVar19 + 'o';
    pcVar19 = (char *)CONCAT31((int3)((uint)pcVar19 >> 8),cVar4);
    *pcVar19 = *pcVar19 + cVar4;
    cVar7 = (char)((uint)puVar45 >> 8);
    *pcVar12 = *pcVar12 - cVar7;
    pbVar9[1] = pbVar9[1] + cVar38;
    pcVar19 = pcVar19 + -0x757b021b;
    cVar4 = (char)pcVar19;
    *pcVar19 = *pcVar19 + cVar4;
    uVar21 = (undefined3)((uint)pcVar19 >> 8);
    cVar37 = cVar4 + 'o';
    pcVar19 = (char *)CONCAT31(uVar21,cVar37);
    pbVar35 = pbVar9 + 2;
    *pcVar19 = *pcVar19 + cVar37;
    iVar16 = CONCAT22(uVar31,CONCAT11(cVar42 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar42,cVar39)) +
                                                        0x76),cVar39));
    *pcVar19 = *pcVar19 + cVar37;
    pcVar19 = (char *)CONCAT31(uVar21,cVar4 + -0x22);
    puVar47 = (uint *)((int)puVar49 + 1);
    *(byte *)puVar49 = (byte)*puVar13;
    *pcVar19 = *pcVar19 + cVar4 + -0x22;
    *(byte *)((int)puVar45 + (int)pcVar19) =
         *(byte *)((int)puVar45 + (int)pcVar19) - (char)((uint)pbVar35 >> 8);
    *pbVar35 = *pbVar35 + cVar38;
    bVar27 = cVar7 - pbVar9[4];
    pbVar17 = (byte *)((int)puVar13 + 5);
    out(*(undefined4 *)((int)puVar13 + 1),(short)pbVar35);
    puVar13 = (uint *)((uint)(pcVar19 + *(int *)(pcVar19 + iVar16)) ^ 0x280a0001);
    *(byte *)puVar13 = (byte)*puVar13 << 1 | (char)(byte)*puVar13 < '\0';
    *pbVar17 = *pbVar17 + (char)puVar13;
    pbVar17 = pbVar17 + *(int *)(pbVar9 + -0x5c);
    pbVar9 = (byte *)((uint)puVar13 | *puVar13);
    *pbVar17 = *pbVar17 + (char)pbVar9;
    puVar33 = (uint *)CONCAT31((int3)((uint)iVar16 >> 8),cVar39 - (char)pbVar35);
    bVar5 = *pbVar9;
    puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),CONCAT11(bVar27 + *pbVar9,cVar38));
    iVar16 = *(int *)pbVar9;
    *pbVar35 = *pbVar35 + cVar38;
    cVar4 = (char)(pbVar9 + (uint)CARRY1(bVar27,bVar5) + iVar16) + 'r';
    puVar49 = (uint *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar27,bVar5) + iVar16) >> 8),
                               cVar4);
    pbVar9 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),CONCAT11(10,(char)pbVar35));
    *(char *)(puVar49 + 10) = (char)puVar49[10] + '\n';
    *pbVar17 = *pbVar17 + cVar4;
    puVar13 = (uint *)(pbVar17 + *(int *)(pbVar9 + -0x5e));
    uVar10 = *puVar49;
    cVar4 = (char)((uint)puVar49 | uVar10);
    *(byte *)puVar13 = (byte)*puVar13 + cVar4;
    uVar21 = (undefined3)(((uint)puVar49 | uVar10) >> 8);
    cVar37 = cVar4 + (byte)*puVar33;
    puVar49 = (uint *)CONCAT31(uVar21,cVar37);
    if (SCARRY1(cVar4,(byte)*puVar33) == cVar37 < '\0') goto code_r0x00405090;
    *(byte *)puVar49 = (byte)*puVar49 + cVar37;
    piVar18 = (int *)CONCAT31(uVar21,cVar37 + '\x02');
    puVar49 = puVar47;
  }
  else {
    out(2,(char)piVar18);
    if ((POPCOUNT(*pbVar9) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar21 = (undefined3)((uint)piVar18 >> 8);
  cVar4 = (char)piVar18 + '}';
  pbVar17 = (byte *)CONCAT31(uVar21,cVar4);
  pbVar9[(int)pbVar17] = pbVar9[(int)pbVar17] + cVar4;
  pbVar9[0x280a0000] = pbVar9[0x280a0000] - (char)((uint)piVar18 >> 8);
  bVar5 = (byte)puVar45 & 7;
  *pbVar17 = *pbVar17 << bVar5 | *pbVar17 >> 8 - bVar5;
  *(byte *)puVar13 = (byte)*puVar13 + cVar4;
  cVar38 = (char)puVar33 - (byte)*puVar13;
  uVar31 = (undefined2)((uint)puVar33 >> 0x10);
  cVar7 = (char)((uint)puVar33 >> 8) + *(char *)(CONCAT31((int3)((uint)puVar33 >> 8),cVar38) + 0x7c)
  ;
  pcVar19 = (char *)CONCAT22(uVar31,CONCAT11(cVar7,cVar38));
  *pbVar17 = *pbVar17 + cVar4;
  bVar27 = (char)piVar18 + 0xa7U & *pbVar9;
  puVar47 = (uint *)((int)puVar49 + *(int *)(pcVar12 + 0x7c));
  *(char *)CONCAT31(uVar21,bVar27) = *(char *)CONCAT31(uVar21,bVar27) + bVar27;
  bVar27 = bVar27 + 0x2a;
  pbVar17 = (byte *)CONCAT31(uVar21,bVar27);
  *pbVar17 = *pbVar17 + bVar27;
  *pcVar19 = *pcVar19 + cVar38;
  *pbVar9 = *pbVar9 ^ bVar27;
  *pcVar19 = *pcVar19 + bVar27;
  bVar5 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar27;
  cVar4 = (bVar27 - *pbVar17) - CARRY1(bVar5,bVar27);
  *(byte *)puVar45 = (byte)*puVar45 + (byte)pbVar9;
  cVar7 = cVar7 + pcVar19[0x7b];
  *(char *)CONCAT31(uVar21,cVar4) = *(char *)CONCAT31(uVar21,cVar4) + cVar4;
  pcVar19 = (char *)CONCAT31(uVar21,cVar4 + 'o');
  *pcVar19 = *pcVar19 + cVar4 + 'o';
  pcVar19 = pcVar19 + 0x2ed7fde6;
  cVar37 = (char)pcVar19;
  *pcVar19 = *pcVar19 + cVar37;
  cVar4 = *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar38)) + 0x7b);
  *pcVar19 = *pcVar19 + cVar37;
  piVar18 = (int *)(CONCAT31((int3)((uint)pcVar19 >> 8),cVar37 + 'o') + 0x6f060000);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar22 = (undefined3)((uint)pbVar9 >> 8);
  bVar27 = (byte)pbVar9 | (byte)*puVar13;
  pbVar35 = (byte *)CONCAT31(uVar22,bVar27);
  uVar10 = CONCAT22(uVar31,CONCAT11(cVar7 + cVar4,cVar38)) | (uint)puVar13;
  uVar21 = (undefined3)((uint)piVar18 >> 8);
  bVar5 = (byte)piVar18 | *pbVar35;
  pbVar17 = (byte *)CONCAT31(uVar21,bVar5);
  cVar4 = (byte)puVar45 - bVar27;
  puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),cVar4);
  *pbVar17 = *pbVar17 + bVar5;
  puVar49 = puVar13 + 1;
  out(*puVar13,(short)pbVar35);
  *pbVar17 = bVar5;
  *pbVar35 = *pbVar35 + cVar4;
  puVar13 = puVar13 + 2;
  out(*puVar49,(short)pbVar35);
  *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
  puVar33 = (uint *)(CONCAT31((int3)(uVar10 >> 8),(char)uVar10 - (char)((uint)pbVar9 >> 8)) |
                    (uint)puVar13);
  pbVar9 = (byte *)CONCAT31(uVar22,(bVar27 | (byte)*puVar13) + (byte)*puVar47);
  cVar4 = bVar5 - (byte)*puVar47;
  puVar49 = (uint *)CONCAT31(uVar21,cVar4 - *(char *)CONCAT31(uVar21,cVar4));
code_r0x00405090:
  *puVar49 = (uint)(pbVar9 + *puVar49);
  cVar4 = (char)puVar49;
  *(byte *)puVar49 = (byte)*puVar49 + cVar4;
  *(byte *)puVar49 = (byte)*puVar49 + cVar4;
  *(byte *)puVar49 = (byte)*puVar49 + cVar4;
  *puVar45 = *puVar45 - (int)pcVar12;
  uVar10 = *puVar13;
  bVar5 = (byte)pbVar9;
  *(byte *)puVar13 = (byte)*puVar13 + bVar5;
  *(byte *)puVar49 = (byte)*puVar49 + cVar4 + CARRY1((byte)uVar10,bVar5);
  *(byte *)puVar45 = (byte)*puVar45 + cVar4;
  uVar10 = *puVar33;
  *(byte *)puVar33 = (byte)*puVar33 + 0x72;
  *(byte *)puVar33 = (byte)*puVar33;
  cVar4 = (char)((uint)pbVar9 >> 8);
  if (SCARRY1((byte)uVar10,'r')) {
    puVar13 = (uint *)((int)puVar13 + *(int *)(pbVar9 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar49;
      uVar21 = (undefined3)((uint)puVar49 >> 8);
      cVar37 = (char)puVar49 + (byte)*puVar33;
      pcVar19 = (char *)CONCAT31(uVar21,cVar37);
      puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                 CONCAT11((char)((uint)puVar33 >> 8) +
                                          *(byte *)((int)puVar33 + 0x7b),(char)puVar33));
      *pcVar19 = *pcVar19 + cVar37;
      in_AF = 9 < (cVar37 + 0x6fU & 0xf) | in_AF;
      uVar10 = CONCAT31(uVar21,cVar37 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar10;
      piVar18 = (int *)CONCAT22((short)(uVar10 >> 0x10),
                                CONCAT11((char)((uint)puVar49 >> 8) + in_AF,bVar6));
      *piVar18 = *piVar18 + (int)piVar18;
      uVar21 = (undefined3)((uint)piVar18 >> 8);
      bVar6 = bVar6 | *(byte *)(piVar18 + 0x354a);
      bVar6 = bVar6 - *(char *)CONCAT31(uVar21,bVar6);
      pbVar17 = (byte *)CONCAT31(uVar21,bVar6);
      bVar27 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar6;
      puVar13 = (uint *)((int)puVar13 + (-(uint)CARRY1(bVar27,bVar6) - *(int *)pbVar17));
      puVar49 = (uint *)(pbVar17 + 0xfc00);
      *pbVar9 = *pbVar9 + cVar4;
      uVar10 = *puVar49;
      bVar27 = (byte)puVar49;
      *(byte *)puVar49 = (byte)*puVar49 + bVar27;
      uVar14 = (uint)CARRY1((byte)uVar10,bVar27);
      uVar10 = *puVar33;
      uVar2 = *puVar33;
      *puVar33 = (uint)((byte *)(uVar2 + (int)puVar49) + uVar14);
      if (!CARRY4(uVar10,(uint)puVar49) && !CARRY4(uVar2 + (int)puVar49,uVar14)) break;
      *(byte *)puVar49 = (byte)*puVar49 + bVar27;
    }
  }
  uVar10 = (uint)puVar49 | *puVar49;
  uVar31 = SUB42(pbVar9,0);
  *(byte *)puVar13 = (byte)*puVar13 + (char)uVar10;
  piVar18 = (int *)(uVar10 + 0xc1872);
  if (SCARRY4(uVar10,0xc1872)) {
    cVar37 = (char)piVar18;
    *(char *)piVar18 = *(char *)piVar18 + cVar37;
    *pbVar9 = *pbVar9 + cVar37;
    *(char *)piVar18 = *(char *)piVar18 + cVar37;
    *(byte *)puVar33 = (byte)*puVar33 + (char)puVar45;
    *(char *)piVar18 = *(char *)piVar18 + cVar37;
    *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) + bVar5;
    puVar49 = puVar13;
    goto code_r0x00405117;
  }
  do {
    uVar10 = *puVar13;
    bVar5 = (byte)piVar18;
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    if (CARRY1((byte)uVar10,bVar5)) {
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      uVar21 = (undefined3)((uint)puVar45 >> 8);
      bVar27 = (byte)puVar45 | bRam396f1609;
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      puVar45 = (uint *)CONCAT31(uVar21,bVar27 | *(byte *)CONCAT31(uVar21,bVar27));
      uVar21 = (undefined3)((uint)piVar18 >> 8);
      bVar5 = bVar5 | *pbVar9;
      pcVar19 = (char *)CONCAT31(uVar21,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        puVar49 = puVar13 + 1;
        out(*puVar13,uVar31);
        uVar10 = CONCAT22((short)((uint)piVar18 >> 0x10),(ushort)bVar5);
        *(byte *)puVar49 = (byte)*puVar49 + bVar5;
        pcVar19 = (char *)(uVar10 | 8);
        cVar37 = (char)((uint)puVar33 >> 8) + *(byte *)((int)puVar33 + 0x7a);
        puVar41 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),CONCAT11(cVar37,(char)puVar33));
        *pcVar19 = *pcVar19 + (char)pcVar19;
        cVar4 = (char)pcVar19 + 'o';
        piVar18 = (int *)CONCAT31((int3)(uVar10 >> 8),cVar4);
        *(char *)piVar18 = (char)*piVar18 + cVar4;
        *(byte *)puVar45 = (byte)*puVar45 + 1;
        puVar13 = puVar13 + 2;
        out(*puVar49,uVar31);
        pbVar9 = (byte *)((uint)pbVar9 ^ uRam08122c04);
        iVar16 = CONCAT31((int3)((uint)(*piVar18 * 0x17070600) >> 8),2);
        *(char *)(iVar16 * 2) = *(char *)(iVar16 * 2) - cVar37;
        do {
          bVar5 = (byte)iVar16;
          *(byte *)puVar13 = (byte)*puVar13 + bVar5;
          bVar50 = CARRY1(bVar5,(byte)*puVar41);
          uVar21 = (undefined3)((uint)iVar16 >> 8);
          cVar4 = bVar5 + (byte)*puVar41;
          pbVar17 = (byte *)CONCAT31(uVar21,cVar4);
          uVar31 = in_DS;
          uVar30 = uStack_50;
          if (SCARRY1(bVar5,(byte)*puVar41) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar17 = *pbVar17 + cVar4;
          uVar10 = CONCAT31(uVar21,cVar4 + '\'') + 0x1ebd9f3;
          uStack_54 = (undefined1)puStack_4._0_2_;
          uStack_53 = (undefined1)((ushort)puStack_4._0_2_ >> 8);
          piVar18 = (int *)(uVar10 ^ 0x73060000);
          puVar45 = (uint *)((int)puVar45 + 1);
          *piVar18 = (int)(*piVar18 + (int)piVar18);
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                     CONCAT11((byte)((uint)puVar41 >> 8) | pcVar12[0x7e],
                                              (char)puVar41));
          cVar4 = (char)uVar10;
          *(char *)piVar18 = (char)*piVar18 + cVar4;
          uVar10 = CONCAT31((int3)((uint)piVar18 >> 8),cVar4 + '\x02');
          bVar50 = 0xd9f2d2da < uVar10;
          iVar16 = uVar10 + 0x260d2d25;
          pcVar19 = pcVar12;
          do {
            uVar21 = (undefined3)((uint)iVar16 >> 8);
            bVar27 = (char)iVar16 + -2 + bVar50;
            pbVar17 = (byte *)CONCAT31(uVar21,bVar27);
            bVar5 = *pbVar17;
            *pbVar17 = *pbVar17 + bVar27;
            bVar6 = (byte)puVar41;
            uStack_50 = puStack_4._0_2_;
            if (CARRY1(bVar5,bVar27)) {
              *pbVar17 = *pbVar17 + bVar27;
              puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                         CONCAT11((byte)((uint)puVar41 >> 8) | pcVar19[0x7f],bVar6))
              ;
              *pbVar17 = *pbVar17 + bVar27;
              pbVar17 = (byte *)CONCAT31(uVar21,bVar27 + 0x2a);
              *pbVar17 = *pbVar17 + bVar27 + 0x2a;
              *(byte *)puVar41 = (byte)*puVar41 + (char)pbVar9;
              uVar31 = in_DS;
              while( true ) {
                in_DS = uVar31;
                bVar27 = (byte)pbVar17;
                *pbVar9 = *pbVar9 ^ bVar27;
                *pbVar9 = *pbVar9 + (char)puVar41;
                *pbVar17 = *pbVar17 + bVar27;
                *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)pbVar9 >> 8);
                bVar5 = *pbVar17;
                *pbVar17 = *pbVar17 + bVar27;
                uVar10 = *puVar41;
                uVar2 = *puVar41;
                *puVar41 = (uint)(pbVar17 + uVar2 + CARRY1(bVar5,bVar27));
                uVar21 = (undefined3)((uint)pbVar17 >> 8);
                if (CARRY4(uVar10,(uint)pbVar17) ||
                    CARRY4((uint)(pbVar17 + uVar2),(uint)CARRY1(bVar5,bVar27))) break;
                *(byte *)puVar13 = (byte)*puVar13 + bVar27;
                pcVar25 = (char *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                           CONCAT11((char)((uint)puVar45 >> 8) + *pbVar17,
                                                    (char)puVar45));
                *(byte *)puVar13 = (byte)*puVar13 + bVar27;
                piVar18 = (int *)CONCAT31(uVar21,bVar27 | (byte)*puVar41);
                puVar45 = puVar13;
                while( true ) {
                  puVar13 = puVar45 + 1;
                  out(*puVar45,(short)pbVar9);
                  pbVar9 = pbVar9 + 1;
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  bVar6 = (byte)((uint)pcVar25 >> 8) | *pbVar9;
                  uVar21 = (undefined3)((uint)piVar18 >> 8);
                  bVar27 = (byte)piVar18 ^ *pbVar9;
                  pcVar20 = (char *)CONCAT31(uVar21,bVar27);
                  cRam282b0000 = cRam282b0000 - bVar6;
                  *pcVar20 = *pcVar20 + bVar27;
                  pcVar12 = pcVar19 + -*(int *)pbVar9;
                  uStack_54 = (undefined1)in_DS;
                  uStack_53 = (undefined1)((ushort)in_DS >> 8);
                  bVar5 = *(byte *)((int)puVar47 + 0x17);
                  *pcVar20 = *pcVar20 + bVar27;
                  puVar45 = (uint *)CONCAT22((short)((uint)pcVar25 >> 0x10),
                                             CONCAT11(bVar6 + bVar5 | *pbVar9,(char)pcVar25));
                  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar41;
                  *(byte *)((int)pcVar20 * 2) = *(byte *)((int)pcVar20 * 2) ^ bVar27;
                  in_AF = 9 < (bVar27 & 0xf) | in_AF;
                  bVar27 = bVar27 + in_AF * -6;
                  pbVar17 = (byte *)CONCAT31(uVar21,bVar27 + (0x9f < bVar27 | in_AF * (bVar27 < 6))
                                                             * -0x60);
                  *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
                  *(char *)((int)pbVar17 * 2) =
                       *(char *)((int)pbVar17 * 2) + (char)((uint)pbVar9 >> 8);
                  bVar50 = CARRY1((byte)*puVar45,(byte)pbVar9);
                  *(byte *)puVar45 = (byte)*puVar45 + (byte)pbVar9;
                  uVar31 = in_DS;
                  uVar30 = puStack_4._0_2_;
GenerateStatusText:
                  in_DS = uVar30;
                  pcVar19 = pcVar12;
                  uStack_50 = in_DS;
                  if (!bVar50) break;
                  *pbVar17 = *pbVar17 + (char)pbVar17;
                  iVar16 = CONCAT31((int3)((uint)puVar45 >> 8),(byte)puVar45 | *pbVar9);
                  uVar31 = (undefined2)((uint)puVar41 >> 0x10);
                  cVar38 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar41 + 0x7d);
                  *pbVar17 = *pbVar17 + (char)pbVar17;
                  *(byte *)puVar47 = (byte)*puVar47 - (char)((uint)puVar45 >> 8);
                  iVar16 = iVar16 - *(int *)(iVar16 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar31,CONCAT11(cVar38,(char)puVar41)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar13,(short)pbVar9);
                  pbVar9 = (byte *)CONCAT22(uStack_52,CONCAT11(uStack_53,uStack_54));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar45 = puVar13 + 2;
                  out(puVar13[1],CONCAT11(uStack_53,uStack_54));
                  pcVar19 = pcVar12 + 1;
                  cVar37 = (char)iVar16;
                  pcVar25 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                             CONCAT11((byte)((uint)iVar16 >> 8) |
                                                      *(byte *)((int)puVar47 + 0x46),cVar37));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_4._0_2_ = CONCAT11(uStack_53,uStack_54);
                  uVar21 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar45,0xf0)) >> 8);
                  piVar18 = (int *)CONCAT31(uVar21,0x5f);
                  puVar47 = (uint *)((int)puVar47 + 1);
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  puVar41 = (uint *)CONCAT22(uVar31,CONCAT11(cVar38 + cVar4 | (byte)puVar13[-0x1e],
                                                             (char)puVar41));
                  *(char *)piVar18 = (char)*piVar18 + '_';
                  puVar13 = (uint *)CONCAT31(uVar21,0x8c);
                  puVar45[(int)puVar47 * 2] = (uint)(pbVar9 + puVar45[(int)puVar47 * 2]);
                  uVar10 = *puVar45;
                  *(byte *)puVar45 = (byte)*puVar45 + 0x8c;
                  if ((byte)uVar10 < 0x74) {
                    *pbVar9 = *pbVar9 + cVar37;
                    *(byte *)puVar41 = (byte)*puVar41 >> 1;
                    *(char *)puVar13 = (char)*puVar13 + -0x74;
                    *puVar13 = (uint)(pcVar19 + *puVar13);
                    *puVar13 = *puVar13 << 1 | (uint)((int)*puVar13 < 0);
                    *pbVar9 = *pbVar9 + cVar37;
                    pcVar12[2] = pcVar12[2] - cVar37;
                    *pbVar9 = *pbVar9 + cVar37;
                    pbVar17 = (byte *)CONCAT31(uVar21,0x83);
                    puVar13 = puVar41;
                    goto code_r0x00405312;
                  }
                  *puVar13 = (uint)(*puVar13 + (int)puVar13);
                  piVar18 = (int *)(CONCAT31(uVar21,(byte)puVar13[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar13[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar18 = (int *)((int)piVar18 + *puVar45);
                }
              }
              *pbVar9 = *pbVar9 + bVar27;
              *(byte *)puVar41 = (byte)*puVar41 - (char)pbVar9;
              *pbVar17 = *pbVar17 + bVar27;
              pbVar17 = (byte *)CONCAT31(uVar21,bVar27 | (byte)*puVar41);
            }
            else {
              cVar4 = (char)puVar45;
              *pbVar9 = *pbVar9 + cVar4;
              *(byte **)pbVar17 = pbVar9 + *(int *)pbVar17;
              *pbVar17 = *pbVar17 + bVar27;
              bVar27 = bVar27 + *pbVar17;
              pbVar17 = (byte *)CONCAT31(uVar21,bVar27);
              if (-1 < (char)bVar27) {
                *(byte *)puVar41 = (byte)*puVar41 + bVar6;
                out(*puVar13,(short)pbVar9);
                pbVar9 = pbVar9 + 1;
                *pbVar17 = *pbVar17 + bVar27;
                puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                           bVar6 | (byte)((uint)iVar16 >> 8));
                cVar37 = bVar27 - (byte)*puVar45;
                pcVar12 = (char *)CONCAT31(uVar21,cVar37);
                *pcVar12 = *pcVar12 + cVar37 + (bVar27 < (byte)*puVar45);
                *pbVar9 = *pbVar9 + cVar37;
                pcVar12 = (char *)((int)pcVar12 * 2 + 0x79);
                *pcVar12 = *pcVar12 + (char)((uint)pbVar9 >> 8);
                pbVar17 = (byte *)in((short)pbVar9);
                puVar13 = puVar13 + 1;
              }
              *(byte *)puVar13 = (byte)*puVar13 + cVar4;
              *pbVar17 = *pbVar17 + (char)pbVar17;
              *pbVar17 = *pbVar17 + (char)pbVar17;
              uStack_54 = (undefined1)in_DS;
              uStack_53 = (undefined1)((ushort)in_DS >> 8);
              bVar5 = *pbVar17;
              bVar6 = (byte)((uint)puVar45 >> 8);
              bVar29 = bVar6 + *pbVar17;
              iVar16 = *(int *)pbVar17;
              *pbVar9 = *pbVar9 + cVar4;
              bVar27 = (char)(pbVar17 + (uint)CARRY1(bVar6,bVar5) + iVar16) - (byte)*puVar41;
              pbVar17 = (byte *)CONCAT31((int3)((uint)(pbVar17 + (uint)CARRY1(bVar6,bVar5) + iVar16)
                                               >> 8),bVar27);
              *(byte *)puVar41 = (byte)*puVar41 ^ bVar27;
              *pcVar19 = *pcVar19 + (char)puVar41;
              *pbVar17 = *pbVar17 + bVar27;
              *pbVar17 = *pbVar17 + bVar27;
              *pbVar17 = *pbVar17 + bVar27;
              puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                         CONCAT11(bVar29 + *pbVar17,cVar4));
              pbVar17 = pbVar17 + (uint)CARRY1(bVar29,*pbVar17) + *(int *)pbVar17;
              *pbVar9 = *pbVar9 + cVar4;
              puVar13 = (uint *)((int)puVar13 + *(int *)(pbVar9 + 0x3e));
            }
            *(byte *)puVar13 = (byte)*puVar13 + (char)pbVar17;
            cVar4 = (char)pbVar17 + 'r';
            puVar13 = (uint *)((int)puVar13 + -1);
            uVar10 = CONCAT31((int3)((uint)pbVar17 >> 8),cVar4);
            *(byte *)puVar13 = *(byte *)puVar13 + cVar4;
            bVar50 = 0xfff38f8d < uVar10;
            iVar16 = uVar10 + 0xc7072;
            pcVar12 = pcVar19;
          } while (SCARRY4(uVar10,0xc7072));
        } while( true );
      }
      *pcVar19 = *pcVar19 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar17 = (byte *)CONCAT31(uVar21,bVar5);
      bVar27 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar5;
      uVar21 = (undefined3)
               ((uint)(pbVar17 + (uint)CARRY1(bVar27,bVar5) + *(int *)((int)puVar45 + (int)pbVar9))
               >> 8);
      cVar37 = (char)(pbVar17 + (uint)CARRY1(bVar27,bVar5) + *(int *)((int)puVar45 + (int)pbVar9)) +
               'E';
      pcVar19 = (char *)CONCAT31(uVar21,cVar37);
      *pcVar19 = *pcVar19 + cVar37;
      cVar37 = cVar37 + *pcVar19;
      pcVar19 = (char *)CONCAT31(uVar21,cVar37);
      *pcVar19 = *pcVar19 + cVar37;
      puVar49 = (uint *)CONCAT31(uVar21,cVar37 + *pcVar19);
      *(char *)puVar49 = (char)*puVar49 + cVar37 + *pcVar19;
      pbVar17 = (byte *)((uint)puVar49 | *puVar49);
      bVar5 = *pbVar17;
      bVar27 = (byte)pbVar17;
      *pbVar17 = *pbVar17 + bVar27;
      piVar18 = (int *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar27 + CARRY1(bVar5,bVar27));
      puVar49 = puVar13;
code_r0x00405117:
      *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
      puVar33 = (uint *)((int)puVar33 - *puVar33);
      puVar13 = puVar49 + 1;
      out(*puVar49,uVar31);
    }
    *pbVar9 = *pbVar9 + (char)puVar45;
    bVar50 = puVar33 < (uint *)*piVar18;
    puVar33 = (uint *)((int)puVar33 - *piVar18);
    bVar5 = (byte)((uint)puVar45 >> 8);
    *(byte *)((int)puVar47 + 0x39) = (*(byte *)((int)puVar47 + 0x39) - bVar5) - bVar50;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    uVar10 = *puVar33;
    *(int *)((int)puVar47 + 0x39) = *(int *)((int)puVar47 + 0x39) - (int)pcVar12;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar10 | (byte)*puVar33,(char)puVar45));
    *(char *)(piVar18 + 10) = (char)piVar18[10] + cVar4;
  } while( true );
code_r0x004052ee:
  *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
  bVar5 = (char)piVar18 + 0x28;
  pbVar17 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),bVar5);
  *pbVar17 = *pbVar17 ^ bVar5;
  *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)pcVar25 >> 8);
  bVar5 = *pbVar9;
  *pbVar9 = *pbVar9 + (byte)pcVar25;
  piVar18 = (int *)(((uint)pbVar17 | 0x1496f09) + *puVar47 + (uint)CARRY1(bVar5,(byte)pcVar25));
  puVar49 = puVar45 + 1;
  out(*puVar45,(short)pbVar9);
  pbVar35 = pbVar9 + -1;
  *piVar18 = *piVar18 + (int)piVar18;
  pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),(byte)pbVar35 | (byte)*puVar41);
  cVar4 = (char)piVar18 + '\x13';
  pbVar17 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),cVar4);
  puVar13 = puVar41;
  puVar45 = puVar49;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar9 = *pbVar9 - (char)((uint)pbVar35 >> 8);
    *pbVar17 = *pbVar17 + cVar4;
code_r0x00405396:
    bVar5 = *pbVar17;
    bVar27 = (byte)pbVar17;
    *pbVar17 = *pbVar17 + bVar27;
    *puVar49 = (uint)(pbVar17 + (uint)CARRY1(bVar5,bVar27) + *puVar49);
    out(*puVar49,(short)pbVar9);
    *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
    *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
    pcVar12 = (char *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                               CONCAT11((byte)((uint)pbVar17 >> 8) | (byte)puVar49[1],bVar27));
    *(char **)((int)puVar47 + -1) = pcVar12 + *(int *)((int)puVar47 + -1);
    out(puVar49[1],(short)pbVar9);
    *pcVar12 = *pcVar12 + bVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar17 = *pbVar17 + (char)pbVar17;
  piVar18 = (int *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + 'o');
  puVar41 = (uint *)((int)puVar13 + -1);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar21 = (undefined3)((uint)pbVar9 >> 8);
  piVar18 = (int *)((int)piVar18 + 0x1b7e);
  bVar6 = (byte)pbVar9 | *(byte *)puVar41 | *(byte *)puVar41;
  iRam04115f2c = iRam04115f2c + (int)piVar18;
  out(*puVar45,(short)CONCAT31(uVar21,bVar6));
  *piVar18 = *piVar18 + (int)piVar18;
  bVar6 = bVar6 | (byte)piVar18;
  iVar36 = CONCAT31(uVar21,bVar6);
  pbVar9 = (byte *)((int)piVar18 - *piVar18);
  cVar4 = (char)pbVar9;
  *pcVar25 = *pcVar25 + cVar4;
  cVar37 = (char)pcVar25 - bVar6;
  *pbVar9 = *pbVar9 + cVar4;
  uVar31 = (undefined2)((uint)pcVar25 >> 0x10);
  bVar27 = (byte)((uint)pcVar25 >> 8) | *pbVar9;
  pcVar19 = pcVar19 + -1;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  bVar5 = *(byte *)(CONCAT22(uVar31,CONCAT11(bVar27,cVar37)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar9;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar19;
  *pbVar9 = *pbVar9 + cVar4;
  bVar5 = bVar27 | bVar5 | *(byte *)puVar41;
  iVar26 = CONCAT22(uVar31,CONCAT11(bVar5,cVar37));
  pbVar35 = (byte *)((uint)(puVar45 + 1) ^ *(uint *)(iVar36 + -0x43));
  iVar16 = *(int *)pbVar9;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  if (SCARRY4(iVar16,(int)pbVar9)) {
    *pbVar9 = *pbVar9 + cVar4;
  }
  pbVar17 = pbVar9 + 0x5674;
  puVar47 = (uint *)((int)puVar47 +
                    (-(uint)((byte *)0xffffa98b < pbVar9) - *(int *)(pbVar35 + -0x7f)));
  bVar27 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar27;
  uVar22 = (undefined3)((uint)pbVar17 >> 8);
  bVar29 = bVar27 + 0x2d;
  piVar18 = (int *)CONCAT31(uVar22,bVar29);
  *(uint *)(pbVar35 + (int)puVar47 * 8) =
       *(int *)(pbVar35 + (int)puVar47 * 8) + iVar36 + (uint)(0xd2 < bVar27);
  bVar27 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar29;
  if (!CARRY1(bVar27,bVar29)) {
    do {
      pbVar17 = (byte *)(iVar36 + 1);
      bVar27 = (byte)piVar18;
      *(byte *)piVar18 = (char)*piVar18 + bVar27;
      bVar6 = (byte)((uint)piVar18 >> 8);
      bVar29 = (byte)puVar41 | bVar6;
      puVar13 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar29);
      out(*(undefined4 *)pbVar35,(short)pbVar17);
      *(byte *)piVar18 = (char)*piVar18 + bVar27;
      uVar31 = (undefined2)((uint)iVar26 >> 0x10);
      cVar4 = (char)iVar26;
      pbVar9 = (byte *)CONCAT22(uVar31,CONCAT11((byte)((uint)iVar26 >> 8) | *pbVar17,cVar4));
      bVar5 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar27;
      *(byte *)piVar18 = (char)*piVar18 + bVar27 + CARRY1(bVar5,bVar27);
      *pbVar17 = *pbVar17 + bVar27;
      *(byte *)puVar47 = (byte)*puVar47 + bVar6;
      *(int *)((int)piVar18 * 2) =
           *(int *)((int)piVar18 * 2) + CONCAT22(uVar31,CONCAT11(0x1c,cVar4));
      *(byte *)piVar18 = (char)*piVar18 + bVar27;
      cVar37 = (char)pbVar17;
      *(byte *)puVar13 = (byte)*puVar13 + cVar37;
      *(byte *)((int)piVar18 * 2) = *(byte *)((int)piVar18 * 2) ^ bVar27;
      *(byte *)piVar18 = (char)*piVar18 + bVar27;
      pbVar9 = pbVar35 + 8;
      out(*(undefined4 *)(pbVar35 + 4),(short)pbVar17);
      piVar18 = (int *)0xa0a0000;
      *pbVar17 = *pbVar17;
      bVar27 = cVar4 - cVar37;
      iVar26 = CONCAT22(uVar31,CONCAT11((byte)puVar47[0x14] | 0x1c | bRam0ca87216,bVar27));
      *pbVar17 = *pbVar17;
      bVar5 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar27;
      if (!CARRY1(bVar5,bVar27)) {
        piVar18 = (int *)0x1e7b7000;
        bVar5 = (byte)((uint)puVar41 >> 8) | *(byte *)(iVar36 + 3);
        puVar13 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar5,bVar29));
        if (bVar5 != 0) {
          pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),cVar37 + pbVar9[(int)puVar47 * 8]);
          piVar18 = (int *)0x6d7d7000;
          iVar26 = iVar26 + 1;
        }
      }
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      iVar36 = CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | pbVar9[(int)puVar47 * 8]);
      *(char *)piVar18 = (char)*piVar18;
      piVar18 = (int *)CONCAT31((int3)((uint)piVar18 >> 8),0xf9);
      *puVar47 = (uint)((int)piVar18 + *puVar47 + 1);
      pbVar35 = pbVar35 + 0xc;
      out(*(undefined4 *)pbVar9,(short)iVar36);
      puVar41 = puVar13;
    } while( true );
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar29 = bVar29 | *(byte *)((int)piVar18 + 0x4000081);
  piVar18 = (int *)CONCAT31(uVar22,bVar29);
  if ('\0' < (char)bVar29) {
    *(byte *)piVar18 = (char)*piVar18 + bVar29;
    puVar45 = (uint *)CONCAT31(uVar22,bVar29 + 0x28);
    *puVar45 = *puVar45 ^ (uint)puVar45;
    *(byte *)puVar41 = *(byte *)puVar41 + bVar5;
    cVar4 = (bVar29 + 0x28) - bVar5;
    pcVar12 = (char *)CONCAT31(uVar22,cVar4);
    *pcVar12 = *pcVar12 + cVar4;
    pbVar9 = (byte *)CONCAT31(uVar21,bVar6 | *(byte *)puVar41);
    pcVar19 = (char *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((char)((uint)puVar41 >> 8) + *(byte *)((int)puVar13 + 0x7d),
                                        (char)puVar41));
    *pcVar12 = *pcVar12 + cVar4;
    pbVar17 = (byte *)CONCAT31(uVar22,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar22,cVar4 + 0x39U));
    *pcVar19 = *pcVar19 + bVar5;
    puVar49 = (uint *)(pbVar35 + 4);
    out(*(undefined4 *)pbVar35,(short)pbVar9);
    goto code_r0x00405396;
  }
  puVar45 = (uint *)(pbVar35 + 4);
  out(*(undefined4 *)pbVar35,(short)iVar36);
  pcVar25 = (char *)(iVar26 + -1);
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pbVar9 = (byte *)CONCAT31(uVar21,bVar6 | *(byte *)puVar41);
  goto code_r0x004052ee;
}


