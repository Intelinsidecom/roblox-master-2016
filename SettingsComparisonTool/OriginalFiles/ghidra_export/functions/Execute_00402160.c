/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402160
 * Raw Name    : Execute
 * Demangled   : Execute
 * Prototype   : bool Execute(char * param_1, char * param_2)
 * Local Vars  : cVar11, cVar12, in_EAX, iVar13, puVar14, pbVar15, pbVar16, uVar17, pcVar18, pbVar19, pbVar20, pcVar21, uVar22, uVar23, puVar24, piVar25, pcVar26, piVar27, puVar28, uVar29, uVar30, iVar31, uVar32, param_1, pbVar33, extraout_ECX, param_2, extraout_ECX_00, extraout_ECX_01, extraout_ECX_02, uVar34, bVar35, cVar36, uVar37, uVar38, bVar39, bVar40, uVar41, puVar42, puVar43, pbVar44, puVar45, uVar46, unaff_EBX, bVar47, unaff_EBP, unaff_ESI, puVar48, puVar49, unaff_EDI, puVar50, in_ES, uVar51, uVar52, in_CS, uVar53, in_SS, uVar54, in_GS_OFFSET, bVar55, in_AF, bVar56, in_TF, in_IF, bVar57, bVar58, in_NT, uVar59, unaff_retaddr, in_stack_ffffffe0, in_stack_ffffffe8, pcStackY_8c, pbStackY_54, puStackY_40, puStackY_3c, uStackY_38, uStack_10, uStack_c, uStack_9, uStack_8, iVar1, uVar2, pcVar3, uVar4, uVar5, uVar6, bVar7, cVar8, cVar9, bVar10
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

bool __fastcall Execute(char *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  undefined4 in_EAX;
  undefined3 uVar29;
  int iVar13;
  uint *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint3 uVar30;
  uint uVar17;
  char *pcVar18;
  byte *pbVar19;
  byte *pbVar20;
  int3 iVar31;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  int *piVar25;
  char *pcVar26;
  int *piVar27;
  ushort *puVar28;
  undefined1 uVar32;
  byte bVar35;
  undefined2 uVar37;
  byte *pbVar33;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  char cVar36;
  undefined2 uVar38;
  undefined4 uVar34;
  byte bVar39;
  byte bVar40;
  undefined2 uVar41;
  uint *puVar42;
  uint *puVar43;
  byte *pbVar44;
  undefined3 uVar46;
  uint *puVar45;
  byte bVar47;
  undefined4 unaff_EBX;
  byte *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar48;
  uint *puVar49;
  byte *unaff_EDI;
  uint *puVar50;
  ushort in_ES;
  ushort uVar51;
  ushort uVar52;
  ushort in_CS;
  ushort uVar53;
  undefined2 in_SS;
  ushort uVar54;
  int in_GS_OFFSET;
  bool bVar55;
  byte in_AF;
  bool bVar56;
  byte in_TF;
  byte in_IF;
  bool bVar57;
  bool bVar58;
  byte in_NT;
  undefined8 uVar59;
  undefined2 unaff_retaddr;
  char *pcStackY_8c;
  byte *pbStackY_54;
  uint *puStackY_40;
  uint *puStackY_3c;
  undefined4 uStackY_38;
  undefined4 in_stack_ffffffe0;
  byte *in_stack_ffffffe8;
  ushort uStack_10;
  ushort uStack_c;
  undefined1 uStack_9;
  undefined4 uStack_8;
  
  bVar57 = false;
                    /* .NET CLR Managed Code */
  uVar29 = (undefined3)((uint)in_EAX >> 8);
  bVar7 = (char)in_EAX + *param_2;
  pcVar18 = (char *)CONCAT31(uVar29,bVar7);
  cVar11 = (char)param_1;
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *pcVar18 = *pcVar18 + bVar7;
    cVar8 = (bVar7 + 0x6f) - (0x90 < bVar7);
    pcVar18 = (char *)CONCAT31(uVar29,cVar8);
    cVar9 = *param_2;
    *param_2 = *param_2 + cVar11;
    if (SCARRY1(cVar9,cVar11) == *param_2 < '\0') {
      *pcVar18 = *pcVar18 + cVar8;
      out(*unaff_ESI,(short)param_2);
      unaff_ESI = unaff_ESI + 1;
    }
  }
  else {
    *pcVar18 = *pcVar18 + bVar7;
    unaff_EBX = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                         CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[6],(char)unaff_EBX));
  }
  *pcVar18 = *pcVar18 + (char)pcVar18;
  bVar39 = (byte)param_2;
  bVar55 = bRam6f060000 < bVar39;
  bRam6f060000 = bRam6f060000 - bVar39;
  iVar13 = (CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x02') + -0xa0a0000) - (uint)bVar55
  ;
  bVar7 = (byte)iVar13;
  bVar55 = CARRY1(bVar7,(byte)*unaff_ESI);
  uVar29 = (undefined3)((uint)iVar13 >> 8);
  cVar9 = bVar7 + (byte)*unaff_ESI;
  if (!bVar55) {
    cVar9 = cVar9 + -2 + bVar55;
  }
  pcVar18 = (char *)CONCAT31(uVar29,cVar9);
  *pcVar18 = *pcVar18 + cVar9;
  uVar37 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar32 = (undefined1)unaff_EBX;
  bVar47 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[7];
  *pcVar18 = *pcVar18 + cVar9;
  bVar7 = cVar9 + 2;
  cVar8 = bVar47 + *(char *)(CONCAT22(uVar37,CONCAT11(bVar47,uVar32)) + 4);
  *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
  bVar47 = 9 < (cVar9 + 0x2fU & 0xf) | in_AF;
  bVar10 = cVar9 + 0x2fU + bVar47 * -6;
  cVar9 = bVar10 + (0x9f < bVar10 | 0xd2 < bVar7 | bVar47 * (bVar10 < 6)) * -0x60;
  cVar8 = cVar8 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar8,uVar32)) + 7);
  pbVar33 = (byte *)CONCAT22(uVar37,CONCAT11(cVar8,uVar32));
  *(char *)CONCAT31(uVar29,cVar9) = *(char *)CONCAT31(uVar29,cVar9) + cVar9;
  bVar10 = cVar9 + 0x7e;
  pbVar15 = (byte *)CONCAT31(uVar29,bVar10);
  pbVar16 = unaff_EBP + 0x6fe1411;
  bVar7 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar10;
  *pbVar15 = (*pbVar15 - bVar10) - CARRY1(bVar7,bVar10);
  bVar55 = CARRY1((byte)*unaff_ESI,bVar10);
  uVar17 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
  bVar7 = (byte)((uint)param_1 >> 8);
  if (bVar55) {
    *pbVar15 = *pbVar15 + bVar10;
    bVar10 = bVar10 | pbVar15[0x400000c];
    puVar14 = (uint *)CONCAT31(uVar29,bVar10);
    if ((char)bVar10 < '\x01') {
code_r0x004021be:
      param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar7 | *pbVar33,cVar11));
      puVar14 = (uint *)((int)puVar14 + -0x77b02);
      pbVar16 = (byte *)((int)unaff_ESI + (int)unaff_EDI * 2);
      *pbVar16 = *pbVar16 + (char)puVar14;
      pbVar15 = (byte *)((uint)puVar14 | *puVar14);
      bVar7 = (byte)pbVar15;
      unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar7;
      bVar55 = CARRY1(*pbVar15,bVar7);
      *pbVar15 = *pbVar15 + bVar7;
      in_SS = unaff_retaddr;
      goto code_r0x004021d4;
    }
    *(byte *)puVar14 = (char)*puVar14 + bVar10;
    cVar9 = bVar10 + 0x28;
    puVar14 = (uint *)CONCAT31(uVar29,cVar9);
    *puVar14 = (uint)(*puVar14 + (int)puVar14);
    bVar10 = *pbVar33;
    *pbVar33 = *pbVar33 + bVar7;
    if (CARRY1(bVar10,bVar7)) {
      *(char *)puVar14 = (char)*puVar14 + cVar9;
      goto code_r0x004021be;
    }
    pbVar16 = (byte *)((int)unaff_ESI + (int)unaff_EDI * 2);
    *pbVar16 = *pbVar16 + cVar9;
    pbVar15 = (byte *)((uint)puVar14 | *puVar14);
    pbVar15[(int)unaff_EBP] = pbVar15[(int)unaff_EBP] + (char)pbVar15;
code_r0x004021e5:
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    bVar7 = *pbVar33;
    bVar10 = (byte)((uint)param_1 >> 8);
    *pbVar33 = *pbVar33 + bVar10;
    if (!CARRY1(bVar7,bVar10)) goto code_r0x0040220c;
    *pbVar15 = *pbVar15 + (char)pbVar15;
    param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11(bVar10 | *pbVar15,(char)param_1));
code_r0x004021f1:
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)pbVar15;
  }
  else {
    if ((byte)*unaff_ESI != 0 && SCARRY1((byte)uVar17,bVar10) == (char)(byte)*unaff_ESI < '\0') {
      *pbVar15 = *pbVar15 + bVar10;
      puVar14 = (uint *)CONCAT31(uVar29,cVar9 + -0x55);
      unaff_ESI[(int)unaff_EDI * 2] =
           (uint)(param_2 + (uint)(0xd2 < bVar10) + unaff_ESI[(int)unaff_EDI * 2]);
      goto code_r0x004021be;
    }
code_r0x004021d4:
    if (bVar55) {
      *pbVar15 = *pbVar15 + (byte)pbVar15;
      uVar29 = (undefined3)((uint)pbVar15 >> 8);
      bVar7 = (byte)pbVar15 | pbVar15[0x400000b];
      pbVar15 = (byte *)CONCAT31(uVar29,bVar7);
      if ('\0' < (char)bVar7) {
        *pbVar15 = *pbVar15 + bVar7;
        pbVar15 = (byte *)CONCAT31(uVar29,bVar7 + 0x28);
        goto code_r0x004021e5;
      }
      *param_2 = *param_2 + (char)param_1;
      *(char *)((int)pbVar15 * 2) = *(char *)((int)pbVar15 * 2) - (char)param_1;
      goto code_r0x004021f1;
    }
  }
  pbVar33 = (byte *)CONCAT22(uVar37,CONCAT11(cVar8 + pbVar33[6],uVar32));
  *pbVar15 = *pbVar15 + (char)pbVar15;
  uVar29 = (undefined3)((uint)pbVar15 >> 8);
  bVar10 = (char)pbVar15 + 0x6f;
  bVar7 = *(byte *)CONCAT31(uVar29,bVar10);
  *param_2 = *param_2 + (char)param_1;
  cVar11 = (bVar10 & bVar7) + *unaff_EDI;
  pbVar15 = (byte *)CONCAT31(uVar29,cVar11);
  *param_1 = *param_1 - (char)((uint)param_2 >> 8);
  *pbVar15 = *pbVar15 + cVar11;
  *param_1 = *param_1 - bVar39;
  *pbVar15 = *pbVar15 + cVar11;
code_r0x0040220c:
  uStack_8 = CONCAT22(uStack_8._2_2_,in_SS);
  bVar7 = (byte)pbVar15 | 0xde;
  cVar11 = bVar7 + 2;
  uVar29 = (undefined3)((uint)pbVar15 >> 8);
  pcVar18 = (char *)CONCAT31(uVar29,cVar11);
  if ((POPCOUNT(cVar11) & 1U) == 0) {
    *pcVar18 = *pcVar18 + cVar11;
    bVar7 = bVar7 + 0x71;
    pcVar18 = (char *)CONCAT31(uVar29,bVar7 & *(byte *)CONCAT31(uVar29,bVar7));
  }
  cVar11 = (char)param_1;
  *param_2 = *param_2 + cVar11;
  uVar29 = (undefined3)((uint)param_2 >> 8);
  bVar39 = bVar39 + *unaff_EDI;
  puVar42 = (uint *)CONCAT31(uVar29,bVar39);
  *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar11;
  *pcVar18 = *pcVar18 + (char)pcVar18;
  cVar11 = cVar11 - *pcVar18;
  pcVar21 = (char *)CONCAT31((int3)((uint)param_1 >> 8),cVar11);
  bVar10 = (char)pcVar18 - *pcVar18;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar10);
  *(byte **)pbVar16 = (byte *)(*(int *)pbVar16 + (int)puVar42);
  *pbVar16 = *pbVar16 + bVar10;
  bVar7 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar10;
  *(byte **)pbVar16 = pbVar16 + (uint)CARRY1(bVar7,bVar10) + *(int *)pbVar16;
  *pcVar21 = *pcVar21 + bVar10;
  bVar7 = (byte)((uint)param_1 >> 8);
  uVar37 = (undefined2)((uint)param_1 >> 0x10);
  bVar10 = bVar7 + *pbVar16;
  puVar14 = (uint *)CONCAT22(uVar37,CONCAT11(bVar10,cVar11));
  pbVar16 = pbVar16 + (uint)CARRY1(bVar7,*pbVar16) + *(int *)pbVar16;
  *(byte *)puVar42 = (byte)*puVar42 + cVar11;
  uVar46 = (undefined3)((uint)pbVar33 >> 8);
  cVar9 = (char)pbVar33 - *(byte *)((int)unaff_ESI + 2);
  pbVar15 = (byte *)CONCAT31(uVar46,cVar9);
  bVar7 = (byte)pbVar16;
  uVar30 = (uint3)((uint)pbVar16 >> 8);
  uVar54 = in_ES;
  if ((POPCOUNT(cVar9) & 1U) == 0) {
    *pbVar16 = *pbVar16 + bVar7;
    bVar7 = bVar7 | *pbVar15;
    piVar27 = (int *)CONCAT31(uVar30,bVar7);
    if (bVar7 == 0) {
      *(char *)piVar27 = (char)*piVar27;
      puVar48 = unaff_ESI + 1;
      out(*unaff_ESI,(short)puVar42);
      pbVar16 = (byte *)((uint)uVar30 << 8);
      *(byte *)puVar42 = (byte)*puVar42 + cVar11;
      puVar42 = (uint *)CONCAT31(uVar29,bVar39 - *pbVar15);
      *pbVar15 = *pbVar15;
      *(byte *)puVar42 = (byte)*puVar42 + bVar10;
      *pbVar16 = *pbVar16;
      *(byte *)puVar42 = (byte)*puVar42;
      *pbVar16 = *pbVar16;
      *(byte **)(pbVar15 + 0x25) = (byte *)(*(int *)(pbVar15 + 0x25) + (int)puVar48);
    }
    else {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar27 = (char)*piVar27 + bVar7;
      puVar14 = (uint *)CONCAT22(uVar37,CONCAT11(bVar10 | (byte)*puVar42,cVar11));
      puVar48 = (uint *)((int)unaff_ESI + *piVar27);
      pcVar18 = (char *)((int)piVar27 + *piVar27);
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      cVar8 = (char)pcVar18 - *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar29,cVar8);
      *pcVar18 = *pcVar18 + cVar8;
      pbVar16 = (byte *)CONCAT31(uVar29,cVar8 + *pcVar18);
      uVar17 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar39;
      if (!CARRY1((byte)uVar17,bVar39)) {
        *(byte *)puVar42 = (byte)*puVar42 + cVar11;
        pbVar15 = (byte *)CONCAT31(uVar46,cVar9 - (byte)*puVar48);
        goto _ctor;
      }
    }
    *pbVar16 = *pbVar16 + (char)pbVar16;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(byte)puVar14 | (byte)*puVar42);
    unaff_ESI = puVar48;
  }
  else {
    *(byte *)puVar42 = (byte)*puVar42 + cVar11;
    pbVar16 = (byte *)CONCAT31(uVar30,bVar7 | (byte)*unaff_ESI);
  }
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x26);
  *pbVar16 = *pbVar16 + (byte)pbVar16;
  uVar29 = (undefined3)((uint)pbVar16 >> 8);
  bVar7 = (byte)pbVar16 | (byte)*puVar42;
  pbVar16 = (byte *)CONCAT31(uVar29,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *pbVar16 = *pbVar16 + bVar7;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    bVar47 = 9 < (bVar7 + 6 & 0xf) | bVar47;
    bVar39 = bVar7 + 6 + bVar47 * '\x06';
    pbVar16 = (byte *)CONCAT31(uVar29,bVar39 + (0x90 < (bVar39 & 0xf0) |
                                               0xf9 < bVar7 | bVar47 * (0xf9 < bVar39)) * '`');
  }
  *pbVar16 = *pbVar16 + (char)pbVar16;
  puVar48 = unaff_ESI;
  do {
    puVar43 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | pbVar15[0x28],(char)puVar42));
    *pbVar16 = *pbVar16 + (char)pbVar16;
    uVar37 = (undefined2)((uint)puVar14 >> 0x10);
    uVar32 = SUB41(puVar14,0);
    bVar39 = (byte)((uint)puVar14 >> 8) | *pbVar16;
    puVar14 = (uint *)CONCAT22(uVar37,CONCAT11(bVar39,uVar32));
    cVar11 = (char)pbVar16 + *pbVar16;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar11);
    bVar7 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar39;
    if (!CARRY1(bVar7,bVar39)) goto code_r0x004022b3;
    *pbVar16 = *pbVar16 + cVar11;
    puVar14 = (uint *)CONCAT22(uVar37,CONCAT11(bVar39 | (byte)*puVar43,uVar32));
    puVar42 = puVar43;
_ctor:
    bVar7 = (byte)((uint)puVar14 >> 8);
    uVar37 = (undefined2)((uint)puVar14 >> 0x10);
    cVar11 = (char)puVar14;
    bVar39 = bVar7 + *pbVar16;
    puVar14 = (uint *)CONCAT22(uVar37,CONCAT11(bVar39,cVar11));
    pbVar16 = pbVar16 + (uint)CARRY1(bVar7,*pbVar16) + *(int *)pbVar16;
    *(byte *)puVar42 = (byte)*puVar42 + cVar11;
    bVar10 = (byte)pbVar15;
    bVar55 = bVar10 < *(byte *)((int)puVar48 + 2);
    bVar7 = *(byte *)((int)puVar48 + 2);
    cVar9 = bVar10 - bVar7;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) {
      if ((char)bVar7 <= (char)bVar10) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *pbVar16 = *pbVar16 + (byte)pbVar16;
    bVar7 = (byte)pbVar16 | *pbVar15;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
    puVar43 = puVar42;
    if (bVar7 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x2b);
      *pbVar16 = *pbVar16 + bVar7;
      puVar14 = (uint *)CONCAT22(uVar37,CONCAT11(bVar39 | (byte)*puVar42,cVar11));
      bVar39 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar7;
      puVar48 = (uint *)((int)puVar48 + (uint)CARRY1(bVar39,bVar7) + *(int *)pbVar16);
      pbVar16 = pbVar16 + *(int *)pbVar16;
      cVar11 = (char)pbVar16 - *pbVar16;
      piVar27 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar11);
      *(char *)piVar27 = (char)*piVar27 + cVar11;
      pbVar16 = (byte *)((int)piVar27 + *piVar27);
      uVar17 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar42;
      if (!CARRY1((byte)uVar17,(byte)puVar42)) goto code_r0x004022ea;
      goto code_r0x004022be;
    }
    *pbVar16 = *pbVar16;
    out(*puVar48,(short)puVar42);
    pbVar16 = pbVar16 + -*(int *)pbVar16;
    puVar48 = puVar48 + 1;
code_r0x004022ab:
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar14;
    bVar7 = (char)pbVar16 - *pbVar16;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
    *pbVar15 = *pbVar15 + (char)puVar43;
    *pbVar15 = *pbVar15 ^ bVar7;
code_r0x004022b3:
    *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)puVar14 >> 8);
    bVar39 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar39;
    *pbVar15 = *pbVar15 + bVar39;
    bVar7 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar39;
    *(byte **)(pbVar15 + 0x2c) =
         (byte *)((int)puVar48 + (uint)CARRY1(bVar7,bVar39) + *(int *)(pbVar15 + 0x2c));
    puVar42 = puVar43;
code_r0x004022be:
    *pbVar16 = *pbVar16 + (char)pbVar16;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(byte)puVar14 | (byte)*puVar42);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x2d);
code_r0x004022c6:
    *pbVar16 = *pbVar16 + (byte)pbVar16;
    uVar29 = (undefined3)((uint)pbVar16 >> 8);
    bVar7 = (byte)pbVar16 | (byte)*puVar42;
    pcVar18 = (char *)CONCAT31(uVar29,bVar7);
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      *pcVar18 = *pcVar18 + bVar7;
    }
    *pcVar18 = *pcVar18 + bVar7;
    cVar11 = bVar7 + 6;
    pbVar16 = (byte *)CONCAT31(uVar29,cVar11);
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    *pbVar16 = *pbVar16 + cVar11;
    puVar43 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | pbVar15[0x2f],(char)puVar42));
    *pbVar16 = *pbVar16 + cVar11;
    bVar7 = (byte)((uint)puVar14 >> 8) | *pbVar16;
    puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),CONCAT11(bVar7,(char)puVar14));
    pbVar16 = pbVar16 + *(int *)pbVar16;
    bVar55 = CARRY1(*pbVar15,bVar7);
    *pbVar15 = *pbVar15 + bVar7;
code_r0x004022e0:
    puVar42 = puVar43;
    if (!bVar55) goto code_r0x0040230b;
    bVar39 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar39;
    puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                               CONCAT11((byte)((uint)puVar14 >> 8) | (byte)*puVar43,(char)puVar14));
    bVar7 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar39;
    puVar48 = (uint *)((int)puVar48 + (-(uint)CARRY1(bVar7,bVar39) - *(int *)pbVar16));
code_r0x004022ea:
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + *pbVar16);
code_r0x004022ef:
    *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) + (char)pbVar16;
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar43;
    uVar54 = (ushort)in_stack_ffffffe8;
    puVar42 = puVar43;
    while( true ) {
      uVar29 = (undefined3)((uint)pbVar16 >> 8);
      bVar7 = (byte)pbVar16 | (byte)*puVar42;
      pbVar16 = (byte *)CONCAT31(uVar29,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *pbVar16 = *pbVar16 + bVar7;
      cVar11 = bVar7 + 0xd;
      pcVar18 = (char *)CONCAT31(uVar29,cVar11);
      *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar18;
      *pcVar18 = *pcVar18 + cVar11;
      *(char *)((int)pcVar18 * 2) = *(char *)((int)pcVar18 * 2) + (char)((uint)puVar14 >> 8);
      *pcVar18 = *pcVar18 + cVar11;
      pbVar16 = (byte *)CONCAT31(uVar29,cVar11);
      *pbVar16 = *pbVar16 + cVar11;
code_r0x0040230b:
      puVar43 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((char)((uint)puVar42 >> 8) + pbVar15[0x34],(char)puVar42))
      ;
      cVar11 = (char)pbVar16;
      *pbVar16 = *pbVar16 + cVar11;
      pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar15 >> 8) | unaff_EBP[-0x79],
                                          (char)pbVar15));
      *pbVar16 = *pbVar16 + cVar11;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar11 + '\x02');
code_r0x00402317:
      pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                 CONCAT11((char)((uint)pbVar15 >> 8) + pbVar15[-0x7a],(char)pbVar15)
                                );
      cVar11 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar11;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      cVar9 = cVar11 + '{';
      pbVar16 = (byte *)CONCAT31(uVar29,cVar9);
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      pbVar33 = (byte *)((int)puVar43 + (int)pbVar16);
      *pbVar33 = *pbVar33 + cVar9;
      if ((POPCOUNT(*pbVar33) & 1U) != 0) goto code_r0x004022ab;
      *pbVar16 = *pbVar16 + cVar9;
      piVar27 = (int *)CONCAT31(uVar29,cVar11 + -10);
      uVar17 = (int)piVar27 + *piVar27;
      bVar7 = (byte)uVar17;
      unaff_EDI[(int)unaff_EBP * 2] = unaff_EDI[(int)unaff_EBP * 2] + bVar7;
      pbVar16 = (byte *)(uVar17 ^ 0x7d0a0000);
      *pbVar16 = bVar7;
      pbVar33 = (byte *)((int)puVar43 + (int)pbVar16);
      *pbVar33 = *pbVar33 + bVar7;
      puVar42 = puVar43;
      if ((POPCOUNT(*pbVar33) & 1U) != 0) goto code_r0x004022be;
      *pbVar16 = *pbVar16 + bVar7;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7 + 0x69);
      uVar51 = in_ES;
code_r0x00402342:
      in_ES = uVar51;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      bVar7 = (char)pcVar18 + *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar29,bVar7);
      *pcVar18 = *pcVar18 + bVar7;
      *pcVar18 = *pcVar18 + bVar7;
      *(byte *)(puVar48 + 0x800000) = (byte)puVar48[0x800000] + (char)puVar14;
      cVar9 = (char)pbVar15;
      pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                 CONCAT11((char)((uint)pbVar15 >> 8) + pbVar15[-0x7a],cVar9));
      *pcVar18 = *pcVar18 + bVar7;
      bVar55 = 0xfd < bVar7;
      cVar11 = bVar7 + 2;
      pbVar16 = (byte *)CONCAT31(uVar29,cVar11);
      if ((POPCOUNT(cVar11) & 1U) != 0) goto code_r0x004022e0;
      *pbVar16 = *pbVar16 + cVar11;
      cVar11 = bVar7 + 0x71;
      pbVar16 = (byte *)CONCAT31(uVar29,cVar11);
      bVar39 = *pbVar16;
      *pbVar16 = *pbVar16 + cVar11;
      in_stack_ffffffe8 = (byte *)(uint)in_ES;
      if (SCARRY1(bVar39,cVar11) == (char)*pbVar16 < '\0') {
        *(byte *)((int)puVar43 + (int)pbVar16) = *(byte *)((int)puVar43 + (int)pbVar16) + cVar9;
        goto code_r0x004022ef;
      }
      *pbVar16 = *pbVar16 + cVar11;
      pbVar16 = (byte *)CONCAT31(uVar29,bVar7 + 0x73);
      bVar55 = (POPCOUNT(bVar7 + 0x73) & 1U) == 0;
      puVar42 = puVar43;
code_r0x00402366:
      if (bVar55) {
code_r0x00402368:
        *pbVar16 = *pbVar16 + (char)pbVar16;
        cVar11 = (char)pbVar16 + 'o';
        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar11);
        *pcVar18 = *pcVar18 + cVar11;
        puVar43 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(byte)puVar42 | *pbVar15);
        pcVar18 = pcVar18 + 0x37280512;
        bVar39 = (byte)pcVar18;
        *pcVar18 = *pcVar18 + bVar39;
        puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                   CONCAT11((byte)((uint)puVar14 >> 8) | bRam7d160243,(char)puVar14)
                                  );
        pbVar16 = (byte *)((int)puVar43 + (int)pcVar18);
        bVar7 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar39;
        pcRam00008e7d = pcVar18 + (int)(pcRam00008e7d + CARRY1(bVar7,bVar39));
        bVar55 = SCARRY1(bVar39,'\x02');
        bVar39 = bVar39 + 2;
        puVar28 = (ushort *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar39);
code_r0x0040238b:
        if (bVar55 == (char)bVar39 < '\0') {
          *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
          pcVar18 = (char *)CONCAT31((int3)((uint)puVar28 >> 8),(char)puVar28 + '\x12');
          uVar51 = in_ES;
          in_ES = uVar54;
code_r0x00402391:
          pcVar18 = pcVar18 + 0x42802;
          *pbVar15 = *pbVar15 + (char)((uint)puVar14 >> 8);
          uVar54 = in_ES;
code_r0x00402399:
          bVar7 = (byte)pbVar15 | (byte)((uint)puVar14 >> 8);
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          pcVar18 = (char *)CONCAT31(uVar29,1);
          *pcVar18 = *pcVar18 + '\x01';
          pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                     CONCAT11((char)((uint)pbVar15 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar15 >> 8),bVar7) +
                                                       -0x72),bVar7));
          *pcVar18 = *pcVar18 + '\x01';
          uVar17 = CONCAT31(uVar29,0x14);
          pcVar18 = (char *)(uVar17 + 0x19061215 + (uint)(0x1f9edfd < uVar17));
          uVar2 = (uint)(0xe4ffffec < uVar17 + 0xfe061202 ||
                        CARRY4(uVar17 + 0x19061215,(uint)(0x1f9edfd < uVar17)));
          uVar17 = *puVar48;
          uVar22 = *puVar48;
          *puVar48 = (uint)(pcVar18 + uVar22 + uVar2);
          if ((SCARRY4(uVar17,(int)pcVar18) != SCARRY4((int)(pcVar18 + uVar22),uVar2)) !=
              (int)*puVar48 < 0) {
            bVar39 = (byte)pcVar18;
            *pcVar18 = *pcVar18 + bVar39;
            iVar13 = CONCAT31((int3)((uint)pcVar18 >> 8),bVar39 + 2) + 0x847d +
                     (uint)(0xfd < bVar39);
            puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(byte)puVar43 | (byte)*puVar43);
            pcVar18 = (char *)(CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x12') + 0x134f26)
            ;
            *pbVar15 = *pbVar15 + bVar7;
code_r0x004023cd:
            out(*puVar48,(short)puVar43);
            uVar17 = *puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + (byte)puVar14;
            pbVar16 = (byte *)(pcVar18 +
                              (uint)CARRY1((byte)uVar17,(byte)puVar14) + *(int *)unaff_EDI);
            bVar58 = SCARRY1((char)puVar43,(byte)*puVar14);
            bVar7 = (char)puVar43 + (byte)*puVar14;
            puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar7);
            bVar56 = (char)bVar7 < '\0';
            puVar48 = puVar48 + 1;
code_r0x004023d6:
            bVar55 = (POPCOUNT(bVar7) & 1U) == 0;
            puVar42 = puVar43;
            if (bVar58 != bVar56) {
              *pbVar16 = *pbVar16 + (char)pbVar16;
code_r0x004023db:
              cVar9 = (char)pbVar16;
              uVar29 = (undefined3)((uint)pbVar16 >> 8);
              cVar11 = cVar9 + '\x02';
              pbVar16 = (byte *)CONCAT31(uVar29,cVar11);
              if ((POPCOUNT(cVar11) & 1U) != 0) {
                pbVar33 = (byte *)((int)puVar42 + (int)pbVar16);
                *pbVar33 = *pbVar33 + cVar11;
                bVar55 = (POPCOUNT(*pbVar33) & 1U) == 0;
                goto code_r0x00402366;
              }
              *pbVar16 = *pbVar16 + cVar11;
              cVar9 = cVar9 + '\x15';
              pbVar16 = (byte *)CONCAT31(uVar29,cVar9);
              *(byte *)puVar14 = (byte)*puVar14 | (byte)puVar42;
              *unaff_EDI = *unaff_EDI | (byte)puVar42;
              uVar51 = in_ES;
              if ((POPCOUNT(*unaff_EDI) & 1U) == 0) {
                *pbVar16 = *pbVar16 + cVar9;
                goto code_r0x00402425;
              }
              *pbVar16 = *pbVar16 + cVar9;
              cVar9 = cVar9 + (byte)*puVar42;
              pcVar18 = (char *)CONCAT31(uVar29,cVar9);
              if ((POPCOUNT(cVar9) & 1U) == 0) {
                *pcVar18 = *pcVar18 + cVar9;
                puVar28 = (ushort *)CONCAT31(uVar29,cVar9 + 'o');
                puVar43 = puVar42;
code_r0x004023f6:
                uVar17 = *puVar43;
                *(byte *)puVar43 = (byte)*puVar43 + (char)puVar14;
                cVar11 = (char)puVar28;
                if (SCARRY1((byte)uVar17,(char)puVar14) == (char)(byte)*puVar43 < '\0') {
                  in_ES = *puVar28;
                  pbVar16 = (byte *)((int)puVar43 + (int)puVar28);
                  bVar55 = SCARRY1(*pbVar16,cVar11);
                  *pbVar16 = *pbVar16 + cVar11;
                  bVar39 = *pbVar16;
                  goto code_r0x0040238b;
                }
                *(char *)puVar28 = (char)*puVar28 + cVar11;
                cVar11 = cVar11 + '\x02';
                pcVar18 = (char *)CONCAT31((int3)((uint)puVar28 >> 8),cVar11);
                puVar42 = puVar48;
                if ((POPCOUNT(cVar11) & 1U) == 0) {
code_r0x00402402:
                  *pcVar18 = *pcVar18 + (char)pcVar18;
                  uVar29 = (undefined3)((uint)pcVar18 >> 8);
                  piVar27 = (int *)CONCAT31(uVar29,(char)pcVar18 + 'r');
                  *piVar27 = *piVar27 + 0x7b027000;
                  cVar11 = (char)*piVar27;
                  pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                  pbVar16 = (byte *)((int)puVar43 + (int)pcVar18);
                  *pbVar16 = *pbVar16 + cVar11;
                  puVar48 = puVar42;
                  if ((POPCOUNT(*pbVar16) & 1U) == 0) {
                    *pcVar18 = *pcVar18 + cVar11;
                    bVar39 = cVar11 + '{' + *(char *)CONCAT31(uVar29,cVar11 + '{');
                    piVar27 = (int *)CONCAT31(uVar29,bVar39);
                    pbVar16 = (byte *)((int)piVar27 + (int)unaff_EBP);
                    bVar7 = *pbVar16;
                    *pbVar16 = *pbVar16 + bVar39;
                    *piVar27 = (*piVar27 - (int)piVar27) - (uint)CARRY1(bVar7,bVar39);
                    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar14;
                    puVar48 = puVar42 + 1;
                    out(*puVar42,(short)puVar43);
                    cVar11 = bVar39 - (char)*piVar27;
                    pbVar16 = (byte *)CONCAT31(uVar29,cVar11);
                    *(byte *)puVar48 = (byte)*puVar48 + cVar11;
                    puVar42 = puVar43;
code_r0x00402425:
                    out(*puVar48,(short)puVar42);
                    uVar17 = *puVar42;
                    *(byte *)puVar42 = (byte)*puVar42 + (byte)puVar14;
                    uVar17 = (uint)CARRY1((byte)uVar17,(byte)puVar14);
                    pbVar33 = (byte *)((int)puVar14 + *puVar14) + uVar17;
                    puVar14 = (uint *)CONCAT31((int3)((uint)pbVar33 >> 8),
                                               (char)pbVar33 + *pbVar33 +
                                               (CARRY4((uint)puVar14,*puVar14) ||
                                               CARRY4((int)puVar14 + *puVar14,uVar17)));
                    cRam130a0000 = cRam130a0000 - (char)((uint)pbVar15 >> 8);
                    puVar43 = puVar42;
                    puVar48 = puVar48 + 1;
code_r0x00402435:
                    puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                               (byte)puVar43 | (byte)*puVar43);
                    bVar7 = *pbVar16;
                    *pbVar16 = *pbVar16 + (char)pbVar16;
                    puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                               CONCAT11((byte)((uint)puVar14 >> 8) | bVar7 |
                                                        bRam7d170243,(char)puVar14));
code_r0x00402442:
                    pbVar33 = (byte *)((int)puVar43 + (int)pbVar16);
                    bVar39 = *pbVar33;
                    bVar7 = (byte)pbVar16;
                    *pbVar33 = *pbVar33 + bVar7;
                    uVar17 = *puVar43;
                    uVar22 = *puVar43;
                    *puVar43 = (uint)((byte *)(uVar22 + (int)puVar14) + CARRY1(bVar39,bVar7));
                    puVar42 = puVar43;
                    if ((SCARRY4(uVar17,(int)puVar14) !=
                        SCARRY4((int)(uVar22 + (int)puVar14),(uint)CARRY1(bVar39,bVar7))) !=
                        (int)*puVar43 < 0) {
                      *pbVar16 = *pbVar16 + bVar7;
                      bVar58 = SCARRY1(bVar7,'\x02');
                      bVar7 = bVar7 + 2;
                      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
code_r0x0040244f:
                      bVar56 = (char)bVar7 < '\0';
                      if (bVar58 == bVar56) {
code_r0x00402451:
                        *pbVar16 = *pbVar16 + (char)pbVar16;
                        bVar7 = (char)pbVar16 + 0x12U | (byte)*puVar43;
                        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
                        cRam162b0000 = cRam162b0000 - bVar7;
code_r0x0040245d:
                        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),
                                                   (byte)pbVar15 | (byte)((uint)puVar14 >> 8));
                        cVar11 = in((short)puVar43);
                        puVar28 = (ushort *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar11);
                        *(char *)puVar28 = (char)*puVar28 + cVar11;
                        *(byte *)puVar43 = (byte)*puVar43 + cVar11;
                        if ((POPCOUNT((byte)*puVar43) & 1U) == 0) {
code_r0x00402466:
                          *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
                          uVar29 = (undefined3)((uint)puVar28 >> 8);
                          bVar7 = (char)puVar28 + 0x13U | (byte)*puVar43;
                          pcVar18 = (char *)CONCAT31(uVar29,bVar7);
                          cVar11 = (byte)puVar14 + *pbVar15;
                          puVar42 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),cVar11);
                          cRam1b000019 = cRam1b000019 + '\x01';
                          uVar17 = (uint)CARRY1((byte)puVar14,*pbVar15);
                          iVar13 = *(int *)pbVar15;
                          iVar1 = *(int *)pbVar15;
                          *(byte **)pbVar15 = (byte *)(iVar1 + (int)puVar42) + uVar17;
                          if ((SCARRY4(iVar13,(int)puVar42) != SCARRY4(iVar1 + (int)puVar42,uVar17))
                              != *(int *)pbVar15 < 0) {
                            *pcVar18 = *pcVar18 + bVar7;
                            iVar13 = CONCAT31(uVar29,bVar7 + 2) + 0x847d + (uint)(0xfd < bVar7);
                            uVar29 = (undefined3)((uint)iVar13 >> 8);
                            bVar7 = (char)iVar13 + 0x12;
                            puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                                       CONCAT11((byte)((uint)puVar14 >> 8) |
                                                                *(byte *)CONCAT31(uVar29,bVar7),
                                                                cVar11));
                            bVar47 = 9 < (bVar7 & 0xf) | bVar47;
                            uVar17 = CONCAT31(uVar29,bVar7 + bVar47 * -6) & 0xffffff0f;
                            pcVar18 = (char *)CONCAT22((short)(uVar17 >> 0x10),
                                                       CONCAT11((char)((uint)iVar13 >> 8) - bVar47,
                                                                (char)uVar17));
code_r0x00402486:
                            *pcVar18 = *pcVar18 + (char)pcVar18;
                            puVar45 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                                       (byte)puVar43 | (byte)*puVar43);
                            uVar37 = (undefined2)((uint)pbVar15 >> 0x10);
                            bVar7 = (byte)((uint)pbVar15 >> 8) | (byte)((uint)puVar43 >> 8);
                            pbVar16 = (byte *)(pcVar18 + 0x1b000019);
                            puVar42 = (uint *)((int)puVar45 + (int)pbVar16);
                            bVar55 = CARRY4((uint)puVar14,*puVar42);
                            pbVar33 = (byte *)((int)puVar14 + *puVar42);
                            puVar14 = (uint *)(pbVar33 + ((char *)0xe4ffffe6 < pcVar18));
                            piVar27 = (int *)((int)unaff_EDI * 2 + 0x400008b);
                            *piVar27 = (int)((int)puVar14 +
                                            (uint)(bVar55 ||
                                                  CARRY4((uint)pbVar33,
                                                         (uint)((char *)0xe4ffffe6 < pcVar18))) +
                                            *piVar27);
                            pbVar15 = (byte *)CONCAT22(uVar37,CONCAT11(bVar7 + *(char *)(CONCAT22(
                                                  uVar37,CONCAT11(bVar7,(char)pbVar15)) + -0x79),
                                                  (char)pbVar15));
                            puVar43 = puVar45;
code_r0x0040249e:
                            bVar7 = (byte)pbVar16;
                            *pbVar16 = *pbVar16 + bVar7;
                            uVar29 = (undefined3)((uint)pbVar16 >> 8);
                            cVar11 = bVar7 + 2;
                            pbVar16 = (byte *)CONCAT31(uVar29,cVar11);
                            puVar42 = puVar43;
                            if (0xfd < bVar7) {
                              bVar39 = *pbVar16;
                              *pbVar16 = *pbVar16 + cVar11;
                              if (SCARRY1(bVar39,cVar11) == (char)*pbVar16 < '\0')
                              goto code_r0x00402435;
                              *pbVar16 = *pbVar16 + cVar11;
                              cVar11 = bVar7 + 4;
                              pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                              if ((POPCOUNT(cVar11) & 1U) != 0) {
                                *(byte *)puVar43 = (byte)*puVar43 + (char)puVar14;
                                pbVar16 = (byte *)(pcVar18 + -0x7d170243);
                                goto code_r0x00402442;
                              }
                              *pcVar18 = *pcVar18 + cVar11;
                              cVar11 = bVar7 + 6;
                              pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                              if ((POPCOUNT(cVar11) & 1U) == 0) {
                                while( true ) {
                                  cVar11 = (char)pcVar18;
                                  *pcVar18 = *pcVar18 + cVar11;
                                  uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                  pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '}');
                                  puVar48 = (uint *)((int)puVar48 + -1);
                                  *pcVar18 = *pcVar18 + cVar11 + '}';
                                  cVar9 = cVar11 + '\x7f';
                                  pbVar16 = (byte *)CONCAT31(uVar29,cVar9);
                                  if ((POPCOUNT(cVar9) & 1U) != 0) break;
                                  *pbVar16 = *pbVar16 + cVar9;
                                  cVar9 = cVar11 + -0x7f;
                                  pbVar16 = (byte *)CONCAT31(uVar29,cVar9);
                                  if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x00402451;
                                  *pbVar16 = *pbVar16 + cVar9;
                                  pcVar18 = (char *)CONCAT31(uVar29,cVar11 + -2);
                                  unaff_EDI = unaff_EDI + -1;
                                  while( true ) {
                                    cVar11 = (char)pcVar18;
                                    *pcVar18 = *pcVar18 + cVar11;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    cVar9 = cVar11 + '\x02';
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar9);
                                    if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040245d;
                                    *pcVar18 = *pcVar18 + cVar9;
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar11 + 'q') + 1);
                                    *pcVar18 = *pcVar18 + (byte)pcVar18;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    bVar7 = (byte)pcVar18 | (byte)*puVar43;
                                    pcVar18 = (char *)CONCAT31(uVar29,bVar7);
                                    if ((POPCOUNT(bVar7) & 1U) != 0) {
                                      puVar14 = (uint *)((int)puVar14 + *puVar43);
                                      puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                                                 (char)puVar43 + (byte)*puVar43);
                                      unaff_EDI = (byte *)((uint)unaff_EDI | (uint)puVar48);
                                      puVar28 = (ushort *)(pcVar18 + 0x1b000019);
                                      goto code_r0x00402466;
                                    }
                                    *pcVar18 = *pcVar18 + bVar7;
                                    pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x6f);
                                    puVar14 = (uint *)((int)puVar14 + 1);
                                    *pcVar18 = *pcVar18 + bVar7 + 0x6f;
                                    uVar37 = (undefined2)((uint)pbVar15 >> 0x10);
                                    bVar7 = (byte)pbVar15;
                                    bVar39 = (byte)((uint)pbVar15 >> 8) | (byte)*puVar43;
                                    uVar54 = (ushort)uStack_8;
                                    uStack_8 = CONCAT22(uStack_8._2_2_,in_ES);
                                    cVar9 = (char)(pcVar18 + -0x21000001);
                                    uVar29 = (undefined3)((uint)(pcVar18 + -0x21000001) >> 8);
                                    cVar11 = cVar9 + -0x13;
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                                    cVar8 = bVar39 + *(char *)(CONCAT22(uVar37,CONCAT11(bVar39,bVar7
                                                                                       )) + -0x73);
                                    pbVar15 = (byte *)CONCAT22(uVar37,CONCAT11(cVar8,bVar7));
                                    *pcVar18 = *pcVar18 + cVar11;
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar9 + '\x19') | *puVar43);
                                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0)
                                    goto code_r0x00402486;
                                    cVar11 = (char)pcVar18;
                                    *pcVar18 = *pcVar18 + cVar11;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    pcVar21 = (char *)CONCAT31(uVar29,cVar11 + 'o');
                                    puVar42 = (uint *)((int)puVar43 + 1);
                                    *pcVar21 = *pcVar21 + cVar11 + 'o';
                                    bVar7 = bVar7 | (byte)((uint)pcVar18 >> 8);
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '\\');
                                    cVar8 = cVar8 + *(char *)(CONCAT31((int3)((uint)pbVar15 >> 8),
                                                                       bVar7) + -0x78);
                                    pbVar15 = (byte *)CONCAT22(uVar37,CONCAT11(cVar8,bVar7));
                                    *pcVar18 = *pcVar18 + cVar11 + '\\';
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar11 + -0x78) | *puVar42);
                                    cVar11 = (char)pcVar18;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0) {
                                      pbVar16 = (byte *)CONCAT31(uVar29,cVar11 + '\x02');
                                      puVar43 = puVar42;
                                      if ((POPCOUNT(cVar11 + '\x02') & 1U) == 0)
                                      goto code_r0x0040249e;
                                      goto code_r0x00402425;
                                    }
                                    *pcVar18 = *pcVar18 + cVar11;
                                    cVar9 = cVar11 + 'o';
                                    pcVar21 = (char *)CONCAT31(uVar29,cVar9);
                                    puVar43 = (uint *)((int)puVar43 + 2);
                                    *pcVar21 = *pcVar21 + cVar9;
                                    bVar7 = bVar7 | (byte)((uint)pcVar18 >> 8);
                                    pbVar15 = (byte *)CONCAT22(uVar37,CONCAT11(cVar8 + *(char *)(
                                                  CONCAT31((int3)((uint)pbVar15 >> 8),bVar7) + -0x79
                                                  ),bVar7));
                                    *pcVar21 = *pcVar21 + cVar9;
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar11 + 'z') | 2);
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    cVar11 = (char)pcVar18;
                                    *pcVar18 = *pcVar18 + cVar11;
                                    cVar9 = cVar11 + '\x02';
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar9);
                                    if (SCARRY1(cVar11,'\x02') != cVar9 < '\0') break;
                                    *pcVar18 = *pcVar18 + cVar9;
                                    cVar9 = cVar11 + '\n';
                                    *pbVar15 = *pbVar15 - cVar9;
                                    *(byte *)puVar43 = *(byte *)puVar43 + (char)puVar14;
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    *(char *)CONCAT31(uVar29,cVar9) =
                                         *(char *)CONCAT31(uVar29,cVar9) + cVar9;
                                    cVar8 = cVar11 + '\f';
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar8);
                                    if (SCARRY1(cVar9,'\x02') == cVar8 < '\0') {
                                      *pcVar18 = *pcVar18 + cVar8;
                                      pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '\x13');
                                      uVar54 = in_ES;
                                      goto code_r0x0040254a;
                                    }
                                  }
                                }
                                pbVar33 = (byte *)((int)puVar43 + (int)pbVar16);
                                bVar58 = SCARRY1(*pbVar33,cVar9);
                                *pbVar33 = *pbVar33 + cVar9;
                                bVar7 = *pbVar33;
                                goto code_r0x0040244f;
                              }
                              cVar9 = (char)puVar43;
                              cVar8 = cVar9 + *unaff_EDI;
                              puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),cVar8);
                              if (SCARRY1(cVar9,*unaff_EDI) != cVar8 < '\0') {
                                *pcVar18 = *pcVar18 + cVar11;
                                pbVar16 = (byte *)CONCAT31(uVar29,bVar7 + 8);
                                goto code_r0x00402442;
                              }
                              cRam1b000013 = cRam1b000013 + '\x01';
                              goto code_r0x004023cd;
                            }
                            goto code_r0x00402425;
                          }
                          pcVar21 = pcVar18 + 2;
                          *pcVar21 = *pcVar21 + (char)((uint)puVar43 >> 8);
                          puVar14 = puVar42;
                          if ((POPCOUNT(*pcVar21) & 1U) == 0) {
                            *pcVar18 = *pcVar18 + bVar7;
                            pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 2);
                            puVar42 = puVar48;
                            goto code_r0x00402402;
                          }
                          puVar43 = (uint *)((int)puVar43 - *puVar48);
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
                pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                           CONCAT11((char)((uint)pbVar15 >> 8) +
                                                    unaff_EBP[(int)pcVar18 * 4],(char)pbVar15));
                *(char *)((int)puVar43 * 2) = *(char *)((int)puVar43 * 2) + cVar11;
                in_ES = uVar54;
                goto code_r0x00402391;
              }
              *pcVar18 = *pcVar18 + cVar9;
              pbVar16 = (byte *)CONCAT31(uVar29,cVar9 + '\x02');
              goto code_r0x00402368;
            }
            goto code_r0x00402366;
          }
          goto code_r0x00402342;
        }
        LOCK();
        pcVar18 = *(char **)puVar28;
        *(ushort **)puVar28 = puVar28;
        UNLOCK();
        *(byte *)((int)puVar43 + (int)pcVar18) =
             *(byte *)((int)puVar43 + (int)pcVar18) + (char)pcVar18;
        goto code_r0x00402317;
      }
      bVar55 = CARRY1(*pbVar16,(byte)pbVar16);
      *pbVar16 = *pbVar16 + (byte)pbVar16;
code_r0x004022f3:
      *(byte **)unaff_EDI = (byte *)((int)puVar42 + (uint)bVar55 + *(int *)unaff_EDI);
    }
  } while( true );
code_r0x0040254a:
  cVar11 = (char)pcVar18;
  *(char *)((int)pcVar18 * 2) = *(char *)((int)pcVar18 * 2) - cVar11;
  *pcVar18 = *pcVar18 + cVar11;
  pcVar21 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar11 + *pcVar18);
  *pcVar21 = *pcVar21 + cVar11 + *pcVar18;
  uStack_c = 0x4025;
  uVar59 = func_0x0f40255d();
  uVar51 = uStack_c;
code_r0x0040255d:
  uStack_c = uVar51;
  pcVar18 = (char *)((ulonglong)uVar59 >> 0x20);
  piVar27 = (int *)uVar59;
  *piVar27 = (int)((int)piVar27 + *piVar27);
  uVar37 = (undefined2)((uint)pbVar15 >> 0x10);
  uVar32 = SUB41(pbVar15,0);
  cVar8 = (char)((uint)pbVar15 >> 8) + (char)((ulonglong)uVar59 >> 0x28);
  pcVar21 = (char *)CONCAT22(uVar37,CONCAT11(cVar8,uVar32));
  *piVar27 = (int)((int)piVar27 + *piVar27);
  *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar59 >> 0x20);
  cVar11 = (char)uVar59;
  *(char *)piVar27 = (char)*piVar27 + cVar11;
  *(char *)piVar27 = (char)*piVar27 + cVar11;
  *(char *)piVar27 = (char)*piVar27 + cVar11;
  *pcVar18 = *pcVar18 + cVar11;
  *(char *)piVar27 = (char)*piVar27 + cVar11;
  *pcVar21 = *pcVar21 + cVar11;
  *(char *)piVar27 = (char)*piVar27 + cVar11;
  pcVar3 = (code *)swi(1);
  uVar59 = (*pcVar3)();
  pbVar33 = (byte *)((ulonglong)uVar59 >> 0x20);
  pbVar16 = (byte *)uVar59;
  bVar7 = *pbVar16;
  bVar39 = (byte)uVar59;
  *pbVar16 = *pbVar16 + bVar39;
  *pbVar33 = *pbVar33 + bVar39 + CARRY1(bVar7,bVar39);
  *pbVar16 = *pbVar16 + bVar39;
  *pbVar16 = *pbVar16 + bVar39;
  *pbVar16 = *pbVar16 + bVar39;
  *pbVar16 = *pbVar16 + bVar39;
  *pbVar16 = *pbVar16 + bVar39;
  *pbVar16 = *pbVar16 + bVar39;
  *pbVar16 = *pbVar16 + bVar39;
  *pbVar16 = *pbVar16 + bVar39;
  cVar11 = (char)((ulonglong)uVar59 >> 0x28);
  *pbVar16 = *pbVar16 + cVar11;
  bVar7 = *pbVar16;
  uVar29 = (undefined3)((ulonglong)uVar59 >> 8);
  pcVar18 = (char *)CONCAT31(uVar29,bVar39 + bVar7);
  *pcVar18 = *pcVar18 + cVar11;
  cVar11 = bVar39 + bVar7 + *pcVar18;
  pcVar18 = (char *)CONCAT31(uVar29,cVar11);
  cVar9 = (char)((ulonglong)uVar59 >> 0x20);
  *unaff_EDI = *unaff_EDI + cVar9;
  *pcVar18 = *pcVar18 + cVar11;
  *pcVar18 = *pcVar18 + cVar9;
  *pcVar18 = *pcVar18 + cVar11;
  *puVar48 = (uint)(*puVar48 + (int)puVar48);
  cVar8 = cVar8 + unaff_EBP[(int)pcVar18 * 4];
  pbVar15 = (byte *)CONCAT22(uVar37,CONCAT11(cVar8,uVar32));
  pbVar15[(int)pcVar18] = pbVar15[(int)pcVar18] + cVar11;
  *(byte *)puVar48 = (byte)*puVar48 - cVar11;
  *pbVar33 = *pbVar33 + (char)extraout_ECX;
  bVar39 = cVar11 - *pcVar18;
  pcVar18 = (char *)CONCAT31(uVar29,bVar39);
  *pbVar15 = *pbVar15 + cVar9;
  *pbVar33 = *pbVar33 ^ bVar39;
  *pbVar33 = *pbVar33 + cVar8;
  *pcVar18 = *pcVar18 + bVar39;
  cRam12110000 = cRam12110000 + bVar39;
  bVar7 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar39;
  pbVar16 = extraout_ECX;
  if (SCARRY1(bVar7,bVar39) != (char)*pbVar33 < '\0') {
code_r0x004025bd:
    *pcVar18 = *pcVar18 + (char)pcVar18;
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x12');
    *pcVar18 = *pcVar18 + (char)((uint)pbVar16 >> 8);
    pcVar18 = pcVar18 + -1;
    cVar11 = (char)pcVar18;
    *pcVar18 = *pcVar18 + cVar11;
    bVar7 = (byte)((uint)pbVar15 >> 8) | unaff_EBP[-0x7b];
    pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),CONCAT11(bVar7,(char)pbVar15));
    *pcVar18 = *pcVar18 + cVar11;
    cRam0000847d = cRam0000847d + (char)pbVar33;
    pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar11 + '$');
    pbVar15[-0x7b] = pbVar15[-0x7b] + bVar7;
    pbVar19 = pbVar16;
code_r0x004025d8:
    bVar7 = (byte)pbVar20;
    *pbVar20 = *pbVar20 + bVar7;
    bVar55 = 0xf4 < bVar7;
    pcVar18 = (char *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar7 + 0xb);
    pbVar20 = unaff_EBP;
    do {
      bVar7 = (byte)pcVar18 + *pbVar19;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      cVar11 = bVar7 + bVar55;
      cVar11 = cVar11 + *(char *)CONCAT31(uVar29,cVar11) +
               (CARRY1((byte)pcVar18,*pbVar19) || CARRY1(bVar7,bVar55));
      pcVar18 = (char *)CONCAT31(uVar29,cVar11);
      *(byte *)puVar48 = (byte)*puVar48 - cVar11;
      *pcVar18 = *pcVar18 + cVar11;
      iVar13 = *(int *)pbVar33;
      pbVar20[(int)pcVar18 * 4] = pbVar20[(int)pcVar18 * 4] + (char)((uint)pbVar15 >> 8);
      pcVar18[(int)pbVar20] = pcVar18[(int)pbVar20] + cVar11;
      pbVar44 = pbVar33 + (-1 - iVar13);
      *pcVar18 = *pcVar18 + cVar11;
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar19 >> 8) | *pbVar44) + unaff_EDI[0x22],
                                          (char)pbVar19));
      *pcVar18 = *pcVar18 + cVar11;
      bVar40 = (char)pbVar44 - pbVar33[1 - iVar13];
      bVar10 = cVar11 - 0xf;
      pbVar19 = (byte *)CONCAT31(uVar29,bVar10);
      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar44 >> 0x10),
                                 CONCAT11((char)((uint)pbVar44 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar44 >> 8),bVar40) +
                                                   -0x3f),bVar40));
      bVar39 = *pbVar19;
      bVar7 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar10;
      uVar51 = uVar54;
      if (SCARRY1(bVar7,bVar10)) {
        pbVar19 = (byte *)CONCAT31(uVar29,bVar10 + pbVar19[(int)pbVar20] + CARRY1(bVar39,bVar10));
        goto code_r0x00402677;
      }
      pbVar15 = pbVar15 + -1;
      *pbVar19 = *pbVar19 + bVar10;
      uVar17 = *puVar48;
      *pbVar16 = *pbVar16 + 1;
      pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),(bVar40 | (byte)uVar17) - (byte)*puVar48
                                );
      puVar48 = (uint *)((int)puVar48 +
                        (-(uint)(bVar10 < *pbVar19) - *(int *)CONCAT31(uVar29,bVar10 - *pbVar19)));
      unaff_EBP = (byte *)CONCAT31(uVar29,bVar10 - *pbVar19);
      *(byte **)pbVar20 = pbVar20 + *(int *)pbVar20;
      bVar39 = (byte)pbVar20;
      *(byte *)puVar48 = (byte)*puVar48 + bVar39;
      bVar7 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar39;
      *(byte **)unaff_EDI = pbVar33 + (uint)CARRY1(bVar7,bVar39) + *(int *)unaff_EDI;
      uVar29 = (undefined3)((uint)pbVar20 >> 8);
      bVar39 = bVar39 | *pbVar33;
      pcVar18 = (char *)CONCAT31(uVar29,bVar39);
      if ((POPCOUNT(bVar39) & 1U) != 0) {
        *pcVar18 = *pcVar18 + bVar39;
        uVar59 = CONCAT44(pbVar33,pcVar18 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar18 = *pcVar18 + bVar39;
      bVar7 = bVar39 + 0xd;
      pbVar19 = (byte *)CONCAT31(uVar29,bVar7);
      *puVar48 = *puVar48 | (uint)pbVar33;
      if (-1 < (int)*puVar48) {
code_r0x00402678:
        *pbVar19 = *pbVar19 + (char)pbVar19;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar16 >> 8) | bRam7d160243,(char)pbVar16)
                                  );
        pbVar20 = unaff_EDI;
code_r0x00402680:
        bVar7 = (byte)pbVar16;
        *pbVar16 = *pbVar16 + bVar7;
        uVar29 = (undefined3)((uint)pbVar16 >> 8);
        piVar27 = (int *)((int)pbVar20 * 2 + 0x400009a);
        *piVar27 = *piVar27 + CONCAT31(uVar29,bVar7 + 2) + (uint)(0xfd < bVar7);
        pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                   CONCAT11((char)((uint)pbVar15 >> 8) + *(char *)((int)pbVar33 * 5)
                                            ,(char)pbVar15));
        *(char *)((int)pbVar33 * 2) = *(char *)((int)pbVar33 * 2) + bVar7 + 2;
        unaff_EDI = (byte *)CONCAT31(uVar29,bVar7 + 4);
        *pbVar20 = *pbVar20 - (bVar7 + 4);
code_r0x00402697:
        *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
        pbVar33 = pbVar33 + -*puVar48;
        pbVar16 = unaff_EDI;
code_r0x0040269b:
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),
                                   (byte)pbVar15 | (byte)((uint)pbVar19 >> 8));
        uVar34 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar16 = uVar34;
        cVar11 = (char)pbVar16;
        *pbVar33 = *pbVar33 + cVar11;
        if ((POPCOUNT(*pbVar33) & 1U) == 0) {
          *pbVar16 = *pbVar16 + cVar11;
          pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar11 + '\x13');
          pbVar16 = pbVar19;
          unaff_EDI = pbVar20;
code_r0x004026a8:
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          bVar39 = (byte)pcVar18 + 2 + cRam001b15fe + (0xfd < (byte)pcVar18);
          bVar7 = *pbVar15;
          bVar10 = (byte)pbVar15;
          *pbVar15 = *pbVar15 + bVar10;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar29,bVar39) + (uint)CARRY1(bVar7,bVar10);
          iVar13 = CONCAT31(uVar29,bVar39 + 2) + 0x917d + (uint)(0xfd < bVar39);
          cVar11 = (char)iVar13;
          uVar29 = (undefined3)((uint)iVar13 >> 8);
          bVar7 = cVar11 + 0x3a;
          pbVar44 = (byte *)CONCAT31(uVar29,bVar7);
          *pbVar44 = *pbVar44 + bVar7;
          uVar46 = (undefined3)((uint)pbVar33 >> 8);
          bVar39 = (byte)pbVar33 | *pbVar33;
          uVar22 = CONCAT31(uVar29,cVar11 + '8');
          uVar17 = uVar22 + 0x1b00001b;
          pcVar18 = (char *)(uVar17 + (1 < bVar7) + *puVar48 +
                            (uint)(0xe4ffffe4 < uVar22 || CARRY4(uVar17,(uint)(1 < bVar7))));
          bVar7 = bVar39 + *pbVar16;
          pbVar33 = (byte *)CONCAT31(uVar46,bVar7);
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          cVar11 = (char)pcVar18;
          if (SCARRY1(bVar39,*pbVar16) != (char)bVar7 < '\0') {
            *pcVar18 = *pcVar18 + cVar11;
            pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '\x02');
            uVar37 = (undefined2)((uint)pbVar15 >> 0x10);
            cVar8 = (char)((uint)pbVar15 >> 8) + pbVar15[-0x68];
            pbVar15 = (byte *)CONCAT22(uVar37,CONCAT11(cVar8,bVar10));
            *pcVar18 = *pcVar18 + cVar11 + '\x02';
            bVar39 = cVar11 + 0x2a;
            pbVar19 = (byte *)CONCAT31(uVar29,bVar39);
            *pbVar19 = *pbVar19 | bVar39;
            bVar7 = *pbVar15;
            cVar9 = (char)((uint)pbVar16 >> 8);
            *pbVar15 = *pbVar15 + cVar9;
            pbVar20 = unaff_EDI;
            if (SCARRY1(bVar7,cVar9) != (char)*pbVar15 < '\0') {
              *pbVar19 = *pbVar19 + bVar39;
              bVar7 = cVar11 + 0x2c;
              if ((POPCOUNT(bVar7) & 1U) == 0) {
                *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
                bVar39 = cVar11 + 0x59;
                pcVar18 = (char *)CONCAT31(uVar29,bVar39);
                *(char **)pbVar33 = pcVar18 + (uint)(0xd2 < bVar7) + *(int *)pbVar33;
                pbVar15 = (byte *)CONCAT22(uVar37,CONCAT11(cVar8 + pbVar15[-0x67],bVar10));
                *pcVar18 = *pcVar18 + bVar39;
                pbVar20 = (byte *)((CONCAT31(uVar29,cVar11 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar39));
                pbVar19 = pbVar16;
                uStack_10 = in_ES;
code_r0x00402700:
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar11 = (char)unaff_EDI + '\x02';
                pbVar16 = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar11);
                bVar55 = (POPCOUNT(cVar11) & 1U) == 0;
                unaff_EDI = pbVar44;
code_r0x00402704:
                if (bVar55) {
                  *pbVar16 = *pbVar16 + (char)pbVar16;
                  cVar11 = (char)pbVar16 + '\x02';
                  pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar11);
                  puVar14 = puVar48;
                  if ((POPCOUNT(cVar11) & 1U) == 0) {
code_r0x0040270c:
                    uVar53 = in_ES;
                    cVar11 = (char)pcVar18;
                    *pcVar18 = *pcVar18 + cVar11;
                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                    bVar7 = cVar11 + 0x6f;
                    piVar27 = (int *)CONCAT31(uVar29,bVar7);
                    iVar13 = *piVar27;
                    *(byte *)piVar27 = (char)*piVar27 + bVar7;
                    in_ES = uVar53;
                    pbVar16 = pbVar33;
                    if ((char)*piVar27 != '\0' &&
                        SCARRY1((char)iVar13,bVar7) == (char)*piVar27 < '\0') {
                      *(byte *)piVar27 = (char)*piVar27 + bVar7;
                      bVar39 = cVar11 + 0x9c;
                      piVar27 = (int *)CONCAT31(uVar29,bVar39);
                      puVar42 = puVar14 + (int)pbVar20 * 2;
                      uVar17 = *puVar42;
                      uVar22 = *puVar42;
                      *puVar42 = (uint)(pbVar33 + uVar22 + (0xd2 < bVar7));
                      *piVar27 = (*piVar27 - (int)piVar27) -
                                 (uint)(CARRY4(uVar17,(uint)pbVar33) ||
                                       CARRY4((uint)(pbVar33 + uVar22),(uint)(0xd2 < bVar7)));
                      uVar17 = *puVar14;
                      *(byte *)puVar14 = (byte)*puVar14 + bVar39;
                      pbVar16 = (byte *)CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar53);
                      if (!CARRY1((byte)uVar17,bVar39)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    unaff_EDI = pbVar16;
                    uVar51 = uStack_10;
                    *(byte *)piVar27 = (char)*piVar27 + (byte)piVar27;
                    uVar29 = (undefined3)((uint)piVar27 >> 8);
                    bVar7 = (byte)piVar27 | *(byte *)((int)piVar27 + 0x400000d);
                    pcVar18 = (char *)CONCAT31(uVar29,bVar7);
                    if ((char)bVar7 < '\x01') {
                      bVar55 = pcVar18 < (char *)0x6fe1411;
                      pcVar18 = pcVar18 + -0x6fe1411;
                    }
                    else {
                      *pcVar18 = *pcVar18 + bVar7;
                      bVar10 = bVar7 + 0x28;
                      puVar42 = (uint *)CONCAT31(uVar29,bVar10);
                      *puVar42 = *puVar42 | (uint)puVar42;
                      bVar39 = *pbVar15;
                      cVar11 = (char)((uint)pbVar19 >> 8);
                      *pbVar15 = *pbVar15 + cVar11;
                      if (*pbVar15 == 0 || SCARRY1(bVar39,cVar11) != (char)*pbVar15 < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar42 = (char)*puVar42 + bVar10;
                      pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x55);
                      puVar42 = puVar14 + (int)pbVar20 * 2;
                      bVar55 = CARRY4(*puVar42,(uint)pbVar33) ||
                               CARRY4((uint)(pbVar33 + *puVar42),(uint)(0xd2 < bVar10));
                      *puVar42 = (uint)(pbVar33 + *puVar42 + (0xd2 < bVar10));
                      in_stack_ffffffe8 = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar29 = (undefined3)((uint)pcVar18 >> 8);
                      bVar7 = ((char)pcVar18 - *pcVar18) - bVar55;
                      puVar42 = (uint *)CONCAT31(uVar29,bVar7);
                      uVar17 = *puVar14;
                      *(byte *)puVar14 = (byte)*puVar14 + bVar7;
                      if (CARRY1((byte)uVar17,bVar7)) break;
                      pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),
                                                 (byte)pbVar15 | (byte)((uint)pbVar33 >> 8));
                      pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 2);
                      while( true ) {
                        uVar51 = (ushort)unaff_EDI;
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar11 = (char)pcVar18;
                        *pcVar18 = *pcVar18 + cVar11;
                        uVar29 = (undefined3)((uint)pcVar18 >> 8);
                        bVar7 = cVar11 + 2;
                        pcVar18 = (char *)CONCAT31(uVar29,bVar7);
                        if (SCARRY1(cVar11,'\x02') != (char)bVar7 < '\0') break;
                        *pcVar18 = *pcVar18 + bVar7;
                        cVar8 = (char)pbVar33;
                        *pbVar20 = *pbVar20 - cVar8;
                        *pbVar33 = *pbVar33 + (char)pbVar19;
                        bVar39 = (cVar11 + '\t') - *(char *)CONCAT31(uVar29,cVar11 + '\t');
                        pbVar16 = (byte *)CONCAT31(uVar29,bVar39);
                        bVar7 = *pbVar16;
                        *pbVar16 = *pbVar16 + bVar39;
                        pbVar44 = pbVar19 + 1;
                        cVar11 = bVar39 - CARRY1(bVar7,bVar39);
                        pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                        *pcVar18 = *pcVar18 + cVar11;
                        *pcVar18 = *pcVar18 + cVar11;
                        *pcVar18 = *pcVar18 + cVar11;
                        *pcVar18 = *pcVar18 + cVar11;
                        cVar9 = (char)((uint)pbVar44 >> 8);
                        pbVar19[2] = pbVar19[2] + cVar9;
                        *pcVar18 = *pcVar18 + cVar11;
                        pcVar18 = (char *)(*(int *)pbVar44 * 0x170000);
                        *pcVar18 = *pcVar18;
                        *pcVar18 = *pcVar18;
                        *pbVar44 = *pbVar44;
                        uVar37 = (undefined2)((uint)pbVar15 >> 0x10);
                        cVar11 = (char)pbVar15;
                        bVar10 = (char)((uint)pbVar15 >> 8) + *(char *)((int)pbVar33 * 5);
                        pbVar15 = (byte *)CONCAT22(uVar37,CONCAT11(bVar10,cVar11));
                        pbVar15[(int)pcVar18] = pbVar15[(int)pcVar18];
                        *pcVar18 = *pcVar18 - cVar11;
                        *pbVar33 = *pbVar33 + (char)pbVar44;
                        uVar29 = (undefined3)((uint)pcVar18 >> 8);
                        bVar39 = -*pcVar18;
                        pbVar16 = (byte *)CONCAT31(uVar29,bVar39);
                        *pbVar15 = *pbVar15 + cVar8;
                        *pbVar33 = *pbVar33 ^ bVar39;
                        *pbVar33 = *pbVar33 + bVar39;
                        *pbVar16 = *pbVar16 + bVar39;
                        bVar7 = *pbVar16;
                        *pbVar16 = *pbVar16 + bVar39;
                        *(byte **)pbVar33 = pbVar33 + (uint)CARRY1(bVar7,bVar39) + *(int *)pbVar33;
                        bVar7 = *pbVar33;
                        *pbVar33 = *pbVar33 + bVar39;
                        if (SCARRY1(bVar7,bVar39) == (char)*pbVar33 < '\0') {
                          pcVar18 = (char *)((uint)pbVar16 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar18 = *pcVar18 + (char)pcVar18;
                          uStack_c = uVar54;
                          uStack_10 = (ushort)uStack_8;
                        }
                        else {
                          *pbVar16 = *pbVar16 + bVar39;
                          cVar12 = bVar39 + 0x12;
                          pcVar18 = (char *)CONCAT31(uVar29,cVar12);
                          bVar7 = *pbVar15;
                          *pbVar15 = *pbVar15 + cVar12;
                          uStack_10 = uVar51;
                          if (SCARRY1(bVar7,cVar12) != (char)*pbVar15 < '\0') {
                            *pcVar18 = *pcVar18 + cVar12;
                            cVar12 = bVar39 + 0x24;
                            pcVar18 = (char *)CONCAT31(uVar29,cVar12);
                            *pcVar18 = *pcVar18 + cVar9;
                            pbVar16 = (byte *)CONCAT13(uStack_9,(uint3)uVar54);
                            *pcVar18 = *pcVar18 + cVar12;
                            bVar10 = bVar10 | unaff_EBP[-0x6e];
                            pcVar21 = (char *)CONCAT22(uVar37,CONCAT11(bVar10,cVar11));
                            *pcVar18 = *pcVar18 + cVar12;
                            cRam0000917d = cRam0000917d + cVar8;
                            bVar40 = bVar39 + 0x48;
                            pcVar21[-0x6e] = pcVar21[-0x6e] + bVar10;
                            *(char *)CONCAT31(uVar29,bVar40) =
                                 *(char *)CONCAT31(uVar29,bVar40) + bVar40;
                            bVar7 = bVar39 + 0x53 + *pbVar16;
                            cVar11 = bVar7 + (0xf4 < bVar40);
                            cVar11 = cVar11 + *(char *)CONCAT31(uVar29,cVar11) +
                                     (CARRY1(bVar39 + 0x53,*pbVar16) || CARRY1(bVar7,0xf4 < bVar40))
                            ;
                            pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                            *pcVar21 = *pcVar21 - (char)uVar54;
                            *pcVar18 = *pcVar18 + cVar11;
                            pbVar33 = pbVar33 + -*(int *)pbVar33;
                            *(char *)((int)pbVar33 * 5) = *(char *)((int)pbVar33 * 5) + bVar10;
                            pcVar18[(int)unaff_EBP] = pcVar18[(int)unaff_EBP] + cVar11;
                            *pcVar18 = *pcVar18 + cVar11;
                            bVar39 = (byte)(uVar54 >> 8) | *pbVar33;
                            uVar32 = (undefined1)uStack_8;
                            cVar9 = (char)((uint)uStack_8 >> 8) + *(char *)(uStack_8 + 0xf);
                            *pcVar18 = *pcVar18 + cVar11;
                            bVar7 = cVar11 + 0x2aU & *pbVar33;
                            iVar13 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar29,bVar7) =
                                 *(char *)CONCAT31(uVar29,bVar7) + bVar7;
                            pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
                            cVar9 = cVar9 + *(char *)(CONCAT22(uStack_8._2_2_,CONCAT11(cVar9,uVar32)
                                                              ) + 0x10);
                            *pcVar18 = *pcVar18 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar33;
                            iVar1 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar29,bVar7) =
                                 *(char *)CONCAT31(uVar29,bVar7) + bVar7;
                            pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
                            puVar43 = (uint *)CONCAT22(uStack_8._2_2_,
                                                       CONCAT11(cVar9 + *(char *)(CONCAT22(uStack_8.
                                                  _2_2_,CONCAT11(cVar9,uVar32)) + 0x11),uVar32));
                            *pcVar18 = *pcVar18 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar33;
                            puVar48 = (uint *)(pbVar20 + *(int *)(unaff_EBP + 0x11) + iVar1 + iVar13
                                              );
                            *(char *)CONCAT31(uVar29,bVar7) =
                                 *(char *)CONCAT31(uVar29,bVar7) + bVar7;
                            pbVar15 = (byte *)CONCAT31(uVar29,bVar7 + 0x2a);
                            puVar42 = (uint *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                                       CONCAT11(bVar39 + *pbVar15,(char)uVar54));
                            uVar59 = CONCAT44(pbVar33,pbVar15 + (uint)CARRY1(bVar39,*pbVar15) +
                                                                *(int *)pbVar15);
                            uVar54 = uVar51;
                            goto code_r0x00402866;
                          }
                        }
                        cVar11 = (char)pcVar18;
                        uVar29 = (undefined3)((uint)pcVar18 >> 8);
                        cVar9 = cVar11 + '\x02';
                        piVar27 = (int *)CONCAT31(uVar29,cVar9);
                        pbVar19 = pbVar44;
                        in_ES = uVar51;
                        pbVar16 = pbVar33;
                        if (SCARRY1(cVar11,'\x02') != cVar9 < '\0') goto code_r0x00402724;
                        *(char *)piVar27 = (char)*piVar27 + cVar9;
                        pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '\n');
                        *(byte *)puVar14 = (byte)*puVar14 - cVar8;
                        *pbVar33 = *pbVar33 + (char)pbVar44;
                      }
                      pbVar16 = unaff_EBP + 0x6fe1411;
                      bVar55 = CARRY1(*pbVar16,bVar7);
                      *pbVar16 = *pbVar16 + bVar7;
                    }
                    goto code_r0x00402746;
                  }
                  pbVar15[(int)pbVar33] = pbVar15[(int)pbVar33] + cVar11;
                  pbVar16 = pbVar19;
                  unaff_EDI = pbVar20;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar53 = 0x927c;
              in_stack_ffffffe0 = 0x40268f;
              uVar59 = func_0x02040000(in_CS,in_stack_ffffffe8,pbVar44);
              pbVar33 = (byte *)((ulonglong)uVar59 >> 0x20);
              *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
              pbVar19 = (byte *)CONCAT31((int3)((ulonglong)uVar59 >> 8),(char)uVar59 + '\x12');
              pbVar16 = extraout_ECX_00;
              in_CS = uVar53;
            }
            goto code_r0x00402680;
          }
          pbVar20 = unaff_EBP + -1;
          *pcVar18 = *pcVar18 + cVar11;
          pbVar33 = (byte *)CONCAT31(uVar46,bVar7 | *pbVar15);
          pbVar19 = (byte *)CONCAT31(uVar29,cVar11 + ':');
code_r0x00402677:
          puVar48 = (uint *)((int)puVar48 + -1);
          unaff_EBP = pbVar20;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar19 = *pbVar19 + bVar7;
      pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar15 >> 8) | unaff_EBP[-0x6b],
                                          (char)pbVar15));
      *pbVar19 = *pbVar19 + bVar7;
      cVar11 = bVar39 + 0xf;
      pcVar18 = (char *)CONCAT31(uVar29,cVar11);
      uStack_8 = CONCAT22(uStack_8._2_2_,uStack_c);
      if (SCARRY1(bVar7,'\x02') == cVar11 < '\0') {
        pcVar18 = pcVar18 + (0xfd < bVar7) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar18 = *pcVar18 + cVar11;
      cVar9 = bVar39 + 0x11;
      pbVar20 = (byte *)CONCAT31(uVar29,cVar9);
      uVar59 = CONCAT44(pbVar33,pbVar20);
      uStack_8 = CONCAT22(uStack_8._2_2_,uStack_c);
      pbVar19 = pbVar16;
      pbVar16 = unaff_EDI;
      if (SCARRY1(cVar11,'\x02') == cVar9 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar20 = *pbVar20 + (char)pbVar20;
      bVar7 = (char)pbVar20 + 2;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pcVar18 = *pcVar18 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar20 = pbVar15 + (int)pbVar19;
      bVar55 = CARRY1(*pbVar20,bVar7);
      *pbVar20 = *pbVar20 + bVar7;
      pbVar20 = unaff_EBP;
      unaff_EDI = pbVar16;
      uVar54 = uVar51;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar42 = (char)*puVar42 + (byte)puVar42;
  uVar29 = (undefined3)((uint)puVar42 >> 8);
  bVar7 = (byte)puVar42 | *(byte *)((int)puVar42 + 0x400000e);
  pcVar18 = (char *)CONCAT31(uVar29,bVar7);
  puVar48 = puVar14;
  if ('\0' < (char)bVar7) {
    *pcVar18 = *pcVar18 + bVar7;
    bVar7 = bVar7 + 0x28 | *(byte *)CONCAT31(uVar29,bVar7 + 0x28);
    *pbVar15 = *pbVar15 + (char)((uint)pbVar19 >> 8);
    puVar48 = puVar14 + 1;
    out(*puVar14,(short)pbVar33);
    *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
    pcVar18 = (char *)(uint)(bVar7 | *pbVar33);
    in_stack_ffffffe8 = unaff_EBP;
  }
  bVar7 = (byte)pcVar18 & 0x7b;
  bVar55 = (char)(bVar7 + 0x17) < '\0';
  uStack_10 = uVar53;
  if (SCARRY1(bVar7,'\x17') == bVar55) {
    pbVar44 = unaff_EDI;
    if (SCARRY1(bVar7,'\x17') != bVar55) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar9 = (char)unaff_EDI;
  *unaff_EDI = *unaff_EDI + cVar9;
  iVar31 = (int3)((uint)unaff_EDI >> 8);
  cVar11 = cVar9 + '\x02';
  pbVar16 = (byte *)CONCAT31(iVar31,cVar11);
  bVar55 = (POPCOUNT(cVar11) & 1U) == 0;
  if (!bVar55) goto code_r0x00402704;
  *pbVar16 = *pbVar16 + cVar11;
  cVar9 = cVar9 + '\x04';
  pcVar18 = (char *)CONCAT31(iVar31,cVar9);
  if ((POPCOUNT(cVar9) & 1U) == 0) {
    *pcVar18 = *pcVar18 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar33 = (byte *)((int)iVar31 >> 0x17);
  puVar14 = puVar48;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar45 = (uint *)((ulonglong)uVar59 >> 0x20);
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
    cVar11 = (char)puVar43 - (byte)*puVar14;
    iVar13 = CONCAT22((short)((uint)puVar43 >> 0x10),
                      CONCAT11((char)((uint)puVar43 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),cVar11) + 0x12),cVar11)
                     );
    *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
    uVar29 = (undefined3)((ulonglong)uVar59 >> 8);
    bVar7 = (char)uVar59 + 0x2aU & (byte)*puVar45;
    pcVar18 = (char *)CONCAT31(uVar29,bVar7);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x12));
    *pcVar18 = *pcVar18 + bVar7;
    puVar24 = (uint *)CONCAT31(uVar29,bVar7 + 0x2a);
    pbVar16 = (byte *)(uint)uVar54;
get_Value:
    cVar11 = *(char *)(iVar13 + 0x13);
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
    uVar29 = (undefined3)((uint)puVar24 >> 8);
    bVar7 = (char)puVar24 + 0x2aU & (byte)*puVar45;
    pcVar18 = (char *)CONCAT31(uVar29,bVar7);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x13));
    *pcVar18 = *pcVar18 + bVar7;
    pbVar15 = (byte *)CONCAT31(uVar29,bVar7 + 0x2a);
    uVar17 = (uint)uVar54;
    bVar39 = (byte)((uint)puVar42 >> 8);
    bVar7 = bVar39 + *pbVar15;
    pbVar15 = pbVar15 + (uint)CARRY1(bVar39,*pbVar15) + *(int *)pbVar15;
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
    puVar43 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar13 >> 0x10),
                                               CONCAT11((char)((uint)iVar13 >> 8) + cVar11,
                                                        (char)iVar13)) >> 8),
                               (char)iVar13 - (byte)*puVar14);
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11(bVar7 + *pbVar15,(char)puVar42));
    pbVar15 = pbVar15 + (uint)CARRY1(bVar7,*pbVar15) + *(int *)pbVar15;
code_r0x00402898:
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
    bVar7 = (byte)puVar45;
    uVar37 = CONCAT11((char)((uint)puVar45 >> 8) - (byte)*puVar14,bVar7);
    pbVar33 = (byte *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar37);
    pcVar18 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((char)((uint)puVar43 >> 8) + (byte)puVar43[-0x19],
                                        (char)puVar43));
    *pbVar15 = *pbVar15 + (char)pbVar15;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + '\x03');
    puVar43 = puVar14;
    do {
      puVar14 = puVar43 + 1;
      out(*puVar43,uVar37);
      pcVar18 = pcVar18 + -1;
      bVar39 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar39;
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((byte)((uint)puVar42 >> 8) | *pbVar33,(char)puVar42));
      *pbVar15 = *pbVar15 + bVar39;
      *pcVar18 = *pcVar18 + bVar7;
      *(byte *)((int)pbVar15 * 2) = *(byte *)((int)pbVar15 * 2) ^ bVar39;
      *pbVar15 = *pbVar15 + bVar39;
      *pbVar15 = *pbVar15 | bVar39;
      bVar55 = CARRY1((byte)*puVar42,bVar7);
      *(byte *)puVar42 = (byte)*puVar42 + bVar7;
      cVar11 = bVar39 + 10 + bVar55;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar11);
      puVar43 = puVar14;
    } while (bVar39 < 0xf6 && !CARRY1(bVar39 + 10,bVar55));
    *pbVar15 = *pbVar15 + cVar11;
    in_stack_ffffffe0 = CONCAT22((short)((uint)in_stack_ffffffe0 >> 0x10),uVar51);
    pcVar21 = (char *)((uint)pbVar15 | *puVar48);
    puVar43 = (uint *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                               CONCAT11((char)((uint)pcVar18 >> 8) + unaff_EBP[-100],(char)pcVar18))
    ;
    *pcVar21 = *pcVar21 + (char)pcVar21;
    bVar7 = (char)pcVar21 + 7;
    uVar59 = CONCAT44(pbVar33,CONCAT31((int3)((uint)pcVar21 >> 8),bVar7));
code_r0x004028c8:
    puVar45 = (uint *)((ulonglong)uVar59 >> 0x20);
  } while ((POPCOUNT(bVar7) & 1U) != 0);
  *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
  puVar24 = (uint *)CONCAT31((int3)((ulonglong)uVar59 >> 8),(char)uVar59 + '-');
  puVar14 = (uint *)((uint)puVar14 | *(uint *)((int)puVar45 + 0x3b));
  bVar55 = CARRY4(*puVar24,(uint)puVar24);
  uVar22 = *puVar24;
  *puVar24 = (uint)(*puVar24 + (int)puVar24);
  if (SCARRY4(uVar22,(int)puVar24)) {
    bVar55 = CARRY4(*puVar24,(uint)puVar24);
    bVar56 = SCARRY4(*puVar24,(int)puVar24);
    *puVar24 = (uint)(*puVar24 + (int)puVar24);
    bVar7 = POPCOUNT(*puVar24 & 0xff);
    if (bVar56) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + bVar55);
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
    bVar55 = (POPCOUNT((byte)*puVar45) & 1U) == 0;
    if (bVar55) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar55) {
      iVar13 = CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 - (byte)*puVar14);
      goto get_Value;
    }
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
    puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + 'r');
    pbVar16 = unaff_EBP;
code_r0x004028e2:
    uVar37 = (undefined2)((uint)in_stack_ffffffe0 >> 0x10);
    uVar22 = *puVar24;
    *puVar24 = (uint)(*puVar24 + (int)puVar24);
    if (SCARRY4(uVar22,(int)puVar24)) {
      if (*puVar24 == 0 || SCARRY4(uVar22,(int)puVar24) != (int)*puVar24 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar43 = (uint *)((int)puVar43 + -1);
    cVar11 = (char)puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + cVar11;
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) |
                                        *(byte *)((int)puVar42 + 0x16d7207),(char)puVar42));
    pbVar15 = (byte *)((int)puVar24 + 0x7d);
    bVar7 = *pbVar15;
    bVar10 = (byte)((uint)puVar45 >> 8);
    bVar39 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar10;
    uVar17 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar39,bVar10) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar15 < '\0') * 0x80 | (uint)(*pbVar15 == 0) * 0x40 |
             (uint)(bVar47 & 1) * 0x10 | (uint)((POPCOUNT(*pbVar15) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar7,bVar10);
    *(byte *)puVar24 = (byte)*puVar24 + cVar11;
    pbVar15 = (byte *)(CONCAT31((int3)((uint)puVar24 >> 8),cVar11 + '+') ^ *puVar48);
    if ((POPCOUNT((uint)pbVar15 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar7 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar7;
    puVar24 = (uint *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7 + 0x72);
    if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
      if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar24 + 0x6f) = *(byte *)((int)puVar24 + 0x6f) + bVar10;
    }
code_r0x00402905:
    uVar59 = CONCAT44(puVar45,puVar24);
    puVar43 = (uint *)((int)puVar43 + -1);
    cVar11 = (char)puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + cVar11;
    bVar7 = (byte)((uint)puVar42 >> 8) | (byte)*puVar42;
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar7,(char)puVar42));
    uVar51 = (ushort)uVar17;
    if ((char)bVar7 < '\x01') {
      *(byte *)puVar24 = (byte)*puVar24 + cVar11;
      puVar48 = (uint *)((int)puVar48 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar24 = (byte)*puVar24 + cVar11;
    uVar17 = 0x40291c;
    uVar59 = func_0x7346291c();
    *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
    puVar42 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar59 >> 0x20));
    puStackY_3c = (uint *)CONCAT22(puStackY_3c._2_2_,uVar51);
    uStackY_38 = puVar43;
    while( true ) {
      pcVar18 = (char *)((int)uVar59 * 2);
      *pcVar18 = *pcVar18 - (char)puVar42;
      uVar22 = *puVar43;
      cVar11 = (char)((uint)puVar42 >> 8);
      *(byte *)puVar43 = (byte)*puVar43 + cVar11;
      if (SCARRY1((byte)uVar22,cVar11) == (char)(byte)*puVar43 < '\0') {
        pbVar15 = (byte *)((int)puVar48 + (int)uVar59);
        *pbVar15 = *pbVar15 + (char)uVar59;
        bVar7 = *pbVar15;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar45 = (uint *)((ulonglong)uVar59 >> 0x20);
      cVar11 = (char)uVar59;
      *(char *)uVar59 = *(char *)uVar59 + cVar11;
      uVar29 = (undefined3)((ulonglong)uVar59 >> 8);
      bVar7 = cVar11 + 7;
      puVar24 = (uint *)CONCAT31(uVar29,bVar7);
      bVar39 = (byte)((ulonglong)uVar59 >> 0x28);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *(byte *)puVar24 = (byte)*puVar24 + bVar7;
      pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '3');
      uVar37 = (undefined2)((uint)puVar43 >> 0x10);
      uVar32 = SUB41(puVar43,0);
      bVar7 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar14 + 0x16) + (0xd3 < bVar7);
      puVar43 = (uint *)CONCAT22(uVar37,CONCAT11(bVar7,uVar32));
      *pcVar18 = *pcVar18 + cVar11 + '3';
      cVar9 = cVar11 + ':';
      puVar24 = (uint *)CONCAT31(uVar29,cVar9);
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        bVar7 = bVar7 | *(byte *)((int)puVar45 + 7);
        puVar43 = (uint *)CONCAT22(uVar37,CONCAT11(bVar7,uVar32));
        bVar55 = (POPCOUNT(bVar7) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar24 = (byte)*puVar24 + cVar9;
      puVar24 = (uint *)(CONCAT31(uVar29,cVar11 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar15 = (byte *)((int)puVar24 + 0x72);
      bVar56 = SCARRY1(*pbVar15,bVar39);
      *pbVar15 = *pbVar15 + bVar39;
      bVar7 = POPCOUNT(*pbVar15);
code_r0x0040294c:
      if ((bVar7 & 1) == 0) {
        *(byte *)((int)puVar24 + 0x72) = *(byte *)((int)puVar24 + 0x72) + (char)((uint)puVar45 >> 8)
        ;
      }
      else if (bVar56) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar11 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_40 = (uint *)CONCAT22(puStackY_40._2_2_,uStack_c);
code_r0x00402957:
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
      cVar11 = (char)puVar24 + '(';
      puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),cVar11);
      *(byte *)puVar24 = (byte)*puVar24 + cVar11;
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((byte)((uint)puVar42 >> 8) | (byte)*puVar24,(char)puVar42)
                                );
      *(byte *)puVar24 = (byte)*puVar24 + cVar11;
      puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                 CONCAT11((byte)((uint)puVar45 >> 8) | (byte)puVar43[0x18],
                                          (char)puVar45));
      puVar14 = puStackY_40;
      puVar48 = puStackY_3c;
code_r0x00402966:
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
      bVar7 = (byte)((uint)puVar43 >> 8) | *(byte *)((int)puVar45 + 7);
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar7,(char)puVar43));
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
      puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + '~');
code_r0x00402971:
      uVar17 = (uint)uStack_c;
code_r0x00402972:
      uVar37 = (undefined2)((uint)in_stack_ffffffe0 >> 0x10);
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
code_r0x00402974:
      bVar7 = 0xe9 < (byte)puVar24;
      in_stack_ffffffe0 = CONCAT22(uVar37,in_CS);
      in_CS = 0x2d0a;
      uVar59 = func_0x00006128(in_stack_ffffffe0);
      puVar42 = (uint *)uVar59;
      piVar27 = (int *)((int)((ulonglong)uVar59 >> 0x20) + -0x3d);
      *piVar27 = (int)((int)puVar14 + (uint)bVar7 + *piVar27);
      bVar55 = SCARRY4(*puVar42,(int)puVar42);
      *puVar42 = *puVar42 + (int)puVar42;
      uVar22 = *puVar42;
      puVar42 = extraout_ECX_02;
code_r0x00402982:
      bVar7 = POPCOUNT(uVar22 & 0xff);
      if (bVar55) {
        *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
        puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                   CONCAT11((byte)((uint)puVar42 >> 8) |
                                            *(byte *)((ulonglong)uVar59 >> 0x20),(char)puVar42));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar18 = (char *)((ulonglong)uVar59 >> 0x20);
      if ((bVar7 & 1) == 0) {
        *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
        *pcVar18 = *pcVar18 + (char)puVar42;
        uVar59 = CONCAT44(CONCAT22((short)((ulonglong)uVar59 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar59 >> 0x28) - pcVar18[0x1f],
                                            (char)((ulonglong)uVar59 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar59 >> 8),(char)uVar59 + '('));
code_r0x00402991:
        puVar45 = (uint *)((ulonglong)uVar59 >> 0x20);
        pbVar15 = (byte *)uVar59;
        bVar7 = (byte)uVar59;
        bVar55 = CARRY1(bVar7,*pbVar15);
        puVar24 = (uint *)CONCAT31((int3)((ulonglong)uVar59 >> 8),bVar7 + *pbVar15);
        cVar11 = bVar7 + *pbVar15;
        if (SCARRY1(bVar7,*pbVar15)) goto code_r0x004029c4;
code_r0x00402995:
        puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                   CONCAT11(((char)((uint)puVar45 >> 8) -
                                            *(byte *)((int)puVar45 + 0x6b)) - bVar55,(char)puVar45))
        ;
        bVar7 = (byte)puVar24;
        bVar55 = CARRY1(bVar7,(byte)*puVar24);
        bVar56 = SCARRY1(bVar7,(byte)*puVar24);
        puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar7 + (byte)*puVar24);
        do {
          if (!bVar56) {
            puVar14 = (uint *)((int)puVar14 + (uint)bVar55 + *puVar24);
            pbVar15 = (byte *)((int)puVar24 + *puVar24);
            bVar39 = (byte)pbVar15;
            *pbVar15 = *pbVar15 + bVar39;
            *(byte *)puVar42 = (byte)*puVar42 + (char)puVar42;
            bVar7 = *pbVar15;
            *pbVar15 = *pbVar15 + bVar39;
            *puVar48 = (uint)((int)puVar43 + (uint)CARRY1(bVar7,bVar39) + *puVar48);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar42;
            uVar29 = (undefined3)((uint)pbVar15 >> 8);
            bVar39 = bVar39 | (byte)*puVar14;
            puVar24 = (uint *)CONCAT31(uVar29,bVar39);
            uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uStack_c);
            uVar2 = *puVar24;
            uVar22 = *puVar24;
            *puVar24 = (uint)(*puVar24 + (int)puVar24);
            if (SCARRY4(uVar22,(int)puVar24)) {
              *(byte *)puVar14 = (byte)*puVar14 - (char)puVar43;
              *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
              *(byte *)puVar48 = (byte)*puVar48 - (char)puVar43;
            }
            else {
              puStackY_3c = (uint *)CONCAT22(puStackY_3c._2_2_,uVar51);
              uStack_c = uVar51;
              if (CARRY4(uVar2,(uint)puVar24)) goto code_r0x00402971;
              bVar55 = CARRY1(bVar39,(byte)*puVar24);
              bVar56 = SCARRY1(bVar39,(byte)*puVar24);
              puVar24 = (uint *)CONCAT31(uVar29,bVar39 + (byte)*puVar24);
code_r0x004029be:
              if (!bVar56) {
                puStackY_3c = (uint *)CONCAT22(puStackY_3c._2_2_,uVar51);
                *(byte *)((int)puVar45 + -0x37) =
                     (*(byte *)((int)puVar45 + -0x37) - (char)((uint)puVar45 >> 8)) - bVar55;
                cVar11 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar11;
                bVar7 = (byte)puVar24;
                bVar55 = CARRY1(bVar7,(byte)*puVar24);
                bVar56 = SCARRY1(bVar7,(byte)*puVar24);
                puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar7 + (byte)*puVar24);
                goto code_r0x004029c6;
              }
            }
            bVar7 = (byte)puVar42;
            bVar55 = CARRY1((byte)*puVar45,bVar7);
            bVar56 = SCARRY1((byte)*puVar45,bVar7);
            *(byte *)puVar45 = (byte)*puVar45 + bVar7;
            if (bVar55) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar56) {
            uVar51 = (ushort)pbVar16;
            goto code_r0x00402966;
          }
          uVar17 = (uint)uVar51;
          *(uint *)((int)puVar45 + -0x23) =
               (*(int *)((int)puVar45 + -0x23) - (int)puVar14) - (uint)bVar55;
          uVar22 = *puVar24;
          bVar39 = (byte)puVar24;
          uVar2 = *puVar24;
          uVar29 = (undefined3)((uint)puVar24 >> 8);
          bVar7 = bVar39 + (byte)*puVar24;
          puVar24 = (uint *)CONCAT31(uVar29,bVar7);
          if (SCARRY1(bVar39,(byte)uVar2)) goto code_r0x00402972;
          in_stack_ffffffe0 = CONCAT22((short)((uint)in_stack_ffffffe0 >> 0x10),uVar51);
          cVar11 = (char)puVar45;
          bVar10 = ((char)((uint)puVar45 >> 8) - *(byte *)((int)puVar45 + -0xf)) -
                   CARRY1(bVar39,(byte)uVar22);
          puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),CONCAT11(bVar10,cVar11));
          puVar49 = (uint *)CONCAT31(uVar29,bVar7 + (byte)*puVar24);
          bVar39 = (byte)puVar42;
          if (SCARRY1(bVar7,(byte)*puVar24)) {
            *(byte *)puVar45 = (byte)*puVar45 + bVar39;
            uVar59 = CONCAT44(puVar45,(int)puVar49 + -0x1c37211);
            pcVar18 = (char *)((int)puVar49 + -0x1c3720a);
            *pcVar18 = *pcVar18 + bVar10;
            bVar7 = POPCOUNT(*pcVar18);
            goto code_r0x00402984;
          }
          puVar14 = (uint *)((int)puVar14 +
                            (-(uint)CARRY1(bVar7,(byte)*puVar24) - *(int *)((int)puVar45 + 5)));
          bVar55 = SCARRY4((int)puVar49,*puVar49);
          uVar22 = (int)puVar49 + *puVar49;
          uVar59 = CONCAT44(puVar45,uVar22);
          if (bVar55) goto code_r0x00402982;
          bVar7 = (byte)uVar22 + 0x8e;
          uVar23 = CONCAT31((int3)(uVar22 >> 8),bVar7 - CARRY4((uint)puVar49,*puVar49));
          *puVar43 = (*puVar43 - uVar23) -
                     (uint)((byte)uVar22 < 0x72 || bVar7 < CARRY4((uint)puVar49,*puVar49));
          pbVar15 = (byte *)(uVar23 - 0x5e);
          bVar7 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar10;
          uVar22 = (uint)CARRY1(bVar7,bVar10);
          uVar2 = uVar23 - 0x32d72;
          puVar24 = (uint *)(uVar2 - uVar22);
          if (SBORROW4(uVar23,0x32d72) != SBORROW4(uVar2,uVar22)) goto code_r0x00402992;
          uVar53 = uVar54;
          if (uVar23 < 0x32d72 || uVar2 < uVar22) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar24 >> 8);
            *(byte *)puVar45 = (byte)*puVar45 + bVar39;
            puVar49 = puVar14 + 1;
            out(*puVar14,CONCAT11(bVar10,cVar11));
            *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
            goto code_r0x00402a3e;
          }
          bVar55 = CARRY4((uint)puVar24,*puVar24);
          bVar56 = SCARRY4((int)puVar24,*puVar24);
          puVar24 = (uint *)((int)puVar24 + *puVar24);
          if (!bVar56) {
            uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar51);
            *(byte *)puVar14 = (byte)*puVar14 + bVar55;
            bVar7 = (byte)puVar24;
            *(byte *)((int)puVar45 + (int)unaff_EBP) =
                 *(byte *)((int)puVar45 + (int)unaff_EBP) + bVar7;
            *(byte *)puVar43 = (byte)*puVar43 + cVar11;
            *(byte *)puVar43 = (byte)*puVar43 ^ bVar7;
            bVar35 = (byte)((uint)puVar42 >> 8);
            *(byte *)puVar14 = (byte)*puVar14 + bVar35;
            *(byte *)puVar24 = (byte)*puVar24 + bVar7;
            pbVar15 = (byte *)CONCAT31((int3)((uint)puVar24 >> 8),bVar7 | (byte)*puVar24);
            *(byte *)puVar42 = (byte)*puVar42 + cVar11;
            bVar40 = *pbVar15;
            uVar37 = (undefined2)((uint)puVar42 >> 0x10);
            puVar42 = (uint *)CONCAT22(uVar37,CONCAT11(bVar35 + bVar40,bVar39));
            pbVar15 = pbVar15 + (uint)CARRY1(bVar35,*pbVar15) + *(int *)pbVar15;
            *(byte *)puVar45 = (byte)*puVar45 + bVar39;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar16 = pbVar15 + 0x73;
            bVar7 = *pbVar16;
            *pbVar16 = *pbVar16 + bVar10;
            uVar29 = (undefined3)((uint)pbVar15 >> 8);
            bVar7 = (char)pbVar15 + CARRY1(bVar7,bVar10);
            pcVar18 = (char *)CONCAT31(uVar29,bVar7);
            *(byte *)puVar45 = (byte)*puVar45 + bVar39;
            if ((POPCOUNT((byte)*puVar45) & 1U) == 0) {
              uStack_c = uVar51;
            }
            puVar50 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x17));
            *pcVar18 = *pcVar18 + bVar7;
            cVar11 = bVar7 + 2;
            puVar24 = (uint *)CONCAT31(uVar29,cVar11);
            if (bVar7 < 0xfe) {
              *puVar24 = (uint)(*puVar24 + (int)puVar24);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar24 = (byte)*puVar24 + cVar11;
            uVar17 = *puVar45;
            puVar49 = (uint *)((int)puVar14 + puVar43[0x19]);
            *(byte *)puVar24 = (byte)*puVar24 + cVar11;
            puVar42 = (uint *)CONCAT22(uVar37,CONCAT11(bVar35 + bVar40 | (byte)*puVar24,
                                                       bVar39 | (byte)uVar17));
            puVar48 = puVar50;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar7;
    pbVar15 = (byte *)((int)puVar24 + 0x73);
    bVar55 = CARRY1(*pbVar15,bVar39);
    *pbVar15 = *pbVar15 + bVar39;
  } while( true );
code_r0x00402992:
  pbVar15 = (byte *)((int)puVar24 + 0x2a);
  bVar55 = CARRY1(*pbVar15,bVar10);
  *pbVar15 = *pbVar15 + bVar10;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar24) = *(byte *)(in_GS_OFFSET + (int)puVar24) + (char)puVar24;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | *(byte *)((int)puVar48 + 0x66),
                                      (char)puVar42));
  *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
code_r0x00402a3e:
  uVar29 = (undefined3)((uint)puVar24 >> 8);
  bVar7 = (byte)puVar24 | (byte)*puVar49;
  pcVar18 = (char *)CONCAT31(uVar29,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar18 = *pcVar18 + bVar7;
    cVar11 = bVar7 + 2;
    piVar27 = (int *)CONCAT31(uVar29,cVar11);
    if ((POPCOUNT(cVar11) & 1U) == 0) {
      *(char *)piVar27 = (char)*piVar27 + cVar11;
      bVar7 = bVar7 + 0x71;
      pcVar21 = (char *)CONCAT31(uVar29,bVar7);
      pcVar18 = (char *)segment(uVar53,(short)puVar43 + (short)puVar49);
      *pcVar18 = *pcVar18 + bVar7;
      uVar17 = puVar48[0x1a];
      *pcVar21 = *pcVar21 + bVar7;
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((byte)((uint)puVar42 >> 8) | (byte)uVar17 |
                                          *(byte *)((int)puVar48 + 0x69),(char)puVar42));
      *pcVar21 = *pcVar21 + bVar7;
      bVar7 = bVar7 | (byte)*puVar45;
      pcVar18 = (char *)CONCAT31(uVar29,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar14 = puVar49 + (uint)bVar57 * -2 + 1;
    out(*puVar49,(short)puVar45);
  }
  else {
    puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((char)((uint)puVar43 >> 8) + (byte)puVar43[6],(char)puVar43)
                              );
code_r0x00402a5d:
    *pcVar18 = *pcVar18 + (char)pcVar18;
    piVar27 = (int *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + 'o');
    puVar14 = puVar49;
  }
code_r0x00402a61:
  pcVar18 = (char *)segment(uVar53,(short)puVar43 + (short)puVar14);
  *pcVar18 = *pcVar18 + (char)piVar27;
  cVar11 = (char)puVar42;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | (byte)puVar48[0x1a],cVar11));
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  uVar37 = CONCAT11((byte)((uint)puVar45 >> 8) | *(byte *)((int)puVar45 + 0x65),(char)puVar45);
  puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar37);
  piVar25 = (int *)((int)piVar27 + *piVar27);
  puVar49 = puVar14;
  puVar50 = puVar48;
  uVar52 = uVar51;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402ae3;
  *(byte *)puVar45 = (byte)*puVar45 + cVar11;
  puVar49 = puVar14 + (uint)bVar57 * -2 + 1;
  out(*puVar14,uVar37);
code_r0x00402a75:
  bVar7 = (byte)((uint)puVar42 >> 8) | (byte)*puVar45;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar7,(char)puVar42));
  piVar27 = (int *)(uint)(byte)*puVar43;
  *(byte *)puVar49 = (byte)*puVar49 - bVar7;
  puVar50 = puVar48;
code_r0x00402a7f:
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  out(*puVar49,(short)puVar45);
  bVar7 = in((short)puVar45);
  *(byte *)puVar50 = bVar7;
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | (byte)*puVar45,(char)puVar42));
  iVar13 = *piVar27;
  cVar11 = in(1);
  puVar24 = (uint *)CONCAT31((int3)((uint)((int)piVar27 + *piVar27) >> 8),cVar11);
  *(char *)puVar24 = (char)*puVar24 + cVar11;
  puVar24 = (uint *)((uint)puVar24 | *puVar24);
  *(byte *)puVar42 = (byte)*puVar42 + (char)puVar45;
  puVar49 = (uint *)((int)puVar49 + (((uint)bVar57 * -8 + 4) - iVar13));
  puVar50 = (uint *)((int)puVar50 + (uint)bVar57 * -2 + 1);
  uStack_c = uVar51;
  while( true ) {
    bVar7 = (byte)puVar24 | (byte)*puVar45;
    puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar7);
    puVar48 = puVar50;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar24 = (byte)*puVar24 + bVar7;
code_r0x00402a9b:
    uVar29 = (undefined3)((uint)puVar24 >> 8);
    cVar11 = (char)puVar24 + '\r';
    piVar25 = (int *)CONCAT31(uVar29,cVar11);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar25;
    *(char *)piVar25 = (char)*piVar25 + cVar11;
    *(byte *)(puVar49 + -0xc800000) = (byte)puVar49[-0xc800000] + (char)puVar45;
    *(char *)piVar25 = (char)*piVar25 + cVar11;
    *(byte *)puVar45 = (byte)*puVar45 + cVar11;
    cVar9 = (char)puVar42;
    if ((POPCOUNT((byte)*puVar45) & 1U) != 0) {
      *(byte *)puVar45 = (byte)*puVar45 + cVar9;
      puVar14 = puVar49 + (uint)bVar57 * -2 + 1;
      out(*puVar49,(short)puVar45);
      piVar27 = (int *)((longlong)*piVar25 * 0x7b020a00);
      *(char *)piVar27 =
           (char)*piVar27 - ((longlong)(int)piVar27 != (longlong)*piVar25 * 0x7b020a00);
      pbVar16 = (byte *)((int)puVar48 + (int)unaff_EBP * 2);
      *pbVar16 = *pbVar16;
      goto code_r0x00402a61;
    }
    *(char *)piVar25 = (char)*piVar25 + cVar11;
    puVar24 = (uint *)CONCAT31(uVar29,(char)puVar24 + ':');
    puVar14 = (uint *)((uint)puVar49 | *(uint *)((int)puVar45 + -0x79));
    iVar13 = (int)puVar24 + *puVar24;
    if (SCARRY4((int)puVar24,*puVar24)) {
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                 CONCAT11((char)((uint)puVar43 >> 8) + (byte)puVar14[(int)puVar43],
                                          (char)puVar43));
      *(char *)((int)puVar45 * 2) = *(char *)((int)puVar45 * 2) + (char)iVar13;
      puVar50 = puVar48;
      goto code_r0x00402b33;
    }
    uVar29 = (undefined3)((uint)iVar13 >> 8);
    cVar11 = (char)iVar13 + CARRY4((uint)puVar24,*puVar24);
    piVar27 = (int *)CONCAT31(uVar29,cVar11);
    *(byte *)puVar45 = (byte)*puVar45 + cVar9;
    bVar55 = (POPCOUNT((byte)*puVar45) & 1U) != 0;
    if ((bVar55) && (bVar55)) goto code_r0x00402a61;
    *(char *)piVar27 = (char)*piVar27 + cVar11;
    cVar8 = cVar11 + '(';
    pcVar18 = (char *)CONCAT31(uVar29,cVar8);
    puVar50 = puVar48 + (uint)bVar57 * -2 + 1;
    uVar17 = in((short)puVar45);
    *puVar48 = uVar17;
    *pcVar18 = *pcVar18 + cVar8;
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | bRama07b0222,cVar9));
    *pcVar18 = *pcVar18 + cVar8;
    pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '>');
code_r0x00402ad2:
    out(*puVar14,(short)puVar45);
    puVar49 = (uint *)((int)(puVar14 + (uint)bVar57 * -2 + 1) + (uint)bVar57 * -2 + 1);
    out((byte)puVar14[(uint)bVar57 * -2 + 1],(short)puVar45);
    bVar7 = (byte)pcVar18;
    *pcVar18 = *pcVar18 + bVar7;
    puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(byte)puVar43 | (byte)*puVar50);
    bVar47 = 9 < (bVar7 & 0xf) | bVar47;
    uVar29 = (undefined3)((uint)pcVar18 >> 8);
    bVar7 = bVar7 + bVar47 * -6;
    puVar45 = (uint *)((uint)puVar45 ^ *puVar45);
    cVar11 = bVar7 + (0x9f < bVar7 | bVar47 * (bVar7 < 6)) * -0x60 + (byte)*puVar45;
    piVar27 = (int *)CONCAT31(uVar29,cVar11);
    if ((POPCOUNT(cVar11) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar27 = (char)*piVar27 + cVar11;
    piVar25 = (int *)CONCAT31(uVar29,cVar11 + '\x17');
    uVar52 = uVar51;
code_r0x00402ae3:
    out(*puVar49,(short)puVar45);
    puVar14 = puVar49 + (uint)bVar57 * -2 + 1 + (uint)bVar57 * -2 + 1;
    out(puVar49[(uint)bVar57 * -2 + 1],(short)puVar45);
    *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
code_r0x00402ae7:
    puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((byte)((uint)puVar43 >> 8) | unaff_EBP[-0x60],(char)puVar43)
                              );
    cVar11 = (char)piVar25;
    *(char *)piVar25 = (char)*piVar25 + cVar11;
    uVar29 = (undefined3)((uint)piVar25 >> 8);
    bVar7 = cVar11 + 2;
    puVar24 = (uint *)CONCAT31(uVar29,bVar7);
    uVar51 = uVar52;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar24 = (byte)*puVar24 + bVar7;
      cVar11 = cVar11 + '}';
      puVar24 = (uint *)CONCAT31(uVar29,cVar11);
      *(byte *)puVar24 = ((byte)*puVar24 - cVar11) - (0x84 < bVar7);
      pbVar16 = (byte *)((int)puVar45 + (int)puVar24);
      *pbVar16 = *pbVar16 + cVar11;
      bVar7 = POPCOUNT(*pbVar16);
      puVar49 = puVar14;
code_r0x00402af9:
      uVar51 = uVar52;
      puVar48 = puVar50;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
        bVar7 = (byte)puVar42;
        *(byte *)puVar45 = (byte)*puVar45 + bVar7;
        uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uStack_c);
        puVar14 = puVar49 + (uint)bVar57 * -2 + 1;
        out(*puVar49,(short)puVar45);
        uVar17 = *puVar45;
        *(byte *)puVar45 = (byte)*puVar45 + bVar7;
        iVar13 = CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + 'o') +
                 *(int *)((int)puVar45 * 2) + (uint)CARRY1((byte)uVar17,bVar7);
        pcVar18 = (char *)CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '(');
        while( true ) {
          uVar17 = *puVar45;
          bVar39 = (byte)puVar42;
          *(byte *)puVar45 = (byte)*puVar45 + bVar39;
          pcVar18 = pcVar18 + (uint)CARRY1((byte)uVar17,bVar39) + iRam73280512;
          bVar7 = (byte)pcVar18;
          *pcVar18 = *pcVar18 + bVar7;
          puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                     CONCAT11((byte)((uint)puVar42 >> 8) | bRam7d160243,bVar39));
          bVar57 = ((uint)uStackY_38 & 0x400) != 0;
          bVar47 = ((uint)uStackY_38 & 0x10) != 0;
          *pcVar18 = *pcVar18 + bVar7;
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar29,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar11 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar11 < '\0') break;
          *(char *)CONCAT31(uVar29,cVar11) = *(char *)CONCAT31(uVar29,cVar11) + cVar11;
          iVar13 = CONCAT31(uVar29,bVar7 + 0x16);
code_r0x00402b33:
          piVar25 = (int *)(iVar13 + 0xe2802);
          *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)puVar42 >> 8);
          uVar52 = uVar51;
          uVar51 = uStack_c;
          while( true ) {
            bVar39 = (byte)puVar43 | (byte)((uint)puVar42 >> 8);
            puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar39);
            *piVar25 = (int)(*piVar25 + (int)piVar25);
            cVar11 = (char)piVar25;
            *(byte *)puVar45 = (byte)*puVar45 + cVar11;
            if ((POPCOUNT((byte)*puVar45) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar25 = (char)*piVar25 + cVar11;
            uVar17 = CONCAT31((int3)((uint)piVar25 >> 8),cVar11 + '\x13');
            puVar24 = (uint *)(uVar17 + 0x19061224 + (uint)(0x1f9edfd < uVar17));
            uVar2 = (uint)(0xe4ffffdd < uVar17 + 0xfe061202 ||
                          CARRY4(uVar17 + 0x19061224,(uint)(0x1f9edfd < uVar17)));
            uVar22 = *puVar14;
            uVar17 = *puVar14;
            *puVar14 = (uint)((byte *)(uVar17 + (int)puVar24) + uVar2);
            bVar7 = POPCOUNT(*puVar14 & 0xff);
            puVar49 = puVar14;
            if ((SCARRY4(uVar22,(int)puVar24) != SCARRY4((int)(uVar17 + (int)puVar24),uVar2)) ==
                (int)*puVar14 < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar24;
            *(byte *)puVar24 = (byte)*puVar24 + bVar7;
            iVar13 = CONCAT31((int3)((uint)puVar24 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)puVar45 | (byte)*puVar45;
            uVar17 = *puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + bVar39;
            pcVar18 = (char *)(CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x12') + 0x228b26
                               + *puVar50 + (uint)CARRY1((byte)uVar17,bVar39));
            cVar11 = bVar7 + (byte)*puVar42;
            puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),cVar11);
            if (SCARRY1(bVar7,(byte)*puVar42) == cVar11 < '\0') break;
            *pcVar18 = *pcVar18 + (char)pcVar18;
            cVar11 = (char)pcVar18 + '\x02';
            pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar11);
            bVar7 = POPCOUNT(cVar11);
            uVar52 = uVar51;
code_r0x00402b7a:
            puVar48 = puVar14;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar11 = (char)pcVar18;
              *pcVar18 = *pcVar18 + cVar11;
              uVar29 = (undefined3)((uint)pcVar18 >> 8);
              pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '\x13');
              *(byte *)puVar42 = (byte)*puVar42 | (byte)puVar45;
              *(byte *)puVar50 = (byte)*puVar50 | (byte)puVar45;
              *puVar45 = (uint)(pcVar18 + *puVar45);
              uVar37 = (undefined2)((uint)puVar43 >> 0x10);
              uVar32 = SUB41(puVar43,0);
              cVar9 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + -0x5f);
              puVar43 = (uint *)CONCAT22(uVar37,CONCAT11(cVar9,uVar32));
              *pcVar18 = *pcVar18 + cVar11 + '\x13';
              piVar25 = (int *)CONCAT31(uVar29,cVar11 + -0x7a);
              uVar17 = *puVar45;
              *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar17,(char)puVar42) == (char)(byte)*puVar45 < '\0') break;
              *(char *)piVar25 = (char)*piVar25 + cVar11 + -0x7a;
              cVar8 = cVar11 + -0x78;
              piVar25 = (int *)CONCAT31(uVar29,cVar8);
              uVar5 = uVar52;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *(char *)piVar25 = (char)*piVar25 + cVar8;
              pcVar18 = (char *)CONCAT31(uVar29,cVar11 + -0x65);
              *puVar42 = *puVar42 | (uint)puVar45;
              *puVar50 = *puVar50 | (uint)puVar45;
              pbVar16 = (byte *)((int)puVar42 + -1);
              cVar9 = cVar9 + *(byte *)((int)puVar43 + -0x5e);
              puVar43 = (uint *)CONCAT22(uVar37,CONCAT11(cVar9,uVar32));
              *pcVar18 = *pcVar18 + cVar11 + -0x65;
              bVar7 = cVar11 + 10;
              puVar24 = (uint *)CONCAT31(uVar29,bVar7);
              bVar39 = (byte)pbVar16;
              *(byte *)puVar45 = (byte)*puVar45 + bVar39;
              puVar14 = puVar48 + (uint)bVar57 * -2 + 1;
              out(*puVar48,(short)puVar45);
              uVar17 = *puVar45;
              *(byte *)puVar45 = (byte)*puVar45 + bVar39;
              uVar23 = (uint)CARRY1((byte)uVar17,bVar39);
              uVar22 = *puVar45;
              uVar17 = *puVar45;
              pbVar15 = pbVar16 + uVar17 + uVar23;
              uVar6 = *puVar45;
              cRam130a0000 = cRam130a0000 - cVar9;
              uVar2 = *puVar45;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar24);
              *(byte *)puVar24 = (char)*puVar24 + bVar7;
              puVar42 = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar15 >> 8) | bRam7d170243,
                                                  (char)pbVar15 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar16,uVar22) ||
                                                  CARRY4((uint)(pbVar16 + uVar17),uVar23))));
              bVar57 = (uStack_c & 0x400) != 0;
              bVar47 = (uStack_c & 0x10) != 0;
              *(byte *)puVar24 = (char)*puVar24 + bVar7;
              bVar55 = 0xfd < bVar7;
              pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '\f');
              puVar45 = (uint *)((uint)puVar45 | uVar2);
code_r0x00402bd1:
              uVar17 = *puVar43;
              uVar22 = *puVar43;
              *puVar43 = (uint)((byte *)(uVar22 + (int)puVar42) + bVar55);
              bVar7 = POPCOUNT(*puVar43 & 0xff);
              uVar52 = uStack_c;
              if ((SCARRY4(uVar17,(int)puVar42) !=
                  SCARRY4((int)(uVar22 + (int)puVar42),(uint)bVar55)) == (int)*puVar43 < 0)
              goto code_r0x00402b7a;
              cVar11 = (char)pcVar18;
              *pcVar18 = *pcVar18 + cVar11;
              pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar11 + '\x02');
              if (SCARRY1(cVar11,'\x02') == (char)(cVar11 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar18 = *pcVar18 + (char)pcVar18;
                pcVar18 = (char *)(CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x12') |
                                  *puVar45);
                *(byte *)puVar50 = (byte)*puVar50 - (char)puVar42;
                *pcVar18 = *pcVar18 + (char)pcVar18;
                puVar45 = (uint *)((int)puVar45 - *puVar14);
                bVar7 = (byte)puVar43 | (byte)((uint)puVar42 >> 8);
                cVar11 = *pcVar18;
                uVar29 = (undefined3)((uint)pcVar18 >> 8);
                pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                *pcVar18 = *pcVar18 + cVar11;
                pcVar21 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                           CONCAT11((char)((uint)puVar43 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar18 = *pcVar18 + cVar11;
                bVar55 = false;
                pcVar18 = (char *)(CONCAT31(uVar29,cVar11 + '\x13') | *puVar45);
                do {
                  bVar39 = (byte)puVar42;
                  bVar7 = bVar39 + (byte)puVar14[(int)puVar50 * 2];
                  puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar7 + bVar55);
                  uVar17 = (uint)(CARRY1(bVar39,(byte)puVar14[(int)puVar50 * 2]) ||
                                 CARRY1(bVar7,bVar55));
                  pcVar26 = pcVar18 + 0x1b000019 + uVar17;
                  piVar27 = (int *)((int)puVar50 * 2 + 0x40000a5);
                  *piVar27 = (int)((int)puVar42 +
                                  (uint)((char *)0xe4ffffe6 < pcVar18 ||
                                        CARRY4((uint)(pcVar18 + 0x1b000019),uVar17)) + *piVar27);
                  puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + cRam00009d7d
                                            );
                  uVar29 = (undefined3)((uint)pcVar26 >> 8);
                  bVar7 = (char)pcVar26 + 0x12;
                  bVar47 = 9 < (bVar7 & 0xf) | bVar47;
                  uVar17 = CONCAT31(uVar29,bVar7 + bVar47 * -6) & 0xffffff0f;
                  pcVar18 = (char *)CONCAT22((short)(uVar17 >> 0x10),
                                             CONCAT11((char)((uint)pcVar26 >> 8) - bVar47,
                                                      (char)uVar17));
                  pbVar16 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar29,bVar7));
                  while( true ) {
                    *pcVar18 = *pcVar18 + (char)pcVar18;
                    puVar48 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),
                                               (byte)puVar45 | (byte)*puVar45);
                    puVar50 = (uint *)((uint)puVar50 | (uint)puVar14);
                    uVar17 = (uint)pcVar21 | (uint)puVar14;
                    unaff_EBP = pbVar16 + 1;
                    uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar51);
                    cVar9 = (char)(pcVar18 + 0x1b000019);
                    uVar29 = (undefined3)((uint)(pcVar18 + 0x1b000019) >> 8);
                    cVar11 = cVar9 + -0x13;
                    pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                    uVar37 = (undefined2)(uVar17 >> 0x10);
                    cVar8 = (char)(uVar17 >> 8) + *(char *)(uVar17 - 0x5e);
                    puVar43 = (uint *)CONCAT22(uVar37,CONCAT11(cVar8,(byte)uVar17));
                    *pcVar18 = *pcVar18 + cVar11;
                    pcVar18 = (char *)(CONCAT31(uVar29,cVar9 + '\x19') | *puVar48);
                    bVar7 = (byte)pcVar18;
                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0) {
                      pbVar16 = (byte *)((int)puVar48 + (int)pcVar18);
                      bVar55 = CARRY1(*pbVar16,bVar7);
                      *pbVar16 = *pbVar16 + bVar7;
                      puVar45 = puVar48;
                      goto code_r0x00402bd1;
                    }
                    *pcVar18 = *pcVar18 + bVar7;
                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                    pcVar21 = (char *)CONCAT31(uVar29,bVar7 + 0x6f);
                    puVar45 = (uint *)((int)puVar48 + 1);
                    *pcVar21 = *pcVar21 + bVar7 + 0x6f;
                    bVar39 = (byte)uVar17 | (byte)((uint)pcVar18 >> 8);
                    pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x5c);
                    cVar8 = cVar8 + *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),bVar39) + -0x5f);
                    puVar43 = (uint *)CONCAT22(uVar37,CONCAT11(cVar8,bVar39));
                    *pcVar18 = *pcVar18 + bVar7 + 0x5c;
                    pcVar18 = (char *)(CONCAT31(uVar29,bVar7 + 0x88) | *puVar45);
                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0) {
                      *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)puVar42 >> 8);
                      uStackY_38 = (uint *)((uint)uStackY_38._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar18 = *pcVar18 + (char)pcVar18;
                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                    cVar11 = (char)pcVar18 + 'o';
                    puVar45 = (uint *)((int)puVar48 + 2);
                    *(char *)CONCAT31(uVar29,cVar11) = *(char *)CONCAT31(uVar29,cVar11) + cVar11;
                    pcVar21 = (char *)CONCAT31((int3)((uint)puVar43 >> 8),
                                               bVar39 | (byte)((uint)pcVar18 >> 8));
                    pcVar18 = (char *)(CONCAT31(uVar29,cVar11) | 2);
                    pbVar16[-0x62] = pbVar16[-0x62] + 1;
                    bVar7 = (byte)pcVar18;
                    *pcVar18 = *pcVar18 + bVar7;
                    bVar55 = 0xfd < bVar7;
                    cVar11 = bVar7 + 2;
                    pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                    uVar53 = uVar51;
                    if (SCARRY1(bVar7,'\x02') != cVar11 < '\0') break;
                    *pcVar18 = *pcVar18 + cVar11;
                    bVar39 = bVar7 + 10;
                    pcVar18 = (char *)CONCAT31(uVar29,bVar39);
                    *pcVar18 = *pcVar18 - cVar8;
                    cVar9 = (char)puVar42;
                    *(byte *)puVar45 = *(byte *)puVar45 + cVar9;
                    pbVar16[-0x62] = pbVar16[-0x62] + 1;
                    *pcVar18 = *pcVar18 + bVar39;
                    cVar11 = bVar7 + 0xc;
                    pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                    if (SCARRY1(bVar39,'\x02') == cVar11 < '\0') {
                      *pcVar18 = *pcVar18 + cVar11;
                      *(byte *)puVar42 = (byte)*puVar42 - cVar8;
                      *(byte *)puVar45 = *(byte *)puVar45 + cVar9;
                      cVar11 = (bVar7 + 0x13) - (byte)puVar42[0x13];
                      pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                      *pcVar18 = *pcVar18 + cVar11;
                      pcVar26 = (char *)CONCAT31(uVar29,cVar11 + *pcVar18);
                      *pcVar26 = *pcVar26 + cVar11 + *pcVar18;
                      pcVar26 = pcVar26 + *puVar42;
                      *pcVar26 = *pcVar26 + (char)pcVar26;
                      LOCK();
                      pcVar18 = *(char **)pcVar26;
                      *(char **)pcVar26 = pcVar26;
                      UNLOCK();
                      *pcVar18 = *pcVar18 + (char)pcVar18;
                      pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),(byte)*puVar42);
                      *pbVar15 = *pbVar15 + (byte)*puVar42;
                      goto code_r0x00402c8d;
                    }
                    puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               cVar9 + *pcVar21 + (0xfd < bVar39));
                    *(byte *)puVar50 = (byte)*puVar50 - cVar8;
                    pbVar16 = unaff_EBP;
                  }
                } while( true );
              }
              puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                         CONCAT11((char)((uint)puVar43 >> 8) +
                                                  *(byte *)((int)puVar43 + -99),(char)puVar43));
              puVar48 = puVar14;
            }
            *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
            puVar45 = (uint *)((int)puVar45 - *puVar48);
            puVar14 = puVar48;
            uVar52 = uVar51;
            uVar51 = uVar5;
          }
          *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
          pcVar18 = pcVar18 + -0x7d160243;
        }
        pcVar18 = (char *)CONCAT31(uVar29,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar42;
    uVar17 = *puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + (byte)puVar24;
    *puVar50 = (uint)((int)puVar45 + (uint)CARRY1((byte)uVar17,(byte)puVar24) + *puVar50);
    puVar49 = puVar14;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar12 = (char)puVar42;
      cVar36 = (char)((uint)puVar42 >> 8) + (char)((uint)pbVar15 >> 8);
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(cVar36,cVar12));
      cVar11 = (char)pbVar15;
      *pbVar15 = *pbVar15 + cVar11;
      pcVar18 = (char *)((int)pbVar15 * 2 + 0x1a10000);
      cVar8 = (char)((uint)pcVar21 >> 8);
      *pcVar18 = *pcVar18 + cVar8;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
      pbVar15[-0x47ffffff] = pbVar15[-0x47ffffff] + cVar8;
      *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
      bVar39 = (byte)puVar45;
      *(byte *)puVar50 = (byte)*puVar50 + bVar39;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + bVar39;
      *pbVar15 = *pbVar15 + cVar11;
      *puVar14 = (uint)(*puVar14 + (int)puVar14);
      uVar37 = (undefined2)((uint)pcVar21 >> 0x10);
      cVar8 = cVar8 + (byte)puVar14[(int)pcVar21];
      pcVar18 = (char *)CONCAT22(uVar37,CONCAT11(cVar8,(char)pcVar21));
      pcVar18[(int)pbVar15] = pcVar18[(int)pbVar15] + cVar11;
      *(byte *)puVar45 = *(byte *)puVar45 - cVar8;
      *(byte *)puVar45 = *(byte *)puVar45 + cVar12;
      uVar29 = (undefined3)((uint)pbVar15 >> 8);
      bVar7 = cVar11 - *pbVar15;
      *pcVar18 = *pcVar18 + bVar39;
      *(byte *)puVar45 = *(byte *)puVar45 ^ bVar7;
      *(byte *)puVar45 = *(byte *)puVar45 + bVar7;
      *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
      uVar17 = *puVar42;
      *(byte *)puVar42 = (byte)*puVar42 + bVar39;
      cVar9 = bVar7 + *(char *)CONCAT31(uVar29,bVar7) + CARRY1((byte)uVar17,bVar39);
      pcVar21 = (char *)CONCAT22(uVar37,CONCAT11(cVar8 + pbVar16[-0x60],(char)pcVar21));
      *(char *)CONCAT31(uVar29,cVar9) = *(char *)CONCAT31(uVar29,cVar9) + cVar9;
      cVar8 = cVar9 + '\x12';
      pbVar15 = (byte *)CONCAT31(uVar29,cVar8);
      cVar11 = *pcVar21;
      *pcVar21 = *pcVar21 + cVar8;
      if (SCARRY1(cVar11,cVar8) != *pcVar21 < '\0') break;
code_r0x00402c8d:
      cVar11 = (char)pbVar15;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
      *(byte *)puVar45 = *(byte *)puVar45 + cVar11;
      *pbVar15 = *pbVar15 + cVar11;
    }
    *pbVar15 = *pbVar15 + cVar8;
    pbVar15 = (byte *)CONCAT31(uVar29,cVar9 + '$');
    *pbVar15 = *pbVar15 + cVar36;
    bVar7 = *(byte *)puVar45;
    *(byte *)puVar45 = *(byte *)puVar45 + cVar12;
    uVar52 = uVar51;
    uVar53 = uVar54;
  } while (SCARRY1(bVar7,cVar12) == (char)*(byte *)puVar45 < '\0');
  do {
    cVar11 = (char)pbVar15;
    *pbVar15 = *pbVar15 + cVar11;
    uVar29 = (undefined3)((uint)pbVar15 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar45;
    bVar39 = cVar11 + 0x24;
    cVar8 = (char)((uint)pcVar21 >> 8);
    pcVar21[-0x62] = pcVar21[-0x62] + cVar8;
    *(char *)CONCAT31(uVar29,bVar39) = *(char *)CONCAT31(uVar29,bVar39) + bVar39;
    bVar7 = cVar11 + 0x2fU + (byte)*puVar42;
    cVar9 = bVar7 + (0xf4 < bVar39);
    cVar11 = cVar9 + *(char *)CONCAT31(uVar29,cVar9) +
             (CARRY1(cVar11 + 0x2fU,(byte)*puVar42) || CARRY1(bVar7,0xf4 < bVar39));
    pcVar18 = (char *)CONCAT31(uVar29,cVar11);
    *pcVar18 = *pcVar18 - (char)puVar45;
    *pcVar18 = *pcVar18 + cVar11;
    pcVar26 = (char *)((int)puVar45 - *puVar45);
    *(byte *)(puVar14 + (int)pcVar21) = (byte)puVar14[(int)pcVar21] + cVar8;
    pcVar18[(int)unaff_EBP] = pcVar18[(int)unaff_EBP] + cVar11;
    *pcVar26 = *pcVar26 + (char)puVar42;
    pcVar18 = (char *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                               CONCAT11((char)((uint)pbVar15 >> 8) - *pcVar26,cVar11));
    uVar17 = *puVar50;
    *pcVar18 = *pcVar18 - (char)((uint)pcVar26 >> 8);
    *pcVar18 = *pcVar18 + cVar11;
    uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar52);
    pbVar16 = (byte *)CONCAT22((short)((uint)pcVar21 >> 0x10),
                               CONCAT11(cVar8 - (byte)*puVar14,(char)pcVar21));
    unaff_EBP = unaff_EBP + *(int *)(pbVar16 + (int)puVar42);
    puVar48 = (uint *)CONCAT31((int3)((uint)pcVar26 >> 8),(char)pcVar26 + (byte)uVar17);
    while( true ) {
      puVar45 = puVar48;
      uVar37 = (undefined2)((uint)pbVar16 >> 0x10);
      bVar10 = (char)((uint)pbVar16 >> 8) + pbVar16[0x18];
      *pcVar18 = *pcVar18 + (char)pcVar18;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + 'o');
      cVar11 = (char)puVar42;
      *(byte *)puVar45 = (byte)*puVar45 + cVar11;
      uVar17 = *puVar14;
      bVar47 = (byte)((uint)puVar42 >> 8);
      bVar7 = *pbVar15;
      pbVar15 = pbVar15 + (uint)CARRY1(bVar47,*pbVar15) + *(int *)pbVar15;
      *(byte *)puVar45 = (byte)*puVar45 + cVar11;
      cVar9 = ((char)pbVar16 - (byte)uVar17) - (byte)*puVar14;
      bVar39 = *(byte *)((int)puVar50 + 0x1a);
      *pbVar15 = *pbVar15 + (char)pbVar15;
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11(bVar47 + bVar7 + bVar39 | (byte)*puVar45,cVar11));
      pbVar15 = pbVar15 + *puVar45;
      if ((POPCOUNT((uint)pbVar15 & 0xff) & 1U) != 0) break;
      *pbVar15 = *pbVar15 + (char)pbVar15;
      bVar7 = (char)pbVar15 + 0x6f;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7);
      pcVar21 = (char *)(CONCAT31((int3)(CONCAT22(uVar37,CONCAT11(bVar10,(char)pbVar16)) >> 8),cVar9
                                 ) + -1);
      *pcVar18 = *pcVar18 + bVar7;
      *pcVar18 = *pcVar18 + bVar7;
      *pcVar21 = *pcVar21 + (byte)puVar45;
      *(byte *)((int)pcVar18 * 2) = *(byte *)((int)pcVar18 * 2) ^ bVar7;
      uVar4 = *(undefined6 *)pcVar18;
      uVar52 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar18 = (char *)uVar4;
      *pcVar18 = *pcVar18 + (char)uVar4;
      *(byte *)puVar14 = (byte)*puVar14 + (char)uVar4;
      pcVar18 = (char *)((uint)pcVar18 | 0x73110008);
      bVar10 = (byte)((uint)pcVar21 >> 8);
      *(byte *)puVar50 = (byte)*puVar50 - bVar10;
      *(byte *)puVar45 = (byte)*puVar45 + cVar11;
      puVar48 = puVar14 + (uint)bVar57 * -2 + 1;
      out(*puVar14,(short)puVar45);
      *pcVar18 = *pcVar18;
      cVar11 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar11;
      bVar7 = unaff_EBP[-0x5a];
      uVar37 = (undefined2)((uint)pcVar21 >> 0x10);
      cVar9 = (char)pcVar21;
      *pcVar18 = *pcVar18 + cVar11;
      cVar11 = cVar11 + '\x02';
      uVar17 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar11);
      puVar42 = (uint *)(uVar17 | 0x73110000);
      puVar14 = puVar48 + (uint)bVar57 * -2 + 1;
      out(*puVar48,(short)puVar45);
      *(byte *)puVar42 = (byte)*puVar42;
      bVar47 = (byte)puVar45 | (byte)*puVar50;
      puVar48 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),bVar47);
      *(byte *)puVar42 = (byte)*puVar42 + cVar11;
      pcVar18 = (char *)(uVar17 | 0x7b1f1609);
      bVar57 = (uVar53 & 0x400) != 0;
      *(uint *)((int)puVar50 + -0x7d) = *(uint *)((int)puVar50 + -0x7d) | (uint)unaff_EBP;
      bVar39 = (byte)pcVar18;
      *pcVar18 = *pcVar18 + bVar39;
      bVar10 = bVar10 | bVar7 | *(byte *)((int)puVar14 + 0x19);
      pbVar16 = (byte *)CONCAT22(uVar37,CONCAT11(bVar10,cVar9));
      *pcVar18 = *pcVar18 + bVar39;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      puVar14[(int)puVar50 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar39) + puVar14[(int)puVar50 * 2]);
      bVar7 = bVar39 + 0x2d ^ *(byte *)CONCAT31(uVar29,bVar39 + 0x2d);
      pcVar18 = (char *)CONCAT31(uVar29,bVar7);
      uVar17 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar7;
      uVar53 = uVar52;
      if (CARRY1((byte)uVar17,bVar7)) {
        *pcVar18 = *pcVar18 + bVar7;
        bVar7 = bVar7 | pcVar18[0x4000019];
        pcVar18 = (char *)CONCAT31(uVar29,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar18 = *pcVar18 + bVar7;
          piVar27 = (int *)CONCAT31(uVar29,bVar7 + 0x28);
          *piVar27 = (int)piVar27 + (uint)(0xd7 < bVar7) + *piVar27;
          bVar40 = (byte)((uint6)uVar4 >> 8);
          *pbVar16 = *pbVar16 + bVar40;
          uVar38 = CONCAT11((byte)((uint)puVar45 >> 8) | bVar10,bVar47);
          puVar48 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar38);
          uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar52);
          bVar47 = in(uVar38);
          pbVar15 = (byte *)CONCAT31(uVar29,bVar47);
          bVar7 = *pbVar15;
          bVar55 = SCARRY1(*pbVar15,bVar47);
          *pbVar15 = *pbVar15 + bVar47;
          bVar39 = *pbVar15;
          puVar43 = puVar14;
          uStack_c = uVar52;
          if (!CARRY1(bVar7,bVar47)) goto code_r0x00402e19;
          *pbVar15 = *pbVar15 + bVar47;
          bVar40 = bVar40 | *pbVar15;
          puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar40,cVar11));
          pcVar18 = (char *)CONCAT31(uVar29,bVar47 + *pbVar15);
          *pbVar16 = *pbVar16 + bVar40;
        }
        uVar29 = (undefined3)((uint)pcVar18 >> 8);
        bVar39 = (byte)pcVar18 | (byte)*puVar48;
        pbVar15 = (byte *)CONCAT31(uVar29,bVar39);
        puVar43 = puVar14 + (uint)bVar57 * -2 + 1;
        out(*puVar14,(short)puVar48);
        LOCK();
        bVar7 = *pbVar15;
        *pbVar15 = bVar39;
        UNLOCK();
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
        piVar27 = (int *)(CONCAT31(uVar29,bVar7) + -0x1b7e07);
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
        iVar13 = (int)puVar42 - *(int *)pbVar16;
        bVar7 = *(byte *)((int)puVar50 + -0x7a);
        uVar38 = (undefined2)((uint)iVar13 >> 0x10);
        *(char *)piVar27 = *(char *)piVar27 + (char)piVar27;
        bVar39 = (char)((uint)iVar13 >> 8) + bVar7 | *(byte *)((int)puVar50 + 0x17);
        *(char *)piVar27 = *(char *)piVar27 + (char)piVar27;
        uVar29 = (undefined3)(CONCAT22(uVar38,CONCAT11(bVar39,(byte)iVar13)) >> 8);
        bVar7 = (byte)iVar13 | *pbVar16;
        puVar42 = (uint *)CONCAT31(uVar29,bVar7);
        pbVar15 = (byte *)((int)piVar27 + *piVar27);
        puVar14 = puVar43;
        if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e0a;
        *(byte *)puVar42 = (byte)*puVar42 + bVar7;
        *(byte **)pbVar16 = (byte *)(*(int *)pbVar16 + (int)puVar48);
        piVar27 = (int *)CONCAT31(uVar29,bVar7 + 0x27);
        puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(bVar39 + *(byte *)((int)puVar50 + -0x79),bVar7));
        *(byte *)piVar27 = (char)*piVar27 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar21 = (char *)CONCAT22(uVar37,CONCAT11(bVar10 | unaff_EBP[-0x62],cVar9));
  } while( true );
code_r0x00402dff:
  pbVar15 = (byte *)CONCAT22((short)((uint)piVar27 >> 0x10),
                             CONCAT11((byte)((uint)piVar27 >> 8) |
                                      *(byte *)((int)puVar48 + 0x2170411),(byte)piVar27));
  puVar14 = puVar43 + (uint)bVar57 * -2 + 1;
  out(*puVar43,(short)puVar48);
  *pbVar15 = (byte)piVar27;
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar15;
  *pbVar15 = *pbVar15 - cVar9;
  *pbVar15 = *pbVar15 + (char)pbVar15;
  bVar55 = false;
  bVar39 = (byte)((uint)puVar42 >> 8) | bRam052b0603;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar39,(char)puVar42));
  puVar43 = puVar14;
code_r0x00402e19:
  if (bVar39 == 0 || bVar55 != (char)bVar39 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cRam89280411;
  piVar27 = (int *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                            CONCAT11((byte)((uint)pbVar15 >> 8) |
                                     *(byte *)((int)puVar48 + 0x7190411),cRam89280411));
  *(char *)piVar27 = (char)*piVar27 + cRam89280411;
  cVar11 = (char)puVar42;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | (byte)*puVar48,cVar11));
  puVar43 = (uint *)((int)puVar43 + *piVar27);
  pbVar15 = (byte *)((int)piVar27 + *piVar27);
  bVar39 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar39;
  *(byte *)puVar43 = (byte)*puVar43 + cVar11;
  bVar7 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar39;
  *(byte **)pbVar15 = unaff_EBP + (uint)CARRY1(bVar7,bVar39) + *(int *)pbVar15;
  piVar27 = (int *)CONCAT31((int3)((uint)pbVar15 >> 8),*pbVar15);
  *(byte *)puVar48 = (byte)*puVar48 + cVar11;
  puVar14 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(byte)puVar48 | (byte)*puVar48);
  pbVar15 = (byte *)((int)puVar14 + -0x43);
  *pbVar15 = *pbVar15 + (char)((uint)puVar48 >> 8);
  puVar48 = puVar14;
  puVar14 = puVar50;
  uVar53 = uVar51;
code_r0x00402e42:
  uVar51 = uStack_c;
  puVar50 = puVar14;
  uStack_c = uVar51;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e6e;
  iVar13 = *(int *)((int)piVar27 + *piVar27);
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
  piVar27 = (int *)(iVar13 + -0x8c6f);
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | *(byte *)((int)puVar48 + -0x3f),
                                      (char)puVar48));
  pbVar33 = (byte *)((int)piVar27 + *piVar27);
  pbVar15 = pbVar33;
  puVar50 = uStackY_38;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar33 = *pbVar33 + (char)pbVar33;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | (byte)*puVar48,(char)puVar42));
  puVar14 = puVar43 + (uint)bVar57 * -2 + 1;
  out(*puVar43,(short)puVar48);
  puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(char)puVar48 + (byte)*puVar50);
  puVar43 = puVar14 + (uint)bVar57 * -2 + 1;
  out(*puVar14,(short)puVar48);
  uVar53 = uVar51;
  uStack_c = uVar52;
code_r0x00402e6e:
  uVar51 = uVar53;
  uVar29 = (undefined3)((uint)puVar48 >> 8);
  cVar11 = (char)puVar48 + (byte)*puVar50;
  puVar14 = puVar43 + (uint)bVar57 * -2 + 1;
  out(*puVar43,(short)CONCAT31(uVar29,cVar11));
  puVar48 = (uint *)CONCAT31(uVar29,cVar11 + (byte)*puVar50);
  puVar43 = puVar14 + (uint)bVar57 * -2 + 1;
  out(*puVar14,(short)puVar48);
  pbVar15 = (byte *)0x0;
  puVar14 = puVar50;
code_r0x00402e81:
  puVar50 = puVar14;
  bVar39 = (char)pbVar15 - *pbVar15;
  iVar13 = CONCAT31((int3)((uint)pbVar15 >> 8),bVar39);
  *pbVar16 = *pbVar16 + (char)puVar48;
  pbVar33 = (byte *)(iVar13 * 2);
  *pbVar33 = *pbVar33 ^ bVar39;
  pbVar33 = (byte *)(int)(short)iVar13;
  *pbVar33 = *pbVar33 + bVar39;
  *(byte *)puVar50 = (byte)*puVar50 + (byte)puVar42;
  bVar7 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar39;
  *(byte **)(pbVar16 + -0x73) =
       (byte *)((int)puVar43 + (uint)CARRY1(bVar7,bVar39) + *(int *)(pbVar16 + -0x73));
  *pbVar33 = *pbVar33 + bVar39;
  bVar7 = (byte)puVar42 | (byte)*puVar48;
  puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar7);
  puVar14 = puVar43;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar33 = *pbVar33 + bVar39;
  pbVar15 = (byte *)CONCAT31((int3)(char)((uint)pbVar15 >> 8),bVar39 + 0x2d);
  puVar43[(int)puVar50 * 2] =
       (uint)((int)puVar48 + (uint)(0xd2 < bVar39) + puVar43[(int)puVar50 * 2]);
  pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar52);
  do {
    uVar17 = *puVar43;
    bVar7 = (byte)pbVar15;
    *(byte *)puVar43 = (byte)*puVar43 + bVar7;
    if (!CARRY1((byte)uVar17,bVar7)) break;
    *pbVar15 = *pbVar15 + bVar7;
    bVar7 = bVar7 | pbVar15[0x400001a];
    pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar33 = *pbVar33 + (byte)pbVar33;
      uVar29 = (undefined3)((uint)pbVar33 >> 8);
      bVar7 = (byte)pbVar33 | pbVar33[0x400001b];
      pcVar18 = (char *)CONCAT31(uVar29,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar17 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar42;
        *(char *)((int)pcVar18 * 2) =
             *(char *)((int)pcVar18 * 2) - CARRY1((byte)uVar17,(byte)puVar42);
        bVar55 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar33 = *pbVar33 + bVar7;
      puVar14 = puVar43;
code_r0x00402eb4:
      uVar29 = (undefined3)((uint)pbVar33 >> 8);
      bVar7 = (char)pbVar33 + 0x6f;
      pcVar18 = (char *)CONCAT31(uVar29,bVar7);
      *(byte **)pcVar18 = pbStackY_54;
      uVar17 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
      pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar52);
      uVar54 = uVar52;
      if ((byte)*puVar48 != 0 && SCARRY1((byte)uVar17,(char)puVar42) == (char)(byte)*puVar48 < '\0')
      {
        *pcVar18 = *pcVar18 + bVar7;
        bVar39 = (char)pbVar33 + 0x9c;
        pbVar33 = (byte *)CONCAT31(uVar29,bVar39);
        puVar14[(int)puVar50 * 2] =
             (uint)((int)puVar48 + (uint)(0xd2 < bVar7) + puVar14[(int)puVar50 * 2]);
        pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar52);
        uVar17 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + bVar39;
        puVar43 = puVar14;
        if (CARRY1((byte)uVar17,bVar39)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar43 = puVar14 + (uint)bVar57 * -2 + 1;
      out(*puVar14,(short)puVar48);
    }
    cVar11 = (char)pcVar18;
    *pcVar18 = *pcVar18 + cVar11;
    uVar29 = (undefined3)((uint)pcVar18 >> 8);
    bVar7 = cVar11 + 0x6f;
    pcVar18 = (char *)CONCAT31(uVar29,bVar7);
    *(byte **)pcVar18 = pbStackY_54;
    uVar17 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar42;
    pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar52);
    *(byte *)(puVar43 + 7) = ((byte)puVar43[7] - bVar10) - CARRY1((byte)uVar17,(byte)puVar42);
    *pcVar18 = *pcVar18 + bVar7;
    bVar39 = cVar11 + 0x9c;
    pcVar18 = (char *)CONCAT31(uVar29,bVar39);
    puVar43[(int)puVar50 * 2] =
         (uint)((int)puVar48 + (uint)(0xd2 < bVar7) + puVar43[(int)puVar50 * 2]);
    uVar17 = *puVar43;
    *(byte *)puVar43 = (byte)*puVar43 + bVar39;
    if (!CARRY1((byte)uVar17,bVar39)) goto code_r0x00402e7e;
    *pcVar18 = *pcVar18 + bVar39;
    bVar39 = bVar39 | pcVar18[0x400001c];
    pbVar15 = (byte *)CONCAT31(uVar29,bVar39);
    uStack_c = uVar52;
    if ((char)bVar39 < '\x01') goto code_r0x00402f16;
    *pbVar15 = *pbVar15 + bVar39;
    pcVar18 = (char *)CONCAT31(uVar29,bVar39 + 0x6f);
    while( true ) {
      *(byte **)pcVar18 = pbStackY_54;
      uVar17 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar42;
      *(uint *)((int)puVar43 + 0x1d) =
           (*(int *)((int)puVar43 + 0x1d) - (int)puVar50) - (uint)CARRY1((byte)uVar17,(byte)puVar42)
      ;
      bVar7 = (byte)pcVar18;
      *pcVar18 = *pcVar18 + bVar7;
      bVar39 = bVar7 + 0x2d;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar39);
      puVar43[(int)puVar50 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar7) + puVar43[(int)puVar50 * 2]);
      pbStackY_54 = (byte *)CONCAT22((short)((uint)pbStackY_54 >> 0x10),uVar52);
      uVar17 = *puVar43;
      *(byte *)puVar43 = (byte)*puVar43 + bVar39;
      if (!CARRY1((byte)uVar17,bVar39)) break;
      *pbVar15 = *pbVar15 + bVar39;
code_r0x00402f16:
      bVar7 = (byte)pbVar15 | pbVar15[0x400001d];
      puVar14 = (uint *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7);
      pbVar15 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar15;
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        uVar29 = (undefined3)((uint)puVar14 >> 8);
        cVar11 = (char)puVar14 + 'o';
        puVar45 = (uint *)CONCAT31(uVar29,cVar11);
        *puVar45 = (uint)pbStackY_54;
        cVar8 = (char)puVar42;
        *(byte *)puVar48 = (byte)*puVar48 + cVar8;
        pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar52);
        bVar7 = (byte)((uint)puVar48 >> 8);
        bVar55 = bVar7 < (byte)*puVar43;
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar43,(char)puVar48));
        if (bVar55) break;
        bVar55 = CARRY4((uint)puVar45,*puVar45);
        puVar14 = (uint *)((int)puVar45 + *puVar45);
        if (!SCARRY4((int)puVar45,*puVar45)) {
          bVar55 = CARRY4((uint)unaff_EBP,*puVar14);
          unaff_EBP = unaff_EBP + *puVar14;
        }
        *puVar14 = (*puVar14 - (int)puVar14) - (uint)bVar55;
        *(byte *)puVar48 = (byte)*puVar48 + cVar8;
        puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                   CONCAT11((char)((uint)puVar42 >> 8) + (byte)*puVar48,
                                            cVar8 - (byte)*puVar48));
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
code_r0x00402f3b:
        cVar8 = (char)puVar48;
        *pbVar16 = *pbVar16 + cVar8;
        bVar7 = (byte)puVar14;
        *(byte *)((int)puVar14 * 2) = *(byte *)((int)puVar14 * 2) ^ bVar7;
        *(byte *)puVar14 = (byte)*puVar14 + bVar7;
        *(byte *)puVar14 = (byte)*puVar14 + cVar8;
        uVar17 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + bVar7;
        *puVar48 = (uint)((int)puVar14 + (uint)CARRY1((byte)uVar17,bVar7) + *puVar48);
        pcVar18 = (char *)((uint)puVar14 | *puVar50);
        uVar29 = (undefined3)((uint)pcVar18 >> 8);
        cVar11 = (char)pcVar18 + *pcVar18;
        pcVar18 = (char *)CONCAT31(uVar29,cVar11);
        *pcVar18 = *pcVar18 + cVar11;
        cVar11 = cVar11 + *pcVar18;
        piVar27 = (int *)CONCAT31(uVar29,cVar11);
        *(char *)piVar27 = (char)*piVar27 + cVar11;
        iVar13 = LocalDescriptorTableRegister();
        *piVar27 = iVar13;
        bVar7 = *pbVar16;
        bVar35 = (byte)((uint)puVar42 >> 8);
        *pbVar16 = *pbVar16 + bVar35;
        iVar13 = *piVar27;
        uVar38 = (undefined2)((uint)puVar42 >> 0x10);
        bVar40 = (byte)puVar42;
        *(byte *)puVar43 = (byte)*puVar43 + cVar11;
        puVar14 = puVar43 + (uint)bVar57 * -2 + 1;
        out(*puVar43,(short)puVar48);
        *(byte *)puVar14 = (byte)*puVar14 + cVar11;
        bVar39 = *pbVar16;
        *(byte *)puVar48 = (byte)*puVar48 - bVar10;
        *(byte *)puVar14 = (byte)*puVar14 + cVar11;
        puVar45 = puVar14 + (uint)bVar57 * -2 + 1;
        out(*puVar14,(short)puVar48);
        *(byte *)puVar45 = (byte)*puVar45 + cVar11;
        bVar47 = *pbVar16;
        *(uint *)((int)puVar48 + -0x23) = *(uint *)((int)puVar48 + -0x23) & (uint)puVar45;
        puVar28 = (ushort *)((int)piVar27 + *piVar27);
        if (!SCARRY4((int)piVar27,*piVar27)) {
          *puVar28 = uVar54;
        }
        *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
        uVar41 = CONCAT11((char)((uint)puVar48 >> 8) + *(byte *)((int)puVar48 + -0x15),cVar8);
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),uVar41);
        puVar14 = (uint *)((int)puVar28 + *(int *)puVar28);
        if (!SCARRY4((int)puVar28,*(int *)puVar28)) {
          *(ushort *)puVar14 = uVar54;
        }
        cVar11 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar11;
        cVar12 = ((bVar35 - (char)iVar13) - CARRY1(bVar7,bVar35) | bVar39 | bVar47) + (byte)*puVar14
        ;
        puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(cVar12,bVar40));
        uVar17 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + bVar40;
        if (CARRY1((byte)uVar17,bVar40)) {
          *(byte *)puVar14 = (byte)*puVar14 + cVar11;
          bVar7 = *(byte *)((int)puVar48 + 6);
          *(byte *)puVar48 = (byte)*puVar48 + bVar40;
          bVar39 = (cVar12 - (byte)*puVar45) + cRam14730307;
          *(byte *)puVar14 = (byte)*puVar14 + cVar11;
          bVar7 = bVar10 | bVar7 | *(byte *)((int)puVar48 + 0x2a);
          uVar17 = *puVar14;
          pbVar16 = (byte *)((int)puVar14 + (uint)CARRY1(bVar39,(byte)*puVar14) + *puVar14);
          *(byte *)puVar48 = (byte)*puVar48 + bVar40;
          cVar11 = cVar9 - (byte)*puVar45;
          cVar9 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar37,CONCAT11(bVar7,cVar9)) >> 8),
                                             cVar11) + 0x1e);
          *pbVar16 = *pbVar16 + (char)pbVar16;
          uVar29 = (undefined3)((uint)pbVar16 >> 8);
          bVar7 = (char)pbVar16 + 0x2aU & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
          pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar9,cVar11)) + 0x1f);
          *pcVar18 = *pcVar18 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
          pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar9,cVar11)) + 0x20);
          *pcVar18 = *pcVar18 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
          pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar9,cVar11)) + 0x21);
          *pcVar18 = *pcVar18 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
          pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar9,cVar11)) + 0x22);
          *pcVar18 = *pcVar18 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
          pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
          bVar39 = bVar39 + (byte)uVar17 + *pcVar18;
          uVar34 = CONCAT22(uVar38,CONCAT11(bVar39,bVar40));
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar9,cVar11)) + 0x25);
          *pcVar18 = *pcVar18 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
          pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
          pcVar21 = (char *)CONCAT22(uVar37,CONCAT11(cVar9 + *(char *)(CONCAT22(uVar37,CONCAT11(
                                                  cVar9,cVar11)) + 0x26),cVar11));
          *pcVar18 = *pcVar18 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
          cVar11 = bVar7 + 0x2a;
          pcVar18 = (char *)CONCAT31(uVar29,cVar11);
          if ((POPCOUNT(cVar11) & 1U) == 0) {
            *pcVar18 = *pcVar18 + cVar11;
            pbVar16 = (byte *)(CONCAT31(uVar29,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar16;
            bVar47 = (byte)pbVar16;
            *pbVar16 = *pbVar16 + bVar47;
            uVar29 = (undefined3)((uint)pbVar16 >> 8);
            if (!CARRY1(bVar7,bVar47)) {
              if (!SCARRY1(bVar47,'\0')) {
                *pbVar16 = *pbVar16 + bVar47;
                uVar34 = CONCAT22(uVar38,CONCAT11(bVar39 | (byte)*puVar48,bVar40));
                bVar47 = bVar47 & (byte)*puVar48;
                *(char *)CONCAT31(uVar29,bVar47) = *(char *)CONCAT31(uVar29,bVar47) + bVar47;
                pcVar18 = (char *)CONCAT31(uVar29,bVar47 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar18 = (char *)CONCAT31(uVar29,bVar47 + *pcVar21);
              if (SCARRY1(bVar47,*pcVar21) != (char)(bVar47 + *pcVar21) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar47 + *pcVar21;
            pbVar16 = (byte *)CONCAT31(uVar29,bVar7);
            if (SCARRY1(bVar47,*pcVar21) == (char)bVar7 < '\0') {
              pcVar18 = (char *)CONCAT22(uVar38,CONCAT11(bVar39 | (byte)*puVar48,bVar40));
              *pcVar21 = *pcVar21 + cVar8;
              *(byte *)puVar48 = (byte)*puVar48 ^ bVar7;
              *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar18 = *pcVar18 + (char)pcVar18;
            uVar29 = (undefined3)((uint)pcVar18 >> 8);
            bVar7 = (char)pcVar18 + 0x2aU & (byte)*puVar48;
            *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
            pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
            *pcVar18 = *pcVar18 + bVar7 + 0x2a;
            pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x54 & (byte)*puVar48);
code_r0x00403072:
            cVar11 = (char)pcVar18;
            *pcVar18 = *pcVar18 + cVar11;
            uVar29 = (undefined3)((uint)pcVar18 >> 8);
            pcVar18 = (char *)CONCAT31(uVar29,cVar11 + '*');
            *pcVar18 = *pcVar18 + cVar11 + '*';
            bVar7 = cVar11 + 0x54U & (byte)*puVar48;
            *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
            pcStackY_8c = (char *)CONCAT22(pcStackY_8c._2_2_,uVar51);
            uVar34 = CONCAT22((short)((uint)uVar34 >> 0x10),
                              CONCAT11((char)((uint)uVar34 >> 8) +
                                       *(char *)CONCAT31(uVar29,bVar7 + 0x2a),(char)uVar34));
            *(byte *)(puVar45 + 0x828000) = (byte)puVar45[0x828000] - cVar8;
            pcVar18 = pcStackY_8c;
code_r0x0040309a:
            cVar11 = (char)pcVar18;
            *pcVar18 = *pcVar18 + cVar11;
            pcStackY_8c = (char *)CONCAT22(pcStackY_8c._2_2_,uVar52);
            *pcVar18 = *pcVar18 + cVar11;
            pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar11 + 0x2aU & (byte)*puVar48);
          }
          cVar11 = (char)pbVar16;
          *pbVar16 = *pbVar16 + cVar11;
          uVar29 = (undefined3)((uint)pbVar16 >> 8);
          cVar9 = cVar11 + '*';
          pcVar18 = (char *)CONCAT31(uVar29,cVar9);
          *(byte *)(puVar45 + 0x828000) = (byte)puVar45[0x828000] - cVar8;
          *pcVar18 = *pcVar18 + cVar9;
          cVar12 = (char)pcStackY_8c - (byte)*puVar45;
          pcVar21 = (char *)CONCAT22((short)((uint)pcStackY_8c >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_8c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_8c >> 8),
                                                                 cVar12) + 0x34),cVar12));
          *pcVar18 = *pcVar18 + cVar9;
          bVar7 = cVar11 + 0x54U & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
          pbVar16 = (byte *)CONCAT31(uVar29,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar34 >> 8);
          pcVar18 = (char *)CONCAT22((short)((uint)uVar34 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar16,(char)uVar34));
          pbVar16 = pbVar16 + (uint)CARRY1(bVar7,*pbVar16) + *(int *)pbVar16;
          *(byte *)puVar48 = (byte)*puVar48 + (char)uVar34;
          uVar29 = (undefined3)((uint)pbVar16 >> 8);
          cVar11 = (byte)pbVar16 - *pbVar16;
          piVar27 = (int *)CONCAT31(uVar29,cVar11);
          puVar45 = (uint *)((int)puVar45 + (uint)((byte)pbVar16 < *pbVar16) + *piVar27);
          cVar11 = cVar11 + (char)*piVar27;
          pbVar16 = (byte *)CONCAT31(uVar29,cVar11);
          *pbVar16 = *pbVar16 + cVar11;
code_r0x004030df:
          *pcVar18 = *pcVar18 + cVar8;
          bVar7 = *pbVar16;
          bVar39 = (byte)pbVar16;
          *pbVar16 = *pbVar16 + bVar39;
          *(byte **)(pcVar21 + -0x41) =
               (byte *)((int)puVar45 + (uint)CARRY1(bVar7,bVar39) + *(int *)(pcVar21 + -0x41));
          *pbVar16 = *pbVar16 + bVar39;
          uVar29 = (undefined3)((uint)pbVar16 >> 8);
          bVar39 = bVar39 | (byte)*puVar45;
          *(char *)CONCAT31(uVar29,bVar39) = *(char *)CONCAT31(uVar29,bVar39) + bVar39;
          pcVar18 = (char *)CONCAT31(uVar29,bVar39 + 0x7b);
          *pcVar18 = *pcVar18 + bVar39 + 0x7b;
          pbVar16 = (byte *)((int)puVar45 + CONCAT31(uVar29,bVar39 - 8) + -1);
          *pbVar16 = *pbVar16 + (bVar39 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar43 = puVar45 + (uint)bVar57 * -2 + 1;
        out(*puVar45,uVar41);
        pbVar15 = unaff_EBP + 1;
        pbStackY_54 = unaff_EBP;
      }
      bVar7 = cVar11 - bVar55;
      pbVar15 = (byte *)((int)puVar43 + (int)puVar50 * 2);
      bVar55 = CARRY1(*pbVar15,bVar7);
      *pbVar15 = *pbVar15 + bVar7;
code_r0x00402ef9:
      pcVar18 = (char *)CONCAT31(uVar29,bVar7 - bVar55);
      pbVar15 = (byte *)((int)puVar50 + (int)unaff_EBP * 2);
      *pbVar15 = *pbVar15 + (bVar7 - bVar55);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar42 = (byte)*puVar42 + (char)puVar48;
  puVar14 = puVar48 + 0x2828000;
  bVar7 = (byte)puVar42;
  bVar55 = (byte)*puVar14 < bVar7;
  *(byte *)puVar14 = (byte)*puVar14 - bVar7;
  bVar7 = (byte)pbVar15 + *pbVar15;
  piVar27 = (int *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7 + bVar55);
  puVar14 = puVar50;
  uVar53 = uVar51;
  if (CARRY1((byte)pbVar15,*pbVar15) || CARRY1(bVar7,bVar55)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar18 = *pcVar18 + bVar39;
  uVar53 = uVar51;
  uStack_c = uVar52;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  pbVar15 = (byte *)CONCAT22(uVar37,CONCAT11(cVar8 + unaff_EBP[(int)pcVar18 * 4],uVar32));
  unaff_EDI[(int)pcVar18] = unaff_EDI[(int)pcVar18] + bVar39;
  goto code_r0x0040254a;
}


