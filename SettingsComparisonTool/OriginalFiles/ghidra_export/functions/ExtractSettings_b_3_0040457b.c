/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040457b
 * Raw Name    : <ExtractSettings>b__3
 * Demangled   : <ExtractSettings>b__3
 * Prototype   : int <ExtractSettings>b__3(char * options)
 * Local Vars  : options, uStack_c8, uStack_c6, uStack_c7, uStack_88, uStack_c4, iStack_80, puStack_84, puStack_78, pbStack_7c, puStack_70, uStack_74, pbStack_68, puStack_6c, pbStack_60, puStack_64, puStack_58, pbStack_5c, puStack_50, pcStack_54, iStack_48, puStack_4c, uStack_40, pcStack_44, uStack_38, uStack_3c, uStack_30, uStack_34, uStack_28, uStack_2c, puStack_20, uStack_24, uStack_18, uStack_1c, uStack_10, pcStack_14, uStack_a, uStack_c, uStack_4, pcStack_8, uVar2, uVar1, uVar4, uVar3, bVar6, bVar5, bVar8, cVar7, uVar10, cVar9, pbVar11, in_EAX, pcVar13, pcVar12, uVar15, puVar14, iVar17, puVar16, puVar19, piVar18, uVar21, uVar20, puVar23, pcVar22, bVar25, iVar24, uVar27, bVar26, bVar29, uVar28, puVar31, pbVar30, iVar33, puVar32, uVar35, cVar34, unaff_EBX, cVar36, pbVar38, pbVar37, cVar40, uVar39, ppbVar42, cVar41, puVar43, unaff_EBP, ppbVar45, ppbVar44, pbVar46, unaff_ESI, unaff_EDI, puVar47, in_ES, puVar48, in_SS, in_CS, bVar49, in_DS, bVar50, in_AF, uStack_e, uVar51
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
/* WARNING: Removing unreachable block (ram,0x00404576) */
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
/* WARNING: Removing unreachable block (ram,0x0040455f) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __fastcall <ExtractSettings>b__3(char *options)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  ushort uVar10;
  undefined3 uVar20;
  uint in_EAX;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ushort *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  uint *puVar19;
  undefined3 uVar21;
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
  bVar50 = false;
  uStack_4 = CONCAT22(uStack_4._2_2_,in_ES);
  pbVar11 = (byte *)(in_EAX | 0x730a0001);
  pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_CS);
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  bVar8 = (byte)options;
  bVar25 = (byte)((uint)options >> 8) | *pbVar11;
  pcVar22 = (char *)CONCAT22((short)((uint)options >> 0x10),CONCAT11(bVar25,bVar8));
  pbVar30 = &bRam2a060000;
  uVar20 = (undefined3)((uint)pbVar11 >> 8);
  bVar5 = (byte)pbVar11 ^ bRam2a060000;
  pcVar13 = (char *)CONCAT31(uVar20,bVar5);
  if ((POPCOUNT(bVar5) & 1U) != 0) {
    do {
      *pcVar13 = *pcVar13 + (byte)pcVar13;
      puVar31 = (uint *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | *pbVar30);
      while( true ) {
        bVar50 = (uStack_4 & 0x400) != 0;
        uVar39 = uStack_4 & 0x10;
        *(byte *)puVar31 = (char)*puVar31 + (byte)puVar31;
        bVar25 = (byte)pbVar30 | *unaff_ESI;
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),bVar25);
        cVar9 = (char)pcVar22;
        *pcVar22 = *pcVar22 - cVar9;
        *puVar31 = (uint)(*puVar31 + (int)puVar31);
        uVar20 = (undefined3)((uint)puVar31 >> 8);
        bVar8 = (byte)puVar31 | *pbVar11;
        pbVar46 = unaff_ESI + (uint)bVar50 * -8 + 4;
        out(*(undefined4 *)unaff_ESI,(short)pbVar11);
        *(char *)CONCAT31(uVar20,bVar8) = *(char *)CONCAT31(uVar20,bVar8) + bVar8;
        uStack_4 = (uint)CONCAT21(in_ES,(undefined1)uStack_4);
        cVar7 = (char)((uint)pcVar22 >> 8);
        *unaff_EBP = *unaff_EBP - cVar7;
        *pbVar11 = *pbVar11 + cVar9;
        bVar5 = bVar8 - 0x17;
        uVar27 = (undefined2)((uint)pcVar22 >> 0x10);
        cVar7 = cVar7 + *(byte *)((int)unaff_EDI + 0x46);
        pcVar22 = (char *)CONCAT22(uVar27,CONCAT11(cVar7,cVar9));
        *(char *)CONCAT31(uVar20,bVar5) = *(char *)CONCAT31(uVar20,bVar5) + bVar5;
        *unaff_EBP = *unaff_EBP - cVar7;
        *pbVar11 = *pbVar11 + cVar9;
        bVar8 = bVar8 - 0x21;
        puVar43 = (uint *)CONCAT31(uVar20,bVar8);
        bVar6 = (byte)((uint)pbVar30 >> 8);
        if (9 < bVar5) break;
        *(byte *)puVar43 = (byte)*puVar43 + bVar8;
        cVar9 = cVar9 + (byte)*puVar43;
        (&bRam2a060000)[CONCAT31((int3)((uint)pcVar22 >> 8),cVar9)] =
             (&bRam2a060000)[CONCAT31((int3)((uint)pcVar22 >> 8),cVar9)] - bVar6;
        *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar25;
        *pbVar11 = *pbVar11 ^ bVar8;
        *pbVar11 = *pbVar11 + cVar7;
        uVar1 = *puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + bVar8;
        bVar49 = 9 < (bVar8 & 0xf) || uVar39 != 0;
        bVar25 = bVar8 + bVar49 * '\x06';
        bVar25 = bVar25 + (0x90 < (bVar25 & 0xf0) |
                          CARRY1((byte)uVar1,bVar8) | bVar49 * (0xf9 < bVar25)) * '`';
        pbVar30 = (byte *)CONCAT31(uVar20,bVar25);
        bVar5 = *pbVar30;
        *pbVar30 = *pbVar30 + bVar25;
        *(byte **)pbVar11 = pbVar30 + (uint)CARRY1(bVar5,bVar25) + *(int *)pbVar11;
        unaff_ESI = pbVar46 + (uint)bVar50 * -8 + 4;
        out(*(undefined4 *)pbVar46,(short)pbVar11);
        *pbVar30 = *pbVar30 + bVar25;
        bVar25 = bVar25 - 0xe;
        pcVar22 = (char *)CONCAT22(uVar27,CONCAT11(cVar7 + *(byte *)((int)unaff_EDI + 0x3e),cVar9));
        *(char *)CONCAT31(uVar20,bVar25) = *(char *)CONCAT31(uVar20,bVar25) + bVar25;
        uStack_4 = (uint)in_ES;
        bVar5 = (byte)((uint)puVar31 >> 8);
        bVar50 = bRam182b0000 < bVar5;
        bRam182b0000 = bRam182b0000 - bVar5;
        bVar49 = 9 < (bVar25 & 0xf) || bVar49;
        bVar25 = bVar25 + bVar49 * -6;
        bVar5 = 0x9f < bVar25 | bVar50 | bVar49 * (bVar25 < 6);
        puVar31 = (uint *)CONCAT31(uVar20,bVar25 + bVar5 * -0x60);
        pbVar11[0x5d] = pbVar11[0x5d] + bVar6 + bVar5;
        *puVar31 = *puVar31 | (uint)puVar31;
        pbVar30 = pbVar11;
      }
      *puVar43 = *puVar43 | (uint)puVar43;
      *(byte *)puVar43 = (byte)*puVar43 + bVar8;
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11(bVar6 | pbVar11[0x6e],bVar25));
      pcVar13 = (char *)CONCAT31(uVar20,bVar8 | (byte)*puVar43);
      unaff_ESI = pbVar46;
    } while( true );
  }
  *pcVar13 = *pcVar13 + bVar5;
  bVar5 = *(byte *)((int)unaff_EBX + (uint)(byte)(bVar5 + 0x6f));
  pbVar30 = (byte *)CONCAT31(uVar20,bVar5);
  *pbVar30 = *pbVar30 + bVar5;
  bVar6 = bVar5 - *pbVar30;
  pbVar46 = unaff_ESI + (uint)(bVar5 < *pbVar30) + *(int *)CONCAT31(uVar20,bVar6);
  pbVar11 = (byte *)CONCAT31(uVar20,bVar6);
  pbVar30 = pbVar46 + 1;
  out(*pbVar46,0);
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar25;
  bVar5 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar6;
  puVar31 = (uint *)((int)unaff_EBX + (int)pcVar22);
  uVar39 = *puVar31;
  uVar1 = *puVar31;
  *puVar31 = (uint)(&bRam2a060000 + uVar1 + CARRY1(bVar5,bVar6));
  if (uVar39 < 0xd5fa0000 && !CARRY4((uint)(&bRam2a060000 + uVar1),(uint)CARRY1(bVar5,bVar6))) {
    *pbVar11 = *pbVar11 + bVar6;
code_r0x004045bc:
    uVar20 = (undefined3)((uint)pbVar11 >> 8);
    bVar25 = (byte)pbVar11 + 0x2d;
    pbVar38 = (byte *)CONCAT31(uVar20,bVar25);
    *(byte **)(pbVar30 + (int)unaff_EDI * 8) =
         &bRam2a060000 + (uint)(0xd2 < (byte)pbVar11) + *(int *)(pbVar30 + (int)unaff_EDI * 8);
    _uStack_10 = CONCAT22(uStack_e,in_ES);
    bVar5 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar25;
    if (!CARRY1(bVar5,bVar25)) {
      *pbVar38 = *pbVar38 + bVar25;
      uVar10 = (ushort)bRam2a05ff9a;
      bVar25 = bVar25 | *pbVar38;
      bVar50 = (in_ES & 0x400) != 0;
      in_AF = (in_ES & 0x10) != 0;
      *(char *)CONCAT31(uVar20,bVar25) = *(char *)CONCAT31(uVar20,bVar25) + bVar25;
      bVar25 = bVar25 | *pbVar30;
      puVar31 = (uint *)CONCAT31(uVar20,bVar25);
      pbVar46 = pbVar46 + (uint)bVar50 * -8 + 5;
      out(*(undefined4 *)pbVar30,uVar10 << 8);
      *puVar31 = *puVar31 << (bVar8 & 0x1f) | *puVar31 >> 0x20 - (bVar8 & 0x1f);
      *pbVar46 = *pbVar46 + bVar25;
      bVar25 = (bVar25 - 0x2a) + (bVar25 < 0x28);
      piVar18 = (int *)CONCAT31(uVar20,bVar25);
      pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_ES);
      bVar5 = *pbVar46;
      *pbVar46 = *pbVar46 + bVar25;
      if (CARRY1(bVar5,bVar25)) {
        *piVar18 = *piVar18 + (int)piVar18;
        puVar31 = (uint *)(CONCAT31(uVar20,bVar25 | (byte)*unaff_EDI) + -0x6fe080d);
        uVar39 = *puVar31;
        *puVar31 = (uint)(*puVar31 + (int)puVar31);
        pbVar30 = pbVar46;
        if (CARRY4(uVar39,(uint)puVar31)) {
          *puVar31 = *puVar31 + (int)puVar31;
          pcVar22 = (char *)CONCAT31((int3)((uint)pcVar22 >> 8),bVar8 | (byte)*unaff_EBX);
          goto code_r0x0040460b;
        }
      }
      else {
        bRam2a060000 = bRam2a060000 + bVar8;
        puVar31 = (uint *)((uint)piVar18 | *unaff_EDI);
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
      pbVar11 = (byte *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((char)((uint)puVar31 >> 8) - pbVar30[2],(char)puVar31));
      goto code_r0x00404620;
    }
    *(byte **)pbVar38 = pbVar38 + *(int *)pbVar38;
    bVar25 = bVar25 | pbVar38[0x4000066];
    pcVar13 = (char *)CONCAT31(uVar20,bVar25);
    if ('\0' < (char)bVar25) {
      *pcVar13 = *pcVar13 + bVar25;
      return CONCAT31(uVar20,bVar25 + 0x73);
    }
code_r0x00404638:
    pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_DS);
    cVar9 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar9;
    pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                               CONCAT11((char)((uint)pcVar13 >> 8) - pbVar30[3],cVar9));
    cVar34 = (char)unaff_EBX;
    cVar40 = (char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[0x1b];
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar40,cVar34));
    *pcVar13 = *pcVar13 + cVar9;
    *(byte *)unaff_EBX = (byte)*unaff_EBX ^ cVar9 + 4U;
    in_CS = 0x2a06;
    puStack_20 = &UNK_0040465a;
    uVar51 = func_0x0000b828();
    pcVar13 = pcStack_8;
    puVar31 = (uint *)((ulonglong)uVar51 >> 0x20);
    pbVar11 = (byte *)uVar51;
    bVar5 = *pbVar11;
    bVar8 = (byte)uVar51;
    *pbVar11 = *pbVar11 + bVar8;
    pbVar46 = pbVar30 + (uint)CARRY1(bVar5,bVar8) + *(int *)pbVar11;
    uVar20 = (undefined3)((ulonglong)uVar51 >> 8);
    *pbVar11 = *pbVar11 + bVar8;
    cVar7 = (char)((uint)pcStack_8 >> 8);
    *pcStack_8 = *pcStack_8 + cVar7;
    bVar5 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar8;
    *puVar31 = (uint)(pbVar11 + (uint)CARRY1(bVar5,bVar8) + *puVar31);
    bVar8 = bVar8 | *pbVar46;
    pcVar22 = (char *)CONCAT31(uVar20,bVar8);
    *pcVar22 = *pcVar22 + bVar8;
    cVar9 = bVar8 + *pcVar22;
    pcVar22 = (char *)CONCAT31(uVar20,cVar9);
    *pcVar22 = *pcVar22 + cVar9;
    pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_CS);
    *pcVar22 = *pcVar22 + cVar9;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar34;
    *pcVar22 = *pcVar22 + cVar9;
    *pcVar22 = *pcVar22 + cVar7;
    *pcVar22 = *pcVar22 + cVar9;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
    pcVar22 = (char *)(CONCAT31(uVar20,cVar9) ^ 3);
    pcVar13[0x73060000] = pcVar13[0x73060000] - cVar40;
    pbVar11 = (byte *)((int)unaff_EDI + (uint)bVar50 * -2 + 1);
    *(byte *)unaff_EDI = (byte)pcVar22;
    *pcVar22 = *pcVar22 + (byte)pcVar22;
    _uStack_c = CONCAT12(uStack_a,in_ES);
    pbVar30 = pbVar46 + (uint)bVar50 * -2 + 1;
    bVar5 = *pbVar46;
    *(char *)CONCAT31(uVar20,bVar5) = *(char *)CONCAT31(uVar20,bVar5) + bVar5;
    _uStack_10 = CONCAT22(uStack_e,in_ES);
    pcVar13 = (char *)CONCAT31(uVar20,(bVar5 - (byte)*unaff_EBX) + '(');
    unaff_EDI = (uint *)(pbVar11 + (uint)bVar50 * -2 + 1);
    bVar5 = in((short)((ulonglong)uVar51 >> 0x20));
    *pbVar11 = bVar5;
code_r0x004046a4:
    *pcVar13 = *pcVar13 + (char)pcVar13;
    uStack_24 = in_ES;
    uVar20 = (undefined3)((uint)pcVar13 >> 8);
    bVar5 = (char)pcVar13 - (byte)*unaff_EBX;
    bVar8 = bVar5 + 0x28;
    pbVar11 = (byte *)CONCAT31(uVar20,bVar8);
    pcVar22 = &cRam14060000;
    puVar43 = unaff_EBX;
    puVar48 = unaff_EDI;
    if (0xd7 < bVar5) {
      *pbVar11 = *pbVar11 + bVar8;
      _uStack_10 = CONCAT22(uStack_e,in_ES);
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((char)((uint)puVar31 >> 8) -
                                          *(byte *)((int)puVar31 + -0x3a),(char)puVar31));
      bVar5 = (bVar8 | *pbVar11) + cRam14060000;
      pcVar13 = (char *)CONCAT31(uVar20,bVar5);
      uVar39 = *puVar31;
      *(byte *)puVar31 = (byte)*puVar31;
      if ((POPCOUNT((byte)*puVar31) & 1U) == 0) {
        pcVar22 = &cRam14060000;
        if ((byte)*puVar31 == 0 || SCARRY1((byte)uVar39,'\0') != (char)(byte)*puVar31 < '\0')
        goto code_r0x0040475f;
        *pcVar13 = *pcVar13 + bVar5;
        piVar18 = (int *)CONCAT31(uVar20,bVar5 + 0x2d);
        *(byte **)(pbVar30 + (int)unaff_EDI * 8) =
             (byte *)((int)puVar31 + (uint)(0xd2 < bVar5) + *(int *)(pbVar30 + (int)unaff_EDI * 8));
        uStack_40 = in_ES;
        uRam7305fffc = in_CS;
        *piVar18 = *piVar18 + (int)piVar18;
        bVar5 = bVar5 + 0x2d | *(byte *)((int)piVar18 + 0x400006d);
        pcVar13 = (char *)CONCAT31(uVar20,bVar5);
        if ((char)bVar5 < '\x01') goto code_r0x00404777;
        *pcVar13 = *pcVar13 + bVar5;
        pcVar13 = (char *)CONCAT31(uVar20,bVar5 + 0x10);
        *puVar31 = (uint)(pcVar13 + *puVar31);
      }
      goto code_r0x00404710;
    }
  }
  else {
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    _uStack_10 = CONCAT22(uStack_e,in_ES);
    pcVar13 = (char *)(CONCAT31(uVar20,bVar6) | 8);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x3c));
    cVar9 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar9;
    cVar7 = cVar9 + '\x02';
    pbVar11 = (byte *)CONCAT31(uVar20,cVar7);
    if (cVar7 != '\0' && SCARRY1(cVar9,'\x02') == cVar7 < '\0') {
      *pbVar11 = *pbVar11 + cVar7;
      goto code_r0x004045bc;
    }
code_r0x00404620:
    puVar31 = (uint *)&bRam2a060000;
    *(byte *)unaff_EBX = (byte)*unaff_EBX;
    *pbVar11 = *pbVar11 + (byte)pbVar11;
    uVar20 = (undefined3)((uint)pbVar11 >> 8);
    bVar5 = (byte)pbVar11 | (byte)*unaff_EBX;
    bVar5 = bVar5 | *(byte *)CONCAT31(uVar20,bVar5);
    *pbVar30 = *pbVar30 + bVar5;
    bVar8 = bVar5 + (byte)*unaff_EBX;
    pcVar13 = (char *)CONCAT31(uVar20,bVar8);
    if (SCARRY1(bVar5,(byte)*unaff_EBX) != (char)bVar8 < '\0') {
      *pcVar13 = *pcVar13 + bVar8;
      pcVar13 = (char *)CONCAT31(uVar20,bVar8 + 0x2a);
      goto code_r0x00404638;
    }
    bVar5 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar8;
    if (CARRY1(bVar5,bVar8)) goto code_r0x004046a4;
code_r0x00404710:
    pbVar11 = pbVar30 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar30,(short)puVar31);
    pcStack_14 = pcVar22;
    *pcVar13 = *pcVar13 + (byte)pcVar13;
    uStack_18 = in_ES;
    uStack_1c = in_SS;
    *pcVar22 = *pcVar22 + '\x01';
    puStack_20 = (undefined *)CONCAT22(puStack_20._2_2_,in_SS);
    *pcVar22 = *pcVar22 + '\x01';
    bVar5 = (byte)pcVar13 | (byte)*puVar31;
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar5);
    pbVar30 = pbVar11 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar11,(short)puVar31);
    puVar48 = (uint *)((int)unaff_EDI + -1);
    *pcVar13 = *pcVar13 + bVar5;
    uStack_24 = in_ES;
    pbVar11 = (byte *)((int)((uint)pcVar13 | *puVar48) + *(int *)((uint)pcVar13 | *puVar48));
    *pbVar11 = *pbVar11 + (char)pbVar11;
    puVar43 = unaff_EBX;
  }
  cVar9 = (char)pbVar11 + *pbVar11;
  puVar23 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar9);
  *(char *)puVar23 = (char)*puVar23 + cVar9;
  *puVar23 = *puVar23 & (uint)puVar23;
  *(char *)puVar23 = (char)*puVar23 + cVar9;
  pbVar46 = (byte *)((int)puVar23 + 1);
  cVar9 = (char)pbVar46;
  *pbVar46 = *pbVar46 + cVar9;
  uVar39 = *puVar43;
  bVar5 = (byte)((uint)pcVar22 >> 8);
  *(byte *)puVar43 = (byte)*puVar43 + bVar5;
  pbVar11 = pbVar30;
  if (CARRY1((byte)uVar39,bVar5)) {
    pbVar11 = pbVar30 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar30,(short)puVar31);
    puVar48 = (uint *)((int)puVar48 + -1);
  }
  *pbVar46 = *pbVar46 + cVar9;
  uStack_28 = in_ES;
  puVar23 = (uint *)CONCAT22((short)((uint)pcVar22 >> 0x10),
                             CONCAT11(bVar5 + *(byte *)((int)puVar48 + 0x49),(char)pcVar22));
  *pbVar46 = *pbVar46 + cVar9;
  uStack_2c = in_ES;
  *(byte *)(puVar43 + 0x818000) = (byte)puVar43[0x818000] - (char)((uint)puVar43 >> 8);
  out(*(undefined4 *)pbVar11,(short)puVar31);
  unaff_EBX = (uint *)((int)puVar43 + -1);
  *pbVar46 = *pbVar46 + cVar9;
  uStack_30 = in_ES;
  pbVar11 = pbVar11 + *(int *)((int)puVar43 + -0x7f) + (uint)bVar50 * -8 + 4;
  *pbVar46 = *pbVar46 + cVar9;
  do {
    uStack_38 = in_ES;
    cVar9 = (char)pbVar46 - (byte)*puVar31;
    pcVar13 = (char *)CONCAT31((int3)((uint)pbVar46 >> 8),cVar9);
    pbVar30 = pbVar11 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar11,(short)puVar31);
    unaff_EDI = (uint *)((int)puVar48 + -1);
    *pcVar13 = *pcVar13 + cVar9;
    uStack_3c = in_ES;
    pcVar22 = (char *)CONCAT22((short)((uint)puVar23 >> 0x10),
                               CONCAT11((char)((uint)puVar23 >> 8) + (byte)puVar48[0x12],
                                        (char)puVar23));
code_r0x0040475f:
    cVar9 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar9;
    uStack_40 = in_ES;
    *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
    out(*(undefined4 *)pbVar30,(short)puVar31);
    pbVar11 = (byte *)((int)unaff_EBX + -1);
    *pcVar13 = *pcVar13 + cVar9;
    pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,in_ES);
    iStack_48 = CONCAT22(iStack_48._2_2_,in_ES);
    pbVar30 = pbVar30 + *(int *)((int)unaff_EBX + -0x71) + (uint)bVar50 * -8 + 4;
    *pcVar13 = *pcVar13 + cVar9;
    puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                                 CONCAT11((char)((uint)pbVar11 >> 8) - pbVar30[0x6e],(char)pbVar11))
    ;
    puVar48 = unaff_EDI;
code_r0x00404777:
    bVar5 = (byte)pcVar13;
    *pcVar13 = *pcVar13 + bVar5;
    uVar20 = (undefined3)((uint)pcVar13 >> 8);
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
    cVar9 = cVar7 + '~';
    pcVar12 = (char *)CONCAT31(uVar20,cVar9);
    out(*pbVar30,(short)puVar31);
    *pcVar12 = *pcVar12 + cVar9;
    cVar7 = cVar7 + -0x80;
    pcVar12 = (char *)CONCAT31(uVar20,cVar7);
    out(*(undefined4 *)(pbVar30 + (uint)bVar50 * -2 + 1),(short)puVar31);
    puVar23 = (uint *)(pcVar22 + -1);
    *pcVar12 = *pcVar12 + cVar7;
    pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,in_ES);
    *(byte *)puVar48 = (byte)*puVar48 - (char)((uint)pcVar13 >> 8);
    *pcVar12 = *pcVar12 + cVar7;
    puStack_58 = (uint *)CONCAT22(puStack_58._2_2_,in_ES);
    *pcVar12 = *pcVar12 - (char)((uint)puVar23 >> 8);
    *pcVar12 = *pcVar12 + cVar7;
    pbStack_5c = (byte *)CONCAT22(pbStack_5c._2_2_,in_ES);
    pbStack_60 = (byte *)CONCAT22(pbStack_60._2_2_,in_ES);
    pbVar11 = pbVar30 + (uint)bVar50 * -2 + 1 + *(int *)((int)unaff_EBX + 9) + (uint)bVar50 * -8 + 4
    ;
    *pcVar12 = *pcVar12 + cVar7;
    puStack_64 = (uint *)CONCAT22(puStack_64._2_2_,in_ES);
    cVar9 = (char)puVar31;
    cVar34 = (char)((uint)puVar31 >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(cVar34,cVar9));
    *pcVar12 = *pcVar12 + cVar7;
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar35 = SUB41(unaff_EBX,0);
    bVar25 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)puVar31 + 0x36);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(bVar25,uVar35));
    bVar8 = cVar7 + (byte)*unaff_EBX;
    pbVar46 = (byte *)CONCAT31(uVar20,bVar8);
    *(byte *)puVar48 = (byte)*puVar48 - cVar34;
    bVar5 = *pbVar46;
    *pbVar46 = *pbVar46 + bVar8;
    uStack_34 = in_ES;
  } while (!CARRY1(bVar5,bVar8));
  *pbVar46 = *pbVar46 + bVar8;
  bVar8 = bVar8 - *pbVar46;
  pbVar30 = (byte *)CONCAT31(uVar20,bVar8);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar9;
  *(byte *)puVar31 = (byte)*puVar31 ^ bVar8;
  pcVar22[0x2affffff] = pcVar22[0x2affffff] + bVar8;
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar8;
  *unaff_EBX = (uint)(pbVar30 + (uint)CARRY1(bVar5,bVar8) + *unaff_EBX);
  pbVar46 = pbVar30 + -0x32a1702;
  if (pbVar46 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar46;
    puVar47 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + (byte)*puVar31);
    puStack_70 = (uint *)CONCAT22(puStack_70._2_2_,in_ES);
    pbVar30[-0xe0c891b] = pbVar30[-0xe0c891b] + cVar34;
    pbVar46 = pbVar30 + 0x19fd76e3;
    bVar5 = *pbVar46;
    *pbVar46 = *pbVar46 - bVar25;
    piVar18 = (int *)((uint)(pbVar30 + (bVar5 < bVar25) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar18 + 0x73) = *(char *)((int)piVar18 + 0x73) + cVar34;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar8 = bVar25 | *(byte *)((int)puVar31 + 2);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(bVar8,uVar35));
    cVar9 = (char)piVar18;
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *(char *)piVar18 = (char)*piVar18 + cVar9;
      uVar20 = (undefined3)((uint)(pbVar30 + (bVar5 < bVar25) + 0x63fd76e4) >> 8);
      cVar7 = cVar9 + '\x06';
      if ((POPCOUNT(cVar7) & 1U) == 0) {
        *(char *)CONCAT31(uVar20,cVar7) = *(char *)CONCAT31(uVar20,cVar7) + cVar7;
        pbVar46 = (byte *)CONCAT31(uVar20,cVar9 + '.');
        puVar23 = puVar47;
        uStack_74 = in_SS;
        goto code_r0x00404803;
      }
      cVar9 = cVar7 + (byte)*unaff_EBX;
      pcVar13 = (char *)CONCAT31(uVar20,cVar9);
      if (SCARRY1(cVar7,(byte)*unaff_EBX) == cVar9 < '\0') {
code_r0x004048e7:
        pcVar13 = (char *)((uint)pcVar13 | 8);
        in_SS = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(puVar31 + 0x1cc18000) = (byte)puVar31[0x1cc18000] + cVar9;
code_r0x0040486e:
      pcVar13 = (char *)CONCAT31((int3)((uint)piVar18 >> 8),(byte)piVar18 & (byte)*puVar31);
      puVar48 = (uint *)((int)puVar48 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pbVar30 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '*');
    puStack_70 = (uint *)CONCAT22(puStack_70._2_2_,in_DS);
    bVar5 = (byte)((uint)puVar47 >> 8);
    cVar9 = (char)puVar47;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar5 + *pbVar30,cVar9));
    pbVar30 = pbVar30 + (uint)CARRY1(bVar5,*pbVar30) + *(int *)pbVar30;
    *(byte *)puVar31 = (byte)*puVar31 + cVar9;
    bVar49 = (byte)pbVar30 < *pbVar30;
    pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),(byte)pbVar30 - *pbVar30);
code_r0x00404880:
    pbVar11 = pbVar11 + (uint)bVar49 + *(int *)pbVar30;
    uStack_74 = in_ES;
    while( true ) {
      bVar8 = (byte)pbVar30;
      pbVar30[0x2c000000] = pbVar30[0x2c000000] + bVar8;
      bVar5 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar8;
      *puVar31 = (uint)(pbVar30 + (uint)CARRY1(bVar5,bVar8) + *puVar31);
      *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)puVar31;
      *pbVar30 = *pbVar30 + bVar8;
      puVar23 = (uint *)CONCAT31((int3)((uint)pbVar30 >> 8),bVar8 | (byte)*unaff_EBX);
code_r0x00404895:
      pcVar13 = (char *)((uint)puVar23 | *puVar23);
code_r0x00404899:
      cVar9 = (char)pcVar13;
      *pbVar11 = *pbVar11 + cVar9;
      uVar20 = (undefined3)((uint)pcVar13 >> 8);
      bVar5 = cVar9 + (byte)*unaff_EBX;
      pcVar13 = (char *)CONCAT31(uVar20,bVar5);
      bVar8 = (byte)((uint)puVar47 >> 8);
      uVar27 = (undefined2)((uint)puVar47 >> 0x10);
      cVar7 = (char)puVar31;
      uVar10 = in_ES;
      if (SCARRY1(cVar9,(byte)*unaff_EBX) == (char)bVar5 < '\0') {
        *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar7;
        *pcVar13 = *pcVar13 + bVar5;
        puVar47 = (uint *)CONCAT22(uVar27,CONCAT11(bVar8 | (byte)*puVar31,(char)puVar47));
        puVar31 = (uint *)((int)puVar31 + 1);
        pcVar13 = pcVar13 + *puVar31;
        if ((POPCOUNT((uint)pcVar13 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar13 = *pcVar13 + bVar5;
      bVar25 = bVar5 + 2;
      pcVar13 = (char *)CONCAT31(uVar20,bVar25);
      if (bVar5 < 0xfe) {
        *pbVar11 = *pbVar11 + bVar25;
        puVar23 = unaff_EBX;
        goto code_r0x004048f5;
      }
      *pcVar13 = *pcVar13 + bVar25;
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((byte)((uint)puVar31 >> 8) |
                                          *(byte *)((int)unaff_EBX + -0x5b),cVar7));
      cVar9 = *pcVar13;
      *pcVar13 = *pcVar13 + bVar25;
      puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,in_ES);
      if (SCARRY1(cVar9,bVar25) == *pcVar13 < '\0') goto code_r0x00404927;
      *pcVar13 = *pcVar13 + bVar25;
      bVar5 = bVar5 + 4;
      pbVar30 = (byte *)CONCAT31(uVar20,bVar5);
      if (0xfd < bVar25) break;
      *pbVar30 = *pbVar30 + bVar5;
      puVar47 = (uint *)CONCAT22(uVar27,CONCAT11(bVar8 | (byte)*puVar31,(char)puVar47));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
      *pbVar11 = *pbVar11 ^ bVar5;
    }
    *pbVar30 = *pbVar30 + bVar5;
    puStack_78 = (uint *)((uint)puStack_78 & 0xffff0000);
  }
  else {
    pbVar30[0x6fdbe8fe] = pbVar30[0x6fdbe8fe] + (char)pbVar46;
code_r0x00404803:
    *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
    uVar21 = (undefined3)((uint)puVar23 >> 8);
    bVar8 = (byte)puVar23 | (byte)*unaff_EBX;
    puVar47 = (uint *)CONCAT31(uVar21,bVar8);
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar7 = (char)unaff_EBX;
    cVar40 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x6f);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar40,cVar7));
    bVar5 = (byte)pbVar46;
    *pbVar46 = *pbVar46 + bVar5;
    bVar49 = 0xf9 < bVar5;
    uVar20 = (undefined3)((uint)pbVar46 >> 8);
    cVar9 = bVar5 + 6;
    pbVar30 = (byte *)CONCAT31(uVar20,cVar9);
    in_SS = uStack_74;
    if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x00404880;
    *pbVar30 = *pbVar30 + cVar9;
    piVar18 = (int *)CONCAT31(uVar20,bVar5 + 0x2e);
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar8 = bVar8 | *(byte *)((int)puVar31 + (int)piVar18);
    puVar47 = (uint *)CONCAT31(uVar21,bVar8);
    in_SS = (ushort)puStack_70;
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      puVar23 = (uint *)((int)piVar18 + *piVar18);
      *(byte *)puVar31 = (byte)*puVar31 + bVar8;
      pbVar11 = pbVar11 + puVar31[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar18 = (char)*piVar18 + bVar5 + 0x2e;
    cVar9 = bVar5 + 0x34;
    pcVar13 = (char *)CONCAT31(uVar20,cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) {
      pcVar13[0x28] = pcVar13[0x28] + cVar34;
      goto code_r0x00404899;
    }
    *pcVar13 = *pcVar13 + cVar9;
    piVar18 = (int *)CONCAT31(uVar20,bVar5 + 0x5c);
    *piVar18 = *piVar18 + (int)piVar18;
    cVar34 = (bVar8 | bRam07022c07) - (char)*piVar18;
    puVar47 = (uint *)CONCAT31(uVar21,cVar34);
    pcVar13 = (char *)CONCAT31(uVar20,bVar5 + 0x5a);
    bVar8 = (byte)((uint)puVar23 >> 8);
    *(byte *)puVar31 = (byte)*puVar31 | bVar8;
    *(uint *)((int)puVar31 + (int)pcVar13) = *(uint *)((int)puVar31 + (int)pcVar13) | 0x73060000;
    *puVar31 = *puVar31 | 0x73060000;
    cVar40 = cVar40 + *(byte *)((int)unaff_EBX + 0x72);
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar40,cVar7));
    *pcVar13 = *pcVar13 + bVar5 + 0x5a;
    cVar9 = bVar5 + 0x60;
    pcVar13 = (char *)CONCAT31(uVar20,cVar9);
    if ((POPCOUNT(cVar9) & 1U) == 0) {
      *pcVar13 = *pcVar13 + cVar9;
      piVar18 = (int *)CONCAT31(uVar20,bVar5 + 0x88);
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      pbStack_68 = (byte *)CONCAT22(pbStack_68._2_2_,in_DS);
      puVar47 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                 CONCAT11((bVar8 | (byte)*puVar31) + (char)*piVar18,cVar34));
      *(char *)piVar18 = (char)*piVar18;
      cVar7 = cVar7 - *pbVar11;
      cVar40 = cVar40 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7) + 0x73);
      *(byte *)piVar18 = (char)*piVar18 + bVar5 + 0x88;
      bVar5 = bVar5 + 0xb2 & (byte)*puVar31;
      puVar48 = (uint *)((int)puVar48 + iRam73060073);
      *(char *)CONCAT31(uVar20,bVar5) = *(char *)CONCAT31(uVar20,bVar5) + bVar5;
      pcVar13 = (char *)CONCAT31(uVar20,bVar5 + 0x2a);
      unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar27,CONCAT11(
                                                  cVar40,cVar7)) + 0x74),cVar7));
      *pcVar13 = *pcVar13 + bVar5 + 0x2a;
      piVar18 = (int *)CONCAT31(uVar20,bVar5 + 0x54);
      in_SS = (ushort)puStack_78;
      goto code_r0x0040486e;
    }
    pbVar30 = (byte *)*(undefined6 *)pcVar13;
    *pbVar11 = *pbVar11 + (char)*(undefined6 *)pcVar13;
  }
  uVar20 = (undefined3)((uint)pbVar30 >> 8);
  bVar5 = (byte)pbVar30 | *pbVar11;
  pcVar13 = (char *)CONCAT31(uVar20,bVar5);
  *pcVar13 = *pcVar13 + bVar5;
  *unaff_EBX = (uint)(*unaff_EBX + (int)puVar47);
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
  *pcVar13 = *pcVar13 + bVar5;
  pcVar13 = (char *)CONCAT31(uVar20,bVar5 + 0x6f);
  *pcVar13 = *pcVar13 + bVar5 + 0x6f;
  pcVar13 = (char *)((int)((uint)pcVar13 & 0x7e26062d) - *(int *)((uint)pcVar13 & 0x7e26062d));
  *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
  uRam00c16f07 = SUB41(pcVar13,0);
  in_SS = uStack_74;
code_r0x004048de:
  cVar9 = (char)pcVar13;
  *pbVar11 = *pbVar11 + cVar9;
  *pcVar13 = *pcVar13 + cVar9;
  *(byte **)(pcVar13 + (int)puVar47) = (byte *)(*(int *)(pcVar13 + (int)puVar47) + (int)puVar47);
  puStack_78 = (uint *)CONCAT22(puStack_78._2_2_,in_SS);
  bVar5 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar13 = *pcVar13 + cVar9;
  pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar9 + 'o');
  pbVar11 = pbVar11 + 1;
  *pcVar13 = *pcVar13 + cVar9 + 'o';
  pbStack_7c = (byte *)CONCAT22(pbStack_7c._2_2_,in_SS);
  puVar23 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5,(char)unaff_EBX));
  puVar43 = unaff_EBX;
  uVar10 = in_SS;
code_r0x004048f5:
  unaff_EBX = puVar23;
  pcVar13 = (char *)((int)((uint)pcVar13 & 0x7e26062d) - *(int *)((uint)pcVar13 & 0x7e26062d));
  *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
  do {
    uRam00c36f08 = SUB41(pcVar13,0);
    while( true ) {
      bVar5 = *pbVar11;
      cVar9 = (char)pcVar13;
      *pbVar11 = *pbVar11 + cVar9;
      iStack_80 = CONCAT22(iStack_80._2_2_,uVar10);
      if (SCARRY1(bVar5,cVar9) == (char)*pbVar11 < '\0') {
        pcVar13[(int)puVar43] = pcVar13[(int)puVar43] + cVar9;
        goto code_r0x00404982;
      }
      *pcVar13 = *pcVar13 + cVar9;
      pbVar30 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar9 + '*');
      puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,in_DS);
      bVar5 = (byte)((uint)puVar47 >> 8);
      cVar9 = (char)puVar47;
      bVar8 = bVar5 + *pbVar30;
      pbVar30 = pbVar30 + (uint)CARRY1(bVar5,*pbVar30) + *(int *)pbVar30;
      *(byte *)puVar31 = (byte)*puVar31 + cVar9;
      cVar7 = (char)unaff_EBX - *pbVar11;
      bVar5 = *pbVar30;
      puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar8 + *pbVar30,cVar9));
      iVar17 = *(int *)pbVar30;
      *(byte *)puVar31 = (byte)*puVar31 + cVar9;
      pcVar13 = (char *)CONCAT31((int3)((uint)(pbVar30 + (uint)CARRY1(bVar8,bVar5) + iVar17) >> 8),
                                 (char)(pbVar30 + (uint)CARRY1(bVar8,bVar5) + iVar17) -
                                 *(byte *)((int)puVar31 + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7) +
                                                     -0x3a),cVar7));
code_r0x00404921:
      bVar5 = (byte)pcVar13;
      *pcVar13 = *pcVar13 + bVar5;
      pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar5 + 0x6f);
      *(byte *)puVar47 = ((byte)*puVar47 - (bVar5 + 0x6f)) - (0x90 < bVar5);
code_r0x00404927:
      *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
      pbStack_7c = (byte *)CONCAT22(pbStack_7c._2_2_,in_SS);
      *(byte *)puVar47 = (byte)*puVar47 + 1;
      cVar9 = (char)((uint)puVar47 >> 8) - pbVar11[2];
      puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(cVar9,(char)puVar47));
      if ((POPCOUNT(cVar9) & 1U) == 0) break;
      pcVar13 = pcVar13 + -0x1b7e2606;
      *pcVar13 = *pcVar13 + (char)pcVar13;
      pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar13 >> 8) | (byte)puVar31[0x30dbc2],
                                          (char)pcVar13));
    }
code_r0x00404931:
    *pcVar13 = *pcVar13 + (char)pcVar13;
    cVar9 = (char)pcVar13 + '\x02';
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar9);
    pbVar30 = pbVar11;
  } while ((POPCOUNT(cVar9) & 1U) != 0);
  do {
    bVar5 = (byte)pcVar13;
    *pcVar13 = *pcVar13 + bVar5;
    uVar20 = (undefined3)((uint)pcVar13 >> 8);
    piVar18 = (int *)CONCAT31(uVar20,bVar5 + 0x6f);
    *puVar47 = (*puVar47 - (int)piVar18) - (uint)(0x90 < bVar5);
    *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
    iVar17 = *(int *)((int)puVar48 + 0x1a);
    *piVar18 = *piVar18 + (int)piVar18;
    puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | *pbVar30);
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    bVar5 = (bVar5 + 0x6f) - (char)*piVar18;
    pbVar11 = (byte *)CONCAT31(uVar20,bVar5);
    *pbVar11 = *pbVar11 + bVar5;
    pbVar30 = pbVar30 + *(int *)pbVar11;
    cVar9 = bVar5 + *pbVar11;
    puVar14 = (ushort *)CONCAT31(uVar20,cVar9);
    *puVar14 = *puVar14 + (ushort)CARRY1(bVar5,*pbVar11) * (((ushort)puVar14 & 3) - (*puVar14 & 3));
    *(char *)puVar14 = (char)*puVar14 + cVar9;
    *(char *)puVar14 = (char)*puVar14 + cVar9;
    *(char *)puVar14 = (char)*puVar14 + cVar9;
    puVar48 = (uint *)((int)puVar48 + unaff_EBX[0x1c]);
    puVar43 = (uint *)((int)puVar43 + iVar17);
code_r0x0040495b:
    cVar9 = (char)puVar14;
    *(char *)puVar14 = (char)*puVar14 + cVar9;
    uVar20 = (undefined3)((uint)puVar14 >> 8);
    cVar7 = cVar9 + '\x02';
    pcVar13 = (char *)CONCAT31(uVar20,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      *puVar31 = (uint)(*puVar31 + (int)puVar43);
      pbVar11 = pbVar30 + (uint)bVar50 * -2 + 1;
      out(*pbVar30,(short)puVar31);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar13 = *pcVar13 + cVar7;
    pbVar30 = (byte *)(CONCAT31(uVar20,cVar9 + '}') + (int)puVar43);
    *pbVar30 = *pbVar30 + cVar9 + '}';
    *pcStack_44 = *pcStack_44 + (char)pcStack_44;
    puVar47 = (uint *)CONCAT22((short)((uint)iStack_48 >> 0x10),
                               CONCAT11((byte)((uint)iStack_48 >> 8) | *(byte *)(iStack_48 * 3),
                                        (char)iStack_48));
    puVar48 = (uint *)(pbStack_60 + *(int *)((int)puStack_50 + 0x6f));
    pcVar13 = pcStack_44;
    puVar31 = puStack_4c;
    unaff_EBX = puStack_50;
    puVar43 = puStack_58;
    pbVar30 = pbStack_5c;
    while( true ) {
      cVar9 = (char)pcVar13;
      *pcVar13 = *pcVar13 + cVar9;
      uVar20 = (undefined3)((uint)pcVar13 >> 8);
      cVar7 = cVar9 + '\x02';
      pcVar13 = (char *)CONCAT31(uVar20,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) break;
      *pcVar13 = *pcVar13 + cVar7;
      pcVar13 = (char *)CONCAT31(uVar20,cVar9 + '}');
      out(*(undefined4 *)pbVar30,(short)puVar31);
      *pcVar13 = *pcVar13 + cVar9 + '}';
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
        cVar9 = (char)puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + cVar9;
        uVar20 = (undefined3)((uint)puVar43 >> 8);
        cVar7 = cVar9 + '\x02';
        puVar14 = (ushort *)CONCAT31(uVar20,cVar7);
        puVar43 = puStack_78;
        if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar14 = (char)*puVar14 + cVar7;
        bVar8 = cVar9 + 0x7d;
        iVar17 = CONCAT31(uVar20,bVar8);
        pbVar11 = (byte *)(iVar17 + (int)puStack_78);
        bVar5 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar8;
        uVar39 = *puVar47;
        *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
        pcVar13 = (char *)(((iVar17 - uVar39) - (uint)CARRY1(bVar5,bVar8)) + -0x727b0317);
        cVar9 = (char)pcVar13;
        *pcVar13 = *pcVar13 + cVar9;
        uVar20 = (undefined3)((uint)pcVar13 >> 8);
        cVar7 = cVar9 + '\x02';
        pcVar13 = (char *)CONCAT31(uVar20,cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) break;
        *pcVar13 = *pcVar13 + cVar7;
        bVar8 = cVar9 + 0x7d;
        iVar17 = CONCAT31(uVar20,bVar8);
        pbVar11 = (byte *)(iVar17 + (int)puStack_78);
        bVar5 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar8;
        puVar43 = (uint *)((iVar17 - *puVar47) - (uint)CARRY1(bVar5,bVar8));
        puVar23 = puVar31;
code_r0x004049b4:
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar47;
        puVar31 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),
                                   ((char)puVar23 - (byte)*puVar48) - *pbVar30);
        bVar8 = pbVar30[0x72];
        *puVar43 = *puVar43 & (uint)puVar47;
        pbVar11 = (byte *)((int)puVar43 + 2);
        *pbVar11 = *pbVar11 + (char)((uint)puVar23 >> 8);
        bVar5 = *pbVar11;
        puVar32 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar8);
        pbVar11 = pbVar30;
        while (unaff_EBX = puVar32, pbVar30 = pbVar11, (POPCOUNT(bVar5) & 1U) == 0) {
          cVar9 = (char)puVar43;
          *(byte *)puVar43 = (byte)*puVar43 + cVar9;
          uVar20 = (undefined3)((uint)puVar43 >> 8);
          cVar7 = cVar9 + '\x03';
          pbVar46 = (byte *)CONCAT31(uVar20,cVar7);
          pbVar30 = pbVar11 + (uint)bVar50 * -8 + 4;
          out(*(undefined4 *)pbVar11,(short)puVar31);
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
            pbVar11 = (byte *)((int)puVar48 + (int)puStack_78 * 2);
            *pbVar11 = *pbVar11 + cVar7;
            ppbVar45 = (byte **)puStack_78;
            goto code_r0x00404a51;
          }
          *pbVar46 = *pbVar46 + cVar7;
          puVar43 = (uint *)CONCAT31(uVar20,cVar9 + 'r');
          *(byte *)puVar43 = (byte)*puVar43;
          pbStack_60 = (byte *)CONCAT22(pbStack_60._2_2_,uVar10);
          do {
            puVar48 = (uint *)((int)puVar48 + unaff_EBX[0x1c]);
            bVar5 = (byte)puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + bVar5;
            uVar20 = (undefined3)((uint)puVar43 >> 8);
            bVar5 = (bVar5 + 0x6e) - (0x90 < bVar5);
            puVar43 = (uint *)CONCAT31(uVar20,bVar5);
            cVar9 = (char)puVar47;
            *(byte *)puVar31 = (byte)*puVar31 + cVar9;
            bVar8 = (char)((uint)puVar47 >> 8) - pbVar30[2];
            puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar8,cVar9));
            puVar23 = puVar31;
            if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar43 = (byte)*puVar43 + bVar5;
            bVar25 = bVar5 + 2;
            puVar43 = (uint *)CONCAT31(uVar20,bVar25);
            ppbVar44 = (byte **)puStack_78;
            if ((POPCOUNT(bVar25) & 1U) == 0) goto code_r0x004049f5;
            pbVar30 = pbStack_60;
          } while (0xfd < bVar5);
          *(byte *)puVar43 = (byte)*puVar43 | bVar25;
          puVar32 = unaff_EBX;
          pbVar11 = pbStack_60;
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
    uVar20 = (undefined3)((uint)puVar43 >> 8);
    bVar25 = bVar5 + 0x6f;
    pbVar46 = (byte *)CONCAT31(uVar20,bVar25);
    *puVar47 = (*puVar47 - (int)pbVar46) - (uint)(0x90 < bVar5);
    *(byte *)puVar31 = (byte)*puVar31 + cVar9;
    pbVar11 = (byte *)((int)ppbVar44 + *(int *)((int)puVar48 + 0x1a));
    *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
    uVar21 = (undefined3)((uint)puVar31 >> 8);
    bVar5 = (byte)puVar31 | *pbVar30;
    puVar31 = (uint *)CONCAT31(uVar21,bVar5);
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    cVar7 = bVar25 - *pbVar46;
    pbVar30 = pbVar30 + (-(uint)(bVar25 < *pbVar46) - *(int *)CONCAT31(uVar20,cVar7));
    uVar15 = CONCAT31(uVar20,cVar7 + *(char *)CONCAT31(uVar20,cVar7));
    bVar49 = CARRY1(bRam14110000,bVar8);
    bRam14110000 = bRam14110000 + bVar8;
    puVar43 = (uint *)((int)unaff_EBX + (int)pbVar30 * 2);
    uVar39 = *puVar43;
    uVar1 = uVar15 + *puVar43;
    puVar16 = (undefined4 *)(uVar1 + bVar49);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar16 = uVar2;
    puStack_64 = (uint *)CONCAT22(puStack_64._2_2_,uVar10);
    uVar39 = (uint)(CARRY4(uVar15,uVar39) || CARRY4(uVar1,(uint)bVar49));
    puVar43 = (uint *)((int)puVar16 + uRam7d020511 + uVar39);
    ppbVar42 = &pbStack_68;
    ppbVar45 = &pbStack_68;
    ppbVar44 = &pbStack_68;
    pbStack_68 = pbVar11;
    cVar7 = '\x03';
    do {
      pbVar11 = pbVar11 + -4;
      ppbVar42 = ppbVar42 + -1;
      *ppbVar42 = (byte *)*(undefined4 *)pbVar11;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    pbStack_60 = (byte *)&pbStack_68;
    pbRam00c82802 =
         (byte *)((int)puVar43 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar16,uRam7d020511) ||
                      CARRY4((int)puVar16 + uRam7d020511,uVar39))));
    bVar25 = *pbVar30;
    cVar7 = (char)puVar43;
    *pbVar30 = *pbVar30 + cVar7;
  } while (SCARRY1(bVar25,cVar7) == (char)*pbVar30 < '\0');
  *(byte *)puVar43 = (byte)*puVar43 + cVar7;
  iVar17 = CONCAT31((int3)((uint)puVar43 >> 8),cVar7 + '\x11') + 0xc57b;
  bVar8 = (byte)iVar17;
  *puVar31 = *puVar31 ^ (uint)unaff_EBX;
  puVar31 = (uint *)CONCAT31(uVar21,bVar5 + (byte)*puVar47);
  iVar17 = (CONCAT31((int3)((uint)iVar17 >> 8),bVar8 + 0x6f) - (uint)(0x90 < bVar8)) + -0x18093a86;
  cVar9 = (char)iVar17;
  uVar20 = (undefined3)((uint)iVar17 >> 8);
  cVar7 = cVar9 + '\x02';
  pbVar11 = (byte *)CONCAT31(uVar20,cVar7);
  if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar11 = *pbVar11 + cVar7;
  pbVar46 = (byte *)CONCAT31(uVar20,cVar9 + 'q');
  ppbVar45 = &pbStack_68;
code_r0x00404a51:
  pbVar11 = pbVar46 + 1;
  cVar9 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar9;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                               CONCAT11((char)((uint)puVar32 >> 8) - cVar9,cVar34));
  *pbVar11 = *pbVar11 + cVar9;
  puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(char)puVar31 - (byte)*puVar47);
  pbVar46 = pbVar46 + 0x757b03;
  pbVar11 = (byte *)((int)puVar48 + (int)ppbVar45 * 2);
  cVar9 = (char)pbVar46;
  *pbVar11 = *pbVar11 + cVar9;
  *pbVar46 = *pbVar46 + cVar9;
  *pbVar30 = *pbVar30 - (char)((uint)pbVar46 >> 8);
  *pbVar46 = *pbVar46 + cVar9;
  puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar45 + -0x3a));
  *pbVar46 = *pbVar46 + cVar9;
  pbVar11 = (byte *)(CONCAT31((int3)((uint)pbVar46 >> 8),cVar9 + '\x11') + 0x757b02);
  pbVar46 = (byte *)((int)puVar48 + (int)ppbVar45 * 2);
  bVar8 = (byte)pbVar11;
  *pbVar46 = *pbVar46 + bVar8;
  bVar5 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar8;
  puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,uVar10);
  pbRam011006fe = pbVar11 + (int)(pbRam011006fe + CARRY1(bVar5,bVar8));
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar8;
  if (!CARRY1(bVar5,bVar8)) goto code_r0x00404add;
  do {
    bVar5 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar5;
    bVar25 = (byte)puVar47;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                               CONCAT11((byte)((uint)puVar47 >> 8) | *pbVar11,bVar25));
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    uVar20 = (undefined3)((uint)pbVar11 >> 8);
    bVar5 = bVar5 + in_AF * '\x06';
    cVar9 = bVar5 + (0x90 < (bVar5 & 0xf0) | in_AF * (0xf9 < bVar5)) * '`';
    pcVar13 = (char *)CONCAT31(uVar20,cVar9);
    *pcVar13 = *pcVar13 + cVar9;
    puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar45 + -0x39));
    *pcVar13 = *pcVar13 + cVar9;
    iVar17 = CONCAT31(uVar20,cVar9 + '\x11') + 0xc57b;
    iVar17 = CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x11') + 0xc67b;
    bVar5 = (byte)iVar17;
    bVar8 = bVar5 + 0x6f;
    pbVar11 = (byte *)CONCAT31((int3)((uint)iVar17 >> 8),bVar8);
    *puVar47 = (*puVar47 - (int)pbVar11) - (uint)(0x90 < bVar5);
    uVar39 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar25;
    pbRam011106fe = pbVar11 + (int)(pbRam011106fe + CARRY1((byte)uVar39,bVar25));
    bVar5 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar8;
    if (!CARRY1(bVar5,bVar8)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    bVar5 = (byte)puVar47;
    bVar8 = (byte)((uint)puVar47 >> 8) | *pbVar11;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar8,bVar5));
    *pbVar11 = *pbVar11 - (char)pbVar11;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar8;
    out(*(undefined4 *)pbVar30,(short)puVar31);
    *puVar47 = *puVar47 & (uint)pbVar11;
    uVar39 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar5;
    pbVar11 = pbVar11 + (uint)CARRY1((byte)uVar39,bVar5) + *(int *)(pbVar30 + (uint)bVar50 * -8 + 4)
    ;
    *pbVar11 = *pbVar11 + (char)pbVar11;
    *(byte *)puVar47 = (byte)*puVar47 + (char)puVar31;
    pbVar30 = pbVar30 + (uint)bVar50 * -8 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar30,(short)puVar31);
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 & (byte)*puVar47);
      *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((byte)((uint)puVar31 >> 8) | (byte)unaff_EBX[5],
                                          (char)puVar31));
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      pbVar30 = pbVar30 + (uint)bVar50 * -8 + 4;
code_r0x00404ad4:
      puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,uVar10);
      pbVar11 = (byte *)((uint)pbVar11 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar11;
code_r0x00404add:
      bVar5 = (byte)pbVar11;
      uVar20 = (undefined3)((uint)pbVar11 >> 8);
      cVar9 = bVar5 + 8;
      pbVar11 = (byte *)CONCAT31(uVar20,cVar9);
      if (SCARRY1(bVar5,'\b') == cVar9 < '\0') break;
      *pbVar11 = *pbVar11 + cVar9;
      cVar9 = bVar5 + 10;
      piVar18 = (int *)CONCAT31(uVar20,cVar9);
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        *piVar18 = (int)(*piVar18 + (int)piVar18);
        goto code_r0x00404b18;
      }
      *(char *)piVar18 = (char)*piVar18 + cVar9;
      puVar43 = (uint *)CONCAT31(uVar20,bVar5 + 0x7c);
      *puVar43 = *puVar43 & (uint)puVar47;
      *(char *)((int)puVar43 + 0x11) = *(char *)((int)puVar43 + 0x11) + (char)((uint)puVar31 >> 8);
      cVar9 = (char)((int)puVar43 + 0xc67b);
      uVar20 = (undefined3)((uint)((int)puVar43 + 0xc67b) >> 8);
      bVar5 = cVar9 + 8;
      pbVar11 = (byte *)CONCAT31(uVar20,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar5;
        cRam02060000 = cVar9 + 'w';
        puVar43 = (uint *)CONCAT31(uVar20,cRam02060000);
        *(byte *)puVar43 = (byte)*puVar43 + cRam02060000;
        cVar9 = (char)puVar47;
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                   CONCAT11((byte)((uint)puVar47 >> 8) | (byte)*puVar43,cVar9));
        *puVar43 = *puVar43 - (int)puVar43;
        *(byte *)puVar31 = (byte)*puVar31 + cVar9;
        pbVar11 = pbVar30 + (uint)bVar50 * -8 + 4;
        out(*(undefined4 *)pbVar30,(short)puVar31);
        pbVar30 = pbVar11;
        if ((POPCOUNT((byte)*puVar31) & 1U) == 0) goto code_r0x00404b0f;
        pcVar13 = (char *)((uint)puVar43 | *puVar43);
        goto code_r0x00404b89;
      }
      bVar8 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      *(byte **)pbVar30 = pbVar11 + (uint)CARRY1(bVar8,bVar5) + *(int *)pbVar30;
    }
    *pbVar30 = *pbVar30 + 1;
    *puVar47 = (uint)(pbVar11 + (uint)(0xf7 < bVar5) + *puVar47);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar43;
    puVar31 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 + 'r');
    piVar18 = (int *)((uint)puVar31 | *puVar31);
    puVar31 = puStack_84;
code_r0x00404b18:
    bRam11060000 = (byte)piVar18;
    iVar17 = CONCAT31((int3)((uint)((int)piVar18 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar18 + 0xc57b) + '\x11') + 0xc77b;
    bVar5 = (byte)iVar17;
    iVar17 = CONCAT31((int3)((uint)iVar17 >> 8),bVar5 + 0x6f);
    *puVar47 = (*puVar47 - iVar17) - (uint)(0x90 < bVar5);
    cVar9 = (char)puVar47;
    *(byte *)puVar31 = (byte)*puVar31 + cVar9;
    bVar8 = (byte)((uint)unaff_EBX >> 8);
    bVar6 = (byte)((uint)puVar31 >> 8) | bVar8;
    pcVar22 = (char *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar6,(byte)puVar31));
    piVar18 = (int *)(iVar17 + 0x73060001);
    *(byte *)puVar47 = (byte)*puVar47 & (byte)piVar18;
    *pcVar22 = *pcVar22 + cVar9;
    bVar25 = (byte)((uint)puVar47 >> 8);
    *(byte *)piVar18 = *(char *)piVar18 - bVar25;
    *(byte *)piVar18 = *(char *)piVar18 + (byte)piVar18;
    iVar17 = *piVar18;
    *piVar18 = *piVar18 - (int)piVar18;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar25;
    pcVar13 = (char *)((uint)piVar18 | *puVar48);
    *pcVar22 = *pcVar22 - bVar25;
    bVar5 = (byte)pcVar13;
    *pcVar13 = *pcVar13 + bVar5;
    ppbVar45 = (byte **)(((int)ppbVar45 - iVar17) - *(int *)(pcVar13 + ((int)ppbVar45 - iVar17)));
    uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar26 = (byte)unaff_EBX;
    cVar7 = bVar8 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar46 = (byte *)CONCAT22(uVar27,CONCAT11(cVar7,bVar26));
    *pcVar13 = *pcVar13 + bVar5;
    uVar20 = (undefined3)((uint)pcVar13 >> 8);
    uVar15 = CONCAT31(uVar20,bVar5 + 7);
    puVar43 = (uint *)((int)ppbVar45 + -0x1faeef1);
    uVar39 = *puVar43;
    uVar1 = *puVar43 + uVar15;
    *puVar43 = uVar1 + (0xf8 < bVar5);
    puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,uVar10);
    puVar23 = puStack_84;
    bVar8 = bVar5 + 7 + (byte)*puVar47 +
            (CARRY4(uVar39,uVar15) || CARRY4(uVar1,(uint)(0xf8 < bVar5)));
    puVar43 = (uint *)CONCAT31(uVar20,bVar8);
    bVar5 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar8;
    if (CARRY1(bVar5,bVar8)) break;
    *(byte *)puVar43 = (byte)*puVar43 + bVar8;
    unaff_EBX = (uint *)CONCAT22(uVar27,CONCAT11(cVar7 + pbVar46[0x76],bVar26));
    uStack_88 = uVar10;
  }
  *(byte *)puVar43 = (byte)*puVar43 + bVar8;
  uVar21 = (undefined3)((uint)pcVar22 >> 8);
  bVar29 = (byte)puVar31 | *pbVar46;
  puVar31 = (uint *)CONCAT31(uVar21,bVar29);
  pcRam2b060000 = (char *)CONCAT31(uVar20,bVar8 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar8 + 0x39)) - (0xd7 < (byte)(bVar8 + 0x11));
  bVar5 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar25;
  pbVar11 = pbVar30 + (uint)bVar50 * -8 + 4;
  out(*(undefined4 *)pbVar30,(short)puVar31);
  bVar5 = (bVar8 + 0x37) - CARRY1(bVar5,bVar25);
  piVar18 = (int *)CONCAT31(uVar20,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar5;
    iVar17 = CONCAT31(uVar20,bVar5 + 0x11) + 0xc77b;
    pcVar13 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + 'r');
    pcVar13[0x28] = pcVar13[0x28] + bVar6;
code_r0x00404b89:
    cVar9 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar9;
    *pcVar13 = *pcVar13 + cVar9;
    *pcVar13 = *pcVar13 + cVar9;
    puVar14 = (ushort *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar9 + 'r');
    uVar10 = (ushort)puVar14 | *puVar14;
    pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),uVar10);
    bRam11060000 = (byte)uVar10;
    out(*(undefined4 *)pbVar11,(short)puVar31);
    *pcVar13 = *pcVar13 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar18 = (char)*piVar18 + bVar5;
  pbVar30 = (byte *)((int)ppbVar45 - *(int *)((int)puVar48 + 0x21));
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pcVar13 = (char *)CONCAT31(uVar21,bVar29 | *pbVar46);
  puVar43 = (uint *)(pbVar11 + (uint)bVar50 * -8 + 4);
  out(*(undefined4 *)pbVar11,(short)pcVar13);
  uVar39 = *puVar47;
  *pcVar13 = *pcVar13 + cVar9;
  uVar39 = CONCAT31(uVar20,bVar5 & (byte)uVar39) | 0x767b02;
  *(byte *)((int)puVar47 + (int)pcVar13) = *(byte *)((int)puVar47 + (int)pcVar13) + (char)uVar39;
  iVar17 = uVar39 + 0xc67b;
  cVar40 = (char)iVar17;
  uVar20 = (undefined3)((uint)iVar17 >> 8);
  cVar34 = cVar40 + 'r';
  pcVar13 = (char *)CONCAT31(uVar20,cVar34);
  pcVar13[0x28] = pcVar13[0x28] + bVar6;
  *pcVar13 = *pcVar13 + cVar34;
  uVar28 = (undefined2)((uint)puVar47 >> 0x10);
  bVar25 = bVar25 | *(byte *)((int)puStack_84 + -0x5e);
  puVar47 = (uint *)CONCAT22(uVar28,CONCAT11(bVar25,cVar9));
  *pcVar13 = *pcVar13 + cVar34;
  puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,uStack_88);
  pbVar11 = (byte *)CONCAT22(uVar27,CONCAT11(cVar7 + pbVar46[0x76],bVar26));
  *pcVar13 = *pcVar13 + cVar34;
  puVar31 = (uint *)CONCAT31(uVar20,cVar40 + -0x1c);
  pcVar13 = (char *)((uint)puVar31 | *puVar31);
  bVar49 = (POPCOUNT((uint)pcVar13 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar13;
  puVar31 = puStack_84;
  pbVar46 = pbVar11;
  pbVar38 = pbVar30;
  puVar48 = puVar23;
  uVar10 = uStack_88;
  if (!bVar49) goto code_r0x00404ca8;
  *pcVar13 = *pcVar13 + cRam02060000;
  puVar31 = (uint *)CONCAT31((int3)((uint)pcVar13 >> 8),cRam02060000 + 'r');
  *puVar31 = *puVar31 & (uint)puVar47;
  *(char *)((int)puVar31 + 0x11) = *(char *)((int)puVar31 + 0x11) + (char)(uStack_88 >> 8);
  iVar17 = (int)puVar31 + 0xc77b;
  uVar20 = (undefined3)((uint)iVar17 >> 8);
  cRam02060000 = (char)iVar17 + '\t';
  pbVar46 = (byte *)CONCAT31(uVar20,cRam02060000);
  out(*puVar43,uStack_88);
  *pbVar46 = *pbVar46 + cRam02060000;
  puVar48 = (uint *)CONCAT22(uVar28,CONCAT11(bVar25 | *pbVar46,cVar9));
  *(int *)pbVar46 = *(int *)pbVar46 - (int)pbVar46;
  *(byte *)puStack_84 = (byte)*puStack_84 + cVar9;
  puVar31 = puVar43 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
  out(puVar43[(uint)bVar50 * -2 + 1],uStack_88);
  puVar32 = puStack_84;
  puVar43 = puVar31;
  uVar10 = uStack_88;
  if ((POPCOUNT((byte)*puStack_84) & 1U) != 0) goto code_r0x00404cca;
  *pbVar46 = *pbVar46 + cRam02060000;
  puVar14 = (ushort *)CONCAT31(uVar20,(char)iVar17 + '{');
  uVar10 = (ushort)puVar14 | *puVar14;
  pcVar13 = (char *)CONCAT22((short)((uint)iVar17 >> 0x10),uVar10);
  bVar5 = (byte)uVar10;
  out(*puVar31,uStack_88);
  pbVar46 = (byte *)((int)puVar48 + 1);
  bRam11060000 = bVar5;
  *pcVar13 = *pcVar13 + bVar5;
  puVar47 = (uint *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                             CONCAT11((byte)((uint)pbVar46 >> 8) | bRam110cde91,(char)pbVar46));
  pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar5 - 7);
  *puVar23 = (uint)(pcVar13 + (uint)(bVar5 < 7) + *puVar23);
  puVar43 = puVar31 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
  out(puVar31[(uint)bVar50 * -2 + 1],uStack_88);
  puVar31 = (uint *)((int)puStack_84 + 1);
  *pcVar13 = *pcVar13 + (bVar5 - 7);
  pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar26 | (byte)(uVar10 >> 8));
  do {
    bVar5 = (char)pcVar13 - *pcVar13;
    uVar39 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar5;
    cVar9 = bVar5 - CARRY1((byte)uVar39,bVar5);
    *(byte *)puVar31 = *(byte *)puVar31 + cVar9;
    cVar7 = (char)((uint)puVar47 >> 8);
    *(byte *)(puVar23 + 0x673b40) = (byte)puVar23[0x673b40] + cVar7;
    puVar19 = (uint *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar9);
    *(byte *)puVar19 = (byte)*puVar19 + cVar9;
    *(byte *)puVar31 = *(byte *)puVar31 + cVar9;
    *(byte **)(pbVar46 + 0x58) = (byte *)(*(int *)(pbVar46 + 0x58) + (int)puVar43);
    puVar48 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar47 >> 0x10),
                                               CONCAT11(cVar7 + (char)((uint)pcVar13 >> 8),
                                                        (char)puVar47)) >> 8),
                               (char)puVar47 + *(char *)((int)puVar19 * 2));
    *(byte *)puVar19 = (byte)*puVar19 + cVar9;
    *(byte *)puVar43 = (byte)*puVar43 + (char)pbVar46;
    puVar32 = puVar31;
    pbVar11 = pbVar46;
_ctor:
    bVar8 = (byte)((uint)puVar48 >> 8);
    uVar39 = *puVar19;
    bVar5 = (byte)puVar48;
    puVar19 = (uint *)((int)puVar19 + (uint)CARRY1(bVar8,(byte)*puVar19) + *puVar19);
    *(byte *)puVar32 = *(byte *)puVar32 + bVar5;
    cVar9 = bVar5 - *(byte *)((int)puVar32 + 3);
    puVar47 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar48 >> 0x10),
                                               CONCAT11(bVar8 + (byte)uVar39,bVar5)) >> 8),cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) {
      if (*(byte *)((int)puVar32 + 3) <= bVar5) {
        *puVar19 = (uint)(*puVar19 + (int)puVar19);
        puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),(byte)puVar32 | *pbVar11);
        puVar19 = puVar19 + 0x230e;
        puVar48 = puVar47;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    cVar9 = (char)puVar19 + '\x02';
    pcVar13 = (char *)CONCAT31((int3)((uint)puVar19 >> 8),cVar9);
    bVar49 = (POPCOUNT(cVar9) & 1U) == 0;
    puVar31 = puVar32;
    pbVar46 = pbVar11;
    pbVar38 = pbVar30;
    puVar48 = puVar23;
    uVar10 = (ushort)puStack_78;
code_r0x00404ca8:
    puStack_78._0_2_ = uVar10;
    pcVar22 = pcStack_54;
    puVar32 = (uint *)pbStack_5c;
    pbVar11 = pbStack_60;
    pbVar30 = pbStack_68;
    puVar23 = puStack_70;
    if (bVar49) break;
    *(byte *)puVar31 = *(byte *)puVar31 + (char)puVar47;
    pbVar30 = pbVar38;
    puVar23 = puVar48;
  } while( true );
  *pcVar13 = *pcVar13 + (char)pcVar13;
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
  bVar8 = (byte)uVar3;
  *pbVar46 = *pbVar46 + bVar8;
  bVar5 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar8;
  puVar31 = (uint *)((int)puVar48 + 0x11673);
  uVar39 = *puVar31;
  uVar1 = *puVar31;
  *puVar31 = (uint)((byte *)((int)puVar32 + uVar1) + CARRY1(bVar5,bVar8));
  puStack_70 = (uint *)CONCAT22(puStack_70._2_2_,(ushort)puStack_78);
  pbVar46 = pbVar46 + (uint)(CARRY4(uVar39,(uint)puVar32) ||
                            CARRY4((int)puVar32 + uVar1,(uint)CARRY1(bVar5,bVar8))) +
                      *(int *)((int)puVar48 + (int)puVar32);
  puVar43 = puStack_6c;
  uVar10 = (ushort)puStack_78;
code_r0x00404cca:
  puStack_78._0_2_ = uVar10;
  cVar9 = (char)pbVar46 + '\x04';
  puVar19 = (uint *)CONCAT31((int3)((uint)pbVar46 >> 8),cVar9);
  if (SCARRY1((char)pbVar46,'\x04') == cVar9 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
  puVar31 = puVar43 + (uint)bVar50 * -2 + 1;
  out(*puVar43,(short)puVar32);
  uVar39 = *puVar48;
  bVar5 = *(byte *)puVar32;
  bVar8 = (byte)puVar48;
  *(byte *)puVar32 = *(byte *)puVar32 + bVar8;
  iVar17 = (CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + '\x03') & uVar39) + iRam00008c38;
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar32;
  pcVar13 = (char *)(iVar17 + (uint)CARRY1(bVar5,bVar8) + 0x1246f);
  bVar5 = *(byte *)puVar32;
  uVar20 = (undefined3)((uint)puVar48 >> 8);
  puVar47 = (uint *)CONCAT31(uVar20,bVar8 | bVar5);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar13 >> 8);
  puVar19 = (uint *)(CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + *pcVar13) + 0x1fbeef2);
  uVar39 = *puVar19;
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  if (CARRY4(uVar39,(uint)puVar19)) {
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    pcVar13 = (char *)CONCAT31(uVar20,bVar8 | bVar5 | bRam00282809);
    cVar9 = (char)((uint)puVar48 >> 8);
    *pbVar11 = *pbVar11 + cVar9;
    *pcVar13 = *pcVar13 - cVar9;
    *(byte *)puVar19 = *(byte *)puVar19 + (char)puVar19;
    iVar17 = (int)pcVar13 - *(int *)pbVar11;
    puVar43 = puVar31 + (uint)bVar50 * -2 + 1;
    out(*puVar31,(short)puVar32);
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    puVar47 = (uint *)CONCAT22((short)((uint)iVar17 >> 0x10),
                               CONCAT11((byte)((uint)iVar17 >> 8) | bRambf73070b,(char)iVar17));
code_r0x00404d15:
    uVar39 = *puVar19;
    bVar5 = (byte)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + bVar5;
    puVar31 = puVar43 + (uint)bVar50 * -2 + 1;
    out(*puVar43,(short)puVar32);
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar8 = bVar5 + in_AF * '\x06';
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),
                               bVar8 + (0x90 < (bVar8 & 0xf0) |
                                       CARRY1((byte)uVar39,bVar5) | in_AF * (0xf9 < bVar8)) * '`');
  }
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  bVar8 = (byte)puVar19 | (byte)*puVar23;
  puVar43 = puVar31 + (uint)bVar50 * -2 + 1;
  uVar28 = SUB42(puVar32,0);
  out(*puVar31,uVar28);
  *(byte *)puVar47 = (byte)*puVar47 - bVar8;
  bVar5 = *(byte *)puVar32;
  bVar25 = (byte)puVar47;
  *(byte *)puVar32 = *(byte *)puVar32 + bVar25;
  iVar17 = CONCAT31((int3)((uint)puVar19 >> 8),bVar8) + *puVar43 + (uint)CARRY1(bVar5,bVar25);
  pbVar46 = pbVar30 + -*puVar32;
  uVar20 = (undefined3)((uint)iVar17 >> 8);
  cVar9 = (char)iVar17 + (byte)*puVar43 + (pbVar30 < (byte *)*puVar32);
  puVar31 = (uint *)CONCAT31(uVar20,cVar9);
  bVar5 = (byte)((uint)puVar47 >> 8);
  *(byte *)puVar47 = (byte)*puVar47 - bVar5;
  *puVar31 = (uint)(*puVar31 + (int)puVar31);
  bVar25 = bVar25 | *(byte *)((int)puVar32 + (int)puVar31);
  uVar27 = (undefined2)((uint)puVar47 >> 0x10);
  if ((POPCOUNT(bVar25) & 1U) == 0) {
    *(byte *)puVar31 = (byte)*puVar31 + cVar9;
    pcVar13 = (char *)CONCAT31(uVar20,cVar9 + '\x12');
    *pcVar13 = *pcVar13 + bVar5;
    puVar31 = (uint *)CONCAT31(uVar20,(cVar9 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar47 >> 8),bVar25));
    bVar8 = *(byte *)puVar32;
    *(byte *)puVar32 = *(byte *)puVar32 + bVar25;
    if (!CARRY1(bVar8,bVar25)) {
      pbVar30 = (byte *)((uint)puVar31 | *puVar31);
      out(*puVar43,uVar28);
      *pbVar30 = *pbVar30 + (char)pbVar30;
      bVar8 = *pbVar30;
      piVar18 = (int *)CONCAT22(uVar27,CONCAT11(bVar5 | bVar8,bVar25));
      iVar17 = (int)pbVar30 - *piVar18;
      *(byte *)puVar32 = *(byte *)puVar32 + bVar25;
      puVar31 = puVar43 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
      out(puVar43[(uint)bVar50 * -2 + 1],uVar28);
      uRam12060000 = (undefined1)iVar17;
      *(char *)((int)piVar18 + iVar17) = *(char *)((int)piVar18 + iVar17) - (bVar5 | bVar8);
      *(byte *)puVar32 = *(byte *)puVar32 + bVar25;
      pbVar30 = (byte *)(iVar17 + -0x120edecd);
      *(byte *)puVar31 = (byte)*puVar31 + 1;
      bVar5 = *pbVar30;
      bVar8 = (byte)pbVar30;
      *pbVar30 = *pbVar30 + bVar8;
      pbVar46 = pbVar46 + ((-1 - *(int *)((int)puVar23 + 0x42)) - (uint)CARRY1(bVar5,bVar8));
      *pbVar30 = *pbVar30 + bVar8;
      bVar6 = (byte)pbVar11 | (byte)((uint)pbVar30 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar30;
      bVar5 = *(byte *)puVar32;
      pcVar13 = (char *)(((uint)pbVar30 | 0x11) + 0x511072c);
      puVar43 = puVar31 + (uint)bVar50 * -2 + 1;
      out(*puVar31,uVar28);
      puVar32 = (uint *)((int)puVar32 + 1);
      *pcVar13 = *pcVar13 + (char)pcVar13;
      bVar8 = (byte)((uint)pcVar13 >> 8);
      pbVar11 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar11 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar11 >> 8) | bVar5,bVar6))
                                       >> 8),bVar6 | bVar8);
      uVar20 = (undefined3)((uint)pcVar13 >> 8);
      bVar5 = (char)pcVar13 - *pcVar13;
      pcVar13 = (char *)CONCAT31(uVar20,bVar5);
      *pcVar13 = *pcVar13 + bVar5;
      *(int *)((int)pcVar13 * 2) = (int)(pbVar11 + *(int *)((int)pcVar13 * 2));
      *(byte *)puVar32 = *(byte *)puVar32 + bVar5;
      *pbVar46 = *pbVar46 + bVar8;
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar39 = CONCAT31(uVar20,bVar5 + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar39;
      pbVar30 = (byte *)CONCAT22((short)(uVar39 >> 0x10),CONCAT11(bVar8 + in_AF,bVar5));
      *(byte *)puVar43 = (byte)*puVar43 + bVar25;
      *pbVar30 = *pbVar30 + bVar5;
      *pbVar30 = *pbVar30 + bVar5;
      bVar49 = CARRY1(bVar5,*pbVar30);
      puVar31 = (uint *)CONCAT31((int3)((uint)pbVar30 >> 8),bVar5 + *pbVar30);
      goto code_r0x00404d9a;
    }
    *pbVar11 = *pbVar11 - (char)puVar32;
  }
  *(byte *)puVar31 = (byte)*puVar31 + (char)puVar31;
  bVar49 = false;
  piVar18 = (int *)CONCAT22(uVar27,CONCAT11(bVar5 | *(byte *)puVar32,bVar25));
code_r0x00404d9a:
  do {
    pbVar38 = (byte *)puVar32;
    *puVar31 = (*puVar31 - (int)puVar31) - (uint)bVar49;
    bVar5 = (byte)((uint)piVar18 >> 8);
    uVar27 = (undefined2)((uint)piVar18 >> 0x10);
    bVar8 = (byte)piVar18;
    bVar25 = bVar5 + (byte)iRam00000c00;
    pbVar30 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar5,(byte)iRam00000c00));
    *pbVar38 = *pbVar38 + bVar8;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(char)pbVar11 - (byte)*puVar43);
    bVar5 = *pbVar30;
    puVar31 = (uint *)(pbVar30 + (uint)CARRY1(bVar25,*pbVar30) + *(int *)pbVar30);
    *pbVar38 = *pbVar38 + bVar8;
    cVar7 = ((bVar25 + bVar5) - *pbVar38) + (byte)*puVar31;
    pcVar13 = (char *)CONCAT22(uVar27,CONCAT11(cVar7,bVar8));
    puVar48 = puVar23 + (uint)bVar50 * -2 + 1;
    uVar39 = in((short)pbVar38);
    *puVar23 = uVar39;
    cVar9 = (char)puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + cVar9;
    uVar20 = (undefined3)((uint)pbVar38 >> 8);
    bVar25 = (byte)pbVar38 | (byte)*puVar43;
    pcVar22 = (char *)CONCAT31(uVar20,bVar25);
    *pcVar13 = *pcVar13 + '\x01';
    bVar5 = (cVar7 - *pcVar22) + (byte)*puVar31;
    pcVar13 = (char *)CONCAT22(uVar27,CONCAT11(bVar5,bVar8));
    puVar23 = puVar48 + (uint)bVar50 * -2 + 1;
    uVar39 = in((short)pcVar22);
    *puVar48 = uVar39;
    *(byte *)puVar31 = (byte)*puVar31 + cVar9;
    bVar25 = bVar25 | (byte)*puVar43;
    puVar32 = (uint *)CONCAT31(uVar20,bVar25);
    *pcVar13 = *pcVar13 + '\x01';
    bVar49 = bVar8 < *(byte *)((int)puVar32 + 2);
    cVar7 = bVar8 - *(byte *)((int)puVar32 + 2);
    piVar18 = (int *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  *(byte *)puVar31 = (byte)*puVar31 + cVar9;
  bVar8 = cVar9 + 0x7b;
  pbVar30 = (byte *)CONCAT31((int3)((uint)puVar31 >> 8),bVar8);
  pbVar11[(int)pbVar30] = pbVar11[(int)pbVar30] + bVar8;
  puVar31 = puVar43 + (uint)bVar50 * -2 + 1;
  uVar28 = SUB42(puVar32,0);
  out(*puVar43,uVar28);
  pbVar37 = pbVar11 + -1;
  *pbVar30 = *pbVar30 + bVar8;
  bVar5 = bVar5 | *(byte *)puVar32;
  piVar18 = (int *)CONCAT22(uVar27,CONCAT11(bVar5,cVar7));
  *pbVar30 = *pbVar30 + bVar8;
  *pbVar37 = *pbVar37 + bVar25;
  *pbVar37 = *pbVar37 ^ bVar8;
  *(byte *)puVar32 = *(byte *)puVar32 + bVar5;
  *pbVar30 = *pbVar30 + bVar8;
  do {
    bVar26 = (byte)((uint)piVar18 >> 8);
    *(byte *)puVar23 = (byte)*puVar23 + bVar26;
    bVar5 = *pbVar30;
    bVar8 = (byte)pbVar30;
    *pbVar30 = *pbVar30 + bVar8;
    *(byte **)(pbVar11 + 0x17) =
         (byte *)((int)puVar31 + (uint)CARRY1(bVar5,bVar8) + *(int *)(pbVar11 + 0x17));
    *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
    uVar21 = (undefined3)((uint)pbVar30 >> 8);
    bVar8 = bVar8 | (byte)*puVar31;
    puVar23 = (uint *)((int)puVar23 + *(int *)(pbVar46 + -0x34));
    *(char *)CONCAT31(uVar21,bVar8) = *(char *)CONCAT31(uVar21,bVar8) + bVar8;
    bVar5 = bVar8 + 2;
    cVar9 = (char)((uint)pbVar38 >> 8);
    bVar6 = (byte)piVar18;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      pbVar30 = (byte *)CONCAT31(uVar21,bVar8 + 0x15 + (0xfd < bVar8));
      if (0xec < bVar5 || CARRY1(bVar8 + 0x15,0xfd < bVar8)) {
        *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
      }
code_r0x00404e60:
      pbVar46 = pbVar46 + -*puVar32;
      bVar5 = *pbVar30;
      *pbVar30 = *pbVar30 + (byte)pbVar30;
      pbVar11 = (byte *)((int)puVar31 + (-(uint)CARRY1(bVar5,(byte)pbVar30) - *(int *)pbVar30));
      pbVar30 = pbVar30 + *(int *)pbVar30;
      puStack_84 = (uint *)CONCAT22(puStack_84._2_2_,in_DS);
      *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
      *(char *)piVar18 = (char)*piVar18 + cVar9;
      bVar5 = *pbVar30;
      *pbVar30 = *pbVar30 + (byte)pbVar30;
      *(byte **)(pbVar37 + (int)puVar32) =
           (byte *)((int)puVar32 +
                   (uint)CARRY1(bVar5,(byte)pbVar30) + *(int *)(pbVar37 + (int)puVar32));
      pbVar30 = pbVar30 + 0x73061314;
      *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
      uVar21 = (undefined3)((uint)piVar18 >> 8);
      bVar6 = bVar6 | *(byte *)puVar32;
      pcVar22 = (char *)CONCAT31(uVar21,bVar6);
      *pbVar30 = *pbVar30 + (char)pbVar30;
      cVar9 = (char)pbVar30 + 'o';
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar9);
      *pcVar13 = *pcVar13 + cVar9;
      pbVar30 = pbVar11 + ((uint)bVar50 * -2 + 1) * 4;
      out(*(undefined4 *)pbVar11,uVar28);
      bVar5 = *(byte *)puVar32;
      *(byte *)puVar32 = *(byte *)puVar32 + bVar6;
      pcVar13 = pcVar13 + (uint)CARRY1(bVar5,bVar6) + *puVar23;
      *pcVar13 = *pcVar13 + (char)pcVar13;
      *pcVar22 = *pcVar22 + bVar25;
      puVar43 = (uint *)(pbVar30 + ((uint)bVar50 * -2 + 1) * 4);
      out(*(undefined4 *)pbVar30,uVar28);
      *(byte *)puVar32 = *(byte *)puVar32 + bVar6;
      piVar18 = (int *)((uint)pcVar13 | *puVar23);
      pcVar22[0x390a0000] = pcVar22[0x390a0000] - bVar26;
      pbVar38 = (byte *)&cRam07000000;
      *(byte *)puVar23 = (byte)*puVar23 - bVar26;
      *piVar18 = *piVar18 + (int)piVar18;
      puVar31 = (uint *)CONCAT31(uVar21,bVar6 | *(byte *)((int)piVar18 + (int)pcVar22));
      *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) - bVar26;
      cRam07000000 = cRam07000000 + bVar26;
      piVar18 = (int *)((uint)piVar18 | 0x777b02);
      pbVar30 = (byte *)((int)puVar23 + (int)pbVar46 * 2);
      bVar49 = SCARRY1(*pbVar30,(char)piVar18);
      *pbVar30 = *pbVar30 + (char)piVar18;
      bVar5 = *pbVar30;
      *(char *)piVar18 = (char)*piVar18;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
    bVar8 = bVar8 + 0x71;
    pbVar30 = (byte *)CONCAT31(uVar21,bVar8);
    *pbVar30 = *pbVar30;
    *(byte *)puVar31 = (byte)*puVar31 + 1;
    *piVar18 = (*piVar18 - (int)pbVar30) - (uint)(0x90 < bVar5);
    uVar39 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar8;
    if (!CARRY1((byte)uVar39,bVar8)) goto code_r0x00404e60;
    *pbVar30 = *pbVar30 + bVar8;
    uVar27 = (undefined2)((uint)piVar18 >> 0x10);
    bVar26 = bVar26 | *pbVar30;
    pbVar30 = pbVar30 + -*(int *)pbVar30;
    *pbVar37 = *pbVar37 + bVar26;
    cVar7 = bVar6 - *(byte *)((int)puVar32 + 2);
    piVar18 = (int *)CONCAT31((int3)(CONCAT22(uVar27,CONCAT11(bVar26,bVar6)) >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  cVar34 = (char)pbVar30;
  *pbVar30 = *pbVar30 + cVar34;
  uVar21 = (undefined3)((uint)pbVar30 >> 8);
  pcVar13 = (char *)CONCAT31(uVar21,cVar34 + '{');
  out(*puVar31,uVar28);
  *pcVar13 = *pcVar13 + cVar34 + '{';
  bVar8 = cVar34 + 0x7e;
  pbVar30 = (byte *)CONCAT31(uVar21,bVar8);
  puVar43 = puVar31 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
  out(puVar31[(uint)bVar50 * -2 + 1],uVar28);
  pbVar38 = pbVar11 + -2;
  *pbVar30 = *pbVar30 + bVar8;
  bVar5 = *(byte *)puVar32;
  puVar31 = (uint *)CONCAT22(uVar27,CONCAT11(bVar26 | bVar5,cVar7));
  *pbVar30 = *pbVar30 + bVar8;
  *pbVar38 = *pbVar38 + bVar25;
  *pbVar38 = *pbVar38 ^ bVar8;
  *(byte *)puVar32 = *(byte *)puVar32 + (bVar26 | bVar5);
  *pbVar30 = *pbVar30 + bVar8;
  *pbVar30 = *pbVar30 + cVar9;
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar8;
  *(byte **)(pbVar11 + 0x18) =
       (byte *)((int)puVar43 + (uint)CARRY1(bVar5,bVar8) + *(int *)(pbVar11 + 0x18));
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  bVar8 = bVar8 | (byte)*puVar43;
  puVar23 = (uint *)((int)puVar23 + *(int *)(pbVar46 + -0x33));
  *(char *)CONCAT31(uVar21,bVar8) = *(char *)CONCAT31(uVar21,bVar8) + bVar8;
  bVar49 = SCARRY1(bVar8,'\x02');
  bVar5 = bVar8 + 2;
  piVar18 = (int *)CONCAT31(uVar21,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar5;
    return CONCAT31(uVar21,bVar8 + 0x71);
  }
code_r0x00404ebf:
  bVar8 = (byte)piVar18;
  uVar21 = (undefined3)((uint)piVar18 >> 8);
  if (bVar5 != 0 && bVar49 == (char)bVar5 < '\0') {
    *(byte *)piVar18 = (char)*piVar18 + bVar8;
    puVar43[(int)puVar23 * 2] =
         (uint)((int)puVar32 + (uint)(0xd2 < bVar8) + puVar43[(int)puVar23 * 2]);
    return CONCAT31(uVar21,bVar8 + 0x2d);
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar5 = *pbVar38;
  *puVar43 = (uint)(*puVar43 + (int)piVar18);
  bVar6 = (byte)((uint)puVar31 >> 8);
  *(byte *)piVar18 = (char)*piVar18 - bVar6;
  *(byte *)piVar18 = (char)*piVar18 + bVar8;
  pbVar30 = (byte *)(CONCAT31(uVar20,bVar25 | bVar5) - *(int *)pbVar38);
  puVar48 = (uint *)CONCAT31(uVar21,bVar8 + 6);
  *(uint *)(pbVar38 + (int)puVar43 * 2) =
       (int)puVar48 + (uint)(0xf9 < bVar8) + *(int *)(pbVar38 + (int)puVar43 * 2);
  *(byte *)puVar31 = (byte)*puVar31 ^ bVar8 + 6;
  bVar8 = (byte)puVar31;
  *pbVar30 = *pbVar30 + bVar8;
  puVar47 = puVar43 + (uint)bVar50 * -2 + 1;
  uVar27 = SUB42(pbVar30,0);
  out(*puVar43,uVar27);
  *puVar31 = *puVar31 ^ (uint)puVar48;
  *pbVar30 = *pbVar30 + bVar8;
  puVar43 = (uint *)(pbVar38 + -*(int *)pbVar38);
  *(uint *)((int)puVar23 + 0x31) = *(uint *)((int)puVar23 + 0x31) | (uint)pbVar46;
  *puVar48 = *puVar48 + (int)puVar48;
  puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar6 | (byte)*puVar43,bVar8));
  *(byte **)(pbVar30 + 0x6e) = (byte *)(*(int *)(pbVar30 + 0x6e) + (int)puVar47);
  piVar18 = (int *)((uint)puVar48 | *puVar48);
  bVar25 = (byte)puVar43;
  *(byte *)puVar23 = (byte)*puVar23 - bVar25;
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar8;
  if (CARRY1(bVar5,bVar8)) {
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar5 = pbVar30[0x11];
    uVar28 = (undefined2)((uint)puVar43 >> 0x10);
    puVar48 = puVar47 + (uint)bVar50 * -2 + 1;
    out(*puVar47,uVar27);
    puVar31 = (uint *)((int)puVar31 + 1);
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    bVar29 = (byte)((uint)puVar43 >> 8) | bVar5 | *pbVar30;
    pcVar13 = (char *)((int)piVar18 + -0x21000001);
    bVar5 = (byte)pcVar13 | 0x11;
    uVar20 = (undefined3)((uint)pcVar13 >> 8);
    cVar9 = bVar5 - 7;
    pcVar22 = (char *)CONCAT31(uVar20,cVar9);
    *puVar23 = (uint)(pcVar22 + (uint)(bVar5 < 7) + *puVar23);
    puVar47 = puVar48 + (uint)bVar50 * -2 + 1;
    out(*puVar48,uVar27);
    pbVar30 = pbVar30 + 1;
    *pcVar22 = *pcVar22 + cVar9;
    bVar6 = (byte)((uint)pcVar13 >> 8);
    bVar26 = bVar25 | bVar6;
    bVar8 = cVar9 - *pcVar22;
    bVar5 = *(byte *)puVar31;
    *(byte *)puVar31 = *(byte *)puVar31 + bVar8;
    *(char *)CONCAT31(uVar20,bVar8) = *(char *)CONCAT31(uVar20,bVar8) + bVar8 + CARRY1(bVar5,bVar8);
    *pbVar30 = *pbVar30 + bVar8;
    *(byte *)puVar47 = (byte)*puVar47 + bVar26;
    bVar5 = (byte)((uint)pbVar30 >> 8);
    *(byte *)puVar31 = *(byte *)puVar31 + bVar8 + CARRY1((byte)pbVar30,bVar5);
    piVar18 = (int *)CONCAT31(uVar20,bVar8);
    *(byte *)piVar18 = (char)*piVar18 + bVar8;
    pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                               CONCAT11(bVar5 + bVar6,(byte)pbVar30 + bVar5));
    puVar43 = (uint *)CONCAT22(uVar28,CONCAT11(bVar29 + *(char *)(CONCAT31((int3)(CONCAT22(uVar28,
                                                  CONCAT11(bVar29,bVar25)) >> 8),bVar26) + 0x76),
                                               bVar26));
    puStack_78._0_2_ = (ushort)puStack_84;
code_r0x00404fa4:
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    pcVar13 = (char *)(CONCAT31((int3)((uint)piVar18 >> 8),(char)piVar18 + '(') ^ *puVar31);
    cVar34 = (char)puVar31;
    *pbVar30 = *pbVar30 + cVar34;
    uVar27 = (undefined2)((uint)puVar43 >> 0x10);
    cVar36 = (char)puVar43;
    cVar41 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + 0x75);
    *pcVar13 = *pcVar13 + (char)pcVar13;
    cVar9 = (char)pcVar13 + 'o';
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar9);
    *pcVar13 = *pcVar13 + cVar9;
    cVar40 = (char)((uint)puVar31 >> 8);
    *pbVar46 = *pbVar46 - cVar40;
    pbVar30[1] = pbVar30[1] + cVar34;
    pcVar13 = pcVar13 + -0x757b021b;
    cVar9 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar9;
    uVar20 = (undefined3)((uint)pcVar13 >> 8);
    cVar7 = cVar9 + 'o';
    pcVar13 = (char *)CONCAT31(uVar20,cVar7);
    pbVar11 = pbVar30 + 2;
    *pcVar13 = *pcVar13 + cVar7;
    iVar17 = CONCAT22(uVar27,CONCAT11(cVar41 + *(char *)(CONCAT22(uVar27,CONCAT11(cVar41,cVar36)) +
                                                        0x76),cVar36));
    *pcVar13 = *pcVar13 + cVar7;
    pcVar13 = (char *)CONCAT31(uVar20,cVar9 + -0x22);
    puVar32 = (uint *)((int)puVar23 + (uint)bVar50 * -2 + 1);
    pbVar38 = (byte *)((int)puVar47 + (uint)bVar50 * -2 + 1);
    *(byte *)puVar23 = (byte)*puVar47;
    *pcVar13 = *pcVar13 + cVar9 + -0x22;
    *(byte *)((int)puVar31 + (int)pcVar13) =
         *(byte *)((int)puVar31 + (int)pcVar13) - (char)((uint)pbVar11 >> 8);
    *pbVar11 = *pbVar11 + cVar34;
    bVar8 = cVar40 - pbVar30[4];
    pbVar37 = pbVar38 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar38,(short)pbVar11);
    puVar43 = (uint *)((uint)(pcVar13 + *(int *)(pcVar13 + iVar17)) ^ 0x280a0001);
    *(byte *)puVar43 = (byte)*puVar43 << 1 | (char)(byte)*puVar43 < '\0';
    *pbVar37 = *pbVar37 + (char)puVar43;
    pbVar37 = pbVar37 + *(int *)(pbVar30 + -0x5c);
    pbVar30 = (byte *)((uint)puVar43 | *puVar43);
    *pbVar37 = *pbVar37 + (char)pbVar30;
    puVar43 = (uint *)CONCAT31((int3)((uint)iVar17 >> 8),cVar36 - (char)pbVar11);
    bVar5 = *pbVar30;
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar8 + *pbVar30,cVar34));
    iVar17 = *(int *)pbVar30;
    *pbVar11 = *pbVar11 + cVar34;
    cVar9 = (char)(pbVar30 + (uint)CARRY1(bVar8,bVar5) + iVar17) + 'r';
    puVar48 = (uint *)CONCAT31((int3)((uint)(pbVar30 + (uint)CARRY1(bVar8,bVar5) + iVar17) >> 8),
                               cVar9);
    pbVar30 = (byte *)CONCAT22((short)((uint)pbVar11 >> 0x10),CONCAT11(10,(char)pbVar11));
    *(char *)(puVar48 + 10) = (char)puVar48[10] + '\n';
    *pbVar37 = *pbVar37 + cVar9;
    puVar47 = (uint *)(pbVar37 + *(int *)(pbVar30 + -0x5e));
    uVar39 = *puVar48;
    cVar9 = (char)((uint)puVar48 | uVar39);
    *(byte *)puVar47 = (byte)*puVar47 + cVar9;
    uVar20 = (undefined3)(((uint)puVar48 | uVar39) >> 8);
    cVar7 = cVar9 + (byte)*puVar43;
    puVar48 = (uint *)CONCAT31(uVar20,cVar7);
    if (SCARRY1(cVar9,(byte)*puVar43) == cVar7 < '\0') goto code_r0x00405090;
    *(byte *)puVar48 = (byte)*puVar48 + cVar7;
    piVar18 = (int *)CONCAT31(uVar20,cVar7 + '\x02');
    puVar23 = puVar32;
  }
  else {
    out(2,(char)piVar18);
    if ((POPCOUNT(*pbVar30) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar20 = (undefined3)((uint)piVar18 >> 8);
  cVar9 = (char)piVar18 + '}';
  pbVar11 = (byte *)CONCAT31(uVar20,cVar9);
  pbVar30[(int)pbVar11] = pbVar30[(int)pbVar11] + cVar9;
  pbVar30[0x280a0000] = pbVar30[0x280a0000] - (char)((uint)piVar18 >> 8);
  bVar5 = (byte)puVar31 & 7;
  *pbVar11 = *pbVar11 << bVar5 | *pbVar11 >> 8 - bVar5;
  *(byte *)puVar47 = (byte)*puVar47 + cVar9;
  cVar34 = (char)puVar43 - (byte)*puVar47;
  uVar27 = (undefined2)((uint)puVar43 >> 0x10);
  cVar40 = (char)((uint)puVar43 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),cVar34) + 0x7c);
  pcVar13 = (char *)CONCAT22(uVar27,CONCAT11(cVar40,cVar34));
  *pbVar11 = *pbVar11 + cVar9;
  bVar8 = (char)piVar18 + 0xa7U & *pbVar30;
  puVar32 = (uint *)((int)puVar23 + *(int *)(pbVar46 + 0x7c));
  *(char *)CONCAT31(uVar20,bVar8) = *(char *)CONCAT31(uVar20,bVar8) + bVar8;
  bVar8 = bVar8 + 0x2a;
  pbVar11 = (byte *)CONCAT31(uVar20,bVar8);
  *pbVar11 = *pbVar11 + bVar8;
  *pcVar13 = *pcVar13 + cVar34;
  *pbVar30 = *pbVar30 ^ bVar8;
  *pcVar13 = *pcVar13 + bVar8;
  bVar5 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar8;
  cVar9 = (bVar8 - *pbVar11) - CARRY1(bVar5,bVar8);
  *(byte *)puVar31 = (byte)*puVar31 + (byte)pbVar30;
  cVar40 = cVar40 + pcVar13[0x7b];
  *(char *)CONCAT31(uVar20,cVar9) = *(char *)CONCAT31(uVar20,cVar9) + cVar9;
  pcVar13 = (char *)CONCAT31(uVar20,cVar9 + 'o');
  *pcVar13 = *pcVar13 + cVar9 + 'o';
  pcVar13 = pcVar13 + 0x2ed7fde6;
  cVar7 = (char)pcVar13;
  *pcVar13 = *pcVar13 + cVar7;
  cVar9 = *(char *)(CONCAT22(uVar27,CONCAT11(cVar40,cVar34)) + 0x7b);
  *pcVar13 = *pcVar13 + cVar7;
  piVar18 = (int *)(CONCAT31((int3)((uint)pcVar13 >> 8),cVar7 + 'o') + 0x6f060000);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar21 = (undefined3)((uint)pbVar30 >> 8);
  bVar8 = (byte)pbVar30 | (byte)*puVar47;
  pbVar38 = (byte *)CONCAT31(uVar21,bVar8);
  uVar39 = CONCAT22(uVar27,CONCAT11(cVar40 + cVar9,cVar34)) | (uint)puVar47;
  uVar20 = (undefined3)((uint)piVar18 >> 8);
  bVar5 = (byte)piVar18 | *pbVar38;
  pbVar11 = (byte *)CONCAT31(uVar20,bVar5);
  cVar9 = (byte)puVar31 - bVar8;
  puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),cVar9);
  *pbVar11 = *pbVar11 + bVar5;
  puVar43 = puVar47 + (uint)bVar50 * -2 + 1;
  out(*puVar47,(short)pbVar38);
  *pbVar11 = bVar5;
  *pbVar38 = *pbVar38 + cVar9;
  puVar47 = puVar43 + (uint)bVar50 * -2 + 1;
  out(*puVar43,(short)pbVar38);
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  puVar43 = (uint *)(CONCAT31((int3)(uVar39 >> 8),(char)uVar39 - (char)((uint)pbVar30 >> 8)) |
                    (uint)puVar47);
  pbVar30 = (byte *)CONCAT31(uVar21,(bVar8 | (byte)*puVar47) + (byte)*puVar32);
  cVar9 = bVar5 - (byte)*puVar32;
  puVar48 = (uint *)CONCAT31(uVar20,cVar9 - *(char *)CONCAT31(uVar20,cVar9));
code_r0x00405090:
  *puVar48 = (uint)(pbVar30 + *puVar48);
  cVar9 = (char)puVar48;
  *(byte *)puVar48 = (byte)*puVar48 + cVar9;
  *(byte *)puVar48 = (byte)*puVar48 + cVar9;
  *(byte *)puVar48 = (byte)*puVar48 + cVar9;
  *puVar31 = *puVar31 - (int)pbVar46;
  uVar39 = *puVar47;
  bVar5 = (byte)pbVar30;
  *(byte *)puVar47 = (byte)*puVar47 + bVar5;
  *(byte *)puVar48 = (byte)*puVar48 + cVar9 + CARRY1((byte)uVar39,bVar5);
  *(byte *)puVar31 = (byte)*puVar31 + cVar9;
  uVar39 = *puVar43;
  *(byte *)puVar43 = (byte)*puVar43 + 0x72;
  *(byte *)puVar43 = (byte)*puVar43;
  cVar9 = (char)((uint)pbVar30 >> 8);
  if (SCARRY1((byte)uVar39,'r')) {
    puVar47 = (uint *)((int)puVar47 + *(int *)(pbVar30 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar47 = (byte)*puVar47 + (char)puVar48;
      uVar20 = (undefined3)((uint)puVar48 >> 8);
      cVar7 = (char)puVar48 + (byte)*puVar43;
      pcVar13 = (char *)CONCAT31(uVar20,cVar7);
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                 CONCAT11((char)((uint)puVar43 >> 8) +
                                          *(byte *)((int)puVar43 + 0x7b),(char)puVar43));
      *pcVar13 = *pcVar13 + cVar7;
      in_AF = 9 < (cVar7 + 0x6fU & 0xf) | in_AF;
      uVar39 = CONCAT31(uVar20,cVar7 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar25 = (byte)uVar39;
      piVar18 = (int *)CONCAT22((short)(uVar39 >> 0x10),
                                CONCAT11((char)((uint)puVar48 >> 8) + in_AF,bVar25));
      *piVar18 = *piVar18 + (int)piVar18;
      uVar20 = (undefined3)((uint)piVar18 >> 8);
      bVar25 = bVar25 | *(byte *)(piVar18 + 0x354a);
      bVar25 = bVar25 - *(char *)CONCAT31(uVar20,bVar25);
      pbVar11 = (byte *)CONCAT31(uVar20,bVar25);
      bVar8 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar25;
      puVar47 = (uint *)((int)puVar47 + (-(uint)CARRY1(bVar8,bVar25) - *(int *)pbVar11));
      puVar48 = (uint *)(pbVar11 + 0xfc00);
      *pbVar30 = *pbVar30 + cVar9;
      uVar39 = *puVar48;
      bVar8 = (byte)puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + bVar8;
      uVar15 = (uint)CARRY1((byte)uVar39,bVar8);
      uVar1 = *puVar43;
      uVar39 = *puVar43;
      *puVar43 = (uint)((byte *)(uVar39 + (int)puVar48) + uVar15);
      if (!CARRY4(uVar1,(uint)puVar48) && !CARRY4(uVar39 + (int)puVar48,uVar15)) break;
      *(byte *)puVar48 = (byte)*puVar48 + bVar8;
    }
  }
  uVar39 = (uint)puVar48 | *puVar48;
  uVar27 = SUB42(pbVar30,0);
  *(byte *)puVar47 = (byte)*puVar47 + (char)uVar39;
  piVar18 = (int *)(uVar39 + 0xc1872);
  if (SCARRY4(uVar39,0xc1872)) {
    cVar7 = (char)piVar18;
    *(char *)piVar18 = *(char *)piVar18 + cVar7;
    *pbVar30 = *pbVar30 + cVar7;
    *(char *)piVar18 = *(char *)piVar18 + cVar7;
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar31;
    *(char *)piVar18 = *(char *)piVar18 + cVar7;
    *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) + bVar5;
    puVar48 = puVar47;
    goto code_r0x00405117;
  }
  do {
    uVar39 = *puVar47;
    bVar5 = (byte)piVar18;
    *(byte *)puVar47 = (byte)*puVar47 + bVar5;
    if (CARRY1((byte)uVar39,bVar5)) {
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      uVar20 = (undefined3)((uint)puVar31 >> 8);
      bVar8 = (byte)puVar31 | bRam396f1609;
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      puVar31 = (uint *)CONCAT31(uVar20,bVar8 | *(byte *)CONCAT31(uVar20,bVar8));
      uVar20 = (undefined3)((uint)piVar18 >> 8);
      bVar5 = bVar5 | *pbVar30;
      pcVar13 = (char *)CONCAT31(uVar20,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        puVar23 = puVar47 + (uint)bVar50 * -2 + 1;
        out(*puVar47,uVar27);
        uVar39 = CONCAT22((short)((uint)piVar18 >> 0x10),(ushort)bVar5);
        *(byte *)puVar23 = (byte)*puVar23 + bVar5;
        pcVar13 = (char *)(uVar39 | 8);
        cVar7 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + 0x7a);
        puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(cVar7,(char)puVar43));
        *pcVar13 = *pcVar13 + (char)pcVar13;
        cVar9 = (char)pcVar13 + 'o';
        piVar18 = (int *)CONCAT31((int3)(uVar39 >> 8),cVar9);
        *(char *)piVar18 = (char)*piVar18 + cVar9;
        *(byte *)puVar31 = (byte)*puVar31 + 1;
        puVar48 = puVar23 + (uint)bVar50 * -2 + 1;
        out(*puVar23,uVar27);
        pbVar30 = (byte *)((uint)pbVar30 ^ uRam08122c04);
        iVar17 = CONCAT31((int3)((uint)(*piVar18 * 0x17070600) >> 8),2);
        *(char *)(iVar17 * 2) = *(char *)(iVar17 * 2) - cVar7;
        do {
          bVar5 = (byte)iVar17;
          *(byte *)puVar48 = (byte)*puVar48 + bVar5;
          bVar49 = CARRY1(bVar5,(byte)*puVar43);
          uVar20 = (undefined3)((uint)iVar17 >> 8);
          cVar9 = bVar5 + (byte)*puVar43;
          pbVar11 = (byte *)CONCAT31(uVar20,cVar9);
          uVar10 = in_DS;
          uVar4 = uStack_c4;
          if (SCARRY1(bVar5,(byte)*puVar43) == cVar9 < '\0') goto GenerateStatusText;
          *pbVar11 = *pbVar11 + cVar9;
          uVar39 = CONCAT31(uVar20,cVar9 + '\'') + 0x1ebd9f3;
          uStack_c8 = (undefined1)(ushort)puStack_78;
          uStack_c7 = (undefined1)((ushort)puStack_78 >> 8);
          piVar18 = (int *)(uVar39 ^ 0x73060000);
          puVar31 = (uint *)((int)puVar31 + 1);
          *piVar18 = (int)(*piVar18 + (int)piVar18);
          puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                     CONCAT11((byte)((uint)puVar43 >> 8) | pbVar46[0x7e],
                                              (char)puVar43));
          cVar9 = (char)uVar39;
          *(char *)piVar18 = (char)*piVar18 + cVar9;
          uVar39 = CONCAT31((int3)((uint)piVar18 >> 8),cVar9 + '\x02');
          bVar49 = 0xd9f2d2da < uVar39;
          iVar17 = uVar39 + 0x260d2d25;
          pbVar38 = pbVar46;
          do {
            uVar20 = (undefined3)((uint)iVar17 >> 8);
            bVar8 = (char)iVar17 + -2 + bVar49;
            pbVar11 = (byte *)CONCAT31(uVar20,bVar8);
            bVar5 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar8;
            bVar25 = (byte)puVar43;
            uStack_c4 = (ushort)puStack_78;
            if (CARRY1(bVar5,bVar8)) {
              *pbVar11 = *pbVar11 + bVar8;
              puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                         CONCAT11((byte)((uint)puVar43 >> 8) | pbVar38[0x7f],bVar25)
                                        );
              *pbVar11 = *pbVar11 + bVar8;
              pbVar11 = (byte *)CONCAT31(uVar20,bVar8 + 0x2a);
              *pbVar11 = *pbVar11 + bVar8 + 0x2a;
              *(byte *)puVar43 = (byte)*puVar43 + (char)pbVar30;
              uVar10 = in_DS;
              while( true ) {
                in_DS = uVar10;
                bVar8 = (byte)pbVar11;
                *pbVar30 = *pbVar30 ^ bVar8;
                *pbVar30 = *pbVar30 + (char)puVar43;
                *pbVar11 = *pbVar11 + bVar8;
                *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)pbVar30 >> 8);
                bVar5 = *pbVar11;
                *pbVar11 = *pbVar11 + bVar8;
                uVar1 = *puVar43;
                uVar39 = *puVar43;
                *puVar43 = (uint)(pbVar11 + uVar39 + CARRY1(bVar5,bVar8));
                uVar20 = (undefined3)((uint)pbVar11 >> 8);
                if (CARRY4(uVar1,(uint)pbVar11) ||
                    CARRY4((uint)(pbVar11 + uVar39),(uint)CARRY1(bVar5,bVar8))) break;
                *(byte *)puVar48 = (byte)*puVar48 + bVar8;
                pcVar13 = (char *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                           CONCAT11((char)((uint)puVar31 >> 8) + *pbVar11,
                                                    (char)puVar31));
                *(byte *)puVar48 = (byte)*puVar48 + bVar8;
                piVar18 = (int *)CONCAT31(uVar20,bVar8 | (byte)*puVar43);
                puVar31 = puVar48;
                while( true ) {
                  puVar48 = puVar31 + (uint)bVar50 * -2 + 1;
                  out(*puVar31,(short)pbVar30);
                  pbVar30 = pbVar30 + 1;
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  bVar25 = (byte)((uint)pcVar13 >> 8) | *pbVar30;
                  uVar20 = (undefined3)((uint)piVar18 >> 8);
                  bVar8 = (byte)piVar18 ^ *pbVar30;
                  pcVar22 = (char *)CONCAT31(uVar20,bVar8);
                  cRam282b0000 = cRam282b0000 - bVar25;
                  *pcVar22 = *pcVar22 + bVar8;
                  pbVar46 = pbVar38 + -*(int *)pbVar30;
                  uStack_c8 = (undefined1)in_DS;
                  uStack_c7 = (undefined1)(in_DS >> 8);
                  bVar5 = *(byte *)((int)puVar32 + 0x17);
                  *pcVar22 = *pcVar22 + bVar8;
                  puVar31 = (uint *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                             CONCAT11(bVar25 + bVar5 | *pbVar30,(char)pcVar13));
                  *(byte *)puVar43 = (byte)*puVar43 + (char)puVar43;
                  *(byte *)((int)pcVar22 * 2) = *(byte *)((int)pcVar22 * 2) ^ bVar8;
                  in_AF = 9 < (bVar8 & 0xf) | in_AF;
                  bVar8 = bVar8 + in_AF * -6;
                  pbVar11 = (byte *)CONCAT31(uVar20,bVar8 + (0x9f < bVar8 | in_AF * (bVar8 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
                  *(char *)((int)pbVar11 * 2) =
                       *(char *)((int)pbVar11 * 2) + (char)((uint)pbVar30 >> 8);
                  bVar49 = CARRY1((byte)*puVar31,(byte)pbVar30);
                  *(byte *)puVar31 = (byte)*puVar31 + (byte)pbVar30;
                  uVar10 = in_DS;
                  uVar4 = (ushort)puStack_78;
GenerateStatusText:
                  in_DS = uVar4;
                  pbVar38 = pbVar46;
                  uStack_c4 = in_DS;
                  if (!bVar49) break;
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  iVar17 = CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | *pbVar30);
                  uVar27 = (undefined2)((uint)puVar43 >> 0x10);
                  cVar34 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + 0x7d);
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  *(byte *)puVar32 = (byte)*puVar32 - (char)((uint)puVar31 >> 8);
                  iVar17 = iVar17 - *(int *)(&uRam0b0a0000 + iVar17);
                  cVar9 = *(char *)(CONCAT22(uVar27,CONCAT11(cVar34,(char)puVar43)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar48,(short)pbVar30);
                  pbVar30 = (byte *)CONCAT22(uStack_c6,CONCAT11(uStack_c7,uStack_c8));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar31 = puVar48 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
                  out(puVar48[(uint)bVar50 * -2 + 1],CONCAT11(uStack_c7,uStack_c8));
                  pbVar38 = pbVar46 + 1;
                  cVar7 = (char)iVar17;
                  pcVar13 = (char *)CONCAT22((short)((uint)iVar17 >> 0x10),
                                             CONCAT11((byte)((uint)iVar17 >> 8) |
                                                      *(byte *)((int)puVar32 + 0x46),cVar7));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_78._0_2_ = CONCAT11(uStack_c7,uStack_c8);
                  uVar20 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar31,0xf0)) >> 8);
                  piVar18 = (int *)CONCAT31(uVar20,0x5f);
                  puVar32 = (uint *)((int)puVar32 + 1);
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  puVar43 = (uint *)CONCAT22(uVar27,CONCAT11(cVar34 + cVar9 | (byte)puVar31[-0x20],
                                                             (char)puVar43));
                  *(char *)piVar18 = (char)*piVar18 + '_';
                  puVar48 = (uint *)CONCAT31(uVar20,0x8c);
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
                    pbVar11 = (byte *)CONCAT31(uVar20,0x83);
                    puVar48 = puVar43;
                    goto code_r0x00405312;
                  }
                  *puVar48 = (uint)(*puVar48 + (int)puVar48);
                  piVar18 = (int *)(CONCAT31(uVar20,(byte)puVar48[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar48[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar18 = (int *)((int)piVar18 + *puVar31);
                }
              }
              *pbVar30 = *pbVar30 + bVar8;
              *(byte *)puVar43 = (byte)*puVar43 - (char)pbVar30;
              *pbVar11 = *pbVar11 + bVar8;
              pbVar11 = (byte *)CONCAT31(uVar20,bVar8 | (byte)*puVar43);
            }
            else {
              cVar9 = (char)puVar31;
              *pbVar30 = *pbVar30 + cVar9;
              *(byte **)pbVar11 = pbVar30 + *(int *)pbVar11;
              *pbVar11 = *pbVar11 + bVar8;
              bVar8 = bVar8 + *pbVar11;
              pbVar11 = (byte *)CONCAT31(uVar20,bVar8);
              if (-1 < (char)bVar8) {
                *(byte *)puVar43 = (byte)*puVar43 + bVar25;
                out(*puVar48,(short)pbVar30);
                pbVar30 = pbVar30 + 1;
                *pbVar11 = *pbVar11 + bVar8;
                puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                           bVar25 | (byte)((uint)iVar17 >> 8));
                cVar7 = bVar8 - (byte)*puVar31;
                pcVar13 = (char *)CONCAT31(uVar20,cVar7);
                *pcVar13 = *pcVar13 + cVar7 + (bVar8 < (byte)*puVar31);
                *pbVar30 = *pbVar30 + cVar7;
                pcVar13 = (char *)((int)pcVar13 * 2 + 0x79);
                *pcVar13 = *pcVar13 + (char)((uint)pbVar30 >> 8);
                pbVar11 = (byte *)in((short)pbVar30);
                puVar48 = puVar48 + (uint)bVar50 * -2 + 1;
              }
              *(byte *)puVar48 = (byte)*puVar48 + cVar9;
              *pbVar11 = *pbVar11 + (char)pbVar11;
              *pbVar11 = *pbVar11 + (char)pbVar11;
              uStack_c8 = (undefined1)in_DS;
              uStack_c7 = (undefined1)(in_DS >> 8);
              bVar5 = *pbVar11;
              bVar6 = (byte)((uint)puVar31 >> 8);
              bVar25 = bVar6 + *pbVar11;
              iVar17 = *(int *)pbVar11;
              *pbVar30 = *pbVar30 + cVar9;
              bVar8 = (char)(pbVar11 + (uint)CARRY1(bVar6,bVar5) + iVar17) - (byte)*puVar43;
              pbVar11 = (byte *)CONCAT31((int3)((uint)(pbVar11 + (uint)CARRY1(bVar6,bVar5) + iVar17)
                                               >> 8),bVar8);
              *(byte *)puVar43 = (byte)*puVar43 ^ bVar8;
              *pbVar38 = *pbVar38 + (char)puVar43;
              *pbVar11 = *pbVar11 + bVar8;
              *pbVar11 = *pbVar11 + bVar8;
              *pbVar11 = *pbVar11 + bVar8;
              puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                         CONCAT11(bVar25 + *pbVar11,cVar9));
              pbVar11 = pbVar11 + (uint)CARRY1(bVar25,*pbVar11) + *(int *)pbVar11;
              *pbVar30 = *pbVar30 + cVar9;
              puVar48 = (uint *)((int)puVar48 + *(int *)(pbVar30 + 0x3e));
            }
            *(byte *)puVar48 = (byte)*puVar48 + (char)pbVar11;
            cVar9 = (char)pbVar11 + 'r';
            puVar48 = (uint *)((int)puVar48 + -1);
            uVar39 = CONCAT31((int3)((uint)pbVar11 >> 8),cVar9);
            *(byte *)puVar48 = *(byte *)puVar48 + cVar9;
            bVar49 = 0xfff38f8d < uVar39;
            iVar17 = uVar39 + 0xc7072;
            pbVar46 = pbVar38;
          } while (SCARRY4(uVar39,0xc7072));
        } while( true );
      }
      *pcVar13 = *pcVar13 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar11 = (byte *)CONCAT31(uVar20,bVar5);
      bVar8 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      uVar20 = (undefined3)
               ((uint)(pbVar11 + (uint)CARRY1(bVar8,bVar5) + *(int *)((int)puVar31 + (int)pbVar30))
               >> 8);
      cVar7 = (char)(pbVar11 + (uint)CARRY1(bVar8,bVar5) + *(int *)((int)puVar31 + (int)pbVar30)) +
              'E';
      pcVar13 = (char *)CONCAT31(uVar20,cVar7);
      *pcVar13 = *pcVar13 + cVar7;
      cVar7 = cVar7 + *pcVar13;
      pcVar13 = (char *)CONCAT31(uVar20,cVar7);
      *pcVar13 = *pcVar13 + cVar7;
      puVar48 = (uint *)CONCAT31(uVar20,cVar7 + *pcVar13);
      *(char *)puVar48 = (char)*puVar48 + cVar7 + *pcVar13;
      pbVar11 = (byte *)((uint)puVar48 | *puVar48);
      bVar5 = *pbVar11;
      bVar8 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar8;
      piVar18 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar8 + CARRY1(bVar5,bVar8));
      puVar48 = puVar47;
code_r0x00405117:
      *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
      puVar43 = (uint *)((int)puVar43 - *puVar43);
      puVar47 = puVar48 + (uint)bVar50 * -2 + 1;
      out(*puVar48,uVar27);
    }
    *pbVar30 = *pbVar30 + (char)puVar31;
    bVar49 = puVar43 < (uint *)*piVar18;
    puVar43 = (uint *)((int)puVar43 - *piVar18);
    bVar5 = (byte)((uint)puVar31 >> 8);
    *(byte *)((int)puVar32 + 0x39) = (*(byte *)((int)puVar32 + 0x39) - bVar5) - bVar49;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    uVar39 = *puVar43;
    *(int *)((int)puVar32 + 0x39) = *(int *)((int)puVar32 + 0x39) - (int)pbVar46;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar39 | (byte)*puVar43,(char)puVar31));
    *(char *)(piVar18 + 10) = (char)piVar18[10] + cVar9;
  } while( true );
code_r0x004052ee:
  *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
  bVar5 = (char)piVar18 + 0x28;
  pbVar11 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),bVar5);
  *pbVar11 = *pbVar11 ^ bVar5;
  *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)pcVar13 >> 8);
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + (byte)pcVar13;
  piVar18 = (int *)(((uint)pbVar11 | 0x1496f09) + *puVar32 + (uint)CARRY1(bVar5,(byte)pcVar13));
  puVar23 = puVar31 + (uint)bVar50 * -2 + 1;
  out(*puVar31,(short)pbVar30);
  pbVar46 = pbVar30 + -1;
  *piVar18 = *piVar18 + (int)piVar18;
  pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),(byte)pbVar46 | (byte)*puVar43);
  cVar9 = (char)piVar18 + '\x13';
  pbVar11 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),cVar9);
  puVar48 = puVar43;
  puVar31 = puVar23;
  if ((POPCOUNT(cVar9) & 1U) != 0) {
    *pbVar30 = *pbVar30 - (char)((uint)pbVar46 >> 8);
    *pbVar11 = *pbVar11 + cVar9;
code_r0x00405396:
    bVar5 = *pbVar11;
    bVar8 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar8;
    *puVar23 = (uint)(pbVar11 + (uint)CARRY1(bVar5,bVar8) + *puVar23);
    out(*puVar23,(short)pbVar30);
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    pcVar13 = (char *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                               CONCAT11((byte)((uint)pbVar11 >> 8) |
                                        (byte)puVar23[(uint)bVar50 * -2 + 1],bVar8));
    *(char **)((int)puVar32 + -1) = pcVar13 + *(int *)((int)puVar32 + -1);
    out(puVar23[(uint)bVar50 * -2 + 1],(short)pbVar30);
    *pcVar13 = *pcVar13 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar11 = *pbVar11 + (char)pbVar11;
  piVar18 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),(char)pbVar11 + 'o');
  puVar43 = (uint *)((int)puVar48 + -1);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar20 = (undefined3)((uint)pbVar30 >> 8);
  piVar18 = (int *)((int)piVar18 + 0x1b7e);
  bVar25 = (byte)pbVar30 | *(byte *)puVar43 | *(byte *)puVar43;
  iRam04115f2c = iRam04115f2c + (int)piVar18;
  out(*puVar31,(short)CONCAT31(uVar20,bVar25));
  *piVar18 = *piVar18 + (int)piVar18;
  bVar25 = bVar25 | (byte)piVar18;
  iVar33 = CONCAT31(uVar20,bVar25);
  pbVar30 = (byte *)((int)piVar18 - *piVar18);
  cVar9 = (char)pbVar30;
  *pcVar13 = *pcVar13 + cVar9;
  cVar7 = (char)pcVar13 - bVar25;
  *pbVar30 = *pbVar30 + cVar9;
  uVar27 = (undefined2)((uint)pcVar13 >> 0x10);
  bVar8 = (byte)((uint)pcVar13 >> 8) | *pbVar30;
  pbVar38 = pbVar38 + -1;
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  bVar5 = *(byte *)(CONCAT22(uVar27,CONCAT11(bVar8,cVar7)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar30;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar38;
  *pbVar30 = *pbVar30 + cVar9;
  bVar5 = bVar8 | bVar5 | *(byte *)puVar43;
  iVar24 = CONCAT22(uVar27,CONCAT11(bVar5,cVar7));
  pbVar46 = (byte *)((uint)(puVar31 + (uint)bVar50 * -2 + 1) ^ *(uint *)(iVar33 + -0x43));
  iVar17 = *(int *)pbVar30;
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  if (SCARRY4(iVar17,(int)pbVar30)) {
    *pbVar30 = *pbVar30 + cVar9;
  }
  pbVar11 = pbVar30 + 0x5674;
  puVar32 = (uint *)((int)puVar32 +
                    (-(uint)((byte *)0xffffa98b < pbVar30) - *(int *)(pbVar46 + -0x7f)));
  bVar8 = (byte)pbVar11;
  *pbVar11 = *pbVar11 + bVar8;
  uVar21 = (undefined3)((uint)pbVar11 >> 8);
  bVar6 = bVar8 + 0x2d;
  piVar18 = (int *)CONCAT31(uVar21,bVar6);
  *(uint *)(pbVar46 + (int)puVar32 * 8) =
       *(int *)(pbVar46 + (int)puVar32 * 8) + iVar33 + (uint)(0xd2 < bVar8);
  bVar8 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar6;
  if (!CARRY1(bVar8,bVar6)) {
    do {
      pbVar11 = (byte *)(iVar33 + 1);
      bVar8 = (byte)piVar18;
      *(byte *)piVar18 = (char)*piVar18 + bVar8;
      bVar25 = (byte)((uint)piVar18 >> 8);
      bVar6 = (byte)puVar43 | bVar25;
      puVar31 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar6);
      out(*(undefined4 *)pbVar46,(short)pbVar11);
      *(byte *)piVar18 = (char)*piVar18 + bVar8;
      uVar27 = (undefined2)((uint)iVar24 >> 0x10);
      cVar9 = (char)iVar24;
      pbVar30 = (byte *)CONCAT22(uVar27,CONCAT11((byte)((uint)iVar24 >> 8) | *pbVar11,cVar9));
      bVar5 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar8;
      *(byte *)piVar18 = (char)*piVar18 + bVar8 + CARRY1(bVar5,bVar8);
      *pbVar11 = *pbVar11 + bVar8;
      *(byte *)puVar32 = (byte)*puVar32 + bVar25;
      *(int *)((int)piVar18 * 2) =
           *(int *)((int)piVar18 * 2) + CONCAT22(uVar27,CONCAT11(0x1c,cVar9));
      *(byte *)piVar18 = (char)*piVar18 + bVar8;
      cVar7 = (char)pbVar11;
      *(byte *)puVar31 = (byte)*puVar31 + cVar7;
      *(byte *)((int)piVar18 * 2) = *(byte *)((int)piVar18 * 2) ^ bVar8;
      *(byte *)piVar18 = (char)*piVar18 + bVar8;
      pbVar30 = pbVar46 + (uint)bVar50 * -8 + 4 + (uint)bVar50 * -8 + 4;
      out(*(undefined4 *)(pbVar46 + (uint)bVar50 * -8 + 4),(short)pbVar11);
      piVar18 = &uRam0a0a0000;
      *pbVar11 = *pbVar11;
      bVar8 = cVar9 - cVar7;
      iVar24 = CONCAT22(uVar27,CONCAT11((byte)puVar32[0x14] | 0x1c | bRam0ca87216,bVar8));
      *pbVar11 = *pbVar11;
      bVar5 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar8;
      if (!CARRY1(bVar5,bVar8)) {
        piVar18 = &uRam1e7b7000;
        bVar5 = (byte)((uint)puVar43 >> 8) | *(byte *)(iVar33 + 3);
        puVar31 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar5,bVar6));
        if (bVar5 != 0) {
          pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar7 + pbVar30[(int)puVar32 * 8]);
          piVar18 = (int *)0x6d7d7000;
          iVar24 = iVar24 + 1;
        }
      }
      *piVar18 = *piVar18 + (int)piVar18;
      iVar33 = CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 | pbVar30[(int)puVar32 * 8]);
      *(char *)piVar18 = (char)*piVar18;
      piVar18 = (int *)CONCAT31((int3)((uint)piVar18 >> 8),0xf9);
      *puVar32 = (uint)((int)piVar18 + *puVar32 + 1);
      pbVar46 = pbVar30 + (uint)bVar50 * -8 + 4;
      out(*(undefined4 *)pbVar30,(short)iVar33);
      puVar43 = puVar31;
    } while( true );
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar6 = bVar6 | *(byte *)((int)piVar18 + 0x4000081);
  piVar18 = (int *)CONCAT31(uVar21,bVar6);
  if ('\0' < (char)bVar6) {
    *(byte *)piVar18 = (char)*piVar18 + bVar6;
    puVar31 = (uint *)CONCAT31(uVar21,bVar6 + 0x28);
    *puVar31 = *puVar31 ^ (uint)puVar31;
    *(byte *)puVar43 = *(byte *)puVar43 + bVar5;
    cVar9 = (bVar6 + 0x28) - bVar5;
    pcVar13 = (char *)CONCAT31(uVar21,cVar9);
    *pcVar13 = *pcVar13 + cVar9;
    pbVar30 = (byte *)CONCAT31(uVar20,bVar25 | *(byte *)puVar43);
    pcVar22 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((char)((uint)puVar43 >> 8) + *(byte *)((int)puVar48 + 0x7d),
                                        (char)puVar43));
    *pcVar13 = *pcVar13 + cVar9;
    pbVar11 = (byte *)CONCAT31(uVar21,cVar9 + 0x39U ^ *(byte *)CONCAT31(uVar21,cVar9 + 0x39U));
    *pcVar22 = *pcVar22 + bVar5;
    puVar23 = (uint *)(pbVar46 + (uint)bVar50 * -8 + 4);
    out(*(undefined4 *)pbVar46,(short)pbVar30);
    goto code_r0x00405396;
  }
  puVar31 = (uint *)(pbVar46 + (uint)bVar50 * -8 + 4);
  out(*(undefined4 *)pbVar46,(short)iVar33);
  pcVar13 = (char *)(iVar24 + -1);
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pbVar30 = (byte *)CONCAT31(uVar20,bVar25 | *(byte *)puVar43);
  goto code_r0x004052ee;
}


