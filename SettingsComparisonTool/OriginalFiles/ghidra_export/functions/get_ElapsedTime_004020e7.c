/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004020e7
 * Raw Name    : get_ElapsedTime
 * Demangled   : get_ElapsedTime
 * Prototype   : longlong get_ElapsedTime(undefined4 param_1, int param_2)
 * Local Vars  : puStackY_54, uStackY_50, uStack_28, uStack_24, uStack_21, uStack_20, uStack_18, uVar1, pcVar2, uVar3, uVar4, uVar5, cVar6, bVar7, bVar8, bVar9, cVar10, in_EAX, pcVar11, iVar12, puVar13, pbVar14, uVar15, pcVar16, iVar17, pbVar18, pbVar19, uVar20, uVar21, puVar22, piVar23, pcVar24, piVar25, puVar26, uVar27, uVar28, iVar29, cVar30, uVar31, extraout_ECX, extraout_ECX_00, extraout_ECX_01, param_1, extraout_ECX_02, param_2, uVar32, bVar33, bVar34, cVar35, uVar36, uVar37, bVar38, uVar39, pbVar40, puVar41, puVar42, pbVar43, puVar44, uVar45, unaff_EBX, pbVar46, cVar47, unaff_EBP, unaff_ESI, puVar48, puVar49, unaff_EDI, pbVar50, puVar51, in_ES, uVar52, uVar53, in_CS, uVar54, in_SS, uVar55, in_GS_OFFSET, bVar56, in_AF, bVar57, in_TF, in_IF, bVar58, bVar59, in_NT, uVar60, in_stack_ffffffc8, in_stack_ffffffd0, pcStackY_a4, pbStackY_6c, puStackY_58
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

longlong __fastcall get_ElapsedTime(undefined4 param_1,int param_2)

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
  char cVar10;
  char *in_EAX;
  undefined3 uVar27;
  char *pcVar11;
  int iVar12;
  uint *puVar13;
  byte *pbVar14;
  uint3 uVar28;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  int3 iVar29;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  int *piVar23;
  char *pcVar24;
  int *piVar25;
  ushort *puVar26;
  char cVar30;
  undefined1 uVar31;
  byte bVar33;
  undefined2 uVar36;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar34;
  char cVar35;
  undefined2 uVar37;
  undefined4 uVar32;
  byte bVar38;
  undefined2 uVar39;
  byte *pbVar40;
  uint *puVar41;
  uint *puVar42;
  byte *pbVar43;
  undefined3 uVar45;
  uint *puVar44;
  char cVar47;
  int unaff_EBX;
  byte *pbVar46;
  byte *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar48;
  uint *puVar49;
  int unaff_EDI;
  byte *pbVar50;
  uint *puVar51;
  ushort in_ES;
  ushort uVar52;
  ushort uVar53;
  ushort in_CS;
  ushort uVar54;
  ushort in_SS;
  ushort uVar55;
  int in_GS_OFFSET;
  bool bVar56;
  byte in_AF;
  bool bVar57;
  byte in_TF;
  byte in_IF;
  bool bVar58;
  bool bVar59;
  byte in_NT;
  undefined8 uVar60;
  char *pcStackY_a4;
  byte *pbStackY_6c;
  uint *puStackY_58;
  uint *puStackY_54;
  undefined4 uStackY_50;
  undefined4 in_stack_ffffffc8;
  byte *in_stack_ffffffd0;
  ushort uStack_28;
  ushort uStack_24;
  undefined1 uStack_21;
  undefined4 uStack_20;
  ushort uStack_18;
  
  bVar58 = false;
                    /* .NET CLR Managed Code */
  uVar37 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar31 = (undefined1)unaff_EBX;
  cVar47 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 6);
  cVar30 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar30;
  uVar27 = (undefined3)((uint)in_EAX >> 8);
  pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '-');
  pbVar40 = (byte *)(param_2 + *unaff_ESI);
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar47,uVar31)) + 6);
  *pcVar16 = *pcVar16 + cVar30 + '-';
  cVar6 = cVar30 + -100;
  pcVar16 = (char *)CONCAT31(uVar27,cVar6);
  *pcVar16 = *pcVar16 + cVar6;
  bVar9 = *pbVar40;
  uVar36 = (undefined2)((uint)param_1 >> 0x10);
  bVar38 = (byte)param_1;
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar47,uVar31)) + 10);
  *pcVar16 = *pcVar16 + cVar6;
  bVar7 = cVar30 - 0x3aU & *pbVar40;
  pbVar50 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + 10));
  *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
  bVar8 = bVar7 + 0x2a;
  pcVar16 = (char *)CONCAT31(uVar27,bVar8);
  bVar33 = pbVar50[0x17];
  *pcVar16 = *pcVar16 + bVar8;
  bVar33 = ((byte)((uint)param_1 >> 8) | bVar9) + bVar33 | *pbVar40;
  pcVar24 = (char *)CONCAT22(uVar36,CONCAT11(bVar33,bVar38));
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar47,uVar31)) + 0x4e);
  *pcVar16 = *pcVar16 + bVar8;
  pcVar16 = (char *)CONCAT31(uVar27,bVar7 + 0x52);
  *pcVar16 = (*pcVar16 - (bVar7 + 0x52)) - (0xd7 < bVar8);
  *pbVar40 = *pbVar40 + bVar38;
  bVar9 = bVar7 + 0x45;
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar47,uVar31)) + 0x4f);
  iVar17 = CONCAT22(uVar37,CONCAT11(cVar47,uVar31));
  *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
  pcVar16 = (char *)CONCAT31(uVar27,bVar7 + 0x6d);
  *pcVar16 = (*pcVar16 - (bVar7 + 0x6d)) - (0xd7 < bVar9);
  *pbVar40 = *pbVar40 + bVar38;
  pcVar11 = pcVar16 + -0x6b721c;
  pcVar16 = pcVar16 + -0x6b721a;
  cVar30 = (char)((uint)pbVar40 >> 8);
  *pcVar16 = *pcVar16 + cVar30;
  bVar9 = (byte)pbVar40;
  if ((POPCOUNT(*pcVar16) & 1U) == 0) {
    cVar6 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar6;
    uVar27 = (undefined3)((uint)pcVar11 >> 8);
    bVar7 = cVar6 + 2;
    pcVar16 = (char *)CONCAT31(uVar27,bVar7);
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *pcVar16 = *pcVar16 + bVar7;
      piVar25 = (int *)CONCAT31(uVar27,cVar6 + '*');
      *piVar25 = (*piVar25 - (int)piVar25) - (uint)(0xd7 < bVar7);
      bVar7 = *pbVar40;
      *pbVar40 = *pbVar40 + bVar38;
      out(*unaff_ESI,(short)pbVar40);
      cVar6 = ((cVar6 + '*') - (char)*piVar25) - CARRY1(bVar7,bVar38);
      piVar25 = (int *)CONCAT31(uVar27,cVar6);
      *pbVar40 = *pbVar40 + bVar38;
      bVar7 = cVar47 - *(byte *)((int)unaff_ESI + 0x1f);
      iVar17 = CONCAT22(uVar37,CONCAT11(bVar7,uVar31));
      *(char *)piVar25 = (char)*piVar25 + cVar6;
      pcVar24 = (char *)CONCAT22(uVar36,CONCAT11(bVar33 | *pbVar40,bVar38));
      unaff_ESI = (uint *)((int)unaff_ESI + (4 - *piVar25));
      *(undefined4 *)CONCAT31(uVar27,cVar6) = 0x10000;
      *pcVar24 = *pcVar24 + bVar9;
      bVar33 = cVar6 + *pbVar40;
      pcVar16 = (char *)CONCAT31(uVar27,bVar33);
      if ((POPCOUNT(bVar33) & 1U) == 0) {
        *pcVar16 = *pcVar16 + bVar33;
        cVar6 = (bVar33 + 0x6f) - (0x90 < bVar33);
        pcVar16 = (char *)CONCAT31(uVar27,cVar6);
        bVar33 = *pbVar40;
        *pbVar40 = *pbVar40 + bVar38;
        if (SCARRY1(bVar33,bVar38) == (char)*pbVar40 < '\0') {
          *pcVar16 = *pcVar16 + cVar6;
          out(*unaff_ESI,(short)pbVar40);
          unaff_ESI = unaff_ESI + 1;
        }
      }
      else {
        *pcVar16 = *pcVar16 + bVar33;
        iVar17 = CONCAT22(uVar37,CONCAT11(bVar7 | unaff_EBP[6],uVar31));
      }
      *pcVar16 = *pcVar16 + (char)pcVar16;
      bVar56 = bRam6f060000 < bVar9;
      bRam6f060000 = bRam6f060000 - bVar9;
      iVar12 = (CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x02') + -0xa0a0000) -
               (uint)bVar56;
      bVar33 = (byte)iVar12;
      bVar56 = CARRY1(bVar33,(byte)*unaff_ESI);
      uVar27 = (undefined3)((uint)iVar12 >> 8);
      cVar6 = bVar33 + (byte)*unaff_ESI;
      pcVar11 = (char *)CONCAT31(uVar27,cVar6);
      if (bVar56) {
        *pcVar11 = *pcVar11 + cVar6;
        iVar17 = CONCAT22((short)((uint)iVar17 >> 0x10),
                          CONCAT11((byte)((uint)iVar17 >> 8) | unaff_EBP[7],(char)iVar17));
        *pcVar11 = *pcVar11 + cVar6;
        goto code_r0x00402188;
      }
      pcVar16 = (char *)CONCAT31(uVar27,cVar6 + -2 + bVar56);
      uStack_18 = in_ES;
    }
  }
  else {
code_r0x00402188:
    cVar6 = (char)pcVar11 + '\x02';
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6);
    iVar17 = CONCAT22((short)((uint)iVar17 >> 0x10),
                      CONCAT11((char)((uint)iVar17 >> 8) + *(char *)(iVar17 + 4),(char)iVar17));
    *pcVar16 = *pcVar16 + cVar6;
  }
  uVar27 = (undefined3)((uint)pcVar16 >> 8);
  bVar33 = (byte)pcVar16 + 0x2d;
  bVar7 = 9 < (bVar33 & 0xf) | in_AF;
  bVar33 = bVar33 + bVar7 * -6;
  cVar6 = bVar33 + (0x9f < bVar33 | 0xd2 < (byte)pcVar16 | bVar7 * (bVar33 < 6)) * -0x60;
  uVar36 = (undefined2)((uint)iVar17 >> 0x10);
  cVar47 = (char)((uint)iVar17 >> 8) + *(char *)(iVar17 + 7);
  pbVar18 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47,(char)iVar17));
  *(char *)CONCAT31(uVar27,cVar6) = *(char *)CONCAT31(uVar27,cVar6) + cVar6;
  bVar8 = cVar6 + 0x7e;
  pbVar14 = (byte *)CONCAT31(uVar27,bVar8);
  pbVar46 = unaff_EBP + 0x6fe1411;
  bVar33 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar8;
  *pbVar14 = (*pbVar14 - bVar8) - CARRY1(bVar33,bVar8);
  bVar56 = CARRY1((byte)*unaff_ESI,bVar8);
  uVar15 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
  bVar33 = (byte)((uint)pcVar24 >> 8);
  if (bVar56) {
    *pbVar14 = *pbVar14 + bVar8;
    bVar8 = bVar8 | pbVar14[0x400000c];
    puVar13 = (uint *)CONCAT31(uVar27,bVar8);
    if ((char)bVar8 < '\x01') {
code_r0x004021be:
      pcVar24 = (char *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                                 CONCAT11(bVar33 | *pbVar18,(char)pcVar24));
      puVar13 = (uint *)((int)puVar13 + -0x77b02);
      pbVar46 = (byte *)((int)unaff_ESI + (int)pbVar50 * 2);
      *pbVar46 = *pbVar46 + (char)puVar13;
      pbVar14 = (byte *)((uint)puVar13 | *puVar13);
      bVar33 = (byte)pbVar14;
      unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar33;
      bVar56 = CARRY1(*pbVar14,bVar33);
      *pbVar14 = *pbVar14 + bVar33;
      in_SS = uStack_18;
      goto code_r0x004021d4;
    }
    *(byte *)puVar13 = (char)*puVar13 + bVar8;
    cVar6 = bVar8 + 0x28;
    puVar13 = (uint *)CONCAT31(uVar27,cVar6);
    *puVar13 = (uint)(*puVar13 + (int)puVar13);
    bVar8 = *pbVar18;
    *pbVar18 = *pbVar18 + bVar33;
    if (CARRY1(bVar8,bVar33)) {
      *(char *)puVar13 = (char)*puVar13 + cVar6;
      goto code_r0x004021be;
    }
    pbVar46 = (byte *)((int)unaff_ESI + (int)pbVar50 * 2);
    *pbVar46 = *pbVar46 + cVar6;
    pbVar14 = (byte *)((uint)puVar13 | *puVar13);
    pbVar14[(int)unaff_EBP] = pbVar14[(int)unaff_EBP] + (char)pbVar14;
code_r0x004021e5:
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    bVar33 = *pbVar18;
    bVar8 = (byte)((uint)pcVar24 >> 8);
    *pbVar18 = *pbVar18 + bVar8;
    if (!CARRY1(bVar33,bVar8)) goto code_r0x0040220c;
    *pbVar14 = *pbVar14 + (char)pbVar14;
    pcVar24 = (char *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                               CONCAT11(bVar8 | *pbVar14,(char)pcVar24));
code_r0x004021f1:
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)pbVar14;
  }
  else {
    if ((byte)*unaff_ESI != 0 && SCARRY1((byte)uVar15,bVar8) == (char)(byte)*unaff_ESI < '\0') {
      *pbVar14 = *pbVar14 + bVar8;
      puVar13 = (uint *)CONCAT31(uVar27,cVar6 + -0x55);
      unaff_ESI[(int)pbVar50 * 2] =
           (uint)(pbVar40 + (uint)(0xd2 < bVar8) + unaff_ESI[(int)pbVar50 * 2]);
      goto code_r0x004021be;
    }
code_r0x004021d4:
    if (bVar56) {
      *pbVar14 = *pbVar14 + (byte)pbVar14;
      uVar27 = (undefined3)((uint)pbVar14 >> 8);
      bVar33 = (byte)pbVar14 | pbVar14[0x400000b];
      pbVar14 = (byte *)CONCAT31(uVar27,bVar33);
      if ('\0' < (char)bVar33) {
        *pbVar14 = *pbVar14 + bVar33;
        pbVar14 = (byte *)CONCAT31(uVar27,bVar33 + 0x28);
        goto code_r0x004021e5;
      }
      *pbVar40 = *pbVar40 + (char)pcVar24;
      *(char *)((int)pbVar14 * 2) = *(char *)((int)pbVar14 * 2) - (char)pcVar24;
      goto code_r0x004021f1;
    }
  }
  pbVar18 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47 + pbVar18[6],(char)iVar17));
  *pbVar14 = *pbVar14 + (char)pbVar14;
  uVar27 = (undefined3)((uint)pbVar14 >> 8);
  bVar8 = (char)pbVar14 + 0x6f;
  bVar33 = *(byte *)CONCAT31(uVar27,bVar8);
  *pbVar40 = *pbVar40 + (char)pcVar24;
  cVar6 = (bVar8 & bVar33) + *pbVar50;
  pbVar14 = (byte *)CONCAT31(uVar27,cVar6);
  *pcVar24 = *pcVar24 - cVar30;
  *pbVar14 = *pbVar14 + cVar6;
  *pcVar24 = *pcVar24 - bVar9;
  *pbVar14 = *pbVar14 + cVar6;
code_r0x0040220c:
  uStack_20 = CONCAT22(uStack_20._2_2_,in_SS);
  bVar33 = (byte)pbVar14 | 0xde;
  cVar30 = bVar33 + 2;
  uVar27 = (undefined3)((uint)pbVar14 >> 8);
  pcVar16 = (char *)CONCAT31(uVar27,cVar30);
  if ((POPCOUNT(cVar30) & 1U) == 0) {
    *pcVar16 = *pcVar16 + cVar30;
    bVar33 = bVar33 + 0x71;
    pcVar16 = (char *)CONCAT31(uVar27,bVar33 & *(byte *)CONCAT31(uVar27,bVar33));
  }
  cVar30 = (char)pcVar24;
  *pbVar40 = *pbVar40 + cVar30;
  uVar27 = (undefined3)((uint)pbVar40 >> 8);
  bVar9 = bVar9 + *pbVar50;
  puVar41 = (uint *)CONCAT31(uVar27,bVar9);
  *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar30;
  *pcVar16 = *pcVar16 + (char)pcVar16;
  cVar30 = cVar30 - *pcVar16;
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar24 >> 8),cVar30);
  bVar8 = (char)pcVar16 - *pcVar16;
  pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar8);
  *(byte **)pbVar40 = (byte *)(*(int *)pbVar40 + (int)puVar41);
  *pbVar40 = *pbVar40 + bVar8;
  bVar33 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar8;
  *(byte **)pbVar40 = pbVar40 + (uint)CARRY1(bVar33,bVar8) + *(int *)pbVar40;
  *pcVar11 = *pcVar11 + bVar8;
  bVar33 = (byte)((uint)pcVar24 >> 8);
  uVar36 = (undefined2)((uint)pcVar24 >> 0x10);
  bVar8 = bVar33 + *pbVar40;
  puVar13 = (uint *)CONCAT22(uVar36,CONCAT11(bVar8,cVar30));
  pbVar40 = pbVar40 + (uint)CARRY1(bVar33,*pbVar40) + *(int *)pbVar40;
  *(byte *)puVar41 = (byte)*puVar41 + cVar30;
  uVar45 = (undefined3)((uint)pbVar18 >> 8);
  cVar6 = (char)pbVar18 - *(byte *)((int)unaff_ESI + 2);
  pbVar46 = (byte *)CONCAT31(uVar45,cVar6);
  bVar33 = (byte)pbVar40;
  uVar28 = (uint3)((uint)pbVar40 >> 8);
  uVar55 = in_ES;
  if ((POPCOUNT(cVar6) & 1U) == 0) {
    *pbVar40 = *pbVar40 + bVar33;
    bVar33 = bVar33 | *pbVar46;
    piVar25 = (int *)CONCAT31(uVar28,bVar33);
    if (bVar33 == 0) {
      *(char *)piVar25 = (char)*piVar25;
      puVar48 = unaff_ESI + 1;
      out(*unaff_ESI,(short)puVar41);
      pbVar40 = (byte *)((uint)uVar28 << 8);
      *(byte *)puVar41 = (byte)*puVar41 + cVar30;
      puVar41 = (uint *)CONCAT31(uVar27,bVar9 - *pbVar46);
      *pbVar46 = *pbVar46;
      *(byte *)puVar41 = (byte)*puVar41 + bVar8;
      *pbVar40 = *pbVar40;
      *(byte *)puVar41 = (byte)*puVar41;
      *pbVar40 = *pbVar40;
      *(byte **)(pbVar46 + 0x25) = (byte *)(*(int *)(pbVar46 + 0x25) + (int)puVar48);
    }
    else {
      unaff_EBP = unaff_EBP + -*(int *)(pbVar50 + 0x24);
      *(byte *)piVar25 = (char)*piVar25 + bVar33;
      puVar13 = (uint *)CONCAT22(uVar36,CONCAT11(bVar8 | (byte)*puVar41,cVar30));
      puVar48 = (uint *)((int)unaff_ESI + *piVar25);
      pcVar16 = (char *)((int)piVar25 + *piVar25);
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      cVar47 = (char)pcVar16 - *pcVar16;
      pcVar16 = (char *)CONCAT31(uVar27,cVar47);
      *pcVar16 = *pcVar16 + cVar47;
      pbVar40 = (byte *)CONCAT31(uVar27,cVar47 + *pcVar16);
      uVar15 = *puVar13;
      *(byte *)puVar13 = (byte)*puVar13 + bVar9;
      if (!CARRY1((byte)uVar15,bVar9)) {
        *(byte *)puVar41 = (byte)*puVar41 + cVar30;
        pbVar46 = (byte *)CONCAT31(uVar45,cVar6 - (byte)*puVar48);
        goto _ctor;
      }
    }
    *pbVar40 = *pbVar40 + (char)pbVar40;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(byte)puVar13 | (byte)*puVar41);
    unaff_ESI = puVar48;
  }
  else {
    *(byte *)puVar41 = (byte)*puVar41 + cVar30;
    pbVar40 = (byte *)CONCAT31(uVar28,bVar33 | (byte)*unaff_ESI);
  }
  pbVar50 = pbVar50 + *(int *)(unaff_EBP + 0x26);
  *pbVar40 = *pbVar40 + (byte)pbVar40;
  uVar27 = (undefined3)((uint)pbVar40 >> 8);
  bVar9 = (byte)pbVar40 | (byte)*puVar41;
  pbVar40 = (byte *)CONCAT31(uVar27,bVar9);
  if ((POPCOUNT(bVar9) & 1U) == 0) {
    *pbVar40 = *pbVar40 + bVar9;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    bVar7 = 9 < (bVar9 + 6 & 0xf) | bVar7;
    bVar33 = bVar9 + 6 + bVar7 * '\x06';
    pbVar40 = (byte *)CONCAT31(uVar27,bVar33 + (0x90 < (bVar33 & 0xf0) |
                                               0xf9 < bVar9 | bVar7 * (0xf9 < bVar33)) * '`');
  }
  *pbVar40 = *pbVar40 + (char)pbVar40;
  puVar48 = unaff_ESI;
  do {
    puVar42 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | pbVar46[0x28],(char)puVar41));
    *pbVar40 = *pbVar40 + (char)pbVar40;
    uVar36 = (undefined2)((uint)puVar13 >> 0x10);
    uVar31 = SUB41(puVar13,0);
    bVar33 = (byte)((uint)puVar13 >> 8) | *pbVar40;
    puVar13 = (uint *)CONCAT22(uVar36,CONCAT11(bVar33,uVar31));
    cVar30 = (char)pbVar40 + *pbVar40;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar30);
    bVar9 = *pbVar46;
    *pbVar46 = *pbVar46 + bVar33;
    if (!CARRY1(bVar9,bVar33)) goto code_r0x004022b3;
    *pbVar40 = *pbVar40 + cVar30;
    puVar13 = (uint *)CONCAT22(uVar36,CONCAT11(bVar33 | (byte)*puVar42,uVar31));
    puVar41 = puVar42;
_ctor:
    bVar9 = (byte)((uint)puVar13 >> 8);
    uVar36 = (undefined2)((uint)puVar13 >> 0x10);
    cVar30 = (char)puVar13;
    bVar33 = bVar9 + *pbVar40;
    puVar13 = (uint *)CONCAT22(uVar36,CONCAT11(bVar33,cVar30));
    pbVar40 = pbVar40 + (uint)CARRY1(bVar9,*pbVar40) + *(int *)pbVar40;
    *(byte *)puVar41 = (byte)*puVar41 + cVar30;
    bVar8 = (byte)pbVar46;
    bVar56 = bVar8 < *(byte *)((int)puVar48 + 2);
    bVar9 = *(byte *)((int)puVar48 + 2);
    cVar6 = bVar8 - bVar9;
    pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      if ((char)bVar9 <= (char)bVar8) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *pbVar40 = *pbVar40 + (byte)pbVar40;
    bVar9 = (byte)pbVar40 | *pbVar46;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9);
    puVar42 = puVar41;
    if (bVar9 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(pbVar50 + 0x2b);
      *pbVar40 = *pbVar40 + bVar9;
      puVar13 = (uint *)CONCAT22(uVar36,CONCAT11(bVar33 | (byte)*puVar41,cVar30));
      bVar33 = *pbVar40;
      *pbVar40 = *pbVar40 + bVar9;
      puVar48 = (uint *)((int)puVar48 + (uint)CARRY1(bVar33,bVar9) + *(int *)pbVar40);
      pbVar40 = pbVar40 + *(int *)pbVar40;
      cVar30 = (char)pbVar40 - *pbVar40;
      piVar25 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar30);
      *(char *)piVar25 = (char)*piVar25 + cVar30;
      pbVar40 = (byte *)((int)piVar25 + *piVar25);
      uVar15 = *puVar13;
      *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar41;
      if (!CARRY1((byte)uVar15,(byte)puVar41)) goto code_r0x004022ea;
      goto code_r0x004022be;
    }
    *pbVar40 = *pbVar40;
    out(*puVar48,(short)puVar41);
    pbVar40 = pbVar40 + -*(int *)pbVar40;
    puVar48 = puVar48 + 1;
code_r0x004022ab:
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar13;
    bVar9 = (char)pbVar40 - *pbVar40;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9);
    *pbVar46 = *pbVar46 + (char)puVar42;
    *pbVar46 = *pbVar46 ^ bVar9;
code_r0x004022b3:
    *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar13 >> 8);
    bVar33 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar33;
    *pbVar46 = *pbVar46 + bVar33;
    bVar9 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar33;
    *(byte **)(pbVar46 + 0x2c) =
         (byte *)((int)puVar48 + (uint)CARRY1(bVar9,bVar33) + *(int *)(pbVar46 + 0x2c));
    puVar41 = puVar42;
code_r0x004022be:
    *pbVar40 = *pbVar40 + (char)pbVar40;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(byte)puVar13 | (byte)*puVar41);
    pbVar50 = pbVar50 + *(int *)(unaff_EBP + 0x2d);
code_r0x004022c6:
    *pbVar40 = *pbVar40 + (byte)pbVar40;
    uVar27 = (undefined3)((uint)pbVar40 >> 8);
    bVar9 = (byte)pbVar40 | (byte)*puVar41;
    pcVar16 = (char *)CONCAT31(uVar27,bVar9);
    if ((POPCOUNT(bVar9) & 1U) != 0) {
      *pcVar16 = *pcVar16 + bVar9;
    }
    *pcVar16 = *pcVar16 + bVar9;
    cVar30 = bVar9 + 6;
    pbVar40 = (byte *)CONCAT31(uVar27,cVar30);
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    *pbVar40 = *pbVar40 + cVar30;
    puVar42 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | pbVar46[0x2f],(char)puVar41));
    *pbVar40 = *pbVar40 + cVar30;
    bVar9 = (byte)((uint)puVar13 >> 8) | *pbVar40;
    puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),CONCAT11(bVar9,(char)puVar13));
    pbVar40 = pbVar40 + *(int *)pbVar40;
    bVar56 = CARRY1(*pbVar46,bVar9);
    *pbVar46 = *pbVar46 + bVar9;
code_r0x004022e0:
    puVar41 = puVar42;
    if (!bVar56) goto code_r0x0040230b;
    bVar33 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar33;
    puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),
                               CONCAT11((byte)((uint)puVar13 >> 8) | (byte)*puVar42,(char)puVar13));
    bVar9 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar33;
    puVar48 = (uint *)((int)puVar48 + (-(uint)CARRY1(bVar9,bVar33) - *(int *)pbVar40));
code_r0x004022ea:
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 + *pbVar40);
code_r0x004022ef:
    *(char *)((int)pbVar40 * 2) = *(char *)((int)pbVar40 * 2) + (char)pbVar40;
    *(byte *)puVar13 = (byte)*puVar13 + (char)puVar42;
    uVar55 = (ushort)in_stack_ffffffd0;
    puVar41 = puVar42;
    while( true ) {
      uVar27 = (undefined3)((uint)pbVar40 >> 8);
      bVar9 = (byte)pbVar40 | (byte)*puVar41;
      pbVar40 = (byte *)CONCAT31(uVar27,bVar9);
      if ((POPCOUNT(bVar9) & 1U) != 0) break;
      *pbVar40 = *pbVar40 + bVar9;
      cVar30 = bVar9 + 0xd;
      pcVar16 = (char *)CONCAT31(uVar27,cVar30);
      *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar16;
      *pcVar16 = *pcVar16 + cVar30;
      *(char *)((int)pcVar16 * 2) = *(char *)((int)pcVar16 * 2) + (char)((uint)puVar13 >> 8);
      *pcVar16 = *pcVar16 + cVar30;
      pbVar40 = (byte *)CONCAT31(uVar27,cVar30);
      *pbVar40 = *pbVar40 + cVar30;
code_r0x0040230b:
      puVar42 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((char)((uint)puVar41 >> 8) + pbVar46[0x34],(char)puVar41))
      ;
      cVar30 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar30;
      pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar46 >> 8) | unaff_EBP[-0x79],
                                          (char)pbVar46));
      *pbVar40 = *pbVar40 + cVar30;
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar30 + '\x02');
code_r0x00402317:
      pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                 CONCAT11((char)((uint)pbVar46 >> 8) + pbVar46[-0x7a],(char)pbVar46)
                                );
      cVar30 = (char)pcVar16;
      *pcVar16 = *pcVar16 + cVar30;
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      cVar6 = cVar30 + '{';
      pbVar40 = (byte *)CONCAT31(uVar27,cVar6);
      *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
      pbVar14 = (byte *)((int)puVar42 + (int)pbVar40);
      *pbVar14 = *pbVar14 + cVar6;
      if ((POPCOUNT(*pbVar14) & 1U) != 0) goto code_r0x004022ab;
      *pbVar40 = *pbVar40 + cVar6;
      piVar25 = (int *)CONCAT31(uVar27,cVar30 + -10);
      uVar15 = (int)piVar25 + *piVar25;
      bVar9 = (byte)uVar15;
      pbVar50[(int)unaff_EBP * 2] = pbVar50[(int)unaff_EBP * 2] + bVar9;
      pbVar40 = (byte *)(uVar15 ^ 0x7d0a0000);
      *pbVar40 = bVar9;
      pbVar14 = (byte *)((int)puVar42 + (int)pbVar40);
      *pbVar14 = *pbVar14 + bVar9;
      puVar41 = puVar42;
      if ((POPCOUNT(*pbVar14) & 1U) != 0) goto code_r0x004022be;
      *pbVar40 = *pbVar40 + bVar9;
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9 + 0x69);
      uVar52 = in_ES;
code_r0x00402342:
      in_ES = uVar52;
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      bVar9 = (char)pcVar16 + *pcVar16;
      pcVar16 = (char *)CONCAT31(uVar27,bVar9);
      *pcVar16 = *pcVar16 + bVar9;
      *pcVar16 = *pcVar16 + bVar9;
      *(byte *)(puVar48 + 0x800000) = (byte)puVar48[0x800000] + (char)puVar13;
      cVar6 = (char)pbVar46;
      pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                 CONCAT11((char)((uint)pbVar46 >> 8) + pbVar46[-0x7a],cVar6));
      *pcVar16 = *pcVar16 + bVar9;
      bVar56 = 0xfd < bVar9;
      cVar30 = bVar9 + 2;
      pbVar40 = (byte *)CONCAT31(uVar27,cVar30);
      if ((POPCOUNT(cVar30) & 1U) != 0) goto code_r0x004022e0;
      *pbVar40 = *pbVar40 + cVar30;
      cVar30 = bVar9 + 0x71;
      pbVar40 = (byte *)CONCAT31(uVar27,cVar30);
      bVar33 = *pbVar40;
      *pbVar40 = *pbVar40 + cVar30;
      in_stack_ffffffd0 = (byte *)(uint)in_ES;
      if (SCARRY1(bVar33,cVar30) == (char)*pbVar40 < '\0') {
        *(byte *)((int)puVar42 + (int)pbVar40) = *(byte *)((int)puVar42 + (int)pbVar40) + cVar6;
        goto code_r0x004022ef;
      }
      *pbVar40 = *pbVar40 + cVar30;
      pbVar40 = (byte *)CONCAT31(uVar27,bVar9 + 0x73);
      bVar56 = (POPCOUNT(bVar9 + 0x73) & 1U) == 0;
      puVar41 = puVar42;
code_r0x00402366:
      if (bVar56) {
code_r0x00402368:
        *pbVar40 = *pbVar40 + (char)pbVar40;
        cVar30 = (char)pbVar40 + 'o';
        pcVar16 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar30);
        *pcVar16 = *pcVar16 + cVar30;
        puVar42 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(byte)puVar41 | *pbVar46);
        pcVar16 = pcVar16 + 0x37280512;
        bVar33 = (byte)pcVar16;
        *pcVar16 = *pcVar16 + bVar33;
        puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),
                                   CONCAT11((byte)((uint)puVar13 >> 8) | bRam7d160243,(char)puVar13)
                                  );
        pbVar40 = (byte *)((int)puVar42 + (int)pcVar16);
        bVar9 = *pbVar40;
        *pbVar40 = *pbVar40 + bVar33;
        pcRam00008e7d = pcVar16 + (int)(pcRam00008e7d + CARRY1(bVar9,bVar33));
        bVar56 = SCARRY1(bVar33,'\x02');
        bVar33 = bVar33 + 2;
        puVar26 = (ushort *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar33);
code_r0x0040238b:
        if (bVar56 == (char)bVar33 < '\0') {
          *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
          pcVar16 = (char *)CONCAT31((int3)((uint)puVar26 >> 8),(char)puVar26 + '\x12');
          uVar52 = in_ES;
          in_ES = uVar55;
code_r0x00402391:
          pcVar16 = pcVar16 + 0x42802;
          *pbVar46 = *pbVar46 + (char)((uint)puVar13 >> 8);
          uVar55 = in_ES;
code_r0x00402399:
          bVar9 = (byte)pbVar46 | (byte)((uint)puVar13 >> 8);
          uVar27 = (undefined3)((uint)pcVar16 >> 8);
          pcVar16 = (char *)CONCAT31(uVar27,1);
          *pcVar16 = *pcVar16 + '\x01';
          pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                     CONCAT11((char)((uint)pbVar46 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar46 >> 8),bVar9) +
                                                       -0x72),bVar9));
          *pcVar16 = *pcVar16 + '\x01';
          uVar15 = CONCAT31(uVar27,0x14);
          pcVar16 = (char *)(uVar15 + 0x19061215 + (uint)(0x1f9edfd < uVar15));
          uVar1 = (uint)(0xe4ffffec < uVar15 + 0xfe061202 ||
                        CARRY4(uVar15 + 0x19061215,(uint)(0x1f9edfd < uVar15)));
          uVar15 = *puVar48;
          uVar20 = *puVar48;
          *puVar48 = (uint)(pcVar16 + uVar20 + uVar1);
          if ((SCARRY4(uVar15,(int)pcVar16) != SCARRY4((int)(pcVar16 + uVar20),uVar1)) !=
              (int)*puVar48 < 0) {
            bVar33 = (byte)pcVar16;
            *pcVar16 = *pcVar16 + bVar33;
            iVar17 = CONCAT31((int3)((uint)pcVar16 >> 8),bVar33 + 2) + 0x847d +
                     (uint)(0xfd < bVar33);
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(byte)puVar42 | (byte)*puVar42);
            pcVar16 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x12') + 0x134f26)
            ;
            *pbVar46 = *pbVar46 + bVar9;
code_r0x004023cd:
            out(*puVar48,(short)puVar42);
            uVar15 = *puVar42;
            *(byte *)puVar42 = (byte)*puVar42 + (byte)puVar13;
            pbVar40 = (byte *)(pcVar16 + (uint)CARRY1((byte)uVar15,(byte)puVar13) + *(int *)pbVar50)
            ;
            bVar59 = SCARRY1((char)puVar42,(byte)*puVar13);
            bVar9 = (char)puVar42 + (byte)*puVar13;
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar9);
            bVar57 = (char)bVar9 < '\0';
            puVar48 = puVar48 + 1;
code_r0x004023d6:
            bVar56 = (POPCOUNT(bVar9) & 1U) == 0;
            puVar41 = puVar42;
            if (bVar59 != bVar57) {
              *pbVar40 = *pbVar40 + (char)pbVar40;
code_r0x004023db:
              cVar6 = (char)pbVar40;
              uVar27 = (undefined3)((uint)pbVar40 >> 8);
              cVar30 = cVar6 + '\x02';
              pbVar40 = (byte *)CONCAT31(uVar27,cVar30);
              if ((POPCOUNT(cVar30) & 1U) != 0) {
                pbVar14 = (byte *)((int)puVar41 + (int)pbVar40);
                *pbVar14 = *pbVar14 + cVar30;
                bVar56 = (POPCOUNT(*pbVar14) & 1U) == 0;
                goto code_r0x00402366;
              }
              *pbVar40 = *pbVar40 + cVar30;
              cVar6 = cVar6 + '\x15';
              pbVar40 = (byte *)CONCAT31(uVar27,cVar6);
              *(byte *)puVar13 = (byte)*puVar13 | (byte)puVar41;
              *pbVar50 = *pbVar50 | (byte)puVar41;
              uVar52 = in_ES;
              if ((POPCOUNT(*pbVar50) & 1U) == 0) {
                *pbVar40 = *pbVar40 + cVar6;
                goto code_r0x00402425;
              }
              *pbVar40 = *pbVar40 + cVar6;
              cVar6 = cVar6 + (byte)*puVar41;
              pcVar16 = (char *)CONCAT31(uVar27,cVar6);
              if ((POPCOUNT(cVar6) & 1U) == 0) {
                *pcVar16 = *pcVar16 + cVar6;
                puVar26 = (ushort *)CONCAT31(uVar27,cVar6 + 'o');
                puVar42 = puVar41;
code_r0x004023f6:
                uVar15 = *puVar42;
                *(byte *)puVar42 = (byte)*puVar42 + (char)puVar13;
                cVar30 = (char)puVar26;
                if (SCARRY1((byte)uVar15,(char)puVar13) == (char)(byte)*puVar42 < '\0') {
                  in_ES = *puVar26;
                  pbVar40 = (byte *)((int)puVar42 + (int)puVar26);
                  bVar56 = SCARRY1(*pbVar40,cVar30);
                  *pbVar40 = *pbVar40 + cVar30;
                  bVar33 = *pbVar40;
                  goto code_r0x0040238b;
                }
                *(char *)puVar26 = (char)*puVar26 + cVar30;
                cVar30 = cVar30 + '\x02';
                pcVar16 = (char *)CONCAT31((int3)((uint)puVar26 >> 8),cVar30);
                puVar41 = puVar48;
                if ((POPCOUNT(cVar30) & 1U) == 0) {
code_r0x00402402:
                  *pcVar16 = *pcVar16 + (char)pcVar16;
                  uVar27 = (undefined3)((uint)pcVar16 >> 8);
                  piVar25 = (int *)CONCAT31(uVar27,(char)pcVar16 + 'r');
                  *piVar25 = *piVar25 + 0x7b027000;
                  cVar30 = (char)*piVar25;
                  pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                  pbVar40 = (byte *)((int)puVar42 + (int)pcVar16);
                  *pbVar40 = *pbVar40 + cVar30;
                  puVar48 = puVar41;
                  if ((POPCOUNT(*pbVar40) & 1U) == 0) {
                    *pcVar16 = *pcVar16 + cVar30;
                    bVar33 = cVar30 + '{' + *(char *)CONCAT31(uVar27,cVar30 + '{');
                    piVar25 = (int *)CONCAT31(uVar27,bVar33);
                    pbVar40 = (byte *)((int)piVar25 + (int)unaff_EBP);
                    bVar9 = *pbVar40;
                    *pbVar40 = *pbVar40 + bVar33;
                    *piVar25 = (*piVar25 - (int)piVar25) - (uint)CARRY1(bVar9,bVar33);
                    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar13;
                    puVar48 = puVar41 + 1;
                    out(*puVar41,(short)puVar42);
                    cVar30 = bVar33 - (char)*piVar25;
                    pbVar40 = (byte *)CONCAT31(uVar27,cVar30);
                    *(byte *)puVar48 = (byte)*puVar48 + cVar30;
                    puVar41 = puVar42;
code_r0x00402425:
                    out(*puVar48,(short)puVar41);
                    uVar15 = *puVar41;
                    *(byte *)puVar41 = (byte)*puVar41 + (byte)puVar13;
                    uVar15 = (uint)CARRY1((byte)uVar15,(byte)puVar13);
                    pbVar14 = (byte *)((int)puVar13 + *puVar13) + uVar15;
                    puVar13 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),
                                               (char)pbVar14 + *pbVar14 +
                                               (CARRY4((uint)puVar13,*puVar13) ||
                                               CARRY4((int)puVar13 + *puVar13,uVar15)));
                    cRam130a0000 = cRam130a0000 - (char)((uint)pbVar46 >> 8);
                    puVar42 = puVar41;
                    puVar48 = puVar48 + 1;
code_r0x00402435:
                    puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               (byte)puVar42 | (byte)*puVar42);
                    bVar9 = *pbVar40;
                    *pbVar40 = *pbVar40 + (char)pbVar40;
                    puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),
                                               CONCAT11((byte)((uint)puVar13 >> 8) | bVar9 |
                                                        bRam7d170243,(char)puVar13));
code_r0x00402442:
                    pbVar14 = (byte *)((int)puVar42 + (int)pbVar40);
                    bVar33 = *pbVar14;
                    bVar9 = (byte)pbVar40;
                    *pbVar14 = *pbVar14 + bVar9;
                    uVar15 = *puVar42;
                    uVar20 = *puVar42;
                    *puVar42 = (uint)((byte *)(uVar20 + (int)puVar13) + CARRY1(bVar33,bVar9));
                    puVar41 = puVar42;
                    if ((SCARRY4(uVar15,(int)puVar13) !=
                        SCARRY4((int)(uVar20 + (int)puVar13),(uint)CARRY1(bVar33,bVar9))) !=
                        (int)*puVar42 < 0) {
                      *pbVar40 = *pbVar40 + bVar9;
                      bVar59 = SCARRY1(bVar9,'\x02');
                      bVar9 = bVar9 + 2;
                      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9);
code_r0x0040244f:
                      bVar57 = (char)bVar9 < '\0';
                      if (bVar59 == bVar57) {
code_r0x00402451:
                        *pbVar40 = *pbVar40 + (char)pbVar40;
                        bVar9 = (char)pbVar40 + 0x12U | (byte)*puVar42;
                        pcVar16 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9);
                        cRam162b0000 = cRam162b0000 - bVar9;
code_r0x0040245d:
                        pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),
                                                   (byte)pbVar46 | (byte)((uint)puVar13 >> 8));
                        cVar30 = in((short)puVar42);
                        puVar26 = (ushort *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar30);
                        *(char *)puVar26 = (char)*puVar26 + cVar30;
                        *(byte *)puVar42 = (byte)*puVar42 + cVar30;
                        if ((POPCOUNT((byte)*puVar42) & 1U) == 0) {
code_r0x00402466:
                          *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
                          uVar27 = (undefined3)((uint)puVar26 >> 8);
                          bVar9 = (char)puVar26 + 0x13U | (byte)*puVar42;
                          pcVar16 = (char *)CONCAT31(uVar27,bVar9);
                          cVar30 = (byte)puVar13 + *pbVar46;
                          puVar41 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),cVar30);
                          cRam1b000019 = cRam1b000019 + '\x01';
                          uVar15 = (uint)CARRY1((byte)puVar13,*pbVar46);
                          iVar17 = *(int *)pbVar46;
                          iVar12 = *(int *)pbVar46;
                          *(byte **)pbVar46 = (byte *)(iVar12 + (int)puVar41) + uVar15;
                          if ((SCARRY4(iVar17,(int)puVar41) != SCARRY4(iVar12 + (int)puVar41,uVar15)
                              ) != *(int *)pbVar46 < 0) {
                            *pcVar16 = *pcVar16 + bVar9;
                            iVar17 = CONCAT31(uVar27,bVar9 + 2) + 0x847d + (uint)(0xfd < bVar9);
                            uVar27 = (undefined3)((uint)iVar17 >> 8);
                            bVar9 = (char)iVar17 + 0x12;
                            puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),
                                                       CONCAT11((byte)((uint)puVar13 >> 8) |
                                                                *(byte *)CONCAT31(uVar27,bVar9),
                                                                cVar30));
                            bVar7 = 9 < (bVar9 & 0xf) | bVar7;
                            uVar15 = CONCAT31(uVar27,bVar9 + bVar7 * -6) & 0xffffff0f;
                            pcVar16 = (char *)CONCAT22((short)(uVar15 >> 0x10),
                                                       CONCAT11((char)((uint)iVar17 >> 8) - bVar7,
                                                                (char)uVar15));
code_r0x00402486:
                            *pcVar16 = *pcVar16 + (char)pcVar16;
                            puVar44 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                                       (byte)puVar42 | (byte)*puVar42);
                            uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
                            bVar9 = (byte)((uint)pbVar46 >> 8) | (byte)((uint)puVar42 >> 8);
                            pbVar40 = (byte *)(pcVar16 + 0x1b000019);
                            puVar41 = (uint *)((int)puVar44 + (int)pbVar40);
                            bVar56 = CARRY4((uint)puVar13,*puVar41);
                            pbVar14 = (byte *)((int)puVar13 + *puVar41);
                            puVar13 = (uint *)(pbVar14 + ((char *)0xe4ffffe6 < pcVar16));
                            piVar25 = (int *)((int)pbVar50 * 2 + 0x400008b);
                            *piVar25 = (int)((int)puVar13 +
                                            (uint)(bVar56 ||
                                                  CARRY4((uint)pbVar14,
                                                         (uint)((char *)0xe4ffffe6 < pcVar16))) +
                                            *piVar25);
                            pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(bVar9 + *(char *)(CONCAT22(
                                                  uVar36,CONCAT11(bVar9,(char)pbVar46)) + -0x79),
                                                  (char)pbVar46));
                            puVar42 = puVar44;
code_r0x0040249e:
                            bVar9 = (byte)pbVar40;
                            *pbVar40 = *pbVar40 + bVar9;
                            uVar27 = (undefined3)((uint)pbVar40 >> 8);
                            cVar30 = bVar9 + 2;
                            pbVar40 = (byte *)CONCAT31(uVar27,cVar30);
                            puVar41 = puVar42;
                            if (0xfd < bVar9) {
                              bVar33 = *pbVar40;
                              *pbVar40 = *pbVar40 + cVar30;
                              if (SCARRY1(bVar33,cVar30) == (char)*pbVar40 < '\0')
                              goto code_r0x00402435;
                              *pbVar40 = *pbVar40 + cVar30;
                              cVar30 = bVar9 + 4;
                              pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                              if ((POPCOUNT(cVar30) & 1U) != 0) {
                                *(byte *)puVar42 = (byte)*puVar42 + (char)puVar13;
                                pbVar40 = (byte *)(pcVar16 + -0x7d170243);
                                goto code_r0x00402442;
                              }
                              *pcVar16 = *pcVar16 + cVar30;
                              cVar30 = bVar9 + 6;
                              pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                              if ((POPCOUNT(cVar30) & 1U) == 0) {
                                while( true ) {
                                  cVar30 = (char)pcVar16;
                                  *pcVar16 = *pcVar16 + cVar30;
                                  uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                  pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '}');
                                  puVar48 = (uint *)((int)puVar48 + -1);
                                  *pcVar16 = *pcVar16 + cVar30 + '}';
                                  cVar6 = cVar30 + '\x7f';
                                  pbVar40 = (byte *)CONCAT31(uVar27,cVar6);
                                  if ((POPCOUNT(cVar6) & 1U) != 0) break;
                                  *pbVar40 = *pbVar40 + cVar6;
                                  cVar6 = cVar30 + -0x7f;
                                  pbVar40 = (byte *)CONCAT31(uVar27,cVar6);
                                  if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402451;
                                  *pbVar40 = *pbVar40 + cVar6;
                                  pcVar16 = (char *)CONCAT31(uVar27,cVar30 + -2);
                                  pbVar50 = pbVar50 + -1;
                                  while( true ) {
                                    cVar30 = (char)pcVar16;
                                    *pcVar16 = *pcVar16 + cVar30;
                                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                    cVar6 = cVar30 + '\x02';
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                                    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040245d;
                                    *pcVar16 = *pcVar16 + cVar6;
                                    pcVar16 = (char *)(CONCAT31(uVar27,cVar30 + 'q') + 1);
                                    *pcVar16 = *pcVar16 + (byte)pcVar16;
                                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                    bVar9 = (byte)pcVar16 | (byte)*puVar42;
                                    pcVar16 = (char *)CONCAT31(uVar27,bVar9);
                                    if ((POPCOUNT(bVar9) & 1U) != 0) {
                                      puVar13 = (uint *)((int)puVar13 + *puVar42);
                                      puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                                                 (char)puVar42 + (byte)*puVar42);
                                      pbVar50 = (byte *)((uint)pbVar50 | (uint)puVar48);
                                      puVar26 = (ushort *)(pcVar16 + 0x1b000019);
                                      goto code_r0x00402466;
                                    }
                                    *pcVar16 = *pcVar16 + bVar9;
                                    pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x6f);
                                    puVar13 = (uint *)((int)puVar13 + 1);
                                    *pcVar16 = *pcVar16 + bVar9 + 0x6f;
                                    uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
                                    bVar9 = (byte)pbVar46;
                                    bVar33 = (byte)((uint)pbVar46 >> 8) | (byte)*puVar42;
                                    uVar55 = (ushort)uStack_20;
                                    uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
                                    cVar30 = (char)(pcVar16 + -0x21000001);
                                    uVar27 = (undefined3)((uint)(pcVar16 + -0x21000001) >> 8);
                                    cVar6 = cVar30 + -0x13;
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                                    cVar47 = bVar33 + *(char *)(CONCAT22(uVar36,CONCAT11(bVar33,
                                                  bVar9)) + -0x73);
                                    pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47,bVar9));
                                    *pcVar16 = *pcVar16 + cVar6;
                                    pcVar16 = (char *)(CONCAT31(uVar27,cVar30 + '\x19') | *puVar42);
                                    if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0)
                                    goto code_r0x00402486;
                                    cVar30 = (char)pcVar16;
                                    *pcVar16 = *pcVar16 + cVar30;
                                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                    pcVar11 = (char *)CONCAT31(uVar27,cVar30 + 'o');
                                    puVar41 = (uint *)((int)puVar42 + 1);
                                    *pcVar11 = *pcVar11 + cVar30 + 'o';
                                    bVar9 = bVar9 | (byte)((uint)pcVar16 >> 8);
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '\\');
                                    cVar47 = cVar47 + *(char *)(CONCAT31((int3)((uint)pbVar46 >> 8),
                                                                         bVar9) + -0x78);
                                    pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47,bVar9));
                                    *pcVar16 = *pcVar16 + cVar30 + '\\';
                                    pcVar16 = (char *)(CONCAT31(uVar27,cVar30 + -0x78) | *puVar41);
                                    cVar30 = (char)pcVar16;
                                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                    if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0) {
                                      pbVar40 = (byte *)CONCAT31(uVar27,cVar30 + '\x02');
                                      puVar42 = puVar41;
                                      if ((POPCOUNT(cVar30 + '\x02') & 1U) == 0)
                                      goto code_r0x0040249e;
                                      goto code_r0x00402425;
                                    }
                                    *pcVar16 = *pcVar16 + cVar30;
                                    cVar6 = cVar30 + 'o';
                                    pcVar11 = (char *)CONCAT31(uVar27,cVar6);
                                    puVar42 = (uint *)((int)puVar42 + 2);
                                    *pcVar11 = *pcVar11 + cVar6;
                                    bVar9 = bVar9 | (byte)((uint)pcVar16 >> 8);
                                    pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47 + *(char *)(
                                                  CONCAT31((int3)((uint)pbVar46 >> 8),bVar9) + -0x79
                                                  ),bVar9));
                                    *pcVar11 = *pcVar11 + cVar6;
                                    pcVar16 = (char *)(CONCAT31(uVar27,cVar30 + 'z') | 2);
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    cVar30 = (char)pcVar16;
                                    *pcVar16 = *pcVar16 + cVar30;
                                    cVar6 = cVar30 + '\x02';
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                                    if (SCARRY1(cVar30,'\x02') != cVar6 < '\0') break;
                                    *pcVar16 = *pcVar16 + cVar6;
                                    cVar6 = cVar30 + '\n';
                                    *pbVar46 = *pbVar46 - cVar6;
                                    *(byte *)puVar42 = *(byte *)puVar42 + (char)puVar13;
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    *(char *)CONCAT31(uVar27,cVar6) =
                                         *(char *)CONCAT31(uVar27,cVar6) + cVar6;
                                    cVar47 = cVar30 + '\f';
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar47);
                                    if (SCARRY1(cVar6,'\x02') == cVar47 < '\0') {
                                      *pcVar16 = *pcVar16 + cVar47;
                                      pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '\x13');
                                      uVar55 = in_ES;
                                      goto code_r0x0040254a;
                                    }
                                  }
                                }
                                pbVar14 = (byte *)((int)puVar42 + (int)pbVar40);
                                bVar59 = SCARRY1(*pbVar14,cVar6);
                                *pbVar14 = *pbVar14 + cVar6;
                                bVar9 = *pbVar14;
                                goto code_r0x0040244f;
                              }
                              cVar6 = (char)puVar42;
                              cVar47 = cVar6 + *pbVar50;
                              puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),cVar47);
                              if (SCARRY1(cVar6,*pbVar50) != cVar47 < '\0') {
                                *pcVar16 = *pcVar16 + cVar30;
                                pbVar40 = (byte *)CONCAT31(uVar27,bVar9 + 8);
                                goto code_r0x00402442;
                              }
                              cRam1b000013 = cRam1b000013 + '\x01';
                              goto code_r0x004023cd;
                            }
                            goto code_r0x00402425;
                          }
                          pcVar11 = pcVar16 + 2;
                          *pcVar11 = *pcVar11 + (char)((uint)puVar42 >> 8);
                          puVar13 = puVar41;
                          if ((POPCOUNT(*pcVar11) & 1U) == 0) {
                            *pcVar16 = *pcVar16 + bVar9;
                            pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 2);
                            puVar41 = puVar48;
                            goto code_r0x00402402;
                          }
                          puVar42 = (uint *)((int)puVar42 - *puVar48);
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
                pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                           CONCAT11((char)((uint)pbVar46 >> 8) +
                                                    unaff_EBP[(int)pcVar16 * 4],(char)pbVar46));
                *(char *)((int)puVar42 * 2) = *(char *)((int)puVar42 * 2) + cVar30;
                in_ES = uVar55;
                goto code_r0x00402391;
              }
              *pcVar16 = *pcVar16 + cVar6;
              pbVar40 = (byte *)CONCAT31(uVar27,cVar6 + '\x02');
              goto code_r0x00402368;
            }
            goto code_r0x00402366;
          }
          goto code_r0x00402342;
        }
        LOCK();
        pcVar16 = *(char **)puVar26;
        *(ushort **)puVar26 = puVar26;
        UNLOCK();
        *(byte *)((int)puVar42 + (int)pcVar16) =
             *(byte *)((int)puVar42 + (int)pcVar16) + (char)pcVar16;
        goto code_r0x00402317;
      }
      bVar56 = CARRY1(*pbVar40,(byte)pbVar40);
      *pbVar40 = *pbVar40 + (byte)pbVar40;
code_r0x004022f3:
      *(byte **)pbVar50 = (byte *)((int)puVar41 + (uint)bVar56 + *(int *)pbVar50);
    }
  } while( true );
code_r0x0040254a:
  cVar30 = (char)pcVar16;
  *(char *)((int)pcVar16 * 2) = *(char *)((int)pcVar16 * 2) - cVar30;
  *pcVar16 = *pcVar16 + cVar30;
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar30 + *pcVar16);
  *pcVar11 = *pcVar11 + cVar30 + *pcVar16;
  uStack_24 = 0x4025;
  uVar60 = func_0x0f40255d();
  uVar52 = uStack_24;
code_r0x0040255d:
  uStack_24 = uVar52;
  pcVar16 = (char *)((ulonglong)uVar60 >> 0x20);
  piVar25 = (int *)uVar60;
  *piVar25 = (int)((int)piVar25 + *piVar25);
  uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
  uVar31 = SUB41(pbVar46,0);
  cVar47 = (char)((uint)pbVar46 >> 8) + (char)((ulonglong)uVar60 >> 0x28);
  pcVar11 = (char *)CONCAT22(uVar36,CONCAT11(cVar47,uVar31));
  *piVar25 = (int)((int)piVar25 + *piVar25);
  *pbVar50 = *pbVar50 + (char)((ulonglong)uVar60 >> 0x20);
  cVar30 = (char)uVar60;
  *(char *)piVar25 = (char)*piVar25 + cVar30;
  *(char *)piVar25 = (char)*piVar25 + cVar30;
  *(char *)piVar25 = (char)*piVar25 + cVar30;
  *pcVar16 = *pcVar16 + cVar30;
  *(char *)piVar25 = (char)*piVar25 + cVar30;
  *pcVar11 = *pcVar11 + cVar30;
  *(char *)piVar25 = (char)*piVar25 + cVar30;
  pcVar2 = (code *)swi(1);
  uVar60 = (*pcVar2)();
  pbVar14 = (byte *)((ulonglong)uVar60 >> 0x20);
  pbVar40 = (byte *)uVar60;
  bVar9 = *pbVar40;
  bVar33 = (byte)uVar60;
  *pbVar40 = *pbVar40 + bVar33;
  *pbVar14 = *pbVar14 + bVar33 + CARRY1(bVar9,bVar33);
  *pbVar40 = *pbVar40 + bVar33;
  *pbVar40 = *pbVar40 + bVar33;
  *pbVar40 = *pbVar40 + bVar33;
  *pbVar40 = *pbVar40 + bVar33;
  *pbVar40 = *pbVar40 + bVar33;
  *pbVar40 = *pbVar40 + bVar33;
  *pbVar40 = *pbVar40 + bVar33;
  *pbVar40 = *pbVar40 + bVar33;
  cVar30 = (char)((ulonglong)uVar60 >> 0x28);
  *pbVar40 = *pbVar40 + cVar30;
  bVar9 = *pbVar40;
  uVar27 = (undefined3)((ulonglong)uVar60 >> 8);
  pcVar16 = (char *)CONCAT31(uVar27,bVar33 + bVar9);
  *pcVar16 = *pcVar16 + cVar30;
  cVar30 = bVar33 + bVar9 + *pcVar16;
  pcVar16 = (char *)CONCAT31(uVar27,cVar30);
  cVar6 = (char)((ulonglong)uVar60 >> 0x20);
  *pbVar50 = *pbVar50 + cVar6;
  *pcVar16 = *pcVar16 + cVar30;
  *pcVar16 = *pcVar16 + cVar6;
  *pcVar16 = *pcVar16 + cVar30;
  *puVar48 = (uint)(*puVar48 + (int)puVar48);
  cVar47 = cVar47 + unaff_EBP[(int)pcVar16 * 4];
  pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47,uVar31));
  pbVar46[(int)pcVar16] = pbVar46[(int)pcVar16] + cVar30;
  *(byte *)puVar48 = (byte)*puVar48 - cVar30;
  *pbVar14 = *pbVar14 + (char)extraout_ECX;
  bVar33 = cVar30 - *pcVar16;
  pcVar16 = (char *)CONCAT31(uVar27,bVar33);
  *pbVar46 = *pbVar46 + cVar6;
  *pbVar14 = *pbVar14 ^ bVar33;
  *pbVar14 = *pbVar14 + cVar47;
  *pcVar16 = *pcVar16 + bVar33;
  cRam12110000 = cRam12110000 + bVar33;
  bVar9 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar33;
  pbVar40 = extraout_ECX;
  if (SCARRY1(bVar9,bVar33) != (char)*pbVar14 < '\0') {
code_r0x004025bd:
    *pcVar16 = *pcVar16 + (char)pcVar16;
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x12');
    *pcVar16 = *pcVar16 + (char)((uint)pbVar40 >> 8);
    pcVar16 = pcVar16 + -1;
    cVar30 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar30;
    bVar9 = (byte)((uint)pbVar46 >> 8) | unaff_EBP[-0x7b];
    pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),CONCAT11(bVar9,(char)pbVar46));
    *pcVar16 = *pcVar16 + cVar30;
    cRam0000847d = cRam0000847d + (char)pbVar14;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar30 + '$');
    pbVar46[-0x7b] = pbVar46[-0x7b] + bVar9;
    pbVar18 = pbVar40;
code_r0x004025d8:
    bVar9 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar9;
    bVar56 = 0xf4 < bVar9;
    pcVar16 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar9 + 0xb);
    pbVar19 = unaff_EBP;
    do {
      bVar9 = (byte)pcVar16 + *pbVar18;
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      cVar30 = bVar9 + bVar56;
      cVar30 = cVar30 + *(char *)CONCAT31(uVar27,cVar30) +
               (CARRY1((byte)pcVar16,*pbVar18) || CARRY1(bVar9,bVar56));
      pcVar16 = (char *)CONCAT31(uVar27,cVar30);
      *(byte *)puVar48 = (byte)*puVar48 - cVar30;
      *pcVar16 = *pcVar16 + cVar30;
      iVar17 = *(int *)pbVar14;
      pbVar19[(int)pcVar16 * 4] = pbVar19[(int)pcVar16 * 4] + (char)((uint)pbVar46 >> 8);
      pcVar16[(int)pbVar19] = pcVar16[(int)pbVar19] + cVar30;
      pbVar43 = pbVar14 + (-1 - iVar17);
      *pcVar16 = *pcVar16 + cVar30;
      pbVar40 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar18 >> 8) | *pbVar43) + pbVar50[0x22],
                                          (char)pbVar18));
      *pcVar16 = *pcVar16 + cVar30;
      bVar38 = (char)pbVar43 - pbVar14[1 - iVar17];
      bVar8 = cVar30 - 0xf;
      pbVar18 = (byte *)CONCAT31(uVar27,bVar8);
      pbVar14 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                 CONCAT11((char)((uint)pbVar43 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar43 >> 8),bVar38) +
                                                   -0x3f),bVar38));
      bVar9 = *pbVar18;
      bVar33 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar8;
      uVar52 = uVar55;
      if (SCARRY1(bVar33,bVar8)) {
        pbVar18 = (byte *)CONCAT31(uVar27,bVar8 + pbVar18[(int)pbVar19] + CARRY1(bVar9,bVar8));
        goto code_r0x00402677;
      }
      pbVar46 = pbVar46 + -1;
      *pbVar18 = *pbVar18 + bVar8;
      uVar15 = *puVar48;
      *pbVar40 = *pbVar40 + 1;
      pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),(bVar38 | (byte)uVar15) - (byte)*puVar48
                                );
      puVar48 = (uint *)((int)puVar48 +
                        (-(uint)(bVar8 < *pbVar18) - *(int *)CONCAT31(uVar27,bVar8 - *pbVar18)));
      unaff_EBP = (byte *)CONCAT31(uVar27,bVar8 - *pbVar18);
      *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
      bVar33 = (byte)pbVar19;
      *(byte *)puVar48 = (byte)*puVar48 + bVar33;
      bVar9 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar33;
      *(byte **)pbVar50 = pbVar14 + (uint)CARRY1(bVar9,bVar33) + *(int *)pbVar50;
      uVar27 = (undefined3)((uint)pbVar19 >> 8);
      bVar33 = bVar33 | *pbVar14;
      pcVar16 = (char *)CONCAT31(uVar27,bVar33);
      if ((POPCOUNT(bVar33) & 1U) != 0) {
        *pcVar16 = *pcVar16 + bVar33;
        uVar60 = CONCAT44(pbVar14,pcVar16 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar16 = *pcVar16 + bVar33;
      bVar9 = bVar33 + 0xd;
      pbVar18 = (byte *)CONCAT31(uVar27,bVar9);
      *puVar48 = *puVar48 | (uint)pbVar14;
      if (-1 < (int)*puVar48) {
code_r0x00402678:
        *pbVar18 = *pbVar18 + (char)pbVar18;
        pbVar40 = (byte *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar40 >> 8) | bRam7d160243,(char)pbVar40)
                                  );
        pbVar19 = pbVar50;
code_r0x00402680:
        bVar9 = (byte)pbVar40;
        *pbVar40 = *pbVar40 + bVar9;
        uVar27 = (undefined3)((uint)pbVar40 >> 8);
        piVar25 = (int *)((int)pbVar19 * 2 + 0x400009a);
        *piVar25 = *piVar25 + CONCAT31(uVar27,bVar9 + 2) + (uint)(0xfd < bVar9);
        pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                   CONCAT11((char)((uint)pbVar46 >> 8) + *(char *)((int)pbVar14 * 5)
                                            ,(char)pbVar46));
        *(char *)((int)pbVar14 * 2) = *(char *)((int)pbVar14 * 2) + bVar9 + 2;
        pbVar50 = (byte *)CONCAT31(uVar27,bVar9 + 4);
        *pbVar19 = *pbVar19 - (bVar9 + 4);
code_r0x00402697:
        *pbVar50 = *pbVar50 + (char)pbVar50;
        pbVar14 = pbVar14 + -*puVar48;
        pbVar40 = pbVar50;
code_r0x0040269b:
        pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),
                                   (byte)pbVar46 | (byte)((uint)pbVar18 >> 8));
        uVar32 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar40 = uVar32;
        cVar30 = (char)pbVar40;
        *pbVar14 = *pbVar14 + cVar30;
        if ((POPCOUNT(*pbVar14) & 1U) == 0) {
          *pbVar40 = *pbVar40 + cVar30;
          pcVar16 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar30 + '\x13');
          pbVar40 = pbVar18;
          pbVar50 = pbVar19;
code_r0x004026a8:
          uVar27 = (undefined3)((uint)pcVar16 >> 8);
          bVar33 = (byte)pcVar16 + 2 + cRam001b15fe + (0xfd < (byte)pcVar16);
          bVar9 = *pbVar46;
          bVar8 = (byte)pbVar46;
          *pbVar46 = *pbVar46 + bVar8;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar27,bVar33) + (uint)CARRY1(bVar9,bVar8);
          iVar17 = CONCAT31(uVar27,bVar33 + 2) + 0x917d + (uint)(0xfd < bVar33);
          cVar30 = (char)iVar17;
          uVar27 = (undefined3)((uint)iVar17 >> 8);
          bVar9 = cVar30 + 0x3a;
          pbVar43 = (byte *)CONCAT31(uVar27,bVar9);
          *pbVar43 = *pbVar43 + bVar9;
          uVar45 = (undefined3)((uint)pbVar14 >> 8);
          bVar33 = (byte)pbVar14 | *pbVar14;
          uVar20 = CONCAT31(uVar27,cVar30 + '8');
          uVar15 = uVar20 + 0x1b00001b;
          pcVar16 = (char *)(uVar15 + (1 < bVar9) + *puVar48 +
                            (uint)(0xe4ffffe4 < uVar20 || CARRY4(uVar15,(uint)(1 < bVar9))));
          bVar9 = bVar33 + *pbVar40;
          pbVar14 = (byte *)CONCAT31(uVar45,bVar9);
          uVar27 = (undefined3)((uint)pcVar16 >> 8);
          cVar30 = (char)pcVar16;
          if (SCARRY1(bVar33,*pbVar40) != (char)bVar9 < '\0') {
            *pcVar16 = *pcVar16 + cVar30;
            pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '\x02');
            uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
            cVar47 = (char)((uint)pbVar46 >> 8) + pbVar46[-0x68];
            pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47,bVar8));
            *pcVar16 = *pcVar16 + cVar30 + '\x02';
            bVar33 = cVar30 + 0x2a;
            pbVar18 = (byte *)CONCAT31(uVar27,bVar33);
            *pbVar18 = *pbVar18 | bVar33;
            bVar9 = *pbVar46;
            cVar6 = (char)((uint)pbVar40 >> 8);
            *pbVar46 = *pbVar46 + cVar6;
            pbVar19 = pbVar50;
            if (SCARRY1(bVar9,cVar6) != (char)*pbVar46 < '\0') {
              *pbVar18 = *pbVar18 + bVar33;
              bVar9 = cVar30 + 0x2c;
              if ((POPCOUNT(bVar9) & 1U) == 0) {
                *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
                bVar33 = cVar30 + 0x59;
                pcVar16 = (char *)CONCAT31(uVar27,bVar33);
                *(char **)pbVar14 = pcVar16 + (uint)(0xd2 < bVar9) + *(int *)pbVar14;
                pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47 + pbVar46[-0x67],bVar8));
                *pcVar16 = *pcVar16 + bVar33;
                pbVar19 = (byte *)((CONCAT31(uVar27,cVar30 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar33));
                pbVar18 = pbVar40;
                uStack_28 = in_ES;
code_r0x00402700:
                *pbVar50 = *pbVar50 + (char)pbVar50;
                cVar30 = (char)pbVar50 + '\x02';
                pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar50 >> 8),cVar30);
                bVar56 = (POPCOUNT(cVar30) & 1U) == 0;
                pbVar50 = pbVar43;
code_r0x00402704:
                if (bVar56) {
                  *pbVar40 = *pbVar40 + (char)pbVar40;
                  cVar30 = (char)pbVar40 + '\x02';
                  pcVar16 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar30);
                  puVar13 = puVar48;
                  if ((POPCOUNT(cVar30) & 1U) == 0) {
code_r0x0040270c:
                    uVar54 = in_ES;
                    cVar30 = (char)pcVar16;
                    *pcVar16 = *pcVar16 + cVar30;
                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                    bVar9 = cVar30 + 0x6f;
                    piVar25 = (int *)CONCAT31(uVar27,bVar9);
                    iVar17 = *piVar25;
                    *(byte *)piVar25 = (char)*piVar25 + bVar9;
                    in_ES = uVar54;
                    pbVar40 = pbVar14;
                    if ((char)*piVar25 != '\0' &&
                        SCARRY1((char)iVar17,bVar9) == (char)*piVar25 < '\0') {
                      *(byte *)piVar25 = (char)*piVar25 + bVar9;
                      bVar33 = cVar30 + 0x9c;
                      piVar25 = (int *)CONCAT31(uVar27,bVar33);
                      puVar41 = puVar13 + (int)pbVar19 * 2;
                      uVar15 = *puVar41;
                      uVar20 = *puVar41;
                      *puVar41 = (uint)(pbVar14 + uVar20 + (0xd2 < bVar9));
                      *piVar25 = (*piVar25 - (int)piVar25) -
                                 (uint)(CARRY4(uVar15,(uint)pbVar14) ||
                                       CARRY4((uint)(pbVar14 + uVar20),(uint)(0xd2 < bVar9)));
                      uVar15 = *puVar13;
                      *(byte *)puVar13 = (byte)*puVar13 + bVar33;
                      pbVar40 = (byte *)CONCAT22((short)((uint)pbVar50 >> 0x10),uVar54);
                      if (!CARRY1((byte)uVar15,bVar33)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    pbVar50 = pbVar40;
                    uVar52 = uStack_28;
                    *(byte *)piVar25 = (char)*piVar25 + (byte)piVar25;
                    uVar27 = (undefined3)((uint)piVar25 >> 8);
                    bVar9 = (byte)piVar25 | *(byte *)((int)piVar25 + 0x400000d);
                    pcVar16 = (char *)CONCAT31(uVar27,bVar9);
                    if ((char)bVar9 < '\x01') {
                      bVar56 = pcVar16 < (char *)0x6fe1411;
                      pcVar16 = pcVar16 + -0x6fe1411;
                    }
                    else {
                      *pcVar16 = *pcVar16 + bVar9;
                      bVar8 = bVar9 + 0x28;
                      puVar41 = (uint *)CONCAT31(uVar27,bVar8);
                      *puVar41 = *puVar41 | (uint)puVar41;
                      bVar33 = *pbVar46;
                      cVar30 = (char)((uint)pbVar18 >> 8);
                      *pbVar46 = *pbVar46 + cVar30;
                      if (*pbVar46 == 0 || SCARRY1(bVar33,cVar30) != (char)*pbVar46 < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar41 = (char)*puVar41 + bVar8;
                      pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x55);
                      puVar41 = puVar13 + (int)pbVar19 * 2;
                      bVar56 = CARRY4(*puVar41,(uint)pbVar14) ||
                               CARRY4((uint)(pbVar14 + *puVar41),(uint)(0xd2 < bVar8));
                      *puVar41 = (uint)(pbVar14 + *puVar41 + (0xd2 < bVar8));
                      in_stack_ffffffd0 = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar27 = (undefined3)((uint)pcVar16 >> 8);
                      bVar9 = ((char)pcVar16 - *pcVar16) - bVar56;
                      puVar41 = (uint *)CONCAT31(uVar27,bVar9);
                      uVar15 = *puVar13;
                      *(byte *)puVar13 = (byte)*puVar13 + bVar9;
                      if (CARRY1((byte)uVar15,bVar9)) break;
                      pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),
                                                 (byte)pbVar46 | (byte)((uint)pbVar14 >> 8));
                      pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 2);
                      while( true ) {
                        uVar52 = (ushort)pbVar50;
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar30 = (char)pcVar16;
                        *pcVar16 = *pcVar16 + cVar30;
                        uVar27 = (undefined3)((uint)pcVar16 >> 8);
                        bVar9 = cVar30 + 2;
                        pcVar16 = (char *)CONCAT31(uVar27,bVar9);
                        if (SCARRY1(cVar30,'\x02') != (char)bVar9 < '\0') break;
                        *pcVar16 = *pcVar16 + bVar9;
                        cVar47 = (char)pbVar14;
                        *pbVar19 = *pbVar19 - cVar47;
                        *pbVar14 = *pbVar14 + (char)pbVar18;
                        bVar33 = (cVar30 + '\t') - *(char *)CONCAT31(uVar27,cVar30 + '\t');
                        pbVar40 = (byte *)CONCAT31(uVar27,bVar33);
                        bVar9 = *pbVar40;
                        *pbVar40 = *pbVar40 + bVar33;
                        pbVar43 = pbVar18 + 1;
                        cVar30 = bVar33 - CARRY1(bVar9,bVar33);
                        pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                        *pcVar16 = *pcVar16 + cVar30;
                        *pcVar16 = *pcVar16 + cVar30;
                        *pcVar16 = *pcVar16 + cVar30;
                        *pcVar16 = *pcVar16 + cVar30;
                        cVar6 = (char)((uint)pbVar43 >> 8);
                        pbVar18[2] = pbVar18[2] + cVar6;
                        *pcVar16 = *pcVar16 + cVar30;
                        pcVar16 = (char *)(*(int *)pbVar43 * 0x170000);
                        *pcVar16 = *pcVar16;
                        *pcVar16 = *pcVar16;
                        *pbVar43 = *pbVar43;
                        uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
                        cVar30 = (char)pbVar46;
                        bVar8 = (char)((uint)pbVar46 >> 8) + *(char *)((int)pbVar14 * 5);
                        pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(bVar8,cVar30));
                        pbVar46[(int)pcVar16] = pbVar46[(int)pcVar16];
                        *pcVar16 = *pcVar16 - cVar30;
                        *pbVar14 = *pbVar14 + (char)pbVar43;
                        uVar27 = (undefined3)((uint)pcVar16 >> 8);
                        bVar33 = -*pcVar16;
                        pbVar40 = (byte *)CONCAT31(uVar27,bVar33);
                        *pbVar46 = *pbVar46 + cVar47;
                        *pbVar14 = *pbVar14 ^ bVar33;
                        *pbVar14 = *pbVar14 + bVar33;
                        *pbVar40 = *pbVar40 + bVar33;
                        bVar9 = *pbVar40;
                        *pbVar40 = *pbVar40 + bVar33;
                        *(byte **)pbVar14 = pbVar14 + (uint)CARRY1(bVar9,bVar33) + *(int *)pbVar14;
                        bVar9 = *pbVar14;
                        *pbVar14 = *pbVar14 + bVar33;
                        if (SCARRY1(bVar9,bVar33) == (char)*pbVar14 < '\0') {
                          pcVar16 = (char *)((uint)pbVar40 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar16 = *pcVar16 + (char)pcVar16;
                          uStack_24 = uVar55;
                          uStack_28 = (ushort)uStack_20;
                        }
                        else {
                          *pbVar40 = *pbVar40 + bVar33;
                          cVar10 = bVar33 + 0x12;
                          pcVar16 = (char *)CONCAT31(uVar27,cVar10);
                          bVar9 = *pbVar46;
                          *pbVar46 = *pbVar46 + cVar10;
                          uStack_28 = uVar52;
                          if (SCARRY1(bVar9,cVar10) != (char)*pbVar46 < '\0') {
                            *pcVar16 = *pcVar16 + cVar10;
                            cVar10 = bVar33 + 0x24;
                            pcVar16 = (char *)CONCAT31(uVar27,cVar10);
                            *pcVar16 = *pcVar16 + cVar6;
                            pbVar50 = (byte *)CONCAT13(uStack_21,(uint3)uVar55);
                            *pcVar16 = *pcVar16 + cVar10;
                            bVar8 = bVar8 | unaff_EBP[-0x6e];
                            pcVar11 = (char *)CONCAT22(uVar36,CONCAT11(bVar8,cVar30));
                            *pcVar16 = *pcVar16 + cVar10;
                            cRam0000917d = cRam0000917d + cVar47;
                            bVar38 = bVar33 + 0x48;
                            pcVar11[-0x6e] = pcVar11[-0x6e] + bVar8;
                            *(char *)CONCAT31(uVar27,bVar38) =
                                 *(char *)CONCAT31(uVar27,bVar38) + bVar38;
                            bVar9 = bVar33 + 0x53 + *pbVar50;
                            cVar30 = bVar9 + (0xf4 < bVar38);
                            cVar30 = cVar30 + *(char *)CONCAT31(uVar27,cVar30) +
                                     (CARRY1(bVar33 + 0x53,*pbVar50) || CARRY1(bVar9,0xf4 < bVar38))
                            ;
                            pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                            *pcVar11 = *pcVar11 - (char)uVar55;
                            *pcVar16 = *pcVar16 + cVar30;
                            pbVar14 = pbVar14 + -*(int *)pbVar14;
                            *(char *)((int)pbVar14 * 5) = *(char *)((int)pbVar14 * 5) + bVar8;
                            pcVar16[(int)unaff_EBP] = pcVar16[(int)unaff_EBP] + cVar30;
                            *pcVar16 = *pcVar16 + cVar30;
                            bVar33 = (byte)(uVar55 >> 8) | *pbVar14;
                            uVar31 = (undefined1)uStack_20;
                            cVar6 = (char)((uint)uStack_20 >> 8) + *(char *)(uStack_20 + 0xf);
                            *pcVar16 = *pcVar16 + cVar30;
                            bVar9 = cVar30 + 0x2aU & *pbVar14;
                            iVar17 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar27,bVar9) =
                                 *(char *)CONCAT31(uVar27,bVar9) + bVar9;
                            pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
                            cVar6 = cVar6 + *(char *)(CONCAT22(uStack_20._2_2_,
                                                               CONCAT11(cVar6,uVar31)) + 0x10);
                            *pcVar16 = *pcVar16 + bVar9 + 0x2a;
                            bVar9 = bVar9 + 0x54 & *pbVar14;
                            iVar12 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar27,bVar9) =
                                 *(char *)CONCAT31(uVar27,bVar9) + bVar9;
                            pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
                            puVar42 = (uint *)CONCAT22(uStack_20._2_2_,
                                                       CONCAT11(cVar6 + *(char *)(CONCAT22(uStack_20
                                                  ._2_2_,CONCAT11(cVar6,uVar31)) + 0x11),uVar31));
                            *pcVar16 = *pcVar16 + bVar9 + 0x2a;
                            bVar9 = bVar9 + 0x54 & *pbVar14;
                            puVar48 = (uint *)(pbVar19 +
                                              *(int *)(unaff_EBP + 0x11) + iVar12 + iVar17);
                            *(char *)CONCAT31(uVar27,bVar9) =
                                 *(char *)CONCAT31(uVar27,bVar9) + bVar9;
                            pbVar40 = (byte *)CONCAT31(uVar27,bVar9 + 0x2a);
                            puVar41 = (uint *)CONCAT22((short)((uint)pbVar50 >> 0x10),
                                                       CONCAT11(bVar33 + *pbVar40,(char)uVar55));
                            uVar60 = CONCAT44(pbVar14,pbVar40 + (uint)CARRY1(bVar33,*pbVar40) +
                                                                *(int *)pbVar40);
                            uVar55 = uVar52;
                            goto code_r0x00402866;
                          }
                        }
                        cVar30 = (char)pcVar16;
                        uVar27 = (undefined3)((uint)pcVar16 >> 8);
                        cVar6 = cVar30 + '\x02';
                        piVar25 = (int *)CONCAT31(uVar27,cVar6);
                        pbVar18 = pbVar43;
                        in_ES = uVar52;
                        pbVar40 = pbVar14;
                        if (SCARRY1(cVar30,'\x02') != cVar6 < '\0') goto code_r0x00402724;
                        *(char *)piVar25 = (char)*piVar25 + cVar6;
                        pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '\n');
                        *(byte *)puVar13 = (byte)*puVar13 - cVar47;
                        *pbVar14 = *pbVar14 + (char)pbVar43;
                      }
                      pbVar40 = unaff_EBP + 0x6fe1411;
                      bVar56 = CARRY1(*pbVar40,bVar9);
                      *pbVar40 = *pbVar40 + bVar9;
                    }
                    goto code_r0x00402746;
                  }
                  pbVar46[(int)pbVar14] = pbVar46[(int)pbVar14] + cVar30;
                  pbVar40 = pbVar18;
                  pbVar50 = pbVar19;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar54 = 0x927c;
              in_stack_ffffffc8 = 0x40268f;
              uVar60 = func_0x02040000(in_CS,in_stack_ffffffd0,pbVar43);
              pbVar14 = (byte *)((ulonglong)uVar60 >> 0x20);
              *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
              pbVar18 = (byte *)CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '\x12');
              pbVar40 = extraout_ECX_00;
              in_CS = uVar54;
            }
            goto code_r0x00402680;
          }
          pbVar19 = unaff_EBP + -1;
          *pcVar16 = *pcVar16 + cVar30;
          pbVar14 = (byte *)CONCAT31(uVar45,bVar9 | *pbVar46);
          pbVar18 = (byte *)CONCAT31(uVar27,cVar30 + ':');
code_r0x00402677:
          puVar48 = (uint *)((int)puVar48 + -1);
          unaff_EBP = pbVar19;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar18 = *pbVar18 + bVar9;
      pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar46 >> 8) | unaff_EBP[-0x6b],
                                          (char)pbVar46));
      *pbVar18 = *pbVar18 + bVar9;
      cVar30 = bVar33 + 0xf;
      pcVar16 = (char *)CONCAT31(uVar27,cVar30);
      uStack_20 = CONCAT22(uStack_20._2_2_,uStack_24);
      if (SCARRY1(bVar9,'\x02') == cVar30 < '\0') {
        pcVar16 = pcVar16 + (0xfd < bVar9) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar16 = *pcVar16 + cVar30;
      cVar6 = bVar33 + 0x11;
      pbVar19 = (byte *)CONCAT31(uVar27,cVar6);
      uVar60 = CONCAT44(pbVar14,pbVar19);
      uStack_20 = CONCAT22(uStack_20._2_2_,uStack_24);
      pbVar18 = pbVar40;
      pbVar40 = pbVar50;
      if (SCARRY1(cVar30,'\x02') == cVar6 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar19 = *pbVar19 + (char)pbVar19;
      bVar9 = (char)pbVar19 + 2;
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar9);
      if ((POPCOUNT(bVar9) & 1U) == 0) {
        *pcVar16 = *pcVar16 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar50 = pbVar46 + (int)pbVar18;
      bVar56 = CARRY1(*pbVar50,bVar9);
      *pbVar50 = *pbVar50 + bVar9;
      pbVar19 = unaff_EBP;
      pbVar50 = pbVar40;
      uVar55 = uVar52;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar41 = (char)*puVar41 + (byte)puVar41;
  uVar27 = (undefined3)((uint)puVar41 >> 8);
  bVar9 = (byte)puVar41 | *(byte *)((int)puVar41 + 0x400000e);
  pcVar16 = (char *)CONCAT31(uVar27,bVar9);
  puVar48 = puVar13;
  if ('\0' < (char)bVar9) {
    *pcVar16 = *pcVar16 + bVar9;
    bVar9 = bVar9 + 0x28 | *(byte *)CONCAT31(uVar27,bVar9 + 0x28);
    *pbVar46 = *pbVar46 + (char)((uint)pbVar18 >> 8);
    puVar48 = puVar13 + 1;
    out(*puVar13,(short)pbVar14);
    *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
    pcVar16 = (char *)(uint)(bVar9 | *pbVar14);
    in_stack_ffffffd0 = unaff_EBP;
  }
  bVar9 = (byte)pcVar16 & 0x7b;
  bVar56 = (char)(bVar9 + 0x17) < '\0';
  uStack_28 = uVar54;
  if (SCARRY1(bVar9,'\x17') == bVar56) {
    pbVar43 = pbVar50;
    if (SCARRY1(bVar9,'\x17') != bVar56) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar6 = (char)pbVar50;
  *pbVar50 = *pbVar50 + cVar6;
  iVar29 = (int3)((uint)pbVar50 >> 8);
  cVar30 = cVar6 + '\x02';
  pbVar40 = (byte *)CONCAT31(iVar29,cVar30);
  bVar56 = (POPCOUNT(cVar30) & 1U) == 0;
  if (!bVar56) goto code_r0x00402704;
  *pbVar40 = *pbVar40 + cVar30;
  cVar6 = cVar6 + '\x04';
  pcVar16 = (char *)CONCAT31(iVar29,cVar6);
  if ((POPCOUNT(cVar6) & 1U) == 0) {
    *pcVar16 = *pcVar16 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar14 = (byte *)((int)iVar29 >> 0x17);
  puVar13 = puVar48;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar44 = (uint *)((ulonglong)uVar60 >> 0x20);
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    cVar30 = (char)puVar42 - (byte)*puVar13;
    iVar17 = CONCAT22((short)((uint)puVar42 >> 0x10),
                      CONCAT11((char)((uint)puVar42 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),cVar30) + 0x12),cVar30)
                     );
    *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
    uVar27 = (undefined3)((ulonglong)uVar60 >> 8);
    bVar9 = (char)uVar60 + 0x2aU & (byte)*puVar44;
    pcVar16 = (char *)CONCAT31(uVar27,bVar9);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x12));
    *pcVar16 = *pcVar16 + bVar9;
    puVar22 = (uint *)CONCAT31(uVar27,bVar9 + 0x2a);
    pbVar50 = (byte *)(uint)uVar55;
get_Value:
    cVar30 = *(char *)(iVar17 + 0x13);
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    uVar27 = (undefined3)((uint)puVar22 >> 8);
    bVar9 = (char)puVar22 + 0x2aU & (byte)*puVar44;
    pcVar16 = (char *)CONCAT31(uVar27,bVar9);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x13));
    *pcVar16 = *pcVar16 + bVar9;
    pbVar40 = (byte *)CONCAT31(uVar27,bVar9 + 0x2a);
    uVar15 = (uint)uVar55;
    bVar9 = (byte)((uint)puVar41 >> 8);
    bVar33 = bVar9 + *pbVar40;
    pbVar40 = pbVar40 + (uint)CARRY1(bVar9,*pbVar40) + *(int *)pbVar40;
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    puVar42 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar17 >> 0x10),
                                               CONCAT11((char)((uint)iVar17 >> 8) + cVar30,
                                                        (char)iVar17)) >> 8),
                               (char)iVar17 - (byte)*puVar13);
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11(bVar33 + *pbVar40,(char)puVar41));
    pbVar40 = pbVar40 + (uint)CARRY1(bVar33,*pbVar40) + *(int *)pbVar40;
code_r0x00402898:
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    bVar9 = (byte)puVar44;
    uVar36 = CONCAT11((char)((uint)puVar44 >> 8) - (byte)*puVar13,bVar9);
    pbVar46 = (byte *)CONCAT22((short)((uint)puVar44 >> 0x10),uVar36);
    pcVar16 = (char *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar42[-0x19],
                                        (char)puVar42));
    *pbVar40 = *pbVar40 + (char)pbVar40;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 + '\x03');
    puVar42 = puVar13;
    do {
      puVar13 = puVar42 + 1;
      out(*puVar42,uVar36);
      pcVar16 = pcVar16 + -1;
      bVar33 = (byte)pbVar40;
      *pbVar40 = *pbVar40 + bVar33;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | *pbVar46,(char)puVar41));
      *pbVar40 = *pbVar40 + bVar33;
      *pcVar16 = *pcVar16 + bVar9;
      *(byte *)((int)pbVar40 * 2) = *(byte *)((int)pbVar40 * 2) ^ bVar33;
      *pbVar40 = *pbVar40 + bVar33;
      *pbVar40 = *pbVar40 | bVar33;
      bVar56 = CARRY1((byte)*puVar41,bVar9);
      *(byte *)puVar41 = (byte)*puVar41 + bVar9;
      cVar30 = bVar33 + 10 + bVar56;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar30);
      puVar42 = puVar13;
    } while (bVar33 < 0xf6 && !CARRY1(bVar33 + 10,bVar56));
    *pbVar40 = *pbVar40 + cVar30;
    in_stack_ffffffc8 = CONCAT22((short)((uint)in_stack_ffffffc8 >> 0x10),uVar52);
    pcVar11 = (char *)((uint)pbVar40 | *puVar48);
    puVar42 = (uint *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                               CONCAT11((char)((uint)pcVar16 >> 8) + unaff_EBP[-100],(char)pcVar16))
    ;
    *pcVar11 = *pcVar11 + (char)pcVar11;
    bVar9 = (char)pcVar11 + 7;
    uVar60 = CONCAT44(pbVar46,CONCAT31((int3)((uint)pcVar11 >> 8),bVar9));
code_r0x004028c8:
    puVar44 = (uint *)((ulonglong)uVar60 >> 0x20);
  } while ((POPCOUNT(bVar9) & 1U) != 0);
  *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
  puVar22 = (uint *)CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '-');
  puVar13 = (uint *)((uint)puVar13 | *(uint *)((int)puVar44 + 0x3b));
  bVar56 = CARRY4(*puVar22,(uint)puVar22);
  uVar20 = *puVar22;
  *puVar22 = (uint)(*puVar22 + (int)puVar22);
  if (SCARRY4(uVar20,(int)puVar22)) {
    bVar56 = CARRY4(*puVar22,(uint)puVar22);
    bVar57 = SCARRY4(*puVar22,(int)puVar22);
    *puVar22 = (uint)(*puVar22 + (int)puVar22);
    bVar9 = POPCOUNT(*puVar22 & 0xff);
    if (bVar57) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + bVar56);
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    bVar56 = (POPCOUNT((byte)*puVar44) & 1U) == 0;
    if (bVar56) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar56) {
      iVar17 = CONCAT31((int3)((uint)puVar42 >> 8),(char)puVar42 - (byte)*puVar13);
      goto get_Value;
    }
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + 'r');
    pbVar50 = unaff_EBP;
code_r0x004028e2:
    uVar36 = (undefined2)((uint)in_stack_ffffffc8 >> 0x10);
    uVar20 = *puVar22;
    *puVar22 = (uint)(*puVar22 + (int)puVar22);
    if (SCARRY4(uVar20,(int)puVar22)) {
      if (*puVar22 == 0 || SCARRY4(uVar20,(int)puVar22) != (int)*puVar22 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar42 = (uint *)((int)puVar42 + -1);
    cVar30 = (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + cVar30;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) |
                                        *(byte *)((int)puVar41 + 0x16d7207),(char)puVar41));
    pbVar40 = (byte *)((int)puVar22 + 0x7d);
    bVar9 = *pbVar40;
    bVar8 = (byte)((uint)puVar44 >> 8);
    bVar33 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar8;
    uVar15 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar33,bVar8) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar40 < '\0') * 0x80 | (uint)(*pbVar40 == 0) * 0x40 |
             (uint)(bVar7 & 1) * 0x10 | (uint)((POPCOUNT(*pbVar40) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar9,bVar8);
    *(byte *)puVar22 = (byte)*puVar22 + cVar30;
    pbVar40 = (byte *)(CONCAT31((int3)((uint)puVar22 >> 8),cVar30 + '+') ^ *puVar48);
    if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar9 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar9;
    puVar22 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9 + 0x72);
    if (bVar9 < 0x8e && (byte)(bVar9 + 0x72) != '\0') {
      if (SCARRY1(bVar9,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar22 + 0x6f) = *(byte *)((int)puVar22 + 0x6f) + bVar8;
    }
code_r0x00402905:
    uVar60 = CONCAT44(puVar44,puVar22);
    puVar42 = (uint *)((int)puVar42 + -1);
    cVar30 = (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + cVar30;
    bVar9 = (byte)((uint)puVar41 >> 8) | (byte)*puVar41;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar9,(char)puVar41));
    uVar52 = (ushort)uVar15;
    if ((char)bVar9 < '\x01') {
      *(byte *)puVar22 = (byte)*puVar22 + cVar30;
      puVar48 = (uint *)((int)puVar48 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar22 = (byte)*puVar22 + cVar30;
    uVar15 = 0x40291c;
    uVar60 = func_0x7346291c();
    *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
    puVar41 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar60 >> 0x20));
    puStackY_54 = (uint *)CONCAT22(puStackY_54._2_2_,uVar52);
    uStackY_50 = puVar42;
    while( true ) {
      pcVar16 = (char *)((int)uVar60 * 2);
      *pcVar16 = *pcVar16 - (char)puVar41;
      uVar20 = *puVar42;
      cVar30 = (char)((uint)puVar41 >> 8);
      *(byte *)puVar42 = (byte)*puVar42 + cVar30;
      if (SCARRY1((byte)uVar20,cVar30) == (char)(byte)*puVar42 < '\0') {
        pbVar40 = (byte *)((int)puVar48 + (int)uVar60);
        *pbVar40 = *pbVar40 + (char)uVar60;
        bVar9 = *pbVar40;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar44 = (uint *)((ulonglong)uVar60 >> 0x20);
      cVar30 = (char)uVar60;
      *(char *)uVar60 = *(char *)uVar60 + cVar30;
      uVar27 = (undefined3)((ulonglong)uVar60 >> 8);
      bVar9 = cVar30 + 7;
      puVar22 = (uint *)CONCAT31(uVar27,bVar9);
      bVar33 = (byte)((ulonglong)uVar60 >> 0x28);
      if ((POPCOUNT(bVar9) & 1U) != 0) break;
      *(byte *)puVar22 = (byte)*puVar22 + bVar9;
      pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '3');
      uVar36 = (undefined2)((uint)puVar42 >> 0x10);
      uVar31 = SUB41(puVar42,0);
      bVar9 = (char)((uint)puVar42 >> 8) + *(byte *)((int)puVar13 + 0x16) + (0xd3 < bVar9);
      puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(bVar9,uVar31));
      *pcVar16 = *pcVar16 + cVar30 + '3';
      cVar6 = cVar30 + ':';
      puVar22 = (uint *)CONCAT31(uVar27,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        bVar9 = bVar9 | *(byte *)((int)puVar44 + 7);
        puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(bVar9,uVar31));
        bVar56 = (POPCOUNT(bVar9) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar22 = (byte)*puVar22 + cVar6;
      puVar22 = (uint *)(CONCAT31(uVar27,cVar30 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar40 = (byte *)((int)puVar22 + 0x72);
      bVar57 = SCARRY1(*pbVar40,bVar33);
      *pbVar40 = *pbVar40 + bVar33;
      bVar9 = POPCOUNT(*pbVar40);
code_r0x0040294c:
      if ((bVar9 & 1) == 0) {
        *(byte *)((int)puVar22 + 0x72) = *(byte *)((int)puVar22 + 0x72) + (char)((uint)puVar44 >> 8)
        ;
      }
      else if (bVar57) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar30 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_58 = (uint *)CONCAT22(puStackY_58._2_2_,uStack_24);
code_r0x00402957:
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      cVar30 = (char)puVar22 + '(';
      puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),cVar30);
      *(byte *)puVar22 = (byte)*puVar22 + cVar30;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar22,(char)puVar41)
                                );
      *(byte *)puVar22 = (byte)*puVar22 + cVar30;
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                 CONCAT11((byte)((uint)puVar44 >> 8) | (byte)puVar42[0x18],
                                          (char)puVar44));
      puVar13 = puStackY_58;
      puVar48 = puStackY_54;
code_r0x00402966:
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      bVar9 = (byte)((uint)puVar42 >> 8) | *(byte *)((int)puVar44 + 7);
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar9,(char)puVar42));
      if ((POPCOUNT(bVar9) & 1U) != 0) {
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + '~');
code_r0x00402971:
      uVar15 = (uint)uStack_24;
code_r0x00402972:
      uVar36 = (undefined2)((uint)in_stack_ffffffc8 >> 0x10);
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x00402974:
      bVar9 = 0xe9 < (byte)puVar22;
      in_stack_ffffffc8 = CONCAT22(uVar36,in_CS);
      in_CS = 0x2d0a;
      uVar60 = func_0x00006128(in_stack_ffffffc8);
      puVar41 = (uint *)uVar60;
      piVar25 = (int *)((int)((ulonglong)uVar60 >> 0x20) + -0x3d);
      *piVar25 = (int)((int)puVar13 + (uint)bVar9 + *piVar25);
      bVar56 = SCARRY4(*puVar41,(int)puVar41);
      *puVar41 = *puVar41 + (int)puVar41;
      uVar20 = *puVar41;
      puVar41 = extraout_ECX_02;
code_r0x00402982:
      bVar9 = POPCOUNT(uVar20 & 0xff);
      if (bVar56) {
        *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
        puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                   CONCAT11((byte)((uint)puVar41 >> 8) |
                                            *(byte *)((ulonglong)uVar60 >> 0x20),(char)puVar41));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar16 = (char *)((ulonglong)uVar60 >> 0x20);
      if ((bVar9 & 1) == 0) {
        *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
        *pcVar16 = *pcVar16 + (char)puVar41;
        uVar60 = CONCAT44(CONCAT22((short)((ulonglong)uVar60 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar60 >> 0x28) - pcVar16[0x1f],
                                            (char)((ulonglong)uVar60 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '('));
code_r0x00402991:
        puVar44 = (uint *)((ulonglong)uVar60 >> 0x20);
        pbVar40 = (byte *)uVar60;
        bVar9 = (byte)uVar60;
        bVar56 = CARRY1(bVar9,*pbVar40);
        puVar22 = (uint *)CONCAT31((int3)((ulonglong)uVar60 >> 8),bVar9 + *pbVar40);
        cVar30 = bVar9 + *pbVar40;
        if (SCARRY1(bVar9,*pbVar40)) goto code_r0x004029c4;
code_r0x00402995:
        puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                   CONCAT11(((char)((uint)puVar44 >> 8) -
                                            *(byte *)((int)puVar44 + 0x6b)) - bVar56,(char)puVar44))
        ;
        bVar9 = (byte)puVar22;
        bVar56 = CARRY1(bVar9,(byte)*puVar22);
        bVar57 = SCARRY1(bVar9,(byte)*puVar22);
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar9 + (byte)*puVar22);
        do {
          if (!bVar57) {
            puVar13 = (uint *)((int)puVar13 + (uint)bVar56 + *puVar22);
            pbVar40 = (byte *)((int)puVar22 + *puVar22);
            bVar33 = (byte)pbVar40;
            *pbVar40 = *pbVar40 + bVar33;
            *(byte *)puVar41 = (byte)*puVar41 + (char)puVar41;
            bVar9 = *pbVar40;
            *pbVar40 = *pbVar40 + bVar33;
            *puVar48 = (uint)((int)puVar42 + (uint)CARRY1(bVar9,bVar33) + *puVar48);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar41;
            uVar27 = (undefined3)((uint)pbVar40 >> 8);
            bVar33 = bVar33 | (byte)*puVar13;
            puVar22 = (uint *)CONCAT31(uVar27,bVar33);
            uStackY_50 = (uint *)CONCAT22(uStackY_50._2_2_,uStack_24);
            uVar1 = *puVar22;
            uVar20 = *puVar22;
            *puVar22 = (uint)(*puVar22 + (int)puVar22);
            if (SCARRY4(uVar20,(int)puVar22)) {
              *(byte *)puVar13 = (byte)*puVar13 - (char)puVar42;
              *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
              *(byte *)puVar48 = (byte)*puVar48 - (char)puVar42;
            }
            else {
              puStackY_54 = (uint *)CONCAT22(puStackY_54._2_2_,uVar52);
              uStack_24 = uVar52;
              if (CARRY4(uVar1,(uint)puVar22)) goto code_r0x00402971;
              bVar56 = CARRY1(bVar33,(byte)*puVar22);
              bVar57 = SCARRY1(bVar33,(byte)*puVar22);
              puVar22 = (uint *)CONCAT31(uVar27,bVar33 + (byte)*puVar22);
code_r0x004029be:
              if (!bVar57) {
                puStackY_54 = (uint *)CONCAT22(puStackY_54._2_2_,uVar52);
                *(byte *)((int)puVar44 + -0x37) =
                     (*(byte *)((int)puVar44 + -0x37) - (char)((uint)puVar44 >> 8)) - bVar56;
                cVar30 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar30;
                bVar9 = (byte)puVar22;
                bVar56 = CARRY1(bVar9,(byte)*puVar22);
                bVar57 = SCARRY1(bVar9,(byte)*puVar22);
                puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar9 + (byte)*puVar22);
                goto code_r0x004029c6;
              }
            }
            bVar9 = (byte)puVar41;
            bVar56 = CARRY1((byte)*puVar44,bVar9);
            bVar57 = SCARRY1((byte)*puVar44,bVar9);
            *(byte *)puVar44 = (byte)*puVar44 + bVar9;
            if (bVar56) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar57) {
            uVar52 = (ushort)pbVar50;
            goto code_r0x00402966;
          }
          uVar15 = (uint)uVar52;
          *(uint *)((int)puVar44 + -0x23) =
               (*(int *)((int)puVar44 + -0x23) - (int)puVar13) - (uint)bVar56;
          uVar20 = *puVar22;
          bVar33 = (byte)puVar22;
          uVar1 = *puVar22;
          uVar27 = (undefined3)((uint)puVar22 >> 8);
          bVar9 = bVar33 + (byte)*puVar22;
          puVar22 = (uint *)CONCAT31(uVar27,bVar9);
          if (SCARRY1(bVar33,(byte)uVar1)) goto code_r0x00402972;
          in_stack_ffffffc8 = CONCAT22((short)((uint)in_stack_ffffffc8 >> 0x10),uVar52);
          cVar30 = (char)puVar44;
          bVar8 = ((char)((uint)puVar44 >> 8) - *(byte *)((int)puVar44 + -0xf)) -
                  CARRY1(bVar33,(byte)uVar20);
          puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar8,cVar30));
          puVar49 = (uint *)CONCAT31(uVar27,bVar9 + (byte)*puVar22);
          bVar33 = (byte)puVar41;
          if (SCARRY1(bVar9,(byte)*puVar22)) {
            *(byte *)puVar44 = (byte)*puVar44 + bVar33;
            uVar60 = CONCAT44(puVar44,(int)puVar49 + -0x1c37211);
            pcVar16 = (char *)((int)puVar49 + -0x1c3720a);
            *pcVar16 = *pcVar16 + bVar8;
            bVar9 = POPCOUNT(*pcVar16);
            goto code_r0x00402984;
          }
          puVar13 = (uint *)((int)puVar13 +
                            (-(uint)CARRY1(bVar9,(byte)*puVar22) - *(int *)((int)puVar44 + 5)));
          bVar56 = SCARRY4((int)puVar49,*puVar49);
          uVar20 = (int)puVar49 + *puVar49;
          uVar60 = CONCAT44(puVar44,uVar20);
          if (bVar56) goto code_r0x00402982;
          bVar9 = (byte)uVar20 + 0x8e;
          uVar21 = CONCAT31((int3)(uVar20 >> 8),bVar9 - CARRY4((uint)puVar49,*puVar49));
          *puVar42 = (*puVar42 - uVar21) -
                     (uint)((byte)uVar20 < 0x72 || bVar9 < CARRY4((uint)puVar49,*puVar49));
          pbVar40 = (byte *)(uVar21 - 0x5e);
          bVar9 = *pbVar40;
          *pbVar40 = *pbVar40 + bVar8;
          uVar20 = (uint)CARRY1(bVar9,bVar8);
          uVar1 = uVar21 - 0x32d72;
          puVar22 = (uint *)(uVar1 - uVar20);
          if (SBORROW4(uVar21,0x32d72) != SBORROW4(uVar1,uVar20)) goto code_r0x00402992;
          uVar54 = uVar55;
          if (uVar21 < 0x32d72 || uVar1 < uVar20) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar22 >> 8);
            *(byte *)puVar44 = (byte)*puVar44 + bVar33;
            puVar49 = puVar13 + 1;
            out(*puVar13,CONCAT11(bVar8,cVar30));
            *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
            goto code_r0x00402a3e;
          }
          bVar56 = CARRY4((uint)puVar22,*puVar22);
          bVar57 = SCARRY4((int)puVar22,*puVar22);
          puVar22 = (uint *)((int)puVar22 + *puVar22);
          if (!bVar57) {
            uStackY_50 = (uint *)CONCAT22(uStackY_50._2_2_,uVar52);
            *(byte *)puVar13 = (byte)*puVar13 + bVar56;
            bVar9 = (byte)puVar22;
            *(byte *)((int)puVar44 + (int)unaff_EBP) =
                 *(byte *)((int)puVar44 + (int)unaff_EBP) + bVar9;
            *(byte *)puVar42 = (byte)*puVar42 + cVar30;
            *(byte *)puVar42 = (byte)*puVar42 ^ bVar9;
            bVar34 = (byte)((uint)puVar41 >> 8);
            *(byte *)puVar13 = (byte)*puVar13 + bVar34;
            *(byte *)puVar22 = (byte)*puVar22 + bVar9;
            pbVar40 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),bVar9 | (byte)*puVar22);
            *(byte *)puVar41 = (byte)*puVar41 + cVar30;
            bVar38 = *pbVar40;
            uVar36 = (undefined2)((uint)puVar41 >> 0x10);
            puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(bVar34 + bVar38,bVar33));
            pbVar40 = pbVar40 + (uint)CARRY1(bVar34,*pbVar40) + *(int *)pbVar40;
            *(byte *)puVar44 = (byte)*puVar44 + bVar33;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar50 = pbVar40 + 0x73;
            bVar9 = *pbVar50;
            *pbVar50 = *pbVar50 + bVar8;
            uVar27 = (undefined3)((uint)pbVar40 >> 8);
            bVar9 = (char)pbVar40 + CARRY1(bVar9,bVar8);
            pcVar16 = (char *)CONCAT31(uVar27,bVar9);
            *(byte *)puVar44 = (byte)*puVar44 + bVar33;
            if ((POPCOUNT((byte)*puVar44) & 1U) == 0) {
              uStack_24 = uVar52;
            }
            puVar51 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x17));
            *pcVar16 = *pcVar16 + bVar9;
            cVar30 = bVar9 + 2;
            puVar22 = (uint *)CONCAT31(uVar27,cVar30);
            if (bVar9 < 0xfe) {
              *puVar22 = (uint)(*puVar22 + (int)puVar22);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar22 = (byte)*puVar22 + cVar30;
            uVar15 = *puVar44;
            puVar49 = (uint *)((int)puVar13 + puVar42[0x19]);
            *(byte *)puVar22 = (byte)*puVar22 + cVar30;
            puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(bVar34 + bVar38 | (byte)*puVar22,
                                                       bVar33 | (byte)uVar15));
            puVar48 = puVar51;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar9;
    pbVar40 = (byte *)((int)puVar22 + 0x73);
    bVar56 = CARRY1(*pbVar40,bVar33);
    *pbVar40 = *pbVar40 + bVar33;
  } while( true );
code_r0x00402992:
  pbVar40 = (byte *)((int)puVar22 + 0x2a);
  bVar56 = CARRY1(*pbVar40,bVar8);
  *pbVar40 = *pbVar40 + bVar8;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar22) = *(byte *)(in_GS_OFFSET + (int)puVar22) + (char)puVar22;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | *(byte *)((int)puVar48 + 0x66),
                                      (char)puVar41));
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x00402a3e:
  uVar27 = (undefined3)((uint)puVar22 >> 8);
  bVar9 = (byte)puVar22 | (byte)*puVar49;
  pcVar16 = (char *)CONCAT31(uVar27,bVar9);
  if ((char)bVar9 < '\0') {
    *pcVar16 = *pcVar16 + bVar9;
    cVar30 = bVar9 + 2;
    piVar25 = (int *)CONCAT31(uVar27,cVar30);
    if ((POPCOUNT(cVar30) & 1U) == 0) {
      *(char *)piVar25 = (char)*piVar25 + cVar30;
      bVar9 = bVar9 + 0x71;
      pcVar11 = (char *)CONCAT31(uVar27,bVar9);
      pcVar16 = (char *)segment(uVar54,(short)puVar42 + (short)puVar49);
      *pcVar16 = *pcVar16 + bVar9;
      uVar15 = puVar48[0x1a];
      *pcVar11 = *pcVar11 + bVar9;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | (byte)uVar15 |
                                          *(byte *)((int)puVar48 + 0x69),(char)puVar41));
      *pcVar11 = *pcVar11 + bVar9;
      bVar9 = bVar9 | (byte)*puVar44;
      pcVar16 = (char *)CONCAT31(uVar27,bVar9);
      if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar13 = puVar49 + (uint)bVar58 * -2 + 1;
    out(*puVar49,(short)puVar44);
  }
  else {
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar42[6],(char)puVar42)
                              );
code_r0x00402a5d:
    *pcVar16 = *pcVar16 + (char)pcVar16;
    piVar25 = (int *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + 'o');
    puVar13 = puVar49;
  }
code_r0x00402a61:
  pcVar16 = (char *)segment(uVar54,(short)puVar42 + (short)puVar13);
  *pcVar16 = *pcVar16 + (char)piVar25;
  cVar30 = (char)puVar41;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)puVar48[0x1a],cVar30));
  *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
  uVar36 = CONCAT11((byte)((uint)puVar44 >> 8) | *(byte *)((int)puVar44 + 0x65),(char)puVar44);
  puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),uVar36);
  piVar23 = (int *)((int)piVar25 + *piVar25);
  puVar49 = puVar13;
  puVar51 = puVar48;
  uVar53 = uVar52;
  if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402ae3;
  *(byte *)puVar44 = (byte)*puVar44 + cVar30;
  puVar49 = puVar13 + (uint)bVar58 * -2 + 1;
  out(*puVar13,uVar36);
code_r0x00402a75:
  bVar9 = (byte)((uint)puVar41 >> 8) | (byte)*puVar44;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar9,(char)puVar41));
  piVar25 = (int *)(uint)(byte)*puVar42;
  *(byte *)puVar49 = (byte)*puVar49 - bVar9;
  puVar51 = puVar48;
code_r0x00402a7f:
  *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
  out(*puVar49,(short)puVar44);
  bVar9 = in((short)puVar44);
  *(byte *)puVar51 = bVar9;
  *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar44,(char)puVar41));
  iVar17 = *piVar25;
  cVar30 = in(1);
  puVar22 = (uint *)CONCAT31((int3)((uint)((int)piVar25 + *piVar25) >> 8),cVar30);
  *(char *)puVar22 = (char)*puVar22 + cVar30;
  puVar22 = (uint *)((uint)puVar22 | *puVar22);
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar44;
  puVar49 = (uint *)((int)puVar49 + (((uint)bVar58 * -8 + 4) - iVar17));
  puVar51 = (uint *)((int)puVar51 + (uint)bVar58 * -2 + 1);
  uStack_24 = uVar52;
  while( true ) {
    bVar9 = (byte)puVar22 | (byte)*puVar44;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar9);
    puVar48 = puVar51;
    if ((POPCOUNT(bVar9) & 1U) != 0) break;
    *(byte *)puVar22 = (byte)*puVar22 + bVar9;
code_r0x00402a9b:
    uVar27 = (undefined3)((uint)puVar22 >> 8);
    cVar30 = (char)puVar22 + '\r';
    piVar23 = (int *)CONCAT31(uVar27,cVar30);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar23;
    *(char *)piVar23 = (char)*piVar23 + cVar30;
    *(byte *)(puVar49 + -0xc800000) = (byte)puVar49[-0xc800000] + (char)puVar44;
    *(char *)piVar23 = (char)*piVar23 + cVar30;
    *(byte *)puVar44 = (byte)*puVar44 + cVar30;
    cVar6 = (char)puVar41;
    if ((POPCOUNT((byte)*puVar44) & 1U) != 0) {
      *(byte *)puVar44 = (byte)*puVar44 + cVar6;
      puVar13 = puVar49 + (uint)bVar58 * -2 + 1;
      out(*puVar49,(short)puVar44);
      piVar25 = (int *)((longlong)*piVar23 * 0x7b020a00);
      *(char *)piVar25 =
           (char)*piVar25 - ((longlong)(int)piVar25 != (longlong)*piVar23 * 0x7b020a00);
      pbVar50 = (byte *)((int)puVar48 + (int)unaff_EBP * 2);
      *pbVar50 = *pbVar50;
      goto code_r0x00402a61;
    }
    *(char *)piVar23 = (char)*piVar23 + cVar30;
    puVar22 = (uint *)CONCAT31(uVar27,(char)puVar22 + ':');
    puVar13 = (uint *)((uint)puVar49 | *(uint *)((int)puVar44 + -0x79));
    iVar17 = (int)puVar22 + *puVar22;
    if (SCARRY4((int)puVar22,*puVar22)) {
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar13[(int)puVar42],
                                          (char)puVar42));
      *(char *)((int)puVar44 * 2) = *(char *)((int)puVar44 * 2) + (char)iVar17;
      puVar51 = puVar48;
      goto code_r0x00402b33;
    }
    uVar27 = (undefined3)((uint)iVar17 >> 8);
    cVar30 = (char)iVar17 + CARRY4((uint)puVar22,*puVar22);
    piVar25 = (int *)CONCAT31(uVar27,cVar30);
    *(byte *)puVar44 = (byte)*puVar44 + cVar6;
    bVar56 = (POPCOUNT((byte)*puVar44) & 1U) != 0;
    if ((bVar56) && (bVar56)) goto code_r0x00402a61;
    *(char *)piVar25 = (char)*piVar25 + cVar30;
    cVar47 = cVar30 + '(';
    pcVar16 = (char *)CONCAT31(uVar27,cVar47);
    puVar51 = puVar48 + (uint)bVar58 * -2 + 1;
    uVar15 = in((short)puVar44);
    *puVar48 = uVar15;
    *pcVar16 = *pcVar16 + cVar47;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | bRama07b0222,cVar6));
    *pcVar16 = *pcVar16 + cVar47;
    pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '>');
code_r0x00402ad2:
    out(*puVar13,(short)puVar44);
    puVar49 = (uint *)((int)(puVar13 + (uint)bVar58 * -2 + 1) + (uint)bVar58 * -2 + 1);
    out((byte)puVar13[(uint)bVar58 * -2 + 1],(short)puVar44);
    bVar9 = (byte)pcVar16;
    *pcVar16 = *pcVar16 + bVar9;
    puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(byte)puVar42 | (byte)*puVar51);
    bVar7 = 9 < (bVar9 & 0xf) | bVar7;
    uVar27 = (undefined3)((uint)pcVar16 >> 8);
    bVar9 = bVar9 + bVar7 * -6;
    puVar44 = (uint *)((uint)puVar44 ^ *puVar44);
    cVar30 = bVar9 + (0x9f < bVar9 | bVar7 * (bVar9 < 6)) * -0x60 + (byte)*puVar44;
    piVar25 = (int *)CONCAT31(uVar27,cVar30);
    if ((POPCOUNT(cVar30) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar25 = (char)*piVar25 + cVar30;
    piVar23 = (int *)CONCAT31(uVar27,cVar30 + '\x17');
    uVar53 = uVar52;
code_r0x00402ae3:
    out(*puVar49,(short)puVar44);
    puVar13 = puVar49 + (uint)bVar58 * -2 + 1 + (uint)bVar58 * -2 + 1;
    out(puVar49[(uint)bVar58 * -2 + 1],(short)puVar44);
    *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
code_r0x00402ae7:
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | unaff_EBP[-0x60],(char)puVar42)
                              );
    cVar30 = (char)piVar23;
    *(char *)piVar23 = (char)*piVar23 + cVar30;
    uVar27 = (undefined3)((uint)piVar23 >> 8);
    bVar9 = cVar30 + 2;
    puVar22 = (uint *)CONCAT31(uVar27,bVar9);
    uVar52 = uVar53;
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      *(byte *)puVar22 = (byte)*puVar22 + bVar9;
      cVar30 = cVar30 + '}';
      puVar22 = (uint *)CONCAT31(uVar27,cVar30);
      *(byte *)puVar22 = ((byte)*puVar22 - cVar30) - (0x84 < bVar9);
      pbVar50 = (byte *)((int)puVar44 + (int)puVar22);
      *pbVar50 = *pbVar50 + cVar30;
      bVar9 = POPCOUNT(*pbVar50);
      puVar49 = puVar13;
code_r0x00402af9:
      uVar52 = uVar53;
      puVar48 = puVar51;
      if ((bVar9 & 1) == 0) {
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        bVar9 = (byte)puVar41;
        *(byte *)puVar44 = (byte)*puVar44 + bVar9;
        uStackY_50 = (uint *)CONCAT22(uStackY_50._2_2_,uStack_24);
        puVar13 = puVar49 + (uint)bVar58 * -2 + 1;
        out(*puVar49,(short)puVar44);
        uVar15 = *puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + bVar9;
        iVar17 = CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + 'o') +
                 *(int *)((int)puVar44 * 2) + (uint)CARRY1((byte)uVar15,bVar9);
        pcVar16 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '(');
        while( true ) {
          uVar15 = *puVar44;
          bVar33 = (byte)puVar41;
          *(byte *)puVar44 = (byte)*puVar44 + bVar33;
          pcVar16 = pcVar16 + (uint)CARRY1((byte)uVar15,bVar33) + iRam73280512;
          bVar9 = (byte)pcVar16;
          *pcVar16 = *pcVar16 + bVar9;
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                     CONCAT11((byte)((uint)puVar41 >> 8) | bRam7d160243,bVar33));
          bVar58 = ((uint)uStackY_50 & 0x400) != 0;
          bVar7 = ((uint)uStackY_50 & 0x10) != 0;
          *pcVar16 = *pcVar16 + bVar9;
          uVar27 = (undefined3)((uint)pcVar16 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar27,bVar9 + 2) + (uint)(0xfd < bVar9);
          cVar30 = bVar9 + 4;
          if (SCARRY1(bVar9 + 2,'\x02') != cVar30 < '\0') break;
          *(char *)CONCAT31(uVar27,cVar30) = *(char *)CONCAT31(uVar27,cVar30) + cVar30;
          iVar17 = CONCAT31(uVar27,bVar9 + 0x16);
code_r0x00402b33:
          piVar23 = (int *)(iVar17 + 0xe2802);
          *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar41 >> 8);
          uVar53 = uVar52;
          uVar52 = uStack_24;
          while( true ) {
            bVar33 = (byte)puVar42 | (byte)((uint)puVar41 >> 8);
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar33);
            *piVar23 = (int)(*piVar23 + (int)piVar23);
            cVar30 = (char)piVar23;
            *(byte *)puVar44 = (byte)*puVar44 + cVar30;
            if ((POPCOUNT((byte)*puVar44) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar23 = (char)*piVar23 + cVar30;
            uVar15 = CONCAT31((int3)((uint)piVar23 >> 8),cVar30 + '\x13');
            puVar22 = (uint *)(uVar15 + 0x19061224 + (uint)(0x1f9edfd < uVar15));
            uVar1 = (uint)(0xe4ffffdd < uVar15 + 0xfe061202 ||
                          CARRY4(uVar15 + 0x19061224,(uint)(0x1f9edfd < uVar15)));
            uVar20 = *puVar13;
            uVar15 = *puVar13;
            *puVar13 = (uint)((byte *)(uVar15 + (int)puVar22) + uVar1);
            bVar9 = POPCOUNT(*puVar13 & 0xff);
            puVar49 = puVar13;
            if ((SCARRY4(uVar20,(int)puVar22) != SCARRY4((int)(uVar15 + (int)puVar22),uVar1)) ==
                (int)*puVar13 < 0) goto code_r0x00402af9;
            bVar9 = (byte)puVar22;
            *(byte *)puVar22 = (byte)*puVar22 + bVar9;
            iVar17 = CONCAT31((int3)((uint)puVar22 >> 8),bVar9 + 2) + 0x9d7d + (uint)(0xfd < bVar9);
            bVar9 = (byte)puVar44 | (byte)*puVar44;
            uVar15 = *puVar42;
            *(byte *)puVar42 = (byte)*puVar42 + bVar33;
            pcVar16 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x12') + 0x228b26
                               + *puVar51 + (uint)CARRY1((byte)uVar15,bVar33));
            cVar30 = bVar9 + (byte)*puVar41;
            puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),cVar30);
            if (SCARRY1(bVar9,(byte)*puVar41) == cVar30 < '\0') break;
            *pcVar16 = *pcVar16 + (char)pcVar16;
            cVar30 = (char)pcVar16 + '\x02';
            pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar30);
            bVar9 = POPCOUNT(cVar30);
            uVar53 = uVar52;
code_r0x00402b7a:
            puVar48 = puVar13;
            if ((bVar9 & 1) != 0) break;
            while( true ) {
              cVar30 = (char)pcVar16;
              *pcVar16 = *pcVar16 + cVar30;
              uVar27 = (undefined3)((uint)pcVar16 >> 8);
              pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '\x13');
              *(byte *)puVar41 = (byte)*puVar41 | (byte)puVar44;
              *(byte *)puVar51 = (byte)*puVar51 | (byte)puVar44;
              *puVar44 = (uint)(pcVar16 + *puVar44);
              uVar36 = (undefined2)((uint)puVar42 >> 0x10);
              uVar31 = SUB41(puVar42,0);
              cVar6 = (char)((uint)puVar42 >> 8) + *(byte *)((int)puVar42 + -0x5f);
              puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(cVar6,uVar31));
              *pcVar16 = *pcVar16 + cVar30 + '\x13';
              piVar23 = (int *)CONCAT31(uVar27,cVar30 + -0x7a);
              uVar15 = *puVar44;
              *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar15,(char)puVar41) == (char)(byte)*puVar44 < '\0') break;
              *(char *)piVar23 = (char)*piVar23 + cVar30 + -0x7a;
              cVar47 = cVar30 + -0x78;
              piVar23 = (int *)CONCAT31(uVar27,cVar47);
              uVar4 = uVar53;
              if ((POPCOUNT(cVar47) & 1U) != 0) break;
              *(char *)piVar23 = (char)*piVar23 + cVar47;
              pcVar16 = (char *)CONCAT31(uVar27,cVar30 + -0x65);
              *puVar41 = *puVar41 | (uint)puVar44;
              *puVar51 = *puVar51 | (uint)puVar44;
              pbVar50 = (byte *)((int)puVar41 + -1);
              cVar6 = cVar6 + *(byte *)((int)puVar42 + -0x5e);
              puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(cVar6,uVar31));
              *pcVar16 = *pcVar16 + cVar30 + -0x65;
              bVar9 = cVar30 + 10;
              puVar22 = (uint *)CONCAT31(uVar27,bVar9);
              bVar33 = (byte)pbVar50;
              *(byte *)puVar44 = (byte)*puVar44 + bVar33;
              puVar13 = puVar48 + (uint)bVar58 * -2 + 1;
              out(*puVar48,(short)puVar44);
              uVar15 = *puVar44;
              *(byte *)puVar44 = (byte)*puVar44 + bVar33;
              uVar21 = (uint)CARRY1((byte)uVar15,bVar33);
              uVar20 = *puVar44;
              uVar15 = *puVar44;
              pbVar40 = pbVar50 + uVar15 + uVar21;
              uVar5 = *puVar44;
              cRam130a0000 = cRam130a0000 - cVar6;
              uVar1 = *puVar44;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar22);
              *(byte *)puVar22 = (char)*puVar22 + bVar9;
              puVar41 = (uint *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar40 >> 8) | bRam7d170243,
                                                  (char)pbVar40 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar50,uVar20) ||
                                                  CARRY4((uint)(pbVar50 + uVar15),uVar21))));
              bVar58 = (uStack_24 & 0x400) != 0;
              bVar7 = (uStack_24 & 0x10) != 0;
              *(byte *)puVar22 = (char)*puVar22 + bVar9;
              bVar56 = 0xfd < bVar9;
              pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '\f');
              puVar44 = (uint *)((uint)puVar44 | uVar1);
code_r0x00402bd1:
              uVar15 = *puVar42;
              uVar20 = *puVar42;
              *puVar42 = (uint)((byte *)(uVar20 + (int)puVar41) + bVar56);
              bVar9 = POPCOUNT(*puVar42 & 0xff);
              uVar53 = uStack_24;
              if ((SCARRY4(uVar15,(int)puVar41) !=
                  SCARRY4((int)(uVar20 + (int)puVar41),(uint)bVar56)) == (int)*puVar42 < 0)
              goto code_r0x00402b7a;
              cVar30 = (char)pcVar16;
              *pcVar16 = *pcVar16 + cVar30;
              pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar30 + '\x02');
              if (SCARRY1(cVar30,'\x02') == (char)(cVar30 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar16 = *pcVar16 + (char)pcVar16;
                pcVar16 = (char *)(CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x12') |
                                  *puVar44);
                *(byte *)puVar51 = (byte)*puVar51 - (char)puVar41;
                *pcVar16 = *pcVar16 + (char)pcVar16;
                puVar44 = (uint *)((int)puVar44 - *puVar13);
                bVar9 = (byte)puVar42 | (byte)((uint)puVar41 >> 8);
                cVar30 = *pcVar16;
                uVar27 = (undefined3)((uint)pcVar16 >> 8);
                pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                *pcVar16 = *pcVar16 + cVar30;
                pcVar11 = (char *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                           CONCAT11((char)((uint)puVar42 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),
                                                                       bVar9) + -0x5b),bVar9));
                *pcVar16 = *pcVar16 + cVar30;
                bVar56 = false;
                pcVar16 = (char *)(CONCAT31(uVar27,cVar30 + '\x13') | *puVar44);
                do {
                  bVar33 = (byte)puVar41;
                  bVar9 = bVar33 + (byte)puVar13[(int)puVar51 * 2];
                  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar9 + bVar56);
                  uVar15 = (uint)(CARRY1(bVar33,(byte)puVar13[(int)puVar51 * 2]) ||
                                 CARRY1(bVar9,bVar56));
                  pcVar24 = pcVar16 + 0x1b000019 + uVar15;
                  piVar25 = (int *)((int)puVar51 * 2 + 0x40000a5);
                  *piVar25 = (int)((int)puVar41 +
                                  (uint)((char *)0xe4ffffe6 < pcVar16 ||
                                        CARRY4((uint)(pcVar16 + 0x1b000019),uVar15)) + *piVar25);
                  puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 + cRam00009d7d
                                            );
                  uVar27 = (undefined3)((uint)pcVar24 >> 8);
                  bVar9 = (char)pcVar24 + 0x12;
                  bVar7 = 9 < (bVar9 & 0xf) | bVar7;
                  uVar15 = CONCAT31(uVar27,bVar9 + bVar7 * -6) & 0xffffff0f;
                  pcVar16 = (char *)CONCAT22((short)(uVar15 >> 0x10),
                                             CONCAT11((char)((uint)pcVar24 >> 8) - bVar7,
                                                      (char)uVar15));
                  pbVar50 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar27,bVar9));
                  while( true ) {
                    *pcVar16 = *pcVar16 + (char)pcVar16;
                    puVar48 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                                               (byte)puVar44 | (byte)*puVar44);
                    puVar51 = (uint *)((uint)puVar51 | (uint)puVar13);
                    uVar15 = (uint)pcVar11 | (uint)puVar13;
                    unaff_EBP = pbVar50 + 1;
                    uStackY_50 = (uint *)CONCAT22(uStackY_50._2_2_,uVar52);
                    cVar6 = (char)(pcVar16 + 0x1b000019);
                    uVar27 = (undefined3)((uint)(pcVar16 + 0x1b000019) >> 8);
                    cVar30 = cVar6 + -0x13;
                    pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                    uVar36 = (undefined2)(uVar15 >> 0x10);
                    cVar47 = (char)(uVar15 >> 8) + *(char *)(uVar15 - 0x5e);
                    puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(cVar47,(byte)uVar15));
                    *pcVar16 = *pcVar16 + cVar30;
                    pcVar16 = (char *)(CONCAT31(uVar27,cVar6 + '\x19') | *puVar48);
                    bVar9 = (byte)pcVar16;
                    if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0) {
                      pbVar50 = (byte *)((int)puVar48 + (int)pcVar16);
                      bVar56 = CARRY1(*pbVar50,bVar9);
                      *pbVar50 = *pbVar50 + bVar9;
                      puVar44 = puVar48;
                      goto code_r0x00402bd1;
                    }
                    *pcVar16 = *pcVar16 + bVar9;
                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                    pcVar11 = (char *)CONCAT31(uVar27,bVar9 + 0x6f);
                    puVar44 = (uint *)((int)puVar48 + 1);
                    *pcVar11 = *pcVar11 + bVar9 + 0x6f;
                    bVar33 = (byte)uVar15 | (byte)((uint)pcVar16 >> 8);
                    pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x5c);
                    cVar47 = cVar47 + *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),bVar33) + -0x5f)
                    ;
                    puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(cVar47,bVar33));
                    *pcVar16 = *pcVar16 + bVar9 + 0x5c;
                    pcVar16 = (char *)(CONCAT31(uVar27,bVar9 + 0x88) | *puVar44);
                    if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0) {
                      *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar41 >> 8);
                      uStackY_50 = (uint *)((uint)uStackY_50._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar16 = *pcVar16 + (char)pcVar16;
                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                    cVar30 = (char)pcVar16 + 'o';
                    puVar44 = (uint *)((int)puVar48 + 2);
                    *(char *)CONCAT31(uVar27,cVar30) = *(char *)CONCAT31(uVar27,cVar30) + cVar30;
                    pcVar11 = (char *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               bVar33 | (byte)((uint)pcVar16 >> 8));
                    pcVar16 = (char *)(CONCAT31(uVar27,cVar30) | 2);
                    pbVar50[-0x62] = pbVar50[-0x62] + 1;
                    bVar9 = (byte)pcVar16;
                    *pcVar16 = *pcVar16 + bVar9;
                    bVar56 = 0xfd < bVar9;
                    cVar30 = bVar9 + 2;
                    pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                    uVar54 = uVar52;
                    if (SCARRY1(bVar9,'\x02') != cVar30 < '\0') break;
                    *pcVar16 = *pcVar16 + cVar30;
                    bVar33 = bVar9 + 10;
                    pcVar16 = (char *)CONCAT31(uVar27,bVar33);
                    *pcVar16 = *pcVar16 - cVar47;
                    cVar6 = (char)puVar41;
                    *(byte *)puVar44 = *(byte *)puVar44 + cVar6;
                    pbVar50[-0x62] = pbVar50[-0x62] + 1;
                    *pcVar16 = *pcVar16 + bVar33;
                    cVar30 = bVar9 + 0xc;
                    pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                    if (SCARRY1(bVar33,'\x02') == cVar30 < '\0') {
                      *pcVar16 = *pcVar16 + cVar30;
                      *(byte *)puVar41 = (byte)*puVar41 - cVar47;
                      *(byte *)puVar44 = *(byte *)puVar44 + cVar6;
                      cVar30 = (bVar9 + 0x13) - (byte)puVar41[0x13];
                      pcVar16 = (char *)CONCAT31(uVar27,cVar30);
                      *pcVar16 = *pcVar16 + cVar30;
                      pcVar24 = (char *)CONCAT31(uVar27,cVar30 + *pcVar16);
                      *pcVar24 = *pcVar24 + cVar30 + *pcVar16;
                      pcVar24 = pcVar24 + *puVar41;
                      *pcVar24 = *pcVar24 + (char)pcVar24;
                      LOCK();
                      pcVar16 = *(char **)pcVar24;
                      *(char **)pcVar24 = pcVar24;
                      UNLOCK();
                      *pcVar16 = *pcVar16 + (char)pcVar16;
                      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)*puVar41);
                      *pbVar40 = *pbVar40 + (byte)*puVar41;
                      goto code_r0x00402c8d;
                    }
                    puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               cVar6 + *pcVar11 + (0xfd < bVar33));
                    *(byte *)puVar51 = (byte)*puVar51 - cVar47;
                    pbVar50 = unaff_EBP;
                  }
                } while( true );
              }
              puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                         CONCAT11((char)((uint)puVar42 >> 8) +
                                                  *(byte *)((int)puVar42 + -99),(char)puVar42));
              puVar48 = puVar13;
            }
            *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
            puVar44 = (uint *)((int)puVar44 - *puVar48);
            puVar13 = puVar48;
            uVar53 = uVar52;
            uVar52 = uVar4;
          }
          *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
          pcVar16 = pcVar16 + -0x7d160243;
        }
        pcVar16 = (char *)CONCAT31(uVar27,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar41;
    uVar15 = *puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
    *puVar51 = (uint)((int)puVar44 + (uint)CARRY1((byte)uVar15,(byte)puVar22) + *puVar51);
    puVar49 = puVar13;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar10 = (char)puVar41;
      cVar35 = (char)((uint)puVar41 >> 8) + (char)((uint)pbVar40 >> 8);
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(cVar35,cVar10));
      cVar30 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar30;
      pcVar16 = (char *)((int)pbVar40 * 2 + 0x1a10000);
      cVar47 = (char)((uint)pcVar11 >> 8);
      *pcVar16 = *pcVar16 + cVar47;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
      pbVar40[-0x47ffffff] = pbVar40[-0x47ffffff] + cVar47;
      *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
      bVar33 = (byte)puVar44;
      *(byte *)puVar51 = (byte)*puVar51 + bVar33;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + bVar33;
      *pbVar40 = *pbVar40 + cVar30;
      *puVar13 = (uint)(*puVar13 + (int)puVar13);
      uVar36 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar47 = cVar47 + (byte)puVar13[(int)pcVar11];
      pcVar16 = (char *)CONCAT22(uVar36,CONCAT11(cVar47,(char)pcVar11));
      pcVar16[(int)pbVar40] = pcVar16[(int)pbVar40] + cVar30;
      *(byte *)puVar44 = *(byte *)puVar44 - cVar47;
      *(byte *)puVar44 = *(byte *)puVar44 + cVar10;
      uVar27 = (undefined3)((uint)pbVar40 >> 8);
      bVar9 = cVar30 - *pbVar40;
      *pcVar16 = *pcVar16 + bVar33;
      *(byte *)puVar44 = *(byte *)puVar44 ^ bVar9;
      *(byte *)puVar44 = *(byte *)puVar44 + bVar9;
      *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
      uVar15 = *puVar41;
      *(byte *)puVar41 = (byte)*puVar41 + bVar33;
      cVar6 = bVar9 + *(char *)CONCAT31(uVar27,bVar9) + CARRY1((byte)uVar15,bVar33);
      pcVar11 = (char *)CONCAT22(uVar36,CONCAT11(cVar47 + pbVar50[-0x60],(char)pcVar11));
      *(char *)CONCAT31(uVar27,cVar6) = *(char *)CONCAT31(uVar27,cVar6) + cVar6;
      cVar47 = cVar6 + '\x12';
      pbVar40 = (byte *)CONCAT31(uVar27,cVar47);
      cVar30 = *pcVar11;
      *pcVar11 = *pcVar11 + cVar47;
      if (SCARRY1(cVar30,cVar47) != *pcVar11 < '\0') break;
code_r0x00402c8d:
      cVar30 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
      *(byte *)puVar44 = *(byte *)puVar44 + cVar30;
      *pbVar40 = *pbVar40 + cVar30;
    }
    *pbVar40 = *pbVar40 + cVar47;
    pbVar40 = (byte *)CONCAT31(uVar27,cVar6 + '$');
    *pbVar40 = *pbVar40 + cVar35;
    bVar9 = *(byte *)puVar44;
    *(byte *)puVar44 = *(byte *)puVar44 + cVar10;
    uVar53 = uVar52;
    uVar54 = uVar55;
  } while (SCARRY1(bVar9,cVar10) == (char)*(byte *)puVar44 < '\0');
  do {
    cVar30 = (char)pbVar40;
    *pbVar40 = *pbVar40 + cVar30;
    uVar27 = (undefined3)((uint)pbVar40 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar44;
    bVar33 = cVar30 + 0x24;
    cVar47 = (char)((uint)pcVar11 >> 8);
    pcVar11[-0x62] = pcVar11[-0x62] + cVar47;
    *(char *)CONCAT31(uVar27,bVar33) = *(char *)CONCAT31(uVar27,bVar33) + bVar33;
    bVar9 = cVar30 + 0x2fU + (byte)*puVar41;
    cVar6 = bVar9 + (0xf4 < bVar33);
    cVar30 = cVar6 + *(char *)CONCAT31(uVar27,cVar6) +
             (CARRY1(cVar30 + 0x2fU,(byte)*puVar41) || CARRY1(bVar9,0xf4 < bVar33));
    pcVar16 = (char *)CONCAT31(uVar27,cVar30);
    *pcVar16 = *pcVar16 - (char)puVar44;
    *pcVar16 = *pcVar16 + cVar30;
    pcVar24 = (char *)((int)puVar44 - *puVar44);
    *(byte *)(puVar13 + (int)pcVar11) = (byte)puVar13[(int)pcVar11] + cVar47;
    pcVar16[(int)unaff_EBP] = pcVar16[(int)unaff_EBP] + cVar30;
    *pcVar24 = *pcVar24 + (char)puVar41;
    pcVar16 = (char *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                               CONCAT11((char)((uint)pbVar40 >> 8) - *pcVar24,cVar30));
    uVar15 = *puVar51;
    *pcVar16 = *pcVar16 - (char)((uint)pcVar24 >> 8);
    *pcVar16 = *pcVar16 + cVar30;
    uStackY_50 = (uint *)CONCAT22(uStackY_50._2_2_,uVar53);
    pbVar50 = (byte *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                               CONCAT11(cVar47 - (byte)*puVar13,(char)pcVar11));
    unaff_EBP = unaff_EBP + *(int *)(pbVar50 + (int)puVar41);
    puVar48 = (uint *)CONCAT31((int3)((uint)pcVar24 >> 8),(char)pcVar24 + (byte)uVar15);
    while( true ) {
      puVar44 = puVar48;
      uVar36 = (undefined2)((uint)pbVar50 >> 0x10);
      bVar8 = (char)((uint)pbVar50 >> 8) + pbVar50[0x18];
      *pcVar16 = *pcVar16 + (char)pcVar16;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + 'o');
      cVar30 = (char)puVar41;
      *(byte *)puVar44 = (byte)*puVar44 + cVar30;
      uVar15 = *puVar13;
      bVar7 = (byte)((uint)puVar41 >> 8);
      bVar9 = *pbVar40;
      pbVar40 = pbVar40 + (uint)CARRY1(bVar7,*pbVar40) + *(int *)pbVar40;
      *(byte *)puVar44 = (byte)*puVar44 + cVar30;
      cVar6 = ((char)pbVar50 - (byte)uVar15) - (byte)*puVar13;
      bVar33 = *(byte *)((int)puVar51 + 0x1a);
      *pbVar40 = *pbVar40 + (char)pbVar40;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11(bVar7 + bVar9 + bVar33 | (byte)*puVar44,cVar30));
      pbVar40 = pbVar40 + *puVar44;
      if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) break;
      *pbVar40 = *pbVar40 + (char)pbVar40;
      bVar9 = (char)pbVar40 + 0x6f;
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9);
      pcVar11 = (char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar8,(char)pbVar50)) >> 8),cVar6)
                        + -1);
      *pcVar16 = *pcVar16 + bVar9;
      *pcVar16 = *pcVar16 + bVar9;
      *pcVar11 = *pcVar11 + (byte)puVar44;
      *(byte *)((int)pcVar16 * 2) = *(byte *)((int)pcVar16 * 2) ^ bVar9;
      uVar3 = *(undefined6 *)pcVar16;
      uVar53 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar16 = (char *)uVar3;
      *pcVar16 = *pcVar16 + (char)uVar3;
      *(byte *)puVar13 = (byte)*puVar13 + (char)uVar3;
      pcVar16 = (char *)((uint)pcVar16 | 0x73110008);
      bVar8 = (byte)((uint)pcVar11 >> 8);
      *(byte *)puVar51 = (byte)*puVar51 - bVar8;
      *(byte *)puVar44 = (byte)*puVar44 + cVar30;
      puVar48 = puVar13 + (uint)bVar58 * -2 + 1;
      out(*puVar13,(short)puVar44);
      *pcVar16 = *pcVar16;
      cVar30 = (char)pcVar16;
      *pcVar16 = *pcVar16 + cVar30;
      bVar9 = unaff_EBP[-0x5a];
      uVar36 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar6 = (char)pcVar11;
      *pcVar16 = *pcVar16 + cVar30;
      cVar30 = cVar30 + '\x02';
      uVar15 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar30);
      puVar41 = (uint *)(uVar15 | 0x73110000);
      puVar13 = puVar48 + (uint)bVar58 * -2 + 1;
      out(*puVar48,(short)puVar44);
      *(byte *)puVar41 = (byte)*puVar41;
      bVar7 = (byte)puVar44 | (byte)*puVar51;
      puVar48 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar7);
      *(byte *)puVar41 = (byte)*puVar41 + cVar30;
      pcVar16 = (char *)(uVar15 | 0x7b1f1609);
      bVar58 = (uVar54 & 0x400) != 0;
      *(uint *)((int)puVar51 + -0x7d) = *(uint *)((int)puVar51 + -0x7d) | (uint)unaff_EBP;
      bVar33 = (byte)pcVar16;
      *pcVar16 = *pcVar16 + bVar33;
      bVar8 = bVar8 | bVar9 | *(byte *)((int)puVar13 + 0x19);
      pbVar50 = (byte *)CONCAT22(uVar36,CONCAT11(bVar8,cVar6));
      *pcVar16 = *pcVar16 + bVar33;
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      puVar13[(int)puVar51 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar33) + puVar13[(int)puVar51 * 2]);
      bVar9 = bVar33 + 0x2d ^ *(byte *)CONCAT31(uVar27,bVar33 + 0x2d);
      pcVar16 = (char *)CONCAT31(uVar27,bVar9);
      uVar15 = *puVar13;
      *(byte *)puVar13 = (byte)*puVar13 + bVar9;
      uVar54 = uVar53;
      if (CARRY1((byte)uVar15,bVar9)) {
        *pcVar16 = *pcVar16 + bVar9;
        bVar9 = bVar9 | pcVar16[0x4000019];
        pcVar16 = (char *)CONCAT31(uVar27,bVar9);
        if ('\0' < (char)bVar9) {
          *pcVar16 = *pcVar16 + bVar9;
          piVar25 = (int *)CONCAT31(uVar27,bVar9 + 0x28);
          *piVar25 = (int)piVar25 + (uint)(0xd7 < bVar9) + *piVar25;
          bVar38 = (byte)((uint6)uVar3 >> 8);
          *pbVar50 = *pbVar50 + bVar38;
          uVar37 = CONCAT11((byte)((uint)puVar44 >> 8) | bVar8,bVar7);
          puVar48 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),uVar37);
          uStackY_50 = (uint *)CONCAT22(uStackY_50._2_2_,uVar53);
          bVar7 = in(uVar37);
          pbVar40 = (byte *)CONCAT31(uVar27,bVar7);
          bVar9 = *pbVar40;
          bVar56 = SCARRY1(*pbVar40,bVar7);
          *pbVar40 = *pbVar40 + bVar7;
          bVar33 = *pbVar40;
          puVar42 = puVar13;
          uStack_24 = uVar53;
          if (!CARRY1(bVar9,bVar7)) goto code_r0x00402e19;
          *pbVar40 = *pbVar40 + bVar7;
          bVar38 = bVar38 | *pbVar40;
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar38,cVar30));
          pcVar16 = (char *)CONCAT31(uVar27,bVar7 + *pbVar40);
          *pbVar50 = *pbVar50 + bVar38;
        }
        uVar27 = (undefined3)((uint)pcVar16 >> 8);
        bVar33 = (byte)pcVar16 | (byte)*puVar48;
        pbVar40 = (byte *)CONCAT31(uVar27,bVar33);
        puVar42 = puVar13 + (uint)bVar58 * -2 + 1;
        out(*puVar13,(short)puVar48);
        LOCK();
        bVar9 = *pbVar40;
        *pbVar40 = bVar33;
        UNLOCK();
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
        piVar25 = (int *)(CONCAT31(uVar27,bVar9) + -0x1b7e07);
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
        iVar17 = (int)puVar41 - *(int *)pbVar50;
        bVar9 = *(byte *)((int)puVar51 + -0x7a);
        uVar37 = (undefined2)((uint)iVar17 >> 0x10);
        *(char *)piVar25 = *(char *)piVar25 + (char)piVar25;
        bVar33 = (char)((uint)iVar17 >> 8) + bVar9 | *(byte *)((int)puVar51 + 0x17);
        *(char *)piVar25 = *(char *)piVar25 + (char)piVar25;
        uVar27 = (undefined3)(CONCAT22(uVar37,CONCAT11(bVar33,(byte)iVar17)) >> 8);
        bVar9 = (byte)iVar17 | *pbVar50;
        puVar41 = (uint *)CONCAT31(uVar27,bVar9);
        pbVar40 = (byte *)((int)piVar25 + *piVar25);
        puVar13 = puVar42;
        if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402e0a;
        *(byte *)puVar41 = (byte)*puVar41 + bVar9;
        *(byte **)pbVar50 = (byte *)(*(int *)pbVar50 + (int)puVar48);
        piVar25 = (int *)CONCAT31(uVar27,bVar9 + 0x27);
        puVar41 = (uint *)CONCAT22(uVar37,CONCAT11(bVar33 + *(byte *)((int)puVar51 + -0x79),bVar9));
        *(byte *)piVar25 = (char)*piVar25 + bVar9 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar11 = (char *)CONCAT22(uVar36,CONCAT11(bVar8 | unaff_EBP[-0x62],cVar6));
  } while( true );
code_r0x00402dff:
  pbVar40 = (byte *)CONCAT22((short)((uint)piVar25 >> 0x10),
                             CONCAT11((byte)((uint)piVar25 >> 8) |
                                      *(byte *)((int)puVar48 + 0x2170411),(byte)piVar25));
  puVar13 = puVar42 + (uint)bVar58 * -2 + 1;
  out(*puVar42,(short)puVar48);
  *pbVar40 = (byte)piVar25;
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar40;
  *pbVar40 = *pbVar40 - cVar6;
  *pbVar40 = *pbVar40 + (char)pbVar40;
  bVar56 = false;
  bVar33 = (byte)((uint)puVar41 >> 8) | bRam052b0603;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar33,(char)puVar41));
  puVar42 = puVar13;
code_r0x00402e19:
  if (bVar33 == 0 || bVar56 != (char)bVar33 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar40;
  *pbVar40 = *pbVar40 + cRam89280411;
  piVar25 = (int *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                            CONCAT11((byte)((uint)pbVar40 >> 8) |
                                     *(byte *)((int)puVar48 + 0x7190411),cRam89280411));
  *(char *)piVar25 = (char)*piVar25 + cRam89280411;
  cVar30 = (char)puVar41;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar48,cVar30));
  puVar42 = (uint *)((int)puVar42 + *piVar25);
  pbVar40 = (byte *)((int)piVar25 + *piVar25);
  bVar33 = (byte)pbVar40;
  *pbVar40 = *pbVar40 + bVar33;
  *(byte *)puVar42 = (byte)*puVar42 + cVar30;
  bVar9 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar33;
  *(byte **)pbVar40 = unaff_EBP + (uint)CARRY1(bVar9,bVar33) + *(int *)pbVar40;
  piVar25 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),*pbVar40);
  *(byte *)puVar48 = (byte)*puVar48 + cVar30;
  puVar13 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(byte)puVar48 | (byte)*puVar48);
  pbVar40 = (byte *)((int)puVar13 + -0x43);
  *pbVar40 = *pbVar40 + (char)((uint)puVar48 >> 8);
  puVar48 = puVar13;
  puVar13 = puVar51;
  uVar54 = uVar52;
code_r0x00402e42:
  uVar52 = uStack_24;
  puVar51 = puVar13;
  uStack_24 = uVar52;
  if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402e6e;
  iVar17 = *(int *)((int)piVar25 + *piVar25);
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
  piVar25 = (int *)(iVar17 + -0x8c6f);
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | *(byte *)((int)puVar48 + -0x3f),
                                      (char)puVar48));
  pbVar46 = (byte *)((int)piVar25 + *piVar25);
  pbVar40 = pbVar46;
  puVar51 = uStackY_50;
  if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar46 = *pbVar46 + (char)pbVar46;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar48,(char)puVar41));
  puVar13 = puVar42 + (uint)bVar58 * -2 + 1;
  out(*puVar42,(short)puVar48);
  puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(char)puVar48 + (byte)*puVar51);
  puVar42 = puVar13 + (uint)bVar58 * -2 + 1;
  out(*puVar13,(short)puVar48);
  uVar54 = uVar52;
  uStack_24 = uVar53;
code_r0x00402e6e:
  uVar52 = uVar54;
  uVar27 = (undefined3)((uint)puVar48 >> 8);
  cVar30 = (char)puVar48 + (byte)*puVar51;
  puVar13 = puVar42 + (uint)bVar58 * -2 + 1;
  out(*puVar42,(short)CONCAT31(uVar27,cVar30));
  puVar48 = (uint *)CONCAT31(uVar27,cVar30 + (byte)*puVar51);
  puVar42 = puVar13 + (uint)bVar58 * -2 + 1;
  out(*puVar13,(short)puVar48);
  pbVar40 = (byte *)0x0;
  puVar13 = puVar51;
code_r0x00402e81:
  puVar51 = puVar13;
  bVar33 = (char)pbVar40 - *pbVar40;
  iVar17 = CONCAT31((int3)((uint)pbVar40 >> 8),bVar33);
  *pbVar50 = *pbVar50 + (char)puVar48;
  pbVar46 = (byte *)(iVar17 * 2);
  *pbVar46 = *pbVar46 ^ bVar33;
  pbVar46 = (byte *)(int)(short)iVar17;
  *pbVar46 = *pbVar46 + bVar33;
  *(byte *)puVar51 = (byte)*puVar51 + (byte)puVar41;
  bVar9 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar33;
  *(byte **)(pbVar50 + -0x73) =
       (byte *)((int)puVar42 + (uint)CARRY1(bVar9,bVar33) + *(int *)(pbVar50 + -0x73));
  *pbVar46 = *pbVar46 + bVar33;
  bVar9 = (byte)puVar41 | (byte)*puVar48;
  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar9);
  puVar13 = puVar42;
  if ((char)bVar9 < '\x01') goto code_r0x00402eb4;
  *pbVar46 = *pbVar46 + bVar33;
  pbVar40 = (byte *)CONCAT31((int3)(char)((uint)pbVar40 >> 8),bVar33 + 0x2d);
  puVar42[(int)puVar51 * 2] =
       (uint)((int)puVar48 + (uint)(0xd2 < bVar33) + puVar42[(int)puVar51 * 2]);
  pbStackY_6c = (byte *)CONCAT22(pbStackY_6c._2_2_,uVar53);
  do {
    uVar15 = *puVar42;
    bVar9 = (byte)pbVar40;
    *(byte *)puVar42 = (byte)*puVar42 + bVar9;
    if (!CARRY1((byte)uVar15,bVar9)) break;
    *pbVar40 = *pbVar40 + bVar9;
    bVar9 = bVar9 | pbVar40[0x400001a];
    pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9);
    if ((char)bVar9 < '\x01') {
code_r0x00402ecc:
      *pbVar46 = *pbVar46 + (byte)pbVar46;
      uVar27 = (undefined3)((uint)pbVar46 >> 8);
      bVar9 = (byte)pbVar46 | pbVar46[0x400001b];
      pcVar16 = (char *)CONCAT31(uVar27,bVar9);
      if ((char)bVar9 < '\x01') {
        uVar15 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar41;
        *(char *)((int)pcVar16 * 2) =
             *(char *)((int)pcVar16 * 2) - CARRY1((byte)uVar15,(byte)puVar41);
        bVar56 = 0x81 < bVar9;
        bVar9 = bVar9 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar46 = *pbVar46 + bVar9;
      puVar13 = puVar42;
code_r0x00402eb4:
      uVar27 = (undefined3)((uint)pbVar46 >> 8);
      bVar9 = (char)pbVar46 + 0x6f;
      pcVar16 = (char *)CONCAT31(uVar27,bVar9);
      *(byte **)pcVar16 = pbStackY_6c;
      uVar15 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
      pbStackY_6c = (byte *)CONCAT22(pbStackY_6c._2_2_,uVar53);
      uVar55 = uVar53;
      if ((byte)*puVar48 != 0 && SCARRY1((byte)uVar15,(char)puVar41) == (char)(byte)*puVar48 < '\0')
      {
        *pcVar16 = *pcVar16 + bVar9;
        bVar33 = (char)pbVar46 + 0x9c;
        pbVar46 = (byte *)CONCAT31(uVar27,bVar33);
        puVar13[(int)puVar51 * 2] =
             (uint)((int)puVar48 + (uint)(0xd2 < bVar9) + puVar13[(int)puVar51 * 2]);
        pbStackY_6c = (byte *)CONCAT22(pbStackY_6c._2_2_,uVar53);
        uVar15 = *puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + bVar33;
        puVar42 = puVar13;
        if (CARRY1((byte)uVar15,bVar33)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar42 = puVar13 + (uint)bVar58 * -2 + 1;
      out(*puVar13,(short)puVar48);
    }
    cVar30 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar30;
    uVar27 = (undefined3)((uint)pcVar16 >> 8);
    bVar9 = cVar30 + 0x6f;
    pcVar16 = (char *)CONCAT31(uVar27,bVar9);
    *(byte **)pcVar16 = pbStackY_6c;
    uVar15 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar41;
    pbStackY_6c = (byte *)CONCAT22(pbStackY_6c._2_2_,uVar53);
    *(byte *)(puVar42 + 7) = ((byte)puVar42[7] - bVar8) - CARRY1((byte)uVar15,(byte)puVar41);
    *pcVar16 = *pcVar16 + bVar9;
    bVar33 = cVar30 + 0x9c;
    pcVar16 = (char *)CONCAT31(uVar27,bVar33);
    puVar42[(int)puVar51 * 2] =
         (uint)((int)puVar48 + (uint)(0xd2 < bVar9) + puVar42[(int)puVar51 * 2]);
    uVar15 = *puVar42;
    *(byte *)puVar42 = (byte)*puVar42 + bVar33;
    if (!CARRY1((byte)uVar15,bVar33)) goto code_r0x00402e7e;
    *pcVar16 = *pcVar16 + bVar33;
    bVar33 = bVar33 | pcVar16[0x400001c];
    pbVar40 = (byte *)CONCAT31(uVar27,bVar33);
    uStack_24 = uVar53;
    if ((char)bVar33 < '\x01') goto code_r0x00402f16;
    *pbVar40 = *pbVar40 + bVar33;
    pcVar16 = (char *)CONCAT31(uVar27,bVar33 + 0x6f);
    while( true ) {
      *(byte **)pcVar16 = pbStackY_6c;
      uVar15 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar41;
      *(uint *)((int)puVar42 + 0x1d) =
           (*(int *)((int)puVar42 + 0x1d) - (int)puVar51) - (uint)CARRY1((byte)uVar15,(byte)puVar41)
      ;
      bVar9 = (byte)pcVar16;
      *pcVar16 = *pcVar16 + bVar9;
      bVar33 = bVar9 + 0x2d;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar33);
      puVar42[(int)puVar51 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar9) + puVar42[(int)puVar51 * 2]);
      pbStackY_6c = (byte *)CONCAT22((short)((uint)pbStackY_6c >> 0x10),uVar53);
      uVar15 = *puVar42;
      *(byte *)puVar42 = (byte)*puVar42 + bVar33;
      if (!CARRY1((byte)uVar15,bVar33)) break;
      *pbVar40 = *pbVar40 + bVar33;
code_r0x00402f16:
      bVar9 = (byte)pbVar40 | pbVar40[0x400001d];
      puVar13 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9);
      pbVar40 = unaff_EBP;
      if ((char)bVar9 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar40;
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        uVar27 = (undefined3)((uint)puVar13 >> 8);
        cVar30 = (char)puVar13 + 'o';
        puVar44 = (uint *)CONCAT31(uVar27,cVar30);
        *puVar44 = (uint)pbStackY_6c;
        cVar47 = (char)puVar41;
        *(byte *)puVar48 = (byte)*puVar48 + cVar47;
        pbStackY_6c = (byte *)CONCAT22(pbStackY_6c._2_2_,uVar53);
        bVar9 = (byte)((uint)puVar48 >> 8);
        bVar56 = bVar9 < (byte)*puVar42;
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                   CONCAT11(bVar9 - (byte)*puVar42,(char)puVar48));
        if (bVar56) break;
        bVar56 = CARRY4((uint)puVar44,*puVar44);
        puVar13 = (uint *)((int)puVar44 + *puVar44);
        if (!SCARRY4((int)puVar44,*puVar44)) {
          bVar56 = CARRY4((uint)unaff_EBP,*puVar13);
          unaff_EBP = unaff_EBP + *puVar13;
        }
        *puVar13 = (*puVar13 - (int)puVar13) - (uint)bVar56;
        *(byte *)puVar48 = (byte)*puVar48 + cVar47;
        puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                   CONCAT11((char)((uint)puVar41 >> 8) + (byte)*puVar48,
                                            cVar47 - (byte)*puVar48));
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
code_r0x00402f3b:
        cVar47 = (char)puVar48;
        *pbVar50 = *pbVar50 + cVar47;
        bVar9 = (byte)puVar13;
        *(byte *)((int)puVar13 * 2) = *(byte *)((int)puVar13 * 2) ^ bVar9;
        *(byte *)puVar13 = (byte)*puVar13 + bVar9;
        *(byte *)puVar13 = (byte)*puVar13 + cVar47;
        uVar15 = *puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + bVar9;
        *puVar48 = (uint)((int)puVar13 + (uint)CARRY1((byte)uVar15,bVar9) + *puVar48);
        pcVar16 = (char *)((uint)puVar13 | *puVar51);
        uVar27 = (undefined3)((uint)pcVar16 >> 8);
        cVar30 = (char)pcVar16 + *pcVar16;
        pcVar16 = (char *)CONCAT31(uVar27,cVar30);
        *pcVar16 = *pcVar16 + cVar30;
        cVar30 = cVar30 + *pcVar16;
        piVar25 = (int *)CONCAT31(uVar27,cVar30);
        *(char *)piVar25 = (char)*piVar25 + cVar30;
        iVar17 = LocalDescriptorTableRegister();
        *piVar25 = iVar17;
        bVar9 = *pbVar50;
        bVar34 = (byte)((uint)puVar41 >> 8);
        *pbVar50 = *pbVar50 + bVar34;
        iVar17 = *piVar25;
        uVar37 = (undefined2)((uint)puVar41 >> 0x10);
        bVar38 = (byte)puVar41;
        *(byte *)puVar42 = (byte)*puVar42 + cVar30;
        puVar13 = puVar42 + (uint)bVar58 * -2 + 1;
        out(*puVar42,(short)puVar48);
        *(byte *)puVar13 = (byte)*puVar13 + cVar30;
        bVar33 = *pbVar50;
        *(byte *)puVar48 = (byte)*puVar48 - bVar8;
        *(byte *)puVar13 = (byte)*puVar13 + cVar30;
        puVar44 = puVar13 + (uint)bVar58 * -2 + 1;
        out(*puVar13,(short)puVar48);
        *(byte *)puVar44 = (byte)*puVar44 + cVar30;
        bVar7 = *pbVar50;
        *(uint *)((int)puVar48 + -0x23) = *(uint *)((int)puVar48 + -0x23) & (uint)puVar44;
        puVar26 = (ushort *)((int)piVar25 + *piVar25);
        if (!SCARRY4((int)piVar25,*piVar25)) {
          *puVar26 = uVar55;
        }
        *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
        uVar39 = CONCAT11((char)((uint)puVar48 >> 8) + *(byte *)((int)puVar48 + -0x15),cVar47);
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),uVar39);
        puVar13 = (uint *)((int)puVar26 + *(int *)puVar26);
        if (!SCARRY4((int)puVar26,*(int *)puVar26)) {
          *(ushort *)puVar13 = uVar55;
        }
        cVar30 = (char)puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + cVar30;
        cVar10 = ((bVar34 - (char)iVar17) - CARRY1(bVar9,bVar34) | bVar33 | bVar7) + (byte)*puVar13;
        puVar41 = (uint *)CONCAT22(uVar37,CONCAT11(cVar10,bVar38));
        uVar15 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + bVar38;
        if (CARRY1((byte)uVar15,bVar38)) {
          *(byte *)puVar13 = (byte)*puVar13 + cVar30;
          bVar9 = *(byte *)((int)puVar48 + 6);
          *(byte *)puVar48 = (byte)*puVar48 + bVar38;
          bVar33 = (cVar10 - (byte)*puVar44) + cRam14730307;
          *(byte *)puVar13 = (byte)*puVar13 + cVar30;
          bVar9 = bVar8 | bVar9 | *(byte *)((int)puVar48 + 0x2a);
          uVar15 = *puVar13;
          pbVar50 = (byte *)((int)puVar13 + (uint)CARRY1(bVar33,(byte)*puVar13) + *puVar13);
          *(byte *)puVar48 = (byte)*puVar48 + bVar38;
          cVar30 = cVar6 - (byte)*puVar44;
          cVar6 = bVar9 + *(char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar9,cVar6)) >> 8),
                                             cVar30) + 0x1e);
          *pbVar50 = *pbVar50 + (char)pbVar50;
          uVar27 = (undefined3)((uint)pbVar50 >> 8);
          bVar9 = (char)pbVar50 + 0x2aU & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
          pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
          cVar6 = cVar6 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar6,cVar30)) + 0x1f);
          *pcVar16 = *pcVar16 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
          pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
          cVar6 = cVar6 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar6,cVar30)) + 0x20);
          *pcVar16 = *pcVar16 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
          pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
          cVar6 = cVar6 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar6,cVar30)) + 0x21);
          *pcVar16 = *pcVar16 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
          pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
          cVar6 = cVar6 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar6,cVar30)) + 0x22);
          *pcVar16 = *pcVar16 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
          pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
          bVar33 = bVar33 + (byte)uVar15 + *pcVar16;
          uVar32 = CONCAT22(uVar37,CONCAT11(bVar33,bVar38));
          cVar6 = cVar6 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar6,cVar30)) + 0x25);
          *pcVar16 = *pcVar16 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
          pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
          pcVar11 = (char *)CONCAT22(uVar36,CONCAT11(cVar6 + *(char *)(CONCAT22(uVar36,CONCAT11(
                                                  cVar6,cVar30)) + 0x26),cVar30));
          *pcVar16 = *pcVar16 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
          cVar30 = bVar9 + 0x2a;
          pcVar16 = (char *)CONCAT31(uVar27,cVar30);
          if ((POPCOUNT(cVar30) & 1U) == 0) {
            *pcVar16 = *pcVar16 + cVar30;
            pbVar50 = (byte *)(CONCAT31(uVar27,bVar9 + 0x4f) + -0x33282610);
            bVar9 = *pbVar50;
            bVar7 = (byte)pbVar50;
            *pbVar50 = *pbVar50 + bVar7;
            uVar27 = (undefined3)((uint)pbVar50 >> 8);
            if (!CARRY1(bVar9,bVar7)) {
              if (!SCARRY1(bVar7,'\0')) {
                *pbVar50 = *pbVar50 + bVar7;
                uVar32 = CONCAT22(uVar37,CONCAT11(bVar33 | (byte)*puVar48,bVar38));
                bVar7 = bVar7 & (byte)*puVar48;
                *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                pcVar16 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar16 = (char *)CONCAT31(uVar27,bVar7 + *pcVar11);
              if (SCARRY1(bVar7,*pcVar11) != (char)(bVar7 + *pcVar11) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar9 = bVar7 + *pcVar11;
            pbVar50 = (byte *)CONCAT31(uVar27,bVar9);
            if (SCARRY1(bVar7,*pcVar11) == (char)bVar9 < '\0') {
              pcVar16 = (char *)CONCAT22(uVar37,CONCAT11(bVar33 | (byte)*puVar48,bVar38));
              *pcVar11 = *pcVar11 + cVar47;
              *(byte *)puVar48 = (byte)*puVar48 ^ bVar9;
              *(char *)((int)pbVar50 * 2) = *(char *)((int)pbVar50 * 2) + bVar9;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar16 = *pcVar16 + (char)pcVar16;
            uVar27 = (undefined3)((uint)pcVar16 >> 8);
            bVar9 = (char)pcVar16 + 0x2aU & (byte)*puVar48;
            *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
            pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
            *pcVar16 = *pcVar16 + bVar9 + 0x2a;
            pcVar16 = (char *)CONCAT31(uVar27,bVar9 + 0x54 & (byte)*puVar48);
code_r0x00403072:
            cVar30 = (char)pcVar16;
            *pcVar16 = *pcVar16 + cVar30;
            uVar27 = (undefined3)((uint)pcVar16 >> 8);
            pcVar16 = (char *)CONCAT31(uVar27,cVar30 + '*');
            *pcVar16 = *pcVar16 + cVar30 + '*';
            bVar9 = cVar30 + 0x54U & (byte)*puVar48;
            *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
            pcStackY_a4 = (char *)CONCAT22(pcStackY_a4._2_2_,uVar52);
            uVar32 = CONCAT22((short)((uint)uVar32 >> 0x10),
                              CONCAT11((char)((uint)uVar32 >> 8) +
                                       *(char *)CONCAT31(uVar27,bVar9 + 0x2a),(char)uVar32));
            *(byte *)(puVar44 + 0x828000) = (byte)puVar44[0x828000] - cVar47;
            pcVar16 = pcStackY_a4;
code_r0x0040309a:
            cVar30 = (char)pcVar16;
            *pcVar16 = *pcVar16 + cVar30;
            pcStackY_a4 = (char *)CONCAT22(pcStackY_a4._2_2_,uVar53);
            *pcVar16 = *pcVar16 + cVar30;
            pbVar50 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar30 + 0x2aU & (byte)*puVar48);
          }
          cVar30 = (char)pbVar50;
          *pbVar50 = *pbVar50 + cVar30;
          uVar27 = (undefined3)((uint)pbVar50 >> 8);
          cVar6 = cVar30 + '*';
          pcVar16 = (char *)CONCAT31(uVar27,cVar6);
          *(byte *)(puVar44 + 0x828000) = (byte)puVar44[0x828000] - cVar47;
          *pcVar16 = *pcVar16 + cVar6;
          cVar10 = (char)pcStackY_a4 - (byte)*puVar44;
          pcVar11 = (char *)CONCAT22((short)((uint)pcStackY_a4 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_a4 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_a4 >> 8),
                                                                 cVar10) + 0x34),cVar10));
          *pcVar16 = *pcVar16 + cVar6;
          bVar9 = cVar30 + 0x54U & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
          pbVar50 = (byte *)CONCAT31(uVar27,bVar9 + 0x2a);
          bVar9 = (byte)((uint)uVar32 >> 8);
          pcVar16 = (char *)CONCAT22((short)((uint)uVar32 >> 0x10),
                                     CONCAT11(bVar9 + *pbVar50,(char)uVar32));
          pbVar50 = pbVar50 + (uint)CARRY1(bVar9,*pbVar50) + *(int *)pbVar50;
          *(byte *)puVar48 = (byte)*puVar48 + (char)uVar32;
          uVar27 = (undefined3)((uint)pbVar50 >> 8);
          cVar30 = (byte)pbVar50 - *pbVar50;
          piVar25 = (int *)CONCAT31(uVar27,cVar30);
          puVar44 = (uint *)((int)puVar44 + (uint)((byte)pbVar50 < *pbVar50) + *piVar25);
          cVar30 = cVar30 + (char)*piVar25;
          pbVar50 = (byte *)CONCAT31(uVar27,cVar30);
          *pbVar50 = *pbVar50 + cVar30;
code_r0x004030df:
          *pcVar16 = *pcVar16 + cVar47;
          bVar9 = *pbVar50;
          bVar33 = (byte)pbVar50;
          *pbVar50 = *pbVar50 + bVar33;
          *(byte **)(pcVar11 + -0x41) =
               (byte *)((int)puVar44 + (uint)CARRY1(bVar9,bVar33) + *(int *)(pcVar11 + -0x41));
          *pbVar50 = *pbVar50 + bVar33;
          uVar27 = (undefined3)((uint)pbVar50 >> 8);
          bVar33 = bVar33 | (byte)*puVar44;
          *(char *)CONCAT31(uVar27,bVar33) = *(char *)CONCAT31(uVar27,bVar33) + bVar33;
          pcVar16 = (char *)CONCAT31(uVar27,bVar33 + 0x7b);
          *pcVar16 = *pcVar16 + bVar33 + 0x7b;
          pbVar50 = (byte *)((int)puVar44 + CONCAT31(uVar27,bVar33 - 8) + -1);
          *pbVar50 = *pbVar50 + (bVar33 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar42 = puVar44 + (uint)bVar58 * -2 + 1;
        out(*puVar44,uVar39);
        pbVar40 = unaff_EBP + 1;
        pbStackY_6c = unaff_EBP;
      }
      bVar9 = cVar30 - bVar56;
      pbVar40 = (byte *)((int)puVar42 + (int)puVar51 * 2);
      bVar56 = CARRY1(*pbVar40,bVar9);
      *pbVar40 = *pbVar40 + bVar9;
code_r0x00402ef9:
      pcVar16 = (char *)CONCAT31(uVar27,bVar9 - bVar56);
      pbVar40 = (byte *)((int)puVar51 + (int)unaff_EBP * 2);
      *pbVar40 = *pbVar40 + (bVar9 - bVar56);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar48;
  puVar13 = puVar48 + 0x2828000;
  bVar9 = (byte)puVar41;
  bVar56 = (byte)*puVar13 < bVar9;
  *(byte *)puVar13 = (byte)*puVar13 - bVar9;
  bVar9 = (byte)pbVar40 + *pbVar40;
  piVar25 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar9 + bVar56);
  puVar13 = puVar51;
  uVar54 = uVar52;
  if (CARRY1((byte)pbVar40,*pbVar40) || CARRY1(bVar9,bVar56)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar16 = *pcVar16 + bVar33;
  uVar54 = uVar52;
  uStack_24 = uVar53;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47 + unaff_EBP[(int)pcVar16 * 4],uVar31));
  pbVar50[(int)pcVar16] = pbVar50[(int)pcVar16] + bVar33;
  goto code_r0x0040254a;
}


