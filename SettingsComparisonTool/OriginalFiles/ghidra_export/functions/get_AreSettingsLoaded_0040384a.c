/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040384a
 * Raw Name    : get_AreSettingsLoaded
 * Demangled   : get_AreSettingsLoaded
 * Prototype   : byte * get_AreSettingsLoaded(byte * param_1, byte * param_2)
 * Local Vars  : pbStack_24, pbStack_20, pbStack_10, iVar1, pcVar2, uVar3, uVar4, bVar5, cVar6, bVar7, bVar8, bVar9, in_EAX, piVar10, pbVar11, pbVar12, pcVar13, pcVar14, puVar15, uVar16, uVar17, uVar18, extraout_ECX, param_1, param_2, uVar19, pbVar20, puVar21, uVar22, cVar23, cVar24, uVar25, unaff_EBX, cVar26, bVar27, unaff_EBP, unaff_EDI, in_ES, in_CS, in_DS, bVar28, uVar29, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall get_AreSettingsLoaded(byte *param_1,byte *param_2)

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
  char *in_EAX;
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
  char cVar24;
  undefined1 uVar25;
  char cVar26;
  byte bVar27;
  byte *unaff_EBX;
  byte *unaff_EBP;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_DS;
  bool bVar28;
  undefined8 uVar29;
  byte *unaff_retaddr;
  byte *pbStack_24;
  byte *pbStack_20;
  byte *pbStack_10;
  
code_r0x0040384a:
                    /* .NET CLR Managed Code */
  uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar23 = (char)unaff_EBX;
  cVar26 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x58];
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar16 = (undefined3)((uint)in_EAX >> 8);
  bVar5 = (char)in_EAX + 0x2aU & *param_2;
  iVar1 = *(int *)(unaff_EBP + 0x58);
  *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
  pcVar14 = (char *)CONCAT31(uVar16,bVar5 + 0x2a);
  cVar26 = cVar26 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar26,cVar23)) + 0x55);
  *pcVar14 = *pcVar14 + bVar5 + 0x2a;
  pcVar14 = (char *)CONCAT31(uVar16,bVar5 + 0x57);
  pbVar20 = param_2 + *(int *)unaff_retaddr;
  cVar26 = cVar26 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar26,cVar23)) + 0x55);
  *pcVar14 = *pcVar14 + bVar5 + 0x57;
  cVar6 = bVar5 - 0x3a;
  pcVar14 = (char *)CONCAT31(uVar16,cVar6);
  *pcVar14 = *pcVar14 + cVar6;
  bVar8 = *pbVar20;
  cVar24 = (char)param_1;
  unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar26 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar26,
                                                  cVar23)) + 0x59),cVar23));
  *pcVar14 = *pcVar14 + cVar6;
  bVar7 = bVar5 - 0x10 & *pbVar20;
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x59) + iVar1;
  *(char *)CONCAT31(uVar16,bVar7) = *(char *)CONCAT31(uVar16,bVar7) + bVar7;
  bVar7 = bVar7 + 0x2a;
  pbVar12 = (byte *)CONCAT31(uVar16,bVar7);
  cVar6 = unaff_EDI[0x17];
  *pbVar12 = *pbVar12 + bVar7;
  bVar5 = *pbVar20;
  pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_DS);
  cVar26 = unaff_EDI[0x1a];
  *pbVar12 = *pbVar12 + bVar7;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((((byte)((uint)param_1 >> 8) | bVar8) + cVar6 | bVar5) +
                                      cVar26 | *pbVar20,cVar24));
  *unaff_EBX = *unaff_EBX + cVar23;
  *(byte *)((int)pbVar12 * 2) = *(byte *)((int)pbVar12 * 2) ^ bVar7;
  bVar8 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar7;
  bVar5 = *pbVar12;
  *param_1 = *param_1 + (char)pbVar20;
  bVar8 = ((bVar7 - bVar5) - CARRY1(bVar8,bVar7)) + *pbVar20;
  pbVar12 = (byte *)CONCAT31(uVar16,bVar8);
  param_2 = pbStack_10;
  if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x004038f6;
  *pbVar12 = *pbVar12 + bVar8;
  cVar6 = (bVar8 + 0x6f) - (0x90 < bVar8);
  pbVar11 = (byte *)CONCAT31(uVar16,cVar6);
  bVar8 = *pbVar20;
  *pbVar20 = *pbVar20 + cVar24;
  param_2 = pbVar20;
  if (SCARRY1(bVar8,cVar24) == (char)*pbVar20 < '\0') {
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
      pbVar12 = (byte *)CONCAT31(uVar16,cVar6);
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)unaff_retaddr;
      cVar6 = (char)pbVar12 + *param_2;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
code_r0x0040390c:
      cVar26 = (char)pbVar12;
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        *unaff_retaddr = *unaff_retaddr + cVar26;
        goto code_r0x0040395a;
      }
      *pbVar12 = *pbVar12 + cVar26;
      bVar8 = cVar26 + 2;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
code_r0x00403912:
      bVar28 = (POPCOUNT(bVar8) & 1U) == 0;
      if (!bVar28) goto code_r0x00403967;
      *pbVar12 = *pbVar12 + (char)pbVar12;
code_r0x00403916:
      bVar5 = (char)pbVar12 + 0x6f;
      pbVar20 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
      bVar8 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar5;
      if (*pbVar20 == 0 || SCARRY1(bVar8,bVar5) != (char)*pbVar20 < '\0') goto code_r0x00403979;
      *pbVar20 = *pbVar20 + bVar5;
      pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),(char)pbVar12 + -100);
      *(byte **)(unaff_retaddr + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar5) + *(int *)(unaff_retaddr + (int)unaff_EDI * 8);
code_r0x00403926:
      *(byte **)pbVar11 = pbStack_10;
      bVar8 = *unaff_retaddr;
      bVar5 = (byte)pbVar11;
      *unaff_retaddr = *unaff_retaddr + bVar5;
      if (CARRY1(bVar8,bVar5)) {
        *pbVar11 = *pbVar11 + bVar5;
        uVar16 = (undefined3)((uint)pbVar11 >> 8);
        bVar5 = bVar5 | pbVar11[0x400005b];
        pbVar12 = (byte *)CONCAT31(uVar16,bVar5);
        pbVar20 = unaff_retaddr;
        if ((char)bVar5 < '\x01') goto code_r0x00403991;
        *pbVar12 = *pbVar12 + bVar5;
        cVar6 = bVar5 + 0x28;
        pbVar12 = (byte *)CONCAT31(uVar16,cVar6);
        *(byte **)pbVar12 = pbVar12 + (uint)(0xd7 < bVar5) + *(int *)pbVar12;
        bVar8 = *unaff_EBX;
        bVar5 = (byte)((uint)param_1 >> 8);
        *unaff_EBX = *unaff_EBX + bVar5;
        if (CARRY1(bVar8,bVar5)) {
          *pbVar12 = *pbVar12 + cVar6;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar5 | *pbVar12,(char)param_1));
          *unaff_retaddr = *unaff_retaddr + cVar6;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                                (char)unaff_EBX));
          *pbVar12 = *pbVar12 + cVar6;
code_r0x00403950:
          uVar16 = (undefined3)((uint)pbVar12 >> 8);
          bVar5 = (char)pbVar12 + 0x6f;
          bVar8 = *(byte *)CONCAT31(uVar16,bVar5);
          *param_2 = *param_2 + (char)param_1;
          pbVar12 = (byte *)CONCAT31(uVar16,(bVar5 & bVar8) + *unaff_retaddr);
          *param_1 = *param_1 - (char)((uint)param_2 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar12 = *pbVar12 + cVar6;
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
    cVar26 = cVar6 + 'q';
    piVar10 = (int *)CONCAT31(uVar16,cVar26);
    *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0x90 < bVar8);
    bVar8 = *unaff_EBX;
    bVar5 = (byte)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + bVar5;
    if (!CARRY1(bVar8,bVar5)) {
      out(*(undefined4 *)unaff_retaddr,(short)param_2);
      cVar6 = (cVar26 - (char)*piVar10) - CARRY1(bVar8,bVar5);
      *param_2 = *param_2 + (char)param_1;
      in_EAX = (char *)CONCAT31(uVar16,cVar6 - *(char *)CONCAT31(uVar16,cVar6));
      unaff_retaddr = param_1;
      goto code_r0x0040384a;
    }
    *(char *)piVar10 = (char)*piVar10 + cVar26;
    uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar8 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56];
    *(char *)piVar10 = (char)*piVar10 + cVar26;
    pcVar14 = (char *)CONCAT31(uVar16,cVar6 + 's');
    unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar18,CONCAT11(bVar8,(
                                                  char)unaff_EBX)) + 0x56),(char)unaff_EBX));
    *pcVar14 = *pcVar14 + cVar6 + 's';
    bVar8 = cVar6 - 0xf;
    *(char *)CONCAT31(uVar16,bVar8) = *(char *)CONCAT31(uVar16,bVar8) + bVar8;
    bVar5 = cVar6 + 0x1e;
    pbVar11 = (byte *)CONCAT31(uVar16,bVar5);
    *(byte **)(unaff_retaddr + (int)unaff_EDI * 8) =
         param_1 + (uint)(0xd2 < bVar8) + *(int *)(unaff_retaddr + (int)unaff_EDI * 8);
    in_ES = *(undefined2 *)pbVar11;
    bVar8 = *unaff_retaddr;
    *unaff_retaddr = *unaff_retaddr + bVar5;
    param_2 = param_1;
    if (CARRY1(bVar8,bVar5)) {
      *pbVar11 = *pbVar11 + bVar5;
      pbVar12 = (byte *)CONCAT31(uVar16,bVar5 | pbVar11[0x400005a]);
      if ('\0' < (char)(bVar5 | pbVar11[0x400005a])) {
code_r0x004038f6:
        bVar8 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar8;
        uVar16 = (undefined3)((uint)pbVar12 >> 8);
        cVar6 = ((bVar8 + 0x28) - *(char *)CONCAT31(uVar16,bVar8 + 0x28)) - (0xd7 < bVar8);
        pbVar12 = (byte *)CONCAT31(uVar16,cVar6);
        bVar8 = *unaff_EBX;
        bVar5 = (byte)((uint)param_1 >> 8);
        *unaff_EBX = *unaff_EBX + bVar5;
        if (CARRY1(bVar8,bVar5)) {
          *pbVar12 = *pbVar12 + cVar6;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar5 | *pbVar12,(char)param_1));
          *unaff_retaddr = *unaff_retaddr + cVar6;
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
  param_2[0x16060000] = param_2[0x16060000] - (char)param_1;
  unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_retaddr);
  cVar6 = (char)pbVar12 + '\x02';
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
  bVar28 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403967:
  if (!bVar28) goto code_r0x004039be;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  bVar8 = (char)pbVar12 + 0x6f;
  bVar8 = bVar8 & *(byte *)CONCAT31(uVar16,bVar8);
  pbVar20 = (byte *)CONCAT31(uVar16,bVar8);
  *param_2 = *param_2 + (char)param_1;
  param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar8;
code_r0x00403979:
  bVar8 = (char)pbVar20 - *unaff_EDI;
  bVar28 = bVar8 < *param_1;
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar8 - *param_1);
  do {
    cVar6 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar6 + bVar28;
    *pbVar12 = *pbVar12 + cVar6;
    *param_1 = *param_1 + (char)param_2;
    param_1[0x101c00aa] = param_1[0x101c00aa] + (char)unaff_EBX;
    *pbVar12 = *pbVar12 + cVar6;
    *(byte **)unaff_retaddr = unaff_EBX + *(int *)unaff_retaddr;
    bVar8 = (byte)((uint)param_1 >> 8);
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11(bVar8 + *pbVar12,(char)param_1));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar8,*pbVar12) + *(int *)pbVar12;
    pbVar20 = unaff_retaddr;
code_r0x00403991:
    cVar6 = (char)param_1;
    *param_2 = *param_2 + cVar6;
    cVar26 = (char)unaff_EBX - pbVar20[2];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar26);
    unaff_retaddr = pbVar20;
    if ((POPCOUNT(cVar26) & 1U) != 0) goto code_r0x0040395a;
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    uVar17 = (uint3)((uint)pbVar12 >> 8);
    bVar8 = (byte)pbVar12 | *unaff_EBX;
    piVar10 = (int *)CONCAT31(uVar17,bVar8);
    bVar5 = (byte)((uint)param_1 >> 8);
    bVar7 = (byte)param_2;
    if (bVar8 == 0) {
      *(char *)piVar10 = (char)*piVar10;
      unaff_retaddr = pbVar20 + 4;
      out(*(undefined4 *)pbVar20,(short)param_2);
      pbVar12 = (byte *)((uint)uVar17 << 8);
      *param_2 = *param_2 + cVar6;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar7 - *unaff_EBX);
      *unaff_EBX = *unaff_EBX;
      *param_2 = *param_2 + bVar5;
      *pbVar12 = *pbVar12;
      *unaff_EBX = *unaff_EBX + cVar26;
      *pbVar12 = *pbVar12;
      *(byte **)(unaff_EBX + -0x3d) = unaff_retaddr + *(int *)(unaff_EBX + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar10 = (char)*piVar10 + bVar8;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar5 | *param_2,cVar6));
    unaff_retaddr = pbVar20 + *piVar10;
    pcVar14 = (char *)((int)piVar10 + *piVar10);
    bVar5 = (char)pcVar14 - *pcVar14;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar5);
    bVar8 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar5;
    pbVar12 = pbVar12 + (-(uint)CARRY1(bVar8,bVar5) - *(int *)pbVar12);
    bVar28 = CARRY1(*param_1,bVar7);
    *param_1 = *param_1 + bVar7;
  } while (!bVar28);
  *pbVar12 = *pbVar12 + (char)pbVar12;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *param_2);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar12 = *pbVar12 + (byte)pbVar12;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  bVar8 = (byte)pbVar12 | *param_2;
  pcVar14 = (char *)CONCAT31(uVar16,bVar8);
  if ((POPCOUNT(bVar8) & 1U) == 0) goto code_r0x004039c8;
  cVar6 = *pcVar14;
  *pcVar14 = *pcVar14 + bVar8;
  cVar26 = *pcVar14;
  if (!SCARRY1(cVar6,bVar8)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar14 = *pcVar14 + bVar8;
  *unaff_retaddr = *unaff_retaddr + 1;
  uVar3 = *(undefined6 *)CONCAT31(uVar16,bVar8 + 6);
  pbVar20 = (byte *)uVar3;
  bVar8 = *param_2;
  bVar5 = (byte)param_1;
  *param_2 = *param_2 + bVar5;
  if (!CARRY1(bVar8,bVar5)) goto code_r0x00403979;
  *pbVar20 = *pbVar20 + (char)uVar3;
  bVar7 = (byte)((uint)param_1 >> 8) | *pbVar20;
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
    bVar27 = (byte)((uint)unaff_EBX >> 8) | param_2[0x32];
    pcVar14 = (char *)CONCAT22(uVar19,CONCAT11(bVar27,(char)unaff_EBX));
    pbStack_20 = (byte *)CONCAT22(pbStack_20._2_2_,in_CS);
    cVar26 = cVar6 + *pcVar14 + '-';
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar26);
    *pbVar20 = *pbVar20;
    bVar9 = *param_2;
    cVar24 = (char)unaff_EBX - *unaff_retaddr;
    cVar6 = unaff_EDI[0x17];
    *pbVar20 = *pbVar20 + cVar26;
    uVar18 = CONCAT11((bVar7 | bVar8) + cVar6 | *param_2,bVar5 - bVar9);
    unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar27 + *(char *)(CONCAT31((int3)((uint)pcVar14 >>
                                                                                   8),cVar24) + 0x4e
                                                                   ),cVar24));
    *pbVar20 = *pbVar20 + cVar26;
  }
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),uVar18);
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
  cVar26 = *pcVar13;
code_r0x00403a22:
  if ((POPCOUNT(cVar26) & 1U) == 0) {
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
      bVar9 = (byte)param_1;
      *param_2 = *param_2 + bVar9;
      out(*(undefined4 *)unaff_retaddr,(short)param_2);
      bVar7 = ((cVar6 + '*') - (char)*piVar10) - CARRY1(bVar8,bVar9);
      pbVar12 = (byte *)CONCAT31(uVar16,bVar7);
      *param_2 = *param_2 + bVar9;
      uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar25 = SUB41(unaff_EBX,0);
      cVar6 = (char)((uint)unaff_EBX >> 8) - unaff_retaddr[0x1f];
      unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar6,uVar25));
      *pbVar12 = *pbVar12 + bVar7;
      bVar5 = *param_2;
      bVar8 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar7;
      unaff_retaddr = unaff_retaddr + ((4 - *(int *)pbVar12) - (uint)CARRY1(bVar8,bVar7));
      pbVar12 = (byte *)CONCAT31(uVar16,bVar7);
      param_1 = (byte *)(CONCAT22((short)((uint)param_1 >> 0x10),
                                  CONCAT11((byte)((uint)param_1 >> 8) | bVar5,bVar9)) + -1);
      bVar8 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar7;
      bVar8 = (bVar7 - *pbVar12) - CARRY1(bVar8,bVar7);
      *param_1 = *param_1 + (char)param_2;
      bVar28 = CARRY1(bVar8,*param_2);
      bVar8 = bVar8 + *param_2;
      pbVar12 = (byte *)CONCAT31(uVar16,bVar8);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *pbVar12 = *pbVar12 + bVar8;
        cVar26 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pbVar20 = (byte *)CONCAT31(uVar16,cVar26);
        bVar8 = *param_2;
        *param_2 = *param_2 + (char)param_1;
        if (SCARRY1(bVar8,(char)param_1) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar20 = *pbVar20 + cVar26;
        pcVar14 = (char *)CONCAT31(uVar16,cVar26 + '\x02');
        bVar5 = cVar6 + unaff_EBX[0x52];
        unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar5,uVar25));
        *pcVar14 = *pcVar14 + cVar26 + '\x02';
        bVar8 = cVar26 + 4;
        pbVar20 = (byte *)CONCAT31(uVar16,bVar8);
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          *pbVar20 = *pbVar20 + bVar8;
          cVar6 = (cVar26 + 's') - (0x90 < bVar8);
          pcVar14 = (char *)CONCAT31(uVar16,cVar6);
          bVar8 = (byte)((uint)param_1 >> 8);
          bVar28 = CARRY1(*unaff_EBX,bVar8);
          *unaff_EBX = *unaff_EBX + bVar8;
          pbVar12 = unaff_retaddr;
          if (bVar28) {
            *pcVar14 = *pcVar14 + cVar6;
            unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar5 | unaff_EBP[0x5c],uVar25));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar20;
        unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar5 + unaff_EBX[0x52],uVar25));
code_r0x00403abf:
        *pbVar20 = *pbVar20 + (char)pbVar20;
        cVar6 = (char)pbVar20 + '\x02';
        pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar6);
        bVar28 = (POPCOUNT(cVar6) & 1U) == 0;
        pbStack_20 = unaff_EBP;
        if (!bVar28) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar28) {
          *pbVar12 = *pbVar12 + (byte)pbVar12;
          bVar8 = (byte)pbVar12 | pbVar12[0x400005e];
          pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
          pbStack_20 = unaff_EBP;
          if ((char)bVar8 < '\x01') goto code_r0x00403b0b;
          *pbVar20 = *pbVar20 + bVar8;
code_r0x00403aaf:
          cVar6 = (char)pbVar20 + '(';
          pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar6);
          *(byte **)pbVar20 = pbVar20 + *(int *)pbVar20;
          bVar8 = *unaff_EBX;
          bVar5 = (byte)((uint)param_1 >> 8);
          *unaff_EBX = *unaff_EBX + bVar5;
          pbVar11 = unaff_EBP;
          if (!CARRY1(bVar8,bVar5)) goto code_r0x00403ad8;
          *pbVar20 = *pbVar20 + cVar6;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar5 | *unaff_EBX,(char)param_1));
          if ((POPCOUNT(*param_2 - cVar6) & 1U) != 0) {
            *unaff_retaddr = *unaff_retaddr + cVar6;
            pbStack_20 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                              (char)unaff_EBX));
      }
      bVar8 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar8;
      cVar6 = (bVar8 + 0x6f) - (0x90 < bVar8);
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
      bVar8 = *unaff_EBX;
      cVar26 = (char)((uint)param_1 >> 8);
      *unaff_EBX = *unaff_EBX + cVar26;
      pbStack_20 = unaff_EBP;
      if (*unaff_EBX == 0 || SCARRY1(bVar8,cVar26) != (char)*unaff_EBX < '\0')
      goto code_r0x00403b2c;
      *pcVar14 = *pcVar14 + cVar6;
    }
    else {
      pcVar14 = (char *)CONCAT31(uVar16,bVar8 + *param_2);
      pbVar12 = unaff_retaddr;
      if ((POPCOUNT(bVar8 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_retaddr + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar14) + *(int *)(unaff_retaddr + (int)unaff_EDI * 8);
    pbVar20 = unaff_EBP;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 + 0x2d);
code_r0x00403ad8:
    pbStack_20 = pbVar11;
    bVar8 = *pbVar20;
    bVar5 = (byte)pbVar20;
    *pbVar20 = *pbVar20 + bVar5;
    pbStack_24 = (byte *)CONCAT22(pbStack_24._2_2_,in_ES);
    if (!CARRY1(bVar8,bVar5)) goto code_r0x00403afc;
    *pbVar20 = *pbVar20 + bVar5;
    bVar5 = bVar5 | pbVar20[0x400005d];
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar5);
    pbVar12 = unaff_retaddr;
    if ((char)bVar5 < '\x01') {
      *pbVar20 = *pbVar20 + bVar5;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                            (char)unaff_EBX));
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar20 = *pbVar20 + (char)pbVar20;
    cVar6 = (char)pbVar20 + '(';
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar6);
    *(byte **)pbVar20 = pbVar20 + *(int *)pbVar20;
    bVar8 = *unaff_EBX;
    bVar5 = (byte)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + bVar5;
    unaff_retaddr = pbVar12;
    if (!CARRY1(bVar8,bVar5)) goto code_r0x00403b0b;
    *pbVar20 = *pbVar20 + cVar6;
  }
  else {
    bVar8 = *param_2;
    *param_2 = *param_2 + (char)param_1;
    if (SCARRY1(bVar8,(char)param_1) == (char)*param_2 < '\0') {
      pbVar20 = unaff_EBP;
      pbVar11 = (byte *)(pcVar14 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x02');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                          (char)unaff_EBX));
    pbVar12 = unaff_retaddr;
code_r0x00403a7d:
    cVar6 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar6;
    uVar16 = (undefined3)((uint)pcVar14 >> 8);
    cVar26 = cVar6 + '-';
    pbVar11 = (byte *)CONCAT31(uVar16,cVar26);
    pbVar20 = unaff_EBP;
    unaff_retaddr = pbVar12;
    if ((POPCOUNT(cVar26 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar11 = *pbVar11 + cVar26;
    bVar8 = cVar6 + 0x2f;
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      bVar8 = *param_2;
      *param_2 = *param_2 + (byte)param_1;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar8,(byte)param_1);
      pbVar20 = (byte *)CONCAT31(uVar16,cVar6 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar16,bVar8) = *(char *)CONCAT31(uVar16,bVar8) + bVar8;
    bVar28 = 0x90 < bVar8;
    pcVar14 = (char *)CONCAT31(uVar16,cVar6 + -0x62);
code_r0x00403a8f:
    uVar16 = (undefined3)((uint)pcVar14 >> 8);
    bVar5 = (char)pcVar14 - bVar28;
    pbVar20 = (byte *)CONCAT31(uVar16,bVar5);
    bVar8 = *unaff_EBX;
    cVar6 = (char)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + cVar6;
    pbStack_20 = unaff_EBP;
    unaff_retaddr = pbVar12;
    if (*unaff_EBX != 0 && SCARRY1(bVar8,cVar6) == (char)*unaff_EBX < '\0') {
      *pbVar20 = *pbVar20 + bVar5;
      unaff_retaddr = (byte *)CONCAT31(uVar16,bVar5 + 0x2d);
      *(byte **)(pbVar12 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar5) + *(int *)(pbVar12 + (int)unaff_EDI * 8);
      bVar28 = CARRY1(*pbVar12,(byte)pbVar12);
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      goto code_r0x00403aa1;
    }
  }
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *pbVar20,(char)param_1));
  *unaff_retaddr = *unaff_retaddr + (char)pbVar20;
code_r0x00403afc:
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar20 = *pbVar20 + (char)pbVar20;
  uVar16 = (undefined3)((uint)pbVar20 >> 8);
  bVar5 = (char)pbVar20 + 0x6f;
  bVar8 = *(byte *)CONCAT31(uVar16,bVar5);
  *param_2 = *param_2 + (char)param_1;
  pbVar20 = (byte *)CONCAT31(uVar16,(bVar5 & bVar8) + *unaff_retaddr);
  *param_1 = *param_1 - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    bVar8 = (byte)pbVar20 | *unaff_EBX;
    piVar10 = (int *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar8);
    if (bVar8 != 0) {
      pbStack_20 = pbStack_20 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar10 = (char)*piVar10 + bVar8;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
      pbStack_24 = pbStack_24 + *piVar10;
      pcVar14 = (char *)((int)piVar10 + *piVar10);
      uVar16 = (undefined3)((uint)pcVar14 >> 8);
      bVar5 = (char)pcVar14 - *pcVar14;
      pbVar12 = (byte *)CONCAT31(uVar16,bVar5);
      bVar8 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar5;
      piVar10 = (int *)CONCAT31(uVar16,bVar5 - CARRY1(bVar8,bVar5));
    }
    *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
    unaff_retaddr = pbStack_24 + 4;
    out(*(undefined4 *)pbStack_24,(short)param_2);
    pbVar20 = (byte *)(((uint)piVar10 >> 8) * 0x100);
    *param_2 = *param_2 + (byte)param_1;
    bVar8 = (char)param_2 - *unaff_EBX;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar8);
    *unaff_EBX = *unaff_EBX;
    *param_2 = *param_2 + (char)((uint)param_1 >> 8);
    *pbVar20 = *pbVar20;
    pcVar14 = (char *)(((uint)piVar10 >> 8) * 0x200);
    *pcVar14 = *pcVar14 + (char)unaff_EBX;
    bVar28 = CARRY1(*param_1,bVar8);
    *param_1 = *param_1 + bVar8;
    pbStack_24 = unaff_retaddr;
    if (bVar28) break;
    while( true ) {
      *(byte **)pbVar20 = pbVar20 + (uint)bVar28 + *(int *)pbVar20;
      unaff_EDI = unaff_EDI + 4;
      pbVar20[(int)param_2] = pbVar20[(int)param_2] + (char)unaff_EBX;
      *pbVar20 = *pbVar20 + (char)pbVar20;
      *(byte **)pbStack_24 = unaff_EBX + *(int *)pbStack_24;
      bVar8 = (byte)((uint)param_1 >> 8);
      cVar6 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar8 + *pbVar20,cVar6));
      pbVar20 = pbVar20 + (uint)CARRY1(bVar8,*pbVar20) + *(int *)pbVar20;
      *param_2 = *param_2 + cVar6;
      cVar6 = (char)unaff_EBX - pbStack_24[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6);
      unaff_retaddr = pbStack_24;
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar20 = *pbVar20 + (char)pbVar20;
      param_2[0x16060000] = param_2[0x16060000] - (char)param_1;
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_retaddr);
      cVar6 = (char)pbVar20 + '\x02';
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar6);
      bVar28 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403b18:
      bVar8 = (byte)pbVar12;
      uVar16 = (undefined3)((uint)pbVar12 >> 8);
      if (!bVar28) {
        *param_2 = *param_2 + (char)param_1;
        pbVar20 = (byte *)CONCAT31(uVar16,bVar8 | *unaff_retaddr);
code_r0x00403b73:
        pbVar12 = (byte *)(unaff_EDI + *(int *)(pbStack_20 + -0x37));
        *pbVar20 = *pbVar20 + (byte)pbVar20;
        uVar16 = (undefined3)((uint)pbVar20 >> 8);
        bVar8 = (byte)pbVar20 | *param_2;
        pcVar14 = (char *)CONCAT31(uVar16,bVar8);
        uVar29 = CONCAT44(param_2,pcVar14);
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          *pcVar14 = *pcVar14 + bVar8;
          *unaff_retaddr = *unaff_retaddr + 1;
          return (byte *)CONCAT31(uVar16,bVar8 + 6);
        }
        bVar8 = *unaff_retaddr;
        *unaff_retaddr = *unaff_retaddr + 1;
        pcVar2 = (code *)swi(4);
        if (SCARRY1(bVar8,'\x01')) {
          uVar29 = (*pcVar2)();
          param_1 = extraout_ECX;
        }
        pbVar20 = (byte *)uVar29;
        *pbVar20 = *pbVar20 + (char)uVar29;
        cVar26 = (char)((ulonglong)uVar29 >> 0x20);
        puVar21 = (uint *)CONCAT22((short)((ulonglong)uVar29 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar29 >> 0x28) | unaff_EBX[0x2f],
                                            cVar26));
        *pbVar20 = *pbVar20 + (char)uVar29;
        cVar6 = (char)param_1;
        bVar7 = (byte)((uint)param_1 >> 8) | *pbVar20;
        pbVar20 = pbVar20 + *(int *)pbVar20;
        bVar8 = *unaff_EBX;
        *unaff_EBX = *unaff_EBX + bVar7;
        bVar5 = (byte)pbVar20;
        if (CARRY1(bVar8,bVar7)) {
          *pbVar20 = *pbVar20 + bVar5;
          bVar7 = bVar7 | (byte)*puVar21;
          *unaff_EBX = *unaff_EBX - cVar26;
          *pbVar20 = *pbVar20 + bVar5;
          uVar16 = (undefined3)((uint)pbVar20 >> 8);
          bVar5 = bVar5 | (byte)*puVar21;
          piVar10 = (int *)CONCAT31(uVar16,bVar5);
          pbStack_20 = pbStack_20 + *piVar10;
          *(byte *)piVar10 = (char)*piVar10 + bVar5;
          cVar26 = (char)unaff_EBX - *unaff_retaddr;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar26) + 0x5f),cVar26));
          *(byte *)piVar10 = (char)*piVar10 + bVar5;
          bVar8 = bVar5 + 0x2a & (byte)*puVar21;
          pbVar12 = pbVar12 + *(int *)(pbStack_20 + 0x5f);
          *(char *)CONCAT31(uVar16,bVar8) = *(char *)CONCAT31(uVar16,bVar8) + bVar8;
          pbVar20 = (byte *)CONCAT31(uVar16,bVar8 + 0x2a);
          *(byte *)puVar21 = (byte)*puVar21 + 0x28;
          *pbVar20 = *pbVar20 + bVar8 + 0x2a;
        }
        else {
          *unaff_retaddr = *unaff_retaddr + bVar5;
        }
        pcVar14 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar7,cVar6));
        *pbStack_20 = *pbStack_20 - bVar7;
        *(byte *)puVar21 = (byte)*puVar21 + cVar6;
        bVar8 = (byte)pbVar20 - 0xb;
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar8);
        if (10 < (byte)pbVar20) {
          *pbVar11 = *pbVar11 | bVar8;
          return pbVar11;
        }
        *(byte *)puVar21 = (byte)*puVar21 + cVar6;
        do {
          bVar8 = unaff_EBX[-0x23];
          bVar7 = (byte)pbVar11;
          *pbVar11 = *pbVar11 + bVar7;
          bVar5 = pbStack_20[-0x22];
          *pbVar11 = *pbVar11 + bVar7;
          uVar16 = (undefined3)((uint)pbVar11 >> 8);
          bVar7 = bVar7 | *unaff_retaddr;
          pbVar20 = (byte *)CONCAT31(uVar16,bVar7);
          cVar26 = (char)unaff_EBX - *unaff_retaddr;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                       CONCAT11((char)((uint)unaff_EBX >> 8) + bVar8
                                                                | bVar5,(char)unaff_EBX)) >> 8),
                                       cVar26);
          cVar6 = (char)pcVar14;
          pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                     CONCAT11((char)((uint)pcVar14 >> 8) + *pbVar20,cVar6));
          *(byte *)puVar21 = (byte)*puVar21 + cVar6;
          bVar5 = bVar7 - *pbVar20;
          pbVar11 = (byte *)CONCAT31(uVar16,bVar5);
          unaff_retaddr = unaff_retaddr + (-(uint)(bVar7 < *pbVar20) - *(int *)pbVar11);
          puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 * '\x02');
          *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
          *pbVar12 = *pbVar12 + cVar26;
          bVar8 = *pbVar11;
          *pbVar11 = *pbVar11 + bVar5;
          *puVar21 = (uint)(pbVar11 + (uint)CARRY1(bVar8,bVar5) + *puVar21);
        } while ((POPCOUNT(*puVar21 & 0xff) & 1U) != 0);
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
                                                  (unaff_retaddr[0x2000001] <
                                                  (byte)((uint)pcVar14 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar13 +
                                            (unaff_retaddr[0x2000001] < (byte)((uint)pcVar14 >> 8))
                                            + 0xda7d) | (byte)*puVar21) + 0x7d);
          pcVar14 = pcVar14 + -1;
          *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar14;
          while( true ) {
            uVar22 = (undefined3)((uint)puVar21 >> 8);
            cVar6 = (char)puVar21 + *(char *)((int)pbVar12 * 2 + 0xa0000e1);
            puVar21 = (uint *)CONCAT31(uVar22,cVar6);
            bVar28 = CARRY1((byte)pbVar11,(byte)*puVar21);
            uVar16 = (undefined3)((uint)pbVar11 >> 8);
            bVar8 = (byte)pbVar11 + (byte)*puVar21;
            pbVar11 = (byte *)CONCAT31(uVar16,bVar8);
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *pbVar11 = *pbVar11 + bVar8;
            cVar26 = (char)pcVar14;
            pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar14 >> 8) | pbVar12[-0x65],cVar26))
            ;
            bVar5 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar8;
            if (CARRY1(bVar5,bVar8)) {
              *pbVar11 = *pbVar11 + bVar8;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_20[-0x1d]
                                                    ,(char)unaff_EBX));
              *pbVar11 = *pbVar11 + bVar8;
              bVar28 = false;
              bVar8 = bVar8 | (byte)*puVar21;
              pcVar13 = (char *)CONCAT31(uVar16,bVar8);
              while( true ) {
                bVar5 = (byte)pcVar13;
                uVar16 = (undefined3)((uint)pcVar13 >> 8);
                if (bVar28 == (char)bVar8 < '\0') break;
                *pcVar13 = *pcVar13 + bVar5;
                bVar5 = bVar5 | (byte)*puVar21;
                puVar15 = (uint *)CONCAT31(uVar16,bVar5);
                *pbVar12 = *pbVar12 << 1 | (char)*pbVar12 < '\0';
                uVar4 = *puVar15;
                *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                pbStack_20 = pbStack_20 + (-(uint)CARRY1((byte)uVar4,bVar5) - *puVar15);
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
                bVar28 = SCARRY1((char)puVar21,*pbVar12);
                bVar8 = (char)puVar21 + *pbVar12;
                puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar8);
              }
              if (bVar28 == (char)bVar8 < '\0') {
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
              *(byte *)puVar21 = (byte)*puVar21 + cVar26;
              puVar21 = (uint *)CONCAT31(uVar22,cVar6 + *(char *)((int)pbVar12 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar12 = *pbVar12 + bVar8;
      bVar8 = bVar8 + 0x6f & *(byte *)CONCAT31(uVar16,bVar8 + 0x6f);
      *param_2 = *param_2 + (char)param_1;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar8;
      pcVar14 = (char *)CONCAT31(uVar16,bVar8 - *unaff_EDI);
code_r0x00403b2c:
      bVar8 = (char)pcVar14 - *pcVar14;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
      *pbVar20 = *pbVar20 + bVar8;
      *(byte **)pbVar20 = param_2 + *(int *)pbVar20;
      *pbVar20 = *pbVar20 + bVar8;
      bVar28 = CARRY1(*pbVar20,bVar8);
      *pbVar20 = *pbVar20 + bVar8;
      pbStack_24 = unaff_retaddr;
    }
  }
  *pbVar20 = *pbVar20;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_20 = pbStack_20 + -*puVar15;
  do {
    bVar8 = (byte)puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + bVar8;
    pbVar12 = pbVar12 + -*(int *)(pbStack_20 + -0x1a);
    *(byte *)puVar15 = (byte)*puVar15 + bVar8;
    bVar8 = bVar8 | (byte)*puVar21;
    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar8);
    *(byte *)puVar15 = (byte)*puVar15 | bVar8;
    bVar8 = (byte)*puVar15;
    pbStack_20 = (byte *)0x2700001;
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
          bVar7 = *unaff_EBX;
          bVar27 = (byte)uVar17;
          bVar5 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar27;
          bVar8 = *unaff_EBX;
          if (!CARRY1(bVar7,bVar27)) break;
          *(byte *)puVar15 = (byte)*puVar15 + bVar9;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar15 = (byte)*puVar15 + bVar9;
          bVar9 = bVar9 | (byte)*puVar21;
          puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar9);
          bVar28 = (POPCOUNT(bVar9) & 1U) == 0;
          while( true ) {
            cVar6 = (char)((uint)unaff_EBX >> 8);
            uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar28) {
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
                pbVar20 = (byte *)CONCAT31(uVar16,bVar7 | (byte)*puVar21);
                while( true ) {
                  *pbVar20 = *pbVar20 + (byte)pbVar20;
                  uVar16 = (undefined3)((uint)pbVar20 >> 8);
                  bVar5 = (byte)pbVar20 | (byte)*puVar21;
                  puVar15 = (uint *)CONCAT31(uVar16,bVar5);
                  if ((POPCOUNT(bVar5) & 1U) != 0) break;
                  *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                  bVar7 = pbVar12[-0x14];
                  *(byte *)puVar15 = (byte)*puVar15 + bVar5;
                  bVar5 = bVar5 | (byte)*puVar21;
                  pcVar13 = (char *)CONCAT31(uVar16,bVar5);
                  bVar9 = unaff_EBX[-0x15];
                  *pcVar13 = *pcVar13 + bVar5;
                  pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),
                                                    (byte)((uint)pcVar14 >> 8) | bVar7 |
                                                    pbVar12[-0x13]) << 8);
                  *pcVar13 = *pcVar13 + bVar5;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar9 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar13 = *pcVar13 + bVar5;
                  pbVar20 = (byte *)CONCAT31(uVar16,bVar5 | (byte)*puVar21);
                  do {
                    do {
                      bVar7 = (byte)pbVar20;
                      *pbVar20 = *pbVar20 + bVar7;
                      cVar24 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar20,
                                                            cVar24));
                      *pbVar20 = bVar7;
                      *pbVar20 = *pbVar20 + bVar7;
                      cVar26 = (char)((uint)pcVar14 >> 8) + *pbVar20;
                      pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),cVar26) << 8)
                      ;
                      uVar16 = (undefined3)((uint)pbVar20 >> 8);
                      bVar7 = bVar7 & *pbVar20;
                      pbVar20 = (byte *)CONCAT31(uVar16,bVar7);
                      bVar5 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar26;
                    } while (SCARRY1(bVar5,cVar26) == (char)*unaff_EBX < '\0');
                    *pbVar20 = *pbVar20 + bVar7;
                    bVar7 = bVar7 | (byte)*puVar21;
                    pbVar20 = (byte *)CONCAT31(uVar16,bVar7);
                    if ((POPCOUNT(bVar7) & 1U) == 0) {
                      *pbVar20 = *pbVar20 + bVar7;
                      *pbVar20 = *pbVar20 + bVar7;
                      cVar6 = cVar6 - bVar8;
                      pbVar11 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),cVar6);
                      *pbVar20 = *pbVar20 + bVar7;
                      bRam0312382b = bRam0312382b | *pbVar11;
                      while( true ) {
                        bVar5 = (byte)pbVar20;
                        *pbVar20 = *pbVar20 + bVar5;
                        bRam0312382b = bRam0312382b | (pbVar12 + 0x21b0000)[(int)pbVar20];
                        uVar16 = (undefined3)((uint)pbVar20 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar11 = *pbVar11 + bRam0312382b;
                        pbVar20 = (byte *)CONCAT31(uVar16,bVar5 | *unaff_retaddr);
                      }
                      *pbVar20 = *pbVar20 + bVar5;
                      bVar5 = bVar5 | *unaff_retaddr;
                      pcVar14 = (char *)CONCAT31(uVar16,bVar5);
                      out(*(undefined4 *)unaff_retaddr,(short)pbVar11);
                      *pcVar14 = *pcVar14 + bVar5;
                      uVar19 = CONCAT11(bVar8 | bRam6f0a002b,cVar6);
                      pcVar13 = (char *)CONCAT22(uVar18,uVar19);
                      *pcVar14 = *pcVar14 + bVar5;
                      *pcVar13 = *pcVar13 + bRam0312382b;
                      out(*(undefined4 *)(unaff_retaddr + 4),uVar19);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar24 + *pcVar14);
                  } while (SCARRY1(cVar24,*pcVar14) != (char)(cVar24 + *pcVar14) < '\0');
                }
                uVar4 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21;
              } while (SCARRY1((byte)uVar4,'\0') != (char)(byte)*puVar21 < '\0');
              *(byte *)puVar21 = (byte)*puVar21;
              *pcVar14 = *pcVar14 - (char)unaff_EBX;
              *(byte *)puVar15 = (byte)*puVar15 + bVar5;
              bVar5 = bVar5 | (byte)*puVar21;
              puVar15 = (uint *)CONCAT31(uVar16,bVar5);
              bVar28 = (POPCOUNT(bVar5) & 1U) == 0;
            } while (bVar28);
          }
        }
      } while (SCARRY1(bVar5,bVar27));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar14 >> 8);
    *pbVar12 = *pbVar12 - (char)unaff_EBX;
  } while( true );
}


