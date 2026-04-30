/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404668
 * Raw Name    : GetPresenter
 * Demangled   : GetPresenter
 * Prototype   : int GetPresenter(undefined4 presenterType, uint * aquirer)
 * Local Vars  : bVar33, cVar32, cVar35, uVar34, pbVar36, unaff_EBX, puVar38, uVar37, cVar40, bVar39, ppbVar42, cVar41, ppbVar44, ppbVar43, pbVar45, unaff_ESI, puVar46, unaff_EDI, in_ES, puVar47, in_SS, in_CS, bVar48, in_DS, in_AF, presenterType, aquirer, uStack_b7, uStack_b8, uStack_b4, uStack_b6, puStack_74, uStack_78, pbStack_6c, iStack_70, uStack_64, puStack_68, puStack_5c, puStack_60, puStack_54, pbStack_58, pbStack_4c, pbStack_50, pcStack_44, puStack_48, puStack_3c, puStack_40, pcStack_34, pcStack_38, uVar2, uVar1, cVar4, uVar3, bVar6, cVar5, uVar8, bVar7, pcVar9, in_EAX, pbVar11, pbVar10, pcVar13, pcVar12, uVar15, puVar14, iVar17, puVar16, puVar19, piVar18, uVar21, puVar20, puVar23, uVar22, bVar25, iVar24, uVar27, uVar26, puVar29, bVar28, iVar31, pbVar30
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

int __fastcall GetPresenter(undefined4 presenterType,uint *aquirer)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  char *in_EAX;
  undefined3 uVar21;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ushort *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  uint *puVar19;
  uint *puVar20;
  undefined3 uVar22;
  byte bVar25;
  uint *puVar23;
  undefined2 uVar26;
  undefined2 uVar27;
  int iVar24;
  byte bVar28;
  char cVar32;
  byte bVar33;
  uint *puVar29;
  byte *pbVar30;
  int iVar31;
  undefined1 uVar34;
  char cVar35;
  byte bVar39;
  uint *unaff_EBX;
  char cVar40;
  byte *pbVar36;
  char cVar41;
  uint uVar37;
  uint *puVar38;
  byte **ppbVar42;
  byte **ppbVar43;
  byte **ppbVar44;
  char *unaff_ESI;
  byte *pbVar45;
  char *unaff_EDI;
  uint *puVar46;
  uint *puVar47;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar48;
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
  char *pcStack_38;
  char *pcStack_34;
  
                    /* .NET CLR Managed Code */
  uVar37 = *aquirer;
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar21 = (undefined3)((uint)in_EAX >> 8);
  cVar4 = (char)in_EAX + *in_EAX;
  pcVar13 = (char *)CONCAT31(uVar21,cVar4);
  *pcVar13 = *pcVar13 + cVar4;
  *pcVar13 = *pcVar13 + cVar4;
  *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)unaff_EBX;
  *pcVar13 = *pcVar13 + cVar4;
  cVar5 = (char)((uint)presenterType >> 8);
  *pcVar13 = *pcVar13 + cVar5;
  *pcVar13 = *pcVar13 + cVar4;
  *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar5;
  pcVar9 = (char *)(CONCAT31(uVar21,cVar4) ^ 3);
  pcVar13 = (char *)(CONCAT31((int3)((uint)presenterType >> 8),(char)presenterType + (char)uVar37) +
                    0x73060000);
  cVar32 = (char)((uint)unaff_EBX >> 8);
  *pcVar13 = *pcVar13 - cVar32;
  *unaff_EDI = (char)pcVar9;
  *pcVar9 = *pcVar9 + (char)pcVar9;
  pbVar45 = (byte *)(unaff_ESI + 1);
  cVar4 = *unaff_ESI;
  *(char *)CONCAT31(uVar21,cVar4) = *(char *)CONCAT31(uVar21,cVar4) + cVar4;
  cVar5 = (cVar4 - (byte)*unaff_EBX) + '(';
  puVar46 = (uint *)(unaff_EDI + 2);
  cVar4 = in((short)aquirer);
  unaff_EDI[1] = cVar4;
  *(char *)CONCAT31(uVar21,cVar5) = *(char *)CONCAT31(uVar21,cVar5) + cVar5;
  bVar6 = cVar5 - (byte)*unaff_EBX;
  bVar7 = bVar6 + 0x28;
  pbVar10 = (byte *)CONCAT31(uVar21,bVar7);
  if (0xd7 < bVar6) {
    *pbVar10 = *pbVar10 + bVar7;
    uVar27 = CONCAT11((char)((uint)aquirer >> 8) - *(char *)((int)aquirer + -0x3a),(char)aquirer);
    aquirer = (uint *)CONCAT22((short)((uint)aquirer >> 0x10),uVar27);
    bVar6 = (bVar7 | *pbVar10) + cRam14060000;
    pcVar13 = (char *)CONCAT31(uVar21,bVar6);
    uVar37 = *aquirer;
    *(byte *)aquirer = (byte)*aquirer;
    if ((POPCOUNT((byte)*aquirer) & 1U) == 0) {
      pcVar9 = &cRam14060000;
      puVar47 = puVar46;
      if ((byte)*aquirer == 0 || SCARRY1((byte)uVar37,'\0') != (char)(byte)*aquirer < '\0')
      goto code_r0x0040475f;
      *pcVar13 = *pcVar13 + bVar6;
      piVar18 = (int *)CONCAT31(uVar21,bVar6 + 0x2d);
      *(byte **)(pbVar45 + (int)puVar46 * 8) =
           (byte *)((int)aquirer + (uint)(0xd2 < bVar6) + *(int *)(pbVar45 + (int)puVar46 * 8));
      uRam7305fffc = in_CS;
      *piVar18 = *piVar18 + (int)piVar18;
      bVar6 = bVar6 + 0x2d | *(byte *)((int)piVar18 + 0x400006d);
      pcVar13 = (char *)CONCAT31(uVar21,bVar6);
      if ((char)bVar6 < '\x01') goto code_r0x00404777;
      *pcVar13 = *pcVar13 + bVar6;
      pcVar13 = (char *)CONCAT31(uVar21,bVar6 + 0x10);
      *aquirer = (uint)(pcVar13 + *aquirer);
    }
    out(*(undefined4 *)pbVar45,uVar27);
    pcStack_38 = &cRam14060000;
    *pcVar13 = *pcVar13 + (byte)pcVar13;
    puStack_3c = (uint *)((uint)puStack_3c & 0xffff0000);
    puStack_40 = (uint *)((uint)puStack_40 & 0xffff0000);
    pcStack_44 = (char *)((uint)pcStack_44 & 0xffff0000);
    cRam14060000 = cRam14060000 + '\x02';
    bVar6 = (byte)pcVar13 | (byte)*aquirer;
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar6);
    pbVar45 = (byte *)(unaff_ESI + 9);
    out(*(undefined4 *)(unaff_ESI + 5),uVar27);
    puVar46 = (uint *)(unaff_EDI + 1);
    *pcVar13 = *pcVar13 + bVar6;
    puStack_48 = (uint *)((uint)puStack_48 & 0xffff0000);
    pbVar10 = (byte *)((int)((uint)pcVar13 | *puVar46) + *(int *)((uint)pcVar13 | *puVar46));
    *pbVar10 = *pbVar10 + (char)pbVar10;
  }
  cVar4 = (char)pbVar10 + *pbVar10;
  puVar47 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar4);
  *(char *)puVar47 = (char)*puVar47 + cVar4;
  *puVar47 = *puVar47 & (uint)puVar47;
  *(char *)puVar47 = (char)*puVar47 + cVar4;
  pbVar11 = (byte *)((int)puVar47 + 1);
  cVar4 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar4;
  *(byte *)unaff_EBX = (byte)*unaff_EBX;
  *pbVar11 = *pbVar11 + cVar4;
  pbStack_4c = (byte *)((uint)pbStack_4c & 0xffff0000);
  puVar23 = (uint *)((uint)CONCAT21(0x1406,*(byte *)((int)puVar46 + 0x49)) << 8);
  *pbVar11 = *pbVar11 + cVar4;
  pbStack_50 = (byte *)((uint)pbStack_50 & 0xffff0000);
  *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - cVar32;
  out(*(undefined4 *)pbVar45,(short)aquirer);
  *pbVar11 = *pbVar11 + cVar4;
  puStack_54 = (uint *)((uint)puStack_54 & 0xffff0000);
  pbStack_58 = (byte *)((uint)pbStack_58 & 0xffff0000);
  pbVar10 = pbVar45 + *(int *)((int)unaff_EBX + -0x7f) + 4;
  *pbVar11 = *pbVar11 + cVar4;
  unaff_EBX = (uint *)((int)unaff_EBX + -1);
  do {
    puStack_5c = (uint *)((uint)puStack_5c & 0xffff0000);
    cVar4 = (char)pbVar11 - (byte)*aquirer;
    pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar4);
    pbVar45 = pbVar10 + 4;
    out(*(undefined4 *)pbVar10,(short)aquirer);
    puVar47 = (uint *)((int)puVar46 + -1);
    *pcVar13 = *pcVar13 + cVar4;
    pcVar9 = (char *)CONCAT22((short)((uint)puVar23 >> 0x10),
                              CONCAT11((char)((uint)puVar23 >> 8) + (byte)puVar46[0x12],
                                       (char)puVar23));
code_r0x0040475f:
    cVar4 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar4;
    *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
    out(*(undefined4 *)pbVar45,(short)aquirer);
    pbVar10 = (byte *)((int)unaff_EBX + -1);
    *pcVar13 = *pcVar13 + cVar4;
    pcStack_34 = (char *)CONCAT22(pcStack_34._2_2_,in_ES);
    pcStack_38 = (char *)CONCAT22(pcStack_38._2_2_,in_ES);
    pbVar45 = pbVar45 + *(int *)((int)unaff_EBX + -0x71) + 4;
    *pcVar13 = *pcVar13 + cVar4;
    puStack_3c = (uint *)CONCAT22(puStack_3c._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                                 CONCAT11((char)((uint)pbVar10 >> 8) - pbVar45[0x6e],(char)pbVar10))
    ;
    puVar46 = puVar47;
code_r0x00404777:
    bVar6 = (byte)pcVar13;
    *pcVar13 = *pcVar13 + bVar6;
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    puVar47 = (uint *)(pbVar45 + (int)puVar46 * 8);
    uVar37 = *puVar47;
    uVar1 = *puVar47;
    *puVar47 = (uint)((byte *)(uVar1 + (int)aquirer) + (0xd2 < bVar6));
    puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,in_ES);
    puVar47 = (uint *)0x73060000;
    cVar5 = bVar6 + 0x2e +
            (CARRY4(uVar37,(uint)aquirer) || CARRY4(uVar1 + (int)aquirer,(uint)(0xd2 < bVar6)));
    *(byte *)aquirer = (byte)*aquirer + (char)pcVar9;
    *pbVar45 = *pbVar45;
    cVar4 = cVar5 + '~';
    pcVar12 = (char *)CONCAT31(uVar21,cVar4);
    out(*pbVar45,(short)aquirer);
    *pcVar12 = *pcVar12 + cVar4;
    cVar5 = cVar5 + -0x80;
    pcVar12 = (char *)CONCAT31(uVar21,cVar5);
    out(*(undefined4 *)(pbVar45 + 1),(short)aquirer);
    puVar23 = (uint *)(pcVar9 + -1);
    *pcVar12 = *pcVar12 + cVar5;
    pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,in_ES);
    *(byte *)puVar46 = (byte)*puVar46 - (char)((uint)pcVar13 >> 8);
    *pcVar12 = *pcVar12 + cVar5;
    puStack_48 = (uint *)CONCAT22(puStack_48._2_2_,in_ES);
    *pcVar12 = *pcVar12 - (char)((uint)puVar23 >> 8);
    *pcVar12 = *pcVar12 + cVar5;
    pbStack_4c = (byte *)CONCAT22(pbStack_4c._2_2_,in_ES);
    pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,in_ES);
    pbVar10 = pbVar45 + *(int *)((int)unaff_EBX + 9) + 5;
    *pcVar12 = *pcVar12 + cVar5;
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,in_ES);
    cVar4 = (char)aquirer;
    cVar32 = (char)((uint)aquirer >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    aquirer = (uint *)CONCAT22((short)((uint)aquirer >> 0x10),CONCAT11(cVar32,cVar4));
    *pcVar12 = *pcVar12 + cVar5;
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar34 = SUB41(unaff_EBX,0);
    bVar39 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)aquirer + 0x36);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(bVar39,uVar34));
    bVar7 = cVar5 + (byte)*unaff_EBX;
    pbVar11 = (byte *)CONCAT31(uVar21,bVar7);
    *(byte *)puVar46 = (byte)*puVar46 - cVar32;
    bVar6 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar7;
    pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_ES);
  } while (!CARRY1(bVar6,bVar7));
  *pbVar11 = *pbVar11 + bVar7;
  bVar7 = bVar7 - *pbVar11;
  pbVar45 = (byte *)CONCAT31(uVar21,bVar7);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar4;
  *(byte *)aquirer = (byte)*aquirer ^ bVar7;
  pcVar9[0x2affffff] = pcVar9[0x2affffff] + bVar7;
  bVar6 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar7;
  *unaff_EBX = (uint)(pbVar45 + (uint)CARRY1(bVar6,bVar7) + *unaff_EBX);
  pbVar11 = pbVar45 + -0x32a1702;
  if (pbVar11 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar11;
    puVar20 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + (byte)*aquirer);
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_ES);
    pbVar45[-0xe0c891b] = pbVar45[-0xe0c891b] + cVar32;
    pbVar11 = pbVar45 + 0x19fd76e3;
    bVar6 = *pbVar11;
    *pbVar11 = *pbVar11 - bVar39;
    piVar18 = (int *)((uint)(pbVar45 + (bVar6 < bVar39) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar18 + 0x73) = *(char *)((int)piVar18 + 0x73) + cVar32;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar7 = bVar39 | *(byte *)((int)aquirer + 2);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(bVar7,uVar34));
    cVar4 = (char)piVar18;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(char *)piVar18 = (char)*piVar18 + cVar4;
      uVar21 = (undefined3)((uint)(pbVar45 + (bVar6 < bVar39) + 0x63fd76e4) >> 8);
      cVar5 = cVar4 + '\x06';
      if ((POPCOUNT(cVar5) & 1U) == 0) {
        *(char *)CONCAT31(uVar21,cVar5) = *(char *)CONCAT31(uVar21,cVar5) + cVar5;
        pbVar11 = (byte *)CONCAT31(uVar21,cVar4 + '.');
        puVar23 = puVar20;
        uStack_64 = in_SS;
        goto code_r0x00404803;
      }
      cVar4 = cVar5 + (byte)*unaff_EBX;
      pcVar13 = (char *)CONCAT31(uVar21,cVar4);
      if (SCARRY1(cVar5,(byte)*unaff_EBX) == cVar4 < '\0') {
code_r0x004048e7:
        pcVar13 = (char *)((uint)pcVar13 | 8);
        uStack_64 = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(aquirer + 0x1cc18000) = (byte)aquirer[0x1cc18000] + cVar4;
code_r0x0040486e:
      pcVar13 = (char *)CONCAT31((int3)((uint)piVar18 >> 8),(byte)piVar18 & (byte)*aquirer);
      puVar46 = (uint *)((int)puVar46 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '*');
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_DS);
    bVar6 = (byte)((uint)puVar20 >> 8);
    cVar4 = (char)puVar20;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar6 + *pbVar45,cVar4));
    pbVar45 = pbVar45 + (uint)CARRY1(bVar6,*pbVar45) + *(int *)pbVar45;
    *(byte *)aquirer = (byte)*aquirer + cVar4;
    bVar48 = (byte)pbVar45 < *pbVar45;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(byte)pbVar45 - *pbVar45);
code_r0x00404880:
    pbVar10 = pbVar10 + (uint)bVar48 + *(int *)pbVar45;
    uStack_64 = in_ES;
    while( true ) {
      bVar7 = (byte)pbVar45;
      pbVar45[0x2c000000] = pbVar45[0x2c000000] + bVar7;
      bVar6 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar7;
      *aquirer = (uint)(pbVar45 + (uint)CARRY1(bVar6,bVar7) + *aquirer);
      *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)aquirer;
      *pbVar45 = *pbVar45 + bVar7;
      puVar23 = (uint *)CONCAT31((int3)((uint)pbVar45 >> 8),bVar7 | (byte)*unaff_EBX);
code_r0x00404895:
      pcVar13 = (char *)((uint)puVar23 | *puVar23);
code_r0x00404899:
      cVar4 = (char)pcVar13;
      *pbVar10 = *pbVar10 + cVar4;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar6 = cVar4 + (byte)*unaff_EBX;
      pcVar13 = (char *)CONCAT31(uVar21,bVar6);
      bVar7 = (byte)((uint)puVar20 >> 8);
      uVar27 = (undefined2)((uint)puVar20 >> 0x10);
      cVar5 = (char)aquirer;
      if (SCARRY1(cVar4,(byte)*unaff_EBX) == (char)bVar6 < '\0') {
        *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar5;
        *pcVar13 = *pcVar13 + bVar6;
        puVar20 = (uint *)CONCAT22(uVar27,CONCAT11(bVar7 | (byte)*aquirer,(char)puVar20));
        aquirer = (uint *)((int)aquirer + 1);
        pcVar13 = pcVar13 + *aquirer;
        uStack_64 = in_ES;
        if ((POPCOUNT((uint)pcVar13 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar13 = *pcVar13 + bVar6;
      bVar39 = bVar6 + 2;
      pcVar13 = (char *)CONCAT31(uVar21,bVar39);
      if (bVar6 < 0xfe) {
        *pbVar10 = *pbVar10 + bVar39;
        puVar23 = unaff_EBX;
        uStack_64 = in_ES;
        goto code_r0x004048f5;
      }
      *pcVar13 = *pcVar13 + bVar39;
      aquirer = (uint *)CONCAT22((short)((uint)aquirer >> 0x10),
                                 CONCAT11((byte)((uint)aquirer >> 8) |
                                          *(byte *)((int)unaff_EBX + -0x5b),cVar5));
      cVar4 = *pcVar13;
      *pcVar13 = *pcVar13 + bVar39;
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_ES);
      uVar26 = in_ES;
      if (SCARRY1(cVar4,bVar39) == *pcVar13 < '\0') goto code_r0x00404927;
      *pcVar13 = *pcVar13 + bVar39;
      bVar6 = bVar6 + 4;
      pbVar45 = (byte *)CONCAT31(uVar21,bVar6);
      if (0xfd < bVar39) break;
      *pbVar45 = *pbVar45 + bVar6;
      puVar20 = (uint *)CONCAT22(uVar27,CONCAT11(bVar7 | (byte)*aquirer,(char)puVar20));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar5;
      *pbVar10 = *pbVar10 ^ bVar6;
    }
    *pbVar45 = *pbVar45 + bVar6;
    puStack_68 = (uint *)((uint)puStack_68 & 0xffff0000);
  }
  else {
    pbVar45[0x6fdbe8fe] = pbVar45[0x6fdbe8fe] + (char)pbVar11;
code_r0x00404803:
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar22 = (undefined3)((uint)puVar23 >> 8);
    bVar7 = (byte)puVar23 | (byte)*unaff_EBX;
    puVar20 = (uint *)CONCAT31(uVar22,bVar7);
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar5 = (char)unaff_EBX;
    cVar40 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x6f);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar40,cVar5));
    bVar6 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar6;
    bVar48 = 0xf9 < bVar6;
    uVar21 = (undefined3)((uint)pbVar11 >> 8);
    cVar4 = bVar6 + 6;
    pbVar45 = (byte *)CONCAT31(uVar21,cVar4);
    in_SS = uStack_64;
    if ((POPCOUNT(cVar4) & 1U) != 0) goto code_r0x00404880;
    *pbVar45 = *pbVar45 + cVar4;
    piVar18 = (int *)CONCAT31(uVar21,bVar6 + 0x2e);
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar7 = bVar7 | *(byte *)((int)aquirer + (int)piVar18);
    puVar20 = (uint *)CONCAT31(uVar22,bVar7);
    in_SS = puStack_60._0_2_;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      puVar23 = (uint *)((int)piVar18 + *piVar18);
      *(byte *)aquirer = (byte)*aquirer + bVar7;
      pbVar10 = pbVar10 + aquirer[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar18 = (char)*piVar18 + bVar6 + 0x2e;
    cVar4 = bVar6 + 0x34;
    pcVar13 = (char *)CONCAT31(uVar21,cVar4);
    if ((POPCOUNT(cVar4) & 1U) != 0) {
      pcVar13[0x28] = pcVar13[0x28] + cVar32;
      goto code_r0x00404899;
    }
    *pcVar13 = *pcVar13 + cVar4;
    piVar18 = (int *)CONCAT31(uVar21,bVar6 + 0x5c);
    *piVar18 = *piVar18 + (int)piVar18;
    cVar32 = (bVar7 | bRam07022c07) - (char)*piVar18;
    puVar20 = (uint *)CONCAT31(uVar22,cVar32);
    pcVar13 = (char *)CONCAT31(uVar21,bVar6 + 0x5a);
    bVar7 = (byte)((uint)puVar23 >> 8);
    *(byte *)aquirer = (byte)*aquirer | bVar7;
    *(uint *)((int)aquirer + (int)pcVar13) = *(uint *)((int)aquirer + (int)pcVar13) | 0x73060000;
    *aquirer = *aquirer | 0x73060000;
    cVar40 = cVar40 + *(byte *)((int)unaff_EBX + 0x72);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar40,cVar5));
    *pcVar13 = *pcVar13 + bVar6 + 0x5a;
    cVar4 = bVar6 + 0x60;
    pcVar13 = (char *)CONCAT31(uVar21,cVar4);
    if ((POPCOUNT(cVar4) & 1U) == 0) {
      *pcVar13 = *pcVar13 + cVar4;
      piVar18 = (int *)CONCAT31(uVar21,bVar6 + 0x88);
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_DS);
      puVar20 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                 CONCAT11((bVar7 | (byte)*aquirer) + (char)*piVar18,cVar32));
      *(char *)piVar18 = (char)*piVar18;
      cVar5 = cVar5 - *pbVar10;
      cVar40 = cVar40 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar5) + 0x73);
      *(byte *)piVar18 = (char)*piVar18 + bVar6 + 0x88;
      bVar6 = bVar6 + 0xb2 & (byte)*aquirer;
      puVar46 = (uint *)((int)puVar46 + iRam73060073);
      *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
      pcVar13 = (char *)CONCAT31(uVar21,bVar6 + 0x2a);
      unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar27,CONCAT11(
                                                  cVar40,cVar5)) + 0x74),cVar5));
      *pcVar13 = *pcVar13 + bVar6 + 0x2a;
      piVar18 = (int *)CONCAT31(uVar21,bVar6 + 0x54);
      in_SS = puStack_68._0_2_;
      goto code_r0x0040486e;
    }
    pbVar45 = (byte *)*(undefined6 *)pcVar13;
    *pbVar10 = *pbVar10 + (char)*(undefined6 *)pcVar13;
  }
  uVar21 = (undefined3)((uint)pbVar45 >> 8);
  bVar6 = (byte)pbVar45 | *pbVar10;
  pcVar13 = (char *)CONCAT31(uVar21,bVar6);
  *pcVar13 = *pcVar13 + bVar6;
  *unaff_EBX = (uint)(*unaff_EBX + (int)puVar20);
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
  *pcVar13 = *pcVar13 + bVar6;
  pcVar13 = (char *)CONCAT31(uVar21,bVar6 + 0x6f);
  *pcVar13 = *pcVar13 + bVar6 + 0x6f;
  pcVar13 = (char *)((int)((uint)pcVar13 & 0x7e26062d) - *(int *)((uint)pcVar13 & 0x7e26062d));
  *(byte *)aquirer = (byte)*aquirer + (char)puVar20;
  uRam00c16f07 = SUB41(pcVar13,0);
code_r0x004048de:
  cVar4 = (char)pcVar13;
  *pbVar10 = *pbVar10 + cVar4;
  *pcVar13 = *pcVar13 + cVar4;
  *(byte **)(pcVar13 + (int)puVar20) = (byte *)(*(int *)(pcVar13 + (int)puVar20) + (int)puVar20);
  puStack_68 = (uint *)CONCAT22(puStack_68._2_2_,uStack_64);
  bVar6 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar13 = *pcVar13 + cVar4;
  pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar4 + 'o');
  pbVar10 = pbVar10 + 1;
  *pcVar13 = *pcVar13 + cVar4 + 'o';
  pbStack_6c = (byte *)CONCAT22(pbStack_6c._2_2_,uStack_64);
  puVar23 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar6,(char)unaff_EBX));
  puVar47 = unaff_EBX;
  in_SS = uStack_64;
code_r0x004048f5:
  unaff_EBX = puVar23;
  pcVar13 = (char *)((int)((uint)pcVar13 & 0x7e26062d) - *(int *)((uint)pcVar13 & 0x7e26062d));
  *(byte *)aquirer = (byte)*aquirer + (char)puVar20;
  do {
    uRam00c36f08 = SUB41(pcVar13,0);
    while( true ) {
      bVar6 = *pbVar10;
      cVar4 = (char)pcVar13;
      *pbVar10 = *pbVar10 + cVar4;
      iStack_70 = CONCAT22(iStack_70._2_2_,uStack_64);
      if (SCARRY1(bVar6,cVar4) == (char)*pbVar10 < '\0') {
        pcVar13[(int)puVar47] = pcVar13[(int)puVar47] + cVar4;
        goto code_r0x00404982;
      }
      *pcVar13 = *pcVar13 + cVar4;
      pbVar45 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar4 + '*');
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_DS);
      bVar6 = (byte)((uint)puVar20 >> 8);
      cVar4 = (char)puVar20;
      bVar7 = bVar6 + *pbVar45;
      pbVar45 = pbVar45 + (uint)CARRY1(bVar6,*pbVar45) + *(int *)pbVar45;
      *(byte *)aquirer = (byte)*aquirer + cVar4;
      cVar5 = (char)unaff_EBX - *pbVar10;
      bVar6 = *pbVar45;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7 + *pbVar45,cVar4));
      iVar17 = *(int *)pbVar45;
      *(byte *)aquirer = (byte)*aquirer + cVar4;
      pcVar13 = (char *)CONCAT31((int3)((uint)(pbVar45 + (uint)CARRY1(bVar7,bVar6) + iVar17) >> 8),
                                 (char)(pbVar45 + (uint)CARRY1(bVar7,bVar6) + iVar17) -
                                 *(byte *)((int)aquirer + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar5) +
                                                     -0x3a),cVar5));
code_r0x00404921:
      bVar6 = (byte)pcVar13;
      *pcVar13 = *pcVar13 + bVar6;
      pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar6 + 0x6f);
      *(byte *)puVar20 = ((byte)*puVar20 - (bVar6 + 0x6f)) - (0x90 < bVar6);
      uVar26 = uStack_64;
code_r0x00404927:
      uStack_64 = uVar26;
      *(byte *)aquirer = (byte)*aquirer + (char)puVar20;
      pbStack_6c = (byte *)CONCAT22(pbStack_6c._2_2_,in_SS);
      *(byte *)puVar20 = (byte)*puVar20 + 1;
      cVar4 = (char)((uint)puVar20 >> 8) - pbVar10[2];
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(cVar4,(char)puVar20));
      if ((POPCOUNT(cVar4) & 1U) == 0) break;
      pcVar13 = pcVar13 + -0x1b7e2606;
      *pcVar13 = *pcVar13 + (char)pcVar13;
      pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar13 >> 8) | (byte)aquirer[0x30dbc2],
                                          (char)pcVar13));
    }
code_r0x00404931:
    *pcVar13 = *pcVar13 + (char)pcVar13;
    cVar4 = (char)pcVar13 + '\x02';
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar4);
    pbVar45 = pbVar10;
  } while ((POPCOUNT(cVar4) & 1U) != 0);
  do {
    bVar6 = (byte)pcVar13;
    *pcVar13 = *pcVar13 + bVar6;
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    piVar18 = (int *)CONCAT31(uVar21,bVar6 + 0x6f);
    *puVar20 = (*puVar20 - (int)piVar18) - (uint)(0x90 < bVar6);
    *(byte *)aquirer = (byte)*aquirer + (char)puVar20;
    iVar17 = *(int *)((int)puVar46 + 0x1a);
    *piVar18 = *piVar18 + (int)piVar18;
    aquirer = (uint *)CONCAT31((int3)((uint)aquirer >> 8),(byte)aquirer | *pbVar45);
    *(byte *)puVar20 = (byte)*puVar20 + 1;
    bVar6 = (bVar6 + 0x6f) - (char)*piVar18;
    pbVar10 = (byte *)CONCAT31(uVar21,bVar6);
    *pbVar10 = *pbVar10 + bVar6;
    pbVar45 = pbVar45 + *(int *)pbVar10;
    cVar4 = bVar6 + *pbVar10;
    puVar14 = (ushort *)CONCAT31(uVar21,cVar4);
    *puVar14 = *puVar14 + (ushort)CARRY1(bVar6,*pbVar10) * (((ushort)puVar14 & 3) - (*puVar14 & 3));
    *(char *)puVar14 = (char)*puVar14 + cVar4;
    *(char *)puVar14 = (char)*puVar14 + cVar4;
    *(char *)puVar14 = (char)*puVar14 + cVar4;
    puVar46 = (uint *)((int)puVar46 + unaff_EBX[0x1c]);
    puVar47 = (uint *)((int)puVar47 + iVar17);
code_r0x0040495b:
    cVar4 = (char)puVar14;
    *(char *)puVar14 = (char)*puVar14 + cVar4;
    uVar21 = (undefined3)((uint)puVar14 >> 8);
    cVar5 = cVar4 + '\x02';
    pcVar13 = (char *)CONCAT31(uVar21,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      *aquirer = (uint)(*aquirer + (int)puVar47);
      pbVar10 = pbVar45 + 1;
      out(*pbVar45,(short)aquirer);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar13 = *pcVar13 + cVar5;
    pbVar45 = (byte *)(CONCAT31(uVar21,cVar4 + '}') + (int)puVar47);
    *pbVar45 = *pbVar45 + cVar4 + '}';
    *pcStack_34 = *pcStack_34 + (char)pcStack_34;
    puVar20 = (uint *)CONCAT22((short)((uint)pcStack_38 >> 0x10),
                               CONCAT11((byte)((uint)pcStack_38 >> 8) |
                                        *(byte *)((int)pcStack_38 * 3),(char)pcStack_38));
    puVar46 = (uint *)(pbStack_50 + *(int *)((int)puStack_40 + 0x6f));
    pcVar13 = pcStack_34;
    aquirer = puStack_3c;
    unaff_EBX = puStack_40;
    puVar47 = puStack_48;
    pbVar45 = pbStack_4c;
    while( true ) {
      cVar4 = (char)pcVar13;
      *pcVar13 = *pcVar13 + cVar4;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      cVar5 = cVar4 + '\x02';
      pcVar13 = (char *)CONCAT31(uVar21,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) break;
      *pcVar13 = *pcVar13 + cVar5;
      pcVar13 = (char *)CONCAT31(uVar21,cVar4 + '}');
      out(*(undefined4 *)pbVar45,(short)aquirer);
      *pcVar13 = *pcVar13 + cVar4 + '}';
code_r0x00404982:
      puStack_5c = (uint *)CONCAT22(puStack_5c._2_2_,in_ES);
      *(byte *)puStack_54 = (byte)*puStack_54 + (char)in_ES;
      puVar20 = (uint *)CONCAT22((short)((uint)pbStack_58 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_58 >> 8) |
                                          pbStack_58[(int)pbStack_6c],(char)pbStack_58));
      puVar46 = (uint *)(iStack_70 + *(int *)((int)puStack_60 + 0x71));
      puVar47 = puStack_54;
      aquirer = puStack_5c;
      unaff_EBX = puStack_60;
      pbVar45 = pbStack_6c;
      while( true ) {
        cVar4 = (char)puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + cVar4;
        uVar21 = (undefined3)((uint)puVar47 >> 8);
        cVar5 = cVar4 + '\x02';
        puVar14 = (ushort *)CONCAT31(uVar21,cVar5);
        puVar47 = puStack_68;
        if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar14 = (char)*puVar14 + cVar5;
        bVar7 = cVar4 + 0x7d;
        iVar17 = CONCAT31(uVar21,bVar7);
        pbVar10 = (byte *)(iVar17 + (int)puStack_68);
        bVar6 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar7;
        uVar37 = *puVar20;
        *(byte *)aquirer = (byte)*aquirer + (char)puVar20;
        pcVar13 = (char *)(((iVar17 - uVar37) - (uint)CARRY1(bVar6,bVar7)) + -0x727b0317);
        cVar4 = (char)pcVar13;
        *pcVar13 = *pcVar13 + cVar4;
        uVar21 = (undefined3)((uint)pcVar13 >> 8);
        cVar5 = cVar4 + '\x02';
        pcVar13 = (char *)CONCAT31(uVar21,cVar5);
        if ((POPCOUNT(cVar5) & 1U) != 0) break;
        *pcVar13 = *pcVar13 + cVar5;
        bVar7 = cVar4 + 0x7d;
        iVar17 = CONCAT31(uVar21,bVar7);
        pbVar10 = (byte *)(iVar17 + (int)puStack_68);
        bVar6 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar7;
        puVar47 = (uint *)((iVar17 - *puVar20) - (uint)CARRY1(bVar6,bVar7));
        puVar23 = aquirer;
code_r0x004049b4:
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar20;
        aquirer = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),
                                   ((char)puVar23 - (byte)*puVar46) - *pbVar45);
        bVar7 = pbVar45[0x72];
        *puVar47 = *puVar47 & (uint)puVar20;
        pbVar10 = (byte *)((int)puVar47 + 2);
        *pbVar10 = *pbVar10 + (char)((uint)puVar23 >> 8);
        bVar6 = *pbVar10;
        puVar38 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar7);
        pbVar10 = pbVar45;
        while (unaff_EBX = puVar38, pbVar45 = pbVar10, (POPCOUNT(bVar6) & 1U) == 0) {
          cVar4 = (char)puVar47;
          *(byte *)puVar47 = (byte)*puVar47 + cVar4;
          uVar21 = (undefined3)((uint)puVar47 >> 8);
          cVar5 = cVar4 + '\x03';
          pbVar11 = (byte *)CONCAT31(uVar21,cVar5);
          pbVar45 = pbVar10 + 4;
          out(*(undefined4 *)pbVar10,(short)aquirer);
          in_SS = pbStack_50._0_2_;
          *pbVar11 = *pbVar11 + cVar5;
          cVar32 = (char)puVar20;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                     CONCAT11((byte)((uint)puVar20 >> 8) | *pbVar11,cVar32));
          *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
          *(byte *)aquirer = (byte)*aquirer + cVar32;
          cVar32 = (char)puVar38 - pbVar10[6];
          unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),cVar32);
          if ((POPCOUNT(cVar32) & 1U) != 0) {
            pbVar10 = (byte *)((int)puVar46 + (int)puStack_68 * 2);
            *pbVar10 = *pbVar10 + cVar5;
            ppbVar44 = (byte **)puStack_68;
            goto code_r0x00404a51;
          }
          *pbVar11 = *pbVar11 + cVar5;
          puVar47 = (uint *)CONCAT31(uVar21,cVar4 + 'r');
          *(byte *)puVar47 = (byte)*puVar47;
          pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,uStack_64);
          do {
            puVar46 = (uint *)((int)puVar46 + unaff_EBX[0x1c]);
            bVar6 = (byte)puVar47;
            *(byte *)puVar47 = (byte)*puVar47 + bVar6;
            uVar21 = (undefined3)((uint)puVar47 >> 8);
            bVar6 = (bVar6 + 0x6e) - (0x90 < bVar6);
            puVar47 = (uint *)CONCAT31(uVar21,bVar6);
            cVar4 = (char)puVar20;
            *(byte *)aquirer = (byte)*aquirer + cVar4;
            bVar7 = (char)((uint)puVar20 >> 8) - pbVar45[2];
            puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,cVar4));
            puVar23 = aquirer;
            if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar47 = (byte)*puVar47 + bVar6;
            bVar39 = bVar6 + 2;
            puVar47 = (uint *)CONCAT31(uVar21,bVar39);
            ppbVar43 = (byte **)puStack_68;
            if ((POPCOUNT(bVar39) & 1U) == 0) goto code_r0x004049f5;
            pbVar45 = pbStack_50;
          } while (0xfd < bVar6);
          *(byte *)puVar47 = (byte)*puVar47 | bVar39;
          puVar38 = unaff_EBX;
          pbVar10 = pbStack_50;
          bVar6 = (byte)*puVar47;
        }
      }
    }
    *(byte *)aquirer = (byte)*aquirer + (char)puVar20;
    pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar6 = (byte)puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar6;
    uVar21 = (undefined3)((uint)puVar47 >> 8);
    bVar39 = bVar6 + 0x6f;
    pbVar11 = (byte *)CONCAT31(uVar21,bVar39);
    *puVar20 = (*puVar20 - (int)pbVar11) - (uint)(0x90 < bVar6);
    *(byte *)aquirer = (byte)*aquirer + cVar4;
    pbVar10 = (byte *)((int)ppbVar43 + *(int *)((int)puVar46 + 0x1a));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar22 = (undefined3)((uint)aquirer >> 8);
    bVar6 = (byte)aquirer | *pbVar45;
    aquirer = (uint *)CONCAT31(uVar22,bVar6);
    *(byte *)puVar20 = (byte)*puVar20 + 1;
    cVar5 = bVar39 - *pbVar11;
    pbVar45 = pbVar45 + (-(uint)(bVar39 < *pbVar11) - *(int *)CONCAT31(uVar21,cVar5));
    uVar15 = CONCAT31(uVar21,cVar5 + *(char *)CONCAT31(uVar21,cVar5));
    bVar48 = CARRY1(bRam14110000,bVar7);
    bRam14110000 = bRam14110000 + bVar7;
    puVar47 = (uint *)((int)unaff_EBX + (int)pbVar45 * 2);
    uVar37 = *puVar47;
    uVar1 = uVar15 + *puVar47;
    puVar16 = (undefined4 *)(uVar1 + bVar48);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar16 = uVar2;
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,uStack_64);
    uVar37 = (uint)(CARRY4(uVar15,uVar37) || CARRY4(uVar1,(uint)bVar48));
    puVar47 = (uint *)((int)puVar16 + uRam7d020511 + uVar37);
    ppbVar42 = &pbStack_58;
    ppbVar44 = &pbStack_58;
    ppbVar43 = &pbStack_58;
    pbStack_58 = pbVar10;
    cVar5 = '\x03';
    do {
      pbVar10 = pbVar10 + -4;
      ppbVar42 = ppbVar42 + -1;
      *ppbVar42 = (byte *)*(undefined4 *)pbVar10;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    pbStack_50 = (byte *)&pbStack_58;
    pbRam00c82802 =
         (byte *)((int)puVar47 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar16,uRam7d020511) ||
                      CARRY4((int)puVar16 + uRam7d020511,uVar37))));
    bVar39 = *pbVar45;
    cVar5 = (char)puVar47;
    *pbVar45 = *pbVar45 + cVar5;
  } while (SCARRY1(bVar39,cVar5) == (char)*pbVar45 < '\0');
  *(byte *)puVar47 = (byte)*puVar47 + cVar5;
  iVar17 = CONCAT31((int3)((uint)puVar47 >> 8),cVar5 + '\x11') + 0xc57b;
  bVar7 = (byte)iVar17;
  *aquirer = *aquirer ^ (uint)unaff_EBX;
  aquirer = (uint *)CONCAT31(uVar22,bVar6 + (byte)*puVar20);
  iVar17 = (CONCAT31((int3)((uint)iVar17 >> 8),bVar7 + 0x6f) - (uint)(0x90 < bVar7)) + -0x18093a86;
  cVar5 = (char)iVar17;
  uVar21 = (undefined3)((uint)iVar17 >> 8);
  cVar4 = cVar5 + '\x02';
  pbVar10 = (byte *)CONCAT31(uVar21,cVar4);
  if ((POPCOUNT(cVar4) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar10 = *pbVar10 + cVar4;
  pbVar11 = (byte *)CONCAT31(uVar21,cVar5 + 'q');
  ppbVar44 = &pbStack_58;
code_r0x00404a51:
  pbVar10 = pbVar11 + 1;
  cVar4 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar4;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((char)((uint)puVar38 >> 8) - cVar4,cVar32));
  *pbVar10 = *pbVar10 + cVar4;
  aquirer = (uint *)CONCAT31((int3)((uint)aquirer >> 8),(char)aquirer - (byte)*puVar20);
  pbVar11 = pbVar11 + 0x757b03;
  pbVar10 = (byte *)((int)puVar46 + (int)ppbVar44 * 2);
  cVar4 = (char)pbVar11;
  *pbVar10 = *pbVar10 + cVar4;
  *pbVar11 = *pbVar11 + cVar4;
  *pbVar45 = *pbVar45 - (char)((uint)pbVar11 >> 8);
  *pbVar11 = *pbVar11 + cVar4;
  puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar44 + -0x3a));
  *pbVar11 = *pbVar11 + cVar4;
  pbVar10 = (byte *)(CONCAT31((int3)((uint)pbVar11 >> 8),cVar4 + '\x11') + 0x757b02);
  pbVar11 = (byte *)((int)puVar46 + (int)ppbVar44 * 2);
  bVar7 = (byte)pbVar10;
  *pbVar11 = *pbVar11 + bVar7;
  bVar6 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar7;
  puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_64);
  pbRam011006fe = pbVar10 + (int)(pbRam011006fe + CARRY1(bVar6,bVar7));
  bVar6 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar7;
  if (!CARRY1(bVar6,bVar7)) goto code_r0x00404add;
  do {
    bVar6 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    bVar39 = (byte)puVar20;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11((byte)((uint)puVar20 >> 8) | *pbVar10,bVar39));
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar21 = (undefined3)((uint)pbVar10 >> 8);
    bVar6 = bVar6 + in_AF * '\x06';
    cVar4 = bVar6 + (0x90 < (bVar6 & 0xf0) | in_AF * (0xf9 < bVar6)) * '`';
    pcVar13 = (char *)CONCAT31(uVar21,cVar4);
    *pcVar13 = *pcVar13 + cVar4;
    puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar44 + -0x39));
    *pcVar13 = *pcVar13 + cVar4;
    iVar17 = CONCAT31(uVar21,cVar4 + '\x11') + 0xc57b;
    iVar17 = CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x11') + 0xc67b;
    bVar6 = (byte)iVar17;
    bVar7 = bVar6 + 0x6f;
    pbVar10 = (byte *)CONCAT31((int3)((uint)iVar17 >> 8),bVar7);
    *puVar20 = (*puVar20 - (int)pbVar10) - (uint)(0x90 < bVar6);
    uVar37 = *aquirer;
    *(byte *)aquirer = (byte)*aquirer + bVar39;
    pbRam011106fe = pbVar10 + (int)(pbRam011106fe + CARRY1((byte)uVar37,bVar39));
    bVar6 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar7;
    if (!CARRY1(bVar6,bVar7)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    bVar6 = (byte)puVar20;
    bVar7 = (byte)((uint)puVar20 >> 8) | *pbVar10;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,bVar6));
    *pbVar10 = *pbVar10 - (char)pbVar10;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar7;
    out(*(undefined4 *)pbVar45,(short)aquirer);
    *puVar20 = *puVar20 & (uint)pbVar10;
    uVar37 = *aquirer;
    *(byte *)aquirer = (byte)*aquirer + bVar6;
    pbVar10 = pbVar10 + (uint)CARRY1((byte)uVar37,bVar6) + *(int *)(pbVar45 + 4);
    *pbVar10 = *pbVar10 + (char)pbVar10;
    *(byte *)puVar20 = (byte)*puVar20 + (char)aquirer;
    pbVar45 = pbVar45 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar45,(short)aquirer);
      pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 & (byte)*puVar20);
      *(byte *)aquirer = (byte)*aquirer + (char)puVar20;
      aquirer = (uint *)CONCAT22((short)((uint)aquirer >> 0x10),
                                 CONCAT11((byte)((uint)aquirer >> 8) | (byte)unaff_EBX[5],
                                          (char)aquirer));
      *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
      pbVar45 = pbVar45 + 4;
code_r0x00404ad4:
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_64);
      pbVar10 = (byte *)((uint)pbVar10 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar10;
code_r0x00404add:
      bVar6 = (byte)pbVar10;
      uVar21 = (undefined3)((uint)pbVar10 >> 8);
      cVar4 = bVar6 + 8;
      pbVar10 = (byte *)CONCAT31(uVar21,cVar4);
      if (SCARRY1(bVar6,'\b') == cVar4 < '\0') break;
      *pbVar10 = *pbVar10 + cVar4;
      cVar4 = bVar6 + 10;
      piVar18 = (int *)CONCAT31(uVar21,cVar4);
      if ((POPCOUNT(cVar4) & 1U) != 0) {
        *piVar18 = (int)(*piVar18 + (int)piVar18);
        goto code_r0x00404b18;
      }
      *(char *)piVar18 = (char)*piVar18 + cVar4;
      puVar47 = (uint *)CONCAT31(uVar21,bVar6 + 0x7c);
      *puVar47 = *puVar47 & (uint)puVar20;
      *(char *)((int)puVar47 + 0x11) = *(char *)((int)puVar47 + 0x11) + (char)((uint)aquirer >> 8);
      cVar4 = (char)((int)puVar47 + 0xc67b);
      uVar21 = (undefined3)((uint)((int)puVar47 + 0xc67b) >> 8);
      bVar6 = cVar4 + 8;
      pbVar10 = (byte *)CONCAT31(uVar21,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar10 = *pbVar10 + bVar6;
        cRam02060000 = cVar4 + 'w';
        puVar47 = (uint *)CONCAT31(uVar21,cRam02060000);
        *(byte *)puVar47 = (byte)*puVar47 + cRam02060000;
        cVar4 = (char)puVar20;
        puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                   CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar47,cVar4));
        *puVar47 = *puVar47 - (int)puVar47;
        *(byte *)aquirer = (byte)*aquirer + cVar4;
        pbVar10 = pbVar45 + 4;
        out(*(undefined4 *)pbVar45,(short)aquirer);
        pbVar45 = pbVar10;
        if ((POPCOUNT((byte)*aquirer) & 1U) == 0) goto code_r0x00404b0f;
        pcVar13 = (char *)((uint)puVar47 | *puVar47);
        goto code_r0x00404b89;
      }
      bVar7 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar6;
      *(byte **)pbVar45 = pbVar10 + (uint)CARRY1(bVar7,bVar6) + *(int *)pbVar45;
    }
    *pbVar45 = *pbVar45 + 1;
    *puVar20 = (uint)(pbVar10 + (uint)(0xf7 < bVar6) + *puVar20);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
    puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 + 'r');
    piVar18 = (int *)((uint)puVar47 | *puVar47);
    aquirer = puStack_74;
code_r0x00404b18:
    bRam11060000 = (byte)piVar18;
    iVar17 = CONCAT31((int3)((uint)((int)piVar18 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar18 + 0xc57b) + '\x11') + 0xc77b;
    bVar6 = (byte)iVar17;
    iVar17 = CONCAT31((int3)((uint)iVar17 >> 8),bVar6 + 0x6f);
    *puVar20 = (*puVar20 - iVar17) - (uint)(0x90 < bVar6);
    cVar4 = (char)puVar20;
    *(byte *)aquirer = (byte)*aquirer + cVar4;
    bVar7 = (byte)((uint)unaff_EBX >> 8);
    bVar33 = (byte)((uint)aquirer >> 8) | bVar7;
    pcVar9 = (char *)CONCAT22((short)((uint)aquirer >> 0x10),CONCAT11(bVar33,(byte)aquirer));
    piVar18 = (int *)(iVar17 + 0x73060001);
    *(byte *)puVar20 = (byte)*puVar20 & (byte)piVar18;
    *pcVar9 = *pcVar9 + cVar4;
    bVar39 = (byte)((uint)puVar20 >> 8);
    *(byte *)piVar18 = *(char *)piVar18 - bVar39;
    *(byte *)piVar18 = *(char *)piVar18 + (byte)piVar18;
    iVar17 = *piVar18;
    *piVar18 = *piVar18 - (int)piVar18;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar39;
    pcVar13 = (char *)((uint)piVar18 | *puVar46);
    *pcVar9 = *pcVar9 - bVar39;
    bVar6 = (byte)pcVar13;
    *pcVar13 = *pcVar13 + bVar6;
    ppbVar44 = (byte **)(((int)ppbVar44 - iVar17) - *(int *)(pcVar13 + ((int)ppbVar44 - iVar17)));
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar25 = (byte)unaff_EBX;
    cVar5 = bVar7 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar11 = (byte *)CONCAT22(uVar27,CONCAT11(cVar5,bVar25));
    *pcVar13 = *pcVar13 + bVar6;
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    uVar15 = CONCAT31(uVar21,bVar6 + 7);
    puVar47 = (uint *)((int)ppbVar44 + -0x1faeef1);
    uVar37 = *puVar47;
    uVar1 = *puVar47 + uVar15;
    *puVar47 = uVar1 + (0xf8 < bVar6);
    puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_64);
    puVar23 = puStack_74;
    bVar7 = bVar6 + 7 + (byte)*puVar20 +
            (CARRY4(uVar37,uVar15) || CARRY4(uVar1,(uint)(0xf8 < bVar6)));
    puVar47 = (uint *)CONCAT31(uVar21,bVar7);
    bVar6 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar7;
    if (CARRY1(bVar6,bVar7)) break;
    *(byte *)puVar47 = (byte)*puVar47 + bVar7;
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar5 + pbVar11[0x76],bVar25));
    uStack_78 = uStack_64;
  }
  *(byte *)puVar47 = (byte)*puVar47 + bVar7;
  uVar22 = (undefined3)((uint)pcVar9 >> 8);
  bVar28 = (byte)aquirer | *pbVar11;
  aquirer = (uint *)CONCAT31(uVar22,bVar28);
  pcRam2b060000 = (char *)CONCAT31(uVar21,bVar7 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar7 + 0x39)) - (0xd7 < (byte)(bVar7 + 0x11));
  bVar6 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar39;
  pbVar10 = pbVar45 + 4;
  out(*(undefined4 *)pbVar45,(short)aquirer);
  bVar6 = (bVar7 + 0x37) - CARRY1(bVar6,bVar39);
  piVar18 = (int *)CONCAT31(uVar21,bVar6);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar6;
    iVar17 = CONCAT31(uVar21,bVar6 + 0x11) + 0xc77b;
    pcVar13 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + 'r');
    pcVar13[0x28] = pcVar13[0x28] + bVar33;
code_r0x00404b89:
    cVar4 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar4;
    *pcVar13 = *pcVar13 + cVar4;
    *pcVar13 = *pcVar13 + cVar4;
    puVar14 = (ushort *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar4 + 'r');
    uVar8 = (ushort)puVar14 | *puVar14;
    pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*(undefined4 *)pbVar10,(short)aquirer);
    *pcVar13 = *pcVar13 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar18 = (char)*piVar18 + bVar6;
  pbVar30 = (byte *)((int)ppbVar44 - *(int *)((int)puVar46 + 0x21));
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pcVar13 = (char *)CONCAT31(uVar22,bVar28 | *pbVar11);
  puVar46 = (uint *)(pbVar45 + 8);
  out(*(undefined4 *)pbVar10,(short)pcVar13);
  uVar37 = *puVar20;
  *pcVar13 = *pcVar13 + cVar4;
  uVar37 = CONCAT31(uVar21,bVar6 & (byte)uVar37) | 0x767b02;
  *(byte *)((int)puVar20 + (int)pcVar13) = *(byte *)((int)puVar20 + (int)pcVar13) + (char)uVar37;
  iVar17 = uVar37 + 0xc67b;
  cVar40 = (char)iVar17;
  uVar21 = (undefined3)((uint)iVar17 >> 8);
  cVar32 = cVar40 + 'r';
  pcVar13 = (char *)CONCAT31(uVar21,cVar32);
  pcVar13[0x28] = pcVar13[0x28] + bVar33;
  *pcVar13 = *pcVar13 + cVar32;
  uVar26 = (undefined2)((uint)puVar20 >> 0x10);
  bVar39 = bVar39 | *(byte *)((int)puStack_74 + -0x5e);
  puVar38 = (uint *)CONCAT22(uVar26,CONCAT11(bVar39,cVar4));
  *pcVar13 = *pcVar13 + cVar32;
  puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_78);
  pbVar10 = (byte *)CONCAT22(uVar27,CONCAT11(cVar5 + pbVar11[0x76],bVar25));
  *pcVar13 = *pcVar13 + cVar32;
  puVar47 = (uint *)CONCAT31(uVar21,cVar40 + -0x1c);
  pcVar13 = (char *)((uint)puVar47 | *puVar47);
  bVar48 = (POPCOUNT((uint)pcVar13 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar13;
  puVar47 = puStack_74;
  pbVar11 = pbVar10;
  pbVar36 = pbVar30;
  puVar20 = puVar23;
  uVar27 = uStack_78;
  if (!bVar48) goto code_r0x00404ca8;
  *pcVar13 = *pcVar13 + cRam02060000;
  puVar47 = (uint *)CONCAT31((int3)((uint)pcVar13 >> 8),cRam02060000 + 'r');
  *puVar47 = *puVar47 & (uint)puVar38;
  *(char *)((int)puVar47 + 0x11) = *(char *)((int)puVar47 + 0x11) + (char)((ushort)uStack_78 >> 8);
  iVar17 = (int)puVar47 + 0xc77b;
  uVar21 = (undefined3)((uint)iVar17 >> 8);
  cRam02060000 = (char)iVar17 + '\t';
  pbVar11 = (byte *)CONCAT31(uVar21,cRam02060000);
  out(*puVar46,uStack_78);
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar20 = (uint *)CONCAT22(uVar26,CONCAT11(bVar39 | *pbVar11,cVar4));
  *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
  *(byte *)puStack_74 = (byte)*puStack_74 + cVar4;
  out(*(undefined4 *)(pbVar45 + 0xc),uStack_78);
  puVar29 = puStack_74;
  puVar46 = (uint *)(pbVar45 + 0x10);
  uVar27 = uStack_78;
  if ((POPCOUNT((byte)*puStack_74) & 1U) != 0) goto code_r0x00404cca;
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar14 = (ushort *)CONCAT31(uVar21,(char)iVar17 + '{');
  uVar8 = (ushort)puVar14 | *puVar14;
  pcVar13 = (char *)CONCAT22((short)((uint)iVar17 >> 0x10),uVar8);
  bVar6 = (byte)uVar8;
  out(*(uint *)(pbVar45 + 0x10),uStack_78);
  pbVar11 = (byte *)((int)puVar20 + 1);
  bRam11060000 = bVar6;
  *pcVar13 = *pcVar13 + bVar6;
  puVar38 = (uint *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                             CONCAT11((byte)((uint)pbVar11 >> 8) | bRam110cde91,(char)pbVar11));
  pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar6 - 7);
  *puVar23 = (uint)(pcVar13 + (uint)(bVar6 < 7) + *puVar23);
  puVar46 = (uint *)(pbVar45 + 0x18);
  out(*(undefined4 *)(pbVar45 + 0x14),uStack_78);
  puVar47 = (uint *)((int)puStack_74 + 1);
  *pcVar13 = *pcVar13 + (bVar6 - 7);
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar25 | (byte)(uVar8 >> 8));
  do {
    bVar6 = (char)pcVar13 - *pcVar13;
    uVar37 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + bVar6;
    cVar4 = bVar6 - CARRY1((byte)uVar37,bVar6);
    *(byte *)puVar47 = *(byte *)puVar47 + cVar4;
    cVar5 = (char)((uint)puVar38 >> 8);
    *(byte *)(puVar23 + 0x673b40) = (byte)puVar23[0x673b40] + cVar5;
    puVar19 = (uint *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar4);
    *(byte *)puVar19 = (byte)*puVar19 + cVar4;
    *(byte *)puVar47 = *(byte *)puVar47 + cVar4;
    *(byte **)(pbVar11 + 0x58) = (byte *)(*(int *)(pbVar11 + 0x58) + (int)puVar46);
    puVar20 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar38 >> 0x10),
                                               CONCAT11(cVar5 + (char)((uint)pcVar13 >> 8),
                                                        (char)puVar38)) >> 8),
                               (char)puVar38 + *(char *)((int)puVar19 * 2));
    *(byte *)puVar19 = (byte)*puVar19 + cVar4;
    *(byte *)puVar46 = (byte)*puVar46 + (char)pbVar11;
    puVar29 = puVar47;
    pbVar10 = pbVar11;
_ctor:
    bVar7 = (byte)((uint)puVar20 >> 8);
    uVar37 = *puVar19;
    bVar6 = (byte)puVar20;
    puVar19 = (uint *)((int)puVar19 + (uint)CARRY1(bVar7,(byte)*puVar19) + *puVar19);
    *(byte *)puVar29 = *(byte *)puVar29 + bVar6;
    cVar4 = bVar6 - *(byte *)((int)puVar29 + 3);
    puVar38 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar20 >> 0x10),
                                               CONCAT11(bVar7 + (byte)uVar37,bVar6)) >> 8),cVar4);
    if ((POPCOUNT(cVar4) & 1U) != 0) {
      if (*(byte *)((int)puVar29 + 3) <= bVar6) {
        *puVar19 = (uint)(*puVar19 + (int)puVar19);
        puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),(byte)puVar29 | *pbVar10);
        puVar19 = puVar19 + 0x230e;
        puVar20 = puVar38;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    cVar4 = (char)puVar19 + '\x02';
    pcVar13 = (char *)CONCAT31((int3)((uint)puVar19 >> 8),cVar4);
    bVar48 = (POPCOUNT(cVar4) & 1U) == 0;
    puVar47 = puVar29;
    pbVar11 = pbVar10;
    pbVar36 = pbVar30;
    puVar20 = puVar23;
    uVar27 = puStack_68._0_2_;
code_r0x00404ca8:
    puStack_68._0_2_ = uVar27;
    pcVar9 = pcStack_44;
    puVar29 = (uint *)pbStack_4c;
    pbVar10 = pbStack_50;
    pbVar30 = pbStack_58;
    puVar23 = puStack_60;
    if (bVar48) break;
    *(byte *)puVar47 = *(byte *)puVar47 + (char)puVar38;
    pbVar30 = pbVar36;
    puVar23 = puVar20;
  } while( true );
  *pcVar13 = *pcVar13 + (char)pcVar13;
  bVar6 = (byte)pcStack_44;
  *pcStack_44 = *pcStack_44 + bVar6;
  puVar20 = (uint *)CONCAT22((short)((uint)puStack_48 >> 0x10),
                             CONCAT11((byte)((uint)puStack_48 >> 8) | *pbStack_4c,(char)puStack_48))
  ;
  *pbStack_50 = *pbStack_50 + (char)pbStack_50;
  pbVar45 = (byte *)((int)pcVar9 * 2);
  *pbVar45 = *pbVar45 ^ bVar6;
  uVar3 = *(undefined6 *)pcVar9;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar11 = (byte *)uVar3;
  bVar7 = (byte)uVar3;
  *pbVar11 = *pbVar11 + bVar7;
  bVar6 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar7;
  puVar46 = (uint *)((int)puVar20 + 0x11673);
  uVar37 = *puVar46;
  uVar1 = *puVar46;
  *puVar46 = (uint)((byte *)((int)puVar29 + uVar1) + CARRY1(bVar6,bVar7));
  puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,puStack_68._0_2_);
  pbVar11 = pbVar11 + (uint)(CARRY4(uVar37,(uint)puVar29) ||
                            CARRY4((int)puVar29 + uVar1,(uint)CARRY1(bVar6,bVar7))) +
                      *(int *)((int)puVar20 + (int)puVar29);
  puVar46 = puStack_5c;
  uVar27 = puStack_68._0_2_;
code_r0x00404cca:
  puStack_68._0_2_ = uVar27;
  cVar4 = (char)pbVar11 + '\x04';
  puVar19 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar4);
  if (SCARRY1((char)pbVar11,'\x04') == cVar4 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
  puVar47 = puVar46 + 1;
  out(*puVar46,(short)puVar29);
  uVar37 = *puVar20;
  bVar6 = *(byte *)puVar29;
  bVar7 = (byte)puVar20;
  *(byte *)puVar29 = *(byte *)puVar29 + bVar7;
  iVar17 = (CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + '\x03') & uVar37) + iRam00008c38;
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar29;
  pcVar13 = (char *)(iVar17 + (uint)CARRY1(bVar6,bVar7) + 0x1246f);
  bVar6 = *(byte *)puVar29;
  uVar21 = (undefined3)((uint)puVar20 >> 8);
  puVar38 = (uint *)CONCAT31(uVar21,bVar7 | bVar6);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar13 >> 8);
  puVar19 = (uint *)(CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + *pcVar13) + 0x1fbeef2);
  uVar37 = *puVar19;
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  if (CARRY4(uVar37,(uint)puVar19)) {
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    pcVar13 = (char *)CONCAT31(uVar21,bVar7 | bVar6 | bRam00282809);
    cVar4 = (char)((uint)puVar20 >> 8);
    *pbVar10 = *pbVar10 + cVar4;
    *pcVar13 = *pcVar13 - cVar4;
    *(byte *)puVar19 = *(byte *)puVar19 + (char)puVar19;
    iVar17 = (int)pcVar13 - *(int *)pbVar10;
    puVar46 = puVar46 + 2;
    out(*puVar47,(short)puVar29);
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    puVar38 = (uint *)CONCAT22((short)((uint)iVar17 >> 0x10),
                               CONCAT11((byte)((uint)iVar17 >> 8) | bRambf73070b,(char)iVar17));
code_r0x00404d15:
    uVar37 = *puVar19;
    bVar6 = (byte)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + bVar6;
    puVar47 = puVar46 + 1;
    out(*puVar46,(short)puVar29);
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    bVar7 = bVar6 + in_AF * '\x06';
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),
                               bVar7 + (0x90 < (bVar7 & 0xf0) |
                                       CARRY1((byte)uVar37,bVar6) | in_AF * (0xf9 < bVar7)) * '`');
  }
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  bVar7 = (byte)puVar19 | (byte)*puVar23;
  puVar46 = puVar47 + 1;
  uVar26 = SUB42(puVar29,0);
  out(*puVar47,uVar26);
  *(byte *)puVar38 = (byte)*puVar38 - bVar7;
  bVar6 = *(byte *)puVar29;
  bVar39 = (byte)puVar38;
  *(byte *)puVar29 = *(byte *)puVar29 + bVar39;
  iVar17 = CONCAT31((int3)((uint)puVar19 >> 8),bVar7) + *puVar46 + (uint)CARRY1(bVar6,bVar39);
  pbVar45 = pbVar30 + -*puVar29;
  uVar21 = (undefined3)((uint)iVar17 >> 8);
  cVar4 = (char)iVar17 + (byte)*puVar46 + (pbVar30 < (byte *)*puVar29);
  puVar20 = (uint *)CONCAT31(uVar21,cVar4);
  bVar6 = (byte)((uint)puVar38 >> 8);
  *(byte *)puVar38 = (byte)*puVar38 - bVar6;
  *puVar20 = (uint)(*puVar20 + (int)puVar20);
  bVar39 = bVar39 | *(byte *)((int)puVar29 + (int)puVar20);
  uVar27 = (undefined2)((uint)puVar38 >> 0x10);
  if ((POPCOUNT(bVar39) & 1U) == 0) {
    *(byte *)puVar20 = (byte)*puVar20 + cVar4;
    pcVar13 = (char *)CONCAT31(uVar21,cVar4 + '\x12');
    *pcVar13 = *pcVar13 + bVar6;
    puVar20 = (uint *)CONCAT31(uVar21,(cVar4 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar38 >> 8),bVar39));
    bVar7 = *(byte *)puVar29;
    *(byte *)puVar29 = *(byte *)puVar29 + bVar39;
    if (!CARRY1(bVar7,bVar39)) {
      pbVar11 = (byte *)((uint)puVar20 | *puVar20);
      out(*puVar46,uVar26);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      bVar7 = *pbVar11;
      piVar18 = (int *)CONCAT22(uVar27,CONCAT11(bVar6 | bVar7,bVar39));
      iVar17 = (int)pbVar11 - *piVar18;
      *(byte *)puVar29 = *(byte *)puVar29 + bVar39;
      puVar20 = puVar47 + 3;
      out(puVar47[2],uVar26);
      uRam12060000 = (undefined1)iVar17;
      *(char *)((int)piVar18 + iVar17) = *(char *)((int)piVar18 + iVar17) - (bVar6 | bVar7);
      *(byte *)puVar29 = *(byte *)puVar29 + bVar39;
      pbVar11 = (byte *)(iVar17 + -0x120edecd);
      *(byte *)puVar20 = (byte)*puVar20 + 1;
      bVar6 = *pbVar11;
      bVar7 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar7;
      pbVar45 = pbVar45 + ((-1 - *(int *)((int)puVar23 + 0x42)) - (uint)CARRY1(bVar6,bVar7));
      *pbVar11 = *pbVar11 + bVar7;
      bVar33 = (byte)pbVar10 | (byte)((uint)pbVar11 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar11;
      bVar6 = *(byte *)puVar29;
      pcVar13 = (char *)(((uint)pbVar11 | 0x11) + 0x511072c);
      puVar46 = puVar47 + 4;
      out(*puVar20,uVar26);
      puVar29 = (uint *)((int)puVar29 + 1);
      *pcVar13 = *pcVar13 + (char)pcVar13;
      bVar7 = (byte)((uint)pcVar13 >> 8);
      pbVar10 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar10 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar10 >> 8) | bVar6,bVar33)
                                                ) >> 8),bVar33 | bVar7);
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar6 = (char)pcVar13 - *pcVar13;
      pcVar13 = (char *)CONCAT31(uVar21,bVar6);
      *pcVar13 = *pcVar13 + bVar6;
      *(int *)((int)pcVar13 * 2) = (int)(pbVar10 + *(int *)((int)pcVar13 * 2));
      *(byte *)puVar29 = *(byte *)puVar29 + bVar6;
      *pbVar45 = *pbVar45 + bVar7;
      in_AF = 9 < (bVar6 & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar21,bVar6 + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar37;
      pbVar11 = (byte *)CONCAT22((short)(uVar37 >> 0x10),CONCAT11(bVar7 + in_AF,bVar6));
      *(byte *)puVar46 = (byte)*puVar46 + bVar39;
      *pbVar11 = *pbVar11 + bVar6;
      *pbVar11 = *pbVar11 + bVar6;
      bVar48 = CARRY1(bVar6,*pbVar11);
      puVar20 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar6 + *pbVar11);
      goto code_r0x00404d9a;
    }
    *pbVar10 = *pbVar10 - (char)puVar29;
  }
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
  bVar48 = false;
  piVar18 = (int *)CONCAT22(uVar27,CONCAT11(bVar6 | *(byte *)puVar29,bVar39));
code_r0x00404d9a:
  do {
    pbVar30 = (byte *)puVar29;
    *puVar20 = (*puVar20 - (int)puVar20) - (uint)bVar48;
    bVar6 = (byte)((uint)piVar18 >> 8);
    uVar27 = (undefined2)((uint)piVar18 >> 0x10);
    bVar7 = (byte)piVar18;
    bVar39 = bVar6 + (byte)iRam00000c00;
    pbVar11 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar6,(byte)iRam00000c00));
    *pbVar30 = *pbVar30 + bVar7;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 - (byte)*puVar46);
    bVar6 = *pbVar11;
    puVar20 = (uint *)(pbVar11 + (uint)CARRY1(bVar39,*pbVar11) + *(int *)pbVar11);
    *pbVar30 = *pbVar30 + bVar7;
    cVar5 = ((bVar39 + bVar6) - *pbVar30) + (byte)*puVar20;
    pcVar13 = (char *)CONCAT22(uVar27,CONCAT11(cVar5,bVar7));
    puVar47 = puVar23 + 1;
    uVar37 = in((short)pbVar30);
    *puVar23 = uVar37;
    cVar4 = (char)puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + cVar4;
    uVar21 = (undefined3)((uint)pbVar30 >> 8);
    bVar39 = (byte)pbVar30 | (byte)*puVar46;
    pcVar9 = (char *)CONCAT31(uVar21,bVar39);
    *pcVar13 = *pcVar13 + '\x01';
    bVar6 = (cVar5 - *pcVar9) + (byte)*puVar20;
    pcVar13 = (char *)CONCAT22(uVar27,CONCAT11(bVar6,bVar7));
    puVar23 = puVar23 + 2;
    uVar37 = in((short)pcVar9);
    *puVar47 = uVar37;
    *(byte *)puVar20 = (byte)*puVar20 + cVar4;
    bVar39 = bVar39 | (byte)*puVar46;
    puVar29 = (uint *)CONCAT31(uVar21,bVar39);
    *pcVar13 = *pcVar13 + '\x01';
    bVar48 = bVar7 < *(byte *)((int)puVar29 + 2);
    cVar5 = bVar7 - *(byte *)((int)puVar29 + 2);
    piVar18 = (int *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar5);
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  *(byte *)puVar20 = (byte)*puVar20 + cVar4;
  bVar7 = cVar4 + 0x7b;
  pbVar11 = (byte *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7);
  pbVar10[(int)pbVar11] = pbVar10[(int)pbVar11] + bVar7;
  puVar47 = puVar46 + 1;
  uVar26 = SUB42(puVar29,0);
  out(*puVar46,uVar26);
  pbVar36 = pbVar10 + -1;
  *pbVar11 = *pbVar11 + bVar7;
  bVar6 = bVar6 | *(byte *)puVar29;
  piVar18 = (int *)CONCAT22(uVar27,CONCAT11(bVar6,cVar5));
  *pbVar11 = *pbVar11 + bVar7;
  *pbVar36 = *pbVar36 + bVar39;
  *pbVar36 = *pbVar36 ^ bVar7;
  *(byte *)puVar29 = *(byte *)puVar29 + bVar6;
  *pbVar11 = *pbVar11 + bVar7;
  do {
    bVar25 = (byte)((uint)piVar18 >> 8);
    *(byte *)puVar23 = (byte)*puVar23 + bVar25;
    bVar6 = *pbVar11;
    bVar7 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar7;
    *(byte **)(pbVar10 + 0x17) =
         (byte *)((int)puVar47 + (uint)CARRY1(bVar6,bVar7) + *(int *)(pbVar10 + 0x17));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar22 = (undefined3)((uint)pbVar11 >> 8);
    bVar7 = bVar7 | (byte)*puVar47;
    puVar23 = (uint *)((int)puVar23 + *(int *)(pbVar45 + -0x34));
    *(char *)CONCAT31(uVar22,bVar7) = *(char *)CONCAT31(uVar22,bVar7) + bVar7;
    bVar6 = bVar7 + 2;
    cVar4 = (char)((uint)pbVar30 >> 8);
    bVar33 = (byte)piVar18;
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      pbVar11 = (byte *)CONCAT31(uVar22,bVar7 + 0x15 + (0xfd < bVar7));
      if (0xec < bVar6 || CARRY1(bVar7 + 0x15,0xfd < bVar7)) {
        *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      }
code_r0x00404e60:
      pbVar45 = pbVar45 + -*puVar29;
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      pbVar10 = (byte *)((int)puVar47 + (-(uint)CARRY1(bVar6,(byte)pbVar11) - *(int *)pbVar11));
      pbVar11 = pbVar11 + *(int *)pbVar11;
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_DS);
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      *(char *)piVar18 = (char)*piVar18 + cVar4;
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      *(byte **)(pbVar36 + (int)puVar29) =
           (byte *)((int)puVar29 +
                   (uint)CARRY1(bVar6,(byte)pbVar11) + *(int *)(pbVar36 + (int)puVar29));
      pbVar11 = pbVar11 + 0x73061314;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      uVar22 = (undefined3)((uint)piVar18 >> 8);
      bVar33 = bVar33 | *(byte *)puVar29;
      pcVar9 = (char *)CONCAT31(uVar22,bVar33);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      cVar4 = (char)pbVar11 + 'o';
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar4);
      *pcVar13 = *pcVar13 + cVar4;
      out(*(undefined4 *)pbVar10,uVar26);
      bVar6 = *(byte *)puVar29;
      *(byte *)puVar29 = *(byte *)puVar29 + bVar33;
      pcVar13 = pcVar13 + (uint)CARRY1(bVar6,bVar33) + *puVar23;
      *pcVar13 = *pcVar13 + (char)pcVar13;
      *pcVar9 = *pcVar9 + bVar39;
      puVar47 = (uint *)(pbVar10 + 8);
      out(*(undefined4 *)(pbVar10 + 4),uVar26);
      *(byte *)puVar29 = *(byte *)puVar29 + bVar33;
      piVar18 = (int *)((uint)pcVar13 | *puVar23);
      pcVar9[0x390a0000] = pcVar9[0x390a0000] - bVar25;
      pbVar11 = (byte *)&cRam07000000;
      *(byte *)puVar23 = (byte)*puVar23 - bVar25;
      *piVar18 = *piVar18 + (int)piVar18;
      puVar46 = (uint *)CONCAT31(uVar22,bVar33 | *(byte *)((int)piVar18 + (int)pcVar9));
      *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) - bVar25;
      cRam07000000 = cRam07000000 + bVar25;
      piVar18 = (int *)((uint)piVar18 | 0x777b02);
      pbVar10 = (byte *)((int)puVar23 + (int)pbVar45 * 2);
      bVar48 = SCARRY1(*pbVar10,(char)piVar18);
      *pbVar10 = *pbVar10 + (char)piVar18;
      bVar6 = *pbVar10;
      *(char *)piVar18 = (char)*piVar18;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
    bVar7 = bVar7 + 0x71;
    pbVar11 = (byte *)CONCAT31(uVar22,bVar7);
    *pbVar11 = *pbVar11;
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    *piVar18 = (*piVar18 - (int)pbVar11) - (uint)(0x90 < bVar6);
    uVar37 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar7;
    if (!CARRY1((byte)uVar37,bVar7)) goto code_r0x00404e60;
    *pbVar11 = *pbVar11 + bVar7;
    uVar27 = (undefined2)((uint)piVar18 >> 0x10);
    bVar25 = bVar25 | *pbVar11;
    pbVar11 = pbVar11 + -*(int *)pbVar11;
    *pbVar36 = *pbVar36 + bVar25;
    cVar5 = bVar33 - *(byte *)((int)puVar29 + 2);
    piVar18 = (int *)CONCAT31((int3)(CONCAT22(uVar27,CONCAT11(bVar25,bVar33)) >> 8),cVar5);
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  cVar32 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar32;
  uVar22 = (undefined3)((uint)pbVar11 >> 8);
  pcVar13 = (char *)CONCAT31(uVar22,cVar32 + '{');
  out(*puVar47,uVar26);
  *pcVar13 = *pcVar13 + cVar32 + '{';
  bVar7 = cVar32 + 0x7e;
  pbVar30 = (byte *)CONCAT31(uVar22,bVar7);
  puVar47 = puVar46 + 3;
  out(puVar46[2],uVar26);
  pbVar11 = pbVar10 + -2;
  *pbVar30 = *pbVar30 + bVar7;
  bVar6 = *(byte *)puVar29;
  puVar46 = (uint *)CONCAT22(uVar27,CONCAT11(bVar25 | bVar6,cVar5));
  *pbVar30 = *pbVar30 + bVar7;
  *pbVar11 = *pbVar11 + bVar39;
  *pbVar11 = *pbVar11 ^ bVar7;
  *(byte *)puVar29 = *(byte *)puVar29 + (bVar25 | bVar6);
  *pbVar30 = *pbVar30 + bVar7;
  *pbVar30 = *pbVar30 + cVar4;
  bVar6 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar7;
  *(byte **)(pbVar10 + 0x18) =
       (byte *)((int)puVar47 + (uint)CARRY1(bVar6,bVar7) + *(int *)(pbVar10 + 0x18));
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  bVar7 = bVar7 | (byte)*puVar47;
  puVar23 = (uint *)((int)puVar23 + *(int *)(pbVar45 + -0x33));
  *(char *)CONCAT31(uVar22,bVar7) = *(char *)CONCAT31(uVar22,bVar7) + bVar7;
  bVar48 = SCARRY1(bVar7,'\x02');
  bVar6 = bVar7 + 2;
  piVar18 = (int *)CONCAT31(uVar22,bVar6);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar6;
    return CONCAT31(uVar22,bVar7 + 0x71);
  }
code_r0x00404ebf:
  bVar7 = (byte)piVar18;
  uVar22 = (undefined3)((uint)piVar18 >> 8);
  if (bVar6 != 0 && bVar48 == (char)bVar6 < '\0') {
    *(byte *)piVar18 = (char)*piVar18 + bVar7;
    puVar47[(int)puVar23 * 2] =
         (uint)((int)puVar29 + (uint)(0xd2 < bVar7) + puVar47[(int)puVar23 * 2]);
    return CONCAT31(uVar22,bVar7 + 0x2d);
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar6 = *pbVar11;
  *puVar47 = (uint)(*puVar47 + (int)piVar18);
  bVar33 = (byte)((uint)puVar46 >> 8);
  *(byte *)piVar18 = (char)*piVar18 - bVar33;
  *(byte *)piVar18 = (char)*piVar18 + bVar7;
  pbVar10 = (byte *)(CONCAT31(uVar21,bVar39 | bVar6) - *(int *)pbVar11);
  puVar38 = (uint *)CONCAT31(uVar22,bVar7 + 6);
  *(uint *)(pbVar11 + (int)puVar47 * 2) =
       (int)puVar38 + (uint)(0xf9 < bVar7) + *(int *)(pbVar11 + (int)puVar47 * 2);
  *(byte *)puVar46 = (byte)*puVar46 ^ bVar7 + 6;
  bVar7 = (byte)puVar46;
  *pbVar10 = *pbVar10 + bVar7;
  puVar20 = puVar47 + 1;
  uVar27 = SUB42(pbVar10,0);
  out(*puVar47,uVar27);
  *puVar46 = *puVar46 ^ (uint)puVar38;
  *pbVar10 = *pbVar10 + bVar7;
  puVar29 = (uint *)(pbVar11 + -*(int *)pbVar11);
  *(uint *)((int)puVar23 + 0x31) = *(uint *)((int)puVar23 + 0x31) | (uint)pbVar45;
  *puVar38 = *puVar38 + (int)puVar38;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar33 | (byte)*puVar29,bVar7))
  ;
  *(byte **)(pbVar10 + 0x6e) = (byte *)(*(int *)(pbVar10 + 0x6e) + (int)puVar20);
  piVar18 = (int *)((uint)puVar38 | *puVar38);
  bVar39 = (byte)puVar29;
  *(byte *)puVar23 = (byte)*puVar23 - bVar39;
  bVar6 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar7;
  if (CARRY1(bVar6,bVar7)) {
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar6 = pbVar10[0x11];
    uVar26 = (undefined2)((uint)puVar29 >> 0x10);
    out(*puVar20,uVar27);
    puVar46 = (uint *)((int)puVar46 + 1);
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    bVar28 = (byte)((uint)puVar29 >> 8) | bVar6 | *pbVar10;
    pcVar13 = (char *)((int)piVar18 + -0x21000001);
    bVar6 = (byte)pcVar13 | 0x11;
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    cVar4 = bVar6 - 7;
    pcVar9 = (char *)CONCAT31(uVar21,cVar4);
    *puVar23 = (uint)(pcVar9 + (uint)(bVar6 < 7) + *puVar23);
    puVar20 = puVar47 + 3;
    out(puVar47[2],uVar27);
    pbVar10 = pbVar10 + 1;
    *pcVar9 = *pcVar9 + cVar4;
    bVar33 = (byte)((uint)pcVar13 >> 8);
    bVar25 = bVar39 | bVar33;
    bVar7 = cVar4 - *pcVar9;
    bVar6 = *(byte *)puVar46;
    *(byte *)puVar46 = *(byte *)puVar46 + bVar7;
    *(char *)CONCAT31(uVar21,bVar7) = *(char *)CONCAT31(uVar21,bVar7) + bVar7 + CARRY1(bVar6,bVar7);
    *pbVar10 = *pbVar10 + bVar7;
    *(byte *)puVar20 = (byte)*puVar20 + bVar25;
    bVar6 = (byte)((uint)pbVar10 >> 8);
    *(byte *)puVar46 = *(byte *)puVar46 + bVar7 + CARRY1((byte)pbVar10,bVar6);
    piVar18 = (int *)CONCAT31(uVar21,bVar7);
    *(byte *)piVar18 = (char)*piVar18 + bVar7;
    pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11(bVar6 + bVar33,(byte)pbVar10 + bVar6));
    puVar29 = (uint *)CONCAT22(uVar26,CONCAT11(bVar28 + *(char *)(CONCAT31((int3)(CONCAT22(uVar26,
                                                  CONCAT11(bVar28,bVar39)) >> 8),bVar25) + 0x76),
                                               bVar25));
    puStack_68._0_2_ = puStack_74._0_2_;
code_r0x00404fa4:
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    pcVar13 = (char *)(CONCAT31((int3)((uint)piVar18 >> 8),(char)piVar18 + '(') ^ *puVar46);
    cVar32 = (char)puVar46;
    *pbVar10 = *pbVar10 + cVar32;
    uVar27 = (undefined2)((uint)puVar29 >> 0x10);
    cVar35 = (char)puVar29;
    cVar41 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x75);
    *pcVar13 = *pcVar13 + (char)pcVar13;
    cVar4 = (char)pcVar13 + 'o';
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar4);
    *pcVar13 = *pcVar13 + cVar4;
    cVar40 = (char)((uint)puVar46 >> 8);
    *pbVar45 = *pbVar45 - cVar40;
    pbVar10[1] = pbVar10[1] + cVar32;
    pcVar13 = pcVar13 + -0x757b021b;
    cVar4 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar4;
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    cVar5 = cVar4 + 'o';
    pcVar13 = (char *)CONCAT31(uVar21,cVar5);
    pbVar30 = pbVar10 + 2;
    *pcVar13 = *pcVar13 + cVar5;
    iVar17 = CONCAT22(uVar27,CONCAT11(cVar41 + *(char *)(CONCAT22(uVar27,CONCAT11(cVar41,cVar35)) +
                                                        0x76),cVar35));
    *pcVar13 = *pcVar13 + cVar5;
    pcVar13 = (char *)CONCAT31(uVar21,cVar4 + -0x22);
    puVar47 = (uint *)((int)puVar23 + 1);
    *(byte *)puVar23 = (byte)*puVar20;
    *pcVar13 = *pcVar13 + cVar4 + -0x22;
    *(byte *)((int)puVar46 + (int)pcVar13) =
         *(byte *)((int)puVar46 + (int)pcVar13) - (char)((uint)pbVar30 >> 8);
    *pbVar30 = *pbVar30 + cVar32;
    bVar7 = cVar40 - pbVar10[4];
    pbVar11 = (byte *)((int)puVar20 + 5);
    out(*(undefined4 *)((int)puVar20 + 1),(short)pbVar30);
    puVar23 = (uint *)((uint)(pcVar13 + *(int *)(pcVar13 + iVar17)) ^ 0x280a0001);
    *(byte *)puVar23 = (byte)*puVar23 << 1 | (char)(byte)*puVar23 < '\0';
    *pbVar11 = *pbVar11 + (char)puVar23;
    pbVar11 = pbVar11 + *(int *)(pbVar10 + -0x5c);
    pbVar10 = (byte *)((uint)puVar23 | *puVar23);
    *pbVar11 = *pbVar11 + (char)pbVar10;
    puVar29 = (uint *)CONCAT31((int3)((uint)iVar17 >> 8),cVar35 - (char)pbVar30);
    bVar6 = *pbVar10;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar7 + *pbVar10,cVar32));
    iVar17 = *(int *)pbVar10;
    *pbVar30 = *pbVar30 + cVar32;
    cVar4 = (char)(pbVar10 + (uint)CARRY1(bVar7,bVar6) + iVar17) + 'r';
    puVar23 = (uint *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar7,bVar6) + iVar17) >> 8),
                               cVar4);
    pbVar10 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),CONCAT11(10,(char)pbVar30));
    *(char *)(puVar23 + 10) = (char)puVar23[10] + '\n';
    *pbVar11 = *pbVar11 + cVar4;
    puVar20 = (uint *)(pbVar11 + *(int *)(pbVar10 + -0x5e));
    uVar37 = *puVar23;
    cVar4 = (char)((uint)puVar23 | uVar37);
    *(byte *)puVar20 = (byte)*puVar20 + cVar4;
    uVar21 = (undefined3)(((uint)puVar23 | uVar37) >> 8);
    cVar5 = cVar4 + (byte)*puVar29;
    puVar23 = (uint *)CONCAT31(uVar21,cVar5);
    if (SCARRY1(cVar4,(byte)*puVar29) == cVar5 < '\0') goto code_r0x00405090;
    *(byte *)puVar23 = (byte)*puVar23 + cVar5;
    piVar18 = (int *)CONCAT31(uVar21,cVar5 + '\x02');
    puVar23 = puVar47;
  }
  else {
    out(2,(char)piVar18);
    if ((POPCOUNT(*pbVar10) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar21 = (undefined3)((uint)piVar18 >> 8);
  cVar4 = (char)piVar18 + '}';
  pbVar11 = (byte *)CONCAT31(uVar21,cVar4);
  pbVar10[(int)pbVar11] = pbVar10[(int)pbVar11] + cVar4;
  pbVar10[0x280a0000] = pbVar10[0x280a0000] - (char)((uint)piVar18 >> 8);
  bVar6 = (byte)puVar46 & 7;
  *pbVar11 = *pbVar11 << bVar6 | *pbVar11 >> 8 - bVar6;
  *(byte *)puVar20 = (byte)*puVar20 + cVar4;
  cVar32 = (char)puVar29 - (byte)*puVar20;
  uVar27 = (undefined2)((uint)puVar29 >> 0x10);
  cVar40 = (char)((uint)puVar29 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar29 >> 8),cVar32) + 0x7c);
  pcVar13 = (char *)CONCAT22(uVar27,CONCAT11(cVar40,cVar32));
  *pbVar11 = *pbVar11 + cVar4;
  bVar7 = (char)piVar18 + 0xa7U & *pbVar10;
  puVar47 = (uint *)((int)puVar23 + *(int *)(pbVar45 + 0x7c));
  *(char *)CONCAT31(uVar21,bVar7) = *(char *)CONCAT31(uVar21,bVar7) + bVar7;
  bVar7 = bVar7 + 0x2a;
  pbVar11 = (byte *)CONCAT31(uVar21,bVar7);
  *pbVar11 = *pbVar11 + bVar7;
  *pcVar13 = *pcVar13 + cVar32;
  *pbVar10 = *pbVar10 ^ bVar7;
  *pcVar13 = *pcVar13 + bVar7;
  bVar6 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar7;
  cVar4 = (bVar7 - *pbVar11) - CARRY1(bVar6,bVar7);
  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar10;
  cVar40 = cVar40 + pcVar13[0x7b];
  *(char *)CONCAT31(uVar21,cVar4) = *(char *)CONCAT31(uVar21,cVar4) + cVar4;
  pcVar13 = (char *)CONCAT31(uVar21,cVar4 + 'o');
  *pcVar13 = *pcVar13 + cVar4 + 'o';
  pcVar13 = pcVar13 + 0x2ed7fde6;
  cVar5 = (char)pcVar13;
  *pcVar13 = *pcVar13 + cVar5;
  cVar4 = *(char *)(CONCAT22(uVar27,CONCAT11(cVar40,cVar32)) + 0x7b);
  *pcVar13 = *pcVar13 + cVar5;
  piVar18 = (int *)(CONCAT31((int3)((uint)pcVar13 >> 8),cVar5 + 'o') + 0x6f060000);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar22 = (undefined3)((uint)pbVar10 >> 8);
  bVar7 = (byte)pbVar10 | (byte)*puVar20;
  pbVar30 = (byte *)CONCAT31(uVar22,bVar7);
  uVar37 = CONCAT22(uVar27,CONCAT11(cVar40 + cVar4,cVar32)) | (uint)puVar20;
  uVar21 = (undefined3)((uint)piVar18 >> 8);
  bVar6 = (byte)piVar18 | *pbVar30;
  pbVar11 = (byte *)CONCAT31(uVar21,bVar6);
  cVar4 = (byte)puVar46 - bVar7;
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),cVar4);
  *pbVar11 = *pbVar11 + bVar6;
  puVar23 = puVar20 + 1;
  out(*puVar20,(short)pbVar30);
  *pbVar11 = bVar6;
  *pbVar30 = *pbVar30 + cVar4;
  puVar20 = puVar20 + 2;
  out(*puVar23,(short)pbVar30);
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  puVar29 = (uint *)(CONCAT31((int3)(uVar37 >> 8),(char)uVar37 - (char)((uint)pbVar10 >> 8)) |
                    (uint)puVar20);
  pbVar10 = (byte *)CONCAT31(uVar22,(bVar7 | (byte)*puVar20) + (byte)*puVar47);
  cVar4 = bVar6 - (byte)*puVar47;
  puVar23 = (uint *)CONCAT31(uVar21,cVar4 - *(char *)CONCAT31(uVar21,cVar4));
code_r0x00405090:
  *puVar23 = (uint)(pbVar10 + *puVar23);
  cVar4 = (char)puVar23;
  *(byte *)puVar23 = (byte)*puVar23 + cVar4;
  *(byte *)puVar23 = (byte)*puVar23 + cVar4;
  *(byte *)puVar23 = (byte)*puVar23 + cVar4;
  *puVar46 = *puVar46 - (int)pbVar45;
  uVar37 = *puVar20;
  bVar6 = (byte)pbVar10;
  *(byte *)puVar20 = (byte)*puVar20 + bVar6;
  *(byte *)puVar23 = (byte)*puVar23 + cVar4 + CARRY1((byte)uVar37,bVar6);
  *(byte *)puVar46 = (byte)*puVar46 + cVar4;
  uVar37 = *puVar29;
  *(byte *)puVar29 = (byte)*puVar29 + 0x72;
  *(byte *)puVar29 = (byte)*puVar29;
  cVar4 = (char)((uint)pbVar10 >> 8);
  if (SCARRY1((byte)uVar37,'r')) {
    puVar20 = (uint *)((int)puVar20 + *(int *)(pbVar10 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar20 = (byte)*puVar20 + (char)puVar23;
      uVar21 = (undefined3)((uint)puVar23 >> 8);
      cVar5 = (char)puVar23 + (byte)*puVar29;
      pcVar13 = (char *)CONCAT31(uVar21,cVar5);
      puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                 CONCAT11((char)((uint)puVar29 >> 8) +
                                          *(byte *)((int)puVar29 + 0x7b),(char)puVar29));
      *pcVar13 = *pcVar13 + cVar5;
      in_AF = 9 < (cVar5 + 0x6fU & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar21,cVar5 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar39 = (byte)uVar37;
      piVar18 = (int *)CONCAT22((short)(uVar37 >> 0x10),
                                CONCAT11((char)((uint)puVar23 >> 8) + in_AF,bVar39));
      *piVar18 = *piVar18 + (int)piVar18;
      uVar21 = (undefined3)((uint)piVar18 >> 8);
      bVar39 = bVar39 | *(byte *)(piVar18 + 0x354a);
      bVar39 = bVar39 - *(char *)CONCAT31(uVar21,bVar39);
      pbVar11 = (byte *)CONCAT31(uVar21,bVar39);
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar39;
      puVar20 = (uint *)((int)puVar20 + (-(uint)CARRY1(bVar7,bVar39) - *(int *)pbVar11));
      puVar23 = (uint *)(pbVar11 + 0xfc00);
      *pbVar10 = *pbVar10 + cVar4;
      uVar37 = *puVar23;
      bVar7 = (byte)puVar23;
      *(byte *)puVar23 = (byte)*puVar23 + bVar7;
      uVar15 = (uint)CARRY1((byte)uVar37,bVar7);
      uVar1 = *puVar29;
      uVar37 = *puVar29;
      *puVar29 = (uint)((byte *)(uVar37 + (int)puVar23) + uVar15);
      if (!CARRY4(uVar1,(uint)puVar23) && !CARRY4(uVar37 + (int)puVar23,uVar15)) break;
      *(byte *)puVar23 = (byte)*puVar23 + bVar7;
    }
  }
  uVar37 = (uint)puVar23 | *puVar23;
  uVar27 = SUB42(pbVar10,0);
  *(byte *)puVar20 = (byte)*puVar20 + (char)uVar37;
  piVar18 = (int *)(uVar37 + 0xc1872);
  if (SCARRY4(uVar37,0xc1872)) {
    cVar5 = (char)piVar18;
    *(char *)piVar18 = *(char *)piVar18 + cVar5;
    *pbVar10 = *pbVar10 + cVar5;
    *(char *)piVar18 = *(char *)piVar18 + cVar5;
    *(byte *)puVar29 = (byte)*puVar29 + (char)puVar46;
    *(char *)piVar18 = *(char *)piVar18 + cVar5;
    *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) + bVar6;
    puVar23 = puVar20;
    goto code_r0x00405117;
  }
  do {
    uVar37 = *puVar20;
    bVar6 = (byte)piVar18;
    *(byte *)puVar20 = (byte)*puVar20 + bVar6;
    if (CARRY1((byte)uVar37,bVar6)) {
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      uVar21 = (undefined3)((uint)puVar46 >> 8);
      bVar7 = (byte)puVar46 | bRam396f1609;
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      puVar46 = (uint *)CONCAT31(uVar21,bVar7 | *(byte *)CONCAT31(uVar21,bVar7));
      uVar21 = (undefined3)((uint)piVar18 >> 8);
      bVar6 = bVar6 | *pbVar10;
      pcVar13 = (char *)CONCAT31(uVar21,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        puVar23 = puVar20 + 1;
        out(*puVar20,uVar27);
        uVar37 = CONCAT22((short)((uint)piVar18 >> 0x10),(ushort)bVar6);
        *(byte *)puVar23 = (byte)*puVar23 + bVar6;
        pcVar13 = (char *)(uVar37 | 8);
        cVar5 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x7a);
        puVar38 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(cVar5,(char)puVar29));
        *pcVar13 = *pcVar13 + (char)pcVar13;
        cVar4 = (char)pcVar13 + 'o';
        piVar18 = (int *)CONCAT31((int3)(uVar37 >> 8),cVar4);
        *(char *)piVar18 = (char)*piVar18 + cVar4;
        *(byte *)puVar46 = (byte)*puVar46 + 1;
        puVar20 = puVar20 + 2;
        out(*puVar23,uVar27);
        pbVar10 = (byte *)((uint)pbVar10 ^ uRam08122c04);
        iVar17 = CONCAT31((int3)((uint)(*piVar18 * 0x17070600) >> 8),2);
        *(char *)(iVar17 * 2) = *(char *)(iVar17 * 2) - cVar5;
        do {
          bVar6 = (byte)iVar17;
          *(byte *)puVar20 = (byte)*puVar20 + bVar6;
          bVar48 = CARRY1(bVar6,(byte)*puVar38);
          uVar21 = (undefined3)((uint)iVar17 >> 8);
          cVar4 = bVar6 + (byte)*puVar38;
          pbVar11 = (byte *)CONCAT31(uVar21,cVar4);
          uVar27 = in_DS;
          uVar26 = uStack_b4;
          if (SCARRY1(bVar6,(byte)*puVar38) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar11 = *pbVar11 + cVar4;
          uVar37 = CONCAT31(uVar21,cVar4 + '\'') + 0x1ebd9f3;
          uStack_b8 = (undefined1)puStack_68._0_2_;
          uStack_b7 = (undefined1)((ushort)puStack_68._0_2_ >> 8);
          piVar18 = (int *)(uVar37 ^ 0x73060000);
          puVar46 = (uint *)((int)puVar46 + 1);
          *piVar18 = (int)(*piVar18 + (int)piVar18);
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11((byte)((uint)puVar38 >> 8) | pbVar45[0x7e],
                                              (char)puVar38));
          cVar4 = (char)uVar37;
          *(char *)piVar18 = (char)*piVar18 + cVar4;
          uVar37 = CONCAT31((int3)((uint)piVar18 >> 8),cVar4 + '\x02');
          bVar48 = 0xd9f2d2da < uVar37;
          iVar17 = uVar37 + 0x260d2d25;
          pbVar30 = pbVar45;
          do {
            uVar21 = (undefined3)((uint)iVar17 >> 8);
            bVar7 = (char)iVar17 + -2 + bVar48;
            pbVar45 = (byte *)CONCAT31(uVar21,bVar7);
            bVar6 = *pbVar45;
            *pbVar45 = *pbVar45 + bVar7;
            bVar39 = (byte)puVar38;
            uStack_b4 = puStack_68._0_2_;
            if (CARRY1(bVar6,bVar7)) {
              *pbVar45 = *pbVar45 + bVar7;
              puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                         CONCAT11((byte)((uint)puVar38 >> 8) | pbVar30[0x7f],bVar39)
                                        );
              *pbVar45 = *pbVar45 + bVar7;
              pbVar11 = (byte *)CONCAT31(uVar21,bVar7 + 0x2a);
              *pbVar11 = *pbVar11 + bVar7 + 0x2a;
              *(byte *)puVar38 = (byte)*puVar38 + (char)pbVar10;
              uVar27 = in_DS;
              while( true ) {
                in_DS = uVar27;
                bVar7 = (byte)pbVar11;
                *pbVar10 = *pbVar10 ^ bVar7;
                *pbVar10 = *pbVar10 + (char)puVar38;
                *pbVar11 = *pbVar11 + bVar7;
                *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pbVar10 >> 8);
                bVar6 = *pbVar11;
                *pbVar11 = *pbVar11 + bVar7;
                uVar37 = *puVar38;
                uVar1 = *puVar38;
                *puVar38 = (uint)(pbVar11 + uVar1 + CARRY1(bVar6,bVar7));
                uVar21 = (undefined3)((uint)pbVar11 >> 8);
                if (CARRY4(uVar37,(uint)pbVar11) ||
                    CARRY4((uint)(pbVar11 + uVar1),(uint)CARRY1(bVar6,bVar7))) break;
                *(byte *)puVar20 = (byte)*puVar20 + bVar7;
                pcVar13 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                           CONCAT11((char)((uint)puVar46 >> 8) + *pbVar11,
                                                    (char)puVar46));
                *(byte *)puVar20 = (byte)*puVar20 + bVar7;
                piVar18 = (int *)CONCAT31(uVar21,bVar7 | (byte)*puVar38);
                puVar46 = puVar20;
                while( true ) {
                  puVar20 = puVar46 + 1;
                  out(*puVar46,(short)pbVar10);
                  pbVar10 = pbVar10 + 1;
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  bVar39 = (byte)((uint)pcVar13 >> 8) | *pbVar10;
                  uVar21 = (undefined3)((uint)piVar18 >> 8);
                  bVar7 = (byte)piVar18 ^ *pbVar10;
                  pcVar9 = (char *)CONCAT31(uVar21,bVar7);
                  cRam282b0000 = cRam282b0000 - bVar39;
                  *pcVar9 = *pcVar9 + bVar7;
                  pbVar45 = pbVar30 + -*(int *)pbVar10;
                  uStack_b8 = (undefined1)in_DS;
                  uStack_b7 = (undefined1)((ushort)in_DS >> 8);
                  bVar6 = *(byte *)((int)puVar47 + 0x17);
                  *pcVar9 = *pcVar9 + bVar7;
                  puVar46 = (uint *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                             CONCAT11(bVar39 + bVar6 | *pbVar10,(char)pcVar13));
                  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
                  *(byte *)((int)pcVar9 * 2) = *(byte *)((int)pcVar9 * 2) ^ bVar7;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  bVar7 = bVar7 + in_AF * -6;
                  pbVar11 = (byte *)CONCAT31(uVar21,bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
                  *(char *)((int)pbVar11 * 2) =
                       *(char *)((int)pbVar11 * 2) + (char)((uint)pbVar10 >> 8);
                  bVar48 = CARRY1((byte)*puVar46,(byte)pbVar10);
                  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar10;
                  uVar27 = in_DS;
                  uVar26 = puStack_68._0_2_;
GenerateStatusText:
                  in_DS = uVar26;
                  pbVar30 = pbVar45;
                  uStack_b4 = in_DS;
                  if (!bVar48) break;
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  iVar17 = CONCAT31((int3)((uint)puVar46 >> 8),(byte)puVar46 | *pbVar10);
                  uVar27 = (undefined2)((uint)puVar38 >> 0x10);
                  cVar32 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x7d);
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  *(byte *)puVar47 = (byte)*puVar47 - (char)((uint)puVar46 >> 8);
                  iVar17 = iVar17 - *(int *)(&uRam0b0a0000 + iVar17);
                  cVar4 = *(char *)(CONCAT22(uVar27,CONCAT11(cVar32,(char)puVar38)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar20,(short)pbVar10);
                  pbVar10 = (byte *)CONCAT22(uStack_b6,CONCAT11(uStack_b7,uStack_b8));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar46 = puVar20 + 2;
                  out(puVar20[1],CONCAT11(uStack_b7,uStack_b8));
                  pbVar30 = pbVar45 + 1;
                  cVar5 = (char)iVar17;
                  pcVar13 = (char *)CONCAT22((short)((uint)iVar17 >> 0x10),
                                             CONCAT11((byte)((uint)iVar17 >> 8) |
                                                      *(byte *)((int)puVar47 + 0x46),cVar5));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_68._0_2_ = CONCAT11(uStack_b7,uStack_b8);
                  uVar21 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar46,0xf0)) >> 8);
                  piVar18 = (int *)CONCAT31(uVar21,0x5f);
                  puVar47 = (uint *)((int)puVar47 + 1);
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  puVar38 = (uint *)CONCAT22(uVar27,CONCAT11(cVar32 + cVar4 | (byte)puVar20[-0x1e],
                                                             (char)puVar38));
                  *(char *)piVar18 = (char)*piVar18 + '_';
                  puVar23 = (uint *)CONCAT31(uVar21,0x8c);
                  puVar46[(int)puVar47 * 2] = (uint)(pbVar10 + puVar46[(int)puVar47 * 2]);
                  uVar37 = *puVar46;
                  *(byte *)puVar46 = (byte)*puVar46 + 0x8c;
                  if ((byte)uVar37 < 0x74) {
                    *pbVar10 = *pbVar10 + cVar5;
                    *(byte *)puVar38 = (byte)*puVar38 >> 1;
                    *(char *)puVar23 = (char)*puVar23 + -0x74;
                    *puVar23 = (uint)(pbVar30 + *puVar23);
                    *puVar23 = *puVar23 << 1 | (uint)((int)*puVar23 < 0);
                    *pbVar10 = *pbVar10 + cVar5;
                    pbVar45[2] = pbVar45[2] - cVar5;
                    *pbVar10 = *pbVar10 + cVar5;
                    pbVar45 = (byte *)CONCAT31(uVar21,0x83);
                    puVar23 = puVar38;
                    goto code_r0x00405312;
                  }
                  *puVar23 = (uint)(*puVar23 + (int)puVar23);
                  piVar18 = (int *)(CONCAT31(uVar21,(byte)puVar23[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar23[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar18 = (int *)((int)piVar18 + *puVar46);
                }
              }
              *pbVar10 = *pbVar10 + bVar7;
              *(byte *)puVar38 = (byte)*puVar38 - (char)pbVar10;
              *pbVar11 = *pbVar11 + bVar7;
              pbVar45 = (byte *)CONCAT31(uVar21,bVar7 | (byte)*puVar38);
            }
            else {
              cVar4 = (char)puVar46;
              *pbVar10 = *pbVar10 + cVar4;
              *(byte **)pbVar45 = pbVar10 + *(int *)pbVar45;
              *pbVar45 = *pbVar45 + bVar7;
              bVar7 = bVar7 + *pbVar45;
              pbVar45 = (byte *)CONCAT31(uVar21,bVar7);
              if (-1 < (char)bVar7) {
                *(byte *)puVar38 = (byte)*puVar38 + bVar39;
                out(*puVar20,(short)pbVar10);
                pbVar10 = pbVar10 + 1;
                *pbVar45 = *pbVar45 + bVar7;
                puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                           bVar39 | (byte)((uint)iVar17 >> 8));
                cVar5 = bVar7 - (byte)*puVar46;
                pcVar13 = (char *)CONCAT31(uVar21,cVar5);
                *pcVar13 = *pcVar13 + cVar5 + (bVar7 < (byte)*puVar46);
                *pbVar10 = *pbVar10 + cVar5;
                pcVar13 = (char *)((int)pcVar13 * 2 + 0x79);
                *pcVar13 = *pcVar13 + (char)((uint)pbVar10 >> 8);
                pbVar45 = (byte *)in((short)pbVar10);
                puVar20 = puVar20 + 1;
              }
              *(byte *)puVar20 = (byte)*puVar20 + cVar4;
              *pbVar45 = *pbVar45 + (char)pbVar45;
              *pbVar45 = *pbVar45 + (char)pbVar45;
              uStack_b8 = (undefined1)in_DS;
              uStack_b7 = (undefined1)((ushort)in_DS >> 8);
              bVar6 = *pbVar45;
              bVar33 = (byte)((uint)puVar46 >> 8);
              bVar39 = bVar33 + *pbVar45;
              iVar17 = *(int *)pbVar45;
              *pbVar10 = *pbVar10 + cVar4;
              bVar7 = (char)(pbVar45 + (uint)CARRY1(bVar33,bVar6) + iVar17) - (byte)*puVar38;
              pbVar45 = (byte *)CONCAT31((int3)((uint)(pbVar45 + (uint)CARRY1(bVar33,bVar6) + iVar17
                                                      ) >> 8),bVar7);
              *(byte *)puVar38 = (byte)*puVar38 ^ bVar7;
              *pbVar30 = *pbVar30 + (char)puVar38;
              *pbVar45 = *pbVar45 + bVar7;
              *pbVar45 = *pbVar45 + bVar7;
              *pbVar45 = *pbVar45 + bVar7;
              puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                         CONCAT11(bVar39 + *pbVar45,cVar4));
              pbVar45 = pbVar45 + (uint)CARRY1(bVar39,*pbVar45) + *(int *)pbVar45;
              *pbVar10 = *pbVar10 + cVar4;
              puVar20 = (uint *)((int)puVar20 + *(int *)(pbVar10 + 0x3e));
            }
            *(byte *)puVar20 = (byte)*puVar20 + (char)pbVar45;
            cVar4 = (char)pbVar45 + 'r';
            puVar20 = (uint *)((int)puVar20 + -1);
            uVar37 = CONCAT31((int3)((uint)pbVar45 >> 8),cVar4);
            *(byte *)puVar20 = *(byte *)puVar20 + cVar4;
            bVar48 = 0xfff38f8d < uVar37;
            iVar17 = uVar37 + 0xc7072;
            pbVar45 = pbVar30;
          } while (SCARRY4(uVar37,0xc7072));
        } while( true );
      }
      *pcVar13 = *pcVar13 + bVar6;
      bVar6 = bVar6 + 0x6f;
      pbVar11 = (byte *)CONCAT31(uVar21,bVar6);
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar6;
      uVar21 = (undefined3)
               ((uint)(pbVar11 + (uint)CARRY1(bVar7,bVar6) + *(int *)((int)puVar46 + (int)pbVar10))
               >> 8);
      cVar5 = (char)(pbVar11 + (uint)CARRY1(bVar7,bVar6) + *(int *)((int)puVar46 + (int)pbVar10)) +
              'E';
      pcVar13 = (char *)CONCAT31(uVar21,cVar5);
      *pcVar13 = *pcVar13 + cVar5;
      cVar5 = cVar5 + *pcVar13;
      pcVar13 = (char *)CONCAT31(uVar21,cVar5);
      *pcVar13 = *pcVar13 + cVar5;
      puVar23 = (uint *)CONCAT31(uVar21,cVar5 + *pcVar13);
      *(char *)puVar23 = (char)*puVar23 + cVar5 + *pcVar13;
      pbVar11 = (byte *)((uint)puVar23 | *puVar23);
      bVar6 = *pbVar11;
      bVar7 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar7;
      piVar18 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7 + CARRY1(bVar6,bVar7));
      puVar23 = puVar20;
code_r0x00405117:
      *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
      puVar29 = (uint *)((int)puVar29 - *puVar29);
      puVar20 = puVar23 + 1;
      out(*puVar23,uVar27);
    }
    *pbVar10 = *pbVar10 + (char)puVar46;
    bVar48 = puVar29 < (uint *)*piVar18;
    puVar29 = (uint *)((int)puVar29 - *piVar18);
    bVar6 = (byte)((uint)puVar46 >> 8);
    *(byte *)((int)puVar47 + 0x39) = (*(byte *)((int)puVar47 + 0x39) - bVar6) - bVar48;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    uVar37 = *puVar29;
    *(int *)((int)puVar47 + 0x39) = *(int *)((int)puVar47 + 0x39) - (int)pbVar45;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11(bVar6 | (byte)uVar37 | (byte)*puVar29,(char)puVar46));
    *(char *)(piVar18 + 10) = (char)piVar18[10] + cVar4;
  } while( true );
code_r0x004052ee:
  *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
  bVar6 = (char)piVar18 + 0x28;
  pbVar45 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),bVar6);
  *pbVar45 = *pbVar45 ^ bVar6;
  *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pcVar13 >> 8);
  bVar6 = *pbVar10;
  *pbVar10 = *pbVar10 + (byte)pcVar13;
  piVar18 = (int *)(((uint)pbVar45 | 0x1496f09) + *puVar47 + (uint)CARRY1(bVar6,(byte)pcVar13));
  puVar20 = puVar46 + 1;
  out(*puVar46,(short)pbVar10);
  pbVar11 = pbVar10 + -1;
  *piVar18 = *piVar18 + (int)piVar18;
  pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 | (byte)*puVar38);
  cVar4 = (char)piVar18 + '\x13';
  pbVar45 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),cVar4);
  puVar23 = puVar38;
  puVar46 = puVar20;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar10 = *pbVar10 - (char)((uint)pbVar11 >> 8);
    *pbVar45 = *pbVar45 + cVar4;
code_r0x00405396:
    bVar6 = *pbVar45;
    bVar7 = (byte)pbVar45;
    *pbVar45 = *pbVar45 + bVar7;
    *puVar20 = (uint)(pbVar45 + (uint)CARRY1(bVar6,bVar7) + *puVar20);
    out(*puVar20,(short)pbVar10);
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    pcVar13 = (char *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                               CONCAT11((byte)((uint)pbVar45 >> 8) | (byte)puVar20[1],bVar7));
    *(char **)((int)puVar47 + -1) = pcVar13 + *(int *)((int)puVar47 + -1);
    out(puVar20[1],(short)pbVar10);
    *pcVar13 = *pcVar13 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar45 = *pbVar45 + (char)pbVar45;
  piVar18 = (int *)CONCAT31((int3)((uint)pbVar45 >> 8),(char)pbVar45 + 'o');
  puVar38 = (uint *)((int)puVar23 + -1);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar21 = (undefined3)((uint)pbVar10 >> 8);
  piVar18 = (int *)((int)piVar18 + 0x1b7e);
  bVar39 = (byte)pbVar10 | *(byte *)puVar38 | *(byte *)puVar38;
  iRam04115f2c = iRam04115f2c + (int)piVar18;
  out(*puVar46,(short)CONCAT31(uVar21,bVar39));
  *piVar18 = *piVar18 + (int)piVar18;
  bVar39 = bVar39 | (byte)piVar18;
  iVar31 = CONCAT31(uVar21,bVar39);
  pbVar45 = (byte *)((int)piVar18 - *piVar18);
  cVar4 = (char)pbVar45;
  *pcVar13 = *pcVar13 + cVar4;
  cVar5 = (char)pcVar13 - bVar39;
  *pbVar45 = *pbVar45 + cVar4;
  uVar27 = (undefined2)((uint)pcVar13 >> 0x10);
  bVar7 = (byte)((uint)pcVar13 >> 8) | *pbVar45;
  pbVar30 = pbVar30 + -1;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  bVar6 = *(byte *)(CONCAT22(uVar27,CONCAT11(bVar7,cVar5)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar45;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar30;
  *pbVar45 = *pbVar45 + cVar4;
  bVar6 = bVar7 | bVar6 | *(byte *)puVar38;
  iVar24 = CONCAT22(uVar27,CONCAT11(bVar6,cVar5));
  pbVar11 = (byte *)((uint)(puVar46 + 1) ^ *(uint *)(iVar31 + -0x43));
  iVar17 = *(int *)pbVar45;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  if (SCARRY4(iVar17,(int)pbVar45)) {
    *pbVar45 = *pbVar45 + cVar4;
  }
  pbVar10 = pbVar45 + 0x5674;
  puVar47 = (uint *)((int)puVar47 +
                    (-(uint)((byte *)0xffffa98b < pbVar45) - *(int *)(pbVar11 + -0x7f)));
  bVar7 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar7;
  uVar22 = (undefined3)((uint)pbVar10 >> 8);
  bVar33 = bVar7 + 0x2d;
  piVar18 = (int *)CONCAT31(uVar22,bVar33);
  *(uint *)(pbVar11 + (int)puVar47 * 8) =
       *(int *)(pbVar11 + (int)puVar47 * 8) + iVar31 + (uint)(0xd2 < bVar7);
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar33;
  if (!CARRY1(bVar7,bVar33)) {
    do {
      pbVar10 = (byte *)(iVar31 + 1);
      bVar7 = (byte)piVar18;
      *(byte *)piVar18 = (char)*piVar18 + bVar7;
      bVar39 = (byte)((uint)piVar18 >> 8);
      bVar33 = (byte)puVar38 | bVar39;
      puVar46 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar33);
      out(*(undefined4 *)pbVar11,(short)pbVar10);
      *(byte *)piVar18 = (char)*piVar18 + bVar7;
      uVar27 = (undefined2)((uint)iVar24 >> 0x10);
      cVar4 = (char)iVar24;
      pbVar45 = (byte *)CONCAT22(uVar27,CONCAT11((byte)((uint)iVar24 >> 8) | *pbVar10,cVar4));
      bVar6 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar7;
      *(byte *)piVar18 = (char)*piVar18 + bVar7 + CARRY1(bVar6,bVar7);
      *pbVar10 = *pbVar10 + bVar7;
      *(byte *)puVar47 = (byte)*puVar47 + bVar39;
      *(int *)((int)piVar18 * 2) =
           *(int *)((int)piVar18 * 2) + CONCAT22(uVar27,CONCAT11(0x1c,cVar4));
      *(byte *)piVar18 = (char)*piVar18 + bVar7;
      cVar5 = (char)pbVar10;
      *(byte *)puVar46 = (byte)*puVar46 + cVar5;
      *(byte *)((int)piVar18 * 2) = *(byte *)((int)piVar18 * 2) ^ bVar7;
      *(byte *)piVar18 = (char)*piVar18 + bVar7;
      pbVar45 = pbVar11 + 8;
      out(*(undefined4 *)(pbVar11 + 4),(short)pbVar10);
      piVar18 = &uRam0a0a0000;
      *pbVar10 = *pbVar10;
      bVar7 = cVar4 - cVar5;
      iVar24 = CONCAT22(uVar27,CONCAT11((byte)puVar47[0x14] | 0x1c | bRam0ca87216,bVar7));
      *pbVar10 = *pbVar10;
      bVar6 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar7;
      if (!CARRY1(bVar6,bVar7)) {
        piVar18 = &uRam1e7b7000;
        bVar6 = (byte)((uint)puVar38 >> 8) | *(byte *)(iVar31 + 3);
        puVar46 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar6,bVar33));
        if (bVar6 != 0) {
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5 + pbVar45[(int)puVar47 * 8]);
          piVar18 = (int *)0x6d7d7000;
          iVar24 = iVar24 + 1;
        }
      }
      *piVar18 = *piVar18 + (int)piVar18;
      iVar31 = CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 | pbVar45[(int)puVar47 * 8]);
      *(char *)piVar18 = (char)*piVar18;
      piVar18 = (int *)CONCAT31((int3)((uint)piVar18 >> 8),0xf9);
      *puVar47 = (uint)((int)piVar18 + *puVar47 + 1);
      pbVar11 = pbVar11 + 0xc;
      out(*(undefined4 *)pbVar45,(short)iVar31);
      puVar38 = puVar46;
    } while( true );
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar33 = bVar33 | *(byte *)((int)piVar18 + 0x4000081);
  piVar18 = (int *)CONCAT31(uVar22,bVar33);
  if ('\0' < (char)bVar33) {
    *(byte *)piVar18 = (char)*piVar18 + bVar33;
    puVar46 = (uint *)CONCAT31(uVar22,bVar33 + 0x28);
    *puVar46 = *puVar46 ^ (uint)puVar46;
    *(byte *)puVar38 = *(byte *)puVar38 + bVar6;
    cVar4 = (bVar33 + 0x28) - bVar6;
    pcVar13 = (char *)CONCAT31(uVar22,cVar4);
    *pcVar13 = *pcVar13 + cVar4;
    pbVar10 = (byte *)CONCAT31(uVar21,bVar39 | *(byte *)puVar38);
    pcVar9 = (char *)CONCAT22((short)((uint)puVar38 >> 0x10),
                              CONCAT11((char)((uint)puVar38 >> 8) + *(byte *)((int)puVar23 + 0x7d),
                                       (char)puVar38));
    *pcVar13 = *pcVar13 + cVar4;
    pbVar45 = (byte *)CONCAT31(uVar22,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar22,cVar4 + 0x39U));
    *pcVar9 = *pcVar9 + bVar6;
    puVar20 = (uint *)(pbVar11 + 4);
    out(*(undefined4 *)pbVar11,(short)pbVar10);
    goto code_r0x00405396;
  }
  puVar46 = (uint *)(pbVar11 + 4);
  out(*(undefined4 *)pbVar11,(short)iVar31);
  pcVar13 = (char *)(iVar24 + -1);
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pbVar10 = (byte *)CONCAT31(uVar21,bVar39 | *(byte *)puVar38);
  goto code_r0x004052ee;
}


