/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004046d5
 * Raw Name    : <GetSettingsAquirer>b__1
 * Demangled   : <GetSettingsAquirer>b__1
 * Prototype   : int <GetSettingsAquirer>b__1(char * baseUrl, undefined4 param_2)
 * Local Vars  : ppbVar43, ppbVar42, pbVar44, unaff_ESI, puVar45, unaff_EDI, in_CS, in_ES, in_DS, in_SS, in_AF, bVar46, param_2, baseUrl, uStack_98, uStack_96, uStack_97, uStack_58, uStack_94, iStack_50, puStack_54, puStack_48, pbStack_4c, puStack_40, uStack_44, pbStack_38, puStack_3c, pbStack_30, puStack_34, puStack_28, pbStack_2c, puStack_20, pcStack_24, iStack_18, puStack_1c, uVar1, pcStack_14, uVar3, uVar2, cVar5, bVar4, bVar7, cVar6, in_EAX, uVar8, pbVar10, pcVar9, pbVar12, pcVar11, uVar14, puVar13, iVar16, puVar15, puVar18, piVar17, uVar20, uVar19, puVar22, puVar21, bVar24, iVar23, uVar26, uVar25, puVar28, bVar27, iVar30, pbVar29, bVar32, cVar31, unaff_EBX, cVar33, pbVar35, puVar34, bVar37, uVar36, cVar39, cVar38, puVar41, ppbVar40
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

int __fastcall <GetSettingsAquirer>b__1(char *baseUrl,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  byte *in_EAX;
  undefined3 uVar19;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  ushort *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  undefined3 uVar20;
  byte bVar24;
  uint *puVar21;
  undefined2 uVar25;
  undefined2 uVar26;
  uint *puVar22;
  int iVar23;
  byte bVar27;
  char cVar31;
  byte bVar32;
  uint *puVar28;
  byte *pbVar29;
  int iVar30;
  char cVar33;
  byte bVar37;
  uint *unaff_EBX;
  uint *puVar34;
  char cVar38;
  byte *pbVar35;
  char cVar39;
  uint uVar36;
  byte **ppbVar40;
  uint *puVar41;
  byte **ppbVar42;
  byte **ppbVar43;
  undefined4 *unaff_ESI;
  byte *pbVar44;
  uint *unaff_EDI;
  uint *puVar45;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar46;
  byte in_AF;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_58;
  uint *puStack_54;
  int iStack_50;
  byte *pbStack_4c;
  uint *puStack_48;
  undefined2 uStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  byte *pbStack_38;
  uint *puStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  uint *puStack_28;
  char *pcStack_24;
  uint *puStack_20;
  uint *puStack_1c;
  int iStack_18;
  char *pcStack_14;
  
                    /* .NET CLR Managed Code */
  uVar36 = unaff_EBX[0xb];
  bVar7 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar7;
  puVar22 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)param_2 >> 0x10),
                                             CONCAT11((char)((uint)param_2 >> 8) + (byte)uVar36,
                                                      (char)param_2)) >> 8),
                             (char)param_2 - (byte)*unaff_EBX);
  bRam0000c800 = bRam0000c800 ^ bVar7;
  bVar37 = (byte)((uint)baseUrl >> 8);
  *(byte *)puVar22 = (byte)*puVar22 + bVar37;
  bVar4 = *in_EAX;
  *in_EAX = *in_EAX + bVar7;
  *puVar22 = (uint)(in_EAX + (uint)CARRY1(bVar4,bVar7) + *puVar22);
  pbVar10 = (byte *)(unaff_ESI + 1);
  uVar26 = SUB42(puVar22,0);
  out(*unaff_ESI,uVar26);
  *in_EAX = *in_EAX + bVar7;
  uVar19 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = bVar7 - 0x1f;
  pcVar9 = (char *)CONCAT31(uVar19,bVar4);
  puVar34 = unaff_EBX;
  if (bVar4 == 0 || (char)bVar7 < '\x1f') goto code_r0x0040475f;
  *pcVar9 = *pcVar9 + bVar4;
  piVar17 = (int *)CONCAT31(uVar19,bVar7 + 0xe);
  *(byte **)(pbVar10 + (int)unaff_EDI * 8) =
       (byte *)((int)puVar22 + (uint)(0xd2 < bVar4) + *(int *)(pbVar10 + (int)unaff_EDI * 8));
  uRam7305fffc = in_CS;
  *piVar17 = *piVar17 + (int)piVar17;
  bVar4 = bVar7 + 0xe | *(byte *)((int)piVar17 + 0x400006d);
  pcVar9 = (char *)CONCAT31(uVar19,bVar4);
  puVar45 = unaff_EDI;
  if ((char)bVar4 < '\x01') goto code_r0x00404777;
  *pcVar9 = *pcVar9 + bVar4;
  bVar4 = bVar4 + 0x10;
  pcVar9 = (char *)CONCAT31(uVar19,bVar4);
  *puVar22 = (uint)(pcVar9 + *puVar22);
  out(*(undefined4 *)pbVar10,uVar26);
  pcRam7305fff8 = baseUrl;
  *pcVar9 = *pcVar9 + bVar4;
  uRam7305fff0 = in_SS;
  uRam7305fff4 = in_ES;
  *baseUrl = *baseUrl + '\x01';
  uRam7305ffec = in_SS;
  *baseUrl = *baseUrl + '\x01';
  bVar4 = bVar4 | (byte)*puVar22;
  pcVar9 = (char *)CONCAT31(uVar19,bVar4);
  out(unaff_ESI[2],uVar26);
  puVar45 = (uint *)((int)unaff_EDI + -1);
  *pcVar9 = *pcVar9 + bVar4;
  pcVar9 = (char *)((int)((uint)pcVar9 | *puVar45) + *(int *)((uint)pcVar9 | *puVar45));
  uRam7305ffe8 = in_ES;
  *pcVar9 = *pcVar9 + (char)pcVar9;
  cVar5 = (char)pcVar9 + *pcVar9;
  puVar34 = (uint *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5);
  *(char *)puVar34 = (char)*puVar34 + cVar5;
  *puVar34 = *puVar34 & (uint)puVar34;
  *(char *)puVar34 = (char)*puVar34 + cVar5;
  pbVar10 = (byte *)((int)puVar34 + 1);
  cVar5 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar5;
  uVar36 = *unaff_EBX;
  *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar37;
  puVar15 = unaff_ESI + 3;
  if (CARRY1((byte)uVar36,bVar37)) {
    puVar15 = unaff_ESI + 4;
    out(unaff_ESI[3],uVar26);
    puVar45 = (uint *)((int)unaff_EDI + -2);
  }
  *pbVar10 = *pbVar10 + cVar5;
  puVar21 = (uint *)CONCAT22((short)((uint)baseUrl >> 0x10),
                             CONCAT11(bVar37 + *(byte *)((int)puVar45 + 0x49),(char)baseUrl));
  uRam7305ffe4 = in_ES;
  *pbVar10 = *pbVar10 + cVar5;
  uRam7305ffe0 = in_ES;
  *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
  out(*puVar15,uVar26);
  puVar34 = (uint *)((int)unaff_EBX + -1);
  *pbVar10 = *pbVar10 + cVar5;
  pbVar44 = (byte *)((int)puVar15 + *(int *)((int)unaff_EBX + -0x7f) + 4);
  uRam7305ffd8 = in_ES;
  uRam7305ffdc = in_ES;
  *pbVar10 = *pbVar10 + cVar5;
  do {
    puStack_3c = (uint *)((uint)puStack_3c & 0xffff0000);
    cVar5 = (char)pbVar10 - (byte)*puVar22;
    pcVar9 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
    pbVar10 = pbVar44 + 4;
    out(*(undefined4 *)pbVar44,(short)puVar22);
    unaff_EDI = (uint *)((int)puVar45 + -1);
    *pcVar9 = *pcVar9 + cVar5;
    baseUrl = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11((char)((uint)puVar21 >> 8) + (byte)puVar45[0x12],
                                        (char)puVar21));
code_r0x0040475f:
    cVar5 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar5;
    *(byte *)(puVar34 + 0x818000) = (byte)puVar34[0x818000] - (char)((uint)puVar34 >> 8);
    out(*(undefined4 *)pbVar10,(short)puVar22);
    pbVar44 = (byte *)((int)puVar34 + -1);
    *pcVar9 = *pcVar9 + cVar5;
    pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_ES);
    iStack_18 = CONCAT22(iStack_18._2_2_,in_ES);
    pbVar10 = pbVar10 + *(int *)((int)puVar34 + -0x71) + 4;
    *pcVar9 = *pcVar9 + cVar5;
    puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar44 >> 0x10),
                                 CONCAT11((char)((uint)pbVar44 >> 8) - pbVar10[0x6e],(char)pbVar44))
    ;
    puVar45 = unaff_EDI;
code_r0x00404777:
    bVar4 = (byte)pcVar9;
    *pcVar9 = *pcVar9 + bVar4;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    puVar34 = (uint *)(pbVar10 + (int)puVar45 * 8);
    uVar36 = *puVar34;
    uVar1 = *puVar34;
    *puVar34 = (uint)((byte *)(uVar1 + (int)puVar22) + (0xd2 < bVar4));
    puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,in_ES);
    puVar41 = (uint *)0x73060000;
    cVar6 = bVar4 + 0x2e +
            (CARRY4(uVar36,(uint)puVar22) || CARRY4(uVar1 + (int)puVar22,(uint)(0xd2 < bVar4)));
    *(byte *)puVar22 = (byte)*puVar22 + (char)baseUrl;
    *pbVar10 = *pbVar10;
    cVar5 = cVar6 + '~';
    pcVar11 = (char *)CONCAT31(uVar19,cVar5);
    out(*pbVar10,(short)puVar22);
    *pcVar11 = *pcVar11 + cVar5;
    cVar6 = cVar6 + -0x80;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6);
    out(*(undefined4 *)(pbVar10 + 1),(short)puVar22);
    puVar21 = (uint *)(baseUrl + -1);
    *pcVar11 = *pcVar11 + cVar6;
    pcStack_24 = (char *)CONCAT22(pcStack_24._2_2_,in_ES);
    *(byte *)puVar45 = (byte)*puVar45 - (char)((uint)pcVar9 >> 8);
    *pcVar11 = *pcVar11 + cVar6;
    puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_ES);
    *pcVar11 = *pcVar11 - (char)((uint)puVar21 >> 8);
    *pcVar11 = *pcVar11 + cVar6;
    pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_ES);
    pbVar44 = pbVar10 + *(int *)((int)unaff_EBX + 9) + 5;
    *pcVar11 = *pcVar11 + cVar6;
    puStack_34 = (uint *)CONCAT22(puStack_34._2_2_,in_ES);
    cVar5 = (char)puVar22;
    cVar31 = (char)((uint)puVar22 >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(cVar31,cVar5));
    *pcVar11 = *pcVar11 + cVar6;
    uVar26 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar37 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)puVar22 + 0x36);
    puVar34 = (uint *)CONCAT22(uVar26,CONCAT11(bVar37,(char)unaff_EBX));
    bVar7 = cVar6 + (byte)*puVar34;
    pbVar10 = (byte *)CONCAT31(uVar19,bVar7);
    *(byte *)puVar45 = (byte)*puVar45 - cVar31;
    bVar4 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,in_ES);
  } while (!CARRY1(bVar4,bVar7));
  *pbVar10 = *pbVar10 + bVar7;
  bVar7 = bVar7 - *pbVar10;
  pbVar10 = (byte *)CONCAT31(uVar19,bVar7);
  *(byte *)puVar34 = (byte)*puVar34 + cVar5;
  *(byte *)puVar22 = (byte)*puVar22 ^ bVar7;
  baseUrl[0x2affffff] = baseUrl[0x2affffff] + bVar7;
  bVar4 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar7;
  *puVar34 = (uint)(pbVar10 + (uint)CARRY1(bVar4,bVar7) + *puVar34);
  pbVar12 = pbVar10 + -0x32a1702;
  if (pbVar12 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar12;
    puVar28 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + (byte)*puVar22);
    puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,in_ES);
    pbVar10[-0xe0c891b] = pbVar10[-0xe0c891b] + cVar31;
    pbVar12 = pbVar10 + 0x19fd76e3;
    bVar4 = *pbVar12;
    *pbVar12 = *pbVar12 - bVar37;
    piVar17 = (int *)((uint)(pbVar10 + (bVar4 < bVar37) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar17 + 0x73) = *(char *)((int)piVar17 + 0x73) + cVar31;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar7 = bVar37 | *(byte *)((int)puVar22 + 2);
    puVar34 = (uint *)CONCAT22(uVar26,CONCAT11(bVar7,(char)unaff_EBX));
    cVar5 = (char)piVar17;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      uVar19 = (undefined3)((uint)(pbVar10 + (bVar4 < bVar37) + 0x63fd76e4) >> 8);
      cVar6 = cVar5 + '\x06';
      if ((POPCOUNT(cVar6) & 1U) == 0) {
        *(char *)CONCAT31(uVar19,cVar6) = *(char *)CONCAT31(uVar19,cVar6) + cVar6;
        pbVar12 = (byte *)CONCAT31(uVar19,cVar5 + '.');
        puVar21 = puVar28;
        uStack_44 = in_SS;
        goto code_r0x00404803;
      }
      cVar5 = cVar6 + (byte)*puVar34;
      pcVar9 = (char *)CONCAT31(uVar19,cVar5);
      if (SCARRY1(cVar6,(byte)*puVar34) == cVar5 < '\0') {
code_r0x004048e7:
        pcVar9 = (char *)((uint)pcVar9 | 8);
        uStack_44 = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(puVar22 + 0x1cc18000) = (byte)puVar22[0x1cc18000] + cVar5;
code_r0x0040486e:
      pcVar9 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),(byte)piVar17 & (byte)*puVar22);
      puVar45 = (uint *)((int)puVar45 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar9 = *pcVar9 + (char)pcVar9;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + '*');
    puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,in_DS);
    bVar4 = (byte)((uint)puVar28 >> 8);
    cVar5 = (char)puVar28;
    puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar4 + *pbVar10,cVar5));
    pbVar10 = pbVar10 + (uint)CARRY1(bVar4,*pbVar10) + *(int *)pbVar10;
    *(byte *)puVar22 = (byte)*puVar22 + cVar5;
    bVar46 = (byte)pbVar10 < *pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 - *pbVar10);
code_r0x00404880:
    pbVar44 = pbVar44 + (uint)bVar46 + *(int *)pbVar10;
    uStack_44 = in_ES;
    while( true ) {
      bVar7 = (byte)pbVar10;
      pbVar10[0x2c000000] = pbVar10[0x2c000000] + bVar7;
      bVar4 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar7;
      *puVar22 = (uint)(pbVar10 + (uint)CARRY1(bVar4,bVar7) + *puVar22);
      *(byte *)puVar34 = (byte)*puVar34 - (char)puVar22;
      *pbVar10 = *pbVar10 + bVar7;
      puVar21 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7 | (byte)*puVar34);
code_r0x00404895:
      pcVar9 = (char *)((uint)puVar21 | *puVar21);
code_r0x00404899:
      cVar5 = (char)pcVar9;
      *pbVar44 = *pbVar44 + cVar5;
      uVar19 = (undefined3)((uint)pcVar9 >> 8);
      bVar4 = cVar5 + (byte)*puVar34;
      pcVar9 = (char *)CONCAT31(uVar19,bVar4);
      bVar7 = (byte)((uint)puVar28 >> 8);
      uVar26 = (undefined2)((uint)puVar28 >> 0x10);
      cVar6 = (char)puVar22;
      if (SCARRY1(cVar5,(byte)*puVar34) == (char)bVar4 < '\0') {
        *(byte *)puVar34 = (byte)*puVar34 - cVar6;
        *pcVar9 = *pcVar9 + bVar4;
        puVar28 = (uint *)CONCAT22(uVar26,CONCAT11(bVar7 | (byte)*puVar22,(char)puVar28));
        puVar22 = (uint *)((int)puVar22 + 1);
        pcVar9 = pcVar9 + *puVar22;
        uStack_44 = in_ES;
        if ((POPCOUNT((uint)pcVar9 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar9 = *pcVar9 + bVar4;
      bVar37 = bVar4 + 2;
      pcVar9 = (char *)CONCAT31(uVar19,bVar37);
      if (bVar4 < 0xfe) {
        *pbVar44 = *pbVar44 + bVar37;
        puVar21 = puVar34;
        uStack_44 = in_ES;
        goto code_r0x004048f5;
      }
      *pcVar9 = *pcVar9 + bVar37;
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                 CONCAT11((byte)((uint)puVar22 >> 8) |
                                          *(byte *)((int)puVar34 + -0x5b),cVar6));
      cVar5 = *pcVar9;
      *pcVar9 = *pcVar9 + bVar37;
      puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,in_ES);
      uVar25 = in_ES;
      if (SCARRY1(cVar5,bVar37) == *pcVar9 < '\0') goto code_r0x00404927;
      *pcVar9 = *pcVar9 + bVar37;
      bVar4 = bVar4 + 4;
      pbVar10 = (byte *)CONCAT31(uVar19,bVar4);
      if (0xfd < bVar37) break;
      *pbVar10 = *pbVar10 + bVar4;
      puVar28 = (uint *)CONCAT22(uVar26,CONCAT11(bVar7 | (byte)*puVar22,(char)puVar28));
      *(byte *)puVar34 = (byte)*puVar34 + cVar6;
      *pbVar44 = *pbVar44 ^ bVar4;
    }
    *pbVar10 = *pbVar10 + bVar4;
    puStack_48 = (uint *)((uint)puStack_48 & 0xffff0000);
  }
  else {
    pbVar10[0x6fdbe8fe] = pbVar10[0x6fdbe8fe] + (char)pbVar12;
code_r0x00404803:
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    uVar20 = (undefined3)((uint)puVar21 >> 8);
    bVar7 = (byte)puVar21 | (byte)*puVar34;
    puVar28 = (uint *)CONCAT31(uVar20,bVar7);
    uVar26 = (undefined2)((uint)puVar34 >> 0x10);
    cVar6 = (char)puVar34;
    cVar38 = (char)((uint)puVar34 >> 8) + *(byte *)((int)puVar34 + 0x6f);
    puVar34 = (uint *)CONCAT22(uVar26,CONCAT11(cVar38,cVar6));
    bVar4 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar4;
    bVar46 = 0xf9 < bVar4;
    uVar19 = (undefined3)((uint)pbVar12 >> 8);
    cVar5 = bVar4 + 6;
    pbVar10 = (byte *)CONCAT31(uVar19,cVar5);
    in_SS = uStack_44;
    if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404880;
    *pbVar10 = *pbVar10 + cVar5;
    piVar17 = (int *)CONCAT31(uVar19,bVar4 + 0x2e);
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar7 = bVar7 | *(byte *)((int)puVar22 + (int)piVar17);
    puVar28 = (uint *)CONCAT31(uVar20,bVar7);
    in_SS = puStack_40._0_2_;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      puVar21 = (uint *)((int)piVar17 + *piVar17);
      *(byte *)puVar22 = (byte)*puVar22 + bVar7;
      pbVar44 = pbVar44 + puVar22[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar17 = (char)*piVar17 + bVar4 + 0x2e;
    cVar5 = bVar4 + 0x34;
    pcVar9 = (char *)CONCAT31(uVar19,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      pcVar9[0x28] = pcVar9[0x28] + cVar31;
      goto code_r0x00404899;
    }
    *pcVar9 = *pcVar9 + cVar5;
    piVar17 = (int *)CONCAT31(uVar19,bVar4 + 0x5c);
    *piVar17 = *piVar17 + (int)piVar17;
    cVar31 = (bVar7 | bRam07022c07) - (char)*piVar17;
    puVar28 = (uint *)CONCAT31(uVar20,cVar31);
    pcVar9 = (char *)CONCAT31(uVar19,bVar4 + 0x5a);
    bVar7 = (byte)((uint)puVar21 >> 8);
    *(byte *)puVar22 = (byte)*puVar22 | bVar7;
    *(uint *)((int)puVar22 + (int)pcVar9) = *(uint *)((int)puVar22 + (int)pcVar9) | 0x73060000;
    *puVar22 = *puVar22 | 0x73060000;
    cVar38 = cVar38 + *(byte *)((int)puVar34 + 0x72);
    puVar34 = (uint *)CONCAT22(uVar26,CONCAT11(cVar38,cVar6));
    *pcVar9 = *pcVar9 + bVar4 + 0x5a;
    cVar5 = bVar4 + 0x60;
    pcVar9 = (char *)CONCAT31(uVar19,cVar5);
    if ((POPCOUNT(cVar5) & 1U) == 0) {
      *pcVar9 = *pcVar9 + cVar5;
      piVar17 = (int *)CONCAT31(uVar19,bVar4 + 0x88);
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,in_DS);
      puVar28 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                 CONCAT11((bVar7 | (byte)*puVar22) + (char)*piVar17,cVar31));
      *(char *)piVar17 = (char)*piVar17;
      cVar6 = cVar6 - *pbVar44;
      cVar38 = cVar38 + *(char *)(CONCAT31((int3)((uint)puVar34 >> 8),cVar6) + 0x73);
      *(byte *)piVar17 = (char)*piVar17 + bVar4 + 0x88;
      bVar4 = bVar4 + 0xb2 & (byte)*puVar22;
      puVar45 = (uint *)((int)puVar45 + iRam73060073);
      *(char *)CONCAT31(uVar19,bVar4) = *(char *)CONCAT31(uVar19,bVar4) + bVar4;
      pcVar9 = (char *)CONCAT31(uVar19,bVar4 + 0x2a);
      puVar34 = (uint *)CONCAT22(uVar26,CONCAT11(cVar38 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar38,
                                                  cVar6)) + 0x74),cVar6));
      *pcVar9 = *pcVar9 + bVar4 + 0x2a;
      piVar17 = (int *)CONCAT31(uVar19,bVar4 + 0x54);
      in_SS = puStack_48._0_2_;
      goto code_r0x0040486e;
    }
    pbVar10 = (byte *)*(undefined6 *)pcVar9;
    *pbVar44 = *pbVar44 + (char)*(undefined6 *)pcVar9;
  }
  uVar19 = (undefined3)((uint)pbVar10 >> 8);
  bVar4 = (byte)pbVar10 | *pbVar44;
  pcVar9 = (char *)CONCAT31(uVar19,bVar4);
  *pcVar9 = *pcVar9 + bVar4;
  *puVar34 = (uint)(*puVar34 + (int)puVar28);
  puVar34 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),
                             CONCAT11((char)((uint)puVar34 >> 8) + *(byte *)((int)puVar34 + 0x75),
                                      (char)puVar34));
  *pcVar9 = *pcVar9 + bVar4;
  pcVar9 = (char *)CONCAT31(uVar19,bVar4 + 0x6f);
  *pcVar9 = *pcVar9 + bVar4 + 0x6f;
  pcVar9 = (char *)((int)((uint)pcVar9 & 0x7e26062d) - *(int *)((uint)pcVar9 & 0x7e26062d));
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar28;
  uRam00c16f07 = SUB41(pcVar9,0);
code_r0x004048de:
  cVar5 = (char)pcVar9;
  *pbVar44 = *pbVar44 + cVar5;
  *pcVar9 = *pcVar9 + cVar5;
  *(byte **)(pcVar9 + (int)puVar28) = (byte *)(*(int *)(pcVar9 + (int)puVar28) + (int)puVar28);
  puStack_48 = (uint *)CONCAT22(puStack_48._2_2_,uStack_44);
  bVar4 = *(byte *)((int)puVar34 + 0x75);
  *pcVar9 = *pcVar9 + cVar5;
  pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5 + 'o');
  pbVar44 = pbVar44 + 1;
  *pcVar9 = *pcVar9 + cVar5 + 'o';
  pbStack_4c = (byte *)CONCAT22(pbStack_4c._2_2_,uStack_44);
  puVar21 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),
                             CONCAT11((char)((uint)puVar34 >> 8) + bVar4,(char)puVar34));
  puVar41 = puVar34;
  in_SS = uStack_44;
code_r0x004048f5:
  puVar34 = puVar21;
  pcVar9 = (char *)((int)((uint)pcVar9 & 0x7e26062d) - *(int *)((uint)pcVar9 & 0x7e26062d));
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar28;
  do {
    uRam00c36f08 = SUB41(pcVar9,0);
    while( true ) {
      bVar4 = *pbVar44;
      cVar5 = (char)pcVar9;
      *pbVar44 = *pbVar44 + cVar5;
      iStack_50 = CONCAT22(iStack_50._2_2_,uStack_44);
      if (SCARRY1(bVar4,cVar5) == (char)*pbVar44 < '\0') {
        pcVar9[(int)puVar41] = pcVar9[(int)puVar41] + cVar5;
        goto code_r0x00404982;
      }
      *pcVar9 = *pcVar9 + cVar5;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5 + '*');
      puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,in_DS);
      bVar4 = (byte)((uint)puVar28 >> 8);
      cVar5 = (char)puVar28;
      bVar7 = bVar4 + *pbVar10;
      pbVar10 = pbVar10 + (uint)CARRY1(bVar4,*pbVar10) + *(int *)pbVar10;
      *(byte *)puVar22 = (byte)*puVar22 + cVar5;
      cVar6 = (char)puVar34 - *pbVar44;
      bVar4 = *pbVar10;
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar7 + *pbVar10,cVar5));
      iVar16 = *(int *)pbVar10;
      *(byte *)puVar22 = (byte)*puVar22 + cVar5;
      pcVar9 = (char *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar7,bVar4) + iVar16) >> 8),
                                (char)(pbVar10 + (uint)CARRY1(bVar7,bVar4) + iVar16) -
                                *(byte *)((int)puVar22 + 3));
      puVar34 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),
                                 CONCAT11((char)((uint)puVar34 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)puVar34 >> 8),cVar6) +
                                                   -0x3a),cVar6));
code_r0x00404921:
      bVar4 = (byte)pcVar9;
      *pcVar9 = *pcVar9 + bVar4;
      pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),bVar4 + 0x6f);
      *(byte *)puVar28 = ((byte)*puVar28 - (bVar4 + 0x6f)) - (0x90 < bVar4);
      uVar25 = uStack_44;
code_r0x00404927:
      uStack_44 = uVar25;
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar28;
      pbStack_4c = (byte *)CONCAT22(pbStack_4c._2_2_,in_SS);
      *(byte *)puVar28 = (byte)*puVar28 + 1;
      cVar5 = (char)((uint)puVar28 >> 8) - pbVar44[2];
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar5,(char)puVar28));
      if ((POPCOUNT(cVar5) & 1U) == 0) break;
      pcVar9 = pcVar9 + -0x1b7e2606;
      *pcVar9 = *pcVar9 + (char)pcVar9;
      pcVar9 = (char *)CONCAT22((short)((uint)pcVar9 >> 0x10),
                                CONCAT11((byte)((uint)pcVar9 >> 8) | (byte)puVar22[0x30dbc2],
                                         (char)pcVar9));
    }
code_r0x00404931:
    *pcVar9 = *pcVar9 + (char)pcVar9;
    cVar5 = (char)pcVar9 + '\x02';
    pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5);
    pbVar10 = pbVar44;
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  do {
    bVar4 = (byte)pcVar9;
    *pcVar9 = *pcVar9 + bVar4;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    piVar17 = (int *)CONCAT31(uVar19,bVar4 + 0x6f);
    *puVar28 = (*puVar28 - (int)piVar17) - (uint)(0x90 < bVar4);
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar28;
    iVar16 = *(int *)((int)puVar45 + 0x1a);
    *piVar17 = *piVar17 + (int)piVar17;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(byte)puVar22 | *pbVar10);
    *(byte *)puVar28 = (byte)*puVar28 + 1;
    bVar4 = (bVar4 + 0x6f) - (char)*piVar17;
    pbVar44 = (byte *)CONCAT31(uVar19,bVar4);
    *pbVar44 = *pbVar44 + bVar4;
    pbVar10 = pbVar10 + *(int *)pbVar44;
    cVar5 = bVar4 + *pbVar44;
    puVar13 = (ushort *)CONCAT31(uVar19,cVar5);
    *puVar13 = *puVar13 + (ushort)CARRY1(bVar4,*pbVar44) * (((ushort)puVar13 & 3) - (*puVar13 & 3));
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    puVar45 = (uint *)((int)puVar45 + puVar34[0x1c]);
    puVar41 = (uint *)((int)puVar41 + iVar16);
code_r0x0040495b:
    cVar5 = (char)puVar13;
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    uVar19 = (undefined3)((uint)puVar13 >> 8);
    cVar6 = cVar5 + '\x02';
    pcVar9 = (char *)CONCAT31(uVar19,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      *puVar22 = (uint)(*puVar22 + (int)puVar41);
      pbVar44 = pbVar10 + 1;
      out(*pbVar10,(short)puVar22);
      puVar34 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),
                                 CONCAT11((char)((uint)puVar34 >> 8) +
                                          *(byte *)((int)puVar34 + -0x3b),(char)puVar34));
      goto code_r0x00404931;
    }
    *pcVar9 = *pcVar9 + cVar6;
    pbVar10 = (byte *)(CONCAT31(uVar19,cVar5 + '}') + (int)puVar41);
    *pbVar10 = *pbVar10 + cVar5 + '}';
    *pcStack_14 = *pcStack_14 + (char)pcStack_14;
    puVar28 = (uint *)CONCAT22((short)((uint)iStack_18 >> 0x10),
                               CONCAT11((byte)((uint)iStack_18 >> 8) | *(byte *)(iStack_18 * 3),
                                        (char)iStack_18));
    puVar45 = (uint *)(pbStack_30 + *(int *)((int)puStack_20 + 0x6f));
    pcVar9 = pcStack_14;
    puVar22 = puStack_1c;
    puVar34 = puStack_20;
    puVar41 = puStack_28;
    pbVar10 = pbStack_2c;
    while( true ) {
      cVar5 = (char)pcVar9;
      *pcVar9 = *pcVar9 + cVar5;
      uVar19 = (undefined3)((uint)pcVar9 >> 8);
      cVar6 = cVar5 + '\x02';
      pcVar9 = (char *)CONCAT31(uVar19,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) break;
      *pcVar9 = *pcVar9 + cVar6;
      pcVar9 = (char *)CONCAT31(uVar19,cVar5 + '}');
      out(*(undefined4 *)pbVar10,(short)puVar22);
      *pcVar9 = *pcVar9 + cVar5 + '}';
code_r0x00404982:
      puStack_3c = (uint *)CONCAT22(puStack_3c._2_2_,in_ES);
      *(byte *)puStack_34 = (byte)*puStack_34 + (char)in_ES;
      puVar28 = (uint *)CONCAT22((short)((uint)pbStack_38 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_38 >> 8) |
                                          pbStack_38[(int)pbStack_4c],(char)pbStack_38));
      puVar45 = (uint *)(iStack_50 + *(int *)((int)puStack_40 + 0x71));
      puVar21 = puStack_34;
      puVar22 = puStack_3c;
      puVar34 = puStack_40;
      pbVar10 = pbStack_4c;
      while( true ) {
        cVar5 = (char)puVar21;
        *(byte *)puVar21 = (byte)*puVar21 + cVar5;
        uVar19 = (undefined3)((uint)puVar21 >> 8);
        cVar6 = cVar5 + '\x02';
        puVar13 = (ushort *)CONCAT31(uVar19,cVar6);
        puVar41 = puStack_48;
        if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar13 = (char)*puVar13 + cVar6;
        bVar7 = cVar5 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar7);
        pbVar44 = (byte *)(iVar16 + (int)puStack_48);
        bVar4 = *pbVar44;
        *pbVar44 = *pbVar44 + bVar7;
        uVar36 = *puVar28;
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar28;
        pcVar9 = (char *)(((iVar16 - uVar36) - (uint)CARRY1(bVar4,bVar7)) + -0x727b0317);
        cVar5 = (char)pcVar9;
        *pcVar9 = *pcVar9 + cVar5;
        uVar19 = (undefined3)((uint)pcVar9 >> 8);
        cVar6 = cVar5 + '\x02';
        pcVar9 = (char *)CONCAT31(uVar19,cVar6);
        if ((POPCOUNT(cVar6) & 1U) != 0) break;
        *pcVar9 = *pcVar9 + cVar6;
        bVar7 = cVar5 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar7);
        pbVar44 = (byte *)(iVar16 + (int)puStack_48);
        bVar4 = *pbVar44;
        *pbVar44 = *pbVar44 + bVar7;
        puVar21 = (uint *)((iVar16 - *puVar28) - (uint)CARRY1(bVar4,bVar7));
        puVar41 = puVar22;
code_r0x004049b4:
        *(byte *)puVar41 = (byte)*puVar41 + (char)puVar28;
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                   ((char)puVar41 - (byte)*puVar45) - *pbVar10);
        bVar7 = pbVar10[0x72];
        *puVar21 = *puVar21 & (uint)puVar28;
        pbVar44 = (byte *)((int)puVar21 + 2);
        *pbVar44 = *pbVar44 + (char)((uint)puVar41 >> 8);
        bVar4 = *pbVar44;
        puVar18 = (uint *)CONCAT31((int3)((uint)puVar34 >> 8),(char)puVar34 - bVar7);
        pbVar44 = pbVar10;
        while (puVar34 = puVar18, pbVar10 = pbVar44, (POPCOUNT(bVar4) & 1U) == 0) {
          cVar5 = (char)puVar21;
          *(byte *)puVar21 = (byte)*puVar21 + cVar5;
          uVar19 = (undefined3)((uint)puVar21 >> 8);
          cVar6 = cVar5 + '\x03';
          pbVar12 = (byte *)CONCAT31(uVar19,cVar6);
          pbVar10 = pbVar44 + 4;
          out(*(undefined4 *)pbVar44,(short)puVar22);
          in_SS = pbStack_30._0_2_;
          *pbVar12 = *pbVar12 + cVar6;
          cVar31 = (char)puVar28;
          puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                     CONCAT11((byte)((uint)puVar28 >> 8) | *pbVar12,cVar31));
          *(int *)pbVar12 = *(int *)pbVar12 - (int)pbVar12;
          *(byte *)puVar22 = (byte)*puVar22 + cVar31;
          cVar31 = (char)puVar18 - pbVar44[6];
          puVar34 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),cVar31);
          if ((POPCOUNT(cVar31) & 1U) != 0) {
            pbVar44 = (byte *)((int)puVar45 + (int)puStack_48 * 2);
            *pbVar44 = *pbVar44 + cVar6;
            ppbVar43 = (byte **)puStack_48;
            goto code_r0x00404a51;
          }
          *pbVar12 = *pbVar12 + cVar6;
          puVar21 = (uint *)CONCAT31(uVar19,cVar5 + 'r');
          *(byte *)puVar21 = (byte)*puVar21;
          pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,uStack_44);
          do {
            puVar45 = (uint *)((int)puVar45 + puVar34[0x1c]);
            bVar4 = (byte)puVar21;
            *(byte *)puVar21 = (byte)*puVar21 + bVar4;
            uVar19 = (undefined3)((uint)puVar21 >> 8);
            bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
            puVar21 = (uint *)CONCAT31(uVar19,bVar4);
            cVar5 = (char)puVar28;
            *(byte *)puVar22 = (byte)*puVar22 + cVar5;
            bVar7 = (char)((uint)puVar28 >> 8) - pbVar10[2];
            puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar7,cVar5));
            puVar41 = puVar22;
            if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar21 = (byte)*puVar21 + bVar4;
            bVar37 = bVar4 + 2;
            puVar21 = (uint *)CONCAT31(uVar19,bVar37);
            ppbVar42 = (byte **)puStack_48;
            if ((POPCOUNT(bVar37) & 1U) == 0) goto code_r0x004049f5;
            pbVar10 = pbStack_30;
          } while (0xfd < bVar4);
          *(byte *)puVar21 = (byte)*puVar21 | bVar37;
          puVar18 = puVar34;
          pbVar44 = pbStack_30;
          bVar4 = (byte)*puVar21;
        }
      }
    }
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar28;
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar4;
    uVar19 = (undefined3)((uint)puVar21 >> 8);
    bVar37 = bVar4 + 0x6f;
    pbVar12 = (byte *)CONCAT31(uVar19,bVar37);
    *puVar28 = (*puVar28 - (int)pbVar12) - (uint)(0x90 < bVar4);
    *(byte *)puVar22 = (byte)*puVar22 + cVar5;
    pbVar44 = (byte *)((int)ppbVar42 + *(int *)((int)puVar45 + 0x1a));
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    uVar20 = (undefined3)((uint)puVar22 >> 8);
    bVar4 = (byte)puVar22 | *pbVar10;
    puVar22 = (uint *)CONCAT31(uVar20,bVar4);
    *(byte *)puVar28 = (byte)*puVar28 + 1;
    cVar6 = bVar37 - *pbVar12;
    pbVar10 = pbVar10 + (-(uint)(bVar37 < *pbVar12) - *(int *)CONCAT31(uVar19,cVar6));
    uVar14 = CONCAT31(uVar19,cVar6 + *(char *)CONCAT31(uVar19,cVar6));
    bVar46 = CARRY1(bRam14110000,bVar7);
    bRam14110000 = bRam14110000 + bVar7;
    puVar21 = (uint *)((int)puVar34 + (int)pbVar10 * 2);
    uVar36 = *puVar21;
    uVar1 = uVar14 + *puVar21;
    puVar15 = (undefined4 *)(uVar1 + bVar46);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar15 = uVar2;
    puStack_34 = (uint *)CONCAT22(puStack_34._2_2_,uStack_44);
    uVar36 = (uint)(CARRY4(uVar14,uVar36) || CARRY4(uVar1,(uint)bVar46));
    puVar21 = (uint *)((int)puVar15 + uRam7d020511 + uVar36);
    ppbVar40 = &pbStack_38;
    ppbVar43 = &pbStack_38;
    ppbVar42 = &pbStack_38;
    pbStack_38 = pbVar44;
    cVar6 = '\x03';
    do {
      pbVar44 = pbVar44 + -4;
      ppbVar40 = ppbVar40 + -1;
      *ppbVar40 = (byte *)*(undefined4 *)pbVar44;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    pbStack_30 = (byte *)&pbStack_38;
    pbRam00c82802 =
         (byte *)((int)puVar21 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar15,uRam7d020511) ||
                      CARRY4((int)puVar15 + uRam7d020511,uVar36))));
    bVar37 = *pbVar10;
    cVar6 = (char)puVar21;
    *pbVar10 = *pbVar10 + cVar6;
  } while (SCARRY1(bVar37,cVar6) == (char)*pbVar10 < '\0');
  *(byte *)puVar21 = (byte)*puVar21 + cVar6;
  iVar16 = CONCAT31((int3)((uint)puVar21 >> 8),cVar6 + '\x11') + 0xc57b;
  bVar7 = (byte)iVar16;
  *puVar22 = *puVar22 ^ (uint)puVar34;
  puVar22 = (uint *)CONCAT31(uVar20,bVar4 + (byte)*puVar28);
  iVar16 = (CONCAT31((int3)((uint)iVar16 >> 8),bVar7 + 0x6f) - (uint)(0x90 < bVar7)) + -0x18093a86;
  cVar6 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar5 = cVar6 + '\x02';
  pbVar44 = (byte *)CONCAT31(uVar19,cVar5);
  if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar44 = *pbVar44 + cVar5;
  pbVar12 = (byte *)CONCAT31(uVar19,cVar6 + 'q');
  ppbVar43 = &pbStack_38;
code_r0x00404a51:
  pbVar44 = pbVar12 + 1;
  cVar5 = (char)pbVar44;
  *pbVar44 = *pbVar44 + cVar5;
  puVar34 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                             CONCAT11((char)((uint)puVar18 >> 8) - cVar5,cVar31));
  *pbVar44 = *pbVar44 + cVar5;
  puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 - (byte)*puVar28);
  pbVar12 = pbVar12 + 0x757b03;
  pbVar44 = (byte *)((int)puVar45 + (int)ppbVar43 * 2);
  cVar5 = (char)pbVar12;
  *pbVar44 = *pbVar44 + cVar5;
  *pbVar12 = *pbVar12 + cVar5;
  *pbVar10 = *pbVar10 - (char)((uint)pbVar12 >> 8);
  *pbVar12 = *pbVar12 + cVar5;
  puVar45 = (uint *)((int)puVar45 - *(int *)((int)ppbVar43 + -0x3a));
  *pbVar12 = *pbVar12 + cVar5;
  pbVar44 = (byte *)(CONCAT31((int3)((uint)pbVar12 >> 8),cVar5 + '\x11') + 0x757b02);
  pbVar12 = (byte *)((int)puVar45 + (int)ppbVar43 * 2);
  bVar7 = (byte)pbVar44;
  *pbVar12 = *pbVar12 + bVar7;
  bVar4 = *pbVar44;
  *pbVar44 = *pbVar44 + bVar7;
  puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,uStack_44);
  pbRam011006fe = pbVar44 + (int)(pbRam011006fe + CARRY1(bVar4,bVar7));
  bVar4 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar7;
  if (!CARRY1(bVar4,bVar7)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar44;
    *pbVar44 = *pbVar44 + bVar4;
    bVar37 = (byte)puVar28;
    puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                               CONCAT11((byte)((uint)puVar28 >> 8) | *pbVar44,bVar37));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar19 = (undefined3)((uint)pbVar44 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar5 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar9 = (char *)CONCAT31(uVar19,cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    puVar45 = (uint *)((int)puVar45 - *(int *)((int)ppbVar43 + -0x39));
    *pcVar9 = *pcVar9 + cVar5;
    iVar16 = CONCAT31(uVar19,cVar5 + '\x11') + 0xc57b;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar16;
    bVar7 = bVar4 + 0x6f;
    pbVar44 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar7);
    *puVar28 = (*puVar28 - (int)pbVar44) - (uint)(0x90 < bVar4);
    uVar36 = *puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + bVar37;
    pbRam011106fe = pbVar44 + (int)(pbRam011106fe + CARRY1((byte)uVar36,bVar37));
    bVar4 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    if (!CARRY1(bVar4,bVar7)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar44 = pbVar44 + *(int *)pbVar44;
    bVar4 = (byte)puVar28;
    bVar7 = (byte)((uint)puVar28 >> 8) | *pbVar44;
    puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar7,bVar4));
    *pbVar44 = *pbVar44 - (char)pbVar44;
    *(byte *)puVar34 = (byte)*puVar34 + bVar7;
    out(*(undefined4 *)pbVar10,(short)puVar22);
    *puVar28 = *puVar28 & (uint)pbVar44;
    uVar36 = *puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + bVar4;
    pbVar44 = pbVar44 + (uint)CARRY1((byte)uVar36,bVar4) + *(int *)(pbVar10 + 4);
    *pbVar44 = *pbVar44 + (char)pbVar44;
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar22;
    pbVar10 = pbVar10 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar10,(short)puVar22);
      pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),(byte)pbVar44 & (byte)*puVar28);
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar28;
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                 CONCAT11((byte)((uint)puVar22 >> 8) | (byte)puVar34[5],
                                          (char)puVar22));
      *(byte **)pbVar44 = pbVar44 + *(int *)pbVar44;
      pbVar10 = pbVar10 + 4;
code_r0x00404ad4:
      puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,uStack_44);
      pbVar44 = (byte *)((uint)pbVar44 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar44;
code_r0x00404add:
      bVar4 = (byte)pbVar44;
      uVar19 = (undefined3)((uint)pbVar44 >> 8);
      cVar5 = bVar4 + 8;
      pbVar44 = (byte *)CONCAT31(uVar19,cVar5);
      if (SCARRY1(bVar4,'\b') == cVar5 < '\0') break;
      *pbVar44 = *pbVar44 + cVar5;
      cVar5 = bVar4 + 10;
      piVar17 = (int *)CONCAT31(uVar19,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      puVar21 = (uint *)CONCAT31(uVar19,bVar4 + 0x7c);
      *puVar21 = *puVar21 & (uint)puVar28;
      *(char *)((int)puVar21 + 0x11) = *(char *)((int)puVar21 + 0x11) + (char)((uint)puVar22 >> 8);
      cVar5 = (char)((int)puVar21 + 0xc67b);
      uVar19 = (undefined3)((uint)((int)puVar21 + 0xc67b) >> 8);
      bVar4 = cVar5 + 8;
      pbVar44 = (byte *)CONCAT31(uVar19,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar44 = *pbVar44 + bVar4;
        cRam02060000 = cVar5 + 'w';
        puVar21 = (uint *)CONCAT31(uVar19,cRam02060000);
        *(byte *)puVar21 = (byte)*puVar21 + cRam02060000;
        cVar5 = (char)puVar28;
        puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                   CONCAT11((byte)((uint)puVar28 >> 8) | (byte)*puVar21,cVar5));
        *puVar21 = *puVar21 - (int)puVar21;
        *(byte *)puVar22 = (byte)*puVar22 + cVar5;
        pbVar44 = pbVar10 + 4;
        out(*(undefined4 *)pbVar10,(short)puVar22);
        pbVar10 = pbVar44;
        if ((POPCOUNT((byte)*puVar22) & 1U) == 0) goto code_r0x00404b0f;
        pcVar9 = (char *)((uint)puVar21 | *puVar21);
        goto code_r0x00404b89;
      }
      bVar7 = *pbVar44;
      *pbVar44 = *pbVar44 + bVar4;
      *(byte **)pbVar10 = pbVar44 + (uint)CARRY1(bVar7,bVar4) + *(int *)pbVar10;
    }
    *pbVar10 = *pbVar10 + 1;
    *puVar28 = (uint)(pbVar44 + (uint)(0xf7 < bVar4) + *puVar28);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'r');
    piVar17 = (int *)((uint)puVar22 | *puVar22);
    puVar22 = puStack_54;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar16 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar16;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),bVar4 + 0x6f);
    *puVar28 = (*puVar28 - iVar16) - (uint)(0x90 < bVar4);
    cVar5 = (char)puVar28;
    *(byte *)puVar22 = (byte)*puVar22 + cVar5;
    bVar7 = (byte)((uint)puVar34 >> 8);
    bVar32 = (byte)((uint)puVar22 >> 8) | bVar7;
    pcVar11 = (char *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(bVar32,(byte)puVar22));
    piVar17 = (int *)(iVar16 + 0x73060001);
    *(byte *)puVar28 = (byte)*puVar28 & (byte)piVar17;
    *pcVar11 = *pcVar11 + cVar5;
    bVar37 = (byte)((uint)puVar28 >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar37;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar16 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *(byte *)puVar34 = (byte)*puVar34 + bVar37;
    pcVar9 = (char *)((uint)piVar17 | *puVar45);
    *pcVar11 = *pcVar11 - bVar37;
    bVar4 = (byte)pcVar9;
    *pcVar9 = *pcVar9 + bVar4;
    ppbVar43 = (byte **)(((int)ppbVar43 - iVar16) - *(int *)(pcVar9 + ((int)ppbVar43 - iVar16)));
    uVar26 = (undefined2)((uint)puVar34 >> 0x10);
    bVar24 = (byte)puVar34;
    cVar6 = bVar7 + *(byte *)((int)puVar34 + 0x76);
    pbVar12 = (byte *)CONCAT22(uVar26,CONCAT11(cVar6,bVar24));
    *pcVar9 = *pcVar9 + bVar4;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    uVar14 = CONCAT31(uVar19,bVar4 + 7);
    puVar34 = (uint *)((int)ppbVar43 + -0x1faeef1);
    uVar36 = *puVar34;
    uVar1 = *puVar34 + uVar14;
    *puVar34 = uVar1 + (0xf8 < bVar4);
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,uStack_44);
    puVar34 = puStack_54;
    bVar7 = bVar4 + 7 + (byte)*puVar28 +
            (CARRY4(uVar36,uVar14) || CARRY4(uVar1,(uint)(0xf8 < bVar4)));
    puVar21 = (uint *)CONCAT31(uVar19,bVar7);
    bVar4 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    if (CARRY1(bVar4,bVar7)) break;
    *(byte *)puVar21 = (byte)*puVar21 + bVar7;
    puVar34 = (uint *)CONCAT22(uVar26,CONCAT11(cVar6 + pbVar12[0x76],bVar24));
    uStack_58 = uStack_44;
  }
  *(byte *)puVar21 = (byte)*puVar21 + bVar7;
  uVar20 = (undefined3)((uint)pcVar11 >> 8);
  bVar27 = (byte)puVar22 | *pbVar12;
  puVar22 = (uint *)CONCAT31(uVar20,bVar27);
  pcRam2b060000 = (char *)CONCAT31(uVar19,bVar7 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar7 + 0x39)) - (0xd7 < (byte)(bVar7 + 0x11));
  bVar4 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar37;
  pbVar44 = pbVar10 + 4;
  out(*(undefined4 *)pbVar10,(short)puVar22);
  bVar4 = (bVar7 + 0x37) - CARRY1(bVar4,bVar37);
  piVar17 = (int *)CONCAT31(uVar19,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    iVar16 = CONCAT31(uVar19,bVar4 + 0x11) + 0xc77b;
    pcVar9 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + 'r');
    pcVar9[0x28] = pcVar9[0x28] + bVar32;
code_r0x00404b89:
    cVar5 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar5;
    *pcVar9 = *pcVar9 + cVar5;
    *pcVar9 = *pcVar9 + cVar5;
    puVar13 = (ushort *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5 + 'r');
    uVar8 = (ushort)puVar13 | *puVar13;
    pcVar9 = (char *)CONCAT22((short)((uint)pcVar9 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*(undefined4 *)pbVar44,(short)puVar22);
    *pcVar9 = *pcVar9 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar4;
  pbVar29 = (byte *)((int)ppbVar43 - *(int *)((int)puVar45 + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar9 = (char *)CONCAT31(uVar20,bVar27 | *pbVar12);
  puVar22 = (uint *)(pbVar10 + 8);
  out(*(undefined4 *)pbVar44,(short)pcVar9);
  uVar36 = *puVar28;
  *pcVar9 = *pcVar9 + cVar5;
  uVar36 = CONCAT31(uVar19,bVar4 & (byte)uVar36) | 0x767b02;
  *(byte *)((int)puVar28 + (int)pcVar9) = *(byte *)((int)puVar28 + (int)pcVar9) + (char)uVar36;
  iVar16 = uVar36 + 0xc67b;
  cVar31 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar38 = cVar31 + 'r';
  pcVar9 = (char *)CONCAT31(uVar19,cVar38);
  pcVar9[0x28] = pcVar9[0x28] + bVar32;
  *pcVar9 = *pcVar9 + cVar38;
  uVar25 = (undefined2)((uint)puVar28 >> 0x10);
  bVar37 = bVar37 | *(byte *)((int)puStack_54 + -0x5e);
  puVar41 = (uint *)CONCAT22(uVar25,CONCAT11(bVar37,cVar5));
  *pcVar9 = *pcVar9 + cVar38;
  puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,uStack_58);
  pbVar44 = (byte *)CONCAT22(uVar26,CONCAT11(cVar6 + pbVar12[0x76],bVar24));
  *pcVar9 = *pcVar9 + cVar38;
  puVar45 = (uint *)CONCAT31(uVar19,cVar31 + -0x1c);
  pcVar9 = (char *)((uint)puVar45 | *puVar45);
  bVar46 = (POPCOUNT((uint)pcVar9 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar9;
  puVar45 = puStack_54;
  pbVar12 = pbVar44;
  pbVar35 = pbVar29;
  puVar21 = puVar34;
  uVar26 = uStack_58;
  if (!bVar46) goto code_r0x00404ca8;
  *pcVar9 = *pcVar9 + cRam02060000;
  puVar45 = (uint *)CONCAT31((int3)((uint)pcVar9 >> 8),cRam02060000 + 'r');
  *puVar45 = *puVar45 & (uint)puVar41;
  *(char *)((int)puVar45 + 0x11) = *(char *)((int)puVar45 + 0x11) + (char)((ushort)uStack_58 >> 8);
  iVar16 = (int)puVar45 + 0xc77b;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cRam02060000 = (char)iVar16 + '\t';
  pbVar12 = (byte *)CONCAT31(uVar19,cRam02060000);
  out(*puVar22,uStack_58);
  *pbVar12 = *pbVar12 + cRam02060000;
  puVar21 = (uint *)CONCAT22(uVar25,CONCAT11(bVar37 | *pbVar12,cVar5));
  *(int *)pbVar12 = *(int *)pbVar12 - (int)pbVar12;
  *(byte *)puStack_54 = (byte)*puStack_54 + cVar5;
  out(*(undefined4 *)(pbVar10 + 0xc),uStack_58);
  puVar28 = puStack_54;
  puVar22 = (uint *)(pbVar10 + 0x10);
  uVar26 = uStack_58;
  if ((POPCOUNT((byte)*puStack_54) & 1U) != 0) goto code_r0x00404cca;
  *pbVar12 = *pbVar12 + cRam02060000;
  puVar13 = (ushort *)CONCAT31(uVar19,(char)iVar16 + '{');
  uVar8 = (ushort)puVar13 | *puVar13;
  pcVar9 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),uVar8);
  bVar4 = (byte)uVar8;
  out(*(uint *)(pbVar10 + 0x10),uStack_58);
  pbVar12 = (byte *)((int)puVar21 + 1);
  bRam11060000 = bVar4;
  *pcVar9 = *pcVar9 + bVar4;
  puVar41 = (uint *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                             CONCAT11((byte)((uint)pbVar12 >> 8) | bRam110cde91,(char)pbVar12));
  pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),bVar4 - 7);
  *puVar34 = (uint)(pcVar9 + (uint)(bVar4 < 7) + *puVar34);
  puVar22 = (uint *)(pbVar10 + 0x18);
  out(*(undefined4 *)(pbVar10 + 0x14),uStack_58);
  puVar45 = (uint *)((int)puStack_54 + 1);
  *pcVar9 = *pcVar9 + (bVar4 - 7);
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),bVar24 | (byte)(uVar8 >> 8));
  do {
    bVar4 = (char)pcVar9 - *pcVar9;
    uVar36 = *puVar41;
    *(byte *)puVar41 = (byte)*puVar41 + bVar4;
    cVar5 = bVar4 - CARRY1((byte)uVar36,bVar4);
    *(byte *)puVar45 = *(byte *)puVar45 + cVar5;
    cVar6 = (char)((uint)puVar41 >> 8);
    *(byte *)(puVar34 + 0x673b40) = (byte)puVar34[0x673b40] + cVar6;
    puVar18 = (uint *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5);
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    *(byte *)puVar45 = *(byte *)puVar45 + cVar5;
    *(byte **)(pbVar12 + 0x58) = (byte *)(*(int *)(pbVar12 + 0x58) + (int)puVar22);
    puVar21 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar41 >> 0x10),
                                               CONCAT11(cVar6 + (char)((uint)pcVar9 >> 8),
                                                        (char)puVar41)) >> 8),
                               (char)puVar41 + *(char *)((int)puVar18 * 2));
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    *(byte *)puVar22 = (byte)*puVar22 + (char)pbVar12;
    puVar28 = puVar45;
    pbVar44 = pbVar12;
_ctor:
    bVar7 = (byte)((uint)puVar21 >> 8);
    uVar36 = *puVar18;
    bVar4 = (byte)puVar21;
    puVar18 = (uint *)((int)puVar18 + (uint)CARRY1(bVar7,(byte)*puVar18) + *puVar18);
    *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
    cVar5 = bVar4 - *(byte *)((int)puVar28 + 3);
    puVar41 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar21 >> 0x10),
                                               CONCAT11(bVar7 + (byte)uVar36,bVar4)) >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      if (*(byte *)((int)puVar28 + 3) <= bVar4) {
        *puVar18 = (uint)(*puVar18 + (int)puVar18);
        puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(byte)puVar28 | *pbVar44);
        puVar18 = puVar18 + 0x230e;
        puVar21 = puVar41;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
    cVar5 = (char)puVar18 + '\x02';
    pcVar9 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar5);
    bVar46 = (POPCOUNT(cVar5) & 1U) == 0;
    puVar45 = puVar28;
    pbVar12 = pbVar44;
    pbVar35 = pbVar29;
    puVar21 = puVar34;
    uVar26 = puStack_48._0_2_;
code_r0x00404ca8:
    puStack_48._0_2_ = uVar26;
    pcVar11 = pcStack_24;
    puVar28 = (uint *)pbStack_2c;
    pbVar44 = pbStack_30;
    pbVar29 = pbStack_38;
    puVar34 = puStack_40;
    if (bVar46) break;
    *(byte *)puVar45 = *(byte *)puVar45 + (char)puVar41;
    pbVar29 = pbVar35;
    puVar34 = puVar21;
  } while( true );
  *pcVar9 = *pcVar9 + (char)pcVar9;
  bVar4 = (byte)pcStack_24;
  *pcStack_24 = *pcStack_24 + bVar4;
  puVar21 = (uint *)CONCAT22((short)((uint)puStack_28 >> 0x10),
                             CONCAT11((byte)((uint)puStack_28 >> 8) | *pbStack_2c,(char)puStack_28))
  ;
  *pbStack_30 = *pbStack_30 + (char)pbStack_30;
  pbVar10 = (byte *)((int)pcVar11 * 2);
  *pbVar10 = *pbVar10 ^ bVar4;
  uVar3 = *(undefined6 *)pcVar11;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar12 = (byte *)uVar3;
  bVar7 = (byte)uVar3;
  *pbVar12 = *pbVar12 + bVar7;
  bVar4 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar7;
  puVar22 = (uint *)((int)puVar21 + 0x11673);
  uVar36 = *puVar22;
  uVar1 = *puVar22;
  *puVar22 = (uint)((byte *)((int)puVar28 + uVar1) + CARRY1(bVar4,bVar7));
  puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,puStack_48._0_2_);
  pbVar12 = pbVar12 + (uint)(CARRY4(uVar36,(uint)puVar28) ||
                            CARRY4((int)puVar28 + uVar1,(uint)CARRY1(bVar4,bVar7))) +
                      *(int *)((int)puVar21 + (int)puVar28);
  puVar22 = puStack_3c;
  uVar26 = puStack_48._0_2_;
code_r0x00404cca:
  puStack_48._0_2_ = uVar26;
  cVar5 = (char)pbVar12 + '\x04';
  puVar18 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar5);
  if (SCARRY1((char)pbVar12,'\x04') == cVar5 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  puVar45 = puVar22 + 1;
  out(*puVar22,(short)puVar28);
  uVar36 = *puVar21;
  bVar4 = *(byte *)puVar28;
  bVar7 = (byte)puVar21;
  *(byte *)puVar28 = *(byte *)puVar28 + bVar7;
  iVar16 = (CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + '\x03') & uVar36) + iRam00008c38;
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar28;
  pcVar9 = (char *)(iVar16 + (uint)CARRY1(bVar4,bVar7) + 0x1246f);
  bVar4 = *(byte *)puVar28;
  uVar19 = (undefined3)((uint)puVar21 >> 8);
  puVar41 = (uint *)CONCAT31(uVar19,bVar7 | bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar9 >> 8);
  puVar18 = (uint *)(CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + *pcVar9) + 0x1fbeef2);
  uVar36 = *puVar18;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  if (CARRY4(uVar36,(uint)puVar18)) {
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    pcVar9 = (char *)CONCAT31(uVar19,bVar7 | bVar4 | bRam00282809);
    cVar5 = (char)((uint)puVar21 >> 8);
    *pbVar44 = *pbVar44 + cVar5;
    *pcVar9 = *pcVar9 - cVar5;
    *(byte *)puVar18 = *(byte *)puVar18 + (char)puVar18;
    iVar16 = (int)pcVar9 - *(int *)pbVar44;
    puVar22 = puVar22 + 2;
    out(*puVar45,(short)puVar28);
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    puVar41 = (uint *)CONCAT22((short)((uint)iVar16 >> 0x10),
                               CONCAT11((byte)((uint)iVar16 >> 8) | bRambf73070b,(char)iVar16));
code_r0x00404d15:
    uVar36 = *puVar18;
    bVar4 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar4;
    puVar45 = puVar22 + 1;
    out(*puVar22,(short)puVar28);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar7 = bVar4 + in_AF * '\x06';
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),
                               bVar7 + (0x90 < (bVar7 & 0xf0) |
                                       CARRY1((byte)uVar36,bVar4) | in_AF * (0xf9 < bVar7)) * '`');
  }
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar7 = (byte)puVar18 | (byte)*puVar34;
  puVar22 = puVar45 + 1;
  uVar25 = SUB42(puVar28,0);
  out(*puVar45,uVar25);
  *(byte *)puVar41 = (byte)*puVar41 - bVar7;
  bVar4 = *(byte *)puVar28;
  bVar37 = (byte)puVar41;
  *(byte *)puVar28 = *(byte *)puVar28 + bVar37;
  iVar16 = CONCAT31((int3)((uint)puVar18 >> 8),bVar7) + *puVar22 + (uint)CARRY1(bVar4,bVar37);
  pbVar10 = pbVar29 + -*puVar28;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar5 = (char)iVar16 + (byte)*puVar22 + (pbVar29 < (byte *)*puVar28);
  puVar21 = (uint *)CONCAT31(uVar19,cVar5);
  bVar4 = (byte)((uint)puVar41 >> 8);
  *(byte *)puVar41 = (byte)*puVar41 - bVar4;
  *puVar21 = (uint)(*puVar21 + (int)puVar21);
  bVar37 = bVar37 | *(byte *)((int)puVar28 + (int)puVar21);
  uVar26 = (undefined2)((uint)puVar41 >> 0x10);
  if ((POPCOUNT(bVar37) & 1U) == 0) {
    *(byte *)puVar21 = (byte)*puVar21 + cVar5;
    pcVar9 = (char *)CONCAT31(uVar19,cVar5 + '\x12');
    *pcVar9 = *pcVar9 + bVar4;
    puVar21 = (uint *)CONCAT31(uVar19,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar41 >> 8),bVar37));
    bVar7 = *(byte *)puVar28;
    *(byte *)puVar28 = *(byte *)puVar28 + bVar37;
    if (!CARRY1(bVar7,bVar37)) {
      pbVar12 = (byte *)((uint)puVar21 | *puVar21);
      out(*puVar22,uVar25);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      bVar7 = *pbVar12;
      piVar17 = (int *)CONCAT22(uVar26,CONCAT11(bVar4 | bVar7,bVar37));
      iVar16 = (int)pbVar12 - *piVar17;
      *(byte *)puVar28 = *(byte *)puVar28 + bVar37;
      puVar21 = puVar45 + 3;
      out(puVar45[2],uVar25);
      uRam12060000 = (undefined1)iVar16;
      *(char *)((int)piVar17 + iVar16) = *(char *)((int)piVar17 + iVar16) - (bVar4 | bVar7);
      *(byte *)puVar28 = *(byte *)puVar28 + bVar37;
      pbVar12 = (byte *)(iVar16 + -0x120edecd);
      *(byte *)puVar21 = (byte)*puVar21 + 1;
      bVar4 = *pbVar12;
      bVar7 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar7;
      pbVar10 = pbVar10 + ((-1 - *(int *)((int)puVar34 + 0x42)) - (uint)CARRY1(bVar4,bVar7));
      *pbVar12 = *pbVar12 + bVar7;
      bVar32 = (byte)pbVar44 | (byte)((uint)pbVar12 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar12;
      bVar4 = *(byte *)puVar28;
      pcVar9 = (char *)(((uint)pbVar12 | 0x11) + 0x511072c);
      puVar22 = puVar45 + 4;
      out(*puVar21,uVar25);
      puVar28 = (uint *)((int)puVar28 + 1);
      *pcVar9 = *pcVar9 + (char)pcVar9;
      bVar7 = (byte)((uint)pcVar9 >> 8);
      pbVar44 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar44 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar44 >> 8) | bVar4,bVar32)
                                                ) >> 8),bVar32 | bVar7);
      uVar19 = (undefined3)((uint)pcVar9 >> 8);
      bVar4 = (char)pcVar9 - *pcVar9;
      pcVar9 = (char *)CONCAT31(uVar19,bVar4);
      *pcVar9 = *pcVar9 + bVar4;
      *(int *)((int)pcVar9 * 2) = (int)(pbVar44 + *(int *)((int)pcVar9 * 2));
      *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
      *pbVar10 = *pbVar10 + bVar7;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar36 = CONCAT31(uVar19,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar36;
      pbVar12 = (byte *)CONCAT22((short)(uVar36 >> 0x10),CONCAT11(bVar7 + in_AF,bVar4));
      *(byte *)puVar22 = (byte)*puVar22 + bVar37;
      *pbVar12 = *pbVar12 + bVar4;
      *pbVar12 = *pbVar12 + bVar4;
      bVar46 = CARRY1(bVar4,*pbVar12);
      puVar21 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar4 + *pbVar12);
      goto code_r0x00404d9a;
    }
    *pbVar44 = *pbVar44 - (char)puVar28;
  }
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
  bVar46 = false;
  piVar17 = (int *)CONCAT22(uVar26,CONCAT11(bVar4 | *(byte *)puVar28,bVar37));
code_r0x00404d9a:
  do {
    pbVar29 = (byte *)puVar28;
    *puVar21 = (*puVar21 - (int)puVar21) - (uint)bVar46;
    bVar4 = (byte)((uint)piVar17 >> 8);
    uVar26 = (undefined2)((uint)piVar17 >> 0x10);
    bVar7 = (byte)piVar17;
    bVar37 = bVar4 + (byte)iRam00000c00;
    pbVar12 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *pbVar29 = *pbVar29 + bVar7;
    pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),(char)pbVar44 - (byte)*puVar22);
    bVar4 = *pbVar12;
    puVar21 = (uint *)(pbVar12 + (uint)CARRY1(bVar37,*pbVar12) + *(int *)pbVar12);
    *pbVar29 = *pbVar29 + bVar7;
    cVar6 = ((bVar37 + bVar4) - *pbVar29) + (byte)*puVar21;
    pcVar9 = (char *)CONCAT22(uVar26,CONCAT11(cVar6,bVar7));
    puVar45 = puVar34 + 1;
    uVar36 = in((short)pbVar29);
    *puVar34 = uVar36;
    cVar5 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar5;
    uVar19 = (undefined3)((uint)pbVar29 >> 8);
    bVar37 = (byte)pbVar29 | (byte)*puVar22;
    pcVar11 = (char *)CONCAT31(uVar19,bVar37);
    *pcVar9 = *pcVar9 + '\x01';
    bVar4 = (cVar6 - *pcVar11) + (byte)*puVar21;
    pcVar9 = (char *)CONCAT22(uVar26,CONCAT11(bVar4,bVar7));
    puVar34 = puVar34 + 2;
    uVar36 = in((short)pcVar11);
    *puVar45 = uVar36;
    *(byte *)puVar21 = (byte)*puVar21 + cVar5;
    bVar37 = bVar37 | (byte)*puVar22;
    puVar28 = (uint *)CONCAT31(uVar19,bVar37);
    *pcVar9 = *pcVar9 + '\x01';
    bVar46 = bVar7 < *(byte *)((int)puVar28 + 2);
    cVar6 = bVar7 - *(byte *)((int)puVar28 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  *(byte *)puVar21 = (byte)*puVar21 + cVar5;
  bVar7 = cVar5 + 0x7b;
  pbVar12 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7);
  pbVar44[(int)pbVar12] = pbVar44[(int)pbVar12] + bVar7;
  puVar45 = puVar22 + 1;
  uVar25 = SUB42(puVar28,0);
  out(*puVar22,uVar25);
  pbVar35 = pbVar44 + -1;
  *pbVar12 = *pbVar12 + bVar7;
  bVar4 = bVar4 | *(byte *)puVar28;
  piVar17 = (int *)CONCAT22(uVar26,CONCAT11(bVar4,cVar6));
  *pbVar12 = *pbVar12 + bVar7;
  *pbVar35 = *pbVar35 + bVar37;
  *pbVar35 = *pbVar35 ^ bVar7;
  *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
  *pbVar12 = *pbVar12 + bVar7;
  do {
    bVar24 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar34 = (byte)*puVar34 + bVar24;
    bVar4 = *pbVar12;
    bVar7 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar7;
    *(byte **)(pbVar44 + 0x17) =
         (byte *)((int)puVar45 + (uint)CARRY1(bVar4,bVar7) + *(int *)(pbVar44 + 0x17));
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    uVar20 = (undefined3)((uint)pbVar12 >> 8);
    bVar7 = bVar7 | (byte)*puVar45;
    puVar34 = (uint *)((int)puVar34 + *(int *)(pbVar10 + -0x34));
    *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
    bVar4 = bVar7 + 2;
    cVar5 = (char)((uint)pbVar29 >> 8);
    bVar32 = (byte)piVar17;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar12 = (byte *)CONCAT31(uVar20,bVar7 + 0x15 + (0xfd < bVar7));
      if (0xec < bVar4 || CARRY1(bVar7 + 0x15,0xfd < bVar7)) {
        *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      }
code_r0x00404e60:
      pbVar10 = pbVar10 + -*puVar28;
      bVar4 = *pbVar12;
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      pbVar44 = (byte *)((int)puVar45 + (-(uint)CARRY1(bVar4,(byte)pbVar12) - *(int *)pbVar12));
      pbVar12 = pbVar12 + *(int *)pbVar12;
      puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,in_DS);
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      bVar4 = *pbVar12;
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      *(byte **)(pbVar35 + (int)puVar28) =
           (byte *)((int)puVar28 +
                   (uint)CARRY1(bVar4,(byte)pbVar12) + *(int *)(pbVar35 + (int)puVar28));
      pbVar12 = pbVar12 + 0x73061314;
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      uVar20 = (undefined3)((uint)piVar17 >> 8);
      bVar32 = bVar32 | *(byte *)puVar28;
      pcVar11 = (char *)CONCAT31(uVar20,bVar32);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      cVar5 = (char)pbVar12 + 'o';
      pcVar9 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar5);
      *pcVar9 = *pcVar9 + cVar5;
      out(*(undefined4 *)pbVar44,uVar25);
      bVar4 = *(byte *)puVar28;
      *(byte *)puVar28 = *(byte *)puVar28 + bVar32;
      pcVar9 = pcVar9 + (uint)CARRY1(bVar4,bVar32) + *puVar34;
      *pcVar9 = *pcVar9 + (char)pcVar9;
      *pcVar11 = *pcVar11 + bVar37;
      puVar45 = (uint *)(pbVar44 + 8);
      out(*(undefined4 *)(pbVar44 + 4),uVar25);
      *(byte *)puVar28 = *(byte *)puVar28 + bVar32;
      piVar17 = (int *)((uint)pcVar9 | *puVar34);
      pcVar11[0x390a0000] = pcVar11[0x390a0000] - bVar24;
      pbVar12 = (byte *)&cRam07000000;
      *(byte *)puVar34 = (byte)*puVar34 - bVar24;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar22 = (uint *)CONCAT31(uVar20,bVar32 | *(byte *)((int)piVar17 + (int)pcVar11));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar24;
      cRam07000000 = cRam07000000 + bVar24;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar44 = (byte *)((int)puVar34 + (int)pbVar10 * 2);
      bVar46 = SCARRY1(*pbVar44,(char)piVar17);
      *pbVar44 = *pbVar44 + (char)piVar17;
      bVar4 = *pbVar44;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar20,bVar4) = *(char *)CONCAT31(uVar20,bVar4) + bVar4;
    bVar7 = bVar7 + 0x71;
    pbVar12 = (byte *)CONCAT31(uVar20,bVar7);
    *pbVar12 = *pbVar12;
    *(byte *)puVar45 = (byte)*puVar45 + 1;
    *piVar17 = (*piVar17 - (int)pbVar12) - (uint)(0x90 < bVar4);
    uVar36 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar7;
    if (!CARRY1((byte)uVar36,bVar7)) goto code_r0x00404e60;
    *pbVar12 = *pbVar12 + bVar7;
    uVar26 = (undefined2)((uint)piVar17 >> 0x10);
    bVar24 = bVar24 | *pbVar12;
    pbVar12 = pbVar12 + -*(int *)pbVar12;
    *pbVar35 = *pbVar35 + bVar24;
    cVar6 = bVar32 - *(byte *)((int)puVar28 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar24,bVar32)) >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  cVar31 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cVar31;
  uVar20 = (undefined3)((uint)pbVar12 >> 8);
  pcVar9 = (char *)CONCAT31(uVar20,cVar31 + '{');
  out(*puVar45,uVar25);
  *pcVar9 = *pcVar9 + cVar31 + '{';
  bVar7 = cVar31 + 0x7e;
  pbVar29 = (byte *)CONCAT31(uVar20,bVar7);
  puVar45 = puVar22 + 3;
  out(puVar22[2],uVar25);
  pbVar12 = pbVar44 + -2;
  *pbVar29 = *pbVar29 + bVar7;
  bVar4 = *(byte *)puVar28;
  puVar22 = (uint *)CONCAT22(uVar26,CONCAT11(bVar24 | bVar4,cVar6));
  *pbVar29 = *pbVar29 + bVar7;
  *pbVar12 = *pbVar12 + bVar37;
  *pbVar12 = *pbVar12 ^ bVar7;
  *(byte *)puVar28 = *(byte *)puVar28 + (bVar24 | bVar4);
  *pbVar29 = *pbVar29 + bVar7;
  *pbVar29 = *pbVar29 + cVar5;
  bVar4 = *pbVar29;
  *pbVar29 = *pbVar29 + bVar7;
  *(byte **)(pbVar44 + 0x18) =
       (byte *)((int)puVar45 + (uint)CARRY1(bVar4,bVar7) + *(int *)(pbVar44 + 0x18));
  *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
  bVar7 = bVar7 | (byte)*puVar45;
  puVar34 = (uint *)((int)puVar34 + *(int *)(pbVar10 + -0x33));
  *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
  bVar46 = SCARRY1(bVar7,'\x02');
  bVar4 = bVar7 + 2;
  piVar17 = (int *)CONCAT31(uVar20,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    return CONCAT31(uVar20,bVar7 + 0x71);
  }
code_r0x00404ebf:
  bVar7 = (byte)piVar17;
  uVar20 = (undefined3)((uint)piVar17 >> 8);
  if (bVar4 != 0 && bVar46 == (char)bVar4 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    puVar45[(int)puVar34 * 2] =
         (uint)((int)puVar28 + (uint)(0xd2 < bVar7) + puVar45[(int)puVar34 * 2]);
    return CONCAT31(uVar20,bVar7 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar4 = *pbVar12;
  *puVar45 = (uint)(*puVar45 + (int)piVar17);
  bVar32 = (byte)((uint)puVar22 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar32;
  *(byte *)piVar17 = (char)*piVar17 + bVar7;
  pbVar44 = (byte *)(CONCAT31(uVar19,bVar37 | bVar4) - *(int *)pbVar12);
  puVar41 = (uint *)CONCAT31(uVar20,bVar7 + 6);
  *(uint *)(pbVar12 + (int)puVar45 * 2) =
       (int)puVar41 + (uint)(0xf9 < bVar7) + *(int *)(pbVar12 + (int)puVar45 * 2);
  *(byte *)puVar22 = (byte)*puVar22 ^ bVar7 + 6;
  bVar7 = (byte)puVar22;
  *pbVar44 = *pbVar44 + bVar7;
  puVar21 = puVar45 + 1;
  uVar26 = SUB42(pbVar44,0);
  out(*puVar45,uVar26);
  *puVar22 = *puVar22 ^ (uint)puVar41;
  *pbVar44 = *pbVar44 + bVar7;
  puVar28 = (uint *)(pbVar12 + -*(int *)pbVar12);
  *(uint *)((int)puVar34 + 0x31) = *(uint *)((int)puVar34 + 0x31) | (uint)pbVar10;
  *puVar41 = *puVar41 + (int)puVar41;
  puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(bVar32 | (byte)*puVar28,bVar7))
  ;
  *(byte **)(pbVar44 + 0x6e) = (byte *)(*(int *)(pbVar44 + 0x6e) + (int)puVar21);
  piVar17 = (int *)((uint)puVar41 | *puVar41);
  bVar37 = (byte)puVar28;
  *(byte *)puVar34 = (byte)*puVar34 - bVar37;
  bVar4 = *pbVar44;
  *pbVar44 = *pbVar44 + bVar7;
  if (CARRY1(bVar4,bVar7)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar4 = pbVar44[0x11];
    uVar25 = (undefined2)((uint)puVar28 >> 0x10);
    out(*puVar21,uVar26);
    puVar22 = (uint *)((int)puVar22 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar27 = (byte)((uint)puVar28 >> 8) | bVar4 | *pbVar44;
    pcVar9 = (char *)((int)piVar17 + -0x21000001);
    bVar4 = (byte)pcVar9 | 0x11;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    cVar5 = bVar4 - 7;
    pcVar11 = (char *)CONCAT31(uVar19,cVar5);
    *puVar34 = (uint)(pcVar11 + (uint)(bVar4 < 7) + *puVar34);
    puVar21 = puVar45 + 3;
    out(puVar45[2],uVar26);
    pbVar44 = pbVar44 + 1;
    *pcVar11 = *pcVar11 + cVar5;
    bVar32 = (byte)((uint)pcVar9 >> 8);
    bVar24 = bVar37 | bVar32;
    bVar7 = cVar5 - *pcVar11;
    bVar4 = *(byte *)puVar22;
    *(byte *)puVar22 = *(byte *)puVar22 + bVar7;
    *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7 + CARRY1(bVar4,bVar7);
    *pbVar44 = *pbVar44 + bVar7;
    *(byte *)puVar21 = (byte)*puVar21 + bVar24;
    bVar4 = (byte)((uint)pbVar44 >> 8);
    *(byte *)puVar22 = *(byte *)puVar22 + bVar7 + CARRY1((byte)pbVar44,bVar4);
    piVar17 = (int *)CONCAT31(uVar19,bVar7);
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    pbVar44 = (byte *)CONCAT22((short)((uint)pbVar44 >> 0x10),
                               CONCAT11(bVar4 + bVar32,(byte)pbVar44 + bVar4));
    puVar28 = (uint *)CONCAT22(uVar25,CONCAT11(bVar27 + *(char *)(CONCAT31((int3)(CONCAT22(uVar25,
                                                  CONCAT11(bVar27,bVar37)) >> 8),bVar24) + 0x76),
                                               bVar24));
    puStack_48._0_2_ = puStack_54._0_2_;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar9 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar22);
    cVar31 = (char)puVar22;
    *pbVar44 = *pbVar44 + cVar31;
    uVar26 = (undefined2)((uint)puVar28 >> 0x10);
    cVar33 = (char)puVar28;
    cVar39 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x75);
    *pcVar9 = *pcVar9 + (char)pcVar9;
    cVar5 = (char)pcVar9 + 'o';
    pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    cVar38 = (char)((uint)puVar22 >> 8);
    *pbVar10 = *pbVar10 - cVar38;
    pbVar44[1] = pbVar44[1] + cVar31;
    pcVar9 = pcVar9 + -0x757b021b;
    cVar5 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar5;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    cVar6 = cVar5 + 'o';
    pcVar9 = (char *)CONCAT31(uVar19,cVar6);
    pbVar29 = pbVar44 + 2;
    *pcVar9 = *pcVar9 + cVar6;
    iVar16 = CONCAT22(uVar26,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar39,cVar33)) +
                                                        0x76),cVar33));
    *pcVar9 = *pcVar9 + cVar6;
    pcVar9 = (char *)CONCAT31(uVar19,cVar5 + -0x22);
    puVar45 = (uint *)((int)puVar34 + 1);
    *(byte *)puVar34 = (byte)*puVar21;
    *pcVar9 = *pcVar9 + cVar5 + -0x22;
    *(byte *)((int)puVar22 + (int)pcVar9) =
         *(byte *)((int)puVar22 + (int)pcVar9) - (char)((uint)pbVar29 >> 8);
    *pbVar29 = *pbVar29 + cVar31;
    bVar7 = cVar38 - pbVar44[4];
    pbVar12 = (byte *)((int)puVar21 + 5);
    out(*(undefined4 *)((int)puVar21 + 1),(short)pbVar29);
    puVar34 = (uint *)((uint)(pcVar9 + *(int *)(pcVar9 + iVar16)) ^ 0x280a0001);
    *(byte *)puVar34 = (byte)*puVar34 << 1 | (char)(byte)*puVar34 < '\0';
    *pbVar12 = *pbVar12 + (char)puVar34;
    pbVar12 = pbVar12 + *(int *)(pbVar44 + -0x5c);
    pbVar44 = (byte *)((uint)puVar34 | *puVar34);
    *pbVar12 = *pbVar12 + (char)pbVar44;
    puVar28 = (uint *)CONCAT31((int3)((uint)iVar16 >> 8),cVar33 - (char)pbVar29);
    bVar4 = *pbVar44;
    puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(bVar7 + *pbVar44,cVar31));
    iVar16 = *(int *)pbVar44;
    *pbVar29 = *pbVar29 + cVar31;
    cVar5 = (char)(pbVar44 + (uint)CARRY1(bVar7,bVar4) + iVar16) + 'r';
    puVar34 = (uint *)CONCAT31((int3)((uint)(pbVar44 + (uint)CARRY1(bVar7,bVar4) + iVar16) >> 8),
                               cVar5);
    pbVar44 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),CONCAT11(10,(char)pbVar29));
    *(char *)(puVar34 + 10) = (char)puVar34[10] + '\n';
    *pbVar12 = *pbVar12 + cVar5;
    puVar21 = (uint *)(pbVar12 + *(int *)(pbVar44 + -0x5e));
    uVar36 = *puVar34;
    cVar5 = (char)((uint)puVar34 | uVar36);
    *(byte *)puVar21 = (byte)*puVar21 + cVar5;
    uVar19 = (undefined3)(((uint)puVar34 | uVar36) >> 8);
    cVar6 = cVar5 + (byte)*puVar28;
    puVar34 = (uint *)CONCAT31(uVar19,cVar6);
    if (SCARRY1(cVar5,(byte)*puVar28) == cVar6 < '\0') goto code_r0x00405090;
    *(byte *)puVar34 = (byte)*puVar34 + cVar6;
    piVar17 = (int *)CONCAT31(uVar19,cVar6 + '\x02');
    puVar34 = puVar45;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar44) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  cVar5 = (char)piVar17 + '}';
  pbVar12 = (byte *)CONCAT31(uVar19,cVar5);
  pbVar44[(int)pbVar12] = pbVar44[(int)pbVar12] + cVar5;
  pbVar44[0x280a0000] = pbVar44[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar4 = (byte)puVar22 & 7;
  *pbVar12 = *pbVar12 << bVar4 | *pbVar12 >> 8 - bVar4;
  *(byte *)puVar21 = (byte)*puVar21 + cVar5;
  cVar31 = (char)puVar28 - (byte)*puVar21;
  uVar26 = (undefined2)((uint)puVar28 >> 0x10);
  cVar38 = (char)((uint)puVar28 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar28 >> 8),cVar31) + 0x7c);
  pcVar9 = (char *)CONCAT22(uVar26,CONCAT11(cVar38,cVar31));
  *pbVar12 = *pbVar12 + cVar5;
  bVar7 = (char)piVar17 + 0xa7U & *pbVar44;
  puVar45 = (uint *)((int)puVar34 + *(int *)(pbVar10 + 0x7c));
  *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
  bVar7 = bVar7 + 0x2a;
  pbVar12 = (byte *)CONCAT31(uVar19,bVar7);
  *pbVar12 = *pbVar12 + bVar7;
  *pcVar9 = *pcVar9 + cVar31;
  *pbVar44 = *pbVar44 ^ bVar7;
  *pcVar9 = *pcVar9 + bVar7;
  bVar4 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar7;
  cVar5 = (bVar7 - *pbVar12) - CARRY1(bVar4,bVar7);
  *(byte *)puVar22 = (byte)*puVar22 + (byte)pbVar44;
  cVar38 = cVar38 + pcVar9[0x7b];
  *(char *)CONCAT31(uVar19,cVar5) = *(char *)CONCAT31(uVar19,cVar5) + cVar5;
  pcVar9 = (char *)CONCAT31(uVar19,cVar5 + 'o');
  *pcVar9 = *pcVar9 + cVar5 + 'o';
  pcVar9 = pcVar9 + 0x2ed7fde6;
  cVar6 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar6;
  cVar5 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar38,cVar31)) + 0x7b);
  *pcVar9 = *pcVar9 + cVar6;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar9 >> 8),cVar6 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar20 = (undefined3)((uint)pbVar44 >> 8);
  bVar7 = (byte)pbVar44 | (byte)*puVar21;
  pbVar29 = (byte *)CONCAT31(uVar20,bVar7);
  uVar36 = CONCAT22(uVar26,CONCAT11(cVar38 + cVar5,cVar31)) | (uint)puVar21;
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  bVar4 = (byte)piVar17 | *pbVar29;
  pbVar12 = (byte *)CONCAT31(uVar19,bVar4);
  cVar5 = (byte)puVar22 - bVar7;
  puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),cVar5);
  *pbVar12 = *pbVar12 + bVar4;
  puVar34 = puVar21 + 1;
  out(*puVar21,(short)pbVar29);
  *pbVar12 = bVar4;
  *pbVar29 = *pbVar29 + cVar5;
  puVar21 = puVar21 + 2;
  out(*puVar34,(short)pbVar29);
  *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
  puVar28 = (uint *)(CONCAT31((int3)(uVar36 >> 8),(char)uVar36 - (char)((uint)pbVar44 >> 8)) |
                    (uint)puVar21);
  pbVar44 = (byte *)CONCAT31(uVar20,(bVar7 | (byte)*puVar21) + (byte)*puVar45);
  cVar5 = bVar4 - (byte)*puVar45;
  puVar34 = (uint *)CONCAT31(uVar19,cVar5 - *(char *)CONCAT31(uVar19,cVar5));
code_r0x00405090:
  *puVar34 = (uint)(pbVar44 + *puVar34);
  cVar5 = (char)puVar34;
  *(byte *)puVar34 = (byte)*puVar34 + cVar5;
  *(byte *)puVar34 = (byte)*puVar34 + cVar5;
  *(byte *)puVar34 = (byte)*puVar34 + cVar5;
  *puVar22 = *puVar22 - (int)pbVar10;
  uVar36 = *puVar21;
  bVar4 = (byte)pbVar44;
  *(byte *)puVar21 = (byte)*puVar21 + bVar4;
  *(byte *)puVar34 = (byte)*puVar34 + cVar5 + CARRY1((byte)uVar36,bVar4);
  *(byte *)puVar22 = (byte)*puVar22 + cVar5;
  uVar36 = *puVar28;
  *(byte *)puVar28 = (byte)*puVar28 + 0x72;
  *(byte *)puVar28 = (byte)*puVar28;
  cVar5 = (char)((uint)pbVar44 >> 8);
  if (SCARRY1((byte)uVar36,'r')) {
    puVar21 = (uint *)((int)puVar21 + *(int *)(pbVar44 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar34;
      uVar19 = (undefined3)((uint)puVar34 >> 8);
      cVar6 = (char)puVar34 + (byte)*puVar28;
      pcVar9 = (char *)CONCAT31(uVar19,cVar6);
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                 CONCAT11((char)((uint)puVar28 >> 8) +
                                          *(byte *)((int)puVar28 + 0x7b),(char)puVar28));
      *pcVar9 = *pcVar9 + cVar6;
      in_AF = 9 < (cVar6 + 0x6fU & 0xf) | in_AF;
      uVar36 = CONCAT31(uVar19,cVar6 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar37 = (byte)uVar36;
      piVar17 = (int *)CONCAT22((short)(uVar36 >> 0x10),
                                CONCAT11((char)((uint)puVar34 >> 8) + in_AF,bVar37));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar37 = bVar37 | *(byte *)(piVar17 + 0x354a);
      bVar37 = bVar37 - *(char *)CONCAT31(uVar19,bVar37);
      pbVar12 = (byte *)CONCAT31(uVar19,bVar37);
      bVar7 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar37;
      puVar21 = (uint *)((int)puVar21 + (-(uint)CARRY1(bVar7,bVar37) - *(int *)pbVar12));
      puVar34 = (uint *)(pbVar12 + 0xfc00);
      *pbVar44 = *pbVar44 + cVar5;
      uVar36 = *puVar34;
      bVar7 = (byte)puVar34;
      *(byte *)puVar34 = (byte)*puVar34 + bVar7;
      uVar14 = (uint)CARRY1((byte)uVar36,bVar7);
      uVar1 = *puVar28;
      uVar36 = *puVar28;
      *puVar28 = (uint)((byte *)(uVar36 + (int)puVar34) + uVar14);
      if (!CARRY4(uVar1,(uint)puVar34) && !CARRY4(uVar36 + (int)puVar34,uVar14)) break;
      *(byte *)puVar34 = (byte)*puVar34 + bVar7;
    }
  }
  uVar36 = (uint)puVar34 | *puVar34;
  uVar26 = SUB42(pbVar44,0);
  *(byte *)puVar21 = (byte)*puVar21 + (char)uVar36;
  piVar17 = (int *)(uVar36 + 0xc1872);
  if (SCARRY4(uVar36,0xc1872)) {
    cVar6 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *pbVar44 = *pbVar44 + cVar6;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar22;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar4;
    puVar34 = puVar21;
    goto code_r0x00405117;
  }
  do {
    uVar36 = *puVar21;
    bVar4 = (byte)piVar17;
    *(byte *)puVar21 = (byte)*puVar21 + bVar4;
    if (CARRY1((byte)uVar36,bVar4)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar19 = (undefined3)((uint)puVar22 >> 8);
      bVar7 = (byte)puVar22 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar22 = (uint *)CONCAT31(uVar19,bVar7 | *(byte *)CONCAT31(uVar19,bVar7));
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar4 = bVar4 | *pbVar44;
      pcVar9 = (char *)CONCAT31(uVar19,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar34 = puVar21 + 1;
        out(*puVar21,uVar26);
        uVar36 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar4);
        *(byte *)puVar34 = (byte)*puVar34 + bVar4;
        pcVar9 = (char *)(uVar36 | 8);
        cVar6 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x7a);
        puVar41 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar6,(char)puVar28));
        *pcVar9 = *pcVar9 + (char)pcVar9;
        cVar5 = (char)pcVar9 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar36 >> 8),cVar5);
        *(char *)piVar17 = (char)*piVar17 + cVar5;
        *(byte *)puVar22 = (byte)*puVar22 + 1;
        puVar21 = puVar21 + 2;
        out(*puVar34,uVar26);
        pbVar44 = (byte *)((uint)pbVar44 ^ uRam08122c04);
        iVar16 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar16 * 2) = *(char *)(iVar16 * 2) - cVar6;
        do {
          bVar4 = (byte)iVar16;
          *(byte *)puVar21 = (byte)*puVar21 + bVar4;
          bVar46 = CARRY1(bVar4,(byte)*puVar41);
          uVar19 = (undefined3)((uint)iVar16 >> 8);
          cVar5 = bVar4 + (byte)*puVar41;
          pbVar12 = (byte *)CONCAT31(uVar19,cVar5);
          uVar26 = in_DS;
          uVar25 = uStack_94;
          if (SCARRY1(bVar4,(byte)*puVar41) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar12 = *pbVar12 + cVar5;
          uVar36 = CONCAT31(uVar19,cVar5 + '\'') + 0x1ebd9f3;
          uStack_98 = (undefined1)puStack_48._0_2_;
          uStack_97 = (undefined1)((ushort)puStack_48._0_2_ >> 8);
          piVar17 = (int *)(uVar36 ^ 0x73060000);
          puVar22 = (uint *)((int)puVar22 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                     CONCAT11((byte)((uint)puVar41 >> 8) | pbVar10[0x7e],
                                              (char)puVar41));
          cVar5 = (char)uVar36;
          *(char *)piVar17 = (char)*piVar17 + cVar5;
          uVar36 = CONCAT31((int3)((uint)piVar17 >> 8),cVar5 + '\x02');
          bVar46 = 0xd9f2d2da < uVar36;
          iVar16 = uVar36 + 0x260d2d25;
          pbVar29 = pbVar10;
          do {
            uVar19 = (undefined3)((uint)iVar16 >> 8);
            bVar7 = (char)iVar16 + -2 + bVar46;
            pbVar10 = (byte *)CONCAT31(uVar19,bVar7);
            bVar4 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar7;
            bVar37 = (byte)puVar41;
            uStack_94 = puStack_48._0_2_;
            if (CARRY1(bVar4,bVar7)) {
              *pbVar10 = *pbVar10 + bVar7;
              puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                         CONCAT11((byte)((uint)puVar41 >> 8) | pbVar29[0x7f],bVar37)
                                        );
              *pbVar10 = *pbVar10 + bVar7;
              pbVar12 = (byte *)CONCAT31(uVar19,bVar7 + 0x2a);
              *pbVar12 = *pbVar12 + bVar7 + 0x2a;
              *(byte *)puVar41 = (byte)*puVar41 + (char)pbVar44;
              uVar26 = in_DS;
              while( true ) {
                in_DS = uVar26;
                bVar7 = (byte)pbVar12;
                *pbVar44 = *pbVar44 ^ bVar7;
                *pbVar44 = *pbVar44 + (char)puVar41;
                *pbVar12 = *pbVar12 + bVar7;
                *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)pbVar44 >> 8);
                bVar4 = *pbVar12;
                *pbVar12 = *pbVar12 + bVar7;
                uVar36 = *puVar41;
                uVar1 = *puVar41;
                *puVar41 = (uint)(pbVar12 + uVar1 + CARRY1(bVar4,bVar7));
                uVar19 = (undefined3)((uint)pbVar12 >> 8);
                if (CARRY4(uVar36,(uint)pbVar12) ||
                    CARRY4((uint)(pbVar12 + uVar1),(uint)CARRY1(bVar4,bVar7))) break;
                *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                pcVar9 = (char *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                          CONCAT11((char)((uint)puVar22 >> 8) + *pbVar12,
                                                   (char)puVar22));
                *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                piVar17 = (int *)CONCAT31(uVar19,bVar7 | (byte)*puVar41);
                puVar22 = puVar21;
                while( true ) {
                  puVar21 = puVar22 + 1;
                  out(*puVar22,(short)pbVar44);
                  pbVar44 = pbVar44 + 1;
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  bVar37 = (byte)((uint)pcVar9 >> 8) | *pbVar44;
                  uVar19 = (undefined3)((uint)piVar17 >> 8);
                  bVar7 = (byte)piVar17 ^ *pbVar44;
                  pcVar11 = (char *)CONCAT31(uVar19,bVar7);
                  cRam282b0000 = cRam282b0000 - bVar37;
                  *pcVar11 = *pcVar11 + bVar7;
                  pbVar10 = pbVar29 + -*(int *)pbVar44;
                  uStack_98 = (undefined1)in_DS;
                  uStack_97 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar45 + 0x17);
                  *pcVar11 = *pcVar11 + bVar7;
                  puVar22 = (uint *)CONCAT22((short)((uint)pcVar9 >> 0x10),
                                             CONCAT11(bVar37 + bVar4 | *pbVar44,(char)pcVar9));
                  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar41;
                  *(byte *)((int)pcVar11 * 2) = *(byte *)((int)pcVar11 * 2) ^ bVar7;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  bVar7 = bVar7 + in_AF * -6;
                  pbVar12 = (byte *)CONCAT31(uVar19,bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
                  *(char *)((int)pbVar12 * 2) =
                       *(char *)((int)pbVar12 * 2) + (char)((uint)pbVar44 >> 8);
                  bVar46 = CARRY1((byte)*puVar22,(byte)pbVar44);
                  *(byte *)puVar22 = (byte)*puVar22 + (byte)pbVar44;
                  uVar26 = in_DS;
                  uVar25 = puStack_48._0_2_;
GenerateStatusText:
                  in_DS = uVar25;
                  pbVar29 = pbVar10;
                  uStack_94 = in_DS;
                  if (!bVar46) break;
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  iVar16 = CONCAT31((int3)((uint)puVar22 >> 8),(byte)puVar22 | *pbVar44);
                  uVar26 = (undefined2)((uint)puVar41 >> 0x10);
                  cVar31 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar41 + 0x7d);
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  *(byte *)puVar45 = (byte)*puVar45 - (char)((uint)puVar22 >> 8);
                  iVar16 = iVar16 - *(int *)(&uRam0b0a0000 + iVar16);
                  cVar5 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar31,(char)puVar41)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar21,(short)pbVar44);
                  pbVar44 = (byte *)CONCAT22(uStack_96,CONCAT11(uStack_97,uStack_98));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar22 = puVar21 + 2;
                  out(puVar21[1],CONCAT11(uStack_97,uStack_98));
                  pbVar29 = pbVar10 + 1;
                  cVar6 = (char)iVar16;
                  pcVar9 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                            CONCAT11((byte)((uint)iVar16 >> 8) |
                                                     *(byte *)((int)puVar45 + 0x46),cVar6));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_48._0_2_ = CONCAT11(uStack_97,uStack_98);
                  uVar19 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar22,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar19,0x5f);
                  puVar45 = (uint *)((int)puVar45 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar41 = (uint *)CONCAT22(uVar26,CONCAT11(cVar31 + cVar5 | (byte)puVar21[-0x1e],
                                                             (char)puVar41));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar34 = (uint *)CONCAT31(uVar19,0x8c);
                  puVar22[(int)puVar45 * 2] = (uint)(pbVar44 + puVar22[(int)puVar45 * 2]);
                  uVar36 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22 + 0x8c;
                  if ((byte)uVar36 < 0x74) {
                    *pbVar44 = *pbVar44 + cVar6;
                    *(byte *)puVar41 = (byte)*puVar41 >> 1;
                    *(char *)puVar34 = (char)*puVar34 + -0x74;
                    *puVar34 = (uint)(pbVar29 + *puVar34);
                    *puVar34 = *puVar34 << 1 | (uint)((int)*puVar34 < 0);
                    *pbVar44 = *pbVar44 + cVar6;
                    pbVar10[2] = pbVar10[2] - cVar6;
                    *pbVar44 = *pbVar44 + cVar6;
                    pbVar10 = (byte *)CONCAT31(uVar19,0x83);
                    puVar34 = puVar41;
                    goto code_r0x00405312;
                  }
                  *puVar34 = (uint)(*puVar34 + (int)puVar34);
                  piVar17 = (int *)(CONCAT31(uVar19,(byte)puVar34[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar34[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar17 = (int *)((int)piVar17 + *puVar22);
                }
              }
              *pbVar44 = *pbVar44 + bVar7;
              *(byte *)puVar41 = (byte)*puVar41 - (char)pbVar44;
              *pbVar12 = *pbVar12 + bVar7;
              pbVar10 = (byte *)CONCAT31(uVar19,bVar7 | (byte)*puVar41);
            }
            else {
              cVar5 = (char)puVar22;
              *pbVar44 = *pbVar44 + cVar5;
              *(byte **)pbVar10 = pbVar44 + *(int *)pbVar10;
              *pbVar10 = *pbVar10 + bVar7;
              bVar7 = bVar7 + *pbVar10;
              pbVar10 = (byte *)CONCAT31(uVar19,bVar7);
              if (-1 < (char)bVar7) {
                *(byte *)puVar41 = (byte)*puVar41 + bVar37;
                out(*puVar21,(short)pbVar44);
                pbVar44 = pbVar44 + 1;
                *pbVar10 = *pbVar10 + bVar7;
                puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                           bVar37 | (byte)((uint)iVar16 >> 8));
                cVar6 = bVar7 - (byte)*puVar22;
                pcVar9 = (char *)CONCAT31(uVar19,cVar6);
                *pcVar9 = *pcVar9 + cVar6 + (bVar7 < (byte)*puVar22);
                *pbVar44 = *pbVar44 + cVar6;
                pcVar9 = (char *)((int)pcVar9 * 2 + 0x79);
                *pcVar9 = *pcVar9 + (char)((uint)pbVar44 >> 8);
                pbVar10 = (byte *)in((short)pbVar44);
                puVar21 = puVar21 + 1;
              }
              *(byte *)puVar21 = (byte)*puVar21 + cVar5;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              uStack_98 = (undefined1)in_DS;
              uStack_97 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar10;
              bVar32 = (byte)((uint)puVar22 >> 8);
              bVar37 = bVar32 + *pbVar10;
              iVar16 = *(int *)pbVar10;
              *pbVar44 = *pbVar44 + cVar5;
              bVar7 = (char)(pbVar10 + (uint)CARRY1(bVar32,bVar4) + iVar16) - (byte)*puVar41;
              pbVar10 = (byte *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar32,bVar4) + iVar16
                                                      ) >> 8),bVar7);
              *(byte *)puVar41 = (byte)*puVar41 ^ bVar7;
              *pbVar29 = *pbVar29 + (char)puVar41;
              *pbVar10 = *pbVar10 + bVar7;
              *pbVar10 = *pbVar10 + bVar7;
              *pbVar10 = *pbVar10 + bVar7;
              puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                         CONCAT11(bVar37 + *pbVar10,cVar5));
              pbVar10 = pbVar10 + (uint)CARRY1(bVar37,*pbVar10) + *(int *)pbVar10;
              *pbVar44 = *pbVar44 + cVar5;
              puVar21 = (uint *)((int)puVar21 + *(int *)(pbVar44 + 0x3e));
            }
            *(byte *)puVar21 = (byte)*puVar21 + (char)pbVar10;
            cVar5 = (char)pbVar10 + 'r';
            puVar21 = (uint *)((int)puVar21 + -1);
            uVar36 = CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
            *(byte *)puVar21 = *(byte *)puVar21 + cVar5;
            bVar46 = 0xfff38f8d < uVar36;
            iVar16 = uVar36 + 0xc7072;
            pbVar10 = pbVar29;
          } while (SCARRY4(uVar36,0xc7072));
        } while( true );
      }
      *pcVar9 = *pcVar9 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar12 = (byte *)CONCAT31(uVar19,bVar4);
      bVar7 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar4;
      uVar19 = (undefined3)
               ((uint)(pbVar12 + (uint)CARRY1(bVar7,bVar4) + *(int *)((int)puVar22 + (int)pbVar44))
               >> 8);
      cVar6 = (char)(pbVar12 + (uint)CARRY1(bVar7,bVar4) + *(int *)((int)puVar22 + (int)pbVar44)) +
              'E';
      pcVar9 = (char *)CONCAT31(uVar19,cVar6);
      *pcVar9 = *pcVar9 + cVar6;
      cVar6 = cVar6 + *pcVar9;
      pcVar9 = (char *)CONCAT31(uVar19,cVar6);
      *pcVar9 = *pcVar9 + cVar6;
      puVar34 = (uint *)CONCAT31(uVar19,cVar6 + *pcVar9);
      *(char *)puVar34 = (char)*puVar34 + cVar6 + *pcVar9;
      pbVar12 = (byte *)((uint)puVar34 | *puVar34);
      bVar4 = *pbVar12;
      bVar7 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar7;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7 + CARRY1(bVar4,bVar7));
      puVar34 = puVar21;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar28 = (uint *)((int)puVar28 - *puVar28);
      puVar21 = puVar34 + 1;
      out(*puVar34,uVar26);
    }
    *pbVar44 = *pbVar44 + (char)puVar22;
    bVar46 = puVar28 < (uint *)*piVar17;
    puVar28 = (uint *)((int)puVar28 - *piVar17);
    bVar4 = (byte)((uint)puVar22 >> 8);
    *(byte *)((int)puVar45 + 0x39) = (*(byte *)((int)puVar45 + 0x39) - bVar4) - bVar46;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar36 = *puVar28;
    *(int *)((int)puVar45 + 0x39) = *(int *)((int)puVar45 + 0x39) - (int)pbVar10;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar36 | (byte)*puVar28,(char)puVar22));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar4 = (char)piVar17 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar4);
  *pbVar10 = *pbVar10 ^ bVar4;
  *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)pcVar9 >> 8);
  bVar4 = *pbVar44;
  *pbVar44 = *pbVar44 + (byte)pcVar9;
  piVar17 = (int *)(((uint)pbVar10 | 0x1496f09) + *puVar45 + (uint)CARRY1(bVar4,(byte)pcVar9));
  puVar21 = puVar22 + 1;
  out(*puVar22,(short)pbVar44);
  pbVar12 = pbVar44 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(byte)pbVar12 | (byte)*puVar41);
  cVar5 = (char)piVar17 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar5);
  puVar34 = puVar41;
  puVar22 = puVar21;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar44 = *pbVar44 - (char)((uint)pbVar12 >> 8);
    *pbVar10 = *pbVar10 + cVar5;
code_r0x00405396:
    bVar4 = *pbVar10;
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    *puVar21 = (uint)(pbVar10 + (uint)CARRY1(bVar4,bVar7) + *puVar21);
    out(*puVar21,(short)pbVar44);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar9 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                              CONCAT11((byte)((uint)pbVar10 >> 8) | (byte)puVar21[1],bVar7));
    *(char **)((int)puVar45 + -1) = pcVar9 + *(int *)((int)puVar45 + -1);
    out(puVar21[1],(short)pbVar44);
    *pcVar9 = *pcVar9 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar41 = (uint *)((int)puVar34 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar19 = (undefined3)((uint)pbVar44 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar37 = (byte)pbVar44 | *(byte *)puVar41 | *(byte *)puVar41;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*puVar22,(short)CONCAT31(uVar19,bVar37));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar37 = bVar37 | (byte)piVar17;
  iVar30 = CONCAT31(uVar19,bVar37);
  pbVar10 = (byte *)((int)piVar17 - *piVar17);
  cVar5 = (char)pbVar10;
  *pcVar9 = *pcVar9 + cVar5;
  cVar6 = (char)pcVar9 - bVar37;
  *pbVar10 = *pbVar10 + cVar5;
  uVar26 = (undefined2)((uint)pcVar9 >> 0x10);
  bVar7 = (byte)((uint)pcVar9 >> 8) | *pbVar10;
  pbVar29 = pbVar29 + -1;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  bVar4 = *(byte *)(CONCAT22(uVar26,CONCAT11(bVar7,cVar6)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar10;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar29;
  *pbVar10 = *pbVar10 + cVar5;
  bVar4 = bVar7 | bVar4 | *(byte *)puVar41;
  iVar23 = CONCAT22(uVar26,CONCAT11(bVar4,cVar6));
  pbVar12 = (byte *)((uint)(puVar22 + 1) ^ *(uint *)(iVar30 + -0x43));
  iVar16 = *(int *)pbVar10;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  if (SCARRY4(iVar16,(int)pbVar10)) {
    *pbVar10 = *pbVar10 + cVar5;
  }
  pbVar44 = pbVar10 + 0x5674;
  puVar45 = (uint *)((int)puVar45 +
                    (-(uint)((byte *)0xffffa98b < pbVar10) - *(int *)(pbVar12 + -0x7f)));
  bVar7 = (byte)pbVar44;
  *pbVar44 = *pbVar44 + bVar7;
  uVar20 = (undefined3)((uint)pbVar44 >> 8);
  bVar32 = bVar7 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar20,bVar32);
  *(uint *)(pbVar12 + (int)puVar45 * 8) =
       *(int *)(pbVar12 + (int)puVar45 * 8) + iVar30 + (uint)(0xd2 < bVar7);
  bVar7 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar32;
  if (!CARRY1(bVar7,bVar32)) {
    do {
      pbVar44 = (byte *)(iVar30 + 1);
      bVar7 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      bVar37 = (byte)((uint)piVar17 >> 8);
      bVar32 = (byte)puVar41 | bVar37;
      puVar22 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar32);
      out(*(undefined4 *)pbVar12,(short)pbVar44);
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      uVar26 = (undefined2)((uint)iVar23 >> 0x10);
      cVar5 = (char)iVar23;
      pbVar10 = (byte *)CONCAT22(uVar26,CONCAT11((byte)((uint)iVar23 >> 8) | *pbVar44,cVar5));
      bVar4 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar7;
      *(byte *)piVar17 = (char)*piVar17 + bVar7 + CARRY1(bVar4,bVar7);
      *pbVar44 = *pbVar44 + bVar7;
      *(byte *)puVar45 = (byte)*puVar45 + bVar37;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar26,CONCAT11(0x1c,cVar5));
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      cVar6 = (char)pbVar44;
      *(byte *)puVar22 = (byte)*puVar22 + cVar6;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar7;
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      pbVar10 = pbVar12 + 8;
      out(*(undefined4 *)(pbVar12 + 4),(short)pbVar44);
      piVar17 = &uRam0a0a0000;
      *pbVar44 = *pbVar44;
      bVar7 = cVar5 - cVar6;
      iVar23 = CONCAT22(uVar26,CONCAT11((byte)puVar45[0x14] | 0x1c | bRam0ca87216,bVar7));
      *pbVar44 = *pbVar44;
      bVar4 = *pbVar44;
      *pbVar44 = *pbVar44 + bVar7;
      if (!CARRY1(bVar4,bVar7)) {
        piVar17 = &uRam1e7b7000;
        bVar4 = (byte)((uint)puVar41 >> 8) | *(byte *)(iVar30 + 3);
        puVar22 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar4,bVar32));
        if (bVar4 != 0) {
          pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),cVar6 + pbVar10[(int)puVar45 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar23 = iVar23 + 1;
        }
      }
      *piVar17 = *piVar17 + (int)piVar17;
      iVar30 = CONCAT31((int3)((uint)pbVar44 >> 8),(byte)pbVar44 | pbVar10[(int)puVar45 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar45 = (uint)((int)piVar17 + *puVar45 + 1);
      pbVar12 = pbVar12 + 0xc;
      out(*(undefined4 *)pbVar10,(short)iVar30);
      puVar41 = puVar22;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar32 = bVar32 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar20,bVar32);
  if ('\0' < (char)bVar32) {
    *(byte *)piVar17 = (char)*piVar17 + bVar32;
    puVar22 = (uint *)CONCAT31(uVar20,bVar32 + 0x28);
    *puVar22 = *puVar22 ^ (uint)puVar22;
    *(byte *)puVar41 = *(byte *)puVar41 + bVar4;
    cVar5 = (bVar32 + 0x28) - bVar4;
    pcVar9 = (char *)CONCAT31(uVar20,cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    pbVar44 = (byte *)CONCAT31(uVar19,bVar37 | *(byte *)puVar41);
    pcVar11 = (char *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((char)((uint)puVar41 >> 8) + *(byte *)((int)puVar34 + 0x7d),
                                        (char)puVar41));
    *pcVar9 = *pcVar9 + cVar5;
    pbVar10 = (byte *)CONCAT31(uVar20,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar20,cVar5 + 0x39U));
    *pcVar11 = *pcVar11 + bVar4;
    puVar21 = (uint *)(pbVar12 + 4);
    out(*(undefined4 *)pbVar12,(short)pbVar44);
    goto code_r0x00405396;
  }
  puVar22 = (uint *)(pbVar12 + 4);
  out(*(undefined4 *)pbVar12,(short)iVar30);
  pcVar9 = (char *)(iVar23 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar44 = (byte *)CONCAT31(uVar19,bVar37 | *(byte *)puVar41);
  goto code_r0x004052ee;
}


