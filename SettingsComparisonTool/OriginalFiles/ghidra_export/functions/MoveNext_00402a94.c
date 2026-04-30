/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402a94
 * Raw Name    : MoveNext
 * Demangled   : MoveNext
 * Prototype   : void MoveNext(uint * param_1, uint * param_2, uint * param_3, ushort param_4)
 * Local Vars  : uStack_18, pcStack_50, uVar2, uVar1, uVar4, uVar3, cVar6, bVar5, in_EAX, cVar7, pcVar9, iVar8, uVar11, piVar10, pcVar13, puVar12, pbVar15, piVar14, uVar17, puVar16, pbVar19, uVar18, uVar21, pbVar20, bVar23, cVar22, cVar25, bVar24, uVar27, uVar26, uVar29, bVar28, bVar31, puVar30, uVar32, unaff_EBX, cVar34, pcVar33, unaff_EBP, bVar35, puVar36, unaff_ESI, unaff_EDI, puVar37, in_ES, puVar38, param_1, uVar40, param_2, uVar39, in_DS, param_3, in_CS, param_4, bVar41, in_GS_OFFSET, bVar42, in_AF, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall MoveNext(uint *param_1,uint *param_2,uint *param_3,ushort param_4)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  byte *in_EAX;
  undefined3 uVar17;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  char *pcVar13;
  int *piVar14;
  byte *pbVar15;
  ushort *puVar16;
  undefined1 uVar18;
  char cVar22;
  undefined2 uVar26;
  byte *pbVar19;
  byte *pbVar20;
  byte bVar23;
  byte bVar24;
  char cVar25;
  undefined2 uVar27;
  undefined4 uVar21;
  byte bVar28;
  undefined2 uVar29;
  uint *puVar30;
  byte bVar31;
  char cVar34;
  uint *unaff_EBX;
  uint uVar32;
  byte bVar35;
  char *pcVar33;
  uint unaff_EBP;
  uint *unaff_ESI;
  uint *puVar36;
  uint *puVar37;
  uint *unaff_EDI;
  uint *puVar38;
  ushort in_ES;
  ushort uVar39;
  ushort uVar40;
  ushort in_CS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar41;
  byte in_AF;
  bool bVar42;
  ushort unaff_retaddr;
  char *pcStack_50;
  uint uStack_18;
  
                    /* .NET CLR Managed Code */
  bVar42 = false;
code_r0x00402a95:
  do {
    uVar17 = (undefined3)((uint)in_EAX >> 8);
    bVar5 = (byte)in_EAX | (byte)*param_2;
    pcVar9 = (char *)CONCAT31(uVar17,bVar5);
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *pcVar9 = *pcVar9 + bVar5;
      goto code_r0x00402a9b;
    }
    pcVar9[in_GS_OFFSET] = pcVar9[in_GS_OFFSET] + bVar5;
    uVar26 = (undefined2)((uint)param_1 >> 0x10);
    uVar18 = SUB41(param_1,0);
    bVar31 = (byte)((uint)param_1 >> 8) | *(byte *)((int)unaff_EDI + 0x66);
    param_1 = (uint *)CONCAT22(uVar26,CONCAT11(bVar31,uVar18));
    *pcVar9 = *pcVar9 + bVar5;
    bVar5 = bVar5 | (byte)*unaff_ESI;
    pcVar9 = (char *)CONCAT31(uVar17,bVar5);
    if ((char)bVar5 < '\0') {
      *pcVar9 = *pcVar9 + bVar5;
      cVar6 = bVar5 + 2;
      piVar14 = (int *)CONCAT31(uVar17,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        puVar30 = unaff_ESI + (uint)bVar42 * -2 + 1;
        out(*unaff_ESI,(short)param_2);
        goto code_r0x00402a61;
      }
      *(char *)piVar14 = (char)*piVar14 + cVar6;
      bVar5 = bVar5 + 0x71;
      pcVar33 = (char *)CONCAT31(uVar17,bVar5);
      pcVar9 = (char *)segment(in_DS,(short)unaff_EBX + (short)unaff_ESI);
      *pcVar9 = *pcVar9 + bVar5;
      uVar11 = unaff_EDI[0x1a];
      *pcVar33 = *pcVar33 + bVar5;
      param_1 = (uint *)CONCAT22(uVar26,CONCAT11(bVar31 | (byte)uVar11 |
                                                 *(byte *)((int)unaff_EDI + 0x69),uVar18));
      *pcVar33 = *pcVar33 + bVar5;
      bVar5 = bVar5 | (byte)*param_2;
      pcVar9 = (char *)CONCAT31(uVar17,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) goto code_r0x00402a5d;
    }
    else {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                            (char)unaff_EBX));
code_r0x00402a5d:
      *pcVar9 = *pcVar9 + (char)pcVar9;
      piVar14 = (int *)CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + 'o');
      puVar30 = unaff_ESI;
code_r0x00402a61:
      pcVar9 = (char *)segment(in_DS,(short)unaff_EBX + (short)puVar30);
      *pcVar9 = *pcVar9 + (char)piVar14;
      cVar6 = (char)param_1;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | (byte)unaff_EDI[0x1a],cVar6))
      ;
      *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
      uVar26 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar26);
      piVar10 = (int *)((int)piVar14 + *piVar14);
      puVar38 = unaff_EDI;
      uVar39 = in_ES;
      if (SCARRY4((int)piVar14,*piVar14)) {
        do {
          out(*puVar30,(short)param_2);
          puVar36 = puVar30 + (uint)bVar42 * -2 + 1 + (uint)bVar42 * -2 + 1;
          out(puVar30[(uint)bVar42 * -2 + 1],(short)param_2);
          *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
code_r0x00402ae7:
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                *(byte *)(unaff_EBP - 0x60),(char)unaff_EBX));
          cVar6 = (char)piVar10;
          *(char *)piVar10 = (char)*piVar10 + cVar6;
          uVar17 = (undefined3)((uint)piVar10 >> 8);
          bVar5 = cVar6 + 2;
          in_EAX = (byte *)CONCAT31(uVar17,bVar5);
          unaff_ESI = puVar36;
          if ((POPCOUNT(bVar5) & 1U) != 0) {
            *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)param_1;
            bVar31 = *in_EAX;
            *in_EAX = *in_EAX + bVar5;
            *puVar38 = (uint)((int)param_2 + (uint)CARRY1(bVar31,bVar5) + *puVar38);
            unaff_EDI = puVar38;
            in_ES = uVar39;
            goto code_r0x00402a95;
          }
          *in_EAX = *in_EAX + bVar5;
          cVar6 = cVar6 + '}';
          pcVar9 = (char *)CONCAT31(uVar17,cVar6);
          *pcVar9 = (*pcVar9 - cVar6) - (0x84 < bVar5);
          pbVar19 = (byte *)((int)param_2 + (int)pcVar9);
          *pbVar19 = *pbVar19 + cVar6;
          bVar5 = POPCOUNT(*pbVar19);
code_r0x00402af9:
          in_ES = uVar39;
          unaff_EDI = puVar38;
          if ((bVar5 & 1) == 0) {
            *pcVar9 = *pcVar9 + (char)pcVar9;
            bVar5 = (byte)param_1;
            *(byte *)param_2 = (byte)*param_2 + bVar5;
            param_3 = (uint *)CONCAT22(param_3._2_2_,unaff_retaddr);
            puVar36 = unaff_ESI + (uint)bVar42 * -2 + 1;
            out(*unaff_ESI,(short)param_2);
            uVar11 = *param_2;
            *(byte *)param_2 = (byte)*param_2 + bVar5;
            iVar8 = CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + 'o') +
                    *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar11,bVar5);
            pcVar9 = (char *)CONCAT31((int3)((uint)iVar8 >> 8),(char)iVar8 + '(');
            goto code_r0x00402b10;
          }
code_r0x00402a9b:
          uVar17 = (undefined3)((uint)pcVar9 >> 8);
          cVar6 = (char)pcVar9 + '\r';
          piVar10 = (int *)CONCAT31(uVar17,cVar6);
          *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar10;
          *(char *)piVar10 = (char)*piVar10 + cVar6;
          *(byte *)(unaff_ESI + -0xc800000) = (byte)unaff_ESI[-0xc800000] + (char)param_2;
          *(char *)piVar10 = (char)*piVar10 + cVar6;
          *(byte *)param_2 = (byte)*param_2 + cVar6;
          cVar34 = (char)param_1;
          if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
            *(byte *)param_2 = (byte)*param_2 + cVar34;
            out(*unaff_ESI,(short)param_2);
            piVar14 = (int *)((longlong)*piVar10 * 0x7b020a00);
            *(char *)piVar14 =
                 (char)*piVar14 - ((longlong)(int)piVar14 != (longlong)*piVar10 * 0x7b020a00);
            pbVar19 = (byte *)((int)unaff_EDI + unaff_EBP * 2);
            *pbVar19 = *pbVar19;
            puVar30 = unaff_ESI + (uint)bVar42 * -2 + 1;
            goto code_r0x00402a61;
          }
          *(char *)piVar10 = (char)*piVar10 + cVar6;
          puVar30 = (uint *)CONCAT31(uVar17,(char)pcVar9 + ':');
          puVar36 = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + -0x79));
          iVar8 = (int)puVar30 + *puVar30;
          if (SCARRY4((int)puVar30,*puVar30)) {
            unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                  (byte)puVar36[(int)unaff_EBX],(char)unaff_EBX));
            *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar8;
            puVar38 = unaff_EDI;
            do {
              piVar10 = (int *)(iVar8 + 0xe2802);
              *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)param_1 >> 8);
              uVar39 = in_ES;
              in_ES = unaff_retaddr;
              while( true ) {
                bVar31 = (byte)unaff_EBX | (byte)((uint)param_1 >> 8);
                unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar31);
                *piVar10 = (int)(*piVar10 + (int)piVar10);
                cVar6 = (char)piVar10;
                *(byte *)param_2 = (byte)*param_2 + cVar6;
                if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
                *(char *)piVar10 = (char)*piVar10 + cVar6;
                uVar11 = CONCAT31((int3)((uint)piVar10 >> 8),cVar6 + '\x13');
                pcVar9 = (char *)(uVar11 + 0x19061224 + (uint)(0x1f9edfd < uVar11));
                uVar1 = (uint)(0xe4ffffdd < uVar11 + 0xfe061202 ||
                              CARRY4(uVar11 + 0x19061224,(uint)(0x1f9edfd < uVar11)));
                uVar32 = *puVar36;
                uVar11 = *puVar36;
                *puVar36 = (uint)(pcVar9 + uVar11 + uVar1);
                bVar5 = POPCOUNT(*puVar36 & 0xff);
                unaff_ESI = puVar36;
                if ((SCARRY4(uVar32,(int)pcVar9) != SCARRY4((int)(pcVar9 + uVar11),uVar1)) ==
                    (int)*puVar36 < 0) goto code_r0x00402af9;
                bVar5 = (byte)pcVar9;
                *pcVar9 = *pcVar9 + bVar5;
                iVar8 = CONCAT31((int3)((uint)pcVar9 >> 8),bVar5 + 2) + 0x9d7d +
                        (uint)(0xfd < bVar5);
                bVar5 = (byte)param_2 | (byte)*param_2;
                uVar11 = *unaff_EBX;
                *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar31;
                pcVar9 = (char *)(CONCAT31((int3)((uint)iVar8 >> 8),(char)iVar8 + '\x12') + 0x228b26
                                  + *puVar38 + (uint)CARRY1((byte)uVar11,bVar31));
                cVar6 = bVar5 + (byte)*param_1;
                param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar6);
                if (SCARRY1(bVar5,(byte)*param_1) == cVar6 < '\0') break;
                *pcVar9 = *pcVar9 + (char)pcVar9;
                cVar6 = (char)pcVar9 + '\x02';
                pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6);
                bVar5 = POPCOUNT(cVar6);
                uVar39 = in_ES;
code_r0x00402b7a:
                puVar30 = puVar36;
                if ((bVar5 & 1) != 0) break;
                while( true ) {
                  cVar6 = (char)pcVar9;
                  *pcVar9 = *pcVar9 + cVar6;
                  uVar17 = (undefined3)((uint)pcVar9 >> 8);
                  pcVar9 = (char *)CONCAT31(uVar17,cVar6 + '\x13');
                  *(byte *)param_1 = (byte)*param_1 | (byte)param_2;
                  *(byte *)puVar38 = (byte)*puVar38 | (byte)param_2;
                  *param_2 = (uint)(pcVar9 + *param_2);
                  uVar26 = (undefined2)((uint)unaff_EBX >> 0x10);
                  uVar18 = SUB41(unaff_EBX,0);
                  cVar34 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
                  unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar34,uVar18));
                  *pcVar9 = *pcVar9 + cVar6 + '\x13';
                  piVar10 = (int *)CONCAT31(uVar17,cVar6 + -0x7a);
                  uVar11 = *param_2;
                  *(byte *)param_2 = (byte)*param_2 + (char)param_1;
                  uVar40 = in_CS;
                  if (SCARRY1((byte)uVar11,(char)param_1) == (char)(byte)*param_2 < '\0') break;
                  *(char *)piVar10 = (char)*piVar10 + cVar6 + -0x7a;
                  cVar7 = cVar6 + -0x78;
                  piVar10 = (int *)CONCAT31(uVar17,cVar7);
                  uVar40 = uVar39;
                  if ((POPCOUNT(cVar7) & 1U) != 0) break;
                  *(char *)piVar10 = (char)*piVar10 + cVar7;
                  pcVar9 = (char *)CONCAT31(uVar17,cVar6 + -0x65);
                  *param_1 = *param_1 | (uint)param_2;
                  *puVar38 = *puVar38 | (uint)param_2;
                  pbVar19 = (byte *)((int)param_1 + -1);
                  cVar34 = cVar34 + *(byte *)((int)unaff_EBX + -0x5e);
                  unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar34,uVar18));
                  *pcVar9 = *pcVar9 + cVar6 + -0x65;
                  bVar5 = cVar6 + 10;
                  puVar12 = (uint *)CONCAT31(uVar17,bVar5);
                  bVar31 = (byte)pbVar19;
                  *(byte *)param_2 = (byte)*param_2 + bVar31;
                  puVar36 = puVar30 + (uint)bVar42 * -2 + 1;
                  out(*puVar30,(short)param_2);
                  uVar11 = *param_2;
                  *(byte *)param_2 = (byte)*param_2 + bVar31;
                  uVar2 = (uint)CARRY1((byte)uVar11,bVar31);
                  uVar11 = *param_2;
                  uVar32 = *param_2;
                  pbVar20 = pbVar19 + uVar32 + uVar2;
                  uVar4 = *param_2;
                  cRam130a0000 = cRam130a0000 - cVar34;
                  uVar1 = *param_2;
                  unaff_EBP = unaff_EBP | *puVar12;
                  *(byte *)puVar12 = (char)*puVar12 + bVar5;
                  param_1 = (uint *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                             CONCAT11((byte)((uint)pbVar20 >> 8) | bRam7d170243,
                                                      (char)pbVar20 + (byte)uVar4 +
                                                      (CARRY4((uint)pbVar19,uVar11) ||
                                                      CARRY4((uint)(pbVar19 + uVar32),uVar2))));
                  bVar42 = (unaff_retaddr & 0x400) != 0;
                  in_AF = (unaff_retaddr & 0x10) != 0;
                  *(byte *)puVar12 = (char)*puVar12 + bVar5;
                  bVar41 = 0xfd < bVar5;
                  pcVar9 = (char *)CONCAT31(uVar17,cVar6 + '\f');
                  param_2 = (uint *)((uint)param_2 | uVar1);
code_r0x00402bd1:
                  uVar11 = *unaff_EBX;
                  uVar32 = *unaff_EBX;
                  *unaff_EBX = (uint)((byte *)(uVar32 + (int)param_1) + bVar41);
                  bVar5 = POPCOUNT(*unaff_EBX & 0xff);
                  uVar39 = unaff_retaddr;
                  if ((SCARRY4(uVar11,(int)param_1) !=
                      SCARRY4((int)(uVar32 + (int)param_1),(uint)bVar41)) == (int)*unaff_EBX < 0)
                  goto code_r0x00402b7a;
                  cVar6 = (char)pcVar9;
                  *pcVar9 = *pcVar9 + cVar6;
                  pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6 + '\x02');
                  if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                    *pcVar9 = *pcVar9 + (char)pcVar9;
                    pcVar9 = (char *)(CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + '\x12') |
                                     *param_2);
                    *(byte *)puVar38 = (byte)*puVar38 - (char)param_1;
                    *pcVar9 = *pcVar9 + (char)pcVar9;
                    puVar30 = (uint *)((int)param_2 - *puVar36);
                    bVar5 = (byte)unaff_EBX | (byte)((uint)param_1 >> 8);
                    cVar6 = *pcVar9;
                    uVar17 = (undefined3)((uint)pcVar9 >> 8);
                    pcVar9 = (char *)CONCAT31(uVar17,cVar6);
                    *pcVar9 = *pcVar9 + cVar6;
                    pcVar33 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                        *(char *)(CONCAT31((int3)((uint)unaff_EBX >>
                                                                                 8),bVar5) + -0x5b),
                                                        bVar5));
                    *pcVar9 = *pcVar9 + cVar6;
                    bVar41 = false;
                    pcVar9 = (char *)(CONCAT31(uVar17,cVar6 + '\x13') | *puVar30);
                    do {
                      bVar31 = (byte)param_1;
                      bVar5 = bVar31 + (byte)puVar36[(int)puVar38 * 2];
                      param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar5 + bVar41);
                      uVar11 = (uint)(CARRY1(bVar31,(byte)puVar36[(int)puVar38 * 2]) ||
                                     CARRY1(bVar5,bVar41));
                      pcVar13 = pcVar9 + 0x1b000019 + uVar11;
                      piVar14 = (int *)((int)puVar38 * 2 + 0x40000a5);
                      *piVar14 = (int)((int)param_1 +
                                      (uint)((char *)0xe4ffffe6 < pcVar9 ||
                                            CARRY4((uint)(pcVar9 + 0x1b000019),uVar11)) + *piVar14);
                      puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),
                                                 (char)puVar30 + cRam00009d7d);
                      uVar17 = (undefined3)((uint)pcVar13 >> 8);
                      bVar5 = (char)pcVar13 + 0x12;
                      in_AF = 9 < (bVar5 & 0xf) | in_AF;
                      uVar11 = CONCAT31(uVar17,bVar5 + in_AF * -6) & 0xffffff0f;
                      pcVar9 = (char *)CONCAT22((short)(uVar11 >> 0x10),
                                                CONCAT11((char)((uint)pcVar13 >> 8) - in_AF,
                                                         (char)uVar11));
                      uVar11 = unaff_EBP | *(uint *)CONCAT31(uVar17,bVar5);
                      while( true ) {
                        *pcVar9 = *pcVar9 + (char)pcVar9;
                        puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),
                                                   (byte)puVar30 | (byte)*puVar30);
                        puVar38 = (uint *)((uint)puVar38 | (uint)puVar36);
                        uVar32 = (uint)pcVar33 | (uint)puVar36;
                        unaff_EBP = uVar11 + 1;
                        param_3 = (uint *)CONCAT22(param_3._2_2_,in_ES);
                        cVar34 = (char)(pcVar9 + 0x1b000019);
                        uVar17 = (undefined3)((uint)(pcVar9 + 0x1b000019) >> 8);
                        cVar6 = cVar34 + -0x13;
                        pcVar9 = (char *)CONCAT31(uVar17,cVar6);
                        uVar26 = (undefined2)(uVar32 >> 0x10);
                        cVar7 = (char)(uVar32 >> 8) + *(char *)(uVar32 - 0x5e);
                        unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar7,(byte)uVar32));
                        *pcVar9 = *pcVar9 + cVar6;
                        pcVar9 = (char *)(CONCAT31(uVar17,cVar34 + '\x19') | *puVar30);
                        bVar5 = (byte)pcVar9;
                        if ((POPCOUNT((uint)pcVar9 & 0xff) & 1U) != 0) {
                          pbVar19 = (byte *)((int)puVar30 + (int)pcVar9);
                          bVar41 = CARRY1(*pbVar19,bVar5);
                          *pbVar19 = *pbVar19 + bVar5;
                          param_2 = puVar30;
                          goto code_r0x00402bd1;
                        }
                        *pcVar9 = *pcVar9 + bVar5;
                        uVar17 = (undefined3)((uint)pcVar9 >> 8);
                        pcVar33 = (char *)CONCAT31(uVar17,bVar5 + 0x6f);
                        param_2 = (uint *)((int)puVar30 + 1);
                        *pcVar33 = *pcVar33 + bVar5 + 0x6f;
                        bVar31 = (byte)uVar32 | (byte)((uint)pcVar9 >> 8);
                        pcVar9 = (char *)CONCAT31(uVar17,bVar5 + 0x5c);
                        cVar7 = cVar7 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar31) +
                                                 -0x5f);
                        unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar7,bVar31));
                        *pcVar9 = *pcVar9 + bVar5 + 0x5c;
                        pcVar9 = (char *)(CONCAT31(uVar17,bVar5 + 0x88) | *param_2);
                        if ((POPCOUNT((uint)pcVar9 & 0xff) & 1U) != 0) {
                          *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)param_1 >> 8);
                          param_3 = (uint *)((uint)param_3._2_2_ << 0x10);
                          goto code_r0x00402bdb;
                        }
                        *pcVar9 = *pcVar9 + (char)pcVar9;
                        uVar17 = (undefined3)((uint)pcVar9 >> 8);
                        cVar6 = (char)pcVar9 + 'o';
                        puVar30 = (uint *)((int)puVar30 + 2);
                        *(char *)CONCAT31(uVar17,cVar6) = *(char *)CONCAT31(uVar17,cVar6) + cVar6;
                        pcVar33 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                   bVar31 | (byte)((uint)pcVar9 >> 8));
                        pcVar9 = (char *)(CONCAT31(uVar17,cVar6) | 2);
                        *(char *)(uVar11 - 0x62) = *(char *)(uVar11 - 0x62) + '\x01';
                        bVar5 = (byte)pcVar9;
                        *pcVar9 = *pcVar9 + bVar5;
                        bVar41 = 0xfd < bVar5;
                        cVar6 = bVar5 + 2;
                        pcVar9 = (char *)CONCAT31(uVar17,cVar6);
                        in_DS = in_ES;
                        if (SCARRY1(bVar5,'\x02') != cVar6 < '\0') break;
                        *pcVar9 = *pcVar9 + cVar6;
                        bVar31 = bVar5 + 10;
                        pcVar9 = (char *)CONCAT31(uVar17,bVar31);
                        *pcVar9 = *pcVar9 - cVar7;
                        cVar34 = (char)param_1;
                        *(byte *)puVar30 = *(byte *)puVar30 + cVar34;
                        *(char *)(uVar11 - 0x62) = *(char *)(uVar11 - 0x62) + '\x01';
                        *pcVar9 = *pcVar9 + bVar31;
                        cVar6 = bVar5 + 0xc;
                        pcVar9 = (char *)CONCAT31(uVar17,cVar6);
                        if (SCARRY1(bVar31,'\x02') == cVar6 < '\0') {
                          *pcVar9 = *pcVar9 + cVar6;
                          *(byte *)param_1 = (byte)*param_1 - cVar7;
                          *(byte *)puVar30 = *(byte *)puVar30 + cVar34;
                          cVar6 = (bVar5 + 0x13) - (byte)param_1[0x13];
                          pcVar9 = (char *)CONCAT31(uVar17,cVar6);
                          *pcVar9 = *pcVar9 + cVar6;
                          pcVar13 = (char *)CONCAT31(uVar17,cVar6 + *pcVar9);
                          *pcVar13 = *pcVar13 + cVar6 + *pcVar9;
                          pcVar13 = pcVar13 + *param_1;
                          *pcVar13 = *pcVar13 + (char)pcVar13;
                          LOCK();
                          pcVar9 = *(char **)pcVar13;
                          *(char **)pcVar13 = pcVar13;
                          UNLOCK();
                          *pcVar9 = *pcVar9 + (char)pcVar9;
                          pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),(byte)*param_1);
                          *pbVar19 = *pbVar19 + (byte)*param_1;
                          goto code_r0x00402c8d;
                        }
                        param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),
                                                   cVar34 + *pcVar33 + (0xfd < bVar31));
                        *(byte *)puVar38 = (byte)*puVar38 - cVar7;
                        uVar11 = unaff_EBP;
                      }
                    } while( true );
                  }
                  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                        *(byte *)((int)unaff_EBX + -99),
                                                        (char)unaff_EBX));
                  puVar30 = puVar36;
                }
                *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
                param_2 = (uint *)((int)param_2 - *puVar30);
                puVar36 = puVar30;
                uVar39 = in_ES;
                in_ES = uVar40;
              }
              *(byte *)param_2 = (byte)*param_2 + (char)param_1;
              pcVar9 = pcVar9 + -0x7d160243;
code_r0x00402b10:
              uVar11 = *param_2;
              bVar31 = (byte)param_1;
              *(byte *)param_2 = (byte)*param_2 + bVar31;
              pcVar9 = pcVar9 + (uint)CARRY1((byte)uVar11,bVar31) + iRam73280512;
              bVar5 = (byte)pcVar9;
              *pcVar9 = *pcVar9 + bVar5;
              param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                         CONCAT11((byte)((uint)param_1 >> 8) | bRam7d160243,bVar31))
              ;
              bVar42 = ((uint)param_3 & 0x400) != 0;
              in_AF = ((uint)param_3 & 0x10) != 0;
              *pcVar9 = *pcVar9 + bVar5;
              uVar17 = (undefined3)((uint)pcVar9 >> 8);
              iRam0000a37d = iRam0000a37d + CONCAT31(uVar17,bVar5 + 2) + (uint)(0xfd < bVar5);
              cVar6 = bVar5 + 4;
              if (SCARRY1(bVar5 + 2,'\x02') != cVar6 < '\0') {
                pcVar9 = (char *)CONCAT31(uVar17,uRam16040000);
                goto code_r0x00402ad2;
              }
              *(char *)CONCAT31(uVar17,cVar6) = *(char *)CONCAT31(uVar17,cVar6) + cVar6;
              iVar8 = CONCAT31(uVar17,bVar5 + 0x16);
            } while( true );
          }
          uVar17 = (undefined3)((uint)iVar8 >> 8);
          cVar6 = (char)iVar8 + CARRY4((uint)puVar30,*puVar30);
          piVar14 = (int *)CONCAT31(uVar17,cVar6);
          *(byte *)param_2 = (byte)*param_2 + cVar34;
          bVar41 = (POPCOUNT((byte)*param_2) & 1U) != 0;
          if ((bVar41) && (puVar30 = puVar36, bVar41)) goto code_r0x00402a61;
          *(char *)piVar14 = (char)*piVar14 + cVar6;
          cVar7 = cVar6 + '(';
          pcVar9 = (char *)CONCAT31(uVar17,cVar7);
          puVar38 = unaff_EDI + (uint)bVar42 * -2 + 1;
          uVar11 = in((short)param_2);
          *unaff_EDI = uVar11;
          *pcVar9 = *pcVar9 + cVar7;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((byte)((uint)param_1 >> 8) | bRama07b0222,cVar34));
          *pcVar9 = *pcVar9 + cVar7;
          pcVar9 = (char *)CONCAT31(uVar17,cVar6 + '>');
code_r0x00402ad2:
          out(*puVar36,(short)param_2);
          unaff_ESI = (uint *)((int)(puVar36 + (uint)bVar42 * -2 + 1) + (uint)bVar42 * -2 + 1);
          out((byte)puVar36[(uint)bVar42 * -2 + 1],(short)param_2);
          bVar5 = (byte)pcVar9;
          *pcVar9 = *pcVar9 + bVar5;
          unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar38
                                      );
          in_AF = 9 < (bVar5 & 0xf) | in_AF;
          uVar17 = (undefined3)((uint)pcVar9 >> 8);
          bVar5 = bVar5 + in_AF * -6;
          param_2 = (uint *)((uint)param_2 ^ *param_2);
          cVar6 = bVar5 + (0x9f < bVar5 | in_AF * (bVar5 < 6)) * -0x60 + (byte)*param_2;
          piVar14 = (int *)CONCAT31(uVar17,cVar6);
          unaff_EDI = puVar38;
          if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
          *(char *)piVar14 = (char)*piVar14 + cVar6;
          piVar10 = (int *)CONCAT31(uVar17,cVar6 + '\x17');
          puVar30 = unaff_ESI;
          uVar39 = in_ES;
        } while( true );
      }
      param_3 = (uint *)0x0;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      unaff_ESI = puVar30 + (uint)bVar42 * -2 + 1;
      out(*puVar30,uVar26);
    }
    bVar5 = (byte)((uint)param_1 >> 8) | (byte)*param_2;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar5,(char)param_1));
    piVar14 = (int *)(uint)(byte)*unaff_EBX;
    *(byte *)unaff_ESI = (byte)*unaff_ESI - bVar5;
code_r0x00402a7f:
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    out(*unaff_ESI,(short)param_2);
    bVar5 = in((short)param_2);
    *(byte *)unaff_EDI = bVar5;
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
    unaff_ESI = (uint *)((int)unaff_ESI + (((uint)bVar42 * -8 + 4) - *piVar14));
    cVar6 = in(1);
    puVar30 = (uint *)CONCAT31((int3)((uint)((int)piVar14 + *piVar14) >> 8),cVar6);
    *(char *)puVar30 = (char)*puVar30 + cVar6;
    in_EAX = (byte *)((uint)puVar30 | *puVar30);
    *(byte *)param_1 = (byte)*param_1 + (char)param_2;
    unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar42 * -2 + 1);
    unaff_retaddr = in_ES;
  } while( true );
  do {
    while( true ) {
      cVar25 = (char)param_1;
      cVar22 = (char)((uint)param_1 >> 8) + (char)((uint)pbVar19 >> 8);
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar22,cVar25));
      cVar6 = (char)pbVar19;
      *pbVar19 = *pbVar19 + cVar6;
      pcVar9 = (char *)((int)pbVar19 * 2 + 0x1a10000);
      cVar7 = (char)((uint)pcVar33 >> 8);
      *pcVar9 = *pcVar9 + cVar7;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
      pbVar19[-0x47ffffff] = pbVar19[-0x47ffffff] + cVar7;
      *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
      bVar31 = (byte)puVar30;
      *(byte *)puVar38 = (byte)*puVar38 + bVar31;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + bVar31;
      *pbVar19 = *pbVar19 + cVar6;
      *puVar36 = (uint)(*puVar36 + (int)puVar36);
      uVar26 = (undefined2)((uint)pcVar33 >> 0x10);
      cVar7 = cVar7 + (byte)puVar36[(int)pcVar33];
      pcVar9 = (char *)CONCAT22(uVar26,CONCAT11(cVar7,(char)pcVar33));
      pcVar9[(int)pbVar19] = pcVar9[(int)pbVar19] + cVar6;
      *(byte *)puVar30 = *(byte *)puVar30 - cVar7;
      *(byte *)puVar30 = *(byte *)puVar30 + cVar25;
      uVar17 = (undefined3)((uint)pbVar19 >> 8);
      bVar5 = cVar6 - *pbVar19;
      *pcVar9 = *pcVar9 + bVar31;
      *(byte *)puVar30 = *(byte *)puVar30 ^ bVar5;
      *(byte *)puVar30 = *(byte *)puVar30 + bVar5;
      *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
      uVar32 = *param_1;
      *(byte *)param_1 = (byte)*param_1 + bVar31;
      cVar34 = bVar5 + *(char *)CONCAT31(uVar17,bVar5) + CARRY1((byte)uVar32,bVar31);
      pcVar33 = (char *)CONCAT22(uVar26,CONCAT11(cVar7 + *(char *)(uVar11 - 0x60),(char)pcVar33));
      *(char *)CONCAT31(uVar17,cVar34) = *(char *)CONCAT31(uVar17,cVar34) + cVar34;
      cVar7 = cVar34 + '\x12';
      pbVar19 = (byte *)CONCAT31(uVar17,cVar7);
      cVar6 = *pcVar33;
      *pcVar33 = *pcVar33 + cVar7;
      if (SCARRY1(cVar6,cVar7) != *pcVar33 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar19;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
      *(byte *)puVar30 = *(byte *)puVar30 + cVar6;
      *pbVar19 = *pbVar19 + cVar6;
    }
    *pbVar19 = *pbVar19 + cVar7;
    pbVar19 = (byte *)CONCAT31(uVar17,cVar34 + '$');
    *pbVar19 = *pbVar19 + cVar22;
    bVar5 = *(byte *)puVar30;
    *(byte *)puVar30 = *(byte *)puVar30 + cVar25;
    uVar40 = in_ES;
    uVar39 = param_4;
  } while (SCARRY1(bVar5,cVar25) == (char)*(byte *)puVar30 < '\0');
  do {
    cVar6 = (char)pbVar19;
    *pbVar19 = *pbVar19 + cVar6;
    uVar17 = (undefined3)((uint)pbVar19 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar30;
    bVar31 = cVar6 + 0x24;
    cVar7 = (char)((uint)pcVar33 >> 8);
    pcVar33[-0x62] = pcVar33[-0x62] + cVar7;
    *(char *)CONCAT31(uVar17,bVar31) = *(char *)CONCAT31(uVar17,bVar31) + bVar31;
    bVar5 = cVar6 + 0x2fU + (byte)*param_1;
    cVar34 = bVar5 + (0xf4 < bVar31);
    cVar6 = cVar34 + *(char *)CONCAT31(uVar17,cVar34) +
            (CARRY1(cVar6 + 0x2fU,(byte)*param_1) || CARRY1(bVar5,0xf4 < bVar31));
    pcVar9 = (char *)CONCAT31(uVar17,cVar6);
    *pcVar9 = *pcVar9 - (char)puVar30;
    *pcVar9 = *pcVar9 + cVar6;
    pcVar13 = (char *)((int)puVar30 - *puVar30);
    *(byte *)(puVar36 + (int)pcVar33) = (byte)puVar36[(int)pcVar33] + cVar7;
    pcVar9[unaff_EBP] = pcVar9[unaff_EBP] + cVar6;
    *pcVar13 = *pcVar13 + (char)param_1;
    pcVar9 = (char *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                              CONCAT11((char)((uint)pbVar19 >> 8) - *pcVar13,cVar6));
    uVar11 = *puVar38;
    *pcVar9 = *pcVar9 - (char)((uint)pcVar13 >> 8);
    *pcVar9 = *pcVar9 + cVar6;
    param_3 = (uint *)CONCAT22(param_3._2_2_,uVar40);
    pbVar20 = (byte *)CONCAT22((short)((uint)pcVar33 >> 0x10),
                               CONCAT11(cVar7 - (byte)*puVar36,(char)pcVar33));
    unaff_EBP = unaff_EBP + *(int *)(pbVar20 + (int)param_1);
    puVar12 = (uint *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + (byte)uVar11);
    while( true ) {
      puVar30 = puVar12;
      uVar26 = (undefined2)((uint)pbVar20 >> 0x10);
      bVar35 = (char)((uint)pbVar20 >> 8) + pbVar20[0x18];
      *pcVar9 = *pcVar9 + (char)pcVar9;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + 'o');
      cVar6 = (char)param_1;
      *(byte *)puVar30 = (byte)*puVar30 + cVar6;
      uVar11 = *puVar36;
      bVar28 = (byte)((uint)param_1 >> 8);
      bVar5 = *pbVar19;
      pbVar19 = pbVar19 + (uint)CARRY1(bVar28,*pbVar19) + *(int *)pbVar19;
      *(byte *)puVar30 = (byte)*puVar30 + cVar6;
      cVar34 = ((char)pbVar20 - (byte)uVar11) - (byte)*puVar36;
      bVar31 = *(byte *)((int)puVar38 + 0x1a);
      *pbVar19 = *pbVar19 + (char)pbVar19;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11(bVar28 + bVar5 + bVar31 | (byte)*puVar30,cVar6));
      pbVar19 = pbVar19 + *puVar30;
      if ((POPCOUNT((uint)pbVar19 & 0xff) & 1U) != 0) break;
      *pbVar19 = *pbVar19 + (char)pbVar19;
      bVar5 = (char)pbVar19 + 0x6f;
      pcVar9 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar5);
      pcVar33 = (char *)(CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar35,(char)pbVar20)) >> 8),
                                  cVar34) + -1);
      *pcVar9 = *pcVar9 + bVar5;
      *pcVar9 = *pcVar9 + bVar5;
      *pcVar33 = *pcVar33 + (byte)puVar30;
      *(byte *)((int)pcVar9 * 2) = *(byte *)((int)pcVar9 * 2) ^ bVar5;
      uVar3 = *(undefined6 *)pcVar9;
      uVar40 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar9 = (char *)uVar3;
      *pcVar9 = *pcVar9 + (char)uVar3;
      *(byte *)puVar36 = (byte)*puVar36 + (char)uVar3;
      pcVar9 = (char *)((uint)pcVar9 | 0x73110008);
      bVar35 = (byte)((uint)pcVar33 >> 8);
      *(byte *)puVar38 = (byte)*puVar38 - bVar35;
      *(byte *)puVar30 = (byte)*puVar30 + cVar6;
      puVar12 = puVar36 + (uint)bVar42 * -2 + 1;
      out(*puVar36,(short)puVar30);
      *pcVar9 = *pcVar9;
      cVar6 = (char)pcVar9;
      *pcVar9 = *pcVar9 + cVar6;
      bVar5 = *(byte *)(unaff_EBP - 0x5a);
      uVar26 = (undefined2)((uint)pcVar33 >> 0x10);
      cVar34 = (char)pcVar33;
      *pcVar9 = *pcVar9 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar11 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      param_1 = (uint *)(uVar11 | 0x73110000);
      puVar36 = puVar12 + (uint)bVar42 * -2 + 1;
      out(*puVar12,(short)puVar30);
      *(byte *)param_1 = (byte)*param_1;
      bVar28 = (byte)puVar30 | (byte)*puVar38;
      puVar12 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar28);
      *(byte *)param_1 = (byte)*param_1 + cVar6;
      pcVar9 = (char *)(uVar11 | 0x7b1f1609);
      bVar42 = (uVar39 & 0x400) != 0;
      *(uint *)((int)puVar38 + -0x7d) = *(uint *)((int)puVar38 + -0x7d) | unaff_EBP;
      bVar31 = (byte)pcVar9;
      *pcVar9 = *pcVar9 + bVar31;
      bVar35 = bVar35 | bVar5 | *(byte *)((int)puVar36 + 0x19);
      pbVar20 = (byte *)CONCAT22(uVar26,CONCAT11(bVar35,cVar34));
      *pcVar9 = *pcVar9 + bVar31;
      uVar17 = (undefined3)((uint)pcVar9 >> 8);
      puVar36[(int)puVar38 * 2] =
           (uint)((int)puVar12 + (uint)(0xd2 < bVar31) + puVar36[(int)puVar38 * 2]);
      bVar5 = bVar31 + 0x2d ^ *(byte *)CONCAT31(uVar17,bVar31 + 0x2d);
      pcVar9 = (char *)CONCAT31(uVar17,bVar5);
      uVar11 = *puVar36;
      *(byte *)puVar36 = (byte)*puVar36 + bVar5;
      uVar39 = uVar40;
      if (CARRY1((byte)uVar11,bVar5)) {
        *pcVar9 = *pcVar9 + bVar5;
        bVar5 = bVar5 | pcVar9[0x4000019];
        pcVar9 = (char *)CONCAT31(uVar17,bVar5);
        if ('\0' < (char)bVar5) {
          *pcVar9 = *pcVar9 + bVar5;
          piVar14 = (int *)CONCAT31(uVar17,bVar5 + 0x28);
          *piVar14 = (int)piVar14 + (uint)(0xd7 < bVar5) + *piVar14;
          bVar23 = (byte)((uint6)uVar3 >> 8);
          *pbVar20 = *pbVar20 + bVar23;
          uVar27 = CONCAT11((byte)((uint)puVar30 >> 8) | bVar35,bVar28);
          puVar12 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),uVar27);
          param_3 = (uint *)CONCAT22(param_3._2_2_,uVar40);
          bVar28 = in(uVar27);
          pbVar19 = (byte *)CONCAT31(uVar17,bVar28);
          bVar31 = *pbVar19;
          bVar41 = SCARRY1(*pbVar19,bVar28);
          *pbVar19 = *pbVar19 + bVar28;
          bVar5 = *pbVar19;
          puVar30 = puVar36;
          unaff_retaddr = uVar40;
          if (!CARRY1(bVar31,bVar28)) goto code_r0x00402e19;
          *pbVar19 = *pbVar19 + bVar28;
          bVar23 = bVar23 | *pbVar19;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar23,cVar6));
          pcVar9 = (char *)CONCAT31(uVar17,bVar28 + *pbVar19);
          *pbVar20 = *pbVar20 + bVar23;
        }
        uVar17 = (undefined3)((uint)pcVar9 >> 8);
        bVar31 = (byte)pcVar9 | (byte)*puVar12;
        pbVar19 = (byte *)CONCAT31(uVar17,bVar31);
        puVar30 = puVar36 + (uint)bVar42 * -2 + 1;
        out(*puVar36,(short)puVar12);
        LOCK();
        bVar5 = *pbVar19;
        *pbVar19 = bVar31;
        UNLOCK();
        *(byte *)puVar12 = (byte)*puVar12 + (char)param_1;
        piVar14 = (int *)(CONCAT31(uVar17,bVar5) + -0x1b7e07);
        *(byte *)puVar12 = (byte)*puVar12 + (char)param_1;
        iVar8 = (int)param_1 - *(int *)pbVar20;
        bVar5 = *(byte *)((int)puVar38 + -0x7a);
        uVar27 = (undefined2)((uint)iVar8 >> 0x10);
        *(char *)piVar14 = *(char *)piVar14 + (char)piVar14;
        bVar31 = (char)((uint)iVar8 >> 8) + bVar5 | *(byte *)((int)puVar38 + 0x17);
        *(char *)piVar14 = *(char *)piVar14 + (char)piVar14;
        uVar17 = (undefined3)(CONCAT22(uVar27,CONCAT11(bVar31,(byte)iVar8)) >> 8);
        bVar5 = (byte)iVar8 | *pbVar20;
        param_1 = (uint *)CONCAT31(uVar17,bVar5);
        pbVar19 = (byte *)((int)piVar14 + *piVar14);
        puVar36 = puVar30;
        if (SCARRY4((int)piVar14,*piVar14)) goto code_r0x00402e0a;
        *(byte *)param_1 = (byte)*param_1 + bVar5;
        *(byte **)pbVar20 = (byte *)(*(int *)pbVar20 + (int)puVar12);
        piVar14 = (int *)CONCAT31(uVar17,bVar5 + 0x27);
        param_1 = (uint *)CONCAT22(uVar27,CONCAT11(bVar31 + *(byte *)((int)puVar38 + -0x79),bVar5));
        *(byte *)piVar14 = (char)*piVar14 + bVar5 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar33 = (char *)CONCAT22(uVar26,CONCAT11(bVar35 | *(byte *)(unaff_EBP - 0x62),cVar34));
  } while( true );
code_r0x00402dff:
  pbVar19 = (byte *)CONCAT22((short)((uint)piVar14 >> 0x10),
                             CONCAT11((byte)((uint)piVar14 >> 8) |
                                      *(byte *)((int)puVar12 + 0x2170411),(byte)piVar14));
  puVar36 = puVar30 + (uint)bVar42 * -2 + 1;
  out(*puVar30,(short)puVar12);
  *pbVar19 = (byte)piVar14;
  *(byte *)puVar12 = (byte)*puVar12 + (char)param_1;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar19;
  *pbVar19 = *pbVar19 - cVar34;
  *pbVar19 = *pbVar19 + (char)pbVar19;
  bVar41 = false;
  bVar5 = (byte)((uint)param_1 >> 8) | bRam052b0603;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar5,(char)param_1));
  puVar30 = puVar36;
code_r0x00402e19:
  if (bVar5 == 0 || bVar41 != (char)bVar5 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar19;
  *pbVar19 = *pbVar19 + cRam89280411;
  piVar14 = (int *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                            CONCAT11((byte)((uint)pbVar19 >> 8) |
                                     *(byte *)((int)puVar12 + 0x7190411),cRam89280411));
  *(char *)piVar14 = (char)*piVar14 + cRam89280411;
  cVar6 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar12,cVar6));
  puVar30 = (uint *)((int)puVar30 + *piVar14);
  pbVar19 = (byte *)((int)piVar14 + *piVar14);
  bVar31 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar31;
  *(byte *)puVar30 = (byte)*puVar30 + cVar6;
  bVar5 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar31;
  *(uint *)pbVar19 = *(int *)pbVar19 + unaff_EBP + (uint)CARRY1(bVar5,bVar31);
  piVar14 = (int *)CONCAT31((int3)((uint)pbVar19 >> 8),*pbVar19);
  *(byte *)puVar12 = (byte)*puVar12 + cVar6;
  puVar36 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),(byte)puVar12 | (byte)*puVar12);
  pbVar19 = (byte *)((int)puVar36 + -0x43);
  *pbVar19 = *pbVar19 + (char)((uint)puVar12 >> 8);
  puVar12 = puVar36;
  puVar36 = puVar38;
  uVar39 = in_ES;
code_r0x00402e42:
  in_ES = unaff_retaddr;
  puVar38 = puVar36;
  unaff_retaddr = in_ES;
  if (SCARRY4((int)piVar14,*piVar14)) goto code_r0x00402e6e;
  iVar8 = *(int *)((int)piVar14 + *piVar14);
  *(byte *)puVar12 = (byte)*puVar12 + (char)param_1;
  piVar14 = (int *)(iVar8 + -0x8c6f);
  puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                             CONCAT11((byte)((uint)puVar12 >> 8) | *(byte *)((int)puVar12 + -0x3f),
                                      (char)puVar12));
  pbVar15 = (byte *)((int)piVar14 + *piVar14);
  pbVar19 = pbVar15;
  puVar38 = param_3;
  if (SCARRY4((int)piVar14,*piVar14)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar15 = *pbVar15 + (char)pbVar15;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar12,(char)param_1));
  puVar36 = puVar30 + (uint)bVar42 * -2 + 1;
  out(*puVar30,(short)puVar12);
  puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),(char)puVar12 + (byte)*puVar38);
  puVar30 = puVar36 + (uint)bVar42 * -2 + 1;
  out(*puVar36,(short)puVar12);
  uVar39 = in_ES;
  unaff_retaddr = uVar40;
code_r0x00402e6e:
  in_ES = uVar39;
  uVar17 = (undefined3)((uint)puVar12 >> 8);
  cVar6 = (char)puVar12 + (byte)*puVar38;
  puVar36 = puVar30 + (uint)bVar42 * -2 + 1;
  out(*puVar30,(short)CONCAT31(uVar17,cVar6));
  puVar12 = (uint *)CONCAT31(uVar17,cVar6 + (byte)*puVar38);
  puVar30 = puVar36 + (uint)bVar42 * -2 + 1;
  out(*puVar36,(short)puVar12);
  pbVar19 = (byte *)0x0;
  puVar36 = puVar38;
code_r0x00402e81:
  puVar38 = puVar36;
  bVar31 = (char)pbVar19 - *pbVar19;
  iVar8 = CONCAT31((int3)((uint)pbVar19 >> 8),bVar31);
  *pbVar20 = *pbVar20 + (char)puVar12;
  pbVar15 = (byte *)(iVar8 * 2);
  *pbVar15 = *pbVar15 ^ bVar31;
  pbVar15 = (byte *)(int)(short)iVar8;
  *pbVar15 = *pbVar15 + bVar31;
  *(byte *)puVar38 = (byte)*puVar38 + (byte)param_1;
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar31;
  *(byte **)(pbVar20 + -0x73) =
       (byte *)((int)puVar30 + (uint)CARRY1(bVar5,bVar31) + *(int *)(pbVar20 + -0x73));
  *pbVar15 = *pbVar15 + bVar31;
  bVar5 = (byte)param_1 | (byte)*puVar12;
  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar5);
  puVar36 = puVar30;
  if ((char)bVar5 < '\x01') goto code_r0x00402eb4;
  *pbVar15 = *pbVar15 + bVar31;
  pbVar19 = (byte *)CONCAT31((int3)(char)((uint)pbVar19 >> 8),bVar31 + 0x2d);
  puVar30[(int)puVar38 * 2] =
       (uint)((int)puVar12 + (uint)(0xd2 < bVar31) + puVar30[(int)puVar38 * 2]);
  uStack_18 = CONCAT22(uStack_18._2_2_,uVar40);
  do {
    uVar11 = *puVar30;
    bVar5 = (byte)pbVar19;
    *(byte *)puVar30 = (byte)*puVar30 + bVar5;
    if (!CARRY1((byte)uVar11,bVar5)) break;
    *pbVar19 = *pbVar19 + bVar5;
    bVar5 = bVar5 | pbVar19[0x400001a];
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar5);
    if ((char)bVar5 < '\x01') {
code_r0x00402ecc:
      *pbVar15 = *pbVar15 + (byte)pbVar15;
      uVar17 = (undefined3)((uint)pbVar15 >> 8);
      bVar5 = (byte)pbVar15 | pbVar15[0x400001b];
      puVar37 = (uint *)CONCAT31(uVar17,bVar5);
      if ((char)bVar5 < '\x01') {
        uVar11 = *puVar12;
        *(byte *)puVar12 = (byte)*puVar12 + (byte)param_1;
        *(char *)((int)puVar37 * 2) =
             *(char *)((int)puVar37 * 2) - CARRY1((byte)uVar11,(byte)param_1);
        bVar41 = 0x81 < bVar5;
        bVar5 = bVar5 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar15 = *pbVar15 + bVar5;
      puVar36 = puVar30;
code_r0x00402eb4:
      uVar17 = (undefined3)((uint)pbVar15 >> 8);
      bVar5 = (char)pbVar15 + 0x6f;
      puVar37 = (uint *)CONCAT31(uVar17,bVar5);
      *puVar37 = uStack_18;
      uVar11 = *puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + (char)param_1;
      uStack_18 = CONCAT22(uStack_18._2_2_,uVar40);
      param_4 = uVar40;
      if ((byte)*puVar12 != 0 && SCARRY1((byte)uVar11,(char)param_1) == (char)(byte)*puVar12 < '\0')
      {
        *(byte *)puVar37 = (char)*puVar37 + bVar5;
        bVar31 = (char)pbVar15 + 0x9c;
        pbVar15 = (byte *)CONCAT31(uVar17,bVar31);
        puVar36[(int)puVar38 * 2] =
             (uint)((int)puVar12 + (uint)(0xd2 < bVar5) + puVar36[(int)puVar38 * 2]);
        uStack_18 = CONCAT22(uStack_18._2_2_,uVar40);
        uVar11 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + bVar31;
        puVar30 = puVar36;
        if (CARRY1((byte)uVar11,bVar31)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar30 = puVar36 + (uint)bVar42 * -2 + 1;
      out(*puVar36,(short)puVar12);
    }
    cVar6 = (char)puVar37;
    *(char *)puVar37 = (char)*puVar37 + cVar6;
    uVar17 = (undefined3)((uint)puVar37 >> 8);
    bVar5 = cVar6 + 0x6f;
    puVar36 = (uint *)CONCAT31(uVar17,bVar5);
    *puVar36 = uStack_18;
    uVar11 = *puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + (byte)param_1;
    uStack_18 = CONCAT22(uStack_18._2_2_,uVar40);
    *(byte *)(puVar30 + 7) = ((byte)puVar30[7] - bVar35) - CARRY1((byte)uVar11,(byte)param_1);
    *(byte *)puVar36 = (char)*puVar36 + bVar5;
    bVar31 = cVar6 + 0x9c;
    pcVar9 = (char *)CONCAT31(uVar17,bVar31);
    puVar30[(int)puVar38 * 2] =
         (uint)((int)puVar12 + (uint)(0xd2 < bVar5) + puVar30[(int)puVar38 * 2]);
    uVar11 = *puVar30;
    *(byte *)puVar30 = (byte)*puVar30 + bVar31;
    if (!CARRY1((byte)uVar11,bVar31)) goto code_r0x00402e7e;
    *pcVar9 = *pcVar9 + bVar31;
    bVar31 = bVar31 | pcVar9[0x400001c];
    pbVar19 = (byte *)CONCAT31(uVar17,bVar31);
    unaff_retaddr = uVar40;
    if ((char)bVar31 < '\x01') goto code_r0x00402f16;
    *pbVar19 = *pbVar19 + bVar31;
    puVar36 = (uint *)CONCAT31(uVar17,bVar31 + 0x6f);
    while( true ) {
      *puVar36 = uStack_18;
      uVar11 = *puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + (byte)param_1;
      *(uint *)((int)puVar30 + 0x1d) =
           (*(int *)((int)puVar30 + 0x1d) - (int)puVar38) - (uint)CARRY1((byte)uVar11,(byte)param_1)
      ;
      bVar5 = (byte)puVar36;
      *(byte *)puVar36 = (char)*puVar36 + bVar5;
      bVar31 = bVar5 + 0x2d;
      pbVar19 = (byte *)CONCAT31((int3)((uint)puVar36 >> 8),bVar31);
      puVar30[(int)puVar38 * 2] =
           (uint)((int)puVar12 + (uint)(0xd2 < bVar5) + puVar30[(int)puVar38 * 2]);
      uStack_18 = CONCAT22((short)(uStack_18 >> 0x10),uVar40);
      uVar11 = *puVar30;
      *(byte *)puVar30 = (byte)*puVar30 + bVar31;
      if (!CARRY1((byte)uVar11,bVar31)) break;
      *pbVar19 = *pbVar19 + bVar31;
code_r0x00402f16:
      bVar5 = (byte)pbVar19 | pbVar19[0x400001d];
      puVar36 = (uint *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar5);
      uVar11 = unaff_EBP;
      if ((char)bVar5 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = uVar11;
        *(byte *)puVar36 = (byte)*puVar36 + (char)puVar36;
        uVar17 = (undefined3)((uint)puVar36 >> 8);
        cVar6 = (char)puVar36 + 'o';
        puVar37 = (uint *)CONCAT31(uVar17,cVar6);
        *puVar37 = uStack_18;
        cVar7 = (char)param_1;
        *(byte *)puVar12 = (byte)*puVar12 + cVar7;
        uStack_18 = CONCAT22(uStack_18._2_2_,uVar40);
        bVar5 = (byte)((uint)puVar12 >> 8);
        bVar41 = bVar5 < (byte)*puVar30;
        puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                                   CONCAT11(bVar5 - (byte)*puVar30,(char)puVar12));
        if (bVar41) break;
        bVar41 = CARRY4((uint)puVar37,*puVar37);
        puVar36 = (uint *)((int)puVar37 + *puVar37);
        if (!SCARRY4((int)puVar37,*puVar37)) {
          bVar41 = CARRY4(unaff_EBP,*puVar36);
          unaff_EBP = unaff_EBP + *puVar36;
        }
        *puVar36 = (*puVar36 - (int)puVar36) - (uint)bVar41;
        *(byte *)puVar12 = (byte)*puVar12 + cVar7;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((char)((uint)param_1 >> 8) + (byte)*puVar12,
                                            cVar7 - (byte)*puVar12));
        *(byte *)puVar36 = (byte)*puVar36 + (char)puVar36;
code_r0x00402f3b:
        cVar7 = (char)puVar12;
        *pbVar20 = *pbVar20 + cVar7;
        bVar5 = (byte)puVar36;
        *(byte *)((int)puVar36 * 2) = *(byte *)((int)puVar36 * 2) ^ bVar5;
        *(byte *)puVar36 = (byte)*puVar36 + bVar5;
        *(byte *)puVar36 = (byte)*puVar36 + cVar7;
        uVar11 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + bVar5;
        *puVar12 = (uint)((int)puVar36 + (uint)CARRY1((byte)uVar11,bVar5) + *puVar12);
        pcVar9 = (char *)((uint)puVar36 | *puVar38);
        uVar17 = (undefined3)((uint)pcVar9 >> 8);
        cVar6 = (char)pcVar9 + *pcVar9;
        pcVar9 = (char *)CONCAT31(uVar17,cVar6);
        *pcVar9 = *pcVar9 + cVar6;
        cVar6 = cVar6 + *pcVar9;
        piVar14 = (int *)CONCAT31(uVar17,cVar6);
        *(char *)piVar14 = (char)*piVar14 + cVar6;
        iVar8 = LocalDescriptorTableRegister();
        *piVar14 = iVar8;
        bVar5 = *pbVar20;
        bVar24 = (byte)((uint)param_1 >> 8);
        *pbVar20 = *pbVar20 + bVar24;
        iVar8 = *piVar14;
        uVar27 = (undefined2)((uint)param_1 >> 0x10);
        bVar23 = (byte)param_1;
        *(byte *)puVar30 = (byte)*puVar30 + cVar6;
        puVar36 = puVar30 + (uint)bVar42 * -2 + 1;
        out(*puVar30,(short)puVar12);
        *(byte *)puVar36 = (byte)*puVar36 + cVar6;
        bVar31 = *pbVar20;
        *(byte *)puVar12 = (byte)*puVar12 - bVar35;
        *(byte *)puVar36 = (byte)*puVar36 + cVar6;
        puVar37 = puVar36 + (uint)bVar42 * -2 + 1;
        out(*puVar36,(short)puVar12);
        *(byte *)puVar37 = (byte)*puVar37 + cVar6;
        bVar28 = *pbVar20;
        *(uint *)((int)puVar12 + -0x23) = *(uint *)((int)puVar12 + -0x23) & (uint)puVar37;
        puVar16 = (ushort *)((int)piVar14 + *piVar14);
        if (!SCARRY4((int)piVar14,*piVar14)) {
          *puVar16 = param_4;
        }
        *(char *)puVar16 = (char)*puVar16 + (char)puVar16;
        uVar29 = CONCAT11((char)((uint)puVar12 >> 8) + *(byte *)((int)puVar12 + -0x15),cVar7);
        puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),uVar29);
        puVar36 = (uint *)((int)puVar16 + *(int *)puVar16);
        if (!SCARRY4((int)puVar16,*(int *)puVar16)) {
          *(ushort *)puVar36 = param_4;
        }
        cVar6 = (char)puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + cVar6;
        cVar25 = ((bVar24 - (char)iVar8) - CARRY1(bVar5,bVar24) | bVar31 | bVar28) + (byte)*puVar36;
        param_1 = (uint *)CONCAT22(uVar27,CONCAT11(cVar25,bVar23));
        uVar11 = *puVar12;
        *(byte *)puVar12 = (byte)*puVar12 + bVar23;
        if (CARRY1((byte)uVar11,bVar23)) {
          *(byte *)puVar36 = (byte)*puVar36 + cVar6;
          bVar5 = *(byte *)((int)puVar12 + 6);
          *(byte *)puVar12 = (byte)*puVar12 + bVar23;
          bVar31 = (cVar25 - (byte)*puVar37) + cRam14730307;
          *(byte *)puVar36 = (byte)*puVar36 + cVar6;
          bVar5 = bVar35 | bVar5 | *(byte *)((int)puVar12 + 0x2a);
          uVar11 = *puVar36;
          pbVar19 = (byte *)((int)puVar36 + (uint)CARRY1(bVar31,(byte)*puVar36) + *puVar36);
          *(byte *)puVar12 = (byte)*puVar12 + bVar23;
          cVar6 = cVar34 - (byte)*puVar37;
          cVar34 = bVar5 + *(char *)(CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar5,cVar34)) >> 8),
                                              cVar6) + 0x1e);
          *pbVar19 = *pbVar19 + (char)pbVar19;
          uVar17 = (undefined3)((uint)pbVar19 >> 8);
          bVar5 = (char)pbVar19 + 0x2aU & (byte)*puVar12;
          *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
          pcVar9 = (char *)CONCAT31(uVar17,bVar5 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar34,cVar6)) + 0x1f);
          *pcVar9 = *pcVar9 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar12;
          *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
          pcVar9 = (char *)CONCAT31(uVar17,bVar5 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar34,cVar6)) + 0x20);
          *pcVar9 = *pcVar9 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar12;
          *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
          pcVar9 = (char *)CONCAT31(uVar17,bVar5 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar34,cVar6)) + 0x21);
          *pcVar9 = *pcVar9 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar12;
          *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
          pcVar9 = (char *)CONCAT31(uVar17,bVar5 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar34,cVar6)) + 0x22);
          *pcVar9 = *pcVar9 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar12;
          *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
          pcVar9 = (char *)CONCAT31(uVar17,bVar5 + 0x2a);
          bVar31 = bVar31 + (byte)uVar11 + *pcVar9;
          uVar21 = CONCAT22(uVar27,CONCAT11(bVar31,bVar23));
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar34,cVar6)) + 0x25);
          *pcVar9 = *pcVar9 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar12;
          *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
          pcVar9 = (char *)CONCAT31(uVar17,bVar5 + 0x2a);
          pcVar33 = (char *)CONCAT22(uVar26,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar26,CONCAT11(
                                                  cVar34,cVar6)) + 0x26),cVar6));
          *pcVar9 = *pcVar9 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar12;
          *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
          cVar6 = bVar5 + 0x2a;
          pcVar9 = (char *)CONCAT31(uVar17,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar9 = *pcVar9 + cVar6;
            pbVar19 = (byte *)(CONCAT31(uVar17,bVar5 + 0x4f) + -0x33282610);
            bVar5 = *pbVar19;
            bVar28 = (byte)pbVar19;
            *pbVar19 = *pbVar19 + bVar28;
            uVar17 = (undefined3)((uint)pbVar19 >> 8);
            if (!CARRY1(bVar5,bVar28)) {
              if (!SCARRY1(bVar28,'\0')) {
                *pbVar19 = *pbVar19 + bVar28;
                uVar21 = CONCAT22(uVar27,CONCAT11(bVar31 | (byte)*puVar12,bVar23));
                bVar28 = bVar28 & (byte)*puVar12;
                *(char *)CONCAT31(uVar17,bVar28) = *(char *)CONCAT31(uVar17,bVar28) + bVar28;
                pcVar9 = (char *)CONCAT31(uVar17,bVar28 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar9 = (char *)CONCAT31(uVar17,bVar28 + *pcVar33);
              if (SCARRY1(bVar28,*pcVar33) != (char)(bVar28 + *pcVar33) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar5 = bVar28 + *pcVar33;
            pbVar19 = (byte *)CONCAT31(uVar17,bVar5);
            if (SCARRY1(bVar28,*pcVar33) == (char)bVar5 < '\0') {
              pcVar9 = (char *)CONCAT22(uVar27,CONCAT11(bVar31 | (byte)*puVar12,bVar23));
              *pcVar33 = *pcVar33 + cVar7;
              *(byte *)puVar12 = (byte)*puVar12 ^ bVar5;
              *(char *)((int)pbVar19 * 2) = *(char *)((int)pbVar19 * 2) + bVar5;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar9 = *pcVar9 + (char)pcVar9;
            uVar17 = (undefined3)((uint)pcVar9 >> 8);
            bVar5 = (char)pcVar9 + 0x2aU & (byte)*puVar12;
            *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
            pcVar9 = (char *)CONCAT31(uVar17,bVar5 + 0x2a);
            *pcVar9 = *pcVar9 + bVar5 + 0x2a;
            pcVar9 = (char *)CONCAT31(uVar17,bVar5 + 0x54 & (byte)*puVar12);
code_r0x00403072:
            cVar6 = (char)pcVar9;
            *pcVar9 = *pcVar9 + cVar6;
            uVar17 = (undefined3)((uint)pcVar9 >> 8);
            pcVar9 = (char *)CONCAT31(uVar17,cVar6 + '*');
            *pcVar9 = *pcVar9 + cVar6 + '*';
            bVar5 = cVar6 + 0x54U & (byte)*puVar12;
            *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
            pcStack_50 = (char *)CONCAT22(pcStack_50._2_2_,in_ES);
            uVar21 = CONCAT22((short)((uint)uVar21 >> 0x10),
                              CONCAT11((char)((uint)uVar21 >> 8) +
                                       *(char *)CONCAT31(uVar17,bVar5 + 0x2a),(char)uVar21));
            *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar7;
            pcVar9 = pcStack_50;
code_r0x0040309a:
            cVar6 = (char)pcVar9;
            *pcVar9 = *pcVar9 + cVar6;
            pcStack_50 = (char *)CONCAT22(pcStack_50._2_2_,uVar40);
            *pcVar9 = *pcVar9 + cVar6;
            pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6 + 0x2aU & (byte)*puVar12);
          }
          cVar6 = (char)pbVar19;
          *pbVar19 = *pbVar19 + cVar6;
          uVar17 = (undefined3)((uint)pbVar19 >> 8);
          cVar34 = cVar6 + '*';
          pcVar9 = (char *)CONCAT31(uVar17,cVar34);
          *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar7;
          *pcVar9 = *pcVar9 + cVar34;
          cVar25 = (char)pcStack_50 - (byte)*puVar37;
          pcVar33 = (char *)CONCAT22((short)((uint)pcStack_50 >> 0x10),
                                     CONCAT11((char)((uint)pcStack_50 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_50 >> 8),
                                                                 cVar25) + 0x34),cVar25));
          *pcVar9 = *pcVar9 + cVar34;
          bVar5 = cVar6 + 0x54U & (byte)*puVar12;
          *(char *)CONCAT31(uVar17,bVar5) = *(char *)CONCAT31(uVar17,bVar5) + bVar5;
          pbVar19 = (byte *)CONCAT31(uVar17,bVar5 + 0x2a);
          bVar5 = (byte)((uint)uVar21 >> 8);
          pcVar9 = (char *)CONCAT22((short)((uint)uVar21 >> 0x10),
                                    CONCAT11(bVar5 + *pbVar19,(char)uVar21));
          pbVar19 = pbVar19 + (uint)CARRY1(bVar5,*pbVar19) + *(int *)pbVar19;
          *(byte *)puVar12 = (byte)*puVar12 + (char)uVar21;
          uVar17 = (undefined3)((uint)pbVar19 >> 8);
          cVar6 = (byte)pbVar19 - *pbVar19;
          piVar14 = (int *)CONCAT31(uVar17,cVar6);
          puVar37 = (uint *)((int)puVar37 + (uint)((byte)pbVar19 < *pbVar19) + *piVar14);
          cVar6 = cVar6 + (char)*piVar14;
          pbVar19 = (byte *)CONCAT31(uVar17,cVar6);
          *pbVar19 = *pbVar19 + cVar6;
code_r0x004030df:
          *pcVar9 = *pcVar9 + cVar7;
          bVar5 = *pbVar19;
          bVar31 = (byte)pbVar19;
          *pbVar19 = *pbVar19 + bVar31;
          *(byte **)(pcVar33 + -0x41) =
               (byte *)((int)puVar37 + (uint)CARRY1(bVar5,bVar31) + *(int *)(pcVar33 + -0x41));
          *pbVar19 = *pbVar19 + bVar31;
          uVar17 = (undefined3)((uint)pbVar19 >> 8);
          bVar31 = bVar31 | (byte)*puVar37;
          *(char *)CONCAT31(uVar17,bVar31) = *(char *)CONCAT31(uVar17,bVar31) + bVar31;
          pcVar9 = (char *)CONCAT31(uVar17,bVar31 + 0x7b);
          *pcVar9 = *pcVar9 + bVar31 + 0x7b;
          pbVar19 = (byte *)((int)puVar37 + CONCAT31(uVar17,bVar31 - 8) + -1);
          *pbVar19 = *pbVar19 + (bVar31 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar30 = puVar37 + (uint)bVar42 * -2 + 1;
        out(*puVar37,uVar29);
        uVar11 = unaff_EBP + 1;
        uStack_18 = unaff_EBP;
      }
      bVar5 = cVar6 - bVar41;
      pbVar19 = (byte *)((int)puVar30 + (int)puVar38 * 2);
      bVar41 = CARRY1(*pbVar19,bVar5);
      *pbVar19 = *pbVar19 + bVar5;
code_r0x00402ef9:
      puVar36 = (uint *)CONCAT31(uVar17,bVar5 - bVar41);
      pbVar19 = (byte *)((int)puVar38 + unaff_EBP * 2);
      *pbVar19 = *pbVar19 + (bVar5 - bVar41);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)param_1 = (byte)*param_1 + (char)puVar12;
  puVar36 = puVar12 + 0x2828000;
  bVar5 = (byte)param_1;
  bVar41 = (byte)*puVar36 < bVar5;
  *(byte *)puVar36 = (byte)*puVar36 - bVar5;
  bVar5 = (byte)pbVar19 + *pbVar19;
  piVar14 = (int *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar5 + bVar41);
  puVar36 = puVar38;
  uVar39 = in_ES;
  if (CARRY1((byte)pbVar19,*pbVar19) || CARRY1(bVar5,bVar41)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar9 = *pcVar9 + bVar31;
  uVar39 = in_ES;
  unaff_retaddr = uVar40;
  goto code_r0x00402e6e;
}


