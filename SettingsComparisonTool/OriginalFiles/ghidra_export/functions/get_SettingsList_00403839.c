/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403839
 * Raw Name    : get_SettingsList
 * Demangled   : get_SettingsList
 * Prototype   : byte * get_SettingsList(byte * param_1, byte * param_2)
 * Local Vars  : cVar27, bVar28, unaff_EBP, unaff_EDI, in_ES, in_CS, in_DS, bVar29, uVar30, param_1, param_2, pbStack_28, pbStack_24, pbStack_14, pbStack_4, iVar1, iVar2, pcVar3, uVar4, uVar5, bVar6, bVar7, cVar8, bVar9, bVar10, in_EAX, piVar11, pbVar12, pbVar13, pcVar14, pcVar15, puVar16, uVar17, uVar18, uVar19, extraout_ECX, uVar20, pbVar21, puVar22, uVar23, cVar24, cVar25, uVar26, unaff_EBX
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall get_SettingsList(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined6 uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  char *in_EAX;
  undefined3 uVar17;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint3 uVar18;
  char *pcVar14;
  char *pcVar15;
  uint *puVar16;
  undefined2 uVar19;
  byte *extraout_ECX;
  undefined2 uVar20;
  byte *pbVar21;
  uint *puVar22;
  undefined3 uVar23;
  char cVar24;
  char cVar25;
  undefined1 uVar26;
  char cVar27;
  byte bVar28;
  byte *unaff_EBX;
  byte *unaff_EBP;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_DS;
  bool bVar29;
  undefined8 uVar30;
  byte *pbStack_28;
  byte *pbStack_24;
  byte *pbStack_14;
  byte *pbStack_4;
  
code_r0x00403839:
                    /* .NET CLR Managed Code */
  uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar24 = (char)unaff_EBX;
  cVar27 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x57];
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar17 = (undefined3)((uint)in_EAX >> 8);
  bVar6 = (char)in_EAX + 0x2aU & *param_2;
  iVar1 = *(int *)(unaff_EBP + 0x57);
  *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
  pcVar15 = (char *)CONCAT31(uVar17,bVar6 + 0x2a);
  pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_DS);
  cVar27 = cVar27 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar27,cVar24)) + 0x58);
  *pcVar15 = *pcVar15 + bVar6 + 0x2a;
  bVar7 = bVar6 + 0x54 & *param_2;
  iVar2 = *(int *)(unaff_EBP + 0x58);
  *(char *)CONCAT31(uVar17,bVar7) = *(char *)CONCAT31(uVar17,bVar7) + bVar7;
  pcVar15 = (char *)CONCAT31(uVar17,bVar7 + 0x2a);
  cVar27 = cVar27 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar27,cVar24)) + 0x55);
  *pcVar15 = *pcVar15 + bVar7 + 0x2a;
  pcVar15 = (char *)CONCAT31(uVar17,bVar7 + 0x57);
  pbVar21 = param_2 + *(int *)pbStack_4;
  cVar27 = cVar27 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar27,cVar24)) + 0x55);
  *pcVar15 = *pcVar15 + bVar7 + 0x57;
  cVar8 = bVar7 - 0x3a;
  pcVar15 = (char *)CONCAT31(uVar17,cVar8);
  *pcVar15 = *pcVar15 + cVar8;
  bVar6 = *pbVar21;
  cVar25 = (char)param_1;
  unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar27 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar27,
                                                  cVar24)) + 0x59),cVar24));
  *pcVar15 = *pcVar15 + cVar8;
  bVar9 = bVar7 - 0x10 & *pbVar21;
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x59) + iVar2 + iVar1;
  *(char *)CONCAT31(uVar17,bVar9) = *(char *)CONCAT31(uVar17,bVar9) + bVar9;
  bVar9 = bVar9 + 0x2a;
  pbVar13 = (byte *)CONCAT31(uVar17,bVar9);
  cVar8 = unaff_EDI[0x17];
  *pbVar13 = *pbVar13 + bVar9;
  bVar7 = *pbVar21;
  pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_DS);
  cVar27 = unaff_EDI[0x1a];
  *pbVar13 = *pbVar13 + bVar9;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((((byte)((uint)param_1 >> 8) | bVar6) + cVar8 | bVar7) +
                                      cVar27 | *pbVar21,cVar25));
  *unaff_EBX = *unaff_EBX + cVar24;
  *(byte *)((int)pbVar13 * 2) = *(byte *)((int)pbVar13 * 2) ^ bVar9;
  bVar6 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar9;
  bVar7 = *pbVar13;
  *param_1 = *param_1 + (char)pbVar21;
  bVar6 = ((bVar9 - bVar7) - CARRY1(bVar6,bVar9)) + *pbVar21;
  pbVar13 = (byte *)CONCAT31(uVar17,bVar6);
  param_2 = pbStack_14;
  if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x004038f6;
  *pbVar13 = *pbVar13 + bVar6;
  cVar8 = (bVar6 + 0x6f) - (0x90 < bVar6);
  pbVar12 = (byte *)CONCAT31(uVar17,cVar8);
  bVar6 = *pbVar21;
  *pbVar21 = *pbVar21 + cVar25;
  param_2 = pbVar21;
  if (SCARRY1(bVar6,cVar25) == (char)*pbVar21 < '\0') {
    unaff_EBP[0x2b060000] = unaff_EBP[0x2b060000] - cVar8;
    cVar8 = cVar8 + *pbVar21;
    pbVar13 = (byte *)CONCAT31(uVar17,cVar8);
    goto code_r0x0040390c;
  }
  do {
    *pbVar12 = *pbVar12 + (char)pbVar12;
    while( true ) {
      uVar17 = (undefined3)((uint)pbVar12 >> 8);
      cVar8 = (char)pbVar12 + '\x02';
      pbVar13 = (byte *)CONCAT31(uVar17,cVar8);
      if ((POPCOUNT(cVar8) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)pbStack_4;
      cVar8 = (char)pbVar13 + *param_2;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar8);
code_r0x0040390c:
      cVar27 = (char)pbVar13;
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        *pbStack_4 = *pbStack_4 + cVar27;
        goto code_r0x0040395a;
      }
      *pbVar13 = *pbVar13 + cVar27;
      bVar6 = cVar27 + 2;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar6);
code_r0x00403912:
      bVar29 = (POPCOUNT(bVar6) & 1U) == 0;
      if (!bVar29) goto code_r0x00403967;
      *pbVar13 = *pbVar13 + (char)pbVar13;
code_r0x00403916:
      bVar7 = (char)pbVar13 + 0x6f;
      pbVar21 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
      bVar6 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar7;
      if (*pbVar21 == 0 || SCARRY1(bVar6,bVar7) != (char)*pbVar21 < '\0') goto code_r0x00403979;
      *pbVar21 = *pbVar21 + bVar7;
      pbVar12 = (byte *)CONCAT31((int3)(char)((uint)pbVar13 >> 8),(char)pbVar13 + -100);
      *(byte **)(pbStack_4 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar7) + *(int *)(pbStack_4 + (int)unaff_EDI * 8);
code_r0x00403926:
      *(byte **)pbVar12 = pbStack_14;
      bVar6 = *pbStack_4;
      bVar7 = (byte)pbVar12;
      *pbStack_4 = *pbStack_4 + bVar7;
      if (CARRY1(bVar6,bVar7)) {
        *pbVar12 = *pbVar12 + bVar7;
        uVar17 = (undefined3)((uint)pbVar12 >> 8);
        bVar7 = bVar7 | pbVar12[0x400005b];
        pbVar13 = (byte *)CONCAT31(uVar17,bVar7);
        pbVar21 = pbStack_4;
        if ((char)bVar7 < '\x01') goto code_r0x00403991;
        *pbVar13 = *pbVar13 + bVar7;
        cVar8 = bVar7 + 0x28;
        pbVar13 = (byte *)CONCAT31(uVar17,cVar8);
        *(byte **)pbVar13 = pbVar13 + (uint)(0xd7 < bVar7) + *(int *)pbVar13;
        bVar6 = *unaff_EBX;
        bVar7 = (byte)((uint)param_1 >> 8);
        *unaff_EBX = *unaff_EBX + bVar7;
        if (CARRY1(bVar6,bVar7)) {
          *pbVar13 = *pbVar13 + cVar8;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar7 | *pbVar13,(char)param_1));
          *pbStack_4 = *pbStack_4 + cVar8;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                                (char)unaff_EBX));
          *pbVar13 = *pbVar13 + cVar8;
code_r0x00403950:
          uVar17 = (undefined3)((uint)pbVar13 >> 8);
          bVar7 = (char)pbVar13 + 0x6f;
          bVar6 = *(byte *)CONCAT31(uVar17,bVar7);
          *param_2 = *param_2 + (char)param_1;
          pbVar13 = (byte *)CONCAT31(uVar17,(bVar7 & bVar6) + *pbStack_4);
          *param_1 = *param_1 - (char)((uint)param_2 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar13 = *pbVar13 + cVar8;
    cVar8 = (char)pbVar12 + '.' + *param_2;
    pbVar13 = (byte *)CONCAT31(uVar17,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pbVar21 = param_2 + (int)pbVar13;
      *pbVar21 = *pbVar21 + cVar8;
      bVar6 = *pbVar21;
      goto code_r0x00403912;
    }
    *pbVar13 = *pbVar13 + cVar8;
    bVar6 = cVar8 + 2;
    pbVar13 = (byte *)CONCAT31(uVar17,bVar6);
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403916;
    *pbVar13 = *pbVar13 + bVar6;
    cVar27 = cVar8 + 'q';
    piVar11 = (int *)CONCAT31(uVar17,cVar27);
    *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0x90 < bVar6);
    bVar6 = *unaff_EBX;
    bVar7 = (byte)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + bVar7;
    if (!CARRY1(bVar6,bVar7)) {
      out(*(undefined4 *)pbStack_4,(short)param_2);
      cVar8 = (cVar27 - (char)*piVar11) - CARRY1(bVar6,bVar7);
      *param_2 = *param_2 + (char)param_1;
      in_EAX = (char *)CONCAT31(uVar17,cVar8 - *(char *)CONCAT31(uVar17,cVar8));
      pbStack_4 = (byte *)0;
      goto code_r0x00403839;
    }
    *(char *)piVar11 = (char)*piVar11 + cVar27;
    uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar6 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56];
    *(char *)piVar11 = (char)*piVar11 + cVar27;
    pcVar15 = (char *)CONCAT31(uVar17,cVar8 + 's');
    unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar19,CONCAT11(bVar6,(
                                                  char)unaff_EBX)) + 0x56),(char)unaff_EBX));
    *pcVar15 = *pcVar15 + cVar8 + 's';
    bVar6 = cVar8 - 0xf;
    *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
    bVar7 = cVar8 + 0x1e;
    pbVar12 = (byte *)CONCAT31(uVar17,bVar7);
    *(byte **)(pbStack_4 + (int)unaff_EDI * 8) =
         param_1 + (uint)(0xd2 < bVar6) + *(int *)(pbStack_4 + (int)unaff_EDI * 8);
    in_ES = *(undefined2 *)pbVar12;
    bVar6 = *pbStack_4;
    *pbStack_4 = *pbStack_4 + bVar7;
    param_2 = param_1;
    if (CARRY1(bVar6,bVar7)) {
      *pbVar12 = *pbVar12 + bVar7;
      pbVar13 = (byte *)CONCAT31(uVar17,bVar7 | pbVar12[0x400005a]);
      if ('\0' < (char)(bVar7 | pbVar12[0x400005a])) {
code_r0x004038f6:
        bVar6 = (byte)pbVar13;
        *pbVar13 = *pbVar13 + bVar6;
        uVar17 = (undefined3)((uint)pbVar13 >> 8);
        cVar8 = ((bVar6 + 0x28) - *(char *)CONCAT31(uVar17,bVar6 + 0x28)) - (0xd7 < bVar6);
        pbVar13 = (byte *)CONCAT31(uVar17,cVar8);
        bVar6 = *unaff_EBX;
        bVar7 = (byte)((uint)param_1 >> 8);
        *unaff_EBX = *unaff_EBX + bVar7;
        if (CARRY1(bVar6,bVar7)) {
          *pbVar13 = *pbVar13 + cVar8;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar7 | *pbVar13,(char)param_1));
          *pbStack_4 = *pbStack_4 + cVar8;
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
  param_2[0x16060000] = param_2[0x16060000] - (char)param_1;
  unaff_EBX = (byte *)((uint)unaff_EBX | (uint)pbStack_4);
  cVar8 = (char)pbVar13 + '\x02';
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar8);
  bVar29 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403967:
  if (!bVar29) goto code_r0x004039be;
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar17 = (undefined3)((uint)pbVar13 >> 8);
  bVar6 = (char)pbVar13 + 0x6f;
  bVar6 = bVar6 & *(byte *)CONCAT31(uVar17,bVar6);
  pbVar21 = (byte *)CONCAT31(uVar17,bVar6);
  *param_2 = *param_2 + (char)param_1;
  param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar6;
code_r0x00403979:
  bVar6 = (char)pbVar21 - *unaff_EDI;
  bVar29 = bVar6 < *param_1;
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar6 - *param_1);
  do {
    cVar8 = (char)pbVar13;
    *pbVar13 = *pbVar13 + cVar8 + bVar29;
    *pbVar13 = *pbVar13 + cVar8;
    *param_1 = *param_1 + (char)param_2;
    param_1[0x101c00aa] = param_1[0x101c00aa] + (char)unaff_EBX;
    *pbVar13 = *pbVar13 + cVar8;
    *(byte **)pbStack_4 = unaff_EBX + *(int *)pbStack_4;
    bVar6 = (byte)((uint)param_1 >> 8);
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11(bVar6 + *pbVar13,(char)param_1));
    pbVar13 = pbVar13 + (uint)CARRY1(bVar6,*pbVar13) + *(int *)pbVar13;
    pbVar21 = pbStack_4;
code_r0x00403991:
    cVar8 = (char)param_1;
    *param_2 = *param_2 + cVar8;
    cVar27 = (char)unaff_EBX - pbVar21[2];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar27);
    pbStack_4 = pbVar21;
    if ((POPCOUNT(cVar27) & 1U) != 0) goto code_r0x0040395a;
    *pbVar13 = *pbVar13 + (byte)pbVar13;
    uVar18 = (uint3)((uint)pbVar13 >> 8);
    bVar6 = (byte)pbVar13 | *unaff_EBX;
    piVar11 = (int *)CONCAT31(uVar18,bVar6);
    bVar7 = (byte)((uint)param_1 >> 8);
    bVar9 = (byte)param_2;
    if (bVar6 == 0) {
      *(char *)piVar11 = (char)*piVar11;
      pbStack_4 = pbVar21 + 4;
      out(*(undefined4 *)pbVar21,(short)param_2);
      pbVar13 = (byte *)((uint)uVar18 << 8);
      *param_2 = *param_2 + cVar8;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar9 - *unaff_EBX);
      *unaff_EBX = *unaff_EBX;
      *param_2 = *param_2 + bVar7;
      *pbVar13 = *pbVar13;
      *unaff_EBX = *unaff_EBX + cVar27;
      *pbVar13 = *pbVar13;
      *(byte **)(unaff_EBX + -0x3d) = pbStack_4 + *(int *)(unaff_EBX + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar11 = (char)*piVar11 + bVar6;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar7 | *param_2,cVar8));
    pbStack_4 = pbVar21 + *piVar11;
    pcVar15 = (char *)((int)piVar11 + *piVar11);
    bVar7 = (char)pcVar15 - *pcVar15;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar7);
    bVar6 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar7;
    pbVar13 = pbVar13 + (-(uint)CARRY1(bVar6,bVar7) - *(int *)pbVar13);
    bVar29 = CARRY1(*param_1,bVar9);
    *param_1 = *param_1 + bVar9;
  } while (!bVar29);
  *pbVar13 = *pbVar13 + (char)pbVar13;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *param_2);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar13 = *pbVar13 + (byte)pbVar13;
  uVar17 = (undefined3)((uint)pbVar13 >> 8);
  bVar6 = (byte)pbVar13 | *param_2;
  pcVar15 = (char *)CONCAT31(uVar17,bVar6);
  if ((POPCOUNT(bVar6) & 1U) == 0) goto code_r0x004039c8;
  cVar8 = *pcVar15;
  *pcVar15 = *pcVar15 + bVar6;
  cVar27 = *pcVar15;
  if (!SCARRY1(cVar8,bVar6)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar15 = *pcVar15 + bVar6;
  *pbStack_4 = *pbStack_4 + 1;
  uVar4 = *(undefined6 *)CONCAT31(uVar17,bVar6 + 6);
  pbVar21 = (byte *)uVar4;
  bVar6 = *param_2;
  bVar7 = (byte)param_1;
  *param_2 = *param_2 + bVar7;
  if (!CARRY1(bVar6,bVar7)) goto code_r0x00403979;
  *pbVar21 = *pbVar21 + (char)uVar4;
  bVar9 = (byte)((uint)param_1 >> 8) | *pbVar21;
  uVar19 = CONCAT11(bVar9,bVar7);
  pbVar21 = pbVar21 + -*(int *)pbVar21;
  bVar6 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + bVar9;
  if (CARRY1(bVar6,bVar9)) {
    cVar8 = (char)pbVar21;
    *pbVar21 = *pbVar21 + cVar8;
    bVar6 = *param_2;
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - unaff_EBX[-0x3a],(char)param_2)
                              );
    *pbVar21 = *pbVar21 + cVar8;
    uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar28 = (byte)((uint)unaff_EBX >> 8) | param_2[0x32];
    pcVar15 = (char *)CONCAT22(uVar20,CONCAT11(bVar28,(char)unaff_EBX));
    pbStack_24 = (byte *)CONCAT22(pbStack_24._2_2_,in_CS);
    cVar27 = cVar8 + *pcVar15 + '-';
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar27);
    *pbVar21 = *pbVar21;
    bVar10 = *param_2;
    cVar25 = (char)unaff_EBX - *pbStack_4;
    cVar8 = unaff_EDI[0x17];
    *pbVar21 = *pbVar21 + cVar27;
    uVar19 = CONCAT11((bVar9 | bVar6) + cVar8 | *param_2,bVar7 - bVar10);
    unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar28 + *(char *)(CONCAT31((int3)((uint)pcVar15 >>
                                                                                   8),cVar25) + 0x4e
                                                                   ),cVar25));
    *pbVar21 = *pbVar21 + cVar27;
  }
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),uVar19);
  bVar6 = (byte)pbVar21;
  uVar17 = (undefined3)((uint)pbVar21 >> 8);
  pcVar15 = (char *)CONCAT31(uVar17,bVar6 + 0x28);
  *pcVar15 = (*pcVar15 - (bVar6 + 0x28)) - (0xd7 < bVar6);
  *param_2 = *param_2 + (char)uVar19;
  bVar7 = bVar6 + 0x1b;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4f],
                                        (char)unaff_EBX));
  *(char *)CONCAT31(uVar17,bVar7) = *(char *)CONCAT31(uVar17,bVar7) + bVar7;
  pcVar14 = (char *)CONCAT31(uVar17,bVar6 + 0x43);
  *pcVar14 = (*pcVar14 - (bVar6 + 0x43)) - (0xd7 < bVar7);
  *param_2 = *param_2 + (char)uVar19;
  pcVar15 = pcVar14 + -0x6b721c;
  pcVar14 = pcVar14 + -0x6b721a;
  *pcVar14 = *pcVar14 + (char)((uint)param_2 >> 8);
  cVar27 = *pcVar14;
code_r0x00403a22:
  if ((POPCOUNT(cVar27) & 1U) == 0) {
code_r0x00403a24:
    cVar8 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar8;
    uVar17 = (undefined3)((uint)pcVar15 >> 8);
    bVar6 = cVar8 + 2;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
      piVar11 = (int *)CONCAT31(uVar17,cVar8 + '*');
      *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0xd7 < bVar6);
      bVar6 = *param_2;
      bVar10 = (byte)param_1;
      *param_2 = *param_2 + bVar10;
      out(*(undefined4 *)pbStack_4,(short)param_2);
      bVar9 = ((cVar8 + '*') - (char)*piVar11) - CARRY1(bVar6,bVar10);
      pbVar13 = (byte *)CONCAT31(uVar17,bVar9);
      *param_2 = *param_2 + bVar10;
      uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar26 = SUB41(unaff_EBX,0);
      cVar8 = (char)((uint)unaff_EBX >> 8) - pbStack_4[0x1f];
      unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar8,uVar26));
      *pbVar13 = *pbVar13 + bVar9;
      bVar7 = *param_2;
      bVar6 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar9;
      pbStack_4 = pbStack_4 + ((4 - *(int *)pbVar13) - (uint)CARRY1(bVar6,bVar9));
      pbVar13 = (byte *)CONCAT31(uVar17,bVar9);
      param_1 = (byte *)(CONCAT22((short)((uint)param_1 >> 0x10),
                                  CONCAT11((byte)((uint)param_1 >> 8) | bVar7,bVar10)) + -1);
      bVar6 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar9;
      bVar6 = (bVar9 - *pbVar13) - CARRY1(bVar6,bVar9);
      *param_1 = *param_1 + (char)param_2;
      bVar29 = CARRY1(bVar6,*param_2);
      bVar6 = bVar6 + *param_2;
      pbVar13 = (byte *)CONCAT31(uVar17,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar13 = *pbVar13 + bVar6;
        cVar27 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pbVar21 = (byte *)CONCAT31(uVar17,cVar27);
        bVar6 = *param_2;
        *param_2 = *param_2 + (char)param_1;
        if (SCARRY1(bVar6,(char)param_1) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar21 = *pbVar21 + cVar27;
        pcVar15 = (char *)CONCAT31(uVar17,cVar27 + '\x02');
        bVar7 = cVar8 + unaff_EBX[0x52];
        unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar7,uVar26));
        *pcVar15 = *pcVar15 + cVar27 + '\x02';
        bVar6 = cVar27 + 4;
        pbVar21 = (byte *)CONCAT31(uVar17,bVar6);
        if ((POPCOUNT(bVar6) & 1U) == 0) {
          *pbVar21 = *pbVar21 + bVar6;
          cVar8 = (cVar27 + 's') - (0x90 < bVar6);
          pcVar15 = (char *)CONCAT31(uVar17,cVar8);
          bVar6 = (byte)((uint)param_1 >> 8);
          bVar29 = CARRY1(*unaff_EBX,bVar6);
          *unaff_EBX = *unaff_EBX + bVar6;
          pbVar13 = pbStack_4;
          if (bVar29) {
            *pcVar15 = *pcVar15 + cVar8;
            unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar7 | unaff_EBP[0x5c],uVar26));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar21;
        unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar7 + unaff_EBX[0x52],uVar26));
code_r0x00403abf:
        *pbVar21 = *pbVar21 + (char)pbVar21;
        cVar8 = (char)pbVar21 + '\x02';
        pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar8);
        bVar29 = (POPCOUNT(cVar8) & 1U) == 0;
        pbStack_24 = unaff_EBP;
        if (!bVar29) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar29) {
          *pbVar13 = *pbVar13 + (byte)pbVar13;
          bVar6 = (byte)pbVar13 | pbVar13[0x400005e];
          pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar6);
          pbStack_24 = unaff_EBP;
          if ((char)bVar6 < '\x01') goto code_r0x00403b0b;
          *pbVar21 = *pbVar21 + bVar6;
code_r0x00403aaf:
          cVar8 = (char)pbVar21 + '(';
          pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar8);
          *(byte **)pbVar21 = pbVar21 + *(int *)pbVar21;
          bVar6 = *unaff_EBX;
          bVar7 = (byte)((uint)param_1 >> 8);
          *unaff_EBX = *unaff_EBX + bVar7;
          pbVar12 = unaff_EBP;
          if (!CARRY1(bVar6,bVar7)) goto code_r0x00403ad8;
          *pbVar21 = *pbVar21 + cVar8;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar7 | *unaff_EBX,(char)param_1));
          if ((POPCOUNT(*param_2 - cVar8) & 1U) != 0) {
            *pbStack_4 = *pbStack_4 + cVar8;
            pbStack_24 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                              (char)unaff_EBX));
      }
      bVar6 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      cVar8 = (bVar6 + 0x6f) - (0x90 < bVar6);
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar8);
      bVar6 = *unaff_EBX;
      cVar27 = (char)((uint)param_1 >> 8);
      *unaff_EBX = *unaff_EBX + cVar27;
      pbStack_24 = unaff_EBP;
      if (*unaff_EBX == 0 || SCARRY1(bVar6,cVar27) != (char)*unaff_EBX < '\0')
      goto code_r0x00403b2c;
      *pcVar15 = *pcVar15 + cVar8;
    }
    else {
      pcVar15 = (char *)CONCAT31(uVar17,bVar6 + *param_2);
      pbVar13 = pbStack_4;
      if ((POPCOUNT(bVar6 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_4 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar15) + *(int *)(pbStack_4 + (int)unaff_EDI * 8);
    pbVar21 = unaff_EBP;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 + 0x2d);
code_r0x00403ad8:
    pbStack_24 = pbVar12;
    bVar6 = *pbVar21;
    bVar7 = (byte)pbVar21;
    *pbVar21 = *pbVar21 + bVar7;
    pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,in_ES);
    if (!CARRY1(bVar6,bVar7)) goto code_r0x00403afc;
    *pbVar21 = *pbVar21 + bVar7;
    bVar7 = bVar7 | pbVar21[0x400005d];
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar7);
    pbVar13 = pbStack_4;
    if ((char)bVar7 < '\x01') {
      *pbVar21 = *pbVar21 + bVar7;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                            (char)unaff_EBX));
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar21 = *pbVar21 + (char)pbVar21;
    cVar8 = (char)pbVar21 + '(';
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar8);
    *(byte **)pbVar21 = pbVar21 + *(int *)pbVar21;
    bVar6 = *unaff_EBX;
    bVar7 = (byte)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + bVar7;
    pbStack_4 = pbVar13;
    if (!CARRY1(bVar6,bVar7)) goto code_r0x00403b0b;
    *pbVar21 = *pbVar21 + cVar8;
  }
  else {
    bVar6 = *param_2;
    *param_2 = *param_2 + (char)param_1;
    if (SCARRY1(bVar6,(char)param_1) == (char)*param_2 < '\0') {
      pbVar21 = unaff_EBP;
      pbVar12 = (byte *)(pcVar15 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar15 = *pcVar15 + (char)pcVar15;
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x02');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                          (char)unaff_EBX));
    pbVar13 = pbStack_4;
code_r0x00403a7d:
    cVar8 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar8;
    uVar17 = (undefined3)((uint)pcVar15 >> 8);
    cVar27 = cVar8 + '-';
    pbVar12 = (byte *)CONCAT31(uVar17,cVar27);
    pbVar21 = unaff_EBP;
    pbStack_4 = pbVar13;
    if ((POPCOUNT(cVar27 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar12 = *pbVar12 + cVar27;
    bVar6 = cVar8 + 0x2f;
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      bVar6 = *param_2;
      *param_2 = *param_2 + (byte)param_1;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar6,(byte)param_1);
      pbVar21 = (byte *)CONCAT31(uVar17,cVar8 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
    bVar29 = 0x90 < bVar6;
    pcVar15 = (char *)CONCAT31(uVar17,cVar8 + -0x62);
code_r0x00403a8f:
    uVar17 = (undefined3)((uint)pcVar15 >> 8);
    bVar7 = (char)pcVar15 - bVar29;
    pbVar21 = (byte *)CONCAT31(uVar17,bVar7);
    bVar6 = *unaff_EBX;
    cVar8 = (char)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + cVar8;
    pbStack_24 = unaff_EBP;
    pbStack_4 = pbVar13;
    if (*unaff_EBX != 0 && SCARRY1(bVar6,cVar8) == (char)*unaff_EBX < '\0') {
      *pbVar21 = *pbVar21 + bVar7;
      pbStack_4 = (byte *)CONCAT31(uVar17,bVar7 + 0x2d);
      *(byte **)(pbVar13 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar7) + *(int *)(pbVar13 + (int)unaff_EDI * 8);
      bVar29 = CARRY1(*pbVar13,(byte)pbVar13);
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      goto code_r0x00403aa1;
    }
  }
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *pbVar21,(char)param_1));
  *pbStack_4 = *pbStack_4 + (char)pbVar21;
code_r0x00403afc:
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar21 = *pbVar21 + (char)pbVar21;
  uVar17 = (undefined3)((uint)pbVar21 >> 8);
  bVar7 = (char)pbVar21 + 0x6f;
  bVar6 = *(byte *)CONCAT31(uVar17,bVar7);
  *param_2 = *param_2 + (char)param_1;
  pbVar21 = (byte *)CONCAT31(uVar17,(bVar7 & bVar6) + *pbStack_4);
  *param_1 = *param_1 - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    bVar6 = (byte)pbVar21 | *unaff_EBX;
    piVar11 = (int *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar6);
    if (bVar6 != 0) {
      pbStack_24 = pbStack_24 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar11 = (char)*piVar11 + bVar6;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
      pbStack_28 = pbStack_28 + *piVar11;
      pcVar15 = (char *)((int)piVar11 + *piVar11);
      uVar17 = (undefined3)((uint)pcVar15 >> 8);
      bVar7 = (char)pcVar15 - *pcVar15;
      pbVar13 = (byte *)CONCAT31(uVar17,bVar7);
      bVar6 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar7;
      piVar11 = (int *)CONCAT31(uVar17,bVar7 - CARRY1(bVar6,bVar7));
    }
    *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
    pbStack_4 = pbStack_28 + 4;
    out(*(undefined4 *)pbStack_28,(short)param_2);
    pbVar21 = (byte *)(((uint)piVar11 >> 8) * 0x100);
    *param_2 = *param_2 + (byte)param_1;
    bVar6 = (char)param_2 - *unaff_EBX;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar6);
    *unaff_EBX = *unaff_EBX;
    *param_2 = *param_2 + (char)((uint)param_1 >> 8);
    *pbVar21 = *pbVar21;
    pcVar15 = (char *)(((uint)piVar11 >> 8) * 0x200);
    *pcVar15 = *pcVar15 + (char)unaff_EBX;
    bVar29 = CARRY1(*param_1,bVar6);
    *param_1 = *param_1 + bVar6;
    pbStack_28 = pbStack_4;
    if (bVar29) break;
    while( true ) {
      *(byte **)pbVar21 = pbVar21 + (uint)bVar29 + *(int *)pbVar21;
      unaff_EDI = unaff_EDI + 4;
      pbVar21[(int)param_2] = pbVar21[(int)param_2] + (char)unaff_EBX;
      *pbVar21 = *pbVar21 + (char)pbVar21;
      *(byte **)pbStack_28 = unaff_EBX + *(int *)pbStack_28;
      bVar6 = (byte)((uint)param_1 >> 8);
      cVar8 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6 + *pbVar21,cVar8));
      pbVar21 = pbVar21 + (uint)CARRY1(bVar6,*pbVar21) + *(int *)pbVar21;
      *param_2 = *param_2 + cVar8;
      cVar8 = (char)unaff_EBX - pbStack_28[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar8);
      pbStack_4 = pbStack_28;
      if ((POPCOUNT(cVar8) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar21 = *pbVar21 + (char)pbVar21;
      param_2[0x16060000] = param_2[0x16060000] - (char)param_1;
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)pbStack_4);
      cVar8 = (char)pbVar21 + '\x02';
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar8);
      bVar29 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
      bVar6 = (byte)pbVar13;
      uVar17 = (undefined3)((uint)pbVar13 >> 8);
      if (!bVar29) {
        *param_2 = *param_2 + (char)param_1;
        pbVar21 = (byte *)CONCAT31(uVar17,bVar6 | *pbStack_4);
code_r0x00403b73:
        pbVar13 = (byte *)(unaff_EDI + *(int *)(pbStack_24 + -0x37));
        *pbVar21 = *pbVar21 + (byte)pbVar21;
        uVar17 = (undefined3)((uint)pbVar21 >> 8);
        bVar6 = (byte)pbVar21 | *param_2;
        pcVar15 = (char *)CONCAT31(uVar17,bVar6);
        uVar30 = CONCAT44(param_2,pcVar15);
        if ((POPCOUNT(bVar6) & 1U) == 0) {
          *pcVar15 = *pcVar15 + bVar6;
          *pbStack_4 = *pbStack_4 + 1;
          return (byte *)CONCAT31(uVar17,bVar6 + 6);
        }
        bVar6 = *pbStack_4;
        *pbStack_4 = *pbStack_4 + 1;
        pcVar3 = (code *)swi(4);
        if (SCARRY1(bVar6,'\x01')) {
          uVar30 = (*pcVar3)();
          param_1 = extraout_ECX;
        }
        pbVar21 = (byte *)uVar30;
        *pbVar21 = *pbVar21 + (char)uVar30;
        cVar27 = (char)((ulonglong)uVar30 >> 0x20);
        puVar22 = (uint *)CONCAT22((short)((ulonglong)uVar30 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar30 >> 0x28) | unaff_EBX[0x2f],
                                            cVar27));
        *pbVar21 = *pbVar21 + (char)uVar30;
        cVar8 = (char)param_1;
        bVar9 = (byte)((uint)param_1 >> 8) | *pbVar21;
        pbVar21 = pbVar21 + *(int *)pbVar21;
        bVar6 = *unaff_EBX;
        *unaff_EBX = *unaff_EBX + bVar9;
        bVar7 = (byte)pbVar21;
        if (CARRY1(bVar6,bVar9)) {
          *pbVar21 = *pbVar21 + bVar7;
          bVar9 = bVar9 | (byte)*puVar22;
          *unaff_EBX = *unaff_EBX - cVar27;
          *pbVar21 = *pbVar21 + bVar7;
          uVar17 = (undefined3)((uint)pbVar21 >> 8);
          bVar7 = bVar7 | (byte)*puVar22;
          piVar11 = (int *)CONCAT31(uVar17,bVar7);
          pbStack_24 = pbStack_24 + *piVar11;
          *(byte *)piVar11 = (char)*piVar11 + bVar7;
          cVar27 = (char)unaff_EBX - *pbStack_4;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar27) + 0x5f),cVar27));
          *(byte *)piVar11 = (char)*piVar11 + bVar7;
          bVar6 = bVar7 + 0x2a & (byte)*puVar22;
          pbVar13 = pbVar13 + *(int *)(pbStack_24 + 0x5f);
          *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
          pbVar21 = (byte *)CONCAT31(uVar17,bVar6 + 0x2a);
          *(byte *)puVar22 = (byte)*puVar22 + 0x28;
          *pbVar21 = *pbVar21 + bVar6 + 0x2a;
        }
        else {
          *pbStack_4 = *pbStack_4 + bVar7;
        }
        pcVar15 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar9,cVar8));
        *pbStack_24 = *pbStack_24 - bVar9;
        *(byte *)puVar22 = (byte)*puVar22 + cVar8;
        bVar6 = (byte)pbVar21 - 0xb;
        pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar6);
        if (10 < (byte)pbVar21) {
          *pbVar12 = *pbVar12 | bVar6;
          return pbVar12;
        }
        *(byte *)puVar22 = (byte)*puVar22 + cVar8;
        do {
          bVar6 = unaff_EBX[-0x23];
          bVar9 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar9;
          bVar7 = pbStack_24[-0x22];
          *pbVar12 = *pbVar12 + bVar9;
          uVar17 = (undefined3)((uint)pbVar12 >> 8);
          bVar9 = bVar9 | *pbStack_4;
          pbVar21 = (byte *)CONCAT31(uVar17,bVar9);
          cVar27 = (char)unaff_EBX - *pbStack_4;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                       CONCAT11((char)((uint)unaff_EBX >> 8) + bVar6
                                                                | bVar7,(char)unaff_EBX)) >> 8),
                                       cVar27);
          cVar8 = (char)pcVar15;
          pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                     CONCAT11((char)((uint)pcVar15 >> 8) + *pbVar21,cVar8));
          *(byte *)puVar22 = (byte)*puVar22 + cVar8;
          bVar7 = bVar9 - *pbVar21;
          pbVar12 = (byte *)CONCAT31(uVar17,bVar7);
          pbStack_4 = pbStack_4 + (-(uint)(bVar9 < *pbVar21) - *(int *)pbVar12);
          puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 * '\x02');
          *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
          *pbVar13 = *pbVar13 + cVar27;
          bVar6 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar7;
          *puVar22 = (uint)(pbVar12 + (uint)CARRY1(bVar6,bVar7) + *puVar22);
        } while ((POPCOUNT(*puVar22 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | pbVar12[(int)pcVar15])
        ;
        bVar29 = false;
        pbVar12 = (byte *)((uint)pbVar12 & 0xffffff00);
        do {
          pbVar13 = pbVar13 + (-(uint)bVar29 - *(int *)unaff_EBX);
          pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),*pcVar15);
          *pcVar14 = *pcVar14 + *pcVar15;
          pbVar12 = (byte *)CONCAT31((int3)((uint)(pcVar14 +
                                                  (pbStack_4[0x2000001] < (byte)((uint)pcVar15 >> 8)
                                                  ) + 0xda7d) >> 8),
                                     ((byte)(pcVar14 +
                                            (pbStack_4[0x2000001] < (byte)((uint)pcVar15 >> 8)) +
                                            0xda7d) | (byte)*puVar22) + 0x7d);
          pcVar15 = pcVar15 + -1;
          *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar15;
          while( true ) {
            uVar23 = (undefined3)((uint)puVar22 >> 8);
            cVar8 = (char)puVar22 + *(char *)((int)pbVar13 * 2 + 0xa0000e1);
            puVar22 = (uint *)CONCAT31(uVar23,cVar8);
            bVar29 = CARRY1((byte)pbVar12,(byte)*puVar22);
            uVar17 = (undefined3)((uint)pbVar12 >> 8);
            bVar6 = (byte)pbVar12 + (byte)*puVar22;
            pbVar12 = (byte *)CONCAT31(uVar17,bVar6);
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *pbVar12 = *pbVar12 + bVar6;
            cVar27 = (char)pcVar15;
            pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar15 >> 8) | pbVar13[-0x65],cVar27))
            ;
            bVar7 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar6;
            if (CARRY1(bVar7,bVar6)) {
              *pbVar12 = *pbVar12 + bVar6;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_24[-0x1d]
                                                    ,(char)unaff_EBX));
              *pbVar12 = *pbVar12 + bVar6;
              bVar29 = false;
              bVar6 = bVar6 | (byte)*puVar22;
              pcVar14 = (char *)CONCAT31(uVar17,bVar6);
              while( true ) {
                bVar7 = (byte)pcVar14;
                uVar17 = (undefined3)((uint)pcVar14 >> 8);
                if (bVar29 == (char)bVar6 < '\0') break;
                *pcVar14 = *pcVar14 + bVar7;
                bVar7 = bVar7 | (byte)*puVar22;
                puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                *pbVar13 = *pbVar13 << 1 | (char)*pbVar13 < '\0';
                uVar5 = *puVar16;
                *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                pbStack_24 = pbStack_24 + (-(uint)CARRY1((byte)uVar5,bVar7) - *puVar16);
                *puVar16 = *puVar16 << 1 | (uint)((int)*puVar16 < 0);
                while( true ) {
                  uVar5 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22 + (byte)pcVar15;
                  cVar8 = (char)puVar16 + 'o' + CARRY1((byte)uVar5,(byte)pcVar15);
                  pcVar14 = (char *)CONCAT31((int3)((uint)puVar16 >> 8),cVar8);
                  pcVar15 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar8) & 1U) != 0) break;
                  *pcVar14 = *pcVar14 + cVar8;
                  bVar6 = bRamfe140212;
                  pcVar15 = (char *)0x0;
                  uVar17 = (undefined3)((uint)(pcVar14 + -0x732b0000) >> 8);
                  bVar7 = in(0);
                  puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                  uVar5 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22;
                  if (SCARRY1((byte)uVar5,'\0') != (char)(byte)*puVar22 < '\0') {
                    *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                    bVar7 = bVar7 | (byte)*puVar22;
                    puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                    if ((POPCOUNT(bVar7) & 1U) == 0) {
                      *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                      pcVar15 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar6 | (byte)*puVar16) << 8);
                      *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                    puVar16 = (uint *)CONCAT31(uVar17,bVar7 | (byte)*puVar22);
                  }
                }
                *(byte *)puVar22 = (byte)*puVar22;
                bVar29 = SCARRY1((char)puVar22,*pbVar13);
                bVar6 = (char)puVar22 + *pbVar13;
                puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar6);
              }
              if (bVar29 == (char)bVar6 < '\0') {
                *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar15;
                pbVar12 = (byte *)((uint)pcVar14 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar14 = *pcVar14 + bVar7;
              pbVar12 = (byte *)CONCAT31(uVar17,(bVar7 | (byte)*puVar22) + 0x7d);
              pcVar15 = pcVar15 + -1;
              *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar15;
            }
            else {
              *(byte *)puVar22 = (byte)*puVar22 + cVar27;
              puVar22 = (uint *)CONCAT31(uVar23,cVar8 + *(char *)((int)pbVar13 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar13 = *pbVar13 + bVar6;
      bVar6 = bVar6 + 0x6f & *(byte *)CONCAT31(uVar17,bVar6 + 0x6f);
      *param_2 = *param_2 + (char)param_1;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar6;
      pcVar15 = (char *)CONCAT31(uVar17,bVar6 - *unaff_EDI);
code_r0x00403b2c:
      bVar6 = (char)pcVar15 - *pcVar15;
      pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar6);
      *pbVar21 = *pbVar21 + bVar6;
      *(byte **)pbVar21 = param_2 + *(int *)pbVar21;
      *pbVar21 = *pbVar21 + bVar6;
      bVar29 = CARRY1(*pbVar21,bVar6);
      *pbVar21 = *pbVar21 + bVar6;
      pbStack_28 = pbStack_4;
    }
  }
  *pbVar21 = *pbVar21;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_24 = pbStack_24 + -*puVar16;
  do {
    bVar6 = (byte)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + bVar6;
    pbVar13 = pbVar13 + -*(int *)(pbStack_24 + -0x1a);
    *(byte *)puVar16 = (byte)*puVar16 + bVar6;
    bVar6 = bVar6 | (byte)*puVar22;
    puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar6);
    *(byte *)puVar16 = (byte)*puVar16 | bVar6;
    bVar6 = (byte)*puVar16;
    pbStack_24 = (byte *)0x2700001;
    while ((POPCOUNT(bVar6) & 1U) == 0) {
      do {
        *(byte *)puVar16 = (byte)*puVar16 + (byte)puVar16;
        bVar6 = (byte)puVar16 | (byte)*puVar22;
        puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar6);
        if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
        uVar18 = CONCAT21((short)((uint)pcVar15 >> 0x10),(byte)((uint)pcVar15 >> 8) | bRamfe140212);
        while( true ) {
          pcVar15 = (char *)((uint)uVar18 << 8);
          bVar10 = (byte)puVar16;
          *(byte *)puVar16 = (byte)*puVar16 & bVar10;
          bVar7 = *unaff_EBX;
          bVar28 = (byte)uVar18;
          bVar9 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar28;
          bVar6 = *unaff_EBX;
          if (!CARRY1(bVar7,bVar28)) break;
          *(byte *)puVar16 = (byte)*puVar16 + bVar10;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar16 = (byte)*puVar16 + bVar10;
          bVar10 = bVar10 | (byte)*puVar22;
          puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar10);
          bVar29 = (POPCOUNT(bVar10) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)unaff_EBX >> 8);
            uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar29) {
              *(byte *)puVar22 = (byte)*puVar22;
              unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar8 + unaff_EBX[-0x1f],(char)unaff_EBX)
                                          );
              goto code_r0x00403d52;
            }
            *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
            uVar20 = (undefined2)((uint)pcVar15 >> 0x10);
            bVar7 = (byte)((uint)pcVar15 >> 8) | (byte)*puVar16;
            uVar18 = CONCAT21(uVar20,bVar7);
            *puVar16 = *puVar16 & (uint)puVar16;
            *unaff_EBX = *unaff_EBX + bVar7;
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            bVar6 = (char)puVar16 - bVar7;
            pcVar15 = (char *)CONCAT31(uVar17,bVar6);
            *pcVar15 = *pcVar15 + bVar6;
            bVar6 = bVar6 | (byte)*puVar22;
            puVar16 = (uint *)CONCAT31(uVar17,bVar6);
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *(byte *)puVar16 = (byte)*puVar16 + bVar6;
            pcVar15 = (char *)((uint)CONCAT21(uVar20,bVar7 | (byte)*puVar16) << 8);
            *puVar16 = *puVar16 - (int)puVar16;
            *(byte *)puVar22 = (byte)*puVar22;
            unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar8 + unaff_EBX[-0x1d],(char)unaff_EBX));
            do {
              *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
              uVar19 = (undefined2)((uint)puVar22 >> 0x10);
              cVar8 = (char)puVar22;
              bVar6 = (byte)((uint)puVar22 >> 8) | unaff_EBX[-0x17];
              puVar22 = (uint *)CONCAT22(uVar19,CONCAT11(bVar6,cVar8));
              *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar16 = (byte)*puVar16 + (byte)puVar16;
                uVar17 = (undefined3)((uint)puVar16 >> 8);
                bVar9 = (byte)puVar16 | (byte)*puVar22;
                pcVar14 = (char *)CONCAT31(uVar17,bVar9);
                bVar7 = unaff_EBX[-0x16];
                *pcVar14 = *pcVar14 + bVar9;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar14 = *pcVar14 + bVar9;
                pbVar21 = (byte *)CONCAT31(uVar17,bVar9 | (byte)*puVar22);
                while( true ) {
                  *pbVar21 = *pbVar21 + (byte)pbVar21;
                  uVar17 = (undefined3)((uint)pbVar21 >> 8);
                  bVar7 = (byte)pbVar21 | (byte)*puVar22;
                  puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) != 0) break;
                  *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                  bVar9 = pbVar13[-0x14];
                  *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar22;
                  pcVar14 = (char *)CONCAT31(uVar17,bVar7);
                  bVar10 = unaff_EBX[-0x15];
                  *pcVar14 = *pcVar14 + bVar7;
                  pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),
                                                    (byte)((uint)pcVar15 >> 8) | bVar9 |
                                                    pbVar13[-0x13]) << 8);
                  *pcVar14 = *pcVar14 + bVar7;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar10 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar14 = *pcVar14 + bVar7;
                  pbVar21 = (byte *)CONCAT31(uVar17,bVar7 | (byte)*puVar22);
                  do {
                    do {
                      bVar9 = (byte)pbVar21;
                      *pbVar21 = *pbVar21 + bVar9;
                      cVar25 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar21,
                                                            cVar25));
                      *pbVar21 = bVar9;
                      *pbVar21 = *pbVar21 + bVar9;
                      cVar27 = (char)((uint)pcVar15 >> 8) + *pbVar21;
                      pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),cVar27) << 8)
                      ;
                      uVar17 = (undefined3)((uint)pbVar21 >> 8);
                      bVar9 = bVar9 & *pbVar21;
                      pbVar21 = (byte *)CONCAT31(uVar17,bVar9);
                      bVar7 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar27;
                    } while (SCARRY1(bVar7,cVar27) == (char)*unaff_EBX < '\0');
                    *pbVar21 = *pbVar21 + bVar9;
                    bVar9 = bVar9 | (byte)*puVar22;
                    pbVar21 = (byte *)CONCAT31(uVar17,bVar9);
                    if ((POPCOUNT(bVar9) & 1U) == 0) {
                      *pbVar21 = *pbVar21 + bVar9;
                      *pbVar21 = *pbVar21 + bVar9;
                      cVar8 = cVar8 - bVar6;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),cVar8);
                      *pbVar21 = *pbVar21 + bVar9;
                      bRam0312382b = bRam0312382b | *pbVar12;
                      while( true ) {
                        bVar7 = (byte)pbVar21;
                        *pbVar21 = *pbVar21 + bVar7;
                        bRam0312382b = bRam0312382b | (pbVar13 + 0x21b0000)[(int)pbVar21];
                        uVar17 = (undefined3)((uint)pbVar21 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar12 = *pbVar12 + bRam0312382b;
                        pbVar21 = (byte *)CONCAT31(uVar17,bVar7 | *pbStack_4);
                      }
                      *pbVar21 = *pbVar21 + bVar7;
                      bVar7 = bVar7 | *pbStack_4;
                      pcVar15 = (char *)CONCAT31(uVar17,bVar7);
                      out(*(undefined4 *)pbStack_4,(short)pbVar12);
                      *pcVar15 = *pcVar15 + bVar7;
                      uVar20 = CONCAT11(bVar6 | bRam6f0a002b,cVar8);
                      pcVar14 = (char *)CONCAT22(uVar19,uVar20);
                      *pcVar15 = *pcVar15 + bVar7;
                      *pcVar14 = *pcVar14 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_4 + 4),uVar20);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar25 + *pcVar15);
                  } while (SCARRY1(cVar25,*pcVar15) != (char)(cVar25 + *pcVar15) < '\0');
                }
                uVar5 = *puVar22;
                *(byte *)puVar22 = (byte)*puVar22;
              } while (SCARRY1((byte)uVar5,'\0') != (char)(byte)*puVar22 < '\0');
              *(byte *)puVar22 = (byte)*puVar22;
              *pcVar15 = *pcVar15 - (char)unaff_EBX;
              *(byte *)puVar16 = (byte)*puVar16 + bVar7;
              bVar7 = bVar7 | (byte)*puVar22;
              puVar16 = (uint *)CONCAT31(uVar17,bVar7);
              bVar29 = (POPCOUNT(bVar7) & 1U) == 0;
            } while (bVar29);
          }
        }
      } while (SCARRY1(bVar9,bVar28));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar15 >> 8);
    *pbVar13 = *pbVar13 - (char)unaff_EBX;
  } while( true );
}


