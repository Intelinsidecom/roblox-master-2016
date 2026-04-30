/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403995
 * Raw Name    : <GetUnifiedSettingInfos>b__4
 * Demangled   : <GetUnifiedSettingInfos>b__4
 * Prototype   : byte * <GetUnifiedSettingInfos>b__4(byte * s, byte * param_2)
 * Local Vars  : s, pbStack_8, pbStack_c, uVar2, pcVar1, bVar4, uVar3, bVar6, cVar5, in_EAX, bVar7, pbVar9, piVar8, pcVar11, pcVar10, pbVar13, pbVar12, uVar15, puVar14, uVar17, uVar16, bVar18, extraout_ECX, puVar20, uVar19, cVar22, uVar21, param_2, unaff_EBX, uVar23, bVar25, pbVar24, unaff_EBP, cVar26, pbVar27, unaff_ESI, in_ES, unaff_EDI, bVar28, in_CS, uVar29
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall <GetUnifiedSettingInfos>b__4(byte *s,byte *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined3 uVar15;
  byte *in_EAX;
  uint3 uVar16;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  undefined2 uVar17;
  byte *extraout_ECX;
  undefined2 uVar19;
  uint *puVar20;
  undefined3 uVar21;
  char cVar22;
  undefined1 uVar23;
  byte bVar25;
  int unaff_EBX;
  char cVar26;
  byte *pbVar24;
  byte *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar27;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  bool bVar28;
  undefined8 uVar29;
  byte *pbStack_c;
  byte *pbStack_8;
  int *piVar8;
  byte bVar18;
  
                    /* .NET CLR Managed Code */
  pbVar24 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x3e),
                                      (char)unaff_EBX));
code_r0x00403998:
  *in_EAX = *in_EAX + (byte)in_EAX;
  uVar16 = (uint3)((uint)in_EAX >> 8);
  bVar4 = (byte)in_EAX | *pbVar24;
  piVar8 = (int *)CONCAT31(uVar16,bVar4);
  bVar6 = (byte)((uint)s >> 8);
  bVar18 = (byte)param_2;
  if (bVar4 == 0) {
    *(char *)piVar8 = (char)*piVar8;
    pbVar27 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    pbVar9 = (byte *)((uint)uVar16 << 8);
    *param_2 = *param_2 + (char)s;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar18 - *pbVar24);
    *pbVar24 = *pbVar24;
    *param_2 = *param_2 + bVar6;
    *pbVar9 = *pbVar9;
    *pbVar24 = *pbVar24 + (char)pbVar24;
    *pbVar9 = *pbVar9;
    *(byte **)(pbVar24 + -0x3d) = pbVar27 + *(int *)(pbVar24 + -0x3d);
  }
  else {
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar8 = (char)*piVar8 + bVar4;
    s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar6 | *param_2,(char)s));
    pbVar27 = unaff_ESI + *piVar8;
    pcVar11 = (char *)((int)piVar8 + *piVar8);
    bVar6 = (char)pcVar11 - *pcVar11;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar6);
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar6;
    pbVar9 = pbVar9 + (-(uint)CARRY1(bVar4,bVar6) - *(int *)pbVar9);
    bVar28 = CARRY1(*s,bVar18);
    *s = *s + bVar18;
    if (!bVar28) goto code_r0x0040397d;
  }
  *pbVar9 = *pbVar9 + (char)pbVar9;
  s = (byte *)CONCAT31((int3)((uint)s >> 8),(byte)s | *param_2);
  while( true ) {
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
    *pbVar9 = *pbVar9 + (byte)pbVar9;
    uVar15 = (undefined3)((uint)pbVar9 >> 8);
    bVar4 = (byte)pbVar9 | *param_2;
    pcVar11 = (char *)CONCAT31(uVar15,bVar4);
    if ((POPCOUNT(bVar4) & 1U) != 0) break;
    *pcVar11 = *pcVar11 + bVar4;
    *pbVar27 = *pbVar27 + 1;
    uVar2 = *(undefined6 *)CONCAT31(uVar15,bVar4 + 6);
    pbVar9 = (byte *)uVar2;
    bVar4 = *param_2;
    bVar6 = (byte)s;
    *param_2 = *param_2 + bVar6;
    if (CARRY1(bVar4,bVar6)) {
      *pbVar9 = *pbVar9 + (char)uVar2;
      bVar18 = (byte)((uint)s >> 8) | *pbVar9;
      uVar17 = CONCAT11(bVar18,bVar6);
      pbVar9 = pbVar9 + -*(int *)pbVar9;
      bVar4 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar18;
      if (CARRY1(bVar4,bVar18)) {
        cVar26 = (char)pbVar9;
        *pbVar9 = *pbVar9 + cVar26;
        bVar4 = *param_2;
        param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11((char)((uint)param_2 >> 8) - pbVar24[-0x3a],
                                            (char)param_2));
        *pbVar9 = *pbVar9 + cVar26;
        uVar19 = (undefined2)((uint)pbVar24 >> 0x10);
        bVar25 = (byte)((uint)pbVar24 >> 8) | param_2[0x32];
        pcVar11 = (char *)CONCAT22(uVar19,CONCAT11(bVar25,(char)pbVar24));
        pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_CS);
        cVar5 = cVar26 + *pcVar11 + '-';
        pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
        *pbVar9 = *pbVar9;
        bVar7 = *param_2;
        cVar22 = (char)pbVar24 - *pbVar27;
        cVar26 = unaff_EDI[0x17];
        *pbVar9 = *pbVar9 + cVar5;
        uVar17 = CONCAT11((bVar18 | bVar4) + cVar26 | *param_2,bVar6 - bVar7);
        pbVar24 = (byte *)CONCAT22(uVar19,CONCAT11(bVar25 + *(char *)(CONCAT31((int3)((uint)pcVar11
                                                                                     >> 8),cVar22) +
                                                                     0x4e),cVar22));
        *pbVar9 = *pbVar9 + cVar5;
      }
      s = (byte *)CONCAT22((short)((uint)s >> 0x10),uVar17);
      bVar4 = (byte)pbVar9;
      uVar15 = (undefined3)((uint)pbVar9 >> 8);
      pcVar11 = (char *)CONCAT31(uVar15,bVar4 + 0x28);
      *pcVar11 = (*pcVar11 - (bVar4 + 0x28)) - (0xd7 < bVar4);
      *param_2 = *param_2 + (char)uVar17;
      bVar6 = bVar4 + 0x1b;
      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                 CONCAT11((char)((uint)pbVar24 >> 8) + pbVar24[0x4f],(char)pbVar24))
      ;
      *(char *)CONCAT31(uVar15,bVar6) = *(char *)CONCAT31(uVar15,bVar6) + bVar6;
      pcVar10 = (char *)CONCAT31(uVar15,bVar4 + 0x43);
      *pcVar10 = (*pcVar10 - (bVar4 + 0x43)) - (0xd7 < bVar6);
      *param_2 = *param_2 + (char)uVar17;
      pcVar11 = pcVar10 + -0x6b721c;
      pcVar10 = pcVar10 + -0x6b721a;
      *pcVar10 = *pcVar10 + (char)((uint)param_2 >> 8);
      cVar5 = *pcVar10;
code_r0x00403a22:
      if ((POPCOUNT(cVar5) & 1U) == 0) goto code_r0x00403a24;
      bVar4 = *param_2;
      *param_2 = *param_2 + (char)s;
      if (SCARRY1(bVar4,(char)s) != (char)*param_2 < '\0') {
code_r0x00403a76:
        *pcVar11 = *pcVar11 + (char)pcVar11;
        pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + '\x02');
        pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                   CONCAT11((char)((uint)pbVar24 >> 8) + pbVar24[0x54],(char)pbVar24
                                           ));
        pbVar9 = pbVar27;
        goto code_r0x00403a7d;
      }
      pbVar13 = unaff_EBP;
      pbVar12 = (byte *)(pcVar11 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
    while( true ) {
      bVar4 = (char)pbVar9 - *unaff_EDI;
      bVar28 = bVar4 < *s;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar4 - *s);
code_r0x0040397d:
      cVar26 = (char)pbVar9;
      *pbVar9 = *pbVar9 + cVar26 + bVar28;
      *pbVar9 = *pbVar9 + cVar26;
      *s = *s + (char)param_2;
      s[0x101c00aa] = s[0x101c00aa] + (char)pbVar24;
      *pbVar9 = *pbVar9 + cVar26;
      *(byte **)pbVar27 = pbVar24 + *(int *)pbVar27;
      bVar4 = (byte)((uint)s >> 8);
      cVar26 = (char)s;
      s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar4 + *pbVar9,cVar26));
      in_EAX = pbVar9 + (uint)CARRY1(bVar4,*pbVar9) + *(int *)pbVar9;
      *param_2 = *param_2 + cVar26;
      cVar5 = (char)pbVar24 - pbVar27[2];
      pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar5);
      unaff_ESI = pbVar27;
      if ((POPCOUNT(cVar5) & 1U) == 0) goto code_r0x00403998;
      cVar22 = (char)in_EAX;
      *in_EAX = *in_EAX + cVar22;
      param_2[0x16060000] = param_2[0x16060000] - cVar26;
      pbVar24 = (byte *)((uint)pbVar24 | (uint)pbVar27);
      cVar5 = cVar22 + '\x02';
      uVar15 = (undefined3)((uint)in_EAX >> 8);
      pbVar9 = (byte *)CONCAT31(uVar15,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) break;
      *pbVar9 = *pbVar9 + cVar5;
      bVar4 = cVar22 + 0x71U & *(byte *)CONCAT31(uVar15,cVar22 + 0x71U);
      pbVar9 = (byte *)CONCAT31(uVar15,bVar4);
      *param_2 = *param_2 + cVar26;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
    }
  }
  cVar26 = *pcVar11;
  *pcVar11 = *pcVar11 + bVar4;
  cVar5 = *pcVar11;
  if (!SCARRY1(cVar26,bVar4)) goto code_r0x00403a22;
code_r0x00403a24:
  cVar26 = (char)pcVar11;
  *pcVar11 = *pcVar11 + cVar26;
  uVar15 = (undefined3)((uint)pcVar11 >> 8);
  bVar4 = cVar26 + 2;
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(char *)CONCAT31(uVar15,bVar4) = *(char *)CONCAT31(uVar15,bVar4) + bVar4;
    piVar8 = (int *)CONCAT31(uVar15,cVar26 + '*');
    *piVar8 = (*piVar8 - (int)piVar8) - (uint)(0xd7 < bVar4);
    bVar4 = *param_2;
    bVar7 = (byte)s;
    *param_2 = *param_2 + bVar7;
    out(*(undefined4 *)pbVar27,(short)param_2);
    bVar18 = ((cVar26 + '*') - (char)*piVar8) - CARRY1(bVar4,bVar7);
    pbVar9 = (byte *)CONCAT31(uVar15,bVar18);
    *param_2 = *param_2 + bVar7;
    uVar17 = (undefined2)((uint)pbVar24 >> 0x10);
    uVar23 = SUB41(pbVar24,0);
    cVar26 = (char)((uint)pbVar24 >> 8) - pbVar27[0x1f];
    pbVar24 = (byte *)CONCAT22(uVar17,CONCAT11(cVar26,uVar23));
    *pbVar9 = *pbVar9 + bVar18;
    bVar6 = *param_2;
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar18;
    pbVar27 = pbVar27 + ((4 - *(int *)pbVar9) - (uint)CARRY1(bVar4,bVar18));
    pbVar9 = (byte *)CONCAT31(uVar15,bVar18);
    s = (byte *)(CONCAT22((short)((uint)s >> 0x10),CONCAT11((byte)((uint)s >> 8) | bVar6,bVar7)) +
                -1);
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar18;
    bVar4 = (bVar18 - *pbVar9) - CARRY1(bVar4,bVar18);
    *s = *s + (char)param_2;
    bVar28 = CARRY1(bVar4,*param_2);
    bVar4 = bVar4 + *param_2;
    pbVar9 = (byte *)CONCAT31(uVar15,bVar4);
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      *pbVar9 = *pbVar9 + bVar4;
      cVar5 = (bVar4 + 0x6f) - (0x90 < bVar4);
      pbVar13 = (byte *)CONCAT31(uVar15,cVar5);
      bVar4 = *param_2;
      *param_2 = *param_2 + (char)s;
      if (SCARRY1(bVar4,(char)s) == (char)*param_2 < '\0') goto code_r0x00403aaf;
      *pbVar13 = *pbVar13 + cVar5;
      pcVar11 = (char *)CONCAT31(uVar15,cVar5 + '\x02');
      bVar6 = cVar26 + pbVar24[0x52];
      pbVar24 = (byte *)CONCAT22(uVar17,CONCAT11(bVar6,uVar23));
      *pcVar11 = *pcVar11 + cVar5 + '\x02';
      bVar4 = cVar5 + 4;
      pbVar13 = (byte *)CONCAT31(uVar15,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar13 = *pbVar13 + bVar4;
        cVar26 = (cVar5 + 's') - (0x90 < bVar4);
        pcVar11 = (char *)CONCAT31(uVar15,cVar26);
        bVar4 = (byte)((uint)s >> 8);
        bVar28 = CARRY1(*pbVar24,bVar4);
        *pbVar24 = *pbVar24 + bVar4;
        pbVar9 = pbVar27;
        if (bVar28) {
          *pcVar11 = *pcVar11 + cVar26;
          pbVar24 = (byte *)CONCAT22(uVar17,CONCAT11(bVar6 | unaff_EBP[0x5c],uVar23));
          goto code_r0x00403a76;
        }
        goto code_r0x00403a8f;
      }
      unaff_EDI = unaff_EDI + -*(int *)pbVar13;
      pbVar24 = (byte *)CONCAT22(uVar17,CONCAT11(bVar6 + pbVar24[0x52],uVar23));
code_r0x00403abf:
      *pbVar13 = *pbVar13 + (char)pbVar13;
      cVar26 = (char)pbVar13 + '\x02';
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar26);
      bVar28 = (POPCOUNT(cVar26) & 1U) == 0;
      pbStack_8 = unaff_EBP;
      if (!bVar28) goto code_r0x00403b18;
    }
    else {
code_r0x00403aa1:
      if (bVar28) {
        *pbVar9 = *pbVar9 + (byte)pbVar9;
        bVar4 = (byte)pbVar9 | pbVar9[0x400005e];
        pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar4);
        pbStack_8 = unaff_EBP;
        if ('\0' < (char)bVar4) {
          *pbVar13 = *pbVar13 + bVar4;
code_r0x00403aaf:
          cVar26 = (char)pbVar13 + '(';
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar26);
          *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
          bVar4 = *pbVar24;
          bVar6 = (byte)((uint)s >> 8);
          *pbVar24 = *pbVar24 + bVar6;
          pbVar12 = unaff_EBP;
          if (!CARRY1(bVar4,bVar6)) goto code_r0x00403ad8;
          *pbVar13 = *pbVar13 + cVar26;
          s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar6 | *pbVar24,(char)s));
          if ((POPCOUNT(*param_2 - cVar26) & 1U) == 0) goto code_r0x00403abf;
          *pbVar27 = *pbVar27 + cVar26;
          pbStack_8 = unaff_EBP;
        }
        goto code_r0x00403b0b;
      }
      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                 CONCAT11((char)((uint)pbVar24 >> 8) + pbVar24[0x53],(char)pbVar24))
      ;
    }
    bVar4 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    cVar26 = (bVar4 + 0x6f) - (0x90 < bVar4);
    pcVar11 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar26);
    bVar4 = *pbVar24;
    cVar5 = (char)((uint)s >> 8);
    *pbVar24 = *pbVar24 + cVar5;
    pbStack_8 = unaff_EBP;
    if (*pbVar24 == 0 || SCARRY1(bVar4,cVar5) != (char)*pbVar24 < '\0') goto code_r0x00403b2c;
    *pcVar11 = *pcVar11 + cVar26;
code_r0x00403ad1:
    *(byte **)(pbVar27 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar11) + *(int *)(pbVar27 + (int)unaff_EDI * 8);
    pbVar13 = unaff_EBP;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),(byte)pcVar11 + 0x2d);
code_r0x00403ad8:
    pbStack_8 = pbVar12;
    bVar4 = *pbVar13;
    bVar6 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    pbStack_c = (byte *)CONCAT22(pbStack_c._2_2_,in_ES);
    if (CARRY1(bVar4,bVar6)) {
      *pbVar13 = *pbVar13 + bVar6;
      bVar6 = bVar6 | pbVar13[0x400005d];
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar6);
      pbVar9 = pbVar27;
      if ((char)bVar6 < '\x01') {
        *pbVar13 = *pbVar13 + bVar6;
        s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                             CONCAT11((byte)((uint)s >> 8) | *param_2,(char)s));
        pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                   CONCAT11((char)((uint)pbVar24 >> 8) + pbVar24[-0x39],
                                            (char)pbVar24));
        goto code_r0x00403b4c;
      }
code_r0x00403ae7:
      *pbVar13 = *pbVar13 + (char)pbVar13;
      cVar26 = (char)pbVar13 + '(';
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar26);
      *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar4 = *pbVar24;
      bVar6 = (byte)((uint)s >> 8);
      *pbVar24 = *pbVar24 + bVar6;
      pbVar27 = pbVar9;
      if (!CARRY1(bVar4,bVar6)) goto code_r0x00403b0b;
      *pbVar13 = *pbVar13 + cVar26;
      goto code_r0x00403af3;
    }
  }
  else {
    pcVar11 = (char *)CONCAT31(uVar15,bVar4 + *param_2);
    pbVar9 = pbVar27;
    if ((POPCOUNT(bVar4 + *param_2) & 1U) != 0) goto code_r0x00403ad1;
code_r0x00403a7d:
    cVar26 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar26;
    uVar15 = (undefined3)((uint)pcVar11 >> 8);
    cVar5 = cVar26 + '-';
    pbVar12 = (byte *)CONCAT31(uVar15,cVar5);
    pbVar13 = unaff_EBP;
    pbVar27 = pbVar9;
    if ((POPCOUNT(cVar5 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar12 = *pbVar12 + cVar5;
    bVar4 = cVar26 + 0x2f;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      bVar4 = *param_2;
      *param_2 = *param_2 + (byte)s;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar4,(byte)s);
      pbVar13 = (byte *)CONCAT31(uVar15,cVar26 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar15,bVar4) = *(char *)CONCAT31(uVar15,bVar4) + bVar4;
    bVar28 = 0x90 < bVar4;
    pcVar11 = (char *)CONCAT31(uVar15,cVar26 + -0x62);
code_r0x00403a8f:
    uVar15 = (undefined3)((uint)pcVar11 >> 8);
    bVar6 = (char)pcVar11 - bVar28;
    pbVar13 = (byte *)CONCAT31(uVar15,bVar6);
    bVar4 = *pbVar24;
    cVar26 = (char)((uint)s >> 8);
    *pbVar24 = *pbVar24 + cVar26;
    pbStack_8 = unaff_EBP;
    pbVar27 = pbVar9;
    if (*pbVar24 != 0 && SCARRY1(bVar4,cVar26) == (char)*pbVar24 < '\0') {
      *pbVar13 = *pbVar13 + bVar6;
      pbVar27 = (byte *)CONCAT31(uVar15,bVar6 + 0x2d);
      *(byte **)(pbVar9 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar6) + *(int *)(pbVar9 + (int)unaff_EDI * 8);
      bVar28 = CARRY1(*pbVar9,(byte)pbVar9);
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      goto code_r0x00403aa1;
    }
code_r0x00403af3:
    s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11((byte)((uint)s >> 8) | *pbVar13,(char)s))
    ;
    *pbVar27 = *pbVar27 + (char)pbVar13;
  }
  pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                             CONCAT11((char)((uint)pbVar24 >> 8) + pbVar24[0x55],(char)pbVar24));
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar15 = (undefined3)((uint)pbVar13 >> 8);
  bVar6 = (char)pbVar13 + 0x6f;
  bVar4 = *(byte *)CONCAT31(uVar15,bVar6);
  *param_2 = *param_2 + (char)s;
  pbVar13 = (byte *)CONCAT31(uVar15,(bVar6 & bVar4) + *pbVar27);
  *s = *s - (char)((uint)param_2 >> 8);
code_r0x00403b0b:
  do {
    *pbVar13 = *pbVar13 + (char)pbVar13;
    param_2[0x16060000] = param_2[0x16060000] - (char)s;
    pbVar24 = (byte *)((uint)pbVar24 | (uint)pbVar27);
    cVar26 = (char)pbVar13 + '\x02';
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar26);
    bVar28 = (POPCOUNT(cVar26) & 1U) == 0;
code_r0x00403b18:
    bVar4 = (byte)pbVar9;
    uVar15 = (undefined3)((uint)pbVar9 >> 8);
    if (!bVar28) {
      *param_2 = *param_2 + (char)s;
      pbVar13 = (byte *)CONCAT31(uVar15,bVar4 | *pbVar27);
code_r0x00403b73:
      pbVar9 = (byte *)(unaff_EDI + *(int *)(pbStack_8 + -0x37));
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      uVar15 = (undefined3)((uint)pbVar13 >> 8);
      bVar4 = (byte)pbVar13 | *param_2;
      pcVar11 = (char *)CONCAT31(uVar15,bVar4);
      uVar29 = CONCAT44(param_2,pcVar11);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pcVar11 = *pcVar11 + bVar4;
        *pbVar27 = *pbVar27 + 1;
        return (byte *)CONCAT31(uVar15,bVar4 + 6);
      }
      bVar4 = *pbVar27;
      *pbVar27 = *pbVar27 + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar4,'\x01')) {
        uVar29 = (*pcVar1)();
        s = extraout_ECX;
      }
      pbVar13 = (byte *)uVar29;
      *pbVar13 = *pbVar13 + (char)uVar29;
      cVar5 = (char)((ulonglong)uVar29 >> 0x20);
      puVar20 = (uint *)CONCAT22((short)((ulonglong)uVar29 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar29 >> 0x28) | pbVar24[0x2f],cVar5));
      *pbVar13 = *pbVar13 + (char)uVar29;
      cVar26 = (char)s;
      bVar18 = (byte)((uint)s >> 8) | *pbVar13;
      pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar4 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar18;
      bVar6 = (byte)pbVar13;
      if (CARRY1(bVar4,bVar18)) {
        *pbVar13 = *pbVar13 + bVar6;
        bVar18 = bVar18 | (byte)*puVar20;
        *pbVar24 = *pbVar24 - cVar5;
        *pbVar13 = *pbVar13 + bVar6;
        uVar15 = (undefined3)((uint)pbVar13 >> 8);
        bVar6 = bVar6 | (byte)*puVar20;
        piVar8 = (int *)CONCAT31(uVar15,bVar6);
        pbStack_8 = pbStack_8 + *piVar8;
        *(byte *)piVar8 = (char)*piVar8 + bVar6;
        cVar5 = (char)pbVar24 - *pbVar27;
        pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                   CONCAT11((char)((uint)pbVar24 >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)pbVar24 >> 8),cVar5) +
                                                     0x5f),cVar5));
        *(byte *)piVar8 = (char)*piVar8 + bVar6;
        bVar4 = bVar6 + 0x2a & (byte)*puVar20;
        pbVar9 = pbVar9 + *(int *)(pbStack_8 + 0x5f);
        *(char *)CONCAT31(uVar15,bVar4) = *(char *)CONCAT31(uVar15,bVar4) + bVar4;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar4 + 0x2a);
        *(byte *)puVar20 = (byte)*puVar20 + 0x28;
        *pbVar13 = *pbVar13 + bVar4 + 0x2a;
      }
      else {
        *pbVar27 = *pbVar27 + bVar6;
      }
      pcVar11 = (char *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar18,cVar26));
      *pbStack_8 = *pbStack_8 - bVar18;
      *(byte *)puVar20 = (byte)*puVar20 + cVar26;
      bVar4 = (byte)pbVar13 - 0xb;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar4);
      if (10 < (byte)pbVar13) {
        *pbVar12 = *pbVar12 | bVar4;
        return pbVar12;
      }
      *(byte *)puVar20 = (byte)*puVar20 + cVar26;
      do {
        bVar4 = pbVar24[-0x23];
        bVar18 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar18;
        bVar6 = pbStack_8[-0x22];
        *pbVar12 = *pbVar12 + bVar18;
        uVar15 = (undefined3)((uint)pbVar12 >> 8);
        bVar18 = bVar18 | *pbVar27;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar18);
        cVar5 = (char)pbVar24 - *pbVar27;
        pbVar24 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar24 >> 0x10),
                                                   CONCAT11((char)((uint)pbVar24 >> 8) + bVar4 |
                                                            bVar6,(char)pbVar24)) >> 8),cVar5);
        cVar26 = (char)pcVar11;
        pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                   CONCAT11((char)((uint)pcVar11 >> 8) + *pbVar13,cVar26));
        *(byte *)puVar20 = (byte)*puVar20 + cVar26;
        bVar6 = bVar18 - *pbVar13;
        pbVar12 = (byte *)CONCAT31(uVar15,bVar6);
        pbVar27 = pbVar27 + (-(uint)(bVar18 < *pbVar13) - *(int *)pbVar12);
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
      bVar28 = false;
      pbVar12 = (byte *)((uint)pbVar12 & 0xffffff00);
      do {
        pbVar9 = pbVar9 + (-(uint)bVar28 - *(int *)pbVar24);
        pcVar10 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),*pcVar11);
        *pcVar10 = *pcVar10 + *pcVar11;
        pbVar12 = (byte *)CONCAT31((int3)((uint)(pcVar10 +
                                                (pbVar27[0x2000001] < (byte)((uint)pcVar11 >> 8)) +
                                                0xda7d) >> 8),
                                   ((byte)(pcVar10 +
                                          (pbVar27[0x2000001] < (byte)((uint)pcVar11 >> 8)) + 0xda7d
                                          ) | (byte)*puVar20) + 0x7d);
        pcVar11 = pcVar11 + -1;
        *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar11;
        while( true ) {
          uVar21 = (undefined3)((uint)puVar20 >> 8);
          cVar26 = (char)puVar20 + *(char *)((int)pbVar9 * 2 + 0xa0000e1);
          puVar20 = (uint *)CONCAT31(uVar21,cVar26);
          bVar28 = CARRY1((byte)pbVar12,(byte)*puVar20);
          uVar15 = (undefined3)((uint)pbVar12 >> 8);
          bVar4 = (byte)pbVar12 + (byte)*puVar20;
          pbVar12 = (byte *)CONCAT31(uVar15,bVar4);
          if ((POPCOUNT(bVar4) & 1U) != 0) break;
          *pbVar12 = *pbVar12 + bVar4;
          cVar5 = (char)pcVar11;
          pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar11 >> 8) | pbVar9[-0x65],cVar5));
          bVar6 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar4;
          if (CARRY1(bVar6,bVar4)) {
            *pbVar12 = *pbVar12 + bVar4;
            pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar24 >> 8) | pbStack_8[-0x1d],
                                                (char)pbVar24));
            *pbVar12 = *pbVar12 + bVar4;
            bVar28 = false;
            bVar4 = bVar4 | (byte)*puVar20;
            pcVar10 = (char *)CONCAT31(uVar15,bVar4);
            while( true ) {
              bVar6 = (byte)pcVar10;
              uVar15 = (undefined3)((uint)pcVar10 >> 8);
              if (bVar28 == (char)bVar4 < '\0') break;
              *pcVar10 = *pcVar10 + bVar6;
              bVar6 = bVar6 | (byte)*puVar20;
              puVar14 = (uint *)CONCAT31(uVar15,bVar6);
              *pbVar9 = *pbVar9 << 1 | (char)*pbVar9 < '\0';
              uVar3 = *puVar14;
              *(byte *)puVar14 = (byte)*puVar14 + bVar6;
              pbStack_8 = pbStack_8 + (-(uint)CARRY1((byte)uVar3,bVar6) - *puVar14);
              *puVar14 = *puVar14 << 1 | (uint)((int)*puVar14 < 0);
              while( true ) {
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20 + (byte)pcVar11;
                cVar26 = (char)puVar14 + 'o' + CARRY1((byte)uVar3,(byte)pcVar11);
                pcVar10 = (char *)CONCAT31((int3)((uint)puVar14 >> 8),cVar26);
                pcVar11 = (char *)0x20a0000;
                if ((POPCOUNT(cVar26) & 1U) != 0) break;
                *pcVar10 = *pcVar10 + cVar26;
                bVar4 = bRamfe140212;
                pcVar11 = (char *)0x0;
                uVar15 = (undefined3)((uint)(pcVar10 + -0x732b0000) >> 8);
                bVar6 = in(0);
                puVar14 = (uint *)CONCAT31(uVar15,bVar6);
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar20 < '\0') {
                  *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar20;
                  puVar14 = (uint *)CONCAT31(uVar15,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) == 0) {
                    *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                    pcVar11 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar14) << 8);
                    *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                  puVar14 = (uint *)CONCAT31(uVar15,bVar6 | (byte)*puVar20);
                }
              }
              *(byte *)puVar20 = (byte)*puVar20;
              bVar28 = SCARRY1((char)puVar20,*pbVar9);
              bVar4 = (char)puVar20 + *pbVar9;
              puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar4);
            }
            if (bVar28 == (char)bVar4 < '\0') {
              *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar11;
              pbVar12 = (byte *)((uint)pcVar10 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar10 = *pcVar10 + bVar6;
            pbVar12 = (byte *)CONCAT31(uVar15,(bVar6 | (byte)*puVar20) + 0x7d);
            pcVar11 = pcVar11 + -1;
            *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar11;
          }
          else {
            *(byte *)puVar20 = (byte)*puVar20 + cVar5;
            puVar20 = (uint *)CONCAT31(uVar21,cVar26 + *(char *)((int)pbVar9 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    *pbVar9 = *pbVar9 + bVar4;
    bVar4 = bVar4 + 0x6f & *(byte *)CONCAT31(uVar15,bVar4 + 0x6f);
    *param_2 = *param_2 + (char)s;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
    pcVar11 = (char *)CONCAT31(uVar15,bVar4 - *unaff_EDI);
code_r0x00403b2c:
    bVar4 = (char)pcVar11 - *pcVar11;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar4);
    *pbVar13 = *pbVar13 + bVar4;
    *(byte **)pbVar13 = param_2 + *(int *)pbVar13;
    *pbVar13 = *pbVar13 + bVar4;
    bVar28 = CARRY1(*pbVar13,bVar4);
    *pbVar13 = *pbVar13 + bVar4;
    pbStack_c = pbVar27;
    while( true ) {
      *(byte **)pbVar13 = pbVar13 + (uint)bVar28 + *(int *)pbVar13;
      unaff_EDI = unaff_EDI + 4;
      pbVar13[(int)param_2] = pbVar13[(int)param_2] + (char)pbVar24;
      *pbVar13 = *pbVar13 + (char)pbVar13;
      *(byte **)pbStack_c = pbVar24 + *(int *)pbStack_c;
      bVar4 = (byte)((uint)s >> 8);
      cVar26 = (char)s;
      s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar4 + *pbVar13,cVar26));
      pbVar13 = pbVar13 + (uint)CARRY1(bVar4,*pbVar13) + *(int *)pbVar13;
      *param_2 = *param_2 + cVar26;
      cVar26 = (char)pbVar24 - pbStack_c[2];
      pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar26);
      pbVar27 = pbStack_c;
      if ((POPCOUNT(cVar26) & 1U) != 0) break;
code_r0x00403b4c:
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      bVar4 = (byte)pbVar13 | *pbVar24;
      piVar8 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar4);
      if (bVar4 != 0) {
        pbStack_8 = pbStack_8 + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar8 = (char)*piVar8 + bVar4;
        s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                             CONCAT11((byte)((uint)s >> 8) | *param_2,(char)s));
        pbStack_c = pbStack_c + *piVar8;
        pcVar11 = (char *)((int)piVar8 + *piVar8);
        uVar15 = (undefined3)((uint)pcVar11 >> 8);
        bVar6 = (char)pcVar11 - *pcVar11;
        pbVar27 = (byte *)CONCAT31(uVar15,bVar6);
        bVar4 = *pbVar27;
        *pbVar27 = *pbVar27 + bVar6;
        piVar8 = (int *)CONCAT31(uVar15,bVar6 - CARRY1(bVar4,bVar6));
      }
      *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
      pbVar27 = pbStack_c + 4;
      out(*(undefined4 *)pbStack_c,(short)param_2);
      pbVar13 = (byte *)(((uint)piVar8 >> 8) * 0x100);
      *param_2 = *param_2 + (byte)s;
      bVar4 = (char)param_2 - *pbVar24;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar4);
      *pbVar24 = *pbVar24;
      *param_2 = *param_2 + (char)((uint)s >> 8);
      *pbVar13 = *pbVar13;
      pcVar11 = (char *)(((uint)piVar8 >> 8) * 0x200);
      *pcVar11 = *pcVar11 + (char)pbVar24;
      bVar28 = CARRY1(*s,bVar4);
      *s = *s + bVar4;
      pbStack_c = pbVar27;
      if (bVar28) {
        *pbVar13 = *pbVar13;
        s = (byte *)CONCAT31((int3)((uint)s >> 8),(byte)s | *param_2);
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
        uVar16 = CONCAT21((short)((uint)pcVar11 >> 0x10),(byte)((uint)pcVar11 >> 8) | bRamfe140212);
        while( true ) {
          pcVar11 = (char *)((uint)uVar16 << 8);
          bVar7 = (byte)puVar14;
          *(byte *)puVar14 = (byte)*puVar14 & bVar7;
          bVar6 = *pbVar24;
          bVar25 = (byte)uVar16;
          bVar18 = *pbVar24;
          *pbVar24 = *pbVar24 + bVar25;
          bVar4 = *pbVar24;
          if (!CARRY1(bVar6,bVar25)) break;
          *(byte *)puVar14 = (byte)*puVar14 + bVar7;
          pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar24 >> 8) | bRam026fffe2,
                                              (char)pbVar24));
          *(byte *)puVar14 = (byte)*puVar14 + bVar7;
          bVar7 = bVar7 | (byte)*puVar20;
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7);
          bVar28 = (POPCOUNT(bVar7) & 1U) == 0;
          while( true ) {
            cVar26 = (char)((uint)pbVar24 >> 8);
            uVar17 = (undefined2)((uint)pbVar24 >> 0x10);
            if (!bVar28) {
              *(byte *)puVar20 = (byte)*puVar20;
              pbVar24 = (byte *)CONCAT22(uVar17,CONCAT11(cVar26 + pbVar24[-0x1f],(char)pbVar24));
              goto code_r0x00403d52;
            }
            *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
            uVar19 = (undefined2)((uint)pcVar11 >> 0x10);
            bVar6 = (byte)((uint)pcVar11 >> 8) | (byte)*puVar14;
            uVar16 = CONCAT21(uVar19,bVar6);
            *puVar14 = *puVar14 & (uint)puVar14;
            *pbVar24 = *pbVar24 + bVar6;
            uVar15 = (undefined3)((uint)puVar14 >> 8);
            bVar4 = (char)puVar14 - bVar6;
            pcVar11 = (char *)CONCAT31(uVar15,bVar4);
            *pcVar11 = *pcVar11 + bVar4;
            bVar4 = bVar4 | (byte)*puVar20;
            puVar14 = (uint *)CONCAT31(uVar15,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar14 = (byte)*puVar14 + bVar4;
            pcVar11 = (char *)((uint)CONCAT21(uVar19,bVar6 | (byte)*puVar14) << 8);
            *puVar14 = *puVar14 - (int)puVar14;
            *(byte *)puVar20 = (byte)*puVar20;
            pbVar24 = (byte *)CONCAT22(uVar17,CONCAT11(cVar26 + pbVar24[-0x1d],(char)pbVar24));
            do {
              *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
              uVar17 = (undefined2)((uint)puVar20 >> 0x10);
              cVar26 = (char)puVar20;
              bVar4 = (byte)((uint)puVar20 >> 8) | pbVar24[-0x17];
              puVar20 = (uint *)CONCAT22(uVar17,CONCAT11(bVar4,cVar26));
              *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
              pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar24 >> 8) | bRam026fffeb,
                                                  (char)pbVar24));
              do {
                *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
                uVar15 = (undefined3)((uint)puVar14 >> 8);
                bVar18 = (byte)puVar14 | (byte)*puVar20;
                pcVar10 = (char *)CONCAT31(uVar15,bVar18);
                bVar6 = pbVar24[-0x16];
                *pcVar10 = *pcVar10 + bVar18;
                pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                           CONCAT11((char)((uint)pbVar24 >> 8) + bVar6 |
                                                    bRam026fffec,(char)pbVar24));
                *pcVar10 = *pcVar10 + bVar18;
                pbVar13 = (byte *)CONCAT31(uVar15,bVar18 | (byte)*puVar20);
                while( true ) {
                  *pbVar13 = *pbVar13 + (byte)pbVar13;
                  uVar15 = (undefined3)((uint)pbVar13 >> 8);
                  bVar6 = (byte)pbVar13 | (byte)*puVar20;
                  puVar14 = (uint *)CONCAT31(uVar15,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                  bVar18 = pbVar9[-0x14];
                  *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar20;
                  pcVar10 = (char *)CONCAT31(uVar15,bVar6);
                  bVar7 = pbVar24[-0x15];
                  *pcVar10 = *pcVar10 + bVar6;
                  pcVar11 = (char *)((uint)CONCAT21((short)((uint)pcVar11 >> 0x10),
                                                    (byte)((uint)pcVar11 >> 8) | bVar18 |
                                                    pbVar9[-0x13]) << 8);
                  *pcVar10 = *pcVar10 + bVar6;
                  pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                             CONCAT11((char)((uint)pbVar24 >> 8) + bVar7 |
                                                      bRam026fffef,(char)pbVar24));
                  *pcVar10 = *pcVar10 + bVar6;
                  pbVar13 = (byte *)CONCAT31(uVar15,bVar6 | (byte)*puVar20);
                  do {
                    do {
                      bVar18 = (byte)pbVar13;
                      *pbVar13 = *pbVar13 + bVar18;
                      cVar22 = (char)pbVar24;
                      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar24 >> 8) | *pbVar13,
                                                          cVar22));
                      *pbVar13 = bVar18;
                      *pbVar13 = *pbVar13 + bVar18;
                      cVar5 = (char)((uint)pcVar11 >> 8) + *pbVar13;
                      pcVar11 = (char *)((uint)CONCAT21((short)((uint)pcVar11 >> 0x10),cVar5) << 8);
                      uVar15 = (undefined3)((uint)pbVar13 >> 8);
                      bVar18 = bVar18 & *pbVar13;
                      pbVar13 = (byte *)CONCAT31(uVar15,bVar18);
                      bVar6 = *pbVar24;
                      *pbVar24 = *pbVar24 + cVar5;
                    } while (SCARRY1(bVar6,cVar5) == (char)*pbVar24 < '\0');
                    *pbVar13 = *pbVar13 + bVar18;
                    bVar18 = bVar18 | (byte)*puVar20;
                    pbVar13 = (byte *)CONCAT31(uVar15,bVar18);
                    if ((POPCOUNT(bVar18) & 1U) == 0) {
                      *pbVar13 = *pbVar13 + bVar18;
                      *pbVar13 = *pbVar13 + bVar18;
                      cVar26 = cVar26 - bVar4;
                      pbVar24 = (byte *)CONCAT31((int3)((uint)puVar20 >> 8),cVar26);
                      *pbVar13 = *pbVar13 + bVar18;
                      bRam0312382b = bRam0312382b | *pbVar24;
                      while( true ) {
                        bVar6 = (byte)pbVar13;
                        *pbVar13 = *pbVar13 + bVar6;
                        bRam0312382b = bRam0312382b | (pbVar9 + 0x21b0000)[(int)pbVar13];
                        uVar15 = (undefined3)((uint)pbVar13 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar24 = *pbVar24 + bRam0312382b;
                        pbVar13 = (byte *)CONCAT31(uVar15,bVar6 | *pbVar27);
                      }
                      *pbVar13 = *pbVar13 + bVar6;
                      bVar6 = bVar6 | *pbVar27;
                      pcVar11 = (char *)CONCAT31(uVar15,bVar6);
                      out(*(undefined4 *)pbVar27,(short)pbVar24);
                      *pcVar11 = *pcVar11 + bVar6;
                      uVar19 = CONCAT11(bVar4 | bRam6f0a002b,cVar26);
                      pcVar10 = (char *)CONCAT22(uVar17,uVar19);
                      *pcVar11 = *pcVar11 + bVar6;
                      *pcVar10 = *pcVar10 + bRam0312382b;
                      out(*(undefined4 *)(pbVar27 + 4),uVar19);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar22 + *pcVar11);
                  } while (SCARRY1(cVar22,*pcVar11) != (char)(cVar22 + *pcVar11) < '\0');
                }
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar20 < '\0');
              *(byte *)puVar20 = (byte)*puVar20;
              *pcVar11 = *pcVar11 - (char)pbVar24;
              *(byte *)puVar14 = (byte)*puVar14 + bVar6;
              bVar6 = bVar6 | (byte)*puVar20;
              puVar14 = (uint *)CONCAT31(uVar15,bVar6);
              bVar28 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar28);
          }
        }
      } while (SCARRY1(bVar18,bVar25));
    }
    *pbVar24 = *pbVar24 + (char)((uint)pcVar11 >> 8);
    *pbVar9 = *pbVar9 - (char)pbVar24;
  } while( true );
}


