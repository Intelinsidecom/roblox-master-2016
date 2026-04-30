/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403b41
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(byte * param_1, byte * param_2)
 * Local Vars  : uVar2, pcVar1, bVar4, uVar3, in_EAX, bVar5, piVar7, pbVar6, pbVar9, pbVar8, puVar11, pcVar10, extraout_ECX, uVar12, bVar14, pcVar13, bVar16, bVar15, uVar18, uVar17, puVar20, cVar19, cVar22, uVar21, unaff_EBX, cVar23, unaff_ESI, unaff_EBP, bVar24, unaff_EDI, uVar25, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall _ctor(byte *param_1,byte *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *in_EAX;
  byte *pbVar6;
  undefined3 uVar12;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  uint *puVar11;
  byte bVar14;
  byte bVar16;
  undefined2 uVar17;
  byte *extraout_ECX;
  byte bVar15;
  char *pcVar13;
  undefined2 uVar18;
  char cVar19;
  uint *puVar20;
  undefined3 uVar21;
  char cVar22;
  char cVar23;
  byte *unaff_EBX;
  char *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  bool bVar24;
  undefined8 uVar25;
  int *piVar7;
  
  do {
                    /* .NET CLR Managed Code */
    bVar4 = (byte)((uint)param_1 >> 8);
    uVar17 = (undefined2)((uint)param_1 >> 0x10);
    cVar19 = (char)param_1;
    bVar14 = bVar4 + *in_EAX;
    param_1 = (byte *)CONCAT22(uVar17,CONCAT11(bVar14,cVar19));
    pbVar6 = in_EAX + (uint)CARRY1(bVar4,*in_EAX) + *(int *)in_EAX;
    *param_2 = *param_2 + cVar19;
    cVar22 = (char)unaff_EBX - unaff_ESI[2];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar22);
    bVar4 = (byte)pbVar6;
    uVar12 = (undefined3)((uint)pbVar6 >> 8);
    uVar21 = (undefined3)((uint)param_2 >> 8);
    if ((POPCOUNT(cVar22) & 1U) == 0) {
      *pbVar6 = *pbVar6 + bVar4;
      bVar4 = bVar4 | *unaff_EBX;
      piVar7 = (int *)CONCAT31(uVar12,bVar4);
      if (bVar4 != 0) {
        unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
        *(byte *)piVar7 = (char)*piVar7 + bVar4;
        param_1 = (byte *)CONCAT22(uVar17,CONCAT11(bVar14 | *param_2,cVar19));
        unaff_ESI = unaff_ESI + *piVar7;
        pcVar13 = (char *)((int)piVar7 + *piVar7);
        uVar12 = (undefined3)((uint)pcVar13 >> 8);
        bVar14 = (char)pcVar13 - *pcVar13;
        pbVar6 = (byte *)CONCAT31(uVar12,bVar14);
        bVar4 = *pbVar6;
        *pbVar6 = *pbVar6 + bVar14;
        piVar7 = (int *)CONCAT31(uVar12,bVar14 - CARRY1(bVar4,bVar14));
      }
      *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
      pbVar6 = unaff_ESI + 4;
      out(*(int *)unaff_ESI,(short)param_2);
      in_EAX = (byte *)(((uint)piVar7 >> 8) * 0x100);
      *param_2 = *param_2 + (byte)param_1;
      bVar4 = (char)param_2 - *unaff_EBX;
      param_2 = (byte *)CONCAT31(uVar21,bVar4);
      *unaff_EBX = *unaff_EBX;
      *param_2 = *param_2 + (char)((uint)param_1 >> 8);
      *in_EAX = *in_EAX;
      pcVar13 = (char *)(((uint)piVar7 >> 8) * 0x200);
      *pcVar13 = *pcVar13 + cVar22;
      bVar24 = CARRY1(*param_1,bVar4);
      *param_1 = *param_1 + bVar4;
      unaff_ESI = pbVar6;
      if (bVar24) {
        *in_EAX = *in_EAX;
        param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | *param_2);
code_r0x00403b73:
        pbVar6 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + -0x37));
        *in_EAX = *in_EAX + (byte)in_EAX;
        uVar12 = (undefined3)((uint)in_EAX >> 8);
        bVar4 = (byte)in_EAX | *param_2;
        pcVar13 = (char *)CONCAT31(uVar12,bVar4);
        uVar25 = CONCAT44(param_2,pcVar13);
        if ((POPCOUNT(bVar4) & 1U) == 0) {
          *pcVar13 = *pcVar13 + bVar4;
          *unaff_ESI = *unaff_ESI + 1;
          return (byte *)CONCAT31(uVar12,bVar4 + 6);
        }
        bVar4 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + 1;
        pcVar1 = (code *)swi(4);
        if (SCARRY1(bVar4,'\x01')) {
          uVar25 = (*pcVar1)();
          param_1 = extraout_ECX;
        }
        pbVar8 = (byte *)uVar25;
        *pbVar8 = *pbVar8 + (char)uVar25;
        cVar22 = (char)((ulonglong)uVar25 >> 0x20);
        puVar20 = (uint *)CONCAT22((short)((ulonglong)uVar25 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar25 >> 0x28) | unaff_EBX[0x2f],
                                            cVar22));
        *pbVar8 = *pbVar8 + (char)uVar25;
        cVar19 = (char)param_1;
        bVar15 = (byte)((uint)param_1 >> 8) | *pbVar8;
        pbVar8 = pbVar8 + *(int *)pbVar8;
        bVar4 = *unaff_EBX;
        *unaff_EBX = *unaff_EBX + bVar15;
        bVar14 = (byte)pbVar8;
        if (CARRY1(bVar4,bVar15)) {
          *pbVar8 = *pbVar8 + bVar14;
          bVar15 = bVar15 | (byte)*puVar20;
          *unaff_EBX = *unaff_EBX - cVar22;
          *pbVar8 = *pbVar8 + bVar14;
          uVar12 = (undefined3)((uint)pbVar8 >> 8);
          bVar14 = bVar14 | (byte)*puVar20;
          piVar7 = (int *)CONCAT31(uVar12,bVar14);
          unaff_EBP = unaff_EBP + *piVar7;
          *(byte *)piVar7 = (char)*piVar7 + bVar14;
          cVar22 = (char)unaff_EBX - *unaff_ESI;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar22) + 0x5f),cVar22));
          *(byte *)piVar7 = (char)*piVar7 + bVar14;
          bVar4 = bVar14 + 0x2a & (byte)*puVar20;
          pbVar6 = pbVar6 + *(int *)(unaff_EBP + 0x5f);
          *(char *)CONCAT31(uVar12,bVar4) = *(char *)CONCAT31(uVar12,bVar4) + bVar4;
          pbVar8 = (byte *)CONCAT31(uVar12,bVar4 + 0x2a);
          *(byte *)puVar20 = (byte)*puVar20 + 0x28;
          *pbVar8 = *pbVar8 + bVar4 + 0x2a;
        }
        else {
          *unaff_ESI = *unaff_ESI + bVar14;
        }
        pcVar13 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar15,cVar19));
        *unaff_EBP = *unaff_EBP - bVar15;
        *(byte *)puVar20 = (byte)*puVar20 + cVar19;
        bVar4 = (byte)pbVar8 - 0xb;
        pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar4);
        if (10 < (byte)pbVar8) {
          *pbVar9 = *pbVar9 | bVar4;
          return pbVar9;
        }
        *(byte *)puVar20 = (byte)*puVar20 + cVar19;
        do {
          bVar4 = unaff_EBX[-0x23];
          bVar15 = (byte)pbVar9;
          *pbVar9 = *pbVar9 + bVar15;
          bVar14 = unaff_EBP[-0x22];
          *pbVar9 = *pbVar9 + bVar15;
          uVar12 = (undefined3)((uint)pbVar9 >> 8);
          bVar15 = bVar15 | *unaff_ESI;
          pbVar8 = (byte *)CONCAT31(uVar12,bVar15);
          cVar22 = (char)unaff_EBX - *unaff_ESI;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                       CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4
                                                                | bVar14,(char)unaff_EBX)) >> 8),
                                       cVar22);
          cVar19 = (char)pcVar13;
          pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                     CONCAT11((char)((uint)pcVar13 >> 8) + *pbVar8,cVar19));
          *(byte *)puVar20 = (byte)*puVar20 + cVar19;
          bVar14 = bVar15 - *pbVar8;
          pbVar9 = (byte *)CONCAT31(uVar12,bVar14);
          unaff_ESI = unaff_ESI + (-(uint)(bVar15 < *pbVar8) - *(int *)pbVar9);
          puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 * '\x02');
          *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
          *pbVar6 = *pbVar6 + cVar22;
          bVar4 = *pbVar9;
          *pbVar9 = *pbVar9 + bVar14;
          *puVar20 = (uint)(pbVar9 + (uint)CARRY1(bVar4,bVar14) + *puVar20);
        } while ((POPCOUNT(*puVar20 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar9 = *pbVar9 + (char)pbVar9;
        pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | pbVar9[(int)pcVar13]);
        bVar24 = false;
        pbVar9 = (byte *)((uint)pbVar9 & 0xffffff00);
        do {
          pbVar6 = pbVar6 + (-(uint)bVar24 - *(int *)unaff_EBX);
          pcVar10 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),*pcVar13);
          *pcVar10 = *pcVar10 + *pcVar13;
          pbVar9 = (byte *)CONCAT31((int3)((uint)(pcVar10 +
                                                 (unaff_ESI[0x2000001] < (byte)((uint)pcVar13 >> 8))
                                                 + 0xda7d) >> 8),
                                    ((byte)(pcVar10 +
                                           (unaff_ESI[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                           0xda7d) | (byte)*puVar20) + 0x7d);
          pcVar13 = pcVar13 + -1;
          *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar13;
          while( true ) {
            uVar21 = (undefined3)((uint)puVar20 >> 8);
            cVar19 = (char)puVar20 + *(char *)((int)pbVar6 * 2 + 0xa0000e1);
            puVar20 = (uint *)CONCAT31(uVar21,cVar19);
            bVar24 = CARRY1((byte)pbVar9,(byte)*puVar20);
            uVar12 = (undefined3)((uint)pbVar9 >> 8);
            bVar4 = (byte)pbVar9 + (byte)*puVar20;
            pbVar9 = (byte *)CONCAT31(uVar12,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *pbVar9 = *pbVar9 + bVar4;
            cVar22 = (char)pcVar13;
            pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar13 >> 8) | pbVar6[-0x65],cVar22));
            bVar14 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar4;
            if (CARRY1(bVar14,bVar4)) {
              *pbVar9 = *pbVar9 + bVar4;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x1d],
                                                    (char)unaff_EBX));
              *pbVar9 = *pbVar9 + bVar4;
              bVar24 = false;
              bVar4 = bVar4 | (byte)*puVar20;
              pcVar10 = (char *)CONCAT31(uVar12,bVar4);
              while( true ) {
                bVar14 = (byte)pcVar10;
                uVar12 = (undefined3)((uint)pcVar10 >> 8);
                if (bVar24 == (char)bVar4 < '\0') break;
                *pcVar10 = *pcVar10 + bVar14;
                bVar14 = bVar14 | (byte)*puVar20;
                puVar11 = (uint *)CONCAT31(uVar12,bVar14);
                *pbVar6 = *pbVar6 << 1 | (char)*pbVar6 < '\0';
                uVar3 = *puVar11;
                *(byte *)puVar11 = (byte)*puVar11 + bVar14;
                unaff_EBP = unaff_EBP + (-(uint)CARRY1((byte)uVar3,bVar14) - *puVar11);
                *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
                while( true ) {
                  uVar3 = *puVar20;
                  *(byte *)puVar20 = (byte)*puVar20 + (byte)pcVar13;
                  cVar19 = (char)puVar11 + 'o' + CARRY1((byte)uVar3,(byte)pcVar13);
                  pcVar10 = (char *)CONCAT31((int3)((uint)puVar11 >> 8),cVar19);
                  pcVar13 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar19) & 1U) != 0) break;
                  *pcVar10 = *pcVar10 + cVar19;
                  bVar4 = bRamfe140212;
                  pcVar13 = (char *)0x0;
                  uVar12 = (undefined3)((uint)(pcVar10 + -0x732b0000) >> 8);
                  bVar14 = in(0);
                  puVar11 = (uint *)CONCAT31(uVar12,bVar14);
                  uVar3 = *puVar20;
                  *(byte *)puVar20 = (byte)*puVar20;
                  if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar20 < '\0') {
                    *(byte *)puVar11 = (byte)*puVar11 + bVar14;
                    bVar14 = bVar14 | (byte)*puVar20;
                    puVar11 = (uint *)CONCAT31(uVar12,bVar14);
                    if ((POPCOUNT(bVar14) & 1U) == 0) {
                      *(byte *)puVar11 = (byte)*puVar11 + bVar14;
                      pcVar13 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar11) << 8);
                      *(byte *)puVar11 = (byte)*puVar11 + bVar14;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar11 = (byte)*puVar11 + bVar14;
                    puVar11 = (uint *)CONCAT31(uVar12,bVar14 | (byte)*puVar20);
                  }
                }
                *(byte *)puVar20 = (byte)*puVar20;
                bVar24 = SCARRY1((char)puVar20,*pbVar6);
                bVar4 = (char)puVar20 + *pbVar6;
                puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar4);
              }
              if (bVar24 == (char)bVar4 < '\0') {
                *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar13;
                pbVar9 = (byte *)((uint)pcVar10 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar10 = *pcVar10 + bVar14;
              pbVar9 = (byte *)CONCAT31(uVar12,(bVar14 | (byte)*puVar20) + 0x7d);
              pcVar13 = pcVar13 + -1;
              *(byte *)puVar20 = (byte)*puVar20 + (char)pcVar13;
            }
            else {
              *(byte *)puVar20 = (byte)*puVar20 + cVar22;
              puVar20 = (uint *)CONCAT31(uVar21,cVar19 + *(char *)((int)pbVar6 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
    }
    else {
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
      bVar14 = bVar4 + 2;
      if ((POPCOUNT(bVar14) & 1U) != 0) {
        *param_2 = *param_2 + cVar19;
        in_EAX = (byte *)CONCAT31(uVar12,bVar14 | *unaff_ESI);
        goto code_r0x00403b73;
      }
      *(char *)CONCAT31(uVar12,bVar14) = *(char *)CONCAT31(uVar12,bVar14) + bVar14;
      bVar4 = bVar4 + 0x71 & *(byte *)CONCAT31(uVar12,bVar4 + 0x71);
      *param_2 = *param_2 + cVar19;
      param_2 = (byte *)CONCAT31(uVar21,(char)param_2 + *unaff_EDI);
      unaff_EDI[0x17060000] = unaff_EDI[0x17060000] - bVar4;
      cVar19 = bVar4 - *unaff_EDI;
      bVar4 = cVar19 - *(char *)CONCAT31(uVar12,cVar19);
      in_EAX = (byte *)CONCAT31(uVar12,bVar4);
      *in_EAX = *in_EAX + bVar4;
      *(byte **)in_EAX = param_2 + *(int *)in_EAX;
      *in_EAX = *in_EAX + bVar4;
      bVar24 = CARRY1(*in_EAX,bVar4);
      *in_EAX = *in_EAX + bVar4;
    }
    *(byte **)in_EAX = in_EAX + (uint)bVar24 + *(int *)in_EAX;
    unaff_EDI = unaff_EDI + 4;
    in_EAX[(int)param_2] = in_EAX[(int)param_2] + (char)unaff_EBX;
    *in_EAX = *in_EAX + (char)in_EAX;
    *(byte **)unaff_ESI = unaff_EBX + *(int *)unaff_ESI;
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP + -*puVar11;
  do {
    bVar4 = (byte)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    pbVar6 = pbVar6 + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    bVar4 = bVar4 | (byte)*puVar20;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar4);
    *(byte *)puVar11 = (byte)*puVar11 | bVar4;
    bVar4 = (byte)*puVar11;
    unaff_EBP = (char *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar11;
        bVar4 = (byte)puVar11 | (byte)*puVar20;
        puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        uVar2 = CONCAT21((short)((uint)pcVar13 >> 0x10),(byte)((uint)pcVar13 >> 8) | bRamfe140212);
        while( true ) {
          pcVar13 = (char *)((uint)uVar2 << 8);
          bVar5 = (byte)puVar11;
          *(byte *)puVar11 = (byte)*puVar11 & bVar5;
          bVar15 = *unaff_EBX;
          bVar16 = (byte)uVar2;
          bVar14 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar16;
          bVar4 = *unaff_EBX;
          if (!CARRY1(bVar15,bVar16)) break;
          *(byte *)puVar11 = (byte)*puVar11 + bVar5;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar11 = (byte)*puVar11 + bVar5;
          bVar5 = bVar5 | (byte)*puVar20;
          puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar5);
          bVar24 = (POPCOUNT(bVar5) & 1U) == 0;
          while( true ) {
            cVar19 = (char)((uint)unaff_EBX >> 8);
            uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar24) {
              *(byte *)puVar20 = (byte)*puVar20;
              unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar19 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
            uVar18 = (undefined2)((uint)pcVar13 >> 0x10);
            bVar14 = (byte)((uint)pcVar13 >> 8) | (byte)*puVar11;
            uVar2 = CONCAT21(uVar18,bVar14);
            *puVar11 = *puVar11 & (uint)puVar11;
            *unaff_EBX = *unaff_EBX + bVar14;
            uVar12 = (undefined3)((uint)puVar11 >> 8);
            bVar4 = (char)puVar11 - bVar14;
            pcVar13 = (char *)CONCAT31(uVar12,bVar4);
            *pcVar13 = *pcVar13 + bVar4;
            bVar4 = bVar4 | (byte)*puVar20;
            puVar11 = (uint *)CONCAT31(uVar12,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar11 = (byte)*puVar11 + bVar4;
            pcVar13 = (char *)((uint)CONCAT21(uVar18,bVar14 | (byte)*puVar11) << 8);
            *puVar11 = *puVar11 - (int)puVar11;
            *(byte *)puVar20 = (byte)*puVar20;
            unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar19 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
              uVar17 = (undefined2)((uint)puVar20 >> 0x10);
              cVar19 = (char)puVar20;
              bVar4 = (byte)((uint)puVar20 >> 8) | unaff_EBX[-0x17];
              puVar20 = (uint *)CONCAT22(uVar17,CONCAT11(bVar4,cVar19));
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar11;
                uVar12 = (undefined3)((uint)puVar11 >> 8);
                bVar15 = (byte)puVar11 | (byte)*puVar20;
                pcVar10 = (char *)CONCAT31(uVar12,bVar15);
                bVar14 = unaff_EBX[-0x16];
                *pcVar10 = *pcVar10 + bVar15;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar14 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar10 = *pcVar10 + bVar15;
                pbVar8 = (byte *)CONCAT31(uVar12,bVar15 | (byte)*puVar20);
                while( true ) {
                  *pbVar8 = *pbVar8 + (byte)pbVar8;
                  uVar12 = (undefined3)((uint)pbVar8 >> 8);
                  bVar14 = (byte)pbVar8 | (byte)*puVar20;
                  puVar11 = (uint *)CONCAT31(uVar12,bVar14);
                  if ((POPCOUNT(bVar14) & 1U) != 0) break;
                  *(byte *)puVar11 = (byte)*puVar11 + bVar14;
                  bVar15 = pbVar6[-0x14];
                  *(byte *)puVar11 = (byte)*puVar11 + bVar14;
                  bVar14 = bVar14 | (byte)*puVar20;
                  pcVar10 = (char *)CONCAT31(uVar12,bVar14);
                  bVar5 = unaff_EBX[-0x15];
                  *pcVar10 = *pcVar10 + bVar14;
                  pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),
                                                    (byte)((uint)pcVar13 >> 8) | bVar15 |
                                                    pbVar6[-0x13]) << 8);
                  *pcVar10 = *pcVar10 + bVar14;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar10 = *pcVar10 + bVar14;
                  pbVar8 = (byte *)CONCAT31(uVar12,bVar14 | (byte)*puVar20);
                  do {
                    do {
                      bVar15 = (byte)pbVar8;
                      *pbVar8 = *pbVar8 + bVar15;
                      cVar23 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar8,
                                                            cVar23));
                      *pbVar8 = bVar15;
                      *pbVar8 = *pbVar8 + bVar15;
                      cVar22 = (char)((uint)pcVar13 >> 8) + *pbVar8;
                      pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),cVar22) << 8)
                      ;
                      uVar12 = (undefined3)((uint)pbVar8 >> 8);
                      bVar15 = bVar15 & *pbVar8;
                      pbVar8 = (byte *)CONCAT31(uVar12,bVar15);
                      bVar14 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar22;
                    } while (SCARRY1(bVar14,cVar22) == (char)*unaff_EBX < '\0');
                    *pbVar8 = *pbVar8 + bVar15;
                    bVar15 = bVar15 | (byte)*puVar20;
                    pbVar8 = (byte *)CONCAT31(uVar12,bVar15);
                    if ((POPCOUNT(bVar15) & 1U) == 0) {
                      *pbVar8 = *pbVar8 + bVar15;
                      *pbVar8 = *pbVar8 + bVar15;
                      cVar19 = cVar19 - bVar4;
                      pbVar9 = (byte *)CONCAT31((int3)((uint)puVar20 >> 8),cVar19);
                      *pbVar8 = *pbVar8 + bVar15;
                      bRam0312382b = bRam0312382b | *pbVar9;
                      while( true ) {
                        bVar14 = (byte)pbVar8;
                        *pbVar8 = *pbVar8 + bVar14;
                        bRam0312382b = bRam0312382b | (pbVar6 + 0x21b0000)[(int)pbVar8];
                        uVar12 = (undefined3)((uint)pbVar8 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar9 = *pbVar9 + bRam0312382b;
                        pbVar8 = (byte *)CONCAT31(uVar12,bVar14 | *unaff_ESI);
                      }
                      *pbVar8 = *pbVar8 + bVar14;
                      bVar14 = bVar14 | *unaff_ESI;
                      pcVar13 = (char *)CONCAT31(uVar12,bVar14);
                      out(*(int *)unaff_ESI,(short)pbVar9);
                      *pcVar13 = *pcVar13 + bVar14;
                      uVar18 = CONCAT11(bVar4 | bRam6f0a002b,cVar19);
                      pcVar10 = (char *)CONCAT22(uVar17,uVar18);
                      *pcVar13 = *pcVar13 + bVar14;
                      *pcVar10 = *pcVar10 + bRam0312382b;
                      out(*(int *)(unaff_ESI + 4),uVar18);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar23 + *pcVar13);
                  } while (SCARRY1(cVar23,*pcVar13) != (char)(cVar23 + *pcVar13) < '\0');
                }
                uVar3 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar20 < '\0');
              *(byte *)puVar20 = (byte)*puVar20;
              *pcVar13 = *pcVar13 - (char)unaff_EBX;
              *(byte *)puVar11 = (byte)*puVar11 + bVar14;
              bVar14 = bVar14 | (byte)*puVar20;
              puVar11 = (uint *)CONCAT31(uVar12,bVar14);
              bVar24 = (POPCOUNT(bVar14) & 1U) == 0;
            } while (bVar24);
          }
        }
      } while (SCARRY1(bVar14,bVar16));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar13 >> 8);
    *pbVar6 = *pbVar6 - (char)unaff_EBX;
  } while( true );
}


