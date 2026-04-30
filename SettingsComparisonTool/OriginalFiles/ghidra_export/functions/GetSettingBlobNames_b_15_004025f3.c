/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004025f3
 * Raw Name    : <GetSettingBlobNames>b__15
 * Demangled   : <GetSettingBlobNames>b__15
 * Prototype   : char * <GetSettingBlobNames>b__15(undefined4 s, byte * param_2)
 * Local Vars  : bVar7, bVar8, bVar9, cVar10, cVar11, cVar12, bVar13, in_EAX, pcVar14, iVar15, uVar16, pbVar17, puVar18, pbVar19, pcVar20, uVar21, uVar22, puVar23, pbVar24, piVar25, pcVar26, piVar27, puVar28, uVar29, iVar30, extraout_ECX, extraout_ECX_00, pbVar31, extraout_ECX_01, param_2, extraout_ECX_02, uVar32, cVar33, bVar34, uVar35, uVar36, bVar37, uVar38, pbVar39, puVar40, s, uVar41, uVar42, unaff_EBX, puVar43, cVar44, unaff_EBP, pbVar45, unaff_ESI, puVar46, puVar47, unaff_EDI, puVar48, puVar49, in_ES, uVar50, uVar51, uVar52, in_CS, in_SS, uVar53, in_GS_OFFSET, bVar54, in_AF, in_TF, in_IF, bVar55, bVar56, in_NT, uVar57, in_stack_ffffffe8, pcStackY_90, pbStackY_58, puStackY_44, puStackY_40, uStackY_3c, pbStack_1c, uStack_10, uStack_e, uStack_d, uStack_c, uVar1, pcVar2, uVar3, uVar4, iVar5, uVar6
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025da) overlaps instruction at (ram,0x004025d9)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

char * __fastcall <GetSettingBlobNames>b__15(undefined4 s,byte *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  byte bVar13;
  undefined3 uVar29;
  char *pcVar14;
  char *in_EAX;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  uint *puVar18;
  int3 iVar30;
  byte *pbVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  byte *pbVar24;
  int *piVar25;
  char *pcVar26;
  int *piVar27;
  ushort *puVar28;
  char cVar33;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar31;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  undefined4 uVar32;
  byte bVar37;
  undefined2 uVar38;
  byte *pbVar39;
  undefined3 uVar41;
  uint *puVar40;
  undefined1 uVar42;
  char cVar44;
  byte *unaff_EBX;
  uint *puVar43;
  byte *unaff_EBP;
  byte *pbVar45;
  uint *unaff_ESI;
  uint *puVar46;
  uint *puVar47;
  byte *unaff_EDI;
  uint *puVar48;
  uint *puVar49;
  ushort in_ES;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort in_CS;
  ushort in_SS;
  ushort uVar53;
  int in_GS_OFFSET;
  bool bVar54;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar55;
  bool bVar56;
  byte in_NT;
  undefined8 uVar57;
  char *pcStackY_90;
  byte *pbStackY_58;
  uint *puStackY_44;
  uint *puStackY_40;
  undefined4 uStackY_3c;
  byte *pbStack_1c;
  byte *in_stack_ffffffe8;
  ushort uStack_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined4 uStack_c;
  
  bVar55 = false;
  do {
                    /* .NET CLR Managed Code */
    pbVar19 = (byte *)CONCAT22((short)((uint)s >> 0x10),
                               CONCAT11((char)((uint)s >> 8) + unaff_EDI[0x22],(char)s));
    *in_EAX = *in_EAX + (char)in_EAX;
    bVar37 = (char)param_2 - param_2[2];
    uVar29 = (undefined3)((uint)in_EAX >> 8);
    bVar7 = (char)in_EAX - 0xf;
    pbVar24 = (byte *)CONCAT31(uVar29,bVar7);
    pbVar39 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) +
                                        *(char *)(CONCAT31((int3)((uint)param_2 >> 8),bVar37) +
                                                 -0x3f),bVar37));
    bVar9 = *pbVar24;
    bVar8 = *pbVar24;
    *pbVar24 = *pbVar24 + bVar7;
    if (SCARRY1(bVar8,bVar7)) {
      pbVar24 = (byte *)CONCAT31(uVar29,bVar7 + pbVar24[(int)unaff_EBP] + CARRY1(bVar9,bVar7));
      goto code_r0x00402677;
    }
    unaff_EBX = unaff_EBX + -1;
    *pbVar24 = *pbVar24 + bVar7;
    uVar21 = *unaff_ESI;
    *pbVar19 = *pbVar19 + 1;
    pbVar39 = (byte *)CONCAT31((int3)((uint)pbVar39 >> 8),(bVar37 | (byte)uVar21) - (byte)*unaff_ESI
                              );
    unaff_ESI = (uint *)((int)unaff_ESI +
                        (-(uint)(bVar7 < *pbVar24) - *(int *)CONCAT31(uVar29,bVar7 - *pbVar24)));
    pbVar45 = (byte *)CONCAT31(uVar29,bVar7 - *pbVar24);
    *(byte **)unaff_EBP = unaff_EBP + *(int *)unaff_EBP;
    bVar8 = (byte)unaff_EBP;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
    bVar9 = *unaff_EBP;
    *unaff_EBP = *unaff_EBP + bVar8;
    *(byte **)unaff_EDI = pbVar39 + (uint)CARRY1(bVar9,bVar8) + *(int *)unaff_EDI;
    uVar29 = (undefined3)((uint)unaff_EBP >> 8);
    bVar8 = bVar8 | *pbVar39;
    pcVar14 = (char *)CONCAT31(uVar29,bVar8);
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *pcVar14 = *pcVar14 + bVar8;
      bVar9 = bVar8 + 0xd;
      pbVar24 = (byte *)CONCAT31(uVar29,bVar9);
      *unaff_ESI = *unaff_ESI | (uint)pbVar39;
      if (-1 < (int)*unaff_ESI) {
code_r0x00402678:
        *pbVar24 = *pbVar24 + (char)pbVar24;
        pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar19 >> 8) | bRam7d160243,(char)pbVar19)
                                  );
        pbVar17 = unaff_EDI;
code_r0x00402680:
        bVar9 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar9;
        uVar29 = (undefined3)((uint)pbVar19 >> 8);
        piVar27 = (int *)((int)pbVar17 * 2 + 0x400009a);
        *piVar27 = *piVar27 + CONCAT31(uVar29,bVar9 + 2) + (uint)(0xfd < bVar9);
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)((int)pbVar39 * 5),(char)unaff_EBX));
        *(char *)((int)pbVar39 * 2) = *(char *)((int)pbVar39 * 2) + bVar9 + 2;
        unaff_EDI = (byte *)CONCAT31(uVar29,bVar9 + 4);
        *pbVar17 = *pbVar17 - (bVar9 + 4);
code_r0x00402697:
        *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
        pbVar39 = pbVar39 + -*unaff_ESI;
        pbVar31 = unaff_EDI;
code_r0x0040269b:
        unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                     (byte)unaff_EBX | (byte)((uint)pbVar24 >> 8));
        uVar32 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar31 = uVar32;
        cVar10 = (char)pbVar31;
        *pbVar39 = *pbVar39 + cVar10;
        if ((POPCOUNT(*pbVar39) & 1U) == 0) {
          *pbVar31 = *pbVar31 + cVar10;
          pcVar14 = (char *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar10 + '\x13');
          pbVar19 = pbVar24;
          unaff_EDI = pbVar17;
code_r0x004026a8:
          uVar29 = (undefined3)((uint)pcVar14 >> 8);
          bVar8 = (byte)pcVar14 + 2 + cRam001b15fe + (0xfd < (byte)pcVar14);
          bVar9 = *unaff_EBX;
          bVar37 = (byte)unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar37;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar29,bVar8) + (uint)CARRY1(bVar9,bVar37);
          iVar15 = CONCAT31(uVar29,bVar8 + 2) + 0x917d + (uint)(0xfd < bVar8);
          uVar29 = (undefined3)((uint)iVar15 >> 8);
          bVar9 = (char)iVar15 + 0x3a;
          pcVar14 = (char *)CONCAT31(uVar29,bVar9);
          uStack_10 = (ushort)pcVar14;
          uStack_e = (undefined1)((uint)iVar15 >> 0x10);
          uStack_d = (undefined1)((uint)iVar15 >> 0x18);
          *pcVar14 = *pcVar14 + bVar9;
          uVar41 = (undefined3)((uint)pbVar39 >> 8);
          bVar8 = (byte)pbVar39 | *pbVar39;
          uVar16 = CONCAT31(uVar29,(char)iVar15 + '8');
          uVar21 = uVar16 + 0x1b00001b;
          pcVar14 = (char *)(uVar21 + (1 < bVar9) + *unaff_ESI +
                            (uint)(0xe4ffffe4 < uVar16 || CARRY4(uVar21,(uint)(1 < bVar9))));
          bVar7 = bVar8 + *pbVar19;
          pbVar39 = (byte *)CONCAT31(uVar41,bVar7);
          uVar29 = (undefined3)((uint)pcVar14 >> 8);
          cVar10 = (char)pcVar14;
          if (SCARRY1(bVar8,*pbVar19) != (char)bVar7 < '\0') {
            *pcVar14 = *pcVar14 + cVar10;
            pcVar14 = (char *)CONCAT31(uVar29,cVar10 + '\x02');
            uVar35 = (undefined2)((uint)unaff_EBX >> 0x10);
            cVar44 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x68];
            unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(cVar44,bVar37));
            *pcVar14 = *pcVar14 + cVar10 + '\x02';
            bVar7 = cVar10 + 0x2a;
            pbVar24 = (byte *)CONCAT31(uVar29,bVar7);
            *pbVar24 = *pbVar24 | bVar7;
            bVar8 = *unaff_EBX;
            cVar11 = (char)((uint)pbVar19 >> 8);
            *unaff_EBX = *unaff_EBX + cVar11;
            pbVar17 = unaff_EDI;
            if (SCARRY1(bVar8,cVar11) != (char)*unaff_EBX < '\0') {
              *pbVar24 = *pbVar24 + bVar7;
              bVar8 = cVar10 + 0x2c;
              if ((POPCOUNT(bVar8) & 1U) == 0) {
                *(char *)CONCAT31(uVar29,bVar8) = *(char *)CONCAT31(uVar29,bVar8) + bVar8;
                bVar7 = cVar10 + 0x59;
                pcVar14 = (char *)CONCAT31(uVar29,bVar7);
                *(char **)pbVar39 = pcVar14 + (uint)(0xd2 < bVar8) + *(int *)pbVar39;
                unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(cVar44 + unaff_EBX[-0x67],bVar37));
                *pcVar14 = *pcVar14 + bVar7;
                pbVar17 = (byte *)((CONCAT31(uVar29,cVar10 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar7));
                pbVar24 = pbVar19;
code_r0x00402700:
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar10 = (char)unaff_EDI + '\x02';
                pbVar31 = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar10);
                bVar54 = (POPCOUNT(cVar10) & 1U) == 0;
code_r0x00402704:
                if (bVar54) {
                  *pbVar31 = *pbVar31 + (char)pbVar31;
                  cVar10 = (char)pbVar31 + '\x02';
                  pcVar14 = (char *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar10);
                  puVar46 = unaff_ESI;
                  unaff_EDI = in_stack_ffffffe8;
                  if ((POPCOUNT(cVar10) & 1U) == 0) {
code_r0x0040270c:
                    cVar10 = (char)pcVar14;
                    *pcVar14 = *pcVar14 + cVar10;
                    uVar29 = (undefined3)((uint)pcVar14 >> 8);
                    bVar8 = cVar10 + 0x6f;
                    piVar27 = (int *)CONCAT31(uVar29,bVar8);
                    iVar5 = *piVar27;
                    *(byte *)piVar27 = (char)*piVar27 + bVar8;
                    pbVar19 = pbVar39;
                    if ((char)*piVar27 != '\0' &&
                        SCARRY1((char)iVar5,bVar8) == (char)*piVar27 < '\0') {
                      *(byte *)piVar27 = (char)*piVar27 + bVar8;
                      bVar7 = cVar10 + 0x9c;
                      piVar27 = (int *)CONCAT31(uVar29,bVar7);
                      puVar18 = puVar46 + (int)pbVar17 * 2;
                      uVar21 = *puVar18;
                      uVar16 = *puVar18;
                      *puVar18 = (uint)(pbVar39 + uVar16 + (0xd2 < bVar8));
                      *piVar27 = (*piVar27 - (int)piVar27) -
                                 (uint)(CARRY4(uVar21,(uint)pbVar39) ||
                                       CARRY4((uint)(pbVar39 + uVar16),(uint)(0xd2 < bVar8)));
                      uVar21 = *puVar46;
                      *(byte *)puVar46 = (byte)*puVar46 + bVar7;
                      pbVar19 = (byte *)CONCAT22((short)((uint)unaff_EDI >> 0x10),in_ES);
                      if (!CARRY1((byte)uVar21,bVar7)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    unaff_EDI = pbVar19;
                    *(byte *)piVar27 = (char)*piVar27 + (byte)piVar27;
                    uVar29 = (undefined3)((uint)piVar27 >> 8);
                    bVar8 = (byte)piVar27 | *(byte *)((int)piVar27 + 0x400000d);
                    pcVar14 = (char *)CONCAT31(uVar29,bVar8);
                    if ((char)bVar8 < '\x01') {
                      bVar54 = pcVar14 < (char *)0x6fe1411;
                      pcVar14 = pcVar14 + -0x6fe1411;
                    }
                    else {
                      *pcVar14 = *pcVar14 + bVar8;
                      bVar37 = bVar8 + 0x28;
                      puVar18 = (uint *)CONCAT31(uVar29,bVar37);
                      *puVar18 = *puVar18 | (uint)puVar18;
                      bVar7 = *unaff_EBX;
                      cVar10 = (char)((uint)pbVar24 >> 8);
                      *unaff_EBX = *unaff_EBX + cVar10;
                      if (*unaff_EBX == 0 || SCARRY1(bVar7,cVar10) != (char)*unaff_EBX < '\0')
                      break;
                      *(byte *)puVar18 = (char)*puVar18 + bVar37;
                      pcVar14 = (char *)CONCAT31(uVar29,bVar8 + 0x55);
                      puVar18 = puVar46 + (int)pbVar17 * 2;
                      bVar54 = CARRY4(*puVar18,(uint)pbVar39) ||
                               CARRY4((uint)(pbVar39 + *puVar18),(uint)(0xd2 < bVar37));
                      *puVar18 = (uint)(pbVar39 + *puVar18 + (0xd2 < bVar37));
                    }
                    while( true ) {
                      uVar29 = (undefined3)((uint)pcVar14 >> 8);
                      bVar8 = ((char)pcVar14 - *pcVar14) - bVar54;
                      puVar18 = (uint *)CONCAT31(uVar29,bVar8);
                      uVar21 = *puVar46;
                      *(byte *)puVar46 = (byte)*puVar46 + bVar8;
                      if (CARRY1((byte)uVar21,bVar8)) break;
                      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                   (byte)unaff_EBX | (byte)((uint)pbVar39 >> 8));
                      pcVar14 = (char *)CONCAT31(uVar29,bVar8 + 2);
                      while( true ) {
                        uVar50 = (ushort)unaff_EDI;
                        pbVar45[-0x6f] = pbVar45[-0x6f] + 1;
                        cVar10 = (char)pcVar14;
                        *pcVar14 = *pcVar14 + cVar10;
                        uVar29 = (undefined3)((uint)pcVar14 >> 8);
                        bVar8 = cVar10 + 2;
                        pcVar14 = (char *)CONCAT31(uVar29,bVar8);
                        if (SCARRY1(cVar10,'\x02') != (char)bVar8 < '\0') break;
                        *pcVar14 = *pcVar14 + bVar8;
                        cVar44 = (char)pbVar39;
                        *pbVar17 = *pbVar17 - cVar44;
                        *pbVar39 = *pbVar39 + (char)pbVar24;
                        bVar7 = (cVar10 + '\t') - *(char *)CONCAT31(uVar29,cVar10 + '\t');
                        pbVar19 = (byte *)CONCAT31(uVar29,bVar7);
                        bVar8 = *pbVar19;
                        *pbVar19 = *pbVar19 + bVar7;
                        pbVar31 = pbVar24 + 1;
                        cVar10 = bVar7 - CARRY1(bVar8,bVar7);
                        pcVar14 = (char *)CONCAT31(uVar29,cVar10);
                        *pcVar14 = *pcVar14 + cVar10;
                        *pcVar14 = *pcVar14 + cVar10;
                        *pcVar14 = *pcVar14 + cVar10;
                        *pcVar14 = *pcVar14 + cVar10;
                        cVar11 = (char)((uint)pbVar31 >> 8);
                        pbVar24[2] = pbVar24[2] + cVar11;
                        *pcVar14 = *pcVar14 + cVar10;
                        pcVar14 = (char *)(*(int *)pbVar31 * 0x170000);
                        *pcVar14 = *pcVar14;
                        *pcVar14 = *pcVar14;
                        *pbVar31 = *pbVar31;
                        uVar35 = (undefined2)((uint)unaff_EBX >> 0x10);
                        cVar10 = (char)unaff_EBX;
                        bVar37 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)pbVar39 * 5);
                        unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(bVar37,cVar10));
                        unaff_EBX[(int)pcVar14] = unaff_EBX[(int)pcVar14];
                        *pcVar14 = *pcVar14 - cVar10;
                        *pbVar39 = *pbVar39 + (char)pbVar31;
                        uVar29 = (undefined3)((uint)pcVar14 >> 8);
                        bVar7 = -*pcVar14;
                        pbVar19 = (byte *)CONCAT31(uVar29,bVar7);
                        *unaff_EBX = *unaff_EBX + cVar44;
                        *pbVar39 = *pbVar39 ^ bVar7;
                        *pbVar39 = *pbVar39 + bVar7;
                        *pbVar19 = *pbVar19 + bVar7;
                        bVar8 = *pbVar19;
                        *pbVar19 = *pbVar19 + bVar7;
                        *(byte **)pbVar39 = pbVar39 + (uint)CARRY1(bVar8,bVar7) + *(int *)pbVar39;
                        bVar8 = *pbVar39;
                        *pbVar39 = *pbVar39 + bVar7;
                        if (SCARRY1(bVar8,bVar7) == (char)*pbVar39 < '\0') {
                          pcVar14 = (char *)((uint)pbVar19 | 2);
                          pbVar45[-0x6f] = pbVar45[-0x6f] + 1;
                          *pcVar14 = *pcVar14 + (char)pcVar14;
                          in_SS = uStack_10;
                        }
                        else {
                          *pbVar19 = *pbVar19 + bVar7;
                          cVar12 = bVar7 + 0x12;
                          pcVar14 = (char *)CONCAT31(uVar29,cVar12);
                          bVar8 = *unaff_EBX;
                          *unaff_EBX = *unaff_EBX + cVar12;
                          if (SCARRY1(bVar8,cVar12) != (char)*unaff_EBX < '\0') {
                            *pcVar14 = *pcVar14 + cVar12;
                            cVar12 = bVar7 + 0x24;
                            pcVar14 = (char *)CONCAT31(uVar29,cVar12);
                            *pcVar14 = *pcVar14 + cVar11;
                            pbVar19 = (byte *)CONCAT13(uStack_d,CONCAT12(uStack_e,uStack_10));
                            *pcVar14 = *pcVar14 + cVar12;
                            bVar37 = bVar37 | pbVar45[-0x6e];
                            pcVar20 = (char *)CONCAT22(uVar35,CONCAT11(bVar37,cVar10));
                            *pcVar14 = *pcVar14 + cVar12;
                            cRam0000917d = cRam0000917d + cVar44;
                            bVar13 = bVar7 + 0x48;
                            pcVar20[-0x6e] = pcVar20[-0x6e] + bVar37;
                            *(char *)CONCAT31(uVar29,bVar13) =
                                 *(char *)CONCAT31(uVar29,bVar13) + bVar13;
                            bVar8 = bVar7 + 0x53 + *pbVar19;
                            cVar10 = bVar8 + (0xf4 < bVar13);
                            cVar10 = cVar10 + *(char *)CONCAT31(uVar29,cVar10) +
                                     (CARRY1(bVar7 + 0x53,*pbVar19) || CARRY1(bVar8,0xf4 < bVar13));
                            pcVar14 = (char *)CONCAT31(uVar29,cVar10);
                            *pcVar20 = *pcVar20 - bVar9;
                            *pcVar14 = *pcVar14 + cVar10;
                            pbVar39 = pbVar39 + -*(int *)pbVar39;
                            *(char *)((int)pbVar39 * 5) = *(char *)((int)pbVar39 * 5) + bVar37;
                            pcVar14[(int)pbVar45] = pcVar14[(int)pbVar45] + cVar10;
                            *pcVar14 = *pcVar14 + cVar10;
                            bVar7 = (byte)((uint)iVar15 >> 8) | *pbVar39;
                            uVar42 = (undefined1)uStack_c;
                            cVar11 = (char)((uint)uStack_c >> 8) + *(char *)(uStack_c + 0xf);
                            *pcVar14 = *pcVar14 + cVar10;
                            bVar8 = cVar10 + 0x2aU & *pbVar39;
                            iVar15 = *(int *)(pbVar45 + 0xf);
                            *(char *)CONCAT31(uVar29,bVar8) =
                                 *(char *)CONCAT31(uVar29,bVar8) + bVar8;
                            pcVar14 = (char *)CONCAT31(uVar29,bVar8 + 0x2a);
                            cVar11 = cVar11 + *(char *)(CONCAT22(uStack_c._2_2_,
                                                                 CONCAT11(cVar11,uVar42)) + 0x10);
                            *pcVar14 = *pcVar14 + bVar8 + 0x2a;
                            bVar8 = bVar8 + 0x54 & *pbVar39;
                            iVar5 = *(int *)(pbVar45 + 0x10);
                            *(char *)CONCAT31(uVar29,bVar8) =
                                 *(char *)CONCAT31(uVar29,bVar8) + bVar8;
                            pcVar14 = (char *)CONCAT31(uVar29,bVar8 + 0x2a);
                            puVar43 = (uint *)CONCAT22(uStack_c._2_2_,
                                                       CONCAT11(cVar11 + *(char *)(CONCAT22(uStack_c
                                                  ._2_2_,CONCAT11(cVar11,uVar42)) + 0x11),uVar42));
                            *pcVar14 = *pcVar14 + bVar8 + 0x2a;
                            bVar8 = bVar8 + 0x54 & *pbVar39;
                            puVar48 = (uint *)(pbVar17 + *(int *)(pbVar45 + 0x11) + iVar5 + iVar15);
                            *(char *)CONCAT31(uVar29,bVar8) =
                                 *(char *)CONCAT31(uVar29,bVar8) + bVar8;
                            pbVar24 = (byte *)CONCAT31(uVar29,bVar8 + 0x2a);
                            puVar18 = (uint *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                                       CONCAT11(bVar7 + *pbVar24,bVar9));
                            uVar57 = CONCAT44(pbVar39,pbVar24 + (uint)CARRY1(bVar7,*pbVar24) +
                                                                *(int *)pbVar24);
                            uVar53 = uVar50;
                            goto code_r0x00402866;
                          }
                        }
                        cVar11 = (char)pcVar14;
                        uVar29 = (undefined3)((uint)pcVar14 >> 8);
                        cVar10 = cVar11 + '\x02';
                        piVar27 = (int *)CONCAT31(uVar29,cVar10);
                        pbVar24 = pbVar31;
                        in_ES = uVar50;
                        pbVar19 = pbVar39;
                        if (SCARRY1(cVar11,'\x02') != cVar10 < '\0') goto code_r0x00402724;
                        *(char *)piVar27 = (char)*piVar27 + cVar10;
                        pcVar14 = (char *)CONCAT31(uVar29,cVar11 + '\n');
                        *(byte *)puVar46 = (byte)*puVar46 - cVar44;
                        *pbVar39 = *pbVar39 + (char)pbVar31;
                      }
                      pbVar19 = pbVar45 + 0x6fe1411;
                      bVar54 = CARRY1(*pbVar19,bVar8);
                      *pbVar19 = *pbVar19 + bVar8;
                    }
                    break;
                  }
                  unaff_EBX[(int)pbVar39] = unaff_EBX[(int)pbVar39] + cVar10;
                  pbVar19 = pbVar24;
                  unaff_EDI = pbVar17;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              in_stack_ffffffe8 = (byte *)CONCAT22((short)((uint)in_stack_ffffffe8 >> 0x10),in_CS);
              in_CS = 0x927c;
              uVar57 = func_0x02040000(in_stack_ffffffe8);
              pbVar39 = (byte *)((ulonglong)uVar57 >> 0x20);
              *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
              pbVar24 = (byte *)CONCAT31((int3)((ulonglong)uVar57 >> 8),(char)uVar57 + '\x12');
              pbVar19 = extraout_ECX_00;
            }
            goto code_r0x00402680;
          }
          unaff_EBP = pbVar45 + -1;
          *pcVar14 = *pcVar14 + cVar10;
          pbVar39 = (byte *)CONCAT31(uVar41,bVar7 | *unaff_EBX);
          pbVar24 = (byte *)CONCAT31(uVar29,cVar10 + ':');
code_r0x00402677:
          unaff_ESI = (uint *)((int)unaff_ESI + -1);
          pbVar45 = unaff_EBP;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar24 = *pbVar24 + bVar9;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | pbVar45[-0x6b],
                                            (char)unaff_EBX));
      *pbVar24 = *pbVar24 + bVar9;
      cVar10 = bVar8 + 0xf;
      pcVar14 = (char *)CONCAT31(uVar29,cVar10);
      if (SCARRY1(bVar9,'\x02') == cVar10 < '\0') {
        pcVar14 = pcVar14 + (0xfd < bVar9) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar14 = *pcVar14 + cVar10;
      cVar11 = bVar8 + 0x11;
      pbVar17 = (byte *)CONCAT31(uVar29,cVar11);
      uVar57 = CONCAT44(pbVar39,pbVar17);
      uStack_c = CONCAT22(uStack_c._2_2_,in_SS);
      pbVar24 = pbVar19;
      pbVar31 = unaff_EDI;
      if (SCARRY1(cVar10,'\x02') == cVar11 < '\0') {
        if ((POPCOUNT(cVar11) & 1U) != 0) goto code_r0x0040255d;
        goto code_r0x004025d8;
      }
code_r0x0040263f:
      *pbVar17 = *pbVar17 + (char)pbVar17;
      cVar10 = (char)pbVar17 + '\x02';
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),cVar10);
      pbVar19 = pbVar24;
      unaff_EDI = pbVar31;
      if ((POPCOUNT(cVar10) & 1U) == 0) {
        *pcVar14 = *pcVar14 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *pcVar14 = *pcVar14 + bVar8;
      uVar57 = CONCAT44(pbVar39,pcVar14 + 0x12110000);
code_r0x0040255d:
      while( true ) {
        pcVar14 = (char *)((ulonglong)uVar57 >> 0x20);
        piVar27 = (int *)uVar57;
        *piVar27 = (int)((int)piVar27 + *piVar27);
        uVar35 = (undefined2)((uint)unaff_EBX >> 0x10);
        uVar42 = SUB41(unaff_EBX,0);
        cVar44 = (char)((uint)unaff_EBX >> 8) + (char)((ulonglong)uVar57 >> 0x28);
        pcVar20 = (char *)CONCAT22(uVar35,CONCAT11(cVar44,uVar42));
        *piVar27 = (int)((int)piVar27 + *piVar27);
        *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar57 >> 0x20);
        cVar10 = (char)uVar57;
        *(char *)piVar27 = (char)*piVar27 + cVar10;
        *(char *)piVar27 = (char)*piVar27 + cVar10;
        *(char *)piVar27 = (char)*piVar27 + cVar10;
        *pcVar14 = *pcVar14 + cVar10;
        *(char *)piVar27 = (char)*piVar27 + cVar10;
        *pcVar20 = *pcVar20 + cVar10;
        *(char *)piVar27 = (char)*piVar27 + cVar10;
        pcVar2 = (code *)swi(1);
        uVar57 = (*pcVar2)();
        pbVar39 = (byte *)((ulonglong)uVar57 >> 0x20);
        pbVar19 = (byte *)uVar57;
        bVar9 = *pbVar19;
        bVar8 = (byte)uVar57;
        *pbVar19 = *pbVar19 + bVar8;
        *pbVar39 = *pbVar39 + bVar8 + CARRY1(bVar9,bVar8);
        *pbVar19 = *pbVar19 + bVar8;
        *pbVar19 = *pbVar19 + bVar8;
        *pbVar19 = *pbVar19 + bVar8;
        *pbVar19 = *pbVar19 + bVar8;
        *pbVar19 = *pbVar19 + bVar8;
        *pbVar19 = *pbVar19 + bVar8;
        *pbVar19 = *pbVar19 + bVar8;
        *pbVar19 = *pbVar19 + bVar8;
        cVar10 = (char)((ulonglong)uVar57 >> 0x28);
        *pbVar19 = *pbVar19 + cVar10;
        bVar9 = *pbVar19;
        uVar29 = (undefined3)((ulonglong)uVar57 >> 8);
        pcVar14 = (char *)CONCAT31(uVar29,bVar8 + bVar9);
        *pcVar14 = *pcVar14 + cVar10;
        cVar10 = bVar8 + bVar9 + *pcVar14;
        pcVar14 = (char *)CONCAT31(uVar29,cVar10);
        cVar11 = (char)((ulonglong)uVar57 >> 0x20);
        *unaff_EDI = *unaff_EDI + cVar11;
        *pcVar14 = *pcVar14 + cVar10;
        *pcVar14 = *pcVar14 + cVar11;
        *pcVar14 = *pcVar14 + cVar10;
        *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
        cVar44 = cVar44 + pbVar45[(int)pcVar14 * 4];
        unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(cVar44,uVar42));
        unaff_EBX[(int)pcVar14] = unaff_EBX[(int)pcVar14] + cVar10;
        *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar10;
        *pbVar39 = *pbVar39 + (char)extraout_ECX;
        bVar8 = cVar10 - *pcVar14;
        pcVar14 = (char *)CONCAT31(uVar29,bVar8);
        *unaff_EBX = *unaff_EBX + cVar11;
        *pbVar39 = *pbVar39 ^ bVar8;
        *pbVar39 = *pbVar39 + cVar44;
        *pcVar14 = *pcVar14 + bVar8;
        cRam12110000 = cRam12110000 + bVar8;
        bVar9 = *pbVar39;
        *pbVar39 = *pbVar39 + bVar8;
        pbVar19 = extraout_ECX;
        in_SS = uStack_10;
        if (SCARRY1(bVar9,bVar8) != (char)*pbVar39 < '\0') break;
        unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(cVar44 + pbVar45[(int)pcVar14 * 4],uVar42));
        unaff_EDI[(int)pcVar14] = unaff_EDI[(int)pcVar14] + bVar8;
        *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) - bVar8;
        *pcVar14 = *pcVar14 + bVar8;
        pcVar20 = (char *)CONCAT31(uVar29,bVar8 + *pcVar14);
        *pcVar20 = *pcVar20 + bVar8 + *pcVar14;
        uStack_10 = 0x4025;
        uVar57 = func_0x0f40255d();
      }
code_r0x004025bd:
      *pcVar14 = *pcVar14 + (char)pcVar14;
      pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12');
      *pcVar14 = *pcVar14 + (char)((uint)pbVar19 >> 8);
      pcVar14 = pcVar14 + -1;
      cVar10 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar10;
      bVar9 = (byte)((uint)unaff_EBX >> 8) | pbVar45[-0x7b];
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar9,(char)unaff_EBX))
      ;
      *pcVar14 = *pcVar14 + cVar10;
      cRam0000847d = cRam0000847d + (char)pbVar39;
      pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar10 + '$');
      unaff_EBX[-0x7b] = unaff_EBX[-0x7b] + bVar9;
code_r0x004025d8:
      *pbVar17 = *pbVar17 + (char)pbVar17;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + '\v');
    }
    pbVar24 = unaff_EBX + (int)pbVar19;
    bVar9 = *pbVar24;
    bVar8 = (byte)pcVar14;
    *pbVar24 = *pbVar24 + bVar8;
    uVar29 = (undefined3)((uint)pcVar14 >> 8);
    cVar10 = bVar8 + *pbVar19 + CARRY1(bVar9,bVar8);
    cVar10 = cVar10 + *(char *)CONCAT31(uVar29,cVar10) +
             (CARRY1(bVar8,*pbVar19) || CARRY1(bVar8 + *pbVar19,CARRY1(bVar9,bVar8)));
    in_EAX = (char *)CONCAT31(uVar29,cVar10);
    *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar10;
    *in_EAX = *in_EAX + cVar10;
    iVar15 = *(int *)pbVar39;
    pbVar45[(int)in_EAX * 4] = pbVar45[(int)in_EAX * 4] + (char)((uint)unaff_EBX >> 8);
    in_EAX[(int)pbVar45] = in_EAX[(int)pbVar45] + cVar10;
    param_2 = pbVar39 + (-1 - iVar15);
    *in_EAX = *in_EAX + cVar10;
    s = CONCAT22((short)((uint)pbVar19 >> 0x10),
                 CONCAT11((byte)((uint)pbVar19 >> 8) | *param_2,(char)pbVar19));
    unaff_EBP = pbVar45;
  } while( true );
  *(byte *)puVar18 = (char)*puVar18 + (byte)puVar18;
  uVar29 = (undefined3)((uint)puVar18 >> 8);
  bVar8 = (byte)puVar18 | *(byte *)((int)puVar18 + 0x400000e);
  pcVar14 = (char *)CONCAT31(uVar29,bVar8);
  unaff_ESI = puVar46;
  if ('\0' < (char)bVar8) {
    *pcVar14 = *pcVar14 + bVar8;
    bVar8 = bVar8 + 0x28 | *(byte *)CONCAT31(uVar29,bVar8 + 0x28);
    *unaff_EBX = *unaff_EBX + (char)((uint)pbVar24 >> 8);
    unaff_ESI = puVar46 + 1;
    out(*puVar46,(short)pbVar39);
    *(char *)CONCAT31(uVar29,bVar8) = *(char *)CONCAT31(uVar29,bVar8) + bVar8;
    pcVar14 = (char *)(uint)(bVar8 | *pbVar39);
  }
  bVar8 = (byte)pcVar14 & 0x7b;
  bVar54 = (char)(bVar8 + 0x17) < '\0';
  in_stack_ffffffe8 = unaff_EDI;
  if (SCARRY1(bVar8,'\x17') == bVar54) {
    if (SCARRY1(bVar8,'\x17') != bVar54) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar11 = (char)unaff_EDI;
  *unaff_EDI = *unaff_EDI + cVar11;
  iVar30 = (int3)((uint)unaff_EDI >> 8);
  cVar10 = cVar11 + '\x02';
  pbVar31 = (byte *)CONCAT31(iVar30,cVar10);
  bVar54 = (POPCOUNT(cVar10) & 1U) == 0;
  if (!bVar54) goto code_r0x00402704;
  *pbVar31 = *pbVar31 + cVar10;
  cVar11 = cVar11 + '\x04';
  pcVar14 = (char *)CONCAT31(iVar30,cVar11);
  if ((POPCOUNT(cVar11) & 1U) == 0) {
    *pcVar14 = *pcVar14 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar39 = (byte *)((int)iVar30 >> 0x17);
  puVar46 = unaff_ESI;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar40 = (uint *)((ulonglong)uVar57 >> 0x20);
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar18;
    cVar10 = (char)puVar43 - (byte)*puVar46;
    iVar15 = CONCAT22((short)((uint)puVar43 >> 0x10),
                      CONCAT11((char)((uint)puVar43 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),cVar10) + 0x12),cVar10)
                     );
    *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
    uVar29 = (undefined3)((ulonglong)uVar57 >> 8);
    bVar9 = (char)uVar57 + 0x2aU & (byte)*puVar40;
    pcVar14 = (char *)CONCAT31(uVar29,bVar9);
    puVar48 = (uint *)((int)puVar48 + *(int *)(pbVar45 + 0x12));
    *pcVar14 = *pcVar14 + bVar9;
    puVar23 = (uint *)CONCAT31(uVar29,bVar9 + 0x2a);
    pbStack_1c = (byte *)(uint)uVar53;
get_Value:
    cVar10 = *(char *)(iVar15 + 0x13);
    *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
    uVar29 = (undefined3)((uint)puVar23 >> 8);
    bVar9 = (char)puVar23 + 0x2aU & (byte)*puVar40;
    pcVar14 = (char *)CONCAT31(uVar29,bVar9);
    puVar48 = (uint *)((int)puVar48 + *(int *)(pbVar45 + 0x13));
    *pcVar14 = *pcVar14 + bVar9;
    pbVar19 = (byte *)CONCAT31(uVar29,bVar9 + 0x2a);
    bVar9 = (byte)((uint)puVar18 >> 8);
    bVar8 = bVar9 + *pbVar19;
    pbVar19 = pbVar19 + (uint)CARRY1(bVar9,*pbVar19) + *(int *)pbVar19;
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar18;
    puVar43 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar15 >> 0x10),
                                               CONCAT11((char)((uint)iVar15 >> 8) + cVar10,
                                                        (char)iVar15)) >> 8),
                               (char)iVar15 - (byte)*puVar46);
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                               CONCAT11(bVar8 + *pbVar19,(char)puVar18));
    pbVar19 = pbVar19 + (uint)CARRY1(bVar8,*pbVar19) + *(int *)pbVar19;
    uVar51 = uVar53;
code_r0x00402898:
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar18;
    bVar9 = (byte)puVar40;
    uVar35 = CONCAT11((char)((uint)puVar40 >> 8) - (byte)*puVar46,bVar9);
    pbVar24 = (byte *)CONCAT22((short)((uint)puVar40 >> 0x10),uVar35);
    pcVar14 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((char)((uint)puVar43 >> 8) + (byte)puVar43[-0x19],
                                        (char)puVar43));
    *pbVar19 = *pbVar19 + (char)pbVar19;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),(char)pbVar19 + '\x03');
    puVar43 = puVar46;
    do {
      puVar46 = puVar43 + 1;
      out(*puVar43,uVar35);
      pcVar14 = pcVar14 + -1;
      bVar8 = (byte)pbVar19;
      *pbVar19 = *pbVar19 + bVar8;
      puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                 CONCAT11((byte)((uint)puVar18 >> 8) | *pbVar24,(char)puVar18));
      *pbVar19 = *pbVar19 + bVar8;
      *pcVar14 = *pcVar14 + bVar9;
      *(byte *)((int)pbVar19 * 2) = *(byte *)((int)pbVar19 * 2) ^ bVar8;
      *pbVar19 = *pbVar19 + bVar8;
      *pbVar19 = *pbVar19 | bVar8;
      bVar54 = CARRY1((byte)*puVar18,bVar9);
      *(byte *)puVar18 = (byte)*puVar18 + bVar9;
      cVar10 = bVar8 + 10 + bVar54;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar10);
      puVar43 = puVar46;
    } while (bVar8 < 0xf6 && !CARRY1(bVar8 + 10,bVar54));
    *pbVar19 = *pbVar19 + cVar10;
    pcVar20 = (char *)((uint)pbVar19 | *puVar48);
    puVar43 = (uint *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                               CONCAT11((char)((uint)pcVar14 >> 8) + pbVar45[-100],(char)pcVar14));
    *pcVar20 = *pcVar20 + (char)pcVar20;
    bVar9 = (char)pcVar20 + 7;
    uVar57 = CONCAT44(pbVar24,CONCAT31((int3)((uint)pcVar20 >> 8),bVar9));
code_r0x004028c8:
    puVar40 = (uint *)((ulonglong)uVar57 >> 0x20);
  } while ((POPCOUNT(bVar9) & 1U) != 0);
  *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
  puVar23 = (uint *)CONCAT31((int3)((ulonglong)uVar57 >> 8),(char)uVar57 + '-');
  puVar46 = (uint *)((uint)puVar46 | *(uint *)((int)puVar40 + 0x3b));
  bVar54 = CARRY4(*puVar23,(uint)puVar23);
  uVar21 = *puVar23;
  *puVar23 = (uint)(*puVar23 + (int)puVar23);
  if (SCARRY4(uVar21,(int)puVar23)) {
    bVar54 = CARRY4(*puVar23,(uint)puVar23);
    bVar56 = SCARRY4(*puVar23,(int)puVar23);
    *puVar23 = (uint)(*puVar23 + (int)puVar23);
    bVar9 = POPCOUNT(*puVar23 & 0xff);
    if (bVar56) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + bVar54);
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar18;
    bVar54 = (POPCOUNT((byte)*puVar40) & 1U) == 0;
    if (bVar54) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar54) {
      iVar15 = CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 - (byte)*puVar46);
      goto get_Value;
    }
    *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
    puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + 'r');
    pbStack_1c = pbVar45;
code_r0x004028e2:
    uVar21 = *puVar23;
    *puVar23 = (uint)(*puVar23 + (int)puVar23);
    if (SCARRY4(uVar21,(int)puVar23)) {
      if (*puVar23 == 0 || SCARRY4(uVar21,(int)puVar23) != (int)*puVar23 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar43 = (uint *)((int)puVar43 + -1);
    cVar10 = (char)puVar23;
    *(byte *)puVar23 = (byte)*puVar23 + cVar10;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                               CONCAT11((byte)((uint)puVar18 >> 8) |
                                        *(byte *)((int)puVar18 + 0x16d7207),(char)puVar18));
    pbVar19 = (byte *)((int)puVar23 + 0x7d);
    bVar8 = *pbVar19;
    bVar7 = (byte)((uint)puVar40 >> 8);
    bVar9 = *pbVar19;
    *pbVar19 = *pbVar19 + bVar7;
    uVar51 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY1(bVar9,bVar7) * 0x800 |
             (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
             (ushort)((char)*pbVar19 < '\0') * 0x80 | (ushort)(*pbVar19 == 0) * 0x40 |
             (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(*pbVar19) & 1U) == 0) * 4 |
             (ushort)CARRY1(bVar8,bVar7);
    *(byte *)puVar23 = (byte)*puVar23 + cVar10;
    pbVar19 = (byte *)(CONCAT31((int3)((uint)puVar23 >> 8),cVar10 + '+') ^ *puVar48);
    if ((POPCOUNT((uint)pbVar19 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar9 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar9;
    puVar23 = (uint *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar9 + 0x72);
    if (bVar9 < 0x8e && (byte)(bVar9 + 0x72) != '\0') {
      uVar52 = in_CS;
      if (SCARRY1(bVar9,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar23 + 0x6f) = *(byte *)((int)puVar23 + 0x6f) + bVar7;
    }
code_r0x00402905:
    uVar50 = uVar51;
    uVar57 = CONCAT44(puVar40,puVar23);
    puVar43 = (uint *)((int)puVar43 + -1);
    cVar10 = (char)puVar23;
    *(byte *)puVar23 = (byte)*puVar23 + cVar10;
    bVar9 = (byte)((uint)puVar18 >> 8) | (byte)*puVar18;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar9,(char)puVar18));
    if ((char)bVar9 < '\x01') {
      *(byte *)puVar23 = (byte)*puVar23 + cVar10;
      puVar48 = (uint *)((int)puVar48 - *(int *)(pbVar45 + -100));
      uVar51 = uVar50;
      goto code_r0x00402929;
    }
    *(byte *)puVar23 = (byte)*puVar23 + cVar10;
    uVar51 = 0x291c;
    uVar57 = func_0x7346291c();
    *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
    puVar18 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar57 >> 0x20));
    puStackY_40 = (uint *)CONCAT22(puStackY_40._2_2_,uVar50);
    uStackY_3c = puVar43;
    while( true ) {
      pcVar14 = (char *)((int)uVar57 * 2);
      *pcVar14 = *pcVar14 - (char)puVar18;
      uVar21 = *puVar43;
      cVar10 = (char)((uint)puVar18 >> 8);
      *(byte *)puVar43 = (byte)*puVar43 + cVar10;
      if (SCARRY1((byte)uVar21,cVar10) == (char)(byte)*puVar43 < '\0') {
        pbVar19 = (byte *)((int)puVar48 + (int)uVar57);
        *pbVar19 = *pbVar19 + (char)uVar57;
        bVar9 = *pbVar19;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar40 = (uint *)((ulonglong)uVar57 >> 0x20);
      cVar10 = (char)uVar57;
      *(char *)uVar57 = *(char *)uVar57 + cVar10;
      uVar29 = (undefined3)((ulonglong)uVar57 >> 8);
      bVar9 = cVar10 + 7;
      puVar23 = (uint *)CONCAT31(uVar29,bVar9);
      bVar8 = (byte)((ulonglong)uVar57 >> 0x28);
      if ((POPCOUNT(bVar9) & 1U) != 0) break;
      *(byte *)puVar23 = (byte)*puVar23 + bVar9;
      pcVar14 = (char *)CONCAT31(uVar29,cVar10 + '3');
      uVar35 = (undefined2)((uint)puVar43 >> 0x10);
      uVar42 = SUB41(puVar43,0);
      bVar9 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar46 + 0x16) + (0xd3 < bVar9);
      puVar43 = (uint *)CONCAT22(uVar35,CONCAT11(bVar9,uVar42));
      *pcVar14 = *pcVar14 + cVar10 + '3';
      cVar11 = cVar10 + ':';
      puVar23 = (uint *)CONCAT31(uVar29,cVar11);
      if ((POPCOUNT(cVar11) & 1U) != 0) {
        bVar9 = bVar9 | *(byte *)((int)puVar40 + 7);
        puVar43 = (uint *)CONCAT22(uVar35,CONCAT11(bVar9,uVar42));
        bVar54 = (POPCOUNT(bVar9) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar23 = (byte)*puVar23 + cVar11;
      puVar23 = (uint *)(CONCAT31(uVar29,cVar10 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar19 = (byte *)((int)puVar23 + 0x72);
      bVar56 = SCARRY1(*pbVar19,bVar8);
      *pbVar19 = *pbVar19 + bVar8;
      bVar9 = POPCOUNT(*pbVar19);
code_r0x0040294c:
      if ((bVar9 & 1) == 0) {
        *(byte *)((int)puVar23 + 0x72) = *(byte *)((int)puVar23 + 0x72) + (char)((uint)puVar40 >> 8)
        ;
      }
      else if (bVar56) {
        pbVar45 = *(byte **)pbVar45;
        cVar10 = cRamc9721806;
        goto code_r0x004029c4;
      }
      pbVar45 = (byte *)0x7e700001;
      puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,in_SS);
code_r0x00402957:
      *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
      cVar10 = (char)puVar23 + '(';
      puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),cVar10);
      *(byte *)puVar23 = (byte)*puVar23 + cVar10;
      puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                 CONCAT11((byte)((uint)puVar18 >> 8) | (byte)*puVar23,(char)puVar18)
                                );
      *(byte *)puVar23 = (byte)*puVar23 + cVar10;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((byte)((uint)puVar40 >> 8) | (byte)puVar43[0x18],
                                          (char)puVar40));
      puVar46 = puStackY_44;
      puVar48 = puStackY_40;
code_r0x00402966:
      *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
      bVar9 = (byte)((uint)puVar43 >> 8) | *(byte *)((int)puVar40 + 7);
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar9,(char)puVar43));
      if ((POPCOUNT(bVar9) & 1U) != 0) {
        puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
      puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + '~');
      uVar4 = in_SS;
code_r0x00402972:
      *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
      uVar52 = in_CS;
      uVar51 = uVar4;
code_r0x00402974:
      bVar9 = 0xe9 < (byte)puVar23;
      in_CS = 0x2d0a;
      uVar57 = func_0x00006128(uVar52);
      puVar18 = (uint *)uVar57;
      piVar27 = (int *)((int)((ulonglong)uVar57 >> 0x20) + -0x3d);
      *piVar27 = (int)((int)puVar46 + (uint)bVar9 + *piVar27);
      bVar54 = SCARRY4(*puVar18,(int)puVar18);
      *puVar18 = *puVar18 + (int)puVar18;
      uVar21 = *puVar18;
      puVar18 = extraout_ECX_02;
code_r0x00402982:
      bVar9 = POPCOUNT(uVar21 & 0xff);
      if (bVar54) {
        *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
        puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                   CONCAT11((byte)((uint)puVar18 >> 8) |
                                            *(byte *)((ulonglong)uVar57 >> 0x20),(char)puVar18));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar14 = (char *)((ulonglong)uVar57 >> 0x20);
      if ((bVar9 & 1) == 0) {
        *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
        *pcVar14 = *pcVar14 + (char)puVar18;
        uVar57 = CONCAT44(CONCAT22((short)((ulonglong)uVar57 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar57 >> 0x28) - pcVar14[0x1f],
                                            (char)((ulonglong)uVar57 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar57 >> 8),(char)uVar57 + '('));
code_r0x00402991:
        puVar40 = (uint *)((ulonglong)uVar57 >> 0x20);
        pbVar19 = (byte *)uVar57;
        bVar9 = (byte)uVar57;
        bVar54 = CARRY1(bVar9,*pbVar19);
        puVar23 = (uint *)CONCAT31((int3)((ulonglong)uVar57 >> 8),bVar9 + *pbVar19);
        cVar10 = bVar9 + *pbVar19;
        if (SCARRY1(bVar9,*pbVar19)) goto code_r0x004029c4;
code_r0x00402995:
        puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                   CONCAT11(((char)((uint)puVar40 >> 8) -
                                            *(byte *)((int)puVar40 + 0x6b)) - bVar54,(char)puVar40))
        ;
        bVar9 = (byte)puVar23;
        bVar54 = CARRY1(bVar9,(byte)*puVar23);
        bVar56 = SCARRY1(bVar9,(byte)*puVar23);
        puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar9 + (byte)*puVar23);
        do {
          if (!bVar56) {
            puVar46 = (uint *)((int)puVar46 + (uint)bVar54 + *puVar23);
            pbVar19 = (byte *)((int)puVar23 + *puVar23);
            bVar8 = (byte)pbVar19;
            *pbVar19 = *pbVar19 + bVar8;
            *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
            bVar9 = *pbVar19;
            *pbVar19 = *pbVar19 + bVar8;
            *puVar48 = (uint)((int)puVar43 + (uint)CARRY1(bVar9,bVar8) + *puVar48);
            *(uint *)(pbVar45 + 0x100002b) = *(uint *)(pbVar45 + 0x100002b) | (uint)puVar18;
            uVar29 = (undefined3)((uint)pbVar19 >> 8);
            bVar8 = bVar8 | (byte)*puVar46;
            puVar23 = (uint *)CONCAT31(uVar29,bVar8);
            uStackY_3c = (uint *)CONCAT22(uStackY_3c._2_2_,in_SS);
            uVar21 = *puVar23;
            uVar16 = *puVar23;
            *puVar23 = (uint)(*puVar23 + (int)puVar23);
            if (SCARRY4(uVar16,(int)puVar23)) {
              *(byte *)puVar46 = (byte)*puVar46 - (char)puVar43;
              *(byte *)puVar40 = (byte)*puVar40 + (char)puVar18;
              *(byte *)puVar48 = (byte)*puVar48 - (char)puVar43;
            }
            else {
              puStackY_40 = (uint *)CONCAT22(puStackY_40._2_2_,uVar50);
              in_SS = uVar50;
              uVar4 = uVar50;
              if (CARRY4(uVar21,(uint)puVar23)) goto code_r0x00402972;
              bVar54 = CARRY1(bVar8,(byte)*puVar23);
              bVar56 = SCARRY1(bVar8,(byte)*puVar23);
              puVar23 = (uint *)CONCAT31(uVar29,bVar8 + (byte)*puVar23);
code_r0x004029be:
              if (!bVar56) {
                puStackY_40 = (uint *)CONCAT22(puStackY_40._2_2_,uVar50);
                *(byte *)((int)puVar40 + -0x37) =
                     (*(byte *)((int)puVar40 + -0x37) - (char)((uint)puVar40 >> 8)) - bVar54;
                cVar10 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar10;
                bVar9 = (byte)puVar23;
                bVar54 = CARRY1(bVar9,(byte)*puVar23);
                bVar56 = SCARRY1(bVar9,(byte)*puVar23);
                puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar9 + (byte)*puVar23);
                goto code_r0x004029c6;
              }
            }
            bVar9 = (byte)puVar18;
            bVar54 = CARRY1((byte)*puVar40,bVar9);
            bVar56 = SCARRY1((byte)*puVar40,bVar9);
            *(byte *)puVar40 = (byte)*puVar40 + bVar9;
            if (bVar54) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar56) {
            uVar50 = (ushort)pbStack_1c;
            goto code_r0x00402966;
          }
          *(uint *)((int)puVar40 + -0x23) =
               (*(int *)((int)puVar40 + -0x23) - (int)puVar46) - (uint)bVar54;
          uVar21 = *puVar23;
          bVar9 = (byte)puVar23;
          uVar16 = *puVar23;
          uVar29 = (undefined3)((uint)puVar23 >> 8);
          bVar8 = bVar9 + (byte)*puVar23;
          puVar23 = (uint *)CONCAT31(uVar29,bVar8);
          uVar4 = uVar50;
          if (SCARRY1(bVar9,(byte)uVar16)) goto code_r0x00402972;
          cVar10 = (char)puVar40;
          bVar7 = ((char)((uint)puVar40 >> 8) - *(byte *)((int)puVar40 + -0xf)) -
                  CARRY1(bVar9,(byte)uVar21);
          puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar7,cVar10));
          puVar47 = (uint *)CONCAT31(uVar29,bVar8 + (byte)*puVar23);
          bVar9 = (byte)puVar18;
          uVar51 = uVar50;
          if (SCARRY1(bVar8,(byte)*puVar23)) {
            *(byte *)puVar40 = (byte)*puVar40 + bVar9;
            uVar57 = CONCAT44(puVar40,(int)puVar47 + -0x1c37211);
            pcVar14 = (char *)((int)puVar47 + -0x1c3720a);
            *pcVar14 = *pcVar14 + bVar7;
            bVar9 = POPCOUNT(*pcVar14);
            goto code_r0x00402984;
          }
          puVar46 = (uint *)((int)puVar46 +
                            (-(uint)CARRY1(bVar8,(byte)*puVar23) - *(int *)((int)puVar40 + 5)));
          bVar54 = SCARRY4((int)puVar47,*puVar47);
          uVar21 = (int)puVar47 + *puVar47;
          uVar57 = CONCAT44(puVar40,uVar21);
          if (bVar54) goto code_r0x00402982;
          bVar8 = (byte)uVar21 + 0x8e;
          uVar22 = CONCAT31((int3)(uVar21 >> 8),bVar8 - CARRY4((uint)puVar47,*puVar47));
          *puVar43 = (*puVar43 - uVar22) -
                     (uint)((byte)uVar21 < 0x72 || bVar8 < CARRY4((uint)puVar47,*puVar47));
          pbVar19 = (byte *)(uVar22 - 0x5e);
          bVar8 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar7;
          uVar21 = (uint)CARRY1(bVar8,bVar7);
          uVar16 = uVar22 - 0x32d72;
          puVar23 = (uint *)(uVar16 - uVar21);
          if (SBORROW4(uVar22,0x32d72) != SBORROW4(uVar16,uVar21)) goto code_r0x00402992;
          uVar52 = uVar53;
          if (uVar22 < 0x32d72 || uVar16 < uVar21) {
            *pbVar45 = *pbVar45 - (char)((uint)puVar23 >> 8);
            *(byte *)puVar40 = (byte)*puVar40 + bVar9;
            puVar47 = puVar46 + 1;
            out(*puVar46,CONCAT11(bVar7,cVar10));
            *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
            goto code_r0x00402a3e;
          }
          bVar54 = CARRY4((uint)puVar23,*puVar23);
          bVar56 = SCARRY4((int)puVar23,*puVar23);
          puVar23 = (uint *)((int)puVar23 + *puVar23);
          if (!bVar56) {
            uStackY_3c = (uint *)CONCAT22(uStackY_3c._2_2_,uVar50);
            *(byte *)puVar46 = (byte)*puVar46 + bVar54;
            bVar8 = (byte)puVar23;
            *(byte *)((int)puVar40 + (int)pbVar45) = *(byte *)((int)puVar40 + (int)pbVar45) + bVar8;
            *(byte *)puVar43 = (byte)*puVar43 + cVar10;
            *(byte *)puVar43 = (byte)*puVar43 ^ bVar8;
            bVar13 = (byte)((uint)puVar18 >> 8);
            *(byte *)puVar46 = (byte)*puVar46 + bVar13;
            *(byte *)puVar23 = (byte)*puVar23 + bVar8;
            pbVar24 = (byte *)CONCAT31((int3)((uint)puVar23 >> 8),bVar8 | (byte)*puVar23);
            *(byte *)puVar18 = (byte)*puVar18 + cVar10;
            bVar37 = *pbVar24;
            uVar35 = (undefined2)((uint)puVar18 >> 0x10);
            puVar18 = (uint *)CONCAT22(uVar35,CONCAT11(bVar13 + bVar37,bVar9));
            pbVar24 = pbVar24 + (uint)CARRY1(bVar13,*pbVar24) + *(int *)pbVar24;
            *(byte *)puVar40 = (byte)*puVar40 + bVar9;
            pbVar45 = pbVar45 + iRam0355720b;
            pbVar19 = pbVar24 + 0x73;
            bVar8 = *pbVar19;
            *pbVar19 = *pbVar19 + bVar7;
            uVar29 = (undefined3)((uint)pbVar24 >> 8);
            bVar8 = (char)pbVar24 + CARRY1(bVar8,bVar7);
            pcVar14 = (char *)CONCAT31(uVar29,bVar8);
            *(byte *)puVar40 = (byte)*puVar40 + bVar9;
            if ((POPCOUNT((byte)*puVar40) & 1U) == 0) {
              in_SS = uVar50;
            }
            puVar49 = (uint *)((int)puVar48 + *(int *)(pbVar45 + 0x17));
            *pcVar14 = *pcVar14 + bVar8;
            cVar10 = bVar8 + 2;
            puVar23 = (uint *)CONCAT31(uVar29,cVar10);
            if (bVar8 < 0xfe) {
              *puVar23 = (uint)(*puVar23 + (int)puVar23);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar23 = (byte)*puVar23 + cVar10;
            uVar21 = *puVar40;
            puVar47 = (uint *)((int)puVar46 + puVar43[0x19]);
            *(byte *)puVar23 = (byte)*puVar23 + cVar10;
            puVar18 = (uint *)CONCAT22(uVar35,CONCAT11(bVar13 + bVar37 | (byte)*puVar23,
                                                       bVar9 | (byte)uVar21));
            puVar48 = puVar49;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    pbVar45[0x13b720b] = pbVar45[0x13b720b] + bVar9;
    pbVar19 = (byte *)((int)puVar23 + 0x73);
    bVar54 = CARRY1(*pbVar19,bVar8);
    *pbVar19 = *pbVar19 + bVar8;
  } while( true );
code_r0x00402992:
  pbVar19 = (byte *)((int)puVar23 + 0x2a);
  bVar54 = CARRY1(*pbVar19,bVar7);
  *pbVar19 = *pbVar19 + bVar7;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar23) = *(byte *)(in_GS_OFFSET + (int)puVar23) + (char)puVar23;
  puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                             CONCAT11((byte)((uint)puVar18 >> 8) | *(byte *)((int)puVar48 + 0x66),
                                      (char)puVar18));
  *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
code_r0x00402a3e:
  uVar29 = (undefined3)((uint)puVar23 >> 8);
  bVar9 = (byte)puVar23 | (byte)*puVar47;
  pcVar14 = (char *)CONCAT31(uVar29,bVar9);
  if ((char)bVar9 < '\0') {
    *pcVar14 = *pcVar14 + bVar9;
    cVar10 = bVar9 + 2;
    piVar27 = (int *)CONCAT31(uVar29,cVar10);
    if ((POPCOUNT(cVar10) & 1U) == 0) {
      *(char *)piVar27 = (char)*piVar27 + cVar10;
      bVar9 = bVar9 + 0x71;
      pcVar20 = (char *)CONCAT31(uVar29,bVar9);
      pcVar14 = (char *)segment(uVar52,(short)puVar43 + (short)puVar47);
      *pcVar14 = *pcVar14 + bVar9;
      uVar21 = puVar48[0x1a];
      *pcVar20 = *pcVar20 + bVar9;
      puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                 CONCAT11((byte)((uint)puVar18 >> 8) | (byte)uVar21 |
                                          *(byte *)((int)puVar48 + 0x69),(char)puVar18));
      *pcVar20 = *pcVar20 + bVar9;
      bVar9 = bVar9 | (byte)*puVar40;
      pcVar14 = (char *)CONCAT31(uVar29,bVar9);
      if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar46 = puVar47 + (uint)bVar55 * -2 + 1;
    out(*puVar47,(short)puVar40);
  }
  else {
    puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((char)((uint)puVar43 >> 8) + (byte)puVar43[6],(char)puVar43)
                              );
code_r0x00402a5d:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    piVar27 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
    puVar46 = puVar47;
  }
code_r0x00402a61:
  pcVar14 = (char *)segment(uVar52,(short)puVar43 + (short)puVar46);
  *pcVar14 = *pcVar14 + (char)piVar27;
  cVar10 = (char)puVar18;
  puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                             CONCAT11((byte)((uint)puVar18 >> 8) | (byte)puVar48[0x1a],cVar10));
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  uVar35 = CONCAT11((byte)((uint)puVar40 >> 8) | *(byte *)((int)puVar40 + 0x65),(char)puVar40);
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),uVar35);
  piVar25 = (int *)((int)piVar27 + *piVar27);
  puVar47 = puVar46;
  puVar49 = puVar48;
  uVar51 = uVar50;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402ae3;
  *(byte *)puVar40 = (byte)*puVar40 + cVar10;
  puVar47 = puVar46 + (uint)bVar55 * -2 + 1;
  out(*puVar46,uVar35);
code_r0x00402a75:
  bVar9 = (byte)((uint)puVar18 >> 8) | (byte)*puVar40;
  puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar9,(char)puVar18));
  piVar27 = (int *)(uint)(byte)*puVar43;
  *(byte *)puVar47 = (byte)*puVar47 - bVar9;
  puVar49 = puVar48;
code_r0x00402a7f:
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  out(*puVar47,(short)puVar40);
  bVar9 = in((short)puVar40);
  *(byte *)puVar49 = bVar9;
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                             CONCAT11((byte)((uint)puVar18 >> 8) | (byte)*puVar40,(char)puVar18));
  iVar15 = *piVar27;
  cVar10 = in(1);
  puVar23 = (uint *)CONCAT31((int3)((uint)((int)piVar27 + *piVar27) >> 8),cVar10);
  *(char *)puVar23 = (char)*puVar23 + cVar10;
  puVar23 = (uint *)((uint)puVar23 | *puVar23);
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar40;
  puVar47 = (uint *)((int)puVar47 + (((uint)bVar55 * -8 + 4) - iVar15));
  puVar49 = (uint *)((int)puVar49 + (uint)bVar55 * -2 + 1);
  in_SS = uVar50;
  while( true ) {
    bVar9 = (byte)puVar23 | (byte)*puVar40;
    puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar9);
    puVar48 = puVar49;
    if ((POPCOUNT(bVar9) & 1U) != 0) break;
    *(byte *)puVar23 = (byte)*puVar23 + bVar9;
code_r0x00402a9b:
    uVar29 = (undefined3)((uint)puVar23 >> 8);
    cVar10 = (char)puVar23 + '\r';
    piVar25 = (int *)CONCAT31(uVar29,cVar10);
    *(uint *)(pbVar45 + 2) = *(uint *)(pbVar45 + 2) | (uint)piVar25;
    *(char *)piVar25 = (char)*piVar25 + cVar10;
    *(byte *)(puVar47 + -0xc800000) = (byte)puVar47[-0xc800000] + (char)puVar40;
    *(char *)piVar25 = (char)*piVar25 + cVar10;
    *(byte *)puVar40 = (byte)*puVar40 + cVar10;
    cVar11 = (char)puVar18;
    if ((POPCOUNT((byte)*puVar40) & 1U) != 0) {
      *(byte *)puVar40 = (byte)*puVar40 + cVar11;
      puVar46 = puVar47 + (uint)bVar55 * -2 + 1;
      out(*puVar47,(short)puVar40);
      piVar27 = (int *)((longlong)*piVar25 * 0x7b020a00);
      *(char *)piVar27 =
           (char)*piVar27 - ((longlong)(int)piVar27 != (longlong)*piVar25 * 0x7b020a00);
      pbVar19 = (byte *)((int)puVar48 + (int)pbVar45 * 2);
      *pbVar19 = *pbVar19;
      goto code_r0x00402a61;
    }
    *(char *)piVar25 = (char)*piVar25 + cVar10;
    puVar23 = (uint *)CONCAT31(uVar29,(char)puVar23 + ':');
    puVar46 = (uint *)((uint)puVar47 | *(uint *)((int)puVar40 + -0x79));
    iVar15 = (int)puVar23 + *puVar23;
    if (SCARRY4((int)puVar23,*puVar23)) {
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                 CONCAT11((char)((uint)puVar43 >> 8) + (byte)puVar46[(int)puVar43],
                                          (char)puVar43));
      *(char *)((int)puVar40 * 2) = *(char *)((int)puVar40 * 2) + (char)iVar15;
      puVar49 = puVar48;
      goto code_r0x00402b33;
    }
    uVar29 = (undefined3)((uint)iVar15 >> 8);
    cVar10 = (char)iVar15 + CARRY4((uint)puVar23,*puVar23);
    piVar27 = (int *)CONCAT31(uVar29,cVar10);
    *(byte *)puVar40 = (byte)*puVar40 + cVar11;
    bVar54 = (POPCOUNT((byte)*puVar40) & 1U) != 0;
    if ((bVar54) && (bVar54)) goto code_r0x00402a61;
    *(char *)piVar27 = (char)*piVar27 + cVar10;
    cVar44 = cVar10 + '(';
    pcVar14 = (char *)CONCAT31(uVar29,cVar44);
    puVar49 = puVar48 + (uint)bVar55 * -2 + 1;
    uVar21 = in((short)puVar40);
    *puVar48 = uVar21;
    *pcVar14 = *pcVar14 + cVar44;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                               CONCAT11((byte)((uint)puVar18 >> 8) | bRama07b0222,cVar11));
    *pcVar14 = *pcVar14 + cVar44;
    pcVar14 = (char *)CONCAT31(uVar29,cVar10 + '>');
code_r0x00402ad2:
    out(*puVar46,(short)puVar40);
    puVar47 = (uint *)((int)(puVar46 + (uint)bVar55 * -2 + 1) + (uint)bVar55 * -2 + 1);
    out((byte)puVar46[(uint)bVar55 * -2 + 1],(short)puVar40);
    bVar9 = (byte)pcVar14;
    *pcVar14 = *pcVar14 + bVar9;
    puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(byte)puVar43 | (byte)*puVar49);
    in_AF = 9 < (bVar9 & 0xf) | in_AF;
    uVar29 = (undefined3)((uint)pcVar14 >> 8);
    bVar9 = bVar9 + in_AF * -6;
    puVar40 = (uint *)((uint)puVar40 ^ *puVar40);
    cVar10 = bVar9 + (0x9f < bVar9 | in_AF * (bVar9 < 6)) * -0x60 + (byte)*puVar40;
    piVar27 = (int *)CONCAT31(uVar29,cVar10);
    if ((POPCOUNT(cVar10) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar27 = (char)*piVar27 + cVar10;
    piVar25 = (int *)CONCAT31(uVar29,cVar10 + '\x17');
    uVar51 = uVar50;
code_r0x00402ae3:
    out(*puVar47,(short)puVar40);
    puVar46 = puVar47 + (uint)bVar55 * -2 + 1 + (uint)bVar55 * -2 + 1;
    out(puVar47[(uint)bVar55 * -2 + 1],(short)puVar40);
    *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
code_r0x00402ae7:
    puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((byte)((uint)puVar43 >> 8) | pbVar45[-0x60],(char)puVar43));
    cVar10 = (char)piVar25;
    *(char *)piVar25 = (char)*piVar25 + cVar10;
    uVar29 = (undefined3)((uint)piVar25 >> 8);
    bVar9 = cVar10 + 2;
    puVar23 = (uint *)CONCAT31(uVar29,bVar9);
    uVar50 = uVar51;
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      *(byte *)puVar23 = (byte)*puVar23 + bVar9;
      cVar10 = cVar10 + '}';
      puVar23 = (uint *)CONCAT31(uVar29,cVar10);
      *(byte *)puVar23 = ((byte)*puVar23 - cVar10) - (0x84 < bVar9);
      pbVar19 = (byte *)((int)puVar40 + (int)puVar23);
      *pbVar19 = *pbVar19 + cVar10;
      bVar9 = POPCOUNT(*pbVar19);
      puVar47 = puVar46;
code_r0x00402af9:
      uVar50 = uVar51;
      puVar48 = puVar49;
      if ((bVar9 & 1) == 0) {
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
        bVar9 = (byte)puVar18;
        *(byte *)puVar40 = (byte)*puVar40 + bVar9;
        uStackY_3c = (uint *)CONCAT22(uStackY_3c._2_2_,in_SS);
        puVar46 = puVar47 + (uint)bVar55 * -2 + 1;
        out(*puVar47,(short)puVar40);
        uVar21 = *puVar40;
        *(byte *)puVar40 = (byte)*puVar40 + bVar9;
        iVar15 = CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + 'o') +
                 *(int *)((int)puVar40 * 2) + (uint)CARRY1((byte)uVar21,bVar9);
        pcVar14 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '(');
        while( true ) {
          uVar21 = *puVar40;
          bVar8 = (byte)puVar18;
          *(byte *)puVar40 = (byte)*puVar40 + bVar8;
          pcVar14 = pcVar14 + (uint)CARRY1((byte)uVar21,bVar8) + iRam73280512;
          bVar9 = (byte)pcVar14;
          *pcVar14 = *pcVar14 + bVar9;
          puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                     CONCAT11((byte)((uint)puVar18 >> 8) | bRam7d160243,bVar8));
          bVar55 = ((uint)uStackY_3c & 0x400) != 0;
          in_AF = ((uint)uStackY_3c & 0x10) != 0;
          *pcVar14 = *pcVar14 + bVar9;
          uVar29 = (undefined3)((uint)pcVar14 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar29,bVar9 + 2) + (uint)(0xfd < bVar9);
          cVar10 = bVar9 + 4;
          if (SCARRY1(bVar9 + 2,'\x02') != cVar10 < '\0') break;
          *(char *)CONCAT31(uVar29,cVar10) = *(char *)CONCAT31(uVar29,cVar10) + cVar10;
          iVar15 = CONCAT31(uVar29,bVar9 + 0x16);
code_r0x00402b33:
          piVar25 = (int *)(iVar15 + 0xe2802);
          *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)puVar18 >> 8);
          uVar51 = uVar50;
          uVar50 = in_SS;
          while( true ) {
            bVar8 = (byte)puVar43 | (byte)((uint)puVar18 >> 8);
            puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar8);
            *piVar25 = (int)(*piVar25 + (int)piVar25);
            cVar10 = (char)piVar25;
            *(byte *)puVar40 = (byte)*puVar40 + cVar10;
            if ((POPCOUNT((byte)*puVar40) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar25 = (char)*piVar25 + cVar10;
            uVar21 = CONCAT31((int3)((uint)piVar25 >> 8),cVar10 + '\x13');
            puVar23 = (uint *)(uVar21 + 0x19061224 + (uint)(0x1f9edfd < uVar21));
            uVar22 = (uint)(0xe4ffffdd < uVar21 + 0xfe061202 ||
                           CARRY4(uVar21 + 0x19061224,(uint)(0x1f9edfd < uVar21)));
            uVar21 = *puVar46;
            uVar16 = *puVar46;
            *puVar46 = (uint)((byte *)(uVar16 + (int)puVar23) + uVar22);
            bVar9 = POPCOUNT(*puVar46 & 0xff);
            puVar47 = puVar46;
            if ((SCARRY4(uVar21,(int)puVar23) != SCARRY4((int)(uVar16 + (int)puVar23),uVar22)) ==
                (int)*puVar46 < 0) goto code_r0x00402af9;
            bVar9 = (byte)puVar23;
            *(byte *)puVar23 = (byte)*puVar23 + bVar9;
            iVar15 = CONCAT31((int3)((uint)puVar23 >> 8),bVar9 + 2) + 0x9d7d + (uint)(0xfd < bVar9);
            bVar9 = (byte)puVar40 | (byte)*puVar40;
            uVar21 = *puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + bVar8;
            pcVar14 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x12') + 0x228b26
                               + *puVar49 + (uint)CARRY1((byte)uVar21,bVar8));
            cVar10 = bVar9 + (byte)*puVar18;
            puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),cVar10);
            if (SCARRY1(bVar9,(byte)*puVar18) == cVar10 < '\0') break;
            *pcVar14 = *pcVar14 + (char)pcVar14;
            cVar10 = (char)pcVar14 + '\x02';
            pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar10);
            bVar9 = POPCOUNT(cVar10);
            uVar51 = uVar50;
code_r0x00402b7a:
            puVar48 = puVar46;
            if ((bVar9 & 1) != 0) break;
            while( true ) {
              cVar10 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar10;
              uVar29 = (undefined3)((uint)pcVar14 >> 8);
              pcVar14 = (char *)CONCAT31(uVar29,cVar10 + '\x13');
              *(byte *)puVar18 = (byte)*puVar18 | (byte)puVar40;
              *(byte *)puVar49 = (byte)*puVar49 | (byte)puVar40;
              *puVar40 = (uint)(pcVar14 + *puVar40);
              uVar35 = (undefined2)((uint)puVar43 >> 0x10);
              uVar42 = SUB41(puVar43,0);
              cVar11 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + -0x5f);
              puVar43 = (uint *)CONCAT22(uVar35,CONCAT11(cVar11,uVar42));
              *pcVar14 = *pcVar14 + cVar10 + '\x13';
              piVar25 = (int *)CONCAT31(uVar29,cVar10 + -0x7a);
              uVar21 = *puVar40;
              *(byte *)puVar40 = (byte)*puVar40 + (char)puVar18;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar21,(char)puVar18) == (char)(byte)*puVar40 < '\0') break;
              *(char *)piVar25 = (char)*piVar25 + cVar10 + -0x7a;
              cVar44 = cVar10 + -0x78;
              piVar25 = (int *)CONCAT31(uVar29,cVar44);
              uVar4 = uVar51;
              if ((POPCOUNT(cVar44) & 1U) != 0) break;
              *(char *)piVar25 = (char)*piVar25 + cVar44;
              pcVar14 = (char *)CONCAT31(uVar29,cVar10 + -0x65);
              *puVar18 = *puVar18 | (uint)puVar40;
              *puVar49 = *puVar49 | (uint)puVar40;
              pbVar19 = (byte *)((int)puVar18 + -1);
              cVar11 = cVar11 + *(byte *)((int)puVar43 + -0x5e);
              puVar43 = (uint *)CONCAT22(uVar35,CONCAT11(cVar11,uVar42));
              *pcVar14 = *pcVar14 + cVar10 + -0x65;
              bVar9 = cVar10 + 10;
              puVar23 = (uint *)CONCAT31(uVar29,bVar9);
              bVar8 = (byte)pbVar19;
              *(byte *)puVar40 = (byte)*puVar40 + bVar8;
              puVar46 = puVar48 + (uint)bVar55 * -2 + 1;
              out(*puVar48,(short)puVar40);
              uVar21 = *puVar40;
              *(byte *)puVar40 = (byte)*puVar40 + bVar8;
              uVar1 = (uint)CARRY1((byte)uVar21,bVar8);
              uVar16 = *puVar40;
              uVar21 = *puVar40;
              pbVar24 = pbVar19 + uVar21 + uVar1;
              uVar6 = *puVar40;
              cRam130a0000 = cRam130a0000 - cVar11;
              uVar22 = *puVar40;
              pbVar45 = (byte *)((uint)pbVar45 | *puVar23);
              *(byte *)puVar23 = (char)*puVar23 + bVar9;
              puVar18 = (uint *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar24 >> 8) | bRam7d170243,
                                                  (char)pbVar24 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar19,uVar16) ||
                                                  CARRY4((uint)(pbVar19 + uVar21),uVar1))));
              bVar55 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar23 = (char)*puVar23 + bVar9;
              bVar54 = 0xfd < bVar9;
              pcVar14 = (char *)CONCAT31(uVar29,cVar10 + '\f');
              puVar40 = (uint *)((uint)puVar40 | uVar22);
code_r0x00402bd1:
              uVar16 = *puVar43;
              uVar21 = *puVar43;
              *puVar43 = (uint)((byte *)(uVar21 + (int)puVar18) + bVar54);
              bVar9 = POPCOUNT(*puVar43 & 0xff);
              uVar51 = in_SS;
              if ((SCARRY4(uVar16,(int)puVar18) !=
                  SCARRY4((int)(uVar21 + (int)puVar18),(uint)bVar54)) == (int)*puVar43 < 0)
              goto code_r0x00402b7a;
              cVar10 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar10;
              pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar10 + '\x02');
              if (SCARRY1(cVar10,'\x02') == (char)(cVar10 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar14 = *pcVar14 + (char)pcVar14;
                pcVar14 = (char *)(CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12') |
                                  *puVar40);
                *(byte *)puVar49 = (byte)*puVar49 - (char)puVar18;
                *pcVar14 = *pcVar14 + (char)pcVar14;
                puVar40 = (uint *)((int)puVar40 - *puVar46);
                bVar9 = (byte)puVar43 | (byte)((uint)puVar18 >> 8);
                cVar10 = *pcVar14;
                uVar29 = (undefined3)((uint)pcVar14 >> 8);
                pcVar14 = (char *)CONCAT31(uVar29,cVar10);
                *pcVar14 = *pcVar14 + cVar10;
                pcVar20 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                           CONCAT11((char)((uint)puVar43 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),
                                                                       bVar9) + -0x5b),bVar9));
                *pcVar14 = *pcVar14 + cVar10;
                bVar54 = false;
                pcVar14 = (char *)(CONCAT31(uVar29,cVar10 + '\x13') | *puVar40);
                do {
                  bVar8 = (byte)puVar18;
                  bVar9 = bVar8 + (byte)puVar46[(int)puVar49 * 2];
                  puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar9 + bVar54);
                  uVar21 = (uint)(CARRY1(bVar8,(byte)puVar46[(int)puVar49 * 2]) ||
                                 CARRY1(bVar9,bVar54));
                  pcVar26 = pcVar14 + 0x1b000019 + uVar21;
                  piVar27 = (int *)((int)puVar49 * 2 + 0x40000a5);
                  *piVar27 = (int)((int)puVar18 +
                                  (uint)((char *)0xe4ffffe6 < pcVar14 ||
                                        CARRY4((uint)(pcVar14 + 0x1b000019),uVar21)) + *piVar27);
                  puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(char)puVar40 + cRam00009d7d
                                            );
                  uVar29 = (undefined3)((uint)pcVar26 >> 8);
                  bVar9 = (char)pcVar26 + 0x12;
                  in_AF = 9 < (bVar9 & 0xf) | in_AF;
                  uVar21 = CONCAT31(uVar29,bVar9 + in_AF * -6) & 0xffffff0f;
                  pcVar14 = (char *)CONCAT22((short)(uVar21 >> 0x10),
                                             CONCAT11((char)((uint)pcVar26 >> 8) - in_AF,
                                                      (char)uVar21));
                  pbVar19 = (byte *)((uint)pbVar45 | *(uint *)CONCAT31(uVar29,bVar9));
                  while( true ) {
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    puVar48 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                               (byte)puVar40 | (byte)*puVar40);
                    puVar49 = (uint *)((uint)puVar49 | (uint)puVar46);
                    uVar21 = (uint)pcVar20 | (uint)puVar46;
                    pbVar45 = pbVar19 + 1;
                    uStackY_3c = (uint *)CONCAT22(uStackY_3c._2_2_,uVar50);
                    cVar10 = (char)(pcVar14 + 0x1b000019);
                    uVar29 = (undefined3)((uint)(pcVar14 + 0x1b000019) >> 8);
                    cVar11 = cVar10 + -0x13;
                    pcVar14 = (char *)CONCAT31(uVar29,cVar11);
                    uVar35 = (undefined2)(uVar21 >> 0x10);
                    cVar44 = (char)(uVar21 >> 8) + *(char *)(uVar21 - 0x5e);
                    puVar43 = (uint *)CONCAT22(uVar35,CONCAT11(cVar44,(byte)uVar21));
                    *pcVar14 = *pcVar14 + cVar11;
                    pcVar14 = (char *)(CONCAT31(uVar29,cVar10 + '\x19') | *puVar48);
                    bVar9 = (byte)pcVar14;
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      pbVar19 = (byte *)((int)puVar48 + (int)pcVar14);
                      bVar54 = CARRY1(*pbVar19,bVar9);
                      *pbVar19 = *pbVar19 + bVar9;
                      puVar40 = puVar48;
                      goto code_r0x00402bd1;
                    }
                    *pcVar14 = *pcVar14 + bVar9;
                    uVar29 = (undefined3)((uint)pcVar14 >> 8);
                    pcVar20 = (char *)CONCAT31(uVar29,bVar9 + 0x6f);
                    puVar40 = (uint *)((int)puVar48 + 1);
                    *pcVar20 = *pcVar20 + bVar9 + 0x6f;
                    bVar8 = (byte)uVar21 | (byte)((uint)pcVar14 >> 8);
                    pcVar14 = (char *)CONCAT31(uVar29,bVar9 + 0x5c);
                    cVar44 = cVar44 + *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),bVar8) + -0x5f);
                    puVar43 = (uint *)CONCAT22(uVar35,CONCAT11(cVar44,bVar8));
                    *pcVar14 = *pcVar14 + bVar9 + 0x5c;
                    pcVar14 = (char *)(CONCAT31(uVar29,bVar9 + 0x88) | *puVar40);
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)puVar18 >> 8);
                      uStackY_3c = (uint *)((uint)uStackY_3c._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    uVar29 = (undefined3)((uint)pcVar14 >> 8);
                    cVar10 = (char)pcVar14 + 'o';
                    puVar40 = (uint *)((int)puVar48 + 2);
                    *(char *)CONCAT31(uVar29,cVar10) = *(char *)CONCAT31(uVar29,cVar10) + cVar10;
                    pcVar20 = (char *)CONCAT31((int3)((uint)puVar43 >> 8),
                                               bVar8 | (byte)((uint)pcVar14 >> 8));
                    pcVar14 = (char *)(CONCAT31(uVar29,cVar10) | 2);
                    pbVar19[-0x62] = pbVar19[-0x62] + 1;
                    bVar9 = (byte)pcVar14;
                    *pcVar14 = *pcVar14 + bVar9;
                    bVar54 = 0xfd < bVar9;
                    cVar10 = bVar9 + 2;
                    pcVar14 = (char *)CONCAT31(uVar29,cVar10);
                    uVar52 = uVar50;
                    if (SCARRY1(bVar9,'\x02') != cVar10 < '\0') break;
                    *pcVar14 = *pcVar14 + cVar10;
                    bVar8 = bVar9 + 10;
                    pcVar14 = (char *)CONCAT31(uVar29,bVar8);
                    *pcVar14 = *pcVar14 - cVar44;
                    cVar11 = (char)puVar18;
                    *(byte *)puVar40 = *(byte *)puVar40 + cVar11;
                    pbVar19[-0x62] = pbVar19[-0x62] + 1;
                    *pcVar14 = *pcVar14 + bVar8;
                    cVar10 = bVar9 + 0xc;
                    pcVar14 = (char *)CONCAT31(uVar29,cVar10);
                    if (SCARRY1(bVar8,'\x02') == cVar10 < '\0') {
                      *pcVar14 = *pcVar14 + cVar10;
                      *(byte *)puVar18 = (byte)*puVar18 - cVar44;
                      *(byte *)puVar40 = *(byte *)puVar40 + cVar11;
                      cVar10 = (bVar9 + 0x13) - (byte)puVar18[0x13];
                      pcVar14 = (char *)CONCAT31(uVar29,cVar10);
                      *pcVar14 = *pcVar14 + cVar10;
                      pcVar26 = (char *)CONCAT31(uVar29,cVar10 + *pcVar14);
                      *pcVar26 = *pcVar26 + cVar10 + *pcVar14;
                      pcVar26 = pcVar26 + *puVar18;
                      *pcVar26 = *pcVar26 + (char)pcVar26;
                      LOCK();
                      pcVar14 = *(char **)pcVar26;
                      *(char **)pcVar26 = pcVar26;
                      UNLOCK();
                      *pcVar14 = *pcVar14 + (char)pcVar14;
                      pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)*puVar18);
                      *pbVar24 = *pbVar24 + (byte)*puVar18;
                      goto code_r0x00402c8d;
                    }
                    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),
                                               cVar11 + *pcVar20 + (0xfd < bVar8));
                    *(byte *)puVar49 = (byte)*puVar49 - cVar44;
                    pbVar19 = pbVar45;
                  }
                } while( true );
              }
              puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                         CONCAT11((char)((uint)puVar43 >> 8) +
                                                  *(byte *)((int)puVar43 + -99),(char)puVar43));
              puVar48 = puVar46;
            }
            *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
            puVar40 = (uint *)((int)puVar40 - *puVar48);
            puVar46 = puVar48;
            uVar51 = uVar50;
            uVar50 = uVar4;
          }
          *(byte *)puVar40 = (byte)*puVar40 + (char)puVar18;
          pcVar14 = pcVar14 + -0x7d160243;
        }
        pcVar14 = (char *)CONCAT31(uVar29,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar18;
    uVar21 = *puVar23;
    *(byte *)puVar23 = (byte)*puVar23 + (byte)puVar23;
    *puVar49 = (uint)((int)puVar40 + (uint)CARRY1((byte)uVar21,(byte)puVar23) + *puVar49);
    puVar47 = puVar46;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar12 = (char)puVar18;
      cVar33 = (char)((uint)puVar18 >> 8) + (char)((uint)pbVar24 >> 8);
      puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(cVar33,cVar12));
      cVar10 = (char)pbVar24;
      *pbVar24 = *pbVar24 + cVar10;
      pcVar14 = (char *)((int)pbVar24 * 2 + 0x1a10000);
      cVar44 = (char)((uint)pcVar20 >> 8);
      *pcVar14 = *pcVar14 + cVar44;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
      pbVar24[-0x47ffffff] = pbVar24[-0x47ffffff] + cVar44;
      *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
      bVar8 = (byte)puVar40;
      *(byte *)puVar49 = (byte)*puVar49 + bVar8;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + bVar8;
      *pbVar24 = *pbVar24 + cVar10;
      *puVar46 = (uint)(*puVar46 + (int)puVar46);
      uVar35 = (undefined2)((uint)pcVar20 >> 0x10);
      cVar44 = cVar44 + (byte)puVar46[(int)pcVar20];
      pcVar14 = (char *)CONCAT22(uVar35,CONCAT11(cVar44,(char)pcVar20));
      pcVar14[(int)pbVar24] = pcVar14[(int)pbVar24] + cVar10;
      *(byte *)puVar40 = *(byte *)puVar40 - cVar44;
      *(byte *)puVar40 = *(byte *)puVar40 + cVar12;
      uVar29 = (undefined3)((uint)pbVar24 >> 8);
      bVar9 = cVar10 - *pbVar24;
      *pcVar14 = *pcVar14 + bVar8;
      *(byte *)puVar40 = *(byte *)puVar40 ^ bVar9;
      *(byte *)puVar40 = *(byte *)puVar40 + bVar9;
      *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
      uVar21 = *puVar18;
      *(byte *)puVar18 = (byte)*puVar18 + bVar8;
      cVar11 = bVar9 + *(char *)CONCAT31(uVar29,bVar9) + CARRY1((byte)uVar21,bVar8);
      pcVar20 = (char *)CONCAT22(uVar35,CONCAT11(cVar44 + pbVar19[-0x60],(char)pcVar20));
      *(char *)CONCAT31(uVar29,cVar11) = *(char *)CONCAT31(uVar29,cVar11) + cVar11;
      cVar44 = cVar11 + '\x12';
      pbVar24 = (byte *)CONCAT31(uVar29,cVar44);
      cVar10 = *pcVar20;
      *pcVar20 = *pcVar20 + cVar44;
      if (SCARRY1(cVar10,cVar44) != *pcVar20 < '\0') break;
code_r0x00402c8d:
      cVar10 = (char)pbVar24;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
      *(byte *)puVar40 = *(byte *)puVar40 + cVar10;
      *pbVar24 = *pbVar24 + cVar10;
    }
    *pbVar24 = *pbVar24 + cVar44;
    pbVar24 = (byte *)CONCAT31(uVar29,cVar11 + '$');
    *pbVar24 = *pbVar24 + cVar33;
    bVar9 = *(byte *)puVar40;
    *(byte *)puVar40 = *(byte *)puVar40 + cVar12;
    uVar51 = uVar53;
  } while (SCARRY1(bVar9,cVar12) == (char)*(byte *)puVar40 < '\0');
  do {
    cVar10 = (char)pbVar24;
    *pbVar24 = *pbVar24 + cVar10;
    uVar29 = (undefined3)((uint)pbVar24 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar40;
    bVar8 = cVar10 + 0x24;
    cVar44 = (char)((uint)pcVar20 >> 8);
    pcVar20[-0x62] = pcVar20[-0x62] + cVar44;
    *(char *)CONCAT31(uVar29,bVar8) = *(char *)CONCAT31(uVar29,bVar8) + bVar8;
    bVar9 = cVar10 + 0x2fU + (byte)*puVar18;
    cVar11 = bVar9 + (0xf4 < bVar8);
    cVar10 = cVar11 + *(char *)CONCAT31(uVar29,cVar11) +
             (CARRY1(cVar10 + 0x2fU,(byte)*puVar18) || CARRY1(bVar9,0xf4 < bVar8));
    pcVar14 = (char *)CONCAT31(uVar29,cVar10);
    *pcVar14 = *pcVar14 - (char)puVar40;
    *pcVar14 = *pcVar14 + cVar10;
    pcVar26 = (char *)((int)puVar40 - *puVar40);
    *(byte *)(puVar46 + (int)pcVar20) = (byte)puVar46[(int)pcVar20] + cVar44;
    pcVar14[(int)pbVar45] = pcVar14[(int)pbVar45] + cVar10;
    *pcVar26 = *pcVar26 + (char)puVar18;
    pcVar14 = (char *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                               CONCAT11((char)((uint)pbVar24 >> 8) - *pcVar26,cVar10));
    uVar21 = *puVar49;
    *pcVar14 = *pcVar14 - (char)((uint)pcVar26 >> 8);
    *pcVar14 = *pcVar14 + cVar10;
    uStackY_3c = (uint *)CONCAT22(uStackY_3c._2_2_,uVar52);
    pbVar19 = (byte *)CONCAT22((short)((uint)pcVar20 >> 0x10),
                               CONCAT11(cVar44 - (byte)*puVar46,(char)pcVar20));
    pbVar45 = pbVar45 + *(int *)(pbVar19 + (int)puVar18);
    puVar48 = (uint *)CONCAT31((int3)((uint)pcVar26 >> 8),(char)pcVar26 + (byte)uVar21);
    while( true ) {
      puVar40 = puVar48;
      uVar35 = (undefined2)((uint)pbVar19 >> 0x10);
      bVar37 = (char)((uint)pbVar19 >> 8) + pbVar19[0x18];
      *pcVar14 = *pcVar14 + (char)pcVar14;
      pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
      cVar10 = (char)puVar18;
      *(byte *)puVar40 = (byte)*puVar40 + cVar10;
      uVar21 = *puVar46;
      bVar7 = (byte)((uint)puVar18 >> 8);
      bVar9 = *pbVar24;
      pbVar24 = pbVar24 + (uint)CARRY1(bVar7,*pbVar24) + *(int *)pbVar24;
      *(byte *)puVar40 = (byte)*puVar40 + cVar10;
      cVar11 = ((char)pbVar19 - (byte)uVar21) - (byte)*puVar46;
      bVar8 = *(byte *)((int)puVar49 + 0x1a);
      *pbVar24 = *pbVar24 + (char)pbVar24;
      puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                 CONCAT11(bVar7 + bVar9 + bVar8 | (byte)*puVar40,cVar10));
      pbVar24 = pbVar24 + *puVar40;
      if ((POPCOUNT((uint)pbVar24 & 0xff) & 1U) != 0) break;
      *pbVar24 = *pbVar24 + (char)pbVar24;
      bVar9 = (char)pbVar24 + 0x6f;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar9);
      pcVar20 = (char *)(CONCAT31((int3)(CONCAT22(uVar35,CONCAT11(bVar37,(char)pbVar19)) >> 8),
                                  cVar11) + -1);
      *pcVar14 = *pcVar14 + bVar9;
      *pcVar14 = *pcVar14 + bVar9;
      *pcVar20 = *pcVar20 + (byte)puVar40;
      *(byte *)((int)pcVar14 * 2) = *(byte *)((int)pcVar14 * 2) ^ bVar9;
      uVar3 = *(undefined6 *)pcVar14;
      uVar52 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar14 = (char *)uVar3;
      *pcVar14 = *pcVar14 + (char)uVar3;
      *(byte *)puVar46 = (byte)*puVar46 + (char)uVar3;
      pcVar14 = (char *)((uint)pcVar14 | 0x73110008);
      bVar37 = (byte)((uint)pcVar20 >> 8);
      *(byte *)puVar49 = (byte)*puVar49 - bVar37;
      *(byte *)puVar40 = (byte)*puVar40 + cVar10;
      puVar48 = puVar46 + (uint)bVar55 * -2 + 1;
      out(*puVar46,(short)puVar40);
      *pcVar14 = *pcVar14;
      cVar10 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar10;
      bVar9 = pbVar45[-0x5a];
      uVar35 = (undefined2)((uint)pcVar20 >> 0x10);
      cVar11 = (char)pcVar20;
      *pcVar14 = *pcVar14 + cVar10;
      cVar10 = cVar10 + '\x02';
      uVar21 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar10);
      puVar18 = (uint *)(uVar21 | 0x73110000);
      puVar46 = puVar48 + (uint)bVar55 * -2 + 1;
      out(*puVar48,(short)puVar40);
      *(byte *)puVar18 = (byte)*puVar18;
      bVar7 = (byte)puVar40 | (byte)*puVar49;
      puVar48 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar7);
      *(byte *)puVar18 = (byte)*puVar18 + cVar10;
      pcVar14 = (char *)(uVar21 | 0x7b1f1609);
      bVar55 = (uVar51 & 0x400) != 0;
      *(uint *)((int)puVar49 + -0x7d) = *(uint *)((int)puVar49 + -0x7d) | (uint)pbVar45;
      bVar8 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar8;
      bVar37 = bVar37 | bVar9 | *(byte *)((int)puVar46 + 0x19);
      pbVar19 = (byte *)CONCAT22(uVar35,CONCAT11(bVar37,cVar11));
      *pcVar14 = *pcVar14 + bVar8;
      uVar29 = (undefined3)((uint)pcVar14 >> 8);
      puVar46[(int)puVar49 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar8) + puVar46[(int)puVar49 * 2]);
      bVar9 = bVar8 + 0x2d ^ *(byte *)CONCAT31(uVar29,bVar8 + 0x2d);
      pcVar14 = (char *)CONCAT31(uVar29,bVar9);
      uVar21 = *puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + bVar9;
      uVar51 = uVar52;
      if (CARRY1((byte)uVar21,bVar9)) {
        *pcVar14 = *pcVar14 + bVar9;
        bVar9 = bVar9 | pcVar14[0x4000019];
        pcVar14 = (char *)CONCAT31(uVar29,bVar9);
        if ('\0' < (char)bVar9) {
          *pcVar14 = *pcVar14 + bVar9;
          piVar27 = (int *)CONCAT31(uVar29,bVar9 + 0x28);
          *piVar27 = (int)piVar27 + (uint)(0xd7 < bVar9) + *piVar27;
          bVar13 = (byte)((uint6)uVar3 >> 8);
          *pbVar19 = *pbVar19 + bVar13;
          uVar36 = CONCAT11((byte)((uint)puVar40 >> 8) | bVar37,bVar7);
          puVar48 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),uVar36);
          uStackY_3c = (uint *)CONCAT22(uStackY_3c._2_2_,uVar52);
          bVar7 = in(uVar36);
          pbVar24 = (byte *)CONCAT31(uVar29,bVar7);
          bVar9 = *pbVar24;
          bVar54 = SCARRY1(*pbVar24,bVar7);
          *pbVar24 = *pbVar24 + bVar7;
          bVar8 = *pbVar24;
          puVar43 = puVar46;
          in_SS = uVar52;
          if (!CARRY1(bVar9,bVar7)) goto code_r0x00402e19;
          *pbVar24 = *pbVar24 + bVar7;
          bVar13 = bVar13 | *pbVar24;
          puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar13,cVar10));
          pcVar14 = (char *)CONCAT31(uVar29,bVar7 + *pbVar24);
          *pbVar19 = *pbVar19 + bVar13;
        }
        uVar29 = (undefined3)((uint)pcVar14 >> 8);
        bVar8 = (byte)pcVar14 | (byte)*puVar48;
        pbVar24 = (byte *)CONCAT31(uVar29,bVar8);
        puVar43 = puVar46 + (uint)bVar55 * -2 + 1;
        out(*puVar46,(short)puVar48);
        LOCK();
        bVar9 = *pbVar24;
        *pbVar24 = bVar8;
        UNLOCK();
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar18;
        piVar27 = (int *)(CONCAT31(uVar29,bVar9) + -0x1b7e07);
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar18;
        iVar15 = (int)puVar18 - *(int *)pbVar19;
        bVar9 = *(byte *)((int)puVar49 + -0x7a);
        uVar36 = (undefined2)((uint)iVar15 >> 0x10);
        *(char *)piVar27 = *(char *)piVar27 + (char)piVar27;
        bVar8 = (char)((uint)iVar15 >> 8) + bVar9 | *(byte *)((int)puVar49 + 0x17);
        *(char *)piVar27 = *(char *)piVar27 + (char)piVar27;
        uVar29 = (undefined3)(CONCAT22(uVar36,CONCAT11(bVar8,(byte)iVar15)) >> 8);
        bVar9 = (byte)iVar15 | *pbVar19;
        puVar18 = (uint *)CONCAT31(uVar29,bVar9);
        pbVar24 = (byte *)((int)piVar27 + *piVar27);
        puVar46 = puVar43;
        if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e0a;
        *(byte *)puVar18 = (byte)*puVar18 + bVar9;
        *(byte **)pbVar19 = (byte *)(*(int *)pbVar19 + (int)puVar48);
        piVar27 = (int *)CONCAT31(uVar29,bVar9 + 0x27);
        puVar18 = (uint *)CONCAT22(uVar36,CONCAT11(bVar8 + *(byte *)((int)puVar49 + -0x79),bVar9));
        *(byte *)piVar27 = (char)*piVar27 + bVar9 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar20 = (char *)CONCAT22(uVar35,CONCAT11(bVar37 | pbVar45[-0x62],cVar11));
  } while( true );
code_r0x00402dff:
  pbVar24 = (byte *)CONCAT22((short)((uint)piVar27 >> 0x10),
                             CONCAT11((byte)((uint)piVar27 >> 8) |
                                      *(byte *)((int)puVar48 + 0x2170411),(byte)piVar27));
  puVar46 = puVar43 + (uint)bVar55 * -2 + 1;
  out(*puVar43,(short)puVar48);
  *pbVar24 = (byte)piVar27;
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar18;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar24;
  *pbVar24 = *pbVar24 - cVar11;
  *pbVar24 = *pbVar24 + (char)pbVar24;
  bVar54 = false;
  bVar8 = (byte)((uint)puVar18 >> 8) | bRam052b0603;
  puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar8,(char)puVar18));
  puVar43 = puVar46;
code_r0x00402e19:
  if (bVar8 == 0 || bVar54 != (char)bVar8 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar24;
  *pbVar24 = *pbVar24 + cRam89280411;
  piVar27 = (int *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                            CONCAT11((byte)((uint)pbVar24 >> 8) |
                                     *(byte *)((int)puVar48 + 0x7190411),cRam89280411));
  *(char *)piVar27 = (char)*piVar27 + cRam89280411;
  cVar10 = (char)puVar18;
  puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                             CONCAT11((byte)((uint)puVar18 >> 8) | (byte)*puVar48,cVar10));
  puVar43 = (uint *)((int)puVar43 + *piVar27);
  pbVar24 = (byte *)((int)piVar27 + *piVar27);
  bVar8 = (byte)pbVar24;
  *pbVar24 = *pbVar24 + bVar8;
  *(byte *)puVar43 = (byte)*puVar43 + cVar10;
  bVar9 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar8;
  *(byte **)pbVar24 = pbVar45 + (uint)CARRY1(bVar9,bVar8) + *(int *)pbVar24;
  piVar27 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),*pbVar24);
  *(byte *)puVar48 = (byte)*puVar48 + cVar10;
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(byte)puVar48 | (byte)*puVar48);
  pbVar24 = (byte *)((int)puVar46 + -0x43);
  *pbVar24 = *pbVar24 + (char)((uint)puVar48 >> 8);
  puVar48 = puVar46;
  puVar46 = puVar49;
  uVar51 = uVar50;
code_r0x00402e42:
  uVar50 = in_SS;
  puVar49 = puVar46;
  in_SS = uVar50;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e6e;
  iVar15 = *(int *)((int)piVar27 + *piVar27);
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar18;
  piVar27 = (int *)(iVar15 + -0x8c6f);
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | *(byte *)((int)puVar48 + -0x3f),
                                      (char)puVar48));
  pbVar39 = (byte *)((int)piVar27 + *piVar27);
  pbVar24 = pbVar39;
  puVar49 = uStackY_3c;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar39 = *pbVar39 + (char)pbVar39;
  puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                             CONCAT11((byte)((uint)puVar18 >> 8) | (byte)*puVar48,(char)puVar18));
  puVar46 = puVar43 + (uint)bVar55 * -2 + 1;
  out(*puVar43,(short)puVar48);
  puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(char)puVar48 + (byte)*puVar49);
  puVar43 = puVar46 + (uint)bVar55 * -2 + 1;
  out(*puVar46,(short)puVar48);
  uVar51 = uVar50;
  in_SS = uVar52;
code_r0x00402e6e:
  uVar50 = uVar51;
  uVar29 = (undefined3)((uint)puVar48 >> 8);
  cVar10 = (char)puVar48 + (byte)*puVar49;
  puVar46 = puVar43 + (uint)bVar55 * -2 + 1;
  out(*puVar43,(short)CONCAT31(uVar29,cVar10));
  puVar48 = (uint *)CONCAT31(uVar29,cVar10 + (byte)*puVar49);
  puVar43 = puVar46 + (uint)bVar55 * -2 + 1;
  out(*puVar46,(short)puVar48);
  pbVar24 = (byte *)0x0;
  puVar46 = puVar49;
code_r0x00402e81:
  puVar49 = puVar46;
  bVar8 = (char)pbVar24 - *pbVar24;
  iVar15 = CONCAT31((int3)((uint)pbVar24 >> 8),bVar8);
  *pbVar19 = *pbVar19 + (char)puVar48;
  pbVar39 = (byte *)(iVar15 * 2);
  *pbVar39 = *pbVar39 ^ bVar8;
  pbVar39 = (byte *)(int)(short)iVar15;
  *pbVar39 = *pbVar39 + bVar8;
  *(byte *)puVar49 = (byte)*puVar49 + (byte)puVar18;
  bVar9 = *pbVar39;
  *pbVar39 = *pbVar39 + bVar8;
  *(byte **)(pbVar19 + -0x73) =
       (byte *)((int)puVar43 + (uint)CARRY1(bVar9,bVar8) + *(int *)(pbVar19 + -0x73));
  *pbVar39 = *pbVar39 + bVar8;
  bVar9 = (byte)puVar18 | (byte)*puVar48;
  puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar9);
  puVar46 = puVar43;
  if ((char)bVar9 < '\x01') goto code_r0x00402eb4;
  *pbVar39 = *pbVar39 + bVar8;
  pbVar24 = (byte *)CONCAT31((int3)(char)((uint)pbVar24 >> 8),bVar8 + 0x2d);
  puVar43[(int)puVar49 * 2] =
       (uint)((int)puVar48 + (uint)(0xd2 < bVar8) + puVar43[(int)puVar49 * 2]);
  pbStackY_58 = (byte *)CONCAT22(pbStackY_58._2_2_,uVar52);
  do {
    uVar21 = *puVar43;
    bVar9 = (byte)pbVar24;
    *(byte *)puVar43 = (byte)*puVar43 + bVar9;
    if (!CARRY1((byte)uVar21,bVar9)) break;
    *pbVar24 = *pbVar24 + bVar9;
    bVar9 = bVar9 | pbVar24[0x400001a];
    pbVar39 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar9);
    if ((char)bVar9 < '\x01') {
code_r0x00402ecc:
      *pbVar39 = *pbVar39 + (byte)pbVar39;
      uVar29 = (undefined3)((uint)pbVar39 >> 8);
      bVar9 = (byte)pbVar39 | pbVar39[0x400001b];
      pcVar14 = (char *)CONCAT31(uVar29,bVar9);
      if ((char)bVar9 < '\x01') {
        uVar21 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar18;
        *(char *)((int)pcVar14 * 2) =
             *(char *)((int)pcVar14 * 2) - CARRY1((byte)uVar21,(byte)puVar18);
        bVar54 = 0x81 < bVar9;
        bVar9 = bVar9 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar39 = *pbVar39 + bVar9;
      puVar46 = puVar43;
code_r0x00402eb4:
      uVar29 = (undefined3)((uint)pbVar39 >> 8);
      bVar9 = (char)pbVar39 + 0x6f;
      pcVar14 = (char *)CONCAT31(uVar29,bVar9);
      *(byte **)pcVar14 = pbStackY_58;
      uVar21 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (char)puVar18;
      pbStackY_58 = (byte *)CONCAT22(pbStackY_58._2_2_,uVar52);
      uVar53 = uVar52;
      if ((byte)*puVar48 != 0 && SCARRY1((byte)uVar21,(char)puVar18) == (char)(byte)*puVar48 < '\0')
      {
        *pcVar14 = *pcVar14 + bVar9;
        bVar8 = (char)pbVar39 + 0x9c;
        pbVar39 = (byte *)CONCAT31(uVar29,bVar8);
        puVar46[(int)puVar49 * 2] =
             (uint)((int)puVar48 + (uint)(0xd2 < bVar9) + puVar46[(int)puVar49 * 2]);
        pbStackY_58 = (byte *)CONCAT22(pbStackY_58._2_2_,uVar52);
        uVar21 = *puVar46;
        *(byte *)puVar46 = (byte)*puVar46 + bVar8;
        puVar43 = puVar46;
        if (CARRY1((byte)uVar21,bVar8)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar43 = puVar46 + (uint)bVar55 * -2 + 1;
      out(*puVar46,(short)puVar48);
    }
    cVar10 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar10;
    uVar29 = (undefined3)((uint)pcVar14 >> 8);
    bVar9 = cVar10 + 0x6f;
    pcVar14 = (char *)CONCAT31(uVar29,bVar9);
    *(byte **)pcVar14 = pbStackY_58;
    uVar21 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar18;
    pbStackY_58 = (byte *)CONCAT22(pbStackY_58._2_2_,uVar52);
    *(byte *)(puVar43 + 7) = ((byte)puVar43[7] - bVar37) - CARRY1((byte)uVar21,(byte)puVar18);
    *pcVar14 = *pcVar14 + bVar9;
    bVar8 = cVar10 + 0x9c;
    pcVar14 = (char *)CONCAT31(uVar29,bVar8);
    puVar43[(int)puVar49 * 2] =
         (uint)((int)puVar48 + (uint)(0xd2 < bVar9) + puVar43[(int)puVar49 * 2]);
    uVar21 = *puVar43;
    *(byte *)puVar43 = (byte)*puVar43 + bVar8;
    if (!CARRY1((byte)uVar21,bVar8)) goto code_r0x00402e7e;
    *pcVar14 = *pcVar14 + bVar8;
    bVar8 = bVar8 | pcVar14[0x400001c];
    pbVar24 = (byte *)CONCAT31(uVar29,bVar8);
    in_SS = uVar52;
    if ((char)bVar8 < '\x01') goto code_r0x00402f16;
    *pbVar24 = *pbVar24 + bVar8;
    pcVar14 = (char *)CONCAT31(uVar29,bVar8 + 0x6f);
    while( true ) {
      *(byte **)pcVar14 = pbStackY_58;
      uVar21 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar18;
      *(uint *)((int)puVar43 + 0x1d) =
           (*(int *)((int)puVar43 + 0x1d) - (int)puVar49) - (uint)CARRY1((byte)uVar21,(byte)puVar18)
      ;
      bVar9 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar9;
      bVar8 = bVar9 + 0x2d;
      pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
      puVar43[(int)puVar49 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar9) + puVar43[(int)puVar49 * 2]);
      pbStackY_58 = (byte *)CONCAT22((short)((uint)pbStackY_58 >> 0x10),uVar52);
      uVar21 = *puVar43;
      *(byte *)puVar43 = (byte)*puVar43 + bVar8;
      if (!CARRY1((byte)uVar21,bVar8)) break;
      *pbVar24 = *pbVar24 + bVar8;
code_r0x00402f16:
      bVar9 = (byte)pbVar24 | pbVar24[0x400001d];
      puVar46 = (uint *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar9);
      pbVar24 = pbVar45;
      if ((char)bVar9 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        pbVar45 = pbVar24;
        *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
        uVar29 = (undefined3)((uint)puVar46 >> 8);
        cVar10 = (char)puVar46 + 'o';
        puVar40 = (uint *)CONCAT31(uVar29,cVar10);
        *puVar40 = (uint)pbStackY_58;
        cVar44 = (char)puVar18;
        *(byte *)puVar48 = (byte)*puVar48 + cVar44;
        pbStackY_58 = (byte *)CONCAT22(pbStackY_58._2_2_,uVar52);
        bVar9 = (byte)((uint)puVar48 >> 8);
        bVar54 = bVar9 < (byte)*puVar43;
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                   CONCAT11(bVar9 - (byte)*puVar43,(char)puVar48));
        if (bVar54) break;
        bVar54 = CARRY4((uint)puVar40,*puVar40);
        puVar46 = (uint *)((int)puVar40 + *puVar40);
        if (!SCARRY4((int)puVar40,*puVar40)) {
          bVar54 = CARRY4((uint)pbVar45,*puVar46);
          pbVar45 = pbVar45 + *puVar46;
        }
        *puVar46 = (*puVar46 - (int)puVar46) - (uint)bVar54;
        *(byte *)puVar48 = (byte)*puVar48 + cVar44;
        puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                   CONCAT11((char)((uint)puVar18 >> 8) + (byte)*puVar48,
                                            cVar44 - (byte)*puVar48));
        *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
code_r0x00402f3b:
        cVar44 = (char)puVar48;
        *pbVar19 = *pbVar19 + cVar44;
        bVar9 = (byte)puVar46;
        *(byte *)((int)puVar46 * 2) = *(byte *)((int)puVar46 * 2) ^ bVar9;
        *(byte *)puVar46 = (byte)*puVar46 + bVar9;
        *(byte *)puVar46 = (byte)*puVar46 + cVar44;
        uVar21 = *puVar46;
        *(byte *)puVar46 = (byte)*puVar46 + bVar9;
        *puVar48 = (uint)((int)puVar46 + (uint)CARRY1((byte)uVar21,bVar9) + *puVar48);
        pcVar14 = (char *)((uint)puVar46 | *puVar49);
        uVar29 = (undefined3)((uint)pcVar14 >> 8);
        cVar10 = (char)pcVar14 + *pcVar14;
        pcVar14 = (char *)CONCAT31(uVar29,cVar10);
        *pcVar14 = *pcVar14 + cVar10;
        cVar10 = cVar10 + *pcVar14;
        piVar27 = (int *)CONCAT31(uVar29,cVar10);
        *(char *)piVar27 = (char)*piVar27 + cVar10;
        iVar15 = LocalDescriptorTableRegister();
        *piVar27 = iVar15;
        bVar9 = *pbVar19;
        bVar34 = (byte)((uint)puVar18 >> 8);
        *pbVar19 = *pbVar19 + bVar34;
        iVar15 = *piVar27;
        uVar36 = (undefined2)((uint)puVar18 >> 0x10);
        bVar13 = (byte)puVar18;
        *(byte *)puVar43 = (byte)*puVar43 + cVar10;
        puVar46 = puVar43 + (uint)bVar55 * -2 + 1;
        out(*puVar43,(short)puVar48);
        *(byte *)puVar46 = (byte)*puVar46 + cVar10;
        bVar8 = *pbVar19;
        *(byte *)puVar48 = (byte)*puVar48 - bVar37;
        *(byte *)puVar46 = (byte)*puVar46 + cVar10;
        puVar40 = puVar46 + (uint)bVar55 * -2 + 1;
        out(*puVar46,(short)puVar48);
        *(byte *)puVar40 = (byte)*puVar40 + cVar10;
        bVar7 = *pbVar19;
        *(uint *)((int)puVar48 + -0x23) = *(uint *)((int)puVar48 + -0x23) & (uint)puVar40;
        puVar28 = (ushort *)((int)piVar27 + *piVar27);
        if (!SCARRY4((int)piVar27,*piVar27)) {
          *puVar28 = uVar53;
        }
        *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
        uVar38 = CONCAT11((char)((uint)puVar48 >> 8) + *(byte *)((int)puVar48 + -0x15),cVar44);
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),uVar38);
        puVar46 = (uint *)((int)puVar28 + *(int *)puVar28);
        if (!SCARRY4((int)puVar28,*(int *)puVar28)) {
          *(ushort *)puVar46 = uVar53;
        }
        cVar10 = (char)puVar46;
        *(byte *)puVar46 = (byte)*puVar46 + cVar10;
        cVar12 = ((bVar34 - (char)iVar15) - CARRY1(bVar9,bVar34) | bVar8 | bVar7) + (byte)*puVar46;
        puVar18 = (uint *)CONCAT22(uVar36,CONCAT11(cVar12,bVar13));
        uVar21 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + bVar13;
        if (CARRY1((byte)uVar21,bVar13)) {
          *(byte *)puVar46 = (byte)*puVar46 + cVar10;
          bVar9 = *(byte *)((int)puVar48 + 6);
          *(byte *)puVar48 = (byte)*puVar48 + bVar13;
          bVar8 = (cVar12 - (byte)*puVar40) + cRam14730307;
          *(byte *)puVar46 = (byte)*puVar46 + cVar10;
          bVar9 = bVar37 | bVar9 | *(byte *)((int)puVar48 + 0x2a);
          uVar21 = *puVar46;
          pbVar19 = (byte *)((int)puVar46 + (uint)CARRY1(bVar8,(byte)*puVar46) + *puVar46);
          *(byte *)puVar48 = (byte)*puVar48 + bVar13;
          cVar10 = cVar11 - (byte)*puVar40;
          cVar11 = bVar9 + *(char *)(CONCAT31((int3)(CONCAT22(uVar35,CONCAT11(bVar9,cVar11)) >> 8),
                                              cVar10) + 0x1e);
          *pbVar19 = *pbVar19 + (char)pbVar19;
          uVar29 = (undefined3)((uint)pbVar19 >> 8);
          bVar9 = (char)pbVar19 + 0x2aU & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
          pcVar14 = (char *)CONCAT31(uVar29,bVar9 + 0x2a);
          cVar11 = cVar11 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar11,cVar10)) + 0x1f);
          *pcVar14 = *pcVar14 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
          pcVar14 = (char *)CONCAT31(uVar29,bVar9 + 0x2a);
          cVar11 = cVar11 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar11,cVar10)) + 0x20);
          *pcVar14 = *pcVar14 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
          pcVar14 = (char *)CONCAT31(uVar29,bVar9 + 0x2a);
          cVar11 = cVar11 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar11,cVar10)) + 0x21);
          *pcVar14 = *pcVar14 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
          pcVar14 = (char *)CONCAT31(uVar29,bVar9 + 0x2a);
          cVar11 = cVar11 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar11,cVar10)) + 0x22);
          *pcVar14 = *pcVar14 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
          pcVar14 = (char *)CONCAT31(uVar29,bVar9 + 0x2a);
          bVar8 = bVar8 + (byte)uVar21 + *pcVar14;
          uVar32 = CONCAT22(uVar36,CONCAT11(bVar8,bVar13));
          cVar11 = cVar11 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar11,cVar10)) + 0x25);
          *pcVar14 = *pcVar14 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
          pcVar14 = (char *)CONCAT31(uVar29,bVar9 + 0x2a);
          pcVar20 = (char *)CONCAT22(uVar35,CONCAT11(cVar11 + *(char *)(CONCAT22(uVar35,CONCAT11(
                                                  cVar11,cVar10)) + 0x26),cVar10));
          *pcVar14 = *pcVar14 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
          cVar10 = bVar9 + 0x2a;
          pcVar14 = (char *)CONCAT31(uVar29,cVar10);
          if ((POPCOUNT(cVar10) & 1U) == 0) {
            *pcVar14 = *pcVar14 + cVar10;
            pbVar19 = (byte *)(CONCAT31(uVar29,bVar9 + 0x4f) + -0x33282610);
            bVar9 = *pbVar19;
            bVar7 = (byte)pbVar19;
            *pbVar19 = *pbVar19 + bVar7;
            uVar29 = (undefined3)((uint)pbVar19 >> 8);
            if (!CARRY1(bVar9,bVar7)) {
              if (!SCARRY1(bVar7,'\0')) {
                *pbVar19 = *pbVar19 + bVar7;
                uVar32 = CONCAT22(uVar36,CONCAT11(bVar8 | (byte)*puVar48,bVar13));
                bVar7 = bVar7 & (byte)*puVar48;
                *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
                pcVar14 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar14 = (char *)CONCAT31(uVar29,bVar7 + *pcVar20);
              if (SCARRY1(bVar7,*pcVar20) != (char)(bVar7 + *pcVar20) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar9 = bVar7 + *pcVar20;
            pbVar19 = (byte *)CONCAT31(uVar29,bVar9);
            if (SCARRY1(bVar7,*pcVar20) == (char)bVar9 < '\0') {
              pcVar14 = (char *)CONCAT22(uVar36,CONCAT11(bVar8 | (byte)*puVar48,bVar13));
              *pcVar20 = *pcVar20 + cVar44;
              *(byte *)puVar48 = (byte)*puVar48 ^ bVar9;
              *(char *)((int)pbVar19 * 2) = *(char *)((int)pbVar19 * 2) + bVar9;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar14 = *pcVar14 + (char)pcVar14;
            uVar29 = (undefined3)((uint)pcVar14 >> 8);
            bVar9 = (char)pcVar14 + 0x2aU & (byte)*puVar48;
            *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
            pcVar14 = (char *)CONCAT31(uVar29,bVar9 + 0x2a);
            *pcVar14 = *pcVar14 + bVar9 + 0x2a;
            pcVar14 = (char *)CONCAT31(uVar29,bVar9 + 0x54 & (byte)*puVar48);
code_r0x00403072:
            cVar10 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar10;
            uVar29 = (undefined3)((uint)pcVar14 >> 8);
            pcVar14 = (char *)CONCAT31(uVar29,cVar10 + '*');
            *pcVar14 = *pcVar14 + cVar10 + '*';
            bVar9 = cVar10 + 0x54U & (byte)*puVar48;
            *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
            pcStackY_90 = (char *)CONCAT22(pcStackY_90._2_2_,uVar50);
            uVar32 = CONCAT22((short)((uint)uVar32 >> 0x10),
                              CONCAT11((char)((uint)uVar32 >> 8) +
                                       *(char *)CONCAT31(uVar29,bVar9 + 0x2a),(char)uVar32));
            *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar44;
            pcVar14 = pcStackY_90;
code_r0x0040309a:
            cVar10 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar10;
            pcStackY_90 = (char *)CONCAT22(pcStackY_90._2_2_,uVar52);
            *pcVar14 = *pcVar14 + cVar10;
            pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar10 + 0x2aU & (byte)*puVar48);
          }
          cVar10 = (char)pbVar19;
          *pbVar19 = *pbVar19 + cVar10;
          uVar29 = (undefined3)((uint)pbVar19 >> 8);
          cVar11 = cVar10 + '*';
          pcVar14 = (char *)CONCAT31(uVar29,cVar11);
          *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar44;
          *pcVar14 = *pcVar14 + cVar11;
          cVar12 = (char)pcStackY_90 - (byte)*puVar40;
          pcVar20 = (char *)CONCAT22((short)((uint)pcStackY_90 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_90 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_90 >> 8),
                                                                 cVar12) + 0x34),cVar12));
          *pcVar14 = *pcVar14 + cVar11;
          bVar9 = cVar10 + 0x54U & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar9) = *(char *)CONCAT31(uVar29,bVar9) + bVar9;
          pbVar19 = (byte *)CONCAT31(uVar29,bVar9 + 0x2a);
          bVar9 = (byte)((uint)uVar32 >> 8);
          pcVar14 = (char *)CONCAT22((short)((uint)uVar32 >> 0x10),
                                     CONCAT11(bVar9 + *pbVar19,(char)uVar32));
          pbVar19 = pbVar19 + (uint)CARRY1(bVar9,*pbVar19) + *(int *)pbVar19;
          *(byte *)puVar48 = (byte)*puVar48 + (char)uVar32;
          uVar29 = (undefined3)((uint)pbVar19 >> 8);
          cVar10 = (byte)pbVar19 - *pbVar19;
          piVar27 = (int *)CONCAT31(uVar29,cVar10);
          puVar40 = (uint *)((int)puVar40 + (uint)((byte)pbVar19 < *pbVar19) + *piVar27);
          cVar10 = cVar10 + (char)*piVar27;
          pbVar19 = (byte *)CONCAT31(uVar29,cVar10);
          *pbVar19 = *pbVar19 + cVar10;
code_r0x004030df:
          *pcVar14 = *pcVar14 + cVar44;
          bVar9 = *pbVar19;
          bVar8 = (byte)pbVar19;
          *pbVar19 = *pbVar19 + bVar8;
          *(byte **)(pcVar20 + -0x41) =
               (byte *)((int)puVar40 + (uint)CARRY1(bVar9,bVar8) + *(int *)(pcVar20 + -0x41));
          *pbVar19 = *pbVar19 + bVar8;
          uVar29 = (undefined3)((uint)pbVar19 >> 8);
          bVar8 = bVar8 | (byte)*puVar40;
          *(char *)CONCAT31(uVar29,bVar8) = *(char *)CONCAT31(uVar29,bVar8) + bVar8;
          pcVar14 = (char *)CONCAT31(uVar29,bVar8 + 0x7b);
          *pcVar14 = *pcVar14 + bVar8 + 0x7b;
          pbVar19 = (byte *)((int)puVar40 + CONCAT31(uVar29,bVar8 - 8) + -1);
          *pbVar19 = *pbVar19 + (bVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar43 = puVar40 + (uint)bVar55 * -2 + 1;
        out(*puVar40,uVar38);
        pbVar24 = pbVar45 + 1;
        pbStackY_58 = pbVar45;
      }
      bVar9 = cVar10 - bVar54;
      pbVar24 = (byte *)((int)puVar43 + (int)puVar49 * 2);
      bVar54 = CARRY1(*pbVar24,bVar9);
      *pbVar24 = *pbVar24 + bVar9;
code_r0x00402ef9:
      pcVar14 = (char *)CONCAT31(uVar29,bVar9 - bVar54);
      pbVar24 = (byte *)((int)puVar49 + (int)pbVar45 * 2);
      *pbVar24 = *pbVar24 + (bVar9 - bVar54);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar48;
  puVar46 = puVar48 + 0x2828000;
  bVar9 = (byte)puVar18;
  bVar54 = (byte)*puVar46 < bVar9;
  *(byte *)puVar46 = (byte)*puVar46 - bVar9;
  bVar9 = (byte)pbVar24 + *pbVar24;
  piVar27 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar9 + bVar54);
  puVar46 = puVar49;
  uVar51 = uVar50;
  if (CARRY1((byte)pbVar24,*pbVar24) || CARRY1(bVar9,bVar54)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar14 = *pcVar14 + bVar8;
  uVar51 = uVar50;
  in_SS = uVar52;
  goto code_r0x00402e6e;
}


