/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404573
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(char * param_1, uint * param_2)
 * Local Vars  : param_1, param_2, uStack_c8, uStack_c6, uStack_c7, uStack_88, uStack_c4, iStack_80, puStack_84, puStack_78, pbStack_7c, puStack_70, uStack_74, pbStack_68, puStack_6c, pbStack_60, puStack_64, puStack_58, pbStack_5c, puStack_50, pcStack_54, iStack_48, puStack_4c, uStack_40, pcStack_44, uStack_38, uStack_3c, uStack_30, uStack_34, uStack_28, uStack_2c, puStack_20, uStack_24, uStack_18, uStack_1c, uStack_10, pcStack_14, uStack_a, uStack_c, uStack_4, pcStack_8, uVar2, uVar1, uVar4, uVar3, bVar6, bVar5, cVar8, cVar7, in_EAX, uVar9, pcVar11, pbVar10, puVar13, pcVar12, puVar15, uVar14, piVar17, iVar16, uVar19, puVar18, bVar21, uVar20, puVar23, pcVar22, bVar25, iVar24, uVar27, bVar26, bVar29, uVar28, puVar31, pbVar30, iVar33, puVar32, uVar35, cVar34, unaff_EBX, cVar36, pbVar38, pbVar37, cVar40, uVar39, ppbVar42, cVar41, puVar43, unaff_EBP, ppbVar45, ppbVar44, pbVar46, unaff_ESI, unaff_EDI, puVar47, in_ES, puVar48, in_SS, in_CS, bVar49, in_DS, bVar50, in_AF, uStack_e, uVar51
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x00404654) */
/* WARNING: Removing unreachable block (ram,0x004045de) */
/* WARNING: Removing unreachable block (ram,0x00404580) */
/* WARNING: Removing unreachable block (ram,0x004046c4) */
/* WARNING: Removing unreachable block (ram,0x004046d0) */
/* WARNING: Removing unreachable block (ram,0x004046e3) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x00404576) */
/* WARNING: Removing unreachable block (ram,0x0040455f) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __fastcall _ctor(char *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  ushort uVar9;
  undefined3 uVar19;
  byte *in_EAX;
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
  byte bVar21;
  byte bVar25;
  undefined2 uVar27;
  char *pcVar22;
  uint *puVar23;
  byte bVar26;
  undefined2 uVar28;
  int iVar24;
  byte bVar29;
  char cVar34;
  byte *pbVar30;
  uint *puVar31;
  uint *puVar32;
  int iVar33;
  undefined1 uVar35;
  char cVar36;
  char cVar40;
  uint *unaff_EBX;
  byte *pbVar37;
  byte *pbVar38;
  char cVar41;
  uint uVar39;
  byte **ppbVar42;
  char *unaff_EBP;
  uint *puVar43;
  byte **ppbVar44;
  byte **ppbVar45;
  byte *unaff_ESI;
  byte *pbVar46;
  uint *puVar47;
  uint *unaff_EDI;
  uint *puVar48;
  ushort in_ES;
  undefined2 in_CS;
  ushort in_SS;
  ushort in_DS;
  bool bVar49;
  byte in_AF;
  bool bVar50;
  undefined8 uVar51;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined2 uStack_c6;
  ushort uStack_c4;
  ushort uStack_88;
  uint *puStack_84;
  int iStack_80;
  byte *pbStack_7c;
  uint *puStack_78;
  ushort uStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  byte *pbStack_68;
  uint *puStack_64;
  byte *pbStack_60;
  byte *pbStack_5c;
  uint *puStack_58;
  char *pcStack_54;
  uint *puStack_50;
  uint *puStack_4c;
  int iStack_48;
  char *pcStack_44;
  ushort uStack_40;
  ushort uStack_3c;
  ushort uStack_38;
  ushort uStack_34;
  ushort uStack_30;
  ushort uStack_2c;
  ushort uStack_28;
  ushort uStack_24;
  undefined *puStack_20;
  ushort uStack_1c;
  ushort uStack_18;
  char *pcStack_14;
  ushort uStack_10;
  undefined2 uStack_e;
  ushort uStack_c;
  undefined1 uStack_a;
  char *pcStack_8;
  undefined4 uStack_4;
  
                    /* .NET CLR Managed Code */
  bVar25 = *in_EAX;
  bVar26 = (byte)((uint)param_1 >> 8);
  bVar5 = *in_EAX;
  bVar6 = (byte)param_1;
  iVar16 = *(int *)in_EAX;
  *(byte *)param_2 = (char)*param_2 + bVar6;
  bVar21 = bVar6 - unaff_ESI[2];
  bVar50 = false;
  uStack_4 = CONCAT22(uStack_4._2_2_,in_ES);
  pbVar10 = (byte *)(CONCAT31((int3)((uint)(in_EAX + (uint)CARRY1(bVar26,bVar25) + iVar16) >> 8),
                              (char)(in_EAX + (uint)CARRY1(bVar26,bVar25) + iVar16) + -2 +
                              (bVar6 < unaff_ESI[2])) | 0x730a0001);
  pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_CS);
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  bVar25 = bVar26 + bVar5 | *pbVar10;
  pcVar22 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar25,bVar21));
  pbVar30 = &bRam2a060000;
  uVar19 = (undefined3)((uint)pbVar10 >> 8);
  bVar5 = (byte)pbVar10 ^ bRam2a060000;
  pcVar12 = (char *)CONCAT31(uVar19,bVar5);
  if ((POPCOUNT(bVar5) & 1U) != 0) {
    do {
      *pcVar12 = *pcVar12 + (byte)pcVar12;
      puVar31 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),(byte)pcVar12 | *pbVar30);
      while( true ) {
        bVar50 = (uStack_4 & 0x400) != 0;
        uVar39 = uStack_4 & 0x10;
        *(byte *)puVar31 = (char)*puVar31 + (byte)puVar31;
        bVar6 = (byte)pbVar30 | *unaff_ESI;
        pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),bVar6);
        cVar8 = (char)pcVar22;
        *pcVar22 = *pcVar22 - cVar8;
        *puVar31 = (uint)(*puVar31 + (int)puVar31);
        uVar19 = (undefined3)((uint)puVar31 >> 8);
        bVar25 = (byte)puVar31 | *pbVar10;
        pbVar46 = unaff_ESI + (uint)bVar50 * -8 + 4;
        out(*(undefined4 *)unaff_ESI,(short)pbVar10);
        *(char *)CONCAT31(uVar19,bVar25) = *(char *)CONCAT31(uVar19,bVar25) + bVar25;
        uStack_4 = (uint)CONCAT21(in_ES,(undefined1)uStack_4);
        cVar7 = (char)((uint)pcVar22 >> 8);
        *unaff_EBP = *unaff_EBP - cVar7;
        *pbVar10 = *pbVar10 + cVar8;
        bVar5 = bVar25 - 0x17;
        uVar27 = (undefined2)((uint)pcVar22 >> 0x10);
        cVar7 = cVar7 + *(byte *)((int)unaff_EDI + 0x46);
        pcVar22 = (char *)CONCAT22(uVar27,CONCAT11(cVar7,cVar8));
        *(char *)CONCAT31(uVar19,bVar5) = *(char *)CONCAT31(uVar19,bVar5) + bVar5;
        *unaff_EBP = *unaff_EBP - cVar7;
        *pbVar10 = *pbVar10 + cVar8;
        bVar25 = bVar25 - 0x21;
        puVar43 = (uint *)CONCAT31(uVar19,bVar25);
        bVar21 = (byte)((uint)pbVar30 >> 8);
        if (9 < bVar5) break;
        *(byte *)puVar43 = (byte)*puVar43 + bVar25;
        cVar8 = cVar8 + (byte)*puVar43;
        (&bRam2a060000)[CONCAT31((int3)((uint)pcVar22 >> 8),cVar8)] =
             (&bRam2a060000)[CONCAT31((int3)((uint)pcVar22 >> 8),cVar8)] - bVar21;
        *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar6;
        *pbVar10 = *pbVar10 ^ bVar25;
        *pbVar10 = *pbVar10 + cVar7;
        uVar1 = *puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + bVar25;
        bVar49 = 9 < (bVar25 & 0xf) || uVar39 != 0;
        bVar6 = bVar25 + bVar49 * '\x06';
        bVar6 = bVar6 + (0x90 < (bVar6 & 0xf0) |
                        CARRY1((byte)uVar1,bVar25) | bVar49 * (0xf9 < bVar6)) * '`';
        pbVar30 = (byte *)CONCAT31(uVar19,bVar6);
        bVar5 = *pbVar30;
        *pbVar30 = *pbVar30 + bVar6;
        *(byte **)pbVar10 = pbVar30 + (uint)CARRY1(bVar5,bVar6) + *(int *)pbVar10;
        unaff_ESI = pbVar46 + (uint)bVar50 * -8 + 4;
        out(*(undefined4 *)pbVar46,(short)pbVar10);
        *pbVar30 = *pbVar30 + bVar6;
        bVar6 = bVar6 - 0xe;
        pcVar22 = (char *)CONCAT22(uVar27,CONCAT11(cVar7 + *(byte *)((int)unaff_EDI + 0x3e),cVar8));
        *(char *)CONCAT31(uVar19,bVar6) = *(char *)CONCAT31(uVar19,bVar6) + bVar6;
        uStack_4 = (uint)in_ES;
        bVar5 = (byte)((uint)puVar31 >> 8);
        bVar50 = bRam182b0000 < bVar5;
        bRam182b0000 = bRam182b0000 - bVar5;
        bVar49 = 9 < (bVar6 & 0xf) || bVar49;
        bVar6 = bVar6 + bVar49 * -6;
        bVar5 = 0x9f < bVar6 | bVar50 | bVar49 * (bVar6 < 6);
        puVar31 = (uint *)CONCAT31(uVar19,bVar6 + bVar5 * -0x60);
        pbVar10[0x5d] = pbVar10[0x5d] + bVar21 + bVar5;
        *puVar31 = *puVar31 | (uint)puVar31;
        pbVar30 = pbVar10;
      }
      *puVar43 = *puVar43 | (uint)puVar43;
      *(byte *)puVar43 = (byte)*puVar43 + bVar25;
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11(bVar21 | pbVar10[0x6e],bVar6));
      pcVar12 = (char *)CONCAT31(uVar19,bVar25 | (byte)*puVar43);
      unaff_ESI = pbVar46;
    } while( true );
  }
  *pcVar12 = *pcVar12 + bVar5;
  bVar5 = *(byte *)((int)unaff_EBX + (uint)(byte)(bVar5 + 0x6f));
  pbVar30 = (byte *)CONCAT31(uVar19,bVar5);
  *pbVar30 = *pbVar30 + bVar5;
  bVar6 = bVar5 - *pbVar30;
  pbVar46 = unaff_ESI + (uint)(bVar5 < *pbVar30) + *(int *)CONCAT31(uVar19,bVar6);
  pbVar10 = (byte *)CONCAT31(uVar19,bVar6);
  pbVar30 = pbVar46 + 1;
  out(*pbVar46,0);
  *pbVar10 = *pbVar10 + bVar6;
  *pbVar10 = *pbVar10 + bVar25;
  bVar5 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar6;
  puVar31 = (uint *)((int)unaff_EBX + (int)pcVar22);
  uVar39 = *puVar31;
  uVar1 = *puVar31;
  *puVar31 = (uint)(&bRam2a060000 + uVar1 + CARRY1(bVar5,bVar6));
  if (uVar39 < 0xd5fa0000 && !CARRY4((uint)(&bRam2a060000 + uVar1),(uint)CARRY1(bVar5,bVar6))) {
    *pbVar10 = *pbVar10 + bVar6;
code_r0x004045bc:
    uVar19 = (undefined3)((uint)pbVar10 >> 8);
    bVar25 = (byte)pbVar10 + 0x2d;
    pbVar38 = (byte *)CONCAT31(uVar19,bVar25);
    *(byte **)(pbVar30 + (int)unaff_EDI * 8) =
         &bRam2a060000 + (uint)(0xd2 < (byte)pbVar10) + *(int *)(pbVar30 + (int)unaff_EDI * 8);
    _uStack_10 = CONCAT22(uStack_e,in_ES);
    bVar5 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar25;
    if (!CARRY1(bVar5,bVar25)) {
      *pbVar38 = *pbVar38 + bVar25;
      uVar9 = (ushort)bRam2a05ff9a;
      bVar25 = bVar25 | *pbVar38;
      bVar50 = (in_ES & 0x400) != 0;
      in_AF = (in_ES & 0x10) != 0;
      *(char *)CONCAT31(uVar19,bVar25) = *(char *)CONCAT31(uVar19,bVar25) + bVar25;
      bVar25 = bVar25 | *pbVar30;
      puVar31 = (uint *)CONCAT31(uVar19,bVar25);
      pbVar46 = pbVar46 + (uint)bVar50 * -8 + 5;
      out(*(undefined4 *)pbVar30,uVar9 << 8);
      *puVar31 = *puVar31 << (bVar21 & 0x1f) | *puVar31 >> 0x20 - (bVar21 & 0x1f);
      *pbVar46 = *pbVar46 + bVar25;
      bVar25 = (bVar25 - 0x2a) + (bVar25 < 0x28);
      piVar17 = (int *)CONCAT31(uVar19,bVar25);
      pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_ES);
      bVar5 = *pbVar46;
      *pbVar46 = *pbVar46 + bVar25;
      if (CARRY1(bVar5,bVar25)) {
        *piVar17 = *piVar17 + (int)piVar17;
        puVar31 = (uint *)(CONCAT31(uVar19,bVar25 | (byte)*unaff_EDI) + -0x6fe080d);
        uVar39 = *puVar31;
        *puVar31 = (uint)(*puVar31 + (int)puVar31);
        pbVar30 = pbVar46;
        if (CARRY4(uVar39,(uint)puVar31)) {
          *puVar31 = *puVar31 + (int)puVar31;
          pcVar22 = (char *)CONCAT31((int3)((uint)pcVar22 >> 8),bVar21 | (byte)*unaff_EBX);
          goto code_r0x0040460b;
        }
      }
      else {
        bRam2a060000 = bRam2a060000 + bVar21;
        puVar31 = (uint *)((uint)piVar17 | *unaff_EDI);
code_r0x0040460b:
        *(undefined1 *)((int)puVar31 * 2) = *(undefined1 *)((int)puVar31 * 2);
        bVar5 = (byte)puVar31;
        *pbVar46 = *pbVar46 + bVar5;
        pbVar30 = pbVar46 + (uint)bVar50 * -8 + 4;
        out(*(undefined4 *)pbVar46,0);
        puVar31 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar31 >> 0x10),
                                                   CONCAT11(bVar5 / 0,bVar5)) >> 8),bVar5 % 0);
        *pbVar30 = *pbVar30 + bVar5 % 0;
        unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *pbVar30);
      }
      pcVar22 = (char *)CONCAT22((short)((uint)pcVar22 >> 0x10),
                                 CONCAT11((char)((uint)pcVar22 >> 8) + (char)*puVar31,(char)pcVar22)
                                );
      *(char *)puVar31 = (char)*puVar31;
      _uStack_10 = CONCAT22(uStack_e,in_ES);
      pbVar10 = (byte *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((char)((uint)puVar31 >> 8) - pbVar30[2],(char)puVar31));
      goto code_r0x00404620;
    }
    *(byte **)pbVar38 = pbVar38 + *(int *)pbVar38;
    bVar25 = bVar25 | pbVar38[0x4000066];
    pcVar12 = (char *)CONCAT31(uVar19,bVar25);
    if ('\0' < (char)bVar25) {
      *pcVar12 = *pcVar12 + bVar25;
      return CONCAT31(uVar19,bVar25 + 0x73);
    }
code_r0x00404638:
    pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_DS);
    cVar8 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar8;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11((char)((uint)pcVar12 >> 8) - pbVar30[3],cVar8));
    cVar34 = (char)unaff_EBX;
    cVar40 = (char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[0x1b];
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar40,cVar34));
    *pcVar12 = *pcVar12 + cVar8;
    *(byte *)unaff_EBX = (byte)*unaff_EBX ^ cVar8 + 4U;
    in_CS = 0x2a06;
    puStack_20 = &UNK_0040465a;
    uVar51 = func_0x0000b828();
    pcVar12 = pcStack_8;
    puVar31 = (uint *)((ulonglong)uVar51 >> 0x20);
    pbVar10 = (byte *)uVar51;
    bVar5 = *pbVar10;
    bVar25 = (byte)uVar51;
    *pbVar10 = *pbVar10 + bVar25;
    pbVar46 = pbVar30 + (uint)CARRY1(bVar5,bVar25) + *(int *)pbVar10;
    uVar19 = (undefined3)((ulonglong)uVar51 >> 8);
    *pbVar10 = *pbVar10 + bVar25;
    cVar7 = (char)((uint)pcStack_8 >> 8);
    *pcStack_8 = *pcStack_8 + cVar7;
    bVar5 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar25;
    *puVar31 = (uint)(pbVar10 + (uint)CARRY1(bVar5,bVar25) + *puVar31);
    bVar25 = bVar25 | *pbVar46;
    pcVar22 = (char *)CONCAT31(uVar19,bVar25);
    *pcVar22 = *pcVar22 + bVar25;
    cVar8 = bVar25 + *pcVar22;
    pcVar22 = (char *)CONCAT31(uVar19,cVar8);
    *pcVar22 = *pcVar22 + cVar8;
    pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_CS);
    *pcVar22 = *pcVar22 + cVar8;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar34;
    *pcVar22 = *pcVar22 + cVar8;
    *pcVar22 = *pcVar22 + cVar7;
    *pcVar22 = *pcVar22 + cVar8;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
    pcVar22 = (char *)(CONCAT31(uVar19,cVar8) ^ 3);
    pcVar12[0x73060000] = pcVar12[0x73060000] - cVar40;
    pbVar10 = (byte *)((int)unaff_EDI + (uint)bVar50 * -2 + 1);
    *(byte *)unaff_EDI = (byte)pcVar22;
    *pcVar22 = *pcVar22 + (byte)pcVar22;
    _uStack_c = CONCAT12(uStack_a,in_ES);
    pbVar30 = pbVar46 + (uint)bVar50 * -2 + 1;
    bVar5 = *pbVar46;
    *(char *)CONCAT31(uVar19,bVar5) = *(char *)CONCAT31(uVar19,bVar5) + bVar5;
    _uStack_10 = CONCAT22(uStack_e,in_ES);
    pcVar12 = (char *)CONCAT31(uVar19,(bVar5 - (byte)*unaff_EBX) + '(');
    unaff_EDI = (uint *)(pbVar10 + (uint)bVar50 * -2 + 1);
    bVar5 = in((short)((ulonglong)uVar51 >> 0x20));
    *pbVar10 = bVar5;
code_r0x004046a4:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    uStack_24 = in_ES;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    bVar5 = (char)pcVar12 - (byte)*unaff_EBX;
    bVar25 = bVar5 + 0x28;
    pbVar10 = (byte *)CONCAT31(uVar19,bVar25);
    pcVar22 = &cRam14060000;
    puVar43 = unaff_EBX;
    puVar48 = unaff_EDI;
    if (0xd7 < bVar5) {
      *pbVar10 = *pbVar10 + bVar25;
      _uStack_10 = CONCAT22(uStack_e,in_ES);
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((char)((uint)puVar31 >> 8) -
                                          *(byte *)((int)puVar31 + -0x3a),(char)puVar31));
      bVar5 = (bVar25 | *pbVar10) + cRam14060000;
      pcVar12 = (char *)CONCAT31(uVar19,bVar5);
      uVar39 = *puVar31;
      *(byte *)puVar31 = (byte)*puVar31;
      if ((POPCOUNT((byte)*puVar31) & 1U) == 0) {
        pcVar22 = &cRam14060000;
        if ((byte)*puVar31 == 0 || SCARRY1((byte)uVar39,'\0') != (char)(byte)*puVar31 < '\0')
        goto code_r0x0040475f;
        *pcVar12 = *pcVar12 + bVar5;
        piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x2d);
        *(byte **)(pbVar30 + (int)unaff_EDI * 8) =
             (byte *)((int)puVar31 + (uint)(0xd2 < bVar5) + *(int *)(pbVar30 + (int)unaff_EDI * 8));
        uStack_40 = in_ES;
        uRam7305fffc = in_CS;
        *piVar17 = *piVar17 + (int)piVar17;
        bVar5 = bVar5 + 0x2d | *(byte *)((int)piVar17 + 0x400006d);
        pcVar12 = (char *)CONCAT31(uVar19,bVar5);
        if ((char)bVar5 < '\x01') goto code_r0x00404777;
        *pcVar12 = *pcVar12 + bVar5;
        pcVar12 = (char *)CONCAT31(uVar19,bVar5 + 0x10);
        *puVar31 = (uint)(pcVar12 + *puVar31);
      }
      goto code_r0x00404710;
    }
  }
  else {
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    _uStack_10 = CONCAT22(uStack_e,in_ES);
    pcVar12 = (char *)(CONCAT31(uVar19,bVar6) | 8);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x3c));
    cVar8 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar8;
    cVar7 = cVar8 + '\x02';
    pbVar10 = (byte *)CONCAT31(uVar19,cVar7);
    if (cVar7 != '\0' && SCARRY1(cVar8,'\x02') == cVar7 < '\0') {
      *pbVar10 = *pbVar10 + cVar7;
      goto code_r0x004045bc;
    }
code_r0x00404620:
    puVar31 = (uint *)&bRam2a060000;
    *(byte *)unaff_EBX = (byte)*unaff_EBX;
    *pbVar10 = *pbVar10 + (byte)pbVar10;
    uVar19 = (undefined3)((uint)pbVar10 >> 8);
    bVar5 = (byte)pbVar10 | (byte)*unaff_EBX;
    bVar5 = bVar5 | *(byte *)CONCAT31(uVar19,bVar5);
    *pbVar30 = *pbVar30 + bVar5;
    bVar25 = bVar5 + (byte)*unaff_EBX;
    pcVar12 = (char *)CONCAT31(uVar19,bVar25);
    if (SCARRY1(bVar5,(byte)*unaff_EBX) != (char)bVar25 < '\0') {
      *pcVar12 = *pcVar12 + bVar25;
      pcVar12 = (char *)CONCAT31(uVar19,bVar25 + 0x2a);
      goto code_r0x00404638;
    }
    bVar5 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar25;
    if (CARRY1(bVar5,bVar25)) goto code_r0x004046a4;
code_r0x00404710:
    pbVar10 = pbVar30 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar30,(short)puVar31);
    pcStack_14 = pcVar22;
    *pcVar12 = *pcVar12 + (byte)pcVar12;
    uStack_18 = in_ES;
    uStack_1c = in_SS;
    *pcVar22 = *pcVar22 + '\x01';
    puStack_20 = (undefined *)CONCAT22(puStack_20._2_2_,in_SS);
    *pcVar22 = *pcVar22 + '\x01';
    bVar5 = (byte)pcVar12 | (byte)*puVar31;
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar5);
    pbVar30 = pbVar10 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar10,(short)puVar31);
    puVar48 = (uint *)((int)unaff_EDI + -1);
    *pcVar12 = *pcVar12 + bVar5;
    uStack_24 = in_ES;
    pbVar10 = (byte *)((int)((uint)pcVar12 | *puVar48) + *(int *)((uint)pcVar12 | *puVar48));
    *pbVar10 = *pbVar10 + (char)pbVar10;
    puVar43 = unaff_EBX;
  }
  cVar8 = (char)pbVar10 + *pbVar10;
  puVar23 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar8);
  *(char *)puVar23 = (char)*puVar23 + cVar8;
  *puVar23 = *puVar23 & (uint)puVar23;
  *(char *)puVar23 = (char)*puVar23 + cVar8;
  pbVar46 = (byte *)((int)puVar23 + 1);
  cVar8 = (char)pbVar46;
  *pbVar46 = *pbVar46 + cVar8;
  uVar39 = *puVar43;
  bVar5 = (byte)((uint)pcVar22 >> 8);
  *(byte *)puVar43 = (byte)*puVar43 + bVar5;
  pbVar10 = pbVar30;
  if (CARRY1((byte)uVar39,bVar5)) {
    pbVar10 = pbVar30 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar30,(short)puVar31);
    puVar48 = (uint *)((int)puVar48 + -1);
  }
  *pbVar46 = *pbVar46 + cVar8;
  uStack_28 = in_ES;
  puVar23 = (uint *)CONCAT22((short)((uint)pcVar22 >> 0x10),
                             CONCAT11(bVar5 + *(byte *)((int)puVar48 + 0x49),(char)pcVar22));
  *pbVar46 = *pbVar46 + cVar8;
  uStack_2c = in_ES;
  *(byte *)(puVar43 + 0x818000) = (byte)puVar43[0x818000] - (char)((uint)puVar43 >> 8);
  out(*(undefined4 *)pbVar10,(short)puVar31);
  unaff_EBX = (uint *)((int)puVar43 + -1);
  *pbVar46 = *pbVar46 + cVar8;
  uStack_30 = in_ES;
  pbVar10 = pbVar10 + *(int *)((int)puVar43 + -0x7f) + (uint)bVar50 * -8 + 4;
  *pbVar46 = *pbVar46 + cVar8;
  do {
    uStack_38 = in_ES;
    cVar8 = (char)pbVar46 - (byte)*puVar31;
    pcVar12 = (char *)CONCAT31((int3)((uint)pbVar46 >> 8),cVar8);
    pbVar30 = pbVar10 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar10,(short)puVar31);
    unaff_EDI = (uint *)((int)puVar48 + -1);
    *pcVar12 = *pcVar12 + cVar8;
    uStack_3c = in_ES;
    pcVar22 = (char *)CONCAT22((short)((uint)puVar23 >> 0x10),
                               CONCAT11((char)((uint)puVar23 >> 8) + (byte)puVar48[0x12],
                                        (char)puVar23));
code_r0x0040475f:
    cVar8 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar8;
    uStack_40 = in_ES;
    *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
    out(*(undefined4 *)pbVar30,(short)puVar31);
    pbVar10 = (byte *)((int)unaff_EBX + -1);
    *pcVar12 = *pcVar12 + cVar8;
    pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,in_ES);
    iStack_48 = CONCAT22(iStack_48._2_2_,in_ES);
    pbVar30 = pbVar30 + *(int *)((int)unaff_EBX + -0x71) + (uint)bVar50 * -8 + 4;
    *pcVar12 = *pcVar12 + cVar8;
    puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                                 CONCAT11((char)((uint)pbVar10 >> 8) - pbVar30[0x6e],(char)pbVar10))
    ;
    puVar48 = unaff_EDI;
code_r0x00404777:
    bVar5 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar5;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    puVar43 = (uint *)(pbVar30 + (int)puVar48 * 8);
    uVar39 = *puVar43;
    uVar1 = *puVar43;
    *puVar43 = (uint)((byte *)(uVar1 + (int)puVar31) + (0xd2 < bVar5));
    puStack_50 = (uint *)CONCAT22(puStack_50._2_2_,in_ES);
    puVar43 = (uint *)0x73060000;
    cVar7 = bVar5 + 0x2e +
            (CARRY4(uVar39,(uint)puVar31) || CARRY4(uVar1 + (int)puVar31,(uint)(0xd2 < bVar5)));
    *(byte *)puVar31 = (byte)*puVar31 + (char)pcVar22;
    *pbVar30 = *pbVar30;
    cVar8 = cVar7 + '~';
    pcVar11 = (char *)CONCAT31(uVar19,cVar8);
    out(*pbVar30,(short)puVar31);
    *pcVar11 = *pcVar11 + cVar8;
    cVar7 = cVar7 + -0x80;
    pcVar11 = (char *)CONCAT31(uVar19,cVar7);
    out(*(undefined4 *)(pbVar30 + (uint)bVar50 * -2 + 1),(short)puVar31);
    puVar23 = (uint *)(pcVar22 + -1);
    *pcVar11 = *pcVar11 + cVar7;
    pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,in_ES);
    *(byte *)puVar48 = (byte)*puVar48 - (char)((uint)pcVar12 >> 8);
    *pcVar11 = *pcVar11 + cVar7;
    puStack_58 = (uint *)CONCAT22(puStack_58._2_2_,in_ES);
    *pcVar11 = *pcVar11 - (char)((uint)puVar23 >> 8);
    *pcVar11 = *pcVar11 + cVar7;
    pbStack_5c = (byte *)CONCAT22(pbStack_5c._2_2_,in_ES);
    pbStack_60 = (byte *)CONCAT22(pbStack_60._2_2_,in_ES);
    pbVar10 = pbVar30 + (uint)bVar50 * -2 + 1 + *(int *)((int)unaff_EBX + 9) + (uint)bVar50 * -8 + 4
    ;
    *pcVar11 = *pcVar11 + cVar7;
    puStack_64 = (uint *)CONCAT22(puStack_64._2_2_,in_ES);
    cVar8 = (char)puVar31;
    cVar34 = (char)((uint)puVar31 >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(cVar34,cVar8));
    *pcVar11 = *pcVar11 + cVar7;
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar35 = SUB41(unaff_EBX,0);
    bVar6 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)puVar31 + 0x36);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(bVar6,uVar35));
    bVar25 = cVar7 + (byte)*unaff_EBX;
    pbVar46 = (byte *)CONCAT31(uVar19,bVar25);
    *(byte *)puVar48 = (byte)*puVar48 - cVar34;
    bVar5 = *pbVar46;
    *pbVar46 = *pbVar46 + bVar25;
    uStack_34 = in_ES;
  } while (!CARRY1(bVar5,bVar25));
  *pbVar46 = *pbVar46 + bVar25;
  bVar25 = bVar25 - *pbVar46;
  pbVar30 = (byte *)CONCAT31(uVar19,bVar25);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar8;
  *(byte *)puVar31 = (byte)*puVar31 ^ bVar25;
  pcVar22[0x2affffff] = pcVar22[0x2affffff] + bVar25;
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar25;
  *unaff_EBX = (uint)(pbVar30 + (uint)CARRY1(bVar5,bVar25) + *unaff_EBX);
  pbVar46 = pbVar30 + -0x32a1702;
  if (pbVar46 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar46;
    puVar47 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + (byte)*puVar31);
    puStack_70 = (uint *)CONCAT22(puStack_70._2_2_,in_ES);
    pbVar30[-0xe0c891b] = pbVar30[-0xe0c891b] + cVar34;
    pbVar46 = pbVar30 + 0x19fd76e3;
    bVar5 = *pbVar46;
    *pbVar46 = *pbVar46 - bVar6;
    piVar17 = (int *)((uint)(pbVar30 + (bVar5 < bVar6) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar17 + 0x73) = *(char *)((int)piVar17 + 0x73) + cVar34;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar25 = bVar6 | *(byte *)((int)puVar31 + 2);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(bVar25,uVar35));
    cVar8 = (char)piVar17;
    if ((POPCOUNT(bVar25) & 1U) == 0) {
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      uVar19 = (undefined3)((uint)(pbVar30 + (bVar5 < bVar6) + 0x63fd76e4) >> 8);
      cVar7 = cVar8 + '\x06';
      if ((POPCOUNT(cVar7) & 1U) == 0) {
        *(char *)CONCAT31(uVar19,cVar7) = *(char *)CONCAT31(uVar19,cVar7) + cVar7;
        pbVar46 = (byte *)CONCAT31(uVar19,cVar8 + '.');
        puVar23 = puVar47;
        uStack_74 = in_SS;
        goto code_r0x00404803;
      }
      cVar8 = cVar7 + (byte)*unaff_EBX;
      pcVar12 = (char *)CONCAT31(uVar19,cVar8);
      if (SCARRY1(cVar7,(byte)*unaff_EBX) == cVar8 < '\0') {
code_r0x004048e7:
        pcVar12 = (char *)((uint)pcVar12 | 8);
        in_SS = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(puVar31 + 0x1cc18000) = (byte)puVar31[0x1cc18000] + cVar8;
code_r0x0040486e:
      pcVar12 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),(byte)piVar17 & (byte)*puVar31);
      puVar48 = (uint *)((int)puVar48 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar12 = *pcVar12 + (char)pcVar12;
    pbVar30 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '*');
    puStack_70 = (uint *)CONCAT22(puStack_70._2_2_,in_DS);
    bVar5 = (byte)((uint)puVar47 >> 8);
    cVar8 = (char)puVar47;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar5 + *pbVar30,cVar8));
    pbVar30 = pbVar30 + (uint)CARRY1(bVar5,*pbVar30) + *(int *)pbVar30;
    *(byte *)puVar31 = (byte)*puVar31 + cVar8;
    bVar49 = (byte)pbVar30 < *pbVar30;
    pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),(byte)pbVar30 - *pbVar30);
code_r0x00404880:
    pbVar10 = pbVar10 + (uint)bVar49 + *(int *)pbVar30;
    uStack_74 = in_ES;
    while( true ) {
      bVar25 = (byte)pbVar30;
      pbVar30[0x2c000000] = pbVar30[0x2c000000] + bVar25;
      bVar5 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar25;
      *puVar31 = (uint)(pbVar30 + (uint)CARRY1(bVar5,bVar25) + *puVar31);
      *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)puVar31;
      *pbVar30 = *pbVar30 + bVar25;
      puVar23 = (uint *)CONCAT31((int3)((uint)pbVar30 >> 8),bVar25 | (byte)*unaff_EBX);
code_r0x00404895:
      pcVar12 = (char *)((uint)puVar23 | *puVar23);
code_r0x00404899:
      cVar8 = (char)pcVar12;
      *pbVar10 = *pbVar10 + cVar8;
      uVar19 = (undefined3)((uint)pcVar12 >> 8);
      bVar5 = cVar8 + (byte)*unaff_EBX;
      pcVar12 = (char *)CONCAT31(uVar19,bVar5);
      bVar25 = (byte)((uint)puVar47 >> 8);
      uVar27 = (undefined2)((uint)puVar47 >> 0x10);
      cVar7 = (char)puVar31;
      uVar9 = in_ES;
      if (SCARRY1(cVar8,(byte)*unaff_EBX) == (char)bVar5 < '\0') {
        *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar7;
        *pcVar12 = *pcVar12 + bVar5;
        puVar47 = (uint *)CONCAT22(uVar27,CONCAT11(bVar25 | (byte)*puVar31,(char)puVar47));
        puVar31 = (uint *)((int)puVar31 + 1);
        pcVar12 = pcVar12 + *puVar31;
        if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar12 = *pcVar12 + bVar5;
      bVar6 = bVar5 + 2;
      pcVar12 = (char *)CONCAT31(uVar19,bVar6);
      if (bVar5 < 0xfe) {
        *pbVar10 = *pbVar10 + bVar6;
        puVar23 = unaff_EBX;
        goto code_r0x004048f5;
      }
      *pcVar12 = *pcVar12 + bVar6;
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((byte)((uint)puVar31 >> 8) |
                                          *(byte *)((int)unaff_EBX + -0x5b),cVar7));
      cVar8 = *pcVar12;
      *pcVar12 = *pcVar12 + bVar6;
      puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,in_ES);
      if (SCARRY1(cVar8,bVar6) == *pcVar12 < '\0') goto code_r0x00404927;
      *pcVar12 = *pcVar12 + bVar6;
      bVar5 = bVar5 + 4;
      pbVar30 = (byte *)CONCAT31(uVar19,bVar5);
      if (0xfd < bVar6) break;
      *pbVar30 = *pbVar30 + bVar5;
      puVar47 = (uint *)CONCAT22(uVar27,CONCAT11(bVar25 | (byte)*puVar31,(char)puVar47));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
      *pbVar10 = *pbVar10 ^ bVar5;
    }
    *pbVar30 = *pbVar30 + bVar5;
    puStack_78 = (uint *)((uint)puStack_78 & 0xffff0000);
  }
  else {
    pbVar30[0x6fdbe8fe] = pbVar30[0x6fdbe8fe] + (char)pbVar46;
code_r0x00404803:
    *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
    uVar20 = (undefined3)((uint)puVar23 >> 8);
    bVar25 = (byte)puVar23 | (byte)*unaff_EBX;
    puVar47 = (uint *)CONCAT31(uVar20,bVar25);
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar7 = (char)unaff_EBX;
    cVar40 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x6f);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar40,cVar7));
    bVar5 = (byte)pbVar46;
    *pbVar46 = *pbVar46 + bVar5;
    bVar49 = 0xf9 < bVar5;
    uVar19 = (undefined3)((uint)pbVar46 >> 8);
    cVar8 = bVar5 + 6;
    pbVar30 = (byte *)CONCAT31(uVar19,cVar8);
    in_SS = uStack_74;
    if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x00404880;
    *pbVar30 = *pbVar30 + cVar8;
    piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x2e);
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar25 = bVar25 | *(byte *)((int)puVar31 + (int)piVar17);
    puVar47 = (uint *)CONCAT31(uVar20,bVar25);
    in_SS = (ushort)puStack_70;
    if ((POPCOUNT(bVar25) & 1U) != 0) {
      puVar23 = (uint *)((int)piVar17 + *piVar17);
      *(byte *)puVar31 = (byte)*puVar31 + bVar25;
      pbVar10 = pbVar10 + puVar31[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar17 = (char)*piVar17 + bVar5 + 0x2e;
    cVar8 = bVar5 + 0x34;
    pcVar12 = (char *)CONCAT31(uVar19,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pcVar12[0x28] = pcVar12[0x28] + cVar34;
      goto code_r0x00404899;
    }
    *pcVar12 = *pcVar12 + cVar8;
    piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x5c);
    *piVar17 = *piVar17 + (int)piVar17;
    cVar34 = (bVar25 | bRam07022c07) - (char)*piVar17;
    puVar47 = (uint *)CONCAT31(uVar20,cVar34);
    pcVar12 = (char *)CONCAT31(uVar19,bVar5 + 0x5a);
    bVar25 = (byte)((uint)puVar23 >> 8);
    *(byte *)puVar31 = (byte)*puVar31 | bVar25;
    *(uint *)((int)puVar31 + (int)pcVar12) = *(uint *)((int)puVar31 + (int)pcVar12) | 0x73060000;
    *puVar31 = *puVar31 | 0x73060000;
    cVar40 = cVar40 + *(byte *)((int)unaff_EBX + 0x72);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar40,cVar7));
    *pcVar12 = *pcVar12 + bVar5 + 0x5a;
    cVar8 = bVar5 + 0x60;
    pcVar12 = (char *)CONCAT31(uVar19,cVar8);
    if ((POPCOUNT(cVar8) & 1U) == 0) {
      *pcVar12 = *pcVar12 + cVar8;
      piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x88);
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      pbStack_68 = (byte *)CONCAT22(pbStack_68._2_2_,in_DS);
      puVar47 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                 CONCAT11((bVar25 | (byte)*puVar31) + (char)*piVar17,cVar34));
      *(char *)piVar17 = (char)*piVar17;
      cVar7 = cVar7 - *pbVar10;
      cVar40 = cVar40 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7) + 0x73);
      *(byte *)piVar17 = (char)*piVar17 + bVar5 + 0x88;
      bVar5 = bVar5 + 0xb2 & (byte)*puVar31;
      puVar48 = (uint *)((int)puVar48 + iRam73060073);
      *(char *)CONCAT31(uVar19,bVar5) = *(char *)CONCAT31(uVar19,bVar5) + bVar5;
      pcVar12 = (char *)CONCAT31(uVar19,bVar5 + 0x2a);
      unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar27,CONCAT11(
                                                  cVar40,cVar7)) + 0x74),cVar7));
      *pcVar12 = *pcVar12 + bVar5 + 0x2a;
      piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x54);
      in_SS = (ushort)puStack_78;
      goto code_r0x0040486e;
    }
    pbVar30 = (byte *)*(undefined6 *)pcVar12;
    *pbVar10 = *pbVar10 + (char)*(undefined6 *)pcVar12;
  }
  uVar19 = (undefined3)((uint)pbVar30 >> 8);
  bVar5 = (byte)pbVar30 | *pbVar10;
  pcVar12 = (char *)CONCAT31(uVar19,bVar5);
  *pcVar12 = *pcVar12 + bVar5;
  *unaff_EBX = (uint)(*unaff_EBX + (int)puVar47);
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
  *pcVar12 = *pcVar12 + bVar5;
  pcVar12 = (char *)CONCAT31(uVar19,bVar5 + 0x6f);
  *pcVar12 = *pcVar12 + bVar5 + 0x6f;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
  uRam00c16f07 = SUB41(pcVar12,0);
  in_SS = uStack_74;
code_r0x004048de:
  cVar8 = (char)pcVar12;
  *pbVar10 = *pbVar10 + cVar8;
  *pcVar12 = *pcVar12 + cVar8;
  *(byte **)(pcVar12 + (int)puVar47) = (byte *)(*(int *)(pcVar12 + (int)puVar47) + (int)puVar47);
  puStack_78 = (uint *)CONCAT22(puStack_78._2_2_,in_SS);
  bVar5 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar12 = *pcVar12 + cVar8;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8 + 'o');
  pbVar10 = pbVar10 + 1;
  *pcVar12 = *pcVar12 + cVar8 + 'o';
  pbStack_7c = (byte *)CONCAT22(pbStack_7c._2_2_,in_SS);
  puVar23 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5,(char)unaff_EBX));
  puVar43 = unaff_EBX;
  uVar9 = in_SS;
code_r0x004048f5:
  unaff_EBX = puVar23;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
  do {
    uRam00c36f08 = SUB41(pcVar12,0);
    while( true ) {
      bVar5 = *pbVar10;
      cVar8 = (char)pcVar12;
      *pbVar10 = *pbVar10 + cVar8;
      iStack_80 = CONCAT22(iStack_80._2_2_,uVar9);
      if (SCARRY1(bVar5,cVar8) == (char)*pbVar10 < '\0') {
        pcVar12[(int)puVar43] = pcVar12[(int)puVar43] + cVar8;
        goto code_r0x00404982;
      }
      *pcVar12 = *pcVar12 + cVar8;
      pbVar30 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8 + '*');
      puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,in_DS);
      bVar5 = (byte)((uint)puVar47 >> 8);
      cVar8 = (char)puVar47;
      bVar25 = bVar5 + *pbVar30;
      pbVar30 = pbVar30 + (uint)CARRY1(bVar5,*pbVar30) + *(int *)pbVar30;
      *(byte *)puVar31 = (byte)*puVar31 + cVar8;
      cVar7 = (char)unaff_EBX - *pbVar10;
      bVar5 = *pbVar30;
      puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar25 + *pbVar30,cVar8));
      iVar16 = *(int *)pbVar30;
      *(byte *)puVar31 = (byte)*puVar31 + cVar8;
      pcVar12 = (char *)CONCAT31((int3)((uint)(pbVar30 + (uint)CARRY1(bVar25,bVar5) + iVar16) >> 8),
                                 (char)(pbVar30 + (uint)CARRY1(bVar25,bVar5) + iVar16) -
                                 *(byte *)((int)puVar31 + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7) +
                                                     -0x3a),cVar7));
code_r0x00404921:
      bVar5 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar5;
      pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar5 + 0x6f);
      *(byte *)puVar47 = ((byte)*puVar47 - (bVar5 + 0x6f)) - (0x90 < bVar5);
code_r0x00404927:
      *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
      pbStack_7c = (byte *)CONCAT22(pbStack_7c._2_2_,in_SS);
      *(byte *)puVar47 = (byte)*puVar47 + 1;
      cVar8 = (char)((uint)puVar47 >> 8) - pbVar10[2];
      puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(cVar8,(char)puVar47));
      if ((POPCOUNT(cVar8) & 1U) == 0) break;
      pcVar12 = pcVar12 + -0x1b7e2606;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar12 >> 8) | (byte)puVar31[0x30dbc2],
                                          (char)pcVar12));
    }
code_r0x00404931:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar8 = (char)pcVar12 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8);
    pbVar30 = pbVar10;
  } while ((POPCOUNT(cVar8) & 1U) != 0);
  do {
    bVar5 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar5;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    piVar17 = (int *)CONCAT31(uVar19,bVar5 + 0x6f);
    *puVar47 = (*puVar47 - (int)piVar17) - (uint)(0x90 < bVar5);
    *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
    iVar16 = *(int *)((int)puVar48 + 0x1a);
    *piVar17 = *piVar17 + (int)piVar17;
    puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | *pbVar30);
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    bVar5 = (bVar5 + 0x6f) - (char)*piVar17;
    pbVar10 = (byte *)CONCAT31(uVar19,bVar5);
    *pbVar10 = *pbVar10 + bVar5;
    pbVar30 = pbVar30 + *(int *)pbVar10;
    cVar8 = bVar5 + *pbVar10;
    puVar13 = (ushort *)CONCAT31(uVar19,cVar8);
    *puVar13 = *puVar13 + (ushort)CARRY1(bVar5,*pbVar10) * (((ushort)puVar13 & 3) - (*puVar13 & 3));
    *(char *)puVar13 = (char)*puVar13 + cVar8;
    *(char *)puVar13 = (char)*puVar13 + cVar8;
    *(char *)puVar13 = (char)*puVar13 + cVar8;
    puVar48 = (uint *)((int)puVar48 + unaff_EBX[0x1c]);
    puVar43 = (uint *)((int)puVar43 + iVar16);
code_r0x0040495b:
    cVar8 = (char)puVar13;
    *(char *)puVar13 = (char)*puVar13 + cVar8;
    uVar19 = (undefined3)((uint)puVar13 >> 8);
    cVar7 = cVar8 + '\x02';
    pcVar12 = (char *)CONCAT31(uVar19,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      *puVar31 = (uint)(*puVar31 + (int)puVar43);
      pbVar10 = pbVar30 + (uint)bVar50 * -2 + 1;
      out(*pbVar30,(short)puVar31);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar12 = *pcVar12 + cVar7;
    pbVar30 = (byte *)(CONCAT31(uVar19,cVar8 + '}') + (int)puVar43);
    *pbVar30 = *pbVar30 + cVar8 + '}';
    *pcStack_44 = *pcStack_44 + (char)pcStack_44;
    puVar47 = (uint *)CONCAT22((short)((uint)iStack_48 >> 0x10),
                               CONCAT11((byte)((uint)iStack_48 >> 8) | *(byte *)(iStack_48 * 3),
                                        (char)iStack_48));
    puVar48 = (uint *)(pbStack_60 + *(int *)((int)puStack_50 + 0x6f));
    pcVar12 = pcStack_44;
    puVar31 = puStack_4c;
    unaff_EBX = puStack_50;
    puVar43 = puStack_58;
    pbVar30 = pbStack_5c;
    while( true ) {
      cVar8 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar8;
      uVar19 = (undefined3)((uint)pcVar12 >> 8);
      cVar7 = cVar8 + '\x02';
      pcVar12 = (char *)CONCAT31(uVar19,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) break;
      *pcVar12 = *pcVar12 + cVar7;
      pcVar12 = (char *)CONCAT31(uVar19,cVar8 + '}');
      out(*(undefined4 *)pbVar30,(short)puVar31);
      *pcVar12 = *pcVar12 + cVar8 + '}';
code_r0x00404982:
      puStack_6c = (uint *)CONCAT22(puStack_6c._2_2_,in_ES);
      *(byte *)puStack_64 = (byte)*puStack_64 + (char)in_ES;
      puVar47 = (uint *)CONCAT22((short)((uint)pbStack_68 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_68 >> 8) |
                                          pbStack_68[(int)pbStack_7c],(char)pbStack_68));
      puVar48 = (uint *)(iStack_80 + *(int *)((int)puStack_70 + 0x71));
      puVar43 = puStack_64;
      puVar31 = puStack_6c;
      unaff_EBX = puStack_70;
      pbVar30 = pbStack_7c;
      while( true ) {
        cVar8 = (char)puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + cVar8;
        uVar19 = (undefined3)((uint)puVar43 >> 8);
        cVar7 = cVar8 + '\x02';
        puVar13 = (ushort *)CONCAT31(uVar19,cVar7);
        puVar43 = puStack_78;
        if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar13 = (char)*puVar13 + cVar7;
        bVar25 = cVar8 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar25);
        pbVar10 = (byte *)(iVar16 + (int)puStack_78);
        bVar5 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar25;
        uVar39 = *puVar47;
        *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
        pcVar12 = (char *)(((iVar16 - uVar39) - (uint)CARRY1(bVar5,bVar25)) + -0x727b0317);
        cVar8 = (char)pcVar12;
        *pcVar12 = *pcVar12 + cVar8;
        uVar19 = (undefined3)((uint)pcVar12 >> 8);
        cVar7 = cVar8 + '\x02';
        pcVar12 = (char *)CONCAT31(uVar19,cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) break;
        *pcVar12 = *pcVar12 + cVar7;
        bVar25 = cVar8 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar25);
        pbVar10 = (byte *)(iVar16 + (int)puStack_78);
        bVar5 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar25;
        puVar43 = (uint *)((iVar16 - *puVar47) - (uint)CARRY1(bVar5,bVar25));
        puVar23 = puVar31;
code_r0x004049b4:
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar47;
        puVar31 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),
                                   ((char)puVar23 - (byte)*puVar48) - *pbVar30);
        bVar25 = pbVar30[0x72];
        *puVar43 = *puVar43 & (uint)puVar47;
        pbVar10 = (byte *)((int)puVar43 + 2);
        *pbVar10 = *pbVar10 + (char)((uint)puVar23 >> 8);
        bVar5 = *pbVar10;
        puVar32 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar25);
        pbVar10 = pbVar30;
        while (unaff_EBX = puVar32, pbVar30 = pbVar10, (POPCOUNT(bVar5) & 1U) == 0) {
          cVar8 = (char)puVar43;
          *(byte *)puVar43 = (byte)*puVar43 + cVar8;
          uVar19 = (undefined3)((uint)puVar43 >> 8);
          cVar7 = cVar8 + '\x03';
          pbVar46 = (byte *)CONCAT31(uVar19,cVar7);
          pbVar30 = pbVar10 + (uint)bVar50 * -8 + 4;
          out(*(undefined4 *)pbVar10,(short)puVar31);
          in_SS = (ushort)pbStack_60;
          *pbVar46 = *pbVar46 + cVar7;
          cVar34 = (char)puVar47;
          puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                     CONCAT11((byte)((uint)puVar47 >> 8) | *pbVar46,cVar34));
          *(int *)pbVar46 = *(int *)pbVar46 - (int)pbVar46;
          *(byte *)puVar31 = (byte)*puVar31 + cVar34;
          cVar34 = (char)puVar32 - pbVar30[2];
          unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),cVar34);
          if ((POPCOUNT(cVar34) & 1U) != 0) {
            pbVar10 = (byte *)((int)puVar48 + (int)puStack_78 * 2);
            *pbVar10 = *pbVar10 + cVar7;
            ppbVar45 = (byte **)puStack_78;
            goto code_r0x00404a51;
          }
          *pbVar46 = *pbVar46 + cVar7;
          puVar43 = (uint *)CONCAT31(uVar19,cVar8 + 'r');
          *(byte *)puVar43 = (byte)*puVar43;
          pbStack_60 = (byte *)CONCAT22(pbStack_60._2_2_,uVar9);
          do {
            puVar48 = (uint *)((int)puVar48 + unaff_EBX[0x1c]);
            bVar5 = (byte)puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + bVar5;
            uVar19 = (undefined3)((uint)puVar43 >> 8);
            bVar5 = (bVar5 + 0x6e) - (0x90 < bVar5);
            puVar43 = (uint *)CONCAT31(uVar19,bVar5);
            cVar8 = (char)puVar47;
            *(byte *)puVar31 = (byte)*puVar31 + cVar8;
            bVar25 = (char)((uint)puVar47 >> 8) - pbVar30[2];
            puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar25,cVar8));
            puVar23 = puVar31;
            if ((POPCOUNT(bVar25) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar43 = (byte)*puVar43 + bVar5;
            bVar6 = bVar5 + 2;
            puVar43 = (uint *)CONCAT31(uVar19,bVar6);
            ppbVar44 = (byte **)puStack_78;
            if ((POPCOUNT(bVar6) & 1U) == 0) goto code_r0x004049f5;
            pbVar30 = pbStack_60;
          } while (0xfd < bVar5);
          *(byte *)puVar43 = (byte)*puVar43 | bVar6;
          puVar32 = unaff_EBX;
          pbVar10 = pbStack_60;
          bVar5 = (byte)*puVar43;
        }
      }
    }
    *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
    pbStack_60 = (byte *)CONCAT22(pbStack_60._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar5 = (byte)puVar43;
    *(byte *)puVar43 = (byte)*puVar43 + bVar5;
    uVar19 = (undefined3)((uint)puVar43 >> 8);
    bVar6 = bVar5 + 0x6f;
    pbVar46 = (byte *)CONCAT31(uVar19,bVar6);
    *puVar47 = (*puVar47 - (int)pbVar46) - (uint)(0x90 < bVar5);
    *(byte *)puVar31 = (byte)*puVar31 + cVar8;
    pbVar10 = (byte *)((int)ppbVar44 + *(int *)((int)puVar48 + 0x1a));
    *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
    uVar20 = (undefined3)((uint)puVar31 >> 8);
    bVar5 = (byte)puVar31 | *pbVar30;
    puVar31 = (uint *)CONCAT31(uVar20,bVar5);
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    cVar7 = bVar6 - *pbVar46;
    pbVar30 = pbVar30 + (-(uint)(bVar6 < *pbVar46) - *(int *)CONCAT31(uVar19,cVar7));
    uVar14 = CONCAT31(uVar19,cVar7 + *(char *)CONCAT31(uVar19,cVar7));
    bVar49 = CARRY1(bRam14110000,bVar25);
    bRam14110000 = bRam14110000 + bVar25;
    puVar43 = (uint *)((int)unaff_EBX + (int)pbVar30 * 2);
    uVar39 = *puVar43;
    uVar1 = uVar14 + *puVar43;
    puVar15 = (undefined4 *)(uVar1 + bVar49);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar15 = uVar2;
    puStack_64 = (uint *)CONCAT22(puStack_64._2_2_,uVar9);
    uVar39 = (uint)(CARRY4(uVar14,uVar39) || CARRY4(uVar1,(uint)bVar49));
    puVar43 = (uint *)((int)puVar15 + uRam7d020511 + uVar39);
    ppbVar42 = &pbStack_68;
    ppbVar45 = &pbStack_68;
    ppbVar44 = &pbStack_68;
    pbStack_68 = pbVar10;
    cVar7 = '\x03';
    do {
      pbVar10 = pbVar10 + -4;
      ppbVar42 = ppbVar42 + -1;
      *ppbVar42 = (byte *)*(undefined4 *)pbVar10;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    pbStack_60 = (byte *)&pbStack_68;
    pbRam00c82802 =
         (byte *)((int)puVar43 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar15,uRam7d020511) ||
                      CARRY4((int)puVar15 + uRam7d020511,uVar39))));
    bVar6 = *pbVar30;
    cVar7 = (char)puVar43;
    *pbVar30 = *pbVar30 + cVar7;
  } while (SCARRY1(bVar6,cVar7) == (char)*pbVar30 < '\0');
  *(byte *)puVar43 = (byte)*puVar43 + cVar7;
  iVar16 = CONCAT31((int3)((uint)puVar43 >> 8),cVar7 + '\x11') + 0xc57b;
  bVar25 = (byte)iVar16;
  *puVar31 = *puVar31 ^ (uint)unaff_EBX;
  puVar31 = (uint *)CONCAT31(uVar20,bVar5 + (byte)*puVar47);
  iVar16 = (CONCAT31((int3)((uint)iVar16 >> 8),bVar25 + 0x6f) - (uint)(0x90 < bVar25)) + -0x18093a86
  ;
  cVar8 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar7 = cVar8 + '\x02';
  pbVar10 = (byte *)CONCAT31(uVar19,cVar7);
  if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar10 = *pbVar10 + cVar7;
  pbVar46 = (byte *)CONCAT31(uVar19,cVar8 + 'q');
  ppbVar45 = &pbStack_68;
code_r0x00404a51:
  pbVar10 = pbVar46 + 1;
  cVar8 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar8;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                               CONCAT11((char)((uint)puVar32 >> 8) - cVar8,cVar34));
  *pbVar10 = *pbVar10 + cVar8;
  puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(char)puVar31 - (byte)*puVar47);
  pbVar46 = pbVar46 + 0x757b03;
  pbVar10 = (byte *)((int)puVar48 + (int)ppbVar45 * 2);
  cVar8 = (char)pbVar46;
  *pbVar10 = *pbVar10 + cVar8;
  *pbVar46 = *pbVar46 + cVar8;
  *pbVar30 = *pbVar30 - (char)((uint)pbVar46 >> 8);
  *pbVar46 = *pbVar46 + cVar8;
  puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar45 + -0x3a));
  *pbVar46 = *pbVar46 + cVar8;
  pbVar10 = (byte *)(CONCAT31((int3)((uint)pbVar46 >> 8),cVar8 + '\x11') + 0x757b02);
  pbVar46 = (byte *)((int)puVar48 + (int)ppbVar45 * 2);
  bVar25 = (byte)pbVar10;
  *pbVar46 = *pbVar46 + bVar25;
  bVar5 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar25;
  puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,uVar9);
  pbRam011006fe = pbVar10 + (int)(pbRam011006fe + CARRY1(bVar5,bVar25));
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar25;
  if (!CARRY1(bVar5,bVar25)) goto code_r0x00404add;
  do {
    bVar5 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar5;
    bVar6 = (byte)puVar47;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                               CONCAT11((byte)((uint)puVar47 >> 8) | *pbVar10,bVar6));
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    uVar19 = (undefined3)((uint)pbVar10 >> 8);
    bVar5 = bVar5 + in_AF * '\x06';
    cVar8 = bVar5 + (0x90 < (bVar5 & 0xf0) | in_AF * (0xf9 < bVar5)) * '`';
    pcVar12 = (char *)CONCAT31(uVar19,cVar8);
    *pcVar12 = *pcVar12 + cVar8;
    puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar45 + -0x39));
    *pcVar12 = *pcVar12 + cVar8;
    iVar16 = CONCAT31(uVar19,cVar8 + '\x11') + 0xc57b;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x11') + 0xc67b;
    bVar5 = (byte)iVar16;
    bVar25 = bVar5 + 0x6f;
    pbVar10 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar25);
    *puVar47 = (*puVar47 - (int)pbVar10) - (uint)(0x90 < bVar5);
    uVar39 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar6;
    pbRam011106fe = pbVar10 + (int)(pbRam011106fe + CARRY1((byte)uVar39,bVar6));
    bVar5 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar25;
    if (!CARRY1(bVar5,bVar25)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    bVar5 = (byte)puVar47;
    bVar25 = (byte)((uint)puVar47 >> 8) | *pbVar10;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar25,bVar5));
    *pbVar10 = *pbVar10 - (char)pbVar10;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar25;
    out(*(undefined4 *)pbVar30,(short)puVar31);
    *puVar47 = *puVar47 & (uint)pbVar10;
    uVar39 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar5;
    pbVar10 = pbVar10 + (uint)CARRY1((byte)uVar39,bVar5) + *(int *)(pbVar30 + (uint)bVar50 * -8 + 4)
    ;
    *pbVar10 = *pbVar10 + (char)pbVar10;
    *(byte *)puVar47 = (byte)*puVar47 + (char)puVar31;
    pbVar30 = pbVar30 + (uint)bVar50 * -8 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar30,(short)puVar31);
      pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 & (byte)*puVar47);
      *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((byte)((uint)puVar31 >> 8) | (byte)unaff_EBX[5],
                                          (char)puVar31));
      *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
      pbVar30 = pbVar30 + (uint)bVar50 * -8 + 4;
code_r0x00404ad4:
      puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,uVar9);
      pbVar10 = (byte *)((uint)pbVar10 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar10;
code_r0x00404add:
      bVar5 = (byte)pbVar10;
      uVar19 = (undefined3)((uint)pbVar10 >> 8);
      cVar8 = bVar5 + 8;
      pbVar10 = (byte *)CONCAT31(uVar19,cVar8);
      if (SCARRY1(bVar5,'\b') == cVar8 < '\0') break;
      *pbVar10 = *pbVar10 + cVar8;
      cVar8 = bVar5 + 10;
      piVar17 = (int *)CONCAT31(uVar19,cVar8);
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      puVar43 = (uint *)CONCAT31(uVar19,bVar5 + 0x7c);
      *puVar43 = *puVar43 & (uint)puVar47;
      *(char *)((int)puVar43 + 0x11) = *(char *)((int)puVar43 + 0x11) + (char)((uint)puVar31 >> 8);
      cVar8 = (char)((int)puVar43 + 0xc67b);
      uVar19 = (undefined3)((uint)((int)puVar43 + 0xc67b) >> 8);
      bVar5 = cVar8 + 8;
      pbVar10 = (byte *)CONCAT31(uVar19,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar10 = *pbVar10 + bVar5;
        cRam02060000 = cVar8 + 'w';
        puVar43 = (uint *)CONCAT31(uVar19,cRam02060000);
        *(byte *)puVar43 = (byte)*puVar43 + cRam02060000;
        cVar8 = (char)puVar47;
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                   CONCAT11((byte)((uint)puVar47 >> 8) | (byte)*puVar43,cVar8));
        *puVar43 = *puVar43 - (int)puVar43;
        *(byte *)puVar31 = (byte)*puVar31 + cVar8;
        pbVar10 = pbVar30 + (uint)bVar50 * -8 + 4;
        out(*(undefined4 *)pbVar30,(short)puVar31);
        pbVar30 = pbVar10;
        if ((POPCOUNT((byte)*puVar31) & 1U) == 0) goto code_r0x00404b0f;
        pcVar12 = (char *)((uint)puVar43 | *puVar43);
        goto code_r0x00404b89;
      }
      bVar25 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar5;
      *(byte **)pbVar30 = pbVar10 + (uint)CARRY1(bVar25,bVar5) + *(int *)pbVar30;
    }
    *pbVar30 = *pbVar30 + 1;
    *puVar47 = (uint)(pbVar10 + (uint)(0xf7 < bVar5) + *puVar47);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar43;
    puVar31 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 + 'r');
    piVar17 = (int *)((uint)puVar31 | *puVar31);
    puVar31 = puStack_84;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar16 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar5 = (byte)iVar16;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),bVar5 + 0x6f);
    *puVar47 = (*puVar47 - iVar16) - (uint)(0x90 < bVar5);
    cVar8 = (char)puVar47;
    *(byte *)puVar31 = (byte)*puVar31 + cVar8;
    bVar25 = (byte)((uint)unaff_EBX >> 8);
    bVar21 = (byte)((uint)puVar31 >> 8) | bVar25;
    pcVar22 = (char *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar21,(byte)puVar31));
    piVar17 = (int *)(iVar16 + 0x73060001);
    *(byte *)puVar47 = (byte)*puVar47 & (byte)piVar17;
    *pcVar22 = *pcVar22 + cVar8;
    bVar6 = (byte)((uint)puVar47 >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar6;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar16 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar6;
    pcVar12 = (char *)((uint)piVar17 | *puVar48);
    *pcVar22 = *pcVar22 - bVar6;
    bVar5 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar5;
    ppbVar45 = (byte **)(((int)ppbVar45 - iVar16) - *(int *)(pcVar12 + ((int)ppbVar45 - iVar16)));
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar26 = (byte)unaff_EBX;
    cVar7 = bVar25 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar46 = (byte *)CONCAT22(uVar27,CONCAT11(cVar7,bVar26));
    *pcVar12 = *pcVar12 + bVar5;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    uVar14 = CONCAT31(uVar19,bVar5 + 7);
    puVar43 = (uint *)((int)ppbVar45 + -0x1faeef1);
    uVar39 = *puVar43;
    uVar1 = *puVar43 + uVar14;
    *puVar43 = uVar1 + (0xf8 < bVar5);
    puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,uVar9);
    puVar23 = puStack_84;
    bVar25 = bVar5 + 7 + (byte)*puVar47 +
             (CARRY4(uVar39,uVar14) || CARRY4(uVar1,(uint)(0xf8 < bVar5)));
    puVar43 = (uint *)CONCAT31(uVar19,bVar25);
    bVar5 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar25;
    if (CARRY1(bVar5,bVar25)) break;
    *(byte *)puVar43 = (byte)*puVar43 + bVar25;
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar7 + pbVar46[0x76],bVar26));
    uStack_88 = uVar9;
  }
  *(byte *)puVar43 = (byte)*puVar43 + bVar25;
  uVar20 = (undefined3)((uint)pcVar22 >> 8);
  bVar29 = (byte)puVar31 | *pbVar46;
  puVar31 = (uint *)CONCAT31(uVar20,bVar29);
  pcRam2b060000 = (char *)CONCAT31(uVar19,bVar25 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar25 + 0x39)) - (0xd7 < (byte)(bVar25 + 0x11));
  bVar5 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar6;
  pbVar10 = pbVar30 + (uint)bVar50 * -8 + 4;
  out(*(undefined4 *)pbVar30,(short)puVar31);
  bVar5 = (bVar25 + 0x37) - CARRY1(bVar5,bVar6);
  piVar17 = (int *)CONCAT31(uVar19,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    iVar16 = CONCAT31(uVar19,bVar5 + 0x11) + 0xc77b;
    pcVar12 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + 'r');
    pcVar12[0x28] = pcVar12[0x28] + bVar21;
code_r0x00404b89:
    cVar8 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar8;
    *pcVar12 = *pcVar12 + cVar8;
    *pcVar12 = *pcVar12 + cVar8;
    puVar13 = (ushort *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8 + 'r');
    uVar9 = (ushort)puVar13 | *puVar13;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),uVar9);
    bRam11060000 = (byte)uVar9;
    out(*(undefined4 *)pbVar10,(short)puVar31);
    *pcVar12 = *pcVar12 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar5;
  pbVar30 = (byte *)((int)ppbVar45 - *(int *)((int)puVar48 + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar12 = (char *)CONCAT31(uVar20,bVar29 | *pbVar46);
  puVar43 = (uint *)(pbVar10 + (uint)bVar50 * -8 + 4);
  out(*(undefined4 *)pbVar10,(short)pcVar12);
  uVar39 = *puVar47;
  *pcVar12 = *pcVar12 + cVar8;
  uVar39 = CONCAT31(uVar19,bVar5 & (byte)uVar39) | 0x767b02;
  *(byte *)((int)puVar47 + (int)pcVar12) = *(byte *)((int)puVar47 + (int)pcVar12) + (char)uVar39;
  iVar16 = uVar39 + 0xc67b;
  cVar40 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar34 = cVar40 + 'r';
  pcVar12 = (char *)CONCAT31(uVar19,cVar34);
  pcVar12[0x28] = pcVar12[0x28] + bVar21;
  *pcVar12 = *pcVar12 + cVar34;
  uVar28 = (undefined2)((uint)puVar47 >> 0x10);
  bVar6 = bVar6 | *(byte *)((int)puStack_84 + -0x5e);
  puVar47 = (uint *)CONCAT22(uVar28,CONCAT11(bVar6,cVar8));
  *pcVar12 = *pcVar12 + cVar34;
  puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,uStack_88);
  pbVar10 = (byte *)CONCAT22(uVar27,CONCAT11(cVar7 + pbVar46[0x76],bVar26));
  *pcVar12 = *pcVar12 + cVar34;
  puVar31 = (uint *)CONCAT31(uVar19,cVar40 + -0x1c);
  pcVar12 = (char *)((uint)puVar31 | *puVar31);
  bVar49 = (POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar12;
  puVar31 = puStack_84;
  pbVar46 = pbVar10;
  pbVar38 = pbVar30;
  puVar48 = puVar23;
  uVar9 = uStack_88;
  if (!bVar49) goto code_r0x00404ca8;
  *pcVar12 = *pcVar12 + cRam02060000;
  puVar31 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cRam02060000 + 'r');
  *puVar31 = *puVar31 & (uint)puVar47;
  *(char *)((int)puVar31 + 0x11) = *(char *)((int)puVar31 + 0x11) + (char)(uStack_88 >> 8);
  iVar16 = (int)puVar31 + 0xc77b;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cRam02060000 = (char)iVar16 + '\t';
  pbVar46 = (byte *)CONCAT31(uVar19,cRam02060000);
  out(*puVar43,uStack_88);
  *pbVar46 = *pbVar46 + cRam02060000;
  puVar48 = (uint *)CONCAT22(uVar28,CONCAT11(bVar6 | *pbVar46,cVar8));
  *(int *)pbVar46 = *(int *)pbVar46 - (int)pbVar46;
  *(byte *)puStack_84 = (byte)*puStack_84 + cVar8;
  puVar31 = puVar43 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
  out(puVar43[(uint)bVar50 * -2 + 1],uStack_88);
  puVar32 = puStack_84;
  puVar43 = puVar31;
  uVar9 = uStack_88;
  if ((POPCOUNT((byte)*puStack_84) & 1U) != 0) goto code_r0x00404cca;
  *pbVar46 = *pbVar46 + cRam02060000;
  puVar13 = (ushort *)CONCAT31(uVar19,(char)iVar16 + '{');
  uVar9 = (ushort)puVar13 | *puVar13;
  pcVar12 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),uVar9);
  bVar5 = (byte)uVar9;
  out(*puVar31,uStack_88);
  pbVar46 = (byte *)((int)puVar48 + 1);
  bRam11060000 = bVar5;
  *pcVar12 = *pcVar12 + bVar5;
  puVar47 = (uint *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                             CONCAT11((byte)((uint)pbVar46 >> 8) | bRam110cde91,(char)pbVar46));
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar5 - 7);
  *puVar23 = (uint)(pcVar12 + (uint)(bVar5 < 7) + *puVar23);
  puVar43 = puVar31 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
  out(puVar31[(uint)bVar50 * -2 + 1],uStack_88);
  puVar31 = (uint *)((int)puStack_84 + 1);
  *pcVar12 = *pcVar12 + (bVar5 - 7);
  pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar26 | (byte)(uVar9 >> 8));
  do {
    bVar5 = (char)pcVar12 - *pcVar12;
    uVar39 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar5;
    cVar8 = bVar5 - CARRY1((byte)uVar39,bVar5);
    *(byte *)puVar31 = *(byte *)puVar31 + cVar8;
    cVar7 = (char)((uint)puVar47 >> 8);
    *(byte *)(puVar23 + 0x673b40) = (byte)puVar23[0x673b40] + cVar7;
    puVar18 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8);
    *(byte *)puVar18 = (byte)*puVar18 + cVar8;
    *(byte *)puVar31 = *(byte *)puVar31 + cVar8;
    *(byte **)(pbVar46 + 0x58) = (byte *)(*(int *)(pbVar46 + 0x58) + (int)puVar43);
    puVar48 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar47 >> 0x10),
                                               CONCAT11(cVar7 + (char)((uint)pcVar12 >> 8),
                                                        (char)puVar47)) >> 8),
                               (char)puVar47 + *(char *)((int)puVar18 * 2));
    *(byte *)puVar18 = (byte)*puVar18 + cVar8;
    *(byte *)puVar43 = (byte)*puVar43 + (char)pbVar46;
    puVar32 = puVar31;
    pbVar10 = pbVar46;
_ctor:
    bVar25 = (byte)((uint)puVar48 >> 8);
    uVar39 = *puVar18;
    bVar5 = (byte)puVar48;
    puVar18 = (uint *)((int)puVar18 + (uint)CARRY1(bVar25,(byte)*puVar18) + *puVar18);
    *(byte *)puVar32 = *(byte *)puVar32 + bVar5;
    cVar8 = bVar5 - *(byte *)((int)puVar32 + 3);
    puVar47 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar48 >> 0x10),
                                               CONCAT11(bVar25 + (byte)uVar39,bVar5)) >> 8),cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      if (*(byte *)((int)puVar32 + 3) <= bVar5) {
        *puVar18 = (uint)(*puVar18 + (int)puVar18);
        puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),(byte)puVar32 | *pbVar10);
        puVar18 = puVar18 + 0x230e;
        puVar48 = puVar47;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
    cVar8 = (char)puVar18 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar8);
    bVar49 = (POPCOUNT(cVar8) & 1U) == 0;
    puVar31 = puVar32;
    pbVar46 = pbVar10;
    pbVar38 = pbVar30;
    puVar48 = puVar23;
    uVar9 = (ushort)puStack_78;
code_r0x00404ca8:
    puStack_78._0_2_ = uVar9;
    pcVar22 = pcStack_54;
    puVar32 = (uint *)pbStack_5c;
    pbVar10 = pbStack_60;
    pbVar30 = pbStack_68;
    puVar23 = puStack_70;
    if (bVar49) break;
    *(byte *)puVar31 = *(byte *)puVar31 + (char)puVar47;
    pbVar30 = pbVar38;
    puVar23 = puVar48;
  } while( true );
  *pcVar12 = *pcVar12 + (char)pcVar12;
  bVar5 = (byte)pcStack_54;
  *pcStack_54 = *pcStack_54 + bVar5;
  puVar48 = (uint *)CONCAT22((short)((uint)puStack_58 >> 0x10),
                             CONCAT11((byte)((uint)puStack_58 >> 8) | *pbStack_5c,(char)puStack_58))
  ;
  *pbStack_60 = *pbStack_60 + (char)pbStack_60;
  pbVar46 = (byte *)((int)pcVar22 * 2);
  *pbVar46 = *pbVar46 ^ bVar5;
  uVar3 = *(undefined6 *)pcVar22;
  in_DS = (ushort)((uint6)uVar3 >> 0x20);
  pbVar46 = (byte *)uVar3;
  bVar25 = (byte)uVar3;
  *pbVar46 = *pbVar46 + bVar25;
  bVar5 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar25;
  puVar31 = (uint *)((int)puVar48 + 0x11673);
  uVar1 = *puVar31;
  uVar39 = *puVar31;
  *puVar31 = (uint)((byte *)((int)puVar32 + uVar39) + CARRY1(bVar5,bVar25));
  puStack_70 = (uint *)CONCAT22(puStack_70._2_2_,(ushort)puStack_78);
  pbVar46 = pbVar46 + (uint)(CARRY4(uVar1,(uint)puVar32) ||
                            CARRY4((int)puVar32 + uVar39,(uint)CARRY1(bVar5,bVar25))) +
                      *(int *)((int)puVar48 + (int)puVar32);
  puVar43 = puStack_6c;
  uVar9 = (ushort)puStack_78;
code_r0x00404cca:
  puStack_78._0_2_ = uVar9;
  cVar8 = (char)pbVar46 + '\x04';
  puVar18 = (uint *)CONCAT31((int3)((uint)pbVar46 >> 8),cVar8);
  if (SCARRY1((char)pbVar46,'\x04') == cVar8 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  puVar31 = puVar43 + (uint)bVar50 * -2 + 1;
  out(*puVar43,(short)puVar32);
  uVar39 = *puVar48;
  bVar5 = *(byte *)puVar32;
  bVar25 = (byte)puVar48;
  *(byte *)puVar32 = *(byte *)puVar32 + bVar25;
  iVar16 = (CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + '\x03') & uVar39) + iRam00008c38;
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar32;
  pcVar12 = (char *)(iVar16 + (uint)CARRY1(bVar5,bVar25) + 0x1246f);
  bVar5 = *(byte *)puVar32;
  uVar19 = (undefined3)((uint)puVar48 >> 8);
  puVar47 = (uint *)CONCAT31(uVar19,bVar25 | bVar5);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar12 >> 8);
  puVar18 = (uint *)(CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + *pcVar12) + 0x1fbeef2);
  uVar39 = *puVar18;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  if (CARRY4(uVar39,(uint)puVar18)) {
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    pcVar12 = (char *)CONCAT31(uVar19,bVar25 | bVar5 | bRam00282809);
    cVar8 = (char)((uint)puVar48 >> 8);
    *pbVar10 = *pbVar10 + cVar8;
    *pcVar12 = *pcVar12 - cVar8;
    *(byte *)puVar18 = *(byte *)puVar18 + (char)puVar18;
    iVar16 = (int)pcVar12 - *(int *)pbVar10;
    puVar43 = puVar31 + (uint)bVar50 * -2 + 1;
    out(*puVar31,(short)puVar32);
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    puVar47 = (uint *)CONCAT22((short)((uint)iVar16 >> 0x10),
                               CONCAT11((byte)((uint)iVar16 >> 8) | bRambf73070b,(char)iVar16));
code_r0x00404d15:
    uVar39 = *puVar18;
    bVar5 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar5;
    puVar31 = puVar43 + (uint)bVar50 * -2 + 1;
    out(*puVar43,(short)puVar32);
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar25 = bVar5 + in_AF * '\x06';
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),
                               bVar25 + (0x90 < (bVar25 & 0xf0) |
                                        CARRY1((byte)uVar39,bVar5) | in_AF * (0xf9 < bVar25)) * '`')
    ;
  }
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar25 = (byte)puVar18 | (byte)*puVar23;
  puVar43 = puVar31 + (uint)bVar50 * -2 + 1;
  uVar28 = SUB42(puVar32,0);
  out(*puVar31,uVar28);
  *(byte *)puVar47 = (byte)*puVar47 - bVar25;
  bVar5 = *(byte *)puVar32;
  bVar6 = (byte)puVar47;
  *(byte *)puVar32 = *(byte *)puVar32 + bVar6;
  iVar16 = CONCAT31((int3)((uint)puVar18 >> 8),bVar25) + *puVar43 + (uint)CARRY1(bVar5,bVar6);
  pbVar46 = pbVar30 + -*puVar32;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar8 = (char)iVar16 + (byte)*puVar43 + (pbVar30 < (byte *)*puVar32);
  puVar31 = (uint *)CONCAT31(uVar19,cVar8);
  bVar5 = (byte)((uint)puVar47 >> 8);
  *(byte *)puVar47 = (byte)*puVar47 - bVar5;
  *puVar31 = (uint)(*puVar31 + (int)puVar31);
  bVar6 = bVar6 | *(byte *)((int)puVar32 + (int)puVar31);
  uVar27 = (undefined2)((uint)puVar47 >> 0x10);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(byte *)puVar31 = (byte)*puVar31 + cVar8;
    pcVar12 = (char *)CONCAT31(uVar19,cVar8 + '\x12');
    *pcVar12 = *pcVar12 + bVar5;
    puVar31 = (uint *)CONCAT31(uVar19,(cVar8 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar47 >> 8),bVar6));
    bVar25 = *(byte *)puVar32;
    *(byte *)puVar32 = *(byte *)puVar32 + bVar6;
    if (!CARRY1(bVar25,bVar6)) {
      pbVar30 = (byte *)((uint)puVar31 | *puVar31);
      out(*puVar43,uVar28);
      *pbVar30 = *pbVar30 + (char)pbVar30;
      bVar25 = *pbVar30;
      piVar17 = (int *)CONCAT22(uVar27,CONCAT11(bVar5 | bVar25,bVar6));
      iVar16 = (int)pbVar30 - *piVar17;
      *(byte *)puVar32 = *(byte *)puVar32 + bVar6;
      puVar31 = puVar43 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
      out(puVar43[(uint)bVar50 * -2 + 1],uVar28);
      uRam12060000 = (undefined1)iVar16;
      *(char *)((int)piVar17 + iVar16) = *(char *)((int)piVar17 + iVar16) - (bVar5 | bVar25);
      *(byte *)puVar32 = *(byte *)puVar32 + bVar6;
      pbVar30 = (byte *)(iVar16 + -0x120edecd);
      *(byte *)puVar31 = (byte)*puVar31 + 1;
      bVar5 = *pbVar30;
      bVar25 = (byte)pbVar30;
      *pbVar30 = *pbVar30 + bVar25;
      pbVar46 = pbVar46 + ((-1 - *(int *)((int)puVar23 + 0x42)) - (uint)CARRY1(bVar5,bVar25));
      *pbVar30 = *pbVar30 + bVar25;
      bVar21 = (byte)pbVar10 | (byte)((uint)pbVar30 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar30;
      bVar5 = *(byte *)puVar32;
      pcVar12 = (char *)(((uint)pbVar30 | 0x11) + 0x511072c);
      puVar43 = puVar31 + (uint)bVar50 * -2 + 1;
      out(*puVar31,uVar28);
      puVar32 = (uint *)((int)puVar32 + 1);
      *pcVar12 = *pcVar12 + (char)pcVar12;
      bVar25 = (byte)((uint)pcVar12 >> 8);
      pbVar10 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar10 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar10 >> 8) | bVar5,bVar21)
                                                ) >> 8),bVar21 | bVar25);
      uVar19 = (undefined3)((uint)pcVar12 >> 8);
      bVar5 = (char)pcVar12 - *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar19,bVar5);
      *pcVar12 = *pcVar12 + bVar5;
      *(int *)((int)pcVar12 * 2) = (int)(pbVar10 + *(int *)((int)pcVar12 * 2));
      *(byte *)puVar32 = *(byte *)puVar32 + bVar5;
      *pbVar46 = *pbVar46 + bVar25;
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar39 = CONCAT31(uVar19,bVar5 + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar39;
      pbVar30 = (byte *)CONCAT22((short)(uVar39 >> 0x10),CONCAT11(bVar25 + in_AF,bVar5));
      *(byte *)puVar43 = (byte)*puVar43 + bVar6;
      *pbVar30 = *pbVar30 + bVar5;
      *pbVar30 = *pbVar30 + bVar5;
      bVar49 = CARRY1(bVar5,*pbVar30);
      puVar31 = (uint *)CONCAT31((int3)((uint)pbVar30 >> 8),bVar5 + *pbVar30);
      goto code_r0x00404d9a;
    }
    *pbVar10 = *pbVar10 - (char)puVar32;
  }
  *(byte *)puVar31 = (byte)*puVar31 + (char)puVar31;
  bVar49 = false;
  piVar17 = (int *)CONCAT22(uVar27,CONCAT11(bVar5 | *(byte *)puVar32,bVar6));
code_r0x00404d9a:
  do {
    pbVar38 = (byte *)puVar32;
    *puVar31 = (*puVar31 - (int)puVar31) - (uint)bVar49;
    bVar5 = (byte)((uint)piVar17 >> 8);
    uVar27 = (undefined2)((uint)piVar17 >> 0x10);
    bVar25 = (byte)piVar17;
    bVar6 = bVar5 + (byte)iRam00000c00;
    pbVar30 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar5,(byte)iRam00000c00));
    *pbVar38 = *pbVar38 + bVar25;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 - (byte)*puVar43);
    bVar5 = *pbVar30;
    puVar31 = (uint *)(pbVar30 + (uint)CARRY1(bVar6,*pbVar30) + *(int *)pbVar30);
    *pbVar38 = *pbVar38 + bVar25;
    cVar7 = ((bVar6 + bVar5) - *pbVar38) + (byte)*puVar31;
    pcVar12 = (char *)CONCAT22(uVar27,CONCAT11(cVar7,bVar25));
    puVar48 = puVar23 + (uint)bVar50 * -2 + 1;
    uVar39 = in((short)pbVar38);
    *puVar23 = uVar39;
    cVar8 = (char)puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + cVar8;
    uVar19 = (undefined3)((uint)pbVar38 >> 8);
    bVar6 = (byte)pbVar38 | (byte)*puVar43;
    pcVar22 = (char *)CONCAT31(uVar19,bVar6);
    *pcVar12 = *pcVar12 + '\x01';
    bVar5 = (cVar7 - *pcVar22) + (byte)*puVar31;
    pcVar12 = (char *)CONCAT22(uVar27,CONCAT11(bVar5,bVar25));
    puVar23 = puVar48 + (uint)bVar50 * -2 + 1;
    uVar39 = in((short)pcVar22);
    *puVar48 = uVar39;
    *(byte *)puVar31 = (byte)*puVar31 + cVar8;
    bVar6 = bVar6 | (byte)*puVar43;
    puVar32 = (uint *)CONCAT31(uVar19,bVar6);
    *pcVar12 = *pcVar12 + '\x01';
    bVar49 = bVar25 < *(byte *)((int)puVar32 + 2);
    cVar7 = bVar25 - *(byte *)((int)puVar32 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  *(byte *)puVar31 = (byte)*puVar31 + cVar8;
  bVar25 = cVar8 + 0x7b;
  pbVar30 = (byte *)CONCAT31((int3)((uint)puVar31 >> 8),bVar25);
  pbVar10[(int)pbVar30] = pbVar10[(int)pbVar30] + bVar25;
  puVar31 = puVar43 + (uint)bVar50 * -2 + 1;
  uVar28 = SUB42(puVar32,0);
  out(*puVar43,uVar28);
  pbVar37 = pbVar10 + -1;
  *pbVar30 = *pbVar30 + bVar25;
  bVar5 = bVar5 | *(byte *)puVar32;
  piVar17 = (int *)CONCAT22(uVar27,CONCAT11(bVar5,cVar7));
  *pbVar30 = *pbVar30 + bVar25;
  *pbVar37 = *pbVar37 + bVar6;
  *pbVar37 = *pbVar37 ^ bVar25;
  *(byte *)puVar32 = *(byte *)puVar32 + bVar5;
  *pbVar30 = *pbVar30 + bVar25;
  do {
    bVar26 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar23 = (byte)*puVar23 + bVar26;
    bVar5 = *pbVar30;
    bVar25 = (byte)pbVar30;
    *pbVar30 = *pbVar30 + bVar25;
    *(byte **)(pbVar10 + 0x17) =
         (byte *)((int)puVar31 + (uint)CARRY1(bVar5,bVar25) + *(int *)(pbVar10 + 0x17));
    *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
    uVar20 = (undefined3)((uint)pbVar30 >> 8);
    bVar25 = bVar25 | (byte)*puVar31;
    puVar23 = (uint *)((int)puVar23 + *(int *)(pbVar46 + -0x34));
    *(char *)CONCAT31(uVar20,bVar25) = *(char *)CONCAT31(uVar20,bVar25) + bVar25;
    bVar5 = bVar25 + 2;
    cVar8 = (char)((uint)pbVar38 >> 8);
    bVar21 = (byte)piVar17;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      pbVar30 = (byte *)CONCAT31(uVar20,bVar25 + 0x15 + (0xfd < bVar25));
      if (0xec < bVar5 || CARRY1(bVar25 + 0x15,0xfd < bVar25)) {
        *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
      }
code_r0x00404e60:
      pbVar46 = pbVar46 + -*puVar32;
      bVar5 = *pbVar30;
      *pbVar30 = *pbVar30 + (byte)pbVar30;
      pbVar10 = (byte *)((int)puVar31 + (-(uint)CARRY1(bVar5,(byte)pbVar30) - *(int *)pbVar30));
      pbVar30 = pbVar30 + *(int *)pbVar30;
      puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,in_DS);
      *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      bVar5 = *pbVar30;
      *pbVar30 = *pbVar30 + (byte)pbVar30;
      *(byte **)(pbVar37 + (int)puVar32) =
           (byte *)((int)puVar32 +
                   (uint)CARRY1(bVar5,(byte)pbVar30) + *(int *)(pbVar37 + (int)puVar32));
      pbVar30 = pbVar30 + 0x73061314;
      *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
      uVar20 = (undefined3)((uint)piVar17 >> 8);
      bVar21 = bVar21 | *(byte *)puVar32;
      pcVar22 = (char *)CONCAT31(uVar20,bVar21);
      *pbVar30 = *pbVar30 + (char)pbVar30;
      cVar8 = (char)pbVar30 + 'o';
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar8);
      *pcVar12 = *pcVar12 + cVar8;
      pbVar30 = pbVar10 + ((uint)bVar50 * -2 + 1) * 4;
      out(*(undefined4 *)pbVar10,uVar28);
      bVar5 = *(byte *)puVar32;
      *(byte *)puVar32 = *(byte *)puVar32 + bVar21;
      pcVar12 = pcVar12 + (uint)CARRY1(bVar5,bVar21) + *puVar23;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      *pcVar22 = *pcVar22 + bVar6;
      puVar43 = (uint *)(pbVar30 + ((uint)bVar50 * -2 + 1) * 4);
      out(*(undefined4 *)pbVar30,uVar28);
      *(byte *)puVar32 = *(byte *)puVar32 + bVar21;
      piVar17 = (int *)((uint)pcVar12 | *puVar23);
      pcVar22[0x390a0000] = pcVar22[0x390a0000] - bVar26;
      pbVar38 = (byte *)&cRam07000000;
      *(byte *)puVar23 = (byte)*puVar23 - bVar26;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar31 = (uint *)CONCAT31(uVar20,bVar21 | *(byte *)((int)piVar17 + (int)pcVar22));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar26;
      cRam07000000 = cRam07000000 + bVar26;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar30 = (byte *)((int)puVar23 + (int)pbVar46 * 2);
      bVar49 = SCARRY1(*pbVar30,(char)piVar17);
      *pbVar30 = *pbVar30 + (char)piVar17;
      bVar5 = *pbVar30;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar20,bVar5) = *(char *)CONCAT31(uVar20,bVar5) + bVar5;
    bVar25 = bVar25 + 0x71;
    pbVar30 = (byte *)CONCAT31(uVar20,bVar25);
    *pbVar30 = *pbVar30;
    *(byte *)puVar31 = (byte)*puVar31 + 1;
    *piVar17 = (*piVar17 - (int)pbVar30) - (uint)(0x90 < bVar5);
    uVar39 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar25;
    if (!CARRY1((byte)uVar39,bVar25)) goto code_r0x00404e60;
    *pbVar30 = *pbVar30 + bVar25;
    uVar27 = (undefined2)((uint)piVar17 >> 0x10);
    bVar26 = bVar26 | *pbVar30;
    pbVar30 = pbVar30 + -*(int *)pbVar30;
    *pbVar37 = *pbVar37 + bVar26;
    cVar7 = bVar21 - *(byte *)((int)puVar32 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar27,CONCAT11(bVar26,bVar21)) >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  cVar34 = (char)pbVar30;
  *pbVar30 = *pbVar30 + cVar34;
  uVar20 = (undefined3)((uint)pbVar30 >> 8);
  pcVar12 = (char *)CONCAT31(uVar20,cVar34 + '{');
  out(*puVar31,uVar28);
  *pcVar12 = *pcVar12 + cVar34 + '{';
  bVar25 = cVar34 + 0x7e;
  pbVar30 = (byte *)CONCAT31(uVar20,bVar25);
  puVar43 = puVar31 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
  out(puVar31[(uint)bVar50 * -2 + 1],uVar28);
  pbVar38 = pbVar10 + -2;
  *pbVar30 = *pbVar30 + bVar25;
  bVar5 = *(byte *)puVar32;
  puVar31 = (uint *)CONCAT22(uVar27,CONCAT11(bVar26 | bVar5,cVar7));
  *pbVar30 = *pbVar30 + bVar25;
  *pbVar38 = *pbVar38 + bVar6;
  *pbVar38 = *pbVar38 ^ bVar25;
  *(byte *)puVar32 = *(byte *)puVar32 + (bVar26 | bVar5);
  *pbVar30 = *pbVar30 + bVar25;
  *pbVar30 = *pbVar30 + cVar8;
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar25;
  *(byte **)(pbVar10 + 0x18) =
       (byte *)((int)puVar43 + (uint)CARRY1(bVar5,bVar25) + *(int *)(pbVar10 + 0x18));
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  bVar25 = bVar25 | (byte)*puVar43;
  puVar23 = (uint *)((int)puVar23 + *(int *)(pbVar46 + -0x33));
  *(char *)CONCAT31(uVar20,bVar25) = *(char *)CONCAT31(uVar20,bVar25) + bVar25;
  bVar49 = SCARRY1(bVar25,'\x02');
  bVar5 = bVar25 + 2;
  piVar17 = (int *)CONCAT31(uVar20,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    return CONCAT31(uVar20,bVar25 + 0x71);
  }
code_r0x00404ebf:
  bVar25 = (byte)piVar17;
  uVar20 = (undefined3)((uint)piVar17 >> 8);
  if (bVar5 != 0 && bVar49 == (char)bVar5 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar25;
    puVar43[(int)puVar23 * 2] =
         (uint)((int)puVar32 + (uint)(0xd2 < bVar25) + puVar43[(int)puVar23 * 2]);
    return CONCAT31(uVar20,bVar25 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar5 = *pbVar38;
  *puVar43 = (uint)(*puVar43 + (int)piVar17);
  bVar21 = (byte)((uint)puVar31 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar21;
  *(byte *)piVar17 = (char)*piVar17 + bVar25;
  pbVar30 = (byte *)(CONCAT31(uVar19,bVar6 | bVar5) - *(int *)pbVar38);
  puVar48 = (uint *)CONCAT31(uVar20,bVar25 + 6);
  *(uint *)(pbVar38 + (int)puVar43 * 2) =
       (int)puVar48 + (uint)(0xf9 < bVar25) + *(int *)(pbVar38 + (int)puVar43 * 2);
  *(byte *)puVar31 = (byte)*puVar31 ^ bVar25 + 6;
  bVar25 = (byte)puVar31;
  *pbVar30 = *pbVar30 + bVar25;
  puVar47 = puVar43 + (uint)bVar50 * -2 + 1;
  uVar27 = SUB42(pbVar30,0);
  out(*puVar43,uVar27);
  *puVar31 = *puVar31 ^ (uint)puVar48;
  *pbVar30 = *pbVar30 + bVar25;
  puVar43 = (uint *)(pbVar38 + -*(int *)pbVar38);
  *(uint *)((int)puVar23 + 0x31) = *(uint *)((int)puVar23 + 0x31) | (uint)pbVar46;
  *puVar48 = *puVar48 + (int)puVar48;
  puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar21 | (byte)*puVar43,bVar25)
                            );
  *(byte **)(pbVar30 + 0x6e) = (byte *)(*(int *)(pbVar30 + 0x6e) + (int)puVar47);
  piVar17 = (int *)((uint)puVar48 | *puVar48);
  bVar6 = (byte)puVar43;
  *(byte *)puVar23 = (byte)*puVar23 - bVar6;
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar25;
  if (CARRY1(bVar5,bVar25)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar5 = pbVar30[0x11];
    uVar28 = (undefined2)((uint)puVar43 >> 0x10);
    puVar48 = puVar47 + (uint)bVar50 * -2 + 1;
    out(*puVar47,uVar27);
    puVar31 = (uint *)((int)puVar31 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar29 = (byte)((uint)puVar43 >> 8) | bVar5 | *pbVar30;
    pcVar12 = (char *)((int)piVar17 + -0x21000001);
    bVar5 = (byte)pcVar12 | 0x11;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    cVar8 = bVar5 - 7;
    pcVar22 = (char *)CONCAT31(uVar19,cVar8);
    *puVar23 = (uint)(pcVar22 + (uint)(bVar5 < 7) + *puVar23);
    puVar47 = puVar48 + (uint)bVar50 * -2 + 1;
    out(*puVar48,uVar27);
    pbVar30 = pbVar30 + 1;
    *pcVar22 = *pcVar22 + cVar8;
    bVar21 = (byte)((uint)pcVar12 >> 8);
    bVar26 = bVar6 | bVar21;
    bVar25 = cVar8 - *pcVar22;
    bVar5 = *(byte *)puVar31;
    *(byte *)puVar31 = *(byte *)puVar31 + bVar25;
    *(char *)CONCAT31(uVar19,bVar25) =
         *(char *)CONCAT31(uVar19,bVar25) + bVar25 + CARRY1(bVar5,bVar25);
    *pbVar30 = *pbVar30 + bVar25;
    *(byte *)puVar47 = (byte)*puVar47 + bVar26;
    bVar5 = (byte)((uint)pbVar30 >> 8);
    *(byte *)puVar31 = *(byte *)puVar31 + bVar25 + CARRY1((byte)pbVar30,bVar5);
    piVar17 = (int *)CONCAT31(uVar19,bVar25);
    *(byte *)piVar17 = (char)*piVar17 + bVar25;
    pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                               CONCAT11(bVar5 + bVar21,(byte)pbVar30 + bVar5));
    puVar43 = (uint *)CONCAT22(uVar28,CONCAT11(bVar29 + *(char *)(CONCAT31((int3)(CONCAT22(uVar28,
                                                  CONCAT11(bVar29,bVar6)) >> 8),bVar26) + 0x76),
                                               bVar26));
    puStack_78._0_2_ = (ushort)puStack_84;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar12 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar31);
    cVar34 = (char)puVar31;
    *pbVar30 = *pbVar30 + cVar34;
    uVar27 = (undefined2)((uint)puVar43 >> 0x10);
    cVar36 = (char)puVar43;
    cVar41 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + 0x75);
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar8 = (char)pcVar12 + 'o';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8);
    *pcVar12 = *pcVar12 + cVar8;
    cVar40 = (char)((uint)puVar31 >> 8);
    *pbVar46 = *pbVar46 - cVar40;
    pbVar30[1] = pbVar30[1] + cVar34;
    pcVar12 = pcVar12 + -0x757b021b;
    cVar8 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar8;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    cVar7 = cVar8 + 'o';
    pcVar12 = (char *)CONCAT31(uVar19,cVar7);
    pbVar10 = pbVar30 + 2;
    *pcVar12 = *pcVar12 + cVar7;
    iVar16 = CONCAT22(uVar27,CONCAT11(cVar41 + *(char *)(CONCAT22(uVar27,CONCAT11(cVar41,cVar36)) +
                                                        0x76),cVar36));
    *pcVar12 = *pcVar12 + cVar7;
    pcVar12 = (char *)CONCAT31(uVar19,cVar8 + -0x22);
    puVar32 = (uint *)((int)puVar23 + (uint)bVar50 * -2 + 1);
    pbVar38 = (byte *)((int)puVar47 + (uint)bVar50 * -2 + 1);
    *(byte *)puVar23 = (byte)*puVar47;
    *pcVar12 = *pcVar12 + cVar8 + -0x22;
    *(byte *)((int)puVar31 + (int)pcVar12) =
         *(byte *)((int)puVar31 + (int)pcVar12) - (char)((uint)pbVar10 >> 8);
    *pbVar10 = *pbVar10 + cVar34;
    bVar25 = cVar40 - pbVar30[4];
    pbVar37 = pbVar38 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar38,(short)pbVar10);
    puVar43 = (uint *)((uint)(pcVar12 + *(int *)(pcVar12 + iVar16)) ^ 0x280a0001);
    *(byte *)puVar43 = (byte)*puVar43 << 1 | (char)(byte)*puVar43 < '\0';
    *pbVar37 = *pbVar37 + (char)puVar43;
    pbVar37 = pbVar37 + *(int *)(pbVar30 + -0x5c);
    pbVar30 = (byte *)((uint)puVar43 | *puVar43);
    *pbVar37 = *pbVar37 + (char)pbVar30;
    puVar43 = (uint *)CONCAT31((int3)((uint)iVar16 >> 8),cVar36 - (char)pbVar10);
    bVar5 = *pbVar30;
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar25 + *pbVar30,cVar34));
    iVar16 = *(int *)pbVar30;
    *pbVar10 = *pbVar10 + cVar34;
    cVar8 = (char)(pbVar30 + (uint)CARRY1(bVar25,bVar5) + iVar16) + 'r';
    puVar48 = (uint *)CONCAT31((int3)((uint)(pbVar30 + (uint)CARRY1(bVar25,bVar5) + iVar16) >> 8),
                               cVar8);
    pbVar30 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),CONCAT11(10,(char)pbVar10));
    *(char *)(puVar48 + 10) = (char)puVar48[10] + '\n';
    *pbVar37 = *pbVar37 + cVar8;
    puVar47 = (uint *)(pbVar37 + *(int *)(pbVar30 + -0x5e));
    uVar39 = *puVar48;
    cVar8 = (char)((uint)puVar48 | uVar39);
    *(byte *)puVar47 = (byte)*puVar47 + cVar8;
    uVar19 = (undefined3)(((uint)puVar48 | uVar39) >> 8);
    cVar7 = cVar8 + (byte)*puVar43;
    puVar48 = (uint *)CONCAT31(uVar19,cVar7);
    if (SCARRY1(cVar8,(byte)*puVar43) == cVar7 < '\0') goto code_r0x00405090;
    *(byte *)puVar48 = (byte)*puVar48 + cVar7;
    piVar17 = (int *)CONCAT31(uVar19,cVar7 + '\x02');
    puVar23 = puVar32;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar30) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  cVar8 = (char)piVar17 + '}';
  pbVar10 = (byte *)CONCAT31(uVar19,cVar8);
  pbVar30[(int)pbVar10] = pbVar30[(int)pbVar10] + cVar8;
  pbVar30[0x280a0000] = pbVar30[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar5 = (byte)puVar31 & 7;
  *pbVar10 = *pbVar10 << bVar5 | *pbVar10 >> 8 - bVar5;
  *(byte *)puVar47 = (byte)*puVar47 + cVar8;
  cVar34 = (char)puVar43 - (byte)*puVar47;
  uVar27 = (undefined2)((uint)puVar43 >> 0x10);
  cVar40 = (char)((uint)puVar43 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),cVar34) + 0x7c);
  pcVar12 = (char *)CONCAT22(uVar27,CONCAT11(cVar40,cVar34));
  *pbVar10 = *pbVar10 + cVar8;
  bVar25 = (char)piVar17 + 0xa7U & *pbVar30;
  puVar32 = (uint *)((int)puVar23 + *(int *)(pbVar46 + 0x7c));
  *(char *)CONCAT31(uVar19,bVar25) = *(char *)CONCAT31(uVar19,bVar25) + bVar25;
  bVar25 = bVar25 + 0x2a;
  pbVar10 = (byte *)CONCAT31(uVar19,bVar25);
  *pbVar10 = *pbVar10 + bVar25;
  *pcVar12 = *pcVar12 + cVar34;
  *pbVar30 = *pbVar30 ^ bVar25;
  *pcVar12 = *pcVar12 + bVar25;
  bVar5 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar25;
  cVar8 = (bVar25 - *pbVar10) - CARRY1(bVar5,bVar25);
  *(byte *)puVar31 = (byte)*puVar31 + (byte)pbVar30;
  cVar40 = cVar40 + pcVar12[0x7b];
  *(char *)CONCAT31(uVar19,cVar8) = *(char *)CONCAT31(uVar19,cVar8) + cVar8;
  pcVar12 = (char *)CONCAT31(uVar19,cVar8 + 'o');
  *pcVar12 = *pcVar12 + cVar8 + 'o';
  pcVar12 = pcVar12 + 0x2ed7fde6;
  cVar7 = (char)pcVar12;
  *pcVar12 = *pcVar12 + cVar7;
  cVar8 = *(char *)(CONCAT22(uVar27,CONCAT11(cVar40,cVar34)) + 0x7b);
  *pcVar12 = *pcVar12 + cVar7;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar12 >> 8),cVar7 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar20 = (undefined3)((uint)pbVar30 >> 8);
  bVar25 = (byte)pbVar30 | (byte)*puVar47;
  pbVar38 = (byte *)CONCAT31(uVar20,bVar25);
  uVar39 = CONCAT22(uVar27,CONCAT11(cVar40 + cVar8,cVar34)) | (uint)puVar47;
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  bVar5 = (byte)piVar17 | *pbVar38;
  pbVar10 = (byte *)CONCAT31(uVar19,bVar5);
  cVar8 = (byte)puVar31 - bVar25;
  puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),cVar8);
  *pbVar10 = *pbVar10 + bVar5;
  puVar43 = puVar47 + (uint)bVar50 * -2 + 1;
  out(*puVar47,(short)pbVar38);
  *pbVar10 = bVar5;
  *pbVar38 = *pbVar38 + cVar8;
  puVar47 = puVar43 + (uint)bVar50 * -2 + 1;
  out(*puVar43,(short)pbVar38);
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  puVar43 = (uint *)(CONCAT31((int3)(uVar39 >> 8),(char)uVar39 - (char)((uint)pbVar30 >> 8)) |
                    (uint)puVar47);
  pbVar30 = (byte *)CONCAT31(uVar20,(bVar25 | (byte)*puVar47) + (byte)*puVar32);
  cVar8 = bVar5 - (byte)*puVar32;
  puVar48 = (uint *)CONCAT31(uVar19,cVar8 - *(char *)CONCAT31(uVar19,cVar8));
code_r0x00405090:
  *puVar48 = (uint)(pbVar30 + *puVar48);
  cVar8 = (char)puVar48;
  *(byte *)puVar48 = (byte)*puVar48 + cVar8;
  *(byte *)puVar48 = (byte)*puVar48 + cVar8;
  *(byte *)puVar48 = (byte)*puVar48 + cVar8;
  *puVar31 = *puVar31 - (int)pbVar46;
  uVar39 = *puVar47;
  bVar5 = (byte)pbVar30;
  *(byte *)puVar47 = (byte)*puVar47 + bVar5;
  *(byte *)puVar48 = (byte)*puVar48 + cVar8 + CARRY1((byte)uVar39,bVar5);
  *(byte *)puVar31 = (byte)*puVar31 + cVar8;
  uVar39 = *puVar43;
  *(byte *)puVar43 = (byte)*puVar43 + 0x72;
  *(byte *)puVar43 = (byte)*puVar43;
  cVar8 = (char)((uint)pbVar30 >> 8);
  if (SCARRY1((byte)uVar39,'r')) {
    puVar47 = (uint *)((int)puVar47 + *(int *)(pbVar30 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar47 = (byte)*puVar47 + (char)puVar48;
      uVar19 = (undefined3)((uint)puVar48 >> 8);
      cVar7 = (char)puVar48 + (byte)*puVar43;
      pcVar12 = (char *)CONCAT31(uVar19,cVar7);
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                 CONCAT11((char)((uint)puVar43 >> 8) +
                                          *(byte *)((int)puVar43 + 0x7b),(char)puVar43));
      *pcVar12 = *pcVar12 + cVar7;
      in_AF = 9 < (cVar7 + 0x6fU & 0xf) | in_AF;
      uVar39 = CONCAT31(uVar19,cVar7 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar39;
      piVar17 = (int *)CONCAT22((short)(uVar39 >> 0x10),
                                CONCAT11((char)((uint)puVar48 >> 8) + in_AF,bVar6));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar6 = bVar6 | *(byte *)(piVar17 + 0x354a);
      bVar6 = bVar6 - *(char *)CONCAT31(uVar19,bVar6);
      pbVar10 = (byte *)CONCAT31(uVar19,bVar6);
      bVar25 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar6;
      puVar47 = (uint *)((int)puVar47 + (-(uint)CARRY1(bVar25,bVar6) - *(int *)pbVar10));
      puVar48 = (uint *)(pbVar10 + 0xfc00);
      *pbVar30 = *pbVar30 + cVar8;
      uVar39 = *puVar48;
      bVar25 = (byte)puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + bVar25;
      uVar14 = (uint)CARRY1((byte)uVar39,bVar25);
      uVar1 = *puVar43;
      uVar39 = *puVar43;
      *puVar43 = (uint)((byte *)(uVar39 + (int)puVar48) + uVar14);
      if (!CARRY4(uVar1,(uint)puVar48) && !CARRY4(uVar39 + (int)puVar48,uVar14)) break;
      *(byte *)puVar48 = (byte)*puVar48 + bVar25;
    }
  }
  uVar39 = (uint)puVar48 | *puVar48;
  uVar27 = SUB42(pbVar30,0);
  *(byte *)puVar47 = (byte)*puVar47 + (char)uVar39;
  piVar17 = (int *)(uVar39 + 0xc1872);
  if (SCARRY4(uVar39,0xc1872)) {
    cVar7 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar7;
    *pbVar30 = *pbVar30 + cVar7;
    *(char *)piVar17 = *(char *)piVar17 + cVar7;
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar31;
    *(char *)piVar17 = *(char *)piVar17 + cVar7;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar5;
    puVar48 = puVar47;
    goto code_r0x00405117;
  }
  do {
    uVar39 = *puVar47;
    bVar5 = (byte)piVar17;
    *(byte *)puVar47 = (byte)*puVar47 + bVar5;
    if (CARRY1((byte)uVar39,bVar5)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar19 = (undefined3)((uint)puVar31 >> 8);
      bVar25 = (byte)puVar31 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar31 = (uint *)CONCAT31(uVar19,bVar25 | *(byte *)CONCAT31(uVar19,bVar25));
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar5 = bVar5 | *pbVar30;
      pcVar12 = (char *)CONCAT31(uVar19,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        puVar23 = puVar47 + (uint)bVar50 * -2 + 1;
        out(*puVar47,uVar27);
        uVar39 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar5);
        *(byte *)puVar23 = (byte)*puVar23 + bVar5;
        pcVar12 = (char *)(uVar39 | 8);
        cVar7 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + 0x7a);
        puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(cVar7,(char)puVar43));
        *pcVar12 = *pcVar12 + (char)pcVar12;
        cVar8 = (char)pcVar12 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar39 >> 8),cVar8);
        *(char *)piVar17 = (char)*piVar17 + cVar8;
        *(byte *)puVar31 = (byte)*puVar31 + 1;
        puVar48 = puVar23 + (uint)bVar50 * -2 + 1;
        out(*puVar23,uVar27);
        pbVar30 = (byte *)((uint)pbVar30 ^ uRam08122c04);
        iVar16 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar16 * 2) = *(char *)(iVar16 * 2) - cVar7;
        do {
          bVar5 = (byte)iVar16;
          *(byte *)puVar48 = (byte)*puVar48 + bVar5;
          bVar49 = CARRY1(bVar5,(byte)*puVar43);
          uVar19 = (undefined3)((uint)iVar16 >> 8);
          cVar8 = bVar5 + (byte)*puVar43;
          pbVar10 = (byte *)CONCAT31(uVar19,cVar8);
          uVar9 = in_DS;
          uVar4 = uStack_c4;
          if (SCARRY1(bVar5,(byte)*puVar43) == cVar8 < '\0') goto GenerateStatusText;
          *pbVar10 = *pbVar10 + cVar8;
          uVar39 = CONCAT31(uVar19,cVar8 + '\'') + 0x1ebd9f3;
          uStack_c8 = (undefined1)(ushort)puStack_78;
          uStack_c7 = (undefined1)((ushort)puStack_78 >> 8);
          piVar17 = (int *)(uVar39 ^ 0x73060000);
          puVar31 = (uint *)((int)puVar31 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                     CONCAT11((byte)((uint)puVar43 >> 8) | pbVar46[0x7e],
                                              (char)puVar43));
          cVar8 = (char)uVar39;
          *(char *)piVar17 = (char)*piVar17 + cVar8;
          uVar39 = CONCAT31((int3)((uint)piVar17 >> 8),cVar8 + '\x02');
          bVar49 = 0xd9f2d2da < uVar39;
          iVar16 = uVar39 + 0x260d2d25;
          pbVar38 = pbVar46;
          do {
            uVar19 = (undefined3)((uint)iVar16 >> 8);
            bVar25 = (char)iVar16 + -2 + bVar49;
            pbVar10 = (byte *)CONCAT31(uVar19,bVar25);
            bVar5 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar25;
            bVar6 = (byte)puVar43;
            uStack_c4 = (ushort)puStack_78;
            if (CARRY1(bVar5,bVar25)) {
              *pbVar10 = *pbVar10 + bVar25;
              puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                         CONCAT11((byte)((uint)puVar43 >> 8) | pbVar38[0x7f],bVar6))
              ;
              *pbVar10 = *pbVar10 + bVar25;
              pbVar10 = (byte *)CONCAT31(uVar19,bVar25 + 0x2a);
              *pbVar10 = *pbVar10 + bVar25 + 0x2a;
              *(byte *)puVar43 = (byte)*puVar43 + (char)pbVar30;
              uVar9 = in_DS;
              while( true ) {
                in_DS = uVar9;
                bVar25 = (byte)pbVar10;
                *pbVar30 = *pbVar30 ^ bVar25;
                *pbVar30 = *pbVar30 + (char)puVar43;
                *pbVar10 = *pbVar10 + bVar25;
                *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)pbVar30 >> 8);
                bVar5 = *pbVar10;
                *pbVar10 = *pbVar10 + bVar25;
                uVar1 = *puVar43;
                uVar39 = *puVar43;
                *puVar43 = (uint)(pbVar10 + uVar39 + CARRY1(bVar5,bVar25));
                uVar19 = (undefined3)((uint)pbVar10 >> 8);
                if (CARRY4(uVar1,(uint)pbVar10) ||
                    CARRY4((uint)(pbVar10 + uVar39),(uint)CARRY1(bVar5,bVar25))) break;
                *(byte *)puVar48 = (byte)*puVar48 + bVar25;
                pcVar12 = (char *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                           CONCAT11((char)((uint)puVar31 >> 8) + *pbVar10,
                                                    (char)puVar31));
                *(byte *)puVar48 = (byte)*puVar48 + bVar25;
                piVar17 = (int *)CONCAT31(uVar19,bVar25 | (byte)*puVar43);
                puVar31 = puVar48;
                while( true ) {
                  puVar48 = puVar31 + (uint)bVar50 * -2 + 1;
                  out(*puVar31,(short)pbVar30);
                  pbVar30 = pbVar30 + 1;
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  bVar6 = (byte)((uint)pcVar12 >> 8) | *pbVar30;
                  uVar19 = (undefined3)((uint)piVar17 >> 8);
                  bVar25 = (byte)piVar17 ^ *pbVar30;
                  pcVar22 = (char *)CONCAT31(uVar19,bVar25);
                  cRam282b0000 = cRam282b0000 - bVar6;
                  *pcVar22 = *pcVar22 + bVar25;
                  pbVar46 = pbVar38 + -*(int *)pbVar30;
                  uStack_c8 = (undefined1)in_DS;
                  uStack_c7 = (undefined1)(in_DS >> 8);
                  bVar5 = *(byte *)((int)puVar32 + 0x17);
                  *pcVar22 = *pcVar22 + bVar25;
                  puVar31 = (uint *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                             CONCAT11(bVar6 + bVar5 | *pbVar30,(char)pcVar12));
                  *(byte *)puVar43 = (byte)*puVar43 + (char)puVar43;
                  *(byte *)((int)pcVar22 * 2) = *(byte *)((int)pcVar22 * 2) ^ bVar25;
                  in_AF = 9 < (bVar25 & 0xf) | in_AF;
                  bVar25 = bVar25 + in_AF * -6;
                  pbVar10 = (byte *)CONCAT31(uVar19,bVar25 + (0x9f < bVar25 | in_AF * (bVar25 < 6))
                                                             * -0x60);
                  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
                  *(char *)((int)pbVar10 * 2) =
                       *(char *)((int)pbVar10 * 2) + (char)((uint)pbVar30 >> 8);
                  bVar49 = CARRY1((byte)*puVar31,(byte)pbVar30);
                  *(byte *)puVar31 = (byte)*puVar31 + (byte)pbVar30;
                  uVar9 = in_DS;
                  uVar4 = (ushort)puStack_78;
GenerateStatusText:
                  in_DS = uVar4;
                  pbVar38 = pbVar46;
                  uStack_c4 = in_DS;
                  if (!bVar49) break;
                  *pbVar10 = *pbVar10 + (char)pbVar10;
                  iVar16 = CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | *pbVar30);
                  uVar27 = (undefined2)((uint)puVar43 >> 0x10);
                  cVar34 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + 0x7d);
                  *pbVar10 = *pbVar10 + (char)pbVar10;
                  *(byte *)puVar32 = (byte)*puVar32 - (char)((uint)puVar31 >> 8);
                  iVar16 = iVar16 - *(int *)(&uRam0b0a0000 + iVar16);
                  cVar8 = *(char *)(CONCAT22(uVar27,CONCAT11(cVar34,(char)puVar43)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar48,(short)pbVar30);
                  pbVar30 = (byte *)CONCAT22(uStack_c6,CONCAT11(uStack_c7,uStack_c8));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar31 = puVar48 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
                  out(puVar48[(uint)bVar50 * -2 + 1],CONCAT11(uStack_c7,uStack_c8));
                  pbVar38 = pbVar46 + 1;
                  cVar7 = (char)iVar16;
                  pcVar12 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                             CONCAT11((byte)((uint)iVar16 >> 8) |
                                                      *(byte *)((int)puVar32 + 0x46),cVar7));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_78._0_2_ = CONCAT11(uStack_c7,uStack_c8);
                  uVar19 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar31,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar19,0x5f);
                  puVar32 = (uint *)((int)puVar32 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar43 = (uint *)CONCAT22(uVar27,CONCAT11(cVar34 + cVar8 | (byte)puVar31[-0x20],
                                                             (char)puVar43));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar48 = (uint *)CONCAT31(uVar19,0x8c);
                  puVar31[(int)puVar32 * 2] = (uint)(pbVar30 + puVar31[(int)puVar32 * 2]);
                  uVar39 = *puVar31;
                  *(byte *)puVar31 = (byte)*puVar31 + 0x8c;
                  if ((byte)uVar39 < 0x74) {
                    *pbVar30 = *pbVar30 + cVar7;
                    *(byte *)puVar43 = (byte)*puVar43 >> 1;
                    *(char *)puVar48 = (char)*puVar48 + -0x74;
                    *puVar48 = (uint)(pbVar38 + *puVar48);
                    *puVar48 = *puVar48 << 1 | (uint)((int)*puVar48 < 0);
                    *pbVar30 = *pbVar30 + cVar7;
                    pbVar46[2] = pbVar46[2] - cVar7;
                    *pbVar30 = *pbVar30 + cVar7;
                    pbVar10 = (byte *)CONCAT31(uVar19,0x83);
                    puVar48 = puVar43;
                    goto code_r0x00405312;
                  }
                  *puVar48 = (uint)(*puVar48 + (int)puVar48);
                  piVar17 = (int *)(CONCAT31(uVar19,(byte)puVar48[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar48[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar17 = (int *)((int)piVar17 + *puVar31);
                }
              }
              *pbVar30 = *pbVar30 + bVar25;
              *(byte *)puVar43 = (byte)*puVar43 - (char)pbVar30;
              *pbVar10 = *pbVar10 + bVar25;
              pbVar10 = (byte *)CONCAT31(uVar19,bVar25 | (byte)*puVar43);
            }
            else {
              cVar8 = (char)puVar31;
              *pbVar30 = *pbVar30 + cVar8;
              *(byte **)pbVar10 = pbVar30 + *(int *)pbVar10;
              *pbVar10 = *pbVar10 + bVar25;
              bVar25 = bVar25 + *pbVar10;
              pbVar10 = (byte *)CONCAT31(uVar19,bVar25);
              if (-1 < (char)bVar25) {
                *(byte *)puVar43 = (byte)*puVar43 + bVar6;
                out(*puVar48,(short)pbVar30);
                pbVar30 = pbVar30 + 1;
                *pbVar10 = *pbVar10 + bVar25;
                puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                           bVar6 | (byte)((uint)iVar16 >> 8));
                cVar7 = bVar25 - (byte)*puVar31;
                pcVar12 = (char *)CONCAT31(uVar19,cVar7);
                *pcVar12 = *pcVar12 + cVar7 + (bVar25 < (byte)*puVar31);
                *pbVar30 = *pbVar30 + cVar7;
                pcVar12 = (char *)((int)pcVar12 * 2 + 0x79);
                *pcVar12 = *pcVar12 + (char)((uint)pbVar30 >> 8);
                pbVar10 = (byte *)in((short)pbVar30);
                puVar48 = puVar48 + (uint)bVar50 * -2 + 1;
              }
              *(byte *)puVar48 = (byte)*puVar48 + cVar8;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              uStack_c8 = (undefined1)in_DS;
              uStack_c7 = (undefined1)(in_DS >> 8);
              bVar5 = *pbVar10;
              bVar6 = (byte)((uint)puVar31 >> 8);
              bVar21 = bVar6 + *pbVar10;
              iVar16 = *(int *)pbVar10;
              *pbVar30 = *pbVar30 + cVar8;
              bVar25 = (char)(pbVar10 + (uint)CARRY1(bVar6,bVar5) + iVar16) - (byte)*puVar43;
              pbVar10 = (byte *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar6,bVar5) + iVar16)
                                               >> 8),bVar25);
              *(byte *)puVar43 = (byte)*puVar43 ^ bVar25;
              *pbVar38 = *pbVar38 + (char)puVar43;
              *pbVar10 = *pbVar10 + bVar25;
              *pbVar10 = *pbVar10 + bVar25;
              *pbVar10 = *pbVar10 + bVar25;
              puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                         CONCAT11(bVar21 + *pbVar10,cVar8));
              pbVar10 = pbVar10 + (uint)CARRY1(bVar21,*pbVar10) + *(int *)pbVar10;
              *pbVar30 = *pbVar30 + cVar8;
              puVar48 = (uint *)((int)puVar48 + *(int *)(pbVar30 + 0x3e));
            }
            *(byte *)puVar48 = (byte)*puVar48 + (char)pbVar10;
            cVar8 = (char)pbVar10 + 'r';
            puVar48 = (uint *)((int)puVar48 + -1);
            uVar39 = CONCAT31((int3)((uint)pbVar10 >> 8),cVar8);
            *(byte *)puVar48 = *(byte *)puVar48 + cVar8;
            bVar49 = 0xfff38f8d < uVar39;
            iVar16 = uVar39 + 0xc7072;
            pbVar46 = pbVar38;
          } while (SCARRY4(uVar39,0xc7072));
        } while( true );
      }
      *pcVar12 = *pcVar12 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar10 = (byte *)CONCAT31(uVar19,bVar5);
      bVar25 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar5;
      uVar19 = (undefined3)
               ((uint)(pbVar10 + (uint)CARRY1(bVar25,bVar5) + *(int *)((int)puVar31 + (int)pbVar30))
               >> 8);
      cVar7 = (char)(pbVar10 + (uint)CARRY1(bVar25,bVar5) + *(int *)((int)puVar31 + (int)pbVar30)) +
              'E';
      pcVar12 = (char *)CONCAT31(uVar19,cVar7);
      *pcVar12 = *pcVar12 + cVar7;
      cVar7 = cVar7 + *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar19,cVar7);
      *pcVar12 = *pcVar12 + cVar7;
      puVar48 = (uint *)CONCAT31(uVar19,cVar7 + *pcVar12);
      *(char *)puVar48 = (char)*puVar48 + cVar7 + *pcVar12;
      pbVar10 = (byte *)((uint)puVar48 | *puVar48);
      bVar5 = *pbVar10;
      bVar25 = (byte)pbVar10;
      *pbVar10 = *pbVar10 + bVar25;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar25 + CARRY1(bVar5,bVar25));
      puVar48 = puVar47;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar43 = (uint *)((int)puVar43 - *puVar43);
      puVar47 = puVar48 + (uint)bVar50 * -2 + 1;
      out(*puVar48,uVar27);
    }
    *pbVar30 = *pbVar30 + (char)puVar31;
    bVar49 = puVar43 < (uint *)*piVar17;
    puVar43 = (uint *)((int)puVar43 - *piVar17);
    bVar5 = (byte)((uint)puVar31 >> 8);
    *(byte *)((int)puVar32 + 0x39) = (*(byte *)((int)puVar32 + 0x39) - bVar5) - bVar49;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar39 = *puVar43;
    *(int *)((int)puVar32 + 0x39) = *(int *)((int)puVar32 + 0x39) - (int)pbVar46;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar39 | (byte)*puVar43,(char)puVar31));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar8;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar5 = (char)piVar17 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar5);
  *pbVar10 = *pbVar10 ^ bVar5;
  *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)pcVar12 >> 8);
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + (byte)pcVar12;
  piVar17 = (int *)(((uint)pbVar10 | 0x1496f09) + *puVar32 + (uint)CARRY1(bVar5,(byte)pcVar12));
  puVar23 = puVar31 + (uint)bVar50 * -2 + 1;
  out(*puVar31,(short)pbVar30);
  pbVar46 = pbVar30 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),(byte)pbVar46 | (byte)*puVar43);
  cVar8 = (char)piVar17 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar8);
  puVar48 = puVar43;
  puVar31 = puVar23;
  if ((POPCOUNT(cVar8) & 1U) != 0) {
    *pbVar30 = *pbVar30 - (char)((uint)pbVar46 >> 8);
    *pbVar10 = *pbVar10 + cVar8;
code_r0x00405396:
    bVar5 = *pbVar10;
    bVar25 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar25;
    *puVar23 = (uint)(pbVar10 + (uint)CARRY1(bVar5,bVar25) + *puVar23);
    out(*puVar23,(short)pbVar30);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar12 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((byte)((uint)pbVar10 >> 8) |
                                        (byte)puVar23[(uint)bVar50 * -2 + 1],bVar25));
    *(char **)((int)puVar32 + -1) = pcVar12 + *(int *)((int)puVar32 + -1);
    out(puVar23[(uint)bVar50 * -2 + 1],(short)pbVar30);
    *pcVar12 = *pcVar12 + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar43 = (uint *)((int)puVar48 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar19 = (undefined3)((uint)pbVar30 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar6 = (byte)pbVar30 | *(byte *)puVar43 | *(byte *)puVar43;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*puVar31,(short)CONCAT31(uVar19,bVar6));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar6 = bVar6 | (byte)piVar17;
  iVar33 = CONCAT31(uVar19,bVar6);
  pbVar30 = (byte *)((int)piVar17 - *piVar17);
  cVar8 = (char)pbVar30;
  *pcVar12 = *pcVar12 + cVar8;
  cVar7 = (char)pcVar12 - bVar6;
  *pbVar30 = *pbVar30 + cVar8;
  uVar27 = (undefined2)((uint)pcVar12 >> 0x10);
  bVar25 = (byte)((uint)pcVar12 >> 8) | *pbVar30;
  pbVar38 = pbVar38 + -1;
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  bVar5 = *(byte *)(CONCAT22(uVar27,CONCAT11(bVar25,cVar7)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar30;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar38;
  *pbVar30 = *pbVar30 + cVar8;
  bVar5 = bVar25 | bVar5 | *(byte *)puVar43;
  iVar24 = CONCAT22(uVar27,CONCAT11(bVar5,cVar7));
  pbVar46 = (byte *)((uint)(puVar31 + (uint)bVar50 * -2 + 1) ^ *(uint *)(iVar33 + -0x43));
  iVar16 = *(int *)pbVar30;
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  if (SCARRY4(iVar16,(int)pbVar30)) {
    *pbVar30 = *pbVar30 + cVar8;
  }
  pbVar10 = pbVar30 + 0x5674;
  puVar32 = (uint *)((int)puVar32 +
                    (-(uint)((byte *)0xffffa98b < pbVar30) - *(int *)(pbVar46 + -0x7f)));
  bVar25 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar25;
  uVar20 = (undefined3)((uint)pbVar10 >> 8);
  bVar21 = bVar25 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar20,bVar21);
  *(uint *)(pbVar46 + (int)puVar32 * 8) =
       *(int *)(pbVar46 + (int)puVar32 * 8) + iVar33 + (uint)(0xd2 < bVar25);
  bVar25 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar21;
  if (!CARRY1(bVar25,bVar21)) {
    do {
      pbVar10 = (byte *)(iVar33 + 1);
      bVar25 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar25;
      bVar6 = (byte)((uint)piVar17 >> 8);
      bVar21 = (byte)puVar43 | bVar6;
      puVar31 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar21);
      out(*(undefined4 *)pbVar46,(short)pbVar10);
      *(byte *)piVar17 = (char)*piVar17 + bVar25;
      uVar27 = (undefined2)((uint)iVar24 >> 0x10);
      cVar8 = (char)iVar24;
      pbVar30 = (byte *)CONCAT22(uVar27,CONCAT11((byte)((uint)iVar24 >> 8) | *pbVar10,cVar8));
      bVar5 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar25;
      *(byte *)piVar17 = (char)*piVar17 + bVar25 + CARRY1(bVar5,bVar25);
      *pbVar10 = *pbVar10 + bVar25;
      *(byte *)puVar32 = (byte)*puVar32 + bVar6;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar27,CONCAT11(0x1c,cVar8));
      *(byte *)piVar17 = (char)*piVar17 + bVar25;
      cVar7 = (char)pbVar10;
      *(byte *)puVar31 = (byte)*puVar31 + cVar7;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar25;
      *(byte *)piVar17 = (char)*piVar17 + bVar25;
      pbVar30 = pbVar46 + (uint)bVar50 * -8 + 4 + (uint)bVar50 * -8 + 4;
      out(*(undefined4 *)(pbVar46 + (uint)bVar50 * -8 + 4),(short)pbVar10);
      piVar17 = &uRam0a0a0000;
      *pbVar10 = *pbVar10;
      bVar25 = cVar8 - cVar7;
      iVar24 = CONCAT22(uVar27,CONCAT11((byte)puVar32[0x14] | 0x1c | bRam0ca87216,bVar25));
      *pbVar10 = *pbVar10;
      bVar5 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar25;
      if (!CARRY1(bVar5,bVar25)) {
        piVar17 = &uRam1e7b7000;
        bVar5 = (byte)((uint)puVar43 >> 8) | *(byte *)(iVar33 + 3);
        puVar31 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar5,bVar21));
        if (bVar5 != 0) {
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar7 + pbVar30[(int)puVar32 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar24 = iVar24 + 1;
        }
      }
      *piVar17 = *piVar17 + (int)piVar17;
      iVar33 = CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 | pbVar30[(int)puVar32 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar32 = (uint)((int)piVar17 + *puVar32 + 1);
      pbVar46 = pbVar30 + (uint)bVar50 * -8 + 4;
      out(*(undefined4 *)pbVar30,(short)iVar33);
      puVar43 = puVar31;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar21 = bVar21 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar20,bVar21);
  if ('\0' < (char)bVar21) {
    *(byte *)piVar17 = (char)*piVar17 + bVar21;
    puVar31 = (uint *)CONCAT31(uVar20,bVar21 + 0x28);
    *puVar31 = *puVar31 ^ (uint)puVar31;
    *(byte *)puVar43 = *(byte *)puVar43 + bVar5;
    cVar8 = (bVar21 + 0x28) - bVar5;
    pcVar12 = (char *)CONCAT31(uVar20,cVar8);
    *pcVar12 = *pcVar12 + cVar8;
    pbVar30 = (byte *)CONCAT31(uVar19,bVar6 | *(byte *)puVar43);
    pcVar22 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((char)((uint)puVar43 >> 8) + *(byte *)((int)puVar48 + 0x7d),
                                        (char)puVar43));
    *pcVar12 = *pcVar12 + cVar8;
    pbVar10 = (byte *)CONCAT31(uVar20,cVar8 + 0x39U ^ *(byte *)CONCAT31(uVar20,cVar8 + 0x39U));
    *pcVar22 = *pcVar22 + bVar5;
    puVar23 = (uint *)(pbVar46 + (uint)bVar50 * -8 + 4);
    out(*(undefined4 *)pbVar46,(short)pbVar30);
    goto code_r0x00405396;
  }
  puVar31 = (uint *)(pbVar46 + (uint)bVar50 * -8 + 4);
  out(*(undefined4 *)pbVar46,(short)iVar33);
  pcVar12 = (char *)(iVar24 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar30 = (byte *)CONCAT31(uVar19,bVar6 | *(byte *)puVar43);
  goto code_r0x004052ee;
}


