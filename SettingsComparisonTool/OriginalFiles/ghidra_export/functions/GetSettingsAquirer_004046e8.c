/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004046e8
 * Raw Name    : GetSettingsAquirer
 * Demangled   : GetSettingsAquirer
 * Prototype   : int GetSettingsAquirer(undefined4 extractOptions, uint * getStopwatchFunc)
 * Local Vars  : pbVar45, unaff_ESI, puVar46, unaff_EDI, in_CS, in_ES, in_DS, in_SS, in_AF, bVar47, extractOptions, getStopwatchFunc, uStack_8f, uStack_90, uStack_8c, uStack_8e, puStack_4c, uStack_50, pbStack_44, iStack_48, uStack_3c, puStack_40, puStack_34, puStack_38, puStack_2c, pbStack_30, pbStack_24, pbStack_28, pcStack_1c, puStack_20, puStack_14, puStack_18, pcStack_c, iStack_10, uVar2, uVar1, bVar4, uVar3, cVar6, cVar5, in_EAX, uVar7, pbVar9, pcVar8, pbVar11, pcVar10, uVar13, puVar12, iVar15, puVar14, puVar17, piVar16, uVar19, pcVar18, puVar21, uVar20, bVar23, iVar22, uVar25, bVar24, bVar27, uVar26, pbVar29, puVar28, cVar31, iVar30, cVar33, bVar32, puVar34, unaff_EBX, uVar36, pbVar35, bVar38, puVar37, cVar40, cVar39, puVar42, ppbVar41, ppbVar44, ppbVar43
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
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __fastcall GetSettingsAquirer(undefined4 extractOptions,uint *getStopwatchFunc)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  char *in_EAX;
  undefined3 uVar19;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  ushort *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  undefined3 uVar20;
  char *pcVar18;
  byte bVar23;
  undefined2 uVar25;
  uint *puVar21;
  byte bVar24;
  undefined2 uVar26;
  int iVar22;
  byte bVar27;
  char cVar31;
  byte bVar32;
  uint *puVar28;
  byte *pbVar29;
  int iVar30;
  char cVar33;
  byte bVar38;
  uint *unaff_EBX;
  uint *puVar34;
  char cVar39;
  byte *pbVar35;
  char cVar40;
  uint uVar36;
  uint *puVar37;
  byte **ppbVar41;
  uint *puVar42;
  byte **ppbVar43;
  byte **ppbVar44;
  byte *unaff_ESI;
  byte *pbVar45;
  uint *unaff_EDI;
  uint *puVar46;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar47;
  byte in_AF;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_50;
  uint *puStack_4c;
  int iStack_48;
  byte *pbStack_44;
  uint *puStack_40;
  undefined2 uStack_3c;
  uint *puStack_38;
  uint *puStack_34;
  byte *pbStack_30;
  uint *puStack_2c;
  byte *pbStack_28;
  byte *pbStack_24;
  uint *puStack_20;
  char *pcStack_1c;
  uint *puStack_18;
  uint *puStack_14;
  int iStack_10;
  char *pcStack_c;
  
                    /* .NET CLR Managed Code */
  uVar25 = (undefined2)((uint)extractOptions >> 0x10);
  bVar23 = (char)((uint)extractOptions >> 8) + *(byte *)((int)unaff_EDI + 0x53);
  pcVar18 = (char *)CONCAT22(uVar25,CONCAT11(bVar23,(char)extractOptions));
  cVar5 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar5;
  uVar19 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = cVar5 - 0x1f;
  pcVar8 = (char *)CONCAT31(uVar19,bVar4);
  puVar34 = unaff_EBX;
  if (bVar4 == 0 || cVar5 < '\x1f') goto code_r0x0040475f;
  *pcVar8 = *pcVar8 + bVar4;
  piVar16 = (int *)CONCAT31(uVar19,cVar5 + 0xeU);
  *(uint *)(unaff_ESI + (int)unaff_EDI * 8) =
       (int)getStopwatchFunc + (uint)(0xd2 < bVar4) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
  uRam7305fffc = in_CS;
  *piVar16 = *piVar16 + (int)piVar16;
  bVar4 = cVar5 + 0xeU | *(byte *)((int)piVar16 + 0x400006d);
  pcVar8 = (char *)CONCAT31(uVar19,bVar4);
  puVar46 = unaff_EDI;
  if ((char)bVar4 < '\x01') goto code_r0x00404777;
  *pcVar8 = *pcVar8 + bVar4;
  bVar4 = bVar4 + 0x10;
  pcVar8 = (char *)CONCAT31(uVar19,bVar4);
  *getStopwatchFunc = (uint)(pcVar8 + *getStopwatchFunc);
  uVar26 = SUB42(getStopwatchFunc,0);
  out(*(undefined4 *)unaff_ESI,uVar26);
  pcRam7305fff8 = pcVar18;
  *pcVar8 = *pcVar8 + bVar4;
  uRam7305fff0 = in_SS;
  uRam7305fff4 = in_ES;
  *pcVar18 = *pcVar18 + '\x01';
  uRam7305ffec = in_SS;
  *pcVar18 = *pcVar18 + '\x01';
  bVar4 = bVar4 | (byte)*getStopwatchFunc;
  pcVar8 = (char *)CONCAT31(uVar19,bVar4);
  out(*(undefined4 *)(unaff_ESI + 4),uVar26);
  puVar46 = (uint *)((int)unaff_EDI + -1);
  *pcVar8 = *pcVar8 + bVar4;
  pcVar8 = (char *)((int)((uint)pcVar8 | *puVar46) + *(int *)((uint)pcVar8 | *puVar46));
  uRam7305ffe8 = in_ES;
  *pcVar8 = *pcVar8 + (char)pcVar8;
  cVar5 = (char)pcVar8 + *pcVar8;
  puVar34 = (uint *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5);
  *(char *)puVar34 = (char)*puVar34 + cVar5;
  *puVar34 = *puVar34 & (uint)puVar34;
  *(char *)puVar34 = (char)*puVar34 + cVar5;
  pbVar9 = (byte *)((int)puVar34 + 1);
  cVar5 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cVar5;
  uVar36 = *unaff_EBX;
  *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar23;
  pbVar45 = unaff_ESI + 8;
  if (CARRY1((byte)uVar36,bVar23)) {
    pbVar45 = unaff_ESI + 0xc;
    out(*(undefined4 *)(unaff_ESI + 8),uVar26);
    puVar46 = (uint *)((int)unaff_EDI + -2);
  }
  *pbVar9 = *pbVar9 + cVar5;
  puVar21 = (uint *)CONCAT22(uVar25,CONCAT11(bVar23 + *(byte *)((int)puVar46 + 0x49),
                                             (char)extractOptions));
  uRam7305ffe4 = in_ES;
  *pbVar9 = *pbVar9 + cVar5;
  uRam7305ffe0 = in_ES;
  *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
  out(*(undefined4 *)pbVar45,uVar26);
  puVar34 = (uint *)((int)unaff_EBX + -1);
  *pbVar9 = *pbVar9 + cVar5;
  pbVar45 = pbVar45 + *(int *)((int)unaff_EBX + -0x7f) + 4;
  uRam7305ffd8 = in_ES;
  uRam7305ffdc = in_ES;
  *pbVar9 = *pbVar9 + cVar5;
  do {
    puStack_34 = (uint *)((uint)puStack_34 & 0xffff0000);
    cVar5 = (char)pbVar9 - (byte)*getStopwatchFunc;
    pcVar8 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
    unaff_ESI = pbVar45 + 4;
    out(*(undefined4 *)pbVar45,(short)getStopwatchFunc);
    unaff_EDI = (uint *)((int)puVar46 + -1);
    *pcVar8 = *pcVar8 + cVar5;
    pcVar18 = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11((char)((uint)puVar21 >> 8) + (byte)puVar46[0x12],
                                        (char)puVar21));
code_r0x0040475f:
    cVar5 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar5;
    *(byte *)(puVar34 + 0x818000) = (byte)puVar34[0x818000] - (char)((uint)puVar34 >> 8);
    out(*(undefined4 *)unaff_ESI,(short)getStopwatchFunc);
    pbVar45 = (byte *)((int)puVar34 + -1);
    *pcVar8 = *pcVar8 + cVar5;
    pcStack_c = (char *)CONCAT22(pcStack_c._2_2_,in_ES);
    iStack_10 = CONCAT22(iStack_10._2_2_,in_ES);
    unaff_ESI = unaff_ESI + *(int *)((int)puVar34 + -0x71) + 4;
    *pcVar8 = *pcVar8 + cVar5;
    puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                                 CONCAT11((char)((uint)pbVar45 >> 8) - unaff_ESI[0x6e],(char)pbVar45
                                         ));
    puVar46 = unaff_EDI;
code_r0x00404777:
    bVar4 = (byte)pcVar8;
    *pcVar8 = *pcVar8 + bVar4;
    uVar19 = (undefined3)((uint)pcVar8 >> 8);
    puVar34 = (uint *)(unaff_ESI + (int)puVar46 * 8);
    uVar36 = *puVar34;
    uVar1 = *puVar34;
    *puVar34 = (uint)((byte *)(uVar1 + (int)getStopwatchFunc) + (0xd2 < bVar4));
    puStack_18 = (uint *)CONCAT22(puStack_18._2_2_,in_ES);
    puVar42 = (uint *)0x73060000;
    cVar6 = bVar4 + 0x2e +
            (CARRY4(uVar36,(uint)getStopwatchFunc) ||
            CARRY4(uVar1 + (int)getStopwatchFunc,(uint)(0xd2 < bVar4)));
    *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + (char)pcVar18;
    *unaff_ESI = *unaff_ESI;
    cVar5 = cVar6 + '~';
    pcVar10 = (char *)CONCAT31(uVar19,cVar5);
    out(*unaff_ESI,(short)getStopwatchFunc);
    *pcVar10 = *pcVar10 + cVar5;
    cVar6 = cVar6 + -0x80;
    pcVar10 = (char *)CONCAT31(uVar19,cVar6);
    out(*(undefined4 *)(unaff_ESI + 1),(short)getStopwatchFunc);
    puVar21 = (uint *)(pcVar18 + -1);
    *pcVar10 = *pcVar10 + cVar6;
    pcStack_1c = (char *)CONCAT22(pcStack_1c._2_2_,in_ES);
    *(byte *)puVar46 = (byte)*puVar46 - (char)((uint)pcVar8 >> 8);
    *pcVar10 = *pcVar10 + cVar6;
    puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,in_ES);
    *pcVar10 = *pcVar10 - (char)((uint)puVar21 >> 8);
    *pcVar10 = *pcVar10 + cVar6;
    pbStack_24 = (byte *)CONCAT22(pbStack_24._2_2_,in_ES);
    pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,in_ES);
    pbVar45 = unaff_ESI + *(int *)((int)unaff_EBX + 9) + 5;
    *pcVar10 = *pcVar10 + cVar6;
    puStack_2c = (uint *)CONCAT22(puStack_2c._2_2_,in_ES);
    cVar5 = (char)getStopwatchFunc;
    cVar31 = (char)((uint)getStopwatchFunc >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    getStopwatchFunc =
         (uint *)CONCAT22((short)((uint)getStopwatchFunc >> 0x10),CONCAT11(cVar31,cVar5));
    *pcVar10 = *pcVar10 + cVar6;
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar38 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)getStopwatchFunc + 0x36);
    puVar34 = (uint *)CONCAT22(uVar25,CONCAT11(bVar38,(char)unaff_EBX));
    bVar23 = cVar6 + (byte)*puVar34;
    pbVar9 = (byte *)CONCAT31(uVar19,bVar23);
    *(byte *)puVar46 = (byte)*puVar46 - cVar31;
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar23;
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_ES);
  } while (!CARRY1(bVar4,bVar23));
  *pbVar9 = *pbVar9 + bVar23;
  bVar23 = bVar23 - *pbVar9;
  pbVar9 = (byte *)CONCAT31(uVar19,bVar23);
  *(byte *)puVar34 = (byte)*puVar34 + cVar5;
  *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc ^ bVar23;
  pcVar18[0x2affffff] = pcVar18[0x2affffff] + bVar23;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar23;
  *puVar34 = (uint)(pbVar9 + (uint)CARRY1(bVar4,bVar23) + *puVar34);
  pbVar11 = pbVar9 + -0x32a1702;
  if (pbVar11 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar11;
    puVar37 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + (byte)*getStopwatchFunc);
    puStack_38 = (uint *)CONCAT22(puStack_38._2_2_,in_ES);
    pbVar9[-0xe0c891b] = pbVar9[-0xe0c891b] + cVar31;
    pbVar11 = pbVar9 + 0x19fd76e3;
    bVar4 = *pbVar11;
    *pbVar11 = *pbVar11 - bVar38;
    piVar16 = (int *)((uint)(pbVar9 + (bVar4 < bVar38) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar16 + 0x73) = *(char *)((int)piVar16 + 0x73) + cVar31;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar23 = bVar38 | *(byte *)((int)getStopwatchFunc + 2);
    puVar34 = (uint *)CONCAT22(uVar25,CONCAT11(bVar23,(char)unaff_EBX));
    cVar5 = (char)piVar16;
    if ((POPCOUNT(bVar23) & 1U) == 0) {
      *(char *)piVar16 = (char)*piVar16 + cVar5;
      uVar19 = (undefined3)((uint)(pbVar9 + (bVar4 < bVar38) + 0x63fd76e4) >> 8);
      cVar6 = cVar5 + '\x06';
      if ((POPCOUNT(cVar6) & 1U) == 0) {
        *(char *)CONCAT31(uVar19,cVar6) = *(char *)CONCAT31(uVar19,cVar6) + cVar6;
        pbVar11 = (byte *)CONCAT31(uVar19,cVar5 + '.');
        puVar21 = puVar37;
        uStack_3c = in_SS;
        goto code_r0x00404803;
      }
      cVar5 = cVar6 + (byte)*puVar34;
      pcVar8 = (char *)CONCAT31(uVar19,cVar5);
      if (SCARRY1(cVar6,(byte)*puVar34) == cVar5 < '\0') {
code_r0x004048e7:
        pcVar8 = (char *)((uint)pcVar8 | 8);
        uStack_3c = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(getStopwatchFunc + 0x1cc18000) = (byte)getStopwatchFunc[0x1cc18000] + cVar5;
code_r0x0040486e:
      pcVar8 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),(byte)piVar16 & (byte)*getStopwatchFunc);
      puVar46 = (uint *)((int)puVar46 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar8 = *pcVar8 + (char)pcVar8;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + '*');
    puStack_38 = (uint *)CONCAT22(puStack_38._2_2_,in_DS);
    bVar4 = (byte)((uint)puVar37 >> 8);
    cVar5 = (char)puVar37;
    puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar4 + *pbVar9,cVar5));
    pbVar9 = pbVar9 + (uint)CARRY1(bVar4,*pbVar9) + *(int *)pbVar9;
    *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + cVar5;
    bVar47 = (byte)pbVar9 < *pbVar9;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 - *pbVar9);
code_r0x00404880:
    pbVar45 = pbVar45 + (uint)bVar47 + *(int *)pbVar9;
    uStack_3c = in_ES;
    while( true ) {
      bVar23 = (byte)pbVar9;
      pbVar9[0x2c000000] = pbVar9[0x2c000000] + bVar23;
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar23;
      *getStopwatchFunc = (uint)(pbVar9 + (uint)CARRY1(bVar4,bVar23) + *getStopwatchFunc);
      *(byte *)puVar34 = (byte)*puVar34 - (char)getStopwatchFunc;
      *pbVar9 = *pbVar9 + bVar23;
      puVar21 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar23 | (byte)*puVar34);
code_r0x00404895:
      pcVar8 = (char *)((uint)puVar21 | *puVar21);
code_r0x00404899:
      cVar5 = (char)pcVar8;
      *pbVar45 = *pbVar45 + cVar5;
      uVar19 = (undefined3)((uint)pcVar8 >> 8);
      bVar4 = cVar5 + (byte)*puVar34;
      pcVar8 = (char *)CONCAT31(uVar19,bVar4);
      bVar23 = (byte)((uint)puVar37 >> 8);
      uVar25 = (undefined2)((uint)puVar37 >> 0x10);
      cVar6 = (char)getStopwatchFunc;
      if (SCARRY1(cVar5,(byte)*puVar34) == (char)bVar4 < '\0') {
        *(byte *)puVar34 = (byte)*puVar34 - cVar6;
        *pcVar8 = *pcVar8 + bVar4;
        puVar37 = (uint *)CONCAT22(uVar25,CONCAT11(bVar23 | (byte)*getStopwatchFunc,(char)puVar37));
        getStopwatchFunc = (uint *)((int)getStopwatchFunc + 1);
        pcVar8 = pcVar8 + *getStopwatchFunc;
        uStack_3c = in_ES;
        if ((POPCOUNT((uint)pcVar8 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar8 = *pcVar8 + bVar4;
      bVar38 = bVar4 + 2;
      pcVar8 = (char *)CONCAT31(uVar19,bVar38);
      if (bVar4 < 0xfe) {
        *pbVar45 = *pbVar45 + bVar38;
        puVar21 = puVar34;
        uStack_3c = in_ES;
        goto code_r0x004048f5;
      }
      *pcVar8 = *pcVar8 + bVar38;
      getStopwatchFunc =
           (uint *)CONCAT22((short)((uint)getStopwatchFunc >> 0x10),
                            CONCAT11((byte)((uint)getStopwatchFunc >> 8) |
                                     *(byte *)((int)puVar34 + -0x5b),cVar6));
      cVar5 = *pcVar8;
      *pcVar8 = *pcVar8 + bVar38;
      puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,in_ES);
      uVar26 = in_ES;
      if (SCARRY1(cVar5,bVar38) == *pcVar8 < '\0') goto code_r0x00404927;
      *pcVar8 = *pcVar8 + bVar38;
      bVar4 = bVar4 + 4;
      pbVar9 = (byte *)CONCAT31(uVar19,bVar4);
      if (0xfd < bVar38) break;
      *pbVar9 = *pbVar9 + bVar4;
      puVar37 = (uint *)CONCAT22(uVar25,CONCAT11(bVar23 | (byte)*getStopwatchFunc,(char)puVar37));
      *(byte *)puVar34 = (byte)*puVar34 + cVar6;
      *pbVar45 = *pbVar45 ^ bVar4;
    }
    *pbVar9 = *pbVar9 + bVar4;
    puStack_40 = (uint *)((uint)puStack_40 & 0xffff0000);
  }
  else {
    pbVar9[0x6fdbe8fe] = pbVar9[0x6fdbe8fe] + (char)pbVar11;
code_r0x00404803:
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar20 = (undefined3)((uint)puVar21 >> 8);
    bVar23 = (byte)puVar21 | (byte)*puVar34;
    puVar37 = (uint *)CONCAT31(uVar20,bVar23);
    uVar25 = (undefined2)((uint)puVar34 >> 0x10);
    cVar6 = (char)puVar34;
    cVar39 = (char)((uint)puVar34 >> 8) + *(byte *)((int)puVar34 + 0x6f);
    puVar34 = (uint *)CONCAT22(uVar25,CONCAT11(cVar39,cVar6));
    bVar4 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar4;
    bVar47 = 0xf9 < bVar4;
    uVar19 = (undefined3)((uint)pbVar11 >> 8);
    cVar5 = bVar4 + 6;
    pbVar9 = (byte *)CONCAT31(uVar19,cVar5);
    in_SS = uStack_3c;
    if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404880;
    *pbVar9 = *pbVar9 + cVar5;
    piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x2e);
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar23 = bVar23 | *(byte *)((int)getStopwatchFunc + (int)piVar16);
    puVar37 = (uint *)CONCAT31(uVar20,bVar23);
    in_SS = puStack_38._0_2_;
    if ((POPCOUNT(bVar23) & 1U) != 0) {
      puVar21 = (uint *)((int)piVar16 + *piVar16);
      *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + bVar23;
      pbVar45 = pbVar45 + getStopwatchFunc[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar16 = (char)*piVar16 + bVar4 + 0x2e;
    cVar5 = bVar4 + 0x34;
    pcVar8 = (char *)CONCAT31(uVar19,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      pcVar8[0x28] = pcVar8[0x28] + cVar31;
      goto code_r0x00404899;
    }
    *pcVar8 = *pcVar8 + cVar5;
    piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x5c);
    *piVar16 = *piVar16 + (int)piVar16;
    cVar31 = (bVar23 | bRam07022c07) - (char)*piVar16;
    puVar37 = (uint *)CONCAT31(uVar20,cVar31);
    pcVar8 = (char *)CONCAT31(uVar19,bVar4 + 0x5a);
    bVar23 = (byte)((uint)puVar21 >> 8);
    *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc | bVar23;
    *(uint *)((int)getStopwatchFunc + (int)pcVar8) =
         *(uint *)((int)getStopwatchFunc + (int)pcVar8) | 0x73060000;
    *getStopwatchFunc = *getStopwatchFunc | 0x73060000;
    cVar39 = cVar39 + *(byte *)((int)puVar34 + 0x72);
    puVar34 = (uint *)CONCAT22(uVar25,CONCAT11(cVar39,cVar6));
    *pcVar8 = *pcVar8 + bVar4 + 0x5a;
    cVar5 = bVar4 + 0x60;
    pcVar8 = (char *)CONCAT31(uVar19,cVar5);
    if ((POPCOUNT(cVar5) & 1U) == 0) {
      *pcVar8 = *pcVar8 + cVar5;
      piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x88);
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_DS);
      puVar37 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                 CONCAT11((bVar23 | (byte)*getStopwatchFunc) + (char)*piVar16,cVar31
                                         ));
      *(char *)piVar16 = (char)*piVar16;
      cVar6 = cVar6 - *pbVar45;
      cVar39 = cVar39 + *(char *)(CONCAT31((int3)((uint)puVar34 >> 8),cVar6) + 0x73);
      *(byte *)piVar16 = (char)*piVar16 + bVar4 + 0x88;
      bVar4 = bVar4 + 0xb2 & (byte)*getStopwatchFunc;
      puVar46 = (uint *)((int)puVar46 + iRam73060073);
      *(char *)CONCAT31(uVar19,bVar4) = *(char *)CONCAT31(uVar19,bVar4) + bVar4;
      pcVar8 = (char *)CONCAT31(uVar19,bVar4 + 0x2a);
      puVar34 = (uint *)CONCAT22(uVar25,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar39,
                                                  cVar6)) + 0x74),cVar6));
      *pcVar8 = *pcVar8 + bVar4 + 0x2a;
      piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x54);
      in_SS = puStack_40._0_2_;
      goto code_r0x0040486e;
    }
    pbVar9 = (byte *)*(undefined6 *)pcVar8;
    *pbVar45 = *pbVar45 + (char)*(undefined6 *)pcVar8;
  }
  uVar19 = (undefined3)((uint)pbVar9 >> 8);
  bVar4 = (byte)pbVar9 | *pbVar45;
  pcVar8 = (char *)CONCAT31(uVar19,bVar4);
  *pcVar8 = *pcVar8 + bVar4;
  *puVar34 = (uint)(*puVar34 + (int)puVar37);
  puVar34 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),
                             CONCAT11((char)((uint)puVar34 >> 8) + *(byte *)((int)puVar34 + 0x75),
                                      (char)puVar34));
  *pcVar8 = *pcVar8 + bVar4;
  pcVar8 = (char *)CONCAT31(uVar19,bVar4 + 0x6f);
  *pcVar8 = *pcVar8 + bVar4 + 0x6f;
  pcVar8 = (char *)((int)((uint)pcVar8 & 0x7e26062d) - *(int *)((uint)pcVar8 & 0x7e26062d));
  *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + (char)puVar37;
  uRam00c16f07 = SUB41(pcVar8,0);
code_r0x004048de:
  cVar5 = (char)pcVar8;
  *pbVar45 = *pbVar45 + cVar5;
  *pcVar8 = *pcVar8 + cVar5;
  *(byte **)(pcVar8 + (int)puVar37) = (byte *)(*(int *)(pcVar8 + (int)puVar37) + (int)puVar37);
  puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,uStack_3c);
  bVar4 = *(byte *)((int)puVar34 + 0x75);
  *pcVar8 = *pcVar8 + cVar5;
  pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5 + 'o');
  pbVar45 = pbVar45 + 1;
  *pcVar8 = *pcVar8 + cVar5 + 'o';
  pbStack_44 = (byte *)CONCAT22(pbStack_44._2_2_,uStack_3c);
  puVar21 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),
                             CONCAT11((char)((uint)puVar34 >> 8) + bVar4,(char)puVar34));
  puVar42 = puVar34;
  in_SS = uStack_3c;
code_r0x004048f5:
  puVar34 = puVar21;
  pcVar8 = (char *)((int)((uint)pcVar8 & 0x7e26062d) - *(int *)((uint)pcVar8 & 0x7e26062d));
  *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + (char)puVar37;
  do {
    uRam00c36f08 = SUB41(pcVar8,0);
    while( true ) {
      bVar4 = *pbVar45;
      cVar5 = (char)pcVar8;
      *pbVar45 = *pbVar45 + cVar5;
      iStack_48 = CONCAT22(iStack_48._2_2_,uStack_3c);
      if (SCARRY1(bVar4,cVar5) == (char)*pbVar45 < '\0') {
        pcVar8[(int)puVar42] = pcVar8[(int)puVar42] + cVar5;
        goto code_r0x00404982;
      }
      *pcVar8 = *pcVar8 + cVar5;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5 + '*');
      puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,in_DS);
      bVar4 = (byte)((uint)puVar37 >> 8);
      cVar5 = (char)puVar37;
      bVar23 = bVar4 + *pbVar9;
      pbVar9 = pbVar9 + (uint)CARRY1(bVar4,*pbVar9) + *(int *)pbVar9;
      *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + cVar5;
      cVar6 = (char)puVar34 - *pbVar45;
      bVar4 = *pbVar9;
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar23 + *pbVar9,cVar5));
      iVar15 = *(int *)pbVar9;
      *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + cVar5;
      pcVar8 = (char *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar23,bVar4) + iVar15) >> 8),
                                (char)(pbVar9 + (uint)CARRY1(bVar23,bVar4) + iVar15) -
                                *(byte *)((int)getStopwatchFunc + 3));
      puVar34 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),
                                 CONCAT11((char)((uint)puVar34 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)puVar34 >> 8),cVar6) +
                                                   -0x3a),cVar6));
code_r0x00404921:
      bVar4 = (byte)pcVar8;
      *pcVar8 = *pcVar8 + bVar4;
      pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),bVar4 + 0x6f);
      *(byte *)puVar37 = ((byte)*puVar37 - (bVar4 + 0x6f)) - (0x90 < bVar4);
      uVar26 = uStack_3c;
code_r0x00404927:
      uStack_3c = uVar26;
      *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + (char)puVar37;
      pbStack_44 = (byte *)CONCAT22(pbStack_44._2_2_,in_SS);
      *(byte *)puVar37 = (byte)*puVar37 + 1;
      cVar5 = (char)((uint)puVar37 >> 8) - pbVar45[2];
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(cVar5,(char)puVar37));
      if ((POPCOUNT(cVar5) & 1U) == 0) break;
      pcVar8 = pcVar8 + -0x1b7e2606;
      *pcVar8 = *pcVar8 + (char)pcVar8;
      pcVar8 = (char *)CONCAT22((short)((uint)pcVar8 >> 0x10),
                                CONCAT11((byte)((uint)pcVar8 >> 8) |
                                         (byte)getStopwatchFunc[0x30dbc2],(char)pcVar8));
    }
code_r0x00404931:
    *pcVar8 = *pcVar8 + (char)pcVar8;
    cVar5 = (char)pcVar8 + '\x02';
    pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5);
    pbVar9 = pbVar45;
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  do {
    bVar4 = (byte)pcVar8;
    *pcVar8 = *pcVar8 + bVar4;
    uVar19 = (undefined3)((uint)pcVar8 >> 8);
    piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x6f);
    *puVar37 = (*puVar37 - (int)piVar16) - (uint)(0x90 < bVar4);
    *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + (char)puVar37;
    iVar15 = *(int *)((int)puVar46 + 0x1a);
    *piVar16 = *piVar16 + (int)piVar16;
    getStopwatchFunc =
         (uint *)CONCAT31((int3)((uint)getStopwatchFunc >> 8),(byte)getStopwatchFunc | *pbVar9);
    *(byte *)puVar37 = (byte)*puVar37 + 1;
    bVar4 = (bVar4 + 0x6f) - (char)*piVar16;
    pbVar45 = (byte *)CONCAT31(uVar19,bVar4);
    *pbVar45 = *pbVar45 + bVar4;
    pbVar9 = pbVar9 + *(int *)pbVar45;
    cVar5 = bVar4 + *pbVar45;
    puVar12 = (ushort *)CONCAT31(uVar19,cVar5);
    *puVar12 = *puVar12 + (ushort)CARRY1(bVar4,*pbVar45) * (((ushort)puVar12 & 3) - (*puVar12 & 3));
    *(char *)puVar12 = (char)*puVar12 + cVar5;
    *(char *)puVar12 = (char)*puVar12 + cVar5;
    *(char *)puVar12 = (char)*puVar12 + cVar5;
    puVar46 = (uint *)((int)puVar46 + puVar34[0x1c]);
    puVar42 = (uint *)((int)puVar42 + iVar15);
code_r0x0040495b:
    cVar5 = (char)puVar12;
    *(char *)puVar12 = (char)*puVar12 + cVar5;
    uVar19 = (undefined3)((uint)puVar12 >> 8);
    cVar6 = cVar5 + '\x02';
    pcVar8 = (char *)CONCAT31(uVar19,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      *getStopwatchFunc = (uint)(*getStopwatchFunc + (int)puVar42);
      pbVar45 = pbVar9 + 1;
      out(*pbVar9,(short)getStopwatchFunc);
      puVar34 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),
                                 CONCAT11((char)((uint)puVar34 >> 8) +
                                          *(byte *)((int)puVar34 + -0x3b),(char)puVar34));
      goto code_r0x00404931;
    }
    *pcVar8 = *pcVar8 + cVar6;
    pbVar45 = (byte *)(CONCAT31(uVar19,cVar5 + '}') + (int)puVar42);
    *pbVar45 = *pbVar45 + cVar5 + '}';
    *pcStack_c = *pcStack_c + (char)pcStack_c;
    puVar37 = (uint *)CONCAT22((short)((uint)iStack_10 >> 0x10),
                               CONCAT11((byte)((uint)iStack_10 >> 8) | *(byte *)(iStack_10 * 3),
                                        (char)iStack_10));
    puVar46 = (uint *)(pbStack_28 + *(int *)((int)puStack_18 + 0x6f));
    pcVar8 = pcStack_c;
    getStopwatchFunc = puStack_14;
    puVar34 = puStack_18;
    puVar42 = puStack_20;
    pbVar9 = pbStack_24;
    while( true ) {
      cVar5 = (char)pcVar8;
      *pcVar8 = *pcVar8 + cVar5;
      uVar19 = (undefined3)((uint)pcVar8 >> 8);
      cVar6 = cVar5 + '\x02';
      pcVar8 = (char *)CONCAT31(uVar19,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) break;
      *pcVar8 = *pcVar8 + cVar6;
      pcVar8 = (char *)CONCAT31(uVar19,cVar5 + '}');
      out(*(undefined4 *)pbVar9,(short)getStopwatchFunc);
      *pcVar8 = *pcVar8 + cVar5 + '}';
code_r0x00404982:
      puStack_34 = (uint *)CONCAT22(puStack_34._2_2_,in_ES);
      *(byte *)puStack_2c = (byte)*puStack_2c + (char)in_ES;
      puVar37 = (uint *)CONCAT22((short)((uint)pbStack_30 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_30 >> 8) |
                                          pbStack_30[(int)pbStack_44],(char)pbStack_30));
      puVar46 = (uint *)(iStack_48 + *(int *)((int)puStack_38 + 0x71));
      puVar21 = puStack_2c;
      getStopwatchFunc = puStack_34;
      puVar34 = puStack_38;
      pbVar9 = pbStack_44;
      while( true ) {
        cVar5 = (char)puVar21;
        *(byte *)puVar21 = (byte)*puVar21 + cVar5;
        uVar19 = (undefined3)((uint)puVar21 >> 8);
        cVar6 = cVar5 + '\x02';
        puVar12 = (ushort *)CONCAT31(uVar19,cVar6);
        puVar42 = puStack_40;
        if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar12 = (char)*puVar12 + cVar6;
        bVar23 = cVar5 + 0x7d;
        iVar15 = CONCAT31(uVar19,bVar23);
        pbVar45 = (byte *)(iVar15 + (int)puStack_40);
        bVar4 = *pbVar45;
        *pbVar45 = *pbVar45 + bVar23;
        uVar36 = *puVar37;
        *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + (char)puVar37;
        pcVar8 = (char *)(((iVar15 - uVar36) - (uint)CARRY1(bVar4,bVar23)) + -0x727b0317);
        cVar5 = (char)pcVar8;
        *pcVar8 = *pcVar8 + cVar5;
        uVar19 = (undefined3)((uint)pcVar8 >> 8);
        cVar6 = cVar5 + '\x02';
        pcVar8 = (char *)CONCAT31(uVar19,cVar6);
        if ((POPCOUNT(cVar6) & 1U) != 0) break;
        *pcVar8 = *pcVar8 + cVar6;
        bVar23 = cVar5 + 0x7d;
        iVar15 = CONCAT31(uVar19,bVar23);
        pbVar45 = (byte *)(iVar15 + (int)puStack_40);
        bVar4 = *pbVar45;
        *pbVar45 = *pbVar45 + bVar23;
        puVar21 = (uint *)((iVar15 - *puVar37) - (uint)CARRY1(bVar4,bVar23));
        puVar42 = getStopwatchFunc;
code_r0x004049b4:
        *(byte *)puVar42 = (byte)*puVar42 + (char)puVar37;
        getStopwatchFunc =
             (uint *)CONCAT31((int3)((uint)puVar42 >> 8),((char)puVar42 - (byte)*puVar46) - *pbVar9)
        ;
        bVar23 = pbVar9[0x72];
        *puVar21 = *puVar21 & (uint)puVar37;
        pbVar45 = (byte *)((int)puVar21 + 2);
        *pbVar45 = *pbVar45 + (char)((uint)puVar42 >> 8);
        bVar4 = *pbVar45;
        puVar28 = (uint *)CONCAT31((int3)((uint)puVar34 >> 8),(char)puVar34 - bVar23);
        pbVar45 = pbVar9;
        while (puVar34 = puVar28, pbVar9 = pbVar45, (POPCOUNT(bVar4) & 1U) == 0) {
          cVar5 = (char)puVar21;
          *(byte *)puVar21 = (byte)*puVar21 + cVar5;
          uVar19 = (undefined3)((uint)puVar21 >> 8);
          cVar6 = cVar5 + '\x03';
          pbVar11 = (byte *)CONCAT31(uVar19,cVar6);
          pbVar9 = pbVar45 + 4;
          out(*(undefined4 *)pbVar45,(short)getStopwatchFunc);
          in_SS = pbStack_28._0_2_;
          *pbVar11 = *pbVar11 + cVar6;
          cVar31 = (char)puVar37;
          puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                     CONCAT11((byte)((uint)puVar37 >> 8) | *pbVar11,cVar31));
          *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
          *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + cVar31;
          cVar31 = (char)puVar28 - pbVar45[6];
          puVar34 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),cVar31);
          if ((POPCOUNT(cVar31) & 1U) != 0) {
            pbVar45 = (byte *)((int)puVar46 + (int)puStack_40 * 2);
            *pbVar45 = *pbVar45 + cVar6;
            ppbVar44 = (byte **)puStack_40;
            goto code_r0x00404a51;
          }
          *pbVar11 = *pbVar11 + cVar6;
          puVar21 = (uint *)CONCAT31(uVar19,cVar5 + 'r');
          *(byte *)puVar21 = (byte)*puVar21;
          pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,uStack_3c);
          do {
            puVar46 = (uint *)((int)puVar46 + puVar34[0x1c]);
            bVar4 = (byte)puVar21;
            *(byte *)puVar21 = (byte)*puVar21 + bVar4;
            uVar19 = (undefined3)((uint)puVar21 >> 8);
            bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
            puVar21 = (uint *)CONCAT31(uVar19,bVar4);
            cVar5 = (char)puVar37;
            *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + cVar5;
            bVar23 = (char)((uint)puVar37 >> 8) - pbVar9[2];
            puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar23,cVar5));
            puVar42 = getStopwatchFunc;
            if ((POPCOUNT(bVar23) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar21 = (byte)*puVar21 + bVar4;
            bVar38 = bVar4 + 2;
            puVar21 = (uint *)CONCAT31(uVar19,bVar38);
            ppbVar43 = (byte **)puStack_40;
            if ((POPCOUNT(bVar38) & 1U) == 0) goto code_r0x004049f5;
            pbVar9 = pbStack_28;
          } while (0xfd < bVar4);
          *(byte *)puVar21 = (byte)*puVar21 | bVar38;
          puVar28 = puVar34;
          pbVar45 = pbStack_28;
          bVar4 = (byte)*puVar21;
        }
      }
    }
    *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + (char)puVar37;
    pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar4;
    uVar19 = (undefined3)((uint)puVar21 >> 8);
    bVar38 = bVar4 + 0x6f;
    pbVar11 = (byte *)CONCAT31(uVar19,bVar38);
    *puVar37 = (*puVar37 - (int)pbVar11) - (uint)(0x90 < bVar4);
    *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + cVar5;
    pbVar45 = (byte *)((int)ppbVar43 + *(int *)((int)puVar46 + 0x1a));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar20 = (undefined3)((uint)getStopwatchFunc >> 8);
    bVar4 = (byte)getStopwatchFunc | *pbVar9;
    getStopwatchFunc = (uint *)CONCAT31(uVar20,bVar4);
    *(byte *)puVar37 = (byte)*puVar37 + 1;
    cVar6 = bVar38 - *pbVar11;
    pbVar9 = pbVar9 + (-(uint)(bVar38 < *pbVar11) - *(int *)CONCAT31(uVar19,cVar6));
    uVar13 = CONCAT31(uVar19,cVar6 + *(char *)CONCAT31(uVar19,cVar6));
    bVar47 = CARRY1(bRam14110000,bVar23);
    bRam14110000 = bRam14110000 + bVar23;
    puVar21 = (uint *)((int)puVar34 + (int)pbVar9 * 2);
    uVar36 = *puVar21;
    uVar1 = uVar13 + *puVar21;
    puVar14 = (undefined4 *)(uVar1 + bVar47);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar14 = uVar2;
    puStack_2c = (uint *)CONCAT22(puStack_2c._2_2_,uStack_3c);
    uVar36 = (uint)(CARRY4(uVar13,uVar36) || CARRY4(uVar1,(uint)bVar47));
    puVar21 = (uint *)((int)puVar14 + uRam7d020511 + uVar36);
    ppbVar41 = &pbStack_30;
    ppbVar44 = &pbStack_30;
    ppbVar43 = &pbStack_30;
    pbStack_30 = pbVar45;
    cVar6 = '\x03';
    do {
      pbVar45 = pbVar45 + -4;
      ppbVar41 = ppbVar41 + -1;
      *ppbVar41 = (byte *)*(undefined4 *)pbVar45;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    pbStack_28 = (byte *)&pbStack_30;
    pbRam00c82802 =
         (byte *)((int)puVar21 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar14,uRam7d020511) ||
                      CARRY4((int)puVar14 + uRam7d020511,uVar36))));
    bVar38 = *pbVar9;
    cVar6 = (char)puVar21;
    *pbVar9 = *pbVar9 + cVar6;
  } while (SCARRY1(bVar38,cVar6) == (char)*pbVar9 < '\0');
  *(byte *)puVar21 = (byte)*puVar21 + cVar6;
  iVar15 = CONCAT31((int3)((uint)puVar21 >> 8),cVar6 + '\x11') + 0xc57b;
  bVar23 = (byte)iVar15;
  *getStopwatchFunc = *getStopwatchFunc ^ (uint)puVar34;
  getStopwatchFunc = (uint *)CONCAT31(uVar20,bVar4 + (byte)*puVar37);
  iVar15 = (CONCAT31((int3)((uint)iVar15 >> 8),bVar23 + 0x6f) - (uint)(0x90 < bVar23)) + -0x18093a86
  ;
  cVar6 = (char)iVar15;
  uVar19 = (undefined3)((uint)iVar15 >> 8);
  cVar5 = cVar6 + '\x02';
  pbVar45 = (byte *)CONCAT31(uVar19,cVar5);
  if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar45 = *pbVar45 + cVar5;
  pbVar11 = (byte *)CONCAT31(uVar19,cVar6 + 'q');
  ppbVar44 = &pbStack_30;
code_r0x00404a51:
  pbVar45 = pbVar11 + 1;
  cVar5 = (char)pbVar45;
  *pbVar45 = *pbVar45 + cVar5;
  puVar34 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                             CONCAT11((char)((uint)puVar28 >> 8) - cVar5,cVar31));
  *pbVar45 = *pbVar45 + cVar5;
  getStopwatchFunc =
       (uint *)CONCAT31((int3)((uint)getStopwatchFunc >> 8),(char)getStopwatchFunc - (byte)*puVar37)
  ;
  pbVar11 = pbVar11 + 0x757b03;
  pbVar45 = (byte *)((int)puVar46 + (int)ppbVar44 * 2);
  cVar5 = (char)pbVar11;
  *pbVar45 = *pbVar45 + cVar5;
  *pbVar11 = *pbVar11 + cVar5;
  *pbVar9 = *pbVar9 - (char)((uint)pbVar11 >> 8);
  *pbVar11 = *pbVar11 + cVar5;
  puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar44 + -0x3a));
  *pbVar11 = *pbVar11 + cVar5;
  pbVar45 = (byte *)(CONCAT31((int3)((uint)pbVar11 >> 8),cVar5 + '\x11') + 0x757b02);
  pbVar11 = (byte *)((int)puVar46 + (int)ppbVar44 * 2);
  bVar23 = (byte)pbVar45;
  *pbVar11 = *pbVar11 + bVar23;
  bVar4 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar23;
  puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,uStack_3c);
  pbRam011006fe = pbVar45 + (int)(pbRam011006fe + CARRY1(bVar4,bVar23));
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar23;
  if (!CARRY1(bVar4,bVar23)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar45;
    *pbVar45 = *pbVar45 + bVar4;
    bVar38 = (byte)puVar37;
    puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((byte)((uint)puVar37 >> 8) | *pbVar45,bVar38));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar19 = (undefined3)((uint)pbVar45 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar5 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar8 = (char *)CONCAT31(uVar19,cVar5);
    *pcVar8 = *pcVar8 + cVar5;
    puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar44 + -0x39));
    *pcVar8 = *pcVar8 + cVar5;
    iVar15 = CONCAT31(uVar19,cVar5 + '\x11') + 0xc57b;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar15;
    bVar23 = bVar4 + 0x6f;
    pbVar45 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar23);
    *puVar37 = (*puVar37 - (int)pbVar45) - (uint)(0x90 < bVar4);
    uVar36 = *getStopwatchFunc;
    *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + bVar38;
    pbRam011106fe = pbVar45 + (int)(pbRam011106fe + CARRY1((byte)uVar36,bVar38));
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar23;
    if (!CARRY1(bVar4,bVar23)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    bVar4 = (byte)puVar37;
    bVar23 = (byte)((uint)puVar37 >> 8) | *pbVar45;
    puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar23,bVar4));
    *pbVar45 = *pbVar45 - (char)pbVar45;
    *(byte *)puVar34 = (byte)*puVar34 + bVar23;
    out(*(undefined4 *)pbVar9,(short)getStopwatchFunc);
    *puVar37 = *puVar37 & (uint)pbVar45;
    uVar36 = *getStopwatchFunc;
    *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + bVar4;
    pbVar45 = pbVar45 + (uint)CARRY1((byte)uVar36,bVar4) + *(int *)(pbVar9 + 4);
    *pbVar45 = *pbVar45 + (char)pbVar45;
    *(byte *)puVar37 = (byte)*puVar37 + (char)getStopwatchFunc;
    pbVar9 = pbVar9 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar9,(short)getStopwatchFunc);
      pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(byte)pbVar45 & (byte)*puVar37);
      *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + (char)puVar37;
      getStopwatchFunc =
           (uint *)CONCAT22((short)((uint)getStopwatchFunc >> 0x10),
                            CONCAT11((byte)((uint)getStopwatchFunc >> 8) | (byte)puVar34[5],
                                     (char)getStopwatchFunc));
      *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
      pbVar9 = pbVar9 + 4;
code_r0x00404ad4:
      puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,uStack_3c);
      pbVar45 = (byte *)((uint)pbVar45 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar45;
code_r0x00404add:
      bVar4 = (byte)pbVar45;
      uVar19 = (undefined3)((uint)pbVar45 >> 8);
      cVar5 = bVar4 + 8;
      pbVar45 = (byte *)CONCAT31(uVar19,cVar5);
      if (SCARRY1(bVar4,'\b') == cVar5 < '\0') break;
      *pbVar45 = *pbVar45 + cVar5;
      cVar5 = bVar4 + 10;
      piVar16 = (int *)CONCAT31(uVar19,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *piVar16 = (int)(*piVar16 + (int)piVar16);
        goto code_r0x00404b18;
      }
      *(char *)piVar16 = (char)*piVar16 + cVar5;
      puVar21 = (uint *)CONCAT31(uVar19,bVar4 + 0x7c);
      *puVar21 = *puVar21 & (uint)puVar37;
      *(char *)((int)puVar21 + 0x11) =
           *(char *)((int)puVar21 + 0x11) + (char)((uint)getStopwatchFunc >> 8);
      cVar5 = (char)((int)puVar21 + 0xc67b);
      uVar19 = (undefined3)((uint)((int)puVar21 + 0xc67b) >> 8);
      bVar4 = cVar5 + 8;
      pbVar45 = (byte *)CONCAT31(uVar19,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar45 = *pbVar45 + bVar4;
        cRam02060000 = cVar5 + 'w';
        puVar21 = (uint *)CONCAT31(uVar19,cRam02060000);
        *(byte *)puVar21 = (byte)*puVar21 + cRam02060000;
        cVar5 = (char)puVar37;
        puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                   CONCAT11((byte)((uint)puVar37 >> 8) | (byte)*puVar21,cVar5));
        *puVar21 = *puVar21 - (int)puVar21;
        *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + cVar5;
        pbVar45 = pbVar9 + 4;
        out(*(undefined4 *)pbVar9,(short)getStopwatchFunc);
        pbVar9 = pbVar45;
        if ((POPCOUNT((byte)*getStopwatchFunc) & 1U) == 0) goto code_r0x00404b0f;
        pcVar8 = (char *)((uint)puVar21 | *puVar21);
        goto code_r0x00404b89;
      }
      bVar23 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar4;
      *(byte **)pbVar9 = pbVar45 + (uint)CARRY1(bVar23,bVar4) + *(int *)pbVar9;
    }
    *pbVar9 = *pbVar9 + 1;
    *puVar37 = (uint)(pbVar45 + (uint)(0xf7 < bVar4) + *puVar37);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'r');
    piVar16 = (int *)((uint)puVar21 | *puVar21);
    getStopwatchFunc = puStack_4c;
code_r0x00404b18:
    bRam11060000 = (byte)piVar16;
    iVar15 = CONCAT31((int3)((uint)((int)piVar16 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar16 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar15;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),bVar4 + 0x6f);
    *puVar37 = (*puVar37 - iVar15) - (uint)(0x90 < bVar4);
    cVar5 = (char)puVar37;
    *(byte *)getStopwatchFunc = (byte)*getStopwatchFunc + cVar5;
    bVar23 = (byte)((uint)puVar34 >> 8);
    bVar32 = (byte)((uint)getStopwatchFunc >> 8) | bVar23;
    pcVar18 = (char *)CONCAT22((short)((uint)getStopwatchFunc >> 0x10),
                               CONCAT11(bVar32,(byte)getStopwatchFunc));
    piVar16 = (int *)(iVar15 + 0x73060001);
    *(byte *)puVar37 = (byte)*puVar37 & (byte)piVar16;
    *pcVar18 = *pcVar18 + cVar5;
    bVar38 = (byte)((uint)puVar37 >> 8);
    *(byte *)piVar16 = *(char *)piVar16 - bVar38;
    *(byte *)piVar16 = *(char *)piVar16 + (byte)piVar16;
    iVar15 = *piVar16;
    *piVar16 = *piVar16 - (int)piVar16;
    *(byte *)puVar34 = (byte)*puVar34 + bVar38;
    pcVar8 = (char *)((uint)piVar16 | *puVar46);
    *pcVar18 = *pcVar18 - bVar38;
    bVar4 = (byte)pcVar8;
    *pcVar8 = *pcVar8 + bVar4;
    ppbVar44 = (byte **)(((int)ppbVar44 - iVar15) - *(int *)(pcVar8 + ((int)ppbVar44 - iVar15)));
    uVar25 = (undefined2)((uint)puVar34 >> 0x10);
    bVar24 = (byte)puVar34;
    cVar6 = bVar23 + *(byte *)((int)puVar34 + 0x76);
    pbVar11 = (byte *)CONCAT22(uVar25,CONCAT11(cVar6,bVar24));
    *pcVar8 = *pcVar8 + bVar4;
    uVar19 = (undefined3)((uint)pcVar8 >> 8);
    uVar13 = CONCAT31(uVar19,bVar4 + 7);
    puVar34 = (uint *)((int)ppbVar44 + -0x1faeef1);
    uVar36 = *puVar34;
    uVar1 = *puVar34 + uVar13;
    *puVar34 = uVar1 + (0xf8 < bVar4);
    puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,uStack_3c);
    puVar34 = puStack_4c;
    bVar23 = bVar4 + 7 + (byte)*puVar37 +
             (CARRY4(uVar36,uVar13) || CARRY4(uVar1,(uint)(0xf8 < bVar4)));
    puVar21 = (uint *)CONCAT31(uVar19,bVar23);
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar23;
    if (CARRY1(bVar4,bVar23)) break;
    *(byte *)puVar21 = (byte)*puVar21 + bVar23;
    puVar34 = (uint *)CONCAT22(uVar25,CONCAT11(cVar6 + pbVar11[0x76],bVar24));
    uStack_50 = uStack_3c;
  }
  *(byte *)puVar21 = (byte)*puVar21 + bVar23;
  uVar20 = (undefined3)((uint)pcVar18 >> 8);
  bVar27 = (byte)getStopwatchFunc | *pbVar11;
  getStopwatchFunc = (uint *)CONCAT31(uVar20,bVar27);
  pcRam2b060000 = (char *)CONCAT31(uVar19,bVar23 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar23 + 0x39)) - (0xd7 < (byte)(bVar23 + 0x11));
  bVar4 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar38;
  pbVar45 = pbVar9 + 4;
  out(*(undefined4 *)pbVar9,(short)getStopwatchFunc);
  bVar4 = (bVar23 + 0x37) - CARRY1(bVar4,bVar38);
  piVar16 = (int *)CONCAT31(uVar19,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar4;
    iVar15 = CONCAT31(uVar19,bVar4 + 0x11) + 0xc77b;
    pcVar8 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + 'r');
    pcVar8[0x28] = pcVar8[0x28] + bVar32;
code_r0x00404b89:
    cVar5 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar5;
    *pcVar8 = *pcVar8 + cVar5;
    *pcVar8 = *pcVar8 + cVar5;
    puVar12 = (ushort *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5 + 'r');
    uVar7 = (ushort)puVar12 | *puVar12;
    pcVar8 = (char *)CONCAT22((short)((uint)pcVar8 >> 0x10),uVar7);
    bRam11060000 = (byte)uVar7;
    out(*(undefined4 *)pbVar45,(short)getStopwatchFunc);
    *pcVar8 = *pcVar8 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar4;
  pbVar29 = (byte *)((int)ppbVar44 - *(int *)((int)puVar46 + 0x21));
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pcVar8 = (char *)CONCAT31(uVar20,bVar27 | *pbVar11);
  puVar46 = (uint *)(pbVar9 + 8);
  out(*(undefined4 *)pbVar45,(short)pcVar8);
  uVar36 = *puVar37;
  *pcVar8 = *pcVar8 + cVar5;
  uVar36 = CONCAT31(uVar19,bVar4 & (byte)uVar36) | 0x767b02;
  *(byte *)((int)puVar37 + (int)pcVar8) = *(byte *)((int)puVar37 + (int)pcVar8) + (char)uVar36;
  iVar15 = uVar36 + 0xc67b;
  cVar31 = (char)iVar15;
  uVar19 = (undefined3)((uint)iVar15 >> 8);
  cVar39 = cVar31 + 'r';
  pcVar8 = (char *)CONCAT31(uVar19,cVar39);
  pcVar8[0x28] = pcVar8[0x28] + bVar32;
  *pcVar8 = *pcVar8 + cVar39;
  uVar26 = (undefined2)((uint)puVar37 >> 0x10);
  bVar38 = bVar38 | *(byte *)((int)puStack_4c + -0x5e);
  puVar37 = (uint *)CONCAT22(uVar26,CONCAT11(bVar38,cVar5));
  *pcVar8 = *pcVar8 + cVar39;
  puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,uStack_50);
  pbVar45 = (byte *)CONCAT22(uVar25,CONCAT11(cVar6 + pbVar11[0x76],bVar24));
  *pcVar8 = *pcVar8 + cVar39;
  puVar21 = (uint *)CONCAT31(uVar19,cVar31 + -0x1c);
  pcVar8 = (char *)((uint)puVar21 | *puVar21);
  bVar47 = (POPCOUNT((uint)pcVar8 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar8;
  puVar21 = puStack_4c;
  pbVar11 = pbVar45;
  pbVar35 = pbVar29;
  puVar42 = puVar34;
  uVar25 = uStack_50;
  if (!bVar47) goto code_r0x00404ca8;
  *pcVar8 = *pcVar8 + cRam02060000;
  puVar21 = (uint *)CONCAT31((int3)((uint)pcVar8 >> 8),cRam02060000 + 'r');
  *puVar21 = *puVar21 & (uint)puVar37;
  *(char *)((int)puVar21 + 0x11) = *(char *)((int)puVar21 + 0x11) + (char)((ushort)uStack_50 >> 8);
  iVar15 = (int)puVar21 + 0xc77b;
  uVar19 = (undefined3)((uint)iVar15 >> 8);
  cRam02060000 = (char)iVar15 + '\t';
  pbVar11 = (byte *)CONCAT31(uVar19,cRam02060000);
  out(*puVar46,uStack_50);
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar42 = (uint *)CONCAT22(uVar26,CONCAT11(bVar38 | *pbVar11,cVar5));
  *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
  *(byte *)puStack_4c = (byte)*puStack_4c + cVar5;
  out(*(undefined4 *)(pbVar9 + 0xc),uStack_50);
  puVar28 = puStack_4c;
  puVar46 = (uint *)(pbVar9 + 0x10);
  uVar25 = uStack_50;
  if ((POPCOUNT((byte)*puStack_4c) & 1U) != 0) goto code_r0x00404cca;
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar12 = (ushort *)CONCAT31(uVar19,(char)iVar15 + '{');
  uVar7 = (ushort)puVar12 | *puVar12;
  pcVar8 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),uVar7);
  bVar4 = (byte)uVar7;
  out(*(uint *)(pbVar9 + 0x10),uStack_50);
  pbVar11 = (byte *)((int)puVar42 + 1);
  bRam11060000 = bVar4;
  *pcVar8 = *pcVar8 + bVar4;
  puVar37 = (uint *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                             CONCAT11((byte)((uint)pbVar11 >> 8) | bRam110cde91,(char)pbVar11));
  pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),bVar4 - 7);
  *puVar34 = (uint)(pcVar8 + (uint)(bVar4 < 7) + *puVar34);
  puVar46 = (uint *)(pbVar9 + 0x18);
  out(*(undefined4 *)(pbVar9 + 0x14),uStack_50);
  puVar21 = (uint *)((int)puStack_4c + 1);
  *pcVar8 = *pcVar8 + (bVar4 - 7);
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),bVar24 | (byte)(uVar7 >> 8));
  do {
    bVar4 = (char)pcVar8 - *pcVar8;
    uVar36 = *puVar37;
    *(byte *)puVar37 = (byte)*puVar37 + bVar4;
    cVar5 = bVar4 - CARRY1((byte)uVar36,bVar4);
    *(byte *)puVar21 = *(byte *)puVar21 + cVar5;
    cVar6 = (char)((uint)puVar37 >> 8);
    *(byte *)(puVar34 + 0x673b40) = (byte)puVar34[0x673b40] + cVar6;
    puVar17 = (uint *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5);
    *(byte *)puVar17 = (byte)*puVar17 + cVar5;
    *(byte *)puVar21 = *(byte *)puVar21 + cVar5;
    *(byte **)(pbVar11 + 0x58) = (byte *)(*(int *)(pbVar11 + 0x58) + (int)puVar46);
    puVar42 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar37 >> 0x10),
                                               CONCAT11(cVar6 + (char)((uint)pcVar8 >> 8),
                                                        (char)puVar37)) >> 8),
                               (char)puVar37 + *(char *)((int)puVar17 * 2));
    *(byte *)puVar17 = (byte)*puVar17 + cVar5;
    *(byte *)puVar46 = (byte)*puVar46 + (char)pbVar11;
    puVar28 = puVar21;
    pbVar45 = pbVar11;
_ctor:
    bVar23 = (byte)((uint)puVar42 >> 8);
    uVar36 = *puVar17;
    bVar4 = (byte)puVar42;
    puVar17 = (uint *)((int)puVar17 + (uint)CARRY1(bVar23,(byte)*puVar17) + *puVar17);
    *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
    cVar5 = bVar4 - *(byte *)((int)puVar28 + 3);
    puVar37 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar42 >> 0x10),
                                               CONCAT11(bVar23 + (byte)uVar36,bVar4)) >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      if (*(byte *)((int)puVar28 + 3) <= bVar4) {
        *puVar17 = (uint)(*puVar17 + (int)puVar17);
        puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(byte)puVar28 | *pbVar45);
        puVar17 = puVar17 + 0x230e;
        puVar42 = puVar37;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
    cVar5 = (char)puVar17 + '\x02';
    pcVar8 = (char *)CONCAT31((int3)((uint)puVar17 >> 8),cVar5);
    bVar47 = (POPCOUNT(cVar5) & 1U) == 0;
    puVar21 = puVar28;
    pbVar11 = pbVar45;
    pbVar35 = pbVar29;
    puVar42 = puVar34;
    uVar25 = puStack_40._0_2_;
code_r0x00404ca8:
    puStack_40._0_2_ = uVar25;
    pcVar18 = pcStack_1c;
    puVar28 = (uint *)pbStack_24;
    pbVar45 = pbStack_28;
    pbVar29 = pbStack_30;
    puVar34 = puStack_38;
    if (bVar47) break;
    *(byte *)puVar21 = *(byte *)puVar21 + (char)puVar37;
    pbVar29 = pbVar35;
    puVar34 = puVar42;
  } while( true );
  *pcVar8 = *pcVar8 + (char)pcVar8;
  bVar4 = (byte)pcStack_1c;
  *pcStack_1c = *pcStack_1c + bVar4;
  puVar42 = (uint *)CONCAT22((short)((uint)puStack_20 >> 0x10),
                             CONCAT11((byte)((uint)puStack_20 >> 8) | *pbStack_24,(char)puStack_20))
  ;
  *pbStack_28 = *pbStack_28 + (char)pbStack_28;
  pbVar9 = (byte *)((int)pcVar18 * 2);
  *pbVar9 = *pbVar9 ^ bVar4;
  uVar3 = *(undefined6 *)pcVar18;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar11 = (byte *)uVar3;
  bVar23 = (byte)uVar3;
  *pbVar11 = *pbVar11 + bVar23;
  bVar4 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar23;
  puVar46 = (uint *)((int)puVar42 + 0x11673);
  uVar36 = *puVar46;
  uVar1 = *puVar46;
  *puVar46 = (uint)((byte *)((int)puVar28 + uVar1) + CARRY1(bVar4,bVar23));
  puStack_38 = (uint *)CONCAT22(puStack_38._2_2_,puStack_40._0_2_);
  pbVar11 = pbVar11 + (uint)(CARRY4(uVar36,(uint)puVar28) ||
                            CARRY4((int)puVar28 + uVar1,(uint)CARRY1(bVar4,bVar23))) +
                      *(int *)((int)puVar42 + (int)puVar28);
  puVar46 = puStack_34;
  uVar25 = puStack_40._0_2_;
code_r0x00404cca:
  puStack_40._0_2_ = uVar25;
  cVar5 = (char)pbVar11 + '\x04';
  puVar17 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar5);
  if (SCARRY1((char)pbVar11,'\x04') == cVar5 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
  puVar21 = puVar46 + 1;
  out(*puVar46,(short)puVar28);
  uVar36 = *puVar42;
  bVar4 = *(byte *)puVar28;
  bVar23 = (byte)puVar42;
  *(byte *)puVar28 = *(byte *)puVar28 + bVar23;
  iVar15 = (CONCAT31((int3)((uint)puVar17 >> 8),(char)puVar17 + '\x03') & uVar36) + iRam00008c38;
  *(byte *)puVar42 = (byte)*puVar42 + (char)puVar28;
  pcVar8 = (char *)(iVar15 + (uint)CARRY1(bVar4,bVar23) + 0x1246f);
  bVar4 = *(byte *)puVar28;
  uVar19 = (undefined3)((uint)puVar42 >> 8);
  puVar37 = (uint *)CONCAT31(uVar19,bVar23 | bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar8 >> 8);
  puVar17 = (uint *)(CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + *pcVar8) + 0x1fbeef2);
  uVar36 = *puVar17;
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  if (CARRY4(uVar36,(uint)puVar17)) {
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    pcVar8 = (char *)CONCAT31(uVar19,bVar23 | bVar4 | bRam00282809);
    cVar5 = (char)((uint)puVar42 >> 8);
    *pbVar45 = *pbVar45 + cVar5;
    *pcVar8 = *pcVar8 - cVar5;
    *(byte *)puVar17 = *(byte *)puVar17 + (char)puVar17;
    iVar15 = (int)pcVar8 - *(int *)pbVar45;
    puVar46 = puVar46 + 2;
    out(*puVar21,(short)puVar28);
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    puVar37 = (uint *)CONCAT22((short)((uint)iVar15 >> 0x10),
                               CONCAT11((byte)((uint)iVar15 >> 8) | bRambf73070b,(char)iVar15));
code_r0x00404d15:
    uVar36 = *puVar17;
    bVar4 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar4;
    puVar21 = puVar46 + 1;
    out(*puVar46,(short)puVar28);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar23 = bVar4 + in_AF * '\x06';
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),
                               bVar23 + (0x90 < (bVar23 & 0xf0) |
                                        CARRY1((byte)uVar36,bVar4) | in_AF * (0xf9 < bVar23)) * '`')
    ;
  }
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  bVar23 = (byte)puVar17 | (byte)*puVar34;
  puVar46 = puVar21 + 1;
  uVar26 = SUB42(puVar28,0);
  out(*puVar21,uVar26);
  *(byte *)puVar37 = (byte)*puVar37 - bVar23;
  bVar4 = *(byte *)puVar28;
  bVar38 = (byte)puVar37;
  *(byte *)puVar28 = *(byte *)puVar28 + bVar38;
  iVar15 = CONCAT31((int3)((uint)puVar17 >> 8),bVar23) + *puVar46 + (uint)CARRY1(bVar4,bVar38);
  pbVar9 = pbVar29 + -*puVar28;
  uVar19 = (undefined3)((uint)iVar15 >> 8);
  cVar5 = (char)iVar15 + (byte)*puVar46 + (pbVar29 < (byte *)*puVar28);
  puVar42 = (uint *)CONCAT31(uVar19,cVar5);
  bVar4 = (byte)((uint)puVar37 >> 8);
  *(byte *)puVar37 = (byte)*puVar37 - bVar4;
  *puVar42 = (uint)(*puVar42 + (int)puVar42);
  bVar38 = bVar38 | *(byte *)((int)puVar28 + (int)puVar42);
  uVar25 = (undefined2)((uint)puVar37 >> 0x10);
  if ((POPCOUNT(bVar38) & 1U) == 0) {
    *(byte *)puVar42 = (byte)*puVar42 + cVar5;
    pcVar8 = (char *)CONCAT31(uVar19,cVar5 + '\x12');
    *pcVar8 = *pcVar8 + bVar4;
    puVar42 = (uint *)CONCAT31(uVar19,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar37 >> 8),bVar38));
    bVar23 = *(byte *)puVar28;
    *(byte *)puVar28 = *(byte *)puVar28 + bVar38;
    if (!CARRY1(bVar23,bVar38)) {
      pbVar11 = (byte *)((uint)puVar42 | *puVar42);
      out(*puVar46,uVar26);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      bVar23 = *pbVar11;
      piVar16 = (int *)CONCAT22(uVar25,CONCAT11(bVar4 | bVar23,bVar38));
      iVar15 = (int)pbVar11 - *piVar16;
      *(byte *)puVar28 = *(byte *)puVar28 + bVar38;
      puVar42 = puVar21 + 3;
      out(puVar21[2],uVar26);
      uRam12060000 = (undefined1)iVar15;
      *(char *)((int)piVar16 + iVar15) = *(char *)((int)piVar16 + iVar15) - (bVar4 | bVar23);
      *(byte *)puVar28 = *(byte *)puVar28 + bVar38;
      pbVar11 = (byte *)(iVar15 + -0x120edecd);
      *(byte *)puVar42 = (byte)*puVar42 + 1;
      bVar4 = *pbVar11;
      bVar23 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar23;
      pbVar9 = pbVar9 + ((-1 - *(int *)((int)puVar34 + 0x42)) - (uint)CARRY1(bVar4,bVar23));
      *pbVar11 = *pbVar11 + bVar23;
      bVar32 = (byte)pbVar45 | (byte)((uint)pbVar11 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar11;
      bVar4 = *(byte *)puVar28;
      pcVar8 = (char *)(((uint)pbVar11 | 0x11) + 0x511072c);
      puVar46 = puVar21 + 4;
      out(*puVar42,uVar26);
      puVar28 = (uint *)((int)puVar28 + 1);
      *pcVar8 = *pcVar8 + (char)pcVar8;
      bVar23 = (byte)((uint)pcVar8 >> 8);
      pbVar45 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar45 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar45 >> 8) | bVar4,bVar32)
                                                ) >> 8),bVar32 | bVar23);
      uVar19 = (undefined3)((uint)pcVar8 >> 8);
      bVar4 = (char)pcVar8 - *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar19,bVar4);
      *pcVar8 = *pcVar8 + bVar4;
      *(int *)((int)pcVar8 * 2) = (int)(pbVar45 + *(int *)((int)pcVar8 * 2));
      *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
      *pbVar9 = *pbVar9 + bVar23;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar36 = CONCAT31(uVar19,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar36;
      pbVar11 = (byte *)CONCAT22((short)(uVar36 >> 0x10),CONCAT11(bVar23 + in_AF,bVar4));
      *(byte *)puVar46 = (byte)*puVar46 + bVar38;
      *pbVar11 = *pbVar11 + bVar4;
      *pbVar11 = *pbVar11 + bVar4;
      bVar47 = CARRY1(bVar4,*pbVar11);
      puVar42 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar4 + *pbVar11);
      goto code_r0x00404d9a;
    }
    *pbVar45 = *pbVar45 - (char)puVar28;
  }
  *(byte *)puVar42 = (byte)*puVar42 + (char)puVar42;
  bVar47 = false;
  piVar16 = (int *)CONCAT22(uVar25,CONCAT11(bVar4 | *(byte *)puVar28,bVar38));
code_r0x00404d9a:
  do {
    pbVar29 = (byte *)puVar28;
    *puVar42 = (*puVar42 - (int)puVar42) - (uint)bVar47;
    bVar4 = (byte)((uint)piVar16 >> 8);
    uVar25 = (undefined2)((uint)piVar16 >> 0x10);
    bVar23 = (byte)piVar16;
    bVar38 = bVar4 + (byte)iRam00000c00;
    pbVar11 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *pbVar29 = *pbVar29 + bVar23;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(char)pbVar45 - (byte)*puVar46);
    bVar4 = *pbVar11;
    puVar42 = (uint *)(pbVar11 + (uint)CARRY1(bVar38,*pbVar11) + *(int *)pbVar11);
    *pbVar29 = *pbVar29 + bVar23;
    cVar6 = ((bVar38 + bVar4) - *pbVar29) + (byte)*puVar42;
    pcVar8 = (char *)CONCAT22(uVar25,CONCAT11(cVar6,bVar23));
    puVar21 = puVar34 + 1;
    uVar36 = in((short)pbVar29);
    *puVar34 = uVar36;
    cVar5 = (char)puVar42;
    *(byte *)puVar42 = (byte)*puVar42 + cVar5;
    uVar19 = (undefined3)((uint)pbVar29 >> 8);
    bVar38 = (byte)pbVar29 | (byte)*puVar46;
    pcVar18 = (char *)CONCAT31(uVar19,bVar38);
    *pcVar8 = *pcVar8 + '\x01';
    bVar4 = (cVar6 - *pcVar18) + (byte)*puVar42;
    pcVar8 = (char *)CONCAT22(uVar25,CONCAT11(bVar4,bVar23));
    puVar34 = puVar34 + 2;
    uVar36 = in((short)pcVar18);
    *puVar21 = uVar36;
    *(byte *)puVar42 = (byte)*puVar42 + cVar5;
    bVar38 = bVar38 | (byte)*puVar46;
    puVar28 = (uint *)CONCAT31(uVar19,bVar38);
    *pcVar8 = *pcVar8 + '\x01';
    bVar47 = bVar23 < *(byte *)((int)puVar28 + 2);
    cVar6 = bVar23 - *(byte *)((int)puVar28 + 2);
    piVar16 = (int *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  *(byte *)puVar42 = (byte)*puVar42 + cVar5;
  bVar23 = cVar5 + 0x7b;
  pbVar11 = (byte *)CONCAT31((int3)((uint)puVar42 >> 8),bVar23);
  pbVar45[(int)pbVar11] = pbVar45[(int)pbVar11] + bVar23;
  puVar21 = puVar46 + 1;
  uVar26 = SUB42(puVar28,0);
  out(*puVar46,uVar26);
  pbVar35 = pbVar45 + -1;
  *pbVar11 = *pbVar11 + bVar23;
  bVar4 = bVar4 | *(byte *)puVar28;
  piVar16 = (int *)CONCAT22(uVar25,CONCAT11(bVar4,cVar6));
  *pbVar11 = *pbVar11 + bVar23;
  *pbVar35 = *pbVar35 + bVar38;
  *pbVar35 = *pbVar35 ^ bVar23;
  *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
  *pbVar11 = *pbVar11 + bVar23;
  do {
    bVar24 = (byte)((uint)piVar16 >> 8);
    *(byte *)puVar34 = (byte)*puVar34 + bVar24;
    bVar4 = *pbVar11;
    bVar23 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar23;
    *(byte **)(pbVar45 + 0x17) =
         (byte *)((int)puVar21 + (uint)CARRY1(bVar4,bVar23) + *(int *)(pbVar45 + 0x17));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar20 = (undefined3)((uint)pbVar11 >> 8);
    bVar23 = bVar23 | (byte)*puVar21;
    puVar34 = (uint *)((int)puVar34 + *(int *)(pbVar9 + -0x34));
    *(char *)CONCAT31(uVar20,bVar23) = *(char *)CONCAT31(uVar20,bVar23) + bVar23;
    bVar4 = bVar23 + 2;
    cVar5 = (char)((uint)pbVar29 >> 8);
    bVar32 = (byte)piVar16;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar11 = (byte *)CONCAT31(uVar20,bVar23 + 0x15 + (0xfd < bVar23));
      if (0xec < bVar4 || CARRY1(bVar23 + 0x15,0xfd < bVar23)) {
        *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      }
code_r0x00404e60:
      pbVar9 = pbVar9 + -*puVar28;
      bVar4 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      pbVar45 = (byte *)((int)puVar21 + (-(uint)CARRY1(bVar4,(byte)pbVar11) - *(int *)pbVar11));
      pbVar11 = pbVar11 + *(int *)pbVar11;
      puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,in_DS);
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      *(char *)piVar16 = (char)*piVar16 + cVar5;
      bVar4 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      *(byte **)(pbVar35 + (int)puVar28) =
           (byte *)((int)puVar28 +
                   (uint)CARRY1(bVar4,(byte)pbVar11) + *(int *)(pbVar35 + (int)puVar28));
      pbVar11 = pbVar11 + 0x73061314;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      uVar20 = (undefined3)((uint)piVar16 >> 8);
      bVar32 = bVar32 | *(byte *)puVar28;
      pcVar18 = (char *)CONCAT31(uVar20,bVar32);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      cVar5 = (char)pbVar11 + 'o';
      pcVar8 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar5);
      *pcVar8 = *pcVar8 + cVar5;
      out(*(undefined4 *)pbVar45,uVar26);
      bVar4 = *(byte *)puVar28;
      *(byte *)puVar28 = *(byte *)puVar28 + bVar32;
      pcVar8 = pcVar8 + (uint)CARRY1(bVar4,bVar32) + *puVar34;
      *pcVar8 = *pcVar8 + (char)pcVar8;
      *pcVar18 = *pcVar18 + bVar38;
      puVar21 = (uint *)(pbVar45 + 8);
      out(*(undefined4 *)(pbVar45 + 4),uVar26);
      *(byte *)puVar28 = *(byte *)puVar28 + bVar32;
      piVar16 = (int *)((uint)pcVar8 | *puVar34);
      pcVar18[0x390a0000] = pcVar18[0x390a0000] - bVar24;
      pbVar11 = (byte *)&cRam07000000;
      *(byte *)puVar34 = (byte)*puVar34 - bVar24;
      *piVar16 = *piVar16 + (int)piVar16;
      puVar46 = (uint *)CONCAT31(uVar20,bVar32 | *(byte *)((int)piVar16 + (int)pcVar18));
      *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) - bVar24;
      cRam07000000 = cRam07000000 + bVar24;
      piVar16 = (int *)((uint)piVar16 | 0x777b02);
      pbVar45 = (byte *)((int)puVar34 + (int)pbVar9 * 2);
      bVar47 = SCARRY1(*pbVar45,(char)piVar16);
      *pbVar45 = *pbVar45 + (char)piVar16;
      bVar4 = *pbVar45;
      *(char *)piVar16 = (char)*piVar16;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar20,bVar4) = *(char *)CONCAT31(uVar20,bVar4) + bVar4;
    bVar23 = bVar23 + 0x71;
    pbVar11 = (byte *)CONCAT31(uVar20,bVar23);
    *pbVar11 = *pbVar11;
    *(byte *)puVar21 = (byte)*puVar21 + 1;
    *piVar16 = (*piVar16 - (int)pbVar11) - (uint)(0x90 < bVar4);
    uVar36 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar23;
    if (!CARRY1((byte)uVar36,bVar23)) goto code_r0x00404e60;
    *pbVar11 = *pbVar11 + bVar23;
    uVar25 = (undefined2)((uint)piVar16 >> 0x10);
    bVar24 = bVar24 | *pbVar11;
    pbVar11 = pbVar11 + -*(int *)pbVar11;
    *pbVar35 = *pbVar35 + bVar24;
    cVar6 = bVar32 - *(byte *)((int)puVar28 + 2);
    piVar16 = (int *)CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar24,bVar32)) >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  cVar31 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar31;
  uVar20 = (undefined3)((uint)pbVar11 >> 8);
  pcVar8 = (char *)CONCAT31(uVar20,cVar31 + '{');
  out(*puVar21,uVar26);
  *pcVar8 = *pcVar8 + cVar31 + '{';
  bVar23 = cVar31 + 0x7e;
  pbVar29 = (byte *)CONCAT31(uVar20,bVar23);
  puVar21 = puVar46 + 3;
  out(puVar46[2],uVar26);
  pbVar11 = pbVar45 + -2;
  *pbVar29 = *pbVar29 + bVar23;
  bVar4 = *(byte *)puVar28;
  puVar46 = (uint *)CONCAT22(uVar25,CONCAT11(bVar24 | bVar4,cVar6));
  *pbVar29 = *pbVar29 + bVar23;
  *pbVar11 = *pbVar11 + bVar38;
  *pbVar11 = *pbVar11 ^ bVar23;
  *(byte *)puVar28 = *(byte *)puVar28 + (bVar24 | bVar4);
  *pbVar29 = *pbVar29 + bVar23;
  *pbVar29 = *pbVar29 + cVar5;
  bVar4 = *pbVar29;
  *pbVar29 = *pbVar29 + bVar23;
  *(byte **)(pbVar45 + 0x18) =
       (byte *)((int)puVar21 + (uint)CARRY1(bVar4,bVar23) + *(int *)(pbVar45 + 0x18));
  *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
  bVar23 = bVar23 | (byte)*puVar21;
  puVar34 = (uint *)((int)puVar34 + *(int *)(pbVar9 + -0x33));
  *(char *)CONCAT31(uVar20,bVar23) = *(char *)CONCAT31(uVar20,bVar23) + bVar23;
  bVar47 = SCARRY1(bVar23,'\x02');
  bVar4 = bVar23 + 2;
  piVar16 = (int *)CONCAT31(uVar20,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar4;
    return CONCAT31(uVar20,bVar23 + 0x71);
  }
code_r0x00404ebf:
  bVar23 = (byte)piVar16;
  uVar20 = (undefined3)((uint)piVar16 >> 8);
  if (bVar4 != 0 && bVar47 == (char)bVar4 < '\0') {
    *(byte *)piVar16 = (char)*piVar16 + bVar23;
    puVar21[(int)puVar34 * 2] =
         (uint)((int)puVar28 + (uint)(0xd2 < bVar23) + puVar21[(int)puVar34 * 2]);
    return CONCAT31(uVar20,bVar23 + 0x2d);
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar4 = *pbVar11;
  *puVar21 = (uint)(*puVar21 + (int)piVar16);
  bVar32 = (byte)((uint)puVar46 >> 8);
  *(byte *)piVar16 = (char)*piVar16 - bVar32;
  *(byte *)piVar16 = (char)*piVar16 + bVar23;
  pbVar45 = (byte *)(CONCAT31(uVar19,bVar38 | bVar4) - *(int *)pbVar11);
  puVar37 = (uint *)CONCAT31(uVar20,bVar23 + 6);
  *(uint *)(pbVar11 + (int)puVar21 * 2) =
       (int)puVar37 + (uint)(0xf9 < bVar23) + *(int *)(pbVar11 + (int)puVar21 * 2);
  *(byte *)puVar46 = (byte)*puVar46 ^ bVar23 + 6;
  bVar23 = (byte)puVar46;
  *pbVar45 = *pbVar45 + bVar23;
  puVar42 = puVar21 + 1;
  uVar25 = SUB42(pbVar45,0);
  out(*puVar21,uVar25);
  *puVar46 = *puVar46 ^ (uint)puVar37;
  *pbVar45 = *pbVar45 + bVar23;
  puVar28 = (uint *)(pbVar11 + -*(int *)pbVar11);
  *(uint *)((int)puVar34 + 0x31) = *(uint *)((int)puVar34 + 0x31) | (uint)pbVar9;
  *puVar37 = *puVar37 + (int)puVar37;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar32 | (byte)*puVar28,bVar23)
                            );
  *(byte **)(pbVar45 + 0x6e) = (byte *)(*(int *)(pbVar45 + 0x6e) + (int)puVar42);
  piVar16 = (int *)((uint)puVar37 | *puVar37);
  bVar38 = (byte)puVar28;
  *(byte *)puVar34 = (byte)*puVar34 - bVar38;
  bVar4 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar23;
  if (CARRY1(bVar4,bVar23)) {
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar4 = pbVar45[0x11];
    uVar26 = (undefined2)((uint)puVar28 >> 0x10);
    out(*puVar42,uVar25);
    puVar46 = (uint *)((int)puVar46 + 1);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar27 = (byte)((uint)puVar28 >> 8) | bVar4 | *pbVar45;
    pcVar8 = (char *)((int)piVar16 + -0x21000001);
    bVar4 = (byte)pcVar8 | 0x11;
    uVar19 = (undefined3)((uint)pcVar8 >> 8);
    cVar5 = bVar4 - 7;
    pcVar18 = (char *)CONCAT31(uVar19,cVar5);
    *puVar34 = (uint)(pcVar18 + (uint)(bVar4 < 7) + *puVar34);
    puVar42 = puVar21 + 3;
    out(puVar21[2],uVar25);
    pbVar45 = pbVar45 + 1;
    *pcVar18 = *pcVar18 + cVar5;
    bVar32 = (byte)((uint)pcVar8 >> 8);
    bVar24 = bVar38 | bVar32;
    bVar23 = cVar5 - *pcVar18;
    bVar4 = *(byte *)puVar46;
    *(byte *)puVar46 = *(byte *)puVar46 + bVar23;
    *(char *)CONCAT31(uVar19,bVar23) =
         *(char *)CONCAT31(uVar19,bVar23) + bVar23 + CARRY1(bVar4,bVar23);
    *pbVar45 = *pbVar45 + bVar23;
    *(byte *)puVar42 = (byte)*puVar42 + bVar24;
    bVar4 = (byte)((uint)pbVar45 >> 8);
    *(byte *)puVar46 = *(byte *)puVar46 + bVar23 + CARRY1((byte)pbVar45,bVar4);
    piVar16 = (int *)CONCAT31(uVar19,bVar23);
    *(byte *)piVar16 = (char)*piVar16 + bVar23;
    pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                               CONCAT11(bVar4 + bVar32,(byte)pbVar45 + bVar4));
    puVar28 = (uint *)CONCAT22(uVar26,CONCAT11(bVar27 + *(char *)(CONCAT31((int3)(CONCAT22(uVar26,
                                                  CONCAT11(bVar27,bVar38)) >> 8),bVar24) + 0x76),
                                               bVar24));
    puStack_40._0_2_ = puStack_4c._0_2_;
code_r0x00404fa4:
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    pcVar8 = (char *)(CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + '(') ^ *puVar46);
    cVar31 = (char)puVar46;
    *pbVar45 = *pbVar45 + cVar31;
    uVar25 = (undefined2)((uint)puVar28 >> 0x10);
    cVar33 = (char)puVar28;
    cVar40 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x75);
    *pcVar8 = *pcVar8 + (char)pcVar8;
    cVar5 = (char)pcVar8 + 'o';
    pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5);
    *pcVar8 = *pcVar8 + cVar5;
    cVar39 = (char)((uint)puVar46 >> 8);
    *pbVar9 = *pbVar9 - cVar39;
    pbVar45[1] = pbVar45[1] + cVar31;
    pcVar8 = pcVar8 + -0x757b021b;
    cVar5 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar5;
    uVar19 = (undefined3)((uint)pcVar8 >> 8);
    cVar6 = cVar5 + 'o';
    pcVar8 = (char *)CONCAT31(uVar19,cVar6);
    pbVar29 = pbVar45 + 2;
    *pcVar8 = *pcVar8 + cVar6;
    iVar15 = CONCAT22(uVar25,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar40,cVar33)) +
                                                        0x76),cVar33));
    *pcVar8 = *pcVar8 + cVar6;
    pcVar8 = (char *)CONCAT31(uVar19,cVar5 + -0x22);
    puVar21 = (uint *)((int)puVar34 + 1);
    *(byte *)puVar34 = (byte)*puVar42;
    *pcVar8 = *pcVar8 + cVar5 + -0x22;
    *(byte *)((int)puVar46 + (int)pcVar8) =
         *(byte *)((int)puVar46 + (int)pcVar8) - (char)((uint)pbVar29 >> 8);
    *pbVar29 = *pbVar29 + cVar31;
    bVar23 = cVar39 - pbVar45[4];
    pbVar11 = (byte *)((int)puVar42 + 5);
    out(*(undefined4 *)((int)puVar42 + 1),(short)pbVar29);
    puVar34 = (uint *)((uint)(pcVar8 + *(int *)(pcVar8 + iVar15)) ^ 0x280a0001);
    *(byte *)puVar34 = (byte)*puVar34 << 1 | (char)(byte)*puVar34 < '\0';
    *pbVar11 = *pbVar11 + (char)puVar34;
    pbVar11 = pbVar11 + *(int *)(pbVar45 + -0x5c);
    pbVar45 = (byte *)((uint)puVar34 | *puVar34);
    *pbVar11 = *pbVar11 + (char)pbVar45;
    puVar28 = (uint *)CONCAT31((int3)((uint)iVar15 >> 8),cVar33 - (char)pbVar29);
    bVar4 = *pbVar45;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar23 + *pbVar45,cVar31));
    iVar15 = *(int *)pbVar45;
    *pbVar29 = *pbVar29 + cVar31;
    cVar5 = (char)(pbVar45 + (uint)CARRY1(bVar23,bVar4) + iVar15) + 'r';
    puVar34 = (uint *)CONCAT31((int3)((uint)(pbVar45 + (uint)CARRY1(bVar23,bVar4) + iVar15) >> 8),
                               cVar5);
    pbVar45 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),CONCAT11(10,(char)pbVar29));
    *(char *)(puVar34 + 10) = (char)puVar34[10] + '\n';
    *pbVar11 = *pbVar11 + cVar5;
    puVar42 = (uint *)(pbVar11 + *(int *)(pbVar45 + -0x5e));
    uVar36 = *puVar34;
    cVar5 = (char)((uint)puVar34 | uVar36);
    *(byte *)puVar42 = (byte)*puVar42 + cVar5;
    uVar19 = (undefined3)(((uint)puVar34 | uVar36) >> 8);
    cVar6 = cVar5 + (byte)*puVar28;
    puVar34 = (uint *)CONCAT31(uVar19,cVar6);
    if (SCARRY1(cVar5,(byte)*puVar28) == cVar6 < '\0') goto code_r0x00405090;
    *(byte *)puVar34 = (byte)*puVar34 + cVar6;
    piVar16 = (int *)CONCAT31(uVar19,cVar6 + '\x02');
    puVar34 = puVar21;
  }
  else {
    out(2,(char)piVar16);
    if ((POPCOUNT(*pbVar45) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar19 = (undefined3)((uint)piVar16 >> 8);
  cVar5 = (char)piVar16 + '}';
  pbVar11 = (byte *)CONCAT31(uVar19,cVar5);
  pbVar45[(int)pbVar11] = pbVar45[(int)pbVar11] + cVar5;
  pbVar45[0x280a0000] = pbVar45[0x280a0000] - (char)((uint)piVar16 >> 8);
  bVar4 = (byte)puVar46 & 7;
  *pbVar11 = *pbVar11 << bVar4 | *pbVar11 >> 8 - bVar4;
  *(byte *)puVar42 = (byte)*puVar42 + cVar5;
  cVar31 = (char)puVar28 - (byte)*puVar42;
  uVar25 = (undefined2)((uint)puVar28 >> 0x10);
  cVar39 = (char)((uint)puVar28 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar28 >> 8),cVar31) + 0x7c);
  pcVar8 = (char *)CONCAT22(uVar25,CONCAT11(cVar39,cVar31));
  *pbVar11 = *pbVar11 + cVar5;
  bVar23 = (char)piVar16 + 0xa7U & *pbVar45;
  puVar21 = (uint *)((int)puVar34 + *(int *)(pbVar9 + 0x7c));
  *(char *)CONCAT31(uVar19,bVar23) = *(char *)CONCAT31(uVar19,bVar23) + bVar23;
  bVar23 = bVar23 + 0x2a;
  pbVar11 = (byte *)CONCAT31(uVar19,bVar23);
  *pbVar11 = *pbVar11 + bVar23;
  *pcVar8 = *pcVar8 + cVar31;
  *pbVar45 = *pbVar45 ^ bVar23;
  *pcVar8 = *pcVar8 + bVar23;
  bVar4 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar23;
  cVar5 = (bVar23 - *pbVar11) - CARRY1(bVar4,bVar23);
  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar45;
  cVar39 = cVar39 + pcVar8[0x7b];
  *(char *)CONCAT31(uVar19,cVar5) = *(char *)CONCAT31(uVar19,cVar5) + cVar5;
  pcVar8 = (char *)CONCAT31(uVar19,cVar5 + 'o');
  *pcVar8 = *pcVar8 + cVar5 + 'o';
  pcVar8 = pcVar8 + 0x2ed7fde6;
  cVar6 = (char)pcVar8;
  *pcVar8 = *pcVar8 + cVar6;
  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar39,cVar31)) + 0x7b);
  *pcVar8 = *pcVar8 + cVar6;
  piVar16 = (int *)(CONCAT31((int3)((uint)pcVar8 >> 8),cVar6 + 'o') + 0x6f060000);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar20 = (undefined3)((uint)pbVar45 >> 8);
  bVar23 = (byte)pbVar45 | (byte)*puVar42;
  pbVar29 = (byte *)CONCAT31(uVar20,bVar23);
  uVar36 = CONCAT22(uVar25,CONCAT11(cVar39 + cVar5,cVar31)) | (uint)puVar42;
  uVar19 = (undefined3)((uint)piVar16 >> 8);
  bVar4 = (byte)piVar16 | *pbVar29;
  pbVar11 = (byte *)CONCAT31(uVar19,bVar4);
  cVar5 = (byte)puVar46 - bVar23;
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),cVar5);
  *pbVar11 = *pbVar11 + bVar4;
  puVar34 = puVar42 + 1;
  out(*puVar42,(short)pbVar29);
  *pbVar11 = bVar4;
  *pbVar29 = *pbVar29 + cVar5;
  puVar42 = puVar42 + 2;
  out(*puVar34,(short)pbVar29);
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  puVar28 = (uint *)(CONCAT31((int3)(uVar36 >> 8),(char)uVar36 - (char)((uint)pbVar45 >> 8)) |
                    (uint)puVar42);
  pbVar45 = (byte *)CONCAT31(uVar20,(bVar23 | (byte)*puVar42) + (byte)*puVar21);
  cVar5 = bVar4 - (byte)*puVar21;
  puVar34 = (uint *)CONCAT31(uVar19,cVar5 - *(char *)CONCAT31(uVar19,cVar5));
code_r0x00405090:
  *puVar34 = (uint)(pbVar45 + *puVar34);
  cVar5 = (char)puVar34;
  *(byte *)puVar34 = (byte)*puVar34 + cVar5;
  *(byte *)puVar34 = (byte)*puVar34 + cVar5;
  *(byte *)puVar34 = (byte)*puVar34 + cVar5;
  *puVar46 = *puVar46 - (int)pbVar9;
  uVar36 = *puVar42;
  bVar4 = (byte)pbVar45;
  *(byte *)puVar42 = (byte)*puVar42 + bVar4;
  *(byte *)puVar34 = (byte)*puVar34 + cVar5 + CARRY1((byte)uVar36,bVar4);
  *(byte *)puVar46 = (byte)*puVar46 + cVar5;
  uVar36 = *puVar28;
  *(byte *)puVar28 = (byte)*puVar28 + 0x72;
  *(byte *)puVar28 = (byte)*puVar28;
  cVar5 = (char)((uint)pbVar45 >> 8);
  if (SCARRY1((byte)uVar36,'r')) {
    puVar42 = (uint *)((int)puVar42 + *(int *)(pbVar45 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar42 = (byte)*puVar42 + (char)puVar34;
      uVar19 = (undefined3)((uint)puVar34 >> 8);
      cVar6 = (char)puVar34 + (byte)*puVar28;
      pcVar8 = (char *)CONCAT31(uVar19,cVar6);
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                 CONCAT11((char)((uint)puVar28 >> 8) +
                                          *(byte *)((int)puVar28 + 0x7b),(char)puVar28));
      *pcVar8 = *pcVar8 + cVar6;
      in_AF = 9 < (cVar6 + 0x6fU & 0xf) | in_AF;
      uVar36 = CONCAT31(uVar19,cVar6 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar38 = (byte)uVar36;
      piVar16 = (int *)CONCAT22((short)(uVar36 >> 0x10),
                                CONCAT11((char)((uint)puVar34 >> 8) + in_AF,bVar38));
      *piVar16 = *piVar16 + (int)piVar16;
      uVar19 = (undefined3)((uint)piVar16 >> 8);
      bVar38 = bVar38 | *(byte *)(piVar16 + 0x354a);
      bVar38 = bVar38 - *(char *)CONCAT31(uVar19,bVar38);
      pbVar11 = (byte *)CONCAT31(uVar19,bVar38);
      bVar23 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar38;
      puVar42 = (uint *)((int)puVar42 + (-(uint)CARRY1(bVar23,bVar38) - *(int *)pbVar11));
      puVar34 = (uint *)(pbVar11 + 0xfc00);
      *pbVar45 = *pbVar45 + cVar5;
      uVar36 = *puVar34;
      bVar23 = (byte)puVar34;
      *(byte *)puVar34 = (byte)*puVar34 + bVar23;
      uVar13 = (uint)CARRY1((byte)uVar36,bVar23);
      uVar36 = *puVar28;
      uVar1 = *puVar28;
      *puVar28 = (uint)((byte *)(uVar1 + (int)puVar34) + uVar13);
      if (!CARRY4(uVar36,(uint)puVar34) && !CARRY4(uVar1 + (int)puVar34,uVar13)) break;
      *(byte *)puVar34 = (byte)*puVar34 + bVar23;
    }
  }
  uVar36 = (uint)puVar34 | *puVar34;
  uVar25 = SUB42(pbVar45,0);
  *(byte *)puVar42 = (byte)*puVar42 + (char)uVar36;
  piVar16 = (int *)(uVar36 + 0xc1872);
  if (SCARRY4(uVar36,0xc1872)) {
    cVar6 = (char)piVar16;
    *(char *)piVar16 = *(char *)piVar16 + cVar6;
    *pbVar45 = *pbVar45 + cVar6;
    *(char *)piVar16 = *(char *)piVar16 + cVar6;
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar46;
    *(char *)piVar16 = *(char *)piVar16 + cVar6;
    *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) + bVar4;
    puVar34 = puVar42;
    goto code_r0x00405117;
  }
  do {
    uVar36 = *puVar42;
    bVar4 = (byte)piVar16;
    *(byte *)puVar42 = (byte)*puVar42 + bVar4;
    if (CARRY1((byte)uVar36,bVar4)) {
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      uVar19 = (undefined3)((uint)puVar46 >> 8);
      bVar23 = (byte)puVar46 | bRam396f1609;
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      puVar46 = (uint *)CONCAT31(uVar19,bVar23 | *(byte *)CONCAT31(uVar19,bVar23));
      uVar19 = (undefined3)((uint)piVar16 >> 8);
      bVar4 = bVar4 | *pbVar45;
      pcVar8 = (char *)CONCAT31(uVar19,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar34 = puVar42 + 1;
        out(*puVar42,uVar25);
        uVar36 = CONCAT22((short)((uint)piVar16 >> 0x10),(ushort)bVar4);
        *(byte *)puVar34 = (byte)*puVar34 + bVar4;
        pcVar8 = (char *)(uVar36 | 8);
        cVar6 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x7a);
        puVar37 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar6,(char)puVar28));
        *pcVar8 = *pcVar8 + (char)pcVar8;
        cVar5 = (char)pcVar8 + 'o';
        piVar16 = (int *)CONCAT31((int3)(uVar36 >> 8),cVar5);
        *(char *)piVar16 = (char)*piVar16 + cVar5;
        *(byte *)puVar46 = (byte)*puVar46 + 1;
        puVar42 = puVar42 + 2;
        out(*puVar34,uVar25);
        pbVar45 = (byte *)((uint)pbVar45 ^ uRam08122c04);
        iVar15 = CONCAT31((int3)((uint)(*piVar16 * 0x17070600) >> 8),2);
        *(char *)(iVar15 * 2) = *(char *)(iVar15 * 2) - cVar6;
        do {
          bVar4 = (byte)iVar15;
          *(byte *)puVar42 = (byte)*puVar42 + bVar4;
          bVar47 = CARRY1(bVar4,(byte)*puVar37);
          uVar19 = (undefined3)((uint)iVar15 >> 8);
          cVar5 = bVar4 + (byte)*puVar37;
          pbVar11 = (byte *)CONCAT31(uVar19,cVar5);
          uVar25 = in_DS;
          uVar26 = uStack_8c;
          if (SCARRY1(bVar4,(byte)*puVar37) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar11 = *pbVar11 + cVar5;
          uVar36 = CONCAT31(uVar19,cVar5 + '\'') + 0x1ebd9f3;
          uStack_90 = (undefined1)puStack_40._0_2_;
          uStack_8f = (undefined1)((ushort)puStack_40._0_2_ >> 8);
          piVar16 = (int *)(uVar36 ^ 0x73060000);
          puVar46 = (uint *)((int)puVar46 + 1);
          *piVar16 = (int)(*piVar16 + (int)piVar16);
          puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                     CONCAT11((byte)((uint)puVar37 >> 8) | pbVar9[0x7e],
                                              (char)puVar37));
          cVar5 = (char)uVar36;
          *(char *)piVar16 = (char)*piVar16 + cVar5;
          uVar36 = CONCAT31((int3)((uint)piVar16 >> 8),cVar5 + '\x02');
          bVar47 = 0xd9f2d2da < uVar36;
          iVar15 = uVar36 + 0x260d2d25;
          pbVar29 = pbVar9;
          do {
            uVar19 = (undefined3)((uint)iVar15 >> 8);
            bVar23 = (char)iVar15 + -2 + bVar47;
            pbVar9 = (byte *)CONCAT31(uVar19,bVar23);
            bVar4 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar23;
            bVar38 = (byte)puVar37;
            uStack_8c = puStack_40._0_2_;
            if (CARRY1(bVar4,bVar23)) {
              *pbVar9 = *pbVar9 + bVar23;
              puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                         CONCAT11((byte)((uint)puVar37 >> 8) | pbVar29[0x7f],bVar38)
                                        );
              *pbVar9 = *pbVar9 + bVar23;
              pbVar11 = (byte *)CONCAT31(uVar19,bVar23 + 0x2a);
              *pbVar11 = *pbVar11 + bVar23 + 0x2a;
              *(byte *)puVar37 = (byte)*puVar37 + (char)pbVar45;
              uVar25 = in_DS;
              while( true ) {
                in_DS = uVar25;
                bVar23 = (byte)pbVar11;
                *pbVar45 = *pbVar45 ^ bVar23;
                *pbVar45 = *pbVar45 + (char)puVar37;
                *pbVar11 = *pbVar11 + bVar23;
                *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)pbVar45 >> 8);
                bVar4 = *pbVar11;
                *pbVar11 = *pbVar11 + bVar23;
                uVar1 = *puVar37;
                uVar36 = *puVar37;
                *puVar37 = (uint)(pbVar11 + uVar36 + CARRY1(bVar4,bVar23));
                uVar19 = (undefined3)((uint)pbVar11 >> 8);
                if (CARRY4(uVar1,(uint)pbVar11) ||
                    CARRY4((uint)(pbVar11 + uVar36),(uint)CARRY1(bVar4,bVar23))) break;
                *(byte *)puVar42 = (byte)*puVar42 + bVar23;
                pcVar8 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                          CONCAT11((char)((uint)puVar46 >> 8) + *pbVar11,
                                                   (char)puVar46));
                *(byte *)puVar42 = (byte)*puVar42 + bVar23;
                piVar16 = (int *)CONCAT31(uVar19,bVar23 | (byte)*puVar37);
                puVar34 = puVar42;
                while( true ) {
                  puVar42 = puVar34 + 1;
                  out(*puVar34,(short)pbVar45);
                  pbVar45 = pbVar45 + 1;
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  bVar38 = (byte)((uint)pcVar8 >> 8) | *pbVar45;
                  uVar19 = (undefined3)((uint)piVar16 >> 8);
                  bVar23 = (byte)piVar16 ^ *pbVar45;
                  pcVar18 = (char *)CONCAT31(uVar19,bVar23);
                  cRam282b0000 = cRam282b0000 - bVar38;
                  *pcVar18 = *pcVar18 + bVar23;
                  pbVar9 = pbVar29 + -*(int *)pbVar45;
                  uStack_90 = (undefined1)in_DS;
                  uStack_8f = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar21 + 0x17);
                  *pcVar18 = *pcVar18 + bVar23;
                  puVar46 = (uint *)CONCAT22((short)((uint)pcVar8 >> 0x10),
                                             CONCAT11(bVar38 + bVar4 | *pbVar45,(char)pcVar8));
                  *(byte *)puVar37 = (byte)*puVar37 + (char)puVar37;
                  *(byte *)((int)pcVar18 * 2) = *(byte *)((int)pcVar18 * 2) ^ bVar23;
                  in_AF = 9 < (bVar23 & 0xf) | in_AF;
                  bVar23 = bVar23 + in_AF * -6;
                  pbVar11 = (byte *)CONCAT31(uVar19,bVar23 + (0x9f < bVar23 | in_AF * (bVar23 < 6))
                                                             * -0x60);
                  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
                  *(char *)((int)pbVar11 * 2) =
                       *(char *)((int)pbVar11 * 2) + (char)((uint)pbVar45 >> 8);
                  bVar47 = CARRY1((byte)*puVar46,(byte)pbVar45);
                  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar45;
                  uVar25 = in_DS;
                  uVar26 = puStack_40._0_2_;
GenerateStatusText:
                  in_DS = uVar26;
                  pbVar29 = pbVar9;
                  uStack_8c = in_DS;
                  if (!bVar47) break;
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  iVar15 = CONCAT31((int3)((uint)puVar46 >> 8),(byte)puVar46 | *pbVar45);
                  uVar25 = (undefined2)((uint)puVar37 >> 0x10);
                  cVar31 = (char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + 0x7d);
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  *(byte *)puVar21 = (byte)*puVar21 - (char)((uint)puVar46 >> 8);
                  iVar15 = iVar15 - *(int *)(&uRam0b0a0000 + iVar15);
                  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar31,(char)puVar37)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar42,(short)pbVar45);
                  pbVar45 = (byte *)CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar34 = puVar42 + 2;
                  out(puVar42[1],CONCAT11(uStack_8f,uStack_90));
                  pbVar29 = pbVar9 + 1;
                  cVar6 = (char)iVar15;
                  pcVar8 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),
                                            CONCAT11((byte)((uint)iVar15 >> 8) |
                                                     *(byte *)((int)puVar21 + 0x46),cVar6));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_40._0_2_ = CONCAT11(uStack_8f,uStack_90);
                  uVar19 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar34,0xf0)) >> 8);
                  piVar16 = (int *)CONCAT31(uVar19,0x5f);
                  puVar21 = (uint *)((int)puVar21 + 1);
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  puVar37 = (uint *)CONCAT22(uVar25,CONCAT11(cVar31 + cVar5 | (byte)puVar42[-0x1e],
                                                             (char)puVar37));
                  *(char *)piVar16 = (char)*piVar16 + '_';
                  puVar46 = (uint *)CONCAT31(uVar19,0x8c);
                  puVar34[(int)puVar21 * 2] = (uint)(pbVar45 + puVar34[(int)puVar21 * 2]);
                  uVar36 = *puVar34;
                  *(byte *)puVar34 = (byte)*puVar34 + 0x8c;
                  if ((byte)uVar36 < 0x74) {
                    *pbVar45 = *pbVar45 + cVar6;
                    *(byte *)puVar37 = (byte)*puVar37 >> 1;
                    *(char *)puVar46 = (char)*puVar46 + -0x74;
                    *puVar46 = (uint)(pbVar29 + *puVar46);
                    *puVar46 = *puVar46 << 1 | (uint)((int)*puVar46 < 0);
                    *pbVar45 = *pbVar45 + cVar6;
                    pbVar9[2] = pbVar9[2] - cVar6;
                    *pbVar45 = *pbVar45 + cVar6;
                    pbVar9 = (byte *)CONCAT31(uVar19,0x83);
                    puVar46 = puVar37;
                    goto code_r0x00405312;
                  }
                  *puVar46 = (uint)(*puVar46 + (int)puVar46);
                  piVar16 = (int *)(CONCAT31(uVar19,(byte)puVar46[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar46[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar16 = (int *)((int)piVar16 + *puVar34);
                }
              }
              *pbVar45 = *pbVar45 + bVar23;
              *(byte *)puVar37 = (byte)*puVar37 - (char)pbVar45;
              *pbVar11 = *pbVar11 + bVar23;
              pbVar9 = (byte *)CONCAT31(uVar19,bVar23 | (byte)*puVar37);
            }
            else {
              cVar5 = (char)puVar46;
              *pbVar45 = *pbVar45 + cVar5;
              *(byte **)pbVar9 = pbVar45 + *(int *)pbVar9;
              *pbVar9 = *pbVar9 + bVar23;
              bVar23 = bVar23 + *pbVar9;
              pbVar9 = (byte *)CONCAT31(uVar19,bVar23);
              if (-1 < (char)bVar23) {
                *(byte *)puVar37 = (byte)*puVar37 + bVar38;
                out(*puVar42,(short)pbVar45);
                pbVar45 = pbVar45 + 1;
                *pbVar9 = *pbVar9 + bVar23;
                puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),
                                           bVar38 | (byte)((uint)iVar15 >> 8));
                cVar6 = bVar23 - (byte)*puVar46;
                pcVar8 = (char *)CONCAT31(uVar19,cVar6);
                *pcVar8 = *pcVar8 + cVar6 + (bVar23 < (byte)*puVar46);
                *pbVar45 = *pbVar45 + cVar6;
                pcVar8 = (char *)((int)pcVar8 * 2 + 0x79);
                *pcVar8 = *pcVar8 + (char)((uint)pbVar45 >> 8);
                pbVar9 = (byte *)in((short)pbVar45);
                puVar42 = puVar42 + 1;
              }
              *(byte *)puVar42 = (byte)*puVar42 + cVar5;
              *pbVar9 = *pbVar9 + (char)pbVar9;
              *pbVar9 = *pbVar9 + (char)pbVar9;
              uStack_90 = (undefined1)in_DS;
              uStack_8f = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar9;
              bVar32 = (byte)((uint)puVar46 >> 8);
              bVar38 = bVar32 + *pbVar9;
              iVar15 = *(int *)pbVar9;
              *pbVar45 = *pbVar45 + cVar5;
              bVar23 = (char)(pbVar9 + (uint)CARRY1(bVar32,bVar4) + iVar15) - (byte)*puVar37;
              pbVar9 = (byte *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar32,bVar4) + iVar15)
                                              >> 8),bVar23);
              *(byte *)puVar37 = (byte)*puVar37 ^ bVar23;
              *pbVar29 = *pbVar29 + (char)puVar37;
              *pbVar9 = *pbVar9 + bVar23;
              *pbVar9 = *pbVar9 + bVar23;
              *pbVar9 = *pbVar9 + bVar23;
              puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                         CONCAT11(bVar38 + *pbVar9,cVar5));
              pbVar9 = pbVar9 + (uint)CARRY1(bVar38,*pbVar9) + *(int *)pbVar9;
              *pbVar45 = *pbVar45 + cVar5;
              puVar42 = (uint *)((int)puVar42 + *(int *)(pbVar45 + 0x3e));
            }
            *(byte *)puVar42 = (byte)*puVar42 + (char)pbVar9;
            cVar5 = (char)pbVar9 + 'r';
            puVar42 = (uint *)((int)puVar42 + -1);
            uVar36 = CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
            *(byte *)puVar42 = *(byte *)puVar42 + cVar5;
            bVar47 = 0xfff38f8d < uVar36;
            iVar15 = uVar36 + 0xc7072;
            pbVar9 = pbVar29;
          } while (SCARRY4(uVar36,0xc7072));
        } while( true );
      }
      *pcVar8 = *pcVar8 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar11 = (byte *)CONCAT31(uVar19,bVar4);
      bVar23 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar4;
      uVar19 = (undefined3)
               ((uint)(pbVar11 + (uint)CARRY1(bVar23,bVar4) + *(int *)((int)puVar46 + (int)pbVar45))
               >> 8);
      cVar6 = (char)(pbVar11 + (uint)CARRY1(bVar23,bVar4) + *(int *)((int)puVar46 + (int)pbVar45)) +
              'E';
      pcVar8 = (char *)CONCAT31(uVar19,cVar6);
      *pcVar8 = *pcVar8 + cVar6;
      cVar6 = cVar6 + *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar19,cVar6);
      *pcVar8 = *pcVar8 + cVar6;
      puVar34 = (uint *)CONCAT31(uVar19,cVar6 + *pcVar8);
      *(char *)puVar34 = (char)*puVar34 + cVar6 + *pcVar8;
      pbVar11 = (byte *)((uint)puVar34 | *puVar34);
      bVar4 = *pbVar11;
      bVar23 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar23;
      piVar16 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar23 + CARRY1(bVar4,bVar23));
      puVar34 = puVar42;
code_r0x00405117:
      *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
      puVar28 = (uint *)((int)puVar28 - *puVar28);
      puVar42 = puVar34 + 1;
      out(*puVar34,uVar25);
    }
    *pbVar45 = *pbVar45 + (char)puVar46;
    bVar47 = puVar28 < (uint *)*piVar16;
    puVar28 = (uint *)((int)puVar28 - *piVar16);
    bVar4 = (byte)((uint)puVar46 >> 8);
    *(byte *)((int)puVar21 + 0x39) = (*(byte *)((int)puVar21 + 0x39) - bVar4) - bVar47;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    uVar36 = *puVar28;
    *(int *)((int)puVar21 + 0x39) = *(int *)((int)puVar21 + 0x39) - (int)pbVar9;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar36 | (byte)*puVar28,(char)puVar46));
    *(char *)(piVar16 + 10) = (char)piVar16[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  bVar4 = (char)piVar16 + 0x28;
  pbVar9 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),bVar4);
  *pbVar9 = *pbVar9 ^ bVar4;
  *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)pcVar8 >> 8);
  bVar4 = *pbVar45;
  *pbVar45 = *pbVar45 + (byte)pcVar8;
  piVar16 = (int *)(((uint)pbVar9 | 0x1496f09) + *puVar21 + (uint)CARRY1(bVar4,(byte)pcVar8));
  puVar42 = puVar34 + 1;
  out(*puVar34,(short)pbVar45);
  pbVar11 = pbVar45 + -1;
  *piVar16 = *piVar16 + (int)piVar16;
  pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 | (byte)*puVar37);
  cVar5 = (char)piVar16 + '\x13';
  pbVar9 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),cVar5);
  puVar46 = puVar37;
  puVar34 = puVar42;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar45 = *pbVar45 - (char)((uint)pbVar11 >> 8);
    *pbVar9 = *pbVar9 + cVar5;
code_r0x00405396:
    bVar4 = *pbVar9;
    bVar23 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar23;
    *puVar42 = (uint)(pbVar9 + (uint)CARRY1(bVar4,bVar23) + *puVar42);
    out(*puVar42,(short)pbVar45);
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    pcVar8 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                              CONCAT11((byte)((uint)pbVar9 >> 8) | (byte)puVar42[1],bVar23));
    *(char **)((int)puVar21 + -1) = pcVar8 + *(int *)((int)puVar21 + -1);
    out(puVar42[1],(short)pbVar45);
    *pcVar8 = *pcVar8 + bVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar9 = *pbVar9 + (char)pbVar9;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + 'o');
  puVar37 = (uint *)((int)puVar46 + -1);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar19 = (undefined3)((uint)pbVar45 >> 8);
  piVar16 = (int *)((int)piVar16 + 0x1b7e);
  bVar38 = (byte)pbVar45 | *(byte *)puVar37 | *(byte *)puVar37;
  iRam04115f2c = iRam04115f2c + (int)piVar16;
  out(*puVar34,(short)CONCAT31(uVar19,bVar38));
  *piVar16 = *piVar16 + (int)piVar16;
  bVar38 = bVar38 | (byte)piVar16;
  iVar30 = CONCAT31(uVar19,bVar38);
  pbVar45 = (byte *)((int)piVar16 - *piVar16);
  cVar5 = (char)pbVar45;
  *pcVar8 = *pcVar8 + cVar5;
  cVar6 = (char)pcVar8 - bVar38;
  *pbVar45 = *pbVar45 + cVar5;
  uVar25 = (undefined2)((uint)pcVar8 >> 0x10);
  bVar23 = (byte)((uint)pcVar8 >> 8) | *pbVar45;
  pbVar29 = pbVar29 + -1;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  bVar4 = *(byte *)(CONCAT22(uVar25,CONCAT11(bVar23,cVar6)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar45;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar29;
  *pbVar45 = *pbVar45 + cVar5;
  bVar4 = bVar23 | bVar4 | *(byte *)puVar37;
  iVar22 = CONCAT22(uVar25,CONCAT11(bVar4,cVar6));
  pbVar11 = (byte *)((uint)(puVar34 + 1) ^ *(uint *)(iVar30 + -0x43));
  iVar15 = *(int *)pbVar45;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  if (SCARRY4(iVar15,(int)pbVar45)) {
    *pbVar45 = *pbVar45 + cVar5;
  }
  pbVar9 = pbVar45 + 0x5674;
  puVar21 = (uint *)((int)puVar21 +
                    (-(uint)((byte *)0xffffa98b < pbVar45) - *(int *)(pbVar11 + -0x7f)));
  bVar23 = (byte)pbVar9;
  *pbVar9 = *pbVar9 + bVar23;
  uVar20 = (undefined3)((uint)pbVar9 >> 8);
  bVar32 = bVar23 + 0x2d;
  piVar16 = (int *)CONCAT31(uVar20,bVar32);
  *(uint *)(pbVar11 + (int)puVar21 * 8) =
       *(int *)(pbVar11 + (int)puVar21 * 8) + iVar30 + (uint)(0xd2 < bVar23);
  bVar23 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar32;
  if (!CARRY1(bVar23,bVar32)) {
    do {
      pbVar9 = (byte *)(iVar30 + 1);
      bVar23 = (byte)piVar16;
      *(byte *)piVar16 = (char)*piVar16 + bVar23;
      bVar38 = (byte)((uint)piVar16 >> 8);
      bVar32 = (byte)puVar37 | bVar38;
      puVar34 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),bVar32);
      out(*(undefined4 *)pbVar11,(short)pbVar9);
      *(byte *)piVar16 = (char)*piVar16 + bVar23;
      uVar25 = (undefined2)((uint)iVar22 >> 0x10);
      cVar5 = (char)iVar22;
      pbVar45 = (byte *)CONCAT22(uVar25,CONCAT11((byte)((uint)iVar22 >> 8) | *pbVar9,cVar5));
      bVar4 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar23;
      *(byte *)piVar16 = (char)*piVar16 + bVar23 + CARRY1(bVar4,bVar23);
      *pbVar9 = *pbVar9 + bVar23;
      *(byte *)puVar21 = (byte)*puVar21 + bVar38;
      *(int *)((int)piVar16 * 2) =
           *(int *)((int)piVar16 * 2) + CONCAT22(uVar25,CONCAT11(0x1c,cVar5));
      *(byte *)piVar16 = (char)*piVar16 + bVar23;
      cVar6 = (char)pbVar9;
      *(byte *)puVar34 = (byte)*puVar34 + cVar6;
      *(byte *)((int)piVar16 * 2) = *(byte *)((int)piVar16 * 2) ^ bVar23;
      *(byte *)piVar16 = (char)*piVar16 + bVar23;
      pbVar45 = pbVar11 + 8;
      out(*(undefined4 *)(pbVar11 + 4),(short)pbVar9);
      piVar16 = &uRam0a0a0000;
      *pbVar9 = *pbVar9;
      bVar23 = cVar5 - cVar6;
      iVar22 = CONCAT22(uVar25,CONCAT11((byte)puVar21[0x14] | 0x1c | bRam0ca87216,bVar23));
      *pbVar9 = *pbVar9;
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar23;
      if (!CARRY1(bVar4,bVar23)) {
        piVar16 = &uRam1e7b7000;
        bVar4 = (byte)((uint)puVar37 >> 8) | *(byte *)(iVar30 + 3);
        puVar34 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar4,bVar32));
        if (bVar4 != 0) {
          pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar6 + pbVar45[(int)puVar21 * 8]);
          piVar16 = (int *)0x6d7d7000;
          iVar22 = iVar22 + 1;
        }
      }
      *piVar16 = *piVar16 + (int)piVar16;
      iVar30 = CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 | pbVar45[(int)puVar21 * 8]);
      *(char *)piVar16 = (char)*piVar16;
      piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),0xf9);
      *puVar21 = (uint)((int)piVar16 + *puVar21 + 1);
      pbVar11 = pbVar11 + 0xc;
      out(*(undefined4 *)pbVar45,(short)iVar30);
      puVar37 = puVar34;
    } while( true );
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar32 = bVar32 | *(byte *)((int)piVar16 + 0x4000081);
  piVar16 = (int *)CONCAT31(uVar20,bVar32);
  if ('\0' < (char)bVar32) {
    *(byte *)piVar16 = (char)*piVar16 + bVar32;
    puVar34 = (uint *)CONCAT31(uVar20,bVar32 + 0x28);
    *puVar34 = *puVar34 ^ (uint)puVar34;
    *(byte *)puVar37 = *(byte *)puVar37 + bVar4;
    cVar5 = (bVar32 + 0x28) - bVar4;
    pcVar8 = (char *)CONCAT31(uVar20,cVar5);
    *pcVar8 = *pcVar8 + cVar5;
    pbVar45 = (byte *)CONCAT31(uVar19,bVar38 | *(byte *)puVar37);
    pcVar18 = (char *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((char)((uint)puVar37 >> 8) + *(byte *)((int)puVar46 + 0x7d),
                                        (char)puVar37));
    *pcVar8 = *pcVar8 + cVar5;
    pbVar9 = (byte *)CONCAT31(uVar20,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar20,cVar5 + 0x39U));
    *pcVar18 = *pcVar18 + bVar4;
    puVar42 = (uint *)(pbVar11 + 4);
    out(*(undefined4 *)pbVar11,(short)pbVar45);
    goto code_r0x00405396;
  }
  puVar34 = (uint *)(pbVar11 + 4);
  out(*(undefined4 *)pbVar11,(short)iVar30);
  pcVar8 = (char *)(iVar22 + -1);
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pbVar45 = (byte *)CONCAT31(uVar19,bVar38 | *(byte *)puVar37);
  goto code_r0x004052ee;
}


