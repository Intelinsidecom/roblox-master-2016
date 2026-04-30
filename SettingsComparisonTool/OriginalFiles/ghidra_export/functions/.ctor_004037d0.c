/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004037d0
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(undefined4 param_1, byte * param_2)
 * Local Vars  : pbStack_3c, pbStack_38, pbStack_28, pbStack_18, iStack_4, uVar1, iVar2, uVar3, pcVar4, uVar5, uVar6, cVar7, bVar8, bVar9, cVar10, in_EAX, piVar11, iVar12, pbVar13, pcVar14, pcVar15, puVar16, uVar17, uVar18, bVar19, uVar20, pbVar21, extraout_ECX, bVar22, uVar23, uVar24, pbVar25, puVar26, uVar27, cVar28, cVar29, uVar30, unaff_EBX, pbVar31, cVar32, bVar33, unaff_EBP, unaff_ESI, pbVar34, unaff_EDI, in_ES, in_CS, in_DS, bVar35, in_AF, uVar36, param_1, param_2
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
  char cVar10;
  byte *in_EAX;
  undefined3 uVar17;
  int iVar12;
  byte *pbVar13;
  uint3 uVar18;
  char *pcVar14;
  char *pcVar15;
  uint *puVar16;
  byte bVar19;
  undefined2 uVar20;
  undefined2 uVar23;
  byte *pbVar21;
  byte *extraout_ECX;
  undefined2 uVar24;
  byte *pbVar25;
  uint *puVar26;
  undefined3 uVar27;
  char cVar28;
  char cVar29;
  undefined1 uVar30;
  char cVar32;
  byte bVar33;
  undefined4 unaff_EBX;
  byte *pbVar31;
  byte *unaff_EBP;
  int unaff_ESI;
  byte *pbVar34;
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
  int *piVar11;
  byte bVar22;
  
  while( true ) {
                    /* .NET CLR Managed Code */
    uVar23 = (undefined2)((uint)param_1 >> 0x10);
    bVar22 = (char)((uint)param_1 >> 8) + *in_EAX;
    uVar20 = CONCAT11(bVar22,(byte)param_1);
    iVar12 = CONCAT22(uVar23,uVar20);
    *in_EAX = *in_EAX;
    iStack_4 = CONCAT22(iStack_4._2_2_,in_ES);
    uVar17 = (undefined3)((uint)in_EAX >> 8);
    cVar7 = (char)in_EAX - *in_EAX;
    piVar11 = (int *)CONCAT31(uVar17,cVar7);
    pbVar34 = (byte *)(unaff_ESI + *piVar11);
    bVar8 = cVar7 + (char)*piVar11;
    pcVar15 = (char *)CONCAT31(uVar17,bVar8);
    *pcVar15 = *pcVar15 + bVar8;
    *pcVar15 = *pcVar15 + bVar8;
    *pcVar15 = *pcVar15 + bVar8;
    bVar9 = *param_2;
    *param_2 = *param_2 + bVar8;
    uVar27 = (undefined3)((uint)iVar12 >> 8);
    if (CARRY1(bVar9,bVar8)) break;
    uVar24 = SUB42(param_2,0);
    out(*(undefined4 *)pbVar34,uVar24);
    unaff_EBP = (byte *)0x80a0000;
    out(*(undefined4 *)(pbVar34 + 4),uVar24);
    puVar26 = (uint *)(unaff_EDI + (int)param_2);
    uVar3 = (uint)CARRY1(bVar9,bVar8);
    uVar6 = *puVar26;
    uVar1 = *puVar26;
    *puVar26 = (uint)(pcVar15 + uVar1 + uVar3);
    iVar12 = iStack_4 + *(int *)(param_2 + iVar12) +
             (uint)(CARRY4(uVar6,(uint)pcVar15) || CARRY4((uint)(pcVar15 + uVar1),uVar3));
    cVar7 = (char)iVar12 + '\t';
    pbVar34 = (byte *)CONCAT31((int3)((uint)iVar12 >> 8),cVar7);
    unaff_ESI = 0x260a0004;
    out(uRam260a0000,uVar24);
    *pbVar34 = *pbVar34 + cVar7;
    bVar22 = bVar22 | *param_2;
    param_1 = CONCAT22(uVar23,CONCAT11(bVar22 + *pbVar34,6));
    in_EAX = pbVar34 + (uint)CARRY1(bVar22,*pbVar34) + *(int *)pbVar34;
    *param_2 = *param_2 + 6;
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - cRam260a0004);
    in_ES = uVar20;
  }
  *pcVar15 = *pcVar15 + bVar8;
  pbVar31 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56],(char)unaff_EBX
                                     ));
  *pcVar15 = *pcVar15 + bVar8;
  bVar22 = bVar8 + 2;
  *pbVar31 = *pbVar31 - (char)param_2;
  *(char *)CONCAT31(uVar17,bVar22) = *(char *)CONCAT31(uVar17,bVar22) + bVar22;
  bVar19 = (byte)param_1 | *pbVar34;
  pbVar21 = (byte *)CONCAT31(uVar27,bVar19);
  bVar9 = 9 < (bVar8 + 0x74 & 0xf) | in_AF;
  bVar8 = bVar8 + 0x74 + bVar9 * '\x06';
  bVar8 = bVar8 + (0x90 < (bVar8 & 0xf0) | 0x8d < bVar22 | bVar9 * (0xf9 < bVar8)) * '`';
  pbVar25 = (byte *)CONCAT31(uVar17,bVar8);
  bVar9 = *pbVar25;
  *pbVar25 = *pbVar25 + bVar8;
  if (!SCARRY1(bVar9,bVar8)) {
    *pbVar34 = *pbVar34 + bVar8;
    pbVar34 = pbVar34 + *(int *)(param_2 + 0x33);
    *pbVar25 = *pbVar25 | bVar8;
    *pbVar34 = *pbVar34 + bVar8;
    bVar9 = bVar8 + 0x72;
    *(byte *)CONCAT31(uVar17,bVar9) = *(byte *)CONCAT31(uVar17,bVar9) | bVar9;
    *pbVar34 = *pbVar34 + bVar9;
    pbVar21 = (byte *)CONCAT31(uVar27,bVar19 + *pbVar34);
    pcVar15 = (char *)CONCAT31(uVar17,bVar8 - 0x11);
    *pcVar15 = *pcVar15 + (bVar8 - 0x11);
    pbVar25 = (byte *)CONCAT31(uVar17,bVar8 - 0xf);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x52);
    *pbVar25 = *pbVar25 + (bVar8 - 0xf);
  }
code_r0x00403825:
  uVar17 = (undefined3)((uint)pbVar25 >> 8);
  cVar7 = (char)pbVar25 + '\x7f';
  pcVar15 = (char *)CONCAT31(uVar17,cVar7);
  *pcVar15 = *pcVar15 + cVar7;
  iVar12 = CONCAT31(uVar17,(char)pbVar25 + -0x7f) + 0x547d;
  cVar10 = (char)iVar12;
  uVar17 = (undefined3)((uint)iVar12 >> 8);
  cVar7 = cVar10 + '*';
  pcVar15 = (char *)CONCAT31(uVar17,cVar7);
  pbVar25 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar34);
  cVar28 = (char)pbVar31 - *pbVar34;
  uVar20 = (undefined2)((uint)pbVar31 >> 0x10);
  cVar32 = (char)((uint)pbVar31 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar31 >> 8),cVar28) + 0x57);
  *pcVar15 = *pcVar15 + cVar7;
  bVar9 = cVar10 + 0x54U & *pbVar25;
  iVar12 = *(int *)(unaff_EBP + 0x57);
  *(char *)CONCAT31(uVar17,bVar9) = *(char *)CONCAT31(uVar17,bVar9) + bVar9;
  pcVar15 = (char *)CONCAT31(uVar17,bVar9 + 0x2a);
  pbStack_18 = (byte *)CONCAT22(pbStack_18._2_2_,in_DS);
  cVar32 = cVar32 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar32,cVar28)) + 0x58);
  *pcVar15 = *pcVar15 + bVar9 + 0x2a;
  bVar8 = bVar9 + 0x54 & *pbVar25;
  iVar2 = *(int *)(unaff_EBP + 0x58);
  *(char *)CONCAT31(uVar17,bVar8) = *(char *)CONCAT31(uVar17,bVar8) + bVar8;
  pcVar15 = (char *)CONCAT31(uVar17,bVar8 + 0x2a);
  cVar32 = cVar32 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar32,cVar28)) + 0x55);
  *pcVar15 = *pcVar15 + bVar8 + 0x2a;
  pcVar15 = (char *)CONCAT31(uVar17,bVar8 + 0x57);
  pbVar25 = pbVar25 + *(int *)pbStack_18;
  cVar32 = cVar32 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar32,cVar28)) + 0x55);
  *pcVar15 = *pcVar15 + bVar8 + 0x57;
  cVar7 = bVar8 - 0x3a;
  pcVar15 = (char *)CONCAT31(uVar17,cVar7);
  *pcVar15 = *pcVar15 + cVar7;
  bVar9 = *pbVar25;
  cVar29 = (char)pbVar21;
  pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(cVar32 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar32,
                                                  cVar28)) + 0x59),cVar28));
  *pcVar15 = *pcVar15 + cVar7;
  bVar22 = bVar8 - 0x10 & *pbVar25;
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x59) + iVar2 + iVar12;
  *(char *)CONCAT31(uVar17,bVar22) = *(char *)CONCAT31(uVar17,bVar22) + bVar22;
  bVar22 = bVar22 + 0x2a;
  pbVar34 = (byte *)CONCAT31(uVar17,bVar22);
  cVar7 = unaff_EDI[0x17];
  *pbVar34 = *pbVar34 + bVar22;
  bVar8 = *pbVar25;
  pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,in_DS);
  cVar10 = unaff_EDI[0x1a];
  *pbVar34 = *pbVar34 + bVar22;
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar21 >> 8) | bVar9) + cVar7 | bVar8) +
                                      cVar10 | *pbVar25,cVar29));
  *pbVar31 = *pbVar31 + cVar28;
  *(byte *)((int)pbVar34 * 2) = *(byte *)((int)pbVar34 * 2) ^ bVar22;
  bVar9 = *pbVar34;
  *pbVar34 = *pbVar34 + bVar22;
  bVar8 = *pbVar34;
  *pbVar21 = *pbVar21 + (char)pbVar25;
  bVar9 = ((bVar22 - bVar8) - CARRY1(bVar9,bVar22)) + *pbVar25;
  pbVar34 = (byte *)CONCAT31(uVar17,bVar9);
  param_2 = pbStack_28;
  if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x004038f6;
  *pbVar34 = *pbVar34 + bVar9;
  cVar7 = (bVar9 + 0x6f) - (0x90 < bVar9);
  pbVar13 = (byte *)CONCAT31(uVar17,cVar7);
  bVar9 = *pbVar25;
  *pbVar25 = *pbVar25 + cVar29;
  param_2 = pbVar25;
  if (SCARRY1(bVar9,cVar29) == (char)*pbVar25 < '\0') {
    unaff_EBP[0x2b060000] = unaff_EBP[0x2b060000] - cVar7;
    cVar7 = cVar7 + *pbVar25;
    pbVar34 = (byte *)CONCAT31(uVar17,cVar7);
    goto code_r0x0040390c;
  }
  do {
    *pbVar13 = *pbVar13 + (char)pbVar13;
    while( true ) {
      uVar17 = (undefined3)((uint)pbVar13 >> 8);
      cVar7 = (char)pbVar13 + '\x02';
      pbVar34 = (byte *)CONCAT31(uVar17,cVar7);
      if ((POPCOUNT(cVar7) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)pbStack_18;
      cVar7 = (char)pbVar34 + *param_2;
      pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar7);
code_r0x0040390c:
      cVar10 = (char)pbVar34;
      if ((POPCOUNT(cVar7) & 1U) != 0) {
        *pbStack_18 = *pbStack_18 + cVar10;
        goto code_r0x0040395a;
      }
      *pbVar34 = *pbVar34 + cVar10;
      bVar9 = cVar10 + 2;
      pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),bVar9);
code_r0x00403912:
      bVar35 = (POPCOUNT(bVar9) & 1U) == 0;
      if (!bVar35) goto code_r0x00403967;
      *pbVar34 = *pbVar34 + (char)pbVar34;
code_r0x00403916:
      bVar8 = (char)pbVar34 + 0x6f;
      pbVar25 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar34 >> 8),bVar8);
      bVar9 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar8;
      if (*pbVar25 == 0 || SCARRY1(bVar9,bVar8) != (char)*pbVar25 < '\0') goto code_r0x00403979;
      *pbVar25 = *pbVar25 + bVar8;
      pbVar13 = (byte *)CONCAT31((int3)(char)((uint)pbVar34 >> 8),(char)pbVar34 + -100);
      *(byte **)(pbStack_18 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar8) + *(int *)(pbStack_18 + (int)unaff_EDI * 8);
code_r0x00403926:
      *(byte **)pbVar13 = pbStack_28;
      bVar9 = *pbStack_18;
      bVar8 = (byte)pbVar13;
      *pbStack_18 = *pbStack_18 + bVar8;
      if (CARRY1(bVar9,bVar8)) {
        *pbVar13 = *pbVar13 + bVar8;
        uVar17 = (undefined3)((uint)pbVar13 >> 8);
        bVar8 = bVar8 | pbVar13[0x400005b];
        pbVar34 = (byte *)CONCAT31(uVar17,bVar8);
        pbVar25 = pbStack_18;
        if ((char)bVar8 < '\x01') goto code_r0x00403991;
        *pbVar34 = *pbVar34 + bVar8;
        cVar7 = bVar8 + 0x28;
        pbVar34 = (byte *)CONCAT31(uVar17,cVar7);
        *(byte **)pbVar34 = pbVar34 + (uint)(0xd7 < bVar8) + *(int *)pbVar34;
        bVar9 = *pbVar31;
        bVar8 = (byte)((uint)pbVar21 >> 8);
        *pbVar31 = *pbVar31 + bVar8;
        if (CARRY1(bVar9,bVar8)) {
          *pbVar34 = *pbVar34 + cVar7;
          pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar34,(char)pbVar21));
          *pbStack_18 = *pbStack_18 + cVar7;
          pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                     CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x55],
                                              (char)pbVar31));
          *pbVar34 = *pbVar34 + cVar7;
code_r0x00403950:
          uVar17 = (undefined3)((uint)pbVar34 >> 8);
          bVar8 = (char)pbVar34 + 0x6f;
          bVar9 = *(byte *)CONCAT31(uVar17,bVar8);
          *param_2 = *param_2 + (char)pbVar21;
          pbVar34 = (byte *)CONCAT31(uVar17,(bVar8 & bVar9) + *pbStack_18);
          *pbVar21 = *pbVar21 - (char)((uint)param_2 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar34 = *pbVar34 + cVar7;
    cVar7 = (char)pbVar13 + '.' + *param_2;
    pbVar34 = (byte *)CONCAT31(uVar17,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      pbVar25 = param_2 + (int)pbVar34;
      *pbVar25 = *pbVar25 + cVar7;
      bVar9 = *pbVar25;
      goto code_r0x00403912;
    }
    *pbVar34 = *pbVar34 + cVar7;
    bVar9 = cVar7 + 2;
    pbVar34 = (byte *)CONCAT31(uVar17,bVar9);
    if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00403916;
    *pbVar34 = *pbVar34 + bVar9;
    cVar10 = cVar7 + 'q';
    piVar11 = (int *)CONCAT31(uVar17,cVar10);
    *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0x90 < bVar9);
    bVar9 = *pbVar31;
    bVar8 = (byte)((uint)pbVar21 >> 8);
    *pbVar31 = *pbVar31 + bVar8;
    if (!CARRY1(bVar9,bVar8)) {
      out(*(undefined4 *)pbStack_18,(short)param_2);
      bVar9 = (cVar10 - (char)*piVar11) - CARRY1(bVar9,bVar8);
      *param_2 = *param_2 + (char)pbVar21;
      cVar7 = bVar9 - *(byte *)CONCAT31(uVar17,bVar9);
      pbVar34 = pbStack_18 +
                ((4 - *(int *)CONCAT31(uVar17,cVar7)) -
                (uint)(bVar9 < *(byte *)CONCAT31(uVar17,bVar9)));
      pbVar25 = (byte *)CONCAT31(uVar17,cVar7);
      pbStack_18 = (byte *)0;
      goto code_r0x00403825;
    }
    *(char *)piVar11 = (char)*piVar11 + cVar10;
    uVar20 = (undefined2)((uint)pbVar31 >> 0x10);
    bVar9 = (byte)((uint)pbVar31 >> 8) | unaff_EBP[0x56];
    *(char *)piVar11 = (char)*piVar11 + cVar10;
    pcVar15 = (char *)CONCAT31(uVar17,cVar7 + 's');
    pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(bVar9 + *(char *)(CONCAT22(uVar20,CONCAT11(bVar9,(
                                                  char)pbVar31)) + 0x56),(char)pbVar31));
    *pcVar15 = *pcVar15 + cVar7 + 's';
    bVar9 = cVar7 - 0xf;
    *(char *)CONCAT31(uVar17,bVar9) = *(char *)CONCAT31(uVar17,bVar9) + bVar9;
    bVar8 = cVar7 + 0x1e;
    pbVar13 = (byte *)CONCAT31(uVar17,bVar8);
    *(byte **)(pbStack_18 + (int)unaff_EDI * 8) =
         pbVar21 + (uint)(0xd2 < bVar9) + *(int *)(pbStack_18 + (int)unaff_EDI * 8);
    in_ES = *(undefined2 *)pbVar13;
    bVar9 = *pbStack_18;
    *pbStack_18 = *pbStack_18 + bVar8;
    param_2 = pbVar21;
    if (CARRY1(bVar9,bVar8)) {
      *pbVar13 = *pbVar13 + bVar8;
      pbVar34 = (byte *)CONCAT31(uVar17,bVar8 | pbVar13[0x400005a]);
      if ('\0' < (char)(bVar8 | pbVar13[0x400005a])) {
code_r0x004038f6:
        bVar9 = (byte)pbVar34;
        *pbVar34 = *pbVar34 + bVar9;
        uVar17 = (undefined3)((uint)pbVar34 >> 8);
        cVar7 = ((bVar9 + 0x28) - *(char *)CONCAT31(uVar17,bVar9 + 0x28)) - (0xd7 < bVar9);
        pbVar34 = (byte *)CONCAT31(uVar17,cVar7);
        bVar9 = *pbVar31;
        bVar8 = (byte)((uint)pbVar21 >> 8);
        *pbVar31 = *pbVar31 + bVar8;
        if (CARRY1(bVar9,bVar8)) {
          *pbVar34 = *pbVar34 + cVar7;
          pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar34,(char)pbVar21));
          *pbStack_18 = *pbStack_18 + cVar7;
          goto code_r0x00403908;
        }
        pbVar13 = pbVar34 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar34 = *pbVar34 + (char)pbVar34;
  param_2[0x16060000] = param_2[0x16060000] - (char)pbVar21;
  pbVar31 = (byte *)((uint)pbVar31 | (uint)pbStack_18);
  cVar7 = (char)pbVar34 + '\x02';
  pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar7);
  bVar35 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403967:
  if (!bVar35) goto code_r0x004039be;
  *pbVar34 = *pbVar34 + (char)pbVar34;
  uVar17 = (undefined3)((uint)pbVar34 >> 8);
  bVar9 = (char)pbVar34 + 0x6f;
  bVar9 = bVar9 & *(byte *)CONCAT31(uVar17,bVar9);
  pbVar25 = (byte *)CONCAT31(uVar17,bVar9);
  *param_2 = *param_2 + (char)pbVar21;
  param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar9;
code_r0x00403979:
  bVar9 = (char)pbVar25 - *unaff_EDI;
  bVar35 = bVar9 < *pbVar21;
  pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar9 - *pbVar21);
  do {
    cVar7 = (char)pbVar34;
    *pbVar34 = *pbVar34 + cVar7 + bVar35;
    *pbVar34 = *pbVar34 + cVar7;
    *pbVar21 = *pbVar21 + (char)param_2;
    pbVar21[0x101c00aa] = pbVar21[0x101c00aa] + (char)pbVar31;
    *pbVar34 = *pbVar34 + cVar7;
    *(byte **)pbStack_18 = pbVar31 + *(int *)pbStack_18;
    bVar9 = (byte)((uint)pbVar21 >> 8);
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11(bVar9 + *pbVar34,(char)pbVar21));
    pbVar34 = pbVar34 + (uint)CARRY1(bVar9,*pbVar34) + *(int *)pbVar34;
    pbVar25 = pbStack_18;
code_r0x00403991:
    cVar7 = (char)pbVar21;
    *param_2 = *param_2 + cVar7;
    cVar10 = (char)pbVar31 - pbVar25[2];
    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar10);
    pbStack_18 = pbVar25;
    if ((POPCOUNT(cVar10) & 1U) != 0) goto code_r0x0040395a;
    *pbVar34 = *pbVar34 + (byte)pbVar34;
    uVar18 = (uint3)((uint)pbVar34 >> 8);
    bVar9 = (byte)pbVar34 | *pbVar31;
    piVar11 = (int *)CONCAT31(uVar18,bVar9);
    bVar8 = (byte)((uint)pbVar21 >> 8);
    bVar22 = (byte)param_2;
    if (bVar9 == 0) {
      *(char *)piVar11 = (char)*piVar11;
      pbStack_18 = pbVar25 + 4;
      out(*(undefined4 *)pbVar25,(short)param_2);
      pbVar34 = (byte *)((uint)uVar18 << 8);
      *param_2 = *param_2 + cVar7;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar22 - *pbVar31);
      *pbVar31 = *pbVar31;
      *param_2 = *param_2 + bVar8;
      *pbVar34 = *pbVar34;
      *pbVar31 = *pbVar31 + cVar10;
      *pbVar34 = *pbVar34;
      *(byte **)(pbVar31 + -0x3d) = pbStack_18 + *(int *)(pbVar31 + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar11 = (char)*piVar11 + bVar9;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),CONCAT11(bVar8 | *param_2,cVar7));
    pbStack_18 = pbVar25 + *piVar11;
    pcVar15 = (char *)((int)piVar11 + *piVar11);
    bVar8 = (char)pcVar15 - *pcVar15;
    pbVar34 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar8);
    bVar9 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar8;
    pbVar34 = pbVar34 + (-(uint)CARRY1(bVar9,bVar8) - *(int *)pbVar34);
    bVar35 = CARRY1(*pbVar21,bVar22);
    *pbVar21 = *pbVar21 + bVar22;
  } while (!bVar35);
  *pbVar34 = *pbVar34 + (char)pbVar34;
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | *param_2);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar34 = *pbVar34 + (byte)pbVar34;
  uVar17 = (undefined3)((uint)pbVar34 >> 8);
  bVar9 = (byte)pbVar34 | *param_2;
  pcVar15 = (char *)CONCAT31(uVar17,bVar9);
  if ((POPCOUNT(bVar9) & 1U) == 0) goto code_r0x004039c8;
  cVar7 = *pcVar15;
  *pcVar15 = *pcVar15 + bVar9;
  cVar10 = *pcVar15;
  if (!SCARRY1(cVar7,bVar9)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar15 = *pcVar15 + bVar9;
  *pbStack_18 = *pbStack_18 + 1;
  uVar5 = *(undefined6 *)CONCAT31(uVar17,bVar9 + 6);
  pbVar25 = (byte *)uVar5;
  bVar9 = *param_2;
  bVar8 = (byte)pbVar21;
  *param_2 = *param_2 + bVar8;
  if (!CARRY1(bVar9,bVar8)) goto code_r0x00403979;
  *pbVar25 = *pbVar25 + (char)uVar5;
  bVar22 = (byte)((uint)pbVar21 >> 8) | *pbVar25;
  uVar20 = CONCAT11(bVar22,bVar8);
  pbVar25 = pbVar25 + -*(int *)pbVar25;
  bVar9 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar22;
  if (CARRY1(bVar9,bVar22)) {
    cVar7 = (char)pbVar25;
    *pbVar25 = *pbVar25 + cVar7;
    bVar9 = *param_2;
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - pbVar31[-0x3a],(char)param_2));
    *pbVar25 = *pbVar25 + cVar7;
    uVar23 = (undefined2)((uint)pbVar31 >> 0x10);
    bVar33 = (byte)((uint)pbVar31 >> 8) | param_2[0x32];
    pcVar15 = (char *)CONCAT22(uVar23,CONCAT11(bVar33,(char)pbVar31));
    pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,in_CS);
    cVar10 = cVar7 + *pcVar15 + '-';
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar10);
    *pbVar25 = *pbVar25;
    bVar19 = *param_2;
    cVar29 = (char)pbVar31 - *pbStack_18;
    cVar7 = unaff_EDI[0x17];
    *pbVar25 = *pbVar25 + cVar10;
    uVar20 = CONCAT11((bVar22 | bVar9) + cVar7 | *param_2,bVar8 - bVar19);
    pbVar31 = (byte *)CONCAT22(uVar23,CONCAT11(bVar33 + *(char *)(CONCAT31((int3)((uint)pcVar15 >> 8
                                                                                 ),cVar29) + 0x4e),
                                               cVar29));
    *pbVar25 = *pbVar25 + cVar10;
  }
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),uVar20);
  bVar9 = (byte)pbVar25;
  uVar17 = (undefined3)((uint)pbVar25 >> 8);
  pcVar15 = (char *)CONCAT31(uVar17,bVar9 + 0x28);
  *pcVar15 = (*pcVar15 - (bVar9 + 0x28)) - (0xd7 < bVar9);
  *param_2 = *param_2 + (char)uVar20;
  bVar8 = bVar9 + 0x1b;
  pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                             CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x4f],(char)pbVar31));
  *(char *)CONCAT31(uVar17,bVar8) = *(char *)CONCAT31(uVar17,bVar8) + bVar8;
  pcVar14 = (char *)CONCAT31(uVar17,bVar9 + 0x43);
  *pcVar14 = (*pcVar14 - (bVar9 + 0x43)) - (0xd7 < bVar8);
  *param_2 = *param_2 + (char)uVar20;
  pcVar15 = pcVar14 + -0x6b721c;
  pcVar14 = pcVar14 + -0x6b721a;
  *pcVar14 = *pcVar14 + (char)((uint)param_2 >> 8);
  cVar10 = *pcVar14;
code_r0x00403a22:
  if ((POPCOUNT(cVar10) & 1U) == 0) {
code_r0x00403a24:
    cVar7 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar7;
    uVar17 = (undefined3)((uint)pcVar15 >> 8);
    bVar9 = cVar7 + 2;
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      *(char *)CONCAT31(uVar17,bVar9) = *(char *)CONCAT31(uVar17,bVar9) + bVar9;
      piVar11 = (int *)CONCAT31(uVar17,cVar7 + '*');
      *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0xd7 < bVar9);
      bVar9 = *param_2;
      bVar19 = (byte)pbVar21;
      *param_2 = *param_2 + bVar19;
      out(*(undefined4 *)pbStack_18,(short)param_2);
      bVar22 = ((cVar7 + '*') - (char)*piVar11) - CARRY1(bVar9,bVar19);
      pbVar34 = (byte *)CONCAT31(uVar17,bVar22);
      *param_2 = *param_2 + bVar19;
      uVar20 = (undefined2)((uint)pbVar31 >> 0x10);
      uVar30 = SUB41(pbVar31,0);
      cVar7 = (char)((uint)pbVar31 >> 8) - pbStack_18[0x1f];
      pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(cVar7,uVar30));
      *pbVar34 = *pbVar34 + bVar22;
      bVar8 = *param_2;
      bVar9 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar22;
      pbStack_18 = pbStack_18 + ((4 - *(int *)pbVar34) - (uint)CARRY1(bVar9,bVar22));
      pbVar34 = (byte *)CONCAT31(uVar17,bVar22);
      pbVar21 = (byte *)(CONCAT22((short)((uint)pbVar21 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar21 >> 8) | bVar8,bVar19)) + -1);
      bVar9 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar22;
      bVar9 = (bVar22 - *pbVar34) - CARRY1(bVar9,bVar22);
      *pbVar21 = *pbVar21 + (char)param_2;
      bVar35 = CARRY1(bVar9,*param_2);
      bVar9 = bVar9 + *param_2;
      pbVar34 = (byte *)CONCAT31(uVar17,bVar9);
      if ((POPCOUNT(bVar9) & 1U) == 0) {
        *pbVar34 = *pbVar34 + bVar9;
        cVar10 = (bVar9 + 0x6f) - (0x90 < bVar9);
        pbVar25 = (byte *)CONCAT31(uVar17,cVar10);
        bVar9 = *param_2;
        *param_2 = *param_2 + (char)pbVar21;
        if (SCARRY1(bVar9,(char)pbVar21) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar25 = *pbVar25 + cVar10;
        pcVar15 = (char *)CONCAT31(uVar17,cVar10 + '\x02');
        bVar8 = cVar7 + pbVar31[0x52];
        pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(bVar8,uVar30));
        *pcVar15 = *pcVar15 + cVar10 + '\x02';
        bVar9 = cVar10 + 4;
        pbVar25 = (byte *)CONCAT31(uVar17,bVar9);
        if ((POPCOUNT(bVar9) & 1U) == 0) {
          *pbVar25 = *pbVar25 + bVar9;
          cVar7 = (cVar10 + 's') - (0x90 < bVar9);
          pcVar15 = (char *)CONCAT31(uVar17,cVar7);
          bVar9 = (byte)((uint)pbVar21 >> 8);
          bVar35 = CARRY1(*pbVar31,bVar9);
          *pbVar31 = *pbVar31 + bVar9;
          pbVar34 = pbStack_18;
          if (bVar35) {
            *pcVar15 = *pcVar15 + cVar7;
            pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(bVar8 | unaff_EBP[0x5c],uVar30));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar25;
        pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(bVar8 + pbVar31[0x52],uVar30));
code_r0x00403abf:
        *pbVar25 = *pbVar25 + (char)pbVar25;
        cVar7 = (char)pbVar25 + '\x02';
        pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar7);
        bVar35 = (POPCOUNT(cVar7) & 1U) == 0;
        pbStack_38 = unaff_EBP;
        if (!bVar35) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar35) {
          *pbVar34 = *pbVar34 + (byte)pbVar34;
          bVar9 = (byte)pbVar34 | pbVar34[0x400005e];
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),bVar9);
          pbStack_38 = unaff_EBP;
          if ((char)bVar9 < '\x01') goto code_r0x00403b0b;
          *pbVar25 = *pbVar25 + bVar9;
code_r0x00403aaf:
          cVar7 = (char)pbVar25 + '(';
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar7);
          *(byte **)pbVar25 = pbVar25 + *(int *)pbVar25;
          bVar9 = *pbVar31;
          bVar8 = (byte)((uint)pbVar21 >> 8);
          *pbVar31 = *pbVar31 + bVar8;
          pbVar13 = unaff_EBP;
          if (!CARRY1(bVar9,bVar8)) goto code_r0x00403ad8;
          *pbVar25 = *pbVar25 + cVar7;
          pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar31,(char)pbVar21));
          if ((POPCOUNT(*param_2 - cVar7) & 1U) != 0) {
            *pbStack_18 = *pbStack_18 + cVar7;
            pbStack_38 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                   CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x53],(char)pbVar31
                                           ));
      }
      bVar9 = (byte)pbVar34;
      *pbVar34 = *pbVar34 + bVar9;
      cVar7 = (bVar9 + 0x6f) - (0x90 < bVar9);
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar7);
      bVar9 = *pbVar31;
      cVar10 = (char)((uint)pbVar21 >> 8);
      *pbVar31 = *pbVar31 + cVar10;
      pbStack_38 = unaff_EBP;
      if (*pbVar31 == 0 || SCARRY1(bVar9,cVar10) != (char)*pbVar31 < '\0') goto code_r0x00403b2c;
      *pcVar15 = *pcVar15 + cVar7;
    }
    else {
      pcVar15 = (char *)CONCAT31(uVar17,bVar9 + *param_2);
      pbVar34 = pbStack_18;
      if ((POPCOUNT(bVar9 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_18 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar15) + *(int *)(pbStack_18 + (int)unaff_EDI * 8);
    pbVar25 = unaff_EBP;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 + 0x2d);
code_r0x00403ad8:
    pbStack_38 = pbVar13;
    bVar9 = *pbVar25;
    bVar8 = (byte)pbVar25;
    *pbVar25 = *pbVar25 + bVar8;
    pbStack_3c = (byte *)CONCAT22(pbStack_3c._2_2_,in_ES);
    if (!CARRY1(bVar9,bVar8)) goto code_r0x00403afc;
    *pbVar25 = *pbVar25 + bVar8;
    bVar8 = bVar8 | pbVar25[0x400005d];
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar8);
    pbVar34 = pbStack_18;
    if ((char)bVar8 < '\x01') {
      *pbVar25 = *pbVar25 + bVar8;
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar21 >> 8) | *param_2,(char)pbVar21));
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[-0x39],(char)pbVar31)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar25 = *pbVar25 + (char)pbVar25;
    cVar7 = (char)pbVar25 + '(';
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar7);
    *(byte **)pbVar25 = pbVar25 + *(int *)pbVar25;
    bVar9 = *pbVar31;
    bVar8 = (byte)((uint)pbVar21 >> 8);
    *pbVar31 = *pbVar31 + bVar8;
    pbStack_18 = pbVar34;
    if (!CARRY1(bVar9,bVar8)) goto code_r0x00403b0b;
    *pbVar25 = *pbVar25 + cVar7;
  }
  else {
    bVar9 = *param_2;
    *param_2 = *param_2 + (char)pbVar21;
    if (SCARRY1(bVar9,(char)pbVar21) == (char)*param_2 < '\0') {
      pbVar25 = unaff_EBP;
      pbVar13 = (byte *)(pcVar15 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar15 = *pcVar15 + (char)pcVar15;
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x02');
    pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                               CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x54],(char)pbVar31));
    pbVar34 = pbStack_18;
code_r0x00403a7d:
    cVar7 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar7;
    uVar17 = (undefined3)((uint)pcVar15 >> 8);
    cVar10 = cVar7 + '-';
    pbVar13 = (byte *)CONCAT31(uVar17,cVar10);
    pbVar25 = unaff_EBP;
    pbStack_18 = pbVar34;
    if ((POPCOUNT(cVar10 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar13 = *pbVar13 + cVar10;
    bVar9 = cVar7 + 0x2f;
    if ((POPCOUNT(bVar9) & 1U) != 0) {
      bVar9 = *param_2;
      *param_2 = *param_2 + (byte)pbVar21;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar9,(byte)pbVar21);
      pbVar25 = (byte *)CONCAT31(uVar17,cVar7 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar17,bVar9) = *(char *)CONCAT31(uVar17,bVar9) + bVar9;
    bVar35 = 0x90 < bVar9;
    pcVar15 = (char *)CONCAT31(uVar17,cVar7 + -0x62);
code_r0x00403a8f:
    uVar17 = (undefined3)((uint)pcVar15 >> 8);
    bVar8 = (char)pcVar15 - bVar35;
    pbVar25 = (byte *)CONCAT31(uVar17,bVar8);
    bVar9 = *pbVar31;
    cVar7 = (char)((uint)pbVar21 >> 8);
    *pbVar31 = *pbVar31 + cVar7;
    pbStack_38 = unaff_EBP;
    pbStack_18 = pbVar34;
    if (*pbVar31 != 0 && SCARRY1(bVar9,cVar7) == (char)*pbVar31 < '\0') {
      *pbVar25 = *pbVar25 + bVar8;
      pbStack_18 = (byte *)CONCAT31(uVar17,bVar8 + 0x2d);
      *(byte **)(pbVar34 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar8) + *(int *)(pbVar34 + (int)unaff_EDI * 8);
      bVar35 = CARRY1(*pbVar34,(byte)pbVar34);
      *pbVar34 = *pbVar34 + (byte)pbVar34;
      goto code_r0x00403aa1;
    }
  }
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((byte)((uint)pbVar21 >> 8) | *pbVar25,(char)pbVar21));
  *pbStack_18 = *pbStack_18 + (char)pbVar25;
code_r0x00403afc:
  pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                             CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x55],(char)pbVar31));
  *pbVar25 = *pbVar25 + (char)pbVar25;
  uVar17 = (undefined3)((uint)pbVar25 >> 8);
  bVar8 = (char)pbVar25 + 0x6f;
  bVar9 = *(byte *)CONCAT31(uVar17,bVar8);
  *param_2 = *param_2 + (char)pbVar21;
  pbVar25 = (byte *)CONCAT31(uVar17,(bVar8 & bVar9) + *pbStack_18);
  *pbVar21 = *pbVar21 - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar25 = *pbVar25 + (byte)pbVar25;
    bVar9 = (byte)pbVar25 | *pbVar31;
    piVar11 = (int *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar9);
    if (bVar9 != 0) {
      pbStack_38 = pbStack_38 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar11 = (char)*piVar11 + bVar9;
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar21 >> 8) | *param_2,(char)pbVar21));
      pbStack_3c = pbStack_3c + *piVar11;
      pcVar15 = (char *)((int)piVar11 + *piVar11);
      uVar17 = (undefined3)((uint)pcVar15 >> 8);
      bVar8 = (char)pcVar15 - *pcVar15;
      pbVar34 = (byte *)CONCAT31(uVar17,bVar8);
      bVar9 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar8;
      piVar11 = (int *)CONCAT31(uVar17,bVar8 - CARRY1(bVar9,bVar8));
    }
    *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
    pbStack_18 = pbStack_3c + 4;
    out(*(undefined4 *)pbStack_3c,(short)param_2);
    pbVar25 = (byte *)(((uint)piVar11 >> 8) * 0x100);
    *param_2 = *param_2 + (byte)pbVar21;
    bVar9 = (char)param_2 - *pbVar31;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar9);
    *pbVar31 = *pbVar31;
    *param_2 = *param_2 + (char)((uint)pbVar21 >> 8);
    *pbVar25 = *pbVar25;
    pcVar15 = (char *)(((uint)piVar11 >> 8) * 0x200);
    *pcVar15 = *pcVar15 + (char)pbVar31;
    bVar35 = CARRY1(*pbVar21,bVar9);
    *pbVar21 = *pbVar21 + bVar9;
    pbStack_3c = pbStack_18;
    if (bVar35) break;
    while( true ) {
      *(byte **)pbVar25 = pbVar25 + (uint)bVar35 + *(int *)pbVar25;
      unaff_EDI = unaff_EDI + 4;
      pbVar25[(int)param_2] = pbVar25[(int)param_2] + (char)pbVar31;
      *pbVar25 = *pbVar25 + (char)pbVar25;
      *(byte **)pbStack_3c = pbVar31 + *(int *)pbStack_3c;
      bVar9 = (byte)((uint)pbVar21 >> 8);
      cVar7 = (char)pbVar21;
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),CONCAT11(bVar9 + *pbVar25,cVar7));
      pbVar25 = pbVar25 + (uint)CARRY1(bVar9,*pbVar25) + *(int *)pbVar25;
      *param_2 = *param_2 + cVar7;
      cVar7 = (char)pbVar31 - pbStack_3c[2];
      pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar7);
      pbStack_18 = pbStack_3c;
      if ((POPCOUNT(cVar7) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar25 = *pbVar25 + (char)pbVar25;
      param_2[0x16060000] = param_2[0x16060000] - (char)pbVar21;
      pbVar31 = (byte *)((uint)pbVar31 | (uint)pbStack_18);
      cVar7 = (char)pbVar25 + '\x02';
      pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar7);
      bVar35 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403b18:
      bVar9 = (byte)pbVar34;
      uVar17 = (undefined3)((uint)pbVar34 >> 8);
      if (!bVar35) {
        *param_2 = *param_2 + (char)pbVar21;
        pbVar25 = (byte *)CONCAT31(uVar17,bVar9 | *pbStack_18);
code_r0x00403b73:
        pbVar34 = (byte *)(unaff_EDI + *(int *)(pbStack_38 + -0x37));
        *pbVar25 = *pbVar25 + (byte)pbVar25;
        uVar17 = (undefined3)((uint)pbVar25 >> 8);
        bVar9 = (byte)pbVar25 | *param_2;
        pcVar15 = (char *)CONCAT31(uVar17,bVar9);
        uVar36 = CONCAT44(param_2,pcVar15);
        if ((POPCOUNT(bVar9) & 1U) == 0) {
          *pcVar15 = *pcVar15 + bVar9;
          *pbStack_18 = *pbStack_18 + 1;
          return (byte *)CONCAT31(uVar17,bVar9 + 6);
        }
        bVar9 = *pbStack_18;
        *pbStack_18 = *pbStack_18 + 1;
        pcVar4 = (code *)swi(4);
        if (SCARRY1(bVar9,'\x01')) {
          uVar36 = (*pcVar4)();
          pbVar21 = extraout_ECX;
        }
        pbVar25 = (byte *)uVar36;
        *pbVar25 = *pbVar25 + (char)uVar36;
        cVar10 = (char)((ulonglong)uVar36 >> 0x20);
        puVar26 = (uint *)CONCAT22((short)((ulonglong)uVar36 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar36 >> 0x28) | pbVar31[0x2f],cVar10
                                           ));
        *pbVar25 = *pbVar25 + (char)uVar36;
        cVar7 = (char)pbVar21;
        bVar22 = (byte)((uint)pbVar21 >> 8) | *pbVar25;
        pbVar25 = pbVar25 + *(int *)pbVar25;
        bVar9 = *pbVar31;
        *pbVar31 = *pbVar31 + bVar22;
        bVar8 = (byte)pbVar25;
        if (CARRY1(bVar9,bVar22)) {
          *pbVar25 = *pbVar25 + bVar8;
          bVar22 = bVar22 | (byte)*puVar26;
          *pbVar31 = *pbVar31 - cVar10;
          *pbVar25 = *pbVar25 + bVar8;
          uVar17 = (undefined3)((uint)pbVar25 >> 8);
          bVar8 = bVar8 | (byte)*puVar26;
          piVar11 = (int *)CONCAT31(uVar17,bVar8);
          pbStack_38 = pbStack_38 + *piVar11;
          *(byte *)piVar11 = (char)*piVar11 + bVar8;
          cVar10 = (char)pbVar31 - *pbStack_18;
          pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                     CONCAT11((char)((uint)pbVar31 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar31 >> 8),cVar10)
                                                       + 0x5f),cVar10));
          *(byte *)piVar11 = (char)*piVar11 + bVar8;
          bVar9 = bVar8 + 0x2a & (byte)*puVar26;
          pbVar34 = pbVar34 + *(int *)(pbStack_38 + 0x5f);
          *(char *)CONCAT31(uVar17,bVar9) = *(char *)CONCAT31(uVar17,bVar9) + bVar9;
          pbVar25 = (byte *)CONCAT31(uVar17,bVar9 + 0x2a);
          *(byte *)puVar26 = (byte)*puVar26 + 0x28;
          *pbVar25 = *pbVar25 + bVar9 + 0x2a;
        }
        else {
          *pbStack_18 = *pbStack_18 + bVar8;
        }
        pcVar15 = (char *)CONCAT22((short)((uint)pbVar21 >> 0x10),CONCAT11(bVar22,cVar7));
        *pbStack_38 = *pbStack_38 - bVar22;
        *(byte *)puVar26 = (byte)*puVar26 + cVar7;
        bVar9 = (byte)pbVar25 - 0xb;
        pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar9);
        if (10 < (byte)pbVar25) {
          *pbVar21 = *pbVar21 | bVar9;
          return pbVar21;
        }
        *(byte *)puVar26 = (byte)*puVar26 + cVar7;
        do {
          bVar9 = pbVar31[-0x23];
          bVar22 = (byte)pbVar21;
          *pbVar21 = *pbVar21 + bVar22;
          bVar8 = pbStack_38[-0x22];
          *pbVar21 = *pbVar21 + bVar22;
          uVar17 = (undefined3)((uint)pbVar21 >> 8);
          bVar22 = bVar22 | *pbStack_18;
          pbVar25 = (byte *)CONCAT31(uVar17,bVar22);
          cVar10 = (char)pbVar31 - *pbStack_18;
          pbVar31 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar31 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar31 >> 8) + bVar9 |
                                                              bVar8,(char)pbVar31)) >> 8),cVar10);
          cVar7 = (char)pcVar15;
          pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                     CONCAT11((char)((uint)pcVar15 >> 8) + *pbVar25,cVar7));
          *(byte *)puVar26 = (byte)*puVar26 + cVar7;
          bVar8 = bVar22 - *pbVar25;
          pbVar21 = (byte *)CONCAT31(uVar17,bVar8);
          pbStack_18 = pbStack_18 + (-(uint)(bVar22 < *pbVar25) - *(int *)pbVar21);
          puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),(char)puVar26 * '\x02');
          *(byte **)pbVar21 = pbVar21 + *(int *)pbVar21;
          *pbVar34 = *pbVar34 + cVar10;
          bVar9 = *pbVar21;
          *pbVar21 = *pbVar21 + bVar8;
          *puVar26 = (uint)(pbVar21 + (uint)CARRY1(bVar9,bVar8) + *puVar26);
        } while ((POPCOUNT(*puVar26 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar21 = *pbVar21 + (char)pbVar21;
        pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | pbVar21[(int)pcVar15])
        ;
        bVar35 = false;
        pbVar21 = (byte *)((uint)pbVar21 & 0xffffff00);
        do {
          pbVar34 = pbVar34 + (-(uint)bVar35 - *(int *)pbVar31);
          pcVar14 = (char *)CONCAT31((int3)((uint)pbVar21 >> 8),*pcVar15);
          *pcVar14 = *pcVar14 + *pcVar15;
          pbVar21 = (byte *)CONCAT31((int3)((uint)(pcVar14 +
                                                  (pbStack_18[0x2000001] <
                                                  (byte)((uint)pcVar15 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar14 +
                                            (pbStack_18[0x2000001] < (byte)((uint)pcVar15 >> 8)) +
                                            0xda7d) | (byte)*puVar26) + 0x7d);
          pcVar15 = pcVar15 + -1;
          *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar15;
          while( true ) {
            uVar27 = (undefined3)((uint)puVar26 >> 8);
            cVar7 = (char)puVar26 + *(char *)((int)pbVar34 * 2 + 0xa0000e1);
            puVar26 = (uint *)CONCAT31(uVar27,cVar7);
            bVar35 = CARRY1((byte)pbVar21,(byte)*puVar26);
            uVar17 = (undefined3)((uint)pbVar21 >> 8);
            bVar9 = (byte)pbVar21 + (byte)*puVar26;
            pbVar21 = (byte *)CONCAT31(uVar17,bVar9);
            if ((POPCOUNT(bVar9) & 1U) != 0) break;
            *pbVar21 = *pbVar21 + bVar9;
            cVar10 = (char)pcVar15;
            pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar15 >> 8) | pbVar34[-0x65],cVar10))
            ;
            bVar8 = *pbVar21;
            *pbVar21 = *pbVar21 + bVar9;
            if (CARRY1(bVar8,bVar9)) {
              *pbVar21 = *pbVar21 + bVar9;
              pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar31 >> 8) | pbStack_38[-0x1d],
                                                  (char)pbVar31));
              *pbVar21 = *pbVar21 + bVar9;
              bVar35 = false;
              bVar9 = bVar9 | (byte)*puVar26;
              pcVar14 = (char *)CONCAT31(uVar17,bVar9);
              while( true ) {
                bVar8 = (byte)pcVar14;
                uVar17 = (undefined3)((uint)pcVar14 >> 8);
                if (bVar35 == (char)bVar9 < '\0') break;
                *pcVar14 = *pcVar14 + bVar8;
                bVar8 = bVar8 | (byte)*puVar26;
                puVar16 = (uint *)CONCAT31(uVar17,bVar8);
                *pbVar34 = *pbVar34 << 1 | (char)*pbVar34 < '\0';
                uVar6 = *puVar16;
                *(byte *)puVar16 = (byte)*puVar16 + bVar8;
                pbStack_38 = pbStack_38 + (-(uint)CARRY1((byte)uVar6,bVar8) - *puVar16);
                *puVar16 = *puVar16 << 1 | (uint)((int)*puVar16 < 0);
                while( true ) {
                  uVar6 = *puVar26;
                  *(byte *)puVar26 = (byte)*puVar26 + (byte)pcVar15;
                  cVar7 = (char)puVar16 + 'o' + CARRY1((byte)uVar6,(byte)pcVar15);
                  pcVar14 = (char *)CONCAT31((int3)((uint)puVar16 >> 8),cVar7);
                  pcVar15 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar7) & 1U) != 0) break;
                  *pcVar14 = *pcVar14 + cVar7;
                  bVar9 = bRamfe140212;
                  pcVar15 = (char *)0x0;
                  uVar17 = (undefined3)((uint)(pcVar14 + -0x732b0000) >> 8);
                  bVar8 = in(0);
                  puVar16 = (uint *)CONCAT31(uVar17,bVar8);
                  uVar6 = *puVar26;
                  *(byte *)puVar26 = (byte)*puVar26;
                  if (SCARRY1((byte)uVar6,'\0') != (char)(byte)*puVar26 < '\0') {
                    *(byte *)puVar16 = (byte)*puVar16 + bVar8;
                    bVar8 = bVar8 | (byte)*puVar26;
                    puVar16 = (uint *)CONCAT31(uVar17,bVar8);
                    if ((POPCOUNT(bVar8) & 1U) == 0) {
                      *(byte *)puVar16 = (byte)*puVar16 + bVar8;
                      pcVar15 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar9 | (byte)*puVar16) << 8);
                      *(byte *)puVar16 = (byte)*puVar16 + bVar8;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar16 = (byte)*puVar16 + bVar8;
                    puVar16 = (uint *)CONCAT31(uVar17,bVar8 | (byte)*puVar26);
                  }
                }
                *(byte *)puVar26 = (byte)*puVar26;
                bVar35 = SCARRY1((char)puVar26,*pbVar34);
                bVar9 = (char)puVar26 + *pbVar34;
                puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),bVar9);
              }
              if (bVar35 == (char)bVar9 < '\0') {
                *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar15;
                pbVar21 = (byte *)((uint)pcVar14 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar14 = *pcVar14 + bVar8;
              pbVar21 = (byte *)CONCAT31(uVar17,(bVar8 | (byte)*puVar26) + 0x7d);
              pcVar15 = pcVar15 + -1;
              *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar15;
            }
            else {
              *(byte *)puVar26 = (byte)*puVar26 + cVar10;
              puVar26 = (uint *)CONCAT31(uVar27,cVar7 + *(char *)((int)pbVar34 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar34 = *pbVar34 + bVar9;
      bVar9 = bVar9 + 0x6f & *(byte *)CONCAT31(uVar17,bVar9 + 0x6f);
      *param_2 = *param_2 + (char)pbVar21;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar9;
      pcVar15 = (char *)CONCAT31(uVar17,bVar9 - *unaff_EDI);
code_r0x00403b2c:
      bVar9 = (char)pcVar15 - *pcVar15;
      pbVar25 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar9);
      *pbVar25 = *pbVar25 + bVar9;
      *(byte **)pbVar25 = param_2 + *(int *)pbVar25;
      *pbVar25 = *pbVar25 + bVar9;
      bVar35 = CARRY1(*pbVar25,bVar9);
      *pbVar25 = *pbVar25 + bVar9;
      pbStack_3c = pbStack_18;
    }
  }
  *pbVar25 = *pbVar25;
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | *param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_38 = pbStack_38 + -*puVar16;
  do {
    bVar9 = (byte)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + bVar9;
    pbVar34 = pbVar34 + -*(int *)(pbStack_38 + -0x1a);
    *(byte *)puVar16 = (byte)*puVar16 + bVar9;
    bVar9 = bVar9 | (byte)*puVar26;
    puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar9);
    *(byte *)puVar16 = (byte)*puVar16 | bVar9;
    bVar9 = (byte)*puVar16;
    pbStack_38 = (byte *)0x2700001;
    while ((POPCOUNT(bVar9) & 1U) == 0) {
      do {
        *(byte *)puVar16 = (byte)*puVar16 + (byte)puVar16;
        bVar9 = (byte)puVar16 | (byte)*puVar26;
        puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar9);
        if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
        uVar18 = CONCAT21((short)((uint)pcVar15 >> 0x10),(byte)((uint)pcVar15 >> 8) | bRamfe140212);
        while( true ) {
          pcVar15 = (char *)((uint)uVar18 << 8);
          bVar19 = (byte)puVar16;
          *(byte *)puVar16 = (byte)*puVar16 & bVar19;
          bVar22 = *pbVar31;
          bVar33 = (byte)uVar18;
          bVar8 = *pbVar31;
          *pbVar31 = *pbVar31 + bVar33;
          bVar9 = *pbVar31;
          if (!CARRY1(bVar22,bVar33)) break;
          *(byte *)puVar16 = (byte)*puVar16 + bVar19;
          pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar31 >> 8) | bRam026fffe2,
                                              (char)pbVar31));
          *(byte *)puVar16 = (byte)*puVar16 + bVar19;
          bVar19 = bVar19 | (byte)*puVar26;
          puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar19);
          bVar35 = (POPCOUNT(bVar19) & 1U) == 0;
          while( true ) {
            cVar7 = (char)((uint)pbVar31 >> 8);
            uVar20 = (undefined2)((uint)pbVar31 >> 0x10);
            if (!bVar35) {
              *(byte *)puVar26 = (byte)*puVar26;
              pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(cVar7 + pbVar31[-0x1f],(char)pbVar31));
              goto code_r0x00403d52;
            }
            *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
            uVar23 = (undefined2)((uint)pcVar15 >> 0x10);
            bVar8 = (byte)((uint)pcVar15 >> 8) | (byte)*puVar16;
            uVar18 = CONCAT21(uVar23,bVar8);
            *puVar16 = *puVar16 & (uint)puVar16;
            *pbVar31 = *pbVar31 + bVar8;
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            bVar9 = (char)puVar16 - bVar8;
            pcVar15 = (char *)CONCAT31(uVar17,bVar9);
            *pcVar15 = *pcVar15 + bVar9;
            bVar9 = bVar9 | (byte)*puVar26;
            puVar16 = (uint *)CONCAT31(uVar17,bVar9);
            if ((POPCOUNT(bVar9) & 1U) != 0) break;
            *(byte *)puVar16 = (byte)*puVar16 + bVar9;
            pcVar15 = (char *)((uint)CONCAT21(uVar23,bVar8 | (byte)*puVar16) << 8);
            *puVar16 = *puVar16 - (int)puVar16;
            *(byte *)puVar26 = (byte)*puVar26;
            pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(cVar7 + pbVar31[-0x1d],(char)pbVar31));
            do {
              *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
              uVar20 = (undefined2)((uint)puVar26 >> 0x10);
              cVar7 = (char)puVar26;
              bVar9 = (byte)((uint)puVar26 >> 8) | pbVar31[-0x17];
              puVar26 = (uint *)CONCAT22(uVar20,CONCAT11(bVar9,cVar7));
              *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
              pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar31 >> 8) | bRam026fffeb,
                                                  (char)pbVar31));
              do {
                *(byte *)puVar16 = (byte)*puVar16 + (byte)puVar16;
                uVar17 = (undefined3)((uint)puVar16 >> 8);
                bVar22 = (byte)puVar16 | (byte)*puVar26;
                pcVar14 = (char *)CONCAT31(uVar17,bVar22);
                bVar8 = pbVar31[-0x16];
                *pcVar14 = *pcVar14 + bVar22;
                pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                           CONCAT11((char)((uint)pbVar31 >> 8) + bVar8 |
                                                    bRam026fffec,(char)pbVar31));
                *pcVar14 = *pcVar14 + bVar22;
                pbVar21 = (byte *)CONCAT31(uVar17,bVar22 | (byte)*puVar26);
                while( true ) {
                  *pbVar21 = *pbVar21 + (byte)pbVar21;
                  uVar17 = (undefined3)((uint)pbVar21 >> 8);
                  bVar8 = (byte)pbVar21 | (byte)*puVar26;
                  puVar16 = (uint *)CONCAT31(uVar17,bVar8);
                  if ((POPCOUNT(bVar8) & 1U) != 0) break;
                  *(byte *)puVar16 = (byte)*puVar16 + bVar8;
                  bVar22 = pbVar34[-0x14];
                  *(byte *)puVar16 = (byte)*puVar16 + bVar8;
                  bVar8 = bVar8 | (byte)*puVar26;
                  pcVar14 = (char *)CONCAT31(uVar17,bVar8);
                  bVar19 = pbVar31[-0x15];
                  *pcVar14 = *pcVar14 + bVar8;
                  pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),
                                                    (byte)((uint)pcVar15 >> 8) | bVar22 |
                                                    pbVar34[-0x13]) << 8);
                  *pcVar14 = *pcVar14 + bVar8;
                  pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                             CONCAT11((char)((uint)pbVar31 >> 8) + bVar19 |
                                                      bRam026fffef,(char)pbVar31));
                  *pcVar14 = *pcVar14 + bVar8;
                  pbVar21 = (byte *)CONCAT31(uVar17,bVar8 | (byte)*puVar26);
                  do {
                    do {
                      bVar22 = (byte)pbVar21;
                      *pbVar21 = *pbVar21 + bVar22;
                      cVar29 = (char)pbVar31;
                      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar31 >> 8) | *pbVar21,
                                                          cVar29));
                      *pbVar21 = bVar22;
                      *pbVar21 = *pbVar21 + bVar22;
                      cVar10 = (char)((uint)pcVar15 >> 8) + *pbVar21;
                      pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),cVar10) << 8)
                      ;
                      uVar17 = (undefined3)((uint)pbVar21 >> 8);
                      bVar22 = bVar22 & *pbVar21;
                      pbVar21 = (byte *)CONCAT31(uVar17,bVar22);
                      bVar8 = *pbVar31;
                      *pbVar31 = *pbVar31 + cVar10;
                    } while (SCARRY1(bVar8,cVar10) == (char)*pbVar31 < '\0');
                    *pbVar21 = *pbVar21 + bVar22;
                    bVar22 = bVar22 | (byte)*puVar26;
                    pbVar21 = (byte *)CONCAT31(uVar17,bVar22);
                    if ((POPCOUNT(bVar22) & 1U) == 0) {
                      *pbVar21 = *pbVar21 + bVar22;
                      *pbVar21 = *pbVar21 + bVar22;
                      cVar7 = cVar7 - bVar9;
                      pbVar25 = (byte *)CONCAT31((int3)((uint)puVar26 >> 8),cVar7);
                      *pbVar21 = *pbVar21 + bVar22;
                      bRam0312382b = bRam0312382b | *pbVar25;
                      while( true ) {
                        bVar8 = (byte)pbVar21;
                        *pbVar21 = *pbVar21 + bVar8;
                        bRam0312382b = bRam0312382b | (pbVar34 + 0x21b0000)[(int)pbVar21];
                        uVar17 = (undefined3)((uint)pbVar21 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar25 = *pbVar25 + bRam0312382b;
                        pbVar21 = (byte *)CONCAT31(uVar17,bVar8 | *pbStack_18);
                      }
                      *pbVar21 = *pbVar21 + bVar8;
                      bVar8 = bVar8 | *pbStack_18;
                      pcVar15 = (char *)CONCAT31(uVar17,bVar8);
                      out(*(undefined4 *)pbStack_18,(short)pbVar25);
                      *pcVar15 = *pcVar15 + bVar8;
                      uVar23 = CONCAT11(bVar9 | bRam6f0a002b,cVar7);
                      pcVar14 = (char *)CONCAT22(uVar20,uVar23);
                      *pcVar15 = *pcVar15 + bVar8;
                      *pcVar14 = *pcVar14 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_18 + 4),uVar23);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar29 + *pcVar15);
                  } while (SCARRY1(cVar29,*pcVar15) != (char)(cVar29 + *pcVar15) < '\0');
                }
                uVar6 = *puVar26;
                *(byte *)puVar26 = (byte)*puVar26;
              } while (SCARRY1((byte)uVar6,'\0') != (char)(byte)*puVar26 < '\0');
              *(byte *)puVar26 = (byte)*puVar26;
              *pcVar15 = *pcVar15 - (char)pbVar31;
              *(byte *)puVar16 = (byte)*puVar16 + bVar8;
              bVar8 = bVar8 | (byte)*puVar26;
              puVar16 = (uint *)CONCAT31(uVar17,bVar8);
              bVar35 = (POPCOUNT(bVar8) & 1U) == 0;
            } while (bVar35);
          }
        }
      } while (SCARRY1(bVar8,bVar33));
    }
    *pbVar31 = *pbVar31 + (char)((uint)pcVar15 >> 8);
    *pbVar34 = *pbVar34 - (char)pbVar31;
  } while( true );
}


