/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004020cd
 * Raw Name    : set_SettingsList
 * Demangled   : set_SettingsList
 * Prototype   : void set_SettingsList(undefined4 value, byte * param_2)
 * Local Vars  : uStack_1c, uStack_14, uVar1, pcVar2, uVar3, uVar4, uVar5, cVar6, bVar7, bVar8, bVar9, bVar10, cVar11, param_2, cVar12, in_EAX, pcVar13, iVar14, puVar15, pbVar16, value, uVar17, pcVar18, iVar19, pbVar20, pbVar21, uVar22, uVar23, puVar24, piVar25, pcVar26, piVar27, puVar28, uVar29, uVar30, iVar31, uVar32, extraout_ECX, extraout_ECX_00, extraout_ECX_01, extraout_ECX_02, uVar33, bVar34, cVar35, uVar36, uVar37, bVar38, uVar39, pbVar40, puVar41, puVar42, pbVar43, puVar44, uVar45, unaff_EBX, pbVar46, cVar47, unaff_EBP, puVar48, puVar49, unaff_EDI, pbVar50, puVar51, in_ES, uVar52, uVar53, in_CS, uVar54, in_SS, uVar55, in_GS_OFFSET, bVar56, in_AF, bVar57, in_TF, in_IF, bVar58, bVar59, in_NT, uVar60, unaff_retaddr, in_stack_ffffffcc, in_stack_ffffffd4, pcStackY_a0, pbStackY_68, puStackY_54, puStackY_50, uStackY_4c, uStack_24, uStack_20, uStack_1d
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall set_SettingsList(undefined4 value,byte *param_2)

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
  char cVar11;
  char cVar12;
  undefined4 in_EAX;
  undefined3 uVar29;
  char *pcVar13;
  int iVar14;
  uint *puVar15;
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
  byte bVar34;
  undefined2 uVar36;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  char cVar35;
  undefined2 uVar37;
  undefined4 uVar33;
  byte bVar38;
  undefined2 uVar39;
  byte *pbVar40;
  uint *puVar41;
  uint *puVar42;
  byte *pbVar43;
  undefined3 uVar45;
  uint *puVar44;
  char cVar47;
  char *unaff_EBX;
  byte *pbVar46;
  byte *unaff_EBP;
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
  if (SCARRY1((char)in_EAX,*unaff_EBX) != cVar6 < '\0') {
    *pcVar18 = *pcVar18 + cVar6;
    pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '*');
    unaff_EBX = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[9],
                                          (char)unaff_EBX));
  }
  *pcVar18 = *pcVar18 + (char)pcVar18;
  uVar29 = (undefined3)((uint)pcVar18 >> 8);
  bVar7 = (char)pcVar18 + 0x2aU & *param_2;
  iVar19 = *(int *)(unaff_EBP + 9);
  *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
  pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x2a);
  uVar37 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar32 = SUB41(unaff_EBX,0);
  cVar47 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[6];
  *pcVar18 = *pcVar18 + bVar7 + 0x2a;
  pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x57);
  pbVar40 = param_2 + *unaff_retaddr;
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar47,uVar32)) + 6);
  *pcVar18 = *pcVar18 + bVar7 + 0x57;
  cVar6 = bVar7 - 0x3a;
  pcVar18 = (char *)CONCAT31(uVar29,cVar6);
  *pcVar18 = *pcVar18 + cVar6;
  bVar10 = *pbVar40;
  uVar36 = (undefined2)((uint)value >> 0x10);
  bVar38 = (byte)value;
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar47,uVar32)) + 10);
  *pcVar18 = *pcVar18 + cVar6;
  bVar8 = bVar7 - 0x10 & *pbVar40;
  pbVar50 = (byte *)(unaff_EDI + iVar19 + *(int *)(unaff_EBP + 10));
  *(char *)CONCAT31(uVar29,bVar8) = *(char *)CONCAT31(uVar29,bVar8) + bVar8;
  bVar9 = bVar8 + 0x2a;
  pcVar18 = (char *)CONCAT31(uVar29,bVar9);
  bVar7 = pbVar50[0x17];
  *pcVar18 = *pcVar18 + bVar9;
  bVar7 = ((byte)((uint)value >> 8) | bVar10) + bVar7 | *pbVar40;
  pcVar26 = (char *)CONCAT22(uVar36,CONCAT11(bVar7,bVar38));
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar47,uVar32)) + 0x4e);
  *pcVar18 = *pcVar18 + bVar9;
  pcVar18 = (char *)CONCAT31(uVar29,bVar8 + 0x52);
  *pcVar18 = (*pcVar18 - (bVar8 + 0x52)) - (0xd7 < bVar9);
  *pbVar40 = *pbVar40 + bVar38;
  bVar10 = bVar8 + 0x45;
  cVar47 = cVar47 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar47,uVar32)) + 0x4f);
  iVar19 = CONCAT22(uVar37,CONCAT11(cVar47,uVar32));
  *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
  pcVar18 = (char *)CONCAT31(uVar29,bVar8 + 0x6d);
  *pcVar18 = (*pcVar18 - (bVar8 + 0x6d)) - (0xd7 < bVar10);
  *pbVar40 = *pbVar40 + bVar38;
  pcVar13 = pcVar18 + -0x6b721c;
  pcVar18 = pcVar18 + -0x6b721a;
  cVar6 = (char)((uint)pbVar40 >> 8);
  *pcVar18 = *pcVar18 + cVar6;
  bVar10 = (byte)pbVar40;
  if ((POPCOUNT(*pcVar18) & 1U) == 0) {
    cVar11 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar11;
    uVar29 = (undefined3)((uint)pcVar13 >> 8);
    bVar8 = cVar11 + 2;
    pcVar18 = (char *)CONCAT31(uVar29,bVar8);
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *pcVar18 = *pcVar18 + bVar8;
      piVar27 = (int *)CONCAT31(uVar29,cVar11 + '*');
      *piVar27 = (*piVar27 - (int)piVar27) - (uint)(0xd7 < bVar8);
      bVar8 = *pbVar40;
      *pbVar40 = *pbVar40 + bVar38;
      out(*unaff_retaddr,(short)pbVar40);
      cVar11 = ((cVar11 + '*') - (char)*piVar27) - CARRY1(bVar8,bVar38);
      piVar27 = (int *)CONCAT31(uVar29,cVar11);
      *pbVar40 = *pbVar40 + bVar38;
      bVar8 = cVar47 - *(byte *)((int)unaff_retaddr + 0x1f);
      iVar19 = CONCAT22(uVar37,CONCAT11(bVar8,uVar32));
      *(char *)piVar27 = (char)*piVar27 + cVar11;
      pcVar26 = (char *)CONCAT22(uVar36,CONCAT11(bVar7 | *pbVar40,bVar38));
      unaff_retaddr = (uint *)((int)unaff_retaddr + (4 - *piVar27));
      *(undefined4 *)CONCAT31(uVar29,cVar11) = 0x10000;
      *pcVar26 = *pcVar26 + bVar10;
      bVar7 = cVar11 + *pbVar40;
      pcVar18 = (char *)CONCAT31(uVar29,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pcVar18 = *pcVar18 + bVar7;
        cVar47 = (bVar7 + 0x6f) - (0x90 < bVar7);
        pcVar18 = (char *)CONCAT31(uVar29,cVar47);
        bVar7 = *pbVar40;
        *pbVar40 = *pbVar40 + bVar38;
        if (SCARRY1(bVar7,bVar38) == (char)*pbVar40 < '\0') {
          *pcVar18 = *pcVar18 + cVar47;
          out(*unaff_retaddr,(short)pbVar40);
          unaff_retaddr = unaff_retaddr + 1;
        }
      }
      else {
        *pcVar18 = *pcVar18 + bVar7;
        iVar19 = CONCAT22(uVar37,CONCAT11(bVar8 | unaff_EBP[6],uVar32));
      }
      *pcVar18 = *pcVar18 + (char)pcVar18;
      bVar56 = bRam6f060000 < bVar10;
      bRam6f060000 = bRam6f060000 - bVar10;
      iVar14 = (CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x02') + -0xa0a0000) -
               (uint)bVar56;
      bVar7 = (byte)iVar14;
      bVar56 = CARRY1(bVar7,(byte)*unaff_retaddr);
      uVar29 = (undefined3)((uint)iVar14 >> 8);
      cVar47 = bVar7 + (byte)*unaff_retaddr;
      pcVar13 = (char *)CONCAT31(uVar29,cVar47);
      if (bVar56) {
        *pcVar13 = *pcVar13 + cVar47;
        iVar19 = CONCAT22((short)((uint)iVar19 >> 0x10),
                          CONCAT11((byte)((uint)iVar19 >> 8) | unaff_EBP[7],(char)iVar19));
        *pcVar13 = *pcVar13 + cVar47;
        goto code_r0x00402188;
      }
      pcVar18 = (char *)CONCAT31(uVar29,cVar47 + -2 + bVar56);
      uStack_14 = in_ES;
    }
  }
  else {
code_r0x00402188:
    cVar47 = (char)pcVar13 + '\x02';
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar47);
    iVar19 = CONCAT22((short)((uint)iVar19 >> 0x10),
                      CONCAT11((char)((uint)iVar19 >> 8) + *(char *)(iVar19 + 4),(char)iVar19));
    *pcVar18 = *pcVar18 + cVar47;
  }
  uVar29 = (undefined3)((uint)pcVar18 >> 8);
  bVar7 = (byte)pcVar18 + 0x2d;
  bVar8 = 9 < (bVar7 & 0xf) | in_AF;
  bVar7 = bVar7 + bVar8 * -6;
  cVar47 = bVar7 + (0x9f < bVar7 | 0xd2 < (byte)pcVar18 | bVar8 * (bVar7 < 6)) * -0x60;
  uVar36 = (undefined2)((uint)iVar19 >> 0x10);
  cVar11 = (char)((uint)iVar19 >> 8) + *(char *)(iVar19 + 7);
  pbVar20 = (byte *)CONCAT22(uVar36,CONCAT11(cVar11,(char)iVar19));
  *(char *)CONCAT31(uVar29,cVar47) = *(char *)CONCAT31(uVar29,cVar47) + cVar47;
  bVar9 = cVar47 + 0x7e;
  pbVar16 = (byte *)CONCAT31(uVar29,bVar9);
  pbVar46 = unaff_EBP + 0x6fe1411;
  bVar7 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar9;
  *pbVar16 = (*pbVar16 - bVar9) - CARRY1(bVar7,bVar9);
  bVar56 = CARRY1((byte)*unaff_retaddr,bVar9);
  uVar17 = *unaff_retaddr;
  *(byte *)unaff_retaddr = (byte)*unaff_retaddr + bVar9;
  bVar7 = (byte)((uint)pcVar26 >> 8);
  if (bVar56) {
    *pbVar16 = *pbVar16 + bVar9;
    bVar9 = bVar9 | pbVar16[0x400000c];
    puVar15 = (uint *)CONCAT31(uVar29,bVar9);
    if ((char)bVar9 < '\x01') {
code_r0x004021be:
      pcVar26 = (char *)CONCAT22((short)((uint)pcVar26 >> 0x10),
                                 CONCAT11(bVar7 | *pbVar20,(char)pcVar26));
      puVar15 = (uint *)((int)puVar15 + -0x77b02);
      pbVar46 = (byte *)((int)unaff_retaddr + (int)pbVar50 * 2);
      *pbVar46 = *pbVar46 + (char)puVar15;
      pbVar16 = (byte *)((uint)puVar15 | *puVar15);
      bVar7 = (byte)pbVar16;
      unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar7;
      bVar56 = CARRY1(*pbVar16,bVar7);
      *pbVar16 = *pbVar16 + bVar7;
      in_SS = uStack_14;
      goto code_r0x004021d4;
    }
    *(byte *)puVar15 = (char)*puVar15 + bVar9;
    cVar47 = bVar9 + 0x28;
    puVar15 = (uint *)CONCAT31(uVar29,cVar47);
    *puVar15 = (uint)(*puVar15 + (int)puVar15);
    bVar9 = *pbVar20;
    *pbVar20 = *pbVar20 + bVar7;
    if (CARRY1(bVar9,bVar7)) {
      *(char *)puVar15 = (char)*puVar15 + cVar47;
      goto code_r0x004021be;
    }
    pbVar46 = (byte *)((int)unaff_retaddr + (int)pbVar50 * 2);
    *pbVar46 = *pbVar46 + cVar47;
    pbVar16 = (byte *)((uint)puVar15 | *puVar15);
    pbVar16[(int)unaff_EBP] = pbVar16[(int)unaff_EBP] + (char)pbVar16;
code_r0x004021e5:
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    bVar7 = *pbVar20;
    bVar9 = (byte)((uint)pcVar26 >> 8);
    *pbVar20 = *pbVar20 + bVar9;
    if (!CARRY1(bVar7,bVar9)) goto code_r0x0040220c;
    *pbVar16 = *pbVar16 + (char)pbVar16;
    pcVar26 = (char *)CONCAT22((short)((uint)pcVar26 >> 0x10),
                               CONCAT11(bVar9 | *pbVar16,(char)pcVar26));
code_r0x004021f1:
    *(byte *)unaff_retaddr = (byte)*unaff_retaddr + (char)pbVar16;
  }
  else {
    if ((byte)*unaff_retaddr != 0 &&
        SCARRY1((byte)uVar17,bVar9) == (char)(byte)*unaff_retaddr < '\0') {
      *pbVar16 = *pbVar16 + bVar9;
      puVar15 = (uint *)CONCAT31(uVar29,cVar47 + -0x55);
      unaff_retaddr[(int)pbVar50 * 2] =
           (uint)(pbVar40 + (uint)(0xd2 < bVar9) + unaff_retaddr[(int)pbVar50 * 2]);
      goto code_r0x004021be;
    }
code_r0x004021d4:
    if (bVar56) {
      *pbVar16 = *pbVar16 + (byte)pbVar16;
      uVar29 = (undefined3)((uint)pbVar16 >> 8);
      bVar7 = (byte)pbVar16 | pbVar16[0x400000b];
      pbVar16 = (byte *)CONCAT31(uVar29,bVar7);
      if ('\0' < (char)bVar7) {
        *pbVar16 = *pbVar16 + bVar7;
        pbVar16 = (byte *)CONCAT31(uVar29,bVar7 + 0x28);
        goto code_r0x004021e5;
      }
      *pbVar40 = *pbVar40 + (char)pcVar26;
      *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) - (char)pcVar26;
      goto code_r0x004021f1;
    }
  }
  pbVar20 = (byte *)CONCAT22(uVar36,CONCAT11(cVar11 + pbVar20[6],(char)iVar19));
  *pbVar16 = *pbVar16 + (char)pbVar16;
  uVar29 = (undefined3)((uint)pbVar16 >> 8);
  bVar9 = (char)pbVar16 + 0x6f;
  bVar7 = *(byte *)CONCAT31(uVar29,bVar9);
  *pbVar40 = *pbVar40 + (char)pcVar26;
  cVar47 = (bVar9 & bVar7) + *pbVar50;
  pbVar16 = (byte *)CONCAT31(uVar29,cVar47);
  *pcVar26 = *pcVar26 - cVar6;
  *pbVar16 = *pbVar16 + cVar47;
  *pcVar26 = *pcVar26 - bVar10;
  *pbVar16 = *pbVar16 + cVar47;
code_r0x0040220c:
  uStack_1c = CONCAT22(uStack_1c._2_2_,in_SS);
  bVar7 = (byte)pbVar16 | 0xde;
  cVar6 = bVar7 + 2;
  uVar29 = (undefined3)((uint)pbVar16 >> 8);
  pcVar18 = (char *)CONCAT31(uVar29,cVar6);
  if ((POPCOUNT(cVar6) & 1U) == 0) {
    *pcVar18 = *pcVar18 + cVar6;
    bVar7 = bVar7 + 0x71;
    pcVar18 = (char *)CONCAT31(uVar29,bVar7 & *(byte *)CONCAT31(uVar29,bVar7));
  }
  cVar6 = (char)pcVar26;
  *pbVar40 = *pbVar40 + cVar6;
  uVar29 = (undefined3)((uint)pbVar40 >> 8);
  bVar10 = bVar10 + *pbVar50;
  puVar41 = (uint *)CONCAT31(uVar29,bVar10);
  *(byte *)unaff_retaddr = (byte)*unaff_retaddr - cVar6;
  *pcVar18 = *pcVar18 + (char)pcVar18;
  cVar6 = cVar6 - *pcVar18;
  pcVar13 = (char *)CONCAT31((int3)((uint)pcVar26 >> 8),cVar6);
  bVar9 = (char)pcVar18 - *pcVar18;
  pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar9);
  *(byte **)pbVar40 = (byte *)(*(int *)pbVar40 + (int)puVar41);
  *pbVar40 = *pbVar40 + bVar9;
  bVar7 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar9;
  *(byte **)pbVar40 = pbVar40 + (uint)CARRY1(bVar7,bVar9) + *(int *)pbVar40;
  *pcVar13 = *pcVar13 + bVar9;
  bVar7 = (byte)((uint)pcVar26 >> 8);
  uVar36 = (undefined2)((uint)pcVar26 >> 0x10);
  bVar9 = bVar7 + *pbVar40;
  puVar15 = (uint *)CONCAT22(uVar36,CONCAT11(bVar9,cVar6));
  pbVar40 = pbVar40 + (uint)CARRY1(bVar7,*pbVar40) + *(int *)pbVar40;
  *(byte *)puVar41 = (byte)*puVar41 + cVar6;
  uVar45 = (undefined3)((uint)pbVar20 >> 8);
  cVar47 = (char)pbVar20 - *(byte *)((int)unaff_retaddr + 2);
  pbVar46 = (byte *)CONCAT31(uVar45,cVar47);
  bVar7 = (byte)pbVar40;
  uVar30 = (uint3)((uint)pbVar40 >> 8);
  uVar55 = in_ES;
  if ((POPCOUNT(cVar47) & 1U) == 0) {
    *pbVar40 = *pbVar40 + bVar7;
    bVar7 = bVar7 | *pbVar46;
    piVar27 = (int *)CONCAT31(uVar30,bVar7);
    if (bVar7 == 0) {
      *(char *)piVar27 = (char)*piVar27;
      puVar48 = unaff_retaddr + 1;
      out(*unaff_retaddr,(short)puVar41);
      pbVar40 = (byte *)((uint)uVar30 << 8);
      *(byte *)puVar41 = (byte)*puVar41 + cVar6;
      puVar41 = (uint *)CONCAT31(uVar29,bVar10 - *pbVar46);
      *pbVar46 = *pbVar46;
      *(byte *)puVar41 = (byte)*puVar41 + bVar9;
      *pbVar40 = *pbVar40;
      *(byte *)puVar41 = (byte)*puVar41;
      *pbVar40 = *pbVar40;
      *(byte **)(pbVar46 + 0x25) = (byte *)(*(int *)(pbVar46 + 0x25) + (int)puVar48);
    }
    else {
      unaff_EBP = unaff_EBP + -*(int *)(pbVar50 + 0x24);
      *(byte *)piVar27 = (char)*piVar27 + bVar7;
      puVar15 = (uint *)CONCAT22(uVar36,CONCAT11(bVar9 | (byte)*puVar41,cVar6));
      puVar48 = (uint *)((int)unaff_retaddr + *piVar27);
      pcVar18 = (char *)((int)piVar27 + *piVar27);
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      cVar11 = (char)pcVar18 - *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar29,cVar11);
      *pcVar18 = *pcVar18 + cVar11;
      pbVar40 = (byte *)CONCAT31(uVar29,cVar11 + *pcVar18);
      uVar17 = *puVar15;
      *(byte *)puVar15 = (byte)*puVar15 + bVar10;
      if (!CARRY1((byte)uVar17,bVar10)) {
        *(byte *)puVar41 = (byte)*puVar41 + cVar6;
        pbVar46 = (byte *)CONCAT31(uVar45,cVar47 - (byte)*puVar48);
        goto _ctor;
      }
    }
    *pbVar40 = *pbVar40 + (char)pbVar40;
    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(byte)puVar15 | (byte)*puVar41);
    unaff_retaddr = puVar48;
  }
  else {
    *(byte *)puVar41 = (byte)*puVar41 + cVar6;
    pbVar40 = (byte *)CONCAT31(uVar30,bVar7 | (byte)*unaff_retaddr);
  }
  pbVar50 = pbVar50 + *(int *)(unaff_EBP + 0x26);
  *pbVar40 = *pbVar40 + (byte)pbVar40;
  uVar29 = (undefined3)((uint)pbVar40 >> 8);
  bVar10 = (byte)pbVar40 | (byte)*puVar41;
  pbVar40 = (byte *)CONCAT31(uVar29,bVar10);
  if ((POPCOUNT(bVar10) & 1U) == 0) {
    *pbVar40 = *pbVar40 + bVar10;
    *(byte *)unaff_retaddr = (byte)*unaff_retaddr + 1;
    bVar8 = 9 < (bVar10 + 6 & 0xf) | bVar8;
    bVar7 = bVar10 + 6 + bVar8 * '\x06';
    pbVar40 = (byte *)CONCAT31(uVar29,bVar7 + (0x90 < (bVar7 & 0xf0) |
                                              0xf9 < bVar10 | bVar8 * (0xf9 < bVar7)) * '`');
  }
  *pbVar40 = *pbVar40 + (char)pbVar40;
  puVar48 = unaff_retaddr;
  do {
    puVar42 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | pbVar46[0x28],(char)puVar41));
    *pbVar40 = *pbVar40 + (char)pbVar40;
    uVar36 = (undefined2)((uint)puVar15 >> 0x10);
    uVar32 = SUB41(puVar15,0);
    bVar7 = (byte)((uint)puVar15 >> 8) | *pbVar40;
    puVar15 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7,uVar32));
    cVar6 = (char)pbVar40 + *pbVar40;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar6);
    bVar10 = *pbVar46;
    *pbVar46 = *pbVar46 + bVar7;
    if (!CARRY1(bVar10,bVar7)) goto code_r0x004022b3;
    *pbVar40 = *pbVar40 + cVar6;
    puVar15 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7 | (byte)*puVar42,uVar32));
    puVar41 = puVar42;
_ctor:
    bVar10 = (byte)((uint)puVar15 >> 8);
    uVar36 = (undefined2)((uint)puVar15 >> 0x10);
    cVar6 = (char)puVar15;
    bVar7 = bVar10 + *pbVar40;
    puVar15 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7,cVar6));
    pbVar40 = pbVar40 + (uint)CARRY1(bVar10,*pbVar40) + *(int *)pbVar40;
    *(byte *)puVar41 = (byte)*puVar41 + cVar6;
    bVar9 = (byte)pbVar46;
    bVar56 = bVar9 < *(byte *)((int)puVar48 + 2);
    bVar10 = *(byte *)((int)puVar48 + 2);
    cVar47 = bVar9 - bVar10;
    pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),cVar47);
    if ((POPCOUNT(cVar47) & 1U) != 0) {
      if ((char)bVar10 <= (char)bVar9) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *pbVar40 = *pbVar40 + (byte)pbVar40;
    bVar10 = (byte)pbVar40 | *pbVar46;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10);
    puVar42 = puVar41;
    if (bVar10 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(pbVar50 + 0x2b);
      *pbVar40 = *pbVar40 + bVar10;
      puVar15 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7 | (byte)*puVar41,cVar6));
      bVar7 = *pbVar40;
      *pbVar40 = *pbVar40 + bVar10;
      puVar48 = (uint *)((int)puVar48 + (uint)CARRY1(bVar7,bVar10) + *(int *)pbVar40);
      pbVar40 = pbVar40 + *(int *)pbVar40;
      cVar6 = (char)pbVar40 - *pbVar40;
      piVar27 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar6);
      *(char *)piVar27 = (char)*piVar27 + cVar6;
      pbVar40 = (byte *)((int)piVar27 + *piVar27);
      uVar17 = *puVar15;
      *(byte *)puVar15 = (byte)*puVar15 + (byte)puVar41;
      if (!CARRY1((byte)uVar17,(byte)puVar41)) goto code_r0x004022ea;
      goto code_r0x004022be;
    }
    *pbVar40 = *pbVar40;
    out(*puVar48,(short)puVar41);
    pbVar40 = pbVar40 + -*(int *)pbVar40;
    puVar48 = puVar48 + 1;
code_r0x004022ab:
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar15;
    bVar10 = (char)pbVar40 - *pbVar40;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10);
    *pbVar46 = *pbVar46 + (char)puVar42;
    *pbVar46 = *pbVar46 ^ bVar10;
code_r0x004022b3:
    *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar15 >> 8);
    bVar7 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar7;
    *pbVar46 = *pbVar46 + bVar7;
    bVar10 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar7;
    *(byte **)(pbVar46 + 0x2c) =
         (byte *)((int)puVar48 + (uint)CARRY1(bVar10,bVar7) + *(int *)(pbVar46 + 0x2c));
    puVar41 = puVar42;
code_r0x004022be:
    *pbVar40 = *pbVar40 + (char)pbVar40;
    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(byte)puVar15 | (byte)*puVar41);
    pbVar50 = pbVar50 + *(int *)(unaff_EBP + 0x2d);
code_r0x004022c6:
    *pbVar40 = *pbVar40 + (byte)pbVar40;
    uVar29 = (undefined3)((uint)pbVar40 >> 8);
    bVar10 = (byte)pbVar40 | (byte)*puVar41;
    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
    if ((POPCOUNT(bVar10) & 1U) != 0) {
      *pcVar18 = *pcVar18 + bVar10;
    }
    *pcVar18 = *pcVar18 + bVar10;
    cVar6 = bVar10 + 6;
    pbVar40 = (byte *)CONCAT31(uVar29,cVar6);
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    *pbVar40 = *pbVar40 + cVar6;
    puVar42 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | pbVar46[0x2f],(char)puVar41));
    *pbVar40 = *pbVar40 + cVar6;
    bVar10 = (byte)((uint)puVar15 >> 8) | *pbVar40;
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),CONCAT11(bVar10,(char)puVar15));
    pbVar40 = pbVar40 + *(int *)pbVar40;
    bVar56 = CARRY1(*pbVar46,bVar10);
    *pbVar46 = *pbVar46 + bVar10;
code_r0x004022e0:
    puVar41 = puVar42;
    if (!bVar56) goto code_r0x0040230b;
    bVar7 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar7;
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                               CONCAT11((byte)((uint)puVar15 >> 8) | (byte)*puVar42,(char)puVar15));
    bVar10 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar7;
    puVar48 = (uint *)((int)puVar48 + (-(uint)CARRY1(bVar10,bVar7) - *(int *)pbVar40));
code_r0x004022ea:
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 + *pbVar40);
code_r0x004022ef:
    *(char *)((int)pbVar40 * 2) = *(char *)((int)pbVar40 * 2) + (char)pbVar40;
    *(byte *)puVar15 = (byte)*puVar15 + (char)puVar42;
    uVar55 = (ushort)in_stack_ffffffd4;
    puVar41 = puVar42;
    while( true ) {
      uVar29 = (undefined3)((uint)pbVar40 >> 8);
      bVar10 = (byte)pbVar40 | (byte)*puVar41;
      pbVar40 = (byte *)CONCAT31(uVar29,bVar10);
      if ((POPCOUNT(bVar10) & 1U) != 0) break;
      *pbVar40 = *pbVar40 + bVar10;
      cVar6 = bVar10 + 0xd;
      pcVar18 = (char *)CONCAT31(uVar29,cVar6);
      *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar18;
      *pcVar18 = *pcVar18 + cVar6;
      *(char *)((int)pcVar18 * 2) = *(char *)((int)pcVar18 * 2) + (char)((uint)puVar15 >> 8);
      *pcVar18 = *pcVar18 + cVar6;
      pbVar40 = (byte *)CONCAT31(uVar29,cVar6);
      *pbVar40 = *pbVar40 + cVar6;
code_r0x0040230b:
      puVar42 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((char)((uint)puVar41 >> 8) + pbVar46[0x34],(char)puVar41))
      ;
      cVar6 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar6;
      pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar46 >> 8) | unaff_EBP[-0x79],
                                          (char)pbVar46));
      *pbVar40 = *pbVar40 + cVar6;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar6 + '\x02');
code_r0x00402317:
      pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                 CONCAT11((char)((uint)pbVar46 >> 8) + pbVar46[-0x7a],(char)pbVar46)
                                );
      cVar6 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar6;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      cVar47 = cVar6 + '{';
      pbVar40 = (byte *)CONCAT31(uVar29,cVar47);
      *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
      pbVar16 = (byte *)((int)puVar42 + (int)pbVar40);
      *pbVar16 = *pbVar16 + cVar47;
      if ((POPCOUNT(*pbVar16) & 1U) != 0) goto code_r0x004022ab;
      *pbVar40 = *pbVar40 + cVar47;
      piVar27 = (int *)CONCAT31(uVar29,cVar6 + -10);
      uVar17 = (int)piVar27 + *piVar27;
      bVar10 = (byte)uVar17;
      pbVar50[(int)unaff_EBP * 2] = pbVar50[(int)unaff_EBP * 2] + bVar10;
      pbVar40 = (byte *)(uVar17 ^ 0x7d0a0000);
      *pbVar40 = bVar10;
      pbVar16 = (byte *)((int)puVar42 + (int)pbVar40);
      *pbVar16 = *pbVar16 + bVar10;
      puVar41 = puVar42;
      if ((POPCOUNT(*pbVar16) & 1U) != 0) goto code_r0x004022be;
      *pbVar40 = *pbVar40 + bVar10;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10 + 0x69);
      uVar52 = in_ES;
code_r0x00402342:
      in_ES = uVar52;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      bVar10 = (char)pcVar18 + *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      *pcVar18 = *pcVar18 + bVar10;
      *pcVar18 = *pcVar18 + bVar10;
      *(byte *)(puVar48 + 0x800000) = (byte)puVar48[0x800000] + (char)puVar15;
      cVar47 = (char)pbVar46;
      pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                 CONCAT11((char)((uint)pbVar46 >> 8) + pbVar46[-0x7a],cVar47));
      *pcVar18 = *pcVar18 + bVar10;
      bVar56 = 0xfd < bVar10;
      cVar6 = bVar10 + 2;
      pbVar40 = (byte *)CONCAT31(uVar29,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x004022e0;
      *pbVar40 = *pbVar40 + cVar6;
      cVar6 = bVar10 + 0x71;
      pbVar40 = (byte *)CONCAT31(uVar29,cVar6);
      bVar7 = *pbVar40;
      *pbVar40 = *pbVar40 + cVar6;
      in_stack_ffffffd4 = (byte *)(uint)in_ES;
      if (SCARRY1(bVar7,cVar6) == (char)*pbVar40 < '\0') {
        *(byte *)((int)puVar42 + (int)pbVar40) = *(byte *)((int)puVar42 + (int)pbVar40) + cVar47;
        goto code_r0x004022ef;
      }
      *pbVar40 = *pbVar40 + cVar6;
      pbVar40 = (byte *)CONCAT31(uVar29,bVar10 + 0x73);
      bVar56 = (POPCOUNT(bVar10 + 0x73) & 1U) == 0;
      puVar41 = puVar42;
code_r0x00402366:
      if (bVar56) {
code_r0x00402368:
        *pbVar40 = *pbVar40 + (char)pbVar40;
        cVar6 = (char)pbVar40 + 'o';
        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar6);
        *pcVar18 = *pcVar18 + cVar6;
        puVar42 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(byte)puVar41 | *pbVar46);
        pcVar18 = pcVar18 + 0x37280512;
        bVar7 = (byte)pcVar18;
        *pcVar18 = *pcVar18 + bVar7;
        puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                   CONCAT11((byte)((uint)puVar15 >> 8) | bRam7d160243,(char)puVar15)
                                  );
        pbVar40 = (byte *)((int)puVar42 + (int)pcVar18);
        bVar10 = *pbVar40;
        *pbVar40 = *pbVar40 + bVar7;
        pcRam00008e7d = pcVar18 + (int)(pcRam00008e7d + CARRY1(bVar10,bVar7));
        bVar56 = SCARRY1(bVar7,'\x02');
        bVar7 = bVar7 + 2;
        puVar28 = (ushort *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar7);
code_r0x0040238b:
        if (bVar56 == (char)bVar7 < '\0') {
          *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
          pcVar18 = (char *)CONCAT31((int3)((uint)puVar28 >> 8),(char)puVar28 + '\x12');
          uVar52 = in_ES;
          in_ES = uVar55;
code_r0x00402391:
          pcVar18 = pcVar18 + 0x42802;
          *pbVar46 = *pbVar46 + (char)((uint)puVar15 >> 8);
          uVar55 = in_ES;
code_r0x00402399:
          bVar10 = (byte)pbVar46 | (byte)((uint)puVar15 >> 8);
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          pcVar18 = (char *)CONCAT31(uVar29,1);
          *pcVar18 = *pcVar18 + '\x01';
          pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                     CONCAT11((char)((uint)pbVar46 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar46 >> 8),bVar10)
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
            bVar7 = (byte)pcVar18;
            *pcVar18 = *pcVar18 + bVar7;
            iVar19 = CONCAT31((int3)((uint)pcVar18 >> 8),bVar7 + 2) + 0x847d + (uint)(0xfd < bVar7);
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(byte)puVar42 | (byte)*puVar42);
            pcVar18 = (char *)(CONCAT31((int3)((uint)iVar19 >> 8),(char)iVar19 + '\x12') + 0x134f26)
            ;
            *pbVar46 = *pbVar46 + bVar10;
code_r0x004023cd:
            out(*puVar48,(short)puVar42);
            uVar17 = *puVar42;
            *(byte *)puVar42 = (byte)*puVar42 + (byte)puVar15;
            pbVar40 = (byte *)(pcVar18 + (uint)CARRY1((byte)uVar17,(byte)puVar15) + *(int *)pbVar50)
            ;
            bVar59 = SCARRY1((char)puVar42,(byte)*puVar15);
            bVar10 = (char)puVar42 + (byte)*puVar15;
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar10);
            bVar57 = (char)bVar10 < '\0';
            puVar48 = puVar48 + 1;
code_r0x004023d6:
            bVar56 = (POPCOUNT(bVar10) & 1U) == 0;
            puVar41 = puVar42;
            if (bVar59 != bVar57) {
              *pbVar40 = *pbVar40 + (char)pbVar40;
code_r0x004023db:
              cVar47 = (char)pbVar40;
              uVar29 = (undefined3)((uint)pbVar40 >> 8);
              cVar6 = cVar47 + '\x02';
              pbVar40 = (byte *)CONCAT31(uVar29,cVar6);
              if ((POPCOUNT(cVar6) & 1U) != 0) {
                pbVar16 = (byte *)((int)puVar41 + (int)pbVar40);
                *pbVar16 = *pbVar16 + cVar6;
                bVar56 = (POPCOUNT(*pbVar16) & 1U) == 0;
                goto code_r0x00402366;
              }
              *pbVar40 = *pbVar40 + cVar6;
              cVar47 = cVar47 + '\x15';
              pbVar40 = (byte *)CONCAT31(uVar29,cVar47);
              *(byte *)puVar15 = (byte)*puVar15 | (byte)puVar41;
              *pbVar50 = *pbVar50 | (byte)puVar41;
              uVar52 = in_ES;
              if ((POPCOUNT(*pbVar50) & 1U) == 0) {
                *pbVar40 = *pbVar40 + cVar47;
                goto code_r0x00402425;
              }
              *pbVar40 = *pbVar40 + cVar47;
              cVar47 = cVar47 + (byte)*puVar41;
              pcVar18 = (char *)CONCAT31(uVar29,cVar47);
              if ((POPCOUNT(cVar47) & 1U) == 0) {
                *pcVar18 = *pcVar18 + cVar47;
                puVar28 = (ushort *)CONCAT31(uVar29,cVar47 + 'o');
                puVar42 = puVar41;
code_r0x004023f6:
                uVar17 = *puVar42;
                *(byte *)puVar42 = (byte)*puVar42 + (char)puVar15;
                cVar6 = (char)puVar28;
                if (SCARRY1((byte)uVar17,(char)puVar15) == (char)(byte)*puVar42 < '\0') {
                  in_ES = *puVar28;
                  pbVar40 = (byte *)((int)puVar42 + (int)puVar28);
                  bVar56 = SCARRY1(*pbVar40,cVar6);
                  *pbVar40 = *pbVar40 + cVar6;
                  bVar7 = *pbVar40;
                  goto code_r0x0040238b;
                }
                *(char *)puVar28 = (char)*puVar28 + cVar6;
                cVar6 = cVar6 + '\x02';
                pcVar18 = (char *)CONCAT31((int3)((uint)puVar28 >> 8),cVar6);
                puVar41 = puVar48;
                if ((POPCOUNT(cVar6) & 1U) == 0) {
code_r0x00402402:
                  *pcVar18 = *pcVar18 + (char)pcVar18;
                  uVar29 = (undefined3)((uint)pcVar18 >> 8);
                  piVar27 = (int *)CONCAT31(uVar29,(char)pcVar18 + 'r');
                  *piVar27 = *piVar27 + 0x7b027000;
                  cVar6 = (char)*piVar27;
                  pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                  pbVar40 = (byte *)((int)puVar42 + (int)pcVar18);
                  *pbVar40 = *pbVar40 + cVar6;
                  puVar48 = puVar41;
                  if ((POPCOUNT(*pbVar40) & 1U) == 0) {
                    *pcVar18 = *pcVar18 + cVar6;
                    bVar7 = cVar6 + '{' + *(char *)CONCAT31(uVar29,cVar6 + '{');
                    piVar27 = (int *)CONCAT31(uVar29,bVar7);
                    pbVar40 = (byte *)((int)piVar27 + (int)unaff_EBP);
                    bVar10 = *pbVar40;
                    *pbVar40 = *pbVar40 + bVar7;
                    *piVar27 = (*piVar27 - (int)piVar27) - (uint)CARRY1(bVar10,bVar7);
                    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar15;
                    puVar48 = puVar41 + 1;
                    out(*puVar41,(short)puVar42);
                    cVar6 = bVar7 - (char)*piVar27;
                    pbVar40 = (byte *)CONCAT31(uVar29,cVar6);
                    *(byte *)puVar48 = (byte)*puVar48 + cVar6;
                    puVar41 = puVar42;
code_r0x00402425:
                    out(*puVar48,(short)puVar41);
                    uVar17 = *puVar41;
                    *(byte *)puVar41 = (byte)*puVar41 + (byte)puVar15;
                    uVar17 = (uint)CARRY1((byte)uVar17,(byte)puVar15);
                    pbVar16 = (byte *)((int)puVar15 + *puVar15) + uVar17;
                    puVar15 = (uint *)CONCAT31((int3)((uint)pbVar16 >> 8),
                                               (char)pbVar16 + *pbVar16 +
                                               (CARRY4((uint)puVar15,*puVar15) ||
                                               CARRY4((int)puVar15 + *puVar15,uVar17)));
                    cRam130a0000 = cRam130a0000 - (char)((uint)pbVar46 >> 8);
                    puVar42 = puVar41;
                    puVar48 = puVar48 + 1;
code_r0x00402435:
                    puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               (byte)puVar42 | (byte)*puVar42);
                    bVar10 = *pbVar40;
                    *pbVar40 = *pbVar40 + (char)pbVar40;
                    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                               CONCAT11((byte)((uint)puVar15 >> 8) | bVar10 |
                                                        bRam7d170243,(char)puVar15));
code_r0x00402442:
                    pbVar16 = (byte *)((int)puVar42 + (int)pbVar40);
                    bVar7 = *pbVar16;
                    bVar10 = (byte)pbVar40;
                    *pbVar16 = *pbVar16 + bVar10;
                    uVar17 = *puVar42;
                    uVar22 = *puVar42;
                    *puVar42 = (uint)((byte *)(uVar22 + (int)puVar15) + CARRY1(bVar7,bVar10));
                    puVar41 = puVar42;
                    if ((SCARRY4(uVar17,(int)puVar15) !=
                        SCARRY4((int)(uVar22 + (int)puVar15),(uint)CARRY1(bVar7,bVar10))) !=
                        (int)*puVar42 < 0) {
                      *pbVar40 = *pbVar40 + bVar10;
                      bVar59 = SCARRY1(bVar10,'\x02');
                      bVar10 = bVar10 + 2;
                      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10);
code_r0x0040244f:
                      bVar57 = (char)bVar10 < '\0';
                      if (bVar59 == bVar57) {
code_r0x00402451:
                        *pbVar40 = *pbVar40 + (char)pbVar40;
                        bVar10 = (char)pbVar40 + 0x12U | (byte)*puVar42;
                        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10);
                        cRam162b0000 = cRam162b0000 - bVar10;
code_r0x0040245d:
                        pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),
                                                   (byte)pbVar46 | (byte)((uint)puVar15 >> 8));
                        cVar6 = in((short)puVar42);
                        puVar28 = (ushort *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6);
                        *(char *)puVar28 = (char)*puVar28 + cVar6;
                        *(byte *)puVar42 = (byte)*puVar42 + cVar6;
                        if ((POPCOUNT((byte)*puVar42) & 1U) == 0) {
code_r0x00402466:
                          *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
                          uVar29 = (undefined3)((uint)puVar28 >> 8);
                          bVar10 = (char)puVar28 + 0x13U | (byte)*puVar42;
                          pcVar18 = (char *)CONCAT31(uVar29,bVar10);
                          cVar6 = (byte)puVar15 + *pbVar46;
                          puVar41 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),cVar6);
                          cRam1b000019 = cRam1b000019 + '\x01';
                          uVar17 = (uint)CARRY1((byte)puVar15,*pbVar46);
                          iVar19 = *(int *)pbVar46;
                          iVar14 = *(int *)pbVar46;
                          *(byte **)pbVar46 = (byte *)(iVar14 + (int)puVar41) + uVar17;
                          if ((SCARRY4(iVar19,(int)puVar41) != SCARRY4(iVar14 + (int)puVar41,uVar17)
                              ) != *(int *)pbVar46 < 0) {
                            *pcVar18 = *pcVar18 + bVar10;
                            iVar19 = CONCAT31(uVar29,bVar10 + 2) + 0x847d + (uint)(0xfd < bVar10);
                            uVar29 = (undefined3)((uint)iVar19 >> 8);
                            bVar10 = (char)iVar19 + 0x12;
                            puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                                       CONCAT11((byte)((uint)puVar15 >> 8) |
                                                                *(byte *)CONCAT31(uVar29,bVar10),
                                                                cVar6));
                            bVar8 = 9 < (bVar10 & 0xf) | bVar8;
                            uVar17 = CONCAT31(uVar29,bVar10 + bVar8 * -6) & 0xffffff0f;
                            pcVar18 = (char *)CONCAT22((short)(uVar17 >> 0x10),
                                                       CONCAT11((char)((uint)iVar19 >> 8) - bVar8,
                                                                (char)uVar17));
code_r0x00402486:
                            *pcVar18 = *pcVar18 + (char)pcVar18;
                            puVar44 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                                       (byte)puVar42 | (byte)*puVar42);
                            uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
                            bVar10 = (byte)((uint)pbVar46 >> 8) | (byte)((uint)puVar42 >> 8);
                            pbVar40 = (byte *)(pcVar18 + 0x1b000019);
                            puVar41 = (uint *)((int)puVar44 + (int)pbVar40);
                            bVar56 = CARRY4((uint)puVar15,*puVar41);
                            pbVar16 = (byte *)((int)puVar15 + *puVar41);
                            puVar15 = (uint *)(pbVar16 + ((char *)0xe4ffffe6 < pcVar18));
                            piVar27 = (int *)((int)pbVar50 * 2 + 0x400008b);
                            *piVar27 = (int)((int)puVar15 +
                                            (uint)(bVar56 ||
                                                  CARRY4((uint)pbVar16,
                                                         (uint)((char *)0xe4ffffe6 < pcVar18))) +
                                            *piVar27);
                            pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(bVar10 + *(char *)(CONCAT22(
                                                  uVar36,CONCAT11(bVar10,(char)pbVar46)) + -0x79),
                                                  (char)pbVar46));
                            puVar42 = puVar44;
code_r0x0040249e:
                            bVar10 = (byte)pbVar40;
                            *pbVar40 = *pbVar40 + bVar10;
                            uVar29 = (undefined3)((uint)pbVar40 >> 8);
                            cVar6 = bVar10 + 2;
                            pbVar40 = (byte *)CONCAT31(uVar29,cVar6);
                            puVar41 = puVar42;
                            if (0xfd < bVar10) {
                              bVar7 = *pbVar40;
                              *pbVar40 = *pbVar40 + cVar6;
                              if (SCARRY1(bVar7,cVar6) == (char)*pbVar40 < '\0')
                              goto code_r0x00402435;
                              *pbVar40 = *pbVar40 + cVar6;
                              cVar6 = bVar10 + 4;
                              pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                              if ((POPCOUNT(cVar6) & 1U) != 0) {
                                *(byte *)puVar42 = (byte)*puVar42 + (char)puVar15;
                                pbVar40 = (byte *)(pcVar18 + -0x7d170243);
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
                                  cVar47 = cVar6 + '\x7f';
                                  pbVar40 = (byte *)CONCAT31(uVar29,cVar47);
                                  if ((POPCOUNT(cVar47) & 1U) != 0) break;
                                  *pbVar40 = *pbVar40 + cVar47;
                                  cVar47 = cVar6 + -0x7f;
                                  pbVar40 = (byte *)CONCAT31(uVar29,cVar47);
                                  if ((POPCOUNT(cVar47) & 1U) != 0) goto code_r0x00402451;
                                  *pbVar40 = *pbVar40 + cVar47;
                                  pcVar18 = (char *)CONCAT31(uVar29,cVar6 + -2);
                                  pbVar50 = pbVar50 + -1;
                                  while( true ) {
                                    cVar6 = (char)pcVar18;
                                    *pcVar18 = *pcVar18 + cVar6;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    cVar47 = cVar6 + '\x02';
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar47);
                                    if ((POPCOUNT(cVar47) & 1U) != 0) goto code_r0x0040245d;
                                    *pcVar18 = *pcVar18 + cVar47;
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar6 + 'q') + 1);
                                    *pcVar18 = *pcVar18 + (byte)pcVar18;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    bVar10 = (byte)pcVar18 | (byte)*puVar42;
                                    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
                                    if ((POPCOUNT(bVar10) & 1U) != 0) {
                                      puVar15 = (uint *)((int)puVar15 + *puVar42);
                                      puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                                                 (char)puVar42 + (byte)*puVar42);
                                      pbVar50 = (byte *)((uint)pbVar50 | (uint)puVar48);
                                      puVar28 = (ushort *)(pcVar18 + 0x1b000019);
                                      goto code_r0x00402466;
                                    }
                                    *pcVar18 = *pcVar18 + bVar10;
                                    pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x6f);
                                    puVar15 = (uint *)((int)puVar15 + 1);
                                    *pcVar18 = *pcVar18 + bVar10 + 0x6f;
                                    uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
                                    bVar10 = (byte)pbVar46;
                                    bVar7 = (byte)((uint)pbVar46 >> 8) | (byte)*puVar42;
                                    uVar55 = (ushort)uStack_1c;
                                    uStack_1c = CONCAT22(uStack_1c._2_2_,in_ES);
                                    cVar6 = (char)(pcVar18 + -0x21000001);
                                    uVar29 = (undefined3)((uint)(pcVar18 + -0x21000001) >> 8);
                                    cVar47 = cVar6 + -0x13;
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar47);
                                    cVar11 = bVar7 + *(char *)(CONCAT22(uVar36,CONCAT11(bVar7,bVar10
                                                                                       )) + -0x73);
                                    pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar11,bVar10));
                                    *pcVar18 = *pcVar18 + cVar47;
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar6 + '\x19') | *puVar42);
                                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0)
                                    goto code_r0x00402486;
                                    cVar6 = (char)pcVar18;
                                    *pcVar18 = *pcVar18 + cVar6;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    pcVar13 = (char *)CONCAT31(uVar29,cVar6 + 'o');
                                    puVar41 = (uint *)((int)puVar42 + 1);
                                    *pcVar13 = *pcVar13 + cVar6 + 'o';
                                    bVar10 = bVar10 | (byte)((uint)pcVar18 >> 8);
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\\');
                                    cVar11 = cVar11 + *(char *)(CONCAT31((int3)((uint)pbVar46 >> 8),
                                                                         bVar10) + -0x78);
                                    pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar11,bVar10));
                                    *pcVar18 = *pcVar18 + cVar6 + '\\';
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar6 + -0x78) | *puVar41);
                                    cVar6 = (char)pcVar18;
                                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0) {
                                      pbVar40 = (byte *)CONCAT31(uVar29,cVar6 + '\x02');
                                      puVar42 = puVar41;
                                      if ((POPCOUNT(cVar6 + '\x02') & 1U) == 0)
                                      goto code_r0x0040249e;
                                      goto code_r0x00402425;
                                    }
                                    *pcVar18 = *pcVar18 + cVar6;
                                    cVar47 = cVar6 + 'o';
                                    pcVar13 = (char *)CONCAT31(uVar29,cVar47);
                                    puVar42 = (uint *)((int)puVar42 + 2);
                                    *pcVar13 = *pcVar13 + cVar47;
                                    bVar10 = bVar10 | (byte)((uint)pcVar18 >> 8);
                                    pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar11 + *(char *)(
                                                  CONCAT31((int3)((uint)pbVar46 >> 8),bVar10) +
                                                  -0x79),bVar10));
                                    *pcVar13 = *pcVar13 + cVar47;
                                    pcVar18 = (char *)(CONCAT31(uVar29,cVar6 + 'z') | 2);
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    cVar6 = (char)pcVar18;
                                    *pcVar18 = *pcVar18 + cVar6;
                                    cVar47 = cVar6 + '\x02';
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar47);
                                    if (SCARRY1(cVar6,'\x02') != cVar47 < '\0') break;
                                    *pcVar18 = *pcVar18 + cVar47;
                                    cVar47 = cVar6 + '\n';
                                    *pbVar46 = *pbVar46 - cVar47;
                                    *(byte *)puVar42 = *(byte *)puVar42 + (char)puVar15;
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    *(char *)CONCAT31(uVar29,cVar47) =
                                         *(char *)CONCAT31(uVar29,cVar47) + cVar47;
                                    cVar11 = cVar6 + '\f';
                                    pcVar18 = (char *)CONCAT31(uVar29,cVar11);
                                    if (SCARRY1(cVar47,'\x02') == cVar11 < '\0') {
                                      *pcVar18 = *pcVar18 + cVar11;
                                      pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\x13');
                                      uVar55 = in_ES;
                                      goto code_r0x0040254a;
                                    }
                                  }
                                }
                                pbVar16 = (byte *)((int)puVar42 + (int)pbVar40);
                                bVar59 = SCARRY1(*pbVar16,cVar47);
                                *pbVar16 = *pbVar16 + cVar47;
                                bVar10 = *pbVar16;
                                goto code_r0x0040244f;
                              }
                              cVar47 = (char)puVar42;
                              cVar11 = cVar47 + *pbVar50;
                              puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),cVar11);
                              if (SCARRY1(cVar47,*pbVar50) != cVar11 < '\0') {
                                *pcVar18 = *pcVar18 + cVar6;
                                pbVar40 = (byte *)CONCAT31(uVar29,bVar10 + 8);
                                goto code_r0x00402442;
                              }
                              cRam1b000013 = cRam1b000013 + '\x01';
                              goto code_r0x004023cd;
                            }
                            goto code_r0x00402425;
                          }
                          pcVar13 = pcVar18 + 2;
                          *pcVar13 = *pcVar13 + (char)((uint)puVar42 >> 8);
                          puVar15 = puVar41;
                          if ((POPCOUNT(*pcVar13) & 1U) == 0) {
                            *pcVar18 = *pcVar18 + bVar10;
                            pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 2);
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
                                                    unaff_EBP[(int)pcVar18 * 4],(char)pbVar46));
                *(char *)((int)puVar42 * 2) = *(char *)((int)puVar42 * 2) + cVar6;
                in_ES = uVar55;
                goto code_r0x00402391;
              }
              *pcVar18 = *pcVar18 + cVar47;
              pbVar40 = (byte *)CONCAT31(uVar29,cVar47 + '\x02');
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
        *(byte *)((int)puVar42 + (int)pcVar18) =
             *(byte *)((int)puVar42 + (int)pcVar18) + (char)pcVar18;
        goto code_r0x00402317;
      }
      bVar56 = CARRY1(*pbVar40,(byte)pbVar40);
      *pbVar40 = *pbVar40 + (byte)pbVar40;
code_r0x004022f3:
      *(byte **)pbVar50 = (byte *)((int)puVar41 + (uint)bVar56 + *(int *)pbVar50);
    }
  } while( true );
code_r0x0040254a:
  cVar6 = (char)pcVar18;
  *(char *)((int)pcVar18 * 2) = *(char *)((int)pcVar18 * 2) - cVar6;
  *pcVar18 = *pcVar18 + cVar6;
  pcVar13 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6 + *pcVar18);
  *pcVar13 = *pcVar13 + cVar6 + *pcVar18;
  uStack_20 = 0x4025;
  uVar60 = func_0x0f40255d();
  uVar52 = uStack_20;
code_r0x0040255d:
  uStack_20 = uVar52;
  pcVar18 = (char *)((ulonglong)uVar60 >> 0x20);
  piVar27 = (int *)uVar60;
  *piVar27 = (int)((int)piVar27 + *piVar27);
  uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
  uVar32 = SUB41(pbVar46,0);
  cVar11 = (char)((uint)pbVar46 >> 8) + (char)((ulonglong)uVar60 >> 0x28);
  pcVar13 = (char *)CONCAT22(uVar36,CONCAT11(cVar11,uVar32));
  *piVar27 = (int)((int)piVar27 + *piVar27);
  *pbVar50 = *pbVar50 + (char)((ulonglong)uVar60 >> 0x20);
  cVar6 = (char)uVar60;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  *pcVar18 = *pcVar18 + cVar6;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  *pcVar13 = *pcVar13 + cVar6;
  *(char *)piVar27 = (char)*piVar27 + cVar6;
  pcVar2 = (code *)swi(1);
  uVar60 = (*pcVar2)();
  pbVar16 = (byte *)((ulonglong)uVar60 >> 0x20);
  pbVar40 = (byte *)uVar60;
  bVar10 = *pbVar40;
  bVar7 = (byte)uVar60;
  *pbVar40 = *pbVar40 + bVar7;
  *pbVar16 = *pbVar16 + bVar7 + CARRY1(bVar10,bVar7);
  *pbVar40 = *pbVar40 + bVar7;
  *pbVar40 = *pbVar40 + bVar7;
  *pbVar40 = *pbVar40 + bVar7;
  *pbVar40 = *pbVar40 + bVar7;
  *pbVar40 = *pbVar40 + bVar7;
  *pbVar40 = *pbVar40 + bVar7;
  *pbVar40 = *pbVar40 + bVar7;
  *pbVar40 = *pbVar40 + bVar7;
  cVar6 = (char)((ulonglong)uVar60 >> 0x28);
  *pbVar40 = *pbVar40 + cVar6;
  bVar10 = *pbVar40;
  uVar29 = (undefined3)((ulonglong)uVar60 >> 8);
  pcVar18 = (char *)CONCAT31(uVar29,bVar7 + bVar10);
  *pcVar18 = *pcVar18 + cVar6;
  cVar6 = bVar7 + bVar10 + *pcVar18;
  pcVar18 = (char *)CONCAT31(uVar29,cVar6);
  cVar47 = (char)((ulonglong)uVar60 >> 0x20);
  *pbVar50 = *pbVar50 + cVar47;
  *pcVar18 = *pcVar18 + cVar6;
  *pcVar18 = *pcVar18 + cVar47;
  *pcVar18 = *pcVar18 + cVar6;
  *puVar48 = (uint)(*puVar48 + (int)puVar48);
  cVar11 = cVar11 + unaff_EBP[(int)pcVar18 * 4];
  pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar11,uVar32));
  pbVar46[(int)pcVar18] = pbVar46[(int)pcVar18] + cVar6;
  *(byte *)puVar48 = (byte)*puVar48 - cVar6;
  *pbVar16 = *pbVar16 + (char)extraout_ECX;
  bVar7 = cVar6 - *pcVar18;
  pcVar18 = (char *)CONCAT31(uVar29,bVar7);
  *pbVar46 = *pbVar46 + cVar47;
  *pbVar16 = *pbVar16 ^ bVar7;
  *pbVar16 = *pbVar16 + cVar11;
  *pcVar18 = *pcVar18 + bVar7;
  cRam12110000 = cRam12110000 + bVar7;
  bVar10 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  pbVar40 = extraout_ECX;
  if (SCARRY1(bVar10,bVar7) != (char)*pbVar16 < '\0') {
code_r0x004025bd:
    *pcVar18 = *pcVar18 + (char)pcVar18;
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x12');
    *pcVar18 = *pcVar18 + (char)((uint)pbVar40 >> 8);
    pcVar18 = pcVar18 + -1;
    cVar6 = (char)pcVar18;
    *pcVar18 = *pcVar18 + cVar6;
    bVar10 = (byte)((uint)pbVar46 >> 8) | unaff_EBP[-0x7b];
    pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),CONCAT11(bVar10,(char)pbVar46));
    *pcVar18 = *pcVar18 + cVar6;
    cRam0000847d = cRam0000847d + (char)pbVar16;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6 + '$');
    pbVar46[-0x7b] = pbVar46[-0x7b] + bVar10;
    pbVar20 = pbVar40;
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
      iVar19 = *(int *)pbVar16;
      pbVar21[(int)pcVar18 * 4] = pbVar21[(int)pcVar18 * 4] + (char)((uint)pbVar46 >> 8);
      pcVar18[(int)pbVar21] = pcVar18[(int)pbVar21] + cVar6;
      pbVar43 = pbVar16 + (-1 - iVar19);
      *pcVar18 = *pcVar18 + cVar6;
      pbVar40 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar20 >> 8) | *pbVar43) + pbVar50[0x22],
                                          (char)pbVar20));
      *pcVar18 = *pcVar18 + cVar6;
      bVar38 = (char)pbVar43 - pbVar16[1 - iVar19];
      bVar9 = cVar6 - 0xf;
      pbVar20 = (byte *)CONCAT31(uVar29,bVar9);
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                 CONCAT11((char)((uint)pbVar43 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar43 >> 8),bVar38) +
                                                   -0x3f),bVar38));
      bVar10 = *pbVar20;
      bVar7 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar9;
      uVar52 = uVar55;
      if (SCARRY1(bVar7,bVar9)) {
        pbVar20 = (byte *)CONCAT31(uVar29,bVar9 + pbVar20[(int)pbVar21] + CARRY1(bVar10,bVar9));
        goto code_r0x00402677;
      }
      pbVar46 = pbVar46 + -1;
      *pbVar20 = *pbVar20 + bVar9;
      uVar17 = *puVar48;
      *pbVar40 = *pbVar40 + 1;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(bVar38 | (byte)uVar17) - (byte)*puVar48
                                );
      puVar48 = (uint *)((int)puVar48 +
                        (-(uint)(bVar9 < *pbVar20) - *(int *)CONCAT31(uVar29,bVar9 - *pbVar20)));
      unaff_EBP = (byte *)CONCAT31(uVar29,bVar9 - *pbVar20);
      *(byte **)pbVar21 = pbVar21 + *(int *)pbVar21;
      bVar7 = (byte)pbVar21;
      *(byte *)puVar48 = (byte)*puVar48 + bVar7;
      bVar10 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar7;
      *(byte **)pbVar50 = pbVar16 + (uint)CARRY1(bVar10,bVar7) + *(int *)pbVar50;
      uVar29 = (undefined3)((uint)pbVar21 >> 8);
      bVar7 = bVar7 | *pbVar16;
      pcVar18 = (char *)CONCAT31(uVar29,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        *pcVar18 = *pcVar18 + bVar7;
        uVar60 = CONCAT44(pbVar16,pcVar18 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar18 = *pcVar18 + bVar7;
      bVar10 = bVar7 + 0xd;
      pbVar20 = (byte *)CONCAT31(uVar29,bVar10);
      *puVar48 = *puVar48 | (uint)pbVar16;
      if (-1 < (int)*puVar48) {
code_r0x00402678:
        *pbVar20 = *pbVar20 + (char)pbVar20;
        pbVar40 = (byte *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar40 >> 8) | bRam7d160243,(char)pbVar40)
                                  );
        pbVar21 = pbVar50;
code_r0x00402680:
        bVar10 = (byte)pbVar40;
        *pbVar40 = *pbVar40 + bVar10;
        uVar29 = (undefined3)((uint)pbVar40 >> 8);
        piVar27 = (int *)((int)pbVar21 * 2 + 0x400009a);
        *piVar27 = *piVar27 + CONCAT31(uVar29,bVar10 + 2) + (uint)(0xfd < bVar10);
        pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                   CONCAT11((char)((uint)pbVar46 >> 8) + *(char *)((int)pbVar16 * 5)
                                            ,(char)pbVar46));
        *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) + bVar10 + 2;
        pbVar50 = (byte *)CONCAT31(uVar29,bVar10 + 4);
        *pbVar21 = *pbVar21 - (bVar10 + 4);
code_r0x00402697:
        *pbVar50 = *pbVar50 + (char)pbVar50;
        pbVar16 = pbVar16 + -*puVar48;
        pbVar40 = pbVar50;
code_r0x0040269b:
        pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),
                                   (byte)pbVar46 | (byte)((uint)pbVar20 >> 8));
        uVar33 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar40 = uVar33;
        cVar6 = (char)pbVar40;
        *pbVar16 = *pbVar16 + cVar6;
        if ((POPCOUNT(*pbVar16) & 1U) == 0) {
          *pbVar40 = *pbVar40 + cVar6;
          pcVar18 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar6 + '\x13');
          pbVar40 = pbVar20;
          pbVar50 = pbVar21;
code_r0x004026a8:
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          bVar7 = (byte)pcVar18 + 2 + cRam001b15fe + (0xfd < (byte)pcVar18);
          bVar10 = *pbVar46;
          bVar9 = (byte)pbVar46;
          *pbVar46 = *pbVar46 + bVar9;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar29,bVar7) + (uint)CARRY1(bVar10,bVar9);
          iVar19 = CONCAT31(uVar29,bVar7 + 2) + 0x917d + (uint)(0xfd < bVar7);
          cVar6 = (char)iVar19;
          uVar29 = (undefined3)((uint)iVar19 >> 8);
          bVar10 = cVar6 + 0x3a;
          pbVar43 = (byte *)CONCAT31(uVar29,bVar10);
          *pbVar43 = *pbVar43 + bVar10;
          uVar45 = (undefined3)((uint)pbVar16 >> 8);
          bVar7 = (byte)pbVar16 | *pbVar16;
          uVar22 = CONCAT31(uVar29,cVar6 + '8');
          uVar17 = uVar22 + 0x1b00001b;
          pcVar18 = (char *)(uVar17 + (1 < bVar10) + *puVar48 +
                            (uint)(0xe4ffffe4 < uVar22 || CARRY4(uVar17,(uint)(1 < bVar10))));
          bVar10 = bVar7 + *pbVar40;
          pbVar16 = (byte *)CONCAT31(uVar45,bVar10);
          uVar29 = (undefined3)((uint)pcVar18 >> 8);
          cVar6 = (char)pcVar18;
          if (SCARRY1(bVar7,*pbVar40) != (char)bVar10 < '\0') {
            *pcVar18 = *pcVar18 + cVar6;
            pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\x02');
            uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
            cVar11 = (char)((uint)pbVar46 >> 8) + pbVar46[-0x68];
            pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar11,bVar9));
            *pcVar18 = *pcVar18 + cVar6 + '\x02';
            bVar7 = cVar6 + 0x2a;
            pbVar20 = (byte *)CONCAT31(uVar29,bVar7);
            *pbVar20 = *pbVar20 | bVar7;
            bVar10 = *pbVar46;
            cVar47 = (char)((uint)pbVar40 >> 8);
            *pbVar46 = *pbVar46 + cVar47;
            pbVar21 = pbVar50;
            if (SCARRY1(bVar10,cVar47) != (char)*pbVar46 < '\0') {
              *pbVar20 = *pbVar20 + bVar7;
              bVar10 = cVar6 + 0x2c;
              if ((POPCOUNT(bVar10) & 1U) == 0) {
                *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
                bVar7 = cVar6 + 0x59;
                pcVar18 = (char *)CONCAT31(uVar29,bVar7);
                *(char **)pbVar16 = pcVar18 + (uint)(0xd2 < bVar10) + *(int *)pbVar16;
                pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar11 + pbVar46[-0x67],bVar9));
                *pcVar18 = *pcVar18 + bVar7;
                pbVar21 = (byte *)((CONCAT31(uVar29,cVar6 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar7));
                pbVar20 = pbVar40;
                uStack_24 = in_ES;
code_r0x00402700:
                *pbVar50 = *pbVar50 + (char)pbVar50;
                cVar6 = (char)pbVar50 + '\x02';
                pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar50 >> 8),cVar6);
                bVar56 = (POPCOUNT(cVar6) & 1U) == 0;
                pbVar50 = pbVar43;
code_r0x00402704:
                if (bVar56) {
                  *pbVar40 = *pbVar40 + (char)pbVar40;
                  cVar6 = (char)pbVar40 + '\x02';
                  pcVar18 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar6);
                  puVar15 = puVar48;
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
                    pbVar40 = pbVar16;
                    if ((char)*piVar27 != '\0' &&
                        SCARRY1((char)iVar19,bVar10) == (char)*piVar27 < '\0') {
                      *(byte *)piVar27 = (char)*piVar27 + bVar10;
                      bVar7 = cVar6 + 0x9c;
                      piVar27 = (int *)CONCAT31(uVar29,bVar7);
                      puVar41 = puVar15 + (int)pbVar21 * 2;
                      uVar17 = *puVar41;
                      uVar22 = *puVar41;
                      *puVar41 = (uint)(pbVar16 + uVar22 + (0xd2 < bVar10));
                      *piVar27 = (*piVar27 - (int)piVar27) -
                                 (uint)(CARRY4(uVar17,(uint)pbVar16) ||
                                       CARRY4((uint)(pbVar16 + uVar22),(uint)(0xd2 < bVar10)));
                      uVar17 = *puVar15;
                      *(byte *)puVar15 = (byte)*puVar15 + bVar7;
                      pbVar40 = (byte *)CONCAT22((short)((uint)pbVar50 >> 0x10),uVar54);
                      if (!CARRY1((byte)uVar17,bVar7)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    pbVar50 = pbVar40;
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
                      puVar41 = (uint *)CONCAT31(uVar29,bVar9);
                      *puVar41 = *puVar41 | (uint)puVar41;
                      bVar7 = *pbVar46;
                      cVar6 = (char)((uint)pbVar20 >> 8);
                      *pbVar46 = *pbVar46 + cVar6;
                      if (*pbVar46 == 0 || SCARRY1(bVar7,cVar6) != (char)*pbVar46 < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar41 = (char)*puVar41 + bVar9;
                      pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x55);
                      puVar41 = puVar15 + (int)pbVar21 * 2;
                      bVar56 = CARRY4(*puVar41,(uint)pbVar16) ||
                               CARRY4((uint)(pbVar16 + *puVar41),(uint)(0xd2 < bVar9));
                      *puVar41 = (uint)(pbVar16 + *puVar41 + (0xd2 < bVar9));
                      in_stack_ffffffd4 = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar29 = (undefined3)((uint)pcVar18 >> 8);
                      bVar10 = ((char)pcVar18 - *pcVar18) - bVar56;
                      puVar41 = (uint *)CONCAT31(uVar29,bVar10);
                      uVar17 = *puVar15;
                      *(byte *)puVar15 = (byte)*puVar15 + bVar10;
                      if (CARRY1((byte)uVar17,bVar10)) break;
                      pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),
                                                 (byte)pbVar46 | (byte)((uint)pbVar16 >> 8));
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
                        cVar11 = (char)pbVar16;
                        *pbVar21 = *pbVar21 - cVar11;
                        *pbVar16 = *pbVar16 + (char)pbVar20;
                        bVar7 = (cVar6 + '\t') - *(char *)CONCAT31(uVar29,cVar6 + '\t');
                        pbVar40 = (byte *)CONCAT31(uVar29,bVar7);
                        bVar10 = *pbVar40;
                        *pbVar40 = *pbVar40 + bVar7;
                        pbVar43 = pbVar20 + 1;
                        cVar6 = bVar7 - CARRY1(bVar10,bVar7);
                        pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                        *pcVar18 = *pcVar18 + cVar6;
                        *pcVar18 = *pcVar18 + cVar6;
                        *pcVar18 = *pcVar18 + cVar6;
                        *pcVar18 = *pcVar18 + cVar6;
                        cVar47 = (char)((uint)pbVar43 >> 8);
                        pbVar20[2] = pbVar20[2] + cVar47;
                        *pcVar18 = *pcVar18 + cVar6;
                        pcVar18 = (char *)(*(int *)pbVar43 * 0x170000);
                        *pcVar18 = *pcVar18;
                        *pcVar18 = *pcVar18;
                        *pbVar43 = *pbVar43;
                        uVar36 = (undefined2)((uint)pbVar46 >> 0x10);
                        cVar6 = (char)pbVar46;
                        bVar9 = (char)((uint)pbVar46 >> 8) + *(char *)((int)pbVar16 * 5);
                        pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(bVar9,cVar6));
                        pbVar46[(int)pcVar18] = pbVar46[(int)pcVar18];
                        *pcVar18 = *pcVar18 - cVar6;
                        *pbVar16 = *pbVar16 + (char)pbVar43;
                        uVar29 = (undefined3)((uint)pcVar18 >> 8);
                        bVar7 = -*pcVar18;
                        pbVar40 = (byte *)CONCAT31(uVar29,bVar7);
                        *pbVar46 = *pbVar46 + cVar11;
                        *pbVar16 = *pbVar16 ^ bVar7;
                        *pbVar16 = *pbVar16 + bVar7;
                        *pbVar40 = *pbVar40 + bVar7;
                        bVar10 = *pbVar40;
                        *pbVar40 = *pbVar40 + bVar7;
                        *(byte **)pbVar16 = pbVar16 + (uint)CARRY1(bVar10,bVar7) + *(int *)pbVar16;
                        bVar10 = *pbVar16;
                        *pbVar16 = *pbVar16 + bVar7;
                        if (SCARRY1(bVar10,bVar7) == (char)*pbVar16 < '\0') {
                          pcVar18 = (char *)((uint)pbVar40 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar18 = *pcVar18 + (char)pcVar18;
                          uStack_20 = uVar55;
                          uStack_24 = (ushort)uStack_1c;
                        }
                        else {
                          *pbVar40 = *pbVar40 + bVar7;
                          cVar12 = bVar7 + 0x12;
                          pcVar18 = (char *)CONCAT31(uVar29,cVar12);
                          bVar10 = *pbVar46;
                          *pbVar46 = *pbVar46 + cVar12;
                          uStack_24 = uVar52;
                          if (SCARRY1(bVar10,cVar12) != (char)*pbVar46 < '\0') {
                            *pcVar18 = *pcVar18 + cVar12;
                            cVar12 = bVar7 + 0x24;
                            pcVar18 = (char *)CONCAT31(uVar29,cVar12);
                            *pcVar18 = *pcVar18 + cVar47;
                            pbVar50 = (byte *)CONCAT13(uStack_1d,(uint3)uVar55);
                            *pcVar18 = *pcVar18 + cVar12;
                            bVar9 = bVar9 | unaff_EBP[-0x6e];
                            pcVar13 = (char *)CONCAT22(uVar36,CONCAT11(bVar9,cVar6));
                            *pcVar18 = *pcVar18 + cVar12;
                            cRam0000917d = cRam0000917d + cVar11;
                            bVar38 = bVar7 + 0x48;
                            pcVar13[-0x6e] = pcVar13[-0x6e] + bVar9;
                            *(char *)CONCAT31(uVar29,bVar38) =
                                 *(char *)CONCAT31(uVar29,bVar38) + bVar38;
                            bVar10 = bVar7 + 0x53 + *pbVar50;
                            cVar6 = bVar10 + (0xf4 < bVar38);
                            cVar6 = cVar6 + *(char *)CONCAT31(uVar29,cVar6) +
                                    (CARRY1(bVar7 + 0x53,*pbVar50) || CARRY1(bVar10,0xf4 < bVar38));
                            pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                            *pcVar13 = *pcVar13 - (char)uVar55;
                            *pcVar18 = *pcVar18 + cVar6;
                            pbVar16 = pbVar16 + -*(int *)pbVar16;
                            *(char *)((int)pbVar16 * 5) = *(char *)((int)pbVar16 * 5) + bVar9;
                            pcVar18[(int)unaff_EBP] = pcVar18[(int)unaff_EBP] + cVar6;
                            *pcVar18 = *pcVar18 + cVar6;
                            bVar7 = (byte)(uVar55 >> 8) | *pbVar16;
                            uVar32 = (undefined1)uStack_1c;
                            cVar47 = (char)((uint)uStack_1c >> 8) + *(char *)(uStack_1c + 0xf);
                            *pcVar18 = *pcVar18 + cVar6;
                            bVar10 = cVar6 + 0x2aU & *pbVar16;
                            iVar19 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar29,bVar10) =
                                 *(char *)CONCAT31(uVar29,bVar10) + bVar10;
                            pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
                            cVar47 = cVar47 + *(char *)(CONCAT22(uStack_1c._2_2_,
                                                                 CONCAT11(cVar47,uVar32)) + 0x10);
                            *pcVar18 = *pcVar18 + bVar10 + 0x2a;
                            bVar10 = bVar10 + 0x54 & *pbVar16;
                            iVar14 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar29,bVar10) =
                                 *(char *)CONCAT31(uVar29,bVar10) + bVar10;
                            pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
                            puVar42 = (uint *)CONCAT22(uStack_1c._2_2_,
                                                       CONCAT11(cVar47 + *(char *)(CONCAT22(
                                                  uStack_1c._2_2_,CONCAT11(cVar47,uVar32)) + 0x11),
                                                  uVar32));
                            *pcVar18 = *pcVar18 + bVar10 + 0x2a;
                            bVar10 = bVar10 + 0x54 & *pbVar16;
                            puVar48 = (uint *)(pbVar21 +
                                              *(int *)(unaff_EBP + 0x11) + iVar14 + iVar19);
                            *(char *)CONCAT31(uVar29,bVar10) =
                                 *(char *)CONCAT31(uVar29,bVar10) + bVar10;
                            pbVar40 = (byte *)CONCAT31(uVar29,bVar10 + 0x2a);
                            puVar41 = (uint *)CONCAT22((short)((uint)pbVar50 >> 0x10),
                                                       CONCAT11(bVar7 + *pbVar40,(char)uVar55));
                            uVar60 = CONCAT44(pbVar16,pbVar40 + (uint)CARRY1(bVar7,*pbVar40) +
                                                                *(int *)pbVar40);
                            uVar55 = uVar52;
                            goto code_r0x00402866;
                          }
                        }
                        cVar6 = (char)pcVar18;
                        uVar29 = (undefined3)((uint)pcVar18 >> 8);
                        cVar47 = cVar6 + '\x02';
                        piVar27 = (int *)CONCAT31(uVar29,cVar47);
                        pbVar20 = pbVar43;
                        in_ES = uVar52;
                        pbVar40 = pbVar16;
                        if (SCARRY1(cVar6,'\x02') != cVar47 < '\0') goto code_r0x00402724;
                        *(char *)piVar27 = (char)*piVar27 + cVar47;
                        pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\n');
                        *(byte *)puVar15 = (byte)*puVar15 - cVar11;
                        *pbVar16 = *pbVar16 + (char)pbVar43;
                      }
                      pbVar40 = unaff_EBP + 0x6fe1411;
                      bVar56 = CARRY1(*pbVar40,bVar10);
                      *pbVar40 = *pbVar40 + bVar10;
                    }
                    goto code_r0x00402746;
                  }
                  pbVar46[(int)pbVar16] = pbVar46[(int)pbVar16] + cVar6;
                  pbVar40 = pbVar20;
                  pbVar50 = pbVar21;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar54 = 0x927c;
              in_stack_ffffffcc = 0x40268f;
              uVar60 = func_0x02040000(in_CS,in_stack_ffffffd4,pbVar43);
              pbVar16 = (byte *)((ulonglong)uVar60 >> 0x20);
              *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
              pbVar20 = (byte *)CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '\x12');
              pbVar40 = extraout_ECX_00;
              in_CS = uVar54;
            }
            goto code_r0x00402680;
          }
          pbVar21 = unaff_EBP + -1;
          *pcVar18 = *pcVar18 + cVar6;
          pbVar16 = (byte *)CONCAT31(uVar45,bVar10 | *pbVar46);
          pbVar20 = (byte *)CONCAT31(uVar29,cVar6 + ':');
code_r0x00402677:
          puVar48 = (uint *)((int)puVar48 + -1);
          unaff_EBP = pbVar21;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar20 = *pbVar20 + bVar10;
      pbVar46 = (byte *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar46 >> 8) | unaff_EBP[-0x6b],
                                          (char)pbVar46));
      *pbVar20 = *pbVar20 + bVar10;
      cVar6 = bVar7 + 0xf;
      pcVar18 = (char *)CONCAT31(uVar29,cVar6);
      uStack_1c = CONCAT22(uStack_1c._2_2_,uStack_20);
      if (SCARRY1(bVar10,'\x02') == cVar6 < '\0') {
        pcVar18 = pcVar18 + (0xfd < bVar10) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar18 = *pcVar18 + cVar6;
      cVar47 = bVar7 + 0x11;
      pbVar21 = (byte *)CONCAT31(uVar29,cVar47);
      uVar60 = CONCAT44(pbVar16,pbVar21);
      uStack_1c = CONCAT22(uStack_1c._2_2_,uStack_20);
      pbVar20 = pbVar40;
      pbVar40 = pbVar50;
      if (SCARRY1(cVar6,'\x02') == cVar47 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar21 = *pbVar21 + (char)pbVar21;
      bVar10 = (char)pbVar21 + 2;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar10);
      if ((POPCOUNT(bVar10) & 1U) == 0) {
        *pcVar18 = *pcVar18 + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar50 = pbVar46 + (int)pbVar20;
      bVar56 = CARRY1(*pbVar50,bVar10);
      *pbVar50 = *pbVar50 + bVar10;
      pbVar21 = unaff_EBP;
      pbVar50 = pbVar40;
      uVar55 = uVar52;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar41 = (char)*puVar41 + (byte)puVar41;
  uVar29 = (undefined3)((uint)puVar41 >> 8);
  bVar10 = (byte)puVar41 | *(byte *)((int)puVar41 + 0x400000e);
  pcVar18 = (char *)CONCAT31(uVar29,bVar10);
  puVar48 = puVar15;
  if ('\0' < (char)bVar10) {
    *pcVar18 = *pcVar18 + bVar10;
    bVar10 = bVar10 + 0x28 | *(byte *)CONCAT31(uVar29,bVar10 + 0x28);
    *pbVar46 = *pbVar46 + (char)((uint)pbVar20 >> 8);
    puVar48 = puVar15 + 1;
    out(*puVar15,(short)pbVar16);
    *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
    pcVar18 = (char *)(uint)(bVar10 | *pbVar16);
    in_stack_ffffffd4 = unaff_EBP;
  }
  bVar10 = (byte)pcVar18 & 0x7b;
  bVar56 = (char)(bVar10 + 0x17) < '\0';
  uStack_24 = uVar54;
  if (SCARRY1(bVar10,'\x17') == bVar56) {
    pbVar43 = pbVar50;
    if (SCARRY1(bVar10,'\x17') != bVar56) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar47 = (char)pbVar50;
  *pbVar50 = *pbVar50 + cVar47;
  iVar31 = (int3)((uint)pbVar50 >> 8);
  cVar6 = cVar47 + '\x02';
  pbVar40 = (byte *)CONCAT31(iVar31,cVar6);
  bVar56 = (POPCOUNT(cVar6) & 1U) == 0;
  if (!bVar56) goto code_r0x00402704;
  *pbVar40 = *pbVar40 + cVar6;
  cVar47 = cVar47 + '\x04';
  pcVar18 = (char *)CONCAT31(iVar31,cVar47);
  if ((POPCOUNT(cVar47) & 1U) == 0) {
    *pcVar18 = *pcVar18 + cVar47;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar16 = (byte *)((int)iVar31 >> 0x17);
  puVar15 = puVar48;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar44 = (uint *)((ulonglong)uVar60 >> 0x20);
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    cVar6 = (char)puVar42 - (byte)*puVar15;
    iVar19 = CONCAT22((short)((uint)puVar42 >> 0x10),
                      CONCAT11((char)((uint)puVar42 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),cVar6) + 0x12),cVar6));
    *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
    uVar29 = (undefined3)((ulonglong)uVar60 >> 8);
    bVar10 = (char)uVar60 + 0x2aU & (byte)*puVar44;
    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x12));
    *pcVar18 = *pcVar18 + bVar10;
    puVar24 = (uint *)CONCAT31(uVar29,bVar10 + 0x2a);
    pbVar50 = (byte *)(uint)uVar55;
get_Value:
    cVar6 = *(char *)(iVar19 + 0x13);
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
    uVar29 = (undefined3)((uint)puVar24 >> 8);
    bVar10 = (char)puVar24 + 0x2aU & (byte)*puVar44;
    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x13));
    *pcVar18 = *pcVar18 + bVar10;
    pbVar40 = (byte *)CONCAT31(uVar29,bVar10 + 0x2a);
    uVar17 = (uint)uVar55;
    bVar7 = (byte)((uint)puVar41 >> 8);
    bVar10 = bVar7 + *pbVar40;
    pbVar40 = pbVar40 + (uint)CARRY1(bVar7,*pbVar40) + *(int *)pbVar40;
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    puVar42 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar19 >> 0x10),
                                               CONCAT11((char)((uint)iVar19 >> 8) + cVar6,
                                                        (char)iVar19)) >> 8),
                               (char)iVar19 - (byte)*puVar15);
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11(bVar10 + *pbVar40,(char)puVar41));
    pbVar40 = pbVar40 + (uint)CARRY1(bVar10,*pbVar40) + *(int *)pbVar40;
code_r0x00402898:
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    bVar10 = (byte)puVar44;
    uVar36 = CONCAT11((char)((uint)puVar44 >> 8) - (byte)*puVar15,bVar10);
    pbVar46 = (byte *)CONCAT22((short)((uint)puVar44 >> 0x10),uVar36);
    pcVar18 = (char *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar42[-0x19],
                                        (char)puVar42));
    *pbVar40 = *pbVar40 + (char)pbVar40;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 + '\x03');
    puVar42 = puVar15;
    do {
      puVar15 = puVar42 + 1;
      out(*puVar42,uVar36);
      pcVar18 = pcVar18 + -1;
      bVar7 = (byte)pbVar40;
      *pbVar40 = *pbVar40 + bVar7;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | *pbVar46,(char)puVar41));
      *pbVar40 = *pbVar40 + bVar7;
      *pcVar18 = *pcVar18 + bVar10;
      *(byte *)((int)pbVar40 * 2) = *(byte *)((int)pbVar40 * 2) ^ bVar7;
      *pbVar40 = *pbVar40 + bVar7;
      *pbVar40 = *pbVar40 | bVar7;
      bVar56 = CARRY1((byte)*puVar41,bVar10);
      *(byte *)puVar41 = (byte)*puVar41 + bVar10;
      cVar6 = bVar7 + 10 + bVar56;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar6);
      puVar42 = puVar15;
    } while (bVar7 < 0xf6 && !CARRY1(bVar7 + 10,bVar56));
    *pbVar40 = *pbVar40 + cVar6;
    in_stack_ffffffcc = CONCAT22((short)((uint)in_stack_ffffffcc >> 0x10),uVar52);
    pcVar13 = (char *)((uint)pbVar40 | *puVar48);
    puVar42 = (uint *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                               CONCAT11((char)((uint)pcVar18 >> 8) + unaff_EBP[-100],(char)pcVar18))
    ;
    *pcVar13 = *pcVar13 + (char)pcVar13;
    bVar10 = (char)pcVar13 + 7;
    uVar60 = CONCAT44(pbVar46,CONCAT31((int3)((uint)pcVar13 >> 8),bVar10));
code_r0x004028c8:
    puVar44 = (uint *)((ulonglong)uVar60 >> 0x20);
  } while ((POPCOUNT(bVar10) & 1U) != 0);
  *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
  puVar24 = (uint *)CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '-');
  puVar15 = (uint *)((uint)puVar15 | *(uint *)((int)puVar44 + 0x3b));
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
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
    bVar56 = (POPCOUNT((byte)*puVar44) & 1U) == 0;
    if (bVar56) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar56) {
      iVar19 = CONCAT31((int3)((uint)puVar42 >> 8),(char)puVar42 - (byte)*puVar15);
      goto get_Value;
    }
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
    puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + 'r');
    pbVar50 = unaff_EBP;
code_r0x004028e2:
    uVar36 = (undefined2)((uint)in_stack_ffffffcc >> 0x10);
    uVar22 = *puVar24;
    *puVar24 = (uint)(*puVar24 + (int)puVar24);
    if (SCARRY4(uVar22,(int)puVar24)) {
      if (*puVar24 == 0 || SCARRY4(uVar22,(int)puVar24) != (int)*puVar24 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar42 = (uint *)((int)puVar42 + -1);
    cVar6 = (char)puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + cVar6;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) |
                                        *(byte *)((int)puVar41 + 0x16d7207),(char)puVar41));
    pbVar40 = (byte *)((int)puVar24 + 0x7d);
    bVar10 = *pbVar40;
    bVar9 = (byte)((uint)puVar44 >> 8);
    bVar7 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar9;
    uVar17 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar7,bVar9) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar40 < '\0') * 0x80 | (uint)(*pbVar40 == 0) * 0x40 |
             (uint)(bVar8 & 1) * 0x10 | (uint)((POPCOUNT(*pbVar40) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar10,bVar9);
    *(byte *)puVar24 = (byte)*puVar24 + cVar6;
    pbVar40 = (byte *)(CONCAT31((int3)((uint)puVar24 >> 8),cVar6 + '+') ^ *puVar48);
    if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar10 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar10;
    puVar24 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10 + 0x72);
    if (bVar10 < 0x8e && (byte)(bVar10 + 0x72) != '\0') {
      if (SCARRY1(bVar10,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar24 + 0x6f) = *(byte *)((int)puVar24 + 0x6f) + bVar9;
    }
code_r0x00402905:
    uVar60 = CONCAT44(puVar44,puVar24);
    puVar42 = (uint *)((int)puVar42 + -1);
    cVar6 = (char)puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + cVar6;
    bVar10 = (byte)((uint)puVar41 >> 8) | (byte)*puVar41;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar10,(char)puVar41));
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
    puVar41 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar60 >> 0x20));
    puStackY_50 = (uint *)CONCAT22(puStackY_50._2_2_,uVar52);
    uStackY_4c = puVar42;
    while( true ) {
      pcVar18 = (char *)((int)uVar60 * 2);
      *pcVar18 = *pcVar18 - (char)puVar41;
      uVar22 = *puVar42;
      cVar6 = (char)((uint)puVar41 >> 8);
      *(byte *)puVar42 = (byte)*puVar42 + cVar6;
      if (SCARRY1((byte)uVar22,cVar6) == (char)(byte)*puVar42 < '\0') {
        pbVar40 = (byte *)((int)puVar48 + (int)uVar60);
        *pbVar40 = *pbVar40 + (char)uVar60;
        bVar10 = *pbVar40;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar44 = (uint *)((ulonglong)uVar60 >> 0x20);
      cVar6 = (char)uVar60;
      *(char *)uVar60 = *(char *)uVar60 + cVar6;
      uVar29 = (undefined3)((ulonglong)uVar60 >> 8);
      bVar10 = cVar6 + 7;
      puVar24 = (uint *)CONCAT31(uVar29,bVar10);
      bVar7 = (byte)((ulonglong)uVar60 >> 0x28);
      if ((POPCOUNT(bVar10) & 1U) != 0) break;
      *(byte *)puVar24 = (byte)*puVar24 + bVar10;
      pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '3');
      uVar36 = (undefined2)((uint)puVar42 >> 0x10);
      uVar32 = SUB41(puVar42,0);
      bVar10 = (char)((uint)puVar42 >> 8) + *(byte *)((int)puVar15 + 0x16) + (0xd3 < bVar10);
      puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(bVar10,uVar32));
      *pcVar18 = *pcVar18 + cVar6 + '3';
      cVar47 = cVar6 + ':';
      puVar24 = (uint *)CONCAT31(uVar29,cVar47);
      if ((POPCOUNT(cVar47) & 1U) != 0) {
        bVar10 = bVar10 | *(byte *)((int)puVar44 + 7);
        puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(bVar10,uVar32));
        bVar56 = (POPCOUNT(bVar10) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar24 = (byte)*puVar24 + cVar47;
      puVar24 = (uint *)(CONCAT31(uVar29,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar40 = (byte *)((int)puVar24 + 0x72);
      bVar57 = SCARRY1(*pbVar40,bVar7);
      *pbVar40 = *pbVar40 + bVar7;
      bVar10 = POPCOUNT(*pbVar40);
code_r0x0040294c:
      if ((bVar10 & 1) == 0) {
        *(byte *)((int)puVar24 + 0x72) = *(byte *)((int)puVar24 + 0x72) + (char)((uint)puVar44 >> 8)
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
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar24,(char)puVar41)
                                );
      *(byte *)puVar24 = (byte)*puVar24 + cVar6;
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                 CONCAT11((byte)((uint)puVar44 >> 8) | (byte)puVar42[0x18],
                                          (char)puVar44));
      puVar15 = puStackY_54;
      puVar48 = puStackY_50;
code_r0x00402966:
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
      bVar10 = (byte)((uint)puVar42 >> 8) | *(byte *)((int)puVar44 + 7);
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar10,(char)puVar42));
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
      uVar36 = (undefined2)((uint)in_stack_ffffffcc >> 0x10);
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
code_r0x00402974:
      bVar10 = 0xe9 < (byte)puVar24;
      in_stack_ffffffcc = CONCAT22(uVar36,in_CS);
      in_CS = 0x2d0a;
      uVar60 = func_0x00006128(in_stack_ffffffcc);
      puVar41 = (uint *)uVar60;
      piVar27 = (int *)((int)((ulonglong)uVar60 >> 0x20) + -0x3d);
      *piVar27 = (int)((int)puVar15 + (uint)bVar10 + *piVar27);
      bVar56 = SCARRY4(*puVar41,(int)puVar41);
      *puVar41 = *puVar41 + (int)puVar41;
      uVar22 = *puVar41;
      puVar41 = extraout_ECX_02;
code_r0x00402982:
      bVar10 = POPCOUNT(uVar22 & 0xff);
      if (bVar56) {
        *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
        puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                   CONCAT11((byte)((uint)puVar41 >> 8) |
                                            *(byte *)((ulonglong)uVar60 >> 0x20),(char)puVar41));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar18 = (char *)((ulonglong)uVar60 >> 0x20);
      if ((bVar10 & 1) == 0) {
        *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
        *pcVar18 = *pcVar18 + (char)puVar41;
        uVar60 = CONCAT44(CONCAT22((short)((ulonglong)uVar60 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar60 >> 0x28) - pcVar18[0x1f],
                                            (char)((ulonglong)uVar60 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '('));
code_r0x00402991:
        puVar44 = (uint *)((ulonglong)uVar60 >> 0x20);
        pbVar40 = (byte *)uVar60;
        bVar10 = (byte)uVar60;
        bVar56 = CARRY1(bVar10,*pbVar40);
        puVar24 = (uint *)CONCAT31((int3)((ulonglong)uVar60 >> 8),bVar10 + *pbVar40);
        cVar6 = bVar10 + *pbVar40;
        if (SCARRY1(bVar10,*pbVar40)) goto code_r0x004029c4;
code_r0x00402995:
        puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                   CONCAT11(((char)((uint)puVar44 >> 8) -
                                            *(byte *)((int)puVar44 + 0x6b)) - bVar56,(char)puVar44))
        ;
        bVar10 = (byte)puVar24;
        bVar56 = CARRY1(bVar10,(byte)*puVar24);
        bVar57 = SCARRY1(bVar10,(byte)*puVar24);
        puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar10 + (byte)*puVar24);
        do {
          if (!bVar57) {
            puVar15 = (uint *)((int)puVar15 + (uint)bVar56 + *puVar24);
            pbVar40 = (byte *)((int)puVar24 + *puVar24);
            bVar7 = (byte)pbVar40;
            *pbVar40 = *pbVar40 + bVar7;
            *(byte *)puVar41 = (byte)*puVar41 + (char)puVar41;
            bVar10 = *pbVar40;
            *pbVar40 = *pbVar40 + bVar7;
            *puVar48 = (uint)((int)puVar42 + (uint)CARRY1(bVar10,bVar7) + *puVar48);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar41;
            uVar29 = (undefined3)((uint)pbVar40 >> 8);
            bVar7 = bVar7 | (byte)*puVar15;
            puVar24 = (uint *)CONCAT31(uVar29,bVar7);
            uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uStack_20);
            uVar1 = *puVar24;
            uVar22 = *puVar24;
            *puVar24 = (uint)(*puVar24 + (int)puVar24);
            if (SCARRY4(uVar22,(int)puVar24)) {
              *(byte *)puVar15 = (byte)*puVar15 - (char)puVar42;
              *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
              *(byte *)puVar48 = (byte)*puVar48 - (char)puVar42;
            }
            else {
              puStackY_50 = (uint *)CONCAT22(puStackY_50._2_2_,uVar52);
              uStack_20 = uVar52;
              if (CARRY4(uVar1,(uint)puVar24)) goto code_r0x00402971;
              bVar56 = CARRY1(bVar7,(byte)*puVar24);
              bVar57 = SCARRY1(bVar7,(byte)*puVar24);
              puVar24 = (uint *)CONCAT31(uVar29,bVar7 + (byte)*puVar24);
code_r0x004029be:
              if (!bVar57) {
                puStackY_50 = (uint *)CONCAT22(puStackY_50._2_2_,uVar52);
                *(byte *)((int)puVar44 + -0x37) =
                     (*(byte *)((int)puVar44 + -0x37) - (char)((uint)puVar44 >> 8)) - bVar56;
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
            bVar10 = (byte)puVar41;
            bVar56 = CARRY1((byte)*puVar44,bVar10);
            bVar57 = SCARRY1((byte)*puVar44,bVar10);
            *(byte *)puVar44 = (byte)*puVar44 + bVar10;
            if (bVar56) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar57) {
            uVar52 = (ushort)pbVar50;
            goto code_r0x00402966;
          }
          uVar17 = (uint)uVar52;
          *(uint *)((int)puVar44 + -0x23) =
               (*(int *)((int)puVar44 + -0x23) - (int)puVar15) - (uint)bVar56;
          uVar22 = *puVar24;
          bVar10 = (byte)puVar24;
          uVar1 = *puVar24;
          uVar29 = (undefined3)((uint)puVar24 >> 8);
          bVar7 = bVar10 + (byte)*puVar24;
          puVar24 = (uint *)CONCAT31(uVar29,bVar7);
          if (SCARRY1(bVar10,(byte)uVar1)) goto code_r0x00402972;
          in_stack_ffffffcc = CONCAT22((short)((uint)in_stack_ffffffcc >> 0x10),uVar52);
          cVar6 = (char)puVar44;
          bVar9 = ((char)((uint)puVar44 >> 8) - *(byte *)((int)puVar44 + -0xf)) -
                  CARRY1(bVar10,(byte)uVar22);
          puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar9,cVar6));
          puVar49 = (uint *)CONCAT31(uVar29,bVar7 + (byte)*puVar24);
          bVar10 = (byte)puVar41;
          if (SCARRY1(bVar7,(byte)*puVar24)) {
            *(byte *)puVar44 = (byte)*puVar44 + bVar10;
            uVar60 = CONCAT44(puVar44,(int)puVar49 + -0x1c37211);
            pcVar18 = (char *)((int)puVar49 + -0x1c3720a);
            *pcVar18 = *pcVar18 + bVar9;
            bVar10 = POPCOUNT(*pcVar18);
            goto code_r0x00402984;
          }
          puVar15 = (uint *)((int)puVar15 +
                            (-(uint)CARRY1(bVar7,(byte)*puVar24) - *(int *)((int)puVar44 + 5)));
          bVar56 = SCARRY4((int)puVar49,*puVar49);
          uVar22 = (int)puVar49 + *puVar49;
          uVar60 = CONCAT44(puVar44,uVar22);
          if (bVar56) goto code_r0x00402982;
          bVar7 = (byte)uVar22 + 0x8e;
          uVar23 = CONCAT31((int3)(uVar22 >> 8),bVar7 - CARRY4((uint)puVar49,*puVar49));
          *puVar42 = (*puVar42 - uVar23) -
                     (uint)((byte)uVar22 < 0x72 || bVar7 < CARRY4((uint)puVar49,*puVar49));
          pbVar40 = (byte *)(uVar23 - 0x5e);
          bVar7 = *pbVar40;
          *pbVar40 = *pbVar40 + bVar9;
          uVar22 = (uint)CARRY1(bVar7,bVar9);
          uVar1 = uVar23 - 0x32d72;
          puVar24 = (uint *)(uVar1 - uVar22);
          if (SBORROW4(uVar23,0x32d72) != SBORROW4(uVar1,uVar22)) goto code_r0x00402992;
          uVar54 = uVar55;
          if (uVar23 < 0x32d72 || uVar1 < uVar22) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar24 >> 8);
            *(byte *)puVar44 = (byte)*puVar44 + bVar10;
            puVar49 = puVar15 + 1;
            out(*puVar15,CONCAT11(bVar9,cVar6));
            *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
            goto code_r0x00402a3e;
          }
          bVar56 = CARRY4((uint)puVar24,*puVar24);
          bVar57 = SCARRY4((int)puVar24,*puVar24);
          puVar24 = (uint *)((int)puVar24 + *puVar24);
          if (!bVar57) {
            uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uVar52);
            *(byte *)puVar15 = (byte)*puVar15 + bVar56;
            bVar7 = (byte)puVar24;
            *(byte *)((int)puVar44 + (int)unaff_EBP) =
                 *(byte *)((int)puVar44 + (int)unaff_EBP) + bVar7;
            *(byte *)puVar42 = (byte)*puVar42 + cVar6;
            *(byte *)puVar42 = (byte)*puVar42 ^ bVar7;
            bVar34 = (byte)((uint)puVar41 >> 8);
            *(byte *)puVar15 = (byte)*puVar15 + bVar34;
            *(byte *)puVar24 = (byte)*puVar24 + bVar7;
            pbVar40 = (byte *)CONCAT31((int3)((uint)puVar24 >> 8),bVar7 | (byte)*puVar24);
            *(byte *)puVar41 = (byte)*puVar41 + cVar6;
            bVar38 = *pbVar40;
            uVar36 = (undefined2)((uint)puVar41 >> 0x10);
            puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(bVar34 + bVar38,bVar10));
            pbVar40 = pbVar40 + (uint)CARRY1(bVar34,*pbVar40) + *(int *)pbVar40;
            *(byte *)puVar44 = (byte)*puVar44 + bVar10;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar50 = pbVar40 + 0x73;
            bVar7 = *pbVar50;
            *pbVar50 = *pbVar50 + bVar9;
            uVar29 = (undefined3)((uint)pbVar40 >> 8);
            bVar7 = (char)pbVar40 + CARRY1(bVar7,bVar9);
            pcVar18 = (char *)CONCAT31(uVar29,bVar7);
            *(byte *)puVar44 = (byte)*puVar44 + bVar10;
            if ((POPCOUNT((byte)*puVar44) & 1U) == 0) {
              uStack_20 = uVar52;
            }
            puVar51 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x17));
            *pcVar18 = *pcVar18 + bVar7;
            cVar6 = bVar7 + 2;
            puVar24 = (uint *)CONCAT31(uVar29,cVar6);
            if (bVar7 < 0xfe) {
              *puVar24 = (uint)(*puVar24 + (int)puVar24);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar24 = (byte)*puVar24 + cVar6;
            uVar17 = *puVar44;
            puVar49 = (uint *)((int)puVar15 + puVar42[0x19]);
            *(byte *)puVar24 = (byte)*puVar24 + cVar6;
            puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(bVar34 + bVar38 | (byte)*puVar24,
                                                       bVar10 | (byte)uVar17));
            puVar48 = puVar51;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar10;
    pbVar40 = (byte *)((int)puVar24 + 0x73);
    bVar56 = CARRY1(*pbVar40,bVar7);
    *pbVar40 = *pbVar40 + bVar7;
  } while( true );
code_r0x00402992:
  pbVar40 = (byte *)((int)puVar24 + 0x2a);
  bVar56 = CARRY1(*pbVar40,bVar9);
  *pbVar40 = *pbVar40 + bVar9;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar24) = *(byte *)(in_GS_OFFSET + (int)puVar24) + (char)puVar24;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | *(byte *)((int)puVar48 + 0x66),
                                      (char)puVar41));
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
      pcVar13 = (char *)CONCAT31(uVar29,bVar10);
      pcVar18 = (char *)segment(uVar54,(short)puVar42 + (short)puVar49);
      *pcVar18 = *pcVar18 + bVar10;
      uVar17 = puVar48[0x1a];
      *pcVar13 = *pcVar13 + bVar10;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | (byte)uVar17 |
                                          *(byte *)((int)puVar48 + 0x69),(char)puVar41));
      *pcVar13 = *pcVar13 + bVar10;
      bVar10 = bVar10 | (byte)*puVar44;
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar15 = puVar49 + (uint)bVar58 * -2 + 1;
    out(*puVar49,(short)puVar44);
  }
  else {
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar42[6],(char)puVar42)
                              );
code_r0x00402a5d:
    *pcVar18 = *pcVar18 + (char)pcVar18;
    piVar27 = (int *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + 'o');
    puVar15 = puVar49;
  }
code_r0x00402a61:
  pcVar18 = (char *)segment(uVar54,(short)puVar42 + (short)puVar15);
  *pcVar18 = *pcVar18 + (char)piVar27;
  cVar6 = (char)puVar41;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)puVar48[0x1a],cVar6));
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  uVar36 = CONCAT11((byte)((uint)puVar44 >> 8) | *(byte *)((int)puVar44 + 0x65),(char)puVar44);
  puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),uVar36);
  piVar25 = (int *)((int)piVar27 + *piVar27);
  puVar49 = puVar15;
  puVar51 = puVar48;
  uVar53 = uVar52;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402ae3;
  *(byte *)puVar44 = (byte)*puVar44 + cVar6;
  puVar49 = puVar15 + (uint)bVar58 * -2 + 1;
  out(*puVar15,uVar36);
code_r0x00402a75:
  bVar10 = (byte)((uint)puVar41 >> 8) | (byte)*puVar44;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar10,(char)puVar41));
  piVar27 = (int *)(uint)(byte)*puVar42;
  *(byte *)puVar49 = (byte)*puVar49 - bVar10;
  puVar51 = puVar48;
code_r0x00402a7f:
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  out(*puVar49,(short)puVar44);
  bVar10 = in((short)puVar44);
  *(byte *)puVar51 = bVar10;
  *(char *)piVar27 = (char)*piVar27 + (char)piVar27;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar44,(char)puVar41));
  iVar19 = *piVar27;
  cVar6 = in(1);
  puVar24 = (uint *)CONCAT31((int3)((uint)((int)piVar27 + *piVar27) >> 8),cVar6);
  *(char *)puVar24 = (char)*puVar24 + cVar6;
  puVar24 = (uint *)((uint)puVar24 | *puVar24);
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar44;
  puVar49 = (uint *)((int)puVar49 + (((uint)bVar58 * -8 + 4) - iVar19));
  puVar51 = (uint *)((int)puVar51 + (uint)bVar58 * -2 + 1);
  uStack_20 = uVar52;
  while( true ) {
    bVar10 = (byte)puVar24 | (byte)*puVar44;
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
    *(byte *)(puVar49 + -0xc800000) = (byte)puVar49[-0xc800000] + (char)puVar44;
    *(char *)piVar25 = (char)*piVar25 + cVar6;
    *(byte *)puVar44 = (byte)*puVar44 + cVar6;
    cVar47 = (char)puVar41;
    if ((POPCOUNT((byte)*puVar44) & 1U) != 0) {
      *(byte *)puVar44 = (byte)*puVar44 + cVar47;
      puVar15 = puVar49 + (uint)bVar58 * -2 + 1;
      out(*puVar49,(short)puVar44);
      piVar27 = (int *)((longlong)*piVar25 * 0x7b020a00);
      *(char *)piVar27 =
           (char)*piVar27 - ((longlong)(int)piVar27 != (longlong)*piVar25 * 0x7b020a00);
      pbVar50 = (byte *)((int)puVar48 + (int)unaff_EBP * 2);
      *pbVar50 = *pbVar50;
      goto code_r0x00402a61;
    }
    *(char *)piVar25 = (char)*piVar25 + cVar6;
    puVar24 = (uint *)CONCAT31(uVar29,(char)puVar24 + ':');
    puVar15 = (uint *)((uint)puVar49 | *(uint *)((int)puVar44 + -0x79));
    iVar19 = (int)puVar24 + *puVar24;
    if (SCARRY4((int)puVar24,*puVar24)) {
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar15[(int)puVar42],
                                          (char)puVar42));
      *(char *)((int)puVar44 * 2) = *(char *)((int)puVar44 * 2) + (char)iVar19;
      puVar51 = puVar48;
      goto code_r0x00402b33;
    }
    uVar29 = (undefined3)((uint)iVar19 >> 8);
    cVar6 = (char)iVar19 + CARRY4((uint)puVar24,*puVar24);
    piVar27 = (int *)CONCAT31(uVar29,cVar6);
    *(byte *)puVar44 = (byte)*puVar44 + cVar47;
    bVar56 = (POPCOUNT((byte)*puVar44) & 1U) != 0;
    if ((bVar56) && (bVar56)) goto code_r0x00402a61;
    *(char *)piVar27 = (char)*piVar27 + cVar6;
    cVar11 = cVar6 + '(';
    pcVar18 = (char *)CONCAT31(uVar29,cVar11);
    puVar51 = puVar48 + (uint)bVar58 * -2 + 1;
    uVar17 = in((short)puVar44);
    *puVar48 = uVar17;
    *pcVar18 = *pcVar18 + cVar11;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | bRama07b0222,cVar47));
    *pcVar18 = *pcVar18 + cVar11;
    pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '>');
code_r0x00402ad2:
    out(*puVar15,(short)puVar44);
    puVar49 = (uint *)((int)(puVar15 + (uint)bVar58 * -2 + 1) + (uint)bVar58 * -2 + 1);
    out((byte)puVar15[(uint)bVar58 * -2 + 1],(short)puVar44);
    bVar10 = (byte)pcVar18;
    *pcVar18 = *pcVar18 + bVar10;
    puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(byte)puVar42 | (byte)*puVar51);
    bVar8 = 9 < (bVar10 & 0xf) | bVar8;
    uVar29 = (undefined3)((uint)pcVar18 >> 8);
    bVar10 = bVar10 + bVar8 * -6;
    puVar44 = (uint *)((uint)puVar44 ^ *puVar44);
    cVar6 = bVar10 + (0x9f < bVar10 | bVar8 * (bVar10 < 6)) * -0x60 + (byte)*puVar44;
    piVar27 = (int *)CONCAT31(uVar29,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar27 = (char)*piVar27 + cVar6;
    piVar25 = (int *)CONCAT31(uVar29,cVar6 + '\x17');
    uVar53 = uVar52;
code_r0x00402ae3:
    out(*puVar49,(short)puVar44);
    puVar15 = puVar49 + (uint)bVar58 * -2 + 1 + (uint)bVar58 * -2 + 1;
    out(puVar49[(uint)bVar58 * -2 + 1],(short)puVar44);
    *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
code_r0x00402ae7:
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | unaff_EBP[-0x60],(char)puVar42)
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
      pbVar50 = (byte *)((int)puVar44 + (int)puVar24);
      *pbVar50 = *pbVar50 + cVar6;
      bVar10 = POPCOUNT(*pbVar50);
      puVar49 = puVar15;
code_r0x00402af9:
      uVar52 = uVar53;
      puVar48 = puVar51;
      if ((bVar10 & 1) == 0) {
        *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
        bVar10 = (byte)puVar41;
        *(byte *)puVar44 = (byte)*puVar44 + bVar10;
        uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uStack_20);
        puVar15 = puVar49 + (uint)bVar58 * -2 + 1;
        out(*puVar49,(short)puVar44);
        uVar17 = *puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + bVar10;
        iVar19 = CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + 'o') +
                 *(int *)((int)puVar44 * 2) + (uint)CARRY1((byte)uVar17,bVar10);
        pcVar18 = (char *)CONCAT31((int3)((uint)iVar19 >> 8),(char)iVar19 + '(');
        while( true ) {
          uVar17 = *puVar44;
          bVar7 = (byte)puVar41;
          *(byte *)puVar44 = (byte)*puVar44 + bVar7;
          pcVar18 = pcVar18 + (uint)CARRY1((byte)uVar17,bVar7) + iRam73280512;
          bVar10 = (byte)pcVar18;
          *pcVar18 = *pcVar18 + bVar10;
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                     CONCAT11((byte)((uint)puVar41 >> 8) | bRam7d160243,bVar7));
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
          *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar41 >> 8);
          uVar53 = uVar52;
          uVar52 = uStack_20;
          while( true ) {
            bVar7 = (byte)puVar42 | (byte)((uint)puVar41 >> 8);
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar7);
            *piVar25 = (int)(*piVar25 + (int)piVar25);
            cVar6 = (char)piVar25;
            *(byte *)puVar44 = (byte)*puVar44 + cVar6;
            if ((POPCOUNT((byte)*puVar44) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar25 = (char)*piVar25 + cVar6;
            uVar17 = CONCAT31((int3)((uint)piVar25 >> 8),cVar6 + '\x13');
            puVar24 = (uint *)(uVar17 + 0x19061224 + (uint)(0x1f9edfd < uVar17));
            uVar1 = (uint)(0xe4ffffdd < uVar17 + 0xfe061202 ||
                          CARRY4(uVar17 + 0x19061224,(uint)(0x1f9edfd < uVar17)));
            uVar22 = *puVar15;
            uVar17 = *puVar15;
            *puVar15 = (uint)((byte *)(uVar17 + (int)puVar24) + uVar1);
            bVar10 = POPCOUNT(*puVar15 & 0xff);
            puVar49 = puVar15;
            if ((SCARRY4(uVar22,(int)puVar24) != SCARRY4((int)(uVar17 + (int)puVar24),uVar1)) ==
                (int)*puVar15 < 0) goto code_r0x00402af9;
            bVar10 = (byte)puVar24;
            *(byte *)puVar24 = (byte)*puVar24 + bVar10;
            iVar19 = CONCAT31((int3)((uint)puVar24 >> 8),bVar10 + 2) + 0x9d7d +
                     (uint)(0xfd < bVar10);
            bVar10 = (byte)puVar44 | (byte)*puVar44;
            uVar17 = *puVar42;
            *(byte *)puVar42 = (byte)*puVar42 + bVar7;
            pcVar18 = (char *)(CONCAT31((int3)((uint)iVar19 >> 8),(char)iVar19 + '\x12') + 0x228b26
                               + *puVar51 + (uint)CARRY1((byte)uVar17,bVar7));
            cVar6 = bVar10 + (byte)*puVar41;
            puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),cVar6);
            if (SCARRY1(bVar10,(byte)*puVar41) == cVar6 < '\0') break;
            *pcVar18 = *pcVar18 + (char)pcVar18;
            cVar6 = (char)pcVar18 + '\x02';
            pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6);
            bVar10 = POPCOUNT(cVar6);
            uVar53 = uVar52;
code_r0x00402b7a:
            puVar48 = puVar15;
            if ((bVar10 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar18;
              *pcVar18 = *pcVar18 + cVar6;
              uVar29 = (undefined3)((uint)pcVar18 >> 8);
              pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\x13');
              *(byte *)puVar41 = (byte)*puVar41 | (byte)puVar44;
              *(byte *)puVar51 = (byte)*puVar51 | (byte)puVar44;
              *puVar44 = (uint)(pcVar18 + *puVar44);
              uVar36 = (undefined2)((uint)puVar42 >> 0x10);
              uVar32 = SUB41(puVar42,0);
              cVar47 = (char)((uint)puVar42 >> 8) + *(byte *)((int)puVar42 + -0x5f);
              puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(cVar47,uVar32));
              *pcVar18 = *pcVar18 + cVar6 + '\x13';
              piVar25 = (int *)CONCAT31(uVar29,cVar6 + -0x7a);
              uVar17 = *puVar44;
              *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar17,(char)puVar41) == (char)(byte)*puVar44 < '\0') break;
              *(char *)piVar25 = (char)*piVar25 + cVar6 + -0x7a;
              cVar11 = cVar6 + -0x78;
              piVar25 = (int *)CONCAT31(uVar29,cVar11);
              uVar4 = uVar53;
              if ((POPCOUNT(cVar11) & 1U) != 0) break;
              *(char *)piVar25 = (char)*piVar25 + cVar11;
              pcVar18 = (char *)CONCAT31(uVar29,cVar6 + -0x65);
              *puVar41 = *puVar41 | (uint)puVar44;
              *puVar51 = *puVar51 | (uint)puVar44;
              pbVar50 = (byte *)((int)puVar41 + -1);
              cVar47 = cVar47 + *(byte *)((int)puVar42 + -0x5e);
              puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(cVar47,uVar32));
              *pcVar18 = *pcVar18 + cVar6 + -0x65;
              bVar10 = cVar6 + 10;
              puVar24 = (uint *)CONCAT31(uVar29,bVar10);
              bVar7 = (byte)pbVar50;
              *(byte *)puVar44 = (byte)*puVar44 + bVar7;
              puVar15 = puVar48 + (uint)bVar58 * -2 + 1;
              out(*puVar48,(short)puVar44);
              uVar17 = *puVar44;
              *(byte *)puVar44 = (byte)*puVar44 + bVar7;
              uVar23 = (uint)CARRY1((byte)uVar17,bVar7);
              uVar22 = *puVar44;
              uVar17 = *puVar44;
              pbVar40 = pbVar50 + uVar17 + uVar23;
              uVar5 = *puVar44;
              cRam130a0000 = cRam130a0000 - cVar47;
              uVar1 = *puVar44;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar24);
              *(byte *)puVar24 = (char)*puVar24 + bVar10;
              puVar41 = (uint *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar40 >> 8) | bRam7d170243,
                                                  (char)pbVar40 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar50,uVar22) ||
                                                  CARRY4((uint)(pbVar50 + uVar17),uVar23))));
              bVar58 = (uStack_20 & 0x400) != 0;
              bVar8 = (uStack_20 & 0x10) != 0;
              *(byte *)puVar24 = (char)*puVar24 + bVar10;
              bVar56 = 0xfd < bVar10;
              pcVar18 = (char *)CONCAT31(uVar29,cVar6 + '\f');
              puVar44 = (uint *)((uint)puVar44 | uVar1);
code_r0x00402bd1:
              uVar17 = *puVar42;
              uVar22 = *puVar42;
              *puVar42 = (uint)((byte *)(uVar22 + (int)puVar41) + bVar56);
              bVar10 = POPCOUNT(*puVar42 & 0xff);
              uVar53 = uStack_20;
              if ((SCARRY4(uVar17,(int)puVar41) !=
                  SCARRY4((int)(uVar22 + (int)puVar41),(uint)bVar56)) == (int)*puVar42 < 0)
              goto code_r0x00402b7a;
              cVar6 = (char)pcVar18;
              *pcVar18 = *pcVar18 + cVar6;
              pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar18 = *pcVar18 + (char)pcVar18;
                pcVar18 = (char *)(CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x12') |
                                  *puVar44);
                *(byte *)puVar51 = (byte)*puVar51 - (char)puVar41;
                *pcVar18 = *pcVar18 + (char)pcVar18;
                puVar44 = (uint *)((int)puVar44 - *puVar15);
                bVar10 = (byte)puVar42 | (byte)((uint)puVar41 >> 8);
                cVar6 = *pcVar18;
                uVar29 = (undefined3)((uint)pcVar18 >> 8);
                pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                *pcVar18 = *pcVar18 + cVar6;
                pcVar13 = (char *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                           CONCAT11((char)((uint)puVar42 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),
                                                                       bVar10) + -0x5b),bVar10));
                *pcVar18 = *pcVar18 + cVar6;
                bVar56 = false;
                pcVar18 = (char *)(CONCAT31(uVar29,cVar6 + '\x13') | *puVar44);
                do {
                  bVar7 = (byte)puVar41;
                  bVar10 = bVar7 + (byte)puVar15[(int)puVar51 * 2];
                  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar10 + bVar56);
                  uVar17 = (uint)(CARRY1(bVar7,(byte)puVar15[(int)puVar51 * 2]) ||
                                 CARRY1(bVar10,bVar56));
                  pcVar26 = pcVar18 + 0x1b000019 + uVar17;
                  piVar27 = (int *)((int)puVar51 * 2 + 0x40000a5);
                  *piVar27 = (int)((int)puVar41 +
                                  (uint)((char *)0xe4ffffe6 < pcVar18 ||
                                        CARRY4((uint)(pcVar18 + 0x1b000019),uVar17)) + *piVar27);
                  puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 + cRam00009d7d
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
                    puVar48 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                                               (byte)puVar44 | (byte)*puVar44);
                    puVar51 = (uint *)((uint)puVar51 | (uint)puVar15);
                    uVar17 = (uint)pcVar13 | (uint)puVar15;
                    unaff_EBP = pbVar50 + 1;
                    uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uVar52);
                    cVar47 = (char)(pcVar18 + 0x1b000019);
                    uVar29 = (undefined3)((uint)(pcVar18 + 0x1b000019) >> 8);
                    cVar6 = cVar47 + -0x13;
                    pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                    uVar36 = (undefined2)(uVar17 >> 0x10);
                    cVar11 = (char)(uVar17 >> 8) + *(char *)(uVar17 - 0x5e);
                    puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(cVar11,(byte)uVar17));
                    *pcVar18 = *pcVar18 + cVar6;
                    pcVar18 = (char *)(CONCAT31(uVar29,cVar47 + '\x19') | *puVar48);
                    bVar10 = (byte)pcVar18;
                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0) {
                      pbVar50 = (byte *)((int)puVar48 + (int)pcVar18);
                      bVar56 = CARRY1(*pbVar50,bVar10);
                      *pbVar50 = *pbVar50 + bVar10;
                      puVar44 = puVar48;
                      goto code_r0x00402bd1;
                    }
                    *pcVar18 = *pcVar18 + bVar10;
                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                    pcVar13 = (char *)CONCAT31(uVar29,bVar10 + 0x6f);
                    puVar44 = (uint *)((int)puVar48 + 1);
                    *pcVar13 = *pcVar13 + bVar10 + 0x6f;
                    bVar7 = (byte)uVar17 | (byte)((uint)pcVar18 >> 8);
                    pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x5c);
                    cVar11 = cVar11 + *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),bVar7) + -0x5f);
                    puVar42 = (uint *)CONCAT22(uVar36,CONCAT11(cVar11,bVar7));
                    *pcVar18 = *pcVar18 + bVar10 + 0x5c;
                    pcVar18 = (char *)(CONCAT31(uVar29,bVar10 + 0x88) | *puVar44);
                    if ((POPCOUNT((uint)pcVar18 & 0xff) & 1U) != 0) {
                      *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar41 >> 8);
                      uStackY_4c = (uint *)((uint)uStackY_4c._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar18 = *pcVar18 + (char)pcVar18;
                    uVar29 = (undefined3)((uint)pcVar18 >> 8);
                    cVar6 = (char)pcVar18 + 'o';
                    puVar44 = (uint *)((int)puVar48 + 2);
                    *(char *)CONCAT31(uVar29,cVar6) = *(char *)CONCAT31(uVar29,cVar6) + cVar6;
                    pcVar13 = (char *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               bVar7 | (byte)((uint)pcVar18 >> 8));
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
                    bVar7 = bVar10 + 10;
                    pcVar18 = (char *)CONCAT31(uVar29,bVar7);
                    *pcVar18 = *pcVar18 - cVar11;
                    cVar47 = (char)puVar41;
                    *(byte *)puVar44 = *(byte *)puVar44 + cVar47;
                    pbVar50[-0x62] = pbVar50[-0x62] + 1;
                    *pcVar18 = *pcVar18 + bVar7;
                    cVar6 = bVar10 + 0xc;
                    pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                    if (SCARRY1(bVar7,'\x02') == cVar6 < '\0') {
                      *pcVar18 = *pcVar18 + cVar6;
                      *(byte *)puVar41 = (byte)*puVar41 - cVar11;
                      *(byte *)puVar44 = *(byte *)puVar44 + cVar47;
                      cVar6 = (bVar10 + 0x13) - (byte)puVar41[0x13];
                      pcVar18 = (char *)CONCAT31(uVar29,cVar6);
                      *pcVar18 = *pcVar18 + cVar6;
                      pcVar26 = (char *)CONCAT31(uVar29,cVar6 + *pcVar18);
                      *pcVar26 = *pcVar26 + cVar6 + *pcVar18;
                      pcVar26 = pcVar26 + *puVar41;
                      *pcVar26 = *pcVar26 + (char)pcVar26;
                      LOCK();
                      pcVar18 = *(char **)pcVar26;
                      *(char **)pcVar26 = pcVar26;
                      UNLOCK();
                      *pcVar18 = *pcVar18 + (char)pcVar18;
                      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),(byte)*puVar41);
                      *pbVar40 = *pbVar40 + (byte)*puVar41;
                      goto code_r0x00402c8d;
                    }
                    puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               cVar47 + *pcVar13 + (0xfd < bVar7));
                    *(byte *)puVar51 = (byte)*puVar51 - cVar11;
                    pbVar50 = unaff_EBP;
                  }
                } while( true );
              }
              puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                         CONCAT11((char)((uint)puVar42 >> 8) +
                                                  *(byte *)((int)puVar42 + -99),(char)puVar42));
              puVar48 = puVar15;
            }
            *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
            puVar44 = (uint *)((int)puVar44 - *puVar48);
            puVar15 = puVar48;
            uVar53 = uVar52;
            uVar52 = uVar4;
          }
          *(byte *)puVar44 = (byte)*puVar44 + (char)puVar41;
          pcVar18 = pcVar18 + -0x7d160243;
        }
        pcVar18 = (char *)CONCAT31(uVar29,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar41;
    uVar17 = *puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + (byte)puVar24;
    *puVar51 = (uint)((int)puVar44 + (uint)CARRY1((byte)uVar17,(byte)puVar24) + *puVar51);
    puVar49 = puVar15;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar12 = (char)puVar41;
      cVar35 = (char)((uint)puVar41 >> 8) + (char)((uint)pbVar40 >> 8);
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(cVar35,cVar12));
      cVar6 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar6;
      pcVar18 = (char *)((int)pbVar40 * 2 + 0x1a10000);
      cVar11 = (char)((uint)pcVar13 >> 8);
      *pcVar18 = *pcVar18 + cVar11;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
      pbVar40[-0x47ffffff] = pbVar40[-0x47ffffff] + cVar11;
      *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
      bVar7 = (byte)puVar44;
      *(byte *)puVar51 = (byte)*puVar51 + bVar7;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + bVar7;
      *pbVar40 = *pbVar40 + cVar6;
      *puVar15 = (uint)(*puVar15 + (int)puVar15);
      uVar36 = (undefined2)((uint)pcVar13 >> 0x10);
      cVar11 = cVar11 + (byte)puVar15[(int)pcVar13];
      pcVar18 = (char *)CONCAT22(uVar36,CONCAT11(cVar11,(char)pcVar13));
      pcVar18[(int)pbVar40] = pcVar18[(int)pbVar40] + cVar6;
      *(byte *)puVar44 = *(byte *)puVar44 - cVar11;
      *(byte *)puVar44 = *(byte *)puVar44 + cVar12;
      uVar29 = (undefined3)((uint)pbVar40 >> 8);
      bVar10 = cVar6 - *pbVar40;
      *pcVar18 = *pcVar18 + bVar7;
      *(byte *)puVar44 = *(byte *)puVar44 ^ bVar10;
      *(byte *)puVar44 = *(byte *)puVar44 + bVar10;
      *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
      uVar17 = *puVar41;
      *(byte *)puVar41 = (byte)*puVar41 + bVar7;
      cVar47 = bVar10 + *(char *)CONCAT31(uVar29,bVar10) + CARRY1((byte)uVar17,bVar7);
      pcVar13 = (char *)CONCAT22(uVar36,CONCAT11(cVar11 + pbVar50[-0x60],(char)pcVar13));
      *(char *)CONCAT31(uVar29,cVar47) = *(char *)CONCAT31(uVar29,cVar47) + cVar47;
      cVar11 = cVar47 + '\x12';
      pbVar40 = (byte *)CONCAT31(uVar29,cVar11);
      cVar6 = *pcVar13;
      *pcVar13 = *pcVar13 + cVar11;
      if (SCARRY1(cVar6,cVar11) != *pcVar13 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
      *(byte *)puVar44 = *(byte *)puVar44 + cVar6;
      *pbVar40 = *pbVar40 + cVar6;
    }
    *pbVar40 = *pbVar40 + cVar11;
    pbVar40 = (byte *)CONCAT31(uVar29,cVar47 + '$');
    *pbVar40 = *pbVar40 + cVar35;
    bVar10 = *(byte *)puVar44;
    *(byte *)puVar44 = *(byte *)puVar44 + cVar12;
    uVar53 = uVar52;
    uVar54 = uVar55;
  } while (SCARRY1(bVar10,cVar12) == (char)*(byte *)puVar44 < '\0');
  do {
    cVar6 = (char)pbVar40;
    *pbVar40 = *pbVar40 + cVar6;
    uVar29 = (undefined3)((uint)pbVar40 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar44;
    bVar7 = cVar6 + 0x24;
    cVar11 = (char)((uint)pcVar13 >> 8);
    pcVar13[-0x62] = pcVar13[-0x62] + cVar11;
    *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
    bVar10 = cVar6 + 0x2fU + (byte)*puVar41;
    cVar47 = bVar10 + (0xf4 < bVar7);
    cVar6 = cVar47 + *(char *)CONCAT31(uVar29,cVar47) +
            (CARRY1(cVar6 + 0x2fU,(byte)*puVar41) || CARRY1(bVar10,0xf4 < bVar7));
    pcVar18 = (char *)CONCAT31(uVar29,cVar6);
    *pcVar18 = *pcVar18 - (char)puVar44;
    *pcVar18 = *pcVar18 + cVar6;
    pcVar26 = (char *)((int)puVar44 - *puVar44);
    *(byte *)(puVar15 + (int)pcVar13) = (byte)puVar15[(int)pcVar13] + cVar11;
    pcVar18[(int)unaff_EBP] = pcVar18[(int)unaff_EBP] + cVar6;
    *pcVar26 = *pcVar26 + (char)puVar41;
    pcVar18 = (char *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                               CONCAT11((char)((uint)pbVar40 >> 8) - *pcVar26,cVar6));
    uVar17 = *puVar51;
    *pcVar18 = *pcVar18 - (char)((uint)pcVar26 >> 8);
    *pcVar18 = *pcVar18 + cVar6;
    uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uVar53);
    pbVar50 = (byte *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                               CONCAT11(cVar11 - (byte)*puVar15,(char)pcVar13));
    unaff_EBP = unaff_EBP + *(int *)(pbVar50 + (int)puVar41);
    puVar48 = (uint *)CONCAT31((int3)((uint)pcVar26 >> 8),(char)pcVar26 + (byte)uVar17);
    while( true ) {
      puVar44 = puVar48;
      uVar36 = (undefined2)((uint)pbVar50 >> 0x10);
      bVar9 = (char)((uint)pbVar50 >> 8) + pbVar50[0x18];
      *pcVar18 = *pcVar18 + (char)pcVar18;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + 'o');
      cVar6 = (char)puVar41;
      *(byte *)puVar44 = (byte)*puVar44 + cVar6;
      uVar17 = *puVar15;
      bVar8 = (byte)((uint)puVar41 >> 8);
      bVar10 = *pbVar40;
      pbVar40 = pbVar40 + (uint)CARRY1(bVar8,*pbVar40) + *(int *)pbVar40;
      *(byte *)puVar44 = (byte)*puVar44 + cVar6;
      cVar47 = ((char)pbVar50 - (byte)uVar17) - (byte)*puVar15;
      bVar7 = *(byte *)((int)puVar51 + 0x1a);
      *pbVar40 = *pbVar40 + (char)pbVar40;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11(bVar8 + bVar10 + bVar7 | (byte)*puVar44,cVar6));
      pbVar40 = pbVar40 + *puVar44;
      if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) break;
      *pbVar40 = *pbVar40 + (char)pbVar40;
      bVar10 = (char)pbVar40 + 0x6f;
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10);
      pcVar13 = (char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar9,(char)pbVar50)) >> 8),cVar47
                                 ) + -1);
      *pcVar18 = *pcVar18 + bVar10;
      *pcVar18 = *pcVar18 + bVar10;
      *pcVar13 = *pcVar13 + (byte)puVar44;
      *(byte *)((int)pcVar18 * 2) = *(byte *)((int)pcVar18 * 2) ^ bVar10;
      uVar3 = *(undefined6 *)pcVar18;
      uVar53 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar18 = (char *)uVar3;
      *pcVar18 = *pcVar18 + (char)uVar3;
      *(byte *)puVar15 = (byte)*puVar15 + (char)uVar3;
      pcVar18 = (char *)((uint)pcVar18 | 0x73110008);
      bVar9 = (byte)((uint)pcVar13 >> 8);
      *(byte *)puVar51 = (byte)*puVar51 - bVar9;
      *(byte *)puVar44 = (byte)*puVar44 + cVar6;
      puVar48 = puVar15 + (uint)bVar58 * -2 + 1;
      out(*puVar15,(short)puVar44);
      *pcVar18 = *pcVar18;
      cVar6 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar6;
      bVar10 = unaff_EBP[-0x5a];
      uVar36 = (undefined2)((uint)pcVar13 >> 0x10);
      cVar47 = (char)pcVar13;
      *pcVar18 = *pcVar18 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar17 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      puVar41 = (uint *)(uVar17 | 0x73110000);
      puVar15 = puVar48 + (uint)bVar58 * -2 + 1;
      out(*puVar48,(short)puVar44);
      *(byte *)puVar41 = (byte)*puVar41;
      bVar8 = (byte)puVar44 | (byte)*puVar51;
      puVar48 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar8);
      *(byte *)puVar41 = (byte)*puVar41 + cVar6;
      pcVar18 = (char *)(uVar17 | 0x7b1f1609);
      bVar58 = (uVar54 & 0x400) != 0;
      *(uint *)((int)puVar51 + -0x7d) = *(uint *)((int)puVar51 + -0x7d) | (uint)unaff_EBP;
      bVar7 = (byte)pcVar18;
      *pcVar18 = *pcVar18 + bVar7;
      bVar9 = bVar9 | bVar10 | *(byte *)((int)puVar15 + 0x19);
      pbVar50 = (byte *)CONCAT22(uVar36,CONCAT11(bVar9,cVar47));
      *pcVar18 = *pcVar18 + bVar7;
      uVar29 = (undefined3)((uint)pcVar18 >> 8);
      puVar15[(int)puVar51 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar7) + puVar15[(int)puVar51 * 2]);
      bVar10 = bVar7 + 0x2d ^ *(byte *)CONCAT31(uVar29,bVar7 + 0x2d);
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      uVar17 = *puVar15;
      *(byte *)puVar15 = (byte)*puVar15 + bVar10;
      uVar54 = uVar53;
      if (CARRY1((byte)uVar17,bVar10)) {
        *pcVar18 = *pcVar18 + bVar10;
        bVar10 = bVar10 | pcVar18[0x4000019];
        pcVar18 = (char *)CONCAT31(uVar29,bVar10);
        if ('\0' < (char)bVar10) {
          *pcVar18 = *pcVar18 + bVar10;
          piVar27 = (int *)CONCAT31(uVar29,bVar10 + 0x28);
          *piVar27 = (int)piVar27 + (uint)(0xd7 < bVar10) + *piVar27;
          bVar38 = (byte)((uint6)uVar3 >> 8);
          *pbVar50 = *pbVar50 + bVar38;
          uVar37 = CONCAT11((byte)((uint)puVar44 >> 8) | bVar9,bVar8);
          puVar48 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),uVar37);
          uStackY_4c = (uint *)CONCAT22(uStackY_4c._2_2_,uVar53);
          bVar8 = in(uVar37);
          pbVar40 = (byte *)CONCAT31(uVar29,bVar8);
          bVar10 = *pbVar40;
          bVar56 = SCARRY1(*pbVar40,bVar8);
          *pbVar40 = *pbVar40 + bVar8;
          bVar7 = *pbVar40;
          puVar42 = puVar15;
          uStack_20 = uVar53;
          if (!CARRY1(bVar10,bVar8)) goto code_r0x00402e19;
          *pbVar40 = *pbVar40 + bVar8;
          bVar38 = bVar38 | *pbVar40;
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar38,cVar6));
          pcVar18 = (char *)CONCAT31(uVar29,bVar8 + *pbVar40);
          *pbVar50 = *pbVar50 + bVar38;
        }
        uVar29 = (undefined3)((uint)pcVar18 >> 8);
        bVar7 = (byte)pcVar18 | (byte)*puVar48;
        pbVar40 = (byte *)CONCAT31(uVar29,bVar7);
        puVar42 = puVar15 + (uint)bVar58 * -2 + 1;
        out(*puVar15,(short)puVar48);
        LOCK();
        bVar10 = *pbVar40;
        *pbVar40 = bVar7;
        UNLOCK();
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
        piVar27 = (int *)(CONCAT31(uVar29,bVar10) + -0x1b7e07);
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
        iVar19 = (int)puVar41 - *(int *)pbVar50;
        bVar10 = *(byte *)((int)puVar51 + -0x7a);
        uVar37 = (undefined2)((uint)iVar19 >> 0x10);
        *(char *)piVar27 = *(char *)piVar27 + (char)piVar27;
        bVar7 = (char)((uint)iVar19 >> 8) + bVar10 | *(byte *)((int)puVar51 + 0x17);
        *(char *)piVar27 = *(char *)piVar27 + (char)piVar27;
        uVar29 = (undefined3)(CONCAT22(uVar37,CONCAT11(bVar7,(byte)iVar19)) >> 8);
        bVar10 = (byte)iVar19 | *pbVar50;
        puVar41 = (uint *)CONCAT31(uVar29,bVar10);
        pbVar40 = (byte *)((int)piVar27 + *piVar27);
        puVar15 = puVar42;
        if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e0a;
        *(byte *)puVar41 = (byte)*puVar41 + bVar10;
        *(byte **)pbVar50 = (byte *)(*(int *)pbVar50 + (int)puVar48);
        piVar27 = (int *)CONCAT31(uVar29,bVar10 + 0x27);
        puVar41 = (uint *)CONCAT22(uVar37,CONCAT11(bVar7 + *(byte *)((int)puVar51 + -0x79),bVar10));
        *(byte *)piVar27 = (char)*piVar27 + bVar10 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar13 = (char *)CONCAT22(uVar36,CONCAT11(bVar9 | unaff_EBP[-0x62],cVar47));
  } while( true );
code_r0x00402dff:
  pbVar40 = (byte *)CONCAT22((short)((uint)piVar27 >> 0x10),
                             CONCAT11((byte)((uint)piVar27 >> 8) |
                                      *(byte *)((int)puVar48 + 0x2170411),(byte)piVar27));
  puVar15 = puVar42 + (uint)bVar58 * -2 + 1;
  out(*puVar42,(short)puVar48);
  *pbVar40 = (byte)piVar27;
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar40;
  *pbVar40 = *pbVar40 - cVar47;
  *pbVar40 = *pbVar40 + (char)pbVar40;
  bVar56 = false;
  bVar7 = (byte)((uint)puVar41 >> 8) | bRam052b0603;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar7,(char)puVar41));
  puVar42 = puVar15;
code_r0x00402e19:
  if (bVar7 == 0 || bVar56 != (char)bVar7 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar40;
  *pbVar40 = *pbVar40 + cRam89280411;
  piVar27 = (int *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                            CONCAT11((byte)((uint)pbVar40 >> 8) |
                                     *(byte *)((int)puVar48 + 0x7190411),cRam89280411));
  *(char *)piVar27 = (char)*piVar27 + cRam89280411;
  cVar6 = (char)puVar41;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar48,cVar6));
  puVar42 = (uint *)((int)puVar42 + *piVar27);
  pbVar40 = (byte *)((int)piVar27 + *piVar27);
  bVar7 = (byte)pbVar40;
  *pbVar40 = *pbVar40 + bVar7;
  *(byte *)puVar42 = (byte)*puVar42 + cVar6;
  bVar10 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar7;
  *(byte **)pbVar40 = unaff_EBP + (uint)CARRY1(bVar10,bVar7) + *(int *)pbVar40;
  piVar27 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),*pbVar40);
  *(byte *)puVar48 = (byte)*puVar48 + cVar6;
  puVar15 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(byte)puVar48 | (byte)*puVar48);
  pbVar40 = (byte *)((int)puVar15 + -0x43);
  *pbVar40 = *pbVar40 + (char)((uint)puVar48 >> 8);
  puVar48 = puVar15;
  puVar15 = puVar51;
  uVar54 = uVar52;
code_r0x00402e42:
  uVar52 = uStack_20;
  puVar51 = puVar15;
  uStack_20 = uVar52;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e6e;
  iVar19 = *(int *)((int)piVar27 + *piVar27);
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
  piVar27 = (int *)(iVar19 + -0x8c6f);
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | *(byte *)((int)puVar48 + -0x3f),
                                      (char)puVar48));
  pbVar46 = (byte *)((int)piVar27 + *piVar27);
  pbVar40 = pbVar46;
  puVar51 = uStackY_4c;
  if (SCARRY4((int)piVar27,*piVar27)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar46 = *pbVar46 + (char)pbVar46;
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                             CONCAT11((byte)((uint)puVar41 >> 8) | (byte)*puVar48,(char)puVar41));
  puVar15 = puVar42 + (uint)bVar58 * -2 + 1;
  out(*puVar42,(short)puVar48);
  puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(char)puVar48 + (byte)*puVar51);
  puVar42 = puVar15 + (uint)bVar58 * -2 + 1;
  out(*puVar15,(short)puVar48);
  uVar54 = uVar52;
  uStack_20 = uVar53;
code_r0x00402e6e:
  uVar52 = uVar54;
  uVar29 = (undefined3)((uint)puVar48 >> 8);
  cVar6 = (char)puVar48 + (byte)*puVar51;
  puVar15 = puVar42 + (uint)bVar58 * -2 + 1;
  out(*puVar42,(short)CONCAT31(uVar29,cVar6));
  puVar48 = (uint *)CONCAT31(uVar29,cVar6 + (byte)*puVar51);
  puVar42 = puVar15 + (uint)bVar58 * -2 + 1;
  out(*puVar15,(short)puVar48);
  pbVar40 = (byte *)0x0;
  puVar15 = puVar51;
code_r0x00402e81:
  puVar51 = puVar15;
  bVar7 = (char)pbVar40 - *pbVar40;
  iVar19 = CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
  *pbVar50 = *pbVar50 + (char)puVar48;
  pbVar46 = (byte *)(iVar19 * 2);
  *pbVar46 = *pbVar46 ^ bVar7;
  pbVar46 = (byte *)(int)(short)iVar19;
  *pbVar46 = *pbVar46 + bVar7;
  *(byte *)puVar51 = (byte)*puVar51 + (byte)puVar41;
  bVar10 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar7;
  *(byte **)(pbVar50 + -0x73) =
       (byte *)((int)puVar42 + (uint)CARRY1(bVar10,bVar7) + *(int *)(pbVar50 + -0x73));
  *pbVar46 = *pbVar46 + bVar7;
  bVar10 = (byte)puVar41 | (byte)*puVar48;
  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar10);
  puVar15 = puVar42;
  if ((char)bVar10 < '\x01') goto code_r0x00402eb4;
  *pbVar46 = *pbVar46 + bVar7;
  pbVar40 = (byte *)CONCAT31((int3)(char)((uint)pbVar40 >> 8),bVar7 + 0x2d);
  puVar42[(int)puVar51 * 2] =
       (uint)((int)puVar48 + (uint)(0xd2 < bVar7) + puVar42[(int)puVar51 * 2]);
  pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
  do {
    uVar17 = *puVar42;
    bVar10 = (byte)pbVar40;
    *(byte *)puVar42 = (byte)*puVar42 + bVar10;
    if (!CARRY1((byte)uVar17,bVar10)) break;
    *pbVar40 = *pbVar40 + bVar10;
    bVar10 = bVar10 | pbVar40[0x400001a];
    pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10);
    if ((char)bVar10 < '\x01') {
code_r0x00402ecc:
      *pbVar46 = *pbVar46 + (byte)pbVar46;
      uVar29 = (undefined3)((uint)pbVar46 >> 8);
      bVar10 = (byte)pbVar46 | pbVar46[0x400001b];
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      if ((char)bVar10 < '\x01') {
        uVar17 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar41;
        *(char *)((int)pcVar18 * 2) =
             *(char *)((int)pcVar18 * 2) - CARRY1((byte)uVar17,(byte)puVar41);
        bVar56 = 0x81 < bVar10;
        bVar10 = bVar10 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar46 = *pbVar46 + bVar10;
      puVar15 = puVar42;
code_r0x00402eb4:
      uVar29 = (undefined3)((uint)pbVar46 >> 8);
      bVar10 = (char)pbVar46 + 0x6f;
      pcVar18 = (char *)CONCAT31(uVar29,bVar10);
      *(byte **)pcVar18 = pbStackY_68;
      uVar17 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (char)puVar41;
      pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
      uVar55 = uVar53;
      if ((byte)*puVar48 != 0 && SCARRY1((byte)uVar17,(char)puVar41) == (char)(byte)*puVar48 < '\0')
      {
        *pcVar18 = *pcVar18 + bVar10;
        bVar7 = (char)pbVar46 + 0x9c;
        pbVar46 = (byte *)CONCAT31(uVar29,bVar7);
        puVar15[(int)puVar51 * 2] =
             (uint)((int)puVar48 + (uint)(0xd2 < bVar10) + puVar15[(int)puVar51 * 2]);
        pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
        uVar17 = *puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + bVar7;
        puVar42 = puVar15;
        if (CARRY1((byte)uVar17,bVar7)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar42 = puVar15 + (uint)bVar58 * -2 + 1;
      out(*puVar15,(short)puVar48);
    }
    cVar6 = (char)pcVar18;
    *pcVar18 = *pcVar18 + cVar6;
    uVar29 = (undefined3)((uint)pcVar18 >> 8);
    bVar10 = cVar6 + 0x6f;
    pcVar18 = (char *)CONCAT31(uVar29,bVar10);
    *(byte **)pcVar18 = pbStackY_68;
    uVar17 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar41;
    pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
    *(byte *)(puVar42 + 7) = ((byte)puVar42[7] - bVar9) - CARRY1((byte)uVar17,(byte)puVar41);
    *pcVar18 = *pcVar18 + bVar10;
    bVar7 = cVar6 + 0x9c;
    pcVar18 = (char *)CONCAT31(uVar29,bVar7);
    puVar42[(int)puVar51 * 2] =
         (uint)((int)puVar48 + (uint)(0xd2 < bVar10) + puVar42[(int)puVar51 * 2]);
    uVar17 = *puVar42;
    *(byte *)puVar42 = (byte)*puVar42 + bVar7;
    if (!CARRY1((byte)uVar17,bVar7)) goto code_r0x00402e7e;
    *pcVar18 = *pcVar18 + bVar7;
    bVar7 = bVar7 | pcVar18[0x400001c];
    pbVar40 = (byte *)CONCAT31(uVar29,bVar7);
    uStack_20 = uVar53;
    if ((char)bVar7 < '\x01') goto code_r0x00402f16;
    *pbVar40 = *pbVar40 + bVar7;
    pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x6f);
    while( true ) {
      *(byte **)pcVar18 = pbStackY_68;
      uVar17 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar41;
      *(uint *)((int)puVar42 + 0x1d) =
           (*(int *)((int)puVar42 + 0x1d) - (int)puVar51) - (uint)CARRY1((byte)uVar17,(byte)puVar41)
      ;
      bVar10 = (byte)pcVar18;
      *pcVar18 = *pcVar18 + bVar10;
      bVar7 = bVar10 + 0x2d;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar7);
      puVar42[(int)puVar51 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar10) + puVar42[(int)puVar51 * 2]);
      pbStackY_68 = (byte *)CONCAT22((short)((uint)pbStackY_68 >> 0x10),uVar53);
      uVar17 = *puVar42;
      *(byte *)puVar42 = (byte)*puVar42 + bVar7;
      if (!CARRY1((byte)uVar17,bVar7)) break;
      *pbVar40 = *pbVar40 + bVar7;
code_r0x00402f16:
      bVar10 = (byte)pbVar40 | pbVar40[0x400001d];
      puVar15 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10);
      pbVar40 = unaff_EBP;
      if ((char)bVar10 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar40;
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
        uVar29 = (undefined3)((uint)puVar15 >> 8);
        cVar6 = (char)puVar15 + 'o';
        puVar44 = (uint *)CONCAT31(uVar29,cVar6);
        *puVar44 = (uint)pbStackY_68;
        cVar11 = (char)puVar41;
        *(byte *)puVar48 = (byte)*puVar48 + cVar11;
        pbStackY_68 = (byte *)CONCAT22(pbStackY_68._2_2_,uVar53);
        bVar10 = (byte)((uint)puVar48 >> 8);
        bVar56 = bVar10 < (byte)*puVar42;
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                   CONCAT11(bVar10 - (byte)*puVar42,(char)puVar48));
        if (bVar56) break;
        bVar56 = CARRY4((uint)puVar44,*puVar44);
        puVar15 = (uint *)((int)puVar44 + *puVar44);
        if (!SCARRY4((int)puVar44,*puVar44)) {
          bVar56 = CARRY4((uint)unaff_EBP,*puVar15);
          unaff_EBP = unaff_EBP + *puVar15;
        }
        *puVar15 = (*puVar15 - (int)puVar15) - (uint)bVar56;
        *(byte *)puVar48 = (byte)*puVar48 + cVar11;
        puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                   CONCAT11((char)((uint)puVar41 >> 8) + (byte)*puVar48,
                                            cVar11 - (byte)*puVar48));
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
code_r0x00402f3b:
        cVar11 = (char)puVar48;
        *pbVar50 = *pbVar50 + cVar11;
        bVar10 = (byte)puVar15;
        *(byte *)((int)puVar15 * 2) = *(byte *)((int)puVar15 * 2) ^ bVar10;
        *(byte *)puVar15 = (byte)*puVar15 + bVar10;
        *(byte *)puVar15 = (byte)*puVar15 + cVar11;
        uVar17 = *puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + bVar10;
        *puVar48 = (uint)((int)puVar15 + (uint)CARRY1((byte)uVar17,bVar10) + *puVar48);
        pcVar18 = (char *)((uint)puVar15 | *puVar51);
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
        bVar34 = (byte)((uint)puVar41 >> 8);
        *pbVar50 = *pbVar50 + bVar34;
        iVar19 = *piVar27;
        uVar37 = (undefined2)((uint)puVar41 >> 0x10);
        bVar38 = (byte)puVar41;
        *(byte *)puVar42 = (byte)*puVar42 + cVar6;
        puVar15 = puVar42 + (uint)bVar58 * -2 + 1;
        out(*puVar42,(short)puVar48);
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        bVar7 = *pbVar50;
        *(byte *)puVar48 = (byte)*puVar48 - bVar9;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        puVar44 = puVar15 + (uint)bVar58 * -2 + 1;
        out(*puVar15,(short)puVar48);
        *(byte *)puVar44 = (byte)*puVar44 + cVar6;
        bVar8 = *pbVar50;
        *(uint *)((int)puVar48 + -0x23) = *(uint *)((int)puVar48 + -0x23) & (uint)puVar44;
        puVar28 = (ushort *)((int)piVar27 + *piVar27);
        if (!SCARRY4((int)piVar27,*piVar27)) {
          *puVar28 = uVar55;
        }
        *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
        uVar39 = CONCAT11((char)((uint)puVar48 >> 8) + *(byte *)((int)puVar48 + -0x15),cVar11);
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),uVar39);
        puVar15 = (uint *)((int)puVar28 + *(int *)puVar28);
        if (!SCARRY4((int)puVar28,*(int *)puVar28)) {
          *(ushort *)puVar15 = uVar55;
        }
        cVar6 = (char)puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        cVar12 = ((bVar34 - (char)iVar19) - CARRY1(bVar10,bVar34) | bVar7 | bVar8) + (byte)*puVar15;
        puVar41 = (uint *)CONCAT22(uVar37,CONCAT11(cVar12,bVar38));
        uVar17 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + bVar38;
        if (CARRY1((byte)uVar17,bVar38)) {
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          bVar10 = *(byte *)((int)puVar48 + 6);
          *(byte *)puVar48 = (byte)*puVar48 + bVar38;
          bVar7 = (cVar12 - (byte)*puVar44) + cRam14730307;
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          bVar10 = bVar9 | bVar10 | *(byte *)((int)puVar48 + 0x2a);
          uVar17 = *puVar15;
          pbVar50 = (byte *)((int)puVar15 + (uint)CARRY1(bVar7,(byte)*puVar15) + *puVar15);
          *(byte *)puVar48 = (byte)*puVar48 + bVar38;
          cVar6 = cVar47 - (byte)*puVar44;
          cVar47 = bVar10 + *(char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar10,cVar47)) >> 8)
                                               ,cVar6) + 0x1e);
          *pbVar50 = *pbVar50 + (char)pbVar50;
          uVar29 = (undefined3)((uint)pbVar50 >> 8);
          bVar10 = (char)pbVar50 + 0x2aU & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          cVar47 = cVar47 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar47,cVar6)) + 0x1f);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          cVar47 = cVar47 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar47,cVar6)) + 0x20);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          cVar47 = cVar47 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar47,cVar6)) + 0x21);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          cVar47 = cVar47 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar47,cVar6)) + 0x22);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          bVar7 = bVar7 + (byte)uVar17 + *pcVar18;
          uVar33 = CONCAT22(uVar37,CONCAT11(bVar7,bVar38));
          cVar47 = cVar47 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar47,cVar6)) + 0x25);
          *pcVar18 = *pcVar18 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pcVar18 = (char *)CONCAT31(uVar29,bVar10 + 0x2a);
          pcVar13 = (char *)CONCAT22(uVar36,CONCAT11(cVar47 + *(char *)(CONCAT22(uVar36,CONCAT11(
                                                  cVar47,cVar6)) + 0x26),cVar6));
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
                uVar33 = CONCAT22(uVar37,CONCAT11(bVar7 | (byte)*puVar48,bVar38));
                bVar8 = bVar8 & (byte)*puVar48;
                *(char *)CONCAT31(uVar29,bVar8) = *(char *)CONCAT31(uVar29,bVar8) + bVar8;
                pcVar18 = (char *)CONCAT31(uVar29,bVar8 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar18 = (char *)CONCAT31(uVar29,bVar8 + *pcVar13);
              if (SCARRY1(bVar8,*pcVar13) != (char)(bVar8 + *pcVar13) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar10 = bVar8 + *pcVar13;
            pbVar50 = (byte *)CONCAT31(uVar29,bVar10);
            if (SCARRY1(bVar8,*pcVar13) == (char)bVar10 < '\0') {
              pcVar18 = (char *)CONCAT22(uVar37,CONCAT11(bVar7 | (byte)*puVar48,bVar38));
              *pcVar13 = *pcVar13 + cVar11;
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
            uVar33 = CONCAT22((short)((uint)uVar33 >> 0x10),
                              CONCAT11((char)((uint)uVar33 >> 8) +
                                       *(char *)CONCAT31(uVar29,bVar10 + 0x2a),(char)uVar33));
            *(byte *)(puVar44 + 0x828000) = (byte)puVar44[0x828000] - cVar11;
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
          cVar47 = cVar6 + '*';
          pcVar18 = (char *)CONCAT31(uVar29,cVar47);
          *(byte *)(puVar44 + 0x828000) = (byte)puVar44[0x828000] - cVar11;
          *pcVar18 = *pcVar18 + cVar47;
          cVar12 = (char)pcStackY_a0 - (byte)*puVar44;
          pcVar13 = (char *)CONCAT22((short)((uint)pcStackY_a0 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_a0 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_a0 >> 8),
                                                                 cVar12) + 0x34),cVar12));
          *pcVar18 = *pcVar18 + cVar47;
          bVar10 = cVar6 + 0x54U & (byte)*puVar48;
          *(char *)CONCAT31(uVar29,bVar10) = *(char *)CONCAT31(uVar29,bVar10) + bVar10;
          pbVar50 = (byte *)CONCAT31(uVar29,bVar10 + 0x2a);
          bVar10 = (byte)((uint)uVar33 >> 8);
          pcVar18 = (char *)CONCAT22((short)((uint)uVar33 >> 0x10),
                                     CONCAT11(bVar10 + *pbVar50,(char)uVar33));
          pbVar50 = pbVar50 + (uint)CARRY1(bVar10,*pbVar50) + *(int *)pbVar50;
          *(byte *)puVar48 = (byte)*puVar48 + (char)uVar33;
          uVar29 = (undefined3)((uint)pbVar50 >> 8);
          cVar6 = (byte)pbVar50 - *pbVar50;
          piVar27 = (int *)CONCAT31(uVar29,cVar6);
          puVar44 = (uint *)((int)puVar44 + (uint)((byte)pbVar50 < *pbVar50) + *piVar27);
          cVar6 = cVar6 + (char)*piVar27;
          pbVar50 = (byte *)CONCAT31(uVar29,cVar6);
          *pbVar50 = *pbVar50 + cVar6;
code_r0x004030df:
          *pcVar18 = *pcVar18 + cVar11;
          bVar10 = *pbVar50;
          bVar7 = (byte)pbVar50;
          *pbVar50 = *pbVar50 + bVar7;
          *(byte **)(pcVar13 + -0x41) =
               (byte *)((int)puVar44 + (uint)CARRY1(bVar10,bVar7) + *(int *)(pcVar13 + -0x41));
          *pbVar50 = *pbVar50 + bVar7;
          uVar29 = (undefined3)((uint)pbVar50 >> 8);
          bVar7 = bVar7 | (byte)*puVar44;
          *(char *)CONCAT31(uVar29,bVar7) = *(char *)CONCAT31(uVar29,bVar7) + bVar7;
          pcVar18 = (char *)CONCAT31(uVar29,bVar7 + 0x7b);
          *pcVar18 = *pcVar18 + bVar7 + 0x7b;
          pbVar50 = (byte *)((int)puVar44 + CONCAT31(uVar29,bVar7 - 8) + -1);
          *pbVar50 = *pbVar50 + (bVar7 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar42 = puVar44 + (uint)bVar58 * -2 + 1;
        out(*puVar44,uVar39);
        pbVar40 = unaff_EBP + 1;
        pbStackY_68 = unaff_EBP;
      }
      bVar10 = cVar6 - bVar56;
      pbVar40 = (byte *)((int)puVar42 + (int)puVar51 * 2);
      bVar56 = CARRY1(*pbVar40,bVar10);
      *pbVar40 = *pbVar40 + bVar10;
code_r0x00402ef9:
      pcVar18 = (char *)CONCAT31(uVar29,bVar10 - bVar56);
      pbVar40 = (byte *)((int)puVar51 + (int)unaff_EBP * 2);
      *pbVar40 = *pbVar40 + (bVar10 - bVar56);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar41 = (byte)*puVar41 + (char)puVar48;
  puVar15 = puVar48 + 0x2828000;
  bVar10 = (byte)puVar41;
  bVar56 = (byte)*puVar15 < bVar10;
  *(byte *)puVar15 = (byte)*puVar15 - bVar10;
  bVar10 = (byte)pbVar40 + *pbVar40;
  piVar27 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar10 + bVar56);
  puVar15 = puVar51;
  uVar54 = uVar52;
  if (CARRY1((byte)pbVar40,*pbVar40) || CARRY1(bVar10,bVar56)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar18 = *pcVar18 + bVar7;
  uVar54 = uVar52;
  uStack_20 = uVar53;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar47) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  pbVar46 = (byte *)CONCAT22(uVar36,CONCAT11(cVar11 + unaff_EBP[(int)pcVar18 * 4],uVar32));
  pbVar50[(int)pcVar18] = pbVar50[(int)pcVar18] + bVar7;
  goto code_r0x0040254a;
}


