/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402a7b
 * Raw Name    : GetData
 * Demangled   : GetData
 * Prototype   : char * GetData(uint * endpoint, uint * param_2, ushort param_3)
 * Local Vars  : pcStack_54, uStack_1c, uVar1, uVar2, uVar3, uVar4, cVar5, bVar6, cVar7, in_EAX, pbVar8, iVar9, pcVar10, piVar11, uVar12, puVar13, pcVar14, piVar15, pbVar16, puVar17, uVar18, uVar19, pbVar20, uVar21, cVar22, bVar23, bVar24, cVar25, uVar26, bVar27, uVar28, bVar29, unaff_EBX, uVar30, pcVar31, cVar32, bVar33, uVar34, unaff_EBP, unaff_ESI, puVar35, puVar36, puVar37, unaff_EDI, puVar38, in_ES, uVar39, uVar40, uVar41, in_CS, in_DS, in_GS_OFFSET, bVar42, endpoint, in_AF, bVar43, unaff_retaddr, param_2, param_3
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall GetData(uint *endpoint,uint *param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  undefined4 in_EAX;
  byte *pbVar8;
  undefined3 uVar18;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  char *pcVar14;
  int *piVar15;
  byte *pbVar16;
  ushort *puVar17;
  undefined1 uVar19;
  char cVar22;
  undefined2 uVar26;
  byte *pbVar20;
  byte bVar23;
  byte bVar24;
  char cVar25;
  undefined4 uVar21;
  byte bVar27;
  undefined2 uVar28;
  byte bVar29;
  char cVar32;
  uint *unaff_EBX;
  uint uVar30;
  byte bVar33;
  undefined2 uVar34;
  char *pcVar31;
  uint unaff_EBP;
  uint *unaff_ESI;
  uint *puVar35;
  uint *puVar36;
  uint *puVar37;
  uint *unaff_EDI;
  uint *puVar38;
  ushort in_ES;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort in_CS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar42;
  byte in_AF;
  bool bVar43;
  uint *unaff_retaddr;
  char *pcStack_54;
  uint uStack_1c;
  
  bVar43 = false;
                    /* .NET CLR Managed Code */
  piVar15 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + (byte)*unaff_EBX);
  do {
    *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)((uint)endpoint >> 8);
    puVar36 = unaff_ESI;
    puVar38 = unaff_EDI;
code_r0x00402a7f:
    uVar39 = in_ES;
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    out(*puVar36,(short)param_2);
    bVar6 = in((short)param_2);
    *(byte *)puVar38 = bVar6;
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),
                                CONCAT11((byte)((uint)endpoint >> 8) | (byte)*param_2,(char)endpoint
                                        ));
    iVar9 = *piVar15;
    cVar5 = in(1);
    puVar35 = (uint *)CONCAT31((int3)((uint)((int)piVar15 + *piVar15) >> 8),cVar5);
    *(char *)puVar35 = (char)*puVar35 + cVar5;
    pbVar8 = (byte *)((uint)puVar35 | *puVar35);
    *(byte *)endpoint = (byte)*endpoint + (char)param_2;
    unaff_ESI = (uint *)((int)puVar36 + (((uint)bVar43 * -8 + 4) - iVar9));
    unaff_EDI = (uint *)((int)puVar38 + (uint)bVar43 * -2 + 1);
    in_ES = uVar39;
code_r0x00402a95:
    uVar18 = (undefined3)((uint)pbVar8 >> 8);
    bVar6 = (byte)pbVar8 | (byte)*param_2;
    pcVar10 = (char *)CONCAT31(uVar18,bVar6);
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *pcVar10 = *pcVar10 + bVar6;
code_r0x00402a9b:
      uVar18 = (undefined3)((uint)pcVar10 >> 8);
      cVar5 = (char)pcVar10 + '\r';
      piVar11 = (int *)CONCAT31(uVar18,cVar5);
      *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar11;
      *(char *)piVar11 = (char)*piVar11 + cVar5;
      *(byte *)(unaff_ESI + -0xc800000) = (byte)unaff_ESI[-0xc800000] + (char)param_2;
      *(char *)piVar11 = (char)*piVar11 + cVar5;
      *(byte *)param_2 = (byte)*param_2 + cVar5;
      cVar32 = (char)endpoint;
      if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
        *(char *)piVar11 = (char)*piVar11 + cVar5;
        puVar36 = (uint *)CONCAT31(uVar18,(char)pcVar10 + ':');
        puVar35 = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + -0x79));
        iVar9 = (int)puVar36 + *puVar36;
        if (SCARRY4((int)puVar36,*puVar36)) {
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                (byte)puVar35[(int)unaff_EBX],(char)unaff_EBX));
          *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar9;
          puVar38 = unaff_EDI;
          goto code_r0x00402b33;
        }
        uVar18 = (undefined3)((uint)iVar9 >> 8);
        cVar5 = (char)iVar9 + CARRY4((uint)puVar36,*puVar36);
        piVar15 = (int *)CONCAT31(uVar18,cVar5);
        *(byte *)param_2 = (byte)*param_2 + cVar32;
        bVar42 = (POPCOUNT((byte)*param_2) & 1U) == 0;
        if ((bVar42) || (puVar36 = puVar35, bVar42)) {
          *(char *)piVar15 = (char)*piVar15 + cVar5;
          cVar7 = cVar5 + '(';
          pcVar10 = (char *)CONCAT31(uVar18,cVar7);
          puVar38 = unaff_EDI + (uint)bVar43 * -2 + 1;
          uVar12 = in((short)param_2);
          *unaff_EDI = uVar12;
          *pcVar10 = *pcVar10 + cVar7;
          endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),
                                      CONCAT11((byte)((uint)endpoint >> 8) | bRama07b0222,cVar32));
          *pcVar10 = *pcVar10 + cVar7;
          pcVar10 = (char *)CONCAT31(uVar18,cVar5 + '>');
          goto code_r0x00402ad2;
        }
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar32;
        out(*unaff_ESI,(short)param_2);
        piVar15 = (int *)((longlong)*piVar11 * 0x7b020a00);
        *(char *)piVar15 =
             (char)*piVar15 - ((longlong)(int)piVar15 != (longlong)*piVar11 * 0x7b020a00);
        pbVar8 = (byte *)((int)unaff_EDI + unaff_EBP * 2);
        *pbVar8 = *pbVar8;
        puVar36 = unaff_ESI + (uint)bVar43 * -2 + 1;
      }
code_r0x00402a61:
      pcVar10 = (char *)segment(in_DS,(short)unaff_EBX + (short)puVar36);
      *pcVar10 = *pcVar10 + (char)piVar15;
      cVar5 = (char)endpoint;
      endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),
                                  CONCAT11((byte)((uint)endpoint >> 8) | (byte)unaff_EDI[0x1a],cVar5
                                          ));
      *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
      uVar26 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar26);
      piVar11 = (int *)((int)piVar15 + *piVar15);
      puVar38 = unaff_EDI;
      uVar40 = in_ES;
      if (SCARRY4((int)piVar15,*piVar15)) {
        do {
          out(*puVar36,(short)param_2);
          puVar35 = puVar36 + (uint)bVar43 * -2 + 1 + (uint)bVar43 * -2 + 1;
          out(puVar36[(uint)bVar43 * -2 + 1],(short)param_2);
          *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
code_r0x00402ae7:
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                *(byte *)(unaff_EBP - 0x60),(char)unaff_EBX));
          cVar5 = (char)piVar11;
          *(char *)piVar11 = (char)*piVar11 + cVar5;
          uVar18 = (undefined3)((uint)piVar11 >> 8);
          bVar6 = cVar5 + 2;
          pbVar8 = (byte *)CONCAT31(uVar18,bVar6);
          unaff_ESI = puVar35;
          if ((POPCOUNT(bVar6) & 1U) != 0) {
            *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)endpoint;
            bVar29 = *pbVar8;
            *pbVar8 = *pbVar8 + bVar6;
            *puVar38 = (uint)((int)param_2 + (uint)CARRY1(bVar29,bVar6) + *puVar38);
            unaff_EDI = puVar38;
            in_ES = uVar40;
            goto code_r0x00402a95;
          }
          *pbVar8 = *pbVar8 + bVar6;
          cVar5 = cVar5 + '}';
          pcVar10 = (char *)CONCAT31(uVar18,cVar5);
          *pcVar10 = (*pcVar10 - cVar5) - (0x84 < bVar6);
          pbVar8 = (byte *)((int)param_2 + (int)pcVar10);
          *pbVar8 = *pbVar8 + cVar5;
          bVar6 = POPCOUNT(*pbVar8);
code_r0x00402af9:
          in_ES = uVar40;
          unaff_EDI = puVar38;
          if ((bVar6 & 1) != 0) goto code_r0x00402a9b;
          *pcVar10 = *pcVar10 + (char)pcVar10;
          bVar6 = (byte)endpoint;
          *(byte *)param_2 = (byte)*param_2 + bVar6;
          unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),uVar39);
          puVar35 = unaff_ESI + (uint)bVar43 * -2 + 1;
          out(*unaff_ESI,(short)param_2);
          uVar12 = *param_2;
          *(byte *)param_2 = (byte)*param_2 + bVar6;
          iVar9 = CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + 'o') +
                  *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar12,bVar6);
          pcVar10 = (char *)CONCAT31((int3)((uint)iVar9 >> 8),(char)iVar9 + '(');
          while( true ) {
            uVar12 = *param_2;
            bVar29 = (byte)endpoint;
            *(byte *)param_2 = (byte)*param_2 + bVar29;
            pcVar10 = pcVar10 + (uint)CARRY1((byte)uVar12,bVar29) + iRam73280512;
            bVar6 = (byte)pcVar10;
            *pcVar10 = *pcVar10 + bVar6;
            endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),
                                        CONCAT11((byte)((uint)endpoint >> 8) | bRam7d160243,bVar29))
            ;
            bVar43 = ((uint)unaff_retaddr & 0x400) != 0;
            in_AF = ((uint)unaff_retaddr & 0x10) != 0;
            *pcVar10 = *pcVar10 + bVar6;
            uVar18 = (undefined3)((uint)pcVar10 >> 8);
            iRam0000a37d = iRam0000a37d + CONCAT31(uVar18,bVar6 + 2) + (uint)(0xfd < bVar6);
            cVar5 = bVar6 + 4;
            if (SCARRY1(bVar6 + 2,'\x02') != cVar5 < '\0') break;
            *(char *)CONCAT31(uVar18,cVar5) = *(char *)CONCAT31(uVar18,cVar5) + cVar5;
            iVar9 = CONCAT31(uVar18,bVar6 + 0x16);
code_r0x00402b33:
            piVar11 = (int *)(iVar9 + 0xe2802);
            *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)endpoint >> 8);
            uVar40 = in_ES;
            in_ES = uVar39;
            while( true ) {
              bVar29 = (byte)unaff_EBX | (byte)((uint)endpoint >> 8);
              unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar29);
              *piVar11 = (int)(*piVar11 + (int)piVar11);
              cVar5 = (char)piVar11;
              *(byte *)param_2 = (byte)*param_2 + cVar5;
              if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
              *(char *)piVar11 = (char)*piVar11 + cVar5;
              uVar12 = CONCAT31((int3)((uint)piVar11 >> 8),cVar5 + '\x13');
              pcVar10 = (char *)(uVar12 + 0x19061224 + (uint)(0x1f9edfd < uVar12));
              uVar1 = (uint)(0xe4ffffdd < uVar12 + 0xfe061202 ||
                            CARRY4(uVar12 + 0x19061224,(uint)(0x1f9edfd < uVar12)));
              uVar30 = *puVar35;
              uVar12 = *puVar35;
              *puVar35 = (uint)(pcVar10 + uVar12 + uVar1);
              bVar6 = POPCOUNT(*puVar35 & 0xff);
              unaff_ESI = puVar35;
              if ((SCARRY4(uVar30,(int)pcVar10) != SCARRY4((int)(pcVar10 + uVar12),uVar1)) ==
                  (int)*puVar35 < 0) goto code_r0x00402af9;
              bVar6 = (byte)pcVar10;
              *pcVar10 = *pcVar10 + bVar6;
              iVar9 = CONCAT31((int3)((uint)pcVar10 >> 8),bVar6 + 2) + 0x9d7d + (uint)(0xfd < bVar6)
              ;
              bVar6 = (byte)param_2 | (byte)*param_2;
              uVar12 = *unaff_EBX;
              *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar29;
              pcVar10 = (char *)(CONCAT31((int3)((uint)iVar9 >> 8),(char)iVar9 + '\x12') + 0x228b26
                                 + *puVar38 + (uint)CARRY1((byte)uVar12,bVar29));
              cVar5 = bVar6 + (byte)*endpoint;
              param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar5);
              if (SCARRY1(bVar6,(byte)*endpoint) == cVar5 < '\0') break;
              *pcVar10 = *pcVar10 + (char)pcVar10;
              cVar5 = (char)pcVar10 + '\x02';
              pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar5);
              bVar6 = POPCOUNT(cVar5);
              uVar40 = in_ES;
code_r0x00402b7a:
              puVar36 = puVar35;
              if ((bVar6 & 1) != 0) break;
              while( true ) {
                cVar5 = (char)pcVar10;
                *pcVar10 = *pcVar10 + cVar5;
                uVar18 = (undefined3)((uint)pcVar10 >> 8);
                pcVar10 = (char *)CONCAT31(uVar18,cVar5 + '\x13');
                *(byte *)endpoint = (byte)*endpoint | (byte)param_2;
                *(byte *)puVar38 = (byte)*puVar38 | (byte)param_2;
                *param_2 = (uint)(pcVar10 + *param_2);
                uVar26 = (undefined2)((uint)unaff_EBX >> 0x10);
                uVar19 = SUB41(unaff_EBX,0);
                cVar32 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
                unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar32,uVar19));
                *pcVar10 = *pcVar10 + cVar5 + '\x13';
                piVar11 = (int *)CONCAT31(uVar18,cVar5 + -0x7a);
                uVar12 = *param_2;
                *(byte *)param_2 = (byte)*param_2 + (char)endpoint;
                uVar41 = in_CS;
                if (SCARRY1((byte)uVar12,(char)endpoint) == (char)(byte)*param_2 < '\0') break;
                *(char *)piVar11 = (char)*piVar11 + cVar5 + -0x7a;
                cVar7 = cVar5 + -0x78;
                piVar11 = (int *)CONCAT31(uVar18,cVar7);
                uVar41 = uVar40;
                if ((POPCOUNT(cVar7) & 1U) != 0) break;
                *(char *)piVar11 = (char)*piVar11 + cVar7;
                pcVar10 = (char *)CONCAT31(uVar18,cVar5 + -0x65);
                *endpoint = *endpoint | (uint)param_2;
                *puVar38 = *puVar38 | (uint)param_2;
                pbVar8 = (byte *)((int)endpoint + -1);
                cVar32 = cVar32 + *(byte *)((int)unaff_EBX + -0x5e);
                unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar32,uVar19));
                *pcVar10 = *pcVar10 + cVar5 + -0x65;
                bVar6 = cVar5 + 10;
                puVar13 = (uint *)CONCAT31(uVar18,bVar6);
                bVar29 = (byte)pbVar8;
                *(byte *)param_2 = (byte)*param_2 + bVar29;
                puVar35 = puVar36 + (uint)bVar43 * -2 + 1;
                out(*puVar36,(short)param_2);
                uVar12 = *param_2;
                *(byte *)param_2 = (byte)*param_2 + bVar29;
                uVar2 = (uint)CARRY1((byte)uVar12,bVar29);
                uVar12 = *param_2;
                uVar30 = *param_2;
                pbVar20 = pbVar8 + uVar30 + uVar2;
                uVar4 = *param_2;
                cRam130a0000 = cRam130a0000 - cVar32;
                uVar1 = *param_2;
                unaff_EBP = unaff_EBP | *puVar13;
                *(byte *)puVar13 = (char)*puVar13 + bVar6;
                endpoint = (uint *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                            CONCAT11((byte)((uint)pbVar20 >> 8) | bRam7d170243,
                                                     (char)pbVar20 + (byte)uVar4 +
                                                     (CARRY4((uint)pbVar8,uVar12) ||
                                                     CARRY4((uint)(pbVar8 + uVar30),uVar2))));
                bVar43 = (uVar39 & 0x400) != 0;
                in_AF = (uVar39 & 0x10) != 0;
                *(byte *)puVar13 = (char)*puVar13 + bVar6;
                bVar42 = 0xfd < bVar6;
                pcVar10 = (char *)CONCAT31(uVar18,cVar5 + '\f');
                param_2 = (uint *)((uint)param_2 | uVar1);
code_r0x00402bd1:
                uVar12 = *unaff_EBX;
                uVar30 = *unaff_EBX;
                *unaff_EBX = (uint)((byte *)(uVar30 + (int)endpoint) + bVar42);
                bVar6 = POPCOUNT(*unaff_EBX & 0xff);
                uVar40 = uVar39;
                if ((SCARRY4(uVar12,(int)endpoint) !=
                    SCARRY4((int)(uVar30 + (int)endpoint),(uint)bVar42)) == (int)*unaff_EBX < 0)
                goto code_r0x00402b7a;
                cVar5 = (char)pcVar10;
                *pcVar10 = *pcVar10 + cVar5;
                pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar5 + '\x02');
                if (SCARRY1(cVar5,'\x02') == (char)(cVar5 + '\x02') < '\0') {
code_r0x00402bdb:
                  *pcVar10 = *pcVar10 + (char)pcVar10;
                  pcVar10 = (char *)(CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + '\x12') |
                                    *param_2);
                  *(byte *)puVar38 = (byte)*puVar38 - (char)endpoint;
                  *pcVar10 = *pcVar10 + (char)pcVar10;
                  puVar36 = (uint *)((int)param_2 - *puVar35);
                  bVar6 = (byte)unaff_EBX | (byte)((uint)endpoint >> 8);
                  cVar5 = *pcVar10;
                  uVar18 = (undefined3)((uint)pcVar10 >> 8);
                  pcVar10 = (char *)CONCAT31(uVar18,cVar5);
                  *pcVar10 = *pcVar10 + cVar5;
                  pcVar31 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8
                                                                               ),bVar6) + -0x5b),
                                                      bVar6));
                  *pcVar10 = *pcVar10 + cVar5;
                  bVar42 = false;
                  pcVar10 = (char *)(CONCAT31(uVar18,cVar5 + '\x13') | *puVar36);
                  do {
                    bVar29 = (byte)endpoint;
                    bVar6 = bVar29 + (byte)puVar35[(int)puVar38 * 2];
                    endpoint = (uint *)CONCAT31((int3)((uint)endpoint >> 8),bVar6 + bVar42);
                    uVar12 = (uint)(CARRY1(bVar29,(byte)puVar35[(int)puVar38 * 2]) ||
                                   CARRY1(bVar6,bVar42));
                    pcVar14 = pcVar10 + 0x1b000019 + uVar12;
                    piVar15 = (int *)((int)puVar38 * 2 + 0x40000a5);
                    *piVar15 = (int)((int)endpoint +
                                    (uint)((char *)0xe4ffffe6 < pcVar10 ||
                                          CARRY4((uint)(pcVar10 + 0x1b000019),uVar12)) + *piVar15);
                    puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),
                                               (char)puVar36 + cRam00009d7d);
                    uVar18 = (undefined3)((uint)pcVar14 >> 8);
                    bVar6 = (char)pcVar14 + 0x12;
                    in_AF = 9 < (bVar6 & 0xf) | in_AF;
                    uVar12 = CONCAT31(uVar18,bVar6 + in_AF * -6) & 0xffffff0f;
                    pcVar10 = (char *)CONCAT22((short)(uVar12 >> 0x10),
                                               CONCAT11((char)((uint)pcVar14 >> 8) - in_AF,
                                                        (char)uVar12));
                    uVar12 = unaff_EBP | *(uint *)CONCAT31(uVar18,bVar6);
                    while( true ) {
                      *pcVar10 = *pcVar10 + (char)pcVar10;
                      puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),
                                                 (byte)puVar36 | (byte)*puVar36);
                      puVar38 = (uint *)((uint)puVar38 | (uint)puVar35);
                      uVar30 = (uint)pcVar31 | (uint)puVar35;
                      unaff_EBP = uVar12 + 1;
                      uVar40 = (ushort)((uint)unaff_retaddr >> 0x10);
                      unaff_retaddr = (uint *)CONCAT22(uVar40,in_ES);
                      cVar5 = (char)(pcVar10 + 0x1b000019);
                      uVar18 = (undefined3)((uint)(pcVar10 + 0x1b000019) >> 8);
                      cVar32 = cVar5 + -0x13;
                      pcVar10 = (char *)CONCAT31(uVar18,cVar32);
                      uVar26 = (undefined2)(uVar30 >> 0x10);
                      cVar7 = (char)(uVar30 >> 8) + *(char *)(uVar30 - 0x5e);
                      unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar7,(byte)uVar30));
                      *pcVar10 = *pcVar10 + cVar32;
                      pcVar10 = (char *)(CONCAT31(uVar18,cVar5 + '\x19') | *puVar36);
                      bVar6 = (byte)pcVar10;
                      if ((POPCOUNT((uint)pcVar10 & 0xff) & 1U) != 0) {
                        pbVar8 = (byte *)((int)puVar36 + (int)pcVar10);
                        bVar42 = CARRY1(*pbVar8,bVar6);
                        *pbVar8 = *pbVar8 + bVar6;
                        param_2 = puVar36;
                        goto code_r0x00402bd1;
                      }
                      *pcVar10 = *pcVar10 + bVar6;
                      uVar18 = (undefined3)((uint)pcVar10 >> 8);
                      pcVar31 = (char *)CONCAT31(uVar18,bVar6 + 0x6f);
                      param_2 = (uint *)((int)puVar36 + 1);
                      *pcVar31 = *pcVar31 + bVar6 + 0x6f;
                      bVar29 = (byte)uVar30 | (byte)((uint)pcVar10 >> 8);
                      pcVar10 = (char *)CONCAT31(uVar18,bVar6 + 0x5c);
                      cVar7 = cVar7 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar29) +
                                               -0x5f);
                      unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar7,bVar29));
                      *pcVar10 = *pcVar10 + bVar6 + 0x5c;
                      pcVar10 = (char *)(CONCAT31(uVar18,bVar6 + 0x88) | *param_2);
                      if ((POPCOUNT((uint)pcVar10 & 0xff) & 1U) != 0) {
                        *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)endpoint >> 8);
                        unaff_retaddr = (uint *)((uint)uVar40 << 0x10);
                        goto code_r0x00402bdb;
                      }
                      *pcVar10 = *pcVar10 + (char)pcVar10;
                      uVar18 = (undefined3)((uint)pcVar10 >> 8);
                      cVar5 = (char)pcVar10 + 'o';
                      puVar36 = (uint *)((int)puVar36 + 2);
                      *(char *)CONCAT31(uVar18,cVar5) = *(char *)CONCAT31(uVar18,cVar5) + cVar5;
                      pcVar31 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                 bVar29 | (byte)((uint)pcVar10 >> 8));
                      pcVar10 = (char *)(CONCAT31(uVar18,cVar5) | 2);
                      *(char *)(uVar12 - 0x62) = *(char *)(uVar12 - 0x62) + '\x01';
                      bVar6 = (byte)pcVar10;
                      *pcVar10 = *pcVar10 + bVar6;
                      bVar42 = 0xfd < bVar6;
                      cVar5 = bVar6 + 2;
                      pcVar10 = (char *)CONCAT31(uVar18,cVar5);
                      in_DS = in_ES;
                      if (SCARRY1(bVar6,'\x02') != cVar5 < '\0') break;
                      *pcVar10 = *pcVar10 + cVar5;
                      bVar29 = bVar6 + 10;
                      pcVar10 = (char *)CONCAT31(uVar18,bVar29);
                      *pcVar10 = *pcVar10 - cVar7;
                      cVar32 = (char)endpoint;
                      *(byte *)puVar36 = *(byte *)puVar36 + cVar32;
                      *(char *)(uVar12 - 0x62) = *(char *)(uVar12 - 0x62) + '\x01';
                      *pcVar10 = *pcVar10 + bVar29;
                      cVar5 = bVar6 + 0xc;
                      pcVar10 = (char *)CONCAT31(uVar18,cVar5);
                      if (SCARRY1(bVar29,'\x02') == cVar5 < '\0') {
                        *pcVar10 = *pcVar10 + cVar5;
                        *(byte *)endpoint = (byte)*endpoint - cVar7;
                        *(byte *)puVar36 = *(byte *)puVar36 + cVar32;
                        cVar5 = (bVar6 + 0x13) - (byte)endpoint[0x13];
                        pcVar10 = (char *)CONCAT31(uVar18,cVar5);
                        *pcVar10 = *pcVar10 + cVar5;
                        pcVar14 = (char *)CONCAT31(uVar18,cVar5 + *pcVar10);
                        *pcVar14 = *pcVar14 + cVar5 + *pcVar10;
                        pcVar14 = pcVar14 + *endpoint;
                        *pcVar14 = *pcVar14 + (char)pcVar14;
                        LOCK();
                        pcVar10 = *(char **)pcVar14;
                        *(char **)pcVar14 = pcVar14;
                        UNLOCK();
                        *pcVar10 = *pcVar10 + (char)pcVar10;
                        pbVar8 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),(byte)*endpoint);
                        *pbVar8 = *pbVar8 + (byte)*endpoint;
                        goto code_r0x00402c8d;
                      }
                      endpoint = (uint *)CONCAT31((int3)((uint)endpoint >> 8),
                                                  cVar32 + *pcVar31 + (0xfd < bVar29));
                      *(byte *)puVar38 = (byte)*puVar38 - cVar7;
                      uVar12 = unaff_EBP;
                    }
                  } while( true );
                }
                unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(byte *)((int)unaff_EBX + -99),
                                                      (char)unaff_EBX));
                puVar36 = puVar35;
              }
              *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
              param_2 = (uint *)((int)param_2 - *puVar36);
              puVar35 = puVar36;
              uVar40 = in_ES;
              in_ES = uVar41;
            }
            *(byte *)param_2 = (byte)*param_2 + (char)endpoint;
            pcVar10 = pcVar10 + -0x7d160243;
          }
          pcVar10 = (char *)CONCAT31(uVar18,uRam16040000);
code_r0x00402ad2:
          out(*puVar35,(short)param_2);
          puVar36 = (uint *)((int)(puVar35 + (uint)bVar43 * -2 + 1) + (uint)bVar43 * -2 + 1);
          out((byte)puVar35[(uint)bVar43 * -2 + 1],(short)param_2);
          bVar6 = (byte)pcVar10;
          *pcVar10 = *pcVar10 + bVar6;
          unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar38
                                      );
          in_AF = 9 < (bVar6 & 0xf) | in_AF;
          uVar18 = (undefined3)((uint)pcVar10 >> 8);
          bVar6 = bVar6 + in_AF * -6;
          param_2 = (uint *)((uint)param_2 ^ *param_2);
          cVar5 = bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) * -0x60 + (byte)*param_2;
          piVar15 = (int *)CONCAT31(uVar18,cVar5);
          if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00402a7f;
          *(char *)piVar15 = (char)*piVar15 + cVar5;
          piVar11 = (int *)CONCAT31(uVar18,cVar5 + '\x17');
          uVar40 = in_ES;
        } while( true );
      }
      *(byte *)param_2 = (byte)*param_2 + cVar5;
      unaff_ESI = puVar36 + (uint)bVar43 * -2 + 1;
      out(*puVar36,uVar26);
    }
    else {
      pcVar10[in_GS_OFFSET] = pcVar10[in_GS_OFFSET] + bVar6;
      uVar26 = (undefined2)((uint)endpoint >> 0x10);
      uVar19 = SUB41(endpoint,0);
      bVar29 = (byte)((uint)endpoint >> 8) | *(byte *)((int)unaff_EDI + 0x66);
      endpoint = (uint *)CONCAT22(uVar26,CONCAT11(bVar29,uVar19));
      *pcVar10 = *pcVar10 + bVar6;
      bVar6 = bVar6 | (byte)*unaff_ESI;
      pcVar10 = (char *)CONCAT31(uVar18,bVar6);
      if (-1 < (char)bVar6) {
        unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                              (char)unaff_EBX));
code_r0x00402a5d:
        *pcVar10 = *pcVar10 + (char)pcVar10;
        piVar15 = (int *)CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + 'o');
        puVar36 = unaff_ESI;
        goto code_r0x00402a61;
      }
      *pcVar10 = *pcVar10 + bVar6;
      cVar5 = bVar6 + 2;
      piVar15 = (int *)CONCAT31(uVar18,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        puVar36 = unaff_ESI + (uint)bVar43 * -2 + 1;
        out(*unaff_ESI,(short)param_2);
        goto code_r0x00402a61;
      }
      *(char *)piVar15 = (char)*piVar15 + cVar5;
      bVar6 = bVar6 + 0x71;
      pcVar31 = (char *)CONCAT31(uVar18,bVar6);
      pcVar10 = (char *)segment(in_DS,(short)unaff_EBX + (short)unaff_ESI);
      *pcVar10 = *pcVar10 + bVar6;
      uVar12 = unaff_EDI[0x1a];
      *pcVar31 = *pcVar31 + bVar6;
      endpoint = (uint *)CONCAT22(uVar26,CONCAT11(bVar29 | (byte)uVar12 |
                                                  *(byte *)((int)unaff_EDI + 0x69),uVar19));
      *pcVar31 = *pcVar31 + bVar6;
      bVar6 = bVar6 | (byte)*param_2;
      pcVar10 = (char *)CONCAT31(uVar18,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) goto code_r0x00402a5d;
    }
    endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),
                                CONCAT11((byte)((uint)endpoint >> 8) | (byte)*param_2,(char)endpoint
                                        ));
    piVar15 = (int *)(uint)(byte)*unaff_EBX;
  } while( true );
  do {
    while( true ) {
      cVar25 = (char)endpoint;
      cVar22 = (char)((uint)endpoint >> 8) + (char)((uint)pbVar8 >> 8);
      endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),CONCAT11(cVar22,cVar25));
      cVar5 = (char)pbVar8;
      *pbVar8 = *pbVar8 + cVar5;
      pcVar10 = (char *)((int)pbVar8 * 2 + 0x1a10000);
      cVar7 = (char)((uint)pcVar31 >> 8);
      *pcVar10 = *pcVar10 + cVar7;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
      pbVar8[-0x47ffffff] = pbVar8[-0x47ffffff] + cVar7;
      *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
      bVar29 = (byte)puVar36;
      *(byte *)puVar38 = (byte)*puVar38 + bVar29;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + bVar29;
      *pbVar8 = *pbVar8 + cVar5;
      *puVar35 = (uint)(*puVar35 + (int)puVar35);
      uVar26 = (undefined2)((uint)pcVar31 >> 0x10);
      cVar7 = cVar7 + (byte)puVar35[(int)pcVar31];
      pcVar10 = (char *)CONCAT22(uVar26,CONCAT11(cVar7,(char)pcVar31));
      pcVar10[(int)pbVar8] = pcVar10[(int)pbVar8] + cVar5;
      *(byte *)puVar36 = *(byte *)puVar36 - cVar7;
      *(byte *)puVar36 = *(byte *)puVar36 + cVar25;
      uVar18 = (undefined3)((uint)pbVar8 >> 8);
      bVar6 = cVar5 - *pbVar8;
      *pcVar10 = *pcVar10 + bVar29;
      *(byte *)puVar36 = *(byte *)puVar36 ^ bVar6;
      *(byte *)puVar36 = *(byte *)puVar36 + bVar6;
      *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
      uVar30 = *endpoint;
      *(byte *)endpoint = (byte)*endpoint + bVar29;
      cVar32 = bVar6 + *(char *)CONCAT31(uVar18,bVar6) + CARRY1((byte)uVar30,bVar29);
      pcVar31 = (char *)CONCAT22(uVar26,CONCAT11(cVar7 + *(char *)(uVar12 - 0x60),(char)pcVar31));
      *(char *)CONCAT31(uVar18,cVar32) = *(char *)CONCAT31(uVar18,cVar32) + cVar32;
      cVar7 = cVar32 + '\x12';
      pbVar8 = (byte *)CONCAT31(uVar18,cVar7);
      cVar5 = *pcVar31;
      *pcVar31 = *pcVar31 + cVar7;
      if (SCARRY1(cVar5,cVar7) != *pcVar31 < '\0') break;
code_r0x00402c8d:
      cVar5 = (char)pbVar8;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
      *(byte *)puVar36 = *(byte *)puVar36 + cVar5;
      *pbVar8 = *pbVar8 + cVar5;
    }
    *pbVar8 = *pbVar8 + cVar7;
    pbVar8 = (byte *)CONCAT31(uVar18,cVar32 + '$');
    *pbVar8 = *pbVar8 + cVar22;
    bVar6 = *(byte *)puVar36;
    *(byte *)puVar36 = *(byte *)puVar36 + cVar25;
    uVar41 = in_ES;
    uVar40 = param_3;
  } while (SCARRY1(bVar6,cVar25) == (char)*(byte *)puVar36 < '\0');
  do {
    cVar5 = (char)pbVar8;
    *pbVar8 = *pbVar8 + cVar5;
    uVar18 = (undefined3)((uint)pbVar8 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar36;
    bVar29 = cVar5 + 0x24;
    cVar7 = (char)((uint)pcVar31 >> 8);
    pcVar31[-0x62] = pcVar31[-0x62] + cVar7;
    *(char *)CONCAT31(uVar18,bVar29) = *(char *)CONCAT31(uVar18,bVar29) + bVar29;
    bVar6 = cVar5 + 0x2fU + (byte)*endpoint;
    cVar32 = bVar6 + (0xf4 < bVar29);
    cVar5 = cVar32 + *(char *)CONCAT31(uVar18,cVar32) +
            (CARRY1(cVar5 + 0x2fU,(byte)*endpoint) || CARRY1(bVar6,0xf4 < bVar29));
    pcVar10 = (char *)CONCAT31(uVar18,cVar5);
    *pcVar10 = *pcVar10 - (char)puVar36;
    *pcVar10 = *pcVar10 + cVar5;
    pcVar14 = (char *)((int)puVar36 - *puVar36);
    *(byte *)(puVar35 + (int)pcVar31) = (byte)puVar35[(int)pcVar31] + cVar7;
    pcVar10[unaff_EBP] = pcVar10[unaff_EBP] + cVar5;
    *pcVar14 = *pcVar14 + (char)endpoint;
    pcVar10 = (char *)CONCAT22((short)((uint)pbVar8 >> 0x10),
                               CONCAT11((char)((uint)pbVar8 >> 8) - *pcVar14,cVar5));
    uVar12 = *puVar38;
    *pcVar10 = *pcVar10 - (char)((uint)pcVar14 >> 8);
    *pcVar10 = *pcVar10 + cVar5;
    uVar26 = (undefined2)((uint)unaff_retaddr >> 0x10);
    unaff_retaddr = (uint *)CONCAT22(uVar26,uVar41);
    pbVar20 = (byte *)CONCAT22((short)((uint)pcVar31 >> 0x10),
                               CONCAT11(cVar7 - (byte)*puVar35,(char)pcVar31));
    unaff_EBP = unaff_EBP + *(int *)(pbVar20 + (int)endpoint);
    puVar13 = (uint *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + (byte)uVar12);
    while( true ) {
      puVar36 = puVar13;
      uVar34 = (undefined2)((uint)pbVar20 >> 0x10);
      bVar33 = (char)((uint)pbVar20 >> 8) + pbVar20[0x18];
      *pcVar10 = *pcVar10 + (char)pcVar10;
      pbVar8 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + 'o');
      cVar5 = (char)endpoint;
      *(byte *)puVar36 = (byte)*puVar36 + cVar5;
      uVar12 = *puVar35;
      bVar27 = (byte)((uint)endpoint >> 8);
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + (uint)CARRY1(bVar27,*pbVar8) + *(int *)pbVar8;
      *(byte *)puVar36 = (byte)*puVar36 + cVar5;
      cVar32 = ((char)pbVar20 - (byte)uVar12) - (byte)*puVar35;
      bVar29 = *(byte *)((int)puVar38 + 0x1a);
      *pbVar8 = *pbVar8 + (char)pbVar8;
      endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),
                                  CONCAT11(bVar27 + bVar6 + bVar29 | (byte)*puVar36,cVar5));
      pbVar8 = pbVar8 + *puVar36;
      if ((POPCOUNT((uint)pbVar8 & 0xff) & 1U) != 0) break;
      *pbVar8 = *pbVar8 + (char)pbVar8;
      bVar6 = (char)pbVar8 + 0x6f;
      pcVar10 = (char *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar6);
      pcVar31 = (char *)(CONCAT31((int3)(CONCAT22(uVar34,CONCAT11(bVar33,(char)pbVar20)) >> 8),
                                  cVar32) + -1);
      *pcVar10 = *pcVar10 + bVar6;
      *pcVar10 = *pcVar10 + bVar6;
      *pcVar31 = *pcVar31 + (byte)puVar36;
      *(byte *)((int)pcVar10 * 2) = *(byte *)((int)pcVar10 * 2) ^ bVar6;
      uVar3 = *(undefined6 *)pcVar10;
      uVar41 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar10 = (char *)uVar3;
      *pcVar10 = *pcVar10 + (char)uVar3;
      *(byte *)puVar35 = (byte)*puVar35 + (char)uVar3;
      pcVar10 = (char *)((uint)pcVar10 | 0x73110008);
      bVar33 = (byte)((uint)pcVar31 >> 8);
      *(byte *)puVar38 = (byte)*puVar38 - bVar33;
      *(byte *)puVar36 = (byte)*puVar36 + cVar5;
      puVar13 = puVar35 + (uint)bVar43 * -2 + 1;
      out(*puVar35,(short)puVar36);
      *pcVar10 = *pcVar10;
      cVar5 = (char)pcVar10;
      *pcVar10 = *pcVar10 + cVar5;
      bVar6 = *(byte *)(unaff_EBP - 0x5a);
      uVar34 = (undefined2)((uint)pcVar31 >> 0x10);
      cVar32 = (char)pcVar31;
      *pcVar10 = *pcVar10 + cVar5;
      cVar5 = cVar5 + '\x02';
      uVar12 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar5);
      endpoint = (uint *)(uVar12 | 0x73110000);
      puVar35 = puVar13 + (uint)bVar43 * -2 + 1;
      out(*puVar13,(short)puVar36);
      *(byte *)endpoint = (byte)*endpoint;
      bVar27 = (byte)puVar36 | (byte)*puVar38;
      puVar13 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),bVar27);
      *(byte *)endpoint = (byte)*endpoint + cVar5;
      pcVar10 = (char *)(uVar12 | 0x7b1f1609);
      bVar43 = (uVar40 & 0x400) != 0;
      *(uint *)((int)puVar38 + -0x7d) = *(uint *)((int)puVar38 + -0x7d) | unaff_EBP;
      bVar29 = (byte)pcVar10;
      *pcVar10 = *pcVar10 + bVar29;
      bVar33 = bVar33 | bVar6 | *(byte *)((int)puVar35 + 0x19);
      pbVar20 = (byte *)CONCAT22(uVar34,CONCAT11(bVar33,cVar32));
      *pcVar10 = *pcVar10 + bVar29;
      uVar18 = (undefined3)((uint)pcVar10 >> 8);
      puVar35[(int)puVar38 * 2] =
           (uint)((int)puVar13 + (uint)(0xd2 < bVar29) + puVar35[(int)puVar38 * 2]);
      bVar6 = bVar29 + 0x2d ^ *(byte *)CONCAT31(uVar18,bVar29 + 0x2d);
      pcVar10 = (char *)CONCAT31(uVar18,bVar6);
      uVar12 = *puVar35;
      *(byte *)puVar35 = (byte)*puVar35 + bVar6;
      uVar40 = uVar41;
      if (CARRY1((byte)uVar12,bVar6)) {
        *pcVar10 = *pcVar10 + bVar6;
        bVar6 = bVar6 | pcVar10[0x4000019];
        pcVar10 = (char *)CONCAT31(uVar18,bVar6);
        if ('\0' < (char)bVar6) {
          *pcVar10 = *pcVar10 + bVar6;
          piVar15 = (int *)CONCAT31(uVar18,bVar6 + 0x28);
          *piVar15 = (int)piVar15 + (uint)(0xd7 < bVar6) + *piVar15;
          bVar23 = (byte)((uint6)uVar3 >> 8);
          *pbVar20 = *pbVar20 + bVar23;
          uVar28 = CONCAT11((byte)((uint)puVar36 >> 8) | bVar33,bVar27);
          puVar13 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),uVar28);
          unaff_retaddr = (uint *)CONCAT22(uVar26,uVar41);
          bVar27 = in(uVar28);
          pbVar8 = (byte *)CONCAT31(uVar18,bVar27);
          bVar29 = *pbVar8;
          bVar42 = SCARRY1(*pbVar8,bVar27);
          *pbVar8 = *pbVar8 + bVar27;
          bVar6 = *pbVar8;
          puVar36 = puVar35;
          uVar39 = uVar41;
          if (!CARRY1(bVar29,bVar27)) goto code_r0x00402e19;
          *pbVar8 = *pbVar8 + bVar27;
          bVar23 = bVar23 | *pbVar8;
          endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),CONCAT11(bVar23,cVar5));
          pcVar10 = (char *)CONCAT31(uVar18,bVar27 + *pbVar8);
          *pbVar20 = *pbVar20 + bVar23;
        }
        uVar18 = (undefined3)((uint)pcVar10 >> 8);
        bVar29 = (byte)pcVar10 | (byte)*puVar13;
        pbVar8 = (byte *)CONCAT31(uVar18,bVar29);
        puVar36 = puVar35 + (uint)bVar43 * -2 + 1;
        out(*puVar35,(short)puVar13);
        LOCK();
        bVar6 = *pbVar8;
        *pbVar8 = bVar29;
        UNLOCK();
        *(byte *)puVar13 = (byte)*puVar13 + (char)endpoint;
        piVar15 = (int *)(CONCAT31(uVar18,bVar6) + -0x1b7e07);
        *(byte *)puVar13 = (byte)*puVar13 + (char)endpoint;
        iVar9 = (int)endpoint - *(int *)pbVar20;
        bVar6 = *(byte *)((int)puVar38 + -0x7a);
        uVar26 = (undefined2)((uint)iVar9 >> 0x10);
        *(char *)piVar15 = *(char *)piVar15 + (char)piVar15;
        bVar29 = (char)((uint)iVar9 >> 8) + bVar6 | *(byte *)((int)puVar38 + 0x17);
        *(char *)piVar15 = *(char *)piVar15 + (char)piVar15;
        uVar18 = (undefined3)(CONCAT22(uVar26,CONCAT11(bVar29,(byte)iVar9)) >> 8);
        bVar6 = (byte)iVar9 | *pbVar20;
        endpoint = (uint *)CONCAT31(uVar18,bVar6);
        pbVar8 = (byte *)((int)piVar15 + *piVar15);
        puVar35 = puVar36;
        if (SCARRY4((int)piVar15,*piVar15)) goto code_r0x00402e0a;
        *(byte *)endpoint = (byte)*endpoint + bVar6;
        *(byte **)pbVar20 = (byte *)(*(int *)pbVar20 + (int)puVar13);
        piVar15 = (int *)CONCAT31(uVar18,bVar6 + 0x27);
        endpoint = (uint *)CONCAT22(uVar26,CONCAT11(bVar29 + *(byte *)((int)puVar38 + -0x79),bVar6))
        ;
        *(byte *)piVar15 = (char)*piVar15 + bVar6 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar31 = (char *)CONCAT22(uVar34,CONCAT11(bVar33 | *(byte *)(unaff_EBP - 0x62),cVar32));
  } while( true );
code_r0x00402dff:
  pbVar8 = (byte *)CONCAT22((short)((uint)piVar15 >> 0x10),
                            CONCAT11((byte)((uint)piVar15 >> 8) |
                                     *(byte *)((int)puVar13 + 0x2170411),(byte)piVar15));
  puVar35 = puVar36 + (uint)bVar43 * -2 + 1;
  out(*puVar36,(short)puVar13);
  *pbVar8 = (byte)piVar15;
  *(byte *)puVar13 = (byte)*puVar13 + (char)endpoint;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar8;
  *pbVar8 = *pbVar8 - cVar32;
  *pbVar8 = *pbVar8 + (char)pbVar8;
  bVar42 = false;
  bVar6 = (byte)((uint)endpoint >> 8) | bRam052b0603;
  endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),CONCAT11(bVar6,(char)endpoint));
  puVar36 = puVar35;
code_r0x00402e19:
  if (bVar6 == 0 || bVar42 != (char)bVar6 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar8;
  *pbVar8 = *pbVar8 + cRam89280411;
  piVar15 = (int *)CONCAT22((short)((uint)pbVar8 >> 0x10),
                            CONCAT11((byte)((uint)pbVar8 >> 8) | *(byte *)((int)puVar13 + 0x7190411)
                                     ,cRam89280411));
  *(char *)piVar15 = (char)*piVar15 + cRam89280411;
  cVar5 = (char)endpoint;
  endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),
                              CONCAT11((byte)((uint)endpoint >> 8) | (byte)*puVar13,cVar5));
  puVar36 = (uint *)((int)puVar36 + *piVar15);
  pbVar8 = (byte *)((int)piVar15 + *piVar15);
  bVar29 = (byte)pbVar8;
  *pbVar8 = *pbVar8 + bVar29;
  *(byte *)puVar36 = (byte)*puVar36 + cVar5;
  bVar6 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar29;
  *(uint *)pbVar8 = *(int *)pbVar8 + unaff_EBP + (uint)CARRY1(bVar6,bVar29);
  piVar15 = (int *)CONCAT31((int3)((uint)pbVar8 >> 8),*pbVar8);
  *(byte *)puVar13 = (byte)*puVar13 + cVar5;
  puVar35 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(byte)puVar13 | (byte)*puVar13);
  pbVar8 = (byte *)((int)puVar35 + -0x43);
  *pbVar8 = *pbVar8 + (char)((uint)puVar13 >> 8);
  puVar13 = puVar35;
  puVar35 = puVar38;
  uVar40 = in_ES;
code_r0x00402e42:
  in_ES = uVar39;
  puVar38 = puVar35;
  uVar39 = in_ES;
  if (SCARRY4((int)piVar15,*piVar15)) goto code_r0x00402e6e;
  iVar9 = *(int *)((int)piVar15 + *piVar15);
  *(byte *)puVar13 = (byte)*puVar13 + (char)endpoint;
  piVar15 = (int *)(iVar9 + -0x8c6f);
  puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),
                             CONCAT11((byte)((uint)puVar13 >> 8) | *(byte *)((int)puVar13 + -0x3f),
                                      (char)puVar13));
  pbVar16 = (byte *)((int)piVar15 + *piVar15);
  pbVar8 = pbVar16;
  puVar38 = unaff_retaddr;
  if (SCARRY4((int)piVar15,*piVar15)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar16 = *pbVar16 + (char)pbVar16;
  endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),
                              CONCAT11((byte)((uint)endpoint >> 8) | (byte)*puVar13,(char)endpoint))
  ;
  puVar35 = puVar36 + (uint)bVar43 * -2 + 1;
  out(*puVar36,(short)puVar13);
  puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 + (byte)*puVar38);
  puVar36 = puVar35 + (uint)bVar43 * -2 + 1;
  out(*puVar35,(short)puVar13);
  uVar40 = in_ES;
  uVar39 = uVar41;
code_r0x00402e6e:
  in_ES = uVar40;
  uVar18 = (undefined3)((uint)puVar13 >> 8);
  cVar5 = (char)puVar13 + (byte)*puVar38;
  puVar35 = puVar36 + (uint)bVar43 * -2 + 1;
  out(*puVar36,(short)CONCAT31(uVar18,cVar5));
  puVar13 = (uint *)CONCAT31(uVar18,cVar5 + (byte)*puVar38);
  puVar36 = puVar35 + (uint)bVar43 * -2 + 1;
  out(*puVar35,(short)puVar13);
  pbVar8 = (byte *)0x0;
  puVar35 = puVar38;
code_r0x00402e81:
  puVar38 = puVar35;
  bVar29 = (char)pbVar8 - *pbVar8;
  iVar9 = CONCAT31((int3)((uint)pbVar8 >> 8),bVar29);
  *pbVar20 = *pbVar20 + (char)puVar13;
  pbVar16 = (byte *)(iVar9 * 2);
  *pbVar16 = *pbVar16 ^ bVar29;
  pbVar16 = (byte *)(int)(short)iVar9;
  *pbVar16 = *pbVar16 + bVar29;
  *(byte *)puVar38 = (byte)*puVar38 + (byte)endpoint;
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar29;
  *(byte **)(pbVar20 + -0x73) =
       (byte *)((int)puVar36 + (uint)CARRY1(bVar6,bVar29) + *(int *)(pbVar20 + -0x73));
  *pbVar16 = *pbVar16 + bVar29;
  bVar6 = (byte)endpoint | (byte)*puVar13;
  endpoint = (uint *)CONCAT31((int3)((uint)endpoint >> 8),bVar6);
  puVar35 = puVar36;
  if ((char)bVar6 < '\x01') goto code_r0x00402eb4;
  *pbVar16 = *pbVar16 + bVar29;
  pbVar8 = (byte *)CONCAT31((int3)(char)((uint)pbVar8 >> 8),bVar29 + 0x2d);
  puVar36[(int)puVar38 * 2] =
       (uint)((int)puVar13 + (uint)(0xd2 < bVar29) + puVar36[(int)puVar38 * 2]);
  uStack_1c = CONCAT22(uStack_1c._2_2_,uVar41);
  do {
    uVar12 = *puVar36;
    bVar6 = (byte)pbVar8;
    *(byte *)puVar36 = (byte)*puVar36 + bVar6;
    if (!CARRY1((byte)uVar12,bVar6)) break;
    *pbVar8 = *pbVar8 + bVar6;
    bVar6 = bVar6 | pbVar8[0x400001a];
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar6);
    if ((char)bVar6 < '\x01') {
code_r0x00402ecc:
      *pbVar16 = *pbVar16 + (byte)pbVar16;
      uVar18 = (undefined3)((uint)pbVar16 >> 8);
      bVar6 = (byte)pbVar16 | pbVar16[0x400001b];
      puVar37 = (uint *)CONCAT31(uVar18,bVar6);
      if ((char)bVar6 < '\x01') {
        uVar12 = *puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + (byte)endpoint;
        *(char *)((int)puVar37 * 2) =
             *(char *)((int)puVar37 * 2) - CARRY1((byte)uVar12,(byte)endpoint);
        bVar42 = 0x81 < bVar6;
        bVar6 = bVar6 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar16 = *pbVar16 + bVar6;
      puVar35 = puVar36;
code_r0x00402eb4:
      uVar18 = (undefined3)((uint)pbVar16 >> 8);
      bVar6 = (char)pbVar16 + 0x6f;
      puVar37 = (uint *)CONCAT31(uVar18,bVar6);
      *puVar37 = uStack_1c;
      uVar12 = *puVar13;
      *(byte *)puVar13 = (byte)*puVar13 + (char)endpoint;
      uStack_1c = CONCAT22(uStack_1c._2_2_,uVar41);
      param_3 = uVar41;
      if ((byte)*puVar13 != 0 && SCARRY1((byte)uVar12,(char)endpoint) == (char)(byte)*puVar13 < '\0'
         ) {
        *(byte *)puVar37 = (char)*puVar37 + bVar6;
        bVar29 = (char)pbVar16 + 0x9c;
        pbVar16 = (byte *)CONCAT31(uVar18,bVar29);
        puVar35[(int)puVar38 * 2] =
             (uint)((int)puVar13 + (uint)(0xd2 < bVar6) + puVar35[(int)puVar38 * 2]);
        uStack_1c = CONCAT22(uStack_1c._2_2_,uVar41);
        uVar12 = *puVar35;
        *(byte *)puVar35 = (byte)*puVar35 + bVar29;
        puVar36 = puVar35;
        if (CARRY1((byte)uVar12,bVar29)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar36 = puVar35 + (uint)bVar43 * -2 + 1;
      out(*puVar35,(short)puVar13);
    }
    cVar5 = (char)puVar37;
    *(char *)puVar37 = (char)*puVar37 + cVar5;
    uVar18 = (undefined3)((uint)puVar37 >> 8);
    bVar6 = cVar5 + 0x6f;
    puVar35 = (uint *)CONCAT31(uVar18,bVar6);
    *puVar35 = uStack_1c;
    uVar12 = *puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + (byte)endpoint;
    uStack_1c = CONCAT22(uStack_1c._2_2_,uVar41);
    *(byte *)(puVar36 + 7) = ((byte)puVar36[7] - bVar33) - CARRY1((byte)uVar12,(byte)endpoint);
    *(byte *)puVar35 = (char)*puVar35 + bVar6;
    bVar29 = cVar5 + 0x9c;
    pcVar10 = (char *)CONCAT31(uVar18,bVar29);
    puVar36[(int)puVar38 * 2] =
         (uint)((int)puVar13 + (uint)(0xd2 < bVar6) + puVar36[(int)puVar38 * 2]);
    uVar12 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + bVar29;
    if (!CARRY1((byte)uVar12,bVar29)) goto code_r0x00402e7e;
    *pcVar10 = *pcVar10 + bVar29;
    bVar29 = bVar29 | pcVar10[0x400001c];
    pbVar8 = (byte *)CONCAT31(uVar18,bVar29);
    uVar39 = uVar41;
    if ((char)bVar29 < '\x01') goto code_r0x00402f16;
    *pbVar8 = *pbVar8 + bVar29;
    puVar35 = (uint *)CONCAT31(uVar18,bVar29 + 0x6f);
    while( true ) {
      *puVar35 = uStack_1c;
      uVar12 = *puVar13;
      *(byte *)puVar13 = (byte)*puVar13 + (byte)endpoint;
      *(uint *)((int)puVar36 + 0x1d) =
           (*(int *)((int)puVar36 + 0x1d) - (int)puVar38) -
           (uint)CARRY1((byte)uVar12,(byte)endpoint);
      bVar6 = (byte)puVar35;
      *(byte *)puVar35 = (char)*puVar35 + bVar6;
      bVar29 = bVar6 + 0x2d;
      pbVar8 = (byte *)CONCAT31((int3)((uint)puVar35 >> 8),bVar29);
      puVar36[(int)puVar38 * 2] =
           (uint)((int)puVar13 + (uint)(0xd2 < bVar6) + puVar36[(int)puVar38 * 2]);
      uStack_1c = CONCAT22((short)(uStack_1c >> 0x10),uVar41);
      uVar12 = *puVar36;
      *(byte *)puVar36 = (byte)*puVar36 + bVar29;
      if (!CARRY1((byte)uVar12,bVar29)) break;
      *pbVar8 = *pbVar8 + bVar29;
code_r0x00402f16:
      bVar6 = (byte)pbVar8 | pbVar8[0x400001d];
      puVar35 = (uint *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar6);
      uVar12 = unaff_EBP;
      if ((char)bVar6 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = uVar12;
        *(byte *)puVar35 = (byte)*puVar35 + (char)puVar35;
        uVar18 = (undefined3)((uint)puVar35 >> 8);
        cVar5 = (char)puVar35 + 'o';
        puVar37 = (uint *)CONCAT31(uVar18,cVar5);
        *puVar37 = uStack_1c;
        cVar7 = (char)endpoint;
        *(byte *)puVar13 = (byte)*puVar13 + cVar7;
        uStack_1c = CONCAT22(uStack_1c._2_2_,uVar41);
        bVar6 = (byte)((uint)puVar13 >> 8);
        bVar42 = bVar6 < (byte)*puVar36;
        puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),
                                   CONCAT11(bVar6 - (byte)*puVar36,(char)puVar13));
        if (bVar42) break;
        bVar42 = CARRY4((uint)puVar37,*puVar37);
        puVar35 = (uint *)((int)puVar37 + *puVar37);
        if (!SCARRY4((int)puVar37,*puVar37)) {
          bVar42 = CARRY4(unaff_EBP,*puVar35);
          unaff_EBP = unaff_EBP + *puVar35;
        }
        *puVar35 = (*puVar35 - (int)puVar35) - (uint)bVar42;
        *(byte *)puVar13 = (byte)*puVar13 + cVar7;
        endpoint = (uint *)CONCAT22((short)((uint)endpoint >> 0x10),
                                    CONCAT11((char)((uint)endpoint >> 8) + (byte)*puVar13,
                                             cVar7 - (byte)*puVar13));
        *(byte *)puVar35 = (byte)*puVar35 + (char)puVar35;
code_r0x00402f3b:
        cVar7 = (char)puVar13;
        *pbVar20 = *pbVar20 + cVar7;
        bVar6 = (byte)puVar35;
        *(byte *)((int)puVar35 * 2) = *(byte *)((int)puVar35 * 2) ^ bVar6;
        *(byte *)puVar35 = (byte)*puVar35 + bVar6;
        *(byte *)puVar35 = (byte)*puVar35 + cVar7;
        uVar12 = *puVar35;
        *(byte *)puVar35 = (byte)*puVar35 + bVar6;
        *puVar13 = (uint)((int)puVar35 + (uint)CARRY1((byte)uVar12,bVar6) + *puVar13);
        pcVar10 = (char *)((uint)puVar35 | *puVar38);
        uVar18 = (undefined3)((uint)pcVar10 >> 8);
        cVar5 = (char)pcVar10 + *pcVar10;
        pcVar10 = (char *)CONCAT31(uVar18,cVar5);
        *pcVar10 = *pcVar10 + cVar5;
        cVar5 = cVar5 + *pcVar10;
        piVar15 = (int *)CONCAT31(uVar18,cVar5);
        *(char *)piVar15 = (char)*piVar15 + cVar5;
        iVar9 = LocalDescriptorTableRegister();
        *piVar15 = iVar9;
        bVar6 = *pbVar20;
        bVar24 = (byte)((uint)endpoint >> 8);
        *pbVar20 = *pbVar20 + bVar24;
        iVar9 = *piVar15;
        uVar26 = (undefined2)((uint)endpoint >> 0x10);
        bVar23 = (byte)endpoint;
        *(byte *)puVar36 = (byte)*puVar36 + cVar5;
        puVar35 = puVar36 + (uint)bVar43 * -2 + 1;
        out(*puVar36,(short)puVar13);
        *(byte *)puVar35 = (byte)*puVar35 + cVar5;
        bVar29 = *pbVar20;
        *(byte *)puVar13 = (byte)*puVar13 - bVar33;
        *(byte *)puVar35 = (byte)*puVar35 + cVar5;
        puVar37 = puVar35 + (uint)bVar43 * -2 + 1;
        out(*puVar35,(short)puVar13);
        *(byte *)puVar37 = (byte)*puVar37 + cVar5;
        bVar27 = *pbVar20;
        *(uint *)((int)puVar13 + -0x23) = *(uint *)((int)puVar13 + -0x23) & (uint)puVar37;
        puVar17 = (ushort *)((int)piVar15 + *piVar15);
        if (!SCARRY4((int)piVar15,*piVar15)) {
          *puVar17 = param_3;
        }
        *(char *)puVar17 = (char)*puVar17 + (char)puVar17;
        uVar28 = CONCAT11((char)((uint)puVar13 >> 8) + *(byte *)((int)puVar13 + -0x15),cVar7);
        puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),uVar28);
        puVar35 = (uint *)((int)puVar17 + *(int *)puVar17);
        if (!SCARRY4((int)puVar17,*(int *)puVar17)) {
          *(ushort *)puVar35 = param_3;
        }
        cVar5 = (char)puVar35;
        *(byte *)puVar35 = (byte)*puVar35 + cVar5;
        cVar25 = ((bVar24 - (char)iVar9) - CARRY1(bVar6,bVar24) | bVar29 | bVar27) + (byte)*puVar35;
        endpoint = (uint *)CONCAT22(uVar26,CONCAT11(cVar25,bVar23));
        uVar12 = *puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + bVar23;
        if (CARRY1((byte)uVar12,bVar23)) {
          *(byte *)puVar35 = (byte)*puVar35 + cVar5;
          bVar6 = *(byte *)((int)puVar13 + 6);
          *(byte *)puVar13 = (byte)*puVar13 + bVar23;
          bVar29 = (cVar25 - (byte)*puVar37) + cRam14730307;
          *(byte *)puVar35 = (byte)*puVar35 + cVar5;
          bVar6 = bVar33 | bVar6 | *(byte *)((int)puVar13 + 0x2a);
          uVar12 = *puVar35;
          pbVar8 = (byte *)((int)puVar35 + (uint)CARRY1(bVar29,(byte)*puVar35) + *puVar35);
          *(byte *)puVar13 = (byte)*puVar13 + bVar23;
          cVar5 = cVar32 - (byte)*puVar37;
          cVar32 = bVar6 + *(char *)(CONCAT31((int3)(CONCAT22(uVar34,CONCAT11(bVar6,cVar32)) >> 8),
                                              cVar5) + 0x1e);
          *pbVar8 = *pbVar8 + (char)pbVar8;
          uVar18 = (undefined3)((uint)pbVar8 >> 8);
          bVar6 = (char)pbVar8 + 0x2aU & (byte)*puVar13;
          *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
          pcVar10 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
          cVar32 = cVar32 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar32,cVar5)) + 0x1f);
          *pcVar10 = *pcVar10 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar13;
          *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
          pcVar10 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
          cVar32 = cVar32 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar32,cVar5)) + 0x20);
          *pcVar10 = *pcVar10 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar13;
          *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
          pcVar10 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
          cVar32 = cVar32 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar32,cVar5)) + 0x21);
          *pcVar10 = *pcVar10 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar13;
          *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
          pcVar10 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
          cVar32 = cVar32 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar32,cVar5)) + 0x22);
          *pcVar10 = *pcVar10 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar13;
          *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
          pcVar10 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
          bVar29 = bVar29 + (byte)uVar12 + *pcVar10;
          uVar21 = CONCAT22(uVar26,CONCAT11(bVar29,bVar23));
          cVar32 = cVar32 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar32,cVar5)) + 0x25);
          *pcVar10 = *pcVar10 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar13;
          *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
          pcVar10 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
          pcVar31 = (char *)CONCAT22(uVar34,CONCAT11(cVar32 + *(char *)(CONCAT22(uVar34,CONCAT11(
                                                  cVar32,cVar5)) + 0x26),cVar5));
          *pcVar10 = *pcVar10 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar13;
          *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
          cVar5 = bVar6 + 0x2a;
          pcVar10 = (char *)CONCAT31(uVar18,cVar5);
          if ((POPCOUNT(cVar5) & 1U) == 0) {
            *pcVar10 = *pcVar10 + cVar5;
            pbVar8 = (byte *)(CONCAT31(uVar18,bVar6 + 0x4f) + -0x33282610);
            bVar6 = *pbVar8;
            bVar27 = (byte)pbVar8;
            *pbVar8 = *pbVar8 + bVar27;
            uVar18 = (undefined3)((uint)pbVar8 >> 8);
            if (!CARRY1(bVar6,bVar27)) {
              if (!SCARRY1(bVar27,'\0')) {
                *pbVar8 = *pbVar8 + bVar27;
                uVar21 = CONCAT22(uVar26,CONCAT11(bVar29 | (byte)*puVar13,bVar23));
                bVar27 = bVar27 & (byte)*puVar13;
                *(char *)CONCAT31(uVar18,bVar27) = *(char *)CONCAT31(uVar18,bVar27) + bVar27;
                pcVar10 = (char *)CONCAT31(uVar18,bVar27 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar10 = (char *)CONCAT31(uVar18,bVar27 + *pcVar31);
              if (SCARRY1(bVar27,*pcVar31) != (char)(bVar27 + *pcVar31) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar6 = bVar27 + *pcVar31;
            pbVar8 = (byte *)CONCAT31(uVar18,bVar6);
            if (SCARRY1(bVar27,*pcVar31) == (char)bVar6 < '\0') {
              pcVar10 = (char *)CONCAT22(uVar26,CONCAT11(bVar29 | (byte)*puVar13,bVar23));
              *pcVar31 = *pcVar31 + cVar7;
              *(byte *)puVar13 = (byte)*puVar13 ^ bVar6;
              *(char *)((int)pbVar8 * 2) = *(char *)((int)pbVar8 * 2) + bVar6;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar10 = *pcVar10 + (char)pcVar10;
            uVar18 = (undefined3)((uint)pcVar10 >> 8);
            bVar6 = (char)pcVar10 + 0x2aU & (byte)*puVar13;
            *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
            pcVar10 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
            *pcVar10 = *pcVar10 + bVar6 + 0x2a;
            pcVar10 = (char *)CONCAT31(uVar18,bVar6 + 0x54 & (byte)*puVar13);
code_r0x00403072:
            cVar5 = (char)pcVar10;
            *pcVar10 = *pcVar10 + cVar5;
            uVar18 = (undefined3)((uint)pcVar10 >> 8);
            pcVar10 = (char *)CONCAT31(uVar18,cVar5 + '*');
            *pcVar10 = *pcVar10 + cVar5 + '*';
            bVar6 = cVar5 + 0x54U & (byte)*puVar13;
            *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
            pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,in_ES);
            uVar21 = CONCAT22((short)((uint)uVar21 >> 0x10),
                              CONCAT11((char)((uint)uVar21 >> 8) +
                                       *(char *)CONCAT31(uVar18,bVar6 + 0x2a),(char)uVar21));
            *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar7;
            pcVar10 = pcStack_54;
code_r0x0040309a:
            cVar5 = (char)pcVar10;
            *pcVar10 = *pcVar10 + cVar5;
            pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,uVar41);
            *pcVar10 = *pcVar10 + cVar5;
            pbVar8 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar5 + 0x2aU & (byte)*puVar13);
          }
          cVar5 = (char)pbVar8;
          *pbVar8 = *pbVar8 + cVar5;
          uVar18 = (undefined3)((uint)pbVar8 >> 8);
          cVar32 = cVar5 + '*';
          pcVar10 = (char *)CONCAT31(uVar18,cVar32);
          *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar7;
          *pcVar10 = *pcVar10 + cVar32;
          cVar25 = (char)pcStack_54 - (byte)*puVar37;
          pcVar31 = (char *)CONCAT22((short)((uint)pcStack_54 >> 0x10),
                                     CONCAT11((char)((uint)pcStack_54 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_54 >> 8),
                                                                 cVar25) + 0x34),cVar25));
          *pcVar10 = *pcVar10 + cVar32;
          bVar6 = cVar5 + 0x54U & (byte)*puVar13;
          *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
          pbVar8 = (byte *)CONCAT31(uVar18,bVar6 + 0x2a);
          bVar6 = (byte)((uint)uVar21 >> 8);
          pcVar10 = (char *)CONCAT22((short)((uint)uVar21 >> 0x10),
                                     CONCAT11(bVar6 + *pbVar8,(char)uVar21));
          pbVar8 = pbVar8 + (uint)CARRY1(bVar6,*pbVar8) + *(int *)pbVar8;
          *(byte *)puVar13 = (byte)*puVar13 + (char)uVar21;
          uVar18 = (undefined3)((uint)pbVar8 >> 8);
          cVar5 = (byte)pbVar8 - *pbVar8;
          piVar15 = (int *)CONCAT31(uVar18,cVar5);
          puVar37 = (uint *)((int)puVar37 + (uint)((byte)pbVar8 < *pbVar8) + *piVar15);
          cVar5 = cVar5 + (char)*piVar15;
          pbVar8 = (byte *)CONCAT31(uVar18,cVar5);
          *pbVar8 = *pbVar8 + cVar5;
code_r0x004030df:
          *pcVar10 = *pcVar10 + cVar7;
          bVar6 = *pbVar8;
          bVar29 = (byte)pbVar8;
          *pbVar8 = *pbVar8 + bVar29;
          *(byte **)(pcVar31 + -0x41) =
               (byte *)((int)puVar37 + (uint)CARRY1(bVar6,bVar29) + *(int *)(pcVar31 + -0x41));
          *pbVar8 = *pbVar8 + bVar29;
          uVar18 = (undefined3)((uint)pbVar8 >> 8);
          bVar29 = bVar29 | (byte)*puVar37;
          *(char *)CONCAT31(uVar18,bVar29) = *(char *)CONCAT31(uVar18,bVar29) + bVar29;
          pcVar10 = (char *)CONCAT31(uVar18,bVar29 + 0x7b);
          *pcVar10 = *pcVar10 + bVar29 + 0x7b;
          pbVar8 = (byte *)((int)puVar37 + CONCAT31(uVar18,bVar29 - 8) + -1);
          *pbVar8 = *pbVar8 + (bVar29 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar36 = puVar37 + (uint)bVar43 * -2 + 1;
        out(*puVar37,uVar28);
        uVar12 = unaff_EBP + 1;
        uStack_1c = unaff_EBP;
      }
      bVar6 = cVar5 - bVar42;
      pbVar8 = (byte *)((int)puVar36 + (int)puVar38 * 2);
      bVar42 = CARRY1(*pbVar8,bVar6);
      *pbVar8 = *pbVar8 + bVar6;
code_r0x00402ef9:
      puVar35 = (uint *)CONCAT31(uVar18,bVar6 - bVar42);
      pbVar8 = (byte *)((int)puVar38 + unaff_EBP * 2);
      *pbVar8 = *pbVar8 + (bVar6 - bVar42);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)endpoint = (byte)*endpoint + (char)puVar13;
  puVar35 = puVar13 + 0x2828000;
  bVar6 = (byte)endpoint;
  bVar42 = (byte)*puVar35 < bVar6;
  *(byte *)puVar35 = (byte)*puVar35 - bVar6;
  bVar6 = (byte)pbVar8 + *pbVar8;
  piVar15 = (int *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar6 + bVar42);
  puVar35 = puVar38;
  uVar40 = in_ES;
  if (CARRY1((byte)pbVar8,*pbVar8) || CARRY1(bVar6,bVar42)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar10 = *pcVar10 + bVar29;
  uVar40 = in_ES;
  uVar39 = uVar41;
  goto code_r0x00402e6e;
}


