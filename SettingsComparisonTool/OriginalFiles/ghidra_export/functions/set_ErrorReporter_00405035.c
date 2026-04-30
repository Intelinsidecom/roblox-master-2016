/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00405035
 * Raw Name    : set_ErrorReporter
 * Demangled   : set_ErrorReporter
 * Prototype   : void set_ErrorReporter(byte * value, byte * param_2)
 * Local Vars  : uStack_28, uStack_26, uStack_27, uVar1, uStack_24, uVar3, value, uVar2, bVar5, cVar4, bVar7, bVar6, pcVar8, in_EAX, puVar10, piVar9, pbVar12, pbVar11, pcVar14, iVar13, puVar16, puVar15, uVar18, uVar17, iVar20, pcVar19, param_2, uVar22, bVar21, iVar24, pbVar23, uVar25, unaff_EBX, cVar27, cVar26, unaff_EBP, cVar28, pbVar29, unaff_ESI, unaff_EDI, pbVar30, in_DS, in_ES, in_AF, bVar31
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

void __fastcall set_ErrorReporter(byte *value,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 in_EAX;
  undefined3 uVar17;
  char *pcVar8;
  int *piVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  char *pcVar14;
  uint *puVar15;
  undefined3 uVar18;
  uint *puVar16;
  byte bVar21;
  char *pcVar19;
  undefined2 uVar22;
  int iVar20;
  byte *pbVar23;
  int iVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  uint *unaff_EBX;
  uint uVar25;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar29;
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
  uVar17 = (undefined3)((uint)in_EAX >> 8);
  cVar4 = (char)in_EAX + (char)*unaff_EBX;
  puVar10 = (uint *)CONCAT31(uVar17,cVar4);
  if (SCARRY1((char)in_EAX,(char)*unaff_EBX) != cVar4 < '\0') {
    *(byte *)puVar10 = (byte)*puVar10 + cVar4;
    bVar5 = cVar4 + 0x2a;
    pbVar11 = (byte *)CONCAT31(uVar17,bVar5);
    *pbVar11 = *pbVar11 + bVar5;
    cVar28 = (char)unaff_EBX;
    *(char *)unaff_EBX = (char)*unaff_EBX + cVar28;
    *param_2 = *param_2 ^ bVar5;
    *(byte *)unaff_EBX = (char)*unaff_EBX + bVar5;
    bVar6 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar5;
    cVar4 = (bVar5 - *pbVar11) - CARRY1(bVar6,bVar5);
    *value = *value + (byte)param_2;
    uVar22 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar26 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)unaff_EBX + 0x7b);
    *(char *)CONCAT31(uVar17,cVar4) = *(char *)CONCAT31(uVar17,cVar4) + cVar4;
    pcVar8 = (char *)CONCAT31(uVar17,cVar4 + 'o');
    *pcVar8 = *pcVar8 + cVar4 + 'o';
    pcVar8 = pcVar8 + 0x2ed7fde6;
    cVar27 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar27;
    cVar4 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar26,cVar28)) + 0x7b);
    *pcVar8 = *pcVar8 + cVar27;
    piVar9 = (int *)(CONCAT31((int3)((uint)pcVar8 >> 8),cVar27 + 'o') + 0x6f060000);
    *piVar9 = *piVar9 + (int)piVar9;
    uVar18 = (undefined3)((uint)param_2 >> 8);
    bVar5 = (byte)param_2 | *unaff_ESI;
    pbVar12 = (byte *)CONCAT31(uVar18,bVar5);
    uVar25 = CONCAT22(uVar22,CONCAT11(cVar26 + cVar4,cVar28)) | (uint)unaff_ESI;
    uVar17 = (undefined3)((uint)piVar9 >> 8);
    bVar6 = (byte)piVar9 | *pbVar12;
    pbVar29 = (byte *)CONCAT31(uVar17,bVar6);
    cVar4 = (char)value - bVar5;
    value = (byte *)CONCAT31((int3)((uint)value >> 8),cVar4);
    *pbVar29 = *pbVar29 + bVar6;
    pbVar11 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)pbVar12);
    *pbVar29 = bVar6;
    *pbVar12 = *pbVar12 + cVar4;
    unaff_ESI = unaff_ESI + 8;
    out(*(undefined4 *)pbVar11,(short)pbVar12);
    *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
    unaff_EBX = (uint *)(CONCAT31((int3)(uVar25 >> 8),(char)uVar25 - (char)((uint)param_2 >> 8)) |
                        (uint)unaff_ESI);
    bVar5 = (bVar5 | *unaff_ESI) + (char)*unaff_EDI;
    param_2 = (byte *)CONCAT31(uVar18,bVar5);
    cVar4 = bVar6 - (char)*unaff_EDI;
    cVar4 = cVar4 - *(char *)CONCAT31(uVar17,cVar4);
    puVar10 = (uint *)CONCAT31(uVar17,cVar4);
    *puVar10 = (uint)(param_2 + *puVar10);
    *(byte *)puVar10 = (byte)*puVar10 + cVar4;
    *(byte *)puVar10 = (byte)*puVar10 + cVar4;
    *(byte *)puVar10 = (byte)*puVar10 + cVar4;
    *(int *)value = *(int *)value - (int)unaff_EBP;
    bVar6 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar5;
    *(byte *)puVar10 = (byte)*puVar10 + cVar4 + CARRY1(bVar6,bVar5);
    *value = *value + cVar4;
    uVar25 = *unaff_EBX;
    *(char *)unaff_EBX = (char)*unaff_EBX + 'r';
    *(char *)unaff_EBX = (char)*unaff_EBX;
    if (SCARRY1((char)uVar25,'r')) {
      unaff_ESI = unaff_ESI + *(int *)(param_2 + -10);
      goto code_r0x004050d3;
    }
    *unaff_ESI = *unaff_ESI + cVar4;
    cVar4 = cVar4 + (char)*unaff_EBX;
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          *(char *)((int)unaff_EBX + 0x7b),(char)unaff_EBX));
    *(char *)CONCAT31(uVar17,cVar4) = *(char *)CONCAT31(uVar17,cVar4) + cVar4;
    puVar10 = (uint *)CONCAT31(uVar17,cVar4 + 'o');
  }
  while( true ) {
    in_AF = 9 < ((byte)puVar10 & 0xf) | in_AF;
    uVar25 = CONCAT31((int3)((uint)puVar10 >> 8),(byte)puVar10 + in_AF * '\x06') & 0xffffff0f;
    bVar5 = (byte)uVar25;
    piVar9 = (int *)CONCAT22((short)(uVar25 >> 0x10),
                             CONCAT11((char)((uint)puVar10 >> 8) + in_AF,bVar5));
    *piVar9 = *piVar9 + (int)piVar9;
    uVar17 = (undefined3)((uint)piVar9 >> 8);
    bVar5 = bVar5 | *(byte *)(piVar9 + 0x354a);
    bVar5 = bVar5 - *(char *)CONCAT31(uVar17,bVar5);
    pbVar11 = (byte *)CONCAT31(uVar17,bVar5);
    bVar6 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar5;
    unaff_ESI = unaff_ESI + (-(uint)CARRY1(bVar6,bVar5) - *(int *)pbVar11);
    puVar10 = (uint *)(pbVar11 + 0xfc00);
    *param_2 = *param_2 + (char)((uint)param_2 >> 8);
    uVar25 = *puVar10;
    bVar6 = (byte)puVar10;
    *(byte *)puVar10 = (byte)*puVar10 + bVar6;
    uVar2 = (uint)CARRY1((byte)uVar25,bVar6);
    uVar25 = *unaff_EBX;
    uVar1 = *unaff_EBX;
    *unaff_EBX = (uint)((byte *)(uVar1 + (int)puVar10) + uVar2);
    if (!CARRY4(uVar25,(uint)puVar10) && !CARRY4(uVar1 + (int)puVar10,uVar2)) break;
    *(byte *)puVar10 = (byte)*puVar10 + bVar6;
  }
code_r0x004050d3:
  uVar25 = (uint)puVar10 | *puVar10;
  uVar22 = SUB42(param_2,0);
  *unaff_ESI = *unaff_ESI + (char)uVar25;
  piVar9 = (int *)(uVar25 + 0xc1872);
  if (SCARRY4(uVar25,0xc1872)) {
    cVar4 = (char)piVar9;
    *(char *)piVar9 = *(char *)piVar9 + cVar4;
    *param_2 = *param_2 + cVar4;
    *(char *)piVar9 = *(char *)piVar9 + cVar4;
    *(char *)unaff_EBX = (char)*unaff_EBX + (char)value;
    *(char *)piVar9 = *(char *)piVar9 + cVar4;
    *(char *)((int)piVar9 * 2) = *(char *)((int)piVar9 * 2) + (char)param_2;
    pbVar11 = unaff_ESI;
    goto code_r0x00405117;
  }
  do {
    bVar6 = *unaff_ESI;
    bVar5 = (byte)piVar9;
    *unaff_ESI = *unaff_ESI + bVar5;
    if (CARRY1(bVar6,bVar5)) {
      *piVar9 = (int)(*piVar9 + (int)piVar9);
      uVar17 = (undefined3)((uint)value >> 8);
      bVar6 = (byte)value | bRam396f1609;
      *piVar9 = (int)(*piVar9 + (int)piVar9);
      value = (byte *)CONCAT31(uVar17,bVar6 | *(byte *)CONCAT31(uVar17,bVar6));
      uVar17 = (undefined3)((uint)piVar9 >> 8);
      bVar5 = bVar5 | *param_2;
      pcVar8 = (char *)CONCAT31(uVar17,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        pbVar11 = unaff_ESI + 4;
        out(*(undefined4 *)unaff_ESI,uVar22);
        uVar25 = CONCAT22((short)((uint)piVar9 >> 0x10),(ushort)bVar5);
        *pbVar11 = *pbVar11 + bVar5;
        pcVar8 = (char *)(uVar25 | 8);
        cVar27 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)unaff_EBX + 0x7a);
        puVar10 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar27,(char)unaff_EBX)
                                  );
        *pcVar8 = *pcVar8 + (char)pcVar8;
        cVar4 = (char)pcVar8 + 'o';
        piVar9 = (int *)CONCAT31((int3)(uVar25 >> 8),cVar4);
        *(char *)piVar9 = (char)*piVar9 + cVar4;
        *value = *value + 1;
        pbVar29 = unaff_ESI + 8;
        out(*(undefined4 *)pbVar11,uVar22);
        pbVar11 = (byte *)((uint)param_2 ^ uRam08122c04);
        iVar13 = CONCAT31((int3)((uint)(*piVar9 * 0x17070600) >> 8),2);
        *(char *)(iVar13 * 2) = *(char *)(iVar13 * 2) - cVar27;
        do {
          bVar6 = (byte)iVar13;
          *pbVar29 = *pbVar29 + bVar6;
          bVar31 = CARRY1(bVar6,(byte)*puVar10);
          uVar17 = (undefined3)((uint)iVar13 >> 8);
          cVar4 = bVar6 + (byte)*puVar10;
          pbVar12 = (byte *)CONCAT31(uVar17,cVar4);
          uVar22 = in_DS;
          uVar3 = uStack_24;
          if (SCARRY1(bVar6,(byte)*puVar10) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar12 = *pbVar12 + cVar4;
          uVar25 = CONCAT31(uVar17,cVar4 + '\'') + 0x1ebd9f3;
          uStack_28 = (undefined1)in_ES;
          uStack_27 = (undefined1)((ushort)in_ES >> 8);
          piVar9 = (int *)(uVar25 ^ 0x73060000);
          value = value + 1;
          *piVar9 = (int)(*piVar9 + (int)piVar9);
          puVar10 = (uint *)CONCAT22((short)((uint)puVar10 >> 0x10),
                                     CONCAT11((byte)((uint)puVar10 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar10));
          cVar4 = (char)uVar25;
          *(char *)piVar9 = (char)*piVar9 + cVar4;
          uVar25 = CONCAT31((int3)((uint)piVar9 >> 8),cVar4 + '\x02');
          bVar31 = 0xd9f2d2da < uVar25;
          iVar13 = uVar25 + 0x260d2d25;
          pcVar8 = unaff_EBP;
          do {
            uVar17 = (undefined3)((uint)iVar13 >> 8);
            bVar5 = (char)iVar13 + -2 + bVar31;
            pbVar12 = (byte *)CONCAT31(uVar17,bVar5);
            bVar6 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar5;
            bVar21 = (byte)puVar10;
            uStack_24 = in_ES;
            if (CARRY1(bVar6,bVar5)) {
              *pbVar12 = *pbVar12 + bVar5;
              puVar10 = (uint *)CONCAT22((short)((uint)puVar10 >> 0x10),
                                         CONCAT11((byte)((uint)puVar10 >> 8) | pcVar8[0x7f],bVar21))
              ;
              *pbVar12 = *pbVar12 + bVar5;
              pbVar12 = (byte *)CONCAT31(uVar17,bVar5 + 0x2a);
              *pbVar12 = *pbVar12 + bVar5 + 0x2a;
              *(byte *)puVar10 = (byte)*puVar10 + (char)pbVar11;
              uVar22 = in_DS;
              while( true ) {
                in_DS = uVar22;
                bVar5 = (byte)pbVar12;
                *pbVar11 = *pbVar11 ^ bVar5;
                *pbVar11 = *pbVar11 + (char)puVar10;
                *pbVar12 = *pbVar12 + bVar5;
                *(byte *)puVar10 = (byte)*puVar10 + (char)((uint)pbVar11 >> 8);
                bVar6 = *pbVar12;
                *pbVar12 = *pbVar12 + bVar5;
                uVar25 = *puVar10;
                uVar1 = *puVar10;
                *puVar10 = (uint)(pbVar12 + uVar1 + CARRY1(bVar6,bVar5));
                uVar17 = (undefined3)((uint)pbVar12 >> 8);
                if (CARRY4(uVar25,(uint)pbVar12) ||
                    CARRY4((uint)(pbVar12 + uVar1),(uint)CARRY1(bVar6,bVar5))) break;
                *pbVar29 = *pbVar29 + bVar5;
                pcVar19 = (char *)CONCAT22((short)((uint)value >> 0x10),
                                           CONCAT11((char)((uint)value >> 8) + *pbVar12,(char)value)
                                          );
                *pbVar29 = *pbVar29 + bVar5;
                piVar9 = (int *)CONCAT31(uVar17,bVar5 | (byte)*puVar10);
                pbVar12 = pbVar29;
                while( true ) {
                  pbVar29 = pbVar12 + 4;
                  out(*(undefined4 *)pbVar12,(short)pbVar11);
                  pbVar11 = pbVar11 + 1;
                  *piVar9 = (int)(*piVar9 + (int)piVar9);
                  bVar5 = (byte)((uint)pcVar19 >> 8) | *pbVar11;
                  uVar17 = (undefined3)((uint)piVar9 >> 8);
                  bVar6 = (byte)piVar9 ^ *pbVar11;
                  pcVar14 = (char *)CONCAT31(uVar17,bVar6);
                  cRam282b0000 = cRam282b0000 - bVar5;
                  *pcVar14 = *pcVar14 + bVar6;
                  unaff_EBP = pcVar8 + -*(int *)pbVar11;
                  uStack_28 = (undefined1)in_DS;
                  uStack_27 = (undefined1)((ushort)in_DS >> 8);
                  cVar4 = *(char *)((int)unaff_EDI + 0x17);
                  *pcVar14 = *pcVar14 + bVar6;
                  value = (byte *)CONCAT22((short)((uint)pcVar19 >> 0x10),
                                           CONCAT11(bVar5 + cVar4 | *pbVar11,(char)pcVar19));
                  *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
                  *(byte *)((int)pcVar14 * 2) = *(byte *)((int)pcVar14 * 2) ^ bVar6;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  bVar6 = bVar6 + in_AF * -6;
                  pbVar12 = (byte *)CONCAT31(uVar17,bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
                  *(char *)((int)pbVar12 * 2) =
                       *(char *)((int)pbVar12 * 2) + (char)((uint)pbVar11 >> 8);
                  bVar31 = CARRY1(*value,(byte)pbVar11);
                  *value = *value + (byte)pbVar11;
                  uVar22 = in_DS;
                  uVar3 = in_ES;
GenerateStatusText:
                  in_DS = uVar3;
                  pcVar8 = unaff_EBP;
                  uStack_24 = in_DS;
                  if (!bVar31) break;
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  iVar13 = CONCAT31((int3)((uint)value >> 8),(byte)value | *pbVar11);
                  uVar22 = (undefined2)((uint)puVar10 >> 0x10);
                  cVar28 = (char)((uint)puVar10 >> 8) + *(byte *)((int)puVar10 + 0x7d);
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  *(char *)unaff_EDI = (char)*unaff_EDI - (char)((uint)value >> 8);
                  iVar13 = iVar13 - *(int *)(iVar13 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar28,(char)puVar10)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar29,(short)pbVar11);
                  pbVar11 = (byte *)CONCAT22(uStack_26,CONCAT11(uStack_27,uStack_28));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar12 = pbVar29 + 8;
                  out(*(undefined4 *)(pbVar29 + 4),CONCAT11(uStack_27,uStack_28));
                  pcVar8 = unaff_EBP + 1;
                  cVar27 = (char)iVar13;
                  pcVar19 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),
                                             CONCAT11((byte)((uint)iVar13 >> 8) |
                                                      *(byte *)((int)unaff_EDI + 0x46),cVar27));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_27,uStack_28);
                  uVar17 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar12,0xf0)) >> 8);
                  piVar9 = (int *)CONCAT31(uVar17,0x5f);
                  unaff_EDI = (int *)((int)unaff_EDI + 1);
                  *piVar9 = (int)(*piVar9 + (int)piVar9);
                  puVar10 = (uint *)CONCAT22(uVar22,CONCAT11(cVar28 + cVar4 | pbVar29[-0x78],
                                                             (char)puVar10));
                  *(char *)piVar9 = (char)*piVar9 + '_';
                  puVar15 = (uint *)CONCAT31(uVar17,0x8c);
                  *(byte **)(pbVar12 + (int)unaff_EDI * 8) =
                       pbVar11 + *(int *)(pbVar12 + (int)unaff_EDI * 8);
                  bVar6 = *pbVar12;
                  *pbVar12 = *pbVar12 + 0x8c;
                  if (bVar6 < 0x74) {
                    *pbVar11 = *pbVar11 + cVar27;
                    *(byte *)puVar10 = (byte)*puVar10 >> 1;
                    *(char *)puVar15 = (char)*puVar15 + -0x74;
                    *puVar15 = (uint)(pcVar8 + *puVar15);
                    *puVar15 = *puVar15 << 1 | (uint)((int)*puVar15 < 0);
                    *pbVar11 = *pbVar11 + cVar27;
                    unaff_EBP[2] = unaff_EBP[2] - cVar27;
                    *pbVar11 = *pbVar11 + cVar27;
                    pbVar29 = (byte *)CONCAT31(uVar17,0x83);
                    puVar15 = puVar10;
                    goto code_r0x00405312;
                  }
                  *puVar15 = (uint)(*puVar15 + (int)puVar15);
                  piVar9 = (int *)(CONCAT31(uVar17,(byte)puVar15[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar15[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar9 = (int *)((int)piVar9 + *(int *)pbVar12);
                }
              }
              *pbVar11 = *pbVar11 + bVar5;
              *(byte *)puVar10 = (byte)*puVar10 - (char)pbVar11;
              *pbVar12 = *pbVar12 + bVar5;
              pbVar12 = (byte *)CONCAT31(uVar17,bVar5 | (byte)*puVar10);
            }
            else {
              cVar4 = (char)value;
              *pbVar11 = *pbVar11 + cVar4;
              *(byte **)pbVar12 = pbVar11 + *(int *)pbVar12;
              *pbVar12 = *pbVar12 + bVar5;
              bVar5 = bVar5 + *pbVar12;
              pbVar12 = (byte *)CONCAT31(uVar17,bVar5);
              if (-1 < (char)bVar5) {
                *(byte *)puVar10 = (byte)*puVar10 + bVar21;
                out(*(undefined4 *)pbVar29,(short)pbVar11);
                pbVar11 = pbVar11 + 1;
                *pbVar12 = *pbVar12 + bVar5;
                puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),
                                           bVar21 | (byte)((uint)iVar13 >> 8));
                cVar27 = bVar5 - *value;
                pcVar19 = (char *)CONCAT31(uVar17,cVar27);
                *pcVar19 = *pcVar19 + cVar27 + (bVar5 < *value);
                *pbVar11 = *pbVar11 + cVar27;
                pcVar19 = (char *)((int)pcVar19 * 2 + 0x79);
                *pcVar19 = *pcVar19 + (char)((uint)pbVar11 >> 8);
                pbVar12 = (byte *)in((short)pbVar11);
                pbVar29 = pbVar29 + 4;
              }
              *pbVar29 = *pbVar29 + cVar4;
              *pbVar12 = *pbVar12 + (char)pbVar12;
              *pbVar12 = *pbVar12 + (char)pbVar12;
              uStack_28 = (undefined1)in_DS;
              uStack_27 = (undefined1)((ushort)in_DS >> 8);
              bVar6 = *pbVar12;
              bVar7 = (byte)((uint)value >> 8);
              bVar21 = bVar7 + *pbVar12;
              iVar13 = *(int *)pbVar12;
              *pbVar11 = *pbVar11 + cVar4;
              bVar5 = (char)(pbVar12 + (uint)CARRY1(bVar7,bVar6) + iVar13) - (byte)*puVar10;
              pbVar12 = (byte *)CONCAT31((int3)((uint)(pbVar12 + (uint)CARRY1(bVar7,bVar6) + iVar13)
                                               >> 8),bVar5);
              *(byte *)puVar10 = (byte)*puVar10 ^ bVar5;
              *pcVar8 = *pcVar8 + (char)puVar10;
              *pbVar12 = *pbVar12 + bVar5;
              *pbVar12 = *pbVar12 + bVar5;
              *pbVar12 = *pbVar12 + bVar5;
              value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                                       CONCAT11(bVar21 + *pbVar12,cVar4));
              pbVar12 = pbVar12 + (uint)CARRY1(bVar21,*pbVar12) + *(int *)pbVar12;
              *pbVar11 = *pbVar11 + cVar4;
              pbVar29 = pbVar29 + *(int *)(pbVar11 + 0x3e);
            }
            *pbVar29 = *pbVar29 + (char)pbVar12;
            cVar4 = (char)pbVar12 + 'r';
            pbVar29 = pbVar29 + -1;
            uVar25 = CONCAT31((int3)((uint)pbVar12 >> 8),cVar4);
            *pbVar29 = *pbVar29 + cVar4;
            bVar31 = 0xfff38f8d < uVar25;
            iVar13 = uVar25 + 0xc7072;
            unaff_EBP = pcVar8;
          } while (SCARRY4(uVar25,0xc7072));
        } while( true );
      }
      *pcVar8 = *pcVar8 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar11 = (byte *)CONCAT31(uVar17,bVar5);
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      uVar17 = (undefined3)
               ((uint)(pbVar11 + (uint)CARRY1(bVar6,bVar5) + *(int *)(value + (int)param_2)) >> 8);
      cVar4 = (char)(pbVar11 + (uint)CARRY1(bVar6,bVar5) + *(int *)(value + (int)param_2)) + 'E';
      pcVar8 = (char *)CONCAT31(uVar17,cVar4);
      *pcVar8 = *pcVar8 + cVar4;
      cVar4 = cVar4 + *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar17,cVar4);
      *pcVar8 = *pcVar8 + cVar4;
      puVar10 = (uint *)CONCAT31(uVar17,cVar4 + *pcVar8);
      *(char *)puVar10 = (char)*puVar10 + cVar4 + *pcVar8;
      pbVar11 = (byte *)((uint)puVar10 | *puVar10);
      bVar6 = *pbVar11;
      bVar5 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      piVar9 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5 + CARRY1(bVar6,bVar5));
      pbVar11 = unaff_ESI;
code_r0x00405117:
      *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
      unaff_EBX = (uint *)((int)unaff_EBX - *unaff_EBX);
      unaff_ESI = pbVar11 + 4;
      out(*(undefined4 *)pbVar11,uVar22);
    }
    *param_2 = *param_2 + (char)value;
    bVar31 = unaff_EBX < (uint *)*piVar9;
    unaff_EBX = (uint *)((int)unaff_EBX - *piVar9);
    bVar6 = (byte)((uint)value >> 8);
    *(char *)((int)unaff_EDI + 0x39) = (*(char *)((int)unaff_EDI + 0x39) - bVar6) - bVar31;
    *piVar9 = (int)(*piVar9 + (int)piVar9);
    uVar25 = *unaff_EBX;
    *(int *)((int)unaff_EDI + 0x39) = *(int *)((int)unaff_EDI + 0x39) - (int)unaff_EBP;
    *piVar9 = (int)(*piVar9 + (int)piVar9);
    value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                             CONCAT11(bVar6 | (byte)uVar25 | (byte)*unaff_EBX,(char)value));
    *(char *)(piVar9 + 10) = (char)piVar9[10] + (char)((uint)param_2 >> 8);
  } while( true );
code_r0x004052ee:
  *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
  bVar6 = (char)piVar9 + 0x28;
  pbVar29 = (byte *)CONCAT31((int3)((uint)piVar9 >> 8),bVar6);
  *pbVar29 = *pbVar29 ^ bVar6;
  *(byte *)puVar10 = (byte)*puVar10 + (char)((uint)pcVar19 >> 8);
  bVar6 = *pbVar11;
  *pbVar11 = *pbVar11 + (byte)pcVar19;
  piVar9 = (int *)(((uint)pbVar29 | 0x1496f09) + *unaff_EDI + (uint)CARRY1(bVar6,(byte)pcVar19));
  pbVar30 = pbVar12 + 4;
  out(*(undefined4 *)pbVar12,(short)pbVar11);
  pbVar23 = pbVar11 + -1;
  *piVar9 = *piVar9 + (int)piVar9;
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | (byte)*puVar10);
  cVar4 = (char)piVar9 + '\x13';
  pbVar29 = (byte *)CONCAT31((int3)((uint)piVar9 >> 8),cVar4);
  puVar15 = puVar10;
  pbVar12 = pbVar30;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar11 = *pbVar11 - (char)((uint)pbVar23 >> 8);
    *pbVar29 = *pbVar29 + cVar4;
code_r0x00405396:
    bVar6 = *pbVar29;
    bVar5 = (byte)pbVar29;
    *pbVar29 = *pbVar29 + bVar5;
    *(byte **)pbVar30 = pbVar29 + (uint)CARRY1(bVar6,bVar5) + *(int *)pbVar30;
    out(*(undefined4 *)pbVar30,(short)pbVar11);
    *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
    *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
    pcVar8 = (char *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                              CONCAT11((byte)((uint)pbVar29 >> 8) | pbVar30[4],bVar5));
    *(int *)((int)unaff_EDI + -1) = (int)(pcVar8 + *(int *)((int)unaff_EDI + -1));
    out(*(undefined4 *)(pbVar30 + 4),(short)pbVar11);
    *pcVar8 = *pcVar8 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar29 = *pbVar29 + (char)pbVar29;
  piVar9 = (int *)CONCAT31((int3)((uint)pbVar29 >> 8),(char)pbVar29 + 'o');
  puVar10 = (uint *)((int)puVar15 + -1);
  *piVar9 = *piVar9 + (int)piVar9;
  uVar17 = (undefined3)((uint)pbVar11 >> 8);
  piVar9 = (int *)((int)piVar9 + 0x1b7e);
  bVar21 = (byte)pbVar11 | *(byte *)puVar10 | *(byte *)puVar10;
  iRam04115f2c = iRam04115f2c + (int)piVar9;
  out(*(undefined4 *)pbVar12,(short)CONCAT31(uVar17,bVar21));
  *piVar9 = *piVar9 + (int)piVar9;
  bVar21 = bVar21 | (byte)piVar9;
  iVar24 = CONCAT31(uVar17,bVar21);
  pbVar11 = (byte *)((int)piVar9 - *piVar9);
  cVar4 = (char)pbVar11;
  *pcVar19 = *pcVar19 + cVar4;
  cVar27 = (char)pcVar19 - bVar21;
  *pbVar11 = *pbVar11 + cVar4;
  uVar22 = (undefined2)((uint)pcVar19 >> 0x10);
  bVar5 = (byte)((uint)pcVar19 >> 8) | *pbVar11;
  pcVar8 = pcVar8 + -1;
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  bVar6 = *(byte *)(CONCAT22(uVar22,CONCAT11(bVar5,cVar27)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar11;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar8;
  *pbVar11 = *pbVar11 + cVar4;
  bVar6 = bVar5 | bVar6 | *(byte *)puVar10;
  iVar20 = CONCAT22(uVar22,CONCAT11(bVar6,cVar27));
  pbVar23 = (byte *)((uint)(pbVar12 + 4) ^ *(uint *)(iVar24 + -0x43));
  iVar13 = *(int *)pbVar11;
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  if (SCARRY4(iVar13,(int)pbVar11)) {
    *pbVar11 = *pbVar11 + cVar4;
  }
  pbVar29 = pbVar11 + 0x5674;
  unaff_EDI = (int *)((int)unaff_EDI +
                     (-(uint)((byte *)0xffffa98b < pbVar11) - *(int *)(pbVar23 + -0x7f)));
  bVar5 = (byte)pbVar29;
  *pbVar29 = *pbVar29 + bVar5;
  uVar18 = (undefined3)((uint)pbVar29 >> 8);
  bVar7 = bVar5 + 0x2d;
  piVar9 = (int *)CONCAT31(uVar18,bVar7);
  *(uint *)(pbVar23 + (int)unaff_EDI * 8) =
       *(int *)(pbVar23 + (int)unaff_EDI * 8) + iVar24 + (uint)(0xd2 < bVar5);
  bVar5 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar7;
  if (!CARRY1(bVar5,bVar7)) {
    do {
      pbVar29 = (byte *)(iVar24 + 1);
      bVar5 = (byte)piVar9;
      *(byte *)piVar9 = (char)*piVar9 + bVar5;
      bVar21 = (byte)((uint)piVar9 >> 8);
      bVar7 = (byte)puVar10 | bVar21;
      puVar15 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar7);
      out(*(undefined4 *)pbVar23,(short)pbVar29);
      *(byte *)piVar9 = (char)*piVar9 + bVar5;
      uVar22 = (undefined2)((uint)iVar20 >> 0x10);
      cVar4 = (char)iVar20;
      pbVar11 = (byte *)CONCAT22(uVar22,CONCAT11((byte)((uint)iVar20 >> 8) | *pbVar29,cVar4));
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      *(byte *)piVar9 = (char)*piVar9 + bVar5 + CARRY1(bVar6,bVar5);
      *pbVar29 = *pbVar29 + bVar5;
      *(byte *)unaff_EDI = (char)*unaff_EDI + bVar21;
      *(int *)((int)piVar9 * 2) = *(int *)((int)piVar9 * 2) + CONCAT22(uVar22,CONCAT11(0x1c,cVar4));
      *(byte *)piVar9 = (char)*piVar9 + bVar5;
      cVar27 = (char)pbVar29;
      *(byte *)puVar15 = (byte)*puVar15 + cVar27;
      *(byte *)((int)piVar9 * 2) = *(byte *)((int)piVar9 * 2) ^ bVar5;
      *(byte *)piVar9 = (char)*piVar9 + bVar5;
      pbVar11 = pbVar23 + 8;
      out(*(undefined4 *)(pbVar23 + 4),(short)pbVar29);
      piVar9 = (int *)0xa0a0000;
      *pbVar29 = *pbVar29;
      bVar5 = cVar4 - cVar27;
      iVar20 = CONCAT22(uVar22,CONCAT11(*(byte *)(unaff_EDI + 0x14) | 0x1c | bRam0ca87216,bVar5));
      *pbVar29 = *pbVar29;
      bVar6 = *pbVar29;
      *pbVar29 = *pbVar29 + bVar5;
      if (!CARRY1(bVar6,bVar5)) {
        piVar9 = (int *)0x1e7b7000;
        bVar6 = (byte)((uint)puVar10 >> 8) | *(byte *)(iVar24 + 3);
        puVar15 = (uint *)CONCAT22((short)((uint)puVar10 >> 0x10),CONCAT11(bVar6,bVar7));
        if (bVar6 != 0) {
          pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar27 + pbVar11[(int)unaff_EDI * 8]
                                    );
          piVar9 = (int *)0x6d7d7000;
          iVar20 = iVar20 + 1;
        }
      }
      *piVar9 = (int)(*piVar9 + (int)piVar9);
      iVar24 = CONCAT31((int3)((uint)pbVar29 >> 8),(byte)pbVar29 | pbVar11[(int)unaff_EDI * 8]);
      *(char *)piVar9 = (char)*piVar9;
      piVar9 = (int *)CONCAT31((int3)((uint)piVar9 >> 8),0xf9);
      *unaff_EDI = (int)((int)piVar9 + *unaff_EDI + 1);
      pbVar23 = pbVar23 + 0xc;
      out(*(undefined4 *)pbVar11,(short)iVar24);
      puVar10 = puVar15;
    } while( true );
  }
  *piVar9 = (int)(*piVar9 + (int)piVar9);
  bVar7 = bVar7 | *(byte *)((int)piVar9 + 0x4000081);
  piVar9 = (int *)CONCAT31(uVar18,bVar7);
  if ('\0' < (char)bVar7) {
    *(byte *)piVar9 = (char)*piVar9 + bVar7;
    puVar16 = (uint *)CONCAT31(uVar18,bVar7 + 0x28);
    *puVar16 = *puVar16 ^ (uint)puVar16;
    *(byte *)puVar10 = *(byte *)puVar10 + bVar6;
    cVar4 = (bVar7 + 0x28) - bVar6;
    pcVar8 = (char *)CONCAT31(uVar18,cVar4);
    *pcVar8 = *pcVar8 + cVar4;
    pbVar11 = (byte *)CONCAT31(uVar17,bVar21 | *(byte *)puVar10);
    pcVar19 = (char *)CONCAT22((short)((uint)puVar10 >> 0x10),
                               CONCAT11((char)((uint)puVar10 >> 8) + *(byte *)((int)puVar15 + 0x7d),
                                        (char)puVar10));
    *pcVar8 = *pcVar8 + cVar4;
    pbVar29 = (byte *)CONCAT31(uVar18,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar18,cVar4 + 0x39U));
    *pcVar19 = *pcVar19 + bVar6;
    pbVar30 = pbVar23 + 4;
    out(*(undefined4 *)pbVar23,(short)pbVar11);
    goto code_r0x00405396;
  }
  pbVar12 = pbVar23 + 4;
  out(*(undefined4 *)pbVar23,(short)iVar24);
  pcVar19 = (char *)(iVar20 + -1);
  *piVar9 = (int)(*piVar9 + (int)piVar9);
  pbVar11 = (byte *)CONCAT31(uVar17,bVar21 | *(byte *)puVar10);
  goto code_r0x004052ee;
}


