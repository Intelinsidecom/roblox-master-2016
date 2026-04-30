/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402107
 * Raw Name    : set_ErrorMessage
 * Demangled   : set_ErrorMessage
 * Prototype   : void set_ErrorMessage(undefined4 value, byte * param_2)
 * Local Vars  : pcVar10, iVar11, puVar12, pbVar13, pbVar14, uVar15, pcVar16, iVar17, pbVar18, pbVar19, uVar20, uVar21, puVar22, piVar23, pcVar24, piVar25, puVar26, uVar27, uVar28, iVar29, uVar30, pbVar31, extraout_ECX, extraout_ECX_00, extraout_ECX_01, extraout_ECX_02, value, uVar32, bVar33, bVar34, cVar35, uVar36, uVar37, bVar38, uVar39, puVar40, puVar41, pbVar42, puVar43, uVar44, unaff_EBX, cVar45, bVar46, unaff_EBP, unaff_ESI, puVar47, puVar48, unaff_EDI, puVar49, in_ES, uVar50, uVar51, in_CS, uVar52, in_SS, uVar53, in_GS_OFFSET, bVar54, in_AF, bVar55, bVar56, in_TF, in_IF, bVar57, bVar58, in_NT, uVar59, param_2, unaff_retaddr, in_stack_ffffffe0, in_stack_ffffffe8, pcStackY_8c, pbStackY_54, puStackY_40, puStackY_3c, uStackY_38, uStack_10, uStack_c, uStack_9, uStack_8, uVar1, pcVar2, uVar3, uVar4, uVar5, cVar6, bVar7, cVar8, cVar9, in_EAX
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall set_ErrorMessage(undefined4 value,byte *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  undefined4 in_EAX;
  undefined3 uVar27;
  char *pcVar10;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
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
  undefined1 uVar30;
  byte bVar33;
  undefined2 uVar36;
  byte *pbVar31;
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
  uint *puVar40;
  uint *puVar41;
  byte *pbVar42;
  undefined3 uVar44;
  uint *puVar43;
  char cVar45;
  byte bVar46;
  char *unaff_EBX;
  byte *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar47;
  uint *puVar48;
  byte *unaff_EDI;
  uint *puVar49;
  ushort in_ES;
  ushort uVar50;
  ushort uVar51;
  ushort in_CS;
  ushort uVar52;
  ushort in_SS;
  ushort uVar53;
  int in_GS_OFFSET;
  bool bVar54;
  byte in_AF;
  byte bVar55;
  bool bVar56;
  byte in_TF;
  byte in_IF;
  bool bVar57;
  bool bVar58;
  byte in_NT;
  undefined8 uVar59;
  ushort unaff_retaddr;
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
  uVar27 = (undefined3)((uint)in_EAX >> 8);
  cVar6 = (char)in_EAX + *unaff_EBX;
  pcVar16 = (char *)CONCAT31(uVar27,cVar6);
  if (SCARRY1((char)in_EAX,*unaff_EBX) != cVar6 < '\0') {
    *pcVar16 = *pcVar16 + cVar6;
    pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '*');
    value = CONCAT22((short)((uint)value >> 0x10),
                     CONCAT11((char)((uint)value >> 8) + unaff_EDI[0x17],(char)value));
    *pcVar16 = *pcVar16 + cVar6 + '*';
  }
  uVar36 = (undefined2)((uint)value >> 0x10);
  bVar55 = (byte)value;
  bVar33 = (byte)((uint)value >> 8) | *param_2;
  pcVar24 = (char *)CONCAT22(uVar36,CONCAT11(bVar33,bVar55));
  uVar37 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar30 = SUB41(unaff_EBX,0);
  cVar45 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4e];
  bVar38 = (byte)pcVar16;
  *pcVar16 = *pcVar16 + bVar38;
  uVar27 = (undefined3)((uint)pcVar16 >> 8);
  pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x28);
  *pcVar16 = (*pcVar16 - (bVar38 + 0x28)) - (0xd7 < bVar38);
  *param_2 = *param_2 + bVar55;
  bVar7 = bVar38 + 0x1b;
  cVar45 = cVar45 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar45,uVar30)) + 0x4f);
  iVar17 = CONCAT22(uVar37,CONCAT11(cVar45,uVar30));
  *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
  pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x43);
  *pcVar16 = (*pcVar16 - (bVar38 + 0x43)) - (0xd7 < bVar7);
  *param_2 = *param_2 + bVar55;
  pcVar10 = pcVar16 + -0x6b721c;
  pcVar16 = pcVar16 + -0x6b721a;
  cVar6 = (char)((uint)param_2 >> 8);
  *pcVar16 = *pcVar16 + cVar6;
  bVar38 = (byte)param_2;
  if ((POPCOUNT(*pcVar16) & 1U) == 0) {
    cVar8 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar8;
    uVar27 = (undefined3)((uint)pcVar10 >> 8);
    bVar7 = cVar8 + 2;
    pcVar16 = (char *)CONCAT31(uVar27,bVar7);
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *pcVar16 = *pcVar16 + bVar7;
      piVar25 = (int *)CONCAT31(uVar27,cVar8 + '*');
      *piVar25 = (*piVar25 - (int)piVar25) - (uint)(0xd7 < bVar7);
      bVar7 = *param_2;
      *param_2 = *param_2 + bVar55;
      out(*unaff_ESI,(short)param_2);
      cVar8 = ((cVar8 + '*') - (char)*piVar25) - CARRY1(bVar7,bVar55);
      piVar25 = (int *)CONCAT31(uVar27,cVar8);
      *param_2 = *param_2 + bVar55;
      bVar46 = cVar45 - *(byte *)((int)unaff_ESI + 0x1f);
      iVar17 = CONCAT22(uVar37,CONCAT11(bVar46,uVar30));
      *(char *)piVar25 = (char)*piVar25 + cVar8;
      pcVar24 = (char *)CONCAT22(uVar36,CONCAT11(bVar33 | *param_2,bVar55));
      unaff_ESI = (uint *)((int)unaff_ESI + (4 - *piVar25));
      *(undefined4 *)CONCAT31(uVar27,cVar8) = 0x10000;
      *pcVar24 = *pcVar24 + bVar38;
      bVar7 = cVar8 + *param_2;
      pcVar16 = (char *)CONCAT31(uVar27,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pcVar16 = *pcVar16 + bVar7;
        cVar45 = (bVar7 + 0x6f) - (0x90 < bVar7);
        pcVar16 = (char *)CONCAT31(uVar27,cVar45);
        bVar7 = *param_2;
        *param_2 = *param_2 + bVar55;
        if (SCARRY1(bVar7,bVar55) == (char)*param_2 < '\0') {
          *pcVar16 = *pcVar16 + cVar45;
          out(*unaff_ESI,(short)param_2);
          unaff_ESI = unaff_ESI + 1;
        }
      }
      else {
        *pcVar16 = *pcVar16 + bVar7;
        iVar17 = CONCAT22(uVar37,CONCAT11(bVar46 | unaff_EBP[6],uVar30));
      }
      *pcVar16 = *pcVar16 + (char)pcVar16;
      bVar54 = bRam6f060000 < bVar38;
      bRam6f060000 = bRam6f060000 - bVar38;
      iVar11 = (CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x02') + -0xa0a0000) -
               (uint)bVar54;
      bVar7 = (byte)iVar11;
      bVar54 = CARRY1(bVar7,(byte)*unaff_ESI);
      uVar27 = (undefined3)((uint)iVar11 >> 8);
      cVar45 = bVar7 + (byte)*unaff_ESI;
      pcVar10 = (char *)CONCAT31(uVar27,cVar45);
      if (bVar54) {
        *pcVar10 = *pcVar10 + cVar45;
        iVar17 = CONCAT22((short)((uint)iVar17 >> 0x10),
                          CONCAT11((byte)((uint)iVar17 >> 8) | unaff_EBP[7],(char)iVar17));
        *pcVar10 = *pcVar10 + cVar45;
        goto code_r0x00402188;
      }
      pcVar16 = (char *)CONCAT31(uVar27,cVar45 + -2 + bVar54);
      unaff_retaddr = in_ES;
    }
  }
  else {
code_r0x00402188:
    cVar45 = (char)pcVar10 + '\x02';
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar45);
    iVar17 = CONCAT22((short)((uint)iVar17 >> 0x10),
                      CONCAT11((char)((uint)iVar17 >> 8) + *(char *)(iVar17 + 4),(char)iVar17));
    *pcVar16 = *pcVar16 + cVar45;
  }
  uVar27 = (undefined3)((uint)pcVar16 >> 8);
  bVar7 = (byte)pcVar16 + 0x2d;
  bVar55 = 9 < (bVar7 & 0xf) | in_AF;
  bVar7 = bVar7 + bVar55 * -6;
  cVar45 = bVar7 + (0x9f < bVar7 | 0xd2 < (byte)pcVar16 | bVar55 * (bVar7 < 6)) * -0x60;
  uVar36 = (undefined2)((uint)iVar17 >> 0x10);
  cVar8 = (char)((uint)iVar17 >> 8) + *(char *)(iVar17 + 7);
  pbVar31 = (byte *)CONCAT22(uVar36,CONCAT11(cVar8,(char)iVar17));
  *(char *)CONCAT31(uVar27,cVar45) = *(char *)CONCAT31(uVar27,cVar45) + cVar45;
  bVar33 = cVar45 + 0x7e;
  pbVar13 = (byte *)CONCAT31(uVar27,bVar33);
  pbVar14 = unaff_EBP + 0x6fe1411;
  bVar7 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar33;
  *pbVar13 = (*pbVar13 - bVar33) - CARRY1(bVar7,bVar33);
  bVar54 = CARRY1((byte)*unaff_ESI,bVar33);
  uVar15 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar33;
  bVar7 = (byte)((uint)pcVar24 >> 8);
  if (bVar54) {
    *pbVar13 = *pbVar13 + bVar33;
    bVar33 = bVar33 | pbVar13[0x400000c];
    puVar12 = (uint *)CONCAT31(uVar27,bVar33);
    if ((char)bVar33 < '\x01') {
code_r0x004021be:
      pcVar24 = (char *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                                 CONCAT11(bVar7 | *pbVar31,(char)pcVar24));
      puVar12 = (uint *)((int)puVar12 + -0x77b02);
      pbVar14 = (byte *)((int)unaff_ESI + (int)unaff_EDI * 2);
      *pbVar14 = *pbVar14 + (char)puVar12;
      pbVar13 = (byte *)((uint)puVar12 | *puVar12);
      bVar7 = (byte)pbVar13;
      unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar7;
      bVar54 = CARRY1(*pbVar13,bVar7);
      *pbVar13 = *pbVar13 + bVar7;
      in_SS = unaff_retaddr;
      goto code_r0x004021d4;
    }
    *(byte *)puVar12 = (char)*puVar12 + bVar33;
    cVar45 = bVar33 + 0x28;
    puVar12 = (uint *)CONCAT31(uVar27,cVar45);
    *puVar12 = (uint)(*puVar12 + (int)puVar12);
    bVar33 = *pbVar31;
    *pbVar31 = *pbVar31 + bVar7;
    if (CARRY1(bVar33,bVar7)) {
      *(char *)puVar12 = (char)*puVar12 + cVar45;
      goto code_r0x004021be;
    }
    pbVar14 = (byte *)((int)unaff_ESI + (int)unaff_EDI * 2);
    *pbVar14 = *pbVar14 + cVar45;
    pbVar13 = (byte *)((uint)puVar12 | *puVar12);
    pbVar13[(int)unaff_EBP] = pbVar13[(int)unaff_EBP] + (char)pbVar13;
code_r0x004021e5:
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    bVar7 = *pbVar31;
    bVar33 = (byte)((uint)pcVar24 >> 8);
    *pbVar31 = *pbVar31 + bVar33;
    if (!CARRY1(bVar7,bVar33)) goto code_r0x0040220c;
    *pbVar13 = *pbVar13 + (char)pbVar13;
    pcVar24 = (char *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                               CONCAT11(bVar33 | *pbVar13,(char)pcVar24));
code_r0x004021f1:
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)pbVar13;
  }
  else {
    if ((byte)*unaff_ESI != 0 && SCARRY1((byte)uVar15,bVar33) == (char)(byte)*unaff_ESI < '\0') {
      *pbVar13 = *pbVar13 + bVar33;
      puVar12 = (uint *)CONCAT31(uVar27,cVar45 + -0x55);
      unaff_ESI[(int)unaff_EDI * 2] =
           (uint)(param_2 + (uint)(0xd2 < bVar33) + unaff_ESI[(int)unaff_EDI * 2]);
      goto code_r0x004021be;
    }
code_r0x004021d4:
    if (bVar54) {
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      uVar27 = (undefined3)((uint)pbVar13 >> 8);
      bVar7 = (byte)pbVar13 | pbVar13[0x400000b];
      pbVar13 = (byte *)CONCAT31(uVar27,bVar7);
      if ('\0' < (char)bVar7) {
        *pbVar13 = *pbVar13 + bVar7;
        pbVar13 = (byte *)CONCAT31(uVar27,bVar7 + 0x28);
        goto code_r0x004021e5;
      }
      *param_2 = *param_2 + (char)pcVar24;
      *(char *)((int)pbVar13 * 2) = *(char *)((int)pbVar13 * 2) - (char)pcVar24;
      goto code_r0x004021f1;
    }
  }
  pbVar31 = (byte *)CONCAT22(uVar36,CONCAT11(cVar8 + pbVar31[6],(char)iVar17));
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar27 = (undefined3)((uint)pbVar13 >> 8);
  bVar33 = (char)pbVar13 + 0x6f;
  bVar7 = *(byte *)CONCAT31(uVar27,bVar33);
  *param_2 = *param_2 + (char)pcVar24;
  cVar45 = (bVar33 & bVar7) + *unaff_EDI;
  pbVar13 = (byte *)CONCAT31(uVar27,cVar45);
  *pcVar24 = *pcVar24 - cVar6;
  *pbVar13 = *pbVar13 + cVar45;
  *pcVar24 = *pcVar24 - bVar38;
  *pbVar13 = *pbVar13 + cVar45;
code_r0x0040220c:
  uStack_8 = CONCAT22(uStack_8._2_2_,in_SS);
  bVar7 = (byte)pbVar13 | 0xde;
  cVar6 = bVar7 + 2;
  uVar27 = (undefined3)((uint)pbVar13 >> 8);
  pcVar16 = (char *)CONCAT31(uVar27,cVar6);
  if ((POPCOUNT(cVar6) & 1U) == 0) {
    *pcVar16 = *pcVar16 + cVar6;
    bVar7 = bVar7 + 0x71;
    pcVar16 = (char *)CONCAT31(uVar27,bVar7 & *(byte *)CONCAT31(uVar27,bVar7));
  }
  cVar6 = (char)pcVar24;
  *param_2 = *param_2 + cVar6;
  uVar27 = (undefined3)((uint)param_2 >> 8);
  bVar38 = bVar38 + *unaff_EDI;
  puVar40 = (uint *)CONCAT31(uVar27,bVar38);
  *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar6;
  *pcVar16 = *pcVar16 + (char)pcVar16;
  cVar6 = cVar6 - *pcVar16;
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar24 >> 8),cVar6);
  bVar33 = (char)pcVar16 - *pcVar16;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar33);
  *(byte **)pbVar14 = (byte *)(*(int *)pbVar14 + (int)puVar40);
  *pbVar14 = *pbVar14 + bVar33;
  bVar7 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar33;
  *(byte **)pbVar14 = pbVar14 + (uint)CARRY1(bVar7,bVar33) + *(int *)pbVar14;
  *pcVar10 = *pcVar10 + bVar33;
  bVar7 = (byte)((uint)pcVar24 >> 8);
  uVar36 = (undefined2)((uint)pcVar24 >> 0x10);
  bVar33 = bVar7 + *pbVar14;
  puVar12 = (uint *)CONCAT22(uVar36,CONCAT11(bVar33,cVar6));
  pbVar14 = pbVar14 + (uint)CARRY1(bVar7,*pbVar14) + *(int *)pbVar14;
  *(byte *)puVar40 = (byte)*puVar40 + cVar6;
  uVar44 = (undefined3)((uint)pbVar31 >> 8);
  cVar45 = (char)pbVar31 - *(byte *)((int)unaff_ESI + 2);
  pbVar13 = (byte *)CONCAT31(uVar44,cVar45);
  bVar7 = (byte)pbVar14;
  uVar28 = (uint3)((uint)pbVar14 >> 8);
  uVar53 = in_ES;
  if ((POPCOUNT(cVar45) & 1U) == 0) {
    *pbVar14 = *pbVar14 + bVar7;
    bVar7 = bVar7 | *pbVar13;
    piVar25 = (int *)CONCAT31(uVar28,bVar7);
    if (bVar7 == 0) {
      *(char *)piVar25 = (char)*piVar25;
      puVar47 = unaff_ESI + 1;
      out(*unaff_ESI,(short)puVar40);
      pbVar14 = (byte *)((uint)uVar28 << 8);
      *(byte *)puVar40 = (byte)*puVar40 + cVar6;
      puVar40 = (uint *)CONCAT31(uVar27,bVar38 - *pbVar13);
      *pbVar13 = *pbVar13;
      *(byte *)puVar40 = (byte)*puVar40 + bVar33;
      *pbVar14 = *pbVar14;
      *(byte *)puVar40 = (byte)*puVar40;
      *pbVar14 = *pbVar14;
      *(byte **)(pbVar13 + 0x25) = (byte *)(*(int *)(pbVar13 + 0x25) + (int)puVar47);
    }
    else {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar25 = (char)*piVar25 + bVar7;
      puVar12 = (uint *)CONCAT22(uVar36,CONCAT11(bVar33 | (byte)*puVar40,cVar6));
      puVar47 = (uint *)((int)unaff_ESI + *piVar25);
      pcVar16 = (char *)((int)piVar25 + *piVar25);
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      cVar8 = (char)pcVar16 - *pcVar16;
      pcVar16 = (char *)CONCAT31(uVar27,cVar8);
      *pcVar16 = *pcVar16 + cVar8;
      pbVar14 = (byte *)CONCAT31(uVar27,cVar8 + *pcVar16);
      uVar15 = *puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + bVar38;
      if (!CARRY1((byte)uVar15,bVar38)) {
        *(byte *)puVar40 = (byte)*puVar40 + cVar6;
        pbVar13 = (byte *)CONCAT31(uVar44,cVar45 - (byte)*puVar47);
        goto _ctor;
      }
    }
    *pbVar14 = *pbVar14 + (char)pbVar14;
    puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),(byte)puVar12 | (byte)*puVar40);
    unaff_ESI = puVar47;
  }
  else {
    *(byte *)puVar40 = (byte)*puVar40 + cVar6;
    pbVar14 = (byte *)CONCAT31(uVar28,bVar7 | (byte)*unaff_ESI);
  }
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x26);
  *pbVar14 = *pbVar14 + (byte)pbVar14;
  uVar27 = (undefined3)((uint)pbVar14 >> 8);
  bVar38 = (byte)pbVar14 | (byte)*puVar40;
  pbVar14 = (byte *)CONCAT31(uVar27,bVar38);
  if ((POPCOUNT(bVar38) & 1U) == 0) {
    *pbVar14 = *pbVar14 + bVar38;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    bVar55 = 9 < (bVar38 + 6 & 0xf) | bVar55;
    bVar7 = bVar38 + 6 + bVar55 * '\x06';
    pbVar14 = (byte *)CONCAT31(uVar27,bVar7 + (0x90 < (bVar7 & 0xf0) |
                                              0xf9 < bVar38 | bVar55 * (0xf9 < bVar7)) * '`');
  }
  *pbVar14 = *pbVar14 + (char)pbVar14;
  puVar47 = unaff_ESI;
  do {
    puVar41 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) | pbVar13[0x28],(char)puVar40));
    *pbVar14 = *pbVar14 + (char)pbVar14;
    uVar36 = (undefined2)((uint)puVar12 >> 0x10);
    uVar30 = SUB41(puVar12,0);
    bVar7 = (byte)((uint)puVar12 >> 8) | *pbVar14;
    puVar12 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7,uVar30));
    cVar6 = (char)pbVar14 + *pbVar14;
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar6);
    bVar38 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar7;
    if (!CARRY1(bVar38,bVar7)) goto code_r0x004022b3;
    *pbVar14 = *pbVar14 + cVar6;
    puVar12 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7 | (byte)*puVar41,uVar30));
    puVar40 = puVar41;
_ctor:
    bVar38 = (byte)((uint)puVar12 >> 8);
    uVar36 = (undefined2)((uint)puVar12 >> 0x10);
    cVar6 = (char)puVar12;
    bVar7 = bVar38 + *pbVar14;
    puVar12 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7,cVar6));
    pbVar14 = pbVar14 + (uint)CARRY1(bVar38,*pbVar14) + *(int *)pbVar14;
    *(byte *)puVar40 = (byte)*puVar40 + cVar6;
    bVar33 = (byte)pbVar13;
    bVar54 = bVar33 < *(byte *)((int)puVar47 + 2);
    bVar38 = *(byte *)((int)puVar47 + 2);
    cVar45 = bVar33 - bVar38;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar45);
    if ((POPCOUNT(cVar45) & 1U) != 0) {
      if ((char)bVar38 <= (char)bVar33) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *pbVar14 = *pbVar14 + (byte)pbVar14;
    bVar38 = (byte)pbVar14 | *pbVar13;
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar38);
    puVar41 = puVar40;
    if (bVar38 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x2b);
      *pbVar14 = *pbVar14 + bVar38;
      puVar12 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7 | (byte)*puVar40,cVar6));
      bVar7 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar38;
      puVar47 = (uint *)((int)puVar47 + (uint)CARRY1(bVar7,bVar38) + *(int *)pbVar14);
      pbVar14 = pbVar14 + *(int *)pbVar14;
      cVar6 = (char)pbVar14 - *pbVar14;
      piVar25 = (int *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar6);
      *(char *)piVar25 = (char)*piVar25 + cVar6;
      pbVar14 = (byte *)((int)piVar25 + *piVar25);
      uVar15 = *puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + (byte)puVar40;
      if (!CARRY1((byte)uVar15,(byte)puVar40)) goto code_r0x004022ea;
      goto code_r0x004022be;
    }
    *pbVar14 = *pbVar14;
    out(*puVar47,(short)puVar40);
    pbVar14 = pbVar14 + -*(int *)pbVar14;
    puVar47 = puVar47 + 1;
code_r0x004022ab:
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar12;
    bVar38 = (char)pbVar14 - *pbVar14;
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar38);
    *pbVar13 = *pbVar13 + (char)puVar41;
    *pbVar13 = *pbVar13 ^ bVar38;
code_r0x004022b3:
    *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)puVar12 >> 8);
    bVar7 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar7;
    *pbVar13 = *pbVar13 + bVar7;
    bVar38 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar7;
    *(byte **)(pbVar13 + 0x2c) =
         (byte *)((int)puVar47 + (uint)CARRY1(bVar38,bVar7) + *(int *)(pbVar13 + 0x2c));
    puVar40 = puVar41;
code_r0x004022be:
    *pbVar14 = *pbVar14 + (char)pbVar14;
    puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),(byte)puVar12 | (byte)*puVar40);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x2d);
code_r0x004022c6:
    *pbVar14 = *pbVar14 + (byte)pbVar14;
    uVar27 = (undefined3)((uint)pbVar14 >> 8);
    bVar38 = (byte)pbVar14 | (byte)*puVar40;
    pcVar16 = (char *)CONCAT31(uVar27,bVar38);
    if ((POPCOUNT(bVar38) & 1U) != 0) {
      *pcVar16 = *pcVar16 + bVar38;
    }
    *pcVar16 = *pcVar16 + bVar38;
    cVar6 = bVar38 + 6;
    pbVar14 = (byte *)CONCAT31(uVar27,cVar6);
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    *pbVar14 = *pbVar14 + cVar6;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) | pbVar13[0x2f],(char)puVar40));
    *pbVar14 = *pbVar14 + cVar6;
    bVar38 = (byte)((uint)puVar12 >> 8) | *pbVar14;
    puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),CONCAT11(bVar38,(char)puVar12));
    pbVar14 = pbVar14 + *(int *)pbVar14;
    bVar54 = CARRY1(*pbVar13,bVar38);
    *pbVar13 = *pbVar13 + bVar38;
code_r0x004022e0:
    puVar40 = puVar41;
    if (!bVar54) goto code_r0x0040230b;
    bVar7 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar7;
    puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                               CONCAT11((byte)((uint)puVar12 >> 8) | (byte)*puVar41,(char)puVar12));
    bVar38 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar7;
    puVar47 = (uint *)((int)puVar47 + (-(uint)CARRY1(bVar38,bVar7) - *(int *)pbVar14));
code_r0x004022ea:
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),(char)pbVar14 + *pbVar14);
code_r0x004022ef:
    *(char *)((int)pbVar14 * 2) = *(char *)((int)pbVar14 * 2) + (char)pbVar14;
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar41;
    uVar53 = (ushort)in_stack_ffffffe8;
    puVar40 = puVar41;
    while( true ) {
      uVar27 = (undefined3)((uint)pbVar14 >> 8);
      bVar38 = (byte)pbVar14 | (byte)*puVar40;
      pbVar14 = (byte *)CONCAT31(uVar27,bVar38);
      if ((POPCOUNT(bVar38) & 1U) != 0) break;
      *pbVar14 = *pbVar14 + bVar38;
      cVar6 = bVar38 + 0xd;
      pcVar16 = (char *)CONCAT31(uVar27,cVar6);
      *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar16;
      *pcVar16 = *pcVar16 + cVar6;
      *(char *)((int)pcVar16 * 2) = *(char *)((int)pcVar16 * 2) + (char)((uint)puVar12 >> 8);
      *pcVar16 = *pcVar16 + cVar6;
      pbVar14 = (byte *)CONCAT31(uVar27,cVar6);
      *pbVar14 = *pbVar14 + cVar6;
code_r0x0040230b:
      puVar41 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((char)((uint)puVar40 >> 8) + pbVar13[0x34],(char)puVar40))
      ;
      cVar6 = (char)pbVar14;
      *pbVar14 = *pbVar14 + cVar6;
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar13 >> 8) | unaff_EBP[-0x79],
                                          (char)pbVar13));
      *pbVar14 = *pbVar14 + cVar6;
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar6 + '\x02');
code_r0x00402317:
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                 CONCAT11((char)((uint)pbVar13 >> 8) + pbVar13[-0x7a],(char)pbVar13)
                                );
      cVar6 = (char)pcVar16;
      *pcVar16 = *pcVar16 + cVar6;
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      cVar45 = cVar6 + '{';
      pbVar14 = (byte *)CONCAT31(uVar27,cVar45);
      *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      pbVar31 = (byte *)((int)puVar41 + (int)pbVar14);
      *pbVar31 = *pbVar31 + cVar45;
      if ((POPCOUNT(*pbVar31) & 1U) != 0) goto code_r0x004022ab;
      *pbVar14 = *pbVar14 + cVar45;
      piVar25 = (int *)CONCAT31(uVar27,cVar6 + -10);
      uVar15 = (int)piVar25 + *piVar25;
      bVar38 = (byte)uVar15;
      unaff_EDI[(int)unaff_EBP * 2] = unaff_EDI[(int)unaff_EBP * 2] + bVar38;
      pbVar14 = (byte *)(uVar15 ^ 0x7d0a0000);
      *pbVar14 = bVar38;
      pbVar31 = (byte *)((int)puVar41 + (int)pbVar14);
      *pbVar31 = *pbVar31 + bVar38;
      puVar40 = puVar41;
      if ((POPCOUNT(*pbVar31) & 1U) != 0) goto code_r0x004022be;
      *pbVar14 = *pbVar14 + bVar38;
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar38 + 0x69);
      uVar50 = in_ES;
code_r0x00402342:
      in_ES = uVar50;
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      bVar38 = (char)pcVar16 + *pcVar16;
      pcVar16 = (char *)CONCAT31(uVar27,bVar38);
      *pcVar16 = *pcVar16 + bVar38;
      *pcVar16 = *pcVar16 + bVar38;
      *(byte *)(puVar47 + 0x800000) = (byte)puVar47[0x800000] + (char)puVar12;
      cVar45 = (char)pbVar13;
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                 CONCAT11((char)((uint)pbVar13 >> 8) + pbVar13[-0x7a],cVar45));
      *pcVar16 = *pcVar16 + bVar38;
      bVar54 = 0xfd < bVar38;
      cVar6 = bVar38 + 2;
      pbVar14 = (byte *)CONCAT31(uVar27,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x004022e0;
      *pbVar14 = *pbVar14 + cVar6;
      cVar6 = bVar38 + 0x71;
      pbVar14 = (byte *)CONCAT31(uVar27,cVar6);
      bVar7 = *pbVar14;
      *pbVar14 = *pbVar14 + cVar6;
      in_stack_ffffffe8 = (byte *)(uint)in_ES;
      if (SCARRY1(bVar7,cVar6) == (char)*pbVar14 < '\0') {
        *(byte *)((int)puVar41 + (int)pbVar14) = *(byte *)((int)puVar41 + (int)pbVar14) + cVar45;
        goto code_r0x004022ef;
      }
      *pbVar14 = *pbVar14 + cVar6;
      pbVar14 = (byte *)CONCAT31(uVar27,bVar38 + 0x73);
      bVar54 = (POPCOUNT(bVar38 + 0x73) & 1U) == 0;
      puVar40 = puVar41;
code_r0x00402366:
      if (bVar54) {
code_r0x00402368:
        *pbVar14 = *pbVar14 + (char)pbVar14;
        cVar6 = (char)pbVar14 + 'o';
        pcVar16 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar6);
        *pcVar16 = *pcVar16 + cVar6;
        puVar41 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(byte)puVar40 | *pbVar13);
        pcVar16 = pcVar16 + 0x37280512;
        bVar7 = (byte)pcVar16;
        *pcVar16 = *pcVar16 + bVar7;
        puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                                   CONCAT11((byte)((uint)puVar12 >> 8) | bRam7d160243,(char)puVar12)
                                  );
        pbVar14 = (byte *)((int)puVar41 + (int)pcVar16);
        bVar38 = *pbVar14;
        *pbVar14 = *pbVar14 + bVar7;
        pcRam00008e7d = pcVar16 + (int)(pcRam00008e7d + CARRY1(bVar38,bVar7));
        bVar54 = SCARRY1(bVar7,'\x02');
        bVar7 = bVar7 + 2;
        puVar26 = (ushort *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar7);
code_r0x0040238b:
        if (bVar54 == (char)bVar7 < '\0') {
          *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
          pcVar16 = (char *)CONCAT31((int3)((uint)puVar26 >> 8),(char)puVar26 + '\x12');
          uVar50 = in_ES;
          in_ES = uVar53;
code_r0x00402391:
          pcVar16 = pcVar16 + 0x42802;
          *pbVar13 = *pbVar13 + (char)((uint)puVar12 >> 8);
          uVar53 = in_ES;
code_r0x00402399:
          bVar38 = (byte)pbVar13 | (byte)((uint)puVar12 >> 8);
          uVar27 = (undefined3)((uint)pcVar16 >> 8);
          pcVar16 = (char *)CONCAT31(uVar27,1);
          *pcVar16 = *pcVar16 + '\x01';
          pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                     CONCAT11((char)((uint)pbVar13 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar13 >> 8),bVar38)
                                                       + -0x72),bVar38));
          *pcVar16 = *pcVar16 + '\x01';
          uVar15 = CONCAT31(uVar27,0x14);
          pcVar16 = (char *)(uVar15 + 0x19061215 + (uint)(0x1f9edfd < uVar15));
          uVar1 = (uint)(0xe4ffffec < uVar15 + 0xfe061202 ||
                        CARRY4(uVar15 + 0x19061215,(uint)(0x1f9edfd < uVar15)));
          uVar15 = *puVar47;
          uVar20 = *puVar47;
          *puVar47 = (uint)(pcVar16 + uVar20 + uVar1);
          if ((SCARRY4(uVar15,(int)pcVar16) != SCARRY4((int)(pcVar16 + uVar20),uVar1)) !=
              (int)*puVar47 < 0) {
            bVar7 = (byte)pcVar16;
            *pcVar16 = *pcVar16 + bVar7;
            iVar17 = CONCAT31((int3)((uint)pcVar16 >> 8),bVar7 + 2) + 0x847d + (uint)(0xfd < bVar7);
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(byte)puVar41 | (byte)*puVar41);
            pcVar16 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x12') + 0x134f26)
            ;
            *pbVar13 = *pbVar13 + bVar38;
code_r0x004023cd:
            out(*puVar47,(short)puVar41);
            uVar15 = *puVar41;
            *(byte *)puVar41 = (byte)*puVar41 + (byte)puVar12;
            pbVar14 = (byte *)(pcVar16 +
                              (uint)CARRY1((byte)uVar15,(byte)puVar12) + *(int *)unaff_EDI);
            bVar58 = SCARRY1((char)puVar41,(byte)*puVar12);
            bVar38 = (char)puVar41 + (byte)*puVar12;
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar38);
            bVar56 = (char)bVar38 < '\0';
            puVar47 = puVar47 + 1;
code_r0x004023d6:
            bVar54 = (POPCOUNT(bVar38) & 1U) == 0;
            puVar40 = puVar41;
            if (bVar58 != bVar56) {
              *pbVar14 = *pbVar14 + (char)pbVar14;
code_r0x004023db:
              cVar45 = (char)pbVar14;
              uVar27 = (undefined3)((uint)pbVar14 >> 8);
              cVar6 = cVar45 + '\x02';
              pbVar14 = (byte *)CONCAT31(uVar27,cVar6);
              if ((POPCOUNT(cVar6) & 1U) != 0) {
                pbVar31 = (byte *)((int)puVar40 + (int)pbVar14);
                *pbVar31 = *pbVar31 + cVar6;
                bVar54 = (POPCOUNT(*pbVar31) & 1U) == 0;
                goto code_r0x00402366;
              }
              *pbVar14 = *pbVar14 + cVar6;
              cVar45 = cVar45 + '\x15';
              pbVar14 = (byte *)CONCAT31(uVar27,cVar45);
              *(byte *)puVar12 = (byte)*puVar12 | (byte)puVar40;
              *unaff_EDI = *unaff_EDI | (byte)puVar40;
              uVar50 = in_ES;
              if ((POPCOUNT(*unaff_EDI) & 1U) == 0) {
                *pbVar14 = *pbVar14 + cVar45;
                goto code_r0x00402425;
              }
              *pbVar14 = *pbVar14 + cVar45;
              cVar45 = cVar45 + (byte)*puVar40;
              pcVar16 = (char *)CONCAT31(uVar27,cVar45);
              if ((POPCOUNT(cVar45) & 1U) == 0) {
                *pcVar16 = *pcVar16 + cVar45;
                puVar26 = (ushort *)CONCAT31(uVar27,cVar45 + 'o');
                puVar41 = puVar40;
code_r0x004023f6:
                uVar15 = *puVar41;
                *(byte *)puVar41 = (byte)*puVar41 + (char)puVar12;
                cVar6 = (char)puVar26;
                if (SCARRY1((byte)uVar15,(char)puVar12) == (char)(byte)*puVar41 < '\0') {
                  in_ES = *puVar26;
                  pbVar14 = (byte *)((int)puVar41 + (int)puVar26);
                  bVar54 = SCARRY1(*pbVar14,cVar6);
                  *pbVar14 = *pbVar14 + cVar6;
                  bVar7 = *pbVar14;
                  goto code_r0x0040238b;
                }
                *(char *)puVar26 = (char)*puVar26 + cVar6;
                cVar6 = cVar6 + '\x02';
                pcVar16 = (char *)CONCAT31((int3)((uint)puVar26 >> 8),cVar6);
                puVar40 = puVar47;
                if ((POPCOUNT(cVar6) & 1U) == 0) {
code_r0x00402402:
                  *pcVar16 = *pcVar16 + (char)pcVar16;
                  uVar27 = (undefined3)((uint)pcVar16 >> 8);
                  piVar25 = (int *)CONCAT31(uVar27,(char)pcVar16 + 'r');
                  *piVar25 = *piVar25 + 0x7b027000;
                  cVar6 = (char)*piVar25;
                  pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                  pbVar14 = (byte *)((int)puVar41 + (int)pcVar16);
                  *pbVar14 = *pbVar14 + cVar6;
                  puVar47 = puVar40;
                  if ((POPCOUNT(*pbVar14) & 1U) == 0) {
                    *pcVar16 = *pcVar16 + cVar6;
                    bVar7 = cVar6 + '{' + *(char *)CONCAT31(uVar27,cVar6 + '{');
                    piVar25 = (int *)CONCAT31(uVar27,bVar7);
                    pbVar14 = (byte *)((int)piVar25 + (int)unaff_EBP);
                    bVar38 = *pbVar14;
                    *pbVar14 = *pbVar14 + bVar7;
                    *piVar25 = (*piVar25 - (int)piVar25) - (uint)CARRY1(bVar38,bVar7);
                    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar12;
                    puVar47 = puVar40 + 1;
                    out(*puVar40,(short)puVar41);
                    cVar6 = bVar7 - (char)*piVar25;
                    pbVar14 = (byte *)CONCAT31(uVar27,cVar6);
                    *(byte *)puVar47 = (byte)*puVar47 + cVar6;
                    puVar40 = puVar41;
code_r0x00402425:
                    out(*puVar47,(short)puVar40);
                    uVar15 = *puVar40;
                    *(byte *)puVar40 = (byte)*puVar40 + (byte)puVar12;
                    uVar15 = (uint)CARRY1((byte)uVar15,(byte)puVar12);
                    pbVar31 = (byte *)((int)puVar12 + *puVar12) + uVar15;
                    puVar12 = (uint *)CONCAT31((int3)((uint)pbVar31 >> 8),
                                               (char)pbVar31 + *pbVar31 +
                                               (CARRY4((uint)puVar12,*puVar12) ||
                                               CARRY4((int)puVar12 + *puVar12,uVar15)));
                    cRam130a0000 = cRam130a0000 - (char)((uint)pbVar13 >> 8);
                    puVar41 = puVar40;
                    puVar47 = puVar47 + 1;
code_r0x00402435:
                    puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               (byte)puVar41 | (byte)*puVar41);
                    bVar38 = *pbVar14;
                    *pbVar14 = *pbVar14 + (char)pbVar14;
                    puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                                               CONCAT11((byte)((uint)puVar12 >> 8) | bVar38 |
                                                        bRam7d170243,(char)puVar12));
code_r0x00402442:
                    pbVar31 = (byte *)((int)puVar41 + (int)pbVar14);
                    bVar7 = *pbVar31;
                    bVar38 = (byte)pbVar14;
                    *pbVar31 = *pbVar31 + bVar38;
                    uVar15 = *puVar41;
                    uVar20 = *puVar41;
                    *puVar41 = (uint)((byte *)(uVar20 + (int)puVar12) + CARRY1(bVar7,bVar38));
                    puVar40 = puVar41;
                    if ((SCARRY4(uVar15,(int)puVar12) !=
                        SCARRY4((int)(uVar20 + (int)puVar12),(uint)CARRY1(bVar7,bVar38))) !=
                        (int)*puVar41 < 0) {
                      *pbVar14 = *pbVar14 + bVar38;
                      bVar58 = SCARRY1(bVar38,'\x02');
                      bVar38 = bVar38 + 2;
                      pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar38);
code_r0x0040244f:
                      bVar56 = (char)bVar38 < '\0';
                      if (bVar58 == bVar56) {
code_r0x00402451:
                        *pbVar14 = *pbVar14 + (char)pbVar14;
                        bVar38 = (char)pbVar14 + 0x12U | (byte)*puVar41;
                        pcVar16 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar38);
                        cRam162b0000 = cRam162b0000 - bVar38;
code_r0x0040245d:
                        pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),
                                                   (byte)pbVar13 | (byte)((uint)puVar12 >> 8));
                        cVar6 = in((short)puVar41);
                        puVar26 = (ushort *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar6);
                        *(char *)puVar26 = (char)*puVar26 + cVar6;
                        *(byte *)puVar41 = (byte)*puVar41 + cVar6;
                        if ((POPCOUNT((byte)*puVar41) & 1U) == 0) {
code_r0x00402466:
                          *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
                          uVar27 = (undefined3)((uint)puVar26 >> 8);
                          bVar38 = (char)puVar26 + 0x13U | (byte)*puVar41;
                          pcVar16 = (char *)CONCAT31(uVar27,bVar38);
                          cVar6 = (byte)puVar12 + *pbVar13;
                          puVar40 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),cVar6);
                          cRam1b000019 = cRam1b000019 + '\x01';
                          uVar15 = (uint)CARRY1((byte)puVar12,*pbVar13);
                          iVar17 = *(int *)pbVar13;
                          iVar11 = *(int *)pbVar13;
                          *(byte **)pbVar13 = (byte *)(iVar11 + (int)puVar40) + uVar15;
                          if ((SCARRY4(iVar17,(int)puVar40) != SCARRY4(iVar11 + (int)puVar40,uVar15)
                              ) != *(int *)pbVar13 < 0) {
                            *pcVar16 = *pcVar16 + bVar38;
                            iVar17 = CONCAT31(uVar27,bVar38 + 2) + 0x847d + (uint)(0xfd < bVar38);
                            uVar27 = (undefined3)((uint)iVar17 >> 8);
                            bVar38 = (char)iVar17 + 0x12;
                            puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                                                       CONCAT11((byte)((uint)puVar12 >> 8) |
                                                                *(byte *)CONCAT31(uVar27,bVar38),
                                                                cVar6));
                            bVar55 = 9 < (bVar38 & 0xf) | bVar55;
                            uVar15 = CONCAT31(uVar27,bVar38 + bVar55 * -6) & 0xffffff0f;
                            pcVar16 = (char *)CONCAT22((short)(uVar15 >> 0x10),
                                                       CONCAT11((char)((uint)iVar17 >> 8) - bVar55,
                                                                (char)uVar15));
code_r0x00402486:
                            *pcVar16 = *pcVar16 + (char)pcVar16;
                            puVar43 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                                       (byte)puVar41 | (byte)*puVar41);
                            uVar36 = (undefined2)((uint)pbVar13 >> 0x10);
                            bVar38 = (byte)((uint)pbVar13 >> 8) | (byte)((uint)puVar41 >> 8);
                            pbVar14 = (byte *)(pcVar16 + 0x1b000019);
                            puVar40 = (uint *)((int)puVar43 + (int)pbVar14);
                            bVar54 = CARRY4((uint)puVar12,*puVar40);
                            pbVar31 = (byte *)((int)puVar12 + *puVar40);
                            puVar12 = (uint *)(pbVar31 + ((char *)0xe4ffffe6 < pcVar16));
                            piVar25 = (int *)((int)unaff_EDI * 2 + 0x400008b);
                            *piVar25 = (int)((int)puVar12 +
                                            (uint)(bVar54 ||
                                                  CARRY4((uint)pbVar31,
                                                         (uint)((char *)0xe4ffffe6 < pcVar16))) +
                                            *piVar25);
                            pbVar13 = (byte *)CONCAT22(uVar36,CONCAT11(bVar38 + *(char *)(CONCAT22(
                                                  uVar36,CONCAT11(bVar38,(char)pbVar13)) + -0x79),
                                                  (char)pbVar13));
                            puVar41 = puVar43;
code_r0x0040249e:
                            bVar38 = (byte)pbVar14;
                            *pbVar14 = *pbVar14 + bVar38;
                            uVar27 = (undefined3)((uint)pbVar14 >> 8);
                            cVar6 = bVar38 + 2;
                            pbVar14 = (byte *)CONCAT31(uVar27,cVar6);
                            puVar40 = puVar41;
                            if (0xfd < bVar38) {
                              bVar7 = *pbVar14;
                              *pbVar14 = *pbVar14 + cVar6;
                              if (SCARRY1(bVar7,cVar6) == (char)*pbVar14 < '\0')
                              goto code_r0x00402435;
                              *pbVar14 = *pbVar14 + cVar6;
                              cVar6 = bVar38 + 4;
                              pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                              if ((POPCOUNT(cVar6) & 1U) != 0) {
                                *(byte *)puVar41 = (byte)*puVar41 + (char)puVar12;
                                pbVar14 = (byte *)(pcVar16 + -0x7d170243);
                                goto code_r0x00402442;
                              }
                              *pcVar16 = *pcVar16 + cVar6;
                              cVar6 = bVar38 + 6;
                              pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                              if ((POPCOUNT(cVar6) & 1U) == 0) {
                                while( true ) {
                                  cVar6 = (char)pcVar16;
                                  *pcVar16 = *pcVar16 + cVar6;
                                  uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                  pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '}');
                                  puVar47 = (uint *)((int)puVar47 + -1);
                                  *pcVar16 = *pcVar16 + cVar6 + '}';
                                  cVar45 = cVar6 + '\x7f';
                                  pbVar14 = (byte *)CONCAT31(uVar27,cVar45);
                                  if ((POPCOUNT(cVar45) & 1U) != 0) break;
                                  *pbVar14 = *pbVar14 + cVar45;
                                  cVar45 = cVar6 + -0x7f;
                                  pbVar14 = (byte *)CONCAT31(uVar27,cVar45);
                                  if ((POPCOUNT(cVar45) & 1U) != 0) goto code_r0x00402451;
                                  *pbVar14 = *pbVar14 + cVar45;
                                  pcVar16 = (char *)CONCAT31(uVar27,cVar6 + -2);
                                  unaff_EDI = unaff_EDI + -1;
                                  while( true ) {
                                    cVar6 = (char)pcVar16;
                                    *pcVar16 = *pcVar16 + cVar6;
                                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                    cVar45 = cVar6 + '\x02';
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar45);
                                    if ((POPCOUNT(cVar45) & 1U) != 0) goto code_r0x0040245d;
                                    *pcVar16 = *pcVar16 + cVar45;
                                    pcVar16 = (char *)(CONCAT31(uVar27,cVar6 + 'q') + 1);
                                    *pcVar16 = *pcVar16 + (byte)pcVar16;
                                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                    bVar38 = (byte)pcVar16 | (byte)*puVar41;
                                    pcVar16 = (char *)CONCAT31(uVar27,bVar38);
                                    if ((POPCOUNT(bVar38) & 1U) != 0) {
                                      puVar12 = (uint *)((int)puVar12 + *puVar41);
                                      puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                                                 (char)puVar41 + (byte)*puVar41);
                                      unaff_EDI = (byte *)((uint)unaff_EDI | (uint)puVar47);
                                      puVar26 = (ushort *)(pcVar16 + 0x1b000019);
                                      goto code_r0x00402466;
                                    }
                                    *pcVar16 = *pcVar16 + bVar38;
                                    pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x6f);
                                    puVar12 = (uint *)((int)puVar12 + 1);
                                    *pcVar16 = *pcVar16 + bVar38 + 0x6f;
                                    uVar36 = (undefined2)((uint)pbVar13 >> 0x10);
                                    bVar38 = (byte)pbVar13;
                                    bVar7 = (byte)((uint)pbVar13 >> 8) | (byte)*puVar41;
                                    uVar53 = (ushort)uStack_8;
                                    uStack_8 = CONCAT22(uStack_8._2_2_,in_ES);
                                    cVar45 = (char)(pcVar16 + -0x21000001);
                                    uVar27 = (undefined3)((uint)(pcVar16 + -0x21000001) >> 8);
                                    cVar6 = cVar45 + -0x13;
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                                    cVar8 = bVar7 + *(char *)(CONCAT22(uVar36,CONCAT11(bVar7,bVar38)
                                                                      ) + -0x73);
                                    pbVar13 = (byte *)CONCAT22(uVar36,CONCAT11(cVar8,bVar38));
                                    *pcVar16 = *pcVar16 + cVar6;
                                    pcVar16 = (char *)(CONCAT31(uVar27,cVar45 + '\x19') | *puVar41);
                                    if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0)
                                    goto code_r0x00402486;
                                    cVar6 = (char)pcVar16;
                                    *pcVar16 = *pcVar16 + cVar6;
                                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                    pcVar10 = (char *)CONCAT31(uVar27,cVar6 + 'o');
                                    puVar40 = (uint *)((int)puVar41 + 1);
                                    *pcVar10 = *pcVar10 + cVar6 + 'o';
                                    bVar38 = bVar38 | (byte)((uint)pcVar16 >> 8);
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '\\');
                                    cVar8 = cVar8 + *(char *)(CONCAT31((int3)((uint)pbVar13 >> 8),
                                                                       bVar38) + -0x78);
                                    pbVar13 = (byte *)CONCAT22(uVar36,CONCAT11(cVar8,bVar38));
                                    *pcVar16 = *pcVar16 + cVar6 + '\\';
                                    pcVar16 = (char *)(CONCAT31(uVar27,cVar6 + -0x78) | *puVar40);
                                    cVar6 = (char)pcVar16;
                                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                                    if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0) {
                                      pbVar14 = (byte *)CONCAT31(uVar27,cVar6 + '\x02');
                                      puVar41 = puVar40;
                                      if ((POPCOUNT(cVar6 + '\x02') & 1U) == 0)
                                      goto code_r0x0040249e;
                                      goto code_r0x00402425;
                                    }
                                    *pcVar16 = *pcVar16 + cVar6;
                                    cVar45 = cVar6 + 'o';
                                    pcVar10 = (char *)CONCAT31(uVar27,cVar45);
                                    puVar41 = (uint *)((int)puVar41 + 2);
                                    *pcVar10 = *pcVar10 + cVar45;
                                    bVar38 = bVar38 | (byte)((uint)pcVar16 >> 8);
                                    pbVar13 = (byte *)CONCAT22(uVar36,CONCAT11(cVar8 + *(char *)(
                                                  CONCAT31((int3)((uint)pbVar13 >> 8),bVar38) +
                                                  -0x79),bVar38));
                                    *pcVar10 = *pcVar10 + cVar45;
                                    pcVar16 = (char *)(CONCAT31(uVar27,cVar6 + 'z') | 2);
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    cVar6 = (char)pcVar16;
                                    *pcVar16 = *pcVar16 + cVar6;
                                    cVar45 = cVar6 + '\x02';
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar45);
                                    if (SCARRY1(cVar6,'\x02') != cVar45 < '\0') break;
                                    *pcVar16 = *pcVar16 + cVar45;
                                    cVar45 = cVar6 + '\n';
                                    *pbVar13 = *pbVar13 - cVar45;
                                    *(byte *)puVar41 = *(byte *)puVar41 + (char)puVar12;
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    *(char *)CONCAT31(uVar27,cVar45) =
                                         *(char *)CONCAT31(uVar27,cVar45) + cVar45;
                                    cVar8 = cVar6 + '\f';
                                    pcVar16 = (char *)CONCAT31(uVar27,cVar8);
                                    if (SCARRY1(cVar45,'\x02') == cVar8 < '\0') {
                                      *pcVar16 = *pcVar16 + cVar8;
                                      pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '\x13');
                                      uVar53 = in_ES;
                                      goto code_r0x0040254a;
                                    }
                                  }
                                }
                                pbVar31 = (byte *)((int)puVar41 + (int)pbVar14);
                                bVar58 = SCARRY1(*pbVar31,cVar45);
                                *pbVar31 = *pbVar31 + cVar45;
                                bVar38 = *pbVar31;
                                goto code_r0x0040244f;
                              }
                              cVar45 = (char)puVar41;
                              cVar8 = cVar45 + *unaff_EDI;
                              puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),cVar8);
                              if (SCARRY1(cVar45,*unaff_EDI) != cVar8 < '\0') {
                                *pcVar16 = *pcVar16 + cVar6;
                                pbVar14 = (byte *)CONCAT31(uVar27,bVar38 + 8);
                                goto code_r0x00402442;
                              }
                              cRam1b000013 = cRam1b000013 + '\x01';
                              goto code_r0x004023cd;
                            }
                            goto code_r0x00402425;
                          }
                          pcVar10 = pcVar16 + 2;
                          *pcVar10 = *pcVar10 + (char)((uint)puVar41 >> 8);
                          puVar12 = puVar40;
                          if ((POPCOUNT(*pcVar10) & 1U) == 0) {
                            *pcVar16 = *pcVar16 + bVar38;
                            pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 2);
                            puVar40 = puVar47;
                            goto code_r0x00402402;
                          }
                          puVar41 = (uint *)((int)puVar41 - *puVar47);
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
                pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                           CONCAT11((char)((uint)pbVar13 >> 8) +
                                                    unaff_EBP[(int)pcVar16 * 4],(char)pbVar13));
                *(char *)((int)puVar41 * 2) = *(char *)((int)puVar41 * 2) + cVar6;
                in_ES = uVar53;
                goto code_r0x00402391;
              }
              *pcVar16 = *pcVar16 + cVar45;
              pbVar14 = (byte *)CONCAT31(uVar27,cVar45 + '\x02');
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
        *(byte *)((int)puVar41 + (int)pcVar16) =
             *(byte *)((int)puVar41 + (int)pcVar16) + (char)pcVar16;
        goto code_r0x00402317;
      }
      bVar54 = CARRY1(*pbVar14,(byte)pbVar14);
      *pbVar14 = *pbVar14 + (byte)pbVar14;
code_r0x004022f3:
      *(byte **)unaff_EDI = (byte *)((int)puVar40 + (uint)bVar54 + *(int *)unaff_EDI);
    }
  } while( true );
code_r0x0040254a:
  cVar6 = (char)pcVar16;
  *(char *)((int)pcVar16 * 2) = *(char *)((int)pcVar16 * 2) - cVar6;
  *pcVar16 = *pcVar16 + cVar6;
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar6 + *pcVar16);
  *pcVar10 = *pcVar10 + cVar6 + *pcVar16;
  uStack_c = 0x4025;
  uVar59 = func_0x0f40255d();
  uVar50 = uStack_c;
code_r0x0040255d:
  uStack_c = uVar50;
  pcVar16 = (char *)((ulonglong)uVar59 >> 0x20);
  piVar25 = (int *)uVar59;
  *piVar25 = (int)((int)piVar25 + *piVar25);
  uVar36 = (undefined2)((uint)pbVar13 >> 0x10);
  uVar30 = SUB41(pbVar13,0);
  cVar8 = (char)((uint)pbVar13 >> 8) + (char)((ulonglong)uVar59 >> 0x28);
  pcVar10 = (char *)CONCAT22(uVar36,CONCAT11(cVar8,uVar30));
  *piVar25 = (int)((int)piVar25 + *piVar25);
  *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar59 >> 0x20);
  cVar6 = (char)uVar59;
  *(char *)piVar25 = (char)*piVar25 + cVar6;
  *(char *)piVar25 = (char)*piVar25 + cVar6;
  *(char *)piVar25 = (char)*piVar25 + cVar6;
  *pcVar16 = *pcVar16 + cVar6;
  *(char *)piVar25 = (char)*piVar25 + cVar6;
  *pcVar10 = *pcVar10 + cVar6;
  *(char *)piVar25 = (char)*piVar25 + cVar6;
  pcVar2 = (code *)swi(1);
  uVar59 = (*pcVar2)();
  pbVar31 = (byte *)((ulonglong)uVar59 >> 0x20);
  pbVar14 = (byte *)uVar59;
  bVar38 = *pbVar14;
  bVar7 = (byte)uVar59;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar31 = *pbVar31 + bVar7 + CARRY1(bVar38,bVar7);
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  cVar6 = (char)((ulonglong)uVar59 >> 0x28);
  *pbVar14 = *pbVar14 + cVar6;
  bVar38 = *pbVar14;
  uVar27 = (undefined3)((ulonglong)uVar59 >> 8);
  pcVar16 = (char *)CONCAT31(uVar27,bVar7 + bVar38);
  *pcVar16 = *pcVar16 + cVar6;
  cVar6 = bVar7 + bVar38 + *pcVar16;
  pcVar16 = (char *)CONCAT31(uVar27,cVar6);
  cVar45 = (char)((ulonglong)uVar59 >> 0x20);
  *unaff_EDI = *unaff_EDI + cVar45;
  *pcVar16 = *pcVar16 + cVar6;
  *pcVar16 = *pcVar16 + cVar45;
  *pcVar16 = *pcVar16 + cVar6;
  *puVar47 = (uint)(*puVar47 + (int)puVar47);
  cVar8 = cVar8 + unaff_EBP[(int)pcVar16 * 4];
  pbVar13 = (byte *)CONCAT22(uVar36,CONCAT11(cVar8,uVar30));
  pbVar13[(int)pcVar16] = pbVar13[(int)pcVar16] + cVar6;
  *(byte *)puVar47 = (byte)*puVar47 - cVar6;
  *pbVar31 = *pbVar31 + (char)extraout_ECX;
  bVar7 = cVar6 - *pcVar16;
  pcVar16 = (char *)CONCAT31(uVar27,bVar7);
  *pbVar13 = *pbVar13 + cVar45;
  *pbVar31 = *pbVar31 ^ bVar7;
  *pbVar31 = *pbVar31 + cVar8;
  *pcVar16 = *pcVar16 + bVar7;
  cRam12110000 = cRam12110000 + bVar7;
  bVar38 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar7;
  pbVar14 = extraout_ECX;
  if (SCARRY1(bVar38,bVar7) != (char)*pbVar31 < '\0') {
code_r0x004025bd:
    *pcVar16 = *pcVar16 + (char)pcVar16;
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x12');
    *pcVar16 = *pcVar16 + (char)((uint)pbVar14 >> 8);
    pcVar16 = pcVar16 + -1;
    cVar6 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar6;
    bVar38 = (byte)((uint)pbVar13 >> 8) | unaff_EBP[-0x7b];
    pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),CONCAT11(bVar38,(char)pbVar13));
    *pcVar16 = *pcVar16 + cVar6;
    cRam0000847d = cRam0000847d + (char)pbVar31;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar6 + '$');
    pbVar13[-0x7b] = pbVar13[-0x7b] + bVar38;
    pbVar18 = pbVar14;
code_r0x004025d8:
    bVar38 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar38;
    bVar54 = 0xf4 < bVar38;
    pcVar16 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar38 + 0xb);
    pbVar19 = unaff_EBP;
    do {
      bVar38 = (byte)pcVar16 + *pbVar18;
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      cVar6 = bVar38 + bVar54;
      cVar6 = cVar6 + *(char *)CONCAT31(uVar27,cVar6) +
              (CARRY1((byte)pcVar16,*pbVar18) || CARRY1(bVar38,bVar54));
      pcVar16 = (char *)CONCAT31(uVar27,cVar6);
      *(byte *)puVar47 = (byte)*puVar47 - cVar6;
      *pcVar16 = *pcVar16 + cVar6;
      iVar17 = *(int *)pbVar31;
      pbVar19[(int)pcVar16 * 4] = pbVar19[(int)pcVar16 * 4] + (char)((uint)pbVar13 >> 8);
      pcVar16[(int)pbVar19] = pcVar16[(int)pbVar19] + cVar6;
      pbVar42 = pbVar31 + (-1 - iVar17);
      *pcVar16 = *pcVar16 + cVar6;
      pbVar14 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar18 >> 8) | *pbVar42) + unaff_EDI[0x22],
                                          (char)pbVar18));
      *pcVar16 = *pcVar16 + cVar6;
      bVar46 = (char)pbVar42 - pbVar31[1 - iVar17];
      bVar33 = cVar6 - 0xf;
      pbVar18 = (byte *)CONCAT31(uVar27,bVar33);
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar42 >> 0x10),
                                 CONCAT11((char)((uint)pbVar42 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar42 >> 8),bVar46) +
                                                   -0x3f),bVar46));
      bVar7 = *pbVar18;
      bVar38 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar33;
      uVar50 = uVar53;
      if (SCARRY1(bVar38,bVar33)) {
        pbVar18 = (byte *)CONCAT31(uVar27,bVar33 + pbVar18[(int)pbVar19] + CARRY1(bVar7,bVar33));
        goto code_r0x00402677;
      }
      pbVar13 = pbVar13 + -1;
      *pbVar18 = *pbVar18 + bVar33;
      uVar15 = *puVar47;
      *pbVar14 = *pbVar14 + 1;
      pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),(bVar46 | (byte)uVar15) - (byte)*puVar47
                                );
      puVar47 = (uint *)((int)puVar47 +
                        (-(uint)(bVar33 < *pbVar18) - *(int *)CONCAT31(uVar27,bVar33 - *pbVar18)));
      unaff_EBP = (byte *)CONCAT31(uVar27,bVar33 - *pbVar18);
      *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
      bVar7 = (byte)pbVar19;
      *(byte *)puVar47 = (byte)*puVar47 + bVar7;
      bVar38 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar7;
      *(byte **)unaff_EDI = pbVar31 + (uint)CARRY1(bVar38,bVar7) + *(int *)unaff_EDI;
      uVar27 = (undefined3)((uint)pbVar19 >> 8);
      bVar7 = bVar7 | *pbVar31;
      pcVar16 = (char *)CONCAT31(uVar27,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        *pcVar16 = *pcVar16 + bVar7;
        uVar59 = CONCAT44(pbVar31,pcVar16 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar16 = *pcVar16 + bVar7;
      bVar38 = bVar7 + 0xd;
      pbVar18 = (byte *)CONCAT31(uVar27,bVar38);
      *puVar47 = *puVar47 | (uint)pbVar31;
      if (-1 < (int)*puVar47) {
code_r0x00402678:
        *pbVar18 = *pbVar18 + (char)pbVar18;
        pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar14 >> 8) | bRam7d160243,(char)pbVar14)
                                  );
        pbVar19 = unaff_EDI;
code_r0x00402680:
        bVar38 = (byte)pbVar14;
        *pbVar14 = *pbVar14 + bVar38;
        uVar27 = (undefined3)((uint)pbVar14 >> 8);
        piVar25 = (int *)((int)pbVar19 * 2 + 0x400009a);
        *piVar25 = *piVar25 + CONCAT31(uVar27,bVar38 + 2) + (uint)(0xfd < bVar38);
        pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                   CONCAT11((char)((uint)pbVar13 >> 8) + *(char *)((int)pbVar31 * 5)
                                            ,(char)pbVar13));
        *(char *)((int)pbVar31 * 2) = *(char *)((int)pbVar31 * 2) + bVar38 + 2;
        unaff_EDI = (byte *)CONCAT31(uVar27,bVar38 + 4);
        *pbVar19 = *pbVar19 - (bVar38 + 4);
code_r0x00402697:
        *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
        pbVar31 = pbVar31 + -*puVar47;
        pbVar14 = unaff_EDI;
code_r0x0040269b:
        pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),
                                   (byte)pbVar13 | (byte)((uint)pbVar18 >> 8));
        uVar32 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar14 = uVar32;
        cVar6 = (char)pbVar14;
        *pbVar31 = *pbVar31 + cVar6;
        if ((POPCOUNT(*pbVar31) & 1U) == 0) {
          *pbVar14 = *pbVar14 + cVar6;
          pcVar16 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar6 + '\x13');
          pbVar14 = pbVar18;
          unaff_EDI = pbVar19;
code_r0x004026a8:
          uVar27 = (undefined3)((uint)pcVar16 >> 8);
          bVar7 = (byte)pcVar16 + 2 + cRam001b15fe + (0xfd < (byte)pcVar16);
          bVar38 = *pbVar13;
          bVar33 = (byte)pbVar13;
          *pbVar13 = *pbVar13 + bVar33;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar27,bVar7) + (uint)CARRY1(bVar38,bVar33);
          iVar17 = CONCAT31(uVar27,bVar7 + 2) + 0x917d + (uint)(0xfd < bVar7);
          cVar6 = (char)iVar17;
          uVar27 = (undefined3)((uint)iVar17 >> 8);
          bVar38 = cVar6 + 0x3a;
          pbVar42 = (byte *)CONCAT31(uVar27,bVar38);
          *pbVar42 = *pbVar42 + bVar38;
          uVar44 = (undefined3)((uint)pbVar31 >> 8);
          bVar7 = (byte)pbVar31 | *pbVar31;
          uVar20 = CONCAT31(uVar27,cVar6 + '8');
          uVar15 = uVar20 + 0x1b00001b;
          pcVar16 = (char *)(uVar15 + (1 < bVar38) + *puVar47 +
                            (uint)(0xe4ffffe4 < uVar20 || CARRY4(uVar15,(uint)(1 < bVar38))));
          bVar38 = bVar7 + *pbVar14;
          pbVar31 = (byte *)CONCAT31(uVar44,bVar38);
          uVar27 = (undefined3)((uint)pcVar16 >> 8);
          cVar6 = (char)pcVar16;
          if (SCARRY1(bVar7,*pbVar14) != (char)bVar38 < '\0') {
            *pcVar16 = *pcVar16 + cVar6;
            pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '\x02');
            uVar36 = (undefined2)((uint)pbVar13 >> 0x10);
            cVar8 = (char)((uint)pbVar13 >> 8) + pbVar13[-0x68];
            pbVar13 = (byte *)CONCAT22(uVar36,CONCAT11(cVar8,bVar33));
            *pcVar16 = *pcVar16 + cVar6 + '\x02';
            bVar7 = cVar6 + 0x2a;
            pbVar18 = (byte *)CONCAT31(uVar27,bVar7);
            *pbVar18 = *pbVar18 | bVar7;
            bVar38 = *pbVar13;
            cVar45 = (char)((uint)pbVar14 >> 8);
            *pbVar13 = *pbVar13 + cVar45;
            pbVar19 = unaff_EDI;
            if (SCARRY1(bVar38,cVar45) != (char)*pbVar13 < '\0') {
              *pbVar18 = *pbVar18 + bVar7;
              bVar38 = cVar6 + 0x2c;
              if ((POPCOUNT(bVar38) & 1U) == 0) {
                *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
                bVar7 = cVar6 + 0x59;
                pcVar16 = (char *)CONCAT31(uVar27,bVar7);
                *(char **)pbVar31 = pcVar16 + (uint)(0xd2 < bVar38) + *(int *)pbVar31;
                pbVar13 = (byte *)CONCAT22(uVar36,CONCAT11(cVar8 + pbVar13[-0x67],bVar33));
                *pcVar16 = *pcVar16 + bVar7;
                pbVar19 = (byte *)((CONCAT31(uVar27,cVar6 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar7));
                pbVar18 = pbVar14;
                uStack_10 = in_ES;
code_r0x00402700:
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar6 = (char)unaff_EDI + '\x02';
                pbVar14 = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar6);
                bVar54 = (POPCOUNT(cVar6) & 1U) == 0;
                unaff_EDI = pbVar42;
code_r0x00402704:
                if (bVar54) {
                  *pbVar14 = *pbVar14 + (char)pbVar14;
                  cVar6 = (char)pbVar14 + '\x02';
                  pcVar16 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar6);
                  puVar12 = puVar47;
                  if ((POPCOUNT(cVar6) & 1U) == 0) {
code_r0x0040270c:
                    uVar52 = in_ES;
                    cVar6 = (char)pcVar16;
                    *pcVar16 = *pcVar16 + cVar6;
                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                    bVar38 = cVar6 + 0x6f;
                    piVar25 = (int *)CONCAT31(uVar27,bVar38);
                    iVar17 = *piVar25;
                    *(byte *)piVar25 = (char)*piVar25 + bVar38;
                    in_ES = uVar52;
                    pbVar14 = pbVar31;
                    if ((char)*piVar25 != '\0' &&
                        SCARRY1((char)iVar17,bVar38) == (char)*piVar25 < '\0') {
                      *(byte *)piVar25 = (char)*piVar25 + bVar38;
                      bVar7 = cVar6 + 0x9c;
                      piVar25 = (int *)CONCAT31(uVar27,bVar7);
                      puVar40 = puVar12 + (int)pbVar19 * 2;
                      uVar15 = *puVar40;
                      uVar20 = *puVar40;
                      *puVar40 = (uint)(pbVar31 + uVar20 + (0xd2 < bVar38));
                      *piVar25 = (*piVar25 - (int)piVar25) -
                                 (uint)(CARRY4(uVar15,(uint)pbVar31) ||
                                       CARRY4((uint)(pbVar31 + uVar20),(uint)(0xd2 < bVar38)));
                      uVar15 = *puVar12;
                      *(byte *)puVar12 = (byte)*puVar12 + bVar7;
                      pbVar14 = (byte *)CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar52);
                      if (!CARRY1((byte)uVar15,bVar7)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    unaff_EDI = pbVar14;
                    uVar50 = uStack_10;
                    *(byte *)piVar25 = (char)*piVar25 + (byte)piVar25;
                    uVar27 = (undefined3)((uint)piVar25 >> 8);
                    bVar38 = (byte)piVar25 | *(byte *)((int)piVar25 + 0x400000d);
                    pcVar16 = (char *)CONCAT31(uVar27,bVar38);
                    if ((char)bVar38 < '\x01') {
                      bVar54 = pcVar16 < (char *)0x6fe1411;
                      pcVar16 = pcVar16 + -0x6fe1411;
                    }
                    else {
                      *pcVar16 = *pcVar16 + bVar38;
                      bVar33 = bVar38 + 0x28;
                      puVar40 = (uint *)CONCAT31(uVar27,bVar33);
                      *puVar40 = *puVar40 | (uint)puVar40;
                      bVar7 = *pbVar13;
                      cVar6 = (char)((uint)pbVar18 >> 8);
                      *pbVar13 = *pbVar13 + cVar6;
                      if (*pbVar13 == 0 || SCARRY1(bVar7,cVar6) != (char)*pbVar13 < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar40 = (char)*puVar40 + bVar33;
                      pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x55);
                      puVar40 = puVar12 + (int)pbVar19 * 2;
                      bVar54 = CARRY4(*puVar40,(uint)pbVar31) ||
                               CARRY4((uint)(pbVar31 + *puVar40),(uint)(0xd2 < bVar33));
                      *puVar40 = (uint)(pbVar31 + *puVar40 + (0xd2 < bVar33));
                      in_stack_ffffffe8 = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar27 = (undefined3)((uint)pcVar16 >> 8);
                      bVar38 = ((char)pcVar16 - *pcVar16) - bVar54;
                      puVar40 = (uint *)CONCAT31(uVar27,bVar38);
                      uVar15 = *puVar12;
                      *(byte *)puVar12 = (byte)*puVar12 + bVar38;
                      if (CARRY1((byte)uVar15,bVar38)) break;
                      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),
                                                 (byte)pbVar13 | (byte)((uint)pbVar31 >> 8));
                      pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 2);
                      while( true ) {
                        uVar50 = (ushort)unaff_EDI;
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar6 = (char)pcVar16;
                        *pcVar16 = *pcVar16 + cVar6;
                        uVar27 = (undefined3)((uint)pcVar16 >> 8);
                        bVar38 = cVar6 + 2;
                        pcVar16 = (char *)CONCAT31(uVar27,bVar38);
                        if (SCARRY1(cVar6,'\x02') != (char)bVar38 < '\0') break;
                        *pcVar16 = *pcVar16 + bVar38;
                        cVar8 = (char)pbVar31;
                        *pbVar19 = *pbVar19 - cVar8;
                        *pbVar31 = *pbVar31 + (char)pbVar18;
                        bVar7 = (cVar6 + '\t') - *(char *)CONCAT31(uVar27,cVar6 + '\t');
                        pbVar14 = (byte *)CONCAT31(uVar27,bVar7);
                        bVar38 = *pbVar14;
                        *pbVar14 = *pbVar14 + bVar7;
                        pbVar42 = pbVar18 + 1;
                        cVar6 = bVar7 - CARRY1(bVar38,bVar7);
                        pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                        *pcVar16 = *pcVar16 + cVar6;
                        *pcVar16 = *pcVar16 + cVar6;
                        *pcVar16 = *pcVar16 + cVar6;
                        *pcVar16 = *pcVar16 + cVar6;
                        cVar45 = (char)((uint)pbVar42 >> 8);
                        pbVar18[2] = pbVar18[2] + cVar45;
                        *pcVar16 = *pcVar16 + cVar6;
                        pcVar16 = (char *)(*(int *)pbVar42 * 0x170000);
                        *pcVar16 = *pcVar16;
                        *pcVar16 = *pcVar16;
                        *pbVar42 = *pbVar42;
                        uVar36 = (undefined2)((uint)pbVar13 >> 0x10);
                        cVar6 = (char)pbVar13;
                        bVar33 = (char)((uint)pbVar13 >> 8) + *(char *)((int)pbVar31 * 5);
                        pbVar13 = (byte *)CONCAT22(uVar36,CONCAT11(bVar33,cVar6));
                        pbVar13[(int)pcVar16] = pbVar13[(int)pcVar16];
                        *pcVar16 = *pcVar16 - cVar6;
                        *pbVar31 = *pbVar31 + (char)pbVar42;
                        uVar27 = (undefined3)((uint)pcVar16 >> 8);
                        bVar7 = -*pcVar16;
                        pbVar14 = (byte *)CONCAT31(uVar27,bVar7);
                        *pbVar13 = *pbVar13 + cVar8;
                        *pbVar31 = *pbVar31 ^ bVar7;
                        *pbVar31 = *pbVar31 + bVar7;
                        *pbVar14 = *pbVar14 + bVar7;
                        bVar38 = *pbVar14;
                        *pbVar14 = *pbVar14 + bVar7;
                        *(byte **)pbVar31 = pbVar31 + (uint)CARRY1(bVar38,bVar7) + *(int *)pbVar31;
                        bVar38 = *pbVar31;
                        *pbVar31 = *pbVar31 + bVar7;
                        if (SCARRY1(bVar38,bVar7) == (char)*pbVar31 < '\0') {
                          pcVar16 = (char *)((uint)pbVar14 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar16 = *pcVar16 + (char)pcVar16;
                          uStack_c = uVar53;
                          uStack_10 = (ushort)uStack_8;
                        }
                        else {
                          *pbVar14 = *pbVar14 + bVar7;
                          cVar9 = bVar7 + 0x12;
                          pcVar16 = (char *)CONCAT31(uVar27,cVar9);
                          bVar38 = *pbVar13;
                          *pbVar13 = *pbVar13 + cVar9;
                          uStack_10 = uVar50;
                          if (SCARRY1(bVar38,cVar9) != (char)*pbVar13 < '\0') {
                            *pcVar16 = *pcVar16 + cVar9;
                            cVar9 = bVar7 + 0x24;
                            pcVar16 = (char *)CONCAT31(uVar27,cVar9);
                            *pcVar16 = *pcVar16 + cVar45;
                            pbVar14 = (byte *)CONCAT13(uStack_9,(uint3)uVar53);
                            *pcVar16 = *pcVar16 + cVar9;
                            bVar33 = bVar33 | unaff_EBP[-0x6e];
                            pcVar10 = (char *)CONCAT22(uVar36,CONCAT11(bVar33,cVar6));
                            *pcVar16 = *pcVar16 + cVar9;
                            cRam0000917d = cRam0000917d + cVar8;
                            bVar46 = bVar7 + 0x48;
                            pcVar10[-0x6e] = pcVar10[-0x6e] + bVar33;
                            *(char *)CONCAT31(uVar27,bVar46) =
                                 *(char *)CONCAT31(uVar27,bVar46) + bVar46;
                            bVar38 = bVar7 + 0x53 + *pbVar14;
                            cVar6 = bVar38 + (0xf4 < bVar46);
                            cVar6 = cVar6 + *(char *)CONCAT31(uVar27,cVar6) +
                                    (CARRY1(bVar7 + 0x53,*pbVar14) || CARRY1(bVar38,0xf4 < bVar46));
                            pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                            *pcVar10 = *pcVar10 - (char)uVar53;
                            *pcVar16 = *pcVar16 + cVar6;
                            pbVar31 = pbVar31 + -*(int *)pbVar31;
                            *(char *)((int)pbVar31 * 5) = *(char *)((int)pbVar31 * 5) + bVar33;
                            pcVar16[(int)unaff_EBP] = pcVar16[(int)unaff_EBP] + cVar6;
                            *pcVar16 = *pcVar16 + cVar6;
                            bVar7 = (byte)(uVar53 >> 8) | *pbVar31;
                            uVar30 = (undefined1)uStack_8;
                            cVar45 = (char)((uint)uStack_8 >> 8) + *(char *)(uStack_8 + 0xf);
                            *pcVar16 = *pcVar16 + cVar6;
                            bVar38 = cVar6 + 0x2aU & *pbVar31;
                            iVar17 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar27,bVar38) =
                                 *(char *)CONCAT31(uVar27,bVar38) + bVar38;
                            pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x2a);
                            cVar45 = cVar45 + *(char *)(CONCAT22(uStack_8._2_2_,
                                                                 CONCAT11(cVar45,uVar30)) + 0x10);
                            *pcVar16 = *pcVar16 + bVar38 + 0x2a;
                            bVar38 = bVar38 + 0x54 & *pbVar31;
                            iVar11 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar27,bVar38) =
                                 *(char *)CONCAT31(uVar27,bVar38) + bVar38;
                            pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x2a);
                            puVar41 = (uint *)CONCAT22(uStack_8._2_2_,
                                                       CONCAT11(cVar45 + *(char *)(CONCAT22(uStack_8
                                                  ._2_2_,CONCAT11(cVar45,uVar30)) + 0x11),uVar30));
                            *pcVar16 = *pcVar16 + bVar38 + 0x2a;
                            bVar38 = bVar38 + 0x54 & *pbVar31;
                            puVar47 = (uint *)(pbVar19 +
                                              *(int *)(unaff_EBP + 0x11) + iVar11 + iVar17);
                            *(char *)CONCAT31(uVar27,bVar38) =
                                 *(char *)CONCAT31(uVar27,bVar38) + bVar38;
                            pbVar13 = (byte *)CONCAT31(uVar27,bVar38 + 0x2a);
                            puVar40 = (uint *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                                       CONCAT11(bVar7 + *pbVar13,(char)uVar53));
                            uVar59 = CONCAT44(pbVar31,pbVar13 + (uint)CARRY1(bVar7,*pbVar13) +
                                                                *(int *)pbVar13);
                            uVar53 = uVar50;
                            goto code_r0x00402866;
                          }
                        }
                        cVar6 = (char)pcVar16;
                        uVar27 = (undefined3)((uint)pcVar16 >> 8);
                        cVar45 = cVar6 + '\x02';
                        piVar25 = (int *)CONCAT31(uVar27,cVar45);
                        pbVar18 = pbVar42;
                        in_ES = uVar50;
                        pbVar14 = pbVar31;
                        if (SCARRY1(cVar6,'\x02') != cVar45 < '\0') goto code_r0x00402724;
                        *(char *)piVar25 = (char)*piVar25 + cVar45;
                        pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '\n');
                        *(byte *)puVar12 = (byte)*puVar12 - cVar8;
                        *pbVar31 = *pbVar31 + (char)pbVar42;
                      }
                      pbVar14 = unaff_EBP + 0x6fe1411;
                      bVar54 = CARRY1(*pbVar14,bVar38);
                      *pbVar14 = *pbVar14 + bVar38;
                    }
                    goto code_r0x00402746;
                  }
                  pbVar13[(int)pbVar31] = pbVar13[(int)pbVar31] + cVar6;
                  pbVar14 = pbVar18;
                  unaff_EDI = pbVar19;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar52 = 0x927c;
              in_stack_ffffffe0 = 0x40268f;
              uVar59 = func_0x02040000(in_CS,in_stack_ffffffe8,pbVar42);
              pbVar31 = (byte *)((ulonglong)uVar59 >> 0x20);
              *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
              pbVar18 = (byte *)CONCAT31((int3)((ulonglong)uVar59 >> 8),(char)uVar59 + '\x12');
              pbVar14 = extraout_ECX_00;
              in_CS = uVar52;
            }
            goto code_r0x00402680;
          }
          pbVar19 = unaff_EBP + -1;
          *pcVar16 = *pcVar16 + cVar6;
          pbVar31 = (byte *)CONCAT31(uVar44,bVar38 | *pbVar13);
          pbVar18 = (byte *)CONCAT31(uVar27,cVar6 + ':');
code_r0x00402677:
          puVar47 = (uint *)((int)puVar47 + -1);
          unaff_EBP = pbVar19;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar18 = *pbVar18 + bVar38;
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar13 >> 8) | unaff_EBP[-0x6b],
                                          (char)pbVar13));
      *pbVar18 = *pbVar18 + bVar38;
      cVar6 = bVar7 + 0xf;
      pcVar16 = (char *)CONCAT31(uVar27,cVar6);
      uStack_8 = CONCAT22(uStack_8._2_2_,uStack_c);
      if (SCARRY1(bVar38,'\x02') == cVar6 < '\0') {
        pcVar16 = pcVar16 + (0xfd < bVar38) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar16 = *pcVar16 + cVar6;
      cVar45 = bVar7 + 0x11;
      pbVar19 = (byte *)CONCAT31(uVar27,cVar45);
      uVar59 = CONCAT44(pbVar31,pbVar19);
      uStack_8 = CONCAT22(uStack_8._2_2_,uStack_c);
      pbVar18 = pbVar14;
      pbVar14 = unaff_EDI;
      if (SCARRY1(cVar6,'\x02') == cVar45 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar19 = *pbVar19 + (char)pbVar19;
      bVar38 = (char)pbVar19 + 2;
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar38);
      if ((POPCOUNT(bVar38) & 1U) == 0) {
        *pcVar16 = *pcVar16 + bVar38;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar19 = pbVar13 + (int)pbVar18;
      bVar54 = CARRY1(*pbVar19,bVar38);
      *pbVar19 = *pbVar19 + bVar38;
      pbVar19 = unaff_EBP;
      unaff_EDI = pbVar14;
      uVar53 = uVar50;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar40 = (char)*puVar40 + (byte)puVar40;
  uVar27 = (undefined3)((uint)puVar40 >> 8);
  bVar38 = (byte)puVar40 | *(byte *)((int)puVar40 + 0x400000e);
  pcVar16 = (char *)CONCAT31(uVar27,bVar38);
  puVar47 = puVar12;
  if ('\0' < (char)bVar38) {
    *pcVar16 = *pcVar16 + bVar38;
    bVar38 = bVar38 + 0x28 | *(byte *)CONCAT31(uVar27,bVar38 + 0x28);
    *pbVar13 = *pbVar13 + (char)((uint)pbVar18 >> 8);
    puVar47 = puVar12 + 1;
    out(*puVar12,(short)pbVar31);
    *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
    pcVar16 = (char *)(uint)(bVar38 | *pbVar31);
    in_stack_ffffffe8 = unaff_EBP;
  }
  bVar38 = (byte)pcVar16 & 0x7b;
  bVar54 = (char)(bVar38 + 0x17) < '\0';
  uStack_10 = uVar52;
  if (SCARRY1(bVar38,'\x17') == bVar54) {
    pbVar42 = unaff_EDI;
    if (SCARRY1(bVar38,'\x17') != bVar54) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar45 = (char)unaff_EDI;
  *unaff_EDI = *unaff_EDI + cVar45;
  iVar29 = (int3)((uint)unaff_EDI >> 8);
  cVar6 = cVar45 + '\x02';
  pbVar14 = (byte *)CONCAT31(iVar29,cVar6);
  bVar54 = (POPCOUNT(cVar6) & 1U) == 0;
  if (!bVar54) goto code_r0x00402704;
  *pbVar14 = *pbVar14 + cVar6;
  cVar45 = cVar45 + '\x04';
  pcVar16 = (char *)CONCAT31(iVar29,cVar45);
  if ((POPCOUNT(cVar45) & 1U) == 0) {
    *pcVar16 = *pcVar16 + cVar45;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar31 = (byte *)((int)iVar29 >> 0x17);
  puVar12 = puVar47;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar43 = (uint *)((ulonglong)uVar59 >> 0x20);
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
    cVar6 = (char)puVar41 - (byte)*puVar12;
    iVar17 = CONCAT22((short)((uint)puVar41 >> 0x10),
                      CONCAT11((char)((uint)puVar41 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),cVar6) + 0x12),cVar6));
    *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
    uVar27 = (undefined3)((ulonglong)uVar59 >> 8);
    bVar38 = (char)uVar59 + 0x2aU & (byte)*puVar43;
    pcVar16 = (char *)CONCAT31(uVar27,bVar38);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x12));
    *pcVar16 = *pcVar16 + bVar38;
    puVar22 = (uint *)CONCAT31(uVar27,bVar38 + 0x2a);
    pbVar14 = (byte *)(uint)uVar53;
get_Value:
    cVar6 = *(char *)(iVar17 + 0x13);
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    uVar27 = (undefined3)((uint)puVar22 >> 8);
    bVar38 = (char)puVar22 + 0x2aU & (byte)*puVar43;
    pcVar16 = (char *)CONCAT31(uVar27,bVar38);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x13));
    *pcVar16 = *pcVar16 + bVar38;
    pbVar13 = (byte *)CONCAT31(uVar27,bVar38 + 0x2a);
    uVar15 = (uint)uVar53;
    bVar38 = (byte)((uint)puVar40 >> 8);
    bVar7 = bVar38 + *pbVar13;
    pbVar13 = pbVar13 + (uint)CARRY1(bVar38,*pbVar13) + *(int *)pbVar13;
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
    puVar41 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar17 >> 0x10),
                                               CONCAT11((char)((uint)iVar17 >> 8) + cVar6,
                                                        (char)iVar17)) >> 8),
                               (char)iVar17 - (byte)*puVar12);
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11(bVar7 + *pbVar13,(char)puVar40));
    pbVar13 = pbVar13 + (uint)CARRY1(bVar7,*pbVar13) + *(int *)pbVar13;
code_r0x00402898:
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
    bVar38 = (byte)puVar43;
    uVar36 = CONCAT11((char)((uint)puVar43 >> 8) - (byte)*puVar12,bVar38);
    pbVar31 = (byte *)CONCAT22((short)((uint)puVar43 >> 0x10),uVar36);
    pcVar16 = (char *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((char)((uint)puVar41 >> 8) + (byte)puVar41[-0x19],
                                        (char)puVar41));
    *pbVar13 = *pbVar13 + (char)pbVar13;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),(char)pbVar13 + '\x03');
    puVar41 = puVar12;
    do {
      puVar12 = puVar41 + 1;
      out(*puVar41,uVar36);
      pcVar16 = pcVar16 + -1;
      bVar7 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar7;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((byte)((uint)puVar40 >> 8) | *pbVar31,(char)puVar40));
      *pbVar13 = *pbVar13 + bVar7;
      *pcVar16 = *pcVar16 + bVar38;
      *(byte *)((int)pbVar13 * 2) = *(byte *)((int)pbVar13 * 2) ^ bVar7;
      *pbVar13 = *pbVar13 + bVar7;
      *pbVar13 = *pbVar13 | bVar7;
      bVar54 = CARRY1((byte)*puVar40,bVar38);
      *(byte *)puVar40 = (byte)*puVar40 + bVar38;
      cVar6 = bVar7 + 10 + bVar54;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar6);
      puVar41 = puVar12;
    } while (bVar7 < 0xf6 && !CARRY1(bVar7 + 10,bVar54));
    *pbVar13 = *pbVar13 + cVar6;
    in_stack_ffffffe0 = CONCAT22((short)((uint)in_stack_ffffffe0 >> 0x10),uVar50);
    pcVar10 = (char *)((uint)pbVar13 | *puVar47);
    puVar41 = (uint *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                               CONCAT11((char)((uint)pcVar16 >> 8) + unaff_EBP[-100],(char)pcVar16))
    ;
    *pcVar10 = *pcVar10 + (char)pcVar10;
    bVar38 = (char)pcVar10 + 7;
    uVar59 = CONCAT44(pbVar31,CONCAT31((int3)((uint)pcVar10 >> 8),bVar38));
code_r0x004028c8:
    puVar43 = (uint *)((ulonglong)uVar59 >> 0x20);
  } while ((POPCOUNT(bVar38) & 1U) != 0);
  *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
  puVar22 = (uint *)CONCAT31((int3)((ulonglong)uVar59 >> 8),(char)uVar59 + '-');
  puVar12 = (uint *)((uint)puVar12 | *(uint *)((int)puVar43 + 0x3b));
  bVar54 = CARRY4(*puVar22,(uint)puVar22);
  uVar20 = *puVar22;
  *puVar22 = (uint)(*puVar22 + (int)puVar22);
  if (SCARRY4(uVar20,(int)puVar22)) {
    bVar54 = CARRY4(*puVar22,(uint)puVar22);
    bVar56 = SCARRY4(*puVar22,(int)puVar22);
    *puVar22 = (uint)(*puVar22 + (int)puVar22);
    bVar38 = POPCOUNT(*puVar22 & 0xff);
    if (bVar56) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + bVar54);
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
    bVar54 = (POPCOUNT((byte)*puVar43) & 1U) == 0;
    if (bVar54) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar54) {
      iVar17 = CONCAT31((int3)((uint)puVar41 >> 8),(char)puVar41 - (byte)*puVar12);
      goto get_Value;
    }
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + 'r');
    pbVar14 = unaff_EBP;
code_r0x004028e2:
    uVar36 = (undefined2)((uint)in_stack_ffffffe0 >> 0x10);
    uVar20 = *puVar22;
    *puVar22 = (uint)(*puVar22 + (int)puVar22);
    if (SCARRY4(uVar20,(int)puVar22)) {
      if (*puVar22 == 0 || SCARRY4(uVar20,(int)puVar22) != (int)*puVar22 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar41 = (uint *)((int)puVar41 + -1);
    cVar6 = (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + cVar6;
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) |
                                        *(byte *)((int)puVar40 + 0x16d7207),(char)puVar40));
    pbVar13 = (byte *)((int)puVar22 + 0x7d);
    bVar38 = *pbVar13;
    bVar33 = (byte)((uint)puVar43 >> 8);
    bVar7 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar33;
    uVar15 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar7,bVar33) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar13 < '\0') * 0x80 | (uint)(*pbVar13 == 0) * 0x40 |
             (uint)(bVar55 & 1) * 0x10 | (uint)((POPCOUNT(*pbVar13) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar38,bVar33);
    *(byte *)puVar22 = (byte)*puVar22 + cVar6;
    pbVar13 = (byte *)(CONCAT31((int3)((uint)puVar22 >> 8),cVar6 + '+') ^ *puVar47);
    if ((POPCOUNT((uint)pbVar13 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar38 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar38;
    puVar22 = (uint *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar38 + 0x72);
    if (bVar38 < 0x8e && (byte)(bVar38 + 0x72) != '\0') {
      if (SCARRY1(bVar38,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar22 + 0x6f) = *(byte *)((int)puVar22 + 0x6f) + bVar33;
    }
code_r0x00402905:
    uVar59 = CONCAT44(puVar43,puVar22);
    puVar41 = (uint *)((int)puVar41 + -1);
    cVar6 = (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + cVar6;
    bVar38 = (byte)((uint)puVar40 >> 8) | (byte)*puVar40;
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar38,(char)puVar40));
    uVar50 = (ushort)uVar15;
    if ((char)bVar38 < '\x01') {
      *(byte *)puVar22 = (byte)*puVar22 + cVar6;
      puVar47 = (uint *)((int)puVar47 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar22 = (byte)*puVar22 + cVar6;
    uVar15 = 0x40291c;
    uVar59 = func_0x7346291c();
    *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
    puVar40 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar59 >> 0x20));
    puStackY_3c = (uint *)CONCAT22(puStackY_3c._2_2_,uVar50);
    uStackY_38 = puVar41;
    while( true ) {
      pcVar16 = (char *)((int)uVar59 * 2);
      *pcVar16 = *pcVar16 - (char)puVar40;
      uVar20 = *puVar41;
      cVar6 = (char)((uint)puVar40 >> 8);
      *(byte *)puVar41 = (byte)*puVar41 + cVar6;
      if (SCARRY1((byte)uVar20,cVar6) == (char)(byte)*puVar41 < '\0') {
        pbVar13 = (byte *)((int)puVar47 + (int)uVar59);
        *pbVar13 = *pbVar13 + (char)uVar59;
        bVar38 = *pbVar13;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar43 = (uint *)((ulonglong)uVar59 >> 0x20);
      cVar6 = (char)uVar59;
      *(char *)uVar59 = *(char *)uVar59 + cVar6;
      uVar27 = (undefined3)((ulonglong)uVar59 >> 8);
      bVar38 = cVar6 + 7;
      puVar22 = (uint *)CONCAT31(uVar27,bVar38);
      bVar7 = (byte)((ulonglong)uVar59 >> 0x28);
      if ((POPCOUNT(bVar38) & 1U) != 0) break;
      *(byte *)puVar22 = (byte)*puVar22 + bVar38;
      pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '3');
      uVar36 = (undefined2)((uint)puVar41 >> 0x10);
      uVar30 = SUB41(puVar41,0);
      bVar38 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar12 + 0x16) + (0xd3 < bVar38);
      puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(bVar38,uVar30));
      *pcVar16 = *pcVar16 + cVar6 + '3';
      cVar45 = cVar6 + ':';
      puVar22 = (uint *)CONCAT31(uVar27,cVar45);
      if ((POPCOUNT(cVar45) & 1U) != 0) {
        bVar38 = bVar38 | *(byte *)((int)puVar43 + 7);
        puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(bVar38,uVar30));
        bVar54 = (POPCOUNT(bVar38) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar22 = (byte)*puVar22 + cVar45;
      puVar22 = (uint *)(CONCAT31(uVar27,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar13 = (byte *)((int)puVar22 + 0x72);
      bVar56 = SCARRY1(*pbVar13,bVar7);
      *pbVar13 = *pbVar13 + bVar7;
      bVar38 = POPCOUNT(*pbVar13);
code_r0x0040294c:
      if ((bVar38 & 1) == 0) {
        *(byte *)((int)puVar22 + 0x72) = *(byte *)((int)puVar22 + 0x72) + (char)((uint)puVar43 >> 8)
        ;
      }
      else if (bVar56) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar6 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_40 = (uint *)CONCAT22(puStackY_40._2_2_,uStack_c);
code_r0x00402957:
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      cVar6 = (char)puVar22 + '(';
      puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),cVar6);
      *(byte *)puVar22 = (byte)*puVar22 + cVar6;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((byte)((uint)puVar40 >> 8) | (byte)*puVar22,(char)puVar40)
                                );
      *(byte *)puVar22 = (byte)*puVar22 + cVar6;
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                 CONCAT11((byte)((uint)puVar43 >> 8) | (byte)puVar41[0x18],
                                          (char)puVar43));
      puVar12 = puStackY_40;
      puVar47 = puStackY_3c;
code_r0x00402966:
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      bVar38 = (byte)((uint)puVar41 >> 8) | *(byte *)((int)puVar43 + 7);
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar38,(char)puVar41));
      if ((POPCOUNT(bVar38) & 1U) != 0) {
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + '~');
code_r0x00402971:
      uVar15 = (uint)uStack_c;
code_r0x00402972:
      uVar36 = (undefined2)((uint)in_stack_ffffffe0 >> 0x10);
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x00402974:
      bVar38 = 0xe9 < (byte)puVar22;
      in_stack_ffffffe0 = CONCAT22(uVar36,in_CS);
      in_CS = 0x2d0a;
      uVar59 = func_0x00006128(in_stack_ffffffe0);
      puVar40 = (uint *)uVar59;
      piVar25 = (int *)((int)((ulonglong)uVar59 >> 0x20) + -0x3d);
      *piVar25 = (int)((int)puVar12 + (uint)bVar38 + *piVar25);
      bVar54 = SCARRY4(*puVar40,(int)puVar40);
      *puVar40 = *puVar40 + (int)puVar40;
      uVar20 = *puVar40;
      puVar40 = extraout_ECX_02;
code_r0x00402982:
      bVar38 = POPCOUNT(uVar20 & 0xff);
      if (bVar54) {
        *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
        puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                   CONCAT11((byte)((uint)puVar40 >> 8) |
                                            *(byte *)((ulonglong)uVar59 >> 0x20),(char)puVar40));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar16 = (char *)((ulonglong)uVar59 >> 0x20);
      if ((bVar38 & 1) == 0) {
        *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
        *pcVar16 = *pcVar16 + (char)puVar40;
        uVar59 = CONCAT44(CONCAT22((short)((ulonglong)uVar59 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar59 >> 0x28) - pcVar16[0x1f],
                                            (char)((ulonglong)uVar59 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar59 >> 8),(char)uVar59 + '('));
code_r0x00402991:
        puVar43 = (uint *)((ulonglong)uVar59 >> 0x20);
        pbVar13 = (byte *)uVar59;
        bVar38 = (byte)uVar59;
        bVar54 = CARRY1(bVar38,*pbVar13);
        puVar22 = (uint *)CONCAT31((int3)((ulonglong)uVar59 >> 8),bVar38 + *pbVar13);
        cVar6 = bVar38 + *pbVar13;
        if (SCARRY1(bVar38,*pbVar13)) goto code_r0x004029c4;
code_r0x00402995:
        puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                   CONCAT11(((char)((uint)puVar43 >> 8) -
                                            *(byte *)((int)puVar43 + 0x6b)) - bVar54,(char)puVar43))
        ;
        bVar38 = (byte)puVar22;
        bVar54 = CARRY1(bVar38,(byte)*puVar22);
        bVar56 = SCARRY1(bVar38,(byte)*puVar22);
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar38 + (byte)*puVar22);
        do {
          if (!bVar56) {
            puVar12 = (uint *)((int)puVar12 + (uint)bVar54 + *puVar22);
            pbVar13 = (byte *)((int)puVar22 + *puVar22);
            bVar7 = (byte)pbVar13;
            *pbVar13 = *pbVar13 + bVar7;
            *(byte *)puVar40 = (byte)*puVar40 + (char)puVar40;
            bVar38 = *pbVar13;
            *pbVar13 = *pbVar13 + bVar7;
            *puVar47 = (uint)((int)puVar41 + (uint)CARRY1(bVar38,bVar7) + *puVar47);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar40;
            uVar27 = (undefined3)((uint)pbVar13 >> 8);
            bVar7 = bVar7 | (byte)*puVar12;
            puVar22 = (uint *)CONCAT31(uVar27,bVar7);
            uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uStack_c);
            uVar1 = *puVar22;
            uVar20 = *puVar22;
            *puVar22 = (uint)(*puVar22 + (int)puVar22);
            if (SCARRY4(uVar20,(int)puVar22)) {
              *(byte *)puVar12 = (byte)*puVar12 - (char)puVar41;
              *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
              *(byte *)puVar47 = (byte)*puVar47 - (char)puVar41;
            }
            else {
              puStackY_3c = (uint *)CONCAT22(puStackY_3c._2_2_,uVar50);
              uStack_c = uVar50;
              if (CARRY4(uVar1,(uint)puVar22)) goto code_r0x00402971;
              bVar54 = CARRY1(bVar7,(byte)*puVar22);
              bVar56 = SCARRY1(bVar7,(byte)*puVar22);
              puVar22 = (uint *)CONCAT31(uVar27,bVar7 + (byte)*puVar22);
code_r0x004029be:
              if (!bVar56) {
                puStackY_3c = (uint *)CONCAT22(puStackY_3c._2_2_,uVar50);
                *(byte *)((int)puVar43 + -0x37) =
                     (*(byte *)((int)puVar43 + -0x37) - (char)((uint)puVar43 >> 8)) - bVar54;
                cVar6 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar6;
                bVar38 = (byte)puVar22;
                bVar54 = CARRY1(bVar38,(byte)*puVar22);
                bVar56 = SCARRY1(bVar38,(byte)*puVar22);
                puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar38 + (byte)*puVar22);
                goto code_r0x004029c6;
              }
            }
            bVar38 = (byte)puVar40;
            bVar54 = CARRY1((byte)*puVar43,bVar38);
            bVar56 = SCARRY1((byte)*puVar43,bVar38);
            *(byte *)puVar43 = (byte)*puVar43 + bVar38;
            if (bVar54) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar56) {
            uVar50 = (ushort)pbVar14;
            goto code_r0x00402966;
          }
          uVar15 = (uint)uVar50;
          *(uint *)((int)puVar43 + -0x23) =
               (*(int *)((int)puVar43 + -0x23) - (int)puVar12) - (uint)bVar54;
          uVar20 = *puVar22;
          bVar7 = (byte)puVar22;
          uVar1 = *puVar22;
          uVar27 = (undefined3)((uint)puVar22 >> 8);
          bVar38 = bVar7 + (byte)*puVar22;
          puVar22 = (uint *)CONCAT31(uVar27,bVar38);
          if (SCARRY1(bVar7,(byte)uVar1)) goto code_r0x00402972;
          in_stack_ffffffe0 = CONCAT22((short)((uint)in_stack_ffffffe0 >> 0x10),uVar50);
          cVar6 = (char)puVar43;
          bVar33 = ((char)((uint)puVar43 >> 8) - *(byte *)((int)puVar43 + -0xf)) -
                   CARRY1(bVar7,(byte)uVar20);
          puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar33,cVar6));
          puVar48 = (uint *)CONCAT31(uVar27,bVar38 + (byte)*puVar22);
          bVar7 = (byte)puVar40;
          if (SCARRY1(bVar38,(byte)*puVar22)) {
            *(byte *)puVar43 = (byte)*puVar43 + bVar7;
            uVar59 = CONCAT44(puVar43,(int)puVar48 + -0x1c37211);
            pcVar16 = (char *)((int)puVar48 + -0x1c3720a);
            *pcVar16 = *pcVar16 + bVar33;
            bVar38 = POPCOUNT(*pcVar16);
            goto code_r0x00402984;
          }
          puVar12 = (uint *)((int)puVar12 +
                            (-(uint)CARRY1(bVar38,(byte)*puVar22) - *(int *)((int)puVar43 + 5)));
          bVar54 = SCARRY4((int)puVar48,*puVar48);
          uVar20 = (int)puVar48 + *puVar48;
          uVar59 = CONCAT44(puVar43,uVar20);
          if (bVar54) goto code_r0x00402982;
          bVar38 = (byte)uVar20 + 0x8e;
          uVar21 = CONCAT31((int3)(uVar20 >> 8),bVar38 - CARRY4((uint)puVar48,*puVar48));
          *puVar41 = (*puVar41 - uVar21) -
                     (uint)((byte)uVar20 < 0x72 || bVar38 < CARRY4((uint)puVar48,*puVar48));
          pbVar13 = (byte *)(uVar21 - 0x5e);
          bVar38 = *pbVar13;
          *pbVar13 = *pbVar13 + bVar33;
          uVar20 = (uint)CARRY1(bVar38,bVar33);
          uVar1 = uVar21 - 0x32d72;
          puVar22 = (uint *)(uVar1 - uVar20);
          if (SBORROW4(uVar21,0x32d72) != SBORROW4(uVar1,uVar20)) goto code_r0x00402992;
          uVar52 = uVar53;
          if (uVar21 < 0x32d72 || uVar1 < uVar20) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar22 >> 8);
            *(byte *)puVar43 = (byte)*puVar43 + bVar7;
            puVar48 = puVar12 + 1;
            out(*puVar12,CONCAT11(bVar33,cVar6));
            *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
            goto code_r0x00402a3e;
          }
          bVar54 = CARRY4((uint)puVar22,*puVar22);
          bVar56 = SCARRY4((int)puVar22,*puVar22);
          puVar22 = (uint *)((int)puVar22 + *puVar22);
          if (!bVar56) {
            uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar50);
            *(byte *)puVar12 = (byte)*puVar12 + bVar54;
            bVar38 = (byte)puVar22;
            *(byte *)((int)puVar43 + (int)unaff_EBP) =
                 *(byte *)((int)puVar43 + (int)unaff_EBP) + bVar38;
            *(byte *)puVar41 = (byte)*puVar41 + cVar6;
            *(byte *)puVar41 = (byte)*puVar41 ^ bVar38;
            bVar34 = (byte)((uint)puVar40 >> 8);
            *(byte *)puVar12 = (byte)*puVar12 + bVar34;
            *(byte *)puVar22 = (byte)*puVar22 + bVar38;
            pbVar13 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),bVar38 | (byte)*puVar22);
            *(byte *)puVar40 = (byte)*puVar40 + cVar6;
            bVar46 = *pbVar13;
            uVar36 = (undefined2)((uint)puVar40 >> 0x10);
            puVar40 = (uint *)CONCAT22(uVar36,CONCAT11(bVar34 + bVar46,bVar7));
            pbVar13 = pbVar13 + (uint)CARRY1(bVar34,*pbVar13) + *(int *)pbVar13;
            *(byte *)puVar43 = (byte)*puVar43 + bVar7;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar14 = pbVar13 + 0x73;
            bVar38 = *pbVar14;
            *pbVar14 = *pbVar14 + bVar33;
            uVar27 = (undefined3)((uint)pbVar13 >> 8);
            bVar38 = (char)pbVar13 + CARRY1(bVar38,bVar33);
            pcVar16 = (char *)CONCAT31(uVar27,bVar38);
            *(byte *)puVar43 = (byte)*puVar43 + bVar7;
            if ((POPCOUNT((byte)*puVar43) & 1U) == 0) {
              uStack_c = uVar50;
            }
            puVar49 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x17));
            *pcVar16 = *pcVar16 + bVar38;
            cVar6 = bVar38 + 2;
            puVar22 = (uint *)CONCAT31(uVar27,cVar6);
            if (bVar38 < 0xfe) {
              *puVar22 = (uint)(*puVar22 + (int)puVar22);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar22 = (byte)*puVar22 + cVar6;
            uVar15 = *puVar43;
            puVar48 = (uint *)((int)puVar12 + puVar41[0x19]);
            *(byte *)puVar22 = (byte)*puVar22 + cVar6;
            puVar40 = (uint *)CONCAT22(uVar36,CONCAT11(bVar34 + bVar46 | (byte)*puVar22,
                                                       bVar7 | (byte)uVar15));
            puVar47 = puVar49;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar38;
    pbVar13 = (byte *)((int)puVar22 + 0x73);
    bVar54 = CARRY1(*pbVar13,bVar7);
    *pbVar13 = *pbVar13 + bVar7;
  } while( true );
code_r0x00402992:
  pbVar13 = (byte *)((int)puVar22 + 0x2a);
  bVar54 = CARRY1(*pbVar13,bVar33);
  *pbVar13 = *pbVar13 + bVar33;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar22) = *(byte *)(in_GS_OFFSET + (int)puVar22) + (char)puVar22;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | *(byte *)((int)puVar47 + 0x66),
                                      (char)puVar40));
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x00402a3e:
  uVar27 = (undefined3)((uint)puVar22 >> 8);
  bVar38 = (byte)puVar22 | (byte)*puVar48;
  pcVar16 = (char *)CONCAT31(uVar27,bVar38);
  if ((char)bVar38 < '\0') {
    *pcVar16 = *pcVar16 + bVar38;
    cVar6 = bVar38 + 2;
    piVar25 = (int *)CONCAT31(uVar27,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar25 = (char)*piVar25 + cVar6;
      bVar38 = bVar38 + 0x71;
      pcVar10 = (char *)CONCAT31(uVar27,bVar38);
      pcVar16 = (char *)segment(uVar52,(short)puVar41 + (short)puVar48);
      *pcVar16 = *pcVar16 + bVar38;
      uVar15 = puVar47[0x1a];
      *pcVar10 = *pcVar10 + bVar38;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((byte)((uint)puVar40 >> 8) | (byte)uVar15 |
                                          *(byte *)((int)puVar47 + 0x69),(char)puVar40));
      *pcVar10 = *pcVar10 + bVar38;
      bVar38 = bVar38 | (byte)*puVar43;
      pcVar16 = (char *)CONCAT31(uVar27,bVar38);
      if ((POPCOUNT(bVar38) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar12 = puVar48 + (uint)bVar57 * -2 + 1;
    out(*puVar48,(short)puVar43);
  }
  else {
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((char)((uint)puVar41 >> 8) + (byte)puVar41[6],(char)puVar41)
                              );
code_r0x00402a5d:
    *pcVar16 = *pcVar16 + (char)pcVar16;
    piVar25 = (int *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + 'o');
    puVar12 = puVar48;
  }
code_r0x00402a61:
  pcVar16 = (char *)segment(uVar52,(short)puVar41 + (short)puVar12);
  *pcVar16 = *pcVar16 + (char)piVar25;
  cVar6 = (char)puVar40;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | (byte)puVar47[0x1a],cVar6));
  *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
  uVar36 = CONCAT11((byte)((uint)puVar43 >> 8) | *(byte *)((int)puVar43 + 0x65),(char)puVar43);
  puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),uVar36);
  piVar23 = (int *)((int)piVar25 + *piVar25);
  puVar48 = puVar12;
  puVar49 = puVar47;
  uVar51 = uVar50;
  if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402ae3;
  *(byte *)puVar43 = (byte)*puVar43 + cVar6;
  puVar48 = puVar12 + (uint)bVar57 * -2 + 1;
  out(*puVar12,uVar36);
code_r0x00402a75:
  bVar38 = (byte)((uint)puVar40 >> 8) | (byte)*puVar43;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar38,(char)puVar40));
  piVar25 = (int *)(uint)(byte)*puVar41;
  *(byte *)puVar48 = (byte)*puVar48 - bVar38;
  puVar49 = puVar47;
code_r0x00402a7f:
  *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
  out(*puVar48,(short)puVar43);
  bVar38 = in((short)puVar43);
  *(byte *)puVar49 = bVar38;
  *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | (byte)*puVar43,(char)puVar40));
  iVar17 = *piVar25;
  cVar6 = in(1);
  puVar22 = (uint *)CONCAT31((int3)((uint)((int)piVar25 + *piVar25) >> 8),cVar6);
  *(char *)puVar22 = (char)*puVar22 + cVar6;
  puVar22 = (uint *)((uint)puVar22 | *puVar22);
  *(byte *)puVar40 = (byte)*puVar40 + (char)puVar43;
  puVar48 = (uint *)((int)puVar48 + (((uint)bVar57 * -8 + 4) - iVar17));
  puVar49 = (uint *)((int)puVar49 + (uint)bVar57 * -2 + 1);
  uStack_c = uVar50;
  while( true ) {
    bVar38 = (byte)puVar22 | (byte)*puVar43;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar38);
    puVar47 = puVar49;
    if ((POPCOUNT(bVar38) & 1U) != 0) break;
    *(byte *)puVar22 = (byte)*puVar22 + bVar38;
code_r0x00402a9b:
    uVar27 = (undefined3)((uint)puVar22 >> 8);
    cVar6 = (char)puVar22 + '\r';
    piVar23 = (int *)CONCAT31(uVar27,cVar6);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar23;
    *(char *)piVar23 = (char)*piVar23 + cVar6;
    *(byte *)(puVar48 + -0xc800000) = (byte)puVar48[-0xc800000] + (char)puVar43;
    *(char *)piVar23 = (char)*piVar23 + cVar6;
    *(byte *)puVar43 = (byte)*puVar43 + cVar6;
    cVar45 = (char)puVar40;
    if ((POPCOUNT((byte)*puVar43) & 1U) != 0) {
      *(byte *)puVar43 = (byte)*puVar43 + cVar45;
      puVar12 = puVar48 + (uint)bVar57 * -2 + 1;
      out(*puVar48,(short)puVar43);
      piVar25 = (int *)((longlong)*piVar23 * 0x7b020a00);
      *(char *)piVar25 =
           (char)*piVar25 - ((longlong)(int)piVar25 != (longlong)*piVar23 * 0x7b020a00);
      pbVar14 = (byte *)((int)puVar47 + (int)unaff_EBP * 2);
      *pbVar14 = *pbVar14;
      goto code_r0x00402a61;
    }
    *(char *)piVar23 = (char)*piVar23 + cVar6;
    puVar22 = (uint *)CONCAT31(uVar27,(char)puVar22 + ':');
    puVar12 = (uint *)((uint)puVar48 | *(uint *)((int)puVar43 + -0x79));
    iVar17 = (int)puVar22 + *puVar22;
    if (SCARRY4((int)puVar22,*puVar22)) {
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((char)((uint)puVar41 >> 8) + (byte)puVar12[(int)puVar41],
                                          (char)puVar41));
      *(char *)((int)puVar43 * 2) = *(char *)((int)puVar43 * 2) + (char)iVar17;
      puVar49 = puVar47;
      goto code_r0x00402b33;
    }
    uVar27 = (undefined3)((uint)iVar17 >> 8);
    cVar6 = (char)iVar17 + CARRY4((uint)puVar22,*puVar22);
    piVar25 = (int *)CONCAT31(uVar27,cVar6);
    *(byte *)puVar43 = (byte)*puVar43 + cVar45;
    bVar54 = (POPCOUNT((byte)*puVar43) & 1U) != 0;
    if ((bVar54) && (bVar54)) goto code_r0x00402a61;
    *(char *)piVar25 = (char)*piVar25 + cVar6;
    cVar8 = cVar6 + '(';
    pcVar16 = (char *)CONCAT31(uVar27,cVar8);
    puVar49 = puVar47 + (uint)bVar57 * -2 + 1;
    uVar15 = in((short)puVar43);
    *puVar47 = uVar15;
    *pcVar16 = *pcVar16 + cVar8;
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) | bRama07b0222,cVar45));
    *pcVar16 = *pcVar16 + cVar8;
    pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '>');
code_r0x00402ad2:
    out(*puVar12,(short)puVar43);
    puVar48 = (uint *)((int)(puVar12 + (uint)bVar57 * -2 + 1) + (uint)bVar57 * -2 + 1);
    out((byte)puVar12[(uint)bVar57 * -2 + 1],(short)puVar43);
    bVar38 = (byte)pcVar16;
    *pcVar16 = *pcVar16 + bVar38;
    puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(byte)puVar41 | (byte)*puVar49);
    bVar55 = 9 < (bVar38 & 0xf) | bVar55;
    uVar27 = (undefined3)((uint)pcVar16 >> 8);
    bVar38 = bVar38 + bVar55 * -6;
    puVar43 = (uint *)((uint)puVar43 ^ *puVar43);
    cVar6 = bVar38 + (0x9f < bVar38 | bVar55 * (bVar38 < 6)) * -0x60 + (byte)*puVar43;
    piVar25 = (int *)CONCAT31(uVar27,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar25 = (char)*piVar25 + cVar6;
    piVar23 = (int *)CONCAT31(uVar27,cVar6 + '\x17');
    uVar51 = uVar50;
code_r0x00402ae3:
    out(*puVar48,(short)puVar43);
    puVar12 = puVar48 + (uint)bVar57 * -2 + 1 + (uint)bVar57 * -2 + 1;
    out(puVar48[(uint)bVar57 * -2 + 1],(short)puVar43);
    *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
code_r0x00402ae7:
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | unaff_EBP[-0x60],(char)puVar41)
                              );
    cVar6 = (char)piVar23;
    *(char *)piVar23 = (char)*piVar23 + cVar6;
    uVar27 = (undefined3)((uint)piVar23 >> 8);
    bVar38 = cVar6 + 2;
    puVar22 = (uint *)CONCAT31(uVar27,bVar38);
    uVar50 = uVar51;
    if ((POPCOUNT(bVar38) & 1U) == 0) {
      *(byte *)puVar22 = (byte)*puVar22 + bVar38;
      cVar6 = cVar6 + '}';
      puVar22 = (uint *)CONCAT31(uVar27,cVar6);
      *(byte *)puVar22 = ((byte)*puVar22 - cVar6) - (0x84 < bVar38);
      pbVar14 = (byte *)((int)puVar43 + (int)puVar22);
      *pbVar14 = *pbVar14 + cVar6;
      bVar38 = POPCOUNT(*pbVar14);
      puVar48 = puVar12;
code_r0x00402af9:
      uVar50 = uVar51;
      puVar47 = puVar49;
      if ((bVar38 & 1) == 0) {
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        bVar38 = (byte)puVar40;
        *(byte *)puVar43 = (byte)*puVar43 + bVar38;
        uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uStack_c);
        puVar12 = puVar48 + (uint)bVar57 * -2 + 1;
        out(*puVar48,(short)puVar43);
        uVar15 = *puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + bVar38;
        iVar17 = CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + 'o') +
                 *(int *)((int)puVar43 * 2) + (uint)CARRY1((byte)uVar15,bVar38);
        pcVar16 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '(');
        while( true ) {
          uVar15 = *puVar43;
          bVar7 = (byte)puVar40;
          *(byte *)puVar43 = (byte)*puVar43 + bVar7;
          pcVar16 = pcVar16 + (uint)CARRY1((byte)uVar15,bVar7) + iRam73280512;
          bVar38 = (byte)pcVar16;
          *pcVar16 = *pcVar16 + bVar38;
          puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                     CONCAT11((byte)((uint)puVar40 >> 8) | bRam7d160243,bVar7));
          bVar57 = ((uint)uStackY_38 & 0x400) != 0;
          bVar55 = ((uint)uStackY_38 & 0x10) != 0;
          *pcVar16 = *pcVar16 + bVar38;
          uVar27 = (undefined3)((uint)pcVar16 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar27,bVar38 + 2) + (uint)(0xfd < bVar38);
          cVar6 = bVar38 + 4;
          if (SCARRY1(bVar38 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar27,cVar6) = *(char *)CONCAT31(uVar27,cVar6) + cVar6;
          iVar17 = CONCAT31(uVar27,bVar38 + 0x16);
code_r0x00402b33:
          piVar23 = (int *)(iVar17 + 0xe2802);
          *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)puVar40 >> 8);
          uVar51 = uVar50;
          uVar50 = uStack_c;
          while( true ) {
            bVar7 = (byte)puVar41 | (byte)((uint)puVar40 >> 8);
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar7);
            *piVar23 = (int)(*piVar23 + (int)piVar23);
            cVar6 = (char)piVar23;
            *(byte *)puVar43 = (byte)*puVar43 + cVar6;
            if ((POPCOUNT((byte)*puVar43) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar23 = (char)*piVar23 + cVar6;
            uVar15 = CONCAT31((int3)((uint)piVar23 >> 8),cVar6 + '\x13');
            puVar22 = (uint *)(uVar15 + 0x19061224 + (uint)(0x1f9edfd < uVar15));
            uVar1 = (uint)(0xe4ffffdd < uVar15 + 0xfe061202 ||
                          CARRY4(uVar15 + 0x19061224,(uint)(0x1f9edfd < uVar15)));
            uVar20 = *puVar12;
            uVar15 = *puVar12;
            *puVar12 = (uint)((byte *)(uVar15 + (int)puVar22) + uVar1);
            bVar38 = POPCOUNT(*puVar12 & 0xff);
            puVar48 = puVar12;
            if ((SCARRY4(uVar20,(int)puVar22) != SCARRY4((int)(uVar15 + (int)puVar22),uVar1)) ==
                (int)*puVar12 < 0) goto code_r0x00402af9;
            bVar38 = (byte)puVar22;
            *(byte *)puVar22 = (byte)*puVar22 + bVar38;
            iVar17 = CONCAT31((int3)((uint)puVar22 >> 8),bVar38 + 2) + 0x9d7d +
                     (uint)(0xfd < bVar38);
            bVar38 = (byte)puVar43 | (byte)*puVar43;
            uVar15 = *puVar41;
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            pcVar16 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x12') + 0x228b26
                               + *puVar49 + (uint)CARRY1((byte)uVar15,bVar7));
            cVar6 = bVar38 + (byte)*puVar40;
            puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),cVar6);
            if (SCARRY1(bVar38,(byte)*puVar40) == cVar6 < '\0') break;
            *pcVar16 = *pcVar16 + (char)pcVar16;
            cVar6 = (char)pcVar16 + '\x02';
            pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar6);
            bVar38 = POPCOUNT(cVar6);
            uVar51 = uVar50;
code_r0x00402b7a:
            puVar47 = puVar12;
            if ((bVar38 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar16;
              *pcVar16 = *pcVar16 + cVar6;
              uVar27 = (undefined3)((uint)pcVar16 >> 8);
              pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '\x13');
              *(byte *)puVar40 = (byte)*puVar40 | (byte)puVar43;
              *(byte *)puVar49 = (byte)*puVar49 | (byte)puVar43;
              *puVar43 = (uint)(pcVar16 + *puVar43);
              uVar36 = (undefined2)((uint)puVar41 >> 0x10);
              uVar30 = SUB41(puVar41,0);
              cVar45 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar41 + -0x5f);
              puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(cVar45,uVar30));
              *pcVar16 = *pcVar16 + cVar6 + '\x13';
              piVar23 = (int *)CONCAT31(uVar27,cVar6 + -0x7a);
              uVar15 = *puVar43;
              *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar15,(char)puVar40) == (char)(byte)*puVar43 < '\0') break;
              *(char *)piVar23 = (char)*piVar23 + cVar6 + -0x7a;
              cVar8 = cVar6 + -0x78;
              piVar23 = (int *)CONCAT31(uVar27,cVar8);
              uVar4 = uVar51;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *(char *)piVar23 = (char)*piVar23 + cVar8;
              pcVar16 = (char *)CONCAT31(uVar27,cVar6 + -0x65);
              *puVar40 = *puVar40 | (uint)puVar43;
              *puVar49 = *puVar49 | (uint)puVar43;
              pbVar14 = (byte *)((int)puVar40 + -1);
              cVar45 = cVar45 + *(byte *)((int)puVar41 + -0x5e);
              puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(cVar45,uVar30));
              *pcVar16 = *pcVar16 + cVar6 + -0x65;
              bVar38 = cVar6 + 10;
              puVar22 = (uint *)CONCAT31(uVar27,bVar38);
              bVar7 = (byte)pbVar14;
              *(byte *)puVar43 = (byte)*puVar43 + bVar7;
              puVar12 = puVar47 + (uint)bVar57 * -2 + 1;
              out(*puVar47,(short)puVar43);
              uVar15 = *puVar43;
              *(byte *)puVar43 = (byte)*puVar43 + bVar7;
              uVar21 = (uint)CARRY1((byte)uVar15,bVar7);
              uVar20 = *puVar43;
              uVar15 = *puVar43;
              pbVar13 = pbVar14 + uVar15 + uVar21;
              uVar5 = *puVar43;
              cRam130a0000 = cRam130a0000 - cVar45;
              uVar1 = *puVar43;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar22);
              *(byte *)puVar22 = (char)*puVar22 + bVar38;
              puVar40 = (uint *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar13 >> 8) | bRam7d170243,
                                                  (char)pbVar13 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar14,uVar20) ||
                                                  CARRY4((uint)(pbVar14 + uVar15),uVar21))));
              bVar57 = (uStack_c & 0x400) != 0;
              bVar55 = (uStack_c & 0x10) != 0;
              *(byte *)puVar22 = (char)*puVar22 + bVar38;
              bVar54 = 0xfd < bVar38;
              pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '\f');
              puVar43 = (uint *)((uint)puVar43 | uVar1);
code_r0x00402bd1:
              uVar15 = *puVar41;
              uVar20 = *puVar41;
              *puVar41 = (uint)((byte *)(uVar20 + (int)puVar40) + bVar54);
              bVar38 = POPCOUNT(*puVar41 & 0xff);
              uVar51 = uStack_c;
              if ((SCARRY4(uVar15,(int)puVar40) !=
                  SCARRY4((int)(uVar20 + (int)puVar40),(uint)bVar54)) == (int)*puVar41 < 0)
              goto code_r0x00402b7a;
              cVar6 = (char)pcVar16;
              *pcVar16 = *pcVar16 + cVar6;
              pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar16 = *pcVar16 + (char)pcVar16;
                pcVar16 = (char *)(CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x12') |
                                  *puVar43);
                *(byte *)puVar49 = (byte)*puVar49 - (char)puVar40;
                *pcVar16 = *pcVar16 + (char)pcVar16;
                puVar43 = (uint *)((int)puVar43 - *puVar12);
                bVar38 = (byte)puVar41 | (byte)((uint)puVar40 >> 8);
                cVar6 = *pcVar16;
                uVar27 = (undefined3)((uint)pcVar16 >> 8);
                pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                *pcVar16 = *pcVar16 + cVar6;
                pcVar10 = (char *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                           CONCAT11((char)((uint)puVar41 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),
                                                                       bVar38) + -0x5b),bVar38));
                *pcVar16 = *pcVar16 + cVar6;
                bVar54 = false;
                pcVar16 = (char *)(CONCAT31(uVar27,cVar6 + '\x13') | *puVar43);
                do {
                  bVar7 = (byte)puVar40;
                  bVar38 = bVar7 + (byte)puVar12[(int)puVar49 * 2];
                  puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar38 + bVar54);
                  uVar15 = (uint)(CARRY1(bVar7,(byte)puVar12[(int)puVar49 * 2]) ||
                                 CARRY1(bVar38,bVar54));
                  pcVar24 = pcVar16 + 0x1b000019 + uVar15;
                  piVar25 = (int *)((int)puVar49 * 2 + 0x40000a5);
                  *piVar25 = (int)((int)puVar40 +
                                  (uint)((char *)0xe4ffffe6 < pcVar16 ||
                                        CARRY4((uint)(pcVar16 + 0x1b000019),uVar15)) + *piVar25);
                  puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 + cRam00009d7d
                                            );
                  uVar27 = (undefined3)((uint)pcVar24 >> 8);
                  bVar38 = (char)pcVar24 + 0x12;
                  bVar55 = 9 < (bVar38 & 0xf) | bVar55;
                  uVar15 = CONCAT31(uVar27,bVar38 + bVar55 * -6) & 0xffffff0f;
                  pcVar16 = (char *)CONCAT22((short)(uVar15 >> 0x10),
                                             CONCAT11((char)((uint)pcVar24 >> 8) - bVar55,
                                                      (char)uVar15));
                  pbVar14 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar27,bVar38));
                  while( true ) {
                    *pcVar16 = *pcVar16 + (char)pcVar16;
                    puVar47 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                               (byte)puVar43 | (byte)*puVar43);
                    puVar49 = (uint *)((uint)puVar49 | (uint)puVar12);
                    uVar15 = (uint)pcVar10 | (uint)puVar12;
                    unaff_EBP = pbVar14 + 1;
                    uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar50);
                    cVar45 = (char)(pcVar16 + 0x1b000019);
                    uVar27 = (undefined3)((uint)(pcVar16 + 0x1b000019) >> 8);
                    cVar6 = cVar45 + -0x13;
                    pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                    uVar36 = (undefined2)(uVar15 >> 0x10);
                    cVar8 = (char)(uVar15 >> 8) + *(char *)(uVar15 - 0x5e);
                    puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(cVar8,(byte)uVar15));
                    *pcVar16 = *pcVar16 + cVar6;
                    pcVar16 = (char *)(CONCAT31(uVar27,cVar45 + '\x19') | *puVar47);
                    bVar38 = (byte)pcVar16;
                    if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0) {
                      pbVar14 = (byte *)((int)puVar47 + (int)pcVar16);
                      bVar54 = CARRY1(*pbVar14,bVar38);
                      *pbVar14 = *pbVar14 + bVar38;
                      puVar43 = puVar47;
                      goto code_r0x00402bd1;
                    }
                    *pcVar16 = *pcVar16 + bVar38;
                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                    pcVar10 = (char *)CONCAT31(uVar27,bVar38 + 0x6f);
                    puVar43 = (uint *)((int)puVar47 + 1);
                    *pcVar10 = *pcVar10 + bVar38 + 0x6f;
                    bVar7 = (byte)uVar15 | (byte)((uint)pcVar16 >> 8);
                    pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x5c);
                    cVar8 = cVar8 + *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),bVar7) + -0x5f);
                    puVar41 = (uint *)CONCAT22(uVar36,CONCAT11(cVar8,bVar7));
                    *pcVar16 = *pcVar16 + bVar38 + 0x5c;
                    pcVar16 = (char *)(CONCAT31(uVar27,bVar38 + 0x88) | *puVar43);
                    if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0) {
                      *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)puVar40 >> 8);
                      uStackY_38 = (uint *)((uint)uStackY_38._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar16 = *pcVar16 + (char)pcVar16;
                    uVar27 = (undefined3)((uint)pcVar16 >> 8);
                    cVar6 = (char)pcVar16 + 'o';
                    puVar43 = (uint *)((int)puVar47 + 2);
                    *(char *)CONCAT31(uVar27,cVar6) = *(char *)CONCAT31(uVar27,cVar6) + cVar6;
                    pcVar10 = (char *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               bVar7 | (byte)((uint)pcVar16 >> 8));
                    pcVar16 = (char *)(CONCAT31(uVar27,cVar6) | 2);
                    pbVar14[-0x62] = pbVar14[-0x62] + 1;
                    bVar38 = (byte)pcVar16;
                    *pcVar16 = *pcVar16 + bVar38;
                    bVar54 = 0xfd < bVar38;
                    cVar6 = bVar38 + 2;
                    pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                    uVar52 = uVar50;
                    if (SCARRY1(bVar38,'\x02') != cVar6 < '\0') break;
                    *pcVar16 = *pcVar16 + cVar6;
                    bVar7 = bVar38 + 10;
                    pcVar16 = (char *)CONCAT31(uVar27,bVar7);
                    *pcVar16 = *pcVar16 - cVar8;
                    cVar45 = (char)puVar40;
                    *(byte *)puVar43 = *(byte *)puVar43 + cVar45;
                    pbVar14[-0x62] = pbVar14[-0x62] + 1;
                    *pcVar16 = *pcVar16 + bVar7;
                    cVar6 = bVar38 + 0xc;
                    pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                    if (SCARRY1(bVar7,'\x02') == cVar6 < '\0') {
                      *pcVar16 = *pcVar16 + cVar6;
                      *(byte *)puVar40 = (byte)*puVar40 - cVar8;
                      *(byte *)puVar43 = *(byte *)puVar43 + cVar45;
                      cVar6 = (bVar38 + 0x13) - (byte)puVar40[0x13];
                      pcVar16 = (char *)CONCAT31(uVar27,cVar6);
                      *pcVar16 = *pcVar16 + cVar6;
                      pcVar24 = (char *)CONCAT31(uVar27,cVar6 + *pcVar16);
                      *pcVar24 = *pcVar24 + cVar6 + *pcVar16;
                      pcVar24 = pcVar24 + *puVar40;
                      *pcVar24 = *pcVar24 + (char)pcVar24;
                      LOCK();
                      pcVar16 = *(char **)pcVar24;
                      *(char **)pcVar24 = pcVar24;
                      UNLOCK();
                      *pcVar16 = *pcVar16 + (char)pcVar16;
                      pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)*puVar40);
                      *pbVar13 = *pbVar13 + (byte)*puVar40;
                      goto code_r0x00402c8d;
                    }
                    puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                               cVar45 + *pcVar10 + (0xfd < bVar7));
                    *(byte *)puVar49 = (byte)*puVar49 - cVar8;
                    pbVar14 = unaff_EBP;
                  }
                } while( true );
              }
              puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                         CONCAT11((char)((uint)puVar41 >> 8) +
                                                  *(byte *)((int)puVar41 + -99),(char)puVar41));
              puVar47 = puVar12;
            }
            *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
            puVar43 = (uint *)((int)puVar43 - *puVar47);
            puVar12 = puVar47;
            uVar51 = uVar50;
            uVar50 = uVar4;
          }
          *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
          pcVar16 = pcVar16 + -0x7d160243;
        }
        pcVar16 = (char *)CONCAT31(uVar27,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar40;
    uVar15 = *puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
    *puVar49 = (uint)((int)puVar43 + (uint)CARRY1((byte)uVar15,(byte)puVar22) + *puVar49);
    puVar48 = puVar12;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar9 = (char)puVar40;
      cVar35 = (char)((uint)puVar40 >> 8) + (char)((uint)pbVar13 >> 8);
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(cVar35,cVar9));
      cVar6 = (char)pbVar13;
      *pbVar13 = *pbVar13 + cVar6;
      pcVar16 = (char *)((int)pbVar13 * 2 + 0x1a10000);
      cVar8 = (char)((uint)pcVar10 >> 8);
      *pcVar16 = *pcVar16 + cVar8;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
      pbVar13[-0x47ffffff] = pbVar13[-0x47ffffff] + cVar8;
      *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar7 = (byte)puVar43;
      *(byte *)puVar49 = (byte)*puVar49 + bVar7;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + bVar7;
      *pbVar13 = *pbVar13 + cVar6;
      *puVar12 = (uint)(*puVar12 + (int)puVar12);
      uVar36 = (undefined2)((uint)pcVar10 >> 0x10);
      cVar8 = cVar8 + (byte)puVar12[(int)pcVar10];
      pcVar16 = (char *)CONCAT22(uVar36,CONCAT11(cVar8,(char)pcVar10));
      pcVar16[(int)pbVar13] = pcVar16[(int)pbVar13] + cVar6;
      *(byte *)puVar43 = *(byte *)puVar43 - cVar8;
      *(byte *)puVar43 = *(byte *)puVar43 + cVar9;
      uVar27 = (undefined3)((uint)pbVar13 >> 8);
      bVar38 = cVar6 - *pbVar13;
      *pcVar16 = *pcVar16 + bVar7;
      *(byte *)puVar43 = *(byte *)puVar43 ^ bVar38;
      *(byte *)puVar43 = *(byte *)puVar43 + bVar38;
      *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
      uVar15 = *puVar40;
      *(byte *)puVar40 = (byte)*puVar40 + bVar7;
      cVar45 = bVar38 + *(char *)CONCAT31(uVar27,bVar38) + CARRY1((byte)uVar15,bVar7);
      pcVar10 = (char *)CONCAT22(uVar36,CONCAT11(cVar8 + pbVar14[-0x60],(char)pcVar10));
      *(char *)CONCAT31(uVar27,cVar45) = *(char *)CONCAT31(uVar27,cVar45) + cVar45;
      cVar8 = cVar45 + '\x12';
      pbVar13 = (byte *)CONCAT31(uVar27,cVar8);
      cVar6 = *pcVar10;
      *pcVar10 = *pcVar10 + cVar8;
      if (SCARRY1(cVar6,cVar8) != *pcVar10 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar13;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
      *(byte *)puVar43 = *(byte *)puVar43 + cVar6;
      *pbVar13 = *pbVar13 + cVar6;
    }
    *pbVar13 = *pbVar13 + cVar8;
    pbVar13 = (byte *)CONCAT31(uVar27,cVar45 + '$');
    *pbVar13 = *pbVar13 + cVar35;
    bVar38 = *(byte *)puVar43;
    *(byte *)puVar43 = *(byte *)puVar43 + cVar9;
    uVar51 = uVar50;
    uVar52 = uVar53;
  } while (SCARRY1(bVar38,cVar9) == (char)*(byte *)puVar43 < '\0');
  do {
    cVar6 = (char)pbVar13;
    *pbVar13 = *pbVar13 + cVar6;
    uVar27 = (undefined3)((uint)pbVar13 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar43;
    bVar7 = cVar6 + 0x24;
    cVar8 = (char)((uint)pcVar10 >> 8);
    pcVar10[-0x62] = pcVar10[-0x62] + cVar8;
    *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
    bVar38 = cVar6 + 0x2fU + (byte)*puVar40;
    cVar45 = bVar38 + (0xf4 < bVar7);
    cVar6 = cVar45 + *(char *)CONCAT31(uVar27,cVar45) +
            (CARRY1(cVar6 + 0x2fU,(byte)*puVar40) || CARRY1(bVar38,0xf4 < bVar7));
    pcVar16 = (char *)CONCAT31(uVar27,cVar6);
    *pcVar16 = *pcVar16 - (char)puVar43;
    *pcVar16 = *pcVar16 + cVar6;
    pcVar24 = (char *)((int)puVar43 - *puVar43);
    *(byte *)(puVar12 + (int)pcVar10) = (byte)puVar12[(int)pcVar10] + cVar8;
    pcVar16[(int)unaff_EBP] = pcVar16[(int)unaff_EBP] + cVar6;
    *pcVar24 = *pcVar24 + (char)puVar40;
    pcVar16 = (char *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                               CONCAT11((char)((uint)pbVar13 >> 8) - *pcVar24,cVar6));
    uVar15 = *puVar49;
    *pcVar16 = *pcVar16 - (char)((uint)pcVar24 >> 8);
    *pcVar16 = *pcVar16 + cVar6;
    uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar51);
    pbVar14 = (byte *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                               CONCAT11(cVar8 - (byte)*puVar12,(char)pcVar10));
    unaff_EBP = unaff_EBP + *(int *)(pbVar14 + (int)puVar40);
    puVar47 = (uint *)CONCAT31((int3)((uint)pcVar24 >> 8),(char)pcVar24 + (byte)uVar15);
    while( true ) {
      puVar43 = puVar47;
      uVar36 = (undefined2)((uint)pbVar14 >> 0x10);
      bVar33 = (char)((uint)pbVar14 >> 8) + pbVar14[0x18];
      *pcVar16 = *pcVar16 + (char)pcVar16;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + 'o');
      cVar6 = (char)puVar40;
      *(byte *)puVar43 = (byte)*puVar43 + cVar6;
      uVar15 = *puVar12;
      bVar55 = (byte)((uint)puVar40 >> 8);
      bVar38 = *pbVar13;
      pbVar13 = pbVar13 + (uint)CARRY1(bVar55,*pbVar13) + *(int *)pbVar13;
      *(byte *)puVar43 = (byte)*puVar43 + cVar6;
      cVar45 = ((char)pbVar14 - (byte)uVar15) - (byte)*puVar12;
      bVar7 = *(byte *)((int)puVar49 + 0x1a);
      *pbVar13 = *pbVar13 + (char)pbVar13;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11(bVar55 + bVar38 + bVar7 | (byte)*puVar43,cVar6));
      pbVar13 = pbVar13 + *puVar43;
      if ((POPCOUNT((uint)pbVar13 & 0xff) & 1U) != 0) break;
      *pbVar13 = *pbVar13 + (char)pbVar13;
      bVar38 = (char)pbVar13 + 0x6f;
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar38);
      pcVar10 = (char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar33,(char)pbVar14)) >> 8),
                                  cVar45) + -1);
      *pcVar16 = *pcVar16 + bVar38;
      *pcVar16 = *pcVar16 + bVar38;
      *pcVar10 = *pcVar10 + (byte)puVar43;
      *(byte *)((int)pcVar16 * 2) = *(byte *)((int)pcVar16 * 2) ^ bVar38;
      uVar3 = *(undefined6 *)pcVar16;
      uVar51 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar16 = (char *)uVar3;
      *pcVar16 = *pcVar16 + (char)uVar3;
      *(byte *)puVar12 = (byte)*puVar12 + (char)uVar3;
      pcVar16 = (char *)((uint)pcVar16 | 0x73110008);
      bVar33 = (byte)((uint)pcVar10 >> 8);
      *(byte *)puVar49 = (byte)*puVar49 - bVar33;
      *(byte *)puVar43 = (byte)*puVar43 + cVar6;
      puVar47 = puVar12 + (uint)bVar57 * -2 + 1;
      out(*puVar12,(short)puVar43);
      *pcVar16 = *pcVar16;
      cVar6 = (char)pcVar16;
      *pcVar16 = *pcVar16 + cVar6;
      bVar38 = unaff_EBP[-0x5a];
      uVar36 = (undefined2)((uint)pcVar10 >> 0x10);
      cVar45 = (char)pcVar10;
      *pcVar16 = *pcVar16 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar15 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      puVar40 = (uint *)(uVar15 | 0x73110000);
      puVar12 = puVar47 + (uint)bVar57 * -2 + 1;
      out(*puVar47,(short)puVar43);
      *(byte *)puVar40 = (byte)*puVar40;
      bVar55 = (byte)puVar43 | (byte)*puVar49;
      puVar47 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar55);
      *(byte *)puVar40 = (byte)*puVar40 + cVar6;
      pcVar16 = (char *)(uVar15 | 0x7b1f1609);
      bVar57 = (uVar52 & 0x400) != 0;
      *(uint *)((int)puVar49 + -0x7d) = *(uint *)((int)puVar49 + -0x7d) | (uint)unaff_EBP;
      bVar7 = (byte)pcVar16;
      *pcVar16 = *pcVar16 + bVar7;
      bVar33 = bVar33 | bVar38 | *(byte *)((int)puVar12 + 0x19);
      pbVar14 = (byte *)CONCAT22(uVar36,CONCAT11(bVar33,cVar45));
      *pcVar16 = *pcVar16 + bVar7;
      uVar27 = (undefined3)((uint)pcVar16 >> 8);
      puVar12[(int)puVar49 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar12[(int)puVar49 * 2]);
      bVar38 = bVar7 + 0x2d ^ *(byte *)CONCAT31(uVar27,bVar7 + 0x2d);
      pcVar16 = (char *)CONCAT31(uVar27,bVar38);
      uVar15 = *puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + bVar38;
      uVar52 = uVar51;
      if (CARRY1((byte)uVar15,bVar38)) {
        *pcVar16 = *pcVar16 + bVar38;
        bVar38 = bVar38 | pcVar16[0x4000019];
        pcVar16 = (char *)CONCAT31(uVar27,bVar38);
        if ('\0' < (char)bVar38) {
          *pcVar16 = *pcVar16 + bVar38;
          piVar25 = (int *)CONCAT31(uVar27,bVar38 + 0x28);
          *piVar25 = (int)piVar25 + (uint)(0xd7 < bVar38) + *piVar25;
          bVar46 = (byte)((uint6)uVar3 >> 8);
          *pbVar14 = *pbVar14 + bVar46;
          uVar37 = CONCAT11((byte)((uint)puVar43 >> 8) | bVar33,bVar55);
          puVar47 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),uVar37);
          uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar51);
          bVar55 = in(uVar37);
          pbVar13 = (byte *)CONCAT31(uVar27,bVar55);
          bVar38 = *pbVar13;
          bVar54 = SCARRY1(*pbVar13,bVar55);
          *pbVar13 = *pbVar13 + bVar55;
          bVar7 = *pbVar13;
          puVar41 = puVar12;
          uStack_c = uVar51;
          if (!CARRY1(bVar38,bVar55)) goto code_r0x00402e19;
          *pbVar13 = *pbVar13 + bVar55;
          bVar46 = bVar46 | *pbVar13;
          puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar46,cVar6));
          pcVar16 = (char *)CONCAT31(uVar27,bVar55 + *pbVar13);
          *pbVar14 = *pbVar14 + bVar46;
        }
        uVar27 = (undefined3)((uint)pcVar16 >> 8);
        bVar7 = (byte)pcVar16 | (byte)*puVar47;
        pbVar13 = (byte *)CONCAT31(uVar27,bVar7);
        puVar41 = puVar12 + (uint)bVar57 * -2 + 1;
        out(*puVar12,(short)puVar47);
        LOCK();
        bVar38 = *pbVar13;
        *pbVar13 = bVar7;
        UNLOCK();
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
        piVar25 = (int *)(CONCAT31(uVar27,bVar38) + -0x1b7e07);
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
        iVar17 = (int)puVar40 - *(int *)pbVar14;
        bVar38 = *(byte *)((int)puVar49 + -0x7a);
        uVar37 = (undefined2)((uint)iVar17 >> 0x10);
        *(char *)piVar25 = *(char *)piVar25 + (char)piVar25;
        bVar7 = (char)((uint)iVar17 >> 8) + bVar38 | *(byte *)((int)puVar49 + 0x17);
        *(char *)piVar25 = *(char *)piVar25 + (char)piVar25;
        uVar27 = (undefined3)(CONCAT22(uVar37,CONCAT11(bVar7,(byte)iVar17)) >> 8);
        bVar38 = (byte)iVar17 | *pbVar14;
        puVar40 = (uint *)CONCAT31(uVar27,bVar38);
        pbVar13 = (byte *)((int)piVar25 + *piVar25);
        puVar12 = puVar41;
        if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402e0a;
        *(byte *)puVar40 = (byte)*puVar40 + bVar38;
        *(byte **)pbVar14 = (byte *)(*(int *)pbVar14 + (int)puVar47);
        piVar25 = (int *)CONCAT31(uVar27,bVar38 + 0x27);
        puVar40 = (uint *)CONCAT22(uVar37,CONCAT11(bVar7 + *(byte *)((int)puVar49 + -0x79),bVar38));
        *(byte *)piVar25 = (char)*piVar25 + bVar38 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar10 = (char *)CONCAT22(uVar36,CONCAT11(bVar33 | unaff_EBP[-0x62],cVar45));
  } while( true );
code_r0x00402dff:
  pbVar13 = (byte *)CONCAT22((short)((uint)piVar25 >> 0x10),
                             CONCAT11((byte)((uint)piVar25 >> 8) |
                                      *(byte *)((int)puVar47 + 0x2170411),(byte)piVar25));
  puVar12 = puVar41 + (uint)bVar57 * -2 + 1;
  out(*puVar41,(short)puVar47);
  *pbVar13 = (byte)piVar25;
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar13;
  *pbVar13 = *pbVar13 - cVar45;
  *pbVar13 = *pbVar13 + (char)pbVar13;
  bVar54 = false;
  bVar7 = (byte)((uint)puVar40 >> 8) | bRam052b0603;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar7,(char)puVar40));
  puVar41 = puVar12;
code_r0x00402e19:
  if (bVar7 == 0 || bVar54 != (char)bVar7 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar13;
  *pbVar13 = *pbVar13 + cRam89280411;
  piVar25 = (int *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                            CONCAT11((byte)((uint)pbVar13 >> 8) |
                                     *(byte *)((int)puVar47 + 0x7190411),cRam89280411));
  *(char *)piVar25 = (char)*piVar25 + cRam89280411;
  cVar6 = (char)puVar40;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | (byte)*puVar47,cVar6));
  puVar41 = (uint *)((int)puVar41 + *piVar25);
  pbVar13 = (byte *)((int)piVar25 + *piVar25);
  bVar7 = (byte)pbVar13;
  *pbVar13 = *pbVar13 + bVar7;
  *(byte *)puVar41 = (byte)*puVar41 + cVar6;
  bVar38 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar7;
  *(byte **)pbVar13 = unaff_EBP + (uint)CARRY1(bVar38,bVar7) + *(int *)pbVar13;
  piVar25 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),*pbVar13);
  *(byte *)puVar47 = (byte)*puVar47 + cVar6;
  puVar12 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(byte)puVar47 | (byte)*puVar47);
  pbVar13 = (byte *)((int)puVar12 + -0x43);
  *pbVar13 = *pbVar13 + (char)((uint)puVar47 >> 8);
  puVar47 = puVar12;
  puVar12 = puVar49;
  uVar52 = uVar50;
code_r0x00402e42:
  uVar50 = uStack_c;
  puVar49 = puVar12;
  uStack_c = uVar50;
  if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402e6e;
  iVar17 = *(int *)((int)piVar25 + *piVar25);
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
  piVar25 = (int *)(iVar17 + -0x8c6f);
  puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                             CONCAT11((byte)((uint)puVar47 >> 8) | *(byte *)((int)puVar47 + -0x3f),
                                      (char)puVar47));
  pbVar31 = (byte *)((int)piVar25 + *piVar25);
  pbVar13 = pbVar31;
  puVar49 = uStackY_38;
  if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar31 = *pbVar31 + (char)pbVar31;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | (byte)*puVar47,(char)puVar40));
  puVar12 = puVar41 + (uint)bVar57 * -2 + 1;
  out(*puVar41,(short)puVar47);
  puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 + (byte)*puVar49);
  puVar41 = puVar12 + (uint)bVar57 * -2 + 1;
  out(*puVar12,(short)puVar47);
  uVar52 = uVar50;
  uStack_c = uVar51;
code_r0x00402e6e:
  uVar50 = uVar52;
  uVar27 = (undefined3)((uint)puVar47 >> 8);
  cVar6 = (char)puVar47 + (byte)*puVar49;
  puVar12 = puVar41 + (uint)bVar57 * -2 + 1;
  out(*puVar41,(short)CONCAT31(uVar27,cVar6));
  puVar47 = (uint *)CONCAT31(uVar27,cVar6 + (byte)*puVar49);
  puVar41 = puVar12 + (uint)bVar57 * -2 + 1;
  out(*puVar12,(short)puVar47);
  pbVar13 = (byte *)0x0;
  puVar12 = puVar49;
code_r0x00402e81:
  puVar49 = puVar12;
  bVar7 = (char)pbVar13 - *pbVar13;
  iVar17 = CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
  *pbVar14 = *pbVar14 + (char)puVar47;
  pbVar31 = (byte *)(iVar17 * 2);
  *pbVar31 = *pbVar31 ^ bVar7;
  pbVar31 = (byte *)(int)(short)iVar17;
  *pbVar31 = *pbVar31 + bVar7;
  *(byte *)puVar49 = (byte)*puVar49 + (byte)puVar40;
  bVar38 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar7;
  *(byte **)(pbVar14 + -0x73) =
       (byte *)((int)puVar41 + (uint)CARRY1(bVar38,bVar7) + *(int *)(pbVar14 + -0x73));
  *pbVar31 = *pbVar31 + bVar7;
  bVar38 = (byte)puVar40 | (byte)*puVar47;
  puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar38);
  puVar12 = puVar41;
  if ((char)bVar38 < '\x01') goto code_r0x00402eb4;
  *pbVar31 = *pbVar31 + bVar7;
  pbVar13 = (byte *)CONCAT31((int3)(char)((uint)pbVar13 >> 8),bVar7 + 0x2d);
  puVar41[(int)puVar49 * 2] =
       (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar41[(int)puVar49 * 2]);
  pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
  do {
    uVar15 = *puVar41;
    bVar38 = (byte)pbVar13;
    *(byte *)puVar41 = (byte)*puVar41 + bVar38;
    if (!CARRY1((byte)uVar15,bVar38)) break;
    *pbVar13 = *pbVar13 + bVar38;
    bVar38 = bVar38 | pbVar13[0x400001a];
    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar38);
    if ((char)bVar38 < '\x01') {
code_r0x00402ecc:
      *pbVar31 = *pbVar31 + (byte)pbVar31;
      uVar27 = (undefined3)((uint)pbVar31 >> 8);
      bVar38 = (byte)pbVar31 | pbVar31[0x400001b];
      pcVar16 = (char *)CONCAT31(uVar27,bVar38);
      if ((char)bVar38 < '\x01') {
        uVar15 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar40;
        *(char *)((int)pcVar16 * 2) =
             *(char *)((int)pcVar16 * 2) - CARRY1((byte)uVar15,(byte)puVar40);
        bVar54 = 0x81 < bVar38;
        bVar38 = bVar38 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar31 = *pbVar31 + bVar38;
      puVar12 = puVar41;
code_r0x00402eb4:
      uVar27 = (undefined3)((uint)pbVar31 >> 8);
      bVar38 = (char)pbVar31 + 0x6f;
      pcVar16 = (char *)CONCAT31(uVar27,bVar38);
      *(byte **)pcVar16 = pbStackY_54;
      uVar15 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
      pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
      uVar53 = uVar51;
      if ((byte)*puVar47 != 0 && SCARRY1((byte)uVar15,(char)puVar40) == (char)(byte)*puVar47 < '\0')
      {
        *pcVar16 = *pcVar16 + bVar38;
        bVar7 = (char)pbVar31 + 0x9c;
        pbVar31 = (byte *)CONCAT31(uVar27,bVar7);
        puVar12[(int)puVar49 * 2] =
             (uint)((int)puVar47 + (uint)(0xd2 < bVar38) + puVar12[(int)puVar49 * 2]);
        pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
        uVar15 = *puVar12;
        *(byte *)puVar12 = (byte)*puVar12 + bVar7;
        puVar41 = puVar12;
        if (CARRY1((byte)uVar15,bVar7)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar41 = puVar12 + (uint)bVar57 * -2 + 1;
      out(*puVar12,(short)puVar47);
    }
    cVar6 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar6;
    uVar27 = (undefined3)((uint)pcVar16 >> 8);
    bVar38 = cVar6 + 0x6f;
    pcVar16 = (char *)CONCAT31(uVar27,bVar38);
    *(byte **)pcVar16 = pbStackY_54;
    uVar15 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar40;
    pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
    *(byte *)(puVar41 + 7) = ((byte)puVar41[7] - bVar33) - CARRY1((byte)uVar15,(byte)puVar40);
    *pcVar16 = *pcVar16 + bVar38;
    bVar7 = cVar6 + 0x9c;
    pcVar16 = (char *)CONCAT31(uVar27,bVar7);
    puVar41[(int)puVar49 * 2] =
         (uint)((int)puVar47 + (uint)(0xd2 < bVar38) + puVar41[(int)puVar49 * 2]);
    uVar15 = *puVar41;
    *(byte *)puVar41 = (byte)*puVar41 + bVar7;
    if (!CARRY1((byte)uVar15,bVar7)) goto code_r0x00402e7e;
    *pcVar16 = *pcVar16 + bVar7;
    bVar7 = bVar7 | pcVar16[0x400001c];
    pbVar13 = (byte *)CONCAT31(uVar27,bVar7);
    uStack_c = uVar51;
    if ((char)bVar7 < '\x01') goto code_r0x00402f16;
    *pbVar13 = *pbVar13 + bVar7;
    pcVar16 = (char *)CONCAT31(uVar27,bVar7 + 0x6f);
    while( true ) {
      *(byte **)pcVar16 = pbStackY_54;
      uVar15 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar40;
      *(uint *)((int)puVar41 + 0x1d) =
           (*(int *)((int)puVar41 + 0x1d) - (int)puVar49) - (uint)CARRY1((byte)uVar15,(byte)puVar40)
      ;
      bVar38 = (byte)pcVar16;
      *pcVar16 = *pcVar16 + bVar38;
      bVar7 = bVar38 + 0x2d;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar7);
      puVar41[(int)puVar49 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar38) + puVar41[(int)puVar49 * 2]);
      pbStackY_54 = (byte *)CONCAT22((short)((uint)pbStackY_54 >> 0x10),uVar51);
      uVar15 = *puVar41;
      *(byte *)puVar41 = (byte)*puVar41 + bVar7;
      if (!CARRY1((byte)uVar15,bVar7)) break;
      *pbVar13 = *pbVar13 + bVar7;
code_r0x00402f16:
      bVar38 = (byte)pbVar13 | pbVar13[0x400001d];
      puVar12 = (uint *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar38);
      pbVar13 = unaff_EBP;
      if ((char)bVar38 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar13;
        *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
        uVar27 = (undefined3)((uint)puVar12 >> 8);
        cVar6 = (char)puVar12 + 'o';
        puVar43 = (uint *)CONCAT31(uVar27,cVar6);
        *puVar43 = (uint)pbStackY_54;
        cVar8 = (char)puVar40;
        *(byte *)puVar47 = (byte)*puVar47 + cVar8;
        pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
        bVar38 = (byte)((uint)puVar47 >> 8);
        bVar54 = bVar38 < (byte)*puVar41;
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                   CONCAT11(bVar38 - (byte)*puVar41,(char)puVar47));
        if (bVar54) break;
        bVar54 = CARRY4((uint)puVar43,*puVar43);
        puVar12 = (uint *)((int)puVar43 + *puVar43);
        if (!SCARRY4((int)puVar43,*puVar43)) {
          bVar54 = CARRY4((uint)unaff_EBP,*puVar12);
          unaff_EBP = unaff_EBP + *puVar12;
        }
        *puVar12 = (*puVar12 - (int)puVar12) - (uint)bVar54;
        *(byte *)puVar47 = (byte)*puVar47 + cVar8;
        puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                   CONCAT11((char)((uint)puVar40 >> 8) + (byte)*puVar47,
                                            cVar8 - (byte)*puVar47));
        *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x00402f3b:
        cVar8 = (char)puVar47;
        *pbVar14 = *pbVar14 + cVar8;
        bVar38 = (byte)puVar12;
        *(byte *)((int)puVar12 * 2) = *(byte *)((int)puVar12 * 2) ^ bVar38;
        *(byte *)puVar12 = (byte)*puVar12 + bVar38;
        *(byte *)puVar12 = (byte)*puVar12 + cVar8;
        uVar15 = *puVar12;
        *(byte *)puVar12 = (byte)*puVar12 + bVar38;
        *puVar47 = (uint)((int)puVar12 + (uint)CARRY1((byte)uVar15,bVar38) + *puVar47);
        pcVar16 = (char *)((uint)puVar12 | *puVar49);
        uVar27 = (undefined3)((uint)pcVar16 >> 8);
        cVar6 = (char)pcVar16 + *pcVar16;
        pcVar16 = (char *)CONCAT31(uVar27,cVar6);
        *pcVar16 = *pcVar16 + cVar6;
        cVar6 = cVar6 + *pcVar16;
        piVar25 = (int *)CONCAT31(uVar27,cVar6);
        *(char *)piVar25 = (char)*piVar25 + cVar6;
        iVar17 = LocalDescriptorTableRegister();
        *piVar25 = iVar17;
        bVar38 = *pbVar14;
        bVar34 = (byte)((uint)puVar40 >> 8);
        *pbVar14 = *pbVar14 + bVar34;
        iVar17 = *piVar25;
        uVar37 = (undefined2)((uint)puVar40 >> 0x10);
        bVar46 = (byte)puVar40;
        *(byte *)puVar41 = (byte)*puVar41 + cVar6;
        puVar12 = puVar41 + (uint)bVar57 * -2 + 1;
        out(*puVar41,(short)puVar47);
        *(byte *)puVar12 = (byte)*puVar12 + cVar6;
        bVar7 = *pbVar14;
        *(byte *)puVar47 = (byte)*puVar47 - bVar33;
        *(byte *)puVar12 = (byte)*puVar12 + cVar6;
        puVar43 = puVar12 + (uint)bVar57 * -2 + 1;
        out(*puVar12,(short)puVar47);
        *(byte *)puVar43 = (byte)*puVar43 + cVar6;
        bVar55 = *pbVar14;
        *(uint *)((int)puVar47 + -0x23) = *(uint *)((int)puVar47 + -0x23) & (uint)puVar43;
        puVar26 = (ushort *)((int)piVar25 + *piVar25);
        if (!SCARRY4((int)piVar25,*piVar25)) {
          *puVar26 = uVar53;
        }
        *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
        uVar39 = CONCAT11((char)((uint)puVar47 >> 8) + *(byte *)((int)puVar47 + -0x15),cVar8);
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),uVar39);
        puVar12 = (uint *)((int)puVar26 + *(int *)puVar26);
        if (!SCARRY4((int)puVar26,*(int *)puVar26)) {
          *(ushort *)puVar12 = uVar53;
        }
        cVar6 = (char)puVar12;
        *(byte *)puVar12 = (byte)*puVar12 + cVar6;
        cVar9 = ((bVar34 - (char)iVar17) - CARRY1(bVar38,bVar34) | bVar7 | bVar55) + (byte)*puVar12;
        puVar40 = (uint *)CONCAT22(uVar37,CONCAT11(cVar9,bVar46));
        uVar15 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + bVar46;
        if (CARRY1((byte)uVar15,bVar46)) {
          *(byte *)puVar12 = (byte)*puVar12 + cVar6;
          bVar38 = *(byte *)((int)puVar47 + 6);
          *(byte *)puVar47 = (byte)*puVar47 + bVar46;
          bVar7 = (cVar9 - (byte)*puVar43) + cRam14730307;
          *(byte *)puVar12 = (byte)*puVar12 + cVar6;
          bVar38 = bVar33 | bVar38 | *(byte *)((int)puVar47 + 0x2a);
          uVar15 = *puVar12;
          pbVar14 = (byte *)((int)puVar12 + (uint)CARRY1(bVar7,(byte)*puVar12) + *puVar12);
          *(byte *)puVar47 = (byte)*puVar47 + bVar46;
          cVar6 = cVar45 - (byte)*puVar43;
          cVar45 = bVar38 + *(char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar38,cVar45)) >> 8)
                                               ,cVar6) + 0x1e);
          *pbVar14 = *pbVar14 + (char)pbVar14;
          uVar27 = (undefined3)((uint)pbVar14 >> 8);
          bVar38 = (char)pbVar14 + 0x2aU & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
          pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x2a);
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar45,cVar6)) + 0x1f);
          *pcVar16 = *pcVar16 + bVar38 + 0x2a;
          bVar38 = bVar38 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
          pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x2a);
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar45,cVar6)) + 0x20);
          *pcVar16 = *pcVar16 + bVar38 + 0x2a;
          bVar38 = bVar38 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
          pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x2a);
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar45,cVar6)) + 0x21);
          *pcVar16 = *pcVar16 + bVar38 + 0x2a;
          bVar38 = bVar38 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
          pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x2a);
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar45,cVar6)) + 0x22);
          *pcVar16 = *pcVar16 + bVar38 + 0x2a;
          bVar38 = bVar38 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
          pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x2a);
          bVar7 = bVar7 + (byte)uVar15 + *pcVar16;
          uVar32 = CONCAT22(uVar37,CONCAT11(bVar7,bVar46));
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar45,cVar6)) + 0x25);
          *pcVar16 = *pcVar16 + bVar38 + 0x2a;
          bVar38 = bVar38 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
          pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x2a);
          pcVar10 = (char *)CONCAT22(uVar36,CONCAT11(cVar45 + *(char *)(CONCAT22(uVar36,CONCAT11(
                                                  cVar45,cVar6)) + 0x26),cVar6));
          *pcVar16 = *pcVar16 + bVar38 + 0x2a;
          bVar38 = bVar38 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
          cVar6 = bVar38 + 0x2a;
          pcVar16 = (char *)CONCAT31(uVar27,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar16 = *pcVar16 + cVar6;
            pbVar14 = (byte *)(CONCAT31(uVar27,bVar38 + 0x4f) + -0x33282610);
            bVar38 = *pbVar14;
            bVar55 = (byte)pbVar14;
            *pbVar14 = *pbVar14 + bVar55;
            uVar27 = (undefined3)((uint)pbVar14 >> 8);
            if (!CARRY1(bVar38,bVar55)) {
              if (!SCARRY1(bVar55,'\0')) {
                *pbVar14 = *pbVar14 + bVar55;
                uVar32 = CONCAT22(uVar37,CONCAT11(bVar7 | (byte)*puVar47,bVar46));
                bVar55 = bVar55 & (byte)*puVar47;
                *(char *)CONCAT31(uVar27,bVar55) = *(char *)CONCAT31(uVar27,bVar55) + bVar55;
                pcVar16 = (char *)CONCAT31(uVar27,bVar55 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar16 = (char *)CONCAT31(uVar27,bVar55 + *pcVar10);
              if (SCARRY1(bVar55,*pcVar10) != (char)(bVar55 + *pcVar10) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar38 = bVar55 + *pcVar10;
            pbVar14 = (byte *)CONCAT31(uVar27,bVar38);
            if (SCARRY1(bVar55,*pcVar10) == (char)bVar38 < '\0') {
              pcVar16 = (char *)CONCAT22(uVar37,CONCAT11(bVar7 | (byte)*puVar47,bVar46));
              *pcVar10 = *pcVar10 + cVar8;
              *(byte *)puVar47 = (byte)*puVar47 ^ bVar38;
              *(char *)((int)pbVar14 * 2) = *(char *)((int)pbVar14 * 2) + bVar38;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar16 = *pcVar16 + (char)pcVar16;
            uVar27 = (undefined3)((uint)pcVar16 >> 8);
            bVar38 = (char)pcVar16 + 0x2aU & (byte)*puVar47;
            *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
            pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x2a);
            *pcVar16 = *pcVar16 + bVar38 + 0x2a;
            pcVar16 = (char *)CONCAT31(uVar27,bVar38 + 0x54 & (byte)*puVar47);
code_r0x00403072:
            cVar6 = (char)pcVar16;
            *pcVar16 = *pcVar16 + cVar6;
            uVar27 = (undefined3)((uint)pcVar16 >> 8);
            pcVar16 = (char *)CONCAT31(uVar27,cVar6 + '*');
            *pcVar16 = *pcVar16 + cVar6 + '*';
            bVar38 = cVar6 + 0x54U & (byte)*puVar47;
            *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
            pcStackY_8c = (char *)CONCAT22(pcStackY_8c._2_2_,uVar50);
            uVar32 = CONCAT22((short)((uint)uVar32 >> 0x10),
                              CONCAT11((char)((uint)uVar32 >> 8) +
                                       *(char *)CONCAT31(uVar27,bVar38 + 0x2a),(char)uVar32));
            *(byte *)(puVar43 + 0x828000) = (byte)puVar43[0x828000] - cVar8;
            pcVar16 = pcStackY_8c;
code_r0x0040309a:
            cVar6 = (char)pcVar16;
            *pcVar16 = *pcVar16 + cVar6;
            pcStackY_8c = (char *)CONCAT22(pcStackY_8c._2_2_,uVar51);
            *pcVar16 = *pcVar16 + cVar6;
            pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar6 + 0x2aU & (byte)*puVar47);
          }
          cVar6 = (char)pbVar14;
          *pbVar14 = *pbVar14 + cVar6;
          uVar27 = (undefined3)((uint)pbVar14 >> 8);
          cVar45 = cVar6 + '*';
          pcVar16 = (char *)CONCAT31(uVar27,cVar45);
          *(byte *)(puVar43 + 0x828000) = (byte)puVar43[0x828000] - cVar8;
          *pcVar16 = *pcVar16 + cVar45;
          cVar9 = (char)pcStackY_8c - (byte)*puVar43;
          pcVar10 = (char *)CONCAT22((short)((uint)pcStackY_8c >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_8c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_8c >> 8),
                                                                 cVar9) + 0x34),cVar9));
          *pcVar16 = *pcVar16 + cVar45;
          bVar38 = cVar6 + 0x54U & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar38) = *(char *)CONCAT31(uVar27,bVar38) + bVar38;
          pbVar14 = (byte *)CONCAT31(uVar27,bVar38 + 0x2a);
          bVar38 = (byte)((uint)uVar32 >> 8);
          pcVar16 = (char *)CONCAT22((short)((uint)uVar32 >> 0x10),
                                     CONCAT11(bVar38 + *pbVar14,(char)uVar32));
          pbVar14 = pbVar14 + (uint)CARRY1(bVar38,*pbVar14) + *(int *)pbVar14;
          *(byte *)puVar47 = (byte)*puVar47 + (char)uVar32;
          uVar27 = (undefined3)((uint)pbVar14 >> 8);
          cVar6 = (byte)pbVar14 - *pbVar14;
          piVar25 = (int *)CONCAT31(uVar27,cVar6);
          puVar43 = (uint *)((int)puVar43 + (uint)((byte)pbVar14 < *pbVar14) + *piVar25);
          cVar6 = cVar6 + (char)*piVar25;
          pbVar14 = (byte *)CONCAT31(uVar27,cVar6);
          *pbVar14 = *pbVar14 + cVar6;
code_r0x004030df:
          *pcVar16 = *pcVar16 + cVar8;
          bVar38 = *pbVar14;
          bVar7 = (byte)pbVar14;
          *pbVar14 = *pbVar14 + bVar7;
          *(byte **)(pcVar10 + -0x41) =
               (byte *)((int)puVar43 + (uint)CARRY1(bVar38,bVar7) + *(int *)(pcVar10 + -0x41));
          *pbVar14 = *pbVar14 + bVar7;
          uVar27 = (undefined3)((uint)pbVar14 >> 8);
          bVar7 = bVar7 | (byte)*puVar43;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar16 = (char *)CONCAT31(uVar27,bVar7 + 0x7b);
          *pcVar16 = *pcVar16 + bVar7 + 0x7b;
          pbVar14 = (byte *)((int)puVar43 + CONCAT31(uVar27,bVar7 - 8) + -1);
          *pbVar14 = *pbVar14 + (bVar7 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar41 = puVar43 + (uint)bVar57 * -2 + 1;
        out(*puVar43,uVar39);
        pbVar13 = unaff_EBP + 1;
        pbStackY_54 = unaff_EBP;
      }
      bVar38 = cVar6 - bVar54;
      pbVar13 = (byte *)((int)puVar41 + (int)puVar49 * 2);
      bVar54 = CARRY1(*pbVar13,bVar38);
      *pbVar13 = *pbVar13 + bVar38;
code_r0x00402ef9:
      pcVar16 = (char *)CONCAT31(uVar27,bVar38 - bVar54);
      pbVar13 = (byte *)((int)puVar49 + (int)unaff_EBP * 2);
      *pbVar13 = *pbVar13 + (bVar38 - bVar54);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar40 = (byte)*puVar40 + (char)puVar47;
  puVar12 = puVar47 + 0x2828000;
  bVar38 = (byte)puVar40;
  bVar54 = (byte)*puVar12 < bVar38;
  *(byte *)puVar12 = (byte)*puVar12 - bVar38;
  bVar38 = (byte)pbVar13 + *pbVar13;
  piVar25 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar38 + bVar54);
  puVar12 = puVar49;
  uVar52 = uVar50;
  if (CARRY1((byte)pbVar13,*pbVar13) || CARRY1(bVar38,bVar54)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar16 = *pcVar16 + bVar7;
  uVar52 = uVar50;
  uStack_c = uVar51;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar45) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  pbVar13 = (byte *)CONCAT22(uVar36,CONCAT11(cVar8 + unaff_EBP[(int)pcVar16 * 4],uVar30));
  unaff_EDI[(int)pcVar16] = unaff_EDI[(int)pcVar16] + bVar7;
  goto code_r0x0040254a;
}


