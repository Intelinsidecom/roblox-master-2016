/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004020de
 * Raw Name    : set_AreSettingsLoaded
 * Demangled   : set_AreSettingsLoaded
 * Prototype   : void set_AreSettingsLoaded(undefined4 param_1, byte * param_2)
 * Local Vars  : uStack_14, uVar1, pcVar2, uVar3, uVar4, uVar5, cVar6, cVar7, bVar8, bVar9, bVar10, cVar11, in_EAX, pcVar12, iVar13, puVar14, pbVar15, pbVar16, uVar17, pcVar18, iVar19, param_1, pbVar20, pbVar21, uVar22, uVar23, puVar24, piVar25, pcVar26, piVar27, puVar28, uVar29, uVar30, iVar31, uVar32, pbVar33, extraout_ECX, extraout_ECX_00, extraout_ECX_01, extraout_ECX_02, uVar34, bVar35, bVar36, cVar37, uVar38, uVar39, bVar40, uVar41, puVar42, puVar43, pbVar44, puVar45, uVar46, unaff_EBX, cVar47, unaff_EBP, unaff_ESI, puVar48, puVar49, unaff_EDI, pbVar50, puVar51, in_ES, uVar52, uVar53, in_CS, uVar54, in_SS, uVar55, in_GS_OFFSET, bVar56, in_AF, bVar57, in_TF, in_IF, bVar58, bVar59, in_NT, uVar60, unaff_retaddr, in_stack_ffffffcc, in_stack_ffffffd4, param_2, pcStackY_a0, pbStackY_68, puStackY_54, puStackY_50, uStackY_4c, uStack_24, uStack_20, uStack_1d, uStack_1c
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall set_AreSettingsLoaded(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  undefined4 in_EAX;
  undefined3 uVar29;
  char *pcVar12;
  int iVar13;
  uint *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint3 uVar30;
  uint uVar17;
  char *pcVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  int3 iVar31;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  int *piVar25;
  char *pcVar26;
  int *piVar27;
  ushort *puVar28;
  undefined1 uVar32;
  byte bVar35;
  undefined2 uVar38;
  byte *pbVar33;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar36;
  char cVar37;
  undefined2 uVar39;
  undefined4 uVar34;
  byte bVar40;
  undefined2 uVar41;
  uint *puVar42;
  uint *puVar43;
  byte *pbVar44;
  undefined3 uVar46;
  uint *puVar45;
  char cVar47;
  char *unaff_EBX;
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
  uint *unaff_retaddr;
  char *pcStackY_a0;
  byte *pbStackY_68;
  uint *puStackY_54;
  uint *puStackY_50;
  undefined4 uStackY_4c;
  undefined4 in_stack_ffffffcc;
  byte *in_stack_ffffffd4;
  ushort uStack_24;
  ushort uStack_20;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  ushort uStack_14;
  
  bVar58 = false;
                    /* .NET CLR Managed Code */
  uVar29 = (undefined3)((uint)in_EAX >> 8);
  cVar6 = (char)in_EAX + *unaff_EBX;
  pcVar18 = (char *)CONCAT31(uVar29,cVar6);
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar6 < '\0') {
    unaff_EBP[0x2a6a1603] = unaff_EBP[0x2a6a1603] + cVar6;
  }
  else {
    *pcVar18 = *pcVar18 + cVar6;
    pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '*');
    unaff_EBX = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[6],
                                          (char)unaff_EBX));
    *pcVar18 = *pcVar18 + cVar6 + '*';
    pcVar18 = (char *)CONCAT31(uVar29,cVar6 + 'W');
    param_2 = param_2 + *unaff_retaddr;
    unaff_ESI = unaff_retaddr;
  }
  uVar39 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar32 = SUB41(unaff_EBX,0);
  cVar47 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[6];
  cVar6 = (char)pcVar18;
  *pcVar18 = *pcVar18 + cVar6;
  uVar29 = (undefined3)((uint)pcVar18 >> 8);
  cVar7 = cVar6 + 'o';
  pcVar18 = (char *)CONCAT31(uVar29,cVar7);
  *pcVar18 = *pcVar18 + cVar7;
  bVar10 = *param_2;
  uVar38 = (undefined2)((uint)param_1 >> 0x10);
  bVar40 = (byte)param_1;
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar39,CONCAT11(cVar47,uVar32)) + 10);
  *pcVar18 = *pcVar18 + cVar7;
  bVar8 = cVar6 + 0x99U & *param_2;
  pbVar50 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + 10));
  *(char *)CONCAT31(uVar29,bVar8) = *(char *)CONCAT31(uVar29,bVar8) + bVar8;
  bVar9 = bVar8 + 0x2a;
  pcVar18 = (char *)CONCAT31(uVar29,bVar9);
  bVar35 = pbVar50[0x17];
  *pcVar18 = *pcVar18 + bVar9;
  bVar35 = ((byte)((uint)param_1 >> 8) | bVar10) + bVar35 | *param_2;
  pcVar26 = (char *)CONCAT22(uVar38,CONCAT11(bVar35,bVar40));
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar39,CONCAT11(cVar47,uVar32)) + 0x4e);
  *pcVar18 = *pcVar18 + bVar9;
  pcVar18 = (char *)CONCAT31(uVar29,bVar8 + 0x52);
  *pcVar18 = (*pcVar18 - (bVar8 + 0x52)) - (0xd7 < bVar9);
  *param_2 = *param_2 + bVar40;
  bVar10 = bVar8 + 0x45;
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar39,CONCAT11(cVar47,uVar32)) + 0x4f);
  iVar19 = CONCAT22(uVar39,CONCAT11(cVar47,uVar32));
  *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
  pcVar18 = (char *)CONCAT31(uVar29,bVar8 + 0x6d);
  *pcVar18 = (*pcVar18 - (bVar8 + 0x6d)) - (0xd7 < bVar10);
  *param_2 = *param_2 + bVar40;
  pcVar12 = pcVar18 + -0x6b721c;
  pcVar18 = pcVar18 + -0x6b721a;
  cVar6 = (char)((uint)param_2 >> 8);
  *pcVar18 = *pcVar18 + cVar6;
  bVar10 = (byte)param_2;
  if ((POPCOUNT(*pcVar18) & 1U) == 0) {
    cVar7 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar7;
    uVar29 = (undefined3)((uint)pcVar12 >> 8);
    bVar8 = cVar7 + 2;
    pcVar18 = (char *)CONCAT31(uVar29,bVar8);
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *pcVar18 = *pcVar18 + bVar8;
      piVar27 = (int *)CONCAT31(uVar29,cVar7 + '*');
      *piVar27 = (*piVar27 - (int)piVar27) - (uint)(0xd7 < bVar8);
      bVar8 = *param_2;
      *param_2 = *param_2 + bVar40;
      out(*unaff_ESI,(short)param_2);
      cVar7 = ((cVar7 + '*') - (char)*piVar27) - CARRY1(bVar8,bVar40);
      piVar27 = (int *)CONCAT31(uVar29,cVar7);
      *param_2 = *param_2 + bVar40;
      bVar8 = cVar47 - *(byte *)((int)unaff_ESI + 0x1f);
      iVar19 = CONCAT22(uVar39,CONCAT11(bVar8,uVar32));
      *(char *)piVar27 = (char)*piVar27 + cVar7;
      pcVar26 = (char *)CONCAT22(uVar38,CONCAT11(bVar35 | *param_2,bVar40));
      unaff_ESI = (uint *)((int)unaff_ESI + (4 - *piVar27));
      *(undefined4 *)CONCAT31(uVar29,cVar7) = 0x10000;
      *pcVar26 = *pcVar26 + bVar10;
      bVar35 = cVar7 + *param_2;
      pcVar18 = (char *)CONCAT31(uVar29,bVar35);
      if ((POPCOUNT(bVar35) & 1U) == 0) {
        *pcVar18 = *pcVar18 + bVar35;
        cVar7 = (bVar35 + 0x6f) - (0x90 < bVar35);
        pcVar18 = (char *)CONCAT31(uVar29,cVar7);
        bVar35 = *param_2;
        *param_2 = *param_2 + bVar40;
        if (SCARRY1(bVar35,bVar40) == (char)*param_2 < '\0') {
          *pcVar18 = *pcVar18 + cVar7;
          out(*unaff_ESI,(short)param_2);
          unaff_ESI = unaff_ESI + 1;
        }
      }
      else {
        *pcVar18 = *pcVar18 + bVar35;
        iVar19 = CONCAT22(uVar39,CONCAT11(bVar8 | unaff_EBP[6],uVar32));
      }
      *pcVar18 = *pcVar18 + (char)pcVar18;
      bVar56 = bRam6f060000 < bVar10;
      bRam6f060000 = bRam6f060000 - bVar10;
      iVar13 = (CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x02') + -0xa0a0000) -
               (uint)bVar56;
      bVar35 = (byte)iVar13;
      bVar56 = CARRY1(bVar35,(byte)*unaff_ESI);
      uVar29 = (undefined3)((uint)iVar13 >> 8);
      cVar7 = bVar35 + (byte)*unaff_ESI;
      pcVar12 = (char *)CONCAT31(uVar29,cVar7);
      if (bVar56) {
        *pcVar12 = *pcVar12 + cVar7;
        iVar19 = CONCAT22((short)((uint)iVar19 >> 0x10),
                          CONCAT11((byte)((uint)iVar19 >> 8) | unaff_EBP[7],(char)iVar19));
        *pcVar12 = *pcVar12 + cVar7;
        goto code_r0x00402188;
      }
      pcVar18 = (char *)CONCAT31(uVar29,cVar7 + -2 + bVar56);
      uStack_14 = in_ES;
    }
  }
  else {
code_r0x00402188:
    cVar7 = (char)pcVar12 + '\x02';
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar7);
    iVar19 = CONCAT22((short)((uint)iVar19 >> 0x10),
                      CONCAT11((char)((uint)iVar19 >> 8) + *(char *)(iVar19 + 4),(char)iVar19));
    *pcVar18 = *pcVar18 + cVar7;
  }
  uVar29 = (undefined3)((uint)pcVar18 >> 8);
  bVar35 = (byte)pcVar18 + 0x2d;
  bVar8 = 9 < (bVar35 & 0xf) | in_AF;
  bVar35 = bVar35 + bVar8 * -6;
  cVar7 = bVar35 + (0x9f < bVar35 | 0xd2 < (byte)pcVar18 | bVar8 * (bVar35 < 6)) * -0x60;
  uVar38 = (undefined2)((uint)iVar19 >> 0x10);
  cVar47 = (char)((uint)iVar19 >> 8) + *(char *)(iVar19 + 7);
  pbVar33 = (byte *)CONCAT22(uVar38,CONCAT11(cVar47,(char)iVar19));
  *(char *)CONCAT31(uVar29,cVar7) = *(char *)CONCAT31(uVar29,cVar7) + cVar7;
  bVar9 = cVar7 + 0x7e;
  pbVar15 = (byte *)CONCAT31(uVar29,bVar9);
  pbVar16 = unaff_EBP + 0x6fe1411;
  bVar35 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  *pbVar15 = (*pbVar15 - bVar9) - CARRY1(bVar35,bVar9);
  bVar56 = CARRY1((byte)*unaff_ESI,bVar9);
  uVar17 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar9;
  bVar35 = (byte)((uint)pcVar26 >> 8);
  if (bVar56) {
    *pbVar15 = *pbVar15 + bVar9;
    bVar9 = bVar9 | pbVar15[0x400000c];
    puVar14 = (uint *)CONCAT31(uVar29,bVar9);
    if ((char)bVar9 < '\x01') {
code_r0x004021be:
      pcVar26 = (char *)CONCAT22((short)((uint)pcVar26 >> 0x10),
                                 CONCAT11(bVar35 | *pbVar33,(char)pcVar26));
      puVar14 = (uint *)((int)puVar14 + -0x77b02);
      pbVar16 = (byte *)((int)unaff_ESI + (int)pbVar50 * 2);
      *pbVar16 = *pbVar16 + (char)puVar14;
      pbVar15 = (byte *)((uint)puVar14 | *puVar14);
      bVar35 = (byte)pbVar15;
      unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar35;
      bVar56 = CARRY1(*pbVar15,bVar35);
      *pbVar15 = *pbVar15 + bVar35;
      in_SS = uStack_14;
      goto code_r0x004021d4;
    }
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    cVar7 = bVar9 + 0x28;
    puVar14 = (uint *)CONCAT31(uVar29,cVar7);
    *puVar14 = (uint)(*puVar14 + (int)puVar14);
    bVar9 = *pbVar33;
    *pbVar33 = *pbVar33 + bVar35;
    if (CARRY1(bVar9,bVar35)) {
      *(char *)puVar14 = (char)*puVar14 + cVar7;
      goto code_r0x004021be;
    }
    pbVar16 = (byte *)((int)unaff_ESI + (int)pbVar50 * 2);
    *pbVar16 = *pbVar16 + cVar7;
    pbVar15 = (byte *)((uint)puVar14 | *puVar14);
    pbVar15[(int)unaff_EBP] = pbVar15[(int)unaff_EBP] + (char)pbVar15;
code_r0x004021e5:
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    bVar35 = *pbVar33;
    bVar9 = (byte)((uint)pcVar26 >> 8);
    *pbVar33 = *pbVar33 + bVar9;
    if (!CARRY1(bVar35,bVar9)) goto code_r0x0040220c;
    *pbVar15 = *pbVar15 + (char)pbVar15;
    pcVar26 = (char *)CONCAT22((short)((uint)pcVar26 >> 0x10),
                               CONCAT11(bVar9 | *pbVar15,(char)pcVar26));
code_r0x004021f1:
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)pbVar15;
  }
  else {
    if ((byte)*unaff_ESI != 0 && SCARRY1((byte)uVar17,bVar9) == (char)(byte)*unaff_ESI < '\0') {
      *pbVar15 = *pbVar15 + bVar9;
      puVar14 = (uint *)CONCAT31(uVar29,cVar7 + -0x55);
      unaff_ESI[(int)pbVar50 * 2] =
           (uint)(param_2 + (uint)(0xd2 < bVar9) + unaff_ESI[(int)pbVar50 * 2]);
      goto code_r0x004021be;
    }
code_r0x004021d4:
    if (bVar56) {
      *pbVar15 = *pbVar15 + (byte)pbVar15;
      uVar29 = (undefined3)((uint)pbVar15 >> 8);
      bVar35 = (byte)pbVar15 | pbVar15[0x400000b];
      pbVar15 = (byte *)CONCAT31(uVar29,bVar35);
      if ('\0' < (char)bVar35) {
        *pbVar15 = *pbVar15 + bVar35;
        pbVar15 = (byte *)CONCAT31(uVar29,bVar35 + 0x28);
        goto code_r0x004021e5;
      }
      *param_2 = *param_2 + (char)pcVar26;
      *(char *)((int)pbVar15 * 2) = *(char *)((int)pbVar15 * 2) - (char)pcVar26;
      goto code_r0x004021f1;
    }
  }
  pbVar33 = (byte *)CONCAT22(uVar38,CONCAT11(cVar47 + pbVar33[6],(char)iVar19));
  *pbVar15 = *pbVar15 + (char)pbVar15;
  uVar29 = (undefined3)((uint)pbVar15 >> 8);
  bVar9 = (char)pbVar15 + 0x6f;
  bVar35 = *(byte *)CONCAT31(uVar29,bVar9);
  *param_2 = *param_2 + (char)pcVar26;
  cVar7 = (bVar9 & bVar35) + *pbVar50;
  pbVar15 = (byte *)CONCAT31(uVar29,cVar7);
  *pcVar26 = *pcVar26 - cVar6;
  *pbVar15 = *pbVar15 + cVar7;
  *pcVar26 = *pcVar26 - bVar10;
  *pbVar15 = *pbVar15 + cVar7;
code_r0x0040220c:
  uStack_1c = CONCAT22(uStack_1c._2_2_,in_SS);
  bVar35 = (byte)pbVar15 | 0xde;
  cVar6 = bVar35 + 2;
  uVar29 = (undefined3)((uint)pbVar15 >> 8);
  pcVar18 = (char *)CONCAT31(uVar29,cVar6);
  if ((POPCOUNT(cVar6) & 1U) == 0) {
    *pcVar18 = *pcVar18 + cVar6;
    bVar35 = bVar35 + 0x71;
    pcVar18 = (char *)CONCAT31(uVar29,bVar35 & *(byte *)CONCAT31(uVar29,bVar35));
  }
  cVar6 = (char)pcVar26;
  *param_2 = *param_2 + cVar6;
  uVar29 = (undefined3)((uint)param_2 >> 8);
  bVar10 = bVar10 + *pbVar50;
  puVar42 = (uint *)CONCAT31(uVar29,bVar10);
  *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar6;
  *pcVar18 = *pcVar18 + (char)pcVar18;
  cVar6 = cVar6 - *pcVar18;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar26 >> 8),cVar6);
  bVar9 = (char)pcVar18 - *pcVar18;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar9);
  *(byte **)pbVar16 = (byte *)(*(int *)pbVar16 + (int)puVar42);
  *pbVar16 = *pbVar16 + bVar9;
  bVar35 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  *(byte **)pbVar16 = pbVar16 + (uint)CARRY1(bVar35,bVar9) + *(int *)pbVar16;
  *pcVar12 = *pcVar12 + bVar9;
  bVar35 = (byte)((uint)pcVar26 >> 8);
  uVar38 = (undefined2)((uint)pcVar26 >> 0x10);
  bVar9 = bVar35 + *pbVar16;
  puVar14 = (uint *)CONCAT22(uVar38,CONCAT11(bVar9,cVar6));
  pbVar16 = pbVar16 + (uint)CARRY1(bVar35,*pbVar16) + *(int *)pbVar16;
  *(byte *)puVar42 = (byte)*puVar42 + cVar6;
  uVar46 = (undefined3)((uint)pbVar33 >> 8);
  cVar7 = (char)pbVar33 - *(byte *)((int)unaff_ESI + 2);
  pbVar15 = (byte *)CONCAT31(uVar46,cVar7);
  bVar35 = (byte)pbVar16;
  uVar30 = (uint3)((uint)pbVar16 >> 8);
  uVar55 = in_ES;
  if ((POPCOUNT(cVar7) & 1U) == 0) {
    *pbVar16 = *pbVar16 + bVar35;
    bVar35 = bVar35 | *pbVar15;
    piVar27 = (int *)CONCAT31(uVar30,bVar35);
    if (bVar35 == 0) {
      *(char *)piVar27 = (char)*piVar27;
      puVar48 = unaff_ESI + 1;
      out(*unaff_ESI,(short)puVar42);
      pbVar16 = (byte *)((uint)uVar30 << 8);
      *(byte *)puVar42 = (byte)*puVar42 + cVar6;
      puVar42 = (uint *)CONCAT31(uVar29,bVar10 - *pbVar15);
      *pbVar15 = *pbVar15;
      *(byte *)puVar42 = (byte)*puVar42 + bVar9;
      *pbVar16 = *pbVar16;
      *(byte *)puVar42 = (byte)*puVar42;
      *pbVar16 = *pbVar16;
      *(byte **)(pbVar15 + 0x25) = (byte *)(*(int *)(pbVar15 + 0x25) + (int)puVar48);
    }
    else {
      unaff_EBP = unaff_EBP + -*(int *)(pbVar50 + 0x24);
      *(byte *)piVar27 = (char)*piVar27 + bVar35;
      puVar14 = (uint *)CONCAT22(uVar38,CONCAT11(bVar9 | (byte)*puVar42,cVar6));
      puVar48 = (uint *)((int)unaff_ESI + *piVar27);
      pcVar18 = (char *)((int)piVar27 + *piVar27);
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      cVar47 = (char)pcVar18 - *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar29,cVar47);
      *pcVar18 = *pcVar18 + cVar47;
      pbVar16 = (byte *)CONCAT31(uVar29,cVar47 + *pcVar18);
      uVar17 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar10;
      if (!CARRY1((byte)uVar17,bVar10)) {
        *(byte *)puVar42 = (byte)*puVar42 + cVar6;
        pbVar15 = (byte *)CONCAT31(uVar46,cVar7 - (byte)*puVar48);
        goto _ctor;
      }
    }
    *pbVar16 = *pbVar16 + (char)pbVar16;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(byte)puVar14 | (byte)*puVar42);
    unaff_ESI = puVar48;
  }
  else {
    *(byte *)puVar42 = (byte)*puVar42 + cVar6;
    pbVar16 = (byte *)CONCAT31(uVar30,bVar35 | (byte)*unaff_ESI);
  }
  pbVar50 = pbVar50 + *(int *)(unaff_EBP + 0x26);
  *pbVar16 = *pbVar16 + (byte)pbVar16;
  uVar29 = (undefined3)((uint)pbVar16 >> 8);
  bVar10 = (byte)pbVar16 | (byte)*puVar42;
  pbVar16 = (byte *)CONCAT31(uVar29,bVar10);
  if ((POPCOUNT(bVar10) & 1U) == 0) {
    *pbVar16 = *pbVar16 + bVar10;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    bVar8 = 9 < (bVar10 + 6 & 0xf) | bVar8;
    bVar35 = bVar10 + 6 + bVar8 * '\x06';
    pbVar16 = (byte *)CONCAT31(uVar29,bVar35 + (0x90 < (bVar35 & 0xf0) |
                                               0xf9 < bVar10 | bVar8 * (0xf9 < bVar35)) * '`');
  }
  *pbVar16 = *pbVar16 + (char)pbVar16;
  puVar48 = unaff_ESI;
  do {
    puVar43 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | pbVar15[0x28],(char)puVar42));
    *pbVar16 = *pbVar16 + (char)pbVar16;
    uVar38 = (undefined2)((uint)puVar14 >> 0x10);
    uVar32 = SUB41(puVar14,0);
    bVar35 = (byte)((uint)puVar14 >> 8) | *pbVar16;
    puVar14 = (uint *)CONCAT22(uVar38,CONCAT11(bVar35,uVar32));
    cVar6 = (char)pbVar16 + *pbVar16;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6);
    bVar10 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar35;
    if (!CARRY1(bVar10,bVar35)) goto code_r0x004022b3;
    *pbVar16 = *pbVar16 + cVar6;
    puVar14 = (uint *)CONCAT22(uVar38,CONCAT11(bVar35 | (byte)*puVar43,uVar32));
    puVar42 = puVar43;
_ctor:
    bVar10 = (byte)((uint)puVar14 >> 8);
    uVar38 = (undefined2)((uint)puVar14 >> 0x10);
    cVar6 = (char)puVar14;
    bVar35 = bVar10 + *pbVar16;
    puVar14 = (uint *)CONCAT22(uVar38,CONCAT11(bVar35,cVar6));
    pbVar16 = pbVar16 + (uint)CARRY1(bVar10,*pbVar16) + *(int *)pbVar16;
    *(byte *)puVar42 = (byte)*puVar42 + cVar6;
    bVar9 = (byte)pbVar15;
    bVar56 = bVar9 < *(byte *)((int)puVar48 + 2);
    bVar10 = *(byte *)((int)puVar48 + 2);
    cVar7 = bVar9 - bVar10;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      if ((char)bVar10 <= (char)bVar9) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *pbVar16 = *pbVar16 + (byte)pbVar16;
    bVar10 = (byte)pbVar16 | *pbVar15;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10);
    puVar43 = puVar42;
    if (bVar10 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(pbVar50 + 0x2b);
      *pbVar16 = *pbVar16 + bVar10;
      puVar14 = (uint *)CONCAT22(uVar38,CONCAT11(bVar35 | (byte)*puVar42,cVar6));
      bVar35 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar10;
      puVar48 = (uint *)((int)puVar48 + (uint)CARRY1(bVar35,bVar10) + *(int *)pbVar16);
      pbVar16 = pbVar16 + *(int *)pbVar16;
      cVar6 = (char)pbVar16 - *pbVar16;
      piVar27 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6);
      *(char *)piVar27 = (char)*piVar27 + cVar6;
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
    bVar10 = (char)pbVar16 - *pbVar16;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10);
    *pbVar15 = *pbVar15 + (char)puVar43;
    *pbVar15 = *pbVar15 ^ bVar10;
code_r0x004022b3:
    *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)puVar14 >> 8);
    bVar35 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar35;
    *pbVar15 = *pbVar15 + bVar35;
    bVar10 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar35;
    *(byte **)(pbVar15 + 0x2c) =
         (byte *)((int)puVar48 + (uint)CARRY1(bVar10,bVar35) + *(int *)(pbVar15 + 0x2c));
    puVar42 = puVar43;
code_r0x004022be:
    *pbVar16 = *pbVar16 + (char)pbVar16;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(byte)puVar14 | (byte)*puVar42);
    pbVar50 = pbVar50 + *(int *)(unaff_EBP + 0x2d);
code_r0x004022c6:
    *pbVar16 = *pbVar16 + (byte)pbVar16;
    uVar29 = (undefined3)((uint)pbVar16 >> 8);
    bVar10 = (byte)pbVar16 | (byte)*puVar42;
    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
    if ((POPCOUNT(bVar10) & 1U) != 0) {
      *pcVar18 = *pcVar18 + bVar10;
    }
    *pcVar18 = *pcVar18 + bVar10;
    cVar6 = bVar10 + 6;
    pbVar16 = (byte *)CONCAT31(uVar29,cVar6);
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    *pbVar16 = *pbVar16 + cVar6;
    puVar43 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | pbVar15[0x2f],(char)puVar42));
    *pbVar16 = *pbVar16 + cVar6;
    bVar10 = (byte)((uint)puVar14 >> 8) | *pbVar16;
    puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),CONCAT11(bVar10,(char)puVar14));
    pbVar16 = pbVar16 + *(int *)pbVar16;
    bVar56 = CARRY1(*pbVar15,bVar10);
    *pbVar15 = *pbVar15 + bVar10;
code_r0x004022e0:
    puVar42 = puVar43;
    if (!bVar56) goto code_r0x0040230b;
    bVar35 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar35;
    puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                               CONCAT11((byte)((uint)puVar14 >> 8) | (byte)*puVar43,(char)puVar14));
    bVar10 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar35;
    puVar48 = (uint *)((int)puVar48 + (-(uint)CARRY1(bVar10,bVar35) - *(int *)pbVar16));
code_r0x004022ea:
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + *pbVar16);
code_r0x004022ef:
    *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) + (char)pbVar16;
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar43;
    uVar55 = (ushort)in_stack_ffffffd4;
    puVar42 = puVar43;
    while( true ) {
      uVar29 = (undefined3)((uint)pbVar16 >> 8);
      bVar10 = (byte)pbVar16 | (byte)*puVar42;
      pbVar16 = (byte *)CONCAT31(uVar29,bVar10);
      if ((POPCOUNT(bVar10) & 1U) != 0) break;
      *pbVar16 = *pbVar16 + bVar10;
      cVar6 = bVar10 + 0xd;
      pcVar18 = (char *)CONCAT31(uVar29,cVar6);
      *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar18;
      *pcVar18 = *pcVar18 + cVar6;
      *(char *)((int)pcVar18 * 2) = *(char *)((int)pcVar18 * 2) + (char)((uint)puVar14 >> 8);
      *pcVar18 = *pcVar18 + cVar6;
      pbVar16 = (byte *)CONCAT31(uVar29,cVar6);
      *pbVar16 = *pbVar16 + cVar6;
code_r0x0040230b:
      puVar43 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((char)((uint)puVar42 >> 8) + pbVar15[0x34],(char)puVar42))
      ;
      cVar6 = (char)pbVar16;
      *pbVar16 = *pbVar16 + cVar6;
      pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar15 >> 8) | unaff_EBP[-0x79],
                                          (char)pbVar15));
      *pbVar16 = *pbVar16 + cVar6;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6 + '\x02');
code_r0x00402317:
      pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                 CONCAT11((char)((uint)pbVar15 >> 8) + pbVar15[-0x7a],(char)pbVar15)
                                );
      cVar6 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar6;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      cVar7 = cVar6 + '{';
      pbVar16 = (byte *)CONCAT31(uVar29,cVar7);
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      pbVar33 = (byte *)((int)puVar43 + (int)pbVar16);
      *pbVar33 = *pbVar33 + cVar7;
      if ((POPCOUNT(*pbVar33) & 1U) != 0) goto code_r0x004022ab;
      *pbVar16 = *pbVar16 + cVar7;
      piVar27 = (int *)CONCAT31(uVar29,cVar6 + -10);
      uVar17 = (int)piVar27 + *piVar27;
      bVar10 = (byte)uVar17;
      pbVar50[(int)unaff_EBP * 2] = pbVar50[(int)unaff_EBP * 2] + bVar10;
      pbVar16 = (byte *)(uVar17 ^ 0x7d0a0000);
      *pbVar16 = bVar10;
      pbVar33 = (byte *)((int)puVar43 + (int)pbVar16);
      *pbVar33 = *pbVar33 + bVar10;
      puVar42 = puVar43;
      if ((POPCOUNT(*pbVar33) & 1U) != 0) goto code_r0x004022be;
      *pbVar16 = *pbVar16 + bVar10;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10 + 0x69);
      uVar52 = in_ES;
code_r0x00402342:
      in_ES = uVar52;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      bVar10 = (char)pcVar18 + *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      *pcVar18 = *pcVar18 + bVar10;
      *pcVar18 = *pcVar18 + bVar10;
      *(byte *)(puVar48 + 0x800000) = (byte)puVar48[0x800000] + (char)puVar14;
      cVar7 = (char)pbVar15;
      pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                 CONCAT11((char)((uint)pbVar15 >> 8) + pbVar15[-0x7a],cVar7));
      *pcVar18 = *pcVar18 + bVar10;
      bVar56 = 0xfd < bVar10;
      cVar6 = bVar10 + 2;
      pbVar16 = (byte *)CONCAT31(uVar29,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x004022e0;
      *pbVar16 = *pbVar16 + cVar6;
      cVar6 = bVar10 + 0x71;
      pbVar16 = (byte *)CONCAT31(uVar29,cVar6);
      bVar35 = *pbVar16;
      *pbVar16 = *pbVar16 + cVar6;
      in_stack_ffffffd4 = (byte *)(uint)in_ES;
      if (SCARRY1(bVar35,cVar6) == (char)*pbVar16 < '\0') {
        *(byte *)((int)puVar43 + (int)pbVar16) = *(byte *)((int)puVar43 + (int)pbVar16) + cVar7;
        goto code_r0x004022ef;
      }
      *pbVar16 = *pbVar16 + cVar6;
      pbVar16 = (byte *)CONCAT31(uVar29,bVar10 + 0x73);
      bVar56 = (POPCOUNT(bVar10 + 0x73) & 1U) == 0;
      puVar42 = puVar43;
code_r0x00402366:
      if (bVar56) {
code_r0x00402368:
        *pbVar16 = *pbVar16 + (char)pbVar16;
        cVar6 = (char)pbVar16 + 'o';
        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6);
        *pcVar18 = *pcVar18 + cVar6;
        puVar43 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(byte)puVar42 | *pbVar15);
        pcVar18 = pcVar18 + 0x37280512;
        bVar35 = (byte)pcVar18;
        *pcVar18 = *pcVar18 + bVar35;
        puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                   CONCAT11((byte)((uint)puVar14 >> 8) | bRam7d160243,(char)puVar14)
                                  );
        pbVar16 = (byte *)((int)puVar43 + (int)pcVar18);
        bVar10 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar35;
        pcRam00008e7d = pcVar18 + (int)(pcRam00008e7d + CARRY1(bVar10,bVar35));
        bVar56 = SCARRY1(bVar35,'\x02');
        bVar35 = bVar35 + 2;
        puVar28 = (ushort *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar35);
code_r0x0040238b:
        if (bVar56 == (char)bVar35 < '\0') {
          *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
          pcVar18 = (char *)CONCAT31((int3)((uint)puVar28 >> 8),(char)puVar28 + '\x12');
          uVar52 = in_ES;
          in_ES = uVar55;
code_r0x00402391:
          pcVar18 = pcVar18 + 0x42802;
          *pbVar15 = *pbVar15 + (char)((uint)puVar14 >> 8);
          uVar55 = in_ES;
code_r0x00402399:
          bVar10 = (byte)pbVar15 | (byte)((uint)puVar14 >> 8);
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          pcVar18 = (char *)CONCAT31(uVar29,1);
          *pcVar18 = *pcVar18 + '\x01';
          pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                     CONCAT11((char)((uint)pbVar15 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar15 >> 8),bVar10)
                                                       + -0x72),bVar10));
          *pcVar18 = *pcVar18 + '\x01';
          uVar17 = CONCAT31(uVar29,0x14);
          pcVar18 = (char *)(uVar17 + 0x19061215 + (uint)(0x1f9edfd < uVar17));
          uVar1 = (uint)(0xe4ffffec < uVar17 + 0xfe061202 ||
                        CARRY4(uVar17 + 0x19061215,(uint)(0x1f9edfd < uVar17)));
          uVar17 = *puVar48;
          uVar22 = *puVar48;
          *puVar48 = (uint)(pcVar18 + uVar22 + uVar1);
          if ((SCARRY4(uVar17,(int)pcVar18) != SCARRY4((int)(pcVar18 + uVar22),uVar1)) !=
              (int)*puVar48 < 0) {
            bVar35 = (byte)pcVar18;
            *pcVar18 = *pcVar18 + bVar35;
            iVar19 = CONCAT31((int3)((uint)pcVar18 >> 8),bVar35 + 2) + 0x847d +
                     (uint)(0xfd < bVar35);
            puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(byte)puVar43 | (byte)*puVar43);
            pcVar18 = (char *)(CONCAT31((int3)((uint)iVar19 >> 8),(char)iVar19 + '\x12') + 0x134f26)
            ;
            *pbVar15 = *pbVar15 + bVar10;
code_r0x004023cd:
            out(*puVar48,(short)puVar43);
            uVar17 = *puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + (byte)puVar14;
            pbVar16 = (byte *)(pcVar18 + (uint)CARRY1((byte)uVar17,(byte)puVar14) + *(int *)pbVar50)
            ;
            bVar59 = SCARRY1((char)puVar43,(byte)*puVar14);
            bVar10 = (char)puVar43 + (byte)*puVar14;
            puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar10);
            bVar57 = (char)bVar10 < '\0';
            puVar48 = puVar48 + 1;
code_r0x004023d6:
            bVar56 = (POPCOUNT(bVar10) & 1U) == 0;
            puVar42 = puVar43;
            if (bVar59 != bVar57) {
              *pbVar16 = *pbVar16 + (char)pbVar16;
code_r0x004023db:
              cVar7 = (char)pbVar16;
              uVar29 = (undefined3)((uint)pbVar16 >> 8);
              cVar6 = cVar7 + '\x02';
              pbVar16 = (byte *)CONCAT31(uVar29,cVar6);
              if ((POPCOUNT(cVar6) & 1U) != 0) {
                pbVar33 = (byte *)((int)puVar42 + (int)pbVar16);
                *pbVar33 = *pbVar33 + cVar6;
                bVar56 = (POPCOUNT(*pbVar33) & 1U) == 0;
                goto code_r0x00402366;
              }
              *pbVar16 = *pbVar16 + cVar6;
              cVar7 = cVar7 + '\x15';
              pbVar16 = (byte *)CONCAT31(uVar29,cVar7);
              *(byte *)puVar14 = (byte)*puVar14 | (byte)puVar42;
              *pbVar50 = *pbVar50 | (byte)puVar42;
              uVar52 = in_ES;
              if ((POPCOUNT(*pbVar50) & 1U) == 0) {
                *pbVar16 = *pbVar16 + cVar7;
                goto code_r0x00402425;
              }
              *pbVar16 = *pbVar16 + cVar7;
              cVar7 = cVar7 + (byte)*puVar42;
              pcVar18 = (char *)CONCAT31(uVar29,cVar7);
              if ((POPCOUNT(cVar7) & 1U) == 0) {
                *pcVar18 = *pcVar18 + cVar7;
                puVar28 = (ushort *)CONCAT31(uVar29,cVar7 + 'o');
                puVar43 = puVar42;
code_r0x004023f6:
                uVar17 = *puVar43;
                *(byte *)puVar43 = (byte)*puVar43 + (char)puVar14;
                cVar6 = (char)puVar28;
                if (SCARRY1((byte)uVar17,(char)puVar14) == (char)(byte)*puVar43 < '\0') {
                  in_ES = *puVar28;
                  pbVar16 = (byte *)((int)puVar43 + (int)puVar28);
                  bVar56 = SCARRY1(*pbVar16,cVar6);
                  *pbVar16 = *pbVar16 + cVar6;
                  bVar35 = *pbVar16;
                  goto code_r0x0040238b;
                }
                *(char *)puVar28 = (char)*puVar28 + cVar6;
                cVar6 = cVar6 + '\x02';
                pcVar18 = (char *)CONCAT31((int3)((uint)puVar28 >> 8),cVar6);
                puVar42 = puVar48;
                if ((POPCOUNT(cVar6) & 1U) == 0) {
code_r0x00402402:
                  *pcVar18 = *pcVar18 + (char)pcVar18;
                  uVar29 = (undefined3)((uint)pcVar18 >> 8);
                  piVar27 = (int *)CONCAT31(uVar29,(char)pcVar18 + 'r');
                  *piVar27 = *piVar27 + 0x7b027000;
                  cVar6 = (char)*piVar27;
                  pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                  pbVar16 = (byte *)((int)puVar43 + (int)pcVar18);
                  *pbVar16 = *pbVar16 + cVar6;
                  puVar48 = puVar42;
                  if ((POPCOUNT(*pbVar16) & 1U) == 0) {
                    *pcVar18 = *pcVar18 + cVar6;
                    bVar35 = cVar6 + '{' + *(char *)CONCAT31(uVar29,cVar6 + '{');
                    piVar27 = (int *)CONCAT31(uVar29,bVar35);
                    pbVar16 = (byte *)((int)piVar27 + (int)unaff_EBP);
                    bVar10 = *pbVar16;
                    *pbVar16 = *pbVar16 + bVar35;
                    *piVar27 = (*piVar27 - (int)piVar27) - (uint)CARRY1(bVar10,bVar35);
                    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar14;
                    puVar48 = puVar42 + 1;
                    out(*puVar42,(short)puVar43);
                    cVar6 = bVar35 - (char)*piVar27;
                    pbVar16 = (byte *)CONCAT31(uVar29,cVar6);
                    *(byte *)puVar48 = (byte)*puVar48 + cVar6;
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
                    bVar10 = *pbVar16;
                    *pbVar16 = *pbVar16 + (char)pbVar16;
                    puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                               CONCAT11((byte)((uint)puVar14 >> 8) | bVar10 |
                                                        bRam7d170243,(char)puVar14));
code_r0x00402442:
                    pbVar33 = (byte *)((int)puVar43 + (int)pbVar16);
                    bVar35 = *pbVar33;
                    bVar10 = (byte)pbVar16;
                    *pbVar33 = *pbVar33 + bVar10;
                    uVar17 = *puVar43;
                    uVar22 = *puVar43;
                    *puVar43 = (uint)((byte *)(uVar22 + (int)puVar14) + CARRY1(bVar35,bVar10));
                    puVar42 = puVar43;
                    if ((SCARRY4(uVar17,(int)puVar14) !=
                        SCARRY4((int)(uVar22 + (int)puVar14),(uint)CARRY1(bVar35,bVar10))) !=
                        (int)*puVar43 < 0) {
                      *pbVar16 = *pbVar16 + bVar10;
                      bVar59 = SCARRY1(bVar10,'\x02');
                      bVar10 = bVar10 + 2;
                      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10);
code_r0x0040244f:
                      bVar57 = (char)bVar10 < '\0';
                      if (bVar59 == bVar57) {
code_r0x00402451:
                        *pbVar16 = *pbVar16 + (char)pbVar16;
                        bVar10 = (char)pbVar16 + 0x12U | (byte)*puVar43;
                        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10);
                        cRam162b0000 = cRam162b0000 - bVar10;
code_r0x0040245d:
                        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),
                                                   (byte)pbVar15 | (byte)((uint)puVar14 >> 8));
                        cVar6 = in((short)puVar43);
                        puVar28 = (ushort *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6);
                        *(char *)puVar28 = (char)*puVar28 + cVar6;
                        *(byte *)puVar43 = (byte)*puVar43 + cVar6;
                        if ((POPCOUNT((byte)*puVar43) & 1U) == 0) {
code_r0x00402466:
                          *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
                          uVar29 = (undefined3)((uint)puVar28 >> 8);
                          bVar10 = (char)puVar28 + 0x13U | (byte)*puVar43;
                          pcVar18 = (char *)CONCAT31(uVar29,bVar10);
                          cVar6 = (byte)puVar14 + *pbVar15;
                          puVar42 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),cVar6);
                          cRam1b000019 = cRam1b000019 + '\x01';
                          uVar17 = (uint)CARRY1((byte)puVar14,*pbVar15);
                          iVar19 = *(int *)pbVar15;
                          iVar13 = *(int *)pbVar15;
                          *(byte **)pbVar15 = (byte *)(iVar13 + (int)puVar42) + uVar17;
                          if ((SCARRY4(iVar19,(int)puVar42) != SCARRY4(iVar13 + (int)puVar42,uVar17)
                              ) != *(int *)pbVar15 < 0) {
                            *pcVar18 = *pcVar18 + bVar10;
                            iVar19 = CONCAT31(uVar29,bVar10 + 2) + 0x847d + (uint)(0xfd < bVar10);
                            uVar29 = (undefined3)((uint)iVar19 >> 8);
                            bVar10 = (char)iVar19 + 0x12;
                            puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                                       CONCAT11((byte)((uint)puVar14 >> 8) |
                                                                *(byte *)CONCAT31(uVar29,bVar10),
                                                                cVar6));
                            bVar8 = 9 < (bVar10 & 0xf) | bVar8;
                            uVar17 = CONCAT31(uVar29,bVar10 + bVar8 * -6) & 0xffffff0f;
                            pcVar18 = (char *)CONCAT22((short)(uVar17 >> 0x10),
                                                       CONCAT11((char)((uint)iVar19 >> 8) - bVar8,
                                                                (char)uVar17));
code_r0x00402486:
                            *pcVar18 = *pcVar18 + (char)pcVar18;
                            puVar45 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                                       (byte)puVar43 | (byte)*puVar43);
                            uVar38 = (undefined2)((uint)pbVar15 >> 0x10);
                            bVar10 = (byte)((uint)pbVar15 >> 8) | (byte)((uint)puVar43 >> 8);
                            pbVar16 = (byte *)(pcVar18 + 0x1b000019);
                            puVar42 = (uint *)((int)puVar45 + (int)pbVar16);
                            bVar56 = CARRY4((uint)puVar14,*puVar42);
                            pbVar33 = (byte *)((int)puVar14 + *puVar42);
                            puVar14 = (uint *)(pbVar33 + ((char *)0xe4ffffe6 < pcVar18));
                            piVar27 = (int *)((int)pbVar50 * 2 + 0x400008b);
                            *piVar27 = (int)((int)puVar14 +
                                            (uint)(bVar56 ||
                                                  CARRY4((uint)pbVar33,
                                                         (uint)((char *)0xe4ffffe6 < pcVar18))) +
                                            *piVar27);
                            pbVar15 = (byte *)CONCAT22(uVar38,CONCAT11(bVar10 + *(char *)(CONCAT22(
                                                  uVar38,CONCAT11(bVar10,(char)pbVar15)) + -0x79),
                                                  (char)pbVar15));
                            puVar43 = puVar45;
code_r0x0040249e:
                            bVar10 = (byte)pbVar16;
                            *pbVar16 = *pbVar16 + bVar10;
                            uVar29 = (undefined3)((uint)pbVar16 >> 8);
                            cVar6 = bVar10 + 2;
                            pbVar16 = (byte *)CONCAT31(uVar29,cVar6);
                            puVar42 = puVar43;
                            if (0xfd < bVar10) {
                              bVar35 = *pbVar16;
                              *pbVar16 = *pbVar16 + cVar6;
                              if (SCARRY1(bVar35,cVar6) == (char)*pbVar16 < '\0')
                              goto code_r0x00402435;
                              *pbVar16 = *pbVar16 + cVar6;
                              cVar6 = bVar10 + 4;
                              pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                              if ((POPCOUNT(cVar6) & 1U) != 0) {
                                *(byte *)puVar43 = (byte)*puVar43 + (char)puVar14;
                                pbVar16 = (byte *)(pcVar18 + -0x7d170243);
                                goto code_r0x00402442;
                              }
                              *pcVar18 = *pcVar18 + cVar6;
                              cVar6 = bVar10 + 6;
                              pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                              if ((POPCOUNT(cVar6) & 1U) == 0) {
                                while( true ) {
                                  cVar6 = (char)pcVar18;
                                  *pcVar18 = *pcVar18 + cVar6;
                                  uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                  pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '}');
                                  puVar48 = (uint *)((int)puVar48 + -1);
                                  *pcVar18 = *pcVar18 + cVar6 + '}';
                                  cVar7 = cVar6 + '\x7f';
                                  pbVar16 = (byte *)CONCAT31(uVar29,cVar7);
                                  if ((POPCOUNT(cVar7) & 1U) != 0) break;
                                  *pbVar16 = *pbVar16 + cVar7;
                                  cVar7 = cVar6 + -0x7f;
                                  pbVar16 = (byte *)CONCAT31(uVar29,cVar7);
                                  if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00402451;
                                  *pbVar16 = *pbVar16 + cVar7;
                                  pcVar18 = (char *)CONCAT31(uVar29,cVar6 + -2);
                                  pbVar50 = pbVar50 + -1;
                                  while( true ) {
                                    cVar6 = (char)pcVar18;
                                    *pcVar18 = *pcVar18 + cVar6;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    cVar7 = cVar6 + '\x02';
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar7);
                                    if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040245d;
                                    *pcVar18 = *pcVar18 + cVar7;
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar6 + 'q') + 1);
                                    *pcVar18 = *pcVar18 + (byte)pcVar18;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    bVar10 = (byte)pcVar18 | (byte)*puVar43;
                                    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
                                    if ((POPCOUNT(bVar10) & 1U) != 0) {
                                      puVar14 = (uint *)((int)puVar14 + *puVar43);
                                      puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                                                 (char)puVar43 + (byte)*puVar43);
                                      pbVar50 = (byte *)((uint)pbVar50 | (uint)puVar48);
                                      puVar28 = (ushort *)(pcVar18 + 0x1b000019);
                                      goto code_r0x00402466;
                                    }
                                    *pcVar18 = *pcVar18 + bVar10;
                                    pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x6f);
                                    puVar14 = (uint *)((int)puVar14 + 1);
                                    *pcVar18 = *pcVar18 + bVar10 + 0x6f;
                                    uVar38 = (undefined2)((uint)pbVar15 >> 0x10);
                                    bVar10 = (byte)pbVar15;
                                    bVar35 = (byte)((uint)pbVar15 >> 8) | (byte)*puVar43;
                                    uVar55 = (ushort)uStack_1c;
                                    uStack_1c = CONCAT22(uStack_1c._2_2_,in_ES);
                                    cVar7 = (char)(pcVar18 + -0x21000001);
                                    uVar29 = (undefined3)((uint)(pcVar18 + -0x21000001) >> 8);
                                    cVar6 = cVar7 + -0x13;
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                                    cVar47 = bVar35 + *(char *)(CONCAT22(uVar38,CONCAT11(bVar35,
                                                  bVar10)) + -0x73);
                                    pbVar15 = (byte *)CONCAT22(uVar38,CONCAT11(cVar47,bVar10));
                                    *pcVar18 = *pcVar18 + cVar6;
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar7 + '\x19') | *puVar43);
                                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0)
                                    goto code_r0x00402486;
                                    cVar6 = (char)pcVar18;
                                    *pcVar18 = *pcVar18 + cVar6;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    pcVar12 = (char *)CONCAT31(uVar29,cVar6 + 'o');
                                    puVar42 = (uint *)((int)puVar43 + 1);
                                    *pcVar12 = *pcVar12 + cVar6 + 'o';
                                    bVar10 = bVar10 | (byte)((uint)pcVar18 >> 8);
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\\');
                                    cVar47 = cVar47 + *(char *)(CONCAT31((int3)((uint)pbVar15 >> 8),
                                                                         bVar10) + -0x78);
                                    pbVar15 = (byte *)CONCAT22(uVar38,CONCAT11(cVar47,bVar10));
                                    *pcVar18 = *pcVar18 + cVar6 + '\\';
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar6 + -0x78) | *puVar42);
                                    cVar6 = (char)pcVar18;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0) {
                                      pbVar16 = (byte *)CONCAT31(uVar29,cVar6 + '\x02');
                                      puVar43 = puVar42;
                                      if ((POPCOUNT(cVar6 + '\x02') & 1U) == 0)
                                      goto code_r0x0040249e;
                                      goto code_r0x00402425;
                                    }
                                    *pcVar18 = *pcVar18 + cVar6;
                                    cVar7 = cVar6 + 'o';
                                    pcVar12 = (char *)CONCAT31(uVar29,cVar7);
                                    puVar43 = (uint *)((int)puVar43 + 2);
                                    *pcVar12 = *pcVar12 + cVar7;
                                    bVar10 = bVar10 | (byte)((uint)pcVar18 >> 8);
                                    pbVar15 = (byte *)CONCAT22(uVar38,CONCAT11(cVar47 + *(char *)(
                                                  CONCAT31((int3)((uint)pbVar15 >> 8),bVar10) +
                                                  -0x79),bVar10));
                                    *pcVar12 = *pcVar12 + cVar7;
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar6 + 'z') | 2);
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    cVar6 = (char)pcVar18;
                                    *pcVar18 = *pcVar18 + cVar6;
                                    cVar7 = cVar6 + '\x02';
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar7);
                                    if (SCARRY1(cVar6,'\x02') != cVar7 < '\0') break;
                                    *pcVar18 = *pcVar18 + cVar7;
                                    cVar7 = cVar6 + '\n';
                                    *pbVar15 = *pbVar15 - cVar7;
                                    *(byte *)puVar43 = *(byte *)puVar43 + (char)puVar14;
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    *(char *)CONCAT31(uVar29,cVar7) =
                                         *(char *)CONCAT31(uVar29,cVar7) + cVar7;
                                    cVar47 = cVar6 + '\f';
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar47);
                                    if (SCARRY1(cVar7,'\x02') == cVar47 < '\0') {
                                      *pcVar18 = *pcVar18 + cVar47;
                                      pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\x13');
                                      uVar55 = in_ES;
                                      goto code_r0x0040254a;
                                    }
                                  }
                                }
                                pbVar33 = (byte *)((int)puVar43 + (int)pbVar16);
                                bVar59 = SCARRY1(*pbVar33,cVar7);
                                *pbVar33 = *pbVar33 + cVar7;
                                bVar10 = *pbVar33;
                                goto code_r0x0040244f;
                              }
                              cVar7 = (char)puVar43;
                              cVar47 = cVar7 + *pbVar50;
                              puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),cVar47);
                              if (SCARRY1(cVar7,*pbVar50) != cVar47 < '\0') {
                                *pcVar18 = *pcVar18 + cVar6;
                                pbVar16 = (byte *)CONCAT31(uVar29,bVar10 + 8);
                                goto code_r0x00402442;
                              }
                              cRam1b000013 = cRam1b000013 + '\x01';
                              goto code_r0x004023cd;
                            }
                            goto code_r0x00402425;
                          }
                          pcVar12 = pcVar18 + 2;
                          *pcVar12 = *pcVar12 + (char)((uint)puVar43 >> 8);
                          puVar14 = puVar42;
                          if ((POPCOUNT(*pcVar12) & 1U) == 0) {
                            *pcVar18 = *pcVar18 + bVar10;
                            pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 2);
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
                *(char *)((int)puVar43 * 2) = *(char *)((int)puVar43 * 2) + cVar6;
                in_ES = uVar55;
                goto code_r0x00402391;
              }
              *pcVar18 = *pcVar18 + cVar7;
              pbVar16 = (byte *)CONCAT31(uVar29,cVar7 + '\x02');
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
      bVar56 = CARRY1(*pbVar16,(byte)pbVar16);
      *pbVar16 = *pbVar16 + (byte)pbVar16;
code_r0x004022f3:
      *(byte **)pbVar50 = (byte *)((int)puVar42 + (uint)bVar56 + *(int *)pbVar50);
    }
  } while( true );
code_r0x0040254a:
  cVar6 = (char)pcVar18;
  *(char *)((int)pcVar18 * 2) = *(char *)((int)pcVar18 * 2) - cVar6;
  *pcVar18 = *pcVar18 + cVar6;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6 + *pcVar18);
  *pcVar12 = *pcVar12 + cVar6 + *pcVar18;
  uStack_20 = 0x4025;
  uVar60 = func_0x0f40255d();
  uVar52 = uStack_20;
code_r0x0040255d:
  uStack_20 = uVar52;
  pcVar18 = (char *)((ulonglong)uVar60 >> 0x20);
  piVar27 = (int *)uVar60;
  *piVar27 = (int)((int)piVar27 + *piVar27);
  uVar38 = (undefined2)((uint)pbVar15 >> 0x10);
  uVar32 = SUB41(pbVar15,0);
  cVar47 = (char)((uint)pbVar15 >> 8) + (char)((ulonglong)uVar60 >> 0x28);
  pcVar12 = (char *)CONCAT22(uVar38,CONCAT11(cVar47,uVar32));
  *piVar27 = (int)((int)piVar27 + *piVar27);
  *pbVar50 = *pbVar50 + (char)((ulonglong)uVar60 >> 0x20);
  cVar6 = (char)uVar60;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  *pcVar18 = *pcVar18 + cVar6;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  *pcVar12 = *pcVar12 + cVar6;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  pcVar2 = (code *)swi(1);
  uVar60 = (*pcVar2)();
  pbVar33 = (byte *)((ulonglong)uVar60 >> 0x20);
  pbVar16 = (byte *)uVar60;
  bVar10 = *pbVar16;
  bVar35 = (byte)uVar60;
  *pbVar16 = *pbVar16 + bVar35;
  *pbVar33 = *pbVar33 + bVar35 + CARRY1(bVar10,bVar35);
  *pbVar16 = *pbVar16 + bVar35;
  *pbVar16 = *pbVar16 + bVar35;
  *pbVar16 = *pbVar16 + bVar35;
  *pbVar16 = *pbVar16 + bVar35;
  *pbVar16 = *pbVar16 + bVar35;
  *pbVar16 = *pbVar16 + bVar35;
  *pbVar16 = *pbVar16 + bVar35;
  *pbVar16 = *pbVar16 + bVar35;
  cVar6 = (char)((ulonglong)uVar60 >> 0x28);
  *pbVar16 = *pbVar16 + cVar6;
  bVar10 = *pbVar16;
  uVar29 = (undefined3)((ulonglong)uVar60 >> 8);
  pcVar18 = (char *)CONCAT31(uVar29,bVar35 + bVar10);
  *pcVar18 = *pcVar18 + cVar6;
  cVar6 = bVar35 + bVar10 + *pcVar18;
  pcVar18 = (char *)CONCAT31(uVar29,cVar6);
  cVar7 = (char)((ulonglong)uVar60 >> 0x20);
  *pbVar50 = *pbVar50 + cVar7;
  *pcVar18 = *pcVar18 + cVar6;
  *pcVar18 = *pcVar18 + cVar7;
  *pcVar18 = *pcVar18 + cVar6;
  *puVar48 = (uint)(*puVar48 + (int)puVar48);
  cVar47 = cVar47 + unaff_EBP[(int)pcVar18 * 4];
  pbVar15 = (byte *)CONCAT22(uVar38,CONCAT11(cVar47,uVar32));
  pbVar15[(int)pcVar18] = pbVar15[(int)pcVar18] + cVar6;
  *(byte *)puVar48 = (byte)*puVar48 - cVar6;
  *pbVar33 = *pbVar33 + (char)extraout_ECX;
  bVar35 = cVar6 - *pcVar18;
  pcVar18 = (char *)CONCAT31(uVar29,bVar35);
  *pbVar15 = *pbVar15 + cVar7;
  *pbVar33 = *pbVar33 ^ bVar35;
  *pbVar33 = *pbVar33 + cVar47;
  *pcVar18 = *pcVar18 + bVar35;
  cRam12110000 = cRam12110000 + bVar35;
  bVar10 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar35;
  pbVar16 = extraout_ECX;
  if (SCARRY1(bVar10,bVar35) != (char)*pbVar33 < '\0') {
code_r0x004025bd:
    *pcVar18 = *pcVar18 + (char)pcVar18;
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x12');
    *pcVar18 = *pcVar18 + (char)((uint)pbVar16 >> 8);
    pcVar18 = pcVar18 + -1;
    cVar6 = (char)pcVar18;
    *pcVar18 = *pcVar18 + cVar6;
    bVar10 = (byte)((uint)pbVar15 >> 8) | unaff_EBP[-0x7b];
    pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),CONCAT11(bVar10,(char)pbVar15));
    *pcVar18 = *pcVar18 + cVar6;
    cRam0000847d = cRam0000847d + (char)pbVar33;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6 + '$');
    pbVar15[-0x7b] = pbVar15[-0x7b] + bVar10;
    pbVar20 = pbVar16;
code_r0x004025d8:
    bVar10 = (byte)pbVar21;
    *pbVar21 = *pbVar21 + bVar10;
    bVar56 = 0xf4 < bVar10;
    pcVar18 = (char *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar10 + 0xb);
    pbVar21 = unaff_EBP;
    do {
      bVar10 = (byte)pcVar18 + *pbVar20;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      cVar6 = bVar10 + bVar56;
      cVar6 = cVar6 + *(char *)CONCAT31(uVar29,cVar6) +
              (CARRY1((byte)pcVar18,*pbVar20) || CARRY1(bVar10,bVar56));
      pcVar18 = (char *)CONCAT31(uVar29,cVar6);
      *(byte *)puVar48 = (byte)*puVar48 - cVar6;
      *pcVar18 = *pcVar18 + cVar6;
      iVar19 = *(int *)pbVar33;
      pbVar21[(int)pcVar18 * 4] = pbVar21[(int)pcVar18 * 4] + (char)((uint)pbVar15 >> 8);
      pcVar18[(int)pbVar21] = pcVar18[(int)pbVar21] + cVar6;
      pbVar44 = pbVar33 + (-1 - iVar19);
      *pcVar18 = *pcVar18 + cVar6;
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar20 >> 8) | *pbVar44) + pbVar50[0x22],
                                          (char)pbVar20));
      *pcVar18 = *pcVar18 + cVar6;
      bVar40 = (char)pbVar44 - pbVar33[1 - iVar19];
      bVar9 = cVar6 - 0xf;
      pbVar20 = (byte *)CONCAT31(uVar29,bVar9);
      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar44 >> 0x10),
                                 CONCAT11((char)((uint)pbVar44 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar44 >> 8),bVar40) +
                                                   -0x3f),bVar40));
      bVar10 = *pbVar20;
      bVar35 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar9;
      uVar52 = uVar55;
      if (SCARRY1(bVar35,bVar9)) {
        pbVar20 = (byte *)CONCAT31(uVar29,bVar9 + pbVar20[(int)pbVar21] + CARRY1(bVar10,bVar9));
        goto code_r0x00402677;
      }
      pbVar15 = pbVar15 + -1;
      *pbVar20 = *pbVar20 + bVar9;
      uVar17 = *puVar48;
      *pbVar16 = *pbVar16 + 1;
      pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),(bVar40 | (byte)uVar17) - (byte)*puVar48
                                );
      puVar48 = (uint *)((int)puVar48 +
                        (-(uint)(bVar9 < *pbVar20) - *(int *)CONCAT31(uVar29,bVar9 - *pbVar20)));
      unaff_EBP = (byte *)CONCAT31(uVar29,bVar9 - *pbVar20);
      *(byte **)pbVar21 = pbVar21 + *(int *)pbVar21;
      bVar35 = (byte)pbVar21;
      *(byte *)puVar48 = (byte)*puVar48 + bVar35;
      bVar10 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar35;
      *(byte **)pbVar50 = pbVar33 + (uint)CARRY1(bVar10,bVar35) + *(int *)pbVar50;
      uVar29 = (undefined3)((uint)pbVar21 >> 8);
      bVar35 = bVar35 | *pbVar33;
      pcVar18 = (char *)CONCAT31(uVar29,bVar35);
      if ((POPCOUNT(bVar35) & 1U) != 0) {
        *pcVar18 = *pcVar18 + bVar35;
        uVar60 = CONCAT44(pbVar33,pcVar18 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar18 = *pcVar18 + bVar35;
      bVar10 = bVar35 + 0xd;
      pbVar20 = (byte *)CONCAT31(uVar29,bVar10);
      *puVar48 = *puVar48 | (uint)pbVar33;
      if (-1 < (int)*puVar48) {
code_r0x00402678:
        *pbVar20 = *pbVar20 + (char)pbVar20;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar16 >> 8) | bRam7d160243,(char)pbVar16)
                                  );
        pbVar21 = pbVar50;
code_r0x00402680:
        bVar10 = (byte)pbVar16;
        *pbVar16 = *pbVar16 + bVar10;
        uVar29 = (undefined3)((uint)pbVar16 >> 8);
        piVar27 = (int *)((int)pbVar21 * 2 + 0x400009a);
        *piVar27 = *piVar27 + CONCAT31(uVar29,bVar10 + 2) + (uint)(0xfd < bVar10);
        pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                   CONCAT11((char)((uint)pbVar15 >> 8) + *(char *)((int)pbVar33 * 5)
                                            ,(char)pbVar15));
        *(char *)((int)pbVar33 * 2) = *(char *)((int)pbVar33 * 2) + bVar10 + 2;
        pbVar50 = (byte *)CONCAT31(uVar29,bVar10 + 4);
        *pbVar21 = *pbVar21 - (bVar10 + 4);
code_r0x00402697:
        *pbVar50 = *pbVar50 + (char)pbVar50;
        pbVar33 = pbVar33 + -*puVar48;
        pbVar16 = pbVar50;
code_r0x0040269b:
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),
                                   (byte)pbVar15 | (byte)((uint)pbVar20 >> 8));
        uVar34 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar16 = uVar34;
        cVar6 = (char)pbVar16;
        *pbVar33 = *pbVar33 + cVar6;
        if ((POPCOUNT(*pbVar33) & 1U) == 0) {
          *pbVar16 = *pbVar16 + cVar6;
          pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6 + '\x13');
          pbVar16 = pbVar20;
          pbVar50 = pbVar21;
code_r0x004026a8:
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          bVar35 = (byte)pcVar18 + 2 + cRam001b15fe + (0xfd < (byte)pcVar18);
          bVar10 = *pbVar15;
          bVar9 = (byte)pbVar15;
          *pbVar15 = *pbVar15 + bVar9;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar29,bVar35) + (uint)CARRY1(bVar10,bVar9);
          iVar19 = CONCAT31(uVar29,bVar35 + 2) + 0x917d + (uint)(0xfd < bVar35);
          cVar6 = (char)iVar19;
          uVar29 = (undefined3)((uint)iVar19 >> 8);
          bVar10 = cVar6 + 0x3a;
          pbVar44 = (byte *)CONCAT31(uVar29,bVar10);
          *pbVar44 = *pbVar44 + bVar10;
          uVar46 = (undefined3)((uint)pbVar33 >> 8);
          bVar35 = (byte)pbVar33 | *pbVar33;
          uVar22 = CONCAT31(uVar29,cVar6 + '8');
          uVar17 = uVar22 + 0x1b00001b;
          pcVar18 = (char *)(uVar17 + (1 < bVar10) + *puVar48 +
                            (uint)(0xe4ffffe4 < uVar22 || CARRY4(uVar17,(uint)(1 < bVar10))));
          bVar10 = bVar35 + *pbVar16;
          pbVar33 = (byte *)CONCAT31(uVar46,bVar10);
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          cVar6 = (char)pcVar18;
          if (SCARRY1(bVar35,*pbVar16) != (char)bVar10 < '\0') {
            *pcVar18 = *pcVar18 + cVar6;
            pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\x02');
            uVar38 = (undefined2)((uint)pbVar15 >> 0x10);
            cVar47 = (char)((uint)pbVar15 >> 8) + pbVar15[-0x68];
            pbVar15 = (byte *)CONCAT22(uVar38,CONCAT11(cVar47,bVar9));
            *pcVar18 = *pcVar18 + cVar6 + '\x02';
            bVar35 = cVar6 + 0x2a;
            pbVar20 = (byte *)CONCAT31(uVar29,bVar35);
            *pbVar20 = *pbVar20 | bVar35;
            bVar10 = *pbVar15;
            cVar7 = (char)((uint)pbVar16 >> 8);
            *pbVar15 = *pbVar15 + cVar7;
            pbVar21 = pbVar50;
            if (SCARRY1(bVar10,cVar7) != (char)*pbVar15 < '\0') {
              *pbVar20 = *pbVar20 + bVar35;
              bVar10 = cVar6 + 0x2c;
              if ((POPCOUNT(bVar10) & 1U) == 0) {
                *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
                bVar35 = cVar6 + 0x59;
                pcVar18 = (char *)CONCAT31(uVar29,bVar35);
                *(char **)pbVar33 = pcVar18 + (uint)(0xd2 < bVar10) + *(int *)pbVar33;
                pbVar15 = (byte *)CONCAT22(uVar38,CONCAT11(cVar47 + pbVar15[-0x67],bVar9));
                *pcVar18 = *pcVar18 + bVar35;
                pbVar21 = (byte *)((CONCAT31(uVar29,cVar6 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar35));
                pbVar20 = pbVar16;
                uStack_24 = in_ES;
code_r0x00402700:
                *pbVar50 = *pbVar50 + (char)pbVar50;
                cVar6 = (char)pbVar50 + '\x02';
                pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar50 >> 8),cVar6);
                bVar56 = (POPCOUNT(cVar6) & 1U) == 0;
                pbVar50 = pbVar44;
code_r0x00402704:
                if (bVar56) {
                  *pbVar16 = *pbVar16 + (char)pbVar16;
                  cVar6 = (char)pbVar16 + '\x02';
                  pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6);
                  puVar14 = puVar48;
                  if ((POPCOUNT(cVar6) & 1U) == 0) {
code_r0x0040270c:
                    uVar54 = in_ES;
                    cVar6 = (char)pcVar18;
                    *pcVar18 = *pcVar18 + cVar6;
                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                    bVar10 = cVar6 + 0x6f;
                    piVar27 = (int *)CONCAT31(uVar29,bVar10);
                    iVar19 = *piVar27;
                    *(byte *)piVar27 = (char)*piVar27 + bVar10;
                    in_ES = uVar54;
                    pbVar16 = pbVar33;
                    if ((char)*piVar27 != '\0' &&
                        SCARRY1((char)iVar19,bVar10) == (char)*piVar27 < '\0') {
                      *(byte *)piVar27 = (char)*piVar27 + bVar10;
                      bVar35 = cVar6 + 0x9c;
                      piVar27 = (int *)CONCAT31(uVar29,bVar35);
                      puVar42 = puVar14 + (int)pbVar21 * 2;
                      uVar17 = *puVar42;
                      uVar22 = *puVar42;
                      *puVar42 = (uint)(pbVar33 + uVar22 + (0xd2 < bVar10));
                      *piVar27 = (*piVar27 - (int)piVar27) -
                                 (uint)(CARRY4(uVar17,(uint)pbVar33) ||
                                       CARRY4((uint)(pbVar33 + uVar22),(uint)(0xd2 < bVar10)));
                      uVar17 = *puVar14;
                      *(byte *)puVar14 = (byte)*puVar14 + bVar35;
                      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar50 >> 0x10),uVar54);
                      if (!CARRY1((byte)uVar17,bVar35)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    pbVar50 = pbVar16;
                    uVar52 = uStack_24;
                    *(byte *)piVar27 = (char)*piVar27 + (byte)piVar27;
                    uVar29 = (undefined3)((uint)piVar27 >> 8);
                    bVar10 = (byte)piVar27 | *(byte *)((int)piVar27 + 0x400000d);
                    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
                    if ((char)bVar10 < '\x01') {
                      bVar56 = pcVar18 < (char *)0x6fe1411;
                      pcVar18 = pcVar18 + -0x6fe1411;
                    }
                    else {
                      *pcVar18 = *pcVar18 + bVar10;
                      bVar9 = bVar10 + 0x28;
                      puVar42 = (uint *)CONCAT31(uVar29,bVar9);
                      *puVar42 = *puVar42 | (uint)puVar42;
                      bVar35 = *pbVar15;
                      cVar6 = (char)((uint)pbVar20 >> 8);
                      *pbVar15 = *pbVar15 + cVar6;
                      if (*pbVar15 == 0 || SCARRY1(bVar35,cVar6) != (char)*pbVar15 < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar42 = (char)*puVar42 + bVar9;
                      pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x55);
                      puVar42 = puVar14 + (int)pbVar21 * 2;
                      bVar56 = CARRY4(*puVar42,(uint)pbVar33) ||
                               CARRY4((uint)(pbVar33 + *puVar42),(uint)(0xd2 < bVar9));
                      *puVar42 = (uint)(pbVar33 + *puVar42 + (0xd2 < bVar9));
                      in_stack_ffffffd4 = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar29 = (undefined3)((uint)pcVar18 >> 8);
                      bVar10 = ((char)pcVar18 - *pcVar18) - bVar56;
                      puVar42 = (uint *)CONCAT31(uVar29,bVar10);
                      uVar17 = *puVar14;
                      *(byte *)puVar14 = (byte)*puVar14 + bVar10;
                      if (CARRY1((byte)uVar17,bVar10)) break;
                      pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),
                                                 (byte)pbVar15 | (byte)((uint)pbVar33 >> 8));
                      pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 2);
                      while( true ) {
                        uVar52 = (ushort)pbVar50;
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar6 = (char)pcVar18;
                        *pcVar18 = *pcVar18 + cVar6;
                        uVar29 = (undefined3)((uint)pcVar18 >> 8);
                        bVar10 = cVar6 + 2;
                        pcVar18 = (char *)CONCAT31(uVar29,bVar10);
                        if (SCARRY1(cVar6,'\x02') != (char)bVar10 < '\0') break;
                        *pcVar18 = *pcVar18 + bVar10;
                        cVar47 = (char)pbVar33;
                        *pbVar21 = *pbVar21 - cVar47;
                        *pbVar33 = *pbVar33 + (char)pbVar20;
                        bVar35 = (cVar6 + '\t') - *(char *)CONCAT31(uVar29,cVar6 + '\t');
                        pbVar16 = (byte *)CONCAT31(uVar29,bVar35);
                        bVar10 = *pbVar16;
                        *pbVar16 = *pbVar16 + bVar35;
                        pbVar44 = pbVar20 + 1;
                        cVar6 = bVar35 - CARRY1(bVar10,bVar35);
                        pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                        *pcVar18 = *pcVar18 + cVar6;
                        *pcVar18 = *pcVar18 + cVar6;
                        *pcVar18 = *pcVar18 + cVar6;
                        *pcVar18 = *pcVar18 + cVar6;
                        cVar7 = (char)((uint)pbVar44 >> 8);
                        pbVar20[2] = pbVar20[2] + cVar7;
                        *pcVar18 = *pcVar18 + cVar6;
                        pcVar18 = (char *)(*(int *)pbVar44 * 0x170000);
                        *pcVar18 = *pcVar18;
                        *pcVar18 = *pcVar18;
                        *pbVar44 = *pbVar44;
                        uVar38 = (undefined2)((uint)pbVar15 >> 0x10);
                        cVar6 = (char)pbVar15;
                        bVar9 = (char)((uint)pbVar15 >> 8) + *(char *)((int)pbVar33 * 5);
                        pbVar15 = (byte *)CONCAT22(uVar38,CONCAT11(bVar9,cVar6));
                        pbVar15[(int)pcVar18] = pbVar15[(int)pcVar18];
                        *pcVar18 = *pcVar18 - cVar6;
                        *pbVar33 = *pbVar33 + (char)pbVar44;
                        uVar29 = (undefined3)((uint)pcVar18 >> 8);
                        bVar35 = -*pcVar18;
                        pbVar16 = (byte *)CONCAT31(uVar29,bVar35);
                        *pbVar15 = *pbVar15 + cVar47;
                        *pbVar33 = *pbVar33 ^ bVar35;
                        *pbVar33 = *pbVar33 + bVar35;
                        *pbVar16 = *pbVar16 + bVar35;
                        bVar10 = *pbVar16;
                        *pbVar16 = *pbVar16 + bVar35;
                        *(byte **)pbVar33 = pbVar33 + (uint)CARRY1(bVar10,bVar35) + *(int *)pbVar33;
                        bVar10 = *pbVar33;
                        *pbVar33 = *pbVar33 + bVar35;
                        if (SCARRY1(bVar10,bVar35) == (char)*pbVar33 < '\0') {
                          pcVar18 = (char *)((uint)pbVar16 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar18 = *pcVar18 + (char)pcVar18;
                          uStack_20 = uVar55;
                          uStack_24 = (ushort)uStack_1c;
                        }
                        else {
                          *pbVar16 = *pbVar16 + bVar35;
                          cVar11 = bVar35 + 0x12;
                          pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                          bVar10 = *pbVar15;
                          *pbVar15 = *pbVar15 + cVar11;
                          uStack_24 = uVar52;
                          if (SCARRY1(bVar10,cVar11) != (char)*pbVar15 < '\0') {
                            *pcVar18 = *pcVar18 + cVar11;
                            cVar11 = bVar35 + 0x24;
                            pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                            *pcVar18 = *pcVar18 + cVar7;
                            pbVar50 = (byte *)CONCAT13(uStack_1d,(uint3)uVar55);
                            *pcVar18 = *pcVar18 + cVar11;
                            bVar9 = bVar9 | unaff_EBP[-0x6e];
                            pcVar12 = (char *)CONCAT22(uVar38,CONCAT11(bVar9,cVar6));
                            *pcVar18 = *pcVar18 + cVar11;
                            cRam0000917d = cRam0000917d + cVar47;
                            bVar40 = bVar35 + 0x48;
                            pcVar12[-0x6e] = pcVar12[-0x6e] + bVar9;
                            *(char *)CONCAT31(uVar29,bVar40) =
                                 *(char *)CONCAT31(uVar29,bVar40) + bVar40;
                            bVar10 = bVar35 + 0x53 + *pbVar50;
                            cVar6 = bVar10 + (0xf4 < bVar40);
                            cVar6 = cVar6 + *(char *)CONCAT31(uVar29,cVar6) +
                                    (CARRY1(bVar35 + 0x53,*pbVar50) || CARRY1(bVar10,0xf4 < bVar40))
                            ;
                            pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                            *pcVar12 = *pcVar12 - (char)uVar55;
                            *pcVar18 = *pcVar18 + cVar6;
                            pbVar33 = pbVar33 + -*(int *)pbVar33;
                            *(char *)((int)pbVar33 * 5) = *(char *)((int)pbVar33 * 5) + bVar9;
                            pcVar18[(int)unaff_EBP] = pcVar18[(int)unaff_EBP] + cVar6;
                            *pcVar18 = *pcVar18 + cVar6;
                            bVar35 = (byte)(uVar55 >> 8) | *pbVar33;
                            uVar32 = (undefined1)uStack_1c;
                            cVar7 = (char)((uint)uStack_1c >> 8) + *(char *)(uStack_1c + 0xf);
                            *pcVar18 = *pcVar18 + cVar6;
                            bVar10 = cVar6 + 0x2aU & *pbVar33;
                            iVar19 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar29,bVar10) =
                                 *(char *)CONCAT31(uVar29,bVar10) + bVar10;
                            pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
                            cVar7 = cVar7 + *(char *)(CONCAT22(uStack_1c._2_2_,
                                                               CONCAT11(cVar7,uVar32)) + 0x10);
                            *pcVar18 = *pcVar18 + bVar10 + 0x2a;
                            bVar10 = bVar10 + 0x54 & *pbVar33;
                            iVar13 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar29,bVar10) =
                                 *(char *)CONCAT31(uVar29,bVar10) + bVar10;
                            pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
                            puVar43 = (uint *)CONCAT22(uStack_1c._2_2_,
                                                       CONCAT11(cVar7 + *(char *)(CONCAT22(uStack_1c
                                                  ._2_2_,CONCAT11(cVar7,uVar32)) + 0x11),uVar32));
                            *pcVar18 = *pcVar18 + bVar10 + 0x2a;
                            bVar10 = bVar10 + 0x54 & *pbVar33;
                            puVar48 = (uint *)(pbVar21 +
                                              *(int *)(unaff_EBP + 0x11) + iVar13 + iVar19);
                            *(char *)CONCAT31(uVar29,bVar10) =
                                 *(char *)CONCAT31(uVar29,bVar10) + bVar10;
                            pbVar16 = (byte *)CONCAT31(uVar29,bVar10 + 0x2a);
                            puVar42 = (uint *)CONCAT22((short)((uint)pbVar50 >> 0x10),
                                                       CONCAT11(bVar35 + *pbVar16,(char)uVar55));
                            uVar60 = CONCAT44(pbVar33,pbVar16 + (uint)CARRY1(bVar35,*pbVar16) +
                                                                *(int *)pbVar16);
                            uVar55 = uVar52;
                            goto code_r0x00402866;
                          }
                        }
                        cVar6 = (char)pcVar18;
                        uVar29 = (undefined3)((uint)pcVar18 >> 8);
                        cVar7 = cVar6 + '\x02';
                        piVar27 = (int *)CONCAT31(uVar29,cVar7);
                        pbVar20 = pbVar44;
                        in_ES = uVar52;
                        pbVar16 = pbVar33;
                        if (SCARRY1(cVar6,'\x02') != cVar7 < '\0') goto code_r0x00402724;
                        *(char *)piVar27 = (char)*piVar27 + cVar7;
                        pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\n');
                        *(byte *)puVar14 = (byte)*puVar14 - cVar47;
                        *pbVar33 = *pbVar33 + (char)pbVar44;
                      }
                      pbVar16 = unaff_EBP + 0x6fe1411;
                      bVar56 = CARRY1(*pbVar16,bVar10);
                      *pbVar16 = *pbVar16 + bVar10;
                    }
                    goto code_r0x00402746;
                  }
                  pbVar15[(int)pbVar33] = pbVar15[(int)pbVar33] + cVar6;
                  pbVar16 = pbVar20;
                  pbVar50 = pbVar21;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar54 = 0x927c;
              in_stack_ffffffcc = 0x40268f;
              uVar60 = func_0x02040000(in_CS,in_stack_ffffffd4,pbVar44);
              pbVar33 = (byte *)((ulonglong)uVar60 >> 0x20);
              *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
              pbVar20 = (byte *)CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '\x12');
              pbVar16 = extraout_ECX_00;
              in_CS = uVar54;
            }
            goto code_r0x00402680;
          }
          pbVar21 = unaff_EBP + -1;
          *pcVar18 = *pcVar18 + cVar6;
          pbVar33 = (byte *)CONCAT31(uVar46,bVar10 | *pbVar15);
          pbVar20 = (byte *)CONCAT31(uVar29,cVar6 + ':');
code_r0x00402677:
          puVar48 = (uint *)((int)puVar48 + -1);
          unaff_EBP = pbVar21;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar20 = *pbVar20 + bVar10;
      pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar15 >> 8) | unaff_EBP[-0x6b],
                                          (char)pbVar15));
      *pbVar20 = *pbVar20 + bVar10;
      cVar6 = bVar35 + 0xf;
      pcVar18 = (char *)CONCAT31(uVar29,cVar6);
      uStack_1c = CONCAT22(uStack_1c._2_2_,uStack_20);
      if (SCARRY1(bVar10,'\x02') == cVar6 < '\0') {
        pcVar18 = pcVar18 + (0xfd < bVar10) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar18 = *pcVar18 + cVar6;
      cVar7 = bVar35 + 0x11;
      pbVar21 = (byte *)CONCAT31(uVar29,cVar7);
      uVar60 = CONCAT44(pbVar33,pbVar21);
      uStack_1c = CONCAT22(uStack_1c._2_2_,uStack_20);
      pbVar20 = pbVar16;
      pbVar16 = pbVar50;
      if (SCARRY1(cVar6,'\x02') == cVar7 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar21 = *pbVar21 + (char)pbVar21;
      bVar10 = (char)pbVar21 + 2;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar10);
      if ((POPCOUNT(bVar10) & 1U) == 0) {
        *pcVar18 = *pcVar18 + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar50 = pbVar15 + (int)pbVar20;
      bVar56 = CARRY1(*pbVar50,bVar10);
      *pbVar50 = *pbVar50 + bVar10;
      pbVar21 = unaff_EBP;
      pbVar50 = pbVar16;
      uVar55 = uVar52;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar42 = (char)*puVar42 + (byte)puVar42;
  uVar29 = (undefined3)((uint)puVar42 >> 8);
  bVar10 = (byte)puVar42 | *(byte *)((int)puVar42 + 0x400000e);
  pcVar18 = (char *)CONCAT31(uVar29,bVar10);
  puVar48 = puVar14;
  if ('\0' < (char)bVar10) {
    *pcVar18 = *pcVar18 + bVar10;
    bVar10 = bVar10 + 0x28 | *(byte *)CONCAT31(uVar29,bVar10 + 0x28);
    *pbVar15 = *pbVar15 + (char)((uint)pbVar20 >> 8);
    puVar48 = puVar14 + 1;
    out(*puVar14,(short)pbVar33);
    *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
    pcVar18 = (char *)(uint)(bVar10 | *pbVar33);
    in_stack_ffffffd4 = unaff_EBP;
  }
  bVar10 = (byte)pcVar18 & 0x7b;
  bVar56 = (char)(bVar10 + 0x17) < '\0';
  uStack_24 = uVar54;
  if (SCARRY1(bVar10,'\x17') == bVar56) {
    pbVar44 = pbVar50;
    if (SCARRY1(bVar10,'\x17') != bVar56) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar7 = (char)pbVar50;
  *pbVar50 = *pbVar50 + cVar7;
  iVar31 = (int3)((uint)pbVar50 >> 8);
  cVar6 = cVar7 + '\x02';
  pbVar16 = (byte *)CONCAT31(iVar31,cVar6);
  bVar56 = (POPCOUNT(cVar6) & 1U) == 0;
  if (!bVar56) goto code_r0x00402704;
  *pbVar16 = *pbVar16 + cVar6;
  cVar7 = cVar7 + '\x04';
  pcVar18 = (char *)CONCAT31(iVar31,cVar7);
  if ((POPCOUNT(cVar7) & 1U) == 0) {
    *pcVar18 = *pcVar18 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar33 = (byte *)((int)iVar31 >> 0x17);
  puVar14 = puVar48;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar45 = (uint *)((ulonglong)uVar60 >> 0x20);
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
    cVar6 = (char)puVar43 - (byte)*puVar14;
    iVar19 = CONCAT22((short)((uint)puVar43 >> 0x10),
                      CONCAT11((char)((uint)puVar43 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),cVar6) + 0x12),cVar6));
    *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
    uVar29 = (undefined3)((ulonglong)uVar60 >> 8);
    bVar10 = (char)uVar60 + 0x2aU & (byte)*puVar45;
    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x12));
    *pcVar18 = *pcVar18 + bVar10;
    puVar24 = (uint *)CONCAT31(uVar29,bVar10 + 0x2a);
    pbVar50 = (byte *)(uint)uVar55;
get_Value:
    cVar6 = *(char *)(iVar19 + 0x13);
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
    uVar29 = (undefined3)((uint)puVar24 >> 8);
    bVar10 = (char)puVar24 + 0x2aU & (byte)*puVar45;
    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x13));
    *pcVar18 = *pcVar18 + bVar10;
    pbVar16 = (byte *)CONCAT31(uVar29,bVar10 + 0x2a);
    uVar17 = (uint)uVar55;
    bVar10 = (byte)((uint)puVar42 >> 8);
    bVar35 = bVar10 + *pbVar16;
    pbVar16 = pbVar16 + (uint)CARRY1(bVar10,*pbVar16) + *(int *)pbVar16;
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
    puVar43 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar19 >> 0x10),
                                               CONCAT11((char)((uint)iVar19 >> 8) + cVar6,
                                                        (char)iVar19)) >> 8),
                               (char)iVar19 - (byte)*puVar14);
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11(bVar35 + *pbVar16,(char)puVar42));
    pbVar16 = pbVar16 + (uint)CARRY1(bVar35,*pbVar16) + *(int *)pbVar16;
code_r0x00402898:
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
    bVar10 = (byte)puVar45;
    uVar38 = CONCAT11((char)((uint)puVar45 >> 8) - (byte)*puVar14,bVar10);
    pbVar15 = (byte *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar38);
    pcVar18 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((char)((uint)puVar43 >> 8) + (byte)puVar43[-0x19],
                                        (char)puVar43));
    *pbVar16 = *pbVar16 + (char)pbVar16;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + '\x03');
    puVar43 = puVar14;
    do {
      puVar14 = puVar43 + 1;
      out(*puVar43,uVar38);
      pcVar18 = pcVar18 + -1;
      bVar35 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar35;
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((byte)((uint)puVar42 >> 8) | *pbVar15,(char)puVar42));
      *pbVar16 = *pbVar16 + bVar35;
      *pcVar18 = *pcVar18 + bVar10;
      *(byte *)((int)pbVar16 * 2) = *(byte *)((int)pbVar16 * 2) ^ bVar35;
      *pbVar16 = *pbVar16 + bVar35;
      *pbVar16 = *pbVar16 | bVar35;
      bVar56 = CARRY1((byte)*puVar42,bVar10);
      *(byte *)puVar42 = (byte)*puVar42 + bVar10;
      cVar6 = bVar35 + 10 + bVar56;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6);
      puVar43 = puVar14;
    } while (bVar35 < 0xf6 && !CARRY1(bVar35 + 10,bVar56));
    *pbVar16 = *pbVar16 + cVar6;
    in_stack_ffffffcc = CONCAT22((short)((uint)in_stack_ffffffcc >> 0x10),uVar52);
    pcVar12 = (char *)((uint)pbVar16 | *puVar48);
    puVar43 = (uint *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                               CONCAT11((char)((uint)pcVar18 >> 8) + unaff_EBP[-100],(char)pcVar18))
    ;
    *pcVar12 = *pcVar12 + (char)pcVar12;
    bVar10 = (char)pcVar12 + 7;
    uVar60 = CONCAT44(pbVar15,CONCAT31((int3)((uint)pcVar12 >> 8),bVar10));
code_r0x004028c8:
    puVar45 = (uint *)((ulonglong)uVar60 >> 0x20);
  } while ((POPCOUNT(bVar10) & 1U) != 0);
  *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
  puVar24 = (uint *)CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '-');
  puVar14 = (uint *)((uint)puVar14 | *(uint *)((int)puVar45 + 0x3b));
  bVar56 = CARRY4(*puVar24,(uint)puVar24);
  uVar22 = *puVar24;
  *puVar24 = (uint)(*puVar24 + (int)puVar24);
  if (SCARRY4(uVar22,(int)puVar24)) {
    bVar56 = CARRY4(*puVar24,(uint)puVar24);
    bVar57 = SCARRY4(*puVar24,(int)puVar24);
    *puVar24 = (uint)(*puVar24 + (int)puVar24);
    bVar10 = POPCOUNT(*puVar24 & 0xff);
    if (bVar57) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + bVar56);
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
    bVar56 = (POPCOUNT((byte)*puVar45) & 1U) == 0;
    if (bVar56) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar56) {
      iVar19 = CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 - (byte)*puVar14);
      goto get_Value;
    }
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
    puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + 'r');
    pbVar50 = unaff_EBP;
code_r0x004028e2:
    uVar38 = (undefined2)((uint)in_stack_ffffffcc >> 0x10);
    uVar22 = *puVar24;
    *puVar24 = (uint)(*puVar24 + (int)puVar24);
    if (SCARRY4(uVar22,(int)puVar24)) {
      if (*puVar24 == 0 || SCARRY4(uVar22,(int)puVar24) != (int)*puVar24 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar43 = (uint *)((int)puVar43 + -1);
    cVar6 = (char)puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + cVar6;
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) |
                                        *(byte *)((int)puVar42 + 0x16d7207),(char)puVar42));
    pbVar16 = (byte *)((int)puVar24 + 0x7d);
    bVar10 = *pbVar16;
    bVar9 = (byte)((uint)puVar45 >> 8);
    bVar35 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar9;
    uVar17 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar35,bVar9) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar16 < '\0') * 0x80 | (uint)(*pbVar16 == 0) * 0x40 |
             (uint)(bVar8 & 1) * 0x10 | (uint)((POPCOUNT(*pbVar16) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar10,bVar9);
    *(byte *)puVar24 = (byte)*puVar24 + cVar6;
    pbVar16 = (byte *)(CONCAT31((int3)((uint)puVar24 >> 8),cVar6 + '+') ^ *puVar48);
    if ((POPCOUNT((uint)pbVar16 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar10 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar10;
    puVar24 = (uint *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10 + 0x72);
    if (bVar10 < 0x8e && (byte)(bVar10 + 0x72) != '\0') {
      if (SCARRY1(bVar10,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar24 + 0x6f) = *(byte *)((int)puVar24 + 0x6f) + bVar9;
    }
code_r0x00402905:
    uVar60 = CONCAT44(puVar45,puVar24);
    puVar43 = (uint *)((int)puVar43 + -1);
    cVar6 = (char)puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + cVar6;
    bVar10 = (byte)((uint)puVar42 >> 8) | (byte)*puVar42;
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar10,(char)puVar42));
    uVar52 = (ushort)uVar17;
    if ((char)bVar10 < '\x01') {
      *(byte *)puVar24 = (byte)*puVar24 + cVar6;
      puVar48 = (uint *)((int)puVar48 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar24 = (byte)*puVar24 + cVar6;
    uVar17 = 0x40291c;
    uVar60 = func_0x7346291c();
    *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
    puVar42 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar60 >> 0x20));
    puStackY_50 = (uint *)CONCAT22(puStackY_50._2_2_,uVar52);
    uStackY_4c = puVar43;
    while( true ) {
      pcVar18 = (char *)((int)uVar60 * 2);
      *pcVar18 = *pcVar18 - (char)puVar42;
      uVar22 = *puVar43;
      cVar6 = (char)((uint)puVar42 >> 8);
      *(byte *)puVar43 = (byte)*puVar43 + cVar6;
      if (SCARRY1((byte)uVar22,cVar6) == (char)(byte)*puVar43 < '\0') {
        pbVar16 = (byte *)((int)puVar48 + (int)uVar60);
        *pbVar16 = *pbVar16 + (char)uVar60;
        bVar10 = *pbVar16;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar45 = (uint *)((ulonglong)uVar60 >> 0x20);
      cVar6 = (char)uVar60;
      *(char *)uVar60 = *(char *)uVar60 + cVar6;
      uVar29 = (undefined3)((ulonglong)uVar60 >> 8);
      bVar10 = cVar6 + 7;
      puVar24 = (uint *)CONCAT31(uVar29,bVar10);
      bVar35 = (byte)((ulonglong)uVar60 >> 0x28);
      if ((POPCOUNT(bVar10) & 1U) != 0) break;
      *(byte *)puVar24 = (byte)*puVar24 + bVar10;
      pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '3');
      uVar38 = (undefined2)((uint)puVar43 >> 0x10);
      uVar32 = SUB41(puVar43,0);
      bVar10 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar14 + 0x16) + (0xd3 < bVar10);
      puVar43 = (uint *)CONCAT22(uVar38,CONCAT11(bVar10,uVar32));
      *pcVar18 = *pcVar18 + cVar6 + '3';
      cVar7 = cVar6 + ':';
      puVar24 = (uint *)CONCAT31(uVar29,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) {
        bVar10 = bVar10 | *(byte *)((int)puVar45 + 7);
        puVar43 = (uint *)CONCAT22(uVar38,CONCAT11(bVar10,uVar32));
        bVar56 = (POPCOUNT(bVar10) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar24 = (byte)*puVar24 + cVar7;
      puVar24 = (uint *)(CONCAT31(uVar29,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar16 = (byte *)((int)puVar24 + 0x72);
      bVar57 = SCARRY1(*pbVar16,bVar35);
      *pbVar16 = *pbVar16 + bVar35;
      bVar10 = POPCOUNT(*pbVar16);
code_r0x0040294c:
      if ((bVar10 & 1) == 0) {
        *(byte *)((int)puVar24 + 0x72) = *(byte *)((int)puVar24 + 0x72) + (char)((uint)puVar45 >> 8)
        ;
      }
      else if (bVar57) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar6 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_54 = (uint *)CONCAT22(puStackY_54._2_2_,uStack_20);
code_r0x00402957:
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
      cVar6 = (char)puVar24 + '(';
      puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),cVar6);
      *(byte *)puVar24 = (byte)*puVar24 + cVar6;
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((byte)((uint)puVar42 >> 8) | (byte)*puVar24,(char)puVar42)
                                );
      *(byte *)puVar24 = (byte)*puVar24 + cVar6;
      puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                 CONCAT11((byte)((uint)puVar45 >> 8) | (byte)puVar43[0x18],
                                          (char)puVar45));
      puVar14 = puStackY_54;
      puVar48 = puStackY_50;
code_r0x00402966:
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
      bVar10 = (byte)((uint)puVar43 >> 8) | *(byte *)((int)puVar45 + 7);
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar10,(char)puVar43));
      if ((POPCOUNT(bVar10) & 1U) != 0) {
        puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
      puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + '~');
code_r0x00402971:
      uVar17 = (uint)uStack_20;
code_r0x00402972:
      uVar38 = (undefined2)((uint)in_stack_ffffffcc >> 0x10);
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
code_r0x00402974:
      bVar10 = 0xe9 < (byte)puVar24;
      in_stack_ffffffcc = CONCAT22(uVar38,in_CS);
      in_CS = 0x2d0a;
      uVar60 = func_0x00006128(in_stack_ffffffcc);
      puVar42 = (uint *)uVar60;
      piVar27 = (int *)((int)((ulonglong)uVar60 >> 0x20) + -0x3d);
      *piVar27 = (int)((int)puVar14 + (uint)bVar10 + *piVar27);
      bVar56 = SCARRY4(*puVar42,(int)puVar42);
      *puVar42 = *puVar42 + (int)puVar42;
      uVar22 = *puVar42;
      puVar42 = extraout_ECX_02;
code_r0x00402982:
      bVar10 = POPCOUNT(uVar22 & 0xff);
      if (bVar56) {
        *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
        puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                   CONCAT11((byte)((uint)puVar42 >> 8) |
                                            *(byte *)((ulonglong)uVar60 >> 0x20),(char)puVar42));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar18 = (char *)((ulonglong)uVar60 >> 0x20);
      if ((bVar10 & 1) == 0) {
        *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
        *pcVar18 = *pcVar18 + (char)puVar42;
        uVar60 = CONCAT44(CONCAT22((short)((ulonglong)uVar60 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar60 >> 0x28) - pcVar18[0x1f],
                                            (char)((ulonglong)uVar60 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '('));
code_r0x00402991:
        puVar45 = (uint *)((ulonglong)uVar60 >> 0x20);
        pbVar16 = (byte *)uVar60;
        bVar10 = (byte)uVar60;
        bVar56 = CARRY1(bVar10,*pbVar16);
        puVar24 = (uint *)CONCAT31((int3)((ulonglong)uVar60 >> 8),bVar10 + *pbVar16);
        cVar6 = bVar10 + *pbVar16;
        if (SCARRY1(bVar10,*pbVar16)) goto code_r0x004029c4;
code_r0x00402995:
        puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                   CONCAT11(((char)((uint)puVar45 >> 8) -
                                            *(byte *)((int)puVar45 + 0x6b)) - bVar56,(char)puVar45))
        ;
        bVar10 = (byte)puVar24;
        bVar56 = CARRY1(bVar10,(byte)*puVar24);
        bVar57 = SCARRY1(bVar10,(byte)*puVar24);
        puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar10 + (byte)*puVar24);
        do {
          if (!bVar57) {
            puVar14 = (uint *)((int)puVar14 + (uint)bVar56 + *puVar24);
            pbVar16 = (byte *)((int)puVar24 + *puVar24);
            bVar35 = (byte)pbVar16;
            *pbVar16 = *pbVar16 + bVar35;
            *(byte *)puVar42 = (byte)*puVar42 + (char)puVar42;
            bVar10 = *pbVar16;
            *pbVar16 = *pbVar16 + bVar35;
            *puVar48 = (uint)((int)puVar43 + (uint)CARRY1(bVar10,bVar35) + *puVar48);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar42;
            uVar29 = (undefined3)((uint)pbVar16 >> 8);
            bVar35 = bVar35 | (byte)*puVar14;
            puVar24 = (uint *)CONCAT31(uVar29,bVar35);
            uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uStack_20);
            uVar1 = *puVar24;
            uVar22 = *puVar24;
            *puVar24 = (uint)(*puVar24 + (int)puVar24);
            if (SCARRY4(uVar22,(int)puVar24)) {
              *(byte *)puVar14 = (byte)*puVar14 - (char)puVar43;
              *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
              *(byte *)puVar48 = (byte)*puVar48 - (char)puVar43;
            }
            else {
              puStackY_50 = (uint *)CONCAT22(puStackY_50._2_2_,uVar52);
              uStack_20 = uVar52;
              if (CARRY4(uVar1,(uint)puVar24)) goto code_r0x00402971;
              bVar56 = CARRY1(bVar35,(byte)*puVar24);
              bVar57 = SCARRY1(bVar35,(byte)*puVar24);
              puVar24 = (uint *)CONCAT31(uVar29,bVar35 + (byte)*puVar24);
code_r0x004029be:
              if (!bVar57) {
                puStackY_50 = (uint *)CONCAT22(puStackY_50._2_2_,uVar52);
                *(byte *)((int)puVar45 + -0x37) =
                     (*(byte *)((int)puVar45 + -0x37) - (char)((uint)puVar45 >> 8)) - bVar56;
                cVar6 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar6;
                bVar10 = (byte)puVar24;
                bVar56 = CARRY1(bVar10,(byte)*puVar24);
                bVar57 = SCARRY1(bVar10,(byte)*puVar24);
                puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar10 + (byte)*puVar24);
                goto code_r0x004029c6;
              }
            }
            bVar10 = (byte)puVar42;
            bVar56 = CARRY1((byte)*puVar45,bVar10);
            bVar57 = SCARRY1((byte)*puVar45,bVar10);
            *(byte *)puVar45 = (byte)*puVar45 + bVar10;
            if (bVar56) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar57) {
            uVar52 = (ushort)pbVar50;
            goto code_r0x00402966;
          }
          uVar17 = (uint)uVar52;
          *(uint *)((int)puVar45 + -0x23) =
               (*(int *)((int)puVar45 + -0x23) - (int)puVar14) - (uint)bVar56;
          uVar22 = *puVar24;
          bVar35 = (byte)puVar24;
          uVar1 = *puVar24;
          uVar29 = (undefined3)((uint)puVar24 >> 8);
          bVar10 = bVar35 + (byte)*puVar24;
          puVar24 = (uint *)CONCAT31(uVar29,bVar10);
          if (SCARRY1(bVar35,(byte)uVar1)) goto code_r0x00402972;
          in_stack_ffffffcc = CONCAT22((short)((uint)in_stack_ffffffcc >> 0x10),uVar52);
          cVar6 = (char)puVar45;
          bVar9 = ((char)((uint)puVar45 >> 8) - *(byte *)((int)puVar45 + -0xf)) -
                  CARRY1(bVar35,(byte)uVar22);
          puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),CONCAT11(bVar9,cVar6));
          puVar49 = (uint *)CONCAT31(uVar29,bVar10 + (byte)*puVar24);
          bVar35 = (byte)puVar42;
          if (SCARRY1(bVar10,(byte)*puVar24)) {
            *(byte *)puVar45 = (byte)*puVar45 + bVar35;
            uVar60 = CONCAT44(puVar45,(int)puVar49 + -0x1c37211);
            pcVar18 = (char *)((int)puVar49 + -0x1c3720a);
            *pcVar18 = *pcVar18 + bVar9;
            bVar10 = POPCOUNT(*pcVar18);
            goto code_r0x00402984;
          }
          puVar14 = (uint *)((int)puVar14 +
                            (-(uint)CARRY1(bVar10,(byte)*puVar24) - *(int *)((int)puVar45 + 5)));
          bVar56 = SCARRY4((int)puVar49,*puVar49);
          uVar22 = (int)puVar49 + *puVar49;
          uVar60 = CONCAT44(puVar45,uVar22);
          if (bVar56) goto code_r0x00402982;
          bVar10 = (byte)uVar22 + 0x8e;
          uVar23 = CONCAT31((int3)(uVar22 >> 8),bVar10 - CARRY4((uint)puVar49,*puVar49));
          *puVar43 = (*puVar43 - uVar23) -
                     (uint)((byte)uVar22 < 0x72 || bVar10 < CARRY4((uint)puVar49,*puVar49));
          pbVar16 = (byte *)(uVar23 - 0x5e);
          bVar10 = *pbVar16;
          *pbVar16 = *pbVar16 + bVar9;
          uVar22 = (uint)CARRY1(bVar10,bVar9);
          uVar1 = uVar23 - 0x32d72;
          puVar24 = (uint *)(uVar1 - uVar22);
          if (SBORROW4(uVar23,0x32d72) != SBORROW4(uVar1,uVar22)) goto code_r0x00402992;
          uVar54 = uVar55;
          if (uVar23 < 0x32d72 || uVar1 < uVar22) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar24 >> 8);
            *(byte *)puVar45 = (byte)*puVar45 + bVar35;
            puVar49 = puVar14 + 1;
            out(*puVar14,CONCAT11(bVar9,cVar6));
            *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
            goto code_r0x00402a3e;
          }
          bVar56 = CARRY4((uint)puVar24,*puVar24);
          bVar57 = SCARRY4((int)puVar24,*puVar24);
          puVar24 = (uint *)((int)puVar24 + *puVar24);
          if (!bVar57) {
            uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uVar52);
            *(byte *)puVar14 = (byte)*puVar14 + bVar56;
            bVar10 = (byte)puVar24;
            *(byte *)((int)puVar45 + (int)unaff_EBP) =
                 *(byte *)((int)puVar45 + (int)unaff_EBP) + bVar10;
            *(byte *)puVar43 = (byte)*puVar43 + cVar6;
            *(byte *)puVar43 = (byte)*puVar43 ^ bVar10;
            bVar36 = (byte)((uint)puVar42 >> 8);
            *(byte *)puVar14 = (byte)*puVar14 + bVar36;
            *(byte *)puVar24 = (byte)*puVar24 + bVar10;
            pbVar16 = (byte *)CONCAT31((int3)((uint)puVar24 >> 8),bVar10 | (byte)*puVar24);
            *(byte *)puVar42 = (byte)*puVar42 + cVar6;
            bVar40 = *pbVar16;
            uVar38 = (undefined2)((uint)puVar42 >> 0x10);
            puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(bVar36 + bVar40,bVar35));
            pbVar16 = pbVar16 + (uint)CARRY1(bVar36,*pbVar16) + *(int *)pbVar16;
            *(byte *)puVar45 = (byte)*puVar45 + bVar35;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar50 = pbVar16 + 0x73;
            bVar10 = *pbVar50;
            *pbVar50 = *pbVar50 + bVar9;
            uVar29 = (undefined3)((uint)pbVar16 >> 8);
            bVar10 = (char)pbVar16 + CARRY1(bVar10,bVar9);
            pcVar18 = (char *)CONCAT31(uVar29,bVar10);
            *(byte *)puVar45 = (byte)*puVar45 + bVar35;
            if ((POPCOUNT((byte)*puVar45) & 1U) == 0) {
              uStack_20 = uVar52;
            }
            puVar51 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x17));
            *pcVar18 = *pcVar18 + bVar10;
            cVar6 = bVar10 + 2;
            puVar24 = (uint *)CONCAT31(uVar29,cVar6);
            if (bVar10 < 0xfe) {
              *puVar24 = (uint)(*puVar24 + (int)puVar24);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar24 = (byte)*puVar24 + cVar6;
            uVar17 = *puVar45;
            puVar49 = (uint *)((int)puVar14 + puVar43[0x19]);
            *(byte *)puVar24 = (byte)*puVar24 + cVar6;
            puVar42 = (uint *)CONCAT22(uVar38,CONCAT11(bVar36 + bVar40 | (byte)*puVar24,
                                                       bVar35 | (byte)uVar17));
            puVar48 = puVar51;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar10;
    pbVar16 = (byte *)((int)puVar24 + 0x73);
    bVar56 = CARRY1(*pbVar16,bVar35);
    *pbVar16 = *pbVar16 + bVar35;
  } while( true );
code_r0x00402992:
  pbVar16 = (byte *)((int)puVar24 + 0x2a);
  bVar56 = CARRY1(*pbVar16,bVar9);
  *pbVar16 = *pbVar16 + bVar9;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar24) = *(byte *)(in_GS_OFFSET + (int)puVar24) + (char)puVar24;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | *(byte *)((int)puVar48 + 0x66),
                                      (char)puVar42));
  *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
code_r0x00402a3e:
  uVar29 = (undefined3)((uint)puVar24 >> 8);
  bVar10 = (byte)puVar24 | (byte)*puVar49;
  pcVar18 = (char *)CONCAT31(uVar29,bVar10);
  if ((char)bVar10 < '\0') {
    *pcVar18 = *pcVar18 + bVar10;
    cVar6 = bVar10 + 2;
    piVar27 = (int *)CONCAT31(uVar29,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar27 = (char)*piVar27 + cVar6;
      bVar10 = bVar10 + 0x71;
      pcVar12 = (char *)CONCAT31(uVar29,bVar10);
      pcVar18 = (char *)segment(uVar54,(short)puVar43 + (short)puVar49);
      *pcVar18 = *pcVar18 + bVar10;
      uVar17 = puVar48[0x1a];
      *pcVar12 = *pcVar12 + bVar10;
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((byte)((uint)puVar42 >> 8) | (byte)uVar17 |
                                          *(byte *)((int)puVar48 + 0x69),(char)puVar42));
      *pcVar12 = *pcVar12 + bVar10;
      bVar10 = bVar10 | (byte)*puVar45;
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar14 = puVar49 + (uint)bVar58 * -2 + 1;
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
  pcVar18 = (char *)segment(uVar54,(short)puVar43 + (short)puVar14);
  *pcVar18 = *pcVar18 + (char)piVar27;
  cVar6 = (char)puVar42;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | (byte)puVar48[0x1a],cVar6));
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  uVar38 = CONCAT11((byte)((uint)puVar45 >> 8) | *(byte *)((int)puVar45 + 0x65),(char)puVar45);
  puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar38);
  piVar25 = (int *)((int)piVar27 + *piVar27);
  puVar49 = puVar14;
  puVar51 = puVar48;
  uVar53 = uVar52;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402ae3;
  *(byte *)puVar45 = (byte)*puVar45 + cVar6;
  puVar49 = puVar14 + (uint)bVar58 * -2 + 1;
  out(*puVar14,uVar38);
code_r0x00402a75:
  bVar10 = (byte)((uint)puVar42 >> 8) | (byte)*puVar45;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar10,(char)puVar42));
  piVar27 = (int *)(uint)(byte)*puVar43;
  *(byte *)puVar49 = (byte)*puVar49 - bVar10;
  puVar51 = puVar48;
code_r0x00402a7f:
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  out(*puVar49,(short)puVar45);
  bVar10 = in((short)puVar45);
  *(byte *)puVar51 = bVar10;
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | (byte)*puVar45,(char)puVar42));
  iVar19 = *piVar27;
  cVar6 = in(1);
  puVar24 = (uint *)CONCAT31((int3)((uint)((int)piVar27 + *piVar27) >> 8),cVar6);
  *(char *)puVar24 = (char)*puVar24 + cVar6;
  puVar24 = (uint *)((uint)puVar24 | *puVar24);
  *(byte *)puVar42 = (byte)*puVar42 + (char)puVar45;
  puVar49 = (uint *)((int)puVar49 + (((uint)bVar58 * -8 + 4) - iVar19));
  puVar51 = (uint *)((int)puVar51 + (uint)bVar58 * -2 + 1);
  uStack_20 = uVar52;
  while( true ) {
    bVar10 = (byte)puVar24 | (byte)*puVar45;
    puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar10);
    puVar48 = puVar51;
    if ((POPCOUNT(bVar10) & 1U) != 0) break;
    *(byte *)puVar24 = (byte)*puVar24 + bVar10;
code_r0x00402a9b:
    uVar29 = (undefined3)((uint)puVar24 >> 8);
    cVar6 = (char)puVar24 + '\r';
    piVar25 = (int *)CONCAT31(uVar29,cVar6);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar25;
    *(char *)piVar25 = (char)*piVar25 + cVar6;
    *(byte *)(puVar49 + -0xc800000) = (byte)puVar49[-0xc800000] + (char)puVar45;
    *(char *)piVar25 = (char)*piVar25 + cVar6;
    *(byte *)puVar45 = (byte)*puVar45 + cVar6;
    cVar7 = (char)puVar42;
    if ((POPCOUNT((byte)*puVar45) & 1U) != 0) {
      *(byte *)puVar45 = (byte)*puVar45 + cVar7;
      puVar14 = puVar49 + (uint)bVar58 * -2 + 1;
      out(*puVar49,(short)puVar45);
      piVar27 = (int *)((longlong)*piVar25 * 0x7b020a00);
      *(char *)piVar27 =
           (char)*piVar27 - ((longlong)(int)piVar27 != (longlong)*piVar25 * 0x7b020a00);
      pbVar50 = (byte *)((int)puVar48 + (int)unaff_EBP * 2);
      *pbVar50 = *pbVar50;
      goto code_r0x00402a61;
    }
    *(char *)piVar25 = (char)*piVar25 + cVar6;
    puVar24 = (uint *)CONCAT31(uVar29,(char)puVar24 + ':');
    puVar14 = (uint *)((uint)puVar49 | *(uint *)((int)puVar45 + -0x79));
    iVar19 = (int)puVar24 + *puVar24;
    if (SCARRY4((int)puVar24,*puVar24)) {
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                 CONCAT11((char)((uint)puVar43 >> 8) + (byte)puVar14[(int)puVar43],
                                          (char)puVar43));
      *(char *)((int)puVar45 * 2) = *(char *)((int)puVar45 * 2) + (char)iVar19;
      puVar51 = puVar48;
      goto code_r0x00402b33;
    }
    uVar29 = (undefined3)((uint)iVar19 >> 8);
    cVar6 = (char)iVar19 + CARRY4((uint)puVar24,*puVar24);
    piVar27 = (int *)CONCAT31(uVar29,cVar6);
    *(byte *)puVar45 = (byte)*puVar45 + cVar7;
    bVar56 = (POPCOUNT((byte)*puVar45) & 1U) != 0;
    if ((bVar56) && (bVar56)) goto code_r0x00402a61;
    *(char *)piVar27 = (char)*piVar27 + cVar6;
    cVar47 = cVar6 + '(';
    pcVar18 = (char *)CONCAT31(uVar29,cVar47);
    puVar51 = puVar48 + (uint)bVar58 * -2 + 1;
    uVar17 = in((short)puVar45);
    *puVar48 = uVar17;
    *pcVar18 = *pcVar18 + cVar47;
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | bRama07b0222,cVar7));
    *pcVar18 = *pcVar18 + cVar47;
    pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '>');
code_r0x00402ad2:
    out(*puVar14,(short)puVar45);
    puVar49 = (uint *)((int)(puVar14 + (uint)bVar58 * -2 + 1) + (uint)bVar58 * -2 + 1);
    out((byte)puVar14[(uint)bVar58 * -2 + 1],(short)puVar45);
    bVar10 = (byte)pcVar18;
    *pcVar18 = *pcVar18 + bVar10;
    puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(byte)puVar43 | (byte)*puVar51);
    bVar8 = 9 < (bVar10 & 0xf) | bVar8;
    uVar29 = (undefined3)((uint)pcVar18 >> 8);
    bVar10 = bVar10 + bVar8 * -6;
    puVar45 = (uint *)((uint)puVar45 ^ *puVar45);
    cVar6 = bVar10 + (0x9f < bVar10 | bVar8 * (bVar10 < 6)) * -0x60 + (byte)*puVar45;
    piVar27 = (int *)CONCAT31(uVar29,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar27 = (char)*piVar27 + cVar6;
    piVar25 = (int *)CONCAT31(uVar29,cVar6 + '\x17');
    uVar53 = uVar52;
code_r0x00402ae3:
    out(*puVar49,(short)puVar45);
    puVar14 = puVar49 + (uint)bVar58 * -2 + 1 + (uint)bVar58 * -2 + 1;
    out(puVar49[(uint)bVar58 * -2 + 1],(short)puVar45);
    *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
code_r0x00402ae7:
    puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((byte)((uint)puVar43 >> 8) | unaff_EBP[-0x60],(char)puVar43)
                              );
    cVar6 = (char)piVar25;
    *(char *)piVar25 = (char)*piVar25 + cVar6;
    uVar29 = (undefined3)((uint)piVar25 >> 8);
    bVar10 = cVar6 + 2;
    puVar24 = (uint *)CONCAT31(uVar29,bVar10);
    uVar52 = uVar53;
    if ((POPCOUNT(bVar10) & 1U) == 0) {
      *(byte *)puVar24 = (byte)*puVar24 + bVar10;
      cVar6 = cVar6 + '}';
      puVar24 = (uint *)CONCAT31(uVar29,cVar6);
      *(byte *)puVar24 = ((byte)*puVar24 - cVar6) - (0x84 < bVar10);
      pbVar50 = (byte *)((int)puVar45 + (int)puVar24);
      *pbVar50 = *pbVar50 + cVar6;
      bVar10 = POPCOUNT(*pbVar50);
      puVar49 = puVar14;
code_r0x00402af9:
      uVar52 = uVar53;
      puVar48 = puVar51;
      if ((bVar10 & 1) == 0) {
        *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
        bVar10 = (byte)puVar42;
        *(byte *)puVar45 = (byte)*puVar45 + bVar10;
        uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uStack_20);
        puVar14 = puVar49 + (uint)bVar58 * -2 + 1;
        out(*puVar49,(short)puVar45);
        uVar17 = *puVar45;
        *(byte *)puVar45 = (byte)*puVar45 + bVar10;
        iVar19 = CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + 'o') +
                 *(int *)((int)puVar45 * 2) + (uint)CARRY1((byte)uVar17,bVar10);
        pcVar18 = (char *)CONCAT31((int3)((uint)iVar19 >> 8),(char)iVar19 + '(');
        while( true ) {
          uVar17 = *puVar45;
          bVar35 = (byte)puVar42;
          *(byte *)puVar45 = (byte)*puVar45 + bVar35;
          pcVar18 = pcVar18 + (uint)CARRY1((byte)uVar17,bVar35) + iRam73280512;
          bVar10 = (byte)pcVar18;
          *pcVar18 = *pcVar18 + bVar10;
          puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                     CONCAT11((byte)((uint)puVar42 >> 8) | bRam7d160243,bVar35));
          bVar58 = ((uint)uStackY_4c & 0x400) != 0;
          bVar8 = ((uint)uStackY_4c & 0x10) != 0;
          *pcVar18 = *pcVar18 + bVar10;
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar29,bVar10 + 2) + (uint)(0xfd < bVar10);
          cVar6 = bVar10 + 4;
          if (SCARRY1(bVar10 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar29,cVar6) = *(char *)CONCAT31(uVar29,cVar6) + cVar6;
          iVar19 = CONCAT31(uVar29,bVar10 + 0x16);
code_r0x00402b33:
          piVar25 = (int *)(iVar19 + 0xe2802);
          *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)puVar42 >> 8);
          uVar53 = uVar52;
          uVar52 = uStack_20;
          while( true ) {
            bVar35 = (byte)puVar43 | (byte)((uint)puVar42 >> 8);
            puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar35);
            *piVar25 = (int)(*piVar25 + (int)piVar25);
            cVar6 = (char)piVar25;
            *(byte *)puVar45 = (byte)*puVar45 + cVar6;
            if ((POPCOUNT((byte)*puVar45) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar25 = (char)*piVar25 + cVar6;
            uVar17 = CONCAT31((int3)((uint)piVar25 >> 8),cVar6 + '\x13');
            puVar24 = (uint *)(uVar17 + 0x19061224 + (uint)(0x1f9edfd < uVar17));
            uVar1 = (uint)(0xe4ffffdd < uVar17 + 0xfe061202 ||
                          CARRY4(uVar17 + 0x19061224,(uint)(0x1f9edfd < uVar17)));
            uVar22 = *puVar14;
            uVar17 = *puVar14;
            *puVar14 = (uint)((byte *)(uVar17 + (int)puVar24) + uVar1);
            bVar10 = POPCOUNT(*puVar14 & 0xff);
            puVar49 = puVar14;
            if ((SCARRY4(uVar22,(int)puVar24) != SCARRY4((int)(uVar17 + (int)puVar24),uVar1)) ==
                (int)*puVar14 < 0) goto code_r0x00402af9;
            bVar10 = (byte)puVar24;
            *(byte *)puVar24 = (byte)*puVar24 + bVar10;
            iVar19 = CONCAT31((int3)((uint)puVar24 >> 8),bVar10 + 2) + 0x9d7d +
                     (uint)(0xfd < bVar10);
            bVar10 = (byte)puVar45 | (byte)*puVar45;
            uVar17 = *puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + bVar35;
            pcVar18 = (char *)(CONCAT31((int3)((uint)iVar19 >> 8),(char)iVar19 + '\x12') + 0x228b26
                               + *puVar51 + (uint)CARRY1((byte)uVar17,bVar35));
            cVar6 = bVar10 + (byte)*puVar42;
            puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),cVar6);
            if (SCARRY1(bVar10,(byte)*puVar42) == cVar6 < '\0') break;
            *pcVar18 = *pcVar18 + (char)pcVar18;
            cVar6 = (char)pcVar18 + '\x02';
            pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6);
            bVar10 = POPCOUNT(cVar6);
            uVar53 = uVar52;
code_r0x00402b7a:
            puVar48 = puVar14;
            if ((bVar10 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar18;
              *pcVar18 = *pcVar18 + cVar6;
              uVar29 = (undefined3)((uint)pcVar18 >> 8);
              pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\x13');
              *(byte *)puVar42 = (byte)*puVar42 | (byte)puVar45;
              *(byte *)puVar51 = (byte)*puVar51 | (byte)puVar45;
              *puVar45 = (uint)(pcVar18 + *puVar45);
              uVar38 = (undefined2)((uint)puVar43 >> 0x10);
              uVar32 = SUB41(puVar43,0);
              cVar7 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + -0x5f);
              puVar43 = (uint *)CONCAT22(uVar38,CONCAT11(cVar7,uVar32));
              *pcVar18 = *pcVar18 + cVar6 + '\x13';
              piVar25 = (int *)CONCAT31(uVar29,cVar6 + -0x7a);
              uVar17 = *puVar45;
              *(byte *)puVar45 = (byte)*puVar45 + (char)puVar42;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar17,(char)puVar42) == (char)(byte)*puVar45 < '\0') break;
              *(char *)piVar25 = (char)*piVar25 + cVar6 + -0x7a;
              cVar47 = cVar6 + -0x78;
              piVar25 = (int *)CONCAT31(uVar29,cVar47);
              uVar4 = uVar53;
              if ((POPCOUNT(cVar47) & 1U) != 0) break;
              *(char *)piVar25 = (char)*piVar25 + cVar47;
              pcVar18 = (char *)CONCAT31(uVar29,cVar6 + -0x65);
              *puVar42 = *puVar42 | (uint)puVar45;
              *puVar51 = *puVar51 | (uint)puVar45;
              pbVar50 = (byte *)((int)puVar42 + -1);
              cVar7 = cVar7 + *(byte *)((int)puVar43 + -0x5e);
              puVar43 = (uint *)CONCAT22(uVar38,CONCAT11(cVar7,uVar32));
              *pcVar18 = *pcVar18 + cVar6 + -0x65;
              bVar10 = cVar6 + 10;
              puVar24 = (uint *)CONCAT31(uVar29,bVar10);
              bVar35 = (byte)pbVar50;
              *(byte *)puVar45 = (byte)*puVar45 + bVar35;
              puVar14 = puVar48 + (uint)bVar58 * -2 + 1;
              out(*puVar48,(short)puVar45);
              uVar17 = *puVar45;
              *(byte *)puVar45 = (byte)*puVar45 + bVar35;
              uVar23 = (uint)CARRY1((byte)uVar17,bVar35);
              uVar22 = *puVar45;
              uVar17 = *puVar45;
              pbVar16 = pbVar50 + uVar17 + uVar23;
              uVar5 = *puVar45;
              cRam130a0000 = cRam130a0000 - cVar7;
              uVar1 = *puVar45;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar24);
              *(byte *)puVar24 = (char)*puVar24 + bVar10;
              puVar42 = (uint *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar16 >> 8) | bRam7d170243,
                                                  (char)pbVar16 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar50,uVar22) ||
                                                  CARRY4((uint)(pbVar50 + uVar17),uVar23))));
              bVar58 = (uStack_20 & 0x400) != 0;
              bVar8 = (uStack_20 & 0x10) != 0;
              *(byte *)puVar24 = (char)*puVar24 + bVar10;
              bVar56 = 0xfd < bVar10;
              pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\f');
              puVar45 = (uint *)((uint)puVar45 | uVar1);
code_r0x00402bd1:
              uVar17 = *puVar43;
              uVar22 = *puVar43;
              *puVar43 = (uint)((byte *)(uVar22 + (int)puVar42) + bVar56);
              bVar10 = POPCOUNT(*puVar43 & 0xff);
              uVar53 = uStack_20;
              if ((SCARRY4(uVar17,(int)puVar42) !=
                  SCARRY4((int)(uVar22 + (int)puVar42),(uint)bVar56)) == (int)*puVar43 < 0)
              goto code_r0x00402b7a;
              cVar6 = (char)pcVar18;
              *pcVar18 = *pcVar18 + cVar6;
              pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar18 = *pcVar18 + (char)pcVar18;
                pcVar18 = (char *)(CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x12') |
                                  *puVar45);
                *(byte *)puVar51 = (byte)*puVar51 - (char)puVar42;
                *pcVar18 = *pcVar18 + (char)pcVar18;
                puVar45 = (uint *)((int)puVar45 - *puVar14);
                bVar10 = (byte)puVar43 | (byte)((uint)puVar42 >> 8);
                cVar6 = *pcVar18;
                uVar29 = (undefined3)((uint)pcVar18 >> 8);
                pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                *pcVar18 = *pcVar18 + cVar6;
                pcVar12 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                           CONCAT11((char)((uint)puVar43 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),
                                                                       bVar10) + -0x5b),bVar10));
                *pcVar18 = *pcVar18 + cVar6;
                bVar56 = false;
                pcVar18 = (char *)(CONCAT31(uVar29,cVar6 + '\x13') | *puVar45);
                do {
                  bVar35 = (byte)puVar42;
                  bVar10 = bVar35 + (byte)puVar14[(int)puVar51 * 2];
                  puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar10 + bVar56);
                  uVar17 = (uint)(CARRY1(bVar35,(byte)puVar14[(int)puVar51 * 2]) ||
                                 CARRY1(bVar10,bVar56));
                  pcVar26 = pcVar18 + 0x1b000019 + uVar17;
                  piVar27 = (int *)((int)puVar51 * 2 + 0x40000a5);
                  *piVar27 = (int)((int)puVar42 +
                                  (uint)((char *)0xe4ffffe6 < pcVar18 ||
                                        CARRY4((uint)(pcVar18 + 0x1b000019),uVar17)) + *piVar27);
                  puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + cRam00009d7d
                                            );
                  uVar29 = (undefined3)((uint)pcVar26 >> 8);
                  bVar10 = (char)pcVar26 + 0x12;
                  bVar8 = 9 < (bVar10 & 0xf) | bVar8;
                  uVar17 = CONCAT31(uVar29,bVar10 + bVar8 * -6) & 0xffffff0f;
                  pcVar18 = (char *)CONCAT22((short)(uVar17 >> 0x10),
                                             CONCAT11((char)((uint)pcVar26 >> 8) - bVar8,
                                                      (char)uVar17));
                  pbVar50 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar29,bVar10));
                  while( true ) {
                    *pcVar18 = *pcVar18 + (char)pcVar18;
                    puVar48 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),
                                               (byte)puVar45 | (byte)*puVar45);
                    puVar51 = (uint *)((uint)puVar51 | (uint)puVar14);
                    uVar17 = (uint)pcVar12 | (uint)puVar14;
                    unaff_EBP = pbVar50 + 1;
                    uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uVar52);
                    cVar7 = (char)(pcVar18 + 0x1b000019);
                    uVar29 = (undefined3)((uint)(pcVar18 + 0x1b000019) >> 8);
                    cVar6 = cVar7 + -0x13;
                    pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                    uVar38 = (undefined2)(uVar17 >> 0x10);
                    cVar47 = (char)(uVar17 >> 8) + *(char *)(uVar17 - 0x5e);
                    puVar43 = (uint *)CONCAT22(uVar38,CONCAT11(cVar47,(byte)uVar17));
                    *pcVar18 = *pcVar18 + cVar6;
                    pcVar18 = (char *)(CONCAT31(uVar29,cVar7 + '\x19') | *puVar48);
                    bVar10 = (byte)pcVar18;
                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0) {
                      pbVar50 = (byte *)((int)puVar48 + (int)pcVar18);
                      bVar56 = CARRY1(*pbVar50,bVar10);
                      *pbVar50 = *pbVar50 + bVar10;
                      puVar45 = puVar48;
                      goto code_r0x00402bd1;
                    }
                    *pcVar18 = *pcVar18 + bVar10;
                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                    pcVar12 = (char *)CONCAT31(uVar29,bVar10 + 0x6f);
                    puVar45 = (uint *)((int)puVar48 + 1);
                    *pcVar12 = *pcVar12 + bVar10 + 0x6f;
                    bVar35 = (byte)uVar17 | (byte)((uint)pcVar18 >> 8);
                    pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x5c);
                    cVar47 = cVar47 + *(char *)(CONCAT31((int3)((uint)puVar43 >> 8),bVar35) + -0x5f)
                    ;
                    puVar43 = (uint *)CONCAT22(uVar38,CONCAT11(cVar47,bVar35));
                    *pcVar18 = *pcVar18 + bVar10 + 0x5c;
                    pcVar18 = (char *)(CONCAT31(uVar29,bVar10 + 0x88) | *puVar45);
                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0) {
                      *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)puVar42 >> 8);
                      uStackY_4c = (uint *)((uint)uStackY_4c._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar18 = *pcVar18 + (char)pcVar18;
                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                    cVar6 = (char)pcVar18 + 'o';
                    puVar45 = (uint *)((int)puVar48 + 2);
                    *(char *)CONCAT31(uVar29,cVar6) = *(char *)CONCAT31(uVar29,cVar6) + cVar6;
                    pcVar12 = (char *)CONCAT31((int3)((uint)puVar43 >> 8),
                                               bVar35 | (byte)((uint)pcVar18 >> 8));
                    pcVar18 = (char *)(CONCAT31(uVar29,cVar6) | 2);
                    pbVar50[-0x62] = pbVar50[-0x62] + 1;
                    bVar10 = (byte)pcVar18;
                    *pcVar18 = *pcVar18 + bVar10;
                    bVar56 = 0xfd < bVar10;
                    cVar6 = bVar10 + 2;
                    pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                    uVar54 = uVar52;
                    if (SCARRY1(bVar10,'\x02') != cVar6 < '\0') break;
                    *pcVar18 = *pcVar18 + cVar6;
                    bVar35 = bVar10 + 10;
                    pcVar18 = (char *)CONCAT31(uVar29,bVar35);
                    *pcVar18 = *pcVar18 - cVar47;
                    cVar7 = (char)puVar42;
                    *(byte *)puVar45 = *(byte *)puVar45 + cVar7;
                    pbVar50[-0x62] = pbVar50[-0x62] + 1;
                    *pcVar18 = *pcVar18 + bVar35;
                    cVar6 = bVar10 + 0xc;
                    pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                    if (SCARRY1(bVar35,'\x02') == cVar6 < '\0') {
                      *pcVar18 = *pcVar18 + cVar6;
                      *(byte *)puVar42 = (byte)*puVar42 - cVar47;
                      *(byte *)puVar45 = *(byte *)puVar45 + cVar7;
                      cVar6 = (bVar10 + 0x13) - (byte)puVar42[0x13];
                      pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                      *pcVar18 = *pcVar18 + cVar6;
                      pcVar26 = (char *)CONCAT31(uVar29,cVar6 + *pcVar18);
                      *pcVar26 = *pcVar26 + cVar6 + *pcVar18;
                      pcVar26 = pcVar26 + *puVar42;
                      *pcVar26 = *pcVar26 + (char)pcVar26;
                      LOCK();
                      pcVar18 = *(char **)pcVar26;
                      *(char **)pcVar26 = pcVar26;
                      UNLOCK();
                      *pcVar18 = *pcVar18 + (char)pcVar18;
                      pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),(byte)*puVar42);
                      *pbVar16 = *pbVar16 + (byte)*puVar42;
                      goto code_r0x00402c8d;
                    }
                    puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               cVar7 + *pcVar12 + (0xfd < bVar35));
                    *(byte *)puVar51 = (byte)*puVar51 - cVar47;
                    pbVar50 = unaff_EBP;
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
            uVar53 = uVar52;
            uVar52 = uVar4;
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
    *puVar51 = (uint)((int)puVar45 + (uint)CARRY1((byte)uVar17,(byte)puVar24) + *puVar51);
    puVar49 = puVar14;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar11 = (char)puVar42;
      cVar37 = (char)((uint)puVar42 >> 8) + (char)((uint)pbVar16 >> 8);
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(cVar37,cVar11));
      cVar6 = (char)pbVar16;
      *pbVar16 = *pbVar16 + cVar6;
      pcVar18 = (char *)((int)pbVar16 * 2 + 0x1a10000);
      cVar47 = (char)((uint)pcVar12 >> 8);
      *pcVar18 = *pcVar18 + cVar47;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
      pbVar16[-0x47ffffff] = pbVar16[-0x47ffffff] + cVar47;
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      bVar35 = (byte)puVar45;
      *(byte *)puVar51 = (byte)*puVar51 + bVar35;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + bVar35;
      *pbVar16 = *pbVar16 + cVar6;
      *puVar14 = (uint)(*puVar14 + (int)puVar14);
      uVar38 = (undefined2)((uint)pcVar12 >> 0x10);
      cVar47 = cVar47 + (byte)puVar14[(int)pcVar12];
      pcVar18 = (char *)CONCAT22(uVar38,CONCAT11(cVar47,(char)pcVar12));
      pcVar18[(int)pbVar16] = pcVar18[(int)pbVar16] + cVar6;
      *(byte *)puVar45 = *(byte *)puVar45 - cVar47;
      *(byte *)puVar45 = *(byte *)puVar45 + cVar11;
      uVar29 = (undefined3)((uint)pbVar16 >> 8);
      bVar10 = cVar6 - *pbVar16;
      *pcVar18 = *pcVar18 + bVar35;
      *(byte *)puVar45 = *(byte *)puVar45 ^ bVar10;
      *(byte *)puVar45 = *(byte *)puVar45 + bVar10;
      *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
      uVar17 = *puVar42;
      *(byte *)puVar42 = (byte)*puVar42 + bVar35;
      cVar7 = bVar10 + *(char *)CONCAT31(uVar29,bVar10) + CARRY1((byte)uVar17,bVar35);
      pcVar12 = (char *)CONCAT22(uVar38,CONCAT11(cVar47 + pbVar50[-0x60],(char)pcVar12));
      *(char *)CONCAT31(uVar29,cVar7) = *(char *)CONCAT31(uVar29,cVar7) + cVar7;
      cVar47 = cVar7 + '\x12';
      pbVar16 = (byte *)CONCAT31(uVar29,cVar47);
      cVar6 = *pcVar12;
      *pcVar12 = *pcVar12 + cVar47;
      if (SCARRY1(cVar6,cVar47) != *pcVar12 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar16;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
      *(byte *)puVar45 = *(byte *)puVar45 + cVar6;
      *pbVar16 = *pbVar16 + cVar6;
    }
    *pbVar16 = *pbVar16 + cVar47;
    pbVar16 = (byte *)CONCAT31(uVar29,cVar7 + '$');
    *pbVar16 = *pbVar16 + cVar37;
    bVar10 = *(byte *)puVar45;
    *(byte *)puVar45 = *(byte *)puVar45 + cVar11;
    uVar53 = uVar52;
    uVar54 = uVar55;
  } while (SCARRY1(bVar10,cVar11) == (char)*(byte *)puVar45 < '\0');
  do {
    cVar6 = (char)pbVar16;
    *pbVar16 = *pbVar16 + cVar6;
    uVar29 = (undefined3)((uint)pbVar16 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar45;
    bVar35 = cVar6 + 0x24;
    cVar47 = (char)((uint)pcVar12 >> 8);
    pcVar12[-0x62] = pcVar12[-0x62] + cVar47;
    *(char *)CONCAT31(uVar29,bVar35) = *(char *)CONCAT31(uVar29,bVar35) + bVar35;
    bVar10 = cVar6 + 0x2fU + (byte)*puVar42;
    cVar7 = bVar10 + (0xf4 < bVar35);
    cVar6 = cVar7 + *(char *)CONCAT31(uVar29,cVar7) +
            (CARRY1(cVar6 + 0x2fU,(byte)*puVar42) || CARRY1(bVar10,0xf4 < bVar35));
    pcVar18 = (char *)CONCAT31(uVar29,cVar6);
    *pcVar18 = *pcVar18 - (char)puVar45;
    *pcVar18 = *pcVar18 + cVar6;
    pcVar26 = (char *)((int)puVar45 - *puVar45);
    *(byte *)(puVar14 + (int)pcVar12) = (byte)puVar14[(int)pcVar12] + cVar47;
    pcVar18[(int)unaff_EBP] = pcVar18[(int)unaff_EBP] + cVar6;
    *pcVar26 = *pcVar26 + (char)puVar42;
    pcVar18 = (char *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11((char)((uint)pbVar16 >> 8) - *pcVar26,cVar6));
    uVar17 = *puVar51;
    *pcVar18 = *pcVar18 - (char)((uint)pcVar26 >> 8);
    *pcVar18 = *pcVar18 + cVar6;
    uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uVar53);
    pbVar50 = (byte *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11(cVar47 - (byte)*puVar14,(char)pcVar12));
    unaff_EBP = unaff_EBP + *(int *)(pbVar50 + (int)puVar42);
    puVar48 = (uint *)CONCAT31((int3)((uint)pcVar26 >> 8),(char)pcVar26 + (byte)uVar17);
    while( true ) {
      puVar45 = puVar48;
      uVar38 = (undefined2)((uint)pbVar50 >> 0x10);
      bVar9 = (char)((uint)pbVar50 >> 8) + pbVar50[0x18];
      *pcVar18 = *pcVar18 + (char)pcVar18;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + 'o');
      cVar6 = (char)puVar42;
      *(byte *)puVar45 = (byte)*puVar45 + cVar6;
      uVar17 = *puVar14;
      bVar8 = (byte)((uint)puVar42 >> 8);
      bVar10 = *pbVar16;
      pbVar16 = pbVar16 + (uint)CARRY1(bVar8,*pbVar16) + *(int *)pbVar16;
      *(byte *)puVar45 = (byte)*puVar45 + cVar6;
      cVar7 = ((char)pbVar50 - (byte)uVar17) - (byte)*puVar14;
      bVar35 = *(byte *)((int)puVar51 + 0x1a);
      *pbVar16 = *pbVar16 + (char)pbVar16;
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11(bVar8 + bVar10 + bVar35 | (byte)*puVar45,cVar6));
      pbVar16 = pbVar16 + *puVar45;
      if ((POPCOUNT((uint)pbVar16 & 0xff) & 1U) != 0) break;
      *pbVar16 = *pbVar16 + (char)pbVar16;
      bVar10 = (char)pbVar16 + 0x6f;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10);
      pcVar12 = (char *)(CONCAT31((int3)(CONCAT22(uVar38,CONCAT11(bVar9,(char)pbVar50)) >> 8),cVar7)
                        + -1);
      *pcVar18 = *pcVar18 + bVar10;
      *pcVar18 = *pcVar18 + bVar10;
      *pcVar12 = *pcVar12 + (byte)puVar45;
      *(byte *)((int)pcVar18 * 2) = *(byte *)((int)pcVar18 * 2) ^ bVar10;
      uVar3 = *(undefined6 *)pcVar18;
      uVar53 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar18 = (char *)uVar3;
      *pcVar18 = *pcVar18 + (char)uVar3;
      *(byte *)puVar14 = (byte)*puVar14 + (char)uVar3;
      pcVar18 = (char *)((uint)pcVar18 | 0x73110008);
      bVar9 = (byte)((uint)pcVar12 >> 8);
      *(byte *)puVar51 = (byte)*puVar51 - bVar9;
      *(byte *)puVar45 = (byte)*puVar45 + cVar6;
      puVar48 = puVar14 + (uint)bVar58 * -2 + 1;
      out(*puVar14,(short)puVar45);
      *pcVar18 = *pcVar18;
      cVar6 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar6;
      bVar10 = unaff_EBP[-0x5a];
      uVar38 = (undefined2)((uint)pcVar12 >> 0x10);
      cVar7 = (char)pcVar12;
      *pcVar18 = *pcVar18 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar17 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      puVar42 = (uint *)(uVar17 | 0x73110000);
      puVar14 = puVar48 + (uint)bVar58 * -2 + 1;
      out(*puVar48,(short)puVar45);
      *(byte *)puVar42 = (byte)*puVar42;
      bVar8 = (byte)puVar45 | (byte)*puVar51;
      puVar48 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),bVar8);
      *(byte *)puVar42 = (byte)*puVar42 + cVar6;
      pcVar18 = (char *)(uVar17 | 0x7b1f1609);
      bVar58 = (uVar54 & 0x400) != 0;
      *(uint *)((int)puVar51 + -0x7d) = *(uint *)((int)puVar51 + -0x7d) | (uint)unaff_EBP;
      bVar35 = (byte)pcVar18;
      *pcVar18 = *pcVar18 + bVar35;
      bVar9 = bVar9 | bVar10 | *(byte *)((int)puVar14 + 0x19);
      pbVar50 = (byte *)CONCAT22(uVar38,CONCAT11(bVar9,cVar7));
      *pcVar18 = *pcVar18 + bVar35;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      puVar14[(int)puVar51 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar35) + puVar14[(int)puVar51 * 2]);
      bVar10 = bVar35 + 0x2d ^ *(byte *)CONCAT31(uVar29,bVar35 + 0x2d);
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      uVar17 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar10;
      uVar54 = uVar53;
      if (CARRY1((byte)uVar17,bVar10)) {
        *pcVar18 = *pcVar18 + bVar10;
        bVar10 = bVar10 | pcVar18[0x4000019];
        pcVar18 = (char *)CONCAT31(uVar29,bVar10);
        if ('\0' < (char)bVar10) {
          *pcVar18 = *pcVar18 + bVar10;
          piVar27 = (int *)CONCAT31(uVar29,bVar10 + 0x28);
          *piVar27 = (int)piVar27 + (uint)(0xd7 < bVar10) + *piVar27;
          bVar40 = (byte)((uint6)uVar3 >> 8);
          *pbVar50 = *pbVar50 + bVar40;
          uVar39 = CONCAT11((byte)((uint)puVar45 >> 8) | bVar9,bVar8);
          puVar48 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar39);
          uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uVar53);
          bVar8 = in(uVar39);
          pbVar16 = (byte *)CONCAT31(uVar29,bVar8);
          bVar10 = *pbVar16;
          bVar56 = SCARRY1(*pbVar16,bVar8);
          *pbVar16 = *pbVar16 + bVar8;
          bVar35 = *pbVar16;
          puVar43 = puVar14;
          uStack_20 = uVar53;
          if (!CARRY1(bVar10,bVar8)) goto code_r0x00402e19;
          *pbVar16 = *pbVar16 + bVar8;
          bVar40 = bVar40 | *pbVar16;
          puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar40,cVar6));
          pcVar18 = (char *)CONCAT31(uVar29,bVar8 + *pbVar16);
          *pbVar50 = *pbVar50 + bVar40;
        }
        uVar29 = (undefined3)((uint)pcVar18 >> 8);
        bVar35 = (byte)pcVar18 | (byte)*puVar48;
        pbVar16 = (byte *)CONCAT31(uVar29,bVar35);
        puVar43 = puVar14 + (uint)bVar58 * -2 + 1;
        out(*puVar14,(short)puVar48);
        LOCK();
        bVar10 = *pbVar16;
        *pbVar16 = bVar35;
        UNLOCK();
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
        piVar27 = (int *)(CONCAT31(uVar29,bVar10) + -0x1b7e07);
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
        iVar19 = (int)puVar42 - *(int *)pbVar50;
        bVar10 = *(byte *)((int)puVar51 + -0x7a);
        uVar39 = (undefined2)((uint)iVar19 >> 0x10);
        *(char *)piVar27 = *(char *)piVar27 + (char)piVar27;
        bVar35 = (char)((uint)iVar19 >> 8) + bVar10 | *(byte *)((int)puVar51 + 0x17);
        *(char *)piVar27 = *(char *)piVar27 + (char)piVar27;
        uVar29 = (undefined3)(CONCAT22(uVar39,CONCAT11(bVar35,(byte)iVar19)) >> 8);
        bVar10 = (byte)iVar19 | *pbVar50;
        puVar42 = (uint *)CONCAT31(uVar29,bVar10);
        pbVar16 = (byte *)((int)piVar27 + *piVar27);
        puVar14 = puVar43;
        if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e0a;
        *(byte *)puVar42 = (byte)*puVar42 + bVar10;
        *(byte **)pbVar50 = (byte *)(*(int *)pbVar50 + (int)puVar48);
        piVar27 = (int *)CONCAT31(uVar29,bVar10 + 0x27);
        puVar42 = (uint *)CONCAT22(uVar39,CONCAT11(bVar35 + *(byte *)((int)puVar51 + -0x79),bVar10))
        ;
        *(byte *)piVar27 = (char)*piVar27 + bVar10 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar12 = (char *)CONCAT22(uVar38,CONCAT11(bVar9 | unaff_EBP[-0x62],cVar7));
  } while( true );
code_r0x00402dff:
  pbVar16 = (byte *)CONCAT22((short)((uint)piVar27 >> 0x10),
                             CONCAT11((byte)((uint)piVar27 >> 8) |
                                      *(byte *)((int)puVar48 + 0x2170411),(byte)piVar27));
  puVar14 = puVar43 + (uint)bVar58 * -2 + 1;
  out(*puVar43,(short)puVar48);
  *pbVar16 = (byte)piVar27;
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar16;
  *pbVar16 = *pbVar16 - cVar7;
  *pbVar16 = *pbVar16 + (char)pbVar16;
  bVar56 = false;
  bVar35 = (byte)((uint)puVar42 >> 8) | bRam052b0603;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar35,(char)puVar42));
  puVar43 = puVar14;
code_r0x00402e19:
  if (bVar35 == 0 || bVar56 != (char)bVar35 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar16;
  *pbVar16 = *pbVar16 + cRam89280411;
  piVar27 = (int *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                            CONCAT11((byte)((uint)pbVar16 >> 8) |
                                     *(byte *)((int)puVar48 + 0x7190411),cRam89280411));
  *(char *)piVar27 = (char)*piVar27 + cRam89280411;
  cVar6 = (char)puVar42;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | (byte)*puVar48,cVar6));
  puVar43 = (uint *)((int)puVar43 + *piVar27);
  pbVar16 = (byte *)((int)piVar27 + *piVar27);
  bVar35 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar35;
  *(byte *)puVar43 = (byte)*puVar43 + cVar6;
  bVar10 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar35;
  *(byte **)pbVar16 = unaff_EBP + (uint)CARRY1(bVar10,bVar35) + *(int *)pbVar16;
  piVar27 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),*pbVar16);
  *(byte *)puVar48 = (byte)*puVar48 + cVar6;
  puVar14 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(byte)puVar48 | (byte)*puVar48);
  pbVar16 = (byte *)((int)puVar14 + -0x43);
  *pbVar16 = *pbVar16 + (char)((uint)puVar48 >> 8);
  puVar48 = puVar14;
  puVar14 = puVar51;
  uVar54 = uVar52;
code_r0x00402e42:
  uVar52 = uStack_20;
  puVar51 = puVar14;
  uStack_20 = uVar52;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e6e;
  iVar19 = *(int *)((int)piVar27 + *piVar27);
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
  piVar27 = (int *)(iVar19 + -0x8c6f);
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | *(byte *)((int)puVar48 + -0x3f),
                                      (char)puVar48));
  pbVar15 = (byte *)((int)piVar27 + *piVar27);
  pbVar16 = pbVar15;
  puVar51 = uStackY_4c;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar15 = *pbVar15 + (char)pbVar15;
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                             CONCAT11((byte)((uint)puVar42 >> 8) | (byte)*puVar48,(char)puVar42));
  puVar14 = puVar43 + (uint)bVar58 * -2 + 1;
  out(*puVar43,(short)puVar48);
  puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(char)puVar48 + (byte)*puVar51);
  puVar43 = puVar14 + (uint)bVar58 * -2 + 1;
  out(*puVar14,(short)puVar48);
  uVar54 = uVar52;
  uStack_20 = uVar53;
code_r0x00402e6e:
  uVar52 = uVar54;
  uVar29 = (undefined3)((uint)puVar48 >> 8);
  cVar6 = (char)puVar48 + (byte)*puVar51;
  puVar14 = puVar43 + (uint)bVar58 * -2 + 1;
  out(*puVar43,(short)CONCAT31(uVar29,cVar6));
  puVar48 = (uint *)CONCAT31(uVar29,cVar6 + (byte)*puVar51);
  puVar43 = puVar14 + (uint)bVar58 * -2 + 1;
  out(*puVar14,(short)puVar48);
  pbVar16 = (byte *)0x0;
  puVar14 = puVar51;
code_r0x00402e81:
  puVar51 = puVar14;
  bVar35 = (char)pbVar16 - *pbVar16;
  iVar19 = CONCAT31((int3)((uint)pbVar16 >> 8),bVar35);
  *pbVar50 = *pbVar50 + (char)puVar48;
  pbVar15 = (byte *)(iVar19 * 2);
  *pbVar15 = *pbVar15 ^ bVar35;
  pbVar15 = (byte *)(int)(short)iVar19;
  *pbVar15 = *pbVar15 + bVar35;
  *(byte *)puVar51 = (byte)*puVar51 + (byte)puVar42;
  bVar10 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar35;
  *(byte **)(pbVar50 + -0x73) =
       (byte *)((int)puVar43 + (uint)CARRY1(bVar10,bVar35) + *(int *)(pbVar50 + -0x73));
  *pbVar15 = *pbVar15 + bVar35;
  bVar10 = (byte)puVar42 | (byte)*puVar48;
  puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar10);
  puVar14 = puVar43;
  if ((char)bVar10 < '\x01') goto code_r0x00402eb4;
  *pbVar15 = *pbVar15 + bVar35;
  pbVar16 = (byte *)CONCAT31((int3)(char)((uint)pbVar16 >> 8),bVar35 + 0x2d);
  puVar43[(int)puVar51 * 2] =
       (uint)((int)puVar48 + (uint)(0xd2 < bVar35) + puVar43[(int)puVar51 * 2]);
  pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
  do {
    uVar17 = *puVar43;
    bVar10 = (byte)pbVar16;
    *(byte *)puVar43 = (byte)*puVar43 + bVar10;
    if (!CARRY1((byte)uVar17,bVar10)) break;
    *pbVar16 = *pbVar16 + bVar10;
    bVar10 = bVar10 | pbVar16[0x400001a];
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10);
    if ((char)bVar10 < '\x01') {
code_r0x00402ecc:
      *pbVar15 = *pbVar15 + (byte)pbVar15;
      uVar29 = (undefined3)((uint)pbVar15 >> 8);
      bVar10 = (byte)pbVar15 | pbVar15[0x400001b];
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      if ((char)bVar10 < '\x01') {
        uVar17 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar42;
        *(char *)((int)pcVar18 * 2) =
             *(char *)((int)pcVar18 * 2) - CARRY1((byte)uVar17,(byte)puVar42);
        bVar56 = 0x81 < bVar10;
        bVar10 = bVar10 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar15 = *pbVar15 + bVar10;
      puVar14 = puVar43;
code_r0x00402eb4:
      uVar29 = (undefined3)((uint)pbVar15 >> 8);
      bVar10 = (char)pbVar15 + 0x6f;
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      *(byte **)pcVar18 = pbStackY_68;
      uVar17 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
      pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
      uVar55 = uVar53;
      if ((byte)*puVar48 != 0 && SCARRY1((byte)uVar17,(char)puVar42) == (char)(byte)*puVar48 < '\0')
      {
        *pcVar18 = *pcVar18 + bVar10;
        bVar35 = (char)pbVar15 + 0x9c;
        pbVar15 = (byte *)CONCAT31(uVar29,bVar35);
        puVar14[(int)puVar51 * 2] =
             (uint)((int)puVar48 + (uint)(0xd2 < bVar10) + puVar14[(int)puVar51 * 2]);
        pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
        uVar17 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + bVar35;
        puVar43 = puVar14;
        if (CARRY1((byte)uVar17,bVar35)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar43 = puVar14 + (uint)bVar58 * -2 + 1;
      out(*puVar14,(short)puVar48);
    }
    cVar6 = (char)pcVar18;
    *pcVar18 = *pcVar18 + cVar6;
    uVar29 = (undefined3)((uint)pcVar18 >> 8);
    bVar10 = cVar6 + 0x6f;
    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
    *(byte **)pcVar18 = pbStackY_68;
    uVar17 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar42;
    pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
    *(byte *)(puVar43 + 7) = ((byte)puVar43[7] - bVar9) - CARRY1((byte)uVar17,(byte)puVar42);
    *pcVar18 = *pcVar18 + bVar10;
    bVar35 = cVar6 + 0x9c;
    pcVar18 = (char *)CONCAT31(uVar29,bVar35);
    puVar43[(int)puVar51 * 2] =
         (uint)((int)puVar48 + (uint)(0xd2 < bVar10) + puVar43[(int)puVar51 * 2]);
    uVar17 = *puVar43;
    *(byte *)puVar43 = (byte)*puVar43 + bVar35;
    if (!CARRY1((byte)uVar17,bVar35)) goto code_r0x00402e7e;
    *pcVar18 = *pcVar18 + bVar35;
    bVar35 = bVar35 | pcVar18[0x400001c];
    pbVar16 = (byte *)CONCAT31(uVar29,bVar35);
    uStack_20 = uVar53;
    if ((char)bVar35 < '\x01') goto code_r0x00402f16;
    *pbVar16 = *pbVar16 + bVar35;
    pcVar18 = (char *)CONCAT31(uVar29,bVar35 + 0x6f);
    while( true ) {
      *(byte **)pcVar18 = pbStackY_68;
      uVar17 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar42;
      *(uint *)((int)puVar43 + 0x1d) =
           (*(int *)((int)puVar43 + 0x1d) - (int)puVar51) - (uint)CARRY1((byte)uVar17,(byte)puVar42)
      ;
      bVar10 = (byte)pcVar18;
      *pcVar18 = *pcVar18 + bVar10;
      bVar35 = bVar10 + 0x2d;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar35);
      puVar43[(int)puVar51 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar10) + puVar43[(int)puVar51 * 2]);
      pbStackY_68 = (byte *)CONCAT22((short)((uint)pbStackY_68 >> 0x10),uVar53);
      uVar17 = *puVar43;
      *(byte *)puVar43 = (byte)*puVar43 + bVar35;
      if (!CARRY1((byte)uVar17,bVar35)) break;
      *pbVar16 = *pbVar16 + bVar35;
code_r0x00402f16:
      bVar10 = (byte)pbVar16 | pbVar16[0x400001d];
      puVar14 = (uint *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10);
      pbVar16 = unaff_EBP;
      if ((char)bVar10 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar16;
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        uVar29 = (undefined3)((uint)puVar14 >> 8);
        cVar6 = (char)puVar14 + 'o';
        puVar45 = (uint *)CONCAT31(uVar29,cVar6);
        *puVar45 = (uint)pbStackY_68;
        cVar47 = (char)puVar42;
        *(byte *)puVar48 = (byte)*puVar48 + cVar47;
        pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
        bVar10 = (byte)((uint)puVar48 >> 8);
        bVar56 = bVar10 < (byte)*puVar43;
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                   CONCAT11(bVar10 - (byte)*puVar43,(char)puVar48));
        if (bVar56) break;
        bVar56 = CARRY4((uint)puVar45,*puVar45);
        puVar14 = (uint *)((int)puVar45 + *puVar45);
        if (!SCARRY4((int)puVar45,*puVar45)) {
          bVar56 = CARRY4((uint)unaff_EBP,*puVar14);
          unaff_EBP = unaff_EBP + *puVar14;
        }
        *puVar14 = (*puVar14 - (int)puVar14) - (uint)bVar56;
        *(byte *)puVar48 = (byte)*puVar48 + cVar47;
        puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                   CONCAT11((char)((uint)puVar42 >> 8) + (byte)*puVar48,
                                            cVar47 - (byte)*puVar48));
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
code_r0x00402f3b:
        cVar47 = (char)puVar48;
        *pbVar50 = *pbVar50 + cVar47;
        bVar10 = (byte)puVar14;
        *(byte *)((int)puVar14 * 2) = *(byte *)((int)puVar14 * 2) ^ bVar10;
        *(byte *)puVar14 = (byte)*puVar14 + bVar10;
        *(byte *)puVar14 = (byte)*puVar14 + cVar47;
        uVar17 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + bVar10;
        *puVar48 = (uint)((int)puVar14 + (uint)CARRY1((byte)uVar17,bVar10) + *puVar48);
        pcVar18 = (char *)((uint)puVar14 | *puVar51);
        uVar29 = (undefined3)((uint)pcVar18 >> 8);
        cVar6 = (char)pcVar18 + *pcVar18;
        pcVar18 = (char *)CONCAT31(uVar29,cVar6);
        *pcVar18 = *pcVar18 + cVar6;
        cVar6 = cVar6 + *pcVar18;
        piVar27 = (int *)CONCAT31(uVar29,cVar6);
        *(char *)piVar27 = (char)*piVar27 + cVar6;
        iVar19 = LocalDescriptorTableRegister();
        *piVar27 = iVar19;
        bVar10 = *pbVar50;
        bVar36 = (byte)((uint)puVar42 >> 8);
        *pbVar50 = *pbVar50 + bVar36;
        iVar19 = *piVar27;
        uVar39 = (undefined2)((uint)puVar42 >> 0x10);
        bVar40 = (byte)puVar42;
        *(byte *)puVar43 = (byte)*puVar43 + cVar6;
        puVar14 = puVar43 + (uint)bVar58 * -2 + 1;
        out(*puVar43,(short)puVar48);
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        bVar35 = *pbVar50;
        *(byte *)puVar48 = (byte)*puVar48 - bVar9;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        puVar45 = puVar14 + (uint)bVar58 * -2 + 1;
        out(*puVar14,(short)puVar48);
        *(byte *)puVar45 = (byte)*puVar45 + cVar6;
        bVar8 = *pbVar50;
        *(uint *)((int)puVar48 + -0x23) = *(uint *)((int)puVar48 + -0x23) & (uint)puVar45;
        puVar28 = (ushort *)((int)piVar27 + *piVar27);
        if (!SCARRY4((int)piVar27,*piVar27)) {
          *puVar28 = uVar55;
        }
        *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
        uVar41 = CONCAT11((char)((uint)puVar48 >> 8) + *(byte *)((int)puVar48 + -0x15),cVar47);
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),uVar41);
        puVar14 = (uint *)((int)puVar28 + *(int *)puVar28);
        if (!SCARRY4((int)puVar28,*(int *)puVar28)) {
          *(ushort *)puVar14 = uVar55;
        }
        cVar6 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        cVar11 = ((bVar36 - (char)iVar19) - CARRY1(bVar10,bVar36) | bVar35 | bVar8) + (byte)*puVar14
        ;
        puVar42 = (uint *)CONCAT22(uVar39,CONCAT11(cVar11,bVar40));
        uVar17 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + bVar40;
        if (CARRY1((byte)uVar17,bVar40)) {
          *(byte *)puVar14 = (byte)*puVar14 + cVar6;
          bVar10 = *(byte *)((int)puVar48 + 6);
          *(byte *)puVar48 = (byte)*puVar48 + bVar40;
          bVar35 = (cVar11 - (byte)*puVar45) + cRam14730307;
          *(byte *)puVar14 = (byte)*puVar14 + cVar6;
          bVar10 = bVar9 | bVar10 | *(byte *)((int)puVar48 + 0x2a);
          uVar17 = *puVar14;
          pbVar50 = (byte *)((int)puVar14 + (uint)CARRY1(bVar35,(byte)*puVar14) + *puVar14);
          *(byte *)puVar48 = (byte)*puVar48 + bVar40;
          cVar6 = cVar7 - (byte)*puVar45;
          cVar7 = bVar10 + *(char *)(CONCAT31((int3)(CONCAT22(uVar38,CONCAT11(bVar10,cVar7)) >> 8),
                                              cVar6) + 0x1e);
          *pbVar50 = *pbVar50 + (char)pbVar50;
          uVar29 = (undefined3)((uint)pbVar50 >> 8);
          bVar10 = (char)pbVar50 + 0x2aU & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar7,cVar6)) + 0x1f);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar7,cVar6)) + 0x20);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar7,cVar6)) + 0x21);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar7,cVar6)) + 0x22);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          bVar35 = bVar35 + (byte)uVar17 + *pcVar18;
          uVar34 = CONCAT22(uVar39,CONCAT11(bVar35,bVar40));
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar38,CONCAT11(cVar7,cVar6)) + 0x25);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          pcVar12 = (char *)CONCAT22(uVar38,CONCAT11(cVar7 + *(char *)(CONCAT22(uVar38,CONCAT11(
                                                  cVar7,cVar6)) + 0x26),cVar6));
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          cVar6 = bVar10 + 0x2a;
          pcVar18 = (char *)CONCAT31(uVar29,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar18 = *pcVar18 + cVar6;
            pbVar50 = (byte *)(CONCAT31(uVar29,bVar10 + 0x4f) + -0x33282610);
            bVar10 = *pbVar50;
            bVar8 = (byte)pbVar50;
            *pbVar50 = *pbVar50 + bVar8;
            uVar29 = (undefined3)((uint)pbVar50 >> 8);
            if (!CARRY1(bVar10,bVar8)) {
              if (!SCARRY1(bVar8,'\0')) {
                *pbVar50 = *pbVar50 + bVar8;
                uVar34 = CONCAT22(uVar39,CONCAT11(bVar35 | (byte)*puVar48,bVar40));
                bVar8 = bVar8 & (byte)*puVar48;
                *(char *)CONCAT31(uVar29,bVar8) = *(char *)CONCAT31(uVar29,bVar8) + bVar8;
                pcVar18 = (char *)CONCAT31(uVar29,bVar8 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar18 = (char *)CONCAT31(uVar29,bVar8 + *pcVar12);
              if (SCARRY1(bVar8,*pcVar12) != (char)(bVar8 + *pcVar12) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar10 = bVar8 + *pcVar12;
            pbVar50 = (byte *)CONCAT31(uVar29,bVar10);
            if (SCARRY1(bVar8,*pcVar12) == (char)bVar10 < '\0') {
              pcVar18 = (char *)CONCAT22(uVar39,CONCAT11(bVar35 | (byte)*puVar48,bVar40));
              *pcVar12 = *pcVar12 + cVar47;
              *(byte *)puVar48 = (byte)*puVar48 ^ bVar10;
              *(char *)((int)pbVar50 * 2) = *(char *)((int)pbVar50 * 2) + bVar10;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar18 = *pcVar18 + (char)pcVar18;
            uVar29 = (undefined3)((uint)pcVar18 >> 8);
            bVar10 = (char)pcVar18 + 0x2aU & (byte)*puVar48;
            *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
            pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
            *pcVar18 = *pcVar18 + bVar10 + 0x2a;
            pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x54 & (byte)*puVar48);
code_r0x00403072:
            cVar6 = (char)pcVar18;
            *pcVar18 = *pcVar18 + cVar6;
            uVar29 = (undefined3)((uint)pcVar18 >> 8);
            pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '*');
            *pcVar18 = *pcVar18 + cVar6 + '*';
            bVar10 = cVar6 + 0x54U & (byte)*puVar48;
            *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
            pcStackY_a0 = (char *)CONCAT22(pcStackY_a0._2_2_,uVar52);
            uVar34 = CONCAT22((short)((uint)uVar34 >> 0x10),
                              CONCAT11((char)((uint)uVar34 >> 8) +
                                       *(char *)CONCAT31(uVar29,bVar10 + 0x2a),(char)uVar34));
            *(byte *)(puVar45 + 0x828000) = (byte)puVar45[0x828000] - cVar47;
            pcVar18 = pcStackY_a0;
code_r0x0040309a:
            cVar6 = (char)pcVar18;
            *pcVar18 = *pcVar18 + cVar6;
            pcStackY_a0 = (char *)CONCAT22(pcStackY_a0._2_2_,uVar53);
            *pcVar18 = *pcVar18 + cVar6;
            pbVar50 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6 + 0x2aU & (byte)*puVar48);
          }
          cVar6 = (char)pbVar50;
          *pbVar50 = *pbVar50 + cVar6;
          uVar29 = (undefined3)((uint)pbVar50 >> 8);
          cVar7 = cVar6 + '*';
          pcVar18 = (char *)CONCAT31(uVar29,cVar7);
          *(byte *)(puVar45 + 0x828000) = (byte)puVar45[0x828000] - cVar47;
          *pcVar18 = *pcVar18 + cVar7;
          cVar11 = (char)pcStackY_a0 - (byte)*puVar45;
          pcVar12 = (char *)CONCAT22((short)((uint)pcStackY_a0 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_a0 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_a0 >> 8),
                                                                 cVar11) + 0x34),cVar11));
          *pcVar18 = *pcVar18 + cVar7;
          bVar10 = cVar6 + 0x54U & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pbVar50 = (byte *)CONCAT31(uVar29,bVar10 + 0x2a);
          bVar10 = (byte)((uint)uVar34 >> 8);
          pcVar18 = (char *)CONCAT22((short)((uint)uVar34 >> 0x10),
                                     CONCAT11(bVar10 + *pbVar50,(char)uVar34));
          pbVar50 = pbVar50 + (uint)CARRY1(bVar10,*pbVar50) + *(int *)pbVar50;
          *(byte *)puVar48 = (byte)*puVar48 + (char)uVar34;
          uVar29 = (undefined3)((uint)pbVar50 >> 8);
          cVar6 = (byte)pbVar50 - *pbVar50;
          piVar27 = (int *)CONCAT31(uVar29,cVar6);
          puVar45 = (uint *)((int)puVar45 + (uint)((byte)pbVar50 < *pbVar50) + *piVar27);
          cVar6 = cVar6 + (char)*piVar27;
          pbVar50 = (byte *)CONCAT31(uVar29,cVar6);
          *pbVar50 = *pbVar50 + cVar6;
code_r0x004030df:
          *pcVar18 = *pcVar18 + cVar47;
          bVar10 = *pbVar50;
          bVar35 = (byte)pbVar50;
          *pbVar50 = *pbVar50 + bVar35;
          *(byte **)(pcVar12 + -0x41) =
               (byte *)((int)puVar45 + (uint)CARRY1(bVar10,bVar35) + *(int *)(pcVar12 + -0x41));
          *pbVar50 = *pbVar50 + bVar35;
          uVar29 = (undefined3)((uint)pbVar50 >> 8);
          bVar35 = bVar35 | (byte)*puVar45;
          *(char *)CONCAT31(uVar29,bVar35) = *(char *)CONCAT31(uVar29,bVar35) + bVar35;
          pcVar18 = (char *)CONCAT31(uVar29,bVar35 + 0x7b);
          *pcVar18 = *pcVar18 + bVar35 + 0x7b;
          pbVar50 = (byte *)((int)puVar45 + CONCAT31(uVar29,bVar35 - 8) + -1);
          *pbVar50 = *pbVar50 + (bVar35 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar43 = puVar45 + (uint)bVar58 * -2 + 1;
        out(*puVar45,uVar41);
        pbVar16 = unaff_EBP + 1;
        pbStackY_68 = unaff_EBP;
      }
      bVar10 = cVar6 - bVar56;
      pbVar16 = (byte *)((int)puVar43 + (int)puVar51 * 2);
      bVar56 = CARRY1(*pbVar16,bVar10);
      *pbVar16 = *pbVar16 + bVar10;
code_r0x00402ef9:
      pcVar18 = (char *)CONCAT31(uVar29,bVar10 - bVar56);
      pbVar16 = (byte *)((int)puVar51 + (int)unaff_EBP * 2);
      *pbVar16 = *pbVar16 + (bVar10 - bVar56);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar42 = (byte)*puVar42 + (char)puVar48;
  puVar14 = puVar48 + 0x2828000;
  bVar10 = (byte)puVar42;
  bVar56 = (byte)*puVar14 < bVar10;
  *(byte *)puVar14 = (byte)*puVar14 - bVar10;
  bVar10 = (byte)pbVar16 + *pbVar16;
  piVar27 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10 + bVar56);
  puVar14 = puVar51;
  uVar54 = uVar52;
  if (CARRY1((byte)pbVar16,*pbVar16) || CARRY1(bVar10,bVar56)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar18 = *pcVar18 + bVar35;
  uVar54 = uVar52;
  uStack_20 = uVar53;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  pbVar15 = (byte *)CONCAT22(uVar38,CONCAT11(cVar47 + unaff_EBP[(int)pcVar18 * 4],uVar32));
  pbVar50[(int)pcVar18] = pbVar50[(int)pcVar18] + bVar35;
  goto code_r0x0040254a;
}


