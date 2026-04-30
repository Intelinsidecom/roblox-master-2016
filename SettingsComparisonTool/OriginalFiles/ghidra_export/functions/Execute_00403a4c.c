/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403a4c
 * Raw Name    : Execute
 * Demangled   : Execute
 * Prototype   : byte * Execute(byte * param_1, byte * param_2)
 * Local Vars  : pcVar1, uVar2, uVar3, bVar4, cVar5, cVar6, bVar7, in_EAX, pbVar8, pbVar9, piVar10, pcVar11, puVar12, uVar13, extraout_ECX, pcVar14, bVar15, bVar16, uVar17, puVar18, uVar19, uVar20, uVar21, cVar22, unaff_EBX, bVar23, unaff_EBP, unaff_ESI, unaff_EDI, pbVar24, in_ES, bVar25, param_1, uVar26, param_2, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall Execute(byte *param_1,byte *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  undefined4 in_EAX;
  undefined3 uVar13;
  byte *pbVar9;
  int *piVar10;
  char *pcVar11;
  uint *puVar12;
  byte bVar15;
  byte bVar16;
  byte *extraout_ECX;
  char *pcVar14;
  undefined2 uVar17;
  uint *puVar18;
  undefined3 uVar19;
  undefined2 uVar20;
  undefined1 uVar21;
  char cVar22;
  byte bVar23;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte *pbVar24;
  undefined2 in_ES;
  bool bVar25;
  undefined8 uVar26;
  byte *unaff_retaddr;
  byte *pbVar8;
  
                    /* .NET CLR Managed Code */
  bVar25 = CARRY1((byte)in_EAX,*param_2);
  uVar13 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = (byte)in_EAX + *param_2;
  pbVar9 = (byte *)CONCAT31(uVar13,bVar4);
  bVar7 = (byte)param_1;
  bVar15 = (byte)((uint)param_1 >> 8);
  pbVar24 = unaff_ESI;
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *pbVar9 = *pbVar9 + bVar4;
    cVar5 = (bVar4 + 0x6f) - (0x90 < bVar4);
    pbVar9 = (byte *)CONCAT31(uVar13,cVar5);
    bVar4 = *param_2;
    *param_2 = *param_2 + bVar7;
    if (SCARRY1(bVar4,bVar7) == (char)*param_2 < '\0') goto code_r0x00403aaf;
    *pbVar9 = *pbVar9 + cVar5;
    pcVar14 = (char *)CONCAT31(uVar13,cVar5 + '\x02');
    uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar21 = SUB41(unaff_EBX,0);
    bVar23 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x52];
    unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar23,uVar21));
    *pcVar14 = *pcVar14 + cVar5 + '\x02';
    bVar4 = cVar5 + 4;
    pbVar9 = (byte *)CONCAT31(uVar13,bVar4);
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      unaff_EDI = unaff_EDI + -*(int *)pbVar9;
      unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(bVar23 + unaff_EBX[0x52],uVar21));
      goto code_r0x00403abf;
    }
    *pbVar9 = *pbVar9 + bVar4;
    cVar5 = (cVar5 + 's') - (0x90 < bVar4);
    pcVar14 = (char *)CONCAT31(uVar13,cVar5);
    bVar25 = CARRY1(*unaff_EBX,bVar15);
    *unaff_EBX = *unaff_EBX + bVar15;
    if (bVar25) {
      *pcVar14 = *pcVar14 + cVar5;
      bVar4 = unaff_EBP[0x5c];
      *pcVar14 = *pcVar14 + cVar5;
      pcVar14 = (char *)CONCAT31(uVar13,cVar5 + '\x02');
      unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11((bVar23 | bVar4) +
                                                   *(char *)(CONCAT22(uVar20,CONCAT11(bVar23 | bVar4
                                                                                      ,uVar21)) +
                                                            0x54),uVar21));
      *pcVar14 = *pcVar14 + cVar5 + '\x02';
      cVar6 = cVar5 + '/';
      pbVar8 = (byte *)CONCAT31(uVar13,cVar6);
      pbVar9 = unaff_EBP;
      if ((POPCOUNT(cVar6 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar8 = *pbVar8 + cVar6;
      bVar4 = cVar5 + 0x31;
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
        bVar25 = 0x90 < bVar4;
        pcVar14 = (char *)CONCAT31(uVar13,cVar5 + -0x60);
        goto code_r0x00403a8f;
      }
      bVar4 = *param_2;
      *param_2 = *param_2 + bVar7;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar4,bVar7);
      pbVar9 = (byte *)CONCAT31(uVar13,cVar5 + -0x51);
      goto code_r0x00403ae7;
    }
code_r0x00403a8f:
    uVar13 = (undefined3)((uint)pcVar14 >> 8);
    bVar23 = (char)pcVar14 - bVar25;
    pbVar9 = (byte *)CONCAT31(uVar13,bVar23);
    bVar4 = *unaff_EBX;
    *unaff_EBX = *unaff_EBX + bVar15;
    if (*unaff_EBX != 0 && SCARRY1(bVar4,bVar15) == (char)*unaff_EBX < '\0') {
      *pbVar9 = *pbVar9 + bVar23;
      pbVar24 = (byte *)CONCAT31(uVar13,bVar23 + 0x2d);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar23) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      bVar25 = CARRY1(*unaff_ESI,(byte)unaff_ESI);
      *unaff_ESI = *unaff_ESI + (byte)unaff_ESI;
      pbVar9 = unaff_ESI;
      goto code_r0x00403aa1;
    }
code_r0x00403af3:
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | *pbVar9,(char)param_1));
    *pbVar24 = *pbVar24 + (char)pbVar9;
    unaff_ESI = pbVar24;
  }
  else {
code_r0x00403aa1:
    if (bVar25) {
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      bVar4 = (byte)pbVar9 | pbVar9[0x400005e];
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar4);
      if ((char)bVar4 < '\x01') goto code_r0x00403b0b;
      *pbVar9 = *pbVar9 + bVar4;
code_r0x00403aaf:
      cVar5 = (char)pbVar9 + '(';
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      bVar4 = *unaff_EBX;
      *unaff_EBX = *unaff_EBX + bVar15;
      pbVar8 = unaff_EBP;
      unaff_ESI = pbVar24;
      if (CARRY1(bVar4,bVar15)) {
        *pbVar9 = *pbVar9 + cVar5;
        param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11(bVar15 | *unaff_EBX,bVar7));
        if ((POPCOUNT(*param_2 - cVar5) & 1U) != 0) {
          *pbVar24 = *pbVar24 + cVar5;
          goto code_r0x00403b0b;
        }
code_r0x00403abf:
        *pbVar9 = *pbVar9 + (char)pbVar9;
        cVar5 = (char)pbVar9 + '\x02';
        pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
        bVar25 = (POPCOUNT(cVar5) & 1U) == 0;
        if (!bVar25) goto code_r0x00403b18;
        goto code_r0x00403ac5;
      }
    }
    else {
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x53],
                                            (char)unaff_EBX));
      unaff_ESI = pbVar24;
code_r0x00403ac5:
      bVar4 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar4;
      uVar13 = (undefined3)((uint)pbVar9 >> 8);
      bVar7 = (bVar4 + 0x6f) - (0x90 < bVar4);
      pcVar14 = (char *)CONCAT31(uVar13,bVar7);
      bVar4 = *unaff_EBX;
      cVar5 = (char)((uint)param_1 >> 8);
      *unaff_EBX = *unaff_EBX + cVar5;
      if (*unaff_EBX == 0 || SCARRY1(bVar4,cVar5) != (char)*unaff_EBX < '\0') goto code_r0x00403b2c;
      *pcVar14 = *pcVar14 + bVar7;
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar7) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      pbVar9 = unaff_EBP;
      pbVar8 = (byte *)CONCAT31(uVar13,bVar7 + 0x2d);
    }
code_r0x00403ad8:
    unaff_EBP = pbVar8;
    bVar4 = *pbVar9;
    bVar7 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar7;
    pbVar24 = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
    if (CARRY1(bVar4,bVar7)) {
      *pbVar9 = *pbVar9 + bVar7;
      bVar7 = bVar7 | pbVar9[0x400005d];
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar7);
      unaff_retaddr = unaff_EBP;
      if ((char)bVar7 < '\x01') {
        *pbVar9 = *pbVar9 + bVar7;
        param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x39],
                                              (char)unaff_EBX));
        goto code_r0x00403b4c;
      }
code_r0x00403ae7:
      pbVar24 = unaff_ESI;
      *pbVar9 = *pbVar9 + (char)pbVar9;
      cVar5 = (char)pbVar9 + '(';
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      bVar4 = *unaff_EBX;
      bVar7 = (byte)((uint)param_1 >> 8);
      *unaff_EBX = *unaff_EBX + bVar7;
      unaff_EBP = unaff_retaddr;
      if (!CARRY1(bVar4,bVar7)) goto code_r0x00403b0b;
      *pbVar9 = *pbVar9 + cVar5;
      goto code_r0x00403af3;
    }
  }
  pbVar24 = unaff_ESI;
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x55],
                                        (char)unaff_EBX));
  *pbVar9 = *pbVar9 + (char)pbVar9;
  uVar13 = (undefined3)((uint)pbVar9 >> 8);
  bVar7 = (char)pbVar9 + 0x6f;
  bVar4 = *(byte *)CONCAT31(uVar13,bVar7);
  *param_2 = *param_2 + (char)param_1;
  pbVar9 = (byte *)CONCAT31(uVar13,(bVar7 & bVar4) + *pbVar24);
  *param_1 = *param_1 - (char)((uint)param_2 >> 8);
code_r0x00403b0b:
  do {
    *pbVar9 = *pbVar9 + (char)pbVar9;
    param_2[0x16060000] = param_2[0x16060000] - (char)param_1;
    unaff_EBX = (byte *)((uint)unaff_EBX | (uint)pbVar24);
    cVar5 = (char)pbVar9 + '\x02';
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
    bVar25 = (POPCOUNT(cVar5) & 1U) == 0;
    unaff_ESI = pbVar24;
code_r0x00403b18:
    bVar4 = (byte)pbVar9;
    uVar13 = (undefined3)((uint)pbVar9 >> 8);
    if (!bVar25) {
      *param_2 = *param_2 + (char)param_1;
      pbVar9 = (byte *)CONCAT31(uVar13,bVar4 | *unaff_ESI);
code_r0x00403b73:
      pbVar24 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + -0x37));
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      uVar13 = (undefined3)((uint)pbVar9 >> 8);
      bVar4 = (byte)pbVar9 | *param_2;
      pcVar14 = (char *)CONCAT31(uVar13,bVar4);
      uVar26 = CONCAT44(param_2,pcVar14);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pcVar14 = *pcVar14 + bVar4;
        *unaff_ESI = *unaff_ESI + 1;
        return (byte *)CONCAT31(uVar13,bVar4 + 6);
      }
      bVar4 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar4,'\x01')) {
        uVar26 = (*pcVar1)();
        param_1 = extraout_ECX;
      }
      pbVar9 = (byte *)uVar26;
      *pbVar9 = *pbVar9 + (char)uVar26;
      cVar6 = (char)((ulonglong)uVar26 >> 0x20);
      puVar18 = (uint *)CONCAT22((short)((ulonglong)uVar26 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar26 >> 0x28) | unaff_EBX[0x2f],cVar6)
                                );
      *pbVar9 = *pbVar9 + (char)uVar26;
      cVar5 = (char)param_1;
      bVar15 = (byte)((uint)param_1 >> 8) | *pbVar9;
      pbVar9 = pbVar9 + *(int *)pbVar9;
      bVar4 = *unaff_EBX;
      *unaff_EBX = *unaff_EBX + bVar15;
      bVar7 = (byte)pbVar9;
      if (CARRY1(bVar4,bVar15)) {
        *pbVar9 = *pbVar9 + bVar7;
        bVar15 = bVar15 | (byte)*puVar18;
        *unaff_EBX = *unaff_EBX - cVar6;
        *pbVar9 = *pbVar9 + bVar7;
        uVar13 = (undefined3)((uint)pbVar9 >> 8);
        bVar7 = bVar7 | (byte)*puVar18;
        piVar10 = (int *)CONCAT31(uVar13,bVar7);
        unaff_EBP = unaff_EBP + *piVar10;
        *(byte *)piVar10 = (char)*piVar10 + bVar7;
        cVar6 = (char)unaff_EBX - *unaff_ESI;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6)
                                                       + 0x5f),cVar6));
        *(byte *)piVar10 = (char)*piVar10 + bVar7;
        bVar4 = bVar7 + 0x2a & (byte)*puVar18;
        pbVar24 = pbVar24 + *(int *)(unaff_EBP + 0x5f);
        *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
        pbVar9 = (byte *)CONCAT31(uVar13,bVar4 + 0x2a);
        *(byte *)puVar18 = (byte)*puVar18 + 0x28;
        *pbVar9 = *pbVar9 + bVar4 + 0x2a;
      }
      else {
        *unaff_ESI = *unaff_ESI + bVar7;
      }
      pcVar14 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar15,cVar5));
      *unaff_EBP = *unaff_EBP - bVar15;
      *(byte *)puVar18 = (byte)*puVar18 + cVar5;
      bVar4 = (byte)pbVar9 - 0xb;
      pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar4);
      if (10 < (byte)pbVar9) {
        *pbVar8 = *pbVar8 | bVar4;
        return pbVar8;
      }
      *(byte *)puVar18 = (byte)*puVar18 + cVar5;
      do {
        bVar4 = unaff_EBX[-0x23];
        bVar15 = (byte)pbVar8;
        *pbVar8 = *pbVar8 + bVar15;
        bVar7 = unaff_EBP[-0x22];
        *pbVar8 = *pbVar8 + bVar15;
        uVar13 = (undefined3)((uint)pbVar8 >> 8);
        bVar15 = bVar15 | *unaff_ESI;
        pbVar9 = (byte *)CONCAT31(uVar13,bVar15);
        cVar6 = (char)unaff_EBX - *unaff_ESI;
        unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                     CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                              bVar7,(char)unaff_EBX)) >> 8),cVar6);
        cVar5 = (char)pcVar14;
        pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                   CONCAT11((char)((uint)pcVar14 >> 8) + *pbVar9,cVar5));
        *(byte *)puVar18 = (byte)*puVar18 + cVar5;
        bVar7 = bVar15 - *pbVar9;
        pbVar8 = (byte *)CONCAT31(uVar13,bVar7);
        unaff_ESI = unaff_ESI + (-(uint)(bVar15 < *pbVar9) - *(int *)pbVar8);
        puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 * '\x02');
        *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
        *pbVar24 = *pbVar24 + cVar6;
        bVar4 = *pbVar8;
        *pbVar8 = *pbVar8 + bVar7;
        *puVar18 = (uint)(pbVar8 + (uint)CARRY1(bVar4,bVar7) + *puVar18);
      } while ((POPCOUNT(*puVar18 & 0xff) & 1U) != 0);
code_r0x00403cb7:
      *pbVar8 = *pbVar8 + (char)pbVar8;
      pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 | pbVar8[(int)pcVar14]);
      bVar25 = false;
      pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
      do {
        pbVar24 = pbVar24 + (-(uint)bVar25 - *(int *)unaff_EBX);
        pcVar11 = (char *)CONCAT31((int3)((uint)pbVar8 >> 8),*pcVar14);
        *pcVar11 = *pcVar11 + *pcVar14;
        pbVar8 = (byte *)CONCAT31((int3)((uint)(pcVar11 +
                                               (unaff_ESI[0x2000001] < (byte)((uint)pcVar14 >> 8)) +
                                               0xda7d) >> 8),
                                  ((byte)(pcVar11 +
                                         (unaff_ESI[0x2000001] < (byte)((uint)pcVar14 >> 8)) +
                                         0xda7d) | (byte)*puVar18) + 0x7d);
        pcVar14 = pcVar14 + -1;
        *(byte *)puVar18 = (byte)*puVar18 + (char)pcVar14;
        while( true ) {
          uVar19 = (undefined3)((uint)puVar18 >> 8);
          cVar5 = (char)puVar18 + *(char *)((int)pbVar24 * 2 + 0xa0000e1);
          puVar18 = (uint *)CONCAT31(uVar19,cVar5);
          bVar25 = CARRY1((byte)pbVar8,(byte)*puVar18);
          uVar13 = (undefined3)((uint)pbVar8 >> 8);
          bVar4 = (byte)pbVar8 + (byte)*puVar18;
          pbVar8 = (byte *)CONCAT31(uVar13,bVar4);
          if ((POPCOUNT(bVar4) & 1U) != 0) break;
          *pbVar8 = *pbVar8 + bVar4;
          cVar6 = (char)pcVar14;
          pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar14 >> 8) | pbVar24[-0x65],cVar6));
          bVar7 = *pbVar8;
          *pbVar8 = *pbVar8 + bVar4;
          if (CARRY1(bVar7,bVar4)) {
            *pbVar8 = *pbVar8 + bVar4;
            unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x1d],
                                                  (char)unaff_EBX));
            *pbVar8 = *pbVar8 + bVar4;
            bVar25 = false;
            bVar4 = bVar4 | (byte)*puVar18;
            pcVar11 = (char *)CONCAT31(uVar13,bVar4);
            while( true ) {
              bVar7 = (byte)pcVar11;
              uVar13 = (undefined3)((uint)pcVar11 >> 8);
              if (bVar25 == (char)bVar4 < '\0') break;
              *pcVar11 = *pcVar11 + bVar7;
              bVar7 = bVar7 | (byte)*puVar18;
              puVar12 = (uint *)CONCAT31(uVar13,bVar7);
              *pbVar24 = *pbVar24 << 1 | (char)*pbVar24 < '\0';
              uVar3 = *puVar12;
              *(byte *)puVar12 = (byte)*puVar12 + bVar7;
              unaff_EBP = unaff_EBP + (-(uint)CARRY1((byte)uVar3,bVar7) - *puVar12);
              *puVar12 = *puVar12 << 1 | (uint)((int)*puVar12 < 0);
              while( true ) {
                uVar3 = *puVar18;
                *(byte *)puVar18 = (byte)*puVar18 + (byte)pcVar14;
                cVar5 = (char)puVar12 + 'o' + CARRY1((byte)uVar3,(byte)pcVar14);
                pcVar11 = (char *)CONCAT31((int3)((uint)puVar12 >> 8),cVar5);
                pcVar14 = (char *)0x20a0000;
                if ((POPCOUNT(cVar5) & 1U) != 0) break;
                *pcVar11 = *pcVar11 + cVar5;
                bVar4 = bRamfe140212;
                pcVar14 = (char *)0x0;
                uVar13 = (undefined3)((uint)(pcVar11 + -0x732b0000) >> 8);
                bVar7 = in(0);
                puVar12 = (uint *)CONCAT31(uVar13,bVar7);
                uVar3 = *puVar18;
                *(byte *)puVar18 = (byte)*puVar18;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar18 < '\0') {
                  *(byte *)puVar12 = (byte)*puVar12 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar18;
                  puVar12 = (uint *)CONCAT31(uVar13,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) == 0) {
                    *(byte *)puVar12 = (byte)*puVar12 + bVar7;
                    pcVar14 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar12) << 8);
                    *(byte *)puVar12 = (byte)*puVar12 + bVar7;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar12 = (byte)*puVar12 + bVar7;
                  puVar12 = (uint *)CONCAT31(uVar13,bVar7 | (byte)*puVar18);
                }
              }
              *(byte *)puVar18 = (byte)*puVar18;
              bVar25 = SCARRY1((char)puVar18,*pbVar24);
              bVar4 = (char)puVar18 + *pbVar24;
              puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar4);
            }
            if (bVar25 == (char)bVar4 < '\0') {
              *(byte *)puVar18 = (byte)*puVar18 + (char)pcVar14;
              pbVar8 = (byte *)((uint)pcVar11 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar11 = *pcVar11 + bVar7;
            pbVar8 = (byte *)CONCAT31(uVar13,(bVar7 | (byte)*puVar18) + 0x7d);
            pcVar14 = pcVar14 + -1;
            *(byte *)puVar18 = (byte)*puVar18 + (char)pcVar14;
          }
          else {
            *(byte *)puVar18 = (byte)*puVar18 + cVar6;
            puVar18 = (uint *)CONCAT31(uVar19,cVar5 + *(char *)((int)pbVar24 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    *pbVar9 = *pbVar9 + bVar4;
    bVar4 = bVar4 + 0x6f & *(byte *)CONCAT31(uVar13,bVar4 + 0x6f);
    *param_2 = *param_2 + (char)param_1;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
    pcVar14 = (char *)CONCAT31(uVar13,bVar4 - *unaff_EDI);
code_r0x00403b2c:
    bVar4 = (char)pcVar14 - *pcVar14;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar4);
    *pbVar9 = *pbVar9 + bVar4;
    *(byte **)pbVar9 = param_2 + *(int *)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    bVar25 = CARRY1(*pbVar9,bVar4);
    *pbVar9 = *pbVar9 + bVar4;
    pbVar24 = unaff_ESI;
    while( true ) {
      *(byte **)pbVar9 = pbVar9 + (uint)bVar25 + *(int *)pbVar9;
      unaff_EDI = unaff_EDI + 4;
      pbVar9[(int)param_2] = pbVar9[(int)param_2] + (char)unaff_EBX;
      *pbVar9 = *pbVar9 + (char)pbVar9;
      *(byte **)pbVar24 = unaff_EBX + *(int *)pbVar24;
      bVar4 = (byte)((uint)param_1 >> 8);
      cVar5 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar4 + *pbVar9,cVar5));
      pbVar9 = pbVar9 + (uint)CARRY1(bVar4,*pbVar9) + *(int *)pbVar9;
      *param_2 = *param_2 + cVar5;
      cVar5 = (char)unaff_EBX - pbVar24[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) break;
code_r0x00403b4c:
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      bVar4 = (byte)pbVar9 | *unaff_EBX;
      piVar10 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar4);
      if (bVar4 != 0) {
        unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar10 = (char)*piVar10 + bVar4;
        param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
        pbVar24 = pbVar24 + *piVar10;
        pcVar14 = (char *)((int)piVar10 + *piVar10);
        uVar13 = (undefined3)((uint)pcVar14 >> 8);
        bVar7 = (char)pcVar14 - *pcVar14;
        pbVar9 = (byte *)CONCAT31(uVar13,bVar7);
        bVar4 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar7;
        piVar10 = (int *)CONCAT31(uVar13,bVar7 - CARRY1(bVar4,bVar7));
      }
      *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
      unaff_ESI = pbVar24 + 4;
      out(*(undefined4 *)pbVar24,(short)param_2);
      pbVar9 = (byte *)(((uint)piVar10 >> 8) * 0x100);
      *param_2 = *param_2 + (byte)param_1;
      bVar4 = (char)param_2 - *unaff_EBX;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar4);
      *unaff_EBX = *unaff_EBX;
      *param_2 = *param_2 + (char)((uint)param_1 >> 8);
      *pbVar9 = *pbVar9;
      pcVar14 = (char *)(((uint)piVar10 >> 8) * 0x200);
      *pcVar14 = *pcVar14 + (char)unaff_EBX;
      bVar25 = CARRY1(*param_1,bVar4);
      *param_1 = *param_1 + bVar4;
      pbVar24 = unaff_ESI;
      if (bVar25) {
        *pbVar9 = *pbVar9;
        param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *param_2);
        goto code_r0x00403b73;
      }
    }
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP + -*puVar12;
  do {
    bVar4 = (byte)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar4;
    pbVar24 = pbVar24 + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar12 = (byte)*puVar12 + bVar4;
    bVar4 = bVar4 | (byte)*puVar18;
    puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),bVar4);
    *(byte *)puVar12 = (byte)*puVar12 | bVar4;
    bVar4 = (byte)*puVar12;
    unaff_EBP = (byte *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar12 = (byte)*puVar12 + (byte)puVar12;
        bVar4 = (byte)puVar12 | (byte)*puVar18;
        puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
        uVar2 = CONCAT21((short)((uint)pcVar14 >> 0x10),(byte)((uint)pcVar14 >> 8) | bRamfe140212);
        while( true ) {
          pcVar14 = (char *)((uint)uVar2 << 8);
          bVar23 = (byte)puVar12;
          *(byte *)puVar12 = (byte)*puVar12 & bVar23;
          bVar15 = *unaff_EBX;
          bVar16 = (byte)uVar2;
          bVar7 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar16;
          bVar4 = *unaff_EBX;
          if (!CARRY1(bVar15,bVar16)) break;
          *(byte *)puVar12 = (byte)*puVar12 + bVar23;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar12 = (byte)*puVar12 + bVar23;
          bVar23 = bVar23 | (byte)*puVar18;
          puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),bVar23);
          bVar25 = (POPCOUNT(bVar23) & 1U) == 0;
          while( true ) {
            cVar5 = (char)((uint)unaff_EBX >> 8);
            uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar25) {
              *(byte *)puVar18 = (byte)*puVar18;
              unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(cVar5 + unaff_EBX[-0x1f],(char)unaff_EBX)
                                          );
              goto code_r0x00403d52;
            }
            *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
            uVar17 = (undefined2)((uint)pcVar14 >> 0x10);
            bVar7 = (byte)((uint)pcVar14 >> 8) | (byte)*puVar12;
            uVar2 = CONCAT21(uVar17,bVar7);
            *puVar12 = *puVar12 & (uint)puVar12;
            *unaff_EBX = *unaff_EBX + bVar7;
            uVar13 = (undefined3)((uint)puVar12 >> 8);
            bVar4 = (char)puVar12 - bVar7;
            pcVar14 = (char *)CONCAT31(uVar13,bVar4);
            *pcVar14 = *pcVar14 + bVar4;
            bVar4 = bVar4 | (byte)*puVar18;
            puVar12 = (uint *)CONCAT31(uVar13,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar12 = (byte)*puVar12 + bVar4;
            pcVar14 = (char *)((uint)CONCAT21(uVar17,bVar7 | (byte)*puVar12) << 8);
            *puVar12 = *puVar12 - (int)puVar12;
            *(byte *)puVar18 = (byte)*puVar18;
            unaff_EBX = (byte *)CONCAT22(uVar20,CONCAT11(cVar5 + unaff_EBX[-0x1d],(char)unaff_EBX));
            do {
              *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
              uVar20 = (undefined2)((uint)puVar18 >> 0x10);
              cVar5 = (char)puVar18;
              bVar4 = (byte)((uint)puVar18 >> 8) | unaff_EBX[-0x17];
              puVar18 = (uint *)CONCAT22(uVar20,CONCAT11(bVar4,cVar5));
              *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar12 = (byte)*puVar12 + (byte)puVar12;
                uVar13 = (undefined3)((uint)puVar12 >> 8);
                bVar15 = (byte)puVar12 | (byte)*puVar18;
                pcVar11 = (char *)CONCAT31(uVar13,bVar15);
                bVar7 = unaff_EBX[-0x16];
                *pcVar11 = *pcVar11 + bVar15;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar11 = *pcVar11 + bVar15;
                pbVar9 = (byte *)CONCAT31(uVar13,bVar15 | (byte)*puVar18);
                while( true ) {
                  *pbVar9 = *pbVar9 + (byte)pbVar9;
                  uVar13 = (undefined3)((uint)pbVar9 >> 8);
                  bVar7 = (byte)pbVar9 | (byte)*puVar18;
                  puVar12 = (uint *)CONCAT31(uVar13,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) != 0) break;
                  *(byte *)puVar12 = (byte)*puVar12 + bVar7;
                  bVar15 = pbVar24[-0x14];
                  *(byte *)puVar12 = (byte)*puVar12 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar18;
                  pcVar11 = (char *)CONCAT31(uVar13,bVar7);
                  bVar23 = unaff_EBX[-0x15];
                  *pcVar11 = *pcVar11 + bVar7;
                  pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),
                                                    (byte)((uint)pcVar14 >> 8) | bVar15 |
                                                    pbVar24[-0x13]) << 8);
                  *pcVar11 = *pcVar11 + bVar7;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar23 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar11 = *pcVar11 + bVar7;
                  pbVar9 = (byte *)CONCAT31(uVar13,bVar7 | (byte)*puVar18);
                  do {
                    do {
                      bVar15 = (byte)pbVar9;
                      *pbVar9 = *pbVar9 + bVar15;
                      cVar22 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar9,
                                                            cVar22));
                      *pbVar9 = bVar15;
                      *pbVar9 = *pbVar9 + bVar15;
                      cVar6 = (char)((uint)pcVar14 >> 8) + *pbVar9;
                      pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),cVar6) << 8);
                      uVar13 = (undefined3)((uint)pbVar9 >> 8);
                      bVar15 = bVar15 & *pbVar9;
                      pbVar9 = (byte *)CONCAT31(uVar13,bVar15);
                      bVar7 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar6;
                    } while (SCARRY1(bVar7,cVar6) == (char)*unaff_EBX < '\0');
                    *pbVar9 = *pbVar9 + bVar15;
                    bVar15 = bVar15 | (byte)*puVar18;
                    pbVar9 = (byte *)CONCAT31(uVar13,bVar15);
                    if ((POPCOUNT(bVar15) & 1U) == 0) {
                      *pbVar9 = *pbVar9 + bVar15;
                      *pbVar9 = *pbVar9 + bVar15;
                      cVar5 = cVar5 - bVar4;
                      pbVar8 = (byte *)CONCAT31((int3)((uint)puVar18 >> 8),cVar5);
                      *pbVar9 = *pbVar9 + bVar15;
                      bRam0312382b = bRam0312382b | *pbVar8;
                      while( true ) {
                        bVar7 = (byte)pbVar9;
                        *pbVar9 = *pbVar9 + bVar7;
                        bRam0312382b = bRam0312382b | (pbVar24 + 0x21b0000)[(int)pbVar9];
                        uVar13 = (undefined3)((uint)pbVar9 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar8 = *pbVar8 + bRam0312382b;
                        pbVar9 = (byte *)CONCAT31(uVar13,bVar7 | *unaff_ESI);
                      }
                      *pbVar9 = *pbVar9 + bVar7;
                      bVar7 = bVar7 | *unaff_ESI;
                      pcVar14 = (char *)CONCAT31(uVar13,bVar7);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar8);
                      *pcVar14 = *pcVar14 + bVar7;
                      uVar17 = CONCAT11(bVar4 | bRam6f0a002b,cVar5);
                      pcVar11 = (char *)CONCAT22(uVar20,uVar17);
                      *pcVar14 = *pcVar14 + bVar7;
                      *pcVar11 = *pcVar11 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar17);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar22 + *pcVar14);
                  } while (SCARRY1(cVar22,*pcVar14) != (char)(cVar22 + *pcVar14) < '\0');
                }
                uVar3 = *puVar18;
                *(byte *)puVar18 = (byte)*puVar18;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar18 < '\0');
              *(byte *)puVar18 = (byte)*puVar18;
              *pcVar14 = *pcVar14 - (char)unaff_EBX;
              *(byte *)puVar12 = (byte)*puVar12 + bVar7;
              bVar7 = bVar7 | (byte)*puVar18;
              puVar12 = (uint *)CONCAT31(uVar13,bVar7);
              bVar25 = (POPCOUNT(bVar7) & 1U) == 0;
            } while (bVar25);
          }
        }
      } while (SCARRY1(bVar7,bVar16));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar14 >> 8);
    *pbVar24 = *pbVar24 - (char)unaff_EBX;
  } while( true );
}


