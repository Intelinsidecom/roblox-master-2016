/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403841
 * Raw Name    : set_SettingsList
 * Demangled   : set_SettingsList
 * Prototype   : byte * set_SettingsList(byte * value, byte * param_2)
 * Local Vars  : value, pbStack_14, pbStack_10, pbStack_4, iVar1, pcVar2, uVar3, uVar4, bVar5, cVar6, bVar7, bVar8, bVar9, in_EAX, piVar10, pbVar11, pbVar12, pcVar13, pcVar14, puVar15, uVar16, uVar17, uVar18, extraout_ECX, uVar19, pbVar20, puVar21, uVar22, cVar23, uVar24, unaff_EBX, cVar25, bVar26, unaff_EBP, param_2, unaff_ESI, unaff_EDI, in_ES, in_CS, in_DS, bVar27, uVar28, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall set_SettingsList(byte *value,byte *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined6 uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 in_EAX;
  undefined3 uVar16;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint3 uVar17;
  char *pcVar13;
  char *pcVar14;
  uint *puVar15;
  undefined2 uVar18;
  byte *extraout_ECX;
  undefined2 uVar19;
  byte *pbVar20;
  uint *puVar21;
  undefined3 uVar22;
  char cVar23;
  undefined1 uVar24;
  char cVar25;
  byte bVar26;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_DS;
  bool bVar27;
  undefined8 uVar28;
  byte *unaff_retaddr;
  byte *pbStack_14;
  byte *pbStack_10;
  byte *pbStack_4;
  
                    /* .NET CLR Managed Code */
  bVar8 = (byte)in_EAX;
  bVar27 = CARRY1(bVar8,*unaff_EBX);
  pbVar12 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar8 + *unaff_EBX);
  pbVar20 = param_2;
  if (SCARRY1(bVar8,*unaff_EBX) == (char)(bVar8 + *unaff_EBX) < '\0') goto code_r0x0040389c;
code_r0x00403845:
  cVar6 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cVar6;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  pcVar14 = (char *)CONCAT31(uVar16,cVar6 + '*');
  pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_DS);
  uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar23 = (char)unaff_EBX;
  cVar25 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x58];
  *pcVar14 = *pcVar14 + cVar6 + '*';
  bVar5 = cVar6 + 0x54U & *param_2;
  iVar1 = *(int *)(unaff_EBP + 0x58);
  *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
  pcVar14 = (char *)CONCAT31(uVar16,bVar5 + 0x2a);
  cVar25 = cVar25 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar25,cVar23)) + 0x55);
  *pcVar14 = *pcVar14 + bVar5 + 0x2a;
  pcVar14 = (char *)CONCAT31(uVar16,bVar5 + 0x57);
  pbVar20 = param_2 + *(int *)pbStack_4;
  cVar25 = cVar25 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar25,cVar23)) + 0x55);
  *pcVar14 = *pcVar14 + bVar5 + 0x57;
  cVar6 = bVar5 - 0x3a;
  pcVar14 = (char *)CONCAT31(uVar16,cVar6);
  *pcVar14 = *pcVar14 + cVar6;
  bVar8 = *pbVar20;
  unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar25 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar25,
                                                  cVar23)) + 0x59),cVar23));
  *pcVar14 = *pcVar14 + cVar6;
  bVar7 = bVar5 - 0x10 & *pbVar20;
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x59) + iVar1;
  *(char *)CONCAT31(uVar16,bVar7) = *(char *)CONCAT31(uVar16,bVar7) + bVar7;
  bVar7 = bVar7 + 0x2a;
  pbVar12 = (byte *)CONCAT31(uVar16,bVar7);
  pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_DS);
  cVar6 = unaff_EDI[0x17];
  *pbVar12 = *pbVar12 + bVar7;
  bVar5 = *pbVar20;
  unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_DS);
  cVar25 = unaff_EDI[0x1a];
  *pbVar12 = *pbVar12 + bVar7;
  value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((((byte)((uint)value >> 8) | bVar8) + cVar6 | bVar5) + cVar25 |
                                    *pbVar20,(char)value));
  *unaff_EBX = *unaff_EBX + cVar23;
  *(byte *)((int)pbVar12 * 2) = *(byte *)((int)pbVar12 * 2) ^ bVar7;
  bVar27 = CARRY1(*pbVar12,bVar7);
  *pbVar12 = *pbVar12 + bVar7;
  unaff_ESI = pbStack_4;
code_r0x0040389c:
  bVar8 = *pbVar12;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  *value = *value + (char)pbVar20;
  bVar8 = (((char)pbVar12 - bVar8) - bVar27) + *pbVar20;
  pbVar12 = (byte *)CONCAT31(uVar16,bVar8);
  param_2 = unaff_retaddr;
  if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x004038f6;
  *pbVar12 = *pbVar12 + bVar8;
  cVar6 = (bVar8 + 0x6f) - (0x90 < bVar8);
  pbVar11 = (byte *)CONCAT31(uVar16,cVar6);
  bVar8 = *pbVar20;
  *pbVar20 = *pbVar20 + (char)value;
  param_2 = pbVar20;
  if (SCARRY1(bVar8,(char)value) == (char)*pbVar20 < '\0') {
    unaff_EBP[0x2b060000] = unaff_EBP[0x2b060000] - cVar6;
    cVar6 = cVar6 + *pbVar20;
    pbVar12 = (byte *)CONCAT31(uVar16,cVar6);
    goto code_r0x0040390c;
  }
  do {
    *pbVar11 = *pbVar11 + (char)pbVar11;
    while( true ) {
      uVar16 = (undefined3)((uint)pbVar11 >> 8);
      cVar6 = (char)pbVar11 + '\x02';
      pbVar20 = (byte *)CONCAT31(uVar16,cVar6);
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)unaff_ESI;
      cVar6 = (char)pbVar20 + *param_2;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar6);
code_r0x0040390c:
      cVar25 = (char)pbVar12;
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        *unaff_ESI = *unaff_ESI + cVar25;
        goto code_r0x0040395a;
      }
      *pbVar12 = *pbVar12 + cVar25;
      bVar8 = cVar25 + 2;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
code_r0x00403912:
      bVar27 = (POPCOUNT(bVar8) & 1U) == 0;
      if (!bVar27) goto code_r0x00403967;
      *pbVar12 = *pbVar12 + (char)pbVar12;
code_r0x00403916:
      bVar5 = (char)pbVar12 + 0x6f;
      pbVar20 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
      bVar8 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar5;
      if (*pbVar20 == 0 || SCARRY1(bVar8,bVar5) != (char)*pbVar20 < '\0') goto code_r0x00403979;
      *pbVar20 = *pbVar20 + bVar5;
      pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),(char)pbVar12 + -100);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar5) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
code_r0x00403926:
      *(byte **)pbVar11 = unaff_retaddr;
      bVar8 = *unaff_ESI;
      bVar5 = (byte)pbVar11;
      *unaff_ESI = *unaff_ESI + bVar5;
      if (CARRY1(bVar8,bVar5)) {
        *pbVar11 = *pbVar11 + bVar5;
        uVar16 = (undefined3)((uint)pbVar11 >> 8);
        bVar5 = bVar5 | pbVar11[0x400005b];
        pbVar12 = (byte *)CONCAT31(uVar16,bVar5);
        pbVar20 = unaff_ESI;
        if ((char)bVar5 < '\x01') goto code_r0x00403991;
        *pbVar12 = *pbVar12 + bVar5;
        cVar6 = bVar5 + 0x28;
        pbVar12 = (byte *)CONCAT31(uVar16,cVar6);
        *(byte **)pbVar12 = pbVar12 + (uint)(0xd7 < bVar5) + *(int *)pbVar12;
        bVar8 = *unaff_EBX;
        bVar5 = (byte)((uint)value >> 8);
        *unaff_EBX = *unaff_EBX + bVar5;
        if (CARRY1(bVar8,bVar5)) {
          *pbVar12 = *pbVar12 + cVar6;
          value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11(bVar5 | *pbVar12,(char)value));
          *unaff_ESI = *unaff_ESI + cVar6;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                                (char)unaff_EBX));
          *pbVar12 = *pbVar12 + cVar6;
code_r0x00403950:
          uVar16 = (undefined3)((uint)pbVar12 >> 8);
          bVar5 = (char)pbVar12 + 0x6f;
          bVar8 = *(byte *)CONCAT31(uVar16,bVar5);
          *param_2 = *param_2 + (char)value;
          pbVar12 = (byte *)CONCAT31(uVar16,(bVar5 & bVar8) + *unaff_ESI);
          *value = *value - (char)((uint)param_2 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar20 = *pbVar20 + cVar6;
    cVar6 = (char)pbVar11 + '.' + *param_2;
    pbVar12 = (byte *)CONCAT31(uVar16,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      pbVar20 = param_2 + (int)pbVar12;
      *pbVar20 = *pbVar20 + cVar6;
      bVar8 = *pbVar20;
      goto code_r0x00403912;
    }
    *pbVar12 = *pbVar12 + cVar6;
    bVar8 = cVar6 + 2;
    pbVar12 = (byte *)CONCAT31(uVar16,bVar8);
    if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403916;
    *pbVar12 = *pbVar12 + bVar8;
    cVar25 = cVar6 + 'q';
    piVar10 = (int *)CONCAT31(uVar16,cVar25);
    *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0x90 < bVar8);
    bVar8 = *unaff_EBX;
    bVar5 = (byte)((uint)value >> 8);
    *unaff_EBX = *unaff_EBX + bVar5;
    if (!CARRY1(bVar8,bVar5)) {
      out(*(undefined4 *)unaff_ESI,(short)param_2);
      cVar6 = (cVar25 - (char)*piVar10) - CARRY1(bVar8,bVar5);
      *param_2 = *param_2 + (char)value;
      pbVar12 = (byte *)CONCAT31(uVar16,cVar6 - *(char *)CONCAT31(uVar16,cVar6));
      pbStack_4 = value;
      goto code_r0x00403845;
    }
    *(char *)piVar10 = (char)*piVar10 + cVar25;
    uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar8 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56];
    *(char *)piVar10 = (char)*piVar10 + cVar25;
    pcVar14 = (char *)CONCAT31(uVar16,cVar6 + 's');
    unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar18,CONCAT11(bVar8,(
                                                  char)unaff_EBX)) + 0x56),(char)unaff_EBX));
    *pcVar14 = *pcVar14 + cVar6 + 's';
    bVar8 = cVar6 - 0xf;
    *(char *)CONCAT31(uVar16,bVar8) = *(char *)CONCAT31(uVar16,bVar8) + bVar8;
    bVar5 = cVar6 + 0x1e;
    pbVar11 = (byte *)CONCAT31(uVar16,bVar5);
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         value + (uint)(0xd2 < bVar8) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    in_ES = *(undefined2 *)pbVar11;
    bVar8 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar5;
    param_2 = value;
    if (CARRY1(bVar8,bVar5)) {
      *pbVar11 = *pbVar11 + bVar5;
      pbVar12 = (byte *)CONCAT31(uVar16,bVar5 | pbVar11[0x400005a]);
      if ('\0' < (char)(bVar5 | pbVar11[0x400005a])) {
code_r0x004038f6:
        bVar8 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar8;
        uVar16 = (undefined3)((uint)pbVar12 >> 8);
        cVar6 = ((bVar8 + 0x28) - *(char *)CONCAT31(uVar16,bVar8 + 0x28)) - (0xd7 < bVar8);
        pbVar20 = (byte *)CONCAT31(uVar16,cVar6);
        bVar8 = *unaff_EBX;
        bVar5 = (byte)((uint)value >> 8);
        *unaff_EBX = *unaff_EBX + bVar5;
        if (CARRY1(bVar8,bVar5)) {
          *pbVar20 = *pbVar20 + cVar6;
          value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11(bVar5 | *pbVar20,(char)value));
          *unaff_ESI = *unaff_ESI + cVar6;
          goto code_r0x00403908;
        }
        pbVar11 = pbVar20 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar12 = *pbVar12 + (char)pbVar12;
  param_2[0x16060000] = param_2[0x16060000] - (char)value;
  unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
  cVar6 = (char)pbVar12 + '\x02';
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
  bVar27 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403967:
  if (!bVar27) goto code_r0x004039be;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  bVar8 = (char)pbVar12 + 0x6f;
  bVar8 = bVar8 & *(byte *)CONCAT31(uVar16,bVar8);
  pbVar20 = (byte *)CONCAT31(uVar16,bVar8);
  *param_2 = *param_2 + (char)value;
  param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar8;
code_r0x00403979:
  bVar8 = (char)pbVar20 - *unaff_EDI;
  bVar27 = bVar8 < *value;
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar8 - *value);
  do {
    cVar6 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar6 + bVar27;
    *pbVar12 = *pbVar12 + cVar6;
    *value = *value + (char)param_2;
    value[0x101c00aa] = value[0x101c00aa] + (char)unaff_EBX;
    *pbVar12 = *pbVar12 + cVar6;
    *(byte **)unaff_ESI = unaff_EBX + *(int *)unaff_ESI;
    bVar8 = (byte)((uint)value >> 8);
    value = (byte *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar8 + *pbVar12,(char)value));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar8,*pbVar12) + *(int *)pbVar12;
    pbVar20 = unaff_ESI;
code_r0x00403991:
    cVar6 = (char)value;
    *param_2 = *param_2 + cVar6;
    cVar25 = (char)unaff_EBX - pbVar20[2];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar25);
    unaff_ESI = pbVar20;
    if ((POPCOUNT(cVar25) & 1U) != 0) goto code_r0x0040395a;
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    uVar17 = (uint3)((uint)pbVar12 >> 8);
    bVar8 = (byte)pbVar12 | *unaff_EBX;
    piVar10 = (int *)CONCAT31(uVar17,bVar8);
    bVar5 = (byte)((uint)value >> 8);
    bVar7 = (byte)param_2;
    if (bVar8 == 0) {
      *(char *)piVar10 = (char)*piVar10;
      unaff_ESI = pbVar20 + 4;
      out(*(undefined4 *)pbVar20,(short)param_2);
      pbVar12 = (byte *)((uint)uVar17 << 8);
      *param_2 = *param_2 + cVar6;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar7 - *unaff_EBX);
      *unaff_EBX = *unaff_EBX;
      *param_2 = *param_2 + bVar5;
      *pbVar12 = *pbVar12;
      *unaff_EBX = *unaff_EBX + cVar25;
      *pbVar12 = *pbVar12;
      *(byte **)(unaff_EBX + -0x3d) = unaff_ESI + *(int *)(unaff_EBX + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar10 = (char)*piVar10 + bVar8;
    value = (byte *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar5 | *param_2,cVar6));
    unaff_ESI = pbVar20 + *piVar10;
    pcVar14 = (char *)((int)piVar10 + *piVar10);
    bVar5 = (char)pcVar14 - *pcVar14;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar5);
    bVar8 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar5;
    pbVar12 = pbVar12 + (-(uint)CARRY1(bVar8,bVar5) - *(int *)pbVar12);
    bVar27 = CARRY1(*value,bVar7);
    *value = *value + bVar7;
  } while (!bVar27);
  *pbVar12 = *pbVar12 + (char)pbVar12;
  value = (byte *)CONCAT31((int3)((uint)value >> 8),(byte)value | *param_2);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar12 = *pbVar12 + (byte)pbVar12;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  bVar8 = (byte)pbVar12 | *param_2;
  pcVar14 = (char *)CONCAT31(uVar16,bVar8);
  if ((POPCOUNT(bVar8) & 1U) == 0) goto code_r0x004039c8;
  cVar6 = *pcVar14;
  *pcVar14 = *pcVar14 + bVar8;
  cVar25 = *pcVar14;
  if (!SCARRY1(cVar6,bVar8)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar14 = *pcVar14 + bVar8;
  *unaff_ESI = *unaff_ESI + 1;
  uVar3 = *(undefined6 *)CONCAT31(uVar16,bVar8 + 6);
  pbVar20 = (byte *)uVar3;
  bVar8 = *param_2;
  bVar5 = (byte)value;
  *param_2 = *param_2 + bVar5;
  if (!CARRY1(bVar8,bVar5)) goto code_r0x00403979;
  *pbVar20 = *pbVar20 + (char)uVar3;
  bVar7 = (byte)((uint)value >> 8) | *pbVar20;
  uVar18 = CONCAT11(bVar7,bVar5);
  pbVar20 = pbVar20 + -*(int *)pbVar20;
  bVar8 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + bVar7;
  if (CARRY1(bVar8,bVar7)) {
    cVar6 = (char)pbVar20;
    *pbVar20 = *pbVar20 + cVar6;
    bVar8 = *param_2;
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - unaff_EBX[-0x3a],(char)param_2)
                              );
    *pbVar20 = *pbVar20 + cVar6;
    uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar26 = (byte)((uint)unaff_EBX >> 8) | param_2[0x32];
    pcVar14 = (char *)CONCAT22(uVar19,CONCAT11(bVar26,(char)unaff_EBX));
    pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_CS);
    cVar25 = cVar6 + *pcVar14 + '-';
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar25);
    *pbVar20 = *pbVar20;
    bVar9 = *param_2;
    cVar23 = (char)unaff_EBX - *unaff_ESI;
    cVar6 = unaff_EDI[0x17];
    *pbVar20 = *pbVar20 + cVar25;
    uVar18 = CONCAT11((bVar7 | bVar8) + cVar6 | *param_2,bVar5 - bVar9);
    unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar26 + *(char *)(CONCAT31((int3)((uint)pcVar14 >>
                                                                                   8),cVar23) + 0x4e
                                                                   ),cVar23));
    *pbVar20 = *pbVar20 + cVar25;
  }
  value = (byte *)CONCAT22((short)((uint)value >> 0x10),uVar18);
  bVar8 = (byte)pbVar20;
  uVar16 = (undefined3)((uint)pbVar20 >> 8);
  pcVar14 = (char *)CONCAT31(uVar16,bVar8 + 0x28);
  *pcVar14 = (*pcVar14 - (bVar8 + 0x28)) - (0xd7 < bVar8);
  *param_2 = *param_2 + (char)uVar18;
  bVar5 = bVar8 + 0x1b;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4f],
                                        (char)unaff_EBX));
  *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
  pcVar13 = (char *)CONCAT31(uVar16,bVar8 + 0x43);
  *pcVar13 = (*pcVar13 - (bVar8 + 0x43)) - (0xd7 < bVar5);
  *param_2 = *param_2 + (char)uVar18;
  pcVar14 = pcVar13 + -0x6b721c;
  pcVar13 = pcVar13 + -0x6b721a;
  *pcVar13 = *pcVar13 + (char)((uint)param_2 >> 8);
  cVar25 = *pcVar13;
code_r0x00403a22:
  if ((POPCOUNT(cVar25) & 1U) == 0) {
code_r0x00403a24:
    cVar6 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar6;
    uVar16 = (undefined3)((uint)pcVar14 >> 8);
    bVar8 = cVar6 + 2;
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *(char *)CONCAT31(uVar16,bVar8) = *(char *)CONCAT31(uVar16,bVar8) + bVar8;
      piVar10 = (int *)CONCAT31(uVar16,cVar6 + '*');
      *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0xd7 < bVar8);
      bVar8 = *param_2;
      bVar9 = (byte)value;
      *param_2 = *param_2 + bVar9;
      out(*(undefined4 *)unaff_ESI,(short)param_2);
      bVar7 = ((cVar6 + '*') - (char)*piVar10) - CARRY1(bVar8,bVar9);
      pbVar20 = (byte *)CONCAT31(uVar16,bVar7);
      *param_2 = *param_2 + bVar9;
      uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar24 = SUB41(unaff_EBX,0);
      cVar6 = (char)((uint)unaff_EBX >> 8) - unaff_ESI[0x1f];
      unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar6,uVar24));
      *pbVar20 = *pbVar20 + bVar7;
      bVar5 = *param_2;
      bVar8 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar7;
      unaff_ESI = unaff_ESI + ((4 - *(int *)pbVar20) - (uint)CARRY1(bVar8,bVar7));
      pbVar20 = (byte *)CONCAT31(uVar16,bVar7);
      value = (byte *)(CONCAT22((short)((uint)value >> 0x10),
                                CONCAT11((byte)((uint)value >> 8) | bVar5,bVar9)) + -1);
      bVar8 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar7;
      bVar8 = (bVar7 - *pbVar20) - CARRY1(bVar8,bVar7);
      *value = *value + (char)param_2;
      bVar27 = CARRY1(bVar8,*param_2);
      bVar8 = bVar8 + *param_2;
      pbVar20 = (byte *)CONCAT31(uVar16,bVar8);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *pbVar20 = *pbVar20 + bVar8;
        cVar25 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pbVar12 = (byte *)CONCAT31(uVar16,cVar25);
        bVar8 = *param_2;
        *param_2 = *param_2 + (char)value;
        if (SCARRY1(bVar8,(char)value) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar12 = *pbVar12 + cVar25;
        pcVar14 = (char *)CONCAT31(uVar16,cVar25 + '\x02');
        bVar5 = cVar6 + unaff_EBX[0x52];
        unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar5,uVar24));
        *pcVar14 = *pcVar14 + cVar25 + '\x02';
        bVar8 = cVar25 + 4;
        pbVar12 = (byte *)CONCAT31(uVar16,bVar8);
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          *pbVar12 = *pbVar12 + bVar8;
          cVar6 = (cVar25 + 's') - (0x90 < bVar8);
          pcVar14 = (char *)CONCAT31(uVar16,cVar6);
          bVar8 = (byte)((uint)value >> 8);
          bVar27 = CARRY1(*unaff_EBX,bVar8);
          *unaff_EBX = *unaff_EBX + bVar8;
          pbVar20 = unaff_ESI;
          if (bVar27) {
            *pcVar14 = *pcVar14 + cVar6;
            unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar5 | unaff_EBP[0x5c],uVar24));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar12;
        unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar5 + unaff_EBX[0x52],uVar24));
code_r0x00403abf:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        cVar6 = (char)pbVar12 + '\x02';
        pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
        bVar27 = (POPCOUNT(cVar6) & 1U) == 0;
        pbStack_10 = unaff_EBP;
        if (!bVar27) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar27) {
          *pbVar20 = *pbVar20 + (byte)pbVar20;
          bVar8 = (byte)pbVar20 | pbVar20[0x400005e];
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar8);
          pbStack_10 = unaff_EBP;
          if ((char)bVar8 < '\x01') goto code_r0x00403b0b;
          *pbVar12 = *pbVar12 + bVar8;
code_r0x00403aaf:
          cVar6 = (char)pbVar12 + '(';
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
          *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
          bVar8 = *unaff_EBX;
          bVar5 = (byte)((uint)value >> 8);
          *unaff_EBX = *unaff_EBX + bVar5;
          pbVar11 = unaff_EBP;
          if (!CARRY1(bVar8,bVar5)) goto code_r0x00403ad8;
          *pbVar12 = *pbVar12 + cVar6;
          value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11(bVar5 | *unaff_EBX,(char)value));
          if ((POPCOUNT(*param_2 - cVar6) & 1U) != 0) {
            *unaff_ESI = *unaff_ESI + cVar6;
            pbStack_10 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                              (char)unaff_EBX));
      }
      bVar8 = (byte)pbVar20;
      *pbVar20 = *pbVar20 + bVar8;
      cVar6 = (bVar8 + 0x6f) - (0x90 < bVar8);
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar6);
      bVar8 = *unaff_EBX;
      cVar25 = (char)((uint)value >> 8);
      *unaff_EBX = *unaff_EBX + cVar25;
      pbStack_10 = unaff_EBP;
      if (*unaff_EBX == 0 || SCARRY1(bVar8,cVar25) != (char)*unaff_EBX < '\0')
      goto code_r0x00403b2c;
      *pcVar14 = *pcVar14 + cVar6;
    }
    else {
      pcVar14 = (char *)CONCAT31(uVar16,bVar8 + *param_2);
      pbVar20 = unaff_ESI;
      if ((POPCOUNT(bVar8 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar14) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar12 = unaff_EBP;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 + 0x2d);
code_r0x00403ad8:
    pbStack_10 = pbVar11;
    bVar8 = *pbVar12;
    bVar5 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar5;
    pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
    if (!CARRY1(bVar8,bVar5)) goto code_r0x00403afc;
    *pbVar12 = *pbVar12 + bVar5;
    bVar5 = bVar5 | pbVar12[0x400005d];
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
    pbVar20 = unaff_ESI;
    if ((char)bVar5 < '\x01') {
      *pbVar12 = *pbVar12 + bVar5;
      value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | *param_2,(char)value));
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                            (char)unaff_EBX));
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar12 = *pbVar12 + (char)pbVar12;
    cVar6 = (char)pbVar12 + '(';
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    bVar8 = *unaff_EBX;
    bVar5 = (byte)((uint)value >> 8);
    *unaff_EBX = *unaff_EBX + bVar5;
    unaff_ESI = pbVar20;
    if (!CARRY1(bVar8,bVar5)) goto code_r0x00403b0b;
    *pbVar12 = *pbVar12 + cVar6;
  }
  else {
    bVar8 = *param_2;
    *param_2 = *param_2 + (char)value;
    if (SCARRY1(bVar8,(char)value) == (char)*param_2 < '\0') {
      pbVar12 = unaff_EBP;
      pbVar11 = (byte *)(pcVar14 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x02');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                          (char)unaff_EBX));
    pbVar20 = unaff_ESI;
code_r0x00403a7d:
    cVar6 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar6;
    uVar16 = (undefined3)((uint)pcVar14 >> 8);
    cVar25 = cVar6 + '-';
    pbVar11 = (byte *)CONCAT31(uVar16,cVar25);
    pbVar12 = unaff_EBP;
    unaff_ESI = pbVar20;
    if ((POPCOUNT(cVar25 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar11 = *pbVar11 + cVar25;
    bVar8 = cVar6 + 0x2f;
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      bVar8 = *param_2;
      *param_2 = *param_2 + (byte)value;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar8,(byte)value);
      pbVar12 = (byte *)CONCAT31(uVar16,cVar6 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar16,bVar8) = *(char *)CONCAT31(uVar16,bVar8) + bVar8;
    bVar27 = 0x90 < bVar8;
    pcVar14 = (char *)CONCAT31(uVar16,cVar6 + -0x62);
code_r0x00403a8f:
    uVar16 = (undefined3)((uint)pcVar14 >> 8);
    bVar5 = (char)pcVar14 - bVar27;
    pbVar12 = (byte *)CONCAT31(uVar16,bVar5);
    bVar8 = *unaff_EBX;
    cVar6 = (char)((uint)value >> 8);
    *unaff_EBX = *unaff_EBX + cVar6;
    pbStack_10 = unaff_EBP;
    unaff_ESI = pbVar20;
    if (*unaff_EBX != 0 && SCARRY1(bVar8,cVar6) == (char)*unaff_EBX < '\0') {
      *pbVar12 = *pbVar12 + bVar5;
      unaff_ESI = (byte *)CONCAT31(uVar16,bVar5 + 0x2d);
      *(byte **)(pbVar20 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar5) + *(int *)(pbVar20 + (int)unaff_EDI * 8);
      bVar27 = CARRY1(*pbVar20,(byte)pbVar20);
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      goto code_r0x00403aa1;
    }
  }
  value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | *pbVar12,(char)value));
  *unaff_ESI = *unaff_ESI + (char)pbVar12;
code_r0x00403afc:
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  bVar5 = (char)pbVar12 + 0x6f;
  bVar8 = *(byte *)CONCAT31(uVar16,bVar5);
  *param_2 = *param_2 + (char)value;
  pbVar12 = (byte *)CONCAT31(uVar16,(bVar5 & bVar8) + *unaff_ESI);
  *value = *value - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    bVar8 = (byte)pbVar12 | *unaff_EBX;
    piVar10 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
    if (bVar8 != 0) {
      pbStack_10 = pbStack_10 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar10 = (char)*piVar10 + bVar8;
      value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | *param_2,(char)value));
      pbStack_14 = pbStack_14 + *piVar10;
      pcVar14 = (char *)((int)piVar10 + *piVar10);
      uVar16 = (undefined3)((uint)pcVar14 >> 8);
      bVar5 = (char)pcVar14 - *pcVar14;
      pbVar20 = (byte *)CONCAT31(uVar16,bVar5);
      bVar8 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar5;
      piVar10 = (int *)CONCAT31(uVar16,bVar5 - CARRY1(bVar8,bVar5));
    }
    *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
    unaff_ESI = pbStack_14 + 4;
    out(*(undefined4 *)pbStack_14,(short)param_2);
    pbVar12 = (byte *)(((uint)piVar10 >> 8) * 0x100);
    *param_2 = *param_2 + (byte)value;
    bVar8 = (char)param_2 - *unaff_EBX;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar8);
    *unaff_EBX = *unaff_EBX;
    *param_2 = *param_2 + (char)((uint)value >> 8);
    *pbVar12 = *pbVar12;
    pcVar14 = (char *)(((uint)piVar10 >> 8) * 0x200);
    *pcVar14 = *pcVar14 + (char)unaff_EBX;
    bVar27 = CARRY1(*value,bVar8);
    *value = *value + bVar8;
    pbStack_14 = unaff_ESI;
    if (bVar27) break;
    while( true ) {
      *(byte **)pbVar12 = pbVar12 + (uint)bVar27 + *(int *)pbVar12;
      unaff_EDI = unaff_EDI + 4;
      pbVar12[(int)param_2] = pbVar12[(int)param_2] + (char)unaff_EBX;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      *(byte **)pbStack_14 = unaff_EBX + *(int *)pbStack_14;
      bVar8 = (byte)((uint)value >> 8);
      cVar6 = (char)value;
      value = (byte *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar8 + *pbVar12,cVar6));
      pbVar12 = pbVar12 + (uint)CARRY1(bVar8,*pbVar12) + *(int *)pbVar12;
      *param_2 = *param_2 + cVar6;
      cVar6 = (char)unaff_EBX - pbStack_14[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6);
      unaff_ESI = pbStack_14;
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar12 = *pbVar12 + (char)pbVar12;
      param_2[0x16060000] = param_2[0x16060000] - (char)value;
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
      cVar6 = (char)pbVar12 + '\x02';
      pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
      bVar27 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403b18:
      bVar8 = (byte)pbVar20;
      uVar16 = (undefined3)((uint)pbVar20 >> 8);
      if (!bVar27) {
        *param_2 = *param_2 + (char)value;
        pbVar12 = (byte *)CONCAT31(uVar16,bVar8 | *unaff_ESI);
code_r0x00403b73:
        pbVar20 = (byte *)(unaff_EDI + *(int *)(pbStack_10 + -0x37));
        *pbVar12 = *pbVar12 + (byte)pbVar12;
        uVar16 = (undefined3)((uint)pbVar12 >> 8);
        bVar8 = (byte)pbVar12 | *param_2;
        pcVar14 = (char *)CONCAT31(uVar16,bVar8);
        uVar28 = CONCAT44(param_2,pcVar14);
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          *pcVar14 = *pcVar14 + bVar8;
          *unaff_ESI = *unaff_ESI + 1;
          return (byte *)CONCAT31(uVar16,bVar8 + 6);
        }
        bVar8 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + 1;
        pcVar2 = (code *)swi(4);
        if (SCARRY1(bVar8,'\x01')) {
          uVar28 = (*pcVar2)();
          value = extraout_ECX;
        }
        pbVar12 = (byte *)uVar28;
        *pbVar12 = *pbVar12 + (char)uVar28;
        cVar25 = (char)((ulonglong)uVar28 >> 0x20);
        puVar21 = (uint *)CONCAT22((short)((ulonglong)uVar28 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar28 >> 0x28) | unaff_EBX[0x2f],
                                            cVar25));
        *pbVar12 = *pbVar12 + (char)uVar28;
        cVar6 = (char)value;
        bVar7 = (byte)((uint)value >> 8) | *pbVar12;
        pbVar12 = pbVar12 + *(int *)pbVar12;
        bVar8 = *unaff_EBX;
        *unaff_EBX = *unaff_EBX + bVar7;
        bVar5 = (byte)pbVar12;
        if (CARRY1(bVar8,bVar7)) {
          *pbVar12 = *pbVar12 + bVar5;
          bVar7 = bVar7 | (byte)*puVar21;
          *unaff_EBX = *unaff_EBX - cVar25;
          *pbVar12 = *pbVar12 + bVar5;
          uVar16 = (undefined3)((uint)pbVar12 >> 8);
          bVar5 = bVar5 | (byte)*puVar21;
          piVar10 = (int *)CONCAT31(uVar16,bVar5);
          pbStack_10 = pbStack_10 + *piVar10;
          *(byte *)piVar10 = (char)*piVar10 + bVar5;
          cVar25 = (char)unaff_EBX - *unaff_ESI;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar25) + 0x5f),cVar25));
          *(byte *)piVar10 = (char)*piVar10 + bVar5;
          bVar8 = bVar5 + 0x2a & (byte)*puVar21;
          pbVar20 = pbVar20 + *(int *)(pbStack_10 + 0x5f);
          *(char *)CONCAT31(uVar16,bVar8) = *(char *)CONCAT31(uVar16,bVar8) + bVar8;
          pbVar12 = (byte *)CONCAT31(uVar16,bVar8 + 0x2a);
          *(byte *)puVar21 = (byte)*puVar21 + 0x28;
          *pbVar12 = *pbVar12 + bVar8 + 0x2a;
        }
        else {
          *unaff_ESI = *unaff_ESI + bVar5;
        }
        pcVar14 = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar7,cVar6));
        *pbStack_10 = *pbStack_10 - bVar7;
        *(byte *)puVar21 = (byte)*puVar21 + cVar6;
        bVar8 = (byte)pbVar12 - 0xb;
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
        if (10 < (byte)pbVar12) {
          *pbVar11 = *pbVar11 | bVar8;
          return pbVar11;
        }
        *(byte *)puVar21 = (byte)*puVar21 + cVar6;
        do {
          bVar8 = unaff_EBX[-0x23];
          bVar7 = (byte)pbVar11;
          *pbVar11 = *pbVar11 + bVar7;
          bVar5 = pbStack_10[-0x22];
          *pbVar11 = *pbVar11 + bVar7;
          uVar16 = (undefined3)((uint)pbVar11 >> 8);
          bVar7 = bVar7 | *unaff_ESI;
          pbVar12 = (byte *)CONCAT31(uVar16,bVar7);
          cVar25 = (char)unaff_EBX - *unaff_ESI;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                       CONCAT11((char)((uint)unaff_EBX >> 8) + bVar8
                                                                | bVar5,(char)unaff_EBX)) >> 8),
                                       cVar25);
          cVar6 = (char)pcVar14;
          pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                     CONCAT11((char)((uint)pcVar14 >> 8) + *pbVar12,cVar6));
          *(byte *)puVar21 = (byte)*puVar21 + cVar6;
          bVar5 = bVar7 - *pbVar12;
          pbVar11 = (byte *)CONCAT31(uVar16,bVar5);
          unaff_ESI = unaff_ESI + (-(uint)(bVar7 < *pbVar12) - *(int *)pbVar11);
          puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 * '\x02');
          *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
          *pbVar20 = *pbVar20 + cVar25;
          bVar8 = *pbVar11;
          *pbVar11 = *pbVar11 + bVar5;
          *puVar21 = (uint)(pbVar11 + (uint)CARRY1(bVar8,bVar5) + *puVar21);
        } while ((POPCOUNT(*puVar21 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar11 = *pbVar11 + (char)pbVar11;
        pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 | pbVar11[(int)pcVar14])
        ;
        bVar27 = false;
        pbVar11 = (byte *)((uint)pbVar11 & 0xffffff00);
        do {
          pbVar20 = pbVar20 + (-(uint)bVar27 - *(int *)unaff_EBX);
          pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),*pcVar14);
          *pcVar13 = *pcVar13 + *pcVar14;
          pbVar11 = (byte *)CONCAT31((int3)((uint)(pcVar13 +
                                                  (unaff_ESI[0x2000001] < (byte)((uint)pcVar14 >> 8)
                                                  ) + 0xda7d) >> 8),
                                     ((byte)(pcVar13 +
                                            (unaff_ESI[0x2000001] < (byte)((uint)pcVar14 >> 8)) +
                                            0xda7d) | (byte)*puVar21) + 0x7d);
          pcVar14 = pcVar14 + -1;
          *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar14;
          while( true ) {
            uVar22 = (undefined3)((uint)puVar21 >> 8);
            cVar6 = (char)puVar21 + *(char *)((int)pbVar20 * 2 + 0xa0000e1);
            puVar21 = (uint *)CONCAT31(uVar22,cVar6);
            bVar27 = CARRY1((byte)pbVar11,(byte)*puVar21);
            uVar16 = (undefined3)((uint)pbVar11 >> 8);
            bVar8 = (byte)pbVar11 + (byte)*puVar21;
            pbVar11 = (byte *)CONCAT31(uVar16,bVar8);
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *pbVar11 = *pbVar11 + bVar8;
            cVar25 = (char)pcVar14;
            pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar14 >> 8) | pbVar20[-0x65],cVar25))
            ;
            bVar5 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar8;
            if (CARRY1(bVar5,bVar8)) {
              *pbVar11 = *pbVar11 + bVar8;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_10[-0x1d]
                                                    ,(char)unaff_EBX));
              *pbVar11 = *pbVar11 + bVar8;
              bVar27 = false;
              bVar8 = bVar8 | (byte)*puVar21;
              pcVar13 = (char *)CONCAT31(uVar16,bVar8);
              while( true ) {
                bVar5 = (byte)pcVar13;
                uVar16 = (undefined3)((uint)pcVar13 >> 8);
                if (bVar27 == (char)bVar8 < '\0') break;
                *pcVar13 = *pcVar13 + bVar5;
                bVar5 = bVar5 | (byte)*puVar21;
                puVar15 = (uint *)CONCAT31(uVar16,bVar5);
                *pbVar20 = *pbVar20 << 1 | (char)*pbVar20 < '\0';
                uVar4 = *puVar15;
                *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                pbStack_10 = pbStack_10 + (-(uint)CARRY1((byte)uVar4,bVar5) - *puVar15);
                *puVar15 = *puVar15 << 1 | (uint)((int)*puVar15 < 0);
                while( true ) {
                  uVar4 = *puVar21;
                  *(byte *)puVar21 = (byte)*puVar21 + (byte)pcVar14;
                  cVar6 = (char)puVar15 + 'o' + CARRY1((byte)uVar4,(byte)pcVar14);
                  pcVar13 = (char *)CONCAT31((int3)((uint)puVar15 >> 8),cVar6);
                  pcVar14 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar6) & 1U) != 0) break;
                  *pcVar13 = *pcVar13 + cVar6;
                  bVar8 = bRamfe140212;
                  pcVar14 = (char *)0x0;
                  uVar16 = (undefined3)((uint)(pcVar13 + -0x732b0000) >> 8);
                  bVar5 = in(0);
                  puVar15 = (uint *)CONCAT31(uVar16,bVar5);
                  uVar4 = *puVar21;
                  *(byte *)puVar21 = (byte)*puVar21;
                  if (SCARRY1((byte)uVar4,'\0') != (char)(byte)*puVar21 < '\0') {
                    *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                    bVar5 = bVar5 | (byte)*puVar21;
                    puVar15 = (uint *)CONCAT31(uVar16,bVar5);
                    if ((POPCOUNT(bVar5) & 1U) == 0) {
                      *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                      pcVar14 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar8 | (byte)*puVar15) << 8);
                      *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                    puVar15 = (uint *)CONCAT31(uVar16,bVar5 | (byte)*puVar21);
                  }
                }
                *(byte *)puVar21 = (byte)*puVar21;
                bVar27 = SCARRY1((char)puVar21,*pbVar20);
                bVar8 = (char)puVar21 + *pbVar20;
                puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar8);
              }
              if (bVar27 == (char)bVar8 < '\0') {
                *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar14;
                pbVar11 = (byte *)((uint)pcVar13 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar13 = *pcVar13 + bVar5;
              pbVar11 = (byte *)CONCAT31(uVar16,(bVar5 | (byte)*puVar21) + 0x7d);
              pcVar14 = pcVar14 + -1;
              *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar14;
            }
            else {
              *(byte *)puVar21 = (byte)*puVar21 + cVar25;
              puVar21 = (uint *)CONCAT31(uVar22,cVar6 + *(char *)((int)pbVar20 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar20 = *pbVar20 + bVar8;
      bVar8 = bVar8 + 0x6f & *(byte *)CONCAT31(uVar16,bVar8 + 0x6f);
      *param_2 = *param_2 + (char)value;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar8;
      pcVar14 = (char *)CONCAT31(uVar16,bVar8 - *unaff_EDI);
code_r0x00403b2c:
      bVar8 = (char)pcVar14 - *pcVar14;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
      *pbVar12 = *pbVar12 + bVar8;
      *(byte **)pbVar12 = param_2 + *(int *)pbVar12;
      *pbVar12 = *pbVar12 + bVar8;
      bVar27 = CARRY1(*pbVar12,bVar8);
      *pbVar12 = *pbVar12 + bVar8;
      pbStack_14 = unaff_ESI;
    }
  }
  *pbVar12 = *pbVar12;
  value = (byte *)CONCAT31((int3)((uint)value >> 8),(byte)value | *param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_10 = pbStack_10 + -*puVar15;
  do {
    bVar8 = (byte)puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + bVar8;
    pbVar20 = pbVar20 + -*(int *)(pbStack_10 + -0x1a);
    *(byte *)puVar15 = (byte)*puVar15 + bVar8;
    bVar8 = bVar8 | (byte)*puVar21;
    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar8);
    *(byte *)puVar15 = (byte)*puVar15 | bVar8;
    bVar8 = (byte)*puVar15;
    pbStack_10 = (byte *)0x2700001;
    while ((POPCOUNT(bVar8) & 1U) == 0) {
      do {
        *(byte *)puVar15 = (byte)*puVar15 + (byte)puVar15;
        bVar8 = (byte)puVar15 | (byte)*puVar21;
        puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar8);
        if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
        uVar17 = CONCAT21((short)((uint)pcVar14 >> 0x10),(byte)((uint)pcVar14 >> 8) | bRamfe140212);
        while( true ) {
          pcVar14 = (char *)((uint)uVar17 << 8);
          bVar9 = (byte)puVar15;
          *(byte *)puVar15 = (byte)*puVar15 & bVar9;
          bVar5 = *unaff_EBX;
          bVar26 = (byte)uVar17;
          bVar7 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar26;
          bVar8 = *unaff_EBX;
          if (!CARRY1(bVar5,bVar26)) break;
          *(byte *)puVar15 = (byte)*puVar15 + bVar9;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar15 = (byte)*puVar15 + bVar9;
          bVar9 = bVar9 | (byte)*puVar21;
          puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar9);
          bVar27 = (POPCOUNT(bVar9) & 1U) == 0;
          while( true ) {
            cVar6 = (char)((uint)unaff_EBX >> 8);
            uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar27) {
              *(byte *)puVar21 = (byte)*puVar21;
              unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar6 + unaff_EBX[-0x1f],(char)unaff_EBX)
                                          );
              goto code_r0x00403d52;
            }
            *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
            uVar19 = (undefined2)((uint)pcVar14 >> 0x10);
            bVar5 = (byte)((uint)pcVar14 >> 8) | (byte)*puVar15;
            uVar17 = CONCAT21(uVar19,bVar5);
            *puVar15 = *puVar15 & (uint)puVar15;
            *unaff_EBX = *unaff_EBX + bVar5;
            uVar16 = (undefined3)((uint)puVar15 >> 8);
            bVar8 = (char)puVar15 - bVar5;
            pcVar14 = (char *)CONCAT31(uVar16,bVar8);
            *pcVar14 = *pcVar14 + bVar8;
            bVar8 = bVar8 | (byte)*puVar21;
            puVar15 = (uint *)CONCAT31(uVar16,bVar8);
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *(byte *)puVar15 = (byte)*puVar15 + bVar8;
            pcVar14 = (char *)((uint)CONCAT21(uVar19,bVar5 | (byte)*puVar15) << 8);
            *puVar15 = *puVar15 - (int)puVar15;
            *(byte *)puVar21 = (byte)*puVar21;
            unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar6 + unaff_EBX[-0x1d],(char)unaff_EBX));
            do {
              *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
              uVar18 = (undefined2)((uint)puVar21 >> 0x10);
              cVar6 = (char)puVar21;
              bVar8 = (byte)((uint)puVar21 >> 8) | unaff_EBX[-0x17];
              puVar21 = (uint *)CONCAT22(uVar18,CONCAT11(bVar8,cVar6));
              *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar15 = (byte)*puVar15 + (byte)puVar15;
                uVar16 = (undefined3)((uint)puVar15 >> 8);
                bVar7 = (byte)puVar15 | (byte)*puVar21;
                pcVar13 = (char *)CONCAT31(uVar16,bVar7);
                bVar5 = unaff_EBX[-0x16];
                *pcVar13 = *pcVar13 + bVar7;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar13 = *pcVar13 + bVar7;
                pbVar12 = (byte *)CONCAT31(uVar16,bVar7 | (byte)*puVar21);
                while( true ) {
                  *pbVar12 = *pbVar12 + (byte)pbVar12;
                  uVar16 = (undefined3)((uint)pbVar12 >> 8);
                  bVar5 = (byte)pbVar12 | (byte)*puVar21;
                  puVar15 = (uint *)CONCAT31(uVar16,bVar5);
                  if ((POPCOUNT(bVar5) & 1U) != 0) break;
                  *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                  bVar7 = pbVar20[-0x14];
                  *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                  bVar5 = bVar5 | (byte)*puVar21;
                  pcVar13 = (char *)CONCAT31(uVar16,bVar5);
                  bVar9 = unaff_EBX[-0x15];
                  *pcVar13 = *pcVar13 + bVar5;
                  pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),
                                                    (byte)((uint)pcVar14 >> 8) | bVar7 |
                                                    pbVar20[-0x13]) << 8);
                  *pcVar13 = *pcVar13 + bVar5;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar9 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar13 = *pcVar13 + bVar5;
                  pbVar12 = (byte *)CONCAT31(uVar16,bVar5 | (byte)*puVar21);
                  do {
                    do {
                      bVar7 = (byte)pbVar12;
                      *pbVar12 = *pbVar12 + bVar7;
                      cVar23 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar12,
                                                            cVar23));
                      *pbVar12 = bVar7;
                      *pbVar12 = *pbVar12 + bVar7;
                      cVar25 = (char)((uint)pcVar14 >> 8) + *pbVar12;
                      pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),cVar25) << 8)
                      ;
                      uVar16 = (undefined3)((uint)pbVar12 >> 8);
                      bVar7 = bVar7 & *pbVar12;
                      pbVar12 = (byte *)CONCAT31(uVar16,bVar7);
                      bVar5 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar25;
                    } while (SCARRY1(bVar5,cVar25) == (char)*unaff_EBX < '\0');
                    *pbVar12 = *pbVar12 + bVar7;
                    bVar7 = bVar7 | (byte)*puVar21;
                    pbVar12 = (byte *)CONCAT31(uVar16,bVar7);
                    if ((POPCOUNT(bVar7) & 1U) == 0) {
                      *pbVar12 = *pbVar12 + bVar7;
                      *pbVar12 = *pbVar12 + bVar7;
                      cVar6 = cVar6 - bVar8;
                      pbVar11 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),cVar6);
                      *pbVar12 = *pbVar12 + bVar7;
                      bRam0312382b = bRam0312382b | *pbVar11;
                      while( true ) {
                        bVar5 = (byte)pbVar12;
                        *pbVar12 = *pbVar12 + bVar5;
                        bRam0312382b = bRam0312382b | (pbVar20 + 0x21b0000)[(int)pbVar12];
                        uVar16 = (undefined3)((uint)pbVar12 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar11 = *pbVar11 + bRam0312382b;
                        pbVar12 = (byte *)CONCAT31(uVar16,bVar5 | *unaff_ESI);
                      }
                      *pbVar12 = *pbVar12 + bVar5;
                      bVar5 = bVar5 | *unaff_ESI;
                      pcVar14 = (char *)CONCAT31(uVar16,bVar5);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar11);
                      *pcVar14 = *pcVar14 + bVar5;
                      uVar19 = CONCAT11(bVar8 | bRam6f0a002b,cVar6);
                      pcVar13 = (char *)CONCAT22(uVar18,uVar19);
                      *pcVar14 = *pcVar14 + bVar5;
                      *pcVar13 = *pcVar13 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar19);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar23 + *pcVar14);
                  } while (SCARRY1(cVar23,*pcVar14) != (char)(cVar23 + *pcVar14) < '\0');
                }
                uVar4 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21;
              } while (SCARRY1((byte)uVar4,'\0') != (char)(byte)*puVar21 < '\0');
              *(byte *)puVar21 = (byte)*puVar21;
              *pcVar14 = *pcVar14 - (char)unaff_EBX;
              *(byte *)puVar15 = (byte)*puVar15 + bVar5;
              bVar5 = bVar5 | (byte)*puVar21;
              puVar15 = (uint *)CONCAT31(uVar16,bVar5);
              bVar27 = (POPCOUNT(bVar5) & 1U) == 0;
            } while (bVar27);
          }
        }
      } while (SCARRY1(bVar7,bVar26));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar14 >> 8);
    *pbVar20 = *pbVar20 - (char)unaff_EBX;
  } while( true );
}


