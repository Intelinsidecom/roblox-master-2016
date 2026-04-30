/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004039ea
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(undefined4 serverInterface, byte * settingsTable)
 * Local Vars  : pbStack_4, pcVar1, uVar2, uVar3, cVar4, bVar5, bVar6, bVar7, in_EAX, pcVar8, pcVar9, piVar10, pbVar11, pbVar12, puVar13, uVar14, bVar15, pbVar16, extraout_ECX, pcVar17, bVar18, uVar19, uVar20, puVar21, uVar22, cVar23, cVar24, serverInterface, settingsTable, unaff_EBX, pbVar25, cVar26, unaff_EBP, unaff_ESI, unaff_EDI, pbVar27, in_ES, in_CS, bVar28, uVar29, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall _ctor(undefined4 serverInterface,byte *settingsTable)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 in_EAX;
  undefined3 uVar14;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint *puVar13;
  byte bVar15;
  byte bVar18;
  undefined2 uVar19;
  byte *pbVar16;
  byte *extraout_ECX;
  char *pcVar17;
  undefined2 uVar20;
  uint *puVar21;
  undefined3 uVar22;
  char cVar23;
  char cVar24;
  char cVar26;
  char *unaff_EBX;
  byte *pbVar25;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte *pbVar27;
  undefined2 in_ES;
  undefined2 in_CS;
  bool bVar28;
  undefined8 uVar29;
  undefined4 unaff_retaddr;
  byte *pbStack_4;
  
                    /* .NET CLR Managed Code */
  uVar14 = (undefined3)((uint)in_EAX >> 8);
  cVar4 = (char)in_EAX + *unaff_EBX;
  pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_CS);
  bVar5 = cVar4 + 0x2d;
  pcVar17 = (char *)CONCAT31(uVar14,bVar5);
  *pcVar17 = *pcVar17;
  bVar15 = (char)serverInterface - *settingsTable;
  cVar23 = (char)unaff_EBX - *unaff_ESI;
  cVar24 = unaff_EDI[0x17];
  uVar19 = (undefined2)((uint)serverInterface >> 0x10);
  *pcVar17 = *pcVar17 + bVar5;
  bVar18 = (char)((uint)serverInterface >> 8) + cVar24 | *settingsTable;
  pbVar16 = (byte *)CONCAT22(uVar19,CONCAT11(bVar18,bVar15));
  uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar26 = (char)((uint)unaff_EBX >> 8) +
           *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar23) + 0x4e);
  *pcVar17 = *pcVar17 + bVar5;
  pcVar17 = (char *)CONCAT31(uVar14,cVar4 + 'U');
  *pcVar17 = (*pcVar17 - (cVar4 + 'U')) - (0xd7 < bVar5);
  *settingsTable = *settingsTable + bVar15;
  bVar5 = cVar4 + 0x48;
  cVar26 = cVar26 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar26,cVar23)) + 0x4f);
  pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(cVar26,cVar23));
  *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
  pcVar8 = (char *)CONCAT31(uVar14,cVar4 + 'p');
  *pcVar8 = (*pcVar8 - (cVar4 + 'p')) - (0xd7 < bVar5);
  *settingsTable = *settingsTable + bVar15;
  pcVar9 = pcVar8 + -0x6b721c;
  pcVar17 = pcVar8 + -0x6b721a;
  cVar24 = (char)((uint)settingsTable >> 8);
  *pcVar17 = *pcVar17 + cVar24;
  if ((POPCOUNT(*pcVar17) & 1U) == 0) {
    cVar4 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar4;
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    bVar5 = cVar4 + 2;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
      piVar10 = (int *)CONCAT31(uVar14,cVar4 + '*');
      *piVar10 = (*piVar10 - (int)piVar10) - (uint)(0xd7 < bVar5);
      bVar5 = *settingsTable;
      *settingsTable = *settingsTable + bVar15;
      out(*(undefined4 *)unaff_ESI,(short)settingsTable);
      bVar6 = ((cVar4 + '*') - (char)*piVar10) - CARRY1(bVar5,bVar15);
      pbVar16 = (byte *)CONCAT31(uVar14,bVar6);
      *settingsTable = *settingsTable + bVar15;
      cVar26 = cVar26 - unaff_ESI[0x1f];
      pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(cVar26,cVar23));
      *pbVar16 = *pbVar16 + bVar6;
      bVar7 = *settingsTable;
      bVar5 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar6;
      unaff_ESI = unaff_ESI + ((4 - *(int *)pbVar16) - (uint)CARRY1(bVar5,bVar6));
      pbVar12 = (byte *)CONCAT31(uVar14,bVar6);
      pbVar16 = (byte *)(CONCAT22(uVar19,CONCAT11(bVar18 | bVar7,bVar15)) + -1);
      bVar5 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar6;
      bVar5 = (bVar6 - *pbVar12) - CARRY1(bVar5,bVar6);
      *pbVar16 = *pbVar16 + (char)settingsTable;
      bVar28 = CARRY1(bVar5,*settingsTable);
      bVar5 = bVar5 + *settingsTable;
      pbVar11 = (byte *)CONCAT31(uVar14,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar5;
        cVar4 = (bVar5 + 0x6f) - (0x90 < bVar5);
        pbVar12 = (byte *)CONCAT31(uVar14,cVar4);
        bVar5 = *settingsTable;
        *settingsTable = *settingsTable + (char)pbVar16;
        if (SCARRY1(bVar5,(char)pbVar16) == (char)*settingsTable < '\0') goto code_r0x00403aaf;
        *pbVar12 = *pbVar12 + cVar4;
        pcVar17 = (char *)CONCAT31(uVar14,cVar4 + '\x02');
        bVar15 = cVar26 + pbVar25[0x52];
        pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(bVar15,cVar23));
        *pcVar17 = *pcVar17 + cVar4 + '\x02';
        bVar5 = cVar4 + 4;
        pbVar12 = (byte *)CONCAT31(uVar14,bVar5);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pbVar12 = *pbVar12 + bVar5;
          cVar4 = (cVar4 + 's') - (0x90 < bVar5);
          pcVar9 = (char *)CONCAT31(uVar14,cVar4);
          bVar5 = (byte)((uint)pbVar16 >> 8);
          bVar28 = CARRY1(*pbVar25,bVar5);
          *pbVar25 = *pbVar25 + bVar5;
          pbVar11 = unaff_ESI;
          if (bVar28) {
            *pcVar9 = *pcVar9 + cVar4;
            pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(bVar15 | unaff_EBP[0x5c],cVar23));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = unaff_EDI + -*(int *)pbVar12;
        pbVar25 = (byte *)CONCAT22(uVar20,CONCAT11(bVar15 + pbVar25[0x52],cVar23));
code_r0x00403abf:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        cVar4 = (char)pbVar12 + '\x02';
        pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar4);
        bVar28 = (POPCOUNT(cVar4) & 1U) == 0;
        pbStack_4 = unaff_EBP;
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
          cVar4 = (char)pbVar12 + '(';
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar4);
          *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
          bVar5 = *pbVar25;
          bVar15 = (byte)((uint)pbVar16 >> 8);
          *pbVar25 = *pbVar25 + bVar15;
          pbVar27 = unaff_EBP;
          if (!CARRY1(bVar5,bVar15)) goto code_r0x00403ad8;
          *pbVar12 = *pbVar12 + cVar4;
          pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                     CONCAT11(bVar15 | *pbVar25,(char)pbVar16));
          if ((POPCOUNT(*settingsTable - cVar4) & 1U) != 0) {
            *unaff_ESI = *unaff_ESI + cVar4;
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
      cVar4 = (bVar5 + 0x6f) - (0x90 < bVar5);
      pcVar17 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar4);
      bVar5 = *pbVar25;
      cVar23 = (char)((uint)pbVar16 >> 8);
      *pbVar25 = *pbVar25 + cVar23;
      pbStack_4 = unaff_EBP;
      if (*pbVar25 == 0 || SCARRY1(bVar5,cVar23) != (char)*pbVar25 < '\0') goto code_r0x00403b2c;
      *pcVar17 = *pcVar17 + cVar4;
    }
    else {
      pcVar17 = (char *)CONCAT31(uVar14,bVar5 + *settingsTable);
      pbVar11 = unaff_ESI;
      if ((POPCOUNT(bVar5 + *settingsTable) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         settingsTable + (uint)(0xd2 < (byte)pcVar17) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar12 = unaff_EBP;
    pbVar27 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 + 0x2d);
code_r0x00403ad8:
    pbStack_4 = pbVar27;
    bVar5 = *pbVar12;
    bVar15 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar15;
    pbVar27 = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
    unaff_EBP = pbStack_4;
    if (CARRY1(bVar5,bVar15)) {
      *pbVar12 = *pbVar12 + bVar15;
      bVar15 = bVar15 | pbVar12[0x400005d];
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar15);
      pbVar11 = unaff_ESI;
      if ((char)bVar15 < '\x01') {
        *pbVar12 = *pbVar12 + bVar15;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar16 >> 8) | *settingsTable,
                                            (char)pbVar16));
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[-0x39],
                                            (char)pbVar25));
        goto code_r0x00403b4c;
      }
code_r0x00403ae7:
      *pbVar12 = *pbVar12 + (char)pbVar12;
      cVar4 = (char)pbVar12 + '(';
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar4);
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      bVar5 = *pbVar25;
      bVar15 = (byte)((uint)pbVar16 >> 8);
      *pbVar25 = *pbVar25 + bVar15;
      unaff_EBP = pbStack_4;
      unaff_ESI = pbVar11;
      if (!CARRY1(bVar5,bVar15)) goto code_r0x00403b0b;
      *pbVar12 = *pbVar12 + cVar4;
      goto code_r0x00403af3;
    }
  }
  else {
    bVar5 = *settingsTable;
    *settingsTable = *settingsTable + bVar15;
    if (SCARRY1(bVar5,bVar15) == (char)*settingsTable < '\0') {
      pbVar12 = unaff_EBP;
      pbVar27 = (byte *)(pcVar8 + -0x769862d);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar9 = *pcVar9 + (char)pcVar9;
    pcVar17 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + '\x02');
    pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                               CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[0x54],(char)pbVar25));
    pbVar11 = unaff_ESI;
code_r0x00403a7d:
    cVar4 = (char)pcVar17;
    *pcVar17 = *pcVar17 + cVar4;
    uVar14 = (undefined3)((uint)pcVar17 >> 8);
    cVar23 = cVar4 + '-';
    pbVar27 = (byte *)CONCAT31(uVar14,cVar23);
    pbVar12 = unaff_EBP;
    unaff_ESI = pbVar11;
    if ((POPCOUNT(cVar23 - *settingsTable) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar27 = *pbVar27 + cVar23;
    bVar5 = cVar4 + 0x2f;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      bVar5 = *settingsTable;
      *settingsTable = *settingsTable + (byte)pbVar16;
      *unaff_EBP = *unaff_EBP - CARRY1(bVar5,(byte)pbVar16);
      pbVar12 = (byte *)CONCAT31(uVar14,cVar4 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
    bVar28 = 0x90 < bVar5;
    pcVar9 = (char *)CONCAT31(uVar14,cVar4 + -0x62);
code_r0x00403a8f:
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    bVar15 = (char)pcVar9 - bVar28;
    pbVar12 = (byte *)CONCAT31(uVar14,bVar15);
    bVar5 = *pbVar25;
    cVar4 = (char)((uint)pbVar16 >> 8);
    *pbVar25 = *pbVar25 + cVar4;
    unaff_ESI = pbVar11;
    if (*pbVar25 != 0 && SCARRY1(bVar5,cVar4) == (char)*pbVar25 < '\0') {
      *pbVar12 = *pbVar12 + bVar15;
      unaff_ESI = (byte *)CONCAT31(uVar14,bVar15 + 0x2d);
      *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
           settingsTable + (uint)(0xd2 < bVar15) + *(int *)(pbVar11 + (int)unaff_EDI * 8);
      bVar28 = CARRY1(*pbVar11,(byte)pbVar11);
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      goto code_r0x00403aa1;
    }
code_r0x00403af3:
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11((byte)((uint)pbVar16 >> 8) | *pbVar12,(char)pbVar16));
    *unaff_ESI = *unaff_ESI + (char)pbVar12;
  }
  pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                             CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[0x55],(char)pbVar25));
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar14 = (undefined3)((uint)pbVar12 >> 8);
  bVar15 = (char)pbVar12 + 0x6f;
  bVar5 = *(byte *)CONCAT31(uVar14,bVar15);
  *settingsTable = *settingsTable + (char)pbVar16;
  pbVar12 = (byte *)CONCAT31(uVar14,(bVar15 & bVar5) + *unaff_ESI);
  *pbVar16 = *pbVar16 - cVar24;
code_r0x00403b0b:
  do {
    *pbVar12 = *pbVar12 + (char)pbVar12;
    settingsTable[0x16060000] = settingsTable[0x16060000] - (char)pbVar16;
    pbVar25 = (byte *)((uint)pbVar25 | (uint)unaff_ESI);
    cVar24 = (char)pbVar12 + '\x02';
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar24);
    bVar28 = (POPCOUNT(cVar24) & 1U) == 0;
    pbStack_4 = unaff_EBP;
code_r0x00403b18:
    bVar5 = (byte)pbVar11;
    uVar14 = (undefined3)((uint)pbVar11 >> 8);
    if (!bVar28) {
      *settingsTable = *settingsTable + (char)pbVar16;
      pbVar12 = (byte *)CONCAT31(uVar14,bVar5 | *unaff_ESI);
code_r0x00403b73:
      pbVar27 = (byte *)(unaff_EDI + *(int *)(pbStack_4 + -0x37));
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      uVar14 = (undefined3)((uint)pbVar12 >> 8);
      bVar5 = (byte)pbVar12 | *settingsTable;
      pcVar17 = (char *)CONCAT31(uVar14,bVar5);
      uVar29 = CONCAT44(settingsTable,pcVar17);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pcVar17 = *pcVar17 + bVar5;
        *unaff_ESI = *unaff_ESI + 1;
        return (byte *)CONCAT31(uVar14,bVar5 + 6);
      }
      bVar5 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar5,'\x01')) {
        uVar29 = (*pcVar1)();
        pbVar16 = extraout_ECX;
      }
      pbVar12 = (byte *)uVar29;
      *pbVar12 = *pbVar12 + (char)uVar29;
      cVar4 = (char)((ulonglong)uVar29 >> 0x20);
      puVar21 = (uint *)CONCAT22((short)((ulonglong)uVar29 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar29 >> 0x28) | pbVar25[0x2f],cVar4));
      *pbVar12 = *pbVar12 + (char)uVar29;
      cVar24 = (char)pbVar16;
      bVar18 = (byte)((uint)pbVar16 >> 8) | *pbVar12;
      pbVar12 = pbVar12 + *(int *)pbVar12;
      bVar5 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar18;
      bVar15 = (byte)pbVar12;
      if (CARRY1(bVar5,bVar18)) {
        *pbVar12 = *pbVar12 + bVar15;
        bVar18 = bVar18 | (byte)*puVar21;
        *pbVar25 = *pbVar25 - cVar4;
        *pbVar12 = *pbVar12 + bVar15;
        uVar14 = (undefined3)((uint)pbVar12 >> 8);
        bVar15 = bVar15 | (byte)*puVar21;
        piVar10 = (int *)CONCAT31(uVar14,bVar15);
        pbStack_4 = pbStack_4 + *piVar10;
        *(byte *)piVar10 = (char)*piVar10 + bVar15;
        cVar4 = (char)pbVar25 - *unaff_ESI;
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((char)((uint)pbVar25 >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)pbVar25 >> 8),cVar4) +
                                                     0x5f),cVar4));
        *(byte *)piVar10 = (char)*piVar10 + bVar15;
        bVar5 = bVar15 + 0x2a & (byte)*puVar21;
        pbVar27 = pbVar27 + *(int *)(pbStack_4 + 0x5f);
        *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
        pbVar12 = (byte *)CONCAT31(uVar14,bVar5 + 0x2a);
        *(byte *)puVar21 = (byte)*puVar21 + 0x28;
        *pbVar12 = *pbVar12 + bVar5 + 0x2a;
      }
      else {
        *unaff_ESI = *unaff_ESI + bVar15;
      }
      pcVar17 = (char *)CONCAT22((short)((uint)pbVar16 >> 0x10),CONCAT11(bVar18,cVar24));
      *pbStack_4 = *pbStack_4 - bVar18;
      *(byte *)puVar21 = (byte)*puVar21 + cVar24;
      bVar5 = (byte)pbVar12 - 0xb;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
      if (10 < (byte)pbVar12) {
        *pbVar16 = *pbVar16 | bVar5;
        return pbVar16;
      }
      *(byte *)puVar21 = (byte)*puVar21 + cVar24;
      do {
        bVar5 = pbVar25[-0x23];
        bVar18 = (byte)pbVar16;
        *pbVar16 = *pbVar16 + bVar18;
        bVar15 = pbStack_4[-0x22];
        *pbVar16 = *pbVar16 + bVar18;
        uVar14 = (undefined3)((uint)pbVar16 >> 8);
        bVar18 = bVar18 | *unaff_ESI;
        pbVar12 = (byte *)CONCAT31(uVar14,bVar18);
        cVar4 = (char)pbVar25 - *unaff_ESI;
        pbVar25 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar25 >> 0x10),
                                                   CONCAT11((char)((uint)pbVar25 >> 8) + bVar5 |
                                                            bVar15,(char)pbVar25)) >> 8),cVar4);
        cVar24 = (char)pcVar17;
        pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                   CONCAT11((char)((uint)pcVar17 >> 8) + *pbVar12,cVar24));
        *(byte *)puVar21 = (byte)*puVar21 + cVar24;
        bVar15 = bVar18 - *pbVar12;
        pbVar16 = (byte *)CONCAT31(uVar14,bVar15);
        unaff_ESI = unaff_ESI + (-(uint)(bVar18 < *pbVar12) - *(int *)pbVar16);
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 * '\x02');
        *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
        *pbVar27 = *pbVar27 + cVar4;
        bVar5 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar15;
        *puVar21 = (uint)(pbVar16 + (uint)CARRY1(bVar5,bVar15) + *puVar21);
      } while ((POPCOUNT(*puVar21 & 0xff) & 1U) != 0);
code_r0x00403cb7:
      *pbVar16 = *pbVar16 + (char)pbVar16;
      pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 | pbVar16[(int)pcVar17]);
      bVar28 = false;
      pbVar16 = (byte *)((uint)pbVar16 & 0xffffff00);
      do {
        pbVar27 = pbVar27 + (-(uint)bVar28 - *(int *)pbVar25);
        pcVar8 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),*pcVar17);
        *pcVar8 = *pcVar8 + *pcVar17;
        pbVar16 = (byte *)CONCAT31((int3)((uint)(pcVar8 + (unaff_ESI[0x2000001] <
                                                          (byte)((uint)pcVar17 >> 8)) + 0xda7d) >> 8
                                         ),((byte)(pcVar8 + (unaff_ESI[0x2000001] <
                                                            (byte)((uint)pcVar17 >> 8)) + 0xda7d) |
                                           (byte)*puVar21) + 0x7d);
        pcVar17 = pcVar17 + -1;
        *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar17;
        while( true ) {
          uVar22 = (undefined3)((uint)puVar21 >> 8);
          cVar24 = (char)puVar21 + *(char *)((int)pbVar27 * 2 + 0xa0000e1);
          puVar21 = (uint *)CONCAT31(uVar22,cVar24);
          bVar28 = CARRY1((byte)pbVar16,(byte)*puVar21);
          uVar14 = (undefined3)((uint)pbVar16 >> 8);
          bVar5 = (byte)pbVar16 + (byte)*puVar21;
          pbVar16 = (byte *)CONCAT31(uVar14,bVar5);
          if ((POPCOUNT(bVar5) & 1U) != 0) break;
          *pbVar16 = *pbVar16 + bVar5;
          cVar4 = (char)pcVar17;
          pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar17 >> 8) | pbVar27[-0x65],cVar4));
          bVar15 = *pbVar16;
          *pbVar16 = *pbVar16 + bVar5;
          if (CARRY1(bVar15,bVar5)) {
            *pbVar16 = *pbVar16 + bVar5;
            pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar25 >> 8) | pbStack_4[-0x1d],
                                                (char)pbVar25));
            *pbVar16 = *pbVar16 + bVar5;
            bVar28 = false;
            bVar5 = bVar5 | (byte)*puVar21;
            pcVar8 = (char *)CONCAT31(uVar14,bVar5);
            while( true ) {
              bVar15 = (byte)pcVar8;
              uVar14 = (undefined3)((uint)pcVar8 >> 8);
              if (bVar28 == (char)bVar5 < '\0') break;
              *pcVar8 = *pcVar8 + bVar15;
              bVar15 = bVar15 | (byte)*puVar21;
              puVar13 = (uint *)CONCAT31(uVar14,bVar15);
              *pbVar27 = *pbVar27 << 1 | (char)*pbVar27 < '\0';
              uVar3 = *puVar13;
              *(byte *)puVar13 = (byte)*puVar13 + bVar15;
              pbStack_4 = pbStack_4 + (-(uint)CARRY1((byte)uVar3,bVar15) - *puVar13);
              *puVar13 = *puVar13 << 1 | (uint)((int)*puVar13 < 0);
              while( true ) {
                uVar3 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21 + (byte)pcVar17;
                cVar24 = (char)puVar13 + 'o' + CARRY1((byte)uVar3,(byte)pcVar17);
                pcVar8 = (char *)CONCAT31((int3)((uint)puVar13 >> 8),cVar24);
                pcVar17 = (char *)0x20a0000;
                if ((POPCOUNT(cVar24) & 1U) != 0) break;
                *pcVar8 = *pcVar8 + cVar24;
                bVar5 = bRamfe140212;
                pcVar17 = (char *)0x0;
                uVar14 = (undefined3)((uint)(pcVar8 + -0x732b0000) >> 8);
                bVar15 = in(0);
                puVar13 = (uint *)CONCAT31(uVar14,bVar15);
                uVar3 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar21 < '\0') {
                  *(byte *)puVar13 = (byte)*puVar13 + bVar15;
                  bVar15 = bVar15 | (byte)*puVar21;
                  puVar13 = (uint *)CONCAT31(uVar14,bVar15);
                  if ((POPCOUNT(bVar15) & 1U) == 0) {
                    *(byte *)puVar13 = (byte)*puVar13 + bVar15;
                    pcVar17 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar5 | (byte)*puVar13) << 8);
                    *(byte *)puVar13 = (byte)*puVar13 + bVar15;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar13 = (byte)*puVar13 + bVar15;
                  puVar13 = (uint *)CONCAT31(uVar14,bVar15 | (byte)*puVar21);
                }
              }
              *(byte *)puVar21 = (byte)*puVar21;
              bVar28 = SCARRY1((char)puVar21,*pbVar27);
              bVar5 = (char)puVar21 + *pbVar27;
              puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar5);
            }
            if (bVar28 == (char)bVar5 < '\0') {
              *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar17;
              pbVar16 = (byte *)((uint)pcVar8 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar8 = *pcVar8 + bVar15;
            pbVar16 = (byte *)CONCAT31(uVar14,(bVar15 | (byte)*puVar21) + 0x7d);
            pcVar17 = pcVar17 + -1;
            *(byte *)puVar21 = (byte)*puVar21 + (char)pcVar17;
          }
          else {
            *(byte *)puVar21 = (byte)*puVar21 + cVar4;
            puVar21 = (uint *)CONCAT31(uVar22,cVar24 + *(char *)((int)pbVar27 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    *pbVar11 = *pbVar11 + bVar5;
    bVar5 = bVar5 + 0x6f & *(byte *)CONCAT31(uVar14,bVar5 + 0x6f);
    *settingsTable = *settingsTable + (char)pbVar16;
    settingsTable =
         (byte *)CONCAT31((int3)((uint)settingsTable >> 8),(char)settingsTable + *unaff_EDI);
    unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar5;
    pcVar17 = (char *)CONCAT31(uVar14,bVar5 - *unaff_EDI);
code_r0x00403b2c:
    bVar5 = (char)pcVar17 - *pcVar17;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar5);
    *pbVar12 = *pbVar12 + bVar5;
    *(byte **)pbVar12 = settingsTable + *(int *)pbVar12;
    *pbVar12 = *pbVar12 + bVar5;
    bVar28 = CARRY1(*pbVar12,bVar5);
    *pbVar12 = *pbVar12 + bVar5;
    pbVar27 = unaff_ESI;
    while( true ) {
      *(byte **)pbVar12 = pbVar12 + (uint)bVar28 + *(int *)pbVar12;
      unaff_EDI = unaff_EDI + 4;
      pbVar12[(int)settingsTable] = pbVar12[(int)settingsTable] + (char)pbVar25;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      *(byte **)pbVar27 = pbVar25 + *(int *)pbVar27;
      bVar5 = (byte)((uint)pbVar16 >> 8);
      cVar24 = (char)pbVar16;
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),CONCAT11(bVar5 + *pbVar12,cVar24));
      pbVar12 = pbVar12 + (uint)CARRY1(bVar5,*pbVar12) + *(int *)pbVar12;
      *settingsTable = *settingsTable + cVar24;
      cVar24 = (char)pbVar25 - pbVar27[2];
      pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar24);
      unaff_EBP = pbStack_4;
      unaff_ESI = pbVar27;
      if ((POPCOUNT(cVar24) & 1U) != 0) break;
code_r0x00403b4c:
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      bVar5 = (byte)pbVar12 | *pbVar25;
      piVar10 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
      if (bVar5 != 0) {
        pbStack_4 = pbStack_4 + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar10 = (char)*piVar10 + bVar5;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar16 >> 8) | *settingsTable,
                                            (char)pbVar16));
        pbVar27 = pbVar27 + *piVar10;
        pcVar17 = (char *)((int)piVar10 + *piVar10);
        uVar14 = (undefined3)((uint)pcVar17 >> 8);
        bVar15 = (char)pcVar17 - *pcVar17;
        pbVar12 = (byte *)CONCAT31(uVar14,bVar15);
        bVar5 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar15;
        piVar10 = (int *)CONCAT31(uVar14,bVar15 - CARRY1(bVar5,bVar15));
      }
      *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
      unaff_ESI = pbVar27 + 4;
      out(*(undefined4 *)pbVar27,(short)settingsTable);
      pbVar12 = (byte *)(((uint)piVar10 >> 8) * 0x100);
      *settingsTable = *settingsTable + (byte)pbVar16;
      bVar5 = (char)settingsTable - *pbVar25;
      settingsTable = (byte *)CONCAT31((int3)((uint)settingsTable >> 8),bVar5);
      *pbVar25 = *pbVar25;
      *settingsTable = *settingsTable + (char)((uint)pbVar16 >> 8);
      *pbVar12 = *pbVar12;
      pcVar17 = (char *)(((uint)piVar10 >> 8) * 0x200);
      *pcVar17 = *pcVar17 + (char)pbVar25;
      bVar28 = CARRY1(*pbVar16,bVar5);
      *pbVar16 = *pbVar16 + bVar5;
      pbVar27 = unaff_ESI;
      if (bVar28) {
        *pbVar12 = *pbVar12;
        pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | *settingsTable);
        goto code_r0x00403b73;
      }
    }
  } while( true );
code_r0x00403d33:
  pbStack_4 = pbStack_4 + -*puVar13;
  do {
    bVar5 = (byte)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    pbVar27 = pbVar27 + -*(int *)(pbStack_4 + -0x1a);
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    bVar5 = bVar5 | (byte)*puVar21;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar5);
    *(byte *)puVar13 = (byte)*puVar13 | bVar5;
    bVar5 = (byte)*puVar13;
    pbStack_4 = (byte *)0x2700001;
    while ((POPCOUNT(bVar5) & 1U) == 0) {
      do {
        *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar13;
        bVar5 = (byte)puVar13 | (byte)*puVar21;
        puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        uVar2 = CONCAT21((short)((uint)pcVar17 >> 0x10),(byte)((uint)pcVar17 >> 8) | bRamfe140212);
        while( true ) {
          pcVar17 = (char *)((uint)uVar2 << 8);
          bVar7 = (byte)puVar13;
          *(byte *)puVar13 = (byte)*puVar13 & bVar7;
          bVar18 = *pbVar25;
          bVar6 = (byte)uVar2;
          bVar15 = *pbVar25;
          *pbVar25 = *pbVar25 + bVar6;
          bVar5 = *pbVar25;
          if (!CARRY1(bVar18,bVar6)) break;
          *(byte *)puVar13 = (byte)*puVar13 + bVar7;
          pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar25 >> 8) | bRam026fffe2,
                                              (char)pbVar25));
          *(byte *)puVar13 = (byte)*puVar13 + bVar7;
          bVar7 = bVar7 | (byte)*puVar21;
          puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar7);
          bVar28 = (POPCOUNT(bVar7) & 1U) == 0;
          while( true ) {
            cVar24 = (char)((uint)pbVar25 >> 8);
            uVar19 = (undefined2)((uint)pbVar25 >> 0x10);
            if (!bVar28) {
              *(byte *)puVar21 = (byte)*puVar21;
              pbVar25 = (byte *)CONCAT22(uVar19,CONCAT11(cVar24 + pbVar25[-0x1f],(char)pbVar25));
              goto code_r0x00403d52;
            }
            *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
            uVar20 = (undefined2)((uint)pcVar17 >> 0x10);
            bVar15 = (byte)((uint)pcVar17 >> 8) | (byte)*puVar13;
            uVar2 = CONCAT21(uVar20,bVar15);
            *puVar13 = *puVar13 & (uint)puVar13;
            *pbVar25 = *pbVar25 + bVar15;
            uVar14 = (undefined3)((uint)puVar13 >> 8);
            bVar5 = (char)puVar13 - bVar15;
            pcVar17 = (char *)CONCAT31(uVar14,bVar5);
            *pcVar17 = *pcVar17 + bVar5;
            bVar5 = bVar5 | (byte)*puVar21;
            puVar13 = (uint *)CONCAT31(uVar14,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *(byte *)puVar13 = (byte)*puVar13 + bVar5;
            pcVar17 = (char *)((uint)CONCAT21(uVar20,bVar15 | (byte)*puVar13) << 8);
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
                bVar15 = pbVar25[-0x16];
                *pcVar8 = *pcVar8 + bVar18;
                pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                           CONCAT11((char)((uint)pbVar25 >> 8) + bVar15 |
                                                    bRam026fffec,(char)pbVar25));
                *pcVar8 = *pcVar8 + bVar18;
                pbVar16 = (byte *)CONCAT31(uVar14,bVar18 | (byte)*puVar21);
                while( true ) {
                  *pbVar16 = *pbVar16 + (byte)pbVar16;
                  uVar14 = (undefined3)((uint)pbVar16 >> 8);
                  bVar15 = (byte)pbVar16 | (byte)*puVar21;
                  puVar13 = (uint *)CONCAT31(uVar14,bVar15);
                  if ((POPCOUNT(bVar15) & 1U) != 0) break;
                  *(byte *)puVar13 = (byte)*puVar13 + bVar15;
                  bVar18 = pbVar27[-0x14];
                  *(byte *)puVar13 = (byte)*puVar13 + bVar15;
                  bVar15 = bVar15 | (byte)*puVar21;
                  pcVar8 = (char *)CONCAT31(uVar14,bVar15);
                  bVar7 = pbVar25[-0x15];
                  *pcVar8 = *pcVar8 + bVar15;
                  pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),
                                                    (byte)((uint)pcVar17 >> 8) | bVar18 |
                                                    pbVar27[-0x13]) << 8);
                  *pcVar8 = *pcVar8 + bVar15;
                  pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                             CONCAT11((char)((uint)pbVar25 >> 8) + bVar7 |
                                                      bRam026fffef,(char)pbVar25));
                  *pcVar8 = *pcVar8 + bVar15;
                  pbVar16 = (byte *)CONCAT31(uVar14,bVar15 | (byte)*puVar21);
                  do {
                    do {
                      bVar18 = (byte)pbVar16;
                      *pbVar16 = *pbVar16 + bVar18;
                      cVar23 = (char)pbVar25;
                      pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar25 >> 8) | *pbVar16,
                                                          cVar23));
                      *pbVar16 = bVar18;
                      *pbVar16 = *pbVar16 + bVar18;
                      cVar4 = (char)((uint)pcVar17 >> 8) + *pbVar16;
                      pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),cVar4) << 8);
                      uVar14 = (undefined3)((uint)pbVar16 >> 8);
                      bVar18 = bVar18 & *pbVar16;
                      pbVar16 = (byte *)CONCAT31(uVar14,bVar18);
                      bVar15 = *pbVar25;
                      *pbVar25 = *pbVar25 + cVar4;
                    } while (SCARRY1(bVar15,cVar4) == (char)*pbVar25 < '\0');
                    *pbVar16 = *pbVar16 + bVar18;
                    bVar18 = bVar18 | (byte)*puVar21;
                    pbVar16 = (byte *)CONCAT31(uVar14,bVar18);
                    if ((POPCOUNT(bVar18) & 1U) == 0) {
                      *pbVar16 = *pbVar16 + bVar18;
                      *pbVar16 = *pbVar16 + bVar18;
                      cVar24 = cVar24 - bVar5;
                      pbVar25 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),cVar24);
                      *pbVar16 = *pbVar16 + bVar18;
                      bRam0312382b = bRam0312382b | *pbVar25;
                      while( true ) {
                        bVar15 = (byte)pbVar16;
                        *pbVar16 = *pbVar16 + bVar15;
                        bRam0312382b = bRam0312382b | (pbVar27 + 0x21b0000)[(int)pbVar16];
                        uVar14 = (undefined3)((uint)pbVar16 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar25 = *pbVar25 + bRam0312382b;
                        pbVar16 = (byte *)CONCAT31(uVar14,bVar15 | *unaff_ESI);
                      }
                      *pbVar16 = *pbVar16 + bVar15;
                      bVar15 = bVar15 | *unaff_ESI;
                      pcVar17 = (char *)CONCAT31(uVar14,bVar15);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar25);
                      *pcVar17 = *pcVar17 + bVar15;
                      uVar20 = CONCAT11(bVar5 | bRam6f0a002b,cVar24);
                      pcVar8 = (char *)CONCAT22(uVar19,uVar20);
                      *pcVar17 = *pcVar17 + bVar15;
                      *pcVar8 = *pcVar8 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar20);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar23 + *pcVar17);
                  } while (SCARRY1(cVar23,*pcVar17) != (char)(cVar23 + *pcVar17) < '\0');
                }
                uVar3 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar21 < '\0');
              *(byte *)puVar21 = (byte)*puVar21;
              *pcVar17 = *pcVar17 - (char)pbVar25;
              *(byte *)puVar13 = (byte)*puVar13 + bVar15;
              bVar15 = bVar15 | (byte)*puVar21;
              puVar13 = (uint *)CONCAT31(uVar14,bVar15);
              bVar28 = (POPCOUNT(bVar15) & 1U) == 0;
            } while (bVar28);
          }
        }
      } while (SCARRY1(bVar15,bVar6));
    }
    *pbVar25 = *pbVar25 + (char)((uint)pcVar17 >> 8);
    *pbVar27 = *pbVar27 - (char)pbVar25;
  } while( true );
}


