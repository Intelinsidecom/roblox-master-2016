/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404639
 * Raw Name    : Create
 * Demangled   : Create
 * Prototype   : int Create()
 * Local Vars  : puStack_3c, puStack_40, pcStack_34, pcStack_38, uStack_2c, uStack_30, uStack_14, uStack_18, puStack_c, uStack_10, uVar1, pcStack_8, uVar3, uVar2, cVar5, bVar4, bVar7, cVar6, in_EAX, uVar8, pbVar10, pcVar9, pcVar12, pcVar11, uVar14, puVar13, iVar16, puVar15, puVar18, piVar17, uVar20, uVar19, iVar22, puVar21, uVar24, bVar23, puVar26, bVar25, pbVar28, puVar27, bVar30, iVar29, cVar32, uVar31, pbVar33, unaff_EBX, cVar35, uVar34, cVar37, bVar36, ppbVar39, cVar38, ppbVar41, ppbVar40, pbVar42, unaff_ESI, unaff_EDI, pbVar43, puVar45, puVar44, in_ES, puVar46, uVar47, in_CS, in_DS, in_SS, in_AF, bVar48, uVar49, uStack_b7, uStack_b8, uStack_b4, uStack_b6, puStack_74, uStack_78, pbStack_6c, iStack_70, uStack_64, puStack_68, puStack_5c, puStack_60, puStack_54, pbStack_58, pbStack_4c, pbStack_50, pcStack_44, puStack_48
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x004046c4) */
/* WARNING: Removing unreachable block (ram,0x004046d0) */
/* WARNING: Removing unreachable block (ram,0x004046e3) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x00404738) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int Create(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  char *in_EAX;
  undefined3 uVar19;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
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
  int iVar22;
  byte bVar25;
  byte bVar30;
  uint *puVar26;
  uint *puVar27;
  byte *pbVar28;
  int iVar29;
  undefined1 uVar31;
  char cVar32;
  char cVar35;
  int unaff_EBX;
  byte bVar36;
  char cVar37;
  byte *pbVar33;
  char cVar38;
  uint uVar34;
  byte **ppbVar39;
  byte **ppbVar40;
  byte **ppbVar41;
  int unaff_ESI;
  byte *pbVar42;
  byte *pbVar43;
  char *unaff_EDI;
  uint *puVar44;
  uint *puVar45;
  uint *puVar46;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 uVar47;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar48;
  byte in_AF;
  undefined8 uVar49;
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
  char *pcStack_38;
  char *pcStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_10;
  undefined *puStack_c;
  char *pcStack_8;
  
                    /* .NET CLR Managed Code */
  cVar5 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar5;
  pcVar12 = (char *)CONCAT22((short)((uint)in_EAX >> 0x10),
                             CONCAT11((char)((uint)in_EAX >> 8) - *(char *)(unaff_ESI + 3),cVar5));
  cVar35 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x6c);
  puVar46 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar35,(char)unaff_EBX));
  *pcVar12 = *pcVar12 + cVar5;
  *(byte *)puVar46 = (byte)*puVar46 ^ cVar5 + 4U;
  pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_CS);
  uVar47 = 0x2a06;
  puStack_c = &UNK_0040465a;
  uVar49 = func_0x0000b828();
  pcVar12 = pcStack_8;
  puVar26 = (uint *)((ulonglong)uVar49 >> 0x20);
  pbVar43 = (byte *)uVar49;
  bVar7 = *pbVar43;
  bVar4 = (byte)uVar49;
  *pbVar43 = *pbVar43 + bVar4;
  pbVar42 = (byte *)(unaff_ESI + *(int *)pbVar43 + (uint)CARRY1(bVar7,bVar4));
  uVar19 = (undefined3)((ulonglong)uVar49 >> 8);
  *pbVar43 = *pbVar43 + bVar4;
  cVar6 = (char)((uint)pcStack_8 >> 8);
  *pcStack_8 = *pcStack_8 + cVar6;
  bVar7 = *pbVar43;
  *pbVar43 = *pbVar43 + bVar4;
  *puVar26 = (uint)(pbVar43 + (uint)CARRY1(bVar7,bVar4) + *puVar26);
  bVar4 = bVar4 | *pbVar42;
  pcVar9 = (char *)CONCAT31(uVar19,bVar4);
  *pcVar9 = *pcVar9 + bVar4;
  cVar5 = bVar4 + *pcVar9;
  pcVar9 = (char *)CONCAT31(uVar19,cVar5);
  *pcVar9 = *pcVar9 + cVar5;
  pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,uVar47);
  *pcVar9 = *pcVar9 + cVar5;
  *(byte *)puVar46 = (byte)*puVar46 + (char)unaff_EBX;
  *pcVar9 = *pcVar9 + cVar5;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar5;
  *(byte *)puVar46 = (byte)*puVar46 + cVar6;
  pcVar9 = (char *)(CONCAT31(uVar19,cVar5) ^ 3);
  pcVar12[0x73060000] = pcVar12[0x73060000] - cVar35;
  *unaff_EDI = (char)pcVar9;
  *pcVar9 = *pcVar9 + (char)pcVar9;
  puStack_c = (undefined *)CONCAT22(puStack_c._2_2_,in_ES);
  pbVar43 = pbVar42 + 1;
  bVar7 = *pbVar42;
  *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
  uStack_10 = in_ES;
  cVar6 = (bVar7 - (byte)*puVar46) + '(';
  puVar44 = (uint *)(unaff_EDI + 2);
  cVar5 = in((short)((ulonglong)uVar49 >> 0x20));
  unaff_EDI[1] = cVar5;
  *(char *)CONCAT31(uVar19,cVar6) = *(char *)CONCAT31(uVar19,cVar6) + cVar6;
  uStack_14 = in_ES;
  bVar7 = cVar6 - (byte)*puVar46;
  bVar4 = bVar7 + 0x28;
  pbVar10 = (byte *)CONCAT31(uVar19,bVar4);
  if (0xd7 < bVar7) {
    *pbVar10 = *pbVar10 + bVar4;
    uStack_18 = in_ES;
    uVar24 = CONCAT11((char)((ulonglong)uVar49 >> 0x28) - *(byte *)((int)puVar26 + -0x3a),
                      (char)((ulonglong)uVar49 >> 0x20));
    puVar26 = (uint *)CONCAT22((short)((ulonglong)uVar49 >> 0x30),uVar24);
    bVar7 = (bVar4 | *pbVar10) + cRam14060000;
    pcVar12 = (char *)CONCAT31(uVar19,bVar7);
    uVar34 = *puVar26;
    *(byte *)puVar26 = (byte)*puVar26;
    if ((POPCOUNT((byte)*puVar26) & 1U) == 0) {
      pcVar9 = &cRam14060000;
      puVar45 = puVar44;
      if ((byte)*puVar26 == 0 || SCARRY1((byte)uVar34,'\0') != (char)(byte)*puVar26 < '\0')
      goto code_r0x0040475f;
      *pcVar12 = *pcVar12 + bVar7;
      piVar17 = (int *)CONCAT31(uVar19,bVar7 + 0x2d);
      *(byte **)(pbVar43 + (int)puVar44 * 8) =
           (byte *)((int)puVar26 + (uint)(0xd2 < bVar7) + *(int *)(pbVar43 + (int)puVar44 * 8));
      uStack_30 = in_ES;
      uRam7305fffc = uVar47;
      *piVar17 = *piVar17 + (int)piVar17;
      bVar7 = bVar7 + 0x2d | *(byte *)((int)piVar17 + 0x400006d);
      pcVar12 = (char *)CONCAT31(uVar19,bVar7);
      if ((char)bVar7 < '\x01') goto code_r0x00404777;
      *pcVar12 = *pcVar12 + bVar7;
      pcVar12 = (char *)CONCAT31(uVar19,bVar7 + 0x10);
      *puVar26 = (uint)(pcVar12 + *puVar26);
    }
    out(*(undefined4 *)pbVar43,uVar24);
    pcStack_38 = &cRam14060000;
    *pcVar12 = *pcVar12 + (byte)pcVar12;
    puStack_3c = (uint *)((uint)puStack_3c & 0xffff0000);
    puStack_40 = (uint *)((uint)puStack_40 & 0xffff0000);
    pcStack_44 = (char *)((uint)pcStack_44 & 0xffff0000);
    cRam14060000 = cRam14060000 + '\x02';
    bVar7 = (byte)pcVar12 | (byte)*puVar26;
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar7);
    pbVar43 = pbVar42 + 9;
    out(*(undefined4 *)(pbVar42 + 5),uVar24);
    puVar44 = (uint *)(unaff_EDI + 1);
    *pcVar12 = *pcVar12 + bVar7;
    puStack_48 = (uint *)((uint)puStack_48 & 0xffff0000);
    pbVar10 = (byte *)((int)((uint)pcVar12 | *puVar44) + *(int *)((uint)pcVar12 | *puVar44));
    *pbVar10 = *pbVar10 + (char)pbVar10;
  }
  cVar5 = (char)pbVar10 + *pbVar10;
  puVar45 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
  *(char *)puVar45 = (char)*puVar45 + cVar5;
  *puVar45 = *puVar45 & (uint)puVar45;
  *(char *)puVar45 = (char)*puVar45 + cVar5;
  pbVar42 = (byte *)((int)puVar45 + 1);
  cVar5 = (char)pbVar42;
  *pbVar42 = *pbVar42 + cVar5;
  *(byte *)puVar46 = (byte)*puVar46;
  *pbVar42 = *pbVar42 + cVar5;
  pbStack_4c = (byte *)((uint)pbStack_4c & 0xffff0000);
  puVar21 = (uint *)((uint)CONCAT21(0x1406,*(byte *)((int)puVar44 + 0x49)) << 8);
  *pbVar42 = *pbVar42 + cVar5;
  pbStack_50 = (byte *)((uint)pbStack_50 & 0xffff0000);
  *(byte *)(puVar46 + 0x818000) = (byte)puVar46[0x818000] - cVar35;
  out(*(undefined4 *)pbVar43,(short)puVar26);
  *pbVar42 = *pbVar42 + cVar5;
  puStack_54 = (uint *)((uint)puStack_54 & 0xffff0000);
  pbStack_58 = (byte *)((uint)pbStack_58 & 0xffff0000);
  pbVar10 = pbVar43 + *(int *)((int)puVar46 + -0x7f) + 4;
  *pbVar42 = *pbVar42 + cVar5;
  puVar46 = (uint *)((int)puVar46 + -1);
  do {
    puStack_5c = (uint *)((uint)puStack_5c & 0xffff0000);
    cVar5 = (char)pbVar42 - (byte)*puVar26;
    pcVar12 = (char *)CONCAT31((int3)((uint)pbVar42 >> 8),cVar5);
    pbVar43 = pbVar10 + 4;
    out(*(undefined4 *)pbVar10,(short)puVar26);
    puVar45 = (uint *)((int)puVar44 + -1);
    *pcVar12 = *pcVar12 + cVar5;
    uStack_2c = in_ES;
    pcVar9 = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),
                              CONCAT11((char)((uint)puVar21 >> 8) + (byte)puVar44[0x12],
                                       (char)puVar21));
code_r0x0040475f:
    cVar5 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar5;
    uStack_30 = in_ES;
    *(byte *)(puVar46 + 0x818000) = (byte)puVar46[0x818000] - (char)((uint)puVar46 >> 8);
    out(*(undefined4 *)pbVar43,(short)puVar26);
    pbVar10 = (byte *)((int)puVar46 + -1);
    *pcVar12 = *pcVar12 + cVar5;
    pcStack_34 = (char *)CONCAT22(pcStack_34._2_2_,in_ES);
    pcStack_38 = (char *)CONCAT22(pcStack_38._2_2_,in_ES);
    pbVar43 = pbVar43 + *(int *)((int)puVar46 + -0x71) + 4;
    *pcVar12 = *pcVar12 + cVar5;
    puStack_3c = (uint *)CONCAT22(puStack_3c._2_2_,in_ES);
    puVar46 = (uint *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((char)((uint)pbVar10 >> 8) - pbVar43[0x6e],(char)pbVar10));
    puVar44 = puVar45;
code_r0x00404777:
    bVar7 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar7;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    puVar45 = (uint *)(pbVar43 + (int)puVar44 * 8);
    uVar34 = *puVar45;
    uVar1 = *puVar45;
    *puVar45 = (uint)((byte *)(uVar1 + (int)puVar26) + (0xd2 < bVar7));
    puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,in_ES);
    puVar45 = (uint *)0x73060000;
    cVar6 = bVar7 + 0x2e +
            (CARRY4(uVar34,(uint)puVar26) || CARRY4(uVar1 + (int)puVar26,(uint)(0xd2 < bVar7)));
    *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar9;
    *pbVar43 = *pbVar43;
    cVar5 = cVar6 + '~';
    pcVar11 = (char *)CONCAT31(uVar19,cVar5);
    out(*pbVar43,(short)puVar26);
    *pcVar11 = *pcVar11 + cVar5;
    cVar6 = cVar6 + -0x80;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6);
    out(*(undefined4 *)(pbVar43 + 1),(short)puVar26);
    puVar21 = (uint *)(pcVar9 + -1);
    *pcVar11 = *pcVar11 + cVar6;
    pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,in_ES);
    *(byte *)puVar44 = (byte)*puVar44 - (char)((uint)pcVar12 >> 8);
    *pcVar11 = *pcVar11 + cVar6;
    puStack_48 = (uint *)CONCAT22(puStack_48._2_2_,in_ES);
    *pcVar11 = *pcVar11 - (char)((uint)puVar21 >> 8);
    *pcVar11 = *pcVar11 + cVar6;
    pbStack_4c = (byte *)CONCAT22(pbStack_4c._2_2_,in_ES);
    pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,in_ES);
    pbVar10 = pbVar43 + *(int *)((int)puVar46 + 9) + 5;
    *pcVar11 = *pcVar11 + cVar6;
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,in_ES);
    cVar5 = (char)puVar26;
    cVar35 = (char)((uint)puVar26 >> 8) - *(byte *)((int)puVar46 + -0x59);
    puVar26 = (uint *)CONCAT22((short)((uint)puVar26 >> 0x10),CONCAT11(cVar35,cVar5));
    *pcVar11 = *pcVar11 + cVar6;
    uVar47 = (undefined2)((uint)puVar46 >> 0x10);
    uVar31 = SUB41(puVar46,0);
    bVar36 = (byte)((uint)puVar46 >> 8) | *(byte *)((int)puVar26 + 0x36);
    puVar46 = (uint *)CONCAT22(uVar47,CONCAT11(bVar36,uVar31));
    bVar4 = cVar6 + (byte)*puVar46;
    pbVar42 = (byte *)CONCAT31(uVar19,bVar4);
    *(byte *)puVar44 = (byte)*puVar44 - cVar35;
    bVar7 = *pbVar42;
    *pbVar42 = *pbVar42 + bVar4;
    pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_ES);
  } while (!CARRY1(bVar7,bVar4));
  *pbVar42 = *pbVar42 + bVar4;
  bVar4 = bVar4 - *pbVar42;
  pbVar43 = (byte *)CONCAT31(uVar19,bVar4);
  *(byte *)puVar46 = (byte)*puVar46 + cVar5;
  *(byte *)puVar26 = (byte)*puVar26 ^ bVar4;
  pcVar9[0x2affffff] = pcVar9[0x2affffff] + bVar4;
  bVar7 = *pbVar43;
  *pbVar43 = *pbVar43 + bVar4;
  *puVar46 = (uint)(pbVar43 + (uint)CARRY1(bVar7,bVar4) + *puVar46);
  pbVar42 = pbVar43 + -0x32a1702;
  if (pbVar42 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar42;
    puVar27 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + (byte)*puVar26);
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_ES);
    pbVar43[-0xe0c891b] = pbVar43[-0xe0c891b] + cVar35;
    pbVar42 = pbVar43 + 0x19fd76e3;
    bVar7 = *pbVar42;
    *pbVar42 = *pbVar42 - bVar36;
    piVar17 = (int *)((uint)(pbVar43 + (bVar7 < bVar36) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar17 + 0x73) = *(char *)((int)piVar17 + 0x73) + cVar35;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar4 = bVar36 | *(byte *)((int)puVar26 + 2);
    puVar46 = (uint *)CONCAT22(uVar47,CONCAT11(bVar4,uVar31));
    cVar5 = (char)piVar17;
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      uVar19 = (undefined3)((uint)(pbVar43 + (bVar7 < bVar36) + 0x63fd76e4) >> 8);
      cVar6 = cVar5 + '\x06';
      if ((POPCOUNT(cVar6) & 1U) == 0) {
        *(char *)CONCAT31(uVar19,cVar6) = *(char *)CONCAT31(uVar19,cVar6) + cVar6;
        pbVar42 = (byte *)CONCAT31(uVar19,cVar5 + '.');
        puVar21 = puVar27;
        uStack_64 = in_SS;
        goto code_r0x00404803;
      }
      cVar5 = cVar6 + (byte)*puVar46;
      pcVar12 = (char *)CONCAT31(uVar19,cVar5);
      if (SCARRY1(cVar6,(byte)*puVar46) == cVar5 < '\0') {
code_r0x004048e7:
        pcVar12 = (char *)((uint)pcVar12 | 8);
        uStack_64 = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(puVar26 + 0x1cc18000) = (byte)puVar26[0x1cc18000] + cVar5;
code_r0x0040486e:
      pcVar12 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),(byte)piVar17 & (byte)*puVar26);
      puVar44 = (uint *)((int)puVar44 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar12 = *pcVar12 + (char)pcVar12;
    pbVar43 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '*');
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_DS);
    bVar7 = (byte)((uint)puVar27 >> 8);
    cVar5 = (char)puVar27;
    puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),CONCAT11(bVar7 + *pbVar43,cVar5));
    pbVar43 = pbVar43 + (uint)CARRY1(bVar7,*pbVar43) + *(int *)pbVar43;
    *(byte *)puVar26 = (byte)*puVar26 + cVar5;
    bVar48 = (byte)pbVar43 < *pbVar43;
    pbVar43 = (byte *)CONCAT31((int3)((uint)pbVar43 >> 8),(byte)pbVar43 - *pbVar43);
code_r0x00404880:
    pbVar10 = pbVar10 + (uint)bVar48 + *(int *)pbVar43;
    uStack_64 = in_ES;
    while( true ) {
      bVar4 = (byte)pbVar43;
      pbVar43[0x2c000000] = pbVar43[0x2c000000] + bVar4;
      bVar7 = *pbVar43;
      *pbVar43 = *pbVar43 + bVar4;
      *puVar26 = (uint)(pbVar43 + (uint)CARRY1(bVar7,bVar4) + *puVar26);
      *(byte *)puVar46 = (byte)*puVar46 - (char)puVar26;
      *pbVar43 = *pbVar43 + bVar4;
      puVar21 = (uint *)CONCAT31((int3)((uint)pbVar43 >> 8),bVar4 | (byte)*puVar46);
code_r0x00404895:
      pcVar12 = (char *)((uint)puVar21 | *puVar21);
code_r0x00404899:
      cVar5 = (char)pcVar12;
      *pbVar10 = *pbVar10 + cVar5;
      uVar19 = (undefined3)((uint)pcVar12 >> 8);
      bVar7 = cVar5 + (byte)*puVar46;
      pcVar12 = (char *)CONCAT31(uVar19,bVar7);
      bVar4 = (byte)((uint)puVar27 >> 8);
      uVar47 = (undefined2)((uint)puVar27 >> 0x10);
      cVar6 = (char)puVar26;
      if (SCARRY1(cVar5,(byte)*puVar46) == (char)bVar7 < '\0') {
        *(byte *)puVar46 = (byte)*puVar46 - cVar6;
        *pcVar12 = *pcVar12 + bVar7;
        puVar27 = (uint *)CONCAT22(uVar47,CONCAT11(bVar4 | (byte)*puVar26,(char)puVar27));
        puVar26 = (uint *)((int)puVar26 + 1);
        pcVar12 = pcVar12 + *puVar26;
        uStack_64 = in_ES;
        if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar12 = *pcVar12 + bVar7;
      bVar36 = bVar7 + 2;
      pcVar12 = (char *)CONCAT31(uVar19,bVar36);
      if (bVar7 < 0xfe) {
        *pbVar10 = *pbVar10 + bVar36;
        puVar21 = puVar46;
        uStack_64 = in_ES;
        goto code_r0x004048f5;
      }
      *pcVar12 = *pcVar12 + bVar36;
      puVar26 = (uint *)CONCAT22((short)((uint)puVar26 >> 0x10),
                                 CONCAT11((byte)((uint)puVar26 >> 8) |
                                          *(byte *)((int)puVar46 + -0x5b),cVar6));
      cVar5 = *pcVar12;
      *pcVar12 = *pcVar12 + bVar36;
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_ES);
      uVar24 = in_ES;
      if (SCARRY1(cVar5,bVar36) == *pcVar12 < '\0') goto code_r0x00404927;
      *pcVar12 = *pcVar12 + bVar36;
      bVar7 = bVar7 + 4;
      pbVar43 = (byte *)CONCAT31(uVar19,bVar7);
      if (0xfd < bVar36) break;
      *pbVar43 = *pbVar43 + bVar7;
      puVar27 = (uint *)CONCAT22(uVar47,CONCAT11(bVar4 | (byte)*puVar26,(char)puVar27));
      *(byte *)puVar46 = (byte)*puVar46 + cVar6;
      *pbVar10 = *pbVar10 ^ bVar7;
    }
    *pbVar43 = *pbVar43 + bVar7;
    puStack_68 = (uint *)((uint)puStack_68 & 0xffff0000);
  }
  else {
    pbVar43[0x6fdbe8fe] = pbVar43[0x6fdbe8fe] + (char)pbVar42;
code_r0x00404803:
    *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
    uVar20 = (undefined3)((uint)puVar21 >> 8);
    bVar4 = (byte)puVar21 | (byte)*puVar46;
    puVar27 = (uint *)CONCAT31(uVar20,bVar4);
    uVar47 = (undefined2)((uint)puVar46 >> 0x10);
    cVar6 = (char)puVar46;
    cVar37 = (char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + 0x6f);
    puVar46 = (uint *)CONCAT22(uVar47,CONCAT11(cVar37,cVar6));
    bVar7 = (byte)pbVar42;
    *pbVar42 = *pbVar42 + bVar7;
    bVar48 = 0xf9 < bVar7;
    uVar19 = (undefined3)((uint)pbVar42 >> 8);
    cVar5 = bVar7 + 6;
    pbVar43 = (byte *)CONCAT31(uVar19,cVar5);
    in_SS = uStack_64;
    if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404880;
    *pbVar43 = *pbVar43 + cVar5;
    piVar17 = (int *)CONCAT31(uVar19,bVar7 + 0x2e);
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar4 = bVar4 | *(byte *)((int)puVar26 + (int)piVar17);
    puVar27 = (uint *)CONCAT31(uVar20,bVar4);
    in_SS = puStack_60._0_2_;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      puVar21 = (uint *)((int)piVar17 + *piVar17);
      *(byte *)puVar26 = (byte)*puVar26 + bVar4;
      pbVar10 = pbVar10 + puVar26[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar17 = (char)*piVar17 + bVar7 + 0x2e;
    cVar5 = bVar7 + 0x34;
    pcVar12 = (char *)CONCAT31(uVar19,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      pcVar12[0x28] = pcVar12[0x28] + cVar35;
      goto code_r0x00404899;
    }
    *pcVar12 = *pcVar12 + cVar5;
    piVar17 = (int *)CONCAT31(uVar19,bVar7 + 0x5c);
    *piVar17 = *piVar17 + (int)piVar17;
    cVar35 = (bVar4 | bRam07022c07) - (char)*piVar17;
    puVar27 = (uint *)CONCAT31(uVar20,cVar35);
    pcVar12 = (char *)CONCAT31(uVar19,bVar7 + 0x5a);
    bVar4 = (byte)((uint)puVar21 >> 8);
    *(byte *)puVar26 = (byte)*puVar26 | bVar4;
    *(uint *)((int)puVar26 + (int)pcVar12) = *(uint *)((int)puVar26 + (int)pcVar12) | 0x73060000;
    *puVar26 = *puVar26 | 0x73060000;
    cVar37 = cVar37 + *(byte *)((int)puVar46 + 0x72);
    puVar46 = (uint *)CONCAT22(uVar47,CONCAT11(cVar37,cVar6));
    *pcVar12 = *pcVar12 + bVar7 + 0x5a;
    cVar5 = bVar7 + 0x60;
    pcVar12 = (char *)CONCAT31(uVar19,cVar5);
    if ((POPCOUNT(cVar5) & 1U) == 0) {
      *pcVar12 = *pcVar12 + cVar5;
      piVar17 = (int *)CONCAT31(uVar19,bVar7 + 0x88);
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_DS);
      puVar27 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                 CONCAT11((bVar4 | (byte)*puVar26) + (char)*piVar17,cVar35));
      *(char *)piVar17 = (char)*piVar17;
      cVar6 = cVar6 - *pbVar10;
      cVar37 = cVar37 + *(char *)(CONCAT31((int3)((uint)puVar46 >> 8),cVar6) + 0x73);
      *(byte *)piVar17 = (char)*piVar17 + bVar7 + 0x88;
      bVar7 = bVar7 + 0xb2 & (byte)*puVar26;
      puVar44 = (uint *)((int)puVar44 + iRam73060073);
      *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
      pcVar12 = (char *)CONCAT31(uVar19,bVar7 + 0x2a);
      puVar46 = (uint *)CONCAT22(uVar47,CONCAT11(cVar37 + *(char *)(CONCAT22(uVar47,CONCAT11(cVar37,
                                                  cVar6)) + 0x74),cVar6));
      *pcVar12 = *pcVar12 + bVar7 + 0x2a;
      piVar17 = (int *)CONCAT31(uVar19,bVar7 + 0x54);
      in_SS = puStack_68._0_2_;
      goto code_r0x0040486e;
    }
    pbVar43 = (byte *)*(undefined6 *)pcVar12;
    *pbVar10 = *pbVar10 + (char)*(undefined6 *)pcVar12;
  }
  uVar19 = (undefined3)((uint)pbVar43 >> 8);
  bVar7 = (byte)pbVar43 | *pbVar10;
  pcVar12 = (char *)CONCAT31(uVar19,bVar7);
  *pcVar12 = *pcVar12 + bVar7;
  *puVar46 = (uint)(*puVar46 + (int)puVar27);
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + 0x75),
                                      (char)puVar46));
  *pcVar12 = *pcVar12 + bVar7;
  pcVar12 = (char *)CONCAT31(uVar19,bVar7 + 0x6f);
  *pcVar12 = *pcVar12 + bVar7 + 0x6f;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)puVar26 = (byte)*puVar26 + (char)puVar27;
  uRam00c16f07 = SUB41(pcVar12,0);
code_r0x004048de:
  cVar5 = (char)pcVar12;
  *pbVar10 = *pbVar10 + cVar5;
  *pcVar12 = *pcVar12 + cVar5;
  *(byte **)(pcVar12 + (int)puVar27) = (byte *)(*(int *)(pcVar12 + (int)puVar27) + (int)puVar27);
  puStack_68 = (uint *)CONCAT22(puStack_68._2_2_,uStack_64);
  bVar7 = *(byte *)((int)puVar46 + 0x75);
  *pcVar12 = *pcVar12 + cVar5;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5 + 'o');
  pbVar10 = pbVar10 + 1;
  *pcVar12 = *pcVar12 + cVar5 + 'o';
  pbStack_6c = (byte *)CONCAT22(pbStack_6c._2_2_,uStack_64);
  puVar21 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((char)((uint)puVar46 >> 8) + bVar7,(char)puVar46));
  puVar45 = puVar46;
  in_SS = uStack_64;
code_r0x004048f5:
  puVar46 = puVar21;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)puVar26 = (byte)*puVar26 + (char)puVar27;
  do {
    uRam00c36f08 = SUB41(pcVar12,0);
    while( true ) {
      bVar7 = *pbVar10;
      cVar5 = (char)pcVar12;
      *pbVar10 = *pbVar10 + cVar5;
      iStack_70 = CONCAT22(iStack_70._2_2_,uStack_64);
      if (SCARRY1(bVar7,cVar5) == (char)*pbVar10 < '\0') {
        pcVar12[(int)puVar45] = pcVar12[(int)puVar45] + cVar5;
        goto code_r0x00404982;
      }
      *pcVar12 = *pcVar12 + cVar5;
      pbVar43 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5 + '*');
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_DS);
      bVar7 = (byte)((uint)puVar27 >> 8);
      cVar5 = (char)puVar27;
      bVar4 = bVar7 + *pbVar43;
      pbVar43 = pbVar43 + (uint)CARRY1(bVar7,*pbVar43) + *(int *)pbVar43;
      *(byte *)puVar26 = (byte)*puVar26 + cVar5;
      cVar6 = (char)puVar46 - *pbVar10;
      bVar7 = *pbVar43;
      puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),CONCAT11(bVar4 + *pbVar43,cVar5));
      iVar16 = *(int *)pbVar43;
      *(byte *)puVar26 = (byte)*puVar26 + cVar5;
      pcVar12 = (char *)CONCAT31((int3)((uint)(pbVar43 + (uint)CARRY1(bVar4,bVar7) + iVar16) >> 8),
                                 (char)(pbVar43 + (uint)CARRY1(bVar4,bVar7) + iVar16) -
                                 *(byte *)((int)puVar26 + 3));
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                 CONCAT11((char)((uint)puVar46 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)puVar46 >> 8),cVar6) +
                                                   -0x3a),cVar6));
code_r0x00404921:
      bVar7 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar7;
      pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar7 + 0x6f);
      *(byte *)puVar27 = ((byte)*puVar27 - (bVar7 + 0x6f)) - (0x90 < bVar7);
      uVar24 = uStack_64;
code_r0x00404927:
      uStack_64 = uVar24;
      *(byte *)puVar26 = (byte)*puVar26 + (char)puVar27;
      pbStack_6c = (byte *)CONCAT22(pbStack_6c._2_2_,in_SS);
      *(byte *)puVar27 = (byte)*puVar27 + 1;
      cVar5 = (char)((uint)puVar27 >> 8) - pbVar10[2];
      puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),CONCAT11(cVar5,(char)puVar27));
      if ((POPCOUNT(cVar5) & 1U) == 0) break;
      pcVar12 = pcVar12 + -0x1b7e2606;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar12 >> 8) | (byte)puVar26[0x30dbc2],
                                          (char)pcVar12));
    }
code_r0x00404931:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar5 = (char)pcVar12 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5);
    pbVar43 = pbVar10;
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  do {
    bVar7 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar7;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    piVar17 = (int *)CONCAT31(uVar19,bVar7 + 0x6f);
    *puVar27 = (*puVar27 - (int)piVar17) - (uint)(0x90 < bVar7);
    *(byte *)puVar26 = (byte)*puVar26 + (char)puVar27;
    iVar16 = *(int *)((int)puVar44 + 0x1a);
    *piVar17 = *piVar17 + (int)piVar17;
    puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),(byte)puVar26 | *pbVar43);
    *(byte *)puVar27 = (byte)*puVar27 + 1;
    bVar7 = (bVar7 + 0x6f) - (char)*piVar17;
    pbVar10 = (byte *)CONCAT31(uVar19,bVar7);
    *pbVar10 = *pbVar10 + bVar7;
    pbVar43 = pbVar43 + *(int *)pbVar10;
    cVar5 = bVar7 + *pbVar10;
    puVar13 = (ushort *)CONCAT31(uVar19,cVar5);
    *puVar13 = *puVar13 + (ushort)CARRY1(bVar7,*pbVar10) * (((ushort)puVar13 & 3) - (*puVar13 & 3));
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    puVar44 = (uint *)((int)puVar44 + puVar46[0x1c]);
    puVar45 = (uint *)((int)puVar45 + iVar16);
code_r0x0040495b:
    cVar5 = (char)puVar13;
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    uVar19 = (undefined3)((uint)puVar13 >> 8);
    cVar6 = cVar5 + '\x02';
    pcVar12 = (char *)CONCAT31(uVar19,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      *puVar26 = (uint)(*puVar26 + (int)puVar45);
      pbVar10 = pbVar43 + 1;
      out(*pbVar43,(short)puVar26);
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                 CONCAT11((char)((uint)puVar46 >> 8) +
                                          *(byte *)((int)puVar46 + -0x3b),(char)puVar46));
      goto code_r0x00404931;
    }
    *pcVar12 = *pcVar12 + cVar6;
    pbVar43 = (byte *)(CONCAT31(uVar19,cVar5 + '}') + (int)puVar45);
    *pbVar43 = *pbVar43 + cVar5 + '}';
    *pcStack_34 = *pcStack_34 + (char)pcStack_34;
    puVar27 = (uint *)CONCAT22((short)((uint)pcStack_38 >> 0x10),
                               CONCAT11((byte)((uint)pcStack_38 >> 8) |
                                        *(byte *)((int)pcStack_38 * 3),(char)pcStack_38));
    puVar44 = (uint *)(pbStack_50 + *(int *)((int)puStack_40 + 0x6f));
    pcVar12 = pcStack_34;
    puVar26 = puStack_3c;
    puVar46 = puStack_40;
    puVar45 = puStack_48;
    pbVar43 = pbStack_4c;
    while( true ) {
      cVar5 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar5;
      uVar19 = (undefined3)((uint)pcVar12 >> 8);
      cVar6 = cVar5 + '\x02';
      pcVar12 = (char *)CONCAT31(uVar19,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) break;
      *pcVar12 = *pcVar12 + cVar6;
      pcVar12 = (char *)CONCAT31(uVar19,cVar5 + '}');
      out(*(undefined4 *)pbVar43,(short)puVar26);
      *pcVar12 = *pcVar12 + cVar5 + '}';
code_r0x00404982:
      puStack_5c = (uint *)CONCAT22(puStack_5c._2_2_,in_ES);
      *(byte *)puStack_54 = (byte)*puStack_54 + (char)in_ES;
      puVar27 = (uint *)CONCAT22((short)((uint)pbStack_58 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_58 >> 8) |
                                          pbStack_58[(int)pbStack_6c],(char)pbStack_58));
      puVar44 = (uint *)(iStack_70 + *(int *)((int)puStack_60 + 0x71));
      puVar45 = puStack_54;
      puVar26 = puStack_5c;
      puVar46 = puStack_60;
      pbVar43 = pbStack_6c;
      while( true ) {
        cVar5 = (char)puVar45;
        *(byte *)puVar45 = (byte)*puVar45 + cVar5;
        uVar19 = (undefined3)((uint)puVar45 >> 8);
        cVar6 = cVar5 + '\x02';
        puVar13 = (ushort *)CONCAT31(uVar19,cVar6);
        puVar45 = puStack_68;
        if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar13 = (char)*puVar13 + cVar6;
        bVar4 = cVar5 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar4);
        pbVar10 = (byte *)(iVar16 + (int)puStack_68);
        bVar7 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar4;
        uVar34 = *puVar27;
        *(byte *)puVar26 = (byte)*puVar26 + (char)puVar27;
        pcVar12 = (char *)(((iVar16 - uVar34) - (uint)CARRY1(bVar7,bVar4)) + -0x727b0317);
        cVar5 = (char)pcVar12;
        *pcVar12 = *pcVar12 + cVar5;
        uVar19 = (undefined3)((uint)pcVar12 >> 8);
        cVar6 = cVar5 + '\x02';
        pcVar12 = (char *)CONCAT31(uVar19,cVar6);
        if ((POPCOUNT(cVar6) & 1U) != 0) break;
        *pcVar12 = *pcVar12 + cVar6;
        bVar4 = cVar5 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar4);
        pbVar10 = (byte *)(iVar16 + (int)puStack_68);
        bVar7 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar4;
        puVar45 = (uint *)((iVar16 - *puVar27) - (uint)CARRY1(bVar7,bVar4));
        puVar21 = puVar26;
code_r0x004049b4:
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar27;
        puVar26 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),
                                   ((char)puVar21 - (byte)*puVar44) - *pbVar43);
        bVar4 = pbVar43[0x72];
        *puVar45 = *puVar45 & (uint)puVar27;
        pbVar10 = (byte *)((int)puVar45 + 2);
        *pbVar10 = *pbVar10 + (char)((uint)puVar21 >> 8);
        bVar7 = *pbVar10;
        puVar18 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(char)puVar46 - bVar4);
        pbVar10 = pbVar43;
        while (puVar46 = puVar18, pbVar43 = pbVar10, (POPCOUNT(bVar7) & 1U) == 0) {
          cVar5 = (char)puVar45;
          *(byte *)puVar45 = (byte)*puVar45 + cVar5;
          uVar19 = (undefined3)((uint)puVar45 >> 8);
          cVar6 = cVar5 + '\x03';
          pbVar42 = (byte *)CONCAT31(uVar19,cVar6);
          pbVar43 = pbVar10 + 4;
          out(*(undefined4 *)pbVar10,(short)puVar26);
          in_SS = pbStack_50._0_2_;
          *pbVar42 = *pbVar42 + cVar6;
          cVar35 = (char)puVar27;
          puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),
                                     CONCAT11((byte)((uint)puVar27 >> 8) | *pbVar42,cVar35));
          *(int *)pbVar42 = *(int *)pbVar42 - (int)pbVar42;
          *(byte *)puVar26 = (byte)*puVar26 + cVar35;
          cVar35 = (char)puVar18 - pbVar10[6];
          puVar46 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),cVar35);
          if ((POPCOUNT(cVar35) & 1U) != 0) {
            pbVar10 = (byte *)((int)puVar44 + (int)puStack_68 * 2);
            *pbVar10 = *pbVar10 + cVar6;
            ppbVar41 = (byte **)puStack_68;
            goto code_r0x00404a51;
          }
          *pbVar42 = *pbVar42 + cVar6;
          puVar45 = (uint *)CONCAT31(uVar19,cVar5 + 'r');
          *(byte *)puVar45 = (byte)*puVar45;
          pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,uStack_64);
          do {
            puVar44 = (uint *)((int)puVar44 + puVar46[0x1c]);
            bVar7 = (byte)puVar45;
            *(byte *)puVar45 = (byte)*puVar45 + bVar7;
            uVar19 = (undefined3)((uint)puVar45 >> 8);
            bVar7 = (bVar7 + 0x6e) - (0x90 < bVar7);
            puVar45 = (uint *)CONCAT31(uVar19,bVar7);
            cVar5 = (char)puVar27;
            *(byte *)puVar26 = (byte)*puVar26 + cVar5;
            bVar4 = (char)((uint)puVar27 >> 8) - pbVar43[2];
            puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),CONCAT11(bVar4,cVar5));
            puVar21 = puVar26;
            if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar45 = (byte)*puVar45 + bVar7;
            bVar36 = bVar7 + 2;
            puVar45 = (uint *)CONCAT31(uVar19,bVar36);
            ppbVar40 = (byte **)puStack_68;
            if ((POPCOUNT(bVar36) & 1U) == 0) goto code_r0x004049f5;
            pbVar43 = pbStack_50;
          } while (0xfd < bVar7);
          *(byte *)puVar45 = (byte)*puVar45 | bVar36;
          puVar18 = puVar46;
          pbVar10 = pbStack_50;
          bVar7 = (byte)*puVar45;
        }
      }
    }
    *(byte *)puVar26 = (byte)*puVar26 + (char)puVar27;
    pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar7 = (byte)puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar7;
    uVar19 = (undefined3)((uint)puVar45 >> 8);
    bVar36 = bVar7 + 0x6f;
    pbVar42 = (byte *)CONCAT31(uVar19,bVar36);
    *puVar27 = (*puVar27 - (int)pbVar42) - (uint)(0x90 < bVar7);
    *(byte *)puVar26 = (byte)*puVar26 + cVar5;
    pbVar10 = (byte *)((int)ppbVar40 + *(int *)((int)puVar44 + 0x1a));
    *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
    uVar20 = (undefined3)((uint)puVar26 >> 8);
    bVar7 = (byte)puVar26 | *pbVar43;
    puVar26 = (uint *)CONCAT31(uVar20,bVar7);
    *(byte *)puVar27 = (byte)*puVar27 + 1;
    cVar6 = bVar36 - *pbVar42;
    pbVar43 = pbVar43 + (-(uint)(bVar36 < *pbVar42) - *(int *)CONCAT31(uVar19,cVar6));
    uVar14 = CONCAT31(uVar19,cVar6 + *(char *)CONCAT31(uVar19,cVar6));
    bVar48 = CARRY1(bRam14110000,bVar4);
    bRam14110000 = bRam14110000 + bVar4;
    puVar45 = (uint *)((int)puVar46 + (int)pbVar43 * 2);
    uVar34 = *puVar45;
    uVar1 = uVar14 + *puVar45;
    puVar15 = (undefined4 *)(uVar1 + bVar48);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar15 = uVar2;
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,uStack_64);
    uVar34 = (uint)(CARRY4(uVar14,uVar34) || CARRY4(uVar1,(uint)bVar48));
    puVar45 = (uint *)((int)puVar15 + uRam7d020511 + uVar34);
    ppbVar39 = &pbStack_58;
    ppbVar41 = &pbStack_58;
    ppbVar40 = &pbStack_58;
    pbStack_58 = pbVar10;
    cVar6 = '\x03';
    do {
      pbVar10 = pbVar10 + -4;
      ppbVar39 = ppbVar39 + -1;
      *ppbVar39 = (byte *)*(undefined4 *)pbVar10;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    pbStack_50 = (byte *)&pbStack_58;
    pbRam00c82802 =
         (byte *)((int)puVar45 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar15,uRam7d020511) ||
                      CARRY4((int)puVar15 + uRam7d020511,uVar34))));
    bVar36 = *pbVar43;
    cVar6 = (char)puVar45;
    *pbVar43 = *pbVar43 + cVar6;
  } while (SCARRY1(bVar36,cVar6) == (char)*pbVar43 < '\0');
  *(byte *)puVar45 = (byte)*puVar45 + cVar6;
  iVar16 = CONCAT31((int3)((uint)puVar45 >> 8),cVar6 + '\x11') + 0xc57b;
  bVar4 = (byte)iVar16;
  *puVar26 = *puVar26 ^ (uint)puVar46;
  puVar26 = (uint *)CONCAT31(uVar20,bVar7 + (byte)*puVar27);
  iVar16 = (CONCAT31((int3)((uint)iVar16 >> 8),bVar4 + 0x6f) - (uint)(0x90 < bVar4)) + -0x18093a86;
  cVar6 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar5 = cVar6 + '\x02';
  pbVar10 = (byte *)CONCAT31(uVar19,cVar5);
  if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar10 = *pbVar10 + cVar5;
  pbVar42 = (byte *)CONCAT31(uVar19,cVar6 + 'q');
  ppbVar41 = &pbStack_58;
code_r0x00404a51:
  pbVar10 = pbVar42 + 1;
  cVar5 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar5;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                             CONCAT11((char)((uint)puVar18 >> 8) - cVar5,cVar35));
  *pbVar10 = *pbVar10 + cVar5;
  puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),(char)puVar26 - (byte)*puVar27);
  pbVar42 = pbVar42 + 0x757b03;
  pbVar10 = (byte *)((int)puVar44 + (int)ppbVar41 * 2);
  cVar5 = (char)pbVar42;
  *pbVar10 = *pbVar10 + cVar5;
  *pbVar42 = *pbVar42 + cVar5;
  *pbVar43 = *pbVar43 - (char)((uint)pbVar42 >> 8);
  *pbVar42 = *pbVar42 + cVar5;
  puVar44 = (uint *)((int)puVar44 - *(int *)((int)ppbVar41 + -0x3a));
  *pbVar42 = *pbVar42 + cVar5;
  pbVar10 = (byte *)(CONCAT31((int3)((uint)pbVar42 >> 8),cVar5 + '\x11') + 0x757b02);
  pbVar42 = (byte *)((int)puVar44 + (int)ppbVar41 * 2);
  bVar4 = (byte)pbVar10;
  *pbVar42 = *pbVar42 + bVar4;
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_64);
  pbRam011006fe = pbVar10 + (int)(pbRam011006fe + CARRY1(bVar7,bVar4));
  bVar7 = *pbVar43;
  *pbVar43 = *pbVar43 + bVar4;
  if (!CARRY1(bVar7,bVar4)) goto code_r0x00404add;
  do {
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    bVar36 = (byte)puVar27;
    puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),
                               CONCAT11((byte)((uint)puVar27 >> 8) | *pbVar10,bVar36));
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar19 = (undefined3)((uint)pbVar10 >> 8);
    bVar7 = bVar7 + in_AF * '\x06';
    cVar5 = bVar7 + (0x90 < (bVar7 & 0xf0) | in_AF * (0xf9 < bVar7)) * '`';
    pcVar12 = (char *)CONCAT31(uVar19,cVar5);
    *pcVar12 = *pcVar12 + cVar5;
    puVar44 = (uint *)((int)puVar44 - *(int *)((int)ppbVar41 + -0x39));
    *pcVar12 = *pcVar12 + cVar5;
    iVar16 = CONCAT31(uVar19,cVar5 + '\x11') + 0xc57b;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x11') + 0xc67b;
    bVar7 = (byte)iVar16;
    bVar4 = bVar7 + 0x6f;
    pbVar10 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar4);
    *puVar27 = (*puVar27 - (int)pbVar10) - (uint)(0x90 < bVar7);
    uVar34 = *puVar26;
    *(byte *)puVar26 = (byte)*puVar26 + bVar36;
    pbRam011106fe = pbVar10 + (int)(pbRam011106fe + CARRY1((byte)uVar34,bVar36));
    bVar7 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar4;
    if (!CARRY1(bVar7,bVar4)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    bVar7 = (byte)puVar27;
    bVar4 = (byte)((uint)puVar27 >> 8) | *pbVar10;
    puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),CONCAT11(bVar4,bVar7));
    *pbVar10 = *pbVar10 - (char)pbVar10;
    *(byte *)puVar46 = (byte)*puVar46 + bVar4;
    out(*(undefined4 *)pbVar43,(short)puVar26);
    *puVar27 = *puVar27 & (uint)pbVar10;
    uVar34 = *puVar26;
    *(byte *)puVar26 = (byte)*puVar26 + bVar7;
    pbVar10 = pbVar10 + (uint)CARRY1((byte)uVar34,bVar7) + *(int *)(pbVar43 + 4);
    *pbVar10 = *pbVar10 + (char)pbVar10;
    *(byte *)puVar27 = (byte)*puVar27 + (char)puVar26;
    pbVar43 = pbVar43 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar43,(short)puVar26);
      pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 & (byte)*puVar27);
      *(byte *)puVar26 = (byte)*puVar26 + (char)puVar27;
      puVar26 = (uint *)CONCAT22((short)((uint)puVar26 >> 0x10),
                                 CONCAT11((byte)((uint)puVar26 >> 8) | (byte)puVar46[5],
                                          (char)puVar26));
      *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
      pbVar43 = pbVar43 + 4;
code_r0x00404ad4:
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_64);
      pbVar10 = (byte *)((uint)pbVar10 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar10;
code_r0x00404add:
      bVar7 = (byte)pbVar10;
      uVar19 = (undefined3)((uint)pbVar10 >> 8);
      cVar5 = bVar7 + 8;
      pbVar10 = (byte *)CONCAT31(uVar19,cVar5);
      if (SCARRY1(bVar7,'\b') == cVar5 < '\0') break;
      *pbVar10 = *pbVar10 + cVar5;
      cVar5 = bVar7 + 10;
      piVar17 = (int *)CONCAT31(uVar19,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      puVar45 = (uint *)CONCAT31(uVar19,bVar7 + 0x7c);
      *puVar45 = *puVar45 & (uint)puVar27;
      *(char *)((int)puVar45 + 0x11) = *(char *)((int)puVar45 + 0x11) + (char)((uint)puVar26 >> 8);
      cVar5 = (char)((int)puVar45 + 0xc67b);
      uVar19 = (undefined3)((uint)((int)puVar45 + 0xc67b) >> 8);
      bVar7 = cVar5 + 8;
      pbVar10 = (byte *)CONCAT31(uVar19,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar10 = *pbVar10 + bVar7;
        cRam02060000 = cVar5 + 'w';
        puVar45 = (uint *)CONCAT31(uVar19,cRam02060000);
        *(byte *)puVar45 = (byte)*puVar45 + cRam02060000;
        cVar5 = (char)puVar27;
        puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),
                                   CONCAT11((byte)((uint)puVar27 >> 8) | (byte)*puVar45,cVar5));
        *puVar45 = *puVar45 - (int)puVar45;
        *(byte *)puVar26 = (byte)*puVar26 + cVar5;
        pbVar10 = pbVar43 + 4;
        out(*(undefined4 *)pbVar43,(short)puVar26);
        pbVar43 = pbVar10;
        if ((POPCOUNT((byte)*puVar26) & 1U) == 0) goto code_r0x00404b0f;
        pcVar12 = (char *)((uint)puVar45 | *puVar45);
        goto code_r0x00404b89;
      }
      bVar4 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar7;
      *(byte **)pbVar43 = pbVar10 + (uint)CARRY1(bVar4,bVar7) + *(int *)pbVar43;
    }
    *pbVar43 = *pbVar43 + 1;
    *puVar27 = (uint)(pbVar10 + (uint)(0xf7 < bVar7) + *puVar27);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
    puVar26 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + 'r');
    piVar17 = (int *)((uint)puVar26 | *puVar26);
    puVar26 = puStack_74;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar16 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar7 = (byte)iVar16;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),bVar7 + 0x6f);
    *puVar27 = (*puVar27 - iVar16) - (uint)(0x90 < bVar7);
    cVar5 = (char)puVar27;
    *(byte *)puVar26 = (byte)*puVar26 + cVar5;
    bVar4 = (byte)((uint)puVar46 >> 8);
    bVar30 = (byte)((uint)puVar26 >> 8) | bVar4;
    pcVar9 = (char *)CONCAT22((short)((uint)puVar26 >> 0x10),CONCAT11(bVar30,(byte)puVar26));
    piVar17 = (int *)(iVar16 + 0x73060001);
    *(byte *)puVar27 = (byte)*puVar27 & (byte)piVar17;
    *pcVar9 = *pcVar9 + cVar5;
    bVar36 = (byte)((uint)puVar27 >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar36;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar16 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *(byte *)puVar46 = (byte)*puVar46 + bVar36;
    pcVar12 = (char *)((uint)piVar17 | *puVar44);
    *pcVar9 = *pcVar9 - bVar36;
    bVar7 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar7;
    ppbVar41 = (byte **)(((int)ppbVar41 - iVar16) - *(int *)(pcVar12 + ((int)ppbVar41 - iVar16)));
    uVar47 = (undefined2)((uint)puVar46 >> 0x10);
    bVar23 = (byte)puVar46;
    cVar6 = bVar4 + *(byte *)((int)puVar46 + 0x76);
    pbVar42 = (byte *)CONCAT22(uVar47,CONCAT11(cVar6,bVar23));
    *pcVar12 = *pcVar12 + bVar7;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    uVar14 = CONCAT31(uVar19,bVar7 + 7);
    puVar46 = (uint *)((int)ppbVar41 + -0x1faeef1);
    uVar34 = *puVar46;
    uVar1 = *puVar46 + uVar14;
    *puVar46 = uVar1 + (0xf8 < bVar7);
    puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_64);
    puVar46 = puStack_74;
    bVar4 = bVar7 + 7 + (byte)*puVar27 +
            (CARRY4(uVar34,uVar14) || CARRY4(uVar1,(uint)(0xf8 < bVar7)));
    puVar45 = (uint *)CONCAT31(uVar19,bVar4);
    bVar7 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar4;
    if (CARRY1(bVar7,bVar4)) break;
    *(byte *)puVar45 = (byte)*puVar45 + bVar4;
    puVar46 = (uint *)CONCAT22(uVar47,CONCAT11(cVar6 + pbVar42[0x76],bVar23));
    uStack_78 = uStack_64;
  }
  *(byte *)puVar45 = (byte)*puVar45 + bVar4;
  uVar20 = (undefined3)((uint)pcVar9 >> 8);
  bVar25 = (byte)puVar26 | *pbVar42;
  puVar26 = (uint *)CONCAT31(uVar20,bVar25);
  pcRam2b060000 = (char *)CONCAT31(uVar19,bVar4 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar4 + 0x39)) - (0xd7 < (byte)(bVar4 + 0x11));
  bVar7 = *pbVar42;
  *pbVar42 = *pbVar42 + bVar36;
  pbVar10 = pbVar43 + 4;
  out(*(undefined4 *)pbVar43,(short)puVar26);
  bVar7 = (bVar4 + 0x37) - CARRY1(bVar7,bVar36);
  piVar17 = (int *)CONCAT31(uVar19,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    iVar16 = CONCAT31(uVar19,bVar7 + 0x11) + 0xc77b;
    pcVar12 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + 'r');
    pcVar12[0x28] = pcVar12[0x28] + bVar30;
code_r0x00404b89:
    cVar5 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar5;
    *pcVar12 = *pcVar12 + cVar5;
    *pcVar12 = *pcVar12 + cVar5;
    puVar13 = (ushort *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5 + 'r');
    uVar8 = (ushort)puVar13 | *puVar13;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*(undefined4 *)pbVar10,(short)puVar26);
    *pcVar12 = *pcVar12 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar7;
  pbVar28 = (byte *)((int)ppbVar41 - *(int *)((int)puVar44 + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar12 = (char *)CONCAT31(uVar20,bVar25 | *pbVar42);
  puVar44 = (uint *)(pbVar43 + 8);
  out(*(undefined4 *)pbVar10,(short)pcVar12);
  uVar34 = *puVar27;
  *pcVar12 = *pcVar12 + cVar5;
  uVar34 = CONCAT31(uVar19,bVar7 & (byte)uVar34) | 0x767b02;
  *(byte *)((int)puVar27 + (int)pcVar12) = *(byte *)((int)puVar27 + (int)pcVar12) + (char)uVar34;
  iVar16 = uVar34 + 0xc67b;
  cVar37 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar35 = cVar37 + 'r';
  pcVar12 = (char *)CONCAT31(uVar19,cVar35);
  pcVar12[0x28] = pcVar12[0x28] + bVar30;
  *pcVar12 = *pcVar12 + cVar35;
  uVar24 = (undefined2)((uint)puVar27 >> 0x10);
  bVar36 = bVar36 | *(byte *)((int)puStack_74 + -0x5e);
  puVar21 = (uint *)CONCAT22(uVar24,CONCAT11(bVar36,cVar5));
  *pcVar12 = *pcVar12 + cVar35;
  puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_78);
  pbVar10 = (byte *)CONCAT22(uVar47,CONCAT11(cVar6 + pbVar42[0x76],bVar23));
  *pcVar12 = *pcVar12 + cVar35;
  puVar26 = (uint *)CONCAT31(uVar19,cVar37 + -0x1c);
  pcVar12 = (char *)((uint)puVar26 | *puVar26);
  bVar48 = (POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar12;
  puVar26 = puStack_74;
  pbVar42 = pbVar10;
  pbVar33 = pbVar28;
  puVar45 = puVar46;
  uVar47 = uStack_78;
  if (!bVar48) goto code_r0x00404ca8;
  *pcVar12 = *pcVar12 + cRam02060000;
  puVar26 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cRam02060000 + 'r');
  *puVar26 = *puVar26 & (uint)puVar21;
  *(char *)((int)puVar26 + 0x11) = *(char *)((int)puVar26 + 0x11) + (char)((ushort)uStack_78 >> 8);
  iVar16 = (int)puVar26 + 0xc77b;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cRam02060000 = (char)iVar16 + '\t';
  pbVar42 = (byte *)CONCAT31(uVar19,cRam02060000);
  out(*puVar44,uStack_78);
  *pbVar42 = *pbVar42 + cRam02060000;
  puVar45 = (uint *)CONCAT22(uVar24,CONCAT11(bVar36 | *pbVar42,cVar5));
  *(int *)pbVar42 = *(int *)pbVar42 - (int)pbVar42;
  *(byte *)puStack_74 = (byte)*puStack_74 + cVar5;
  out(*(undefined4 *)(pbVar43 + 0xc),uStack_78);
  puVar27 = puStack_74;
  puVar44 = (uint *)(pbVar43 + 0x10);
  uVar47 = uStack_78;
  if ((POPCOUNT((byte)*puStack_74) & 1U) != 0) goto code_r0x00404cca;
  *pbVar42 = *pbVar42 + cRam02060000;
  puVar13 = (ushort *)CONCAT31(uVar19,(char)iVar16 + '{');
  uVar8 = (ushort)puVar13 | *puVar13;
  pcVar12 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),uVar8);
  bVar7 = (byte)uVar8;
  out(*(uint *)(pbVar43 + 0x10),uStack_78);
  pbVar42 = (byte *)((int)puVar45 + 1);
  bRam11060000 = bVar7;
  *pcVar12 = *pcVar12 + bVar7;
  puVar21 = (uint *)CONCAT22((short)((uint)pbVar42 >> 0x10),
                             CONCAT11((byte)((uint)pbVar42 >> 8) | bRam110cde91,(char)pbVar42));
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar7 - 7);
  *puVar46 = (uint)(pcVar12 + (uint)(bVar7 < 7) + *puVar46);
  puVar44 = (uint *)(pbVar43 + 0x18);
  out(*(undefined4 *)(pbVar43 + 0x14),uStack_78);
  puVar26 = (uint *)((int)puStack_74 + 1);
  *pcVar12 = *pcVar12 + (bVar7 - 7);
  pbVar42 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar23 | (byte)(uVar8 >> 8));
  do {
    bVar7 = (char)pcVar12 - *pcVar12;
    uVar34 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar7;
    cVar5 = bVar7 - CARRY1((byte)uVar34,bVar7);
    *(byte *)puVar26 = *(byte *)puVar26 + cVar5;
    cVar6 = (char)((uint)puVar21 >> 8);
    *(byte *)(puVar46 + 0x673b40) = (byte)puVar46[0x673b40] + cVar6;
    puVar18 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5);
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    *(byte *)puVar26 = *(byte *)puVar26 + cVar5;
    *(byte **)(pbVar42 + 0x58) = (byte *)(*(int *)(pbVar42 + 0x58) + (int)puVar44);
    puVar45 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar21 >> 0x10),
                                               CONCAT11(cVar6 + (char)((uint)pcVar12 >> 8),
                                                        (char)puVar21)) >> 8),
                               (char)puVar21 + *(char *)((int)puVar18 * 2));
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    *(byte *)puVar44 = (byte)*puVar44 + (char)pbVar42;
    puVar27 = puVar26;
    pbVar10 = pbVar42;
_ctor:
    bVar4 = (byte)((uint)puVar45 >> 8);
    uVar34 = *puVar18;
    bVar7 = (byte)puVar45;
    puVar18 = (uint *)((int)puVar18 + (uint)CARRY1(bVar4,(byte)*puVar18) + *puVar18);
    *(byte *)puVar27 = *(byte *)puVar27 + bVar7;
    cVar5 = bVar7 - *(byte *)((int)puVar27 + 3);
    puVar21 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar45 >> 0x10),
                                               CONCAT11(bVar4 + (byte)uVar34,bVar7)) >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      if (*(byte *)((int)puVar27 + 3) <= bVar7) {
        *puVar18 = (uint)(*puVar18 + (int)puVar18);
        puVar27 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),(byte)puVar27 | *pbVar10);
        puVar18 = puVar18 + 0x230e;
        puVar45 = puVar21;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
    cVar5 = (char)puVar18 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar5);
    bVar48 = (POPCOUNT(cVar5) & 1U) == 0;
    puVar26 = puVar27;
    pbVar42 = pbVar10;
    pbVar33 = pbVar28;
    puVar45 = puVar46;
    uVar47 = puStack_68._0_2_;
code_r0x00404ca8:
    puStack_68._0_2_ = uVar47;
    pcVar9 = pcStack_44;
    puVar27 = (uint *)pbStack_4c;
    pbVar10 = pbStack_50;
    pbVar28 = pbStack_58;
    puVar46 = puStack_60;
    if (bVar48) break;
    *(byte *)puVar26 = *(byte *)puVar26 + (char)puVar21;
    pbVar28 = pbVar33;
    puVar46 = puVar45;
  } while( true );
  *pcVar12 = *pcVar12 + (char)pcVar12;
  bVar7 = (byte)pcStack_44;
  *pcStack_44 = *pcStack_44 + bVar7;
  puVar45 = (uint *)CONCAT22((short)((uint)puStack_48 >> 0x10),
                             CONCAT11((byte)((uint)puStack_48 >> 8) | *pbStack_4c,(char)puStack_48))
  ;
  *pbStack_50 = *pbStack_50 + (char)pbStack_50;
  pbVar43 = (byte *)((int)pcVar9 * 2);
  *pbVar43 = *pbVar43 ^ bVar7;
  uVar3 = *(undefined6 *)pcVar9;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar42 = (byte *)uVar3;
  bVar4 = (byte)uVar3;
  *pbVar42 = *pbVar42 + bVar4;
  bVar7 = *pbVar42;
  *pbVar42 = *pbVar42 + bVar4;
  puVar44 = (uint *)((int)puVar45 + 0x11673);
  uVar34 = *puVar44;
  uVar1 = *puVar44;
  *puVar44 = (uint)((byte *)((int)puVar27 + uVar1) + CARRY1(bVar7,bVar4));
  puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,puStack_68._0_2_);
  pbVar42 = pbVar42 + (uint)(CARRY4(uVar34,(uint)puVar27) ||
                            CARRY4((int)puVar27 + uVar1,(uint)CARRY1(bVar7,bVar4))) +
                      *(int *)((int)puVar45 + (int)puVar27);
  puVar44 = puStack_5c;
  uVar47 = puStack_68._0_2_;
code_r0x00404cca:
  puStack_68._0_2_ = uVar47;
  cVar5 = (char)pbVar42 + '\x04';
  puVar18 = (uint *)CONCAT31((int3)((uint)pbVar42 >> 8),cVar5);
  if (SCARRY1((char)pbVar42,'\x04') == cVar5 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  puVar26 = puVar44 + 1;
  out(*puVar44,(short)puVar27);
  uVar34 = *puVar45;
  bVar7 = *(byte *)puVar27;
  bVar4 = (byte)puVar45;
  *(byte *)puVar27 = *(byte *)puVar27 + bVar4;
  iVar16 = (CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + '\x03') & uVar34) + iRam00008c38;
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar27;
  pcVar12 = (char *)(iVar16 + (uint)CARRY1(bVar7,bVar4) + 0x1246f);
  bVar7 = *(byte *)puVar27;
  uVar19 = (undefined3)((uint)puVar45 >> 8);
  puVar21 = (uint *)CONCAT31(uVar19,bVar4 | bVar7);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar12 >> 8);
  puVar18 = (uint *)(CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + *pcVar12) + 0x1fbeef2);
  uVar34 = *puVar18;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  if (CARRY4(uVar34,(uint)puVar18)) {
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    pcVar12 = (char *)CONCAT31(uVar19,bVar4 | bVar7 | bRam00282809);
    cVar5 = (char)((uint)puVar45 >> 8);
    *pbVar10 = *pbVar10 + cVar5;
    *pcVar12 = *pcVar12 - cVar5;
    *(byte *)puVar18 = *(byte *)puVar18 + (char)puVar18;
    iVar16 = (int)pcVar12 - *(int *)pbVar10;
    puVar44 = puVar44 + 2;
    out(*puVar26,(short)puVar27);
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    puVar21 = (uint *)CONCAT22((short)((uint)iVar16 >> 0x10),
                               CONCAT11((byte)((uint)iVar16 >> 8) | bRambf73070b,(char)iVar16));
code_r0x00404d15:
    uVar34 = *puVar18;
    bVar7 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar7;
    puVar26 = puVar44 + 1;
    out(*puVar44,(short)puVar27);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    bVar4 = bVar7 + in_AF * '\x06';
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),
                               bVar4 + (0x90 < (bVar4 & 0xf0) |
                                       CARRY1((byte)uVar34,bVar7) | in_AF * (0xf9 < bVar4)) * '`');
  }
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar4 = (byte)puVar18 | (byte)*puVar46;
  puVar44 = puVar26 + 1;
  uVar24 = SUB42(puVar27,0);
  out(*puVar26,uVar24);
  *(byte *)puVar21 = (byte)*puVar21 - bVar4;
  bVar7 = *(byte *)puVar27;
  bVar36 = (byte)puVar21;
  *(byte *)puVar27 = *(byte *)puVar27 + bVar36;
  iVar16 = CONCAT31((int3)((uint)puVar18 >> 8),bVar4) + *puVar44 + (uint)CARRY1(bVar7,bVar36);
  pbVar43 = pbVar28 + -*puVar27;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar5 = (char)iVar16 + (byte)*puVar44 + (pbVar28 < (byte *)*puVar27);
  puVar45 = (uint *)CONCAT31(uVar19,cVar5);
  bVar7 = (byte)((uint)puVar21 >> 8);
  *(byte *)puVar21 = (byte)*puVar21 - bVar7;
  *puVar45 = (uint)(*puVar45 + (int)puVar45);
  bVar36 = bVar36 | *(byte *)((int)puVar27 + (int)puVar45);
  uVar47 = (undefined2)((uint)puVar21 >> 0x10);
  if ((POPCOUNT(bVar36) & 1U) == 0) {
    *(byte *)puVar45 = (byte)*puVar45 + cVar5;
    pcVar12 = (char *)CONCAT31(uVar19,cVar5 + '\x12');
    *pcVar12 = *pcVar12 + bVar7;
    puVar45 = (uint *)CONCAT31(uVar19,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar21 >> 8),bVar36));
    bVar4 = *(byte *)puVar27;
    *(byte *)puVar27 = *(byte *)puVar27 + bVar36;
    if (!CARRY1(bVar4,bVar36)) {
      pbVar42 = (byte *)((uint)puVar45 | *puVar45);
      out(*puVar44,uVar24);
      *pbVar42 = *pbVar42 + (char)pbVar42;
      bVar4 = *pbVar42;
      piVar17 = (int *)CONCAT22(uVar47,CONCAT11(bVar7 | bVar4,bVar36));
      iVar16 = (int)pbVar42 - *piVar17;
      *(byte *)puVar27 = *(byte *)puVar27 + bVar36;
      puVar45 = puVar26 + 3;
      out(puVar26[2],uVar24);
      uRam12060000 = (undefined1)iVar16;
      *(char *)((int)piVar17 + iVar16) = *(char *)((int)piVar17 + iVar16) - (bVar7 | bVar4);
      *(byte *)puVar27 = *(byte *)puVar27 + bVar36;
      pbVar42 = (byte *)(iVar16 + -0x120edecd);
      *(byte *)puVar45 = (byte)*puVar45 + 1;
      bVar7 = *pbVar42;
      bVar4 = (byte)pbVar42;
      *pbVar42 = *pbVar42 + bVar4;
      pbVar43 = pbVar43 + ((-1 - *(int *)((int)puVar46 + 0x42)) - (uint)CARRY1(bVar7,bVar4));
      *pbVar42 = *pbVar42 + bVar4;
      bVar30 = (byte)pbVar10 | (byte)((uint)pbVar42 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar42;
      bVar7 = *(byte *)puVar27;
      pcVar12 = (char *)(((uint)pbVar42 | 0x11) + 0x511072c);
      puVar44 = puVar26 + 4;
      out(*puVar45,uVar24);
      puVar27 = (uint *)((int)puVar27 + 1);
      *pcVar12 = *pcVar12 + (char)pcVar12;
      bVar4 = (byte)((uint)pcVar12 >> 8);
      pbVar10 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar10 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar10 >> 8) | bVar7,bVar30)
                                                ) >> 8),bVar30 | bVar4);
      uVar19 = (undefined3)((uint)pcVar12 >> 8);
      bVar7 = (char)pcVar12 - *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar19,bVar7);
      *pcVar12 = *pcVar12 + bVar7;
      *(int *)((int)pcVar12 * 2) = (int)(pbVar10 + *(int *)((int)pcVar12 * 2));
      *(byte *)puVar27 = *(byte *)puVar27 + bVar7;
      *pbVar43 = *pbVar43 + bVar4;
      in_AF = 9 < (bVar7 & 0xf) | in_AF;
      uVar34 = CONCAT31(uVar19,bVar7 + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar34;
      pbVar42 = (byte *)CONCAT22((short)(uVar34 >> 0x10),CONCAT11(bVar4 + in_AF,bVar7));
      *(byte *)puVar44 = (byte)*puVar44 + bVar36;
      *pbVar42 = *pbVar42 + bVar7;
      *pbVar42 = *pbVar42 + bVar7;
      bVar48 = CARRY1(bVar7,*pbVar42);
      puVar45 = (uint *)CONCAT31((int3)((uint)pbVar42 >> 8),bVar7 + *pbVar42);
      goto code_r0x00404d9a;
    }
    *pbVar10 = *pbVar10 - (char)puVar27;
  }
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
  bVar48 = false;
  piVar17 = (int *)CONCAT22(uVar47,CONCAT11(bVar7 | *(byte *)puVar27,bVar36));
code_r0x00404d9a:
  do {
    pbVar28 = (byte *)puVar27;
    *puVar45 = (*puVar45 - (int)puVar45) - (uint)bVar48;
    bVar7 = (byte)((uint)piVar17 >> 8);
    uVar47 = (undefined2)((uint)piVar17 >> 0x10);
    bVar4 = (byte)piVar17;
    bVar36 = bVar7 + (byte)iRam00000c00;
    pbVar42 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar7,(byte)iRam00000c00));
    *pbVar28 = *pbVar28 + bVar4;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 - (byte)*puVar44);
    bVar7 = *pbVar42;
    puVar45 = (uint *)(pbVar42 + (uint)CARRY1(bVar36,*pbVar42) + *(int *)pbVar42);
    *pbVar28 = *pbVar28 + bVar4;
    cVar6 = ((bVar36 + bVar7) - *pbVar28) + (byte)*puVar45;
    pcVar12 = (char *)CONCAT22(uVar47,CONCAT11(cVar6,bVar4));
    puVar26 = puVar46 + 1;
    uVar34 = in((short)pbVar28);
    *puVar46 = uVar34;
    cVar5 = (char)puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + cVar5;
    uVar19 = (undefined3)((uint)pbVar28 >> 8);
    bVar36 = (byte)pbVar28 | (byte)*puVar44;
    pcVar9 = (char *)CONCAT31(uVar19,bVar36);
    *pcVar12 = *pcVar12 + '\x01';
    bVar7 = (cVar6 - *pcVar9) + (byte)*puVar45;
    pcVar12 = (char *)CONCAT22(uVar47,CONCAT11(bVar7,bVar4));
    puVar46 = puVar46 + 2;
    uVar34 = in((short)pcVar9);
    *puVar26 = uVar34;
    *(byte *)puVar45 = (byte)*puVar45 + cVar5;
    bVar36 = bVar36 | (byte)*puVar44;
    puVar27 = (uint *)CONCAT31(uVar19,bVar36);
    *pcVar12 = *pcVar12 + '\x01';
    bVar48 = bVar4 < *(byte *)((int)puVar27 + 2);
    cVar6 = bVar4 - *(byte *)((int)puVar27 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  *(byte *)puVar45 = (byte)*puVar45 + cVar5;
  bVar4 = cVar5 + 0x7b;
  pbVar42 = (byte *)CONCAT31((int3)((uint)puVar45 >> 8),bVar4);
  pbVar10[(int)pbVar42] = pbVar10[(int)pbVar42] + bVar4;
  puVar26 = puVar44 + 1;
  uVar24 = SUB42(puVar27,0);
  out(*puVar44,uVar24);
  pbVar33 = pbVar10 + -1;
  *pbVar42 = *pbVar42 + bVar4;
  bVar7 = bVar7 | *(byte *)puVar27;
  piVar17 = (int *)CONCAT22(uVar47,CONCAT11(bVar7,cVar6));
  *pbVar42 = *pbVar42 + bVar4;
  *pbVar33 = *pbVar33 + bVar36;
  *pbVar33 = *pbVar33 ^ bVar4;
  *(byte *)puVar27 = *(byte *)puVar27 + bVar7;
  *pbVar42 = *pbVar42 + bVar4;
  do {
    bVar23 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar46 = (byte)*puVar46 + bVar23;
    bVar7 = *pbVar42;
    bVar4 = (byte)pbVar42;
    *pbVar42 = *pbVar42 + bVar4;
    *(byte **)(pbVar10 + 0x17) =
         (byte *)((int)puVar26 + (uint)CARRY1(bVar7,bVar4) + *(int *)(pbVar10 + 0x17));
    *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
    uVar20 = (undefined3)((uint)pbVar42 >> 8);
    bVar4 = bVar4 | (byte)*puVar26;
    puVar46 = (uint *)((int)puVar46 + *(int *)(pbVar43 + -0x34));
    *(char *)CONCAT31(uVar20,bVar4) = *(char *)CONCAT31(uVar20,bVar4) + bVar4;
    bVar7 = bVar4 + 2;
    cVar5 = (char)((uint)pbVar28 >> 8);
    bVar30 = (byte)piVar17;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      pbVar42 = (byte *)CONCAT31(uVar20,bVar4 + 0x15 + (0xfd < bVar4));
      if (0xec < bVar7 || CARRY1(bVar4 + 0x15,0xfd < bVar4)) {
        *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
      }
code_r0x00404e60:
      pbVar43 = pbVar43 + -*puVar27;
      bVar7 = *pbVar42;
      *pbVar42 = *pbVar42 + (byte)pbVar42;
      pbVar10 = (byte *)((int)puVar26 + (-(uint)CARRY1(bVar7,(byte)pbVar42) - *(int *)pbVar42));
      pbVar42 = pbVar42 + *(int *)pbVar42;
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_DS);
      *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      bVar7 = *pbVar42;
      *pbVar42 = *pbVar42 + (byte)pbVar42;
      *(byte **)(pbVar33 + (int)puVar27) =
           (byte *)((int)puVar27 +
                   (uint)CARRY1(bVar7,(byte)pbVar42) + *(int *)(pbVar33 + (int)puVar27));
      pbVar42 = pbVar42 + 0x73061314;
      *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
      uVar20 = (undefined3)((uint)piVar17 >> 8);
      bVar30 = bVar30 | *(byte *)puVar27;
      pcVar9 = (char *)CONCAT31(uVar20,bVar30);
      *pbVar42 = *pbVar42 + (char)pbVar42;
      cVar5 = (char)pbVar42 + 'o';
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar42 >> 8),cVar5);
      *pcVar12 = *pcVar12 + cVar5;
      out(*(undefined4 *)pbVar10,uVar24);
      bVar7 = *(byte *)puVar27;
      *(byte *)puVar27 = *(byte *)puVar27 + bVar30;
      pcVar12 = pcVar12 + (uint)CARRY1(bVar7,bVar30) + *puVar46;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      *pcVar9 = *pcVar9 + bVar36;
      puVar26 = (uint *)(pbVar10 + 8);
      out(*(undefined4 *)(pbVar10 + 4),uVar24);
      *(byte *)puVar27 = *(byte *)puVar27 + bVar30;
      piVar17 = (int *)((uint)pcVar12 | *puVar46);
      pcVar9[0x390a0000] = pcVar9[0x390a0000] - bVar23;
      pbVar42 = (byte *)&cRam07000000;
      *(byte *)puVar46 = (byte)*puVar46 - bVar23;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar44 = (uint *)CONCAT31(uVar20,bVar30 | *(byte *)((int)piVar17 + (int)pcVar9));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar23;
      cRam07000000 = cRam07000000 + bVar23;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar10 = (byte *)((int)puVar46 + (int)pbVar43 * 2);
      bVar48 = SCARRY1(*pbVar10,(char)piVar17);
      *pbVar10 = *pbVar10 + (char)piVar17;
      bVar7 = *pbVar10;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
    bVar4 = bVar4 + 0x71;
    pbVar42 = (byte *)CONCAT31(uVar20,bVar4);
    *pbVar42 = *pbVar42;
    *(byte *)puVar26 = (byte)*puVar26 + 1;
    *piVar17 = (*piVar17 - (int)pbVar42) - (uint)(0x90 < bVar7);
    uVar34 = *puVar26;
    *(byte *)puVar26 = (byte)*puVar26 + bVar4;
    if (!CARRY1((byte)uVar34,bVar4)) goto code_r0x00404e60;
    *pbVar42 = *pbVar42 + bVar4;
    uVar47 = (undefined2)((uint)piVar17 >> 0x10);
    bVar23 = bVar23 | *pbVar42;
    pbVar42 = pbVar42 + -*(int *)pbVar42;
    *pbVar33 = *pbVar33 + bVar23;
    cVar6 = bVar30 - *(byte *)((int)puVar27 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar47,CONCAT11(bVar23,bVar30)) >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  cVar35 = (char)pbVar42;
  *pbVar42 = *pbVar42 + cVar35;
  uVar20 = (undefined3)((uint)pbVar42 >> 8);
  pcVar12 = (char *)CONCAT31(uVar20,cVar35 + '{');
  out(*puVar26,uVar24);
  *pcVar12 = *pcVar12 + cVar35 + '{';
  bVar4 = cVar35 + 0x7e;
  pbVar28 = (byte *)CONCAT31(uVar20,bVar4);
  puVar26 = puVar44 + 3;
  out(puVar44[2],uVar24);
  pbVar42 = pbVar10 + -2;
  *pbVar28 = *pbVar28 + bVar4;
  bVar7 = *(byte *)puVar27;
  puVar44 = (uint *)CONCAT22(uVar47,CONCAT11(bVar23 | bVar7,cVar6));
  *pbVar28 = *pbVar28 + bVar4;
  *pbVar42 = *pbVar42 + bVar36;
  *pbVar42 = *pbVar42 ^ bVar4;
  *(byte *)puVar27 = *(byte *)puVar27 + (bVar23 | bVar7);
  *pbVar28 = *pbVar28 + bVar4;
  *pbVar28 = *pbVar28 + cVar5;
  bVar7 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar4;
  *(byte **)(pbVar10 + 0x18) =
       (byte *)((int)puVar26 + (uint)CARRY1(bVar7,bVar4) + *(int *)(pbVar10 + 0x18));
  *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
  bVar4 = bVar4 | (byte)*puVar26;
  puVar46 = (uint *)((int)puVar46 + *(int *)(pbVar43 + -0x33));
  *(char *)CONCAT31(uVar20,bVar4) = *(char *)CONCAT31(uVar20,bVar4) + bVar4;
  bVar48 = SCARRY1(bVar4,'\x02');
  bVar7 = bVar4 + 2;
  piVar17 = (int *)CONCAT31(uVar20,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    return CONCAT31(uVar20,bVar4 + 0x71);
  }
code_r0x00404ebf:
  bVar4 = (byte)piVar17;
  uVar20 = (undefined3)((uint)piVar17 >> 8);
  if (bVar7 != 0 && bVar48 == (char)bVar7 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    puVar26[(int)puVar46 * 2] =
         (uint)((int)puVar27 + (uint)(0xd2 < bVar4) + puVar26[(int)puVar46 * 2]);
    return CONCAT31(uVar20,bVar4 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar7 = *pbVar42;
  *puVar26 = (uint)(*puVar26 + (int)piVar17);
  bVar30 = (byte)((uint)puVar44 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar30;
  *(byte *)piVar17 = (char)*piVar17 + bVar4;
  pbVar10 = (byte *)(CONCAT31(uVar19,bVar36 | bVar7) - *(int *)pbVar42);
  puVar21 = (uint *)CONCAT31(uVar20,bVar4 + 6);
  *(uint *)(pbVar42 + (int)puVar26 * 2) =
       (int)puVar21 + (uint)(0xf9 < bVar4) + *(int *)(pbVar42 + (int)puVar26 * 2);
  *(byte *)puVar44 = (byte)*puVar44 ^ bVar4 + 6;
  bVar4 = (byte)puVar44;
  *pbVar10 = *pbVar10 + bVar4;
  puVar45 = puVar26 + 1;
  uVar47 = SUB42(pbVar10,0);
  out(*puVar26,uVar47);
  *puVar44 = *puVar44 ^ (uint)puVar21;
  *pbVar10 = *pbVar10 + bVar4;
  puVar27 = (uint *)(pbVar42 + -*(int *)pbVar42);
  *(uint *)((int)puVar46 + 0x31) = *(uint *)((int)puVar46 + 0x31) | (uint)pbVar43;
  *puVar21 = *puVar21 + (int)puVar21;
  puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar30 | (byte)*puVar27,bVar4))
  ;
  *(byte **)(pbVar10 + 0x6e) = (byte *)(*(int *)(pbVar10 + 0x6e) + (int)puVar45);
  piVar17 = (int *)((uint)puVar21 | *puVar21);
  bVar36 = (byte)puVar27;
  *(byte *)puVar46 = (byte)*puVar46 - bVar36;
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  if (CARRY1(bVar7,bVar4)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar7 = pbVar10[0x11];
    uVar24 = (undefined2)((uint)puVar27 >> 0x10);
    out(*puVar45,uVar47);
    puVar44 = (uint *)((int)puVar44 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar25 = (byte)((uint)puVar27 >> 8) | bVar7 | *pbVar10;
    pcVar12 = (char *)((int)piVar17 + -0x21000001);
    bVar7 = (byte)pcVar12 | 0x11;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    cVar5 = bVar7 - 7;
    pcVar9 = (char *)CONCAT31(uVar19,cVar5);
    *puVar46 = (uint)(pcVar9 + (uint)(bVar7 < 7) + *puVar46);
    puVar45 = puVar26 + 3;
    out(puVar26[2],uVar47);
    pbVar10 = pbVar10 + 1;
    *pcVar9 = *pcVar9 + cVar5;
    bVar30 = (byte)((uint)pcVar12 >> 8);
    bVar23 = bVar36 | bVar30;
    bVar4 = cVar5 - *pcVar9;
    bVar7 = *(byte *)puVar44;
    *(byte *)puVar44 = *(byte *)puVar44 + bVar4;
    *(char *)CONCAT31(uVar19,bVar4) = *(char *)CONCAT31(uVar19,bVar4) + bVar4 + CARRY1(bVar7,bVar4);
    *pbVar10 = *pbVar10 + bVar4;
    *(byte *)puVar45 = (byte)*puVar45 + bVar23;
    bVar7 = (byte)((uint)pbVar10 >> 8);
    *(byte *)puVar44 = *(byte *)puVar44 + bVar4 + CARRY1((byte)pbVar10,bVar7);
    piVar17 = (int *)CONCAT31(uVar19,bVar4);
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11(bVar7 + bVar30,(byte)pbVar10 + bVar7));
    puVar27 = (uint *)CONCAT22(uVar24,CONCAT11(bVar25 + *(char *)(CONCAT31((int3)(CONCAT22(uVar24,
                                                  CONCAT11(bVar25,bVar36)) >> 8),bVar23) + 0x76),
                                               bVar23));
    puStack_68._0_2_ = puStack_74._0_2_;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar12 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar44);
    cVar35 = (char)puVar44;
    *pbVar10 = *pbVar10 + cVar35;
    uVar47 = (undefined2)((uint)puVar27 >> 0x10);
    cVar32 = (char)puVar27;
    cVar38 = (char)((uint)puVar27 >> 8) + *(byte *)((int)puVar27 + 0x75);
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar5 = (char)pcVar12 + 'o';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5);
    *pcVar12 = *pcVar12 + cVar5;
    cVar37 = (char)((uint)puVar44 >> 8);
    *pbVar43 = *pbVar43 - cVar37;
    pbVar10[1] = pbVar10[1] + cVar35;
    pcVar12 = pcVar12 + -0x757b021b;
    cVar5 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar5;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    cVar6 = cVar5 + 'o';
    pcVar12 = (char *)CONCAT31(uVar19,cVar6);
    pbVar28 = pbVar10 + 2;
    *pcVar12 = *pcVar12 + cVar6;
    iVar16 = CONCAT22(uVar47,CONCAT11(cVar38 + *(char *)(CONCAT22(uVar47,CONCAT11(cVar38,cVar32)) +
                                                        0x76),cVar32));
    *pcVar12 = *pcVar12 + cVar6;
    pcVar12 = (char *)CONCAT31(uVar19,cVar5 + -0x22);
    puVar26 = (uint *)((int)puVar46 + 1);
    *(byte *)puVar46 = (byte)*puVar45;
    *pcVar12 = *pcVar12 + cVar5 + -0x22;
    *(byte *)((int)puVar44 + (int)pcVar12) =
         *(byte *)((int)puVar44 + (int)pcVar12) - (char)((uint)pbVar28 >> 8);
    *pbVar28 = *pbVar28 + cVar35;
    bVar4 = cVar37 - pbVar10[4];
    pbVar42 = (byte *)((int)puVar45 + 5);
    out(*(undefined4 *)((int)puVar45 + 1),(short)pbVar28);
    puVar46 = (uint *)((uint)(pcVar12 + *(int *)(pcVar12 + iVar16)) ^ 0x280a0001);
    *(byte *)puVar46 = (byte)*puVar46 << 1 | (char)(byte)*puVar46 < '\0';
    *pbVar42 = *pbVar42 + (char)puVar46;
    pbVar42 = pbVar42 + *(int *)(pbVar10 + -0x5c);
    pbVar10 = (byte *)((uint)puVar46 | *puVar46);
    *pbVar42 = *pbVar42 + (char)pbVar10;
    puVar27 = (uint *)CONCAT31((int3)((uint)iVar16 >> 8),cVar32 - (char)pbVar28);
    bVar7 = *pbVar10;
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar4 + *pbVar10,cVar35));
    iVar16 = *(int *)pbVar10;
    *pbVar28 = *pbVar28 + cVar35;
    cVar5 = (char)(pbVar10 + (uint)CARRY1(bVar4,bVar7) + iVar16) + 'r';
    puVar46 = (uint *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar4,bVar7) + iVar16) >> 8),
                               cVar5);
    pbVar10 = (byte *)CONCAT22((short)((uint)pbVar28 >> 0x10),CONCAT11(10,(char)pbVar28));
    *(char *)(puVar46 + 10) = (char)puVar46[10] + '\n';
    *pbVar42 = *pbVar42 + cVar5;
    puVar45 = (uint *)(pbVar42 + *(int *)(pbVar10 + -0x5e));
    uVar34 = *puVar46;
    cVar5 = (char)((uint)puVar46 | uVar34);
    *(byte *)puVar45 = (byte)*puVar45 + cVar5;
    uVar19 = (undefined3)(((uint)puVar46 | uVar34) >> 8);
    cVar6 = cVar5 + (byte)*puVar27;
    puVar46 = (uint *)CONCAT31(uVar19,cVar6);
    if (SCARRY1(cVar5,(byte)*puVar27) == cVar6 < '\0') goto code_r0x00405090;
    *(byte *)puVar46 = (byte)*puVar46 + cVar6;
    piVar17 = (int *)CONCAT31(uVar19,cVar6 + '\x02');
    puVar46 = puVar26;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar10) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  cVar5 = (char)piVar17 + '}';
  pbVar42 = (byte *)CONCAT31(uVar19,cVar5);
  pbVar10[(int)pbVar42] = pbVar10[(int)pbVar42] + cVar5;
  pbVar10[0x280a0000] = pbVar10[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar7 = (byte)puVar44 & 7;
  *pbVar42 = *pbVar42 << bVar7 | *pbVar42 >> 8 - bVar7;
  *(byte *)puVar45 = (byte)*puVar45 + cVar5;
  cVar35 = (char)puVar27 - (byte)*puVar45;
  uVar47 = (undefined2)((uint)puVar27 >> 0x10);
  cVar37 = (char)((uint)puVar27 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar27 >> 8),cVar35) + 0x7c);
  pcVar12 = (char *)CONCAT22(uVar47,CONCAT11(cVar37,cVar35));
  *pbVar42 = *pbVar42 + cVar5;
  bVar4 = (char)piVar17 + 0xa7U & *pbVar10;
  puVar26 = (uint *)((int)puVar46 + *(int *)(pbVar43 + 0x7c));
  *(char *)CONCAT31(uVar19,bVar4) = *(char *)CONCAT31(uVar19,bVar4) + bVar4;
  bVar4 = bVar4 + 0x2a;
  pbVar42 = (byte *)CONCAT31(uVar19,bVar4);
  *pbVar42 = *pbVar42 + bVar4;
  *pcVar12 = *pcVar12 + cVar35;
  *pbVar10 = *pbVar10 ^ bVar4;
  *pcVar12 = *pcVar12 + bVar4;
  bVar7 = *pbVar42;
  *pbVar42 = *pbVar42 + bVar4;
  cVar5 = (bVar4 - *pbVar42) - CARRY1(bVar7,bVar4);
  *(byte *)puVar44 = (byte)*puVar44 + (byte)pbVar10;
  cVar37 = cVar37 + pcVar12[0x7b];
  *(char *)CONCAT31(uVar19,cVar5) = *(char *)CONCAT31(uVar19,cVar5) + cVar5;
  pcVar12 = (char *)CONCAT31(uVar19,cVar5 + 'o');
  *pcVar12 = *pcVar12 + cVar5 + 'o';
  pcVar12 = pcVar12 + 0x2ed7fde6;
  cVar6 = (char)pcVar12;
  *pcVar12 = *pcVar12 + cVar6;
  cVar5 = *(char *)(CONCAT22(uVar47,CONCAT11(cVar37,cVar35)) + 0x7b);
  *pcVar12 = *pcVar12 + cVar6;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar12 >> 8),cVar6 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar20 = (undefined3)((uint)pbVar10 >> 8);
  bVar4 = (byte)pbVar10 | (byte)*puVar45;
  pbVar28 = (byte *)CONCAT31(uVar20,bVar4);
  uVar34 = CONCAT22(uVar47,CONCAT11(cVar37 + cVar5,cVar35)) | (uint)puVar45;
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  bVar7 = (byte)piVar17 | *pbVar28;
  pbVar42 = (byte *)CONCAT31(uVar19,bVar7);
  cVar5 = (byte)puVar44 - bVar4;
  puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),cVar5);
  *pbVar42 = *pbVar42 + bVar7;
  puVar46 = puVar45 + 1;
  out(*puVar45,(short)pbVar28);
  *pbVar42 = bVar7;
  *pbVar28 = *pbVar28 + cVar5;
  puVar45 = puVar45 + 2;
  out(*puVar46,(short)pbVar28);
  *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
  puVar27 = (uint *)(CONCAT31((int3)(uVar34 >> 8),(char)uVar34 - (char)((uint)pbVar10 >> 8)) |
                    (uint)puVar45);
  pbVar10 = (byte *)CONCAT31(uVar20,(bVar4 | (byte)*puVar45) + (byte)*puVar26);
  cVar5 = bVar7 - (byte)*puVar26;
  puVar46 = (uint *)CONCAT31(uVar19,cVar5 - *(char *)CONCAT31(uVar19,cVar5));
code_r0x00405090:
  *puVar46 = (uint)(pbVar10 + *puVar46);
  cVar5 = (char)puVar46;
  *(byte *)puVar46 = (byte)*puVar46 + cVar5;
  *(byte *)puVar46 = (byte)*puVar46 + cVar5;
  *(byte *)puVar46 = (byte)*puVar46 + cVar5;
  *puVar44 = *puVar44 - (int)pbVar43;
  uVar34 = *puVar45;
  bVar7 = (byte)pbVar10;
  *(byte *)puVar45 = (byte)*puVar45 + bVar7;
  *(byte *)puVar46 = (byte)*puVar46 + cVar5 + CARRY1((byte)uVar34,bVar7);
  *(byte *)puVar44 = (byte)*puVar44 + cVar5;
  uVar34 = *puVar27;
  *(byte *)puVar27 = (byte)*puVar27 + 0x72;
  *(byte *)puVar27 = (byte)*puVar27;
  cVar5 = (char)((uint)pbVar10 >> 8);
  if (SCARRY1((byte)uVar34,'r')) {
    puVar45 = (uint *)((int)puVar45 + *(int *)(pbVar10 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar45 = (byte)*puVar45 + (char)puVar46;
      uVar19 = (undefined3)((uint)puVar46 >> 8);
      cVar6 = (char)puVar46 + (byte)*puVar27;
      pcVar12 = (char *)CONCAT31(uVar19,cVar6);
      puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),
                                 CONCAT11((char)((uint)puVar27 >> 8) +
                                          *(byte *)((int)puVar27 + 0x7b),(char)puVar27));
      *pcVar12 = *pcVar12 + cVar6;
      in_AF = 9 < (cVar6 + 0x6fU & 0xf) | in_AF;
      uVar34 = CONCAT31(uVar19,cVar6 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar36 = (byte)uVar34;
      piVar17 = (int *)CONCAT22((short)(uVar34 >> 0x10),
                                CONCAT11((char)((uint)puVar46 >> 8) + in_AF,bVar36));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar36 = bVar36 | *(byte *)(piVar17 + 0x354a);
      bVar36 = bVar36 - *(char *)CONCAT31(uVar19,bVar36);
      pbVar42 = (byte *)CONCAT31(uVar19,bVar36);
      bVar4 = *pbVar42;
      *pbVar42 = *pbVar42 + bVar36;
      puVar45 = (uint *)((int)puVar45 + (-(uint)CARRY1(bVar4,bVar36) - *(int *)pbVar42));
      puVar46 = (uint *)(pbVar42 + 0xfc00);
      *pbVar10 = *pbVar10 + cVar5;
      uVar34 = *puVar46;
      bVar4 = (byte)puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + bVar4;
      uVar14 = (uint)CARRY1((byte)uVar34,bVar4);
      uVar34 = *puVar27;
      uVar1 = *puVar27;
      *puVar27 = (uint)((byte *)(uVar1 + (int)puVar46) + uVar14);
      if (!CARRY4(uVar34,(uint)puVar46) && !CARRY4(uVar1 + (int)puVar46,uVar14)) break;
      *(byte *)puVar46 = (byte)*puVar46 + bVar4;
    }
  }
  uVar34 = (uint)puVar46 | *puVar46;
  uVar47 = SUB42(pbVar10,0);
  *(byte *)puVar45 = (byte)*puVar45 + (char)uVar34;
  piVar17 = (int *)(uVar34 + 0xc1872);
  if (SCARRY4(uVar34,0xc1872)) {
    cVar6 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *pbVar10 = *pbVar10 + cVar6;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *(byte *)puVar27 = (byte)*puVar27 + (char)puVar44;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar7;
    puVar46 = puVar45;
    goto code_r0x00405117;
  }
  do {
    uVar34 = *puVar45;
    bVar7 = (byte)piVar17;
    *(byte *)puVar45 = (byte)*puVar45 + bVar7;
    if (CARRY1((byte)uVar34,bVar7)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar19 = (undefined3)((uint)puVar44 >> 8);
      bVar4 = (byte)puVar44 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar44 = (uint *)CONCAT31(uVar19,bVar4 | *(byte *)CONCAT31(uVar19,bVar4));
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar7 = bVar7 | *pbVar10;
      pcVar12 = (char *)CONCAT31(uVar19,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar46 = puVar45 + 1;
        out(*puVar45,uVar47);
        uVar34 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar7);
        *(byte *)puVar46 = (byte)*puVar46 + bVar7;
        pcVar12 = (char *)(uVar34 | 8);
        cVar6 = (char)((uint)puVar27 >> 8) + *(byte *)((int)puVar27 + 0x7a);
        puVar21 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),CONCAT11(cVar6,(char)puVar27));
        *pcVar12 = *pcVar12 + (char)pcVar12;
        cVar5 = (char)pcVar12 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar34 >> 8),cVar5);
        *(char *)piVar17 = (char)*piVar17 + cVar5;
        *(byte *)puVar44 = (byte)*puVar44 + 1;
        puVar45 = puVar45 + 2;
        out(*puVar46,uVar47);
        pbVar10 = (byte *)((uint)pbVar10 ^ uRam08122c04);
        iVar16 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar16 * 2) = *(char *)(iVar16 * 2) - cVar6;
        do {
          bVar7 = (byte)iVar16;
          *(byte *)puVar45 = (byte)*puVar45 + bVar7;
          bVar48 = CARRY1(bVar7,(byte)*puVar21);
          uVar19 = (undefined3)((uint)iVar16 >> 8);
          cVar5 = bVar7 + (byte)*puVar21;
          pbVar42 = (byte *)CONCAT31(uVar19,cVar5);
          uVar47 = in_DS;
          uVar24 = uStack_b4;
          if (SCARRY1(bVar7,(byte)*puVar21) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar42 = *pbVar42 + cVar5;
          uVar34 = CONCAT31(uVar19,cVar5 + '\'') + 0x1ebd9f3;
          uStack_b8 = (undefined1)puStack_68._0_2_;
          uStack_b7 = (undefined1)((ushort)puStack_68._0_2_ >> 8);
          piVar17 = (int *)(uVar34 ^ 0x73060000);
          puVar44 = (uint *)((int)puVar44 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                     CONCAT11((byte)((uint)puVar21 >> 8) | pbVar43[0x7e],
                                              (char)puVar21));
          cVar5 = (char)uVar34;
          *(char *)piVar17 = (char)*piVar17 + cVar5;
          uVar34 = CONCAT31((int3)((uint)piVar17 >> 8),cVar5 + '\x02');
          bVar48 = 0xd9f2d2da < uVar34;
          iVar16 = uVar34 + 0x260d2d25;
          pbVar28 = pbVar43;
          do {
            uVar19 = (undefined3)((uint)iVar16 >> 8);
            bVar4 = (char)iVar16 + -2 + bVar48;
            pbVar43 = (byte *)CONCAT31(uVar19,bVar4);
            bVar7 = *pbVar43;
            *pbVar43 = *pbVar43 + bVar4;
            bVar36 = (byte)puVar21;
            uStack_b4 = puStack_68._0_2_;
            if (CARRY1(bVar7,bVar4)) {
              *pbVar43 = *pbVar43 + bVar4;
              puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                         CONCAT11((byte)((uint)puVar21 >> 8) | pbVar28[0x7f],bVar36)
                                        );
              *pbVar43 = *pbVar43 + bVar4;
              pbVar42 = (byte *)CONCAT31(uVar19,bVar4 + 0x2a);
              *pbVar42 = *pbVar42 + bVar4 + 0x2a;
              *(byte *)puVar21 = (byte)*puVar21 + (char)pbVar10;
              uVar47 = in_DS;
              while( true ) {
                in_DS = uVar47;
                bVar4 = (byte)pbVar42;
                *pbVar10 = *pbVar10 ^ bVar4;
                *pbVar10 = *pbVar10 + (char)puVar21;
                *pbVar42 = *pbVar42 + bVar4;
                *(byte *)puVar21 = (byte)*puVar21 + (char)((uint)pbVar10 >> 8);
                bVar7 = *pbVar42;
                *pbVar42 = *pbVar42 + bVar4;
                uVar1 = *puVar21;
                uVar34 = *puVar21;
                *puVar21 = (uint)(pbVar42 + uVar34 + CARRY1(bVar7,bVar4));
                uVar19 = (undefined3)((uint)pbVar42 >> 8);
                if (CARRY4(uVar1,(uint)pbVar42) ||
                    CARRY4((uint)(pbVar42 + uVar34),(uint)CARRY1(bVar7,bVar4))) break;
                *(byte *)puVar45 = (byte)*puVar45 + bVar4;
                pcVar12 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                           CONCAT11((char)((uint)puVar44 >> 8) + *pbVar42,
                                                    (char)puVar44));
                *(byte *)puVar45 = (byte)*puVar45 + bVar4;
                piVar17 = (int *)CONCAT31(uVar19,bVar4 | (byte)*puVar21);
                puVar44 = puVar45;
                while( true ) {
                  puVar45 = puVar44 + 1;
                  out(*puVar44,(short)pbVar10);
                  pbVar10 = pbVar10 + 1;
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  bVar36 = (byte)((uint)pcVar12 >> 8) | *pbVar10;
                  uVar19 = (undefined3)((uint)piVar17 >> 8);
                  bVar4 = (byte)piVar17 ^ *pbVar10;
                  pcVar9 = (char *)CONCAT31(uVar19,bVar4);
                  cRam282b0000 = cRam282b0000 - bVar36;
                  *pcVar9 = *pcVar9 + bVar4;
                  pbVar43 = pbVar28 + -*(int *)pbVar10;
                  uStack_b8 = (undefined1)in_DS;
                  uStack_b7 = (undefined1)((ushort)in_DS >> 8);
                  bVar7 = *(byte *)((int)puVar26 + 0x17);
                  *pcVar9 = *pcVar9 + bVar4;
                  puVar44 = (uint *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                             CONCAT11(bVar36 + bVar7 | *pbVar10,(char)pcVar12));
                  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
                  *(byte *)((int)pcVar9 * 2) = *(byte *)((int)pcVar9 * 2) ^ bVar4;
                  in_AF = 9 < (bVar4 & 0xf) | in_AF;
                  bVar4 = bVar4 + in_AF * -6;
                  pbVar42 = (byte *)CONCAT31(uVar19,bVar4 + (0x9f < bVar4 | in_AF * (bVar4 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
                  *(char *)((int)pbVar42 * 2) =
                       *(char *)((int)pbVar42 * 2) + (char)((uint)pbVar10 >> 8);
                  bVar48 = CARRY1((byte)*puVar44,(byte)pbVar10);
                  *(byte *)puVar44 = (byte)*puVar44 + (byte)pbVar10;
                  uVar47 = in_DS;
                  uVar24 = puStack_68._0_2_;
GenerateStatusText:
                  in_DS = uVar24;
                  pbVar28 = pbVar43;
                  uStack_b4 = in_DS;
                  if (!bVar48) break;
                  *pbVar42 = *pbVar42 + (char)pbVar42;
                  iVar16 = CONCAT31((int3)((uint)puVar44 >> 8),(byte)puVar44 | *pbVar10);
                  uVar47 = (undefined2)((uint)puVar21 >> 0x10);
                  cVar35 = (char)((uint)puVar21 >> 8) + *(byte *)((int)puVar21 + 0x7d);
                  *pbVar42 = *pbVar42 + (char)pbVar42;
                  *(byte *)puVar26 = (byte)*puVar26 - (char)((uint)puVar44 >> 8);
                  iVar16 = iVar16 - *(int *)(&uRam0b0a0000 + iVar16);
                  cVar5 = *(char *)(CONCAT22(uVar47,CONCAT11(cVar35,(char)puVar21)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar45,(short)pbVar10);
                  pbVar10 = (byte *)CONCAT22(uStack_b6,CONCAT11(uStack_b7,uStack_b8));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar44 = puVar45 + 2;
                  out(puVar45[1],CONCAT11(uStack_b7,uStack_b8));
                  pbVar28 = pbVar43 + 1;
                  cVar6 = (char)iVar16;
                  pcVar12 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                             CONCAT11((byte)((uint)iVar16 >> 8) |
                                                      *(byte *)((int)puVar26 + 0x46),cVar6));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_68._0_2_ = CONCAT11(uStack_b7,uStack_b8);
                  uVar19 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar44,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar19,0x5f);
                  puVar26 = (uint *)((int)puVar26 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar21 = (uint *)CONCAT22(uVar47,CONCAT11(cVar35 + cVar5 | (byte)puVar45[-0x1e],
                                                             (char)puVar21));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar46 = (uint *)CONCAT31(uVar19,0x8c);
                  puVar44[(int)puVar26 * 2] = (uint)(pbVar10 + puVar44[(int)puVar26 * 2]);
                  uVar34 = *puVar44;
                  *(byte *)puVar44 = (byte)*puVar44 + 0x8c;
                  if ((byte)uVar34 < 0x74) {
                    *pbVar10 = *pbVar10 + cVar6;
                    *(byte *)puVar21 = (byte)*puVar21 >> 1;
                    *(char *)puVar46 = (char)*puVar46 + -0x74;
                    *puVar46 = (uint)(pbVar28 + *puVar46);
                    *puVar46 = *puVar46 << 1 | (uint)((int)*puVar46 < 0);
                    *pbVar10 = *pbVar10 + cVar6;
                    pbVar43[2] = pbVar43[2] - cVar6;
                    *pbVar10 = *pbVar10 + cVar6;
                    pbVar43 = (byte *)CONCAT31(uVar19,0x83);
                    puVar46 = puVar21;
                    goto code_r0x00405312;
                  }
                  *puVar46 = (uint)(*puVar46 + (int)puVar46);
                  piVar17 = (int *)(CONCAT31(uVar19,(byte)puVar46[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar46[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar17 = (int *)((int)piVar17 + *puVar44);
                }
              }
              *pbVar10 = *pbVar10 + bVar4;
              *(byte *)puVar21 = (byte)*puVar21 - (char)pbVar10;
              *pbVar42 = *pbVar42 + bVar4;
              pbVar43 = (byte *)CONCAT31(uVar19,bVar4 | (byte)*puVar21);
            }
            else {
              cVar5 = (char)puVar44;
              *pbVar10 = *pbVar10 + cVar5;
              *(byte **)pbVar43 = pbVar10 + *(int *)pbVar43;
              *pbVar43 = *pbVar43 + bVar4;
              bVar4 = bVar4 + *pbVar43;
              pbVar43 = (byte *)CONCAT31(uVar19,bVar4);
              if (-1 < (char)bVar4) {
                *(byte *)puVar21 = (byte)*puVar21 + bVar36;
                out(*puVar45,(short)pbVar10);
                pbVar10 = pbVar10 + 1;
                *pbVar43 = *pbVar43 + bVar4;
                puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),
                                           bVar36 | (byte)((uint)iVar16 >> 8));
                cVar6 = bVar4 - (byte)*puVar44;
                pcVar12 = (char *)CONCAT31(uVar19,cVar6);
                *pcVar12 = *pcVar12 + cVar6 + (bVar4 < (byte)*puVar44);
                *pbVar10 = *pbVar10 + cVar6;
                pcVar12 = (char *)((int)pcVar12 * 2 + 0x79);
                *pcVar12 = *pcVar12 + (char)((uint)pbVar10 >> 8);
                pbVar43 = (byte *)in((short)pbVar10);
                puVar45 = puVar45 + 1;
              }
              *(byte *)puVar45 = (byte)*puVar45 + cVar5;
              *pbVar43 = *pbVar43 + (char)pbVar43;
              *pbVar43 = *pbVar43 + (char)pbVar43;
              uStack_b8 = (undefined1)in_DS;
              uStack_b7 = (undefined1)((ushort)in_DS >> 8);
              bVar7 = *pbVar43;
              bVar36 = (byte)((uint)puVar44 >> 8);
              bVar30 = bVar36 + *pbVar43;
              iVar16 = *(int *)pbVar43;
              *pbVar10 = *pbVar10 + cVar5;
              bVar4 = (char)(pbVar43 + (uint)CARRY1(bVar36,bVar7) + iVar16) - (byte)*puVar21;
              pbVar43 = (byte *)CONCAT31((int3)((uint)(pbVar43 + (uint)CARRY1(bVar36,bVar7) + iVar16
                                                      ) >> 8),bVar4);
              *(byte *)puVar21 = (byte)*puVar21 ^ bVar4;
              *pbVar28 = *pbVar28 + (char)puVar21;
              *pbVar43 = *pbVar43 + bVar4;
              *pbVar43 = *pbVar43 + bVar4;
              *pbVar43 = *pbVar43 + bVar4;
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11(bVar30 + *pbVar43,cVar5));
              pbVar43 = pbVar43 + (uint)CARRY1(bVar30,*pbVar43) + *(int *)pbVar43;
              *pbVar10 = *pbVar10 + cVar5;
              puVar45 = (uint *)((int)puVar45 + *(int *)(pbVar10 + 0x3e));
            }
            *(byte *)puVar45 = (byte)*puVar45 + (char)pbVar43;
            cVar5 = (char)pbVar43 + 'r';
            puVar45 = (uint *)((int)puVar45 + -1);
            uVar34 = CONCAT31((int3)((uint)pbVar43 >> 8),cVar5);
            *(byte *)puVar45 = *(byte *)puVar45 + cVar5;
            bVar48 = 0xfff38f8d < uVar34;
            iVar16 = uVar34 + 0xc7072;
            pbVar43 = pbVar28;
          } while (SCARRY4(uVar34,0xc7072));
        } while( true );
      }
      *pcVar12 = *pcVar12 + bVar7;
      bVar7 = bVar7 + 0x6f;
      pbVar42 = (byte *)CONCAT31(uVar19,bVar7);
      bVar4 = *pbVar42;
      *pbVar42 = *pbVar42 + bVar7;
      uVar19 = (undefined3)
               ((uint)(pbVar42 + (uint)CARRY1(bVar4,bVar7) + *(int *)((int)puVar44 + (int)pbVar10))
               >> 8);
      cVar6 = (char)(pbVar42 + (uint)CARRY1(bVar4,bVar7) + *(int *)((int)puVar44 + (int)pbVar10)) +
              'E';
      pcVar12 = (char *)CONCAT31(uVar19,cVar6);
      *pcVar12 = *pcVar12 + cVar6;
      cVar6 = cVar6 + *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar19,cVar6);
      *pcVar12 = *pcVar12 + cVar6;
      puVar46 = (uint *)CONCAT31(uVar19,cVar6 + *pcVar12);
      *(char *)puVar46 = (char)*puVar46 + cVar6 + *pcVar12;
      pbVar42 = (byte *)((uint)puVar46 | *puVar46);
      bVar7 = *pbVar42;
      bVar4 = (byte)pbVar42;
      *pbVar42 = *pbVar42 + bVar4;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar42 >> 8),bVar4 + CARRY1(bVar7,bVar4));
      puVar46 = puVar45;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar27 = (uint *)((int)puVar27 - *puVar27);
      puVar45 = puVar46 + 1;
      out(*puVar46,uVar47);
    }
    *pbVar10 = *pbVar10 + (char)puVar44;
    bVar48 = puVar27 < (uint *)*piVar17;
    puVar27 = (uint *)((int)puVar27 - *piVar17);
    bVar7 = (byte)((uint)puVar44 >> 8);
    *(byte *)((int)puVar26 + 0x39) = (*(byte *)((int)puVar26 + 0x39) - bVar7) - bVar48;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar34 = *puVar27;
    *(int *)((int)puVar26 + 0x39) = *(int *)((int)puVar26 + 0x39) - (int)pbVar43;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11(bVar7 | (byte)uVar34 | (byte)*puVar27,(char)puVar44));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar7 = (char)piVar17 + 0x28;
  pbVar43 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar7);
  *pbVar43 = *pbVar43 ^ bVar7;
  *(byte *)puVar21 = (byte)*puVar21 + (char)((uint)pcVar12 >> 8);
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + (byte)pcVar12;
  piVar17 = (int *)(((uint)pbVar43 | 0x1496f09) + *puVar26 + (uint)CARRY1(bVar7,(byte)pcVar12));
  puVar45 = puVar44 + 1;
  out(*puVar44,(short)pbVar10);
  pbVar42 = pbVar10 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar42 >> 8),(byte)pbVar42 | (byte)*puVar21);
  cVar5 = (char)piVar17 + '\x13';
  pbVar43 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar5);
  puVar46 = puVar21;
  puVar44 = puVar45;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar10 = *pbVar10 - (char)((uint)pbVar42 >> 8);
    *pbVar43 = *pbVar43 + cVar5;
code_r0x00405396:
    bVar7 = *pbVar43;
    bVar4 = (byte)pbVar43;
    *pbVar43 = *pbVar43 + bVar4;
    *puVar45 = (uint)(pbVar43 + (uint)CARRY1(bVar7,bVar4) + *puVar45);
    out(*puVar45,(short)pbVar10);
    *(byte **)pbVar43 = pbVar43 + *(int *)pbVar43;
    *(byte **)pbVar43 = pbVar43 + *(int *)pbVar43;
    pcVar12 = (char *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                               CONCAT11((byte)((uint)pbVar43 >> 8) | (byte)puVar45[1],bVar4));
    *(char **)((int)puVar26 + -1) = pcVar12 + *(int *)((int)puVar26 + -1);
    out(puVar45[1],(short)pbVar10);
    *pcVar12 = *pcVar12 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar43 = *pbVar43 + (char)pbVar43;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar43 >> 8),(char)pbVar43 + 'o');
  puVar21 = (uint *)((int)puVar46 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar19 = (undefined3)((uint)pbVar10 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar36 = (byte)pbVar10 | *(byte *)puVar21 | *(byte *)puVar21;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*puVar44,(short)CONCAT31(uVar19,bVar36));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar36 = bVar36 | (byte)piVar17;
  iVar29 = CONCAT31(uVar19,bVar36);
  pbVar43 = (byte *)((int)piVar17 - *piVar17);
  cVar5 = (char)pbVar43;
  *pcVar12 = *pcVar12 + cVar5;
  cVar6 = (char)pcVar12 - bVar36;
  *pbVar43 = *pbVar43 + cVar5;
  uVar47 = (undefined2)((uint)pcVar12 >> 0x10);
  bVar4 = (byte)((uint)pcVar12 >> 8) | *pbVar43;
  pbVar28 = pbVar28 + -1;
  *(byte **)pbVar43 = pbVar43 + *(int *)pbVar43;
  bVar7 = *(byte *)(CONCAT22(uVar47,CONCAT11(bVar4,cVar6)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar43;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar28;
  *pbVar43 = *pbVar43 + cVar5;
  bVar7 = bVar4 | bVar7 | *(byte *)puVar21;
  iVar22 = CONCAT22(uVar47,CONCAT11(bVar7,cVar6));
  pbVar42 = (byte *)((uint)(puVar44 + 1) ^ *(uint *)(iVar29 + -0x43));
  iVar16 = *(int *)pbVar43;
  *(byte **)pbVar43 = pbVar43 + *(int *)pbVar43;
  if (SCARRY4(iVar16,(int)pbVar43)) {
    *pbVar43 = *pbVar43 + cVar5;
  }
  pbVar10 = pbVar43 + 0x5674;
  puVar26 = (uint *)((int)puVar26 +
                    (-(uint)((byte *)0xffffa98b < pbVar43) - *(int *)(pbVar42 + -0x7f)));
  bVar4 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  uVar20 = (undefined3)((uint)pbVar10 >> 8);
  bVar30 = bVar4 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar20,bVar30);
  *(uint *)(pbVar42 + (int)puVar26 * 8) =
       *(int *)(pbVar42 + (int)puVar26 * 8) + iVar29 + (uint)(0xd2 < bVar4);
  bVar4 = *pbVar42;
  *pbVar42 = *pbVar42 + bVar30;
  if (!CARRY1(bVar4,bVar30)) {
    do {
      pbVar10 = (byte *)(iVar29 + 1);
      bVar4 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar4;
      bVar36 = (byte)((uint)piVar17 >> 8);
      bVar30 = (byte)puVar21 | bVar36;
      puVar44 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar30);
      out(*(undefined4 *)pbVar42,(short)pbVar10);
      *(byte *)piVar17 = (char)*piVar17 + bVar4;
      uVar47 = (undefined2)((uint)iVar22 >> 0x10);
      cVar5 = (char)iVar22;
      pbVar43 = (byte *)CONCAT22(uVar47,CONCAT11((byte)((uint)iVar22 >> 8) | *pbVar10,cVar5));
      bVar7 = *pbVar43;
      *pbVar43 = *pbVar43 + bVar4;
      *(byte *)piVar17 = (char)*piVar17 + bVar4 + CARRY1(bVar7,bVar4);
      *pbVar10 = *pbVar10 + bVar4;
      *(byte *)puVar26 = (byte)*puVar26 + bVar36;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar47,CONCAT11(0x1c,cVar5));
      *(byte *)piVar17 = (char)*piVar17 + bVar4;
      cVar6 = (char)pbVar10;
      *(byte *)puVar44 = (byte)*puVar44 + cVar6;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar4;
      *(byte *)piVar17 = (char)*piVar17 + bVar4;
      pbVar43 = pbVar42 + 8;
      out(*(undefined4 *)(pbVar42 + 4),(short)pbVar10);
      piVar17 = &uRam0a0a0000;
      *pbVar10 = *pbVar10;
      bVar4 = cVar5 - cVar6;
      iVar22 = CONCAT22(uVar47,CONCAT11((byte)puVar26[0x14] | 0x1c | bRam0ca87216,bVar4));
      *pbVar10 = *pbVar10;
      bVar7 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar4;
      if (!CARRY1(bVar7,bVar4)) {
        piVar17 = &uRam1e7b7000;
        bVar7 = (byte)((uint)puVar21 >> 8) | *(byte *)(iVar29 + 3);
        puVar44 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar7,bVar30));
        if (bVar7 != 0) {
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar6 + pbVar43[(int)puVar26 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar22 = iVar22 + 1;
        }
      }
      *piVar17 = *piVar17 + (int)piVar17;
      iVar29 = CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 | pbVar43[(int)puVar26 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar26 = (uint)((int)piVar17 + *puVar26 + 1);
      pbVar42 = pbVar42 + 0xc;
      out(*(undefined4 *)pbVar43,(short)iVar29);
      puVar21 = puVar44;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar30 = bVar30 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar20,bVar30);
  if ('\0' < (char)bVar30) {
    *(byte *)piVar17 = (char)*piVar17 + bVar30;
    puVar44 = (uint *)CONCAT31(uVar20,bVar30 + 0x28);
    *puVar44 = *puVar44 ^ (uint)puVar44;
    *(byte *)puVar21 = *(byte *)puVar21 + bVar7;
    cVar5 = (bVar30 + 0x28) - bVar7;
    pcVar12 = (char *)CONCAT31(uVar20,cVar5);
    *pcVar12 = *pcVar12 + cVar5;
    pbVar10 = (byte *)CONCAT31(uVar19,bVar36 | *(byte *)puVar21);
    pcVar9 = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),
                              CONCAT11((char)((uint)puVar21 >> 8) + *(byte *)((int)puVar46 + 0x7d),
                                       (char)puVar21));
    *pcVar12 = *pcVar12 + cVar5;
    pbVar43 = (byte *)CONCAT31(uVar20,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar20,cVar5 + 0x39U));
    *pcVar9 = *pcVar9 + bVar7;
    puVar45 = (uint *)(pbVar42 + 4);
    out(*(undefined4 *)pbVar42,(short)pbVar10);
    goto code_r0x00405396;
  }
  puVar44 = (uint *)(pbVar42 + 4);
  out(*(undefined4 *)pbVar42,(short)iVar29);
  pcVar12 = (char *)(iVar22 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar10 = (byte *)CONCAT31(uVar19,bVar36 | *(byte *)puVar21);
  goto code_r0x004052ee;
}


