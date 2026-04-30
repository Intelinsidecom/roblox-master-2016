/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403852
 * Raw Name    : set_AreSettingsLoaded
 * Demangled   : set_AreSettingsLoaded
 * Prototype   : byte * set_AreSettingsLoaded(byte * param_1, byte * param_2)
 * Local Vars  : pbStack_14, param_2, pbStack_10, pcVar1, uVar2, param_1, uVar3, cVar4, cVar5, bVar6, bVar7, bVar8, bVar9, in_EAX, piVar10, pbVar11, pbVar12, pcVar13, pcVar14, pbVar15, pbVar16, puVar17, uVar18, uVar19, uVar20, extraout_ECX, uVar21, puVar22, uVar23, cVar24, cVar25, uVar26, unaff_EBX, cVar27, bVar28, unaff_EBP, unaff_ESI, pbVar29, unaff_EDI, in_ES, in_CS, in_DS, bVar30, uVar31, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall set_AreSettingsLoaded(byte *param_1,byte *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 in_EAX;
  undefined3 uVar18;
  int *piVar10;
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
  char cVar27;
  byte bVar28;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar29;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  ushort in_DS;
  bool bVar30;
  undefined8 uVar31;
  byte *unaff_retaddr;
  byte *pbStack_14;
  byte *pbStack_10;
  
                    /* .NET CLR Managed Code */
  cVar4 = (char)in_EAX + *unaff_EBX;
  pbVar11 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),cVar4);
  pbVar16 = param_2;
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar4 < '\0') goto code_r0x004038ae;
code_r0x00403856:
  unaff_ESI = unaff_retaddr;
  cVar4 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar4;
  uVar18 = (undefined3)((uint)pbVar11 >> 8);
  pcVar14 = (char *)CONCAT31(uVar18,cVar4 + '*');
  uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar24 = (char)unaff_EBX;
  cVar27 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55];
  *pcVar14 = *pcVar14 + cVar4 + '*';
  pcVar14 = (char *)CONCAT31(uVar18,cVar4 + 'W');
  param_2 = pbVar16 + *(int *)unaff_ESI;
  cVar27 = cVar27 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar27,cVar24)) + 0x55);
  *pcVar14 = *pcVar14 + cVar4 + 'W';
  cVar5 = cVar4 + -0x3a;
  pcVar14 = (char *)CONCAT31(uVar18,cVar5);
  *pcVar14 = *pcVar14 + cVar5;
  bVar7 = *param_2;
  cVar25 = (char)param_1;
  unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(cVar27 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar27,
                                                  cVar24)) + 0x59),cVar24));
  *pcVar14 = *pcVar14 + cVar5;
  bVar6 = cVar4 - 0x10U & *param_2;
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x59);
  *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
  bVar6 = bVar6 + 0x2a;
  pbVar11 = (byte *)CONCAT31(uVar18,bVar6);
  cVar4 = unaff_EDI[0x17];
  *pbVar11 = *pbVar11 + bVar6;
  bVar8 = *param_2;
  pbVar16 = (byte *)(uint)in_DS;
  cVar5 = unaff_EDI[0x1a];
  *pbVar11 = *pbVar11 + bVar6;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((((byte)((uint)param_1 >> 8) | bVar7) + cVar4 | bVar8) + cVar5
                                      | *param_2,cVar25));
  *unaff_EBX = *unaff_EBX + cVar24;
  *(byte *)((int)pbVar11 * 2) = *(byte *)((int)pbVar11 * 2) ^ bVar6;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar6;
  bVar8 = *pbVar11;
  *param_1 = *param_1 + (char)param_2;
  bVar7 = ((bVar6 - bVar8) - CARRY1(bVar7,bVar6)) + *param_2;
  pbVar12 = (byte *)CONCAT31(uVar18,bVar7);
  pbVar15 = pbVar16;
  if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x004038f6;
  *pbVar12 = *pbVar12 + bVar7;
  cVar4 = (bVar7 + 0x6f) - (0x90 < bVar7);
  pbVar11 = (byte *)CONCAT31(uVar18,cVar4);
  bVar7 = *param_2;
  *param_2 = *param_2 + cVar25;
  unaff_retaddr = pbVar16;
  if (SCARRY1(bVar7,cVar25) == (char)*param_2 < '\0') {
    unaff_EBP[0x2b060000] = unaff_EBP[0x2b060000] - cVar4;
    cVar4 = cVar4 + *param_2;
    pbVar12 = (byte *)CONCAT31(uVar18,cVar4);
    goto code_r0x0040390c;
  }
code_r0x004038ae:
  do {
    *pbVar11 = *pbVar11 + (char)pbVar11;
    pbVar16 = param_2;
    pbVar15 = unaff_retaddr;
    while( true ) {
      uVar18 = (undefined3)((uint)pbVar11 >> 8);
      cVar4 = (char)pbVar11 + '\x02';
      pbVar12 = (byte *)CONCAT31(uVar18,cVar4);
      if ((POPCOUNT(cVar4) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)unaff_ESI;
      cVar4 = (char)pbVar12 + *pbVar16;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar4);
      param_2 = pbVar16;
code_r0x0040390c:
      pbVar16 = param_2;
      cVar5 = (char)pbVar12;
      if ((POPCOUNT(cVar4) & 1U) != 0) {
        *unaff_ESI = *unaff_ESI + cVar5;
        goto code_r0x0040395a;
      }
      *pbVar12 = *pbVar12 + cVar5;
      bVar7 = cVar5 + 2;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
code_r0x00403912:
      bVar30 = (POPCOUNT(bVar7) & 1U) == 0;
      pbVar29 = unaff_ESI;
      if (!bVar30) goto code_r0x00403967;
      *pbVar12 = *pbVar12 + (char)pbVar12;
code_r0x00403916:
      bVar8 = (char)pbVar12 + 0x6f;
      pbVar11 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar8;
      if (*pbVar11 == 0 || SCARRY1(bVar7,bVar8) != (char)*pbVar11 < '\0') goto code_r0x00403979;
      *pbVar11 = *pbVar11 + bVar8;
      pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),(char)pbVar12 + -100);
      *(byte **)(pbVar29 + (int)unaff_EDI * 8) =
           pbVar16 + (uint)(0xd2 < bVar8) + *(int *)(pbVar29 + (int)unaff_EDI * 8);
      unaff_ESI = pbVar29;
code_r0x00403926:
      *(byte **)pbVar11 = pbVar15;
      bVar7 = *unaff_ESI;
      bVar8 = (byte)pbVar11;
      *unaff_ESI = *unaff_ESI + bVar8;
      if (CARRY1(bVar7,bVar8)) {
        *pbVar11 = *pbVar11 + bVar8;
        uVar18 = (undefined3)((uint)pbVar11 >> 8);
        bVar8 = bVar8 | pbVar11[0x400005b];
        pbVar12 = (byte *)CONCAT31(uVar18,bVar8);
        if ((char)bVar8 < '\x01') goto code_r0x00403991;
        *pbVar12 = *pbVar12 + bVar8;
        cVar4 = bVar8 + 0x28;
        pbVar12 = (byte *)CONCAT31(uVar18,cVar4);
        *(byte **)pbVar12 = pbVar12 + (uint)(0xd7 < bVar8) + *(int *)pbVar12;
        bVar7 = *unaff_EBX;
        bVar8 = (byte)((uint)param_1 >> 8);
        *unaff_EBX = *unaff_EBX + bVar8;
        if (CARRY1(bVar7,bVar8)) {
          *pbVar12 = *pbVar12 + cVar4;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar12,(char)param_1));
          *unaff_ESI = *unaff_ESI + cVar4;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                                (char)unaff_EBX));
          *pbVar12 = *pbVar12 + cVar4;
code_r0x00403950:
          uVar18 = (undefined3)((uint)pbVar12 >> 8);
          bVar8 = (char)pbVar12 + 0x6f;
          bVar7 = *(byte *)CONCAT31(uVar18,bVar8);
          *pbVar16 = *pbVar16 + (char)param_1;
          pbVar12 = (byte *)CONCAT31(uVar18,(bVar8 & bVar7) + *unaff_ESI);
          *param_1 = *param_1 - (char)((uint)pbVar16 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar12 = *pbVar12 + cVar4;
    cVar4 = (char)pbVar11 + '.' + *pbVar16;
    pbVar12 = (byte *)CONCAT31(uVar18,cVar4);
    if ((POPCOUNT(cVar4) & 1U) != 0) {
      pbVar11 = pbVar16 + (int)pbVar12;
      *pbVar11 = *pbVar11 + cVar4;
      bVar7 = *pbVar11;
      goto code_r0x00403912;
    }
    *pbVar12 = *pbVar12 + cVar4;
    bVar7 = cVar4 + 2;
    pbVar12 = (byte *)CONCAT31(uVar18,bVar7);
    pbVar29 = unaff_ESI;
    if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403916;
    *pbVar12 = *pbVar12 + bVar7;
    cVar5 = cVar4 + 'q';
    piVar10 = (int *)CONCAT31(uVar18,cVar5);
    *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0x90 < bVar7);
    bVar7 = *unaff_EBX;
    bVar8 = (byte)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + bVar8;
    if (!CARRY1(bVar7,bVar8)) {
      out(*(undefined4 *)unaff_ESI,(short)pbVar16);
      cVar4 = (cVar5 - (char)*piVar10) - CARRY1(bVar7,bVar8);
      *pbVar16 = *pbVar16 + (char)param_1;
      pbVar11 = (byte *)CONCAT31(uVar18,cVar4 - *(char *)CONCAT31(uVar18,cVar4));
      unaff_retaddr = pbVar15;
      goto code_r0x00403856;
    }
    *(char *)piVar10 = (char)*piVar10 + cVar5;
    uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar7 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56];
    *(char *)piVar10 = (char)*piVar10 + cVar5;
    pcVar14 = (char *)CONCAT31(uVar18,cVar4 + 's');
    unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar7 + *(char *)(CONCAT22(uVar20,CONCAT11(bVar7,(
                                                  char)unaff_EBX)) + 0x56),(char)unaff_EBX));
    *pcVar14 = *pcVar14 + cVar4 + 's';
    bVar7 = cVar4 - 0xf;
    *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
    bVar8 = cVar4 + 0x1e;
    pbVar11 = (byte *)CONCAT31(uVar18,bVar8);
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_1 + (uint)(0xd2 < bVar7) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    in_ES = *(undefined2 *)pbVar11;
    bVar7 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar8;
    param_2 = param_1;
    unaff_retaddr = unaff_EBP;
    if (CARRY1(bVar7,bVar8)) {
      *pbVar11 = *pbVar11 + bVar8;
      pbVar12 = (byte *)CONCAT31(uVar18,bVar8 | pbVar11[0x400005a]);
      pbVar16 = param_1;
      if ('\0' < (char)(bVar8 | pbVar11[0x400005a])) {
code_r0x004038f6:
        bVar7 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar7;
        uVar18 = (undefined3)((uint)pbVar12 >> 8);
        cVar4 = ((bVar7 + 0x28) - *(char *)CONCAT31(uVar18,bVar7 + 0x28)) - (0xd7 < bVar7);
        pbVar12 = (byte *)CONCAT31(uVar18,cVar4);
        bVar7 = *unaff_EBX;
        bVar8 = (byte)((uint)param_1 >> 8);
        *unaff_EBX = *unaff_EBX + bVar8;
        if (CARRY1(bVar7,bVar8)) {
          *pbVar12 = *pbVar12 + cVar4;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar12,(char)param_1));
          *unaff_ESI = *unaff_ESI + cVar4;
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
  cVar4 = (char)pbVar12 + '\x02';
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar4);
  bVar30 = (POPCOUNT(cVar4) & 1U) == 0;
  pbVar29 = unaff_ESI;
code_r0x00403967:
  if (!bVar30) goto code_r0x004039be;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar18 = (undefined3)((uint)pbVar12 >> 8);
  bVar7 = (char)pbVar12 + 0x6f;
  bVar7 = bVar7 & *(byte *)CONCAT31(uVar18,bVar7);
  pbVar11 = (byte *)CONCAT31(uVar18,bVar7);
  *pbVar16 = *pbVar16 + (char)param_1;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar7;
code_r0x00403979:
  bVar7 = (char)pbVar11 - *unaff_EDI;
  bVar30 = bVar7 < *param_1;
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7 - *param_1);
  do {
    cVar4 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar4 + bVar30;
    *pbVar12 = *pbVar12 + cVar4;
    *param_1 = *param_1 + (char)pbVar16;
    param_1[0x101c00aa] = param_1[0x101c00aa] + (char)unaff_EBX;
    *pbVar12 = *pbVar12 + cVar4;
    *(byte **)pbVar29 = unaff_EBX + *(int *)pbVar29;
    bVar7 = (byte)((uint)param_1 >> 8);
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11(bVar7 + *pbVar12,(char)param_1));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
    unaff_ESI = pbVar29;
code_r0x00403991:
    cVar4 = (char)param_1;
    *pbVar16 = *pbVar16 + cVar4;
    cVar5 = (char)unaff_EBX - unaff_ESI[2];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x0040395a;
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    uVar19 = (uint3)((uint)pbVar12 >> 8);
    bVar7 = (byte)pbVar12 | *unaff_EBX;
    piVar10 = (int *)CONCAT31(uVar19,bVar7);
    bVar8 = (byte)((uint)param_1 >> 8);
    bVar6 = (byte)pbVar16;
    if (bVar7 == 0) {
      *(char *)piVar10 = (char)*piVar10;
      pbVar29 = unaff_ESI + 4;
      out(*(undefined4 *)unaff_ESI,(short)pbVar16);
      pbVar12 = (byte *)((uint)uVar19 << 8);
      *pbVar16 = *pbVar16 + cVar4;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar6 - *unaff_EBX);
      *unaff_EBX = *unaff_EBX;
      *pbVar16 = *pbVar16 + bVar8;
      *pbVar12 = *pbVar12;
      *unaff_EBX = *unaff_EBX + cVar5;
      *pbVar12 = *pbVar12;
      *(byte **)(unaff_EBX + -0x3d) = pbVar29 + *(int *)(unaff_EBX + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar10 = (char)*piVar10 + bVar7;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar8 | *pbVar16,cVar4));
    pbVar29 = unaff_ESI + *piVar10;
    pcVar14 = (char *)((int)piVar10 + *piVar10);
    bVar8 = (char)pcVar14 - *pcVar14;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
    bVar7 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar8;
    pbVar12 = pbVar12 + (-(uint)CARRY1(bVar7,bVar8) - *(int *)pbVar12);
    bVar30 = CARRY1(*param_1,bVar6);
    *param_1 = *param_1 + bVar6;
  } while (!bVar30);
  *pbVar12 = *pbVar12 + (char)pbVar12;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *pbVar16);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar12 = *pbVar12 + (byte)pbVar12;
  uVar18 = (undefined3)((uint)pbVar12 >> 8);
  bVar7 = (byte)pbVar12 | *pbVar16;
  pcVar14 = (char *)CONCAT31(uVar18,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) goto code_r0x004039c8;
  cVar4 = *pcVar14;
  *pcVar14 = *pcVar14 + bVar7;
  cVar5 = *pcVar14;
  if (!SCARRY1(cVar4,bVar7)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar14 = *pcVar14 + bVar7;
  *pbVar29 = *pbVar29 + 1;
  uVar2 = *(undefined6 *)CONCAT31(uVar18,bVar7 + 6);
  pbVar11 = (byte *)uVar2;
  bVar7 = *pbVar16;
  bVar8 = (byte)param_1;
  *pbVar16 = *pbVar16 + bVar8;
  if (!CARRY1(bVar7,bVar8)) goto code_r0x00403979;
  *pbVar11 = *pbVar11 + (char)uVar2;
  bVar6 = (byte)((uint)param_1 >> 8) | *pbVar11;
  uVar20 = CONCAT11(bVar6,bVar8);
  pbVar11 = pbVar11 + -*(int *)pbVar11;
  bVar7 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + bVar6;
  if (CARRY1(bVar7,bVar6)) {
    cVar4 = (char)pbVar11;
    *pbVar11 = *pbVar11 + cVar4;
    bVar7 = *pbVar16;
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11((char)((uint)pbVar16 >> 8) - unaff_EBX[-0x3a],(char)pbVar16)
                              );
    *pbVar11 = *pbVar11 + cVar4;
    uVar21 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar28 = (byte)((uint)unaff_EBX >> 8) | pbVar16[0x32];
    pcVar14 = (char *)CONCAT22(uVar21,CONCAT11(bVar28,(char)unaff_EBX));
    pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_CS);
    cVar5 = cVar4 + *pcVar14 + '-';
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar5);
    *pbVar11 = *pbVar11;
    bVar9 = *pbVar16;
    cVar25 = (char)unaff_EBX - *pbVar29;
    cVar4 = unaff_EDI[0x17];
    *pbVar11 = *pbVar11 + cVar5;
    uVar20 = CONCAT11((bVar6 | bVar7) + cVar4 | *pbVar16,bVar8 - bVar9);
    unaff_EBX = (byte *)CONCAT22(uVar21,CONCAT11(bVar28 + *(char *)(CONCAT31((int3)((uint)pcVar14 >>
                                                                                   8),cVar25) + 0x4e
                                                                   ),cVar25));
    *pbVar11 = *pbVar11 + cVar5;
  }
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),uVar20);
  bVar7 = (byte)pbVar11;
  uVar18 = (undefined3)((uint)pbVar11 >> 8);
  pcVar14 = (char *)CONCAT31(uVar18,bVar7 + 0x28);
  *pcVar14 = (*pcVar14 - (bVar7 + 0x28)) - (0xd7 < bVar7);
  *pbVar16 = *pbVar16 + (char)uVar20;
  bVar8 = bVar7 + 0x1b;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4f],
                                        (char)unaff_EBX));
  *(char *)CONCAT31(uVar18,bVar8) = *(char *)CONCAT31(uVar18,bVar8) + bVar8;
  pcVar13 = (char *)CONCAT31(uVar18,bVar7 + 0x43);
  *pcVar13 = (*pcVar13 - (bVar7 + 0x43)) - (0xd7 < bVar8);
  *pbVar16 = *pbVar16 + (char)uVar20;
  pcVar14 = pcVar13 + -0x6b721c;
  pcVar13 = pcVar13 + -0x6b721a;
  *pcVar13 = *pcVar13 + (char)((uint)pbVar16 >> 8);
  cVar5 = *pcVar13;
code_r0x00403a22:
  if ((POPCOUNT(cVar5) & 1U) == 0) {
code_r0x00403a24:
    cVar4 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar4;
    uVar18 = (undefined3)((uint)pcVar14 >> 8);
    bVar7 = cVar4 + 2;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
      piVar10 = (int *)CONCAT31(uVar18,cVar4 + '*');
      *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0xd7 < bVar7);
      bVar7 = *pbVar16;
      bVar9 = (byte)param_1;
      *pbVar16 = *pbVar16 + bVar9;
      out(*(undefined4 *)pbVar29,(short)pbVar16);
      bVar6 = ((cVar4 + '*') - (char)*piVar10) - CARRY1(bVar7,bVar9);
      pbVar11 = (byte *)CONCAT31(uVar18,bVar6);
      *pbVar16 = *pbVar16 + bVar9;
      uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar26 = SUB41(unaff_EBX,0);
      cVar4 = (char)((uint)unaff_EBX >> 8) - pbVar29[0x1f];
      unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(cVar4,uVar26));
      *pbVar11 = *pbVar11 + bVar6;
      bVar8 = *pbVar16;
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar6;
      pbVar29 = pbVar29 + ((4 - *(int *)pbVar11) - (uint)CARRY1(bVar7,bVar6));
      pbVar11 = (byte *)CONCAT31(uVar18,bVar6);
      param_1 = (byte *)(CONCAT22((short)((uint)param_1 >> 0x10),
                                  CONCAT11((byte)((uint)param_1 >> 8) | bVar8,bVar9)) + -1);
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar6;
      bVar7 = (bVar6 - *pbVar11) - CARRY1(bVar7,bVar6);
      *param_1 = *param_1 + (char)pbVar16;
      bVar30 = CARRY1(bVar7,*pbVar16);
      bVar7 = bVar7 + *pbVar16;
      pbVar11 = (byte *)CONCAT31(uVar18,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar7;
        cVar5 = (bVar7 + 0x6f) - (0x90 < bVar7);
        pbVar15 = (byte *)CONCAT31(uVar18,cVar5);
        bVar7 = *pbVar16;
        *pbVar16 = *pbVar16 + (char)param_1;
        if (SCARRY1(bVar7,(char)param_1) == (char)*pbVar16 < '\0') goto code_r0x00403aaf;
        *pbVar15 = *pbVar15 + cVar5;
        pcVar14 = (char *)CONCAT31(uVar18,cVar5 + '\x02');
        bVar8 = cVar4 + unaff_EBX[0x52];
        unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar8,uVar26));
        *pcVar14 = *pcVar14 + cVar5 + '\x02';
        bVar7 = cVar5 + 4;
        pbVar15 = (byte *)CONCAT31(uVar18,bVar7);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pbVar15 = *pbVar15 + bVar7;
          cVar4 = (cVar5 + 's') - (0x90 < bVar7);
          pcVar14 = (char *)CONCAT31(uVar18,cVar4);
          bVar7 = (byte)((uint)param_1 >> 8);
          bVar30 = CARRY1(*unaff_EBX,bVar7);
          *unaff_EBX = *unaff_EBX + bVar7;
          pbVar11 = pbVar29;
          if (bVar30) {
            *pcVar14 = *pcVar14 + cVar4;
            unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar8 | unaff_EBP[0x5c],uVar26));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar15;
        unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar8 + unaff_EBX[0x52],uVar26));
code_r0x00403abf:
        *pbVar15 = *pbVar15 + (char)pbVar15;
        cVar4 = (char)pbVar15 + '\x02';
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar4);
        bVar30 = (POPCOUNT(cVar4) & 1U) == 0;
        pbStack_10 = unaff_EBP;
        if (!bVar30) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar30) {
          *pbVar11 = *pbVar11 + (byte)pbVar11;
          bVar7 = (byte)pbVar11 | pbVar11[0x400005e];
          pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
          pbStack_10 = unaff_EBP;
          if ((char)bVar7 < '\x01') goto code_r0x00403b0b;
          *pbVar15 = *pbVar15 + bVar7;
code_r0x00403aaf:
          cVar4 = (char)pbVar15 + '(';
          pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar4);
          *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
          bVar7 = *unaff_EBX;
          bVar8 = (byte)((uint)param_1 >> 8);
          *unaff_EBX = *unaff_EBX + bVar8;
          pbVar12 = unaff_EBP;
          if (!CARRY1(bVar7,bVar8)) goto code_r0x00403ad8;
          *pbVar15 = *pbVar15 + cVar4;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar8 | *unaff_EBX,(char)param_1));
          if ((POPCOUNT(*pbVar16 - cVar4) & 1U) != 0) {
            *pbVar29 = *pbVar29 + cVar4;
            pbStack_10 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                              (char)unaff_EBX));
      }
      bVar7 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar7;
      cVar4 = (bVar7 + 0x6f) - (0x90 < bVar7);
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar4);
      bVar7 = *unaff_EBX;
      cVar5 = (char)((uint)param_1 >> 8);
      *unaff_EBX = *unaff_EBX + cVar5;
      pbStack_10 = unaff_EBP;
      if (*unaff_EBX == 0 || SCARRY1(bVar7,cVar5) != (char)*unaff_EBX < '\0') goto code_r0x00403b2c;
      *pcVar14 = *pcVar14 + cVar4;
    }
    else {
      pcVar14 = (char *)CONCAT31(uVar18,bVar7 + *pbVar16);
      pbVar11 = pbVar29;
      if ((POPCOUNT(bVar7 + *pbVar16) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbVar29 + (int)unaff_EDI * 8) =
         pbVar16 + (uint)(0xd2 < (byte)pcVar14) + *(int *)(pbVar29 + (int)unaff_EDI * 8);
    pbVar15 = unaff_EBP;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 + 0x2d);
code_r0x00403ad8:
    pbStack_10 = pbVar12;
    bVar7 = *pbVar15;
    bVar8 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar8;
    pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
    if (!CARRY1(bVar7,bVar8)) goto code_r0x00403afc;
    *pbVar15 = *pbVar15 + bVar8;
    bVar8 = bVar8 | pbVar15[0x400005d];
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar8);
    pbVar11 = pbVar29;
    if ((char)bVar8 < '\x01') {
      *pbVar15 = *pbVar15 + bVar8;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *pbVar16,(char)param_1));
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                            (char)unaff_EBX));
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar15 = *pbVar15 + (char)pbVar15;
    cVar4 = (char)pbVar15 + '(';
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar4);
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    bVar7 = *unaff_EBX;
    bVar8 = (byte)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + bVar8;
    pbVar29 = pbVar11;
    if (!CARRY1(bVar7,bVar8)) goto code_r0x00403b0b;
    *pbVar15 = *pbVar15 + cVar4;
  }
  else {
    bVar7 = *pbVar16;
    *pbVar16 = *pbVar16 + (char)param_1;
    if (SCARRY1(bVar7,(char)param_1) == (char)*pbVar16 < '\0') {
      pbVar15 = unaff_EBP;
      pbVar12 = (byte *)(pcVar14 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x02');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                          (char)unaff_EBX));
    pbVar11 = pbVar29;
code_r0x00403a7d:
    cVar4 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar4;
    uVar18 = (undefined3)((uint)pcVar14 >> 8);
    cVar5 = cVar4 + '-';
    pbVar12 = (byte *)CONCAT31(uVar18,cVar5);
    pbVar15 = unaff_EBP;
    pbVar29 = pbVar11;
    if ((POPCOUNT(cVar5 - *pbVar16) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar12 = *pbVar12 + cVar5;
    bVar7 = cVar4 + 0x2f;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + (byte)param_1;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar7,(byte)param_1);
      pbVar15 = (byte *)CONCAT31(uVar18,cVar4 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
    bVar30 = 0x90 < bVar7;
    pcVar14 = (char *)CONCAT31(uVar18,cVar4 + -0x62);
code_r0x00403a8f:
    uVar18 = (undefined3)((uint)pcVar14 >> 8);
    bVar8 = (char)pcVar14 - bVar30;
    pbVar15 = (byte *)CONCAT31(uVar18,bVar8);
    bVar7 = *unaff_EBX;
    cVar4 = (char)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + cVar4;
    pbStack_10 = unaff_EBP;
    pbVar29 = pbVar11;
    if (*unaff_EBX != 0 && SCARRY1(bVar7,cVar4) == (char)*unaff_EBX < '\0') {
      *pbVar15 = *pbVar15 + bVar8;
      pbVar29 = (byte *)CONCAT31(uVar18,bVar8 + 0x2d);
      *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
           pbVar16 + (uint)(0xd2 < bVar8) + *(int *)(pbVar11 + (int)unaff_EDI * 8);
      bVar30 = CARRY1(*pbVar11,(byte)pbVar11);
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      goto code_r0x00403aa1;
    }
  }
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *pbVar15,(char)param_1));
  *pbVar29 = *pbVar29 + (char)pbVar15;
code_r0x00403afc:
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar15 = *pbVar15 + (char)pbVar15;
  uVar18 = (undefined3)((uint)pbVar15 >> 8);
  bVar8 = (char)pbVar15 + 0x6f;
  bVar7 = *(byte *)CONCAT31(uVar18,bVar8);
  *pbVar16 = *pbVar16 + (char)param_1;
  pbVar15 = (byte *)CONCAT31(uVar18,(bVar8 & bVar7) + *pbVar29);
  *param_1 = *param_1 - (char)((uint)pbVar16 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar15 = *pbVar15 + (byte)pbVar15;
    bVar7 = (byte)pbVar15 | *unaff_EBX;
    piVar10 = (int *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7);
    if (bVar7 != 0) {
      pbStack_10 = pbStack_10 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar10 = (char)*piVar10 + bVar7;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *pbVar16,(char)param_1));
      pbStack_14 = pbStack_14 + *piVar10;
      pcVar14 = (char *)((int)piVar10 + *piVar10);
      uVar18 = (undefined3)((uint)pcVar14 >> 8);
      bVar8 = (char)pcVar14 - *pcVar14;
      pbVar11 = (byte *)CONCAT31(uVar18,bVar8);
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar8;
      piVar10 = (int *)CONCAT31(uVar18,bVar8 - CARRY1(bVar7,bVar8));
    }
    *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
    pbVar29 = pbStack_14 + 4;
    out(*(undefined4 *)pbStack_14,(short)pbVar16);
    pbVar15 = (byte *)(((uint)piVar10 >> 8) * 0x100);
    *pbVar16 = *pbVar16 + (byte)param_1;
    bVar7 = (char)pbVar16 - *unaff_EBX;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
    *unaff_EBX = *unaff_EBX;
    *pbVar16 = *pbVar16 + (char)((uint)param_1 >> 8);
    *pbVar15 = *pbVar15;
    pcVar14 = (char *)(((uint)piVar10 >> 8) * 0x200);
    *pcVar14 = *pcVar14 + (char)unaff_EBX;
    bVar30 = CARRY1(*param_1,bVar7);
    *param_1 = *param_1 + bVar7;
    pbStack_14 = pbVar29;
    if (bVar30) break;
    while( true ) {
      *(byte **)pbVar15 = pbVar15 + (uint)bVar30 + *(int *)pbVar15;
      unaff_EDI = unaff_EDI + 4;
      pbVar15[(int)pbVar16] = pbVar15[(int)pbVar16] + (char)unaff_EBX;
      *pbVar15 = *pbVar15 + (char)pbVar15;
      *(byte **)pbStack_14 = unaff_EBX + *(int *)pbStack_14;
      bVar7 = (byte)((uint)param_1 >> 8);
      cVar4 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar7 + *pbVar15,cVar4));
      pbVar15 = pbVar15 + (uint)CARRY1(bVar7,*pbVar15) + *(int *)pbVar15;
      *pbVar16 = *pbVar16 + cVar4;
      cVar4 = (char)unaff_EBX - pbStack_14[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar4);
      pbVar29 = pbStack_14;
      if ((POPCOUNT(cVar4) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar15 = *pbVar15 + (char)pbVar15;
      pbVar16[0x16060000] = pbVar16[0x16060000] - (char)param_1;
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)pbVar29);
      cVar4 = (char)pbVar15 + '\x02';
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar4);
      bVar30 = (POPCOUNT(cVar4) & 1U) == 0;
code_r0x00403b18:
      bVar7 = (byte)pbVar11;
      uVar18 = (undefined3)((uint)pbVar11 >> 8);
      if (!bVar30) {
        *pbVar16 = *pbVar16 + (char)param_1;
        pbVar15 = (byte *)CONCAT31(uVar18,bVar7 | *pbVar29);
code_r0x00403b73:
        pbVar11 = (byte *)(unaff_EDI + *(int *)(pbStack_10 + -0x37));
        *pbVar15 = *pbVar15 + (byte)pbVar15;
        uVar18 = (undefined3)((uint)pbVar15 >> 8);
        bVar7 = (byte)pbVar15 | *pbVar16;
        pcVar14 = (char *)CONCAT31(uVar18,bVar7);
        uVar31 = CONCAT44(pbVar16,pcVar14);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pcVar14 = *pcVar14 + bVar7;
          *pbVar29 = *pbVar29 + 1;
          return (byte *)CONCAT31(uVar18,bVar7 + 6);
        }
        bVar7 = *pbVar29;
        *pbVar29 = *pbVar29 + 1;
        pcVar1 = (code *)swi(4);
        if (SCARRY1(bVar7,'\x01')) {
          uVar31 = (*pcVar1)();
          param_1 = extraout_ECX;
        }
        pbVar16 = (byte *)uVar31;
        *pbVar16 = *pbVar16 + (char)uVar31;
        cVar5 = (char)((ulonglong)uVar31 >> 0x20);
        puVar22 = (uint *)CONCAT22((short)((ulonglong)uVar31 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar31 >> 0x28) | unaff_EBX[0x2f],
                                            cVar5));
        *pbVar16 = *pbVar16 + (char)uVar31;
        cVar4 = (char)param_1;
        bVar6 = (byte)((uint)param_1 >> 8) | *pbVar16;
        pbVar16 = pbVar16 + *(int *)pbVar16;
        bVar7 = *unaff_EBX;
        *unaff_EBX = *unaff_EBX + bVar6;
        bVar8 = (byte)pbVar16;
        if (CARRY1(bVar7,bVar6)) {
          *pbVar16 = *pbVar16 + bVar8;
          bVar6 = bVar6 | (byte)*puVar22;
          *unaff_EBX = *unaff_EBX - cVar5;
          *pbVar16 = *pbVar16 + bVar8;
          uVar18 = (undefined3)((uint)pbVar16 >> 8);
          bVar8 = bVar8 | (byte)*puVar22;
          piVar10 = (int *)CONCAT31(uVar18,bVar8);
          pbStack_10 = pbStack_10 + *piVar10;
          *(byte *)piVar10 = (char)*piVar10 + bVar8;
          cVar5 = (char)unaff_EBX - *pbVar29;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar5) + 0x5f),cVar5));
          *(byte *)piVar10 = (char)*piVar10 + bVar8;
          bVar7 = bVar8 + 0x2a & (byte)*puVar22;
          pbVar11 = pbVar11 + *(int *)(pbStack_10 + 0x5f);
          *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
          pbVar16 = (byte *)CONCAT31(uVar18,bVar7 + 0x2a);
          *(byte *)puVar22 = (byte)*puVar22 + 0x28;
          *pbVar16 = *pbVar16 + bVar7 + 0x2a;
        }
        else {
          *pbVar29 = *pbVar29 + bVar8;
        }
        pcVar14 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6,cVar4));
        *pbStack_10 = *pbStack_10 - bVar6;
        *(byte *)puVar22 = (byte)*puVar22 + cVar4;
        bVar7 = (byte)pbVar16 - 0xb;
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
        if (10 < (byte)pbVar16) {
          *pbVar15 = *pbVar15 | bVar7;
          return pbVar15;
        }
        *(byte *)puVar22 = (byte)*puVar22 + cVar4;
        do {
          bVar7 = unaff_EBX[-0x23];
          bVar6 = (byte)pbVar15;
          *pbVar15 = *pbVar15 + bVar6;
          bVar8 = pbStack_10[-0x22];
          *pbVar15 = *pbVar15 + bVar6;
          uVar18 = (undefined3)((uint)pbVar15 >> 8);
          bVar6 = bVar6 | *pbVar29;
          pbVar16 = (byte *)CONCAT31(uVar18,bVar6);
          cVar5 = (char)unaff_EBX - *pbVar29;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                       CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7
                                                                | bVar8,(char)unaff_EBX)) >> 8),
                                       cVar5);
          cVar4 = (char)pcVar14;
          pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                     CONCAT11((char)((uint)pcVar14 >> 8) + *pbVar16,cVar4));
          *(byte *)puVar22 = (byte)*puVar22 + cVar4;
          bVar8 = bVar6 - *pbVar16;
          pbVar15 = (byte *)CONCAT31(uVar18,bVar8);
          pbVar29 = pbVar29 + (-(uint)(bVar6 < *pbVar16) - *(int *)pbVar15);
          puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 * '\x02');
          *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
          *pbVar11 = *pbVar11 + cVar5;
          bVar7 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar8;
          *puVar22 = (uint)(pbVar15 + (uint)CARRY1(bVar7,bVar8) + *puVar22);
        } while ((POPCOUNT(*puVar22 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar15 = *pbVar15 + (char)pbVar15;
        pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 | pbVar15[(int)pcVar14])
        ;
        bVar30 = false;
        pbVar15 = (byte *)((uint)pbVar15 & 0xffffff00);
        do {
          pbVar11 = pbVar11 + (-(uint)bVar30 - *(int *)unaff_EBX);
          pcVar13 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),*pcVar14);
          *pcVar13 = *pcVar13 + *pcVar14;
          pbVar15 = (byte *)CONCAT31((int3)((uint)(pcVar13 +
                                                  (pbVar29[0x2000001] < (byte)((uint)pcVar14 >> 8))
                                                  + 0xda7d) >> 8),
                                     ((byte)(pcVar13 +
                                            (pbVar29[0x2000001] < (byte)((uint)pcVar14 >> 8)) +
                                            0xda7d) | (byte)*puVar22) + 0x7d);
          pcVar14 = pcVar14 + -1;
          *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar14;
          while( true ) {
            uVar23 = (undefined3)((uint)puVar22 >> 8);
            cVar4 = (char)puVar22 + *(char *)((int)pbVar11 * 2 + 0xa0000e1);
            puVar22 = (uint *)CONCAT31(uVar23,cVar4);
            bVar30 = CARRY1((byte)pbVar15,(byte)*puVar22);
            uVar18 = (undefined3)((uint)pbVar15 >> 8);
            bVar7 = (byte)pbVar15 + (byte)*puVar22;
            pbVar15 = (byte *)CONCAT31(uVar18,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *pbVar15 = *pbVar15 + bVar7;
            cVar5 = (char)pcVar14;
            pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar14 >> 8) | pbVar11[-0x65],cVar5));
            bVar8 = *pbVar15;
            *pbVar15 = *pbVar15 + bVar7;
            if (CARRY1(bVar8,bVar7)) {
              *pbVar15 = *pbVar15 + bVar7;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_10[-0x1d]
                                                    ,(char)unaff_EBX));
              *pbVar15 = *pbVar15 + bVar7;
              bVar30 = false;
              bVar7 = bVar7 | (byte)*puVar22;
              pcVar13 = (char *)CONCAT31(uVar18,bVar7);
              while( true ) {
                bVar8 = (byte)pcVar13;
                uVar18 = (undefined3)((uint)pcVar13 >> 8);
                if (bVar30 == (char)bVar7 < '\0') break;
                *pcVar13 = *pcVar13 + bVar8;
                bVar8 = bVar8 | (byte)*puVar22;
                puVar17 = (uint *)CONCAT31(uVar18,bVar8);
                *pbVar11 = *pbVar11 << 1 | (char)*pbVar11 < '\0';
                uVar3 = *puVar17;
                *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                pbStack_10 = pbStack_10 + (-(uint)CARRY1((byte)uVar3,bVar8) - *puVar17);
                *puVar17 = *puVar17 << 1 | (uint)((int)*puVar17 < 0);
                while( true ) {
                  uVar3 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22 + (byte)pcVar14;
                  cVar4 = (char)puVar17 + 'o' + CARRY1((byte)uVar3,(byte)pcVar14);
                  pcVar13 = (char *)CONCAT31((int3)((uint)puVar17 >> 8),cVar4);
                  pcVar14 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar4) & 1U) != 0) break;
                  *pcVar13 = *pcVar13 + cVar4;
                  bVar7 = bRamfe140212;
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
                      pcVar14 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar7 | (byte)*puVar17) << 8);
                      *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                    puVar17 = (uint *)CONCAT31(uVar18,bVar8 | (byte)*puVar22);
                  }
                }
                *(byte *)puVar22 = (byte)*puVar22;
                bVar30 = SCARRY1((char)puVar22,*pbVar11);
                bVar7 = (char)puVar22 + *pbVar11;
                puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar7);
              }
              if (bVar30 == (char)bVar7 < '\0') {
                *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar14;
                pbVar15 = (byte *)((uint)pcVar13 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar13 = *pcVar13 + bVar8;
              pbVar15 = (byte *)CONCAT31(uVar18,(bVar8 | (byte)*puVar22) + 0x7d);
              pcVar14 = pcVar14 + -1;
              *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar14;
            }
            else {
              *(byte *)puVar22 = (byte)*puVar22 + cVar5;
              puVar22 = (uint *)CONCAT31(uVar23,cVar4 + *(char *)((int)pbVar11 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar11 = *pbVar11 + bVar7;
      bVar7 = bVar7 + 0x6f & *(byte *)CONCAT31(uVar18,bVar7 + 0x6f);
      *pbVar16 = *pbVar16 + (char)param_1;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar7;
      pcVar14 = (char *)CONCAT31(uVar18,bVar7 - *unaff_EDI);
code_r0x00403b2c:
      bVar7 = (char)pcVar14 - *pcVar14;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar7);
      *pbVar15 = *pbVar15 + bVar7;
      *(byte **)pbVar15 = pbVar16 + *(int *)pbVar15;
      *pbVar15 = *pbVar15 + bVar7;
      bVar30 = CARRY1(*pbVar15,bVar7);
      *pbVar15 = *pbVar15 + bVar7;
      pbStack_14 = pbVar29;
    }
  }
  *pbVar15 = *pbVar15;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *pbVar16);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_10 = pbStack_10 + -*puVar17;
  do {
    bVar7 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar7;
    pbVar11 = pbVar11 + -*(int *)(pbStack_10 + -0x1a);
    *(byte *)puVar17 = (byte)*puVar17 + bVar7;
    bVar7 = bVar7 | (byte)*puVar22;
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar7);
    *(byte *)puVar17 = (byte)*puVar17 | bVar7;
    bVar7 = (byte)*puVar17;
    pbStack_10 = (byte *)0x2700001;
    while ((POPCOUNT(bVar7) & 1U) == 0) {
      do {
        *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar17;
        bVar7 = (byte)puVar17 | (byte)*puVar22;
        puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar7);
        if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
        uVar19 = CONCAT21((short)((uint)pcVar14 >> 0x10),(byte)((uint)pcVar14 >> 8) | bRamfe140212);
        while( true ) {
          pcVar14 = (char *)((uint)uVar19 << 8);
          bVar9 = (byte)puVar17;
          *(byte *)puVar17 = (byte)*puVar17 & bVar9;
          bVar8 = *unaff_EBX;
          bVar28 = (byte)uVar19;
          bVar6 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar28;
          bVar7 = *unaff_EBX;
          if (!CARRY1(bVar8,bVar28)) break;
          *(byte *)puVar17 = (byte)*puVar17 + bVar9;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar17 = (byte)*puVar17 + bVar9;
          bVar9 = bVar9 | (byte)*puVar22;
          puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar9);
          bVar30 = (POPCOUNT(bVar9) & 1U) == 0;
          while( true ) {
            cVar4 = (char)((uint)unaff_EBX >> 8);
            uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar30) {
              *(byte *)puVar22 = (byte)*puVar22;
              unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(cVar4 + unaff_EBX[-0x1f],(char)unaff_EBX)
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
            bVar7 = (char)puVar17 - bVar8;
            pcVar14 = (char *)CONCAT31(uVar18,bVar7);
            *pcVar14 = *pcVar14 + bVar7;
            bVar7 = bVar7 | (byte)*puVar22;
            puVar17 = (uint *)CONCAT31(uVar18,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *(byte *)puVar17 = (byte)*puVar17 + bVar7;
            pcVar14 = (char *)((uint)CONCAT21(uVar21,bVar8 | (byte)*puVar17) << 8);
            *puVar17 = *puVar17 - (int)puVar17;
            *(byte *)puVar22 = (byte)*puVar22;
            unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(cVar4 + unaff_EBX[-0x1d],(char)unaff_EBX));
            do {
              *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
              uVar20 = (undefined2)((uint)puVar22 >> 0x10);
              cVar4 = (char)puVar22;
              bVar7 = (byte)((uint)puVar22 >> 8) | unaff_EBX[-0x17];
              puVar22 = (uint *)CONCAT22(uVar20,CONCAT11(bVar7,cVar4));
              *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar17;
                uVar18 = (undefined3)((uint)puVar17 >> 8);
                bVar6 = (byte)puVar17 | (byte)*puVar22;
                pcVar13 = (char *)CONCAT31(uVar18,bVar6);
                bVar8 = unaff_EBX[-0x16];
                *pcVar13 = *pcVar13 + bVar6;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar8 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar13 = *pcVar13 + bVar6;
                pbVar16 = (byte *)CONCAT31(uVar18,bVar6 | (byte)*puVar22);
                while( true ) {
                  *pbVar16 = *pbVar16 + (byte)pbVar16;
                  uVar18 = (undefined3)((uint)pbVar16 >> 8);
                  bVar8 = (byte)pbVar16 | (byte)*puVar22;
                  puVar17 = (uint *)CONCAT31(uVar18,bVar8);
                  if ((POPCOUNT(bVar8) & 1U) != 0) break;
                  *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                  bVar6 = pbVar11[-0x14];
                  *(byte *)puVar17 = (byte)*puVar17 + bVar8;
                  bVar8 = bVar8 | (byte)*puVar22;
                  pcVar13 = (char *)CONCAT31(uVar18,bVar8);
                  bVar9 = unaff_EBX[-0x15];
                  *pcVar13 = *pcVar13 + bVar8;
                  pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),
                                                    (byte)((uint)pcVar14 >> 8) | bVar6 |
                                                    pbVar11[-0x13]) << 8);
                  *pcVar13 = *pcVar13 + bVar8;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar9 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar13 = *pcVar13 + bVar8;
                  pbVar16 = (byte *)CONCAT31(uVar18,bVar8 | (byte)*puVar22);
                  do {
                    do {
                      bVar6 = (byte)pbVar16;
                      *pbVar16 = *pbVar16 + bVar6;
                      cVar25 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar16,
                                                            cVar25));
                      *pbVar16 = bVar6;
                      *pbVar16 = *pbVar16 + bVar6;
                      cVar5 = (char)((uint)pcVar14 >> 8) + *pbVar16;
                      pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),cVar5) << 8);
                      uVar18 = (undefined3)((uint)pbVar16 >> 8);
                      bVar6 = bVar6 & *pbVar16;
                      pbVar16 = (byte *)CONCAT31(uVar18,bVar6);
                      bVar8 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar5;
                    } while (SCARRY1(bVar8,cVar5) == (char)*unaff_EBX < '\0');
                    *pbVar16 = *pbVar16 + bVar6;
                    bVar6 = bVar6 | (byte)*puVar22;
                    pbVar16 = (byte *)CONCAT31(uVar18,bVar6);
                    if ((POPCOUNT(bVar6) & 1U) == 0) {
                      *pbVar16 = *pbVar16 + bVar6;
                      *pbVar16 = *pbVar16 + bVar6;
                      cVar4 = cVar4 - bVar7;
                      pbVar15 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),cVar4);
                      *pbVar16 = *pbVar16 + bVar6;
                      bRam0312382b = bRam0312382b | *pbVar15;
                      while( true ) {
                        bVar8 = (byte)pbVar16;
                        *pbVar16 = *pbVar16 + bVar8;
                        bRam0312382b = bRam0312382b | (pbVar11 + 0x21b0000)[(int)pbVar16];
                        uVar18 = (undefined3)((uint)pbVar16 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar15 = *pbVar15 + bRam0312382b;
                        pbVar16 = (byte *)CONCAT31(uVar18,bVar8 | *pbVar29);
                      }
                      *pbVar16 = *pbVar16 + bVar8;
                      bVar8 = bVar8 | *pbVar29;
                      pcVar14 = (char *)CONCAT31(uVar18,bVar8);
                      out(*(undefined4 *)pbVar29,(short)pbVar15);
                      *pcVar14 = *pcVar14 + bVar8;
                      uVar21 = CONCAT11(bVar7 | bRam6f0a002b,cVar4);
                      pcVar13 = (char *)CONCAT22(uVar20,uVar21);
                      *pcVar14 = *pcVar14 + bVar8;
                      *pcVar13 = *pcVar13 + bRam0312382b;
                      out(*(undefined4 *)(pbVar29 + 4),uVar21);
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
              bVar30 = (POPCOUNT(bVar8) & 1U) == 0;
            } while (bVar30);
          }
        }
      } while (SCARRY1(bVar6,bVar28));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar14 >> 8);
    *pbVar11 = *pbVar11 - (char)unaff_EBX;
  } while( true );
}


