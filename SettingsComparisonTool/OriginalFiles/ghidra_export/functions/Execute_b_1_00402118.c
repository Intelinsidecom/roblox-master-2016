/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402118
 * Raw Name    : <Execute>b__1
 * Demangled   : <Execute>b__1
 * Prototype   : char * <Execute>b__1(char * s, byte * param_2)
 * Local Vars  : iVar10, puVar11, pbVar12, pbVar13, uVar14, pcVar15, iVar16, pbVar17, pbVar18, uVar19, uVar20, puVar21, piVar22, pcVar23, piVar24, puVar25, uVar26, uVar27, iVar28, cVar29, uVar30, pbVar31, extraout_ECX, extraout_ECX_00, extraout_ECX_01, extraout_ECX_02, uVar32, bVar33, cVar34, uVar35, uVar36, bVar37, bVar38, uVar39, puVar40, param_2, puVar41, pbVar42, puVar43, s, uVar44, unaff_EBX, cVar45, bVar46, unaff_EBP, unaff_ESI, puVar47, puVar48, unaff_EDI, puVar49, in_ES, uVar50, uVar51, in_CS, uVar52, in_SS, uVar53, in_GS_OFFSET, bVar54, in_AF, bVar55, bVar56, in_TF, in_IF, bVar57, bVar58, in_NT, uVar59, unaff_retaddr, in_stack_ffffffe0, in_stack_ffffffe8, pcStackY_8c, pbStackY_54, puStackY_40, puStackY_3c, uStackY_38, uStack_10, uStack_c, uStack_9, uStack_8, uVar1, pcVar2, uVar3, uVar4, uVar5, bVar6, cVar7, cVar8, in_EAX, pcVar9
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

char * __fastcall <Execute>b__1(char *s,byte *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char *in_EAX;
  undefined3 uVar26;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint3 uVar27;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  int3 iVar28;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int *piVar22;
  char *pcVar23;
  int *piVar24;
  ushort *puVar25;
  char cVar29;
  undefined1 uVar30;
  byte bVar33;
  undefined2 uVar35;
  byte *pbVar31;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  char cVar34;
  undefined2 uVar36;
  undefined4 uVar32;
  byte bVar37;
  byte bVar38;
  undefined2 uVar39;
  uint *puVar40;
  uint *puVar41;
  byte *pbVar42;
  undefined3 uVar44;
  uint *puVar43;
  char cVar45;
  byte bVar46;
  int unaff_EBX;
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
  uVar35 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar30 = (undefined1)unaff_EBX;
  cVar45 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x4e);
  bVar37 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar37;
  uVar26 = (undefined3)((uint)in_EAX >> 8);
  pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x28);
  *pcVar15 = (*pcVar15 - (bVar37 + 0x28)) - (0xd7 < bVar37);
  bVar55 = (byte)s;
  *param_2 = *param_2 + bVar55;
  bVar6 = bVar37 + 0x1b;
  cVar45 = cVar45 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar45,uVar30)) + 0x4f);
  iVar16 = CONCAT22(uVar35,CONCAT11(cVar45,uVar30));
  *(char *)CONCAT31(uVar26,bVar6) = *(char *)CONCAT31(uVar26,bVar6) + bVar6;
  pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x43);
  *pcVar15 = (*pcVar15 - (bVar37 + 0x43)) - (0xd7 < bVar6);
  *param_2 = *param_2 + bVar55;
  pcVar9 = pcVar15 + -0x6b721c;
  pcVar15 = pcVar15 + -0x6b721a;
  cVar29 = (char)((uint)param_2 >> 8);
  *pcVar15 = *pcVar15 + cVar29;
  bVar37 = (byte)param_2;
  if ((POPCOUNT(*pcVar15) & 1U) == 0) {
    cVar7 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar7;
    uVar26 = (undefined3)((uint)pcVar9 >> 8);
    bVar6 = cVar7 + 2;
    pcVar15 = (char *)CONCAT31(uVar26,bVar6);
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *pcVar15 = *pcVar15 + bVar6;
      piVar24 = (int *)CONCAT31(uVar26,cVar7 + '*');
      *piVar24 = (*piVar24 - (int)piVar24) - (uint)(0xd7 < bVar6);
      bVar6 = *param_2;
      *param_2 = *param_2 + bVar55;
      out(*unaff_ESI,(short)param_2);
      cVar7 = ((cVar7 + '*') - (char)*piVar24) - CARRY1(bVar6,bVar55);
      piVar24 = (int *)CONCAT31(uVar26,cVar7);
      *param_2 = *param_2 + bVar55;
      bVar46 = cVar45 - *(byte *)((int)unaff_ESI + 0x1f);
      iVar16 = CONCAT22(uVar35,CONCAT11(bVar46,uVar30));
      *(char *)piVar24 = (char)*piVar24 + cVar7;
      s = (char *)CONCAT22((short)((uint)s >> 0x10),CONCAT11((byte)((uint)s >> 8) | *param_2,bVar55)
                          );
      unaff_ESI = (uint *)((int)unaff_ESI + (4 - *piVar24));
      *(undefined4 *)CONCAT31(uVar26,cVar7) = 0x10000;
      *s = *s + bVar37;
      bVar6 = cVar7 + *param_2;
      pcVar15 = (char *)CONCAT31(uVar26,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pcVar15 = *pcVar15 + bVar6;
        cVar45 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pcVar15 = (char *)CONCAT31(uVar26,cVar45);
        bVar6 = *param_2;
        *param_2 = *param_2 + bVar55;
        if (SCARRY1(bVar6,bVar55) == (char)*param_2 < '\0') {
          *pcVar15 = *pcVar15 + cVar45;
          out(*unaff_ESI,(short)param_2);
          unaff_ESI = unaff_ESI + 1;
        }
      }
      else {
        *pcVar15 = *pcVar15 + bVar6;
        iVar16 = CONCAT22(uVar35,CONCAT11(bVar46 | unaff_EBP[6],uVar30));
      }
      *pcVar15 = *pcVar15 + (char)pcVar15;
      bVar54 = bRam6f060000 < bVar37;
      bRam6f060000 = bRam6f060000 - bVar37;
      iVar10 = (CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x02') + -0xa0a0000) -
               (uint)bVar54;
      bVar6 = (byte)iVar10;
      bVar54 = CARRY1(bVar6,(byte)*unaff_ESI);
      uVar26 = (undefined3)((uint)iVar10 >> 8);
      cVar45 = bVar6 + (byte)*unaff_ESI;
      pcVar9 = (char *)CONCAT31(uVar26,cVar45);
      if (bVar54) {
        *pcVar9 = *pcVar9 + cVar45;
        iVar16 = CONCAT22((short)((uint)iVar16 >> 0x10),
                          CONCAT11((byte)((uint)iVar16 >> 8) | unaff_EBP[7],(char)iVar16));
        *pcVar9 = *pcVar9 + cVar45;
        goto code_r0x00402188;
      }
      pcVar15 = (char *)CONCAT31(uVar26,cVar45 + -2 + bVar54);
      unaff_retaddr = in_ES;
    }
  }
  else {
code_r0x00402188:
    cVar45 = (char)pcVar9 + '\x02';
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar45);
    iVar16 = CONCAT22((short)((uint)iVar16 >> 0x10),
                      CONCAT11((char)((uint)iVar16 >> 8) + *(char *)(iVar16 + 4),(char)iVar16));
    *pcVar15 = *pcVar15 + cVar45;
  }
  uVar26 = (undefined3)((uint)pcVar15 >> 8);
  bVar6 = (byte)pcVar15 + 0x2d;
  bVar55 = 9 < (bVar6 & 0xf) | in_AF;
  bVar6 = bVar6 + bVar55 * -6;
  cVar45 = bVar6 + (0x9f < bVar6 | 0xd2 < (byte)pcVar15 | bVar55 * (bVar6 < 6)) * -0x60;
  uVar35 = (undefined2)((uint)iVar16 >> 0x10);
  cVar7 = (char)((uint)iVar16 >> 8) + *(char *)(iVar16 + 7);
  pbVar31 = (byte *)CONCAT22(uVar35,CONCAT11(cVar7,(char)iVar16));
  *(char *)CONCAT31(uVar26,cVar45) = *(char *)CONCAT31(uVar26,cVar45) + cVar45;
  bVar46 = cVar45 + 0x7e;
  pbVar12 = (byte *)CONCAT31(uVar26,bVar46);
  pbVar13 = unaff_EBP + 0x6fe1411;
  bVar6 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar46;
  *pbVar12 = (*pbVar12 - bVar46) - CARRY1(bVar6,bVar46);
  bVar54 = CARRY1((byte)*unaff_ESI,bVar46);
  uVar14 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar46;
  bVar6 = (byte)((uint)s >> 8);
  if (bVar54) {
    *pbVar12 = *pbVar12 + bVar46;
    bVar46 = bVar46 | pbVar12[0x400000c];
    puVar11 = (uint *)CONCAT31(uVar26,bVar46);
    if ((char)bVar46 < '\x01') {
code_r0x004021be:
      s = (char *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar6 | *pbVar31,(char)s));
      puVar11 = (uint *)((int)puVar11 + -0x77b02);
      pbVar13 = (byte *)((int)unaff_ESI + (int)unaff_EDI * 2);
      *pbVar13 = *pbVar13 + (char)puVar11;
      pbVar12 = (byte *)((uint)puVar11 | *puVar11);
      bVar6 = (byte)pbVar12;
      unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar6;
      bVar54 = CARRY1(*pbVar12,bVar6);
      *pbVar12 = *pbVar12 + bVar6;
      in_SS = unaff_retaddr;
      goto code_r0x004021d4;
    }
    *(byte *)puVar11 = (char)*puVar11 + bVar46;
    cVar45 = bVar46 + 0x28;
    puVar11 = (uint *)CONCAT31(uVar26,cVar45);
    *puVar11 = (uint)(*puVar11 + (int)puVar11);
    bVar46 = *pbVar31;
    *pbVar31 = *pbVar31 + bVar6;
    if (CARRY1(bVar46,bVar6)) {
      *(char *)puVar11 = (char)*puVar11 + cVar45;
      goto code_r0x004021be;
    }
    pbVar13 = (byte *)((int)unaff_ESI + (int)unaff_EDI * 2);
    *pbVar13 = *pbVar13 + cVar45;
    pbVar12 = (byte *)((uint)puVar11 | *puVar11);
    pbVar12[(int)unaff_EBP] = pbVar12[(int)unaff_EBP] + (char)pbVar12;
code_r0x004021e5:
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    bVar6 = *pbVar31;
    bVar46 = (byte)((uint)s >> 8);
    *pbVar31 = *pbVar31 + bVar46;
    if (!CARRY1(bVar6,bVar46)) goto code_r0x0040220c;
    *pbVar12 = *pbVar12 + (char)pbVar12;
    s = (char *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar46 | *pbVar12,(char)s));
code_r0x004021f1:
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)pbVar12;
  }
  else {
    if ((byte)*unaff_ESI != 0 && SCARRY1((byte)uVar14,bVar46) == (char)(byte)*unaff_ESI < '\0') {
      *pbVar12 = *pbVar12 + bVar46;
      puVar11 = (uint *)CONCAT31(uVar26,cVar45 + -0x55);
      unaff_ESI[(int)unaff_EDI * 2] =
           (uint)(param_2 + (uint)(0xd2 < bVar46) + unaff_ESI[(int)unaff_EDI * 2]);
      goto code_r0x004021be;
    }
code_r0x004021d4:
    if (bVar54) {
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      uVar26 = (undefined3)((uint)pbVar12 >> 8);
      bVar6 = (byte)pbVar12 | pbVar12[0x400000b];
      pbVar12 = (byte *)CONCAT31(uVar26,bVar6);
      if ('\0' < (char)bVar6) {
        *pbVar12 = *pbVar12 + bVar6;
        pbVar12 = (byte *)CONCAT31(uVar26,bVar6 + 0x28);
        goto code_r0x004021e5;
      }
      *param_2 = *param_2 + (char)s;
      *(char *)((int)pbVar12 * 2) = *(char *)((int)pbVar12 * 2) - (char)s;
      goto code_r0x004021f1;
    }
  }
  pbVar31 = (byte *)CONCAT22(uVar35,CONCAT11(cVar7 + pbVar31[6],(char)iVar16));
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar26 = (undefined3)((uint)pbVar12 >> 8);
  bVar46 = (char)pbVar12 + 0x6f;
  bVar6 = *(byte *)CONCAT31(uVar26,bVar46);
  *param_2 = *param_2 + (char)s;
  cVar45 = (bVar46 & bVar6) + *unaff_EDI;
  pbVar12 = (byte *)CONCAT31(uVar26,cVar45);
  *s = *s - cVar29;
  *pbVar12 = *pbVar12 + cVar45;
  *s = *s - bVar37;
  *pbVar12 = *pbVar12 + cVar45;
code_r0x0040220c:
  uStack_8 = CONCAT22(uStack_8._2_2_,in_SS);
  bVar6 = (byte)pbVar12 | 0xde;
  cVar29 = bVar6 + 2;
  uVar26 = (undefined3)((uint)pbVar12 >> 8);
  pcVar15 = (char *)CONCAT31(uVar26,cVar29);
  if ((POPCOUNT(cVar29) & 1U) == 0) {
    *pcVar15 = *pcVar15 + cVar29;
    bVar6 = bVar6 + 0x71;
    pcVar15 = (char *)CONCAT31(uVar26,bVar6 & *(byte *)CONCAT31(uVar26,bVar6));
  }
  cVar29 = (char)s;
  *param_2 = *param_2 + cVar29;
  uVar26 = (undefined3)((uint)param_2 >> 8);
  bVar37 = bVar37 + *unaff_EDI;
  puVar40 = (uint *)CONCAT31(uVar26,bVar37);
  *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar29;
  *pcVar15 = *pcVar15 + (char)pcVar15;
  cVar29 = cVar29 - *pcVar15;
  pcVar9 = (char *)CONCAT31((int3)((uint)s >> 8),cVar29);
  bVar46 = (char)pcVar15 - *pcVar15;
  pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar46);
  *(byte **)pbVar13 = (byte *)(*(int *)pbVar13 + (int)puVar40);
  *pbVar13 = *pbVar13 + bVar46;
  bVar6 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar46;
  *(byte **)pbVar13 = pbVar13 + (uint)CARRY1(bVar6,bVar46) + *(int *)pbVar13;
  *pcVar9 = *pcVar9 + bVar46;
  bVar6 = (byte)((uint)s >> 8);
  uVar35 = (undefined2)((uint)s >> 0x10);
  bVar46 = bVar6 + *pbVar13;
  puVar11 = (uint *)CONCAT22(uVar35,CONCAT11(bVar46,cVar29));
  pbVar13 = pbVar13 + (uint)CARRY1(bVar6,*pbVar13) + *(int *)pbVar13;
  *(byte *)puVar40 = (byte)*puVar40 + cVar29;
  uVar44 = (undefined3)((uint)pbVar31 >> 8);
  cVar45 = (char)pbVar31 - *(byte *)((int)unaff_ESI + 2);
  pbVar12 = (byte *)CONCAT31(uVar44,cVar45);
  bVar6 = (byte)pbVar13;
  uVar27 = (uint3)((uint)pbVar13 >> 8);
  uVar53 = in_ES;
  if ((POPCOUNT(cVar45) & 1U) == 0) {
    *pbVar13 = *pbVar13 + bVar6;
    bVar6 = bVar6 | *pbVar12;
    piVar24 = (int *)CONCAT31(uVar27,bVar6);
    if (bVar6 == 0) {
      *(char *)piVar24 = (char)*piVar24;
      puVar47 = unaff_ESI + 1;
      out(*unaff_ESI,(short)puVar40);
      pbVar13 = (byte *)((uint)uVar27 << 8);
      *(byte *)puVar40 = (byte)*puVar40 + cVar29;
      puVar40 = (uint *)CONCAT31(uVar26,bVar37 - *pbVar12);
      *pbVar12 = *pbVar12;
      *(byte *)puVar40 = (byte)*puVar40 + bVar46;
      *pbVar13 = *pbVar13;
      *(byte *)puVar40 = (byte)*puVar40;
      *pbVar13 = *pbVar13;
      *(byte **)(pbVar12 + 0x25) = (byte *)(*(int *)(pbVar12 + 0x25) + (int)puVar47);
    }
    else {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar24 = (char)*piVar24 + bVar6;
      puVar11 = (uint *)CONCAT22(uVar35,CONCAT11(bVar46 | (byte)*puVar40,cVar29));
      puVar47 = (uint *)((int)unaff_ESI + *piVar24);
      pcVar15 = (char *)((int)piVar24 + *piVar24);
      uVar26 = (undefined3)((uint)pcVar15 >> 8);
      cVar7 = (char)pcVar15 - *pcVar15;
      pcVar15 = (char *)CONCAT31(uVar26,cVar7);
      *pcVar15 = *pcVar15 + cVar7;
      pbVar13 = (byte *)CONCAT31(uVar26,cVar7 + *pcVar15);
      uVar14 = *puVar11;
      *(byte *)puVar11 = (byte)*puVar11 + bVar37;
      if (!CARRY1((byte)uVar14,bVar37)) {
        *(byte *)puVar40 = (byte)*puVar40 + cVar29;
        pbVar12 = (byte *)CONCAT31(uVar44,cVar45 - (byte)*puVar47);
        goto _ctor;
      }
    }
    *pbVar13 = *pbVar13 + (char)pbVar13;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),(byte)puVar11 | (byte)*puVar40);
    unaff_ESI = puVar47;
  }
  else {
    *(byte *)puVar40 = (byte)*puVar40 + cVar29;
    pbVar13 = (byte *)CONCAT31(uVar27,bVar6 | (byte)*unaff_ESI);
  }
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x26);
  *pbVar13 = *pbVar13 + (byte)pbVar13;
  uVar26 = (undefined3)((uint)pbVar13 >> 8);
  bVar37 = (byte)pbVar13 | (byte)*puVar40;
  pbVar13 = (byte *)CONCAT31(uVar26,bVar37);
  if ((POPCOUNT(bVar37) & 1U) == 0) {
    *pbVar13 = *pbVar13 + bVar37;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    bVar55 = 9 < (bVar37 + 6 & 0xf) | bVar55;
    bVar6 = bVar37 + 6 + bVar55 * '\x06';
    pbVar13 = (byte *)CONCAT31(uVar26,bVar6 + (0x90 < (bVar6 & 0xf0) |
                                              0xf9 < bVar37 | bVar55 * (0xf9 < bVar6)) * '`');
  }
  *pbVar13 = *pbVar13 + (char)pbVar13;
  puVar47 = unaff_ESI;
  do {
    puVar41 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) | pbVar12[0x28],(char)puVar40));
    *pbVar13 = *pbVar13 + (char)pbVar13;
    uVar35 = (undefined2)((uint)puVar11 >> 0x10);
    uVar30 = SUB41(puVar11,0);
    bVar6 = (byte)((uint)puVar11 >> 8) | *pbVar13;
    puVar11 = (uint *)CONCAT22(uVar35,CONCAT11(bVar6,uVar30));
    cVar29 = (char)pbVar13 + *pbVar13;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar29);
    bVar37 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar6;
    if (!CARRY1(bVar37,bVar6)) goto code_r0x004022b3;
    *pbVar13 = *pbVar13 + cVar29;
    puVar11 = (uint *)CONCAT22(uVar35,CONCAT11(bVar6 | (byte)*puVar41,uVar30));
    puVar40 = puVar41;
_ctor:
    bVar37 = (byte)((uint)puVar11 >> 8);
    uVar35 = (undefined2)((uint)puVar11 >> 0x10);
    cVar29 = (char)puVar11;
    bVar6 = bVar37 + *pbVar13;
    puVar11 = (uint *)CONCAT22(uVar35,CONCAT11(bVar6,cVar29));
    pbVar13 = pbVar13 + (uint)CARRY1(bVar37,*pbVar13) + *(int *)pbVar13;
    *(byte *)puVar40 = (byte)*puVar40 + cVar29;
    bVar46 = (byte)pbVar12;
    bVar54 = bVar46 < *(byte *)((int)puVar47 + 2);
    bVar37 = *(byte *)((int)puVar47 + 2);
    cVar45 = bVar46 - bVar37;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar45);
    if ((POPCOUNT(cVar45) & 1U) != 0) {
      if ((char)bVar37 <= (char)bVar46) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *pbVar13 = *pbVar13 + (byte)pbVar13;
    bVar37 = (byte)pbVar13 | *pbVar12;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar37);
    puVar41 = puVar40;
    if (bVar37 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x2b);
      *pbVar13 = *pbVar13 + bVar37;
      puVar11 = (uint *)CONCAT22(uVar35,CONCAT11(bVar6 | (byte)*puVar40,cVar29));
      bVar6 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar37;
      puVar47 = (uint *)((int)puVar47 + (uint)CARRY1(bVar6,bVar37) + *(int *)pbVar13);
      pbVar13 = pbVar13 + *(int *)pbVar13;
      cVar29 = (char)pbVar13 - *pbVar13;
      piVar24 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar29);
      *(char *)piVar24 = (char)*piVar24 + cVar29;
      pbVar13 = (byte *)((int)piVar24 + *piVar24);
      uVar14 = *puVar11;
      *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar40;
      if (!CARRY1((byte)uVar14,(byte)puVar40)) goto code_r0x004022ea;
      goto code_r0x004022be;
    }
    *pbVar13 = *pbVar13;
    out(*puVar47,(short)puVar40);
    pbVar13 = pbVar13 + -*(int *)pbVar13;
    puVar47 = puVar47 + 1;
code_r0x004022ab:
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar11;
    bVar37 = (char)pbVar13 - *pbVar13;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar37);
    *pbVar12 = *pbVar12 + (char)puVar41;
    *pbVar12 = *pbVar12 ^ bVar37;
code_r0x004022b3:
    *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)puVar11 >> 8);
    bVar6 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    *pbVar12 = *pbVar12 + bVar6;
    bVar37 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    *(byte **)(pbVar12 + 0x2c) =
         (byte *)((int)puVar47 + (uint)CARRY1(bVar37,bVar6) + *(int *)(pbVar12 + 0x2c));
    puVar40 = puVar41;
code_r0x004022be:
    *pbVar13 = *pbVar13 + (char)pbVar13;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),(byte)puVar11 | (byte)*puVar40);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x2d);
code_r0x004022c6:
    *pbVar13 = *pbVar13 + (byte)pbVar13;
    uVar26 = (undefined3)((uint)pbVar13 >> 8);
    bVar37 = (byte)pbVar13 | (byte)*puVar40;
    pcVar15 = (char *)CONCAT31(uVar26,bVar37);
    if ((POPCOUNT(bVar37) & 1U) != 0) {
      *pcVar15 = *pcVar15 + bVar37;
    }
    *pcVar15 = *pcVar15 + bVar37;
    cVar29 = bVar37 + 6;
    pbVar13 = (byte *)CONCAT31(uVar26,cVar29);
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    *pbVar13 = *pbVar13 + cVar29;
    puVar41 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) | pbVar12[0x2f],(char)puVar40));
    *pbVar13 = *pbVar13 + cVar29;
    bVar37 = (byte)((uint)puVar11 >> 8) | *pbVar13;
    puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),CONCAT11(bVar37,(char)puVar11));
    pbVar13 = pbVar13 + *(int *)pbVar13;
    bVar54 = CARRY1(*pbVar12,bVar37);
    *pbVar12 = *pbVar12 + bVar37;
code_r0x004022e0:
    puVar40 = puVar41;
    if (!bVar54) goto code_r0x0040230b;
    bVar6 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                               CONCAT11((byte)((uint)puVar11 >> 8) | (byte)*puVar41,(char)puVar11));
    bVar37 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    puVar47 = (uint *)((int)puVar47 + (-(uint)CARRY1(bVar37,bVar6) - *(int *)pbVar13));
code_r0x004022ea:
    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),(char)pbVar13 + *pbVar13);
code_r0x004022ef:
    *(char *)((int)pbVar13 * 2) = *(char *)((int)pbVar13 * 2) + (char)pbVar13;
    *(byte *)puVar11 = (byte)*puVar11 + (char)puVar41;
    uVar53 = (ushort)in_stack_ffffffe8;
    puVar40 = puVar41;
    while( true ) {
      uVar26 = (undefined3)((uint)pbVar13 >> 8);
      bVar37 = (byte)pbVar13 | (byte)*puVar40;
      pbVar13 = (byte *)CONCAT31(uVar26,bVar37);
      if ((POPCOUNT(bVar37) & 1U) != 0) break;
      *pbVar13 = *pbVar13 + bVar37;
      cVar29 = bVar37 + 0xd;
      pcVar15 = (char *)CONCAT31(uVar26,cVar29);
      *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar15;
      *pcVar15 = *pcVar15 + cVar29;
      *(char *)((int)pcVar15 * 2) = *(char *)((int)pcVar15 * 2) + (char)((uint)puVar11 >> 8);
      *pcVar15 = *pcVar15 + cVar29;
      pbVar13 = (byte *)CONCAT31(uVar26,cVar29);
      *pbVar13 = *pbVar13 + cVar29;
code_r0x0040230b:
      puVar41 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((char)((uint)puVar40 >> 8) + pbVar12[0x34],(char)puVar40))
      ;
      cVar29 = (char)pbVar13;
      *pbVar13 = *pbVar13 + cVar29;
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar12 >> 8) | unaff_EBP[-0x79],
                                          (char)pbVar12));
      *pbVar13 = *pbVar13 + cVar29;
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar29 + '\x02');
code_r0x00402317:
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                 CONCAT11((char)((uint)pbVar12 >> 8) + pbVar12[-0x7a],(char)pbVar12)
                                );
      cVar29 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar29;
      uVar26 = (undefined3)((uint)pcVar15 >> 8);
      cVar45 = cVar29 + '{';
      pbVar13 = (byte *)CONCAT31(uVar26,cVar45);
      *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
      pbVar31 = (byte *)((int)puVar41 + (int)pbVar13);
      *pbVar31 = *pbVar31 + cVar45;
      if ((POPCOUNT(*pbVar31) & 1U) != 0) goto code_r0x004022ab;
      *pbVar13 = *pbVar13 + cVar45;
      piVar24 = (int *)CONCAT31(uVar26,cVar29 + -10);
      uVar14 = (int)piVar24 + *piVar24;
      bVar37 = (byte)uVar14;
      unaff_EDI[(int)unaff_EBP * 2] = unaff_EDI[(int)unaff_EBP * 2] + bVar37;
      pbVar13 = (byte *)(uVar14 ^ 0x7d0a0000);
      *pbVar13 = bVar37;
      pbVar31 = (byte *)((int)puVar41 + (int)pbVar13);
      *pbVar31 = *pbVar31 + bVar37;
      puVar40 = puVar41;
      if ((POPCOUNT(*pbVar31) & 1U) != 0) goto code_r0x004022be;
      *pbVar13 = *pbVar13 + bVar37;
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar37 + 0x69);
      uVar50 = in_ES;
code_r0x00402342:
      in_ES = uVar50;
      uVar26 = (undefined3)((uint)pcVar15 >> 8);
      bVar37 = (char)pcVar15 + *pcVar15;
      pcVar15 = (char *)CONCAT31(uVar26,bVar37);
      *pcVar15 = *pcVar15 + bVar37;
      *pcVar15 = *pcVar15 + bVar37;
      *(byte *)(puVar47 + 0x800000) = (byte)puVar47[0x800000] + (char)puVar11;
      cVar45 = (char)pbVar12;
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                 CONCAT11((char)((uint)pbVar12 >> 8) + pbVar12[-0x7a],cVar45));
      *pcVar15 = *pcVar15 + bVar37;
      bVar54 = 0xfd < bVar37;
      cVar29 = bVar37 + 2;
      pbVar13 = (byte *)CONCAT31(uVar26,cVar29);
      if ((POPCOUNT(cVar29) & 1U) != 0) goto code_r0x004022e0;
      *pbVar13 = *pbVar13 + cVar29;
      cVar29 = bVar37 + 0x71;
      pbVar13 = (byte *)CONCAT31(uVar26,cVar29);
      bVar6 = *pbVar13;
      *pbVar13 = *pbVar13 + cVar29;
      in_stack_ffffffe8 = (byte *)(uint)in_ES;
      if (SCARRY1(bVar6,cVar29) == (char)*pbVar13 < '\0') {
        *(byte *)((int)puVar41 + (int)pbVar13) = *(byte *)((int)puVar41 + (int)pbVar13) + cVar45;
        goto code_r0x004022ef;
      }
      *pbVar13 = *pbVar13 + cVar29;
      pbVar13 = (byte *)CONCAT31(uVar26,bVar37 + 0x73);
      bVar54 = (POPCOUNT(bVar37 + 0x73) & 1U) == 0;
      puVar40 = puVar41;
code_r0x00402366:
      if (bVar54) {
code_r0x00402368:
        *pbVar13 = *pbVar13 + (char)pbVar13;
        cVar29 = (char)pbVar13 + 'o';
        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar29);
        *pcVar15 = *pcVar15 + cVar29;
        puVar41 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(byte)puVar40 | *pbVar12);
        pcVar15 = pcVar15 + 0x37280512;
        bVar6 = (byte)pcVar15;
        *pcVar15 = *pcVar15 + bVar6;
        puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                                   CONCAT11((byte)((uint)puVar11 >> 8) | bRam7d160243,(char)puVar11)
                                  );
        pbVar13 = (byte *)((int)puVar41 + (int)pcVar15);
        bVar37 = *pbVar13;
        *pbVar13 = *pbVar13 + bVar6;
        pcRam00008e7d = pcVar15 + (int)(pcRam00008e7d + CARRY1(bVar37,bVar6));
        bVar54 = SCARRY1(bVar6,'\x02');
        bVar6 = bVar6 + 2;
        puVar25 = (ushort *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar6);
code_r0x0040238b:
        if (bVar54 == (char)bVar6 < '\0') {
          *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
          pcVar15 = (char *)CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + '\x12');
          uVar50 = in_ES;
          in_ES = uVar53;
code_r0x00402391:
          pcVar15 = pcVar15 + 0x42802;
          *pbVar12 = *pbVar12 + (char)((uint)puVar11 >> 8);
          uVar53 = in_ES;
code_r0x00402399:
          bVar37 = (byte)pbVar12 | (byte)((uint)puVar11 >> 8);
          uVar26 = (undefined3)((uint)pcVar15 >> 8);
          pcVar15 = (char *)CONCAT31(uVar26,1);
          *pcVar15 = *pcVar15 + '\x01';
          pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                     CONCAT11((char)((uint)pbVar12 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar12 >> 8),bVar37)
                                                       + -0x72),bVar37));
          *pcVar15 = *pcVar15 + '\x01';
          uVar14 = CONCAT31(uVar26,0x14);
          pcVar15 = (char *)(uVar14 + 0x19061215 + (uint)(0x1f9edfd < uVar14));
          uVar1 = (uint)(0xe4ffffec < uVar14 + 0xfe061202 ||
                        CARRY4(uVar14 + 0x19061215,(uint)(0x1f9edfd < uVar14)));
          uVar14 = *puVar47;
          uVar19 = *puVar47;
          *puVar47 = (uint)(pcVar15 + uVar19 + uVar1);
          if ((SCARRY4(uVar14,(int)pcVar15) != SCARRY4((int)(pcVar15 + uVar19),uVar1)) !=
              (int)*puVar47 < 0) {
            bVar6 = (byte)pcVar15;
            *pcVar15 = *pcVar15 + bVar6;
            iVar16 = CONCAT31((int3)((uint)pcVar15 >> 8),bVar6 + 2) + 0x847d + (uint)(0xfd < bVar6);
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(byte)puVar41 | (byte)*puVar41);
            pcVar15 = (char *)(CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x12') + 0x134f26)
            ;
            *pbVar12 = *pbVar12 + bVar37;
code_r0x004023cd:
            out(*puVar47,(short)puVar41);
            uVar14 = *puVar41;
            *(byte *)puVar41 = (byte)*puVar41 + (byte)puVar11;
            pbVar13 = (byte *)(pcVar15 +
                              (uint)CARRY1((byte)uVar14,(byte)puVar11) + *(int *)unaff_EDI);
            bVar58 = SCARRY1((char)puVar41,(byte)*puVar11);
            bVar37 = (char)puVar41 + (byte)*puVar11;
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar37);
            bVar56 = (char)bVar37 < '\0';
            puVar47 = puVar47 + 1;
code_r0x004023d6:
            bVar54 = (POPCOUNT(bVar37) & 1U) == 0;
            puVar40 = puVar41;
            if (bVar58 != bVar56) {
              *pbVar13 = *pbVar13 + (char)pbVar13;
code_r0x004023db:
              cVar45 = (char)pbVar13;
              uVar26 = (undefined3)((uint)pbVar13 >> 8);
              cVar29 = cVar45 + '\x02';
              pbVar13 = (byte *)CONCAT31(uVar26,cVar29);
              if ((POPCOUNT(cVar29) & 1U) != 0) {
                pbVar31 = (byte *)((int)puVar40 + (int)pbVar13);
                *pbVar31 = *pbVar31 + cVar29;
                bVar54 = (POPCOUNT(*pbVar31) & 1U) == 0;
                goto code_r0x00402366;
              }
              *pbVar13 = *pbVar13 + cVar29;
              cVar45 = cVar45 + '\x15';
              pbVar13 = (byte *)CONCAT31(uVar26,cVar45);
              *(byte *)puVar11 = (byte)*puVar11 | (byte)puVar40;
              *unaff_EDI = *unaff_EDI | (byte)puVar40;
              uVar50 = in_ES;
              if ((POPCOUNT(*unaff_EDI) & 1U) == 0) {
                *pbVar13 = *pbVar13 + cVar45;
                goto code_r0x00402425;
              }
              *pbVar13 = *pbVar13 + cVar45;
              cVar45 = cVar45 + (byte)*puVar40;
              pcVar15 = (char *)CONCAT31(uVar26,cVar45);
              if ((POPCOUNT(cVar45) & 1U) == 0) {
                *pcVar15 = *pcVar15 + cVar45;
                puVar25 = (ushort *)CONCAT31(uVar26,cVar45 + 'o');
                puVar41 = puVar40;
code_r0x004023f6:
                uVar14 = *puVar41;
                *(byte *)puVar41 = (byte)*puVar41 + (char)puVar11;
                cVar29 = (char)puVar25;
                if (SCARRY1((byte)uVar14,(char)puVar11) == (char)(byte)*puVar41 < '\0') {
                  in_ES = *puVar25;
                  pbVar13 = (byte *)((int)puVar41 + (int)puVar25);
                  bVar54 = SCARRY1(*pbVar13,cVar29);
                  *pbVar13 = *pbVar13 + cVar29;
                  bVar6 = *pbVar13;
                  goto code_r0x0040238b;
                }
                *(char *)puVar25 = (char)*puVar25 + cVar29;
                cVar29 = cVar29 + '\x02';
                pcVar15 = (char *)CONCAT31((int3)((uint)puVar25 >> 8),cVar29);
                puVar40 = puVar47;
                if ((POPCOUNT(cVar29) & 1U) == 0) {
code_r0x00402402:
                  *pcVar15 = *pcVar15 + (char)pcVar15;
                  uVar26 = (undefined3)((uint)pcVar15 >> 8);
                  piVar24 = (int *)CONCAT31(uVar26,(char)pcVar15 + 'r');
                  *piVar24 = *piVar24 + 0x7b027000;
                  cVar29 = (char)*piVar24;
                  pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                  pbVar13 = (byte *)((int)puVar41 + (int)pcVar15);
                  *pbVar13 = *pbVar13 + cVar29;
                  puVar47 = puVar40;
                  if ((POPCOUNT(*pbVar13) & 1U) == 0) {
                    *pcVar15 = *pcVar15 + cVar29;
                    bVar6 = cVar29 + '{' + *(char *)CONCAT31(uVar26,cVar29 + '{');
                    piVar24 = (int *)CONCAT31(uVar26,bVar6);
                    pbVar13 = (byte *)((int)piVar24 + (int)unaff_EBP);
                    bVar37 = *pbVar13;
                    *pbVar13 = *pbVar13 + bVar6;
                    *piVar24 = (*piVar24 - (int)piVar24) - (uint)CARRY1(bVar37,bVar6);
                    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar11;
                    puVar47 = puVar40 + 1;
                    out(*puVar40,(short)puVar41);
                    cVar29 = bVar6 - (char)*piVar24;
                    pbVar13 = (byte *)CONCAT31(uVar26,cVar29);
                    *(byte *)puVar47 = (byte)*puVar47 + cVar29;
                    puVar40 = puVar41;
code_r0x00402425:
                    out(*puVar47,(short)puVar40);
                    uVar14 = *puVar40;
                    *(byte *)puVar40 = (byte)*puVar40 + (byte)puVar11;
                    uVar14 = (uint)CARRY1((byte)uVar14,(byte)puVar11);
                    pbVar31 = (byte *)((int)puVar11 + *puVar11) + uVar14;
                    puVar11 = (uint *)CONCAT31((int3)((uint)pbVar31 >> 8),
                                               (char)pbVar31 + *pbVar31 +
                                               (CARRY4((uint)puVar11,*puVar11) ||
                                               CARRY4((int)puVar11 + *puVar11,uVar14)));
                    cRam130a0000 = cRam130a0000 - (char)((uint)pbVar12 >> 8);
                    puVar41 = puVar40;
                    puVar47 = puVar47 + 1;
code_r0x00402435:
                    puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               (byte)puVar41 | (byte)*puVar41);
                    bVar37 = *pbVar13;
                    *pbVar13 = *pbVar13 + (char)pbVar13;
                    puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                                               CONCAT11((byte)((uint)puVar11 >> 8) | bVar37 |
                                                        bRam7d170243,(char)puVar11));
code_r0x00402442:
                    pbVar31 = (byte *)((int)puVar41 + (int)pbVar13);
                    bVar6 = *pbVar31;
                    bVar37 = (byte)pbVar13;
                    *pbVar31 = *pbVar31 + bVar37;
                    uVar14 = *puVar41;
                    uVar19 = *puVar41;
                    *puVar41 = (uint)((byte *)(uVar19 + (int)puVar11) + CARRY1(bVar6,bVar37));
                    puVar40 = puVar41;
                    if ((SCARRY4(uVar14,(int)puVar11) !=
                        SCARRY4((int)(uVar19 + (int)puVar11),(uint)CARRY1(bVar6,bVar37))) !=
                        (int)*puVar41 < 0) {
                      *pbVar13 = *pbVar13 + bVar37;
                      bVar58 = SCARRY1(bVar37,'\x02');
                      bVar37 = bVar37 + 2;
                      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar37);
code_r0x0040244f:
                      bVar56 = (char)bVar37 < '\0';
                      if (bVar58 == bVar56) {
code_r0x00402451:
                        *pbVar13 = *pbVar13 + (char)pbVar13;
                        bVar37 = (char)pbVar13 + 0x12U | (byte)*puVar41;
                        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar37);
                        cRam162b0000 = cRam162b0000 - bVar37;
code_r0x0040245d:
                        pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),
                                                   (byte)pbVar12 | (byte)((uint)puVar11 >> 8));
                        cVar29 = in((short)puVar41);
                        puVar25 = (ushort *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar29);
                        *(char *)puVar25 = (char)*puVar25 + cVar29;
                        *(byte *)puVar41 = (byte)*puVar41 + cVar29;
                        if ((POPCOUNT((byte)*puVar41) & 1U) == 0) {
code_r0x00402466:
                          *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
                          uVar26 = (undefined3)((uint)puVar25 >> 8);
                          bVar37 = (char)puVar25 + 0x13U | (byte)*puVar41;
                          pcVar15 = (char *)CONCAT31(uVar26,bVar37);
                          cVar29 = (byte)puVar11 + *pbVar12;
                          puVar40 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),cVar29);
                          cRam1b000019 = cRam1b000019 + '\x01';
                          uVar14 = (uint)CARRY1((byte)puVar11,*pbVar12);
                          iVar16 = *(int *)pbVar12;
                          iVar10 = *(int *)pbVar12;
                          *(byte **)pbVar12 = (byte *)(iVar10 + (int)puVar40) + uVar14;
                          if ((SCARRY4(iVar16,(int)puVar40) != SCARRY4(iVar10 + (int)puVar40,uVar14)
                              ) != *(int *)pbVar12 < 0) {
                            *pcVar15 = *pcVar15 + bVar37;
                            iVar16 = CONCAT31(uVar26,bVar37 + 2) + 0x847d + (uint)(0xfd < bVar37);
                            uVar26 = (undefined3)((uint)iVar16 >> 8);
                            bVar37 = (char)iVar16 + 0x12;
                            puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                                                       CONCAT11((byte)((uint)puVar11 >> 8) |
                                                                *(byte *)CONCAT31(uVar26,bVar37),
                                                                cVar29));
                            bVar55 = 9 < (bVar37 & 0xf) | bVar55;
                            uVar14 = CONCAT31(uVar26,bVar37 + bVar55 * -6) & 0xffffff0f;
                            pcVar15 = (char *)CONCAT22((short)(uVar14 >> 0x10),
                                                       CONCAT11((char)((uint)iVar16 >> 8) - bVar55,
                                                                (char)uVar14));
code_r0x00402486:
                            *pcVar15 = *pcVar15 + (char)pcVar15;
                            puVar43 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                                       (byte)puVar41 | (byte)*puVar41);
                            uVar35 = (undefined2)((uint)pbVar12 >> 0x10);
                            bVar37 = (byte)((uint)pbVar12 >> 8) | (byte)((uint)puVar41 >> 8);
                            pbVar13 = (byte *)(pcVar15 + 0x1b000019);
                            puVar40 = (uint *)((int)puVar43 + (int)pbVar13);
                            bVar54 = CARRY4((uint)puVar11,*puVar40);
                            pbVar31 = (byte *)((int)puVar11 + *puVar40);
                            puVar11 = (uint *)(pbVar31 + ((char *)0xe4ffffe6 < pcVar15));
                            piVar24 = (int *)((int)unaff_EDI * 2 + 0x400008b);
                            *piVar24 = (int)((int)puVar11 +
                                            (uint)(bVar54 ||
                                                  CARRY4((uint)pbVar31,
                                                         (uint)((char *)0xe4ffffe6 < pcVar15))) +
                                            *piVar24);
                            pbVar12 = (byte *)CONCAT22(uVar35,CONCAT11(bVar37 + *(char *)(CONCAT22(
                                                  uVar35,CONCAT11(bVar37,(char)pbVar12)) + -0x79),
                                                  (char)pbVar12));
                            puVar41 = puVar43;
code_r0x0040249e:
                            bVar37 = (byte)pbVar13;
                            *pbVar13 = *pbVar13 + bVar37;
                            uVar26 = (undefined3)((uint)pbVar13 >> 8);
                            cVar29 = bVar37 + 2;
                            pbVar13 = (byte *)CONCAT31(uVar26,cVar29);
                            puVar40 = puVar41;
                            if (0xfd < bVar37) {
                              bVar6 = *pbVar13;
                              *pbVar13 = *pbVar13 + cVar29;
                              if (SCARRY1(bVar6,cVar29) == (char)*pbVar13 < '\0')
                              goto code_r0x00402435;
                              *pbVar13 = *pbVar13 + cVar29;
                              cVar29 = bVar37 + 4;
                              pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                              if ((POPCOUNT(cVar29) & 1U) != 0) {
                                *(byte *)puVar41 = (byte)*puVar41 + (char)puVar11;
                                pbVar13 = (byte *)(pcVar15 + -0x7d170243);
                                goto code_r0x00402442;
                              }
                              *pcVar15 = *pcVar15 + cVar29;
                              cVar29 = bVar37 + 6;
                              pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                              if ((POPCOUNT(cVar29) & 1U) == 0) {
                                while( true ) {
                                  cVar29 = (char)pcVar15;
                                  *pcVar15 = *pcVar15 + cVar29;
                                  uVar26 = (undefined3)((uint)pcVar15 >> 8);
                                  pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '}');
                                  puVar47 = (uint *)((int)puVar47 + -1);
                                  *pcVar15 = *pcVar15 + cVar29 + '}';
                                  cVar45 = cVar29 + '\x7f';
                                  pbVar13 = (byte *)CONCAT31(uVar26,cVar45);
                                  if ((POPCOUNT(cVar45) & 1U) != 0) break;
                                  *pbVar13 = *pbVar13 + cVar45;
                                  cVar45 = cVar29 + -0x7f;
                                  pbVar13 = (byte *)CONCAT31(uVar26,cVar45);
                                  if ((POPCOUNT(cVar45) & 1U) != 0) goto code_r0x00402451;
                                  *pbVar13 = *pbVar13 + cVar45;
                                  pcVar15 = (char *)CONCAT31(uVar26,cVar29 + -2);
                                  unaff_EDI = unaff_EDI + -1;
                                  while( true ) {
                                    cVar29 = (char)pcVar15;
                                    *pcVar15 = *pcVar15 + cVar29;
                                    uVar26 = (undefined3)((uint)pcVar15 >> 8);
                                    cVar45 = cVar29 + '\x02';
                                    pcVar15 = (char *)CONCAT31(uVar26,cVar45);
                                    if ((POPCOUNT(cVar45) & 1U) != 0) goto code_r0x0040245d;
                                    *pcVar15 = *pcVar15 + cVar45;
                                    pcVar15 = (char *)(CONCAT31(uVar26,cVar29 + 'q') + 1);
                                    *pcVar15 = *pcVar15 + (byte)pcVar15;
                                    uVar26 = (undefined3)((uint)pcVar15 >> 8);
                                    bVar37 = (byte)pcVar15 | (byte)*puVar41;
                                    pcVar15 = (char *)CONCAT31(uVar26,bVar37);
                                    if ((POPCOUNT(bVar37) & 1U) != 0) {
                                      puVar11 = (uint *)((int)puVar11 + *puVar41);
                                      puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                                                 (char)puVar41 + (byte)*puVar41);
                                      unaff_EDI = (byte *)((uint)unaff_EDI | (uint)puVar47);
                                      puVar25 = (ushort *)(pcVar15 + 0x1b000019);
                                      goto code_r0x00402466;
                                    }
                                    *pcVar15 = *pcVar15 + bVar37;
                                    pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x6f);
                                    puVar11 = (uint *)((int)puVar11 + 1);
                                    *pcVar15 = *pcVar15 + bVar37 + 0x6f;
                                    uVar35 = (undefined2)((uint)pbVar12 >> 0x10);
                                    bVar37 = (byte)pbVar12;
                                    bVar6 = (byte)((uint)pbVar12 >> 8) | (byte)*puVar41;
                                    uVar53 = (ushort)uStack_8;
                                    uStack_8 = CONCAT22(uStack_8._2_2_,in_ES);
                                    cVar29 = (char)(pcVar15 + -0x21000001);
                                    uVar26 = (undefined3)((uint)(pcVar15 + -0x21000001) >> 8);
                                    cVar45 = cVar29 + -0x13;
                                    pcVar15 = (char *)CONCAT31(uVar26,cVar45);
                                    cVar7 = bVar6 + *(char *)(CONCAT22(uVar35,CONCAT11(bVar6,bVar37)
                                                                      ) + -0x73);
                                    pbVar12 = (byte *)CONCAT22(uVar35,CONCAT11(cVar7,bVar37));
                                    *pcVar15 = *pcVar15 + cVar45;
                                    pcVar15 = (char *)(CONCAT31(uVar26,cVar29 + '\x19') | *puVar41);
                                    if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0)
                                    goto code_r0x00402486;
                                    cVar29 = (char)pcVar15;
                                    *pcVar15 = *pcVar15 + cVar29;
                                    uVar26 = (undefined3)((uint)pcVar15 >> 8);
                                    pcVar9 = (char *)CONCAT31(uVar26,cVar29 + 'o');
                                    puVar40 = (uint *)((int)puVar41 + 1);
                                    *pcVar9 = *pcVar9 + cVar29 + 'o';
                                    bVar37 = bVar37 | (byte)((uint)pcVar15 >> 8);
                                    pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '\\');
                                    cVar7 = cVar7 + *(char *)(CONCAT31((int3)((uint)pbVar12 >> 8),
                                                                       bVar37) + -0x78);
                                    pbVar12 = (byte *)CONCAT22(uVar35,CONCAT11(cVar7,bVar37));
                                    *pcVar15 = *pcVar15 + cVar29 + '\\';
                                    pcVar15 = (char *)(CONCAT31(uVar26,cVar29 + -0x78) | *puVar40);
                                    cVar29 = (char)pcVar15;
                                    uVar26 = (undefined3)((uint)pcVar15 >> 8);
                                    if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0) {
                                      pbVar13 = (byte *)CONCAT31(uVar26,cVar29 + '\x02');
                                      puVar41 = puVar40;
                                      if ((POPCOUNT(cVar29 + '\x02') & 1U) == 0)
                                      goto code_r0x0040249e;
                                      goto code_r0x00402425;
                                    }
                                    *pcVar15 = *pcVar15 + cVar29;
                                    cVar45 = cVar29 + 'o';
                                    pcVar9 = (char *)CONCAT31(uVar26,cVar45);
                                    puVar41 = (uint *)((int)puVar41 + 2);
                                    *pcVar9 = *pcVar9 + cVar45;
                                    bVar37 = bVar37 | (byte)((uint)pcVar15 >> 8);
                                    pbVar12 = (byte *)CONCAT22(uVar35,CONCAT11(cVar7 + *(char *)(
                                                  CONCAT31((int3)((uint)pbVar12 >> 8),bVar37) +
                                                  -0x79),bVar37));
                                    *pcVar9 = *pcVar9 + cVar45;
                                    pcVar15 = (char *)(CONCAT31(uVar26,cVar29 + 'z') | 2);
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    cVar29 = (char)pcVar15;
                                    *pcVar15 = *pcVar15 + cVar29;
                                    cVar45 = cVar29 + '\x02';
                                    pcVar15 = (char *)CONCAT31(uVar26,cVar45);
                                    if (SCARRY1(cVar29,'\x02') != cVar45 < '\0') break;
                                    *pcVar15 = *pcVar15 + cVar45;
                                    cVar45 = cVar29 + '\n';
                                    *pbVar12 = *pbVar12 - cVar45;
                                    *(byte *)puVar41 = *(byte *)puVar41 + (char)puVar11;
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    *(char *)CONCAT31(uVar26,cVar45) =
                                         *(char *)CONCAT31(uVar26,cVar45) + cVar45;
                                    cVar7 = cVar29 + '\f';
                                    pcVar15 = (char *)CONCAT31(uVar26,cVar7);
                                    if (SCARRY1(cVar45,'\x02') == cVar7 < '\0') {
                                      *pcVar15 = *pcVar15 + cVar7;
                                      pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '\x13');
                                      uVar53 = in_ES;
                                      goto code_r0x0040254a;
                                    }
                                  }
                                }
                                pbVar31 = (byte *)((int)puVar41 + (int)pbVar13);
                                bVar58 = SCARRY1(*pbVar31,cVar45);
                                *pbVar31 = *pbVar31 + cVar45;
                                bVar37 = *pbVar31;
                                goto code_r0x0040244f;
                              }
                              cVar45 = (char)puVar41;
                              cVar7 = cVar45 + *unaff_EDI;
                              puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),cVar7);
                              if (SCARRY1(cVar45,*unaff_EDI) != cVar7 < '\0') {
                                *pcVar15 = *pcVar15 + cVar29;
                                pbVar13 = (byte *)CONCAT31(uVar26,bVar37 + 8);
                                goto code_r0x00402442;
                              }
                              cRam1b000013 = cRam1b000013 + '\x01';
                              goto code_r0x004023cd;
                            }
                            goto code_r0x00402425;
                          }
                          pcVar9 = pcVar15 + 2;
                          *pcVar9 = *pcVar9 + (char)((uint)puVar41 >> 8);
                          puVar11 = puVar40;
                          if ((POPCOUNT(*pcVar9) & 1U) == 0) {
                            *pcVar15 = *pcVar15 + bVar37;
                            pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 2);
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
                pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                           CONCAT11((char)((uint)pbVar12 >> 8) +
                                                    unaff_EBP[(int)pcVar15 * 4],(char)pbVar12));
                *(char *)((int)puVar41 * 2) = *(char *)((int)puVar41 * 2) + cVar29;
                in_ES = uVar53;
                goto code_r0x00402391;
              }
              *pcVar15 = *pcVar15 + cVar45;
              pbVar13 = (byte *)CONCAT31(uVar26,cVar45 + '\x02');
              goto code_r0x00402368;
            }
            goto code_r0x00402366;
          }
          goto code_r0x00402342;
        }
        LOCK();
        pcVar15 = *(char **)puVar25;
        *(ushort **)puVar25 = puVar25;
        UNLOCK();
        *(byte *)((int)puVar41 + (int)pcVar15) =
             *(byte *)((int)puVar41 + (int)pcVar15) + (char)pcVar15;
        goto code_r0x00402317;
      }
      bVar54 = CARRY1(*pbVar13,(byte)pbVar13);
      *pbVar13 = *pbVar13 + (byte)pbVar13;
code_r0x004022f3:
      *(byte **)unaff_EDI = (byte *)((int)puVar40 + (uint)bVar54 + *(int *)unaff_EDI);
    }
  } while( true );
code_r0x0040254a:
  cVar29 = (char)pcVar15;
  *(char *)((int)pcVar15 * 2) = *(char *)((int)pcVar15 * 2) - cVar29;
  *pcVar15 = *pcVar15 + cVar29;
  pcVar9 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar29 + *pcVar15);
  *pcVar9 = *pcVar9 + cVar29 + *pcVar15;
  uStack_c = 0x4025;
  uVar59 = func_0x0f40255d();
  uVar50 = uStack_c;
code_r0x0040255d:
  uStack_c = uVar50;
  pcVar15 = (char *)((ulonglong)uVar59 >> 0x20);
  piVar24 = (int *)uVar59;
  *piVar24 = (int)((int)piVar24 + *piVar24);
  uVar35 = (undefined2)((uint)pbVar12 >> 0x10);
  uVar30 = SUB41(pbVar12,0);
  cVar7 = (char)((uint)pbVar12 >> 8) + (char)((ulonglong)uVar59 >> 0x28);
  pcVar9 = (char *)CONCAT22(uVar35,CONCAT11(cVar7,uVar30));
  *piVar24 = (int)((int)piVar24 + *piVar24);
  *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar59 >> 0x20);
  cVar29 = (char)uVar59;
  *(char *)piVar24 = (char)*piVar24 + cVar29;
  *(char *)piVar24 = (char)*piVar24 + cVar29;
  *(char *)piVar24 = (char)*piVar24 + cVar29;
  *pcVar15 = *pcVar15 + cVar29;
  *(char *)piVar24 = (char)*piVar24 + cVar29;
  *pcVar9 = *pcVar9 + cVar29;
  *(char *)piVar24 = (char)*piVar24 + cVar29;
  pcVar2 = (code *)swi(1);
  uVar59 = (*pcVar2)();
  pbVar31 = (byte *)((ulonglong)uVar59 >> 0x20);
  pbVar13 = (byte *)uVar59;
  bVar37 = *pbVar13;
  bVar6 = (byte)uVar59;
  *pbVar13 = *pbVar13 + bVar6;
  *pbVar31 = *pbVar31 + bVar6 + CARRY1(bVar37,bVar6);
  *pbVar13 = *pbVar13 + bVar6;
  *pbVar13 = *pbVar13 + bVar6;
  *pbVar13 = *pbVar13 + bVar6;
  *pbVar13 = *pbVar13 + bVar6;
  *pbVar13 = *pbVar13 + bVar6;
  *pbVar13 = *pbVar13 + bVar6;
  *pbVar13 = *pbVar13 + bVar6;
  *pbVar13 = *pbVar13 + bVar6;
  cVar29 = (char)((ulonglong)uVar59 >> 0x28);
  *pbVar13 = *pbVar13 + cVar29;
  bVar37 = *pbVar13;
  uVar26 = (undefined3)((ulonglong)uVar59 >> 8);
  pcVar15 = (char *)CONCAT31(uVar26,bVar6 + bVar37);
  *pcVar15 = *pcVar15 + cVar29;
  cVar29 = bVar6 + bVar37 + *pcVar15;
  pcVar15 = (char *)CONCAT31(uVar26,cVar29);
  cVar45 = (char)((ulonglong)uVar59 >> 0x20);
  *unaff_EDI = *unaff_EDI + cVar45;
  *pcVar15 = *pcVar15 + cVar29;
  *pcVar15 = *pcVar15 + cVar45;
  *pcVar15 = *pcVar15 + cVar29;
  *puVar47 = (uint)(*puVar47 + (int)puVar47);
  cVar7 = cVar7 + unaff_EBP[(int)pcVar15 * 4];
  pbVar12 = (byte *)CONCAT22(uVar35,CONCAT11(cVar7,uVar30));
  pbVar12[(int)pcVar15] = pbVar12[(int)pcVar15] + cVar29;
  *(byte *)puVar47 = (byte)*puVar47 - cVar29;
  *pbVar31 = *pbVar31 + (char)extraout_ECX;
  bVar6 = cVar29 - *pcVar15;
  pcVar15 = (char *)CONCAT31(uVar26,bVar6);
  *pbVar12 = *pbVar12 + cVar45;
  *pbVar31 = *pbVar31 ^ bVar6;
  *pbVar31 = *pbVar31 + cVar7;
  *pcVar15 = *pcVar15 + bVar6;
  cRam12110000 = cRam12110000 + bVar6;
  bVar37 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar6;
  pbVar13 = extraout_ECX;
  if (SCARRY1(bVar37,bVar6) != (char)*pbVar31 < '\0') {
code_r0x004025bd:
    *pcVar15 = *pcVar15 + (char)pcVar15;
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x12');
    *pcVar15 = *pcVar15 + (char)((uint)pbVar13 >> 8);
    pcVar15 = pcVar15 + -1;
    cVar29 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar29;
    bVar37 = (byte)((uint)pbVar12 >> 8) | unaff_EBP[-0x7b];
    pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(bVar37,(char)pbVar12));
    *pcVar15 = *pcVar15 + cVar29;
    cRam0000847d = cRam0000847d + (char)pbVar31;
    pbVar18 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar29 + '$');
    pbVar12[-0x7b] = pbVar12[-0x7b] + bVar37;
    pbVar17 = pbVar13;
code_r0x004025d8:
    bVar37 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar37;
    bVar54 = 0xf4 < bVar37;
    pcVar15 = (char *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar37 + 0xb);
    pbVar18 = unaff_EBP;
    do {
      bVar37 = (byte)pcVar15 + *pbVar17;
      uVar26 = (undefined3)((uint)pcVar15 >> 8);
      cVar29 = bVar37 + bVar54;
      cVar29 = cVar29 + *(char *)CONCAT31(uVar26,cVar29) +
               (CARRY1((byte)pcVar15,*pbVar17) || CARRY1(bVar37,bVar54));
      pcVar15 = (char *)CONCAT31(uVar26,cVar29);
      *(byte *)puVar47 = (byte)*puVar47 - cVar29;
      *pcVar15 = *pcVar15 + cVar29;
      iVar16 = *(int *)pbVar31;
      pbVar18[(int)pcVar15 * 4] = pbVar18[(int)pcVar15 * 4] + (char)((uint)pbVar12 >> 8);
      pcVar15[(int)pbVar18] = pcVar15[(int)pbVar18] + cVar29;
      pbVar42 = pbVar31 + (-1 - iVar16);
      *pcVar15 = *pcVar15 + cVar29;
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar17 >> 8) | *pbVar42) + unaff_EDI[0x22],
                                          (char)pbVar17));
      *pcVar15 = *pcVar15 + cVar29;
      bVar38 = (char)pbVar42 - pbVar31[1 - iVar16];
      bVar46 = cVar29 - 0xf;
      pbVar17 = (byte *)CONCAT31(uVar26,bVar46);
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar42 >> 0x10),
                                 CONCAT11((char)((uint)pbVar42 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar42 >> 8),bVar38) +
                                                   -0x3f),bVar38));
      bVar37 = *pbVar17;
      bVar6 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar46;
      uVar50 = uVar53;
      if (SCARRY1(bVar6,bVar46)) {
        pbVar17 = (byte *)CONCAT31(uVar26,bVar46 + pbVar17[(int)pbVar18] + CARRY1(bVar37,bVar46));
        goto code_r0x00402677;
      }
      pbVar12 = pbVar12 + -1;
      *pbVar17 = *pbVar17 + bVar46;
      uVar14 = *puVar47;
      *pbVar13 = *pbVar13 + 1;
      pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),(bVar38 | (byte)uVar14) - (byte)*puVar47
                                );
      puVar47 = (uint *)((int)puVar47 +
                        (-(uint)(bVar46 < *pbVar17) - *(int *)CONCAT31(uVar26,bVar46 - *pbVar17)));
      unaff_EBP = (byte *)CONCAT31(uVar26,bVar46 - *pbVar17);
      *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
      bVar6 = (byte)pbVar18;
      *(byte *)puVar47 = (byte)*puVar47 + bVar6;
      bVar37 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar6;
      *(byte **)unaff_EDI = pbVar31 + (uint)CARRY1(bVar37,bVar6) + *(int *)unaff_EDI;
      uVar26 = (undefined3)((uint)pbVar18 >> 8);
      bVar6 = bVar6 | *pbVar31;
      pcVar15 = (char *)CONCAT31(uVar26,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        *pcVar15 = *pcVar15 + bVar6;
        uVar59 = CONCAT44(pbVar31,pcVar15 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar15 = *pcVar15 + bVar6;
      bVar37 = bVar6 + 0xd;
      pbVar17 = (byte *)CONCAT31(uVar26,bVar37);
      *puVar47 = *puVar47 | (uint)pbVar31;
      if (-1 < (int)*puVar47) {
code_r0x00402678:
        *pbVar17 = *pbVar17 + (char)pbVar17;
        pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar13 >> 8) | bRam7d160243,(char)pbVar13)
                                  );
        pbVar18 = unaff_EDI;
code_r0x00402680:
        bVar37 = (byte)pbVar13;
        *pbVar13 = *pbVar13 + bVar37;
        uVar26 = (undefined3)((uint)pbVar13 >> 8);
        piVar24 = (int *)((int)pbVar18 * 2 + 0x400009a);
        *piVar24 = *piVar24 + CONCAT31(uVar26,bVar37 + 2) + (uint)(0xfd < bVar37);
        pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                   CONCAT11((char)((uint)pbVar12 >> 8) + *(char *)((int)pbVar31 * 5)
                                            ,(char)pbVar12));
        *(char *)((int)pbVar31 * 2) = *(char *)((int)pbVar31 * 2) + bVar37 + 2;
        unaff_EDI = (byte *)CONCAT31(uVar26,bVar37 + 4);
        *pbVar18 = *pbVar18 - (bVar37 + 4);
code_r0x00402697:
        *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
        pbVar31 = pbVar31 + -*puVar47;
        pbVar13 = unaff_EDI;
code_r0x0040269b:
        pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),
                                   (byte)pbVar12 | (byte)((uint)pbVar17 >> 8));
        uVar32 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar13 = uVar32;
        cVar29 = (char)pbVar13;
        *pbVar31 = *pbVar31 + cVar29;
        if ((POPCOUNT(*pbVar31) & 1U) == 0) {
          *pbVar13 = *pbVar13 + cVar29;
          pcVar15 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar29 + '\x13');
          pbVar13 = pbVar17;
          unaff_EDI = pbVar18;
code_r0x004026a8:
          uVar26 = (undefined3)((uint)pcVar15 >> 8);
          bVar6 = (byte)pcVar15 + 2 + cRam001b15fe + (0xfd < (byte)pcVar15);
          bVar37 = *pbVar12;
          bVar46 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar46;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar26,bVar6) + (uint)CARRY1(bVar37,bVar46);
          iVar16 = CONCAT31(uVar26,bVar6 + 2) + 0x917d + (uint)(0xfd < bVar6);
          cVar29 = (char)iVar16;
          uVar26 = (undefined3)((uint)iVar16 >> 8);
          bVar37 = cVar29 + 0x3a;
          pbVar42 = (byte *)CONCAT31(uVar26,bVar37);
          *pbVar42 = *pbVar42 + bVar37;
          uVar44 = (undefined3)((uint)pbVar31 >> 8);
          bVar6 = (byte)pbVar31 | *pbVar31;
          uVar19 = CONCAT31(uVar26,cVar29 + '8');
          uVar14 = uVar19 + 0x1b00001b;
          pcVar15 = (char *)(uVar14 + (1 < bVar37) + *puVar47 +
                            (uint)(0xe4ffffe4 < uVar19 || CARRY4(uVar14,(uint)(1 < bVar37))));
          bVar37 = bVar6 + *pbVar13;
          pbVar31 = (byte *)CONCAT31(uVar44,bVar37);
          uVar26 = (undefined3)((uint)pcVar15 >> 8);
          cVar29 = (char)pcVar15;
          if (SCARRY1(bVar6,*pbVar13) != (char)bVar37 < '\0') {
            *pcVar15 = *pcVar15 + cVar29;
            pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '\x02');
            uVar35 = (undefined2)((uint)pbVar12 >> 0x10);
            cVar7 = (char)((uint)pbVar12 >> 8) + pbVar12[-0x68];
            pbVar12 = (byte *)CONCAT22(uVar35,CONCAT11(cVar7,bVar46));
            *pcVar15 = *pcVar15 + cVar29 + '\x02';
            bVar6 = cVar29 + 0x2a;
            pbVar17 = (byte *)CONCAT31(uVar26,bVar6);
            *pbVar17 = *pbVar17 | bVar6;
            bVar37 = *pbVar12;
            cVar45 = (char)((uint)pbVar13 >> 8);
            *pbVar12 = *pbVar12 + cVar45;
            pbVar18 = unaff_EDI;
            if (SCARRY1(bVar37,cVar45) != (char)*pbVar12 < '\0') {
              *pbVar17 = *pbVar17 + bVar6;
              bVar37 = cVar29 + 0x2c;
              if ((POPCOUNT(bVar37) & 1U) == 0) {
                *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
                bVar6 = cVar29 + 0x59;
                pcVar15 = (char *)CONCAT31(uVar26,bVar6);
                *(char **)pbVar31 = pcVar15 + (uint)(0xd2 < bVar37) + *(int *)pbVar31;
                pbVar12 = (byte *)CONCAT22(uVar35,CONCAT11(cVar7 + pbVar12[-0x67],bVar46));
                *pcVar15 = *pcVar15 + bVar6;
                pbVar18 = (byte *)((CONCAT31(uVar26,cVar29 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar6));
                pbVar17 = pbVar13;
                uStack_10 = in_ES;
code_r0x00402700:
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar29 = (char)unaff_EDI + '\x02';
                pbVar13 = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar29);
                bVar54 = (POPCOUNT(cVar29) & 1U) == 0;
                unaff_EDI = pbVar42;
code_r0x00402704:
                if (bVar54) {
                  *pbVar13 = *pbVar13 + (char)pbVar13;
                  cVar29 = (char)pbVar13 + '\x02';
                  pcVar15 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar29);
                  puVar11 = puVar47;
                  if ((POPCOUNT(cVar29) & 1U) == 0) {
code_r0x0040270c:
                    uVar52 = in_ES;
                    cVar29 = (char)pcVar15;
                    *pcVar15 = *pcVar15 + cVar29;
                    uVar26 = (undefined3)((uint)pcVar15 >> 8);
                    bVar37 = cVar29 + 0x6f;
                    piVar24 = (int *)CONCAT31(uVar26,bVar37);
                    iVar16 = *piVar24;
                    *(byte *)piVar24 = (char)*piVar24 + bVar37;
                    in_ES = uVar52;
                    pbVar13 = pbVar31;
                    if ((char)*piVar24 != '\0' &&
                        SCARRY1((char)iVar16,bVar37) == (char)*piVar24 < '\0') {
                      *(byte *)piVar24 = (char)*piVar24 + bVar37;
                      bVar6 = cVar29 + 0x9c;
                      piVar24 = (int *)CONCAT31(uVar26,bVar6);
                      puVar40 = puVar11 + (int)pbVar18 * 2;
                      uVar14 = *puVar40;
                      uVar19 = *puVar40;
                      *puVar40 = (uint)(pbVar31 + uVar19 + (0xd2 < bVar37));
                      *piVar24 = (*piVar24 - (int)piVar24) -
                                 (uint)(CARRY4(uVar14,(uint)pbVar31) ||
                                       CARRY4((uint)(pbVar31 + uVar19),(uint)(0xd2 < bVar37)));
                      uVar14 = *puVar11;
                      *(byte *)puVar11 = (byte)*puVar11 + bVar6;
                      pbVar13 = (byte *)CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar52);
                      if (!CARRY1((byte)uVar14,bVar6)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    unaff_EDI = pbVar13;
                    uVar50 = uStack_10;
                    *(byte *)piVar24 = (char)*piVar24 + (byte)piVar24;
                    uVar26 = (undefined3)((uint)piVar24 >> 8);
                    bVar37 = (byte)piVar24 | *(byte *)((int)piVar24 + 0x400000d);
                    pcVar15 = (char *)CONCAT31(uVar26,bVar37);
                    if ((char)bVar37 < '\x01') {
                      bVar54 = pcVar15 < (char *)0x6fe1411;
                      pcVar15 = pcVar15 + -0x6fe1411;
                    }
                    else {
                      *pcVar15 = *pcVar15 + bVar37;
                      bVar46 = bVar37 + 0x28;
                      puVar40 = (uint *)CONCAT31(uVar26,bVar46);
                      *puVar40 = *puVar40 | (uint)puVar40;
                      bVar6 = *pbVar12;
                      cVar29 = (char)((uint)pbVar17 >> 8);
                      *pbVar12 = *pbVar12 + cVar29;
                      if (*pbVar12 == 0 || SCARRY1(bVar6,cVar29) != (char)*pbVar12 < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar40 = (char)*puVar40 + bVar46;
                      pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x55);
                      puVar40 = puVar11 + (int)pbVar18 * 2;
                      bVar54 = CARRY4(*puVar40,(uint)pbVar31) ||
                               CARRY4((uint)(pbVar31 + *puVar40),(uint)(0xd2 < bVar46));
                      *puVar40 = (uint)(pbVar31 + *puVar40 + (0xd2 < bVar46));
                      in_stack_ffffffe8 = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar26 = (undefined3)((uint)pcVar15 >> 8);
                      bVar37 = ((char)pcVar15 - *pcVar15) - bVar54;
                      puVar40 = (uint *)CONCAT31(uVar26,bVar37);
                      uVar14 = *puVar11;
                      *(byte *)puVar11 = (byte)*puVar11 + bVar37;
                      if (CARRY1((byte)uVar14,bVar37)) break;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),
                                                 (byte)pbVar12 | (byte)((uint)pbVar31 >> 8));
                      pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 2);
                      while( true ) {
                        uVar50 = (ushort)unaff_EDI;
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar29 = (char)pcVar15;
                        *pcVar15 = *pcVar15 + cVar29;
                        uVar26 = (undefined3)((uint)pcVar15 >> 8);
                        bVar37 = cVar29 + 2;
                        pcVar15 = (char *)CONCAT31(uVar26,bVar37);
                        if (SCARRY1(cVar29,'\x02') != (char)bVar37 < '\0') break;
                        *pcVar15 = *pcVar15 + bVar37;
                        cVar7 = (char)pbVar31;
                        *pbVar18 = *pbVar18 - cVar7;
                        *pbVar31 = *pbVar31 + (char)pbVar17;
                        bVar6 = (cVar29 + '\t') - *(char *)CONCAT31(uVar26,cVar29 + '\t');
                        pbVar13 = (byte *)CONCAT31(uVar26,bVar6);
                        bVar37 = *pbVar13;
                        *pbVar13 = *pbVar13 + bVar6;
                        pbVar42 = pbVar17 + 1;
                        cVar29 = bVar6 - CARRY1(bVar37,bVar6);
                        pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                        *pcVar15 = *pcVar15 + cVar29;
                        *pcVar15 = *pcVar15 + cVar29;
                        *pcVar15 = *pcVar15 + cVar29;
                        *pcVar15 = *pcVar15 + cVar29;
                        cVar45 = (char)((uint)pbVar42 >> 8);
                        pbVar17[2] = pbVar17[2] + cVar45;
                        *pcVar15 = *pcVar15 + cVar29;
                        pcVar15 = (char *)(*(int *)pbVar42 * 0x170000);
                        *pcVar15 = *pcVar15;
                        *pcVar15 = *pcVar15;
                        *pbVar42 = *pbVar42;
                        uVar35 = (undefined2)((uint)pbVar12 >> 0x10);
                        cVar29 = (char)pbVar12;
                        bVar46 = (char)((uint)pbVar12 >> 8) + *(char *)((int)pbVar31 * 5);
                        pbVar12 = (byte *)CONCAT22(uVar35,CONCAT11(bVar46,cVar29));
                        pbVar12[(int)pcVar15] = pbVar12[(int)pcVar15];
                        *pcVar15 = *pcVar15 - cVar29;
                        *pbVar31 = *pbVar31 + (char)pbVar42;
                        uVar26 = (undefined3)((uint)pcVar15 >> 8);
                        bVar6 = -*pcVar15;
                        pbVar13 = (byte *)CONCAT31(uVar26,bVar6);
                        *pbVar12 = *pbVar12 + cVar7;
                        *pbVar31 = *pbVar31 ^ bVar6;
                        *pbVar31 = *pbVar31 + bVar6;
                        *pbVar13 = *pbVar13 + bVar6;
                        bVar37 = *pbVar13;
                        *pbVar13 = *pbVar13 + bVar6;
                        *(byte **)pbVar31 = pbVar31 + (uint)CARRY1(bVar37,bVar6) + *(int *)pbVar31;
                        bVar37 = *pbVar31;
                        *pbVar31 = *pbVar31 + bVar6;
                        if (SCARRY1(bVar37,bVar6) == (char)*pbVar31 < '\0') {
                          pcVar15 = (char *)((uint)pbVar13 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar15 = *pcVar15 + (char)pcVar15;
                          uStack_c = uVar53;
                          uStack_10 = (ushort)uStack_8;
                        }
                        else {
                          *pbVar13 = *pbVar13 + bVar6;
                          cVar8 = bVar6 + 0x12;
                          pcVar15 = (char *)CONCAT31(uVar26,cVar8);
                          bVar37 = *pbVar12;
                          *pbVar12 = *pbVar12 + cVar8;
                          uStack_10 = uVar50;
                          if (SCARRY1(bVar37,cVar8) != (char)*pbVar12 < '\0') {
                            *pcVar15 = *pcVar15 + cVar8;
                            cVar8 = bVar6 + 0x24;
                            pcVar15 = (char *)CONCAT31(uVar26,cVar8);
                            *pcVar15 = *pcVar15 + cVar45;
                            pbVar13 = (byte *)CONCAT13(uStack_9,(uint3)uVar53);
                            *pcVar15 = *pcVar15 + cVar8;
                            bVar46 = bVar46 | unaff_EBP[-0x6e];
                            pcVar9 = (char *)CONCAT22(uVar35,CONCAT11(bVar46,cVar29));
                            *pcVar15 = *pcVar15 + cVar8;
                            cRam0000917d = cRam0000917d + cVar7;
                            bVar38 = bVar6 + 0x48;
                            pcVar9[-0x6e] = pcVar9[-0x6e] + bVar46;
                            *(char *)CONCAT31(uVar26,bVar38) =
                                 *(char *)CONCAT31(uVar26,bVar38) + bVar38;
                            bVar37 = bVar6 + 0x53 + *pbVar13;
                            cVar29 = bVar37 + (0xf4 < bVar38);
                            cVar29 = cVar29 + *(char *)CONCAT31(uVar26,cVar29) +
                                     (CARRY1(bVar6 + 0x53,*pbVar13) || CARRY1(bVar37,0xf4 < bVar38))
                            ;
                            pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                            *pcVar9 = *pcVar9 - (char)uVar53;
                            *pcVar15 = *pcVar15 + cVar29;
                            pbVar31 = pbVar31 + -*(int *)pbVar31;
                            *(char *)((int)pbVar31 * 5) = *(char *)((int)pbVar31 * 5) + bVar46;
                            pcVar15[(int)unaff_EBP] = pcVar15[(int)unaff_EBP] + cVar29;
                            *pcVar15 = *pcVar15 + cVar29;
                            bVar6 = (byte)(uVar53 >> 8) | *pbVar31;
                            uVar30 = (undefined1)uStack_8;
                            cVar45 = (char)((uint)uStack_8 >> 8) + *(char *)(uStack_8 + 0xf);
                            *pcVar15 = *pcVar15 + cVar29;
                            bVar37 = cVar29 + 0x2aU & *pbVar31;
                            iVar16 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar26,bVar37) =
                                 *(char *)CONCAT31(uVar26,bVar37) + bVar37;
                            pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x2a);
                            cVar45 = cVar45 + *(char *)(CONCAT22(uStack_8._2_2_,
                                                                 CONCAT11(cVar45,uVar30)) + 0x10);
                            *pcVar15 = *pcVar15 + bVar37 + 0x2a;
                            bVar37 = bVar37 + 0x54 & *pbVar31;
                            iVar10 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar26,bVar37) =
                                 *(char *)CONCAT31(uVar26,bVar37) + bVar37;
                            pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x2a);
                            puVar41 = (uint *)CONCAT22(uStack_8._2_2_,
                                                       CONCAT11(cVar45 + *(char *)(CONCAT22(uStack_8
                                                  ._2_2_,CONCAT11(cVar45,uVar30)) + 0x11),uVar30));
                            *pcVar15 = *pcVar15 + bVar37 + 0x2a;
                            bVar37 = bVar37 + 0x54 & *pbVar31;
                            puVar47 = (uint *)(pbVar18 +
                                              *(int *)(unaff_EBP + 0x11) + iVar10 + iVar16);
                            *(char *)CONCAT31(uVar26,bVar37) =
                                 *(char *)CONCAT31(uVar26,bVar37) + bVar37;
                            pbVar12 = (byte *)CONCAT31(uVar26,bVar37 + 0x2a);
                            puVar40 = (uint *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                                       CONCAT11(bVar6 + *pbVar12,(char)uVar53));
                            uVar59 = CONCAT44(pbVar31,pbVar12 + (uint)CARRY1(bVar6,*pbVar12) +
                                                                *(int *)pbVar12);
                            uVar53 = uVar50;
                            goto code_r0x00402866;
                          }
                        }
                        cVar29 = (char)pcVar15;
                        uVar26 = (undefined3)((uint)pcVar15 >> 8);
                        cVar45 = cVar29 + '\x02';
                        piVar24 = (int *)CONCAT31(uVar26,cVar45);
                        pbVar17 = pbVar42;
                        in_ES = uVar50;
                        pbVar13 = pbVar31;
                        if (SCARRY1(cVar29,'\x02') != cVar45 < '\0') goto code_r0x00402724;
                        *(char *)piVar24 = (char)*piVar24 + cVar45;
                        pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '\n');
                        *(byte *)puVar11 = (byte)*puVar11 - cVar7;
                        *pbVar31 = *pbVar31 + (char)pbVar42;
                      }
                      pbVar13 = unaff_EBP + 0x6fe1411;
                      bVar54 = CARRY1(*pbVar13,bVar37);
                      *pbVar13 = *pbVar13 + bVar37;
                    }
                    goto code_r0x00402746;
                  }
                  pbVar12[(int)pbVar31] = pbVar12[(int)pbVar31] + cVar29;
                  pbVar13 = pbVar17;
                  unaff_EDI = pbVar18;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar52 = 0x927c;
              in_stack_ffffffe0 = 0x40268f;
              uVar59 = func_0x02040000(in_CS,in_stack_ffffffe8,pbVar42);
              pbVar31 = (byte *)((ulonglong)uVar59 >> 0x20);
              *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
              pbVar17 = (byte *)CONCAT31((int3)((ulonglong)uVar59 >> 8),(char)uVar59 + '\x12');
              pbVar13 = extraout_ECX_00;
              in_CS = uVar52;
            }
            goto code_r0x00402680;
          }
          pbVar18 = unaff_EBP + -1;
          *pcVar15 = *pcVar15 + cVar29;
          pbVar31 = (byte *)CONCAT31(uVar44,bVar37 | *pbVar12);
          pbVar17 = (byte *)CONCAT31(uVar26,cVar29 + ':');
code_r0x00402677:
          puVar47 = (uint *)((int)puVar47 + -1);
          unaff_EBP = pbVar18;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar17 = *pbVar17 + bVar37;
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar12 >> 8) | unaff_EBP[-0x6b],
                                          (char)pbVar12));
      *pbVar17 = *pbVar17 + bVar37;
      cVar29 = bVar6 + 0xf;
      pcVar15 = (char *)CONCAT31(uVar26,cVar29);
      uStack_8 = CONCAT22(uStack_8._2_2_,uStack_c);
      if (SCARRY1(bVar37,'\x02') == cVar29 < '\0') {
        pcVar15 = pcVar15 + (0xfd < bVar37) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar15 = *pcVar15 + cVar29;
      cVar45 = bVar6 + 0x11;
      pbVar18 = (byte *)CONCAT31(uVar26,cVar45);
      uVar59 = CONCAT44(pbVar31,pbVar18);
      uStack_8 = CONCAT22(uStack_8._2_2_,uStack_c);
      pbVar17 = pbVar13;
      pbVar13 = unaff_EDI;
      if (SCARRY1(cVar29,'\x02') == cVar45 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar18 = *pbVar18 + (char)pbVar18;
      bVar37 = (char)pbVar18 + 2;
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar37);
      if ((POPCOUNT(bVar37) & 1U) == 0) {
        *pcVar15 = *pcVar15 + bVar37;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar18 = pbVar12 + (int)pbVar17;
      bVar54 = CARRY1(*pbVar18,bVar37);
      *pbVar18 = *pbVar18 + bVar37;
      pbVar18 = unaff_EBP;
      unaff_EDI = pbVar13;
      uVar53 = uVar50;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar40 = (char)*puVar40 + (byte)puVar40;
  uVar26 = (undefined3)((uint)puVar40 >> 8);
  bVar37 = (byte)puVar40 | *(byte *)((int)puVar40 + 0x400000e);
  pcVar15 = (char *)CONCAT31(uVar26,bVar37);
  puVar47 = puVar11;
  if ('\0' < (char)bVar37) {
    *pcVar15 = *pcVar15 + bVar37;
    bVar37 = bVar37 + 0x28 | *(byte *)CONCAT31(uVar26,bVar37 + 0x28);
    *pbVar12 = *pbVar12 + (char)((uint)pbVar17 >> 8);
    puVar47 = puVar11 + 1;
    out(*puVar11,(short)pbVar31);
    *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
    pcVar15 = (char *)(uint)(bVar37 | *pbVar31);
    in_stack_ffffffe8 = unaff_EBP;
  }
  bVar37 = (byte)pcVar15 & 0x7b;
  bVar54 = (char)(bVar37 + 0x17) < '\0';
  uStack_10 = uVar52;
  if (SCARRY1(bVar37,'\x17') == bVar54) {
    pbVar42 = unaff_EDI;
    if (SCARRY1(bVar37,'\x17') != bVar54) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar45 = (char)unaff_EDI;
  *unaff_EDI = *unaff_EDI + cVar45;
  iVar28 = (int3)((uint)unaff_EDI >> 8);
  cVar29 = cVar45 + '\x02';
  pbVar13 = (byte *)CONCAT31(iVar28,cVar29);
  bVar54 = (POPCOUNT(cVar29) & 1U) == 0;
  if (!bVar54) goto code_r0x00402704;
  *pbVar13 = *pbVar13 + cVar29;
  cVar45 = cVar45 + '\x04';
  pcVar15 = (char *)CONCAT31(iVar28,cVar45);
  if ((POPCOUNT(cVar45) & 1U) == 0) {
    *pcVar15 = *pcVar15 + cVar45;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar31 = (byte *)((int)iVar28 >> 0x17);
  puVar11 = puVar47;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar43 = (uint *)((ulonglong)uVar59 >> 0x20);
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
    cVar29 = (char)puVar41 - (byte)*puVar11;
    iVar16 = CONCAT22((short)((uint)puVar41 >> 0x10),
                      CONCAT11((char)((uint)puVar41 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),cVar29) + 0x12),cVar29)
                     );
    *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
    uVar26 = (undefined3)((ulonglong)uVar59 >> 8);
    bVar37 = (char)uVar59 + 0x2aU & (byte)*puVar43;
    pcVar15 = (char *)CONCAT31(uVar26,bVar37);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x12));
    *pcVar15 = *pcVar15 + bVar37;
    puVar21 = (uint *)CONCAT31(uVar26,bVar37 + 0x2a);
    pbVar13 = (byte *)(uint)uVar53;
get_Value:
    cVar29 = *(char *)(iVar16 + 0x13);
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    uVar26 = (undefined3)((uint)puVar21 >> 8);
    bVar37 = (char)puVar21 + 0x2aU & (byte)*puVar43;
    pcVar15 = (char *)CONCAT31(uVar26,bVar37);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x13));
    *pcVar15 = *pcVar15 + bVar37;
    pbVar12 = (byte *)CONCAT31(uVar26,bVar37 + 0x2a);
    uVar14 = (uint)uVar53;
    bVar37 = (byte)((uint)puVar40 >> 8);
    bVar6 = bVar37 + *pbVar12;
    pbVar12 = pbVar12 + (uint)CARRY1(bVar37,*pbVar12) + *(int *)pbVar12;
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
    puVar41 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar16 >> 0x10),
                                               CONCAT11((char)((uint)iVar16 >> 8) + cVar29,
                                                        (char)iVar16)) >> 8),
                               (char)iVar16 - (byte)*puVar11);
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11(bVar6 + *pbVar12,(char)puVar40));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar6,*pbVar12) + *(int *)pbVar12;
code_r0x00402898:
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
    bVar37 = (byte)puVar43;
    uVar35 = CONCAT11((char)((uint)puVar43 >> 8) - (byte)*puVar11,bVar37);
    pbVar31 = (byte *)CONCAT22((short)((uint)puVar43 >> 0x10),uVar35);
    pcVar15 = (char *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((char)((uint)puVar41 >> 8) + (byte)puVar41[-0x19],
                                        (char)puVar41));
    *pbVar12 = *pbVar12 + (char)pbVar12;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + '\x03');
    puVar41 = puVar11;
    do {
      puVar11 = puVar41 + 1;
      out(*puVar41,uVar35);
      pcVar15 = pcVar15 + -1;
      bVar6 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar6;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((byte)((uint)puVar40 >> 8) | *pbVar31,(char)puVar40));
      *pbVar12 = *pbVar12 + bVar6;
      *pcVar15 = *pcVar15 + bVar37;
      *(byte *)((int)pbVar12 * 2) = *(byte *)((int)pbVar12 * 2) ^ bVar6;
      *pbVar12 = *pbVar12 + bVar6;
      *pbVar12 = *pbVar12 | bVar6;
      bVar54 = CARRY1((byte)*puVar40,bVar37);
      *(byte *)puVar40 = (byte)*puVar40 + bVar37;
      cVar29 = bVar6 + 10 + bVar54;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar29);
      puVar41 = puVar11;
    } while (bVar6 < 0xf6 && !CARRY1(bVar6 + 10,bVar54));
    *pbVar12 = *pbVar12 + cVar29;
    in_stack_ffffffe0 = CONCAT22((short)((uint)in_stack_ffffffe0 >> 0x10),uVar50);
    pcVar9 = (char *)((uint)pbVar12 | *puVar47);
    puVar41 = (uint *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                               CONCAT11((char)((uint)pcVar15 >> 8) + unaff_EBP[-100],(char)pcVar15))
    ;
    *pcVar9 = *pcVar9 + (char)pcVar9;
    bVar37 = (char)pcVar9 + 7;
    uVar59 = CONCAT44(pbVar31,CONCAT31((int3)((uint)pcVar9 >> 8),bVar37));
code_r0x004028c8:
    puVar43 = (uint *)((ulonglong)uVar59 >> 0x20);
  } while ((POPCOUNT(bVar37) & 1U) != 0);
  *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
  puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar59 >> 8),(char)uVar59 + '-');
  puVar11 = (uint *)((uint)puVar11 | *(uint *)((int)puVar43 + 0x3b));
  bVar54 = CARRY4(*puVar21,(uint)puVar21);
  uVar19 = *puVar21;
  *puVar21 = (uint)(*puVar21 + (int)puVar21);
  if (SCARRY4(uVar19,(int)puVar21)) {
    bVar54 = CARRY4(*puVar21,(uint)puVar21);
    bVar56 = SCARRY4(*puVar21,(int)puVar21);
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    bVar37 = POPCOUNT(*puVar21 & 0xff);
    if (bVar56) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + bVar54);
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
    bVar54 = (POPCOUNT((byte)*puVar43) & 1U) == 0;
    if (bVar54) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar54) {
      iVar16 = CONCAT31((int3)((uint)puVar41 >> 8),(char)puVar41 - (byte)*puVar11);
      goto get_Value;
    }
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'r');
    pbVar13 = unaff_EBP;
code_r0x004028e2:
    uVar35 = (undefined2)((uint)in_stack_ffffffe0 >> 0x10);
    uVar19 = *puVar21;
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    if (SCARRY4(uVar19,(int)puVar21)) {
      if (*puVar21 == 0 || SCARRY4(uVar19,(int)puVar21) != (int)*puVar21 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar41 = (uint *)((int)puVar41 + -1);
    cVar29 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar29;
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) |
                                        *(byte *)((int)puVar40 + 0x16d7207),(char)puVar40));
    pbVar12 = (byte *)((int)puVar21 + 0x7d);
    bVar37 = *pbVar12;
    bVar46 = (byte)((uint)puVar43 >> 8);
    bVar6 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar46;
    uVar14 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar6,bVar46) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar12 < '\0') * 0x80 | (uint)(*pbVar12 == 0) * 0x40 |
             (uint)(bVar55 & 1) * 0x10 | (uint)((POPCOUNT(*pbVar12) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar37,bVar46);
    *(byte *)puVar21 = (byte)*puVar21 + cVar29;
    pbVar12 = (byte *)(CONCAT31((int3)((uint)puVar21 >> 8),cVar29 + '+') ^ *puVar47);
    if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar37 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar37;
    puVar21 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar37 + 0x72);
    if (bVar37 < 0x8e && (byte)(bVar37 + 0x72) != '\0') {
      if (SCARRY1(bVar37,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar21 + 0x6f) = *(byte *)((int)puVar21 + 0x6f) + bVar46;
    }
code_r0x00402905:
    uVar59 = CONCAT44(puVar43,puVar21);
    puVar41 = (uint *)((int)puVar41 + -1);
    cVar29 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar29;
    bVar37 = (byte)((uint)puVar40 >> 8) | (byte)*puVar40;
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar37,(char)puVar40));
    uVar50 = (ushort)uVar14;
    if ((char)bVar37 < '\x01') {
      *(byte *)puVar21 = (byte)*puVar21 + cVar29;
      puVar47 = (uint *)((int)puVar47 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar21 = (byte)*puVar21 + cVar29;
    uVar14 = 0x40291c;
    uVar59 = func_0x7346291c();
    *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
    puVar40 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar59 >> 0x20));
    puStackY_3c = (uint *)CONCAT22(puStackY_3c._2_2_,uVar50);
    uStackY_38 = puVar41;
    while( true ) {
      pcVar15 = (char *)((int)uVar59 * 2);
      *pcVar15 = *pcVar15 - (char)puVar40;
      uVar19 = *puVar41;
      cVar29 = (char)((uint)puVar40 >> 8);
      *(byte *)puVar41 = (byte)*puVar41 + cVar29;
      if (SCARRY1((byte)uVar19,cVar29) == (char)(byte)*puVar41 < '\0') {
        pbVar12 = (byte *)((int)puVar47 + (int)uVar59);
        *pbVar12 = *pbVar12 + (char)uVar59;
        bVar37 = *pbVar12;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar43 = (uint *)((ulonglong)uVar59 >> 0x20);
      cVar29 = (char)uVar59;
      *(char *)uVar59 = *(char *)uVar59 + cVar29;
      uVar26 = (undefined3)((ulonglong)uVar59 >> 8);
      bVar37 = cVar29 + 7;
      puVar21 = (uint *)CONCAT31(uVar26,bVar37);
      bVar6 = (byte)((ulonglong)uVar59 >> 0x28);
      if ((POPCOUNT(bVar37) & 1U) != 0) break;
      *(byte *)puVar21 = (byte)*puVar21 + bVar37;
      pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '3');
      uVar35 = (undefined2)((uint)puVar41 >> 0x10);
      uVar30 = SUB41(puVar41,0);
      bVar37 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar11 + 0x16) + (0xd3 < bVar37);
      puVar41 = (uint *)CONCAT22(uVar35,CONCAT11(bVar37,uVar30));
      *pcVar15 = *pcVar15 + cVar29 + '3';
      cVar45 = cVar29 + ':';
      puVar21 = (uint *)CONCAT31(uVar26,cVar45);
      if ((POPCOUNT(cVar45) & 1U) != 0) {
        bVar37 = bVar37 | *(byte *)((int)puVar43 + 7);
        puVar41 = (uint *)CONCAT22(uVar35,CONCAT11(bVar37,uVar30));
        bVar54 = (POPCOUNT(bVar37) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar21 = (byte)*puVar21 + cVar45;
      puVar21 = (uint *)(CONCAT31(uVar26,cVar29 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar12 = (byte *)((int)puVar21 + 0x72);
      bVar56 = SCARRY1(*pbVar12,bVar6);
      *pbVar12 = *pbVar12 + bVar6;
      bVar37 = POPCOUNT(*pbVar12);
code_r0x0040294c:
      if ((bVar37 & 1) == 0) {
        *(byte *)((int)puVar21 + 0x72) = *(byte *)((int)puVar21 + 0x72) + (char)((uint)puVar43 >> 8)
        ;
      }
      else if (bVar56) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar29 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_40 = (uint *)CONCAT22(puStackY_40._2_2_,uStack_c);
code_r0x00402957:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      cVar29 = (char)puVar21 + '(';
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),cVar29);
      *(byte *)puVar21 = (byte)*puVar21 + cVar29;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((byte)((uint)puVar40 >> 8) | (byte)*puVar21,(char)puVar40)
                                );
      *(byte *)puVar21 = (byte)*puVar21 + cVar29;
      puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                 CONCAT11((byte)((uint)puVar43 >> 8) | (byte)puVar41[0x18],
                                          (char)puVar43));
      puVar11 = puStackY_40;
      puVar47 = puStackY_3c;
code_r0x00402966:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      bVar37 = (byte)((uint)puVar41 >> 8) | *(byte *)((int)puVar43 + 7);
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar37,(char)puVar41));
      if ((POPCOUNT(bVar37) & 1U) != 0) {
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + '~');
code_r0x00402971:
      uVar14 = (uint)uStack_c;
code_r0x00402972:
      uVar35 = (undefined2)((uint)in_stack_ffffffe0 >> 0x10);
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402974:
      bVar37 = 0xe9 < (byte)puVar21;
      in_stack_ffffffe0 = CONCAT22(uVar35,in_CS);
      in_CS = 0x2d0a;
      uVar59 = func_0x00006128(in_stack_ffffffe0);
      puVar40 = (uint *)uVar59;
      piVar24 = (int *)((int)((ulonglong)uVar59 >> 0x20) + -0x3d);
      *piVar24 = (int)((int)puVar11 + (uint)bVar37 + *piVar24);
      bVar54 = SCARRY4(*puVar40,(int)puVar40);
      *puVar40 = *puVar40 + (int)puVar40;
      uVar19 = *puVar40;
      puVar40 = extraout_ECX_02;
code_r0x00402982:
      bVar37 = POPCOUNT(uVar19 & 0xff);
      if (bVar54) {
        *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
        puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                   CONCAT11((byte)((uint)puVar40 >> 8) |
                                            *(byte *)((ulonglong)uVar59 >> 0x20),(char)puVar40));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar15 = (char *)((ulonglong)uVar59 >> 0x20);
      if ((bVar37 & 1) == 0) {
        *(char *)uVar59 = *(char *)uVar59 + (char)uVar59;
        *pcVar15 = *pcVar15 + (char)puVar40;
        uVar59 = CONCAT44(CONCAT22((short)((ulonglong)uVar59 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar59 >> 0x28) - pcVar15[0x1f],
                                            (char)((ulonglong)uVar59 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar59 >> 8),(char)uVar59 + '('));
code_r0x00402991:
        puVar43 = (uint *)((ulonglong)uVar59 >> 0x20);
        pbVar12 = (byte *)uVar59;
        bVar37 = (byte)uVar59;
        bVar54 = CARRY1(bVar37,*pbVar12);
        puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar59 >> 8),bVar37 + *pbVar12);
        cVar29 = bVar37 + *pbVar12;
        if (SCARRY1(bVar37,*pbVar12)) goto code_r0x004029c4;
code_r0x00402995:
        puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                   CONCAT11(((char)((uint)puVar43 >> 8) -
                                            *(byte *)((int)puVar43 + 0x6b)) - bVar54,(char)puVar43))
        ;
        bVar37 = (byte)puVar21;
        bVar54 = CARRY1(bVar37,(byte)*puVar21);
        bVar56 = SCARRY1(bVar37,(byte)*puVar21);
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar37 + (byte)*puVar21);
        do {
          if (!bVar56) {
            puVar11 = (uint *)((int)puVar11 + (uint)bVar54 + *puVar21);
            pbVar12 = (byte *)((int)puVar21 + *puVar21);
            bVar6 = (byte)pbVar12;
            *pbVar12 = *pbVar12 + bVar6;
            *(byte *)puVar40 = (byte)*puVar40 + (char)puVar40;
            bVar37 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar6;
            *puVar47 = (uint)((int)puVar41 + (uint)CARRY1(bVar37,bVar6) + *puVar47);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar40;
            uVar26 = (undefined3)((uint)pbVar12 >> 8);
            bVar6 = bVar6 | (byte)*puVar11;
            puVar21 = (uint *)CONCAT31(uVar26,bVar6);
            uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uStack_c);
            uVar1 = *puVar21;
            uVar19 = *puVar21;
            *puVar21 = (uint)(*puVar21 + (int)puVar21);
            if (SCARRY4(uVar19,(int)puVar21)) {
              *(byte *)puVar11 = (byte)*puVar11 - (char)puVar41;
              *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
              *(byte *)puVar47 = (byte)*puVar47 - (char)puVar41;
            }
            else {
              puStackY_3c = (uint *)CONCAT22(puStackY_3c._2_2_,uVar50);
              uStack_c = uVar50;
              if (CARRY4(uVar1,(uint)puVar21)) goto code_r0x00402971;
              bVar54 = CARRY1(bVar6,(byte)*puVar21);
              bVar56 = SCARRY1(bVar6,(byte)*puVar21);
              puVar21 = (uint *)CONCAT31(uVar26,bVar6 + (byte)*puVar21);
code_r0x004029be:
              if (!bVar56) {
                puStackY_3c = (uint *)CONCAT22(puStackY_3c._2_2_,uVar50);
                *(byte *)((int)puVar43 + -0x37) =
                     (*(byte *)((int)puVar43 + -0x37) - (char)((uint)puVar43 >> 8)) - bVar54;
                cVar29 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar29;
                bVar37 = (byte)puVar21;
                bVar54 = CARRY1(bVar37,(byte)*puVar21);
                bVar56 = SCARRY1(bVar37,(byte)*puVar21);
                puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar37 + (byte)*puVar21);
                goto code_r0x004029c6;
              }
            }
            bVar37 = (byte)puVar40;
            bVar54 = CARRY1((byte)*puVar43,bVar37);
            bVar56 = SCARRY1((byte)*puVar43,bVar37);
            *(byte *)puVar43 = (byte)*puVar43 + bVar37;
            if (bVar54) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar56) {
            uVar50 = (ushort)pbVar13;
            goto code_r0x00402966;
          }
          uVar14 = (uint)uVar50;
          *(uint *)((int)puVar43 + -0x23) =
               (*(int *)((int)puVar43 + -0x23) - (int)puVar11) - (uint)bVar54;
          uVar19 = *puVar21;
          bVar6 = (byte)puVar21;
          uVar1 = *puVar21;
          uVar26 = (undefined3)((uint)puVar21 >> 8);
          bVar37 = bVar6 + (byte)*puVar21;
          puVar21 = (uint *)CONCAT31(uVar26,bVar37);
          if (SCARRY1(bVar6,(byte)uVar1)) goto code_r0x00402972;
          in_stack_ffffffe0 = CONCAT22((short)((uint)in_stack_ffffffe0 >> 0x10),uVar50);
          cVar29 = (char)puVar43;
          bVar46 = ((char)((uint)puVar43 >> 8) - *(byte *)((int)puVar43 + -0xf)) -
                   CARRY1(bVar6,(byte)uVar19);
          puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar46,cVar29));
          puVar48 = (uint *)CONCAT31(uVar26,bVar37 + (byte)*puVar21);
          bVar6 = (byte)puVar40;
          if (SCARRY1(bVar37,(byte)*puVar21)) {
            *(byte *)puVar43 = (byte)*puVar43 + bVar6;
            uVar59 = CONCAT44(puVar43,(int)puVar48 + -0x1c37211);
            pcVar15 = (char *)((int)puVar48 + -0x1c3720a);
            *pcVar15 = *pcVar15 + bVar46;
            bVar37 = POPCOUNT(*pcVar15);
            goto code_r0x00402984;
          }
          puVar11 = (uint *)((int)puVar11 +
                            (-(uint)CARRY1(bVar37,(byte)*puVar21) - *(int *)((int)puVar43 + 5)));
          bVar54 = SCARRY4((int)puVar48,*puVar48);
          uVar19 = (int)puVar48 + *puVar48;
          uVar59 = CONCAT44(puVar43,uVar19);
          if (bVar54) goto code_r0x00402982;
          bVar37 = (byte)uVar19 + 0x8e;
          uVar20 = CONCAT31((int3)(uVar19 >> 8),bVar37 - CARRY4((uint)puVar48,*puVar48));
          *puVar41 = (*puVar41 - uVar20) -
                     (uint)((byte)uVar19 < 0x72 || bVar37 < CARRY4((uint)puVar48,*puVar48));
          pbVar12 = (byte *)(uVar20 - 0x5e);
          bVar37 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar46;
          uVar19 = (uint)CARRY1(bVar37,bVar46);
          uVar1 = uVar20 - 0x32d72;
          puVar21 = (uint *)(uVar1 - uVar19);
          if (SBORROW4(uVar20,0x32d72) != SBORROW4(uVar1,uVar19)) goto code_r0x00402992;
          uVar52 = uVar53;
          if (uVar20 < 0x32d72 || uVar1 < uVar19) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar21 >> 8);
            *(byte *)puVar43 = (byte)*puVar43 + bVar6;
            puVar48 = puVar11 + 1;
            out(*puVar11,CONCAT11(bVar46,cVar29));
            *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
            goto code_r0x00402a3e;
          }
          bVar54 = CARRY4((uint)puVar21,*puVar21);
          bVar56 = SCARRY4((int)puVar21,*puVar21);
          puVar21 = (uint *)((int)puVar21 + *puVar21);
          if (!bVar56) {
            uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar50);
            *(byte *)puVar11 = (byte)*puVar11 + bVar54;
            bVar37 = (byte)puVar21;
            *(byte *)((int)puVar43 + (int)unaff_EBP) =
                 *(byte *)((int)puVar43 + (int)unaff_EBP) + bVar37;
            *(byte *)puVar41 = (byte)*puVar41 + cVar29;
            *(byte *)puVar41 = (byte)*puVar41 ^ bVar37;
            bVar33 = (byte)((uint)puVar40 >> 8);
            *(byte *)puVar11 = (byte)*puVar11 + bVar33;
            *(byte *)puVar21 = (byte)*puVar21 + bVar37;
            pbVar12 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),bVar37 | (byte)*puVar21);
            *(byte *)puVar40 = (byte)*puVar40 + cVar29;
            bVar38 = *pbVar12;
            uVar35 = (undefined2)((uint)puVar40 >> 0x10);
            puVar40 = (uint *)CONCAT22(uVar35,CONCAT11(bVar33 + bVar38,bVar6));
            pbVar12 = pbVar12 + (uint)CARRY1(bVar33,*pbVar12) + *(int *)pbVar12;
            *(byte *)puVar43 = (byte)*puVar43 + bVar6;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar13 = pbVar12 + 0x73;
            bVar37 = *pbVar13;
            *pbVar13 = *pbVar13 + bVar46;
            uVar26 = (undefined3)((uint)pbVar12 >> 8);
            bVar37 = (char)pbVar12 + CARRY1(bVar37,bVar46);
            pcVar15 = (char *)CONCAT31(uVar26,bVar37);
            *(byte *)puVar43 = (byte)*puVar43 + bVar6;
            if ((POPCOUNT((byte)*puVar43) & 1U) == 0) {
              uStack_c = uVar50;
            }
            puVar49 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x17));
            *pcVar15 = *pcVar15 + bVar37;
            cVar29 = bVar37 + 2;
            puVar21 = (uint *)CONCAT31(uVar26,cVar29);
            if (bVar37 < 0xfe) {
              *puVar21 = (uint)(*puVar21 + (int)puVar21);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar21 = (byte)*puVar21 + cVar29;
            uVar14 = *puVar43;
            puVar48 = (uint *)((int)puVar11 + puVar41[0x19]);
            *(byte *)puVar21 = (byte)*puVar21 + cVar29;
            puVar40 = (uint *)CONCAT22(uVar35,CONCAT11(bVar33 + bVar38 | (byte)*puVar21,
                                                       bVar6 | (byte)uVar14));
            puVar47 = puVar49;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar37;
    pbVar12 = (byte *)((int)puVar21 + 0x73);
    bVar54 = CARRY1(*pbVar12,bVar6);
    *pbVar12 = *pbVar12 + bVar6;
  } while( true );
code_r0x00402992:
  pbVar12 = (byte *)((int)puVar21 + 0x2a);
  bVar54 = CARRY1(*pbVar12,bVar46);
  *pbVar12 = *pbVar12 + bVar46;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar21) = *(byte *)(in_GS_OFFSET + (int)puVar21) + (char)puVar21;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | *(byte *)((int)puVar47 + 0x66),
                                      (char)puVar40));
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402a3e:
  uVar26 = (undefined3)((uint)puVar21 >> 8);
  bVar37 = (byte)puVar21 | (byte)*puVar48;
  pcVar15 = (char *)CONCAT31(uVar26,bVar37);
  if ((char)bVar37 < '\0') {
    *pcVar15 = *pcVar15 + bVar37;
    cVar29 = bVar37 + 2;
    piVar24 = (int *)CONCAT31(uVar26,cVar29);
    if ((POPCOUNT(cVar29) & 1U) == 0) {
      *(char *)piVar24 = (char)*piVar24 + cVar29;
      bVar37 = bVar37 + 0x71;
      pcVar9 = (char *)CONCAT31(uVar26,bVar37);
      pcVar15 = (char *)segment(uVar52,(short)puVar41 + (short)puVar48);
      *pcVar15 = *pcVar15 + bVar37;
      uVar14 = puVar47[0x1a];
      *pcVar9 = *pcVar9 + bVar37;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((byte)((uint)puVar40 >> 8) | (byte)uVar14 |
                                          *(byte *)((int)puVar47 + 0x69),(char)puVar40));
      *pcVar9 = *pcVar9 + bVar37;
      bVar37 = bVar37 | (byte)*puVar43;
      pcVar15 = (char *)CONCAT31(uVar26,bVar37);
      if ((POPCOUNT(bVar37) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar11 = puVar48 + (uint)bVar57 * -2 + 1;
    out(*puVar48,(short)puVar43);
  }
  else {
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((char)((uint)puVar41 >> 8) + (byte)puVar41[6],(char)puVar41)
                              );
code_r0x00402a5d:
    *pcVar15 = *pcVar15 + (char)pcVar15;
    piVar24 = (int *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + 'o');
    puVar11 = puVar48;
  }
code_r0x00402a61:
  pcVar15 = (char *)segment(uVar52,(short)puVar41 + (short)puVar11);
  *pcVar15 = *pcVar15 + (char)piVar24;
  cVar29 = (char)puVar40;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | (byte)puVar47[0x1a],cVar29));
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  uVar35 = CONCAT11((byte)((uint)puVar43 >> 8) | *(byte *)((int)puVar43 + 0x65),(char)puVar43);
  puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),uVar35);
  piVar22 = (int *)((int)piVar24 + *piVar24);
  puVar48 = puVar11;
  puVar49 = puVar47;
  uVar51 = uVar50;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402ae3;
  *(byte *)puVar43 = (byte)*puVar43 + cVar29;
  puVar48 = puVar11 + (uint)bVar57 * -2 + 1;
  out(*puVar11,uVar35);
code_r0x00402a75:
  bVar37 = (byte)((uint)puVar40 >> 8) | (byte)*puVar43;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar37,(char)puVar40));
  piVar24 = (int *)(uint)(byte)*puVar41;
  *(byte *)puVar48 = (byte)*puVar48 - bVar37;
  puVar49 = puVar47;
code_r0x00402a7f:
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  out(*puVar48,(short)puVar43);
  bVar37 = in((short)puVar43);
  *(byte *)puVar49 = bVar37;
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | (byte)*puVar43,(char)puVar40));
  iVar16 = *piVar24;
  cVar29 = in(1);
  puVar21 = (uint *)CONCAT31((int3)((uint)((int)piVar24 + *piVar24) >> 8),cVar29);
  *(char *)puVar21 = (char)*puVar21 + cVar29;
  puVar21 = (uint *)((uint)puVar21 | *puVar21);
  *(byte *)puVar40 = (byte)*puVar40 + (char)puVar43;
  puVar48 = (uint *)((int)puVar48 + (((uint)bVar57 * -8 + 4) - iVar16));
  puVar49 = (uint *)((int)puVar49 + (uint)bVar57 * -2 + 1);
  uStack_c = uVar50;
  while( true ) {
    bVar37 = (byte)puVar21 | (byte)*puVar43;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar37);
    puVar47 = puVar49;
    if ((POPCOUNT(bVar37) & 1U) != 0) break;
    *(byte *)puVar21 = (byte)*puVar21 + bVar37;
code_r0x00402a9b:
    uVar26 = (undefined3)((uint)puVar21 >> 8);
    cVar29 = (char)puVar21 + '\r';
    piVar22 = (int *)CONCAT31(uVar26,cVar29);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar29;
    *(byte *)(puVar48 + -0xc800000) = (byte)puVar48[-0xc800000] + (char)puVar43;
    *(char *)piVar22 = (char)*piVar22 + cVar29;
    *(byte *)puVar43 = (byte)*puVar43 + cVar29;
    cVar45 = (char)puVar40;
    if ((POPCOUNT((byte)*puVar43) & 1U) != 0) {
      *(byte *)puVar43 = (byte)*puVar43 + cVar45;
      puVar11 = puVar48 + (uint)bVar57 * -2 + 1;
      out(*puVar48,(short)puVar43);
      piVar24 = (int *)((longlong)*piVar22 * 0x7b020a00);
      *(char *)piVar24 =
           (char)*piVar24 - ((longlong)(int)piVar24 != (longlong)*piVar22 * 0x7b020a00);
      pbVar13 = (byte *)((int)puVar47 + (int)unaff_EBP * 2);
      *pbVar13 = *pbVar13;
      goto code_r0x00402a61;
    }
    *(char *)piVar22 = (char)*piVar22 + cVar29;
    puVar21 = (uint *)CONCAT31(uVar26,(char)puVar21 + ':');
    puVar11 = (uint *)((uint)puVar48 | *(uint *)((int)puVar43 + -0x79));
    iVar16 = (int)puVar21 + *puVar21;
    if (SCARRY4((int)puVar21,*puVar21)) {
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((char)((uint)puVar41 >> 8) + (byte)puVar11[(int)puVar41],
                                          (char)puVar41));
      *(char *)((int)puVar43 * 2) = *(char *)((int)puVar43 * 2) + (char)iVar16;
      puVar49 = puVar47;
      goto code_r0x00402b33;
    }
    uVar26 = (undefined3)((uint)iVar16 >> 8);
    cVar29 = (char)iVar16 + CARRY4((uint)puVar21,*puVar21);
    piVar24 = (int *)CONCAT31(uVar26,cVar29);
    *(byte *)puVar43 = (byte)*puVar43 + cVar45;
    bVar54 = (POPCOUNT((byte)*puVar43) & 1U) != 0;
    if ((bVar54) && (bVar54)) goto code_r0x00402a61;
    *(char *)piVar24 = (char)*piVar24 + cVar29;
    cVar7 = cVar29 + '(';
    pcVar15 = (char *)CONCAT31(uVar26,cVar7);
    puVar49 = puVar47 + (uint)bVar57 * -2 + 1;
    uVar14 = in((short)puVar43);
    *puVar47 = uVar14;
    *pcVar15 = *pcVar15 + cVar7;
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) | bRama07b0222,cVar45));
    *pcVar15 = *pcVar15 + cVar7;
    pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '>');
code_r0x00402ad2:
    out(*puVar11,(short)puVar43);
    puVar48 = (uint *)((int)(puVar11 + (uint)bVar57 * -2 + 1) + (uint)bVar57 * -2 + 1);
    out((byte)puVar11[(uint)bVar57 * -2 + 1],(short)puVar43);
    bVar37 = (byte)pcVar15;
    *pcVar15 = *pcVar15 + bVar37;
    puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(byte)puVar41 | (byte)*puVar49);
    bVar55 = 9 < (bVar37 & 0xf) | bVar55;
    uVar26 = (undefined3)((uint)pcVar15 >> 8);
    bVar37 = bVar37 + bVar55 * -6;
    puVar43 = (uint *)((uint)puVar43 ^ *puVar43);
    cVar29 = bVar37 + (0x9f < bVar37 | bVar55 * (bVar37 < 6)) * -0x60 + (byte)*puVar43;
    piVar24 = (int *)CONCAT31(uVar26,cVar29);
    if ((POPCOUNT(cVar29) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar24 = (char)*piVar24 + cVar29;
    piVar22 = (int *)CONCAT31(uVar26,cVar29 + '\x17');
    uVar51 = uVar50;
code_r0x00402ae3:
    out(*puVar48,(short)puVar43);
    puVar11 = puVar48 + (uint)bVar57 * -2 + 1 + (uint)bVar57 * -2 + 1;
    out(puVar48[(uint)bVar57 * -2 + 1],(short)puVar43);
    *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
code_r0x00402ae7:
    puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                               CONCAT11((byte)((uint)puVar41 >> 8) | unaff_EBP[-0x60],(char)puVar41)
                              );
    cVar29 = (char)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar29;
    uVar26 = (undefined3)((uint)piVar22 >> 8);
    bVar37 = cVar29 + 2;
    puVar21 = (uint *)CONCAT31(uVar26,bVar37);
    uVar50 = uVar51;
    if ((POPCOUNT(bVar37) & 1U) == 0) {
      *(byte *)puVar21 = (byte)*puVar21 + bVar37;
      cVar29 = cVar29 + '}';
      puVar21 = (uint *)CONCAT31(uVar26,cVar29);
      *(byte *)puVar21 = ((byte)*puVar21 - cVar29) - (0x84 < bVar37);
      pbVar13 = (byte *)((int)puVar43 + (int)puVar21);
      *pbVar13 = *pbVar13 + cVar29;
      bVar37 = POPCOUNT(*pbVar13);
      puVar48 = puVar11;
code_r0x00402af9:
      uVar50 = uVar51;
      puVar47 = puVar49;
      if ((bVar37 & 1) == 0) {
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        bVar37 = (byte)puVar40;
        *(byte *)puVar43 = (byte)*puVar43 + bVar37;
        uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uStack_c);
        puVar11 = puVar48 + (uint)bVar57 * -2 + 1;
        out(*puVar48,(short)puVar43);
        uVar14 = *puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + bVar37;
        iVar16 = CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'o') +
                 *(int *)((int)puVar43 * 2) + (uint)CARRY1((byte)uVar14,bVar37);
        pcVar15 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '(');
        while( true ) {
          uVar14 = *puVar43;
          bVar6 = (byte)puVar40;
          *(byte *)puVar43 = (byte)*puVar43 + bVar6;
          pcVar15 = pcVar15 + (uint)CARRY1((byte)uVar14,bVar6) + iRam73280512;
          bVar37 = (byte)pcVar15;
          *pcVar15 = *pcVar15 + bVar37;
          puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                     CONCAT11((byte)((uint)puVar40 >> 8) | bRam7d160243,bVar6));
          bVar57 = ((uint)uStackY_38 & 0x400) != 0;
          bVar55 = ((uint)uStackY_38 & 0x10) != 0;
          *pcVar15 = *pcVar15 + bVar37;
          uVar26 = (undefined3)((uint)pcVar15 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar26,bVar37 + 2) + (uint)(0xfd < bVar37);
          cVar29 = bVar37 + 4;
          if (SCARRY1(bVar37 + 2,'\x02') != cVar29 < '\0') break;
          *(char *)CONCAT31(uVar26,cVar29) = *(char *)CONCAT31(uVar26,cVar29) + cVar29;
          iVar16 = CONCAT31(uVar26,bVar37 + 0x16);
code_r0x00402b33:
          piVar22 = (int *)(iVar16 + 0xe2802);
          *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)puVar40 >> 8);
          uVar51 = uVar50;
          uVar50 = uStack_c;
          while( true ) {
            bVar6 = (byte)puVar41 | (byte)((uint)puVar40 >> 8);
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar6);
            *piVar22 = (int)(*piVar22 + (int)piVar22);
            cVar29 = (char)piVar22;
            *(byte *)puVar43 = (byte)*puVar43 + cVar29;
            if ((POPCOUNT((byte)*puVar43) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar22 = (char)*piVar22 + cVar29;
            uVar14 = CONCAT31((int3)((uint)piVar22 >> 8),cVar29 + '\x13');
            puVar21 = (uint *)(uVar14 + 0x19061224 + (uint)(0x1f9edfd < uVar14));
            uVar1 = (uint)(0xe4ffffdd < uVar14 + 0xfe061202 ||
                          CARRY4(uVar14 + 0x19061224,(uint)(0x1f9edfd < uVar14)));
            uVar19 = *puVar11;
            uVar14 = *puVar11;
            *puVar11 = (uint)((byte *)(uVar14 + (int)puVar21) + uVar1);
            bVar37 = POPCOUNT(*puVar11 & 0xff);
            puVar48 = puVar11;
            if ((SCARRY4(uVar19,(int)puVar21) != SCARRY4((int)(uVar14 + (int)puVar21),uVar1)) ==
                (int)*puVar11 < 0) goto code_r0x00402af9;
            bVar37 = (byte)puVar21;
            *(byte *)puVar21 = (byte)*puVar21 + bVar37;
            iVar16 = CONCAT31((int3)((uint)puVar21 >> 8),bVar37 + 2) + 0x9d7d +
                     (uint)(0xfd < bVar37);
            bVar37 = (byte)puVar43 | (byte)*puVar43;
            uVar14 = *puVar41;
            *(byte *)puVar41 = (byte)*puVar41 + bVar6;
            pcVar15 = (char *)(CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x12') + 0x228b26
                               + *puVar49 + (uint)CARRY1((byte)uVar14,bVar6));
            cVar29 = bVar37 + (byte)*puVar40;
            puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),cVar29);
            if (SCARRY1(bVar37,(byte)*puVar40) == cVar29 < '\0') break;
            *pcVar15 = *pcVar15 + (char)pcVar15;
            cVar29 = (char)pcVar15 + '\x02';
            pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar29);
            bVar37 = POPCOUNT(cVar29);
            uVar51 = uVar50;
code_r0x00402b7a:
            puVar47 = puVar11;
            if ((bVar37 & 1) != 0) break;
            while( true ) {
              cVar29 = (char)pcVar15;
              *pcVar15 = *pcVar15 + cVar29;
              uVar26 = (undefined3)((uint)pcVar15 >> 8);
              pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '\x13');
              *(byte *)puVar40 = (byte)*puVar40 | (byte)puVar43;
              *(byte *)puVar49 = (byte)*puVar49 | (byte)puVar43;
              *puVar43 = (uint)(pcVar15 + *puVar43);
              uVar35 = (undefined2)((uint)puVar41 >> 0x10);
              uVar30 = SUB41(puVar41,0);
              cVar45 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar41 + -0x5f);
              puVar41 = (uint *)CONCAT22(uVar35,CONCAT11(cVar45,uVar30));
              *pcVar15 = *pcVar15 + cVar29 + '\x13';
              piVar22 = (int *)CONCAT31(uVar26,cVar29 + -0x7a);
              uVar14 = *puVar43;
              *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar14,(char)puVar40) == (char)(byte)*puVar43 < '\0') break;
              *(char *)piVar22 = (char)*piVar22 + cVar29 + -0x7a;
              cVar7 = cVar29 + -0x78;
              piVar22 = (int *)CONCAT31(uVar26,cVar7);
              uVar4 = uVar51;
              if ((POPCOUNT(cVar7) & 1U) != 0) break;
              *(char *)piVar22 = (char)*piVar22 + cVar7;
              pcVar15 = (char *)CONCAT31(uVar26,cVar29 + -0x65);
              *puVar40 = *puVar40 | (uint)puVar43;
              *puVar49 = *puVar49 | (uint)puVar43;
              pbVar13 = (byte *)((int)puVar40 + -1);
              cVar45 = cVar45 + *(byte *)((int)puVar41 + -0x5e);
              puVar41 = (uint *)CONCAT22(uVar35,CONCAT11(cVar45,uVar30));
              *pcVar15 = *pcVar15 + cVar29 + -0x65;
              bVar37 = cVar29 + 10;
              puVar21 = (uint *)CONCAT31(uVar26,bVar37);
              bVar6 = (byte)pbVar13;
              *(byte *)puVar43 = (byte)*puVar43 + bVar6;
              puVar11 = puVar47 + (uint)bVar57 * -2 + 1;
              out(*puVar47,(short)puVar43);
              uVar14 = *puVar43;
              *(byte *)puVar43 = (byte)*puVar43 + bVar6;
              uVar20 = (uint)CARRY1((byte)uVar14,bVar6);
              uVar19 = *puVar43;
              uVar14 = *puVar43;
              pbVar12 = pbVar13 + uVar14 + uVar20;
              uVar5 = *puVar43;
              cRam130a0000 = cRam130a0000 - cVar45;
              uVar1 = *puVar43;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar21);
              *(byte *)puVar21 = (char)*puVar21 + bVar37;
              puVar40 = (uint *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar12 >> 8) | bRam7d170243,
                                                  (char)pbVar12 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar13,uVar19) ||
                                                  CARRY4((uint)(pbVar13 + uVar14),uVar20))));
              bVar57 = (uStack_c & 0x400) != 0;
              bVar55 = (uStack_c & 0x10) != 0;
              *(byte *)puVar21 = (char)*puVar21 + bVar37;
              bVar54 = 0xfd < bVar37;
              pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '\f');
              puVar43 = (uint *)((uint)puVar43 | uVar1);
code_r0x00402bd1:
              uVar14 = *puVar41;
              uVar19 = *puVar41;
              *puVar41 = (uint)((byte *)(uVar19 + (int)puVar40) + bVar54);
              bVar37 = POPCOUNT(*puVar41 & 0xff);
              uVar51 = uStack_c;
              if ((SCARRY4(uVar14,(int)puVar40) !=
                  SCARRY4((int)(uVar19 + (int)puVar40),(uint)bVar54)) == (int)*puVar41 < 0)
              goto code_r0x00402b7a;
              cVar29 = (char)pcVar15;
              *pcVar15 = *pcVar15 + cVar29;
              pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar29 + '\x02');
              if (SCARRY1(cVar29,'\x02') == (char)(cVar29 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar15 = *pcVar15 + (char)pcVar15;
                pcVar15 = (char *)(CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x12') |
                                  *puVar43);
                *(byte *)puVar49 = (byte)*puVar49 - (char)puVar40;
                *pcVar15 = *pcVar15 + (char)pcVar15;
                puVar43 = (uint *)((int)puVar43 - *puVar11);
                bVar37 = (byte)puVar41 | (byte)((uint)puVar40 >> 8);
                cVar29 = *pcVar15;
                uVar26 = (undefined3)((uint)pcVar15 >> 8);
                pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                *pcVar15 = *pcVar15 + cVar29;
                pcVar9 = (char *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                          CONCAT11((char)((uint)puVar41 >> 8) +
                                                   *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),
                                                                      bVar37) + -0x5b),bVar37));
                *pcVar15 = *pcVar15 + cVar29;
                bVar54 = false;
                pcVar15 = (char *)(CONCAT31(uVar26,cVar29 + '\x13') | *puVar43);
                do {
                  bVar6 = (byte)puVar40;
                  bVar37 = bVar6 + (byte)puVar11[(int)puVar49 * 2];
                  puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar37 + bVar54);
                  uVar14 = (uint)(CARRY1(bVar6,(byte)puVar11[(int)puVar49 * 2]) ||
                                 CARRY1(bVar37,bVar54));
                  pcVar23 = pcVar15 + 0x1b000019 + uVar14;
                  piVar24 = (int *)((int)puVar49 * 2 + 0x40000a5);
                  *piVar24 = (int)((int)puVar40 +
                                  (uint)((char *)0xe4ffffe6 < pcVar15 ||
                                        CARRY4((uint)(pcVar15 + 0x1b000019),uVar14)) + *piVar24);
                  puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 + cRam00009d7d
                                            );
                  uVar26 = (undefined3)((uint)pcVar23 >> 8);
                  bVar37 = (char)pcVar23 + 0x12;
                  bVar55 = 9 < (bVar37 & 0xf) | bVar55;
                  uVar14 = CONCAT31(uVar26,bVar37 + bVar55 * -6) & 0xffffff0f;
                  pcVar15 = (char *)CONCAT22((short)(uVar14 >> 0x10),
                                             CONCAT11((char)((uint)pcVar23 >> 8) - bVar55,
                                                      (char)uVar14));
                  pbVar13 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar26,bVar37));
                  while( true ) {
                    *pcVar15 = *pcVar15 + (char)pcVar15;
                    puVar47 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                               (byte)puVar43 | (byte)*puVar43);
                    puVar49 = (uint *)((uint)puVar49 | (uint)puVar11);
                    uVar14 = (uint)pcVar9 | (uint)puVar11;
                    unaff_EBP = pbVar13 + 1;
                    uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar50);
                    cVar45 = (char)(pcVar15 + 0x1b000019);
                    uVar26 = (undefined3)((uint)(pcVar15 + 0x1b000019) >> 8);
                    cVar29 = cVar45 + -0x13;
                    pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                    uVar35 = (undefined2)(uVar14 >> 0x10);
                    cVar7 = (char)(uVar14 >> 8) + *(char *)(uVar14 - 0x5e);
                    puVar41 = (uint *)CONCAT22(uVar35,CONCAT11(cVar7,(byte)uVar14));
                    *pcVar15 = *pcVar15 + cVar29;
                    pcVar15 = (char *)(CONCAT31(uVar26,cVar45 + '\x19') | *puVar47);
                    bVar37 = (byte)pcVar15;
                    if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0) {
                      pbVar13 = (byte *)((int)puVar47 + (int)pcVar15);
                      bVar54 = CARRY1(*pbVar13,bVar37);
                      *pbVar13 = *pbVar13 + bVar37;
                      puVar43 = puVar47;
                      goto code_r0x00402bd1;
                    }
                    *pcVar15 = *pcVar15 + bVar37;
                    uVar26 = (undefined3)((uint)pcVar15 >> 8);
                    pcVar9 = (char *)CONCAT31(uVar26,bVar37 + 0x6f);
                    puVar43 = (uint *)((int)puVar47 + 1);
                    *pcVar9 = *pcVar9 + bVar37 + 0x6f;
                    bVar6 = (byte)uVar14 | (byte)((uint)pcVar15 >> 8);
                    pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x5c);
                    cVar7 = cVar7 + *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),bVar6) + -0x5f);
                    puVar41 = (uint *)CONCAT22(uVar35,CONCAT11(cVar7,bVar6));
                    *pcVar15 = *pcVar15 + bVar37 + 0x5c;
                    pcVar15 = (char *)(CONCAT31(uVar26,bVar37 + 0x88) | *puVar43);
                    if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0) {
                      *(byte *)puVar41 = (byte)*puVar41 + (char)((uint)puVar40 >> 8);
                      uStackY_38 = (uint *)((uint)uStackY_38._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar15 = *pcVar15 + (char)pcVar15;
                    uVar26 = (undefined3)((uint)pcVar15 >> 8);
                    cVar29 = (char)pcVar15 + 'o';
                    puVar43 = (uint *)((int)puVar47 + 2);
                    *(char *)CONCAT31(uVar26,cVar29) = *(char *)CONCAT31(uVar26,cVar29) + cVar29;
                    pcVar9 = (char *)CONCAT31((int3)((uint)puVar41 >> 8),
                                              bVar6 | (byte)((uint)pcVar15 >> 8));
                    pcVar15 = (char *)(CONCAT31(uVar26,cVar29) | 2);
                    pbVar13[-0x62] = pbVar13[-0x62] + 1;
                    bVar37 = (byte)pcVar15;
                    *pcVar15 = *pcVar15 + bVar37;
                    bVar54 = 0xfd < bVar37;
                    cVar29 = bVar37 + 2;
                    pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                    uVar52 = uVar50;
                    if (SCARRY1(bVar37,'\x02') != cVar29 < '\0') break;
                    *pcVar15 = *pcVar15 + cVar29;
                    bVar6 = bVar37 + 10;
                    pcVar15 = (char *)CONCAT31(uVar26,bVar6);
                    *pcVar15 = *pcVar15 - cVar7;
                    cVar45 = (char)puVar40;
                    *(byte *)puVar43 = *(byte *)puVar43 + cVar45;
                    pbVar13[-0x62] = pbVar13[-0x62] + 1;
                    *pcVar15 = *pcVar15 + bVar6;
                    cVar29 = bVar37 + 0xc;
                    pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                    if (SCARRY1(bVar6,'\x02') == cVar29 < '\0') {
                      *pcVar15 = *pcVar15 + cVar29;
                      *(byte *)puVar40 = (byte)*puVar40 - cVar7;
                      *(byte *)puVar43 = *(byte *)puVar43 + cVar45;
                      cVar29 = (bVar37 + 0x13) - (byte)puVar40[0x13];
                      pcVar15 = (char *)CONCAT31(uVar26,cVar29);
                      *pcVar15 = *pcVar15 + cVar29;
                      pcVar23 = (char *)CONCAT31(uVar26,cVar29 + *pcVar15);
                      *pcVar23 = *pcVar23 + cVar29 + *pcVar15;
                      pcVar23 = pcVar23 + *puVar40;
                      *pcVar23 = *pcVar23 + (char)pcVar23;
                      LOCK();
                      pcVar15 = *(char **)pcVar23;
                      *(char **)pcVar23 = pcVar23;
                      UNLOCK();
                      *pcVar15 = *pcVar15 + (char)pcVar15;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)*puVar40);
                      *pbVar12 = *pbVar12 + (byte)*puVar40;
                      goto code_r0x00402c8d;
                    }
                    puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                               cVar45 + *pcVar9 + (0xfd < bVar6));
                    *(byte *)puVar49 = (byte)*puVar49 - cVar7;
                    pbVar13 = unaff_EBP;
                  }
                } while( true );
              }
              puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                         CONCAT11((char)((uint)puVar41 >> 8) +
                                                  *(byte *)((int)puVar41 + -99),(char)puVar41));
              puVar47 = puVar11;
            }
            *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
            puVar43 = (uint *)((int)puVar43 - *puVar47);
            puVar11 = puVar47;
            uVar51 = uVar50;
            uVar50 = uVar4;
          }
          *(byte *)puVar43 = (byte)*puVar43 + (char)puVar40;
          pcVar15 = pcVar15 + -0x7d160243;
        }
        pcVar15 = (char *)CONCAT31(uVar26,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar40;
    uVar14 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
    *puVar49 = (uint)((int)puVar43 + (uint)CARRY1((byte)uVar14,(byte)puVar21) + *puVar49);
    puVar48 = puVar11;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar8 = (char)puVar40;
      cVar34 = (char)((uint)puVar40 >> 8) + (char)((uint)pbVar12 >> 8);
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(cVar34,cVar8));
      cVar29 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar29;
      pcVar15 = (char *)((int)pbVar12 * 2 + 0x1a10000);
      cVar7 = (char)((uint)pcVar9 >> 8);
      *pcVar15 = *pcVar15 + cVar7;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
      pbVar12[-0x47ffffff] = pbVar12[-0x47ffffff] + cVar7;
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      bVar6 = (byte)puVar43;
      *(byte *)puVar49 = (byte)*puVar49 + bVar6;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + bVar6;
      *pbVar12 = *pbVar12 + cVar29;
      *puVar11 = (uint)(*puVar11 + (int)puVar11);
      uVar35 = (undefined2)((uint)pcVar9 >> 0x10);
      cVar7 = cVar7 + (byte)puVar11[(int)pcVar9];
      pcVar15 = (char *)CONCAT22(uVar35,CONCAT11(cVar7,(char)pcVar9));
      pcVar15[(int)pbVar12] = pcVar15[(int)pbVar12] + cVar29;
      *(byte *)puVar43 = *(byte *)puVar43 - cVar7;
      *(byte *)puVar43 = *(byte *)puVar43 + cVar8;
      uVar26 = (undefined3)((uint)pbVar12 >> 8);
      bVar37 = cVar29 - *pbVar12;
      *pcVar15 = *pcVar15 + bVar6;
      *(byte *)puVar43 = *(byte *)puVar43 ^ bVar37;
      *(byte *)puVar43 = *(byte *)puVar43 + bVar37;
      *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
      uVar14 = *puVar40;
      *(byte *)puVar40 = (byte)*puVar40 + bVar6;
      cVar45 = bVar37 + *(char *)CONCAT31(uVar26,bVar37) + CARRY1((byte)uVar14,bVar6);
      pcVar9 = (char *)CONCAT22(uVar35,CONCAT11(cVar7 + pbVar13[-0x60],(char)pcVar9));
      *(char *)CONCAT31(uVar26,cVar45) = *(char *)CONCAT31(uVar26,cVar45) + cVar45;
      cVar7 = cVar45 + '\x12';
      pbVar12 = (byte *)CONCAT31(uVar26,cVar7);
      cVar29 = *pcVar9;
      *pcVar9 = *pcVar9 + cVar7;
      if (SCARRY1(cVar29,cVar7) != *pcVar9 < '\0') break;
code_r0x00402c8d:
      cVar29 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
      *(byte *)puVar43 = *(byte *)puVar43 + cVar29;
      *pbVar12 = *pbVar12 + cVar29;
    }
    *pbVar12 = *pbVar12 + cVar7;
    pbVar12 = (byte *)CONCAT31(uVar26,cVar45 + '$');
    *pbVar12 = *pbVar12 + cVar34;
    bVar37 = *(byte *)puVar43;
    *(byte *)puVar43 = *(byte *)puVar43 + cVar8;
    uVar51 = uVar50;
    uVar52 = uVar53;
  } while (SCARRY1(bVar37,cVar8) == (char)*(byte *)puVar43 < '\0');
  do {
    cVar29 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar29;
    uVar26 = (undefined3)((uint)pbVar12 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar43;
    bVar6 = cVar29 + 0x24;
    cVar7 = (char)((uint)pcVar9 >> 8);
    pcVar9[-0x62] = pcVar9[-0x62] + cVar7;
    *(char *)CONCAT31(uVar26,bVar6) = *(char *)CONCAT31(uVar26,bVar6) + bVar6;
    bVar37 = cVar29 + 0x2fU + (byte)*puVar40;
    cVar45 = bVar37 + (0xf4 < bVar6);
    cVar29 = cVar45 + *(char *)CONCAT31(uVar26,cVar45) +
             (CARRY1(cVar29 + 0x2fU,(byte)*puVar40) || CARRY1(bVar37,0xf4 < bVar6));
    pcVar15 = (char *)CONCAT31(uVar26,cVar29);
    *pcVar15 = *pcVar15 - (char)puVar43;
    *pcVar15 = *pcVar15 + cVar29;
    pcVar23 = (char *)((int)puVar43 - *puVar43);
    *(byte *)(puVar11 + (int)pcVar9) = (byte)puVar11[(int)pcVar9] + cVar7;
    pcVar15[(int)unaff_EBP] = pcVar15[(int)unaff_EBP] + cVar29;
    *pcVar23 = *pcVar23 + (char)puVar40;
    pcVar15 = (char *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                               CONCAT11((char)((uint)pbVar12 >> 8) - *pcVar23,cVar29));
    uVar14 = *puVar49;
    *pcVar15 = *pcVar15 - (char)((uint)pcVar23 >> 8);
    *pcVar15 = *pcVar15 + cVar29;
    uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar51);
    pbVar13 = (byte *)CONCAT22((short)((uint)pcVar9 >> 0x10),
                               CONCAT11(cVar7 - (byte)*puVar11,(char)pcVar9));
    unaff_EBP = unaff_EBP + *(int *)(pbVar13 + (int)puVar40);
    puVar47 = (uint *)CONCAT31((int3)((uint)pcVar23 >> 8),(char)pcVar23 + (byte)uVar14);
    while( true ) {
      puVar43 = puVar47;
      uVar35 = (undefined2)((uint)pbVar13 >> 0x10);
      bVar46 = (char)((uint)pbVar13 >> 8) + pbVar13[0x18];
      *pcVar15 = *pcVar15 + (char)pcVar15;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + 'o');
      cVar29 = (char)puVar40;
      *(byte *)puVar43 = (byte)*puVar43 + cVar29;
      uVar14 = *puVar11;
      bVar55 = (byte)((uint)puVar40 >> 8);
      bVar37 = *pbVar12;
      pbVar12 = pbVar12 + (uint)CARRY1(bVar55,*pbVar12) + *(int *)pbVar12;
      *(byte *)puVar43 = (byte)*puVar43 + cVar29;
      cVar45 = ((char)pbVar13 - (byte)uVar14) - (byte)*puVar11;
      bVar6 = *(byte *)((int)puVar49 + 0x1a);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11(bVar55 + bVar37 + bVar6 | (byte)*puVar43,cVar29));
      pbVar12 = pbVar12 + *puVar43;
      if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) break;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      bVar37 = (char)pbVar12 + 0x6f;
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar37);
      pcVar9 = (char *)(CONCAT31((int3)(CONCAT22(uVar35,CONCAT11(bVar46,(char)pbVar13)) >> 8),cVar45
                                ) + -1);
      *pcVar15 = *pcVar15 + bVar37;
      *pcVar15 = *pcVar15 + bVar37;
      *pcVar9 = *pcVar9 + (byte)puVar43;
      *(byte *)((int)pcVar15 * 2) = *(byte *)((int)pcVar15 * 2) ^ bVar37;
      uVar3 = *(undefined6 *)pcVar15;
      uVar51 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar15 = (char *)uVar3;
      *pcVar15 = *pcVar15 + (char)uVar3;
      *(byte *)puVar11 = (byte)*puVar11 + (char)uVar3;
      pcVar15 = (char *)((uint)pcVar15 | 0x73110008);
      bVar46 = (byte)((uint)pcVar9 >> 8);
      *(byte *)puVar49 = (byte)*puVar49 - bVar46;
      *(byte *)puVar43 = (byte)*puVar43 + cVar29;
      puVar47 = puVar11 + (uint)bVar57 * -2 + 1;
      out(*puVar11,(short)puVar43);
      *pcVar15 = *pcVar15;
      cVar29 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar29;
      bVar37 = unaff_EBP[-0x5a];
      uVar35 = (undefined2)((uint)pcVar9 >> 0x10);
      cVar45 = (char)pcVar9;
      *pcVar15 = *pcVar15 + cVar29;
      cVar29 = cVar29 + '\x02';
      uVar14 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar29);
      puVar40 = (uint *)(uVar14 | 0x73110000);
      puVar11 = puVar47 + (uint)bVar57 * -2 + 1;
      out(*puVar47,(short)puVar43);
      *(byte *)puVar40 = (byte)*puVar40;
      bVar55 = (byte)puVar43 | (byte)*puVar49;
      puVar47 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar55);
      *(byte *)puVar40 = (byte)*puVar40 + cVar29;
      pcVar15 = (char *)(uVar14 | 0x7b1f1609);
      bVar57 = (uVar52 & 0x400) != 0;
      *(uint *)((int)puVar49 + -0x7d) = *(uint *)((int)puVar49 + -0x7d) | (uint)unaff_EBP;
      bVar6 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar6;
      bVar46 = bVar46 | bVar37 | *(byte *)((int)puVar11 + 0x19);
      pbVar13 = (byte *)CONCAT22(uVar35,CONCAT11(bVar46,cVar45));
      *pcVar15 = *pcVar15 + bVar6;
      uVar26 = (undefined3)((uint)pcVar15 >> 8);
      puVar11[(int)puVar49 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar6) + puVar11[(int)puVar49 * 2]);
      bVar37 = bVar6 + 0x2d ^ *(byte *)CONCAT31(uVar26,bVar6 + 0x2d);
      pcVar15 = (char *)CONCAT31(uVar26,bVar37);
      uVar14 = *puVar11;
      *(byte *)puVar11 = (byte)*puVar11 + bVar37;
      uVar52 = uVar51;
      if (CARRY1((byte)uVar14,bVar37)) {
        *pcVar15 = *pcVar15 + bVar37;
        bVar37 = bVar37 | pcVar15[0x4000019];
        pcVar15 = (char *)CONCAT31(uVar26,bVar37);
        if ('\0' < (char)bVar37) {
          *pcVar15 = *pcVar15 + bVar37;
          piVar24 = (int *)CONCAT31(uVar26,bVar37 + 0x28);
          *piVar24 = (int)piVar24 + (uint)(0xd7 < bVar37) + *piVar24;
          bVar38 = (byte)((uint6)uVar3 >> 8);
          *pbVar13 = *pbVar13 + bVar38;
          uVar36 = CONCAT11((byte)((uint)puVar43 >> 8) | bVar46,bVar55);
          puVar47 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),uVar36);
          uStackY_38 = (uint *)CONCAT22(uStackY_38._2_2_,uVar51);
          bVar55 = in(uVar36);
          pbVar12 = (byte *)CONCAT31(uVar26,bVar55);
          bVar37 = *pbVar12;
          bVar54 = SCARRY1(*pbVar12,bVar55);
          *pbVar12 = *pbVar12 + bVar55;
          bVar6 = *pbVar12;
          puVar41 = puVar11;
          uStack_c = uVar51;
          if (!CARRY1(bVar37,bVar55)) goto code_r0x00402e19;
          *pbVar12 = *pbVar12 + bVar55;
          bVar38 = bVar38 | *pbVar12;
          puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar38,cVar29));
          pcVar15 = (char *)CONCAT31(uVar26,bVar55 + *pbVar12);
          *pbVar13 = *pbVar13 + bVar38;
        }
        uVar26 = (undefined3)((uint)pcVar15 >> 8);
        bVar6 = (byte)pcVar15 | (byte)*puVar47;
        pbVar12 = (byte *)CONCAT31(uVar26,bVar6);
        puVar41 = puVar11 + (uint)bVar57 * -2 + 1;
        out(*puVar11,(short)puVar47);
        LOCK();
        bVar37 = *pbVar12;
        *pbVar12 = bVar6;
        UNLOCK();
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
        piVar24 = (int *)(CONCAT31(uVar26,bVar37) + -0x1b7e07);
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
        iVar16 = (int)puVar40 - *(int *)pbVar13;
        bVar37 = *(byte *)((int)puVar49 + -0x7a);
        uVar36 = (undefined2)((uint)iVar16 >> 0x10);
        *(char *)piVar24 = *(char *)piVar24 + (char)piVar24;
        bVar6 = (char)((uint)iVar16 >> 8) + bVar37 | *(byte *)((int)puVar49 + 0x17);
        *(char *)piVar24 = *(char *)piVar24 + (char)piVar24;
        uVar26 = (undefined3)(CONCAT22(uVar36,CONCAT11(bVar6,(byte)iVar16)) >> 8);
        bVar37 = (byte)iVar16 | *pbVar13;
        puVar40 = (uint *)CONCAT31(uVar26,bVar37);
        pbVar12 = (byte *)((int)piVar24 + *piVar24);
        puVar11 = puVar41;
        if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e0a;
        *(byte *)puVar40 = (byte)*puVar40 + bVar37;
        *(byte **)pbVar13 = (byte *)(*(int *)pbVar13 + (int)puVar47);
        piVar24 = (int *)CONCAT31(uVar26,bVar37 + 0x27);
        puVar40 = (uint *)CONCAT22(uVar36,CONCAT11(bVar6 + *(byte *)((int)puVar49 + -0x79),bVar37));
        *(byte *)piVar24 = (char)*piVar24 + bVar37 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar9 = (char *)CONCAT22(uVar35,CONCAT11(bVar46 | unaff_EBP[-0x62],cVar45));
  } while( true );
code_r0x00402dff:
  pbVar12 = (byte *)CONCAT22((short)((uint)piVar24 >> 0x10),
                             CONCAT11((byte)((uint)piVar24 >> 8) |
                                      *(byte *)((int)puVar47 + 0x2170411),(byte)piVar24));
  puVar11 = puVar41 + (uint)bVar57 * -2 + 1;
  out(*puVar41,(short)puVar47);
  *pbVar12 = (byte)piVar24;
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar12;
  *pbVar12 = *pbVar12 - cVar45;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  bVar54 = false;
  bVar6 = (byte)((uint)puVar40 >> 8) | bRam052b0603;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar6,(char)puVar40));
  puVar41 = puVar11;
code_r0x00402e19:
  if (bVar6 == 0 || bVar54 != (char)bVar6 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cRam89280411;
  piVar24 = (int *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                            CONCAT11((byte)((uint)pbVar12 >> 8) |
                                     *(byte *)((int)puVar47 + 0x7190411),cRam89280411));
  *(char *)piVar24 = (char)*piVar24 + cRam89280411;
  cVar29 = (char)puVar40;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | (byte)*puVar47,cVar29));
  puVar41 = (uint *)((int)puVar41 + *piVar24);
  pbVar12 = (byte *)((int)piVar24 + *piVar24);
  bVar6 = (byte)pbVar12;
  *pbVar12 = *pbVar12 + bVar6;
  *(byte *)puVar41 = (byte)*puVar41 + cVar29;
  bVar37 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar6;
  *(byte **)pbVar12 = unaff_EBP + (uint)CARRY1(bVar37,bVar6) + *(int *)pbVar12;
  piVar24 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),*pbVar12);
  *(byte *)puVar47 = (byte)*puVar47 + cVar29;
  puVar11 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(byte)puVar47 | (byte)*puVar47);
  pbVar12 = (byte *)((int)puVar11 + -0x43);
  *pbVar12 = *pbVar12 + (char)((uint)puVar47 >> 8);
  puVar47 = puVar11;
  puVar11 = puVar49;
  uVar52 = uVar50;
code_r0x00402e42:
  uVar50 = uStack_c;
  puVar49 = puVar11;
  uStack_c = uVar50;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e6e;
  iVar16 = *(int *)((int)piVar24 + *piVar24);
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
  piVar24 = (int *)(iVar16 + -0x8c6f);
  puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                             CONCAT11((byte)((uint)puVar47 >> 8) | *(byte *)((int)puVar47 + -0x3f),
                                      (char)puVar47));
  pbVar31 = (byte *)((int)piVar24 + *piVar24);
  pbVar12 = pbVar31;
  puVar49 = uStackY_38;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar31 = *pbVar31 + (char)pbVar31;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | (byte)*puVar47,(char)puVar40));
  puVar11 = puVar41 + (uint)bVar57 * -2 + 1;
  out(*puVar41,(short)puVar47);
  puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 + (byte)*puVar49);
  puVar41 = puVar11 + (uint)bVar57 * -2 + 1;
  out(*puVar11,(short)puVar47);
  uVar52 = uVar50;
  uStack_c = uVar51;
code_r0x00402e6e:
  uVar50 = uVar52;
  uVar26 = (undefined3)((uint)puVar47 >> 8);
  cVar29 = (char)puVar47 + (byte)*puVar49;
  puVar11 = puVar41 + (uint)bVar57 * -2 + 1;
  out(*puVar41,(short)CONCAT31(uVar26,cVar29));
  puVar47 = (uint *)CONCAT31(uVar26,cVar29 + (byte)*puVar49);
  puVar41 = puVar11 + (uint)bVar57 * -2 + 1;
  out(*puVar11,(short)puVar47);
  pbVar12 = (byte *)0x0;
  puVar11 = puVar49;
code_r0x00402e81:
  puVar49 = puVar11;
  bVar6 = (char)pbVar12 - *pbVar12;
  iVar16 = CONCAT31((int3)((uint)pbVar12 >> 8),bVar6);
  *pbVar13 = *pbVar13 + (char)puVar47;
  pbVar31 = (byte *)(iVar16 * 2);
  *pbVar31 = *pbVar31 ^ bVar6;
  pbVar31 = (byte *)(int)(short)iVar16;
  *pbVar31 = *pbVar31 + bVar6;
  *(byte *)puVar49 = (byte)*puVar49 + (byte)puVar40;
  bVar37 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar6;
  *(byte **)(pbVar13 + -0x73) =
       (byte *)((int)puVar41 + (uint)CARRY1(bVar37,bVar6) + *(int *)(pbVar13 + -0x73));
  *pbVar31 = *pbVar31 + bVar6;
  bVar37 = (byte)puVar40 | (byte)*puVar47;
  puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar37);
  puVar11 = puVar41;
  if ((char)bVar37 < '\x01') goto code_r0x00402eb4;
  *pbVar31 = *pbVar31 + bVar6;
  pbVar12 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),bVar6 + 0x2d);
  puVar41[(int)puVar49 * 2] =
       (uint)((int)puVar47 + (uint)(0xd2 < bVar6) + puVar41[(int)puVar49 * 2]);
  pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
  do {
    uVar14 = *puVar41;
    bVar37 = (byte)pbVar12;
    *(byte *)puVar41 = (byte)*puVar41 + bVar37;
    if (!CARRY1((byte)uVar14,bVar37)) break;
    *pbVar12 = *pbVar12 + bVar37;
    bVar37 = bVar37 | pbVar12[0x400001a];
    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar37);
    if ((char)bVar37 < '\x01') {
code_r0x00402ecc:
      *pbVar31 = *pbVar31 + (byte)pbVar31;
      uVar26 = (undefined3)((uint)pbVar31 >> 8);
      bVar37 = (byte)pbVar31 | pbVar31[0x400001b];
      pcVar15 = (char *)CONCAT31(uVar26,bVar37);
      if ((char)bVar37 < '\x01') {
        uVar14 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar40;
        *(char *)((int)pcVar15 * 2) =
             *(char *)((int)pcVar15 * 2) - CARRY1((byte)uVar14,(byte)puVar40);
        bVar54 = 0x81 < bVar37;
        bVar37 = bVar37 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar31 = *pbVar31 + bVar37;
      puVar11 = puVar41;
code_r0x00402eb4:
      uVar26 = (undefined3)((uint)pbVar31 >> 8);
      bVar37 = (char)pbVar31 + 0x6f;
      pcVar15 = (char *)CONCAT31(uVar26,bVar37);
      *(byte **)pcVar15 = pbStackY_54;
      uVar14 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (char)puVar40;
      pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
      uVar53 = uVar51;
      if ((byte)*puVar47 != 0 && SCARRY1((byte)uVar14,(char)puVar40) == (char)(byte)*puVar47 < '\0')
      {
        *pcVar15 = *pcVar15 + bVar37;
        bVar6 = (char)pbVar31 + 0x9c;
        pbVar31 = (byte *)CONCAT31(uVar26,bVar6);
        puVar11[(int)puVar49 * 2] =
             (uint)((int)puVar47 + (uint)(0xd2 < bVar37) + puVar11[(int)puVar49 * 2]);
        pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
        uVar14 = *puVar11;
        *(byte *)puVar11 = (byte)*puVar11 + bVar6;
        puVar41 = puVar11;
        if (CARRY1((byte)uVar14,bVar6)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar41 = puVar11 + (uint)bVar57 * -2 + 1;
      out(*puVar11,(short)puVar47);
    }
    cVar29 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar29;
    uVar26 = (undefined3)((uint)pcVar15 >> 8);
    bVar37 = cVar29 + 0x6f;
    pcVar15 = (char *)CONCAT31(uVar26,bVar37);
    *(byte **)pcVar15 = pbStackY_54;
    uVar14 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar40;
    pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
    *(byte *)(puVar41 + 7) = ((byte)puVar41[7] - bVar46) - CARRY1((byte)uVar14,(byte)puVar40);
    *pcVar15 = *pcVar15 + bVar37;
    bVar6 = cVar29 + 0x9c;
    pcVar15 = (char *)CONCAT31(uVar26,bVar6);
    puVar41[(int)puVar49 * 2] =
         (uint)((int)puVar47 + (uint)(0xd2 < bVar37) + puVar41[(int)puVar49 * 2]);
    uVar14 = *puVar41;
    *(byte *)puVar41 = (byte)*puVar41 + bVar6;
    if (!CARRY1((byte)uVar14,bVar6)) goto code_r0x00402e7e;
    *pcVar15 = *pcVar15 + bVar6;
    bVar6 = bVar6 | pcVar15[0x400001c];
    pbVar12 = (byte *)CONCAT31(uVar26,bVar6);
    uStack_c = uVar51;
    if ((char)bVar6 < '\x01') goto code_r0x00402f16;
    *pbVar12 = *pbVar12 + bVar6;
    pcVar15 = (char *)CONCAT31(uVar26,bVar6 + 0x6f);
    while( true ) {
      *(byte **)pcVar15 = pbStackY_54;
      uVar14 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar40;
      *(uint *)((int)puVar41 + 0x1d) =
           (*(int *)((int)puVar41 + 0x1d) - (int)puVar49) - (uint)CARRY1((byte)uVar14,(byte)puVar40)
      ;
      bVar37 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar37;
      bVar6 = bVar37 + 0x2d;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar6);
      puVar41[(int)puVar49 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar37) + puVar41[(int)puVar49 * 2]);
      pbStackY_54 = (byte *)CONCAT22((short)((uint)pbStackY_54 >> 0x10),uVar51);
      uVar14 = *puVar41;
      *(byte *)puVar41 = (byte)*puVar41 + bVar6;
      if (!CARRY1((byte)uVar14,bVar6)) break;
      *pbVar12 = *pbVar12 + bVar6;
code_r0x00402f16:
      bVar37 = (byte)pbVar12 | pbVar12[0x400001d];
      puVar11 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar37);
      pbVar12 = unaff_EBP;
      if ((char)bVar37 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar12;
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        uVar26 = (undefined3)((uint)puVar11 >> 8);
        cVar29 = (char)puVar11 + 'o';
        puVar43 = (uint *)CONCAT31(uVar26,cVar29);
        *puVar43 = (uint)pbStackY_54;
        cVar7 = (char)puVar40;
        *(byte *)puVar47 = (byte)*puVar47 + cVar7;
        pbStackY_54 = (byte *)CONCAT22(pbStackY_54._2_2_,uVar51);
        bVar37 = (byte)((uint)puVar47 >> 8);
        bVar54 = bVar37 < (byte)*puVar41;
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                   CONCAT11(bVar37 - (byte)*puVar41,(char)puVar47));
        if (bVar54) break;
        bVar54 = CARRY4((uint)puVar43,*puVar43);
        puVar11 = (uint *)((int)puVar43 + *puVar43);
        if (!SCARRY4((int)puVar43,*puVar43)) {
          bVar54 = CARRY4((uint)unaff_EBP,*puVar11);
          unaff_EBP = unaff_EBP + *puVar11;
        }
        *puVar11 = (*puVar11 - (int)puVar11) - (uint)bVar54;
        *(byte *)puVar47 = (byte)*puVar47 + cVar7;
        puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                   CONCAT11((char)((uint)puVar40 >> 8) + (byte)*puVar47,
                                            cVar7 - (byte)*puVar47));
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
code_r0x00402f3b:
        cVar7 = (char)puVar47;
        *pbVar13 = *pbVar13 + cVar7;
        bVar37 = (byte)puVar11;
        *(byte *)((int)puVar11 * 2) = *(byte *)((int)puVar11 * 2) ^ bVar37;
        *(byte *)puVar11 = (byte)*puVar11 + bVar37;
        *(byte *)puVar11 = (byte)*puVar11 + cVar7;
        uVar14 = *puVar11;
        *(byte *)puVar11 = (byte)*puVar11 + bVar37;
        *puVar47 = (uint)((int)puVar11 + (uint)CARRY1((byte)uVar14,bVar37) + *puVar47);
        pcVar15 = (char *)((uint)puVar11 | *puVar49);
        uVar26 = (undefined3)((uint)pcVar15 >> 8);
        cVar29 = (char)pcVar15 + *pcVar15;
        pcVar15 = (char *)CONCAT31(uVar26,cVar29);
        *pcVar15 = *pcVar15 + cVar29;
        cVar29 = cVar29 + *pcVar15;
        piVar24 = (int *)CONCAT31(uVar26,cVar29);
        *(char *)piVar24 = (char)*piVar24 + cVar29;
        iVar16 = LocalDescriptorTableRegister();
        *piVar24 = iVar16;
        bVar37 = *pbVar13;
        bVar33 = (byte)((uint)puVar40 >> 8);
        *pbVar13 = *pbVar13 + bVar33;
        iVar16 = *piVar24;
        uVar36 = (undefined2)((uint)puVar40 >> 0x10);
        bVar38 = (byte)puVar40;
        *(byte *)puVar41 = (byte)*puVar41 + cVar29;
        puVar11 = puVar41 + (uint)bVar57 * -2 + 1;
        out(*puVar41,(short)puVar47);
        *(byte *)puVar11 = (byte)*puVar11 + cVar29;
        bVar6 = *pbVar13;
        *(byte *)puVar47 = (byte)*puVar47 - bVar46;
        *(byte *)puVar11 = (byte)*puVar11 + cVar29;
        puVar43 = puVar11 + (uint)bVar57 * -2 + 1;
        out(*puVar11,(short)puVar47);
        *(byte *)puVar43 = (byte)*puVar43 + cVar29;
        bVar55 = *pbVar13;
        *(uint *)((int)puVar47 + -0x23) = *(uint *)((int)puVar47 + -0x23) & (uint)puVar43;
        puVar25 = (ushort *)((int)piVar24 + *piVar24);
        if (!SCARRY4((int)piVar24,*piVar24)) {
          *puVar25 = uVar53;
        }
        *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
        uVar39 = CONCAT11((char)((uint)puVar47 >> 8) + *(byte *)((int)puVar47 + -0x15),cVar7);
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),uVar39);
        puVar11 = (uint *)((int)puVar25 + *(int *)puVar25);
        if (!SCARRY4((int)puVar25,*(int *)puVar25)) {
          *(ushort *)puVar11 = uVar53;
        }
        cVar29 = (char)puVar11;
        *(byte *)puVar11 = (byte)*puVar11 + cVar29;
        cVar8 = ((bVar33 - (char)iVar16) - CARRY1(bVar37,bVar33) | bVar6 | bVar55) + (byte)*puVar11;
        puVar40 = (uint *)CONCAT22(uVar36,CONCAT11(cVar8,bVar38));
        uVar14 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + bVar38;
        if (CARRY1((byte)uVar14,bVar38)) {
          *(byte *)puVar11 = (byte)*puVar11 + cVar29;
          bVar37 = *(byte *)((int)puVar47 + 6);
          *(byte *)puVar47 = (byte)*puVar47 + bVar38;
          bVar6 = (cVar8 - (byte)*puVar43) + cRam14730307;
          *(byte *)puVar11 = (byte)*puVar11 + cVar29;
          bVar37 = bVar46 | bVar37 | *(byte *)((int)puVar47 + 0x2a);
          uVar14 = *puVar11;
          pbVar13 = (byte *)((int)puVar11 + (uint)CARRY1(bVar6,(byte)*puVar11) + *puVar11);
          *(byte *)puVar47 = (byte)*puVar47 + bVar38;
          cVar29 = cVar45 - (byte)*puVar43;
          cVar45 = bVar37 + *(char *)(CONCAT31((int3)(CONCAT22(uVar35,CONCAT11(bVar37,cVar45)) >> 8)
                                               ,cVar29) + 0x1e);
          *pbVar13 = *pbVar13 + (char)pbVar13;
          uVar26 = (undefined3)((uint)pbVar13 >> 8);
          bVar37 = (char)pbVar13 + 0x2aU & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
          pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x2a);
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar45,cVar29)) + 0x1f);
          *pcVar15 = *pcVar15 + bVar37 + 0x2a;
          bVar37 = bVar37 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
          pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x2a);
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar45,cVar29)) + 0x20);
          *pcVar15 = *pcVar15 + bVar37 + 0x2a;
          bVar37 = bVar37 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
          pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x2a);
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar45,cVar29)) + 0x21);
          *pcVar15 = *pcVar15 + bVar37 + 0x2a;
          bVar37 = bVar37 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
          pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x2a);
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar45,cVar29)) + 0x22);
          *pcVar15 = *pcVar15 + bVar37 + 0x2a;
          bVar37 = bVar37 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
          pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x2a);
          bVar6 = bVar6 + (byte)uVar14 + *pcVar15;
          uVar32 = CONCAT22(uVar36,CONCAT11(bVar6,bVar38));
          cVar45 = cVar45 + *(char *)(CONCAT22(uVar35,CONCAT11(cVar45,cVar29)) + 0x25);
          *pcVar15 = *pcVar15 + bVar37 + 0x2a;
          bVar37 = bVar37 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
          pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x2a);
          pcVar9 = (char *)CONCAT22(uVar35,CONCAT11(cVar45 + *(char *)(CONCAT22(uVar35,CONCAT11(
                                                  cVar45,cVar29)) + 0x26),cVar29));
          *pcVar15 = *pcVar15 + bVar37 + 0x2a;
          bVar37 = bVar37 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
          cVar29 = bVar37 + 0x2a;
          pcVar15 = (char *)CONCAT31(uVar26,cVar29);
          if ((POPCOUNT(cVar29) & 1U) == 0) {
            *pcVar15 = *pcVar15 + cVar29;
            pbVar13 = (byte *)(CONCAT31(uVar26,bVar37 + 0x4f) + -0x33282610);
            bVar37 = *pbVar13;
            bVar55 = (byte)pbVar13;
            *pbVar13 = *pbVar13 + bVar55;
            uVar26 = (undefined3)((uint)pbVar13 >> 8);
            if (!CARRY1(bVar37,bVar55)) {
              if (!SCARRY1(bVar55,'\0')) {
                *pbVar13 = *pbVar13 + bVar55;
                uVar32 = CONCAT22(uVar36,CONCAT11(bVar6 | (byte)*puVar47,bVar38));
                bVar55 = bVar55 & (byte)*puVar47;
                *(char *)CONCAT31(uVar26,bVar55) = *(char *)CONCAT31(uVar26,bVar55) + bVar55;
                pcVar15 = (char *)CONCAT31(uVar26,bVar55 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar15 = (char *)CONCAT31(uVar26,bVar55 + *pcVar9);
              if (SCARRY1(bVar55,*pcVar9) != (char)(bVar55 + *pcVar9) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar37 = bVar55 + *pcVar9;
            pbVar13 = (byte *)CONCAT31(uVar26,bVar37);
            if (SCARRY1(bVar55,*pcVar9) == (char)bVar37 < '\0') {
              pcVar15 = (char *)CONCAT22(uVar36,CONCAT11(bVar6 | (byte)*puVar47,bVar38));
              *pcVar9 = *pcVar9 + cVar7;
              *(byte *)puVar47 = (byte)*puVar47 ^ bVar37;
              *(char *)((int)pbVar13 * 2) = *(char *)((int)pbVar13 * 2) + bVar37;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar15 = *pcVar15 + (char)pcVar15;
            uVar26 = (undefined3)((uint)pcVar15 >> 8);
            bVar37 = (char)pcVar15 + 0x2aU & (byte)*puVar47;
            *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
            pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x2a);
            *pcVar15 = *pcVar15 + bVar37 + 0x2a;
            pcVar15 = (char *)CONCAT31(uVar26,bVar37 + 0x54 & (byte)*puVar47);
code_r0x00403072:
            cVar29 = (char)pcVar15;
            *pcVar15 = *pcVar15 + cVar29;
            uVar26 = (undefined3)((uint)pcVar15 >> 8);
            pcVar15 = (char *)CONCAT31(uVar26,cVar29 + '*');
            *pcVar15 = *pcVar15 + cVar29 + '*';
            bVar37 = cVar29 + 0x54U & (byte)*puVar47;
            *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
            pcStackY_8c = (char *)CONCAT22(pcStackY_8c._2_2_,uVar50);
            uVar32 = CONCAT22((short)((uint)uVar32 >> 0x10),
                              CONCAT11((char)((uint)uVar32 >> 8) +
                                       *(char *)CONCAT31(uVar26,bVar37 + 0x2a),(char)uVar32));
            *(byte *)(puVar43 + 0x828000) = (byte)puVar43[0x828000] - cVar7;
            pcVar15 = pcStackY_8c;
code_r0x0040309a:
            cVar29 = (char)pcVar15;
            *pcVar15 = *pcVar15 + cVar29;
            pcStackY_8c = (char *)CONCAT22(pcStackY_8c._2_2_,uVar51);
            *pcVar15 = *pcVar15 + cVar29;
            pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar29 + 0x2aU & (byte)*puVar47);
          }
          cVar29 = (char)pbVar13;
          *pbVar13 = *pbVar13 + cVar29;
          uVar26 = (undefined3)((uint)pbVar13 >> 8);
          cVar45 = cVar29 + '*';
          pcVar15 = (char *)CONCAT31(uVar26,cVar45);
          *(byte *)(puVar43 + 0x828000) = (byte)puVar43[0x828000] - cVar7;
          *pcVar15 = *pcVar15 + cVar45;
          cVar8 = (char)pcStackY_8c - (byte)*puVar43;
          pcVar9 = (char *)CONCAT22((short)((uint)pcStackY_8c >> 0x10),
                                    CONCAT11((char)((uint)pcStackY_8c >> 8) +
                                             *(char *)(CONCAT31((int3)((uint)pcStackY_8c >> 8),cVar8
                                                               ) + 0x34),cVar8));
          *pcVar15 = *pcVar15 + cVar45;
          bVar37 = cVar29 + 0x54U & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar37) = *(char *)CONCAT31(uVar26,bVar37) + bVar37;
          pbVar13 = (byte *)CONCAT31(uVar26,bVar37 + 0x2a);
          bVar37 = (byte)((uint)uVar32 >> 8);
          pcVar15 = (char *)CONCAT22((short)((uint)uVar32 >> 0x10),
                                     CONCAT11(bVar37 + *pbVar13,(char)uVar32));
          pbVar13 = pbVar13 + (uint)CARRY1(bVar37,*pbVar13) + *(int *)pbVar13;
          *(byte *)puVar47 = (byte)*puVar47 + (char)uVar32;
          uVar26 = (undefined3)((uint)pbVar13 >> 8);
          cVar29 = (byte)pbVar13 - *pbVar13;
          piVar24 = (int *)CONCAT31(uVar26,cVar29);
          puVar43 = (uint *)((int)puVar43 + (uint)((byte)pbVar13 < *pbVar13) + *piVar24);
          cVar29 = cVar29 + (char)*piVar24;
          pbVar13 = (byte *)CONCAT31(uVar26,cVar29);
          *pbVar13 = *pbVar13 + cVar29;
code_r0x004030df:
          *pcVar15 = *pcVar15 + cVar7;
          bVar37 = *pbVar13;
          bVar6 = (byte)pbVar13;
          *pbVar13 = *pbVar13 + bVar6;
          *(byte **)(pcVar9 + -0x41) =
               (byte *)((int)puVar43 + (uint)CARRY1(bVar37,bVar6) + *(int *)(pcVar9 + -0x41));
          *pbVar13 = *pbVar13 + bVar6;
          uVar26 = (undefined3)((uint)pbVar13 >> 8);
          bVar6 = bVar6 | (byte)*puVar43;
          *(char *)CONCAT31(uVar26,bVar6) = *(char *)CONCAT31(uVar26,bVar6) + bVar6;
          pcVar15 = (char *)CONCAT31(uVar26,bVar6 + 0x7b);
          *pcVar15 = *pcVar15 + bVar6 + 0x7b;
          pbVar13 = (byte *)((int)puVar43 + CONCAT31(uVar26,bVar6 - 8) + -1);
          *pbVar13 = *pbVar13 + (bVar6 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar41 = puVar43 + (uint)bVar57 * -2 + 1;
        out(*puVar43,uVar39);
        pbVar12 = unaff_EBP + 1;
        pbStackY_54 = unaff_EBP;
      }
      bVar37 = cVar29 - bVar54;
      pbVar12 = (byte *)((int)puVar41 + (int)puVar49 * 2);
      bVar54 = CARRY1(*pbVar12,bVar37);
      *pbVar12 = *pbVar12 + bVar37;
code_r0x00402ef9:
      pcVar15 = (char *)CONCAT31(uVar26,bVar37 - bVar54);
      pbVar12 = (byte *)((int)puVar49 + (int)unaff_EBP * 2);
      *pbVar12 = *pbVar12 + (bVar37 - bVar54);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar40 = (byte)*puVar40 + (char)puVar47;
  puVar11 = puVar47 + 0x2828000;
  bVar37 = (byte)puVar40;
  bVar54 = (byte)*puVar11 < bVar37;
  *(byte *)puVar11 = (byte)*puVar11 - bVar37;
  bVar37 = (byte)pbVar12 + *pbVar12;
  piVar24 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar37 + bVar54);
  puVar11 = puVar49;
  uVar52 = uVar50;
  if (CARRY1((byte)pbVar12,*pbVar12) || CARRY1(bVar37,bVar54)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar15 = *pcVar15 + bVar6;
  uVar52 = uVar50;
  uStack_c = uVar51;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar45) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  pbVar12 = (byte *)CONCAT22(uVar35,CONCAT11(cVar7 + unaff_EBP[(int)pcVar15 * 4],uVar30));
  unaff_EDI[(int)pcVar15] = unaff_EDI[(int)pcVar15] + bVar6;
  goto code_r0x0040254a;
}


