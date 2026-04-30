/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004025b8
 * Raw Name    : GetClientSettingsRaw
 * Demangled   : GetClientSettingsRaw
 * Prototype   : pointer GetClientSettingsRaw(byte * param_1, byte * param_2)
 * Local Vars  : uVar1, iVar2, pcVar3, uVar4, uVar5, uVar6, cVar7, bVar8, bVar9, cVar10, cVar11, in_EAX, pcVar12, iVar13, pbVar14, puVar15, pcVar16, uVar17, uVar18, puVar19, pbVar20, piVar21, pcVar22, piVar23, puVar24, uVar25, iVar26, extraout_ECX, extraout_ECX_00, pbVar27, extraout_ECX_01, extraout_ECX_02, uVar28, cVar29, bVar30, bVar31, uVar32, uVar33, bVar34, uVar35, pbVar36, puVar37, uVar38, uVar39, unaff_EBX, pbVar40, puVar41, cVar42, bVar43, unaff_EBP, unaff_ESI, puVar44, puVar45, unaff_EDI, puVar46, puVar47, in_ES, uVar48, in_CS, uVar49, in_SS, uVar50, in_DS, in_GS_OFFSET, in_CF, bVar51, in_AF, in_TF, in_IF, bVar52, bVar53, param_1, in_NT, param_2, uVar54, uVar55, unaff_retaddr, in_stack_ffffffe8, pcStackY_84, pbStackY_4c, puStackY_38, puStackY_34, uStackY_30, pbStack_10, pbStack_c, uStack_8, uStack_4, uStack_2, uStack_1
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

undefined * __fastcall GetClientSettingsRaw(byte *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined6 uVar4;
  ushort uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  undefined3 uVar25;
  char *in_EAX;
  char *pcVar12;
  int iVar13;
  byte *pbVar14;
  uint *puVar15;
  int3 iVar26;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  byte *pbVar20;
  int *piVar21;
  char *pcVar22;
  int *piVar23;
  ushort *puVar24;
  char cVar29;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar27;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar30;
  byte bVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined4 uVar28;
  byte bVar34;
  undefined2 uVar35;
  byte *pbVar36;
  undefined3 uVar38;
  uint *puVar37;
  undefined1 uVar39;
  char cVar42;
  undefined4 unaff_EBX;
  byte bVar43;
  byte *pbVar40;
  uint *puVar41;
  byte *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar44;
  uint *puVar45;
  byte *unaff_EDI;
  uint *puVar46;
  uint *puVar47;
  ushort in_ES;
  ushort uVar48;
  ushort in_CS;
  ushort uVar49;
  ushort in_SS;
  ushort uVar50;
  ushort in_DS;
  int in_GS_OFFSET;
  char in_CF;
  bool bVar51;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar52;
  bool bVar53;
  byte in_NT;
  uint uVar54;
  undefined8 uVar55;
  int unaff_retaddr;
  char *pcStackY_84;
  byte *pbStackY_4c;
  uint *puStackY_38;
  uint *puStackY_34;
  undefined4 uStackY_30;
  undefined4 in_stack_ffffffe8;
  byte *pbStack_10;
  byte *pbStack_c;
  ushort uStack_8;
  ushort uStack_4;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  bVar52 = false;
                    /* .NET CLR Managed Code */
  pcVar12 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *in_EAX + in_CF);
  pbVar40 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBP[-0x7a],
                                      (char)unaff_EBX));
code_r0x004025bd:
  *pcVar12 = *pcVar12 + (char)pcVar12;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '\x12');
  *pcVar12 = *pcVar12 + (char)((uint)param_1 >> 8);
  pcVar12 = pcVar12 + -1;
  cVar7 = (char)pcVar12;
  *pcVar12 = *pcVar12 + cVar7;
  bVar43 = (byte)((uint)pbVar40 >> 8) | unaff_EBP[-0x7b];
  pbVar40 = (byte *)CONCAT22((short)((uint)pbVar40 >> 0x10),CONCAT11(bVar43,(char)pbVar40));
  *pcVar12 = *pcVar12 + cVar7;
  cRam0000847d = cRam0000847d + (char)param_2;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar7 + '$');
  pbVar40[-0x7b] = pbVar40[-0x7b] + bVar43;
  pbVar20 = param_1;
  uStack_4 = in_SS;
code_r0x004025d8:
  bVar43 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar43;
  bVar51 = 0xf4 < bVar43;
  pcVar12 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar43 + 0xb);
  pbVar14 = unaff_EBP;
  do {
    bVar43 = (byte)pcVar12 + *pbVar20;
    uVar25 = (undefined3)((uint)pcVar12 >> 8);
    cVar7 = bVar43 + bVar51;
    cVar7 = cVar7 + *(char *)CONCAT31(uVar25,cVar7) +
            (CARRY1((byte)pcVar12,*pbVar20) || CARRY1(bVar43,bVar51));
    pcVar12 = (char *)CONCAT31(uVar25,cVar7);
    *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar7;
    *pcVar12 = *pcVar12 + cVar7;
    iVar13 = *(int *)param_2;
    pbVar14[(int)pcVar12 * 4] = pbVar14[(int)pcVar12 * 4] + (char)((uint)pbVar40 >> 8);
    pcVar12[(int)pbVar14] = pcVar12[(int)pbVar14] + cVar7;
    pbVar36 = param_2 + (-1 - iVar13);
    *pcVar12 = *pcVar12 + cVar7;
    param_1 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                               CONCAT11(((byte)((uint)pbVar20 >> 8) | *pbVar36) + unaff_EDI[0x22],
                                        (char)pbVar20));
    *pcVar12 = *pcVar12 + cVar7;
    bVar34 = (char)pbVar36 - param_2[1 - iVar13];
    bVar8 = cVar7 - 0xf;
    pbVar20 = (byte *)CONCAT31(uVar25,bVar8);
    param_2 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                               CONCAT11((char)((uint)pbVar36 >> 8) +
                                        *(char *)(CONCAT31((int3)((uint)pbVar36 >> 8),bVar34) +
                                                 -0x3f),bVar34));
    bVar43 = *pbVar20;
    bVar9 = *pbVar20;
    *pbVar20 = *pbVar20 + bVar8;
    uVar32 = (undefined2)((uint)unaff_retaddr >> 0x10);
    uVar50 = in_DS;
    if (SCARRY1(bVar9,bVar8)) {
      pbVar20 = (byte *)CONCAT31(uVar25,bVar8 + pbVar20[(int)pbVar14] + CARRY1(bVar43,bVar8));
      goto code_r0x00402677;
    }
    pbVar40 = pbVar40 + -1;
    *pbVar20 = *pbVar20 + bVar8;
    uVar54 = *unaff_ESI;
    *param_1 = *param_1 + 1;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(bVar34 | (byte)uVar54) - (byte)*unaff_ESI
                              );
    unaff_ESI = (uint *)((int)unaff_ESI +
                        (-(uint)(bVar8 < *pbVar20) - *(int *)CONCAT31(uVar25,bVar8 - *pbVar20)));
    unaff_EBP = (byte *)CONCAT31(uVar25,bVar8 - *pbVar20);
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    bVar9 = (byte)pbVar14;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar9;
    bVar43 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar9;
    *(byte **)unaff_EDI = param_2 + (uint)CARRY1(bVar43,bVar9) + *(int *)unaff_EDI;
    uVar25 = (undefined3)((uint)pbVar14 >> 8);
    bVar9 = bVar9 | *param_2;
    pcVar12 = (char *)CONCAT31(uVar25,bVar9);
    if ((POPCOUNT(bVar9) & 1U) != 0) {
      *pcVar12 = *pcVar12 + bVar9;
      pcVar12 = pcVar12 + 0x12110000;
      goto code_r0x004025b9;
    }
    *pcVar12 = *pcVar12 + bVar9;
    bVar43 = bVar9 + 0xd;
    pbVar20 = (byte *)CONCAT31(uVar25,bVar43);
    *unaff_ESI = *unaff_ESI | (uint)param_2;
    if (-1 < (int)*unaff_ESI) {
code_r0x00402678:
      *pbVar20 = *pbVar20 + (char)pbVar20;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | bRam7d160243,(char)param_1));
      pbVar14 = unaff_EDI;
code_r0x00402680:
      bVar43 = (byte)param_1;
      *param_1 = *param_1 + bVar43;
      uVar25 = (undefined3)((uint)param_1 >> 8);
      piVar23 = (int *)((int)pbVar14 * 2 + 0x400009a);
      *piVar23 = *piVar23 + CONCAT31(uVar25,bVar43 + 2) + (uint)(0xfd < bVar43);
      pbVar40 = (byte *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                                 CONCAT11((char)((uint)pbVar40 >> 8) + *(char *)((int)param_2 * 5),
                                          (char)pbVar40));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + bVar43 + 2;
      pbStack_c = (byte *)CONCAT31(uVar25,bVar43 + 4);
      *pbVar14 = *pbVar14 - (bVar43 + 4);
code_r0x00402697:
      *pbStack_c = *pbStack_c + (char)pbStack_c;
      param_2 = param_2 + -*unaff_ESI;
      unaff_EDI = pbStack_c;
code_r0x0040269b:
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),
                                 (byte)pbVar40 | (byte)((uint)pbVar20 >> 8));
      uVar28 = GlobalDescriptorTableRegister();
      *(undefined4 *)unaff_EDI = uVar28;
      cVar7 = (char)unaff_EDI;
      *param_2 = *param_2 + cVar7;
      if ((POPCOUNT(*param_2) & 1U) == 0) {
        *unaff_EDI = *unaff_EDI + cVar7;
        pcVar12 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar7 + '\x13');
        param_1 = pbVar20;
        unaff_EDI = pbVar14;
code_r0x004026a8:
        uVar25 = (undefined3)((uint)pcVar12 >> 8);
        bVar9 = (byte)pcVar12 + 2 + cRam001b15fe + (0xfd < (byte)pcVar12);
        bVar43 = *pbVar40;
        bVar8 = (byte)pbVar40;
        *pbVar40 = *pbVar40 + bVar8;
        iRam00009a7d = iRam00009a7d + CONCAT31(uVar25,bVar9) + (uint)CARRY1(bVar43,bVar8);
        iVar13 = CONCAT31(uVar25,bVar9 + 2) + 0x917d + (uint)(0xfd < bVar9);
        cVar7 = (char)iVar13;
        uVar25 = (undefined3)((uint)iVar13 >> 8);
        bVar43 = cVar7 + 0x3a;
        pbStack_c = (byte *)CONCAT31(uVar25,bVar43);
        *pbStack_c = *pbStack_c + bVar43;
        uVar38 = (undefined3)((uint)param_2 >> 8);
        bVar9 = (byte)param_2 | *param_2;
        uVar17 = CONCAT31(uVar25,cVar7 + '8');
        uVar54 = uVar17 + 0x1b00001b;
        pcVar12 = (char *)(uVar54 + (1 < bVar43) + *unaff_ESI +
                          (uint)(0xe4ffffe4 < uVar17 || CARRY4(uVar54,(uint)(1 < bVar43))));
        bVar43 = bVar9 + *param_1;
        param_2 = (byte *)CONCAT31(uVar38,bVar43);
        uVar25 = (undefined3)((uint)pcVar12 >> 8);
        cVar7 = (char)pcVar12;
        if (SCARRY1(bVar9,*param_1) != (char)bVar43 < '\0') {
          *pcVar12 = *pcVar12 + cVar7;
          pcVar12 = (char *)CONCAT31(uVar25,cVar7 + '\x02');
          uVar33 = (undefined2)((uint)pbVar40 >> 0x10);
          cVar42 = (char)((uint)pbVar40 >> 8) + pbVar40[-0x68];
          pbVar40 = (byte *)CONCAT22(uVar33,CONCAT11(cVar42,bVar8));
          *pcVar12 = *pcVar12 + cVar7 + '\x02';
          bVar9 = cVar7 + 0x2a;
          pbVar20 = (byte *)CONCAT31(uVar25,bVar9);
          *pbVar20 = *pbVar20 | bVar9;
          bVar43 = *pbVar40;
          cVar10 = (char)((uint)param_1 >> 8);
          *pbVar40 = *pbVar40 + cVar10;
          pbVar14 = unaff_EDI;
          if (SCARRY1(bVar43,cVar10) != (char)*pbVar40 < '\0') {
            *pbVar20 = *pbVar20 + bVar9;
            bVar43 = cVar7 + 0x2c;
            if ((POPCOUNT(bVar43) & 1U) == 0) {
              *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
              bVar9 = cVar7 + 0x59;
              pcVar12 = (char *)CONCAT31(uVar25,bVar9);
              *(char **)param_2 = pcVar12 + (uint)(0xd2 < bVar43) + *(int *)param_2;
              pbVar40 = (byte *)CONCAT22(uVar33,CONCAT11(cVar42 + pbVar40[-0x67],bVar8));
              *pcVar12 = *pcVar12 + bVar9;
              pbVar14 = (byte *)((CONCAT31(uVar25,cVar7 + -0x38) + -0x7d060000) -
                                (uint)(0x90 < bVar9));
              pbVar20 = param_1;
              uStack_8 = in_ES;
code_r0x00402700:
              *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
              cVar7 = (char)unaff_EDI + '\x02';
              unaff_EDI = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar7);
              bVar51 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00402704:
              if (bVar51) {
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar7 = (char)unaff_EDI + '\x02';
                pcVar12 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar7);
                puVar44 = unaff_ESI;
                if ((POPCOUNT(cVar7) & 1U) == 0) {
code_r0x0040270c:
                  uVar49 = in_ES;
                  cVar7 = (char)pcVar12;
                  *pcVar12 = *pcVar12 + cVar7;
                  uVar25 = (undefined3)((uint)pcVar12 >> 8);
                  bVar43 = cVar7 + 0x6f;
                  piVar23 = (int *)CONCAT31(uVar25,bVar43);
                  iVar13 = *piVar23;
                  *(byte *)piVar23 = (char)*piVar23 + bVar43;
                  in_ES = uVar49;
                  uVar50 = uStack_8;
                  pbVar36 = param_2;
                  if ((char)*piVar23 != '\0' &&
                      SCARRY1((char)iVar13,bVar43) == (char)*piVar23 < '\0') {
                    *(byte *)piVar23 = (char)*piVar23 + bVar43;
                    bVar9 = cVar7 + 0x9c;
                    piVar23 = (int *)CONCAT31(uVar25,bVar9);
                    puVar15 = puVar44 + (int)pbVar14 * 2;
                    uVar54 = *puVar15;
                    uVar17 = *puVar15;
                    *puVar15 = (uint)(param_2 + uVar17 + (0xd2 < bVar43));
                    pbStack_c = (byte *)CONCAT22(pbStack_c._2_2_,uVar49);
                    *piVar23 = (*piVar23 - (int)piVar23) -
                               (uint)(CARRY4(uVar54,(uint)param_2) ||
                                     CARRY4((uint)(param_2 + uVar17),(uint)(0xd2 < bVar43)));
                    uVar54 = *puVar44;
                    *(byte *)puVar44 = (byte)*puVar44 + bVar9;
                    pbVar36 = pbStack_c;
                    if (!CARRY1((byte)uVar54,bVar9)) {
                      halt_baddata();
                    }
                  }
code_r0x00402724:
                  pbStack_c = pbVar36;
                  *(byte *)piVar23 = (char)*piVar23 + (byte)piVar23;
                  uVar25 = (undefined3)((uint)piVar23 >> 8);
                  bVar43 = (byte)piVar23 | *(byte *)((int)piVar23 + 0x400000d);
                  pcVar12 = (char *)CONCAT31(uVar25,bVar43);
                  if ((char)bVar43 < '\x01') {
                    bVar51 = pcVar12 < (char *)0x6fe1411;
                    pcVar12 = pcVar12 + -0x6fe1411;
                  }
                  else {
                    *pcVar12 = *pcVar12 + bVar43;
                    bVar8 = bVar43 + 0x28;
                    puVar15 = (uint *)CONCAT31(uVar25,bVar8);
                    *puVar15 = *puVar15 | (uint)puVar15;
                    bVar9 = *pbVar40;
                    cVar7 = (char)((uint)pbVar20 >> 8);
                    *pbVar40 = *pbVar40 + cVar7;
                    if (*pbVar40 == 0 || SCARRY1(bVar9,cVar7) != (char)*pbVar40 < '\0') break;
                    *(byte *)puVar15 = (char)*puVar15 + bVar8;
                    pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x55);
                    puVar15 = puVar44 + (int)pbVar14 * 2;
                    bVar51 = CARRY4(*puVar15,(uint)param_2) ||
                             CARRY4((uint)(param_2 + *puVar15),(uint)(0xd2 < bVar8));
                    *puVar15 = (uint)(param_2 + *puVar15 + (0xd2 < bVar8));
                  }
                  while( true ) {
                    uVar25 = (undefined3)((uint)pcVar12 >> 8);
                    bVar43 = ((char)pcVar12 - *pcVar12) - bVar51;
                    puVar15 = (uint *)CONCAT31(uVar25,bVar43);
                    uVar54 = *puVar44;
                    *(byte *)puVar44 = (byte)*puVar44 + bVar43;
                    if (CARRY1((byte)uVar54,bVar43)) break;
                    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),
                                               (byte)pbVar40 | (byte)((uint)param_2 >> 8));
                    pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 2);
                    while( true ) {
                      unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                      cVar7 = (char)pcVar12;
                      *pcVar12 = *pcVar12 + cVar7;
                      uVar25 = (undefined3)((uint)pcVar12 >> 8);
                      bVar43 = cVar7 + 2;
                      pcVar12 = (char *)CONCAT31(uVar25,bVar43);
                      uVar50 = (ushort)pbStack_c;
                      if (SCARRY1(cVar7,'\x02') != (char)bVar43 < '\0') break;
                      *pcVar12 = *pcVar12 + bVar43;
                      cVar42 = (char)param_2;
                      *pbVar14 = *pbVar14 - cVar42;
                      *param_2 = *param_2 + (char)pbVar20;
                      bVar9 = (cVar7 + '\t') - *(char *)CONCAT31(uVar25,cVar7 + '\t');
                      pbVar36 = (byte *)CONCAT31(uVar25,bVar9);
                      bVar43 = *pbVar36;
                      *pbVar36 = *pbVar36 + bVar9;
                      pbVar27 = pbVar20 + 1;
                      cVar7 = bVar9 - CARRY1(bVar43,bVar9);
                      pcVar12 = (char *)CONCAT31(uVar25,cVar7);
                      *pcVar12 = *pcVar12 + cVar7;
                      *pcVar12 = *pcVar12 + cVar7;
                      *pcVar12 = *pcVar12 + cVar7;
                      *pcVar12 = *pcVar12 + cVar7;
                      cVar10 = (char)((uint)pbVar27 >> 8);
                      pbVar20[2] = pbVar20[2] + cVar10;
                      *pcVar12 = *pcVar12 + cVar7;
                      pcVar12 = (char *)(*(int *)pbVar27 * 0x170000);
                      *pcVar12 = *pcVar12;
                      *pcVar12 = *pcVar12;
                      *pbVar27 = *pbVar27;
                      uVar33 = (undefined2)((uint)pbVar40 >> 0x10);
                      cVar7 = (char)pbVar40;
                      bVar8 = (char)((uint)pbVar40 >> 8) + *(char *)((int)param_2 * 5);
                      pbVar40 = (byte *)CONCAT22(uVar33,CONCAT11(bVar8,cVar7));
                      pbVar40[(int)pcVar12] = pbVar40[(int)pcVar12];
                      *pcVar12 = *pcVar12 - cVar7;
                      *param_2 = *param_2 + (char)pbVar27;
                      uVar25 = (undefined3)((uint)pcVar12 >> 8);
                      bVar9 = -*pcVar12;
                      pbVar20 = (byte *)CONCAT31(uVar25,bVar9);
                      *pbVar40 = *pbVar40 + cVar42;
                      *param_2 = *param_2 ^ bVar9;
                      *param_2 = *param_2 + bVar9;
                      *pbVar20 = *pbVar20 + bVar9;
                      bVar43 = *pbVar20;
                      *pbVar20 = *pbVar20 + bVar9;
                      *(byte **)param_2 = param_2 + (uint)CARRY1(bVar43,bVar9) + *(int *)param_2;
                      bVar43 = *param_2;
                      *param_2 = *param_2 + bVar9;
                      if (SCARRY1(bVar43,bVar9) == (char)*param_2 < '\0') {
                        pcVar12 = (char *)((uint)pbVar20 | 2);
                        uVar50 = (ushort)unaff_retaddr;
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        *pcVar12 = *pcVar12 + (char)pcVar12;
                        uStack_4 = in_DS;
                      }
                      else {
                        *pbVar20 = *pbVar20 + bVar9;
                        cVar11 = bVar9 + 0x12;
                        pcVar12 = (char *)CONCAT31(uVar25,cVar11);
                        bVar43 = *pbVar40;
                        *pbVar40 = *pbVar40 + cVar11;
                        if (SCARRY1(bVar43,cVar11) != (char)*pbVar40 < '\0') {
                          *pcVar12 = *pcVar12 + cVar11;
                          cVar11 = bVar9 + 0x24;
                          pcVar12 = (char *)CONCAT31(uVar25,cVar11);
                          *pcVar12 = *pcVar12 + cVar10;
                          pbVar40 = (byte *)CONCAT13(uStack_1,CONCAT12(uStack_2,in_DS));
                          *pcVar12 = *pcVar12 + cVar11;
                          bVar8 = bVar8 | unaff_EBP[-0x6e];
                          pcVar16 = (char *)CONCAT22(uVar33,CONCAT11(bVar8,cVar7));
                          *pcVar12 = *pcVar12 + cVar11;
                          cRam0000917d = cRam0000917d + cVar42;
                          bVar34 = bVar9 + 0x48;
                          pcVar16[-0x6e] = pcVar16[-0x6e] + bVar8;
                          *(char *)CONCAT31(uVar25,bVar34) =
                               *(char *)CONCAT31(uVar25,bVar34) + bVar34;
                          bVar43 = bVar9 + 0x53 + *pbVar40;
                          cVar7 = bVar43 + (0xf4 < bVar34);
                          cVar7 = cVar7 + *(char *)CONCAT31(uVar25,cVar7) +
                                  (CARRY1(bVar9 + 0x53,*pbVar40) || CARRY1(bVar43,0xf4 < bVar34));
                          pcVar12 = (char *)CONCAT31(uVar25,cVar7);
                          *pcVar16 = *pcVar16 - (char)in_DS;
                          *pcVar12 = *pcVar12 + cVar7;
                          pbVar36 = param_2 + -*(int *)param_2;
                          *(char *)((int)pbVar36 * 5) = *(char *)((int)pbVar36 * 5) + bVar8;
                          pcVar12[(int)unaff_EBP] = pcVar12[(int)unaff_EBP] + cVar7;
                          *pcVar12 = *pcVar12 + cVar7;
                          bVar9 = (byte)(in_DS >> 8) | *pbVar36;
                          uVar39 = (undefined1)unaff_retaddr;
                          cVar10 = (char)((uint)unaff_retaddr >> 8) + *(char *)(unaff_retaddr + 0xf)
                          ;
                          *pcVar12 = *pcVar12 + cVar7;
                          bVar43 = cVar7 + 0x2aU & *pbVar36;
                          iVar13 = *(int *)(unaff_EBP + 0xf);
                          *(char *)CONCAT31(uVar25,bVar43) =
                               *(char *)CONCAT31(uVar25,bVar43) + bVar43;
                          pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x2a);
                          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,uVar39)) +
                                                     0x10);
                          *pcVar12 = *pcVar12 + bVar43 + 0x2a;
                          bVar43 = bVar43 + 0x54 & *pbVar36;
                          iVar2 = *(int *)(unaff_EBP + 0x10);
                          *(char *)CONCAT31(uVar25,bVar43) =
                               *(char *)CONCAT31(uVar25,bVar43) + bVar43;
                          pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x2a);
                          puVar41 = (uint *)CONCAT22(uVar32,CONCAT11(cVar10 + *(char *)(CONCAT22(
                                                  uVar32,CONCAT11(cVar10,uVar39)) + 0x11),uVar39));
                          *pcVar12 = *pcVar12 + bVar43 + 0x2a;
                          bVar43 = bVar43 + 0x54 & *pbVar36;
                          puVar46 = (uint *)(pbVar14 + *(int *)(unaff_EBP + 0x11) + iVar2 + iVar13);
                          *(char *)CONCAT31(uVar25,bVar43) =
                               *(char *)CONCAT31(uVar25,bVar43) + bVar43;
                          pbVar20 = (byte *)CONCAT31(uVar25,bVar43 + 0x2a);
                          puVar15 = (uint *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                                                     CONCAT11(bVar9 + *pbVar20,(char)in_DS));
                          uVar55 = CONCAT44(pbVar36,pbVar20 + (uint)CARRY1(bVar9,*pbVar20) +
                                                              *(int *)pbVar20);
                          goto code_r0x00402866;
                        }
                      }
                      cVar10 = (char)pcVar12;
                      uVar25 = (undefined3)((uint)pcVar12 >> 8);
                      cVar7 = cVar10 + '\x02';
                      piVar23 = (int *)CONCAT31(uVar25,cVar7);
                      pbVar20 = pbVar27;
                      in_ES = (ushort)pbStack_c;
                      pbVar36 = param_2;
                      if (SCARRY1(cVar10,'\x02') != cVar7 < '\0') goto code_r0x00402724;
                      *(char *)piVar23 = (char)*piVar23 + cVar7;
                      pcVar12 = (char *)CONCAT31(uVar25,cVar10 + '\n');
                      *(byte *)puVar44 = (byte)*puVar44 - cVar42;
                      *param_2 = *param_2 + (char)pbVar27;
                    }
                    pbVar36 = unaff_EBP + 0x6fe1411;
                    bVar51 = CARRY1(*pbVar36,bVar43);
                    *pbVar36 = *pbVar36 + bVar43;
                  }
                  break;
                }
                pbVar40[(int)param_2] = pbVar40[(int)param_2] + cVar7;
                param_1 = pbVar20;
                unaff_EDI = pbVar14;
                goto code_r0x004026a8;
              }
              goto code_r0x0040269b;
            }
            uVar49 = 0x927c;
            in_stack_ffffffe8 = 0x40268f;
            uVar55 = func_0x02040000(in_CS);
            param_2 = (byte *)((ulonglong)uVar55 >> 0x20);
            *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
            pbVar20 = (byte *)CONCAT31((int3)((ulonglong)uVar55 >> 8),(char)uVar55 + '\x12');
            param_1 = extraout_ECX_00;
            in_CS = uVar49;
          }
          goto code_r0x00402680;
        }
        pbVar14 = unaff_EBP + -1;
        *pcVar12 = *pcVar12 + cVar7;
        param_2 = (byte *)CONCAT31(uVar38,bVar43 | *pbVar40);
        pbVar20 = (byte *)CONCAT31(uVar25,cVar7 + ':');
code_r0x00402677:
        unaff_ESI = (uint *)((int)unaff_ESI + -1);
        unaff_EBP = pbVar14;
        goto code_r0x00402678;
      }
      goto code_r0x0040263f;
    }
    *pbVar20 = *pbVar20 + bVar43;
    pbVar40 = (byte *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                               CONCAT11((byte)((uint)pbVar40 >> 8) | unaff_EBP[-0x6b],(char)pbVar40)
                              );
    *pbVar20 = *pbVar20 + bVar43;
    cVar7 = bVar9 + 0xf;
    pcVar12 = (char *)CONCAT31(uVar25,cVar7);
    unaff_retaddr = CONCAT22(uVar32,uStack_4);
    if (SCARRY1(bVar43,'\x02') == cVar7 < '\0') {
      pcVar12 = pcVar12 + (0xfd < bVar43) + 0x847d;
      in_SS = uStack_4;
      goto code_r0x004025bd;
    }
    *pcVar12 = *pcVar12 + cVar7;
    cVar10 = bVar9 + 0x11;
    pbVar14 = (byte *)CONCAT31(uVar25,cVar10);
    uVar55 = CONCAT44(param_2,pbVar14);
    unaff_retaddr = CONCAT22(uVar32,uStack_4);
    pbVar20 = param_1;
    if (SCARRY1(cVar7,'\x02') == cVar10 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
    *pbVar14 = *pbVar14 + (char)pbVar14;
    bVar43 = (char)pbVar14 + 2;
    pcVar12 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar43);
    if ((POPCOUNT(bVar43) & 1U) == 0) {
      *pcVar12 = *pcVar12 + bVar43;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar14 = pbVar40 + (int)pbVar20;
    bVar51 = CARRY1(*pbVar14,bVar43);
    *pbVar14 = *pbVar14 + bVar43;
    pbVar14 = unaff_EBP;
    in_DS = uVar50;
  } while( true );
  *(byte *)puVar15 = (char)*puVar15 + (byte)puVar15;
  uVar25 = (undefined3)((uint)puVar15 >> 8);
  bVar43 = (byte)puVar15 | *(byte *)((int)puVar15 + 0x400000e);
  pcVar12 = (char *)CONCAT31(uVar25,bVar43);
  unaff_ESI = puVar44;
  if ('\0' < (char)bVar43) {
    *pcVar12 = *pcVar12 + bVar43;
    bVar43 = bVar43 + 0x28 | *(byte *)CONCAT31(uVar25,bVar43 + 0x28);
    *pbVar40 = *pbVar40 + (char)((uint)pbVar20 >> 8);
    unaff_ESI = puVar44 + 1;
    out(*puVar44,(short)param_2);
    *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
    pcVar12 = (char *)(uint)(bVar43 | *param_2);
  }
  bVar43 = (byte)pcVar12 & 0x7b;
  bVar51 = (char)(bVar43 + 0x17) < '\0';
  uStack_8 = uVar49;
  if (SCARRY1(bVar43,'\x17') == bVar51) {
    unaff_EDI = pbStack_c;
    if (SCARRY1(bVar43,'\x17') != bVar51) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar10 = (char)pbStack_c;
  *pbStack_c = *pbStack_c + cVar10;
  iVar26 = (int3)((uint)pbStack_c >> 8);
  cVar7 = cVar10 + '\x02';
  unaff_EDI = (byte *)CONCAT31(iVar26,cVar7);
  bVar51 = (POPCOUNT(cVar7) & 1U) == 0;
  if (!bVar51) goto code_r0x00402704;
  *unaff_EDI = *unaff_EDI + cVar7;
  cVar10 = cVar10 + '\x04';
  pcVar12 = (char *)CONCAT31(iVar26,cVar10);
  if ((POPCOUNT(cVar10) & 1U) == 0) {
    *pcVar12 = *pcVar12 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_2 = (byte *)((int)iVar26 >> 0x17);
  puVar44 = unaff_ESI;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar37 = (uint *)((ulonglong)uVar55 >> 0x20);
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar15;
    cVar7 = (char)puVar41 - (byte)*puVar44;
    iVar13 = CONCAT22((short)((uint)puVar41 >> 0x10),
                      CONCAT11((char)((uint)puVar41 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),cVar7) + 0x12),cVar7));
    *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
    uVar25 = (undefined3)((ulonglong)uVar55 >> 8);
    bVar43 = (char)uVar55 + 0x2aU & (byte)*puVar37;
    pcVar12 = (char *)CONCAT31(uVar25,bVar43);
    puVar46 = (uint *)((int)puVar46 + *(int *)(unaff_EBP + 0x12));
    *pcVar12 = *pcVar12 + bVar43;
    puVar19 = (uint *)CONCAT31(uVar25,bVar43 + 0x2a);
    pbStack_10 = (byte *)(uint)uVar50;
get_Value:
    cVar7 = *(char *)(iVar13 + 0x13);
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    uVar25 = (undefined3)((uint)puVar19 >> 8);
    bVar43 = (char)puVar19 + 0x2aU & (byte)*puVar37;
    pcVar12 = (char *)CONCAT31(uVar25,bVar43);
    puVar46 = (uint *)((int)puVar46 + *(int *)(unaff_EBP + 0x13));
    *pcVar12 = *pcVar12 + bVar43;
    pbVar40 = (byte *)CONCAT31(uVar25,bVar43 + 0x2a);
    uVar54 = (uint)uVar50;
    bVar43 = (byte)((uint)puVar15 >> 8);
    bVar9 = bVar43 + *pbVar40;
    pbVar40 = pbVar40 + (uint)CARRY1(bVar43,*pbVar40) + *(int *)pbVar40;
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar15;
    puVar41 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar13 >> 0x10),
                                               CONCAT11((char)((uint)iVar13 >> 8) + cVar7,
                                                        (char)iVar13)) >> 8),
                               (char)iVar13 - (byte)*puVar44);
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                               CONCAT11(bVar9 + *pbVar40,(char)puVar15));
    pbVar40 = pbVar40 + (uint)CARRY1(bVar9,*pbVar40) + *(int *)pbVar40;
code_r0x00402898:
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar15;
    bVar43 = (byte)puVar37;
    uVar32 = CONCAT11((char)((uint)puVar37 >> 8) - (byte)*puVar44,bVar43);
    pbVar20 = (byte *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar32);
    pcVar12 = (char *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((char)((uint)puVar41 >> 8) + (byte)puVar41[-0x19],
                                        (char)puVar41));
    *pbVar40 = *pbVar40 + (char)pbVar40;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 + '\x03');
    puVar41 = puVar44;
    do {
      puVar44 = puVar41 + 1;
      out(*puVar41,uVar32);
      pcVar12 = pcVar12 + -1;
      bVar9 = (byte)pbVar40;
      *pbVar40 = *pbVar40 + bVar9;
      puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                 CONCAT11((byte)((uint)puVar15 >> 8) | *pbVar20,(char)puVar15));
      *pbVar40 = *pbVar40 + bVar9;
      *pcVar12 = *pcVar12 + bVar43;
      *(byte *)((int)pbVar40 * 2) = *(byte *)((int)pbVar40 * 2) ^ bVar9;
      *pbVar40 = *pbVar40 + bVar9;
      *pbVar40 = *pbVar40 | bVar9;
      bVar51 = CARRY1((byte)*puVar15,bVar43);
      *(byte *)puVar15 = (byte)*puVar15 + bVar43;
      cVar7 = bVar9 + 10 + bVar51;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar7);
      puVar41 = puVar44;
    } while (bVar9 < 0xf6 && !CARRY1(bVar9 + 10,bVar51));
    *pbVar40 = *pbVar40 + cVar7;
    in_stack_ffffffe8 = CONCAT22((short)((uint)in_stack_ffffffe8 >> 0x10),(ushort)pbStack_c);
    pcVar16 = (char *)((uint)pbVar40 | *puVar46);
    puVar41 = (uint *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11((char)((uint)pcVar12 >> 8) + unaff_EBP[-100],(char)pcVar12))
    ;
    *pcVar16 = *pcVar16 + (char)pcVar16;
    bVar43 = (char)pcVar16 + 7;
    uVar55 = CONCAT44(pbVar20,CONCAT31((int3)((uint)pcVar16 >> 8),bVar43));
code_r0x004028c8:
    puVar37 = (uint *)((ulonglong)uVar55 >> 0x20);
  } while ((POPCOUNT(bVar43) & 1U) != 0);
  *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
  puVar19 = (uint *)CONCAT31((int3)((ulonglong)uVar55 >> 8),(char)uVar55 + '-');
  puVar44 = (uint *)((uint)puVar44 | *(uint *)((int)puVar37 + 0x3b));
  bVar51 = CARRY4(*puVar19,(uint)puVar19);
  uVar17 = *puVar19;
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  if (SCARRY4(uVar17,(int)puVar19)) {
    bVar51 = CARRY4(*puVar19,(uint)puVar19);
    bVar53 = SCARRY4(*puVar19,(int)puVar19);
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    bVar43 = POPCOUNT(*puVar19 & 0xff);
    if (bVar53) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + bVar51);
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar15;
    bVar51 = (POPCOUNT((byte)*puVar37) & 1U) == 0;
    if (bVar51) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar51) {
      iVar13 = CONCAT31((int3)((uint)puVar41 >> 8),(char)puVar41 - (byte)*puVar44);
      goto get_Value;
    }
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + 'r');
    pbStack_10 = unaff_EBP;
code_r0x004028e2:
    uVar32 = (undefined2)((uint)in_stack_ffffffe8 >> 0x10);
    uVar17 = *puVar19;
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    if (SCARRY4(uVar17,(int)puVar19)) {
      if (*puVar19 == 0 || SCARRY4(uVar17,(int)puVar19) != (int)*puVar19 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar41 = (uint *)((int)puVar41 + -1);
    cVar7 = (char)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + cVar7;
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                               CONCAT11((byte)((uint)puVar15 >> 8) |
                                        *(byte *)((int)puVar15 + 0x16d7207),(char)puVar15));
    pbVar40 = (byte *)((int)puVar19 + 0x7d);
    bVar43 = *pbVar40;
    bVar8 = (byte)((uint)puVar37 >> 8);
    bVar9 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar8;
    uVar54 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar9,bVar8) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar40 < '\0') * 0x80 | (uint)(*pbVar40 == 0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar40) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar43,bVar8);
    *(byte *)puVar19 = (byte)*puVar19 + cVar7;
    pbVar40 = (byte *)(CONCAT31((int3)((uint)puVar19 >> 8),cVar7 + '+') ^ *puVar46);
    if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar43 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar43;
    puVar19 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar43 + 0x72);
    if (bVar43 < 0x8e && (byte)(bVar43 + 0x72) != '\0') {
      if (SCARRY1(bVar43,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar19 + 0x6f) = *(byte *)((int)puVar19 + 0x6f) + bVar8;
    }
code_r0x00402905:
    uVar55 = CONCAT44(puVar37,puVar19);
    puVar41 = (uint *)((int)puVar41 + -1);
    cVar7 = (char)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + cVar7;
    bVar43 = (byte)((uint)puVar15 >> 8) | (byte)*puVar15;
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),CONCAT11(bVar43,(char)puVar15));
    pbStack_c._0_2_ = (ushort)uVar54;
    if ((char)bVar43 < '\x01') {
      *(byte *)puVar19 = (byte)*puVar19 + cVar7;
      puVar46 = (uint *)((int)puVar46 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar19 = (byte)*puVar19 + cVar7;
    uVar54 = 0x40291c;
    uVar55 = func_0x7346291c();
    *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
    puVar15 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar55 >> 0x20));
    puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,(ushort)pbStack_c);
    uStackY_30 = puVar41;
    while( true ) {
      pcVar12 = (char *)((int)uVar55 * 2);
      *pcVar12 = *pcVar12 - (char)puVar15;
      uVar17 = *puVar41;
      cVar7 = (char)((uint)puVar15 >> 8);
      *(byte *)puVar41 = (byte)*puVar41 + cVar7;
      if (SCARRY1((byte)uVar17,cVar7) == (char)(byte)*puVar41 < '\0') {
        pbVar40 = (byte *)((int)puVar46 + (int)uVar55);
        *pbVar40 = *pbVar40 + (char)uVar55;
        bVar43 = *pbVar40;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar37 = (uint *)((ulonglong)uVar55 >> 0x20);
      cVar7 = (char)uVar55;
      *(char *)uVar55 = *(char *)uVar55 + cVar7;
      uVar25 = (undefined3)((ulonglong)uVar55 >> 8);
      bVar43 = cVar7 + 7;
      puVar19 = (uint *)CONCAT31(uVar25,bVar43);
      bVar9 = (byte)((ulonglong)uVar55 >> 0x28);
      if ((POPCOUNT(bVar43) & 1U) != 0) break;
      *(byte *)puVar19 = (byte)*puVar19 + bVar43;
      pcVar12 = (char *)CONCAT31(uVar25,cVar7 + '3');
      uVar32 = (undefined2)((uint)puVar41 >> 0x10);
      uVar39 = SUB41(puVar41,0);
      bVar43 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar44 + 0x16) + (0xd3 < bVar43);
      puVar41 = (uint *)CONCAT22(uVar32,CONCAT11(bVar43,uVar39));
      *pcVar12 = *pcVar12 + cVar7 + '3';
      cVar10 = cVar7 + ':';
      puVar19 = (uint *)CONCAT31(uVar25,cVar10);
      if ((POPCOUNT(cVar10) & 1U) != 0) {
        bVar43 = bVar43 | *(byte *)((int)puVar37 + 7);
        puVar41 = (uint *)CONCAT22(uVar32,CONCAT11(bVar43,uVar39));
        bVar51 = (POPCOUNT(bVar43) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar19 = (byte)*puVar19 + cVar10;
      puVar19 = (uint *)(CONCAT31(uVar25,cVar7 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar40 = (byte *)((int)puVar19 + 0x72);
      bVar53 = SCARRY1(*pbVar40,bVar9);
      *pbVar40 = *pbVar40 + bVar9;
      bVar43 = POPCOUNT(*pbVar40);
code_r0x0040294c:
      if ((bVar43 & 1) == 0) {
        *(byte *)((int)puVar19 + 0x72) = *(byte *)((int)puVar19 + 0x72) + (char)((uint)puVar37 >> 8)
        ;
      }
      else if (bVar53) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar7 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_38 = (uint *)CONCAT22(puStackY_38._2_2_,uStack_4);
code_r0x00402957:
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
      cVar7 = (char)puVar19 + '(';
      puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),cVar7);
      *(byte *)puVar19 = (byte)*puVar19 + cVar7;
      puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                 CONCAT11((byte)((uint)puVar15 >> 8) | (byte)*puVar19,(char)puVar15)
                                );
      *(byte *)puVar19 = (byte)*puVar19 + cVar7;
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                 CONCAT11((byte)((uint)puVar37 >> 8) | (byte)puVar41[0x18],
                                          (char)puVar37));
      puVar44 = puStackY_38;
      puVar46 = puStackY_34;
code_r0x00402966:
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
      bVar43 = (byte)((uint)puVar41 >> 8) | *(byte *)((int)puVar37 + 7);
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar43,(char)puVar41));
      if ((POPCOUNT(bVar43) & 1U) != 0) {
        puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
      puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + '~');
code_r0x00402971:
      uVar54 = (uint)uStack_4;
code_r0x00402972:
      uVar32 = (undefined2)((uint)in_stack_ffffffe8 >> 0x10);
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
code_r0x00402974:
      bVar43 = 0xe9 < (byte)puVar19;
      in_stack_ffffffe8 = CONCAT22(uVar32,in_CS);
      in_CS = 0x2d0a;
      uVar55 = func_0x00006128(in_stack_ffffffe8);
      puVar15 = (uint *)uVar55;
      piVar23 = (int *)((int)((ulonglong)uVar55 >> 0x20) + -0x3d);
      *piVar23 = (int)((int)puVar44 + (uint)bVar43 + *piVar23);
      bVar51 = SCARRY4(*puVar15,(int)puVar15);
      *puVar15 = *puVar15 + (int)puVar15;
      uVar17 = *puVar15;
      puVar15 = extraout_ECX_02;
code_r0x00402982:
      bVar43 = POPCOUNT(uVar17 & 0xff);
      if (bVar51) {
        *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
        puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                   CONCAT11((byte)((uint)puVar15 >> 8) |
                                            *(byte *)((ulonglong)uVar55 >> 0x20),(char)puVar15));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar12 = (char *)((ulonglong)uVar55 >> 0x20);
      if ((bVar43 & 1) == 0) {
        *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
        *pcVar12 = *pcVar12 + (char)puVar15;
        uVar55 = CONCAT44(CONCAT22((short)((ulonglong)uVar55 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar55 >> 0x28) - pcVar12[0x1f],
                                            (char)((ulonglong)uVar55 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar55 >> 8),(char)uVar55 + '('));
code_r0x00402991:
        puVar37 = (uint *)((ulonglong)uVar55 >> 0x20);
        pbVar40 = (byte *)uVar55;
        bVar43 = (byte)uVar55;
        bVar51 = CARRY1(bVar43,*pbVar40);
        puVar19 = (uint *)CONCAT31((int3)((ulonglong)uVar55 >> 8),bVar43 + *pbVar40);
        cVar7 = bVar43 + *pbVar40;
        if (SCARRY1(bVar43,*pbVar40)) goto code_r0x004029c4;
code_r0x00402995:
        puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                   CONCAT11(((char)((uint)puVar37 >> 8) -
                                            *(byte *)((int)puVar37 + 0x6b)) - bVar51,(char)puVar37))
        ;
        bVar43 = (byte)puVar19;
        bVar51 = CARRY1(bVar43,(byte)*puVar19);
        bVar53 = SCARRY1(bVar43,(byte)*puVar19);
        puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar43 + (byte)*puVar19);
        do {
          if (!bVar53) {
            puVar44 = (uint *)((int)puVar44 + (uint)bVar51 + *puVar19);
            pbVar40 = (byte *)((int)puVar19 + *puVar19);
            bVar9 = (byte)pbVar40;
            *pbVar40 = *pbVar40 + bVar9;
            *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
            bVar43 = *pbVar40;
            *pbVar40 = *pbVar40 + bVar9;
            *puVar46 = (uint)((int)puVar41 + (uint)CARRY1(bVar43,bVar9) + *puVar46);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar15;
            uVar25 = (undefined3)((uint)pbVar40 >> 8);
            bVar9 = bVar9 | (byte)*puVar44;
            puVar19 = (uint *)CONCAT31(uVar25,bVar9);
            uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uStack_4);
            uVar17 = *puVar19;
            uVar1 = *puVar19;
            *puVar19 = (uint)(*puVar19 + (int)puVar19);
            if (SCARRY4(uVar1,(int)puVar19)) {
              *(byte *)puVar44 = (byte)*puVar44 - (char)puVar41;
              *(byte *)puVar37 = (byte)*puVar37 + (char)puVar15;
              *(byte *)puVar46 = (byte)*puVar46 - (char)puVar41;
            }
            else {
              puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,(ushort)pbStack_c);
              uStack_4 = (ushort)pbStack_c;
              if (CARRY4(uVar17,(uint)puVar19)) goto code_r0x00402971;
              bVar51 = CARRY1(bVar9,(byte)*puVar19);
              bVar53 = SCARRY1(bVar9,(byte)*puVar19);
              puVar19 = (uint *)CONCAT31(uVar25,bVar9 + (byte)*puVar19);
code_r0x004029be:
              if (!bVar53) {
                puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,(ushort)pbStack_c);
                *(byte *)((int)puVar37 + -0x37) =
                     (*(byte *)((int)puVar37 + -0x37) - (char)((uint)puVar37 >> 8)) - bVar51;
                cVar7 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar7;
                bVar43 = (byte)puVar19;
                bVar51 = CARRY1(bVar43,(byte)*puVar19);
                bVar53 = SCARRY1(bVar43,(byte)*puVar19);
                puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar43 + (byte)*puVar19);
                goto code_r0x004029c6;
              }
            }
            bVar43 = (byte)puVar15;
            bVar51 = CARRY1((byte)*puVar37,bVar43);
            bVar53 = SCARRY1((byte)*puVar37,bVar43);
            *(byte *)puVar37 = (byte)*puVar37 + bVar43;
            if (bVar51) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar53) {
            pbStack_c._0_2_ = (ushort)pbStack_10;
            goto code_r0x00402966;
          }
          uVar54 = (uint)(ushort)pbStack_c;
          *(uint *)((int)puVar37 + -0x23) =
               (*(int *)((int)puVar37 + -0x23) - (int)puVar44) - (uint)bVar51;
          uVar17 = *puVar19;
          bVar43 = (byte)puVar19;
          uVar1 = *puVar19;
          uVar25 = (undefined3)((uint)puVar19 >> 8);
          bVar9 = bVar43 + (byte)*puVar19;
          puVar19 = (uint *)CONCAT31(uVar25,bVar9);
          if (SCARRY1(bVar43,(byte)uVar1)) goto code_r0x00402972;
          in_stack_ffffffe8 = CONCAT22((short)((uint)in_stack_ffffffe8 >> 0x10),(ushort)pbStack_c);
          cVar7 = (char)puVar37;
          bVar8 = ((char)((uint)puVar37 >> 8) - *(byte *)((int)puVar37 + -0xf)) -
                  CARRY1(bVar43,(byte)uVar17);
          puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar8,cVar7));
          puVar45 = (uint *)CONCAT31(uVar25,bVar9 + (byte)*puVar19);
          bVar43 = (byte)puVar15;
          if (SCARRY1(bVar9,(byte)*puVar19)) {
            *(byte *)puVar37 = (byte)*puVar37 + bVar43;
            uVar55 = CONCAT44(puVar37,(int)puVar45 + -0x1c37211);
            pcVar12 = (char *)((int)puVar45 + -0x1c3720a);
            *pcVar12 = *pcVar12 + bVar8;
            bVar43 = POPCOUNT(*pcVar12);
            goto code_r0x00402984;
          }
          puVar44 = (uint *)((int)puVar44 +
                            (-(uint)CARRY1(bVar9,(byte)*puVar19) - *(int *)((int)puVar37 + 5)));
          bVar51 = SCARRY4((int)puVar45,*puVar45);
          uVar17 = (int)puVar45 + *puVar45;
          uVar55 = CONCAT44(puVar37,uVar17);
          if (bVar51) goto code_r0x00402982;
          bVar9 = (byte)uVar17 + 0x8e;
          uVar18 = CONCAT31((int3)(uVar17 >> 8),bVar9 - CARRY4((uint)puVar45,*puVar45));
          *puVar41 = (*puVar41 - uVar18) -
                     (uint)((byte)uVar17 < 0x72 || bVar9 < CARRY4((uint)puVar45,*puVar45));
          pbVar40 = (byte *)(uVar18 - 0x5e);
          bVar9 = *pbVar40;
          *pbVar40 = *pbVar40 + bVar8;
          uVar17 = (uint)CARRY1(bVar9,bVar8);
          uVar1 = uVar18 - 0x32d72;
          puVar19 = (uint *)(uVar1 - uVar17);
          if (SBORROW4(uVar18,0x32d72) != SBORROW4(uVar1,uVar17)) goto code_r0x00402992;
          uVar49 = uVar50;
          if (uVar18 < 0x32d72 || uVar1 < uVar17) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar19 >> 8);
            *(byte *)puVar37 = (byte)*puVar37 + bVar43;
            puVar45 = puVar44 + 1;
            out(*puVar44,CONCAT11(bVar8,cVar7));
            *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
            goto code_r0x00402a3e;
          }
          bVar51 = CARRY4((uint)puVar19,*puVar19);
          bVar53 = SCARRY4((int)puVar19,*puVar19);
          puVar19 = (uint *)((int)puVar19 + *puVar19);
          if (!bVar53) {
            uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,(ushort)pbStack_c);
            *(byte *)puVar44 = (byte)*puVar44 + bVar51;
            bVar9 = (byte)puVar19;
            *(byte *)((int)puVar37 + (int)unaff_EBP) =
                 *(byte *)((int)puVar37 + (int)unaff_EBP) + bVar9;
            *(byte *)puVar41 = (byte)*puVar41 + cVar7;
            *(byte *)puVar41 = (byte)*puVar41 ^ bVar9;
            bVar30 = (byte)((uint)puVar15 >> 8);
            *(byte *)puVar44 = (byte)*puVar44 + bVar30;
            *(byte *)puVar19 = (byte)*puVar19 + bVar9;
            pbVar20 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),bVar9 | (byte)*puVar19);
            *(byte *)puVar15 = (byte)*puVar15 + cVar7;
            bVar34 = *pbVar20;
            uVar32 = (undefined2)((uint)puVar15 >> 0x10);
            puVar15 = (uint *)CONCAT22(uVar32,CONCAT11(bVar30 + bVar34,bVar43));
            pbVar20 = pbVar20 + (uint)CARRY1(bVar30,*pbVar20) + *(int *)pbVar20;
            *(byte *)puVar37 = (byte)*puVar37 + bVar43;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar40 = pbVar20 + 0x73;
            bVar9 = *pbVar40;
            *pbVar40 = *pbVar40 + bVar8;
            uVar25 = (undefined3)((uint)pbVar20 >> 8);
            bVar9 = (char)pbVar20 + CARRY1(bVar9,bVar8);
            pcVar12 = (char *)CONCAT31(uVar25,bVar9);
            *(byte *)puVar37 = (byte)*puVar37 + bVar43;
            if ((POPCOUNT((byte)*puVar37) & 1U) == 0) {
              uStack_4 = (ushort)pbStack_c;
            }
            puVar47 = (uint *)((int)puVar46 + *(int *)(unaff_EBP + 0x17));
            *pcVar12 = *pcVar12 + bVar9;
            cVar7 = bVar9 + 2;
            puVar19 = (uint *)CONCAT31(uVar25,cVar7);
            if (bVar9 < 0xfe) {
              *puVar19 = (uint)(*puVar19 + (int)puVar19);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar19 = (byte)*puVar19 + cVar7;
            uVar54 = *puVar37;
            puVar45 = (uint *)((int)puVar44 + puVar41[0x19]);
            *(byte *)puVar19 = (byte)*puVar19 + cVar7;
            puVar15 = (uint *)CONCAT22(uVar32,CONCAT11(bVar30 + bVar34 | (byte)*puVar19,
                                                       bVar43 | (byte)uVar54));
            puVar46 = puVar47;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar43;
    pbVar40 = (byte *)((int)puVar19 + 0x73);
    bVar51 = CARRY1(*pbVar40,bVar9);
    *pbVar40 = *pbVar40 + bVar9;
  } while( true );
code_r0x00402992:
  pbVar40 = (byte *)((int)puVar19 + 0x2a);
  bVar51 = CARRY1(*pbVar40,bVar8);
  *pbVar40 = *pbVar40 + bVar8;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar19) = *(byte *)(in_GS_OFFSET + (int)puVar19) + (char)puVar19;
  puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                             CONCAT11((byte)((uint)puVar15 >> 8) | *(byte *)((int)puVar46 + 0x66),
                                      (char)puVar15));
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
code_r0x00402a3e:
  uVar25 = (undefined3)((uint)puVar19 >> 8);
  bVar43 = (byte)puVar19 | (byte)*puVar45;
  pcVar12 = (char *)CONCAT31(uVar25,bVar43);
  if ((char)bVar43 < '\0') {
    *pcVar12 = *pcVar12 + bVar43;
    cVar7 = bVar43 + 2;
    piVar23 = (int *)CONCAT31(uVar25,cVar7);
    if ((POPCOUNT(cVar7) & 1U) == 0) {
      *(char *)piVar23 = (char)*piVar23 + cVar7;
      bVar43 = bVar43 + 0x71;
      pcVar16 = (char *)CONCAT31(uVar25,bVar43);
      pcVar12 = (char *)segment(uVar49,(short)puVar41 + (short)puVar45);
      *pcVar12 = *pcVar12 + bVar43;
      uVar54 = puVar46[0x1a];
      *pcVar16 = *pcVar16 + bVar43;
      puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                 CONCAT11((byte)((uint)puVar15 >> 8) | (byte)uVar54 |
                                          *(byte *)((int)puVar46 + 0x69),(char)puVar15));
      *pcVar16 = *pcVar16 + bVar43;
      bVar43 = bVar43 | (byte)*puVar37;
      pcVar12 = (char *)CONCAT31(uVar25,bVar43);
      if ((POPCOUNT(bVar43) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar44 = puVar45 + (uint)bVar52 * -2 + 1;
    out(*puVar45,(short)puVar37);
  }
  else {
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((char)((uint)puVar41 >> 8) + (byte)puVar41[6],(char)puVar41)
                              );
code_r0x00402a5d:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    piVar23 = (int *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + 'o');
    puVar44 = puVar45;
  }
code_r0x00402a61:
  pcVar12 = (char *)segment(uVar49,(short)puVar41 + (short)puVar44);
  *pcVar12 = *pcVar12 + (char)piVar23;
  cVar7 = (char)puVar15;
  puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                             CONCAT11((byte)((uint)puVar15 >> 8) | (byte)puVar46[0x1a],cVar7));
  *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
  uVar32 = CONCAT11((byte)((uint)puVar37 >> 8) | *(byte *)((int)puVar37 + 0x65),(char)puVar37);
  puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar32);
  piVar21 = (int *)((int)piVar23 + *piVar23);
  puVar45 = puVar44;
  puVar47 = puVar46;
  uVar48 = (ushort)pbStack_c;
  if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402ae3;
  *(byte *)puVar37 = (byte)*puVar37 + cVar7;
  puVar45 = puVar44 + (uint)bVar52 * -2 + 1;
  out(*puVar44,uVar32);
code_r0x00402a75:
  bVar43 = (byte)((uint)puVar15 >> 8) | (byte)*puVar37;
  puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),CONCAT11(bVar43,(char)puVar15));
  piVar23 = (int *)(uint)(byte)*puVar41;
  *(byte *)puVar45 = (byte)*puVar45 - bVar43;
  puVar47 = puVar46;
code_r0x00402a7f:
  *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
  out(*puVar45,(short)puVar37);
  bVar43 = in((short)puVar37);
  *(byte *)puVar47 = bVar43;
  *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
  puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                             CONCAT11((byte)((uint)puVar15 >> 8) | (byte)*puVar37,(char)puVar15));
  iVar13 = *piVar23;
  cVar7 = in(1);
  puVar19 = (uint *)CONCAT31((int3)((uint)((int)piVar23 + *piVar23) >> 8),cVar7);
  *(char *)puVar19 = (char)*puVar19 + cVar7;
  puVar19 = (uint *)((uint)puVar19 | *puVar19);
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar37;
  puVar45 = (uint *)((int)puVar45 + (((uint)bVar52 * -8 + 4) - iVar13));
  puVar47 = (uint *)((int)puVar47 + (uint)bVar52 * -2 + 1);
  uStack_4 = (ushort)pbStack_c;
  while( true ) {
    bVar43 = (byte)puVar19 | (byte)*puVar37;
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar43);
    puVar46 = puVar47;
    if ((POPCOUNT(bVar43) & 1U) != 0) break;
    *(byte *)puVar19 = (byte)*puVar19 + bVar43;
code_r0x00402a9b:
    uVar25 = (undefined3)((uint)puVar19 >> 8);
    cVar7 = (char)puVar19 + '\r';
    piVar21 = (int *)CONCAT31(uVar25,cVar7);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar21;
    *(char *)piVar21 = (char)*piVar21 + cVar7;
    *(byte *)(puVar45 + -0xc800000) = (byte)puVar45[-0xc800000] + (char)puVar37;
    *(char *)piVar21 = (char)*piVar21 + cVar7;
    *(byte *)puVar37 = (byte)*puVar37 + cVar7;
    cVar10 = (char)puVar15;
    if ((POPCOUNT((byte)*puVar37) & 1U) != 0) {
      *(byte *)puVar37 = (byte)*puVar37 + cVar10;
      puVar44 = puVar45 + (uint)bVar52 * -2 + 1;
      out(*puVar45,(short)puVar37);
      piVar23 = (int *)((longlong)*piVar21 * 0x7b020a00);
      *(char *)piVar23 =
           (char)*piVar23 - ((longlong)(int)piVar23 != (longlong)*piVar21 * 0x7b020a00);
      pbVar40 = (byte *)((int)puVar46 + (int)unaff_EBP * 2);
      *pbVar40 = *pbVar40;
      goto code_r0x00402a61;
    }
    *(char *)piVar21 = (char)*piVar21 + cVar7;
    puVar19 = (uint *)CONCAT31(uVar25,(char)puVar19 + ':');
    puVar44 = (uint *)((uint)puVar45 | *(uint *)((int)puVar37 + -0x79));
    iVar13 = (int)puVar19 + *puVar19;
    if (SCARRY4((int)puVar19,*puVar19)) {
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((char)((uint)puVar41 >> 8) + (byte)puVar44[(int)puVar41],
                                          (char)puVar41));
      *(char *)((int)puVar37 * 2) = *(char *)((int)puVar37 * 2) + (char)iVar13;
      puVar47 = puVar46;
      goto code_r0x00402b33;
    }
    uVar25 = (undefined3)((uint)iVar13 >> 8);
    cVar7 = (char)iVar13 + CARRY4((uint)puVar19,*puVar19);
    piVar23 = (int *)CONCAT31(uVar25,cVar7);
    *(byte *)puVar37 = (byte)*puVar37 + cVar10;
    bVar51 = (POPCOUNT((byte)*puVar37) & 1U) != 0;
    if ((bVar51) && (bVar51)) goto code_r0x00402a61;
    *(char *)piVar23 = (char)*piVar23 + cVar7;
    cVar42 = cVar7 + '(';
    pcVar12 = (char *)CONCAT31(uVar25,cVar42);
    puVar47 = puVar46 + (uint)bVar52 * -2 + 1;
    uVar54 = in((short)puVar37);
    *puVar46 = uVar54;
    *pcVar12 = *pcVar12 + cVar42;
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                               CONCAT11((byte)((uint)puVar15 >> 8) | bRama07b0222,cVar10));
    *pcVar12 = *pcVar12 + cVar42;
    pcVar12 = (char *)CONCAT31(uVar25,cVar7 + '>');
code_r0x00402ad2:
    out(*puVar44,(short)puVar37);
    puVar45 = (uint *)((int)(puVar44 + (uint)bVar52 * -2 + 1) + (uint)bVar52 * -2 + 1);
    out((byte)puVar44[(uint)bVar52 * -2 + 1],(short)puVar37);
    bVar43 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar43;
    puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(byte)puVar41 | (byte)*puVar47);
    in_AF = 9 < (bVar43 & 0xf) | in_AF;
    uVar25 = (undefined3)((uint)pcVar12 >> 8);
    bVar43 = bVar43 + in_AF * -6;
    puVar37 = (uint *)((uint)puVar37 ^ *puVar37);
    cVar7 = bVar43 + (0x9f < bVar43 | in_AF * (bVar43 < 6)) * -0x60 + (byte)*puVar37;
    piVar23 = (int *)CONCAT31(uVar25,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar23 = (char)*piVar23 + cVar7;
    piVar21 = (int *)CONCAT31(uVar25,cVar7 + '\x17');
    uVar48 = (ushort)pbStack_c;
code_r0x00402ae3:
    out(*puVar45,(short)puVar37);
    puVar44 = puVar45 + (uint)bVar52 * -2 + 1 + (uint)bVar52 * -2 + 1;
    out(puVar45[(uint)bVar52 * -2 + 1],(short)puVar37);
    *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
code_r0x00402ae7:
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | unaff_EBP[-0x60],(char)puVar41)
                              );
    cVar7 = (char)piVar21;
    *(char *)piVar21 = (char)*piVar21 + cVar7;
    uVar25 = (undefined3)((uint)piVar21 >> 8);
    bVar43 = cVar7 + 2;
    puVar19 = (uint *)CONCAT31(uVar25,bVar43);
    pbStack_c._0_2_ = uVar48;
    if ((POPCOUNT(bVar43) & 1U) == 0) {
      *(byte *)puVar19 = (byte)*puVar19 + bVar43;
      cVar7 = cVar7 + '}';
      puVar19 = (uint *)CONCAT31(uVar25,cVar7);
      *(byte *)puVar19 = ((byte)*puVar19 - cVar7) - (0x84 < bVar43);
      pbVar40 = (byte *)((int)puVar37 + (int)puVar19);
      *pbVar40 = *pbVar40 + cVar7;
      bVar43 = POPCOUNT(*pbVar40);
      puVar45 = puVar44;
code_r0x00402af9:
      pbStack_c._0_2_ = uVar48;
      puVar46 = puVar47;
      if ((bVar43 & 1) == 0) {
        *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
        bVar43 = (byte)puVar15;
        *(byte *)puVar37 = (byte)*puVar37 + bVar43;
        uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uStack_4);
        puVar44 = puVar45 + (uint)bVar52 * -2 + 1;
        out(*puVar45,(short)puVar37);
        uVar54 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + bVar43;
        iVar13 = CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + 'o') +
                 *(int *)((int)puVar37 * 2) + (uint)CARRY1((byte)uVar54,bVar43);
        pcVar12 = (char *)CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '(');
        while( true ) {
          uVar54 = *puVar37;
          bVar9 = (byte)puVar15;
          *(byte *)puVar37 = (byte)*puVar37 + bVar9;
          pcVar12 = pcVar12 + (uint)CARRY1((byte)uVar54,bVar9) + iRam73280512;
          bVar43 = (byte)pcVar12;
          *pcVar12 = *pcVar12 + bVar43;
          puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                     CONCAT11((byte)((uint)puVar15 >> 8) | bRam7d160243,bVar9));
          bVar52 = ((uint)uStackY_30 & 0x400) != 0;
          in_AF = ((uint)uStackY_30 & 0x10) != 0;
          *pcVar12 = *pcVar12 + bVar43;
          uVar25 = (undefined3)((uint)pcVar12 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar25,bVar43 + 2) + (uint)(0xfd < bVar43);
          cVar7 = bVar43 + 4;
          if (SCARRY1(bVar43 + 2,'\x02') != cVar7 < '\0') break;
          *(char *)CONCAT31(uVar25,cVar7) = *(char *)CONCAT31(uVar25,cVar7) + cVar7;
          iVar13 = CONCAT31(uVar25,bVar43 + 0x16);
code_r0x00402b33:
          piVar21 = (int *)(iVar13 + 0xe2802);
          *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)puVar15 >> 8);
          uVar48 = (ushort)pbStack_c;
          pbStack_c._0_2_ = uStack_4;
          while( true ) {
            bVar9 = (byte)puVar41 | (byte)((uint)puVar15 >> 8);
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar9);
            *piVar21 = (int)(*piVar21 + (int)piVar21);
            cVar7 = (char)piVar21;
            *(byte *)puVar37 = (byte)*puVar37 + cVar7;
            if ((POPCOUNT((byte)*puVar37) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar21 = (char)*piVar21 + cVar7;
            uVar54 = CONCAT31((int3)((uint)piVar21 >> 8),cVar7 + '\x13');
            puVar19 = (uint *)(uVar54 + 0x19061224 + (uint)(0x1f9edfd < uVar54));
            uVar1 = (uint)(0xe4ffffdd < uVar54 + 0xfe061202 ||
                          CARRY4(uVar54 + 0x19061224,(uint)(0x1f9edfd < uVar54)));
            uVar17 = *puVar44;
            uVar54 = *puVar44;
            *puVar44 = (uint)((byte *)(uVar54 + (int)puVar19) + uVar1);
            bVar43 = POPCOUNT(*puVar44 & 0xff);
            puVar45 = puVar44;
            if ((SCARRY4(uVar17,(int)puVar19) != SCARRY4((int)(uVar54 + (int)puVar19),uVar1)) ==
                (int)*puVar44 < 0) goto code_r0x00402af9;
            bVar43 = (byte)puVar19;
            *(byte *)puVar19 = (byte)*puVar19 + bVar43;
            iVar13 = CONCAT31((int3)((uint)puVar19 >> 8),bVar43 + 2) + 0x9d7d +
                     (uint)(0xfd < bVar43);
            bVar43 = (byte)puVar37 | (byte)*puVar37;
            uVar54 = *puVar41;
            *(byte *)puVar41 = (byte)*puVar41 + bVar9;
            pcVar12 = (char *)(CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x12') + 0x228b26
                               + *puVar47 + (uint)CARRY1((byte)uVar54,bVar9));
            cVar7 = bVar43 + (byte)*puVar15;
            puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),cVar7);
            if (SCARRY1(bVar43,(byte)*puVar15) == cVar7 < '\0') break;
            *pcVar12 = *pcVar12 + (char)pcVar12;
            cVar7 = (char)pcVar12 + '\x02';
            pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar7);
            bVar43 = POPCOUNT(cVar7);
            uVar48 = (ushort)pbStack_c;
code_r0x00402b7a:
            puVar46 = puVar44;
            if ((bVar43 & 1) != 0) break;
            while( true ) {
              cVar7 = (char)pcVar12;
              *pcVar12 = *pcVar12 + cVar7;
              uVar25 = (undefined3)((uint)pcVar12 >> 8);
              pcVar12 = (char *)CONCAT31(uVar25,cVar7 + '\x13');
              *(byte *)puVar15 = (byte)*puVar15 | (byte)puVar37;
              *(byte *)puVar47 = (byte)*puVar47 | (byte)puVar37;
              *puVar37 = (uint)(pcVar12 + *puVar37);
              uVar32 = (undefined2)((uint)puVar41 >> 0x10);
              uVar39 = SUB41(puVar41,0);
              cVar10 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar41 + -0x5f);
              puVar41 = (uint *)CONCAT22(uVar32,CONCAT11(cVar10,uVar39));
              *pcVar12 = *pcVar12 + cVar7 + '\x13';
              piVar21 = (int *)CONCAT31(uVar25,cVar7 + -0x7a);
              uVar54 = *puVar37;
              *(byte *)puVar37 = (byte)*puVar37 + (char)puVar15;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar54,(char)puVar15) == (char)(byte)*puVar37 < '\0') break;
              *(char *)piVar21 = (char)*piVar21 + cVar7 + -0x7a;
              cVar42 = cVar7 + -0x78;
              piVar21 = (int *)CONCAT31(uVar25,cVar42);
              uVar5 = uVar48;
              if ((POPCOUNT(cVar42) & 1U) != 0) break;
              *(char *)piVar21 = (char)*piVar21 + cVar42;
              pcVar12 = (char *)CONCAT31(uVar25,cVar7 + -0x65);
              *puVar15 = *puVar15 | (uint)puVar37;
              *puVar47 = *puVar47 | (uint)puVar37;
              pbVar40 = (byte *)((int)puVar15 + -1);
              cVar10 = cVar10 + *(byte *)((int)puVar41 + -0x5e);
              puVar41 = (uint *)CONCAT22(uVar32,CONCAT11(cVar10,uVar39));
              *pcVar12 = *pcVar12 + cVar7 + -0x65;
              bVar43 = cVar7 + 10;
              puVar19 = (uint *)CONCAT31(uVar25,bVar43);
              bVar9 = (byte)pbVar40;
              *(byte *)puVar37 = (byte)*puVar37 + bVar9;
              puVar44 = puVar46 + (uint)bVar52 * -2 + 1;
              out(*puVar46,(short)puVar37);
              uVar54 = *puVar37;
              *(byte *)puVar37 = (byte)*puVar37 + bVar9;
              uVar18 = (uint)CARRY1((byte)uVar54,bVar9);
              uVar54 = *puVar37;
              uVar17 = *puVar37;
              pbVar20 = pbVar40 + uVar17 + uVar18;
              uVar6 = *puVar37;
              cRam130a0000 = cRam130a0000 - cVar10;
              uVar1 = *puVar37;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar19);
              *(byte *)puVar19 = (char)*puVar19 + bVar43;
              puVar15 = (uint *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar20 >> 8) | bRam7d170243,
                                                  (char)pbVar20 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar40,uVar54) ||
                                                  CARRY4((uint)(pbVar40 + uVar17),uVar18))));
              bVar52 = (uStack_4 & 0x400) != 0;
              in_AF = (uStack_4 & 0x10) != 0;
              *(byte *)puVar19 = (char)*puVar19 + bVar43;
              bVar51 = 0xfd < bVar43;
              pcVar12 = (char *)CONCAT31(uVar25,cVar7 + '\f');
              puVar37 = (uint *)((uint)puVar37 | uVar1);
code_r0x00402bd1:
              uVar54 = *puVar41;
              uVar17 = *puVar41;
              *puVar41 = (uint)((byte *)(uVar17 + (int)puVar15) + bVar51);
              bVar43 = POPCOUNT(*puVar41 & 0xff);
              uVar48 = uStack_4;
              if ((SCARRY4(uVar54,(int)puVar15) !=
                  SCARRY4((int)(uVar17 + (int)puVar15),(uint)bVar51)) == (int)*puVar41 < 0)
              goto code_r0x00402b7a;
              cVar7 = (char)pcVar12;
              *pcVar12 = *pcVar12 + cVar7;
              pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar7 + '\x02');
              if (SCARRY1(cVar7,'\x02') == (char)(cVar7 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar12 = *pcVar12 + (char)pcVar12;
                pcVar12 = (char *)(CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '\x12') |
                                  *puVar37);
                *(byte *)puVar47 = (byte)*puVar47 - (char)puVar15;
                *pcVar12 = *pcVar12 + (char)pcVar12;
                puVar37 = (uint *)((int)puVar37 - *puVar44);
                bVar43 = (byte)puVar41 | (byte)((uint)puVar15 >> 8);
                cVar7 = *pcVar12;
                uVar25 = (undefined3)((uint)pcVar12 >> 8);
                pcVar12 = (char *)CONCAT31(uVar25,cVar7);
                *pcVar12 = *pcVar12 + cVar7;
                pcVar16 = (char *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                           CONCAT11((char)((uint)puVar41 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),
                                                                       bVar43) + -0x5b),bVar43));
                *pcVar12 = *pcVar12 + cVar7;
                bVar51 = false;
                pcVar12 = (char *)(CONCAT31(uVar25,cVar7 + '\x13') | *puVar37);
                do {
                  bVar9 = (byte)puVar15;
                  bVar43 = bVar9 + (byte)puVar44[(int)puVar47 * 2];
                  puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar43 + bVar51);
                  uVar54 = (uint)(CARRY1(bVar9,(byte)puVar44[(int)puVar47 * 2]) ||
                                 CARRY1(bVar43,bVar51));
                  pcVar22 = pcVar12 + 0x1b000019 + uVar54;
                  piVar23 = (int *)((int)puVar47 * 2 + 0x40000a5);
                  *piVar23 = (int)((int)puVar15 +
                                  (uint)((char *)0xe4ffffe6 < pcVar12 ||
                                        CARRY4((uint)(pcVar12 + 0x1b000019),uVar54)) + *piVar23);
                  puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 + cRam00009d7d
                                            );
                  uVar25 = (undefined3)((uint)pcVar22 >> 8);
                  bVar43 = (char)pcVar22 + 0x12;
                  in_AF = 9 < (bVar43 & 0xf) | in_AF;
                  uVar54 = CONCAT31(uVar25,bVar43 + in_AF * -6) & 0xffffff0f;
                  pcVar12 = (char *)CONCAT22((short)(uVar54 >> 0x10),
                                             CONCAT11((char)((uint)pcVar22 >> 8) - in_AF,
                                                      (char)uVar54));
                  pbVar40 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar25,bVar43));
                  while( true ) {
                    *pcVar12 = *pcVar12 + (char)pcVar12;
                    puVar46 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),
                                               (byte)puVar37 | (byte)*puVar37);
                    puVar47 = (uint *)((uint)puVar47 | (uint)puVar44);
                    uVar54 = (uint)pcVar16 | (uint)puVar44;
                    unaff_EBP = pbVar40 + 1;
                    uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,(ushort)pbStack_c);
                    cVar7 = (char)(pcVar12 + 0x1b000019);
                    uVar25 = (undefined3)((uint)(pcVar12 + 0x1b000019) >> 8);
                    cVar10 = cVar7 + -0x13;
                    pcVar12 = (char *)CONCAT31(uVar25,cVar10);
                    uVar32 = (undefined2)(uVar54 >> 0x10);
                    cVar42 = (char)(uVar54 >> 8) + *(char *)(uVar54 - 0x5e);
                    puVar41 = (uint *)CONCAT22(uVar32,CONCAT11(cVar42,(byte)uVar54));
                    *pcVar12 = *pcVar12 + cVar10;
                    pcVar12 = (char *)(CONCAT31(uVar25,cVar7 + '\x19') | *puVar46);
                    bVar43 = (byte)pcVar12;
                    if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) != 0) {
                      pbVar40 = (byte *)((int)puVar46 + (int)pcVar12);
                      bVar51 = CARRY1(*pbVar40,bVar43);
                      *pbVar40 = *pbVar40 + bVar43;
                      puVar37 = puVar46;
                      goto code_r0x00402bd1;
                    }
                    *pcVar12 = *pcVar12 + bVar43;
                    uVar25 = (undefined3)((uint)pcVar12 >> 8);
                    pcVar16 = (char *)CONCAT31(uVar25,bVar43 + 0x6f);
                    puVar37 = (uint *)((int)puVar46 + 1);
                    *pcVar16 = *pcVar16 + bVar43 + 0x6f;
                    bVar9 = (byte)uVar54 | (byte)((uint)pcVar12 >> 8);
                    pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x5c);
                    cVar42 = cVar42 + *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),bVar9) + -0x5f);
                    puVar41 = (uint *)CONCAT22(uVar32,CONCAT11(cVar42,bVar9));
                    *pcVar12 = *pcVar12 + bVar43 + 0x5c;
                    pcVar12 = (char *)(CONCAT31(uVar25,bVar43 + 0x88) | *puVar37);
                    if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) != 0) {
                      *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)puVar15 >> 8);
                      uStackY_30 = (uint *)((uint)uStackY_30._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar12 = *pcVar12 + (char)pcVar12;
                    uVar25 = (undefined3)((uint)pcVar12 >> 8);
                    cVar7 = (char)pcVar12 + 'o';
                    puVar37 = (uint *)((int)puVar46 + 2);
                    *(char *)CONCAT31(uVar25,cVar7) = *(char *)CONCAT31(uVar25,cVar7) + cVar7;
                    pcVar16 = (char *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               bVar9 | (byte)((uint)pcVar12 >> 8));
                    pcVar12 = (char *)(CONCAT31(uVar25,cVar7) | 2);
                    pbVar40[-0x62] = pbVar40[-0x62] + 1;
                    bVar43 = (byte)pcVar12;
                    *pcVar12 = *pcVar12 + bVar43;
                    bVar51 = 0xfd < bVar43;
                    cVar7 = bVar43 + 2;
                    pcVar12 = (char *)CONCAT31(uVar25,cVar7);
                    uVar49 = (ushort)pbStack_c;
                    if (SCARRY1(bVar43,'\x02') != cVar7 < '\0') break;
                    *pcVar12 = *pcVar12 + cVar7;
                    bVar9 = bVar43 + 10;
                    pcVar12 = (char *)CONCAT31(uVar25,bVar9);
                    *pcVar12 = *pcVar12 - cVar42;
                    cVar10 = (char)puVar15;
                    *(byte *)puVar37 = *(byte *)puVar37 + cVar10;
                    pbVar40[-0x62] = pbVar40[-0x62] + 1;
                    *pcVar12 = *pcVar12 + bVar9;
                    cVar7 = bVar43 + 0xc;
                    pcVar12 = (char *)CONCAT31(uVar25,cVar7);
                    if (SCARRY1(bVar9,'\x02') == cVar7 < '\0') {
                      *pcVar12 = *pcVar12 + cVar7;
                      *(byte *)puVar15 = (byte)*puVar15 - cVar42;
                      *(byte *)puVar37 = *(byte *)puVar37 + cVar10;
                      cVar7 = (bVar43 + 0x13) - (byte)puVar15[0x13];
                      pcVar12 = (char *)CONCAT31(uVar25,cVar7);
                      *pcVar12 = *pcVar12 + cVar7;
                      pcVar22 = (char *)CONCAT31(uVar25,cVar7 + *pcVar12);
                      *pcVar22 = *pcVar22 + cVar7 + *pcVar12;
                      pcVar22 = pcVar22 + *puVar15;
                      *pcVar22 = *pcVar22 + (char)pcVar22;
                      LOCK();
                      pcVar12 = *(char **)pcVar22;
                      *(char **)pcVar22 = pcVar22;
                      UNLOCK();
                      *pcVar12 = *pcVar12 + (char)pcVar12;
                      pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(byte)*puVar15);
                      *pbVar20 = *pbVar20 + (byte)*puVar15;
                      goto code_r0x00402c8d;
                    }
                    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),
                                               cVar10 + *pcVar16 + (0xfd < bVar9));
                    *(byte *)puVar47 = (byte)*puVar47 - cVar42;
                    pbVar40 = unaff_EBP;
                  }
                } while( true );
              }
              puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                         CONCAT11((char)((uint)puVar41 >> 8) +
                                                  *(byte *)((int)puVar41 + -99),(char)puVar41));
              puVar46 = puVar44;
            }
            *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
            puVar37 = (uint *)((int)puVar37 - *puVar46);
            puVar44 = puVar46;
            uVar48 = (ushort)pbStack_c;
            pbStack_c._0_2_ = uVar5;
          }
          *(byte *)puVar37 = (byte)*puVar37 + (char)puVar15;
          pcVar12 = pcVar12 + -0x7d160243;
        }
        pcVar12 = (char *)CONCAT31(uVar25,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar15;
    uVar54 = *puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
    *puVar47 = (uint)((int)puVar37 + (uint)CARRY1((byte)uVar54,(byte)puVar19) + *puVar47);
    puVar45 = puVar44;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar11 = (char)puVar15;
      cVar29 = (char)((uint)puVar15 >> 8) + (char)((uint)pbVar20 >> 8);
      puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),CONCAT11(cVar29,cVar11));
      cVar7 = (char)pbVar20;
      *pbVar20 = *pbVar20 + cVar7;
      pcVar12 = (char *)((int)pbVar20 * 2 + 0x1a10000);
      cVar42 = (char)((uint)pcVar16 >> 8);
      *pcVar12 = *pcVar12 + cVar42;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
      pbVar20[-0x47ffffff] = pbVar20[-0x47ffffff] + cVar42;
      *(byte **)pbVar20 = pbVar20 + *(int *)pbVar20;
      bVar9 = (byte)puVar37;
      *(byte *)puVar47 = (byte)*puVar47 + bVar9;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + bVar9;
      *pbVar20 = *pbVar20 + cVar7;
      *puVar44 = (uint)(*puVar44 + (int)puVar44);
      uVar32 = (undefined2)((uint)pcVar16 >> 0x10);
      cVar42 = cVar42 + (byte)puVar44[(int)pcVar16];
      pcVar12 = (char *)CONCAT22(uVar32,CONCAT11(cVar42,(char)pcVar16));
      pcVar12[(int)pbVar20] = pcVar12[(int)pbVar20] + cVar7;
      *(byte *)puVar37 = *(byte *)puVar37 - cVar42;
      *(byte *)puVar37 = *(byte *)puVar37 + cVar11;
      uVar25 = (undefined3)((uint)pbVar20 >> 8);
      bVar43 = cVar7 - *pbVar20;
      *pcVar12 = *pcVar12 + bVar9;
      *(byte *)puVar37 = *(byte *)puVar37 ^ bVar43;
      *(byte *)puVar37 = *(byte *)puVar37 + bVar43;
      *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
      uVar54 = *puVar15;
      *(byte *)puVar15 = (byte)*puVar15 + bVar9;
      cVar10 = bVar43 + *(char *)CONCAT31(uVar25,bVar43) + CARRY1((byte)uVar54,bVar9);
      pcVar16 = (char *)CONCAT22(uVar32,CONCAT11(cVar42 + pbVar40[-0x60],(char)pcVar16));
      *(char *)CONCAT31(uVar25,cVar10) = *(char *)CONCAT31(uVar25,cVar10) + cVar10;
      cVar42 = cVar10 + '\x12';
      pbVar20 = (byte *)CONCAT31(uVar25,cVar42);
      cVar7 = *pcVar16;
      *pcVar16 = *pcVar16 + cVar42;
      if (SCARRY1(cVar7,cVar42) != *pcVar16 < '\0') break;
code_r0x00402c8d:
      cVar7 = (char)pbVar20;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
      *(byte *)puVar37 = *(byte *)puVar37 + cVar7;
      *pbVar20 = *pbVar20 + cVar7;
    }
    *pbVar20 = *pbVar20 + cVar42;
    pbVar20 = (byte *)CONCAT31(uVar25,cVar10 + '$');
    *pbVar20 = *pbVar20 + cVar29;
    bVar43 = *(byte *)puVar37;
    *(byte *)puVar37 = *(byte *)puVar37 + cVar11;
    uVar48 = (ushort)pbStack_c;
    uVar49 = uVar50;
  } while (SCARRY1(bVar43,cVar11) == (char)*(byte *)puVar37 < '\0');
  do {
    cVar7 = (char)pbVar20;
    *pbVar20 = *pbVar20 + cVar7;
    uVar25 = (undefined3)((uint)pbVar20 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar37;
    bVar9 = cVar7 + 0x24;
    cVar42 = (char)((uint)pcVar16 >> 8);
    pcVar16[-0x62] = pcVar16[-0x62] + cVar42;
    *(char *)CONCAT31(uVar25,bVar9) = *(char *)CONCAT31(uVar25,bVar9) + bVar9;
    bVar43 = cVar7 + 0x2fU + (byte)*puVar15;
    cVar10 = bVar43 + (0xf4 < bVar9);
    cVar7 = cVar10 + *(char *)CONCAT31(uVar25,cVar10) +
            (CARRY1(cVar7 + 0x2fU,(byte)*puVar15) || CARRY1(bVar43,0xf4 < bVar9));
    pcVar12 = (char *)CONCAT31(uVar25,cVar7);
    *pcVar12 = *pcVar12 - (char)puVar37;
    *pcVar12 = *pcVar12 + cVar7;
    pcVar22 = (char *)((int)puVar37 - *puVar37);
    *(byte *)(puVar44 + (int)pcVar16) = (byte)puVar44[(int)pcVar16] + cVar42;
    pcVar12[(int)unaff_EBP] = pcVar12[(int)unaff_EBP] + cVar7;
    *pcVar22 = *pcVar22 + (char)puVar15;
    pcVar12 = (char *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                               CONCAT11((char)((uint)pbVar20 >> 8) - *pcVar22,cVar7));
    uVar54 = *puVar47;
    *pcVar12 = *pcVar12 - (char)((uint)pcVar22 >> 8);
    *pcVar12 = *pcVar12 + cVar7;
    uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uVar48);
    pbVar40 = (byte *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                               CONCAT11(cVar42 - (byte)*puVar44,(char)pcVar16));
    unaff_EBP = unaff_EBP + *(int *)(pbVar40 + (int)puVar15);
    puVar46 = (uint *)CONCAT31((int3)((uint)pcVar22 >> 8),(char)pcVar22 + (byte)uVar54);
    while( true ) {
      puVar37 = puVar46;
      uVar32 = (undefined2)((uint)pbVar40 >> 0x10);
      bVar34 = (char)((uint)pbVar40 >> 8) + pbVar40[0x18];
      *pcVar12 = *pcVar12 + (char)pcVar12;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + 'o');
      cVar7 = (char)puVar15;
      *(byte *)puVar37 = (byte)*puVar37 + cVar7;
      uVar54 = *puVar44;
      bVar8 = (byte)((uint)puVar15 >> 8);
      bVar43 = *pbVar20;
      pbVar20 = pbVar20 + (uint)CARRY1(bVar8,*pbVar20) + *(int *)pbVar20;
      *(byte *)puVar37 = (byte)*puVar37 + cVar7;
      cVar10 = ((char)pbVar40 - (byte)uVar54) - (byte)*puVar44;
      bVar9 = *(byte *)((int)puVar47 + 0x1a);
      *pbVar20 = *pbVar20 + (char)pbVar20;
      puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                 CONCAT11(bVar8 + bVar43 + bVar9 | (byte)*puVar37,cVar7));
      pbVar20 = pbVar20 + *puVar37;
      if ((POPCOUNT((uint)pbVar20 & 0xff) & 1U) != 0) break;
      *pbVar20 = *pbVar20 + (char)pbVar20;
      bVar43 = (char)pbVar20 + 0x6f;
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar43);
      pcVar16 = (char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar34,(char)pbVar40)) >> 8),
                                  cVar10) + -1);
      *pcVar12 = *pcVar12 + bVar43;
      *pcVar12 = *pcVar12 + bVar43;
      *pcVar16 = *pcVar16 + (byte)puVar37;
      *(byte *)((int)pcVar12 * 2) = *(byte *)((int)pcVar12 * 2) ^ bVar43;
      uVar4 = *(undefined6 *)pcVar12;
      uVar48 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar12 = (char *)uVar4;
      *pcVar12 = *pcVar12 + (char)uVar4;
      *(byte *)puVar44 = (byte)*puVar44 + (char)uVar4;
      pcVar12 = (char *)((uint)pcVar12 | 0x73110008);
      bVar34 = (byte)((uint)pcVar16 >> 8);
      *(byte *)puVar47 = (byte)*puVar47 - bVar34;
      *(byte *)puVar37 = (byte)*puVar37 + cVar7;
      puVar46 = puVar44 + (uint)bVar52 * -2 + 1;
      out(*puVar44,(short)puVar37);
      *pcVar12 = *pcVar12;
      cVar7 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar7;
      bVar43 = unaff_EBP[-0x5a];
      uVar32 = (undefined2)((uint)pcVar16 >> 0x10);
      cVar10 = (char)pcVar16;
      *pcVar12 = *pcVar12 + cVar7;
      cVar7 = cVar7 + '\x02';
      uVar54 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar7);
      puVar15 = (uint *)(uVar54 | 0x73110000);
      puVar44 = puVar46 + (uint)bVar52 * -2 + 1;
      out(*puVar46,(short)puVar37);
      *(byte *)puVar15 = (byte)*puVar15;
      bVar8 = (byte)puVar37 | (byte)*puVar47;
      puVar46 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),bVar8);
      *(byte *)puVar15 = (byte)*puVar15 + cVar7;
      pcVar12 = (char *)(uVar54 | 0x7b1f1609);
      bVar52 = (uVar49 & 0x400) != 0;
      *(uint *)((int)puVar47 + -0x7d) = *(uint *)((int)puVar47 + -0x7d) | (uint)unaff_EBP;
      bVar9 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar9;
      bVar34 = bVar34 | bVar43 | *(byte *)((int)puVar44 + 0x19);
      pbVar40 = (byte *)CONCAT22(uVar32,CONCAT11(bVar34,cVar10));
      *pcVar12 = *pcVar12 + bVar9;
      uVar25 = (undefined3)((uint)pcVar12 >> 8);
      puVar44[(int)puVar47 * 2] =
           (uint)((int)puVar46 + (uint)(0xd2 < bVar9) + puVar44[(int)puVar47 * 2]);
      bVar43 = bVar9 + 0x2d ^ *(byte *)CONCAT31(uVar25,bVar9 + 0x2d);
      pcVar12 = (char *)CONCAT31(uVar25,bVar43);
      uVar54 = *puVar44;
      *(byte *)puVar44 = (byte)*puVar44 + bVar43;
      uVar49 = uVar48;
      if (CARRY1((byte)uVar54,bVar43)) {
        *pcVar12 = *pcVar12 + bVar43;
        bVar43 = bVar43 | pcVar12[0x4000019];
        pcVar12 = (char *)CONCAT31(uVar25,bVar43);
        if ('\0' < (char)bVar43) {
          *pcVar12 = *pcVar12 + bVar43;
          piVar23 = (int *)CONCAT31(uVar25,bVar43 + 0x28);
          *piVar23 = (int)piVar23 + (uint)(0xd7 < bVar43) + *piVar23;
          bVar30 = (byte)((uint6)uVar4 >> 8);
          *pbVar40 = *pbVar40 + bVar30;
          uVar33 = CONCAT11((byte)((uint)puVar37 >> 8) | bVar34,bVar8);
          puVar46 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar33);
          uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uVar48);
          bVar8 = in(uVar33);
          pbVar20 = (byte *)CONCAT31(uVar25,bVar8);
          bVar43 = *pbVar20;
          bVar51 = SCARRY1(*pbVar20,bVar8);
          *pbVar20 = *pbVar20 + bVar8;
          bVar9 = *pbVar20;
          puVar41 = puVar44;
          uStack_4 = uVar48;
          if (!CARRY1(bVar43,bVar8)) goto code_r0x00402e19;
          *pbVar20 = *pbVar20 + bVar8;
          bVar30 = bVar30 | *pbVar20;
          puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),CONCAT11(bVar30,cVar7));
          pcVar12 = (char *)CONCAT31(uVar25,bVar8 + *pbVar20);
          *pbVar40 = *pbVar40 + bVar30;
        }
        uVar25 = (undefined3)((uint)pcVar12 >> 8);
        bVar9 = (byte)pcVar12 | (byte)*puVar46;
        pbVar20 = (byte *)CONCAT31(uVar25,bVar9);
        puVar41 = puVar44 + (uint)bVar52 * -2 + 1;
        out(*puVar44,(short)puVar46);
        LOCK();
        bVar43 = *pbVar20;
        *pbVar20 = bVar9;
        UNLOCK();
        *(byte *)puVar46 = (byte)*puVar46 + (char)puVar15;
        piVar23 = (int *)(CONCAT31(uVar25,bVar43) + -0x1b7e07);
        *(byte *)puVar46 = (byte)*puVar46 + (char)puVar15;
        iVar13 = (int)puVar15 - *(int *)pbVar40;
        bVar43 = *(byte *)((int)puVar47 + -0x7a);
        uVar33 = (undefined2)((uint)iVar13 >> 0x10);
        *(char *)piVar23 = *(char *)piVar23 + (char)piVar23;
        bVar9 = (char)((uint)iVar13 >> 8) + bVar43 | *(byte *)((int)puVar47 + 0x17);
        *(char *)piVar23 = *(char *)piVar23 + (char)piVar23;
        uVar25 = (undefined3)(CONCAT22(uVar33,CONCAT11(bVar9,(byte)iVar13)) >> 8);
        bVar43 = (byte)iVar13 | *pbVar40;
        puVar15 = (uint *)CONCAT31(uVar25,bVar43);
        pbVar20 = (byte *)((int)piVar23 + *piVar23);
        puVar44 = puVar41;
        if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402e0a;
        *(byte *)puVar15 = (byte)*puVar15 + bVar43;
        *(byte **)pbVar40 = (byte *)(*(int *)pbVar40 + (int)puVar46);
        piVar23 = (int *)CONCAT31(uVar25,bVar43 + 0x27);
        puVar15 = (uint *)CONCAT22(uVar33,CONCAT11(bVar9 + *(byte *)((int)puVar47 + -0x79),bVar43));
        *(byte *)piVar23 = (char)*piVar23 + bVar43 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar16 = (char *)CONCAT22(uVar32,CONCAT11(bVar34 | unaff_EBP[-0x62],cVar10));
  } while( true );
code_r0x00402dff:
  pbVar20 = (byte *)CONCAT22((short)((uint)piVar23 >> 0x10),
                             CONCAT11((byte)((uint)piVar23 >> 8) |
                                      *(byte *)((int)puVar46 + 0x2170411),(byte)piVar23));
  puVar44 = puVar41 + (uint)bVar52 * -2 + 1;
  out(*puVar41,(short)puVar46);
  *pbVar20 = (byte)piVar23;
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar15;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar20;
  *pbVar20 = *pbVar20 - cVar10;
  *pbVar20 = *pbVar20 + (char)pbVar20;
  bVar51 = false;
  bVar9 = (byte)((uint)puVar15 >> 8) | bRam052b0603;
  puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),CONCAT11(bVar9,(char)puVar15));
  puVar41 = puVar44;
code_r0x00402e19:
  if (bVar9 == 0 || bVar51 != (char)bVar9 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar20;
  *pbVar20 = *pbVar20 + cRam89280411;
  piVar23 = (int *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                            CONCAT11((byte)((uint)pbVar20 >> 8) |
                                     *(byte *)((int)puVar46 + 0x7190411),cRam89280411));
  *(char *)piVar23 = (char)*piVar23 + cRam89280411;
  cVar7 = (char)puVar15;
  puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                             CONCAT11((byte)((uint)puVar15 >> 8) | (byte)*puVar46,cVar7));
  puVar41 = (uint *)((int)puVar41 + *piVar23);
  pbVar20 = (byte *)((int)piVar23 + *piVar23);
  bVar9 = (byte)pbVar20;
  *pbVar20 = *pbVar20 + bVar9;
  *(byte *)puVar41 = (byte)*puVar41 + cVar7;
  bVar43 = *pbVar20;
  *pbVar20 = *pbVar20 + bVar9;
  *(byte **)pbVar20 = unaff_EBP + (uint)CARRY1(bVar43,bVar9) + *(int *)pbVar20;
  piVar23 = (int *)CONCAT31((int3)((uint)pbVar20 >> 8),*pbVar20);
  *(byte *)puVar46 = (byte)*puVar46 + cVar7;
  puVar44 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(byte)puVar46 | (byte)*puVar46);
  pbVar20 = (byte *)((int)puVar44 + -0x43);
  *pbVar20 = *pbVar20 + (char)((uint)puVar46 >> 8);
  puVar46 = puVar44;
  puVar44 = puVar47;
  uVar49 = (ushort)pbStack_c;
code_r0x00402e42:
  pbStack_c._0_2_ = uStack_4;
  puVar47 = puVar44;
  uStack_4 = (ushort)pbStack_c;
  if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402e6e;
  iVar13 = *(int *)((int)piVar23 + *piVar23);
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar15;
  piVar23 = (int *)(iVar13 + -0x8c6f);
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((byte)((uint)puVar46 >> 8) | *(byte *)((int)puVar46 + -0x3f),
                                      (char)puVar46));
  pbVar14 = (byte *)((int)piVar23 + *piVar23);
  pbVar20 = pbVar14;
  puVar47 = uStackY_30;
  if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar14 = *pbVar14 + (char)pbVar14;
  puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                             CONCAT11((byte)((uint)puVar15 >> 8) | (byte)*puVar46,(char)puVar15));
  puVar44 = puVar41 + (uint)bVar52 * -2 + 1;
  out(*puVar41,(short)puVar46);
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(char)puVar46 + (byte)*puVar47);
  puVar41 = puVar44 + (uint)bVar52 * -2 + 1;
  out(*puVar44,(short)puVar46);
  uVar49 = (ushort)pbStack_c;
  uStack_4 = uVar48;
code_r0x00402e6e:
  pbStack_c._0_2_ = uVar49;
  uVar25 = (undefined3)((uint)puVar46 >> 8);
  cVar7 = (char)puVar46 + (byte)*puVar47;
  puVar44 = puVar41 + (uint)bVar52 * -2 + 1;
  out(*puVar41,(short)CONCAT31(uVar25,cVar7));
  puVar46 = (uint *)CONCAT31(uVar25,cVar7 + (byte)*puVar47);
  puVar41 = puVar44 + (uint)bVar52 * -2 + 1;
  out(*puVar44,(short)puVar46);
  pbVar20 = (byte *)0x0;
  puVar44 = puVar47;
code_r0x00402e81:
  puVar47 = puVar44;
  bVar9 = (char)pbVar20 - *pbVar20;
  iVar13 = CONCAT31((int3)((uint)pbVar20 >> 8),bVar9);
  *pbVar40 = *pbVar40 + (char)puVar46;
  pbVar14 = (byte *)(iVar13 * 2);
  *pbVar14 = *pbVar14 ^ bVar9;
  pbVar14 = (byte *)(int)(short)iVar13;
  *pbVar14 = *pbVar14 + bVar9;
  *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar15;
  bVar43 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar9;
  *(byte **)(pbVar40 + -0x73) =
       (byte *)((int)puVar41 + (uint)CARRY1(bVar43,bVar9) + *(int *)(pbVar40 + -0x73));
  *pbVar14 = *pbVar14 + bVar9;
  bVar43 = (byte)puVar15 | (byte)*puVar46;
  puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar43);
  puVar44 = puVar41;
  if ((char)bVar43 < '\x01') goto code_r0x00402eb4;
  *pbVar14 = *pbVar14 + bVar9;
  pbVar20 = (byte *)CONCAT31((int3)(char)((uint)pbVar20 >> 8),bVar9 + 0x2d);
  puVar41[(int)puVar47 * 2] =
       (uint)((int)puVar46 + (uint)(0xd2 < bVar9) + puVar41[(int)puVar47 * 2]);
  pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar48);
  do {
    uVar54 = *puVar41;
    bVar43 = (byte)pbVar20;
    *(byte *)puVar41 = (byte)*puVar41 + bVar43;
    if (!CARRY1((byte)uVar54,bVar43)) break;
    *pbVar20 = *pbVar20 + bVar43;
    bVar43 = bVar43 | pbVar20[0x400001a];
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar43);
    if ((char)bVar43 < '\x01') {
code_r0x00402ecc:
      *pbVar14 = *pbVar14 + (byte)pbVar14;
      uVar25 = (undefined3)((uint)pbVar14 >> 8);
      bVar43 = (byte)pbVar14 | pbVar14[0x400001b];
      pcVar12 = (char *)CONCAT31(uVar25,bVar43);
      if ((char)bVar43 < '\x01') {
        uVar54 = *puVar46;
        *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar15;
        *(char *)((int)pcVar12 * 2) =
             *(char *)((int)pcVar12 * 2) - CARRY1((byte)uVar54,(byte)puVar15);
        bVar51 = 0x81 < bVar43;
        bVar43 = bVar43 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar14 = *pbVar14 + bVar43;
      puVar44 = puVar41;
code_r0x00402eb4:
      uVar25 = (undefined3)((uint)pbVar14 >> 8);
      bVar43 = (char)pbVar14 + 0x6f;
      pcVar12 = (char *)CONCAT31(uVar25,bVar43);
      *(byte **)pcVar12 = pbStackY_4c;
      uVar54 = *puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + (char)puVar15;
      pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar48);
      uVar50 = uVar48;
      if ((byte)*puVar46 != 0 && SCARRY1((byte)uVar54,(char)puVar15) == (char)(byte)*puVar46 < '\0')
      {
        *pcVar12 = *pcVar12 + bVar43;
        bVar9 = (char)pbVar14 + 0x9c;
        pbVar14 = (byte *)CONCAT31(uVar25,bVar9);
        puVar44[(int)puVar47 * 2] =
             (uint)((int)puVar46 + (uint)(0xd2 < bVar43) + puVar44[(int)puVar47 * 2]);
        pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar48);
        uVar54 = *puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + bVar9;
        puVar41 = puVar44;
        if (CARRY1((byte)uVar54,bVar9)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar41 = puVar44 + (uint)bVar52 * -2 + 1;
      out(*puVar44,(short)puVar46);
    }
    cVar7 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar7;
    uVar25 = (undefined3)((uint)pcVar12 >> 8);
    bVar43 = cVar7 + 0x6f;
    pcVar12 = (char *)CONCAT31(uVar25,bVar43);
    *(byte **)pcVar12 = pbStackY_4c;
    uVar54 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar15;
    pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar48);
    *(byte *)(puVar41 + 7) = ((byte)puVar41[7] - bVar34) - CARRY1((byte)uVar54,(byte)puVar15);
    *pcVar12 = *pcVar12 + bVar43;
    bVar9 = cVar7 + 0x9c;
    pcVar12 = (char *)CONCAT31(uVar25,bVar9);
    puVar41[(int)puVar47 * 2] =
         (uint)((int)puVar46 + (uint)(0xd2 < bVar43) + puVar41[(int)puVar47 * 2]);
    uVar54 = *puVar41;
    *(byte *)puVar41 = (byte)*puVar41 + bVar9;
    if (!CARRY1((byte)uVar54,bVar9)) goto code_r0x00402e7e;
    *pcVar12 = *pcVar12 + bVar9;
    bVar9 = bVar9 | pcVar12[0x400001c];
    pbVar20 = (byte *)CONCAT31(uVar25,bVar9);
    uStack_4 = uVar48;
    if ((char)bVar9 < '\x01') goto code_r0x00402f16;
    *pbVar20 = *pbVar20 + bVar9;
    pcVar12 = (char *)CONCAT31(uVar25,bVar9 + 0x6f);
    while( true ) {
      *(byte **)pcVar12 = pbStackY_4c;
      uVar54 = *puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar15;
      *(uint *)((int)puVar41 + 0x1d) =
           (*(int *)((int)puVar41 + 0x1d) - (int)puVar47) - (uint)CARRY1((byte)uVar54,(byte)puVar15)
      ;
      bVar43 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar43;
      bVar9 = bVar43 + 0x2d;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar9);
      puVar41[(int)puVar47 * 2] =
           (uint)((int)puVar46 + (uint)(0xd2 < bVar43) + puVar41[(int)puVar47 * 2]);
      pbStackY_4c = (byte *)CONCAT22((short)((uint)pbStackY_4c >> 0x10),uVar48);
      uVar54 = *puVar41;
      *(byte *)puVar41 = (byte)*puVar41 + bVar9;
      if (!CARRY1((byte)uVar54,bVar9)) break;
      *pbVar20 = *pbVar20 + bVar9;
code_r0x00402f16:
      bVar43 = (byte)pbVar20 | pbVar20[0x400001d];
      puVar44 = (uint *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar43);
      pbVar20 = unaff_EBP;
      if ((char)bVar43 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar20;
        *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
        uVar25 = (undefined3)((uint)puVar44 >> 8);
        cVar7 = (char)puVar44 + 'o';
        puVar37 = (uint *)CONCAT31(uVar25,cVar7);
        *puVar37 = (uint)pbStackY_4c;
        cVar42 = (char)puVar15;
        *(byte *)puVar46 = (byte)*puVar46 + cVar42;
        pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar48);
        bVar43 = (byte)((uint)puVar46 >> 8);
        bVar51 = bVar43 < (byte)*puVar41;
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                   CONCAT11(bVar43 - (byte)*puVar41,(char)puVar46));
        if (bVar51) break;
        bVar51 = CARRY4((uint)puVar37,*puVar37);
        puVar44 = (uint *)((int)puVar37 + *puVar37);
        if (!SCARRY4((int)puVar37,*puVar37)) {
          bVar51 = CARRY4((uint)unaff_EBP,*puVar44);
          unaff_EBP = unaff_EBP + *puVar44;
        }
        *puVar44 = (*puVar44 - (int)puVar44) - (uint)bVar51;
        *(byte *)puVar46 = (byte)*puVar46 + cVar42;
        puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                   CONCAT11((char)((uint)puVar15 >> 8) + (byte)*puVar46,
                                            cVar42 - (byte)*puVar46));
        *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
code_r0x00402f3b:
        cVar42 = (char)puVar46;
        *pbVar40 = *pbVar40 + cVar42;
        bVar43 = (byte)puVar44;
        *(byte *)((int)puVar44 * 2) = *(byte *)((int)puVar44 * 2) ^ bVar43;
        *(byte *)puVar44 = (byte)*puVar44 + bVar43;
        *(byte *)puVar44 = (byte)*puVar44 + cVar42;
        uVar54 = *puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + bVar43;
        *puVar46 = (uint)((int)puVar44 + (uint)CARRY1((byte)uVar54,bVar43) + *puVar46);
        pcVar12 = (char *)((uint)puVar44 | *puVar47);
        uVar25 = (undefined3)((uint)pcVar12 >> 8);
        cVar7 = (char)pcVar12 + *pcVar12;
        pcVar12 = (char *)CONCAT31(uVar25,cVar7);
        *pcVar12 = *pcVar12 + cVar7;
        cVar7 = cVar7 + *pcVar12;
        piVar23 = (int *)CONCAT31(uVar25,cVar7);
        *(char *)piVar23 = (char)*piVar23 + cVar7;
        iVar13 = LocalDescriptorTableRegister();
        *piVar23 = iVar13;
        bVar43 = *pbVar40;
        bVar31 = (byte)((uint)puVar15 >> 8);
        *pbVar40 = *pbVar40 + bVar31;
        iVar13 = *piVar23;
        uVar33 = (undefined2)((uint)puVar15 >> 0x10);
        bVar30 = (byte)puVar15;
        *(byte *)puVar41 = (byte)*puVar41 + cVar7;
        puVar44 = puVar41 + (uint)bVar52 * -2 + 1;
        out(*puVar41,(short)puVar46);
        *(byte *)puVar44 = (byte)*puVar44 + cVar7;
        bVar9 = *pbVar40;
        *(byte *)puVar46 = (byte)*puVar46 - bVar34;
        *(byte *)puVar44 = (byte)*puVar44 + cVar7;
        puVar37 = puVar44 + (uint)bVar52 * -2 + 1;
        out(*puVar44,(short)puVar46);
        *(byte *)puVar37 = (byte)*puVar37 + cVar7;
        bVar8 = *pbVar40;
        *(uint *)((int)puVar46 + -0x23) = *(uint *)((int)puVar46 + -0x23) & (uint)puVar37;
        puVar24 = (ushort *)((int)piVar23 + *piVar23);
        if (!SCARRY4((int)piVar23,*piVar23)) {
          *puVar24 = uVar50;
        }
        *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
        uVar35 = CONCAT11((char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + -0x15),cVar42);
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),uVar35);
        puVar44 = (uint *)((int)puVar24 + *(int *)puVar24);
        if (!SCARRY4((int)puVar24,*(int *)puVar24)) {
          *(ushort *)puVar44 = uVar50;
        }
        cVar7 = (char)puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + cVar7;
        cVar11 = ((bVar31 - (char)iVar13) - CARRY1(bVar43,bVar31) | bVar9 | bVar8) + (byte)*puVar44;
        puVar15 = (uint *)CONCAT22(uVar33,CONCAT11(cVar11,bVar30));
        uVar54 = *puVar46;
        *(byte *)puVar46 = (byte)*puVar46 + bVar30;
        if (CARRY1((byte)uVar54,bVar30)) {
          *(byte *)puVar44 = (byte)*puVar44 + cVar7;
          bVar43 = *(byte *)((int)puVar46 + 6);
          *(byte *)puVar46 = (byte)*puVar46 + bVar30;
          bVar9 = (cVar11 - (byte)*puVar37) + cRam14730307;
          *(byte *)puVar44 = (byte)*puVar44 + cVar7;
          bVar43 = bVar34 | bVar43 | *(byte *)((int)puVar46 + 0x2a);
          uVar54 = *puVar44;
          pbVar40 = (byte *)((int)puVar44 + (uint)CARRY1(bVar9,(byte)*puVar44) + *puVar44);
          *(byte *)puVar46 = (byte)*puVar46 + bVar30;
          cVar7 = cVar10 - (byte)*puVar37;
          cVar10 = bVar43 + *(char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar43,cVar10)) >> 8)
                                               ,cVar7) + 0x1e);
          *pbVar40 = *pbVar40 + (char)pbVar40;
          uVar25 = (undefined3)((uint)pbVar40 >> 8);
          bVar43 = (char)pbVar40 + 0x2aU & (byte)*puVar46;
          *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
          pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x2a);
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar7)) + 0x1f);
          *pcVar12 = *pcVar12 + bVar43 + 0x2a;
          bVar43 = bVar43 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
          pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x2a);
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar7)) + 0x20);
          *pcVar12 = *pcVar12 + bVar43 + 0x2a;
          bVar43 = bVar43 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
          pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x2a);
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar7)) + 0x21);
          *pcVar12 = *pcVar12 + bVar43 + 0x2a;
          bVar43 = bVar43 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
          pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x2a);
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar7)) + 0x22);
          *pcVar12 = *pcVar12 + bVar43 + 0x2a;
          bVar43 = bVar43 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
          pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x2a);
          bVar9 = bVar9 + (byte)uVar54 + *pcVar12;
          uVar28 = CONCAT22(uVar33,CONCAT11(bVar9,bVar30));
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar7)) + 0x25);
          *pcVar12 = *pcVar12 + bVar43 + 0x2a;
          bVar43 = bVar43 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
          pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x2a);
          pcVar16 = (char *)CONCAT22(uVar32,CONCAT11(cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(
                                                  cVar10,cVar7)) + 0x26),cVar7));
          *pcVar12 = *pcVar12 + bVar43 + 0x2a;
          bVar43 = bVar43 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
          cVar7 = bVar43 + 0x2a;
          pcVar12 = (char *)CONCAT31(uVar25,cVar7);
          if ((POPCOUNT(cVar7) & 1U) == 0) {
            *pcVar12 = *pcVar12 + cVar7;
            pbVar40 = (byte *)(CONCAT31(uVar25,bVar43 + 0x4f) + -0x33282610);
            bVar43 = *pbVar40;
            bVar8 = (byte)pbVar40;
            *pbVar40 = *pbVar40 + bVar8;
            uVar25 = (undefined3)((uint)pbVar40 >> 8);
            if (!CARRY1(bVar43,bVar8)) {
              if (!SCARRY1(bVar8,'\0')) {
                *pbVar40 = *pbVar40 + bVar8;
                uVar28 = CONCAT22(uVar33,CONCAT11(bVar9 | (byte)*puVar46,bVar30));
                bVar8 = bVar8 & (byte)*puVar46;
                *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
                pcVar12 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar12 = (char *)CONCAT31(uVar25,bVar8 + *pcVar16);
              if (SCARRY1(bVar8,*pcVar16) != (char)(bVar8 + *pcVar16) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar43 = bVar8 + *pcVar16;
            pbVar40 = (byte *)CONCAT31(uVar25,bVar43);
            if (SCARRY1(bVar8,*pcVar16) == (char)bVar43 < '\0') {
              pcVar12 = (char *)CONCAT22(uVar33,CONCAT11(bVar9 | (byte)*puVar46,bVar30));
              *pcVar16 = *pcVar16 + cVar42;
              *(byte *)puVar46 = (byte)*puVar46 ^ bVar43;
              *(char *)((int)pbVar40 * 2) = *(char *)((int)pbVar40 * 2) + bVar43;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar12 = *pcVar12 + (char)pcVar12;
            uVar25 = (undefined3)((uint)pcVar12 >> 8);
            bVar43 = (char)pcVar12 + 0x2aU & (byte)*puVar46;
            *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
            pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x2a);
            *pcVar12 = *pcVar12 + bVar43 + 0x2a;
            pcVar12 = (char *)CONCAT31(uVar25,bVar43 + 0x54 & (byte)*puVar46);
code_r0x00403072:
            cVar7 = (char)pcVar12;
            *pcVar12 = *pcVar12 + cVar7;
            uVar25 = (undefined3)((uint)pcVar12 >> 8);
            pcVar12 = (char *)CONCAT31(uVar25,cVar7 + '*');
            *pcVar12 = *pcVar12 + cVar7 + '*';
            bVar43 = cVar7 + 0x54U & (byte)*puVar46;
            *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
            pcStackY_84 = (char *)CONCAT22(pcStackY_84._2_2_,(ushort)pbStack_c);
            uVar28 = CONCAT22((short)((uint)uVar28 >> 0x10),
                              CONCAT11((char)((uint)uVar28 >> 8) +
                                       *(char *)CONCAT31(uVar25,bVar43 + 0x2a),(char)uVar28));
            *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar42;
            pcVar12 = pcStackY_84;
code_r0x0040309a:
            cVar7 = (char)pcVar12;
            *pcVar12 = *pcVar12 + cVar7;
            pcStackY_84 = (char *)CONCAT22(pcStackY_84._2_2_,uVar48);
            *pcVar12 = *pcVar12 + cVar7;
            pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar7 + 0x2aU & (byte)*puVar46);
          }
          cVar7 = (char)pbVar40;
          *pbVar40 = *pbVar40 + cVar7;
          uVar25 = (undefined3)((uint)pbVar40 >> 8);
          cVar10 = cVar7 + '*';
          pcVar12 = (char *)CONCAT31(uVar25,cVar10);
          *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar42;
          *pcVar12 = *pcVar12 + cVar10;
          cVar11 = (char)pcStackY_84 - (byte)*puVar37;
          pcVar16 = (char *)CONCAT22((short)((uint)pcStackY_84 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_84 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_84 >> 8),
                                                                 cVar11) + 0x34),cVar11));
          *pcVar12 = *pcVar12 + cVar10;
          bVar43 = cVar7 + 0x54U & (byte)*puVar46;
          *(char *)CONCAT31(uVar25,bVar43) = *(char *)CONCAT31(uVar25,bVar43) + bVar43;
          pbVar40 = (byte *)CONCAT31(uVar25,bVar43 + 0x2a);
          bVar43 = (byte)((uint)uVar28 >> 8);
          pcVar12 = (char *)CONCAT22((short)((uint)uVar28 >> 0x10),
                                     CONCAT11(bVar43 + *pbVar40,(char)uVar28));
          pbVar40 = pbVar40 + (uint)CARRY1(bVar43,*pbVar40) + *(int *)pbVar40;
          *(byte *)puVar46 = (byte)*puVar46 + (char)uVar28;
          uVar25 = (undefined3)((uint)pbVar40 >> 8);
          cVar7 = (byte)pbVar40 - *pbVar40;
          piVar23 = (int *)CONCAT31(uVar25,cVar7);
          puVar37 = (uint *)((int)puVar37 + (uint)((byte)pbVar40 < *pbVar40) + *piVar23);
          cVar7 = cVar7 + (char)*piVar23;
          pbVar40 = (byte *)CONCAT31(uVar25,cVar7);
          *pbVar40 = *pbVar40 + cVar7;
code_r0x004030df:
          *pcVar12 = *pcVar12 + cVar42;
          bVar43 = *pbVar40;
          bVar9 = (byte)pbVar40;
          *pbVar40 = *pbVar40 + bVar9;
          *(byte **)(pcVar16 + -0x41) =
               (byte *)((int)puVar37 + (uint)CARRY1(bVar43,bVar9) + *(int *)(pcVar16 + -0x41));
          *pbVar40 = *pbVar40 + bVar9;
          uVar25 = (undefined3)((uint)pbVar40 >> 8);
          bVar9 = bVar9 | (byte)*puVar37;
          *(char *)CONCAT31(uVar25,bVar9) = *(char *)CONCAT31(uVar25,bVar9) + bVar9;
          pcVar12 = (char *)CONCAT31(uVar25,bVar9 + 0x7b);
          *pcVar12 = *pcVar12 + bVar9 + 0x7b;
          pbVar40 = (byte *)((int)puVar37 + CONCAT31(uVar25,bVar9 - 8) + -1);
          *pbVar40 = *pbVar40 + (bVar9 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar41 = puVar37 + (uint)bVar52 * -2 + 1;
        out(*puVar37,uVar35);
        pbVar20 = unaff_EBP + 1;
        pbStackY_4c = unaff_EBP;
      }
      bVar43 = cVar7 - bVar51;
      pbVar20 = (byte *)((int)puVar41 + (int)puVar47 * 2);
      bVar51 = CARRY1(*pbVar20,bVar43);
      *pbVar20 = *pbVar20 + bVar43;
code_r0x00402ef9:
      pcVar12 = (char *)CONCAT31(uVar25,bVar43 - bVar51);
      pbVar20 = (byte *)((int)puVar47 + (int)unaff_EBP * 2);
      *pbVar20 = *pbVar20 + (bVar43 - bVar51);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar46;
  puVar44 = puVar46 + 0x2828000;
  bVar43 = (byte)puVar15;
  bVar51 = (byte)*puVar44 < bVar43;
  *(byte *)puVar44 = (byte)*puVar44 - bVar43;
  bVar43 = (byte)pbVar20 + *pbVar20;
  piVar23 = (int *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar43 + bVar51);
  puVar44 = puVar47;
  uVar49 = (ushort)pbStack_c;
  if (CARRY1((byte)pbVar20,*pbVar20) || CARRY1(bVar43,bVar51)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar12 = *pcVar12 + bVar9;
  uVar49 = (ushort)pbStack_c;
  uStack_4 = uVar48;
  goto code_r0x00402e6e;
code_r0x004025d6:
  uVar50 = in_DS;
  if ((POPCOUNT(cVar10) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x0040255d:
  while( true ) {
    uStack_4 = uVar50;
    pcVar12 = (char *)((ulonglong)uVar55 >> 0x20);
    piVar23 = (int *)uVar55;
    *piVar23 = (int)((int)piVar23 + *piVar23);
    uVar32 = (undefined2)((uint)pbVar40 >> 0x10);
    cVar42 = (char)((uint)pbVar40 >> 8) + (char)((ulonglong)uVar55 >> 0x28);
    pcVar16 = (char *)CONCAT22(uVar32,CONCAT11(cVar42,(char)pbVar40));
    *piVar23 = (int)((int)piVar23 + *piVar23);
    *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar55 >> 0x20);
    cVar7 = (char)uVar55;
    *(char *)piVar23 = (char)*piVar23 + cVar7;
    *(char *)piVar23 = (char)*piVar23 + cVar7;
    *(char *)piVar23 = (char)*piVar23 + cVar7;
    *pcVar12 = *pcVar12 + cVar7;
    *(char *)piVar23 = (char)*piVar23 + cVar7;
    *pcVar16 = *pcVar16 + cVar7;
    *(char *)piVar23 = (char)*piVar23 + cVar7;
    pcVar3 = (code *)swi(1);
    uVar55 = (*pcVar3)();
    param_2 = (byte *)((ulonglong)uVar55 >> 0x20);
    pbVar20 = (byte *)uVar55;
    bVar43 = *pbVar20;
    bVar9 = (byte)uVar55;
    *pbVar20 = *pbVar20 + bVar9;
    *param_2 = *param_2 + bVar9 + CARRY1(bVar43,bVar9);
    *pbVar20 = *pbVar20 + bVar9;
    *pbVar20 = *pbVar20 + bVar9;
    *pbVar20 = *pbVar20 + bVar9;
    *pbVar20 = *pbVar20 + bVar9;
    *pbVar20 = *pbVar20 + bVar9;
    *pbVar20 = *pbVar20 + bVar9;
    *pbVar20 = *pbVar20 + bVar9;
    *pbVar20 = *pbVar20 + bVar9;
    cVar7 = (char)((ulonglong)uVar55 >> 0x28);
    *pbVar20 = *pbVar20 + cVar7;
    bVar43 = *pbVar20;
    uVar25 = (undefined3)((ulonglong)uVar55 >> 8);
    pcVar12 = (char *)CONCAT31(uVar25,bVar9 + bVar43);
    *pcVar12 = *pcVar12 + cVar7;
    cVar7 = bVar9 + bVar43 + *pcVar12;
    pcVar12 = (char *)CONCAT31(uVar25,cVar7);
    cVar10 = (char)((ulonglong)uVar55 >> 0x20);
    *unaff_EDI = *unaff_EDI + cVar10;
    *pcVar12 = *pcVar12 + cVar7;
    *pcVar12 = *pcVar12 + cVar10;
    *pcVar12 = *pcVar12 + cVar7;
    *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
    cVar42 = cVar42 + unaff_EBP[(int)pcVar12 * 4];
    pbVar40 = (byte *)CONCAT22(uVar32,CONCAT11(cVar42,(char)pbVar40));
    pbVar40[(int)pcVar12] = pbVar40[(int)pcVar12] + cVar7;
    *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar7;
    *param_2 = *param_2 + (char)extraout_ECX;
    bVar43 = cVar7 - *pcVar12;
    pcVar12 = (char *)CONCAT31(uVar25,bVar43);
    *pbVar40 = *pbVar40 + cVar10;
    *param_2 = *param_2 ^ bVar43;
    *param_2 = *param_2 + cVar42;
    *pcVar12 = *pcVar12 + bVar43;
    cRam12110000 = cRam12110000 + bVar43;
    param_1 = extraout_ECX;
code_r0x004025b9:
    bVar43 = *param_2;
    cVar7 = (char)pcVar12;
    *param_2 = *param_2 + cVar7;
    in_SS = uStack_4;
    if (SCARRY1(bVar43,cVar7) != (char)*param_2 < '\0') break;
    pbVar40 = (byte *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                               CONCAT11((char)((uint)pbVar40 >> 8) + unaff_EBP[(int)pcVar12 * 4],
                                        (char)pbVar40));
    unaff_EDI[(int)pcVar12] = unaff_EDI[(int)pcVar12] + cVar7;
    *(char *)((int)pcVar12 * 2) = *(char *)((int)pcVar12 * 2) - cVar7;
    *pcVar12 = *pcVar12 + cVar7;
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar7 + *pcVar12);
    *pcVar16 = *pcVar16 + cVar7 + *pcVar12;
    uStack_4 = 0x4025;
    uStack_2 = 0;
    uVar55 = func_0x0f40255d();
    uVar50 = uStack_4;
  }
  goto code_r0x004025bd;
}


