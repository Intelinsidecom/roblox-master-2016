/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004039b8
 * Raw Name    : GetUnifiedSettingInfos
 * Demangled   : GetUnifiedSettingInfos
 * Prototype   : byte * GetUnifiedSettingInfos(byte * settingMapper, byte * param_2)
 * Local Vars  : param_2, pbStack_c, pbStack_8, pcVar1, uVar2, uVar3, bVar4, cVar5, bVar6, bVar7, in_EAX, piVar8, pbVar9, pcVar10, pcVar11, pbVar12, settingMapper, pbVar13, puVar14, uVar15, uVar16, extraout_ECX, bVar17, uVar18, uVar19, puVar20, uVar21, cVar22, uVar23, unaff_EBX, bVar24, cVar25, unaff_EBP, unaff_ESI, pbVar26, unaff_EDI, in_ES, in_CS, in_CF, bVar27, uVar28
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall GetUnifiedSettingInfos(byte *settingMapper,byte *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint3 uVar15;
  int *piVar8;
  byte *in_EAX;
  undefined3 uVar16;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  byte bVar17;
  undefined2 uVar18;
  byte *extraout_ECX;
  undefined2 uVar19;
  uint *puVar20;
  undefined3 uVar21;
  char cVar22;
  undefined1 uVar23;
  byte bVar24;
  char cVar25;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar26;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  char in_CF;
  bool bVar27;
  undefined8 uVar28;
  byte *pbStack_c;
  byte *pbStack_8;
  
code_r0x004039b8:
                    /* .NET CLR Managed Code */
  pbVar26 = unaff_ESI;
  if (!(bool)in_CF) goto code_r0x0040397d;
code_r0x004039ba:
  *in_EAX = *in_EAX + (char)in_EAX;
  settingMapper = (byte *)CONCAT31((int3)((uint)settingMapper >> 8),(byte)settingMapper | *param_2);
  pbVar26 = unaff_ESI;
  while( true ) {
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
    *in_EAX = *in_EAX + (byte)in_EAX;
    uVar16 = (undefined3)((uint)in_EAX >> 8);
    bVar4 = (byte)in_EAX | *param_2;
    pcVar11 = (char *)CONCAT31(uVar16,bVar4);
    if ((POPCOUNT(bVar4) & 1U) != 0) break;
    *pcVar11 = *pcVar11 + bVar4;
    *pbVar26 = *pbVar26 + 1;
    uVar2 = *(undefined6 *)CONCAT31(uVar16,bVar4 + 6);
    pbVar9 = (byte *)uVar2;
    bVar4 = *param_2;
    bVar6 = (byte)settingMapper;
    *param_2 = *param_2 + bVar6;
    if (CARRY1(bVar4,bVar6)) {
      *pbVar9 = *pbVar9 + (char)uVar2;
      bVar17 = (byte)((uint)settingMapper >> 8) | *pbVar9;
      uVar18 = CONCAT11(bVar17,bVar6);
      pbVar9 = pbVar9 + -*(int *)pbVar9;
      bVar4 = *unaff_EBX;
      *unaff_EBX = *unaff_EBX + bVar17;
      if (CARRY1(bVar4,bVar17)) {
        cVar25 = (char)pbVar9;
        *pbVar9 = *pbVar9 + cVar25;
        bVar4 = *param_2;
        param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11((char)((uint)param_2 >> 8) - unaff_EBX[-0x3a],
                                            (char)param_2));
        *pbVar9 = *pbVar9 + cVar25;
        uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
        bVar24 = (byte)((uint)unaff_EBX >> 8) | param_2[0x32];
        pcVar11 = (char *)CONCAT22(uVar19,CONCAT11(bVar24,(char)unaff_EBX));
        pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_CS);
        cVar5 = cVar25 + *pcVar11 + '-';
        pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
        *pbVar9 = *pbVar9;
        bVar7 = *param_2;
        cVar22 = (char)unaff_EBX - *pbVar26;
        cVar25 = unaff_EDI[0x17];
        *pbVar9 = *pbVar9 + cVar5;
        uVar18 = CONCAT11((bVar17 | bVar4) + cVar25 | *param_2,bVar6 - bVar7);
        unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar24 + *(char *)(CONCAT31((int3)((uint)
                                                  pcVar11 >> 8),cVar22) + 0x4e),cVar22));
        *pbVar9 = *pbVar9 + cVar5;
      }
      settingMapper = (byte *)CONCAT22((short)((uint)settingMapper >> 0x10),uVar18);
      bVar4 = (byte)pbVar9;
      uVar16 = (undefined3)((uint)pbVar9 >> 8);
      pcVar11 = (char *)CONCAT31(uVar16,bVar4 + 0x28);
      *pcVar11 = (*pcVar11 - (bVar4 + 0x28)) - (0xd7 < bVar4);
      *param_2 = *param_2 + (char)uVar18;
      bVar6 = bVar4 + 0x1b;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4f],
                                            (char)unaff_EBX));
      *(char *)CONCAT31(uVar16,bVar6) = *(char *)CONCAT31(uVar16,bVar6) + bVar6;
      pcVar10 = (char *)CONCAT31(uVar16,bVar4 + 0x43);
      *pcVar10 = (*pcVar10 - (bVar4 + 0x43)) - (0xd7 < bVar6);
      *param_2 = *param_2 + (char)uVar18;
      pcVar11 = pcVar10 + -0x6b721c;
      pcVar10 = pcVar10 + -0x6b721a;
      *pcVar10 = *pcVar10 + (char)((uint)param_2 >> 8);
      cVar5 = *pcVar10;
code_r0x00403a22:
      if ((POPCOUNT(cVar5) & 1U) == 0) goto code_r0x00403a24;
      bVar4 = *param_2;
      *param_2 = *param_2 + (char)settingMapper;
      if (SCARRY1(bVar4,(char)settingMapper) != (char)*param_2 < '\0') {
code_r0x00403a76:
        *pcVar11 = *pcVar11 + (char)pcVar11;
        pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + '\x02');
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                              (char)unaff_EBX));
        pbVar9 = pbVar26;
        goto code_r0x00403a7d;
      }
      pbVar13 = unaff_EBP;
      pbVar12 = (byte *)(pcVar11 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
    while( true ) {
      bVar4 = (char)pbVar9 - *unaff_EDI;
      in_CF = bVar4 < *settingMapper;
      in_EAX = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar4 - *settingMapper);
code_r0x0040397d:
      cVar25 = (char)in_EAX;
      *in_EAX = *in_EAX + cVar25 + in_CF;
      *in_EAX = *in_EAX + cVar25;
      bVar17 = (byte)param_2;
      *settingMapper = *settingMapper + bVar17;
      settingMapper[0x101c00aa] = settingMapper[0x101c00aa] + (char)unaff_EBX;
      *in_EAX = *in_EAX + cVar25;
      *(byte **)pbVar26 = unaff_EBX + *(int *)pbVar26;
      bVar4 = (byte)((uint)settingMapper >> 8);
      uVar18 = (undefined2)((uint)settingMapper >> 0x10);
      cVar25 = (char)settingMapper;
      bVar6 = bVar4 + *in_EAX;
      settingMapper = (byte *)CONCAT22(uVar18,CONCAT11(bVar6,cVar25));
      pbVar9 = in_EAX + (uint)CARRY1(bVar4,*in_EAX) + *(int *)in_EAX;
      *param_2 = *param_2 + cVar25;
      cVar5 = (char)unaff_EBX - pbVar26[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar5);
      uVar15 = (uint3)((uint)pbVar9 >> 8);
      uVar16 = (undefined3)((uint)param_2 >> 8);
      bVar4 = (byte)pbVar9;
      if ((POPCOUNT(cVar5) & 1U) == 0) {
        *pbVar9 = *pbVar9 + bVar4;
        bVar4 = bVar4 | *unaff_EBX;
        piVar8 = (int *)CONCAT31(uVar15,bVar4);
        if (bVar4 == 0) {
          *(char *)piVar8 = (char)*piVar8;
          unaff_ESI = pbVar26 + 4;
          out(*(undefined4 *)pbVar26,(short)param_2);
          in_EAX = (byte *)((uint)uVar15 << 8);
          *param_2 = *param_2 + cVar25;
          param_2 = (byte *)CONCAT31(uVar16,bVar17 - *unaff_EBX);
          *unaff_EBX = *unaff_EBX;
          *param_2 = *param_2 + bVar6;
          *in_EAX = *in_EAX;
          *unaff_EBX = *unaff_EBX + cVar5;
          *in_EAX = *in_EAX;
          *(byte **)(unaff_EBX + -0x3d) = unaff_ESI + *(int *)(unaff_EBX + -0x3d);
          goto code_r0x004039ba;
        }
        unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar8 = (char)*piVar8 + bVar4;
        settingMapper = (byte *)CONCAT22(uVar18,CONCAT11(bVar6 | *param_2,cVar25));
        unaff_ESI = pbVar26 + *piVar8;
        pcVar11 = (char *)((int)piVar8 + *piVar8);
        bVar6 = (char)pcVar11 - *pcVar11;
        pbVar26 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar6);
        bVar4 = *pbVar26;
        *pbVar26 = *pbVar26 + bVar6;
        in_EAX = pbVar26 + (-(uint)CARRY1(bVar4,bVar6) - *(int *)pbVar26);
        in_CF = CARRY1(*settingMapper,bVar17);
        *settingMapper = *settingMapper + bVar17;
        goto code_r0x004039b8;
      }
      *pbVar9 = *pbVar9 + bVar4;
      param_2[0x16060000] = param_2[0x16060000] - cVar25;
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)pbVar26);
      cVar5 = bVar4 + 2;
      in_EAX = (byte *)CONCAT31(uVar15,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) break;
      *in_EAX = *in_EAX + cVar5;
      bVar4 = bVar4 + 0x71 & *(byte *)CONCAT31(uVar15,bVar4 + 0x71);
      pbVar9 = (byte *)CONCAT31(uVar15,bVar4);
      *param_2 = *param_2 + cVar25;
      param_2 = (byte *)CONCAT31(uVar16,bVar17 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
    }
  }
  cVar25 = *pcVar11;
  *pcVar11 = *pcVar11 + bVar4;
  cVar5 = *pcVar11;
  if (!SCARRY1(cVar25,bVar4)) goto code_r0x00403a22;
code_r0x00403a24:
  cVar25 = (char)pcVar11;
  *pcVar11 = *pcVar11 + cVar25;
  uVar16 = (undefined3)((uint)pcVar11 >> 8);
  bVar4 = cVar25 + 2;
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(char *)CONCAT31(uVar16,bVar4) = *(char *)CONCAT31(uVar16,bVar4) + bVar4;
    piVar8 = (int *)CONCAT31(uVar16,cVar25 + '*');
    *piVar8 = (*piVar8 - (int)piVar8) - (uint)(0xd7 < bVar4);
    bVar4 = *param_2;
    bVar7 = (byte)settingMapper;
    *param_2 = *param_2 + bVar7;
    out(*(undefined4 *)pbVar26,(short)param_2);
    bVar17 = ((cVar25 + '*') - (char)*piVar8) - CARRY1(bVar4,bVar7);
    pbVar9 = (byte *)CONCAT31(uVar16,bVar17);
    *param_2 = *param_2 + bVar7;
    uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar23 = SUB41(unaff_EBX,0);
    cVar25 = (char)((uint)unaff_EBX >> 8) - pbVar26[0x1f];
    unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar25,uVar23));
    *pbVar9 = *pbVar9 + bVar17;
    bVar6 = *param_2;
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar17;
    pbVar26 = pbVar26 + ((4 - *(int *)pbVar9) - (uint)CARRY1(bVar4,bVar17));
    pbVar9 = (byte *)CONCAT31(uVar16,bVar17);
    settingMapper =
         (byte *)(CONCAT22((short)((uint)settingMapper >> 0x10),
                           CONCAT11((byte)((uint)settingMapper >> 8) | bVar6,bVar7)) + -1);
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar17;
    bVar4 = (bVar17 - *pbVar9) - CARRY1(bVar4,bVar17);
    *settingMapper = *settingMapper + (char)param_2;
    bVar27 = CARRY1(bVar4,*param_2);
    bVar4 = bVar4 + *param_2;
    pbVar9 = (byte *)CONCAT31(uVar16,bVar4);
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      *pbVar9 = *pbVar9 + bVar4;
      cVar5 = (bVar4 + 0x6f) - (0x90 < bVar4);
      pbVar13 = (byte *)CONCAT31(uVar16,cVar5);
      bVar4 = *param_2;
      *param_2 = *param_2 + (char)settingMapper;
      if (SCARRY1(bVar4,(char)settingMapper) == (char)*param_2 < '\0') goto code_r0x00403aaf;
      *pbVar13 = *pbVar13 + cVar5;
      pcVar11 = (char *)CONCAT31(uVar16,cVar5 + '\x02');
      bVar6 = cVar25 + unaff_EBX[0x52];
      unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar6,uVar23));
      *pcVar11 = *pcVar11 + cVar5 + '\x02';
      bVar4 = cVar5 + 4;
      pbVar13 = (byte *)CONCAT31(uVar16,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar13 = *pbVar13 + bVar4;
        cVar25 = (cVar5 + 's') - (0x90 < bVar4);
        pcVar11 = (char *)CONCAT31(uVar16,cVar25);
        bVar4 = (byte)((uint)settingMapper >> 8);
        bVar27 = CARRY1(*unaff_EBX,bVar4);
        *unaff_EBX = *unaff_EBX + bVar4;
        pbVar9 = pbVar26;
        if (bVar27) {
          *pcVar11 = *pcVar11 + cVar25;
          unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar6 | unaff_EBP[0x5c],uVar23));
          goto code_r0x00403a76;
        }
        goto code_r0x00403a8f;
      }
      unaff_EDI = unaff_EDI + -*(int *)pbVar13;
      unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar6 + unaff_EBX[0x52],uVar23));
code_r0x00403abf:
      *pbVar13 = *pbVar13 + (char)pbVar13;
      cVar25 = (char)pbVar13 + '\x02';
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar25);
      bVar27 = (POPCOUNT(cVar25) & 1U) == 0;
      pbStack_8 = unaff_EBP;
      if (!bVar27) goto code_r0x00403b18;
    }
    else {
code_r0x00403aa1:
      if (bVar27) {
        *pbVar9 = *pbVar9 + (byte)pbVar9;
        bVar4 = (byte)pbVar9 | pbVar9[0x400005e];
        pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar4);
        if ('\0' < (char)bVar4) {
          *pbVar13 = *pbVar13 + bVar4;
code_r0x00403aaf:
          cVar25 = (char)pbVar13 + '(';
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar25);
          *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
          bVar4 = *unaff_EBX;
          bVar6 = (byte)((uint)settingMapper >> 8);
          *unaff_EBX = *unaff_EBX + bVar6;
          pbVar12 = unaff_EBP;
          if (!CARRY1(bVar4,bVar6)) goto code_r0x00403ad8;
          *pbVar13 = *pbVar13 + cVar25;
          settingMapper =
               (byte *)CONCAT22((short)((uint)settingMapper >> 0x10),
                                CONCAT11(bVar6 | *unaff_EBX,(char)settingMapper));
          if ((POPCOUNT(*param_2 - cVar25) & 1U) == 0) goto code_r0x00403abf;
          *pbVar26 = *pbVar26 + cVar25;
        }
        goto code_r0x00403b0b;
      }
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                            (char)unaff_EBX));
    }
    bVar4 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    cVar25 = (bVar4 + 0x6f) - (0x90 < bVar4);
    pcVar11 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar25);
    bVar4 = *unaff_EBX;
    cVar5 = (char)((uint)settingMapper >> 8);
    *unaff_EBX = *unaff_EBX + cVar5;
    pbStack_8 = unaff_EBP;
    if (*unaff_EBX == 0 || SCARRY1(bVar4,cVar5) != (char)*unaff_EBX < '\0') goto code_r0x00403b2c;
    *pcVar11 = *pcVar11 + cVar25;
code_r0x00403ad1:
    *(byte **)(pbVar26 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar11) + *(int *)(pbVar26 + (int)unaff_EDI * 8);
    pbVar13 = unaff_EBP;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),(byte)pcVar11 + 0x2d);
code_r0x00403ad8:
    pbStack_8 = pbVar12;
    bVar4 = *pbVar13;
    bVar6 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    pbStack_c = (byte *)CONCAT22(pbStack_c._2_2_,in_ES);
    unaff_EBP = pbStack_8;
    if (CARRY1(bVar4,bVar6)) {
      *pbVar13 = *pbVar13 + bVar6;
      bVar6 = bVar6 | pbVar13[0x400005d];
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar6);
      pbVar9 = pbVar26;
      if ((char)bVar6 < '\x01') {
        *pbVar13 = *pbVar13 + bVar6;
        settingMapper =
             (byte *)CONCAT22((short)((uint)settingMapper >> 0x10),
                              CONCAT11((byte)((uint)settingMapper >> 8) | *param_2,
                                       (char)settingMapper));
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                              (char)unaff_EBX));
        goto code_r0x00403b4c;
      }
code_r0x00403ae7:
      *pbVar13 = *pbVar13 + (char)pbVar13;
      cVar25 = (char)pbVar13 + '(';
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar25);
      *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar4 = *unaff_EBX;
      bVar6 = (byte)((uint)settingMapper >> 8);
      *unaff_EBX = *unaff_EBX + bVar6;
      unaff_EBP = pbStack_8;
      pbVar26 = pbVar9;
      if (!CARRY1(bVar4,bVar6)) goto code_r0x00403b0b;
      *pbVar13 = *pbVar13 + cVar25;
      goto code_r0x00403af3;
    }
  }
  else {
    pcVar11 = (char *)CONCAT31(uVar16,bVar4 + *param_2);
    pbVar9 = pbVar26;
    if ((POPCOUNT(bVar4 + *param_2) & 1U) != 0) goto code_r0x00403ad1;
code_r0x00403a7d:
    cVar25 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar25;
    uVar16 = (undefined3)((uint)pcVar11 >> 8);
    cVar5 = cVar25 + '-';
    pbVar12 = (byte *)CONCAT31(uVar16,cVar5);
    pbVar13 = unaff_EBP;
    pbVar26 = pbVar9;
    if ((POPCOUNT(cVar5 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar12 = *pbVar12 + cVar5;
    bVar4 = cVar25 + 0x2f;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      bVar4 = *param_2;
      *param_2 = *param_2 + (byte)settingMapper;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar4,(byte)settingMapper);
      pbVar13 = (byte *)CONCAT31(uVar16,cVar25 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar16,bVar4) = *(char *)CONCAT31(uVar16,bVar4) + bVar4;
    bVar27 = 0x90 < bVar4;
    pcVar11 = (char *)CONCAT31(uVar16,cVar25 + -0x62);
code_r0x00403a8f:
    uVar16 = (undefined3)((uint)pcVar11 >> 8);
    bVar6 = (char)pcVar11 - bVar27;
    pbVar13 = (byte *)CONCAT31(uVar16,bVar6);
    bVar4 = *unaff_EBX;
    cVar25 = (char)((uint)settingMapper >> 8);
    *unaff_EBX = *unaff_EBX + cVar25;
    pbVar26 = pbVar9;
    if (*unaff_EBX != 0 && SCARRY1(bVar4,cVar25) == (char)*unaff_EBX < '\0') {
      *pbVar13 = *pbVar13 + bVar6;
      pbVar26 = (byte *)CONCAT31(uVar16,bVar6 + 0x2d);
      *(byte **)(pbVar9 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar6) + *(int *)(pbVar9 + (int)unaff_EDI * 8);
      bVar27 = CARRY1(*pbVar9,(byte)pbVar9);
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      goto code_r0x00403aa1;
    }
code_r0x00403af3:
    settingMapper =
         (byte *)CONCAT22((short)((uint)settingMapper >> 0x10),
                          CONCAT11((byte)((uint)settingMapper >> 8) | *pbVar13,(char)settingMapper))
    ;
    *pbVar26 = *pbVar26 + (char)pbVar13;
  }
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar16 = (undefined3)((uint)pbVar13 >> 8);
  bVar6 = (char)pbVar13 + 0x6f;
  bVar4 = *(byte *)CONCAT31(uVar16,bVar6);
  *param_2 = *param_2 + (char)settingMapper;
  pbVar13 = (byte *)CONCAT31(uVar16,(bVar6 & bVar4) + *pbVar26);
  *settingMapper = *settingMapper - (char)((uint)param_2 >> 8);
code_r0x00403b0b:
  do {
    *pbVar13 = *pbVar13 + (char)pbVar13;
    param_2[0x16060000] = param_2[0x16060000] - (char)settingMapper;
    unaff_EBX = (byte *)((uint)unaff_EBX | (uint)pbVar26);
    cVar25 = (char)pbVar13 + '\x02';
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar25);
    bVar27 = (POPCOUNT(cVar25) & 1U) == 0;
    pbStack_8 = unaff_EBP;
code_r0x00403b18:
    bVar4 = (byte)pbVar9;
    uVar16 = (undefined3)((uint)pbVar9 >> 8);
    if (!bVar27) {
      *param_2 = *param_2 + (char)settingMapper;
      pbVar13 = (byte *)CONCAT31(uVar16,bVar4 | *pbVar26);
code_r0x00403b73:
      pbVar9 = (byte *)(unaff_EDI + *(int *)(pbStack_8 + -0x37));
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      uVar16 = (undefined3)((uint)pbVar13 >> 8);
      bVar4 = (byte)pbVar13 | *param_2;
      pcVar11 = (char *)CONCAT31(uVar16,bVar4);
      uVar28 = CONCAT44(param_2,pcVar11);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pcVar11 = *pcVar11 + bVar4;
        *pbVar26 = *pbVar26 + 1;
        return (byte *)CONCAT31(uVar16,bVar4 + 6);
      }
      bVar4 = *pbVar26;
      *pbVar26 = *pbVar26 + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar4,'\x01')) {
        uVar28 = (*pcVar1)();
        settingMapper = extraout_ECX;
      }
      pbVar13 = (byte *)uVar28;
      *pbVar13 = *pbVar13 + (char)uVar28;
      cVar5 = (char)((ulonglong)uVar28 >> 0x20);
      puVar20 = (uint *)CONCAT22((short)((ulonglong)uVar28 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar28 >> 0x28) | unaff_EBX[0x2f],cVar5)
                                );
      *pbVar13 = *pbVar13 + (char)uVar28;
      cVar25 = (char)settingMapper;
      bVar17 = (byte)((uint)settingMapper >> 8) | *pbVar13;
      pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar4 = *unaff_EBX;
      *unaff_EBX = *unaff_EBX + bVar17;
      bVar6 = (byte)pbVar13;
      if (CARRY1(bVar4,bVar17)) {
        *pbVar13 = *pbVar13 + bVar6;
        bVar17 = bVar17 | (byte)*puVar20;
        *unaff_EBX = *unaff_EBX - cVar5;
        *pbVar13 = *pbVar13 + bVar6;
        uVar16 = (undefined3)((uint)pbVar13 >> 8);
        bVar6 = bVar6 | (byte)*puVar20;
        piVar8 = (int *)CONCAT31(uVar16,bVar6);
        pbStack_8 = pbStack_8 + *piVar8;
        *(byte *)piVar8 = (char)*piVar8 + bVar6;
        cVar5 = (char)unaff_EBX - *pbVar26;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar5)
                                                       + 0x5f),cVar5));
        *(byte *)piVar8 = (char)*piVar8 + bVar6;
        bVar4 = bVar6 + 0x2a & (byte)*puVar20;
        pbVar9 = pbVar9 + *(int *)(pbStack_8 + 0x5f);
        *(char *)CONCAT31(uVar16,bVar4) = *(char *)CONCAT31(uVar16,bVar4) + bVar4;
        pbVar13 = (byte *)CONCAT31(uVar16,bVar4 + 0x2a);
        *(byte *)puVar20 = (byte)*puVar20 + 0x28;
        *pbVar13 = *pbVar13 + bVar4 + 0x2a;
      }
      else {
        *pbVar26 = *pbVar26 + bVar6;
      }
      pcVar11 = (char *)CONCAT22((short)((uint)settingMapper >> 0x10),CONCAT11(bVar17,cVar25));
      *pbStack_8 = *pbStack_8 - bVar17;
      *(byte *)puVar20 = (byte)*puVar20 + cVar25;
      bVar4 = (byte)pbVar13 - 0xb;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar4);
      if (10 < (byte)pbVar13) {
        *pbVar12 = *pbVar12 | bVar4;
        return pbVar12;
      }
      *(byte *)puVar20 = (byte)*puVar20 + cVar25;
      do {
        bVar4 = unaff_EBX[-0x23];
        bVar17 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar17;
        bVar6 = pbStack_8[-0x22];
        *pbVar12 = *pbVar12 + bVar17;
        uVar16 = (undefined3)((uint)pbVar12 >> 8);
        bVar17 = bVar17 | *pbVar26;
        pbVar13 = (byte *)CONCAT31(uVar16,bVar17);
        cVar5 = (char)unaff_EBX - *pbVar26;
        unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                     CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                              bVar6,(char)unaff_EBX)) >> 8),cVar5);
        cVar25 = (char)pcVar11;
        pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                   CONCAT11((char)((uint)pcVar11 >> 8) + *pbVar13,cVar25));
        *(byte *)puVar20 = (byte)*puVar20 + cVar25;
        bVar6 = bVar17 - *pbVar13;
        pbVar12 = (byte *)CONCAT31(uVar16,bVar6);
        pbVar26 = pbVar26 + (-(uint)(bVar17 < *pbVar13) - *(int *)pbVar12);
        puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 * '\x02');
        *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
        *pbVar9 = *pbVar9 + cVar5;
        bVar4 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar6;
        *puVar20 = (uint)(pbVar12 + (uint)CARRY1(bVar4,bVar6) + *puVar20);
      } while ((POPCOUNT(*puVar20 & 0xff) & 1U) != 0);
code_r0x00403cb7:
      *pbVar12 = *pbVar12 + (char)pbVar12;
      pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),(byte)pcVar11 | pbVar12[(int)pcVar11]);
      bVar27 = false;
      pbVar12 = (byte *)((uint)pbVar12 & 0xffffff00);
      do {
        pbVar9 = pbVar9 + (-(uint)bVar27 - *(int *)unaff_EBX);
        pcVar10 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),*pcVar11);
        *pcVar10 = *pcVar10 + *pcVar11;
        pbVar12 = (byte *)CONCAT31((int3)((uint)(pcVar10 +
                                                (pbVar26[0x2000001] < (byte)((uint)pcVar11 >> 8)) +
                                                0xda7d) >> 8),
                                   ((byte)(pcVar10 +
                                          (pbVar26[0x2000001] < (byte)((uint)pcVar11 >> 8)) + 0xda7d
                                          ) | (byte)*puVar20) + 0x7d);
        pcVar11 = pcVar11 + -1;
        *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar11;
        while( true ) {
          uVar21 = (undefined3)((uint)puVar20 >> 8);
          cVar25 = (char)puVar20 + *(char *)((int)pbVar9 * 2 + 0xa0000e1);
          puVar20 = (uint *)CONCAT31(uVar21,cVar25);
          bVar27 = CARRY1((byte)pbVar12,(byte)*puVar20);
          uVar16 = (undefined3)((uint)pbVar12 >> 8);
          bVar4 = (byte)pbVar12 + (byte)*puVar20;
          pbVar12 = (byte *)CONCAT31(uVar16,bVar4);
          if ((POPCOUNT(bVar4) & 1U) != 0) break;
          *pbVar12 = *pbVar12 + bVar4;
          cVar5 = (char)pcVar11;
          pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar11 >> 8) | pbVar9[-0x65],cVar5));
          bVar6 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar4;
          if (CARRY1(bVar6,bVar4)) {
            *pbVar12 = *pbVar12 + bVar4;
            unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_8[-0x1d],
                                                  (char)unaff_EBX));
            *pbVar12 = *pbVar12 + bVar4;
            bVar27 = false;
            bVar4 = bVar4 | (byte)*puVar20;
            pcVar10 = (char *)CONCAT31(uVar16,bVar4);
            while( true ) {
              bVar6 = (byte)pcVar10;
              uVar16 = (undefined3)((uint)pcVar10 >> 8);
              if (bVar27 == (char)bVar4 < '\0') break;
              *pcVar10 = *pcVar10 + bVar6;
              bVar6 = bVar6 | (byte)*puVar20;
              puVar14 = (uint *)CONCAT31(uVar16,bVar6);
              *pbVar9 = *pbVar9 << 1 | (char)*pbVar9 < '\0';
              uVar3 = *puVar14;
              *(byte *)puVar14 = (byte)*puVar14 + bVar6;
              pbStack_8 = pbStack_8 + (-(uint)CARRY1((byte)uVar3,bVar6) - *puVar14);
              *puVar14 = *puVar14 << 1 | (uint)((int)*puVar14 < 0);
              while( true ) {
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20 + (byte)pcVar11;
                cVar25 = (char)puVar14 + 'o' + CARRY1((byte)uVar3,(byte)pcVar11);
                pcVar10 = (char *)CONCAT31((int3)((uint)puVar14 >> 8),cVar25);
                pcVar11 = (char *)0x20a0000;
                if ((POPCOUNT(cVar25) & 1U) != 0) break;
                *pcVar10 = *pcVar10 + cVar25;
                bVar4 = bRamfe140212;
                pcVar11 = (char *)0x0;
                uVar16 = (undefined3)((uint)(pcVar10 + -0x732b0000) >> 8);
                bVar6 = in(0);
                puVar14 = (uint *)CONCAT31(uVar16,bVar6);
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar20 < '\0') {
                  *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar20;
                  puVar14 = (uint *)CONCAT31(uVar16,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) == 0) {
                    *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                    pcVar11 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar14) << 8);
                    *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                  puVar14 = (uint *)CONCAT31(uVar16,bVar6 | (byte)*puVar20);
                }
              }
              *(byte *)puVar20 = (byte)*puVar20;
              bVar27 = SCARRY1((char)puVar20,*pbVar9);
              bVar4 = (char)puVar20 + *pbVar9;
              puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar4);
            }
            if (bVar27 == (char)bVar4 < '\0') {
              *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar11;
              pbVar12 = (byte *)((uint)pcVar10 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar10 = *pcVar10 + bVar6;
            pbVar12 = (byte *)CONCAT31(uVar16,(bVar6 | (byte)*puVar20) + 0x7d);
            pcVar11 = pcVar11 + -1;
            *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar11;
          }
          else {
            *(byte *)puVar20 = (byte)*puVar20 + cVar5;
            puVar20 = (uint *)CONCAT31(uVar21,cVar25 + *(char *)((int)pbVar9 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    *pbVar9 = *pbVar9 + bVar4;
    bVar4 = bVar4 + 0x6f & *(byte *)CONCAT31(uVar16,bVar4 + 0x6f);
    *param_2 = *param_2 + (char)settingMapper;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
    pcVar11 = (char *)CONCAT31(uVar16,bVar4 - *unaff_EDI);
code_r0x00403b2c:
    bVar4 = (char)pcVar11 - *pcVar11;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar4);
    *pbVar13 = *pbVar13 + bVar4;
    *(byte **)pbVar13 = param_2 + *(int *)pbVar13;
    *pbVar13 = *pbVar13 + bVar4;
    bVar27 = CARRY1(*pbVar13,bVar4);
    *pbVar13 = *pbVar13 + bVar4;
    pbStack_c = pbVar26;
    while( true ) {
      *(byte **)pbVar13 = pbVar13 + (uint)bVar27 + *(int *)pbVar13;
      unaff_EDI = unaff_EDI + 4;
      pbVar13[(int)param_2] = pbVar13[(int)param_2] + (char)unaff_EBX;
      *pbVar13 = *pbVar13 + (char)pbVar13;
      *(byte **)pbStack_c = unaff_EBX + *(int *)pbStack_c;
      bVar4 = (byte)((uint)settingMapper >> 8);
      cVar25 = (char)settingMapper;
      settingMapper =
           (byte *)CONCAT22((short)((uint)settingMapper >> 0x10),CONCAT11(bVar4 + *pbVar13,cVar25));
      pbVar13 = pbVar13 + (uint)CARRY1(bVar4,*pbVar13) + *(int *)pbVar13;
      *param_2 = *param_2 + cVar25;
      cVar25 = (char)unaff_EBX - pbStack_c[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar25);
      unaff_EBP = pbStack_8;
      pbVar26 = pbStack_c;
      if ((POPCOUNT(cVar25) & 1U) != 0) break;
code_r0x00403b4c:
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      bVar4 = (byte)pbVar13 | *unaff_EBX;
      piVar8 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar4);
      if (bVar4 != 0) {
        pbStack_8 = pbStack_8 + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar8 = (char)*piVar8 + bVar4;
        settingMapper =
             (byte *)CONCAT22((short)((uint)settingMapper >> 0x10),
                              CONCAT11((byte)((uint)settingMapper >> 8) | *param_2,
                                       (char)settingMapper));
        pbStack_c = pbStack_c + *piVar8;
        pcVar11 = (char *)((int)piVar8 + *piVar8);
        uVar16 = (undefined3)((uint)pcVar11 >> 8);
        bVar6 = (char)pcVar11 - *pcVar11;
        pbVar26 = (byte *)CONCAT31(uVar16,bVar6);
        bVar4 = *pbVar26;
        *pbVar26 = *pbVar26 + bVar6;
        piVar8 = (int *)CONCAT31(uVar16,bVar6 - CARRY1(bVar4,bVar6));
      }
      *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
      pbVar26 = pbStack_c + 4;
      out(*(undefined4 *)pbStack_c,(short)param_2);
      pbVar13 = (byte *)(((uint)piVar8 >> 8) * 0x100);
      *param_2 = *param_2 + (byte)settingMapper;
      bVar4 = (char)param_2 - *unaff_EBX;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar4);
      *unaff_EBX = *unaff_EBX;
      *param_2 = *param_2 + (char)((uint)settingMapper >> 8);
      *pbVar13 = *pbVar13;
      pcVar11 = (char *)(((uint)piVar8 >> 8) * 0x200);
      *pcVar11 = *pcVar11 + (char)unaff_EBX;
      bVar27 = CARRY1(*settingMapper,bVar4);
      *settingMapper = *settingMapper + bVar4;
      pbStack_c = pbVar26;
      if (bVar27) {
        *pbVar13 = *pbVar13;
        settingMapper =
             (byte *)CONCAT31((int3)((uint)settingMapper >> 8),(byte)settingMapper | *param_2);
        goto code_r0x00403b73;
      }
    }
  } while( true );
code_r0x00403d33:
  pbStack_8 = pbStack_8 + -*puVar14;
  do {
    bVar4 = (byte)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar4;
    pbVar9 = pbVar9 + -*(int *)(pbStack_8 + -0x1a);
    *(byte *)puVar14 = (byte)*puVar14 + bVar4;
    bVar4 = bVar4 | (byte)*puVar20;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar4);
    *(byte *)puVar14 = (byte)*puVar14 | bVar4;
    bVar4 = (byte)*puVar14;
    pbStack_8 = (byte *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
        bVar4 = (byte)puVar14 | (byte)*puVar20;
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        uVar15 = CONCAT21((short)((uint)pcVar11 >> 0x10),(byte)((uint)pcVar11 >> 8) | bRamfe140212);
        while( true ) {
          pcVar11 = (char *)((uint)uVar15 << 8);
          bVar7 = (byte)puVar14;
          *(byte *)puVar14 = (byte)*puVar14 & bVar7;
          bVar6 = *unaff_EBX;
          bVar24 = (byte)uVar15;
          bVar17 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar24;
          bVar4 = *unaff_EBX;
          if (!CARRY1(bVar6,bVar24)) break;
          *(byte *)puVar14 = (byte)*puVar14 + bVar7;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar14 = (byte)*puVar14 + bVar7;
          bVar7 = bVar7 | (byte)*puVar20;
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7);
          bVar27 = (POPCOUNT(bVar7) & 1U) == 0;
          while( true ) {
            cVar25 = (char)((uint)unaff_EBX >> 8);
            uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar27) {
              *(byte *)puVar20 = (byte)*puVar20;
              unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar25 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
            uVar19 = (undefined2)((uint)pcVar11 >> 0x10);
            bVar6 = (byte)((uint)pcVar11 >> 8) | (byte)*puVar14;
            uVar15 = CONCAT21(uVar19,bVar6);
            *puVar14 = *puVar14 & (uint)puVar14;
            *unaff_EBX = *unaff_EBX + bVar6;
            uVar16 = (undefined3)((uint)puVar14 >> 8);
            bVar4 = (char)puVar14 - bVar6;
            pcVar11 = (char *)CONCAT31(uVar16,bVar4);
            *pcVar11 = *pcVar11 + bVar4;
            bVar4 = bVar4 | (byte)*puVar20;
            puVar14 = (uint *)CONCAT31(uVar16,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar14 = (byte)*puVar14 + bVar4;
            pcVar11 = (char *)((uint)CONCAT21(uVar19,bVar6 | (byte)*puVar14) << 8);
            *puVar14 = *puVar14 - (int)puVar14;
            *(byte *)puVar20 = (byte)*puVar20;
            unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar25 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
              uVar18 = (undefined2)((uint)puVar20 >> 0x10);
              cVar25 = (char)puVar20;
              bVar4 = (byte)((uint)puVar20 >> 8) | unaff_EBX[-0x17];
              puVar20 = (uint *)CONCAT22(uVar18,CONCAT11(bVar4,cVar25));
              *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
                uVar16 = (undefined3)((uint)puVar14 >> 8);
                bVar17 = (byte)puVar14 | (byte)*puVar20;
                pcVar10 = (char *)CONCAT31(uVar16,bVar17);
                bVar6 = unaff_EBX[-0x16];
                *pcVar10 = *pcVar10 + bVar17;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar6 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar10 = *pcVar10 + bVar17;
                pbVar13 = (byte *)CONCAT31(uVar16,bVar17 | (byte)*puVar20);
                while( true ) {
                  *pbVar13 = *pbVar13 + (byte)pbVar13;
                  uVar16 = (undefined3)((uint)pbVar13 >> 8);
                  bVar6 = (byte)pbVar13 | (byte)*puVar20;
                  puVar14 = (uint *)CONCAT31(uVar16,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                  bVar17 = pbVar9[-0x14];
                  *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar20;
                  pcVar10 = (char *)CONCAT31(uVar16,bVar6);
                  bVar7 = unaff_EBX[-0x15];
                  *pcVar10 = *pcVar10 + bVar6;
                  pcVar11 = (char *)((uint)CONCAT21((short)((uint)pcVar11 >> 0x10),
                                                    (byte)((uint)pcVar11 >> 8) | bVar17 |
                                                    pbVar9[-0x13]) << 8);
                  *pcVar10 = *pcVar10 + bVar6;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar10 = *pcVar10 + bVar6;
                  pbVar13 = (byte *)CONCAT31(uVar16,bVar6 | (byte)*puVar20);
                  do {
                    do {
                      bVar17 = (byte)pbVar13;
                      *pbVar13 = *pbVar13 + bVar17;
                      cVar22 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar13,
                                                            cVar22));
                      *pbVar13 = bVar17;
                      *pbVar13 = *pbVar13 + bVar17;
                      cVar5 = (char)((uint)pcVar11 >> 8) + *pbVar13;
                      pcVar11 = (char *)((uint)CONCAT21((short)((uint)pcVar11 >> 0x10),cVar5) << 8);
                      uVar16 = (undefined3)((uint)pbVar13 >> 8);
                      bVar17 = bVar17 & *pbVar13;
                      pbVar13 = (byte *)CONCAT31(uVar16,bVar17);
                      bVar6 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar5;
                    } while (SCARRY1(bVar6,cVar5) == (char)*unaff_EBX < '\0');
                    *pbVar13 = *pbVar13 + bVar17;
                    bVar17 = bVar17 | (byte)*puVar20;
                    pbVar13 = (byte *)CONCAT31(uVar16,bVar17);
                    if ((POPCOUNT(bVar17) & 1U) == 0) {
                      *pbVar13 = *pbVar13 + bVar17;
                      *pbVar13 = *pbVar13 + bVar17;
                      cVar25 = cVar25 - bVar4;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)puVar20 >> 8),cVar25);
                      *pbVar13 = *pbVar13 + bVar17;
                      bRam0312382b = bRam0312382b | *pbVar12;
                      while( true ) {
                        bVar6 = (byte)pbVar13;
                        *pbVar13 = *pbVar13 + bVar6;
                        bRam0312382b = bRam0312382b | (pbVar9 + 0x21b0000)[(int)pbVar13];
                        uVar16 = (undefined3)((uint)pbVar13 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar12 = *pbVar12 + bRam0312382b;
                        pbVar13 = (byte *)CONCAT31(uVar16,bVar6 | *pbVar26);
                      }
                      *pbVar13 = *pbVar13 + bVar6;
                      bVar6 = bVar6 | *pbVar26;
                      pcVar11 = (char *)CONCAT31(uVar16,bVar6);
                      out(*(undefined4 *)pbVar26,(short)pbVar12);
                      *pcVar11 = *pcVar11 + bVar6;
                      uVar19 = CONCAT11(bVar4 | bRam6f0a002b,cVar25);
                      pcVar10 = (char *)CONCAT22(uVar18,uVar19);
                      *pcVar11 = *pcVar11 + bVar6;
                      *pcVar10 = *pcVar10 + bRam0312382b;
                      out(*(undefined4 *)(pbVar26 + 4),uVar19);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar22 + *pcVar11);
                  } while (SCARRY1(cVar22,*pcVar11) != (char)(cVar22 + *pcVar11) < '\0');
                }
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar20 < '\0');
              *(byte *)puVar20 = (byte)*puVar20;
              *pcVar11 = *pcVar11 - (char)unaff_EBX;
              *(byte *)puVar14 = (byte)*puVar14 + bVar6;
              bVar6 = bVar6 | (byte)*puVar20;
              puVar14 = (uint *)CONCAT31(uVar16,bVar6);
              bVar27 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar27);
          }
        }
      } while (SCARRY1(bVar17,bVar24));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar11 >> 8);
    *pbVar9 = *pbVar9 - (char)unaff_EBX;
  } while( true );
}


