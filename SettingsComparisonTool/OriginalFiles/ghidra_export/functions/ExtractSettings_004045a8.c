/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004045a8
 * Raw Name    : ExtractSettings
 * Demangled   : ExtractSettings
 * Prototype   : int ExtractSettings(char * extractOptions, uint * statusTextProvider)
 * Local Vars  : extractOptions, statusTextProvider, uStack_c3, uStack_c4, uStack_c0, uStack_c2, puStack_80, uStack_84, pbStack_78, iStack_7c, uStack_70, puStack_74, puStack_68, puStack_6c, puStack_60, pbStack_64, pbStack_58, pbStack_5c, pcStack_50, puStack_54, puStack_48, puStack_4c, pcStack_40, iStack_44, uStack_38, uStack_3c, uStack_30, uStack_34, uStack_28, uStack_2c, uStack_20, uStack_24, uStack_18, puStack_1c, pcStack_10, uStack_14, uStack_8, uStack_c, uVar1, pcStack_4, uVar3, uVar2, cVar5, uVar4, bVar7, cVar6, uVar9, bVar8, pcVar10, in_EAX, pcVar12, pbVar11, uVar14, puVar13, iVar16, puVar15, puVar18, piVar17, uVar20, uVar19, iVar22, puVar21, uVar24, bVar23, bVar26, uVar25, iVar28, puVar27, bVar30, cVar29, cVar32, uVar31, pbVar33, unaff_EBX, cVar35, uVar34, cVar37, bVar36, unaff_EBP, ppbVar38, ppbVar40, puVar39, unaff_ESI, ppbVar41, pbVar43, pbVar42, unaff_EDI, puVar44, puVar46, pbVar45, in_ES, puVar47, in_SS, in_CS, in_CF, in_DS, in_AF, bVar48, uVar50, bVar49
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
/* WARNING: Removing unreachable block (ram,0x004046c4) */
/* WARNING: Removing unreachable block (ram,0x004046d0) */
/* WARNING: Removing unreachable block (ram,0x004046e3) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __fastcall ExtractSettings(char *extractOptions,uint *statusTextProvider)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  undefined4 in_EAX;
  undefined3 uVar19;
  char *pcVar10;
  byte *pbVar11;
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
  undefined2 uVar25;
  int iVar22;
  byte bVar26;
  char cVar29;
  byte bVar30;
  uint *puVar27;
  int iVar28;
  undefined1 uVar31;
  char cVar32;
  char cVar35;
  uint *unaff_EBX;
  byte bVar36;
  byte *pbVar33;
  char cVar37;
  uint uVar34;
  byte **ppbVar38;
  int unaff_EBP;
  uint *puVar39;
  byte **ppbVar40;
  byte **ppbVar41;
  byte *unaff_ESI;
  byte *pbVar42;
  byte *pbVar43;
  uint *puVar44;
  uint *unaff_EDI;
  byte *pbVar45;
  uint *puVar46;
  uint *puVar47;
  ushort in_ES;
  undefined2 in_CS;
  ushort in_SS;
  ushort in_DS;
  byte in_CF;
  bool bVar48;
  byte in_AF;
  bool bVar49;
  undefined8 uVar50;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined2 uStack_c2;
  ushort uStack_c0;
  ushort uStack_84;
  uint *puStack_80;
  int iStack_7c;
  byte *pbStack_78;
  uint *puStack_74;
  ushort uStack_70;
  uint *puStack_6c;
  uint *puStack_68;
  byte *pbStack_64;
  uint *puStack_60;
  byte *pbStack_5c;
  byte *pbStack_58;
  uint *puStack_54;
  char *pcStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  int iStack_44;
  char *pcStack_40;
  ushort uStack_3c;
  ushort uStack_38;
  ushort uStack_34;
  ushort uStack_30;
  ushort uStack_2c;
  ushort uStack_28;
  ushort uStack_24;
  ushort uStack_20;
  undefined *puStack_1c;
  ushort uStack_18;
  ushort uStack_14;
  char *pcStack_10;
  ushort uStack_c;
  undefined4 uStack_8;
  char *pcStack_4;
  
  bVar49 = false;
                    /* .NET CLR Managed Code */
  bVar8 = (byte)in_EAX + 0xb;
  uVar19 = (undefined3)((uint)in_EAX >> 8);
  cVar5 = bVar8 + in_CF;
  piVar17 = (int *)CONCAT31(uVar19,cVar5);
  if ((byte)in_EAX < 0xf5 && !CARRY1(bVar8,in_CF)) {
    *(char *)piVar17 = (char)*piVar17 + cVar5;
code_r0x004045bc:
    uVar19 = (undefined3)((uint)piVar17 >> 8);
    bVar7 = (byte)piVar17 + 0x2d;
    pbVar45 = (byte *)CONCAT31(uVar19,bVar7);
    *(uint *)(unaff_ESI + (int)unaff_EDI * 8) =
         (int)statusTextProvider +
         (uint)(0xd2 < (byte)piVar17) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_ES);
    uVar34 = (uint)statusTextProvider & 0xffffff00;
    bVar8 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar7;
    if (!CARRY1(bVar8,bVar7)) {
      *pbVar45 = *pbVar45 + bVar7;
      bVar8 = *(byte *)(uVar34 - 0x66);
      uVar9 = (ushort)(uVar34 >> 0x10);
      bVar7 = bVar7 | *pbVar45;
      bVar49 = (in_ES & 0x400) != 0;
      in_AF = (in_ES & 0x10) != 0;
      *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
      bVar7 = bVar7 | *unaff_ESI;
      puVar39 = (uint *)CONCAT31(uVar19,bVar7);
      pbVar45 = unaff_ESI + (uint)bVar49 * -8 + 4;
      out(*(undefined4 *)unaff_ESI,(short)CONCAT21(uVar9,(byte)(uVar34 >> 8) | bVar8) << 8);
      bVar36 = (byte)extractOptions;
      *puVar39 = *puVar39 << (bVar36 & 0x1f) | *puVar39 >> 0x20 - (bVar36 & 0x1f);
      *pbVar45 = *pbVar45 + bVar7;
      bVar7 = (bVar7 - 0x2a) + (bVar7 < 0x28);
      piVar17 = (int *)CONCAT31(uVar19,bVar7);
      uStack_8 = CONCAT22(uStack_8._2_2_,in_ES);
      statusTextProvider = (uint *)((uint)uVar9 << 0x10);
      bVar8 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar7;
      if (CARRY1(bVar8,bVar7)) {
        *piVar17 = *piVar17 + (int)piVar17;
        puVar39 = (uint *)(CONCAT31(uVar19,bVar7 | (byte)*unaff_EDI) + -0x6fe080d);
        uVar34 = *puVar39;
        *puVar39 = (uint)(*puVar39 + (int)puVar39);
        uStack_8 = CONCAT22(uStack_8._2_2_,in_ES);
        unaff_ESI = pbVar45;
        if (CARRY4(uVar34,(uint)puVar39)) {
          *puVar39 = *puVar39 + (int)puVar39;
          extractOptions =
               (char *)CONCAT31((int3)((uint)extractOptions >> 8),bVar36 | (byte)*unaff_EBX);
          goto code_r0x0040460b;
        }
      }
      else {
        *(byte *)statusTextProvider = (byte)*statusTextProvider + bVar36;
        puVar39 = (uint *)((uint)piVar17 | *unaff_EDI);
code_r0x0040460b:
        *(undefined1 *)((int)puVar39 * 2) = *(undefined1 *)((int)puVar39 * 2);
        bVar8 = (byte)puVar39;
        *pbVar45 = *pbVar45 + bVar8;
        unaff_ESI = pbVar45 + (uint)bVar49 * -8 + 4;
        out(*(undefined4 *)pbVar45,0);
        puVar39 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar39 >> 0x10),
                                                   CONCAT11(bVar8 / 0,bVar8)) >> 8),bVar8 % 0);
        *unaff_ESI = *unaff_ESI + bVar8 % 0;
        unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *unaff_ESI);
      }
      extractOptions =
           (char *)CONCAT22((short)((uint)extractOptions >> 0x10),
                            CONCAT11((char)((uint)extractOptions >> 8) + (char)*puVar39,
                                     (char)extractOptions));
      *(char *)puVar39 = (char)*puVar39;
      piVar17 = (int *)CONCAT22((short)((uint)puVar39 >> 0x10),
                                CONCAT11((char)((uint)puVar39 >> 8) - unaff_ESI[2],(char)puVar39));
      goto code_r0x00404620;
    }
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    bVar7 = bVar7 | pbVar45[0x4000066];
    pcVar12 = (char *)CONCAT31(uVar19,bVar7);
    if ('\0' < (char)bVar7) {
      *pcVar12 = *pcVar12 + bVar7;
      return CONCAT31(uVar19,bVar7 + 0x73);
    }
code_r0x00404638:
    pcStack_10 = (char *)CONCAT22(pcStack_10._2_2_,in_DS);
    cVar5 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar5;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11((char)((uint)pcVar12 >> 8) - unaff_ESI[3],cVar5));
    cVar29 = (char)unaff_EBX;
    cVar35 = (char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[0x1b];
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar35,cVar29));
    *pcVar12 = *pcVar12 + cVar5;
    *(byte *)unaff_EBX = (byte)*unaff_EBX ^ cVar5 + 4U;
    in_CS = 0x2a06;
    puStack_1c = &UNK_0040465a;
    uVar50 = func_0x0000b828();
    pcVar12 = pcStack_4;
    statusTextProvider = (uint *)((ulonglong)uVar50 >> 0x20);
    pbVar45 = (byte *)uVar50;
    bVar8 = *pbVar45;
    bVar7 = (byte)uVar50;
    *pbVar45 = *pbVar45 + bVar7;
    pbVar42 = unaff_ESI + (uint)CARRY1(bVar8,bVar7) + *(int *)pbVar45;
    uVar19 = (undefined3)((ulonglong)uVar50 >> 8);
    *pbVar45 = *pbVar45 + bVar7;
    cVar6 = (char)((uint)pcStack_4 >> 8);
    *pcStack_4 = *pcStack_4 + cVar6;
    bVar8 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar7;
    *statusTextProvider = (uint)(pbVar45 + (uint)CARRY1(bVar8,bVar7) + *statusTextProvider);
    bVar7 = bVar7 | *pbVar42;
    pcVar10 = (char *)CONCAT31(uVar19,bVar7);
    *pcVar10 = *pcVar10 + bVar7;
    cVar5 = bVar7 + *pcVar10;
    pcVar10 = (char *)CONCAT31(uVar19,cVar5);
    *pcVar10 = *pcVar10 + cVar5;
    pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_CS);
    *pcVar10 = *pcVar10 + cVar5;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar29;
    *pcVar10 = *pcVar10 + cVar5;
    *pcVar10 = *pcVar10 + cVar6;
    *pcVar10 = *pcVar10 + cVar5;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
    pcVar10 = (char *)(CONCAT31(uVar19,cVar5) ^ 3);
    pcVar12[0x73060000] = pcVar12[0x73060000] - cVar35;
    pbVar45 = (byte *)((int)unaff_EDI + (uint)bVar49 * -2 + 1);
    *(byte *)unaff_EDI = (byte)pcVar10;
    *pcVar10 = *pcVar10 + (byte)pcVar10;
    uStack_8 = CONCAT22(uStack_8._2_2_,in_ES);
    unaff_ESI = pbVar42 + (uint)bVar49 * -2 + 1;
    bVar8 = *pbVar42;
    *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
    uStack_c = in_ES;
    pcVar12 = (char *)CONCAT31(uVar19,(bVar8 - (byte)*unaff_EBX) + '(');
    unaff_EDI = (uint *)(pbVar45 + (uint)bVar49 * -2 + 1);
    bVar8 = in((short)((ulonglong)uVar50 >> 0x20));
    *pbVar45 = bVar8;
code_r0x004046a4:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    uStack_20 = in_ES;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    bVar8 = (char)pcVar12 - (byte)*unaff_EBX;
    bVar7 = bVar8 + 0x28;
    pbVar45 = (byte *)CONCAT31(uVar19,bVar7);
    extractOptions = &cRam14060000;
    puVar39 = unaff_EBX;
    puVar46 = unaff_EDI;
    if (0xd7 < bVar8) {
      *pbVar45 = *pbVar45 + bVar7;
      uStack_c = in_ES;
      statusTextProvider =
           (uint *)CONCAT22((short)((uint)statusTextProvider >> 0x10),
                            CONCAT11((char)((uint)statusTextProvider >> 8) -
                                     *(byte *)((int)statusTextProvider + -0x3a),
                                     (char)statusTextProvider));
      bVar8 = (bVar7 | *pbVar45) + cRam14060000;
      pcVar12 = (char *)CONCAT31(uVar19,bVar8);
      uVar34 = *statusTextProvider;
      *(byte *)statusTextProvider = (byte)*statusTextProvider;
      if ((POPCOUNT((byte)*statusTextProvider) & 1U) == 0) {
        extractOptions = &cRam14060000;
        if ((byte)*statusTextProvider == 0 ||
            SCARRY1((byte)uVar34,'\0') != (char)(byte)*statusTextProvider < '\0')
        goto code_r0x0040475f;
        *pcVar12 = *pcVar12 + bVar8;
        piVar17 = (int *)CONCAT31(uVar19,bVar8 + 0x2d);
        *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
             (byte *)((int)statusTextProvider +
                     (uint)(0xd2 < bVar8) + *(int *)(unaff_ESI + (int)unaff_EDI * 8));
        uStack_3c = in_ES;
        uRam7305fffc = in_CS;
        *piVar17 = *piVar17 + (int)piVar17;
        bVar8 = bVar8 + 0x2d | *(byte *)((int)piVar17 + 0x400006d);
        pcVar12 = (char *)CONCAT31(uVar19,bVar8);
        if ((char)bVar8 < '\x01') goto code_r0x00404777;
        *pcVar12 = *pcVar12 + bVar8;
        pcVar12 = (char *)CONCAT31(uVar19,bVar8 + 0x10);
        *statusTextProvider = (uint)(pcVar12 + *statusTextProvider);
      }
      goto code_r0x00404710;
    }
  }
  else {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_ES);
    pcVar12 = (char *)(CONCAT31(uVar19,cVar5) | 8);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x3c));
    cVar5 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar5;
    cVar6 = cVar5 + '\x02';
    piVar17 = (int *)CONCAT31(uVar19,cVar6);
    if (cVar6 != '\0' && SCARRY1(cVar5,'\x02') == cVar6 < '\0') {
      *(char *)piVar17 = (char)*piVar17 + cVar6;
      goto code_r0x004045bc;
    }
code_r0x00404620:
    *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)statusTextProvider;
    *(byte *)piVar17 = (char)*piVar17 + (byte)piVar17;
    uVar19 = (undefined3)((uint)piVar17 >> 8);
    bVar8 = (byte)piVar17 | (byte)*unaff_EBX;
    bVar8 = bVar8 | *(byte *)CONCAT31(uVar19,bVar8);
    *unaff_ESI = *unaff_ESI + bVar8;
    bVar7 = bVar8 + (byte)*unaff_EBX;
    pcVar12 = (char *)CONCAT31(uVar19,bVar7);
    if (SCARRY1(bVar8,(byte)*unaff_EBX) != (char)bVar7 < '\0') {
      *pcVar12 = *pcVar12 + bVar7;
      pcVar12 = (char *)CONCAT31(uVar19,bVar7 + 0x2a);
      goto code_r0x00404638;
    }
    bVar8 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar7;
    if (CARRY1(bVar8,bVar7)) goto code_r0x004046a4;
code_r0x00404710:
    pbVar45 = unaff_ESI + (uint)bVar49 * -8 + 4;
    out(*(undefined4 *)unaff_ESI,(short)statusTextProvider);
    pcStack_10 = extractOptions;
    *pcVar12 = *pcVar12 + (byte)pcVar12;
    uStack_14 = in_ES;
    uStack_18 = in_SS;
    *extractOptions = *extractOptions + '\x01';
    puStack_1c = (undefined *)CONCAT22(puStack_1c._2_2_,in_SS);
    *extractOptions = *extractOptions + '\x01';
    bVar8 = (byte)pcVar12 | (byte)*statusTextProvider;
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar8);
    unaff_ESI = pbVar45 + (uint)bVar49 * -8 + 4;
    out(*(undefined4 *)pbVar45,(short)statusTextProvider);
    puVar46 = (uint *)((int)unaff_EDI + -1);
    *pcVar12 = *pcVar12 + bVar8;
    uStack_20 = in_ES;
    pbVar45 = (byte *)((int)((uint)pcVar12 | *puVar46) + *(int *)((uint)pcVar12 | *puVar46));
    *pbVar45 = *pbVar45 + (char)pbVar45;
    puVar39 = unaff_EBX;
  }
  cVar5 = (char)pbVar45 + *pbVar45;
  puVar21 = (uint *)CONCAT31((int3)((uint)pbVar45 >> 8),cVar5);
  *(char *)puVar21 = (char)*puVar21 + cVar5;
  *puVar21 = *puVar21 & (uint)puVar21;
  *(char *)puVar21 = (char)*puVar21 + cVar5;
  pbVar42 = (byte *)((int)puVar21 + 1);
  cVar5 = (char)pbVar42;
  *pbVar42 = *pbVar42 + cVar5;
  uVar34 = *puVar39;
  bVar8 = (byte)((uint)extractOptions >> 8);
  *(byte *)puVar39 = (byte)*puVar39 + bVar8;
  pbVar45 = unaff_ESI;
  if (CARRY1((byte)uVar34,bVar8)) {
    pbVar45 = unaff_ESI + (uint)bVar49 * -8 + 4;
    out(*(undefined4 *)unaff_ESI,(short)statusTextProvider);
    puVar46 = (uint *)((int)puVar46 + -1);
  }
  *pbVar42 = *pbVar42 + cVar5;
  uStack_24 = in_ES;
  puVar21 = (uint *)CONCAT22((short)((uint)extractOptions >> 0x10),
                             CONCAT11(bVar8 + *(byte *)((int)puVar46 + 0x49),(char)extractOptions));
  *pbVar42 = *pbVar42 + cVar5;
  uStack_28 = in_ES;
  *(byte *)(puVar39 + 0x818000) = (byte)puVar39[0x818000] - (char)((uint)puVar39 >> 8);
  out(*(undefined4 *)pbVar45,(short)statusTextProvider);
  unaff_EBX = (uint *)((int)puVar39 + -1);
  *pbVar42 = *pbVar42 + cVar5;
  uStack_2c = in_ES;
  pbVar45 = pbVar45 + *(int *)((int)puVar39 + -0x7f) + (uint)bVar49 * -8 + 4;
  *pbVar42 = *pbVar42 + cVar5;
  do {
    uStack_34 = in_ES;
    cVar5 = (char)pbVar42 - (byte)*statusTextProvider;
    pcVar12 = (char *)CONCAT31((int3)((uint)pbVar42 >> 8),cVar5);
    unaff_ESI = pbVar45 + (uint)bVar49 * -8 + 4;
    out(*(undefined4 *)pbVar45,(short)statusTextProvider);
    unaff_EDI = (uint *)((int)puVar46 + -1);
    *pcVar12 = *pcVar12 + cVar5;
    uStack_38 = in_ES;
    extractOptions =
         (char *)CONCAT22((short)((uint)puVar21 >> 0x10),
                          CONCAT11((char)((uint)puVar21 >> 8) + (byte)puVar46[0x12],(char)puVar21));
code_r0x0040475f:
    cVar5 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar5;
    uStack_3c = in_ES;
    *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
    out(*(undefined4 *)unaff_ESI,(short)statusTextProvider);
    pbVar45 = (byte *)((int)unaff_EBX + -1);
    *pcVar12 = *pcVar12 + cVar5;
    pcStack_40 = (char *)CONCAT22(pcStack_40._2_2_,in_ES);
    iStack_44 = CONCAT22(iStack_44._2_2_,in_ES);
    unaff_ESI = unaff_ESI + *(int *)((int)unaff_EBX + -0x71) + (uint)bVar49 * -8 + 4;
    *pcVar12 = *pcVar12 + cVar5;
    puStack_48 = (uint *)CONCAT22(puStack_48._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                                 CONCAT11((char)((uint)pbVar45 >> 8) - unaff_ESI[0x6e],(char)pbVar45
                                         ));
    puVar46 = unaff_EDI;
code_r0x00404777:
    bVar8 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar8;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    puVar39 = (uint *)(unaff_ESI + (int)puVar46 * 8);
    uVar34 = *puVar39;
    uVar1 = *puVar39;
    *puVar39 = (uint)((byte *)(uVar1 + (int)statusTextProvider) + (0xd2 < bVar8));
    puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,in_ES);
    puVar39 = (uint *)0x73060000;
    cVar6 = bVar8 + 0x2e +
            (CARRY4(uVar34,(uint)statusTextProvider) ||
            CARRY4(uVar1 + (int)statusTextProvider,(uint)(0xd2 < bVar8)));
    *(byte *)statusTextProvider = (byte)*statusTextProvider + (char)extractOptions;
    *unaff_ESI = *unaff_ESI;
    cVar5 = cVar6 + '~';
    pcVar10 = (char *)CONCAT31(uVar19,cVar5);
    out(*unaff_ESI,(short)statusTextProvider);
    *pcVar10 = *pcVar10 + cVar5;
    cVar6 = cVar6 + -0x80;
    pcVar10 = (char *)CONCAT31(uVar19,cVar6);
    out(*(undefined4 *)(unaff_ESI + (uint)bVar49 * -2 + 1),(short)statusTextProvider);
    puVar21 = (uint *)(extractOptions + -1);
    *pcVar10 = *pcVar10 + cVar6;
    pcStack_50 = (char *)CONCAT22(pcStack_50._2_2_,in_ES);
    *(byte *)puVar46 = (byte)*puVar46 - (char)((uint)pcVar12 >> 8);
    *pcVar10 = *pcVar10 + cVar6;
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,in_ES);
    *pcVar10 = *pcVar10 - (char)((uint)puVar21 >> 8);
    *pcVar10 = *pcVar10 + cVar6;
    pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_ES);
    pbStack_5c = (byte *)CONCAT22(pbStack_5c._2_2_,in_ES);
    pbVar45 = unaff_ESI + (uint)bVar49 * -2 + 1 +
              *(int *)((int)unaff_EBX + 9) + (uint)bVar49 * -8 + 4;
    *pcVar10 = *pcVar10 + cVar6;
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_ES);
    cVar5 = (char)statusTextProvider;
    cVar29 = (char)((uint)statusTextProvider >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    statusTextProvider =
         (uint *)CONCAT22((short)((uint)statusTextProvider >> 0x10),CONCAT11(cVar29,cVar5));
    *pcVar10 = *pcVar10 + cVar6;
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar31 = SUB41(unaff_EBX,0);
    bVar36 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)statusTextProvider + 0x36);
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(bVar36,uVar31));
    bVar7 = cVar6 + (byte)*unaff_EBX;
    pbVar42 = (byte *)CONCAT31(uVar19,bVar7);
    *(byte *)puVar46 = (byte)*puVar46 - cVar29;
    bVar8 = *pbVar42;
    *pbVar42 = *pbVar42 + bVar7;
    uStack_30 = in_ES;
  } while (!CARRY1(bVar8,bVar7));
  *pbVar42 = *pbVar42 + bVar7;
  bVar7 = bVar7 - *pbVar42;
  pbVar42 = (byte *)CONCAT31(uVar19,bVar7);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar5;
  *(byte *)statusTextProvider = (byte)*statusTextProvider ^ bVar7;
  extractOptions[0x2affffff] = extractOptions[0x2affffff] + bVar7;
  bVar8 = *pbVar42;
  *pbVar42 = *pbVar42 + bVar7;
  *unaff_EBX = (uint)(pbVar42 + (uint)CARRY1(bVar8,bVar7) + *unaff_EBX);
  pbVar11 = pbVar42 + -0x32a1702;
  if (pbVar11 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar11;
    puVar47 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + (byte)*statusTextProvider)
    ;
    puStack_6c = (uint *)CONCAT22(puStack_6c._2_2_,in_ES);
    pbVar42[-0xe0c891b] = pbVar42[-0xe0c891b] + cVar29;
    pbVar11 = pbVar42 + 0x19fd76e3;
    bVar8 = *pbVar11;
    *pbVar11 = *pbVar11 - bVar36;
    piVar17 = (int *)((uint)(pbVar42 + (bVar8 < bVar36) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar17 + 0x73) = *(char *)((int)piVar17 + 0x73) + cVar29;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar7 = bVar36 | *(byte *)((int)statusTextProvider + 2);
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(bVar7,uVar31));
    cVar5 = (char)piVar17;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      uVar19 = (undefined3)((uint)(pbVar42 + (bVar8 < bVar36) + 0x63fd76e4) >> 8);
      cVar6 = cVar5 + '\x06';
      if ((POPCOUNT(cVar6) & 1U) == 0) {
        *(char *)CONCAT31(uVar19,cVar6) = *(char *)CONCAT31(uVar19,cVar6) + cVar6;
        pbVar11 = (byte *)CONCAT31(uVar19,cVar5 + '.');
        puVar21 = puVar47;
        uStack_70 = in_SS;
        goto code_r0x00404803;
      }
      cVar5 = cVar6 + (byte)*unaff_EBX;
      pcVar12 = (char *)CONCAT31(uVar19,cVar5);
      if (SCARRY1(cVar6,(byte)*unaff_EBX) == cVar5 < '\0') {
code_r0x004048e7:
        pcVar12 = (char *)((uint)pcVar12 | 8);
        in_SS = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(statusTextProvider + 0x1cc18000) = (byte)statusTextProvider[0x1cc18000] + cVar5;
code_r0x0040486e:
      pcVar12 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),
                                 (byte)piVar17 & (byte)*statusTextProvider);
      puVar46 = (uint *)((int)puVar46 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar12 = *pcVar12 + (char)pcVar12;
    pbVar42 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '*');
    puStack_6c = (uint *)CONCAT22(puStack_6c._2_2_,in_DS);
    bVar8 = (byte)((uint)puVar47 >> 8);
    cVar5 = (char)puVar47;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar8 + *pbVar42,cVar5));
    pbVar42 = pbVar42 + (uint)CARRY1(bVar8,*pbVar42) + *(int *)pbVar42;
    *(byte *)statusTextProvider = (byte)*statusTextProvider + cVar5;
    bVar48 = (byte)pbVar42 < *pbVar42;
    pbVar42 = (byte *)CONCAT31((int3)((uint)pbVar42 >> 8),(byte)pbVar42 - *pbVar42);
code_r0x00404880:
    pbVar45 = pbVar45 + (uint)bVar48 + *(int *)pbVar42;
    uStack_70 = in_ES;
    while( true ) {
      bVar7 = (byte)pbVar42;
      pbVar42[0x2c000000] = pbVar42[0x2c000000] + bVar7;
      bVar8 = *pbVar42;
      *pbVar42 = *pbVar42 + bVar7;
      *statusTextProvider = (uint)(pbVar42 + (uint)CARRY1(bVar8,bVar7) + *statusTextProvider);
      *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)statusTextProvider;
      *pbVar42 = *pbVar42 + bVar7;
      puVar21 = (uint *)CONCAT31((int3)((uint)pbVar42 >> 8),bVar7 | (byte)*unaff_EBX);
code_r0x00404895:
      pcVar12 = (char *)((uint)puVar21 | *puVar21);
code_r0x00404899:
      cVar5 = (char)pcVar12;
      *pbVar45 = *pbVar45 + cVar5;
      uVar19 = (undefined3)((uint)pcVar12 >> 8);
      bVar8 = cVar5 + (byte)*unaff_EBX;
      pcVar12 = (char *)CONCAT31(uVar19,bVar8);
      bVar7 = (byte)((uint)puVar47 >> 8);
      uVar25 = (undefined2)((uint)puVar47 >> 0x10);
      cVar6 = (char)statusTextProvider;
      uVar9 = in_ES;
      if (SCARRY1(cVar5,(byte)*unaff_EBX) == (char)bVar8 < '\0') {
        *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar6;
        *pcVar12 = *pcVar12 + bVar8;
        puVar47 = (uint *)CONCAT22(uVar25,CONCAT11(bVar7 | (byte)*statusTextProvider,(char)puVar47))
        ;
        statusTextProvider = (uint *)((int)statusTextProvider + 1);
        pcVar12 = pcVar12 + *statusTextProvider;
        if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar12 = *pcVar12 + bVar8;
      bVar36 = bVar8 + 2;
      pcVar12 = (char *)CONCAT31(uVar19,bVar36);
      if (bVar8 < 0xfe) {
        *pbVar45 = *pbVar45 + bVar36;
        puVar21 = unaff_EBX;
        goto code_r0x004048f5;
      }
      *pcVar12 = *pcVar12 + bVar36;
      statusTextProvider =
           (uint *)CONCAT22((short)((uint)statusTextProvider >> 0x10),
                            CONCAT11((byte)((uint)statusTextProvider >> 8) |
                                     *(byte *)((int)unaff_EBX + -0x5b),cVar6));
      cVar5 = *pcVar12;
      *pcVar12 = *pcVar12 + bVar36;
      puStack_80 = (uint *)CONCAT22(puStack_80._2_2_,in_ES);
      if (SCARRY1(cVar5,bVar36) == *pcVar12 < '\0') goto code_r0x00404927;
      *pcVar12 = *pcVar12 + bVar36;
      bVar8 = bVar8 + 4;
      pbVar42 = (byte *)CONCAT31(uVar19,bVar8);
      if (0xfd < bVar36) break;
      *pbVar42 = *pbVar42 + bVar8;
      puVar47 = (uint *)CONCAT22(uVar25,CONCAT11(bVar7 | (byte)*statusTextProvider,(char)puVar47));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
      *pbVar45 = *pbVar45 ^ bVar8;
    }
    *pbVar42 = *pbVar42 + bVar8;
    puStack_74 = (uint *)((uint)puStack_74 & 0xffff0000);
  }
  else {
    pbVar42[0x6fdbe8fe] = pbVar42[0x6fdbe8fe] + (char)pbVar11;
code_r0x00404803:
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar20 = (undefined3)((uint)puVar21 >> 8);
    bVar7 = (byte)puVar21 | (byte)*unaff_EBX;
    puVar47 = (uint *)CONCAT31(uVar20,bVar7);
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar6 = (char)unaff_EBX;
    cVar35 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x6f);
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(cVar35,cVar6));
    bVar8 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar8;
    bVar48 = 0xf9 < bVar8;
    uVar19 = (undefined3)((uint)pbVar11 >> 8);
    cVar5 = bVar8 + 6;
    pbVar42 = (byte *)CONCAT31(uVar19,cVar5);
    in_SS = uStack_70;
    if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404880;
    *pbVar42 = *pbVar42 + cVar5;
    piVar17 = (int *)CONCAT31(uVar19,bVar8 + 0x2e);
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar7 = bVar7 | *(byte *)((int)statusTextProvider + (int)piVar17);
    puVar47 = (uint *)CONCAT31(uVar20,bVar7);
    in_SS = (ushort)puStack_6c;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      puVar21 = (uint *)((int)piVar17 + *piVar17);
      *(byte *)statusTextProvider = (byte)*statusTextProvider + bVar7;
      pbVar45 = pbVar45 + statusTextProvider[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar17 = (char)*piVar17 + bVar8 + 0x2e;
    cVar5 = bVar8 + 0x34;
    pcVar12 = (char *)CONCAT31(uVar19,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      pcVar12[0x28] = pcVar12[0x28] + cVar29;
      goto code_r0x00404899;
    }
    *pcVar12 = *pcVar12 + cVar5;
    piVar17 = (int *)CONCAT31(uVar19,bVar8 + 0x5c);
    *piVar17 = *piVar17 + (int)piVar17;
    cVar29 = (bVar7 | bRam07022c07) - (char)*piVar17;
    puVar47 = (uint *)CONCAT31(uVar20,cVar29);
    pcVar12 = (char *)CONCAT31(uVar19,bVar8 + 0x5a);
    bVar7 = (byte)((uint)puVar21 >> 8);
    *(byte *)statusTextProvider = (byte)*statusTextProvider | bVar7;
    *(uint *)((int)statusTextProvider + (int)pcVar12) =
         *(uint *)((int)statusTextProvider + (int)pcVar12) | 0x73060000;
    *statusTextProvider = *statusTextProvider | 0x73060000;
    cVar35 = cVar35 + *(byte *)((int)unaff_EBX + 0x72);
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(cVar35,cVar6));
    *pcVar12 = *pcVar12 + bVar8 + 0x5a;
    cVar5 = bVar8 + 0x60;
    pcVar12 = (char *)CONCAT31(uVar19,cVar5);
    if ((POPCOUNT(cVar5) & 1U) == 0) {
      *pcVar12 = *pcVar12 + cVar5;
      piVar17 = (int *)CONCAT31(uVar19,bVar8 + 0x88);
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      pbStack_64 = (byte *)CONCAT22(pbStack_64._2_2_,in_DS);
      puVar47 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                 CONCAT11((bVar7 | (byte)*statusTextProvider) + (char)*piVar17,
                                          cVar29));
      *(char *)piVar17 = (char)*piVar17;
      cVar6 = cVar6 - *pbVar45;
      cVar35 = cVar35 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6) + 0x73);
      *(byte *)piVar17 = (char)*piVar17 + bVar8 + 0x88;
      bVar8 = bVar8 + 0xb2 & (byte)*statusTextProvider;
      puVar46 = (uint *)((int)puVar46 + iRam73060073);
      *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
      pcVar12 = (char *)CONCAT31(uVar19,bVar8 + 0x2a);
      unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(cVar35 + *(char *)(CONCAT22(uVar25,CONCAT11(
                                                  cVar35,cVar6)) + 0x74),cVar6));
      *pcVar12 = *pcVar12 + bVar8 + 0x2a;
      piVar17 = (int *)CONCAT31(uVar19,bVar8 + 0x54);
      in_SS = (ushort)puStack_74;
      goto code_r0x0040486e;
    }
    pbVar42 = (byte *)*(undefined6 *)pcVar12;
    *pbVar45 = *pbVar45 + (char)*(undefined6 *)pcVar12;
  }
  uVar19 = (undefined3)((uint)pbVar42 >> 8);
  bVar8 = (byte)pbVar42 | *pbVar45;
  pcVar12 = (char *)CONCAT31(uVar19,bVar8);
  *pcVar12 = *pcVar12 + bVar8;
  *unaff_EBX = (uint)(*unaff_EBX + (int)puVar47);
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
  *pcVar12 = *pcVar12 + bVar8;
  pcVar12 = (char *)CONCAT31(uVar19,bVar8 + 0x6f);
  *pcVar12 = *pcVar12 + bVar8 + 0x6f;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)statusTextProvider = (byte)*statusTextProvider + (char)puVar47;
  uRam00c16f07 = SUB41(pcVar12,0);
  in_SS = uStack_70;
code_r0x004048de:
  cVar5 = (char)pcVar12;
  *pbVar45 = *pbVar45 + cVar5;
  *pcVar12 = *pcVar12 + cVar5;
  *(byte **)(pcVar12 + (int)puVar47) = (byte *)(*(int *)(pcVar12 + (int)puVar47) + (int)puVar47);
  puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_SS);
  bVar8 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar12 = *pcVar12 + cVar5;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5 + 'o');
  pbVar45 = pbVar45 + 1;
  *pcVar12 = *pcVar12 + cVar5 + 'o';
  pbStack_78 = (byte *)CONCAT22(pbStack_78._2_2_,in_SS);
  puVar21 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar8,(char)unaff_EBX));
  puVar39 = unaff_EBX;
  uVar9 = in_SS;
code_r0x004048f5:
  unaff_EBX = puVar21;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)statusTextProvider = (byte)*statusTextProvider + (char)puVar47;
  do {
    uRam00c36f08 = SUB41(pcVar12,0);
    while( true ) {
      bVar8 = *pbVar45;
      cVar5 = (char)pcVar12;
      *pbVar45 = *pbVar45 + cVar5;
      iStack_7c = CONCAT22(iStack_7c._2_2_,uVar9);
      if (SCARRY1(bVar8,cVar5) == (char)*pbVar45 < '\0') {
        pcVar12[(int)puVar39] = pcVar12[(int)puVar39] + cVar5;
        goto code_r0x00404982;
      }
      *pcVar12 = *pcVar12 + cVar5;
      pbVar42 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5 + '*');
      puStack_80 = (uint *)CONCAT22(puStack_80._2_2_,in_DS);
      bVar8 = (byte)((uint)puVar47 >> 8);
      cVar5 = (char)puVar47;
      bVar7 = bVar8 + *pbVar42;
      pbVar42 = pbVar42 + (uint)CARRY1(bVar8,*pbVar42) + *(int *)pbVar42;
      *(byte *)statusTextProvider = (byte)*statusTextProvider + cVar5;
      cVar6 = (char)unaff_EBX - *pbVar45;
      bVar8 = *pbVar42;
      puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar7 + *pbVar42,cVar5));
      iVar16 = *(int *)pbVar42;
      *(byte *)statusTextProvider = (byte)*statusTextProvider + cVar5;
      pcVar12 = (char *)CONCAT31((int3)((uint)(pbVar42 + (uint)CARRY1(bVar7,bVar8) + iVar16) >> 8),
                                 (char)(pbVar42 + (uint)CARRY1(bVar7,bVar8) + iVar16) -
                                 *(byte *)((int)statusTextProvider + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6) +
                                                     -0x3a),cVar6));
code_r0x00404921:
      bVar8 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar8;
      pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar8 + 0x6f);
      *(byte *)puVar47 = ((byte)*puVar47 - (bVar8 + 0x6f)) - (0x90 < bVar8);
code_r0x00404927:
      *(byte *)statusTextProvider = (byte)*statusTextProvider + (char)puVar47;
      pbStack_78 = (byte *)CONCAT22(pbStack_78._2_2_,in_SS);
      *(byte *)puVar47 = (byte)*puVar47 + 1;
      cVar5 = (char)((uint)puVar47 >> 8) - pbVar45[2];
      puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(cVar5,(char)puVar47));
      if ((POPCOUNT(cVar5) & 1U) == 0) break;
      pcVar12 = pcVar12 + -0x1b7e2606;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar12 >> 8) |
                                          (byte)statusTextProvider[0x30dbc2],(char)pcVar12));
    }
code_r0x00404931:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar5 = (char)pcVar12 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5);
    pbVar42 = pbVar45;
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  do {
    bVar8 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar8;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    piVar17 = (int *)CONCAT31(uVar19,bVar8 + 0x6f);
    *puVar47 = (*puVar47 - (int)piVar17) - (uint)(0x90 < bVar8);
    *(byte *)statusTextProvider = (byte)*statusTextProvider + (char)puVar47;
    iVar16 = *(int *)((int)puVar46 + 0x1a);
    *piVar17 = *piVar17 + (int)piVar17;
    statusTextProvider =
         (uint *)CONCAT31((int3)((uint)statusTextProvider >> 8),(byte)statusTextProvider | *pbVar42)
    ;
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    bVar8 = (bVar8 + 0x6f) - (char)*piVar17;
    pbVar45 = (byte *)CONCAT31(uVar19,bVar8);
    *pbVar45 = *pbVar45 + bVar8;
    pbVar42 = pbVar42 + *(int *)pbVar45;
    cVar5 = bVar8 + *pbVar45;
    puVar13 = (ushort *)CONCAT31(uVar19,cVar5);
    *puVar13 = *puVar13 + (ushort)CARRY1(bVar8,*pbVar45) * (((ushort)puVar13 & 3) - (*puVar13 & 3));
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    puVar46 = (uint *)((int)puVar46 + unaff_EBX[0x1c]);
    puVar39 = (uint *)((int)puVar39 + iVar16);
code_r0x0040495b:
    cVar5 = (char)puVar13;
    *(char *)puVar13 = (char)*puVar13 + cVar5;
    uVar19 = (undefined3)((uint)puVar13 >> 8);
    cVar6 = cVar5 + '\x02';
    pcVar12 = (char *)CONCAT31(uVar19,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      *statusTextProvider = (uint)(*statusTextProvider + (int)puVar39);
      pbVar45 = pbVar42 + (uint)bVar49 * -2 + 1;
      out(*pbVar42,(short)statusTextProvider);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar12 = *pcVar12 + cVar6;
    pbVar45 = (byte *)(CONCAT31(uVar19,cVar5 + '}') + (int)puVar39);
    *pbVar45 = *pbVar45 + cVar5 + '}';
    *pcStack_40 = *pcStack_40 + (char)pcStack_40;
    puVar47 = (uint *)CONCAT22((short)((uint)iStack_44 >> 0x10),
                               CONCAT11((byte)((uint)iStack_44 >> 8) | *(byte *)(iStack_44 * 3),
                                        (char)iStack_44));
    puVar46 = (uint *)(pbStack_5c + *(int *)((int)puStack_4c + 0x6f));
    pcVar12 = pcStack_40;
    statusTextProvider = puStack_48;
    unaff_EBX = puStack_4c;
    puVar39 = puStack_54;
    pbVar42 = pbStack_58;
    while( true ) {
      cVar5 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar5;
      uVar19 = (undefined3)((uint)pcVar12 >> 8);
      cVar6 = cVar5 + '\x02';
      pcVar12 = (char *)CONCAT31(uVar19,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) break;
      *pcVar12 = *pcVar12 + cVar6;
      pcVar12 = (char *)CONCAT31(uVar19,cVar5 + '}');
      out(*(undefined4 *)pbVar42,(short)statusTextProvider);
      *pcVar12 = *pcVar12 + cVar5 + '}';
code_r0x00404982:
      puStack_68 = (uint *)CONCAT22(puStack_68._2_2_,in_ES);
      *(byte *)puStack_60 = (byte)*puStack_60 + (char)in_ES;
      puVar47 = (uint *)CONCAT22((short)((uint)pbStack_64 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_64 >> 8) |
                                          pbStack_64[(int)pbStack_78],(char)pbStack_64));
      puVar46 = (uint *)(iStack_7c + *(int *)((int)puStack_6c + 0x71));
      puVar39 = puStack_60;
      statusTextProvider = puStack_68;
      unaff_EBX = puStack_6c;
      pbVar42 = pbStack_78;
      while( true ) {
        cVar5 = (char)puVar39;
        *(byte *)puVar39 = (byte)*puVar39 + cVar5;
        uVar19 = (undefined3)((uint)puVar39 >> 8);
        cVar6 = cVar5 + '\x02';
        puVar13 = (ushort *)CONCAT31(uVar19,cVar6);
        puVar39 = puStack_74;
        if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar13 = (char)*puVar13 + cVar6;
        bVar7 = cVar5 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar7);
        pbVar45 = (byte *)(iVar16 + (int)puStack_74);
        bVar8 = *pbVar45;
        *pbVar45 = *pbVar45 + bVar7;
        uVar34 = *puVar47;
        *(byte *)statusTextProvider = (byte)*statusTextProvider + (char)puVar47;
        pcVar12 = (char *)(((iVar16 - uVar34) - (uint)CARRY1(bVar8,bVar7)) + -0x727b0317);
        cVar5 = (char)pcVar12;
        *pcVar12 = *pcVar12 + cVar5;
        uVar19 = (undefined3)((uint)pcVar12 >> 8);
        cVar6 = cVar5 + '\x02';
        pcVar12 = (char *)CONCAT31(uVar19,cVar6);
        if ((POPCOUNT(cVar6) & 1U) != 0) break;
        *pcVar12 = *pcVar12 + cVar6;
        bVar7 = cVar5 + 0x7d;
        iVar16 = CONCAT31(uVar19,bVar7);
        pbVar45 = (byte *)(iVar16 + (int)puStack_74);
        bVar8 = *pbVar45;
        *pbVar45 = *pbVar45 + bVar7;
        puVar39 = (uint *)((iVar16 - *puVar47) - (uint)CARRY1(bVar8,bVar7));
        puVar21 = statusTextProvider;
code_r0x004049b4:
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar47;
        statusTextProvider =
             (uint *)CONCAT31((int3)((uint)puVar21 >> 8),((char)puVar21 - (byte)*puVar46) - *pbVar42
                             );
        bVar7 = pbVar42[0x72];
        *puVar39 = *puVar39 & (uint)puVar47;
        pbVar45 = (byte *)((int)puVar39 + 2);
        *pbVar45 = *pbVar45 + (char)((uint)puVar21 >> 8);
        bVar8 = *pbVar45;
        puVar44 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar7);
        pbVar45 = pbVar42;
        while (unaff_EBX = puVar44, pbVar42 = pbVar45, (POPCOUNT(bVar8) & 1U) == 0) {
          cVar5 = (char)puVar39;
          *(byte *)puVar39 = (byte)*puVar39 + cVar5;
          uVar19 = (undefined3)((uint)puVar39 >> 8);
          cVar6 = cVar5 + '\x03';
          pbVar11 = (byte *)CONCAT31(uVar19,cVar6);
          pbVar42 = pbVar45 + (uint)bVar49 * -8 + 4;
          out(*(undefined4 *)pbVar45,(short)statusTextProvider);
          in_SS = (ushort)pbStack_5c;
          *pbVar11 = *pbVar11 + cVar6;
          cVar29 = (char)puVar47;
          puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                     CONCAT11((byte)((uint)puVar47 >> 8) | *pbVar11,cVar29));
          *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
          *(byte *)statusTextProvider = (byte)*statusTextProvider + cVar29;
          cVar29 = (char)puVar44 - pbVar42[2];
          unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),cVar29);
          if ((POPCOUNT(cVar29) & 1U) != 0) {
            pbVar45 = (byte *)((int)puVar46 + (int)puStack_74 * 2);
            *pbVar45 = *pbVar45 + cVar6;
            ppbVar41 = (byte **)puStack_74;
            goto code_r0x00404a51;
          }
          *pbVar11 = *pbVar11 + cVar6;
          puVar39 = (uint *)CONCAT31(uVar19,cVar5 + 'r');
          *(byte *)puVar39 = (byte)*puVar39;
          pbStack_5c = (byte *)CONCAT22(pbStack_5c._2_2_,uVar9);
          do {
            puVar46 = (uint *)((int)puVar46 + unaff_EBX[0x1c]);
            bVar8 = (byte)puVar39;
            *(byte *)puVar39 = (byte)*puVar39 + bVar8;
            uVar19 = (undefined3)((uint)puVar39 >> 8);
            bVar8 = (bVar8 + 0x6e) - (0x90 < bVar8);
            puVar39 = (uint *)CONCAT31(uVar19,bVar8);
            cVar5 = (char)puVar47;
            *(byte *)statusTextProvider = (byte)*statusTextProvider + cVar5;
            bVar7 = (char)((uint)puVar47 >> 8) - pbVar42[2];
            puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar7,cVar5));
            puVar21 = statusTextProvider;
            if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar39 = (byte)*puVar39 + bVar8;
            bVar36 = bVar8 + 2;
            puVar39 = (uint *)CONCAT31(uVar19,bVar36);
            ppbVar40 = (byte **)puStack_74;
            if ((POPCOUNT(bVar36) & 1U) == 0) goto code_r0x004049f5;
            pbVar42 = pbStack_5c;
          } while (0xfd < bVar8);
          *(byte *)puVar39 = (byte)*puVar39 | bVar36;
          puVar44 = unaff_EBX;
          pbVar45 = pbStack_5c;
          bVar8 = (byte)*puVar39;
        }
      }
    }
    *(byte *)statusTextProvider = (byte)*statusTextProvider + (char)puVar47;
    pbStack_5c = (byte *)CONCAT22(pbStack_5c._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar8 = (byte)puVar39;
    *(byte *)puVar39 = (byte)*puVar39 + bVar8;
    uVar19 = (undefined3)((uint)puVar39 >> 8);
    bVar36 = bVar8 + 0x6f;
    pbVar11 = (byte *)CONCAT31(uVar19,bVar36);
    *puVar47 = (*puVar47 - (int)pbVar11) - (uint)(0x90 < bVar8);
    *(byte *)statusTextProvider = (byte)*statusTextProvider + cVar5;
    pbVar45 = (byte *)((int)ppbVar40 + *(int *)((int)puVar46 + 0x1a));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar20 = (undefined3)((uint)statusTextProvider >> 8);
    bVar8 = (byte)statusTextProvider | *pbVar42;
    statusTextProvider = (uint *)CONCAT31(uVar20,bVar8);
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    cVar6 = bVar36 - *pbVar11;
    pbVar42 = pbVar42 + (-(uint)(bVar36 < *pbVar11) - *(int *)CONCAT31(uVar19,cVar6));
    uVar14 = CONCAT31(uVar19,cVar6 + *(char *)CONCAT31(uVar19,cVar6));
    bVar48 = CARRY1(bRam14110000,bVar7);
    bRam14110000 = bRam14110000 + bVar7;
    puVar39 = (uint *)((int)unaff_EBX + (int)pbVar42 * 2);
    uVar34 = *puVar39;
    uVar1 = uVar14 + *puVar39;
    puVar15 = (undefined4 *)(uVar1 + bVar48);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar15 = uVar2;
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,uVar9);
    uVar34 = (uint)(CARRY4(uVar14,uVar34) || CARRY4(uVar1,(uint)bVar48));
    puVar39 = (uint *)((int)puVar15 + uRam7d020511 + uVar34);
    ppbVar38 = &pbStack_64;
    ppbVar41 = &pbStack_64;
    ppbVar40 = &pbStack_64;
    pbStack_64 = pbVar45;
    cVar6 = '\x03';
    do {
      pbVar45 = pbVar45 + -4;
      ppbVar38 = ppbVar38 + -1;
      *ppbVar38 = (byte *)*(undefined4 *)pbVar45;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    pbStack_5c = (byte *)&pbStack_64;
    pbRam00c82802 =
         (byte *)((int)puVar39 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar15,uRam7d020511) ||
                      CARRY4((int)puVar15 + uRam7d020511,uVar34))));
    bVar36 = *pbVar42;
    cVar6 = (char)puVar39;
    *pbVar42 = *pbVar42 + cVar6;
  } while (SCARRY1(bVar36,cVar6) == (char)*pbVar42 < '\0');
  *(byte *)puVar39 = (byte)*puVar39 + cVar6;
  iVar16 = CONCAT31((int3)((uint)puVar39 >> 8),cVar6 + '\x11') + 0xc57b;
  bVar7 = (byte)iVar16;
  *statusTextProvider = *statusTextProvider ^ (uint)unaff_EBX;
  statusTextProvider = (uint *)CONCAT31(uVar20,bVar8 + (byte)*puVar47);
  iVar16 = (CONCAT31((int3)((uint)iVar16 >> 8),bVar7 + 0x6f) - (uint)(0x90 < bVar7)) + -0x18093a86;
  cVar5 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar6 = cVar5 + '\x02';
  pbVar45 = (byte *)CONCAT31(uVar19,cVar6);
  if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar45 = *pbVar45 + cVar6;
  pbVar11 = (byte *)CONCAT31(uVar19,cVar5 + 'q');
  ppbVar41 = &pbStack_64;
code_r0x00404a51:
  pbVar45 = pbVar11 + 1;
  cVar5 = (char)pbVar45;
  *pbVar45 = *pbVar45 + cVar5;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) - cVar5,cVar29));
  *pbVar45 = *pbVar45 + cVar5;
  statusTextProvider =
       (uint *)CONCAT31((int3)((uint)statusTextProvider >> 8),
                        (char)statusTextProvider - (byte)*puVar47);
  pbVar11 = pbVar11 + 0x757b03;
  pbVar45 = (byte *)((int)puVar46 + (int)ppbVar41 * 2);
  cVar5 = (char)pbVar11;
  *pbVar45 = *pbVar45 + cVar5;
  *pbVar11 = *pbVar11 + cVar5;
  *pbVar42 = *pbVar42 - (char)((uint)pbVar11 >> 8);
  *pbVar11 = *pbVar11 + cVar5;
  puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar41 + -0x3a));
  *pbVar11 = *pbVar11 + cVar5;
  pbVar45 = (byte *)(CONCAT31((int3)((uint)pbVar11 >> 8),cVar5 + '\x11') + 0x757b02);
  pbVar11 = (byte *)((int)puVar46 + (int)ppbVar41 * 2);
  bVar7 = (byte)pbVar45;
  *pbVar11 = *pbVar11 + bVar7;
  bVar8 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar7;
  puStack_80 = (uint *)CONCAT22(puStack_80._2_2_,uVar9);
  pbRam011006fe = pbVar45 + (int)(pbRam011006fe + CARRY1(bVar8,bVar7));
  bVar8 = *pbVar42;
  *pbVar42 = *pbVar42 + bVar7;
  if (!CARRY1(bVar8,bVar7)) goto code_r0x00404add;
  do {
    bVar8 = (byte)pbVar45;
    *pbVar45 = *pbVar45 + bVar8;
    bVar36 = (byte)puVar47;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                               CONCAT11((byte)((uint)puVar47 >> 8) | *pbVar45,bVar36));
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    uVar19 = (undefined3)((uint)pbVar45 >> 8);
    bVar8 = bVar8 + in_AF * '\x06';
    cVar5 = bVar8 + (0x90 < (bVar8 & 0xf0) | in_AF * (0xf9 < bVar8)) * '`';
    pcVar12 = (char *)CONCAT31(uVar19,cVar5);
    *pcVar12 = *pcVar12 + cVar5;
    puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar41 + -0x39));
    *pcVar12 = *pcVar12 + cVar5;
    iVar16 = CONCAT31(uVar19,cVar5 + '\x11') + 0xc57b;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x11') + 0xc67b;
    bVar8 = (byte)iVar16;
    bVar7 = bVar8 + 0x6f;
    pbVar45 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar7);
    *puVar47 = (*puVar47 - (int)pbVar45) - (uint)(0x90 < bVar8);
    uVar34 = *statusTextProvider;
    *(byte *)statusTextProvider = (byte)*statusTextProvider + bVar36;
    pbRam011106fe = pbVar45 + (int)(pbRam011106fe + CARRY1((byte)uVar34,bVar36));
    bVar8 = *pbVar42;
    *pbVar42 = *pbVar42 + bVar7;
    if (!CARRY1(bVar8,bVar7)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    bVar8 = (byte)puVar47;
    bVar7 = (byte)((uint)puVar47 >> 8) | *pbVar45;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar7,bVar8));
    *pbVar45 = *pbVar45 - (char)pbVar45;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar7;
    out(*(undefined4 *)pbVar42,(short)statusTextProvider);
    *puVar47 = *puVar47 & (uint)pbVar45;
    uVar34 = *statusTextProvider;
    *(byte *)statusTextProvider = (byte)*statusTextProvider + bVar8;
    pbVar45 = pbVar45 + (uint)CARRY1((byte)uVar34,bVar8) + *(int *)(pbVar42 + (uint)bVar49 * -8 + 4)
    ;
    *pbVar45 = *pbVar45 + (char)pbVar45;
    *(byte *)puVar47 = (byte)*puVar47 + (char)statusTextProvider;
    pbVar42 = pbVar42 + (uint)bVar49 * -8 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar42,(short)statusTextProvider);
      pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(byte)pbVar45 & (byte)*puVar47);
      *(byte *)statusTextProvider = (byte)*statusTextProvider + (char)puVar47;
      statusTextProvider =
           (uint *)CONCAT22((short)((uint)statusTextProvider >> 0x10),
                            CONCAT11((byte)((uint)statusTextProvider >> 8) | (byte)unaff_EBX[5],
                                     (char)statusTextProvider));
      *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
      pbVar42 = pbVar42 + (uint)bVar49 * -8 + 4;
code_r0x00404ad4:
      puStack_80 = (uint *)CONCAT22(puStack_80._2_2_,uVar9);
      pbVar45 = (byte *)((uint)pbVar45 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar45;
code_r0x00404add:
      bVar8 = (byte)pbVar45;
      uVar19 = (undefined3)((uint)pbVar45 >> 8);
      cVar5 = bVar8 + 8;
      pbVar45 = (byte *)CONCAT31(uVar19,cVar5);
      if (SCARRY1(bVar8,'\b') == cVar5 < '\0') break;
      *pbVar45 = *pbVar45 + cVar5;
      cVar5 = bVar8 + 10;
      piVar17 = (int *)CONCAT31(uVar19,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      puVar39 = (uint *)CONCAT31(uVar19,bVar8 + 0x7c);
      *puVar39 = *puVar39 & (uint)puVar47;
      *(char *)((int)puVar39 + 0x11) =
           *(char *)((int)puVar39 + 0x11) + (char)((uint)statusTextProvider >> 8);
      cVar5 = (char)((int)puVar39 + 0xc67b);
      uVar19 = (undefined3)((uint)((int)puVar39 + 0xc67b) >> 8);
      bVar8 = cVar5 + 8;
      pbVar45 = (byte *)CONCAT31(uVar19,bVar8);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *pbVar45 = *pbVar45 + bVar8;
        cRam02060000 = cVar5 + 'w';
        puVar39 = (uint *)CONCAT31(uVar19,cRam02060000);
        *(byte *)puVar39 = (byte)*puVar39 + cRam02060000;
        cVar5 = (char)puVar47;
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                   CONCAT11((byte)((uint)puVar47 >> 8) | (byte)*puVar39,cVar5));
        *puVar39 = *puVar39 - (int)puVar39;
        *(byte *)statusTextProvider = (byte)*statusTextProvider + cVar5;
        pbVar45 = pbVar42 + (uint)bVar49 * -8 + 4;
        out(*(undefined4 *)pbVar42,(short)statusTextProvider);
        pbVar42 = pbVar45;
        if ((POPCOUNT((byte)*statusTextProvider) & 1U) == 0) goto code_r0x00404b0f;
        pcVar12 = (char *)((uint)puVar39 | *puVar39);
        goto code_r0x00404b89;
      }
      bVar7 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar8;
      *(byte **)pbVar42 = pbVar45 + (uint)CARRY1(bVar7,bVar8) + *(int *)pbVar42;
    }
    *pbVar42 = *pbVar42 + 1;
    *puVar47 = (uint)(pbVar45 + (uint)(0xf7 < bVar8) + *puVar47);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar39 = (byte)*puVar39 + (char)puVar39;
    puVar39 = (uint *)CONCAT31((int3)((uint)puVar39 >> 8),(char)puVar39 + 'r');
    piVar17 = (int *)((uint)puVar39 | *puVar39);
    statusTextProvider = puStack_80;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar16 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar8 = (byte)iVar16;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),bVar8 + 0x6f);
    *puVar47 = (*puVar47 - iVar16) - (uint)(0x90 < bVar8);
    cVar5 = (char)puVar47;
    *(byte *)statusTextProvider = (byte)*statusTextProvider + cVar5;
    bVar7 = (byte)((uint)unaff_EBX >> 8);
    bVar30 = (byte)((uint)statusTextProvider >> 8) | bVar7;
    pcVar10 = (char *)CONCAT22((short)((uint)statusTextProvider >> 0x10),
                               CONCAT11(bVar30,(byte)statusTextProvider));
    piVar17 = (int *)(iVar16 + 0x73060001);
    *(byte *)puVar47 = (byte)*puVar47 & (byte)piVar17;
    *pcVar10 = *pcVar10 + cVar5;
    bVar36 = (byte)((uint)puVar47 >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar36;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar16 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar36;
    pcVar12 = (char *)((uint)piVar17 | *puVar46);
    *pcVar10 = *pcVar10 - bVar36;
    bVar8 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar8;
    ppbVar41 = (byte **)(((int)ppbVar41 - iVar16) - *(int *)(pcVar12 + ((int)ppbVar41 - iVar16)));
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar23 = (byte)unaff_EBX;
    cVar6 = bVar7 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar11 = (byte *)CONCAT22(uVar25,CONCAT11(cVar6,bVar23));
    *pcVar12 = *pcVar12 + bVar8;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    uVar14 = CONCAT31(uVar19,bVar8 + 7);
    puVar39 = (uint *)((int)ppbVar41 + -0x1faeef1);
    uVar34 = *puVar39;
    uVar1 = *puVar39 + uVar14;
    *puVar39 = uVar1 + (0xf8 < bVar8);
    puStack_80 = (uint *)CONCAT22(puStack_80._2_2_,uVar9);
    puVar21 = puStack_80;
    bVar7 = bVar8 + 7 + (byte)*puVar47 +
            (CARRY4(uVar34,uVar14) || CARRY4(uVar1,(uint)(0xf8 < bVar8)));
    puVar39 = (uint *)CONCAT31(uVar19,bVar7);
    bVar8 = *pbVar42;
    *pbVar42 = *pbVar42 + bVar7;
    if (CARRY1(bVar8,bVar7)) break;
    *(byte *)puVar39 = (byte)*puVar39 + bVar7;
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(cVar6 + pbVar11[0x76],bVar23));
    uStack_84 = uVar9;
  }
  *(byte *)puVar39 = (byte)*puVar39 + bVar7;
  uVar20 = (undefined3)((uint)pcVar10 >> 8);
  bVar26 = (byte)statusTextProvider | *pbVar11;
  statusTextProvider = (uint *)CONCAT31(uVar20,bVar26);
  pcRam2b060000 = (char *)CONCAT31(uVar19,bVar7 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar7 + 0x39)) - (0xd7 < (byte)(bVar7 + 0x11));
  bVar8 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar36;
  pbVar45 = pbVar42 + (uint)bVar49 * -8 + 4;
  out(*(undefined4 *)pbVar42,(short)statusTextProvider);
  bVar8 = (bVar7 + 0x37) - CARRY1(bVar8,bVar36);
  piVar17 = (int *)CONCAT31(uVar19,bVar8);
  if ((POPCOUNT(bVar8) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar8;
    iVar16 = CONCAT31(uVar19,bVar8 + 0x11) + 0xc77b;
    pcVar12 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + 'r');
    pcVar12[0x28] = pcVar12[0x28] + bVar30;
code_r0x00404b89:
    cVar5 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar5;
    *pcVar12 = *pcVar12 + cVar5;
    *pcVar12 = *pcVar12 + cVar5;
    puVar13 = (ushort *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5 + 'r');
    uVar9 = (ushort)puVar13 | *puVar13;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),uVar9);
    bRam11060000 = (byte)uVar9;
    out(*(undefined4 *)pbVar45,(short)statusTextProvider);
    *pcVar12 = *pcVar12 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar8;
  pbVar42 = (byte *)((int)ppbVar41 - *(int *)((int)puVar46 + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar12 = (char *)CONCAT31(uVar20,bVar26 | *pbVar11);
  puVar46 = (uint *)(pbVar45 + (uint)bVar49 * -8 + 4);
  out(*(undefined4 *)pbVar45,(short)pcVar12);
  uVar34 = *puVar47;
  *pcVar12 = *pcVar12 + cVar5;
  uVar34 = CONCAT31(uVar19,bVar8 & (byte)uVar34) | 0x767b02;
  *(byte *)((int)puVar47 + (int)pcVar12) = *(byte *)((int)puVar47 + (int)pcVar12) + (char)uVar34;
  iVar16 = uVar34 + 0xc67b;
  cVar29 = (char)iVar16;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar35 = cVar29 + 'r';
  pcVar12 = (char *)CONCAT31(uVar19,cVar35);
  pcVar12[0x28] = pcVar12[0x28] + bVar30;
  *pcVar12 = *pcVar12 + cVar35;
  uVar24 = (undefined2)((uint)puVar47 >> 0x10);
  bVar36 = bVar36 | *(byte *)((int)puStack_80 + -0x5e);
  puVar44 = (uint *)CONCAT22(uVar24,CONCAT11(bVar36,cVar5));
  *pcVar12 = *pcVar12 + cVar35;
  puStack_80 = (uint *)CONCAT22(puStack_80._2_2_,uStack_84);
  pbVar45 = (byte *)CONCAT22(uVar25,CONCAT11(cVar6 + pbVar11[0x76],bVar23));
  *pcVar12 = *pcVar12 + cVar35;
  puVar39 = (uint *)CONCAT31(uVar19,cVar29 + -0x1c);
  pcVar12 = (char *)((uint)puVar39 | *puVar39);
  bVar48 = (POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar12;
  puVar39 = puStack_80;
  pbVar11 = pbVar45;
  pbVar43 = pbVar42;
  puVar47 = puVar21;
  uVar9 = uStack_84;
  if (!bVar48) goto code_r0x00404ca8;
  *pcVar12 = *pcVar12 + cRam02060000;
  puVar39 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cRam02060000 + 'r');
  *puVar39 = *puVar39 & (uint)puVar44;
  *(char *)((int)puVar39 + 0x11) = *(char *)((int)puVar39 + 0x11) + (char)(uStack_84 >> 8);
  iVar16 = (int)puVar39 + 0xc77b;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cRam02060000 = (char)iVar16 + '\t';
  pbVar11 = (byte *)CONCAT31(uVar19,cRam02060000);
  out(*puVar46,uStack_84);
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar47 = (uint *)CONCAT22(uVar24,CONCAT11(bVar36 | *pbVar11,cVar5));
  *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
  *(byte *)puStack_80 = (byte)*puStack_80 + cVar5;
  puVar39 = puVar46 + (uint)bVar49 * -2 + 1 + (uint)bVar49 * -2 + 1;
  out(puVar46[(uint)bVar49 * -2 + 1],uStack_84);
  puVar27 = puStack_80;
  puVar46 = puVar39;
  uVar9 = uStack_84;
  if ((POPCOUNT((byte)*puStack_80) & 1U) != 0) goto code_r0x00404cca;
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar13 = (ushort *)CONCAT31(uVar19,(char)iVar16 + '{');
  uVar9 = (ushort)puVar13 | *puVar13;
  pcVar12 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),uVar9);
  bVar8 = (byte)uVar9;
  out(*puVar39,uStack_84);
  pbVar11 = (byte *)((int)puVar47 + 1);
  bRam11060000 = bVar8;
  *pcVar12 = *pcVar12 + bVar8;
  puVar44 = (uint *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                             CONCAT11((byte)((uint)pbVar11 >> 8) | bRam110cde91,(char)pbVar11));
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar8 - 7);
  *puVar21 = (uint)(pcVar12 + (uint)(bVar8 < 7) + *puVar21);
  puVar46 = puVar39 + (uint)bVar49 * -2 + 1 + (uint)bVar49 * -2 + 1;
  out(puVar39[(uint)bVar49 * -2 + 1],uStack_84);
  puVar39 = (uint *)((int)puStack_80 + 1);
  *pcVar12 = *pcVar12 + (bVar8 - 7);
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),bVar23 | (byte)(uVar9 >> 8));
  do {
    bVar8 = (char)pcVar12 - *pcVar12;
    uVar34 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar8;
    cVar5 = bVar8 - CARRY1((byte)uVar34,bVar8);
    *(byte *)puVar39 = *(byte *)puVar39 + cVar5;
    cVar6 = (char)((uint)puVar44 >> 8);
    *(byte *)(puVar21 + 0x673b40) = (byte)puVar21[0x673b40] + cVar6;
    puVar18 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5);
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    *(byte *)puVar39 = *(byte *)puVar39 + cVar5;
    *(byte **)(pbVar11 + 0x58) = (byte *)(*(int *)(pbVar11 + 0x58) + (int)puVar46);
    puVar47 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar44 >> 0x10),
                                               CONCAT11(cVar6 + (char)((uint)pcVar12 >> 8),
                                                        (char)puVar44)) >> 8),
                               (char)puVar44 + *(char *)((int)puVar18 * 2));
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    *(byte *)puVar46 = (byte)*puVar46 + (char)pbVar11;
    puVar27 = puVar39;
    pbVar45 = pbVar11;
_ctor:
    bVar7 = (byte)((uint)puVar47 >> 8);
    uVar34 = *puVar18;
    bVar8 = (byte)puVar47;
    puVar18 = (uint *)((int)puVar18 + (uint)CARRY1(bVar7,(byte)*puVar18) + *puVar18);
    *(byte *)puVar27 = *(byte *)puVar27 + bVar8;
    cVar5 = bVar8 - *(byte *)((int)puVar27 + 3);
    puVar44 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar47 >> 0x10),
                                               CONCAT11(bVar7 + (byte)uVar34,bVar8)) >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      if (*(byte *)((int)puVar27 + 3) <= bVar8) {
        *puVar18 = (uint)(*puVar18 + (int)puVar18);
        puVar27 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),(byte)puVar27 | *pbVar45);
        puVar18 = puVar18 + 0x230e;
        puVar47 = puVar44;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
    cVar5 = (char)puVar18 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar5);
    bVar48 = (POPCOUNT(cVar5) & 1U) == 0;
    puVar39 = puVar27;
    pbVar11 = pbVar45;
    pbVar43 = pbVar42;
    puVar47 = puVar21;
    uVar9 = (ushort)puStack_74;
code_r0x00404ca8:
    puStack_74._0_2_ = uVar9;
    pcVar10 = pcStack_50;
    puVar27 = (uint *)pbStack_58;
    pbVar45 = pbStack_5c;
    pbVar42 = pbStack_64;
    puVar21 = puStack_6c;
    if (bVar48) break;
    *(byte *)puVar39 = *(byte *)puVar39 + (char)puVar44;
    pbVar42 = pbVar43;
    puVar21 = puVar47;
  } while( true );
  *pcVar12 = *pcVar12 + (char)pcVar12;
  bVar8 = (byte)pcStack_50;
  *pcStack_50 = *pcStack_50 + bVar8;
  puVar47 = (uint *)CONCAT22((short)((uint)puStack_54 >> 0x10),
                             CONCAT11((byte)((uint)puStack_54 >> 8) | *pbStack_58,(char)puStack_54))
  ;
  *pbStack_5c = *pbStack_5c + (char)pbStack_5c;
  pbVar11 = (byte *)((int)pcVar10 * 2);
  *pbVar11 = *pbVar11 ^ bVar8;
  uVar3 = *(undefined6 *)pcVar10;
  in_DS = (ushort)((uint6)uVar3 >> 0x20);
  pbVar11 = (byte *)uVar3;
  bVar7 = (byte)uVar3;
  *pbVar11 = *pbVar11 + bVar7;
  bVar8 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar7;
  puVar39 = (uint *)((int)puVar47 + 0x11673);
  uVar34 = *puVar39;
  uVar1 = *puVar39;
  *puVar39 = (uint)((byte *)((int)puVar27 + uVar1) + CARRY1(bVar8,bVar7));
  puStack_6c = (uint *)CONCAT22(puStack_6c._2_2_,(ushort)puStack_74);
  pbVar11 = pbVar11 + (uint)(CARRY4(uVar34,(uint)puVar27) ||
                            CARRY4((int)puVar27 + uVar1,(uint)CARRY1(bVar8,bVar7))) +
                      *(int *)((int)puVar47 + (int)puVar27);
  puVar46 = puStack_68;
  uVar9 = (ushort)puStack_74;
code_r0x00404cca:
  puStack_74._0_2_ = uVar9;
  cVar5 = (char)pbVar11 + '\x04';
  puVar18 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar5);
  if (SCARRY1((char)pbVar11,'\x04') == cVar5 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  puVar39 = puVar46 + (uint)bVar49 * -2 + 1;
  out(*puVar46,(short)puVar27);
  uVar34 = *puVar47;
  bVar8 = *(byte *)puVar27;
  bVar7 = (byte)puVar47;
  *(byte *)puVar27 = *(byte *)puVar27 + bVar7;
  iVar16 = (CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + '\x03') & uVar34) + iRam00008c38;
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar27;
  pcVar12 = (char *)(iVar16 + (uint)CARRY1(bVar8,bVar7) + 0x1246f);
  bVar8 = *(byte *)puVar27;
  uVar19 = (undefined3)((uint)puVar47 >> 8);
  puVar44 = (uint *)CONCAT31(uVar19,bVar7 | bVar8);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar12 >> 8);
  puVar18 = (uint *)(CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + *pcVar12) + 0x1fbeef2);
  uVar34 = *puVar18;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  if (CARRY4(uVar34,(uint)puVar18)) {
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    pcVar12 = (char *)CONCAT31(uVar19,bVar7 | bVar8 | bRam00282809);
    cVar5 = (char)((uint)puVar47 >> 8);
    *pbVar45 = *pbVar45 + cVar5;
    *pcVar12 = *pcVar12 - cVar5;
    *(byte *)puVar18 = *(byte *)puVar18 + (char)puVar18;
    iVar16 = (int)pcVar12 - *(int *)pbVar45;
    puVar46 = puVar39 + (uint)bVar49 * -2 + 1;
    out(*puVar39,(short)puVar27);
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    puVar44 = (uint *)CONCAT22((short)((uint)iVar16 >> 0x10),
                               CONCAT11((byte)((uint)iVar16 >> 8) | bRambf73070b,(char)iVar16));
code_r0x00404d15:
    uVar34 = *puVar18;
    bVar8 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar8;
    puVar39 = puVar46 + (uint)bVar49 * -2 + 1;
    out(*puVar46,(short)puVar27);
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    bVar7 = bVar8 + in_AF * '\x06';
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),
                               bVar7 + (0x90 < (bVar7 & 0xf0) |
                                       CARRY1((byte)uVar34,bVar8) | in_AF * (0xf9 < bVar7)) * '`');
  }
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar7 = (byte)puVar18 | (byte)*puVar21;
  puVar46 = puVar39 + (uint)bVar49 * -2 + 1;
  uVar24 = SUB42(puVar27,0);
  out(*puVar39,uVar24);
  *(byte *)puVar44 = (byte)*puVar44 - bVar7;
  bVar8 = *(byte *)puVar27;
  bVar36 = (byte)puVar44;
  *(byte *)puVar27 = *(byte *)puVar27 + bVar36;
  iVar16 = CONCAT31((int3)((uint)puVar18 >> 8),bVar7) + *puVar46 + (uint)CARRY1(bVar8,bVar36);
  pbVar11 = pbVar42 + -*puVar27;
  uVar19 = (undefined3)((uint)iVar16 >> 8);
  cVar5 = (char)iVar16 + (byte)*puVar46 + (pbVar42 < (byte *)*puVar27);
  puVar39 = (uint *)CONCAT31(uVar19,cVar5);
  bVar8 = (byte)((uint)puVar44 >> 8);
  *(byte *)puVar44 = (byte)*puVar44 - bVar8;
  *puVar39 = (uint)(*puVar39 + (int)puVar39);
  bVar36 = bVar36 | *(byte *)((int)puVar27 + (int)puVar39);
  uVar25 = (undefined2)((uint)puVar44 >> 0x10);
  if ((POPCOUNT(bVar36) & 1U) == 0) {
    *(byte *)puVar39 = (byte)*puVar39 + cVar5;
    pcVar12 = (char *)CONCAT31(uVar19,cVar5 + '\x12');
    *pcVar12 = *pcVar12 + bVar8;
    puVar39 = (uint *)CONCAT31(uVar19,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar44 >> 8),bVar36));
    bVar7 = *(byte *)puVar27;
    *(byte *)puVar27 = *(byte *)puVar27 + bVar36;
    if (!CARRY1(bVar7,bVar36)) {
      pbVar42 = (byte *)((uint)puVar39 | *puVar39);
      out(*puVar46,uVar24);
      *pbVar42 = *pbVar42 + (char)pbVar42;
      bVar7 = *pbVar42;
      piVar17 = (int *)CONCAT22(uVar25,CONCAT11(bVar8 | bVar7,bVar36));
      iVar16 = (int)pbVar42 - *piVar17;
      *(byte *)puVar27 = *(byte *)puVar27 + bVar36;
      puVar39 = puVar46 + (uint)bVar49 * -2 + 1 + (uint)bVar49 * -2 + 1;
      out(puVar46[(uint)bVar49 * -2 + 1],uVar24);
      uRam12060000 = (undefined1)iVar16;
      *(char *)((int)piVar17 + iVar16) = *(char *)((int)piVar17 + iVar16) - (bVar8 | bVar7);
      *(byte *)puVar27 = *(byte *)puVar27 + bVar36;
      pbVar42 = (byte *)(iVar16 + -0x120edecd);
      *(byte *)puVar39 = (byte)*puVar39 + 1;
      bVar8 = *pbVar42;
      bVar7 = (byte)pbVar42;
      *pbVar42 = *pbVar42 + bVar7;
      pbVar11 = pbVar11 + ((-1 - *(int *)((int)puVar21 + 0x42)) - (uint)CARRY1(bVar8,bVar7));
      *pbVar42 = *pbVar42 + bVar7;
      bVar30 = (byte)pbVar45 | (byte)((uint)pbVar42 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar42;
      bVar8 = *(byte *)puVar27;
      pcVar12 = (char *)(((uint)pbVar42 | 0x11) + 0x511072c);
      puVar46 = puVar39 + (uint)bVar49 * -2 + 1;
      out(*puVar39,uVar24);
      puVar27 = (uint *)((int)puVar27 + 1);
      *pcVar12 = *pcVar12 + (char)pcVar12;
      bVar7 = (byte)((uint)pcVar12 >> 8);
      pbVar45 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar45 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar45 >> 8) | bVar8,bVar30)
                                                ) >> 8),bVar30 | bVar7);
      uVar19 = (undefined3)((uint)pcVar12 >> 8);
      bVar8 = (char)pcVar12 - *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar19,bVar8);
      *pcVar12 = *pcVar12 + bVar8;
      *(int *)((int)pcVar12 * 2) = (int)(pbVar45 + *(int *)((int)pcVar12 * 2));
      *(byte *)puVar27 = *(byte *)puVar27 + bVar8;
      *pbVar11 = *pbVar11 + bVar7;
      in_AF = 9 < (bVar8 & 0xf) | in_AF;
      uVar34 = CONCAT31(uVar19,bVar8 + in_AF * '\x06') & 0xffffff0f;
      bVar8 = (byte)uVar34;
      pbVar42 = (byte *)CONCAT22((short)(uVar34 >> 0x10),CONCAT11(bVar7 + in_AF,bVar8));
      *(byte *)puVar46 = (byte)*puVar46 + bVar36;
      *pbVar42 = *pbVar42 + bVar8;
      *pbVar42 = *pbVar42 + bVar8;
      bVar48 = CARRY1(bVar8,*pbVar42);
      puVar39 = (uint *)CONCAT31((int3)((uint)pbVar42 >> 8),bVar8 + *pbVar42);
      goto code_r0x00404d9a;
    }
    *pbVar45 = *pbVar45 - (char)puVar27;
  }
  *(byte *)puVar39 = (byte)*puVar39 + (char)puVar39;
  bVar48 = false;
  piVar17 = (int *)CONCAT22(uVar25,CONCAT11(bVar8 | *(byte *)puVar27,bVar36));
code_r0x00404d9a:
  do {
    pbVar43 = (byte *)puVar27;
    *puVar39 = (*puVar39 - (int)puVar39) - (uint)bVar48;
    bVar8 = (byte)((uint)piVar17 >> 8);
    uVar25 = (undefined2)((uint)piVar17 >> 0x10);
    bVar7 = (byte)piVar17;
    bVar36 = bVar8 + (byte)iRam00000c00;
    pbVar42 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar8,(byte)iRam00000c00));
    *pbVar43 = *pbVar43 + bVar7;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(char)pbVar45 - (byte)*puVar46);
    bVar8 = *pbVar42;
    puVar39 = (uint *)(pbVar42 + (uint)CARRY1(bVar36,*pbVar42) + *(int *)pbVar42);
    *pbVar43 = *pbVar43 + bVar7;
    cVar6 = ((bVar36 + bVar8) - *pbVar43) + (byte)*puVar39;
    pcVar12 = (char *)CONCAT22(uVar25,CONCAT11(cVar6,bVar7));
    puVar47 = puVar21 + (uint)bVar49 * -2 + 1;
    uVar34 = in((short)pbVar43);
    *puVar21 = uVar34;
    cVar5 = (char)puVar39;
    *(byte *)puVar39 = (byte)*puVar39 + cVar5;
    uVar19 = (undefined3)((uint)pbVar43 >> 8);
    bVar36 = (byte)pbVar43 | (byte)*puVar46;
    pcVar10 = (char *)CONCAT31(uVar19,bVar36);
    *pcVar12 = *pcVar12 + '\x01';
    bVar8 = (cVar6 - *pcVar10) + (byte)*puVar39;
    pcVar12 = (char *)CONCAT22(uVar25,CONCAT11(bVar8,bVar7));
    puVar21 = puVar47 + (uint)bVar49 * -2 + 1;
    uVar34 = in((short)pcVar10);
    *puVar47 = uVar34;
    *(byte *)puVar39 = (byte)*puVar39 + cVar5;
    bVar36 = bVar36 | (byte)*puVar46;
    puVar27 = (uint *)CONCAT31(uVar19,bVar36);
    *pcVar12 = *pcVar12 + '\x01';
    bVar48 = bVar7 < *(byte *)((int)puVar27 + 2);
    cVar6 = bVar7 - *(byte *)((int)puVar27 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  *(byte *)puVar39 = (byte)*puVar39 + cVar5;
  bVar7 = cVar5 + 0x7b;
  pbVar42 = (byte *)CONCAT31((int3)((uint)puVar39 >> 8),bVar7);
  pbVar45[(int)pbVar42] = pbVar45[(int)pbVar42] + bVar7;
  puVar39 = puVar46 + (uint)bVar49 * -2 + 1;
  uVar24 = SUB42(puVar27,0);
  out(*puVar46,uVar24);
  pbVar33 = pbVar45 + -1;
  *pbVar42 = *pbVar42 + bVar7;
  bVar8 = bVar8 | *(byte *)puVar27;
  piVar17 = (int *)CONCAT22(uVar25,CONCAT11(bVar8,cVar6));
  *pbVar42 = *pbVar42 + bVar7;
  *pbVar33 = *pbVar33 + bVar36;
  *pbVar33 = *pbVar33 ^ bVar7;
  *(byte *)puVar27 = *(byte *)puVar27 + bVar8;
  *pbVar42 = *pbVar42 + bVar7;
  do {
    bVar23 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar21 = (byte)*puVar21 + bVar23;
    bVar8 = *pbVar42;
    bVar7 = (byte)pbVar42;
    *pbVar42 = *pbVar42 + bVar7;
    *(byte **)(pbVar45 + 0x17) =
         (byte *)((int)puVar39 + (uint)CARRY1(bVar8,bVar7) + *(int *)(pbVar45 + 0x17));
    *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
    uVar20 = (undefined3)((uint)pbVar42 >> 8);
    bVar7 = bVar7 | (byte)*puVar39;
    puVar21 = (uint *)((int)puVar21 + *(int *)(pbVar11 + -0x34));
    *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
    bVar8 = bVar7 + 2;
    cVar5 = (char)((uint)pbVar43 >> 8);
    bVar30 = (byte)piVar17;
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      pbVar42 = (byte *)CONCAT31(uVar20,bVar7 + 0x15 + (0xfd < bVar7));
      if (0xec < bVar8 || CARRY1(bVar7 + 0x15,0xfd < bVar7)) {
        *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
      }
code_r0x00404e60:
      pbVar11 = pbVar11 + -*puVar27;
      bVar8 = *pbVar42;
      *pbVar42 = *pbVar42 + (byte)pbVar42;
      pbVar45 = (byte *)((int)puVar39 + (-(uint)CARRY1(bVar8,(byte)pbVar42) - *(int *)pbVar42));
      pbVar42 = pbVar42 + *(int *)pbVar42;
      puStack_80 = (uint *)CONCAT22(puStack_80._2_2_,in_DS);
      *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      bVar8 = *pbVar42;
      *pbVar42 = *pbVar42 + (byte)pbVar42;
      *(byte **)(pbVar33 + (int)puVar27) =
           (byte *)((int)puVar27 +
                   (uint)CARRY1(bVar8,(byte)pbVar42) + *(int *)(pbVar33 + (int)puVar27));
      pbVar42 = pbVar42 + 0x73061314;
      *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
      uVar20 = (undefined3)((uint)piVar17 >> 8);
      bVar30 = bVar30 | *(byte *)puVar27;
      pcVar10 = (char *)CONCAT31(uVar20,bVar30);
      *pbVar42 = *pbVar42 + (char)pbVar42;
      cVar5 = (char)pbVar42 + 'o';
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar42 >> 8),cVar5);
      *pcVar12 = *pcVar12 + cVar5;
      pbVar42 = pbVar45 + ((uint)bVar49 * -2 + 1) * 4;
      out(*(undefined4 *)pbVar45,uVar24);
      bVar8 = *(byte *)puVar27;
      *(byte *)puVar27 = *(byte *)puVar27 + bVar30;
      pcVar12 = pcVar12 + (uint)CARRY1(bVar8,bVar30) + *puVar21;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      *pcVar10 = *pcVar10 + bVar36;
      puVar46 = (uint *)(pbVar42 + ((uint)bVar49 * -2 + 1) * 4);
      out(*(undefined4 *)pbVar42,uVar24);
      *(byte *)puVar27 = *(byte *)puVar27 + bVar30;
      piVar17 = (int *)((uint)pcVar12 | *puVar21);
      pcVar10[0x390a0000] = pcVar10[0x390a0000] - bVar23;
      pbVar42 = (byte *)&cRam07000000;
      *(byte *)puVar21 = (byte)*puVar21 - bVar23;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar39 = (uint *)CONCAT31(uVar20,bVar30 | *(byte *)((int)piVar17 + (int)pcVar10));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar23;
      cRam07000000 = cRam07000000 + bVar23;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar45 = (byte *)((int)puVar21 + (int)pbVar11 * 2);
      bVar48 = SCARRY1(*pbVar45,(char)piVar17);
      *pbVar45 = *pbVar45 + (char)piVar17;
      bVar8 = *pbVar45;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar20,bVar8) = *(char *)CONCAT31(uVar20,bVar8) + bVar8;
    bVar7 = bVar7 + 0x71;
    pbVar42 = (byte *)CONCAT31(uVar20,bVar7);
    *pbVar42 = *pbVar42;
    *(byte *)puVar39 = (byte)*puVar39 + 1;
    *piVar17 = (*piVar17 - (int)pbVar42) - (uint)(0x90 < bVar8);
    uVar34 = *puVar39;
    *(byte *)puVar39 = (byte)*puVar39 + bVar7;
    if (!CARRY1((byte)uVar34,bVar7)) goto code_r0x00404e60;
    *pbVar42 = *pbVar42 + bVar7;
    uVar25 = (undefined2)((uint)piVar17 >> 0x10);
    bVar23 = bVar23 | *pbVar42;
    pbVar42 = pbVar42 + -*(int *)pbVar42;
    *pbVar33 = *pbVar33 + bVar23;
    cVar6 = bVar30 - *(byte *)((int)puVar27 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar23,bVar30)) >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  cVar29 = (char)pbVar42;
  *pbVar42 = *pbVar42 + cVar29;
  uVar20 = (undefined3)((uint)pbVar42 >> 8);
  pcVar12 = (char *)CONCAT31(uVar20,cVar29 + '{');
  out(*puVar39,uVar24);
  *pcVar12 = *pcVar12 + cVar29 + '{';
  bVar7 = cVar29 + 0x7e;
  pbVar43 = (byte *)CONCAT31(uVar20,bVar7);
  puVar46 = puVar39 + (uint)bVar49 * -2 + 1 + (uint)bVar49 * -2 + 1;
  out(puVar39[(uint)bVar49 * -2 + 1],uVar24);
  pbVar42 = pbVar45 + -2;
  *pbVar43 = *pbVar43 + bVar7;
  bVar8 = *(byte *)puVar27;
  puVar39 = (uint *)CONCAT22(uVar25,CONCAT11(bVar23 | bVar8,cVar6));
  *pbVar43 = *pbVar43 + bVar7;
  *pbVar42 = *pbVar42 + bVar36;
  *pbVar42 = *pbVar42 ^ bVar7;
  *(byte *)puVar27 = *(byte *)puVar27 + (bVar23 | bVar8);
  *pbVar43 = *pbVar43 + bVar7;
  *pbVar43 = *pbVar43 + cVar5;
  bVar8 = *pbVar43;
  *pbVar43 = *pbVar43 + bVar7;
  *(byte **)(pbVar45 + 0x18) =
       (byte *)((int)puVar46 + (uint)CARRY1(bVar8,bVar7) + *(int *)(pbVar45 + 0x18));
  *(byte **)pbVar43 = pbVar43 + *(int *)pbVar43;
  bVar7 = bVar7 | (byte)*puVar46;
  puVar21 = (uint *)((int)puVar21 + *(int *)(pbVar11 + -0x33));
  *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
  bVar48 = SCARRY1(bVar7,'\x02');
  bVar8 = bVar7 + 2;
  piVar17 = (int *)CONCAT31(uVar20,bVar8);
  if ((POPCOUNT(bVar8) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar8;
    return CONCAT31(uVar20,bVar7 + 0x71);
  }
code_r0x00404ebf:
  bVar7 = (byte)piVar17;
  uVar20 = (undefined3)((uint)piVar17 >> 8);
  if (bVar8 != 0 && bVar48 == (char)bVar8 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    puVar46[(int)puVar21 * 2] =
         (uint)((int)puVar27 + (uint)(0xd2 < bVar7) + puVar46[(int)puVar21 * 2]);
    return CONCAT31(uVar20,bVar7 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar8 = *pbVar42;
  *puVar46 = (uint)(*puVar46 + (int)piVar17);
  bVar30 = (byte)((uint)puVar39 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar30;
  *(byte *)piVar17 = (char)*piVar17 + bVar7;
  pbVar45 = (byte *)(CONCAT31(uVar19,bVar36 | bVar8) - *(int *)pbVar42);
  puVar47 = (uint *)CONCAT31(uVar20,bVar7 + 6);
  *(uint *)(pbVar42 + (int)puVar46 * 2) =
       (int)puVar47 + (uint)(0xf9 < bVar7) + *(int *)(pbVar42 + (int)puVar46 * 2);
  *(byte *)puVar39 = (byte)*puVar39 ^ bVar7 + 6;
  bVar7 = (byte)puVar39;
  *pbVar45 = *pbVar45 + bVar7;
  puVar44 = puVar46 + (uint)bVar49 * -2 + 1;
  uVar25 = SUB42(pbVar45,0);
  out(*puVar46,uVar25);
  *puVar39 = *puVar39 ^ (uint)puVar47;
  *pbVar45 = *pbVar45 + bVar7;
  puVar46 = (uint *)(pbVar42 + -*(int *)pbVar42);
  *(uint *)((int)puVar21 + 0x31) = *(uint *)((int)puVar21 + 0x31) | (uint)pbVar11;
  *puVar47 = *puVar47 + (int)puVar47;
  puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),CONCAT11(bVar30 | (byte)*puVar46,bVar7))
  ;
  *(byte **)(pbVar45 + 0x6e) = (byte *)(*(int *)(pbVar45 + 0x6e) + (int)puVar44);
  piVar17 = (int *)((uint)puVar47 | *puVar47);
  bVar36 = (byte)puVar46;
  *(byte *)puVar21 = (byte)*puVar21 - bVar36;
  bVar8 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar7;
  if (CARRY1(bVar8,bVar7)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar8 = pbVar45[0x11];
    uVar24 = (undefined2)((uint)puVar46 >> 0x10);
    puVar47 = puVar44 + (uint)bVar49 * -2 + 1;
    out(*puVar44,uVar25);
    puVar39 = (uint *)((int)puVar39 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar26 = (byte)((uint)puVar46 >> 8) | bVar8 | *pbVar45;
    pcVar12 = (char *)((int)piVar17 + -0x21000001);
    bVar8 = (byte)pcVar12 | 0x11;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    cVar5 = bVar8 - 7;
    pcVar10 = (char *)CONCAT31(uVar19,cVar5);
    *puVar21 = (uint)(pcVar10 + (uint)(bVar8 < 7) + *puVar21);
    puVar44 = puVar47 + (uint)bVar49 * -2 + 1;
    out(*puVar47,uVar25);
    pbVar45 = pbVar45 + 1;
    *pcVar10 = *pcVar10 + cVar5;
    bVar30 = (byte)((uint)pcVar12 >> 8);
    bVar23 = bVar36 | bVar30;
    bVar7 = cVar5 - *pcVar10;
    bVar8 = *(byte *)puVar39;
    *(byte *)puVar39 = *(byte *)puVar39 + bVar7;
    *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7 + CARRY1(bVar8,bVar7);
    *pbVar45 = *pbVar45 + bVar7;
    *(byte *)puVar44 = (byte)*puVar44 + bVar23;
    bVar8 = (byte)((uint)pbVar45 >> 8);
    *(byte *)puVar39 = *(byte *)puVar39 + bVar7 + CARRY1((byte)pbVar45,bVar8);
    piVar17 = (int *)CONCAT31(uVar19,bVar7);
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                               CONCAT11(bVar8 + bVar30,(byte)pbVar45 + bVar8));
    puVar46 = (uint *)CONCAT22(uVar24,CONCAT11(bVar26 + *(char *)(CONCAT31((int3)(CONCAT22(uVar24,
                                                  CONCAT11(bVar26,bVar36)) >> 8),bVar23) + 0x76),
                                               bVar23));
    puStack_74._0_2_ = (ushort)puStack_80;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar12 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar39);
    cVar29 = (char)puVar39;
    *pbVar45 = *pbVar45 + cVar29;
    uVar25 = (undefined2)((uint)puVar46 >> 0x10);
    cVar32 = (char)puVar46;
    cVar37 = (char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + 0x75);
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar5 = (char)pcVar12 + 'o';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5);
    *pcVar12 = *pcVar12 + cVar5;
    cVar35 = (char)((uint)puVar39 >> 8);
    *pbVar11 = *pbVar11 - cVar35;
    pbVar45[1] = pbVar45[1] + cVar29;
    pcVar12 = pcVar12 + -0x757b021b;
    cVar5 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar5;
    uVar19 = (undefined3)((uint)pcVar12 >> 8);
    cVar6 = cVar5 + 'o';
    pcVar12 = (char *)CONCAT31(uVar19,cVar6);
    pbVar42 = pbVar45 + 2;
    *pcVar12 = *pcVar12 + cVar6;
    iVar16 = CONCAT22(uVar25,CONCAT11(cVar37 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar37,cVar32)) +
                                                        0x76),cVar32));
    *pcVar12 = *pcVar12 + cVar6;
    pcVar12 = (char *)CONCAT31(uVar19,cVar5 + -0x22);
    puVar47 = (uint *)((int)puVar21 + (uint)bVar49 * -2 + 1);
    pbVar43 = (byte *)((int)puVar44 + (uint)bVar49 * -2 + 1);
    *(byte *)puVar21 = (byte)*puVar44;
    *pcVar12 = *pcVar12 + cVar5 + -0x22;
    *(byte *)((int)puVar39 + (int)pcVar12) =
         *(byte *)((int)puVar39 + (int)pcVar12) - (char)((uint)pbVar42 >> 8);
    *pbVar42 = *pbVar42 + cVar29;
    bVar7 = cVar35 - pbVar45[4];
    pbVar33 = pbVar43 + (uint)bVar49 * -8 + 4;
    out(*(undefined4 *)pbVar43,(short)pbVar42);
    puVar46 = (uint *)((uint)(pcVar12 + *(int *)(pcVar12 + iVar16)) ^ 0x280a0001);
    *(byte *)puVar46 = (byte)*puVar46 << 1 | (char)(byte)*puVar46 < '\0';
    *pbVar33 = *pbVar33 + (char)puVar46;
    pbVar33 = pbVar33 + *(int *)(pbVar45 + -0x5c);
    pbVar45 = (byte *)((uint)puVar46 | *puVar46);
    *pbVar33 = *pbVar33 + (char)pbVar45;
    puVar46 = (uint *)CONCAT31((int3)((uint)iVar16 >> 8),cVar32 - (char)pbVar42);
    bVar8 = *pbVar45;
    puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),CONCAT11(bVar7 + *pbVar45,cVar29));
    iVar16 = *(int *)pbVar45;
    *pbVar42 = *pbVar42 + cVar29;
    cVar5 = (char)(pbVar45 + (uint)CARRY1(bVar7,bVar8) + iVar16) + 'r';
    puVar21 = (uint *)CONCAT31((int3)((uint)(pbVar45 + (uint)CARRY1(bVar7,bVar8) + iVar16) >> 8),
                               cVar5);
    pbVar45 = (byte *)CONCAT22((short)((uint)pbVar42 >> 0x10),CONCAT11(10,(char)pbVar42));
    *(char *)(puVar21 + 10) = (char)puVar21[10] + '\n';
    *pbVar33 = *pbVar33 + cVar5;
    puVar44 = (uint *)(pbVar33 + *(int *)(pbVar45 + -0x5e));
    uVar34 = *puVar21;
    cVar5 = (char)((uint)puVar21 | uVar34);
    *(byte *)puVar44 = (byte)*puVar44 + cVar5;
    uVar19 = (undefined3)(((uint)puVar21 | uVar34) >> 8);
    cVar6 = cVar5 + (byte)*puVar46;
    puVar21 = (uint *)CONCAT31(uVar19,cVar6);
    if (SCARRY1(cVar5,(byte)*puVar46) == cVar6 < '\0') goto code_r0x00405090;
    *(byte *)puVar21 = (byte)*puVar21 + cVar6;
    piVar17 = (int *)CONCAT31(uVar19,cVar6 + '\x02');
    puVar21 = puVar47;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar45) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  cVar5 = (char)piVar17 + '}';
  pbVar42 = (byte *)CONCAT31(uVar19,cVar5);
  pbVar45[(int)pbVar42] = pbVar45[(int)pbVar42] + cVar5;
  pbVar45[0x280a0000] = pbVar45[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar8 = (byte)puVar39 & 7;
  *pbVar42 = *pbVar42 << bVar8 | *pbVar42 >> 8 - bVar8;
  *(byte *)puVar44 = (byte)*puVar44 + cVar5;
  cVar29 = (char)puVar46 - (byte)*puVar44;
  uVar25 = (undefined2)((uint)puVar46 >> 0x10);
  cVar35 = (char)((uint)puVar46 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar46 >> 8),cVar29) + 0x7c);
  pcVar12 = (char *)CONCAT22(uVar25,CONCAT11(cVar35,cVar29));
  *pbVar42 = *pbVar42 + cVar5;
  bVar7 = (char)piVar17 + 0xa7U & *pbVar45;
  puVar47 = (uint *)((int)puVar21 + *(int *)(pbVar11 + 0x7c));
  *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
  bVar7 = bVar7 + 0x2a;
  pbVar42 = (byte *)CONCAT31(uVar19,bVar7);
  *pbVar42 = *pbVar42 + bVar7;
  *pcVar12 = *pcVar12 + cVar29;
  *pbVar45 = *pbVar45 ^ bVar7;
  *pcVar12 = *pcVar12 + bVar7;
  bVar8 = *pbVar42;
  *pbVar42 = *pbVar42 + bVar7;
  cVar5 = (bVar7 - *pbVar42) - CARRY1(bVar8,bVar7);
  *(byte *)puVar39 = (byte)*puVar39 + (byte)pbVar45;
  cVar35 = cVar35 + pcVar12[0x7b];
  *(char *)CONCAT31(uVar19,cVar5) = *(char *)CONCAT31(uVar19,cVar5) + cVar5;
  pcVar12 = (char *)CONCAT31(uVar19,cVar5 + 'o');
  *pcVar12 = *pcVar12 + cVar5 + 'o';
  pcVar12 = pcVar12 + 0x2ed7fde6;
  cVar6 = (char)pcVar12;
  *pcVar12 = *pcVar12 + cVar6;
  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar35,cVar29)) + 0x7b);
  *pcVar12 = *pcVar12 + cVar6;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar12 >> 8),cVar6 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar20 = (undefined3)((uint)pbVar45 >> 8);
  bVar7 = (byte)pbVar45 | (byte)*puVar44;
  pbVar43 = (byte *)CONCAT31(uVar20,bVar7);
  uVar34 = CONCAT22(uVar25,CONCAT11(cVar35 + cVar5,cVar29)) | (uint)puVar44;
  uVar19 = (undefined3)((uint)piVar17 >> 8);
  bVar8 = (byte)piVar17 | *pbVar43;
  pbVar42 = (byte *)CONCAT31(uVar19,bVar8);
  cVar5 = (byte)puVar39 - bVar7;
  puVar39 = (uint *)CONCAT31((int3)((uint)puVar39 >> 8),cVar5);
  *pbVar42 = *pbVar42 + bVar8;
  puVar46 = puVar44 + (uint)bVar49 * -2 + 1;
  out(*puVar44,(short)pbVar43);
  *pbVar42 = bVar8;
  *pbVar43 = *pbVar43 + cVar5;
  puVar44 = puVar46 + (uint)bVar49 * -2 + 1;
  out(*puVar46,(short)pbVar43);
  *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
  puVar46 = (uint *)(CONCAT31((int3)(uVar34 >> 8),(char)uVar34 - (char)((uint)pbVar45 >> 8)) |
                    (uint)puVar44);
  pbVar45 = (byte *)CONCAT31(uVar20,(bVar7 | (byte)*puVar44) + (byte)*puVar47);
  cVar5 = bVar8 - (byte)*puVar47;
  puVar21 = (uint *)CONCAT31(uVar19,cVar5 - *(char *)CONCAT31(uVar19,cVar5));
code_r0x00405090:
  *puVar21 = (uint)(pbVar45 + *puVar21);
  cVar5 = (char)puVar21;
  *(byte *)puVar21 = (byte)*puVar21 + cVar5;
  *(byte *)puVar21 = (byte)*puVar21 + cVar5;
  *(byte *)puVar21 = (byte)*puVar21 + cVar5;
  *puVar39 = *puVar39 - (int)pbVar11;
  uVar34 = *puVar44;
  bVar8 = (byte)pbVar45;
  *(byte *)puVar44 = (byte)*puVar44 + bVar8;
  *(byte *)puVar21 = (byte)*puVar21 + cVar5 + CARRY1((byte)uVar34,bVar8);
  *(byte *)puVar39 = (byte)*puVar39 + cVar5;
  uVar34 = *puVar46;
  *(byte *)puVar46 = (byte)*puVar46 + 0x72;
  *(byte *)puVar46 = (byte)*puVar46;
  cVar5 = (char)((uint)pbVar45 >> 8);
  if (SCARRY1((byte)uVar34,'r')) {
    puVar44 = (uint *)((int)puVar44 + *(int *)(pbVar45 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar44 = (byte)*puVar44 + (char)puVar21;
      uVar19 = (undefined3)((uint)puVar21 >> 8);
      cVar6 = (char)puVar21 + (byte)*puVar46;
      pcVar12 = (char *)CONCAT31(uVar19,cVar6);
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                 CONCAT11((char)((uint)puVar46 >> 8) +
                                          *(byte *)((int)puVar46 + 0x7b),(char)puVar46));
      *pcVar12 = *pcVar12 + cVar6;
      in_AF = 9 < (cVar6 + 0x6fU & 0xf) | in_AF;
      uVar34 = CONCAT31(uVar19,cVar6 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar36 = (byte)uVar34;
      piVar17 = (int *)CONCAT22((short)(uVar34 >> 0x10),
                                CONCAT11((char)((uint)puVar21 >> 8) + in_AF,bVar36));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar36 = bVar36 | *(byte *)(piVar17 + 0x354a);
      bVar36 = bVar36 - *(char *)CONCAT31(uVar19,bVar36);
      pbVar42 = (byte *)CONCAT31(uVar19,bVar36);
      bVar7 = *pbVar42;
      *pbVar42 = *pbVar42 + bVar36;
      puVar44 = (uint *)((int)puVar44 + (-(uint)CARRY1(bVar7,bVar36) - *(int *)pbVar42));
      puVar21 = (uint *)(pbVar42 + 0xfc00);
      *pbVar45 = *pbVar45 + cVar5;
      uVar34 = *puVar21;
      bVar7 = (byte)puVar21;
      *(byte *)puVar21 = (byte)*puVar21 + bVar7;
      uVar14 = (uint)CARRY1((byte)uVar34,bVar7);
      uVar34 = *puVar46;
      uVar1 = *puVar46;
      *puVar46 = (uint)((byte *)(uVar1 + (int)puVar21) + uVar14);
      if (!CARRY4(uVar34,(uint)puVar21) && !CARRY4(uVar1 + (int)puVar21,uVar14)) break;
      *(byte *)puVar21 = (byte)*puVar21 + bVar7;
    }
  }
  uVar34 = (uint)puVar21 | *puVar21;
  uVar25 = SUB42(pbVar45,0);
  *(byte *)puVar44 = (byte)*puVar44 + (char)uVar34;
  piVar17 = (int *)(uVar34 + 0xc1872);
  if (SCARRY4(uVar34,0xc1872)) {
    cVar6 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *pbVar45 = *pbVar45 + cVar6;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *(byte *)puVar46 = (byte)*puVar46 + (char)puVar39;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar8;
    puVar21 = puVar44;
    goto code_r0x00405117;
  }
  do {
    uVar34 = *puVar44;
    bVar8 = (byte)piVar17;
    *(byte *)puVar44 = (byte)*puVar44 + bVar8;
    if (CARRY1((byte)uVar34,bVar8)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar19 = (undefined3)((uint)puVar39 >> 8);
      bVar7 = (byte)puVar39 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar39 = (uint *)CONCAT31(uVar19,bVar7 | *(byte *)CONCAT31(uVar19,bVar7));
      uVar19 = (undefined3)((uint)piVar17 >> 8);
      bVar8 = bVar8 | *pbVar45;
      pcVar12 = (char *)CONCAT31(uVar19,bVar8);
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        puVar27 = puVar44 + (uint)bVar49 * -2 + 1;
        out(*puVar44,uVar25);
        uVar34 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar8);
        *(byte *)puVar27 = (byte)*puVar27 + bVar8;
        pcVar12 = (char *)(uVar34 | 8);
        cVar6 = (char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + 0x7a);
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(cVar6,(char)puVar46));
        *pcVar12 = *pcVar12 + (char)pcVar12;
        cVar5 = (char)pcVar12 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar34 >> 8),cVar5);
        *(char *)piVar17 = (char)*piVar17 + cVar5;
        *(byte *)puVar39 = (byte)*puVar39 + 1;
        puVar21 = puVar27 + (uint)bVar49 * -2 + 1;
        out(*puVar27,uVar25);
        pbVar45 = (byte *)((uint)pbVar45 ^ uRam08122c04);
        iVar16 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar16 * 2) = *(char *)(iVar16 * 2) - cVar6;
        do {
          bVar8 = (byte)iVar16;
          *(byte *)puVar21 = (byte)*puVar21 + bVar8;
          bVar48 = CARRY1(bVar8,(byte)*puVar46);
          uVar19 = (undefined3)((uint)iVar16 >> 8);
          cVar5 = bVar8 + (byte)*puVar46;
          pbVar42 = (byte *)CONCAT31(uVar19,cVar5);
          uVar9 = in_DS;
          uVar4 = uStack_c0;
          if (SCARRY1(bVar8,(byte)*puVar46) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar42 = *pbVar42 + cVar5;
          uVar34 = CONCAT31(uVar19,cVar5 + '\'') + 0x1ebd9f3;
          uStack_c4 = (undefined1)(ushort)puStack_74;
          uStack_c3 = (undefined1)((ushort)puStack_74 >> 8);
          piVar17 = (int *)(uVar34 ^ 0x73060000);
          puVar39 = (uint *)((int)puVar39 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                     CONCAT11((byte)((uint)puVar46 >> 8) | pbVar11[0x7e],
                                              (char)puVar46));
          cVar5 = (char)uVar34;
          *(char *)piVar17 = (char)*piVar17 + cVar5;
          uVar34 = CONCAT31((int3)((uint)piVar17 >> 8),cVar5 + '\x02');
          bVar48 = 0xd9f2d2da < uVar34;
          iVar16 = uVar34 + 0x260d2d25;
          pbVar43 = pbVar11;
          do {
            uVar19 = (undefined3)((uint)iVar16 >> 8);
            bVar7 = (char)iVar16 + -2 + bVar48;
            pbVar42 = (byte *)CONCAT31(uVar19,bVar7);
            bVar8 = *pbVar42;
            *pbVar42 = *pbVar42 + bVar7;
            bVar36 = (byte)puVar46;
            uStack_c0 = (ushort)puStack_74;
            if (CARRY1(bVar8,bVar7)) {
              *pbVar42 = *pbVar42 + bVar7;
              puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                         CONCAT11((byte)((uint)puVar46 >> 8) | pbVar43[0x7f],bVar36)
                                        );
              *pbVar42 = *pbVar42 + bVar7;
              pbVar42 = (byte *)CONCAT31(uVar19,bVar7 + 0x2a);
              *pbVar42 = *pbVar42 + bVar7 + 0x2a;
              *(byte *)puVar46 = (byte)*puVar46 + (char)pbVar45;
              uVar9 = in_DS;
              while( true ) {
                in_DS = uVar9;
                bVar7 = (byte)pbVar42;
                *pbVar45 = *pbVar45 ^ bVar7;
                *pbVar45 = *pbVar45 + (char)puVar46;
                *pbVar42 = *pbVar42 + bVar7;
                *(byte *)puVar46 = (byte)*puVar46 + (char)((uint)pbVar45 >> 8);
                bVar8 = *pbVar42;
                *pbVar42 = *pbVar42 + bVar7;
                uVar1 = *puVar46;
                uVar34 = *puVar46;
                *puVar46 = (uint)(pbVar42 + uVar34 + CARRY1(bVar8,bVar7));
                uVar19 = (undefined3)((uint)pbVar42 >> 8);
                if (CARRY4(uVar1,(uint)pbVar42) ||
                    CARRY4((uint)(pbVar42 + uVar34),(uint)CARRY1(bVar8,bVar7))) break;
                *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                pcVar12 = (char *)CONCAT22((short)((uint)puVar39 >> 0x10),
                                           CONCAT11((char)((uint)puVar39 >> 8) + *pbVar42,
                                                    (char)puVar39));
                *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                piVar17 = (int *)CONCAT31(uVar19,bVar7 | (byte)*puVar46);
                puVar39 = puVar21;
                while( true ) {
                  puVar21 = puVar39 + (uint)bVar49 * -2 + 1;
                  out(*puVar39,(short)pbVar45);
                  pbVar45 = pbVar45 + 1;
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  bVar36 = (byte)((uint)pcVar12 >> 8) | *pbVar45;
                  uVar19 = (undefined3)((uint)piVar17 >> 8);
                  bVar7 = (byte)piVar17 ^ *pbVar45;
                  pcVar10 = (char *)CONCAT31(uVar19,bVar7);
                  cRam282b0000 = cRam282b0000 - bVar36;
                  *pcVar10 = *pcVar10 + bVar7;
                  pbVar11 = pbVar43 + -*(int *)pbVar45;
                  uStack_c4 = (undefined1)in_DS;
                  uStack_c3 = (undefined1)(in_DS >> 8);
                  bVar8 = *(byte *)((int)puVar47 + 0x17);
                  *pcVar10 = *pcVar10 + bVar7;
                  puVar39 = (uint *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                             CONCAT11(bVar36 + bVar8 | *pbVar45,(char)pcVar12));
                  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
                  *(byte *)((int)pcVar10 * 2) = *(byte *)((int)pcVar10 * 2) ^ bVar7;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  bVar7 = bVar7 + in_AF * -6;
                  pbVar42 = (byte *)CONCAT31(uVar19,bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
                  *(char *)((int)pbVar42 * 2) =
                       *(char *)((int)pbVar42 * 2) + (char)((uint)pbVar45 >> 8);
                  bVar48 = CARRY1((byte)*puVar39,(byte)pbVar45);
                  *(byte *)puVar39 = (byte)*puVar39 + (byte)pbVar45;
                  uVar9 = in_DS;
                  uVar4 = (ushort)puStack_74;
GenerateStatusText:
                  in_DS = uVar4;
                  pbVar43 = pbVar11;
                  uStack_c0 = in_DS;
                  if (!bVar48) break;
                  *pbVar42 = *pbVar42 + (char)pbVar42;
                  iVar16 = CONCAT31((int3)((uint)puVar39 >> 8),(byte)puVar39 | *pbVar45);
                  uVar25 = (undefined2)((uint)puVar46 >> 0x10);
                  cVar29 = (char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + 0x7d);
                  *pbVar42 = *pbVar42 + (char)pbVar42;
                  *(byte *)puVar47 = (byte)*puVar47 - (char)((uint)puVar39 >> 8);
                  iVar16 = iVar16 - *(int *)(&uRam0b0a0000 + iVar16);
                  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar29,(char)puVar46)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar21,(short)pbVar45);
                  pbVar45 = (byte *)CONCAT22(uStack_c2,CONCAT11(uStack_c3,uStack_c4));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar39 = puVar21 + (uint)bVar49 * -2 + 1 + (uint)bVar49 * -2 + 1;
                  out(puVar21[(uint)bVar49 * -2 + 1],CONCAT11(uStack_c3,uStack_c4));
                  pbVar43 = pbVar11 + 1;
                  cVar6 = (char)iVar16;
                  pcVar12 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                             CONCAT11((byte)((uint)iVar16 >> 8) |
                                                      *(byte *)((int)puVar47 + 0x46),cVar6));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_74._0_2_ = CONCAT11(uStack_c3,uStack_c4);
                  uVar19 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar39,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar19,0x5f);
                  puVar47 = (uint *)((int)puVar47 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar46 = (uint *)CONCAT22(uVar25,CONCAT11(cVar29 + cVar5 | (byte)puVar39[-0x20],
                                                             (char)puVar46));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar21 = (uint *)CONCAT31(uVar19,0x8c);
                  puVar39[(int)puVar47 * 2] = (uint)(pbVar45 + puVar39[(int)puVar47 * 2]);
                  uVar34 = *puVar39;
                  *(byte *)puVar39 = (byte)*puVar39 + 0x8c;
                  if ((byte)uVar34 < 0x74) {
                    *pbVar45 = *pbVar45 + cVar6;
                    *(byte *)puVar46 = (byte)*puVar46 >> 1;
                    *(char *)puVar21 = (char)*puVar21 + -0x74;
                    *puVar21 = (uint)(pbVar43 + *puVar21);
                    *puVar21 = *puVar21 << 1 | (uint)((int)*puVar21 < 0);
                    *pbVar45 = *pbVar45 + cVar6;
                    pbVar11[2] = pbVar11[2] - cVar6;
                    *pbVar45 = *pbVar45 + cVar6;
                    pbVar42 = (byte *)CONCAT31(uVar19,0x83);
                    puVar21 = puVar46;
                    goto code_r0x00405312;
                  }
                  *puVar21 = (uint)(*puVar21 + (int)puVar21);
                  piVar17 = (int *)(CONCAT31(uVar19,(byte)puVar21[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar21[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar17 = (int *)((int)piVar17 + *puVar39);
                }
              }
              *pbVar45 = *pbVar45 + bVar7;
              *(byte *)puVar46 = (byte)*puVar46 - (char)pbVar45;
              *pbVar42 = *pbVar42 + bVar7;
              pbVar42 = (byte *)CONCAT31(uVar19,bVar7 | (byte)*puVar46);
            }
            else {
              cVar5 = (char)puVar39;
              *pbVar45 = *pbVar45 + cVar5;
              *(byte **)pbVar42 = pbVar45 + *(int *)pbVar42;
              *pbVar42 = *pbVar42 + bVar7;
              bVar7 = bVar7 + *pbVar42;
              pbVar42 = (byte *)CONCAT31(uVar19,bVar7);
              if (-1 < (char)bVar7) {
                *(byte *)puVar46 = (byte)*puVar46 + bVar36;
                out(*puVar21,(short)pbVar45);
                pbVar45 = pbVar45 + 1;
                *pbVar42 = *pbVar42 + bVar7;
                puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),
                                           bVar36 | (byte)((uint)iVar16 >> 8));
                cVar6 = bVar7 - (byte)*puVar39;
                pcVar12 = (char *)CONCAT31(uVar19,cVar6);
                *pcVar12 = *pcVar12 + cVar6 + (bVar7 < (byte)*puVar39);
                *pbVar45 = *pbVar45 + cVar6;
                pcVar12 = (char *)((int)pcVar12 * 2 + 0x79);
                *pcVar12 = *pcVar12 + (char)((uint)pbVar45 >> 8);
                pbVar42 = (byte *)in((short)pbVar45);
                puVar21 = puVar21 + (uint)bVar49 * -2 + 1;
              }
              *(byte *)puVar21 = (byte)*puVar21 + cVar5;
              *pbVar42 = *pbVar42 + (char)pbVar42;
              *pbVar42 = *pbVar42 + (char)pbVar42;
              uStack_c4 = (undefined1)in_DS;
              uStack_c3 = (undefined1)(in_DS >> 8);
              bVar8 = *pbVar42;
              bVar36 = (byte)((uint)puVar39 >> 8);
              bVar30 = bVar36 + *pbVar42;
              iVar16 = *(int *)pbVar42;
              *pbVar45 = *pbVar45 + cVar5;
              bVar7 = (char)(pbVar42 + (uint)CARRY1(bVar36,bVar8) + iVar16) - (byte)*puVar46;
              pbVar42 = (byte *)CONCAT31((int3)((uint)(pbVar42 + (uint)CARRY1(bVar36,bVar8) + iVar16
                                                      ) >> 8),bVar7);
              *(byte *)puVar46 = (byte)*puVar46 ^ bVar7;
              *pbVar43 = *pbVar43 + (char)puVar46;
              *pbVar42 = *pbVar42 + bVar7;
              *pbVar42 = *pbVar42 + bVar7;
              *pbVar42 = *pbVar42 + bVar7;
              puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),
                                         CONCAT11(bVar30 + *pbVar42,cVar5));
              pbVar42 = pbVar42 + (uint)CARRY1(bVar30,*pbVar42) + *(int *)pbVar42;
              *pbVar45 = *pbVar45 + cVar5;
              puVar21 = (uint *)((int)puVar21 + *(int *)(pbVar45 + 0x3e));
            }
            *(byte *)puVar21 = (byte)*puVar21 + (char)pbVar42;
            cVar5 = (char)pbVar42 + 'r';
            puVar21 = (uint *)((int)puVar21 + -1);
            uVar34 = CONCAT31((int3)((uint)pbVar42 >> 8),cVar5);
            *(byte *)puVar21 = *(byte *)puVar21 + cVar5;
            bVar48 = 0xfff38f8d < uVar34;
            iVar16 = uVar34 + 0xc7072;
            pbVar11 = pbVar43;
          } while (SCARRY4(uVar34,0xc7072));
        } while( true );
      }
      *pcVar12 = *pcVar12 + bVar8;
      bVar8 = bVar8 + 0x6f;
      pbVar42 = (byte *)CONCAT31(uVar19,bVar8);
      bVar7 = *pbVar42;
      *pbVar42 = *pbVar42 + bVar8;
      uVar19 = (undefined3)
               ((uint)(pbVar42 + (uint)CARRY1(bVar7,bVar8) + *(int *)((int)puVar39 + (int)pbVar45))
               >> 8);
      cVar6 = (char)(pbVar42 + (uint)CARRY1(bVar7,bVar8) + *(int *)((int)puVar39 + (int)pbVar45)) +
              'E';
      pcVar12 = (char *)CONCAT31(uVar19,cVar6);
      *pcVar12 = *pcVar12 + cVar6;
      cVar6 = cVar6 + *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar19,cVar6);
      *pcVar12 = *pcVar12 + cVar6;
      puVar21 = (uint *)CONCAT31(uVar19,cVar6 + *pcVar12);
      *(char *)puVar21 = (char)*puVar21 + cVar6 + *pcVar12;
      pbVar42 = (byte *)((uint)puVar21 | *puVar21);
      bVar8 = *pbVar42;
      bVar7 = (byte)pbVar42;
      *pbVar42 = *pbVar42 + bVar7;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar42 >> 8),bVar7 + CARRY1(bVar8,bVar7));
      puVar21 = puVar44;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar46 = (uint *)((int)puVar46 - *puVar46);
      puVar44 = puVar21 + (uint)bVar49 * -2 + 1;
      out(*puVar21,uVar25);
    }
    *pbVar45 = *pbVar45 + (char)puVar39;
    bVar48 = puVar46 < (uint *)*piVar17;
    puVar46 = (uint *)((int)puVar46 - *piVar17);
    bVar8 = (byte)((uint)puVar39 >> 8);
    *(byte *)((int)puVar47 + 0x39) = (*(byte *)((int)puVar47 + 0x39) - bVar8) - bVar48;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar34 = *puVar46;
    *(int *)((int)puVar47 + 0x39) = *(int *)((int)puVar47 + 0x39) - (int)pbVar11;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),
                               CONCAT11(bVar8 | (byte)uVar34 | (byte)*puVar46,(char)puVar39));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar8 = (char)piVar17 + 0x28;
  pbVar42 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar8);
  *pbVar42 = *pbVar42 ^ bVar8;
  *(byte *)puVar46 = (byte)*puVar46 + (char)((uint)pcVar12 >> 8);
  bVar8 = *pbVar45;
  *pbVar45 = *pbVar45 + (byte)pcVar12;
  piVar17 = (int *)(((uint)pbVar42 | 0x1496f09) + *puVar47 + (uint)CARRY1(bVar8,(byte)pcVar12));
  puVar44 = puVar39 + (uint)bVar49 * -2 + 1;
  out(*puVar39,(short)pbVar45);
  pbVar11 = pbVar45 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 | (byte)*puVar46);
  cVar5 = (char)piVar17 + '\x13';
  pbVar42 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar5);
  puVar21 = puVar46;
  puVar39 = puVar44;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar45 = *pbVar45 - (char)((uint)pbVar11 >> 8);
    *pbVar42 = *pbVar42 + cVar5;
code_r0x00405396:
    bVar8 = *pbVar42;
    bVar7 = (byte)pbVar42;
    *pbVar42 = *pbVar42 + bVar7;
    *puVar44 = (uint)(pbVar42 + (uint)CARRY1(bVar8,bVar7) + *puVar44);
    out(*puVar44,(short)pbVar45);
    *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
    *(byte **)pbVar42 = pbVar42 + *(int *)pbVar42;
    pcVar12 = (char *)CONCAT22((short)((uint)pbVar42 >> 0x10),
                               CONCAT11((byte)((uint)pbVar42 >> 8) |
                                        (byte)puVar44[(uint)bVar49 * -2 + 1],bVar7));
    *(char **)((int)puVar47 + -1) = pcVar12 + *(int *)((int)puVar47 + -1);
    out(puVar44[(uint)bVar49 * -2 + 1],(short)pbVar45);
    *pcVar12 = *pcVar12 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar42 = *pbVar42 + (char)pbVar42;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar42 >> 8),(char)pbVar42 + 'o');
  puVar46 = (uint *)((int)puVar21 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar19 = (undefined3)((uint)pbVar45 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar36 = (byte)pbVar45 | *(byte *)puVar46 | *(byte *)puVar46;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*puVar39,(short)CONCAT31(uVar19,bVar36));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar36 = bVar36 | (byte)piVar17;
  iVar28 = CONCAT31(uVar19,bVar36);
  pbVar45 = (byte *)((int)piVar17 - *piVar17);
  cVar5 = (char)pbVar45;
  *pcVar12 = *pcVar12 + cVar5;
  cVar6 = (char)pcVar12 - bVar36;
  *pbVar45 = *pbVar45 + cVar5;
  uVar25 = (undefined2)((uint)pcVar12 >> 0x10);
  bVar7 = (byte)((uint)pcVar12 >> 8) | *pbVar45;
  pbVar43 = pbVar43 + -1;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  bVar8 = *(byte *)(CONCAT22(uVar25,CONCAT11(bVar7,cVar6)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar45;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar43;
  *pbVar45 = *pbVar45 + cVar5;
  bVar8 = bVar7 | bVar8 | *(byte *)puVar46;
  iVar22 = CONCAT22(uVar25,CONCAT11(bVar8,cVar6));
  pbVar11 = (byte *)((uint)(puVar39 + (uint)bVar49 * -2 + 1) ^ *(uint *)(iVar28 + -0x43));
  iVar16 = *(int *)pbVar45;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  if (SCARRY4(iVar16,(int)pbVar45)) {
    *pbVar45 = *pbVar45 + cVar5;
  }
  pbVar42 = pbVar45 + 0x5674;
  puVar47 = (uint *)((int)puVar47 +
                    (-(uint)((byte *)0xffffa98b < pbVar45) - *(int *)(pbVar11 + -0x7f)));
  bVar7 = (byte)pbVar42;
  *pbVar42 = *pbVar42 + bVar7;
  uVar20 = (undefined3)((uint)pbVar42 >> 8);
  bVar30 = bVar7 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar20,bVar30);
  *(uint *)(pbVar11 + (int)puVar47 * 8) =
       *(int *)(pbVar11 + (int)puVar47 * 8) + iVar28 + (uint)(0xd2 < bVar7);
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar30;
  if (!CARRY1(bVar7,bVar30)) {
    do {
      pbVar42 = (byte *)(iVar28 + 1);
      bVar7 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      bVar36 = (byte)((uint)piVar17 >> 8);
      bVar30 = (byte)puVar46 | bVar36;
      puVar39 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),bVar30);
      out(*(undefined4 *)pbVar11,(short)pbVar42);
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      uVar25 = (undefined2)((uint)iVar22 >> 0x10);
      cVar5 = (char)iVar22;
      pbVar45 = (byte *)CONCAT22(uVar25,CONCAT11((byte)((uint)iVar22 >> 8) | *pbVar42,cVar5));
      bVar8 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar7;
      *(byte *)piVar17 = (char)*piVar17 + bVar7 + CARRY1(bVar8,bVar7);
      *pbVar42 = *pbVar42 + bVar7;
      *(byte *)puVar47 = (byte)*puVar47 + bVar36;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar25,CONCAT11(0x1c,cVar5));
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      cVar6 = (char)pbVar42;
      *(byte *)puVar39 = (byte)*puVar39 + cVar6;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar7;
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      pbVar45 = pbVar11 + (uint)bVar49 * -8 + 4 + (uint)bVar49 * -8 + 4;
      out(*(undefined4 *)(pbVar11 + (uint)bVar49 * -8 + 4),(short)pbVar42);
      piVar17 = &uRam0a0a0000;
      *pbVar42 = *pbVar42;
      bVar7 = cVar5 - cVar6;
      iVar22 = CONCAT22(uVar25,CONCAT11((byte)puVar47[0x14] | 0x1c | bRam0ca87216,bVar7));
      *pbVar42 = *pbVar42;
      bVar8 = *pbVar42;
      *pbVar42 = *pbVar42 + bVar7;
      if (!CARRY1(bVar8,bVar7)) {
        piVar17 = &uRam1e7b7000;
        bVar8 = (byte)((uint)puVar46 >> 8) | *(byte *)(iVar28 + 3);
        puVar39 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar8,bVar30));
        if (bVar8 != 0) {
          pbVar42 = (byte *)CONCAT31((int3)((uint)pbVar42 >> 8),cVar6 + pbVar45[(int)puVar47 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar22 = iVar22 + 1;
        }
      }
      *piVar17 = *piVar17 + (int)piVar17;
      iVar28 = CONCAT31((int3)((uint)pbVar42 >> 8),(byte)pbVar42 | pbVar45[(int)puVar47 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar47 = (uint)((int)piVar17 + *puVar47 + 1);
      pbVar11 = pbVar45 + (uint)bVar49 * -8 + 4;
      out(*(undefined4 *)pbVar45,(short)iVar28);
      puVar46 = puVar39;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar30 = bVar30 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar20,bVar30);
  if ('\0' < (char)bVar30) {
    *(byte *)piVar17 = (char)*piVar17 + bVar30;
    puVar39 = (uint *)CONCAT31(uVar20,bVar30 + 0x28);
    *puVar39 = *puVar39 ^ (uint)puVar39;
    *(byte *)puVar46 = *(byte *)puVar46 + bVar8;
    cVar5 = (bVar30 + 0x28) - bVar8;
    pcVar12 = (char *)CONCAT31(uVar20,cVar5);
    *pcVar12 = *pcVar12 + cVar5;
    pbVar45 = (byte *)CONCAT31(uVar19,bVar36 | *(byte *)puVar46);
    pcVar10 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11((char)((uint)puVar46 >> 8) + *(byte *)((int)puVar21 + 0x7d),
                                        (char)puVar46));
    *pcVar12 = *pcVar12 + cVar5;
    pbVar42 = (byte *)CONCAT31(uVar20,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar20,cVar5 + 0x39U));
    *pcVar10 = *pcVar10 + bVar8;
    puVar44 = (uint *)(pbVar11 + (uint)bVar49 * -8 + 4);
    out(*(undefined4 *)pbVar11,(short)pbVar45);
    goto code_r0x00405396;
  }
  puVar39 = (uint *)(pbVar11 + (uint)bVar49 * -8 + 4);
  out(*(undefined4 *)pbVar11,(short)iVar28);
  pcVar12 = (char *)(iVar22 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar45 = (byte *)CONCAT31(uVar19,bVar36 | *(byte *)puVar46);
  goto code_r0x004052ee;
}


