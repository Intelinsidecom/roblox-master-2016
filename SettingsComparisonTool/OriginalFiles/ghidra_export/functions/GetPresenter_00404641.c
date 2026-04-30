/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404641
 * Raw Name    : GetPresenter
 * Demangled   : GetPresenter
 * Prototype   : int GetPresenter(char * presenterType, uint * parameterStrings, undefined4 param_3, undefined4 param_4, char * param_5)
 * Local Vars  : iStack_24, puStack_28, uStack_1c, pcStack_20, uStack_14, uStack_18, uStack_c, uStack_10, pcStack_4, param_3, uStack_8, param_4, uVar2, param_5, uVar1, bVar4, uVar3, bVar6, cVar5, cVar8, bVar7, in_EAX, uVar9, pcVar11, pbVar10, uVar13, puVar12, iVar15, puVar14, puVar17, piVar16, pcVar19, puVar18, uVar21, uVar20, iVar23, puVar22, presenterType, uVar25, parameterStrings, uVar24, uVar27, bVar26, pbVar29, puVar28, bVar31, iVar30, bVar33, cVar32, cVar35, uVar34, pbVar36, unaff_EBX, puVar38, uVar37, cVar40, cVar39, puVar42, ppbVar41, ppbVar44, ppbVar43, pbVar45, unaff_ESI, unaff_EDI, pbVar46, in_ES, puVar47, in_SS, in_CS, in_AF, in_DS, uVar49, bVar48, uStack_a4, uStack_a2, uStack_a3, uStack_64, uStack_a0, iStack_5c, puStack_60, puStack_54, pbStack_58, puStack_4c, uStack_50, pbStack_44, puStack_48, pbStack_3c, puStack_40, puStack_34, pbStack_38, puStack_2c, pcStack_30
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

int __fastcall
GetPresenter(char *presenterType,uint *parameterStrings,undefined4 param_3,undefined4 param_4,
            char *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  int in_EAX;
  byte *pbVar10;
  undefined3 uVar20;
  char *pcVar11;
  ushort *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  uint *puVar18;
  undefined3 uVar21;
  char *pcVar19;
  uint *puVar22;
  undefined2 uVar24;
  undefined2 uVar25;
  int iVar23;
  byte bVar26;
  byte bVar31;
  char cVar32;
  byte bVar33;
  undefined2 uVar27;
  uint *puVar28;
  byte *pbVar29;
  int iVar30;
  undefined1 uVar34;
  char cVar35;
  char cVar39;
  uint *unaff_EBX;
  byte *pbVar36;
  char cVar40;
  uint uVar37;
  uint *puVar38;
  byte **ppbVar41;
  uint *puVar42;
  byte **ppbVar43;
  byte **ppbVar44;
  byte *unaff_ESI;
  byte *pbVar45;
  byte *pbVar46;
  uint *unaff_EDI;
  uint *puVar47;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  byte in_AF;
  bool bVar48;
  undefined8 uVar49;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined2 uStack_64;
  uint *puStack_60;
  int iStack_5c;
  byte *pbStack_58;
  uint *puStack_54;
  undefined2 uStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  byte *pbStack_44;
  uint *puStack_40;
  byte *pbStack_3c;
  byte *pbStack_38;
  uint *puStack_34;
  char *pcStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  int iStack_24;
  char *pcStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_c;
  undefined4 uStack_8;
  char *pcStack_4;
  
                    /* .NET CLR Managed Code */
  pbVar10 = (byte *)(in_EAX + *parameterStrings);
  cVar5 = (char)pbVar10;
  bVar7 = (byte)unaff_EBX;
  if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) == 0) {
    *pbVar10 = *pbVar10 + cVar5;
    *(byte *)unaff_EBX = (byte)*unaff_EBX ^ cVar5 + 4U;
    pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_CS);
    in_CS = 0x2a06;
    uStack_8 = &UNK_0040465a;
    uVar49 = func_0x0000b828();
    parameterStrings = (uint *)((ulonglong)uVar49 >> 0x20);
    pbVar10 = (byte *)uVar49;
    bVar6 = *pbVar10;
    bVar4 = (byte)uVar49;
    *pbVar10 = *pbVar10 + bVar4;
    pbVar45 = unaff_ESI + (uint)CARRY1(bVar6,bVar4) + *(int *)pbVar10;
    uVar20 = (undefined3)((ulonglong)uVar49 >> 8);
    *pbVar10 = *pbVar10 + bVar4;
    cVar8 = (char)((uint)param_5 >> 8);
    *param_5 = *param_5 + cVar8;
    bVar6 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    *parameterStrings = (uint)(pbVar10 + (uint)CARRY1(bVar6,bVar4) + *parameterStrings);
    bVar4 = bVar4 | *pbVar45;
    pcVar11 = (char *)CONCAT31(uVar20,bVar4);
    *pcVar11 = *pcVar11 + bVar4;
    cVar5 = bVar4 + *pcVar11;
    pcVar11 = (char *)CONCAT31(uVar20,cVar5);
    *pcVar11 = *pcVar11 + cVar5;
    *pcVar11 = *pcVar11 + cVar5;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar7;
    *pcVar11 = *pcVar11 + cVar5;
    *pcVar11 = *pcVar11 + cVar8;
    *pcVar11 = *pcVar11 + cVar5;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar8;
    pcVar11 = (char *)(CONCAT31(uVar20,cVar5) ^ 3);
    param_5[0x73060000] = param_5[0x73060000] - (char)((uint)unaff_EBX >> 8);
    *(byte *)unaff_EDI = (byte)pcVar11;
    *pcVar11 = *pcVar11 + (byte)pcVar11;
    unaff_ESI = pbVar45 + 1;
    bVar6 = *pbVar45;
    *(char *)CONCAT31(uVar20,bVar6) = *(char *)CONCAT31(uVar20,bVar6) + bVar6;
    cVar5 = (bVar6 - (byte)*unaff_EBX) + '(';
    puVar47 = (uint *)((int)unaff_EDI + 2);
    bVar6 = in((short)((ulonglong)uVar49 >> 0x20));
    *(byte *)((int)unaff_EDI + 1) = bVar6;
    *(char *)CONCAT31(uVar20,cVar5) = *(char *)CONCAT31(uVar20,cVar5) + cVar5;
    bVar6 = cVar5 - (byte)*unaff_EBX;
    cVar5 = bVar6 + 0x28;
    pbVar10 = (byte *)CONCAT31(uVar20,cVar5);
    presenterType = (char *)0x14060000;
    if (0xd7 < bVar6) {
      *pbVar10 = *pbVar10 + cVar5;
      unaff_EDI = puVar47;
      goto code_r0x004046b5;
    }
  }
  else {
    *unaff_ESI = *unaff_ESI + cVar5;
code_r0x004046b5:
    uVar25 = (undefined2)((uint)parameterStrings >> 0x10);
    cVar5 = (char)parameterStrings;
    bVar31 = (char)((uint)parameterStrings >> 8) - *(byte *)((int)parameterStrings + -0x3a);
    parameterStrings = (uint *)CONCAT22(uVar25,CONCAT11(bVar31,cVar5));
    uVar20 = (undefined3)((uint)pbVar10 >> 8);
    bVar4 = ((byte)pbVar10 | *pbVar10) + *presenterType;
    pbVar45 = (byte *)CONCAT31(uVar20,bVar4);
    uVar37 = *parameterStrings;
    bVar33 = (byte)presenterType;
    bVar48 = SCARRY1((byte)*parameterStrings,bVar33);
    *(byte *)parameterStrings = (byte)*parameterStrings + bVar33;
    bVar6 = (byte)*parameterStrings;
    pbVar10 = unaff_ESI;
    if ((POPCOUNT((byte)*parameterStrings) & 1U) == 0) {
code_r0x004046f0:
      if (bVar6 == 0 || bVar48 != (char)bVar6 < '\0') goto code_r0x0040475f;
      bVar7 = (byte)pbVar45;
      *pbVar45 = *pbVar45 + bVar7;
      uVar20 = (undefined3)((uint)pbVar45 >> 8);
      piVar16 = (int *)CONCAT31(uVar20,bVar7 + 0x2d);
      *(byte **)(pbVar10 + (int)unaff_EDI * 8) =
           (byte *)((int)parameterStrings +
                   (uint)(0xd2 < bVar7) + *(int *)(pbVar10 + (int)unaff_EDI * 8));
      pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_ES);
      uRam7305fffc = in_CS;
      *piVar16 = *piVar16 + (int)piVar16;
      bVar7 = bVar7 + 0x2d | *(byte *)((int)piVar16 + 0x400006d);
      pbVar45 = (byte *)CONCAT31(uVar20,bVar7);
      puVar47 = unaff_EDI;
      if ((char)bVar7 < '\x01') goto code_r0x00404777;
      *pbVar45 = *pbVar45 + bVar7;
      pbVar45 = (byte *)CONCAT31(uVar20,bVar7 + 0x10);
      *parameterStrings = (uint)(pbVar45 + *parameterStrings);
    }
    else if (CARRY1((byte)uVar37,bVar33)) {
      *pbVar45 = *pbVar45 + bVar4;
      bVar31 = bVar31 | *(byte *)((int)unaff_EBX + -0x5b);
      parameterStrings = (uint *)CONCAT22(uVar25,CONCAT11(bVar31,cVar5));
      *pbVar45 = *pbVar45 + bVar4;
      pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_ES);
      unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar7 - (byte)*parameterStrings);
      if (bVar7 < (byte)*parameterStrings) {
        *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
        presenterType =
             (char *)CONCAT22((short)((uint)presenterType >> 0x10),
                              CONCAT11((byte)((uint)presenterType >> 8) | (byte)*parameterStrings,
                                       bVar33));
        uStack_8 = (undefined *)CONCAT22(uStack_8._2_2_,in_DS);
        uVar37 = unaff_EBX[0xb];
        *pbVar45 = *pbVar45 + bVar4;
        uStack_c = in_ES;
        parameterStrings =
             (uint *)CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar31 + (byte)uVar37,cVar5)) >> 8),
                              cVar5 - (byte)*unaff_EBX);
        bRam0000c800 = bRam0000c800 ^ bVar4;
      }
      *(byte *)parameterStrings = (byte)*parameterStrings + (char)((uint)presenterType >> 8);
      bVar7 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar4;
      *parameterStrings = (uint)(pbVar45 + (uint)CARRY1(bVar7,bVar4) + *parameterStrings);
      pbVar10 = unaff_ESI + 4;
      out(*(undefined4 *)unaff_ESI,(short)parameterStrings);
      *pbVar45 = *pbVar45 + bVar4;
      bVar48 = SBORROW1(bVar4,'\x1f');
      bVar6 = bVar4 - 0x1f;
      pbVar45 = (byte *)CONCAT31(uVar20,bVar6);
      goto code_r0x004046f0;
    }
    out(*(undefined4 *)pbVar10,(short)parameterStrings);
    *pbVar45 = *pbVar45 + (byte)pbVar45;
    uStack_8 = (undefined *)((uint)uStack_8._2_2_ << 0x10);
    *presenterType = *presenterType + '\x01';
    *presenterType = *presenterType + '\x01';
    bVar7 = (byte)pbVar45 | (byte)*parameterStrings;
    pcVar11 = (char *)CONCAT31((int3)((uint)pbVar45 >> 8),bVar7);
    unaff_ESI = pbVar10 + 8;
    out(*(undefined4 *)(pbVar10 + 4),(short)parameterStrings);
    puVar47 = (uint *)((int)unaff_EDI + -1);
    *pcVar11 = *pcVar11 + bVar7;
    pbVar10 = (byte *)((int)((uint)pcVar11 | *puVar47) + *(int *)((uint)pcVar11 | *puVar47));
    *pbVar10 = *pbVar10 + (char)pbVar10;
    pcStack_4 = presenterType;
  }
  cVar5 = (char)pbVar10 + *pbVar10;
  puVar22 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
  *(char *)puVar22 = (char)*puVar22 + cVar5;
  *puVar22 = *puVar22 & (uint)puVar22;
  *(char *)puVar22 = (char)*puVar22 + cVar5;
  pbVar10 = (byte *)((int)puVar22 + 1);
  cVar5 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar5;
  uVar37 = *unaff_EBX;
  bVar7 = (byte)((uint)presenterType >> 8);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar7;
  pbVar46 = unaff_ESI;
  if (CARRY1((byte)uVar37,bVar7)) {
    pbVar46 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)parameterStrings);
    puVar47 = (uint *)((int)puVar47 + -1);
  }
  *pbVar10 = *pbVar10 + cVar5;
  pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_ES);
  puVar22 = (uint *)CONCAT22((short)((uint)presenterType >> 0x10),
                             CONCAT11(bVar7 + *(byte *)((int)puVar47 + 0x49),(char)presenterType));
  *pbVar10 = *pbVar10 + cVar5;
  uStack_8 = (undefined *)CONCAT22(uStack_8._2_2_,in_ES);
  *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
  out(*(undefined4 *)pbVar46,(short)parameterStrings);
  *pbVar10 = *pbVar10 + cVar5;
  uStack_c = in_ES;
  pbVar46 = pbVar46 + *(int *)((int)unaff_EBX + -0x7f) + 4;
  *pbVar10 = *pbVar10 + cVar5;
  unaff_EBX = (uint *)((int)unaff_EBX + -1);
  do {
    uStack_14 = in_ES;
    cVar5 = (char)pbVar10 - (byte)*parameterStrings;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
    pbVar10 = pbVar46 + 4;
    out(*(undefined4 *)pbVar46,(short)parameterStrings);
    unaff_EDI = (uint *)((int)puVar47 + -1);
    *pbVar45 = *pbVar45 + cVar5;
    uStack_18 = in_ES;
    presenterType =
         (char *)CONCAT22((short)((uint)puVar22 >> 0x10),
                          CONCAT11((char)((uint)puVar22 >> 8) + (byte)puVar47[0x12],(char)puVar22));
code_r0x0040475f:
    cVar5 = (char)pbVar45;
    *pbVar45 = *pbVar45 + cVar5;
    uStack_1c = in_ES;
    *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
    out(*(undefined4 *)pbVar10,(short)parameterStrings);
    pbVar46 = (byte *)((int)unaff_EBX + -1);
    *pbVar45 = *pbVar45 + cVar5;
    pcStack_20 = (char *)CONCAT22(pcStack_20._2_2_,in_ES);
    iStack_24 = CONCAT22(iStack_24._2_2_,in_ES);
    pbVar10 = pbVar10 + *(int *)((int)unaff_EBX + -0x71) + 4;
    *pbVar45 = *pbVar45 + cVar5;
    puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                 CONCAT11((char)((uint)pbVar46 >> 8) - pbVar10[0x6e],(char)pbVar46))
    ;
    puVar47 = unaff_EDI;
code_r0x00404777:
    bVar7 = (byte)pbVar45;
    *pbVar45 = *pbVar45 + bVar7;
    uVar20 = (undefined3)((uint)pbVar45 >> 8);
    puVar22 = (uint *)(pbVar10 + (int)puVar47 * 8);
    uVar37 = *puVar22;
    uVar1 = *puVar22;
    *puVar22 = (uint)((byte *)(uVar1 + (int)parameterStrings) + (0xd2 < bVar7));
    puStack_2c = (uint *)CONCAT22(puStack_2c._2_2_,in_ES);
    puVar42 = (uint *)0x73060000;
    cVar8 = bVar7 + 0x2e +
            (CARRY4(uVar37,(uint)parameterStrings) ||
            CARRY4(uVar1 + (int)parameterStrings,(uint)(0xd2 < bVar7)));
    *(byte *)parameterStrings = (byte)*parameterStrings + (char)presenterType;
    *pbVar10 = *pbVar10;
    cVar5 = cVar8 + '~';
    pcVar11 = (char *)CONCAT31(uVar20,cVar5);
    out(*pbVar10,(short)parameterStrings);
    *pcVar11 = *pcVar11 + cVar5;
    cVar8 = cVar8 + -0x80;
    pcVar11 = (char *)CONCAT31(uVar20,cVar8);
    out(*(undefined4 *)(pbVar10 + 1),(short)parameterStrings);
    puVar22 = (uint *)(presenterType + -1);
    *pcVar11 = *pcVar11 + cVar8;
    pcStack_30 = (char *)CONCAT22(pcStack_30._2_2_,in_ES);
    *(byte *)puVar47 = (byte)*puVar47 - (char)((uint)pbVar45 >> 8);
    *pcVar11 = *pcVar11 + cVar8;
    puStack_34 = (uint *)CONCAT22(puStack_34._2_2_,in_ES);
    *pcVar11 = *pcVar11 - (char)((uint)puVar22 >> 8);
    *pcVar11 = *pcVar11 + cVar8;
    pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,in_ES);
    pbStack_3c = (byte *)CONCAT22(pbStack_3c._2_2_,in_ES);
    pbVar46 = pbVar10 + *(int *)((int)unaff_EBX + 9) + 5;
    *pcVar11 = *pcVar11 + cVar8;
    puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,in_ES);
    cVar5 = (char)parameterStrings;
    cVar32 = (char)((uint)parameterStrings >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    parameterStrings =
         (uint *)CONCAT22((short)((uint)parameterStrings >> 0x10),CONCAT11(cVar32,cVar5));
    *pcVar11 = *pcVar11 + cVar8;
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar34 = SUB41(unaff_EBX,0);
    bVar4 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)parameterStrings + 0x36);
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(bVar4,uVar34));
    bVar6 = cVar8 + (byte)*unaff_EBX;
    pbVar10 = (byte *)CONCAT31(uVar20,bVar6);
    *(byte *)puVar47 = (byte)*puVar47 - cVar32;
    bVar7 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    uStack_10 = in_ES;
  } while (!CARRY1(bVar7,bVar6));
  *pbVar10 = *pbVar10 + bVar6;
  bVar6 = bVar6 - *pbVar10;
  pbVar10 = (byte *)CONCAT31(uVar20,bVar6);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar5;
  *(byte *)parameterStrings = (byte)*parameterStrings ^ bVar6;
  presenterType[0x2affffff] = presenterType[0x2affffff] + bVar6;
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar6;
  *unaff_EBX = (uint)(pbVar10 + (uint)CARRY1(bVar7,bVar6) + *unaff_EBX);
  pbVar45 = pbVar10 + -0x32a1702;
  if (pbVar45 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar45;
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + (byte)*parameterStrings);
    puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,in_ES);
    pbVar10[-0xe0c891b] = pbVar10[-0xe0c891b] + cVar32;
    pbVar45 = pbVar10 + 0x19fd76e3;
    bVar7 = *pbVar45;
    *pbVar45 = *pbVar45 - bVar4;
    piVar16 = (int *)((uint)(pbVar10 + (bVar7 < bVar4) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar16 + 0x73) = *(char *)((int)piVar16 + 0x73) + cVar32;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar6 = bVar4 | *(byte *)((int)parameterStrings + 2);
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(bVar6,uVar34));
    cVar5 = (char)piVar16;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(char *)piVar16 = (char)*piVar16 + cVar5;
      uVar20 = (undefined3)((uint)(pbVar10 + (bVar7 < bVar4) + 0x63fd76e4) >> 8);
      cVar8 = cVar5 + '\x06';
      if ((POPCOUNT(cVar8) & 1U) == 0) {
        *(char *)CONCAT31(uVar20,cVar8) = *(char *)CONCAT31(uVar20,cVar8) + cVar8;
        pbVar45 = (byte *)CONCAT31(uVar20,cVar5 + '.');
        puVar22 = puVar18;
        uStack_50 = in_SS;
        goto code_r0x00404803;
      }
      cVar5 = cVar8 + (byte)*unaff_EBX;
      pcVar11 = (char *)CONCAT31(uVar20,cVar5);
      if (SCARRY1(cVar8,(byte)*unaff_EBX) == cVar5 < '\0') {
code_r0x004048e7:
        pcVar11 = (char *)((uint)pcVar11 | 8);
        in_SS = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(parameterStrings + 0x1cc18000) = (byte)parameterStrings[0x1cc18000] + cVar5;
code_r0x0040486e:
      pcVar11 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),(byte)piVar16 & (byte)*parameterStrings)
      ;
      puVar47 = (uint *)((int)puVar47 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar11 = *pcVar11 + (char)pcVar11;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + '*');
    puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,in_DS);
    bVar7 = (byte)((uint)puVar18 >> 8);
    cVar5 = (char)puVar18;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar7 + *pbVar10,cVar5));
    pbVar10 = pbVar10 + (uint)CARRY1(bVar7,*pbVar10) + *(int *)pbVar10;
    *(byte *)parameterStrings = (byte)*parameterStrings + cVar5;
    bVar48 = (byte)pbVar10 < *pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 - *pbVar10);
code_r0x00404880:
    pbVar46 = pbVar46 + (uint)bVar48 + *(int *)pbVar10;
    uStack_50 = in_ES;
    while( true ) {
      bVar6 = (byte)pbVar10;
      pbVar10[0x2c000000] = pbVar10[0x2c000000] + bVar6;
      bVar7 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar6;
      *parameterStrings = (uint)(pbVar10 + (uint)CARRY1(bVar7,bVar6) + *parameterStrings);
      *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)parameterStrings;
      *pbVar10 = *pbVar10 + bVar6;
      puVar22 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6 | (byte)*unaff_EBX);
code_r0x00404895:
      pcVar11 = (char *)((uint)puVar22 | *puVar22);
code_r0x00404899:
      cVar5 = (char)pcVar11;
      *pbVar46 = *pbVar46 + cVar5;
      uVar20 = (undefined3)((uint)pcVar11 >> 8);
      bVar7 = cVar5 + (byte)*unaff_EBX;
      pcVar11 = (char *)CONCAT31(uVar20,bVar7);
      bVar6 = (byte)((uint)puVar18 >> 8);
      uVar27 = (undefined2)((uint)puVar18 >> 0x10);
      cVar8 = (char)parameterStrings;
      uVar25 = in_ES;
      if (SCARRY1(cVar5,(byte)*unaff_EBX) == (char)bVar7 < '\0') {
        *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar8;
        *pcVar11 = *pcVar11 + bVar7;
        puVar18 = (uint *)CONCAT22(uVar27,CONCAT11(bVar6 | (byte)*parameterStrings,(char)puVar18));
        parameterStrings = (uint *)((int)parameterStrings + 1);
        pcVar11 = pcVar11 + *parameterStrings;
        if ((POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar11 = *pcVar11 + bVar7;
      bVar4 = bVar7 + 2;
      pcVar11 = (char *)CONCAT31(uVar20,bVar4);
      if (bVar7 < 0xfe) {
        *pbVar46 = *pbVar46 + bVar4;
        puVar22 = unaff_EBX;
        goto code_r0x004048f5;
      }
      *pcVar11 = *pcVar11 + bVar4;
      parameterStrings =
           (uint *)CONCAT22((short)((uint)parameterStrings >> 0x10),
                            CONCAT11((byte)((uint)parameterStrings >> 8) |
                                     *(byte *)((int)unaff_EBX + -0x5b),cVar8));
      cVar5 = *pcVar11;
      *pcVar11 = *pcVar11 + bVar4;
      puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_ES);
      if (SCARRY1(cVar5,bVar4) == *pcVar11 < '\0') goto code_r0x00404927;
      *pcVar11 = *pcVar11 + bVar4;
      bVar7 = bVar7 + 4;
      pbVar10 = (byte *)CONCAT31(uVar20,bVar7);
      if (0xfd < bVar4) break;
      *pbVar10 = *pbVar10 + bVar7;
      puVar18 = (uint *)CONCAT22(uVar27,CONCAT11(bVar6 | (byte)*parameterStrings,(char)puVar18));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar8;
      *pbVar46 = *pbVar46 ^ bVar7;
    }
    *pbVar10 = *pbVar10 + bVar7;
    puStack_54 = (uint *)((uint)puStack_54 & 0xffff0000);
  }
  else {
    pbVar10[0x6fdbe8fe] = pbVar10[0x6fdbe8fe] + (char)pbVar45;
code_r0x00404803:
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    uVar21 = (undefined3)((uint)puVar22 >> 8);
    bVar6 = (byte)puVar22 | (byte)*unaff_EBX;
    puVar18 = (uint *)CONCAT31(uVar21,bVar6);
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar8 = (char)unaff_EBX;
    cVar39 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x6f);
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(cVar39,cVar8));
    bVar7 = (byte)pbVar45;
    *pbVar45 = *pbVar45 + bVar7;
    bVar48 = 0xf9 < bVar7;
    uVar20 = (undefined3)((uint)pbVar45 >> 8);
    cVar5 = bVar7 + 6;
    pbVar10 = (byte *)CONCAT31(uVar20,cVar5);
    in_SS = uStack_50;
    if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404880;
    *pbVar10 = *pbVar10 + cVar5;
    piVar16 = (int *)CONCAT31(uVar20,bVar7 + 0x2e);
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar6 = bVar6 | *(byte *)((int)parameterStrings + (int)piVar16);
    puVar18 = (uint *)CONCAT31(uVar21,bVar6);
    in_SS = puStack_4c._0_2_;
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      puVar22 = (uint *)((int)piVar16 + *piVar16);
      *(byte *)parameterStrings = (byte)*parameterStrings + bVar6;
      pbVar46 = pbVar46 + parameterStrings[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar16 = (char)*piVar16 + bVar7 + 0x2e;
    cVar5 = bVar7 + 0x34;
    pcVar11 = (char *)CONCAT31(uVar20,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      pcVar11[0x28] = pcVar11[0x28] + cVar32;
      goto code_r0x00404899;
    }
    *pcVar11 = *pcVar11 + cVar5;
    piVar16 = (int *)CONCAT31(uVar20,bVar7 + 0x5c);
    *piVar16 = *piVar16 + (int)piVar16;
    cVar32 = (bVar6 | bRam07022c07) - (char)*piVar16;
    puVar18 = (uint *)CONCAT31(uVar21,cVar32);
    pcVar11 = (char *)CONCAT31(uVar20,bVar7 + 0x5a);
    bVar6 = (byte)((uint)puVar22 >> 8);
    *(byte *)parameterStrings = (byte)*parameterStrings | bVar6;
    *(uint *)((int)parameterStrings + (int)pcVar11) =
         *(uint *)((int)parameterStrings + (int)pcVar11) | 0x73060000;
    *parameterStrings = *parameterStrings | 0x73060000;
    cVar39 = cVar39 + *(byte *)((int)unaff_EBX + 0x72);
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(cVar39,cVar8));
    *pcVar11 = *pcVar11 + bVar7 + 0x5a;
    cVar5 = bVar7 + 0x60;
    pcVar11 = (char *)CONCAT31(uVar20,cVar5);
    if ((POPCOUNT(cVar5) & 1U) == 0) {
      *pcVar11 = *pcVar11 + cVar5;
      piVar16 = (int *)CONCAT31(uVar20,bVar7 + 0x88);
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      pbStack_44 = (byte *)CONCAT22(pbStack_44._2_2_,in_DS);
      puVar18 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                 CONCAT11((bVar6 | (byte)*parameterStrings) + (char)*piVar16,cVar32)
                                );
      *(char *)piVar16 = (char)*piVar16;
      cVar8 = cVar8 - *pbVar46;
      cVar39 = cVar39 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar8) + 0x73);
      *(byte *)piVar16 = (char)*piVar16 + bVar7 + 0x88;
      bVar7 = bVar7 + 0xb2 & (byte)*parameterStrings;
      puVar47 = (uint *)((int)puVar47 + iRam73060073);
      *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
      pcVar11 = (char *)CONCAT31(uVar20,bVar7 + 0x2a);
      unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar25,CONCAT11(
                                                  cVar39,cVar8)) + 0x74),cVar8));
      *pcVar11 = *pcVar11 + bVar7 + 0x2a;
      piVar16 = (int *)CONCAT31(uVar20,bVar7 + 0x54);
      in_SS = puStack_54._0_2_;
      goto code_r0x0040486e;
    }
    pbVar10 = (byte *)*(undefined6 *)pcVar11;
    *pbVar46 = *pbVar46 + (char)*(undefined6 *)pcVar11;
  }
  uVar20 = (undefined3)((uint)pbVar10 >> 8);
  bVar7 = (byte)pbVar10 | *pbVar46;
  pcVar11 = (char *)CONCAT31(uVar20,bVar7);
  *pcVar11 = *pcVar11 + bVar7;
  *unaff_EBX = (uint)(*unaff_EBX + (int)puVar18);
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
  *pcVar11 = *pcVar11 + bVar7;
  pcVar11 = (char *)CONCAT31(uVar20,bVar7 + 0x6f);
  *pcVar11 = *pcVar11 + bVar7 + 0x6f;
  pcVar11 = (char *)((int)((uint)pcVar11 & 0x7e26062d) - *(int *)((uint)pcVar11 & 0x7e26062d));
  *(byte *)parameterStrings = (byte)*parameterStrings + (char)puVar18;
  uRam00c16f07 = SUB41(pcVar11,0);
  in_SS = uStack_50;
code_r0x004048de:
  cVar5 = (char)pcVar11;
  *pbVar46 = *pbVar46 + cVar5;
  *pcVar11 = *pcVar11 + cVar5;
  *(byte **)(pcVar11 + (int)puVar18) = (byte *)(*(int *)(pcVar11 + (int)puVar18) + (int)puVar18);
  puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,in_SS);
  bVar7 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar11 = *pcVar11 + cVar5;
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5 + 'o');
  pbVar46 = pbVar46 + 1;
  *pcVar11 = *pcVar11 + cVar5 + 'o';
  pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_SS);
  puVar22 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7,(char)unaff_EBX));
  puVar42 = unaff_EBX;
  uVar25 = in_SS;
code_r0x004048f5:
  unaff_EBX = puVar22;
  pcVar11 = (char *)((int)((uint)pcVar11 & 0x7e26062d) - *(int *)((uint)pcVar11 & 0x7e26062d));
  *(byte *)parameterStrings = (byte)*parameterStrings + (char)puVar18;
  do {
    uRam00c36f08 = SUB41(pcVar11,0);
    while( true ) {
      bVar7 = *pbVar46;
      cVar5 = (char)pcVar11;
      *pbVar46 = *pbVar46 + cVar5;
      iStack_5c = CONCAT22(iStack_5c._2_2_,uVar25);
      if (SCARRY1(bVar7,cVar5) == (char)*pbVar46 < '\0') {
        pcVar11[(int)puVar42] = pcVar11[(int)puVar42] + cVar5;
        goto code_r0x00404982;
      }
      *pcVar11 = *pcVar11 + cVar5;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5 + '*');
      puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_DS);
      bVar7 = (byte)((uint)puVar18 >> 8);
      cVar5 = (char)puVar18;
      bVar6 = bVar7 + *pbVar10;
      pbVar10 = pbVar10 + (uint)CARRY1(bVar7,*pbVar10) + *(int *)pbVar10;
      *(byte *)parameterStrings = (byte)*parameterStrings + cVar5;
      cVar8 = (char)unaff_EBX - *pbVar46;
      bVar7 = *pbVar10;
      puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar6 + *pbVar10,cVar5));
      iVar15 = *(int *)pbVar10;
      *(byte *)parameterStrings = (byte)*parameterStrings + cVar5;
      pcVar11 = (char *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar6,bVar7) + iVar15) >> 8),
                                 (char)(pbVar10 + (uint)CARRY1(bVar6,bVar7) + iVar15) -
                                 *(byte *)((int)parameterStrings + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar8) +
                                                     -0x3a),cVar8));
code_r0x00404921:
      bVar7 = (byte)pcVar11;
      *pcVar11 = *pcVar11 + bVar7;
      pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar7 + 0x6f);
      *(byte *)puVar18 = ((byte)*puVar18 - (bVar7 + 0x6f)) - (0x90 < bVar7);
code_r0x00404927:
      *(byte *)parameterStrings = (byte)*parameterStrings + (char)puVar18;
      pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_SS);
      *(byte *)puVar18 = (byte)*puVar18 + 1;
      cVar5 = (char)((uint)puVar18 >> 8) - pbVar46[2];
      puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(cVar5,(char)puVar18));
      if ((POPCOUNT(cVar5) & 1U) == 0) break;
      pcVar11 = pcVar11 + -0x1b7e2606;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar11 >> 8) |
                                          (byte)parameterStrings[0x30dbc2],(char)pcVar11));
    }
code_r0x00404931:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar5 = (char)pcVar11 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5);
    pbVar10 = pbVar46;
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  do {
    bVar7 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar7;
    uVar20 = (undefined3)((uint)pcVar11 >> 8);
    piVar16 = (int *)CONCAT31(uVar20,bVar7 + 0x6f);
    *puVar18 = (*puVar18 - (int)piVar16) - (uint)(0x90 < bVar7);
    *(byte *)parameterStrings = (byte)*parameterStrings + (char)puVar18;
    iVar15 = *(int *)((int)puVar47 + 0x1a);
    *piVar16 = *piVar16 + (int)piVar16;
    parameterStrings =
         (uint *)CONCAT31((int3)((uint)parameterStrings >> 8),(byte)parameterStrings | *pbVar10);
    *(byte *)puVar18 = (byte)*puVar18 + 1;
    bVar7 = (bVar7 + 0x6f) - (char)*piVar16;
    pbVar45 = (byte *)CONCAT31(uVar20,bVar7);
    *pbVar45 = *pbVar45 + bVar7;
    pbVar10 = pbVar10 + *(int *)pbVar45;
    cVar5 = bVar7 + *pbVar45;
    puVar12 = (ushort *)CONCAT31(uVar20,cVar5);
    *puVar12 = *puVar12 + (ushort)CARRY1(bVar7,*pbVar45) * (((ushort)puVar12 & 3) - (*puVar12 & 3));
    *(char *)puVar12 = (char)*puVar12 + cVar5;
    *(char *)puVar12 = (char)*puVar12 + cVar5;
    *(char *)puVar12 = (char)*puVar12 + cVar5;
    puVar47 = (uint *)((int)puVar47 + unaff_EBX[0x1c]);
    puVar42 = (uint *)((int)puVar42 + iVar15);
code_r0x0040495b:
    cVar5 = (char)puVar12;
    *(char *)puVar12 = (char)*puVar12 + cVar5;
    uVar20 = (undefined3)((uint)puVar12 >> 8);
    cVar8 = cVar5 + '\x02';
    pcVar11 = (char *)CONCAT31(uVar20,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      *parameterStrings = (uint)(*parameterStrings + (int)puVar42);
      pbVar46 = pbVar10 + 1;
      out(*pbVar10,(short)parameterStrings);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar11 = *pcVar11 + cVar8;
    pbVar10 = (byte *)(CONCAT31(uVar20,cVar5 + '}') + (int)puVar42);
    *pbVar10 = *pbVar10 + cVar5 + '}';
    *pcStack_20 = *pcStack_20 + (char)pcStack_20;
    puVar18 = (uint *)CONCAT22((short)((uint)iStack_24 >> 0x10),
                               CONCAT11((byte)((uint)iStack_24 >> 8) | *(byte *)(iStack_24 * 3),
                                        (char)iStack_24));
    puVar47 = (uint *)(pbStack_3c + *(int *)((int)puStack_2c + 0x6f));
    pcVar11 = pcStack_20;
    parameterStrings = puStack_28;
    unaff_EBX = puStack_2c;
    puVar42 = puStack_34;
    pbVar10 = pbStack_38;
    while( true ) {
      cVar5 = (char)pcVar11;
      *pcVar11 = *pcVar11 + cVar5;
      uVar20 = (undefined3)((uint)pcVar11 >> 8);
      cVar8 = cVar5 + '\x02';
      pcVar11 = (char *)CONCAT31(uVar20,cVar8);
      if ((POPCOUNT(cVar8) & 1U) != 0) break;
      *pcVar11 = *pcVar11 + cVar8;
      pcVar11 = (char *)CONCAT31(uVar20,cVar5 + '}');
      out(*(undefined4 *)pbVar10,(short)parameterStrings);
      *pcVar11 = *pcVar11 + cVar5 + '}';
code_r0x00404982:
      puStack_48 = (uint *)CONCAT22(puStack_48._2_2_,in_ES);
      *(byte *)puStack_40 = (byte)*puStack_40 + (char)in_ES;
      puVar18 = (uint *)CONCAT22((short)((uint)pbStack_44 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_44 >> 8) |
                                          pbStack_44[(int)pbStack_58],(char)pbStack_44));
      puVar47 = (uint *)(iStack_5c + *(int *)((int)puStack_4c + 0x71));
      puVar22 = puStack_40;
      parameterStrings = puStack_48;
      unaff_EBX = puStack_4c;
      pbVar10 = pbStack_58;
      while( true ) {
        cVar5 = (char)puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + cVar5;
        uVar20 = (undefined3)((uint)puVar22 >> 8);
        cVar8 = cVar5 + '\x02';
        puVar12 = (ushort *)CONCAT31(uVar20,cVar8);
        puVar42 = puStack_54;
        if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar12 = (char)*puVar12 + cVar8;
        bVar6 = cVar5 + 0x7d;
        iVar15 = CONCAT31(uVar20,bVar6);
        pbVar45 = (byte *)(iVar15 + (int)puStack_54);
        bVar7 = *pbVar45;
        *pbVar45 = *pbVar45 + bVar6;
        uVar37 = *puVar18;
        *(byte *)parameterStrings = (byte)*parameterStrings + (char)puVar18;
        pcVar11 = (char *)(((iVar15 - uVar37) - (uint)CARRY1(bVar7,bVar6)) + -0x727b0317);
        cVar5 = (char)pcVar11;
        *pcVar11 = *pcVar11 + cVar5;
        uVar20 = (undefined3)((uint)pcVar11 >> 8);
        cVar8 = cVar5 + '\x02';
        pcVar11 = (char *)CONCAT31(uVar20,cVar8);
        if ((POPCOUNT(cVar8) & 1U) != 0) break;
        *pcVar11 = *pcVar11 + cVar8;
        bVar6 = cVar5 + 0x7d;
        iVar15 = CONCAT31(uVar20,bVar6);
        pbVar45 = (byte *)(iVar15 + (int)puStack_54);
        bVar7 = *pbVar45;
        *pbVar45 = *pbVar45 + bVar6;
        puVar22 = (uint *)((iVar15 - *puVar18) - (uint)CARRY1(bVar7,bVar6));
        puVar42 = parameterStrings;
code_r0x004049b4:
        *(byte *)puVar42 = (byte)*puVar42 + (char)puVar18;
        parameterStrings =
             (uint *)CONCAT31((int3)((uint)puVar42 >> 8),((char)puVar42 - (byte)*puVar47) - *pbVar10
                             );
        bVar6 = pbVar10[0x72];
        *puVar22 = *puVar22 & (uint)puVar18;
        pbVar45 = (byte *)((int)puVar22 + 2);
        *pbVar45 = *pbVar45 + (char)((uint)puVar42 >> 8);
        bVar7 = *pbVar45;
        puVar38 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar6);
        pbVar45 = pbVar10;
        while (unaff_EBX = puVar38, pbVar10 = pbVar45, (POPCOUNT(bVar7) & 1U) == 0) {
          cVar5 = (char)puVar22;
          *(byte *)puVar22 = (byte)*puVar22 + cVar5;
          uVar20 = (undefined3)((uint)puVar22 >> 8);
          cVar8 = cVar5 + '\x03';
          pbVar46 = (byte *)CONCAT31(uVar20,cVar8);
          pbVar10 = pbVar45 + 4;
          out(*(undefined4 *)pbVar45,(short)parameterStrings);
          in_SS = pbStack_3c._0_2_;
          *pbVar46 = *pbVar46 + cVar8;
          cVar32 = (char)puVar18;
          puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                     CONCAT11((byte)((uint)puVar18 >> 8) | *pbVar46,cVar32));
          *(int *)pbVar46 = *(int *)pbVar46 - (int)pbVar46;
          *(byte *)parameterStrings = (byte)*parameterStrings + cVar32;
          cVar32 = (char)puVar38 - pbVar45[6];
          unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),cVar32);
          if ((POPCOUNT(cVar32) & 1U) != 0) {
            pbVar45 = (byte *)((int)puVar47 + (int)puStack_54 * 2);
            *pbVar45 = *pbVar45 + cVar8;
            ppbVar44 = (byte **)puStack_54;
            goto code_r0x00404a51;
          }
          *pbVar46 = *pbVar46 + cVar8;
          puVar22 = (uint *)CONCAT31(uVar20,cVar5 + 'r');
          *(byte *)puVar22 = (byte)*puVar22;
          pbStack_3c = (byte *)CONCAT22(pbStack_3c._2_2_,uVar25);
          do {
            puVar47 = (uint *)((int)puVar47 + unaff_EBX[0x1c]);
            bVar7 = (byte)puVar22;
            *(byte *)puVar22 = (byte)*puVar22 + bVar7;
            uVar20 = (undefined3)((uint)puVar22 >> 8);
            bVar7 = (bVar7 + 0x6e) - (0x90 < bVar7);
            puVar22 = (uint *)CONCAT31(uVar20,bVar7);
            cVar5 = (char)puVar18;
            *(byte *)parameterStrings = (byte)*parameterStrings + cVar5;
            bVar6 = (char)((uint)puVar18 >> 8) - pbVar10[2];
            puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar6,cVar5));
            puVar42 = parameterStrings;
            if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar22 = (byte)*puVar22 + bVar7;
            bVar4 = bVar7 + 2;
            puVar22 = (uint *)CONCAT31(uVar20,bVar4);
            ppbVar43 = (byte **)puStack_54;
            if ((POPCOUNT(bVar4) & 1U) == 0) goto code_r0x004049f5;
            pbVar10 = pbStack_3c;
          } while (0xfd < bVar7);
          *(byte *)puVar22 = (byte)*puVar22 | bVar4;
          puVar38 = unaff_EBX;
          pbVar45 = pbStack_3c;
          bVar7 = (byte)*puVar22;
        }
      }
    }
    *(byte *)parameterStrings = (byte)*parameterStrings + (char)puVar18;
    pbStack_3c = (byte *)CONCAT22(pbStack_3c._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar7 = (byte)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + bVar7;
    uVar20 = (undefined3)((uint)puVar22 >> 8);
    bVar4 = bVar7 + 0x6f;
    pbVar46 = (byte *)CONCAT31(uVar20,bVar4);
    *puVar18 = (*puVar18 - (int)pbVar46) - (uint)(0x90 < bVar7);
    *(byte *)parameterStrings = (byte)*parameterStrings + cVar5;
    pbVar45 = (byte *)((int)ppbVar43 + *(int *)((int)puVar47 + 0x1a));
    *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
    uVar21 = (undefined3)((uint)parameterStrings >> 8);
    bVar7 = (byte)parameterStrings | *pbVar10;
    parameterStrings = (uint *)CONCAT31(uVar21,bVar7);
    *(byte *)puVar18 = (byte)*puVar18 + 1;
    cVar8 = bVar4 - *pbVar46;
    pbVar10 = pbVar10 + (-(uint)(bVar4 < *pbVar46) - *(int *)CONCAT31(uVar20,cVar8));
    uVar13 = CONCAT31(uVar20,cVar8 + *(char *)CONCAT31(uVar20,cVar8));
    bVar48 = CARRY1(bRam14110000,bVar6);
    bRam14110000 = bRam14110000 + bVar6;
    puVar22 = (uint *)((int)unaff_EBX + (int)pbVar10 * 2);
    uVar37 = *puVar22;
    uVar1 = uVar13 + *puVar22;
    puVar14 = (undefined4 *)(uVar1 + bVar48);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar14 = uVar2;
    puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,uVar25);
    uVar37 = (uint)(CARRY4(uVar13,uVar37) || CARRY4(uVar1,(uint)bVar48));
    puVar22 = (uint *)((int)puVar14 + uRam7d020511 + uVar37);
    ppbVar41 = &pbStack_44;
    ppbVar44 = &pbStack_44;
    ppbVar43 = &pbStack_44;
    pbStack_44 = pbVar45;
    cVar8 = '\x03';
    do {
      pbVar45 = pbVar45 + -4;
      ppbVar41 = ppbVar41 + -1;
      *ppbVar41 = (byte *)*(undefined4 *)pbVar45;
      cVar8 = cVar8 + -1;
    } while ('\0' < cVar8);
    pbStack_3c = (byte *)&pbStack_44;
    pbRam00c82802 =
         (byte *)((int)puVar22 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar14,uRam7d020511) ||
                      CARRY4((int)puVar14 + uRam7d020511,uVar37))));
    bVar4 = *pbVar10;
    cVar8 = (char)puVar22;
    *pbVar10 = *pbVar10 + cVar8;
  } while (SCARRY1(bVar4,cVar8) == (char)*pbVar10 < '\0');
  *(byte *)puVar22 = (byte)*puVar22 + cVar8;
  iVar15 = CONCAT31((int3)((uint)puVar22 >> 8),cVar8 + '\x11') + 0xc57b;
  bVar6 = (byte)iVar15;
  *parameterStrings = *parameterStrings ^ (uint)unaff_EBX;
  parameterStrings = (uint *)CONCAT31(uVar21,bVar7 + (byte)*puVar18);
  iVar15 = (CONCAT31((int3)((uint)iVar15 >> 8),bVar6 + 0x6f) - (uint)(0x90 < bVar6)) + -0x18093a86;
  cVar8 = (char)iVar15;
  uVar20 = (undefined3)((uint)iVar15 >> 8);
  cVar5 = cVar8 + '\x02';
  pbVar45 = (byte *)CONCAT31(uVar20,cVar5);
  if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar45 = *pbVar45 + cVar5;
  pbVar46 = (byte *)CONCAT31(uVar20,cVar8 + 'q');
  ppbVar44 = &pbStack_44;
code_r0x00404a51:
  pbVar45 = pbVar46 + 1;
  cVar5 = (char)pbVar45;
  *pbVar45 = *pbVar45 + cVar5;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((char)((uint)puVar38 >> 8) - cVar5,cVar32));
  *pbVar45 = *pbVar45 + cVar5;
  parameterStrings =
       (uint *)CONCAT31((int3)((uint)parameterStrings >> 8),(char)parameterStrings - (byte)*puVar18)
  ;
  pbVar46 = pbVar46 + 0x757b03;
  pbVar45 = (byte *)((int)puVar47 + (int)ppbVar44 * 2);
  cVar5 = (char)pbVar46;
  *pbVar45 = *pbVar45 + cVar5;
  *pbVar46 = *pbVar46 + cVar5;
  *pbVar10 = *pbVar10 - (char)((uint)pbVar46 >> 8);
  *pbVar46 = *pbVar46 + cVar5;
  puVar47 = (uint *)((int)puVar47 - *(int *)((int)ppbVar44 + -0x3a));
  *pbVar46 = *pbVar46 + cVar5;
  pbVar45 = (byte *)(CONCAT31((int3)((uint)pbVar46 >> 8),cVar5 + '\x11') + 0x757b02);
  pbVar46 = (byte *)((int)puVar47 + (int)ppbVar44 * 2);
  bVar6 = (byte)pbVar45;
  *pbVar46 = *pbVar46 + bVar6;
  bVar7 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar6;
  puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,uVar25);
  pbRam011006fe = pbVar45 + (int)(pbRam011006fe + CARRY1(bVar7,bVar6));
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar6;
  if (!CARRY1(bVar7,bVar6)) goto code_r0x00404add;
  do {
    bVar7 = (byte)pbVar45;
    *pbVar45 = *pbVar45 + bVar7;
    bVar4 = (byte)puVar18;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                               CONCAT11((byte)((uint)puVar18 >> 8) | *pbVar45,bVar4));
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar20 = (undefined3)((uint)pbVar45 >> 8);
    bVar7 = bVar7 + in_AF * '\x06';
    cVar5 = bVar7 + (0x90 < (bVar7 & 0xf0) | in_AF * (0xf9 < bVar7)) * '`';
    pcVar11 = (char *)CONCAT31(uVar20,cVar5);
    *pcVar11 = *pcVar11 + cVar5;
    puVar47 = (uint *)((int)puVar47 - *(int *)((int)ppbVar44 + -0x39));
    *pcVar11 = *pcVar11 + cVar5;
    iVar15 = CONCAT31(uVar20,cVar5 + '\x11') + 0xc57b;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x11') + 0xc67b;
    bVar7 = (byte)iVar15;
    bVar6 = bVar7 + 0x6f;
    pbVar45 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar6);
    *puVar18 = (*puVar18 - (int)pbVar45) - (uint)(0x90 < bVar7);
    uVar37 = *parameterStrings;
    *(byte *)parameterStrings = (byte)*parameterStrings + bVar4;
    pbRam011106fe = pbVar45 + (int)(pbRam011106fe + CARRY1((byte)uVar37,bVar4));
    bVar7 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    if (!CARRY1(bVar7,bVar6)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    bVar7 = (byte)puVar18;
    bVar6 = (byte)((uint)puVar18 >> 8) | *pbVar45;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar6,bVar7));
    *pbVar45 = *pbVar45 - (char)pbVar45;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar6;
    out(*(undefined4 *)pbVar10,(short)parameterStrings);
    *puVar18 = *puVar18 & (uint)pbVar45;
    uVar37 = *parameterStrings;
    *(byte *)parameterStrings = (byte)*parameterStrings + bVar7;
    pbVar45 = pbVar45 + (uint)CARRY1((byte)uVar37,bVar7) + *(int *)(pbVar10 + 4);
    *pbVar45 = *pbVar45 + (char)pbVar45;
    *(byte *)puVar18 = (byte)*puVar18 + (char)parameterStrings;
    pbVar10 = pbVar10 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar10,(short)parameterStrings);
      pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(byte)pbVar45 & (byte)*puVar18);
      *(byte *)parameterStrings = (byte)*parameterStrings + (char)puVar18;
      parameterStrings =
           (uint *)CONCAT22((short)((uint)parameterStrings >> 0x10),
                            CONCAT11((byte)((uint)parameterStrings >> 8) | (byte)unaff_EBX[5],
                                     (char)parameterStrings));
      *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
      pbVar10 = pbVar10 + 4;
code_r0x00404ad4:
      puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,uVar25);
      pbVar45 = (byte *)((uint)pbVar45 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar45;
code_r0x00404add:
      bVar7 = (byte)pbVar45;
      uVar20 = (undefined3)((uint)pbVar45 >> 8);
      cVar5 = bVar7 + 8;
      pbVar45 = (byte *)CONCAT31(uVar20,cVar5);
      if (SCARRY1(bVar7,'\b') == cVar5 < '\0') break;
      *pbVar45 = *pbVar45 + cVar5;
      cVar5 = bVar7 + 10;
      piVar16 = (int *)CONCAT31(uVar20,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *piVar16 = (int)(*piVar16 + (int)piVar16);
        goto code_r0x00404b18;
      }
      *(char *)piVar16 = (char)*piVar16 + cVar5;
      puVar22 = (uint *)CONCAT31(uVar20,bVar7 + 0x7c);
      *puVar22 = *puVar22 & (uint)puVar18;
      *(char *)((int)puVar22 + 0x11) =
           *(char *)((int)puVar22 + 0x11) + (char)((uint)parameterStrings >> 8);
      cVar5 = (char)((int)puVar22 + 0xc67b);
      uVar20 = (undefined3)((uint)((int)puVar22 + 0xc67b) >> 8);
      bVar7 = cVar5 + 8;
      pbVar45 = (byte *)CONCAT31(uVar20,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar45 = *pbVar45 + bVar7;
        cRam02060000 = cVar5 + 'w';
        puVar22 = (uint *)CONCAT31(uVar20,cRam02060000);
        *(byte *)puVar22 = (byte)*puVar22 + cRam02060000;
        cVar5 = (char)puVar18;
        puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                   CONCAT11((byte)((uint)puVar18 >> 8) | (byte)*puVar22,cVar5));
        *puVar22 = *puVar22 - (int)puVar22;
        *(byte *)parameterStrings = (byte)*parameterStrings + cVar5;
        pbVar45 = pbVar10 + 4;
        out(*(undefined4 *)pbVar10,(short)parameterStrings);
        pbVar10 = pbVar45;
        if ((POPCOUNT((byte)*parameterStrings) & 1U) == 0) goto code_r0x00404b0f;
        pcVar11 = (char *)((uint)puVar22 | *puVar22);
        goto code_r0x00404b89;
      }
      bVar6 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar7;
      *(byte **)pbVar10 = pbVar45 + (uint)CARRY1(bVar6,bVar7) + *(int *)pbVar10;
    }
    *pbVar10 = *pbVar10 + 1;
    *puVar18 = (uint)(pbVar45 + (uint)(0xf7 < bVar7) + *puVar18);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + 'r');
    piVar16 = (int *)((uint)puVar22 | *puVar22);
    parameterStrings = puStack_60;
code_r0x00404b18:
    bRam11060000 = (byte)piVar16;
    iVar15 = CONCAT31((int3)((uint)((int)piVar16 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar16 + 0xc57b) + '\x11') + 0xc77b;
    bVar7 = (byte)iVar15;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),bVar7 + 0x6f);
    *puVar18 = (*puVar18 - iVar15) - (uint)(0x90 < bVar7);
    cVar5 = (char)puVar18;
    *(byte *)parameterStrings = (byte)*parameterStrings + cVar5;
    bVar6 = (byte)((uint)unaff_EBX >> 8);
    bVar33 = (byte)((uint)parameterStrings >> 8) | bVar6;
    pcVar19 = (char *)CONCAT22((short)((uint)parameterStrings >> 0x10),
                               CONCAT11(bVar33,(byte)parameterStrings));
    piVar16 = (int *)(iVar15 + 0x73060001);
    *(byte *)puVar18 = (byte)*puVar18 & (byte)piVar16;
    *pcVar19 = *pcVar19 + cVar5;
    bVar4 = (byte)((uint)puVar18 >> 8);
    *(byte *)piVar16 = *(char *)piVar16 - bVar4;
    *(byte *)piVar16 = *(char *)piVar16 + (byte)piVar16;
    iVar15 = *piVar16;
    *piVar16 = *piVar16 - (int)piVar16;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar4;
    pcVar11 = (char *)((uint)piVar16 | *puVar47);
    *pcVar19 = *pcVar19 - bVar4;
    bVar7 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar7;
    ppbVar44 = (byte **)(((int)ppbVar44 - iVar15) - *(int *)(pcVar11 + ((int)ppbVar44 - iVar15)));
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar31 = (byte)unaff_EBX;
    cVar8 = bVar6 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar46 = (byte *)CONCAT22(uVar27,CONCAT11(cVar8,bVar31));
    *pcVar11 = *pcVar11 + bVar7;
    uVar20 = (undefined3)((uint)pcVar11 >> 8);
    uVar13 = CONCAT31(uVar20,bVar7 + 7);
    puVar22 = (uint *)((int)ppbVar44 + -0x1faeef1);
    uVar37 = *puVar22;
    uVar1 = *puVar22 + uVar13;
    *puVar22 = uVar1 + (0xf8 < bVar7);
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,uVar25);
    puVar42 = puStack_60;
    bVar6 = bVar7 + 7 + (byte)*puVar18 +
            (CARRY4(uVar37,uVar13) || CARRY4(uVar1,(uint)(0xf8 < bVar7)));
    puVar22 = (uint *)CONCAT31(uVar20,bVar6);
    bVar7 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    if (CARRY1(bVar7,bVar6)) break;
    *(byte *)puVar22 = (byte)*puVar22 + bVar6;
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar8 + pbVar46[0x76],bVar31));
    uStack_64 = uVar25;
  }
  *(byte *)puVar22 = (byte)*puVar22 + bVar6;
  uVar21 = (undefined3)((uint)pcVar19 >> 8);
  bVar26 = (byte)parameterStrings | *pbVar46;
  parameterStrings = (uint *)CONCAT31(uVar21,bVar26);
  pcRam2b060000 = (char *)CONCAT31(uVar20,bVar6 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar6 + 0x39)) - (0xd7 < (byte)(bVar6 + 0x11));
  bVar7 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar4;
  pbVar45 = pbVar10 + 4;
  out(*(undefined4 *)pbVar10,(short)parameterStrings);
  bVar7 = (bVar6 + 0x37) - CARRY1(bVar7,bVar4);
  piVar16 = (int *)CONCAT31(uVar20,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar7;
    iVar15 = CONCAT31(uVar20,bVar7 + 0x11) + 0xc77b;
    pcVar11 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + 'r');
    pcVar11[0x28] = pcVar11[0x28] + bVar33;
code_r0x00404b89:
    cVar5 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar5;
    *pcVar11 = *pcVar11 + cVar5;
    *pcVar11 = *pcVar11 + cVar5;
    puVar12 = (ushort *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5 + 'r');
    uVar9 = (ushort)puVar12 | *puVar12;
    pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),uVar9);
    bRam11060000 = (byte)uVar9;
    out(*(undefined4 *)pbVar45,(short)parameterStrings);
    *pcVar11 = *pcVar11 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar7;
  pbVar29 = (byte *)((int)ppbVar44 - *(int *)((int)puVar47 + 0x21));
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pcVar11 = (char *)CONCAT31(uVar21,bVar26 | *pbVar46);
  puVar47 = (uint *)(pbVar10 + 8);
  out(*(undefined4 *)pbVar45,(short)pcVar11);
  uVar37 = *puVar18;
  *pcVar11 = *pcVar11 + cVar5;
  uVar37 = CONCAT31(uVar20,bVar7 & (byte)uVar37) | 0x767b02;
  *(byte *)((int)puVar18 + (int)pcVar11) = *(byte *)((int)puVar18 + (int)pcVar11) + (char)uVar37;
  iVar15 = uVar37 + 0xc67b;
  cVar39 = (char)iVar15;
  uVar20 = (undefined3)((uint)iVar15 >> 8);
  cVar32 = cVar39 + 'r';
  pcVar11 = (char *)CONCAT31(uVar20,cVar32);
  pcVar11[0x28] = pcVar11[0x28] + bVar33;
  *pcVar11 = *pcVar11 + cVar32;
  uVar24 = (undefined2)((uint)puVar18 >> 0x10);
  bVar4 = bVar4 | *(byte *)((int)puStack_60 + -0x5e);
  puVar38 = (uint *)CONCAT22(uVar24,CONCAT11(bVar4,cVar5));
  *pcVar11 = *pcVar11 + cVar32;
  puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,uStack_64);
  pbVar45 = (byte *)CONCAT22(uVar27,CONCAT11(cVar8 + pbVar46[0x76],bVar31));
  *pcVar11 = *pcVar11 + cVar32;
  puVar22 = (uint *)CONCAT31(uVar20,cVar39 + -0x1c);
  pcVar11 = (char *)((uint)puVar22 | *puVar22);
  bVar48 = (POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar11;
  puVar22 = puStack_60;
  pbVar46 = pbVar45;
  pbVar36 = pbVar29;
  puVar18 = puVar42;
  uVar25 = uStack_64;
  if (!bVar48) goto code_r0x00404ca8;
  *pcVar11 = *pcVar11 + cRam02060000;
  puVar22 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cRam02060000 + 'r');
  *puVar22 = *puVar22 & (uint)puVar38;
  *(char *)((int)puVar22 + 0x11) = *(char *)((int)puVar22 + 0x11) + (char)((ushort)uStack_64 >> 8);
  iVar15 = (int)puVar22 + 0xc77b;
  uVar20 = (undefined3)((uint)iVar15 >> 8);
  cRam02060000 = (char)iVar15 + '\t';
  pbVar46 = (byte *)CONCAT31(uVar20,cRam02060000);
  out(*puVar47,uStack_64);
  *pbVar46 = *pbVar46 + cRam02060000;
  puVar18 = (uint *)CONCAT22(uVar24,CONCAT11(bVar4 | *pbVar46,cVar5));
  *(int *)pbVar46 = *(int *)pbVar46 - (int)pbVar46;
  *(byte *)puStack_60 = (byte)*puStack_60 + cVar5;
  out(*(undefined4 *)(pbVar10 + 0xc),uStack_64);
  puVar28 = puStack_60;
  puVar47 = (uint *)(pbVar10 + 0x10);
  uVar25 = uStack_64;
  if ((POPCOUNT((byte)*puStack_60) & 1U) != 0) goto code_r0x00404cca;
  *pbVar46 = *pbVar46 + cRam02060000;
  puVar12 = (ushort *)CONCAT31(uVar20,(char)iVar15 + '{');
  uVar9 = (ushort)puVar12 | *puVar12;
  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),uVar9);
  bVar7 = (byte)uVar9;
  out(*(uint *)(pbVar10 + 0x10),uStack_64);
  pbVar46 = (byte *)((int)puVar18 + 1);
  bRam11060000 = bVar7;
  *pcVar11 = *pcVar11 + bVar7;
  puVar38 = (uint *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                             CONCAT11((byte)((uint)pbVar46 >> 8) | bRam110cde91,(char)pbVar46));
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar7 - 7);
  *puVar42 = (uint)(pcVar11 + (uint)(bVar7 < 7) + *puVar42);
  puVar47 = (uint *)(pbVar10 + 0x18);
  out(*(undefined4 *)(pbVar10 + 0x14),uStack_64);
  puVar22 = (uint *)((int)puStack_60 + 1);
  *pcVar11 = *pcVar11 + (bVar7 - 7);
  pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),bVar31 | (byte)(uVar9 >> 8));
  do {
    bVar7 = (char)pcVar11 - *pcVar11;
    uVar37 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + bVar7;
    cVar5 = bVar7 - CARRY1((byte)uVar37,bVar7);
    *(byte *)puVar22 = *(byte *)puVar22 + cVar5;
    cVar8 = (char)((uint)puVar38 >> 8);
    *(byte *)(puVar42 + 0x673b40) = (byte)puVar42[0x673b40] + cVar8;
    puVar17 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5);
    *(byte *)puVar17 = (byte)*puVar17 + cVar5;
    *(byte *)puVar22 = *(byte *)puVar22 + cVar5;
    *(byte **)(pbVar46 + 0x58) = (byte *)(*(int *)(pbVar46 + 0x58) + (int)puVar47);
    puVar18 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar38 >> 0x10),
                                               CONCAT11(cVar8 + (char)((uint)pcVar11 >> 8),
                                                        (char)puVar38)) >> 8),
                               (char)puVar38 + *(char *)((int)puVar17 * 2));
    *(byte *)puVar17 = (byte)*puVar17 + cVar5;
    *(byte *)puVar47 = (byte)*puVar47 + (char)pbVar46;
    puVar28 = puVar22;
    pbVar45 = pbVar46;
_ctor:
    bVar6 = (byte)((uint)puVar18 >> 8);
    uVar37 = *puVar17;
    bVar7 = (byte)puVar18;
    puVar17 = (uint *)((int)puVar17 + (uint)CARRY1(bVar6,(byte)*puVar17) + *puVar17);
    *(byte *)puVar28 = *(byte *)puVar28 + bVar7;
    cVar5 = bVar7 - *(byte *)((int)puVar28 + 3);
    puVar38 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar18 >> 0x10),
                                               CONCAT11(bVar6 + (byte)uVar37,bVar7)) >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      if (*(byte *)((int)puVar28 + 3) <= bVar7) {
        *puVar17 = (uint)(*puVar17 + (int)puVar17);
        puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(byte)puVar28 | *pbVar45);
        puVar17 = puVar17 + 0x230e;
        puVar18 = puVar38;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
    cVar5 = (char)puVar17 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)puVar17 >> 8),cVar5);
    bVar48 = (POPCOUNT(cVar5) & 1U) == 0;
    puVar22 = puVar28;
    pbVar46 = pbVar45;
    pbVar36 = pbVar29;
    puVar18 = puVar42;
    uVar25 = puStack_54._0_2_;
code_r0x00404ca8:
    puStack_54._0_2_ = uVar25;
    pcVar19 = pcStack_30;
    puVar28 = (uint *)pbStack_38;
    pbVar45 = pbStack_3c;
    pbVar29 = pbStack_44;
    puVar42 = puStack_4c;
    if (bVar48) break;
    *(byte *)puVar22 = *(byte *)puVar22 + (char)puVar38;
    pbVar29 = pbVar36;
    puVar42 = puVar18;
  } while( true );
  *pcVar11 = *pcVar11 + (char)pcVar11;
  bVar7 = (byte)pcStack_30;
  *pcStack_30 = *pcStack_30 + bVar7;
  puVar18 = (uint *)CONCAT22((short)((uint)puStack_34 >> 0x10),
                             CONCAT11((byte)((uint)puStack_34 >> 8) | *pbStack_38,(char)puStack_34))
  ;
  *pbStack_3c = *pbStack_3c + (char)pbStack_3c;
  pbVar10 = (byte *)((int)pcVar19 * 2);
  *pbVar10 = *pbVar10 ^ bVar7;
  uVar3 = *(undefined6 *)pcVar19;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar46 = (byte *)uVar3;
  bVar6 = (byte)uVar3;
  *pbVar46 = *pbVar46 + bVar6;
  bVar7 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar6;
  puVar47 = (uint *)((int)puVar18 + 0x11673);
  uVar37 = *puVar47;
  uVar1 = *puVar47;
  *puVar47 = (uint)((byte *)((int)puVar28 + uVar1) + CARRY1(bVar7,bVar6));
  puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,puStack_54._0_2_);
  pbVar46 = pbVar46 + (uint)(CARRY4(uVar37,(uint)puVar28) ||
                            CARRY4((int)puVar28 + uVar1,(uint)CARRY1(bVar7,bVar6))) +
                      *(int *)((int)puVar18 + (int)puVar28);
  puVar47 = puStack_48;
  uVar25 = puStack_54._0_2_;
code_r0x00404cca:
  puStack_54._0_2_ = uVar25;
  cVar5 = (char)pbVar46 + '\x04';
  puVar17 = (uint *)CONCAT31((int3)((uint)pbVar46 >> 8),cVar5);
  if (SCARRY1((char)pbVar46,'\x04') == cVar5 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
  puVar22 = puVar47 + 1;
  out(*puVar47,(short)puVar28);
  uVar37 = *puVar18;
  bVar7 = *(byte *)puVar28;
  bVar6 = (byte)puVar18;
  *(byte *)puVar28 = *(byte *)puVar28 + bVar6;
  iVar15 = (CONCAT31((int3)((uint)puVar17 >> 8),(char)puVar17 + '\x03') & uVar37) + iRam00008c38;
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar28;
  pcVar11 = (char *)(iVar15 + (uint)CARRY1(bVar7,bVar6) + 0x1246f);
  bVar7 = *(byte *)puVar28;
  uVar20 = (undefined3)((uint)puVar18 >> 8);
  puVar38 = (uint *)CONCAT31(uVar20,bVar6 | bVar7);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar11 >> 8);
  puVar17 = (uint *)(CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + *pcVar11) + 0x1fbeef2);
  uVar37 = *puVar17;
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  if (CARRY4(uVar37,(uint)puVar17)) {
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    pcVar11 = (char *)CONCAT31(uVar20,bVar6 | bVar7 | bRam00282809);
    cVar5 = (char)((uint)puVar18 >> 8);
    *pbVar45 = *pbVar45 + cVar5;
    *pcVar11 = *pcVar11 - cVar5;
    *(byte *)puVar17 = *(byte *)puVar17 + (char)puVar17;
    iVar15 = (int)pcVar11 - *(int *)pbVar45;
    puVar47 = puVar47 + 2;
    out(*puVar22,(short)puVar28);
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    puVar38 = (uint *)CONCAT22((short)((uint)iVar15 >> 0x10),
                               CONCAT11((byte)((uint)iVar15 >> 8) | bRambf73070b,(char)iVar15));
code_r0x00404d15:
    uVar37 = *puVar17;
    bVar7 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar7;
    puVar22 = puVar47 + 1;
    out(*puVar47,(short)puVar28);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    bVar6 = bVar7 + in_AF * '\x06';
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),
                               bVar6 + (0x90 < (bVar6 & 0xf0) |
                                       CARRY1((byte)uVar37,bVar7) | in_AF * (0xf9 < bVar6)) * '`');
  }
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  bVar6 = (byte)puVar17 | (byte)*puVar42;
  puVar47 = puVar22 + 1;
  uVar27 = SUB42(puVar28,0);
  out(*puVar22,uVar27);
  *(byte *)puVar38 = (byte)*puVar38 - bVar6;
  bVar7 = *(byte *)puVar28;
  bVar4 = (byte)puVar38;
  *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
  iVar15 = CONCAT31((int3)((uint)puVar17 >> 8),bVar6) + *puVar47 + (uint)CARRY1(bVar7,bVar4);
  pbVar10 = pbVar29 + -*puVar28;
  uVar20 = (undefined3)((uint)iVar15 >> 8);
  cVar5 = (char)iVar15 + (byte)*puVar47 + (pbVar29 < (byte *)*puVar28);
  puVar18 = (uint *)CONCAT31(uVar20,cVar5);
  bVar7 = (byte)((uint)puVar38 >> 8);
  *(byte *)puVar38 = (byte)*puVar38 - bVar7;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar4 = bVar4 | *(byte *)((int)puVar28 + (int)puVar18);
  uVar25 = (undefined2)((uint)puVar38 >> 0x10);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    pcVar11 = (char *)CONCAT31(uVar20,cVar5 + '\x12');
    *pcVar11 = *pcVar11 + bVar7;
    puVar18 = (uint *)CONCAT31(uVar20,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar38 >> 8),bVar4));
    bVar6 = *(byte *)puVar28;
    *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
    if (!CARRY1(bVar6,bVar4)) {
      pbVar46 = (byte *)((uint)puVar18 | *puVar18);
      out(*puVar47,uVar27);
      *pbVar46 = *pbVar46 + (char)pbVar46;
      bVar6 = *pbVar46;
      piVar16 = (int *)CONCAT22(uVar25,CONCAT11(bVar7 | bVar6,bVar4));
      iVar15 = (int)pbVar46 - *piVar16;
      *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
      puVar18 = puVar22 + 3;
      out(puVar22[2],uVar27);
      uRam12060000 = (undefined1)iVar15;
      *(char *)((int)piVar16 + iVar15) = *(char *)((int)piVar16 + iVar15) - (bVar7 | bVar6);
      *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
      pbVar46 = (byte *)(iVar15 + -0x120edecd);
      *(byte *)puVar18 = (byte)*puVar18 + 1;
      bVar7 = *pbVar46;
      bVar6 = (byte)pbVar46;
      *pbVar46 = *pbVar46 + bVar6;
      pbVar10 = pbVar10 + ((-1 - *(int *)((int)puVar42 + 0x42)) - (uint)CARRY1(bVar7,bVar6));
      *pbVar46 = *pbVar46 + bVar6;
      bVar33 = (byte)pbVar45 | (byte)((uint)pbVar46 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar46;
      bVar7 = *(byte *)puVar28;
      pcVar11 = (char *)(((uint)pbVar46 | 0x11) + 0x511072c);
      puVar47 = puVar22 + 4;
      out(*puVar18,uVar27);
      puVar28 = (uint *)((int)puVar28 + 1);
      *pcVar11 = *pcVar11 + (char)pcVar11;
      bVar6 = (byte)((uint)pcVar11 >> 8);
      pbVar45 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar45 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar45 >> 8) | bVar7,bVar33)
                                                ) >> 8),bVar33 | bVar6);
      uVar20 = (undefined3)((uint)pcVar11 >> 8);
      bVar7 = (char)pcVar11 - *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar20,bVar7);
      *pcVar11 = *pcVar11 + bVar7;
      *(int *)((int)pcVar11 * 2) = (int)(pbVar45 + *(int *)((int)pcVar11 * 2));
      *(byte *)puVar28 = *(byte *)puVar28 + bVar7;
      *pbVar10 = *pbVar10 + bVar6;
      in_AF = 9 < (bVar7 & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar20,bVar7 + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar37;
      pbVar46 = (byte *)CONCAT22((short)(uVar37 >> 0x10),CONCAT11(bVar6 + in_AF,bVar7));
      *(byte *)puVar47 = (byte)*puVar47 + bVar4;
      *pbVar46 = *pbVar46 + bVar7;
      *pbVar46 = *pbVar46 + bVar7;
      bVar48 = CARRY1(bVar7,*pbVar46);
      puVar18 = (uint *)CONCAT31((int3)((uint)pbVar46 >> 8),bVar7 + *pbVar46);
      goto code_r0x00404d9a;
    }
    *pbVar45 = *pbVar45 - (char)puVar28;
  }
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  bVar48 = false;
  piVar16 = (int *)CONCAT22(uVar25,CONCAT11(bVar7 | *(byte *)puVar28,bVar4));
code_r0x00404d9a:
  do {
    pbVar29 = (byte *)puVar28;
    *puVar18 = (*puVar18 - (int)puVar18) - (uint)bVar48;
    bVar7 = (byte)((uint)piVar16 >> 8);
    uVar25 = (undefined2)((uint)piVar16 >> 0x10);
    bVar6 = (byte)piVar16;
    bVar4 = bVar7 + (byte)iRam00000c00;
    pbVar46 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar7,(byte)iRam00000c00));
    *pbVar29 = *pbVar29 + bVar6;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(char)pbVar45 - (byte)*puVar47);
    bVar7 = *pbVar46;
    puVar18 = (uint *)(pbVar46 + (uint)CARRY1(bVar4,*pbVar46) + *(int *)pbVar46);
    *pbVar29 = *pbVar29 + bVar6;
    cVar8 = ((bVar4 + bVar7) - *pbVar29) + (byte)*puVar18;
    pcVar11 = (char *)CONCAT22(uVar25,CONCAT11(cVar8,bVar6));
    puVar22 = puVar42 + 1;
    uVar37 = in((short)pbVar29);
    *puVar42 = uVar37;
    cVar5 = (char)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    uVar20 = (undefined3)((uint)pbVar29 >> 8);
    bVar4 = (byte)pbVar29 | (byte)*puVar47;
    pcVar19 = (char *)CONCAT31(uVar20,bVar4);
    *pcVar11 = *pcVar11 + '\x01';
    bVar7 = (cVar8 - *pcVar19) + (byte)*puVar18;
    pcVar11 = (char *)CONCAT22(uVar25,CONCAT11(bVar7,bVar6));
    puVar42 = puVar42 + 2;
    uVar37 = in((short)pcVar19);
    *puVar22 = uVar37;
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    bVar4 = bVar4 | (byte)*puVar47;
    puVar28 = (uint *)CONCAT31(uVar20,bVar4);
    *pcVar11 = *pcVar11 + '\x01';
    bVar48 = bVar6 < *(byte *)((int)puVar28 + 2);
    cVar8 = bVar6 - *(byte *)((int)puVar28 + 2);
    piVar16 = (int *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar8);
  } while ((POPCOUNT(cVar8) & 1U) != 0);
  *(byte *)puVar18 = (byte)*puVar18 + cVar5;
  bVar6 = cVar5 + 0x7b;
  pbVar46 = (byte *)CONCAT31((int3)((uint)puVar18 >> 8),bVar6);
  pbVar45[(int)pbVar46] = pbVar45[(int)pbVar46] + bVar6;
  puVar22 = puVar47 + 1;
  uVar27 = SUB42(puVar28,0);
  out(*puVar47,uVar27);
  pbVar36 = pbVar45 + -1;
  *pbVar46 = *pbVar46 + bVar6;
  bVar7 = bVar7 | *(byte *)puVar28;
  piVar16 = (int *)CONCAT22(uVar25,CONCAT11(bVar7,cVar8));
  *pbVar46 = *pbVar46 + bVar6;
  *pbVar36 = *pbVar36 + bVar4;
  *pbVar36 = *pbVar36 ^ bVar6;
  *(byte *)puVar28 = *(byte *)puVar28 + bVar7;
  *pbVar46 = *pbVar46 + bVar6;
  do {
    bVar31 = (byte)((uint)piVar16 >> 8);
    *(byte *)puVar42 = (byte)*puVar42 + bVar31;
    bVar7 = *pbVar46;
    bVar6 = (byte)pbVar46;
    *pbVar46 = *pbVar46 + bVar6;
    *(byte **)(pbVar45 + 0x17) =
         (byte *)((int)puVar22 + (uint)CARRY1(bVar7,bVar6) + *(int *)(pbVar45 + 0x17));
    *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
    uVar21 = (undefined3)((uint)pbVar46 >> 8);
    bVar6 = bVar6 | (byte)*puVar22;
    puVar42 = (uint *)((int)puVar42 + *(int *)(pbVar10 + -0x34));
    *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
    bVar7 = bVar6 + 2;
    cVar5 = (char)((uint)pbVar29 >> 8);
    bVar33 = (byte)piVar16;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      pbVar46 = (byte *)CONCAT31(uVar21,bVar6 + 0x15 + (0xfd < bVar6));
      if (0xec < bVar7 || CARRY1(bVar6 + 0x15,0xfd < bVar6)) {
        *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
      }
code_r0x00404e60:
      pbVar10 = pbVar10 + -*puVar28;
      bVar7 = *pbVar46;
      *pbVar46 = *pbVar46 + (byte)pbVar46;
      pbVar45 = (byte *)((int)puVar22 + (-(uint)CARRY1(bVar7,(byte)pbVar46) - *(int *)pbVar46));
      pbVar46 = pbVar46 + *(int *)pbVar46;
      puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_DS);
      *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
      *(char *)piVar16 = (char)*piVar16 + cVar5;
      bVar7 = *pbVar46;
      *pbVar46 = *pbVar46 + (byte)pbVar46;
      *(byte **)(pbVar36 + (int)puVar28) =
           (byte *)((int)puVar28 +
                   (uint)CARRY1(bVar7,(byte)pbVar46) + *(int *)(pbVar36 + (int)puVar28));
      pbVar46 = pbVar46 + 0x73061314;
      *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
      uVar21 = (undefined3)((uint)piVar16 >> 8);
      bVar33 = bVar33 | *(byte *)puVar28;
      pcVar19 = (char *)CONCAT31(uVar21,bVar33);
      *pbVar46 = *pbVar46 + (char)pbVar46;
      cVar5 = (char)pbVar46 + 'o';
      pcVar11 = (char *)CONCAT31((int3)((uint)pbVar46 >> 8),cVar5);
      *pcVar11 = *pcVar11 + cVar5;
      out(*(undefined4 *)pbVar45,uVar27);
      bVar7 = *(byte *)puVar28;
      *(byte *)puVar28 = *(byte *)puVar28 + bVar33;
      pcVar11 = pcVar11 + (uint)CARRY1(bVar7,bVar33) + *puVar42;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      *pcVar19 = *pcVar19 + bVar4;
      puVar22 = (uint *)(pbVar45 + 8);
      out(*(undefined4 *)(pbVar45 + 4),uVar27);
      *(byte *)puVar28 = *(byte *)puVar28 + bVar33;
      piVar16 = (int *)((uint)pcVar11 | *puVar42);
      pcVar19[0x390a0000] = pcVar19[0x390a0000] - bVar31;
      pbVar46 = (byte *)&cRam07000000;
      *(byte *)puVar42 = (byte)*puVar42 - bVar31;
      *piVar16 = *piVar16 + (int)piVar16;
      puVar47 = (uint *)CONCAT31(uVar21,bVar33 | *(byte *)((int)piVar16 + (int)pcVar19));
      *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) - bVar31;
      cRam07000000 = cRam07000000 + bVar31;
      piVar16 = (int *)((uint)piVar16 | 0x777b02);
      pbVar45 = (byte *)((int)puVar42 + (int)pbVar10 * 2);
      bVar48 = SCARRY1(*pbVar45,(char)piVar16);
      *pbVar45 = *pbVar45 + (char)piVar16;
      bVar7 = *pbVar45;
      *(char *)piVar16 = (char)*piVar16;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar21,bVar7) = *(char *)CONCAT31(uVar21,bVar7) + bVar7;
    bVar6 = bVar6 + 0x71;
    pbVar46 = (byte *)CONCAT31(uVar21,bVar6);
    *pbVar46 = *pbVar46;
    *(byte *)puVar22 = (byte)*puVar22 + 1;
    *piVar16 = (*piVar16 - (int)pbVar46) - (uint)(0x90 < bVar7);
    uVar37 = *puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + bVar6;
    if (!CARRY1((byte)uVar37,bVar6)) goto code_r0x00404e60;
    *pbVar46 = *pbVar46 + bVar6;
    uVar25 = (undefined2)((uint)piVar16 >> 0x10);
    bVar31 = bVar31 | *pbVar46;
    pbVar46 = pbVar46 + -*(int *)pbVar46;
    *pbVar36 = *pbVar36 + bVar31;
    cVar8 = bVar33 - *(byte *)((int)puVar28 + 2);
    piVar16 = (int *)CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar31,bVar33)) >> 8),cVar8);
  } while ((POPCOUNT(cVar8) & 1U) != 0);
  cVar32 = (char)pbVar46;
  *pbVar46 = *pbVar46 + cVar32;
  uVar21 = (undefined3)((uint)pbVar46 >> 8);
  pcVar11 = (char *)CONCAT31(uVar21,cVar32 + '{');
  out(*puVar22,uVar27);
  *pcVar11 = *pcVar11 + cVar32 + '{';
  bVar6 = cVar32 + 0x7e;
  pbVar29 = (byte *)CONCAT31(uVar21,bVar6);
  puVar22 = puVar47 + 3;
  out(puVar47[2],uVar27);
  pbVar46 = pbVar45 + -2;
  *pbVar29 = *pbVar29 + bVar6;
  bVar7 = *(byte *)puVar28;
  puVar47 = (uint *)CONCAT22(uVar25,CONCAT11(bVar31 | bVar7,cVar8));
  *pbVar29 = *pbVar29 + bVar6;
  *pbVar46 = *pbVar46 + bVar4;
  *pbVar46 = *pbVar46 ^ bVar6;
  *(byte *)puVar28 = *(byte *)puVar28 + (bVar31 | bVar7);
  *pbVar29 = *pbVar29 + bVar6;
  *pbVar29 = *pbVar29 + cVar5;
  bVar7 = *pbVar29;
  *pbVar29 = *pbVar29 + bVar6;
  *(byte **)(pbVar45 + 0x18) =
       (byte *)((int)puVar22 + (uint)CARRY1(bVar7,bVar6) + *(int *)(pbVar45 + 0x18));
  *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
  bVar6 = bVar6 | (byte)*puVar22;
  puVar42 = (uint *)((int)puVar42 + *(int *)(pbVar10 + -0x33));
  *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
  bVar48 = SCARRY1(bVar6,'\x02');
  bVar7 = bVar6 + 2;
  piVar16 = (int *)CONCAT31(uVar21,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar7;
    return CONCAT31(uVar21,bVar6 + 0x71);
  }
code_r0x00404ebf:
  bVar6 = (byte)piVar16;
  uVar21 = (undefined3)((uint)piVar16 >> 8);
  if (bVar7 != 0 && bVar48 == (char)bVar7 < '\0') {
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    puVar22[(int)puVar42 * 2] =
         (uint)((int)puVar28 + (uint)(0xd2 < bVar6) + puVar22[(int)puVar42 * 2]);
    return CONCAT31(uVar21,bVar6 + 0x2d);
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar7 = *pbVar46;
  *puVar22 = (uint)(*puVar22 + (int)piVar16);
  bVar33 = (byte)((uint)puVar47 >> 8);
  *(byte *)piVar16 = (char)*piVar16 - bVar33;
  *(byte *)piVar16 = (char)*piVar16 + bVar6;
  pbVar45 = (byte *)(CONCAT31(uVar20,bVar4 | bVar7) - *(int *)pbVar46);
  puVar38 = (uint *)CONCAT31(uVar21,bVar6 + 6);
  *(uint *)(pbVar46 + (int)puVar22 * 2) =
       (int)puVar38 + (uint)(0xf9 < bVar6) + *(int *)(pbVar46 + (int)puVar22 * 2);
  *(byte *)puVar47 = (byte)*puVar47 ^ bVar6 + 6;
  bVar6 = (byte)puVar47;
  *pbVar45 = *pbVar45 + bVar6;
  puVar18 = puVar22 + 1;
  uVar25 = SUB42(pbVar45,0);
  out(*puVar22,uVar25);
  *puVar47 = *puVar47 ^ (uint)puVar38;
  *pbVar45 = *pbVar45 + bVar6;
  puVar28 = (uint *)(pbVar46 + -*(int *)pbVar46);
  *(uint *)((int)puVar42 + 0x31) = *(uint *)((int)puVar42 + 0x31) | (uint)pbVar10;
  *puVar38 = *puVar38 + (int)puVar38;
  puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar33 | (byte)*puVar28,bVar6))
  ;
  *(byte **)(pbVar45 + 0x6e) = (byte *)(*(int *)(pbVar45 + 0x6e) + (int)puVar18);
  piVar16 = (int *)((uint)puVar38 | *puVar38);
  bVar4 = (byte)puVar28;
  *(byte *)puVar42 = (byte)*puVar42 - bVar4;
  bVar7 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar6;
  if (CARRY1(bVar7,bVar6)) {
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar7 = pbVar45[0x11];
    uVar27 = (undefined2)((uint)puVar28 >> 0x10);
    out(*puVar18,uVar25);
    puVar47 = (uint *)((int)puVar47 + 1);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar26 = (byte)((uint)puVar28 >> 8) | bVar7 | *pbVar45;
    pcVar11 = (char *)((int)piVar16 + -0x21000001);
    bVar7 = (byte)pcVar11 | 0x11;
    uVar20 = (undefined3)((uint)pcVar11 >> 8);
    cVar5 = bVar7 - 7;
    pcVar19 = (char *)CONCAT31(uVar20,cVar5);
    *puVar42 = (uint)(pcVar19 + (uint)(bVar7 < 7) + *puVar42);
    puVar18 = puVar22 + 3;
    out(puVar22[2],uVar25);
    pbVar45 = pbVar45 + 1;
    *pcVar19 = *pcVar19 + cVar5;
    bVar33 = (byte)((uint)pcVar11 >> 8);
    bVar31 = bVar4 | bVar33;
    bVar6 = cVar5 - *pcVar19;
    bVar7 = *(byte *)puVar47;
    *(byte *)puVar47 = *(byte *)puVar47 + bVar6;
    *(char *)CONCAT31(uVar20,bVar6) = *(char *)CONCAT31(uVar20,bVar6) + bVar6 + CARRY1(bVar7,bVar6);
    *pbVar45 = *pbVar45 + bVar6;
    *(byte *)puVar18 = (byte)*puVar18 + bVar31;
    bVar7 = (byte)((uint)pbVar45 >> 8);
    *(byte *)puVar47 = *(byte *)puVar47 + bVar6 + CARRY1((byte)pbVar45,bVar7);
    piVar16 = (int *)CONCAT31(uVar20,bVar6);
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                               CONCAT11(bVar7 + bVar33,(byte)pbVar45 + bVar7));
    puVar28 = (uint *)CONCAT22(uVar27,CONCAT11(bVar26 + *(char *)(CONCAT31((int3)(CONCAT22(uVar27,
                                                  CONCAT11(bVar26,bVar4)) >> 8),bVar31) + 0x76),
                                               bVar31));
    puStack_54._0_2_ = puStack_60._0_2_;
code_r0x00404fa4:
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    pcVar11 = (char *)(CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + '(') ^ *puVar47);
    cVar32 = (char)puVar47;
    *pbVar45 = *pbVar45 + cVar32;
    uVar25 = (undefined2)((uint)puVar28 >> 0x10);
    cVar35 = (char)puVar28;
    cVar40 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x75);
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar5 = (char)pcVar11 + 'o';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5);
    *pcVar11 = *pcVar11 + cVar5;
    cVar39 = (char)((uint)puVar47 >> 8);
    *pbVar10 = *pbVar10 - cVar39;
    pbVar45[1] = pbVar45[1] + cVar32;
    pcVar11 = pcVar11 + -0x757b021b;
    cVar5 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar5;
    uVar20 = (undefined3)((uint)pcVar11 >> 8);
    cVar8 = cVar5 + 'o';
    pcVar11 = (char *)CONCAT31(uVar20,cVar8);
    pbVar29 = pbVar45 + 2;
    *pcVar11 = *pcVar11 + cVar8;
    iVar15 = CONCAT22(uVar25,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar40,cVar35)) +
                                                        0x76),cVar35));
    *pcVar11 = *pcVar11 + cVar8;
    pcVar11 = (char *)CONCAT31(uVar20,cVar5 + -0x22);
    puVar22 = (uint *)((int)puVar42 + 1);
    *(byte *)puVar42 = (byte)*puVar18;
    *pcVar11 = *pcVar11 + cVar5 + -0x22;
    *(byte *)((int)puVar47 + (int)pcVar11) =
         *(byte *)((int)puVar47 + (int)pcVar11) - (char)((uint)pbVar29 >> 8);
    *pbVar29 = *pbVar29 + cVar32;
    bVar6 = cVar39 - pbVar45[4];
    pbVar46 = (byte *)((int)puVar18 + 5);
    out(*(undefined4 *)((int)puVar18 + 1),(short)pbVar29);
    puVar42 = (uint *)((uint)(pcVar11 + *(int *)(pcVar11 + iVar15)) ^ 0x280a0001);
    *(byte *)puVar42 = (byte)*puVar42 << 1 | (char)(byte)*puVar42 < '\0';
    *pbVar46 = *pbVar46 + (char)puVar42;
    pbVar46 = pbVar46 + *(int *)(pbVar45 + -0x5c);
    pbVar45 = (byte *)((uint)puVar42 | *puVar42);
    *pbVar46 = *pbVar46 + (char)pbVar45;
    puVar28 = (uint *)CONCAT31((int3)((uint)iVar15 >> 8),cVar35 - (char)pbVar29);
    bVar7 = *pbVar45;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar6 + *pbVar45,cVar32));
    iVar15 = *(int *)pbVar45;
    *pbVar29 = *pbVar29 + cVar32;
    cVar5 = (char)(pbVar45 + (uint)CARRY1(bVar6,bVar7) + iVar15) + 'r';
    puVar42 = (uint *)CONCAT31((int3)((uint)(pbVar45 + (uint)CARRY1(bVar6,bVar7) + iVar15) >> 8),
                               cVar5);
    pbVar45 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),CONCAT11(10,(char)pbVar29));
    *(char *)(puVar42 + 10) = (char)puVar42[10] + '\n';
    *pbVar46 = *pbVar46 + cVar5;
    puVar18 = (uint *)(pbVar46 + *(int *)(pbVar45 + -0x5e));
    uVar37 = *puVar42;
    cVar5 = (char)((uint)puVar42 | uVar37);
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    uVar20 = (undefined3)(((uint)puVar42 | uVar37) >> 8);
    cVar8 = cVar5 + (byte)*puVar28;
    puVar42 = (uint *)CONCAT31(uVar20,cVar8);
    if (SCARRY1(cVar5,(byte)*puVar28) == cVar8 < '\0') goto code_r0x00405090;
    *(byte *)puVar42 = (byte)*puVar42 + cVar8;
    piVar16 = (int *)CONCAT31(uVar20,cVar8 + '\x02');
    puVar42 = puVar22;
  }
  else {
    out(2,(char)piVar16);
    if ((POPCOUNT(*pbVar45) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar20 = (undefined3)((uint)piVar16 >> 8);
  cVar5 = (char)piVar16 + '}';
  pbVar46 = (byte *)CONCAT31(uVar20,cVar5);
  pbVar45[(int)pbVar46] = pbVar45[(int)pbVar46] + cVar5;
  pbVar45[0x280a0000] = pbVar45[0x280a0000] - (char)((uint)piVar16 >> 8);
  bVar7 = (byte)puVar47 & 7;
  *pbVar46 = *pbVar46 << bVar7 | *pbVar46 >> 8 - bVar7;
  *(byte *)puVar18 = (byte)*puVar18 + cVar5;
  cVar32 = (char)puVar28 - (byte)*puVar18;
  uVar25 = (undefined2)((uint)puVar28 >> 0x10);
  cVar39 = (char)((uint)puVar28 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar28 >> 8),cVar32) + 0x7c);
  pcVar11 = (char *)CONCAT22(uVar25,CONCAT11(cVar39,cVar32));
  *pbVar46 = *pbVar46 + cVar5;
  bVar6 = (char)piVar16 + 0xa7U & *pbVar45;
  puVar22 = (uint *)((int)puVar42 + *(int *)(pbVar10 + 0x7c));
  *(char *)CONCAT31(uVar20,bVar6) = *(char *)CONCAT31(uVar20,bVar6) + bVar6;
  bVar6 = bVar6 + 0x2a;
  pbVar46 = (byte *)CONCAT31(uVar20,bVar6);
  *pbVar46 = *pbVar46 + bVar6;
  *pcVar11 = *pcVar11 + cVar32;
  *pbVar45 = *pbVar45 ^ bVar6;
  *pcVar11 = *pcVar11 + bVar6;
  bVar7 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar6;
  cVar5 = (bVar6 - *pbVar46) - CARRY1(bVar7,bVar6);
  *(byte *)puVar47 = (byte)*puVar47 + (byte)pbVar45;
  cVar39 = cVar39 + pcVar11[0x7b];
  *(char *)CONCAT31(uVar20,cVar5) = *(char *)CONCAT31(uVar20,cVar5) + cVar5;
  pcVar11 = (char *)CONCAT31(uVar20,cVar5 + 'o');
  *pcVar11 = *pcVar11 + cVar5 + 'o';
  pcVar11 = pcVar11 + 0x2ed7fde6;
  cVar8 = (char)pcVar11;
  *pcVar11 = *pcVar11 + cVar8;
  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar39,cVar32)) + 0x7b);
  *pcVar11 = *pcVar11 + cVar8;
  piVar16 = (int *)(CONCAT31((int3)((uint)pcVar11 >> 8),cVar8 + 'o') + 0x6f060000);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar21 = (undefined3)((uint)pbVar45 >> 8);
  bVar6 = (byte)pbVar45 | (byte)*puVar18;
  pbVar29 = (byte *)CONCAT31(uVar21,bVar6);
  uVar37 = CONCAT22(uVar25,CONCAT11(cVar39 + cVar5,cVar32)) | (uint)puVar18;
  uVar20 = (undefined3)((uint)piVar16 >> 8);
  bVar7 = (byte)piVar16 | *pbVar29;
  pbVar46 = (byte *)CONCAT31(uVar20,bVar7);
  cVar5 = (byte)puVar47 - bVar6;
  puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),cVar5);
  *pbVar46 = *pbVar46 + bVar7;
  puVar42 = puVar18 + 1;
  out(*puVar18,(short)pbVar29);
  *pbVar46 = bVar7;
  *pbVar29 = *pbVar29 + cVar5;
  puVar18 = puVar18 + 2;
  out(*puVar42,(short)pbVar29);
  *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
  puVar28 = (uint *)(CONCAT31((int3)(uVar37 >> 8),(char)uVar37 - (char)((uint)pbVar45 >> 8)) |
                    (uint)puVar18);
  pbVar45 = (byte *)CONCAT31(uVar21,(bVar6 | (byte)*puVar18) + (byte)*puVar22);
  cVar5 = bVar7 - (byte)*puVar22;
  puVar42 = (uint *)CONCAT31(uVar20,cVar5 - *(char *)CONCAT31(uVar20,cVar5));
code_r0x00405090:
  *puVar42 = (uint)(pbVar45 + *puVar42);
  cVar5 = (char)puVar42;
  *(byte *)puVar42 = (byte)*puVar42 + cVar5;
  *(byte *)puVar42 = (byte)*puVar42 + cVar5;
  *(byte *)puVar42 = (byte)*puVar42 + cVar5;
  *puVar47 = *puVar47 - (int)pbVar10;
  uVar37 = *puVar18;
  bVar7 = (byte)pbVar45;
  *(byte *)puVar18 = (byte)*puVar18 + bVar7;
  *(byte *)puVar42 = (byte)*puVar42 + cVar5 + CARRY1((byte)uVar37,bVar7);
  *(byte *)puVar47 = (byte)*puVar47 + cVar5;
  uVar37 = *puVar28;
  *(byte *)puVar28 = (byte)*puVar28 + 0x72;
  *(byte *)puVar28 = (byte)*puVar28;
  cVar5 = (char)((uint)pbVar45 >> 8);
  if (SCARRY1((byte)uVar37,'r')) {
    puVar18 = (uint *)((int)puVar18 + *(int *)(pbVar45 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar18 = (byte)*puVar18 + (char)puVar42;
      uVar20 = (undefined3)((uint)puVar42 >> 8);
      cVar8 = (char)puVar42 + (byte)*puVar28;
      pcVar11 = (char *)CONCAT31(uVar20,cVar8);
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                 CONCAT11((char)((uint)puVar28 >> 8) +
                                          *(byte *)((int)puVar28 + 0x7b),(char)puVar28));
      *pcVar11 = *pcVar11 + cVar8;
      in_AF = 9 < (cVar8 + 0x6fU & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar20,cVar8 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar37;
      piVar16 = (int *)CONCAT22((short)(uVar37 >> 0x10),
                                CONCAT11((char)((uint)puVar42 >> 8) + in_AF,bVar4));
      *piVar16 = *piVar16 + (int)piVar16;
      uVar20 = (undefined3)((uint)piVar16 >> 8);
      bVar4 = bVar4 | *(byte *)(piVar16 + 0x354a);
      bVar4 = bVar4 - *(char *)CONCAT31(uVar20,bVar4);
      pbVar46 = (byte *)CONCAT31(uVar20,bVar4);
      bVar6 = *pbVar46;
      *pbVar46 = *pbVar46 + bVar4;
      puVar18 = (uint *)((int)puVar18 + (-(uint)CARRY1(bVar6,bVar4) - *(int *)pbVar46));
      puVar42 = (uint *)(pbVar46 + 0xfc00);
      *pbVar45 = *pbVar45 + cVar5;
      uVar37 = *puVar42;
      bVar6 = (byte)puVar42;
      *(byte *)puVar42 = (byte)*puVar42 + bVar6;
      uVar13 = (uint)CARRY1((byte)uVar37,bVar6);
      uVar37 = *puVar28;
      uVar1 = *puVar28;
      *puVar28 = (uint)((byte *)(uVar1 + (int)puVar42) + uVar13);
      if (!CARRY4(uVar37,(uint)puVar42) && !CARRY4(uVar1 + (int)puVar42,uVar13)) break;
      *(byte *)puVar42 = (byte)*puVar42 + bVar6;
    }
  }
  uVar37 = (uint)puVar42 | *puVar42;
  uVar25 = SUB42(pbVar45,0);
  *(byte *)puVar18 = (byte)*puVar18 + (char)uVar37;
  piVar16 = (int *)(uVar37 + 0xc1872);
  if (SCARRY4(uVar37,0xc1872)) {
    cVar8 = (char)piVar16;
    *(char *)piVar16 = *(char *)piVar16 + cVar8;
    *pbVar45 = *pbVar45 + cVar8;
    *(char *)piVar16 = *(char *)piVar16 + cVar8;
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar47;
    *(char *)piVar16 = *(char *)piVar16 + cVar8;
    *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) + bVar7;
    puVar42 = puVar18;
    goto code_r0x00405117;
  }
  do {
    uVar37 = *puVar18;
    bVar7 = (byte)piVar16;
    *(byte *)puVar18 = (byte)*puVar18 + bVar7;
    if (CARRY1((byte)uVar37,bVar7)) {
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      uVar20 = (undefined3)((uint)puVar47 >> 8);
      bVar6 = (byte)puVar47 | bRam396f1609;
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      puVar47 = (uint *)CONCAT31(uVar20,bVar6 | *(byte *)CONCAT31(uVar20,bVar6));
      uVar20 = (undefined3)((uint)piVar16 >> 8);
      bVar7 = bVar7 | *pbVar45;
      pcVar11 = (char *)CONCAT31(uVar20,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar42 = puVar18 + 1;
        out(*puVar18,uVar25);
        uVar37 = CONCAT22((short)((uint)piVar16 >> 0x10),(ushort)bVar7);
        *(byte *)puVar42 = (byte)*puVar42 + bVar7;
        pcVar11 = (char *)(uVar37 | 8);
        cVar8 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x7a);
        puVar38 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar8,(char)puVar28));
        *pcVar11 = *pcVar11 + (char)pcVar11;
        cVar5 = (char)pcVar11 + 'o';
        piVar16 = (int *)CONCAT31((int3)(uVar37 >> 8),cVar5);
        *(char *)piVar16 = (char)*piVar16 + cVar5;
        *(byte *)puVar47 = (byte)*puVar47 + 1;
        puVar18 = puVar18 + 2;
        out(*puVar42,uVar25);
        pbVar45 = (byte *)((uint)pbVar45 ^ uRam08122c04);
        iVar15 = CONCAT31((int3)((uint)(*piVar16 * 0x17070600) >> 8),2);
        *(char *)(iVar15 * 2) = *(char *)(iVar15 * 2) - cVar8;
        do {
          bVar7 = (byte)iVar15;
          *(byte *)puVar18 = (byte)*puVar18 + bVar7;
          bVar48 = CARRY1(bVar7,(byte)*puVar38);
          uVar20 = (undefined3)((uint)iVar15 >> 8);
          cVar5 = bVar7 + (byte)*puVar38;
          pbVar46 = (byte *)CONCAT31(uVar20,cVar5);
          uVar25 = in_DS;
          uVar27 = uStack_a0;
          if (SCARRY1(bVar7,(byte)*puVar38) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar46 = *pbVar46 + cVar5;
          uVar37 = CONCAT31(uVar20,cVar5 + '\'') + 0x1ebd9f3;
          uStack_a4 = (undefined1)puStack_54._0_2_;
          uStack_a3 = (undefined1)((ushort)puStack_54._0_2_ >> 8);
          piVar16 = (int *)(uVar37 ^ 0x73060000);
          puVar47 = (uint *)((int)puVar47 + 1);
          *piVar16 = (int)(*piVar16 + (int)piVar16);
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11((byte)((uint)puVar38 >> 8) | pbVar10[0x7e],
                                              (char)puVar38));
          cVar5 = (char)uVar37;
          *(char *)piVar16 = (char)*piVar16 + cVar5;
          uVar37 = CONCAT31((int3)((uint)piVar16 >> 8),cVar5 + '\x02');
          bVar48 = 0xd9f2d2da < uVar37;
          iVar15 = uVar37 + 0x260d2d25;
          pbVar29 = pbVar10;
          do {
            uVar20 = (undefined3)((uint)iVar15 >> 8);
            bVar6 = (char)iVar15 + -2 + bVar48;
            pbVar10 = (byte *)CONCAT31(uVar20,bVar6);
            bVar7 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar6;
            bVar4 = (byte)puVar38;
            uStack_a0 = puStack_54._0_2_;
            if (CARRY1(bVar7,bVar6)) {
              *pbVar10 = *pbVar10 + bVar6;
              puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                         CONCAT11((byte)((uint)puVar38 >> 8) | pbVar29[0x7f],bVar4))
              ;
              *pbVar10 = *pbVar10 + bVar6;
              pbVar46 = (byte *)CONCAT31(uVar20,bVar6 + 0x2a);
              *pbVar46 = *pbVar46 + bVar6 + 0x2a;
              *(byte *)puVar38 = (byte)*puVar38 + (char)pbVar45;
              uVar25 = in_DS;
              while( true ) {
                in_DS = uVar25;
                bVar6 = (byte)pbVar46;
                *pbVar45 = *pbVar45 ^ bVar6;
                *pbVar45 = *pbVar45 + (char)puVar38;
                *pbVar46 = *pbVar46 + bVar6;
                *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pbVar45 >> 8);
                bVar7 = *pbVar46;
                *pbVar46 = *pbVar46 + bVar6;
                uVar1 = *puVar38;
                uVar37 = *puVar38;
                *puVar38 = (uint)(pbVar46 + uVar37 + CARRY1(bVar7,bVar6));
                uVar20 = (undefined3)((uint)pbVar46 >> 8);
                if (CARRY4(uVar1,(uint)pbVar46) ||
                    CARRY4((uint)(pbVar46 + uVar37),(uint)CARRY1(bVar7,bVar6))) break;
                *(byte *)puVar18 = (byte)*puVar18 + bVar6;
                pcVar11 = (char *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                           CONCAT11((char)((uint)puVar47 >> 8) + *pbVar46,
                                                    (char)puVar47));
                *(byte *)puVar18 = (byte)*puVar18 + bVar6;
                piVar16 = (int *)CONCAT31(uVar20,bVar6 | (byte)*puVar38);
                puVar47 = puVar18;
                while( true ) {
                  puVar18 = puVar47 + 1;
                  out(*puVar47,(short)pbVar45);
                  pbVar45 = pbVar45 + 1;
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  bVar4 = (byte)((uint)pcVar11 >> 8) | *pbVar45;
                  uVar20 = (undefined3)((uint)piVar16 >> 8);
                  bVar6 = (byte)piVar16 ^ *pbVar45;
                  pcVar19 = (char *)CONCAT31(uVar20,bVar6);
                  cRam282b0000 = cRam282b0000 - bVar4;
                  *pcVar19 = *pcVar19 + bVar6;
                  pbVar10 = pbVar29 + -*(int *)pbVar45;
                  uStack_a4 = (undefined1)in_DS;
                  uStack_a3 = (undefined1)((ushort)in_DS >> 8);
                  bVar7 = *(byte *)((int)puVar22 + 0x17);
                  *pcVar19 = *pcVar19 + bVar6;
                  puVar47 = (uint *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                             CONCAT11(bVar4 + bVar7 | *pbVar45,(char)pcVar11));
                  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
                  *(byte *)((int)pcVar19 * 2) = *(byte *)((int)pcVar19 * 2) ^ bVar6;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  bVar6 = bVar6 + in_AF * -6;
                  pbVar46 = (byte *)CONCAT31(uVar20,bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
                  *(char *)((int)pbVar46 * 2) =
                       *(char *)((int)pbVar46 * 2) + (char)((uint)pbVar45 >> 8);
                  bVar48 = CARRY1((byte)*puVar47,(byte)pbVar45);
                  *(byte *)puVar47 = (byte)*puVar47 + (byte)pbVar45;
                  uVar25 = in_DS;
                  uVar27 = puStack_54._0_2_;
GenerateStatusText:
                  in_DS = uVar27;
                  pbVar29 = pbVar10;
                  uStack_a0 = in_DS;
                  if (!bVar48) break;
                  *pbVar46 = *pbVar46 + (char)pbVar46;
                  iVar15 = CONCAT31((int3)((uint)puVar47 >> 8),(byte)puVar47 | *pbVar45);
                  uVar25 = (undefined2)((uint)puVar38 >> 0x10);
                  cVar32 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x7d);
                  *pbVar46 = *pbVar46 + (char)pbVar46;
                  *(byte *)puVar22 = (byte)*puVar22 - (char)((uint)puVar47 >> 8);
                  iVar15 = iVar15 - *(int *)(&uRam0b0a0000 + iVar15);
                  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar32,(char)puVar38)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar18,(short)pbVar45);
                  pbVar45 = (byte *)CONCAT22(uStack_a2,CONCAT11(uStack_a3,uStack_a4));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar47 = puVar18 + 2;
                  out(puVar18[1],CONCAT11(uStack_a3,uStack_a4));
                  pbVar29 = pbVar10 + 1;
                  cVar8 = (char)iVar15;
                  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),
                                             CONCAT11((byte)((uint)iVar15 >> 8) |
                                                      *(byte *)((int)puVar22 + 0x46),cVar8));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_54._0_2_ = CONCAT11(uStack_a3,uStack_a4);
                  uVar20 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar47,0xf0)) >> 8);
                  piVar16 = (int *)CONCAT31(uVar20,0x5f);
                  puVar22 = (uint *)((int)puVar22 + 1);
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  puVar38 = (uint *)CONCAT22(uVar25,CONCAT11(cVar32 + cVar5 | (byte)puVar18[-0x1e],
                                                             (char)puVar38));
                  *(char *)piVar16 = (char)*piVar16 + '_';
                  puVar42 = (uint *)CONCAT31(uVar20,0x8c);
                  puVar47[(int)puVar22 * 2] = (uint)(pbVar45 + puVar47[(int)puVar22 * 2]);
                  uVar37 = *puVar47;
                  *(byte *)puVar47 = (byte)*puVar47 + 0x8c;
                  if ((byte)uVar37 < 0x74) {
                    *pbVar45 = *pbVar45 + cVar8;
                    *(byte *)puVar38 = (byte)*puVar38 >> 1;
                    *(char *)puVar42 = (char)*puVar42 + -0x74;
                    *puVar42 = (uint)(pbVar29 + *puVar42);
                    *puVar42 = *puVar42 << 1 | (uint)((int)*puVar42 < 0);
                    *pbVar45 = *pbVar45 + cVar8;
                    pbVar10[2] = pbVar10[2] - cVar8;
                    *pbVar45 = *pbVar45 + cVar8;
                    pbVar10 = (byte *)CONCAT31(uVar20,0x83);
                    puVar42 = puVar38;
                    goto code_r0x00405312;
                  }
                  *puVar42 = (uint)(*puVar42 + (int)puVar42);
                  piVar16 = (int *)(CONCAT31(uVar20,(byte)puVar42[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar42[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar16 = (int *)((int)piVar16 + *puVar47);
                }
              }
              *pbVar45 = *pbVar45 + bVar6;
              *(byte *)puVar38 = (byte)*puVar38 - (char)pbVar45;
              *pbVar46 = *pbVar46 + bVar6;
              pbVar10 = (byte *)CONCAT31(uVar20,bVar6 | (byte)*puVar38);
            }
            else {
              cVar5 = (char)puVar47;
              *pbVar45 = *pbVar45 + cVar5;
              *(byte **)pbVar10 = pbVar45 + *(int *)pbVar10;
              *pbVar10 = *pbVar10 + bVar6;
              bVar6 = bVar6 + *pbVar10;
              pbVar10 = (byte *)CONCAT31(uVar20,bVar6);
              if (-1 < (char)bVar6) {
                *(byte *)puVar38 = (byte)*puVar38 + bVar4;
                out(*puVar18,(short)pbVar45);
                pbVar45 = pbVar45 + 1;
                *pbVar10 = *pbVar10 + bVar6;
                puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                           bVar4 | (byte)((uint)iVar15 >> 8));
                cVar8 = bVar6 - (byte)*puVar47;
                pcVar11 = (char *)CONCAT31(uVar20,cVar8);
                *pcVar11 = *pcVar11 + cVar8 + (bVar6 < (byte)*puVar47);
                *pbVar45 = *pbVar45 + cVar8;
                pcVar11 = (char *)((int)pcVar11 * 2 + 0x79);
                *pcVar11 = *pcVar11 + (char)((uint)pbVar45 >> 8);
                pbVar10 = (byte *)in((short)pbVar45);
                puVar18 = puVar18 + 1;
              }
              *(byte *)puVar18 = (byte)*puVar18 + cVar5;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              uStack_a4 = (undefined1)in_DS;
              uStack_a3 = (undefined1)((ushort)in_DS >> 8);
              bVar7 = *pbVar10;
              bVar33 = (byte)((uint)puVar47 >> 8);
              bVar4 = bVar33 + *pbVar10;
              iVar15 = *(int *)pbVar10;
              *pbVar45 = *pbVar45 + cVar5;
              bVar6 = (char)(pbVar10 + (uint)CARRY1(bVar33,bVar7) + iVar15) - (byte)*puVar38;
              pbVar10 = (byte *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar33,bVar7) + iVar15
                                                      ) >> 8),bVar6);
              *(byte *)puVar38 = (byte)*puVar38 ^ bVar6;
              *pbVar29 = *pbVar29 + (char)puVar38;
              *pbVar10 = *pbVar10 + bVar6;
              *pbVar10 = *pbVar10 + bVar6;
              *pbVar10 = *pbVar10 + bVar6;
              puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                         CONCAT11(bVar4 + *pbVar10,cVar5));
              pbVar10 = pbVar10 + (uint)CARRY1(bVar4,*pbVar10) + *(int *)pbVar10;
              *pbVar45 = *pbVar45 + cVar5;
              puVar18 = (uint *)((int)puVar18 + *(int *)(pbVar45 + 0x3e));
            }
            *(byte *)puVar18 = (byte)*puVar18 + (char)pbVar10;
            cVar5 = (char)pbVar10 + 'r';
            puVar18 = (uint *)((int)puVar18 + -1);
            uVar37 = CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
            *(byte *)puVar18 = *(byte *)puVar18 + cVar5;
            bVar48 = 0xfff38f8d < uVar37;
            iVar15 = uVar37 + 0xc7072;
            pbVar10 = pbVar29;
          } while (SCARRY4(uVar37,0xc7072));
        } while( true );
      }
      *pcVar11 = *pcVar11 + bVar7;
      bVar7 = bVar7 + 0x6f;
      pbVar46 = (byte *)CONCAT31(uVar20,bVar7);
      bVar6 = *pbVar46;
      *pbVar46 = *pbVar46 + bVar7;
      uVar20 = (undefined3)
               ((uint)(pbVar46 + (uint)CARRY1(bVar6,bVar7) + *(int *)((int)puVar47 + (int)pbVar45))
               >> 8);
      cVar8 = (char)(pbVar46 + (uint)CARRY1(bVar6,bVar7) + *(int *)((int)puVar47 + (int)pbVar45)) +
              'E';
      pcVar11 = (char *)CONCAT31(uVar20,cVar8);
      *pcVar11 = *pcVar11 + cVar8;
      cVar8 = cVar8 + *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar20,cVar8);
      *pcVar11 = *pcVar11 + cVar8;
      puVar42 = (uint *)CONCAT31(uVar20,cVar8 + *pcVar11);
      *(char *)puVar42 = (char)*puVar42 + cVar8 + *pcVar11;
      pbVar46 = (byte *)((uint)puVar42 | *puVar42);
      bVar7 = *pbVar46;
      bVar6 = (byte)pbVar46;
      *pbVar46 = *pbVar46 + bVar6;
      piVar16 = (int *)CONCAT31((int3)((uint)pbVar46 >> 8),bVar6 + CARRY1(bVar7,bVar6));
      puVar42 = puVar18;
code_r0x00405117:
      *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
      puVar28 = (uint *)((int)puVar28 - *puVar28);
      puVar18 = puVar42 + 1;
      out(*puVar42,uVar25);
    }
    *pbVar45 = *pbVar45 + (char)puVar47;
    bVar48 = puVar28 < (uint *)*piVar16;
    puVar28 = (uint *)((int)puVar28 - *piVar16);
    bVar7 = (byte)((uint)puVar47 >> 8);
    *(byte *)((int)puVar22 + 0x39) = (*(byte *)((int)puVar22 + 0x39) - bVar7) - bVar48;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    uVar37 = *puVar28;
    *(int *)((int)puVar22 + 0x39) = *(int *)((int)puVar22 + 0x39) - (int)pbVar10;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                               CONCAT11(bVar7 | (byte)uVar37 | (byte)*puVar28,(char)puVar47));
    *(char *)(piVar16 + 10) = (char)piVar16[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  bVar7 = (char)piVar16 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),bVar7);
  *pbVar10 = *pbVar10 ^ bVar7;
  *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pcVar11 >> 8);
  bVar7 = *pbVar45;
  *pbVar45 = *pbVar45 + (byte)pcVar11;
  piVar16 = (int *)(((uint)pbVar10 | 0x1496f09) + *puVar22 + (uint)CARRY1(bVar7,(byte)pcVar11));
  puVar18 = puVar47 + 1;
  out(*puVar47,(short)pbVar45);
  pbVar46 = pbVar45 + -1;
  *piVar16 = *piVar16 + (int)piVar16;
  pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),(byte)pbVar46 | (byte)*puVar38);
  cVar5 = (char)piVar16 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),cVar5);
  puVar42 = puVar38;
  puVar47 = puVar18;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar45 = *pbVar45 - (char)((uint)pbVar46 >> 8);
    *pbVar10 = *pbVar10 + cVar5;
code_r0x00405396:
    bVar7 = *pbVar10;
    bVar6 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    *puVar18 = (uint)(pbVar10 + (uint)CARRY1(bVar7,bVar6) + *puVar18);
    out(*puVar18,(short)pbVar45);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar11 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((byte)((uint)pbVar10 >> 8) | (byte)puVar18[1],bVar6));
    *(char **)((int)puVar22 + -1) = pcVar11 + *(int *)((int)puVar22 + -1);
    out(puVar18[1],(short)pbVar45);
    *pcVar11 = *pcVar11 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar38 = (uint *)((int)puVar42 + -1);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar20 = (undefined3)((uint)pbVar45 >> 8);
  piVar16 = (int *)((int)piVar16 + 0x1b7e);
  bVar4 = (byte)pbVar45 | *(byte *)puVar38 | *(byte *)puVar38;
  iRam04115f2c = iRam04115f2c + (int)piVar16;
  out(*puVar47,(short)CONCAT31(uVar20,bVar4));
  *piVar16 = *piVar16 + (int)piVar16;
  bVar4 = bVar4 | (byte)piVar16;
  iVar30 = CONCAT31(uVar20,bVar4);
  pbVar10 = (byte *)((int)piVar16 - *piVar16);
  cVar5 = (char)pbVar10;
  *pcVar11 = *pcVar11 + cVar5;
  cVar8 = (char)pcVar11 - bVar4;
  *pbVar10 = *pbVar10 + cVar5;
  uVar25 = (undefined2)((uint)pcVar11 >> 0x10);
  bVar6 = (byte)((uint)pcVar11 >> 8) | *pbVar10;
  pbVar29 = pbVar29 + -1;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  bVar7 = *(byte *)(CONCAT22(uVar25,CONCAT11(bVar6,cVar8)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar10;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar29;
  *pbVar10 = *pbVar10 + cVar5;
  bVar7 = bVar6 | bVar7 | *(byte *)puVar38;
  iVar23 = CONCAT22(uVar25,CONCAT11(bVar7,cVar8));
  pbVar46 = (byte *)((uint)(puVar47 + 1) ^ *(uint *)(iVar30 + -0x43));
  iVar15 = *(int *)pbVar10;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  if (SCARRY4(iVar15,(int)pbVar10)) {
    *pbVar10 = *pbVar10 + cVar5;
  }
  pbVar45 = pbVar10 + 0x5674;
  puVar22 = (uint *)((int)puVar22 +
                    (-(uint)((byte *)0xffffa98b < pbVar10) - *(int *)(pbVar46 + -0x7f)));
  bVar6 = (byte)pbVar45;
  *pbVar45 = *pbVar45 + bVar6;
  uVar21 = (undefined3)((uint)pbVar45 >> 8);
  bVar33 = bVar6 + 0x2d;
  piVar16 = (int *)CONCAT31(uVar21,bVar33);
  *(uint *)(pbVar46 + (int)puVar22 * 8) =
       *(int *)(pbVar46 + (int)puVar22 * 8) + iVar30 + (uint)(0xd2 < bVar6);
  bVar6 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar33;
  if (!CARRY1(bVar6,bVar33)) {
    do {
      pbVar45 = (byte *)(iVar30 + 1);
      bVar6 = (byte)piVar16;
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      bVar4 = (byte)((uint)piVar16 >> 8);
      bVar33 = (byte)puVar38 | bVar4;
      puVar47 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar33);
      out(*(undefined4 *)pbVar46,(short)pbVar45);
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      uVar25 = (undefined2)((uint)iVar23 >> 0x10);
      cVar5 = (char)iVar23;
      pbVar10 = (byte *)CONCAT22(uVar25,CONCAT11((byte)((uint)iVar23 >> 8) | *pbVar45,cVar5));
      bVar7 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar6;
      *(byte *)piVar16 = (char)*piVar16 + bVar6 + CARRY1(bVar7,bVar6);
      *pbVar45 = *pbVar45 + bVar6;
      *(byte *)puVar22 = (byte)*puVar22 + bVar4;
      *(int *)((int)piVar16 * 2) =
           *(int *)((int)piVar16 * 2) + CONCAT22(uVar25,CONCAT11(0x1c,cVar5));
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      cVar8 = (char)pbVar45;
      *(byte *)puVar47 = (byte)*puVar47 + cVar8;
      *(byte *)((int)piVar16 * 2) = *(byte *)((int)piVar16 * 2) ^ bVar6;
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      pbVar10 = pbVar46 + 8;
      out(*(undefined4 *)(pbVar46 + 4),(short)pbVar45);
      piVar16 = &uRam0a0a0000;
      *pbVar45 = *pbVar45;
      bVar6 = cVar5 - cVar8;
      iVar23 = CONCAT22(uVar25,CONCAT11((byte)puVar22[0x14] | 0x1c | bRam0ca87216,bVar6));
      *pbVar45 = *pbVar45;
      bVar7 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar6;
      if (!CARRY1(bVar7,bVar6)) {
        piVar16 = &uRam1e7b7000;
        bVar7 = (byte)((uint)puVar38 >> 8) | *(byte *)(iVar30 + 3);
        puVar47 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar7,bVar33));
        if (bVar7 != 0) {
          pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),cVar8 + pbVar10[(int)puVar22 * 8]);
          piVar16 = (int *)0x6d7d7000;
          iVar23 = iVar23 + 1;
        }
      }
      *piVar16 = *piVar16 + (int)piVar16;
      iVar30 = CONCAT31((int3)((uint)pbVar45 >> 8),(byte)pbVar45 | pbVar10[(int)puVar22 * 8]);
      *(char *)piVar16 = (char)*piVar16;
      piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),0xf9);
      *puVar22 = (uint)((int)piVar16 + *puVar22 + 1);
      pbVar46 = pbVar46 + 0xc;
      out(*(undefined4 *)pbVar10,(short)iVar30);
      puVar38 = puVar47;
    } while( true );
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar33 = bVar33 | *(byte *)((int)piVar16 + 0x4000081);
  piVar16 = (int *)CONCAT31(uVar21,bVar33);
  if ('\0' < (char)bVar33) {
    *(byte *)piVar16 = (char)*piVar16 + bVar33;
    puVar47 = (uint *)CONCAT31(uVar21,bVar33 + 0x28);
    *puVar47 = *puVar47 ^ (uint)puVar47;
    *(byte *)puVar38 = *(byte *)puVar38 + bVar7;
    cVar5 = (bVar33 + 0x28) - bVar7;
    pcVar11 = (char *)CONCAT31(uVar21,cVar5);
    *pcVar11 = *pcVar11 + cVar5;
    pbVar45 = (byte *)CONCAT31(uVar20,bVar4 | *(byte *)puVar38);
    pcVar19 = (char *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((char)((uint)puVar38 >> 8) + *(byte *)((int)puVar42 + 0x7d),
                                        (char)puVar38));
    *pcVar11 = *pcVar11 + cVar5;
    pbVar10 = (byte *)CONCAT31(uVar21,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar21,cVar5 + 0x39U));
    *pcVar19 = *pcVar19 + bVar7;
    puVar18 = (uint *)(pbVar46 + 4);
    out(*(undefined4 *)pbVar46,(short)pbVar45);
    goto code_r0x00405396;
  }
  puVar47 = (uint *)(pbVar46 + 4);
  out(*(undefined4 *)pbVar46,(short)iVar30);
  pcVar11 = (char *)(iVar23 + -1);
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pbVar45 = (byte *)CONCAT31(uVar20,bVar4 | *(byte *)puVar38);
  goto code_r0x004052ee;
}


