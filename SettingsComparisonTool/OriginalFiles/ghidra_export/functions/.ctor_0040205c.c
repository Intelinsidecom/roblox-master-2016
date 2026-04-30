/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040205c
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 dataReaderProvider, byte * envName)
 * Local Vars  : uStack_18, uStack_15, uStack_14, puStack_c, uVar1, pcVar2, uVar3, uVar4, uVar5, cVar6, bVar7, dataReaderProvider, bVar8, envName, bVar9, bVar10, bVar11, in_EAX, pbVar12, pbVar13, iVar14, pcVar15, iVar16, puVar17, pbVar18, uVar19, pcVar20, pbVar21, pbVar22, uVar23, uVar24, puVar25, piVar26, pcVar27, piVar28, puVar29, uVar30, uVar31, iVar32, uVar33, pbVar34, extraout_ECX, extraout_ECX_00, extraout_ECX_01, extraout_ECX_02, uVar35, bVar36, cVar37, uVar38, uVar39, uVar40, puVar41, puVar42, pbVar43, puVar44, uVar45, cVar46, unaff_EBX, cVar47, cVar48, unaff_EBP, pbVar49, unaff_ESI, puVar50, puVar51, unaff_EDI, puVar52, in_ES, uVar53, uVar54, in_CS, uVar55, in_SS, uVar56, in_DS, in_GS_OFFSET, bVar57, in_AF, bVar58, in_TF, in_IF, bVar59, bVar60, in_NT, uVar61, in_stack_ffffffd4, in_stack_ffffffdc, pcStackY_98, pbStackY_60, puStackY_4c, puStackY_48, uStackY_44, uStack_1c
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall _ctor(undefined4 dataReaderProvider,byte *envName)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte *in_EAX;
  byte *pbVar12;
  undefined3 uVar30;
  byte *pbVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  uint *puVar17;
  byte *pbVar18;
  uint3 uVar31;
  uint uVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  int3 iVar32;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int *piVar26;
  char *pcVar27;
  int *piVar28;
  ushort *puVar29;
  undefined1 uVar33;
  byte bVar36;
  undefined2 uVar38;
  byte *pbVar34;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  char cVar37;
  undefined2 uVar39;
  undefined4 uVar35;
  undefined2 uVar40;
  uint *puVar41;
  uint *puVar42;
  byte *pbVar43;
  undefined3 uVar45;
  uint *puVar44;
  char cVar46;
  char cVar47;
  char cVar48;
  int unaff_EBX;
  int unaff_EBP;
  byte *pbVar49;
  uint *unaff_ESI;
  uint *puVar50;
  uint *puVar51;
  int unaff_EDI;
  uint *puVar52;
  ushort in_ES;
  ushort uVar53;
  ushort uVar54;
  ushort in_CS;
  ushort uVar55;
  ushort in_SS;
  ushort uVar56;
  undefined2 in_DS;
  int in_GS_OFFSET;
  bool bVar57;
  byte in_AF;
  bool bVar58;
  byte in_TF;
  byte in_IF;
  bool bVar59;
  bool bVar60;
  byte in_NT;
  undefined8 uVar61;
  char *pcStackY_98;
  byte *pbStackY_60;
  uint *puStackY_4c;
  uint *puStackY_48;
  undefined4 uStackY_44;
  undefined4 in_stack_ffffffd4;
  byte *in_stack_ffffffdc;
  ushort uStack_1c;
  ushort uStack_18;
  undefined1 uStack_15;
  undefined4 uStack_14;
  uint *puStack_c;
  
  bVar59 = false;
                    /* .NET CLR Managed Code */
  bVar8 = (byte)((uint)dataReaderProvider >> 8);
  uVar38 = (undefined2)((uint)dataReaderProvider >> 0x10);
  bVar11 = (byte)dataReaderProvider;
  bVar36 = bVar8 + *in_EAX;
  pbVar12 = in_EAX + (uint)CARRY1(bVar8,*in_EAX) + *(int *)in_EAX;
  *envName = *envName + bVar11;
  pbVar49 = (byte *)(unaff_EBP + iRam0001720b);
  pbVar13 = pbVar12 + 0x73;
  bVar8 = *pbVar13;
  bVar9 = (byte)((uint)envName >> 8);
  *pbVar13 = *pbVar13 + bVar9;
  uVar30 = (undefined3)((uint)pbVar12 >> 8);
  cVar6 = (char)pbVar12 + CARRY1(bVar8,bVar9);
  iVar14 = CONCAT31(uVar30,cVar6);
  *envName = *envName + bVar11;
  uVar45 = (undefined3)((uint)unaff_EBX >> 8);
  if ((POPCOUNT(*envName) & 1U) == 0) {
    pbVar13 = (byte *)CONCAT31(uVar30,cVar6 + '-');
    unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)(envName + 0x4d));
code_r0x00402084:
    bVar10 = (byte)pbVar13;
    bVar57 = CARRY1(*pbVar13,bVar10);
    bVar8 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar10;
    if (!SCARRY1(bVar8,bVar10)) {
code_r0x00402088:
      iVar14 = CONCAT31((int3)((uint)pbVar13 >> 8),(char)pbVar13 + bVar57);
      *envName = *envName + bVar11;
      if ((POPCOUNT(*envName) & 1U) != 0) {
        iVar14 = iVar14 + -0x5d720b;
      }
      pbVar13 = (byte *)(iVar14 + 0x73);
      bVar8 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar9;
      uVar30 = (undefined3)((uint)iVar14 >> 8);
      cVar6 = (char)iVar14 + CARRY1(bVar8,bVar9);
      piVar28 = (int *)CONCAT31(uVar30,cVar6);
      *envName = *envName + bVar11;
      if ((POPCOUNT(*envName) & 1U) == 0) {
        *piVar28 = (int)(*piVar28 + (int)piVar28);
        envName[(int)piVar28] = envName[(int)piVar28] + cVar6;
      }
      else {
        unaff_EDI = unaff_EDI + *(int *)(pbVar49 + 1);
        *(char *)piVar28 = (char)*piVar28 + cVar6;
        piVar28 = (int *)CONCAT31(uVar30,cVar6 + '\x02');
      }
      piVar28 = (int *)CONCAT31((int3)((uint)((int)piVar28 + 0x27d) >> 8),
                                (char)(char *)((int)piVar28 + 0x27d) + '\x7f');
      iVar14 = (int)piVar28 + *piVar28;
      envName[iVar14] = envName[iVar14] + (char)iVar14;
      cVar6 = (char)iVar14 + '}';
      iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),cVar6);
      envName[iVar14] = envName[iVar14] + cVar6;
      iVar14 = iVar14 + 0x57d;
      cVar48 = (char)iVar14;
      uVar30 = (undefined3)((uint)iVar14 >> 8);
      cVar6 = cVar48 + '*';
      pbVar13 = (byte *)CONCAT31(uVar30,cVar6);
      cVar46 = ((byte)unaff_EBX | *pbVar13) - (byte)*unaff_ESI;
      uVar39 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar47 = (char)((uint)unaff_EBX >> 8) + *(char *)(CONCAT31(uVar45,cVar46) + 8);
      *pbVar13 = *pbVar13 + cVar6;
      bVar8 = cVar48 + 0x54U & *envName;
      iVar14 = *(int *)(pbVar49 + 8);
      *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
      pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
      puStack_c = (uint *)CONCAT22(puStack_c._2_2_,in_DS);
      unaff_ESI = puStack_c;
      cVar47 = cVar47 + *(char *)(CONCAT22(uVar39,CONCAT11(cVar47,cVar46)) + 9);
      *pcVar20 = *pcVar20 + bVar8 + 0x2a;
      bVar8 = bVar8 + 0x54 & *envName;
      unaff_EDI = unaff_EDI + iVar14 + *(int *)(pbVar49 + 9);
      *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
      pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
      unaff_EBX = CONCAT22(uVar39,CONCAT11(cVar47 + *(char *)(CONCAT22(uVar39,CONCAT11(cVar47,cVar46
                                                                                      )) + 6),cVar46
                                          ));
      *pcVar20 = *pcVar20 + bVar8 + 0x2a;
      pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x57);
      envName = envName + *puStack_c;
      puStack_c = (uint *)0x2a;
      goto code_r0x004020f2;
    }
    *envName = *envName + bVar11;
    iVar14 = CONCAT31(uVar45,(byte)unaff_EBX - (byte)*unaff_ESI);
  }
  else {
    pbVar13 = (byte *)(iVar14 + 0x27720b2d);
    bVar8 = *pbVar13;
    bVar7 = (byte)pbVar13;
    bVar10 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar7;
    if (!SCARRY1(bVar10,bVar7)) {
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7 + CARRY1(bVar8,bVar7));
      *envName = *envName + bVar11;
      pbVar13 = pbVar12;
      if ((POPCOUNT(*envName) & 1U) == 0) goto code_r0x00402084;
      pbVar13 = pbVar12 + -0x4d720b;
      pbVar12 = pbVar12 + -0x4d7198;
      bVar57 = CARRY1(*pbVar12,bVar9);
      *pbVar12 = *pbVar12 + bVar9;
      goto code_r0x00402088;
    }
    pcVar20 = (char *)(iVar14 + -0x2f80ad6);
code_r0x004020f2:
    iVar14 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                      CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 6),
                               (char)unaff_EBX));
    *pcVar20 = *pcVar20 + (char)pcVar20;
    cVar6 = (char)pcVar20 + 'o';
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),cVar6);
    *pbVar13 = *pbVar13 + cVar6;
    bVar36 = bVar36 | *envName;
  }
  uVar39 = (undefined2)((uint)iVar14 >> 0x10);
  uVar33 = (undefined1)iVar14;
  cVar48 = (char)((uint)iVar14 >> 8) + *(char *)(iVar14 + 10);
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar30 = (undefined3)((uint)pbVar13 >> 8);
  bVar9 = (char)pbVar13 + 0x2aU & *envName;
  pbVar13 = (byte *)(unaff_EDI + *(int *)(pbVar49 + 10));
  *(char *)CONCAT31(uVar30,bVar9) = *(char *)CONCAT31(uVar30,bVar9) + bVar9;
  bVar10 = bVar9 + 0x2a;
  pcVar20 = (char *)CONCAT31(uVar30,bVar10);
  bVar8 = pbVar13[0x17];
  *pcVar20 = *pcVar20 + bVar10;
  bVar36 = bVar36 + bVar8 | *envName;
  pcVar27 = (char *)CONCAT22(uVar38,CONCAT11(bVar36,bVar11));
  cVar48 = cVar48 + *(char *)(CONCAT22(uVar39,CONCAT11(cVar48,uVar33)) + 0x4e);
  *pcVar20 = *pcVar20 + bVar10;
  pcVar20 = (char *)CONCAT31(uVar30,bVar9 + 0x52);
  *pcVar20 = (*pcVar20 - (bVar9 + 0x52)) - (0xd7 < bVar10);
  *envName = *envName + bVar11;
  bVar8 = bVar9 + 0x45;
  cVar48 = cVar48 + *(char *)(CONCAT22(uVar39,CONCAT11(cVar48,uVar33)) + 0x4f);
  iVar14 = CONCAT22(uVar39,CONCAT11(cVar48,uVar33));
  *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
  pcVar20 = (char *)CONCAT31(uVar30,bVar9 + 0x6d);
  *pcVar20 = (*pcVar20 - (bVar9 + 0x6d)) - (0xd7 < bVar8);
  *envName = *envName + bVar11;
  pcVar15 = pcVar20 + -0x6b721c;
  pcVar20 = pcVar20 + -0x6b721a;
  cVar6 = (char)((uint)envName >> 8);
  *pcVar20 = *pcVar20 + cVar6;
  bVar8 = (byte)envName;
  if ((POPCOUNT(*pcVar20) & 1U) == 0) {
    cVar46 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar46;
    uVar30 = (undefined3)((uint)pcVar15 >> 8);
    bVar9 = cVar46 + 2;
    pcVar20 = (char *)CONCAT31(uVar30,bVar9);
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      *pcVar20 = *pcVar20 + bVar9;
      piVar28 = (int *)CONCAT31(uVar30,cVar46 + '*');
      *piVar28 = (*piVar28 - (int)piVar28) - (uint)(0xd7 < bVar9);
      bVar9 = *envName;
      *envName = *envName + bVar11;
      out(*unaff_ESI,(short)envName);
      cVar46 = ((cVar46 + '*') - (char)*piVar28) - CARRY1(bVar9,bVar11);
      piVar28 = (int *)CONCAT31(uVar30,cVar46);
      *envName = *envName + bVar11;
      bVar9 = cVar48 - *(byte *)((int)unaff_ESI + 0x1f);
      iVar14 = CONCAT22(uVar39,CONCAT11(bVar9,uVar33));
      *(char *)piVar28 = (char)*piVar28 + cVar46;
      pcVar27 = (char *)CONCAT22(uVar38,CONCAT11(bVar36 | *envName,bVar11));
      unaff_ESI = (uint *)((int)unaff_ESI + (4 - *piVar28));
      *(undefined4 *)CONCAT31(uVar30,cVar46) = 0x10000;
      *pcVar27 = *pcVar27 + bVar8;
      bVar36 = cVar46 + *envName;
      pcVar20 = (char *)CONCAT31(uVar30,bVar36);
      if ((POPCOUNT(bVar36) & 1U) == 0) {
        *pcVar20 = *pcVar20 + bVar36;
        cVar48 = (bVar36 + 0x6f) - (0x90 < bVar36);
        pcVar20 = (char *)CONCAT31(uVar30,cVar48);
        bVar36 = *envName;
        *envName = *envName + bVar11;
        if (SCARRY1(bVar36,bVar11) == (char)*envName < '\0') {
          *pcVar20 = *pcVar20 + cVar48;
          out(*unaff_ESI,(short)envName);
          unaff_ESI = unaff_ESI + 1;
        }
      }
      else {
        *pcVar20 = *pcVar20 + bVar36;
        iVar14 = CONCAT22(uVar39,CONCAT11(bVar9 | pbVar49[6],uVar33));
      }
      *pcVar20 = *pcVar20 + (char)pcVar20;
      bVar57 = bRam6f060000 < bVar8;
      bRam6f060000 = bRam6f060000 - bVar8;
      iVar16 = (CONCAT31((int3)((uint)pcVar20 >> 8),(char)pcVar20 + '\x02') + -0xa0a0000) -
               (uint)bVar57;
      bVar11 = (byte)iVar16;
      bVar57 = CARRY1(bVar11,(byte)*unaff_ESI);
      uVar30 = (undefined3)((uint)iVar16 >> 8);
      cVar48 = bVar11 + (byte)*unaff_ESI;
      pcVar15 = (char *)CONCAT31(uVar30,cVar48);
      if (bVar57) {
        *pcVar15 = *pcVar15 + cVar48;
        iVar14 = CONCAT22((short)((uint)iVar14 >> 0x10),
                          CONCAT11((byte)((uint)iVar14 >> 8) | pbVar49[7],(char)iVar14));
        *pcVar15 = *pcVar15 + cVar48;
        goto code_r0x00402188;
      }
      pcVar20 = (char *)CONCAT31(uVar30,cVar48 + -2 + bVar57);
      puStack_c._0_2_ = in_ES;
    }
  }
  else {
code_r0x00402188:
    cVar48 = (char)pcVar15 + '\x02';
    pcVar20 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar48);
    iVar14 = CONCAT22((short)((uint)iVar14 >> 0x10),
                      CONCAT11((char)((uint)iVar14 >> 8) + *(char *)(iVar14 + 4),(char)iVar14));
    *pcVar20 = *pcVar20 + cVar48;
  }
  uVar30 = (undefined3)((uint)pcVar20 >> 8);
  bVar11 = (byte)pcVar20 + 0x2d;
  bVar36 = 9 < (bVar11 & 0xf) | in_AF;
  bVar11 = bVar11 + bVar36 * -6;
  cVar48 = bVar11 + (0x9f < bVar11 | 0xd2 < (byte)pcVar20 | bVar36 * (bVar11 < 6)) * -0x60;
  uVar38 = (undefined2)((uint)iVar14 >> 0x10);
  cVar46 = (char)((uint)iVar14 >> 8) + *(char *)(iVar14 + 7);
  pbVar34 = (byte *)CONCAT22(uVar38,CONCAT11(cVar46,(char)iVar14));
  *(char *)CONCAT31(uVar30,cVar48) = *(char *)CONCAT31(uVar30,cVar48) + cVar48;
  bVar9 = cVar48 + 0x7e;
  pbVar18 = (byte *)CONCAT31(uVar30,bVar9);
  pbVar12 = pbVar49 + 0x6fe1411;
  bVar11 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar9;
  *pbVar18 = (*pbVar18 - bVar9) - CARRY1(bVar11,bVar9);
  bVar57 = CARRY1((byte)*unaff_ESI,bVar9);
  uVar19 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar9;
  bVar11 = (byte)((uint)pcVar27 >> 8);
  if (bVar57) {
    *pbVar18 = *pbVar18 + bVar9;
    bVar9 = bVar9 | pbVar18[0x400000c];
    puVar17 = (uint *)CONCAT31(uVar30,bVar9);
    if ((char)bVar9 < '\x01') {
code_r0x004021be:
      pcVar27 = (char *)CONCAT22((short)((uint)pcVar27 >> 0x10),
                                 CONCAT11(bVar11 | *pbVar34,(char)pcVar27));
      puVar17 = (uint *)((int)puVar17 + -0x77b02);
      pbVar12 = (byte *)((int)unaff_ESI + (int)pbVar13 * 2);
      *pbVar12 = *pbVar12 + (char)puVar17;
      pbVar18 = (byte *)((uint)puVar17 | *puVar17);
      bVar11 = (byte)pbVar18;
      pbVar49[0x6fe1411] = pbVar49[0x6fe1411] + bVar11;
      bVar57 = CARRY1(*pbVar18,bVar11);
      *pbVar18 = *pbVar18 + bVar11;
      in_SS = (ushort)puStack_c;
      goto code_r0x004021d4;
    }
    *(byte *)puVar17 = (char)*puVar17 + bVar9;
    cVar48 = bVar9 + 0x28;
    puVar17 = (uint *)CONCAT31(uVar30,cVar48);
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    bVar9 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar11;
    if (CARRY1(bVar9,bVar11)) {
      *(char *)puVar17 = (char)*puVar17 + cVar48;
      goto code_r0x004021be;
    }
    pbVar12 = (byte *)((int)unaff_ESI + (int)pbVar13 * 2);
    *pbVar12 = *pbVar12 + cVar48;
    pbVar18 = (byte *)((uint)puVar17 | *puVar17);
    pbVar18[(int)pbVar49] = pbVar18[(int)pbVar49] + (char)pbVar18;
code_r0x004021e5:
    *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
    bVar11 = *pbVar34;
    bVar9 = (byte)((uint)pcVar27 >> 8);
    *pbVar34 = *pbVar34 + bVar9;
    if (!CARRY1(bVar11,bVar9)) goto code_r0x0040220c;
    *pbVar18 = *pbVar18 + (char)pbVar18;
    pcVar27 = (char *)CONCAT22((short)((uint)pcVar27 >> 0x10),
                               CONCAT11(bVar9 | *pbVar18,(char)pcVar27));
code_r0x004021f1:
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)pbVar18;
  }
  else {
    if ((byte)*unaff_ESI != 0 && SCARRY1((byte)uVar19,bVar9) == (char)(byte)*unaff_ESI < '\0') {
      *pbVar18 = *pbVar18 + bVar9;
      puVar17 = (uint *)CONCAT31(uVar30,cVar48 + -0x55);
      unaff_ESI[(int)pbVar13 * 2] =
           (uint)(envName + (uint)(0xd2 < bVar9) + unaff_ESI[(int)pbVar13 * 2]);
      goto code_r0x004021be;
    }
code_r0x004021d4:
    if (bVar57) {
      *pbVar18 = *pbVar18 + (byte)pbVar18;
      uVar30 = (undefined3)((uint)pbVar18 >> 8);
      bVar11 = (byte)pbVar18 | pbVar18[0x400000b];
      pbVar18 = (byte *)CONCAT31(uVar30,bVar11);
      if ('\0' < (char)bVar11) {
        *pbVar18 = *pbVar18 + bVar11;
        pbVar18 = (byte *)CONCAT31(uVar30,bVar11 + 0x28);
        goto code_r0x004021e5;
      }
      *envName = *envName + (char)pcVar27;
      *(char *)((int)pbVar18 * 2) = *(char *)((int)pbVar18 * 2) - (char)pcVar27;
      goto code_r0x004021f1;
    }
  }
  pbVar34 = (byte *)CONCAT22(uVar38,CONCAT11(cVar46 + pbVar34[6],(char)iVar14));
  *pbVar18 = *pbVar18 + (char)pbVar18;
  uVar30 = (undefined3)((uint)pbVar18 >> 8);
  bVar9 = (char)pbVar18 + 0x6f;
  bVar11 = *(byte *)CONCAT31(uVar30,bVar9);
  *envName = *envName + (char)pcVar27;
  cVar48 = (bVar9 & bVar11) + *pbVar13;
  pbVar18 = (byte *)CONCAT31(uVar30,cVar48);
  *pcVar27 = *pcVar27 - cVar6;
  *pbVar18 = *pbVar18 + cVar48;
  *pcVar27 = *pcVar27 - bVar8;
  *pbVar18 = *pbVar18 + cVar48;
code_r0x0040220c:
  uStack_14 = CONCAT22(uStack_14._2_2_,in_SS);
  bVar11 = (byte)pbVar18 | 0xde;
  cVar6 = bVar11 + 2;
  uVar30 = (undefined3)((uint)pbVar18 >> 8);
  pcVar20 = (char *)CONCAT31(uVar30,cVar6);
  if ((POPCOUNT(cVar6) & 1U) == 0) {
    *pcVar20 = *pcVar20 + cVar6;
    bVar11 = bVar11 + 0x71;
    pcVar20 = (char *)CONCAT31(uVar30,bVar11 & *(byte *)CONCAT31(uVar30,bVar11));
  }
  cVar6 = (char)pcVar27;
  *envName = *envName + cVar6;
  uVar30 = (undefined3)((uint)envName >> 8);
  bVar8 = bVar8 + *pbVar13;
  puVar41 = (uint *)CONCAT31(uVar30,bVar8);
  *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar6;
  *pcVar20 = *pcVar20 + (char)pcVar20;
  cVar6 = cVar6 - *pcVar20;
  pcVar15 = (char *)CONCAT31((int3)((uint)pcVar27 >> 8),cVar6);
  bVar9 = (char)pcVar20 - *pcVar20;
  pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),bVar9);
  *(byte **)pbVar12 = (byte *)(*(int *)pbVar12 + (int)puVar41);
  *pbVar12 = *pbVar12 + bVar9;
  bVar11 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar9;
  *(byte **)pbVar12 = pbVar12 + (uint)CARRY1(bVar11,bVar9) + *(int *)pbVar12;
  *pcVar15 = *pcVar15 + bVar9;
  bVar11 = (byte)((uint)pcVar27 >> 8);
  uVar38 = (undefined2)((uint)pcVar27 >> 0x10);
  bVar9 = bVar11 + *pbVar12;
  puVar17 = (uint *)CONCAT22(uVar38,CONCAT11(bVar9,cVar6));
  pbVar12 = pbVar12 + (uint)CARRY1(bVar11,*pbVar12) + *(int *)pbVar12;
  *(byte *)puVar41 = (byte)*puVar41 + cVar6;
  uVar45 = (undefined3)((uint)pbVar34 >> 8);
  cVar48 = (char)pbVar34 - *(byte *)((int)unaff_ESI + 2);
  pbVar18 = (byte *)CONCAT31(uVar45,cVar48);
  bVar11 = (byte)pbVar12;
  uVar31 = (uint3)((uint)pbVar12 >> 8);
  uVar56 = in_ES;
  if ((POPCOUNT(cVar48) & 1U) == 0) {
    *pbVar12 = *pbVar12 + bVar11;
    bVar11 = bVar11 | *pbVar18;
    piVar28 = (int *)CONCAT31(uVar31,bVar11);
    if (bVar11 == 0) {
      *(char *)piVar28 = (char)*piVar28;
      puVar50 = unaff_ESI + 1;
      out(*unaff_ESI,(short)puVar41);
      pbVar12 = (byte *)((uint)uVar31 << 8);
      *(byte *)puVar41 = (byte)*puVar41 + cVar6;
      puVar41 = (uint *)CONCAT31(uVar30,bVar8 - *pbVar18);
      *pbVar18 = *pbVar18;
      *(byte *)puVar41 = (byte)*puVar41 + bVar9;
      *pbVar12 = *pbVar12;
      *(byte *)puVar41 = (byte)*puVar41;
      *pbVar12 = *pbVar12;
      *(byte **)(pbVar18 + 0x25) = (byte *)(*(int *)(pbVar18 + 0x25) + (int)puVar50);
    }
    else {
      pbVar49 = pbVar49 + -*(int *)(pbVar13 + 0x24);
      *(byte *)piVar28 = (char)*piVar28 + bVar11;
      puVar17 = (uint *)CONCAT22(uVar38,CONCAT11(bVar9 | (byte)*puVar41,cVar6));
      puVar50 = (uint *)((int)unaff_ESI + *piVar28);
      pcVar20 = (char *)((int)piVar28 + *piVar28);
      uVar30 = (undefined3)((uint)pcVar20 >> 8);
      cVar46 = (char)pcVar20 - *pcVar20;
      pcVar20 = (char *)CONCAT31(uVar30,cVar46);
      *pcVar20 = *pcVar20 + cVar46;
      pbVar12 = (byte *)CONCAT31(uVar30,cVar46 + *pcVar20);
      uVar19 = *puVar17;
      *(byte *)puVar17 = (byte)*puVar17 + bVar8;
      if (!CARRY1((byte)uVar19,bVar8)) {
        *(byte *)puVar41 = (byte)*puVar41 + cVar6;
        pbVar18 = (byte *)CONCAT31(uVar45,cVar48 - (byte)*puVar50);
        goto _ctor;
      }
    }
    *pbVar12 = *pbVar12 + (char)pbVar12;
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),(byte)puVar17 | (byte)*puVar41);
    unaff_ESI = puVar50;
  }
  else {
    *(byte *)puVar41 = (byte)*puVar41 + cVar6;
    pbVar12 = (byte *)CONCAT31(uVar31,bVar11 | (byte)*unaff_ESI);
  }
  pbVar13 = pbVar13 + *(int *)(pbVar49 + 0x26);
  *pbVar12 = *pbVar12 + (byte)pbVar12;
  uVar30 = (undefined3)((uint)pbVar12 >> 8);
  bVar8 = (byte)pbVar12 | (byte)*puVar41;
  pbVar12 = (byte *)CONCAT31(uVar30,bVar8);
  if ((POPCOUNT(bVar8) & 1U) == 0) {
    *pbVar12 = *pbVar12 + bVar8;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    bVar36 = 9 < (bVar8 + 6 & 0xf) | bVar36;
    bVar11 = bVar8 + 6 + bVar36 * '\x06';
    pbVar12 = (byte *)CONCAT31(uVar30,bVar11 + (0x90 < (bVar11 & 0xf0) |
                                               0xf9 < bVar8 | bVar36 * (0xf9 < bVar11)) * '`');
  }
  *pbVar12 = *pbVar12 + (char)pbVar12;
  puVar50 = unaff_ESI;
  do {
    puVar42 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | pbVar18[0x28],(char)puVar41));
    *pbVar12 = *pbVar12 + (char)pbVar12;
    uVar38 = (undefined2)((uint)puVar17 >> 0x10);
    uVar33 = SUB41(puVar17,0);
    bVar11 = (byte)((uint)puVar17 >> 8) | *pbVar12;
    puVar17 = (uint *)CONCAT22(uVar38,CONCAT11(bVar11,uVar33));
    cVar6 = (char)pbVar12 + *pbVar12;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
    bVar8 = *pbVar18;
    *pbVar18 = *pbVar18 + bVar11;
    if (!CARRY1(bVar8,bVar11)) goto code_r0x004022b3;
    *pbVar12 = *pbVar12 + cVar6;
    puVar17 = (uint *)CONCAT22(uVar38,CONCAT11(bVar11 | (byte)*puVar42,uVar33));
    puVar41 = puVar42;
_ctor:
    bVar8 = (byte)((uint)puVar17 >> 8);
    uVar38 = (undefined2)((uint)puVar17 >> 0x10);
    cVar6 = (char)puVar17;
    bVar11 = bVar8 + *pbVar12;
    puVar17 = (uint *)CONCAT22(uVar38,CONCAT11(bVar11,cVar6));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar8,*pbVar12) + *(int *)pbVar12;
    *(byte *)puVar41 = (byte)*puVar41 + cVar6;
    bVar9 = (byte)pbVar18;
    bVar57 = bVar9 < *(byte *)((int)puVar50 + 2);
    bVar8 = *(byte *)((int)puVar50 + 2);
    cVar48 = bVar9 - bVar8;
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar48);
    if ((POPCOUNT(cVar48) & 1U) != 0) {
      if ((char)bVar8 <= (char)bVar9) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    bVar8 = (byte)pbVar12 | *pbVar18;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
    puVar42 = puVar41;
    if (bVar8 != 0) {
      pbVar49 = pbVar49 + -*(int *)(pbVar13 + 0x2b);
      *pbVar12 = *pbVar12 + bVar8;
      puVar17 = (uint *)CONCAT22(uVar38,CONCAT11(bVar11 | (byte)*puVar41,cVar6));
      bVar11 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar8;
      puVar50 = (uint *)((int)puVar50 + (uint)CARRY1(bVar11,bVar8) + *(int *)pbVar12);
      pbVar12 = pbVar12 + *(int *)pbVar12;
      cVar6 = (char)pbVar12 - *pbVar12;
      piVar28 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
      *(char *)piVar28 = (char)*piVar28 + cVar6;
      pbVar12 = (byte *)((int)piVar28 + *piVar28);
      uVar19 = *puVar17;
      *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar41;
      if (!CARRY1((byte)uVar19,(byte)puVar41)) goto code_r0x004022ea;
      goto code_r0x004022be;
    }
    *pbVar12 = *pbVar12;
    out(*puVar50,(short)puVar41);
    pbVar12 = pbVar12 + -*(int *)pbVar12;
    puVar50 = puVar50 + 1;
code_r0x004022ab:
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar17;
    bVar8 = (char)pbVar12 - *pbVar12;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
    *pbVar18 = *pbVar18 + (char)puVar42;
    *pbVar18 = *pbVar18 ^ bVar8;
code_r0x004022b3:
    *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar17 >> 8);
    bVar11 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar11;
    *pbVar18 = *pbVar18 + bVar11;
    bVar8 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar11;
    *(byte **)(pbVar18 + 0x2c) =
         (byte *)((int)puVar50 + (uint)CARRY1(bVar8,bVar11) + *(int *)(pbVar18 + 0x2c));
    puVar41 = puVar42;
code_r0x004022be:
    *pbVar12 = *pbVar12 + (char)pbVar12;
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),(byte)puVar17 | (byte)*puVar41);
    pbVar13 = pbVar13 + *(int *)(pbVar49 + 0x2d);
code_r0x004022c6:
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    uVar30 = (undefined3)((uint)pbVar12 >> 8);
    bVar8 = (byte)pbVar12 | (byte)*puVar41;
    pcVar20 = (char *)CONCAT31(uVar30,bVar8);
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      *pcVar20 = *pcVar20 + bVar8;
    }
    *pcVar20 = *pcVar20 + bVar8;
    cVar6 = bVar8 + 6;
    pbVar12 = (byte *)CONCAT31(uVar30,cVar6);
    *(byte *)puVar50 = (byte)*puVar50 + 1;
    *pbVar12 = *pbVar12 + cVar6;
    puVar42 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | pbVar18[0x2f],(char)puVar41));
    *pbVar12 = *pbVar12 + cVar6;
    bVar8 = (byte)((uint)puVar17 >> 8) | *pbVar12;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar8,(char)puVar17));
    pbVar12 = pbVar12 + *(int *)pbVar12;
    bVar57 = CARRY1(*pbVar18,bVar8);
    *pbVar18 = *pbVar18 + bVar8;
code_r0x004022e0:
    puVar41 = puVar42;
    if (!bVar57) goto code_r0x0040230b;
    bVar11 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar11;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11((byte)((uint)puVar17 >> 8) | (byte)*puVar42,(char)puVar17));
    bVar8 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar11;
    puVar50 = (uint *)((int)puVar50 + (-(uint)CARRY1(bVar8,bVar11) - *(int *)pbVar12));
code_r0x004022ea:
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + *pbVar12);
code_r0x004022ef:
    *(char *)((int)pbVar12 * 2) = *(char *)((int)pbVar12 * 2) + (char)pbVar12;
    *(byte *)puVar17 = (byte)*puVar17 + (char)puVar42;
    uVar56 = (ushort)in_stack_ffffffdc;
    puVar41 = puVar42;
    while( true ) {
      uVar30 = (undefined3)((uint)pbVar12 >> 8);
      bVar8 = (byte)pbVar12 | (byte)*puVar41;
      pbVar12 = (byte *)CONCAT31(uVar30,bVar8);
      if ((POPCOUNT(bVar8) & 1U) != 0) break;
      *pbVar12 = *pbVar12 + bVar8;
      cVar6 = bVar8 + 0xd;
      pcVar20 = (char *)CONCAT31(uVar30,cVar6);
      *(uint *)(pbVar49 + 2) = *(uint *)(pbVar49 + 2) | (uint)pcVar20;
      *pcVar20 = *pcVar20 + cVar6;
      *(char *)((int)pcVar20 * 2) = *(char *)((int)pcVar20 * 2) + (char)((uint)puVar17 >> 8);
      *pcVar20 = *pcVar20 + cVar6;
      pbVar12 = (byte *)CONCAT31(uVar30,cVar6);
      *pbVar12 = *pbVar12 + cVar6;
code_r0x0040230b:
      puVar42 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((char)((uint)puVar41 >> 8) + pbVar18[0x34],(char)puVar41))
      ;
      cVar6 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar6;
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar18 >> 8) | pbVar49[-0x79],(char)pbVar18)
                                );
      *pbVar12 = *pbVar12 + cVar6;
      pcVar20 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6 + '\x02');
code_r0x00402317:
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11((char)((uint)pbVar18 >> 8) + pbVar18[-0x7a],(char)pbVar18)
                                );
      cVar6 = (char)pcVar20;
      *pcVar20 = *pcVar20 + cVar6;
      uVar30 = (undefined3)((uint)pcVar20 >> 8);
      cVar48 = cVar6 + '{';
      pbVar12 = (byte *)CONCAT31(uVar30,cVar48);
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      pbVar34 = (byte *)((int)puVar42 + (int)pbVar12);
      *pbVar34 = *pbVar34 + cVar48;
      if ((POPCOUNT(*pbVar34) & 1U) != 0) goto code_r0x004022ab;
      *pbVar12 = *pbVar12 + cVar48;
      piVar28 = (int *)CONCAT31(uVar30,cVar6 + -10);
      uVar19 = (int)piVar28 + *piVar28;
      bVar8 = (byte)uVar19;
      pbVar13[(int)pbVar49 * 2] = pbVar13[(int)pbVar49 * 2] + bVar8;
      pbVar12 = (byte *)(uVar19 ^ 0x7d0a0000);
      *pbVar12 = bVar8;
      pbVar34 = (byte *)((int)puVar42 + (int)pbVar12);
      *pbVar34 = *pbVar34 + bVar8;
      puVar41 = puVar42;
      if ((POPCOUNT(*pbVar34) & 1U) != 0) goto code_r0x004022be;
      *pbVar12 = *pbVar12 + bVar8;
      pcVar20 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8 + 0x69);
      uVar53 = in_ES;
code_r0x00402342:
      in_ES = uVar53;
      uVar30 = (undefined3)((uint)pcVar20 >> 8);
      bVar8 = (char)pcVar20 + *pcVar20;
      pcVar20 = (char *)CONCAT31(uVar30,bVar8);
      *pcVar20 = *pcVar20 + bVar8;
      *pcVar20 = *pcVar20 + bVar8;
      *(byte *)(puVar50 + 0x800000) = (byte)puVar50[0x800000] + (char)puVar17;
      cVar48 = (char)pbVar18;
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11((char)((uint)pbVar18 >> 8) + pbVar18[-0x7a],cVar48));
      *pcVar20 = *pcVar20 + bVar8;
      bVar57 = 0xfd < bVar8;
      cVar6 = bVar8 + 2;
      pbVar12 = (byte *)CONCAT31(uVar30,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x004022e0;
      *pbVar12 = *pbVar12 + cVar6;
      cVar6 = bVar8 + 0x71;
      pbVar12 = (byte *)CONCAT31(uVar30,cVar6);
      bVar11 = *pbVar12;
      *pbVar12 = *pbVar12 + cVar6;
      in_stack_ffffffdc = (byte *)(uint)in_ES;
      if (SCARRY1(bVar11,cVar6) == (char)*pbVar12 < '\0') {
        *(byte *)((int)puVar42 + (int)pbVar12) = *(byte *)((int)puVar42 + (int)pbVar12) + cVar48;
        goto code_r0x004022ef;
      }
      *pbVar12 = *pbVar12 + cVar6;
      pbVar12 = (byte *)CONCAT31(uVar30,bVar8 + 0x73);
      bVar57 = (POPCOUNT(bVar8 + 0x73) & 1U) == 0;
      puVar41 = puVar42;
code_r0x00402366:
      if (bVar57) {
code_r0x00402368:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        cVar6 = (char)pbVar12 + 'o';
        pcVar20 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
        *pcVar20 = *pcVar20 + cVar6;
        puVar42 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(byte)puVar41 | *pbVar18);
        pcVar20 = pcVar20 + 0x37280512;
        bVar11 = (byte)pcVar20;
        *pcVar20 = *pcVar20 + bVar11;
        puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                   CONCAT11((byte)((uint)puVar17 >> 8) | bRam7d160243,(char)puVar17)
                                  );
        pbVar12 = (byte *)((int)puVar42 + (int)pcVar20);
        bVar8 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar11;
        pcRam00008e7d = pcVar20 + (int)(pcRam00008e7d + CARRY1(bVar8,bVar11));
        bVar57 = SCARRY1(bVar11,'\x02');
        bVar11 = bVar11 + 2;
        puVar29 = (ushort *)CONCAT31((int3)((uint)pcVar20 >> 8),bVar11);
code_r0x0040238b:
        if (bVar57 == (char)bVar11 < '\0') {
          *(char *)puVar29 = (char)*puVar29 + (char)puVar29;
          pcVar20 = (char *)CONCAT31((int3)((uint)puVar29 >> 8),(char)puVar29 + '\x12');
          uVar53 = in_ES;
          in_ES = uVar56;
code_r0x00402391:
          pcVar20 = pcVar20 + 0x42802;
          *pbVar18 = *pbVar18 + (char)((uint)puVar17 >> 8);
          uVar56 = in_ES;
code_r0x00402399:
          bVar8 = (byte)pbVar18 | (byte)((uint)puVar17 >> 8);
          uVar30 = (undefined3)((uint)pcVar20 >> 8);
          pcVar20 = (char *)CONCAT31(uVar30,1);
          *pcVar20 = *pcVar20 + '\x01';
          pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                     CONCAT11((char)((uint)pbVar18 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar18 >> 8),bVar8) +
                                                       -0x72),bVar8));
          *pcVar20 = *pcVar20 + '\x01';
          uVar19 = CONCAT31(uVar30,0x14);
          pcVar20 = (char *)(uVar19 + 0x19061215 + (uint)(0x1f9edfd < uVar19));
          uVar1 = (uint)(0xe4ffffec < uVar19 + 0xfe061202 ||
                        CARRY4(uVar19 + 0x19061215,(uint)(0x1f9edfd < uVar19)));
          uVar19 = *puVar50;
          uVar23 = *puVar50;
          *puVar50 = (uint)(pcVar20 + uVar23 + uVar1);
          if ((SCARRY4(uVar19,(int)pcVar20) != SCARRY4((int)(pcVar20 + uVar23),uVar1)) !=
              (int)*puVar50 < 0) {
            bVar11 = (byte)pcVar20;
            *pcVar20 = *pcVar20 + bVar11;
            iVar14 = CONCAT31((int3)((uint)pcVar20 >> 8),bVar11 + 2) + 0x847d +
                     (uint)(0xfd < bVar11);
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(byte)puVar42 | (byte)*puVar42);
            pcVar20 = (char *)(CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '\x12') + 0x134f26)
            ;
            *pbVar18 = *pbVar18 + bVar8;
code_r0x004023cd:
            out(*puVar50,(short)puVar42);
            uVar19 = *puVar42;
            *(byte *)puVar42 = (byte)*puVar42 + (byte)puVar17;
            pbVar12 = (byte *)(pcVar20 + (uint)CARRY1((byte)uVar19,(byte)puVar17) + *(int *)pbVar13)
            ;
            bVar60 = SCARRY1((char)puVar42,(byte)*puVar17);
            bVar8 = (char)puVar42 + (byte)*puVar17;
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar8);
            bVar58 = (char)bVar8 < '\0';
            puVar50 = puVar50 + 1;
code_r0x004023d6:
            bVar57 = (POPCOUNT(bVar8) & 1U) == 0;
            puVar41 = puVar42;
            if (bVar60 != bVar58) {
              *pbVar12 = *pbVar12 + (char)pbVar12;
code_r0x004023db:
              cVar48 = (char)pbVar12;
              uVar30 = (undefined3)((uint)pbVar12 >> 8);
              cVar6 = cVar48 + '\x02';
              pbVar12 = (byte *)CONCAT31(uVar30,cVar6);
              if ((POPCOUNT(cVar6) & 1U) != 0) {
                pbVar34 = (byte *)((int)puVar41 + (int)pbVar12);
                *pbVar34 = *pbVar34 + cVar6;
                bVar57 = (POPCOUNT(*pbVar34) & 1U) == 0;
                goto code_r0x00402366;
              }
              *pbVar12 = *pbVar12 + cVar6;
              cVar48 = cVar48 + '\x15';
              pbVar12 = (byte *)CONCAT31(uVar30,cVar48);
              *(byte *)puVar17 = (byte)*puVar17 | (byte)puVar41;
              *pbVar13 = *pbVar13 | (byte)puVar41;
              uVar53 = in_ES;
              if ((POPCOUNT(*pbVar13) & 1U) == 0) {
                *pbVar12 = *pbVar12 + cVar48;
                goto code_r0x00402425;
              }
              *pbVar12 = *pbVar12 + cVar48;
              cVar48 = cVar48 + (byte)*puVar41;
              pcVar20 = (char *)CONCAT31(uVar30,cVar48);
              if ((POPCOUNT(cVar48) & 1U) == 0) {
                *pcVar20 = *pcVar20 + cVar48;
                puVar29 = (ushort *)CONCAT31(uVar30,cVar48 + 'o');
                puVar42 = puVar41;
code_r0x004023f6:
                uVar19 = *puVar42;
                *(byte *)puVar42 = (byte)*puVar42 + (char)puVar17;
                cVar6 = (char)puVar29;
                if (SCARRY1((byte)uVar19,(char)puVar17) == (char)(byte)*puVar42 < '\0') {
                  in_ES = *puVar29;
                  pbVar12 = (byte *)((int)puVar42 + (int)puVar29);
                  bVar57 = SCARRY1(*pbVar12,cVar6);
                  *pbVar12 = *pbVar12 + cVar6;
                  bVar11 = *pbVar12;
                  goto code_r0x0040238b;
                }
                *(char *)puVar29 = (char)*puVar29 + cVar6;
                cVar6 = cVar6 + '\x02';
                pcVar20 = (char *)CONCAT31((int3)((uint)puVar29 >> 8),cVar6);
                puVar41 = puVar50;
                if ((POPCOUNT(cVar6) & 1U) == 0) {
code_r0x00402402:
                  *pcVar20 = *pcVar20 + (char)pcVar20;
                  uVar30 = (undefined3)((uint)pcVar20 >> 8);
                  piVar28 = (int *)CONCAT31(uVar30,(char)pcVar20 + 'r');
                  *piVar28 = *piVar28 + 0x7b027000;
                  cVar6 = (char)*piVar28;
                  pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                  pbVar12 = (byte *)((int)puVar42 + (int)pcVar20);
                  *pbVar12 = *pbVar12 + cVar6;
                  puVar50 = puVar41;
                  if ((POPCOUNT(*pbVar12) & 1U) == 0) {
                    *pcVar20 = *pcVar20 + cVar6;
                    bVar11 = cVar6 + '{' + *(char *)CONCAT31(uVar30,cVar6 + '{');
                    piVar28 = (int *)CONCAT31(uVar30,bVar11);
                    pbVar12 = (byte *)((int)piVar28 + (int)pbVar49);
                    bVar8 = *pbVar12;
                    *pbVar12 = *pbVar12 + bVar11;
                    *piVar28 = (*piVar28 - (int)piVar28) - (uint)CARRY1(bVar8,bVar11);
                    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar17;
                    puVar50 = puVar41 + 1;
                    out(*puVar41,(short)puVar42);
                    cVar6 = bVar11 - (char)*piVar28;
                    pbVar12 = (byte *)CONCAT31(uVar30,cVar6);
                    *(byte *)puVar50 = (byte)*puVar50 + cVar6;
                    puVar41 = puVar42;
code_r0x00402425:
                    out(*puVar50,(short)puVar41);
                    uVar19 = *puVar41;
                    *(byte *)puVar41 = (byte)*puVar41 + (byte)puVar17;
                    uVar19 = (uint)CARRY1((byte)uVar19,(byte)puVar17);
                    pbVar34 = (byte *)((int)puVar17 + *puVar17) + uVar19;
                    puVar17 = (uint *)CONCAT31((int3)((uint)pbVar34 >> 8),
                                               (char)pbVar34 + *pbVar34 +
                                               (CARRY4((uint)puVar17,*puVar17) ||
                                               CARRY4((int)puVar17 + *puVar17,uVar19)));
                    cRam130a0000 = cRam130a0000 - (char)((uint)pbVar18 >> 8);
                    puVar42 = puVar41;
                    puVar50 = puVar50 + 1;
code_r0x00402435:
                    puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               (byte)puVar42 | (byte)*puVar42);
                    bVar8 = *pbVar12;
                    *pbVar12 = *pbVar12 + (char)pbVar12;
                    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                               CONCAT11((byte)((uint)puVar17 >> 8) | bVar8 |
                                                        bRam7d170243,(char)puVar17));
code_r0x00402442:
                    pbVar34 = (byte *)((int)puVar42 + (int)pbVar12);
                    bVar11 = *pbVar34;
                    bVar8 = (byte)pbVar12;
                    *pbVar34 = *pbVar34 + bVar8;
                    uVar19 = *puVar42;
                    uVar23 = *puVar42;
                    *puVar42 = (uint)((byte *)(uVar23 + (int)puVar17) + CARRY1(bVar11,bVar8));
                    puVar41 = puVar42;
                    if ((SCARRY4(uVar19,(int)puVar17) !=
                        SCARRY4((int)(uVar23 + (int)puVar17),(uint)CARRY1(bVar11,bVar8))) !=
                        (int)*puVar42 < 0) {
                      *pbVar12 = *pbVar12 + bVar8;
                      bVar60 = SCARRY1(bVar8,'\x02');
                      bVar8 = bVar8 + 2;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
code_r0x0040244f:
                      bVar58 = (char)bVar8 < '\0';
                      if (bVar60 == bVar58) {
code_r0x00402451:
                        *pbVar12 = *pbVar12 + (char)pbVar12;
                        bVar8 = (char)pbVar12 + 0x12U | (byte)*puVar42;
                        pcVar20 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
                        cRam162b0000 = cRam162b0000 - bVar8;
code_r0x0040245d:
                        pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),
                                                   (byte)pbVar18 | (byte)((uint)puVar17 >> 8));
                        cVar6 = in((short)puVar42);
                        puVar29 = (ushort *)CONCAT31((int3)((uint)pcVar20 >> 8),cVar6);
                        *(char *)puVar29 = (char)*puVar29 + cVar6;
                        *(byte *)puVar42 = (byte)*puVar42 + cVar6;
                        if ((POPCOUNT((byte)*puVar42) & 1U) == 0) {
code_r0x00402466:
                          *(char *)puVar29 = (char)*puVar29 + (char)puVar29;
                          uVar30 = (undefined3)((uint)puVar29 >> 8);
                          bVar8 = (char)puVar29 + 0x13U | (byte)*puVar42;
                          pcVar20 = (char *)CONCAT31(uVar30,bVar8);
                          cVar6 = (byte)puVar17 + *pbVar18;
                          puVar41 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),cVar6);
                          cRam1b000019 = cRam1b000019 + '\x01';
                          uVar19 = (uint)CARRY1((byte)puVar17,*pbVar18);
                          iVar16 = *(int *)pbVar18;
                          iVar14 = *(int *)pbVar18;
                          *(byte **)pbVar18 = (byte *)(iVar14 + (int)puVar41) + uVar19;
                          if ((SCARRY4(iVar16,(int)puVar41) != SCARRY4(iVar14 + (int)puVar41,uVar19)
                              ) != *(int *)pbVar18 < 0) {
                            *pcVar20 = *pcVar20 + bVar8;
                            iVar14 = CONCAT31(uVar30,bVar8 + 2) + 0x847d + (uint)(0xfd < bVar8);
                            uVar30 = (undefined3)((uint)iVar14 >> 8);
                            bVar8 = (char)iVar14 + 0x12;
                            puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                                       CONCAT11((byte)((uint)puVar17 >> 8) |
                                                                *(byte *)CONCAT31(uVar30,bVar8),
                                                                cVar6));
                            bVar36 = 9 < (bVar8 & 0xf) | bVar36;
                            uVar19 = CONCAT31(uVar30,bVar8 + bVar36 * -6) & 0xffffff0f;
                            pcVar20 = (char *)CONCAT22((short)(uVar19 >> 0x10),
                                                       CONCAT11((char)((uint)iVar14 >> 8) - bVar36,
                                                                (char)uVar19));
code_r0x00402486:
                            *pcVar20 = *pcVar20 + (char)pcVar20;
                            puVar44 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                                       (byte)puVar42 | (byte)*puVar42);
                            uVar38 = (undefined2)((uint)pbVar18 >> 0x10);
                            bVar8 = (byte)((uint)pbVar18 >> 8) | (byte)((uint)puVar42 >> 8);
                            pbVar12 = (byte *)(pcVar20 + 0x1b000019);
                            puVar41 = (uint *)((int)puVar44 + (int)pbVar12);
                            bVar57 = CARRY4((uint)puVar17,*puVar41);
                            pbVar34 = (byte *)((int)puVar17 + *puVar41);
                            puVar17 = (uint *)(pbVar34 + ((char *)0xe4ffffe6 < pcVar20));
                            piVar28 = (int *)((int)pbVar13 * 2 + 0x400008b);
                            *piVar28 = (int)((int)puVar17 +
                                            (uint)(bVar57 ||
                                                  CARRY4((uint)pbVar34,
                                                         (uint)((char *)0xe4ffffe6 < pcVar20))) +
                                            *piVar28);
                            pbVar18 = (byte *)CONCAT22(uVar38,CONCAT11(bVar8 + *(char *)(CONCAT22(
                                                  uVar38,CONCAT11(bVar8,(char)pbVar18)) + -0x79),
                                                  (char)pbVar18));
                            puVar42 = puVar44;
code_r0x0040249e:
                            bVar8 = (byte)pbVar12;
                            *pbVar12 = *pbVar12 + bVar8;
                            uVar30 = (undefined3)((uint)pbVar12 >> 8);
                            cVar6 = bVar8 + 2;
                            pbVar12 = (byte *)CONCAT31(uVar30,cVar6);
                            puVar41 = puVar42;
                            if (0xfd < bVar8) {
                              bVar11 = *pbVar12;
                              *pbVar12 = *pbVar12 + cVar6;
                              if (SCARRY1(bVar11,cVar6) == (char)*pbVar12 < '\0')
                              goto code_r0x00402435;
                              *pbVar12 = *pbVar12 + cVar6;
                              cVar6 = bVar8 + 4;
                              pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                              if ((POPCOUNT(cVar6) & 1U) != 0) {
                                *(byte *)puVar42 = (byte)*puVar42 + (char)puVar17;
                                pbVar12 = (byte *)(pcVar20 + -0x7d170243);
                                goto code_r0x00402442;
                              }
                              *pcVar20 = *pcVar20 + cVar6;
                              cVar6 = bVar8 + 6;
                              pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                              if ((POPCOUNT(cVar6) & 1U) == 0) {
                                while( true ) {
                                  cVar6 = (char)pcVar20;
                                  *pcVar20 = *pcVar20 + cVar6;
                                  uVar30 = (undefined3)((uint)pcVar20 >> 8);
                                  pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '}');
                                  puVar50 = (uint *)((int)puVar50 + -1);
                                  *pcVar20 = *pcVar20 + cVar6 + '}';
                                  cVar48 = cVar6 + '\x7f';
                                  pbVar12 = (byte *)CONCAT31(uVar30,cVar48);
                                  if ((POPCOUNT(cVar48) & 1U) != 0) break;
                                  *pbVar12 = *pbVar12 + cVar48;
                                  cVar48 = cVar6 + -0x7f;
                                  pbVar12 = (byte *)CONCAT31(uVar30,cVar48);
                                  if ((POPCOUNT(cVar48) & 1U) != 0) goto code_r0x00402451;
                                  *pbVar12 = *pbVar12 + cVar48;
                                  pcVar20 = (char *)CONCAT31(uVar30,cVar6 + -2);
                                  pbVar13 = pbVar13 + -1;
                                  while( true ) {
                                    cVar6 = (char)pcVar20;
                                    *pcVar20 = *pcVar20 + cVar6;
                                    uVar30 = (undefined3)((uint)pcVar20 >> 8);
                                    cVar48 = cVar6 + '\x02';
                                    pcVar20 = (char *)CONCAT31(uVar30,cVar48);
                                    if ((POPCOUNT(cVar48) & 1U) != 0) goto code_r0x0040245d;
                                    *pcVar20 = *pcVar20 + cVar48;
                                    pcVar20 = (char *)(CONCAT31(uVar30,cVar6 + 'q') + 1);
                                    *pcVar20 = *pcVar20 + (byte)pcVar20;
                                    uVar30 = (undefined3)((uint)pcVar20 >> 8);
                                    bVar8 = (byte)pcVar20 | (byte)*puVar42;
                                    pcVar20 = (char *)CONCAT31(uVar30,bVar8);
                                    if ((POPCOUNT(bVar8) & 1U) != 0) {
                                      puVar17 = (uint *)((int)puVar17 + *puVar42);
                                      puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                                                 (char)puVar42 + (byte)*puVar42);
                                      pbVar13 = (byte *)((uint)pbVar13 | (uint)puVar50);
                                      puVar29 = (ushort *)(pcVar20 + 0x1b000019);
                                      goto code_r0x00402466;
                                    }
                                    *pcVar20 = *pcVar20 + bVar8;
                                    pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x6f);
                                    puVar17 = (uint *)((int)puVar17 + 1);
                                    *pcVar20 = *pcVar20 + bVar8 + 0x6f;
                                    uVar38 = (undefined2)((uint)pbVar18 >> 0x10);
                                    bVar8 = (byte)pbVar18;
                                    bVar11 = (byte)((uint)pbVar18 >> 8) | (byte)*puVar42;
                                    uVar56 = (ushort)uStack_14;
                                    uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
                                    cVar48 = (char)(pcVar20 + -0x21000001);
                                    uVar30 = (undefined3)((uint)(pcVar20 + -0x21000001) >> 8);
                                    cVar6 = cVar48 + -0x13;
                                    pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                                    cVar46 = bVar11 + *(char *)(CONCAT22(uVar38,CONCAT11(bVar11,
                                                  bVar8)) + -0x73);
                                    pbVar18 = (byte *)CONCAT22(uVar38,CONCAT11(cVar46,bVar8));
                                    *pcVar20 = *pcVar20 + cVar6;
                                    pcVar20 = (char *)(CONCAT31(uVar30,cVar48 + '\x19') | *puVar42);
                                    if ((POPCOUNT((uint)pcVar20 & 0xff) & 1U) != 0)
                                    goto code_r0x00402486;
                                    cVar6 = (char)pcVar20;
                                    *pcVar20 = *pcVar20 + cVar6;
                                    uVar30 = (undefined3)((uint)pcVar20 >> 8);
                                    pcVar15 = (char *)CONCAT31(uVar30,cVar6 + 'o');
                                    puVar41 = (uint *)((int)puVar42 + 1);
                                    *pcVar15 = *pcVar15 + cVar6 + 'o';
                                    bVar8 = bVar8 | (byte)((uint)pcVar20 >> 8);
                                    pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '\\');
                                    cVar46 = cVar46 + *(char *)(CONCAT31((int3)((uint)pbVar18 >> 8),
                                                                         bVar8) + -0x78);
                                    pbVar18 = (byte *)CONCAT22(uVar38,CONCAT11(cVar46,bVar8));
                                    *pcVar20 = *pcVar20 + cVar6 + '\\';
                                    pcVar20 = (char *)(CONCAT31(uVar30,cVar6 + -0x78) | *puVar41);
                                    cVar6 = (char)pcVar20;
                                    uVar30 = (undefined3)((uint)pcVar20 >> 8);
                                    if ((POPCOUNT((uint)pcVar20 & 0xff) & 1U) != 0) {
                                      pbVar12 = (byte *)CONCAT31(uVar30,cVar6 + '\x02');
                                      puVar42 = puVar41;
                                      if ((POPCOUNT(cVar6 + '\x02') & 1U) == 0)
                                      goto code_r0x0040249e;
                                      goto code_r0x00402425;
                                    }
                                    *pcVar20 = *pcVar20 + cVar6;
                                    cVar48 = cVar6 + 'o';
                                    pcVar15 = (char *)CONCAT31(uVar30,cVar48);
                                    puVar42 = (uint *)((int)puVar42 + 2);
                                    *pcVar15 = *pcVar15 + cVar48;
                                    bVar8 = bVar8 | (byte)((uint)pcVar20 >> 8);
                                    pbVar18 = (byte *)CONCAT22(uVar38,CONCAT11(cVar46 + *(char *)(
                                                  CONCAT31((int3)((uint)pbVar18 >> 8),bVar8) + -0x79
                                                  ),bVar8));
                                    *pcVar15 = *pcVar15 + cVar48;
                                    pcVar20 = (char *)(CONCAT31(uVar30,cVar6 + 'z') | 2);
                                    pbVar49[-0x7c] = pbVar49[-0x7c] + 1;
                                    cVar6 = (char)pcVar20;
                                    *pcVar20 = *pcVar20 + cVar6;
                                    cVar48 = cVar6 + '\x02';
                                    pcVar20 = (char *)CONCAT31(uVar30,cVar48);
                                    if (SCARRY1(cVar6,'\x02') != cVar48 < '\0') break;
                                    *pcVar20 = *pcVar20 + cVar48;
                                    cVar48 = cVar6 + '\n';
                                    *pbVar18 = *pbVar18 - cVar48;
                                    *(byte *)puVar42 = *(byte *)puVar42 + (char)puVar17;
                                    pbVar49[-0x7c] = pbVar49[-0x7c] + 1;
                                    *(char *)CONCAT31(uVar30,cVar48) =
                                         *(char *)CONCAT31(uVar30,cVar48) + cVar48;
                                    cVar46 = cVar6 + '\f';
                                    pcVar20 = (char *)CONCAT31(uVar30,cVar46);
                                    if (SCARRY1(cVar48,'\x02') == cVar46 < '\0') {
                                      *pcVar20 = *pcVar20 + cVar46;
                                      pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '\x13');
                                      uVar56 = in_ES;
                                      goto code_r0x0040254a;
                                    }
                                  }
                                }
                                pbVar34 = (byte *)((int)puVar42 + (int)pbVar12);
                                bVar60 = SCARRY1(*pbVar34,cVar48);
                                *pbVar34 = *pbVar34 + cVar48;
                                bVar8 = *pbVar34;
                                goto code_r0x0040244f;
                              }
                              cVar48 = (char)puVar42;
                              cVar46 = cVar48 + *pbVar13;
                              puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),cVar46);
                              if (SCARRY1(cVar48,*pbVar13) != cVar46 < '\0') {
                                *pcVar20 = *pcVar20 + cVar6;
                                pbVar12 = (byte *)CONCAT31(uVar30,bVar8 + 8);
                                goto code_r0x00402442;
                              }
                              cRam1b000013 = cRam1b000013 + '\x01';
                              goto code_r0x004023cd;
                            }
                            goto code_r0x00402425;
                          }
                          pcVar15 = pcVar20 + 2;
                          *pcVar15 = *pcVar15 + (char)((uint)puVar42 >> 8);
                          puVar17 = puVar41;
                          if ((POPCOUNT(*pcVar15) & 1U) == 0) {
                            *pcVar20 = *pcVar20 + bVar8;
                            pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 2);
                            puVar41 = puVar50;
                            goto code_r0x00402402;
                          }
                          puVar42 = (uint *)((int)puVar42 - *puVar50);
                          goto code_r0x00402399;
                        }
                        goto code_r0x004023f6;
                      }
                      goto code_r0x004023d6;
                    }
                    goto code_r0x004023db;
                  }
                  goto code_r0x00402399;
                }
                pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                           CONCAT11((char)((uint)pbVar18 >> 8) +
                                                    pbVar49[(int)pcVar20 * 4],(char)pbVar18));
                *(char *)((int)puVar42 * 2) = *(char *)((int)puVar42 * 2) + cVar6;
                in_ES = uVar56;
                goto code_r0x00402391;
              }
              *pcVar20 = *pcVar20 + cVar48;
              pbVar12 = (byte *)CONCAT31(uVar30,cVar48 + '\x02');
              goto code_r0x00402368;
            }
            goto code_r0x00402366;
          }
          goto code_r0x00402342;
        }
        LOCK();
        pcVar20 = *(char **)puVar29;
        *(ushort **)puVar29 = puVar29;
        UNLOCK();
        *(byte *)((int)puVar42 + (int)pcVar20) =
             *(byte *)((int)puVar42 + (int)pcVar20) + (char)pcVar20;
        goto code_r0x00402317;
      }
      bVar57 = CARRY1(*pbVar12,(byte)pbVar12);
      *pbVar12 = *pbVar12 + (byte)pbVar12;
code_r0x004022f3:
      *(byte **)pbVar13 = (byte *)((int)puVar41 + (uint)bVar57 + *(int *)pbVar13);
    }
  } while( true );
code_r0x0040254a:
  cVar6 = (char)pcVar20;
  *(char *)((int)pcVar20 * 2) = *(char *)((int)pcVar20 * 2) - cVar6;
  *pcVar20 = *pcVar20 + cVar6;
  pcVar15 = (char *)CONCAT31((int3)((uint)pcVar20 >> 8),cVar6 + *pcVar20);
  *pcVar15 = *pcVar15 + cVar6 + *pcVar20;
  uStack_18 = 0x4025;
  uVar61 = func_0x0f40255d();
  uVar53 = uStack_18;
code_r0x0040255d:
  uStack_18 = uVar53;
  pcVar20 = (char *)((ulonglong)uVar61 >> 0x20);
  piVar28 = (int *)uVar61;
  *piVar28 = (int)((int)piVar28 + *piVar28);
  uVar38 = (undefined2)((uint)pbVar18 >> 0x10);
  uVar33 = SUB41(pbVar18,0);
  cVar46 = (char)((uint)pbVar18 >> 8) + (char)((ulonglong)uVar61 >> 0x28);
  pcVar15 = (char *)CONCAT22(uVar38,CONCAT11(cVar46,uVar33));
  *piVar28 = (int)((int)piVar28 + *piVar28);
  *pbVar13 = *pbVar13 + (char)((ulonglong)uVar61 >> 0x20);
  cVar6 = (char)uVar61;
  *(char *)piVar28 = (char)*piVar28 + cVar6;
  *(char *)piVar28 = (char)*piVar28 + cVar6;
  *(char *)piVar28 = (char)*piVar28 + cVar6;
  *pcVar20 = *pcVar20 + cVar6;
  *(char *)piVar28 = (char)*piVar28 + cVar6;
  *pcVar15 = *pcVar15 + cVar6;
  *(char *)piVar28 = (char)*piVar28 + cVar6;
  pcVar2 = (code *)swi(1);
  uVar61 = (*pcVar2)();
  pbVar34 = (byte *)((ulonglong)uVar61 >> 0x20);
  pbVar12 = (byte *)uVar61;
  bVar8 = *pbVar12;
  bVar11 = (byte)uVar61;
  *pbVar12 = *pbVar12 + bVar11;
  *pbVar34 = *pbVar34 + bVar11 + CARRY1(bVar8,bVar11);
  *pbVar12 = *pbVar12 + bVar11;
  *pbVar12 = *pbVar12 + bVar11;
  *pbVar12 = *pbVar12 + bVar11;
  *pbVar12 = *pbVar12 + bVar11;
  *pbVar12 = *pbVar12 + bVar11;
  *pbVar12 = *pbVar12 + bVar11;
  *pbVar12 = *pbVar12 + bVar11;
  *pbVar12 = *pbVar12 + bVar11;
  cVar6 = (char)((ulonglong)uVar61 >> 0x28);
  *pbVar12 = *pbVar12 + cVar6;
  bVar8 = *pbVar12;
  uVar30 = (undefined3)((ulonglong)uVar61 >> 8);
  pcVar20 = (char *)CONCAT31(uVar30,bVar11 + bVar8);
  *pcVar20 = *pcVar20 + cVar6;
  cVar6 = bVar11 + bVar8 + *pcVar20;
  pcVar20 = (char *)CONCAT31(uVar30,cVar6);
  cVar48 = (char)((ulonglong)uVar61 >> 0x20);
  *pbVar13 = *pbVar13 + cVar48;
  *pcVar20 = *pcVar20 + cVar6;
  *pcVar20 = *pcVar20 + cVar48;
  *pcVar20 = *pcVar20 + cVar6;
  *puVar50 = (uint)(*puVar50 + (int)puVar50);
  cVar46 = cVar46 + pbVar49[(int)pcVar20 * 4];
  pbVar18 = (byte *)CONCAT22(uVar38,CONCAT11(cVar46,uVar33));
  pbVar18[(int)pcVar20] = pbVar18[(int)pcVar20] + cVar6;
  *(byte *)puVar50 = (byte)*puVar50 - cVar6;
  *pbVar34 = *pbVar34 + (char)extraout_ECX;
  bVar11 = cVar6 - *pcVar20;
  pcVar20 = (char *)CONCAT31(uVar30,bVar11);
  *pbVar18 = *pbVar18 + cVar48;
  *pbVar34 = *pbVar34 ^ bVar11;
  *pbVar34 = *pbVar34 + cVar46;
  *pcVar20 = *pcVar20 + bVar11;
  cRam12110000 = cRam12110000 + bVar11;
  bVar8 = *pbVar34;
  *pbVar34 = *pbVar34 + bVar11;
  pbVar12 = extraout_ECX;
  if (SCARRY1(bVar8,bVar11) != (char)*pbVar34 < '\0') {
code_r0x004025bd:
    *pcVar20 = *pcVar20 + (char)pcVar20;
    pcVar20 = (char *)CONCAT31((int3)((uint)pcVar20 >> 8),(char)pcVar20 + '\x12');
    *pcVar20 = *pcVar20 + (char)((uint)pbVar12 >> 8);
    pcVar20 = pcVar20 + -1;
    cVar6 = (char)pcVar20;
    *pcVar20 = *pcVar20 + cVar6;
    bVar8 = (byte)((uint)pbVar18 >> 8) | pbVar49[-0x7b];
    pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),CONCAT11(bVar8,(char)pbVar18));
    *pcVar20 = *pcVar20 + cVar6;
    cRam0000847d = cRam0000847d + (char)pbVar34;
    pbVar22 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),cVar6 + '$');
    pbVar18[-0x7b] = pbVar18[-0x7b] + bVar8;
    pbVar21 = pbVar12;
code_r0x004025d8:
    bVar8 = (byte)pbVar22;
    *pbVar22 = *pbVar22 + bVar8;
    bVar57 = 0xf4 < bVar8;
    pcVar20 = (char *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar8 + 0xb);
    pbVar22 = pbVar49;
    do {
      bVar8 = (byte)pcVar20 + *pbVar21;
      uVar30 = (undefined3)((uint)pcVar20 >> 8);
      cVar6 = bVar8 + bVar57;
      cVar6 = cVar6 + *(char *)CONCAT31(uVar30,cVar6) +
              (CARRY1((byte)pcVar20,*pbVar21) || CARRY1(bVar8,bVar57));
      pcVar20 = (char *)CONCAT31(uVar30,cVar6);
      *(byte *)puVar50 = (byte)*puVar50 - cVar6;
      *pcVar20 = *pcVar20 + cVar6;
      iVar14 = *(int *)pbVar34;
      pbVar22[(int)pcVar20 * 4] = pbVar22[(int)pcVar20 * 4] + (char)((uint)pbVar18 >> 8);
      pcVar20[(int)pbVar22] = pcVar20[(int)pbVar22] + cVar6;
      pbVar43 = pbVar34 + (-1 - iVar14);
      *pcVar20 = *pcVar20 + cVar6;
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar21 >> 8) | *pbVar43) + pbVar13[0x22],
                                          (char)pbVar21));
      *pcVar20 = *pcVar20 + cVar6;
      bVar10 = (char)pbVar43 - pbVar34[1 - iVar14];
      bVar9 = cVar6 - 0xf;
      pbVar49 = (byte *)CONCAT31(uVar30,bVar9);
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                 CONCAT11((char)((uint)pbVar43 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar43 >> 8),bVar10) +
                                                   -0x3f),bVar10));
      bVar8 = *pbVar49;
      bVar11 = *pbVar49;
      *pbVar49 = *pbVar49 + bVar9;
      uVar53 = uVar56;
      if (SCARRY1(bVar11,bVar9)) {
        pbVar21 = (byte *)CONCAT31(uVar30,bVar9 + pbVar49[(int)pbVar22] + CARRY1(bVar8,bVar9));
        goto code_r0x00402677;
      }
      pbVar18 = pbVar18 + -1;
      *pbVar49 = *pbVar49 + bVar9;
      uVar19 = *puVar50;
      *pbVar12 = *pbVar12 + 1;
      pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),(bVar10 | (byte)uVar19) - (byte)*puVar50
                                );
      puVar50 = (uint *)((int)puVar50 +
                        (-(uint)(bVar9 < *pbVar49) - *(int *)CONCAT31(uVar30,bVar9 - *pbVar49)));
      pbVar49 = (byte *)CONCAT31(uVar30,bVar9 - *pbVar49);
      *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
      bVar11 = (byte)pbVar22;
      *(byte *)puVar50 = (byte)*puVar50 + bVar11;
      bVar8 = *pbVar22;
      *pbVar22 = *pbVar22 + bVar11;
      *(byte **)pbVar13 = pbVar34 + (uint)CARRY1(bVar8,bVar11) + *(int *)pbVar13;
      uVar30 = (undefined3)((uint)pbVar22 >> 8);
      bVar11 = bVar11 | *pbVar34;
      pcVar20 = (char *)CONCAT31(uVar30,bVar11);
      if ((POPCOUNT(bVar11) & 1U) != 0) {
        *pcVar20 = *pcVar20 + bVar11;
        uVar61 = CONCAT44(pbVar34,pcVar20 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar20 = *pcVar20 + bVar11;
      bVar8 = bVar11 + 0xd;
      pbVar21 = (byte *)CONCAT31(uVar30,bVar8);
      *puVar50 = *puVar50 | (uint)pbVar34;
      if (-1 < (int)*puVar50) {
code_r0x00402678:
        *pbVar21 = *pbVar21 + (char)pbVar21;
        pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar12 >> 8) | bRam7d160243,(char)pbVar12)
                                  );
        pbVar22 = pbVar13;
code_r0x00402680:
        bVar8 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar8;
        uVar30 = (undefined3)((uint)pbVar12 >> 8);
        piVar28 = (int *)((int)pbVar22 * 2 + 0x400009a);
        *piVar28 = *piVar28 + CONCAT31(uVar30,bVar8 + 2) + (uint)(0xfd < bVar8);
        pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                   CONCAT11((char)((uint)pbVar18 >> 8) + *(char *)((int)pbVar34 * 5)
                                            ,(char)pbVar18));
        *(char *)((int)pbVar34 * 2) = *(char *)((int)pbVar34 * 2) + bVar8 + 2;
        pbVar13 = (byte *)CONCAT31(uVar30,bVar8 + 4);
        *pbVar22 = *pbVar22 - (bVar8 + 4);
code_r0x00402697:
        *pbVar13 = *pbVar13 + (char)pbVar13;
        pbVar34 = pbVar34 + -*puVar50;
        pbVar12 = pbVar13;
code_r0x0040269b:
        pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),
                                   (byte)pbVar18 | (byte)((uint)pbVar21 >> 8));
        uVar35 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar12 = uVar35;
        cVar6 = (char)pbVar12;
        *pbVar34 = *pbVar34 + cVar6;
        if ((POPCOUNT(*pbVar34) & 1U) == 0) {
          *pbVar12 = *pbVar12 + cVar6;
          pcVar20 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6 + '\x13');
          pbVar12 = pbVar21;
          pbVar13 = pbVar22;
code_r0x004026a8:
          uVar30 = (undefined3)((uint)pcVar20 >> 8);
          bVar11 = (byte)pcVar20 + 2 + cRam001b15fe + (0xfd < (byte)pcVar20);
          bVar8 = *pbVar18;
          bVar9 = (byte)pbVar18;
          *pbVar18 = *pbVar18 + bVar9;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar30,bVar11) + (uint)CARRY1(bVar8,bVar9);
          iVar14 = CONCAT31(uVar30,bVar11 + 2) + 0x917d + (uint)(0xfd < bVar11);
          cVar6 = (char)iVar14;
          uVar30 = (undefined3)((uint)iVar14 >> 8);
          bVar8 = cVar6 + 0x3a;
          pbVar43 = (byte *)CONCAT31(uVar30,bVar8);
          *pbVar43 = *pbVar43 + bVar8;
          uVar45 = (undefined3)((uint)pbVar34 >> 8);
          bVar11 = (byte)pbVar34 | *pbVar34;
          uVar23 = CONCAT31(uVar30,cVar6 + '8');
          uVar19 = uVar23 + 0x1b00001b;
          pcVar20 = (char *)(uVar19 + (1 < bVar8) + *puVar50 +
                            (uint)(0xe4ffffe4 < uVar23 || CARRY4(uVar19,(uint)(1 < bVar8))));
          bVar8 = bVar11 + *pbVar12;
          pbVar34 = (byte *)CONCAT31(uVar45,bVar8);
          uVar30 = (undefined3)((uint)pcVar20 >> 8);
          cVar6 = (char)pcVar20;
          if (SCARRY1(bVar11,*pbVar12) != (char)bVar8 < '\0') {
            *pcVar20 = *pcVar20 + cVar6;
            pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '\x02');
            uVar38 = (undefined2)((uint)pbVar18 >> 0x10);
            cVar46 = (char)((uint)pbVar18 >> 8) + pbVar18[-0x68];
            pbVar18 = (byte *)CONCAT22(uVar38,CONCAT11(cVar46,bVar9));
            *pcVar20 = *pcVar20 + cVar6 + '\x02';
            bVar11 = cVar6 + 0x2a;
            pbVar21 = (byte *)CONCAT31(uVar30,bVar11);
            *pbVar21 = *pbVar21 | bVar11;
            bVar8 = *pbVar18;
            cVar48 = (char)((uint)pbVar12 >> 8);
            *pbVar18 = *pbVar18 + cVar48;
            pbVar22 = pbVar13;
            if (SCARRY1(bVar8,cVar48) != (char)*pbVar18 < '\0') {
              *pbVar21 = *pbVar21 + bVar11;
              bVar8 = cVar6 + 0x2c;
              if ((POPCOUNT(bVar8) & 1U) == 0) {
                *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
                bVar11 = cVar6 + 0x59;
                pcVar20 = (char *)CONCAT31(uVar30,bVar11);
                *(char **)pbVar34 = pcVar20 + (uint)(0xd2 < bVar8) + *(int *)pbVar34;
                pbVar18 = (byte *)CONCAT22(uVar38,CONCAT11(cVar46 + pbVar18[-0x67],bVar9));
                *pcVar20 = *pcVar20 + bVar11;
                pbVar22 = (byte *)((CONCAT31(uVar30,cVar6 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar11));
                pbVar21 = pbVar12;
                uStack_1c = in_ES;
code_r0x00402700:
                *pbVar13 = *pbVar13 + (char)pbVar13;
                cVar6 = (char)pbVar13 + '\x02';
                pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar6);
                bVar57 = (POPCOUNT(cVar6) & 1U) == 0;
                pbVar13 = pbVar43;
code_r0x00402704:
                if (bVar57) {
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  cVar6 = (char)pbVar12 + '\x02';
                  pcVar20 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
                  puVar17 = puVar50;
                  if ((POPCOUNT(cVar6) & 1U) == 0) {
code_r0x0040270c:
                    uVar55 = in_ES;
                    cVar6 = (char)pcVar20;
                    *pcVar20 = *pcVar20 + cVar6;
                    uVar30 = (undefined3)((uint)pcVar20 >> 8);
                    bVar8 = cVar6 + 0x6f;
                    piVar28 = (int *)CONCAT31(uVar30,bVar8);
                    iVar14 = *piVar28;
                    *(byte *)piVar28 = (char)*piVar28 + bVar8;
                    in_ES = uVar55;
                    pbVar12 = pbVar34;
                    if ((char)*piVar28 != '\0' &&
                        SCARRY1((char)iVar14,bVar8) == (char)*piVar28 < '\0') {
                      *(byte *)piVar28 = (char)*piVar28 + bVar8;
                      bVar11 = cVar6 + 0x9c;
                      piVar28 = (int *)CONCAT31(uVar30,bVar11);
                      puVar41 = puVar17 + (int)pbVar22 * 2;
                      uVar19 = *puVar41;
                      uVar23 = *puVar41;
                      *puVar41 = (uint)(pbVar34 + uVar23 + (0xd2 < bVar8));
                      *piVar28 = (*piVar28 - (int)piVar28) -
                                 (uint)(CARRY4(uVar19,(uint)pbVar34) ||
                                       CARRY4((uint)(pbVar34 + uVar23),(uint)(0xd2 < bVar8)));
                      uVar19 = *puVar17;
                      *(byte *)puVar17 = (byte)*puVar17 + bVar11;
                      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),uVar55);
                      if (!CARRY1((byte)uVar19,bVar11)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    pbVar13 = pbVar12;
                    uVar53 = uStack_1c;
                    *(byte *)piVar28 = (char)*piVar28 + (byte)piVar28;
                    uVar30 = (undefined3)((uint)piVar28 >> 8);
                    bVar8 = (byte)piVar28 | *(byte *)((int)piVar28 + 0x400000d);
                    pcVar20 = (char *)CONCAT31(uVar30,bVar8);
                    if ((char)bVar8 < '\x01') {
                      bVar57 = pcVar20 < (char *)0x6fe1411;
                      pcVar20 = pcVar20 + -0x6fe1411;
                    }
                    else {
                      *pcVar20 = *pcVar20 + bVar8;
                      bVar9 = bVar8 + 0x28;
                      puVar41 = (uint *)CONCAT31(uVar30,bVar9);
                      *puVar41 = *puVar41 | (uint)puVar41;
                      bVar11 = *pbVar18;
                      cVar6 = (char)((uint)pbVar21 >> 8);
                      *pbVar18 = *pbVar18 + cVar6;
                      if (*pbVar18 == 0 || SCARRY1(bVar11,cVar6) != (char)*pbVar18 < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar41 = (char)*puVar41 + bVar9;
                      pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x55);
                      puVar41 = puVar17 + (int)pbVar22 * 2;
                      bVar57 = CARRY4(*puVar41,(uint)pbVar34) ||
                               CARRY4((uint)(pbVar34 + *puVar41),(uint)(0xd2 < bVar9));
                      *puVar41 = (uint)(pbVar34 + *puVar41 + (0xd2 < bVar9));
                      in_stack_ffffffdc = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar30 = (undefined3)((uint)pcVar20 >> 8);
                      bVar8 = ((char)pcVar20 - *pcVar20) - bVar57;
                      puVar41 = (uint *)CONCAT31(uVar30,bVar8);
                      uVar19 = *puVar17;
                      *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                      if (CARRY1((byte)uVar19,bVar8)) break;
                      pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),
                                                 (byte)pbVar18 | (byte)((uint)pbVar34 >> 8));
                      pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 2);
                      while( true ) {
                        uVar53 = (ushort)pbVar13;
                        pbVar49[-0x6f] = pbVar49[-0x6f] + 1;
                        cVar6 = (char)pcVar20;
                        *pcVar20 = *pcVar20 + cVar6;
                        uVar30 = (undefined3)((uint)pcVar20 >> 8);
                        bVar8 = cVar6 + 2;
                        pcVar20 = (char *)CONCAT31(uVar30,bVar8);
                        if (SCARRY1(cVar6,'\x02') != (char)bVar8 < '\0') break;
                        *pcVar20 = *pcVar20 + bVar8;
                        cVar46 = (char)pbVar34;
                        *pbVar22 = *pbVar22 - cVar46;
                        *pbVar34 = *pbVar34 + (char)pbVar21;
                        bVar11 = (cVar6 + '\t') - *(char *)CONCAT31(uVar30,cVar6 + '\t');
                        pbVar12 = (byte *)CONCAT31(uVar30,bVar11);
                        bVar8 = *pbVar12;
                        *pbVar12 = *pbVar12 + bVar11;
                        pbVar43 = pbVar21 + 1;
                        cVar6 = bVar11 - CARRY1(bVar8,bVar11);
                        pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                        *pcVar20 = *pcVar20 + cVar6;
                        *pcVar20 = *pcVar20 + cVar6;
                        *pcVar20 = *pcVar20 + cVar6;
                        *pcVar20 = *pcVar20 + cVar6;
                        cVar48 = (char)((uint)pbVar43 >> 8);
                        pbVar21[2] = pbVar21[2] + cVar48;
                        *pcVar20 = *pcVar20 + cVar6;
                        pcVar20 = (char *)(*(int *)pbVar43 * 0x170000);
                        *pcVar20 = *pcVar20;
                        *pcVar20 = *pcVar20;
                        *pbVar43 = *pbVar43;
                        uVar38 = (undefined2)((uint)pbVar18 >> 0x10);
                        cVar6 = (char)pbVar18;
                        bVar9 = (char)((uint)pbVar18 >> 8) + *(char *)((int)pbVar34 * 5);
                        pbVar18 = (byte *)CONCAT22(uVar38,CONCAT11(bVar9,cVar6));
                        pbVar18[(int)pcVar20] = pbVar18[(int)pcVar20];
                        *pcVar20 = *pcVar20 - cVar6;
                        *pbVar34 = *pbVar34 + (char)pbVar43;
                        uVar30 = (undefined3)((uint)pcVar20 >> 8);
                        bVar11 = -*pcVar20;
                        pbVar12 = (byte *)CONCAT31(uVar30,bVar11);
                        *pbVar18 = *pbVar18 + cVar46;
                        *pbVar34 = *pbVar34 ^ bVar11;
                        *pbVar34 = *pbVar34 + bVar11;
                        *pbVar12 = *pbVar12 + bVar11;
                        bVar8 = *pbVar12;
                        *pbVar12 = *pbVar12 + bVar11;
                        *(byte **)pbVar34 = pbVar34 + (uint)CARRY1(bVar8,bVar11) + *(int *)pbVar34;
                        bVar8 = *pbVar34;
                        *pbVar34 = *pbVar34 + bVar11;
                        if (SCARRY1(bVar8,bVar11) == (char)*pbVar34 < '\0') {
                          pcVar20 = (char *)((uint)pbVar12 | 2);
                          pbVar49[-0x6f] = pbVar49[-0x6f] + 1;
                          *pcVar20 = *pcVar20 + (char)pcVar20;
                          uStack_18 = uVar56;
                          uStack_1c = (ushort)uStack_14;
                        }
                        else {
                          *pbVar12 = *pbVar12 + bVar11;
                          cVar47 = bVar11 + 0x12;
                          pcVar20 = (char *)CONCAT31(uVar30,cVar47);
                          bVar8 = *pbVar18;
                          *pbVar18 = *pbVar18 + cVar47;
                          uStack_1c = uVar53;
                          if (SCARRY1(bVar8,cVar47) != (char)*pbVar18 < '\0') {
                            *pcVar20 = *pcVar20 + cVar47;
                            cVar47 = bVar11 + 0x24;
                            pcVar20 = (char *)CONCAT31(uVar30,cVar47);
                            *pcVar20 = *pcVar20 + cVar48;
                            pbVar13 = (byte *)CONCAT13(uStack_15,(uint3)uVar56);
                            *pcVar20 = *pcVar20 + cVar47;
                            bVar9 = bVar9 | pbVar49[-0x6e];
                            pcVar15 = (char *)CONCAT22(uVar38,CONCAT11(bVar9,cVar6));
                            *pcVar20 = *pcVar20 + cVar47;
                            cRam0000917d = cRam0000917d + cVar46;
                            bVar10 = bVar11 + 0x48;
                            pcVar15[-0x6e] = pcVar15[-0x6e] + bVar9;
                            *(char *)CONCAT31(uVar30,bVar10) =
                                 *(char *)CONCAT31(uVar30,bVar10) + bVar10;
                            bVar8 = bVar11 + 0x53 + *pbVar13;
                            cVar6 = bVar8 + (0xf4 < bVar10);
                            cVar6 = cVar6 + *(char *)CONCAT31(uVar30,cVar6) +
                                    (CARRY1(bVar11 + 0x53,*pbVar13) || CARRY1(bVar8,0xf4 < bVar10));
                            pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                            *pcVar15 = *pcVar15 - (char)uVar56;
                            *pcVar20 = *pcVar20 + cVar6;
                            pbVar34 = pbVar34 + -*(int *)pbVar34;
                            *(char *)((int)pbVar34 * 5) = *(char *)((int)pbVar34 * 5) + bVar9;
                            pcVar20[(int)pbVar49] = pcVar20[(int)pbVar49] + cVar6;
                            *pcVar20 = *pcVar20 + cVar6;
                            bVar11 = (byte)(uVar56 >> 8) | *pbVar34;
                            uVar33 = (undefined1)uStack_14;
                            cVar48 = (char)((uint)uStack_14 >> 8) + *(char *)(uStack_14 + 0xf);
                            *pcVar20 = *pcVar20 + cVar6;
                            bVar8 = cVar6 + 0x2aU & *pbVar34;
                            iVar14 = *(int *)(pbVar49 + 0xf);
                            *(char *)CONCAT31(uVar30,bVar8) =
                                 *(char *)CONCAT31(uVar30,bVar8) + bVar8;
                            pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
                            cVar48 = cVar48 + *(char *)(CONCAT22(uStack_14._2_2_,
                                                                 CONCAT11(cVar48,uVar33)) + 0x10);
                            *pcVar20 = *pcVar20 + bVar8 + 0x2a;
                            bVar8 = bVar8 + 0x54 & *pbVar34;
                            iVar16 = *(int *)(pbVar49 + 0x10);
                            *(char *)CONCAT31(uVar30,bVar8) =
                                 *(char *)CONCAT31(uVar30,bVar8) + bVar8;
                            pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
                            puVar42 = (uint *)CONCAT22(uStack_14._2_2_,
                                                       CONCAT11(cVar48 + *(char *)(CONCAT22(
                                                  uStack_14._2_2_,CONCAT11(cVar48,uVar33)) + 0x11),
                                                  uVar33));
                            *pcVar20 = *pcVar20 + bVar8 + 0x2a;
                            bVar8 = bVar8 + 0x54 & *pbVar34;
                            puVar50 = (uint *)(pbVar22 + *(int *)(pbVar49 + 0x11) + iVar16 + iVar14)
                            ;
                            *(char *)CONCAT31(uVar30,bVar8) =
                                 *(char *)CONCAT31(uVar30,bVar8) + bVar8;
                            pbVar12 = (byte *)CONCAT31(uVar30,bVar8 + 0x2a);
                            puVar41 = (uint *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                                       CONCAT11(bVar11 + *pbVar12,(char)uVar56));
                            uVar61 = CONCAT44(pbVar34,pbVar12 + (uint)CARRY1(bVar11,*pbVar12) +
                                                                *(int *)pbVar12);
                            uVar56 = uVar53;
                            goto code_r0x00402866;
                          }
                        }
                        cVar6 = (char)pcVar20;
                        uVar30 = (undefined3)((uint)pcVar20 >> 8);
                        cVar48 = cVar6 + '\x02';
                        piVar28 = (int *)CONCAT31(uVar30,cVar48);
                        pbVar21 = pbVar43;
                        in_ES = uVar53;
                        pbVar12 = pbVar34;
                        if (SCARRY1(cVar6,'\x02') != cVar48 < '\0') goto code_r0x00402724;
                        *(char *)piVar28 = (char)*piVar28 + cVar48;
                        pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '\n');
                        *(byte *)puVar17 = (byte)*puVar17 - cVar46;
                        *pbVar34 = *pbVar34 + (char)pbVar43;
                      }
                      pbVar12 = pbVar49 + 0x6fe1411;
                      bVar57 = CARRY1(*pbVar12,bVar8);
                      *pbVar12 = *pbVar12 + bVar8;
                    }
                    goto code_r0x00402746;
                  }
                  pbVar18[(int)pbVar34] = pbVar18[(int)pbVar34] + cVar6;
                  pbVar12 = pbVar21;
                  pbVar13 = pbVar22;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar55 = 0x927c;
              in_stack_ffffffd4 = 0x40268f;
              uVar61 = func_0x02040000(in_CS,in_stack_ffffffdc,pbVar43);
              pbVar34 = (byte *)((ulonglong)uVar61 >> 0x20);
              *(char *)uVar61 = *(char *)uVar61 + (char)uVar61;
              pbVar21 = (byte *)CONCAT31((int3)((ulonglong)uVar61 >> 8),(char)uVar61 + '\x12');
              pbVar12 = extraout_ECX_00;
              in_CS = uVar55;
            }
            goto code_r0x00402680;
          }
          pbVar22 = pbVar49 + -1;
          *pcVar20 = *pcVar20 + cVar6;
          pbVar34 = (byte *)CONCAT31(uVar45,bVar8 | *pbVar18);
          pbVar21 = (byte *)CONCAT31(uVar30,cVar6 + ':');
code_r0x00402677:
          puVar50 = (uint *)((int)puVar50 + -1);
          pbVar49 = pbVar22;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar21 = *pbVar21 + bVar8;
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar18 >> 8) | pbVar49[-0x6b],(char)pbVar18)
                                );
      *pbVar21 = *pbVar21 + bVar8;
      cVar6 = bVar11 + 0xf;
      pcVar20 = (char *)CONCAT31(uVar30,cVar6);
      uStack_14 = CONCAT22(uStack_14._2_2_,uStack_18);
      if (SCARRY1(bVar8,'\x02') == cVar6 < '\0') {
        pcVar20 = pcVar20 + (0xfd < bVar8) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar20 = *pcVar20 + cVar6;
      cVar48 = bVar11 + 0x11;
      pbVar22 = (byte *)CONCAT31(uVar30,cVar48);
      uVar61 = CONCAT44(pbVar34,pbVar22);
      uStack_14 = CONCAT22(uStack_14._2_2_,uStack_18);
      pbVar21 = pbVar12;
      pbVar12 = pbVar13;
      if (SCARRY1(cVar6,'\x02') == cVar48 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar22 = *pbVar22 + (char)pbVar22;
      bVar8 = (char)pbVar22 + 2;
      pcVar20 = (char *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar8);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *pcVar20 = *pcVar20 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar13 = pbVar18 + (int)pbVar21;
      bVar57 = CARRY1(*pbVar13,bVar8);
      *pbVar13 = *pbVar13 + bVar8;
      pbVar22 = pbVar49;
      pbVar13 = pbVar12;
      uVar56 = uVar53;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar41 = (char)*puVar41 + (byte)puVar41;
  uVar30 = (undefined3)((uint)puVar41 >> 8);
  bVar8 = (byte)puVar41 | *(byte *)((int)puVar41 + 0x400000e);
  pcVar20 = (char *)CONCAT31(uVar30,bVar8);
  puVar50 = puVar17;
  if ('\0' < (char)bVar8) {
    *pcVar20 = *pcVar20 + bVar8;
    bVar8 = bVar8 + 0x28 | *(byte *)CONCAT31(uVar30,bVar8 + 0x28);
    *pbVar18 = *pbVar18 + (char)((uint)pbVar21 >> 8);
    puVar50 = puVar17 + 1;
    out(*puVar17,(short)pbVar34);
    *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
    pcVar20 = (char *)(uint)(bVar8 | *pbVar34);
    in_stack_ffffffdc = pbVar49;
  }
  bVar8 = (byte)pcVar20 & 0x7b;
  bVar57 = (char)(bVar8 + 0x17) < '\0';
  uStack_1c = uVar55;
  if (SCARRY1(bVar8,'\x17') == bVar57) {
    pbVar43 = pbVar13;
    if (SCARRY1(bVar8,'\x17') != bVar57) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar48 = (char)pbVar13;
  *pbVar13 = *pbVar13 + cVar48;
  iVar32 = (int3)((uint)pbVar13 >> 8);
  cVar6 = cVar48 + '\x02';
  pbVar12 = (byte *)CONCAT31(iVar32,cVar6);
  bVar57 = (POPCOUNT(cVar6) & 1U) == 0;
  if (!bVar57) goto code_r0x00402704;
  *pbVar12 = *pbVar12 + cVar6;
  cVar48 = cVar48 + '\x04';
  pcVar20 = (char *)CONCAT31(iVar32,cVar48);
  if ((POPCOUNT(cVar48) & 1U) == 0) {
    *pcVar20 = *pcVar20 + cVar48;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar34 = (byte *)((int)iVar32 >> 0x17);
  puVar17 = puVar50;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar44 = (uint *)((ulonglong)uVar61 >> 0x20);
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    cVar6 = (char)puVar42 - (byte)*puVar17;
    iVar14 = CONCAT22((short)((uint)puVar42 >> 0x10),
                      CONCAT11((char)((uint)puVar42 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),cVar6) + 0x12),cVar6));
    *(char *)uVar61 = *(char *)uVar61 + (char)uVar61;
    uVar30 = (undefined3)((ulonglong)uVar61 >> 8);
    bVar8 = (char)uVar61 + 0x2aU & (byte)*puVar44;
    pcVar20 = (char *)CONCAT31(uVar30,bVar8);
    puVar50 = (uint *)((int)puVar50 + *(int *)(pbVar49 + 0x12));
    *pcVar20 = *pcVar20 + bVar8;
    puVar25 = (uint *)CONCAT31(uVar30,bVar8 + 0x2a);
    pbVar13 = (byte *)(uint)uVar56;
get_Value:
    cVar6 = *(char *)(iVar14 + 0x13);
    *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
    uVar30 = (undefined3)((uint)puVar25 >> 8);
    bVar8 = (char)puVar25 + 0x2aU & (byte)*puVar44;
    pcVar20 = (char *)CONCAT31(uVar30,bVar8);
    puVar50 = (uint *)((int)puVar50 + *(int *)(pbVar49 + 0x13));
    *pcVar20 = *pcVar20 + bVar8;
    pbVar12 = (byte *)CONCAT31(uVar30,bVar8 + 0x2a);
    uVar19 = (uint)uVar56;
    bVar8 = (byte)((uint)puVar41 >> 8);
    bVar11 = bVar8 + *pbVar12;
    pbVar12 = pbVar12 + (uint)CARRY1(bVar8,*pbVar12) + *(int *)pbVar12;
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    puVar42 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar14 >> 0x10),
                                               CONCAT11((char)((uint)iVar14 >> 8) + cVar6,
                                                        (char)iVar14)) >> 8),
                               (char)iVar14 - (byte)*puVar17);
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11(bVar11 + *pbVar12,(char)puVar41));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar11,*pbVar12) + *(int *)pbVar12;
code_r0x00402898:
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    bVar8 = (byte)puVar44;
    uVar38 = CONCAT11((char)((uint)puVar44 >> 8) - (byte)*puVar17,bVar8);
    pbVar18 = (byte *)CONCAT22((short)((uint)puVar44 >> 0x10),uVar38);
    pcVar20 = (char *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar42[-0x19],
                                        (char)puVar42));
    *pbVar12 = *pbVar12 + (char)pbVar12;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + '\x03');
    puVar42 = puVar17;
    do {
      puVar17 = puVar42 + 1;
      out(*puVar42,uVar38);
      pcVar20 = pcVar20 + -1;
      bVar11 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar11;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | *pbVar18,(char)puVar41));
      *pbVar12 = *pbVar12 + bVar11;
      *pcVar20 = *pcVar20 + bVar8;
      *(byte *)((int)pbVar12 * 2) = *(byte *)((int)pbVar12 * 2) ^ bVar11;
      *pbVar12 = *pbVar12 + bVar11;
      *pbVar12 = *pbVar12 | bVar11;
      bVar57 = CARRY1((byte)*puVar41,bVar8);
      *(byte *)puVar41 = (byte)*puVar41 + bVar8;
      cVar6 = bVar11 + 10 + bVar57;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
      puVar42 = puVar17;
    } while (bVar11 < 0xf6 && !CARRY1(bVar11 + 10,bVar57));
    *pbVar12 = *pbVar12 + cVar6;
    in_stack_ffffffd4 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),uVar53);
    pcVar15 = (char *)((uint)pbVar12 | *puVar50);
    puVar42 = (uint *)CONCAT22((short)((uint)pcVar20 >> 0x10),
                               CONCAT11((char)((uint)pcVar20 >> 8) + pbVar49[-100],(char)pcVar20));
    *pcVar15 = *pcVar15 + (char)pcVar15;
    bVar8 = (char)pcVar15 + 7;
    uVar61 = CONCAT44(pbVar18,CONCAT31((int3)((uint)pcVar15 >> 8),bVar8));
code_r0x004028c8:
    puVar44 = (uint *)((ulonglong)uVar61 >> 0x20);
  } while ((POPCOUNT(bVar8) & 1U) != 0);
  *(char *)uVar61 = *(char *)uVar61 + (char)uVar61;
  puVar25 = (uint *)CONCAT31((int3)((ulonglong)uVar61 >> 8),(char)uVar61 + '-');
  puVar17 = (uint *)((uint)puVar17 | *(uint *)((int)puVar44 + 0x3b));
  bVar57 = CARRY4(*puVar25,(uint)puVar25);
  uVar23 = *puVar25;
  *puVar25 = (uint)(*puVar25 + (int)puVar25);
  if (SCARRY4(uVar23,(int)puVar25)) {
    bVar57 = CARRY4(*puVar25,(uint)puVar25);
    bVar58 = SCARRY4(*puVar25,(int)puVar25);
    *puVar25 = (uint)(*puVar25 + (int)puVar25);
    bVar8 = POPCOUNT(*puVar25 & 0xff);
    if (bVar58) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + bVar57);
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    bVar57 = (POPCOUNT((byte)*puVar44) & 1U) == 0;
    if (bVar57) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar57) {
      iVar14 = CONCAT31((int3)((uint)puVar42 >> 8),(char)puVar42 - (byte)*puVar17);
      goto get_Value;
    }
    *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
    puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + 'r');
    pbVar13 = pbVar49;
code_r0x004028e2:
    uVar38 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
    uVar23 = *puVar25;
    *puVar25 = (uint)(*puVar25 + (int)puVar25);
    if (SCARRY4(uVar23,(int)puVar25)) {
      if (*puVar25 == 0 || SCARRY4(uVar23,(int)puVar25) != (int)*puVar25 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar42 = (uint *)((int)puVar42 + -1);
    cVar6 = (char)puVar25;
    *(byte *)puVar25 = (byte)*puVar25 + cVar6;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) |
                                        *(byte *)((int)puVar41 + 0x16d7207),(char)puVar41));
    pbVar12 = (byte *)((int)puVar25 + 0x7d);
    bVar8 = *pbVar12;
    bVar9 = (byte)((uint)puVar44 >> 8);
    bVar11 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar9;
    uVar19 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar11,bVar9) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar12 < '\0') * 0x80 | (uint)(*pbVar12 == 0) * 0x40 |
             (uint)(bVar36 & 1) * 0x10 | (uint)((POPCOUNT(*pbVar12) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar8,bVar9);
    *(byte *)puVar25 = (byte)*puVar25 + cVar6;
    pbVar12 = (byte *)(CONCAT31((int3)((uint)puVar25 >> 8),cVar6 + '+') ^ *puVar50);
    if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar8 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar8;
    puVar25 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8 + 0x72);
    if (bVar8 < 0x8e && (byte)(bVar8 + 0x72) != '\0') {
      if (SCARRY1(bVar8,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar25 + 0x6f) = *(byte *)((int)puVar25 + 0x6f) + bVar9;
    }
code_r0x00402905:
    uVar61 = CONCAT44(puVar44,puVar25);
    puVar42 = (uint *)((int)puVar42 + -1);
    cVar6 = (char)puVar25;
    *(byte *)puVar25 = (byte)*puVar25 + cVar6;
    bVar8 = (byte)((uint)puVar41 >> 8) | (byte)*puVar41;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar8,(char)puVar41));
    uVar53 = (ushort)uVar19;
    if ((char)bVar8 < '\x01') {
      *(byte *)puVar25 = (byte)*puVar25 + cVar6;
      puVar50 = (uint *)((int)puVar50 - *(int *)(pbVar49 + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar25 = (byte)*puVar25 + cVar6;
    uVar19 = 0x40291c;
    uVar61 = func_0x7346291c();
    *(char *)uVar61 = *(char *)uVar61 + (char)uVar61;
    puVar41 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar61 >> 0x20));
    puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,uVar53);
    uStackY_44 = puVar42;
    while( true ) {
      pcVar20 = (char *)((int)uVar61 * 2);
      *pcVar20 = *pcVar20 - (char)puVar41;
      uVar23 = *puVar42;
      cVar6 = (char)((uint)puVar41 >> 8);
      *(byte *)puVar42 = (byte)*puVar42 + cVar6;
      if (SCARRY1((byte)uVar23,cVar6) == (char)(byte)*puVar42 < '\0') {
        pbVar12 = (byte *)((int)puVar50 + (int)uVar61);
        *pbVar12 = *pbVar12 + (char)uVar61;
        bVar8 = *pbVar12;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar44 = (uint *)((ulonglong)uVar61 >> 0x20);
      cVar6 = (char)uVar61;
      *(char *)uVar61 = *(char *)uVar61 + cVar6;
      uVar30 = (undefined3)((ulonglong)uVar61 >> 8);
      bVar8 = cVar6 + 7;
      puVar25 = (uint *)CONCAT31(uVar30,bVar8);
      bVar11 = (byte)((ulonglong)uVar61 >> 0x28);
      if ((POPCOUNT(bVar8) & 1U) != 0) break;
      *(byte *)puVar25 = (byte)*puVar25 + bVar8;
      pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '3');
      uVar38 = (undefined2)((uint)puVar42 >> 0x10);
      uVar33 = SUB41(puVar42,0);
      bVar8 = (char)((uint)puVar42 >> 8) + *(byte *)((int)puVar17 + 0x16) + (0xd3 < bVar8);
      puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(bVar8,uVar33));
      *pcVar20 = *pcVar20 + cVar6 + '3';
      cVar48 = cVar6 + ':';
      puVar25 = (uint *)CONCAT31(uVar30,cVar48);
      if ((POPCOUNT(cVar48) & 1U) != 0) {
        bVar8 = bVar8 | *(byte *)((int)puVar44 + 7);
        puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(bVar8,uVar33));
        bVar57 = (POPCOUNT(bVar8) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar25 = (byte)*puVar25 + cVar48;
      puVar25 = (uint *)(CONCAT31(uVar30,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar12 = (byte *)((int)puVar25 + 0x72);
      bVar58 = SCARRY1(*pbVar12,bVar11);
      *pbVar12 = *pbVar12 + bVar11;
      bVar8 = POPCOUNT(*pbVar12);
code_r0x0040294c:
      if ((bVar8 & 1) == 0) {
        *(byte *)((int)puVar25 + 0x72) = *(byte *)((int)puVar25 + 0x72) + (char)((uint)puVar44 >> 8)
        ;
      }
      else if (bVar58) {
        pbVar49 = *(byte **)pbVar49;
        cVar6 = cRamc9721806;
        goto code_r0x004029c4;
      }
      pbVar49 = (byte *)0x7e700001;
      puStackY_4c = (uint *)CONCAT22(puStackY_4c._2_2_,uStack_18);
code_r0x00402957:
      *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
      cVar6 = (char)puVar25 + '(';
      puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),cVar6);
      *(byte *)puVar25 = (byte)*puVar25 + cVar6;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar25,(char)puVar41)
                                );
      *(byte *)puVar25 = (byte)*puVar25 + cVar6;
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                 CONCAT11((byte)((uint)puVar44 >> 8) | (byte)puVar42[0x18],
                                          (char)puVar44));
      puVar17 = puStackY_4c;
      puVar50 = puStackY_48;
code_r0x00402966:
      *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
      bVar8 = (byte)((uint)puVar42 >> 8) | *(byte *)((int)puVar44 + 7);
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar8,(char)puVar42));
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
      puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + '~');
code_r0x00402971:
      uVar19 = (uint)uStack_18;
code_r0x00402972:
      uVar38 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
      *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
code_r0x00402974:
      bVar8 = 0xe9 < (byte)puVar25;
      in_stack_ffffffd4 = CONCAT22(uVar38,in_CS);
      in_CS = 0x2d0a;
      uVar61 = func_0x00006128(in_stack_ffffffd4);
      puVar41 = (uint *)uVar61;
      piVar28 = (int *)((int)((ulonglong)uVar61 >> 0x20) + -0x3d);
      *piVar28 = (int)((int)puVar17 + (uint)bVar8 + *piVar28);
      bVar57 = SCARRY4(*puVar41,(int)puVar41);
      *puVar41 = *puVar41 + (int)puVar41;
      uVar23 = *puVar41;
      puVar41 = extraout_ECX_02;
code_r0x00402982:
      bVar8 = POPCOUNT(uVar23 & 0xff);
      if (bVar57) {
        *(char *)uVar61 = *(char *)uVar61 + (char)uVar61;
        puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                   CONCAT11((byte)((uint)puVar41 >> 8) |
                                            *(byte *)((ulonglong)uVar61 >> 0x20),(char)puVar41));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar20 = (char *)((ulonglong)uVar61 >> 0x20);
      if ((bVar8 & 1) == 0) {
        *(char *)uVar61 = *(char *)uVar61 + (char)uVar61;
        *pcVar20 = *pcVar20 + (char)puVar41;
        uVar61 = CONCAT44(CONCAT22((short)((ulonglong)uVar61 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar61 >> 0x28) - pcVar20[0x1f],
                                            (char)((ulonglong)uVar61 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar61 >> 8),(char)uVar61 + '('));
code_r0x00402991:
        puVar44 = (uint *)((ulonglong)uVar61 >> 0x20);
        pbVar12 = (byte *)uVar61;
        bVar8 = (byte)uVar61;
        bVar57 = CARRY1(bVar8,*pbVar12);
        puVar25 = (uint *)CONCAT31((int3)((ulonglong)uVar61 >> 8),bVar8 + *pbVar12);
        cVar6 = bVar8 + *pbVar12;
        if (SCARRY1(bVar8,*pbVar12)) goto code_r0x004029c4;
code_r0x00402995:
        puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                   CONCAT11(((char)((uint)puVar44 >> 8) -
                                            *(byte *)((int)puVar44 + 0x6b)) - bVar57,(char)puVar44))
        ;
        bVar8 = (byte)puVar25;
        bVar57 = CARRY1(bVar8,(byte)*puVar25);
        bVar58 = SCARRY1(bVar8,(byte)*puVar25);
        puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),bVar8 + (byte)*puVar25);
        do {
          if (!bVar58) {
            puVar17 = (uint *)((int)puVar17 + (uint)bVar57 + *puVar25);
            pbVar12 = (byte *)((int)puVar25 + *puVar25);
            bVar11 = (byte)pbVar12;
            *pbVar12 = *pbVar12 + bVar11;
            *(byte *)puVar41 = (byte)*puVar41 + (char)puVar41;
            bVar8 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar11;
            *puVar50 = (uint)((int)puVar42 + (uint)CARRY1(bVar8,bVar11) + *puVar50);
            *(uint *)(pbVar49 + 0x100002b) = *(uint *)(pbVar49 + 0x100002b) | (uint)puVar41;
            uVar30 = (undefined3)((uint)pbVar12 >> 8);
            bVar11 = bVar11 | (byte)*puVar17;
            puVar25 = (uint *)CONCAT31(uVar30,bVar11);
            uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uStack_18);
            uVar1 = *puVar25;
            uVar23 = *puVar25;
            *puVar25 = (uint)(*puVar25 + (int)puVar25);
            if (SCARRY4(uVar23,(int)puVar25)) {
              *(byte *)puVar17 = (byte)*puVar17 - (char)puVar42;
              *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
              *(byte *)puVar50 = (byte)*puVar50 - (char)puVar42;
            }
            else {
              puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,uVar53);
              uStack_18 = uVar53;
              if (CARRY4(uVar1,(uint)puVar25)) goto code_r0x00402971;
              bVar57 = CARRY1(bVar11,(byte)*puVar25);
              bVar58 = SCARRY1(bVar11,(byte)*puVar25);
              puVar25 = (uint *)CONCAT31(uVar30,bVar11 + (byte)*puVar25);
code_r0x004029be:
              if (!bVar58) {
                puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,uVar53);
                *(byte *)((int)puVar44 + -0x37) =
                     (*(byte *)((int)puVar44 + -0x37) - (char)((uint)puVar44 >> 8)) - bVar57;
                cVar6 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar6;
                bVar8 = (byte)puVar25;
                bVar57 = CARRY1(bVar8,(byte)*puVar25);
                bVar58 = SCARRY1(bVar8,(byte)*puVar25);
                puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),bVar8 + (byte)*puVar25);
                goto code_r0x004029c6;
              }
            }
            bVar8 = (byte)puVar41;
            bVar57 = CARRY1((byte)*puVar44,bVar8);
            bVar58 = SCARRY1((byte)*puVar44,bVar8);
            *(byte *)puVar44 = (byte)*puVar44 + bVar8;
            if (bVar57) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar58) {
            uVar53 = (ushort)pbVar13;
            goto code_r0x00402966;
          }
          uVar19 = (uint)uVar53;
          *(uint *)((int)puVar44 + -0x23) =
               (*(int *)((int)puVar44 + -0x23) - (int)puVar17) - (uint)bVar57;
          uVar23 = *puVar25;
          bVar11 = (byte)puVar25;
          uVar1 = *puVar25;
          uVar30 = (undefined3)((uint)puVar25 >> 8);
          bVar8 = bVar11 + (byte)*puVar25;
          puVar25 = (uint *)CONCAT31(uVar30,bVar8);
          if (SCARRY1(bVar11,(byte)uVar1)) goto code_r0x00402972;
          in_stack_ffffffd4 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),uVar53);
          cVar6 = (char)puVar44;
          bVar9 = ((char)((uint)puVar44 >> 8) - *(byte *)((int)puVar44 + -0xf)) -
                  CARRY1(bVar11,(byte)uVar23);
          puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar9,cVar6));
          puVar51 = (uint *)CONCAT31(uVar30,bVar8 + (byte)*puVar25);
          bVar11 = (byte)puVar41;
          if (SCARRY1(bVar8,(byte)*puVar25)) {
            *(byte *)puVar44 = (byte)*puVar44 + bVar11;
            uVar61 = CONCAT44(puVar44,(int)puVar51 + -0x1c37211);
            pcVar20 = (char *)((int)puVar51 + -0x1c3720a);
            *pcVar20 = *pcVar20 + bVar9;
            bVar8 = POPCOUNT(*pcVar20);
            goto code_r0x00402984;
          }
          puVar17 = (uint *)((int)puVar17 +
                            (-(uint)CARRY1(bVar8,(byte)*puVar25) - *(int *)((int)puVar44 + 5)));
          bVar57 = SCARRY4((int)puVar51,*puVar51);
          uVar23 = (int)puVar51 + *puVar51;
          uVar61 = CONCAT44(puVar44,uVar23);
          if (bVar57) goto code_r0x00402982;
          bVar8 = (byte)uVar23 + 0x8e;
          uVar24 = CONCAT31((int3)(uVar23 >> 8),bVar8 - CARRY4((uint)puVar51,*puVar51));
          *puVar42 = (*puVar42 - uVar24) -
                     (uint)((byte)uVar23 < 0x72 || bVar8 < CARRY4((uint)puVar51,*puVar51));
          pbVar12 = (byte *)(uVar24 - 0x5e);
          bVar8 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar9;
          uVar23 = (uint)CARRY1(bVar8,bVar9);
          uVar1 = uVar24 - 0x32d72;
          puVar25 = (uint *)(uVar1 - uVar23);
          if (SBORROW4(uVar24,0x32d72) != SBORROW4(uVar1,uVar23)) goto code_r0x00402992;
          uVar55 = uVar56;
          if (uVar24 < 0x32d72 || uVar1 < uVar23) {
            *pbVar49 = *pbVar49 - (char)((uint)puVar25 >> 8);
            *(byte *)puVar44 = (byte)*puVar44 + bVar11;
            puVar51 = puVar17 + 1;
            out(*puVar17,CONCAT11(bVar9,cVar6));
            *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
            goto code_r0x00402a3e;
          }
          bVar57 = CARRY4((uint)puVar25,*puVar25);
          bVar58 = SCARRY4((int)puVar25,*puVar25);
          puVar25 = (uint *)((int)puVar25 + *puVar25);
          if (!bVar58) {
            uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uVar53);
            *(byte *)puVar17 = (byte)*puVar17 + bVar57;
            bVar8 = (byte)puVar25;
            *(byte *)((int)puVar44 + (int)pbVar49) = *(byte *)((int)puVar44 + (int)pbVar49) + bVar8;
            *(byte *)puVar42 = (byte)*puVar42 + cVar6;
            *(byte *)puVar42 = (byte)*puVar42 ^ bVar8;
            bVar7 = (byte)((uint)puVar41 >> 8);
            *(byte *)puVar17 = (byte)*puVar17 + bVar7;
            *(byte *)puVar25 = (byte)*puVar25 + bVar8;
            pbVar12 = (byte *)CONCAT31((int3)((uint)puVar25 >> 8),bVar8 | (byte)*puVar25);
            *(byte *)puVar41 = (byte)*puVar41 + cVar6;
            bVar10 = *pbVar12;
            uVar38 = (undefined2)((uint)puVar41 >> 0x10);
            puVar41 = (uint *)CONCAT22(uVar38,CONCAT11(bVar7 + bVar10,bVar11));
            pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
            *(byte *)puVar44 = (byte)*puVar44 + bVar11;
            pbVar49 = pbVar49 + iRam0355720b;
            pbVar13 = pbVar12 + 0x73;
            bVar8 = *pbVar13;
            *pbVar13 = *pbVar13 + bVar9;
            uVar30 = (undefined3)((uint)pbVar12 >> 8);
            bVar8 = (char)pbVar12 + CARRY1(bVar8,bVar9);
            pcVar20 = (char *)CONCAT31(uVar30,bVar8);
            *(byte *)puVar44 = (byte)*puVar44 + bVar11;
            if ((POPCOUNT((byte)*puVar44) & 1U) == 0) {
              uStack_18 = uVar53;
            }
            puVar52 = (uint *)((int)puVar50 + *(int *)(pbVar49 + 0x17));
            *pcVar20 = *pcVar20 + bVar8;
            cVar6 = bVar8 + 2;
            puVar25 = (uint *)CONCAT31(uVar30,cVar6);
            if (bVar8 < 0xfe) {
              *puVar25 = (uint)(*puVar25 + (int)puVar25);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar25 = (byte)*puVar25 + cVar6;
            uVar19 = *puVar44;
            puVar51 = (uint *)((int)puVar17 + puVar42[0x19]);
            *(byte *)puVar25 = (byte)*puVar25 + cVar6;
            puVar41 = (uint *)CONCAT22(uVar38,CONCAT11(bVar7 + bVar10 | (byte)*puVar25,
                                                       bVar11 | (byte)uVar19));
            puVar50 = puVar52;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    pbVar49[0x13b720b] = pbVar49[0x13b720b] + bVar8;
    pbVar12 = (byte *)((int)puVar25 + 0x73);
    bVar57 = CARRY1(*pbVar12,bVar11);
    *pbVar12 = *pbVar12 + bVar11;
  } while( true );
code_r0x00402992:
  pbVar12 = (byte *)((int)puVar25 + 0x2a);
  bVar57 = CARRY1(*pbVar12,bVar9);
  *pbVar12 = *pbVar12 + bVar9;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar25) = *(byte *)(in_GS_OFFSET + (int)puVar25) + (char)puVar25;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | *(byte *)((int)puVar50 + 0x66),
                                      (char)puVar41));
  *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
code_r0x00402a3e:
  uVar30 = (undefined3)((uint)puVar25 >> 8);
  bVar8 = (byte)puVar25 | (byte)*puVar51;
  pcVar20 = (char *)CONCAT31(uVar30,bVar8);
  if ((char)bVar8 < '\0') {
    *pcVar20 = *pcVar20 + bVar8;
    cVar6 = bVar8 + 2;
    piVar28 = (int *)CONCAT31(uVar30,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar28 = (char)*piVar28 + cVar6;
      bVar8 = bVar8 + 0x71;
      pcVar15 = (char *)CONCAT31(uVar30,bVar8);
      pcVar20 = (char *)segment(uVar55,(short)puVar42 + (short)puVar51);
      *pcVar20 = *pcVar20 + bVar8;
      uVar19 = puVar50[0x1a];
      *pcVar15 = *pcVar15 + bVar8;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | (byte)uVar19 |
                                          *(byte *)((int)puVar50 + 0x69),(char)puVar41));
      *pcVar15 = *pcVar15 + bVar8;
      bVar8 = bVar8 | (byte)*puVar44;
      pcVar20 = (char *)CONCAT31(uVar30,bVar8);
      if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar17 = puVar51 + (uint)bVar59 * -2 + 1;
    out(*puVar51,(short)puVar44);
  }
  else {
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar42[6],(char)puVar42)
                              );
code_r0x00402a5d:
    *pcVar20 = *pcVar20 + (char)pcVar20;
    piVar28 = (int *)CONCAT31((int3)((uint)pcVar20 >> 8),(char)pcVar20 + 'o');
    puVar17 = puVar51;
  }
code_r0x00402a61:
  pcVar20 = (char *)segment(uVar55,(short)puVar42 + (short)puVar17);
  *pcVar20 = *pcVar20 + (char)piVar28;
  cVar6 = (char)puVar41;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)puVar50[0x1a],cVar6));
  *(char *)piVar28 = (char)*piVar28 + (char)piVar28;
  uVar38 = CONCAT11((byte)((uint)puVar44 >> 8) | *(byte *)((int)puVar44 + 0x65),(char)puVar44);
  puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),uVar38);
  piVar26 = (int *)((int)piVar28 + *piVar28);
  puVar51 = puVar17;
  puVar52 = puVar50;
  uVar54 = uVar53;
  if (SCARRY4((int)piVar28,*piVar28)) goto code_r0x00402ae3;
  *(byte *)puVar44 = (byte)*puVar44 + cVar6;
  puVar51 = puVar17 + (uint)bVar59 * -2 + 1;
  out(*puVar17,uVar38);
code_r0x00402a75:
  bVar8 = (byte)((uint)puVar41 >> 8) | (byte)*puVar44;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar8,(char)puVar41));
  piVar28 = (int *)(uint)(byte)*puVar42;
  *(byte *)puVar51 = (byte)*puVar51 - bVar8;
  puVar52 = puVar50;
code_r0x00402a7f:
  *(char *)piVar28 = (char)*piVar28 + (char)piVar28;
  out(*puVar51,(short)puVar44);
  bVar8 = in((short)puVar44);
  *(byte *)puVar52 = bVar8;
  *(char *)piVar28 = (char)*piVar28 + (char)piVar28;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar44,(char)puVar41));
  iVar14 = *piVar28;
  cVar6 = in(1);
  puVar25 = (uint *)CONCAT31((int3)((uint)((int)piVar28 + *piVar28) >> 8),cVar6);
  *(char *)puVar25 = (char)*puVar25 + cVar6;
  puVar25 = (uint *)((uint)puVar25 | *puVar25);
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar44;
  puVar51 = (uint *)((int)puVar51 + (((uint)bVar59 * -8 + 4) - iVar14));
  puVar52 = (uint *)((int)puVar52 + (uint)bVar59 * -2 + 1);
  uStack_18 = uVar53;
  while( true ) {
    bVar8 = (byte)puVar25 | (byte)*puVar44;
    puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),bVar8);
    puVar50 = puVar52;
    if ((POPCOUNT(bVar8) & 1U) != 0) break;
    *(byte *)puVar25 = (byte)*puVar25 + bVar8;
code_r0x00402a9b:
    uVar30 = (undefined3)((uint)puVar25 >> 8);
    cVar6 = (char)puVar25 + '\r';
    piVar26 = (int *)CONCAT31(uVar30,cVar6);
    *(uint *)(pbVar49 + 2) = *(uint *)(pbVar49 + 2) | (uint)piVar26;
    *(char *)piVar26 = (char)*piVar26 + cVar6;
    *(byte *)(puVar51 + -0xc800000) = (byte)puVar51[-0xc800000] + (char)puVar44;
    *(char *)piVar26 = (char)*piVar26 + cVar6;
    *(byte *)puVar44 = (byte)*puVar44 + cVar6;
    cVar48 = (char)puVar41;
    if ((POPCOUNT((byte)*puVar44) & 1U) != 0) {
      *(byte *)puVar44 = (byte)*puVar44 + cVar48;
      puVar17 = puVar51 + (uint)bVar59 * -2 + 1;
      out(*puVar51,(short)puVar44);
      piVar28 = (int *)((longlong)*piVar26 * 0x7b020a00);
      *(char *)piVar28 =
           (char)*piVar28 - ((longlong)(int)piVar28 != (longlong)*piVar26 * 0x7b020a00);
      pbVar13 = (byte *)((int)puVar50 + (int)pbVar49 * 2);
      *pbVar13 = *pbVar13;
      goto code_r0x00402a61;
    }
    *(char *)piVar26 = (char)*piVar26 + cVar6;
    puVar25 = (uint *)CONCAT31(uVar30,(char)puVar25 + ':');
    puVar17 = (uint *)((uint)puVar51 | *(uint *)((int)puVar44 + -0x79));
    iVar14 = (int)puVar25 + *puVar25;
    if (SCARRY4((int)puVar25,*puVar25)) {
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar17[(int)puVar42],
                                          (char)puVar42));
      *(char *)((int)puVar44 * 2) = *(char *)((int)puVar44 * 2) + (char)iVar14;
      puVar52 = puVar50;
      goto code_r0x00402b33;
    }
    uVar30 = (undefined3)((uint)iVar14 >> 8);
    cVar6 = (char)iVar14 + CARRY4((uint)puVar25,*puVar25);
    piVar28 = (int *)CONCAT31(uVar30,cVar6);
    *(byte *)puVar44 = (byte)*puVar44 + cVar48;
    bVar57 = (POPCOUNT((byte)*puVar44) & 1U) != 0;
    if ((bVar57) && (bVar57)) goto code_r0x00402a61;
    *(char *)piVar28 = (char)*piVar28 + cVar6;
    cVar46 = cVar6 + '(';
    pcVar20 = (char *)CONCAT31(uVar30,cVar46);
    puVar52 = puVar50 + (uint)bVar59 * -2 + 1;
    uVar19 = in((short)puVar44);
    *puVar50 = uVar19;
    *pcVar20 = *pcVar20 + cVar46;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | bRama07b0222,cVar48));
    *pcVar20 = *pcVar20 + cVar46;
    pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '>');
code_r0x00402ad2:
    out(*puVar17,(short)puVar44);
    puVar51 = (uint *)((int)(puVar17 + (uint)bVar59 * -2 + 1) + (uint)bVar59 * -2 + 1);
    out((byte)puVar17[(uint)bVar59 * -2 + 1],(short)puVar44);
    bVar8 = (byte)pcVar20;
    *pcVar20 = *pcVar20 + bVar8;
    puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(byte)puVar42 | (byte)*puVar52);
    bVar36 = 9 < (bVar8 & 0xf) | bVar36;
    uVar30 = (undefined3)((uint)pcVar20 >> 8);
    bVar8 = bVar8 + bVar36 * -6;
    puVar44 = (uint *)((uint)puVar44 ^ *puVar44);
    cVar6 = bVar8 + (0x9f < bVar8 | bVar36 * (bVar8 < 6)) * -0x60 + (byte)*puVar44;
    piVar28 = (int *)CONCAT31(uVar30,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar28 = (char)*piVar28 + cVar6;
    piVar26 = (int *)CONCAT31(uVar30,cVar6 + '\x17');
    uVar54 = uVar53;
code_r0x00402ae3:
    out(*puVar51,(short)puVar44);
    puVar17 = puVar51 + (uint)bVar59 * -2 + 1 + (uint)bVar59 * -2 + 1;
    out(puVar51[(uint)bVar59 * -2 + 1],(short)puVar44);
    *(char *)piVar26 = (char)*piVar26 + (char)piVar26;
code_r0x00402ae7:
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | pbVar49[-0x60],(char)puVar42));
    cVar6 = (char)piVar26;
    *(char *)piVar26 = (char)*piVar26 + cVar6;
    uVar30 = (undefined3)((uint)piVar26 >> 8);
    bVar8 = cVar6 + 2;
    puVar25 = (uint *)CONCAT31(uVar30,bVar8);
    uVar53 = uVar54;
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *(byte *)puVar25 = (byte)*puVar25 + bVar8;
      cVar6 = cVar6 + '}';
      puVar25 = (uint *)CONCAT31(uVar30,cVar6);
      *(byte *)puVar25 = ((byte)*puVar25 - cVar6) - (0x84 < bVar8);
      pbVar13 = (byte *)((int)puVar44 + (int)puVar25);
      *pbVar13 = *pbVar13 + cVar6;
      bVar8 = POPCOUNT(*pbVar13);
      puVar51 = puVar17;
code_r0x00402af9:
      uVar53 = uVar54;
      puVar50 = puVar52;
      if ((bVar8 & 1) == 0) {
        *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
        bVar8 = (byte)puVar41;
        *(byte *)puVar44 = (byte)*puVar44 + bVar8;
        uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uStack_18);
        puVar17 = puVar51 + (uint)bVar59 * -2 + 1;
        out(*puVar51,(short)puVar44);
        uVar19 = *puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + bVar8;
        iVar14 = CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + 'o') +
                 *(int *)((int)puVar44 * 2) + (uint)CARRY1((byte)uVar19,bVar8);
        pcVar20 = (char *)CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '(');
        while( true ) {
          uVar19 = *puVar44;
          bVar11 = (byte)puVar41;
          *(byte *)puVar44 = (byte)*puVar44 + bVar11;
          pcVar20 = pcVar20 + (uint)CARRY1((byte)uVar19,bVar11) + iRam73280512;
          bVar8 = (byte)pcVar20;
          *pcVar20 = *pcVar20 + bVar8;
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                     CONCAT11((byte)((uint)puVar41 >> 8) | bRam7d160243,bVar11));
          bVar59 = ((uint)uStackY_44 & 0x400) != 0;
          bVar36 = ((uint)uStackY_44 & 0x10) != 0;
          *pcVar20 = *pcVar20 + bVar8;
          uVar30 = (undefined3)((uint)pcVar20 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar30,bVar8 + 2) + (uint)(0xfd < bVar8);
          cVar6 = bVar8 + 4;
          if (SCARRY1(bVar8 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar30,cVar6) = *(char *)CONCAT31(uVar30,cVar6) + cVar6;
          iVar14 = CONCAT31(uVar30,bVar8 + 0x16);
code_r0x00402b33:
          piVar26 = (int *)(iVar14 + 0xe2802);
          *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar41 >> 8);
          uVar54 = uVar53;
          uVar53 = uStack_18;
          while( true ) {
            bVar11 = (byte)puVar42 | (byte)((uint)puVar41 >> 8);
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar11);
            *piVar26 = (int)(*piVar26 + (int)piVar26);
            cVar6 = (char)piVar26;
            *(byte *)puVar44 = (byte)*puVar44 + cVar6;
            if ((POPCOUNT((byte)*puVar44) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar26 = (char)*piVar26 + cVar6;
            uVar19 = CONCAT31((int3)((uint)piVar26 >> 8),cVar6 + '\x13');
            puVar25 = (uint *)(uVar19 + 0x19061224 + (uint)(0x1f9edfd < uVar19));
            uVar1 = (uint)(0xe4ffffdd < uVar19 + 0xfe061202 ||
                          CARRY4(uVar19 + 0x19061224,(uint)(0x1f9edfd < uVar19)));
            uVar23 = *puVar17;
            uVar19 = *puVar17;
            *puVar17 = (uint)((byte *)(uVar19 + (int)puVar25) + uVar1);
            bVar8 = POPCOUNT(*puVar17 & 0xff);
            puVar51 = puVar17;
            if ((SCARRY4(uVar23,(int)puVar25) != SCARRY4((int)(uVar19 + (int)puVar25),uVar1)) ==
                (int)*puVar17 < 0) goto code_r0x00402af9;
            bVar8 = (byte)puVar25;
            *(byte *)puVar25 = (byte)*puVar25 + bVar8;
            iVar14 = CONCAT31((int3)((uint)puVar25 >> 8),bVar8 + 2) + 0x9d7d + (uint)(0xfd < bVar8);
            bVar8 = (byte)puVar44 | (byte)*puVar44;
            uVar19 = *puVar42;
            *(byte *)puVar42 = (byte)*puVar42 + bVar11;
            pcVar20 = (char *)(CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '\x12') + 0x228b26
                               + *puVar52 + (uint)CARRY1((byte)uVar19,bVar11));
            cVar6 = bVar8 + (byte)*puVar41;
            puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),cVar6);
            if (SCARRY1(bVar8,(byte)*puVar41) == cVar6 < '\0') break;
            *pcVar20 = *pcVar20 + (char)pcVar20;
            cVar6 = (char)pcVar20 + '\x02';
            pcVar20 = (char *)CONCAT31((int3)((uint)pcVar20 >> 8),cVar6);
            bVar8 = POPCOUNT(cVar6);
            uVar54 = uVar53;
code_r0x00402b7a:
            puVar50 = puVar17;
            if ((bVar8 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar20;
              *pcVar20 = *pcVar20 + cVar6;
              uVar30 = (undefined3)((uint)pcVar20 >> 8);
              pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '\x13');
              *(byte *)puVar41 = (byte)*puVar41 | (byte)puVar44;
              *(byte *)puVar52 = (byte)*puVar52 | (byte)puVar44;
              *puVar44 = (uint)(pcVar20 + *puVar44);
              uVar38 = (undefined2)((uint)puVar42 >> 0x10);
              uVar33 = SUB41(puVar42,0);
              cVar48 = (char)((uint)puVar42 >> 8) + *(byte *)((int)puVar42 + -0x5f);
              puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(cVar48,uVar33));
              *pcVar20 = *pcVar20 + cVar6 + '\x13';
              piVar26 = (int *)CONCAT31(uVar30,cVar6 + -0x7a);
              uVar19 = *puVar44;
              *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar19,(char)puVar41) == (char)(byte)*puVar44 < '\0') break;
              *(char *)piVar26 = (char)*piVar26 + cVar6 + -0x7a;
              cVar46 = cVar6 + -0x78;
              piVar26 = (int *)CONCAT31(uVar30,cVar46);
              uVar4 = uVar54;
              if ((POPCOUNT(cVar46) & 1U) != 0) break;
              *(char *)piVar26 = (char)*piVar26 + cVar46;
              pcVar20 = (char *)CONCAT31(uVar30,cVar6 + -0x65);
              *puVar41 = *puVar41 | (uint)puVar44;
              *puVar52 = *puVar52 | (uint)puVar44;
              pbVar13 = (byte *)((int)puVar41 + -1);
              cVar48 = cVar48 + *(byte *)((int)puVar42 + -0x5e);
              puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(cVar48,uVar33));
              *pcVar20 = *pcVar20 + cVar6 + -0x65;
              bVar8 = cVar6 + 10;
              puVar25 = (uint *)CONCAT31(uVar30,bVar8);
              bVar11 = (byte)pbVar13;
              *(byte *)puVar44 = (byte)*puVar44 + bVar11;
              puVar17 = puVar50 + (uint)bVar59 * -2 + 1;
              out(*puVar50,(short)puVar44);
              uVar19 = *puVar44;
              *(byte *)puVar44 = (byte)*puVar44 + bVar11;
              uVar24 = (uint)CARRY1((byte)uVar19,bVar11);
              uVar23 = *puVar44;
              uVar19 = *puVar44;
              pbVar12 = pbVar13 + uVar19 + uVar24;
              uVar5 = *puVar44;
              cRam130a0000 = cRam130a0000 - cVar48;
              uVar1 = *puVar44;
              pbVar49 = (byte *)((uint)pbVar49 | *puVar25);
              *(byte *)puVar25 = (char)*puVar25 + bVar8;
              puVar41 = (uint *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar12 >> 8) | bRam7d170243,
                                                  (char)pbVar12 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar13,uVar23) ||
                                                  CARRY4((uint)(pbVar13 + uVar19),uVar24))));
              bVar59 = (uStack_18 & 0x400) != 0;
              bVar36 = (uStack_18 & 0x10) != 0;
              *(byte *)puVar25 = (char)*puVar25 + bVar8;
              bVar57 = 0xfd < bVar8;
              pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '\f');
              puVar44 = (uint *)((uint)puVar44 | uVar1);
code_r0x00402bd1:
              uVar19 = *puVar42;
              uVar23 = *puVar42;
              *puVar42 = (uint)((byte *)(uVar23 + (int)puVar41) + bVar57);
              bVar8 = POPCOUNT(*puVar42 & 0xff);
              uVar54 = uStack_18;
              if ((SCARRY4(uVar19,(int)puVar41) !=
                  SCARRY4((int)(uVar23 + (int)puVar41),(uint)bVar57)) == (int)*puVar42 < 0)
              goto code_r0x00402b7a;
              cVar6 = (char)pcVar20;
              *pcVar20 = *pcVar20 + cVar6;
              pcVar20 = (char *)CONCAT31((int3)((uint)pcVar20 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar20 = *pcVar20 + (char)pcVar20;
                pcVar20 = (char *)(CONCAT31((int3)((uint)pcVar20 >> 8),(char)pcVar20 + '\x12') |
                                  *puVar44);
                *(byte *)puVar52 = (byte)*puVar52 - (char)puVar41;
                *pcVar20 = *pcVar20 + (char)pcVar20;
                puVar44 = (uint *)((int)puVar44 - *puVar17);
                bVar8 = (byte)puVar42 | (byte)((uint)puVar41 >> 8);
                cVar6 = *pcVar20;
                uVar30 = (undefined3)((uint)pcVar20 >> 8);
                pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                *pcVar20 = *pcVar20 + cVar6;
                pcVar15 = (char *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                           CONCAT11((char)((uint)puVar42 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),
                                                                       bVar8) + -0x5b),bVar8));
                *pcVar20 = *pcVar20 + cVar6;
                bVar57 = false;
                pcVar20 = (char *)(CONCAT31(uVar30,cVar6 + '\x13') | *puVar44);
                do {
                  bVar11 = (byte)puVar41;
                  bVar8 = bVar11 + (byte)puVar17[(int)puVar52 * 2];
                  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar8 + bVar57);
                  uVar19 = (uint)(CARRY1(bVar11,(byte)puVar17[(int)puVar52 * 2]) ||
                                 CARRY1(bVar8,bVar57));
                  pcVar27 = pcVar20 + 0x1b000019 + uVar19;
                  piVar28 = (int *)((int)puVar52 * 2 + 0x40000a5);
                  *piVar28 = (int)((int)puVar41 +
                                  (uint)((char *)0xe4ffffe6 < pcVar20 ||
                                        CARRY4((uint)(pcVar20 + 0x1b000019),uVar19)) + *piVar28);
                  puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 + cRam00009d7d
                                            );
                  uVar30 = (undefined3)((uint)pcVar27 >> 8);
                  bVar8 = (char)pcVar27 + 0x12;
                  bVar36 = 9 < (bVar8 & 0xf) | bVar36;
                  uVar19 = CONCAT31(uVar30,bVar8 + bVar36 * -6) & 0xffffff0f;
                  pcVar20 = (char *)CONCAT22((short)(uVar19 >> 0x10),
                                             CONCAT11((char)((uint)pcVar27 >> 8) - bVar36,
                                                      (char)uVar19));
                  pbVar13 = (byte *)((uint)pbVar49 | *(uint *)CONCAT31(uVar30,bVar8));
                  while( true ) {
                    *pcVar20 = *pcVar20 + (char)pcVar20;
                    puVar50 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                                               (byte)puVar44 | (byte)*puVar44);
                    puVar52 = (uint *)((uint)puVar52 | (uint)puVar17);
                    uVar19 = (uint)pcVar15 | (uint)puVar17;
                    pbVar49 = pbVar13 + 1;
                    uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uVar53);
                    cVar6 = (char)(pcVar20 + 0x1b000019);
                    uVar30 = (undefined3)((uint)(pcVar20 + 0x1b000019) >> 8);
                    cVar48 = cVar6 + -0x13;
                    pcVar20 = (char *)CONCAT31(uVar30,cVar48);
                    uVar38 = (undefined2)(uVar19 >> 0x10);
                    cVar46 = (char)(uVar19 >> 8) + *(char *)(uVar19 - 0x5e);
                    puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(cVar46,(byte)uVar19));
                    *pcVar20 = *pcVar20 + cVar48;
                    pcVar20 = (char *)(CONCAT31(uVar30,cVar6 + '\x19') | *puVar50);
                    bVar8 = (byte)pcVar20;
                    if ((POPCOUNT((uint)pcVar20 & 0xff) & 1U) != 0) {
                      pbVar13 = (byte *)((int)puVar50 + (int)pcVar20);
                      bVar57 = CARRY1(*pbVar13,bVar8);
                      *pbVar13 = *pbVar13 + bVar8;
                      puVar44 = puVar50;
                      goto code_r0x00402bd1;
                    }
                    *pcVar20 = *pcVar20 + bVar8;
                    uVar30 = (undefined3)((uint)pcVar20 >> 8);
                    pcVar15 = (char *)CONCAT31(uVar30,bVar8 + 0x6f);
                    puVar44 = (uint *)((int)puVar50 + 1);
                    *pcVar15 = *pcVar15 + bVar8 + 0x6f;
                    bVar11 = (byte)uVar19 | (byte)((uint)pcVar20 >> 8);
                    pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x5c);
                    cVar46 = cVar46 + *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),bVar11) + -0x5f)
                    ;
                    puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(cVar46,bVar11));
                    *pcVar20 = *pcVar20 + bVar8 + 0x5c;
                    pcVar20 = (char *)(CONCAT31(uVar30,bVar8 + 0x88) | *puVar44);
                    if ((POPCOUNT((uint)pcVar20 & 0xff) & 1U) != 0) {
                      *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar41 >> 8);
                      uStackY_44 = (uint *)((uint)uStackY_44._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar20 = *pcVar20 + (char)pcVar20;
                    uVar30 = (undefined3)((uint)pcVar20 >> 8);
                    cVar6 = (char)pcVar20 + 'o';
                    puVar44 = (uint *)((int)puVar50 + 2);
                    *(char *)CONCAT31(uVar30,cVar6) = *(char *)CONCAT31(uVar30,cVar6) + cVar6;
                    pcVar15 = (char *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               bVar11 | (byte)((uint)pcVar20 >> 8));
                    pcVar20 = (char *)(CONCAT31(uVar30,cVar6) | 2);
                    pbVar13[-0x62] = pbVar13[-0x62] + 1;
                    bVar8 = (byte)pcVar20;
                    *pcVar20 = *pcVar20 + bVar8;
                    bVar57 = 0xfd < bVar8;
                    cVar6 = bVar8 + 2;
                    pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                    uVar55 = uVar53;
                    if (SCARRY1(bVar8,'\x02') != cVar6 < '\0') break;
                    *pcVar20 = *pcVar20 + cVar6;
                    bVar11 = bVar8 + 10;
                    pcVar20 = (char *)CONCAT31(uVar30,bVar11);
                    *pcVar20 = *pcVar20 - cVar46;
                    cVar48 = (char)puVar41;
                    *(byte *)puVar44 = *(byte *)puVar44 + cVar48;
                    pbVar13[-0x62] = pbVar13[-0x62] + 1;
                    *pcVar20 = *pcVar20 + bVar11;
                    cVar6 = bVar8 + 0xc;
                    pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                    if (SCARRY1(bVar11,'\x02') == cVar6 < '\0') {
                      *pcVar20 = *pcVar20 + cVar6;
                      *(byte *)puVar41 = (byte)*puVar41 - cVar46;
                      *(byte *)puVar44 = *(byte *)puVar44 + cVar48;
                      cVar6 = (bVar8 + 0x13) - (byte)puVar41[0x13];
                      pcVar20 = (char *)CONCAT31(uVar30,cVar6);
                      *pcVar20 = *pcVar20 + cVar6;
                      pcVar27 = (char *)CONCAT31(uVar30,cVar6 + *pcVar20);
                      *pcVar27 = *pcVar27 + cVar6 + *pcVar20;
                      pcVar27 = pcVar27 + *puVar41;
                      *pcVar27 = *pcVar27 + (char)pcVar27;
                      LOCK();
                      pcVar20 = *(char **)pcVar27;
                      *(char **)pcVar27 = pcVar27;
                      UNLOCK();
                      *pcVar20 = *pcVar20 + (char)pcVar20;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),(byte)*puVar41);
                      *pbVar12 = *pbVar12 + (byte)*puVar41;
                      goto code_r0x00402c8d;
                    }
                    puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               cVar48 + *pcVar15 + (0xfd < bVar11));
                    *(byte *)puVar52 = (byte)*puVar52 - cVar46;
                    pbVar13 = pbVar49;
                  }
                } while( true );
              }
              puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                         CONCAT11((char)((uint)puVar42 >> 8) +
                                                  *(byte *)((int)puVar42 + -99),(char)puVar42));
              puVar50 = puVar17;
            }
            *(char *)piVar26 = (char)*piVar26 + (char)piVar26;
            puVar44 = (uint *)((int)puVar44 - *puVar50);
            puVar17 = puVar50;
            uVar54 = uVar53;
            uVar53 = uVar4;
          }
          *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
          pcVar20 = pcVar20 + -0x7d160243;
        }
        pcVar20 = (char *)CONCAT31(uVar30,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar41;
    uVar19 = *puVar25;
    *(byte *)puVar25 = (byte)*puVar25 + (byte)puVar25;
    *puVar52 = (uint)((int)puVar44 + (uint)CARRY1((byte)uVar19,(byte)puVar25) + *puVar52);
    puVar51 = puVar17;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar47 = (char)puVar41;
      cVar37 = (char)((uint)puVar41 >> 8) + (char)((uint)pbVar12 >> 8);
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(cVar37,cVar47));
      cVar6 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar6;
      pcVar20 = (char *)((int)pbVar12 * 2 + 0x1a10000);
      cVar46 = (char)((uint)pcVar15 >> 8);
      *pcVar20 = *pcVar20 + cVar46;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      pbVar12[-0x47ffffff] = pbVar12[-0x47ffffff] + cVar46;
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      bVar11 = (byte)puVar44;
      *(byte *)puVar52 = (byte)*puVar52 + bVar11;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + bVar11;
      *pbVar12 = *pbVar12 + cVar6;
      *puVar17 = (uint)(*puVar17 + (int)puVar17);
      uVar38 = (undefined2)((uint)pcVar15 >> 0x10);
      cVar46 = cVar46 + (byte)puVar17[(int)pcVar15];
      pcVar20 = (char *)CONCAT22(uVar38,CONCAT11(cVar46,(char)pcVar15));
      pcVar20[(int)pbVar12] = pcVar20[(int)pbVar12] + cVar6;
      *(byte *)puVar44 = *(byte *)puVar44 - cVar46;
      *(byte *)puVar44 = *(byte *)puVar44 + cVar47;
      uVar30 = (undefined3)((uint)pbVar12 >> 8);
      bVar8 = cVar6 - *pbVar12;
      *pcVar20 = *pcVar20 + bVar11;
      *(byte *)puVar44 = *(byte *)puVar44 ^ bVar8;
      *(byte *)puVar44 = *(byte *)puVar44 + bVar8;
      *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
      uVar19 = *puVar41;
      *(byte *)puVar41 = (byte)*puVar41 + bVar11;
      cVar48 = bVar8 + *(char *)CONCAT31(uVar30,bVar8) + CARRY1((byte)uVar19,bVar11);
      pcVar15 = (char *)CONCAT22(uVar38,CONCAT11(cVar46 + pbVar13[-0x60],(char)pcVar15));
      *(char *)CONCAT31(uVar30,cVar48) = *(char *)CONCAT31(uVar30,cVar48) + cVar48;
      cVar46 = cVar48 + '\x12';
      pbVar12 = (byte *)CONCAT31(uVar30,cVar46);
      cVar6 = *pcVar15;
      *pcVar15 = *pcVar15 + cVar46;
      if (SCARRY1(cVar6,cVar46) != *pcVar15 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *(byte *)puVar44 = *(byte *)puVar44 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
    }
    *pbVar12 = *pbVar12 + cVar46;
    pbVar12 = (byte *)CONCAT31(uVar30,cVar48 + '$');
    *pbVar12 = *pbVar12 + cVar37;
    bVar8 = *(byte *)puVar44;
    *(byte *)puVar44 = *(byte *)puVar44 + cVar47;
    uVar54 = uVar53;
    uVar55 = uVar56;
  } while (SCARRY1(bVar8,cVar47) == (char)*(byte *)puVar44 < '\0');
  do {
    cVar6 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar6;
    uVar30 = (undefined3)((uint)pbVar12 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar44;
    bVar11 = cVar6 + 0x24;
    cVar46 = (char)((uint)pcVar15 >> 8);
    pcVar15[-0x62] = pcVar15[-0x62] + cVar46;
    *(char *)CONCAT31(uVar30,bVar11) = *(char *)CONCAT31(uVar30,bVar11) + bVar11;
    bVar8 = cVar6 + 0x2fU + (byte)*puVar41;
    cVar48 = bVar8 + (0xf4 < bVar11);
    cVar6 = cVar48 + *(char *)CONCAT31(uVar30,cVar48) +
            (CARRY1(cVar6 + 0x2fU,(byte)*puVar41) || CARRY1(bVar8,0xf4 < bVar11));
    pcVar20 = (char *)CONCAT31(uVar30,cVar6);
    *pcVar20 = *pcVar20 - (char)puVar44;
    *pcVar20 = *pcVar20 + cVar6;
    pcVar27 = (char *)((int)puVar44 - *puVar44);
    *(byte *)(puVar17 + (int)pcVar15) = (byte)puVar17[(int)pcVar15] + cVar46;
    pcVar20[(int)pbVar49] = pcVar20[(int)pbVar49] + cVar6;
    *pcVar27 = *pcVar27 + (char)puVar41;
    pcVar20 = (char *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                               CONCAT11((char)((uint)pbVar12 >> 8) - *pcVar27,cVar6));
    uVar19 = *puVar52;
    *pcVar20 = *pcVar20 - (char)((uint)pcVar27 >> 8);
    *pcVar20 = *pcVar20 + cVar6;
    uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uVar54);
    pbVar13 = (byte *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                               CONCAT11(cVar46 - (byte)*puVar17,(char)pcVar15));
    pbVar49 = pbVar49 + *(int *)(pbVar13 + (int)puVar41);
    puVar50 = (uint *)CONCAT31((int3)((uint)pcVar27 >> 8),(char)pcVar27 + (byte)uVar19);
    while( true ) {
      puVar44 = puVar50;
      uVar38 = (undefined2)((uint)pbVar13 >> 0x10);
      bVar9 = (char)((uint)pbVar13 >> 8) + pbVar13[0x18];
      *pcVar20 = *pcVar20 + (char)pcVar20;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),(char)pcVar20 + 'o');
      cVar6 = (char)puVar41;
      *(byte *)puVar44 = (byte)*puVar44 + cVar6;
      uVar19 = *puVar17;
      bVar36 = (byte)((uint)puVar41 >> 8);
      bVar8 = *pbVar12;
      pbVar12 = pbVar12 + (uint)CARRY1(bVar36,*pbVar12) + *(int *)pbVar12;
      *(byte *)puVar44 = (byte)*puVar44 + cVar6;
      cVar48 = ((char)pbVar13 - (byte)uVar19) - (byte)*puVar17;
      bVar11 = *(byte *)((int)puVar52 + 0x1a);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11(bVar36 + bVar8 + bVar11 | (byte)*puVar44,cVar6));
      pbVar12 = pbVar12 + *puVar44;
      if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) break;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      bVar8 = (char)pbVar12 + 0x6f;
      pcVar20 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
      pcVar15 = (char *)(CONCAT31((int3)(CONCAT22(uVar38,CONCAT11(bVar9,(char)pbVar13)) >> 8),cVar48
                                 ) + -1);
      *pcVar20 = *pcVar20 + bVar8;
      *pcVar20 = *pcVar20 + bVar8;
      *pcVar15 = *pcVar15 + (byte)puVar44;
      *(byte *)((int)pcVar20 * 2) = *(byte *)((int)pcVar20 * 2) ^ bVar8;
      uVar3 = *(undefined6 *)pcVar20;
      uVar54 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar20 = (char *)uVar3;
      *pcVar20 = *pcVar20 + (char)uVar3;
      *(byte *)puVar17 = (byte)*puVar17 + (char)uVar3;
      pcVar20 = (char *)((uint)pcVar20 | 0x73110008);
      bVar9 = (byte)((uint)pcVar15 >> 8);
      *(byte *)puVar52 = (byte)*puVar52 - bVar9;
      *(byte *)puVar44 = (byte)*puVar44 + cVar6;
      puVar50 = puVar17 + (uint)bVar59 * -2 + 1;
      out(*puVar17,(short)puVar44);
      *pcVar20 = *pcVar20;
      cVar6 = (char)pcVar20;
      *pcVar20 = *pcVar20 + cVar6;
      bVar8 = pbVar49[-0x5a];
      uVar38 = (undefined2)((uint)pcVar15 >> 0x10);
      cVar48 = (char)pcVar15;
      *pcVar20 = *pcVar20 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar19 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      puVar41 = (uint *)(uVar19 | 0x73110000);
      puVar17 = puVar50 + (uint)bVar59 * -2 + 1;
      out(*puVar50,(short)puVar44);
      *(byte *)puVar41 = (byte)*puVar41;
      bVar36 = (byte)puVar44 | (byte)*puVar52;
      puVar50 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar36);
      *(byte *)puVar41 = (byte)*puVar41 + cVar6;
      pcVar20 = (char *)(uVar19 | 0x7b1f1609);
      bVar59 = (uVar55 & 0x400) != 0;
      *(uint *)((int)puVar52 + -0x7d) = *(uint *)((int)puVar52 + -0x7d) | (uint)pbVar49;
      bVar11 = (byte)pcVar20;
      *pcVar20 = *pcVar20 + bVar11;
      bVar9 = bVar9 | bVar8 | *(byte *)((int)puVar17 + 0x19);
      pbVar13 = (byte *)CONCAT22(uVar38,CONCAT11(bVar9,cVar48));
      *pcVar20 = *pcVar20 + bVar11;
      uVar30 = (undefined3)((uint)pcVar20 >> 8);
      puVar17[(int)puVar52 * 2] =
           (uint)((int)puVar50 + (uint)(0xd2 < bVar11) + puVar17[(int)puVar52 * 2]);
      bVar8 = bVar11 + 0x2d ^ *(byte *)CONCAT31(uVar30,bVar11 + 0x2d);
      pcVar20 = (char *)CONCAT31(uVar30,bVar8);
      uVar19 = *puVar17;
      *(byte *)puVar17 = (byte)*puVar17 + bVar8;
      uVar55 = uVar54;
      if (CARRY1((byte)uVar19,bVar8)) {
        *pcVar20 = *pcVar20 + bVar8;
        bVar8 = bVar8 | pcVar20[0x4000019];
        pcVar20 = (char *)CONCAT31(uVar30,bVar8);
        if ('\0' < (char)bVar8) {
          *pcVar20 = *pcVar20 + bVar8;
          piVar28 = (int *)CONCAT31(uVar30,bVar8 + 0x28);
          *piVar28 = (int)piVar28 + (uint)(0xd7 < bVar8) + *piVar28;
          bVar10 = (byte)((uint6)uVar3 >> 8);
          *pbVar13 = *pbVar13 + bVar10;
          uVar39 = CONCAT11((byte)((uint)puVar44 >> 8) | bVar9,bVar36);
          puVar50 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),uVar39);
          uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uVar54);
          bVar36 = in(uVar39);
          pbVar12 = (byte *)CONCAT31(uVar30,bVar36);
          bVar11 = *pbVar12;
          bVar57 = SCARRY1(*pbVar12,bVar36);
          *pbVar12 = *pbVar12 + bVar36;
          bVar8 = *pbVar12;
          puVar42 = puVar17;
          uStack_18 = uVar54;
          if (!CARRY1(bVar11,bVar36)) goto code_r0x00402e19;
          *pbVar12 = *pbVar12 + bVar36;
          bVar10 = bVar10 | *pbVar12;
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar10,cVar6));
          pcVar20 = (char *)CONCAT31(uVar30,bVar36 + *pbVar12);
          *pbVar13 = *pbVar13 + bVar10;
        }
        uVar30 = (undefined3)((uint)pcVar20 >> 8);
        bVar11 = (byte)pcVar20 | (byte)*puVar50;
        pbVar12 = (byte *)CONCAT31(uVar30,bVar11);
        puVar42 = puVar17 + (uint)bVar59 * -2 + 1;
        out(*puVar17,(short)puVar50);
        LOCK();
        bVar8 = *pbVar12;
        *pbVar12 = bVar11;
        UNLOCK();
        *(byte *)puVar50 = (byte)*puVar50 + (char)puVar41;
        piVar28 = (int *)(CONCAT31(uVar30,bVar8) + -0x1b7e07);
        *(byte *)puVar50 = (byte)*puVar50 + (char)puVar41;
        iVar14 = (int)puVar41 - *(int *)pbVar13;
        bVar8 = *(byte *)((int)puVar52 + -0x7a);
        uVar39 = (undefined2)((uint)iVar14 >> 0x10);
        *(char *)piVar28 = *(char *)piVar28 + (char)piVar28;
        bVar11 = (char)((uint)iVar14 >> 8) + bVar8 | *(byte *)((int)puVar52 + 0x17);
        *(char *)piVar28 = *(char *)piVar28 + (char)piVar28;
        uVar30 = (undefined3)(CONCAT22(uVar39,CONCAT11(bVar11,(byte)iVar14)) >> 8);
        bVar8 = (byte)iVar14 | *pbVar13;
        puVar41 = (uint *)CONCAT31(uVar30,bVar8);
        pbVar12 = (byte *)((int)piVar28 + *piVar28);
        puVar17 = puVar42;
        if (SCARRY4((int)piVar28,*piVar28)) goto code_r0x00402e0a;
        *(byte *)puVar41 = (byte)*puVar41 + bVar8;
        *(byte **)pbVar13 = (byte *)(*(int *)pbVar13 + (int)puVar50);
        piVar28 = (int *)CONCAT31(uVar30,bVar8 + 0x27);
        puVar41 = (uint *)CONCAT22(uVar39,CONCAT11(bVar11 + *(byte *)((int)puVar52 + -0x79),bVar8));
        *(byte *)piVar28 = (char)*piVar28 + bVar8 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar15 = (char *)CONCAT22(uVar38,CONCAT11(bVar9 | pbVar49[-0x62],cVar48));
  } while( true );
code_r0x00402dff:
  pbVar12 = (byte *)CONCAT22((short)((uint)piVar28 >> 0x10),
                             CONCAT11((byte)((uint)piVar28 >> 8) |
                                      *(byte *)((int)puVar50 + 0x2170411),(byte)piVar28));
  puVar17 = puVar42 + (uint)bVar59 * -2 + 1;
  out(*puVar42,(short)puVar50);
  *pbVar12 = (byte)piVar28;
  *(byte *)puVar50 = (byte)*puVar50 + (char)puVar41;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar12;
  *pbVar12 = *pbVar12 - cVar48;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  bVar57 = false;
  bVar8 = (byte)((uint)puVar41 >> 8) | bRam052b0603;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar8,(char)puVar41));
  puVar42 = puVar17;
code_r0x00402e19:
  if (bVar8 == 0 || bVar57 != (char)bVar8 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cRam89280411;
  piVar28 = (int *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                            CONCAT11((byte)((uint)pbVar12 >> 8) |
                                     *(byte *)((int)puVar50 + 0x7190411),cRam89280411));
  *(char *)piVar28 = (char)*piVar28 + cRam89280411;
  cVar6 = (char)puVar41;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar50,cVar6));
  puVar42 = (uint *)((int)puVar42 + *piVar28);
  pbVar12 = (byte *)((int)piVar28 + *piVar28);
  bVar11 = (byte)pbVar12;
  *pbVar12 = *pbVar12 + bVar11;
  *(byte *)puVar42 = (byte)*puVar42 + cVar6;
  bVar8 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar11;
  *(byte **)pbVar12 = pbVar49 + (uint)CARRY1(bVar8,bVar11) + *(int *)pbVar12;
  piVar28 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),*pbVar12);
  *(byte *)puVar50 = (byte)*puVar50 + cVar6;
  puVar17 = (uint *)CONCAT31((int3)((uint)puVar50 >> 8),(byte)puVar50 | (byte)*puVar50);
  pbVar12 = (byte *)((int)puVar17 + -0x43);
  *pbVar12 = *pbVar12 + (char)((uint)puVar50 >> 8);
  puVar50 = puVar17;
  puVar17 = puVar52;
  uVar55 = uVar53;
code_r0x00402e42:
  uVar53 = uStack_18;
  puVar52 = puVar17;
  uStack_18 = uVar53;
  if (SCARRY4((int)piVar28,*piVar28)) goto code_r0x00402e6e;
  iVar14 = *(int *)((int)piVar28 + *piVar28);
  *(byte *)puVar50 = (byte)*puVar50 + (char)puVar41;
  piVar28 = (int *)(iVar14 + -0x8c6f);
  puVar50 = (uint *)CONCAT22((short)((uint)puVar50 >> 0x10),
                             CONCAT11((byte)((uint)puVar50 >> 8) | *(byte *)((int)puVar50 + -0x3f),
                                      (char)puVar50));
  pbVar18 = (byte *)((int)piVar28 + *piVar28);
  pbVar12 = pbVar18;
  puVar52 = uStackY_44;
  if (SCARRY4((int)piVar28,*piVar28)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar18 = *pbVar18 + (char)pbVar18;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar50,(char)puVar41));
  puVar17 = puVar42 + (uint)bVar59 * -2 + 1;
  out(*puVar42,(short)puVar50);
  puVar50 = (uint *)CONCAT31((int3)((uint)puVar50 >> 8),(char)puVar50 + (byte)*puVar52);
  puVar42 = puVar17 + (uint)bVar59 * -2 + 1;
  out(*puVar17,(short)puVar50);
  uVar55 = uVar53;
  uStack_18 = uVar54;
code_r0x00402e6e:
  uVar53 = uVar55;
  uVar30 = (undefined3)((uint)puVar50 >> 8);
  cVar6 = (char)puVar50 + (byte)*puVar52;
  puVar17 = puVar42 + (uint)bVar59 * -2 + 1;
  out(*puVar42,(short)CONCAT31(uVar30,cVar6));
  puVar50 = (uint *)CONCAT31(uVar30,cVar6 + (byte)*puVar52);
  puVar42 = puVar17 + (uint)bVar59 * -2 + 1;
  out(*puVar17,(short)puVar50);
  pbVar12 = (byte *)0x0;
  puVar17 = puVar52;
code_r0x00402e81:
  puVar52 = puVar17;
  bVar11 = (char)pbVar12 - *pbVar12;
  iVar14 = CONCAT31((int3)((uint)pbVar12 >> 8),bVar11);
  *pbVar13 = *pbVar13 + (char)puVar50;
  pbVar18 = (byte *)(iVar14 * 2);
  *pbVar18 = *pbVar18 ^ bVar11;
  pbVar18 = (byte *)(int)(short)iVar14;
  *pbVar18 = *pbVar18 + bVar11;
  *(byte *)puVar52 = (byte)*puVar52 + (byte)puVar41;
  bVar8 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar11;
  *(byte **)(pbVar13 + -0x73) =
       (byte *)((int)puVar42 + (uint)CARRY1(bVar8,bVar11) + *(int *)(pbVar13 + -0x73));
  *pbVar18 = *pbVar18 + bVar11;
  bVar8 = (byte)puVar41 | (byte)*puVar50;
  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar8);
  puVar17 = puVar42;
  if ((char)bVar8 < '\x01') goto code_r0x00402eb4;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar12 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),bVar11 + 0x2d);
  puVar42[(int)puVar52 * 2] =
       (uint)((int)puVar50 + (uint)(0xd2 < bVar11) + puVar42[(int)puVar52 * 2]);
  pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar54);
  do {
    uVar19 = *puVar42;
    bVar8 = (byte)pbVar12;
    *(byte *)puVar42 = (byte)*puVar42 + bVar8;
    if (!CARRY1((byte)uVar19,bVar8)) break;
    *pbVar12 = *pbVar12 + bVar8;
    bVar8 = bVar8 | pbVar12[0x400001a];
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
    if ((char)bVar8 < '\x01') {
code_r0x00402ecc:
      *pbVar18 = *pbVar18 + (byte)pbVar18;
      uVar30 = (undefined3)((uint)pbVar18 >> 8);
      bVar8 = (byte)pbVar18 | pbVar18[0x400001b];
      pcVar20 = (char *)CONCAT31(uVar30,bVar8);
      if ((char)bVar8 < '\x01') {
        uVar19 = *puVar50;
        *(byte *)puVar50 = (byte)*puVar50 + (byte)puVar41;
        *(char *)((int)pcVar20 * 2) =
             *(char *)((int)pcVar20 * 2) - CARRY1((byte)uVar19,(byte)puVar41);
        bVar57 = 0x81 < bVar8;
        bVar8 = bVar8 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar18 = *pbVar18 + bVar8;
      puVar17 = puVar42;
code_r0x00402eb4:
      uVar30 = (undefined3)((uint)pbVar18 >> 8);
      bVar8 = (char)pbVar18 + 0x6f;
      pcVar20 = (char *)CONCAT31(uVar30,bVar8);
      *(byte **)pcVar20 = pbStackY_60;
      uVar19 = *puVar50;
      *(byte *)puVar50 = (byte)*puVar50 + (char)puVar41;
      pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar54);
      uVar56 = uVar54;
      if ((byte)*puVar50 != 0 && SCARRY1((byte)uVar19,(char)puVar41) == (char)(byte)*puVar50 < '\0')
      {
        *pcVar20 = *pcVar20 + bVar8;
        bVar11 = (char)pbVar18 + 0x9c;
        pbVar18 = (byte *)CONCAT31(uVar30,bVar11);
        puVar17[(int)puVar52 * 2] =
             (uint)((int)puVar50 + (uint)(0xd2 < bVar8) + puVar17[(int)puVar52 * 2]);
        pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar54);
        uVar19 = *puVar17;
        *(byte *)puVar17 = (byte)*puVar17 + bVar11;
        puVar42 = puVar17;
        if (CARRY1((byte)uVar19,bVar11)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar42 = puVar17 + (uint)bVar59 * -2 + 1;
      out(*puVar17,(short)puVar50);
    }
    cVar6 = (char)pcVar20;
    *pcVar20 = *pcVar20 + cVar6;
    uVar30 = (undefined3)((uint)pcVar20 >> 8);
    bVar8 = cVar6 + 0x6f;
    pcVar20 = (char *)CONCAT31(uVar30,bVar8);
    *(byte **)pcVar20 = pbStackY_60;
    uVar19 = *puVar50;
    *(byte *)puVar50 = (byte)*puVar50 + (byte)puVar41;
    pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar54);
    *(byte *)(puVar42 + 7) = ((byte)puVar42[7] - bVar9) - CARRY1((byte)uVar19,(byte)puVar41);
    *pcVar20 = *pcVar20 + bVar8;
    bVar11 = cVar6 + 0x9c;
    pcVar20 = (char *)CONCAT31(uVar30,bVar11);
    puVar42[(int)puVar52 * 2] =
         (uint)((int)puVar50 + (uint)(0xd2 < bVar8) + puVar42[(int)puVar52 * 2]);
    uVar19 = *puVar42;
    *(byte *)puVar42 = (byte)*puVar42 + bVar11;
    if (!CARRY1((byte)uVar19,bVar11)) goto code_r0x00402e7e;
    *pcVar20 = *pcVar20 + bVar11;
    bVar11 = bVar11 | pcVar20[0x400001c];
    pbVar12 = (byte *)CONCAT31(uVar30,bVar11);
    uStack_18 = uVar54;
    if ((char)bVar11 < '\x01') goto code_r0x00402f16;
    *pbVar12 = *pbVar12 + bVar11;
    pcVar20 = (char *)CONCAT31(uVar30,bVar11 + 0x6f);
    while( true ) {
      *(byte **)pcVar20 = pbStackY_60;
      uVar19 = *puVar50;
      *(byte *)puVar50 = (byte)*puVar50 + (byte)puVar41;
      *(uint *)((int)puVar42 + 0x1d) =
           (*(int *)((int)puVar42 + 0x1d) - (int)puVar52) - (uint)CARRY1((byte)uVar19,(byte)puVar41)
      ;
      bVar8 = (byte)pcVar20;
      *pcVar20 = *pcVar20 + bVar8;
      bVar11 = bVar8 + 0x2d;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),bVar11);
      puVar42[(int)puVar52 * 2] =
           (uint)((int)puVar50 + (uint)(0xd2 < bVar8) + puVar42[(int)puVar52 * 2]);
      pbStackY_60 = (byte *)CONCAT22((short)((uint)pbStackY_60 >> 0x10),uVar54);
      uVar19 = *puVar42;
      *(byte *)puVar42 = (byte)*puVar42 + bVar11;
      if (!CARRY1((byte)uVar19,bVar11)) break;
      *pbVar12 = *pbVar12 + bVar11;
code_r0x00402f16:
      bVar8 = (byte)pbVar12 | pbVar12[0x400001d];
      puVar17 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
      pbVar12 = pbVar49;
      if ((char)bVar8 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        pbVar49 = pbVar12;
        *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
        uVar30 = (undefined3)((uint)puVar17 >> 8);
        cVar6 = (char)puVar17 + 'o';
        puVar44 = (uint *)CONCAT31(uVar30,cVar6);
        *puVar44 = (uint)pbStackY_60;
        cVar46 = (char)puVar41;
        *(byte *)puVar50 = (byte)*puVar50 + cVar46;
        pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar54);
        bVar8 = (byte)((uint)puVar50 >> 8);
        bVar57 = bVar8 < (byte)*puVar42;
        puVar50 = (uint *)CONCAT22((short)((uint)puVar50 >> 0x10),
                                   CONCAT11(bVar8 - (byte)*puVar42,(char)puVar50));
        if (bVar57) break;
        bVar57 = CARRY4((uint)puVar44,*puVar44);
        puVar17 = (uint *)((int)puVar44 + *puVar44);
        if (!SCARRY4((int)puVar44,*puVar44)) {
          bVar57 = CARRY4((uint)pbVar49,*puVar17);
          pbVar49 = pbVar49 + *puVar17;
        }
        *puVar17 = (*puVar17 - (int)puVar17) - (uint)bVar57;
        *(byte *)puVar50 = (byte)*puVar50 + cVar46;
        puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                   CONCAT11((char)((uint)puVar41 >> 8) + (byte)*puVar50,
                                            cVar46 - (byte)*puVar50));
        *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
code_r0x00402f3b:
        cVar46 = (char)puVar50;
        *pbVar13 = *pbVar13 + cVar46;
        bVar8 = (byte)puVar17;
        *(byte *)((int)puVar17 * 2) = *(byte *)((int)puVar17 * 2) ^ bVar8;
        *(byte *)puVar17 = (byte)*puVar17 + bVar8;
        *(byte *)puVar17 = (byte)*puVar17 + cVar46;
        uVar19 = *puVar17;
        *(byte *)puVar17 = (byte)*puVar17 + bVar8;
        *puVar50 = (uint)((int)puVar17 + (uint)CARRY1((byte)uVar19,bVar8) + *puVar50);
        pcVar20 = (char *)((uint)puVar17 | *puVar52);
        uVar30 = (undefined3)((uint)pcVar20 >> 8);
        cVar6 = (char)pcVar20 + *pcVar20;
        pcVar20 = (char *)CONCAT31(uVar30,cVar6);
        *pcVar20 = *pcVar20 + cVar6;
        cVar6 = cVar6 + *pcVar20;
        piVar28 = (int *)CONCAT31(uVar30,cVar6);
        *(char *)piVar28 = (char)*piVar28 + cVar6;
        iVar14 = LocalDescriptorTableRegister();
        *piVar28 = iVar14;
        bVar8 = *pbVar13;
        bVar7 = (byte)((uint)puVar41 >> 8);
        *pbVar13 = *pbVar13 + bVar7;
        iVar14 = *piVar28;
        uVar39 = (undefined2)((uint)puVar41 >> 0x10);
        bVar10 = (byte)puVar41;
        *(byte *)puVar42 = (byte)*puVar42 + cVar6;
        puVar17 = puVar42 + (uint)bVar59 * -2 + 1;
        out(*puVar42,(short)puVar50);
        *(byte *)puVar17 = (byte)*puVar17 + cVar6;
        bVar11 = *pbVar13;
        *(byte *)puVar50 = (byte)*puVar50 - bVar9;
        *(byte *)puVar17 = (byte)*puVar17 + cVar6;
        puVar44 = puVar17 + (uint)bVar59 * -2 + 1;
        out(*puVar17,(short)puVar50);
        *(byte *)puVar44 = (byte)*puVar44 + cVar6;
        bVar36 = *pbVar13;
        *(uint *)((int)puVar50 + -0x23) = *(uint *)((int)puVar50 + -0x23) & (uint)puVar44;
        puVar29 = (ushort *)((int)piVar28 + *piVar28);
        if (!SCARRY4((int)piVar28,*piVar28)) {
          *puVar29 = uVar56;
        }
        *(char *)puVar29 = (char)*puVar29 + (char)puVar29;
        uVar40 = CONCAT11((char)((uint)puVar50 >> 8) + *(byte *)((int)puVar50 + -0x15),cVar46);
        puVar50 = (uint *)CONCAT22((short)((uint)puVar50 >> 0x10),uVar40);
        puVar17 = (uint *)((int)puVar29 + *(int *)puVar29);
        if (!SCARRY4((int)puVar29,*(int *)puVar29)) {
          *(ushort *)puVar17 = uVar56;
        }
        cVar6 = (char)puVar17;
        *(byte *)puVar17 = (byte)*puVar17 + cVar6;
        cVar47 = ((bVar7 - (char)iVar14) - CARRY1(bVar8,bVar7) | bVar11 | bVar36) + (byte)*puVar17;
        puVar41 = (uint *)CONCAT22(uVar39,CONCAT11(cVar47,bVar10));
        uVar19 = *puVar50;
        *(byte *)puVar50 = (byte)*puVar50 + bVar10;
        if (CARRY1((byte)uVar19,bVar10)) {
          *(byte *)puVar17 = (byte)*puVar17 + cVar6;
          bVar8 = *(byte *)((int)puVar50 + 6);
          *(byte *)puVar50 = (byte)*puVar50 + bVar10;
          bVar11 = (cVar47 - (byte)*puVar44) + cRam14730307;
          *(byte *)puVar17 = (byte)*puVar17 + cVar6;
          bVar8 = bVar9 | bVar8 | *(byte *)((int)puVar50 + 0x2a);
          uVar19 = *puVar17;
          pbVar13 = (byte *)((int)puVar17 + (uint)CARRY1(bVar11,(byte)*puVar17) + *puVar17);
          *(byte *)puVar50 = (byte)*puVar50 + bVar10;
          cVar6 = cVar48 - (byte)*puVar44;
          cVar48 = bVar8 + *(char *)(CONCAT31((int3)(CONCAT22(uVar38,CONCAT11(bVar8,cVar48)) >> 8),
                                              cVar6) + 0x1e);
          *pbVar13 = *pbVar13 + (char)pbVar13;
          uVar30 = (undefined3)((uint)pbVar13 >> 8);
          bVar8 = (char)pbVar13 + 0x2aU & (byte)*puVar50;
          *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
          pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
          cVar48 = cVar48 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar48,cVar6)) + 0x1f);
          *pcVar20 = *pcVar20 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar50;
          *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
          pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
          cVar48 = cVar48 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar48,cVar6)) + 0x20);
          *pcVar20 = *pcVar20 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar50;
          *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
          pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
          cVar48 = cVar48 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar48,cVar6)) + 0x21);
          *pcVar20 = *pcVar20 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar50;
          *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
          pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
          cVar48 = cVar48 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar48,cVar6)) + 0x22);
          *pcVar20 = *pcVar20 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar50;
          *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
          pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
          bVar11 = bVar11 + (byte)uVar19 + *pcVar20;
          uVar35 = CONCAT22(uVar39,CONCAT11(bVar11,bVar10));
          cVar48 = cVar48 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar48,cVar6)) + 0x25);
          *pcVar20 = *pcVar20 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar50;
          *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
          pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
          pcVar15 = (char *)CONCAT22(uVar38,CONCAT11(cVar48 + *(char *)(CONCAT22(uVar38,CONCAT11(
                                                  cVar48,cVar6)) + 0x26),cVar6));
          *pcVar20 = *pcVar20 + bVar8 + 0x2a;
          bVar8 = bVar8 + 0x54 & (byte)*puVar50;
          *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
          cVar6 = bVar8 + 0x2a;
          pcVar20 = (char *)CONCAT31(uVar30,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar20 = *pcVar20 + cVar6;
            pbVar13 = (byte *)(CONCAT31(uVar30,bVar8 + 0x4f) + -0x33282610);
            bVar8 = *pbVar13;
            bVar36 = (byte)pbVar13;
            *pbVar13 = *pbVar13 + bVar36;
            uVar30 = (undefined3)((uint)pbVar13 >> 8);
            if (!CARRY1(bVar8,bVar36)) {
              if (!SCARRY1(bVar36,'\0')) {
                *pbVar13 = *pbVar13 + bVar36;
                uVar35 = CONCAT22(uVar39,CONCAT11(bVar11 | (byte)*puVar50,bVar10));
                bVar36 = bVar36 & (byte)*puVar50;
                *(char *)CONCAT31(uVar30,bVar36) = *(char *)CONCAT31(uVar30,bVar36) + bVar36;
                pcVar20 = (char *)CONCAT31(uVar30,bVar36 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar20 = (char *)CONCAT31(uVar30,bVar36 + *pcVar15);
              if (SCARRY1(bVar36,*pcVar15) != (char)(bVar36 + *pcVar15) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar8 = bVar36 + *pcVar15;
            pbVar13 = (byte *)CONCAT31(uVar30,bVar8);
            if (SCARRY1(bVar36,*pcVar15) == (char)bVar8 < '\0') {
              pcVar20 = (char *)CONCAT22(uVar39,CONCAT11(bVar11 | (byte)*puVar50,bVar10));
              *pcVar15 = *pcVar15 + cVar46;
              *(byte *)puVar50 = (byte)*puVar50 ^ bVar8;
              *(char *)((int)pbVar13 * 2) = *(char *)((int)pbVar13 * 2) + bVar8;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar20 = *pcVar20 + (char)pcVar20;
            uVar30 = (undefined3)((uint)pcVar20 >> 8);
            bVar8 = (char)pcVar20 + 0x2aU & (byte)*puVar50;
            *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
            pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x2a);
            *pcVar20 = *pcVar20 + bVar8 + 0x2a;
            pcVar20 = (char *)CONCAT31(uVar30,bVar8 + 0x54 & (byte)*puVar50);
code_r0x00403072:
            cVar6 = (char)pcVar20;
            *pcVar20 = *pcVar20 + cVar6;
            uVar30 = (undefined3)((uint)pcVar20 >> 8);
            pcVar20 = (char *)CONCAT31(uVar30,cVar6 + '*');
            *pcVar20 = *pcVar20 + cVar6 + '*';
            bVar8 = cVar6 + 0x54U & (byte)*puVar50;
            *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
            pcStackY_98 = (char *)CONCAT22(pcStackY_98._2_2_,uVar53);
            uVar35 = CONCAT22((short)((uint)uVar35 >> 0x10),
                              CONCAT11((char)((uint)uVar35 >> 8) +
                                       *(char *)CONCAT31(uVar30,bVar8 + 0x2a),(char)uVar35));
            *(byte *)(puVar44 + 0x828000) = (byte)puVar44[0x828000] - cVar46;
            pcVar20 = pcStackY_98;
code_r0x0040309a:
            cVar6 = (char)pcVar20;
            *pcVar20 = *pcVar20 + cVar6;
            pcStackY_98 = (char *)CONCAT22(pcStackY_98._2_2_,uVar54);
            *pcVar20 = *pcVar20 + cVar6;
            pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),cVar6 + 0x2aU & (byte)*puVar50);
          }
          cVar6 = (char)pbVar13;
          *pbVar13 = *pbVar13 + cVar6;
          uVar30 = (undefined3)((uint)pbVar13 >> 8);
          cVar48 = cVar6 + '*';
          pcVar20 = (char *)CONCAT31(uVar30,cVar48);
          *(byte *)(puVar44 + 0x828000) = (byte)puVar44[0x828000] - cVar46;
          *pcVar20 = *pcVar20 + cVar48;
          cVar47 = (char)pcStackY_98 - (byte)*puVar44;
          pcVar15 = (char *)CONCAT22((short)((uint)pcStackY_98 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_98 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_98 >> 8),
                                                                 cVar47) + 0x34),cVar47));
          *pcVar20 = *pcVar20 + cVar48;
          bVar8 = cVar6 + 0x54U & (byte)*puVar50;
          *(char *)CONCAT31(uVar30,bVar8) = *(char *)CONCAT31(uVar30,bVar8) + bVar8;
          pbVar13 = (byte *)CONCAT31(uVar30,bVar8 + 0x2a);
          bVar8 = (byte)((uint)uVar35 >> 8);
          pcVar20 = (char *)CONCAT22((short)((uint)uVar35 >> 0x10),
                                     CONCAT11(bVar8 + *pbVar13,(char)uVar35));
          pbVar13 = pbVar13 + (uint)CARRY1(bVar8,*pbVar13) + *(int *)pbVar13;
          *(byte *)puVar50 = (byte)*puVar50 + (char)uVar35;
          uVar30 = (undefined3)((uint)pbVar13 >> 8);
          cVar6 = (byte)pbVar13 - *pbVar13;
          piVar28 = (int *)CONCAT31(uVar30,cVar6);
          puVar44 = (uint *)((int)puVar44 + (uint)((byte)pbVar13 < *pbVar13) + *piVar28);
          cVar6 = cVar6 + (char)*piVar28;
          pbVar13 = (byte *)CONCAT31(uVar30,cVar6);
          *pbVar13 = *pbVar13 + cVar6;
code_r0x004030df:
          *pcVar20 = *pcVar20 + cVar46;
          bVar8 = *pbVar13;
          bVar11 = (byte)pbVar13;
          *pbVar13 = *pbVar13 + bVar11;
          *(byte **)(pcVar15 + -0x41) =
               (byte *)((int)puVar44 + (uint)CARRY1(bVar8,bVar11) + *(int *)(pcVar15 + -0x41));
          *pbVar13 = *pbVar13 + bVar11;
          uVar30 = (undefined3)((uint)pbVar13 >> 8);
          bVar11 = bVar11 | (byte)*puVar44;
          *(char *)CONCAT31(uVar30,bVar11) = *(char *)CONCAT31(uVar30,bVar11) + bVar11;
          pcVar20 = (char *)CONCAT31(uVar30,bVar11 + 0x7b);
          *pcVar20 = *pcVar20 + bVar11 + 0x7b;
          pbVar13 = (byte *)((int)puVar44 + CONCAT31(uVar30,bVar11 - 8) + -1);
          *pbVar13 = *pbVar13 + (bVar11 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar42 = puVar44 + (uint)bVar59 * -2 + 1;
        out(*puVar44,uVar40);
        pbVar12 = pbVar49 + 1;
        pbStackY_60 = pbVar49;
      }
      bVar8 = cVar6 - bVar57;
      pbVar12 = (byte *)((int)puVar42 + (int)puVar52 * 2);
      bVar57 = CARRY1(*pbVar12,bVar8);
      *pbVar12 = *pbVar12 + bVar8;
code_r0x00402ef9:
      pcVar20 = (char *)CONCAT31(uVar30,bVar8 - bVar57);
      pbVar12 = (byte *)((int)puVar52 + (int)pbVar49 * 2);
      *pbVar12 = *pbVar12 + (bVar8 - bVar57);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar50;
  puVar17 = puVar50 + 0x2828000;
  bVar8 = (byte)puVar41;
  bVar57 = (byte)*puVar17 < bVar8;
  *(byte *)puVar17 = (byte)*puVar17 - bVar8;
  bVar8 = (byte)pbVar12 + *pbVar12;
  piVar28 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8 + bVar57);
  puVar17 = puVar52;
  uVar55 = uVar53;
  if (CARRY1((byte)pbVar12,*pbVar12) || CARRY1(bVar8,bVar57)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar20 = *pcVar20 + bVar11;
  uVar55 = uVar53;
  uStack_18 = uVar54;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar48) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  pbVar18 = (byte *)CONCAT22(uVar38,CONCAT11(cVar46 + pbVar49[(int)pcVar20 * 4],uVar33));
  pbVar13[(int)pcVar20] = pbVar13[(int)pcVar20] + bVar11;
  goto code_r0x0040254a;
}


