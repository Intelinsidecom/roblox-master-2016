/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402a0c
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 baseUrl, uint * param_2, ushort param_3)
 * Local Vars  : pcStack_54, uStack_1c, uVar1, uVar2, uVar3, uVar4, bVar5, cVar6, cVar7, in_EAX, pbVar8, piVar9, puVar10, pbVar11, iVar12, pcVar13, uVar14, pcVar15, puVar16, piVar17, pbVar18, puVar19, puVar20, uVar21, uVar22, uVar23, bVar24, bVar25, cVar26, bVar27, bVar28, cVar29, uVar30, uVar31, unaff_EBX, uVar32, pcVar33, cVar34, bVar35, uVar36, unaff_EBP, uVar37, unaff_ESI, puVar38, puVar39, unaff_EDI, puVar40, in_ES, uVar41, uVar42, in_CS, baseUrl, in_SS, in_DS, in_GS_OFFSET, bVar43, in_AF, bVar44, unaff_retaddr, param_2, param_3
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall _ctor(undefined4 baseUrl,uint *param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  byte *in_EAX;
  byte *pbVar8;
  undefined3 uVar21;
  int *piVar9;
  uint *puVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  uint *puVar16;
  int *piVar17;
  byte *pbVar18;
  uint *puVar19;
  ushort *puVar20;
  undefined1 uVar22;
  byte bVar24;
  byte bVar25;
  char cVar26;
  byte bVar27;
  byte bVar28;
  char cVar29;
  undefined2 uVar30;
  undefined4 uVar23;
  undefined2 uVar31;
  char cVar34;
  uint *unaff_EBX;
  uint uVar32;
  byte bVar35;
  undefined2 uVar36;
  char *pcVar33;
  int unaff_EBP;
  uint uVar37;
  uint *unaff_ESI;
  uint *puVar38;
  uint *puVar39;
  int unaff_EDI;
  uint *puVar40;
  ushort in_ES;
  ushort uVar41;
  ushort uVar42;
  ushort in_CS;
  ushort in_SS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar43;
  byte in_AF;
  bool bVar44;
  uint *unaff_retaddr;
  char *pcStack_54;
  uint uStack_1c;
  
  bVar44 = false;
                    /* .NET CLR Managed Code */
  bVar5 = (byte)((uint)baseUrl >> 8);
  uVar30 = (undefined2)((uint)baseUrl >> 0x10);
  bVar25 = (byte)baseUrl;
  bVar24 = bVar5 + *in_EAX;
  puVar16 = (uint *)CONCAT22(uVar30,CONCAT11(bVar24,bVar25));
  pbVar8 = in_EAX + (uint)CARRY1(bVar5,*in_EAX) + *(int *)in_EAX;
  *(byte *)param_2 = (char)*param_2 + bVar25;
  uVar37 = unaff_EBP + iRam0355720b;
  pbVar11 = pbVar8 + 0x73;
  bVar5 = *pbVar11;
  bVar35 = (byte)((uint)param_2 >> 8);
  *pbVar11 = *pbVar11 + bVar35;
  uVar21 = (undefined3)((uint)pbVar8 >> 8);
  bVar5 = (char)pbVar8 + CARRY1(bVar5,bVar35);
  pcVar13 = (char *)CONCAT31(uVar21,bVar5);
  *(byte *)param_2 = (char)*param_2 + bVar25;
  if ((POPCOUNT((char)*param_2) & 1U) == 0) {
    in_SS = (ushort)unaff_retaddr;
  }
  puVar40 = (uint *)(unaff_EDI + *(int *)(uVar37 + 0x17));
  *pcVar13 = *pcVar13 + bVar5;
  cVar6 = bVar5 + 2;
  pbVar11 = (byte *)CONCAT31(uVar21,cVar6);
  if (bVar5 < 0xfe) {
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    goto code_r0x00402a8f;
  }
  *pbVar11 = *pbVar11 + cVar6;
  uVar14 = *param_2;
  puVar38 = (uint *)((int)unaff_ESI + unaff_EBX[0x19]);
  *pbVar11 = *pbVar11 + cVar6;
  puVar16 = (uint *)CONCAT22(uVar30,CONCAT11(bVar24 | *pbVar11,bVar25 | (byte)uVar14));
  puVar10 = puVar40;
  do {
    bVar5 = (byte)pbVar11;
    pbVar11[in_GS_OFFSET] = pbVar11[in_GS_OFFSET] + bVar5;
    uVar30 = (undefined2)((uint)puVar16 >> 0x10);
    uVar22 = SUB41(puVar16,0);
    bVar25 = (byte)((uint)puVar16 >> 8) | *(byte *)((int)puVar10 + 0x66);
    puVar16 = (uint *)CONCAT22(uVar30,CONCAT11(bVar25,uVar22));
    *pbVar11 = *pbVar11 + bVar5;
    uVar21 = (undefined3)((uint)pbVar11 >> 8);
    bVar5 = bVar5 | (byte)*puVar38;
    pcVar13 = (char *)CONCAT31(uVar21,bVar5);
    if ((char)bVar5 < '\0') {
      *pcVar13 = *pcVar13 + bVar5;
      cVar6 = bVar5 + 2;
      piVar17 = (int *)CONCAT31(uVar21,cVar6);
      if ((POPCOUNT(cVar6) & 1U) == 0) {
        *(char *)piVar17 = (char)*piVar17 + cVar6;
        bVar5 = bVar5 + 0x71;
        pcVar33 = (char *)CONCAT31(uVar21,bVar5);
        pcVar13 = (char *)segment(in_DS,(short)unaff_EBX + (short)puVar38);
        *pcVar13 = *pcVar13 + bVar5;
        uVar14 = puVar10[0x1a];
        *pcVar33 = *pcVar33 + bVar5;
        puVar16 = (uint *)CONCAT22(uVar30,CONCAT11(bVar25 | (byte)uVar14 |
                                                   *(byte *)((int)puVar10 + 0x69),uVar22));
        *pcVar33 = *pcVar33 + bVar5;
        bVar5 = bVar5 | (byte)*param_2;
        pcVar13 = (char *)CONCAT31(uVar21,bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00402a75;
        goto code_r0x00402a5d;
      }
      unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
      out(*puVar38,(short)param_2);
    }
    else {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                            (char)unaff_EBX));
code_r0x00402a5d:
      *pcVar13 = *pcVar13 + (char)pcVar13;
      piVar17 = (int *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + 'o');
      unaff_ESI = puVar38;
    }
code_r0x00402a61:
    pcVar13 = (char *)segment(in_DS,(short)unaff_EBX + (short)unaff_ESI);
    *pcVar13 = *pcVar13 + (char)piVar17;
    cVar6 = (char)puVar16;
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                               CONCAT11((byte)((uint)puVar16 >> 8) | (byte)puVar10[0x1a],cVar6));
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    uVar30 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
    piVar9 = (int *)((int)piVar17 + *piVar17);
    puVar38 = unaff_ESI;
    puVar40 = puVar10;
    uVar41 = in_ES;
    if (SCARRY4((int)piVar17,*piVar17)) goto code_r0x00402ae3;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    puVar38 = unaff_ESI + (uint)bVar44 * -2 + 1;
    out(*unaff_ESI,uVar30);
code_r0x00402a75:
    bVar5 = (byte)((uint)puVar16 >> 8) | (byte)*param_2;
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar5,(char)puVar16));
    piVar17 = (int *)(uint)(byte)*unaff_EBX;
    *(byte *)puVar38 = (byte)*puVar38 - bVar5;
    puVar40 = puVar10;
code_r0x00402a7f:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    out(*puVar38,(short)param_2);
    bVar5 = in((short)param_2);
    *(byte *)puVar40 = bVar5;
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                               CONCAT11((byte)((uint)puVar16 >> 8) | (byte)*param_2,(char)puVar16));
    iVar12 = *piVar17;
    cVar6 = in(1);
    puVar10 = (uint *)CONCAT31((int3)((uint)((int)piVar17 + *piVar17) >> 8),cVar6);
    *(char *)puVar10 = (char)*puVar10 + cVar6;
    pbVar11 = (byte *)((uint)puVar10 | *puVar10);
    *(byte *)puVar16 = (byte)*puVar16 + (char)param_2;
    puVar38 = (uint *)((int)puVar38 + (((uint)bVar44 * -8 + 4) - iVar12));
    puVar40 = (uint *)((int)puVar40 + (uint)bVar44 * -2 + 1);
    in_SS = in_ES;
    while( true ) {
      bVar5 = (byte)pbVar11 | (byte)*param_2;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
      puVar10 = puVar40;
      if ((POPCOUNT(bVar5) & 1U) != 0) break;
      *pbVar11 = *pbVar11 + bVar5;
code_r0x00402a9b:
      uVar21 = (undefined3)((uint)pbVar11 >> 8);
      cVar6 = (char)pbVar11 + '\r';
      piVar9 = (int *)CONCAT31(uVar21,cVar6);
      *(uint *)(uVar37 + 2) = *(uint *)(uVar37 + 2) | (uint)piVar9;
      *(char *)piVar9 = (char)*piVar9 + cVar6;
      *(byte *)(puVar38 + -0xc800000) = (byte)puVar38[-0xc800000] + (char)param_2;
      *(char *)piVar9 = (char)*piVar9 + cVar6;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      cVar34 = (char)puVar16;
      if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
        *(byte *)param_2 = (byte)*param_2 + cVar34;
        unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
        out(*puVar38,(short)param_2);
        piVar17 = (int *)((longlong)*piVar9 * 0x7b020a00);
        *(char *)piVar17 =
             (char)*piVar17 - ((longlong)(int)piVar17 != (longlong)*piVar9 * 0x7b020a00);
        pbVar11 = (byte *)((int)puVar10 + uVar37 * 2);
        *pbVar11 = *pbVar11;
        goto code_r0x00402a61;
      }
      *(char *)piVar9 = (char)*piVar9 + cVar6;
      puVar40 = (uint *)CONCAT31(uVar21,(char)pbVar11 + ':');
      unaff_ESI = (uint *)((uint)puVar38 | *(uint *)((int)param_2 + -0x79));
      iVar12 = (int)puVar40 + *puVar40;
      if (SCARRY4((int)puVar40,*puVar40)) {
        unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              (byte)unaff_ESI[(int)unaff_EBX],(char)unaff_EBX));
        *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar12;
        puVar40 = puVar10;
        goto code_r0x00402b33;
      }
      uVar21 = (undefined3)((uint)iVar12 >> 8);
      cVar6 = (char)iVar12 + CARRY4((uint)puVar40,*puVar40);
      piVar17 = (int *)CONCAT31(uVar21,cVar6);
      *(byte *)param_2 = (byte)*param_2 + cVar34;
      bVar43 = (POPCOUNT((byte)*param_2) & 1U) != 0;
      if ((bVar43) && (bVar43)) goto code_r0x00402a61;
      *(char *)piVar17 = (char)*piVar17 + cVar6;
      cVar7 = cVar6 + '(';
      pcVar13 = (char *)CONCAT31(uVar21,cVar7);
      puVar40 = puVar10 + (uint)bVar44 * -2 + 1;
      uVar14 = in((short)param_2);
      *puVar10 = uVar14;
      *pcVar13 = *pcVar13 + cVar7;
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                 CONCAT11((byte)((uint)puVar16 >> 8) | bRama07b0222,cVar34));
      *pcVar13 = *pcVar13 + cVar7;
      pcVar13 = (char *)CONCAT31(uVar21,cVar6 + '>');
code_r0x00402ad2:
      out(*unaff_ESI,(short)param_2);
      puVar38 = (uint *)((int)(unaff_ESI + (uint)bVar44 * -2 + 1) + (uint)bVar44 * -2 + 1);
      out((byte)unaff_ESI[(uint)bVar44 * -2 + 1],(short)param_2);
      bVar5 = (byte)pcVar13;
      *pcVar13 = *pcVar13 + bVar5;
      unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar40);
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar5 = bVar5 + in_AF * -6;
      param_2 = (uint *)((uint)param_2 ^ *param_2);
      cVar6 = bVar5 + (0x9f < bVar5 | in_AF * (bVar5 < 6)) * -0x60 + (byte)*param_2;
      piVar17 = (int *)CONCAT31(uVar21,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
      *(char *)piVar17 = (char)*piVar17 + cVar6;
      piVar9 = (int *)CONCAT31(uVar21,cVar6 + '\x17');
      uVar41 = in_ES;
code_r0x00402ae3:
      out(*puVar38,(short)param_2);
      unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1 + (uint)bVar44 * -2 + 1;
      out(puVar38[(uint)bVar44 * -2 + 1],(short)param_2);
      *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
code_r0x00402ae7:
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *(byte *)(uVar37 - 0x60),
                                            (char)unaff_EBX));
      cVar6 = (char)piVar9;
      *(char *)piVar9 = (char)*piVar9 + cVar6;
      uVar21 = (undefined3)((uint)piVar9 >> 8);
      bVar5 = cVar6 + 2;
      pbVar11 = (byte *)CONCAT31(uVar21,bVar5);
      in_ES = uVar41;
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar5;
        cVar6 = cVar6 + '}';
        pbVar11 = (byte *)CONCAT31(uVar21,cVar6);
        *pbVar11 = (*pbVar11 - cVar6) - (0x84 < bVar5);
        pbVar8 = (byte *)((int)param_2 + (int)pbVar11);
        *pbVar8 = *pbVar8 + cVar6;
        bVar5 = POPCOUNT(*pbVar8);
        puVar38 = unaff_ESI;
code_r0x00402af9:
        in_ES = uVar41;
        puVar10 = puVar40;
        if ((bVar5 & 1) == 0) {
          *pbVar11 = *pbVar11 + (char)pbVar11;
          bVar5 = (byte)puVar16;
          *(byte *)param_2 = (byte)*param_2 + bVar5;
          unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
          unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
          out(*puVar38,(short)param_2);
          uVar14 = *param_2;
          *(byte *)param_2 = (byte)*param_2 + bVar5;
          iVar12 = CONCAT31((int3)((uint)pbVar11 >> 8),(char)pbVar11 + 'o') +
                   *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar14,bVar5);
          pcVar13 = (char *)CONCAT31((int3)((uint)iVar12 >> 8),(char)iVar12 + '(');
          while( true ) {
            uVar14 = *param_2;
            bVar25 = (byte)puVar16;
            *(byte *)param_2 = (byte)*param_2 + bVar25;
            pcVar13 = pcVar13 + (uint)CARRY1((byte)uVar14,bVar25) + iRam73280512;
            bVar5 = (byte)pcVar13;
            *pcVar13 = *pcVar13 + bVar5;
            puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                       CONCAT11((byte)((uint)puVar16 >> 8) | bRam7d160243,bVar25));
            bVar44 = ((uint)unaff_retaddr & 0x400) != 0;
            in_AF = ((uint)unaff_retaddr & 0x10) != 0;
            *pcVar13 = *pcVar13 + bVar5;
            uVar21 = (undefined3)((uint)pcVar13 >> 8);
            iRam0000a37d = iRam0000a37d + CONCAT31(uVar21,bVar5 + 2) + (uint)(0xfd < bVar5);
            cVar6 = bVar5 + 4;
            if (SCARRY1(bVar5 + 2,'\x02') != cVar6 < '\0') break;
            *(char *)CONCAT31(uVar21,cVar6) = *(char *)CONCAT31(uVar21,cVar6) + cVar6;
            iVar12 = CONCAT31(uVar21,bVar5 + 0x16);
code_r0x00402b33:
            piVar9 = (int *)(iVar12 + 0xe2802);
            *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)puVar16 >> 8);
            uVar41 = in_ES;
            in_ES = in_SS;
            while( true ) {
              bVar25 = (byte)unaff_EBX | (byte)((uint)puVar16 >> 8);
              unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar25);
              *piVar9 = (int)(*piVar9 + (int)piVar9);
              cVar6 = (char)piVar9;
              *(byte *)param_2 = (byte)*param_2 + cVar6;
              if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
              *(char *)piVar9 = (char)*piVar9 + cVar6;
              uVar14 = CONCAT31((int3)((uint)piVar9 >> 8),cVar6 + '\x13');
              pbVar11 = (byte *)(uVar14 + 0x19061224 + (uint)(0x1f9edfd < uVar14));
              uVar1 = (uint)(0xe4ffffdd < uVar14 + 0xfe061202 ||
                            CARRY4(uVar14 + 0x19061224,(uint)(0x1f9edfd < uVar14)));
              uVar14 = *unaff_ESI;
              uVar32 = *unaff_ESI;
              *unaff_ESI = (uint)(pbVar11 + uVar32 + uVar1);
              bVar5 = POPCOUNT(*unaff_ESI & 0xff);
              puVar38 = unaff_ESI;
              if ((SCARRY4(uVar14,(int)pbVar11) != SCARRY4((int)(pbVar11 + uVar32),uVar1)) ==
                  (int)*unaff_ESI < 0) goto code_r0x00402af9;
              bVar5 = (byte)pbVar11;
              *pbVar11 = *pbVar11 + bVar5;
              iVar12 = CONCAT31((int3)((uint)pbVar11 >> 8),bVar5 + 2) + 0x9d7d +
                       (uint)(0xfd < bVar5);
              bVar5 = (byte)param_2 | (byte)*param_2;
              uVar14 = *unaff_EBX;
              *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar25;
              pcVar13 = (char *)(CONCAT31((int3)((uint)iVar12 >> 8),(char)iVar12 + '\x12') +
                                 0x228b26 + *puVar40 + (uint)CARRY1((byte)uVar14,bVar25));
              cVar6 = bVar5 + (byte)*puVar16;
              param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar6);
              if (SCARRY1(bVar5,(byte)*puVar16) == cVar6 < '\0') break;
              *pcVar13 = *pcVar13 + (char)pcVar13;
              cVar6 = (char)pcVar13 + '\x02';
              pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar6);
              bVar5 = POPCOUNT(cVar6);
              uVar41 = in_ES;
code_r0x00402b7a:
              puVar38 = unaff_ESI;
              if ((bVar5 & 1) != 0) break;
              while( true ) {
                cVar6 = (char)pcVar13;
                *pcVar13 = *pcVar13 + cVar6;
                uVar21 = (undefined3)((uint)pcVar13 >> 8);
                pcVar13 = (char *)CONCAT31(uVar21,cVar6 + '\x13');
                *(byte *)puVar16 = (byte)*puVar16 | (byte)param_2;
                *(byte *)puVar40 = (byte)*puVar40 | (byte)param_2;
                *param_2 = (uint)(pcVar13 + *param_2);
                uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
                uVar22 = SUB41(unaff_EBX,0);
                cVar34 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
                unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar34,uVar22));
                *pcVar13 = *pcVar13 + cVar6 + '\x13';
                piVar9 = (int *)CONCAT31(uVar21,cVar6 + -0x7a);
                uVar14 = *param_2;
                *(byte *)param_2 = (byte)*param_2 + (char)puVar16;
                uVar42 = in_CS;
                if (SCARRY1((byte)uVar14,(char)puVar16) == (char)(byte)*param_2 < '\0') break;
                *(char *)piVar9 = (char)*piVar9 + cVar6 + -0x7a;
                cVar7 = cVar6 + -0x78;
                piVar9 = (int *)CONCAT31(uVar21,cVar7);
                uVar42 = uVar41;
                if ((POPCOUNT(cVar7) & 1U) != 0) break;
                *(char *)piVar9 = (char)*piVar9 + cVar7;
                pcVar13 = (char *)CONCAT31(uVar21,cVar6 + -0x65);
                *puVar16 = *puVar16 | (uint)param_2;
                *puVar40 = *puVar40 | (uint)param_2;
                pbVar11 = (byte *)((int)puVar16 + -1);
                cVar34 = cVar34 + *(byte *)((int)unaff_EBX + -0x5e);
                unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar34,uVar22));
                *pcVar13 = *pcVar13 + cVar6 + -0x65;
                bVar5 = cVar6 + 10;
                puVar10 = (uint *)CONCAT31(uVar21,bVar5);
                bVar25 = (byte)pbVar11;
                *(byte *)param_2 = (byte)*param_2 + bVar25;
                unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
                out(*puVar38,(short)param_2);
                uVar14 = *param_2;
                *(byte *)param_2 = (byte)*param_2 + bVar25;
                uVar2 = (uint)CARRY1((byte)uVar14,bVar25);
                uVar14 = *param_2;
                uVar32 = *param_2;
                pbVar8 = pbVar11 + uVar32 + uVar2;
                uVar4 = *param_2;
                cRam130a0000 = cRam130a0000 - cVar34;
                uVar1 = *param_2;
                uVar37 = uVar37 | *puVar10;
                *(byte *)puVar10 = (char)*puVar10 + bVar5;
                puVar16 = (uint *)CONCAT22((short)((uint)pbVar8 >> 0x10),
                                           CONCAT11((byte)((uint)pbVar8 >> 8) | bRam7d170243,
                                                    (char)pbVar8 + (byte)uVar4 +
                                                    (CARRY4((uint)pbVar11,uVar14) ||
                                                    CARRY4((uint)(pbVar11 + uVar32),uVar2))));
                bVar44 = (in_SS & 0x400) != 0;
                in_AF = (in_SS & 0x10) != 0;
                *(byte *)puVar10 = (char)*puVar10 + bVar5;
                bVar43 = 0xfd < bVar5;
                pcVar13 = (char *)CONCAT31(uVar21,cVar6 + '\f');
                param_2 = (uint *)((uint)param_2 | uVar1);
code_r0x00402bd1:
                uVar14 = *unaff_EBX;
                uVar32 = *unaff_EBX;
                *unaff_EBX = (uint)((byte *)(uVar32 + (int)puVar16) + bVar43);
                bVar5 = POPCOUNT(*unaff_EBX & 0xff);
                uVar41 = in_SS;
                if ((SCARRY4(uVar14,(int)puVar16) !=
                    SCARRY4((int)(uVar32 + (int)puVar16),(uint)bVar43)) == (int)*unaff_EBX < 0)
                goto code_r0x00402b7a;
                cVar6 = (char)pcVar13;
                *pcVar13 = *pcVar13 + cVar6;
                pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar6 + '\x02');
                if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                  *pcVar13 = *pcVar13 + (char)pcVar13;
                  pcVar13 = (char *)(CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '\x12') |
                                    *param_2);
                  *(byte *)puVar40 = (byte)*puVar40 - (char)puVar16;
                  *pcVar13 = *pcVar13 + (char)pcVar13;
                  puVar38 = (uint *)((int)param_2 - *unaff_ESI);
                  bVar5 = (byte)unaff_EBX | (byte)((uint)puVar16 >> 8);
                  cVar6 = *pcVar13;
                  uVar21 = (undefined3)((uint)pcVar13 >> 8);
                  pcVar13 = (char *)CONCAT31(uVar21,cVar6);
                  *pcVar13 = *pcVar13 + cVar6;
                  pcVar33 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8
                                                                               ),bVar5) + -0x5b),
                                                      bVar5));
                  *pcVar13 = *pcVar13 + cVar6;
                  bVar43 = false;
                  pcVar13 = (char *)(CONCAT31(uVar21,cVar6 + '\x13') | *puVar38);
                  do {
                    bVar25 = (byte)puVar16;
                    bVar5 = bVar25 + (byte)unaff_ESI[(int)puVar40 * 2];
                    puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar5 + bVar43);
                    uVar14 = (uint)(CARRY1(bVar25,(byte)unaff_ESI[(int)puVar40 * 2]) ||
                                   CARRY1(bVar5,bVar43));
                    pcVar15 = pcVar13 + 0x1b000019 + uVar14;
                    piVar17 = (int *)((int)puVar40 * 2 + 0x40000a5);
                    *piVar17 = (int)((int)puVar16 +
                                    (uint)((char *)0xe4ffffe6 < pcVar13 ||
                                          CARRY4((uint)(pcVar13 + 0x1b000019),uVar14)) + *piVar17);
                    puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                               (char)puVar38 + cRam00009d7d);
                    uVar21 = (undefined3)((uint)pcVar15 >> 8);
                    bVar5 = (char)pcVar15 + 0x12;
                    in_AF = 9 < (bVar5 & 0xf) | in_AF;
                    uVar14 = CONCAT31(uVar21,bVar5 + in_AF * -6) & 0xffffff0f;
                    pcVar13 = (char *)CONCAT22((short)(uVar14 >> 0x10),
                                               CONCAT11((char)((uint)pcVar15 >> 8) - in_AF,
                                                        (char)uVar14));
                    uVar14 = uVar37 | *(uint *)CONCAT31(uVar21,bVar5);
                    while( true ) {
                      *pcVar13 = *pcVar13 + (char)pcVar13;
                      puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                                 (byte)puVar38 | (byte)*puVar38);
                      puVar40 = (uint *)((uint)puVar40 | (uint)unaff_ESI);
                      uVar32 = (uint)pcVar33 | (uint)unaff_ESI;
                      uVar37 = uVar14 + 1;
                      uVar41 = (ushort)((uint)unaff_retaddr >> 0x10);
                      unaff_retaddr = (uint *)CONCAT22(uVar41,in_ES);
                      cVar34 = (char)(pcVar13 + 0x1b000019);
                      uVar21 = (undefined3)((uint)(pcVar13 + 0x1b000019) >> 8);
                      cVar6 = cVar34 + -0x13;
                      pcVar13 = (char *)CONCAT31(uVar21,cVar6);
                      uVar30 = (undefined2)(uVar32 >> 0x10);
                      cVar7 = (char)(uVar32 >> 8) + *(char *)(uVar32 - 0x5e);
                      unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar7,(byte)uVar32));
                      *pcVar13 = *pcVar13 + cVar6;
                      pcVar13 = (char *)(CONCAT31(uVar21,cVar34 + '\x19') | *puVar38);
                      bVar5 = (byte)pcVar13;
                      if ((POPCOUNT((uint)pcVar13 & 0xff) & 1U) != 0) {
                        pbVar11 = (byte *)((int)puVar38 + (int)pcVar13);
                        bVar43 = CARRY1(*pbVar11,bVar5);
                        *pbVar11 = *pbVar11 + bVar5;
                        param_2 = puVar38;
                        goto code_r0x00402bd1;
                      }
                      *pcVar13 = *pcVar13 + bVar5;
                      uVar21 = (undefined3)((uint)pcVar13 >> 8);
                      pcVar33 = (char *)CONCAT31(uVar21,bVar5 + 0x6f);
                      param_2 = (uint *)((int)puVar38 + 1);
                      *pcVar33 = *pcVar33 + bVar5 + 0x6f;
                      bVar25 = (byte)uVar32 | (byte)((uint)pcVar13 >> 8);
                      pcVar13 = (char *)CONCAT31(uVar21,bVar5 + 0x5c);
                      cVar7 = cVar7 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar25) +
                                               -0x5f);
                      unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar7,bVar25));
                      *pcVar13 = *pcVar13 + bVar5 + 0x5c;
                      pcVar13 = (char *)(CONCAT31(uVar21,bVar5 + 0x88) | *param_2);
                      if ((POPCOUNT((uint)pcVar13 & 0xff) & 1U) != 0) {
                        *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)puVar16 >> 8);
                        unaff_retaddr = (uint *)((uint)uVar41 << 0x10);
                        goto code_r0x00402bdb;
                      }
                      *pcVar13 = *pcVar13 + (char)pcVar13;
                      uVar21 = (undefined3)((uint)pcVar13 >> 8);
                      cVar6 = (char)pcVar13 + 'o';
                      puVar38 = (uint *)((int)puVar38 + 2);
                      *(char *)CONCAT31(uVar21,cVar6) = *(char *)CONCAT31(uVar21,cVar6) + cVar6;
                      pcVar33 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                 bVar25 | (byte)((uint)pcVar13 >> 8));
                      pcVar13 = (char *)(CONCAT31(uVar21,cVar6) | 2);
                      *(char *)(uVar14 - 0x62) = *(char *)(uVar14 - 0x62) + '\x01';
                      bVar5 = (byte)pcVar13;
                      *pcVar13 = *pcVar13 + bVar5;
                      bVar43 = 0xfd < bVar5;
                      cVar6 = bVar5 + 2;
                      pcVar13 = (char *)CONCAT31(uVar21,cVar6);
                      in_DS = in_ES;
                      if (SCARRY1(bVar5,'\x02') != cVar6 < '\0') break;
                      *pcVar13 = *pcVar13 + cVar6;
                      bVar25 = bVar5 + 10;
                      pcVar13 = (char *)CONCAT31(uVar21,bVar25);
                      *pcVar13 = *pcVar13 - cVar7;
                      cVar34 = (char)puVar16;
                      *(byte *)puVar38 = *(byte *)puVar38 + cVar34;
                      *(char *)(uVar14 - 0x62) = *(char *)(uVar14 - 0x62) + '\x01';
                      *pcVar13 = *pcVar13 + bVar25;
                      cVar6 = bVar5 + 0xc;
                      pcVar13 = (char *)CONCAT31(uVar21,cVar6);
                      if (SCARRY1(bVar25,'\x02') == cVar6 < '\0') {
                        *pcVar13 = *pcVar13 + cVar6;
                        *(byte *)puVar16 = (byte)*puVar16 - cVar7;
                        *(byte *)puVar38 = *(byte *)puVar38 + cVar34;
                        cVar6 = (bVar5 + 0x13) - (byte)puVar16[0x13];
                        pcVar13 = (char *)CONCAT31(uVar21,cVar6);
                        *pcVar13 = *pcVar13 + cVar6;
                        pcVar15 = (char *)CONCAT31(uVar21,cVar6 + *pcVar13);
                        *pcVar15 = *pcVar15 + cVar6 + *pcVar13;
                        pcVar15 = pcVar15 + *puVar16;
                        *pcVar15 = *pcVar15 + (char)pcVar15;
                        LOCK();
                        pcVar13 = *(char **)pcVar15;
                        *(char **)pcVar15 = pcVar15;
                        UNLOCK();
                        *pcVar13 = *pcVar13 + (char)pcVar13;
                        pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)*puVar16);
                        *pbVar11 = *pbVar11 + (byte)*puVar16;
                        goto code_r0x00402c8d;
                      }
                      puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),
                                                 cVar34 + *pcVar33 + (0xfd < bVar25));
                      *(byte *)puVar40 = (byte)*puVar40 - cVar7;
                      uVar14 = uVar37;
                    }
                  } while( true );
                }
                unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(byte *)((int)unaff_EBX + -99),
                                                      (char)unaff_EBX));
                puVar38 = unaff_ESI;
              }
              *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
              param_2 = (uint *)((int)param_2 - *puVar38);
              unaff_ESI = puVar38;
              uVar41 = in_ES;
              in_ES = uVar42;
            }
            *(byte *)param_2 = (byte)*param_2 + (char)puVar16;
            pcVar13 = pcVar13 + -0x7d160243;
          }
          pcVar13 = (char *)CONCAT31(uVar21,uRam16040000);
          goto code_r0x00402ad2;
        }
        goto code_r0x00402a9b;
      }
code_r0x00402a8f:
      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)puVar16;
      bVar5 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      *puVar40 = (uint)((int)param_2 + (uint)CARRY1(bVar5,(byte)pbVar11) + *puVar40);
      puVar38 = unaff_ESI;
    }
  } while( true );
  do {
    while( true ) {
      cVar29 = (char)puVar16;
      cVar26 = (char)((uint)puVar16 >> 8) + (char)((uint)pbVar11 >> 8);
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(cVar26,cVar29));
      cVar6 = (char)pbVar11;
      *pbVar11 = *pbVar11 + cVar6;
      pcVar13 = (char *)((int)pbVar11 * 2 + 0x1a10000);
      cVar7 = (char)((uint)pcVar33 >> 8);
      *pcVar13 = *pcVar13 + cVar7;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      pbVar11[-0x47ffffff] = pbVar11[-0x47ffffff] + cVar7;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      bVar25 = (byte)puVar38;
      *(byte *)puVar40 = (byte)*puVar40 + bVar25;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + bVar25;
      *pbVar11 = *pbVar11 + cVar6;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar30 = (undefined2)((uint)pcVar33 >> 0x10);
      cVar7 = cVar7 + (byte)unaff_ESI[(int)pcVar33];
      pcVar13 = (char *)CONCAT22(uVar30,CONCAT11(cVar7,(char)pcVar33));
      pcVar13[(int)pbVar11] = pcVar13[(int)pbVar11] + cVar6;
      *(byte *)puVar38 = *(byte *)puVar38 - cVar7;
      *(byte *)puVar38 = *(byte *)puVar38 + cVar29;
      uVar21 = (undefined3)((uint)pbVar11 >> 8);
      bVar5 = cVar6 - *pbVar11;
      *pcVar13 = *pcVar13 + bVar25;
      *(byte *)puVar38 = *(byte *)puVar38 ^ bVar5;
      *(byte *)puVar38 = *(byte *)puVar38 + bVar5;
      *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
      uVar32 = *puVar16;
      *(byte *)puVar16 = (byte)*puVar16 + bVar25;
      cVar34 = bVar5 + *(char *)CONCAT31(uVar21,bVar5) + CARRY1((byte)uVar32,bVar25);
      pcVar33 = (char *)CONCAT22(uVar30,CONCAT11(cVar7 + *(char *)(uVar14 - 0x60),(char)pcVar33));
      *(char *)CONCAT31(uVar21,cVar34) = *(char *)CONCAT31(uVar21,cVar34) + cVar34;
      cVar7 = cVar34 + '\x12';
      pbVar11 = (byte *)CONCAT31(uVar21,cVar7);
      cVar6 = *pcVar33;
      *pcVar33 = *pcVar33 + cVar7;
      if (SCARRY1(cVar6,cVar7) != *pcVar33 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar11;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *(byte *)puVar38 = *(byte *)puVar38 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
    }
    *pbVar11 = *pbVar11 + cVar7;
    pbVar11 = (byte *)CONCAT31(uVar21,cVar34 + '$');
    *pbVar11 = *pbVar11 + cVar26;
    bVar5 = *(byte *)puVar38;
    *(byte *)puVar38 = *(byte *)puVar38 + cVar29;
    uVar42 = in_ES;
    uVar41 = param_3;
  } while (SCARRY1(bVar5,cVar29) == (char)*(byte *)puVar38 < '\0');
  do {
    cVar6 = (char)pbVar11;
    *pbVar11 = *pbVar11 + cVar6;
    uVar21 = (undefined3)((uint)pbVar11 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar38;
    bVar25 = cVar6 + 0x24;
    cVar7 = (char)((uint)pcVar33 >> 8);
    pcVar33[-0x62] = pcVar33[-0x62] + cVar7;
    *(char *)CONCAT31(uVar21,bVar25) = *(char *)CONCAT31(uVar21,bVar25) + bVar25;
    bVar5 = cVar6 + 0x2fU + (byte)*puVar16;
    cVar34 = bVar5 + (0xf4 < bVar25);
    cVar6 = cVar34 + *(char *)CONCAT31(uVar21,cVar34) +
            (CARRY1(cVar6 + 0x2fU,(byte)*puVar16) || CARRY1(bVar5,0xf4 < bVar25));
    pcVar13 = (char *)CONCAT31(uVar21,cVar6);
    *pcVar13 = *pcVar13 - (char)puVar38;
    *pcVar13 = *pcVar13 + cVar6;
    pcVar15 = (char *)((int)puVar38 - *puVar38);
    *(byte *)(unaff_ESI + (int)pcVar33) = (byte)unaff_ESI[(int)pcVar33] + cVar7;
    pcVar13[uVar37] = pcVar13[uVar37] + cVar6;
    *pcVar15 = *pcVar15 + (char)puVar16;
    pcVar13 = (char *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                               CONCAT11((char)((uint)pbVar11 >> 8) - *pcVar15,cVar6));
    uVar14 = *puVar40;
    *pcVar13 = *pcVar13 - (char)((uint)pcVar15 >> 8);
    *pcVar13 = *pcVar13 + cVar6;
    uVar30 = (undefined2)((uint)unaff_retaddr >> 0x10);
    unaff_retaddr = (uint *)CONCAT22(uVar30,uVar42);
    pbVar8 = (byte *)CONCAT22((short)((uint)pcVar33 >> 0x10),
                              CONCAT11(cVar7 - (byte)*unaff_ESI,(char)pcVar33));
    uVar37 = uVar37 + *(int *)(pbVar8 + (int)puVar16);
    puVar10 = (uint *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + (byte)uVar14);
    while( true ) {
      puVar38 = puVar10;
      uVar36 = (undefined2)((uint)pbVar8 >> 0x10);
      bVar35 = (char)((uint)pbVar8 >> 8) + pbVar8[0x18];
      *pcVar13 = *pcVar13 + (char)pcVar13;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + 'o');
      cVar6 = (char)puVar16;
      *(byte *)puVar38 = (byte)*puVar38 + cVar6;
      uVar14 = *unaff_ESI;
      bVar24 = (byte)((uint)puVar16 >> 8);
      bVar5 = *pbVar11;
      pbVar11 = pbVar11 + (uint)CARRY1(bVar24,*pbVar11) + *(int *)pbVar11;
      *(byte *)puVar38 = (byte)*puVar38 + cVar6;
      cVar34 = ((char)pbVar8 - (byte)uVar14) - (byte)*unaff_ESI;
      bVar25 = *(byte *)((int)puVar40 + 0x1a);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                 CONCAT11(bVar24 + bVar5 + bVar25 | (byte)*puVar38,cVar6));
      pbVar11 = pbVar11 + *puVar38;
      if ((POPCOUNT((uint)pbVar11 & 0xff) & 1U) != 0) break;
      *pbVar11 = *pbVar11 + (char)pbVar11;
      bVar5 = (char)pbVar11 + 0x6f;
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
      pcVar33 = (char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar35,(char)pbVar8)) >> 8),cVar34
                                 ) + -1);
      *pcVar13 = *pcVar13 + bVar5;
      *pcVar13 = *pcVar13 + bVar5;
      *pcVar33 = *pcVar33 + (byte)puVar38;
      *(byte *)((int)pcVar13 * 2) = *(byte *)((int)pcVar13 * 2) ^ bVar5;
      uVar3 = *(undefined6 *)pcVar13;
      uVar42 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar13 = (char *)uVar3;
      *pcVar13 = *pcVar13 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar13 = (char *)((uint)pcVar13 | 0x73110008);
      bVar35 = (byte)((uint)pcVar33 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 - bVar35;
      *(byte *)puVar38 = (byte)*puVar38 + cVar6;
      puVar10 = unaff_ESI + (uint)bVar44 * -2 + 1;
      out(*unaff_ESI,(short)puVar38);
      *pcVar13 = *pcVar13;
      cVar6 = (char)pcVar13;
      *pcVar13 = *pcVar13 + cVar6;
      bVar5 = *(byte *)(uVar37 - 0x5a);
      uVar36 = (undefined2)((uint)pcVar33 >> 0x10);
      cVar34 = (char)pcVar33;
      *pcVar13 = *pcVar13 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar14 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      puVar16 = (uint *)(uVar14 | 0x73110000);
      unaff_ESI = puVar10 + (uint)bVar44 * -2 + 1;
      out(*puVar10,(short)puVar38);
      *(byte *)puVar16 = (byte)*puVar16;
      bVar24 = (byte)puVar38 | (byte)*puVar40;
      puVar10 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar24);
      *(byte *)puVar16 = (byte)*puVar16 + cVar6;
      pcVar13 = (char *)(uVar14 | 0x7b1f1609);
      bVar44 = (uVar41 & 0x400) != 0;
      *(uint *)((int)puVar40 + -0x7d) = *(uint *)((int)puVar40 + -0x7d) | uVar37;
      bVar25 = (byte)pcVar13;
      *pcVar13 = *pcVar13 + bVar25;
      bVar35 = bVar35 | bVar5 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar8 = (byte *)CONCAT22(uVar36,CONCAT11(bVar35,cVar34));
      *pcVar13 = *pcVar13 + bVar25;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      unaff_ESI[(int)puVar40 * 2] =
           (uint)((int)puVar10 + (uint)(0xd2 < bVar25) + unaff_ESI[(int)puVar40 * 2]);
      bVar5 = bVar25 + 0x2d ^ *(byte *)CONCAT31(uVar21,bVar25 + 0x2d);
      pcVar13 = (char *)CONCAT31(uVar21,bVar5);
      uVar14 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar5;
      uVar41 = uVar42;
      if (CARRY1((byte)uVar14,bVar5)) {
        *pcVar13 = *pcVar13 + bVar5;
        bVar5 = bVar5 | pcVar13[0x4000019];
        pcVar13 = (char *)CONCAT31(uVar21,bVar5);
        if ('\0' < (char)bVar5) {
          *pcVar13 = *pcVar13 + bVar5;
          piVar17 = (int *)CONCAT31(uVar21,bVar5 + 0x28);
          *piVar17 = (int)piVar17 + (uint)(0xd7 < bVar5) + *piVar17;
          bVar27 = (byte)((uint6)uVar3 >> 8);
          *pbVar8 = *pbVar8 + bVar27;
          uVar31 = CONCAT11((byte)((uint)puVar38 >> 8) | bVar35,bVar24);
          puVar10 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),uVar31);
          unaff_retaddr = (uint *)CONCAT22(uVar30,uVar42);
          bVar24 = in(uVar31);
          pbVar11 = (byte *)CONCAT31(uVar21,bVar24);
          bVar25 = *pbVar11;
          bVar43 = SCARRY1(*pbVar11,bVar24);
          *pbVar11 = *pbVar11 + bVar24;
          bVar5 = *pbVar11;
          puVar38 = unaff_ESI;
          in_SS = uVar42;
          if (!CARRY1(bVar25,bVar24)) goto code_r0x00402e19;
          *pbVar11 = *pbVar11 + bVar24;
          bVar27 = bVar27 | *pbVar11;
          puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar27,cVar6));
          pcVar13 = (char *)CONCAT31(uVar21,bVar24 + *pbVar11);
          *pbVar8 = *pbVar8 + bVar27;
        }
        uVar21 = (undefined3)((uint)pcVar13 >> 8);
        bVar25 = (byte)pcVar13 | (byte)*puVar10;
        pbVar11 = (byte *)CONCAT31(uVar21,bVar25);
        puVar38 = unaff_ESI + (uint)bVar44 * -2 + 1;
        out(*unaff_ESI,(short)puVar10);
        LOCK();
        bVar5 = *pbVar11;
        *pbVar11 = bVar25;
        UNLOCK();
        *(byte *)puVar10 = (byte)*puVar10 + (char)puVar16;
        piVar17 = (int *)(CONCAT31(uVar21,bVar5) + -0x1b7e07);
        *(byte *)puVar10 = (byte)*puVar10 + (char)puVar16;
        iVar12 = (int)puVar16 - *(int *)pbVar8;
        bVar5 = *(byte *)((int)puVar40 + -0x7a);
        uVar30 = (undefined2)((uint)iVar12 >> 0x10);
        *(char *)piVar17 = *(char *)piVar17 + (char)piVar17;
        bVar25 = (char)((uint)iVar12 >> 8) + bVar5 | *(byte *)((int)puVar40 + 0x17);
        *(char *)piVar17 = *(char *)piVar17 + (char)piVar17;
        uVar21 = (undefined3)(CONCAT22(uVar30,CONCAT11(bVar25,(byte)iVar12)) >> 8);
        bVar5 = (byte)iVar12 | *pbVar8;
        puVar16 = (uint *)CONCAT31(uVar21,bVar5);
        pbVar11 = (byte *)((int)piVar17 + *piVar17);
        puVar19 = puVar38;
        if (SCARRY4((int)piVar17,*piVar17)) goto code_r0x00402e0a;
        *(byte *)puVar16 = (byte)*puVar16 + bVar5;
        *(byte **)pbVar8 = (byte *)(*(int *)pbVar8 + (int)puVar10);
        piVar17 = (int *)CONCAT31(uVar21,bVar5 + 0x27);
        puVar16 = (uint *)CONCAT22(uVar30,CONCAT11(bVar25 + *(byte *)((int)puVar40 + -0x79),bVar5));
        *(byte *)piVar17 = (char)*piVar17 + bVar5 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar33 = (char *)CONCAT22(uVar36,CONCAT11(bVar35 | *(byte *)(uVar37 - 0x62),cVar34));
  } while( true );
code_r0x00402dff:
  pbVar11 = (byte *)CONCAT22((short)((uint)piVar17 >> 0x10),
                             CONCAT11((byte)((uint)piVar17 >> 8) |
                                      *(byte *)((int)puVar10 + 0x2170411),(byte)piVar17));
  puVar19 = puVar38 + (uint)bVar44 * -2 + 1;
  out(*puVar38,(short)puVar10);
  *pbVar11 = (byte)piVar17;
  *(byte *)puVar10 = (byte)*puVar10 + (char)puVar16;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar11;
  *pbVar11 = *pbVar11 - cVar34;
  *pbVar11 = *pbVar11 + (char)pbVar11;
  bVar43 = false;
  bVar5 = (byte)((uint)puVar16 >> 8) | bRam052b0603;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar5,(char)puVar16));
  puVar38 = puVar19;
code_r0x00402e19:
  if (bVar5 == 0 || bVar43 != (char)bVar5 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cRam89280411;
  piVar17 = (int *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                            CONCAT11((byte)((uint)pbVar11 >> 8) |
                                     *(byte *)((int)puVar10 + 0x7190411),cRam89280411));
  *(char *)piVar17 = (char)*piVar17 + cRam89280411;
  cVar6 = (char)puVar16;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                             CONCAT11((byte)((uint)puVar16 >> 8) | (byte)*puVar10,cVar6));
  puVar38 = (uint *)((int)puVar38 + *piVar17);
  pbVar11 = (byte *)((int)piVar17 + *piVar17);
  bVar25 = (byte)pbVar11;
  *pbVar11 = *pbVar11 + bVar25;
  *(byte *)puVar38 = (byte)*puVar38 + cVar6;
  bVar5 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar25;
  *(uint *)pbVar11 = *(int *)pbVar11 + uVar37 + (uint)CARRY1(bVar5,bVar25);
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),*pbVar11);
  *(byte *)puVar10 = (byte)*puVar10 + cVar6;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),(byte)puVar10 | (byte)*puVar10);
  pbVar11 = (byte *)((int)puVar19 + -0x43);
  *pbVar11 = *pbVar11 + (char)((uint)puVar10 >> 8);
  puVar10 = puVar19;
  puVar19 = puVar40;
  uVar41 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar40 = puVar19;
  in_SS = in_ES;
  if (SCARRY4((int)piVar17,*piVar17)) goto code_r0x00402e6e;
  iVar12 = *(int *)((int)piVar17 + *piVar17);
  *(byte *)puVar10 = (byte)*puVar10 + (char)puVar16;
  piVar17 = (int *)(iVar12 + -0x8c6f);
  puVar10 = (uint *)CONCAT22((short)((uint)puVar10 >> 0x10),
                             CONCAT11((byte)((uint)puVar10 >> 8) | *(byte *)((int)puVar10 + -0x3f),
                                      (char)puVar10));
  pbVar18 = (byte *)((int)piVar17 + *piVar17);
  pbVar11 = pbVar18;
  puVar40 = unaff_retaddr;
  if (SCARRY4((int)piVar17,*piVar17)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar18 = *pbVar18 + (char)pbVar18;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                             CONCAT11((byte)((uint)puVar16 >> 8) | (byte)*puVar10,(char)puVar16));
  puVar19 = puVar38 + (uint)bVar44 * -2 + 1;
  out(*puVar38,(short)puVar10);
  puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),(char)puVar10 + (byte)*puVar40);
  puVar38 = puVar19 + (uint)bVar44 * -2 + 1;
  out(*puVar19,(short)puVar10);
  uVar41 = in_ES;
  in_SS = uVar42;
code_r0x00402e6e:
  in_ES = uVar41;
  uVar21 = (undefined3)((uint)puVar10 >> 8);
  cVar6 = (char)puVar10 + (byte)*puVar40;
  puVar19 = puVar38 + (uint)bVar44 * -2 + 1;
  out(*puVar38,(short)CONCAT31(uVar21,cVar6));
  puVar10 = (uint *)CONCAT31(uVar21,cVar6 + (byte)*puVar40);
  puVar38 = puVar19 + (uint)bVar44 * -2 + 1;
  out(*puVar19,(short)puVar10);
  pbVar11 = (byte *)0x0;
  puVar19 = puVar40;
code_r0x00402e81:
  puVar40 = puVar19;
  bVar25 = (char)pbVar11 - *pbVar11;
  iVar12 = CONCAT31((int3)((uint)pbVar11 >> 8),bVar25);
  *pbVar8 = *pbVar8 + (char)puVar10;
  pbVar18 = (byte *)(iVar12 * 2);
  *pbVar18 = *pbVar18 ^ bVar25;
  pbVar18 = (byte *)(int)(short)iVar12;
  *pbVar18 = *pbVar18 + bVar25;
  *(byte *)puVar40 = (byte)*puVar40 + (byte)puVar16;
  bVar5 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar25;
  *(byte **)(pbVar8 + -0x73) =
       (byte *)((int)puVar38 + (uint)CARRY1(bVar5,bVar25) + *(int *)(pbVar8 + -0x73));
  *pbVar18 = *pbVar18 + bVar25;
  bVar5 = (byte)puVar16 | (byte)*puVar10;
  puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar5);
  puVar19 = puVar38;
  if ((char)bVar5 < '\x01') goto code_r0x00402eb4;
  *pbVar18 = *pbVar18 + bVar25;
  pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar11 >> 8),bVar25 + 0x2d);
  puVar38[(int)puVar40 * 2] =
       (uint)((int)puVar10 + (uint)(0xd2 < bVar25) + puVar38[(int)puVar40 * 2]);
  uStack_1c = CONCAT22(uStack_1c._2_2_,uVar42);
  do {
    uVar14 = *puVar38;
    bVar5 = (byte)pbVar11;
    *(byte *)puVar38 = (byte)*puVar38 + bVar5;
    if (!CARRY1((byte)uVar14,bVar5)) break;
    *pbVar11 = *pbVar11 + bVar5;
    bVar5 = bVar5 | pbVar11[0x400001a];
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
    if ((char)bVar5 < '\x01') {
code_r0x00402ecc:
      *pbVar18 = *pbVar18 + (byte)pbVar18;
      uVar21 = (undefined3)((uint)pbVar18 >> 8);
      bVar5 = (byte)pbVar18 | pbVar18[0x400001b];
      puVar39 = (uint *)CONCAT31(uVar21,bVar5);
      if ((char)bVar5 < '\x01') {
        uVar14 = *puVar10;
        *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar16;
        *(char *)((int)puVar39 * 2) =
             *(char *)((int)puVar39 * 2) - CARRY1((byte)uVar14,(byte)puVar16);
        bVar43 = 0x81 < bVar5;
        bVar5 = bVar5 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar18 = *pbVar18 + bVar5;
      puVar19 = puVar38;
code_r0x00402eb4:
      uVar21 = (undefined3)((uint)pbVar18 >> 8);
      bVar5 = (char)pbVar18 + 0x6f;
      puVar39 = (uint *)CONCAT31(uVar21,bVar5);
      *puVar39 = uStack_1c;
      uVar14 = *puVar10;
      *(byte *)puVar10 = (byte)*puVar10 + (char)puVar16;
      uStack_1c = CONCAT22(uStack_1c._2_2_,uVar42);
      param_3 = uVar42;
      if ((byte)*puVar10 != 0 && SCARRY1((byte)uVar14,(char)puVar16) == (char)(byte)*puVar10 < '\0')
      {
        *(byte *)puVar39 = (char)*puVar39 + bVar5;
        bVar25 = (char)pbVar18 + 0x9c;
        pbVar18 = (byte *)CONCAT31(uVar21,bVar25);
        puVar19[(int)puVar40 * 2] =
             (uint)((int)puVar10 + (uint)(0xd2 < bVar5) + puVar19[(int)puVar40 * 2]);
        uStack_1c = CONCAT22(uStack_1c._2_2_,uVar42);
        uVar14 = *puVar19;
        *(byte *)puVar19 = (byte)*puVar19 + bVar25;
        puVar38 = puVar19;
        if (CARRY1((byte)uVar14,bVar25)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar38 = puVar19 + (uint)bVar44 * -2 + 1;
      out(*puVar19,(short)puVar10);
    }
    cVar6 = (char)puVar39;
    *(char *)puVar39 = (char)*puVar39 + cVar6;
    uVar21 = (undefined3)((uint)puVar39 >> 8);
    bVar5 = cVar6 + 0x6f;
    puVar19 = (uint *)CONCAT31(uVar21,bVar5);
    *puVar19 = uStack_1c;
    uVar14 = *puVar10;
    *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar16;
    uStack_1c = CONCAT22(uStack_1c._2_2_,uVar42);
    *(byte *)(puVar38 + 7) = ((byte)puVar38[7] - bVar35) - CARRY1((byte)uVar14,(byte)puVar16);
    *(byte *)puVar19 = (char)*puVar19 + bVar5;
    bVar25 = cVar6 + 0x9c;
    pcVar13 = (char *)CONCAT31(uVar21,bVar25);
    puVar38[(int)puVar40 * 2] =
         (uint)((int)puVar10 + (uint)(0xd2 < bVar5) + puVar38[(int)puVar40 * 2]);
    uVar14 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + bVar25;
    if (!CARRY1((byte)uVar14,bVar25)) goto code_r0x00402e7e;
    *pcVar13 = *pcVar13 + bVar25;
    bVar25 = bVar25 | pcVar13[0x400001c];
    pbVar11 = (byte *)CONCAT31(uVar21,bVar25);
    in_SS = uVar42;
    if ((char)bVar25 < '\x01') goto code_r0x00402f16;
    *pbVar11 = *pbVar11 + bVar25;
    puVar19 = (uint *)CONCAT31(uVar21,bVar25 + 0x6f);
    while( true ) {
      *puVar19 = uStack_1c;
      uVar14 = *puVar10;
      *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar16;
      *(uint *)((int)puVar38 + 0x1d) =
           (*(int *)((int)puVar38 + 0x1d) - (int)puVar40) - (uint)CARRY1((byte)uVar14,(byte)puVar16)
      ;
      bVar5 = (byte)puVar19;
      *(byte *)puVar19 = (char)*puVar19 + bVar5;
      bVar25 = bVar5 + 0x2d;
      pbVar11 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),bVar25);
      puVar38[(int)puVar40 * 2] =
           (uint)((int)puVar10 + (uint)(0xd2 < bVar5) + puVar38[(int)puVar40 * 2]);
      uStack_1c = CONCAT22((short)(uStack_1c >> 0x10),uVar42);
      uVar14 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + bVar25;
      if (!CARRY1((byte)uVar14,bVar25)) break;
      *pbVar11 = *pbVar11 + bVar25;
code_r0x00402f16:
      bVar5 = (byte)pbVar11 | pbVar11[0x400001d];
      puVar19 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
      uVar14 = uVar37;
      if ((char)bVar5 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        uVar37 = uVar14;
        *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
        uVar21 = (undefined3)((uint)puVar19 >> 8);
        cVar6 = (char)puVar19 + 'o';
        puVar39 = (uint *)CONCAT31(uVar21,cVar6);
        *puVar39 = uStack_1c;
        cVar7 = (char)puVar16;
        *(byte *)puVar10 = (byte)*puVar10 + cVar7;
        uStack_1c = CONCAT22(uStack_1c._2_2_,uVar42);
        bVar5 = (byte)((uint)puVar10 >> 8);
        bVar43 = bVar5 < (byte)*puVar38;
        puVar10 = (uint *)CONCAT22((short)((uint)puVar10 >> 0x10),
                                   CONCAT11(bVar5 - (byte)*puVar38,(char)puVar10));
        if (bVar43) break;
        bVar43 = CARRY4((uint)puVar39,*puVar39);
        puVar19 = (uint *)((int)puVar39 + *puVar39);
        if (!SCARRY4((int)puVar39,*puVar39)) {
          bVar43 = CARRY4(uVar37,*puVar19);
          uVar37 = uVar37 + *puVar19;
        }
        *puVar19 = (*puVar19 - (int)puVar19) - (uint)bVar43;
        *(byte *)puVar10 = (byte)*puVar10 + cVar7;
        puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                   CONCAT11((char)((uint)puVar16 >> 8) + (byte)*puVar10,
                                            cVar7 - (byte)*puVar10));
        *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
code_r0x00402f3b:
        cVar7 = (char)puVar10;
        *pbVar8 = *pbVar8 + cVar7;
        bVar5 = (byte)puVar19;
        *(byte *)((int)puVar19 * 2) = *(byte *)((int)puVar19 * 2) ^ bVar5;
        *(byte *)puVar19 = (byte)*puVar19 + bVar5;
        *(byte *)puVar19 = (byte)*puVar19 + cVar7;
        uVar14 = *puVar19;
        *(byte *)puVar19 = (byte)*puVar19 + bVar5;
        *puVar10 = (uint)((int)puVar19 + (uint)CARRY1((byte)uVar14,bVar5) + *puVar10);
        pcVar13 = (char *)((uint)puVar19 | *puVar40);
        uVar21 = (undefined3)((uint)pcVar13 >> 8);
        cVar6 = (char)pcVar13 + *pcVar13;
        pcVar13 = (char *)CONCAT31(uVar21,cVar6);
        *pcVar13 = *pcVar13 + cVar6;
        cVar6 = cVar6 + *pcVar13;
        piVar17 = (int *)CONCAT31(uVar21,cVar6);
        *(char *)piVar17 = (char)*piVar17 + cVar6;
        iVar12 = LocalDescriptorTableRegister();
        *piVar17 = iVar12;
        bVar5 = *pbVar8;
        bVar28 = (byte)((uint)puVar16 >> 8);
        *pbVar8 = *pbVar8 + bVar28;
        iVar12 = *piVar17;
        uVar30 = (undefined2)((uint)puVar16 >> 0x10);
        bVar27 = (byte)puVar16;
        *(byte *)puVar38 = (byte)*puVar38 + cVar6;
        puVar16 = puVar38 + (uint)bVar44 * -2 + 1;
        out(*puVar38,(short)puVar10);
        *(byte *)puVar16 = (byte)*puVar16 + cVar6;
        bVar25 = *pbVar8;
        *(byte *)puVar10 = (byte)*puVar10 - bVar35;
        *(byte *)puVar16 = (byte)*puVar16 + cVar6;
        puVar39 = puVar16 + (uint)bVar44 * -2 + 1;
        out(*puVar16,(short)puVar10);
        *(byte *)puVar39 = (byte)*puVar39 + cVar6;
        bVar24 = *pbVar8;
        *(uint *)((int)puVar10 + -0x23) = *(uint *)((int)puVar10 + -0x23) & (uint)puVar39;
        puVar20 = (ushort *)((int)piVar17 + *piVar17);
        if (!SCARRY4((int)piVar17,*piVar17)) {
          *puVar20 = param_3;
        }
        *(char *)puVar20 = (char)*puVar20 + (char)puVar20;
        uVar31 = CONCAT11((char)((uint)puVar10 >> 8) + *(byte *)((int)puVar10 + -0x15),cVar7);
        puVar10 = (uint *)CONCAT22((short)((uint)puVar10 >> 0x10),uVar31);
        puVar19 = (uint *)((int)puVar20 + *(int *)puVar20);
        if (!SCARRY4((int)puVar20,*(int *)puVar20)) {
          *(ushort *)puVar19 = param_3;
        }
        cVar6 = (char)puVar19;
        *(byte *)puVar19 = (byte)*puVar19 + cVar6;
        cVar29 = ((bVar28 - (char)iVar12) - CARRY1(bVar5,bVar28) | bVar25 | bVar24) + (byte)*puVar19
        ;
        puVar16 = (uint *)CONCAT22(uVar30,CONCAT11(cVar29,bVar27));
        uVar14 = *puVar10;
        *(byte *)puVar10 = (byte)*puVar10 + bVar27;
        if (CARRY1((byte)uVar14,bVar27)) {
          *(byte *)puVar19 = (byte)*puVar19 + cVar6;
          bVar5 = *(byte *)((int)puVar10 + 6);
          *(byte *)puVar10 = (byte)*puVar10 + bVar27;
          bVar25 = (cVar29 - (byte)*puVar39) + cRam14730307;
          *(byte *)puVar19 = (byte)*puVar19 + cVar6;
          bVar5 = bVar35 | bVar5 | *(byte *)((int)puVar10 + 0x2a);
          uVar37 = *puVar19;
          pbVar11 = (byte *)((int)puVar19 + (uint)CARRY1(bVar25,(byte)*puVar19) + *puVar19);
          *(byte *)puVar10 = (byte)*puVar10 + bVar27;
          cVar6 = cVar34 - (byte)*puVar39;
          cVar34 = bVar5 + *(char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar5,cVar34)) >> 8),
                                              cVar6) + 0x1e);
          *pbVar11 = *pbVar11 + (char)pbVar11;
          uVar21 = (undefined3)((uint)pbVar11 >> 8);
          bVar5 = (char)pbVar11 + 0x2aU & (byte)*puVar10;
          *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
          pcVar13 = (char *)CONCAT31(uVar21,bVar5 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar6)) + 0x1f);
          *pcVar13 = *pcVar13 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar10;
          *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
          pcVar13 = (char *)CONCAT31(uVar21,bVar5 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar6)) + 0x20);
          *pcVar13 = *pcVar13 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar10;
          *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
          pcVar13 = (char *)CONCAT31(uVar21,bVar5 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar6)) + 0x21);
          *pcVar13 = *pcVar13 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar10;
          *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
          pcVar13 = (char *)CONCAT31(uVar21,bVar5 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar6)) + 0x22);
          *pcVar13 = *pcVar13 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar10;
          *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
          pcVar13 = (char *)CONCAT31(uVar21,bVar5 + 0x2a);
          bVar25 = bVar25 + (byte)uVar37 + *pcVar13;
          uVar23 = CONCAT22(uVar30,CONCAT11(bVar25,bVar27));
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar6)) + 0x25);
          *pcVar13 = *pcVar13 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar10;
          *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
          pcVar13 = (char *)CONCAT31(uVar21,bVar5 + 0x2a);
          pcVar33 = (char *)CONCAT22(uVar36,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(
                                                  cVar34,cVar6)) + 0x26),cVar6));
          *pcVar13 = *pcVar13 + bVar5 + 0x2a;
          bVar5 = bVar5 + 0x54 & (byte)*puVar10;
          *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
          cVar6 = bVar5 + 0x2a;
          pcVar13 = (char *)CONCAT31(uVar21,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar13 = *pcVar13 + cVar6;
            pbVar11 = (byte *)(CONCAT31(uVar21,bVar5 + 0x4f) + -0x33282610);
            bVar5 = *pbVar11;
            bVar24 = (byte)pbVar11;
            *pbVar11 = *pbVar11 + bVar24;
            uVar21 = (undefined3)((uint)pbVar11 >> 8);
            if (!CARRY1(bVar5,bVar24)) {
              if (!SCARRY1(bVar24,'\0')) {
                *pbVar11 = *pbVar11 + bVar24;
                uVar23 = CONCAT22(uVar30,CONCAT11(bVar25 | (byte)*puVar10,bVar27));
                bVar24 = bVar24 & (byte)*puVar10;
                *(char *)CONCAT31(uVar21,bVar24) = *(char *)CONCAT31(uVar21,bVar24) + bVar24;
                pcVar13 = (char *)CONCAT31(uVar21,bVar24 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar13 = (char *)CONCAT31(uVar21,bVar24 + *pcVar33);
              if (SCARRY1(bVar24,*pcVar33) != (char)(bVar24 + *pcVar33) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar5 = bVar24 + *pcVar33;
            pbVar11 = (byte *)CONCAT31(uVar21,bVar5);
            if (SCARRY1(bVar24,*pcVar33) == (char)bVar5 < '\0') {
              pcVar13 = (char *)CONCAT22(uVar30,CONCAT11(bVar25 | (byte)*puVar10,bVar27));
              *pcVar33 = *pcVar33 + cVar7;
              *(byte *)puVar10 = (byte)*puVar10 ^ bVar5;
              *(char *)((int)pbVar11 * 2) = *(char *)((int)pbVar11 * 2) + bVar5;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar13 = *pcVar13 + (char)pcVar13;
            uVar21 = (undefined3)((uint)pcVar13 >> 8);
            bVar5 = (char)pcVar13 + 0x2aU & (byte)*puVar10;
            *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
            pcVar13 = (char *)CONCAT31(uVar21,bVar5 + 0x2a);
            *pcVar13 = *pcVar13 + bVar5 + 0x2a;
            pcVar13 = (char *)CONCAT31(uVar21,bVar5 + 0x54 & (byte)*puVar10);
code_r0x00403072:
            cVar6 = (char)pcVar13;
            *pcVar13 = *pcVar13 + cVar6;
            uVar21 = (undefined3)((uint)pcVar13 >> 8);
            pcVar13 = (char *)CONCAT31(uVar21,cVar6 + '*');
            *pcVar13 = *pcVar13 + cVar6 + '*';
            bVar5 = cVar6 + 0x54U & (byte)*puVar10;
            *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
            pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,in_ES);
            uVar23 = CONCAT22((short)((uint)uVar23 >> 0x10),
                              CONCAT11((char)((uint)uVar23 >> 8) +
                                       *(char *)CONCAT31(uVar21,bVar5 + 0x2a),(char)uVar23));
            *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar7;
            pcVar13 = pcStack_54;
code_r0x0040309a:
            cVar6 = (char)pcVar13;
            *pcVar13 = *pcVar13 + cVar6;
            pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,uVar42);
            *pcVar13 = *pcVar13 + cVar6;
            pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar6 + 0x2aU & (byte)*puVar10);
          }
          cVar6 = (char)pbVar11;
          *pbVar11 = *pbVar11 + cVar6;
          uVar21 = (undefined3)((uint)pbVar11 >> 8);
          cVar34 = cVar6 + '*';
          pcVar13 = (char *)CONCAT31(uVar21,cVar34);
          *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar7;
          *pcVar13 = *pcVar13 + cVar34;
          cVar29 = (char)pcStack_54 - (byte)*puVar39;
          pcVar33 = (char *)CONCAT22((short)((uint)pcStack_54 >> 0x10),
                                     CONCAT11((char)((uint)pcStack_54 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_54 >> 8),
                                                                 cVar29) + 0x34),cVar29));
          *pcVar13 = *pcVar13 + cVar34;
          bVar5 = cVar6 + 0x54U & (byte)*puVar10;
          *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
          pbVar11 = (byte *)CONCAT31(uVar21,bVar5 + 0x2a);
          bVar5 = (byte)((uint)uVar23 >> 8);
          pcVar13 = (char *)CONCAT22((short)((uint)uVar23 >> 0x10),
                                     CONCAT11(bVar5 + *pbVar11,(char)uVar23));
          pbVar11 = pbVar11 + (uint)CARRY1(bVar5,*pbVar11) + *(int *)pbVar11;
          *(byte *)puVar10 = (byte)*puVar10 + (char)uVar23;
          uVar21 = (undefined3)((uint)pbVar11 >> 8);
          cVar6 = (byte)pbVar11 - *pbVar11;
          piVar17 = (int *)CONCAT31(uVar21,cVar6);
          puVar39 = (uint *)((int)puVar39 + (uint)((byte)pbVar11 < *pbVar11) + *piVar17);
          cVar6 = cVar6 + (char)*piVar17;
          pbVar11 = (byte *)CONCAT31(uVar21,cVar6);
          *pbVar11 = *pbVar11 + cVar6;
code_r0x004030df:
          *pcVar13 = *pcVar13 + cVar7;
          bVar5 = *pbVar11;
          bVar25 = (byte)pbVar11;
          *pbVar11 = *pbVar11 + bVar25;
          *(byte **)(pcVar33 + -0x41) =
               (byte *)((int)puVar39 + (uint)CARRY1(bVar5,bVar25) + *(int *)(pcVar33 + -0x41));
          *pbVar11 = *pbVar11 + bVar25;
          uVar21 = (undefined3)((uint)pbVar11 >> 8);
          bVar25 = bVar25 | (byte)*puVar39;
          *(char *)CONCAT31(uVar21,bVar25) = *(char *)CONCAT31(uVar21,bVar25) + bVar25;
          pcVar13 = (char *)CONCAT31(uVar21,bVar25 + 0x7b);
          *pcVar13 = *pcVar13 + bVar25 + 0x7b;
          pbVar11 = (byte *)((int)puVar39 + CONCAT31(uVar21,bVar25 - 8) + -1);
          *pbVar11 = *pbVar11 + (bVar25 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar38 = puVar39 + (uint)bVar44 * -2 + 1;
        out(*puVar39,uVar31);
        uVar14 = uVar37 + 1;
        uStack_1c = uVar37;
      }
      bVar5 = cVar6 - bVar43;
      pbVar11 = (byte *)((int)puVar38 + (int)puVar40 * 2);
      bVar43 = CARRY1(*pbVar11,bVar5);
      *pbVar11 = *pbVar11 + bVar5;
code_r0x00402ef9:
      puVar19 = (uint *)CONCAT31(uVar21,bVar5 - bVar43);
      pbVar11 = (byte *)((int)puVar40 + uVar37 * 2);
      *pbVar11 = *pbVar11 + (bVar5 - bVar43);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar16 = (byte)*puVar16 + (char)puVar10;
  puVar19 = puVar10 + 0x2828000;
  bVar5 = (byte)puVar16;
  bVar43 = (byte)*puVar19 < bVar5;
  *(byte *)puVar19 = (byte)*puVar19 - bVar5;
  bVar5 = (byte)pbVar11 + *pbVar11;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5 + bVar43);
  puVar19 = puVar40;
  uVar41 = in_ES;
  if (CARRY1((byte)pbVar11,*pbVar11) || CARRY1(bVar5,bVar43)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar13 = *pcVar13 + bVar25;
  uVar41 = in_ES;
  in_SS = uVar42;
  goto code_r0x00402e6e;
}


