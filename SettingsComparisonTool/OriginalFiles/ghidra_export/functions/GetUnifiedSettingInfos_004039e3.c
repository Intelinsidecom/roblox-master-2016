/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004039e3
 * Raw Name    : GetUnifiedSettingInfos
 * Demangled   : GetUnifiedSettingInfos
 * Prototype   : byte * GetUnifiedSettingInfos(byte * multiSettingsMapper, byte * param_2)
 * Local Vars  : pbStack_8, pbStack_4, pcVar1, uVar2, uVar3, cVar4, bVar5, bVar6, bVar7, in_EAX, piVar8, pcVar9, pcVar10, pbVar11, pbVar12, puVar13, uVar14, multiSettingsMapper, uVar15, extraout_ECX, bVar16, uVar17, uVar18, puVar19, uVar20, cVar21, param_2, uVar22, unaff_EBX, bVar23, cVar24, unaff_EBP, unaff_ESI, unaff_EDI, pbVar25, in_ES, in_CS, in_CF, bVar26, uVar27
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall GetUnifiedSettingInfos(byte *multiSettingsMapper,byte *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint3 uVar14;
  int *piVar8;
  undefined3 uVar15;
  byte *in_EAX;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint *puVar13;
  byte bVar16;
  undefined2 uVar17;
  byte *extraout_ECX;
  undefined2 uVar18;
  uint *puVar19;
  undefined3 uVar20;
  char cVar21;
  undefined1 uVar22;
  byte bVar23;
  char cVar24;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte *pbVar25;
  undefined2 in_ES;
  undefined2 in_CS;
  bool in_CF;
  bool bVar26;
  undefined8 uVar27;
  byte *pbStack_8;
  byte *pbStack_4;
  
                    /* .NET CLR Managed Code */
  if (in_CF) {
code_r0x004039e5:
    *in_EAX = *in_EAX + (char)in_EAX;
    uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar23 = (byte)((uint)unaff_EBX >> 8) | param_2[0x32];
    pcVar10 = (char *)CONCAT22(uVar17,CONCAT11(bVar23,(char)unaff_EBX));
    pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_CS);
    cVar4 = (char)in_EAX + *pcVar10 + '-';
    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),cVar4);
    *in_EAX = *in_EAX;
    bVar5 = *param_2;
    cVar21 = (char)unaff_EBX - *unaff_ESI;
    cVar24 = unaff_EDI[0x17];
    *in_EAX = *in_EAX + cVar4;
    multiSettingsMapper =
         (byte *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                          CONCAT11((char)((uint)multiSettingsMapper >> 8) + cVar24 | *param_2,
                                   (char)multiSettingsMapper - bVar5));
    unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(bVar23 + *(char *)(CONCAT31((int3)((uint)pcVar10 >>
                                                                                   8),cVar21) + 0x4e
                                                                   ),cVar21));
    *in_EAX = *in_EAX + cVar4;
  }
  else {
code_r0x004039ab:
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - *unaff_EBX);
    bVar23 = (byte)in_EAX;
    *unaff_EBX = *unaff_EBX ^ bVar23;
    *param_2 = *param_2 + (char)((uint)multiSettingsMapper >> 8);
    *in_EAX = *in_EAX + bVar23;
    *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
    bVar5 = *in_EAX;
    *in_EAX = *in_EAX + bVar23;
    *(byte **)(unaff_EBX + -0x3d) =
         unaff_ESI + (uint)CARRY1(bVar5,bVar23) + *(int *)(unaff_EBX + -0x3d);
code_r0x004039ba:
    *in_EAX = *in_EAX + (char)in_EAX;
    multiSettingsMapper =
         (byte *)CONCAT31((int3)((uint)multiSettingsMapper >> 8),
                          (byte)multiSettingsMapper | *param_2);
    while( true ) {
      unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
      *in_EAX = *in_EAX + (byte)in_EAX;
      uVar15 = (undefined3)((uint)in_EAX >> 8);
      bVar5 = (byte)in_EAX | *param_2;
      pcVar10 = (char *)CONCAT31(uVar15,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        cVar24 = *pcVar10;
        *pcVar10 = *pcVar10 + bVar5;
        cVar4 = *pcVar10;
        pbVar11 = unaff_EBP;
        if (!SCARRY1(cVar24,bVar5)) goto code_r0x00403a22;
        goto code_r0x00403a24;
      }
      *pcVar10 = *pcVar10 + bVar5;
      *unaff_ESI = *unaff_ESI + 1;
      uVar2 = *(undefined6 *)CONCAT31(uVar15,bVar5 + 6);
      pbVar11 = (byte *)uVar2;
      bVar5 = *param_2;
      bVar23 = (byte)multiSettingsMapper;
      *param_2 = *param_2 + bVar23;
      if (CARRY1(bVar5,bVar23)) break;
      while( true ) {
        bVar5 = (char)pbVar11 - *unaff_EDI;
        bVar26 = bVar5 < *multiSettingsMapper;
        in_EAX = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5 - *multiSettingsMapper);
        while( true ) {
          cVar24 = (char)in_EAX;
          *in_EAX = *in_EAX + cVar24 + bVar26;
          *in_EAX = *in_EAX + cVar24;
          bVar6 = (byte)param_2;
          *multiSettingsMapper = *multiSettingsMapper + bVar6;
          multiSettingsMapper[0x101c00aa] = multiSettingsMapper[0x101c00aa] + (char)unaff_EBX;
          *in_EAX = *in_EAX + cVar24;
          *(byte **)unaff_ESI = unaff_EBX + *(int *)unaff_ESI;
          bVar5 = (byte)((uint)multiSettingsMapper >> 8);
          uVar17 = (undefined2)((uint)multiSettingsMapper >> 0x10);
          cVar24 = (char)multiSettingsMapper;
          bVar23 = bVar5 + *in_EAX;
          multiSettingsMapper = (byte *)CONCAT22(uVar17,CONCAT11(bVar23,cVar24));
          pbVar11 = in_EAX + (uint)CARRY1(bVar5,*in_EAX) + *(int *)in_EAX;
          *param_2 = *param_2 + cVar24;
          cVar4 = (char)unaff_EBX - unaff_ESI[2];
          unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar4);
          uVar14 = (uint3)((uint)pbVar11 >> 8);
          bVar5 = (byte)pbVar11;
          if ((POPCOUNT(cVar4) & 1U) != 0) break;
          *pbVar11 = *pbVar11 + bVar5;
          bVar5 = bVar5 | *unaff_EBX;
          piVar8 = (int *)CONCAT31(uVar14,bVar5);
          if (bVar5 == 0) {
            *(char *)piVar8 = (char)*piVar8;
            out(*(undefined4 *)unaff_ESI,(short)param_2);
            in_EAX = (byte *)((uint)uVar14 << 8);
            *param_2 = *param_2 + cVar24;
            unaff_ESI = unaff_ESI + 4;
            goto code_r0x004039ab;
          }
          unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
          *(byte *)piVar8 = (char)*piVar8 + bVar5;
          multiSettingsMapper = (byte *)CONCAT22(uVar17,CONCAT11(bVar23 | *param_2,cVar24));
          unaff_ESI = unaff_ESI + *piVar8;
          pcVar10 = (char *)((int)piVar8 + *piVar8);
          bVar23 = (char)pcVar10 - *pcVar10;
          pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar23);
          bVar5 = *pbVar11;
          *pbVar11 = *pbVar11 + bVar23;
          in_EAX = pbVar11 + (-(uint)CARRY1(bVar5,bVar23) - *(int *)pbVar11);
          bVar26 = CARRY1(*multiSettingsMapper,bVar6);
          *multiSettingsMapper = *multiSettingsMapper + bVar6;
          if (bVar26) goto code_r0x004039ba;
        }
        *pbVar11 = *pbVar11 + bVar5;
        param_2[0x16060000] = param_2[0x16060000] - cVar24;
        unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
        cVar4 = bVar5 + 2;
        in_EAX = (byte *)CONCAT31(uVar14,cVar4);
        if ((POPCOUNT(cVar4) & 1U) != 0) break;
        *in_EAX = *in_EAX + cVar4;
        bVar5 = bVar5 + 0x71 & *(byte *)CONCAT31(uVar14,bVar5 + 0x71);
        pbVar11 = (byte *)CONCAT31(uVar14,bVar5);
        *param_2 = *param_2 + cVar24;
        param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar6 + *unaff_EDI);
        unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar5;
      }
    }
    *pbVar11 = *pbVar11 + (char)uVar2;
    uVar17 = (undefined2)((uint)multiSettingsMapper >> 0x10);
    bVar6 = (byte)((uint)multiSettingsMapper >> 8) | *pbVar11;
    multiSettingsMapper = (byte *)CONCAT22(uVar17,CONCAT11(bVar6,bVar23));
    in_EAX = pbVar11 + -*(int *)pbVar11;
    bVar5 = *unaff_EBX;
    *unaff_EBX = *unaff_EBX + bVar6;
    if (CARRY1(bVar5,bVar6)) {
      *in_EAX = *in_EAX + (char)in_EAX;
      multiSettingsMapper = (byte *)CONCAT22(uVar17,CONCAT11(bVar6 | *param_2,bVar23));
      param_2._1_1_ = (char)((uint)param_2 >> 8);
      param_2._2_2_ = (undefined2)((uint)param_2 >> 0x10);
      param_2._0_1_ = SUB41(param_2,0);
      param_2._0_2_ = CONCAT11(param_2._1_1_ - unaff_EBX[-0x3a],param_2._0_1_);
      param_2 = (byte *)CONCAT22(param_2._2_2_,param_2._0_2_);
      goto code_r0x004039e5;
    }
  }
  bVar5 = (byte)in_EAX;
  uVar15 = (undefined3)((uint)in_EAX >> 8);
  pcVar10 = (char *)CONCAT31(uVar15,bVar5 + 0x28);
  *pcVar10 = (*pcVar10 - (bVar5 + 0x28)) - (0xd7 < bVar5);
  *param_2 = *param_2 + (char)multiSettingsMapper;
  bVar23 = bVar5 + 0x1b;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4f],
                                        (char)unaff_EBX));
  *(char *)CONCAT31(uVar15,bVar23) = *(char *)CONCAT31(uVar15,bVar23) + bVar23;
  pcVar9 = (char *)CONCAT31(uVar15,bVar5 + 0x43);
  *pcVar9 = (*pcVar9 - (bVar5 + 0x43)) - (0xd7 < bVar23);
  *param_2 = *param_2 + (char)multiSettingsMapper;
  pcVar10 = pcVar9 + -0x6b721c;
  pcVar9 = pcVar9 + -0x6b721a;
  *pcVar9 = *pcVar9 + (char)((uint)param_2 >> 8);
  cVar4 = *pcVar9;
code_r0x00403a22:
  pbVar11 = unaff_EBP;
  if ((POPCOUNT(cVar4) & 1U) == 0) {
code_r0x00403a24:
    cVar24 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar24;
    uVar15 = (undefined3)((uint)pcVar10 >> 8);
    bVar5 = cVar24 + 2;
    unaff_EBP = pbVar11;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
      piVar8 = (int *)CONCAT31(uVar15,cVar24 + '*');
      *piVar8 = (*piVar8 - (int)piVar8) - (uint)(0xd7 < bVar5);
      bVar5 = *param_2;
      bVar7 = (byte)multiSettingsMapper;
      *param_2 = *param_2 + bVar7;
      out(*(undefined4 *)unaff_ESI,(short)param_2);
      bVar6 = ((cVar24 + '*') - (char)*piVar8) - CARRY1(bVar5,bVar7);
      pbVar25 = (byte *)CONCAT31(uVar15,bVar6);
      *param_2 = *param_2 + bVar7;
      uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar22 = SUB41(unaff_EBX,0);
      cVar24 = (char)((uint)unaff_EBX >> 8) - unaff_ESI[0x1f];
      unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar24,uVar22));
      *pbVar25 = *pbVar25 + bVar6;
      bVar23 = *param_2;
      bVar5 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar6;
      unaff_ESI = unaff_ESI + ((4 - *(int *)pbVar25) - (uint)CARRY1(bVar5,bVar6));
      pbVar25 = (byte *)CONCAT31(uVar15,bVar6);
      multiSettingsMapper =
           (byte *)(CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                             CONCAT11((byte)((uint)multiSettingsMapper >> 8) | bVar23,bVar7)) + -1);
      bVar5 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar6;
      bVar5 = (bVar6 - *pbVar25) - CARRY1(bVar5,bVar6);
      *multiSettingsMapper = *multiSettingsMapper + (char)param_2;
      bVar26 = CARRY1(bVar5,*param_2);
      bVar5 = bVar5 + *param_2;
      pbVar25 = (byte *)CONCAT31(uVar15,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar25 = *pbVar25 + bVar5;
        cVar4 = (bVar5 + 0x6f) - (0x90 < bVar5);
        unaff_EBP = (byte *)CONCAT31(uVar15,cVar4);
        bVar5 = *param_2;
        *param_2 = *param_2 + (char)multiSettingsMapper;
        if (SCARRY1(bVar5,(char)multiSettingsMapper) == (char)*param_2 < '\0')
        goto code_r0x00403aaf;
        *unaff_EBP = *unaff_EBP + cVar4;
        pcVar10 = (char *)CONCAT31(uVar15,cVar4 + '\x02');
        bVar23 = cVar24 + unaff_EBX[0x52];
        unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(bVar23,uVar22));
        *pcVar10 = *pcVar10 + cVar4 + '\x02';
        bVar5 = cVar4 + 4;
        unaff_EBP = (byte *)CONCAT31(uVar15,bVar5);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *unaff_EBP = *unaff_EBP + bVar5;
          cVar24 = (cVar4 + 's') - (0x90 < bVar5);
          pcVar10 = (char *)CONCAT31(uVar15,cVar24);
          bVar5 = (byte)((uint)multiSettingsMapper >> 8);
          bVar26 = CARRY1(*unaff_EBX,bVar5);
          *unaff_EBX = *unaff_EBX + bVar5;
          pbVar25 = unaff_ESI;
          if (bVar26) {
            *pcVar10 = *pcVar10 + cVar24;
            unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(bVar23 | pbVar11[0x5c],uVar22));
            unaff_EBP = pbVar11;
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)unaff_EBP;
        unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(bVar23 + unaff_EBX[0x52],uVar22));
        pbStack_4 = pbVar11;
code_r0x00403abf:
        *unaff_EBP = *unaff_EBP + (char)unaff_EBP;
        cVar24 = (char)unaff_EBP + '\x02';
        pbVar25 = (byte *)CONCAT31((int3)((uint)unaff_EBP >> 8),cVar24);
        bVar26 = (POPCOUNT(cVar24) & 1U) == 0;
        if (!bVar26) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        pbStack_4 = pbVar11;
        if (bVar26) {
          *pbVar25 = *pbVar25 + (byte)pbVar25;
          bVar5 = (byte)pbVar25 | pbVar25[0x400005e];
          unaff_EBP = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar5);
          if ((char)bVar5 < '\x01') goto code_r0x00403b0b;
          *unaff_EBP = *unaff_EBP + bVar5;
          pbVar11 = pbStack_4;
code_r0x00403aaf:
          pbStack_4 = pbVar11;
          cVar24 = (char)unaff_EBP + '(';
          unaff_EBP = (byte *)CONCAT31((int3)((uint)unaff_EBP >> 8),cVar24);
          *(byte **)unaff_EBP = unaff_EBP + *(int *)unaff_EBP;
          bVar5 = *unaff_EBX;
          bVar23 = (byte)((uint)multiSettingsMapper >> 8);
          *unaff_EBX = *unaff_EBX + bVar23;
          pbVar11 = pbStack_4;
          if (!CARRY1(bVar5,bVar23)) goto code_r0x00403ad8;
          *unaff_EBP = *unaff_EBP + cVar24;
          multiSettingsMapper =
               (byte *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                                CONCAT11(bVar23 | *unaff_EBX,(char)multiSettingsMapper));
          if ((POPCOUNT(*param_2 - cVar24) & 1U) != 0) {
            *unaff_ESI = *unaff_ESI + cVar24;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                              (char)unaff_EBX));
      }
      bVar5 = (byte)pbVar25;
      *pbVar25 = *pbVar25 + bVar5;
      cVar24 = (bVar5 + 0x6f) - (0x90 < bVar5);
      pcVar10 = (char *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar24);
      bVar5 = *unaff_EBX;
      cVar4 = (char)((uint)multiSettingsMapper >> 8);
      *unaff_EBX = *unaff_EBX + cVar4;
      if (*unaff_EBX == 0 || SCARRY1(bVar5,cVar4) != (char)*unaff_EBX < '\0') goto code_r0x00403b2c;
      *pcVar10 = *pcVar10 + cVar24;
      unaff_EBP = pbStack_4;
    }
    else {
      pcVar10 = (char *)CONCAT31(uVar15,bVar5 + *param_2);
      pbVar25 = unaff_ESI;
      if ((POPCOUNT(bVar5 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar10) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),(byte)pcVar10 + 0x2d);
code_r0x00403ad8:
    pbStack_4 = pbVar11;
    bVar5 = *unaff_EBP;
    bVar23 = (byte)unaff_EBP;
    *unaff_EBP = *unaff_EBP + bVar23;
    pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_ES);
    if (CARRY1(bVar5,bVar23)) {
      *unaff_EBP = *unaff_EBP + bVar23;
      bVar23 = bVar23 | unaff_EBP[0x400005d];
      unaff_EBP = (byte *)CONCAT31((int3)((uint)unaff_EBP >> 8),bVar23);
      pbVar25 = unaff_ESI;
      if ((char)bVar23 < '\x01') {
        *unaff_EBP = *unaff_EBP + bVar23;
        multiSettingsMapper =
             (byte *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                              CONCAT11((byte)((uint)multiSettingsMapper >> 8) | *param_2,
                                       (char)multiSettingsMapper));
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                              (char)unaff_EBX));
        goto code_r0x00403b4c;
      }
code_r0x00403ae7:
      *unaff_EBP = *unaff_EBP + (char)unaff_EBP;
      cVar24 = (char)unaff_EBP + '(';
      unaff_EBP = (byte *)CONCAT31((int3)((uint)unaff_EBP >> 8),cVar24);
      *(byte **)unaff_EBP = unaff_EBP + *(int *)unaff_EBP;
      bVar5 = *unaff_EBX;
      bVar23 = (byte)((uint)multiSettingsMapper >> 8);
      *unaff_EBX = *unaff_EBX + bVar23;
      unaff_ESI = pbVar25;
      if (!CARRY1(bVar5,bVar23)) goto code_r0x00403b0b;
      *unaff_EBP = *unaff_EBP + cVar24;
      goto code_r0x00403af3;
    }
  }
  else {
    bVar5 = *param_2;
    *param_2 = *param_2 + (char)multiSettingsMapper;
    if (SCARRY1(bVar5,(char)multiSettingsMapper) == (char)*param_2 < '\0') {
      pbVar11 = (byte *)(pcVar10 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar10 = *pcVar10 + (char)pcVar10;
    pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + '\x02');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                          (char)unaff_EBX));
    pbVar25 = unaff_ESI;
code_r0x00403a7d:
    cVar24 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar24;
    uVar15 = (undefined3)((uint)pcVar10 >> 8);
    cVar4 = cVar24 + '-';
    pbVar11 = (byte *)CONCAT31(uVar15,cVar4);
    unaff_ESI = pbVar25;
    if ((POPCOUNT(cVar4 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar11 = *pbVar11 + cVar4;
    bVar5 = cVar24 + 0x2f;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      bVar5 = *param_2;
      *param_2 = *param_2 + (byte)multiSettingsMapper;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar5,(byte)multiSettingsMapper);
      unaff_EBP = (byte *)CONCAT31(uVar15,cVar24 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
    bVar26 = 0x90 < bVar5;
    pcVar10 = (char *)CONCAT31(uVar15,cVar24 + -0x62);
    pbVar11 = unaff_EBP;
code_r0x00403a8f:
    pbStack_4 = pbVar11;
    uVar15 = (undefined3)((uint)pcVar10 >> 8);
    bVar23 = (char)pcVar10 - bVar26;
    unaff_EBP = (byte *)CONCAT31(uVar15,bVar23);
    bVar5 = *unaff_EBX;
    cVar24 = (char)((uint)multiSettingsMapper >> 8);
    *unaff_EBX = *unaff_EBX + cVar24;
    unaff_ESI = pbVar25;
    if (*unaff_EBX != 0 && SCARRY1(bVar5,cVar24) == (char)*unaff_EBX < '\0') {
      *unaff_EBP = *unaff_EBP + bVar23;
      unaff_ESI = (byte *)CONCAT31(uVar15,bVar23 + 0x2d);
      *(byte **)(pbVar25 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar23) + *(int *)(pbVar25 + (int)unaff_EDI * 8);
      bVar26 = CARRY1(*pbVar25,(byte)pbVar25);
      *pbVar25 = *pbVar25 + (byte)pbVar25;
      pbVar11 = pbStack_4;
      goto code_r0x00403aa1;
    }
code_r0x00403af3:
    multiSettingsMapper =
         (byte *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                          CONCAT11((byte)((uint)multiSettingsMapper >> 8) | *unaff_EBP,
                                   (char)multiSettingsMapper));
    *unaff_ESI = *unaff_ESI + (char)unaff_EBP;
  }
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *unaff_EBP = *unaff_EBP + (char)unaff_EBP;
  uVar15 = (undefined3)((uint)unaff_EBP >> 8);
  bVar23 = (char)unaff_EBP + 0x6f;
  bVar5 = *(byte *)CONCAT31(uVar15,bVar23);
  *param_2 = *param_2 + (char)multiSettingsMapper;
  unaff_EBP = (byte *)CONCAT31(uVar15,(bVar23 & bVar5) + *unaff_ESI);
  *multiSettingsMapper = *multiSettingsMapper - (char)((uint)param_2 >> 8);
code_r0x00403b0b:
  do {
    *unaff_EBP = *unaff_EBP + (char)unaff_EBP;
    param_2[0x16060000] = param_2[0x16060000] - (char)multiSettingsMapper;
    unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
    cVar24 = (char)unaff_EBP + '\x02';
    pbVar25 = (byte *)CONCAT31((int3)((uint)unaff_EBP >> 8),cVar24);
    bVar26 = (POPCOUNT(cVar24) & 1U) == 0;
code_r0x00403b18:
    bVar5 = (byte)pbVar25;
    uVar15 = (undefined3)((uint)pbVar25 >> 8);
    if (!bVar26) {
      *param_2 = *param_2 + (char)multiSettingsMapper;
      pbVar11 = (byte *)CONCAT31(uVar15,bVar5 | *unaff_ESI);
code_r0x00403b73:
      pbVar25 = (byte *)(unaff_EDI + *(int *)(pbStack_4 + -0x37));
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      uVar15 = (undefined3)((uint)pbVar11 >> 8);
      bVar5 = (byte)pbVar11 | *param_2;
      pcVar10 = (char *)CONCAT31(uVar15,bVar5);
      uVar27 = CONCAT44(param_2,pcVar10);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pcVar10 = *pcVar10 + bVar5;
        *unaff_ESI = *unaff_ESI + 1;
        return (byte *)CONCAT31(uVar15,bVar5 + 6);
      }
      bVar5 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar5,'\x01')) {
        uVar27 = (*pcVar1)();
        multiSettingsMapper = extraout_ECX;
      }
      pbVar11 = (byte *)uVar27;
      *pbVar11 = *pbVar11 + (char)uVar27;
      cVar4 = (char)((ulonglong)uVar27 >> 0x20);
      puVar19 = (uint *)CONCAT22((short)((ulonglong)uVar27 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar27 >> 0x28) | unaff_EBX[0x2f],cVar4)
                                );
      *pbVar11 = *pbVar11 + (char)uVar27;
      cVar24 = (char)multiSettingsMapper;
      bVar6 = (byte)((uint)multiSettingsMapper >> 8) | *pbVar11;
      pbVar11 = pbVar11 + *(int *)pbVar11;
      bVar5 = *unaff_EBX;
      *unaff_EBX = *unaff_EBX + bVar6;
      bVar23 = (byte)pbVar11;
      if (CARRY1(bVar5,bVar6)) {
        *pbVar11 = *pbVar11 + bVar23;
        bVar6 = bVar6 | (byte)*puVar19;
        *unaff_EBX = *unaff_EBX - cVar4;
        *pbVar11 = *pbVar11 + bVar23;
        uVar15 = (undefined3)((uint)pbVar11 >> 8);
        bVar23 = bVar23 | (byte)*puVar19;
        piVar8 = (int *)CONCAT31(uVar15,bVar23);
        pbStack_4 = pbStack_4 + *piVar8;
        *(byte *)piVar8 = (char)*piVar8 + bVar23;
        cVar4 = (char)unaff_EBX - *unaff_ESI;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar4)
                                                       + 0x5f),cVar4));
        *(byte *)piVar8 = (char)*piVar8 + bVar23;
        bVar5 = bVar23 + 0x2a & (byte)*puVar19;
        pbVar25 = pbVar25 + *(int *)(pbStack_4 + 0x5f);
        *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
        pbVar11 = (byte *)CONCAT31(uVar15,bVar5 + 0x2a);
        *(byte *)puVar19 = (byte)*puVar19 + 0x28;
        *pbVar11 = *pbVar11 + bVar5 + 0x2a;
      }
      else {
        *unaff_ESI = *unaff_ESI + bVar23;
      }
      pcVar10 = (char *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),CONCAT11(bVar6,cVar24));
      *pbStack_4 = *pbStack_4 - bVar6;
      *(byte *)puVar19 = (byte)*puVar19 + cVar24;
      bVar5 = (byte)pbVar11 - 0xb;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
      if (10 < (byte)pbVar11) {
        *pbVar12 = *pbVar12 | bVar5;
        return pbVar12;
      }
      *(byte *)puVar19 = (byte)*puVar19 + cVar24;
      do {
        bVar5 = unaff_EBX[-0x23];
        bVar6 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar6;
        bVar23 = pbStack_4[-0x22];
        *pbVar12 = *pbVar12 + bVar6;
        uVar15 = (undefined3)((uint)pbVar12 >> 8);
        bVar6 = bVar6 | *unaff_ESI;
        pbVar11 = (byte *)CONCAT31(uVar15,bVar6);
        cVar4 = (char)unaff_EBX - *unaff_ESI;
        unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                     CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5 |
                                                              bVar23,(char)unaff_EBX)) >> 8),cVar4);
        cVar24 = (char)pcVar10;
        pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                   CONCAT11((char)((uint)pcVar10 >> 8) + *pbVar11,cVar24));
        *(byte *)puVar19 = (byte)*puVar19 + cVar24;
        bVar23 = bVar6 - *pbVar11;
        pbVar12 = (byte *)CONCAT31(uVar15,bVar23);
        unaff_ESI = unaff_ESI + (-(uint)(bVar6 < *pbVar11) - *(int *)pbVar12);
        puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 * '\x02');
        *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
        *pbVar25 = *pbVar25 + cVar4;
        bVar5 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar23;
        *puVar19 = (uint)(pbVar12 + (uint)CARRY1(bVar5,bVar23) + *puVar19);
      } while ((POPCOUNT(*puVar19 & 0xff) & 1U) != 0);
code_r0x00403cb7:
      *pbVar12 = *pbVar12 + (char)pbVar12;
      pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),(byte)pcVar10 | pbVar12[(int)pcVar10]);
      bVar26 = false;
      pbVar12 = (byte *)((uint)pbVar12 & 0xffffff00);
      do {
        pbVar25 = pbVar25 + (-(uint)bVar26 - *(int *)unaff_EBX);
        pcVar9 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),*pcVar10);
        *pcVar9 = *pcVar9 + *pcVar10;
        pbVar12 = (byte *)CONCAT31((int3)((uint)(pcVar9 + (unaff_ESI[0x2000001] <
                                                          (byte)((uint)pcVar10 >> 8)) + 0xda7d) >> 8
                                         ),((byte)(pcVar9 + (unaff_ESI[0x2000001] <
                                                            (byte)((uint)pcVar10 >> 8)) + 0xda7d) |
                                           (byte)*puVar19) + 0x7d);
        pcVar10 = pcVar10 + -1;
        *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar10;
        while( true ) {
          uVar20 = (undefined3)((uint)puVar19 >> 8);
          cVar24 = (char)puVar19 + *(char *)((int)pbVar25 * 2 + 0xa0000e1);
          puVar19 = (uint *)CONCAT31(uVar20,cVar24);
          bVar26 = CARRY1((byte)pbVar12,(byte)*puVar19);
          uVar15 = (undefined3)((uint)pbVar12 >> 8);
          bVar5 = (byte)pbVar12 + (byte)*puVar19;
          pbVar12 = (byte *)CONCAT31(uVar15,bVar5);
          if ((POPCOUNT(bVar5) & 1U) != 0) break;
          *pbVar12 = *pbVar12 + bVar5;
          cVar4 = (char)pcVar10;
          pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar10 >> 8) | pbVar25[-0x65],cVar4));
          bVar23 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar5;
          if (CARRY1(bVar23,bVar5)) {
            *pbVar12 = *pbVar12 + bVar5;
            unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_4[-0x1d],
                                                  (char)unaff_EBX));
            *pbVar12 = *pbVar12 + bVar5;
            bVar26 = false;
            bVar5 = bVar5 | (byte)*puVar19;
            pcVar9 = (char *)CONCAT31(uVar15,bVar5);
            while( true ) {
              bVar23 = (byte)pcVar9;
              uVar15 = (undefined3)((uint)pcVar9 >> 8);
              if (bVar26 == (char)bVar5 < '\0') break;
              *pcVar9 = *pcVar9 + bVar23;
              bVar23 = bVar23 | (byte)*puVar19;
              puVar13 = (uint *)CONCAT31(uVar15,bVar23);
              *pbVar25 = *pbVar25 << 1 | (char)*pbVar25 < '\0';
              uVar3 = *puVar13;
              *(byte *)puVar13 = (byte)*puVar13 + bVar23;
              pbStack_4 = pbStack_4 + (-(uint)CARRY1((byte)uVar3,bVar23) - *puVar13);
              *puVar13 = *puVar13 << 1 | (uint)((int)*puVar13 < 0);
              while( true ) {
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19 + (byte)pcVar10;
                cVar24 = (char)puVar13 + 'o' + CARRY1((byte)uVar3,(byte)pcVar10);
                pcVar9 = (char *)CONCAT31((int3)((uint)puVar13 >> 8),cVar24);
                pcVar10 = (char *)0x20a0000;
                if ((POPCOUNT(cVar24) & 1U) != 0) break;
                *pcVar9 = *pcVar9 + cVar24;
                bVar5 = bRamfe140212;
                pcVar10 = (char *)0x0;
                uVar15 = (undefined3)((uint)(pcVar9 + -0x732b0000) >> 8);
                bVar23 = in(0);
                puVar13 = (uint *)CONCAT31(uVar15,bVar23);
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar19 < '\0') {
                  *(byte *)puVar13 = (byte)*puVar13 + bVar23;
                  bVar23 = bVar23 | (byte)*puVar19;
                  puVar13 = (uint *)CONCAT31(uVar15,bVar23);
                  if ((POPCOUNT(bVar23) & 1U) == 0) {
                    *(byte *)puVar13 = (byte)*puVar13 + bVar23;
                    pcVar10 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar5 | (byte)*puVar13) << 8);
                    *(byte *)puVar13 = (byte)*puVar13 + bVar23;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar13 = (byte)*puVar13 + bVar23;
                  puVar13 = (uint *)CONCAT31(uVar15,bVar23 | (byte)*puVar19);
                }
              }
              *(byte *)puVar19 = (byte)*puVar19;
              bVar26 = SCARRY1((char)puVar19,*pbVar25);
              bVar5 = (char)puVar19 + *pbVar25;
              puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar5);
            }
            if (bVar26 == (char)bVar5 < '\0') {
              *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar10;
              pbVar12 = (byte *)((uint)pcVar9 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar9 = *pcVar9 + bVar23;
            pbVar12 = (byte *)CONCAT31(uVar15,(bVar23 | (byte)*puVar19) + 0x7d);
            pcVar10 = pcVar10 + -1;
            *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar10;
          }
          else {
            *(byte *)puVar19 = (byte)*puVar19 + cVar4;
            puVar19 = (uint *)CONCAT31(uVar20,cVar24 + *(char *)((int)pbVar25 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    *pbVar25 = *pbVar25 + bVar5;
    bVar5 = bVar5 + 0x6f & *(byte *)CONCAT31(uVar15,bVar5 + 0x6f);
    *param_2 = *param_2 + (char)multiSettingsMapper;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar5;
    pcVar10 = (char *)CONCAT31(uVar15,bVar5 - *unaff_EDI);
code_r0x00403b2c:
    bVar5 = (char)pcVar10 - *pcVar10;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar5);
    *pbVar11 = *pbVar11 + bVar5;
    *(byte **)pbVar11 = param_2 + *(int *)pbVar11;
    *pbVar11 = *pbVar11 + bVar5;
    bVar26 = CARRY1(*pbVar11,bVar5);
    *pbVar11 = *pbVar11 + bVar5;
    pbStack_8 = unaff_ESI;
    while( true ) {
      *(byte **)pbVar11 = pbVar11 + (uint)bVar26 + *(int *)pbVar11;
      unaff_EDI = unaff_EDI + 4;
      pbVar11[(int)param_2] = pbVar11[(int)param_2] + (char)unaff_EBX;
      *pbVar11 = *pbVar11 + (char)pbVar11;
      *(byte **)pbStack_8 = unaff_EBX + *(int *)pbStack_8;
      bVar5 = (byte)((uint)multiSettingsMapper >> 8);
      cVar24 = (char)multiSettingsMapper;
      multiSettingsMapper =
           (byte *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                            CONCAT11(bVar5 + *pbVar11,cVar24));
      unaff_EBP = pbVar11 + (uint)CARRY1(bVar5,*pbVar11) + *(int *)pbVar11;
      *param_2 = *param_2 + cVar24;
      cVar24 = (char)unaff_EBX - pbStack_8[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar24);
      unaff_ESI = pbStack_8;
      if ((POPCOUNT(cVar24) & 1U) != 0) break;
code_r0x00403b4c:
      *unaff_EBP = *unaff_EBP + (byte)unaff_EBP;
      bVar5 = (byte)unaff_EBP | *unaff_EBX;
      piVar8 = (int *)CONCAT31((int3)((uint)unaff_EBP >> 8),bVar5);
      if (bVar5 != 0) {
        pbStack_4 = pbStack_4 + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar8 = (char)*piVar8 + bVar5;
        multiSettingsMapper =
             (byte *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                              CONCAT11((byte)((uint)multiSettingsMapper >> 8) | *param_2,
                                       (char)multiSettingsMapper));
        pbStack_8 = pbStack_8 + *piVar8;
        pcVar10 = (char *)((int)piVar8 + *piVar8);
        uVar15 = (undefined3)((uint)pcVar10 >> 8);
        bVar23 = (char)pcVar10 - *pcVar10;
        pbVar11 = (byte *)CONCAT31(uVar15,bVar23);
        bVar5 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar23;
        piVar8 = (int *)CONCAT31(uVar15,bVar23 - CARRY1(bVar5,bVar23));
      }
      *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
      unaff_ESI = pbStack_8 + 4;
      out(*(undefined4 *)pbStack_8,(short)param_2);
      pbVar11 = (byte *)(((uint)piVar8 >> 8) * 0x100);
      *param_2 = *param_2 + (byte)multiSettingsMapper;
      bVar5 = (char)param_2 - *unaff_EBX;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar5);
      *unaff_EBX = *unaff_EBX;
      *param_2 = *param_2 + (char)((uint)multiSettingsMapper >> 8);
      *pbVar11 = *pbVar11;
      pcVar10 = (char *)(((uint)piVar8 >> 8) * 0x200);
      *pcVar10 = *pcVar10 + (char)unaff_EBX;
      bVar26 = CARRY1(*multiSettingsMapper,bVar5);
      *multiSettingsMapper = *multiSettingsMapper + bVar5;
      pbStack_8 = unaff_ESI;
      if (bVar26) {
        *pbVar11 = *pbVar11;
        multiSettingsMapper =
             (byte *)CONCAT31((int3)((uint)multiSettingsMapper >> 8),
                              (byte)multiSettingsMapper | *param_2);
        goto code_r0x00403b73;
      }
    }
  } while( true );
code_r0x00403d33:
  pbStack_4 = pbStack_4 + -*puVar13;
  do {
    bVar5 = (byte)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    pbVar25 = pbVar25 + -*(int *)(pbStack_4 + -0x1a);
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    bVar5 = bVar5 | (byte)*puVar19;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar5);
    *(byte *)puVar13 = (byte)*puVar13 | bVar5;
    bVar5 = (byte)*puVar13;
    pbStack_4 = (byte *)0x2700001;
    while ((POPCOUNT(bVar5) & 1U) == 0) {
      do {
        *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar13;
        bVar5 = (byte)puVar13 | (byte)*puVar19;
        puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        uVar14 = CONCAT21((short)((uint)pcVar10 >> 0x10),(byte)((uint)pcVar10 >> 8) | bRamfe140212);
        while( true ) {
          pcVar10 = (char *)((uint)uVar14 << 8);
          bVar7 = (byte)puVar13;
          *(byte *)puVar13 = (byte)*puVar13 & bVar7;
          bVar6 = *unaff_EBX;
          bVar16 = (byte)uVar14;
          bVar23 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar16;
          bVar5 = *unaff_EBX;
          if (!CARRY1(bVar6,bVar16)) break;
          *(byte *)puVar13 = (byte)*puVar13 + bVar7;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar13 = (byte)*puVar13 + bVar7;
          bVar7 = bVar7 | (byte)*puVar19;
          puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar7);
          bVar26 = (POPCOUNT(bVar7) & 1U) == 0;
          while( true ) {
            cVar24 = (char)((uint)unaff_EBX >> 8);
            uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar26) {
              *(byte *)puVar19 = (byte)*puVar19;
              unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar24 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
            uVar18 = (undefined2)((uint)pcVar10 >> 0x10);
            bVar23 = (byte)((uint)pcVar10 >> 8) | (byte)*puVar13;
            uVar14 = CONCAT21(uVar18,bVar23);
            *puVar13 = *puVar13 & (uint)puVar13;
            *unaff_EBX = *unaff_EBX + bVar23;
            uVar15 = (undefined3)((uint)puVar13 >> 8);
            bVar5 = (char)puVar13 - bVar23;
            pcVar10 = (char *)CONCAT31(uVar15,bVar5);
            *pcVar10 = *pcVar10 + bVar5;
            bVar5 = bVar5 | (byte)*puVar19;
            puVar13 = (uint *)CONCAT31(uVar15,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *(byte *)puVar13 = (byte)*puVar13 + bVar5;
            pcVar10 = (char *)((uint)CONCAT21(uVar18,bVar23 | (byte)*puVar13) << 8);
            *puVar13 = *puVar13 - (int)puVar13;
            *(byte *)puVar19 = (byte)*puVar19;
            unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar24 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
              uVar17 = (undefined2)((uint)puVar19 >> 0x10);
              cVar24 = (char)puVar19;
              bVar5 = (byte)((uint)puVar19 >> 8) | unaff_EBX[-0x17];
              puVar19 = (uint *)CONCAT22(uVar17,CONCAT11(bVar5,cVar24));
              *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar13;
                uVar15 = (undefined3)((uint)puVar13 >> 8);
                bVar6 = (byte)puVar13 | (byte)*puVar19;
                pcVar9 = (char *)CONCAT31(uVar15,bVar6);
                bVar23 = unaff_EBX[-0x16];
                *pcVar9 = *pcVar9 + bVar6;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar23 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar9 = *pcVar9 + bVar6;
                pbVar11 = (byte *)CONCAT31(uVar15,bVar6 | (byte)*puVar19);
                while( true ) {
                  *pbVar11 = *pbVar11 + (byte)pbVar11;
                  uVar15 = (undefined3)((uint)pbVar11 >> 8);
                  bVar23 = (byte)pbVar11 | (byte)*puVar19;
                  puVar13 = (uint *)CONCAT31(uVar15,bVar23);
                  if ((POPCOUNT(bVar23) & 1U) != 0) break;
                  *(byte *)puVar13 = (byte)*puVar13 + bVar23;
                  bVar6 = pbVar25[-0x14];
                  *(byte *)puVar13 = (byte)*puVar13 + bVar23;
                  bVar23 = bVar23 | (byte)*puVar19;
                  pcVar9 = (char *)CONCAT31(uVar15,bVar23);
                  bVar7 = unaff_EBX[-0x15];
                  *pcVar9 = *pcVar9 + bVar23;
                  pcVar10 = (char *)((uint)CONCAT21((short)((uint)pcVar10 >> 0x10),
                                                    (byte)((uint)pcVar10 >> 8) | bVar6 |
                                                    pbVar25[-0x13]) << 8);
                  *pcVar9 = *pcVar9 + bVar23;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar9 = *pcVar9 + bVar23;
                  pbVar11 = (byte *)CONCAT31(uVar15,bVar23 | (byte)*puVar19);
                  do {
                    do {
                      bVar6 = (byte)pbVar11;
                      *pbVar11 = *pbVar11 + bVar6;
                      cVar21 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar11,
                                                            cVar21));
                      *pbVar11 = bVar6;
                      *pbVar11 = *pbVar11 + bVar6;
                      cVar4 = (char)((uint)pcVar10 >> 8) + *pbVar11;
                      pcVar10 = (char *)((uint)CONCAT21((short)((uint)pcVar10 >> 0x10),cVar4) << 8);
                      uVar15 = (undefined3)((uint)pbVar11 >> 8);
                      bVar6 = bVar6 & *pbVar11;
                      pbVar11 = (byte *)CONCAT31(uVar15,bVar6);
                      bVar23 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar4;
                    } while (SCARRY1(bVar23,cVar4) == (char)*unaff_EBX < '\0');
                    *pbVar11 = *pbVar11 + bVar6;
                    bVar6 = bVar6 | (byte)*puVar19;
                    pbVar11 = (byte *)CONCAT31(uVar15,bVar6);
                    if ((POPCOUNT(bVar6) & 1U) == 0) {
                      *pbVar11 = *pbVar11 + bVar6;
                      *pbVar11 = *pbVar11 + bVar6;
                      cVar24 = cVar24 - bVar5;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),cVar24);
                      *pbVar11 = *pbVar11 + bVar6;
                      bRam0312382b = bRam0312382b | *pbVar12;
                      while( true ) {
                        bVar23 = (byte)pbVar11;
                        *pbVar11 = *pbVar11 + bVar23;
                        bRam0312382b = bRam0312382b | (pbVar25 + 0x21b0000)[(int)pbVar11];
                        uVar15 = (undefined3)((uint)pbVar11 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar12 = *pbVar12 + bRam0312382b;
                        pbVar11 = (byte *)CONCAT31(uVar15,bVar23 | *unaff_ESI);
                      }
                      *pbVar11 = *pbVar11 + bVar23;
                      bVar23 = bVar23 | *unaff_ESI;
                      pcVar10 = (char *)CONCAT31(uVar15,bVar23);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar12);
                      *pcVar10 = *pcVar10 + bVar23;
                      uVar18 = CONCAT11(bVar5 | bRam6f0a002b,cVar24);
                      pcVar9 = (char *)CONCAT22(uVar17,uVar18);
                      *pcVar10 = *pcVar10 + bVar23;
                      *pcVar9 = *pcVar9 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar18);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar21 + *pcVar10);
                  } while (SCARRY1(cVar21,*pcVar10) != (char)(cVar21 + *pcVar10) < '\0');
                }
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar19 < '\0');
              *(byte *)puVar19 = (byte)*puVar19;
              *pcVar10 = *pcVar10 - (char)unaff_EBX;
              *(byte *)puVar13 = (byte)*puVar13 + bVar23;
              bVar23 = bVar23 | (byte)*puVar19;
              puVar13 = (uint *)CONCAT31(uVar15,bVar23);
              bVar26 = (POPCOUNT(bVar23) & 1U) == 0;
            } while (bVar26);
          }
        }
      } while (SCARRY1(bVar23,bVar16));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar10 >> 8);
    *pbVar25 = *pbVar25 - (char)unaff_EBX;
  } while( true );
}


