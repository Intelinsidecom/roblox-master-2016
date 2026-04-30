/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004046ce
 * Raw Name    : <GetSettingsAquirer>b__0
 * Demangled   : <GetSettingsAquirer>b__0
 * Prototype   : int <GetSettingsAquirer>b__0(char * param_1, uint * param_2)
 * Local Vars  : unaff_EDI, pbVar44, in_ES, puVar45, in_SS, in_CS, in_CF, in_DS, in_AF, bVar46, param_1, param_2, uStack_93, uStack_94, uStack_90, uStack_92, puStack_50, uStack_54, pbStack_48, iStack_4c, uStack_40, puStack_44, puStack_38, puStack_3c, puStack_30, pbStack_34, pbStack_28, pbStack_2c, pcStack_20, puStack_24, puStack_18, puStack_1c, pcStack_10, iStack_14, uVar2, uVar1, bVar4, uVar3, cVar6, bVar5, uVar8, cVar7, pcVar9, in_EAX, pcVar11, pbVar10, puVar13, pbVar12, puVar15, uVar14, piVar17, iVar16, uVar19, puVar18, puVar21, uVar20, bVar23, iVar22, uVar25, uVar24, puVar27, bVar26, iVar29, pbVar28, bVar31, cVar30, unaff_EBX, cVar32, pbVar34, puVar33, puVar36, uVar35, cVar38, bVar37, ppbVar40, cVar39, ppbVar42, puVar41, unaff_ESI, ppbVar43
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

int __fastcall <GetSettingsAquirer>b__0(char *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
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
  byte bVar23;
  uint *puVar21;
  undefined2 uVar24;
  undefined2 uVar25;
  int iVar22;
  byte bVar26;
  char cVar30;
  byte bVar31;
  uint *puVar27;
  byte *pbVar28;
  int iVar29;
  char cVar32;
  byte bVar37;
  uint *unaff_EBX;
  uint *puVar33;
  char cVar38;
  byte *pbVar34;
  char cVar39;
  uint uVar35;
  uint *puVar36;
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
  bool in_CF;
  bool bVar46;
  byte in_AF;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_54;
  uint *puStack_50;
  int iStack_4c;
  byte *pbStack_48;
  uint *puStack_44;
  undefined2 uStack_40;
  uint *puStack_3c;
  uint *puStack_38;
  byte *pbStack_34;
  uint *puStack_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  uint *puStack_24;
  char *pcStack_20;
  uint *puStack_1c;
  uint *puStack_18;
  int iStack_14;
  char *pcStack_10;
  
  bVar5 = (byte)in_EAX;
                    /* .NET CLR Managed Code */
  if (in_CF) {
    *(byte **)in_EAX = in_EAX + *(int *)in_EAX;
    param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
    uVar35 = unaff_EBX[0xb];
    *in_EAX = *in_EAX + bVar5;
    param_2 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)param_2 >> 0x10),
                                               CONCAT11((char)((uint)param_2 >> 8) + (byte)uVar35,
                                                        (char)param_2)) >> 8),
                               (char)param_2 - (byte)*unaff_EBX);
    bRam0000c800 = bRam0000c800 ^ bVar5;
  }
  bVar37 = (byte)((uint)param_1 >> 8);
  *(byte *)param_2 = (byte)*param_2 + bVar37;
  bVar4 = *in_EAX;
  *in_EAX = *in_EAX + bVar5;
  *param_2 = (uint)(in_EAX + (uint)CARRY1(bVar4,bVar5) + *param_2);
  pbVar10 = (byte *)(unaff_ESI + 1);
  uVar25 = SUB42(param_2,0);
  out(*unaff_ESI,uVar25);
  *in_EAX = *in_EAX + bVar5;
  uVar19 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = bVar5 - 0x1f;
  pcVar9 = (char *)CONCAT31(uVar19,bVar4);
  puVar33 = unaff_EBX;
  if (bVar4 == 0 || (char)bVar5 < '\x1f') goto code_r0x0040475f;
  *pcVar9 = *pcVar9 + bVar4;
  piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0xe);
  *(byte **)(pbVar10 + (int)unaff_EDI * 8) =
       (byte *)((int)param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar10 + (int)unaff_EDI * 8));
  uRam7305fffc = in_CS;
  *piVar17 = *piVar17 + (int)piVar17;
  bVar5 = bVar5 + 0xe | *(byte *)((int)piVar17 + 0x400006d);
  pcVar9 = (char *)CONCAT31(uVar19,bVar5);
  puVar45 = unaff_EDI;
  if ((char)bVar5 < '\x01') goto code_r0x00404777;
  *pcVar9 = *pcVar9 + bVar5;
  bVar5 = bVar5 + 0x10;
  pcVar9 = (char *)CONCAT31(uVar19,bVar5);
  *param_2 = (uint)(pcVar9 + *param_2);
  out(*(undefined4 *)pbVar10,uVar25);
  pcRam7305fff8 = param_1;
  *pcVar9 = *pcVar9 + bVar5;
  uRam7305fff0 = in_SS;
  uRam7305fff4 = in_ES;
  *param_1 = *param_1 + '\x01';
  uRam7305ffec = in_SS;
  *param_1 = *param_1 + '\x01';
  bVar5 = bVar5 | (byte)*param_2;
  pcVar9 = (char *)CONCAT31(uVar19,bVar5);
  out(unaff_ESI[2],uVar25);
  puVar45 = (uint *)((int)unaff_EDI + -1);
  *pcVar9 = *pcVar9 + bVar5;
  pcVar9 = (char *)((int)((uint)pcVar9 | *puVar45) + *(int *)((uint)pcVar9 | *puVar45));
  uRam7305ffe8 = in_ES;
  *pcVar9 = *pcVar9 + (char)pcVar9;
  cVar6 = (char)pcVar9 + *pcVar9;
  puVar33 = (uint *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6);
  *(char *)puVar33 = (char)*puVar33 + cVar6;
  *puVar33 = *puVar33 & (uint)puVar33;
  *(char *)puVar33 = (char)*puVar33 + cVar6;
  pbVar10 = (byte *)((int)puVar33 + 1);
  cVar6 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar6;
  uVar35 = *unaff_EBX;
  *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar37;
  puVar15 = unaff_ESI + 3;
  if (CARRY1((byte)uVar35,bVar37)) {
    puVar15 = unaff_ESI + 4;
    out(unaff_ESI[3],uVar25);
    puVar45 = (uint *)((int)unaff_EDI + -2);
  }
  *pbVar10 = *pbVar10 + cVar6;
  puVar21 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11(bVar37 + *(byte *)((int)puVar45 + 0x49),(char)param_1));
  uRam7305ffe4 = in_ES;
  *pbVar10 = *pbVar10 + cVar6;
  uRam7305ffe0 = in_ES;
  *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
  out(*puVar15,uVar25);
  puVar33 = (uint *)((int)unaff_EBX + -1);
  *pbVar10 = *pbVar10 + cVar6;
  pbVar44 = (byte *)((int)puVar15 + *(int *)((int)unaff_EBX + -0x7f) + 4);
  uRam7305ffd8 = in_ES;
  uRam7305ffdc = in_ES;
  *pbVar10 = *pbVar10 + cVar6;
  do {
    puStack_38 = (uint *)((uint)puStack_38 & 0xffff0000);
    cVar6 = (char)pbVar10 - (byte)*param_2;
    pcVar9 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar6);
    pbVar10 = pbVar44 + 4;
    out(*(undefined4 *)pbVar44,(short)param_2);
    unaff_EDI = (uint *)((int)puVar45 + -1);
    *pcVar9 = *pcVar9 + cVar6;
    param_1 = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11((char)((uint)puVar21 >> 8) + (byte)puVar45[0x12],
                                        (char)puVar21));
code_r0x0040475f:
    cVar6 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar6;
    *(byte *)(puVar33 + 0x818000) = (byte)puVar33[0x818000] - (char)((uint)puVar33 >> 8);
    out(*(undefined4 *)pbVar10,(short)param_2);
    pbVar44 = (byte *)((int)puVar33 + -1);
    *pcVar9 = *pcVar9 + cVar6;
    pcStack_10 = (char *)CONCAT22(pcStack_10._2_2_,in_ES);
    iStack_14 = CONCAT22(iStack_14._2_2_,in_ES);
    pbVar10 = pbVar10 + *(int *)((int)puVar33 + -0x71) + 4;
    *pcVar9 = *pcVar9 + cVar6;
    puStack_18 = (uint *)CONCAT22(puStack_18._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar44 >> 0x10),
                                 CONCAT11((char)((uint)pbVar44 >> 8) - pbVar10[0x6e],(char)pbVar44))
    ;
    puVar45 = unaff_EDI;
code_r0x00404777:
    bVar5 = (byte)pcVar9;
    *pcVar9 = *pcVar9 + bVar5;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    puVar33 = (uint *)(pbVar10 + (int)puVar45 * 8);
    uVar35 = *puVar33;
    uVar1 = *puVar33;
    *puVar33 = (uint)((byte *)(uVar1 + (int)param_2) + (0xd2 < bVar5));
    puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,in_ES);
    puVar41 = (uint *)0x73060000;
    cVar7 = bVar5 + 0x2e +
            (CARRY4(uVar35,(uint)param_2) || CARRY4(uVar1 + (int)param_2,(uint)(0xd2 < bVar5)));
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    *pbVar10 = *pbVar10;
    cVar6 = cVar7 + '~';
    pcVar11 = (char *)CONCAT31(uVar19,cVar6);
    out(*pbVar10,(short)param_2);
    *pcVar11 = *pcVar11 + cVar6;
    cVar7 = cVar7 + -0x80;
    pcVar11 = (char *)CONCAT31(uVar19,cVar7);
    out(*(undefined4 *)(pbVar10 + 1),(short)param_2);
    puVar21 = (uint *)(param_1 + -1);
    *pcVar11 = *pcVar11 + cVar7;
    pcStack_20 = (char *)CONCAT22(pcStack_20._2_2_,in_ES);
    *(byte *)puVar45 = (byte)*puVar45 - (char)((uint)pcVar9 >> 8);
    *pcVar11 = *pcVar11 + cVar7;
    puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
    *pcVar11 = *pcVar11 - (char)((uint)puVar21 >> 8);
    *pcVar11 = *pcVar11 + cVar7;
    pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,in_ES);
    pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
    pbVar44 = pbVar10 + *(int *)((int)unaff_EBX + 9) + 5;
    *pcVar11 = *pcVar11 + cVar7;
    puStack_30 = (uint *)CONCAT22(puStack_30._2_2_,in_ES);
    cVar6 = (char)param_2;
    cVar30 = (char)((uint)param_2 >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar30,cVar6));
    *pcVar11 = *pcVar11 + cVar7;
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar37 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 0x36);
    puVar33 = (uint *)CONCAT22(uVar25,CONCAT11(bVar37,(char)unaff_EBX));
    bVar4 = cVar7 + (byte)*puVar33;
    pbVar10 = (byte *)CONCAT31(uVar19,bVar4);
    *(byte *)puVar45 = (byte)*puVar45 - cVar30;
    bVar5 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    pbStack_34 = (byte *)CONCAT22(pbStack_34._2_2_,in_ES);
  } while (!CARRY1(bVar5,bVar4));
  *pbVar10 = *pbVar10 + bVar4;
  bVar4 = bVar4 - *pbVar10;
  pbVar10 = (byte *)CONCAT31(uVar19,bVar4);
  *(byte *)puVar33 = (byte)*puVar33 + cVar6;
  *(byte *)param_2 = (byte)*param_2 ^ bVar4;
  param_1[0x2affffff] = param_1[0x2affffff] + bVar4;
  bVar5 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  *puVar33 = (uint)(pbVar10 + (uint)CARRY1(bVar5,bVar4) + *puVar33);
  pbVar12 = pbVar10 + -0x32a1702;
  if (pbVar12 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar12;
    puVar36 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + (byte)*param_2);
    puStack_3c = (uint *)CONCAT22(puStack_3c._2_2_,in_ES);
    pbVar10[-0xe0c891b] = pbVar10[-0xe0c891b] + cVar30;
    pbVar12 = pbVar10 + 0x19fd76e3;
    bVar5 = *pbVar12;
    *pbVar12 = *pbVar12 - bVar37;
    piVar17 = (int *)((uint)(pbVar10 + (bVar5 < bVar37) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar17 + 0x73) = *(char *)((int)piVar17 + 0x73) + cVar30;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar4 = bVar37 | *(byte *)((int)param_2 + 2);
    puVar33 = (uint *)CONCAT22(uVar25,CONCAT11(bVar4,(char)unaff_EBX));
    cVar6 = (char)piVar17;
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      *(char *)piVar17 = (char)*piVar17 + cVar6;
      uVar19 = (undefined3)((uint)(pbVar10 + (bVar5 < bVar37) + 0x63fd76e4) >> 8);
      cVar7 = cVar6 + '\x06';
      if ((POPCOUNT(cVar7) & 1U) == 0) {
        *(char *)CONCAT31(uVar19,cVar7) = *(char *)CONCAT31(uVar19,cVar7) + cVar7;
        pbVar12 = (byte *)CONCAT31(uVar19,cVar6 + '.');
        puVar21 = puVar36;
        uStack_40 = in_SS;
        goto code_r0x00404803;
      }
      cVar6 = cVar7 + (byte)*puVar33;
      pcVar9 = (char *)CONCAT31(uVar19,cVar6);
      if (SCARRY1(cVar7,(byte)*puVar33) == cVar6 < '\0') {
code_r0x004048e7:
        pcVar9 = (char *)((uint)pcVar9 | 8);
        uStack_40 = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(param_2 + 0x1cc18000) = (byte)param_2[0x1cc18000] + cVar6;
code_r0x0040486e:
      pcVar9 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),(byte)piVar17 & (byte)*param_2);
      puVar45 = (uint *)((int)puVar45 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar9 = *pcVar9 + (char)pcVar9;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + '*');
    puStack_3c = (uint *)CONCAT22(puStack_3c._2_2_,in_DS);
    bVar5 = (byte)((uint)puVar36 >> 8);
    cVar6 = (char)puVar36;
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar5 + *pbVar10,cVar6));
    pbVar10 = pbVar10 + (uint)CARRY1(bVar5,*pbVar10) + *(int *)pbVar10;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    bVar46 = (byte)pbVar10 < *pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 - *pbVar10);
code_r0x00404880:
    pbVar44 = pbVar44 + (uint)bVar46 + *(int *)pbVar10;
    uStack_40 = in_ES;
    while( true ) {
      bVar4 = (byte)pbVar10;
      pbVar10[0x2c000000] = pbVar10[0x2c000000] + bVar4;
      bVar5 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar4;
      *param_2 = (uint)(pbVar10 + (uint)CARRY1(bVar5,bVar4) + *param_2);
      *(byte *)puVar33 = (byte)*puVar33 - (char)param_2;
      *pbVar10 = *pbVar10 + bVar4;
      puVar21 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar4 | (byte)*puVar33);
code_r0x00404895:
      pcVar9 = (char *)((uint)puVar21 | *puVar21);
code_r0x00404899:
      cVar6 = (char)pcVar9;
      *pbVar44 = *pbVar44 + cVar6;
      uVar19 = (undefined3)((uint)pcVar9 >> 8);
      bVar5 = cVar6 + (byte)*puVar33;
      pcVar9 = (char *)CONCAT31(uVar19,bVar5);
      bVar4 = (byte)((uint)puVar36 >> 8);
      uVar25 = (undefined2)((uint)puVar36 >> 0x10);
      cVar7 = (char)param_2;
      if (SCARRY1(cVar6,(byte)*puVar33) == (char)bVar5 < '\0') {
        *(byte *)puVar33 = (byte)*puVar33 - cVar7;
        *pcVar9 = *pcVar9 + bVar5;
        puVar36 = (uint *)CONCAT22(uVar25,CONCAT11(bVar4 | (byte)*param_2,(char)puVar36));
        param_2 = (uint *)((int)param_2 + 1);
        pcVar9 = pcVar9 + *param_2;
        uStack_40 = in_ES;
        if ((POPCOUNT((uint)pcVar9 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar9 = *pcVar9 + bVar5;
      bVar37 = bVar5 + 2;
      pcVar9 = (char *)CONCAT31(uVar19,bVar37);
      if (bVar5 < 0xfe) {
        *pbVar44 = *pbVar44 + bVar37;
        puVar21 = puVar33;
        uStack_40 = in_ES;
        goto code_r0x004048f5;
      }
      *pcVar9 = *pcVar9 + bVar37;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) |
                                          *(byte *)((int)puVar33 + -0x5b),cVar7));
      cVar6 = *pcVar9;
      *pcVar9 = *pcVar9 + bVar37;
      puStack_50 = (uint *)CONCAT22(puStack_50._2_2_,in_ES);
      uVar24 = in_ES;
      if (SCARRY1(cVar6,bVar37) == *pcVar9 < '\0') goto code_r0x00404927;
      *pcVar9 = *pcVar9 + bVar37;
      bVar5 = bVar5 + 4;
      pbVar10 = (byte *)CONCAT31(uVar19,bVar5);
      if (0xfd < bVar37) break;
      *pbVar10 = *pbVar10 + bVar5;
      puVar36 = (uint *)CONCAT22(uVar25,CONCAT11(bVar4 | (byte)*param_2,(char)puVar36));
      *(byte *)puVar33 = (byte)*puVar33 + cVar7;
      *pbVar44 = *pbVar44 ^ bVar5;
    }
    *pbVar10 = *pbVar10 + bVar5;
    puStack_44 = (uint *)((uint)puStack_44 & 0xffff0000);
  }
  else {
    pbVar10[0x6fdbe8fe] = pbVar10[0x6fdbe8fe] + (char)pbVar12;
code_r0x00404803:
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    uVar20 = (undefined3)((uint)puVar21 >> 8);
    bVar4 = (byte)puVar21 | (byte)*puVar33;
    puVar36 = (uint *)CONCAT31(uVar20,bVar4);
    uVar25 = (undefined2)((uint)puVar33 >> 0x10);
    cVar7 = (char)puVar33;
    cVar38 = (char)((uint)puVar33 >> 8) + *(byte *)((int)puVar33 + 0x6f);
    puVar33 = (uint *)CONCAT22(uVar25,CONCAT11(cVar38,cVar7));
    bVar5 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar5;
    bVar46 = 0xf9 < bVar5;
    uVar19 = (undefined3)((uint)pbVar12 >> 8);
    cVar6 = bVar5 + 6;
    pbVar10 = (byte *)CONCAT31(uVar19,cVar6);
    in_SS = uStack_40;
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00404880;
    *pbVar10 = *pbVar10 + cVar6;
    piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x2e);
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar4 = bVar4 | *(byte *)((int)param_2 + (int)piVar17);
    puVar36 = (uint *)CONCAT31(uVar20,bVar4);
    in_SS = puStack_3c._0_2_;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      puVar21 = (uint *)((int)piVar17 + *piVar17);
      *(byte *)param_2 = (byte)*param_2 + bVar4;
      pbVar44 = pbVar44 + param_2[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar17 = (char)*piVar17 + bVar5 + 0x2e;
    cVar6 = bVar5 + 0x34;
    pcVar9 = (char *)CONCAT31(uVar19,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      pcVar9[0x28] = pcVar9[0x28] + cVar30;
      goto code_r0x00404899;
    }
    *pcVar9 = *pcVar9 + cVar6;
    piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x5c);
    *piVar17 = *piVar17 + (int)piVar17;
    cVar30 = (bVar4 | bRam07022c07) - (char)*piVar17;
    puVar36 = (uint *)CONCAT31(uVar20,cVar30);
    pcVar9 = (char *)CONCAT31(uVar19,bVar5 + 0x5a);
    bVar4 = (byte)((uint)puVar21 >> 8);
    *(byte *)param_2 = (byte)*param_2 | bVar4;
    *(uint *)((int)param_2 + (int)pcVar9) = *(uint *)((int)param_2 + (int)pcVar9) | 0x73060000;
    *param_2 = *param_2 | 0x73060000;
    cVar38 = cVar38 + *(byte *)((int)puVar33 + 0x72);
    puVar33 = (uint *)CONCAT22(uVar25,CONCAT11(cVar38,cVar7));
    *pcVar9 = *pcVar9 + bVar5 + 0x5a;
    cVar6 = bVar5 + 0x60;
    pcVar9 = (char *)CONCAT31(uVar19,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *pcVar9 = *pcVar9 + cVar6;
      piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x88);
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      pbStack_34 = (byte *)CONCAT22(pbStack_34._2_2_,in_DS);
      puVar36 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                 CONCAT11((bVar4 | (byte)*param_2) + (char)*piVar17,cVar30));
      *(char *)piVar17 = (char)*piVar17;
      cVar7 = cVar7 - *pbVar44;
      cVar38 = cVar38 + *(char *)(CONCAT31((int3)((uint)puVar33 >> 8),cVar7) + 0x73);
      *(byte *)piVar17 = (char)*piVar17 + bVar5 + 0x88;
      bVar5 = bVar5 + 0xb2 & (byte)*param_2;
      puVar45 = (uint *)((int)puVar45 + iRam73060073);
      *(char *)CONCAT31(uVar19,bVar5) = *(char *)CONCAT31(uVar19,bVar5) + bVar5;
      pcVar9 = (char *)CONCAT31(uVar19,bVar5 + 0x2a);
      puVar33 = (uint *)CONCAT22(uVar25,CONCAT11(cVar38 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar38,
                                                  cVar7)) + 0x74),cVar7));
      *pcVar9 = *pcVar9 + bVar5 + 0x2a;
      piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x54);
      in_SS = puStack_44._0_2_;
      goto code_r0x0040486e;
    }
    pbVar10 = (byte *)*(undefined6 *)pcVar9;
    *pbVar44 = *pbVar44 + (char)*(undefined6 *)pcVar9;
  }
  uVar19 = (undefined3)((uint)pbVar10 >> 8);
  bVar5 = (byte)pbVar10 | *pbVar44;
  pcVar9 = (char *)CONCAT31(uVar19,bVar5);
  *pcVar9 = *pcVar9 + bVar5;
  *puVar33 = (uint)(*puVar33 + (int)puVar36);
  puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                             CONCAT11((char)((uint)puVar33 >> 8) + *(byte *)((int)puVar33 + 0x75),
                                      (char)puVar33));
  *pcVar9 = *pcVar9 + bVar5;
  pcVar9 = (char *)CONCAT31(uVar19,bVar5 + 0x6f);
  *pcVar9 = *pcVar9 + bVar5 + 0x6f;
  pcVar9 = (char *)((int)((uint)pcVar9 & 0x7e26062d) - *(int *)((uint)pcVar9 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
  uRam00c16f07 = SUB41(pcVar9,0);
code_r0x004048de:
  cVar6 = (char)pcVar9;
  *pbVar44 = *pbVar44 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *(byte **)(pcVar9 + (int)puVar36) = (byte *)(*(int *)(pcVar9 + (int)puVar36) + (int)puVar36);
  puStack_44 = (uint *)CONCAT22(puStack_44._2_2_,uStack_40);
  bVar5 = *(byte *)((int)puVar33 + 0x75);
  *pcVar9 = *pcVar9 + cVar6;
  pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6 + 'o');
  pbVar44 = pbVar44 + 1;
  *pcVar9 = *pcVar9 + cVar6 + 'o';
  pbStack_48 = (byte *)CONCAT22(pbStack_48._2_2_,uStack_40);
  puVar21 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                             CONCAT11((char)((uint)puVar33 >> 8) + bVar5,(char)puVar33));
  puVar41 = puVar33;
  in_SS = uStack_40;
code_r0x004048f5:
  puVar33 = puVar21;
  pcVar9 = (char *)((int)((uint)pcVar9 & 0x7e26062d) - *(int *)((uint)pcVar9 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
  do {
    uRam00c36f08 = SUB41(pcVar9,0);
    while( true ) {
      bVar5 = *pbVar44;
      cVar6 = (char)pcVar9;
      *pbVar44 = *pbVar44 + cVar6;
      iStack_4c = CONCAT22(iStack_4c._2_2_,uStack_40);
      if (SCARRY1(bVar5,cVar6) == (char)*pbVar44 < '\0') {
        pcVar9[(int)puVar41] = pcVar9[(int)puVar41] + cVar6;
        goto code_r0x00404982;
      }
      *pcVar9 = *pcVar9 + cVar6;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6 + '*');
      puStack_50 = (uint *)CONCAT22(puStack_50._2_2_,in_DS);
      bVar5 = (byte)((uint)puVar36 >> 8);
      cVar6 = (char)puVar36;
      bVar4 = bVar5 + *pbVar10;
      pbVar10 = pbVar10 + (uint)CARRY1(bVar5,*pbVar10) + *(int *)pbVar10;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      cVar7 = (char)puVar33 - *pbVar44;
      bVar5 = *pbVar10;
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar4 + *pbVar10,cVar6));
      iVar16 = *(int *)pbVar10;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      pcVar9 = (char *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar4,bVar5) + iVar16) >> 8),
                                (char)(pbVar10 + (uint)CARRY1(bVar4,bVar5) + iVar16) -
                                *(byte *)((int)param_2 + 3));
      puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                 CONCAT11((char)((uint)puVar33 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)puVar33 >> 8),cVar7) +
                                                   -0x3a),cVar7));
code_r0x00404921:
      bVar5 = (byte)pcVar9;
      *pcVar9 = *pcVar9 + bVar5;
      pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),bVar5 + 0x6f);
      *(byte *)puVar36 = ((byte)*puVar36 - (bVar5 + 0x6f)) - (0x90 < bVar5);
      uVar24 = uStack_40;
code_r0x00404927:
      uStack_40 = uVar24;
      *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
      pbStack_48 = (byte *)CONCAT22(pbStack_48._2_2_,in_SS);
      *(byte *)puVar36 = (byte)*puVar36 + 1;
      cVar6 = (char)((uint)puVar36 >> 8) - pbVar44[2];
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(cVar6,(char)puVar36));
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
      pcVar9 = pcVar9 + -0x1b7e2606;
      *pcVar9 = *pcVar9 + (char)pcVar9;
      pcVar9 = (char *)CONCAT22((short)((uint)pcVar9 >> 0x10),
                                CONCAT11((byte)((uint)pcVar9 >> 8) | (byte)param_2[0x30dbc2],
                                         (char)pcVar9));
    }
code_r0x00404931:
    *pcVar9 = *pcVar9 + (char)pcVar9;
    cVar6 = (char)pcVar9 + '\x02';
    pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6);
    pbVar10 = pbVar44;
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  do {
    bVar5 = (byte)pcVar9;
    *pcVar9 = *pcVar9 + bVar5;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x6f);
    *puVar36 = (*puVar36 - (int)piVar17) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
    iVar16 = *(int *)((int)puVar45 + 0x1a);
    *piVar17 = *piVar17 + (int)piVar17;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar10);
    *(byte *)puVar36 = (byte)*puVar36 + 1;
    bVar5 = (bVar5 + 0x6f) - (char)*piVar17;
    pbVar44 = (byte *)CONCAT31(uVar19,bVar5);
    *pbVar44 = *pbVar44 + bVar5;
    pbVar10 = pbVar10 + *(int *)pbVar44;
    cVar6 = bVar5 + *pbVar44;
    puVar13 = (ushort *)CONCAT31(uVar19,cVar6);
    *puVar13 = *puVar13 + (ushort)CARRY1(bVar5,*pbVar44) * (((ushort)puVar13 & 3) - (*puVar13 & 3));
    *(char *)puVar13 = (char)*puVar13 + cVar6;
    *(char *)puVar13 = (char)*puVar13 + cVar6;
    *(char *)puVar13 = (char)*puVar13 + cVar6;
    puVar45 = (uint *)((int)puVar45 + puVar33[0x1c]);
    puVar41 = (uint *)((int)puVar41 + iVar16);
code_r0x0040495b:
    cVar6 = (char)puVar13;
    *(char *)puVar13 = (char)*puVar13 + cVar6;
    uVar19 = (undefined3)((uint)puVar13 >> 8);
    cVar7 = cVar6 + '\x02';
    pcVar9 = (char *)CONCAT31(uVar19,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      *param_2 = (uint)(*param_2 + (int)puVar41);
      pbVar44 = pbVar10 + 1;
      out(*pbVar10,(short)param_2);
      puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                 CONCAT11((char)((uint)puVar33 >> 8) +
                                          *(byte *)((int)puVar33 + -0x3b),(char)puVar33));
      goto code_r0x00404931;
    }
    *pcVar9 = *pcVar9 + cVar7;
    pbVar10 = (byte *)(CONCAT31(uVar19,cVar6 + '}') + (int)puVar41);
    *pbVar10 = *pbVar10 + cVar6 + '}';
    *pcStack_10 = *pcStack_10 + (char)pcStack_10;
    puVar36 = (uint *)CONCAT22((short)((uint)iStack_14 >> 0x10),
                               CONCAT11((byte)((uint)iStack_14 >> 8) | *(byte *)(iStack_14 * 3),
                                        (char)iStack_14));
    puVar45 = (uint *)(pbStack_2c + *(int *)((int)puStack_1c + 0x6f));
    pcVar9 = pcStack_10;
    param_2 = puStack_18;
    puVar33 = puStack_1c;
    puVar41 = puStack_24;
    pbVar10 = pbStack_28;
    while( true ) {
      cVar6 = (char)pcVar9;
      *pcVar9 = *pcVar9 + cVar6;
      uVar19 = (undefined3)((uint)pcVar9 >> 8);
      cVar7 = cVar6 + '\x02';
      pcVar9 = (char *)CONCAT31(uVar19,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) break;
      *pcVar9 = *pcVar9 + cVar7;
      pcVar9 = (char *)CONCAT31(uVar19,cVar6 + '}');
      out(*(undefined4 *)pbVar10,(short)param_2);
      *pcVar9 = *pcVar9 + cVar6 + '}';
code_r0x00404982:
      puStack_38 = (uint *)CONCAT22(puStack_38._2_2_,in_ES);
      *(byte *)puStack_30 = (byte)*puStack_30 + (char)in_ES;
      puVar36 = (uint *)CONCAT22((short)((uint)pbStack_34 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_34 >> 8) |
                                          pbStack_34[(int)pbStack_48],(char)pbStack_34));
      puVar45 = (uint *)(iStack_4c + *(int *)((int)puStack_3c + 0x71));
      puVar21 = puStack_30;
      param_2 = puStack_38;
      puVar33 = puStack_3c;
      pbVar10 = pbStack_48;
      while( true ) {
        cVar6 = (char)puVar21;
        *(byte *)puVar21 = (byte)*puVar21 + cVar6;
        uVar19 = (undefined3)((uint)puVar21 >> 8);
        cVar7 = cVar6 + '\x02';
        puVar13 = (ushort *)CONCAT31(uVar19,cVar7);
        puVar41 = puStack_44;
        if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar13 = (char)*puVar13 + cVar7;
        bVar4 = cVar6 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar4);
        pbVar44 = (byte *)(iVar16 + (int)puStack_44);
        bVar5 = *pbVar44;
        *pbVar44 = *pbVar44 + bVar4;
        uVar35 = *puVar36;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
        pcVar9 = (char *)(((iVar16 - uVar35) - (uint)CARRY1(bVar5,bVar4)) + -0x727b0317);
        cVar6 = (char)pcVar9;
        *pcVar9 = *pcVar9 + cVar6;
        uVar19 = (undefined3)((uint)pcVar9 >> 8);
        cVar7 = cVar6 + '\x02';
        pcVar9 = (char *)CONCAT31(uVar19,cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) break;
        *pcVar9 = *pcVar9 + cVar7;
        bVar4 = cVar6 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar4);
        pbVar44 = (byte *)(iVar16 + (int)puStack_44);
        bVar5 = *pbVar44;
        *pbVar44 = *pbVar44 + bVar4;
        puVar21 = (uint *)((iVar16 - *puVar36) - (uint)CARRY1(bVar5,bVar4));
        puVar41 = param_2;
code_r0x004049b4:
        *(byte *)puVar41 = (byte)*puVar41 + (char)puVar36;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                   ((char)puVar41 - (byte)*puVar45) - *pbVar10);
        bVar4 = pbVar10[0x72];
        *puVar21 = *puVar21 & (uint)puVar36;
        pbVar44 = (byte *)((int)puVar21 + 2);
        *pbVar44 = *pbVar44 + (char)((uint)puVar41 >> 8);
        bVar5 = *pbVar44;
        puVar27 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),(char)puVar33 - bVar4);
        pbVar44 = pbVar10;
        while (puVar33 = puVar27, pbVar10 = pbVar44, (POPCOUNT(bVar5) & 1U) == 0) {
          cVar6 = (char)puVar21;
          *(byte *)puVar21 = (byte)*puVar21 + cVar6;
          uVar19 = (undefined3)((uint)puVar21 >> 8);
          cVar7 = cVar6 + '\x03';
          pbVar12 = (byte *)CONCAT31(uVar19,cVar7);
          pbVar10 = pbVar44 + 4;
          out(*(undefined4 *)pbVar44,(short)param_2);
          in_SS = pbStack_2c._0_2_;
          *pbVar12 = *pbVar12 + cVar7;
          cVar30 = (char)puVar36;
          puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                     CONCAT11((byte)((uint)puVar36 >> 8) | *pbVar12,cVar30));
          *(int *)pbVar12 = *(int *)pbVar12 - (int)pbVar12;
          *(byte *)param_2 = (byte)*param_2 + cVar30;
          cVar30 = (char)puVar27 - pbVar44[6];
          puVar33 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),cVar30);
          if ((POPCOUNT(cVar30) & 1U) != 0) {
            pbVar44 = (byte *)((int)puVar45 + (int)puStack_44 * 2);
            *pbVar44 = *pbVar44 + cVar7;
            ppbVar43 = (byte **)puStack_44;
            goto code_r0x00404a51;
          }
          *pbVar12 = *pbVar12 + cVar7;
          puVar21 = (uint *)CONCAT31(uVar19,cVar6 + 'r');
          *(byte *)puVar21 = (byte)*puVar21;
          pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,uStack_40);
          do {
            puVar45 = (uint *)((int)puVar45 + puVar33[0x1c]);
            bVar5 = (byte)puVar21;
            *(byte *)puVar21 = (byte)*puVar21 + bVar5;
            uVar19 = (undefined3)((uint)puVar21 >> 8);
            bVar5 = (bVar5 + 0x6e) - (0x90 < bVar5);
            puVar21 = (uint *)CONCAT31(uVar19,bVar5);
            cVar6 = (char)puVar36;
            *(byte *)param_2 = (byte)*param_2 + cVar6;
            bVar4 = (char)((uint)puVar36 >> 8) - pbVar10[2];
            puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar4,cVar6));
            puVar41 = param_2;
            if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar21 = (byte)*puVar21 + bVar5;
            bVar37 = bVar5 + 2;
            puVar21 = (uint *)CONCAT31(uVar19,bVar37);
            ppbVar42 = (byte **)puStack_44;
            if ((POPCOUNT(bVar37) & 1U) == 0) goto code_r0x004049f5;
            pbVar10 = pbStack_2c;
          } while (0xfd < bVar5);
          *(byte *)puVar21 = (byte)*puVar21 | bVar37;
          puVar27 = puVar33;
          pbVar44 = pbStack_2c;
          bVar5 = (byte)*puVar21;
        }
      }
    }
    *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
    pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar5 = (byte)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar5;
    uVar19 = (undefined3)((uint)puVar21 >> 8);
    bVar37 = bVar5 + 0x6f;
    pbVar12 = (byte *)CONCAT31(uVar19,bVar37);
    *puVar36 = (*puVar36 - (int)pbVar12) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    pbVar44 = (byte *)((int)ppbVar42 + *(int *)((int)puVar45 + 0x1a));
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    uVar20 = (undefined3)((uint)param_2 >> 8);
    bVar5 = (byte)param_2 | *pbVar10;
    param_2 = (uint *)CONCAT31(uVar20,bVar5);
    *(byte *)puVar36 = (byte)*puVar36 + 1;
    cVar7 = bVar37 - *pbVar12;
    pbVar10 = pbVar10 + (-(uint)(bVar37 < *pbVar12) - *(int *)CONCAT31(uVar19,cVar7));
    uVar14 = CONCAT31(uVar19,cVar7 + *(char *)CONCAT31(uVar19,cVar7));
    bVar46 = CARRY1(bRam14110000,bVar4);
    bRam14110000 = bRam14110000 + bVar4;
    puVar21 = (uint *)((int)puVar33 + (int)pbVar10 * 2);
    uVar35 = *puVar21;
    uVar1 = uVar14 + *puVar21;
    puVar15 = (undefined4 *)(uVar1 + bVar46);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar15 = uVar2;
    puStack_30 = (uint *)CONCAT22(puStack_30._2_2_,uStack_40);
    uVar35 = (uint)(CARRY4(uVar14,uVar35) || CARRY4(uVar1,(uint)bVar46));
    puVar21 = (uint *)((int)puVar15 + uRam7d020511 + uVar35);
    ppbVar40 = &pbStack_34;
    ppbVar43 = &pbStack_34;
    ppbVar42 = &pbStack_34;
    pbStack_34 = pbVar44;
    cVar7 = '\x03';
    do {
      pbVar44 = pbVar44 + -4;
      ppbVar40 = ppbVar40 + -1;
      *ppbVar40 = (byte *)*(undefined4 *)pbVar44;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    pbStack_2c = (byte *)&pbStack_34;
    pbRam00c82802 =
         (byte *)((int)puVar21 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar15,uRam7d020511) ||
                      CARRY4((int)puVar15 + uRam7d020511,uVar35))));
    bVar37 = *pbVar10;
    cVar7 = (char)puVar21;
    *pbVar10 = *pbVar10 + cVar7;
  } while (SCARRY1(bVar37,cVar7) == (char)*pbVar10 < '\0');
  *(byte *)puVar21 = (byte)*puVar21 + cVar7;
  iVar16 = CONCAT31((int3)((uint)puVar21 >> 8),cVar7 + '\x11') + 0xc57b;
  bVar4 = (byte)iVar16;
  *param_2 = *param_2 ^ (uint)puVar33;
  param_2 = (uint *)CONCAT31(uVar20,bVar5 + (byte)*puVar36);
  iVar16 = (CONCAT31((int3)((uint)iVar16 >> 8),bVar4 + 0x6f) - (uint)(0x90 < bVar4)) + -0x18093a86;
  cVar7 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar6 = cVar7 + '\x02';
  pbVar44 = (byte *)CONCAT31(uVar19,cVar6);
  if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar44 = *pbVar44 + cVar6;
  pbVar12 = (byte *)CONCAT31(uVar19,cVar7 + 'q');
  ppbVar43 = &pbStack_34;
code_r0x00404a51:
  pbVar44 = pbVar12 + 1;
  cVar6 = (char)pbVar44;
  *pbVar44 = *pbVar44 + cVar6;
  puVar33 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),
                             CONCAT11((char)((uint)puVar27 >> 8) - cVar6,cVar30));
  *pbVar44 = *pbVar44 + cVar6;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar36);
  pbVar12 = pbVar12 + 0x757b03;
  pbVar44 = (byte *)((int)puVar45 + (int)ppbVar43 * 2);
  cVar6 = (char)pbVar12;
  *pbVar44 = *pbVar44 + cVar6;
  *pbVar12 = *pbVar12 + cVar6;
  *pbVar10 = *pbVar10 - (char)((uint)pbVar12 >> 8);
  *pbVar12 = *pbVar12 + cVar6;
  puVar45 = (uint *)((int)puVar45 - *(int *)((int)ppbVar43 + -0x3a));
  *pbVar12 = *pbVar12 + cVar6;
  pbVar44 = (byte *)(CONCAT31((int3)((uint)pbVar12 >> 8),cVar6 + '\x11') + 0x757b02);
  pbVar12 = (byte *)((int)puVar45 + (int)ppbVar43 * 2);
  bVar4 = (byte)pbVar44;
  *pbVar12 = *pbVar12 + bVar4;
  bVar5 = *pbVar44;
  *pbVar44 = *pbVar44 + bVar4;
  puStack_50 = (uint *)CONCAT22(puStack_50._2_2_,uStack_40);
  pbRam011006fe = pbVar44 + (int)(pbRam011006fe + CARRY1(bVar5,bVar4));
  bVar5 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  if (!CARRY1(bVar5,bVar4)) goto code_r0x00404add;
  do {
    bVar5 = (byte)pbVar44;
    *pbVar44 = *pbVar44 + bVar5;
    bVar37 = (byte)puVar36;
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((byte)((uint)puVar36 >> 8) | *pbVar44,bVar37));
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    uVar19 = (undefined3)((uint)pbVar44 >> 8);
    bVar5 = bVar5 + in_AF * '\x06';
    cVar6 = bVar5 + (0x90 < (bVar5 & 0xf0) | in_AF * (0xf9 < bVar5)) * '`';
    pcVar9 = (char *)CONCAT31(uVar19,cVar6);
    *pcVar9 = *pcVar9 + cVar6;
    puVar45 = (uint *)((int)puVar45 - *(int *)((int)ppbVar43 + -0x39));
    *pcVar9 = *pcVar9 + cVar6;
    iVar16 = CONCAT31(uVar19,cVar6 + '\x11') + 0xc57b;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x11') + 0xc67b;
    bVar5 = (byte)iVar16;
    bVar4 = bVar5 + 0x6f;
    pbVar44 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar4);
    *puVar36 = (*puVar36 - (int)pbVar44) - (uint)(0x90 < bVar5);
    uVar35 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar37;
    pbRam011106fe = pbVar44 + (int)(pbRam011106fe + CARRY1((byte)uVar35,bVar37));
    bVar5 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    if (!CARRY1(bVar5,bVar4)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar44 = pbVar44 + *(int *)pbVar44;
    bVar5 = (byte)puVar36;
    bVar4 = (byte)((uint)puVar36 >> 8) | *pbVar44;
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar4,bVar5));
    *pbVar44 = *pbVar44 - (char)pbVar44;
    *(byte *)puVar33 = (byte)*puVar33 + bVar4;
    out(*(undefined4 *)pbVar10,(short)param_2);
    *puVar36 = *puVar36 & (uint)pbVar44;
    uVar35 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    pbVar44 = pbVar44 + (uint)CARRY1((byte)uVar35,bVar5) + *(int *)(pbVar10 + 4);
    *pbVar44 = *pbVar44 + (char)pbVar44;
    *(byte *)puVar36 = (byte)*puVar36 + (char)param_2;
    pbVar10 = pbVar10 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar10,(short)param_2);
      pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),(byte)pbVar44 & (byte)*puVar36);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar33[5],
                                          (char)param_2));
      *(byte **)pbVar44 = pbVar44 + *(int *)pbVar44;
      pbVar10 = pbVar10 + 4;
code_r0x00404ad4:
      puStack_50 = (uint *)CONCAT22(puStack_50._2_2_,uStack_40);
      pbVar44 = (byte *)((uint)pbVar44 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar44;
code_r0x00404add:
      bVar5 = (byte)pbVar44;
      uVar19 = (undefined3)((uint)pbVar44 >> 8);
      cVar6 = bVar5 + 8;
      pbVar44 = (byte *)CONCAT31(uVar19,cVar6);
      if (SCARRY1(bVar5,'\b') == cVar6 < '\0') break;
      *pbVar44 = *pbVar44 + cVar6;
      cVar6 = bVar5 + 10;
      piVar17 = (int *)CONCAT31(uVar19,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar6;
      puVar21 = (uint *)CONCAT31(uVar19,bVar5 + 0x7c);
      *puVar21 = *puVar21 & (uint)puVar36;
      *(char *)((int)puVar21 + 0x11) = *(char *)((int)puVar21 + 0x11) + (char)((uint)param_2 >> 8);
      cVar6 = (char)((int)puVar21 + 0xc67b);
      uVar19 = (undefined3)((uint)((int)puVar21 + 0xc67b) >> 8);
      bVar5 = cVar6 + 8;
      pbVar44 = (byte *)CONCAT31(uVar19,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar44 = *pbVar44 + bVar5;
        cRam02060000 = cVar6 + 'w';
        puVar21 = (uint *)CONCAT31(uVar19,cRam02060000);
        *(byte *)puVar21 = (byte)*puVar21 + cRam02060000;
        cVar6 = (char)puVar36;
        puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                   CONCAT11((byte)((uint)puVar36 >> 8) | (byte)*puVar21,cVar6));
        *puVar21 = *puVar21 - (int)puVar21;
        *(byte *)param_2 = (byte)*param_2 + cVar6;
        pbVar44 = pbVar10 + 4;
        out(*(undefined4 *)pbVar10,(short)param_2);
        pbVar10 = pbVar44;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar9 = (char *)((uint)puVar21 | *puVar21);
        goto code_r0x00404b89;
      }
      bVar4 = *pbVar44;
      *pbVar44 = *pbVar44 + bVar5;
      *(byte **)pbVar10 = pbVar44 + (uint)CARRY1(bVar4,bVar5) + *(int *)pbVar10;
    }
    *pbVar10 = *pbVar10 + 1;
    *puVar36 = (uint)(pbVar44 + (uint)(0xf7 < bVar5) + *puVar36);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'r');
    piVar17 = (int *)((uint)puVar21 | *puVar21);
    param_2 = puStack_50;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar16 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar5 = (byte)iVar16;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),bVar5 + 0x6f);
    *puVar36 = (*puVar36 - iVar16) - (uint)(0x90 < bVar5);
    cVar6 = (char)puVar36;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    bVar4 = (byte)((uint)puVar33 >> 8);
    bVar31 = (byte)((uint)param_2 >> 8) | bVar4;
    pcVar11 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar31,(byte)param_2));
    piVar17 = (int *)(iVar16 + 0x73060001);
    *(byte *)puVar36 = (byte)*puVar36 & (byte)piVar17;
    *pcVar11 = *pcVar11 + cVar6;
    bVar37 = (byte)((uint)puVar36 >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar37;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar16 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *(byte *)puVar33 = (byte)*puVar33 + bVar37;
    pcVar9 = (char *)((uint)piVar17 | *puVar45);
    *pcVar11 = *pcVar11 - bVar37;
    bVar5 = (byte)pcVar9;
    *pcVar9 = *pcVar9 + bVar5;
    ppbVar43 = (byte **)(((int)ppbVar43 - iVar16) - *(int *)(pcVar9 + ((int)ppbVar43 - iVar16)));
    uVar25 = (undefined2)((uint)puVar33 >> 0x10);
    bVar23 = (byte)puVar33;
    cVar7 = bVar4 + *(byte *)((int)puVar33 + 0x76);
    pbVar12 = (byte *)CONCAT22(uVar25,CONCAT11(cVar7,bVar23));
    *pcVar9 = *pcVar9 + bVar5;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    uVar14 = CONCAT31(uVar19,bVar5 + 7);
    puVar33 = (uint *)((int)ppbVar43 + -0x1faeef1);
    uVar35 = *puVar33;
    uVar1 = *puVar33 + uVar14;
    *puVar33 = uVar1 + (0xf8 < bVar5);
    puStack_50 = (uint *)CONCAT22(puStack_50._2_2_,uStack_40);
    puVar33 = puStack_50;
    bVar4 = bVar5 + 7 + (byte)*puVar36 +
            (CARRY4(uVar35,uVar14) || CARRY4(uVar1,(uint)(0xf8 < bVar5)));
    puVar21 = (uint *)CONCAT31(uVar19,bVar4);
    bVar5 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    if (CARRY1(bVar5,bVar4)) break;
    *(byte *)puVar21 = (byte)*puVar21 + bVar4;
    puVar33 = (uint *)CONCAT22(uVar25,CONCAT11(cVar7 + pbVar12[0x76],bVar23));
    uStack_54 = uStack_40;
  }
  *(byte *)puVar21 = (byte)*puVar21 + bVar4;
  uVar20 = (undefined3)((uint)pcVar11 >> 8);
  bVar26 = (byte)param_2 | *pbVar12;
  param_2 = (uint *)CONCAT31(uVar20,bVar26);
  pcRam2b060000 = (char *)CONCAT31(uVar19,bVar4 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar4 + 0x39)) - (0xd7 < (byte)(bVar4 + 0x11));
  bVar5 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar37;
  pbVar44 = pbVar10 + 4;
  out(*(undefined4 *)pbVar10,(short)param_2);
  bVar5 = (bVar4 + 0x37) - CARRY1(bVar5,bVar37);
  piVar17 = (int *)CONCAT31(uVar19,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    iVar16 = CONCAT31(uVar19,bVar5 + 0x11) + 0xc77b;
    pcVar9 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + 'r');
    pcVar9[0x28] = pcVar9[0x28] + bVar31;
code_r0x00404b89:
    cVar6 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar6;
    *pcVar9 = *pcVar9 + cVar6;
    *pcVar9 = *pcVar9 + cVar6;
    puVar13 = (ushort *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6 + 'r');
    uVar8 = (ushort)puVar13 | *puVar13;
    pcVar9 = (char *)CONCAT22((short)((uint)pcVar9 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*(undefined4 *)pbVar44,(short)param_2);
    *pcVar9 = *pcVar9 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar5;
  pbVar28 = (byte *)((int)ppbVar43 - *(int *)((int)puVar45 + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar9 = (char *)CONCAT31(uVar20,bVar26 | *pbVar12);
  puVar45 = (uint *)(pbVar10 + 8);
  out(*(undefined4 *)pbVar44,(short)pcVar9);
  uVar35 = *puVar36;
  *pcVar9 = *pcVar9 + cVar6;
  uVar35 = CONCAT31(uVar19,bVar5 & (byte)uVar35) | 0x767b02;
  *(byte *)((int)puVar36 + (int)pcVar9) = *(byte *)((int)puVar36 + (int)pcVar9) + (char)uVar35;
  iVar16 = uVar35 + 0xc67b;
  cVar30 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar38 = cVar30 + 'r';
  pcVar9 = (char *)CONCAT31(uVar19,cVar38);
  pcVar9[0x28] = pcVar9[0x28] + bVar31;
  *pcVar9 = *pcVar9 + cVar38;
  uVar24 = (undefined2)((uint)puVar36 >> 0x10);
  bVar37 = bVar37 | *(byte *)((int)puStack_50 + -0x5e);
  puVar36 = (uint *)CONCAT22(uVar24,CONCAT11(bVar37,cVar6));
  *pcVar9 = *pcVar9 + cVar38;
  puStack_50 = (uint *)CONCAT22(puStack_50._2_2_,uStack_54);
  pbVar44 = (byte *)CONCAT22(uVar25,CONCAT11(cVar7 + pbVar12[0x76],bVar23));
  *pcVar9 = *pcVar9 + cVar38;
  puVar21 = (uint *)CONCAT31(uVar19,cVar30 + -0x1c);
  pcVar9 = (char *)((uint)puVar21 | *puVar21);
  bVar46 = (POPCOUNT((uint)pcVar9 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar9;
  puVar21 = puStack_50;
  pbVar12 = pbVar44;
  pbVar34 = pbVar28;
  puVar41 = puVar33;
  uVar25 = uStack_54;
  if (!bVar46) goto code_r0x00404ca8;
  *pcVar9 = *pcVar9 + cRam02060000;
  puVar21 = (uint *)CONCAT31((int3)((uint)pcVar9 >> 8),cRam02060000 + 'r');
  *puVar21 = *puVar21 & (uint)puVar36;
  *(char *)((int)puVar21 + 0x11) = *(char *)((int)puVar21 + 0x11) + (char)((ushort)uStack_54 >> 8);
  iVar16 = (int)puVar21 + 0xc77b;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cRam02060000 = (char)iVar16 + '\t';
  pbVar12 = (byte *)CONCAT31(uVar19,cRam02060000);
  out(*puVar45,uStack_54);
  *pbVar12 = *pbVar12 + cRam02060000;
  puVar41 = (uint *)CONCAT22(uVar24,CONCAT11(bVar37 | *pbVar12,cVar6));
  *(int *)pbVar12 = *(int *)pbVar12 - (int)pbVar12;
  *(byte *)puStack_50 = (byte)*puStack_50 + cVar6;
  out(*(undefined4 *)(pbVar10 + 0xc),uStack_54);
  puVar27 = puStack_50;
  puVar45 = (uint *)(pbVar10 + 0x10);
  uVar25 = uStack_54;
  if ((POPCOUNT((byte)*puStack_50) & 1U) != 0) goto code_r0x00404cca;
  *pbVar12 = *pbVar12 + cRam02060000;
  puVar13 = (ushort *)CONCAT31(uVar19,(char)iVar16 + '{');
  uVar8 = (ushort)puVar13 | *puVar13;
  pcVar9 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),uVar8);
  bVar5 = (byte)uVar8;
  out(*(uint *)(pbVar10 + 0x10),uStack_54);
  pbVar12 = (byte *)((int)puVar41 + 1);
  bRam11060000 = bVar5;
  *pcVar9 = *pcVar9 + bVar5;
  puVar36 = (uint *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                             CONCAT11((byte)((uint)pbVar12 >> 8) | bRam110cde91,(char)pbVar12));
  pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),bVar5 - 7);
  *puVar33 = (uint)(pcVar9 + (uint)(bVar5 < 7) + *puVar33);
  puVar45 = (uint *)(pbVar10 + 0x18);
  out(*(undefined4 *)(pbVar10 + 0x14),uStack_54);
  puVar21 = (uint *)((int)puStack_50 + 1);
  *pcVar9 = *pcVar9 + (bVar5 - 7);
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),bVar23 | (byte)(uVar8 >> 8));
  do {
    bVar5 = (char)pcVar9 - *pcVar9;
    uVar35 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + bVar5;
    cVar6 = bVar5 - CARRY1((byte)uVar35,bVar5);
    *(byte *)puVar21 = *(byte *)puVar21 + cVar6;
    cVar7 = (char)((uint)puVar36 >> 8);
    *(byte *)(puVar33 + 0x673b40) = (byte)puVar33[0x673b40] + cVar7;
    puVar18 = (uint *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6);
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
    *(byte *)puVar21 = *(byte *)puVar21 + cVar6;
    *(byte **)(pbVar12 + 0x58) = (byte *)(*(int *)(pbVar12 + 0x58) + (int)puVar45);
    puVar41 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar36 >> 0x10),
                                               CONCAT11(cVar7 + (char)((uint)pcVar9 >> 8),
                                                        (char)puVar36)) >> 8),
                               (char)puVar36 + *(char *)((int)puVar18 * 2));
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
    *(byte *)puVar45 = (byte)*puVar45 + (char)pbVar12;
    puVar27 = puVar21;
    pbVar44 = pbVar12;
_ctor:
    bVar4 = (byte)((uint)puVar41 >> 8);
    uVar35 = *puVar18;
    bVar5 = (byte)puVar41;
    puVar18 = (uint *)((int)puVar18 + (uint)CARRY1(bVar4,(byte)*puVar18) + *puVar18);
    *(byte *)puVar27 = *(byte *)puVar27 + bVar5;
    cVar6 = bVar5 - *(byte *)((int)puVar27 + 3);
    puVar36 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar41 >> 0x10),
                                               CONCAT11(bVar4 + (byte)uVar35,bVar5)) >> 8),cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      if (*(byte *)((int)puVar27 + 3) <= bVar5) {
        *puVar18 = (uint)(*puVar18 + (int)puVar18);
        puVar27 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),(byte)puVar27 | *pbVar44);
        puVar18 = puVar18 + 0x230e;
        puVar41 = puVar36;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
    cVar6 = (char)puVar18 + '\x02';
    pcVar9 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar6);
    bVar46 = (POPCOUNT(cVar6) & 1U) == 0;
    puVar21 = puVar27;
    pbVar12 = pbVar44;
    pbVar34 = pbVar28;
    puVar41 = puVar33;
    uVar25 = puStack_44._0_2_;
code_r0x00404ca8:
    puStack_44._0_2_ = uVar25;
    pcVar11 = pcStack_20;
    puVar27 = (uint *)pbStack_28;
    pbVar44 = pbStack_2c;
    pbVar28 = pbStack_34;
    puVar33 = puStack_3c;
    if (bVar46) break;
    *(byte *)puVar21 = *(byte *)puVar21 + (char)puVar36;
    pbVar28 = pbVar34;
    puVar33 = puVar41;
  } while( true );
  *pcVar9 = *pcVar9 + (char)pcVar9;
  bVar5 = (byte)pcStack_20;
  *pcStack_20 = *pcStack_20 + bVar5;
  puVar41 = (uint *)CONCAT22((short)((uint)puStack_24 >> 0x10),
                             CONCAT11((byte)((uint)puStack_24 >> 8) | *pbStack_28,(char)puStack_24))
  ;
  *pbStack_2c = *pbStack_2c + (char)pbStack_2c;
  pbVar10 = (byte *)((int)pcVar11 * 2);
  *pbVar10 = *pbVar10 ^ bVar5;
  uVar3 = *(undefined6 *)pcVar11;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar12 = (byte *)uVar3;
  bVar4 = (byte)uVar3;
  *pbVar12 = *pbVar12 + bVar4;
  bVar5 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar4;
  puVar45 = (uint *)((int)puVar41 + 0x11673);
  uVar35 = *puVar45;
  uVar1 = *puVar45;
  *puVar45 = (uint)((byte *)((int)puVar27 + uVar1) + CARRY1(bVar5,bVar4));
  puStack_3c = (uint *)CONCAT22(puStack_3c._2_2_,puStack_44._0_2_);
  pbVar12 = pbVar12 + (uint)(CARRY4(uVar35,(uint)puVar27) ||
                            CARRY4((int)puVar27 + uVar1,(uint)CARRY1(bVar5,bVar4))) +
                      *(int *)((int)puVar41 + (int)puVar27);
  puVar45 = puStack_38;
  uVar25 = puStack_44._0_2_;
code_r0x00404cca:
  puStack_44._0_2_ = uVar25;
  cVar6 = (char)pbVar12 + '\x04';
  puVar18 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
  if (SCARRY1((char)pbVar12,'\x04') == cVar6 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  puVar21 = puVar45 + 1;
  out(*puVar45,(short)puVar27);
  uVar35 = *puVar41;
  bVar5 = *(byte *)puVar27;
  bVar4 = (byte)puVar41;
  *(byte *)puVar27 = *(byte *)puVar27 + bVar4;
  iVar16 = (CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + '\x03') & uVar35) + iRam00008c38;
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar27;
  pcVar9 = (char *)(iVar16 + (uint)CARRY1(bVar5,bVar4) + 0x1246f);
  bVar5 = *(byte *)puVar27;
  uVar19 = (undefined3)((uint)puVar41 >> 8);
  puVar36 = (uint *)CONCAT31(uVar19,bVar4 | bVar5);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar9 >> 8);
  puVar18 = (uint *)(CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + *pcVar9) + 0x1fbeef2);
  uVar35 = *puVar18;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  if (CARRY4(uVar35,(uint)puVar18)) {
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    pcVar9 = (char *)CONCAT31(uVar19,bVar4 | bVar5 | bRam00282809);
    cVar6 = (char)((uint)puVar41 >> 8);
    *pbVar44 = *pbVar44 + cVar6;
    *pcVar9 = *pcVar9 - cVar6;
    *(byte *)puVar18 = *(byte *)puVar18 + (char)puVar18;
    iVar16 = (int)pcVar9 - *(int *)pbVar44;
    puVar45 = puVar45 + 2;
    out(*puVar21,(short)puVar27);
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    puVar36 = (uint *)CONCAT22((short)((uint)iVar16 >> 0x10),
                               CONCAT11((byte)((uint)iVar16 >> 8) | bRambf73070b,(char)iVar16));
code_r0x00404d15:
    uVar35 = *puVar18;
    bVar5 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar5;
    puVar21 = puVar45 + 1;
    out(*puVar45,(short)puVar27);
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar4 = bVar5 + in_AF * '\x06';
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),
                               bVar4 + (0x90 < (bVar4 & 0xf0) |
                                       CARRY1((byte)uVar35,bVar5) | in_AF * (0xf9 < bVar4)) * '`');
  }
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar4 = (byte)puVar18 | (byte)*puVar33;
  puVar45 = puVar21 + 1;
  uVar24 = SUB42(puVar27,0);
  out(*puVar21,uVar24);
  *(byte *)puVar36 = (byte)*puVar36 - bVar4;
  bVar5 = *(byte *)puVar27;
  bVar37 = (byte)puVar36;
  *(byte *)puVar27 = *(byte *)puVar27 + bVar37;
  iVar16 = CONCAT31((int3)((uint)puVar18 >> 8),bVar4) + *puVar45 + (uint)CARRY1(bVar5,bVar37);
  pbVar10 = pbVar28 + -*puVar27;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar6 = (char)iVar16 + (byte)*puVar45 + (pbVar28 < (byte *)*puVar27);
  puVar41 = (uint *)CONCAT31(uVar19,cVar6);
  bVar5 = (byte)((uint)puVar36 >> 8);
  *(byte *)puVar36 = (byte)*puVar36 - bVar5;
  *puVar41 = (uint)(*puVar41 + (int)puVar41);
  bVar37 = bVar37 | *(byte *)((int)puVar27 + (int)puVar41);
  uVar25 = (undefined2)((uint)puVar36 >> 0x10);
  if ((POPCOUNT(bVar37) & 1U) == 0) {
    *(byte *)puVar41 = (byte)*puVar41 + cVar6;
    pcVar9 = (char *)CONCAT31(uVar19,cVar6 + '\x12');
    *pcVar9 = *pcVar9 + bVar5;
    puVar41 = (uint *)CONCAT31(uVar19,(cVar6 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar36 >> 8),bVar37));
    bVar4 = *(byte *)puVar27;
    *(byte *)puVar27 = *(byte *)puVar27 + bVar37;
    if (!CARRY1(bVar4,bVar37)) {
      pbVar12 = (byte *)((uint)puVar41 | *puVar41);
      out(*puVar45,uVar24);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      bVar4 = *pbVar12;
      piVar17 = (int *)CONCAT22(uVar25,CONCAT11(bVar5 | bVar4,bVar37));
      iVar16 = (int)pbVar12 - *piVar17;
      *(byte *)puVar27 = *(byte *)puVar27 + bVar37;
      puVar41 = puVar21 + 3;
      out(puVar21[2],uVar24);
      uRam12060000 = (undefined1)iVar16;
      *(char *)((int)piVar17 + iVar16) = *(char *)((int)piVar17 + iVar16) - (bVar5 | bVar4);
      *(byte *)puVar27 = *(byte *)puVar27 + bVar37;
      pbVar12 = (byte *)(iVar16 + -0x120edecd);
      *(byte *)puVar41 = (byte)*puVar41 + 1;
      bVar5 = *pbVar12;
      bVar4 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar4;
      pbVar10 = pbVar10 + ((-1 - *(int *)((int)puVar33 + 0x42)) - (uint)CARRY1(bVar5,bVar4));
      *pbVar12 = *pbVar12 + bVar4;
      bVar31 = (byte)pbVar44 | (byte)((uint)pbVar12 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar12;
      bVar5 = *(byte *)puVar27;
      pcVar9 = (char *)(((uint)pbVar12 | 0x11) + 0x511072c);
      puVar45 = puVar21 + 4;
      out(*puVar41,uVar24);
      puVar27 = (uint *)((int)puVar27 + 1);
      *pcVar9 = *pcVar9 + (char)pcVar9;
      bVar4 = (byte)((uint)pcVar9 >> 8);
      pbVar44 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar44 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar44 >> 8) | bVar5,bVar31)
                                                ) >> 8),bVar31 | bVar4);
      uVar19 = (undefined3)((uint)pcVar9 >> 8);
      bVar5 = (char)pcVar9 - *pcVar9;
      pcVar9 = (char *)CONCAT31(uVar19,bVar5);
      *pcVar9 = *pcVar9 + bVar5;
      *(int *)((int)pcVar9 * 2) = (int)(pbVar44 + *(int *)((int)pcVar9 * 2));
      *(byte *)puVar27 = *(byte *)puVar27 + bVar5;
      *pbVar10 = *pbVar10 + bVar4;
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar35 = CONCAT31(uVar19,bVar5 + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar35;
      pbVar12 = (byte *)CONCAT22((short)(uVar35 >> 0x10),CONCAT11(bVar4 + in_AF,bVar5));
      *(byte *)puVar45 = (byte)*puVar45 + bVar37;
      *pbVar12 = *pbVar12 + bVar5;
      *pbVar12 = *pbVar12 + bVar5;
      bVar46 = CARRY1(bVar5,*pbVar12);
      puVar41 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5 + *pbVar12);
      goto code_r0x00404d9a;
    }
    *pbVar44 = *pbVar44 - (char)puVar27;
  }
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar41;
  bVar46 = false;
  piVar17 = (int *)CONCAT22(uVar25,CONCAT11(bVar5 | *(byte *)puVar27,bVar37));
code_r0x00404d9a:
  do {
    pbVar28 = (byte *)puVar27;
    *puVar41 = (*puVar41 - (int)puVar41) - (uint)bVar46;
    bVar5 = (byte)((uint)piVar17 >> 8);
    uVar25 = (undefined2)((uint)piVar17 >> 0x10);
    bVar4 = (byte)piVar17;
    bVar37 = bVar5 + (byte)iRam00000c00;
    pbVar12 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar5,(byte)iRam00000c00));
    *pbVar28 = *pbVar28 + bVar4;
    pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),(char)pbVar44 - (byte)*puVar45);
    bVar5 = *pbVar12;
    puVar41 = (uint *)(pbVar12 + (uint)CARRY1(bVar37,*pbVar12) + *(int *)pbVar12);
    *pbVar28 = *pbVar28 + bVar4;
    cVar7 = ((bVar37 + bVar5) - *pbVar28) + (byte)*puVar41;
    pcVar9 = (char *)CONCAT22(uVar25,CONCAT11(cVar7,bVar4));
    puVar21 = puVar33 + 1;
    uVar35 = in((short)pbVar28);
    *puVar33 = uVar35;
    cVar6 = (char)puVar41;
    *(byte *)puVar41 = (byte)*puVar41 + cVar6;
    uVar19 = (undefined3)((uint)pbVar28 >> 8);
    bVar37 = (byte)pbVar28 | (byte)*puVar45;
    pcVar11 = (char *)CONCAT31(uVar19,bVar37);
    *pcVar9 = *pcVar9 + '\x01';
    bVar5 = (cVar7 - *pcVar11) + (byte)*puVar41;
    pcVar9 = (char *)CONCAT22(uVar25,CONCAT11(bVar5,bVar4));
    puVar33 = puVar33 + 2;
    uVar35 = in((short)pcVar11);
    *puVar21 = uVar35;
    *(byte *)puVar41 = (byte)*puVar41 + cVar6;
    bVar37 = bVar37 | (byte)*puVar45;
    puVar27 = (uint *)CONCAT31(uVar19,bVar37);
    *pcVar9 = *pcVar9 + '\x01';
    bVar46 = bVar4 < *(byte *)((int)puVar27 + 2);
    cVar7 = bVar4 - *(byte *)((int)puVar27 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  *(byte *)puVar41 = (byte)*puVar41 + cVar6;
  bVar4 = cVar6 + 0x7b;
  pbVar12 = (byte *)CONCAT31((int3)((uint)puVar41 >> 8),bVar4);
  pbVar44[(int)pbVar12] = pbVar44[(int)pbVar12] + bVar4;
  puVar21 = puVar45 + 1;
  uVar24 = SUB42(puVar27,0);
  out(*puVar45,uVar24);
  pbVar34 = pbVar44 + -1;
  *pbVar12 = *pbVar12 + bVar4;
  bVar5 = bVar5 | *(byte *)puVar27;
  piVar17 = (int *)CONCAT22(uVar25,CONCAT11(bVar5,cVar7));
  *pbVar12 = *pbVar12 + bVar4;
  *pbVar34 = *pbVar34 + bVar37;
  *pbVar34 = *pbVar34 ^ bVar4;
  *(byte *)puVar27 = *(byte *)puVar27 + bVar5;
  *pbVar12 = *pbVar12 + bVar4;
  do {
    bVar23 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar33 = (byte)*puVar33 + bVar23;
    bVar5 = *pbVar12;
    bVar4 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar4;
    *(byte **)(pbVar44 + 0x17) =
         (byte *)((int)puVar21 + (uint)CARRY1(bVar5,bVar4) + *(int *)(pbVar44 + 0x17));
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    uVar20 = (undefined3)((uint)pbVar12 >> 8);
    bVar4 = bVar4 | (byte)*puVar21;
    puVar33 = (uint *)((int)puVar33 + *(int *)(pbVar10 + -0x34));
    *(char *)CONCAT31(uVar20,bVar4) = *(char *)CONCAT31(uVar20,bVar4) + bVar4;
    bVar5 = bVar4 + 2;
    cVar6 = (char)((uint)pbVar28 >> 8);
    bVar31 = (byte)piVar17;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      pbVar12 = (byte *)CONCAT31(uVar20,bVar4 + 0x15 + (0xfd < bVar4));
      if (0xec < bVar5 || CARRY1(bVar4 + 0x15,0xfd < bVar4)) {
        *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      }
code_r0x00404e60:
      pbVar10 = pbVar10 + -*puVar27;
      bVar5 = *pbVar12;
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      pbVar44 = (byte *)((int)puVar21 + (-(uint)CARRY1(bVar5,(byte)pbVar12) - *(int *)pbVar12));
      pbVar12 = pbVar12 + *(int *)pbVar12;
      puStack_50 = (uint *)CONCAT22(puStack_50._2_2_,in_DS);
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      *(char *)piVar17 = (char)*piVar17 + cVar6;
      bVar5 = *pbVar12;
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      *(byte **)(pbVar34 + (int)puVar27) =
           (byte *)((int)puVar27 +
                   (uint)CARRY1(bVar5,(byte)pbVar12) + *(int *)(pbVar34 + (int)puVar27));
      pbVar12 = pbVar12 + 0x73061314;
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      uVar20 = (undefined3)((uint)piVar17 >> 8);
      bVar31 = bVar31 | *(byte *)puVar27;
      pcVar11 = (char *)CONCAT31(uVar20,bVar31);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      cVar6 = (char)pbVar12 + 'o';
      pcVar9 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
      *pcVar9 = *pcVar9 + cVar6;
      out(*(undefined4 *)pbVar44,uVar24);
      bVar5 = *(byte *)puVar27;
      *(byte *)puVar27 = *(byte *)puVar27 + bVar31;
      pcVar9 = pcVar9 + (uint)CARRY1(bVar5,bVar31) + *puVar33;
      *pcVar9 = *pcVar9 + (char)pcVar9;
      *pcVar11 = *pcVar11 + bVar37;
      puVar21 = (uint *)(pbVar44 + 8);
      out(*(undefined4 *)(pbVar44 + 4),uVar24);
      *(byte *)puVar27 = *(byte *)puVar27 + bVar31;
      piVar17 = (int *)((uint)pcVar9 | *puVar33);
      pcVar11[0x390a0000] = pcVar11[0x390a0000] - bVar23;
      pbVar12 = (byte *)&cRam07000000;
      *(byte *)puVar33 = (byte)*puVar33 - bVar23;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar45 = (uint *)CONCAT31(uVar20,bVar31 | *(byte *)((int)piVar17 + (int)pcVar11));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar23;
      cRam07000000 = cRam07000000 + bVar23;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar44 = (byte *)((int)puVar33 + (int)pbVar10 * 2);
      bVar46 = SCARRY1(*pbVar44,(char)piVar17);
      *pbVar44 = *pbVar44 + (char)piVar17;
      bVar5 = *pbVar44;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar20,bVar5) = *(char *)CONCAT31(uVar20,bVar5) + bVar5;
    bVar4 = bVar4 + 0x71;
    pbVar12 = (byte *)CONCAT31(uVar20,bVar4);
    *pbVar12 = *pbVar12;
    *(byte *)puVar21 = (byte)*puVar21 + 1;
    *piVar17 = (*piVar17 - (int)pbVar12) - (uint)(0x90 < bVar5);
    uVar35 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar4;
    if (!CARRY1((byte)uVar35,bVar4)) goto code_r0x00404e60;
    *pbVar12 = *pbVar12 + bVar4;
    uVar25 = (undefined2)((uint)piVar17 >> 0x10);
    bVar23 = bVar23 | *pbVar12;
    pbVar12 = pbVar12 + -*(int *)pbVar12;
    *pbVar34 = *pbVar34 + bVar23;
    cVar7 = bVar31 - *(byte *)((int)puVar27 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar23,bVar31)) >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  cVar30 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cVar30;
  uVar20 = (undefined3)((uint)pbVar12 >> 8);
  pcVar9 = (char *)CONCAT31(uVar20,cVar30 + '{');
  out(*puVar21,uVar24);
  *pcVar9 = *pcVar9 + cVar30 + '{';
  bVar4 = cVar30 + 0x7e;
  pbVar28 = (byte *)CONCAT31(uVar20,bVar4);
  puVar21 = puVar45 + 3;
  out(puVar45[2],uVar24);
  pbVar12 = pbVar44 + -2;
  *pbVar28 = *pbVar28 + bVar4;
  bVar5 = *(byte *)puVar27;
  puVar45 = (uint *)CONCAT22(uVar25,CONCAT11(bVar23 | bVar5,cVar7));
  *pbVar28 = *pbVar28 + bVar4;
  *pbVar12 = *pbVar12 + bVar37;
  *pbVar12 = *pbVar12 ^ bVar4;
  *(byte *)puVar27 = *(byte *)puVar27 + (bVar23 | bVar5);
  *pbVar28 = *pbVar28 + bVar4;
  *pbVar28 = *pbVar28 + cVar6;
  bVar5 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar4;
  *(byte **)(pbVar44 + 0x18) =
       (byte *)((int)puVar21 + (uint)CARRY1(bVar5,bVar4) + *(int *)(pbVar44 + 0x18));
  *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
  bVar4 = bVar4 | (byte)*puVar21;
  puVar33 = (uint *)((int)puVar33 + *(int *)(pbVar10 + -0x33));
  *(char *)CONCAT31(uVar20,bVar4) = *(char *)CONCAT31(uVar20,bVar4) + bVar4;
  bVar46 = SCARRY1(bVar4,'\x02');
  bVar5 = bVar4 + 2;
  piVar17 = (int *)CONCAT31(uVar20,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    return CONCAT31(uVar20,bVar4 + 0x71);
  }
code_r0x00404ebf:
  bVar4 = (byte)piVar17;
  uVar20 = (undefined3)((uint)piVar17 >> 8);
  if (bVar5 != 0 && bVar46 == (char)bVar5 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    puVar21[(int)puVar33 * 2] =
         (uint)((int)puVar27 + (uint)(0xd2 < bVar4) + puVar21[(int)puVar33 * 2]);
    return CONCAT31(uVar20,bVar4 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar5 = *pbVar12;
  *puVar21 = (uint)(*puVar21 + (int)piVar17);
  bVar31 = (byte)((uint)puVar45 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar31;
  *(byte *)piVar17 = (char)*piVar17 + bVar4;
  pbVar44 = (byte *)(CONCAT31(uVar19,bVar37 | bVar5) - *(int *)pbVar12);
  puVar36 = (uint *)CONCAT31(uVar20,bVar4 + 6);
  *(uint *)(pbVar12 + (int)puVar21 * 2) =
       (int)puVar36 + (uint)(0xf9 < bVar4) + *(int *)(pbVar12 + (int)puVar21 * 2);
  *(byte *)puVar45 = (byte)*puVar45 ^ bVar4 + 6;
  bVar4 = (byte)puVar45;
  *pbVar44 = *pbVar44 + bVar4;
  puVar41 = puVar21 + 1;
  uVar25 = SUB42(pbVar44,0);
  out(*puVar21,uVar25);
  *puVar45 = *puVar45 ^ (uint)puVar36;
  *pbVar44 = *pbVar44 + bVar4;
  puVar27 = (uint *)(pbVar12 + -*(int *)pbVar12);
  *(uint *)((int)puVar33 + 0x31) = *(uint *)((int)puVar33 + 0x31) | (uint)pbVar10;
  *puVar36 = *puVar36 + (int)puVar36;
  puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),CONCAT11(bVar31 | (byte)*puVar27,bVar4))
  ;
  *(byte **)(pbVar44 + 0x6e) = (byte *)(*(int *)(pbVar44 + 0x6e) + (int)puVar41);
  piVar17 = (int *)((uint)puVar36 | *puVar36);
  bVar37 = (byte)puVar27;
  *(byte *)puVar33 = (byte)*puVar33 - bVar37;
  bVar5 = *pbVar44;
  *pbVar44 = *pbVar44 + bVar4;
  if (CARRY1(bVar5,bVar4)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar5 = pbVar44[0x11];
    uVar24 = (undefined2)((uint)puVar27 >> 0x10);
    out(*puVar41,uVar25);
    puVar45 = (uint *)((int)puVar45 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar26 = (byte)((uint)puVar27 >> 8) | bVar5 | *pbVar44;
    pcVar9 = (char *)((int)piVar17 + -0x21000001);
    bVar5 = (byte)pcVar9 | 0x11;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    cVar6 = bVar5 - 7;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6);
    *puVar33 = (uint)(pcVar11 + (uint)(bVar5 < 7) + *puVar33);
    puVar41 = puVar21 + 3;
    out(puVar21[2],uVar25);
    pbVar44 = pbVar44 + 1;
    *pcVar11 = *pcVar11 + cVar6;
    bVar31 = (byte)((uint)pcVar9 >> 8);
    bVar23 = bVar37 | bVar31;
    bVar4 = cVar6 - *pcVar11;
    bVar5 = *(byte *)puVar45;
    *(byte *)puVar45 = *(byte *)puVar45 + bVar4;
    *(char *)CONCAT31(uVar19,bVar4) = *(char *)CONCAT31(uVar19,bVar4) + bVar4 + CARRY1(bVar5,bVar4);
    *pbVar44 = *pbVar44 + bVar4;
    *(byte *)puVar41 = (byte)*puVar41 + bVar23;
    bVar5 = (byte)((uint)pbVar44 >> 8);
    *(byte *)puVar45 = *(byte *)puVar45 + bVar4 + CARRY1((byte)pbVar44,bVar5);
    piVar17 = (int *)CONCAT31(uVar19,bVar4);
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    pbVar44 = (byte *)CONCAT22((short)((uint)pbVar44 >> 0x10),
                               CONCAT11(bVar5 + bVar31,(byte)pbVar44 + bVar5));
    puVar27 = (uint *)CONCAT22(uVar24,CONCAT11(bVar26 + *(char *)(CONCAT31((int3)(CONCAT22(uVar24,
                                                  CONCAT11(bVar26,bVar37)) >> 8),bVar23) + 0x76),
                                               bVar23));
    puStack_44._0_2_ = puStack_50._0_2_;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar9 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar45);
    cVar30 = (char)puVar45;
    *pbVar44 = *pbVar44 + cVar30;
    uVar25 = (undefined2)((uint)puVar27 >> 0x10);
    cVar32 = (char)puVar27;
    cVar39 = (char)((uint)puVar27 >> 8) + *(byte *)((int)puVar27 + 0x75);
    *pcVar9 = *pcVar9 + (char)pcVar9;
    cVar6 = (char)pcVar9 + 'o';
    pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6);
    *pcVar9 = *pcVar9 + cVar6;
    cVar38 = (char)((uint)puVar45 >> 8);
    *pbVar10 = *pbVar10 - cVar38;
    pbVar44[1] = pbVar44[1] + cVar30;
    pcVar9 = pcVar9 + -0x757b021b;
    cVar6 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar6;
    uVar19 = (undefined3)((uint)pcVar9 >> 8);
    cVar7 = cVar6 + 'o';
    pcVar9 = (char *)CONCAT31(uVar19,cVar7);
    pbVar28 = pbVar44 + 2;
    *pcVar9 = *pcVar9 + cVar7;
    iVar16 = CONCAT22(uVar25,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar39,cVar32)) +
                                                        0x76),cVar32));
    *pcVar9 = *pcVar9 + cVar7;
    pcVar9 = (char *)CONCAT31(uVar19,cVar6 + -0x22);
    puVar21 = (uint *)((int)puVar33 + 1);
    *(byte *)puVar33 = (byte)*puVar41;
    *pcVar9 = *pcVar9 + cVar6 + -0x22;
    *(byte *)((int)puVar45 + (int)pcVar9) =
         *(byte *)((int)puVar45 + (int)pcVar9) - (char)((uint)pbVar28 >> 8);
    *pbVar28 = *pbVar28 + cVar30;
    bVar4 = cVar38 - pbVar44[4];
    pbVar12 = (byte *)((int)puVar41 + 5);
    out(*(undefined4 *)((int)puVar41 + 1),(short)pbVar28);
    puVar33 = (uint *)((uint)(pcVar9 + *(int *)(pcVar9 + iVar16)) ^ 0x280a0001);
    *(byte *)puVar33 = (byte)*puVar33 << 1 | (char)(byte)*puVar33 < '\0';
    *pbVar12 = *pbVar12 + (char)puVar33;
    pbVar12 = pbVar12 + *(int *)(pbVar44 + -0x5c);
    pbVar44 = (byte *)((uint)puVar33 | *puVar33);
    *pbVar12 = *pbVar12 + (char)pbVar44;
    puVar27 = (uint *)CONCAT31((int3)((uint)iVar16 >> 8),cVar32 - (char)pbVar28);
    bVar5 = *pbVar44;
    puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),CONCAT11(bVar4 + *pbVar44,cVar30));
    iVar16 = *(int *)pbVar44;
    *pbVar28 = *pbVar28 + cVar30;
    cVar6 = (char)(pbVar44 + (uint)CARRY1(bVar4,bVar5) + iVar16) + 'r';
    puVar33 = (uint *)CONCAT31((int3)((uint)(pbVar44 + (uint)CARRY1(bVar4,bVar5) + iVar16) >> 8),
                               cVar6);
    pbVar44 = (byte *)CONCAT22((short)((uint)pbVar28 >> 0x10),CONCAT11(10,(char)pbVar28));
    *(char *)(puVar33 + 10) = (char)puVar33[10] + '\n';
    *pbVar12 = *pbVar12 + cVar6;
    puVar41 = (uint *)(pbVar12 + *(int *)(pbVar44 + -0x5e));
    uVar35 = *puVar33;
    cVar6 = (char)((uint)puVar33 | uVar35);
    *(byte *)puVar41 = (byte)*puVar41 + cVar6;
    uVar19 = (undefined3)(((uint)puVar33 | uVar35) >> 8);
    cVar7 = cVar6 + (byte)*puVar27;
    puVar33 = (uint *)CONCAT31(uVar19,cVar7);
    if (SCARRY1(cVar6,(byte)*puVar27) == cVar7 < '\0') goto code_r0x00405090;
    *(byte *)puVar33 = (byte)*puVar33 + cVar7;
    piVar17 = (int *)CONCAT31(uVar19,cVar7 + '\x02');
    puVar33 = puVar21;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar44) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  cVar6 = (char)piVar17 + '}';
  pbVar12 = (byte *)CONCAT31(uVar19,cVar6);
  pbVar44[(int)pbVar12] = pbVar44[(int)pbVar12] + cVar6;
  pbVar44[0x280a0000] = pbVar44[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar5 = (byte)puVar45 & 7;
  *pbVar12 = *pbVar12 << bVar5 | *pbVar12 >> 8 - bVar5;
  *(byte *)puVar41 = (byte)*puVar41 + cVar6;
  cVar30 = (char)puVar27 - (byte)*puVar41;
  uVar25 = (undefined2)((uint)puVar27 >> 0x10);
  cVar38 = (char)((uint)puVar27 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar27 >> 8),cVar30) + 0x7c);
  pcVar9 = (char *)CONCAT22(uVar25,CONCAT11(cVar38,cVar30));
  *pbVar12 = *pbVar12 + cVar6;
  bVar4 = (char)piVar17 + 0xa7U & *pbVar44;
  puVar21 = (uint *)((int)puVar33 + *(int *)(pbVar10 + 0x7c));
  *(char *)CONCAT31(uVar19,bVar4) = *(char *)CONCAT31(uVar19,bVar4) + bVar4;
  bVar4 = bVar4 + 0x2a;
  pbVar12 = (byte *)CONCAT31(uVar19,bVar4);
  *pbVar12 = *pbVar12 + bVar4;
  *pcVar9 = *pcVar9 + cVar30;
  *pbVar44 = *pbVar44 ^ bVar4;
  *pcVar9 = *pcVar9 + bVar4;
  bVar5 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar4;
  cVar6 = (bVar4 - *pbVar12) - CARRY1(bVar5,bVar4);
  *(byte *)puVar45 = (byte)*puVar45 + (byte)pbVar44;
  cVar38 = cVar38 + pcVar9[0x7b];
  *(char *)CONCAT31(uVar19,cVar6) = *(char *)CONCAT31(uVar19,cVar6) + cVar6;
  pcVar9 = (char *)CONCAT31(uVar19,cVar6 + 'o');
  *pcVar9 = *pcVar9 + cVar6 + 'o';
  pcVar9 = pcVar9 + 0x2ed7fde6;
  cVar7 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar7;
  cVar6 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar38,cVar30)) + 0x7b);
  *pcVar9 = *pcVar9 + cVar7;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar9 >> 8),cVar7 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar20 = (undefined3)((uint)pbVar44 >> 8);
  bVar4 = (byte)pbVar44 | (byte)*puVar41;
  pbVar28 = (byte *)CONCAT31(uVar20,bVar4);
  uVar35 = CONCAT22(uVar25,CONCAT11(cVar38 + cVar6,cVar30)) | (uint)puVar41;
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  bVar5 = (byte)piVar17 | *pbVar28;
  pbVar12 = (byte *)CONCAT31(uVar19,bVar5);
  cVar6 = (byte)puVar45 - bVar4;
  puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),cVar6);
  *pbVar12 = *pbVar12 + bVar5;
  puVar33 = puVar41 + 1;
  out(*puVar41,(short)pbVar28);
  *pbVar12 = bVar5;
  *pbVar28 = *pbVar28 + cVar6;
  puVar41 = puVar41 + 2;
  out(*puVar33,(short)pbVar28);
  *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
  puVar27 = (uint *)(CONCAT31((int3)(uVar35 >> 8),(char)uVar35 - (char)((uint)pbVar44 >> 8)) |
                    (uint)puVar41);
  pbVar44 = (byte *)CONCAT31(uVar20,(bVar4 | (byte)*puVar41) + (byte)*puVar21);
  cVar6 = bVar5 - (byte)*puVar21;
  puVar33 = (uint *)CONCAT31(uVar19,cVar6 - *(char *)CONCAT31(uVar19,cVar6));
code_r0x00405090:
  *puVar33 = (uint)(pbVar44 + *puVar33);
  cVar6 = (char)puVar33;
  *(byte *)puVar33 = (byte)*puVar33 + cVar6;
  *(byte *)puVar33 = (byte)*puVar33 + cVar6;
  *(byte *)puVar33 = (byte)*puVar33 + cVar6;
  *puVar45 = *puVar45 - (int)pbVar10;
  uVar35 = *puVar41;
  bVar5 = (byte)pbVar44;
  *(byte *)puVar41 = (byte)*puVar41 + bVar5;
  *(byte *)puVar33 = (byte)*puVar33 + cVar6 + CARRY1((byte)uVar35,bVar5);
  *(byte *)puVar45 = (byte)*puVar45 + cVar6;
  uVar35 = *puVar27;
  *(byte *)puVar27 = (byte)*puVar27 + 0x72;
  *(byte *)puVar27 = (byte)*puVar27;
  cVar6 = (char)((uint)pbVar44 >> 8);
  if (SCARRY1((byte)uVar35,'r')) {
    puVar41 = (uint *)((int)puVar41 + *(int *)(pbVar44 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar41 = (byte)*puVar41 + (char)puVar33;
      uVar19 = (undefined3)((uint)puVar33 >> 8);
      cVar7 = (char)puVar33 + (byte)*puVar27;
      pcVar9 = (char *)CONCAT31(uVar19,cVar7);
      puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),
                                 CONCAT11((char)((uint)puVar27 >> 8) +
                                          *(byte *)((int)puVar27 + 0x7b),(char)puVar27));
      *pcVar9 = *pcVar9 + cVar7;
      in_AF = 9 < (cVar7 + 0x6fU & 0xf) | in_AF;
      uVar35 = CONCAT31(uVar19,cVar7 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar37 = (byte)uVar35;
      piVar17 = (int *)CONCAT22((short)(uVar35 >> 0x10),
                                CONCAT11((char)((uint)puVar33 >> 8) + in_AF,bVar37));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar37 = bVar37 | *(byte *)(piVar17 + 0x354a);
      bVar37 = bVar37 - *(char *)CONCAT31(uVar19,bVar37);
      pbVar12 = (byte *)CONCAT31(uVar19,bVar37);
      bVar4 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar37;
      puVar41 = (uint *)((int)puVar41 + (-(uint)CARRY1(bVar4,bVar37) - *(int *)pbVar12));
      puVar33 = (uint *)(pbVar12 + 0xfc00);
      *pbVar44 = *pbVar44 + cVar6;
      uVar35 = *puVar33;
      bVar4 = (byte)puVar33;
      *(byte *)puVar33 = (byte)*puVar33 + bVar4;
      uVar14 = (uint)CARRY1((byte)uVar35,bVar4);
      uVar1 = *puVar27;
      uVar35 = *puVar27;
      *puVar27 = (uint)((byte *)(uVar35 + (int)puVar33) + uVar14);
      if (!CARRY4(uVar1,(uint)puVar33) && !CARRY4(uVar35 + (int)puVar33,uVar14)) break;
      *(byte *)puVar33 = (byte)*puVar33 + bVar4;
    }
  }
  uVar35 = (uint)puVar33 | *puVar33;
  uVar25 = SUB42(pbVar44,0);
  *(byte *)puVar41 = (byte)*puVar41 + (char)uVar35;
  piVar17 = (int *)(uVar35 + 0xc1872);
  if (SCARRY4(uVar35,0xc1872)) {
    cVar7 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar7;
    *pbVar44 = *pbVar44 + cVar7;
    *(char *)piVar17 = *(char *)piVar17 + cVar7;
    *(byte *)puVar27 = (byte)*puVar27 + (char)puVar45;
    *(char *)piVar17 = *(char *)piVar17 + cVar7;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar5;
    puVar33 = puVar41;
    goto code_r0x00405117;
  }
  do {
    uVar35 = *puVar41;
    bVar5 = (byte)piVar17;
    *(byte *)puVar41 = (byte)*puVar41 + bVar5;
    if (CARRY1((byte)uVar35,bVar5)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar19 = (undefined3)((uint)puVar45 >> 8);
      bVar4 = (byte)puVar45 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar45 = (uint *)CONCAT31(uVar19,bVar4 | *(byte *)CONCAT31(uVar19,bVar4));
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar5 = bVar5 | *pbVar44;
      pcVar9 = (char *)CONCAT31(uVar19,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        puVar33 = puVar41 + 1;
        out(*puVar41,uVar25);
        uVar35 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar5);
        *(byte *)puVar33 = (byte)*puVar33 + bVar5;
        pcVar9 = (char *)(uVar35 | 8);
        cVar7 = (char)((uint)puVar27 >> 8) + *(byte *)((int)puVar27 + 0x7a);
        puVar36 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),CONCAT11(cVar7,(char)puVar27));
        *pcVar9 = *pcVar9 + (char)pcVar9;
        cVar6 = (char)pcVar9 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar35 >> 8),cVar6);
        *(char *)piVar17 = (char)*piVar17 + cVar6;
        *(byte *)puVar45 = (byte)*puVar45 + 1;
        puVar41 = puVar41 + 2;
        out(*puVar33,uVar25);
        pbVar44 = (byte *)((uint)pbVar44 ^ uRam08122c04);
        iVar16 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar16 * 2) = *(char *)(iVar16 * 2) - cVar7;
        do {
          bVar5 = (byte)iVar16;
          *(byte *)puVar41 = (byte)*puVar41 + bVar5;
          bVar46 = CARRY1(bVar5,(byte)*puVar36);
          uVar19 = (undefined3)((uint)iVar16 >> 8);
          cVar6 = bVar5 + (byte)*puVar36;
          pbVar12 = (byte *)CONCAT31(uVar19,cVar6);
          uVar25 = in_DS;
          uVar24 = uStack_90;
          if (SCARRY1(bVar5,(byte)*puVar36) == cVar6 < '\0') goto GenerateStatusText;
          *pbVar12 = *pbVar12 + cVar6;
          uVar35 = CONCAT31(uVar19,cVar6 + '\'') + 0x1ebd9f3;
          uStack_94 = (undefined1)puStack_44._0_2_;
          uStack_93 = (undefined1)((ushort)puStack_44._0_2_ >> 8);
          piVar17 = (int *)(uVar35 ^ 0x73060000);
          puVar45 = (uint *)((int)puVar45 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                     CONCAT11((byte)((uint)puVar36 >> 8) | pbVar10[0x7e],
                                              (char)puVar36));
          cVar6 = (char)uVar35;
          *(char *)piVar17 = (char)*piVar17 + cVar6;
          uVar35 = CONCAT31((int3)((uint)piVar17 >> 8),cVar6 + '\x02');
          bVar46 = 0xd9f2d2da < uVar35;
          iVar16 = uVar35 + 0x260d2d25;
          pbVar28 = pbVar10;
          do {
            uVar19 = (undefined3)((uint)iVar16 >> 8);
            bVar4 = (char)iVar16 + -2 + bVar46;
            pbVar10 = (byte *)CONCAT31(uVar19,bVar4);
            bVar5 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar4;
            bVar37 = (byte)puVar36;
            uStack_90 = puStack_44._0_2_;
            if (CARRY1(bVar5,bVar4)) {
              *pbVar10 = *pbVar10 + bVar4;
              puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                         CONCAT11((byte)((uint)puVar36 >> 8) | pbVar28[0x7f],bVar37)
                                        );
              *pbVar10 = *pbVar10 + bVar4;
              pbVar12 = (byte *)CONCAT31(uVar19,bVar4 + 0x2a);
              *pbVar12 = *pbVar12 + bVar4 + 0x2a;
              *(byte *)puVar36 = (byte)*puVar36 + (char)pbVar44;
              uVar25 = in_DS;
              while( true ) {
                in_DS = uVar25;
                bVar4 = (byte)pbVar12;
                *pbVar44 = *pbVar44 ^ bVar4;
                *pbVar44 = *pbVar44 + (char)puVar36;
                *pbVar12 = *pbVar12 + bVar4;
                *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)pbVar44 >> 8);
                bVar5 = *pbVar12;
                *pbVar12 = *pbVar12 + bVar4;
                uVar35 = *puVar36;
                uVar1 = *puVar36;
                *puVar36 = (uint)(pbVar12 + uVar1 + CARRY1(bVar5,bVar4));
                uVar19 = (undefined3)((uint)pbVar12 >> 8);
                if (CARRY4(uVar35,(uint)pbVar12) ||
                    CARRY4((uint)(pbVar12 + uVar1),(uint)CARRY1(bVar5,bVar4))) break;
                *(byte *)puVar41 = (byte)*puVar41 + bVar4;
                pcVar9 = (char *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                          CONCAT11((char)((uint)puVar45 >> 8) + *pbVar12,
                                                   (char)puVar45));
                *(byte *)puVar41 = (byte)*puVar41 + bVar4;
                piVar17 = (int *)CONCAT31(uVar19,bVar4 | (byte)*puVar36);
                puVar33 = puVar41;
                while( true ) {
                  puVar41 = puVar33 + 1;
                  out(*puVar33,(short)pbVar44);
                  pbVar44 = pbVar44 + 1;
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  bVar37 = (byte)((uint)pcVar9 >> 8) | *pbVar44;
                  uVar19 = (undefined3)((uint)piVar17 >> 8);
                  bVar4 = (byte)piVar17 ^ *pbVar44;
                  pcVar11 = (char *)CONCAT31(uVar19,bVar4);
                  cRam282b0000 = cRam282b0000 - bVar37;
                  *pcVar11 = *pcVar11 + bVar4;
                  pbVar10 = pbVar28 + -*(int *)pbVar44;
                  uStack_94 = (undefined1)in_DS;
                  uStack_93 = (undefined1)((ushort)in_DS >> 8);
                  bVar5 = *(byte *)((int)puVar21 + 0x17);
                  *pcVar11 = *pcVar11 + bVar4;
                  puVar45 = (uint *)CONCAT22((short)((uint)pcVar9 >> 0x10),
                                             CONCAT11(bVar37 + bVar5 | *pbVar44,(char)pcVar9));
                  *(byte *)puVar36 = (byte)*puVar36 + (char)puVar36;
                  *(byte *)((int)pcVar11 * 2) = *(byte *)((int)pcVar11 * 2) ^ bVar4;
                  in_AF = 9 < (bVar4 & 0xf) | in_AF;
                  bVar4 = bVar4 + in_AF * -6;
                  pbVar12 = (byte *)CONCAT31(uVar19,bVar4 + (0x9f < bVar4 | in_AF * (bVar4 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
                  *(char *)((int)pbVar12 * 2) =
                       *(char *)((int)pbVar12 * 2) + (char)((uint)pbVar44 >> 8);
                  bVar46 = CARRY1((byte)*puVar45,(byte)pbVar44);
                  *(byte *)puVar45 = (byte)*puVar45 + (byte)pbVar44;
                  uVar25 = in_DS;
                  uVar24 = puStack_44._0_2_;
GenerateStatusText:
                  in_DS = uVar24;
                  pbVar28 = pbVar10;
                  uStack_90 = in_DS;
                  if (!bVar46) break;
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  iVar16 = CONCAT31((int3)((uint)puVar45 >> 8),(byte)puVar45 | *pbVar44);
                  uVar25 = (undefined2)((uint)puVar36 >> 0x10);
                  cVar30 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x7d);
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  *(byte *)puVar21 = (byte)*puVar21 - (char)((uint)puVar45 >> 8);
                  iVar16 = iVar16 - *(int *)(&uRam0b0a0000 + iVar16);
                  cVar6 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar30,(char)puVar36)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar41,(short)pbVar44);
                  pbVar44 = (byte *)CONCAT22(uStack_92,CONCAT11(uStack_93,uStack_94));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar33 = puVar41 + 2;
                  out(puVar41[1],CONCAT11(uStack_93,uStack_94));
                  pbVar28 = pbVar10 + 1;
                  cVar7 = (char)iVar16;
                  pcVar9 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                            CONCAT11((byte)((uint)iVar16 >> 8) |
                                                     *(byte *)((int)puVar21 + 0x46),cVar7));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_44._0_2_ = CONCAT11(uStack_93,uStack_94);
                  uVar19 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar33,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar19,0x5f);
                  puVar21 = (uint *)((int)puVar21 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar36 = (uint *)CONCAT22(uVar25,CONCAT11(cVar30 + cVar6 | (byte)puVar41[-0x1e],
                                                             (char)puVar36));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar45 = (uint *)CONCAT31(uVar19,0x8c);
                  puVar33[(int)puVar21 * 2] = (uint)(pbVar44 + puVar33[(int)puVar21 * 2]);
                  uVar35 = *puVar33;
                  *(byte *)puVar33 = (byte)*puVar33 + 0x8c;
                  if ((byte)uVar35 < 0x74) {
                    *pbVar44 = *pbVar44 + cVar7;
                    *(byte *)puVar36 = (byte)*puVar36 >> 1;
                    *(char *)puVar45 = (char)*puVar45 + -0x74;
                    *puVar45 = (uint)(pbVar28 + *puVar45);
                    *puVar45 = *puVar45 << 1 | (uint)((int)*puVar45 < 0);
                    *pbVar44 = *pbVar44 + cVar7;
                    pbVar10[2] = pbVar10[2] - cVar7;
                    *pbVar44 = *pbVar44 + cVar7;
                    pbVar10 = (byte *)CONCAT31(uVar19,0x83);
                    puVar45 = puVar36;
                    goto code_r0x00405312;
                  }
                  *puVar45 = (uint)(*puVar45 + (int)puVar45);
                  piVar17 = (int *)(CONCAT31(uVar19,(byte)puVar45[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar45[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar17 = (int *)((int)piVar17 + *puVar33);
                }
              }
              *pbVar44 = *pbVar44 + bVar4;
              *(byte *)puVar36 = (byte)*puVar36 - (char)pbVar44;
              *pbVar12 = *pbVar12 + bVar4;
              pbVar10 = (byte *)CONCAT31(uVar19,bVar4 | (byte)*puVar36);
            }
            else {
              cVar6 = (char)puVar45;
              *pbVar44 = *pbVar44 + cVar6;
              *(byte **)pbVar10 = pbVar44 + *(int *)pbVar10;
              *pbVar10 = *pbVar10 + bVar4;
              bVar4 = bVar4 + *pbVar10;
              pbVar10 = (byte *)CONCAT31(uVar19,bVar4);
              if (-1 < (char)bVar4) {
                *(byte *)puVar36 = (byte)*puVar36 + bVar37;
                out(*puVar41,(short)pbVar44);
                pbVar44 = pbVar44 + 1;
                *pbVar10 = *pbVar10 + bVar4;
                puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),
                                           bVar37 | (byte)((uint)iVar16 >> 8));
                cVar7 = bVar4 - (byte)*puVar45;
                pcVar9 = (char *)CONCAT31(uVar19,cVar7);
                *pcVar9 = *pcVar9 + cVar7 + (bVar4 < (byte)*puVar45);
                *pbVar44 = *pbVar44 + cVar7;
                pcVar9 = (char *)((int)pcVar9 * 2 + 0x79);
                *pcVar9 = *pcVar9 + (char)((uint)pbVar44 >> 8);
                pbVar10 = (byte *)in((short)pbVar44);
                puVar41 = puVar41 + 1;
              }
              *(byte *)puVar41 = (byte)*puVar41 + cVar6;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              uStack_94 = (undefined1)in_DS;
              uStack_93 = (undefined1)((ushort)in_DS >> 8);
              bVar5 = *pbVar10;
              bVar31 = (byte)((uint)puVar45 >> 8);
              bVar37 = bVar31 + *pbVar10;
              iVar16 = *(int *)pbVar10;
              *pbVar44 = *pbVar44 + cVar6;
              bVar4 = (char)(pbVar10 + (uint)CARRY1(bVar31,bVar5) + iVar16) - (byte)*puVar36;
              pbVar10 = (byte *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar31,bVar5) + iVar16
                                                      ) >> 8),bVar4);
              *(byte *)puVar36 = (byte)*puVar36 ^ bVar4;
              *pbVar28 = *pbVar28 + (char)puVar36;
              *pbVar10 = *pbVar10 + bVar4;
              *pbVar10 = *pbVar10 + bVar4;
              *pbVar10 = *pbVar10 + bVar4;
              puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                         CONCAT11(bVar37 + *pbVar10,cVar6));
              pbVar10 = pbVar10 + (uint)CARRY1(bVar37,*pbVar10) + *(int *)pbVar10;
              *pbVar44 = *pbVar44 + cVar6;
              puVar41 = (uint *)((int)puVar41 + *(int *)(pbVar44 + 0x3e));
            }
            *(byte *)puVar41 = (byte)*puVar41 + (char)pbVar10;
            cVar6 = (char)pbVar10 + 'r';
            puVar41 = (uint *)((int)puVar41 + -1);
            uVar35 = CONCAT31((int3)((uint)pbVar10 >> 8),cVar6);
            *(byte *)puVar41 = *(byte *)puVar41 + cVar6;
            bVar46 = 0xfff38f8d < uVar35;
            iVar16 = uVar35 + 0xc7072;
            pbVar10 = pbVar28;
          } while (SCARRY4(uVar35,0xc7072));
        } while( true );
      }
      *pcVar9 = *pcVar9 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar12 = (byte *)CONCAT31(uVar19,bVar5);
      bVar4 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar5;
      uVar19 = (undefined3)
               ((uint)(pbVar12 + (uint)CARRY1(bVar4,bVar5) + *(int *)((int)puVar45 + (int)pbVar44))
               >> 8);
      cVar7 = (char)(pbVar12 + (uint)CARRY1(bVar4,bVar5) + *(int *)((int)puVar45 + (int)pbVar44)) +
              'E';
      pcVar9 = (char *)CONCAT31(uVar19,cVar7);
      *pcVar9 = *pcVar9 + cVar7;
      cVar7 = cVar7 + *pcVar9;
      pcVar9 = (char *)CONCAT31(uVar19,cVar7);
      *pcVar9 = *pcVar9 + cVar7;
      puVar33 = (uint *)CONCAT31(uVar19,cVar7 + *pcVar9);
      *(char *)puVar33 = (char)*puVar33 + cVar7 + *pcVar9;
      pbVar12 = (byte *)((uint)puVar33 | *puVar33);
      bVar5 = *pbVar12;
      bVar4 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar4;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar4 + CARRY1(bVar5,bVar4));
      puVar33 = puVar41;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar27 = (uint *)((int)puVar27 - *puVar27);
      puVar41 = puVar33 + 1;
      out(*puVar33,uVar25);
    }
    *pbVar44 = *pbVar44 + (char)puVar45;
    bVar46 = puVar27 < (uint *)*piVar17;
    puVar27 = (uint *)((int)puVar27 - *piVar17);
    bVar5 = (byte)((uint)puVar45 >> 8);
    *(byte *)((int)puVar21 + 0x39) = (*(byte *)((int)puVar21 + 0x39) - bVar5) - bVar46;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar35 = *puVar27;
    *(int *)((int)puVar21 + 0x39) = *(int *)((int)puVar21 + 0x39) - (int)pbVar10;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar35 | (byte)*puVar27,(char)puVar45));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar6;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar5 = (char)piVar17 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar5);
  *pbVar10 = *pbVar10 ^ bVar5;
  *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)pcVar9 >> 8);
  bVar5 = *pbVar44;
  *pbVar44 = *pbVar44 + (byte)pcVar9;
  piVar17 = (int *)(((uint)pbVar10 | 0x1496f09) + *puVar21 + (uint)CARRY1(bVar5,(byte)pcVar9));
  puVar41 = puVar33 + 1;
  out(*puVar33,(short)pbVar44);
  pbVar12 = pbVar44 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(byte)pbVar12 | (byte)*puVar36);
  cVar6 = (char)piVar17 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar6);
  puVar45 = puVar36;
  puVar33 = puVar41;
  if ((POPCOUNT(cVar6) & 1U) != 0) {
    *pbVar44 = *pbVar44 - (char)((uint)pbVar12 >> 8);
    *pbVar10 = *pbVar10 + cVar6;
code_r0x00405396:
    bVar5 = *pbVar10;
    bVar4 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    *puVar41 = (uint)(pbVar10 + (uint)CARRY1(bVar5,bVar4) + *puVar41);
    out(*puVar41,(short)pbVar44);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar9 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                              CONCAT11((byte)((uint)pbVar10 >> 8) | (byte)puVar41[1],bVar4));
    *(char **)((int)puVar21 + -1) = pcVar9 + *(int *)((int)puVar21 + -1);
    out(puVar41[1],(short)pbVar44);
    *pcVar9 = *pcVar9 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar36 = (uint *)((int)puVar45 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar19 = (undefined3)((uint)pbVar44 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar37 = (byte)pbVar44 | *(byte *)puVar36 | *(byte *)puVar36;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*puVar33,(short)CONCAT31(uVar19,bVar37));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar37 = bVar37 | (byte)piVar17;
  iVar29 = CONCAT31(uVar19,bVar37);
  pbVar10 = (byte *)((int)piVar17 - *piVar17);
  cVar6 = (char)pbVar10;
  *pcVar9 = *pcVar9 + cVar6;
  cVar7 = (char)pcVar9 - bVar37;
  *pbVar10 = *pbVar10 + cVar6;
  uVar25 = (undefined2)((uint)pcVar9 >> 0x10);
  bVar4 = (byte)((uint)pcVar9 >> 8) | *pbVar10;
  pbVar28 = pbVar28 + -1;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  bVar5 = *(byte *)(CONCAT22(uVar25,CONCAT11(bVar4,cVar7)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar10;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar28;
  *pbVar10 = *pbVar10 + cVar6;
  bVar5 = bVar4 | bVar5 | *(byte *)puVar36;
  iVar22 = CONCAT22(uVar25,CONCAT11(bVar5,cVar7));
  pbVar12 = (byte *)((uint)(puVar33 + 1) ^ *(uint *)(iVar29 + -0x43));
  iVar16 = *(int *)pbVar10;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  if (SCARRY4(iVar16,(int)pbVar10)) {
    *pbVar10 = *pbVar10 + cVar6;
  }
  pbVar44 = pbVar10 + 0x5674;
  puVar21 = (uint *)((int)puVar21 +
                    (-(uint)((byte *)0xffffa98b < pbVar10) - *(int *)(pbVar12 + -0x7f)));
  bVar4 = (byte)pbVar44;
  *pbVar44 = *pbVar44 + bVar4;
  uVar20 = (undefined3)((uint)pbVar44 >> 8);
  bVar31 = bVar4 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar20,bVar31);
  *(uint *)(pbVar12 + (int)puVar21 * 8) =
       *(int *)(pbVar12 + (int)puVar21 * 8) + iVar29 + (uint)(0xd2 < bVar4);
  bVar4 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar31;
  if (!CARRY1(bVar4,bVar31)) {
    do {
      pbVar44 = (byte *)(iVar29 + 1);
      bVar4 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar4;
      bVar37 = (byte)((uint)piVar17 >> 8);
      bVar31 = (byte)puVar36 | bVar37;
      puVar33 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),bVar31);
      out(*(undefined4 *)pbVar12,(short)pbVar44);
      *(byte *)piVar17 = (char)*piVar17 + bVar4;
      uVar25 = (undefined2)((uint)iVar22 >> 0x10);
      cVar6 = (char)iVar22;
      pbVar10 = (byte *)CONCAT22(uVar25,CONCAT11((byte)((uint)iVar22 >> 8) | *pbVar44,cVar6));
      bVar5 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar4;
      *(byte *)piVar17 = (char)*piVar17 + bVar4 + CARRY1(bVar5,bVar4);
      *pbVar44 = *pbVar44 + bVar4;
      *(byte *)puVar21 = (byte)*puVar21 + bVar37;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar25,CONCAT11(0x1c,cVar6));
      *(byte *)piVar17 = (char)*piVar17 + bVar4;
      cVar7 = (char)pbVar44;
      *(byte *)puVar33 = (byte)*puVar33 + cVar7;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar4;
      *(byte *)piVar17 = (char)*piVar17 + bVar4;
      pbVar10 = pbVar12 + 8;
      out(*(undefined4 *)(pbVar12 + 4),(short)pbVar44);
      piVar17 = &uRam0a0a0000;
      *pbVar44 = *pbVar44;
      bVar4 = cVar6 - cVar7;
      iVar22 = CONCAT22(uVar25,CONCAT11((byte)puVar21[0x14] | 0x1c | bRam0ca87216,bVar4));
      *pbVar44 = *pbVar44;
      bVar5 = *pbVar44;
      *pbVar44 = *pbVar44 + bVar4;
      if (!CARRY1(bVar5,bVar4)) {
        piVar17 = &uRam1e7b7000;
        bVar5 = (byte)((uint)puVar36 >> 8) | *(byte *)(iVar29 + 3);
        puVar33 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar5,bVar31));
        if (bVar5 != 0) {
          pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),cVar7 + pbVar10[(int)puVar21 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar22 = iVar22 + 1;
        }
      }
      *piVar17 = *piVar17 + (int)piVar17;
      iVar29 = CONCAT31((int3)((uint)pbVar44 >> 8),(byte)pbVar44 | pbVar10[(int)puVar21 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar21 = (uint)((int)piVar17 + *puVar21 + 1);
      pbVar12 = pbVar12 + 0xc;
      out(*(undefined4 *)pbVar10,(short)iVar29);
      puVar36 = puVar33;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar31 = bVar31 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar20,bVar31);
  if ('\0' < (char)bVar31) {
    *(byte *)piVar17 = (char)*piVar17 + bVar31;
    puVar33 = (uint *)CONCAT31(uVar20,bVar31 + 0x28);
    *puVar33 = *puVar33 ^ (uint)puVar33;
    *(byte *)puVar36 = *(byte *)puVar36 + bVar5;
    cVar6 = (bVar31 + 0x28) - bVar5;
    pcVar9 = (char *)CONCAT31(uVar20,cVar6);
    *pcVar9 = *pcVar9 + cVar6;
    pbVar44 = (byte *)CONCAT31(uVar19,bVar37 | *(byte *)puVar36);
    pcVar11 = (char *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((char)((uint)puVar36 >> 8) + *(byte *)((int)puVar45 + 0x7d),
                                        (char)puVar36));
    *pcVar9 = *pcVar9 + cVar6;
    pbVar10 = (byte *)CONCAT31(uVar20,cVar6 + 0x39U ^ *(byte *)CONCAT31(uVar20,cVar6 + 0x39U));
    *pcVar11 = *pcVar11 + bVar5;
    puVar41 = (uint *)(pbVar12 + 4);
    out(*(undefined4 *)pbVar12,(short)pbVar44);
    goto code_r0x00405396;
  }
  puVar33 = (uint *)(pbVar12 + 4);
  out(*(undefined4 *)pbVar12,(short)iVar29);
  pcVar9 = (char *)(iVar22 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar44 = (byte *)CONCAT31(uVar19,bVar37 | *(byte *)puVar36);
  goto code_r0x004052ee;
}


