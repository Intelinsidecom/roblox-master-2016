/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404ff6
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 extractOptions, char * aquirer)
 * Local Vars  : uStack_28, extractOptions, uStack_26, aquirer, uStack_27, uVar1, uStack_24, uVar3, uVar2, cVar5, cVar4, bVar7, bVar6, in_EAX, bVar8, pcVar10, uVar9, puVar12, piVar11, iVar14, pbVar13, puVar16, pcVar15, uVar18, puVar17, pbVar20, uVar19, iVar22, pcVar21, bVar24, uVar23, pbVar26, pbVar25, cVar28, iVar27, cVar29, unaff_EBX, unaff_ESI, unaff_EBP, unaff_EDI, pbVar30, in_DS, in_ES, in_AF, bVar31
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */

void __fastcall _ctor(undefined4 extractOptions,char *aquirer)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *in_EAX;
  uint uVar9;
  undefined3 uVar18;
  char *pcVar10;
  int *piVar11;
  uint *puVar12;
  byte *pbVar13;
  int iVar14;
  char *pcVar15;
  uint *puVar16;
  undefined3 uVar19;
  uint *puVar17;
  byte *pbVar20;
  char *pcVar21;
  undefined2 uVar23;
  int iVar22;
  byte bVar24;
  byte *pbVar25;
  byte *pbVar26;
  int iVar27;
  char cVar28;
  char cVar29;
  uint *unaff_EBX;
  char *unaff_EBP;
  char *unaff_ESI;
  byte *pbVar30;
  int *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar31;
  byte in_AF;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined2 uStack_24;
  
                    /* .NET CLR Managed Code */
  bVar24 = *in_EAX;
  bVar7 = (byte)((uint)extractOptions >> 8);
  bVar8 = (byte)extractOptions;
  pbVar20 = (byte *)CONCAT22((short)((uint)extractOptions >> 0x10),CONCAT11(bVar7 + *in_EAX,bVar8));
  iVar14 = *(int *)in_EAX;
  *aquirer = *aquirer + bVar8;
  cVar4 = (char)(in_EAX + (uint)CARRY1(bVar7,bVar24) + iVar14) + 'r';
  puVar12 = (uint *)CONCAT31((int3)((uint)(in_EAX + (uint)CARRY1(bVar7,bVar24) + iVar14) >> 8),cVar4
                            );
  bVar24 = (byte)aquirer;
  pbVar25 = (byte *)CONCAT22((short)((uint)aquirer >> 0x10),CONCAT11(10,bVar24));
  *(char *)(puVar12 + 10) = (char)puVar12[10] + '\n';
  *unaff_ESI = *unaff_ESI + cVar4;
  pbVar30 = (byte *)(unaff_ESI + *(int *)(pbVar25 + -0x5e));
  uVar9 = (uint)puVar12 | *puVar12;
  cVar4 = (char)uVar9;
  *pbVar30 = *pbVar30 + cVar4;
  uVar18 = (undefined3)(uVar9 >> 8);
  cVar5 = cVar4 + (char)*unaff_EBX;
  puVar12 = (uint *)CONCAT31(uVar18,cVar5);
  if (SCARRY1(cVar4,(char)*unaff_EBX) != cVar5 < '\0') {
    *(byte *)puVar12 = (byte)*puVar12 + cVar5;
    cVar4 = cVar5 + '\x7f';
    pbVar13 = (byte *)CONCAT31(uVar18,cVar4);
    pbVar25[(int)pbVar13] = pbVar25[(int)pbVar13] + cVar4;
    pbVar25[0x280a0000] = pbVar25[0x280a0000] - (char)(uVar9 >> 8);
    *pbVar13 = *pbVar13 << (bVar8 & 7) | *pbVar13 >> 8 - (bVar8 & 7);
    *pbVar30 = *pbVar30 + cVar4;
    cVar28 = (char)unaff_EBX - *pbVar30;
    uVar23 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar29 = (char)((uint)unaff_EBX >> 8) +
             *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar28) + 0x7c);
    pcVar10 = (char *)CONCAT22(uVar23,CONCAT11(cVar29,cVar28));
    *pbVar13 = *pbVar13 + cVar4;
    bVar6 = cVar5 + 0xa9U & *pbVar25;
    unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x7c));
    *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
    bVar6 = bVar6 + 0x2a;
    pbVar13 = (byte *)CONCAT31(uVar18,bVar6);
    *pbVar13 = *pbVar13 + bVar6;
    *pcVar10 = *pcVar10 + cVar28;
    *pbVar25 = *pbVar25 ^ bVar6;
    *pcVar10 = *pcVar10 + bVar6;
    bVar7 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    cVar4 = (bVar6 - *pbVar13) - CARRY1(bVar7,bVar6);
    *pbVar20 = *pbVar20 + bVar24;
    cVar29 = cVar29 + pcVar10[0x7b];
    *(char *)CONCAT31(uVar18,cVar4) = *(char *)CONCAT31(uVar18,cVar4) + cVar4;
    pcVar10 = (char *)CONCAT31(uVar18,cVar4 + 'o');
    *pcVar10 = *pcVar10 + cVar4 + 'o';
    pcVar10 = pcVar10 + 0x2ed7fde6;
    cVar5 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar5;
    cVar4 = *(char *)(CONCAT22(uVar23,CONCAT11(cVar29,cVar28)) + 0x7b);
    *pcVar10 = *pcVar10 + cVar5;
    piVar11 = (int *)(CONCAT31((int3)((uint)pcVar10 >> 8),cVar5 + 'o') + 0x6f060000);
    *piVar11 = *piVar11 + (int)piVar11;
    uVar19 = (undefined3)((uint)pbVar25 >> 8);
    bVar24 = bVar24 | *pbVar30;
    pbVar26 = (byte *)CONCAT31(uVar19,bVar24);
    uVar9 = CONCAT22(uVar23,CONCAT11(cVar29 + cVar4,cVar28)) | (uint)pbVar30;
    uVar18 = (undefined3)((uint)piVar11 >> 8);
    bVar7 = (byte)piVar11 | *pbVar26;
    pbVar13 = (byte *)CONCAT31(uVar18,bVar7);
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar8 - bVar24);
    *pbVar13 = *pbVar13 + bVar7;
    pbVar25 = pbVar30 + 4;
    out(*(undefined4 *)pbVar30,(short)pbVar26);
    *pbVar13 = bVar7;
    *pbVar26 = *pbVar26 + (bVar8 - bVar24);
    pbVar30 = pbVar30 + 8;
    out(*(undefined4 *)pbVar25,(short)pbVar26);
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    unaff_EBX = (uint *)(CONCAT31((int3)(uVar9 >> 8),(char)uVar9 + -10) | (uint)pbVar30);
    pbVar25 = (byte *)CONCAT31(uVar19,(bVar24 | *pbVar30) + (char)*unaff_EDI);
    cVar4 = bVar7 - (char)*unaff_EDI;
    puVar12 = (uint *)CONCAT31(uVar18,cVar4 - *(char *)CONCAT31(uVar18,cVar4));
  }
  *puVar12 = (uint)(pbVar25 + *puVar12);
  cVar4 = (char)puVar12;
  *(byte *)puVar12 = (byte)*puVar12 + cVar4;
  *(byte *)puVar12 = (byte)*puVar12 + cVar4;
  *(byte *)puVar12 = (byte)*puVar12 + cVar4;
  *(int *)pbVar20 = *(int *)pbVar20 - (int)unaff_EBP;
  bVar24 = *pbVar30;
  bVar8 = (byte)pbVar25;
  *pbVar30 = *pbVar30 + bVar8;
  *(byte *)puVar12 = (byte)*puVar12 + cVar4 + CARRY1(bVar24,bVar8);
  *pbVar20 = *pbVar20 + cVar4;
  uVar9 = *unaff_EBX;
  *(char *)unaff_EBX = (char)*unaff_EBX + 'r';
  *(char *)unaff_EBX = (char)*unaff_EBX;
  cVar4 = (char)((uint)pbVar25 >> 8);
  if (SCARRY1((char)uVar9,'r')) {
    pbVar30 = pbVar30 + *(int *)(pbVar25 + -10);
  }
  else {
    while( true ) {
      *pbVar30 = *pbVar30 + (char)puVar12;
      uVar18 = (undefined3)((uint)puVar12 >> 8);
      cVar5 = (char)puVar12 + (char)*unaff_EBX;
      pcVar10 = (char *)CONCAT31(uVar18,cVar5);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)((int)unaff_EBX + 0x7b),(char)unaff_EBX));
      *pcVar10 = *pcVar10 + cVar5;
      in_AF = 9 < (cVar5 + 0x6fU & 0xf) | in_AF;
      uVar9 = CONCAT31(uVar18,cVar5 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar9;
      piVar11 = (int *)CONCAT22((short)(uVar9 >> 0x10),
                                CONCAT11((char)((uint)puVar12 >> 8) + in_AF,bVar7));
      *piVar11 = *piVar11 + (int)piVar11;
      uVar18 = (undefined3)((uint)piVar11 >> 8);
      bVar7 = bVar7 | *(byte *)(piVar11 + 0x354a);
      bVar7 = bVar7 - *(char *)CONCAT31(uVar18,bVar7);
      pbVar13 = (byte *)CONCAT31(uVar18,bVar7);
      bVar24 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar7;
      pbVar30 = pbVar30 + (-(uint)CARRY1(bVar24,bVar7) - *(int *)pbVar13);
      puVar12 = (uint *)(pbVar13 + 0xfc00);
      *pbVar25 = *pbVar25 + cVar4;
      uVar9 = *puVar12;
      bVar24 = (byte)puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + bVar24;
      uVar2 = (uint)CARRY1((byte)uVar9,bVar24);
      uVar9 = *unaff_EBX;
      uVar1 = *unaff_EBX;
      *unaff_EBX = (uint)((byte *)(uVar1 + (int)puVar12) + uVar2);
      if (!CARRY4(uVar9,(uint)puVar12) && !CARRY4(uVar1 + (int)puVar12,uVar2)) break;
      *(byte *)puVar12 = (byte)*puVar12 + bVar24;
    }
  }
  uVar9 = (uint)puVar12 | *puVar12;
  uVar23 = SUB42(pbVar25,0);
  *pbVar30 = *pbVar30 + (char)uVar9;
  piVar11 = (int *)(uVar9 + 0xc1872);
  if (SCARRY4(uVar9,0xc1872)) {
    cVar5 = (char)piVar11;
    *(char *)piVar11 = *(char *)piVar11 + cVar5;
    *pbVar25 = *pbVar25 + cVar5;
    *(char *)piVar11 = *(char *)piVar11 + cVar5;
    *(char *)unaff_EBX = (char)*unaff_EBX + (char)pbVar20;
    *(char *)piVar11 = *(char *)piVar11 + cVar5;
    *(char *)((int)piVar11 * 2) = *(char *)((int)piVar11 * 2) + bVar8;
    pbVar13 = pbVar30;
    goto code_r0x00405117;
  }
  do {
    bVar24 = *pbVar30;
    bVar8 = (byte)piVar11;
    *pbVar30 = *pbVar30 + bVar8;
    if (CARRY1(bVar24,bVar8)) {
      *piVar11 = (int)(*piVar11 + (int)piVar11);
      uVar18 = (undefined3)((uint)pbVar20 >> 8);
      bVar24 = (byte)pbVar20 | bRam396f1609;
      *piVar11 = (int)(*piVar11 + (int)piVar11);
      pbVar20 = (byte *)CONCAT31(uVar18,bVar24 | *(byte *)CONCAT31(uVar18,bVar24));
      uVar18 = (undefined3)((uint)piVar11 >> 8);
      bVar8 = bVar8 | *pbVar25;
      pcVar10 = (char *)CONCAT31(uVar18,bVar8);
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        pbVar13 = pbVar30 + 4;
        out(*(undefined4 *)pbVar30,uVar23);
        uVar9 = CONCAT22((short)((uint)piVar11 >> 0x10),(ushort)bVar8);
        *pbVar13 = *pbVar13 + bVar8;
        pcVar10 = (char *)(uVar9 | 8);
        cVar5 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)unaff_EBX + 0x7a);
        puVar12 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar5,(char)unaff_EBX))
        ;
        *pcVar10 = *pcVar10 + (char)pcVar10;
        cVar4 = (char)pcVar10 + 'o';
        piVar11 = (int *)CONCAT31((int3)(uVar9 >> 8),cVar4);
        *(char *)piVar11 = (char)*piVar11 + cVar4;
        *pbVar20 = *pbVar20 + 1;
        pbVar30 = pbVar30 + 8;
        out(*(undefined4 *)pbVar13,uVar23);
        pbVar25 = (byte *)((uint)pbVar25 ^ uRam08122c04);
        iVar14 = CONCAT31((int3)((uint)(*piVar11 * 0x17070600) >> 8),2);
        *(char *)(iVar14 * 2) = *(char *)(iVar14 * 2) - cVar5;
        do {
          bVar24 = (byte)iVar14;
          *pbVar30 = *pbVar30 + bVar24;
          bVar31 = CARRY1(bVar24,(byte)*puVar12);
          uVar18 = (undefined3)((uint)iVar14 >> 8);
          cVar4 = bVar24 + (byte)*puVar12;
          pbVar13 = (byte *)CONCAT31(uVar18,cVar4);
          uVar23 = in_DS;
          uVar3 = uStack_24;
          if (SCARRY1(bVar24,(byte)*puVar12) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar13 = *pbVar13 + cVar4;
          uVar9 = CONCAT31(uVar18,cVar4 + '\'') + 0x1ebd9f3;
          uStack_28 = (undefined1)in_ES;
          uStack_27 = (undefined1)((ushort)in_ES >> 8);
          piVar11 = (int *)(uVar9 ^ 0x73060000);
          pbVar20 = pbVar20 + 1;
          *piVar11 = (int)(*piVar11 + (int)piVar11);
          puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                                     CONCAT11((byte)((uint)puVar12 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar12));
          cVar4 = (char)uVar9;
          *(char *)piVar11 = (char)*piVar11 + cVar4;
          uVar9 = CONCAT31((int3)((uint)piVar11 >> 8),cVar4 + '\x02');
          bVar31 = 0xd9f2d2da < uVar9;
          iVar14 = uVar9 + 0x260d2d25;
          pcVar10 = unaff_EBP;
          do {
            uVar18 = (undefined3)((uint)iVar14 >> 8);
            bVar8 = (char)iVar14 + -2 + bVar31;
            pbVar13 = (byte *)CONCAT31(uVar18,bVar8);
            bVar24 = *pbVar13;
            *pbVar13 = *pbVar13 + bVar8;
            bVar7 = (byte)puVar12;
            uStack_24 = in_ES;
            if (CARRY1(bVar24,bVar8)) {
              *pbVar13 = *pbVar13 + bVar8;
              puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                                         CONCAT11((byte)((uint)puVar12 >> 8) | pcVar10[0x7f],bVar7))
              ;
              *pbVar13 = *pbVar13 + bVar8;
              pbVar13 = (byte *)CONCAT31(uVar18,bVar8 + 0x2a);
              *pbVar13 = *pbVar13 + bVar8 + 0x2a;
              *(byte *)puVar12 = (byte)*puVar12 + (char)pbVar25;
              uVar23 = in_DS;
              while( true ) {
                in_DS = uVar23;
                bVar8 = (byte)pbVar13;
                *pbVar25 = *pbVar25 ^ bVar8;
                *pbVar25 = *pbVar25 + (char)puVar12;
                *pbVar13 = *pbVar13 + bVar8;
                *(byte *)puVar12 = (byte)*puVar12 + (char)((uint)pbVar25 >> 8);
                bVar24 = *pbVar13;
                *pbVar13 = *pbVar13 + bVar8;
                uVar9 = *puVar12;
                uVar1 = *puVar12;
                *puVar12 = (uint)(pbVar13 + uVar1 + CARRY1(bVar24,bVar8));
                uVar18 = (undefined3)((uint)pbVar13 >> 8);
                if (CARRY4(uVar9,(uint)pbVar13) ||
                    CARRY4((uint)(pbVar13 + uVar1),(uint)CARRY1(bVar24,bVar8))) break;
                *pbVar30 = *pbVar30 + bVar8;
                pcVar21 = (char *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                           CONCAT11((char)((uint)pbVar20 >> 8) + *pbVar13,
                                                    (char)pbVar20));
                *pbVar30 = *pbVar30 + bVar8;
                piVar11 = (int *)CONCAT31(uVar18,bVar8 | (byte)*puVar12);
                pbVar20 = pbVar30;
                while( true ) {
                  pbVar30 = pbVar20 + 4;
                  out(*(undefined4 *)pbVar20,(short)pbVar25);
                  pbVar25 = pbVar25 + 1;
                  *piVar11 = (int)(*piVar11 + (int)piVar11);
                  bVar8 = (byte)((uint)pcVar21 >> 8) | *pbVar25;
                  uVar18 = (undefined3)((uint)piVar11 >> 8);
                  bVar24 = (byte)piVar11 ^ *pbVar25;
                  pcVar15 = (char *)CONCAT31(uVar18,bVar24);
                  cRam282b0000 = cRam282b0000 - bVar8;
                  *pcVar15 = *pcVar15 + bVar24;
                  unaff_EBP = pcVar10 + -*(int *)pbVar25;
                  uStack_28 = (undefined1)in_DS;
                  uStack_27 = (undefined1)((ushort)in_DS >> 8);
                  cVar4 = *(char *)((int)unaff_EDI + 0x17);
                  *pcVar15 = *pcVar15 + bVar24;
                  pbVar20 = (byte *)CONCAT22((short)((uint)pcVar21 >> 0x10),
                                             CONCAT11(bVar8 + cVar4 | *pbVar25,(char)pcVar21));
                  *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
                  *(byte *)((int)pcVar15 * 2) = *(byte *)((int)pcVar15 * 2) ^ bVar24;
                  in_AF = 9 < (bVar24 & 0xf) | in_AF;
                  bVar24 = bVar24 + in_AF * -6;
                  pbVar13 = (byte *)CONCAT31(uVar18,bVar24 + (0x9f < bVar24 | in_AF * (bVar24 < 6))
                                                             * -0x60);
                  *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
                  *(char *)((int)pbVar13 * 2) =
                       *(char *)((int)pbVar13 * 2) + (char)((uint)pbVar25 >> 8);
                  bVar31 = CARRY1(*pbVar20,(byte)pbVar25);
                  *pbVar20 = *pbVar20 + (byte)pbVar25;
                  uVar23 = in_DS;
                  uVar3 = in_ES;
GenerateStatusText:
                  in_DS = uVar3;
                  pcVar10 = unaff_EBP;
                  uStack_24 = in_DS;
                  if (!bVar31) break;
                  *pbVar13 = *pbVar13 + (char)pbVar13;
                  iVar14 = CONCAT31((int3)((uint)pbVar20 >> 8),(byte)pbVar20 | *pbVar25);
                  uVar23 = (undefined2)((uint)puVar12 >> 0x10);
                  cVar28 = (char)((uint)puVar12 >> 8) + *(byte *)((int)puVar12 + 0x7d);
                  *pbVar13 = *pbVar13 + (char)pbVar13;
                  *(char *)unaff_EDI = (char)*unaff_EDI - (char)((uint)pbVar20 >> 8);
                  iVar14 = iVar14 - *(int *)(iVar14 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar23,CONCAT11(cVar28,(char)puVar12)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar30,(short)pbVar25);
                  pbVar25 = (byte *)CONCAT22(uStack_26,CONCAT11(uStack_27,uStack_28));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar20 = pbVar30 + 8;
                  out(*(undefined4 *)(pbVar30 + 4),CONCAT11(uStack_27,uStack_28));
                  pcVar10 = unaff_EBP + 1;
                  cVar5 = (char)iVar14;
                  pcVar21 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),
                                             CONCAT11((byte)((uint)iVar14 >> 8) |
                                                      *(byte *)((int)unaff_EDI + 0x46),cVar5));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_27,uStack_28);
                  uVar18 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar20,0xf0)) >> 8);
                  piVar11 = (int *)CONCAT31(uVar18,0x5f);
                  unaff_EDI = (int *)((int)unaff_EDI + 1);
                  *piVar11 = (int)(*piVar11 + (int)piVar11);
                  puVar12 = (uint *)CONCAT22(uVar23,CONCAT11(cVar28 + cVar4 | pbVar30[-0x78],
                                                             (char)puVar12));
                  *(char *)piVar11 = (char)*piVar11 + '_';
                  puVar16 = (uint *)CONCAT31(uVar18,0x8c);
                  *(byte **)(pbVar20 + (int)unaff_EDI * 8) =
                       pbVar25 + *(int *)(pbVar20 + (int)unaff_EDI * 8);
                  bVar24 = *pbVar20;
                  *pbVar20 = *pbVar20 + 0x8c;
                  if (bVar24 < 0x74) {
                    *pbVar25 = *pbVar25 + cVar5;
                    *(byte *)puVar12 = (byte)*puVar12 >> 1;
                    *(char *)puVar16 = (char)*puVar16 + -0x74;
                    *puVar16 = (uint)(pcVar10 + *puVar16);
                    *puVar16 = *puVar16 << 1 | (uint)((int)*puVar16 < 0);
                    *pbVar25 = *pbVar25 + cVar5;
                    unaff_EBP[2] = unaff_EBP[2] - cVar5;
                    *pbVar25 = *pbVar25 + cVar5;
                    pbVar30 = (byte *)CONCAT31(uVar18,0x83);
                    puVar16 = puVar12;
                    goto code_r0x00405312;
                  }
                  *puVar16 = (uint)(*puVar16 + (int)puVar16);
                  piVar11 = (int *)(CONCAT31(uVar18,(byte)puVar16[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar16[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar11 = (int *)((int)piVar11 + *(int *)pbVar20);
                }
              }
              *pbVar25 = *pbVar25 + bVar8;
              *(byte *)puVar12 = (byte)*puVar12 - (char)pbVar25;
              *pbVar13 = *pbVar13 + bVar8;
              pbVar13 = (byte *)CONCAT31(uVar18,bVar8 | (byte)*puVar12);
            }
            else {
              cVar4 = (char)pbVar20;
              *pbVar25 = *pbVar25 + cVar4;
              *(byte **)pbVar13 = pbVar25 + *(int *)pbVar13;
              *pbVar13 = *pbVar13 + bVar8;
              bVar8 = bVar8 + *pbVar13;
              pbVar13 = (byte *)CONCAT31(uVar18,bVar8);
              if (-1 < (char)bVar8) {
                *(byte *)puVar12 = (byte)*puVar12 + bVar7;
                out(*(undefined4 *)pbVar30,(short)pbVar25);
                pbVar25 = pbVar25 + 1;
                *pbVar13 = *pbVar13 + bVar8;
                puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),
                                           bVar7 | (byte)((uint)iVar14 >> 8));
                cVar5 = bVar8 - *pbVar20;
                pcVar21 = (char *)CONCAT31(uVar18,cVar5);
                *pcVar21 = *pcVar21 + cVar5 + (bVar8 < *pbVar20);
                *pbVar25 = *pbVar25 + cVar5;
                pcVar21 = (char *)((int)pcVar21 * 2 + 0x79);
                *pcVar21 = *pcVar21 + (char)((uint)pbVar25 >> 8);
                pbVar13 = (byte *)in((short)pbVar25);
                pbVar30 = pbVar30 + 4;
              }
              *pbVar30 = *pbVar30 + cVar4;
              *pbVar13 = *pbVar13 + (char)pbVar13;
              *pbVar13 = *pbVar13 + (char)pbVar13;
              uStack_28 = (undefined1)in_DS;
              uStack_27 = (undefined1)((ushort)in_DS >> 8);
              bVar24 = *pbVar13;
              bVar6 = (byte)((uint)pbVar20 >> 8);
              bVar7 = bVar6 + *pbVar13;
              iVar14 = *(int *)pbVar13;
              *pbVar25 = *pbVar25 + cVar4;
              bVar8 = (char)(pbVar13 + (uint)CARRY1(bVar6,bVar24) + iVar14) - (byte)*puVar12;
              pbVar13 = (byte *)CONCAT31((int3)((uint)(pbVar13 + (uint)CARRY1(bVar6,bVar24) + iVar14
                                                      ) >> 8),bVar8);
              *(byte *)puVar12 = (byte)*puVar12 ^ bVar8;
              *pcVar10 = *pcVar10 + (char)puVar12;
              *pbVar13 = *pbVar13 + bVar8;
              *pbVar13 = *pbVar13 + bVar8;
              *pbVar13 = *pbVar13 + bVar8;
              pbVar20 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                         CONCAT11(bVar7 + *pbVar13,cVar4));
              pbVar13 = pbVar13 + (uint)CARRY1(bVar7,*pbVar13) + *(int *)pbVar13;
              *pbVar25 = *pbVar25 + cVar4;
              pbVar30 = pbVar30 + *(int *)(pbVar25 + 0x3e);
            }
            *pbVar30 = *pbVar30 + (char)pbVar13;
            cVar4 = (char)pbVar13 + 'r';
            pbVar30 = pbVar30 + -1;
            uVar9 = CONCAT31((int3)((uint)pbVar13 >> 8),cVar4);
            *pbVar30 = *pbVar30 + cVar4;
            bVar31 = 0xfff38f8d < uVar9;
            iVar14 = uVar9 + 0xc7072;
            unaff_EBP = pcVar10;
          } while (SCARRY4(uVar9,0xc7072));
        } while( true );
      }
      *pcVar10 = *pcVar10 + bVar8;
      bVar8 = bVar8 + 0x6f;
      pbVar13 = (byte *)CONCAT31(uVar18,bVar8);
      bVar24 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar8;
      uVar18 = (undefined3)
               ((uint)(pbVar13 + (uint)CARRY1(bVar24,bVar8) + *(int *)(pbVar20 + (int)pbVar25)) >> 8
               );
      cVar5 = (char)(pbVar13 + (uint)CARRY1(bVar24,bVar8) + *(int *)(pbVar20 + (int)pbVar25)) + 'E';
      pcVar10 = (char *)CONCAT31(uVar18,cVar5);
      *pcVar10 = *pcVar10 + cVar5;
      cVar5 = cVar5 + *pcVar10;
      pcVar10 = (char *)CONCAT31(uVar18,cVar5);
      *pcVar10 = *pcVar10 + cVar5;
      puVar12 = (uint *)CONCAT31(uVar18,cVar5 + *pcVar10);
      *(char *)puVar12 = (char)*puVar12 + cVar5 + *pcVar10;
      pbVar13 = (byte *)((uint)puVar12 | *puVar12);
      bVar24 = *pbVar13;
      bVar8 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar8;
      piVar11 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar8 + CARRY1(bVar24,bVar8));
      pbVar13 = pbVar30;
code_r0x00405117:
      *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
      unaff_EBX = (uint *)((int)unaff_EBX - *unaff_EBX);
      pbVar30 = pbVar13 + 4;
      out(*(undefined4 *)pbVar13,uVar23);
    }
    *pbVar25 = *pbVar25 + (char)pbVar20;
    bVar31 = unaff_EBX < (uint *)*piVar11;
    unaff_EBX = (uint *)((int)unaff_EBX - *piVar11);
    bVar24 = (byte)((uint)pbVar20 >> 8);
    *(char *)((int)unaff_EDI + 0x39) = (*(char *)((int)unaff_EDI + 0x39) - bVar24) - bVar31;
    *piVar11 = (int)(*piVar11 + (int)piVar11);
    uVar9 = *unaff_EBX;
    *(int *)((int)unaff_EDI + 0x39) = *(int *)((int)unaff_EDI + 0x39) - (int)unaff_EBP;
    *piVar11 = (int)(*piVar11 + (int)piVar11);
    pbVar20 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                               CONCAT11(bVar24 | (byte)uVar9 | (byte)*unaff_EBX,(char)pbVar20));
    *(char *)(piVar11 + 10) = (char)piVar11[10] + cVar4;
  } while( true );
code_r0x004052ee:
  *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
  bVar24 = (char)piVar11 + 0x28;
  pbVar30 = (byte *)CONCAT31((int3)((uint)piVar11 >> 8),bVar24);
  *pbVar30 = *pbVar30 ^ bVar24;
  *(byte *)puVar12 = (byte)*puVar12 + (char)((uint)pcVar21 >> 8);
  bVar24 = *pbVar25;
  *pbVar25 = *pbVar25 + (byte)pcVar21;
  piVar11 = (int *)(((uint)pbVar30 | 0x1496f09) + *unaff_EDI + (uint)CARRY1(bVar24,(byte)pcVar21));
  pbVar13 = pbVar20 + 4;
  out(*(undefined4 *)pbVar20,(short)pbVar25);
  pbVar26 = pbVar25 + -1;
  *piVar11 = *piVar11 + (int)piVar11;
  pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(byte)pbVar26 | (byte)*puVar12);
  cVar4 = (char)piVar11 + '\x13';
  pbVar30 = (byte *)CONCAT31((int3)((uint)piVar11 >> 8),cVar4);
  puVar16 = puVar12;
  pbVar20 = pbVar13;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar25 = *pbVar25 - (char)((uint)pbVar26 >> 8);
    *pbVar30 = *pbVar30 + cVar4;
code_r0x00405396:
    bVar24 = *pbVar30;
    bVar8 = (byte)pbVar30;
    *pbVar30 = *pbVar30 + bVar8;
    *(byte **)pbVar13 = pbVar30 + (uint)CARRY1(bVar24,bVar8) + *(int *)pbVar13;
    out(*(undefined4 *)pbVar13,(short)pbVar25);
    *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
    *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
    pcVar10 = (char *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                               CONCAT11((byte)((uint)pbVar30 >> 8) | pbVar13[4],bVar8));
    *(int *)((int)unaff_EDI + -1) = (int)(pcVar10 + *(int *)((int)unaff_EDI + -1));
    out(*(undefined4 *)(pbVar13 + 4),(short)pbVar25);
    *pcVar10 = *pcVar10 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar30 = *pbVar30 + (char)pbVar30;
  piVar11 = (int *)CONCAT31((int3)((uint)pbVar30 >> 8),(char)pbVar30 + 'o');
  puVar12 = (uint *)((int)puVar16 + -1);
  *piVar11 = *piVar11 + (int)piVar11;
  uVar18 = (undefined3)((uint)pbVar25 >> 8);
  piVar11 = (int *)((int)piVar11 + 0x1b7e);
  bVar7 = (byte)pbVar25 | *(byte *)puVar12 | *(byte *)puVar12;
  iRam04115f2c = iRam04115f2c + (int)piVar11;
  out(*(undefined4 *)pbVar20,(short)CONCAT31(uVar18,bVar7));
  *piVar11 = *piVar11 + (int)piVar11;
  bVar7 = bVar7 | (byte)piVar11;
  iVar27 = CONCAT31(uVar18,bVar7);
  pbVar30 = (byte *)((int)piVar11 - *piVar11);
  cVar4 = (char)pbVar30;
  *pcVar21 = *pcVar21 + cVar4;
  cVar5 = (char)pcVar21 - bVar7;
  *pbVar30 = *pbVar30 + cVar4;
  uVar23 = (undefined2)((uint)pcVar21 >> 0x10);
  bVar8 = (byte)((uint)pcVar21 >> 8) | *pbVar30;
  pcVar10 = pcVar10 + -1;
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  bVar24 = *(byte *)(CONCAT22(uVar23,CONCAT11(bVar8,cVar5)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar30;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar10;
  *pbVar30 = *pbVar30 + cVar4;
  bVar24 = bVar8 | bVar24 | *(byte *)puVar12;
  iVar22 = CONCAT22(uVar23,CONCAT11(bVar24,cVar5));
  pbVar26 = (byte *)((uint)(pbVar20 + 4) ^ *(uint *)(iVar27 + -0x43));
  iVar14 = *(int *)pbVar30;
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  if (SCARRY4(iVar14,(int)pbVar30)) {
    *pbVar30 = *pbVar30 + cVar4;
  }
  pbVar25 = pbVar30 + 0x5674;
  unaff_EDI = (int *)((int)unaff_EDI +
                     (-(uint)((byte *)0xffffa98b < pbVar30) - *(int *)(pbVar26 + -0x7f)));
  bVar8 = (byte)pbVar25;
  *pbVar25 = *pbVar25 + bVar8;
  uVar19 = (undefined3)((uint)pbVar25 >> 8);
  bVar6 = bVar8 + 0x2d;
  piVar11 = (int *)CONCAT31(uVar19,bVar6);
  *(uint *)(pbVar26 + (int)unaff_EDI * 8) =
       *(int *)(pbVar26 + (int)unaff_EDI * 8) + iVar27 + (uint)(0xd2 < bVar8);
  bVar8 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar6;
  if (!CARRY1(bVar8,bVar6)) {
    do {
      pbVar25 = (byte *)(iVar27 + 1);
      bVar8 = (byte)piVar11;
      *(byte *)piVar11 = (char)*piVar11 + bVar8;
      bVar7 = (byte)((uint)piVar11 >> 8);
      bVar6 = (byte)puVar12 | bVar7;
      puVar16 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),bVar6);
      out(*(undefined4 *)pbVar26,(short)pbVar25);
      *(byte *)piVar11 = (char)*piVar11 + bVar8;
      uVar23 = (undefined2)((uint)iVar22 >> 0x10);
      cVar4 = (char)iVar22;
      pbVar30 = (byte *)CONCAT22(uVar23,CONCAT11((byte)((uint)iVar22 >> 8) | *pbVar25,cVar4));
      bVar24 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar8;
      *(byte *)piVar11 = (char)*piVar11 + bVar8 + CARRY1(bVar24,bVar8);
      *pbVar25 = *pbVar25 + bVar8;
      *(byte *)unaff_EDI = (char)*unaff_EDI + bVar7;
      *(int *)((int)piVar11 * 2) =
           *(int *)((int)piVar11 * 2) + CONCAT22(uVar23,CONCAT11(0x1c,cVar4));
      *(byte *)piVar11 = (char)*piVar11 + bVar8;
      cVar5 = (char)pbVar25;
      *(byte *)puVar16 = (byte)*puVar16 + cVar5;
      *(byte *)((int)piVar11 * 2) = *(byte *)((int)piVar11 * 2) ^ bVar8;
      *(byte *)piVar11 = (char)*piVar11 + bVar8;
      pbVar30 = pbVar26 + 8;
      out(*(undefined4 *)(pbVar26 + 4),(short)pbVar25);
      piVar11 = (int *)0xa0a0000;
      *pbVar25 = *pbVar25;
      bVar8 = cVar4 - cVar5;
      iVar22 = CONCAT22(uVar23,CONCAT11(*(byte *)(unaff_EDI + 0x14) | 0x1c | bRam0ca87216,bVar8));
      *pbVar25 = *pbVar25;
      bVar24 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar8;
      if (!CARRY1(bVar24,bVar8)) {
        piVar11 = (int *)0x1e7b7000;
        bVar24 = (byte)((uint)puVar12 >> 8) | *(byte *)(iVar27 + 3);
        puVar16 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),CONCAT11(bVar24,bVar6));
        if (bVar24 != 0) {
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar5 + pbVar30[(int)unaff_EDI * 8])
          ;
          piVar11 = (int *)0x6d7d7000;
          iVar22 = iVar22 + 1;
        }
      }
      *piVar11 = (int)(*piVar11 + (int)piVar11);
      iVar27 = CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 | pbVar30[(int)unaff_EDI * 8]);
      *(char *)piVar11 = (char)*piVar11;
      piVar11 = (int *)CONCAT31((int3)((uint)piVar11 >> 8),0xf9);
      *unaff_EDI = (int)((int)piVar11 + *unaff_EDI + 1);
      pbVar26 = pbVar26 + 0xc;
      out(*(undefined4 *)pbVar30,(short)iVar27);
      puVar12 = puVar16;
    } while( true );
  }
  *piVar11 = (int)(*piVar11 + (int)piVar11);
  bVar6 = bVar6 | *(byte *)((int)piVar11 + 0x4000081);
  piVar11 = (int *)CONCAT31(uVar19,bVar6);
  if ('\0' < (char)bVar6) {
    *(byte *)piVar11 = (char)*piVar11 + bVar6;
    puVar17 = (uint *)CONCAT31(uVar19,bVar6 + 0x28);
    *puVar17 = *puVar17 ^ (uint)puVar17;
    *(byte *)puVar12 = *(byte *)puVar12 + bVar24;
    cVar4 = (bVar6 + 0x28) - bVar24;
    pcVar10 = (char *)CONCAT31(uVar19,cVar4);
    *pcVar10 = *pcVar10 + cVar4;
    pbVar25 = (byte *)CONCAT31(uVar18,bVar7 | *(byte *)puVar12);
    pcVar21 = (char *)CONCAT22((short)((uint)puVar12 >> 0x10),
                               CONCAT11((char)((uint)puVar12 >> 8) + *(byte *)((int)puVar16 + 0x7d),
                                        (char)puVar12));
    *pcVar10 = *pcVar10 + cVar4;
    pbVar30 = (byte *)CONCAT31(uVar19,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar19,cVar4 + 0x39U));
    *pcVar21 = *pcVar21 + bVar24;
    pbVar13 = pbVar26 + 4;
    out(*(undefined4 *)pbVar26,(short)pbVar25);
    goto code_r0x00405396;
  }
  pbVar20 = pbVar26 + 4;
  out(*(undefined4 *)pbVar26,(short)iVar27);
  pcVar21 = (char *)(iVar22 + -1);
  *piVar11 = (int)(*piVar11 + (int)piVar11);
  pbVar25 = (byte *)CONCAT31(uVar18,bVar7 | *(byte *)puVar12);
  goto code_r0x004052ee;
}


