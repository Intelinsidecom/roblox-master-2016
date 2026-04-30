/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040387b
 * Raw Name    : set_ErrorMessage
 * Demangled   : set_ErrorMessage
 * Prototype   : byte * set_ErrorMessage(byte * value, byte * param_2)
 * Local Vars  : param_2, pbStack_14, pbStack_10, pbStack_c, pcVar1, uVar2, value, uVar3, cVar4, bVar5, bVar6, bVar7, bVar8, in_EAX, piVar9, pbVar10, pbVar11, pcVar12, pcVar13, pbVar14, pbVar15, puVar16, uVar17, uVar18, uVar19, extraout_ECX, uVar20, puVar21, uVar22, cVar23, cVar24, uVar25, unaff_EBX, bVar26, unaff_EBP, unaff_ESI, pbVar27, unaff_EDI, in_ES, in_CS, in_DS, bVar28, uVar29
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall set_ErrorMessage(byte *value,byte *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 in_EAX;
  undefined3 uVar17;
  byte *pbVar10;
  byte *pbVar11;
  uint3 uVar18;
  char *pcVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint *puVar16;
  undefined2 uVar19;
  byte *extraout_ECX;
  undefined2 uVar20;
  uint *puVar21;
  undefined3 uVar22;
  char cVar23;
  char cVar24;
  undefined1 uVar25;
  byte bVar26;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar27;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_DS;
  bool bVar28;
  undefined8 uVar29;
  byte *pbStack_14;
  byte *pbStack_10;
  byte *pbStack_c;
  int *piVar9;
  
                    /* .NET CLR Managed Code */
  cVar4 = (char)in_EAX + *unaff_EBX;
  piVar9 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),cVar4);
  pbVar11 = unaff_ESI;
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar4 < '\0') goto code_r0x004038cd;
code_r0x0040387f:
  *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
  uVar17 = (undefined3)((uint)piVar9 >> 8);
  bVar5 = (char)piVar9 + 0x2a;
  pbVar11 = (byte *)CONCAT31(uVar17,bVar5);
  cVar4 = unaff_EDI[0x17];
  cVar24 = (char)value;
  *pbVar11 = *pbVar11 + bVar5;
  bVar6 = *param_2;
  pbStack_c = (byte *)CONCAT22(pbStack_c._2_2_,in_DS);
  cVar23 = unaff_EDI[0x1a];
  *pbVar11 = *pbVar11 + bVar5;
  value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11(((char)((uint)value >> 8) + cVar4 | bVar6) + cVar23 | *param_2,
                                    cVar24));
  *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
  *(byte *)((int)pbVar11 * 2) = *(byte *)((int)pbVar11 * 2) ^ bVar5;
  bVar6 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar5;
  bVar7 = *pbVar11;
  *value = *value + (char)param_2;
  bVar6 = ((bVar5 - bVar7) - CARRY1(bVar6,bVar5)) + *param_2;
  pbVar11 = (byte *)CONCAT31(uVar17,bVar6);
  pbVar15 = pbStack_c;
  if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x004038f6;
  *pbVar11 = *pbVar11 + bVar6;
  cVar4 = (bVar6 + 0x6f) - (0x90 < bVar6);
  pbVar10 = (byte *)CONCAT31(uVar17,cVar4);
  bVar6 = *param_2;
  *param_2 = *param_2 + cVar24;
  pbVar15 = param_2;
  if (SCARRY1(bVar6,cVar24) == (char)*param_2 < '\0') {
    unaff_EBP[0x2b060000] = unaff_EBP[0x2b060000] - cVar4;
    cVar4 = cVar4 + *param_2;
    pbVar11 = (byte *)CONCAT31(uVar17,cVar4);
    goto code_r0x0040390c;
  }
  do {
    *pbVar10 = *pbVar10 + (char)pbVar10;
    while( true ) {
      uVar17 = (undefined3)((uint)pbVar10 >> 8);
      cVar4 = (char)pbVar10 + '\x02';
      pbVar11 = (byte *)CONCAT31(uVar17,cVar4);
      if ((POPCOUNT(cVar4) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)unaff_ESI;
      cVar4 = (char)pbVar11 + *pbVar15;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar4);
code_r0x0040390c:
      cVar23 = (char)pbVar11;
      if ((POPCOUNT(cVar4) & 1U) != 0) {
        *unaff_ESI = *unaff_ESI + cVar23;
        goto code_r0x0040395a;
      }
      *pbVar11 = *pbVar11 + cVar23;
      bVar6 = cVar23 + 2;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar6);
code_r0x00403912:
      bVar28 = (POPCOUNT(bVar6) & 1U) == 0;
      pbVar27 = unaff_ESI;
      if (!bVar28) goto code_r0x00403967;
      *pbVar11 = *pbVar11 + (char)pbVar11;
code_r0x00403916:
      bVar7 = (char)pbVar11 + 0x6f;
      pbVar10 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
      bVar6 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar7;
      if (*pbVar10 == 0 || SCARRY1(bVar6,bVar7) != (char)*pbVar10 < '\0') goto code_r0x00403979;
      *pbVar10 = *pbVar10 + bVar7;
      pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar11 >> 8),(char)pbVar11 + -100);
      *(byte **)(pbVar27 + (int)unaff_EDI * 8) =
           pbVar15 + (uint)(0xd2 < bVar7) + *(int *)(pbVar27 + (int)unaff_EDI * 8);
      pbStack_c = (byte *)CONCAT22(pbStack_c._2_2_,in_ES);
      unaff_ESI = pbVar27;
code_r0x00403926:
      *(byte **)pbVar10 = pbStack_c;
      bVar6 = *unaff_ESI;
      bVar7 = (byte)pbVar10;
      *unaff_ESI = *unaff_ESI + bVar7;
      if (CARRY1(bVar6,bVar7)) {
        *pbVar10 = *pbVar10 + bVar7;
        uVar17 = (undefined3)((uint)pbVar10 >> 8);
        bVar7 = bVar7 | pbVar10[0x400005b];
        pbVar11 = (byte *)CONCAT31(uVar17,bVar7);
        if ((char)bVar7 < '\x01') goto code_r0x00403991;
        *pbVar11 = *pbVar11 + bVar7;
        cVar4 = bVar7 + 0x28;
        pbVar11 = (byte *)CONCAT31(uVar17,cVar4);
        *(byte **)pbVar11 = pbVar11 + (uint)(0xd7 < bVar7) + *(int *)pbVar11;
        bVar6 = *unaff_EBX;
        bVar7 = (byte)((uint)value >> 8);
        *unaff_EBX = *unaff_EBX + bVar7;
        if (CARRY1(bVar6,bVar7)) {
          *pbVar11 = *pbVar11 + cVar4;
          value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11(bVar7 | *pbVar11,(char)value));
          *unaff_ESI = *unaff_ESI + cVar4;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                                (char)unaff_EBX));
          *pbVar11 = *pbVar11 + cVar4;
code_r0x00403950:
          uVar17 = (undefined3)((uint)pbVar11 >> 8);
          bVar7 = (char)pbVar11 + 0x6f;
          bVar6 = *(byte *)CONCAT31(uVar17,bVar7);
          *pbVar15 = *pbVar15 + (char)value;
          pbVar11 = (byte *)CONCAT31(uVar17,(bVar7 & bVar6) + *unaff_ESI);
          *value = *value - (char)((uint)pbVar15 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar11 = *pbVar11 + cVar4;
    cVar4 = (char)pbVar10 + '.' + *pbVar15;
    pbVar11 = (byte *)CONCAT31(uVar17,cVar4);
    if ((POPCOUNT(cVar4) & 1U) != 0) {
      pbVar10 = pbVar15 + (int)pbVar11;
      *pbVar10 = *pbVar10 + cVar4;
      bVar6 = *pbVar10;
      goto code_r0x00403912;
    }
    *pbVar11 = *pbVar11 + cVar4;
    bVar6 = cVar4 + 2;
    pbVar11 = (byte *)CONCAT31(uVar17,bVar6);
    pbVar27 = unaff_ESI;
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403916;
    *pbVar11 = *pbVar11 + bVar6;
    piVar9 = (int *)CONCAT31(uVar17,cVar4 + 'q');
    *piVar9 = (*piVar9 - (int)piVar9) - (uint)(0x90 < bVar6);
    bVar6 = *unaff_EBX;
    bVar7 = (byte)((uint)value >> 8);
    *unaff_EBX = *unaff_EBX + bVar7;
    pbVar11 = value;
    if (!CARRY1(bVar6,bVar7)) {
      out(*(undefined4 *)unaff_ESI,(short)pbVar15);
      bVar6 = ((cVar4 + 'q') - (char)*piVar9) - CARRY1(bVar6,bVar7);
      *pbVar15 = *pbVar15 + (char)value;
      cVar4 = bVar6 - *(byte *)CONCAT31(uVar17,bVar6);
      unaff_ESI = unaff_ESI +
                  ((4 - *(int *)CONCAT31(uVar17,cVar4)) -
                  (uint)(bVar6 < *(byte *)CONCAT31(uVar17,bVar6)));
      piVar9 = (int *)CONCAT31(uVar17,cVar4);
      param_2 = pbVar15;
      goto code_r0x0040387f;
    }
code_r0x004038cd:
    pbVar15 = pbVar11;
    cVar4 = (char)piVar9;
    *(char *)piVar9 = (char)*piVar9 + cVar4;
    uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar6 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56];
    *(char *)piVar9 = (char)*piVar9 + cVar4;
    uVar17 = (undefined3)((uint)piVar9 >> 8);
    pcVar13 = (char *)CONCAT31(uVar17,cVar4 + '\x02');
    unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar19,CONCAT11(bVar6,(
                                                  char)unaff_EBX)) + 0x56),(char)unaff_EBX));
    *pcVar13 = *pcVar13 + cVar4 + '\x02';
    bVar6 = cVar4 + 0x80;
    *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
    bVar7 = cVar4 + 0xad;
    pbVar10 = (byte *)CONCAT31(uVar17,bVar7);
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         pbVar15 + (uint)(0xd2 < bVar6) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    in_ES = *(undefined2 *)pbVar10;
    bVar6 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar7;
    if (CARRY1(bVar6,bVar7)) {
      *pbVar10 = *pbVar10 + bVar7;
      pbVar11 = (byte *)CONCAT31(uVar17,bVar7 | pbVar10[0x400005a]);
      if ('\0' < (char)(bVar7 | pbVar10[0x400005a])) {
code_r0x004038f6:
        bVar6 = (byte)pbVar11;
        *pbVar11 = *pbVar11 + bVar6;
        uVar17 = (undefined3)((uint)pbVar11 >> 8);
        cVar4 = ((bVar6 + 0x28) - *(char *)CONCAT31(uVar17,bVar6 + 0x28)) - (0xd7 < bVar6);
        pbVar11 = (byte *)CONCAT31(uVar17,cVar4);
        bVar6 = *unaff_EBX;
        bVar7 = (byte)((uint)value >> 8);
        *unaff_EBX = *unaff_EBX + bVar7;
        if (CARRY1(bVar6,bVar7)) {
          *pbVar11 = *pbVar11 + cVar4;
          value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11(bVar7 | *pbVar11,(char)value));
          *unaff_ESI = *unaff_ESI + cVar4;
          goto code_r0x00403908;
        }
        pbVar10 = pbVar11 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar11 = *pbVar11 + (char)pbVar11;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)value;
  unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
  cVar4 = (char)pbVar11 + '\x02';
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar4);
  bVar28 = (POPCOUNT(cVar4) & 1U) == 0;
  pbVar27 = unaff_ESI;
code_r0x00403967:
  if (!bVar28) goto code_r0x004039be;
  *pbVar11 = *pbVar11 + (char)pbVar11;
  uVar17 = (undefined3)((uint)pbVar11 >> 8);
  bVar6 = (char)pbVar11 + 0x6f;
  bVar6 = bVar6 & *(byte *)CONCAT31(uVar17,bVar6);
  pbVar10 = (byte *)CONCAT31(uVar17,bVar6);
  *pbVar15 = *pbVar15 + (char)value;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar6;
code_r0x00403979:
  bVar6 = (char)pbVar10 - *unaff_EDI;
  bVar28 = bVar6 < *value;
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6 - *value);
  do {
    cVar4 = (char)pbVar11;
    *pbVar11 = *pbVar11 + cVar4 + bVar28;
    *pbVar11 = *pbVar11 + cVar4;
    *value = *value + (char)pbVar15;
    value[0x101c00aa] = value[0x101c00aa] + (char)unaff_EBX;
    *pbVar11 = *pbVar11 + cVar4;
    *(byte **)pbVar27 = unaff_EBX + *(int *)pbVar27;
    bVar6 = (byte)((uint)value >> 8);
    value = (byte *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar6 + *pbVar11,(char)value));
    pbVar11 = pbVar11 + (uint)CARRY1(bVar6,*pbVar11) + *(int *)pbVar11;
    unaff_ESI = pbVar27;
code_r0x00403991:
    cVar4 = (char)value;
    *pbVar15 = *pbVar15 + cVar4;
    cVar23 = (char)unaff_EBX - unaff_ESI[2];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar23);
    if ((POPCOUNT(cVar23) & 1U) != 0) goto code_r0x0040395a;
    *pbVar11 = *pbVar11 + (byte)pbVar11;
    uVar18 = (uint3)((uint)pbVar11 >> 8);
    bVar6 = (byte)pbVar11 | *unaff_EBX;
    piVar9 = (int *)CONCAT31(uVar18,bVar6);
    bVar7 = (byte)((uint)value >> 8);
    bVar5 = (byte)pbVar15;
    if (bVar6 == 0) {
      *(char *)piVar9 = (char)*piVar9;
      pbVar27 = unaff_ESI + 4;
      out(*(undefined4 *)unaff_ESI,(short)pbVar15);
      pbVar11 = (byte *)((uint)uVar18 << 8);
      *pbVar15 = *pbVar15 + cVar4;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar5 - *unaff_EBX);
      *unaff_EBX = *unaff_EBX;
      *pbVar15 = *pbVar15 + bVar7;
      *pbVar11 = *pbVar11;
      *unaff_EBX = *unaff_EBX + cVar23;
      *pbVar11 = *pbVar11;
      *(byte **)(unaff_EBX + -0x3d) = pbVar27 + *(int *)(unaff_EBX + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar9 = (char)*piVar9 + bVar6;
    value = (byte *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar7 | *pbVar15,cVar4));
    pbVar27 = unaff_ESI + *piVar9;
    pcVar13 = (char *)((int)piVar9 + *piVar9);
    bVar7 = (char)pcVar13 - *pcVar13;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar7);
    bVar6 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar7;
    pbVar11 = pbVar11 + (-(uint)CARRY1(bVar6,bVar7) - *(int *)pbVar11);
    bVar28 = CARRY1(*value,bVar5);
    *value = *value + bVar5;
  } while (!bVar28);
  *pbVar11 = *pbVar11 + (char)pbVar11;
  value = (byte *)CONCAT31((int3)((uint)value >> 8),(byte)value | *pbVar15);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar11 = *pbVar11 + (byte)pbVar11;
  uVar17 = (undefined3)((uint)pbVar11 >> 8);
  bVar6 = (byte)pbVar11 | *pbVar15;
  pcVar13 = (char *)CONCAT31(uVar17,bVar6);
  if ((POPCOUNT(bVar6) & 1U) == 0) goto code_r0x004039c8;
  cVar4 = *pcVar13;
  *pcVar13 = *pcVar13 + bVar6;
  cVar23 = *pcVar13;
  if (!SCARRY1(cVar4,bVar6)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar13 = *pcVar13 + bVar6;
  *pbVar27 = *pbVar27 + 1;
  uVar2 = *(undefined6 *)CONCAT31(uVar17,bVar6 + 6);
  pbVar10 = (byte *)uVar2;
  bVar6 = *pbVar15;
  bVar7 = (byte)value;
  *pbVar15 = *pbVar15 + bVar7;
  if (!CARRY1(bVar6,bVar7)) goto code_r0x00403979;
  *pbVar10 = *pbVar10 + (char)uVar2;
  bVar5 = (byte)((uint)value >> 8) | *pbVar10;
  uVar19 = CONCAT11(bVar5,bVar7);
  pbVar10 = pbVar10 + -*(int *)pbVar10;
  bVar6 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + bVar5;
  if (CARRY1(bVar6,bVar5)) {
    cVar4 = (char)pbVar10;
    *pbVar10 = *pbVar10 + cVar4;
    bVar6 = *pbVar15;
    pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                               CONCAT11((char)((uint)pbVar15 >> 8) - unaff_EBX[-0x3a],(char)pbVar15)
                              );
    *pbVar10 = *pbVar10 + cVar4;
    uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar26 = (byte)((uint)unaff_EBX >> 8) | pbVar15[0x32];
    pcVar13 = (char *)CONCAT22(uVar20,CONCAT11(bVar26,(char)unaff_EBX));
    pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_CS);
    cVar23 = cVar4 + *pcVar13 + '-';
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar23);
    *pbVar10 = *pbVar10;
    bVar8 = *pbVar15;
    cVar24 = (char)unaff_EBX - *pbVar27;
    cVar4 = unaff_EDI[0x17];
    *pbVar10 = *pbVar10 + cVar23;
    uVar19 = CONCAT11((bVar5 | bVar6) + cVar4 | *pbVar15,bVar7 - bVar8);
    unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar26 + *(char *)(CONCAT31((int3)((uint)pcVar13 >>
                                                                                   8),cVar24) + 0x4e
                                                                   ),cVar24));
    *pbVar10 = *pbVar10 + cVar23;
  }
  value = (byte *)CONCAT22((short)((uint)value >> 0x10),uVar19);
  bVar6 = (byte)pbVar10;
  uVar17 = (undefined3)((uint)pbVar10 >> 8);
  pcVar13 = (char *)CONCAT31(uVar17,bVar6 + 0x28);
  *pcVar13 = (*pcVar13 - (bVar6 + 0x28)) - (0xd7 < bVar6);
  *pbVar15 = *pbVar15 + (char)uVar19;
  bVar7 = bVar6 + 0x1b;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4f],
                                        (char)unaff_EBX));
  *(char *)CONCAT31(uVar17,bVar7) = *(char *)CONCAT31(uVar17,bVar7) + bVar7;
  pcVar12 = (char *)CONCAT31(uVar17,bVar6 + 0x43);
  *pcVar12 = (*pcVar12 - (bVar6 + 0x43)) - (0xd7 < bVar7);
  *pbVar15 = *pbVar15 + (char)uVar19;
  pcVar13 = pcVar12 + -0x6b721c;
  pcVar12 = pcVar12 + -0x6b721a;
  *pcVar12 = *pcVar12 + (char)((uint)pbVar15 >> 8);
  cVar23 = *pcVar12;
code_r0x00403a22:
  if ((POPCOUNT(cVar23) & 1U) == 0) {
code_r0x00403a24:
    cVar4 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar4;
    uVar17 = (undefined3)((uint)pcVar13 >> 8);
    bVar6 = cVar4 + 2;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
      piVar9 = (int *)CONCAT31(uVar17,cVar4 + '*');
      *piVar9 = (*piVar9 - (int)piVar9) - (uint)(0xd7 < bVar6);
      bVar6 = *pbVar15;
      bVar8 = (byte)value;
      *pbVar15 = *pbVar15 + bVar8;
      out(*(undefined4 *)pbVar27,(short)pbVar15);
      bVar5 = ((cVar4 + '*') - (char)*piVar9) - CARRY1(bVar6,bVar8);
      pbVar11 = (byte *)CONCAT31(uVar17,bVar5);
      *pbVar15 = *pbVar15 + bVar8;
      uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar25 = SUB41(unaff_EBX,0);
      cVar4 = (char)((uint)unaff_EBX >> 8) - pbVar27[0x1f];
      unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar4,uVar25));
      *pbVar11 = *pbVar11 + bVar5;
      bVar7 = *pbVar15;
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      pbVar27 = pbVar27 + ((4 - *(int *)pbVar11) - (uint)CARRY1(bVar6,bVar5));
      pbVar11 = (byte *)CONCAT31(uVar17,bVar5);
      value = (byte *)(CONCAT22((short)((uint)value >> 0x10),
                                CONCAT11((byte)((uint)value >> 8) | bVar7,bVar8)) + -1);
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      bVar6 = (bVar5 - *pbVar11) - CARRY1(bVar6,bVar5);
      *value = *value + (char)pbVar15;
      bVar28 = CARRY1(bVar6,*pbVar15);
      bVar6 = bVar6 + *pbVar15;
      pbVar11 = (byte *)CONCAT31(uVar17,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar6;
        cVar23 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pbVar10 = (byte *)CONCAT31(uVar17,cVar23);
        bVar6 = *pbVar15;
        *pbVar15 = *pbVar15 + (char)value;
        if (SCARRY1(bVar6,(char)value) == (char)*pbVar15 < '\0') goto code_r0x00403aaf;
        *pbVar10 = *pbVar10 + cVar23;
        pcVar13 = (char *)CONCAT31(uVar17,cVar23 + '\x02');
        bVar7 = cVar4 + unaff_EBX[0x52];
        unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar7,uVar25));
        *pcVar13 = *pcVar13 + cVar23 + '\x02';
        bVar6 = cVar23 + 4;
        pbVar10 = (byte *)CONCAT31(uVar17,bVar6);
        if ((POPCOUNT(bVar6) & 1U) == 0) {
          *pbVar10 = *pbVar10 + bVar6;
          cVar4 = (cVar23 + 's') - (0x90 < bVar6);
          pcVar13 = (char *)CONCAT31(uVar17,cVar4);
          bVar6 = (byte)((uint)value >> 8);
          bVar28 = CARRY1(*unaff_EBX,bVar6);
          *unaff_EBX = *unaff_EBX + bVar6;
          pbVar11 = pbVar27;
          if (bVar28) {
            *pcVar13 = *pcVar13 + cVar4;
            unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar7 | unaff_EBP[0x5c],uVar25));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar10;
        unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar7 + unaff_EBX[0x52],uVar25));
code_r0x00403abf:
        *pbVar10 = *pbVar10 + (char)pbVar10;
        cVar4 = (char)pbVar10 + '\x02';
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar4);
        bVar28 = (POPCOUNT(cVar4) & 1U) == 0;
        pbStack_10 = unaff_EBP;
        if (!bVar28) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar28) {
          *pbVar11 = *pbVar11 + (byte)pbVar11;
          bVar6 = (byte)pbVar11 | pbVar11[0x400005e];
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar6);
          pbStack_10 = unaff_EBP;
          if ((char)bVar6 < '\x01') goto code_r0x00403b0b;
          *pbVar10 = *pbVar10 + bVar6;
code_r0x00403aaf:
          cVar4 = (char)pbVar10 + '(';
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar4);
          *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
          bVar6 = *unaff_EBX;
          bVar7 = (byte)((uint)value >> 8);
          *unaff_EBX = *unaff_EBX + bVar7;
          pbVar14 = unaff_EBP;
          if (!CARRY1(bVar6,bVar7)) goto code_r0x00403ad8;
          *pbVar10 = *pbVar10 + cVar4;
          value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11(bVar7 | *unaff_EBX,(char)value));
          if ((POPCOUNT(*pbVar15 - cVar4) & 1U) != 0) {
            *pbVar27 = *pbVar27 + cVar4;
            pbStack_10 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                              (char)unaff_EBX));
      }
      bVar6 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar6;
      cVar4 = (bVar6 + 0x6f) - (0x90 < bVar6);
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar4);
      bVar6 = *unaff_EBX;
      cVar23 = (char)((uint)value >> 8);
      *unaff_EBX = *unaff_EBX + cVar23;
      pbStack_10 = unaff_EBP;
      if (*unaff_EBX == 0 || SCARRY1(bVar6,cVar23) != (char)*unaff_EBX < '\0')
      goto code_r0x00403b2c;
      *pcVar13 = *pcVar13 + cVar4;
    }
    else {
      pcVar13 = (char *)CONCAT31(uVar17,bVar6 + *pbVar15);
      pbVar11 = pbVar27;
      if ((POPCOUNT(bVar6 + *pbVar15) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbVar27 + (int)unaff_EDI * 8) =
         pbVar15 + (uint)(0xd2 < (byte)pcVar13) + *(int *)(pbVar27 + (int)unaff_EDI * 8);
    pbVar10 = unaff_EBP;
    pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 + 0x2d);
code_r0x00403ad8:
    pbStack_10 = pbVar14;
    bVar6 = *pbVar10;
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
    if (!CARRY1(bVar6,bVar7)) goto code_r0x00403afc;
    *pbVar10 = *pbVar10 + bVar7;
    bVar7 = bVar7 | pbVar10[0x400005d];
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
    pbVar11 = pbVar27;
    if ((char)bVar7 < '\x01') {
      *pbVar10 = *pbVar10 + bVar7;
      value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | *pbVar15,(char)value));
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                            (char)unaff_EBX));
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar10 = *pbVar10 + (char)pbVar10;
    cVar4 = (char)pbVar10 + '(';
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar4);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    bVar6 = *unaff_EBX;
    bVar7 = (byte)((uint)value >> 8);
    *unaff_EBX = *unaff_EBX + bVar7;
    pbVar27 = pbVar11;
    if (!CARRY1(bVar6,bVar7)) goto code_r0x00403b0b;
    *pbVar10 = *pbVar10 + cVar4;
  }
  else {
    bVar6 = *pbVar15;
    *pbVar15 = *pbVar15 + (char)value;
    if (SCARRY1(bVar6,(char)value) == (char)*pbVar15 < '\0') {
      pbVar10 = unaff_EBP;
      pbVar14 = (byte *)(pcVar13 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '\x02');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                          (char)unaff_EBX));
    pbVar11 = pbVar27;
code_r0x00403a7d:
    cVar4 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar4;
    uVar17 = (undefined3)((uint)pcVar13 >> 8);
    cVar23 = cVar4 + '-';
    pbVar14 = (byte *)CONCAT31(uVar17,cVar23);
    pbVar10 = unaff_EBP;
    pbVar27 = pbVar11;
    if ((POPCOUNT(cVar23 - *pbVar15) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar14 = *pbVar14 + cVar23;
    bVar6 = cVar4 + 0x2f;
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      bVar6 = *pbVar15;
      *pbVar15 = *pbVar15 + (byte)value;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar6,(byte)value);
      pbVar10 = (byte *)CONCAT31(uVar17,cVar4 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
    bVar28 = 0x90 < bVar6;
    pcVar13 = (char *)CONCAT31(uVar17,cVar4 + -0x62);
code_r0x00403a8f:
    uVar17 = (undefined3)((uint)pcVar13 >> 8);
    bVar7 = (char)pcVar13 - bVar28;
    pbVar10 = (byte *)CONCAT31(uVar17,bVar7);
    bVar6 = *unaff_EBX;
    cVar4 = (char)((uint)value >> 8);
    *unaff_EBX = *unaff_EBX + cVar4;
    pbStack_10 = unaff_EBP;
    pbVar27 = pbVar11;
    if (*unaff_EBX != 0 && SCARRY1(bVar6,cVar4) == (char)*unaff_EBX < '\0') {
      *pbVar10 = *pbVar10 + bVar7;
      pbVar27 = (byte *)CONCAT31(uVar17,bVar7 + 0x2d);
      *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
           pbVar15 + (uint)(0xd2 < bVar7) + *(int *)(pbVar11 + (int)unaff_EDI * 8);
      bVar28 = CARRY1(*pbVar11,(byte)pbVar11);
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      goto code_r0x00403aa1;
    }
  }
  value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | *pbVar10,(char)value));
  *pbVar27 = *pbVar27 + (char)pbVar10;
code_r0x00403afc:
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar10 = *pbVar10 + (char)pbVar10;
  uVar17 = (undefined3)((uint)pbVar10 >> 8);
  bVar7 = (char)pbVar10 + 0x6f;
  bVar6 = *(byte *)CONCAT31(uVar17,bVar7);
  *pbVar15 = *pbVar15 + (char)value;
  pbVar10 = (byte *)CONCAT31(uVar17,(bVar7 & bVar6) + *pbVar27);
  *value = *value - (char)((uint)pbVar15 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar10 = *pbVar10 + (byte)pbVar10;
    bVar6 = (byte)pbVar10 | *unaff_EBX;
    piVar9 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6);
    if (bVar6 != 0) {
      pbStack_10 = pbStack_10 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar9 = (char)*piVar9 + bVar6;
      value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | *pbVar15,(char)value));
      pbStack_14 = pbStack_14 + *piVar9;
      pcVar13 = (char *)((int)piVar9 + *piVar9);
      uVar17 = (undefined3)((uint)pcVar13 >> 8);
      bVar7 = (char)pcVar13 - *pcVar13;
      pbVar11 = (byte *)CONCAT31(uVar17,bVar7);
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar7;
      piVar9 = (int *)CONCAT31(uVar17,bVar7 - CARRY1(bVar6,bVar7));
    }
    *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
    pbVar27 = pbStack_14 + 4;
    out(*(undefined4 *)pbStack_14,(short)pbVar15);
    pbVar10 = (byte *)(((uint)piVar9 >> 8) * 0x100);
    *pbVar15 = *pbVar15 + (byte)value;
    bVar6 = (char)pbVar15 - *unaff_EBX;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar6);
    *unaff_EBX = *unaff_EBX;
    *pbVar15 = *pbVar15 + (char)((uint)value >> 8);
    *pbVar10 = *pbVar10;
    pcVar13 = (char *)(((uint)piVar9 >> 8) * 0x200);
    *pcVar13 = *pcVar13 + (char)unaff_EBX;
    bVar28 = CARRY1(*value,bVar6);
    *value = *value + bVar6;
    pbStack_14 = pbVar27;
    if (bVar28) break;
    while( true ) {
      *(byte **)pbVar10 = pbVar10 + (uint)bVar28 + *(int *)pbVar10;
      unaff_EDI = unaff_EDI + 4;
      pbVar10[(int)pbVar15] = pbVar10[(int)pbVar15] + (char)unaff_EBX;
      *pbVar10 = *pbVar10 + (char)pbVar10;
      *(byte **)pbStack_14 = unaff_EBX + *(int *)pbStack_14;
      bVar6 = (byte)((uint)value >> 8);
      cVar4 = (char)value;
      value = (byte *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar6 + *pbVar10,cVar4));
      pbVar10 = pbVar10 + (uint)CARRY1(bVar6,*pbVar10) + *(int *)pbVar10;
      *pbVar15 = *pbVar15 + cVar4;
      cVar4 = (char)unaff_EBX - pbStack_14[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar4);
      pbVar27 = pbStack_14;
      if ((POPCOUNT(cVar4) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar10 = *pbVar10 + (char)pbVar10;
      pbVar15[0x16060000] = pbVar15[0x16060000] - (char)value;
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)pbVar27);
      cVar4 = (char)pbVar10 + '\x02';
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar4);
      bVar28 = (POPCOUNT(cVar4) & 1U) == 0;
code_r0x00403b18:
      bVar6 = (byte)pbVar11;
      uVar17 = (undefined3)((uint)pbVar11 >> 8);
      if (!bVar28) {
        *pbVar15 = *pbVar15 + (char)value;
        pbVar10 = (byte *)CONCAT31(uVar17,bVar6 | *pbVar27);
code_r0x00403b73:
        pbVar11 = (byte *)(unaff_EDI + *(int *)(pbStack_10 + -0x37));
        *pbVar10 = *pbVar10 + (byte)pbVar10;
        uVar17 = (undefined3)((uint)pbVar10 >> 8);
        bVar6 = (byte)pbVar10 | *pbVar15;
        pcVar13 = (char *)CONCAT31(uVar17,bVar6);
        uVar29 = CONCAT44(pbVar15,pcVar13);
        if ((POPCOUNT(bVar6) & 1U) == 0) {
          *pcVar13 = *pcVar13 + bVar6;
          *pbVar27 = *pbVar27 + 1;
          return (byte *)CONCAT31(uVar17,bVar6 + 6);
        }
        bVar6 = *pbVar27;
        *pbVar27 = *pbVar27 + 1;
        pcVar1 = (code *)swi(4);
        if (SCARRY1(bVar6,'\x01')) {
          uVar29 = (*pcVar1)();
          value = extraout_ECX;
        }
        pbVar15 = (byte *)uVar29;
        *pbVar15 = *pbVar15 + (char)uVar29;
        cVar23 = (char)((ulonglong)uVar29 >> 0x20);
        puVar21 = (uint *)CONCAT22((short)((ulonglong)uVar29 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar29 >> 0x28) | unaff_EBX[0x2f],
                                            cVar23));
        *pbVar15 = *pbVar15 + (char)uVar29;
        cVar4 = (char)value;
        bVar5 = (byte)((uint)value >> 8) | *pbVar15;
        pbVar15 = pbVar15 + *(int *)pbVar15;
        bVar6 = *unaff_EBX;
        *unaff_EBX = *unaff_EBX + bVar5;
        bVar7 = (byte)pbVar15;
        if (CARRY1(bVar6,bVar5)) {
          *pbVar15 = *pbVar15 + bVar7;
          bVar5 = bVar5 | (byte)*puVar21;
          *unaff_EBX = *unaff_EBX - cVar23;
          *pbVar15 = *pbVar15 + bVar7;
          uVar17 = (undefined3)((uint)pbVar15 >> 8);
          bVar7 = bVar7 | (byte)*puVar21;
          piVar9 = (int *)CONCAT31(uVar17,bVar7);
          pbStack_10 = pbStack_10 + *piVar9;
          *(byte *)piVar9 = (char)*piVar9 + bVar7;
          cVar23 = (char)unaff_EBX - *pbVar27;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar23) + 0x5f),cVar23));
          *(byte *)piVar9 = (char)*piVar9 + bVar7;
          bVar6 = bVar7 + 0x2a & (byte)*puVar21;
          pbVar11 = pbVar11 + *(int *)(pbStack_10 + 0x5f);
          *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
          pbVar15 = (byte *)CONCAT31(uVar17,bVar6 + 0x2a);
          *(byte *)puVar21 = (byte)*puVar21 + 0x28;
          *pbVar15 = *pbVar15 + bVar6 + 0x2a;
        }
        else {
          *pbVar27 = *pbVar27 + bVar7;
        }
        pcVar13 = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar5,cVar4));
        *pbStack_10 = *pbStack_10 - bVar5;
        *(byte *)puVar21 = (byte)*puVar21 + cVar4;
        bVar6 = (byte)pbVar15 - 0xb;
        pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar6);
        if (10 < (byte)pbVar15) {
          *pbVar10 = *pbVar10 | bVar6;
          return pbVar10;
        }
        *(byte *)puVar21 = (byte)*puVar21 + cVar4;
        do {
          bVar6 = unaff_EBX[-0x23];
          bVar5 = (byte)pbVar10;
          *pbVar10 = *pbVar10 + bVar5;
          bVar7 = pbStack_10[-0x22];
          *pbVar10 = *pbVar10 + bVar5;
          uVar17 = (undefined3)((uint)pbVar10 >> 8);
          bVar5 = bVar5 | *pbVar27;
          pbVar15 = (byte *)CONCAT31(uVar17,bVar5);
          cVar23 = (char)unaff_EBX - *pbVar27;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                       CONCAT11((char)((uint)unaff_EBX >> 8) + bVar6
                                                                | bVar7,(char)unaff_EBX)) >> 8),
                                       cVar23);
          cVar4 = (char)pcVar13;
          pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                     CONCAT11((char)((uint)pcVar13 >> 8) + *pbVar15,cVar4));
          *(byte *)puVar21 = (byte)*puVar21 + cVar4;
          bVar7 = bVar5 - *pbVar15;
          pbVar10 = (byte *)CONCAT31(uVar17,bVar7);
          pbVar27 = pbVar27 + (-(uint)(bVar5 < *pbVar15) - *(int *)pbVar10);
          puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 * '\x02');
          *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
          *pbVar11 = *pbVar11 + cVar23;
          bVar6 = *pbVar10;
          *pbVar10 = *pbVar10 + bVar7;
          *puVar21 = (uint)(pbVar10 + (uint)CARRY1(bVar6,bVar7) + *puVar21);
        } while ((POPCOUNT(*puVar21 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar10 = *pbVar10 + (char)pbVar10;
        pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | pbVar10[(int)pcVar13])
        ;
        bVar28 = false;
        pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
        do {
          pbVar11 = pbVar11 + (-(uint)bVar28 - *(int *)unaff_EBX);
          pcVar12 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),*pcVar13);
          *pcVar12 = *pcVar12 + *pcVar13;
          pbVar10 = (byte *)CONCAT31((int3)((uint)(pcVar12 +
                                                  (pbVar27[0x2000001] < (byte)((uint)pcVar13 >> 8))
                                                  + 0xda7d) >> 8),
                                     ((byte)(pcVar12 +
                                            (pbVar27[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                            0xda7d) | (byte)*puVar21) + 0x7d);
          pcVar13 = pcVar13 + -1;
          *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar13;
          while( true ) {
            uVar22 = (undefined3)((uint)puVar21 >> 8);
            cVar4 = (char)puVar21 + *(char *)((int)pbVar11 * 2 + 0xa0000e1);
            puVar21 = (uint *)CONCAT31(uVar22,cVar4);
            bVar28 = CARRY1((byte)pbVar10,(byte)*puVar21);
            uVar17 = (undefined3)((uint)pbVar10 >> 8);
            bVar6 = (byte)pbVar10 + (byte)*puVar21;
            pbVar10 = (byte *)CONCAT31(uVar17,bVar6);
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *pbVar10 = *pbVar10 + bVar6;
            cVar23 = (char)pcVar13;
            pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar13 >> 8) | pbVar11[-0x65],cVar23))
            ;
            bVar7 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar6;
            if (CARRY1(bVar7,bVar6)) {
              *pbVar10 = *pbVar10 + bVar6;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_10[-0x1d]
                                                    ,(char)unaff_EBX));
              *pbVar10 = *pbVar10 + bVar6;
              bVar28 = false;
              bVar6 = bVar6 | (byte)*puVar21;
              pcVar12 = (char *)CONCAT31(uVar17,bVar6);
              while( true ) {
                bVar7 = (byte)pcVar12;
                uVar17 = (undefined3)((uint)pcVar12 >> 8);
                if (bVar28 == (char)bVar6 < '\0') break;
                *pcVar12 = *pcVar12 + bVar7;
                bVar7 = bVar7 | (byte)*puVar21;
                puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                *pbVar11 = *pbVar11 << 1 | (char)*pbVar11 < '\0';
                uVar3 = *puVar16;
                *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                pbStack_10 = pbStack_10 + (-(uint)CARRY1((byte)uVar3,bVar7) - *puVar16);
                *puVar16 = *puVar16 << 1 | (uint)((int)*puVar16 < 0);
                while( true ) {
                  uVar3 = *puVar21;
                  *(byte *)puVar21 = (byte)*puVar21 + (byte)pcVar13;
                  cVar4 = (char)puVar16 + 'o' + CARRY1((byte)uVar3,(byte)pcVar13);
                  pcVar12 = (char *)CONCAT31((int3)((uint)puVar16 >> 8),cVar4);
                  pcVar13 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar4) & 1U) != 0) break;
                  *pcVar12 = *pcVar12 + cVar4;
                  bVar6 = bRamfe140212;
                  pcVar13 = (char *)0x0;
                  uVar17 = (undefined3)((uint)(pcVar12 + -0x732b0000) >> 8);
                  bVar7 = in(0);
                  puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                  uVar3 = *puVar21;
                  *(byte *)puVar21 = (byte)*puVar21;
                  if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar21 < '\0') {
                    *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                    bVar7 = bVar7 | (byte)*puVar21;
                    puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                    if ((POPCOUNT(bVar7) & 1U) == 0) {
                      *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                      pcVar13 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar6 | (byte)*puVar16) << 8);
                      *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                    puVar16 = (uint *)CONCAT31(uVar17,bVar7 | (byte)*puVar21);
                  }
                }
                *(byte *)puVar21 = (byte)*puVar21;
                bVar28 = SCARRY1((char)puVar21,*pbVar11);
                bVar6 = (char)puVar21 + *pbVar11;
                puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar6);
              }
              if (bVar28 == (char)bVar6 < '\0') {
                *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar13;
                pbVar10 = (byte *)((uint)pcVar12 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar12 = *pcVar12 + bVar7;
              pbVar10 = (byte *)CONCAT31(uVar17,(bVar7 | (byte)*puVar21) + 0x7d);
              pcVar13 = pcVar13 + -1;
              *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar13;
            }
            else {
              *(byte *)puVar21 = (byte)*puVar21 + cVar23;
              puVar21 = (uint *)CONCAT31(uVar22,cVar4 + *(char *)((int)pbVar11 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar11 = *pbVar11 + bVar6;
      bVar6 = bVar6 + 0x6f & *(byte *)CONCAT31(uVar17,bVar6 + 0x6f);
      *pbVar15 = *pbVar15 + (char)value;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar6;
      pcVar13 = (char *)CONCAT31(uVar17,bVar6 - *unaff_EDI);
code_r0x00403b2c:
      bVar6 = (char)pcVar13 - *pcVar13;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar6);
      *pbVar10 = *pbVar10 + bVar6;
      *(byte **)pbVar10 = pbVar15 + *(int *)pbVar10;
      *pbVar10 = *pbVar10 + bVar6;
      bVar28 = CARRY1(*pbVar10,bVar6);
      *pbVar10 = *pbVar10 + bVar6;
      pbStack_14 = pbVar27;
    }
  }
  *pbVar10 = *pbVar10;
  value = (byte *)CONCAT31((int3)((uint)value >> 8),(byte)value | *pbVar15);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_10 = pbStack_10 + -*puVar16;
  do {
    bVar6 = (byte)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + bVar6;
    pbVar11 = pbVar11 + -*(int *)(pbStack_10 + -0x1a);
    *(byte *)puVar16 = (byte)*puVar16 + bVar6;
    bVar6 = bVar6 | (byte)*puVar21;
    puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar6);
    *(byte *)puVar16 = (byte)*puVar16 | bVar6;
    bVar6 = (byte)*puVar16;
    pbStack_10 = (byte *)0x2700001;
    while ((POPCOUNT(bVar6) & 1U) == 0) {
      do {
        *(byte *)puVar16 = (byte)*puVar16 + (byte)puVar16;
        bVar6 = (byte)puVar16 | (byte)*puVar21;
        puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar6);
        if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
        uVar18 = CONCAT21((short)((uint)pcVar13 >> 0x10),(byte)((uint)pcVar13 >> 8) | bRamfe140212);
        while( true ) {
          pcVar13 = (char *)((uint)uVar18 << 8);
          bVar8 = (byte)puVar16;
          *(byte *)puVar16 = (byte)*puVar16 & bVar8;
          bVar5 = *unaff_EBX;
          bVar26 = (byte)uVar18;
          bVar7 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar26;
          bVar6 = *unaff_EBX;
          if (!CARRY1(bVar5,bVar26)) break;
          *(byte *)puVar16 = (byte)*puVar16 + bVar8;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar16 = (byte)*puVar16 + bVar8;
          bVar8 = bVar8 | (byte)*puVar21;
          puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar8);
          bVar28 = (POPCOUNT(bVar8) & 1U) == 0;
          while( true ) {
            cVar4 = (char)((uint)unaff_EBX >> 8);
            uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar28) {
              *(byte *)puVar21 = (byte)*puVar21;
              unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar4 + unaff_EBX[-0x1f],(char)unaff_EBX)
                                          );
              goto code_r0x00403d52;
            }
            *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
            uVar20 = (undefined2)((uint)pcVar13 >> 0x10);
            bVar7 = (byte)((uint)pcVar13 >> 8) | (byte)*puVar16;
            uVar18 = CONCAT21(uVar20,bVar7);
            *puVar16 = *puVar16 & (uint)puVar16;
            *unaff_EBX = *unaff_EBX + bVar7;
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            bVar6 = (char)puVar16 - bVar7;
            pcVar13 = (char *)CONCAT31(uVar17,bVar6);
            *pcVar13 = *pcVar13 + bVar6;
            bVar6 = bVar6 | (byte)*puVar21;
            puVar16 = (uint *)CONCAT31(uVar17,bVar6);
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *(byte *)puVar16 = (byte)*puVar16 + bVar6;
            pcVar13 = (char *)((uint)CONCAT21(uVar20,bVar7 | (byte)*puVar16) << 8);
            *puVar16 = *puVar16 - (int)puVar16;
            *(byte *)puVar21 = (byte)*puVar21;
            unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar4 + unaff_EBX[-0x1d],(char)unaff_EBX));
            do {
              *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
              uVar19 = (undefined2)((uint)puVar21 >> 0x10);
              cVar4 = (char)puVar21;
              bVar6 = (byte)((uint)puVar21 >> 8) | unaff_EBX[-0x17];
              puVar21 = (uint *)CONCAT22(uVar19,CONCAT11(bVar6,cVar4));
              *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar16 = (byte)*puVar16 + (byte)puVar16;
                uVar17 = (undefined3)((uint)puVar16 >> 8);
                bVar5 = (byte)puVar16 | (byte)*puVar21;
                pcVar12 = (char *)CONCAT31(uVar17,bVar5);
                bVar7 = unaff_EBX[-0x16];
                *pcVar12 = *pcVar12 + bVar5;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar12 = *pcVar12 + bVar5;
                pbVar15 = (byte *)CONCAT31(uVar17,bVar5 | (byte)*puVar21);
                while( true ) {
                  *pbVar15 = *pbVar15 + (byte)pbVar15;
                  uVar17 = (undefined3)((uint)pbVar15 >> 8);
                  bVar7 = (byte)pbVar15 | (byte)*puVar21;
                  puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) != 0) break;
                  *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                  bVar5 = pbVar11[-0x14];
                  *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar21;
                  pcVar12 = (char *)CONCAT31(uVar17,bVar7);
                  bVar8 = unaff_EBX[-0x15];
                  *pcVar12 = *pcVar12 + bVar7;
                  pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),
                                                    (byte)((uint)pcVar13 >> 8) | bVar5 |
                                                    pbVar11[-0x13]) << 8);
                  *pcVar12 = *pcVar12 + bVar7;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar8 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar12 = *pcVar12 + bVar7;
                  pbVar15 = (byte *)CONCAT31(uVar17,bVar7 | (byte)*puVar21);
                  do {
                    do {
                      bVar5 = (byte)pbVar15;
                      *pbVar15 = *pbVar15 + bVar5;
                      cVar24 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar15,
                                                            cVar24));
                      *pbVar15 = bVar5;
                      *pbVar15 = *pbVar15 + bVar5;
                      cVar23 = (char)((uint)pcVar13 >> 8) + *pbVar15;
                      pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),cVar23) << 8)
                      ;
                      uVar17 = (undefined3)((uint)pbVar15 >> 8);
                      bVar5 = bVar5 & *pbVar15;
                      pbVar15 = (byte *)CONCAT31(uVar17,bVar5);
                      bVar7 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar23;
                    } while (SCARRY1(bVar7,cVar23) == (char)*unaff_EBX < '\0');
                    *pbVar15 = *pbVar15 + bVar5;
                    bVar5 = bVar5 | (byte)*puVar21;
                    pbVar15 = (byte *)CONCAT31(uVar17,bVar5);
                    if ((POPCOUNT(bVar5) & 1U) == 0) {
                      *pbVar15 = *pbVar15 + bVar5;
                      *pbVar15 = *pbVar15 + bVar5;
                      cVar4 = cVar4 - bVar6;
                      pbVar10 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),cVar4);
                      *pbVar15 = *pbVar15 + bVar5;
                      bRam0312382b = bRam0312382b | *pbVar10;
                      while( true ) {
                        bVar7 = (byte)pbVar15;
                        *pbVar15 = *pbVar15 + bVar7;
                        bRam0312382b = bRam0312382b | (pbVar11 + 0x21b0000)[(int)pbVar15];
                        uVar17 = (undefined3)((uint)pbVar15 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar10 = *pbVar10 + bRam0312382b;
                        pbVar15 = (byte *)CONCAT31(uVar17,bVar7 | *pbVar27);
                      }
                      *pbVar15 = *pbVar15 + bVar7;
                      bVar7 = bVar7 | *pbVar27;
                      pcVar13 = (char *)CONCAT31(uVar17,bVar7);
                      out(*(undefined4 *)pbVar27,(short)pbVar10);
                      *pcVar13 = *pcVar13 + bVar7;
                      uVar20 = CONCAT11(bVar6 | bRam6f0a002b,cVar4);
                      pcVar12 = (char *)CONCAT22(uVar19,uVar20);
                      *pcVar13 = *pcVar13 + bVar7;
                      *pcVar12 = *pcVar12 + bRam0312382b;
                      out(*(undefined4 *)(pbVar27 + 4),uVar20);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar24 + *pcVar13);
                  } while (SCARRY1(cVar24,*pcVar13) != (char)(cVar24 + *pcVar13) < '\0');
                }
                uVar3 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar21 < '\0');
              *(byte *)puVar21 = (byte)*puVar21;
              *pcVar13 = *pcVar13 - (char)unaff_EBX;
              *(byte *)puVar16 = (byte)*puVar16 + bVar7;
              bVar7 = bVar7 | (byte)*puVar21;
              puVar16 = (uint *)CONCAT31(uVar17,bVar7);
              bVar28 = (POPCOUNT(bVar7) & 1U) == 0;
            } while (bVar28);
          }
        }
      } while (SCARRY1(bVar7,bVar26));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar13 >> 8);
    *pbVar11 = *pbVar11 - (char)unaff_EBX;
  } while( true );
}


