/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004046c2
 * Raw Name    : CreateReportBuffer
 * Demangled   : CreateReportBuffer
 * Prototype   : int CreateReportBuffer(char * param_1, uint * param_2)
 * Local Vars  : puStack_48, pbStack_4c, puStack_40, pcStack_44, iStack_38, puStack_3c, puStack_28, pcStack_34, uVar1, pcStack_4, uVar3, uVar2, cVar5, bVar4, uVar7, cVar6, pcVar8, in_EAX, pcVar10, pbVar9, uVar12, puVar11, iVar14, puVar13, puVar16, piVar15, uVar18, uVar17, iVar20, puVar19, uVar22, bVar21, bVar24, uVar23, pbVar26, puVar25, bVar28, iVar27, bVar30, param_1, cVar29, param_2, cVar32, uVar31, puVar33, unaff_EBX, uVar35, pbVar34, bVar37, puVar36, cVar39, cVar38, puVar41, ppbVar40, ppbVar43, ppbVar42, pbVar44, unaff_ESI, unaff_EDI, pbVar45, in_ES, puVar46, in_SS, in_CS, in_CF, in_DS, in_AF, bVar47, uStack_b8, uStack_b6, uStack_b7, uStack_78, uStack_b4, iStack_70, puStack_74, puStack_68, pbStack_6c, puStack_60, uStack_64, pbStack_58, puStack_5c, pbStack_50, puStack_54
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

int __fastcall CreateReportBuffer(char *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  byte *in_EAX;
  undefined3 uVar17;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  ushort *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  undefined3 uVar18;
  byte bVar21;
  uint *puVar19;
  undefined2 uVar22;
  undefined2 uVar23;
  int iVar20;
  byte bVar24;
  byte bVar28;
  char cVar29;
  byte bVar30;
  uint *puVar25;
  byte *pbVar26;
  int iVar27;
  undefined1 uVar31;
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
  byte *unaff_ESI;
  byte *pbVar44;
  byte *pbVar45;
  uint *unaff_EDI;
  uint *puVar46;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool in_CF;
  bool bVar47;
  byte in_AF;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 uStack_78;
  uint *puStack_74;
  int iStack_70;
  byte *pbStack_6c;
  uint *puStack_68;
  undefined2 uStack_64;
  uint *puStack_60;
  uint *puStack_5c;
  byte *pbStack_58;
  uint *puStack_54;
  byte *pbStack_50;
  byte *pbStack_4c;
  uint *puStack_48;
  char *pcStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  int iStack_38;
  char *pcStack_34;
  uint *puStack_28;
  char *pcStack_4;
  
  pbVar45 = unaff_ESI;
                    /* .NET CLR Managed Code */
  if (in_CF) {
    bVar4 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar4;
    uVar23 = (undefined2)((uint)param_2 >> 0x10);
    cVar5 = (char)param_2;
    bVar28 = (byte)((uint)param_2 >> 8) | *(byte *)((int)unaff_EBX + -0x5b);
    param_2 = (uint *)CONCAT22(uVar23,CONCAT11(bVar28,cVar5));
    *in_EAX = *in_EAX + bVar4;
    pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_ES);
    puVar33 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX - (byte)*param_2);
    if ((byte)unaff_EBX < (byte)*param_2) {
      *(byte **)in_EAX = in_EAX + *(int *)in_EAX;
      param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1)
                                );
      uVar35 = puVar33[0xb];
      *in_EAX = *in_EAX + bVar4;
      param_2 = (uint *)CONCAT31((int3)(CONCAT22(uVar23,CONCAT11(bVar28 + (byte)uVar35,cVar5)) >> 8)
                                 ,cVar5 - (byte)*puVar33);
      bRam0000c800 = bRam0000c800 ^ bVar4;
    }
    *(byte *)param_2 = (byte)*param_2 + (char)((uint)param_1 >> 8);
    bVar28 = *in_EAX;
    *in_EAX = *in_EAX + bVar4;
    *param_2 = (uint)(in_EAX + (uint)CARRY1(bVar28,bVar4) + *param_2);
    pbVar45 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    puStack_28 = puVar33;
    *in_EAX = *in_EAX + bVar4;
    uVar17 = (undefined3)((uint)in_EAX >> 8);
    bVar28 = bVar4 - 0x1f;
    pcVar8 = (char *)CONCAT31(uVar17,bVar28);
    if (bVar28 == 0 || (char)bVar4 < '\x1f') goto code_r0x0040475f;
    *pcVar8 = *pcVar8 + bVar28;
    piVar15 = (int *)CONCAT31(uVar17,bVar4 + 0xe);
    *(byte **)(pbVar45 + (int)unaff_EDI * 8) =
         (byte *)((int)param_2 + (uint)(0xd2 < bVar28) + *(int *)(pbVar45 + (int)unaff_EDI * 8));
    uRam7305fffc = in_CS;
    *piVar15 = *piVar15 + (int)piVar15;
    bVar4 = bVar4 + 0xe | *(byte *)((int)piVar15 + 0x400006d);
    pcVar8 = (char *)CONCAT31(uVar17,bVar4);
    puVar46 = unaff_EDI;
    if ((char)bVar4 < '\x01') goto code_r0x00404777;
    *pcVar8 = *pcVar8 + bVar4;
    in_EAX = (byte *)CONCAT31(uVar17,bVar4 + 0x10);
    *param_2 = (uint)(in_EAX + *param_2);
    unaff_EBX = puVar33;
  }
  uVar23 = SUB42(param_2,0);
  out(*(undefined4 *)pbVar45,uVar23);
  pcStack_4 = param_1;
  *in_EAX = *in_EAX + (byte)in_EAX;
  *param_1 = *param_1 + '\x01';
  *param_1 = *param_1 + '\x01';
  bVar4 = (byte)in_EAX | (byte)*param_2;
  pcVar8 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar4);
  out(*(undefined4 *)(pbVar45 + 4),uVar23);
  puVar46 = (uint *)((int)unaff_EDI + -1);
  *pcVar8 = *pcVar8 + bVar4;
  pcVar8 = (char *)((int)((uint)pcVar8 | *puVar46) + *(int *)((uint)pcVar8 | *puVar46));
  *pcVar8 = *pcVar8 + (char)pcVar8;
  cVar5 = (char)pcVar8 + *pcVar8;
  puVar33 = (uint *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5);
  *(char *)puVar33 = (char)*puVar33 + cVar5;
  *puVar33 = *puVar33 & (uint)puVar33;
  *(char *)puVar33 = (char)*puVar33 + cVar5;
  pbVar9 = (byte *)((int)puVar33 + 1);
  cVar5 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cVar5;
  uVar35 = *unaff_EBX;
  bVar4 = (byte)((uint)param_1 >> 8);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar4;
  pbVar44 = pbVar45 + 8;
  if (CARRY1((byte)uVar35,bVar4)) {
    pbVar44 = pbVar45 + 0xc;
    out(*(undefined4 *)(pbVar45 + 8),uVar23);
    puVar46 = (uint *)((int)unaff_EDI + -2);
  }
  *pbVar9 = *pbVar9 + cVar5;
  puVar19 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11(bVar4 + *(byte *)((int)puVar46 + 0x49),(char)param_1));
  *pbVar9 = *pbVar9 + cVar5;
  *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
  out(*(undefined4 *)pbVar44,uVar23);
  puVar33 = (uint *)((int)unaff_EBX + -1);
  *pbVar9 = *pbVar9 + cVar5;
  pbVar44 = pbVar44 + *(int *)((int)unaff_EBX + -0x7f) + 4;
  *pbVar9 = *pbVar9 + cVar5;
  do {
    puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_ES);
    cVar5 = (char)pbVar9 - (byte)*param_2;
    pcVar8 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
    pbVar45 = pbVar44 + 4;
    out(*(undefined4 *)pbVar44,(short)param_2);
    unaff_EDI = (uint *)((int)puVar46 + -1);
    *pcVar8 = *pcVar8 + cVar5;
    param_1 = (char *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((char)((uint)puVar19 >> 8) + (byte)puVar46[0x12],
                                        (char)puVar19));
code_r0x0040475f:
    cVar5 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar5;
    *(byte *)(puVar33 + 0x818000) = (byte)puVar33[0x818000] - (char)((uint)puVar33 >> 8);
    out(*(undefined4 *)pbVar45,(short)param_2);
    pbVar44 = (byte *)((int)puVar33 + -1);
    *pcVar8 = *pcVar8 + cVar5;
    pcStack_34 = (char *)CONCAT22(pcStack_34._2_2_,in_ES);
    iStack_38 = CONCAT22(iStack_38._2_2_,in_ES);
    pbVar45 = pbVar45 + *(int *)((int)puVar33 + -0x71) + 4;
    *pcVar8 = *pcVar8 + cVar5;
    puStack_3c = (uint *)CONCAT22(puStack_3c._2_2_,in_ES);
    puVar33 = (uint *)CONCAT22((short)((uint)pbVar44 >> 0x10),
                               CONCAT11((char)((uint)pbVar44 >> 8) - pbVar45[0x6e],(char)pbVar44));
    puVar46 = unaff_EDI;
code_r0x00404777:
    bVar4 = (byte)pcVar8;
    *pcVar8 = *pcVar8 + bVar4;
    uVar17 = (undefined3)((uint)pcVar8 >> 8);
    puVar19 = (uint *)(pbVar45 + (int)puVar46 * 8);
    uVar35 = *puVar19;
    uVar1 = *puVar19;
    *puVar19 = (uint)((byte *)(uVar1 + (int)param_2) + (0xd2 < bVar4));
    puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,in_ES);
    puVar41 = (uint *)0x73060000;
    cVar6 = bVar4 + 0x2e +
            (CARRY4(uVar35,(uint)param_2) || CARRY4(uVar1 + (int)param_2,(uint)(0xd2 < bVar4)));
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    *pbVar45 = *pbVar45;
    cVar5 = cVar6 + '~';
    pcVar10 = (char *)CONCAT31(uVar17,cVar5);
    out(*pbVar45,(short)param_2);
    *pcVar10 = *pcVar10 + cVar5;
    cVar6 = cVar6 + -0x80;
    pcVar10 = (char *)CONCAT31(uVar17,cVar6);
    out(*(undefined4 *)(pbVar45 + 1),(short)param_2);
    puVar19 = (uint *)(param_1 + -1);
    *pcVar10 = *pcVar10 + cVar6;
    pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,in_ES);
    *(byte *)puVar46 = (byte)*puVar46 - (char)((uint)pcVar8 >> 8);
    *pcVar10 = *pcVar10 + cVar6;
    puStack_48 = (uint *)CONCAT22(puStack_48._2_2_,in_ES);
    *pcVar10 = *pcVar10 - (char)((uint)puVar19 >> 8);
    *pcVar10 = *pcVar10 + cVar6;
    pbStack_4c = (byte *)CONCAT22(pbStack_4c._2_2_,in_ES);
    pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,in_ES);
    pbVar44 = pbVar45 + *(int *)((int)puVar33 + 9) + 5;
    *pcVar10 = *pcVar10 + cVar6;
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,in_ES);
    cVar5 = (char)param_2;
    cVar29 = (char)((uint)param_2 >> 8) - *(byte *)((int)puVar33 + -0x59);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar29,cVar5));
    *pcVar10 = *pcVar10 + cVar6;
    uVar23 = (undefined2)((uint)puVar33 >> 0x10);
    uVar31 = SUB41(puVar33,0);
    bVar37 = (byte)((uint)puVar33 >> 8) | *(byte *)((int)param_2 + 0x36);
    puVar33 = (uint *)CONCAT22(uVar23,CONCAT11(bVar37,uVar31));
    bVar28 = cVar6 + (byte)*puVar33;
    pbVar9 = (byte *)CONCAT31(uVar17,bVar28);
    *(byte *)puVar46 = (byte)*puVar46 - cVar29;
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar28;
  } while (!CARRY1(bVar4,bVar28));
  *pbVar9 = *pbVar9 + bVar28;
  bVar28 = bVar28 - *pbVar9;
  pbVar45 = (byte *)CONCAT31(uVar17,bVar28);
  *(byte *)puVar33 = (byte)*puVar33 + cVar5;
  *(byte *)param_2 = (byte)*param_2 ^ bVar28;
  param_1[0x2affffff] = param_1[0x2affffff] + bVar28;
  bVar4 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar28;
  *puVar33 = (uint)(pbVar45 + (uint)CARRY1(bVar4,bVar28) + *puVar33);
  pbVar9 = pbVar45 + -0x32a1702;
  if (pbVar9 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar9;
    puVar36 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + (byte)*param_2);
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_ES);
    pbVar45[-0xe0c891b] = pbVar45[-0xe0c891b] + cVar29;
    pbVar9 = pbVar45 + 0x19fd76e3;
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 - bVar37;
    piVar15 = (int *)((uint)(pbVar45 + (bVar4 < bVar37) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar15 + 0x73) = *(char *)((int)piVar15 + 0x73) + cVar29;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    bVar28 = bVar37 | *(byte *)((int)param_2 + 2);
    puVar33 = (uint *)CONCAT22(uVar23,CONCAT11(bVar28,uVar31));
    cVar5 = (char)piVar15;
    if ((POPCOUNT(bVar28) & 1U) == 0) {
      *(char *)piVar15 = (char)*piVar15 + cVar5;
      uVar17 = (undefined3)((uint)(pbVar45 + (bVar4 < bVar37) + 0x63fd76e4) >> 8);
      cVar6 = cVar5 + '\x06';
      if ((POPCOUNT(cVar6) & 1U) == 0) {
        *(char *)CONCAT31(uVar17,cVar6) = *(char *)CONCAT31(uVar17,cVar6) + cVar6;
        pbVar9 = (byte *)CONCAT31(uVar17,cVar5 + '.');
        puVar19 = puVar36;
        uStack_64 = in_SS;
        goto code_r0x00404803;
      }
      cVar5 = cVar6 + (byte)*puVar33;
      pcVar8 = (char *)CONCAT31(uVar17,cVar5);
      if (SCARRY1(cVar6,(byte)*puVar33) == cVar5 < '\0') {
code_r0x004048e7:
        pcVar8 = (char *)((uint)pcVar8 | 8);
        uStack_64 = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(param_2 + 0x1cc18000) = (byte)param_2[0x1cc18000] + cVar5;
code_r0x0040486e:
      pcVar8 = (char *)CONCAT31((int3)((uint)piVar15 >> 8),(byte)piVar15 & (byte)*param_2);
      puVar46 = (uint *)((int)puVar46 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar8 = *pcVar8 + (char)pcVar8;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + '*');
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_DS);
    bVar4 = (byte)((uint)puVar36 >> 8);
    cVar5 = (char)puVar36;
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar4 + *pbVar45,cVar5));
    pbVar45 = pbVar45 + (uint)CARRY1(bVar4,*pbVar45) + *(int *)pbVar45;
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    bVar47 = (byte)pbVar45 < *pbVar45;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(byte)pbVar45 - *pbVar45);
code_r0x00404880:
    pbVar44 = pbVar44 + (uint)bVar47 + *(int *)pbVar45;
    uStack_64 = in_ES;
    while( true ) {
      bVar28 = (byte)pbVar45;
      pbVar45[0x2c000000] = pbVar45[0x2c000000] + bVar28;
      bVar4 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar28;
      *param_2 = (uint)(pbVar45 + (uint)CARRY1(bVar4,bVar28) + *param_2);
      *(byte *)puVar33 = (byte)*puVar33 - (char)param_2;
      *pbVar45 = *pbVar45 + bVar28;
      puVar19 = (uint *)CONCAT31((int3)((uint)pbVar45 >> 8),bVar28 | (byte)*puVar33);
code_r0x00404895:
      pcVar8 = (char *)((uint)puVar19 | *puVar19);
code_r0x00404899:
      cVar5 = (char)pcVar8;
      *pbVar44 = *pbVar44 + cVar5;
      uVar17 = (undefined3)((uint)pcVar8 >> 8);
      bVar4 = cVar5 + (byte)*puVar33;
      pcVar8 = (char *)CONCAT31(uVar17,bVar4);
      bVar28 = (byte)((uint)puVar36 >> 8);
      uVar23 = (undefined2)((uint)puVar36 >> 0x10);
      cVar6 = (char)param_2;
      if (SCARRY1(cVar5,(byte)*puVar33) == (char)bVar4 < '\0') {
        *(byte *)puVar33 = (byte)*puVar33 - cVar6;
        *pcVar8 = *pcVar8 + bVar4;
        puVar36 = (uint *)CONCAT22(uVar23,CONCAT11(bVar28 | (byte)*param_2,(char)puVar36));
        param_2 = (uint *)((int)param_2 + 1);
        pcVar8 = pcVar8 + *param_2;
        uStack_64 = in_ES;
        if ((POPCOUNT((uint)pcVar8 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar8 = *pcVar8 + bVar4;
      bVar37 = bVar4 + 2;
      pcVar8 = (char *)CONCAT31(uVar17,bVar37);
      if (bVar4 < 0xfe) {
        *pbVar44 = *pbVar44 + bVar37;
        puVar19 = puVar33;
        uStack_64 = in_ES;
        goto code_r0x004048f5;
      }
      *pcVar8 = *pcVar8 + bVar37;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) |
                                          *(byte *)((int)puVar33 + -0x5b),cVar6));
      cVar5 = *pcVar8;
      *pcVar8 = *pcVar8 + bVar37;
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_ES);
      uVar22 = in_ES;
      if (SCARRY1(cVar5,bVar37) == *pcVar8 < '\0') goto code_r0x00404927;
      *pcVar8 = *pcVar8 + bVar37;
      bVar4 = bVar4 + 4;
      pbVar45 = (byte *)CONCAT31(uVar17,bVar4);
      if (0xfd < bVar37) break;
      *pbVar45 = *pbVar45 + bVar4;
      puVar36 = (uint *)CONCAT22(uVar23,CONCAT11(bVar28 | (byte)*param_2,(char)puVar36));
      *(byte *)puVar33 = (byte)*puVar33 + cVar6;
      *pbVar44 = *pbVar44 ^ bVar4;
    }
    *pbVar45 = *pbVar45 + bVar4;
    puStack_68 = (uint *)((uint)puStack_68 & 0xffff0000);
  }
  else {
    pbVar45[0x6fdbe8fe] = pbVar45[0x6fdbe8fe] + (char)pbVar9;
code_r0x00404803:
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    uVar18 = (undefined3)((uint)puVar19 >> 8);
    bVar28 = (byte)puVar19 | (byte)*puVar33;
    puVar36 = (uint *)CONCAT31(uVar18,bVar28);
    uVar23 = (undefined2)((uint)puVar33 >> 0x10);
    cVar6 = (char)puVar33;
    cVar38 = (char)((uint)puVar33 >> 8) + *(byte *)((int)puVar33 + 0x6f);
    puVar33 = (uint *)CONCAT22(uVar23,CONCAT11(cVar38,cVar6));
    bVar4 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    bVar47 = 0xf9 < bVar4;
    uVar17 = (undefined3)((uint)pbVar9 >> 8);
    cVar5 = bVar4 + 6;
    pbVar45 = (byte *)CONCAT31(uVar17,cVar5);
    in_SS = uStack_64;
    if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404880;
    *pbVar45 = *pbVar45 + cVar5;
    piVar15 = (int *)CONCAT31(uVar17,bVar4 + 0x2e);
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    bVar28 = bVar28 | *(byte *)((int)param_2 + (int)piVar15);
    puVar36 = (uint *)CONCAT31(uVar18,bVar28);
    in_SS = puStack_60._0_2_;
    if ((POPCOUNT(bVar28) & 1U) != 0) {
      puVar19 = (uint *)((int)piVar15 + *piVar15);
      *(byte *)param_2 = (byte)*param_2 + bVar28;
      pbVar44 = pbVar44 + param_2[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar15 = (char)*piVar15 + bVar4 + 0x2e;
    cVar5 = bVar4 + 0x34;
    pcVar8 = (char *)CONCAT31(uVar17,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      pcVar8[0x28] = pcVar8[0x28] + cVar29;
      goto code_r0x00404899;
    }
    *pcVar8 = *pcVar8 + cVar5;
    piVar15 = (int *)CONCAT31(uVar17,bVar4 + 0x5c);
    *piVar15 = *piVar15 + (int)piVar15;
    cVar29 = (bVar28 | bRam07022c07) - (char)*piVar15;
    puVar36 = (uint *)CONCAT31(uVar18,cVar29);
    pcVar8 = (char *)CONCAT31(uVar17,bVar4 + 0x5a);
    bVar28 = (byte)((uint)puVar19 >> 8);
    *(byte *)param_2 = (byte)*param_2 | bVar28;
    *(uint *)((int)param_2 + (int)pcVar8) = *(uint *)((int)param_2 + (int)pcVar8) | 0x73060000;
    *param_2 = *param_2 | 0x73060000;
    cVar38 = cVar38 + *(byte *)((int)puVar33 + 0x72);
    puVar33 = (uint *)CONCAT22(uVar23,CONCAT11(cVar38,cVar6));
    *pcVar8 = *pcVar8 + bVar4 + 0x5a;
    cVar5 = bVar4 + 0x60;
    pcVar8 = (char *)CONCAT31(uVar17,cVar5);
    if ((POPCOUNT(cVar5) & 1U) == 0) {
      *pcVar8 = *pcVar8 + cVar5;
      piVar15 = (int *)CONCAT31(uVar17,bVar4 + 0x88);
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_DS);
      puVar36 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((bVar28 | (byte)*param_2) + (char)*piVar15,cVar29));
      *(char *)piVar15 = (char)*piVar15;
      cVar6 = cVar6 - *pbVar44;
      cVar38 = cVar38 + *(char *)(CONCAT31((int3)((uint)puVar33 >> 8),cVar6) + 0x73);
      *(byte *)piVar15 = (char)*piVar15 + bVar4 + 0x88;
      bVar4 = bVar4 + 0xb2 & (byte)*param_2;
      puVar46 = (uint *)((int)puVar46 + iRam73060073);
      *(char *)CONCAT31(uVar17,bVar4) = *(char *)CONCAT31(uVar17,bVar4) + bVar4;
      pcVar8 = (char *)CONCAT31(uVar17,bVar4 + 0x2a);
      puVar33 = (uint *)CONCAT22(uVar23,CONCAT11(cVar38 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar38,
                                                  cVar6)) + 0x74),cVar6));
      *pcVar8 = *pcVar8 + bVar4 + 0x2a;
      piVar15 = (int *)CONCAT31(uVar17,bVar4 + 0x54);
      in_SS = puStack_68._0_2_;
      goto code_r0x0040486e;
    }
    pbVar45 = (byte *)*(undefined6 *)pcVar8;
    *pbVar44 = *pbVar44 + (char)*(undefined6 *)pcVar8;
  }
  uVar17 = (undefined3)((uint)pbVar45 >> 8);
  bVar4 = (byte)pbVar45 | *pbVar44;
  pcVar8 = (char *)CONCAT31(uVar17,bVar4);
  *pcVar8 = *pcVar8 + bVar4;
  *puVar33 = (uint)(*puVar33 + (int)puVar36);
  puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                             CONCAT11((char)((uint)puVar33 >> 8) + *(byte *)((int)puVar33 + 0x75),
                                      (char)puVar33));
  *pcVar8 = *pcVar8 + bVar4;
  pcVar8 = (char *)CONCAT31(uVar17,bVar4 + 0x6f);
  *pcVar8 = *pcVar8 + bVar4 + 0x6f;
  pcVar8 = (char *)((int)((uint)pcVar8 & 0x7e26062d) - *(int *)((uint)pcVar8 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
  uRam00c16f07 = SUB41(pcVar8,0);
code_r0x004048de:
  cVar5 = (char)pcVar8;
  *pbVar44 = *pbVar44 + cVar5;
  *pcVar8 = *pcVar8 + cVar5;
  *(byte **)(pcVar8 + (int)puVar36) = (byte *)(*(int *)(pcVar8 + (int)puVar36) + (int)puVar36);
  puStack_68 = (uint *)CONCAT22(puStack_68._2_2_,uStack_64);
  bVar4 = *(byte *)((int)puVar33 + 0x75);
  *pcVar8 = *pcVar8 + cVar5;
  pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5 + 'o');
  pbVar44 = pbVar44 + 1;
  *pcVar8 = *pcVar8 + cVar5 + 'o';
  pbStack_6c = (byte *)CONCAT22(pbStack_6c._2_2_,uStack_64);
  puVar19 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                             CONCAT11((char)((uint)puVar33 >> 8) + bVar4,(char)puVar33));
  puVar41 = puVar33;
  in_SS = uStack_64;
code_r0x004048f5:
  puVar33 = puVar19;
  pcVar8 = (char *)((int)((uint)pcVar8 & 0x7e26062d) - *(int *)((uint)pcVar8 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
  do {
    uRam00c36f08 = SUB41(pcVar8,0);
    while( true ) {
      bVar4 = *pbVar44;
      cVar5 = (char)pcVar8;
      *pbVar44 = *pbVar44 + cVar5;
      iStack_70 = CONCAT22(iStack_70._2_2_,uStack_64);
      if (SCARRY1(bVar4,cVar5) == (char)*pbVar44 < '\0') {
        pcVar8[(int)puVar41] = pcVar8[(int)puVar41] + cVar5;
        goto code_r0x00404982;
      }
      *pcVar8 = *pcVar8 + cVar5;
      pbVar45 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5 + '*');
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_DS);
      bVar4 = (byte)((uint)puVar36 >> 8);
      cVar5 = (char)puVar36;
      bVar28 = bVar4 + *pbVar45;
      pbVar45 = pbVar45 + (uint)CARRY1(bVar4,*pbVar45) + *(int *)pbVar45;
      *(byte *)param_2 = (byte)*param_2 + cVar5;
      cVar6 = (char)puVar33 - *pbVar44;
      bVar4 = *pbVar45;
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar28 + *pbVar45,cVar5));
      iVar14 = *(int *)pbVar45;
      *(byte *)param_2 = (byte)*param_2 + cVar5;
      pcVar8 = (char *)CONCAT31((int3)((uint)(pbVar45 + (uint)CARRY1(bVar28,bVar4) + iVar14) >> 8),
                                (char)(pbVar45 + (uint)CARRY1(bVar28,bVar4) + iVar14) -
                                *(byte *)((int)param_2 + 3));
      puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                 CONCAT11((char)((uint)puVar33 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)puVar33 >> 8),cVar6) +
                                                   -0x3a),cVar6));
code_r0x00404921:
      bVar4 = (byte)pcVar8;
      *pcVar8 = *pcVar8 + bVar4;
      pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),bVar4 + 0x6f);
      *(byte *)puVar36 = ((byte)*puVar36 - (bVar4 + 0x6f)) - (0x90 < bVar4);
      uVar22 = uStack_64;
code_r0x00404927:
      uStack_64 = uVar22;
      *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
      pbStack_6c = (byte *)CONCAT22(pbStack_6c._2_2_,in_SS);
      *(byte *)puVar36 = (byte)*puVar36 + 1;
      cVar5 = (char)((uint)puVar36 >> 8) - pbVar44[2];
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(cVar5,(char)puVar36));
      if ((POPCOUNT(cVar5) & 1U) == 0) break;
      pcVar8 = pcVar8 + -0x1b7e2606;
      *pcVar8 = *pcVar8 + (char)pcVar8;
      pcVar8 = (char *)CONCAT22((short)((uint)pcVar8 >> 0x10),
                                CONCAT11((byte)((uint)pcVar8 >> 8) | (byte)param_2[0x30dbc2],
                                         (char)pcVar8));
    }
code_r0x00404931:
    *pcVar8 = *pcVar8 + (char)pcVar8;
    cVar5 = (char)pcVar8 + '\x02';
    pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5);
    pbVar45 = pbVar44;
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  do {
    bVar4 = (byte)pcVar8;
    *pcVar8 = *pcVar8 + bVar4;
    uVar17 = (undefined3)((uint)pcVar8 >> 8);
    piVar15 = (int *)CONCAT31(uVar17,bVar4 + 0x6f);
    *puVar36 = (*puVar36 - (int)piVar15) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
    iVar14 = *(int *)((int)puVar46 + 0x1a);
    *piVar15 = *piVar15 + (int)piVar15;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar45);
    *(byte *)puVar36 = (byte)*puVar36 + 1;
    bVar4 = (bVar4 + 0x6f) - (char)*piVar15;
    pbVar44 = (byte *)CONCAT31(uVar17,bVar4);
    *pbVar44 = *pbVar44 + bVar4;
    pbVar45 = pbVar45 + *(int *)pbVar44;
    cVar5 = bVar4 + *pbVar44;
    puVar11 = (ushort *)CONCAT31(uVar17,cVar5);
    *puVar11 = *puVar11 + (ushort)CARRY1(bVar4,*pbVar44) * (((ushort)puVar11 & 3) - (*puVar11 & 3));
    *(char *)puVar11 = (char)*puVar11 + cVar5;
    *(char *)puVar11 = (char)*puVar11 + cVar5;
    *(char *)puVar11 = (char)*puVar11 + cVar5;
    puVar46 = (uint *)((int)puVar46 + puVar33[0x1c]);
    puVar41 = (uint *)((int)puVar41 + iVar14);
code_r0x0040495b:
    cVar5 = (char)puVar11;
    *(char *)puVar11 = (char)*puVar11 + cVar5;
    uVar17 = (undefined3)((uint)puVar11 >> 8);
    cVar6 = cVar5 + '\x02';
    pcVar8 = (char *)CONCAT31(uVar17,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      *param_2 = (uint)(*param_2 + (int)puVar41);
      pbVar44 = pbVar45 + 1;
      out(*pbVar45,(short)param_2);
      puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                 CONCAT11((char)((uint)puVar33 >> 8) +
                                          *(byte *)((int)puVar33 + -0x3b),(char)puVar33));
      goto code_r0x00404931;
    }
    *pcVar8 = *pcVar8 + cVar6;
    pbVar45 = (byte *)(CONCAT31(uVar17,cVar5 + '}') + (int)puVar41);
    *pbVar45 = *pbVar45 + cVar5 + '}';
    *pcStack_34 = *pcStack_34 + (char)pcStack_34;
    puVar36 = (uint *)CONCAT22((short)((uint)iStack_38 >> 0x10),
                               CONCAT11((byte)((uint)iStack_38 >> 8) | *(byte *)(iStack_38 * 3),
                                        (char)iStack_38));
    puVar46 = (uint *)(pbStack_50 + *(int *)((int)puStack_40 + 0x6f));
    pcVar8 = pcStack_34;
    param_2 = puStack_3c;
    puVar33 = puStack_40;
    puVar41 = puStack_48;
    pbVar45 = pbStack_4c;
    while( true ) {
      cVar5 = (char)pcVar8;
      *pcVar8 = *pcVar8 + cVar5;
      uVar17 = (undefined3)((uint)pcVar8 >> 8);
      cVar6 = cVar5 + '\x02';
      pcVar8 = (char *)CONCAT31(uVar17,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) break;
      *pcVar8 = *pcVar8 + cVar6;
      pcVar8 = (char *)CONCAT31(uVar17,cVar5 + '}');
      out(*(undefined4 *)pbVar45,(short)param_2);
      *pcVar8 = *pcVar8 + cVar5 + '}';
code_r0x00404982:
      puStack_5c = (uint *)CONCAT22(puStack_5c._2_2_,in_ES);
      *(byte *)puStack_54 = (byte)*puStack_54 + (char)in_ES;
      puVar36 = (uint *)CONCAT22((short)((uint)pbStack_58 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_58 >> 8) |
                                          pbStack_58[(int)pbStack_6c],(char)pbStack_58));
      puVar46 = (uint *)(iStack_70 + *(int *)((int)puStack_60 + 0x71));
      puVar19 = puStack_54;
      param_2 = puStack_5c;
      puVar33 = puStack_60;
      pbVar45 = pbStack_6c;
      while( true ) {
        cVar5 = (char)puVar19;
        *(byte *)puVar19 = (byte)*puVar19 + cVar5;
        uVar17 = (undefined3)((uint)puVar19 >> 8);
        cVar6 = cVar5 + '\x02';
        puVar11 = (ushort *)CONCAT31(uVar17,cVar6);
        puVar41 = puStack_68;
        if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar11 = (char)*puVar11 + cVar6;
        bVar28 = cVar5 + 0x7d;
        iVar14 = CONCAT31(uVar17,bVar28);
        pbVar44 = (byte *)(iVar14 + (int)puStack_68);
        bVar4 = *pbVar44;
        *pbVar44 = *pbVar44 + bVar28;
        uVar35 = *puVar36;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
        pcVar8 = (char *)(((iVar14 - uVar35) - (uint)CARRY1(bVar4,bVar28)) + -0x727b0317);
        cVar5 = (char)pcVar8;
        *pcVar8 = *pcVar8 + cVar5;
        uVar17 = (undefined3)((uint)pcVar8 >> 8);
        cVar6 = cVar5 + '\x02';
        pcVar8 = (char *)CONCAT31(uVar17,cVar6);
        if ((POPCOUNT(cVar6) & 1U) != 0) break;
        *pcVar8 = *pcVar8 + cVar6;
        bVar28 = cVar5 + 0x7d;
        iVar14 = CONCAT31(uVar17,bVar28);
        pbVar44 = (byte *)(iVar14 + (int)puStack_68);
        bVar4 = *pbVar44;
        *pbVar44 = *pbVar44 + bVar28;
        puVar19 = (uint *)((iVar14 - *puVar36) - (uint)CARRY1(bVar4,bVar28));
        puVar41 = param_2;
code_r0x004049b4:
        *(byte *)puVar41 = (byte)*puVar41 + (char)puVar36;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                   ((char)puVar41 - (byte)*puVar46) - *pbVar45);
        bVar28 = pbVar45[0x72];
        *puVar19 = *puVar19 & (uint)puVar36;
        pbVar44 = (byte *)((int)puVar19 + 2);
        *pbVar44 = *pbVar44 + (char)((uint)puVar41 >> 8);
        bVar4 = *pbVar44;
        puVar25 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),(char)puVar33 - bVar28);
        pbVar44 = pbVar45;
        while (puVar33 = puVar25, pbVar45 = pbVar44, (POPCOUNT(bVar4) & 1U) == 0) {
          cVar5 = (char)puVar19;
          *(byte *)puVar19 = (byte)*puVar19 + cVar5;
          uVar17 = (undefined3)((uint)puVar19 >> 8);
          cVar6 = cVar5 + '\x03';
          pbVar9 = (byte *)CONCAT31(uVar17,cVar6);
          pbVar45 = pbVar44 + 4;
          out(*(undefined4 *)pbVar44,(short)param_2);
          in_SS = pbStack_50._0_2_;
          *pbVar9 = *pbVar9 + cVar6;
          cVar29 = (char)puVar36;
          puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                     CONCAT11((byte)((uint)puVar36 >> 8) | *pbVar9,cVar29));
          *(int *)pbVar9 = *(int *)pbVar9 - (int)pbVar9;
          *(byte *)param_2 = (byte)*param_2 + cVar29;
          cVar29 = (char)puVar25 - pbVar44[6];
          puVar33 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),cVar29);
          if ((POPCOUNT(cVar29) & 1U) != 0) {
            pbVar44 = (byte *)((int)puVar46 + (int)puStack_68 * 2);
            *pbVar44 = *pbVar44 + cVar6;
            ppbVar43 = (byte **)puStack_68;
            goto code_r0x00404a51;
          }
          *pbVar9 = *pbVar9 + cVar6;
          puVar19 = (uint *)CONCAT31(uVar17,cVar5 + 'r');
          *(byte *)puVar19 = (byte)*puVar19;
          pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,uStack_64);
          do {
            puVar46 = (uint *)((int)puVar46 + puVar33[0x1c]);
            bVar4 = (byte)puVar19;
            *(byte *)puVar19 = (byte)*puVar19 + bVar4;
            uVar17 = (undefined3)((uint)puVar19 >> 8);
            bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
            puVar19 = (uint *)CONCAT31(uVar17,bVar4);
            cVar5 = (char)puVar36;
            *(byte *)param_2 = (byte)*param_2 + cVar5;
            bVar28 = (char)((uint)puVar36 >> 8) - pbVar45[2];
            puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar28,cVar5));
            puVar41 = param_2;
            if ((POPCOUNT(bVar28) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar19 = (byte)*puVar19 + bVar4;
            bVar37 = bVar4 + 2;
            puVar19 = (uint *)CONCAT31(uVar17,bVar37);
            ppbVar42 = (byte **)puStack_68;
            if ((POPCOUNT(bVar37) & 1U) == 0) goto code_r0x004049f5;
            pbVar45 = pbStack_50;
          } while (0xfd < bVar4);
          *(byte *)puVar19 = (byte)*puVar19 | bVar37;
          puVar25 = puVar33;
          pbVar44 = pbStack_50;
          bVar4 = (byte)*puVar19;
        }
      }
    }
    *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
    pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + bVar4;
    uVar17 = (undefined3)((uint)puVar19 >> 8);
    bVar37 = bVar4 + 0x6f;
    pbVar9 = (byte *)CONCAT31(uVar17,bVar37);
    *puVar36 = (*puVar36 - (int)pbVar9) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    pbVar44 = (byte *)((int)ppbVar42 + *(int *)((int)puVar46 + 0x1a));
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    uVar18 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | *pbVar45;
    param_2 = (uint *)CONCAT31(uVar18,bVar4);
    *(byte *)puVar36 = (byte)*puVar36 + 1;
    cVar6 = bVar37 - *pbVar9;
    pbVar45 = pbVar45 + (-(uint)(bVar37 < *pbVar9) - *(int *)CONCAT31(uVar17,cVar6));
    uVar12 = CONCAT31(uVar17,cVar6 + *(char *)CONCAT31(uVar17,cVar6));
    bVar47 = CARRY1(bRam14110000,bVar28);
    bRam14110000 = bRam14110000 + bVar28;
    puVar19 = (uint *)((int)puVar33 + (int)pbVar45 * 2);
    uVar35 = *puVar19;
    uVar1 = uVar12 + *puVar19;
    puVar13 = (undefined4 *)(uVar1 + bVar47);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar13 = uVar2;
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,uStack_64);
    uVar35 = (uint)(CARRY4(uVar12,uVar35) || CARRY4(uVar1,(uint)bVar47));
    puVar19 = (uint *)((int)puVar13 + uRam7d020511 + uVar35);
    ppbVar40 = &pbStack_58;
    ppbVar43 = &pbStack_58;
    ppbVar42 = &pbStack_58;
    pbStack_58 = pbVar44;
    cVar6 = '\x03';
    do {
      pbVar44 = pbVar44 + -4;
      ppbVar40 = ppbVar40 + -1;
      *ppbVar40 = (byte *)*(undefined4 *)pbVar44;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    pbStack_50 = (byte *)&pbStack_58;
    pbRam00c82802 =
         (byte *)((int)puVar19 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar13,uRam7d020511) ||
                      CARRY4((int)puVar13 + uRam7d020511,uVar35))));
    bVar37 = *pbVar45;
    cVar6 = (char)puVar19;
    *pbVar45 = *pbVar45 + cVar6;
  } while (SCARRY1(bVar37,cVar6) == (char)*pbVar45 < '\0');
  *(byte *)puVar19 = (byte)*puVar19 + cVar6;
  iVar14 = CONCAT31((int3)((uint)puVar19 >> 8),cVar6 + '\x11') + 0xc57b;
  bVar28 = (byte)iVar14;
  *param_2 = *param_2 ^ (uint)puVar33;
  param_2 = (uint *)CONCAT31(uVar18,bVar4 + (byte)*puVar36);
  iVar14 = (CONCAT31((int3)((uint)iVar14 >> 8),bVar28 + 0x6f) - (uint)(0x90 < bVar28)) + -0x18093a86
  ;
  cVar6 = (char)iVar14;
  uVar17 = (undefined3)((uint)iVar14 >> 8);
  cVar5 = cVar6 + '\x02';
  pbVar44 = (byte *)CONCAT31(uVar17,cVar5);
  if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar44 = *pbVar44 + cVar5;
  pbVar9 = (byte *)CONCAT31(uVar17,cVar6 + 'q');
  ppbVar43 = &pbStack_58;
code_r0x00404a51:
  pbVar44 = pbVar9 + 1;
  cVar5 = (char)pbVar44;
  *pbVar44 = *pbVar44 + cVar5;
  puVar33 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),
                             CONCAT11((char)((uint)puVar25 >> 8) - cVar5,cVar29));
  *pbVar44 = *pbVar44 + cVar5;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar36);
  pbVar9 = pbVar9 + 0x757b03;
  pbVar44 = (byte *)((int)puVar46 + (int)ppbVar43 * 2);
  cVar5 = (char)pbVar9;
  *pbVar44 = *pbVar44 + cVar5;
  *pbVar9 = *pbVar9 + cVar5;
  *pbVar45 = *pbVar45 - (char)((uint)pbVar9 >> 8);
  *pbVar9 = *pbVar9 + cVar5;
  puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar43 + -0x3a));
  *pbVar9 = *pbVar9 + cVar5;
  pbVar44 = (byte *)(CONCAT31((int3)((uint)pbVar9 >> 8),cVar5 + '\x11') + 0x757b02);
  pbVar9 = (byte *)((int)puVar46 + (int)ppbVar43 * 2);
  bVar28 = (byte)pbVar44;
  *pbVar9 = *pbVar9 + bVar28;
  bVar4 = *pbVar44;
  *pbVar44 = *pbVar44 + bVar28;
  puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_64);
  pbRam011006fe = pbVar44 + (int)(pbRam011006fe + CARRY1(bVar4,bVar28));
  bVar4 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar28;
  if (!CARRY1(bVar4,bVar28)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar44;
    *pbVar44 = *pbVar44 + bVar4;
    bVar37 = (byte)puVar36;
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((byte)((uint)puVar36 >> 8) | *pbVar44,bVar37));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar17 = (undefined3)((uint)pbVar44 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar5 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar8 = (char *)CONCAT31(uVar17,cVar5);
    *pcVar8 = *pcVar8 + cVar5;
    puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar43 + -0x39));
    *pcVar8 = *pcVar8 + cVar5;
    iVar14 = CONCAT31(uVar17,cVar5 + '\x11') + 0xc57b;
    iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar14;
    bVar28 = bVar4 + 0x6f;
    pbVar44 = (byte *)CONCAT31((int3)((uint)iVar14 >> 8),bVar28);
    *puVar36 = (*puVar36 - (int)pbVar44) - (uint)(0x90 < bVar4);
    uVar35 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar37;
    pbRam011106fe = pbVar44 + (int)(pbRam011106fe + CARRY1((byte)uVar35,bVar37));
    bVar4 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar28;
    if (!CARRY1(bVar4,bVar28)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar44 = pbVar44 + *(int *)pbVar44;
    bVar4 = (byte)puVar36;
    bVar28 = (byte)((uint)puVar36 >> 8) | *pbVar44;
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar28,bVar4));
    *pbVar44 = *pbVar44 - (char)pbVar44;
    *(byte *)puVar33 = (byte)*puVar33 + bVar28;
    out(*(undefined4 *)pbVar45,(short)param_2);
    *puVar36 = *puVar36 & (uint)pbVar44;
    uVar35 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar4;
    pbVar44 = pbVar44 + (uint)CARRY1((byte)uVar35,bVar4) + *(int *)(pbVar45 + 4);
    *pbVar44 = *pbVar44 + (char)pbVar44;
    *(byte *)puVar36 = (byte)*puVar36 + (char)param_2;
    pbVar45 = pbVar45 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar45,(short)param_2);
      pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),(byte)pbVar44 & (byte)*puVar36);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar36;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar33[5],
                                          (char)param_2));
      *(byte **)pbVar44 = pbVar44 + *(int *)pbVar44;
      pbVar45 = pbVar45 + 4;
code_r0x00404ad4:
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_64);
      pbVar44 = (byte *)((uint)pbVar44 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar44;
code_r0x00404add:
      bVar4 = (byte)pbVar44;
      uVar17 = (undefined3)((uint)pbVar44 >> 8);
      cVar5 = bVar4 + 8;
      pbVar44 = (byte *)CONCAT31(uVar17,cVar5);
      if (SCARRY1(bVar4,'\b') == cVar5 < '\0') break;
      *pbVar44 = *pbVar44 + cVar5;
      cVar5 = bVar4 + 10;
      piVar15 = (int *)CONCAT31(uVar17,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *piVar15 = (int)(*piVar15 + (int)piVar15);
        goto code_r0x00404b18;
      }
      *(char *)piVar15 = (char)*piVar15 + cVar5;
      puVar19 = (uint *)CONCAT31(uVar17,bVar4 + 0x7c);
      *puVar19 = *puVar19 & (uint)puVar36;
      *(char *)((int)puVar19 + 0x11) = *(char *)((int)puVar19 + 0x11) + (char)((uint)param_2 >> 8);
      cVar5 = (char)((int)puVar19 + 0xc67b);
      uVar17 = (undefined3)((uint)((int)puVar19 + 0xc67b) >> 8);
      bVar4 = cVar5 + 8;
      pbVar44 = (byte *)CONCAT31(uVar17,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar44 = *pbVar44 + bVar4;
        cRam02060000 = cVar5 + 'w';
        puVar19 = (uint *)CONCAT31(uVar17,cRam02060000);
        *(byte *)puVar19 = (byte)*puVar19 + cRam02060000;
        cVar5 = (char)puVar36;
        puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                   CONCAT11((byte)((uint)puVar36 >> 8) | (byte)*puVar19,cVar5));
        *puVar19 = *puVar19 - (int)puVar19;
        *(byte *)param_2 = (byte)*param_2 + cVar5;
        pbVar44 = pbVar45 + 4;
        out(*(undefined4 *)pbVar45,(short)param_2);
        pbVar45 = pbVar44;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar8 = (char *)((uint)puVar19 | *puVar19);
        goto code_r0x00404b89;
      }
      bVar28 = *pbVar44;
      *pbVar44 = *pbVar44 + bVar4;
      *(byte **)pbVar45 = pbVar44 + (uint)CARRY1(bVar28,bVar4) + *(int *)pbVar45;
    }
    *pbVar45 = *pbVar45 + 1;
    *puVar36 = (uint)(pbVar44 + (uint)(0xf7 < bVar4) + *puVar36);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + 'r');
    piVar15 = (int *)((uint)puVar19 | *puVar19);
    param_2 = puStack_74;
code_r0x00404b18:
    bRam11060000 = (byte)piVar15;
    iVar14 = CONCAT31((int3)((uint)((int)piVar15 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar15 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar14;
    iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),bVar4 + 0x6f);
    *puVar36 = (*puVar36 - iVar14) - (uint)(0x90 < bVar4);
    cVar5 = (char)puVar36;
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    bVar28 = (byte)((uint)puVar33 >> 8);
    bVar30 = (byte)((uint)param_2 >> 8) | bVar28;
    pcVar10 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar30,(byte)param_2));
    piVar15 = (int *)(iVar14 + 0x73060001);
    *(byte *)puVar36 = (byte)*puVar36 & (byte)piVar15;
    *pcVar10 = *pcVar10 + cVar5;
    bVar37 = (byte)((uint)puVar36 >> 8);
    *(byte *)piVar15 = *(char *)piVar15 - bVar37;
    *(byte *)piVar15 = *(char *)piVar15 + (byte)piVar15;
    iVar14 = *piVar15;
    *piVar15 = *piVar15 - (int)piVar15;
    *(byte *)puVar33 = (byte)*puVar33 + bVar37;
    pcVar8 = (char *)((uint)piVar15 | *puVar46);
    *pcVar10 = *pcVar10 - bVar37;
    bVar4 = (byte)pcVar8;
    *pcVar8 = *pcVar8 + bVar4;
    ppbVar43 = (byte **)(((int)ppbVar43 - iVar14) - *(int *)(pcVar8 + ((int)ppbVar43 - iVar14)));
    uVar23 = (undefined2)((uint)puVar33 >> 0x10);
    bVar21 = (byte)puVar33;
    cVar6 = bVar28 + *(byte *)((int)puVar33 + 0x76);
    pbVar9 = (byte *)CONCAT22(uVar23,CONCAT11(cVar6,bVar21));
    *pcVar8 = *pcVar8 + bVar4;
    uVar17 = (undefined3)((uint)pcVar8 >> 8);
    uVar12 = CONCAT31(uVar17,bVar4 + 7);
    puVar33 = (uint *)((int)ppbVar43 + -0x1faeef1);
    uVar35 = *puVar33;
    uVar1 = *puVar33 + uVar12;
    *puVar33 = uVar1 + (0xf8 < bVar4);
    puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_64);
    puVar33 = puStack_74;
    bVar28 = bVar4 + 7 + (byte)*puVar36 +
             (CARRY4(uVar35,uVar12) || CARRY4(uVar1,(uint)(0xf8 < bVar4)));
    puVar19 = (uint *)CONCAT31(uVar17,bVar28);
    bVar4 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar28;
    if (CARRY1(bVar4,bVar28)) break;
    *(byte *)puVar19 = (byte)*puVar19 + bVar28;
    puVar33 = (uint *)CONCAT22(uVar23,CONCAT11(cVar6 + pbVar9[0x76],bVar21));
    uStack_78 = uStack_64;
  }
  *(byte *)puVar19 = (byte)*puVar19 + bVar28;
  uVar18 = (undefined3)((uint)pcVar10 >> 8);
  bVar24 = (byte)param_2 | *pbVar9;
  param_2 = (uint *)CONCAT31(uVar18,bVar24);
  pcRam2b060000 = (char *)CONCAT31(uVar17,bVar28 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar28 + 0x39)) - (0xd7 < (byte)(bVar28 + 0x11));
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar37;
  pbVar44 = pbVar45 + 4;
  out(*(undefined4 *)pbVar45,(short)param_2);
  bVar4 = (bVar28 + 0x37) - CARRY1(bVar4,bVar37);
  piVar15 = (int *)CONCAT31(uVar17,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    iVar14 = CONCAT31(uVar17,bVar4 + 0x11) + 0xc77b;
    pcVar8 = (char *)CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + 'r');
    pcVar8[0x28] = pcVar8[0x28] + bVar30;
code_r0x00404b89:
    cVar5 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar5;
    *pcVar8 = *pcVar8 + cVar5;
    *pcVar8 = *pcVar8 + cVar5;
    puVar11 = (ushort *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5 + 'r');
    uVar7 = (ushort)puVar11 | *puVar11;
    pcVar8 = (char *)CONCAT22((short)((uint)pcVar8 >> 0x10),uVar7);
    bRam11060000 = (byte)uVar7;
    out(*(undefined4 *)pbVar44,(short)param_2);
    *pcVar8 = *pcVar8 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar4;
  pbVar26 = (byte *)((int)ppbVar43 - *(int *)((int)puVar46 + 0x21));
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pcVar8 = (char *)CONCAT31(uVar18,bVar24 | *pbVar9);
  puVar46 = (uint *)(pbVar45 + 8);
  out(*(undefined4 *)pbVar44,(short)pcVar8);
  uVar35 = *puVar36;
  *pcVar8 = *pcVar8 + cVar5;
  uVar35 = CONCAT31(uVar17,bVar4 & (byte)uVar35) | 0x767b02;
  *(byte *)((int)puVar36 + (int)pcVar8) = *(byte *)((int)puVar36 + (int)pcVar8) + (char)uVar35;
  iVar14 = uVar35 + 0xc67b;
  cVar38 = (char)iVar14;
  uVar17 = (undefined3)((uint)iVar14 >> 8);
  cVar29 = cVar38 + 'r';
  pcVar8 = (char *)CONCAT31(uVar17,cVar29);
  pcVar8[0x28] = pcVar8[0x28] + bVar30;
  *pcVar8 = *pcVar8 + cVar29;
  uVar22 = (undefined2)((uint)puVar36 >> 0x10);
  bVar37 = bVar37 | *(byte *)((int)puStack_74 + -0x5e);
  puVar36 = (uint *)CONCAT22(uVar22,CONCAT11(bVar37,cVar5));
  *pcVar8 = *pcVar8 + cVar29;
  puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_78);
  pbVar44 = (byte *)CONCAT22(uVar23,CONCAT11(cVar6 + pbVar9[0x76],bVar21));
  *pcVar8 = *pcVar8 + cVar29;
  puVar19 = (uint *)CONCAT31(uVar17,cVar38 + -0x1c);
  pcVar8 = (char *)((uint)puVar19 | *puVar19);
  bVar47 = (POPCOUNT((uint)pcVar8 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar8;
  puVar19 = puStack_74;
  pbVar9 = pbVar44;
  pbVar34 = pbVar26;
  puVar41 = puVar33;
  uVar23 = uStack_78;
  if (!bVar47) goto code_r0x00404ca8;
  *pcVar8 = *pcVar8 + cRam02060000;
  puVar19 = (uint *)CONCAT31((int3)((uint)pcVar8 >> 8),cRam02060000 + 'r');
  *puVar19 = *puVar19 & (uint)puVar36;
  *(char *)((int)puVar19 + 0x11) = *(char *)((int)puVar19 + 0x11) + (char)((ushort)uStack_78 >> 8);
  iVar14 = (int)puVar19 + 0xc77b;
  uVar17 = (undefined3)((uint)iVar14 >> 8);
  cRam02060000 = (char)iVar14 + '\t';
  pbVar9 = (byte *)CONCAT31(uVar17,cRam02060000);
  out(*puVar46,uStack_78);
  *pbVar9 = *pbVar9 + cRam02060000;
  puVar41 = (uint *)CONCAT22(uVar22,CONCAT11(bVar37 | *pbVar9,cVar5));
  *(int *)pbVar9 = *(int *)pbVar9 - (int)pbVar9;
  *(byte *)puStack_74 = (byte)*puStack_74 + cVar5;
  out(*(undefined4 *)(pbVar45 + 0xc),uStack_78);
  puVar25 = puStack_74;
  puVar46 = (uint *)(pbVar45 + 0x10);
  uVar23 = uStack_78;
  if ((POPCOUNT((byte)*puStack_74) & 1U) != 0) goto code_r0x00404cca;
  *pbVar9 = *pbVar9 + cRam02060000;
  puVar11 = (ushort *)CONCAT31(uVar17,(char)iVar14 + '{');
  uVar7 = (ushort)puVar11 | *puVar11;
  pcVar8 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),uVar7);
  bVar4 = (byte)uVar7;
  out(*(uint *)(pbVar45 + 0x10),uStack_78);
  pbVar9 = (byte *)((int)puVar41 + 1);
  bRam11060000 = bVar4;
  *pcVar8 = *pcVar8 + bVar4;
  puVar36 = (uint *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                             CONCAT11((byte)((uint)pbVar9 >> 8) | bRam110cde91,(char)pbVar9));
  pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),bVar4 - 7);
  *puVar33 = (uint)(pcVar8 + (uint)(bVar4 < 7) + *puVar33);
  puVar46 = (uint *)(pbVar45 + 0x18);
  out(*(undefined4 *)(pbVar45 + 0x14),uStack_78);
  puVar19 = (uint *)((int)puStack_74 + 1);
  *pcVar8 = *pcVar8 + (bVar4 - 7);
  pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),bVar21 | (byte)(uVar7 >> 8));
  do {
    bVar4 = (char)pcVar8 - *pcVar8;
    uVar35 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + bVar4;
    cVar5 = bVar4 - CARRY1((byte)uVar35,bVar4);
    *(byte *)puVar19 = *(byte *)puVar19 + cVar5;
    cVar6 = (char)((uint)puVar36 >> 8);
    *(byte *)(puVar33 + 0x673b40) = (byte)puVar33[0x673b40] + cVar6;
    puVar16 = (uint *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5);
    *(byte *)puVar16 = (byte)*puVar16 + cVar5;
    *(byte *)puVar19 = *(byte *)puVar19 + cVar5;
    *(byte **)(pbVar9 + 0x58) = (byte *)(*(int *)(pbVar9 + 0x58) + (int)puVar46);
    puVar41 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar36 >> 0x10),
                                               CONCAT11(cVar6 + (char)((uint)pcVar8 >> 8),
                                                        (char)puVar36)) >> 8),
                               (char)puVar36 + *(char *)((int)puVar16 * 2));
    *(byte *)puVar16 = (byte)*puVar16 + cVar5;
    *(byte *)puVar46 = (byte)*puVar46 + (char)pbVar9;
    puVar25 = puVar19;
    pbVar44 = pbVar9;
_ctor:
    bVar28 = (byte)((uint)puVar41 >> 8);
    uVar35 = *puVar16;
    bVar4 = (byte)puVar41;
    puVar16 = (uint *)((int)puVar16 + (uint)CARRY1(bVar28,(byte)*puVar16) + *puVar16);
    *(byte *)puVar25 = *(byte *)puVar25 + bVar4;
    cVar5 = bVar4 - *(byte *)((int)puVar25 + 3);
    puVar36 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar41 >> 0x10),
                                               CONCAT11(bVar28 + (byte)uVar35,bVar4)) >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      if (*(byte *)((int)puVar25 + 3) <= bVar4) {
        *puVar16 = (uint)(*puVar16 + (int)puVar16);
        puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),(byte)puVar25 | *pbVar44);
        puVar16 = puVar16 + 0x230e;
        puVar41 = puVar36;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
    cVar5 = (char)puVar16 + '\x02';
    pcVar8 = (char *)CONCAT31((int3)((uint)puVar16 >> 8),cVar5);
    bVar47 = (POPCOUNT(cVar5) & 1U) == 0;
    puVar19 = puVar25;
    pbVar9 = pbVar44;
    pbVar34 = pbVar26;
    puVar41 = puVar33;
    uVar23 = puStack_68._0_2_;
code_r0x00404ca8:
    puStack_68._0_2_ = uVar23;
    pcVar10 = pcStack_44;
    puVar25 = (uint *)pbStack_4c;
    pbVar44 = pbStack_50;
    pbVar26 = pbStack_58;
    puVar33 = puStack_60;
    if (bVar47) break;
    *(byte *)puVar19 = *(byte *)puVar19 + (char)puVar36;
    pbVar26 = pbVar34;
    puVar33 = puVar41;
  } while( true );
  *pcVar8 = *pcVar8 + (char)pcVar8;
  bVar4 = (byte)pcStack_44;
  *pcStack_44 = *pcStack_44 + bVar4;
  puVar41 = (uint *)CONCAT22((short)((uint)puStack_48 >> 0x10),
                             CONCAT11((byte)((uint)puStack_48 >> 8) | *pbStack_4c,(char)puStack_48))
  ;
  *pbStack_50 = *pbStack_50 + (char)pbStack_50;
  pbVar45 = (byte *)((int)pcVar10 * 2);
  *pbVar45 = *pbVar45 ^ bVar4;
  uVar3 = *(undefined6 *)pcVar10;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar9 = (byte *)uVar3;
  bVar28 = (byte)uVar3;
  *pbVar9 = *pbVar9 + bVar28;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar28;
  puVar46 = (uint *)((int)puVar41 + 0x11673);
  uVar35 = *puVar46;
  uVar1 = *puVar46;
  *puVar46 = (uint)((byte *)((int)puVar25 + uVar1) + CARRY1(bVar4,bVar28));
  puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,puStack_68._0_2_);
  pbVar9 = pbVar9 + (uint)(CARRY4(uVar35,(uint)puVar25) ||
                          CARRY4((int)puVar25 + uVar1,(uint)CARRY1(bVar4,bVar28))) +
                    *(int *)((int)puVar41 + (int)puVar25);
  puVar46 = puStack_5c;
  uVar23 = puStack_68._0_2_;
code_r0x00404cca:
  puStack_68._0_2_ = uVar23;
  cVar5 = (char)pbVar9 + '\x04';
  puVar16 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
  if (SCARRY1((char)pbVar9,'\x04') == cVar5 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
  puVar19 = puVar46 + 1;
  out(*puVar46,(short)puVar25);
  uVar35 = *puVar41;
  bVar4 = *(byte *)puVar25;
  bVar28 = (byte)puVar41;
  *(byte *)puVar25 = *(byte *)puVar25 + bVar28;
  iVar14 = (CONCAT31((int3)((uint)puVar16 >> 8),(char)puVar16 + '\x03') & uVar35) + iRam00008c38;
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar25;
  pcVar8 = (char *)(iVar14 + (uint)CARRY1(bVar4,bVar28) + 0x1246f);
  bVar4 = *(byte *)puVar25;
  uVar17 = (undefined3)((uint)puVar41 >> 8);
  puVar36 = (uint *)CONCAT31(uVar17,bVar28 | bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar8 >> 8);
  puVar16 = (uint *)(CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + *pcVar8) + 0x1fbeef2);
  uVar35 = *puVar16;
  *puVar16 = (uint)(*puVar16 + (int)puVar16);
  if (CARRY4(uVar35,(uint)puVar16)) {
    *puVar16 = (uint)(*puVar16 + (int)puVar16);
    pcVar8 = (char *)CONCAT31(uVar17,bVar28 | bVar4 | bRam00282809);
    cVar5 = (char)((uint)puVar41 >> 8);
    *pbVar44 = *pbVar44 + cVar5;
    *pcVar8 = *pcVar8 - cVar5;
    *(byte *)puVar16 = *(byte *)puVar16 + (char)puVar16;
    iVar14 = (int)pcVar8 - *(int *)pbVar44;
    puVar46 = puVar46 + 2;
    out(*puVar19,(short)puVar25);
    *puVar16 = (uint)(*puVar16 + (int)puVar16);
    puVar36 = (uint *)CONCAT22((short)((uint)iVar14 >> 0x10),
                               CONCAT11((byte)((uint)iVar14 >> 8) | bRambf73070b,(char)iVar14));
code_r0x00404d15:
    uVar35 = *puVar16;
    bVar4 = (byte)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + bVar4;
    puVar19 = puVar46 + 1;
    out(*puVar46,(short)puVar25);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar28 = bVar4 + in_AF * '\x06';
    puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),
                               bVar28 + (0x90 < (bVar28 & 0xf0) |
                                        CARRY1((byte)uVar35,bVar4) | in_AF * (0xf9 < bVar28)) * '`')
    ;
  }
  *puVar16 = (uint)(*puVar16 + (int)puVar16);
  bVar28 = (byte)puVar16 | (byte)*puVar33;
  puVar46 = puVar19 + 1;
  uVar22 = SUB42(puVar25,0);
  out(*puVar19,uVar22);
  *(byte *)puVar36 = (byte)*puVar36 - bVar28;
  bVar4 = *(byte *)puVar25;
  bVar37 = (byte)puVar36;
  *(byte *)puVar25 = *(byte *)puVar25 + bVar37;
  iVar14 = CONCAT31((int3)((uint)puVar16 >> 8),bVar28) + *puVar46 + (uint)CARRY1(bVar4,bVar37);
  pbVar45 = pbVar26 + -*puVar25;
  uVar17 = (undefined3)((uint)iVar14 >> 8);
  cVar5 = (char)iVar14 + (byte)*puVar46 + (pbVar26 < (byte *)*puVar25);
  puVar41 = (uint *)CONCAT31(uVar17,cVar5);
  bVar4 = (byte)((uint)puVar36 >> 8);
  *(byte *)puVar36 = (byte)*puVar36 - bVar4;
  *puVar41 = (uint)(*puVar41 + (int)puVar41);
  bVar37 = bVar37 | *(byte *)((int)puVar25 + (int)puVar41);
  uVar23 = (undefined2)((uint)puVar36 >> 0x10);
  if ((POPCOUNT(bVar37) & 1U) == 0) {
    *(byte *)puVar41 = (byte)*puVar41 + cVar5;
    pcVar8 = (char *)CONCAT31(uVar17,cVar5 + '\x12');
    *pcVar8 = *pcVar8 + bVar4;
    puVar41 = (uint *)CONCAT31(uVar17,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar36 >> 8),bVar37));
    bVar28 = *(byte *)puVar25;
    *(byte *)puVar25 = *(byte *)puVar25 + bVar37;
    if (!CARRY1(bVar28,bVar37)) {
      pbVar9 = (byte *)((uint)puVar41 | *puVar41);
      out(*puVar46,uVar22);
      *pbVar9 = *pbVar9 + (char)pbVar9;
      bVar28 = *pbVar9;
      piVar15 = (int *)CONCAT22(uVar23,CONCAT11(bVar4 | bVar28,bVar37));
      iVar14 = (int)pbVar9 - *piVar15;
      *(byte *)puVar25 = *(byte *)puVar25 + bVar37;
      puVar41 = puVar19 + 3;
      out(puVar19[2],uVar22);
      uRam12060000 = (undefined1)iVar14;
      *(char *)((int)piVar15 + iVar14) = *(char *)((int)piVar15 + iVar14) - (bVar4 | bVar28);
      *(byte *)puVar25 = *(byte *)puVar25 + bVar37;
      pbVar9 = (byte *)(iVar14 + -0x120edecd);
      *(byte *)puVar41 = (byte)*puVar41 + 1;
      bVar4 = *pbVar9;
      bVar28 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar28;
      pbVar45 = pbVar45 + ((-1 - *(int *)((int)puVar33 + 0x42)) - (uint)CARRY1(bVar4,bVar28));
      *pbVar9 = *pbVar9 + bVar28;
      bVar30 = (byte)pbVar44 | (byte)((uint)pbVar9 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar9;
      bVar4 = *(byte *)puVar25;
      pcVar8 = (char *)(((uint)pbVar9 | 0x11) + 0x511072c);
      puVar46 = puVar19 + 4;
      out(*puVar41,uVar22);
      puVar25 = (uint *)((int)puVar25 + 1);
      *pcVar8 = *pcVar8 + (char)pcVar8;
      bVar28 = (byte)((uint)pcVar8 >> 8);
      pbVar44 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar44 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar44 >> 8) | bVar4,bVar30)
                                                ) >> 8),bVar30 | bVar28);
      uVar17 = (undefined3)((uint)pcVar8 >> 8);
      bVar4 = (char)pcVar8 - *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar17,bVar4);
      *pcVar8 = *pcVar8 + bVar4;
      *(int *)((int)pcVar8 * 2) = (int)(pbVar44 + *(int *)((int)pcVar8 * 2));
      *(byte *)puVar25 = *(byte *)puVar25 + bVar4;
      *pbVar45 = *pbVar45 + bVar28;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar35 = CONCAT31(uVar17,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar35;
      pbVar9 = (byte *)CONCAT22((short)(uVar35 >> 0x10),CONCAT11(bVar28 + in_AF,bVar4));
      *(byte *)puVar46 = (byte)*puVar46 + bVar37;
      *pbVar9 = *pbVar9 + bVar4;
      *pbVar9 = *pbVar9 + bVar4;
      bVar47 = CARRY1(bVar4,*pbVar9);
      puVar41 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar4 + *pbVar9);
      goto code_r0x00404d9a;
    }
    *pbVar44 = *pbVar44 - (char)puVar25;
  }
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar41;
  bVar47 = false;
  piVar15 = (int *)CONCAT22(uVar23,CONCAT11(bVar4 | *(byte *)puVar25,bVar37));
code_r0x00404d9a:
  do {
    pbVar26 = (byte *)puVar25;
    *puVar41 = (*puVar41 - (int)puVar41) - (uint)bVar47;
    bVar4 = (byte)((uint)piVar15 >> 8);
    uVar23 = (undefined2)((uint)piVar15 >> 0x10);
    bVar28 = (byte)piVar15;
    bVar37 = bVar4 + (byte)iRam00000c00;
    pbVar9 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *pbVar26 = *pbVar26 + bVar28;
    pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),(char)pbVar44 - (byte)*puVar46);
    bVar4 = *pbVar9;
    puVar41 = (uint *)(pbVar9 + (uint)CARRY1(bVar37,*pbVar9) + *(int *)pbVar9);
    *pbVar26 = *pbVar26 + bVar28;
    cVar6 = ((bVar37 + bVar4) - *pbVar26) + (byte)*puVar41;
    pcVar8 = (char *)CONCAT22(uVar23,CONCAT11(cVar6,bVar28));
    puVar19 = puVar33 + 1;
    uVar35 = in((short)pbVar26);
    *puVar33 = uVar35;
    cVar5 = (char)puVar41;
    *(byte *)puVar41 = (byte)*puVar41 + cVar5;
    uVar17 = (undefined3)((uint)pbVar26 >> 8);
    bVar37 = (byte)pbVar26 | (byte)*puVar46;
    pcVar10 = (char *)CONCAT31(uVar17,bVar37);
    *pcVar8 = *pcVar8 + '\x01';
    bVar4 = (cVar6 - *pcVar10) + (byte)*puVar41;
    pcVar8 = (char *)CONCAT22(uVar23,CONCAT11(bVar4,bVar28));
    puVar33 = puVar33 + 2;
    uVar35 = in((short)pcVar10);
    *puVar19 = uVar35;
    *(byte *)puVar41 = (byte)*puVar41 + cVar5;
    bVar37 = bVar37 | (byte)*puVar46;
    puVar25 = (uint *)CONCAT31(uVar17,bVar37);
    *pcVar8 = *pcVar8 + '\x01';
    bVar47 = bVar28 < *(byte *)((int)puVar25 + 2);
    cVar6 = bVar28 - *(byte *)((int)puVar25 + 2);
    piVar15 = (int *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  *(byte *)puVar41 = (byte)*puVar41 + cVar5;
  bVar28 = cVar5 + 0x7b;
  pbVar9 = (byte *)CONCAT31((int3)((uint)puVar41 >> 8),bVar28);
  pbVar44[(int)pbVar9] = pbVar44[(int)pbVar9] + bVar28;
  puVar19 = puVar46 + 1;
  uVar22 = SUB42(puVar25,0);
  out(*puVar46,uVar22);
  pbVar34 = pbVar44 + -1;
  *pbVar9 = *pbVar9 + bVar28;
  bVar4 = bVar4 | *(byte *)puVar25;
  piVar15 = (int *)CONCAT22(uVar23,CONCAT11(bVar4,cVar6));
  *pbVar9 = *pbVar9 + bVar28;
  *pbVar34 = *pbVar34 + bVar37;
  *pbVar34 = *pbVar34 ^ bVar28;
  *(byte *)puVar25 = *(byte *)puVar25 + bVar4;
  *pbVar9 = *pbVar9 + bVar28;
  do {
    bVar21 = (byte)((uint)piVar15 >> 8);
    *(byte *)puVar33 = (byte)*puVar33 + bVar21;
    bVar4 = *pbVar9;
    bVar28 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar28;
    *(byte **)(pbVar44 + 0x17) =
         (byte *)((int)puVar19 + (uint)CARRY1(bVar4,bVar28) + *(int *)(pbVar44 + 0x17));
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    uVar18 = (undefined3)((uint)pbVar9 >> 8);
    bVar28 = bVar28 | (byte)*puVar19;
    puVar33 = (uint *)((int)puVar33 + *(int *)(pbVar45 + -0x34));
    *(char *)CONCAT31(uVar18,bVar28) = *(char *)CONCAT31(uVar18,bVar28) + bVar28;
    bVar4 = bVar28 + 2;
    cVar5 = (char)((uint)pbVar26 >> 8);
    bVar30 = (byte)piVar15;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar9 = (byte *)CONCAT31(uVar18,bVar28 + 0x15 + (0xfd < bVar28));
      if (0xec < bVar4 || CARRY1(bVar28 + 0x15,0xfd < bVar28)) {
        *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      }
code_r0x00404e60:
      pbVar45 = pbVar45 + -*puVar25;
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      pbVar44 = (byte *)((int)puVar19 + (-(uint)CARRY1(bVar4,(byte)pbVar9) - *(int *)pbVar9));
      pbVar9 = pbVar9 + *(int *)pbVar9;
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_DS);
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      *(char *)piVar15 = (char)*piVar15 + cVar5;
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      *(byte **)(pbVar34 + (int)puVar25) =
           (byte *)((int)puVar25 +
                   (uint)CARRY1(bVar4,(byte)pbVar9) + *(int *)(pbVar34 + (int)puVar25));
      pbVar9 = pbVar9 + 0x73061314;
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      uVar18 = (undefined3)((uint)piVar15 >> 8);
      bVar30 = bVar30 | *(byte *)puVar25;
      pcVar10 = (char *)CONCAT31(uVar18,bVar30);
      *pbVar9 = *pbVar9 + (char)pbVar9;
      cVar5 = (char)pbVar9 + 'o';
      pcVar8 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
      *pcVar8 = *pcVar8 + cVar5;
      out(*(undefined4 *)pbVar44,uVar22);
      bVar4 = *(byte *)puVar25;
      *(byte *)puVar25 = *(byte *)puVar25 + bVar30;
      pcVar8 = pcVar8 + (uint)CARRY1(bVar4,bVar30) + *puVar33;
      *pcVar8 = *pcVar8 + (char)pcVar8;
      *pcVar10 = *pcVar10 + bVar37;
      puVar19 = (uint *)(pbVar44 + 8);
      out(*(undefined4 *)(pbVar44 + 4),uVar22);
      *(byte *)puVar25 = *(byte *)puVar25 + bVar30;
      piVar15 = (int *)((uint)pcVar8 | *puVar33);
      pcVar10[0x390a0000] = pcVar10[0x390a0000] - bVar21;
      pbVar9 = (byte *)&cRam07000000;
      *(byte *)puVar33 = (byte)*puVar33 - bVar21;
      *piVar15 = *piVar15 + (int)piVar15;
      puVar46 = (uint *)CONCAT31(uVar18,bVar30 | *(byte *)((int)piVar15 + (int)pcVar10));
      *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) - bVar21;
      cRam07000000 = cRam07000000 + bVar21;
      piVar15 = (int *)((uint)piVar15 | 0x777b02);
      pbVar44 = (byte *)((int)puVar33 + (int)pbVar45 * 2);
      bVar47 = SCARRY1(*pbVar44,(char)piVar15);
      *pbVar44 = *pbVar44 + (char)piVar15;
      bVar4 = *pbVar44;
      *(char *)piVar15 = (char)*piVar15;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar18,bVar4) = *(char *)CONCAT31(uVar18,bVar4) + bVar4;
    bVar28 = bVar28 + 0x71;
    pbVar9 = (byte *)CONCAT31(uVar18,bVar28);
    *pbVar9 = *pbVar9;
    *(byte *)puVar19 = (byte)*puVar19 + 1;
    *piVar15 = (*piVar15 - (int)pbVar9) - (uint)(0x90 < bVar4);
    uVar35 = *puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + bVar28;
    if (!CARRY1((byte)uVar35,bVar28)) goto code_r0x00404e60;
    *pbVar9 = *pbVar9 + bVar28;
    uVar23 = (undefined2)((uint)piVar15 >> 0x10);
    bVar21 = bVar21 | *pbVar9;
    pbVar9 = pbVar9 + -*(int *)pbVar9;
    *pbVar34 = *pbVar34 + bVar21;
    cVar6 = bVar30 - *(byte *)((int)puVar25 + 2);
    piVar15 = (int *)CONCAT31((int3)(CONCAT22(uVar23,CONCAT11(bVar21,bVar30)) >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  cVar29 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cVar29;
  uVar18 = (undefined3)((uint)pbVar9 >> 8);
  pcVar8 = (char *)CONCAT31(uVar18,cVar29 + '{');
  out(*puVar19,uVar22);
  *pcVar8 = *pcVar8 + cVar29 + '{';
  bVar28 = cVar29 + 0x7e;
  pbVar26 = (byte *)CONCAT31(uVar18,bVar28);
  puVar19 = puVar46 + 3;
  out(puVar46[2],uVar22);
  pbVar9 = pbVar44 + -2;
  *pbVar26 = *pbVar26 + bVar28;
  bVar4 = *(byte *)puVar25;
  puVar46 = (uint *)CONCAT22(uVar23,CONCAT11(bVar21 | bVar4,cVar6));
  *pbVar26 = *pbVar26 + bVar28;
  *pbVar9 = *pbVar9 + bVar37;
  *pbVar9 = *pbVar9 ^ bVar28;
  *(byte *)puVar25 = *(byte *)puVar25 + (bVar21 | bVar4);
  *pbVar26 = *pbVar26 + bVar28;
  *pbVar26 = *pbVar26 + cVar5;
  bVar4 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar28;
  *(byte **)(pbVar44 + 0x18) =
       (byte *)((int)puVar19 + (uint)CARRY1(bVar4,bVar28) + *(int *)(pbVar44 + 0x18));
  *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
  bVar28 = bVar28 | (byte)*puVar19;
  puVar33 = (uint *)((int)puVar33 + *(int *)(pbVar45 + -0x33));
  *(char *)CONCAT31(uVar18,bVar28) = *(char *)CONCAT31(uVar18,bVar28) + bVar28;
  bVar47 = SCARRY1(bVar28,'\x02');
  bVar4 = bVar28 + 2;
  piVar15 = (int *)CONCAT31(uVar18,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    return CONCAT31(uVar18,bVar28 + 0x71);
  }
code_r0x00404ebf:
  bVar28 = (byte)piVar15;
  uVar18 = (undefined3)((uint)piVar15 >> 8);
  if (bVar4 != 0 && bVar47 == (char)bVar4 < '\0') {
    *(byte *)piVar15 = (char)*piVar15 + bVar28;
    puVar19[(int)puVar33 * 2] =
         (uint)((int)puVar25 + (uint)(0xd2 < bVar28) + puVar19[(int)puVar33 * 2]);
    return CONCAT31(uVar18,bVar28 + 0x2d);
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar4 = *pbVar9;
  *puVar19 = (uint)(*puVar19 + (int)piVar15);
  bVar30 = (byte)((uint)puVar46 >> 8);
  *(byte *)piVar15 = (char)*piVar15 - bVar30;
  *(byte *)piVar15 = (char)*piVar15 + bVar28;
  pbVar44 = (byte *)(CONCAT31(uVar17,bVar37 | bVar4) - *(int *)pbVar9);
  puVar36 = (uint *)CONCAT31(uVar18,bVar28 + 6);
  *(uint *)(pbVar9 + (int)puVar19 * 2) =
       (int)puVar36 + (uint)(0xf9 < bVar28) + *(int *)(pbVar9 + (int)puVar19 * 2);
  *(byte *)puVar46 = (byte)*puVar46 ^ bVar28 + 6;
  bVar28 = (byte)puVar46;
  *pbVar44 = *pbVar44 + bVar28;
  puVar41 = puVar19 + 1;
  uVar23 = SUB42(pbVar44,0);
  out(*puVar19,uVar23);
  *puVar46 = *puVar46 ^ (uint)puVar36;
  *pbVar44 = *pbVar44 + bVar28;
  puVar25 = (uint *)(pbVar9 + -*(int *)pbVar9);
  *(uint *)((int)puVar33 + 0x31) = *(uint *)((int)puVar33 + 0x31) | (uint)pbVar45;
  *puVar36 = *puVar36 + (int)puVar36;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar30 | (byte)*puVar25,bVar28)
                            );
  *(byte **)(pbVar44 + 0x6e) = (byte *)(*(int *)(pbVar44 + 0x6e) + (int)puVar41);
  piVar15 = (int *)((uint)puVar36 | *puVar36);
  bVar37 = (byte)puVar25;
  *(byte *)puVar33 = (byte)*puVar33 - bVar37;
  bVar4 = *pbVar44;
  *pbVar44 = *pbVar44 + bVar28;
  if (CARRY1(bVar4,bVar28)) {
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    bVar4 = pbVar44[0x11];
    uVar22 = (undefined2)((uint)puVar25 >> 0x10);
    out(*puVar41,uVar23);
    puVar46 = (uint *)((int)puVar46 + 1);
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    bVar24 = (byte)((uint)puVar25 >> 8) | bVar4 | *pbVar44;
    pcVar8 = (char *)((int)piVar15 + -0x21000001);
    bVar4 = (byte)pcVar8 | 0x11;
    uVar17 = (undefined3)((uint)pcVar8 >> 8);
    cVar5 = bVar4 - 7;
    pcVar10 = (char *)CONCAT31(uVar17,cVar5);
    *puVar33 = (uint)(pcVar10 + (uint)(bVar4 < 7) + *puVar33);
    puVar41 = puVar19 + 3;
    out(puVar19[2],uVar23);
    pbVar44 = pbVar44 + 1;
    *pcVar10 = *pcVar10 + cVar5;
    bVar30 = (byte)((uint)pcVar8 >> 8);
    bVar21 = bVar37 | bVar30;
    bVar28 = cVar5 - *pcVar10;
    bVar4 = *(byte *)puVar46;
    *(byte *)puVar46 = *(byte *)puVar46 + bVar28;
    *(char *)CONCAT31(uVar17,bVar28) =
         *(char *)CONCAT31(uVar17,bVar28) + bVar28 + CARRY1(bVar4,bVar28);
    *pbVar44 = *pbVar44 + bVar28;
    *(byte *)puVar41 = (byte)*puVar41 + bVar21;
    bVar4 = (byte)((uint)pbVar44 >> 8);
    *(byte *)puVar46 = *(byte *)puVar46 + bVar28 + CARRY1((byte)pbVar44,bVar4);
    piVar15 = (int *)CONCAT31(uVar17,bVar28);
    *(byte *)piVar15 = (char)*piVar15 + bVar28;
    pbVar44 = (byte *)CONCAT22((short)((uint)pbVar44 >> 0x10),
                               CONCAT11(bVar4 + bVar30,(byte)pbVar44 + bVar4));
    puVar25 = (uint *)CONCAT22(uVar22,CONCAT11(bVar24 + *(char *)(CONCAT31((int3)(CONCAT22(uVar22,
                                                  CONCAT11(bVar24,bVar37)) >> 8),bVar21) + 0x76),
                                               bVar21));
    puStack_68._0_2_ = puStack_74._0_2_;
code_r0x00404fa4:
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    pcVar8 = (char *)(CONCAT31((int3)((uint)piVar15 >> 8),(char)piVar15 + '(') ^ *puVar46);
    cVar29 = (char)puVar46;
    *pbVar44 = *pbVar44 + cVar29;
    uVar23 = (undefined2)((uint)puVar25 >> 0x10);
    cVar32 = (char)puVar25;
    cVar39 = (char)((uint)puVar25 >> 8) + *(byte *)((int)puVar25 + 0x75);
    *pcVar8 = *pcVar8 + (char)pcVar8;
    cVar5 = (char)pcVar8 + 'o';
    pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5);
    *pcVar8 = *pcVar8 + cVar5;
    cVar38 = (char)((uint)puVar46 >> 8);
    *pbVar45 = *pbVar45 - cVar38;
    pbVar44[1] = pbVar44[1] + cVar29;
    pcVar8 = pcVar8 + -0x757b021b;
    cVar5 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar5;
    uVar17 = (undefined3)((uint)pcVar8 >> 8);
    cVar6 = cVar5 + 'o';
    pcVar8 = (char *)CONCAT31(uVar17,cVar6);
    pbVar26 = pbVar44 + 2;
    *pcVar8 = *pcVar8 + cVar6;
    iVar14 = CONCAT22(uVar23,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar39,cVar32)) +
                                                        0x76),cVar32));
    *pcVar8 = *pcVar8 + cVar6;
    pcVar8 = (char *)CONCAT31(uVar17,cVar5 + -0x22);
    puVar19 = (uint *)((int)puVar33 + 1);
    *(byte *)puVar33 = (byte)*puVar41;
    *pcVar8 = *pcVar8 + cVar5 + -0x22;
    *(byte *)((int)puVar46 + (int)pcVar8) =
         *(byte *)((int)puVar46 + (int)pcVar8) - (char)((uint)pbVar26 >> 8);
    *pbVar26 = *pbVar26 + cVar29;
    bVar28 = cVar38 - pbVar44[4];
    pbVar9 = (byte *)((int)puVar41 + 5);
    out(*(undefined4 *)((int)puVar41 + 1),(short)pbVar26);
    puVar33 = (uint *)((uint)(pcVar8 + *(int *)(pcVar8 + iVar14)) ^ 0x280a0001);
    *(byte *)puVar33 = (byte)*puVar33 << 1 | (char)(byte)*puVar33 < '\0';
    *pbVar9 = *pbVar9 + (char)puVar33;
    pbVar9 = pbVar9 + *(int *)(pbVar44 + -0x5c);
    pbVar44 = (byte *)((uint)puVar33 | *puVar33);
    *pbVar9 = *pbVar9 + (char)pbVar44;
    puVar25 = (uint *)CONCAT31((int3)((uint)iVar14 >> 8),cVar32 - (char)pbVar26);
    bVar4 = *pbVar44;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar28 + *pbVar44,cVar29));
    iVar14 = *(int *)pbVar44;
    *pbVar26 = *pbVar26 + cVar29;
    cVar5 = (char)(pbVar44 + (uint)CARRY1(bVar28,bVar4) + iVar14) + 'r';
    puVar33 = (uint *)CONCAT31((int3)((uint)(pbVar44 + (uint)CARRY1(bVar28,bVar4) + iVar14) >> 8),
                               cVar5);
    pbVar44 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),CONCAT11(10,(char)pbVar26));
    *(char *)(puVar33 + 10) = (char)puVar33[10] + '\n';
    *pbVar9 = *pbVar9 + cVar5;
    puVar41 = (uint *)(pbVar9 + *(int *)(pbVar44 + -0x5e));
    uVar35 = *puVar33;
    cVar5 = (char)((uint)puVar33 | uVar35);
    *(byte *)puVar41 = (byte)*puVar41 + cVar5;
    uVar17 = (undefined3)(((uint)puVar33 | uVar35) >> 8);
    cVar6 = cVar5 + (byte)*puVar25;
    puVar33 = (uint *)CONCAT31(uVar17,cVar6);
    if (SCARRY1(cVar5,(byte)*puVar25) == cVar6 < '\0') goto code_r0x00405090;
    *(byte *)puVar33 = (byte)*puVar33 + cVar6;
    piVar15 = (int *)CONCAT31(uVar17,cVar6 + '\x02');
    puVar33 = puVar19;
  }
  else {
    out(2,(char)piVar15);
    if ((POPCOUNT(*pbVar44) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar17 = (undefined3)((uint)piVar15 >> 8);
  cVar5 = (char)piVar15 + '}';
  pbVar9 = (byte *)CONCAT31(uVar17,cVar5);
  pbVar44[(int)pbVar9] = pbVar44[(int)pbVar9] + cVar5;
  pbVar44[0x280a0000] = pbVar44[0x280a0000] - (char)((uint)piVar15 >> 8);
  bVar4 = (byte)puVar46 & 7;
  *pbVar9 = *pbVar9 << bVar4 | *pbVar9 >> 8 - bVar4;
  *(byte *)puVar41 = (byte)*puVar41 + cVar5;
  cVar29 = (char)puVar25 - (byte)*puVar41;
  uVar23 = (undefined2)((uint)puVar25 >> 0x10);
  cVar38 = (char)((uint)puVar25 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar25 >> 8),cVar29) + 0x7c);
  pcVar8 = (char *)CONCAT22(uVar23,CONCAT11(cVar38,cVar29));
  *pbVar9 = *pbVar9 + cVar5;
  bVar28 = (char)piVar15 + 0xa7U & *pbVar44;
  puVar19 = (uint *)((int)puVar33 + *(int *)(pbVar45 + 0x7c));
  *(char *)CONCAT31(uVar17,bVar28) = *(char *)CONCAT31(uVar17,bVar28) + bVar28;
  bVar28 = bVar28 + 0x2a;
  pbVar9 = (byte *)CONCAT31(uVar17,bVar28);
  *pbVar9 = *pbVar9 + bVar28;
  *pcVar8 = *pcVar8 + cVar29;
  *pbVar44 = *pbVar44 ^ bVar28;
  *pcVar8 = *pcVar8 + bVar28;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar28;
  cVar5 = (bVar28 - *pbVar9) - CARRY1(bVar4,bVar28);
  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar44;
  cVar38 = cVar38 + pcVar8[0x7b];
  *(char *)CONCAT31(uVar17,cVar5) = *(char *)CONCAT31(uVar17,cVar5) + cVar5;
  pcVar8 = (char *)CONCAT31(uVar17,cVar5 + 'o');
  *pcVar8 = *pcVar8 + cVar5 + 'o';
  pcVar8 = pcVar8 + 0x2ed7fde6;
  cVar6 = (char)pcVar8;
  *pcVar8 = *pcVar8 + cVar6;
  cVar5 = *(char *)(CONCAT22(uVar23,CONCAT11(cVar38,cVar29)) + 0x7b);
  *pcVar8 = *pcVar8 + cVar6;
  piVar15 = (int *)(CONCAT31((int3)((uint)pcVar8 >> 8),cVar6 + 'o') + 0x6f060000);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar18 = (undefined3)((uint)pbVar44 >> 8);
  bVar28 = (byte)pbVar44 | (byte)*puVar41;
  pbVar26 = (byte *)CONCAT31(uVar18,bVar28);
  uVar35 = CONCAT22(uVar23,CONCAT11(cVar38 + cVar5,cVar29)) | (uint)puVar41;
  uVar17 = (undefined3)((uint)piVar15 >> 8);
  bVar4 = (byte)piVar15 | *pbVar26;
  pbVar9 = (byte *)CONCAT31(uVar17,bVar4);
  cVar5 = (byte)puVar46 - bVar28;
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),cVar5);
  *pbVar9 = *pbVar9 + bVar4;
  puVar33 = puVar41 + 1;
  out(*puVar41,(short)pbVar26);
  *pbVar9 = bVar4;
  *pbVar26 = *pbVar26 + cVar5;
  puVar41 = puVar41 + 2;
  out(*puVar33,(short)pbVar26);
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  puVar25 = (uint *)(CONCAT31((int3)(uVar35 >> 8),(char)uVar35 - (char)((uint)pbVar44 >> 8)) |
                    (uint)puVar41);
  pbVar44 = (byte *)CONCAT31(uVar18,(bVar28 | (byte)*puVar41) + (byte)*puVar19);
  cVar5 = bVar4 - (byte)*puVar19;
  puVar33 = (uint *)CONCAT31(uVar17,cVar5 - *(char *)CONCAT31(uVar17,cVar5));
code_r0x00405090:
  *puVar33 = (uint)(pbVar44 + *puVar33);
  cVar5 = (char)puVar33;
  *(byte *)puVar33 = (byte)*puVar33 + cVar5;
  *(byte *)puVar33 = (byte)*puVar33 + cVar5;
  *(byte *)puVar33 = (byte)*puVar33 + cVar5;
  *puVar46 = *puVar46 - (int)pbVar45;
  uVar35 = *puVar41;
  bVar4 = (byte)pbVar44;
  *(byte *)puVar41 = (byte)*puVar41 + bVar4;
  *(byte *)puVar33 = (byte)*puVar33 + cVar5 + CARRY1((byte)uVar35,bVar4);
  *(byte *)puVar46 = (byte)*puVar46 + cVar5;
  uVar35 = *puVar25;
  *(byte *)puVar25 = (byte)*puVar25 + 0x72;
  *(byte *)puVar25 = (byte)*puVar25;
  cVar5 = (char)((uint)pbVar44 >> 8);
  if (SCARRY1((byte)uVar35,'r')) {
    puVar41 = (uint *)((int)puVar41 + *(int *)(pbVar44 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar41 = (byte)*puVar41 + (char)puVar33;
      uVar17 = (undefined3)((uint)puVar33 >> 8);
      cVar6 = (char)puVar33 + (byte)*puVar25;
      pcVar8 = (char *)CONCAT31(uVar17,cVar6);
      puVar25 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),
                                 CONCAT11((char)((uint)puVar25 >> 8) +
                                          *(byte *)((int)puVar25 + 0x7b),(char)puVar25));
      *pcVar8 = *pcVar8 + cVar6;
      in_AF = 9 < (cVar6 + 0x6fU & 0xf) | in_AF;
      uVar35 = CONCAT31(uVar17,cVar6 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar37 = (byte)uVar35;
      piVar15 = (int *)CONCAT22((short)(uVar35 >> 0x10),
                                CONCAT11((char)((uint)puVar33 >> 8) + in_AF,bVar37));
      *piVar15 = *piVar15 + (int)piVar15;
      uVar17 = (undefined3)((uint)piVar15 >> 8);
      bVar37 = bVar37 | *(byte *)(piVar15 + 0x354a);
      bVar37 = bVar37 - *(char *)CONCAT31(uVar17,bVar37);
      pbVar9 = (byte *)CONCAT31(uVar17,bVar37);
      bVar28 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar37;
      puVar41 = (uint *)((int)puVar41 + (-(uint)CARRY1(bVar28,bVar37) - *(int *)pbVar9));
      puVar33 = (uint *)(pbVar9 + 0xfc00);
      *pbVar44 = *pbVar44 + cVar5;
      uVar35 = *puVar33;
      bVar28 = (byte)puVar33;
      *(byte *)puVar33 = (byte)*puVar33 + bVar28;
      uVar12 = (uint)CARRY1((byte)uVar35,bVar28);
      uVar1 = *puVar25;
      uVar35 = *puVar25;
      *puVar25 = (uint)((byte *)(uVar35 + (int)puVar33) + uVar12);
      if (!CARRY4(uVar1,(uint)puVar33) && !CARRY4(uVar35 + (int)puVar33,uVar12)) break;
      *(byte *)puVar33 = (byte)*puVar33 + bVar28;
    }
  }
  uVar35 = (uint)puVar33 | *puVar33;
  uVar23 = SUB42(pbVar44,0);
  *(byte *)puVar41 = (byte)*puVar41 + (char)uVar35;
  piVar15 = (int *)(uVar35 + 0xc1872);
  if (SCARRY4(uVar35,0xc1872)) {
    cVar6 = (char)piVar15;
    *(char *)piVar15 = *(char *)piVar15 + cVar6;
    *pbVar44 = *pbVar44 + cVar6;
    *(char *)piVar15 = *(char *)piVar15 + cVar6;
    *(byte *)puVar25 = (byte)*puVar25 + (char)puVar46;
    *(char *)piVar15 = *(char *)piVar15 + cVar6;
    *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) + bVar4;
    puVar33 = puVar41;
    goto code_r0x00405117;
  }
  do {
    uVar35 = *puVar41;
    bVar4 = (byte)piVar15;
    *(byte *)puVar41 = (byte)*puVar41 + bVar4;
    if (CARRY1((byte)uVar35,bVar4)) {
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      uVar17 = (undefined3)((uint)puVar46 >> 8);
      bVar28 = (byte)puVar46 | bRam396f1609;
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      puVar46 = (uint *)CONCAT31(uVar17,bVar28 | *(byte *)CONCAT31(uVar17,bVar28));
      uVar17 = (undefined3)((uint)piVar15 >> 8);
      bVar4 = bVar4 | *pbVar44;
      pcVar8 = (char *)CONCAT31(uVar17,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar33 = puVar41 + 1;
        out(*puVar41,uVar23);
        uVar35 = CONCAT22((short)((uint)piVar15 >> 0x10),(ushort)bVar4);
        *(byte *)puVar33 = (byte)*puVar33 + bVar4;
        pcVar8 = (char *)(uVar35 | 8);
        cVar6 = (char)((uint)puVar25 >> 8) + *(byte *)((int)puVar25 + 0x7a);
        puVar36 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),CONCAT11(cVar6,(char)puVar25));
        *pcVar8 = *pcVar8 + (char)pcVar8;
        cVar5 = (char)pcVar8 + 'o';
        piVar15 = (int *)CONCAT31((int3)(uVar35 >> 8),cVar5);
        *(char *)piVar15 = (char)*piVar15 + cVar5;
        *(byte *)puVar46 = (byte)*puVar46 + 1;
        puVar41 = puVar41 + 2;
        out(*puVar33,uVar23);
        pbVar44 = (byte *)((uint)pbVar44 ^ uRam08122c04);
        iVar14 = CONCAT31((int3)((uint)(*piVar15 * 0x17070600) >> 8),2);
        *(char *)(iVar14 * 2) = *(char *)(iVar14 * 2) - cVar6;
        do {
          bVar4 = (byte)iVar14;
          *(byte *)puVar41 = (byte)*puVar41 + bVar4;
          bVar47 = CARRY1(bVar4,(byte)*puVar36);
          uVar17 = (undefined3)((uint)iVar14 >> 8);
          cVar5 = bVar4 + (byte)*puVar36;
          pbVar9 = (byte *)CONCAT31(uVar17,cVar5);
          uVar23 = in_DS;
          uVar22 = uStack_b4;
          if (SCARRY1(bVar4,(byte)*puVar36) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar9 = *pbVar9 + cVar5;
          uVar35 = CONCAT31(uVar17,cVar5 + '\'') + 0x1ebd9f3;
          uStack_b8 = (undefined1)puStack_68._0_2_;
          uStack_b7 = (undefined1)((ushort)puStack_68._0_2_ >> 8);
          piVar15 = (int *)(uVar35 ^ 0x73060000);
          puVar46 = (uint *)((int)puVar46 + 1);
          *piVar15 = (int)(*piVar15 + (int)piVar15);
          puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                     CONCAT11((byte)((uint)puVar36 >> 8) | pbVar45[0x7e],
                                              (char)puVar36));
          cVar5 = (char)uVar35;
          *(char *)piVar15 = (char)*piVar15 + cVar5;
          uVar35 = CONCAT31((int3)((uint)piVar15 >> 8),cVar5 + '\x02');
          bVar47 = 0xd9f2d2da < uVar35;
          iVar14 = uVar35 + 0x260d2d25;
          pbVar26 = pbVar45;
          do {
            uVar17 = (undefined3)((uint)iVar14 >> 8);
            bVar28 = (char)iVar14 + -2 + bVar47;
            pbVar45 = (byte *)CONCAT31(uVar17,bVar28);
            bVar4 = *pbVar45;
            *pbVar45 = *pbVar45 + bVar28;
            bVar37 = (byte)puVar36;
            uStack_b4 = puStack_68._0_2_;
            if (CARRY1(bVar4,bVar28)) {
              *pbVar45 = *pbVar45 + bVar28;
              puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                         CONCAT11((byte)((uint)puVar36 >> 8) | pbVar26[0x7f],bVar37)
                                        );
              *pbVar45 = *pbVar45 + bVar28;
              pbVar9 = (byte *)CONCAT31(uVar17,bVar28 + 0x2a);
              *pbVar9 = *pbVar9 + bVar28 + 0x2a;
              *(byte *)puVar36 = (byte)*puVar36 + (char)pbVar44;
              uVar23 = in_DS;
              while( true ) {
                in_DS = uVar23;
                bVar28 = (byte)pbVar9;
                *pbVar44 = *pbVar44 ^ bVar28;
                *pbVar44 = *pbVar44 + (char)puVar36;
                *pbVar9 = *pbVar9 + bVar28;
                *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)pbVar44 >> 8);
                bVar4 = *pbVar9;
                *pbVar9 = *pbVar9 + bVar28;
                uVar35 = *puVar36;
                uVar1 = *puVar36;
                *puVar36 = (uint)(pbVar9 + uVar1 + CARRY1(bVar4,bVar28));
                uVar17 = (undefined3)((uint)pbVar9 >> 8);
                if (CARRY4(uVar35,(uint)pbVar9) ||
                    CARRY4((uint)(pbVar9 + uVar1),(uint)CARRY1(bVar4,bVar28))) break;
                *(byte *)puVar41 = (byte)*puVar41 + bVar28;
                pcVar8 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                          CONCAT11((char)((uint)puVar46 >> 8) + *pbVar9,
                                                   (char)puVar46));
                *(byte *)puVar41 = (byte)*puVar41 + bVar28;
                piVar15 = (int *)CONCAT31(uVar17,bVar28 | (byte)*puVar36);
                puVar33 = puVar41;
                while( true ) {
                  puVar41 = puVar33 + 1;
                  out(*puVar33,(short)pbVar44);
                  pbVar44 = pbVar44 + 1;
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  bVar37 = (byte)((uint)pcVar8 >> 8) | *pbVar44;
                  uVar17 = (undefined3)((uint)piVar15 >> 8);
                  bVar28 = (byte)piVar15 ^ *pbVar44;
                  pcVar10 = (char *)CONCAT31(uVar17,bVar28);
                  cRam282b0000 = cRam282b0000 - bVar37;
                  *pcVar10 = *pcVar10 + bVar28;
                  pbVar45 = pbVar26 + -*(int *)pbVar44;
                  uStack_b8 = (undefined1)in_DS;
                  uStack_b7 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar19 + 0x17);
                  *pcVar10 = *pcVar10 + bVar28;
                  puVar46 = (uint *)CONCAT22((short)((uint)pcVar8 >> 0x10),
                                             CONCAT11(bVar37 + bVar4 | *pbVar44,(char)pcVar8));
                  *(byte *)puVar36 = (byte)*puVar36 + (char)puVar36;
                  *(byte *)((int)pcVar10 * 2) = *(byte *)((int)pcVar10 * 2) ^ bVar28;
                  in_AF = 9 < (bVar28 & 0xf) | in_AF;
                  bVar28 = bVar28 + in_AF * -6;
                  pbVar9 = (byte *)CONCAT31(uVar17,bVar28 + (0x9f < bVar28 | in_AF * (bVar28 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
                  *(char *)((int)pbVar9 * 2) =
                       *(char *)((int)pbVar9 * 2) + (char)((uint)pbVar44 >> 8);
                  bVar47 = CARRY1((byte)*puVar46,(byte)pbVar44);
                  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar44;
                  uVar23 = in_DS;
                  uVar22 = puStack_68._0_2_;
GenerateStatusText:
                  in_DS = uVar22;
                  pbVar26 = pbVar45;
                  uStack_b4 = in_DS;
                  if (!bVar47) break;
                  *pbVar9 = *pbVar9 + (char)pbVar9;
                  iVar14 = CONCAT31((int3)((uint)puVar46 >> 8),(byte)puVar46 | *pbVar44);
                  uVar23 = (undefined2)((uint)puVar36 >> 0x10);
                  cVar29 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x7d);
                  *pbVar9 = *pbVar9 + (char)pbVar9;
                  *(byte *)puVar19 = (byte)*puVar19 - (char)((uint)puVar46 >> 8);
                  iVar14 = iVar14 - *(int *)(&uRam0b0a0000 + iVar14);
                  cVar5 = *(char *)(CONCAT22(uVar23,CONCAT11(cVar29,(char)puVar36)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar41,(short)pbVar44);
                  pbVar44 = (byte *)CONCAT22(uStack_b6,CONCAT11(uStack_b7,uStack_b8));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar33 = puVar41 + 2;
                  out(puVar41[1],CONCAT11(uStack_b7,uStack_b8));
                  pbVar26 = pbVar45 + 1;
                  cVar6 = (char)iVar14;
                  pcVar8 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),
                                            CONCAT11((byte)((uint)iVar14 >> 8) |
                                                     *(byte *)((int)puVar19 + 0x46),cVar6));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_68._0_2_ = CONCAT11(uStack_b7,uStack_b8);
                  uVar17 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar33,0xf0)) >> 8);
                  piVar15 = (int *)CONCAT31(uVar17,0x5f);
                  puVar19 = (uint *)((int)puVar19 + 1);
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  puVar36 = (uint *)CONCAT22(uVar23,CONCAT11(cVar29 + cVar5 | (byte)puVar41[-0x1e],
                                                             (char)puVar36));
                  *(char *)piVar15 = (char)*piVar15 + '_';
                  puVar46 = (uint *)CONCAT31(uVar17,0x8c);
                  puVar33[(int)puVar19 * 2] = (uint)(pbVar44 + puVar33[(int)puVar19 * 2]);
                  uVar35 = *puVar33;
                  *(byte *)puVar33 = (byte)*puVar33 + 0x8c;
                  if ((byte)uVar35 < 0x74) {
                    *pbVar44 = *pbVar44 + cVar6;
                    *(byte *)puVar36 = (byte)*puVar36 >> 1;
                    *(char *)puVar46 = (char)*puVar46 + -0x74;
                    *puVar46 = (uint)(pbVar26 + *puVar46);
                    *puVar46 = *puVar46 << 1 | (uint)((int)*puVar46 < 0);
                    *pbVar44 = *pbVar44 + cVar6;
                    pbVar45[2] = pbVar45[2] - cVar6;
                    *pbVar44 = *pbVar44 + cVar6;
                    pbVar45 = (byte *)CONCAT31(uVar17,0x83);
                    puVar46 = puVar36;
                    goto code_r0x00405312;
                  }
                  *puVar46 = (uint)(*puVar46 + (int)puVar46);
                  piVar15 = (int *)(CONCAT31(uVar17,(byte)puVar46[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar46[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar15 = (int *)((int)piVar15 + *puVar33);
                }
              }
              *pbVar44 = *pbVar44 + bVar28;
              *(byte *)puVar36 = (byte)*puVar36 - (char)pbVar44;
              *pbVar9 = *pbVar9 + bVar28;
              pbVar45 = (byte *)CONCAT31(uVar17,bVar28 | (byte)*puVar36);
            }
            else {
              cVar5 = (char)puVar46;
              *pbVar44 = *pbVar44 + cVar5;
              *(byte **)pbVar45 = pbVar44 + *(int *)pbVar45;
              *pbVar45 = *pbVar45 + bVar28;
              bVar28 = bVar28 + *pbVar45;
              pbVar45 = (byte *)CONCAT31(uVar17,bVar28);
              if (-1 < (char)bVar28) {
                *(byte *)puVar36 = (byte)*puVar36 + bVar37;
                out(*puVar41,(short)pbVar44);
                pbVar44 = pbVar44 + 1;
                *pbVar45 = *pbVar45 + bVar28;
                puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),
                                           bVar37 | (byte)((uint)iVar14 >> 8));
                cVar6 = bVar28 - (byte)*puVar46;
                pcVar8 = (char *)CONCAT31(uVar17,cVar6);
                *pcVar8 = *pcVar8 + cVar6 + (bVar28 < (byte)*puVar46);
                *pbVar44 = *pbVar44 + cVar6;
                pcVar8 = (char *)((int)pcVar8 * 2 + 0x79);
                *pcVar8 = *pcVar8 + (char)((uint)pbVar44 >> 8);
                pbVar45 = (byte *)in((short)pbVar44);
                puVar41 = puVar41 + 1;
              }
              *(byte *)puVar41 = (byte)*puVar41 + cVar5;
              *pbVar45 = *pbVar45 + (char)pbVar45;
              *pbVar45 = *pbVar45 + (char)pbVar45;
              uStack_b8 = (undefined1)in_DS;
              uStack_b7 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar45;
              bVar30 = (byte)((uint)puVar46 >> 8);
              bVar37 = bVar30 + *pbVar45;
              iVar14 = *(int *)pbVar45;
              *pbVar44 = *pbVar44 + cVar5;
              bVar28 = (char)(pbVar45 + (uint)CARRY1(bVar30,bVar4) + iVar14) - (byte)*puVar36;
              pbVar45 = (byte *)CONCAT31((int3)((uint)(pbVar45 + (uint)CARRY1(bVar30,bVar4) + iVar14
                                                      ) >> 8),bVar28);
              *(byte *)puVar36 = (byte)*puVar36 ^ bVar28;
              *pbVar26 = *pbVar26 + (char)puVar36;
              *pbVar45 = *pbVar45 + bVar28;
              *pbVar45 = *pbVar45 + bVar28;
              *pbVar45 = *pbVar45 + bVar28;
              puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                         CONCAT11(bVar37 + *pbVar45,cVar5));
              pbVar45 = pbVar45 + (uint)CARRY1(bVar37,*pbVar45) + *(int *)pbVar45;
              *pbVar44 = *pbVar44 + cVar5;
              puVar41 = (uint *)((int)puVar41 + *(int *)(pbVar44 + 0x3e));
            }
            *(byte *)puVar41 = (byte)*puVar41 + (char)pbVar45;
            cVar5 = (char)pbVar45 + 'r';
            puVar41 = (uint *)((int)puVar41 + -1);
            uVar35 = CONCAT31((int3)((uint)pbVar45 >> 8),cVar5);
            *(byte *)puVar41 = *(byte *)puVar41 + cVar5;
            bVar47 = 0xfff38f8d < uVar35;
            iVar14 = uVar35 + 0xc7072;
            pbVar45 = pbVar26;
          } while (SCARRY4(uVar35,0xc7072));
        } while( true );
      }
      *pcVar8 = *pcVar8 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar9 = (byte *)CONCAT31(uVar17,bVar4);
      bVar28 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar4;
      uVar17 = (undefined3)
               ((uint)(pbVar9 + (uint)CARRY1(bVar28,bVar4) + *(int *)((int)puVar46 + (int)pbVar44))
               >> 8);
      cVar6 = (char)(pbVar9 + (uint)CARRY1(bVar28,bVar4) + *(int *)((int)puVar46 + (int)pbVar44)) +
              'E';
      pcVar8 = (char *)CONCAT31(uVar17,cVar6);
      *pcVar8 = *pcVar8 + cVar6;
      cVar6 = cVar6 + *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar17,cVar6);
      *pcVar8 = *pcVar8 + cVar6;
      puVar33 = (uint *)CONCAT31(uVar17,cVar6 + *pcVar8);
      *(char *)puVar33 = (char)*puVar33 + cVar6 + *pcVar8;
      pbVar9 = (byte *)((uint)puVar33 | *puVar33);
      bVar4 = *pbVar9;
      bVar28 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar28;
      piVar15 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar28 + CARRY1(bVar4,bVar28));
      puVar33 = puVar41;
code_r0x00405117:
      *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
      puVar25 = (uint *)((int)puVar25 - *puVar25);
      puVar41 = puVar33 + 1;
      out(*puVar33,uVar23);
    }
    *pbVar44 = *pbVar44 + (char)puVar46;
    bVar47 = puVar25 < (uint *)*piVar15;
    puVar25 = (uint *)((int)puVar25 - *piVar15);
    bVar4 = (byte)((uint)puVar46 >> 8);
    *(byte *)((int)puVar19 + 0x39) = (*(byte *)((int)puVar19 + 0x39) - bVar4) - bVar47;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    uVar35 = *puVar25;
    *(int *)((int)puVar19 + 0x39) = *(int *)((int)puVar19 + 0x39) - (int)pbVar45;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar35 | (byte)*puVar25,(char)puVar46));
    *(char *)(piVar15 + 10) = (char)piVar15[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
  bVar4 = (char)piVar15 + 0x28;
  pbVar45 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),bVar4);
  *pbVar45 = *pbVar45 ^ bVar4;
  *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)pcVar8 >> 8);
  bVar4 = *pbVar44;
  *pbVar44 = *pbVar44 + (byte)pcVar8;
  piVar15 = (int *)(((uint)pbVar45 | 0x1496f09) + *puVar19 + (uint)CARRY1(bVar4,(byte)pcVar8));
  puVar41 = puVar33 + 1;
  out(*puVar33,(short)pbVar44);
  pbVar9 = pbVar44 + -1;
  *piVar15 = *piVar15 + (int)piVar15;
  pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 | (byte)*puVar36);
  cVar5 = (char)piVar15 + '\x13';
  pbVar45 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),cVar5);
  puVar46 = puVar36;
  puVar33 = puVar41;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar44 = *pbVar44 - (char)((uint)pbVar9 >> 8);
    *pbVar45 = *pbVar45 + cVar5;
code_r0x00405396:
    bVar4 = *pbVar45;
    bVar28 = (byte)pbVar45;
    *pbVar45 = *pbVar45 + bVar28;
    *puVar41 = (uint)(pbVar45 + (uint)CARRY1(bVar4,bVar28) + *puVar41);
    out(*puVar41,(short)pbVar44);
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    pcVar8 = (char *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                              CONCAT11((byte)((uint)pbVar45 >> 8) | (byte)puVar41[1],bVar28));
    *(char **)((int)puVar19 + -1) = pcVar8 + *(int *)((int)puVar19 + -1);
    out(puVar41[1],(short)pbVar44);
    *pcVar8 = *pcVar8 + bVar28;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar45 = *pbVar45 + (char)pbVar45;
  piVar15 = (int *)CONCAT31((int3)((uint)pbVar45 >> 8),(char)pbVar45 + 'o');
  puVar36 = (uint *)((int)puVar46 + -1);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar17 = (undefined3)((uint)pbVar44 >> 8);
  piVar15 = (int *)((int)piVar15 + 0x1b7e);
  bVar37 = (byte)pbVar44 | *(byte *)puVar36 | *(byte *)puVar36;
  iRam04115f2c = iRam04115f2c + (int)piVar15;
  out(*puVar33,(short)CONCAT31(uVar17,bVar37));
  *piVar15 = *piVar15 + (int)piVar15;
  bVar37 = bVar37 | (byte)piVar15;
  iVar27 = CONCAT31(uVar17,bVar37);
  pbVar45 = (byte *)((int)piVar15 - *piVar15);
  cVar5 = (char)pbVar45;
  *pcVar8 = *pcVar8 + cVar5;
  cVar6 = (char)pcVar8 - bVar37;
  *pbVar45 = *pbVar45 + cVar5;
  uVar23 = (undefined2)((uint)pcVar8 >> 0x10);
  bVar28 = (byte)((uint)pcVar8 >> 8) | *pbVar45;
  pbVar26 = pbVar26 + -1;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  bVar4 = *(byte *)(CONCAT22(uVar23,CONCAT11(bVar28,cVar6)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar45;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar26;
  *pbVar45 = *pbVar45 + cVar5;
  bVar4 = bVar28 | bVar4 | *(byte *)puVar36;
  iVar20 = CONCAT22(uVar23,CONCAT11(bVar4,cVar6));
  pbVar9 = (byte *)((uint)(puVar33 + 1) ^ *(uint *)(iVar27 + -0x43));
  iVar14 = *(int *)pbVar45;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  if (SCARRY4(iVar14,(int)pbVar45)) {
    *pbVar45 = *pbVar45 + cVar5;
  }
  pbVar44 = pbVar45 + 0x5674;
  puVar19 = (uint *)((int)puVar19 +
                    (-(uint)((byte *)0xffffa98b < pbVar45) - *(int *)(pbVar9 + -0x7f)));
  bVar28 = (byte)pbVar44;
  *pbVar44 = *pbVar44 + bVar28;
  uVar18 = (undefined3)((uint)pbVar44 >> 8);
  bVar30 = bVar28 + 0x2d;
  piVar15 = (int *)CONCAT31(uVar18,bVar30);
  *(uint *)(pbVar9 + (int)puVar19 * 8) =
       *(int *)(pbVar9 + (int)puVar19 * 8) + iVar27 + (uint)(0xd2 < bVar28);
  bVar28 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar30;
  if (!CARRY1(bVar28,bVar30)) {
    do {
      pbVar44 = (byte *)(iVar27 + 1);
      bVar28 = (byte)piVar15;
      *(byte *)piVar15 = (char)*piVar15 + bVar28;
      bVar37 = (byte)((uint)piVar15 >> 8);
      bVar30 = (byte)puVar36 | bVar37;
      puVar33 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),bVar30);
      out(*(undefined4 *)pbVar9,(short)pbVar44);
      *(byte *)piVar15 = (char)*piVar15 + bVar28;
      uVar23 = (undefined2)((uint)iVar20 >> 0x10);
      cVar5 = (char)iVar20;
      pbVar45 = (byte *)CONCAT22(uVar23,CONCAT11((byte)((uint)iVar20 >> 8) | *pbVar44,cVar5));
      bVar4 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar28;
      *(byte *)piVar15 = (char)*piVar15 + bVar28 + CARRY1(bVar4,bVar28);
      *pbVar44 = *pbVar44 + bVar28;
      *(byte *)puVar19 = (byte)*puVar19 + bVar37;
      *(int *)((int)piVar15 * 2) =
           *(int *)((int)piVar15 * 2) + CONCAT22(uVar23,CONCAT11(0x1c,cVar5));
      *(byte *)piVar15 = (char)*piVar15 + bVar28;
      cVar6 = (char)pbVar44;
      *(byte *)puVar33 = (byte)*puVar33 + cVar6;
      *(byte *)((int)piVar15 * 2) = *(byte *)((int)piVar15 * 2) ^ bVar28;
      *(byte *)piVar15 = (char)*piVar15 + bVar28;
      pbVar45 = pbVar9 + 8;
      out(*(undefined4 *)(pbVar9 + 4),(short)pbVar44);
      piVar15 = &uRam0a0a0000;
      *pbVar44 = *pbVar44;
      bVar28 = cVar5 - cVar6;
      iVar20 = CONCAT22(uVar23,CONCAT11((byte)puVar19[0x14] | 0x1c | bRam0ca87216,bVar28));
      *pbVar44 = *pbVar44;
      bVar4 = *pbVar44;
      *pbVar44 = *pbVar44 + bVar28;
      if (!CARRY1(bVar4,bVar28)) {
        piVar15 = &uRam1e7b7000;
        bVar4 = (byte)((uint)puVar36 >> 8) | *(byte *)(iVar27 + 3);
        puVar33 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar4,bVar30));
        if (bVar4 != 0) {
          pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),cVar6 + pbVar45[(int)puVar19 * 8]);
          piVar15 = (int *)0x6d7d7000;
          iVar20 = iVar20 + 1;
        }
      }
      *piVar15 = *piVar15 + (int)piVar15;
      iVar27 = CONCAT31((int3)((uint)pbVar44 >> 8),(byte)pbVar44 | pbVar45[(int)puVar19 * 8]);
      *(char *)piVar15 = (char)*piVar15;
      piVar15 = (int *)CONCAT31((int3)((uint)piVar15 >> 8),0xf9);
      *puVar19 = (uint)((int)piVar15 + *puVar19 + 1);
      pbVar9 = pbVar9 + 0xc;
      out(*(undefined4 *)pbVar45,(short)iVar27);
      puVar36 = puVar33;
    } while( true );
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar30 = bVar30 | *(byte *)((int)piVar15 + 0x4000081);
  piVar15 = (int *)CONCAT31(uVar18,bVar30);
  if ('\0' < (char)bVar30) {
    *(byte *)piVar15 = (char)*piVar15 + bVar30;
    puVar33 = (uint *)CONCAT31(uVar18,bVar30 + 0x28);
    *puVar33 = *puVar33 ^ (uint)puVar33;
    *(byte *)puVar36 = *(byte *)puVar36 + bVar4;
    cVar5 = (bVar30 + 0x28) - bVar4;
    pcVar8 = (char *)CONCAT31(uVar18,cVar5);
    *pcVar8 = *pcVar8 + cVar5;
    pbVar44 = (byte *)CONCAT31(uVar17,bVar37 | *(byte *)puVar36);
    pcVar10 = (char *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((char)((uint)puVar36 >> 8) + *(byte *)((int)puVar46 + 0x7d),
                                        (char)puVar36));
    *pcVar8 = *pcVar8 + cVar5;
    pbVar45 = (byte *)CONCAT31(uVar18,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar18,cVar5 + 0x39U));
    *pcVar10 = *pcVar10 + bVar4;
    puVar41 = (uint *)(pbVar9 + 4);
    out(*(undefined4 *)pbVar9,(short)pbVar44);
    goto code_r0x00405396;
  }
  puVar33 = (uint *)(pbVar9 + 4);
  out(*(undefined4 *)pbVar9,(short)iVar27);
  pcVar8 = (char *)(iVar20 + -1);
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pbVar44 = (byte *)CONCAT31(uVar17,bVar37 | *(byte *)puVar36);
  goto code_r0x004052ee;
}


