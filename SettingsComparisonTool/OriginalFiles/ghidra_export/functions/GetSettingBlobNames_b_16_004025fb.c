/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004025fb
 * Raw Name    : <GetSettingBlobNames>b__16
 * Demangled   : <GetSettingBlobNames>b__16
 * Prototype   : bool <GetSettingBlobNames>b__16(int key, int param_2, byte * param_3, int param_4)
 * Local Vars  : puVar21, piVar22, pcVar23, puVar24, uVar25, iVar26, extraout_ECX, extraout_ECX_00, pbVar27, extraout_ECX_01, extraout_ECX_02, uVar28, cVar29, bVar30, bVar31, uVar32, uVar33, uVar34, pbVar35, pbVar36, puVar37, uVar38, uVar39, unaff_EBX, param_2, puVar40, cVar41, param_3, param_4, unaff_EBP, pbVar42, unaff_ESI, puVar43, puVar44, unaff_EDI, puVar45, puVar46, in_ES, uVar47, uVar48, in_CS, uVar49, in_SS, in_DS, key, uVar50, in_GS_OFFSET, bVar51, in_AF, in_TF, in_IF, bVar52, bVar53, in_NT, uVar54, uVar55, in_stack_fffffff0, pcStackY_7c, pbStackY_44, puStackY_30, puStackY_2c, uStackY_28, uStack_8, uStack_4, uStack_2, uStack_1, uVar1, iVar2, pcVar3, uVar4, uVar5, uVar6, bVar7, bVar8, cVar9, cVar10, bVar11, cVar12, bVar13, in_EAX, pcVar14, iVar15, piVar16, puVar17, pcVar18, uVar19, uVar20
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025fc) overlaps instruction at (ram,0x004025fb)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

bool __fastcall <GetSettingBlobNames>b__16(int key,int param_2,byte *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined6 uVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  char cVar12;
  byte bVar13;
  undefined3 uVar25;
  char *pcVar14;
  byte *in_EAX;
  int iVar15;
  int *piVar16;
  int3 iVar26;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int *piVar22;
  char *pcVar23;
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
  undefined2 uVar34;
  byte *pbVar35;
  byte *pbVar36;
  undefined3 uVar38;
  uint *puVar37;
  undefined1 uVar39;
  char cVar41;
  byte *unaff_EBX;
  uint *puVar40;
  byte *unaff_EBP;
  byte *pbVar42;
  uint *unaff_ESI;
  uint *puVar43;
  uint *puVar44;
  int *unaff_EDI;
  uint *puVar45;
  uint *puVar46;
  ushort in_ES;
  ushort uVar47;
  ushort uVar48;
  ushort in_CS;
  ushort uVar49;
  ushort in_SS;
  ushort in_DS;
  ushort uVar50;
  int in_GS_OFFSET;
  bool bVar51;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar52;
  bool bVar53;
  byte in_NT;
  uint uVar54;
  undefined8 uVar55;
  char *pcStackY_7c;
  byte *pbStackY_44;
  uint *puStackY_30;
  uint *puStackY_2c;
  undefined4 uStackY_28;
  undefined4 in_stack_fffffff0;
  ushort uStack_8;
  ushort uStack_4;
  undefined1 uStack_2;
  undefined1 uStack_1;
  uint *puVar17;
  
  bVar52 = false;
  do {
                    /* .NET CLR Managed Code */
    pbVar27 = (byte *)CONCAT22((short)((uint)key >> 0x10),
                               CONCAT11((char)((uint)key >> 8) + *(char *)((int)unaff_EDI + key),
                                        (char)key));
    pbVar36 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) + *(char *)(param_2 + -0x3f),
                                        (byte)param_2));
    bVar8 = *in_EAX;
    bVar11 = (byte)in_EAX;
    bVar7 = *in_EAX;
    *in_EAX = *in_EAX + bVar11;
    uVar25 = (undefined3)((uint)in_EAX >> 8);
    if (SCARRY1(bVar7,bVar11)) {
      pbVar35 = (byte *)CONCAT31(uVar25,bVar11 + in_EAX[(int)unaff_EBP] + CARRY1(bVar8,bVar11));
      goto code_r0x00402677;
    }
    unaff_EBX = unaff_EBX + -1;
    *in_EAX = *in_EAX + bVar11;
    uVar54 = *unaff_ESI;
    *pbVar27 = *pbVar27 + 1;
    pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),
                               ((byte)param_2 | (byte)uVar54) - (byte)*unaff_ESI);
    unaff_ESI = (uint *)((int)unaff_ESI +
                        (-(uint)(bVar11 < *in_EAX) - *(int *)CONCAT31(uVar25,bVar11 - *in_EAX)));
    pbVar42 = (byte *)CONCAT31(uVar25,bVar11 - *in_EAX);
    *(byte **)unaff_EBP = unaff_EBP + *(int *)unaff_EBP;
    bVar7 = (byte)unaff_EBP;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
    bVar8 = *unaff_EBP;
    *unaff_EBP = *unaff_EBP + bVar7;
    *unaff_EDI = (int)(pbVar36 + (uint)CARRY1(bVar8,bVar7) + *unaff_EDI);
    uVar25 = (undefined3)((uint)unaff_EBP >> 8);
    bVar7 = bVar7 | *pbVar36;
    pcVar14 = (char *)CONCAT31(uVar25,bVar7);
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *pcVar14 = *pcVar14 + bVar7;
      bVar8 = bVar7 + 0xd;
      pbVar35 = (byte *)CONCAT31(uVar25,bVar8);
      *unaff_ESI = *unaff_ESI | (uint)pbVar36;
      if (-1 < (int)*unaff_ESI) {
code_r0x00402678:
        *pbVar35 = *pbVar35 + (char)pbVar35;
        pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar27 >> 8) | bRam7d160243,(char)pbVar27)
                                  );
        piVar16 = unaff_EDI;
code_r0x00402680:
        bVar8 = (byte)pbVar27;
        *pbVar27 = *pbVar27 + bVar8;
        uVar25 = (undefined3)((uint)pbVar27 >> 8);
        piVar22 = (int *)((int)piVar16 * 2 + 0x400009a);
        *piVar22 = *piVar22 + CONCAT31(uVar25,bVar8 + 2) + (uint)(0xfd < bVar8);
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)((int)pbVar36 * 5),(char)unaff_EBX));
        *(char *)((int)pbVar36 * 2) = *(char *)((int)pbVar36 * 2) + bVar8 + 2;
        unaff_EDI = (int *)CONCAT31(uVar25,bVar8 + 4);
        *(byte *)piVar16 = (char)*piVar16 - (bVar8 + 4);
code_r0x00402697:
        *(char *)unaff_EDI = (char)*unaff_EDI + (char)unaff_EDI;
        pbVar36 = pbVar36 + -*unaff_ESI;
code_r0x0040269b:
        unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                     (byte)unaff_EBX | (byte)((uint)pbVar35 >> 8));
        iVar15 = GlobalDescriptorTableRegister();
        *unaff_EDI = iVar15;
        cVar9 = (char)unaff_EDI;
        *pbVar36 = *pbVar36 + cVar9;
        if ((POPCOUNT(*pbVar36) & 1U) == 0) {
          *(char *)unaff_EDI = (char)*unaff_EDI + cVar9;
          pcVar14 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar9 + '\x13');
          pbVar27 = pbVar35;
          unaff_EDI = piVar16;
code_r0x004026a8:
          uVar25 = (undefined3)((uint)pcVar14 >> 8);
          bVar7 = (byte)pcVar14 + 2 + cRam001b15fe + (0xfd < (byte)pcVar14);
          bVar8 = *unaff_EBX;
          bVar11 = (byte)unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar11;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar25,bVar7) + (uint)CARRY1(bVar8,bVar11);
          iVar15 = CONCAT31(uVar25,bVar7 + 2) + 0x917d + (uint)(0xfd < bVar7);
          uVar25 = (undefined3)((uint)iVar15 >> 8);
          bVar8 = (char)iVar15 + 0x3a;
          pcVar14 = (char *)CONCAT31(uVar25,bVar8);
          uStack_2 = (undefined1)((uint)iVar15 >> 0x10);
          uStack_1 = (undefined1)((uint)iVar15 >> 0x18);
          *pcVar14 = *pcVar14 + bVar8;
          uVar38 = (undefined3)((uint)pbVar36 >> 8);
          bVar7 = (byte)pbVar36 | *pbVar36;
          uVar19 = CONCAT31(uVar25,(char)iVar15 + '8');
          uVar54 = uVar19 + 0x1b00001b;
          pcVar14 = (char *)(uVar54 + (1 < bVar8) + *unaff_ESI +
                            (uint)(0xe4ffffe4 < uVar19 || CARRY4(uVar54,(uint)(1 < bVar8))));
          bVar8 = bVar7 + *pbVar27;
          pbVar36 = (byte *)CONCAT31(uVar38,bVar8);
          uVar25 = (undefined3)((uint)pcVar14 >> 8);
          cVar9 = (char)pcVar14;
          if (SCARRY1(bVar7,*pbVar27) != (char)bVar8 < '\0') {
            *pcVar14 = *pcVar14 + cVar9;
            pcVar14 = (char *)CONCAT31(uVar25,cVar9 + '\x02');
            uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
            cVar41 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x68];
            unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(cVar41,bVar11));
            *pcVar14 = *pcVar14 + cVar9 + '\x02';
            bVar7 = cVar9 + 0x2a;
            pbVar35 = (byte *)CONCAT31(uVar25,bVar7);
            *pbVar35 = *pbVar35 | bVar7;
            bVar8 = *unaff_EBX;
            cVar10 = (char)((uint)pbVar27 >> 8);
            *unaff_EBX = *unaff_EBX + cVar10;
            piVar16 = unaff_EDI;
            if (SCARRY1(bVar8,cVar10) != (char)*unaff_EBX < '\0') {
              *pbVar35 = *pbVar35 + bVar7;
              bVar8 = cVar9 + 0x2c;
              if ((POPCOUNT(bVar8) & 1U) == 0) {
                *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
                bVar7 = cVar9 + 0x59;
                pcVar14 = (char *)CONCAT31(uVar25,bVar7);
                *(char **)pbVar36 = pcVar14 + (uint)(0xd2 < bVar8) + *(int *)pbVar36;
                unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(cVar41 + unaff_EBX[-0x67],bVar11));
                *pcVar14 = *pcVar14 + bVar7;
                piVar16 = (int *)((CONCAT31(uVar25,cVar9 + -0x38) + -0x7d060000) -
                                 (uint)(0x90 < bVar7));
                pbVar35 = pbVar27;
                uVar49 = in_ES;
code_r0x00402700:
                *(char *)unaff_EDI = (char)*unaff_EDI + (char)unaff_EDI;
                cVar9 = (char)unaff_EDI + '\x02';
                unaff_EDI = (int *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar9);
                bVar51 = (POPCOUNT(cVar9) & 1U) == 0;
code_r0x00402704:
                if (bVar51) {
                  *(char *)unaff_EDI = (char)*unaff_EDI + (char)unaff_EDI;
                  cVar9 = (char)unaff_EDI + '\x02';
                  pcVar14 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar9);
                  pbVar27 = pbVar35;
                  puVar43 = unaff_ESI;
                  if ((POPCOUNT(cVar9) & 1U) == 0) {
code_r0x0040270c:
                    in_DS = uVar49;
                    uVar49 = in_ES;
                    cVar9 = (char)pcVar14;
                    *pcVar14 = *pcVar14 + cVar9;
                    uVar25 = (undefined3)((uint)pcVar14 >> 8);
                    bVar8 = cVar9 + 0x6f;
                    piVar22 = (int *)CONCAT31(uVar25,bVar8);
                    iVar15 = *piVar22;
                    *(byte *)piVar22 = (char)*piVar22 + bVar8;
                    uStack_4 = uVar49;
                    if ((char)*piVar22 == '\0' ||
                        SCARRY1((char)iVar15,bVar8) != (char)*piVar22 < '\0') goto code_r0x00402723;
                    *(byte *)piVar22 = (char)*piVar22 + bVar8;
                    bVar7 = cVar9 + 0x9c;
                    piVar22 = (int *)CONCAT31(uVar25,bVar7);
                    puVar17 = puVar43 + (int)piVar16 * 2;
                    uVar54 = *puVar17;
                    uVar19 = *puVar17;
                    *puVar17 = (uint)(pbVar36 + uVar19 + (0xd2 < bVar8));
                    *piVar22 = (*piVar22 - (int)piVar22) -
                               (uint)(CARRY4(uVar54,(uint)pbVar36) ||
                                     CARRY4((uint)(pbVar36 + uVar19),(uint)(0xd2 < bVar8)));
                    uVar54 = *puVar43;
                    *(byte *)puVar43 = (byte)*puVar43 + bVar7;
                    pbVar35 = pbVar27;
                    in_ES = uVar49;
                    if (!CARRY1((byte)uVar54,bVar7)) {
                      halt_baddata();
                    }
code_r0x00402724:
                    *(byte *)piVar22 = (char)*piVar22 + (byte)piVar22;
                    uVar25 = (undefined3)((uint)piVar22 >> 8);
                    bVar8 = (byte)piVar22 | *(byte *)((int)piVar22 + 0x400000d);
                    pcVar14 = (char *)CONCAT31(uVar25,bVar8);
                    if ((char)bVar8 < '\x01') {
                      bVar51 = pcVar14 < (char *)0x6fe1411;
                      pcVar14 = pcVar14 + -0x6fe1411;
                    }
                    else {
                      *pcVar14 = *pcVar14 + bVar8;
                      bVar11 = bVar8 + 0x28;
                      puVar17 = (uint *)CONCAT31(uVar25,bVar11);
                      *puVar17 = *puVar17 | (uint)puVar17;
                      bVar7 = *unaff_EBX;
                      cVar9 = (char)((uint)pbVar35 >> 8);
                      *unaff_EBX = *unaff_EBX + cVar9;
                      if (*unaff_EBX == 0 || SCARRY1(bVar7,cVar9) != (char)*unaff_EBX < '\0') break;
                      *(byte *)puVar17 = (char)*puVar17 + bVar11;
                      pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x55);
                      puVar17 = puVar43 + (int)piVar16 * 2;
                      bVar51 = CARRY4(*puVar17,(uint)pbVar36) ||
                               CARRY4((uint)(pbVar36 + *puVar17),(uint)(0xd2 < bVar11));
                      *puVar17 = (uint)(pbVar36 + *puVar17 + (0xd2 < bVar11));
                    }
                    while( true ) {
                      uVar25 = (undefined3)((uint)pcVar14 >> 8);
                      bVar8 = ((char)pcVar14 - *pcVar14) - bVar51;
                      puVar17 = (uint *)CONCAT31(uVar25,bVar8);
                      uVar54 = *puVar43;
                      *(byte *)puVar43 = (byte)*puVar43 + bVar8;
                      if (CARRY1((byte)uVar54,bVar8)) break;
                      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                   (byte)unaff_EBX | (byte)((uint)pbVar36 >> 8));
                      pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 2);
                      while( true ) {
                        pbVar42[-0x6f] = pbVar42[-0x6f] + 1;
                        cVar9 = (char)pcVar14;
                        *pcVar14 = *pcVar14 + cVar9;
                        uVar25 = (undefined3)((uint)pcVar14 >> 8);
                        bVar8 = cVar9 + 2;
                        pcVar14 = (char *)CONCAT31(uVar25,bVar8);
                        in_DS = uStack_4;
                        if (SCARRY1(cVar9,'\x02') != (char)bVar8 < '\0') break;
                        *pcVar14 = *pcVar14 + bVar8;
                        cVar41 = (char)pbVar36;
                        *(char *)piVar16 = (char)*piVar16 - cVar41;
                        *pbVar36 = *pbVar36 + (char)pbVar35;
                        bVar7 = (cVar9 + '\t') - *(char *)CONCAT31(uVar25,cVar9 + '\t');
                        pbVar27 = (byte *)CONCAT31(uVar25,bVar7);
                        bVar8 = *pbVar27;
                        *pbVar27 = *pbVar27 + bVar7;
                        pbVar27 = pbVar35 + 1;
                        cVar9 = bVar7 - CARRY1(bVar8,bVar7);
                        pcVar14 = (char *)CONCAT31(uVar25,cVar9);
                        *pcVar14 = *pcVar14 + cVar9;
                        *pcVar14 = *pcVar14 + cVar9;
                        *pcVar14 = *pcVar14 + cVar9;
                        *pcVar14 = *pcVar14 + cVar9;
                        cVar10 = (char)((uint)pbVar27 >> 8);
                        pbVar35[2] = pbVar35[2] + cVar10;
                        *pcVar14 = *pcVar14 + cVar9;
                        pcVar14 = (char *)(*(int *)pbVar27 * 0x170000);
                        *pcVar14 = *pcVar14;
                        *pcVar14 = *pcVar14;
                        *pbVar27 = *pbVar27;
                        uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
                        cVar9 = (char)unaff_EBX;
                        bVar11 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)pbVar36 * 5);
                        unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(bVar11,cVar9));
                        unaff_EBX[(int)pcVar14] = unaff_EBX[(int)pcVar14];
                        *pcVar14 = *pcVar14 - cVar9;
                        *pbVar36 = *pbVar36 + (char)pbVar27;
                        uVar25 = (undefined3)((uint)pcVar14 >> 8);
                        bVar7 = -*pcVar14;
                        pbVar35 = (byte *)CONCAT31(uVar25,bVar7);
                        *unaff_EBX = *unaff_EBX + cVar41;
                        *pbVar36 = *pbVar36 ^ bVar7;
                        *pbVar36 = *pbVar36 + bVar7;
                        *pbVar35 = *pbVar35 + bVar7;
                        bVar8 = *pbVar35;
                        *pbVar35 = *pbVar35 + bVar7;
                        *(byte **)pbVar36 = pbVar36 + (uint)CARRY1(bVar8,bVar7) + *(int *)pbVar36;
                        bVar8 = *pbVar36;
                        *pbVar36 = *pbVar36 + bVar7;
                        if (SCARRY1(bVar8,bVar7) == (char)*pbVar36 < '\0') {
                          pcVar14 = (char *)((uint)pbVar35 | 2);
                          pbVar42[-0x6f] = pbVar42[-0x6f] + 1;
                          *pcVar14 = *pcVar14 + (char)pcVar14;
                          in_SS = (ushort)param_3;
                          in_DS = (ushort)param_4;
                        }
                        else {
                          *pbVar35 = *pbVar35 + bVar7;
                          cVar12 = bVar7 + 0x12;
                          pcVar14 = (char *)CONCAT31(uVar25,cVar12);
                          bVar8 = *unaff_EBX;
                          *unaff_EBX = *unaff_EBX + cVar12;
                          if (SCARRY1(bVar8,cVar12) != (char)*unaff_EBX < '\0') {
                            *pcVar14 = *pcVar14 + cVar12;
                            cVar12 = bVar7 + 0x24;
                            pcVar14 = (char *)CONCAT31(uVar25,cVar12);
                            *pcVar14 = *pcVar14 + cVar10;
                            *pcVar14 = *pcVar14 + cVar12;
                            bVar11 = bVar11 | pbVar42[-0x6e];
                            pcVar18 = (char *)CONCAT22(uVar32,CONCAT11(bVar11,cVar9));
                            *pcVar14 = *pcVar14 + cVar12;
                            cRam0000917d = cRam0000917d + cVar41;
                            bVar13 = bVar7 + 0x48;
                            pcVar18[-0x6e] = pcVar18[-0x6e] + bVar11;
                            *(char *)CONCAT31(uVar25,bVar13) =
                                 *(char *)CONCAT31(uVar25,bVar13) + bVar13;
                            bVar8 = bVar7 + 0x53 + *param_3;
                            cVar9 = bVar8 + (0xf4 < bVar13);
                            cVar9 = cVar9 + *(char *)CONCAT31(uVar25,cVar9) +
                                    (CARRY1(bVar7 + 0x53,*param_3) || CARRY1(bVar8,0xf4 < bVar13));
                            pcVar14 = (char *)CONCAT31(uVar25,cVar9);
                            *pcVar18 = *pcVar18 - (char)param_3;
                            *pcVar14 = *pcVar14 + cVar9;
                            pbVar36 = pbVar36 + -*(int *)pbVar36;
                            *(char *)((int)pbVar36 * 5) = *(char *)((int)pbVar36 * 5) + bVar11;
                            pcVar14[(int)pbVar42] = pcVar14[(int)pbVar42] + cVar9;
                            *pcVar14 = *pcVar14 + cVar9;
                            bVar7 = (byte)((uint)param_3 >> 8) | *pbVar36;
                            uVar39 = (undefined1)param_4;
                            cVar10 = (char)((uint)param_4 >> 8) + *(char *)(param_4 + 0xf);
                            *pcVar14 = *pcVar14 + cVar9;
                            bVar8 = cVar9 + 0x2aU & *pbVar36;
                            iVar15 = *(int *)(pbVar42 + 0xf);
                            *(char *)CONCAT31(uVar25,bVar8) =
                                 *(char *)CONCAT31(uVar25,bVar8) + bVar8;
                            pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
                            cVar10 = cVar10 + *(char *)(CONCAT22(param_4._2_2_,
                                                                 CONCAT11(cVar10,uVar39)) + 0x10);
                            *pcVar14 = *pcVar14 + bVar8 + 0x2a;
                            bVar8 = bVar8 + 0x54 & *pbVar36;
                            iVar2 = *(int *)(pbVar42 + 0x10);
                            *(char *)CONCAT31(uVar25,bVar8) =
                                 *(char *)CONCAT31(uVar25,bVar8) + bVar8;
                            pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
                            puVar40 = (uint *)CONCAT22(param_4._2_2_,
                                                       CONCAT11(cVar10 + *(char *)(CONCAT22(param_4.
                                                  _2_2_,CONCAT11(cVar10,uVar39)) + 0x11),uVar39));
                            *pcVar14 = *pcVar14 + bVar8 + 0x2a;
                            bVar8 = bVar8 + 0x54 & *pbVar36;
                            puVar45 = (uint *)((int)piVar16 +
                                              *(int *)(pbVar42 + 0x11) + iVar2 + iVar15);
                            *(char *)CONCAT31(uVar25,bVar8) =
                                 *(char *)CONCAT31(uVar25,bVar8) + bVar8;
                            pbVar27 = (byte *)CONCAT31(uVar25,bVar8 + 0x2a);
                            puVar17 = (uint *)CONCAT22((short)((uint)param_3 >> 0x10),
                                                       CONCAT11(bVar7 + *pbVar27,(char)param_3));
                            uVar55 = CONCAT44(pbVar36,pbVar27 + (uint)CARRY1(bVar7,*pbVar27) +
                                                                *(int *)pbVar27);
                            uVar49 = uStack_4;
                            goto code_r0x00402866;
                          }
                        }
                        cVar10 = (char)pcVar14;
                        uVar25 = (undefined3)((uint)pcVar14 >> 8);
                        cVar9 = cVar10 + '\x02';
                        piVar22 = (int *)CONCAT31(uVar25,cVar9);
                        if (SCARRY1(cVar10,'\x02') != cVar9 < '\0') goto code_r0x00402723;
                        *(char *)piVar22 = (char)*piVar22 + cVar9;
                        pcVar14 = (char *)CONCAT31(uVar25,cVar10 + '\n');
                        *(byte *)puVar43 = (byte)*puVar43 - cVar41;
                        *pbVar36 = *pbVar36 + (char)pbVar27;
                        pbVar35 = pbVar27;
                        in_ES = uStack_4;
                      }
                      pbVar27 = pbVar42 + 0x6fe1411;
                      bVar51 = CARRY1(*pbVar27,bVar8);
                      *pbVar27 = *pbVar27 + bVar8;
                    }
                    break;
                  }
                  unaff_EBX[(int)pbVar36] = unaff_EBX[(int)pbVar36] + cVar9;
                  unaff_EDI = piVar16;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar49 = 0x927c;
              in_stack_fffffff0 = 0x40268f;
              uVar55 = func_0x02040000(in_CS);
              pbVar36 = (byte *)((ulonglong)uVar55 >> 0x20);
              *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
              pbVar35 = (byte *)CONCAT31((int3)((ulonglong)uVar55 >> 8),(char)uVar55 + '\x12');
              pbVar27 = extraout_ECX_00;
              in_CS = uVar49;
            }
            goto code_r0x00402680;
          }
          unaff_EBP = pbVar42 + -1;
          *pcVar14 = *pcVar14 + cVar9;
          pbVar36 = (byte *)CONCAT31(uVar38,bVar8 | *unaff_EBX);
          pbVar35 = (byte *)CONCAT31(uVar25,cVar9 + ':');
code_r0x00402677:
          unaff_ESI = (uint *)((int)unaff_ESI + -1);
          pbVar42 = unaff_EBP;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar35 = *pbVar35 + bVar8;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | pbVar42[-0x6b],
                                            (char)unaff_EBX));
      *pbVar35 = *pbVar35 + bVar8;
      cVar9 = bVar7 + 0xf;
      pcVar14 = (char *)CONCAT31(uVar25,cVar9);
      if (SCARRY1(bVar8,'\x02') == cVar9 < '\0') {
        pcVar14 = pcVar14 + (0xfd < bVar8) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar14 = *pcVar14 + cVar9;
      cVar10 = bVar7 + 0x11;
      piVar16 = (int *)CONCAT31(uVar25,cVar10);
      uVar55 = CONCAT44(pbVar36,piVar16);
      pbVar35 = pbVar27;
      if (SCARRY1(cVar9,'\x02') == cVar10 < '\0') {
        uStack_4 = in_SS;
        if ((POPCOUNT(cVar10) & 1U) != 0) goto code_r0x0040255d;
        goto code_r0x004025d8;
      }
code_r0x0040263f:
      *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
      cVar9 = (char)piVar16 + '\x02';
      pcVar14 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cVar9);
      pbVar27 = pbVar35;
      if ((POPCOUNT(cVar9) & 1U) == 0) {
        *pcVar14 = *pcVar14 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *pcVar14 = *pcVar14 + bVar7;
      uVar55 = CONCAT44(pbVar36,pcVar14 + 0x12110000);
code_r0x0040255d:
      while( true ) {
        pcVar14 = (char *)((ulonglong)uVar55 >> 0x20);
        piVar16 = (int *)uVar55;
        *piVar16 = (int)(*piVar16 + (int)piVar16);
        uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
        uVar39 = SUB41(unaff_EBX,0);
        cVar41 = (char)((uint)unaff_EBX >> 8) + (char)((ulonglong)uVar55 >> 0x28);
        pcVar18 = (char *)CONCAT22(uVar32,CONCAT11(cVar41,uVar39));
        *piVar16 = (int)(*piVar16 + (int)piVar16);
        *(char *)unaff_EDI = (char)*unaff_EDI + (char)((ulonglong)uVar55 >> 0x20);
        cVar9 = (char)uVar55;
        *(char *)piVar16 = (char)*piVar16 + cVar9;
        *(char *)piVar16 = (char)*piVar16 + cVar9;
        *(char *)piVar16 = (char)*piVar16 + cVar9;
        *pcVar14 = *pcVar14 + cVar9;
        *(char *)piVar16 = (char)*piVar16 + cVar9;
        *pcVar18 = *pcVar18 + cVar9;
        *(char *)piVar16 = (char)*piVar16 + cVar9;
        pcVar3 = (code *)swi(1);
        uVar55 = (*pcVar3)();
        pbVar36 = (byte *)((ulonglong)uVar55 >> 0x20);
        pbVar27 = (byte *)uVar55;
        bVar8 = *pbVar27;
        bVar7 = (byte)uVar55;
        *pbVar27 = *pbVar27 + bVar7;
        *pbVar36 = *pbVar36 + bVar7 + CARRY1(bVar8,bVar7);
        *pbVar27 = *pbVar27 + bVar7;
        *pbVar27 = *pbVar27 + bVar7;
        *pbVar27 = *pbVar27 + bVar7;
        *pbVar27 = *pbVar27 + bVar7;
        *pbVar27 = *pbVar27 + bVar7;
        *pbVar27 = *pbVar27 + bVar7;
        *pbVar27 = *pbVar27 + bVar7;
        *pbVar27 = *pbVar27 + bVar7;
        cVar9 = (char)((ulonglong)uVar55 >> 0x28);
        *pbVar27 = *pbVar27 + cVar9;
        bVar8 = *pbVar27;
        uVar25 = (undefined3)((ulonglong)uVar55 >> 8);
        pcVar14 = (char *)CONCAT31(uVar25,bVar7 + bVar8);
        *pcVar14 = *pcVar14 + cVar9;
        cVar9 = bVar7 + bVar8 + *pcVar14;
        pcVar14 = (char *)CONCAT31(uVar25,cVar9);
        cVar10 = (char)((ulonglong)uVar55 >> 0x20);
        *(char *)unaff_EDI = (char)*unaff_EDI + cVar10;
        *pcVar14 = *pcVar14 + cVar9;
        *pcVar14 = *pcVar14 + cVar10;
        *pcVar14 = *pcVar14 + cVar9;
        *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
        cVar41 = cVar41 + pbVar42[(int)pcVar14 * 4];
        unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(cVar41,uVar39));
        unaff_EBX[(int)pcVar14] = unaff_EBX[(int)pcVar14] + cVar9;
        *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar9;
        *pbVar36 = *pbVar36 + (char)extraout_ECX;
        bVar7 = cVar9 - *pcVar14;
        pcVar14 = (char *)CONCAT31(uVar25,bVar7);
        *unaff_EBX = *unaff_EBX + cVar10;
        *pbVar36 = *pbVar36 ^ bVar7;
        *pbVar36 = *pbVar36 + cVar41;
        *pcVar14 = *pcVar14 + bVar7;
        cRam12110000 = cRam12110000 + bVar7;
        bVar8 = *pbVar36;
        *pbVar36 = *pbVar36 + bVar7;
        pbVar27 = extraout_ECX;
        in_SS = uStack_4;
        if (SCARRY1(bVar8,bVar7) != (char)*pbVar36 < '\0') break;
        unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(cVar41 + pbVar42[(int)pcVar14 * 4],uVar39));
        *(char *)((int)unaff_EDI + (int)pcVar14) = *(char *)((int)unaff_EDI + (int)pcVar14) + bVar7;
        *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) - bVar7;
        *pcVar14 = *pcVar14 + bVar7;
        pcVar18 = (char *)CONCAT31(uVar25,bVar7 + *pcVar14);
        *pcVar18 = *pcVar18 + bVar7 + *pcVar14;
        uStack_4 = 0x4025;
        uVar55 = func_0x0f40255d();
      }
code_r0x004025bd:
      *pcVar14 = *pcVar14 + (char)pcVar14;
      pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12');
      *pcVar14 = *pcVar14 + (char)((uint)pbVar27 >> 8);
      pcVar14 = pcVar14 + -1;
      cVar9 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar9;
      bVar8 = (byte)((uint)unaff_EBX >> 8) | pbVar42[-0x7b];
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar8,(char)unaff_EBX))
      ;
      *pcVar14 = *pcVar14 + cVar9;
      cRam0000847d = cRam0000847d + (char)pbVar36;
      piVar16 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + '$');
      unaff_EBX[-0x7b] = unaff_EBX[-0x7b] + bVar8;
code_r0x004025d8:
      *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
      pcVar14 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + '\v');
    }
    pbVar35 = unaff_EBX + (int)pbVar27;
    bVar8 = *pbVar35;
    bVar7 = (byte)pcVar14;
    *pbVar35 = *pbVar35 + bVar7;
    uVar25 = (undefined3)((uint)pcVar14 >> 8);
    cVar9 = bVar7 + *pbVar27 + CARRY1(bVar8,bVar7);
    cVar9 = cVar9 + *(char *)CONCAT31(uVar25,cVar9) +
            (CARRY1(bVar7,*pbVar27) || CARRY1(bVar7 + *pbVar27,CARRY1(bVar8,bVar7)));
    pcVar14 = (char *)CONCAT31(uVar25,cVar9);
    *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar9;
    *pcVar14 = *pcVar14 + cVar9;
    iVar15 = *(int *)pbVar36;
    pbVar42[(int)pcVar14 * 4] = pbVar42[(int)pcVar14 * 4] + (char)((uint)unaff_EBX >> 8);
    pcVar14[(int)pbVar42] = pcVar14[(int)pbVar42] + cVar9;
    pbVar35 = pbVar36 + (-1 - iVar15);
    *pcVar14 = *pcVar14 + cVar9;
    key = CONCAT22((short)((uint)pbVar27 >> 0x10),
                   CONCAT11(((byte)((uint)pbVar27 >> 8) | *pbVar35) +
                            *(char *)((int)unaff_EDI + 0x22),(char)pbVar27));
    *pcVar14 = *pcVar14 + cVar9;
    param_2 = CONCAT31((int3)((uint)pbVar35 >> 8),(char)pbVar35 - pbVar36[1 - iVar15]);
    in_EAX = (byte *)CONCAT31(uVar25,cVar9 + -0xf);
    unaff_EBP = pbVar42;
    uStack_4 = in_DS;
  } while( true );
  *(byte *)puVar17 = (char)*puVar17 + (byte)puVar17;
  uVar25 = (undefined3)((uint)puVar17 >> 8);
  bVar8 = (byte)puVar17 | *(byte *)((int)puVar17 + 0x400000e);
  pcVar14 = (char *)CONCAT31(uVar25,bVar8);
  unaff_ESI = puVar43;
  if ('\0' < (char)bVar8) {
    *pcVar14 = *pcVar14 + bVar8;
    bVar8 = bVar8 + 0x28 | *(byte *)CONCAT31(uVar25,bVar8 + 0x28);
    *unaff_EBX = *unaff_EBX + (char)((uint)pbVar35 >> 8);
    unaff_ESI = puVar43 + 1;
    out(*puVar43,(ushort)pbVar36);
    *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
    pcVar14 = (char *)(uint)(bVar8 | *pbVar36);
  }
  bVar8 = (byte)pcVar14 & 0x7b;
  bVar51 = (char)(bVar8 + 0x17) < '\0';
  unaff_EDI = (int *)CONCAT13(uStack_1,CONCAT12(uStack_2,uStack_4));
  if (SCARRY1(bVar8,'\x17') == bVar51) {
    if (SCARRY1(bVar8,'\x17') != bVar51) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar10 = (char)uStack_4;
  *(char *)unaff_EDI = (char)*unaff_EDI + cVar10;
  iVar26 = (int3)((uint)unaff_EDI >> 8);
  cVar9 = cVar10 + '\x02';
  unaff_EDI = (int *)CONCAT31(iVar26,cVar9);
  bVar51 = (POPCOUNT(cVar9) & 1U) == 0;
  if (!bVar51) goto code_r0x00402704;
  *(char *)unaff_EDI = (char)*unaff_EDI + cVar9;
  cVar10 = cVar10 + '\x04';
  pcVar14 = (char *)CONCAT31(iVar26,cVar10);
  if ((POPCOUNT(cVar10) & 1U) == 0) {
    *pcVar14 = *pcVar14 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar36 = (byte *)((int)iVar26 >> 0x17);
  pbVar27 = pbVar35;
  puVar43 = unaff_ESI;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar37 = (uint *)((ulonglong)uVar55 >> 0x20);
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar17;
    cVar9 = (char)puVar40 - (byte)*puVar43;
    iVar15 = CONCAT22((short)((uint)puVar40 >> 0x10),
                      CONCAT11((char)((uint)puVar40 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar40 >> 8),cVar9) + 0x12),cVar9));
    *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
    uVar25 = (undefined3)((ulonglong)uVar55 >> 8);
    bVar8 = (char)uVar55 + 0x2aU & (byte)*puVar37;
    pcVar14 = (char *)CONCAT31(uVar25,bVar8);
    puVar45 = (uint *)((int)puVar45 + *(int *)(pbVar42 + 0x12));
    *pcVar14 = *pcVar14 + bVar8;
    puVar21 = (uint *)CONCAT31(uVar25,bVar8 + 0x2a);
    uStack_8 = uVar49;
get_Value:
    cVar9 = *(char *)(iVar15 + 0x13);
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    uVar25 = (undefined3)((uint)puVar21 >> 8);
    bVar8 = (char)puVar21 + 0x2aU & (byte)*puVar37;
    pcVar14 = (char *)CONCAT31(uVar25,bVar8);
    puVar45 = (uint *)((int)puVar45 + *(int *)(pbVar42 + 0x13));
    *pcVar14 = *pcVar14 + bVar8;
    pbVar27 = (byte *)CONCAT31(uVar25,bVar8 + 0x2a);
    uVar54 = (uint)uVar49;
    bVar8 = (byte)((uint)puVar17 >> 8);
    bVar7 = bVar8 + *pbVar27;
    pbVar27 = pbVar27 + (uint)CARRY1(bVar8,*pbVar27) + *(int *)pbVar27;
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar17;
    puVar40 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar15 >> 0x10),
                                               CONCAT11((char)((uint)iVar15 >> 8) + cVar9,
                                                        (char)iVar15)) >> 8),
                               (char)iVar15 - (byte)*puVar43);
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11(bVar7 + *pbVar27,(char)puVar17));
    pbVar27 = pbVar27 + (uint)CARRY1(bVar7,*pbVar27) + *(int *)pbVar27;
code_r0x00402898:
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar17;
    bVar8 = (byte)puVar37;
    uVar32 = CONCAT11((char)((uint)puVar37 >> 8) - (byte)*puVar43,bVar8);
    pbVar36 = (byte *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar32);
    pcVar14 = (char *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((char)((uint)puVar40 >> 8) + (byte)puVar40[-0x19],
                                        (char)puVar40));
    *pbVar27 = *pbVar27 + (char)pbVar27;
    pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),(char)pbVar27 + '\x03');
    puVar40 = puVar43;
    do {
      puVar43 = puVar40 + 1;
      out(*puVar40,uVar32);
      pcVar14 = pcVar14 + -1;
      bVar7 = (byte)pbVar27;
      *pbVar27 = *pbVar27 + bVar7;
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                 CONCAT11((byte)((uint)puVar17 >> 8) | *pbVar36,(char)puVar17));
      *pbVar27 = *pbVar27 + bVar7;
      *pcVar14 = *pcVar14 + bVar8;
      *(byte *)((int)pbVar27 * 2) = *(byte *)((int)pbVar27 * 2) ^ bVar7;
      *pbVar27 = *pbVar27 + bVar7;
      *pbVar27 = *pbVar27 | bVar7;
      bVar51 = CARRY1((byte)*puVar17,bVar8);
      *(byte *)puVar17 = (byte)*puVar17 + bVar8;
      cVar9 = bVar7 + 10 + bVar51;
      pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),cVar9);
      puVar40 = puVar43;
    } while (bVar7 < 0xf6 && !CARRY1(bVar7 + 10,bVar51));
    *pbVar27 = *pbVar27 + cVar9;
    in_stack_fffffff0 = CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),uStack_4);
    pcVar18 = (char *)((uint)pbVar27 | *puVar45);
    puVar40 = (uint *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                               CONCAT11((char)((uint)pcVar14 >> 8) + pbVar42[-100],(char)pcVar14));
    *pcVar18 = *pcVar18 + (char)pcVar18;
    bVar8 = (char)pcVar18 + 7;
    uVar55 = CONCAT44(pbVar36,CONCAT31((int3)((uint)pcVar18 >> 8),bVar8));
code_r0x004028c8:
    puVar37 = (uint *)((ulonglong)uVar55 >> 0x20);
  } while ((POPCOUNT(bVar8) & 1U) != 0);
  *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
  puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar55 >> 8),(char)uVar55 + '-');
  puVar43 = (uint *)((uint)puVar43 | *(uint *)((int)puVar37 + 0x3b));
  bVar51 = CARRY4(*puVar21,(uint)puVar21);
  uVar19 = *puVar21;
  *puVar21 = (uint)(*puVar21 + (int)puVar21);
  if (SCARRY4(uVar19,(int)puVar21)) {
    bVar51 = CARRY4(*puVar21,(uint)puVar21);
    bVar53 = SCARRY4(*puVar21,(int)puVar21);
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    bVar8 = POPCOUNT(*puVar21 & 0xff);
    if (bVar53) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + bVar51);
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar17;
    bVar51 = (POPCOUNT((byte)*puVar37) & 1U) == 0;
    if (bVar51) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar51) {
      iVar15 = CONCAT31((int3)((uint)puVar40 >> 8),(char)puVar40 - (byte)*puVar43);
      goto get_Value;
    }
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'r');
    uStack_8 = (ushort)pbVar42;
code_r0x004028e2:
    uVar32 = (undefined2)((uint)in_stack_fffffff0 >> 0x10);
    uVar19 = *puVar21;
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    if (SCARRY4(uVar19,(int)puVar21)) {
      if (*puVar21 == 0 || SCARRY4(uVar19,(int)puVar21) != (int)*puVar21 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar40 = (uint *)((int)puVar40 + -1);
    cVar9 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar9;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11((byte)((uint)puVar17 >> 8) |
                                        *(byte *)((int)puVar17 + 0x16d7207),(char)puVar17));
    pbVar27 = (byte *)((int)puVar21 + 0x7d);
    bVar8 = *pbVar27;
    bVar11 = (byte)((uint)puVar37 >> 8);
    bVar7 = *pbVar27;
    *pbVar27 = *pbVar27 + bVar11;
    uVar54 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar7,bVar11) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar27 < '\0') * 0x80 | (uint)(*pbVar27 == 0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar27) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar8,bVar11);
    *(byte *)puVar21 = (byte)*puVar21 + cVar9;
    pbVar27 = (byte *)(CONCAT31((int3)((uint)puVar21 >> 8),cVar9 + '+') ^ *puVar45);
    if ((POPCOUNT((uint)pbVar27 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar8 = (byte)pbVar27;
    *pbVar27 = *pbVar27 + bVar8;
    puVar21 = (uint *)CONCAT31((int3)((uint)pbVar27 >> 8),bVar8 + 0x72);
    if (bVar8 < 0x8e && (byte)(bVar8 + 0x72) != '\0') {
      if (SCARRY1(bVar8,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar21 + 0x6f) = *(byte *)((int)puVar21 + 0x6f) + bVar11;
    }
code_r0x00402905:
    uVar55 = CONCAT44(puVar37,puVar21);
    puVar40 = (uint *)((int)puVar40 + -1);
    cVar9 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar9;
    bVar8 = (byte)((uint)puVar17 >> 8) | (byte)*puVar17;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar8,(char)puVar17));
    uStack_4 = (ushort)uVar54;
    if ((char)bVar8 < '\x01') {
      *(byte *)puVar21 = (byte)*puVar21 + cVar9;
      puVar45 = (uint *)((int)puVar45 - *(int *)(pbVar42 + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar21 = (byte)*puVar21 + cVar9;
    uVar54 = 0x40291c;
    uVar55 = func_0x7346291c();
    *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
    puVar17 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar55 >> 0x20));
    puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,uStack_4);
    uStackY_28 = puVar40;
    while( true ) {
      pcVar14 = (char *)((int)uVar55 * 2);
      *pcVar14 = *pcVar14 - (char)puVar17;
      uVar19 = *puVar40;
      cVar9 = (char)((uint)puVar17 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 + cVar9;
      if (SCARRY1((byte)uVar19,cVar9) == (char)(byte)*puVar40 < '\0') {
        pbVar27 = (byte *)((int)puVar45 + (int)uVar55);
        *pbVar27 = *pbVar27 + (char)uVar55;
        bVar8 = *pbVar27;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar37 = (uint *)((ulonglong)uVar55 >> 0x20);
      cVar9 = (char)uVar55;
      *(char *)uVar55 = *(char *)uVar55 + cVar9;
      uVar25 = (undefined3)((ulonglong)uVar55 >> 8);
      bVar8 = cVar9 + 7;
      puVar21 = (uint *)CONCAT31(uVar25,bVar8);
      bVar7 = (byte)((ulonglong)uVar55 >> 0x28);
      if ((POPCOUNT(bVar8) & 1U) != 0) break;
      *(byte *)puVar21 = (byte)*puVar21 + bVar8;
      pcVar14 = (char *)CONCAT31(uVar25,cVar9 + '3');
      uVar32 = (undefined2)((uint)puVar40 >> 0x10);
      uVar39 = SUB41(puVar40,0);
      bVar8 = (char)((uint)puVar40 >> 8) + *(byte *)((int)puVar43 + 0x16) + (0xd3 < bVar8);
      puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(bVar8,uVar39));
      *pcVar14 = *pcVar14 + cVar9 + '3';
      cVar10 = cVar9 + ':';
      puVar21 = (uint *)CONCAT31(uVar25,cVar10);
      if ((POPCOUNT(cVar10) & 1U) != 0) {
        bVar8 = bVar8 | *(byte *)((int)puVar37 + 7);
        puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(bVar8,uVar39));
        bVar51 = (POPCOUNT(bVar8) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar21 = (byte)*puVar21 + cVar10;
      puVar21 = (uint *)(CONCAT31(uVar25,cVar9 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar27 = (byte *)((int)puVar21 + 0x72);
      bVar53 = SCARRY1(*pbVar27,bVar7);
      *pbVar27 = *pbVar27 + bVar7;
      bVar8 = POPCOUNT(*pbVar27);
code_r0x0040294c:
      if ((bVar8 & 1) == 0) {
        *(byte *)((int)puVar21 + 0x72) = *(byte *)((int)puVar21 + 0x72) + (char)((uint)puVar37 >> 8)
        ;
      }
      else if (bVar53) {
        pbVar42 = *(byte **)pbVar42;
        cVar9 = cRamc9721806;
        goto code_r0x004029c4;
      }
      pbVar42 = (byte *)0x7e700001;
      puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,in_SS);
code_r0x00402957:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      cVar9 = (char)puVar21 + '(';
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),cVar9);
      *(byte *)puVar21 = (byte)*puVar21 + cVar9;
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                 CONCAT11((byte)((uint)puVar17 >> 8) | (byte)*puVar21,(char)puVar17)
                                );
      *(byte *)puVar21 = (byte)*puVar21 + cVar9;
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                 CONCAT11((byte)((uint)puVar37 >> 8) | (byte)puVar40[0x18],
                                          (char)puVar37));
      puVar43 = puStackY_30;
      puVar45 = puStackY_2c;
code_r0x00402966:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      bVar8 = (byte)((uint)puVar40 >> 8) | *(byte *)((int)puVar37 + 7);
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar8,(char)puVar40));
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + '~');
code_r0x00402971:
      uVar54 = (uint)in_SS;
      uVar47 = uStack_4;
code_r0x00402972:
      uVar32 = (undefined2)((uint)in_stack_fffffff0 >> 0x10);
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      uStack_4 = uVar47;
code_r0x00402974:
      bVar8 = 0xe9 < (byte)puVar21;
      in_stack_fffffff0 = CONCAT22(uVar32,in_CS);
      in_CS = 0x2d0a;
      uVar55 = func_0x00006128(in_stack_fffffff0);
      puVar17 = (uint *)uVar55;
      piVar16 = (int *)((int)((ulonglong)uVar55 >> 0x20) + -0x3d);
      *piVar16 = (int)((int)puVar43 + (uint)bVar8 + *piVar16);
      bVar51 = SCARRY4(*puVar17,(int)puVar17);
      *puVar17 = *puVar17 + (int)puVar17;
      uVar19 = *puVar17;
      puVar17 = extraout_ECX_02;
      uVar47 = uStack_4;
code_r0x00402982:
      bVar8 = POPCOUNT(uVar19 & 0xff);
      uStack_4 = uVar47;
      if (bVar51) {
        *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
        puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                   CONCAT11((byte)((uint)puVar17 >> 8) |
                                            *(byte *)((ulonglong)uVar55 >> 0x20),(char)puVar17));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar14 = (char *)((ulonglong)uVar55 >> 0x20);
      if ((bVar8 & 1) == 0) {
        *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
        *pcVar14 = *pcVar14 + (char)puVar17;
        uVar55 = CONCAT44(CONCAT22((short)((ulonglong)uVar55 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar55 >> 0x28) - pcVar14[0x1f],
                                            (char)((ulonglong)uVar55 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar55 >> 8),(char)uVar55 + '('));
code_r0x00402991:
        puVar37 = (uint *)((ulonglong)uVar55 >> 0x20);
        pbVar27 = (byte *)uVar55;
        bVar8 = (byte)uVar55;
        bVar51 = CARRY1(bVar8,*pbVar27);
        puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar55 >> 8),bVar8 + *pbVar27);
        uVar47 = uStack_4;
        cVar9 = bVar8 + *pbVar27;
        if (SCARRY1(bVar8,*pbVar27)) goto code_r0x004029c4;
code_r0x00402995:
        puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                   CONCAT11(((char)((uint)puVar37 >> 8) -
                                            *(byte *)((int)puVar37 + 0x6b)) - bVar51,(char)puVar37))
        ;
        bVar8 = (byte)puVar21;
        bVar51 = CARRY1(bVar8,(byte)*puVar21);
        bVar53 = SCARRY1(bVar8,(byte)*puVar21);
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar8 + (byte)*puVar21);
        uStack_4 = uVar47;
        do {
          uVar47 = uStack_4;
          if (!bVar53) {
            puVar43 = (uint *)((int)puVar43 + (uint)bVar51 + *puVar21);
            pbVar27 = (byte *)((int)puVar21 + *puVar21);
            bVar7 = (byte)pbVar27;
            *pbVar27 = *pbVar27 + bVar7;
            *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
            bVar8 = *pbVar27;
            *pbVar27 = *pbVar27 + bVar7;
            *puVar45 = (uint)((int)puVar40 + (uint)CARRY1(bVar8,bVar7) + *puVar45);
            *(uint *)(pbVar42 + 0x100002b) = *(uint *)(pbVar42 + 0x100002b) | (uint)puVar17;
            uVar25 = (undefined3)((uint)pbVar27 >> 8);
            bVar7 = bVar7 | (byte)*puVar43;
            puVar21 = (uint *)CONCAT31(uVar25,bVar7);
            uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
            uVar19 = *puVar21;
            uVar1 = *puVar21;
            *puVar21 = (uint)(*puVar21 + (int)puVar21);
            if (SCARRY4(uVar1,(int)puVar21)) {
              *(byte *)puVar43 = (byte)*puVar43 - (char)puVar40;
              *(byte *)puVar37 = (byte)*puVar37 + (char)puVar17;
              *(byte *)puVar45 = (byte)*puVar45 - (char)puVar40;
            }
            else {
              puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,uStack_4);
              in_SS = uStack_4;
              if (CARRY4(uVar19,(uint)puVar21)) goto code_r0x00402971;
              bVar51 = CARRY1(bVar7,(byte)*puVar21);
              bVar53 = SCARRY1(bVar7,(byte)*puVar21);
              puVar21 = (uint *)CONCAT31(uVar25,bVar7 + (byte)*puVar21);
code_r0x004029be:
              uVar47 = uStack_4;
              if (!bVar53) {
                puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,uStack_4);
                *(byte *)((int)puVar37 + -0x37) =
                     (*(byte *)((int)puVar37 + -0x37) - (char)((uint)puVar37 >> 8)) - bVar51;
                cVar9 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar9;
                bVar8 = (byte)puVar21;
                bVar51 = CARRY1(bVar8,(byte)*puVar21);
                bVar53 = SCARRY1(bVar8,(byte)*puVar21);
                puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar8 + (byte)*puVar21);
                uVar47 = uStack_4;
                goto code_r0x004029c6;
              }
            }
            bVar8 = (byte)puVar17;
            bVar51 = CARRY1((byte)*puVar37,bVar8);
            bVar53 = SCARRY1((byte)*puVar37,bVar8);
            *(byte *)puVar37 = (byte)*puVar37 + bVar8;
            uStack_4 = uVar47;
            if (bVar51) goto code_r0x00402966;
          }
code_r0x004029c6:
          uStack_4 = uStack_8;
          if (bVar53) goto code_r0x00402966;
          uVar54 = (uint)uVar47;
          *(uint *)((int)puVar37 + -0x23) =
               (*(int *)((int)puVar37 + -0x23) - (int)puVar43) - (uint)bVar51;
          uVar19 = *puVar21;
          bVar8 = (byte)puVar21;
          uVar1 = *puVar21;
          uVar25 = (undefined3)((uint)puVar21 >> 8);
          bVar7 = bVar8 + (byte)*puVar21;
          puVar21 = (uint *)CONCAT31(uVar25,bVar7);
          if (SCARRY1(bVar8,(byte)uVar1)) goto code_r0x00402972;
          in_stack_fffffff0 = CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),uVar47);
          cVar9 = (char)puVar37;
          bVar11 = ((char)((uint)puVar37 >> 8) - *(byte *)((int)puVar37 + -0xf)) -
                   CARRY1(bVar8,(byte)uVar19);
          puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar11,cVar9));
          puVar44 = (uint *)CONCAT31(uVar25,bVar7 + (byte)*puVar21);
          bVar8 = (byte)puVar17;
          uStack_4 = uVar47;
          if (SCARRY1(bVar7,(byte)*puVar21)) {
            *(byte *)puVar37 = (byte)*puVar37 + bVar8;
            uVar55 = CONCAT44(puVar37,(int)puVar44 + -0x1c37211);
            pcVar14 = (char *)((int)puVar44 + -0x1c3720a);
            *pcVar14 = *pcVar14 + bVar11;
            bVar8 = POPCOUNT(*pcVar14);
            goto code_r0x00402984;
          }
          puVar43 = (uint *)((int)puVar43 +
                            (-(uint)CARRY1(bVar7,(byte)*puVar21) - *(int *)((int)puVar37 + 5)));
          bVar51 = SCARRY4((int)puVar44,*puVar44);
          uVar19 = (int)puVar44 + *puVar44;
          uVar55 = CONCAT44(puVar37,uVar19);
          if (bVar51) goto code_r0x00402982;
          bVar7 = (byte)uVar19 + 0x8e;
          uVar20 = CONCAT31((int3)(uVar19 >> 8),bVar7 - CARRY4((uint)puVar44,*puVar44));
          *puVar40 = (*puVar40 - uVar20) -
                     (uint)((byte)uVar19 < 0x72 || bVar7 < CARRY4((uint)puVar44,*puVar44));
          pbVar27 = (byte *)(uVar20 - 0x5e);
          bVar7 = *pbVar27;
          *pbVar27 = *pbVar27 + bVar11;
          uVar19 = (uint)CARRY1(bVar7,bVar11);
          uVar1 = uVar20 - 0x32d72;
          puVar21 = (uint *)(uVar1 - uVar19);
          if (SBORROW4(uVar20,0x32d72) != SBORROW4(uVar1,uVar19)) goto code_r0x00402992;
          uVar50 = uVar49;
          if (uVar20 < 0x32d72 || uVar1 < uVar19) {
            *pbVar42 = *pbVar42 - (char)((uint)puVar21 >> 8);
            *(byte *)puVar37 = (byte)*puVar37 + bVar8;
            puVar44 = puVar43 + 1;
            out(*puVar43,CONCAT11(bVar11,cVar9));
            *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
            goto code_r0x00402a3e;
          }
          bVar51 = CARRY4((uint)puVar21,*puVar21);
          bVar53 = SCARRY4((int)puVar21,*puVar21);
          puVar21 = (uint *)((int)puVar21 + *puVar21);
          if (!bVar53) {
            uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar47);
            *(byte *)puVar43 = (byte)*puVar43 + bVar51;
            bVar7 = (byte)puVar21;
            *(byte *)((int)puVar37 + (int)pbVar42) = *(byte *)((int)puVar37 + (int)pbVar42) + bVar7;
            *(byte *)puVar40 = (byte)*puVar40 + cVar9;
            *(byte *)puVar40 = (byte)*puVar40 ^ bVar7;
            bVar30 = (byte)((uint)puVar17 >> 8);
            *(byte *)puVar43 = (byte)*puVar43 + bVar30;
            *(byte *)puVar21 = (byte)*puVar21 + bVar7;
            pbVar36 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7 | (byte)*puVar21);
            *(byte *)puVar17 = (byte)*puVar17 + cVar9;
            bVar13 = *pbVar36;
            uVar32 = (undefined2)((uint)puVar17 >> 0x10);
            puVar17 = (uint *)CONCAT22(uVar32,CONCAT11(bVar30 + bVar13,bVar8));
            pbVar36 = pbVar36 + (uint)CARRY1(bVar30,*pbVar36) + *(int *)pbVar36;
            *(byte *)puVar37 = (byte)*puVar37 + bVar8;
            pbVar42 = pbVar42 + iRam0355720b;
            pbVar27 = pbVar36 + 0x73;
            bVar7 = *pbVar27;
            *pbVar27 = *pbVar27 + bVar11;
            uVar25 = (undefined3)((uint)pbVar36 >> 8);
            bVar7 = (char)pbVar36 + CARRY1(bVar7,bVar11);
            pcVar14 = (char *)CONCAT31(uVar25,bVar7);
            *(byte *)puVar37 = (byte)*puVar37 + bVar8;
            if ((POPCOUNT((byte)*puVar37) & 1U) == 0) {
              in_SS = uVar47;
            }
            puVar46 = (uint *)((int)puVar45 + *(int *)(pbVar42 + 0x17));
            *pcVar14 = *pcVar14 + bVar7;
            cVar9 = bVar7 + 2;
            puVar21 = (uint *)CONCAT31(uVar25,cVar9);
            if (bVar7 < 0xfe) {
              *puVar21 = (uint)(*puVar21 + (int)puVar21);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar21 = (byte)*puVar21 + cVar9;
            uVar54 = *puVar37;
            puVar44 = (uint *)((int)puVar43 + puVar40[0x19]);
            *(byte *)puVar21 = (byte)*puVar21 + cVar9;
            puVar17 = (uint *)CONCAT22(uVar32,CONCAT11(bVar30 + bVar13 | (byte)*puVar21,
                                                       bVar8 | (byte)uVar54));
            puVar45 = puVar46;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    pbVar42[0x13b720b] = pbVar42[0x13b720b] + bVar8;
    pbVar27 = (byte *)((int)puVar21 + 0x73);
    bVar51 = CARRY1(*pbVar27,bVar7);
    *pbVar27 = *pbVar27 + bVar7;
  } while( true );
code_r0x00402992:
  pbVar27 = (byte *)((int)puVar21 + 0x2a);
  bVar51 = CARRY1(*pbVar27,bVar11);
  *pbVar27 = *pbVar27 + bVar11;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar21) = *(byte *)(in_GS_OFFSET + (int)puVar21) + (char)puVar21;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | *(byte *)((int)puVar45 + 0x66),
                                      (char)puVar17));
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402a3e:
  uVar25 = (undefined3)((uint)puVar21 >> 8);
  bVar8 = (byte)puVar21 | (byte)*puVar44;
  pcVar14 = (char *)CONCAT31(uVar25,bVar8);
  if ((char)bVar8 < '\0') {
    *pcVar14 = *pcVar14 + bVar8;
    cVar9 = bVar8 + 2;
    piVar16 = (int *)CONCAT31(uVar25,cVar9);
    if ((POPCOUNT(cVar9) & 1U) == 0) {
      *(char *)piVar16 = (char)*piVar16 + cVar9;
      bVar8 = bVar8 + 0x71;
      pcVar18 = (char *)CONCAT31(uVar25,bVar8);
      pcVar14 = (char *)segment(uVar50,(short)puVar40 + (short)puVar44);
      *pcVar14 = *pcVar14 + bVar8;
      uVar54 = puVar45[0x1a];
      *pcVar18 = *pcVar18 + bVar8;
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                 CONCAT11((byte)((uint)puVar17 >> 8) | (byte)uVar54 |
                                          *(byte *)((int)puVar45 + 0x69),(char)puVar17));
      *pcVar18 = *pcVar18 + bVar8;
      bVar8 = bVar8 | (byte)*puVar37;
      pcVar14 = (char *)CONCAT31(uVar25,bVar8);
      if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar43 = puVar44 + (uint)bVar52 * -2 + 1;
    out(*puVar44,(short)puVar37);
  }
  else {
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((char)((uint)puVar40 >> 8) + (byte)puVar40[6],(char)puVar40)
                              );
code_r0x00402a5d:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    piVar16 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
    puVar43 = puVar44;
  }
code_r0x00402a61:
  pcVar14 = (char *)segment(uVar50,(short)puVar40 + (short)puVar43);
  *pcVar14 = *pcVar14 + (char)piVar16;
  cVar9 = (char)puVar17;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | (byte)puVar45[0x1a],cVar9));
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  uVar32 = CONCAT11((byte)((uint)puVar37 >> 8) | *(byte *)((int)puVar37 + 0x65),(char)puVar37);
  puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar32);
  piVar22 = (int *)((int)piVar16 + *piVar16);
  puVar44 = puVar43;
  puVar46 = puVar45;
  uVar48 = uVar47;
  if (SCARRY4((int)piVar16,*piVar16)) goto code_r0x00402ae3;
  *(byte *)puVar37 = (byte)*puVar37 + cVar9;
  puVar44 = puVar43 + (uint)bVar52 * -2 + 1;
  out(*puVar43,uVar32);
code_r0x00402a75:
  bVar8 = (byte)((uint)puVar17 >> 8) | (byte)*puVar37;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar8,(char)puVar17));
  piVar16 = (int *)(uint)(byte)*puVar40;
  *(byte *)puVar44 = (byte)*puVar44 - bVar8;
  puVar46 = puVar45;
code_r0x00402a7f:
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  out(*puVar44,(short)puVar37);
  bVar8 = in((short)puVar37);
  *(byte *)puVar46 = bVar8;
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | (byte)*puVar37,(char)puVar17));
  iVar15 = *piVar16;
  cVar9 = in(1);
  puVar21 = (uint *)CONCAT31((int3)((uint)((int)piVar16 + *piVar16) >> 8),cVar9);
  *(char *)puVar21 = (char)*puVar21 + cVar9;
  puVar21 = (uint *)((uint)puVar21 | *puVar21);
  *(byte *)puVar17 = (byte)*puVar17 + (char)puVar37;
  puVar44 = (uint *)((int)puVar44 + (((uint)bVar52 * -8 + 4) - iVar15));
  puVar46 = (uint *)((int)puVar46 + (uint)bVar52 * -2 + 1);
  in_SS = uVar47;
  while( true ) {
    bVar8 = (byte)puVar21 | (byte)*puVar37;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar8);
    puVar45 = puVar46;
    if ((POPCOUNT(bVar8) & 1U) != 0) break;
    *(byte *)puVar21 = (byte)*puVar21 + bVar8;
code_r0x00402a9b:
    uVar25 = (undefined3)((uint)puVar21 >> 8);
    cVar9 = (char)puVar21 + '\r';
    piVar22 = (int *)CONCAT31(uVar25,cVar9);
    *(uint *)(pbVar42 + 2) = *(uint *)(pbVar42 + 2) | (uint)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar9;
    *(byte *)(puVar44 + -0xc800000) = (byte)puVar44[-0xc800000] + (char)puVar37;
    *(char *)piVar22 = (char)*piVar22 + cVar9;
    *(byte *)puVar37 = (byte)*puVar37 + cVar9;
    cVar10 = (char)puVar17;
    if ((POPCOUNT((byte)*puVar37) & 1U) != 0) {
      *(byte *)puVar37 = (byte)*puVar37 + cVar10;
      puVar43 = puVar44 + (uint)bVar52 * -2 + 1;
      out(*puVar44,(short)puVar37);
      piVar16 = (int *)((longlong)*piVar22 * 0x7b020a00);
      *(char *)piVar16 =
           (char)*piVar16 - ((longlong)(int)piVar16 != (longlong)*piVar22 * 0x7b020a00);
      pbVar27 = (byte *)((int)puVar45 + (int)pbVar42 * 2);
      *pbVar27 = *pbVar27;
      goto code_r0x00402a61;
    }
    *(char *)piVar22 = (char)*piVar22 + cVar9;
    puVar21 = (uint *)CONCAT31(uVar25,(char)puVar21 + ':');
    puVar43 = (uint *)((uint)puVar44 | *(uint *)((int)puVar37 + -0x79));
    iVar15 = (int)puVar21 + *puVar21;
    if (SCARRY4((int)puVar21,*puVar21)) {
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((char)((uint)puVar40 >> 8) + (byte)puVar43[(int)puVar40],
                                          (char)puVar40));
      *(char *)((int)puVar37 * 2) = *(char *)((int)puVar37 * 2) + (char)iVar15;
      puVar46 = puVar45;
      goto code_r0x00402b33;
    }
    uVar25 = (undefined3)((uint)iVar15 >> 8);
    cVar9 = (char)iVar15 + CARRY4((uint)puVar21,*puVar21);
    piVar16 = (int *)CONCAT31(uVar25,cVar9);
    *(byte *)puVar37 = (byte)*puVar37 + cVar10;
    bVar51 = (POPCOUNT((byte)*puVar37) & 1U) != 0;
    if ((bVar51) && (bVar51)) goto code_r0x00402a61;
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    cVar41 = cVar9 + '(';
    pcVar14 = (char *)CONCAT31(uVar25,cVar41);
    puVar46 = puVar45 + (uint)bVar52 * -2 + 1;
    uVar54 = in((short)puVar37);
    *puVar45 = uVar54;
    *pcVar14 = *pcVar14 + cVar41;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11((byte)((uint)puVar17 >> 8) | bRama07b0222,cVar10));
    *pcVar14 = *pcVar14 + cVar41;
    pcVar14 = (char *)CONCAT31(uVar25,cVar9 + '>');
code_r0x00402ad2:
    out(*puVar43,(short)puVar37);
    puVar44 = (uint *)((int)(puVar43 + (uint)bVar52 * -2 + 1) + (uint)bVar52 * -2 + 1);
    out((byte)puVar43[(uint)bVar52 * -2 + 1],(short)puVar37);
    bVar8 = (byte)pcVar14;
    *pcVar14 = *pcVar14 + bVar8;
    puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(byte)puVar40 | (byte)*puVar46);
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    uVar25 = (undefined3)((uint)pcVar14 >> 8);
    bVar8 = bVar8 + in_AF * -6;
    puVar37 = (uint *)((uint)puVar37 ^ *puVar37);
    cVar9 = bVar8 + (0x9f < bVar8 | in_AF * (bVar8 < 6)) * -0x60 + (byte)*puVar37;
    piVar16 = (int *)CONCAT31(uVar25,cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    piVar22 = (int *)CONCAT31(uVar25,cVar9 + '\x17');
    uVar48 = uVar47;
code_r0x00402ae3:
    out(*puVar44,(short)puVar37);
    puVar43 = puVar44 + (uint)bVar52 * -2 + 1 + (uint)bVar52 * -2 + 1;
    out(puVar44[(uint)bVar52 * -2 + 1],(short)puVar37);
    *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
code_r0x00402ae7:
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) | pbVar42[-0x60],(char)puVar40));
    cVar9 = (char)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar9;
    uVar25 = (undefined3)((uint)piVar22 >> 8);
    bVar8 = cVar9 + 2;
    puVar21 = (uint *)CONCAT31(uVar25,bVar8);
    uVar47 = uVar48;
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *(byte *)puVar21 = (byte)*puVar21 + bVar8;
      cVar9 = cVar9 + '}';
      puVar21 = (uint *)CONCAT31(uVar25,cVar9);
      *(byte *)puVar21 = ((byte)*puVar21 - cVar9) - (0x84 < bVar8);
      pbVar27 = (byte *)((int)puVar37 + (int)puVar21);
      *pbVar27 = *pbVar27 + cVar9;
      bVar8 = POPCOUNT(*pbVar27);
      puVar44 = puVar43;
code_r0x00402af9:
      uVar47 = uVar48;
      puVar45 = puVar46;
      if ((bVar8 & 1) == 0) {
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        bVar8 = (byte)puVar17;
        *(byte *)puVar37 = (byte)*puVar37 + bVar8;
        uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
        puVar43 = puVar44 + (uint)bVar52 * -2 + 1;
        out(*puVar44,(short)puVar37);
        uVar54 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + bVar8;
        iVar15 = CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'o') +
                 *(int *)((int)puVar37 * 2) + (uint)CARRY1((byte)uVar54,bVar8);
        pcVar14 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '(');
        while( true ) {
          uVar54 = *puVar37;
          bVar7 = (byte)puVar17;
          *(byte *)puVar37 = (byte)*puVar37 + bVar7;
          pcVar14 = pcVar14 + (uint)CARRY1((byte)uVar54,bVar7) + iRam73280512;
          bVar8 = (byte)pcVar14;
          *pcVar14 = *pcVar14 + bVar8;
          puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                     CONCAT11((byte)((uint)puVar17 >> 8) | bRam7d160243,bVar7));
          bVar52 = ((uint)uStackY_28 & 0x400) != 0;
          in_AF = ((uint)uStackY_28 & 0x10) != 0;
          *pcVar14 = *pcVar14 + bVar8;
          uVar25 = (undefined3)((uint)pcVar14 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar25,bVar8 + 2) + (uint)(0xfd < bVar8);
          cVar9 = bVar8 + 4;
          if (SCARRY1(bVar8 + 2,'\x02') != cVar9 < '\0') break;
          *(char *)CONCAT31(uVar25,cVar9) = *(char *)CONCAT31(uVar25,cVar9) + cVar9;
          iVar15 = CONCAT31(uVar25,bVar8 + 0x16);
code_r0x00402b33:
          piVar22 = (int *)(iVar15 + 0xe2802);
          *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)puVar17 >> 8);
          uVar48 = uVar47;
          uVar47 = in_SS;
          while( true ) {
            bVar7 = (byte)puVar40 | (byte)((uint)puVar17 >> 8);
            puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar7);
            *piVar22 = (int)(*piVar22 + (int)piVar22);
            cVar9 = (char)piVar22;
            *(byte *)puVar37 = (byte)*puVar37 + cVar9;
            if ((POPCOUNT((byte)*puVar37) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar22 = (char)*piVar22 + cVar9;
            uVar54 = CONCAT31((int3)((uint)piVar22 >> 8),cVar9 + '\x13');
            puVar21 = (uint *)(uVar54 + 0x19061224 + (uint)(0x1f9edfd < uVar54));
            uVar1 = (uint)(0xe4ffffdd < uVar54 + 0xfe061202 ||
                          CARRY4(uVar54 + 0x19061224,(uint)(0x1f9edfd < uVar54)));
            uVar19 = *puVar43;
            uVar54 = *puVar43;
            *puVar43 = (uint)((byte *)(uVar54 + (int)puVar21) + uVar1);
            bVar8 = POPCOUNT(*puVar43 & 0xff);
            puVar44 = puVar43;
            if ((SCARRY4(uVar19,(int)puVar21) != SCARRY4((int)(uVar54 + (int)puVar21),uVar1)) ==
                (int)*puVar43 < 0) goto code_r0x00402af9;
            bVar8 = (byte)puVar21;
            *(byte *)puVar21 = (byte)*puVar21 + bVar8;
            iVar15 = CONCAT31((int3)((uint)puVar21 >> 8),bVar8 + 2) + 0x9d7d + (uint)(0xfd < bVar8);
            bVar8 = (byte)puVar37 | (byte)*puVar37;
            uVar54 = *puVar40;
            *(byte *)puVar40 = (byte)*puVar40 + bVar7;
            pcVar14 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x12') + 0x228b26
                               + *puVar46 + (uint)CARRY1((byte)uVar54,bVar7));
            cVar9 = bVar8 + (byte)*puVar17;
            puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),cVar9);
            if (SCARRY1(bVar8,(byte)*puVar17) == cVar9 < '\0') break;
            *pcVar14 = *pcVar14 + (char)pcVar14;
            cVar9 = (char)pcVar14 + '\x02';
            pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9);
            bVar8 = POPCOUNT(cVar9);
            uVar48 = uVar47;
code_r0x00402b7a:
            puVar45 = puVar43;
            if ((bVar8 & 1) != 0) break;
            while( true ) {
              cVar9 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar9;
              uVar25 = (undefined3)((uint)pcVar14 >> 8);
              pcVar14 = (char *)CONCAT31(uVar25,cVar9 + '\x13');
              *(byte *)puVar17 = (byte)*puVar17 | (byte)puVar37;
              *(byte *)puVar46 = (byte)*puVar46 | (byte)puVar37;
              *puVar37 = (uint)(pcVar14 + *puVar37);
              uVar32 = (undefined2)((uint)puVar40 >> 0x10);
              uVar39 = SUB41(puVar40,0);
              cVar10 = (char)((uint)puVar40 >> 8) + *(byte *)((int)puVar40 + -0x5f);
              puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(cVar10,uVar39));
              *pcVar14 = *pcVar14 + cVar9 + '\x13';
              piVar22 = (int *)CONCAT31(uVar25,cVar9 + -0x7a);
              uVar54 = *puVar37;
              *(byte *)puVar37 = (byte)*puVar37 + (char)puVar17;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar54,(char)puVar17) == (char)(byte)*puVar37 < '\0') break;
              *(char *)piVar22 = (char)*piVar22 + cVar9 + -0x7a;
              cVar41 = cVar9 + -0x78;
              piVar22 = (int *)CONCAT31(uVar25,cVar41);
              uVar5 = uVar48;
              if ((POPCOUNT(cVar41) & 1U) != 0) break;
              *(char *)piVar22 = (char)*piVar22 + cVar41;
              pcVar14 = (char *)CONCAT31(uVar25,cVar9 + -0x65);
              *puVar17 = *puVar17 | (uint)puVar37;
              *puVar46 = *puVar46 | (uint)puVar37;
              pbVar27 = (byte *)((int)puVar17 + -1);
              cVar10 = cVar10 + *(byte *)((int)puVar40 + -0x5e);
              puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(cVar10,uVar39));
              *pcVar14 = *pcVar14 + cVar9 + -0x65;
              bVar8 = cVar9 + 10;
              puVar21 = (uint *)CONCAT31(uVar25,bVar8);
              bVar7 = (byte)pbVar27;
              *(byte *)puVar37 = (byte)*puVar37 + bVar7;
              puVar43 = puVar45 + (uint)bVar52 * -2 + 1;
              out(*puVar45,(short)puVar37);
              uVar54 = *puVar37;
              *(byte *)puVar37 = (byte)*puVar37 + bVar7;
              uVar20 = (uint)CARRY1((byte)uVar54,bVar7);
              uVar54 = *puVar37;
              uVar19 = *puVar37;
              pbVar36 = pbVar27 + uVar19 + uVar20;
              uVar6 = *puVar37;
              cRam130a0000 = cRam130a0000 - cVar10;
              uVar1 = *puVar37;
              pbVar42 = (byte *)((uint)pbVar42 | *puVar21);
              *(byte *)puVar21 = (char)*puVar21 + bVar8;
              puVar17 = (uint *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar36 >> 8) | bRam7d170243,
                                                  (char)pbVar36 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar27,uVar54) ||
                                                  CARRY4((uint)(pbVar27 + uVar19),uVar20))));
              bVar52 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar21 = (char)*puVar21 + bVar8;
              bVar51 = 0xfd < bVar8;
              pcVar14 = (char *)CONCAT31(uVar25,cVar9 + '\f');
              puVar37 = (uint *)((uint)puVar37 | uVar1);
code_r0x00402bd1:
              uVar54 = *puVar40;
              uVar19 = *puVar40;
              *puVar40 = (uint)((byte *)(uVar19 + (int)puVar17) + bVar51);
              bVar8 = POPCOUNT(*puVar40 & 0xff);
              uVar48 = in_SS;
              if ((SCARRY4(uVar54,(int)puVar17) !=
                  SCARRY4((int)(uVar19 + (int)puVar17),(uint)bVar51)) == (int)*puVar40 < 0)
              goto code_r0x00402b7a;
              cVar9 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar9;
              pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + '\x02');
              if (SCARRY1(cVar9,'\x02') == (char)(cVar9 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar14 = *pcVar14 + (char)pcVar14;
                pcVar14 = (char *)(CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12') |
                                  *puVar37);
                *(byte *)puVar46 = (byte)*puVar46 - (char)puVar17;
                *pcVar14 = *pcVar14 + (char)pcVar14;
                puVar37 = (uint *)((int)puVar37 - *puVar43);
                bVar8 = (byte)puVar40 | (byte)((uint)puVar17 >> 8);
                cVar9 = *pcVar14;
                uVar25 = (undefined3)((uint)pcVar14 >> 8);
                pcVar14 = (char *)CONCAT31(uVar25,cVar9);
                *pcVar14 = *pcVar14 + cVar9;
                pcVar18 = (char *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                           CONCAT11((char)((uint)puVar40 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar40 >> 8),
                                                                       bVar8) + -0x5b),bVar8));
                *pcVar14 = *pcVar14 + cVar9;
                bVar51 = false;
                pcVar14 = (char *)(CONCAT31(uVar25,cVar9 + '\x13') | *puVar37);
                do {
                  bVar7 = (byte)puVar17;
                  bVar8 = bVar7 + (byte)puVar43[(int)puVar46 * 2];
                  puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar8 + bVar51);
                  uVar54 = (uint)(CARRY1(bVar7,(byte)puVar43[(int)puVar46 * 2]) ||
                                 CARRY1(bVar8,bVar51));
                  pcVar23 = pcVar14 + 0x1b000019 + uVar54;
                  piVar16 = (int *)((int)puVar46 * 2 + 0x40000a5);
                  *piVar16 = (int)((int)puVar17 +
                                  (uint)((char *)0xe4ffffe6 < pcVar14 ||
                                        CARRY4((uint)(pcVar14 + 0x1b000019),uVar54)) + *piVar16);
                  puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 + cRam00009d7d
                                            );
                  uVar25 = (undefined3)((uint)pcVar23 >> 8);
                  bVar8 = (char)pcVar23 + 0x12;
                  in_AF = 9 < (bVar8 & 0xf) | in_AF;
                  uVar54 = CONCAT31(uVar25,bVar8 + in_AF * -6) & 0xffffff0f;
                  pcVar14 = (char *)CONCAT22((short)(uVar54 >> 0x10),
                                             CONCAT11((char)((uint)pcVar23 >> 8) - in_AF,
                                                      (char)uVar54));
                  pbVar27 = (byte *)((uint)pbVar42 | *(uint *)CONCAT31(uVar25,bVar8));
                  while( true ) {
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    puVar45 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),
                                               (byte)puVar37 | (byte)*puVar37);
                    puVar46 = (uint *)((uint)puVar46 | (uint)puVar43);
                    uVar54 = (uint)pcVar18 | (uint)puVar43;
                    pbVar42 = pbVar27 + 1;
                    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar47);
                    cVar9 = (char)(pcVar14 + 0x1b000019);
                    uVar25 = (undefined3)((uint)(pcVar14 + 0x1b000019) >> 8);
                    cVar10 = cVar9 + -0x13;
                    pcVar14 = (char *)CONCAT31(uVar25,cVar10);
                    uVar32 = (undefined2)(uVar54 >> 0x10);
                    cVar41 = (char)(uVar54 >> 8) + *(char *)(uVar54 - 0x5e);
                    puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(cVar41,(byte)uVar54));
                    *pcVar14 = *pcVar14 + cVar10;
                    pcVar14 = (char *)(CONCAT31(uVar25,cVar9 + '\x19') | *puVar45);
                    bVar8 = (byte)pcVar14;
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      pbVar27 = (byte *)((int)puVar45 + (int)pcVar14);
                      bVar51 = CARRY1(*pbVar27,bVar8);
                      *pbVar27 = *pbVar27 + bVar8;
                      puVar37 = puVar45;
                      goto code_r0x00402bd1;
                    }
                    *pcVar14 = *pcVar14 + bVar8;
                    uVar25 = (undefined3)((uint)pcVar14 >> 8);
                    pcVar18 = (char *)CONCAT31(uVar25,bVar8 + 0x6f);
                    puVar37 = (uint *)((int)puVar45 + 1);
                    *pcVar18 = *pcVar18 + bVar8 + 0x6f;
                    bVar7 = (byte)uVar54 | (byte)((uint)pcVar14 >> 8);
                    pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x5c);
                    cVar41 = cVar41 + *(char *)(CONCAT31((int3)((uint)puVar40 >> 8),bVar7) + -0x5f);
                    puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(cVar41,bVar7));
                    *pcVar14 = *pcVar14 + bVar8 + 0x5c;
                    pcVar14 = (char *)(CONCAT31(uVar25,bVar8 + 0x88) | *puVar37);
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)puVar17 >> 8);
                      uStackY_28 = (uint *)((uint)uStackY_28._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    uVar25 = (undefined3)((uint)pcVar14 >> 8);
                    cVar9 = (char)pcVar14 + 'o';
                    puVar37 = (uint *)((int)puVar45 + 2);
                    *(char *)CONCAT31(uVar25,cVar9) = *(char *)CONCAT31(uVar25,cVar9) + cVar9;
                    pcVar18 = (char *)CONCAT31((int3)((uint)puVar40 >> 8),
                                               bVar7 | (byte)((uint)pcVar14 >> 8));
                    pcVar14 = (char *)(CONCAT31(uVar25,cVar9) | 2);
                    pbVar27[-0x62] = pbVar27[-0x62] + 1;
                    bVar8 = (byte)pcVar14;
                    *pcVar14 = *pcVar14 + bVar8;
                    bVar51 = 0xfd < bVar8;
                    cVar9 = bVar8 + 2;
                    pcVar14 = (char *)CONCAT31(uVar25,cVar9);
                    uVar50 = uVar47;
                    if (SCARRY1(bVar8,'\x02') != cVar9 < '\0') break;
                    *pcVar14 = *pcVar14 + cVar9;
                    bVar7 = bVar8 + 10;
                    pcVar14 = (char *)CONCAT31(uVar25,bVar7);
                    *pcVar14 = *pcVar14 - cVar41;
                    cVar10 = (char)puVar17;
                    *(byte *)puVar37 = *(byte *)puVar37 + cVar10;
                    pbVar27[-0x62] = pbVar27[-0x62] + 1;
                    *pcVar14 = *pcVar14 + bVar7;
                    cVar9 = bVar8 + 0xc;
                    pcVar14 = (char *)CONCAT31(uVar25,cVar9);
                    if (SCARRY1(bVar7,'\x02') == cVar9 < '\0') {
                      *pcVar14 = *pcVar14 + cVar9;
                      *(byte *)puVar17 = (byte)*puVar17 - cVar41;
                      *(byte *)puVar37 = *(byte *)puVar37 + cVar10;
                      cVar9 = (bVar8 + 0x13) - (byte)puVar17[0x13];
                      pcVar14 = (char *)CONCAT31(uVar25,cVar9);
                      *pcVar14 = *pcVar14 + cVar9;
                      pcVar23 = (char *)CONCAT31(uVar25,cVar9 + *pcVar14);
                      *pcVar23 = *pcVar23 + cVar9 + *pcVar14;
                      pcVar23 = pcVar23 + *puVar17;
                      *pcVar23 = *pcVar23 + (char)pcVar23;
                      LOCK();
                      pcVar14 = *(char **)pcVar23;
                      *(char **)pcVar23 = pcVar23;
                      UNLOCK();
                      *pcVar14 = *pcVar14 + (char)pcVar14;
                      pbVar36 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)*puVar17);
                      *pbVar36 = *pbVar36 + (byte)*puVar17;
                      goto code_r0x00402c8d;
                    }
                    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),
                                               cVar10 + *pcVar18 + (0xfd < bVar7));
                    *(byte *)puVar46 = (byte)*puVar46 - cVar41;
                    pbVar27 = pbVar42;
                  }
                } while( true );
              }
              puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                         CONCAT11((char)((uint)puVar40 >> 8) +
                                                  *(byte *)((int)puVar40 + -99),(char)puVar40));
              puVar45 = puVar43;
            }
            *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
            puVar37 = (uint *)((int)puVar37 - *puVar45);
            puVar43 = puVar45;
            uVar48 = uVar47;
            uVar47 = uVar5;
          }
          *(byte *)puVar37 = (byte)*puVar37 + (char)puVar17;
          pcVar14 = pcVar14 + -0x7d160243;
        }
        pcVar14 = (char *)CONCAT31(uVar25,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar17;
    uVar54 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
    *puVar46 = (uint)((int)puVar37 + (uint)CARRY1((byte)uVar54,(byte)puVar21) + *puVar46);
    puVar44 = puVar43;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar12 = (char)puVar17;
      cVar29 = (char)((uint)puVar17 >> 8) + (char)((uint)pbVar36 >> 8);
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(cVar29,cVar12));
      cVar9 = (char)pbVar36;
      *pbVar36 = *pbVar36 + cVar9;
      pcVar14 = (char *)((int)pbVar36 * 2 + 0x1a10000);
      cVar41 = (char)((uint)pcVar18 >> 8);
      *pcVar14 = *pcVar14 + cVar41;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
      pbVar36[-0x47ffffff] = pbVar36[-0x47ffffff] + cVar41;
      *(byte **)pbVar36 = pbVar36 + *(int *)pbVar36;
      bVar7 = (byte)puVar37;
      *(byte *)puVar46 = (byte)*puVar46 + bVar7;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + bVar7;
      *pbVar36 = *pbVar36 + cVar9;
      *puVar43 = (uint)(*puVar43 + (int)puVar43);
      uVar32 = (undefined2)((uint)pcVar18 >> 0x10);
      cVar41 = cVar41 + (byte)puVar43[(int)pcVar18];
      pcVar14 = (char *)CONCAT22(uVar32,CONCAT11(cVar41,(char)pcVar18));
      pcVar14[(int)pbVar36] = pcVar14[(int)pbVar36] + cVar9;
      *(byte *)puVar37 = *(byte *)puVar37 - cVar41;
      *(byte *)puVar37 = *(byte *)puVar37 + cVar12;
      uVar25 = (undefined3)((uint)pbVar36 >> 8);
      bVar8 = cVar9 - *pbVar36;
      *pcVar14 = *pcVar14 + bVar7;
      *(byte *)puVar37 = *(byte *)puVar37 ^ bVar8;
      *(byte *)puVar37 = *(byte *)puVar37 + bVar8;
      *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
      uVar54 = *puVar17;
      *(byte *)puVar17 = (byte)*puVar17 + bVar7;
      cVar10 = bVar8 + *(char *)CONCAT31(uVar25,bVar8) + CARRY1((byte)uVar54,bVar7);
      pcVar18 = (char *)CONCAT22(uVar32,CONCAT11(cVar41 + pbVar27[-0x60],(char)pcVar18));
      *(char *)CONCAT31(uVar25,cVar10) = *(char *)CONCAT31(uVar25,cVar10) + cVar10;
      cVar41 = cVar10 + '\x12';
      pbVar36 = (byte *)CONCAT31(uVar25,cVar41);
      cVar9 = *pcVar18;
      *pcVar18 = *pcVar18 + cVar41;
      if (SCARRY1(cVar9,cVar41) != *pcVar18 < '\0') break;
code_r0x00402c8d:
      cVar9 = (char)pbVar36;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
      *(byte *)puVar37 = *(byte *)puVar37 + cVar9;
      *pbVar36 = *pbVar36 + cVar9;
    }
    *pbVar36 = *pbVar36 + cVar41;
    pbVar36 = (byte *)CONCAT31(uVar25,cVar10 + '$');
    *pbVar36 = *pbVar36 + cVar29;
    bVar8 = *(byte *)puVar37;
    *(byte *)puVar37 = *(byte *)puVar37 + cVar12;
    uVar48 = uVar47;
    uVar50 = uVar49;
  } while (SCARRY1(bVar8,cVar12) == (char)*(byte *)puVar37 < '\0');
  do {
    cVar9 = (char)pbVar36;
    *pbVar36 = *pbVar36 + cVar9;
    uVar25 = (undefined3)((uint)pbVar36 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar37;
    bVar7 = cVar9 + 0x24;
    cVar41 = (char)((uint)pcVar18 >> 8);
    pcVar18[-0x62] = pcVar18[-0x62] + cVar41;
    *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
    bVar8 = cVar9 + 0x2fU + (byte)*puVar17;
    cVar10 = bVar8 + (0xf4 < bVar7);
    cVar9 = cVar10 + *(char *)CONCAT31(uVar25,cVar10) +
            (CARRY1(cVar9 + 0x2fU,(byte)*puVar17) || CARRY1(bVar8,0xf4 < bVar7));
    pcVar14 = (char *)CONCAT31(uVar25,cVar9);
    *pcVar14 = *pcVar14 - (char)puVar37;
    *pcVar14 = *pcVar14 + cVar9;
    pcVar23 = (char *)((int)puVar37 - *puVar37);
    *(byte *)(puVar43 + (int)pcVar18) = (byte)puVar43[(int)pcVar18] + cVar41;
    pcVar14[(int)pbVar42] = pcVar14[(int)pbVar42] + cVar9;
    *pcVar23 = *pcVar23 + (char)puVar17;
    pcVar14 = (char *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                               CONCAT11((char)((uint)pbVar36 >> 8) - *pcVar23,cVar9));
    uVar54 = *puVar46;
    *pcVar14 = *pcVar14 - (char)((uint)pcVar23 >> 8);
    *pcVar14 = *pcVar14 + cVar9;
    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar48);
    pbVar27 = (byte *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                               CONCAT11(cVar41 - (byte)*puVar43,(char)pcVar18));
    pbVar42 = pbVar42 + *(int *)(pbVar27 + (int)puVar17);
    puVar45 = (uint *)CONCAT31((int3)((uint)pcVar23 >> 8),(char)pcVar23 + (byte)uVar54);
    while( true ) {
      puVar37 = puVar45;
      uVar32 = (undefined2)((uint)pbVar27 >> 0x10);
      bVar13 = (char)((uint)pbVar27 >> 8) + pbVar27[0x18];
      *pcVar14 = *pcVar14 + (char)pcVar14;
      pbVar36 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
      cVar9 = (char)puVar17;
      *(byte *)puVar37 = (byte)*puVar37 + cVar9;
      uVar54 = *puVar43;
      bVar11 = (byte)((uint)puVar17 >> 8);
      bVar8 = *pbVar36;
      pbVar36 = pbVar36 + (uint)CARRY1(bVar11,*pbVar36) + *(int *)pbVar36;
      *(byte *)puVar37 = (byte)*puVar37 + cVar9;
      cVar10 = ((char)pbVar27 - (byte)uVar54) - (byte)*puVar43;
      bVar7 = *(byte *)((int)puVar46 + 0x1a);
      *pbVar36 = *pbVar36 + (char)pbVar36;
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                 CONCAT11(bVar11 + bVar8 + bVar7 | (byte)*puVar37,cVar9));
      pbVar36 = pbVar36 + *puVar37;
      if ((POPCOUNT((uint)pbVar36 & 0xff) & 1U) != 0) break;
      *pbVar36 = *pbVar36 + (char)pbVar36;
      bVar8 = (char)pbVar36 + 0x6f;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar36 >> 8),bVar8);
      pcVar18 = (char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar13,(char)pbVar27)) >> 8),
                                  cVar10) + -1);
      *pcVar14 = *pcVar14 + bVar8;
      *pcVar14 = *pcVar14 + bVar8;
      *pcVar18 = *pcVar18 + (byte)puVar37;
      *(byte *)((int)pcVar14 * 2) = *(byte *)((int)pcVar14 * 2) ^ bVar8;
      uVar4 = *(undefined6 *)pcVar14;
      uVar48 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar14 = (char *)uVar4;
      *pcVar14 = *pcVar14 + (char)uVar4;
      *(byte *)puVar43 = (byte)*puVar43 + (char)uVar4;
      pcVar14 = (char *)((uint)pcVar14 | 0x73110008);
      bVar13 = (byte)((uint)pcVar18 >> 8);
      *(byte *)puVar46 = (byte)*puVar46 - bVar13;
      *(byte *)puVar37 = (byte)*puVar37 + cVar9;
      puVar45 = puVar43 + (uint)bVar52 * -2 + 1;
      out(*puVar43,(short)puVar37);
      *pcVar14 = *pcVar14;
      cVar9 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar9;
      bVar8 = pbVar42[-0x5a];
      uVar32 = (undefined2)((uint)pcVar18 >> 0x10);
      cVar10 = (char)pcVar18;
      *pcVar14 = *pcVar14 + cVar9;
      cVar9 = cVar9 + '\x02';
      uVar54 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar9);
      puVar17 = (uint *)(uVar54 | 0x73110000);
      puVar43 = puVar45 + (uint)bVar52 * -2 + 1;
      out(*puVar45,(short)puVar37);
      *(byte *)puVar17 = (byte)*puVar17;
      bVar11 = (byte)puVar37 | (byte)*puVar46;
      puVar45 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),bVar11);
      *(byte *)puVar17 = (byte)*puVar17 + cVar9;
      pcVar14 = (char *)(uVar54 | 0x7b1f1609);
      bVar52 = (uVar50 & 0x400) != 0;
      *(uint *)((int)puVar46 + -0x7d) = *(uint *)((int)puVar46 + -0x7d) | (uint)pbVar42;
      bVar7 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar7;
      bVar13 = bVar13 | bVar8 | *(byte *)((int)puVar43 + 0x19);
      pbVar27 = (byte *)CONCAT22(uVar32,CONCAT11(bVar13,cVar10));
      *pcVar14 = *pcVar14 + bVar7;
      uVar25 = (undefined3)((uint)pcVar14 >> 8);
      puVar43[(int)puVar46 * 2] =
           (uint)((int)puVar45 + (uint)(0xd2 < bVar7) + puVar43[(int)puVar46 * 2]);
      bVar8 = bVar7 + 0x2d ^ *(byte *)CONCAT31(uVar25,bVar7 + 0x2d);
      pcVar14 = (char *)CONCAT31(uVar25,bVar8);
      uVar54 = *puVar43;
      *(byte *)puVar43 = (byte)*puVar43 + bVar8;
      uVar50 = uVar48;
      if (CARRY1((byte)uVar54,bVar8)) {
        *pcVar14 = *pcVar14 + bVar8;
        bVar8 = bVar8 | pcVar14[0x4000019];
        pcVar14 = (char *)CONCAT31(uVar25,bVar8);
        if ('\0' < (char)bVar8) {
          *pcVar14 = *pcVar14 + bVar8;
          piVar16 = (int *)CONCAT31(uVar25,bVar8 + 0x28);
          *piVar16 = (int)piVar16 + (uint)(0xd7 < bVar8) + *piVar16;
          bVar30 = (byte)((uint6)uVar4 >> 8);
          *pbVar27 = *pbVar27 + bVar30;
          uVar33 = CONCAT11((byte)((uint)puVar37 >> 8) | bVar13,bVar11);
          puVar45 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar33);
          uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar48);
          bVar11 = in(uVar33);
          pbVar36 = (byte *)CONCAT31(uVar25,bVar11);
          bVar8 = *pbVar36;
          bVar51 = SCARRY1(*pbVar36,bVar11);
          *pbVar36 = *pbVar36 + bVar11;
          bVar7 = *pbVar36;
          puVar40 = puVar43;
          in_SS = uVar48;
          if (!CARRY1(bVar8,bVar11)) goto code_r0x00402e19;
          *pbVar36 = *pbVar36 + bVar11;
          bVar30 = bVar30 | *pbVar36;
          puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar30,cVar9));
          pcVar14 = (char *)CONCAT31(uVar25,bVar11 + *pbVar36);
          *pbVar27 = *pbVar27 + bVar30;
        }
        uVar25 = (undefined3)((uint)pcVar14 >> 8);
        bVar7 = (byte)pcVar14 | (byte)*puVar45;
        pbVar36 = (byte *)CONCAT31(uVar25,bVar7);
        puVar40 = puVar43 + (uint)bVar52 * -2 + 1;
        out(*puVar43,(short)puVar45);
        LOCK();
        bVar8 = *pbVar36;
        *pbVar36 = bVar7;
        UNLOCK();
        *(byte *)puVar45 = (byte)*puVar45 + (char)puVar17;
        piVar16 = (int *)(CONCAT31(uVar25,bVar8) + -0x1b7e07);
        *(byte *)puVar45 = (byte)*puVar45 + (char)puVar17;
        iVar15 = (int)puVar17 - *(int *)pbVar27;
        bVar8 = *(byte *)((int)puVar46 + -0x7a);
        uVar33 = (undefined2)((uint)iVar15 >> 0x10);
        *(char *)piVar16 = *(char *)piVar16 + (char)piVar16;
        bVar7 = (char)((uint)iVar15 >> 8) + bVar8 | *(byte *)((int)puVar46 + 0x17);
        *(char *)piVar16 = *(char *)piVar16 + (char)piVar16;
        uVar25 = (undefined3)(CONCAT22(uVar33,CONCAT11(bVar7,(byte)iVar15)) >> 8);
        bVar8 = (byte)iVar15 | *pbVar27;
        puVar17 = (uint *)CONCAT31(uVar25,bVar8);
        pbVar36 = (byte *)((int)piVar16 + *piVar16);
        puVar43 = puVar40;
        if (SCARRY4((int)piVar16,*piVar16)) goto code_r0x00402e0a;
        *(byte *)puVar17 = (byte)*puVar17 + bVar8;
        *(byte **)pbVar27 = (byte *)(*(int *)pbVar27 + (int)puVar45);
        piVar16 = (int *)CONCAT31(uVar25,bVar8 + 0x27);
        puVar17 = (uint *)CONCAT22(uVar33,CONCAT11(bVar7 + *(byte *)((int)puVar46 + -0x79),bVar8));
        *(byte *)piVar16 = (char)*piVar16 + bVar8 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar18 = (char *)CONCAT22(uVar32,CONCAT11(bVar13 | pbVar42[-0x62],cVar10));
  } while( true );
code_r0x00402dff:
  pbVar36 = (byte *)CONCAT22((short)((uint)piVar16 >> 0x10),
                             CONCAT11((byte)((uint)piVar16 >> 8) |
                                      *(byte *)((int)puVar45 + 0x2170411),(byte)piVar16));
  puVar43 = puVar40 + (uint)bVar52 * -2 + 1;
  out(*puVar40,(short)puVar45);
  *pbVar36 = (byte)piVar16;
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar17;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar36;
  *pbVar36 = *pbVar36 - cVar10;
  *pbVar36 = *pbVar36 + (char)pbVar36;
  bVar51 = false;
  bVar7 = (byte)((uint)puVar17 >> 8) | bRam052b0603;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar7,(char)puVar17));
  puVar40 = puVar43;
code_r0x00402e19:
  if (bVar7 == 0 || bVar51 != (char)bVar7 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar36;
  *pbVar36 = *pbVar36 + cRam89280411;
  piVar16 = (int *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                            CONCAT11((byte)((uint)pbVar36 >> 8) |
                                     *(byte *)((int)puVar45 + 0x7190411),cRam89280411));
  *(char *)piVar16 = (char)*piVar16 + cRam89280411;
  cVar9 = (char)puVar17;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | (byte)*puVar45,cVar9));
  puVar40 = (uint *)((int)puVar40 + *piVar16);
  pbVar36 = (byte *)((int)piVar16 + *piVar16);
  bVar7 = (byte)pbVar36;
  *pbVar36 = *pbVar36 + bVar7;
  *(byte *)puVar40 = (byte)*puVar40 + cVar9;
  bVar8 = *pbVar36;
  *pbVar36 = *pbVar36 + bVar7;
  *(byte **)pbVar36 = pbVar42 + (uint)CARRY1(bVar8,bVar7) + *(int *)pbVar36;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar36 >> 8),*pbVar36);
  *(byte *)puVar45 = (byte)*puVar45 + cVar9;
  puVar43 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(byte)puVar45 | (byte)*puVar45);
  pbVar36 = (byte *)((int)puVar43 + -0x43);
  *pbVar36 = *pbVar36 + (char)((uint)puVar45 >> 8);
  puVar45 = puVar43;
  puVar43 = puVar46;
  uVar50 = uVar47;
code_r0x00402e42:
  uVar47 = in_SS;
  puVar46 = puVar43;
  in_SS = uVar47;
  if (SCARRY4((int)piVar16,*piVar16)) goto code_r0x00402e6e;
  iVar15 = *(int *)((int)piVar16 + *piVar16);
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar17;
  piVar16 = (int *)(iVar15 + -0x8c6f);
  puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                             CONCAT11((byte)((uint)puVar45 >> 8) | *(byte *)((int)puVar45 + -0x3f),
                                      (char)puVar45));
  pbVar35 = (byte *)((int)piVar16 + *piVar16);
  pbVar36 = pbVar35;
  puVar46 = uStackY_28;
  if (SCARRY4((int)piVar16,*piVar16)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar35 = *pbVar35 + (char)pbVar35;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | (byte)*puVar45,(char)puVar17));
  puVar43 = puVar40 + (uint)bVar52 * -2 + 1;
  out(*puVar40,(short)puVar45);
  puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + (byte)*puVar46);
  puVar40 = puVar43 + (uint)bVar52 * -2 + 1;
  out(*puVar43,(short)puVar45);
  uVar50 = uVar47;
  in_SS = uVar48;
code_r0x00402e6e:
  uVar47 = uVar50;
  uVar25 = (undefined3)((uint)puVar45 >> 8);
  cVar9 = (char)puVar45 + (byte)*puVar46;
  puVar43 = puVar40 + (uint)bVar52 * -2 + 1;
  out(*puVar40,(short)CONCAT31(uVar25,cVar9));
  puVar45 = (uint *)CONCAT31(uVar25,cVar9 + (byte)*puVar46);
  puVar40 = puVar43 + (uint)bVar52 * -2 + 1;
  out(*puVar43,(short)puVar45);
  pbVar36 = (byte *)0x0;
  puVar43 = puVar46;
code_r0x00402e81:
  puVar46 = puVar43;
  bVar7 = (char)pbVar36 - *pbVar36;
  iVar15 = CONCAT31((int3)((uint)pbVar36 >> 8),bVar7);
  *pbVar27 = *pbVar27 + (char)puVar45;
  pbVar35 = (byte *)(iVar15 * 2);
  *pbVar35 = *pbVar35 ^ bVar7;
  pbVar35 = (byte *)(int)(short)iVar15;
  *pbVar35 = *pbVar35 + bVar7;
  *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar17;
  bVar8 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar7;
  *(byte **)(pbVar27 + -0x73) =
       (byte *)((int)puVar40 + (uint)CARRY1(bVar8,bVar7) + *(int *)(pbVar27 + -0x73));
  *pbVar35 = *pbVar35 + bVar7;
  bVar8 = (byte)puVar17 | (byte)*puVar45;
  puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar8);
  puVar43 = puVar40;
  if ((char)bVar8 < '\x01') goto code_r0x00402eb4;
  *pbVar35 = *pbVar35 + bVar7;
  pbVar36 = (byte *)CONCAT31((int3)(char)((uint)pbVar36 >> 8),bVar7 + 0x2d);
  puVar40[(int)puVar46 * 2] =
       (uint)((int)puVar45 + (uint)(0xd2 < bVar7) + puVar40[(int)puVar46 * 2]);
  pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar48);
  do {
    uVar54 = *puVar40;
    bVar8 = (byte)pbVar36;
    *(byte *)puVar40 = (byte)*puVar40 + bVar8;
    if (!CARRY1((byte)uVar54,bVar8)) break;
    *pbVar36 = *pbVar36 + bVar8;
    bVar8 = bVar8 | pbVar36[0x400001a];
    pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),bVar8);
    if ((char)bVar8 < '\x01') {
code_r0x00402ecc:
      *pbVar35 = *pbVar35 + (byte)pbVar35;
      uVar25 = (undefined3)((uint)pbVar35 >> 8);
      bVar8 = (byte)pbVar35 | pbVar35[0x400001b];
      pcVar14 = (char *)CONCAT31(uVar25,bVar8);
      if ((char)bVar8 < '\x01') {
        uVar54 = *puVar45;
        *(byte *)puVar45 = (byte)*puVar45 + (byte)puVar17;
        *(char *)((int)pcVar14 * 2) =
             *(char *)((int)pcVar14 * 2) - CARRY1((byte)uVar54,(byte)puVar17);
        bVar51 = 0x81 < bVar8;
        bVar8 = bVar8 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar35 = *pbVar35 + bVar8;
      puVar43 = puVar40;
code_r0x00402eb4:
      uVar25 = (undefined3)((uint)pbVar35 >> 8);
      bVar8 = (char)pbVar35 + 0x6f;
      pcVar14 = (char *)CONCAT31(uVar25,bVar8);
      *(byte **)pcVar14 = pbStackY_44;
      uVar54 = *puVar45;
      *(byte *)puVar45 = (byte)*puVar45 + (char)puVar17;
      pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar48);
      uVar49 = uVar48;
      if ((byte)*puVar45 != 0 && SCARRY1((byte)uVar54,(char)puVar17) == (char)(byte)*puVar45 < '\0')
      {
        *pcVar14 = *pcVar14 + bVar8;
        bVar7 = (char)pbVar35 + 0x9c;
        pbVar35 = (byte *)CONCAT31(uVar25,bVar7);
        puVar43[(int)puVar46 * 2] =
             (uint)((int)puVar45 + (uint)(0xd2 < bVar8) + puVar43[(int)puVar46 * 2]);
        pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar48);
        uVar54 = *puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + bVar7;
        puVar40 = puVar43;
        if (CARRY1((byte)uVar54,bVar7)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar40 = puVar43 + (uint)bVar52 * -2 + 1;
      out(*puVar43,(short)puVar45);
    }
    cVar9 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar9;
    uVar25 = (undefined3)((uint)pcVar14 >> 8);
    bVar8 = cVar9 + 0x6f;
    pcVar14 = (char *)CONCAT31(uVar25,bVar8);
    *(byte **)pcVar14 = pbStackY_44;
    uVar54 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + (byte)puVar17;
    pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar48);
    *(byte *)(puVar40 + 7) = ((byte)puVar40[7] - bVar13) - CARRY1((byte)uVar54,(byte)puVar17);
    *pcVar14 = *pcVar14 + bVar8;
    bVar7 = cVar9 + 0x9c;
    pcVar14 = (char *)CONCAT31(uVar25,bVar7);
    puVar40[(int)puVar46 * 2] =
         (uint)((int)puVar45 + (uint)(0xd2 < bVar8) + puVar40[(int)puVar46 * 2]);
    uVar54 = *puVar40;
    *(byte *)puVar40 = (byte)*puVar40 + bVar7;
    if (!CARRY1((byte)uVar54,bVar7)) goto code_r0x00402e7e;
    *pcVar14 = *pcVar14 + bVar7;
    bVar7 = bVar7 | pcVar14[0x400001c];
    pbVar36 = (byte *)CONCAT31(uVar25,bVar7);
    in_SS = uVar48;
    if ((char)bVar7 < '\x01') goto code_r0x00402f16;
    *pbVar36 = *pbVar36 + bVar7;
    pcVar14 = (char *)CONCAT31(uVar25,bVar7 + 0x6f);
    while( true ) {
      *(byte **)pcVar14 = pbStackY_44;
      uVar54 = *puVar45;
      *(byte *)puVar45 = (byte)*puVar45 + (byte)puVar17;
      *(uint *)((int)puVar40 + 0x1d) =
           (*(int *)((int)puVar40 + 0x1d) - (int)puVar46) - (uint)CARRY1((byte)uVar54,(byte)puVar17)
      ;
      bVar8 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar8;
      bVar7 = bVar8 + 0x2d;
      pbVar36 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar7);
      puVar40[(int)puVar46 * 2] =
           (uint)((int)puVar45 + (uint)(0xd2 < bVar8) + puVar40[(int)puVar46 * 2]);
      pbStackY_44 = (byte *)CONCAT22((short)((uint)pbStackY_44 >> 0x10),uVar48);
      uVar54 = *puVar40;
      *(byte *)puVar40 = (byte)*puVar40 + bVar7;
      if (!CARRY1((byte)uVar54,bVar7)) break;
      *pbVar36 = *pbVar36 + bVar7;
code_r0x00402f16:
      bVar8 = (byte)pbVar36 | pbVar36[0x400001d];
      puVar43 = (uint *)CONCAT31((int3)((uint)pbVar36 >> 8),bVar8);
      pbVar36 = pbVar42;
      if ((char)bVar8 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        pbVar42 = pbVar36;
        *(byte *)puVar43 = (byte)*puVar43 + (char)puVar43;
        uVar25 = (undefined3)((uint)puVar43 >> 8);
        cVar9 = (char)puVar43 + 'o';
        puVar37 = (uint *)CONCAT31(uVar25,cVar9);
        *puVar37 = (uint)pbStackY_44;
        cVar41 = (char)puVar17;
        *(byte *)puVar45 = (byte)*puVar45 + cVar41;
        pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar48);
        bVar8 = (byte)((uint)puVar45 >> 8);
        bVar51 = bVar8 < (byte)*puVar40;
        puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                   CONCAT11(bVar8 - (byte)*puVar40,(char)puVar45));
        if (bVar51) break;
        bVar51 = CARRY4((uint)puVar37,*puVar37);
        puVar43 = (uint *)((int)puVar37 + *puVar37);
        if (!SCARRY4((int)puVar37,*puVar37)) {
          bVar51 = CARRY4((uint)pbVar42,*puVar43);
          pbVar42 = pbVar42 + *puVar43;
        }
        *puVar43 = (*puVar43 - (int)puVar43) - (uint)bVar51;
        *(byte *)puVar45 = (byte)*puVar45 + cVar41;
        puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                   CONCAT11((char)((uint)puVar17 >> 8) + (byte)*puVar45,
                                            cVar41 - (byte)*puVar45));
        *(byte *)puVar43 = (byte)*puVar43 + (char)puVar43;
code_r0x00402f3b:
        cVar41 = (char)puVar45;
        *pbVar27 = *pbVar27 + cVar41;
        bVar8 = (byte)puVar43;
        *(byte *)((int)puVar43 * 2) = *(byte *)((int)puVar43 * 2) ^ bVar8;
        *(byte *)puVar43 = (byte)*puVar43 + bVar8;
        *(byte *)puVar43 = (byte)*puVar43 + cVar41;
        uVar54 = *puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + bVar8;
        *puVar45 = (uint)((int)puVar43 + (uint)CARRY1((byte)uVar54,bVar8) + *puVar45);
        pcVar14 = (char *)((uint)puVar43 | *puVar46);
        uVar25 = (undefined3)((uint)pcVar14 >> 8);
        cVar9 = (char)pcVar14 + *pcVar14;
        pcVar14 = (char *)CONCAT31(uVar25,cVar9);
        *pcVar14 = *pcVar14 + cVar9;
        cVar9 = cVar9 + *pcVar14;
        piVar16 = (int *)CONCAT31(uVar25,cVar9);
        *(char *)piVar16 = (char)*piVar16 + cVar9;
        iVar15 = LocalDescriptorTableRegister();
        *piVar16 = iVar15;
        bVar8 = *pbVar27;
        bVar31 = (byte)((uint)puVar17 >> 8);
        *pbVar27 = *pbVar27 + bVar31;
        iVar15 = *piVar16;
        uVar33 = (undefined2)((uint)puVar17 >> 0x10);
        bVar30 = (byte)puVar17;
        *(byte *)puVar40 = (byte)*puVar40 + cVar9;
        puVar43 = puVar40 + (uint)bVar52 * -2 + 1;
        out(*puVar40,(short)puVar45);
        *(byte *)puVar43 = (byte)*puVar43 + cVar9;
        bVar7 = *pbVar27;
        *(byte *)puVar45 = (byte)*puVar45 - bVar13;
        *(byte *)puVar43 = (byte)*puVar43 + cVar9;
        puVar37 = puVar43 + (uint)bVar52 * -2 + 1;
        out(*puVar43,(short)puVar45);
        *(byte *)puVar37 = (byte)*puVar37 + cVar9;
        bVar11 = *pbVar27;
        *(uint *)((int)puVar45 + -0x23) = *(uint *)((int)puVar45 + -0x23) & (uint)puVar37;
        puVar24 = (ushort *)((int)piVar16 + *piVar16);
        if (!SCARRY4((int)piVar16,*piVar16)) {
          *puVar24 = uVar49;
        }
        *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
        uVar34 = CONCAT11((char)((uint)puVar45 >> 8) + *(byte *)((int)puVar45 + -0x15),cVar41);
        puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar34);
        puVar43 = (uint *)((int)puVar24 + *(int *)puVar24);
        if (!SCARRY4((int)puVar24,*(int *)puVar24)) {
          *(ushort *)puVar43 = uVar49;
        }
        cVar9 = (char)puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + cVar9;
        cVar12 = ((bVar31 - (char)iVar15) - CARRY1(bVar8,bVar31) | bVar7 | bVar11) + (byte)*puVar43;
        puVar17 = (uint *)CONCAT22(uVar33,CONCAT11(cVar12,bVar30));
        uVar54 = *puVar45;
        *(byte *)puVar45 = (byte)*puVar45 + bVar30;
        if (CARRY1((byte)uVar54,bVar30)) {
          *(byte *)puVar43 = (byte)*puVar43 + cVar9;
          bVar8 = *(byte *)((int)puVar45 + 6);
          *(byte *)puVar45 = (byte)*puVar45 + bVar30;
          bVar7 = (cVar12 - (byte)*puVar37) + cRam14730307;
          *(byte *)puVar43 = (byte)*puVar43 + cVar9;
          bVar8 = bVar13 | bVar8 | *(byte *)((int)puVar45 + 0x2a);
          uVar54 = *puVar43;
          pbVar27 = (byte *)((int)puVar43 + (uint)CARRY1(bVar7,(byte)*puVar43) + *puVar43);
          *(byte *)puVar45 = (byte)*puVar45 + bVar30;
          cVar9 = cVar10 - (byte)*puVar37;
          cVar10 = bVar8 + *(char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar8,cVar10)) >> 8),
                                              cVar9) + 0x1e);
          *pbVar27 = *pbVar27 + (char)pbVar27;
          uVar25 = (undefined3)((uint)pbVar27 >> 8);
          bVar8 = (char)pbVar27 + 0x2aU & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
          pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar9)) + 0x1f);
          *pcVar14 = *pcVar14 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
          pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar9)) + 0x20);
          *pcVar14 = *pcVar14 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
          pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar9)) + 0x21);
          *pcVar14 = *pcVar14 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
          pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar9)) + 0x22);
          *pcVar14 = *pcVar14 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
          pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
          bVar7 = bVar7 + (byte)uVar54 + *pcVar14;
          uVar28 = CONCAT22(uVar33,CONCAT11(bVar7,bVar30));
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar10,cVar9)) + 0x25);
          *pcVar14 = *pcVar14 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
          pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
          pcVar18 = (char *)CONCAT22(uVar32,CONCAT11(cVar10 + *(char *)(CONCAT22(uVar32,CONCAT11(
                                                  cVar10,cVar9)) + 0x26),cVar9));
          *pcVar14 = *pcVar14 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
          cVar9 = bVar8 + 0x2a;
          pcVar14 = (char *)CONCAT31(uVar25,cVar9);
          if ((POPCOUNT(cVar9) & 1U) == 0) {
            *pcVar14 = *pcVar14 + cVar9;
            pbVar27 = (byte *)(CONCAT31(uVar25,bVar8 + 0x4f) + -0x33282610);
            bVar8 = *pbVar27;
            bVar11 = (byte)pbVar27;
            *pbVar27 = *pbVar27 + bVar11;
            uVar25 = (undefined3)((uint)pbVar27 >> 8);
            if (!CARRY1(bVar8,bVar11)) {
              if (!SCARRY1(bVar11,'\0')) {
                *pbVar27 = *pbVar27 + bVar11;
                uVar28 = CONCAT22(uVar33,CONCAT11(bVar7 | (byte)*puVar45,bVar30));
                bVar11 = bVar11 & (byte)*puVar45;
                *(char *)CONCAT31(uVar25,bVar11) = *(char *)CONCAT31(uVar25,bVar11) + bVar11;
                pcVar14 = (char *)CONCAT31(uVar25,bVar11 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar14 = (char *)CONCAT31(uVar25,bVar11 + *pcVar18);
              if (SCARRY1(bVar11,*pcVar18) != (char)(bVar11 + *pcVar18) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar8 = bVar11 + *pcVar18;
            pbVar27 = (byte *)CONCAT31(uVar25,bVar8);
            if (SCARRY1(bVar11,*pcVar18) == (char)bVar8 < '\0') {
              pcVar14 = (char *)CONCAT22(uVar33,CONCAT11(bVar7 | (byte)*puVar45,bVar30));
              *pcVar18 = *pcVar18 + cVar41;
              *(byte *)puVar45 = (byte)*puVar45 ^ bVar8;
              *(char *)((int)pbVar27 * 2) = *(char *)((int)pbVar27 * 2) + bVar8;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar14 = *pcVar14 + (char)pcVar14;
            uVar25 = (undefined3)((uint)pcVar14 >> 8);
            bVar8 = (char)pcVar14 + 0x2aU & (byte)*puVar45;
            *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
            pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
            *pcVar14 = *pcVar14 + bVar8 + 0x2a;
            pcVar14 = (char *)CONCAT31(uVar25,bVar8 + 0x54 & (byte)*puVar45);
code_r0x00403072:
            cVar9 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar9;
            uVar25 = (undefined3)((uint)pcVar14 >> 8);
            pcVar14 = (char *)CONCAT31(uVar25,cVar9 + '*');
            *pcVar14 = *pcVar14 + cVar9 + '*';
            bVar8 = cVar9 + 0x54U & (byte)*puVar45;
            *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,uVar47);
            uVar28 = CONCAT22((short)((uint)uVar28 >> 0x10),
                              CONCAT11((char)((uint)uVar28 >> 8) +
                                       *(char *)CONCAT31(uVar25,bVar8 + 0x2a),(char)uVar28));
            *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar41;
            pcVar14 = pcStackY_7c;
code_r0x0040309a:
            cVar9 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar9;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,uVar48);
            *pcVar14 = *pcVar14 + cVar9;
            pbVar27 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + 0x2aU & (byte)*puVar45);
          }
          cVar9 = (char)pbVar27;
          *pbVar27 = *pbVar27 + cVar9;
          uVar25 = (undefined3)((uint)pbVar27 >> 8);
          cVar10 = cVar9 + '*';
          pcVar14 = (char *)CONCAT31(uVar25,cVar10);
          *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar41;
          *pcVar14 = *pcVar14 + cVar10;
          cVar12 = (char)pcStackY_7c - (byte)*puVar37;
          pcVar18 = (char *)CONCAT22((short)((uint)pcStackY_7c >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_7c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_7c >> 8),
                                                                 cVar12) + 0x34),cVar12));
          *pcVar14 = *pcVar14 + cVar10;
          bVar8 = cVar9 + 0x54U & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
          pbVar27 = (byte *)CONCAT31(uVar25,bVar8 + 0x2a);
          bVar8 = (byte)((uint)uVar28 >> 8);
          pcVar14 = (char *)CONCAT22((short)((uint)uVar28 >> 0x10),
                                     CONCAT11(bVar8 + *pbVar27,(char)uVar28));
          pbVar27 = pbVar27 + (uint)CARRY1(bVar8,*pbVar27) + *(int *)pbVar27;
          *(byte *)puVar45 = (byte)*puVar45 + (char)uVar28;
          uVar25 = (undefined3)((uint)pbVar27 >> 8);
          cVar9 = (byte)pbVar27 - *pbVar27;
          piVar16 = (int *)CONCAT31(uVar25,cVar9);
          puVar37 = (uint *)((int)puVar37 + (uint)((byte)pbVar27 < *pbVar27) + *piVar16);
          cVar9 = cVar9 + (char)*piVar16;
          pbVar27 = (byte *)CONCAT31(uVar25,cVar9);
          *pbVar27 = *pbVar27 + cVar9;
code_r0x004030df:
          *pcVar14 = *pcVar14 + cVar41;
          bVar8 = *pbVar27;
          bVar7 = (byte)pbVar27;
          *pbVar27 = *pbVar27 + bVar7;
          *(byte **)(pcVar18 + -0x41) =
               (byte *)((int)puVar37 + (uint)CARRY1(bVar8,bVar7) + *(int *)(pcVar18 + -0x41));
          *pbVar27 = *pbVar27 + bVar7;
          uVar25 = (undefined3)((uint)pbVar27 >> 8);
          bVar7 = bVar7 | (byte)*puVar37;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar25,bVar7 + 0x7b);
          *pcVar14 = *pcVar14 + bVar7 + 0x7b;
          pbVar27 = (byte *)((int)puVar37 + CONCAT31(uVar25,bVar7 - 8) + -1);
          *pbVar27 = *pbVar27 + (bVar7 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar40 = puVar37 + (uint)bVar52 * -2 + 1;
        out(*puVar37,uVar34);
        pbVar36 = pbVar42 + 1;
        pbStackY_44 = pbVar42;
      }
      bVar8 = cVar9 - bVar51;
      pbVar36 = (byte *)((int)puVar40 + (int)puVar46 * 2);
      bVar51 = CARRY1(*pbVar36,bVar8);
      *pbVar36 = *pbVar36 + bVar8;
code_r0x00402ef9:
      pcVar14 = (char *)CONCAT31(uVar25,bVar8 - bVar51);
      pbVar36 = (byte *)((int)puVar46 + (int)pbVar42 * 2);
      *pbVar36 = *pbVar36 + (bVar8 - bVar51);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar17 = (byte)*puVar17 + (char)puVar45;
  puVar43 = puVar45 + 0x2828000;
  bVar8 = (byte)puVar17;
  bVar51 = (byte)*puVar43 < bVar8;
  *(byte *)puVar43 = (byte)*puVar43 - bVar8;
  bVar8 = (byte)pbVar36 + *pbVar36;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar36 >> 8),bVar8 + bVar51);
  puVar43 = puVar46;
  uVar50 = uVar47;
  if (CARRY1((byte)pbVar36,*pbVar36) || CARRY1(bVar8,bVar51)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar14 = *pcVar14 + bVar7;
  uVar50 = uVar47;
  in_SS = uVar48;
  goto code_r0x00402e6e;
code_r0x00402723:
  uStack_2 = (undefined1)((uint)pbVar36 >> 0x10);
  uStack_1 = (undefined1)((uint)pbVar36 >> 0x18);
  pbVar35 = pbVar27;
  in_ES = uStack_4;
  uStack_4 = (ushort)pbVar36;
  goto code_r0x00402724;
}


