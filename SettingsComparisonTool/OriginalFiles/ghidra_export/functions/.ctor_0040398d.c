/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040398d
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(byte * param_1, byte * param_2)
 * Local Vars  : pbStack_8, pbStack_c, uVar2, pcVar1, bVar4, uVar3, in_EAX, bVar5, piVar7, pbVar6, pcVar9, pbVar8, pbVar11, pcVar10, uVar13, puVar12, extraout_ECX, uVar14, bVar16, bVar15, uVar18, uVar17, uVar20, puVar19, cVar22, cVar21, unaff_EBX, uVar23, cVar25, bVar24, unaff_ESI, unaff_EBP, in_ES, unaff_EDI, bVar26, in_CS, uVar27, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall _ctor(byte *param_1,byte *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *in_EAX;
  byte *pbVar6;
  uint3 uVar13;
  undefined3 uVar14;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  uint *puVar12;
  byte bVar15;
  byte bVar16;
  undefined2 uVar17;
  byte *extraout_ECX;
  undefined2 uVar18;
  uint *puVar19;
  undefined3 uVar20;
  char cVar21;
  char cVar22;
  undefined1 uVar23;
  byte bVar24;
  char cVar25;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  bool bVar26;
  undefined8 uVar27;
  byte *pbStack_c;
  byte *pbStack_8;
  int *piVar7;
  
code_r0x0040398d:
                    /* .NET CLR Managed Code */
  bVar4 = (byte)((uint)param_1 >> 8);
  uVar17 = (undefined2)((uint)param_1 >> 0x10);
  cVar25 = (char)param_1;
  bVar15 = bVar4 + *in_EAX;
  param_1 = (byte *)CONCAT22(uVar17,CONCAT11(bVar15,cVar25));
  pbVar6 = in_EAX + (uint)CARRY1(bVar4,*in_EAX) + *(int *)in_EAX;
  *param_2 = *param_2 + cVar25;
  cVar21 = (char)unaff_EBX - unaff_ESI[2];
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar21);
  uVar13 = (uint3)((uint)pbVar6 >> 8);
  bVar16 = (byte)param_2;
  uVar14 = (undefined3)((uint)param_2 >> 8);
  bVar4 = (byte)pbVar6;
  if ((POPCOUNT(cVar21) & 1U) != 0) {
    *pbVar6 = *pbVar6 + bVar4;
    param_2[0x16060000] = param_2[0x16060000] - cVar25;
    unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
    cVar21 = bVar4 + 2;
    in_EAX = (byte *)CONCAT31(uVar13,cVar21);
    if ((POPCOUNT(cVar21) & 1U) != 0) goto code_r0x004039be;
    *in_EAX = *in_EAX + cVar21;
    bVar4 = bVar4 + 0x71 & *(byte *)CONCAT31(uVar13,bVar4 + 0x71);
    pbVar8 = (byte *)CONCAT31(uVar13,bVar4);
    *param_2 = *param_2 + cVar25;
    param_2 = (byte *)CONCAT31(uVar14,bVar16 + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
    pbVar6 = unaff_ESI;
code_r0x00403979:
    bVar4 = (char)pbVar8 - *unaff_EDI;
    bVar26 = bVar4 < *param_1;
    in_EAX = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar4 - *param_1);
code_r0x0040397d:
    cVar25 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar25 + bVar26;
    *in_EAX = *in_EAX + cVar25;
    *param_1 = *param_1 + (char)param_2;
    param_1[0x101c00aa] = param_1[0x101c00aa] + (char)unaff_EBX;
    *in_EAX = *in_EAX + cVar25;
    *(byte **)pbVar6 = unaff_EBX + *(int *)pbVar6;
    unaff_ESI = pbVar6;
    goto code_r0x0040398d;
  }
  *pbVar6 = *pbVar6 + bVar4;
  bVar4 = bVar4 | *unaff_EBX;
  piVar7 = (int *)CONCAT31(uVar13,bVar4);
  if (bVar4 != 0) {
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar7 = (char)*piVar7 + bVar4;
    param_1 = (byte *)CONCAT22(uVar17,CONCAT11(bVar15 | *param_2,cVar25));
    pbVar6 = unaff_ESI + *piVar7;
    pcVar10 = (char *)((int)piVar7 + *piVar7);
    bVar15 = (char)pcVar10 - *pcVar10;
    pbVar8 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar15);
    bVar4 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar15;
    in_EAX = pbVar8 + (-(uint)CARRY1(bVar4,bVar15) - *(int *)pbVar8);
    bVar26 = CARRY1(*param_1,bVar16);
    *param_1 = *param_1 + bVar16;
    if (bVar26) goto code_r0x004039ba;
    goto code_r0x0040397d;
  }
  *(char *)piVar7 = (char)*piVar7;
  pbVar6 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,(short)param_2);
  in_EAX = (byte *)((uint)uVar13 << 8);
  *param_2 = *param_2 + cVar25;
  param_2 = (byte *)CONCAT31(uVar14,bVar16 - *unaff_EBX);
  *unaff_EBX = *unaff_EBX;
  *param_2 = *param_2 + bVar15;
  *in_EAX = *in_EAX;
  *unaff_EBX = *unaff_EBX + cVar21;
  *in_EAX = *in_EAX;
  *(byte **)(unaff_EBX + -0x3d) = pbVar6 + *(int *)(unaff_EBX + -0x3d);
code_r0x004039ba:
  *in_EAX = *in_EAX + (char)in_EAX;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *param_2);
  unaff_ESI = pbVar6;
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *in_EAX = *in_EAX + (byte)in_EAX;
  uVar14 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = (byte)in_EAX | *param_2;
  pcVar10 = (char *)CONCAT31(uVar14,bVar4);
  if ((POPCOUNT(bVar4) & 1U) != 0) {
    cVar25 = *pcVar10;
    *pcVar10 = *pcVar10 + bVar4;
    cVar21 = *pcVar10;
    if (!SCARRY1(cVar25,bVar4)) goto code_r0x00403a22;
    goto code_r0x00403a24;
  }
  *pcVar10 = *pcVar10 + bVar4;
  *unaff_ESI = *unaff_ESI + 1;
  uVar2 = *(undefined6 *)CONCAT31(uVar14,bVar4 + 6);
  pbVar8 = (byte *)uVar2;
  bVar4 = *param_2;
  bVar15 = (byte)param_1;
  *param_2 = *param_2 + bVar15;
  pbVar6 = unaff_ESI;
  if (!CARRY1(bVar4,bVar15)) goto code_r0x00403979;
  *pbVar8 = *pbVar8 + (char)uVar2;
  bVar16 = (byte)((uint)param_1 >> 8) | *pbVar8;
  uVar17 = CONCAT11(bVar16,bVar15);
  pbVar8 = pbVar8 + -*(int *)pbVar8;
  bVar4 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + bVar16;
  if (CARRY1(bVar4,bVar16)) {
    cVar25 = (char)pbVar8;
    *pbVar8 = *pbVar8 + cVar25;
    bVar4 = *param_2;
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - unaff_EBX[-0x3a],(char)param_2)
                              );
    *pbVar8 = *pbVar8 + cVar25;
    uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar24 = (byte)((uint)unaff_EBX >> 8) | param_2[0x32];
    pcVar10 = (char *)CONCAT22(uVar18,CONCAT11(bVar24,(char)unaff_EBX));
    pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_CS);
    cVar21 = cVar25 + *pcVar10 + '-';
    pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),cVar21);
    *pbVar8 = *pbVar8;
    bVar5 = *param_2;
    cVar22 = (char)unaff_EBX - *unaff_ESI;
    cVar25 = unaff_EDI[0x17];
    *pbVar8 = *pbVar8 + cVar21;
    uVar17 = CONCAT11((bVar16 | bVar4) + cVar25 | *param_2,bVar15 - bVar5);
    unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(bVar24 + *(char *)(CONCAT31((int3)((uint)pcVar10 >>
                                                                                   8),cVar22) + 0x4e
                                                                   ),cVar22));
    *pbVar8 = *pbVar8 + cVar21;
  }
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),uVar17);
  bVar4 = (byte)pbVar8;
  uVar14 = (undefined3)((uint)pbVar8 >> 8);
  pcVar10 = (char *)CONCAT31(uVar14,bVar4 + 0x28);
  *pcVar10 = (*pcVar10 - (bVar4 + 0x28)) - (0xd7 < bVar4);
  *param_2 = *param_2 + (char)uVar17;
  bVar15 = bVar4 + 0x1b;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4f],
                                        (char)unaff_EBX));
  *(char *)CONCAT31(uVar14,bVar15) = *(char *)CONCAT31(uVar14,bVar15) + bVar15;
  pcVar9 = (char *)CONCAT31(uVar14,bVar4 + 0x43);
  *pcVar9 = (*pcVar9 - (bVar4 + 0x43)) - (0xd7 < bVar15);
  *param_2 = *param_2 + (char)uVar17;
  pcVar10 = pcVar9 + -0x6b721c;
  pcVar9 = pcVar9 + -0x6b721a;
  *pcVar9 = *pcVar9 + (char)((uint)param_2 >> 8);
  cVar21 = *pcVar9;
code_r0x00403a22:
  if ((POPCOUNT(cVar21) & 1U) == 0) {
code_r0x00403a24:
    cVar25 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar25;
    uVar14 = (undefined3)((uint)pcVar10 >> 8);
    bVar4 = cVar25 + 2;
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
      piVar7 = (int *)CONCAT31(uVar14,cVar25 + '*');
      *piVar7 = (*piVar7 - (int)piVar7) - (uint)(0xd7 < bVar4);
      bVar4 = *param_2;
      bVar5 = (byte)param_1;
      *param_2 = *param_2 + bVar5;
      out(*(undefined4 *)unaff_ESI,(short)param_2);
      bVar16 = ((cVar25 + '*') - (char)*piVar7) - CARRY1(bVar4,bVar5);
      pbVar6 = (byte *)CONCAT31(uVar14,bVar16);
      *param_2 = *param_2 + bVar5;
      uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar23 = SUB41(unaff_EBX,0);
      cVar25 = (char)((uint)unaff_EBX >> 8) - unaff_ESI[0x1f];
      unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar25,uVar23));
      *pbVar6 = *pbVar6 + bVar16;
      bVar15 = *param_2;
      bVar4 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar16;
      unaff_ESI = unaff_ESI + ((4 - *(int *)pbVar6) - (uint)CARRY1(bVar4,bVar16));
      pbVar6 = (byte *)CONCAT31(uVar14,bVar16);
      param_1 = (byte *)(CONCAT22((short)((uint)param_1 >> 0x10),
                                  CONCAT11((byte)((uint)param_1 >> 8) | bVar15,bVar5)) + -1);
      bVar4 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar16;
      bVar4 = (bVar16 - *pbVar6) - CARRY1(bVar4,bVar16);
      *param_1 = *param_1 + (char)param_2;
      bVar26 = CARRY1(bVar4,*param_2);
      bVar4 = bVar4 + *param_2;
      pbVar11 = (byte *)CONCAT31(uVar14,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar4;
        cVar21 = (bVar4 + 0x6f) - (0x90 < bVar4);
        pbVar6 = (byte *)CONCAT31(uVar14,cVar21);
        bVar4 = *param_2;
        *param_2 = *param_2 + (char)param_1;
        if (SCARRY1(bVar4,(char)param_1) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar6 = *pbVar6 + cVar21;
        pcVar10 = (char *)CONCAT31(uVar14,cVar21 + '\x02');
        bVar15 = cVar25 + unaff_EBX[0x52];
        unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(bVar15,uVar23));
        *pcVar10 = *pcVar10 + cVar21 + '\x02';
        bVar4 = cVar21 + 4;
        pbVar6 = (byte *)CONCAT31(uVar14,bVar4);
        if ((POPCOUNT(bVar4) & 1U) == 0) {
          *pbVar6 = *pbVar6 + bVar4;
          cVar25 = (cVar21 + 's') - (0x90 < bVar4);
          pcVar10 = (char *)CONCAT31(uVar14,cVar25);
          bVar4 = (byte)((uint)param_1 >> 8);
          bVar26 = CARRY1(*unaff_EBX,bVar4);
          *unaff_EBX = *unaff_EBX + bVar4;
          pbVar11 = unaff_ESI;
          if (bVar26) {
            *pcVar10 = *pcVar10 + cVar25;
            unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(bVar15 | unaff_EBP[0x5c],uVar23));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar6;
        unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(bVar15 + unaff_EBX[0x52],uVar23));
code_r0x00403abf:
        *pbVar6 = *pbVar6 + (char)pbVar6;
        cVar25 = (char)pbVar6 + '\x02';
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),cVar25);
        bVar26 = (POPCOUNT(cVar25) & 1U) == 0;
        pbStack_8 = unaff_EBP;
        if (!bVar26) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar26) {
          *pbVar11 = *pbVar11 + (byte)pbVar11;
          bVar4 = (byte)pbVar11 | pbVar11[0x400005e];
          pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar4);
          pbStack_8 = unaff_EBP;
          if ((char)bVar4 < '\x01') goto code_r0x00403b0b;
          *pbVar6 = *pbVar6 + bVar4;
code_r0x00403aaf:
          cVar25 = (char)pbVar6 + '(';
          pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),cVar25);
          *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
          bVar4 = *unaff_EBX;
          bVar15 = (byte)((uint)param_1 >> 8);
          *unaff_EBX = *unaff_EBX + bVar15;
          pbVar8 = unaff_EBP;
          if (!CARRY1(bVar4,bVar15)) goto code_r0x00403ad8;
          *pbVar6 = *pbVar6 + cVar25;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11(bVar15 | *unaff_EBX,(char)param_1));
          if ((POPCOUNT(*param_2 - cVar25) & 1U) != 0) {
            *unaff_ESI = *unaff_ESI + cVar25;
            pbStack_8 = unaff_EBP;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                              (char)unaff_EBX));
      }
      bVar4 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar4;
      cVar25 = (bVar4 + 0x6f) - (0x90 < bVar4);
      pcVar10 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar25);
      bVar4 = *unaff_EBX;
      cVar21 = (char)((uint)param_1 >> 8);
      *unaff_EBX = *unaff_EBX + cVar21;
      pbStack_8 = unaff_EBP;
      if (*unaff_EBX == 0 || SCARRY1(bVar4,cVar21) != (char)*unaff_EBX < '\0')
      goto code_r0x00403b2c;
      *pcVar10 = *pcVar10 + cVar25;
    }
    else {
      pcVar10 = (char *)CONCAT31(uVar14,bVar4 + *param_2);
      pbVar11 = unaff_ESI;
      if ((POPCOUNT(bVar4 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar10) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar6 = unaff_EBP;
    pbVar8 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),(byte)pcVar10 + 0x2d);
code_r0x00403ad8:
    pbStack_8 = pbVar8;
    bVar4 = *pbVar6;
    bVar15 = (byte)pbVar6;
    *pbVar6 = *pbVar6 + bVar15;
    pbStack_c = (byte *)CONCAT22(pbStack_c._2_2_,in_ES);
    if (CARRY1(bVar4,bVar15)) {
      *pbVar6 = *pbVar6 + bVar15;
      bVar15 = bVar15 | pbVar6[0x400005d];
      pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar15);
      pbVar11 = unaff_ESI;
      if ((char)bVar15 < '\x01') {
        *pbVar6 = *pbVar6 + bVar15;
        param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                              (char)unaff_EBX));
        goto code_r0x00403b4c;
      }
code_r0x00403ae7:
      *pbVar6 = *pbVar6 + (char)pbVar6;
      cVar25 = (char)pbVar6 + '(';
      pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),cVar25);
      *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
      bVar4 = *unaff_EBX;
      bVar15 = (byte)((uint)param_1 >> 8);
      *unaff_EBX = *unaff_EBX + bVar15;
      unaff_ESI = pbVar11;
      if (!CARRY1(bVar4,bVar15)) goto code_r0x00403b0b;
      *pbVar6 = *pbVar6 + cVar25;
      goto code_r0x00403af3;
    }
  }
  else {
    bVar4 = *param_2;
    *param_2 = *param_2 + (char)param_1;
    if (SCARRY1(bVar4,(char)param_1) == (char)*param_2 < '\0') {
      pbVar6 = unaff_EBP;
      pbVar8 = (byte *)(pcVar10 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar10 = *pcVar10 + (char)pcVar10;
    pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + '\x02');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                          (char)unaff_EBX));
    pbVar11 = unaff_ESI;
code_r0x00403a7d:
    cVar25 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar25;
    uVar14 = (undefined3)((uint)pcVar10 >> 8);
    cVar21 = cVar25 + '-';
    pbVar8 = (byte *)CONCAT31(uVar14,cVar21);
    pbVar6 = unaff_EBP;
    unaff_ESI = pbVar11;
    if ((POPCOUNT(cVar21 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar8 = *pbVar8 + cVar21;
    bVar4 = cVar25 + 0x2f;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      bVar4 = *param_2;
      *param_2 = *param_2 + (byte)param_1;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar4,(byte)param_1);
      pbVar6 = (byte *)CONCAT31(uVar14,cVar25 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
    bVar26 = 0x90 < bVar4;
    pcVar10 = (char *)CONCAT31(uVar14,cVar25 + -0x62);
code_r0x00403a8f:
    uVar14 = (undefined3)((uint)pcVar10 >> 8);
    bVar15 = (char)pcVar10 - bVar26;
    pbVar6 = (byte *)CONCAT31(uVar14,bVar15);
    bVar4 = *unaff_EBX;
    cVar25 = (char)((uint)param_1 >> 8);
    *unaff_EBX = *unaff_EBX + cVar25;
    pbStack_8 = unaff_EBP;
    unaff_ESI = pbVar11;
    if (*unaff_EBX != 0 && SCARRY1(bVar4,cVar25) == (char)*unaff_EBX < '\0') {
      *pbVar6 = *pbVar6 + bVar15;
      unaff_ESI = (byte *)CONCAT31(uVar14,bVar15 + 0x2d);
      *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar15) + *(int *)(pbVar11 + (int)unaff_EDI * 8);
      bVar26 = CARRY1(*pbVar11,(byte)pbVar11);
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      goto code_r0x00403aa1;
    }
code_r0x00403af3:
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | *pbVar6,(char)param_1));
    *unaff_ESI = *unaff_ESI + (char)pbVar6;
  }
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar6 = *pbVar6 + (char)pbVar6;
  uVar14 = (undefined3)((uint)pbVar6 >> 8);
  bVar15 = (char)pbVar6 + 0x6f;
  bVar4 = *(byte *)CONCAT31(uVar14,bVar15);
  *param_2 = *param_2 + (char)param_1;
  pbVar6 = (byte *)CONCAT31(uVar14,(bVar15 & bVar4) + *unaff_ESI);
  *param_1 = *param_1 - (char)((uint)param_2 >> 8);
code_r0x00403b0b:
  do {
    *pbVar6 = *pbVar6 + (char)pbVar6;
    param_2[0x16060000] = param_2[0x16060000] - (char)param_1;
    unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
    cVar25 = (char)pbVar6 + '\x02';
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),cVar25);
    bVar26 = (POPCOUNT(cVar25) & 1U) == 0;
code_r0x00403b18:
    bVar4 = (byte)pbVar11;
    uVar14 = (undefined3)((uint)pbVar11 >> 8);
    if (!bVar26) {
      *param_2 = *param_2 + (char)param_1;
      pbVar6 = (byte *)CONCAT31(uVar14,bVar4 | *unaff_ESI);
code_r0x00403b73:
      pbVar8 = (byte *)(unaff_EDI + *(int *)(pbStack_8 + -0x37));
      *pbVar6 = *pbVar6 + (byte)pbVar6;
      uVar14 = (undefined3)((uint)pbVar6 >> 8);
      bVar4 = (byte)pbVar6 | *param_2;
      pcVar10 = (char *)CONCAT31(uVar14,bVar4);
      uVar27 = CONCAT44(param_2,pcVar10);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pcVar10 = *pcVar10 + bVar4;
        *unaff_ESI = *unaff_ESI + 1;
        return (byte *)CONCAT31(uVar14,bVar4 + 6);
      }
      bVar4 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar4,'\x01')) {
        uVar27 = (*pcVar1)();
        param_1 = extraout_ECX;
      }
      pbVar6 = (byte *)uVar27;
      *pbVar6 = *pbVar6 + (char)uVar27;
      cVar21 = (char)((ulonglong)uVar27 >> 0x20);
      puVar19 = (uint *)CONCAT22((short)((ulonglong)uVar27 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar27 >> 0x28) | unaff_EBX[0x2f],cVar21
                                         ));
      *pbVar6 = *pbVar6 + (char)uVar27;
      cVar25 = (char)param_1;
      bVar16 = (byte)((uint)param_1 >> 8) | *pbVar6;
      pbVar6 = pbVar6 + *(int *)pbVar6;
      bVar4 = *unaff_EBX;
      *unaff_EBX = *unaff_EBX + bVar16;
      bVar15 = (byte)pbVar6;
      if (CARRY1(bVar4,bVar16)) {
        *pbVar6 = *pbVar6 + bVar15;
        bVar16 = bVar16 | (byte)*puVar19;
        *unaff_EBX = *unaff_EBX - cVar21;
        *pbVar6 = *pbVar6 + bVar15;
        uVar14 = (undefined3)((uint)pbVar6 >> 8);
        bVar15 = bVar15 | (byte)*puVar19;
        piVar7 = (int *)CONCAT31(uVar14,bVar15);
        pbStack_8 = pbStack_8 + *piVar7;
        *(byte *)piVar7 = (char)*piVar7 + bVar15;
        cVar21 = (char)unaff_EBX - *unaff_ESI;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar21
                                                                ) + 0x5f),cVar21));
        *(byte *)piVar7 = (char)*piVar7 + bVar15;
        bVar4 = bVar15 + 0x2a & (byte)*puVar19;
        pbVar8 = pbVar8 + *(int *)(pbStack_8 + 0x5f);
        *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
        pbVar6 = (byte *)CONCAT31(uVar14,bVar4 + 0x2a);
        *(byte *)puVar19 = (byte)*puVar19 + 0x28;
        *pbVar6 = *pbVar6 + bVar4 + 0x2a;
      }
      else {
        *unaff_ESI = *unaff_ESI + bVar15;
      }
      pcVar10 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar16,cVar25));
      *pbStack_8 = *pbStack_8 - bVar16;
      *(byte *)puVar19 = (byte)*puVar19 + cVar25;
      bVar4 = (byte)pbVar6 - 0xb;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar4);
      if (10 < (byte)pbVar6) {
        *pbVar11 = *pbVar11 | bVar4;
        return pbVar11;
      }
      *(byte *)puVar19 = (byte)*puVar19 + cVar25;
      do {
        bVar4 = unaff_EBX[-0x23];
        bVar16 = (byte)pbVar11;
        *pbVar11 = *pbVar11 + bVar16;
        bVar15 = pbStack_8[-0x22];
        *pbVar11 = *pbVar11 + bVar16;
        uVar14 = (undefined3)((uint)pbVar11 >> 8);
        bVar16 = bVar16 | *unaff_ESI;
        pbVar6 = (byte *)CONCAT31(uVar14,bVar16);
        cVar21 = (char)unaff_EBX - *unaff_ESI;
        unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                     CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                              bVar15,(char)unaff_EBX)) >> 8),cVar21)
        ;
        cVar25 = (char)pcVar10;
        pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                   CONCAT11((char)((uint)pcVar10 >> 8) + *pbVar6,cVar25));
        *(byte *)puVar19 = (byte)*puVar19 + cVar25;
        bVar15 = bVar16 - *pbVar6;
        pbVar11 = (byte *)CONCAT31(uVar14,bVar15);
        unaff_ESI = unaff_ESI + (-(uint)(bVar16 < *pbVar6) - *(int *)pbVar11);
        puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 * '\x02');
        *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
        *pbVar8 = *pbVar8 + cVar21;
        bVar4 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar15;
        *puVar19 = (uint)(pbVar11 + (uint)CARRY1(bVar4,bVar15) + *puVar19);
      } while ((POPCOUNT(*puVar19 & 0xff) & 1U) != 0);
code_r0x00403cb7:
      *pbVar11 = *pbVar11 + (char)pbVar11;
      pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),(byte)pcVar10 | pbVar11[(int)pcVar10]);
      bVar26 = false;
      pbVar11 = (byte *)((uint)pbVar11 & 0xffffff00);
      do {
        pbVar8 = pbVar8 + (-(uint)bVar26 - *(int *)unaff_EBX);
        pcVar9 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),*pcVar10);
        *pcVar9 = *pcVar9 + *pcVar10;
        pbVar11 = (byte *)CONCAT31((int3)((uint)(pcVar9 + (unaff_ESI[0x2000001] <
                                                          (byte)((uint)pcVar10 >> 8)) + 0xda7d) >> 8
                                         ),((byte)(pcVar9 + (unaff_ESI[0x2000001] <
                                                            (byte)((uint)pcVar10 >> 8)) + 0xda7d) |
                                           (byte)*puVar19) + 0x7d);
        pcVar10 = pcVar10 + -1;
        *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar10;
        while( true ) {
          uVar20 = (undefined3)((uint)puVar19 >> 8);
          cVar25 = (char)puVar19 + *(char *)((int)pbVar8 * 2 + 0xa0000e1);
          puVar19 = (uint *)CONCAT31(uVar20,cVar25);
          bVar26 = CARRY1((byte)pbVar11,(byte)*puVar19);
          uVar14 = (undefined3)((uint)pbVar11 >> 8);
          bVar4 = (byte)pbVar11 + (byte)*puVar19;
          pbVar11 = (byte *)CONCAT31(uVar14,bVar4);
          if ((POPCOUNT(bVar4) & 1U) != 0) break;
          *pbVar11 = *pbVar11 + bVar4;
          cVar21 = (char)pcVar10;
          pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar10 >> 8) | pbVar8[-0x65],cVar21));
          bVar15 = *pbVar11;
          *pbVar11 = *pbVar11 + bVar4;
          if (CARRY1(bVar15,bVar4)) {
            *pbVar11 = *pbVar11 + bVar4;
            unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_8[-0x1d],
                                                  (char)unaff_EBX));
            *pbVar11 = *pbVar11 + bVar4;
            bVar26 = false;
            bVar4 = bVar4 | (byte)*puVar19;
            pcVar9 = (char *)CONCAT31(uVar14,bVar4);
            while( true ) {
              bVar15 = (byte)pcVar9;
              uVar14 = (undefined3)((uint)pcVar9 >> 8);
              if (bVar26 == (char)bVar4 < '\0') break;
              *pcVar9 = *pcVar9 + bVar15;
              bVar15 = bVar15 | (byte)*puVar19;
              puVar12 = (uint *)CONCAT31(uVar14,bVar15);
              *pbVar8 = *pbVar8 << 1 | (char)*pbVar8 < '\0';
              uVar3 = *puVar12;
              *(byte *)puVar12 = (byte)*puVar12 + bVar15;
              pbStack_8 = pbStack_8 + (-(uint)CARRY1((byte)uVar3,bVar15) - *puVar12);
              *puVar12 = *puVar12 << 1 | (uint)((int)*puVar12 < 0);
              while( true ) {
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19 + (byte)pcVar10;
                cVar25 = (char)puVar12 + 'o' + CARRY1((byte)uVar3,(byte)pcVar10);
                pcVar9 = (char *)CONCAT31((int3)((uint)puVar12 >> 8),cVar25);
                pcVar10 = (char *)0x20a0000;
                if ((POPCOUNT(cVar25) & 1U) != 0) break;
                *pcVar9 = *pcVar9 + cVar25;
                bVar4 = bRamfe140212;
                pcVar10 = (char *)0x0;
                uVar14 = (undefined3)((uint)(pcVar9 + -0x732b0000) >> 8);
                bVar15 = in(0);
                puVar12 = (uint *)CONCAT31(uVar14,bVar15);
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar19 < '\0') {
                  *(byte *)puVar12 = (byte)*puVar12 + bVar15;
                  bVar15 = bVar15 | (byte)*puVar19;
                  puVar12 = (uint *)CONCAT31(uVar14,bVar15);
                  if ((POPCOUNT(bVar15) & 1U) == 0) {
                    *(byte *)puVar12 = (byte)*puVar12 + bVar15;
                    pcVar10 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar12) << 8);
                    *(byte *)puVar12 = (byte)*puVar12 + bVar15;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar12 = (byte)*puVar12 + bVar15;
                  puVar12 = (uint *)CONCAT31(uVar14,bVar15 | (byte)*puVar19);
                }
              }
              *(byte *)puVar19 = (byte)*puVar19;
              bVar26 = SCARRY1((char)puVar19,*pbVar8);
              bVar4 = (char)puVar19 + *pbVar8;
              puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar4);
            }
            if (bVar26 == (char)bVar4 < '\0') {
              *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar10;
              pbVar11 = (byte *)((uint)pcVar9 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar9 = *pcVar9 + bVar15;
            pbVar11 = (byte *)CONCAT31(uVar14,(bVar15 | (byte)*puVar19) + 0x7d);
            pcVar10 = pcVar10 + -1;
            *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar10;
          }
          else {
            *(byte *)puVar19 = (byte)*puVar19 + cVar21;
            puVar19 = (uint *)CONCAT31(uVar20,cVar25 + *(char *)((int)pbVar8 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    *pbVar11 = *pbVar11 + bVar4;
    bVar4 = bVar4 + 0x6f & *(byte *)CONCAT31(uVar14,bVar4 + 0x6f);
    *param_2 = *param_2 + (char)param_1;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
    pcVar10 = (char *)CONCAT31(uVar14,bVar4 - *unaff_EDI);
code_r0x00403b2c:
    bVar4 = (char)pcVar10 - *pcVar10;
    pbVar6 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar4);
    *pbVar6 = *pbVar6 + bVar4;
    *(byte **)pbVar6 = param_2 + *(int *)pbVar6;
    *pbVar6 = *pbVar6 + bVar4;
    bVar26 = CARRY1(*pbVar6,bVar4);
    *pbVar6 = *pbVar6 + bVar4;
    pbStack_c = unaff_ESI;
    while( true ) {
      *(byte **)pbVar6 = pbVar6 + (uint)bVar26 + *(int *)pbVar6;
      unaff_EDI = unaff_EDI + 4;
      pbVar6[(int)param_2] = pbVar6[(int)param_2] + (char)unaff_EBX;
      *pbVar6 = *pbVar6 + (char)pbVar6;
      *(byte **)pbStack_c = unaff_EBX + *(int *)pbStack_c;
      bVar4 = (byte)((uint)param_1 >> 8);
      cVar25 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar4 + *pbVar6,cVar25));
      pbVar6 = pbVar6 + (uint)CARRY1(bVar4,*pbVar6) + *(int *)pbVar6;
      *param_2 = *param_2 + cVar25;
      cVar25 = (char)unaff_EBX - pbStack_c[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar25);
      unaff_ESI = pbStack_c;
      if ((POPCOUNT(cVar25) & 1U) != 0) break;
code_r0x00403b4c:
      *pbVar6 = *pbVar6 + (byte)pbVar6;
      bVar4 = (byte)pbVar6 | *unaff_EBX;
      piVar7 = (int *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar4);
      if (bVar4 != 0) {
        pbStack_8 = pbStack_8 + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar7 = (char)*piVar7 + bVar4;
        param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
        pbStack_c = pbStack_c + *piVar7;
        pcVar10 = (char *)((int)piVar7 + *piVar7);
        uVar14 = (undefined3)((uint)pcVar10 >> 8);
        bVar15 = (char)pcVar10 - *pcVar10;
        pbVar6 = (byte *)CONCAT31(uVar14,bVar15);
        bVar4 = *pbVar6;
        *pbVar6 = *pbVar6 + bVar15;
        piVar7 = (int *)CONCAT31(uVar14,bVar15 - CARRY1(bVar4,bVar15));
      }
      *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
      unaff_ESI = pbStack_c + 4;
      out(*(undefined4 *)pbStack_c,(short)param_2);
      pbVar6 = (byte *)(((uint)piVar7 >> 8) * 0x100);
      *param_2 = *param_2 + (byte)param_1;
      bVar4 = (char)param_2 - *unaff_EBX;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar4);
      *unaff_EBX = *unaff_EBX;
      *param_2 = *param_2 + (char)((uint)param_1 >> 8);
      *pbVar6 = *pbVar6;
      pcVar10 = (char *)(((uint)piVar7 >> 8) * 0x200);
      *pcVar10 = *pcVar10 + (char)unaff_EBX;
      bVar26 = CARRY1(*param_1,bVar4);
      *param_1 = *param_1 + bVar4;
      pbStack_c = unaff_ESI;
      if (bVar26) {
        *pbVar6 = *pbVar6;
        param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *param_2);
        goto code_r0x00403b73;
      }
    }
  } while( true );
code_r0x00403d33:
  pbStack_8 = pbStack_8 + -*puVar12;
  do {
    bVar4 = (byte)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar4;
    pbVar8 = pbVar8 + -*(int *)(pbStack_8 + -0x1a);
    *(byte *)puVar12 = (byte)*puVar12 + bVar4;
    bVar4 = bVar4 | (byte)*puVar19;
    puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),bVar4);
    *(byte *)puVar12 = (byte)*puVar12 | bVar4;
    bVar4 = (byte)*puVar12;
    pbStack_8 = (byte *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar12 = (byte)*puVar12 + (byte)puVar12;
        bVar4 = (byte)puVar12 | (byte)*puVar19;
        puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
        uVar13 = CONCAT21((short)((uint)pcVar10 >> 0x10),(byte)((uint)pcVar10 >> 8) | bRamfe140212);
        while( true ) {
          pcVar10 = (char *)((uint)uVar13 << 8);
          bVar5 = (byte)puVar12;
          *(byte *)puVar12 = (byte)*puVar12 & bVar5;
          bVar16 = *unaff_EBX;
          bVar24 = (byte)uVar13;
          bVar15 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar24;
          bVar4 = *unaff_EBX;
          if (!CARRY1(bVar16,bVar24)) break;
          *(byte *)puVar12 = (byte)*puVar12 + bVar5;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar12 = (byte)*puVar12 + bVar5;
          bVar5 = bVar5 | (byte)*puVar19;
          puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),bVar5);
          bVar26 = (POPCOUNT(bVar5) & 1U) == 0;
          while( true ) {
            cVar25 = (char)((uint)unaff_EBX >> 8);
            uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar26) {
              *(byte *)puVar19 = (byte)*puVar19;
              unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar25 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
            uVar18 = (undefined2)((uint)pcVar10 >> 0x10);
            bVar15 = (byte)((uint)pcVar10 >> 8) | (byte)*puVar12;
            uVar13 = CONCAT21(uVar18,bVar15);
            *puVar12 = *puVar12 & (uint)puVar12;
            *unaff_EBX = *unaff_EBX + bVar15;
            uVar14 = (undefined3)((uint)puVar12 >> 8);
            bVar4 = (char)puVar12 - bVar15;
            pcVar10 = (char *)CONCAT31(uVar14,bVar4);
            *pcVar10 = *pcVar10 + bVar4;
            bVar4 = bVar4 | (byte)*puVar19;
            puVar12 = (uint *)CONCAT31(uVar14,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar12 = (byte)*puVar12 + bVar4;
            pcVar10 = (char *)((uint)CONCAT21(uVar18,bVar15 | (byte)*puVar12) << 8);
            *puVar12 = *puVar12 - (int)puVar12;
            *(byte *)puVar19 = (byte)*puVar19;
            unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar25 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
              uVar17 = (undefined2)((uint)puVar19 >> 0x10);
              cVar25 = (char)puVar19;
              bVar4 = (byte)((uint)puVar19 >> 8) | unaff_EBX[-0x17];
              puVar19 = (uint *)CONCAT22(uVar17,CONCAT11(bVar4,cVar25));
              *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar12 = (byte)*puVar12 + (byte)puVar12;
                uVar14 = (undefined3)((uint)puVar12 >> 8);
                bVar16 = (byte)puVar12 | (byte)*puVar19;
                pcVar9 = (char *)CONCAT31(uVar14,bVar16);
                bVar15 = unaff_EBX[-0x16];
                *pcVar9 = *pcVar9 + bVar16;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar15 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar9 = *pcVar9 + bVar16;
                pbVar6 = (byte *)CONCAT31(uVar14,bVar16 | (byte)*puVar19);
                while( true ) {
                  *pbVar6 = *pbVar6 + (byte)pbVar6;
                  uVar14 = (undefined3)((uint)pbVar6 >> 8);
                  bVar15 = (byte)pbVar6 | (byte)*puVar19;
                  puVar12 = (uint *)CONCAT31(uVar14,bVar15);
                  if ((POPCOUNT(bVar15) & 1U) != 0) break;
                  *(byte *)puVar12 = (byte)*puVar12 + bVar15;
                  bVar16 = pbVar8[-0x14];
                  *(byte *)puVar12 = (byte)*puVar12 + bVar15;
                  bVar15 = bVar15 | (byte)*puVar19;
                  pcVar9 = (char *)CONCAT31(uVar14,bVar15);
                  bVar5 = unaff_EBX[-0x15];
                  *pcVar9 = *pcVar9 + bVar15;
                  pcVar10 = (char *)((uint)CONCAT21((short)((uint)pcVar10 >> 0x10),
                                                    (byte)((uint)pcVar10 >> 8) | bVar16 |
                                                    pbVar8[-0x13]) << 8);
                  *pcVar9 = *pcVar9 + bVar15;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar9 = *pcVar9 + bVar15;
                  pbVar6 = (byte *)CONCAT31(uVar14,bVar15 | (byte)*puVar19);
                  do {
                    do {
                      bVar16 = (byte)pbVar6;
                      *pbVar6 = *pbVar6 + bVar16;
                      cVar22 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar6,
                                                            cVar22));
                      *pbVar6 = bVar16;
                      *pbVar6 = *pbVar6 + bVar16;
                      cVar21 = (char)((uint)pcVar10 >> 8) + *pbVar6;
                      pcVar10 = (char *)((uint)CONCAT21((short)((uint)pcVar10 >> 0x10),cVar21) << 8)
                      ;
                      uVar14 = (undefined3)((uint)pbVar6 >> 8);
                      bVar16 = bVar16 & *pbVar6;
                      pbVar6 = (byte *)CONCAT31(uVar14,bVar16);
                      bVar15 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar21;
                    } while (SCARRY1(bVar15,cVar21) == (char)*unaff_EBX < '\0');
                    *pbVar6 = *pbVar6 + bVar16;
                    bVar16 = bVar16 | (byte)*puVar19;
                    pbVar6 = (byte *)CONCAT31(uVar14,bVar16);
                    if ((POPCOUNT(bVar16) & 1U) == 0) {
                      *pbVar6 = *pbVar6 + bVar16;
                      *pbVar6 = *pbVar6 + bVar16;
                      cVar25 = cVar25 - bVar4;
                      pbVar11 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),cVar25);
                      *pbVar6 = *pbVar6 + bVar16;
                      bRam0312382b = bRam0312382b | *pbVar11;
                      while( true ) {
                        bVar15 = (byte)pbVar6;
                        *pbVar6 = *pbVar6 + bVar15;
                        bRam0312382b = bRam0312382b | (pbVar8 + 0x21b0000)[(int)pbVar6];
                        uVar14 = (undefined3)((uint)pbVar6 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar11 = *pbVar11 + bRam0312382b;
                        pbVar6 = (byte *)CONCAT31(uVar14,bVar15 | *unaff_ESI);
                      }
                      *pbVar6 = *pbVar6 + bVar15;
                      bVar15 = bVar15 | *unaff_ESI;
                      pcVar10 = (char *)CONCAT31(uVar14,bVar15);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar11);
                      *pcVar10 = *pcVar10 + bVar15;
                      uVar18 = CONCAT11(bVar4 | bRam6f0a002b,cVar25);
                      pcVar9 = (char *)CONCAT22(uVar17,uVar18);
                      *pcVar10 = *pcVar10 + bVar15;
                      *pcVar9 = *pcVar9 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar18);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar22 + *pcVar10);
                  } while (SCARRY1(cVar22,*pcVar10) != (char)(cVar22 + *pcVar10) < '\0');
                }
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar19 < '\0');
              *(byte *)puVar19 = (byte)*puVar19;
              *pcVar10 = *pcVar10 - (char)unaff_EBX;
              *(byte *)puVar12 = (byte)*puVar12 + bVar15;
              bVar15 = bVar15 | (byte)*puVar19;
              puVar12 = (uint *)CONCAT31(uVar14,bVar15);
              bVar26 = (POPCOUNT(bVar15) & 1U) == 0;
            } while (bVar26);
          }
        }
      } while (SCARRY1(bVar15,bVar24));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar10 >> 8);
    *pbVar8 = *pbVar8 - (char)unaff_EBX;
  } while( true );
}


