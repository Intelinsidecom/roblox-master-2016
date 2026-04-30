/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004039fa
 * Raw Name    : <Execute>b__7
 * Demangled   : <Execute>b__7
 * Prototype   : byte * <Execute>b__7(undefined4 s, byte * param_2)
 * Local Vars  : param_2, pcVar1, uVar2, uVar3, bVar4, bVar5, bVar6, cVar7, in_EAX, pcVar8, pcVar9, piVar10, pbVar11, pbVar12, pbVar13, puVar14, uVar15, pbVar16, extraout_ECX, pcVar17, bVar18, bVar19, uVar20, uVar21, puVar22, uVar23, uVar24, cVar25, unaff_EBX, pbVar26, cVar27, unaff_EBP, unaff_ESI, unaff_EDI, pbVar28, in_ES, bVar29, uVar30, unaff_retaddr, s
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall <Execute>b__7(undefined4 s,byte *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char *in_EAX;
  undefined3 uVar15;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  byte bVar18;
  undefined2 uVar20;
  byte *pbVar16;
  byte *extraout_ECX;
  byte bVar19;
  char *pcVar17;
  undefined2 uVar21;
  uint *puVar22;
  undefined3 uVar23;
  undefined1 uVar24;
  char cVar25;
  char cVar27;
  int unaff_EBX;
  byte *pbVar26;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte *pbVar28;
  undefined2 in_ES;
  bool bVar29;
  undefined8 uVar30;
  byte *unaff_retaddr;
  
                    /* .NET CLR Managed Code */
  cVar25 = unaff_EDI[0x17];
  uVar20 = (undefined2)((uint)s >> 0x10);
  bVar19 = (byte)s;
  bVar5 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar5;
  bVar18 = (char)((uint)s >> 8) + cVar25 | *param_2;
  pbVar16 = (byte *)CONCAT22(uVar20,CONCAT11(bVar18,bVar19));
  uVar21 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar24 = (undefined1)unaff_EBX;
  cVar27 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x4e);
  *in_EAX = *in_EAX + bVar5;
  uVar15 = (undefined3)((uint)in_EAX >> 8);
  pcVar17 = (char *)CONCAT31(uVar15,bVar5 + 0x28);
  *pcVar17 = (*pcVar17 - (bVar5 + 0x28)) - (0xd7 < bVar5);
  *param_2 = *param_2 + bVar19;
  bVar4 = bVar5 + 0x1b;
  cVar27 = cVar27 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar27,uVar24)) + 0x4f);
  pbVar26 = (byte *)CONCAT22(uVar21,CONCAT11(cVar27,uVar24));
  *(char *)CONCAT31(uVar15,bVar4) = *(char *)CONCAT31(uVar15,bVar4) + bVar4;
  pcVar8 = (char *)CONCAT31(uVar15,bVar5 + 0x43);
  *pcVar8 = (*pcVar8 - (bVar5 + 0x43)) - (0xd7 < bVar4);
  *param_2 = *param_2 + bVar19;
  pcVar9 = pcVar8 + -0x6b721c;
  pcVar17 = pcVar8 + -0x6b721a;
  cVar25 = (char)((uint)param_2 >> 8);
  *pcVar17 = *pcVar17 + cVar25;
  pbVar28 = unaff_retaddr;
  if ((POPCOUNT(*pcVar17) & 1U) == 0) {
    cVar7 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar7;
    uVar15 = (undefined3)((uint)pcVar9 >> 8);
    bVar5 = cVar7 + 2;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
      piVar10 = (int *)CONCAT31(uVar15,cVar7 + '*');
      *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0xd7 < bVar5);
      bVar5 = *param_2;
      *param_2 = *param_2 + bVar19;
      out(*(undefined4 *)unaff_ESI,(short)param_2);
      bVar6 = ((cVar7 + '*') - (char)*piVar10) - CARRY1(bVar5,bVar19);
      pbVar16 = (byte *)CONCAT31(uVar15,bVar6);
      *param_2 = *param_2 + bVar19;
      cVar27 = cVar27 - unaff_ESI[0x1f];
      pbVar26 = (byte *)CONCAT22(uVar21,CONCAT11(cVar27,uVar24));
      *pbVar16 = *pbVar16 + bVar6;
      bVar4 = *param_2;
      bVar5 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar6;
      unaff_ESI = unaff_ESI + ((4 - *(int *)pbVar16) - (uint)CARRY1(bVar5,bVar6));
      pbVar13 = (byte *)CONCAT31(uVar15,bVar6);
      pbVar16 = (byte *)(CONCAT22(uVar20,CONCAT11(bVar18 | bVar4,bVar19)) + -1);
      bVar5 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      bVar5 = (bVar6 - *pbVar13) - CARRY1(bVar5,bVar6);
      *pbVar16 = *pbVar16 + (char)param_2;
      bVar29 = CARRY1(bVar5,*param_2);
      bVar5 = bVar5 + *param_2;
      pbVar11 = (byte *)CONCAT31(uVar15,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar5;
        cVar7 = (bVar5 + 0x6f) - (0x90 < bVar5);
        pbVar13 = (byte *)CONCAT31(uVar15,cVar7);
        bVar5 = *param_2;
        *param_2 = *param_2 + (char)pbVar16;
        if (SCARRY1(bVar5,(char)pbVar16) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar13 = *pbVar13 + cVar7;
        pcVar17 = (char *)CONCAT31(uVar15,cVar7 + '\x02');
        bVar4 = cVar27 + pbVar26[0x52];
        pbVar26 = (byte *)CONCAT22(uVar21,CONCAT11(bVar4,uVar24));
        *pcVar17 = *pcVar17 + cVar7 + '\x02';
        bVar5 = cVar7 + 4;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar5);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pbVar13 = *pbVar13 + bVar5;
          cVar27 = (cVar7 + 's') - (0x90 < bVar5);
          pcVar9 = (char *)CONCAT31(uVar15,cVar27);
          bVar5 = (byte)((uint)pbVar16 >> 8);
          bVar29 = CARRY1(*pbVar26,bVar5);
          *pbVar26 = *pbVar26 + bVar5;
          pbVar11 = unaff_ESI;
          if (bVar29) {
            *pcVar9 = *pcVar9 + cVar27;
            pbVar26 = (byte *)CONCAT22(uVar21,CONCAT11(bVar4 | unaff_EBP[0x5c],uVar24));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar13;
        pbVar26 = (byte *)CONCAT22(uVar21,CONCAT11(bVar4 + pbVar26[0x52],uVar24));
code_r0x00403abf:
        *pbVar13 = *pbVar13 + (char)pbVar13;
        cVar27 = (char)pbVar13 + '\x02';
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar27);
        bVar29 = (POPCOUNT(cVar27) & 1U) == 0;
        if (!bVar29) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar29) {
          *pbVar11 = *pbVar11 + (byte)pbVar11;
          bVar5 = (byte)pbVar11 | pbVar11[0x400005e];
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
          if ((char)bVar5 < '\x01') goto code_r0x00403b0b;
          *pbVar13 = *pbVar13 + bVar5;
code_r0x00403aaf:
          cVar27 = (char)pbVar13 + '(';
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar27);
          *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
          bVar5 = *pbVar26;
          bVar4 = (byte)((uint)pbVar16 >> 8);
          *pbVar26 = *pbVar26 + bVar4;
          pbVar12 = unaff_EBP;
          if (!CARRY1(bVar5,bVar4)) goto code_r0x00403ad8;
          *pbVar13 = *pbVar13 + cVar27;
          pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                     CONCAT11(bVar4 | *pbVar26,(char)pbVar16));
          if ((POPCOUNT(*param_2 - cVar27) & 1U) != 0) {
            *unaff_ESI = *unaff_ESI + cVar27;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                   CONCAT11((char)((uint)pbVar26 >> 8) + pbVar26[0x53],(char)pbVar26
                                           ));
      }
      bVar5 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      cVar27 = (bVar5 + 0x6f) - (0x90 < bVar5);
      pcVar17 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar27);
      bVar5 = *pbVar26;
      cVar7 = (char)((uint)pbVar16 >> 8);
      *pbVar26 = *pbVar26 + cVar7;
      if (*pbVar26 == 0 || SCARRY1(bVar5,cVar7) != (char)*pbVar26 < '\0') goto code_r0x00403b2c;
      *pcVar17 = *pcVar17 + cVar27;
    }
    else {
      pcVar17 = (char *)CONCAT31(uVar15,bVar5 + *param_2);
      pbVar11 = unaff_ESI;
      if ((POPCOUNT(bVar5 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar17) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar13 = unaff_EBP;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 + 0x2d);
    pbVar28 = (byte *)((uint)unaff_retaddr & 0xffff0000);
code_r0x00403ad8:
    unaff_retaddr = pbVar12;
    bVar5 = *pbVar13;
    bVar4 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar4;
    pbVar28 = (byte *)CONCAT22((short)((uint)pbVar28 >> 0x10),in_ES);
    unaff_EBP = unaff_retaddr;
    if (CARRY1(bVar5,bVar4)) {
      *pbVar13 = *pbVar13 + bVar4;
      bVar4 = bVar4 | pbVar13[0x400005d];
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar4);
      pbVar11 = unaff_ESI;
      if ((char)bVar4 < '\x01') {
        *pbVar13 = *pbVar13 + bVar4;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar16 >> 8) | *param_2,(char)pbVar16));
        pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                   CONCAT11((char)((uint)pbVar26 >> 8) + pbVar26[-0x39],
                                            (char)pbVar26));
        goto code_r0x00403b4c;
      }
code_r0x00403ae7:
      *pbVar13 = *pbVar13 + (char)pbVar13;
      cVar27 = (char)pbVar13 + '(';
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar27);
      *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar5 = *pbVar26;
      bVar4 = (byte)((uint)pbVar16 >> 8);
      *pbVar26 = *pbVar26 + bVar4;
      unaff_EBP = unaff_retaddr;
      unaff_ESI = pbVar11;
      if (!CARRY1(bVar5,bVar4)) goto code_r0x00403b0b;
      *pbVar13 = *pbVar13 + cVar27;
      goto code_r0x00403af3;
    }
  }
  else {
    bVar5 = *param_2;
    *param_2 = *param_2 + bVar19;
    if (SCARRY1(bVar5,bVar19) == (char)*param_2 < '\0') {
      pbVar13 = unaff_EBP;
      pbVar12 = (byte *)(pcVar8 + -0x769862d);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar9 = *pcVar9 + (char)pcVar9;
    pcVar17 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + '\x02');
    pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                               CONCAT11((char)((uint)pbVar26 >> 8) + pbVar26[0x54],(char)pbVar26));
    pbVar11 = unaff_ESI;
code_r0x00403a7d:
    cVar27 = (char)pcVar17;
    *pcVar17 = *pcVar17 + cVar27;
    uVar15 = (undefined3)((uint)pcVar17 >> 8);
    cVar7 = cVar27 + '-';
    pbVar12 = (byte *)CONCAT31(uVar15,cVar7);
    pbVar13 = unaff_EBP;
    unaff_ESI = pbVar11;
    if ((POPCOUNT(cVar7 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar12 = *pbVar12 + cVar7;
    bVar5 = cVar27 + 0x2f;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      bVar5 = *param_2;
      *param_2 = *param_2 + (byte)pbVar16;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar5,(byte)pbVar16);
      pbVar13 = (byte *)CONCAT31(uVar15,cVar27 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
    bVar29 = 0x90 < bVar5;
    pcVar9 = (char *)CONCAT31(uVar15,cVar27 + -0x62);
code_r0x00403a8f:
    uVar15 = (undefined3)((uint)pcVar9 >> 8);
    bVar4 = (char)pcVar9 - bVar29;
    pbVar13 = (byte *)CONCAT31(uVar15,bVar4);
    bVar5 = *pbVar26;
    cVar27 = (char)((uint)pbVar16 >> 8);
    *pbVar26 = *pbVar26 + cVar27;
    unaff_ESI = pbVar11;
    if (*pbVar26 != 0 && SCARRY1(bVar5,cVar27) == (char)*pbVar26 < '\0') {
      *pbVar13 = *pbVar13 + bVar4;
      unaff_ESI = (byte *)CONCAT31(uVar15,bVar4 + 0x2d);
      *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar11 + (int)unaff_EDI * 8);
      bVar29 = CARRY1(*pbVar11,(byte)pbVar11);
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      goto code_r0x00403aa1;
    }
code_r0x00403af3:
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11((byte)((uint)pbVar16 >> 8) | *pbVar13,(char)pbVar16));
    *unaff_ESI = *unaff_ESI + (char)pbVar13;
  }
  pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                             CONCAT11((char)((uint)pbVar26 >> 8) + pbVar26[0x55],(char)pbVar26));
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar15 = (undefined3)((uint)pbVar13 >> 8);
  bVar4 = (char)pbVar13 + 0x6f;
  bVar5 = *(byte *)CONCAT31(uVar15,bVar4);
  *param_2 = *param_2 + (char)pbVar16;
  pbVar13 = (byte *)CONCAT31(uVar15,(bVar4 & bVar5) + *unaff_ESI);
  *pbVar16 = *pbVar16 - cVar25;
code_r0x00403b0b:
  do {
    *pbVar13 = *pbVar13 + (char)pbVar13;
    param_2[0x16060000] = param_2[0x16060000] - (char)pbVar16;
    pbVar26 = (byte *)((uint)pbVar26 | (uint)unaff_ESI);
    cVar25 = (char)pbVar13 + '\x02';
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar25);
    bVar29 = (POPCOUNT(cVar25) & 1U) == 0;
code_r0x00403b18:
    unaff_retaddr = unaff_EBP;
    bVar5 = (byte)pbVar11;
    uVar15 = (undefined3)((uint)pbVar11 >> 8);
    if (!bVar29) {
      *param_2 = *param_2 + (char)pbVar16;
      pbVar13 = (byte *)CONCAT31(uVar15,bVar5 | *unaff_ESI);
code_r0x00403b73:
      pbVar28 = (byte *)(unaff_EDI + *(int *)(unaff_retaddr + -0x37));
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      uVar15 = (undefined3)((uint)pbVar13 >> 8);
      bVar5 = (byte)pbVar13 | *param_2;
      pcVar17 = (char *)CONCAT31(uVar15,bVar5);
      uVar30 = CONCAT44(param_2,pcVar17);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pcVar17 = *pcVar17 + bVar5;
        *unaff_ESI = *unaff_ESI + 1;
        return (byte *)CONCAT31(uVar15,bVar5 + 6);
      }
      bVar5 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar5,'\x01')) {
        uVar30 = (*pcVar1)();
        pbVar16 = extraout_ECX;
      }
      pbVar13 = (byte *)uVar30;
      *pbVar13 = *pbVar13 + (char)uVar30;
      cVar27 = (char)((ulonglong)uVar30 >> 0x20);
      puVar22 = (uint *)CONCAT22((short)((ulonglong)uVar30 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar30 >> 0x28) | pbVar26[0x2f],cVar27))
      ;
      *pbVar13 = *pbVar13 + (char)uVar30;
      cVar25 = (char)pbVar16;
      bVar19 = (byte)((uint)pbVar16 >> 8) | *pbVar13;
      pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar5 = *pbVar26;
      *pbVar26 = *pbVar26 + bVar19;
      bVar4 = (byte)pbVar13;
      if (CARRY1(bVar5,bVar19)) {
        *pbVar13 = *pbVar13 + bVar4;
        bVar19 = bVar19 | (byte)*puVar22;
        *pbVar26 = *pbVar26 - cVar27;
        *pbVar13 = *pbVar13 + bVar4;
        uVar15 = (undefined3)((uint)pbVar13 >> 8);
        bVar4 = bVar4 | (byte)*puVar22;
        piVar10 = (int *)CONCAT31(uVar15,bVar4);
        unaff_retaddr = unaff_retaddr + *piVar10;
        *(byte *)piVar10 = (char)*piVar10 + bVar4;
        cVar27 = (char)pbVar26 - *unaff_ESI;
        pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                   CONCAT11((char)((uint)pbVar26 >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)pbVar26 >> 8),cVar27) +
                                                     0x5f),cVar27));
        *(byte *)piVar10 = (char)*piVar10 + bVar4;
        bVar5 = bVar4 + 0x2a & (byte)*puVar22;
        pbVar28 = pbVar28 + *(int *)(unaff_retaddr + 0x5f);
        *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar5 + 0x2a);
        *(byte *)puVar22 = (byte)*puVar22 + 0x28;
        *pbVar13 = *pbVar13 + bVar5 + 0x2a;
      }
      else {
        *unaff_ESI = *unaff_ESI + bVar4;
      }
      pcVar17 = (char *)CONCAT22((short)((uint)pbVar16 >> 0x10),CONCAT11(bVar19,cVar25));
      *unaff_retaddr = *unaff_retaddr - bVar19;
      *(byte *)puVar22 = (byte)*puVar22 + cVar25;
      bVar5 = (byte)pbVar13 - 0xb;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar5);
      if (10 < (byte)pbVar13) {
        *pbVar16 = *pbVar16 | bVar5;
        return pbVar16;
      }
      *(byte *)puVar22 = (byte)*puVar22 + cVar25;
      do {
        bVar5 = pbVar26[-0x23];
        bVar19 = (byte)pbVar16;
        *pbVar16 = *pbVar16 + bVar19;
        bVar4 = unaff_retaddr[-0x22];
        *pbVar16 = *pbVar16 + bVar19;
        uVar15 = (undefined3)((uint)pbVar16 >> 8);
        bVar19 = bVar19 | *unaff_ESI;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar19);
        cVar27 = (char)pbVar26 - *unaff_ESI;
        pbVar26 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar26 >> 0x10),
                                                   CONCAT11((char)((uint)pbVar26 >> 8) + bVar5 |
                                                            bVar4,(char)pbVar26)) >> 8),cVar27);
        cVar25 = (char)pcVar17;
        pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                   CONCAT11((char)((uint)pcVar17 >> 8) + *pbVar13,cVar25));
        *(byte *)puVar22 = (byte)*puVar22 + cVar25;
        bVar4 = bVar19 - *pbVar13;
        pbVar16 = (byte *)CONCAT31(uVar15,bVar4);
        unaff_ESI = unaff_ESI + (-(uint)(bVar19 < *pbVar13) - *(int *)pbVar16);
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 * '\x02');
        *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
        *pbVar28 = *pbVar28 + cVar27;
        bVar5 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar4;
        *puVar22 = (uint)(pbVar16 + (uint)CARRY1(bVar5,bVar4) + *puVar22);
      } while ((POPCOUNT(*puVar22 & 0xff) & 1U) != 0);
code_r0x00403cb7:
      *pbVar16 = *pbVar16 + (char)pbVar16;
      pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 | pbVar16[(int)pcVar17]);
      bVar29 = false;
      pbVar16 = (byte *)((uint)pbVar16 & 0xffffff00);
      do {
        pbVar28 = pbVar28 + (-(uint)bVar29 - *(int *)pbVar26);
        pcVar8 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),*pcVar17);
        *pcVar8 = *pcVar8 + *pcVar17;
        pbVar16 = (byte *)CONCAT31((int3)((uint)(pcVar8 + (unaff_ESI[0x2000001] <
                                                          (byte)((uint)pcVar17 >> 8)) + 0xda7d) >> 8
                                         ),((byte)(pcVar8 + (unaff_ESI[0x2000001] <
                                                            (byte)((uint)pcVar17 >> 8)) + 0xda7d) |
                                           (byte)*puVar22) + 0x7d);
        pcVar17 = pcVar17 + -1;
        *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar17;
        while( true ) {
          uVar23 = (undefined3)((uint)puVar22 >> 8);
          cVar25 = (char)puVar22 + *(char *)((int)pbVar28 * 2 + 0xa0000e1);
          puVar22 = (uint *)CONCAT31(uVar23,cVar25);
          bVar29 = CARRY1((byte)pbVar16,(byte)*puVar22);
          uVar15 = (undefined3)((uint)pbVar16 >> 8);
          bVar5 = (byte)pbVar16 + (byte)*puVar22;
          pbVar16 = (byte *)CONCAT31(uVar15,bVar5);
          if ((POPCOUNT(bVar5) & 1U) != 0) break;
          *pbVar16 = *pbVar16 + bVar5;
          cVar27 = (char)pcVar17;
          pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar17 >> 8) | pbVar28[-0x65],cVar27));
          bVar4 = *pbVar16;
          *pbVar16 = *pbVar16 + bVar5;
          if (CARRY1(bVar4,bVar5)) {
            *pbVar16 = *pbVar16 + bVar5;
            pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar26 >> 8) | unaff_retaddr[-0x1d],
                                                (char)pbVar26));
            *pbVar16 = *pbVar16 + bVar5;
            bVar29 = false;
            bVar5 = bVar5 | (byte)*puVar22;
            pcVar8 = (char *)CONCAT31(uVar15,bVar5);
            while( true ) {
              bVar4 = (byte)pcVar8;
              uVar15 = (undefined3)((uint)pcVar8 >> 8);
              if (bVar29 == (char)bVar5 < '\0') break;
              *pcVar8 = *pcVar8 + bVar4;
              bVar4 = bVar4 | (byte)*puVar22;
              puVar14 = (uint *)CONCAT31(uVar15,bVar4);
              *pbVar28 = *pbVar28 << 1 | (char)*pbVar28 < '\0';
              uVar3 = *puVar14;
              *(byte *)puVar14 = (byte)*puVar14 + bVar4;
              unaff_retaddr = unaff_retaddr + (-(uint)CARRY1((byte)uVar3,bVar4) - *puVar14);
              *puVar14 = *puVar14 << 1 | (uint)((int)*puVar14 < 0);
              while( true ) {
                uVar3 = *puVar22;
                *(byte *)puVar22 = (byte)*puVar22 + (byte)pcVar17;
                cVar25 = (char)puVar14 + 'o' + CARRY1((byte)uVar3,(byte)pcVar17);
                pcVar8 = (char *)CONCAT31((int3)((uint)puVar14 >> 8),cVar25);
                pcVar17 = (char *)0x20a0000;
                if ((POPCOUNT(cVar25) & 1U) != 0) break;
                *pcVar8 = *pcVar8 + cVar25;
                bVar5 = bRamfe140212;
                pcVar17 = (char *)0x0;
                uVar15 = (undefined3)((uint)(pcVar8 + -0x732b0000) >> 8);
                bVar4 = in(0);
                puVar14 = (uint *)CONCAT31(uVar15,bVar4);
                uVar3 = *puVar22;
                *(byte *)puVar22 = (byte)*puVar22;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar22 < '\0') {
                  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                  bVar4 = bVar4 | (byte)*puVar22;
                  puVar14 = (uint *)CONCAT31(uVar15,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) == 0) {
                    *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                    pcVar17 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar5 | (byte)*puVar14) << 8);
                    *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                  puVar14 = (uint *)CONCAT31(uVar15,bVar4 | (byte)*puVar22);
                }
              }
              *(byte *)puVar22 = (byte)*puVar22;
              bVar29 = SCARRY1((char)puVar22,*pbVar28);
              bVar5 = (char)puVar22 + *pbVar28;
              puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar5);
            }
            if (bVar29 == (char)bVar5 < '\0') {
              *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar17;
              pbVar16 = (byte *)((uint)pcVar8 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar8 = *pcVar8 + bVar4;
            pbVar16 = (byte *)CONCAT31(uVar15,(bVar4 | (byte)*puVar22) + 0x7d);
            pcVar17 = pcVar17 + -1;
            *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar17;
          }
          else {
            *(byte *)puVar22 = (byte)*puVar22 + cVar27;
            puVar22 = (uint *)CONCAT31(uVar23,cVar25 + *(char *)((int)pbVar28 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    *pbVar11 = *pbVar11 + bVar5;
    bVar5 = bVar5 + 0x6f & *(byte *)CONCAT31(uVar15,bVar5 + 0x6f);
    *param_2 = *param_2 + (char)pbVar16;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar5;
    pcVar17 = (char *)CONCAT31(uVar15,bVar5 - *unaff_EDI);
    unaff_EBP = unaff_retaddr;
code_r0x00403b2c:
    unaff_retaddr = unaff_EBP;
    bVar5 = (char)pcVar17 - *pcVar17;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar5);
    *pbVar13 = *pbVar13 + bVar5;
    *(byte **)pbVar13 = param_2 + *(int *)pbVar13;
    *pbVar13 = *pbVar13 + bVar5;
    bVar29 = CARRY1(*pbVar13,bVar5);
    *pbVar13 = *pbVar13 + bVar5;
    pbVar28 = unaff_ESI;
    while( true ) {
      *(byte **)pbVar13 = pbVar13 + (uint)bVar29 + *(int *)pbVar13;
      unaff_EDI = unaff_EDI + 4;
      pbVar13[(int)param_2] = pbVar13[(int)param_2] + (char)pbVar26;
      *pbVar13 = *pbVar13 + (char)pbVar13;
      *(byte **)pbVar28 = pbVar26 + *(int *)pbVar28;
      bVar5 = (byte)((uint)pbVar16 >> 8);
      cVar25 = (char)pbVar16;
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),CONCAT11(bVar5 + *pbVar13,cVar25));
      pbVar13 = pbVar13 + (uint)CARRY1(bVar5,*pbVar13) + *(int *)pbVar13;
      *param_2 = *param_2 + cVar25;
      cVar25 = (char)pbVar26 - pbVar28[2];
      pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar25);
      unaff_EBP = unaff_retaddr;
      unaff_ESI = pbVar28;
      if ((POPCOUNT(cVar25) & 1U) != 0) break;
code_r0x00403b4c:
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      bVar5 = (byte)pbVar13 | *pbVar26;
      piVar10 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar5);
      if (bVar5 != 0) {
        unaff_retaddr = unaff_retaddr + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar10 = (char)*piVar10 + bVar5;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar16 >> 8) | *param_2,(char)pbVar16));
        pbVar28 = pbVar28 + *piVar10;
        pcVar17 = (char *)((int)piVar10 + *piVar10);
        uVar15 = (undefined3)((uint)pcVar17 >> 8);
        bVar4 = (char)pcVar17 - *pcVar17;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar4);
        bVar5 = *pbVar13;
        *pbVar13 = *pbVar13 + bVar4;
        piVar10 = (int *)CONCAT31(uVar15,bVar4 - CARRY1(bVar5,bVar4));
      }
      *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
      unaff_ESI = pbVar28 + 4;
      out(*(undefined4 *)pbVar28,(short)param_2);
      pbVar13 = (byte *)(((uint)piVar10 >> 8) * 0x100);
      *param_2 = *param_2 + (byte)pbVar16;
      bVar5 = (char)param_2 - *pbVar26;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar5);
      *pbVar26 = *pbVar26;
      *param_2 = *param_2 + (char)((uint)pbVar16 >> 8);
      *pbVar13 = *pbVar13;
      pcVar17 = (char *)(((uint)piVar10 >> 8) * 0x200);
      *pcVar17 = *pcVar17 + (char)pbVar26;
      bVar29 = CARRY1(*pbVar16,bVar5);
      *pbVar16 = *pbVar16 + bVar5;
      pbVar28 = unaff_ESI;
      if (bVar29) {
        *pbVar13 = *pbVar13;
        pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | *param_2);
        goto code_r0x00403b73;
      }
    }
  } while( true );
code_r0x00403d33:
  unaff_retaddr = unaff_retaddr + -*puVar14;
  do {
    bVar5 = (byte)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar5;
    pbVar28 = pbVar28 + -*(int *)(unaff_retaddr + -0x1a);
    *(byte *)puVar14 = (byte)*puVar14 + bVar5;
    bVar5 = bVar5 | (byte)*puVar22;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar5);
    *(byte *)puVar14 = (byte)*puVar14 | bVar5;
    bVar5 = (byte)*puVar14;
    unaff_retaddr = (byte *)0x2700001;
    while ((POPCOUNT(bVar5) & 1U) == 0) {
      do {
        *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
        bVar5 = (byte)puVar14 | (byte)*puVar22;
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        uVar2 = CONCAT21((short)((uint)pcVar17 >> 0x10),(byte)((uint)pcVar17 >> 8) | bRamfe140212);
        while( true ) {
          pcVar17 = (char *)((uint)uVar2 << 8);
          bVar18 = (byte)puVar14;
          *(byte *)puVar14 = (byte)*puVar14 & bVar18;
          bVar19 = *pbVar26;
          bVar6 = (byte)uVar2;
          bVar4 = *pbVar26;
          *pbVar26 = *pbVar26 + bVar6;
          bVar5 = *pbVar26;
          if (!CARRY1(bVar19,bVar6)) break;
          *(byte *)puVar14 = (byte)*puVar14 + bVar18;
          pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar26 >> 8) | bRam026fffe2,
                                              (char)pbVar26));
          *(byte *)puVar14 = (byte)*puVar14 + bVar18;
          bVar18 = bVar18 | (byte)*puVar22;
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar18);
          bVar29 = (POPCOUNT(bVar18) & 1U) == 0;
          while( true ) {
            cVar25 = (char)((uint)pbVar26 >> 8);
            uVar20 = (undefined2)((uint)pbVar26 >> 0x10);
            if (!bVar29) {
              *(byte *)puVar22 = (byte)*puVar22;
              pbVar26 = (byte *)CONCAT22(uVar20,CONCAT11(cVar25 + pbVar26[-0x1f],(char)pbVar26));
              goto code_r0x00403d52;
            }
            *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
            uVar21 = (undefined2)((uint)pcVar17 >> 0x10);
            bVar4 = (byte)((uint)pcVar17 >> 8) | (byte)*puVar14;
            uVar2 = CONCAT21(uVar21,bVar4);
            *puVar14 = *puVar14 & (uint)puVar14;
            *pbVar26 = *pbVar26 + bVar4;
            uVar15 = (undefined3)((uint)puVar14 >> 8);
            bVar5 = (char)puVar14 - bVar4;
            pcVar17 = (char *)CONCAT31(uVar15,bVar5);
            *pcVar17 = *pcVar17 + bVar5;
            bVar5 = bVar5 | (byte)*puVar22;
            puVar14 = (uint *)CONCAT31(uVar15,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *(byte *)puVar14 = (byte)*puVar14 + bVar5;
            pcVar17 = (char *)((uint)CONCAT21(uVar21,bVar4 | (byte)*puVar14) << 8);
            *puVar14 = *puVar14 - (int)puVar14;
            *(byte *)puVar22 = (byte)*puVar22;
            pbVar26 = (byte *)CONCAT22(uVar20,CONCAT11(cVar25 + pbVar26[-0x1d],(char)pbVar26));
            do {
              *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
              uVar20 = (undefined2)((uint)puVar22 >> 0x10);
              cVar25 = (char)puVar22;
              bVar5 = (byte)((uint)puVar22 >> 8) | pbVar26[-0x17];
              puVar22 = (uint *)CONCAT22(uVar20,CONCAT11(bVar5,cVar25));
              *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
              pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar26 >> 8) | bRam026fffeb,
                                                  (char)pbVar26));
              do {
                *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
                uVar15 = (undefined3)((uint)puVar14 >> 8);
                bVar19 = (byte)puVar14 | (byte)*puVar22;
                pcVar8 = (char *)CONCAT31(uVar15,bVar19);
                bVar4 = pbVar26[-0x16];
                *pcVar8 = *pcVar8 + bVar19;
                pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                           CONCAT11((char)((uint)pbVar26 >> 8) + bVar4 |
                                                    bRam026fffec,(char)pbVar26));
                *pcVar8 = *pcVar8 + bVar19;
                pbVar16 = (byte *)CONCAT31(uVar15,bVar19 | (byte)*puVar22);
                while( true ) {
                  *pbVar16 = *pbVar16 + (byte)pbVar16;
                  uVar15 = (undefined3)((uint)pbVar16 >> 8);
                  bVar4 = (byte)pbVar16 | (byte)*puVar22;
                  puVar14 = (uint *)CONCAT31(uVar15,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) != 0) break;
                  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                  bVar19 = pbVar28[-0x14];
                  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                  bVar4 = bVar4 | (byte)*puVar22;
                  pcVar8 = (char *)CONCAT31(uVar15,bVar4);
                  bVar18 = pbVar26[-0x15];
                  *pcVar8 = *pcVar8 + bVar4;
                  pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),
                                                    (byte)((uint)pcVar17 >> 8) | bVar19 |
                                                    pbVar28[-0x13]) << 8);
                  *pcVar8 = *pcVar8 + bVar4;
                  pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                             CONCAT11((char)((uint)pbVar26 >> 8) + bVar18 |
                                                      bRam026fffef,(char)pbVar26));
                  *pcVar8 = *pcVar8 + bVar4;
                  pbVar16 = (byte *)CONCAT31(uVar15,bVar4 | (byte)*puVar22);
                  do {
                    do {
                      bVar19 = (byte)pbVar16;
                      *pbVar16 = *pbVar16 + bVar19;
                      cVar7 = (char)pbVar26;
                      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar26 >> 8) | *pbVar16,
                                                          cVar7));
                      *pbVar16 = bVar19;
                      *pbVar16 = *pbVar16 + bVar19;
                      cVar27 = (char)((uint)pcVar17 >> 8) + *pbVar16;
                      pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),cVar27) << 8)
                      ;
                      uVar15 = (undefined3)((uint)pbVar16 >> 8);
                      bVar19 = bVar19 & *pbVar16;
                      pbVar16 = (byte *)CONCAT31(uVar15,bVar19);
                      bVar4 = *pbVar26;
                      *pbVar26 = *pbVar26 + cVar27;
                    } while (SCARRY1(bVar4,cVar27) == (char)*pbVar26 < '\0');
                    *pbVar16 = *pbVar16 + bVar19;
                    bVar19 = bVar19 | (byte)*puVar22;
                    pbVar16 = (byte *)CONCAT31(uVar15,bVar19);
                    if ((POPCOUNT(bVar19) & 1U) == 0) {
                      *pbVar16 = *pbVar16 + bVar19;
                      *pbVar16 = *pbVar16 + bVar19;
                      cVar25 = cVar25 - bVar5;
                      pbVar26 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),cVar25);
                      *pbVar16 = *pbVar16 + bVar19;
                      bRam0312382b = bRam0312382b | *pbVar26;
                      while( true ) {
                        bVar4 = (byte)pbVar16;
                        *pbVar16 = *pbVar16 + bVar4;
                        bRam0312382b = bRam0312382b | (pbVar28 + 0x21b0000)[(int)pbVar16];
                        uVar15 = (undefined3)((uint)pbVar16 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar26 = *pbVar26 + bRam0312382b;
                        pbVar16 = (byte *)CONCAT31(uVar15,bVar4 | *unaff_ESI);
                      }
                      *pbVar16 = *pbVar16 + bVar4;
                      bVar4 = bVar4 | *unaff_ESI;
                      pcVar17 = (char *)CONCAT31(uVar15,bVar4);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar26);
                      *pcVar17 = *pcVar17 + bVar4;
                      uVar21 = CONCAT11(bVar5 | bRam6f0a002b,cVar25);
                      pcVar8 = (char *)CONCAT22(uVar20,uVar21);
                      *pcVar17 = *pcVar17 + bVar4;
                      *pcVar8 = *pcVar8 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar21);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar7 + *pcVar17);
                  } while (SCARRY1(cVar7,*pcVar17) != (char)(cVar7 + *pcVar17) < '\0');
                }
                uVar3 = *puVar22;
                *(byte *)puVar22 = (byte)*puVar22;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar22 < '\0');
              *(byte *)puVar22 = (byte)*puVar22;
              *pcVar17 = *pcVar17 - (char)pbVar26;
              *(byte *)puVar14 = (byte)*puVar14 + bVar4;
              bVar4 = bVar4 | (byte)*puVar22;
              puVar14 = (uint *)CONCAT31(uVar15,bVar4);
              bVar29 = (POPCOUNT(bVar4) & 1U) == 0;
            } while (bVar29);
          }
        }
      } while (SCARRY1(bVar4,bVar6));
    }
    *pbVar26 = *pbVar26 + (char)((uint)pcVar17 >> 8);
    *pbVar28 = *pbVar28 - (char)pbVar26;
  } while( true );
}


