/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004037c8
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(undefined4 param_1, byte * param_2)
 * Local Vars  : pbStack_3c, pbStack_38, pbStack_28, pbStack_18, iStack_4, uVar1, iVar2, uVar3, pcVar4, uVar5, uVar6, cVar7, bVar8, bVar9, bVar10, bVar11, in_EAX, pbVar12, piVar13, iVar14, pbVar15, pcVar16, pcVar17, puVar18, uVar19, uVar20, uVar21, pbVar22, extraout_ECX, bVar23, uVar24, uVar25, pbVar26, puVar27, uVar28, cVar29, cVar30, cVar31, uVar32, unaff_EBX, pbVar33, cVar34, unaff_EBP, unaff_ESI, unaff_EDI, in_ES, in_CS, in_DS, bVar35, in_AF, uVar36, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */

byte * __fastcall _ctor(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined6 uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte *in_EAX;
  byte *pbVar12;
  undefined3 uVar19;
  int iVar14;
  byte *pbVar15;
  uint3 uVar20;
  char *pcVar16;
  char *pcVar17;
  uint *puVar18;
  undefined2 uVar21;
  undefined2 uVar24;
  byte *pbVar22;
  byte *extraout_ECX;
  undefined2 uVar25;
  byte *pbVar26;
  uint *puVar27;
  undefined3 uVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  undefined1 uVar32;
  char cVar34;
  undefined4 unaff_EBX;
  byte *pbVar33;
  byte *unaff_EBP;
  char *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_DS;
  bool bVar35;
  byte in_AF;
  undefined8 uVar36;
  byte *pbStack_3c;
  byte *pbStack_38;
  byte *pbStack_28;
  byte *pbStack_18;
  int iStack_4;
  int *piVar13;
  byte bVar23;
  
  while( true ) {
                    /* .NET CLR Managed Code */
    bVar8 = (byte)((uint)param_1 >> 8);
    bVar10 = *in_EAX;
    uVar24 = (undefined2)((uint)param_1 >> 0x10);
    bVar11 = (byte)param_1;
    pbVar12 = in_EAX + (uint)CARRY1(bVar8,*in_EAX) + *(int *)in_EAX;
    *param_2 = *param_2 + bVar11;
    cVar29 = (char)unaff_EBX - *unaff_ESI;
    bVar23 = bVar8 + bVar10 + *pbVar12;
    uVar21 = CONCAT11(bVar23,bVar11);
    iVar14 = CONCAT22(uVar24,uVar21);
    *pbVar12 = *pbVar12;
    iStack_4 = CONCAT22(iStack_4._2_2_,in_ES);
    uVar19 = (undefined3)((uint)pbVar12 >> 8);
    cVar7 = (char)pbVar12 - *pbVar12;
    piVar13 = (int *)CONCAT31(uVar19,cVar7);
    pbVar12 = (byte *)(unaff_ESI + *piVar13);
    bVar8 = cVar7 + (char)*piVar13;
    pcVar17 = (char *)CONCAT31(uVar19,bVar8);
    *pcVar17 = *pcVar17 + bVar8;
    *pcVar17 = *pcVar17 + bVar8;
    *pcVar17 = *pcVar17 + bVar8;
    bVar10 = *param_2;
    *param_2 = *param_2 + bVar8;
    uVar28 = (undefined3)((uint)iVar14 >> 8);
    if (CARRY1(bVar10,bVar8)) break;
    uVar25 = SUB42(param_2,0);
    out(*(undefined4 *)pbVar12,uVar25);
    unaff_EBP = (byte *)0x80a0000;
    out(*(undefined4 *)(pbVar12 + 4),uVar25);
    puVar27 = (uint *)(unaff_EDI + (int)param_2);
    uVar3 = (uint)CARRY1(bVar10,bVar8);
    uVar6 = *puVar27;
    uVar1 = *puVar27;
    *puVar27 = (uint)(pcVar17 + uVar1 + uVar3);
    iVar14 = iStack_4 + *(int *)(param_2 + iVar14) +
             (uint)(CARRY4(uVar6,(uint)pcVar17) || CARRY4((uint)(pcVar17 + uVar1),uVar3));
    cVar7 = (char)iVar14 + '\t';
    in_EAX = (byte *)CONCAT31((int3)((uint)iVar14 >> 8),cVar7);
    unaff_ESI = (char *)0x260a0004;
    out(uRam260a0000,uVar25);
    *in_EAX = *in_EAX + cVar7;
    param_1 = CONCAT22(uVar24,CONCAT11(bVar23 | *param_2,6));
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),cVar29);
    in_ES = uVar21;
  }
  *pcVar17 = *pcVar17 + bVar8;
  pbVar33 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56],cVar29));
  *pcVar17 = *pcVar17 + bVar8;
  bVar9 = bVar8 + 2;
  *pbVar33 = *pbVar33 - (char)param_2;
  *(char *)CONCAT31(uVar19,bVar9) = *(char *)CONCAT31(uVar19,bVar9) + bVar9;
  bVar23 = *pbVar12;
  pbVar22 = (byte *)CONCAT31(uVar28,bVar11 | bVar23);
  bVar10 = 9 < (bVar8 + 0x74 & 0xf) | in_AF;
  bVar8 = bVar8 + 0x74 + bVar10 * '\x06';
  bVar8 = bVar8 + (0x90 < (bVar8 & 0xf0) | 0x8d < bVar9 | bVar10 * (0xf9 < bVar8)) * '`';
  pbVar26 = (byte *)CONCAT31(uVar19,bVar8);
  bVar10 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar8;
  if (!SCARRY1(bVar10,bVar8)) {
    *pbVar12 = *pbVar12 + bVar8;
    pbVar12 = pbVar12 + *(int *)(param_2 + 0x33);
    *pbVar26 = *pbVar26 | bVar8;
    *pbVar12 = *pbVar12 + bVar8;
    bVar10 = bVar8 + 0x72;
    *(byte *)CONCAT31(uVar19,bVar10) = *(byte *)CONCAT31(uVar19,bVar10) | bVar10;
    *pbVar12 = *pbVar12 + bVar10;
    pbVar22 = (byte *)CONCAT31(uVar28,(bVar11 | bVar23) + *pbVar12);
    pcVar17 = (char *)CONCAT31(uVar19,bVar8 - 0x11);
    *pcVar17 = *pcVar17 + (bVar8 - 0x11);
    pbVar26 = (byte *)CONCAT31(uVar19,bVar8 - 0xf);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x52);
    *pbVar26 = *pbVar26 + (bVar8 - 0xf);
  }
code_r0x00403825:
  uVar19 = (undefined3)((uint)pbVar26 >> 8);
  cVar7 = (char)pbVar26 + '\x7f';
  pcVar17 = (char *)CONCAT31(uVar19,cVar7);
  *pcVar17 = *pcVar17 + cVar7;
  iVar14 = CONCAT31(uVar19,(char)pbVar26 + -0x7f) + 0x547d;
  cVar29 = (char)iVar14;
  uVar19 = (undefined3)((uint)iVar14 >> 8);
  cVar7 = cVar29 + '*';
  pcVar17 = (char *)CONCAT31(uVar19,cVar7);
  pbVar26 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar12);
  cVar30 = (char)pbVar33 - *pbVar12;
  uVar21 = (undefined2)((uint)pbVar33 >> 0x10);
  cVar34 = (char)((uint)pbVar33 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar33 >> 8),cVar30) + 0x57);
  *pcVar17 = *pcVar17 + cVar7;
  bVar10 = cVar29 + 0x54U & *pbVar26;
  iVar14 = *(int *)(unaff_EBP + 0x57);
  *(char *)CONCAT31(uVar19,bVar10) = *(char *)CONCAT31(uVar19,bVar10) + bVar10;
  pcVar17 = (char *)CONCAT31(uVar19,bVar10 + 0x2a);
  pbStack_18 = (byte *)CONCAT22(pbStack_18._2_2_,in_DS);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar34,cVar30)) + 0x58);
  *pcVar17 = *pcVar17 + bVar10 + 0x2a;
  bVar8 = bVar10 + 0x54 & *pbVar26;
  iVar2 = *(int *)(unaff_EBP + 0x58);
  *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
  pcVar17 = (char *)CONCAT31(uVar19,bVar8 + 0x2a);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar34,cVar30)) + 0x55);
  *pcVar17 = *pcVar17 + bVar8 + 0x2a;
  pcVar17 = (char *)CONCAT31(uVar19,bVar8 + 0x57);
  pbVar26 = pbVar26 + *(int *)pbStack_18;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar34,cVar30)) + 0x55);
  *pcVar17 = *pcVar17 + bVar8 + 0x57;
  cVar7 = bVar8 - 0x3a;
  pcVar17 = (char *)CONCAT31(uVar19,cVar7);
  *pcVar17 = *pcVar17 + cVar7;
  bVar10 = *pbVar26;
  cVar31 = (char)pbVar22;
  pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar34,
                                                  cVar30)) + 0x59),cVar30));
  *pcVar17 = *pcVar17 + cVar7;
  bVar11 = bVar8 - 0x10 & *pbVar26;
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x59) + iVar2 + iVar14;
  *(char *)CONCAT31(uVar19,bVar11) = *(char *)CONCAT31(uVar19,bVar11) + bVar11;
  bVar11 = bVar11 + 0x2a;
  pbVar12 = (byte *)CONCAT31(uVar19,bVar11);
  cVar7 = unaff_EDI[0x17];
  *pbVar12 = *pbVar12 + bVar11;
  bVar8 = *pbVar26;
  pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,in_DS);
  cVar29 = unaff_EDI[0x1a];
  *pbVar12 = *pbVar12 + bVar11;
  pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar22 >> 8) | bVar10) + cVar7 | bVar8) +
                                      cVar29 | *pbVar26,cVar31));
  *pbVar33 = *pbVar33 + cVar30;
  *(byte *)((int)pbVar12 * 2) = *(byte *)((int)pbVar12 * 2) ^ bVar11;
  bVar10 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar11;
  bVar8 = *pbVar12;
  *pbVar22 = *pbVar22 + (char)pbVar26;
  bVar10 = ((bVar11 - bVar8) - CARRY1(bVar10,bVar11)) + *pbVar26;
  pbVar12 = (byte *)CONCAT31(uVar19,bVar10);
  param_2 = pbStack_28;
  if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x004038f6;
  *pbVar12 = *pbVar12 + bVar10;
  cVar7 = (bVar10 + 0x6f) - (0x90 < bVar10);
  pbVar15 = (byte *)CONCAT31(uVar19,cVar7);
  bVar10 = *pbVar26;
  *pbVar26 = *pbVar26 + cVar31;
  param_2 = pbVar26;
  if (SCARRY1(bVar10,cVar31) == (char)*pbVar26 < '\0') {
    unaff_EBP[0x2b060000] = unaff_EBP[0x2b060000] - cVar7;
    cVar7 = cVar7 + *pbVar26;
    pbVar12 = (byte *)CONCAT31(uVar19,cVar7);
    goto code_r0x0040390c;
  }
  do {
    *pbVar15 = *pbVar15 + (char)pbVar15;
    while( true ) {
      uVar19 = (undefined3)((uint)pbVar15 >> 8);
      cVar7 = (char)pbVar15 + '\x02';
      pbVar12 = (byte *)CONCAT31(uVar19,cVar7);
      if ((POPCOUNT(cVar7) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)pbStack_18;
      cVar7 = (char)pbVar12 + *param_2;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar7);
code_r0x0040390c:
      cVar29 = (char)pbVar12;
      if ((POPCOUNT(cVar7) & 1U) != 0) {
        *pbStack_18 = *pbStack_18 + cVar29;
        goto code_r0x0040395a;
      }
      *pbVar12 = *pbVar12 + cVar29;
      bVar10 = cVar29 + 2;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar10);
code_r0x00403912:
      bVar35 = (POPCOUNT(bVar10) & 1U) == 0;
      if (!bVar35) goto code_r0x00403967;
      *pbVar12 = *pbVar12 + (char)pbVar12;
code_r0x00403916:
      bVar8 = (char)pbVar12 + 0x6f;
      pbVar26 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
      bVar10 = *pbVar26;
      *pbVar26 = *pbVar26 + bVar8;
      if (*pbVar26 == 0 || SCARRY1(bVar10,bVar8) != (char)*pbVar26 < '\0') goto code_r0x00403979;
      *pbVar26 = *pbVar26 + bVar8;
      pbVar15 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),(char)pbVar12 + -100);
      *(byte **)(pbStack_18 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar8) + *(int *)(pbStack_18 + (int)unaff_EDI * 8);
code_r0x00403926:
      *(byte **)pbVar15 = pbStack_28;
      bVar10 = *pbStack_18;
      bVar8 = (byte)pbVar15;
      *pbStack_18 = *pbStack_18 + bVar8;
      if (CARRY1(bVar10,bVar8)) {
        *pbVar15 = *pbVar15 + bVar8;
        uVar19 = (undefined3)((uint)pbVar15 >> 8);
        bVar8 = bVar8 | pbVar15[0x400005b];
        pbVar12 = (byte *)CONCAT31(uVar19,bVar8);
        pbVar26 = pbStack_18;
        if ((char)bVar8 < '\x01') goto code_r0x00403991;
        *pbVar12 = *pbVar12 + bVar8;
        cVar7 = bVar8 + 0x28;
        pbVar12 = (byte *)CONCAT31(uVar19,cVar7);
        *(byte **)pbVar12 = pbVar12 + (uint)(0xd7 < bVar8) + *(int *)pbVar12;
        bVar10 = *pbVar33;
        bVar8 = (byte)((uint)pbVar22 >> 8);
        *pbVar33 = *pbVar33 + bVar8;
        if (CARRY1(bVar10,bVar8)) {
          *pbVar12 = *pbVar12 + cVar7;
          pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar12,(char)pbVar22));
          *pbStack_18 = *pbStack_18 + cVar7;
          pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                     CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x55],
                                              (char)pbVar33));
          *pbVar12 = *pbVar12 + cVar7;
code_r0x00403950:
          uVar19 = (undefined3)((uint)pbVar12 >> 8);
          bVar8 = (char)pbVar12 + 0x6f;
          bVar10 = *(byte *)CONCAT31(uVar19,bVar8);
          *param_2 = *param_2 + (char)pbVar22;
          pbVar12 = (byte *)CONCAT31(uVar19,(bVar8 & bVar10) + *pbStack_18);
          *pbVar22 = *pbVar22 - (char)((uint)param_2 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar12 = *pbVar12 + cVar7;
    cVar7 = (char)pbVar15 + '.' + *param_2;
    pbVar12 = (byte *)CONCAT31(uVar19,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      pbVar26 = param_2 + (int)pbVar12;
      *pbVar26 = *pbVar26 + cVar7;
      bVar10 = *pbVar26;
      goto code_r0x00403912;
    }
    *pbVar12 = *pbVar12 + cVar7;
    bVar10 = cVar7 + 2;
    pbVar12 = (byte *)CONCAT31(uVar19,bVar10);
    if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x00403916;
    *pbVar12 = *pbVar12 + bVar10;
    cVar29 = cVar7 + 'q';
    piVar13 = (int *)CONCAT31(uVar19,cVar29);
    *piVar13 = (*piVar13 - (int)piVar13) - (uint)(0x90 < bVar10);
    bVar10 = *pbVar33;
    bVar8 = (byte)((uint)pbVar22 >> 8);
    *pbVar33 = *pbVar33 + bVar8;
    if (!CARRY1(bVar10,bVar8)) {
      out(*(undefined4 *)pbStack_18,(short)param_2);
      bVar10 = (cVar29 - (char)*piVar13) - CARRY1(bVar10,bVar8);
      *param_2 = *param_2 + (char)pbVar22;
      cVar7 = bVar10 - *(byte *)CONCAT31(uVar19,bVar10);
      pbVar12 = pbStack_18 +
                ((4 - *(int *)CONCAT31(uVar19,cVar7)) -
                (uint)(bVar10 < *(byte *)CONCAT31(uVar19,bVar10)));
      pbVar26 = (byte *)CONCAT31(uVar19,cVar7);
      pbStack_18 = (byte *)0;
      goto code_r0x00403825;
    }
    *(char *)piVar13 = (char)*piVar13 + cVar29;
    uVar21 = (undefined2)((uint)pbVar33 >> 0x10);
    bVar10 = (byte)((uint)pbVar33 >> 8) | unaff_EBP[0x56];
    *(char *)piVar13 = (char)*piVar13 + cVar29;
    pcVar17 = (char *)CONCAT31(uVar19,cVar7 + 's');
    pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(bVar10 + *(char *)(CONCAT22(uVar21,CONCAT11(bVar10,(
                                                  char)pbVar33)) + 0x56),(char)pbVar33));
    *pcVar17 = *pcVar17 + cVar7 + 's';
    bVar10 = cVar7 - 0xf;
    *(char *)CONCAT31(uVar19,bVar10) = *(char *)CONCAT31(uVar19,bVar10) + bVar10;
    bVar8 = cVar7 + 0x1e;
    pbVar15 = (byte *)CONCAT31(uVar19,bVar8);
    *(byte **)(pbStack_18 + (int)unaff_EDI * 8) =
         pbVar22 + (uint)(0xd2 < bVar10) + *(int *)(pbStack_18 + (int)unaff_EDI * 8);
    in_ES = *(undefined2 *)pbVar15;
    bVar10 = *pbStack_18;
    *pbStack_18 = *pbStack_18 + bVar8;
    param_2 = pbVar22;
    if (CARRY1(bVar10,bVar8)) {
      *pbVar15 = *pbVar15 + bVar8;
      pbVar12 = (byte *)CONCAT31(uVar19,bVar8 | pbVar15[0x400005a]);
      if ('\0' < (char)(bVar8 | pbVar15[0x400005a])) {
code_r0x004038f6:
        bVar10 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar10;
        uVar19 = (undefined3)((uint)pbVar12 >> 8);
        cVar7 = ((bVar10 + 0x28) - *(char *)CONCAT31(uVar19,bVar10 + 0x28)) - (0xd7 < bVar10);
        pbVar12 = (byte *)CONCAT31(uVar19,cVar7);
        bVar10 = *pbVar33;
        bVar8 = (byte)((uint)pbVar22 >> 8);
        *pbVar33 = *pbVar33 + bVar8;
        if (CARRY1(bVar10,bVar8)) {
          *pbVar12 = *pbVar12 + cVar7;
          pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar12,(char)pbVar22));
          *pbStack_18 = *pbStack_18 + cVar7;
          goto code_r0x00403908;
        }
        pbVar15 = pbVar12 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar12 = *pbVar12 + (char)pbVar12;
  param_2[0x16060000] = param_2[0x16060000] - (char)pbVar22;
  pbVar33 = (byte *)((uint)pbVar33 | (uint)pbStack_18);
  cVar7 = (char)pbVar12 + '\x02';
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar7);
  bVar35 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403967:
  if (!bVar35) goto code_r0x004039be;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar19 = (undefined3)((uint)pbVar12 >> 8);
  bVar10 = (char)pbVar12 + 0x6f;
  bVar10 = bVar10 & *(byte *)CONCAT31(uVar19,bVar10);
  pbVar26 = (byte *)CONCAT31(uVar19,bVar10);
  *param_2 = *param_2 + (char)pbVar22;
  param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar10;
code_r0x00403979:
  bVar10 = (char)pbVar26 - *unaff_EDI;
  bVar35 = bVar10 < *pbVar22;
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),bVar10 - *pbVar22);
  do {
    cVar7 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar7 + bVar35;
    *pbVar12 = *pbVar12 + cVar7;
    *pbVar22 = *pbVar22 + (char)param_2;
    pbVar22[0x101c00aa] = pbVar22[0x101c00aa] + (char)pbVar33;
    *pbVar12 = *pbVar12 + cVar7;
    *(byte **)pbStack_18 = pbVar33 + *(int *)pbStack_18;
    bVar10 = (byte)((uint)pbVar22 >> 8);
    pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                               CONCAT11(bVar10 + *pbVar12,(char)pbVar22));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar10,*pbVar12) + *(int *)pbVar12;
    pbVar26 = pbStack_18;
code_r0x00403991:
    cVar7 = (char)pbVar22;
    *param_2 = *param_2 + cVar7;
    cVar29 = (char)pbVar33 - pbVar26[2];
    pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar29);
    pbStack_18 = pbVar26;
    if ((POPCOUNT(cVar29) & 1U) != 0) goto code_r0x0040395a;
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    uVar20 = (uint3)((uint)pbVar12 >> 8);
    bVar10 = (byte)pbVar12 | *pbVar33;
    piVar13 = (int *)CONCAT31(uVar20,bVar10);
    bVar8 = (byte)((uint)pbVar22 >> 8);
    bVar11 = (byte)param_2;
    if (bVar10 == 0) {
      *(char *)piVar13 = (char)*piVar13;
      pbStack_18 = pbVar26 + 4;
      out(*(undefined4 *)pbVar26,(short)param_2);
      pbVar12 = (byte *)((uint)uVar20 << 8);
      *param_2 = *param_2 + cVar7;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar11 - *pbVar33);
      *pbVar33 = *pbVar33;
      *param_2 = *param_2 + bVar8;
      *pbVar12 = *pbVar12;
      *pbVar33 = *pbVar33 + cVar29;
      *pbVar12 = *pbVar12;
      *(byte **)(pbVar33 + -0x3d) = pbStack_18 + *(int *)(pbVar33 + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar13 = (char)*piVar13 + bVar10;
    pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(bVar8 | *param_2,cVar7));
    pbStack_18 = pbVar26 + *piVar13;
    pcVar17 = (char *)((int)piVar13 + *piVar13);
    bVar8 = (char)pcVar17 - *pcVar17;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar8);
    bVar10 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar8;
    pbVar12 = pbVar12 + (-(uint)CARRY1(bVar10,bVar8) - *(int *)pbVar12);
    bVar35 = CARRY1(*pbVar22,bVar11);
    *pbVar22 = *pbVar22 + bVar11;
  } while (!bVar35);
  *pbVar12 = *pbVar12 + (char)pbVar12;
  pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(byte)pbVar22 | *param_2);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar12 = *pbVar12 + (byte)pbVar12;
  uVar19 = (undefined3)((uint)pbVar12 >> 8);
  bVar10 = (byte)pbVar12 | *param_2;
  pcVar17 = (char *)CONCAT31(uVar19,bVar10);
  if ((POPCOUNT(bVar10) & 1U) == 0) goto code_r0x004039c8;
  cVar7 = *pcVar17;
  *pcVar17 = *pcVar17 + bVar10;
  cVar29 = *pcVar17;
  if (!SCARRY1(cVar7,bVar10)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar17 = *pcVar17 + bVar10;
  *pbStack_18 = *pbStack_18 + 1;
  uVar5 = *(undefined6 *)CONCAT31(uVar19,bVar10 + 6);
  pbVar26 = (byte *)uVar5;
  bVar10 = *param_2;
  bVar8 = (byte)pbVar22;
  *param_2 = *param_2 + bVar8;
  if (!CARRY1(bVar10,bVar8)) goto code_r0x00403979;
  *pbVar26 = *pbVar26 + (char)uVar5;
  bVar11 = (byte)((uint)pbVar22 >> 8) | *pbVar26;
  uVar21 = CONCAT11(bVar11,bVar8);
  pbVar26 = pbVar26 + -*(int *)pbVar26;
  bVar10 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar11;
  if (CARRY1(bVar10,bVar11)) {
    cVar7 = (char)pbVar26;
    *pbVar26 = *pbVar26 + cVar7;
    bVar10 = *param_2;
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - pbVar33[-0x3a],(char)param_2));
    *pbVar26 = *pbVar26 + cVar7;
    uVar24 = (undefined2)((uint)pbVar33 >> 0x10);
    bVar9 = (byte)((uint)pbVar33 >> 8) | param_2[0x32];
    pcVar17 = (char *)CONCAT22(uVar24,CONCAT11(bVar9,(char)pbVar33));
    pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,in_CS);
    cVar29 = cVar7 + *pcVar17 + '-';
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar29);
    *pbVar26 = *pbVar26;
    bVar23 = *param_2;
    cVar31 = (char)pbVar33 - *pbStack_18;
    cVar7 = unaff_EDI[0x17];
    *pbVar26 = *pbVar26 + cVar29;
    uVar21 = CONCAT11((bVar11 | bVar10) + cVar7 | *param_2,bVar8 - bVar23);
    pbVar33 = (byte *)CONCAT22(uVar24,CONCAT11(bVar9 + *(char *)(CONCAT31((int3)((uint)pcVar17 >> 8)
                                                                          ,cVar31) + 0x4e),cVar31));
    *pbVar26 = *pbVar26 + cVar29;
  }
  pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),uVar21);
  bVar10 = (byte)pbVar26;
  uVar19 = (undefined3)((uint)pbVar26 >> 8);
  pcVar17 = (char *)CONCAT31(uVar19,bVar10 + 0x28);
  *pcVar17 = (*pcVar17 - (bVar10 + 0x28)) - (0xd7 < bVar10);
  *param_2 = *param_2 + (char)uVar21;
  bVar8 = bVar10 + 0x1b;
  pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                             CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x4f],(char)pbVar33));
  *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
  pcVar16 = (char *)CONCAT31(uVar19,bVar10 + 0x43);
  *pcVar16 = (*pcVar16 - (bVar10 + 0x43)) - (0xd7 < bVar8);
  *param_2 = *param_2 + (char)uVar21;
  pcVar17 = pcVar16 + -0x6b721c;
  pcVar16 = pcVar16 + -0x6b721a;
  *pcVar16 = *pcVar16 + (char)((uint)param_2 >> 8);
  cVar29 = *pcVar16;
code_r0x00403a22:
  if ((POPCOUNT(cVar29) & 1U) == 0) {
code_r0x00403a24:
    cVar7 = (char)pcVar17;
    *pcVar17 = *pcVar17 + cVar7;
    uVar19 = (undefined3)((uint)pcVar17 >> 8);
    bVar10 = cVar7 + 2;
    if ((POPCOUNT(bVar10) & 1U) == 0) {
      *(char *)CONCAT31(uVar19,bVar10) = *(char *)CONCAT31(uVar19,bVar10) + bVar10;
      piVar13 = (int *)CONCAT31(uVar19,cVar7 + '*');
      *piVar13 = (*piVar13 - (int)piVar13) - (uint)(0xd7 < bVar10);
      bVar10 = *param_2;
      bVar23 = (byte)pbVar22;
      *param_2 = *param_2 + bVar23;
      out(*(undefined4 *)pbStack_18,(short)param_2);
      bVar11 = ((cVar7 + '*') - (char)*piVar13) - CARRY1(bVar10,bVar23);
      pbVar12 = (byte *)CONCAT31(uVar19,bVar11);
      *param_2 = *param_2 + bVar23;
      uVar21 = (undefined2)((uint)pbVar33 >> 0x10);
      uVar32 = SUB41(pbVar33,0);
      cVar7 = (char)((uint)pbVar33 >> 8) - pbStack_18[0x1f];
      pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(cVar7,uVar32));
      *pbVar12 = *pbVar12 + bVar11;
      bVar8 = *param_2;
      bVar10 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar11;
      pbStack_18 = pbStack_18 + ((4 - *(int *)pbVar12) - (uint)CARRY1(bVar10,bVar11));
      pbVar12 = (byte *)CONCAT31(uVar19,bVar11);
      pbVar22 = (byte *)(CONCAT22((short)((uint)pbVar22 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar22 >> 8) | bVar8,bVar23)) + -1);
      bVar10 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar11;
      bVar10 = (bVar11 - *pbVar12) - CARRY1(bVar10,bVar11);
      *pbVar22 = *pbVar22 + (char)param_2;
      bVar35 = CARRY1(bVar10,*param_2);
      bVar10 = bVar10 + *param_2;
      pbVar12 = (byte *)CONCAT31(uVar19,bVar10);
      if ((POPCOUNT(bVar10) & 1U) == 0) {
        *pbVar12 = *pbVar12 + bVar10;
        cVar29 = (bVar10 + 0x6f) - (0x90 < bVar10);
        pbVar26 = (byte *)CONCAT31(uVar19,cVar29);
        bVar10 = *param_2;
        *param_2 = *param_2 + (char)pbVar22;
        if (SCARRY1(bVar10,(char)pbVar22) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar26 = *pbVar26 + cVar29;
        pcVar17 = (char *)CONCAT31(uVar19,cVar29 + '\x02');
        bVar8 = cVar7 + pbVar33[0x52];
        pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(bVar8,uVar32));
        *pcVar17 = *pcVar17 + cVar29 + '\x02';
        bVar10 = cVar29 + 4;
        pbVar26 = (byte *)CONCAT31(uVar19,bVar10);
        if ((POPCOUNT(bVar10) & 1U) == 0) {
          *pbVar26 = *pbVar26 + bVar10;
          cVar7 = (cVar29 + 's') - (0x90 < bVar10);
          pcVar17 = (char *)CONCAT31(uVar19,cVar7);
          bVar10 = (byte)((uint)pbVar22 >> 8);
          bVar35 = CARRY1(*pbVar33,bVar10);
          *pbVar33 = *pbVar33 + bVar10;
          pbVar12 = pbStack_18;
          if (bVar35) {
            *pcVar17 = *pcVar17 + cVar7;
            pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(bVar8 | unaff_EBP[0x5c],uVar32));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar26;
        pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(bVar8 + pbVar33[0x52],uVar32));
code_r0x00403abf:
        *pbVar26 = *pbVar26 + (char)pbVar26;
        cVar7 = (char)pbVar26 + '\x02';
        pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar7);
        bVar35 = (POPCOUNT(cVar7) & 1U) == 0;
        pbStack_38 = unaff_EBP;
        if (!bVar35) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar35) {
          *pbVar12 = *pbVar12 + (byte)pbVar12;
          bVar10 = (byte)pbVar12 | pbVar12[0x400005e];
          pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar10);
          pbStack_38 = unaff_EBP;
          if ((char)bVar10 < '\x01') goto code_r0x00403b0b;
          *pbVar26 = *pbVar26 + bVar10;
code_r0x00403aaf:
          cVar7 = (char)pbVar26 + '(';
          pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar7);
          *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
          bVar10 = *pbVar33;
          bVar8 = (byte)((uint)pbVar22 >> 8);
          *pbVar33 = *pbVar33 + bVar8;
          pbVar15 = unaff_EBP;
          if (!CARRY1(bVar10,bVar8)) goto code_r0x00403ad8;
          *pbVar26 = *pbVar26 + cVar7;
          pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar33,(char)pbVar22));
          if ((POPCOUNT(*param_2 - cVar7) & 1U) != 0) {
            *pbStack_18 = *pbStack_18 + cVar7;
            pbStack_38 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                   CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x53],(char)pbVar33
                                           ));
      }
      bVar10 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar10;
      cVar7 = (bVar10 + 0x6f) - (0x90 < bVar10);
      pcVar17 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar7);
      bVar10 = *pbVar33;
      cVar29 = (char)((uint)pbVar22 >> 8);
      *pbVar33 = *pbVar33 + cVar29;
      pbStack_38 = unaff_EBP;
      if (*pbVar33 == 0 || SCARRY1(bVar10,cVar29) != (char)*pbVar33 < '\0') goto code_r0x00403b2c;
      *pcVar17 = *pcVar17 + cVar7;
    }
    else {
      pcVar17 = (char *)CONCAT31(uVar19,bVar10 + *param_2);
      pbVar12 = pbStack_18;
      if ((POPCOUNT(bVar10 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_18 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar17) + *(int *)(pbStack_18 + (int)unaff_EDI * 8);
    pbVar26 = unaff_EBP;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 + 0x2d);
code_r0x00403ad8:
    pbStack_38 = pbVar15;
    bVar10 = *pbVar26;
    bVar8 = (byte)pbVar26;
    *pbVar26 = *pbVar26 + bVar8;
    pbStack_3c = (byte *)CONCAT22(pbStack_3c._2_2_,in_ES);
    if (!CARRY1(bVar10,bVar8)) goto code_r0x00403afc;
    *pbVar26 = *pbVar26 + bVar8;
    bVar8 = bVar8 | pbVar26[0x400005d];
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),bVar8);
    pbVar12 = pbStack_18;
    if ((char)bVar8 < '\x01') {
      *pbVar26 = *pbVar26 + bVar8;
      pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar22 >> 8) | *param_2,(char)pbVar22));
      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                 CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[-0x39],(char)pbVar33)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar26 = *pbVar26 + (char)pbVar26;
    cVar7 = (char)pbVar26 + '(';
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar7);
    *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
    bVar10 = *pbVar33;
    bVar8 = (byte)((uint)pbVar22 >> 8);
    *pbVar33 = *pbVar33 + bVar8;
    pbStack_18 = pbVar12;
    if (!CARRY1(bVar10,bVar8)) goto code_r0x00403b0b;
    *pbVar26 = *pbVar26 + cVar7;
  }
  else {
    bVar10 = *param_2;
    *param_2 = *param_2 + (char)pbVar22;
    if (SCARRY1(bVar10,(char)pbVar22) == (char)*param_2 < '\0') {
      pbVar26 = unaff_EBP;
      pbVar15 = (byte *)(pcVar17 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar17 = *pcVar17 + (char)pcVar17;
    pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(char)pcVar17 + '\x02');
    pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                               CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x54],(char)pbVar33));
    pbVar12 = pbStack_18;
code_r0x00403a7d:
    cVar7 = (char)pcVar17;
    *pcVar17 = *pcVar17 + cVar7;
    uVar19 = (undefined3)((uint)pcVar17 >> 8);
    cVar29 = cVar7 + '-';
    pbVar15 = (byte *)CONCAT31(uVar19,cVar29);
    pbVar26 = unaff_EBP;
    pbStack_18 = pbVar12;
    if ((POPCOUNT(cVar29 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar15 = *pbVar15 + cVar29;
    bVar10 = cVar7 + 0x2f;
    if ((POPCOUNT(bVar10) & 1U) != 0) {
      bVar10 = *param_2;
      *param_2 = *param_2 + (byte)pbVar22;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar10,(byte)pbVar22);
      pbVar26 = (byte *)CONCAT31(uVar19,cVar7 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar19,bVar10) = *(char *)CONCAT31(uVar19,bVar10) + bVar10;
    bVar35 = 0x90 < bVar10;
    pcVar17 = (char *)CONCAT31(uVar19,cVar7 + -0x62);
code_r0x00403a8f:
    uVar19 = (undefined3)((uint)pcVar17 >> 8);
    bVar8 = (char)pcVar17 - bVar35;
    pbVar26 = (byte *)CONCAT31(uVar19,bVar8);
    bVar10 = *pbVar33;
    cVar7 = (char)((uint)pbVar22 >> 8);
    *pbVar33 = *pbVar33 + cVar7;
    pbStack_38 = unaff_EBP;
    pbStack_18 = pbVar12;
    if (*pbVar33 != 0 && SCARRY1(bVar10,cVar7) == (char)*pbVar33 < '\0') {
      *pbVar26 = *pbVar26 + bVar8;
      pbStack_18 = (byte *)CONCAT31(uVar19,bVar8 + 0x2d);
      *(byte **)(pbVar12 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar8) + *(int *)(pbVar12 + (int)unaff_EDI * 8);
      bVar35 = CARRY1(*pbVar12,(byte)pbVar12);
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      goto code_r0x00403aa1;
    }
  }
  pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                             CONCAT11((byte)((uint)pbVar22 >> 8) | *pbVar26,(char)pbVar22));
  *pbStack_18 = *pbStack_18 + (char)pbVar26;
code_r0x00403afc:
  pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                             CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x55],(char)pbVar33));
  *pbVar26 = *pbVar26 + (char)pbVar26;
  uVar19 = (undefined3)((uint)pbVar26 >> 8);
  bVar8 = (char)pbVar26 + 0x6f;
  bVar10 = *(byte *)CONCAT31(uVar19,bVar8);
  *param_2 = *param_2 + (char)pbVar22;
  pbVar26 = (byte *)CONCAT31(uVar19,(bVar8 & bVar10) + *pbStack_18);
  *pbVar22 = *pbVar22 - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar26 = *pbVar26 + (byte)pbVar26;
    bVar10 = (byte)pbVar26 | *pbVar33;
    piVar13 = (int *)CONCAT31((int3)((uint)pbVar26 >> 8),bVar10);
    if (bVar10 != 0) {
      pbStack_38 = pbStack_38 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar13 = (char)*piVar13 + bVar10;
      pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar22 >> 8) | *param_2,(char)pbVar22));
      pbStack_3c = pbStack_3c + *piVar13;
      pcVar17 = (char *)((int)piVar13 + *piVar13);
      uVar19 = (undefined3)((uint)pcVar17 >> 8);
      bVar8 = (char)pcVar17 - *pcVar17;
      pbVar12 = (byte *)CONCAT31(uVar19,bVar8);
      bVar10 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar8;
      piVar13 = (int *)CONCAT31(uVar19,bVar8 - CARRY1(bVar10,bVar8));
    }
    *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
    pbStack_18 = pbStack_3c + 4;
    out(*(undefined4 *)pbStack_3c,(short)param_2);
    pbVar26 = (byte *)(((uint)piVar13 >> 8) * 0x100);
    *param_2 = *param_2 + (byte)pbVar22;
    bVar10 = (char)param_2 - *pbVar33;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar10);
    *pbVar33 = *pbVar33;
    *param_2 = *param_2 + (char)((uint)pbVar22 >> 8);
    *pbVar26 = *pbVar26;
    pcVar17 = (char *)(((uint)piVar13 >> 8) * 0x200);
    *pcVar17 = *pcVar17 + (char)pbVar33;
    bVar35 = CARRY1(*pbVar22,bVar10);
    *pbVar22 = *pbVar22 + bVar10;
    pbStack_3c = pbStack_18;
    if (bVar35) break;
    while( true ) {
      *(byte **)pbVar26 = pbVar26 + (uint)bVar35 + *(int *)pbVar26;
      unaff_EDI = unaff_EDI + 4;
      pbVar26[(int)param_2] = pbVar26[(int)param_2] + (char)pbVar33;
      *pbVar26 = *pbVar26 + (char)pbVar26;
      *(byte **)pbStack_3c = pbVar33 + *(int *)pbStack_3c;
      bVar10 = (byte)((uint)pbVar22 >> 8);
      cVar7 = (char)pbVar22;
      pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(bVar10 + *pbVar26,cVar7));
      pbVar26 = pbVar26 + (uint)CARRY1(bVar10,*pbVar26) + *(int *)pbVar26;
      *param_2 = *param_2 + cVar7;
      cVar7 = (char)pbVar33 - pbStack_3c[2];
      pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar7);
      pbStack_18 = pbStack_3c;
      if ((POPCOUNT(cVar7) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar26 = *pbVar26 + (char)pbVar26;
      param_2[0x16060000] = param_2[0x16060000] - (char)pbVar22;
      pbVar33 = (byte *)((uint)pbVar33 | (uint)pbStack_18);
      cVar7 = (char)pbVar26 + '\x02';
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar7);
      bVar35 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403b18:
      bVar10 = (byte)pbVar12;
      uVar19 = (undefined3)((uint)pbVar12 >> 8);
      if (!bVar35) {
        *param_2 = *param_2 + (char)pbVar22;
        pbVar26 = (byte *)CONCAT31(uVar19,bVar10 | *pbStack_18);
code_r0x00403b73:
        pbVar12 = (byte *)(unaff_EDI + *(int *)(pbStack_38 + -0x37));
        *pbVar26 = *pbVar26 + (byte)pbVar26;
        uVar19 = (undefined3)((uint)pbVar26 >> 8);
        bVar10 = (byte)pbVar26 | *param_2;
        pcVar17 = (char *)CONCAT31(uVar19,bVar10);
        uVar36 = CONCAT44(param_2,pcVar17);
        if ((POPCOUNT(bVar10) & 1U) == 0) {
          *pcVar17 = *pcVar17 + bVar10;
          *pbStack_18 = *pbStack_18 + 1;
          return (byte *)CONCAT31(uVar19,bVar10 + 6);
        }
        bVar10 = *pbStack_18;
        *pbStack_18 = *pbStack_18 + 1;
        pcVar4 = (code *)swi(4);
        if (SCARRY1(bVar10,'\x01')) {
          uVar36 = (*pcVar4)();
          pbVar22 = extraout_ECX;
        }
        pbVar26 = (byte *)uVar36;
        *pbVar26 = *pbVar26 + (char)uVar36;
        cVar29 = (char)((ulonglong)uVar36 >> 0x20);
        puVar27 = (uint *)CONCAT22((short)((ulonglong)uVar36 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar36 >> 0x28) | pbVar33[0x2f],cVar29
                                           ));
        *pbVar26 = *pbVar26 + (char)uVar36;
        cVar7 = (char)pbVar22;
        bVar11 = (byte)((uint)pbVar22 >> 8) | *pbVar26;
        pbVar26 = pbVar26 + *(int *)pbVar26;
        bVar10 = *pbVar33;
        *pbVar33 = *pbVar33 + bVar11;
        bVar8 = (byte)pbVar26;
        if (CARRY1(bVar10,bVar11)) {
          *pbVar26 = *pbVar26 + bVar8;
          bVar11 = bVar11 | (byte)*puVar27;
          *pbVar33 = *pbVar33 - cVar29;
          *pbVar26 = *pbVar26 + bVar8;
          uVar19 = (undefined3)((uint)pbVar26 >> 8);
          bVar8 = bVar8 | (byte)*puVar27;
          piVar13 = (int *)CONCAT31(uVar19,bVar8);
          pbStack_38 = pbStack_38 + *piVar13;
          *(byte *)piVar13 = (char)*piVar13 + bVar8;
          cVar29 = (char)pbVar33 - *pbStack_18;
          pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                     CONCAT11((char)((uint)pbVar33 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar33 >> 8),cVar29)
                                                       + 0x5f),cVar29));
          *(byte *)piVar13 = (char)*piVar13 + bVar8;
          bVar10 = bVar8 + 0x2a & (byte)*puVar27;
          pbVar12 = pbVar12 + *(int *)(pbStack_38 + 0x5f);
          *(char *)CONCAT31(uVar19,bVar10) = *(char *)CONCAT31(uVar19,bVar10) + bVar10;
          pbVar26 = (byte *)CONCAT31(uVar19,bVar10 + 0x2a);
          *(byte *)puVar27 = (byte)*puVar27 + 0x28;
          *pbVar26 = *pbVar26 + bVar10 + 0x2a;
        }
        else {
          *pbStack_18 = *pbStack_18 + bVar8;
        }
        pcVar17 = (char *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(bVar11,cVar7));
        *pbStack_38 = *pbStack_38 - bVar11;
        *(byte *)puVar27 = (byte)*puVar27 + cVar7;
        bVar10 = (byte)pbVar26 - 0xb;
        pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),bVar10);
        if (10 < (byte)pbVar26) {
          *pbVar22 = *pbVar22 | bVar10;
          return pbVar22;
        }
        *(byte *)puVar27 = (byte)*puVar27 + cVar7;
        do {
          bVar10 = pbVar33[-0x23];
          bVar11 = (byte)pbVar22;
          *pbVar22 = *pbVar22 + bVar11;
          bVar8 = pbStack_38[-0x22];
          *pbVar22 = *pbVar22 + bVar11;
          uVar19 = (undefined3)((uint)pbVar22 >> 8);
          bVar11 = bVar11 | *pbStack_18;
          pbVar26 = (byte *)CONCAT31(uVar19,bVar11);
          cVar29 = (char)pbVar33 - *pbStack_18;
          pbVar33 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar33 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar33 >> 8) + bVar10 |
                                                              bVar8,(char)pbVar33)) >> 8),cVar29);
          cVar7 = (char)pcVar17;
          pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                     CONCAT11((char)((uint)pcVar17 >> 8) + *pbVar26,cVar7));
          *(byte *)puVar27 = (byte)*puVar27 + cVar7;
          bVar8 = bVar11 - *pbVar26;
          pbVar22 = (byte *)CONCAT31(uVar19,bVar8);
          pbStack_18 = pbStack_18 + (-(uint)(bVar11 < *pbVar26) - *(int *)pbVar22);
          puVar27 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),(char)puVar27 * '\x02');
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          *pbVar12 = *pbVar12 + cVar29;
          bVar10 = *pbVar22;
          *pbVar22 = *pbVar22 + bVar8;
          *puVar27 = (uint)(pbVar22 + (uint)CARRY1(bVar10,bVar8) + *puVar27);
        } while ((POPCOUNT(*puVar27 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar22 = *pbVar22 + (char)pbVar22;
        pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 | pbVar22[(int)pcVar17])
        ;
        bVar35 = false;
        pbVar22 = (byte *)((uint)pbVar22 & 0xffffff00);
        do {
          pbVar12 = pbVar12 + (-(uint)bVar35 - *(int *)pbVar33);
          pcVar16 = (char *)CONCAT31((int3)((uint)pbVar22 >> 8),*pcVar17);
          *pcVar16 = *pcVar16 + *pcVar17;
          pbVar22 = (byte *)CONCAT31((int3)((uint)(pcVar16 +
                                                  (pbStack_18[0x2000001] <
                                                  (byte)((uint)pcVar17 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar16 +
                                            (pbStack_18[0x2000001] < (byte)((uint)pcVar17 >> 8)) +
                                            0xda7d) | (byte)*puVar27) + 0x7d);
          pcVar17 = pcVar17 + -1;
          *(byte *)puVar27 = (byte)*puVar27 + (char)pcVar17;
          while( true ) {
            uVar28 = (undefined3)((uint)puVar27 >> 8);
            cVar7 = (char)puVar27 + *(char *)((int)pbVar12 * 2 + 0xa0000e1);
            puVar27 = (uint *)CONCAT31(uVar28,cVar7);
            bVar35 = CARRY1((byte)pbVar22,(byte)*puVar27);
            uVar19 = (undefined3)((uint)pbVar22 >> 8);
            bVar10 = (byte)pbVar22 + (byte)*puVar27;
            pbVar22 = (byte *)CONCAT31(uVar19,bVar10);
            if ((POPCOUNT(bVar10) & 1U) != 0) break;
            *pbVar22 = *pbVar22 + bVar10;
            cVar29 = (char)pcVar17;
            pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar17 >> 8) | pbVar12[-0x65],cVar29))
            ;
            bVar8 = *pbVar22;
            *pbVar22 = *pbVar22 + bVar10;
            if (CARRY1(bVar8,bVar10)) {
              *pbVar22 = *pbVar22 + bVar10;
              pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar33 >> 8) | pbStack_38[-0x1d],
                                                  (char)pbVar33));
              *pbVar22 = *pbVar22 + bVar10;
              bVar35 = false;
              bVar10 = bVar10 | (byte)*puVar27;
              pcVar16 = (char *)CONCAT31(uVar19,bVar10);
              while( true ) {
                bVar8 = (byte)pcVar16;
                uVar19 = (undefined3)((uint)pcVar16 >> 8);
                if (bVar35 == (char)bVar10 < '\0') break;
                *pcVar16 = *pcVar16 + bVar8;
                bVar8 = bVar8 | (byte)*puVar27;
                puVar18 = (uint *)CONCAT31(uVar19,bVar8);
                *pbVar12 = *pbVar12 << 1 | (char)*pbVar12 < '\0';
                uVar6 = *puVar18;
                *(byte *)puVar18 = (byte)*puVar18 + bVar8;
                pbStack_38 = pbStack_38 + (-(uint)CARRY1((byte)uVar6,bVar8) - *puVar18);
                *puVar18 = *puVar18 << 1 | (uint)((int)*puVar18 < 0);
                while( true ) {
                  uVar6 = *puVar27;
                  *(byte *)puVar27 = (byte)*puVar27 + (byte)pcVar17;
                  cVar7 = (char)puVar18 + 'o' + CARRY1((byte)uVar6,(byte)pcVar17);
                  pcVar16 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar7);
                  pcVar17 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar7) & 1U) != 0) break;
                  *pcVar16 = *pcVar16 + cVar7;
                  bVar10 = bRamfe140212;
                  pcVar17 = (char *)0x0;
                  uVar19 = (undefined3)((uint)(pcVar16 + -0x732b0000) >> 8);
                  bVar8 = in(0);
                  puVar18 = (uint *)CONCAT31(uVar19,bVar8);
                  uVar6 = *puVar27;
                  *(byte *)puVar27 = (byte)*puVar27;
                  if (SCARRY1((byte)uVar6,'\0') != (char)(byte)*puVar27 < '\0') {
                    *(byte *)puVar18 = (byte)*puVar18 + bVar8;
                    bVar8 = bVar8 | (byte)*puVar27;
                    puVar18 = (uint *)CONCAT31(uVar19,bVar8);
                    if ((POPCOUNT(bVar8) & 1U) == 0) {
                      *(byte *)puVar18 = (byte)*puVar18 + bVar8;
                      pcVar17 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar10 | (byte)*puVar18) << 8)
                      ;
                      *(byte *)puVar18 = (byte)*puVar18 + bVar8;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar18 = (byte)*puVar18 + bVar8;
                    puVar18 = (uint *)CONCAT31(uVar19,bVar8 | (byte)*puVar27);
                  }
                }
                *(byte *)puVar27 = (byte)*puVar27;
                bVar35 = SCARRY1((char)puVar27,*pbVar12);
                bVar10 = (char)puVar27 + *pbVar12;
                puVar27 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),bVar10);
              }
              if (bVar35 == (char)bVar10 < '\0') {
                *(byte *)puVar27 = (byte)*puVar27 + (char)pcVar17;
                pbVar22 = (byte *)((uint)pcVar16 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar16 = *pcVar16 + bVar8;
              pbVar22 = (byte *)CONCAT31(uVar19,(bVar8 | (byte)*puVar27) + 0x7d);
              pcVar17 = pcVar17 + -1;
              *(byte *)puVar27 = (byte)*puVar27 + (char)pcVar17;
            }
            else {
              *(byte *)puVar27 = (byte)*puVar27 + cVar29;
              puVar27 = (uint *)CONCAT31(uVar28,cVar7 + *(char *)((int)pbVar12 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar12 = *pbVar12 + bVar10;
      bVar10 = bVar10 + 0x6f & *(byte *)CONCAT31(uVar19,bVar10 + 0x6f);
      *param_2 = *param_2 + (char)pbVar22;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar10;
      pcVar17 = (char *)CONCAT31(uVar19,bVar10 - *unaff_EDI);
code_r0x00403b2c:
      bVar10 = (char)pcVar17 - *pcVar17;
      pbVar26 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar10);
      *pbVar26 = *pbVar26 + bVar10;
      *(byte **)pbVar26 = param_2 + *(int *)pbVar26;
      *pbVar26 = *pbVar26 + bVar10;
      bVar35 = CARRY1(*pbVar26,bVar10);
      *pbVar26 = *pbVar26 + bVar10;
      pbStack_3c = pbStack_18;
    }
  }
  *pbVar26 = *pbVar26;
  pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(byte)pbVar22 | *param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_38 = pbStack_38 + -*puVar18;
  do {
    bVar10 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar10;
    pbVar12 = pbVar12 + -*(int *)(pbStack_38 + -0x1a);
    *(byte *)puVar18 = (byte)*puVar18 + bVar10;
    bVar10 = bVar10 | (byte)*puVar27;
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar10);
    *(byte *)puVar18 = (byte)*puVar18 | bVar10;
    bVar10 = (byte)*puVar18;
    pbStack_38 = (byte *)0x2700001;
    while ((POPCOUNT(bVar10) & 1U) == 0) {
      do {
        *(byte *)puVar18 = (byte)*puVar18 + (byte)puVar18;
        bVar10 = (byte)puVar18 | (byte)*puVar27;
        puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar10);
        if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
        uVar20 = CONCAT21((short)((uint)pcVar17 >> 0x10),(byte)((uint)pcVar17 >> 8) | bRamfe140212);
        while( true ) {
          pcVar17 = (char *)((uint)uVar20 << 8);
          bVar23 = (byte)puVar18;
          *(byte *)puVar18 = (byte)*puVar18 & bVar23;
          bVar11 = *pbVar33;
          bVar9 = (byte)uVar20;
          bVar8 = *pbVar33;
          *pbVar33 = *pbVar33 + bVar9;
          bVar10 = *pbVar33;
          if (!CARRY1(bVar11,bVar9)) break;
          *(byte *)puVar18 = (byte)*puVar18 + bVar23;
          pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar33 >> 8) | bRam026fffe2,
                                              (char)pbVar33));
          *(byte *)puVar18 = (byte)*puVar18 + bVar23;
          bVar23 = bVar23 | (byte)*puVar27;
          puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar23);
          bVar35 = (POPCOUNT(bVar23) & 1U) == 0;
          while( true ) {
            cVar7 = (char)((uint)pbVar33 >> 8);
            uVar21 = (undefined2)((uint)pbVar33 >> 0x10);
            if (!bVar35) {
              *(byte *)puVar27 = (byte)*puVar27;
              pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(cVar7 + pbVar33[-0x1f],(char)pbVar33));
              goto code_r0x00403d52;
            }
            *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
            uVar24 = (undefined2)((uint)pcVar17 >> 0x10);
            bVar8 = (byte)((uint)pcVar17 >> 8) | (byte)*puVar18;
            uVar20 = CONCAT21(uVar24,bVar8);
            *puVar18 = *puVar18 & (uint)puVar18;
            *pbVar33 = *pbVar33 + bVar8;
            uVar19 = (undefined3)((uint)puVar18 >> 8);
            bVar10 = (char)puVar18 - bVar8;
            pcVar17 = (char *)CONCAT31(uVar19,bVar10);
            *pcVar17 = *pcVar17 + bVar10;
            bVar10 = bVar10 | (byte)*puVar27;
            puVar18 = (uint *)CONCAT31(uVar19,bVar10);
            if ((POPCOUNT(bVar10) & 1U) != 0) break;
            *(byte *)puVar18 = (byte)*puVar18 + bVar10;
            pcVar17 = (char *)((uint)CONCAT21(uVar24,bVar8 | (byte)*puVar18) << 8);
            *puVar18 = *puVar18 - (int)puVar18;
            *(byte *)puVar27 = (byte)*puVar27;
            pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(cVar7 + pbVar33[-0x1d],(char)pbVar33));
            do {
              *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
              uVar21 = (undefined2)((uint)puVar27 >> 0x10);
              cVar7 = (char)puVar27;
              bVar10 = (byte)((uint)puVar27 >> 8) | pbVar33[-0x17];
              puVar27 = (uint *)CONCAT22(uVar21,CONCAT11(bVar10,cVar7));
              *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
              pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar33 >> 8) | bRam026fffeb,
                                                  (char)pbVar33));
              do {
                *(byte *)puVar18 = (byte)*puVar18 + (byte)puVar18;
                uVar19 = (undefined3)((uint)puVar18 >> 8);
                bVar11 = (byte)puVar18 | (byte)*puVar27;
                pcVar16 = (char *)CONCAT31(uVar19,bVar11);
                bVar8 = pbVar33[-0x16];
                *pcVar16 = *pcVar16 + bVar11;
                pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                           CONCAT11((char)((uint)pbVar33 >> 8) + bVar8 |
                                                    bRam026fffec,(char)pbVar33));
                *pcVar16 = *pcVar16 + bVar11;
                pbVar22 = (byte *)CONCAT31(uVar19,bVar11 | (byte)*puVar27);
                while( true ) {
                  *pbVar22 = *pbVar22 + (byte)pbVar22;
                  uVar19 = (undefined3)((uint)pbVar22 >> 8);
                  bVar8 = (byte)pbVar22 | (byte)*puVar27;
                  puVar18 = (uint *)CONCAT31(uVar19,bVar8);
                  if ((POPCOUNT(bVar8) & 1U) != 0) break;
                  *(byte *)puVar18 = (byte)*puVar18 + bVar8;
                  bVar11 = pbVar12[-0x14];
                  *(byte *)puVar18 = (byte)*puVar18 + bVar8;
                  bVar8 = bVar8 | (byte)*puVar27;
                  pcVar16 = (char *)CONCAT31(uVar19,bVar8);
                  bVar23 = pbVar33[-0x15];
                  *pcVar16 = *pcVar16 + bVar8;
                  pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),
                                                    (byte)((uint)pcVar17 >> 8) | bVar11 |
                                                    pbVar12[-0x13]) << 8);
                  *pcVar16 = *pcVar16 + bVar8;
                  pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                             CONCAT11((char)((uint)pbVar33 >> 8) + bVar23 |
                                                      bRam026fffef,(char)pbVar33));
                  *pcVar16 = *pcVar16 + bVar8;
                  pbVar22 = (byte *)CONCAT31(uVar19,bVar8 | (byte)*puVar27);
                  do {
                    do {
                      bVar11 = (byte)pbVar22;
                      *pbVar22 = *pbVar22 + bVar11;
                      cVar31 = (char)pbVar33;
                      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar33 >> 8) | *pbVar22,
                                                          cVar31));
                      *pbVar22 = bVar11;
                      *pbVar22 = *pbVar22 + bVar11;
                      cVar29 = (char)((uint)pcVar17 >> 8) + *pbVar22;
                      pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),cVar29) << 8)
                      ;
                      uVar19 = (undefined3)((uint)pbVar22 >> 8);
                      bVar11 = bVar11 & *pbVar22;
                      pbVar22 = (byte *)CONCAT31(uVar19,bVar11);
                      bVar8 = *pbVar33;
                      *pbVar33 = *pbVar33 + cVar29;
                    } while (SCARRY1(bVar8,cVar29) == (char)*pbVar33 < '\0');
                    *pbVar22 = *pbVar22 + bVar11;
                    bVar11 = bVar11 | (byte)*puVar27;
                    pbVar22 = (byte *)CONCAT31(uVar19,bVar11);
                    if ((POPCOUNT(bVar11) & 1U) == 0) {
                      *pbVar22 = *pbVar22 + bVar11;
                      *pbVar22 = *pbVar22 + bVar11;
                      cVar7 = cVar7 - bVar10;
                      pbVar26 = (byte *)CONCAT31((int3)((uint)puVar27 >> 8),cVar7);
                      *pbVar22 = *pbVar22 + bVar11;
                      bRam0312382b = bRam0312382b | *pbVar26;
                      while( true ) {
                        bVar8 = (byte)pbVar22;
                        *pbVar22 = *pbVar22 + bVar8;
                        bRam0312382b = bRam0312382b | (pbVar12 + 0x21b0000)[(int)pbVar22];
                        uVar19 = (undefined3)((uint)pbVar22 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar26 = *pbVar26 + bRam0312382b;
                        pbVar22 = (byte *)CONCAT31(uVar19,bVar8 | *pbStack_18);
                      }
                      *pbVar22 = *pbVar22 + bVar8;
                      bVar8 = bVar8 | *pbStack_18;
                      pcVar17 = (char *)CONCAT31(uVar19,bVar8);
                      out(*(undefined4 *)pbStack_18,(short)pbVar26);
                      *pcVar17 = *pcVar17 + bVar8;
                      uVar24 = CONCAT11(bVar10 | bRam6f0a002b,cVar7);
                      pcVar16 = (char *)CONCAT22(uVar21,uVar24);
                      *pcVar17 = *pcVar17 + bVar8;
                      *pcVar16 = *pcVar16 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_18 + 4),uVar24);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar31 + *pcVar17);
                  } while (SCARRY1(cVar31,*pcVar17) != (char)(cVar31 + *pcVar17) < '\0');
                }
                uVar6 = *puVar27;
                *(byte *)puVar27 = (byte)*puVar27;
              } while (SCARRY1((byte)uVar6,'\0') != (char)(byte)*puVar27 < '\0');
              *(byte *)puVar27 = (byte)*puVar27;
              *pcVar17 = *pcVar17 - (char)pbVar33;
              *(byte *)puVar18 = (byte)*puVar18 + bVar8;
              bVar8 = bVar8 | (byte)*puVar27;
              puVar18 = (uint *)CONCAT31(uVar19,bVar8);
              bVar35 = (POPCOUNT(bVar8) & 1U) == 0;
            } while (bVar35);
          }
        }
      } while (SCARRY1(bVar8,bVar9));
    }
    *pbVar33 = *pbVar33 + (char)((uint)pcVar17 >> 8);
    *pbVar12 = *pbVar12 - (char)pbVar33;
  } while( true );
}


