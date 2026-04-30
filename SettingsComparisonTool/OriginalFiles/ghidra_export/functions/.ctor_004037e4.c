/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004037e4
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(undefined4 serverInterface, undefined4 settingsTable)
 * Local Vars  : pbStack_2c, pbStack_28, pbStack_18, pbStack_8, iVar1, pcVar2, uVar3, uVar4, bVar5, bVar6, bVar7, cVar8, cVar9, in_EAX, iVar10, piVar11, pbVar12, pbVar13, pcVar14, pcVar15, pbVar16, puVar17, uVar18, uVar19, bVar20, uVar21, pbVar22, extraout_ECX, uVar23, uVar24, pbVar25, puVar26, cVar27, cVar28, uVar29, unaff_EBX, pbVar30, cVar31, bVar32, unaff_EBP, unaff_ESI, serverInterface, unaff_EDI, in_ES, settingsTable, in_CS, in_DS, bVar33, in_AF, uVar34
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall _ctor(undefined4 serverInterface,undefined4 settingsTable)

{
  int iVar1;
  code *pcVar2;
  undefined6 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  char *in_EAX;
  undefined3 uVar18;
  int iVar10;
  byte *pbVar12;
  byte *pbVar13;
  uint3 uVar19;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  uint *puVar17;
  byte bVar20;
  undefined2 uVar21;
  undefined3 uVar23;
  byte *pbVar22;
  byte *extraout_ECX;
  undefined2 uVar24;
  byte *pbVar25;
  uint *puVar26;
  char cVar27;
  char cVar28;
  undefined1 uVar29;
  char cVar31;
  byte bVar32;
  int unaff_EBX;
  byte *pbVar30;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_DS;
  bool bVar33;
  byte in_AF;
  undefined8 uVar34;
  byte *pbStack_2c;
  byte *pbStack_28;
  byte *pbStack_18;
  byte *pbStack_8;
  int *piVar11;
  
                    /* .NET CLR Managed Code */
  pbVar16 = (byte *)CONCAT22((short)((uint)settingsTable >> 0x10),
                             CONCAT11((char)((uint)settingsTable >> 8) +
                                      *(char *)(unaff_EBX + -0x41),(char)settingsTable));
  cVar8 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar8;
  pbVar30 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56],(char)unaff_EBX
                                     ));
  *in_EAX = *in_EAX + cVar8;
  uVar18 = (undefined3)((uint)in_EAX >> 8);
  bVar5 = cVar8 + 2;
  *pbVar30 = *pbVar30 - (char)settingsTable;
  *(char *)CONCAT31(uVar18,bVar5) = *(char *)CONCAT31(uVar18,bVar5) + bVar5;
  uVar23 = (undefined3)((uint)serverInterface >> 8);
  bVar20 = (byte)serverInterface | *unaff_ESI;
  pbVar22 = (byte *)CONCAT31(uVar23,bVar20);
  bVar7 = 9 < (cVar8 + 0x74U & 0xf) | in_AF;
  bVar6 = cVar8 + 0x74U + bVar7 * '\x06';
  bVar6 = bVar6 + (0x90 < (bVar6 & 0xf0) | 0x8d < bVar5 | bVar7 * (0xf9 < bVar6)) * '`';
  pbVar13 = (byte *)CONCAT31(uVar18,bVar6);
  bVar7 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar6;
  if (!SCARRY1(bVar7,bVar6)) {
    *unaff_ESI = *unaff_ESI + bVar6;
    unaff_ESI = unaff_ESI + *(int *)(pbVar16 + 0x33);
    *pbVar13 = *pbVar13 | bVar6;
    *unaff_ESI = *unaff_ESI + bVar6;
    bVar7 = bVar6 + 0x72;
    *(byte *)CONCAT31(uVar18,bVar7) = *(byte *)CONCAT31(uVar18,bVar7) | bVar7;
    *unaff_ESI = *unaff_ESI + bVar7;
    pbVar22 = (byte *)CONCAT31(uVar23,bVar20 + *unaff_ESI);
    pcVar15 = (char *)CONCAT31(uVar18,bVar6 - 0x11);
    *pcVar15 = *pcVar15 + (bVar6 - 0x11);
    pbVar13 = (byte *)CONCAT31(uVar18,bVar6 - 0xf);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x52);
    *pbVar13 = *pbVar13 + (bVar6 - 0xf);
    pbStack_8 = pbVar22;
  }
code_r0x00403825:
  uVar18 = (undefined3)((uint)pbVar13 >> 8);
  cVar8 = (char)pbVar13 + '\x7f';
  pcVar15 = (char *)CONCAT31(uVar18,cVar8);
  *pcVar15 = *pcVar15 + cVar8;
  iVar10 = CONCAT31(uVar18,(char)pbVar13 + -0x7f) + 0x547d;
  cVar9 = (char)iVar10;
  uVar18 = (undefined3)((uint)iVar10 >> 8);
  cVar8 = cVar9 + '*';
  pcVar15 = (char *)CONCAT31(uVar18,cVar8);
  pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | *unaff_ESI);
  cVar27 = (char)pbVar30 - *unaff_ESI;
  uVar21 = (undefined2)((uint)pbVar30 >> 0x10);
  cVar31 = (char)((uint)pbVar30 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar30 >> 8),cVar27) + 0x57);
  *pcVar15 = *pcVar15 + cVar8;
  bVar7 = cVar9 + 0x54U & *pbVar25;
  iVar10 = *(int *)(unaff_EBP + 0x57);
  *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
  pcVar15 = (char *)CONCAT31(uVar18,bVar7 + 0x2a);
  pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_DS);
  cVar31 = cVar31 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar31,cVar27)) + 0x58);
  *pcVar15 = *pcVar15 + bVar7 + 0x2a;
  bVar5 = bVar7 + 0x54 & *pbVar25;
  iVar1 = *(int *)(unaff_EBP + 0x58);
  *(char *)CONCAT31(uVar18,bVar5) = *(char *)CONCAT31(uVar18,bVar5) + bVar5;
  pcVar15 = (char *)CONCAT31(uVar18,bVar5 + 0x2a);
  cVar31 = cVar31 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar31,cVar27)) + 0x55);
  *pcVar15 = *pcVar15 + bVar5 + 0x2a;
  pcVar15 = (char *)CONCAT31(uVar18,bVar5 + 0x57);
  pbVar25 = pbVar25 + *(int *)pbStack_8;
  cVar31 = cVar31 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar31,cVar27)) + 0x55);
  *pcVar15 = *pcVar15 + bVar5 + 0x57;
  cVar8 = bVar5 - 0x3a;
  pcVar15 = (char *)CONCAT31(uVar18,cVar8);
  *pcVar15 = *pcVar15 + cVar8;
  bVar7 = *pbVar25;
  cVar28 = (char)pbVar22;
  pbVar30 = (byte *)CONCAT22(uVar21,CONCAT11(cVar31 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar31,
                                                  cVar27)) + 0x59),cVar27));
  *pcVar15 = *pcVar15 + cVar8;
  bVar6 = bVar5 - 0x10 & *pbVar25;
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x59) + iVar1 + iVar10;
  *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
  bVar6 = bVar6 + 0x2a;
  pbVar16 = (byte *)CONCAT31(uVar18,bVar6);
  cVar8 = unaff_EDI[0x17];
  *pbVar16 = *pbVar16 + bVar6;
  bVar5 = *pbVar25;
  pbStack_18 = (byte *)CONCAT22(pbStack_18._2_2_,in_DS);
  cVar9 = unaff_EDI[0x1a];
  *pbVar16 = *pbVar16 + bVar6;
  pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar22 >> 8) | bVar7) + cVar8 | bVar5) + cVar9
                                      | *pbVar25,cVar28));
  *pbVar30 = *pbVar30 + cVar27;
  *(byte *)((int)pbVar16 * 2) = *(byte *)((int)pbVar16 * 2) ^ bVar6;
  bVar7 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar6;
  bVar5 = *pbVar16;
  *pbVar22 = *pbVar22 + (char)pbVar25;
  bVar7 = ((bVar6 - bVar5) - CARRY1(bVar7,bVar6)) + *pbVar25;
  pbVar13 = (byte *)CONCAT31(uVar18,bVar7);
  pbVar16 = pbStack_18;
  if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x004038f6;
  *pbVar13 = *pbVar13 + bVar7;
  cVar8 = (bVar7 + 0x6f) - (0x90 < bVar7);
  pbVar12 = (byte *)CONCAT31(uVar18,cVar8);
  bVar7 = *pbVar25;
  *pbVar25 = *pbVar25 + cVar28;
  pbVar16 = pbVar25;
  if (SCARRY1(bVar7,cVar28) == (char)*pbVar25 < '\0') {
    unaff_EBP[0x2b060000] = unaff_EBP[0x2b060000] - cVar8;
    cVar8 = cVar8 + *pbVar25;
    pbVar13 = (byte *)CONCAT31(uVar18,cVar8);
    goto code_r0x0040390c;
  }
  do {
    *pbVar12 = *pbVar12 + (char)pbVar12;
    while( true ) {
      uVar18 = (undefined3)((uint)pbVar12 >> 8);
      cVar8 = (char)pbVar12 + '\x02';
      pbVar13 = (byte *)CONCAT31(uVar18,cVar8);
      if ((POPCOUNT(cVar8) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)pbStack_8;
      cVar8 = (char)pbVar13 + *pbVar16;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar8);
code_r0x0040390c:
      cVar9 = (char)pbVar13;
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        *pbStack_8 = *pbStack_8 + cVar9;
        goto code_r0x0040395a;
      }
      *pbVar13 = *pbVar13 + cVar9;
      bVar7 = cVar9 + 2;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
code_r0x00403912:
      bVar33 = (POPCOUNT(bVar7) & 1U) == 0;
      if (!bVar33) goto code_r0x00403967;
      *pbVar13 = *pbVar13 + (char)pbVar13;
code_r0x00403916:
      bVar5 = (char)pbVar13 + 0x6f;
      pbVar25 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar13 >> 8),bVar5);
      bVar7 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar5;
      if (*pbVar25 == 0 || SCARRY1(bVar7,bVar5) != (char)*pbVar25 < '\0') goto code_r0x00403979;
      *pbVar25 = *pbVar25 + bVar5;
      pbVar12 = (byte *)CONCAT31((int3)(char)((uint)pbVar13 >> 8),(char)pbVar13 + -100);
      *(byte **)(pbStack_8 + (int)unaff_EDI * 8) =
           pbVar16 + (uint)(0xd2 < bVar5) + *(int *)(pbStack_8 + (int)unaff_EDI * 8);
code_r0x00403926:
      *(byte **)pbVar12 = pbStack_18;
      bVar7 = *pbStack_8;
      bVar5 = (byte)pbVar12;
      *pbStack_8 = *pbStack_8 + bVar5;
      if (CARRY1(bVar7,bVar5)) {
        *pbVar12 = *pbVar12 + bVar5;
        uVar18 = (undefined3)((uint)pbVar12 >> 8);
        bVar5 = bVar5 | pbVar12[0x400005b];
        pbVar13 = (byte *)CONCAT31(uVar18,bVar5);
        pbVar25 = pbStack_8;
        if ((char)bVar5 < '\x01') goto code_r0x00403991;
        *pbVar13 = *pbVar13 + bVar5;
        cVar8 = bVar5 + 0x28;
        pbVar13 = (byte *)CONCAT31(uVar18,cVar8);
        *(byte **)pbVar13 = pbVar13 + (uint)(0xd7 < bVar5) + *(int *)pbVar13;
        bVar7 = *pbVar30;
        bVar5 = (byte)((uint)pbVar22 >> 8);
        *pbVar30 = *pbVar30 + bVar5;
        if (CARRY1(bVar7,bVar5)) {
          *pbVar13 = *pbVar13 + cVar8;
          pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                     CONCAT11(bVar5 | *pbVar13,(char)pbVar22));
          *pbStack_8 = *pbStack_8 + cVar8;
          pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                     CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x55],
                                              (char)pbVar30));
          *pbVar13 = *pbVar13 + cVar8;
code_r0x00403950:
          uVar18 = (undefined3)((uint)pbVar13 >> 8);
          bVar5 = (char)pbVar13 + 0x6f;
          bVar7 = *(byte *)CONCAT31(uVar18,bVar5);
          *pbVar16 = *pbVar16 + (char)pbVar22;
          pbVar13 = (byte *)CONCAT31(uVar18,(bVar5 & bVar7) + *pbStack_8);
          *pbVar22 = *pbVar22 - (char)((uint)pbVar16 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar13 = *pbVar13 + cVar8;
    cVar8 = (char)pbVar12 + '.' + *pbVar16;
    pbVar13 = (byte *)CONCAT31(uVar18,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pbVar25 = pbVar16 + (int)pbVar13;
      *pbVar25 = *pbVar25 + cVar8;
      bVar7 = *pbVar25;
      goto code_r0x00403912;
    }
    *pbVar13 = *pbVar13 + cVar8;
    bVar7 = cVar8 + 2;
    pbVar13 = (byte *)CONCAT31(uVar18,bVar7);
    if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403916;
    *pbVar13 = *pbVar13 + bVar7;
    cVar9 = cVar8 + 'q';
    piVar11 = (int *)CONCAT31(uVar18,cVar9);
    *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0x90 < bVar7);
    bVar7 = *pbVar30;
    bVar5 = (byte)((uint)pbVar22 >> 8);
    *pbVar30 = *pbVar30 + bVar5;
    if (!CARRY1(bVar7,bVar5)) {
      out(*(undefined4 *)pbStack_8,(short)pbVar16);
      bVar7 = (cVar9 - (char)*piVar11) - CARRY1(bVar7,bVar5);
      *pbVar16 = *pbVar16 + (char)pbVar22;
      cVar8 = bVar7 - *(byte *)CONCAT31(uVar18,bVar7);
      unaff_ESI = pbStack_8 +
                  ((4 - *(int *)CONCAT31(uVar18,cVar8)) -
                  (uint)(bVar7 < *(byte *)CONCAT31(uVar18,bVar7)));
      pbVar13 = (byte *)CONCAT31(uVar18,cVar8);
      pbStack_8 = (byte *)0x0;
      goto code_r0x00403825;
    }
    *(char *)piVar11 = (char)*piVar11 + cVar9;
    uVar21 = (undefined2)((uint)pbVar30 >> 0x10);
    bVar7 = (byte)((uint)pbVar30 >> 8) | unaff_EBP[0x56];
    *(char *)piVar11 = (char)*piVar11 + cVar9;
    pcVar15 = (char *)CONCAT31(uVar18,cVar8 + 's');
    pbVar30 = (byte *)CONCAT22(uVar21,CONCAT11(bVar7 + *(char *)(CONCAT22(uVar21,CONCAT11(bVar7,(
                                                  char)pbVar30)) + 0x56),(char)pbVar30));
    *pcVar15 = *pcVar15 + cVar8 + 's';
    bVar7 = cVar8 - 0xf;
    *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
    bVar5 = cVar8 + 0x1e;
    pbVar12 = (byte *)CONCAT31(uVar18,bVar5);
    *(byte **)(pbStack_8 + (int)unaff_EDI * 8) =
         pbVar22 + (uint)(0xd2 < bVar7) + *(int *)(pbStack_8 + (int)unaff_EDI * 8);
    in_ES = *(undefined2 *)pbVar12;
    bVar7 = *pbStack_8;
    *pbStack_8 = *pbStack_8 + bVar5;
    pbVar16 = pbVar22;
    if (CARRY1(bVar7,bVar5)) {
      *pbVar12 = *pbVar12 + bVar5;
      pbVar13 = (byte *)CONCAT31(uVar18,bVar5 | pbVar12[0x400005a]);
      if ('\0' < (char)(bVar5 | pbVar12[0x400005a])) {
code_r0x004038f6:
        bVar7 = (byte)pbVar13;
        *pbVar13 = *pbVar13 + bVar7;
        uVar18 = (undefined3)((uint)pbVar13 >> 8);
        cVar8 = ((bVar7 + 0x28) - *(char *)CONCAT31(uVar18,bVar7 + 0x28)) - (0xd7 < bVar7);
        pbVar13 = (byte *)CONCAT31(uVar18,cVar8);
        bVar7 = *pbVar30;
        bVar5 = (byte)((uint)pbVar22 >> 8);
        *pbVar30 = *pbVar30 + bVar5;
        if (CARRY1(bVar7,bVar5)) {
          *pbVar13 = *pbVar13 + cVar8;
          pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                     CONCAT11(bVar5 | *pbVar13,(char)pbVar22));
          *pbStack_8 = *pbStack_8 + cVar8;
          goto code_r0x00403908;
        }
        pbVar12 = pbVar13 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar13 = *pbVar13 + (char)pbVar13;
  pbVar16[0x16060000] = pbVar16[0x16060000] - (char)pbVar22;
  pbVar30 = (byte *)((uint)pbVar30 | (uint)pbStack_8);
  cVar8 = (char)pbVar13 + '\x02';
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar8);
  bVar33 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403967:
  if (!bVar33) goto code_r0x004039be;
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar18 = (undefined3)((uint)pbVar13 >> 8);
  bVar7 = (char)pbVar13 + 0x6f;
  bVar7 = bVar7 & *(byte *)CONCAT31(uVar18,bVar7);
  pbVar25 = (byte *)CONCAT31(uVar18,bVar7);
  *pbVar16 = *pbVar16 + (char)pbVar22;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar7;
code_r0x00403979:
  bVar7 = (char)pbVar25 - *unaff_EDI;
  bVar33 = bVar7 < *pbVar22;
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar7 - *pbVar22);
  do {
    cVar8 = (char)pbVar13;
    *pbVar13 = *pbVar13 + cVar8 + bVar33;
    *pbVar13 = *pbVar13 + cVar8;
    *pbVar22 = *pbVar22 + (char)pbVar16;
    pbVar22[0x101c00aa] = pbVar22[0x101c00aa] + (char)pbVar30;
    *pbVar13 = *pbVar13 + cVar8;
    *(byte **)pbStack_8 = pbVar30 + *(int *)pbStack_8;
    bVar7 = (byte)((uint)pbVar22 >> 8);
    pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                               CONCAT11(bVar7 + *pbVar13,(char)pbVar22));
    pbVar13 = pbVar13 + (uint)CARRY1(bVar7,*pbVar13) + *(int *)pbVar13;
    pbVar25 = pbStack_8;
code_r0x00403991:
    cVar8 = (char)pbVar22;
    *pbVar16 = *pbVar16 + cVar8;
    cVar9 = (char)pbVar30 - pbVar25[2];
    pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar9);
    pbStack_8 = pbVar25;
    if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040395a;
    *pbVar13 = *pbVar13 + (byte)pbVar13;
    uVar19 = (uint3)((uint)pbVar13 >> 8);
    bVar7 = (byte)pbVar13 | *pbVar30;
    piVar11 = (int *)CONCAT31(uVar19,bVar7);
    bVar5 = (byte)((uint)pbVar22 >> 8);
    bVar6 = (byte)pbVar16;
    if (bVar7 == 0) {
      *(char *)piVar11 = (char)*piVar11;
      pbStack_8 = pbVar25 + 4;
      out(*(undefined4 *)pbVar25,(short)pbVar16);
      pbVar13 = (byte *)((uint)uVar19 << 8);
      *pbVar16 = *pbVar16 + cVar8;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar6 - *pbVar30);
      *pbVar30 = *pbVar30;
      *pbVar16 = *pbVar16 + bVar5;
      *pbVar13 = *pbVar13;
      *pbVar30 = *pbVar30 + cVar9;
      *pbVar13 = *pbVar13;
      *(byte **)(pbVar30 + -0x3d) = pbStack_8 + *(int *)(pbVar30 + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar11 = (char)*piVar11 + bVar7;
    pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(bVar5 | *pbVar16,cVar8));
    pbStack_8 = pbVar25 + *piVar11;
    pcVar15 = (char *)((int)piVar11 + *piVar11);
    bVar5 = (char)pcVar15 - *pcVar15;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar5);
    bVar7 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar5;
    pbVar13 = pbVar13 + (-(uint)CARRY1(bVar7,bVar5) - *(int *)pbVar13);
    bVar33 = CARRY1(*pbVar22,bVar6);
    *pbVar22 = *pbVar22 + bVar6;
  } while (!bVar33);
  *pbVar13 = *pbVar13 + (char)pbVar13;
  pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(byte)pbVar22 | *pbVar16);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar13 = *pbVar13 + (byte)pbVar13;
  uVar18 = (undefined3)((uint)pbVar13 >> 8);
  bVar7 = (byte)pbVar13 | *pbVar16;
  pcVar15 = (char *)CONCAT31(uVar18,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) goto code_r0x004039c8;
  cVar8 = *pcVar15;
  *pcVar15 = *pcVar15 + bVar7;
  cVar9 = *pcVar15;
  if (!SCARRY1(cVar8,bVar7)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar15 = *pcVar15 + bVar7;
  *pbStack_8 = *pbStack_8 + 1;
  uVar3 = *(undefined6 *)CONCAT31(uVar18,bVar7 + 6);
  pbVar25 = (byte *)uVar3;
  bVar7 = *pbVar16;
  bVar5 = (byte)pbVar22;
  *pbVar16 = *pbVar16 + bVar5;
  if (!CARRY1(bVar7,bVar5)) goto code_r0x00403979;
  *pbVar25 = *pbVar25 + (char)uVar3;
  bVar6 = (byte)((uint)pbVar22 >> 8) | *pbVar25;
  uVar21 = CONCAT11(bVar6,bVar5);
  pbVar25 = pbVar25 + -*(int *)pbVar25;
  bVar7 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar6;
  if (CARRY1(bVar7,bVar6)) {
    cVar8 = (char)pbVar25;
    *pbVar25 = *pbVar25 + cVar8;
    bVar7 = *pbVar16;
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11((char)((uint)pbVar16 >> 8) - pbVar30[-0x3a],(char)pbVar16));
    *pbVar25 = *pbVar25 + cVar8;
    uVar24 = (undefined2)((uint)pbVar30 >> 0x10);
    bVar32 = (byte)((uint)pbVar30 >> 8) | pbVar16[0x32];
    pcVar15 = (char *)CONCAT22(uVar24,CONCAT11(bVar32,(char)pbVar30));
    pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,in_CS);
    cVar9 = cVar8 + *pcVar15 + '-';
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar9);
    *pbVar25 = *pbVar25;
    bVar20 = *pbVar16;
    cVar28 = (char)pbVar30 - *pbStack_8;
    cVar8 = unaff_EDI[0x17];
    *pbVar25 = *pbVar25 + cVar9;
    uVar21 = CONCAT11((bVar6 | bVar7) + cVar8 | *pbVar16,bVar5 - bVar20);
    pbVar30 = (byte *)CONCAT22(uVar24,CONCAT11(bVar32 + *(char *)(CONCAT31((int3)((uint)pcVar15 >> 8
                                                                                 ),cVar28) + 0x4e),
                                               cVar28));
    *pbVar25 = *pbVar25 + cVar9;
  }
  pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),uVar21);
  bVar7 = (byte)pbVar25;
  uVar18 = (undefined3)((uint)pbVar25 >> 8);
  pcVar15 = (char *)CONCAT31(uVar18,bVar7 + 0x28);
  *pcVar15 = (*pcVar15 - (bVar7 + 0x28)) - (0xd7 < bVar7);
  *pbVar16 = *pbVar16 + (char)uVar21;
  bVar5 = bVar7 + 0x1b;
  pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                             CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x4f],(char)pbVar30));
  *(char *)CONCAT31(uVar18,bVar5) = *(char *)CONCAT31(uVar18,bVar5) + bVar5;
  pcVar14 = (char *)CONCAT31(uVar18,bVar7 + 0x43);
  *pcVar14 = (*pcVar14 - (bVar7 + 0x43)) - (0xd7 < bVar5);
  *pbVar16 = *pbVar16 + (char)uVar21;
  pcVar15 = pcVar14 + -0x6b721c;
  pcVar14 = pcVar14 + -0x6b721a;
  *pcVar14 = *pcVar14 + (char)((uint)pbVar16 >> 8);
  cVar9 = *pcVar14;
code_r0x00403a22:
  if ((POPCOUNT(cVar9) & 1U) == 0) {
code_r0x00403a24:
    cVar8 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar8;
    uVar18 = (undefined3)((uint)pcVar15 >> 8);
    bVar7 = cVar8 + 2;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
      piVar11 = (int *)CONCAT31(uVar18,cVar8 + '*');
      *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0xd7 < bVar7);
      bVar7 = *pbVar16;
      bVar20 = (byte)pbVar22;
      *pbVar16 = *pbVar16 + bVar20;
      out(*(undefined4 *)pbStack_8,(short)pbVar16);
      bVar6 = ((cVar8 + '*') - (char)*piVar11) - CARRY1(bVar7,bVar20);
      pbVar13 = (byte *)CONCAT31(uVar18,bVar6);
      *pbVar16 = *pbVar16 + bVar20;
      uVar21 = (undefined2)((uint)pbVar30 >> 0x10);
      uVar29 = SUB41(pbVar30,0);
      cVar8 = (char)((uint)pbVar30 >> 8) - pbStack_8[0x1f];
      pbVar30 = (byte *)CONCAT22(uVar21,CONCAT11(cVar8,uVar29));
      *pbVar13 = *pbVar13 + bVar6;
      bVar5 = *pbVar16;
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      pbStack_8 = pbStack_8 + ((4 - *(int *)pbVar13) - (uint)CARRY1(bVar7,bVar6));
      pbVar13 = (byte *)CONCAT31(uVar18,bVar6);
      pbVar22 = (byte *)(CONCAT22((short)((uint)pbVar22 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar22 >> 8) | bVar5,bVar20)) + -1);
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      bVar7 = (bVar6 - *pbVar13) - CARRY1(bVar7,bVar6);
      *pbVar22 = *pbVar22 + (char)pbVar16;
      bVar33 = CARRY1(bVar7,*pbVar16);
      bVar7 = bVar7 + *pbVar16;
      pbVar13 = (byte *)CONCAT31(uVar18,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar13 = *pbVar13 + bVar7;
        cVar9 = (bVar7 + 0x6f) - (0x90 < bVar7);
        pbVar25 = (byte *)CONCAT31(uVar18,cVar9);
        bVar7 = *pbVar16;
        *pbVar16 = *pbVar16 + (char)pbVar22;
        if (SCARRY1(bVar7,(char)pbVar22) == (char)*pbVar16 < '\0') goto code_r0x00403aaf;
        *pbVar25 = *pbVar25 + cVar9;
        pcVar15 = (char *)CONCAT31(uVar18,cVar9 + '\x02');
        bVar5 = cVar8 + pbVar30[0x52];
        pbVar30 = (byte *)CONCAT22(uVar21,CONCAT11(bVar5,uVar29));
        *pcVar15 = *pcVar15 + cVar9 + '\x02';
        bVar7 = cVar9 + 4;
        pbVar25 = (byte *)CONCAT31(uVar18,bVar7);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pbVar25 = *pbVar25 + bVar7;
          cVar8 = (cVar9 + 's') - (0x90 < bVar7);
          pcVar15 = (char *)CONCAT31(uVar18,cVar8);
          bVar7 = (byte)((uint)pbVar22 >> 8);
          bVar33 = CARRY1(*pbVar30,bVar7);
          *pbVar30 = *pbVar30 + bVar7;
          pbVar13 = pbStack_8;
          if (bVar33) {
            *pcVar15 = *pcVar15 + cVar8;
            pbVar30 = (byte *)CONCAT22(uVar21,CONCAT11(bVar5 | unaff_EBP[0x5c],uVar29));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar25;
        pbVar30 = (byte *)CONCAT22(uVar21,CONCAT11(bVar5 + pbVar30[0x52],uVar29));
code_r0x00403abf:
        *pbVar25 = *pbVar25 + (char)pbVar25;
        cVar8 = (char)pbVar25 + '\x02';
        pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
        bVar33 = (POPCOUNT(cVar8) & 1U) == 0;
        pbStack_28 = unaff_EBP;
        if (!bVar33) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar33) {
          *pbVar13 = *pbVar13 + (byte)pbVar13;
          bVar7 = (byte)pbVar13 | pbVar13[0x400005e];
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
          pbStack_28 = unaff_EBP;
          if ((char)bVar7 < '\x01') goto code_r0x00403b0b;
          *pbVar25 = *pbVar25 + bVar7;
code_r0x00403aaf:
          cVar8 = (char)pbVar25 + '(';
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
          *(byte **)pbVar25 = pbVar25 + *(int *)pbVar25;
          bVar7 = *pbVar30;
          bVar5 = (byte)((uint)pbVar22 >> 8);
          *pbVar30 = *pbVar30 + bVar5;
          pbVar12 = unaff_EBP;
          if (!CARRY1(bVar7,bVar5)) goto code_r0x00403ad8;
          *pbVar25 = *pbVar25 + cVar8;
          pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                     CONCAT11(bVar5 | *pbVar30,(char)pbVar22));
          if ((POPCOUNT(*pbVar16 - cVar8) & 1U) != 0) {
            *pbStack_8 = *pbStack_8 + cVar8;
            pbStack_28 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                   CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x53],(char)pbVar30
                                           ));
      }
      bVar7 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar7;
      cVar8 = (bVar7 + 0x6f) - (0x90 < bVar7);
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar8);
      bVar7 = *pbVar30;
      cVar9 = (char)((uint)pbVar22 >> 8);
      *pbVar30 = *pbVar30 + cVar9;
      pbStack_28 = unaff_EBP;
      if (*pbVar30 == 0 || SCARRY1(bVar7,cVar9) != (char)*pbVar30 < '\0') goto code_r0x00403b2c;
      *pcVar15 = *pcVar15 + cVar8;
    }
    else {
      pcVar15 = (char *)CONCAT31(uVar18,bVar7 + *pbVar16);
      pbVar13 = pbStack_8;
      if ((POPCOUNT(bVar7 + *pbVar16) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_8 + (int)unaff_EDI * 8) =
         pbVar16 + (uint)(0xd2 < (byte)pcVar15) + *(int *)(pbStack_8 + (int)unaff_EDI * 8);
    pbVar25 = unaff_EBP;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 + 0x2d);
code_r0x00403ad8:
    pbStack_28 = pbVar12;
    bVar7 = *pbVar25;
    bVar5 = (byte)pbVar25;
    *pbVar25 = *pbVar25 + bVar5;
    pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
    if (!CARRY1(bVar7,bVar5)) goto code_r0x00403afc;
    *pbVar25 = *pbVar25 + bVar5;
    bVar5 = bVar5 | pbVar25[0x400005d];
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar5);
    pbVar13 = pbStack_8;
    if ((char)bVar5 < '\x01') {
      *pbVar25 = *pbVar25 + bVar5;
      pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar22 >> 8) | *pbVar16,(char)pbVar22));
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[-0x39],(char)pbVar30)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar25 = *pbVar25 + (char)pbVar25;
    cVar8 = (char)pbVar25 + '(';
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
    *(byte **)pbVar25 = pbVar25 + *(int *)pbVar25;
    bVar7 = *pbVar30;
    bVar5 = (byte)((uint)pbVar22 >> 8);
    *pbVar30 = *pbVar30 + bVar5;
    pbStack_8 = pbVar13;
    if (!CARRY1(bVar7,bVar5)) goto code_r0x00403b0b;
    *pbVar25 = *pbVar25 + cVar8;
  }
  else {
    bVar7 = *pbVar16;
    *pbVar16 = *pbVar16 + (char)pbVar22;
    if (SCARRY1(bVar7,(char)pbVar22) == (char)*pbVar16 < '\0') {
      pbVar25 = unaff_EBP;
      pbVar12 = (byte *)(pcVar15 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar15 = *pcVar15 + (char)pcVar15;
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x02');
    pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                               CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x54],(char)pbVar30));
    pbVar13 = pbStack_8;
code_r0x00403a7d:
    cVar8 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar8;
    uVar18 = (undefined3)((uint)pcVar15 >> 8);
    cVar9 = cVar8 + '-';
    pbVar12 = (byte *)CONCAT31(uVar18,cVar9);
    pbVar25 = unaff_EBP;
    pbStack_8 = pbVar13;
    if ((POPCOUNT(cVar9 - *pbVar16) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar12 = *pbVar12 + cVar9;
    bVar7 = cVar8 + 0x2f;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + (byte)pbVar22;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar7,(byte)pbVar22);
      pbVar25 = (byte *)CONCAT31(uVar18,cVar8 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
    bVar33 = 0x90 < bVar7;
    pcVar15 = (char *)CONCAT31(uVar18,cVar8 + -0x62);
code_r0x00403a8f:
    uVar18 = (undefined3)((uint)pcVar15 >> 8);
    bVar5 = (char)pcVar15 - bVar33;
    pbVar25 = (byte *)CONCAT31(uVar18,bVar5);
    bVar7 = *pbVar30;
    cVar8 = (char)((uint)pbVar22 >> 8);
    *pbVar30 = *pbVar30 + cVar8;
    pbStack_28 = unaff_EBP;
    pbStack_8 = pbVar13;
    if (*pbVar30 != 0 && SCARRY1(bVar7,cVar8) == (char)*pbVar30 < '\0') {
      *pbVar25 = *pbVar25 + bVar5;
      pbStack_8 = (byte *)CONCAT31(uVar18,bVar5 + 0x2d);
      *(byte **)(pbVar13 + (int)unaff_EDI * 8) =
           pbVar16 + (uint)(0xd2 < bVar5) + *(int *)(pbVar13 + (int)unaff_EDI * 8);
      bVar33 = CARRY1(*pbVar13,(byte)pbVar13);
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      goto code_r0x00403aa1;
    }
  }
  pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                             CONCAT11((byte)((uint)pbVar22 >> 8) | *pbVar25,(char)pbVar22));
  *pbStack_8 = *pbStack_8 + (char)pbVar25;
code_r0x00403afc:
  pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                             CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x55],(char)pbVar30));
  *pbVar25 = *pbVar25 + (char)pbVar25;
  uVar18 = (undefined3)((uint)pbVar25 >> 8);
  bVar5 = (char)pbVar25 + 0x6f;
  bVar7 = *(byte *)CONCAT31(uVar18,bVar5);
  *pbVar16 = *pbVar16 + (char)pbVar22;
  pbVar25 = (byte *)CONCAT31(uVar18,(bVar5 & bVar7) + *pbStack_8);
  *pbVar22 = *pbVar22 - (char)((uint)pbVar16 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar25 = *pbVar25 + (byte)pbVar25;
    bVar7 = (byte)pbVar25 | *pbVar30;
    piVar11 = (int *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar7);
    if (bVar7 != 0) {
      pbStack_28 = pbStack_28 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar11 = (char)*piVar11 + bVar7;
      pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar22 >> 8) | *pbVar16,(char)pbVar22));
      pbStack_2c = pbStack_2c + *piVar11;
      pcVar15 = (char *)((int)piVar11 + *piVar11);
      uVar18 = (undefined3)((uint)pcVar15 >> 8);
      bVar5 = (char)pcVar15 - *pcVar15;
      pbVar13 = (byte *)CONCAT31(uVar18,bVar5);
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar5;
      piVar11 = (int *)CONCAT31(uVar18,bVar5 - CARRY1(bVar7,bVar5));
    }
    *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
    pbStack_8 = pbStack_2c + 4;
    out(*(undefined4 *)pbStack_2c,(short)pbVar16);
    pbVar25 = (byte *)(((uint)piVar11 >> 8) * 0x100);
    *pbVar16 = *pbVar16 + (byte)pbVar22;
    bVar7 = (char)pbVar16 - *pbVar30;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
    *pbVar30 = *pbVar30;
    *pbVar16 = *pbVar16 + (char)((uint)pbVar22 >> 8);
    *pbVar25 = *pbVar25;
    pcVar15 = (char *)(((uint)piVar11 >> 8) * 0x200);
    *pcVar15 = *pcVar15 + (char)pbVar30;
    bVar33 = CARRY1(*pbVar22,bVar7);
    *pbVar22 = *pbVar22 + bVar7;
    pbStack_2c = pbStack_8;
    if (bVar33) break;
    while( true ) {
      *(byte **)pbVar25 = pbVar25 + (uint)bVar33 + *(int *)pbVar25;
      unaff_EDI = unaff_EDI + 4;
      pbVar25[(int)pbVar16] = pbVar25[(int)pbVar16] + (char)pbVar30;
      *pbVar25 = *pbVar25 + (char)pbVar25;
      *(byte **)pbStack_2c = pbVar30 + *(int *)pbStack_2c;
      bVar7 = (byte)((uint)pbVar22 >> 8);
      cVar8 = (char)pbVar22;
      pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(bVar7 + *pbVar25,cVar8));
      pbVar25 = pbVar25 + (uint)CARRY1(bVar7,*pbVar25) + *(int *)pbVar25;
      *pbVar16 = *pbVar16 + cVar8;
      cVar8 = (char)pbVar30 - pbStack_2c[2];
      pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar8);
      pbStack_8 = pbStack_2c;
      if ((POPCOUNT(cVar8) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar25 = *pbVar25 + (char)pbVar25;
      pbVar16[0x16060000] = pbVar16[0x16060000] - (char)pbVar22;
      pbVar30 = (byte *)((uint)pbVar30 | (uint)pbStack_8);
      cVar8 = (char)pbVar25 + '\x02';
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
      bVar33 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
      bVar7 = (byte)pbVar13;
      uVar18 = (undefined3)((uint)pbVar13 >> 8);
      if (!bVar33) {
        *pbVar16 = *pbVar16 + (char)pbVar22;
        pbVar25 = (byte *)CONCAT31(uVar18,bVar7 | *pbStack_8);
code_r0x00403b73:
        pbVar13 = (byte *)(unaff_EDI + *(int *)(pbStack_28 + -0x37));
        *pbVar25 = *pbVar25 + (byte)pbVar25;
        uVar18 = (undefined3)((uint)pbVar25 >> 8);
        bVar7 = (byte)pbVar25 | *pbVar16;
        pcVar15 = (char *)CONCAT31(uVar18,bVar7);
        uVar34 = CONCAT44(pbVar16,pcVar15);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pcVar15 = *pcVar15 + bVar7;
          *pbStack_8 = *pbStack_8 + 1;
          return (byte *)CONCAT31(uVar18,bVar7 + 6);
        }
        bVar7 = *pbStack_8;
        *pbStack_8 = *pbStack_8 + 1;
        pcVar2 = (code *)swi(4);
        if (SCARRY1(bVar7,'\x01')) {
          uVar34 = (*pcVar2)();
          pbVar22 = extraout_ECX;
        }
        pbVar16 = (byte *)uVar34;
        *pbVar16 = *pbVar16 + (char)uVar34;
        cVar9 = (char)((ulonglong)uVar34 >> 0x20);
        puVar26 = (uint *)CONCAT22((short)((ulonglong)uVar34 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar34 >> 0x28) | pbVar30[0x2f],cVar9)
                                  );
        *pbVar16 = *pbVar16 + (char)uVar34;
        cVar8 = (char)pbVar22;
        bVar6 = (byte)((uint)pbVar22 >> 8) | *pbVar16;
        pbVar16 = pbVar16 + *(int *)pbVar16;
        bVar7 = *pbVar30;
        *pbVar30 = *pbVar30 + bVar6;
        bVar5 = (byte)pbVar16;
        if (CARRY1(bVar7,bVar6)) {
          *pbVar16 = *pbVar16 + bVar5;
          bVar6 = bVar6 | (byte)*puVar26;
          *pbVar30 = *pbVar30 - cVar9;
          *pbVar16 = *pbVar16 + bVar5;
          uVar18 = (undefined3)((uint)pbVar16 >> 8);
          bVar5 = bVar5 | (byte)*puVar26;
          piVar11 = (int *)CONCAT31(uVar18,bVar5);
          pbStack_28 = pbStack_28 + *piVar11;
          *(byte *)piVar11 = (char)*piVar11 + bVar5;
          cVar9 = (char)pbVar30 - *pbStack_8;
          pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                     CONCAT11((char)((uint)pbVar30 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar30 >> 8),cVar9) +
                                                       0x5f),cVar9));
          *(byte *)piVar11 = (char)*piVar11 + bVar5;
          bVar7 = bVar5 + 0x2a & (byte)*puVar26;
          pbVar13 = pbVar13 + *(int *)(pbStack_28 + 0x5f);
          *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
          pbVar16 = (byte *)CONCAT31(uVar18,bVar7 + 0x2a);
          *(byte *)puVar26 = (byte)*puVar26 + 0x28;
          *pbVar16 = *pbVar16 + bVar7 + 0x2a;
        }
        else {
          *pbStack_8 = *pbStack_8 + bVar5;
        }
        pcVar15 = (char *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(bVar6,cVar8));
        *pbStack_28 = *pbStack_28 - bVar6;
        *(byte *)puVar26 = (byte)*puVar26 + cVar8;
        bVar7 = (byte)pbVar16 - 0xb;
        pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
        if (10 < (byte)pbVar16) {
          *pbVar22 = *pbVar22 | bVar7;
          return pbVar22;
        }
        *(byte *)puVar26 = (byte)*puVar26 + cVar8;
        do {
          bVar7 = pbVar30[-0x23];
          bVar6 = (byte)pbVar22;
          *pbVar22 = *pbVar22 + bVar6;
          bVar5 = pbStack_28[-0x22];
          *pbVar22 = *pbVar22 + bVar6;
          uVar18 = (undefined3)((uint)pbVar22 >> 8);
          bVar6 = bVar6 | *pbStack_8;
          pbVar16 = (byte *)CONCAT31(uVar18,bVar6);
          cVar9 = (char)pbVar30 - *pbStack_8;
          pbVar30 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar30 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar30 >> 8) + bVar7 |
                                                              bVar5,(char)pbVar30)) >> 8),cVar9);
          cVar8 = (char)pcVar15;
          pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                     CONCAT11((char)((uint)pcVar15 >> 8) + *pbVar16,cVar8));
          *(byte *)puVar26 = (byte)*puVar26 + cVar8;
          bVar5 = bVar6 - *pbVar16;
          pbVar22 = (byte *)CONCAT31(uVar18,bVar5);
          pbStack_8 = pbStack_8 + (-(uint)(bVar6 < *pbVar16) - *(int *)pbVar22);
          puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),(char)puVar26 * '\x02');
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          *pbVar13 = *pbVar13 + cVar9;
          bVar7 = *pbVar22;
          *pbVar22 = *pbVar22 + bVar5;
          *puVar26 = (uint)(pbVar22 + (uint)CARRY1(bVar7,bVar5) + *puVar26);
        } while ((POPCOUNT(*puVar26 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar22 = *pbVar22 + (char)pbVar22;
        pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | pbVar22[(int)pcVar15])
        ;
        bVar33 = false;
        pbVar22 = (byte *)((uint)pbVar22 & 0xffffff00);
        do {
          pbVar13 = pbVar13 + (-(uint)bVar33 - *(int *)pbVar30);
          pcVar14 = (char *)CONCAT31((int3)((uint)pbVar22 >> 8),*pcVar15);
          *pcVar14 = *pcVar14 + *pcVar15;
          pbVar22 = (byte *)CONCAT31((int3)((uint)(pcVar14 +
                                                  (pbStack_8[0x2000001] < (byte)((uint)pcVar15 >> 8)
                                                  ) + 0xda7d) >> 8),
                                     ((byte)(pcVar14 +
                                            (pbStack_8[0x2000001] < (byte)((uint)pcVar15 >> 8)) +
                                            0xda7d) | (byte)*puVar26) + 0x7d);
          pcVar15 = pcVar15 + -1;
          *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar15;
          while( true ) {
            uVar23 = (undefined3)((uint)puVar26 >> 8);
            cVar8 = (char)puVar26 + *(char *)((int)pbVar13 * 2 + 0xa0000e1);
            puVar26 = (uint *)CONCAT31(uVar23,cVar8);
            bVar33 = CARRY1((byte)pbVar22,(byte)*puVar26);
            uVar18 = (undefined3)((uint)pbVar22 >> 8);
            bVar7 = (byte)pbVar22 + (byte)*puVar26;
            pbVar22 = (byte *)CONCAT31(uVar18,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *pbVar22 = *pbVar22 + bVar7;
            cVar9 = (char)pcVar15;
            pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar15 >> 8) | pbVar13[-0x65],cVar9));
            bVar5 = *pbVar22;
            *pbVar22 = *pbVar22 + bVar7;
            if (CARRY1(bVar5,bVar7)) {
              *pbVar22 = *pbVar22 + bVar7;
              pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar30 >> 8) | pbStack_28[-0x1d],
                                                  (char)pbVar30));
              *pbVar22 = *pbVar22 + bVar7;
              bVar33 = false;
              bVar7 = bVar7 | (byte)*puVar26;
              pcVar14 = (char *)CONCAT31(uVar18,bVar7);
              while( true ) {
                bVar5 = (byte)pcVar14;
                uVar18 = (undefined3)((uint)pcVar14 >> 8);
                if (bVar33 == (char)bVar7 < '\0') break;
                *pcVar14 = *pcVar14 + bVar5;
                bVar5 = bVar5 | (byte)*puVar26;
                puVar17 = (uint *)CONCAT31(uVar18,bVar5);
                *pbVar13 = *pbVar13 << 1 | (char)*pbVar13 < '\0';
                uVar4 = *puVar17;
                *(byte *)puVar17 = (byte)*puVar17 + bVar5;
                pbStack_28 = pbStack_28 + (-(uint)CARRY1((byte)uVar4,bVar5) - *puVar17);
                *puVar17 = *puVar17 << 1 | (uint)((int)*puVar17 < 0);
                while( true ) {
                  uVar4 = *puVar26;
                  *(byte *)puVar26 = (byte)*puVar26 + (byte)pcVar15;
                  cVar8 = (char)puVar17 + 'o' + CARRY1((byte)uVar4,(byte)pcVar15);
                  pcVar14 = (char *)CONCAT31((int3)((uint)puVar17 >> 8),cVar8);
                  pcVar15 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar8) & 1U) != 0) break;
                  *pcVar14 = *pcVar14 + cVar8;
                  bVar7 = bRamfe140212;
                  pcVar15 = (char *)0x0;
                  uVar18 = (undefined3)((uint)(pcVar14 + -0x732b0000) >> 8);
                  bVar5 = in(0);
                  puVar17 = (uint *)CONCAT31(uVar18,bVar5);
                  uVar4 = *puVar26;
                  *(byte *)puVar26 = (byte)*puVar26;
                  if (SCARRY1((byte)uVar4,'\0') != (char)(byte)*puVar26 < '\0') {
                    *(byte *)puVar17 = (byte)*puVar17 + bVar5;
                    bVar5 = bVar5 | (byte)*puVar26;
                    puVar17 = (uint *)CONCAT31(uVar18,bVar5);
                    if ((POPCOUNT(bVar5) & 1U) == 0) {
                      *(byte *)puVar17 = (byte)*puVar17 + bVar5;
                      pcVar15 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar7 | (byte)*puVar17) << 8);
                      *(byte *)puVar17 = (byte)*puVar17 + bVar5;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar17 = (byte)*puVar17 + bVar5;
                    puVar17 = (uint *)CONCAT31(uVar18,bVar5 | (byte)*puVar26);
                  }
                }
                *(byte *)puVar26 = (byte)*puVar26;
                bVar33 = SCARRY1((char)puVar26,*pbVar13);
                bVar7 = (char)puVar26 + *pbVar13;
                puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),bVar7);
              }
              if (bVar33 == (char)bVar7 < '\0') {
                *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar15;
                pbVar22 = (byte *)((uint)pcVar14 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar14 = *pcVar14 + bVar5;
              pbVar22 = (byte *)CONCAT31(uVar18,(bVar5 | (byte)*puVar26) + 0x7d);
              pcVar15 = pcVar15 + -1;
              *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar15;
            }
            else {
              *(byte *)puVar26 = (byte)*puVar26 + cVar9;
              puVar26 = (uint *)CONCAT31(uVar23,cVar8 + *(char *)((int)pbVar13 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar13 = *pbVar13 + bVar7;
      bVar7 = bVar7 + 0x6f & *(byte *)CONCAT31(uVar18,bVar7 + 0x6f);
      *pbVar16 = *pbVar16 + (char)pbVar22;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar7;
      pcVar15 = (char *)CONCAT31(uVar18,bVar7 - *unaff_EDI);
code_r0x00403b2c:
      bVar7 = (char)pcVar15 - *pcVar15;
      pbVar25 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar7);
      *pbVar25 = *pbVar25 + bVar7;
      *(byte **)pbVar25 = pbVar16 + *(int *)pbVar25;
      *pbVar25 = *pbVar25 + bVar7;
      bVar33 = CARRY1(*pbVar25,bVar7);
      *pbVar25 = *pbVar25 + bVar7;
      pbStack_2c = pbStack_8;
    }
  }
  *pbVar25 = *pbVar25;
  pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(byte)pbVar22 | *pbVar16);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_28 = pbStack_28 + -*puVar17;
  do {
    bVar7 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar7;
    pbVar13 = pbVar13 + -*(int *)(pbStack_28 + -0x1a);
    *(byte *)puVar17 = (byte)*puVar17 + bVar7;
    bVar7 = bVar7 | (byte)*puVar26;
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar7);
    *(byte *)puVar17 = (byte)*puVar17 | bVar7;
    bVar7 = (byte)*puVar17;
    pbStack_28 = (byte *)0x2700001;
    while ((POPCOUNT(bVar7) & 1U) == 0) {
      do {
        *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar17;
        bVar7 = (byte)puVar17 | (byte)*puVar26;
        puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar7);
        if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
        uVar19 = CONCAT21((short)((uint)pcVar15 >> 0x10),(byte)((uint)pcVar15 >> 8) | bRamfe140212);
        while( true ) {
          pcVar15 = (char *)((uint)uVar19 << 8);
          bVar20 = (byte)puVar17;
          *(byte *)puVar17 = (byte)*puVar17 & bVar20;
          bVar6 = *pbVar30;
          bVar32 = (byte)uVar19;
          bVar5 = *pbVar30;
          *pbVar30 = *pbVar30 + bVar32;
          bVar7 = *pbVar30;
          if (!CARRY1(bVar6,bVar32)) break;
          *(byte *)puVar17 = (byte)*puVar17 + bVar20;
          pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar30 >> 8) | bRam026fffe2,
                                              (char)pbVar30));
          *(byte *)puVar17 = (byte)*puVar17 + bVar20;
          bVar20 = bVar20 | (byte)*puVar26;
          puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar20);
          bVar33 = (POPCOUNT(bVar20) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)pbVar30 >> 8);
            uVar21 = (undefined2)((uint)pbVar30 >> 0x10);
            if (!bVar33) {
              *(byte *)puVar26 = (byte)*puVar26;
              pbVar30 = (byte *)CONCAT22(uVar21,CONCAT11(cVar8 + pbVar30[-0x1f],(char)pbVar30));
              goto code_r0x00403d52;
            }
            *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
            uVar24 = (undefined2)((uint)pcVar15 >> 0x10);
            bVar5 = (byte)((uint)pcVar15 >> 8) | (byte)*puVar17;
            uVar19 = CONCAT21(uVar24,bVar5);
            *puVar17 = *puVar17 & (uint)puVar17;
            *pbVar30 = *pbVar30 + bVar5;
            uVar18 = (undefined3)((uint)puVar17 >> 8);
            bVar7 = (char)puVar17 - bVar5;
            pcVar15 = (char *)CONCAT31(uVar18,bVar7);
            *pcVar15 = *pcVar15 + bVar7;
            bVar7 = bVar7 | (byte)*puVar26;
            puVar17 = (uint *)CONCAT31(uVar18,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *(byte *)puVar17 = (byte)*puVar17 + bVar7;
            pcVar15 = (char *)((uint)CONCAT21(uVar24,bVar5 | (byte)*puVar17) << 8);
            *puVar17 = *puVar17 - (int)puVar17;
            *(byte *)puVar26 = (byte)*puVar26;
            pbVar30 = (byte *)CONCAT22(uVar21,CONCAT11(cVar8 + pbVar30[-0x1d],(char)pbVar30));
            do {
              *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
              uVar21 = (undefined2)((uint)puVar26 >> 0x10);
              cVar8 = (char)puVar26;
              bVar7 = (byte)((uint)puVar26 >> 8) | pbVar30[-0x17];
              puVar26 = (uint *)CONCAT22(uVar21,CONCAT11(bVar7,cVar8));
              *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
              pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar30 >> 8) | bRam026fffeb,
                                                  (char)pbVar30));
              do {
                *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar17;
                uVar18 = (undefined3)((uint)puVar17 >> 8);
                bVar6 = (byte)puVar17 | (byte)*puVar26;
                pcVar14 = (char *)CONCAT31(uVar18,bVar6);
                bVar5 = pbVar30[-0x16];
                *pcVar14 = *pcVar14 + bVar6;
                pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                           CONCAT11((char)((uint)pbVar30 >> 8) + bVar5 |
                                                    bRam026fffec,(char)pbVar30));
                *pcVar14 = *pcVar14 + bVar6;
                pbVar22 = (byte *)CONCAT31(uVar18,bVar6 | (byte)*puVar26);
                while( true ) {
                  *pbVar22 = *pbVar22 + (byte)pbVar22;
                  uVar18 = (undefined3)((uint)pbVar22 >> 8);
                  bVar5 = (byte)pbVar22 | (byte)*puVar26;
                  puVar17 = (uint *)CONCAT31(uVar18,bVar5);
                  if ((POPCOUNT(bVar5) & 1U) != 0) break;
                  *(byte *)puVar17 = (byte)*puVar17 + bVar5;
                  bVar6 = pbVar13[-0x14];
                  *(byte *)puVar17 = (byte)*puVar17 + bVar5;
                  bVar5 = bVar5 | (byte)*puVar26;
                  pcVar14 = (char *)CONCAT31(uVar18,bVar5);
                  bVar20 = pbVar30[-0x15];
                  *pcVar14 = *pcVar14 + bVar5;
                  pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),
                                                    (byte)((uint)pcVar15 >> 8) | bVar6 |
                                                    pbVar13[-0x13]) << 8);
                  *pcVar14 = *pcVar14 + bVar5;
                  pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                             CONCAT11((char)((uint)pbVar30 >> 8) + bVar20 |
                                                      bRam026fffef,(char)pbVar30));
                  *pcVar14 = *pcVar14 + bVar5;
                  pbVar22 = (byte *)CONCAT31(uVar18,bVar5 | (byte)*puVar26);
                  do {
                    do {
                      bVar6 = (byte)pbVar22;
                      *pbVar22 = *pbVar22 + bVar6;
                      cVar28 = (char)pbVar30;
                      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar30 >> 8) | *pbVar22,
                                                          cVar28));
                      *pbVar22 = bVar6;
                      *pbVar22 = *pbVar22 + bVar6;
                      cVar9 = (char)((uint)pcVar15 >> 8) + *pbVar22;
                      pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),cVar9) << 8);
                      uVar18 = (undefined3)((uint)pbVar22 >> 8);
                      bVar6 = bVar6 & *pbVar22;
                      pbVar22 = (byte *)CONCAT31(uVar18,bVar6);
                      bVar5 = *pbVar30;
                      *pbVar30 = *pbVar30 + cVar9;
                    } while (SCARRY1(bVar5,cVar9) == (char)*pbVar30 < '\0');
                    *pbVar22 = *pbVar22 + bVar6;
                    bVar6 = bVar6 | (byte)*puVar26;
                    pbVar22 = (byte *)CONCAT31(uVar18,bVar6);
                    if ((POPCOUNT(bVar6) & 1U) == 0) {
                      *pbVar22 = *pbVar22 + bVar6;
                      *pbVar22 = *pbVar22 + bVar6;
                      cVar8 = cVar8 - bVar7;
                      pbVar16 = (byte *)CONCAT31((int3)((uint)puVar26 >> 8),cVar8);
                      *pbVar22 = *pbVar22 + bVar6;
                      bRam0312382b = bRam0312382b | *pbVar16;
                      while( true ) {
                        bVar5 = (byte)pbVar22;
                        *pbVar22 = *pbVar22 + bVar5;
                        bRam0312382b = bRam0312382b | (pbVar13 + 0x21b0000)[(int)pbVar22];
                        uVar18 = (undefined3)((uint)pbVar22 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar16 = *pbVar16 + bRam0312382b;
                        pbVar22 = (byte *)CONCAT31(uVar18,bVar5 | *pbStack_8);
                      }
                      *pbVar22 = *pbVar22 + bVar5;
                      bVar5 = bVar5 | *pbStack_8;
                      pcVar15 = (char *)CONCAT31(uVar18,bVar5);
                      out(*(undefined4 *)pbStack_8,(short)pbVar16);
                      *pcVar15 = *pcVar15 + bVar5;
                      uVar24 = CONCAT11(bVar7 | bRam6f0a002b,cVar8);
                      pcVar14 = (char *)CONCAT22(uVar21,uVar24);
                      *pcVar15 = *pcVar15 + bVar5;
                      *pcVar14 = *pcVar14 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_8 + 4),uVar24);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar28 + *pcVar15);
                  } while (SCARRY1(cVar28,*pcVar15) != (char)(cVar28 + *pcVar15) < '\0');
                }
                uVar4 = *puVar26;
                *(byte *)puVar26 = (byte)*puVar26;
              } while (SCARRY1((byte)uVar4,'\0') != (char)(byte)*puVar26 < '\0');
              *(byte *)puVar26 = (byte)*puVar26;
              *pcVar15 = *pcVar15 - (char)pbVar30;
              *(byte *)puVar17 = (byte)*puVar17 + bVar5;
              bVar5 = bVar5 | (byte)*puVar26;
              puVar17 = (uint *)CONCAT31(uVar18,bVar5);
              bVar33 = (POPCOUNT(bVar5) & 1U) == 0;
            } while (bVar33);
          }
        }
      } while (SCARRY1(bVar5,bVar32));
    }
    *pbVar30 = *pbVar30 + (char)((uint)pcVar15 >> 8);
    *pbVar13 = *pbVar13 - (char)pbVar30;
  } while( true );
}


