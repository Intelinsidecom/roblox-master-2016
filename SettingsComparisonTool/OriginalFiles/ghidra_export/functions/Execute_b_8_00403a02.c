/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403a02
 * Raw Name    : <Execute>b__8
 * Demangled   : <Execute>b__8
 * Prototype   : byte * <Execute>b__8(byte * s, byte * param_2)
 * Local Vars  : pcVar1, uVar2, uVar3, bVar4, bVar5, bVar6, cVar7, in_EAX, pcVar8, pcVar9, piVar10, pbVar11, param_2, pbVar12, pbVar13, puVar14, uVar15, extraout_ECX, pcVar16, bVar17, bVar18, uVar19, puVar20, uVar21, uVar22, uVar23, cVar24, unaff_EBX, pbVar25, cVar26, unaff_EBP, unaff_ESI, unaff_EDI, pbVar27, in_ES, bVar28, uVar29, unaff_retaddr, s
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall <Execute>b__8(byte *s,byte *param_2)

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
  byte bVar17;
  byte bVar18;
  byte *extraout_ECX;
  char *pcVar16;
  undefined2 uVar19;
  uint *puVar20;
  undefined3 uVar21;
  undefined2 uVar22;
  undefined1 uVar23;
  char cVar24;
  char cVar26;
  int unaff_EBX;
  byte *pbVar25;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte *pbVar27;
  undefined2 in_ES;
  bool bVar28;
  undefined8 uVar29;
  byte *unaff_retaddr;
  
                    /* .NET CLR Managed Code */
  uVar22 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar23 = (undefined1)unaff_EBX;
  cVar26 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x4e);
  bVar5 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar5;
  uVar15 = (undefined3)((uint)in_EAX >> 8);
  pcVar16 = (char *)CONCAT31(uVar15,bVar5 + 0x28);
  *pcVar16 = (*pcVar16 - (bVar5 + 0x28)) - (0xd7 < bVar5);
  bVar17 = (byte)s;
  *param_2 = *param_2 + bVar17;
  bVar4 = bVar5 + 0x1b;
  cVar26 = cVar26 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar26,uVar23)) + 0x4f);
  pbVar25 = (byte *)CONCAT22(uVar22,CONCAT11(cVar26,uVar23));
  *(char *)CONCAT31(uVar15,bVar4) = *(char *)CONCAT31(uVar15,bVar4) + bVar4;
  pcVar8 = (char *)CONCAT31(uVar15,bVar5 + 0x43);
  *pcVar8 = (*pcVar8 - (bVar5 + 0x43)) - (0xd7 < bVar4);
  *param_2 = *param_2 + bVar17;
  pcVar9 = pcVar8 + -0x6b721c;
  pcVar16 = pcVar8 + -0x6b721a;
  cVar24 = (char)((uint)param_2 >> 8);
  *pcVar16 = *pcVar16 + cVar24;
  pbVar27 = unaff_retaddr;
  if ((POPCOUNT(*pcVar16) & 1U) == 0) {
    cVar7 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar7;
    uVar15 = (undefined3)((uint)pcVar9 >> 8);
    bVar5 = cVar7 + 2;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
      piVar10 = (int *)CONCAT31(uVar15,cVar7 + '*');
      *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0xd7 < bVar5);
      bVar5 = *param_2;
      *param_2 = *param_2 + bVar17;
      out(*(undefined4 *)unaff_ESI,(short)param_2);
      bVar6 = ((cVar7 + '*') - (char)*piVar10) - CARRY1(bVar5,bVar17);
      pbVar13 = (byte *)CONCAT31(uVar15,bVar6);
      *param_2 = *param_2 + bVar17;
      cVar26 = cVar26 - unaff_ESI[0x1f];
      pbVar25 = (byte *)CONCAT22(uVar22,CONCAT11(cVar26,uVar23));
      *pbVar13 = *pbVar13 + bVar6;
      bVar4 = *param_2;
      bVar5 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      unaff_ESI = unaff_ESI + ((4 - *(int *)pbVar13) - (uint)CARRY1(bVar5,bVar6));
      pbVar13 = (byte *)CONCAT31(uVar15,bVar6);
      s = (byte *)(CONCAT22((short)((uint)s >> 0x10),CONCAT11((byte)((uint)s >> 8) | bVar4,bVar17))
                  + -1);
      bVar5 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      bVar5 = (bVar6 - *pbVar13) - CARRY1(bVar5,bVar6);
      *s = *s + (char)param_2;
      bVar28 = CARRY1(bVar5,*param_2);
      bVar5 = bVar5 + *param_2;
      pbVar11 = (byte *)CONCAT31(uVar15,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar5;
        cVar7 = (bVar5 + 0x6f) - (0x90 < bVar5);
        pbVar13 = (byte *)CONCAT31(uVar15,cVar7);
        bVar5 = *param_2;
        *param_2 = *param_2 + (char)s;
        if (SCARRY1(bVar5,(char)s) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar13 = *pbVar13 + cVar7;
        pcVar16 = (char *)CONCAT31(uVar15,cVar7 + '\x02');
        bVar4 = cVar26 + pbVar25[0x52];
        pbVar25 = (byte *)CONCAT22(uVar22,CONCAT11(bVar4,uVar23));
        *pcVar16 = *pcVar16 + cVar7 + '\x02';
        bVar5 = cVar7 + 4;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar5);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pbVar13 = *pbVar13 + bVar5;
          cVar26 = (cVar7 + 's') - (0x90 < bVar5);
          pcVar9 = (char *)CONCAT31(uVar15,cVar26);
          bVar5 = (byte)((uint)s >> 8);
          bVar28 = CARRY1(*pbVar25,bVar5);
          *pbVar25 = *pbVar25 + bVar5;
          pbVar11 = unaff_ESI;
          if (bVar28) {
            *pcVar9 = *pcVar9 + cVar26;
            pbVar25 = (byte *)CONCAT22(uVar22,CONCAT11(bVar4 | unaff_EBP[0x5c],uVar23));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar13;
        pbVar25 = (byte *)CONCAT22(uVar22,CONCAT11(bVar4 + pbVar25[0x52],uVar23));
code_r0x00403abf:
        *pbVar13 = *pbVar13 + (char)pbVar13;
        cVar26 = (char)pbVar13 + '\x02';
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar26);
        bVar28 = (POPCOUNT(cVar26) & 1U) == 0;
        if (!bVar28) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar28) {
          *pbVar11 = *pbVar11 + (byte)pbVar11;
          bVar5 = (byte)pbVar11 | pbVar11[0x400005e];
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
          if ((char)bVar5 < '\x01') goto code_r0x00403b0b;
          *pbVar13 = *pbVar13 + bVar5;
code_r0x00403aaf:
          cVar26 = (char)pbVar13 + '(';
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar26);
          *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
          bVar5 = *pbVar25;
          bVar4 = (byte)((uint)s >> 8);
          *pbVar25 = *pbVar25 + bVar4;
          pbVar12 = unaff_EBP;
          if (!CARRY1(bVar5,bVar4)) goto code_r0x00403ad8;
          *pbVar13 = *pbVar13 + cVar26;
          s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar4 | *pbVar25,(char)s));
          if ((POPCOUNT(*param_2 - cVar26) & 1U) != 0) {
            *unaff_ESI = *unaff_ESI + cVar26;
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
      cVar26 = (bVar5 + 0x6f) - (0x90 < bVar5);
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar26);
      bVar5 = *pbVar25;
      cVar7 = (char)((uint)s >> 8);
      *pbVar25 = *pbVar25 + cVar7;
      if (*pbVar25 == 0 || SCARRY1(bVar5,cVar7) != (char)*pbVar25 < '\0') goto code_r0x00403b2c;
      *pcVar16 = *pcVar16 + cVar26;
    }
    else {
      pcVar16 = (char *)CONCAT31(uVar15,bVar5 + *param_2);
      pbVar11 = unaff_ESI;
      if ((POPCOUNT(bVar5 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar16) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar13 = unaff_EBP;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)pcVar16 + 0x2d);
    pbVar27 = (byte *)((uint)unaff_retaddr & 0xffff0000);
code_r0x00403ad8:
    unaff_retaddr = pbVar12;
    bVar5 = *pbVar13;
    bVar4 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar4;
    pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),in_ES);
    unaff_EBP = unaff_retaddr;
    if (CARRY1(bVar5,bVar4)) {
      *pbVar13 = *pbVar13 + bVar4;
      bVar4 = bVar4 | pbVar13[0x400005d];
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar4);
      pbVar11 = unaff_ESI;
      if ((char)bVar4 < '\x01') {
        *pbVar13 = *pbVar13 + bVar4;
        s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                             CONCAT11((byte)((uint)s >> 8) | *param_2,(char)s));
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[-0x39],
                                            (char)pbVar25));
        goto code_r0x00403b4c;
      }
code_r0x00403ae7:
      *pbVar13 = *pbVar13 + (char)pbVar13;
      cVar26 = (char)pbVar13 + '(';
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar26);
      *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar5 = *pbVar25;
      bVar4 = (byte)((uint)s >> 8);
      *pbVar25 = *pbVar25 + bVar4;
      unaff_EBP = unaff_retaddr;
      unaff_ESI = pbVar11;
      if (!CARRY1(bVar5,bVar4)) goto code_r0x00403b0b;
      *pbVar13 = *pbVar13 + cVar26;
      goto code_r0x00403af3;
    }
  }
  else {
    bVar5 = *param_2;
    *param_2 = *param_2 + bVar17;
    if (SCARRY1(bVar5,bVar17) == (char)*param_2 < '\0') {
      pbVar13 = unaff_EBP;
      pbVar12 = (byte *)(pcVar8 + -0x769862d);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar9 = *pcVar9 + (char)pcVar9;
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + '\x02');
    pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                               CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[0x54],(char)pbVar25));
    pbVar11 = unaff_ESI;
code_r0x00403a7d:
    cVar26 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar26;
    uVar15 = (undefined3)((uint)pcVar16 >> 8);
    cVar7 = cVar26 + '-';
    pbVar12 = (byte *)CONCAT31(uVar15,cVar7);
    pbVar13 = unaff_EBP;
    unaff_ESI = pbVar11;
    if ((POPCOUNT(cVar7 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar12 = *pbVar12 + cVar7;
    bVar5 = cVar26 + 0x2f;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      bVar5 = *param_2;
      *param_2 = *param_2 + (byte)s;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar5,(byte)s);
      pbVar13 = (byte *)CONCAT31(uVar15,cVar26 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
    bVar28 = 0x90 < bVar5;
    pcVar9 = (char *)CONCAT31(uVar15,cVar26 + -0x62);
code_r0x00403a8f:
    uVar15 = (undefined3)((uint)pcVar9 >> 8);
    bVar4 = (char)pcVar9 - bVar28;
    pbVar13 = (byte *)CONCAT31(uVar15,bVar4);
    bVar5 = *pbVar25;
    cVar26 = (char)((uint)s >> 8);
    *pbVar25 = *pbVar25 + cVar26;
    unaff_ESI = pbVar11;
    if (*pbVar25 != 0 && SCARRY1(bVar5,cVar26) == (char)*pbVar25 < '\0') {
      *pbVar13 = *pbVar13 + bVar4;
      unaff_ESI = (byte *)CONCAT31(uVar15,bVar4 + 0x2d);
      *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar11 + (int)unaff_EDI * 8);
      bVar28 = CARRY1(*pbVar11,(byte)pbVar11);
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      goto code_r0x00403aa1;
    }
code_r0x00403af3:
    s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11((byte)((uint)s >> 8) | *pbVar13,(char)s))
    ;
    *unaff_ESI = *unaff_ESI + (char)pbVar13;
  }
  pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                             CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[0x55],(char)pbVar25));
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar15 = (undefined3)((uint)pbVar13 >> 8);
  bVar4 = (char)pbVar13 + 0x6f;
  bVar5 = *(byte *)CONCAT31(uVar15,bVar4);
  *param_2 = *param_2 + (char)s;
  pbVar13 = (byte *)CONCAT31(uVar15,(bVar4 & bVar5) + *unaff_ESI);
  *s = *s - cVar24;
code_r0x00403b0b:
  do {
    *pbVar13 = *pbVar13 + (char)pbVar13;
    param_2[0x16060000] = param_2[0x16060000] - (char)s;
    pbVar25 = (byte *)((uint)pbVar25 | (uint)unaff_ESI);
    cVar24 = (char)pbVar13 + '\x02';
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar24);
    bVar28 = (POPCOUNT(cVar24) & 1U) == 0;
code_r0x00403b18:
    unaff_retaddr = unaff_EBP;
    bVar5 = (byte)pbVar11;
    uVar15 = (undefined3)((uint)pbVar11 >> 8);
    if (!bVar28) {
      *param_2 = *param_2 + (char)s;
      pbVar13 = (byte *)CONCAT31(uVar15,bVar5 | *unaff_ESI);
code_r0x00403b73:
      pbVar27 = (byte *)(unaff_EDI + *(int *)(unaff_retaddr + -0x37));
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      uVar15 = (undefined3)((uint)pbVar13 >> 8);
      bVar5 = (byte)pbVar13 | *param_2;
      pcVar16 = (char *)CONCAT31(uVar15,bVar5);
      uVar29 = CONCAT44(param_2,pcVar16);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pcVar16 = *pcVar16 + bVar5;
        *unaff_ESI = *unaff_ESI + 1;
        return (byte *)CONCAT31(uVar15,bVar5 + 6);
      }
      bVar5 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar5,'\x01')) {
        uVar29 = (*pcVar1)();
        s = extraout_ECX;
      }
      pbVar13 = (byte *)uVar29;
      *pbVar13 = *pbVar13 + (char)uVar29;
      cVar26 = (char)((ulonglong)uVar29 >> 0x20);
      puVar20 = (uint *)CONCAT22((short)((ulonglong)uVar29 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar29 >> 0x28) | pbVar25[0x2f],cVar26))
      ;
      *pbVar13 = *pbVar13 + (char)uVar29;
      cVar24 = (char)s;
      bVar17 = (byte)((uint)s >> 8) | *pbVar13;
      pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar5 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar17;
      bVar4 = (byte)pbVar13;
      if (CARRY1(bVar5,bVar17)) {
        *pbVar13 = *pbVar13 + bVar4;
        bVar17 = bVar17 | (byte)*puVar20;
        *pbVar25 = *pbVar25 - cVar26;
        *pbVar13 = *pbVar13 + bVar4;
        uVar15 = (undefined3)((uint)pbVar13 >> 8);
        bVar4 = bVar4 | (byte)*puVar20;
        piVar10 = (int *)CONCAT31(uVar15,bVar4);
        unaff_retaddr = unaff_retaddr + *piVar10;
        *(byte *)piVar10 = (char)*piVar10 + bVar4;
        cVar26 = (char)pbVar25 - *unaff_ESI;
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((char)((uint)pbVar25 >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)pbVar25 >> 8),cVar26) +
                                                     0x5f),cVar26));
        *(byte *)piVar10 = (char)*piVar10 + bVar4;
        bVar5 = bVar4 + 0x2a & (byte)*puVar20;
        pbVar27 = pbVar27 + *(int *)(unaff_retaddr + 0x5f);
        *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar5 + 0x2a);
        *(byte *)puVar20 = (byte)*puVar20 + 0x28;
        *pbVar13 = *pbVar13 + bVar5 + 0x2a;
      }
      else {
        *unaff_ESI = *unaff_ESI + bVar4;
      }
      pcVar16 = (char *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar17,cVar24));
      *unaff_retaddr = *unaff_retaddr - bVar17;
      *(byte *)puVar20 = (byte)*puVar20 + cVar24;
      bVar5 = (byte)pbVar13 - 0xb;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar5);
      if (10 < (byte)pbVar13) {
        *pbVar12 = *pbVar12 | bVar5;
        return pbVar12;
      }
      *(byte *)puVar20 = (byte)*puVar20 + cVar24;
      do {
        bVar5 = pbVar25[-0x23];
        bVar17 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar17;
        bVar4 = unaff_retaddr[-0x22];
        *pbVar12 = *pbVar12 + bVar17;
        uVar15 = (undefined3)((uint)pbVar12 >> 8);
        bVar17 = bVar17 | *unaff_ESI;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar17);
        cVar26 = (char)pbVar25 - *unaff_ESI;
        pbVar25 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar25 >> 0x10),
                                                   CONCAT11((char)((uint)pbVar25 >> 8) + bVar5 |
                                                            bVar4,(char)pbVar25)) >> 8),cVar26);
        cVar24 = (char)pcVar16;
        pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                   CONCAT11((char)((uint)pcVar16 >> 8) + *pbVar13,cVar24));
        *(byte *)puVar20 = (byte)*puVar20 + cVar24;
        bVar4 = bVar17 - *pbVar13;
        pbVar12 = (byte *)CONCAT31(uVar15,bVar4);
        unaff_ESI = unaff_ESI + (-(uint)(bVar17 < *pbVar13) - *(int *)pbVar12);
        puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 * '\x02');
        *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
        *pbVar27 = *pbVar27 + cVar26;
        bVar5 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar4;
        *puVar20 = (uint)(pbVar12 + (uint)CARRY1(bVar5,bVar4) + *puVar20);
      } while ((POPCOUNT(*puVar20 & 0xff) & 1U) != 0);
code_r0x00403cb7:
      *pbVar12 = *pbVar12 + (char)pbVar12;
      pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)pcVar16 | pbVar12[(int)pcVar16]);
      bVar28 = false;
      pbVar12 = (byte *)((uint)pbVar12 & 0xffffff00);
      do {
        pbVar27 = pbVar27 + (-(uint)bVar28 - *(int *)pbVar25);
        pcVar8 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),*pcVar16);
        *pcVar8 = *pcVar8 + *pcVar16;
        pbVar12 = (byte *)CONCAT31((int3)((uint)(pcVar8 + (unaff_ESI[0x2000001] <
                                                          (byte)((uint)pcVar16 >> 8)) + 0xda7d) >> 8
                                         ),((byte)(pcVar8 + (unaff_ESI[0x2000001] <
                                                            (byte)((uint)pcVar16 >> 8)) + 0xda7d) |
                                           (byte)*puVar20) + 0x7d);
        pcVar16 = pcVar16 + -1;
        *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar16;
        while( true ) {
          uVar21 = (undefined3)((uint)puVar20 >> 8);
          cVar24 = (char)puVar20 + *(char *)((int)pbVar27 * 2 + 0xa0000e1);
          puVar20 = (uint *)CONCAT31(uVar21,cVar24);
          bVar28 = CARRY1((byte)pbVar12,(byte)*puVar20);
          uVar15 = (undefined3)((uint)pbVar12 >> 8);
          bVar5 = (byte)pbVar12 + (byte)*puVar20;
          pbVar12 = (byte *)CONCAT31(uVar15,bVar5);
          if ((POPCOUNT(bVar5) & 1U) != 0) break;
          *pbVar12 = *pbVar12 + bVar5;
          cVar26 = (char)pcVar16;
          pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar16 >> 8) | pbVar27[-0x65],cVar26));
          bVar4 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar5;
          if (CARRY1(bVar4,bVar5)) {
            *pbVar12 = *pbVar12 + bVar5;
            pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar25 >> 8) | unaff_retaddr[-0x1d],
                                                (char)pbVar25));
            *pbVar12 = *pbVar12 + bVar5;
            bVar28 = false;
            bVar5 = bVar5 | (byte)*puVar20;
            pcVar8 = (char *)CONCAT31(uVar15,bVar5);
            while( true ) {
              bVar4 = (byte)pcVar8;
              uVar15 = (undefined3)((uint)pcVar8 >> 8);
              if (bVar28 == (char)bVar5 < '\0') break;
              *pcVar8 = *pcVar8 + bVar4;
              bVar4 = bVar4 | (byte)*puVar20;
              puVar14 = (uint *)CONCAT31(uVar15,bVar4);
              *pbVar27 = *pbVar27 << 1 | (char)*pbVar27 < '\0';
              uVar3 = *puVar14;
              *(byte *)puVar14 = (byte)*puVar14 + bVar4;
              unaff_retaddr = unaff_retaddr + (-(uint)CARRY1((byte)uVar3,bVar4) - *puVar14);
              *puVar14 = *puVar14 << 1 | (uint)((int)*puVar14 < 0);
              while( true ) {
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20 + (byte)pcVar16;
                cVar24 = (char)puVar14 + 'o' + CARRY1((byte)uVar3,(byte)pcVar16);
                pcVar8 = (char *)CONCAT31((int3)((uint)puVar14 >> 8),cVar24);
                pcVar16 = (char *)0x20a0000;
                if ((POPCOUNT(cVar24) & 1U) != 0) break;
                *pcVar8 = *pcVar8 + cVar24;
                bVar5 = bRamfe140212;
                pcVar16 = (char *)0x0;
                uVar15 = (undefined3)((uint)(pcVar8 + -0x732b0000) >> 8);
                bVar4 = in(0);
                puVar14 = (uint *)CONCAT31(uVar15,bVar4);
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar20 < '\0') {
                  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                  bVar4 = bVar4 | (byte)*puVar20;
                  puVar14 = (uint *)CONCAT31(uVar15,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) == 0) {
                    *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                    pcVar16 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar5 | (byte)*puVar14) << 8);
                    *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                  puVar14 = (uint *)CONCAT31(uVar15,bVar4 | (byte)*puVar20);
                }
              }
              *(byte *)puVar20 = (byte)*puVar20;
              bVar28 = SCARRY1((char)puVar20,*pbVar27);
              bVar5 = (char)puVar20 + *pbVar27;
              puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar5);
            }
            if (bVar28 == (char)bVar5 < '\0') {
              *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar16;
              pbVar12 = (byte *)((uint)pcVar8 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar8 = *pcVar8 + bVar4;
            pbVar12 = (byte *)CONCAT31(uVar15,(bVar4 | (byte)*puVar20) + 0x7d);
            pcVar16 = pcVar16 + -1;
            *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar16;
          }
          else {
            *(byte *)puVar20 = (byte)*puVar20 + cVar26;
            puVar20 = (uint *)CONCAT31(uVar21,cVar24 + *(char *)((int)pbVar27 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    *pbVar11 = *pbVar11 + bVar5;
    bVar5 = bVar5 + 0x6f & *(byte *)CONCAT31(uVar15,bVar5 + 0x6f);
    *param_2 = *param_2 + (char)s;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar5;
    pcVar16 = (char *)CONCAT31(uVar15,bVar5 - *unaff_EDI);
    unaff_EBP = unaff_retaddr;
code_r0x00403b2c:
    unaff_retaddr = unaff_EBP;
    bVar5 = (char)pcVar16 - *pcVar16;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar5);
    *pbVar13 = *pbVar13 + bVar5;
    *(byte **)pbVar13 = param_2 + *(int *)pbVar13;
    *pbVar13 = *pbVar13 + bVar5;
    bVar28 = CARRY1(*pbVar13,bVar5);
    *pbVar13 = *pbVar13 + bVar5;
    pbVar27 = unaff_ESI;
    while( true ) {
      *(byte **)pbVar13 = pbVar13 + (uint)bVar28 + *(int *)pbVar13;
      unaff_EDI = unaff_EDI + 4;
      pbVar13[(int)param_2] = pbVar13[(int)param_2] + (char)pbVar25;
      *pbVar13 = *pbVar13 + (char)pbVar13;
      *(byte **)pbVar27 = pbVar25 + *(int *)pbVar27;
      bVar5 = (byte)((uint)s >> 8);
      cVar24 = (char)s;
      s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar5 + *pbVar13,cVar24));
      pbVar13 = pbVar13 + (uint)CARRY1(bVar5,*pbVar13) + *(int *)pbVar13;
      *param_2 = *param_2 + cVar24;
      cVar24 = (char)pbVar25 - pbVar27[2];
      pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar24);
      unaff_EBP = unaff_retaddr;
      unaff_ESI = pbVar27;
      if ((POPCOUNT(cVar24) & 1U) != 0) break;
code_r0x00403b4c:
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      bVar5 = (byte)pbVar13 | *pbVar25;
      piVar10 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar5);
      if (bVar5 != 0) {
        unaff_retaddr = unaff_retaddr + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar10 = (char)*piVar10 + bVar5;
        s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                             CONCAT11((byte)((uint)s >> 8) | *param_2,(char)s));
        pbVar27 = pbVar27 + *piVar10;
        pcVar16 = (char *)((int)piVar10 + *piVar10);
        uVar15 = (undefined3)((uint)pcVar16 >> 8);
        bVar4 = (char)pcVar16 - *pcVar16;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar4);
        bVar5 = *pbVar13;
        *pbVar13 = *pbVar13 + bVar4;
        piVar10 = (int *)CONCAT31(uVar15,bVar4 - CARRY1(bVar5,bVar4));
      }
      *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
      unaff_ESI = pbVar27 + 4;
      out(*(undefined4 *)pbVar27,(short)param_2);
      pbVar13 = (byte *)(((uint)piVar10 >> 8) * 0x100);
      *param_2 = *param_2 + (byte)s;
      bVar5 = (char)param_2 - *pbVar25;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar5);
      *pbVar25 = *pbVar25;
      *param_2 = *param_2 + (char)((uint)s >> 8);
      *pbVar13 = *pbVar13;
      pcVar16 = (char *)(((uint)piVar10 >> 8) * 0x200);
      *pcVar16 = *pcVar16 + (char)pbVar25;
      bVar28 = CARRY1(*s,bVar5);
      *s = *s + bVar5;
      pbVar27 = unaff_ESI;
      if (bVar28) {
        *pbVar13 = *pbVar13;
        s = (byte *)CONCAT31((int3)((uint)s >> 8),(byte)s | *param_2);
        goto code_r0x00403b73;
      }
    }
  } while( true );
code_r0x00403d33:
  unaff_retaddr = unaff_retaddr + -*puVar14;
  do {
    bVar5 = (byte)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar5;
    pbVar27 = pbVar27 + -*(int *)(unaff_retaddr + -0x1a);
    *(byte *)puVar14 = (byte)*puVar14 + bVar5;
    bVar5 = bVar5 | (byte)*puVar20;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar5);
    *(byte *)puVar14 = (byte)*puVar14 | bVar5;
    bVar5 = (byte)*puVar14;
    unaff_retaddr = (byte *)0x2700001;
    while ((POPCOUNT(bVar5) & 1U) == 0) {
      do {
        *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
        bVar5 = (byte)puVar14 | (byte)*puVar20;
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        uVar2 = CONCAT21((short)((uint)pcVar16 >> 0x10),(byte)((uint)pcVar16 >> 8) | bRamfe140212);
        while( true ) {
          pcVar16 = (char *)((uint)uVar2 << 8);
          bVar6 = (byte)puVar14;
          *(byte *)puVar14 = (byte)*puVar14 & bVar6;
          bVar17 = *pbVar25;
          bVar18 = (byte)uVar2;
          bVar4 = *pbVar25;
          *pbVar25 = *pbVar25 + bVar18;
          bVar5 = *pbVar25;
          if (!CARRY1(bVar17,bVar18)) break;
          *(byte *)puVar14 = (byte)*puVar14 + bVar6;
          pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar25 >> 8) | bRam026fffe2,
                                              (char)pbVar25));
          *(byte *)puVar14 = (byte)*puVar14 + bVar6;
          bVar6 = bVar6 | (byte)*puVar20;
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar6);
          bVar28 = (POPCOUNT(bVar6) & 1U) == 0;
          while( true ) {
            cVar24 = (char)((uint)pbVar25 >> 8);
            uVar22 = (undefined2)((uint)pbVar25 >> 0x10);
            if (!bVar28) {
              *(byte *)puVar20 = (byte)*puVar20;
              pbVar25 = (byte *)CONCAT22(uVar22,CONCAT11(cVar24 + pbVar25[-0x1f],(char)pbVar25));
              goto code_r0x00403d52;
            }
            *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
            uVar19 = (undefined2)((uint)pcVar16 >> 0x10);
            bVar4 = (byte)((uint)pcVar16 >> 8) | (byte)*puVar14;
            uVar2 = CONCAT21(uVar19,bVar4);
            *puVar14 = *puVar14 & (uint)puVar14;
            *pbVar25 = *pbVar25 + bVar4;
            uVar15 = (undefined3)((uint)puVar14 >> 8);
            bVar5 = (char)puVar14 - bVar4;
            pcVar16 = (char *)CONCAT31(uVar15,bVar5);
            *pcVar16 = *pcVar16 + bVar5;
            bVar5 = bVar5 | (byte)*puVar20;
            puVar14 = (uint *)CONCAT31(uVar15,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *(byte *)puVar14 = (byte)*puVar14 + bVar5;
            pcVar16 = (char *)((uint)CONCAT21(uVar19,bVar4 | (byte)*puVar14) << 8);
            *puVar14 = *puVar14 - (int)puVar14;
            *(byte *)puVar20 = (byte)*puVar20;
            pbVar25 = (byte *)CONCAT22(uVar22,CONCAT11(cVar24 + pbVar25[-0x1d],(char)pbVar25));
            do {
              *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
              uVar22 = (undefined2)((uint)puVar20 >> 0x10);
              cVar24 = (char)puVar20;
              bVar5 = (byte)((uint)puVar20 >> 8) | pbVar25[-0x17];
              puVar20 = (uint *)CONCAT22(uVar22,CONCAT11(bVar5,cVar24));
              *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
              pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar25 >> 8) | bRam026fffeb,
                                                  (char)pbVar25));
              do {
                *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
                uVar15 = (undefined3)((uint)puVar14 >> 8);
                bVar17 = (byte)puVar14 | (byte)*puVar20;
                pcVar8 = (char *)CONCAT31(uVar15,bVar17);
                bVar4 = pbVar25[-0x16];
                *pcVar8 = *pcVar8 + bVar17;
                pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                           CONCAT11((char)((uint)pbVar25 >> 8) + bVar4 |
                                                    bRam026fffec,(char)pbVar25));
                *pcVar8 = *pcVar8 + bVar17;
                pbVar13 = (byte *)CONCAT31(uVar15,bVar17 | (byte)*puVar20);
                while( true ) {
                  *pbVar13 = *pbVar13 + (byte)pbVar13;
                  uVar15 = (undefined3)((uint)pbVar13 >> 8);
                  bVar4 = (byte)pbVar13 | (byte)*puVar20;
                  puVar14 = (uint *)CONCAT31(uVar15,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) != 0) break;
                  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                  bVar17 = pbVar27[-0x14];
                  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
                  bVar4 = bVar4 | (byte)*puVar20;
                  pcVar8 = (char *)CONCAT31(uVar15,bVar4);
                  bVar6 = pbVar25[-0x15];
                  *pcVar8 = *pcVar8 + bVar4;
                  pcVar16 = (char *)((uint)CONCAT21((short)((uint)pcVar16 >> 0x10),
                                                    (byte)((uint)pcVar16 >> 8) | bVar17 |
                                                    pbVar27[-0x13]) << 8);
                  *pcVar8 = *pcVar8 + bVar4;
                  pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                             CONCAT11((char)((uint)pbVar25 >> 8) + bVar6 |
                                                      bRam026fffef,(char)pbVar25));
                  *pcVar8 = *pcVar8 + bVar4;
                  pbVar13 = (byte *)CONCAT31(uVar15,bVar4 | (byte)*puVar20);
                  do {
                    do {
                      bVar17 = (byte)pbVar13;
                      *pbVar13 = *pbVar13 + bVar17;
                      cVar7 = (char)pbVar25;
                      pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar25 >> 8) | *pbVar13,
                                                          cVar7));
                      *pbVar13 = bVar17;
                      *pbVar13 = *pbVar13 + bVar17;
                      cVar26 = (char)((uint)pcVar16 >> 8) + *pbVar13;
                      pcVar16 = (char *)((uint)CONCAT21((short)((uint)pcVar16 >> 0x10),cVar26) << 8)
                      ;
                      uVar15 = (undefined3)((uint)pbVar13 >> 8);
                      bVar17 = bVar17 & *pbVar13;
                      pbVar13 = (byte *)CONCAT31(uVar15,bVar17);
                      bVar4 = *pbVar25;
                      *pbVar25 = *pbVar25 + cVar26;
                    } while (SCARRY1(bVar4,cVar26) == (char)*pbVar25 < '\0');
                    *pbVar13 = *pbVar13 + bVar17;
                    bVar17 = bVar17 | (byte)*puVar20;
                    pbVar13 = (byte *)CONCAT31(uVar15,bVar17);
                    if ((POPCOUNT(bVar17) & 1U) == 0) {
                      *pbVar13 = *pbVar13 + bVar17;
                      *pbVar13 = *pbVar13 + bVar17;
                      cVar24 = cVar24 - bVar5;
                      pbVar25 = (byte *)CONCAT31((int3)((uint)puVar20 >> 8),cVar24);
                      *pbVar13 = *pbVar13 + bVar17;
                      bRam0312382b = bRam0312382b | *pbVar25;
                      while( true ) {
                        bVar4 = (byte)pbVar13;
                        *pbVar13 = *pbVar13 + bVar4;
                        bRam0312382b = bRam0312382b | (pbVar27 + 0x21b0000)[(int)pbVar13];
                        uVar15 = (undefined3)((uint)pbVar13 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar25 = *pbVar25 + bRam0312382b;
                        pbVar13 = (byte *)CONCAT31(uVar15,bVar4 | *unaff_ESI);
                      }
                      *pbVar13 = *pbVar13 + bVar4;
                      bVar4 = bVar4 | *unaff_ESI;
                      pcVar16 = (char *)CONCAT31(uVar15,bVar4);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar25);
                      *pcVar16 = *pcVar16 + bVar4;
                      uVar19 = CONCAT11(bVar5 | bRam6f0a002b,cVar24);
                      pcVar8 = (char *)CONCAT22(uVar22,uVar19);
                      *pcVar16 = *pcVar16 + bVar4;
                      *pcVar8 = *pcVar8 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar19);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar7 + *pcVar16);
                  } while (SCARRY1(cVar7,*pcVar16) != (char)(cVar7 + *pcVar16) < '\0');
                }
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar20 < '\0');
              *(byte *)puVar20 = (byte)*puVar20;
              *pcVar16 = *pcVar16 - (char)pbVar25;
              *(byte *)puVar14 = (byte)*puVar14 + bVar4;
              bVar4 = bVar4 | (byte)*puVar20;
              puVar14 = (uint *)CONCAT31(uVar15,bVar4);
              bVar28 = (POPCOUNT(bVar4) & 1U) == 0;
            } while (bVar28);
          }
        }
      } while (SCARRY1(bVar4,bVar18));
    }
    *pbVar25 = *pbVar25 + (char)((uint)pcVar16 >> 8);
    *pbVar27 = *pbVar27 - (char)pbVar25;
  } while( true );
}


