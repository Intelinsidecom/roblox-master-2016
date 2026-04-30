/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403884
 * Raw Name    : <Execute>b__0
 * Demangled   : <Execute>b__0
 * Prototype   : byte * <Execute>b__0(byte * s, byte * param_2)
 * Local Vars  : param_2, pbStack_14, pbStack_10, pcVar1, uVar2, uVar3, bVar4, cVar5, cVar6, bVar7, bVar8, in_EAX, piVar9, pbVar10, pbVar11, pcVar12, pcVar13, pbVar14, s, pbVar15, puVar16, uVar17, uVar18, uVar19, extraout_ECX, bVar20, uVar21, puVar22, uVar23, cVar24, uVar25, unaff_EBX, bVar26, unaff_EBP, unaff_ESI, unaff_EDI, in_ES, in_CS, in_DS, bVar27, uVar28, unaff_retaddr, in_stack_fffffffc
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall <Execute>b__0(byte *s,byte *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte *in_EAX;
  undefined3 uVar17;
  byte *pbVar10;
  byte *pbVar11;
  uint3 uVar18;
  char *pcVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint *puVar16;
  undefined2 uVar19;
  byte *extraout_ECX;
  undefined2 uVar21;
  uint *puVar22;
  undefined3 uVar23;
  char cVar24;
  undefined1 uVar25;
  byte bVar26;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_DS;
  bool bVar27;
  undefined8 uVar28;
  byte *unaff_retaddr;
  byte *pbStack_14;
  byte *pbStack_10;
  byte *in_stack_fffffffc;
  int *piVar9;
  byte bVar20;
  
code_r0x00403884:
                    /* .NET CLR Managed Code */
  cVar5 = unaff_EDI[0x17];
  cVar24 = (char)s;
  bVar20 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar20;
  bVar4 = *param_2;
  pbVar15 = (byte *)CONCAT22((short)((uint)in_stack_fffffffc >> 0x10),in_DS);
  cVar6 = unaff_EDI[0x1a];
  *in_EAX = *in_EAX + bVar20;
  s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                       CONCAT11(((char)((uint)s >> 8) + cVar5 | bVar4) + cVar6 | *param_2,cVar24));
  *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
  *(byte *)((int)in_EAX * 2) = *(byte *)((int)in_EAX * 2) ^ bVar20;
  bVar4 = *in_EAX;
  *in_EAX = *in_EAX + bVar20;
  bVar7 = *in_EAX;
  uVar17 = (undefined3)((uint)in_EAX >> 8);
  *s = *s + (char)param_2;
  bVar4 = ((bVar20 - bVar7) - CARRY1(bVar4,bVar20)) + *param_2;
  pbVar11 = (byte *)CONCAT31(uVar17,bVar4);
  in_stack_fffffffc = pbVar15;
  if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x004038f6;
  *pbVar11 = *pbVar11 + bVar4;
  cVar5 = (bVar4 + 0x6f) - (0x90 < bVar4);
  pbVar10 = (byte *)CONCAT31(uVar17,cVar5);
  bVar4 = *param_2;
  *param_2 = *param_2 + cVar24;
  pbVar11 = pbVar15;
  if (SCARRY1(bVar4,cVar24) == (char)*param_2 < '\0') {
    unaff_EBP[0x2b060000] = unaff_EBP[0x2b060000] - cVar5;
    cVar5 = cVar5 + *param_2;
    pbVar11 = (byte *)CONCAT31(uVar17,cVar5);
    goto code_r0x0040390c;
  }
  do {
    *pbVar10 = *pbVar10 + (char)pbVar10;
    pbVar15 = param_2;
    in_stack_fffffffc = pbVar11;
    while( true ) {
      uVar17 = (undefined3)((uint)pbVar10 >> 8);
      cVar5 = (char)pbVar10 + '\x02';
      pbVar11 = (byte *)CONCAT31(uVar17,cVar5);
      if ((POPCOUNT(cVar5) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = unaff_EDI + -*(int *)unaff_ESI;
      cVar5 = (char)pbVar11 + *pbVar15;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar5);
      param_2 = pbVar15;
code_r0x0040390c:
      pbVar15 = param_2;
      cVar6 = (char)pbVar11;
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *unaff_ESI = *unaff_ESI + cVar6;
        goto code_r0x0040395a;
      }
      *pbVar11 = *pbVar11 + cVar6;
      bVar4 = cVar6 + 2;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar4);
code_r0x00403912:
      bVar27 = (POPCOUNT(bVar4) & 1U) == 0;
      if (!bVar27) goto code_r0x00403967;
      *pbVar11 = *pbVar11 + (char)pbVar11;
code_r0x00403916:
      bVar7 = (char)pbVar11 + 0x6f;
      pbVar10 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
      bVar4 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar7;
      if (*pbVar10 == 0 || SCARRY1(bVar4,bVar7) != (char)*pbVar10 < '\0') goto code_r0x00403979;
      *pbVar10 = *pbVar10 + bVar7;
      pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar11 >> 8),(char)pbVar11 + -100);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           pbVar15 + (uint)(0xd2 < bVar7) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
code_r0x00403926:
      *(byte **)pbVar10 = unaff_retaddr;
      bVar4 = *unaff_ESI;
      bVar7 = (byte)pbVar10;
      *unaff_ESI = *unaff_ESI + bVar7;
      if (CARRY1(bVar4,bVar7)) {
        *pbVar10 = *pbVar10 + bVar7;
        uVar17 = (undefined3)((uint)pbVar10 >> 8);
        bVar7 = bVar7 | pbVar10[0x400005b];
        pbVar11 = (byte *)CONCAT31(uVar17,bVar7);
        pbVar10 = unaff_ESI;
        if ((char)bVar7 < '\x01') goto code_r0x00403991;
        *pbVar11 = *pbVar11 + bVar7;
        cVar5 = bVar7 + 0x28;
        pbVar11 = (byte *)CONCAT31(uVar17,cVar5);
        *(byte **)pbVar11 = pbVar11 + (uint)(0xd7 < bVar7) + *(int *)pbVar11;
        bVar4 = *unaff_EBX;
        bVar7 = (byte)((uint)s >> 8);
        *unaff_EBX = *unaff_EBX + bVar7;
        if (CARRY1(bVar4,bVar7)) {
          *pbVar11 = *pbVar11 + cVar5;
          s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar7 | *pbVar11,(char)s));
          *unaff_ESI = *unaff_ESI + cVar5;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                                (char)unaff_EBX));
          *pbVar11 = *pbVar11 + cVar5;
code_r0x00403950:
          uVar17 = (undefined3)((uint)pbVar11 >> 8);
          bVar7 = (char)pbVar11 + 0x6f;
          bVar4 = *(byte *)CONCAT31(uVar17,bVar7);
          *pbVar15 = *pbVar15 + (char)s;
          pbVar11 = (byte *)CONCAT31(uVar17,(bVar7 & bVar4) + *unaff_ESI);
          *s = *s - (char)((uint)pbVar15 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar11 = *pbVar11 + cVar5;
    cVar5 = (char)pbVar10 + '.' + *pbVar15;
    pbVar11 = (byte *)CONCAT31(uVar17,cVar5);
    unaff_retaddr = s;
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      pbVar10 = pbVar15 + (int)pbVar11;
      *pbVar10 = *pbVar10 + cVar5;
      bVar4 = *pbVar10;
      goto code_r0x00403912;
    }
    *pbVar11 = *pbVar11 + cVar5;
    bVar4 = cVar5 + 2;
    pbVar11 = (byte *)CONCAT31(uVar17,bVar4);
    if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403916;
    *pbVar11 = *pbVar11 + bVar4;
    cVar6 = cVar5 + 'q';
    piVar9 = (int *)CONCAT31(uVar17,cVar6);
    *piVar9 = (*piVar9 - (int)piVar9) - (uint)(0x90 < bVar4);
    bVar4 = *unaff_EBX;
    bVar7 = (byte)((uint)s >> 8);
    *unaff_EBX = *unaff_EBX + bVar7;
    if (!CARRY1(bVar4,bVar7)) {
      out(*(undefined4 *)unaff_ESI,(short)pbVar15);
      bVar4 = (cVar6 - (char)*piVar9) - CARRY1(bVar4,bVar7);
      *pbVar15 = *pbVar15 + (char)s;
      cVar5 = bVar4 - *(byte *)CONCAT31(uVar17,bVar4);
      unaff_ESI = unaff_ESI +
                  ((4 - *(int *)CONCAT31(uVar17,cVar5)) -
                  (uint)(bVar4 < *(byte *)CONCAT31(uVar17,bVar4)));
      in_EAX = (byte *)CONCAT31(uVar17,cVar5);
      param_2 = pbVar15;
      goto code_r0x00403884;
    }
    *(char *)piVar9 = (char)*piVar9 + cVar6;
    uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar4 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x56];
    *(char *)piVar9 = (char)*piVar9 + cVar6;
    pcVar13 = (char *)CONCAT31(uVar17,cVar5 + 's');
    unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar4 + *(char *)(CONCAT22(uVar19,CONCAT11(bVar4,(
                                                  char)unaff_EBX)) + 0x56),(char)unaff_EBX));
    *pcVar13 = *pcVar13 + cVar5 + 's';
    bVar4 = cVar5 - 0xf;
    *(char *)CONCAT31(uVar17,bVar4) = *(char *)CONCAT31(uVar17,bVar4) + bVar4;
    bVar7 = cVar5 + 0x1e;
    pbVar10 = (byte *)CONCAT31(uVar17,bVar7);
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         s + (uint)(0xd2 < bVar4) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    unaff_retaddr = (byte *)CONCAT22((short)((uint)s >> 0x10),in_ES);
    in_ES = *(undefined2 *)pbVar10;
    bVar4 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar7;
    param_2 = s;
    pbVar11 = unaff_EBP;
    if (CARRY1(bVar4,bVar7)) {
      *pbVar10 = *pbVar10 + bVar7;
      pbVar11 = (byte *)CONCAT31(uVar17,bVar7 | pbVar10[0x400005a]);
      pbVar15 = s;
      if ('\0' < (char)(bVar7 | pbVar10[0x400005a])) {
code_r0x004038f6:
        bVar4 = (byte)pbVar11;
        *pbVar11 = *pbVar11 + bVar4;
        uVar17 = (undefined3)((uint)pbVar11 >> 8);
        cVar5 = ((bVar4 + 0x28) - *(char *)CONCAT31(uVar17,bVar4 + 0x28)) - (0xd7 < bVar4);
        pbVar11 = (byte *)CONCAT31(uVar17,cVar5);
        bVar4 = *unaff_EBX;
        bVar7 = (byte)((uint)s >> 8);
        *unaff_EBX = *unaff_EBX + bVar7;
        if (CARRY1(bVar4,bVar7)) {
          *pbVar11 = *pbVar11 + cVar5;
          s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar7 | *pbVar11,(char)s));
          *unaff_ESI = *unaff_ESI + cVar5;
          goto code_r0x00403908;
        }
        pbVar10 = pbVar11 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar11 = *pbVar11 + (char)pbVar11;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)s;
  unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
  cVar5 = (char)pbVar11 + '\x02';
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar5);
  bVar27 = (POPCOUNT(cVar5) & 1U) == 0;
code_r0x00403967:
  if (!bVar27) goto code_r0x004039be;
  *pbVar11 = *pbVar11 + (char)pbVar11;
  uVar17 = (undefined3)((uint)pbVar11 >> 8);
  bVar4 = (char)pbVar11 + 0x6f;
  bVar4 = bVar4 & *(byte *)CONCAT31(uVar17,bVar4);
  pbVar10 = (byte *)CONCAT31(uVar17,bVar4);
  *pbVar15 = *pbVar15 + (char)s;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + *unaff_EDI);
  unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
code_r0x00403979:
  bVar4 = (char)pbVar10 - *unaff_EDI;
  bVar27 = bVar4 < *s;
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar4 - *s);
  do {
    cVar5 = (char)pbVar11;
    *pbVar11 = *pbVar11 + cVar5 + bVar27;
    *pbVar11 = *pbVar11 + cVar5;
    *s = *s + (char)pbVar15;
    s[0x101c00aa] = s[0x101c00aa] + (char)unaff_EBX;
    *pbVar11 = *pbVar11 + cVar5;
    *(byte **)unaff_ESI = unaff_EBX + *(int *)unaff_ESI;
    bVar4 = (byte)((uint)s >> 8);
    s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar4 + *pbVar11,(char)s));
    pbVar11 = pbVar11 + (uint)CARRY1(bVar4,*pbVar11) + *(int *)pbVar11;
    pbVar10 = unaff_ESI;
code_r0x00403991:
    cVar5 = (char)s;
    *pbVar15 = *pbVar15 + cVar5;
    cVar6 = (char)unaff_EBX - pbVar10[2];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6);
    unaff_ESI = pbVar10;
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040395a;
    *pbVar11 = *pbVar11 + (byte)pbVar11;
    uVar18 = (uint3)((uint)pbVar11 >> 8);
    bVar4 = (byte)pbVar11 | *unaff_EBX;
    piVar9 = (int *)CONCAT31(uVar18,bVar4);
    bVar7 = (byte)((uint)s >> 8);
    bVar20 = (byte)pbVar15;
    if (bVar4 == 0) {
      *(char *)piVar9 = (char)*piVar9;
      unaff_ESI = pbVar10 + 4;
      out(*(undefined4 *)pbVar10,(short)pbVar15);
      pbVar11 = (byte *)((uint)uVar18 << 8);
      *pbVar15 = *pbVar15 + cVar5;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar20 - *unaff_EBX);
      *unaff_EBX = *unaff_EBX;
      *pbVar15 = *pbVar15 + bVar7;
      *pbVar11 = *pbVar11;
      *unaff_EBX = *unaff_EBX + cVar6;
      *pbVar11 = *pbVar11;
      *(byte **)(unaff_EBX + -0x3d) = unaff_ESI + *(int *)(unaff_EBX + -0x3d);
      break;
    }
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar9 = (char)*piVar9 + bVar4;
    s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar7 | *pbVar15,cVar5));
    unaff_ESI = pbVar10 + *piVar9;
    pcVar13 = (char *)((int)piVar9 + *piVar9);
    bVar7 = (char)pcVar13 - *pcVar13;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar7);
    bVar4 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar7;
    pbVar11 = pbVar11 + (-(uint)CARRY1(bVar4,bVar7) - *(int *)pbVar11);
    bVar27 = CARRY1(*s,bVar20);
    *s = *s + bVar20;
  } while (!bVar27);
  *pbVar11 = *pbVar11 + (char)pbVar11;
  s = (byte *)CONCAT31((int3)((uint)s >> 8),(byte)s | *pbVar15);
code_r0x004039be:
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x3c);
  *pbVar11 = *pbVar11 + (byte)pbVar11;
  uVar17 = (undefined3)((uint)pbVar11 >> 8);
  bVar4 = (byte)pbVar11 | *pbVar15;
  pcVar13 = (char *)CONCAT31(uVar17,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) goto code_r0x004039c8;
  cVar5 = *pcVar13;
  *pcVar13 = *pcVar13 + bVar4;
  cVar6 = *pcVar13;
  if (!SCARRY1(cVar5,bVar4)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar13 = *pcVar13 + bVar4;
  *unaff_ESI = *unaff_ESI + 1;
  uVar2 = *(undefined6 *)CONCAT31(uVar17,bVar4 + 6);
  pbVar10 = (byte *)uVar2;
  bVar4 = *pbVar15;
  bVar7 = (byte)s;
  *pbVar15 = *pbVar15 + bVar7;
  if (!CARRY1(bVar4,bVar7)) goto code_r0x00403979;
  *pbVar10 = *pbVar10 + (char)uVar2;
  bVar20 = (byte)((uint)s >> 8) | *pbVar10;
  uVar19 = CONCAT11(bVar20,bVar7);
  pbVar10 = pbVar10 + -*(int *)pbVar10;
  bVar4 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + bVar20;
  if (CARRY1(bVar4,bVar20)) {
    cVar5 = (char)pbVar10;
    *pbVar10 = *pbVar10 + cVar5;
    bVar4 = *pbVar15;
    pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                               CONCAT11((char)((uint)pbVar15 >> 8) - unaff_EBX[-0x3a],(char)pbVar15)
                              );
    *pbVar10 = *pbVar10 + cVar5;
    uVar21 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar26 = (byte)((uint)unaff_EBX >> 8) | pbVar15[0x32];
    pcVar13 = (char *)CONCAT22(uVar21,CONCAT11(bVar26,(char)unaff_EBX));
    pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_CS);
    cVar6 = cVar5 + *pcVar13 + '-';
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar6);
    *pbVar10 = *pbVar10;
    bVar8 = *pbVar15;
    cVar24 = (char)unaff_EBX - *unaff_ESI;
    cVar5 = unaff_EDI[0x17];
    *pbVar10 = *pbVar10 + cVar6;
    uVar19 = CONCAT11((bVar20 | bVar4) + cVar5 | *pbVar15,bVar7 - bVar8);
    unaff_EBX = (byte *)CONCAT22(uVar21,CONCAT11(bVar26 + *(char *)(CONCAT31((int3)((uint)pcVar13 >>
                                                                                   8),cVar24) + 0x4e
                                                                   ),cVar24));
    *pbVar10 = *pbVar10 + cVar6;
  }
  s = (byte *)CONCAT22((short)((uint)s >> 0x10),uVar19);
  bVar4 = (byte)pbVar10;
  uVar17 = (undefined3)((uint)pbVar10 >> 8);
  pcVar13 = (char *)CONCAT31(uVar17,bVar4 + 0x28);
  *pcVar13 = (*pcVar13 - (bVar4 + 0x28)) - (0xd7 < bVar4);
  *pbVar15 = *pbVar15 + (char)uVar19;
  bVar7 = bVar4 + 0x1b;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x4f],
                                        (char)unaff_EBX));
  *(char *)CONCAT31(uVar17,bVar7) = *(char *)CONCAT31(uVar17,bVar7) + bVar7;
  pcVar12 = (char *)CONCAT31(uVar17,bVar4 + 0x43);
  *pcVar12 = (*pcVar12 - (bVar4 + 0x43)) - (0xd7 < bVar7);
  *pbVar15 = *pbVar15 + (char)uVar19;
  pcVar13 = pcVar12 + -0x6b721c;
  pcVar12 = pcVar12 + -0x6b721a;
  *pcVar12 = *pcVar12 + (char)((uint)pbVar15 >> 8);
  cVar6 = *pcVar12;
code_r0x00403a22:
  if ((POPCOUNT(cVar6) & 1U) == 0) {
code_r0x00403a24:
    cVar5 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar5;
    uVar17 = (undefined3)((uint)pcVar13 >> 8);
    bVar4 = cVar5 + 2;
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      *(char *)CONCAT31(uVar17,bVar4) = *(char *)CONCAT31(uVar17,bVar4) + bVar4;
      piVar9 = (int *)CONCAT31(uVar17,cVar5 + '*');
      *piVar9 = (*piVar9 - (int)piVar9) - (uint)(0xd7 < bVar4);
      bVar4 = *pbVar15;
      bVar8 = (byte)s;
      *pbVar15 = *pbVar15 + bVar8;
      out(*(undefined4 *)unaff_ESI,(short)pbVar15);
      bVar20 = ((cVar5 + '*') - (char)*piVar9) - CARRY1(bVar4,bVar8);
      pbVar11 = (byte *)CONCAT31(uVar17,bVar20);
      *pbVar15 = *pbVar15 + bVar8;
      uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar25 = SUB41(unaff_EBX,0);
      cVar5 = (char)((uint)unaff_EBX >> 8) - unaff_ESI[0x1f];
      unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar5,uVar25));
      *pbVar11 = *pbVar11 + bVar20;
      bVar7 = *pbVar15;
      bVar4 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar20;
      unaff_ESI = unaff_ESI + ((4 - *(int *)pbVar11) - (uint)CARRY1(bVar4,bVar20));
      pbVar11 = (byte *)CONCAT31(uVar17,bVar20);
      s = (byte *)(CONCAT22((short)((uint)s >> 0x10),CONCAT11((byte)((uint)s >> 8) | bVar7,bVar8)) +
                  -1);
      bVar4 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar20;
      bVar4 = (bVar20 - *pbVar11) - CARRY1(bVar4,bVar20);
      *s = *s + (char)pbVar15;
      bVar27 = CARRY1(bVar4,*pbVar15);
      bVar4 = bVar4 + *pbVar15;
      pbVar11 = (byte *)CONCAT31(uVar17,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar4;
        cVar6 = (bVar4 + 0x6f) - (0x90 < bVar4);
        pbVar10 = (byte *)CONCAT31(uVar17,cVar6);
        bVar4 = *pbVar15;
        *pbVar15 = *pbVar15 + (char)s;
        if (SCARRY1(bVar4,(char)s) == (char)*pbVar15 < '\0') goto code_r0x00403aaf;
        *pbVar10 = *pbVar10 + cVar6;
        pcVar13 = (char *)CONCAT31(uVar17,cVar6 + '\x02');
        bVar7 = cVar5 + unaff_EBX[0x52];
        unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar7,uVar25));
        *pcVar13 = *pcVar13 + cVar6 + '\x02';
        bVar4 = cVar6 + 4;
        pbVar10 = (byte *)CONCAT31(uVar17,bVar4);
        if ((POPCOUNT(bVar4) & 1U) == 0) {
          *pbVar10 = *pbVar10 + bVar4;
          cVar5 = (cVar6 + 's') - (0x90 < bVar4);
          pcVar13 = (char *)CONCAT31(uVar17,cVar5);
          bVar4 = (byte)((uint)s >> 8);
          bVar27 = CARRY1(*unaff_EBX,bVar4);
          *unaff_EBX = *unaff_EBX + bVar4;
          pbVar11 = unaff_ESI;
          if (bVar27) {
            *pcVar13 = *pcVar13 + cVar5;
            unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar7 | unaff_EBP[0x5c],uVar25));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar10;
        unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(bVar7 + unaff_EBX[0x52],uVar25));
code_r0x00403abf:
        *pbVar10 = *pbVar10 + (char)pbVar10;
        cVar5 = (char)pbVar10 + '\x02';
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
        bVar27 = (POPCOUNT(cVar5) & 1U) == 0;
        pbStack_10 = unaff_EBP;
        if (!bVar27) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar27) {
          *pbVar11 = *pbVar11 + (byte)pbVar11;
          bVar4 = (byte)pbVar11 | pbVar11[0x400005e];
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar4);
          pbStack_10 = unaff_EBP;
          if ((char)bVar4 < '\x01') goto code_r0x00403b0b;
          *pbVar10 = *pbVar10 + bVar4;
code_r0x00403aaf:
          cVar5 = (char)pbVar10 + '(';
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
          *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
          bVar4 = *unaff_EBX;
          bVar7 = (byte)((uint)s >> 8);
          *unaff_EBX = *unaff_EBX + bVar7;
          pbVar14 = unaff_EBP;
          if (!CARRY1(bVar4,bVar7)) goto code_r0x00403ad8;
          *pbVar10 = *pbVar10 + cVar5;
          s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar7 | *unaff_EBX,(char)s));
          if ((POPCOUNT(*pbVar15 - cVar5) & 1U) != 0) {
            *unaff_ESI = *unaff_ESI + cVar5;
            pbStack_10 = unaff_EBP;
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
      cVar5 = (bVar4 + 0x6f) - (0x90 < bVar4);
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar5);
      bVar4 = *unaff_EBX;
      cVar6 = (char)((uint)s >> 8);
      *unaff_EBX = *unaff_EBX + cVar6;
      pbStack_10 = unaff_EBP;
      if (*unaff_EBX == 0 || SCARRY1(bVar4,cVar6) != (char)*unaff_EBX < '\0') goto code_r0x00403b2c;
      *pcVar13 = *pcVar13 + cVar5;
    }
    else {
      pcVar13 = (char *)CONCAT31(uVar17,bVar4 + *pbVar15);
      pbVar11 = unaff_ESI;
      if ((POPCOUNT(bVar4 + *pbVar15) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         pbVar15 + (uint)(0xd2 < (byte)pcVar13) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar10 = unaff_EBP;
    pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 + 0x2d);
code_r0x00403ad8:
    pbStack_10 = pbVar14;
    bVar4 = *pbVar10;
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
    if (!CARRY1(bVar4,bVar7)) goto code_r0x00403afc;
    *pbVar10 = *pbVar10 + bVar7;
    bVar7 = bVar7 | pbVar10[0x400005d];
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
    pbVar11 = unaff_ESI;
    if ((char)bVar7 < '\x01') {
      *pbVar10 = *pbVar10 + bVar7;
      s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                           CONCAT11((byte)((uint)s >> 8) | *pbVar15,(char)s));
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                            (char)unaff_EBX));
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar10 = *pbVar10 + (char)pbVar10;
    cVar5 = (char)pbVar10 + '(';
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    bVar4 = *unaff_EBX;
    bVar7 = (byte)((uint)s >> 8);
    *unaff_EBX = *unaff_EBX + bVar7;
    unaff_ESI = pbVar11;
    if (!CARRY1(bVar4,bVar7)) goto code_r0x00403b0b;
    *pbVar10 = *pbVar10 + cVar5;
  }
  else {
    bVar4 = *pbVar15;
    *pbVar15 = *pbVar15 + (char)s;
    if (SCARRY1(bVar4,(char)s) == (char)*pbVar15 < '\0') {
      pbVar10 = unaff_EBP;
      pbVar14 = (byte *)(pcVar13 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '\x02');
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x54],
                                          (char)unaff_EBX));
    pbVar11 = unaff_ESI;
code_r0x00403a7d:
    cVar5 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar5;
    uVar17 = (undefined3)((uint)pcVar13 >> 8);
    cVar6 = cVar5 + '-';
    pbVar14 = (byte *)CONCAT31(uVar17,cVar6);
    pbVar10 = unaff_EBP;
    unaff_ESI = pbVar11;
    if ((POPCOUNT(cVar6 - *pbVar15) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar14 = *pbVar14 + cVar6;
    bVar4 = cVar5 + 0x2f;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      bVar4 = *pbVar15;
      *pbVar15 = *pbVar15 + (byte)s;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar4,(byte)s);
      pbVar10 = (byte *)CONCAT31(uVar17,cVar5 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar17,bVar4) = *(char *)CONCAT31(uVar17,bVar4) + bVar4;
    bVar27 = 0x90 < bVar4;
    pcVar13 = (char *)CONCAT31(uVar17,cVar5 + -0x62);
code_r0x00403a8f:
    uVar17 = (undefined3)((uint)pcVar13 >> 8);
    bVar7 = (char)pcVar13 - bVar27;
    pbVar10 = (byte *)CONCAT31(uVar17,bVar7);
    bVar4 = *unaff_EBX;
    cVar5 = (char)((uint)s >> 8);
    *unaff_EBX = *unaff_EBX + cVar5;
    pbStack_10 = unaff_EBP;
    unaff_ESI = pbVar11;
    if (*unaff_EBX != 0 && SCARRY1(bVar4,cVar5) == (char)*unaff_EBX < '\0') {
      *pbVar10 = *pbVar10 + bVar7;
      unaff_ESI = (byte *)CONCAT31(uVar17,bVar7 + 0x2d);
      *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
           pbVar15 + (uint)(0xd2 < bVar7) + *(int *)(pbVar11 + (int)unaff_EDI * 8);
      bVar27 = CARRY1(*pbVar11,(byte)pbVar11);
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      goto code_r0x00403aa1;
    }
  }
  s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11((byte)((uint)s >> 8) | *pbVar10,(char)s));
  *unaff_ESI = *unaff_ESI + (char)pbVar10;
code_r0x00403afc:
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar10 = *pbVar10 + (char)pbVar10;
  uVar17 = (undefined3)((uint)pbVar10 >> 8);
  bVar7 = (char)pbVar10 + 0x6f;
  bVar4 = *(byte *)CONCAT31(uVar17,bVar7);
  *pbVar15 = *pbVar15 + (char)s;
  pbVar10 = (byte *)CONCAT31(uVar17,(bVar7 & bVar4) + *unaff_ESI);
  *s = *s - (char)((uint)pbVar15 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar10 = *pbVar10 + (byte)pbVar10;
    bVar4 = (byte)pbVar10 | *unaff_EBX;
    piVar9 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar4);
    if (bVar4 != 0) {
      pbStack_10 = pbStack_10 + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar9 = (char)*piVar9 + bVar4;
      s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                           CONCAT11((byte)((uint)s >> 8) | *pbVar15,(char)s));
      pbStack_14 = pbStack_14 + *piVar9;
      pcVar13 = (char *)((int)piVar9 + *piVar9);
      uVar17 = (undefined3)((uint)pcVar13 >> 8);
      bVar7 = (char)pcVar13 - *pcVar13;
      pbVar11 = (byte *)CONCAT31(uVar17,bVar7);
      bVar4 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar7;
      piVar9 = (int *)CONCAT31(uVar17,bVar7 - CARRY1(bVar4,bVar7));
    }
    *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
    unaff_ESI = pbStack_14 + 4;
    out(*(undefined4 *)pbStack_14,(short)pbVar15);
    pbVar10 = (byte *)(((uint)piVar9 >> 8) * 0x100);
    *pbVar15 = *pbVar15 + (byte)s;
    bVar4 = (char)pbVar15 - *unaff_EBX;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar4);
    *unaff_EBX = *unaff_EBX;
    *pbVar15 = *pbVar15 + (char)((uint)s >> 8);
    *pbVar10 = *pbVar10;
    pcVar13 = (char *)(((uint)piVar9 >> 8) * 0x200);
    *pcVar13 = *pcVar13 + (char)unaff_EBX;
    bVar27 = CARRY1(*s,bVar4);
    *s = *s + bVar4;
    pbStack_14 = unaff_ESI;
    if (bVar27) break;
    while( true ) {
      *(byte **)pbVar10 = pbVar10 + (uint)bVar27 + *(int *)pbVar10;
      unaff_EDI = unaff_EDI + 4;
      pbVar10[(int)pbVar15] = pbVar10[(int)pbVar15] + (char)unaff_EBX;
      *pbVar10 = *pbVar10 + (char)pbVar10;
      *(byte **)pbStack_14 = unaff_EBX + *(int *)pbStack_14;
      bVar4 = (byte)((uint)s >> 8);
      cVar5 = (char)s;
      s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar4 + *pbVar10,cVar5));
      pbVar10 = pbVar10 + (uint)CARRY1(bVar4,*pbVar10) + *(int *)pbVar10;
      *pbVar15 = *pbVar15 + cVar5;
      cVar5 = (char)unaff_EBX - pbStack_14[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar5);
      unaff_ESI = pbStack_14;
      if ((POPCOUNT(cVar5) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar10 = *pbVar10 + (char)pbVar10;
      pbVar15[0x16060000] = pbVar15[0x16060000] - (char)s;
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
      cVar5 = (char)pbVar10 + '\x02';
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
      bVar27 = (POPCOUNT(cVar5) & 1U) == 0;
code_r0x00403b18:
      bVar4 = (byte)pbVar11;
      uVar17 = (undefined3)((uint)pbVar11 >> 8);
      if (!bVar27) {
        *pbVar15 = *pbVar15 + (char)s;
        pbVar10 = (byte *)CONCAT31(uVar17,bVar4 | *unaff_ESI);
code_r0x00403b73:
        pbVar11 = (byte *)(unaff_EDI + *(int *)(pbStack_10 + -0x37));
        *pbVar10 = *pbVar10 + (byte)pbVar10;
        uVar17 = (undefined3)((uint)pbVar10 >> 8);
        bVar4 = (byte)pbVar10 | *pbVar15;
        pcVar13 = (char *)CONCAT31(uVar17,bVar4);
        uVar28 = CONCAT44(pbVar15,pcVar13);
        if ((POPCOUNT(bVar4) & 1U) == 0) {
          *pcVar13 = *pcVar13 + bVar4;
          *unaff_ESI = *unaff_ESI + 1;
          return (byte *)CONCAT31(uVar17,bVar4 + 6);
        }
        bVar4 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + 1;
        pcVar1 = (code *)swi(4);
        if (SCARRY1(bVar4,'\x01')) {
          uVar28 = (*pcVar1)();
          s = extraout_ECX;
        }
        pbVar15 = (byte *)uVar28;
        *pbVar15 = *pbVar15 + (char)uVar28;
        cVar6 = (char)((ulonglong)uVar28 >> 0x20);
        puVar22 = (uint *)CONCAT22((short)((ulonglong)uVar28 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar28 >> 0x28) | unaff_EBX[0x2f],
                                            cVar6));
        *pbVar15 = *pbVar15 + (char)uVar28;
        cVar5 = (char)s;
        bVar20 = (byte)((uint)s >> 8) | *pbVar15;
        pbVar15 = pbVar15 + *(int *)pbVar15;
        bVar4 = *unaff_EBX;
        *unaff_EBX = *unaff_EBX + bVar20;
        bVar7 = (byte)pbVar15;
        if (CARRY1(bVar4,bVar20)) {
          *pbVar15 = *pbVar15 + bVar7;
          bVar20 = bVar20 | (byte)*puVar22;
          *unaff_EBX = *unaff_EBX - cVar6;
          *pbVar15 = *pbVar15 + bVar7;
          uVar17 = (undefined3)((uint)pbVar15 >> 8);
          bVar7 = bVar7 | (byte)*puVar22;
          piVar9 = (int *)CONCAT31(uVar17,bVar7);
          pbStack_10 = pbStack_10 + *piVar9;
          *(byte *)piVar9 = (char)*piVar9 + bVar7;
          cVar6 = (char)unaff_EBX - *unaff_ESI;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar6) + 0x5f),cVar6));
          *(byte *)piVar9 = (char)*piVar9 + bVar7;
          bVar4 = bVar7 + 0x2a & (byte)*puVar22;
          pbVar11 = pbVar11 + *(int *)(pbStack_10 + 0x5f);
          *(char *)CONCAT31(uVar17,bVar4) = *(char *)CONCAT31(uVar17,bVar4) + bVar4;
          pbVar15 = (byte *)CONCAT31(uVar17,bVar4 + 0x2a);
          *(byte *)puVar22 = (byte)*puVar22 + 0x28;
          *pbVar15 = *pbVar15 + bVar4 + 0x2a;
        }
        else {
          *unaff_ESI = *unaff_ESI + bVar7;
        }
        pcVar13 = (char *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar20,cVar5));
        *pbStack_10 = *pbStack_10 - bVar20;
        *(byte *)puVar22 = (byte)*puVar22 + cVar5;
        bVar4 = (byte)pbVar15 - 0xb;
        pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar4);
        if (10 < (byte)pbVar15) {
          *pbVar10 = *pbVar10 | bVar4;
          return pbVar10;
        }
        *(byte *)puVar22 = (byte)*puVar22 + cVar5;
        do {
          bVar4 = unaff_EBX[-0x23];
          bVar20 = (byte)pbVar10;
          *pbVar10 = *pbVar10 + bVar20;
          bVar7 = pbStack_10[-0x22];
          *pbVar10 = *pbVar10 + bVar20;
          uVar17 = (undefined3)((uint)pbVar10 >> 8);
          bVar20 = bVar20 | *unaff_ESI;
          pbVar15 = (byte *)CONCAT31(uVar17,bVar20);
          cVar6 = (char)unaff_EBX - *unaff_ESI;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                       CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4
                                                                | bVar7,(char)unaff_EBX)) >> 8),
                                       cVar6);
          cVar5 = (char)pcVar13;
          pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                     CONCAT11((char)((uint)pcVar13 >> 8) + *pbVar15,cVar5));
          *(byte *)puVar22 = (byte)*puVar22 + cVar5;
          bVar7 = bVar20 - *pbVar15;
          pbVar10 = (byte *)CONCAT31(uVar17,bVar7);
          unaff_ESI = unaff_ESI + (-(uint)(bVar20 < *pbVar15) - *(int *)pbVar10);
          puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 * '\x02');
          *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
          *pbVar11 = *pbVar11 + cVar6;
          bVar4 = *pbVar10;
          *pbVar10 = *pbVar10 + bVar7;
          *puVar22 = (uint)(pbVar10 + (uint)CARRY1(bVar4,bVar7) + *puVar22);
        } while ((POPCOUNT(*puVar22 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar10 = *pbVar10 + (char)pbVar10;
        pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | pbVar10[(int)pcVar13])
        ;
        bVar27 = false;
        pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
        do {
          pbVar11 = pbVar11 + (-(uint)bVar27 - *(int *)unaff_EBX);
          pcVar12 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),*pcVar13);
          *pcVar12 = *pcVar12 + *pcVar13;
          pbVar10 = (byte *)CONCAT31((int3)((uint)(pcVar12 +
                                                  (unaff_ESI[0x2000001] < (byte)((uint)pcVar13 >> 8)
                                                  ) + 0xda7d) >> 8),
                                     ((byte)(pcVar12 +
                                            (unaff_ESI[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                            0xda7d) | (byte)*puVar22) + 0x7d);
          pcVar13 = pcVar13 + -1;
          *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar13;
          while( true ) {
            uVar23 = (undefined3)((uint)puVar22 >> 8);
            cVar5 = (char)puVar22 + *(char *)((int)pbVar11 * 2 + 0xa0000e1);
            puVar22 = (uint *)CONCAT31(uVar23,cVar5);
            bVar27 = CARRY1((byte)pbVar10,(byte)*puVar22);
            uVar17 = (undefined3)((uint)pbVar10 >> 8);
            bVar4 = (byte)pbVar10 + (byte)*puVar22;
            pbVar10 = (byte *)CONCAT31(uVar17,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *pbVar10 = *pbVar10 + bVar4;
            cVar6 = (char)pcVar13;
            pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar13 >> 8) | pbVar11[-0x65],cVar6));
            bVar7 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar4;
            if (CARRY1(bVar7,bVar4)) {
              *pbVar10 = *pbVar10 + bVar4;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | pbStack_10[-0x1d]
                                                    ,(char)unaff_EBX));
              *pbVar10 = *pbVar10 + bVar4;
              bVar27 = false;
              bVar4 = bVar4 | (byte)*puVar22;
              pcVar12 = (char *)CONCAT31(uVar17,bVar4);
              while( true ) {
                bVar7 = (byte)pcVar12;
                uVar17 = (undefined3)((uint)pcVar12 >> 8);
                if (bVar27 == (char)bVar4 < '\0') break;
                *pcVar12 = *pcVar12 + bVar7;
                bVar7 = bVar7 | (byte)*puVar22;
                puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                *pbVar11 = *pbVar11 << 1 | (char)*pbVar11 < '\0';
                uVar3 = *puVar16;
                *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                pbStack_10 = pbStack_10 + (-(uint)CARRY1((byte)uVar3,bVar7) - *puVar16);
                *puVar16 = *puVar16 << 1 | (uint)((int)*puVar16 < 0);
                while( true ) {
                  uVar3 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22 + (byte)pcVar13;
                  cVar5 = (char)puVar16 + 'o' + CARRY1((byte)uVar3,(byte)pcVar13);
                  pcVar12 = (char *)CONCAT31((int3)((uint)puVar16 >> 8),cVar5);
                  pcVar13 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar5) & 1U) != 0) break;
                  *pcVar12 = *pcVar12 + cVar5;
                  bVar4 = bRamfe140212;
                  pcVar13 = (char *)0x0;
                  uVar17 = (undefined3)((uint)(pcVar12 + -0x732b0000) >> 8);
                  bVar7 = in(0);
                  puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                  uVar3 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22;
                  if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar22 < '\0') {
                    *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                    bVar7 = bVar7 | (byte)*puVar22;
                    puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                    if ((POPCOUNT(bVar7) & 1U) == 0) {
                      *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                      pcVar13 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar16) << 8);
                      *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                    puVar16 = (uint *)CONCAT31(uVar17,bVar7 | (byte)*puVar22);
                  }
                }
                *(byte *)puVar22 = (byte)*puVar22;
                bVar27 = SCARRY1((char)puVar22,*pbVar11);
                bVar4 = (char)puVar22 + *pbVar11;
                puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar4);
              }
              if (bVar27 == (char)bVar4 < '\0') {
                *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar13;
                pbVar10 = (byte *)((uint)pcVar12 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar12 = *pcVar12 + bVar7;
              pbVar10 = (byte *)CONCAT31(uVar17,(bVar7 | (byte)*puVar22) + 0x7d);
              pcVar13 = pcVar13 + -1;
              *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar13;
            }
            else {
              *(byte *)puVar22 = (byte)*puVar22 + cVar6;
              puVar22 = (uint *)CONCAT31(uVar23,cVar5 + *(char *)((int)pbVar11 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar11 = *pbVar11 + bVar4;
      bVar4 = bVar4 + 0x6f & *(byte *)CONCAT31(uVar17,bVar4 + 0x6f);
      *pbVar15 = *pbVar15 + (char)s;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
      pcVar13 = (char *)CONCAT31(uVar17,bVar4 - *unaff_EDI);
code_r0x00403b2c:
      bVar4 = (char)pcVar13 - *pcVar13;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar4);
      *pbVar10 = *pbVar10 + bVar4;
      *(byte **)pbVar10 = pbVar15 + *(int *)pbVar10;
      *pbVar10 = *pbVar10 + bVar4;
      bVar27 = CARRY1(*pbVar10,bVar4);
      *pbVar10 = *pbVar10 + bVar4;
      pbStack_14 = unaff_ESI;
    }
  }
  *pbVar10 = *pbVar10;
  s = (byte *)CONCAT31((int3)((uint)s >> 8),(byte)s | *pbVar15);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_10 = pbStack_10 + -*puVar16;
  do {
    bVar4 = (byte)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + bVar4;
    pbVar11 = pbVar11 + -*(int *)(pbStack_10 + -0x1a);
    *(byte *)puVar16 = (byte)*puVar16 + bVar4;
    bVar4 = bVar4 | (byte)*puVar22;
    puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar4);
    *(byte *)puVar16 = (byte)*puVar16 | bVar4;
    bVar4 = (byte)*puVar16;
    pbStack_10 = (byte *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar16 = (byte)*puVar16 + (byte)puVar16;
        bVar4 = (byte)puVar16 | (byte)*puVar22;
        puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
        uVar18 = CONCAT21((short)((uint)pcVar13 >> 0x10),(byte)((uint)pcVar13 >> 8) | bRamfe140212);
        while( true ) {
          pcVar13 = (char *)((uint)uVar18 << 8);
          bVar8 = (byte)puVar16;
          *(byte *)puVar16 = (byte)*puVar16 & bVar8;
          bVar20 = *unaff_EBX;
          bVar26 = (byte)uVar18;
          bVar7 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar26;
          bVar4 = *unaff_EBX;
          if (!CARRY1(bVar20,bVar26)) break;
          *(byte *)puVar16 = (byte)*puVar16 + bVar8;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar16 = (byte)*puVar16 + bVar8;
          bVar8 = bVar8 | (byte)*puVar22;
          puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar8);
          bVar27 = (POPCOUNT(bVar8) & 1U) == 0;
          while( true ) {
            cVar5 = (char)((uint)unaff_EBX >> 8);
            uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar27) {
              *(byte *)puVar22 = (byte)*puVar22;
              unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar5 + unaff_EBX[-0x1f],(char)unaff_EBX)
                                          );
              goto code_r0x00403d52;
            }
            *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
            uVar21 = (undefined2)((uint)pcVar13 >> 0x10);
            bVar7 = (byte)((uint)pcVar13 >> 8) | (byte)*puVar16;
            uVar18 = CONCAT21(uVar21,bVar7);
            *puVar16 = *puVar16 & (uint)puVar16;
            *unaff_EBX = *unaff_EBX + bVar7;
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            bVar4 = (char)puVar16 - bVar7;
            pcVar13 = (char *)CONCAT31(uVar17,bVar4);
            *pcVar13 = *pcVar13 + bVar4;
            bVar4 = bVar4 | (byte)*puVar22;
            puVar16 = (uint *)CONCAT31(uVar17,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar16 = (byte)*puVar16 + bVar4;
            pcVar13 = (char *)((uint)CONCAT21(uVar21,bVar7 | (byte)*puVar16) << 8);
            *puVar16 = *puVar16 - (int)puVar16;
            *(byte *)puVar22 = (byte)*puVar22;
            unaff_EBX = (byte *)CONCAT22(uVar19,CONCAT11(cVar5 + unaff_EBX[-0x1d],(char)unaff_EBX));
            do {
              *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
              uVar19 = (undefined2)((uint)puVar22 >> 0x10);
              cVar5 = (char)puVar22;
              bVar4 = (byte)((uint)puVar22 >> 8) | unaff_EBX[-0x17];
              puVar22 = (uint *)CONCAT22(uVar19,CONCAT11(bVar4,cVar5));
              *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar16 = (byte)*puVar16 + (byte)puVar16;
                uVar17 = (undefined3)((uint)puVar16 >> 8);
                bVar20 = (byte)puVar16 | (byte)*puVar22;
                pcVar12 = (char *)CONCAT31(uVar17,bVar20);
                bVar7 = unaff_EBX[-0x16];
                *pcVar12 = *pcVar12 + bVar20;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar12 = *pcVar12 + bVar20;
                pbVar15 = (byte *)CONCAT31(uVar17,bVar20 | (byte)*puVar22);
                while( true ) {
                  *pbVar15 = *pbVar15 + (byte)pbVar15;
                  uVar17 = (undefined3)((uint)pbVar15 >> 8);
                  bVar7 = (byte)pbVar15 | (byte)*puVar22;
                  puVar16 = (uint *)CONCAT31(uVar17,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) != 0) break;
                  *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                  bVar20 = pbVar11[-0x14];
                  *(byte *)puVar16 = (byte)*puVar16 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar22;
                  pcVar12 = (char *)CONCAT31(uVar17,bVar7);
                  bVar8 = unaff_EBX[-0x15];
                  *pcVar12 = *pcVar12 + bVar7;
                  pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),
                                                    (byte)((uint)pcVar13 >> 8) | bVar20 |
                                                    pbVar11[-0x13]) << 8);
                  *pcVar12 = *pcVar12 + bVar7;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar8 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar12 = *pcVar12 + bVar7;
                  pbVar15 = (byte *)CONCAT31(uVar17,bVar7 | (byte)*puVar22);
                  do {
                    do {
                      bVar20 = (byte)pbVar15;
                      *pbVar15 = *pbVar15 + bVar20;
                      cVar24 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar15,
                                                            cVar24));
                      *pbVar15 = bVar20;
                      *pbVar15 = *pbVar15 + bVar20;
                      cVar6 = (char)((uint)pcVar13 >> 8) + *pbVar15;
                      pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),cVar6) << 8);
                      uVar17 = (undefined3)((uint)pbVar15 >> 8);
                      bVar20 = bVar20 & *pbVar15;
                      pbVar15 = (byte *)CONCAT31(uVar17,bVar20);
                      bVar7 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar6;
                    } while (SCARRY1(bVar7,cVar6) == (char)*unaff_EBX < '\0');
                    *pbVar15 = *pbVar15 + bVar20;
                    bVar20 = bVar20 | (byte)*puVar22;
                    pbVar15 = (byte *)CONCAT31(uVar17,bVar20);
                    if ((POPCOUNT(bVar20) & 1U) == 0) {
                      *pbVar15 = *pbVar15 + bVar20;
                      *pbVar15 = *pbVar15 + bVar20;
                      cVar5 = cVar5 - bVar4;
                      pbVar10 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),cVar5);
                      *pbVar15 = *pbVar15 + bVar20;
                      bRam0312382b = bRam0312382b | *pbVar10;
                      while( true ) {
                        bVar7 = (byte)pbVar15;
                        *pbVar15 = *pbVar15 + bVar7;
                        bRam0312382b = bRam0312382b | (pbVar11 + 0x21b0000)[(int)pbVar15];
                        uVar17 = (undefined3)((uint)pbVar15 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar10 = *pbVar10 + bRam0312382b;
                        pbVar15 = (byte *)CONCAT31(uVar17,bVar7 | *unaff_ESI);
                      }
                      *pbVar15 = *pbVar15 + bVar7;
                      bVar7 = bVar7 | *unaff_ESI;
                      pcVar13 = (char *)CONCAT31(uVar17,bVar7);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar10);
                      *pcVar13 = *pcVar13 + bVar7;
                      uVar21 = CONCAT11(bVar4 | bRam6f0a002b,cVar5);
                      pcVar12 = (char *)CONCAT22(uVar19,uVar21);
                      *pcVar13 = *pcVar13 + bVar7;
                      *pcVar12 = *pcVar12 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar21);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar24 + *pcVar13);
                  } while (SCARRY1(cVar24,*pcVar13) != (char)(cVar24 + *pcVar13) < '\0');
                }
                uVar3 = *puVar22;
                *(byte *)puVar22 = (byte)*puVar22;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar22 < '\0');
              *(byte *)puVar22 = (byte)*puVar22;
              *pcVar13 = *pcVar13 - (char)unaff_EBX;
              *(byte *)puVar16 = (byte)*puVar16 + bVar7;
              bVar7 = bVar7 | (byte)*puVar22;
              puVar16 = (uint *)CONCAT31(uVar17,bVar7);
              bVar27 = (POPCOUNT(bVar7) & 1U) == 0;
            } while (bVar27);
          }
        }
      } while (SCARRY1(bVar7,bVar26));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar13 >> 8);
    *pbVar11 = *pbVar11 - (char)unaff_EBX;
  } while( true );
}


