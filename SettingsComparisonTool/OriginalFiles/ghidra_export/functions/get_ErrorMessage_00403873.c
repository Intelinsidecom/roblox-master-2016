/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403873
 * Raw Name    : get_ErrorMessage
 * Demangled   : get_ErrorMessage
 * Prototype   : byte * get_ErrorMessage(byte * param_1, byte * param_2)
 * Local Vars  : param_1, param_2, pbStack_1c, pbStack_18, pbStack_8, pcVar1, uVar2, uVar3, bVar4, bVar5, cVar6, cVar7, bVar8, bVar9, in_EAX, piVar10, pbVar11, pbVar12, pcVar13, pcVar14, pbVar15, pbVar16, puVar17, uVar18, uVar19, uVar20, extraout_ECX, uVar21, puVar22, uVar23, cVar24, cVar25, uVar26, unaff_EBX, bVar27, unaff_EBP, unaff_ESI, unaff_EDI, in_ES, in_CS, in_DS, bVar28, uVar29
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall get_ErrorMessage(byte *param_1,byte *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  char *in_EAX;
  undefined3 uVar18;
  byte *pbVar11;
  byte *pbVar12;
  uint3 uVar19;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint *puVar17;
  undefined2 uVar20;
  byte *extraout_ECX;
  undefined2 uVar21;
  uint *puVar22;
  undefined3 uVar23;
  char cVar24;
  char cVar25;
  undefined1 uVar26;
  byte bVar27;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_DS;
  bool bVar28;
  undefined8 uVar29;
  byte *pbStack_1c;
  byte *pbStack_18;
  byte *pbStack_8;
  int *piVar10;
  
code_r0x00403873:
                    /* .NET CLR Managed Code */
  cVar24 = (char)unaff_EBX;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x59],cVar24));
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar18 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = (char)in_EAX + 0x2aU & *param_2;
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x59);
  *(char *)CONCAT31(uVar18,bVar4) = *(char *)CONCAT31(uVar18,bVar4) + bVar4;
  bVar4 = bVar4 + 0x2a;
  pbVar16 = (byte *)CONCAT31(uVar18,bVar4);
  cVar6 = unaff_EDI[0x17];
  cVar25 = (char)param_1;
  *pbVar16 = *pbVar16 + bVar4;
  bVar5 = *param_2;
  pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_DS);
  cVar7 = unaff_EDI[0x1a];
  *pbVar16 = *pbVar16 + bVar4;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11(((char)((uint)param_1 >> 8) + cVar6 | bVar5) + cVar7 |
                                      *param_2,cVar25));
  *unaff_EBX = *unaff_EBX + cVar24;
  *(byte *)((int)pbVar16 * 2) = *(byte *)((int)pbVar16 * 2) ^ bVar4;
  bVar5 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar4;
  bVar8 = *pbVar16;
  *param_1 = *param_1 + (char)param_2;
  bVar5 = ((bVar4 - bVar8) - CARRY1(bVar5,bVar4)) + *param_2;
  pbVar12 = (byte *)CONCAT31(uVar18,bVar5);
  pbVar16 = pbStack_8;
  if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x004038f6;
  *pbVar12 = *pbVar12 + bVar5;
  cVar6 = (bVar5 + 0x6f) - (0x90 < bVar5);
  pbVar11 = (byte *)CONCAT31(uVar18,cVar6);
  bVar5 = *param_2;
  *param_2 = *param_2 + cVar25;
  pbVar16 = param_2;
  if (SCARRY1(bVar5,cVar25) == (char)*param_2 < '\0') {
    unaff_EBP[0x2b060000] = unaff_EBP[0x2b060000] - cVar6;
    cVar6 = cVar6 + *param_2;
    pbVar12 = (byte *)CONCAT31(uVar18,cVar6);
    goto code_r0x0040390c;
  }
  do {
    *pbVar11 = *pbVar11 + (char)pbVar11;
    while( true ) {
      uVar18 = (undefined3)((uint)pbVar11 >> 8);
      cVar6 = (char)pbVar11 + '\x02';
      pbVar12 = (byte *)CONCAT31(uVar18,cVar6);
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)unaff_ESI;
      cVar6 = (char)pbVar12 + *pbVar16;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
code_r0x0040390c:
      cVar7 = (char)pbVar12;
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        *unaff_ESI = *unaff_ESI + cVar7;
        goto code_r0x0040395a;
      }
      *pbVar12 = *pbVar12 + cVar7;
      bVar5 = cVar7 + 2;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
code_r0x00403912:
      bVar28 = (POPCOUNT(bVar5) & 1U) == 0;
      if (!bVar28) goto code_r0x00403967;
      *pbVar12 = *pbVar12 + (char)pbVar12;
code_r0x00403916:
      bVar8 = (char)pbVar12 + 0x6f;
      pbVar11 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
      bVar5 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar8;
      if (*pbVar11 == 0 || SCARRY1(bVar5,bVar8) != (char)*pbVar11 < '\0') goto code_r0x00403979;
      *pbVar11 = *pbVar11 + bVar8;
      pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),(char)pbVar12 + -100);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           pbVar16 + (uint)(0xd2 < bVar8) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
code_r0x00403926:
      *(byte **)pbVar11 = pbStack_8;
      bVar5 = *unaff_ESI;
      bVar8 = (byte)pbVar11;
      *unaff_ESI = *unaff_ESI + bVar8;
      if (CARRY1(bVar5,bVar8)) {
        *pbVar11 = *pbVar11 + bVar8;
        uVar18 = (undefined3)((uint)pbVar11 >> 8);
        bVar8 = bVar8 | pbVar11[0x400005b];
        pbVar12 = (byte *)CONCAT31(uVar18,bVar8);
        pbVar11 = unaff_ESI;
        if ((char)bVar8 < '\x01') goto code_r0x00403991;
        *pbVar12 = *pbVar12 + bVar8;
        cVar6 = bVar8 + 0x28;
        pbVar12 = (byte *)CONCAT31(uVar18,cVar6);
        *(byte **)pbVar12 = pbVar12 + (uint)(0xd7 < bVar8) + *(int *)pbVar12;
        bVar5 = *unaff_EBX;
        bVar8 = (byte)((uint)param_1 >> 8);
        *unaff_EBX = *unaff_EBX + bVar8;
        if (CARRY1(bVar5,bVar8)) {
          *pbVar12 = *pbVar12 + cVar6;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar12,(char)param_1));
          *unaff_ESI = *unaff_ESI + cVar6;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                                (char)unaff_EBX));
          *pbVar12 = *pbVar12 + cVar6;
code_r0x00403950:
          uVar18 = (undefined3)((uint)pbVar12 >> 8);
          bVar8 = (char)pbVar12 + 0x6f;
          bVar5 = *(byte *)CONCAT31(uVar18,bVar8);
          *pbVar16 = *pbVar16 + (char)param_1;
          pbVar12 = (byte *)CONCAT31(uVar18,(bVar8 & bVar5) + *unaff_ESI);
          *param_1 = *param_1 - (char)((uint)pbVar16 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar12 = *pbVar12 + cVar6;
    cVar6 = (char)pbVar11 + '.' + *pbVar16;
    pbVar12 = (byte *)CONCAT31(uVar18,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      pbVar11 = pbVar16 + (int)pbVar12;
      *pbVar11 = *pbVar11 + cVar6;
      bVar5 = *pbVar11;
      goto code_r0x00403912;
    }
    *pbVar12 = *pbVar12 + cVar6;
    bVar5 = cVar6 + 2;
    pbVar12 = (byte *)CONCAT31(uVar18,bVar5);
    if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403916;
    *pbVar12 = *pbVar12 + bVar5;
    cVar7 = cVar6 + 'q';
    piVar10 = (int *)CONCAT31(uVar18,cVar7);
    *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0x90 < bVar5);
    bVar5 = *unaff_EBX;
    bVar8 = (byte)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + bVar8;
    if (!CARRY1(bVar5,bVar8)) {
      out(*(undefined4 *)unaff_ESI,(short)pbVar16);
      bVar5 = (cVar7 - (char)*piVar10) - CARRY1(bVar5,bVar8);
      *pbVar16 = *pbVar16 + (char)param_1;
      cVar6 = bVar5 - *(byte *)CONCAT31(uVar18,bVar5);
      unaff_ESI = unaff_ESI +
                  ((4 - *(int *)CONCAT31(uVar18,cVar6)) -
                  (uint)(bVar5 < *(byte *)CONCAT31(uVar18,bVar5)));
      in_EAX = (char *)CONCAT31(uVar18,cVar6);
      param_2 = pbVar16;
      goto code_r0x00403873;
    }
    *(char *)piVar10 = (char)*piVar10 + cVar7;
    uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar5 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56];
    *(char *)piVar10 = (char)*piVar10 + cVar7;
    pcVar14 = (char *)CONCAT31(uVar18,cVar6 + 's');
    unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar5 + *(char *)(CONCAT22(uVar20,CONCAT11(bVar5,(
                                                  char)unaff_EBX)) + 0x56),(char)unaff_EBX));
    *pcVar14 = *pcVar14 + cVar6 + 's';
    bVar5 = cVar6 - 0xf;
    *(char *)CONCAT31(uVar18,bVar5) = *(char *)CONCAT31(uVar18,bVar5) + bVar5;
    bVar8 = cVar6 + 0x1e;
    pbVar11 = (byte *)CONCAT31(uVar18,bVar8);
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_1 + (uint)(0xd2 < bVar5) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    in_ES = *(undefined2 *)pbVar11;
    bVar5 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar8;
    pbVar16 = param_1;
    if (CARRY1(bVar5,bVar8)) {
      *pbVar11 = *pbVar11 + bVar8;
      pbVar12 = (byte *)CONCAT31(uVar18,bVar8 | pbVar11[0x400005a]);
      if ('\0' < (char)(bVar8 | pbVar11[0x400005a])) {
code_r0x004038f6:
        bVar5 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar5;
        uVar18 = (undefined3)((uint)pbVar12 >> 8);
        cVar6 = ((bVar5 + 0x28) - *(char *)CONCAT31(uVar18,bVar5 + 0x28)) - (0xd7 < bVar5);
        pbVar12 = (byte *)CONCAT31(uVar18,cVar6);
        bVar5 = *unaff_EBX;
        bVar8 = (byte)((uint)param_1 >> 8);
        *unaff_EBX = *unaff_EBX + bVar8;
        if (CARRY1(bVar5,bVar8)) {
          *pbVar12 = *pbVar12 + cVar6;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar12,(char)param_1));
          *unaff_ESI = *unaff_ESI + cVar6;
          goto code_r0x00403908;
        }
        pbVar11 = pbVar12 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar12 = *pbVar12 + (char)pbVar12;
  pbVar16[0x16060000] = pbVar16[0x16060000] - (char)param_1;
  unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
  cVar6 = (char)pbVar12 + '\x02';
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
  bVar28 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403967:
  if (!bVar28) goto code_r0x004039be;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar18 = (undefined3)((uint)pbVar12 >> 8);
  bVar5 = (char)pbVar12 + 0x6f;
  bVar5 = bVar5 & *(byte *)CONCAT31(uVar18,bVar5);
  pbVar11 = (byte *)CONCAT31(uVar18,bVar5);
  *pbVar16 = *pbVar16 + (char)param_1;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar5;
code_r0x00403979:
  bVar5 = (char)pbVar11 - *unaff_EDI;
  bVar28 = bVar5 < *param_1;
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5 - *param_1);
  do {
    cVar6 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar6 + bVar28;
    *pbVar12 = *pbVar12 + cVar6;
    *param_1 = *param_1 + (char)pbVar16;
    param_1[0x101c00aa] = param_1[0x101c00aa] + (char)unaff_EBX;
    *pbVar12 = *pbVar12 + cVar6;
    *(byte **)unaff_ESI = unaff_EBX + *(int *)unaff_ESI;
    bVar5 = (byte)((uint)param_1 >> 8);
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11(bVar5 + *pbVar12,(char)param_1));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar5,*pbVar12) + *(int *)pbVar12;
    pbVar11 = unaff_ESI;
code_r0x00403991:
    cVar6 = (char)param_1;
    *pbVar16 = *pbVar16 + cVar6;
    cVar7 = (char)unaff_EBX - pbVar11[2];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7);
    unaff_ESI = pbVar11;
    if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040395a;
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    uVar19 = (uint3)((uint)pbVar12 >> 8);
    bVar5 = (byte)pbVar12 | *unaff_EBX;
    piVar10 = (int *)CONCAT31(uVar19,bVar5);
    bVar8 = (byte)((uint)param_1 >> 8);
    bVar4 = (byte)pbVar16;
    if (bVar5 == 0) {
      *(char *)piVar10 = (char)*piVar10;
      unaff_ESI = pbVar11 + 4;
      out(*(undefined4 *)pbVar11,(short)pbVar16);
      pbVar12 = (byte *)((uint)uVar19 << 8);
      *pbVar16 = *pbVar16 + cVar6;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar4 - *unaff_EBX);
      *unaff_EBX = *unaff_EBX;
      *pbVar16 = *pbVar16 + bVar8;
      *pbVar12 = *pbVar12;
      *unaff_EBX = *unaff_EBX + cVar7;
      *pbVar12 = *pbVar12;
      *(byte **)(unaff_EBX + -0x3d) = unaff_ESI + *(int *)(unaff_EBX + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar10 = (char)*piVar10 + bVar5;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar8 | *pbVar16,cVar6));
    unaff_ESI = pbVar11 + *piVar10;
    pcVar14 = (char *)((int)piVar10 + *piVar10);
    bVar8 = (char)pcVar14 - *pcVar14;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
    bVar5 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar8;
    pbVar12 = pbVar12 + (-(uint)CARRY1(bVar5,bVar8) - *(int *)pbVar12);
    bVar28 = CARRY1(*param_1,bVar4);
    *param_1 = *param_1 + bVar4;
  } while (!bVar28);
  *pbVar12 = *pbVar12 + (char)pbVar12;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *pbVar16);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar12 = *pbVar12 + (byte)pbVar12;
  uVar18 = (undefined3)((uint)pbVar12 >> 8);
  bVar5 = (byte)pbVar12 | *pbVar16;
  pcVar14 = (char *)CONCAT31(uVar18,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) goto code_r0x004039c8;
  cVar6 = *pcVar14;
  *pcVar14 = *pcVar14 + bVar5;
  cVar7 = *pcVar14;
  if (!SCARRY1(cVar6,bVar5)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar14 = *pcVar14 + bVar5;
  *unaff_ESI = *unaff_ESI + 1;
  uVar2 = *(undefined6 *)CONCAT31(uVar18,bVar5 + 6);
  pbVar11 = (byte *)uVar2;
  bVar5 = *pbVar16;
  bVar8 = (byte)param_1;
  *pbVar16 = *pbVar16 + bVar8;
  if (!CARRY1(bVar5,bVar8)) goto code_r0x00403979;
  *pbVar11 = *pbVar11 + (char)uVar2;
  bVar4 = (byte)((uint)param_1 >> 8) | *pbVar11;
  uVar20 = CONCAT11(bVar4,bVar8);
  pbVar11 = pbVar11 + -*(int *)pbVar11;
  bVar5 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + bVar4;
  if (CARRY1(bVar5,bVar4)) {
    cVar6 = (char)pbVar11;
    *pbVar11 = *pbVar11 + cVar6;
    bVar5 = *pbVar16;
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11((char)((uint)pbVar16 >> 8) - unaff_EBX[-0x3a],(char)pbVar16)
                              );
    *pbVar11 = *pbVar11 + cVar6;
    uVar21 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar27 = (byte)((uint)unaff_EBX >> 8) | pbVar16[0x32];
    pcVar14 = (char *)CONCAT22(uVar21,CONCAT11(bVar27,(char)unaff_EBX));
    pbStack_18 = (byte *)CONCAT22(pbStack_18._2_2_,in_CS);
    cVar7 = cVar6 + *pcVar14 + '-';
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar7);
    *pbVar11 = *pbVar11;
    bVar9 = *pbVar16;
    cVar25 = (char)unaff_EBX - *unaff_ESI;
    cVar6 = unaff_EDI[0x17];
    *pbVar11 = *pbVar11 + cVar7;
    uVar20 = CONCAT11((bVar4 | bVar5) + cVar6 | *pbVar16,bVar8 - bVar9);
    unaff_EBX = (byte *)CONCAT22(uVar21,CONCAT11(bVar27 + *(char *)(CONCAT31((int3)((uint)pcVar14 >>
                                                                                   8),cVar25) + 0x4e
                                                                   ),cVar25));
    *pbVar11 = *pbVar11 + cVar7;
  }
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),uVar20);
  bVar5 = (byte)pbVar11;
  uVar18 = (undefined3)((uint)pbVar11 >> 8);
  pcVar14 = (char *)CONCAT31(uVar18,bVar5 + 0x28);
  *pcVar14 = (*pcVar14 - (bVar5 + 0x28)) - (0xd7 < bVar5);
  *pbVar16 = *pbVar16 + (char)uVar20;
  bVar8 = bVar5 + 0x1b;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4f],
                                        (char)unaff_EBX));
  *(char *)CONCAT31(uVar18,bVar8) = *(char *)CONCAT31(uVar18,bVar8) + bVar8;
  pcVar13 = (char *)CONCAT31(uVar18,bVar5 + 0x43);
  *pcVar13 = (*pcVar13 - (bVar5 + 0x43)) - (0xd7 < bVar8);
  *pbVar16 = *pbVar16 + (char)uVar20;
  pcVar14 = pcVar13 + -0x6b721c;
  pcVar13 = pcVar13 + -0x6b721a;
  *pcVar13 = *pcVar13 + (char)((uint)pbVar16 >> 8);
  cVar7 = *pcVar13;
code_r0x00403a22:
  if ((POPCOUNT(cVar7) & 1U) == 0) {
code_r0x00403a24:
    cVar6 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar6;
    uVar18 = (undefined3)((uint)pcVar14 >> 8);
    bVar5 = cVar6 + 2;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *(char *)CONCAT31(uVar18,bVar5) = *(char *)CONCAT31(uVar18,bVar5) + bVar5;
      piVar10 = (int *)CONCAT31(uVar18,cVar6 + '*');
      *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0xd7 < bVar5);
      bVar5 = *pbVar16;
      bVar9 = (byte)param_1;
      *pbVar16 = *pbVar16 + bVar9;
      out(*(undefined4 *)unaff_ESI,(short)pbVar16);
      bVar4 = ((cVar6 + '*') - (char)*piVar10) - CARRY1(bVar5,bVar9);
      pbVar12 = (byte *)CONCAT31(uVar18,bVar4);
      *pbVar16 = *pbVar16 + bVar9;
      uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar26 = SUB41(unaff_EBX,0);
      cVar6 = (char)((uint)unaff_EBX >> 8) - unaff_ESI[0x1f];
      unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(cVar6,uVar26));
      *pbVar12 = *pbVar12 + bVar4;
      bVar8 = *pbVar16;
      bVar5 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar4;
      unaff_ESI = unaff_ESI + ((4 - *(int *)pbVar12) - (uint)CARRY1(bVar5,bVar4));
      pbVar12 = (byte *)CONCAT31(uVar18,bVar4);
      param_1 = (byte *)(CONCAT22((short)((uint)param_1 >> 0x10),
                                  CONCAT11((byte)((uint)param_1 >> 8) | bVar8,bVar9)) + -1);
      bVar5 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar4;
      bVar5 = (bVar4 - *pbVar12) - CARRY1(bVar5,bVar4);
      *param_1 = *param_1 + (char)pbVar16;
      bVar28 = CARRY1(bVar5,*pbVar16);
      bVar5 = bVar5 + *pbVar16;
      pbVar12 = (byte *)CONCAT31(uVar18,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar12 = *pbVar12 + bVar5;
        cVar7 = (bVar5 + 0x6f) - (0x90 < bVar5);
        pbVar11 = (byte *)CONCAT31(uVar18,cVar7);
        bVar5 = *pbVar16;
        *pbVar16 = *pbVar16 + (char)param_1;
        if (SCARRY1(bVar5,(char)param_1) == (char)*pbVar16 < '\0') goto code_r0x00403aaf;
        *pbVar11 = *pbVar11 + cVar7;
        pcVar14 = (char *)CONCAT31(uVar18,cVar7 + '\x02');
        bVar8 = cVar6 + unaff_EBX[0x52];
        unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar8,uVar26));
        *pcVar14 = *pcVar14 + cVar7 + '\x02';
        bVar5 = cVar7 + 4;
        pbVar11 = (byte *)CONCAT31(uVar18,bVar5);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pbVar11 = *pbVar11 + bVar5;
          cVar6 = (cVar7 + 's') - (0x90 < bVar5);
          pcVar14 = (char *)CONCAT31(uVar18,cVar6);
          bVar5 = (byte)((uint)param_1 >> 8);
          bVar28 = CARRY1(*unaff_EBX,bVar5);
          *unaff_EBX = *unaff_EBX + bVar5;
          pbVar12 = unaff_ESI;
          if (bVar28) {
            *pcVar14 = *pcVar14 + cVar6;
            unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar8 | unaff_EBP[0x5c],uVar26));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar11;
        unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar8 + unaff_EBX[0x52],uVar26));
code_r0x00403abf:
        *pbVar11 = *pbVar11 + (char)pbVar11;
        cVar6 = (char)pbVar11 + '\x02';
        pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
        bVar28 = (POPCOUNT(cVar6) & 1U) == 0;
        pbStack_18 = unaff_EBP;
        if (!bVar28) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar28) {
          *pbVar12 = *pbVar12 + (byte)pbVar12;
          bVar5 = (byte)pbVar12 | pbVar12[0x400005e];
          pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
          pbStack_18 = unaff_EBP;
          if ((char)bVar5 < '\x01') goto code_r0x00403b0b;
          *pbVar11 = *pbVar11 + bVar5;
code_r0x00403aaf:
          cVar6 = (char)pbVar11 + '(';
          pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
          *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
          bVar5 = *unaff_EBX;
          bVar8 = (byte)((uint)param_1 >> 8);
          *unaff_EBX = *unaff_EBX + bVar8;
          pbVar15 = unaff_EBP;
          if (!CARRY1(bVar5,bVar8)) goto code_r0x00403ad8;
          *pbVar11 = *pbVar11 + cVar6;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar8 | *unaff_EBX,(char)param_1));
          if ((POPCOUNT(*pbVar16 - cVar6) & 1U) != 0) {
            *unaff_ESI = *unaff_ESI + cVar6;
            pbStack_18 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                              (char)unaff_EBX));
      }
      bVar5 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar5;
      cVar6 = (bVar5 + 0x6f) - (0x90 < bVar5);
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
      bVar5 = *unaff_EBX;
      cVar7 = (char)((uint)param_1 >> 8);
      *unaff_EBX = *unaff_EBX + cVar7;
      pbStack_18 = unaff_EBP;
      if (*unaff_EBX == 0 || SCARRY1(bVar5,cVar7) != (char)*unaff_EBX < '\0') goto code_r0x00403b2c;
      *pcVar14 = *pcVar14 + cVar6;
    }
    else {
      pcVar14 = (char *)CONCAT31(uVar18,bVar5 + *pbVar16);
      pbVar12 = unaff_ESI;
      if ((POPCOUNT(bVar5 + *pbVar16) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         pbVar16 + (uint)(0xd2 < (byte)pcVar14) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar11 = unaff_EBP;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 + 0x2d);
code_r0x00403ad8:
    pbStack_18 = pbVar15;
    bVar5 = *pbVar11;
    bVar8 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar8;
    pbStack_1c = (byte *)CONCAT22(pbStack_1c._2_2_,in_ES);
    if (!CARRY1(bVar5,bVar8)) goto code_r0x00403afc;
    *pbVar11 = *pbVar11 + bVar8;
    bVar8 = bVar8 | pbVar11[0x400005d];
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar8);
    pbVar12 = unaff_ESI;
    if ((char)bVar8 < '\x01') {
      *pbVar11 = *pbVar11 + bVar8;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *pbVar16,(char)param_1));
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                            (char)unaff_EBX));
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar11 = *pbVar11 + (char)pbVar11;
    cVar6 = (char)pbVar11 + '(';
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    bVar5 = *unaff_EBX;
    bVar8 = (byte)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + bVar8;
    unaff_ESI = pbVar12;
    if (!CARRY1(bVar5,bVar8)) goto code_r0x00403b0b;
    *pbVar11 = *pbVar11 + cVar6;
  }
  else {
    bVar5 = *pbVar16;
    *pbVar16 = *pbVar16 + (char)param_1;
    if (SCARRY1(bVar5,(char)param_1) == (char)*pbVar16 < '\0') {
      pbVar11 = unaff_EBP;
      pbVar15 = (byte *)(pcVar14 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x02');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                          (char)unaff_EBX));
    pbVar12 = unaff_ESI;
code_r0x00403a7d:
    cVar6 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar6;
    uVar18 = (undefined3)((uint)pcVar14 >> 8);
    cVar7 = cVar6 + '-';
    pbVar15 = (byte *)CONCAT31(uVar18,cVar7);
    pbVar11 = unaff_EBP;
    unaff_ESI = pbVar12;
    if ((POPCOUNT(cVar7 - *pbVar16) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar15 = *pbVar15 + cVar7;
    bVar5 = cVar6 + 0x2f;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      bVar5 = *pbVar16;
      *pbVar16 = *pbVar16 + (byte)param_1;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar5,(byte)param_1);
      pbVar11 = (byte *)CONCAT31(uVar18,cVar6 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar18,bVar5) = *(char *)CONCAT31(uVar18,bVar5) + bVar5;
    bVar28 = 0x90 < bVar5;
    pcVar14 = (char *)CONCAT31(uVar18,cVar6 + -0x62);
code_r0x00403a8f:
    uVar18 = (undefined3)((uint)pcVar14 >> 8);
    bVar8 = (char)pcVar14 - bVar28;
    pbVar11 = (byte *)CONCAT31(uVar18,bVar8);
    bVar5 = *unaff_EBX;
    cVar6 = (char)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + cVar6;
    pbStack_18 = unaff_EBP;
    unaff_ESI = pbVar12;
    if (*unaff_EBX != 0 && SCARRY1(bVar5,cVar6) == (char)*unaff_EBX < '\0') {
      *pbVar11 = *pbVar11 + bVar8;
      unaff_ESI = (byte *)CONCAT31(uVar18,bVar8 + 0x2d);
      *(byte **)(pbVar12 + (int)unaff_EDI * 8) =
           pbVar16 + (uint)(0xd2 < bVar8) + *(int *)(pbVar12 + (int)unaff_EDI * 8);
      bVar28 = CARRY1(*pbVar12,(byte)pbVar12);
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      goto code_r0x00403aa1;
    }
  }
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *pbVar11,(char)param_1));
  *unaff_ESI = *unaff_ESI + (char)pbVar11;
code_r0x00403afc:
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar11 = *pbVar11 + (char)pbVar11;
  uVar18 = (undefined3)((uint)pbVar11 >> 8);
  bVar8 = (char)pbVar11 + 0x6f;
  bVar5 = *(byte *)CONCAT31(uVar18,bVar8);
  *pbVar16 = *pbVar16 + (char)param_1;
  pbVar11 = (byte *)CONCAT31(uVar18,(bVar8 & bVar5) + *unaff_ESI);
  *param_1 = *param_1 - (char)((uint)pbVar16 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar11 = *pbVar11 + (byte)pbVar11;
    bVar5 = (byte)pbVar11 | *unaff_EBX;
    piVar10 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
    if (bVar5 != 0) {
      pbStack_18 = pbStack_18 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar10 = (char)*piVar10 + bVar5;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *pbVar16,(char)param_1));
      pbStack_1c = pbStack_1c + *piVar10;
      pcVar14 = (char *)((int)piVar10 + *piVar10);
      uVar18 = (undefined3)((uint)pcVar14 >> 8);
      bVar8 = (char)pcVar14 - *pcVar14;
      pbVar12 = (byte *)CONCAT31(uVar18,bVar8);
      bVar5 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar8;
      piVar10 = (int *)CONCAT31(uVar18,bVar8 - CARRY1(bVar5,bVar8));
    }
    *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
    unaff_ESI = pbStack_1c + 4;
    out(*(undefined4 *)pbStack_1c,(short)pbVar16);
    pbVar11 = (byte *)(((uint)piVar10 >> 8) * 0x100);
    *pbVar16 = *pbVar16 + (byte)param_1;
    bVar5 = (char)pbVar16 - *unaff_EBX;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar5);
    *unaff_EBX = *unaff_EBX;
    *pbVar16 = *pbVar16 + (char)((uint)param_1 >> 8);
    *pbVar11 = *pbVar11;
    pcVar14 = (char *)(((uint)piVar10 >> 8) * 0x200);
    *pcVar14 = *pcVar14 + (char)unaff_EBX;
    bVar28 = CARRY1(*param_1,bVar5);
    *param_1 = *param_1 + bVar5;
    pbStack_1c = unaff_ESI;
    if (bVar28) break;
    while( true ) {
      *(byte **)pbVar11 = pbVar11 + (uint)bVar28 + *(int *)pbVar11;
      unaff_EDI = unaff_EDI + 4;
      pbVar11[(int)pbVar16] = pbVar11[(int)pbVar16] + (char)unaff_EBX;
      *pbVar11 = *pbVar11 + (char)pbVar11;
      *(byte **)pbStack_1c = unaff_EBX + *(int *)pbStack_1c;
      bVar5 = (byte)((uint)param_1 >> 8);
      cVar6 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar5 + *pbVar11,cVar6));
      pbVar11 = pbVar11 + (uint)CARRY1(bVar5,*pbVar11) + *(int *)pbVar11;
      *pbVar16 = *pbVar16 + cVar6;
      cVar6 = (char)unaff_EBX - pbStack_1c[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6);
      unaff_ESI = pbStack_1c;
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar11 = *pbVar11 + (char)pbVar11;
      pbVar16[0x16060000] = pbVar16[0x16060000] - (char)param_1;
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
      cVar6 = (char)pbVar11 + '\x02';
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
      bVar28 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403b18:
      bVar5 = (byte)pbVar12;
      uVar18 = (undefined3)((uint)pbVar12 >> 8);
      if (!bVar28) {
        *pbVar16 = *pbVar16 + (char)param_1;
        pbVar11 = (byte *)CONCAT31(uVar18,bVar5 | *unaff_ESI);
code_r0x00403b73:
        pbVar12 = (byte *)(unaff_EDI + *(int *)(pbStack_18 + -0x37));
        *pbVar11 = *pbVar11 + (byte)pbVar11;
        uVar18 = (undefined3)((uint)pbVar11 >> 8);
        bVar5 = (byte)pbVar11 | *pbVar16;
        pcVar14 = (char *)CONCAT31(uVar18,bVar5);
        uVar29 = CONCAT44(pbVar16,pcVar14);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pcVar14 = *pcVar14 + bVar5;
          *unaff_ESI = *unaff_ESI + 1;
          return (byte *)CONCAT31(uVar18,bVar5 + 6);
        }
        bVar5 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + 1;
        pcVar1 = (code *)swi(4);
        if (SCARRY1(bVar5,'\x01')) {
          uVar29 = (*pcVar1)();
          param_1 = extraout_ECX;
        }
        pbVar16 = (byte *)uVar29;
        *pbVar16 = *pbVar16 + (char)uVar29;
        cVar7 = (char)((ulonglong)uVar29 >> 0x20);
        puVar22 = (uint *)CONCAT22((short)((ulonglong)uVar29 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar29 >> 0x28) | unaff_EBX[0x2f],
                                            cVar7));
        *pbVar16 = *pbVar16 + (char)uVar29;
        cVar6 = (char)param_1;
        bVar4 = (byte)((uint)param_1 >> 8) | *pbVar16;
        pbVar16 = pbVar16 + *(int *)pbVar16;
        bVar5 = *unaff_EBX;
        *unaff_EBX = *unaff_EBX + bVar4;
        bVar8 = (byte)pbVar16;
        if (CARRY1(bVar5,bVar4)) {
          *pbVar16 = *pbVar16 + bVar8;
          bVar4 = bVar4 | (byte)*puVar22;
          *unaff_EBX = *unaff_EBX - cVar7;
          *pbVar16 = *pbVar16 + bVar8;
          uVar18 = (undefined3)((uint)pbVar16 >> 8);
          bVar8 = bVar8 | (byte)*puVar22;
          piVar10 = (int *)CONCAT31(uVar18,bVar8);
          pbStack_18 = pbStack_18 + *piVar10;
          *(byte *)piVar10 = (char)*piVar10 + bVar8;
          cVar7 = (char)unaff_EBX - *unaff_ESI;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar7) + 0x5f),cVar7));
          *(byte *)piVar10 = (char)*piVar10 + bVar8;
          bVar5 = bVar8 + 0x2a & (byte)*puVar22;
          pbVar12 = pbVar12 + *(int *)(pbStack_18 + 0x5f);
          *(char *)CONCAT31(uVar18,bVar5) = *(char *)CONCAT31(uVar18,bVar5) + bVar5;
          pbVar16 = (byte *)CONCAT31(uVar18,bVar5 + 0x2a);
          *(byte *)puVar22 = (byte)*puVar22 + 0x28;
          *pbVar16 = *pbVar16 + bVar5 + 0x2a;
        }
        else {
          *unaff_ESI = *unaff_ESI + bVar8;
        }
        pcVar14 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar4,cVar6));
        *pbStack_18 = *pbStack_18 - bVar4;
        *(byte *)puVar22 = (byte)*puVar22 + cVar6;
        bVar5 = (byte)pbVar16 - 0xb;
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar5);
        if (10 < (byte)pbVar16) {
          *pbVar11 = *pbVar11 | bVar5;
          return pbVar11;
        }
        *(byte *)puVar22 = (byte)*puVar22 + cVar6;
        do {
          bVar5 = unaff_EBX[-0x23];
          bVar4 = (byte)pbVar11;
          *pbVar11 = *pbVar11 + bVar4;
          bVar8 = pbStack_18[-0x22];
          *pbVar11 = *pbVar11 + bVar4;
          uVar18 = (undefined3)((uint)pbVar11 >> 8);
          bVar4 = bVar4 | *unaff_ESI;
          pbVar16 = (byte *)CONCAT31(uVar18,bVar4);
          cVar7 = (char)unaff_EBX - *unaff_ESI;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                       CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5
                                                                | bVar8,(char)unaff_EBX)) >> 8),
                                       cVar7);
          cVar6 = (char)pcVar14;
          pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                     CONCAT11((char)((uint)pcVar14 >> 8) + *pbVar16,cVar6));
          *(byte *)puVar22 = (byte)*puVar22 + cVar6;
          bVar8 = bVar4 - *pbVar16;
          pbVar11 = (byte *)CONCAT31(uVar18,bVar8);
          unaff_ESI = unaff_ESI + (-(uint)(bVar4 < *pbVar16) - *(int *)pbVar11);
          puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 * '\x02');
          *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
          *pbVar12 = *pbVar12 + cVar7;
          bVar5 = *pbVar11;
          *pbVar11 = *pbVar11 + bVar8;
          *puVar22 = (uint)(pbVar11 + (uint)CARRY1(bVar5,bVar8) + *puVar22);
        } while ((POPCOUNT(*puVar22 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar11 = *pbVar11 + (char)pbVar11;
        pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 | pbVar11[(int)pcVar14])
        ;
        bVar28 = false;
        pbVar11 = (byte *)((uint)pbVar11 & 0xffffff00);
        do {
          pbVar12 = pbVar12 + (-(uint)bVar28 - *(int *)unaff_EBX);
          pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),*pcVar14);
          *pcVar13 = *pcVar13 + *pcVar14;
          pbVar11 = (byte *)CONCAT31((int3)((uint)(pcVar13 +
                                                  (unaff_ESI[0x2000001] < (byte)((uint)pcVar14 >> 8)
                                                  ) + 0xda7d) >> 8),
                                     ((byte)(pcVar13 +
                                            (unaff_ESI[0x2000001] < (byte)((uint)pcVar14 >> 8)) +
                                            0xda7d) | (byte)*puVar22) + 0x7d);
          pcVar14 = pcVar14 + -1;
          *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar14;
          while( true ) {
            uVar23 = (undefined3)((uint)puVar22 >> 8);
            cVar6 = (char)puVar22 + *(char *)((int)pbVar12 * 2 + 0xa0000e1);
            puVar22 = (uint *)CONCAT31(uVar23,cVar6);
            bVar28 = CARRY1((byte)pbVar11,(byte)*puVar22);
            uVar18 = (undefined3)((uint)pbVar11 >> 8);
            bVar5 = (byte)pbVar11 + (byte)*puVar22;
            pbVar11 = (byte *)CONCAT31(uVar18,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *pbVar11 = *pbVar11 + bVar5;
            cVar7 = (char)pcVar14;
            pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar14 >> 8) | pbVar12[-0x65],cVar7));
            bVar8 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar5;
            if (CARRY1(bVar8,bVar5)) {
              *pbVar11 = *pbVar11 + bVar5;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_18[-0x1d]
                                                    ,(char)unaff_EBX));
              *pbVar11 = *pbVar11 + bVar5;
              bVar28 = false;
              bVar5 = bVar5 | (byte)*puVar22;
              pcVar13 = (char *)CONCAT31(uVar18,bVar5);
              while( true ) {
                bVar8 = (byte)pcVar13;
                uVar18 = (undefined3)((uint)pcVar13 >> 8);
                if (bVar28 == (char)bVar5 < '\0') break;
                *pcVar13 = *pcVar13 + bVar8;
                bVar8 = bVar8 | (byte)*puVar22;
                puVar17 = (uint *)CONCAT31(uVar18,bVar8);
                *pbVar12 = *pbVar12 << 1 | (char)*pbVar12 < '\0';
                uVar3 = *puVar17;
                *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                pbStack_18 = pbStack_18 + (-(uint)CARRY1((byte)uVar3,bVar8) - *puVar17);
                *puVar17 = *puVar17 << 1 | (uint)((int)*puVar17 < 0);
                while( true ) {
                  uVar3 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22 + (byte)pcVar14;
                  cVar6 = (char)puVar17 + 'o' + CARRY1((byte)uVar3,(byte)pcVar14);
                  pcVar13 = (char *)CONCAT31((int3)((uint)puVar17 >> 8),cVar6);
                  pcVar14 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar6) & 1U) != 0) break;
                  *pcVar13 = *pcVar13 + cVar6;
                  bVar5 = bRamfe140212;
                  pcVar14 = (char *)0x0;
                  uVar18 = (undefined3)((uint)(pcVar13 + -0x732b0000) >> 8);
                  bVar8 = in(0);
                  puVar17 = (uint *)CONCAT31(uVar18,bVar8);
                  uVar3 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22;
                  if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar22 < '\0') {
                    *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                    bVar8 = bVar8 | (byte)*puVar22;
                    puVar17 = (uint *)CONCAT31(uVar18,bVar8);
                    if ((POPCOUNT(bVar8) & 1U) == 0) {
                      *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                      pcVar14 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar5 | (byte)*puVar17) << 8);
                      *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                    puVar17 = (uint *)CONCAT31(uVar18,bVar8 | (byte)*puVar22);
                  }
                }
                *(byte *)puVar22 = (byte)*puVar22;
                bVar28 = SCARRY1((char)puVar22,*pbVar12);
                bVar5 = (char)puVar22 + *pbVar12;
                puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar5);
              }
              if (bVar28 == (char)bVar5 < '\0') {
                *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar14;
                pbVar11 = (byte *)((uint)pcVar13 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar13 = *pcVar13 + bVar8;
              pbVar11 = (byte *)CONCAT31(uVar18,(bVar8 | (byte)*puVar22) + 0x7d);
              pcVar14 = pcVar14 + -1;
              *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar14;
            }
            else {
              *(byte *)puVar22 = (byte)*puVar22 + cVar7;
              puVar22 = (uint *)CONCAT31(uVar23,cVar6 + *(char *)((int)pbVar12 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar12 = *pbVar12 + bVar5;
      bVar5 = bVar5 + 0x6f & *(byte *)CONCAT31(uVar18,bVar5 + 0x6f);
      *pbVar16 = *pbVar16 + (char)param_1;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar5;
      pcVar14 = (char *)CONCAT31(uVar18,bVar5 - *unaff_EDI);
code_r0x00403b2c:
      bVar5 = (char)pcVar14 - *pcVar14;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar5);
      *pbVar11 = *pbVar11 + bVar5;
      *(byte **)pbVar11 = pbVar16 + *(int *)pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      bVar28 = CARRY1(*pbVar11,bVar5);
      *pbVar11 = *pbVar11 + bVar5;
      pbStack_1c = unaff_ESI;
    }
  }
  *pbVar11 = *pbVar11;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *pbVar16);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_18 = pbStack_18 + -*puVar17;
  do {
    bVar5 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar5;
    pbVar12 = pbVar12 + -*(int *)(pbStack_18 + -0x1a);
    *(byte *)puVar17 = (byte)*puVar17 + bVar5;
    bVar5 = bVar5 | (byte)*puVar22;
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar5);
    *(byte *)puVar17 = (byte)*puVar17 | bVar5;
    bVar5 = (byte)*puVar17;
    pbStack_18 = (byte *)0x2700001;
    while ((POPCOUNT(bVar5) & 1U) == 0) {
      do {
        *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar17;
        bVar5 = (byte)puVar17 | (byte)*puVar22;
        puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
        uVar19 = CONCAT21((short)((uint)pcVar14 >> 0x10),(byte)((uint)pcVar14 >> 8) | bRamfe140212);
        while( true ) {
          pcVar14 = (char *)((uint)uVar19 << 8);
          bVar9 = (byte)puVar17;
          *(byte *)puVar17 = (byte)*puVar17 & bVar9;
          bVar4 = *unaff_EBX;
          bVar27 = (byte)uVar19;
          bVar8 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar27;
          bVar5 = *unaff_EBX;
          if (!CARRY1(bVar4,bVar27)) break;
          *(byte *)puVar17 = (byte)*puVar17 + bVar9;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar17 = (byte)*puVar17 + bVar9;
          bVar9 = bVar9 | (byte)*puVar22;
          puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar9);
          bVar28 = (POPCOUNT(bVar9) & 1U) == 0;
          while( true ) {
            cVar6 = (char)((uint)unaff_EBX >> 8);
            uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar28) {
              *(byte *)puVar22 = (byte)*puVar22;
              unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(cVar6 + unaff_EBX[-0x1f],(char)unaff_EBX)
                                          );
              goto code_r0x00403d52;
            }
            *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
            uVar21 = (undefined2)((uint)pcVar14 >> 0x10);
            bVar8 = (byte)((uint)pcVar14 >> 8) | (byte)*puVar17;
            uVar19 = CONCAT21(uVar21,bVar8);
            *puVar17 = *puVar17 & (uint)puVar17;
            *unaff_EBX = *unaff_EBX + bVar8;
            uVar18 = (undefined3)((uint)puVar17 >> 8);
            bVar5 = (char)puVar17 - bVar8;
            pcVar14 = (char *)CONCAT31(uVar18,bVar5);
            *pcVar14 = *pcVar14 + bVar5;
            bVar5 = bVar5 | (byte)*puVar22;
            puVar17 = (uint *)CONCAT31(uVar18,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *(byte *)puVar17 = (byte)*puVar17 + bVar5;
            pcVar14 = (char *)((uint)CONCAT21(uVar21,bVar8 | (byte)*puVar17) << 8);
            *puVar17 = *puVar17 - (int)puVar17;
            *(byte *)puVar22 = (byte)*puVar22;
            unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(cVar6 + unaff_EBX[-0x1d],(char)unaff_EBX));
            do {
              *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
              uVar20 = (undefined2)((uint)puVar22 >> 0x10);
              cVar6 = (char)puVar22;
              bVar5 = (byte)((uint)puVar22 >> 8) | unaff_EBX[-0x17];
              puVar22 = (uint *)CONCAT22(uVar20,CONCAT11(bVar5,cVar6));
              *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar17;
                uVar18 = (undefined3)((uint)puVar17 >> 8);
                bVar4 = (byte)puVar17 | (byte)*puVar22;
                pcVar13 = (char *)CONCAT31(uVar18,bVar4);
                bVar8 = unaff_EBX[-0x16];
                *pcVar13 = *pcVar13 + bVar4;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar8 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar13 = *pcVar13 + bVar4;
                pbVar16 = (byte *)CONCAT31(uVar18,bVar4 | (byte)*puVar22);
                while( true ) {
                  *pbVar16 = *pbVar16 + (byte)pbVar16;
                  uVar18 = (undefined3)((uint)pbVar16 >> 8);
                  bVar8 = (byte)pbVar16 | (byte)*puVar22;
                  puVar17 = (uint *)CONCAT31(uVar18,bVar8);
                  if ((POPCOUNT(bVar8) & 1U) != 0) break;
                  *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                  bVar4 = pbVar12[-0x14];
                  *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                  bVar8 = bVar8 | (byte)*puVar22;
                  pcVar13 = (char *)CONCAT31(uVar18,bVar8);
                  bVar9 = unaff_EBX[-0x15];
                  *pcVar13 = *pcVar13 + bVar8;
                  pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),
                                                    (byte)((uint)pcVar14 >> 8) | bVar4 |
                                                    pbVar12[-0x13]) << 8);
                  *pcVar13 = *pcVar13 + bVar8;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar9 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar13 = *pcVar13 + bVar8;
                  pbVar16 = (byte *)CONCAT31(uVar18,bVar8 | (byte)*puVar22);
                  do {
                    do {
                      bVar4 = (byte)pbVar16;
                      *pbVar16 = *pbVar16 + bVar4;
                      cVar25 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar16,
                                                            cVar25));
                      *pbVar16 = bVar4;
                      *pbVar16 = *pbVar16 + bVar4;
                      cVar7 = (char)((uint)pcVar14 >> 8) + *pbVar16;
                      pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),cVar7) << 8);
                      uVar18 = (undefined3)((uint)pbVar16 >> 8);
                      bVar4 = bVar4 & *pbVar16;
                      pbVar16 = (byte *)CONCAT31(uVar18,bVar4);
                      bVar8 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar7;
                    } while (SCARRY1(bVar8,cVar7) == (char)*unaff_EBX < '\0');
                    *pbVar16 = *pbVar16 + bVar4;
                    bVar4 = bVar4 | (byte)*puVar22;
                    pbVar16 = (byte *)CONCAT31(uVar18,bVar4);
                    if ((POPCOUNT(bVar4) & 1U) == 0) {
                      *pbVar16 = *pbVar16 + bVar4;
                      *pbVar16 = *pbVar16 + bVar4;
                      cVar6 = cVar6 - bVar5;
                      pbVar11 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),cVar6);
                      *pbVar16 = *pbVar16 + bVar4;
                      bRam0312382b = bRam0312382b | *pbVar11;
                      while( true ) {
                        bVar8 = (byte)pbVar16;
                        *pbVar16 = *pbVar16 + bVar8;
                        bRam0312382b = bRam0312382b | (pbVar12 + 0x21b0000)[(int)pbVar16];
                        uVar18 = (undefined3)((uint)pbVar16 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar11 = *pbVar11 + bRam0312382b;
                        pbVar16 = (byte *)CONCAT31(uVar18,bVar8 | *unaff_ESI);
                      }
                      *pbVar16 = *pbVar16 + bVar8;
                      bVar8 = bVar8 | *unaff_ESI;
                      pcVar14 = (char *)CONCAT31(uVar18,bVar8);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar11);
                      *pcVar14 = *pcVar14 + bVar8;
                      uVar21 = CONCAT11(bVar5 | bRam6f0a002b,cVar6);
                      pcVar13 = (char *)CONCAT22(uVar20,uVar21);
                      *pcVar14 = *pcVar14 + bVar8;
                      *pcVar13 = *pcVar13 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar21);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar25 + *pcVar14);
                  } while (SCARRY1(cVar25,*pcVar14) != (char)(cVar25 + *pcVar14) < '\0');
                }
                uVar3 = *puVar22;
                *(byte *)puVar22 = (byte)*puVar22;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar22 < '\0');
              *(byte *)puVar22 = (byte)*puVar22;
              *pcVar14 = *pcVar14 - (char)unaff_EBX;
              *(byte *)puVar17 = (byte)*puVar17 + bVar8;
              bVar8 = bVar8 | (byte)*puVar22;
              puVar17 = (uint *)CONCAT31(uVar18,bVar8);
              bVar28 = (POPCOUNT(bVar8) & 1U) == 0;
            } while (bVar28);
          }
        }
      } while (SCARRY1(bVar8,bVar27));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar14 >> 8);
    *pbVar12 = *pbVar12 - (char)unaff_EBX;
  } while( true );
}


