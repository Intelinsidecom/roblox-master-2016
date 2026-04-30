/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004039f7
 * Raw Name    : get_InputFormat
 * Demangled   : get_InputFormat
 * Prototype   : byte * get_InputFormat(undefined4 param_1, byte * param_2, byte * param_3, byte * param_4)
 * Local Vars  : pcVar1, param_1, uVar2, param_2, uVar3, bVar4, param_3, bVar5, param_4, bVar6, cVar7, in_EAX, pcVar8, pcVar9, piVar10, pbVar11, pbVar12, puVar13, uVar14, pbVar15, extraout_ECX, pcVar16, bVar17, bVar18, uVar19, uVar20, puVar21, uVar22, cVar23, cVar24, unaff_EBX, pbVar25, cVar26, unaff_EBP, unaff_ESI, unaff_EDI, pbVar27, in_ES, bVar28, uVar29
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall get_InputFormat(undefined4 param_1,byte *param_2,byte *param_3,byte *param_4)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char *in_EAX;
  undefined3 uVar14;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint *puVar13;
  byte bVar17;
  undefined2 uVar19;
  byte *pbVar15;
  byte *extraout_ECX;
  byte bVar18;
  char *pcVar16;
  undefined2 uVar20;
  uint *puVar21;
  undefined3 uVar22;
  char cVar23;
  char cVar24;
  char cVar26;
  undefined4 unaff_EBX;
  byte *pbVar25;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte *pbVar27;
  undefined2 in_ES;
  bool bVar28;
  undefined8 uVar29;
  
                    /* .NET CLR Managed Code */
  cVar23 = (char)unaff_EBX - *unaff_ESI;
  cVar24 = unaff_EDI[0x17];
  uVar19 = (undefined2)((uint)param_1 >> 0x10);
  bVar18 = (byte)param_1;
  bVar5 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar5;
  bVar17 = (char)((uint)param_1 >> 8) + cVar24 | *param_2;
  pbVar15 = (byte *)CONCAT22(uVar19,CONCAT11(bVar17,bVar18));
  uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar26 = (char)((uint)unaff_EBX >> 8) +
           *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar23) + 0x4e);
  *in_EAX = *in_EAX + bVar5;
  uVar14 = (undefined3)((uint)in_EAX >> 8);
  pcVar16 = (char *)CONCAT31(uVar14,bVar5 + 0x28);
  *pcVar16 = (*pcVar16 - (bVar5 + 0x28)) - (0xd7 < bVar5);
  *param_2 = *param_2 + bVar18;
  bVar4 = bVar5 + 0x1b;
  cVar26 = cVar26 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar26,cVar23)) + 0x4f);
  pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(cVar26,cVar23));
  *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
  pcVar8 = (char *)CONCAT31(uVar14,bVar5 + 0x43);
  *pcVar8 = (*pcVar8 - (bVar5 + 0x43)) - (0xd7 < bVar4);
  *param_2 = *param_2 + bVar18;
  pcVar9 = pcVar8 + -0x6b721c;
  pcVar16 = pcVar8 + -0x6b721a;
  cVar24 = (char)((uint)param_2 >> 8);
  *pcVar16 = *pcVar16 + cVar24;
  if ((POPCOUNT(*pcVar16) & 1U) == 0) {
    cVar7 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar7;
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    bVar5 = cVar7 + 2;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
      piVar10 = (int *)CONCAT31(uVar14,cVar7 + '*');
      *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0xd7 < bVar5);
      bVar5 = *param_2;
      *param_2 = *param_2 + bVar18;
      out(*(undefined4 *)unaff_ESI,(short)param_2);
      bVar6 = ((cVar7 + '*') - (char)*piVar10) - CARRY1(bVar5,bVar18);
      pbVar15 = (byte *)CONCAT31(uVar14,bVar6);
      *param_2 = *param_2 + bVar18;
      cVar26 = cVar26 - unaff_ESI[0x1f];
      pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(cVar26,cVar23));
      *pbVar15 = *pbVar15 + bVar6;
      bVar4 = *param_2;
      bVar5 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar6;
      unaff_ESI = unaff_ESI + ((4 - *(int *)pbVar15) - (uint)CARRY1(bVar5,bVar6));
      pbVar12 = (byte *)CONCAT31(uVar14,bVar6);
      pbVar15 = (byte *)(CONCAT22(uVar19,CONCAT11(bVar17 | bVar4,bVar18)) + -1);
      bVar5 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar6;
      bVar5 = (bVar6 - *pbVar12) - CARRY1(bVar5,bVar6);
      *pbVar15 = *pbVar15 + (char)param_2;
      bVar28 = CARRY1(bVar5,*param_2);
      bVar5 = bVar5 + *param_2;
      pbVar11 = (byte *)CONCAT31(uVar14,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar5;
        cVar7 = (bVar5 + 0x6f) - (0x90 < bVar5);
        pbVar12 = (byte *)CONCAT31(uVar14,cVar7);
        bVar5 = *param_2;
        *param_2 = *param_2 + (char)pbVar15;
        if (SCARRY1(bVar5,(char)pbVar15) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar12 = *pbVar12 + cVar7;
        pcVar16 = (char *)CONCAT31(uVar14,cVar7 + '\x02');
        bVar4 = cVar26 + pbVar25[0x52];
        pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(bVar4,cVar23));
        *pcVar16 = *pcVar16 + cVar7 + '\x02';
        bVar5 = cVar7 + 4;
        pbVar12 = (byte *)CONCAT31(uVar14,bVar5);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pbVar12 = *pbVar12 + bVar5;
          cVar26 = (cVar7 + 's') - (0x90 < bVar5);
          pcVar9 = (char *)CONCAT31(uVar14,cVar26);
          bVar5 = (byte)((uint)pbVar15 >> 8);
          bVar28 = CARRY1(*pbVar25,bVar5);
          *pbVar25 = *pbVar25 + bVar5;
          pbVar11 = unaff_ESI;
          if (bVar28) {
            *pcVar9 = *pcVar9 + cVar26;
            pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(bVar4 | unaff_EBP[0x5c],cVar23));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar12;
        pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(bVar4 + pbVar25[0x52],cVar23));
code_r0x00403abf:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        cVar23 = (char)pbVar12 + '\x02';
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar23);
        bVar28 = (POPCOUNT(cVar23) & 1U) == 0;
        param_3 = unaff_EBP;
        if (!bVar28) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar28) {
          *pbVar11 = *pbVar11 + (byte)pbVar11;
          bVar5 = (byte)pbVar11 | pbVar11[0x400005e];
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
          if ((char)bVar5 < '\x01') goto code_r0x00403b0b;
          *pbVar12 = *pbVar12 + bVar5;
code_r0x00403aaf:
          cVar23 = (char)pbVar12 + '(';
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar23);
          *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
          bVar5 = *pbVar25;
          bVar4 = (byte)((uint)pbVar15 >> 8);
          *pbVar25 = *pbVar25 + bVar4;
          pbVar27 = unaff_EBP;
          if (!CARRY1(bVar5,bVar4)) goto code_r0x00403ad8;
          *pbVar12 = *pbVar12 + cVar23;
          pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                     CONCAT11(bVar4 | *pbVar25,(char)pbVar15));
          if ((POPCOUNT(*param_2 - cVar23) & 1U) != 0) {
            *unaff_ESI = *unaff_ESI + cVar23;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[0x53],(char)pbVar25
                                           ));
      }
      bVar5 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      cVar23 = (bVar5 + 0x6f) - (0x90 < bVar5);
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar23);
      bVar5 = *pbVar25;
      cVar26 = (char)((uint)pbVar15 >> 8);
      *pbVar25 = *pbVar25 + cVar26;
      param_3 = unaff_EBP;
      if (*pbVar25 == 0 || SCARRY1(bVar5,cVar26) != (char)*pbVar25 < '\0') goto code_r0x00403b2c;
      *pcVar16 = *pcVar16 + cVar23;
    }
    else {
      pcVar16 = (char *)CONCAT31(uVar14,bVar5 + *param_2);
      pbVar11 = unaff_ESI;
      if ((POPCOUNT(bVar5 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar16) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar12 = unaff_EBP;
    pbVar27 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)pcVar16 + 0x2d);
code_r0x00403ad8:
    param_3 = pbVar27;
    bVar5 = *pbVar12;
    bVar4 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar4;
    param_4 = (byte *)CONCAT22(param_4._2_2_,in_ES);
    unaff_EBP = param_3;
    if (CARRY1(bVar5,bVar4)) {
      *pbVar12 = *pbVar12 + bVar4;
      bVar4 = bVar4 | pbVar12[0x400005d];
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar4);
      pbVar11 = unaff_ESI;
      if ((char)bVar4 < '\x01') {
        *pbVar12 = *pbVar12 + bVar4;
        pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar15 >> 8) | *param_2,(char)pbVar15));
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[-0x39],
                                            (char)pbVar25));
        goto code_r0x00403b4c;
      }
code_r0x00403ae7:
      *pbVar12 = *pbVar12 + (char)pbVar12;
      cVar23 = (char)pbVar12 + '(';
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar23);
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      bVar5 = *pbVar25;
      bVar4 = (byte)((uint)pbVar15 >> 8);
      *pbVar25 = *pbVar25 + bVar4;
      unaff_EBP = param_3;
      unaff_ESI = pbVar11;
      if (!CARRY1(bVar5,bVar4)) goto code_r0x00403b0b;
      *pbVar12 = *pbVar12 + cVar23;
      goto code_r0x00403af3;
    }
  }
  else {
    bVar5 = *param_2;
    *param_2 = *param_2 + bVar18;
    if (SCARRY1(bVar5,bVar18) == (char)*param_2 < '\0') {
      pbVar12 = unaff_EBP;
      pbVar27 = (byte *)(pcVar8 + -0x769862d);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar9 = *pcVar9 + (char)pcVar9;
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + '\x02');
    pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                               CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[0x54],(char)pbVar25));
    pbVar11 = unaff_ESI;
code_r0x00403a7d:
    cVar23 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar23;
    uVar14 = (undefined3)((uint)pcVar16 >> 8);
    cVar26 = cVar23 + '-';
    pbVar27 = (byte *)CONCAT31(uVar14,cVar26);
    pbVar12 = unaff_EBP;
    unaff_ESI = pbVar11;
    if ((POPCOUNT(cVar26 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar27 = *pbVar27 + cVar26;
    bVar5 = cVar23 + 0x2f;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      bVar5 = *param_2;
      *param_2 = *param_2 + (byte)pbVar15;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar5,(byte)pbVar15);
      pbVar12 = (byte *)CONCAT31(uVar14,cVar23 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
    bVar28 = 0x90 < bVar5;
    pcVar9 = (char *)CONCAT31(uVar14,cVar23 + -0x62);
code_r0x00403a8f:
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    bVar4 = (char)pcVar9 - bVar28;
    pbVar12 = (byte *)CONCAT31(uVar14,bVar4);
    bVar5 = *pbVar25;
    cVar23 = (char)((uint)pbVar15 >> 8);
    *pbVar25 = *pbVar25 + cVar23;
    unaff_ESI = pbVar11;
    if (*pbVar25 != 0 && SCARRY1(bVar5,cVar23) == (char)*pbVar25 < '\0') {
      *pbVar12 = *pbVar12 + bVar4;
      unaff_ESI = (byte *)CONCAT31(uVar14,bVar4 + 0x2d);
      *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar11 + (int)unaff_EDI * 8);
      bVar28 = CARRY1(*pbVar11,(byte)pbVar11);
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      goto code_r0x00403aa1;
    }
code_r0x00403af3:
    pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                               CONCAT11((byte)((uint)pbVar15 >> 8) | *pbVar12,(char)pbVar15));
    *unaff_ESI = *unaff_ESI + (char)pbVar12;
  }
  pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                             CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[0x55],(char)pbVar25));
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar14 = (undefined3)((uint)pbVar12 >> 8);
  bVar4 = (char)pbVar12 + 0x6f;
  bVar5 = *(byte *)CONCAT31(uVar14,bVar4);
  *param_2 = *param_2 + (char)pbVar15;
  pbVar12 = (byte *)CONCAT31(uVar14,(bVar4 & bVar5) + *unaff_ESI);
  *pbVar15 = *pbVar15 - cVar24;
code_r0x00403b0b:
  do {
    *pbVar12 = *pbVar12 + (char)pbVar12;
    param_2[0x16060000] = param_2[0x16060000] - (char)pbVar15;
    pbVar25 = (byte *)((uint)pbVar25 | (uint)unaff_ESI);
    cVar24 = (char)pbVar12 + '\x02';
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar24);
    bVar28 = (POPCOUNT(cVar24) & 1U) == 0;
    param_3 = unaff_EBP;
code_r0x00403b18:
    bVar5 = (byte)pbVar11;
    uVar14 = (undefined3)((uint)pbVar11 >> 8);
    if (!bVar28) {
      *param_2 = *param_2 + (char)pbVar15;
      pbVar12 = (byte *)CONCAT31(uVar14,bVar5 | *unaff_ESI);
code_r0x00403b73:
      pbVar27 = (byte *)(unaff_EDI + *(int *)(param_3 + -0x37));
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      uVar14 = (undefined3)((uint)pbVar12 >> 8);
      bVar5 = (byte)pbVar12 | *param_2;
      pcVar16 = (char *)CONCAT31(uVar14,bVar5);
      uVar29 = CONCAT44(param_2,pcVar16);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pcVar16 = *pcVar16 + bVar5;
        *unaff_ESI = *unaff_ESI + 1;
        return (byte *)CONCAT31(uVar14,bVar5 + 6);
      }
      bVar5 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar5,'\x01')) {
        uVar29 = (*pcVar1)();
        pbVar15 = extraout_ECX;
      }
      pbVar12 = (byte *)uVar29;
      *pbVar12 = *pbVar12 + (char)uVar29;
      cVar23 = (char)((ulonglong)uVar29 >> 0x20);
      puVar21 = (uint *)CONCAT22((short)((ulonglong)uVar29 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar29 >> 0x28) | pbVar25[0x2f],cVar23))
      ;
      *pbVar12 = *pbVar12 + (char)uVar29;
      cVar24 = (char)pbVar15;
      bVar18 = (byte)((uint)pbVar15 >> 8) | *pbVar12;
      pbVar12 = pbVar12 + *(int *)pbVar12;
      bVar5 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar18;
      bVar4 = (byte)pbVar12;
      if (CARRY1(bVar5,bVar18)) {
        *pbVar12 = *pbVar12 + bVar4;
        bVar18 = bVar18 | (byte)*puVar21;
        *pbVar25 = *pbVar25 - cVar23;
        *pbVar12 = *pbVar12 + bVar4;
        uVar14 = (undefined3)((uint)pbVar12 >> 8);
        bVar4 = bVar4 | (byte)*puVar21;
        piVar10 = (int *)CONCAT31(uVar14,bVar4);
        param_3 = param_3 + *piVar10;
        *(byte *)piVar10 = (char)*piVar10 + bVar4;
        cVar23 = (char)pbVar25 - *unaff_ESI;
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((char)((uint)pbVar25 >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)pbVar25 >> 8),cVar23) +
                                                     0x5f),cVar23));
        *(byte *)piVar10 = (char)*piVar10 + bVar4;
        bVar5 = bVar4 + 0x2a & (byte)*puVar21;
        pbVar27 = pbVar27 + *(int *)(param_3 + 0x5f);
        *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
        pbVar12 = (byte *)CONCAT31(uVar14,bVar5 + 0x2a);
        *(byte *)puVar21 = (byte)*puVar21 + 0x28;
        *pbVar12 = *pbVar12 + bVar5 + 0x2a;
      }
      else {
        *unaff_ESI = *unaff_ESI + bVar4;
      }
      pcVar16 = (char *)CONCAT22((short)((uint)pbVar15 >> 0x10),CONCAT11(bVar18,cVar24));
      *param_3 = *param_3 - bVar18;
      *(byte *)puVar21 = (byte)*puVar21 + cVar24;
      bVar5 = (byte)pbVar12 - 0xb;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
      if (10 < (byte)pbVar12) {
        *pbVar15 = *pbVar15 | bVar5;
        return pbVar15;
      }
      *(byte *)puVar21 = (byte)*puVar21 + cVar24;
      do {
        bVar5 = pbVar25[-0x23];
        bVar18 = (byte)pbVar15;
        *pbVar15 = *pbVar15 + bVar18;
        bVar4 = param_3[-0x22];
        *pbVar15 = *pbVar15 + bVar18;
        uVar14 = (undefined3)((uint)pbVar15 >> 8);
        bVar18 = bVar18 | *unaff_ESI;
        pbVar12 = (byte *)CONCAT31(uVar14,bVar18);
        cVar23 = (char)pbVar25 - *unaff_ESI;
        pbVar25 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar25 >> 0x10),
                                                   CONCAT11((char)((uint)pbVar25 >> 8) + bVar5 |
                                                            bVar4,(char)pbVar25)) >> 8),cVar23);
        cVar24 = (char)pcVar16;
        pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                   CONCAT11((char)((uint)pcVar16 >> 8) + *pbVar12,cVar24));
        *(byte *)puVar21 = (byte)*puVar21 + cVar24;
        bVar4 = bVar18 - *pbVar12;
        pbVar15 = (byte *)CONCAT31(uVar14,bVar4);
        unaff_ESI = unaff_ESI + (-(uint)(bVar18 < *pbVar12) - *(int *)pbVar15);
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 * '\x02');
        *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
        *pbVar27 = *pbVar27 + cVar23;
        bVar5 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar4;
        *puVar21 = (uint)(pbVar15 + (uint)CARRY1(bVar5,bVar4) + *puVar21);
      } while ((POPCOUNT(*puVar21 & 0xff) & 1U) != 0);
code_r0x00403cb7:
      *pbVar15 = *pbVar15 + (char)pbVar15;
      pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)pcVar16 | pbVar15[(int)pcVar16]);
      bVar28 = false;
      pbVar15 = (byte *)((uint)pbVar15 & 0xffffff00);
      do {
        pbVar27 = pbVar27 + (-(uint)bVar28 - *(int *)pbVar25);
        pcVar8 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),*pcVar16);
        *pcVar8 = *pcVar8 + *pcVar16;
        pbVar15 = (byte *)CONCAT31((int3)((uint)(pcVar8 + (unaff_ESI[0x2000001] <
                                                          (byte)((uint)pcVar16 >> 8)) + 0xda7d) >> 8
                                         ),((byte)(pcVar8 + (unaff_ESI[0x2000001] <
                                                            (byte)((uint)pcVar16 >> 8)) + 0xda7d) |
                                           (byte)*puVar21) + 0x7d);
        pcVar16 = pcVar16 + -1;
        *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar16;
        while( true ) {
          uVar22 = (undefined3)((uint)puVar21 >> 8);
          cVar24 = (char)puVar21 + *(char *)((int)pbVar27 * 2 + 0xa0000e1);
          puVar21 = (uint *)CONCAT31(uVar22,cVar24);
          bVar28 = CARRY1((byte)pbVar15,(byte)*puVar21);
          uVar14 = (undefined3)((uint)pbVar15 >> 8);
          bVar5 = (byte)pbVar15 + (byte)*puVar21;
          pbVar15 = (byte *)CONCAT31(uVar14,bVar5);
          if ((POPCOUNT(bVar5) & 1U) != 0) break;
          *pbVar15 = *pbVar15 + bVar5;
          cVar23 = (char)pcVar16;
          pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar16 >> 8) | pbVar27[-0x65],cVar23));
          bVar4 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar5;
          if (CARRY1(bVar4,bVar5)) {
            *pbVar15 = *pbVar15 + bVar5;
            pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar25 >> 8) | param_3[-0x1d],
                                                (char)pbVar25));
            *pbVar15 = *pbVar15 + bVar5;
            bVar28 = false;
            bVar5 = bVar5 | (byte)*puVar21;
            pcVar8 = (char *)CONCAT31(uVar14,bVar5);
            while( true ) {
              bVar4 = (byte)pcVar8;
              uVar14 = (undefined3)((uint)pcVar8 >> 8);
              if (bVar28 == (char)bVar5 < '\0') break;
              *pcVar8 = *pcVar8 + bVar4;
              bVar4 = bVar4 | (byte)*puVar21;
              puVar13 = (uint *)CONCAT31(uVar14,bVar4);
              *pbVar27 = *pbVar27 << 1 | (char)*pbVar27 < '\0';
              uVar3 = *puVar13;
              *(byte *)puVar13 = (byte)*puVar13 + bVar4;
              param_3 = param_3 + (-(uint)CARRY1((byte)uVar3,bVar4) - *puVar13);
              *puVar13 = *puVar13 << 1 | (uint)((int)*puVar13 < 0);
              while( true ) {
                uVar3 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21 + (byte)pcVar16;
                cVar24 = (char)puVar13 + 'o' + CARRY1((byte)uVar3,(byte)pcVar16);
                pcVar8 = (char *)CONCAT31((int3)((uint)puVar13 >> 8),cVar24);
                pcVar16 = (char *)0x20a0000;
                if ((POPCOUNT(cVar24) & 1U) != 0) break;
                *pcVar8 = *pcVar8 + cVar24;
                bVar5 = bRamfe140212;
                pcVar16 = (char *)0x0;
                uVar14 = (undefined3)((uint)(pcVar8 + -0x732b0000) >> 8);
                bVar4 = in(0);
                puVar13 = (uint *)CONCAT31(uVar14,bVar4);
                uVar3 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar21 < '\0') {
                  *(byte *)puVar13 = (byte)*puVar13 + bVar4;
                  bVar4 = bVar4 | (byte)*puVar21;
                  puVar13 = (uint *)CONCAT31(uVar14,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) == 0) {
                    *(byte *)puVar13 = (byte)*puVar13 + bVar4;
                    pcVar16 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar5 | (byte)*puVar13) << 8);
                    *(byte *)puVar13 = (byte)*puVar13 + bVar4;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar13 = (byte)*puVar13 + bVar4;
                  puVar13 = (uint *)CONCAT31(uVar14,bVar4 | (byte)*puVar21);
                }
              }
              *(byte *)puVar21 = (byte)*puVar21;
              bVar28 = SCARRY1((char)puVar21,*pbVar27);
              bVar5 = (char)puVar21 + *pbVar27;
              puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar5);
            }
            if (bVar28 == (char)bVar5 < '\0') {
              *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar16;
              pbVar15 = (byte *)((uint)pcVar8 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar8 = *pcVar8 + bVar4;
            pbVar15 = (byte *)CONCAT31(uVar14,(bVar4 | (byte)*puVar21) + 0x7d);
            pcVar16 = pcVar16 + -1;
            *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar16;
          }
          else {
            *(byte *)puVar21 = (byte)*puVar21 + cVar23;
            puVar21 = (uint *)CONCAT31(uVar22,cVar24 + *(char *)((int)pbVar27 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    *pbVar11 = *pbVar11 + bVar5;
    bVar5 = bVar5 + 0x6f & *(byte *)CONCAT31(uVar14,bVar5 + 0x6f);
    *param_2 = *param_2 + (char)pbVar15;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar5;
    pcVar16 = (char *)CONCAT31(uVar14,bVar5 - *unaff_EDI);
code_r0x00403b2c:
    bVar5 = (char)pcVar16 - *pcVar16;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar5);
    *pbVar12 = *pbVar12 + bVar5;
    *(byte **)pbVar12 = param_2 + *(int *)pbVar12;
    *pbVar12 = *pbVar12 + bVar5;
    bVar28 = CARRY1(*pbVar12,bVar5);
    *pbVar12 = *pbVar12 + bVar5;
    param_4 = unaff_ESI;
    while( true ) {
      *(byte **)pbVar12 = pbVar12 + (uint)bVar28 + *(int *)pbVar12;
      unaff_EDI = unaff_EDI + 4;
      pbVar12[(int)param_2] = pbVar12[(int)param_2] + (char)pbVar25;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      *(byte **)param_4 = pbVar25 + *(int *)param_4;
      bVar5 = (byte)((uint)pbVar15 >> 8);
      cVar24 = (char)pbVar15;
      pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),CONCAT11(bVar5 + *pbVar12,cVar24));
      pbVar12 = pbVar12 + (uint)CARRY1(bVar5,*pbVar12) + *(int *)pbVar12;
      *param_2 = *param_2 + cVar24;
      cVar24 = (char)pbVar25 - param_4[2];
      pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar24);
      unaff_EBP = param_3;
      unaff_ESI = param_4;
      if ((POPCOUNT(cVar24) & 1U) != 0) break;
code_r0x00403b4c:
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      bVar5 = (byte)pbVar12 | *pbVar25;
      piVar10 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
      if (bVar5 != 0) {
        param_3 = param_3 + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar10 = (char)*piVar10 + bVar5;
        pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar15 >> 8) | *param_2,(char)pbVar15));
        param_4 = param_4 + *piVar10;
        pcVar16 = (char *)((int)piVar10 + *piVar10);
        uVar14 = (undefined3)((uint)pcVar16 >> 8);
        bVar4 = (char)pcVar16 - *pcVar16;
        pbVar12 = (byte *)CONCAT31(uVar14,bVar4);
        bVar5 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar4;
        piVar10 = (int *)CONCAT31(uVar14,bVar4 - CARRY1(bVar5,bVar4));
      }
      *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
      unaff_ESI = param_4 + 4;
      out(*(undefined4 *)param_4,(short)param_2);
      pbVar12 = (byte *)(((uint)piVar10 >> 8) * 0x100);
      *param_2 = *param_2 + (byte)pbVar15;
      bVar5 = (char)param_2 - *pbVar25;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar5);
      *pbVar25 = *pbVar25;
      *param_2 = *param_2 + (char)((uint)pbVar15 >> 8);
      *pbVar12 = *pbVar12;
      pcVar16 = (char *)(((uint)piVar10 >> 8) * 0x200);
      *pcVar16 = *pcVar16 + (char)pbVar25;
      bVar28 = CARRY1(*pbVar15,bVar5);
      *pbVar15 = *pbVar15 + bVar5;
      param_4 = unaff_ESI;
      if (bVar28) {
        *pbVar12 = *pbVar12;
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(byte)pbVar15 | *param_2);
        goto code_r0x00403b73;
      }
    }
  } while( true );
code_r0x00403d33:
  param_3 = param_3 + -*puVar13;
  do {
    bVar5 = (byte)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    pbVar27 = pbVar27 + -*(int *)(param_3 + -0x1a);
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    bVar5 = bVar5 | (byte)*puVar21;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar5);
    *(byte *)puVar13 = (byte)*puVar13 | bVar5;
    bVar5 = (byte)*puVar13;
    param_3 = (byte *)0x2700001;
    while ((POPCOUNT(bVar5) & 1U) == 0) {
      do {
        *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar13;
        bVar5 = (byte)puVar13 | (byte)*puVar21;
        puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        uVar2 = CONCAT21((short)((uint)pcVar16 >> 0x10),(byte)((uint)pcVar16 >> 8) | bRamfe140212);
        while( true ) {
          pcVar16 = (char *)((uint)uVar2 << 8);
          bVar17 = (byte)puVar13;
          *(byte *)puVar13 = (byte)*puVar13 & bVar17;
          bVar18 = *pbVar25;
          bVar6 = (byte)uVar2;
          bVar4 = *pbVar25;
          *pbVar25 = *pbVar25 + bVar6;
          bVar5 = *pbVar25;
          if (!CARRY1(bVar18,bVar6)) break;
          *(byte *)puVar13 = (byte)*puVar13 + bVar17;
          pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar25 >> 8) | bRam026fffe2,
                                              (char)pbVar25));
          *(byte *)puVar13 = (byte)*puVar13 + bVar17;
          bVar17 = bVar17 | (byte)*puVar21;
          puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar17);
          bVar28 = (POPCOUNT(bVar17) & 1U) == 0;
          while( true ) {
            cVar24 = (char)((uint)pbVar25 >> 8);
            uVar19 = (undefined2)((uint)pbVar25 >> 0x10);
            if (!bVar28) {
              *(byte *)puVar21 = (byte)*puVar21;
              pbVar25 = (byte *)CONCAT22(uVar19,CONCAT11(cVar24 + pbVar25[-0x1f],(char)pbVar25));
              goto code_r0x00403d52;
            }
            *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
            uVar20 = (undefined2)((uint)pcVar16 >> 0x10);
            bVar4 = (byte)((uint)pcVar16 >> 8) | (byte)*puVar13;
            uVar2 = CONCAT21(uVar20,bVar4);
            *puVar13 = *puVar13 & (uint)puVar13;
            *pbVar25 = *pbVar25 + bVar4;
            uVar14 = (undefined3)((uint)puVar13 >> 8);
            bVar5 = (char)puVar13 - bVar4;
            pcVar16 = (char *)CONCAT31(uVar14,bVar5);
            *pcVar16 = *pcVar16 + bVar5;
            bVar5 = bVar5 | (byte)*puVar21;
            puVar13 = (uint *)CONCAT31(uVar14,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *(byte *)puVar13 = (byte)*puVar13 + bVar5;
            pcVar16 = (char *)((uint)CONCAT21(uVar20,bVar4 | (byte)*puVar13) << 8);
            *puVar13 = *puVar13 - (int)puVar13;
            *(byte *)puVar21 = (byte)*puVar21;
            pbVar25 = (byte *)CONCAT22(uVar19,CONCAT11(cVar24 + pbVar25[-0x1d],(char)pbVar25));
            do {
              *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
              uVar19 = (undefined2)((uint)puVar21 >> 0x10);
              cVar24 = (char)puVar21;
              bVar5 = (byte)((uint)puVar21 >> 8) | pbVar25[-0x17];
              puVar21 = (uint *)CONCAT22(uVar19,CONCAT11(bVar5,cVar24));
              *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
              pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar25 >> 8) | bRam026fffeb,
                                                  (char)pbVar25));
              do {
                *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar13;
                uVar14 = (undefined3)((uint)puVar13 >> 8);
                bVar18 = (byte)puVar13 | (byte)*puVar21;
                pcVar8 = (char *)CONCAT31(uVar14,bVar18);
                bVar4 = pbVar25[-0x16];
                *pcVar8 = *pcVar8 + bVar18;
                pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                           CONCAT11((char)((uint)pbVar25 >> 8) + bVar4 |
                                                    bRam026fffec,(char)pbVar25));
                *pcVar8 = *pcVar8 + bVar18;
                pbVar15 = (byte *)CONCAT31(uVar14,bVar18 | (byte)*puVar21);
                while( true ) {
                  *pbVar15 = *pbVar15 + (byte)pbVar15;
                  uVar14 = (undefined3)((uint)pbVar15 >> 8);
                  bVar4 = (byte)pbVar15 | (byte)*puVar21;
                  puVar13 = (uint *)CONCAT31(uVar14,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) != 0) break;
                  *(byte *)puVar13 = (byte)*puVar13 + bVar4;
                  bVar18 = pbVar27[-0x14];
                  *(byte *)puVar13 = (byte)*puVar13 + bVar4;
                  bVar4 = bVar4 | (byte)*puVar21;
                  pcVar8 = (char *)CONCAT31(uVar14,bVar4);
                  bVar17 = pbVar25[-0x15];
                  *pcVar8 = *pcVar8 + bVar4;
                  pcVar16 = (char *)((uint)CONCAT21((short)((uint)pcVar16 >> 0x10),
                                                    (byte)((uint)pcVar16 >> 8) | bVar18 |
                                                    pbVar27[-0x13]) << 8);
                  *pcVar8 = *pcVar8 + bVar4;
                  pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                             CONCAT11((char)((uint)pbVar25 >> 8) + bVar17 |
                                                      bRam026fffef,(char)pbVar25));
                  *pcVar8 = *pcVar8 + bVar4;
                  pbVar15 = (byte *)CONCAT31(uVar14,bVar4 | (byte)*puVar21);
                  do {
                    do {
                      bVar18 = (byte)pbVar15;
                      *pbVar15 = *pbVar15 + bVar18;
                      cVar26 = (char)pbVar25;
                      pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar25 >> 8) | *pbVar15,
                                                          cVar26));
                      *pbVar15 = bVar18;
                      *pbVar15 = *pbVar15 + bVar18;
                      cVar23 = (char)((uint)pcVar16 >> 8) + *pbVar15;
                      pcVar16 = (char *)((uint)CONCAT21((short)((uint)pcVar16 >> 0x10),cVar23) << 8)
                      ;
                      uVar14 = (undefined3)((uint)pbVar15 >> 8);
                      bVar18 = bVar18 & *pbVar15;
                      pbVar15 = (byte *)CONCAT31(uVar14,bVar18);
                      bVar4 = *pbVar25;
                      *pbVar25 = *pbVar25 + cVar23;
                    } while (SCARRY1(bVar4,cVar23) == (char)*pbVar25 < '\0');
                    *pbVar15 = *pbVar15 + bVar18;
                    bVar18 = bVar18 | (byte)*puVar21;
                    pbVar15 = (byte *)CONCAT31(uVar14,bVar18);
                    if ((POPCOUNT(bVar18) & 1U) == 0) {
                      *pbVar15 = *pbVar15 + bVar18;
                      *pbVar15 = *pbVar15 + bVar18;
                      cVar24 = cVar24 - bVar5;
                      pbVar25 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),cVar24);
                      *pbVar15 = *pbVar15 + bVar18;
                      bRam0312382b = bRam0312382b | *pbVar25;
                      while( true ) {
                        bVar4 = (byte)pbVar15;
                        *pbVar15 = *pbVar15 + bVar4;
                        bRam0312382b = bRam0312382b | (pbVar27 + 0x21b0000)[(int)pbVar15];
                        uVar14 = (undefined3)((uint)pbVar15 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar25 = *pbVar25 + bRam0312382b;
                        pbVar15 = (byte *)CONCAT31(uVar14,bVar4 | *unaff_ESI);
                      }
                      *pbVar15 = *pbVar15 + bVar4;
                      bVar4 = bVar4 | *unaff_ESI;
                      pcVar16 = (char *)CONCAT31(uVar14,bVar4);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar25);
                      *pcVar16 = *pcVar16 + bVar4;
                      uVar20 = CONCAT11(bVar5 | bRam6f0a002b,cVar24);
                      pcVar8 = (char *)CONCAT22(uVar19,uVar20);
                      *pcVar16 = *pcVar16 + bVar4;
                      *pcVar8 = *pcVar8 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar20);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar26 + *pcVar16);
                  } while (SCARRY1(cVar26,*pcVar16) != (char)(cVar26 + *pcVar16) < '\0');
                }
                uVar3 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar21 < '\0');
              *(byte *)puVar21 = (byte)*puVar21;
              *pcVar16 = *pcVar16 - (char)pbVar25;
              *(byte *)puVar13 = (byte)*puVar13 + bVar4;
              bVar4 = bVar4 | (byte)*puVar21;
              puVar13 = (uint *)CONCAT31(uVar14,bVar4);
              bVar28 = (POPCOUNT(bVar4) & 1U) == 0;
            } while (bVar28);
          }
        }
      } while (SCARRY1(bVar4,bVar6));
    }
    *pbVar25 = *pbVar25 + (char)((uint)pcVar16 >> 8);
    *pbVar27 = *pbVar27 - (char)pbVar25;
  } while( true );
}


