/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040288c
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(uint * param_1, uint * param_2)
 * Local Vars  : pcStackY_7c, puStackY_44, uStackY_28, puStack_8, puStack_4, uVar1, uVar2, uVar3, uVar4, uVar5, cVar6, bVar7, cVar8, cVar9, in_EAX, pbVar10, pcVar11, uVar12, uVar13, puVar14, pbVar15, piVar16, iVar17, pcVar18, piVar19, pbVar20, puVar21, puVar22, uVar23, extraout_ECX, extraout_ECX_00, param_1, uVar24, bVar25, param_2, cVar26, bVar27, bVar28, cVar29, uVar30, uVar31, uVar32, bVar33, uVar34, unaff_EBX, pcVar35, puVar36, bVar37, unaff_EBP, unaff_ESI, puVar38, puVar39, unaff_EDI, puVar40, in_ES, uVar41, in_CS, uVar42, in_SS, in_DS, in_GS_OFFSET, bVar43, in_AF, bVar44, bVar45, uVar46
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall _ctor(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  undefined3 uVar23;
  byte *in_EAX;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  int *piVar19;
  byte *pbVar20;
  uint *puVar21;
  ushort *puVar22;
  byte bVar25;
  undefined4 extraout_ECX;
  uint *extraout_ECX_00;
  char cVar26;
  byte bVar27;
  byte bVar28;
  char cVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined4 uVar24;
  byte bVar33;
  undefined2 uVar32;
  undefined1 uVar34;
  byte bVar37;
  undefined4 unaff_EBX;
  char *pcVar35;
  uint *puVar36;
  uint *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar38;
  uint *puVar39;
  uint *unaff_EDI;
  uint *puVar40;
  ushort in_ES;
  ushort uVar41;
  ushort in_CS;
  ushort uVar42;
  ushort in_SS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar43;
  byte in_AF;
  bool bVar44;
  bool bVar45;
  undefined8 uVar46;
  char *pcStackY_7c;
  uint *puStackY_44;
  undefined4 uStackY_28;
  uint *puStack_8;
  uint *puStack_4;
  
  bVar44 = false;
  do {
                    /* .NET CLR Managed Code */
    bVar7 = (byte)((uint)param_1 >> 8);
    bVar25 = bVar7 + *in_EAX;
    pbVar10 = in_EAX + (uint)CARRY1(bVar7,*in_EAX) + *(int *)in_EAX;
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    puVar36 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11(bVar25 + *pbVar10,(char)param_1));
    pbVar10 = pbVar10 + (uint)CARRY1(bVar25,*pbVar10) + *(int *)pbVar10;
code_r0x00402898:
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    bVar7 = (byte)param_2;
    uVar30 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar7);
    pbVar15 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
    pcVar35 = (char *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((char)((uint)puVar36 >> 8) + (byte)puVar36[-0x19],
                                        (char)puVar36));
    *pbVar10 = *pbVar10 + (char)pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + '\x03');
    puVar36 = unaff_ESI;
    do {
      unaff_ESI = puVar36 + 1;
      out(*puVar36,uVar30);
      pcVar35 = pcVar35 + -1;
      bVar25 = (byte)pbVar10;
      *pbVar10 = *pbVar10 + bVar25;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *pbVar15,(char)param_1));
      *pbVar10 = *pbVar10 + bVar25;
      *pcVar35 = *pcVar35 + bVar7;
      *(byte *)((int)pbVar10 * 2) = *(byte *)((int)pbVar10 * 2) ^ bVar25;
      *pbVar10 = *pbVar10 + bVar25;
      *pbVar10 = *pbVar10 | bVar25;
      bVar43 = CARRY1((byte)*param_1,bVar7);
      *(byte *)param_1 = (byte)*param_1 + bVar7;
      cVar6 = bVar25 + 10 + bVar43;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar6);
      puVar36 = unaff_ESI;
    } while (bVar25 < 0xf6 && !CARRY1(bVar25 + 10,bVar43));
    *pbVar10 = *pbVar10 + cVar6;
    puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
    pcVar11 = (char *)((uint)pbVar10 | *unaff_EDI);
    puVar36 = (uint *)CONCAT22((short)((uint)pcVar35 >> 0x10),
                               CONCAT11((char)((uint)pcVar35 >> 8) + (byte)unaff_EBP[-0x19],
                                        (char)pcVar35));
    *pcVar11 = *pcVar11 + (char)pcVar11;
    bVar7 = (char)pcVar11 + 7;
    uVar46 = CONCAT44(pbVar15,CONCAT31((int3)((uint)pcVar11 >> 8),bVar7));
code_r0x004028c8:
    param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
    pcVar35 = (char *)uVar46;
    uVar23 = (undefined3)((ulonglong)uVar46 >> 8);
    cVar6 = (char)uVar46;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *pcVar35 = *pcVar35 + cVar6;
      puVar14 = (uint *)CONCAT31(uVar23,cVar6 + '-');
      unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
      bVar43 = CARRY4(*puVar14,(uint)puVar14);
      uVar12 = *puVar14;
      *puVar14 = (uint)(*puVar14 + (int)puVar14);
      if (SCARRY4(uVar12,(int)puVar14)) {
        bVar43 = CARRY4(*puVar14,(uint)puVar14);
        bVar45 = SCARRY4(*puVar14,(int)puVar14);
        *puVar14 = (uint)(*puVar14 + (int)puVar14);
        bVar7 = POPCOUNT(*puVar14 & 0xff);
        if (bVar45) goto code_r0x004029be;
        goto code_r0x0040294c;
      }
      do {
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + bVar43);
        *(byte *)param_2 = (byte)*param_2 + (char)param_1;
        bVar43 = (POPCOUNT((byte)*param_2) & 1U) == 0;
        if (bVar43) goto code_r0x004028e2;
code_r0x004028db:
        if (!bVar43) goto code_r0x00402879;
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'r');
        puStack_8 = unaff_EBP;
code_r0x004028e2:
        uVar12 = *puVar14;
        *puVar14 = (uint)(*puVar14 + (int)puVar14);
        if (SCARRY4(uVar12,(int)puVar14)) {
          if (*puVar14 == 0 || SCARRY4(uVar12,(int)puVar14) != (int)*puVar14 < 0)
          goto code_r0x0040296d;
          goto code_r0x00402957;
        }
        puVar36 = (uint *)((int)puVar36 + -1);
        cVar6 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) |
                                            *(byte *)((int)param_1 + 0x16d7207),(char)param_1));
        cVar8 = (char)((uint)param_2 >> 8);
        *(byte *)((int)puVar14 + 0x7d) = *(byte *)((int)puVar14 + 0x7d) + cVar8;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        pbVar10 = (byte *)(CONCAT31((int3)((uint)puVar14 >> 8),cVar6 + '+') ^ *unaff_EDI);
        if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) goto code_r0x00402898;
        bVar7 = (byte)pbVar10;
        *pbVar10 = *pbVar10 + bVar7;
        puVar14 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7 + 0x72);
        if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
          uVar42 = in_CS;
          if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
        }
        else {
          *(byte *)((int)puVar14 + 0x6f) = *(byte *)((int)puVar14 + 0x6f) + cVar8;
        }
code_r0x00402905:
        uVar46 = CONCAT44(param_2,puVar14);
        puVar36 = (uint *)((int)puVar36 + -1);
        cVar6 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        bVar7 = (byte)((uint)param_1 >> 8) | (byte)*param_1;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar7,(char)param_1));
        in_ES = (ushort)puStack_8;
        if ((char)bVar7 < '\x01') {
          *(byte *)puVar14 = (byte)*puVar14 + cVar6;
          unaff_EDI = (uint *)((int)unaff_EDI - unaff_EBP[-0x19]);
          goto code_r0x00402929;
        }
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        puStack_8 = (uint *)0x40291c;
        uVar46 = func_0x7346291c();
        *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
        param_1 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                                   (byte)extraout_ECX | *(byte *)((ulonglong)uVar46 >> 0x20));
        puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
        while( true ) {
          pcVar35 = (char *)((int)uVar46 * 2);
          *pcVar35 = *pcVar35 - (char)param_1;
          uVar12 = *puVar36;
          cVar6 = (char)((uint)param_1 >> 8);
          *(byte *)puVar36 = (byte)*puVar36 + cVar6;
          if (SCARRY1((byte)uVar12,cVar6) == (char)(byte)*puVar36 < '\0') {
            pbVar10 = (byte *)((int)unaff_EDI + (int)uVar46);
            *pbVar10 = *pbVar10 + (char)uVar46;
            bVar7 = *pbVar10;
            goto code_r0x004028c8;
          }
code_r0x00402929:
          param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
          cVar6 = (char)uVar46;
          *(char *)uVar46 = *(char *)uVar46 + cVar6;
          uVar23 = (undefined3)((ulonglong)uVar46 >> 8);
          bVar7 = cVar6 + 7;
          puVar14 = (uint *)CONCAT31(uVar23,bVar7);
          bVar25 = (byte)((ulonglong)uVar46 >> 0x28);
          if ((POPCOUNT(bVar7) & 1U) != 0) break;
          *(byte *)puVar14 = (byte)*puVar14 + bVar7;
          pcVar35 = (char *)CONCAT31(uVar23,cVar6 + '3');
          uVar30 = (undefined2)((uint)puVar36 >> 0x10);
          uVar34 = SUB41(puVar36,0);
          bVar7 = (char)((uint)puVar36 >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar7);
          puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(bVar7,uVar34));
          *pcVar35 = *pcVar35 + cVar6 + '3';
          cVar8 = cVar6 + ':';
          puVar14 = (uint *)CONCAT31(uVar23,cVar8);
          if ((POPCOUNT(cVar8) & 1U) != 0) {
            bVar7 = bVar7 | *(byte *)((int)param_2 + 7);
            puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(bVar7,uVar34));
            bVar43 = (POPCOUNT(bVar7) & 1U) == 0;
            goto code_r0x004028db;
          }
          *(byte *)puVar14 = (byte)*puVar14 + cVar8;
          puVar14 = (uint *)(CONCAT31(uVar23,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
          pbVar10 = (byte *)((int)puVar14 + 0x72);
          bVar45 = SCARRY1(*pbVar10,bVar25);
          *pbVar10 = *pbVar10 + bVar25;
          bVar7 = POPCOUNT(*pbVar10);
code_r0x0040294c:
          if ((bVar7 & 1) == 0) {
            *(byte *)((int)puVar14 + 0x72) =
                 *(byte *)((int)puVar14 + 0x72) + (char)((uint)param_2 >> 8);
          }
          else if (bVar45) {
            unaff_EBP = (uint *)*unaff_EBP;
            cVar6 = cRamc9721806;
            goto code_r0x004029c4;
          }
          unaff_EBP = (uint *)0x7e700001;
          puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_SS);
code_r0x00402957:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          cVar6 = (char)puVar14 + '(';
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),cVar6);
          *(byte *)puVar14 = (byte)*puVar14 + cVar6;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar14,
                                              (char)param_1));
          *(byte *)puVar14 = (byte)*puVar14 + cVar6;
          param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                     CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar36[0x18],
                                              (char)param_2));
          unaff_ESI = puStack_8;
          unaff_EDI = puStack_4;
code_r0x00402966:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          bVar7 = (byte)((uint)puVar36 >> 8) | *(byte *)((int)param_2 + 7);
          puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar7,(char)puVar36));
          if ((POPCOUNT(bVar7) & 1U) != 0) {
            puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + -0x21);
            goto code_r0x00402905;
          }
code_r0x0040296d:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + '~');
code_r0x00402972:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          uVar42 = in_CS;
code_r0x00402974:
          bVar7 = 0xe9 < (byte)puVar14;
          in_CS = 0x2d0a;
          uVar46 = func_0x00006128(uVar42);
          puVar14 = (uint *)uVar46;
          piVar19 = (int *)((int)((ulonglong)uVar46 >> 0x20) + -0x3d);
          *piVar19 = (int)((int)unaff_ESI + (uint)bVar7 + *piVar19);
          bVar43 = SCARRY4(*puVar14,(int)puVar14);
          *puVar14 = *puVar14 + (int)puVar14;
          uVar12 = *puVar14;
          param_1 = extraout_ECX_00;
code_r0x00402982:
          bVar7 = POPCOUNT(uVar12 & 0xff);
          if (bVar43) {
            *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
            param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                       CONCAT11((byte)((uint)param_1 >> 8) |
                                                *(byte *)((ulonglong)uVar46 >> 0x20),(char)param_1))
            ;
            goto code_r0x00402991;
          }
code_r0x00402984:
          pcVar35 = (char *)((ulonglong)uVar46 >> 0x20);
          if ((bVar7 & 1) == 0) {
            *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
            *pcVar35 = *pcVar35 + (char)param_1;
            uVar46 = CONCAT44(CONCAT22((short)((ulonglong)uVar46 >> 0x30),
                                       CONCAT11((char)((ulonglong)uVar46 >> 0x28) - pcVar35[0x1f],
                                                (char)((ulonglong)uVar46 >> 0x20))),
                              CONCAT31((int3)((ulonglong)uVar46 >> 8),(char)uVar46 + '('));
code_r0x00402991:
            param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
            pbVar10 = (byte *)uVar46;
            bVar7 = (byte)uVar46;
            bVar43 = CARRY1(bVar7,*pbVar10);
            puVar14 = (uint *)CONCAT31((int3)((ulonglong)uVar46 >> 8),bVar7 + *pbVar10);
            cVar6 = bVar7 + *pbVar10;
            if (SCARRY1(bVar7,*pbVar10)) goto code_r0x004029c4;
code_r0x00402995:
            param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                       CONCAT11(((char)((uint)param_2 >> 8) -
                                                *(byte *)((int)param_2 + 0x6b)) - bVar43,
                                                (char)param_2));
            bVar7 = (byte)puVar14;
            bVar43 = CARRY1(bVar7,(byte)*puVar14);
            bVar45 = SCARRY1(bVar7,(byte)*puVar14);
            puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7 + (byte)*puVar14);
            do {
              if (!bVar45) {
                unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar43 + *puVar14);
                pbVar10 = (byte *)((int)puVar14 + *puVar14);
                bVar25 = (byte)pbVar10;
                *pbVar10 = *pbVar10 + bVar25;
                *(byte *)param_1 = (byte)*param_1 + (char)param_1;
                bVar7 = *pbVar10;
                *pbVar10 = *pbVar10 + bVar25;
                *unaff_EDI = (uint)((int)puVar36 + (uint)CARRY1(bVar7,bVar25) + *unaff_EDI);
                *(uint *)((int)unaff_EBP + 0x100002b) =
                     *(uint *)((int)unaff_EBP + 0x100002b) | (uint)param_1;
                uVar23 = (undefined3)((uint)pbVar10 >> 8);
                bVar25 = bVar25 | (byte)*unaff_ESI;
                puVar14 = (uint *)CONCAT31(uVar23,bVar25);
                puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_SS);
                uVar12 = *puVar14;
                uVar1 = *puVar14;
                *puVar14 = (uint)(*puVar14 + (int)puVar14);
                if (SCARRY4(uVar1,(int)puVar14)) {
                  *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)puVar36;
                  *(byte *)param_2 = (byte)*param_2 + (char)param_1;
                  *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)puVar36;
                }
                else {
                  in_SS = in_ES;
                  if (CARRY4(uVar12,(uint)puVar14)) goto code_r0x00402972;
                  bVar43 = CARRY1(bVar25,(byte)*puVar14);
                  bVar45 = SCARRY1(bVar25,(byte)*puVar14);
                  puVar14 = (uint *)CONCAT31(uVar23,bVar25 + (byte)*puVar14);
code_r0x004029be:
                  if (!bVar45) {
                    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_ES);
                    *(byte *)((int)param_2 + -0x37) =
                         (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar43;
                    cVar6 = cRamc9721806;
code_r0x004029c4:
                    cRamc9721806 = cVar6;
                    bVar7 = (byte)puVar14;
                    bVar43 = CARRY1(bVar7,(byte)*puVar14);
                    bVar45 = SCARRY1(bVar7,(byte)*puVar14);
                    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7 + (byte)*puVar14);
                    goto code_r0x004029c6;
                  }
                }
                bVar7 = (byte)param_1;
                bVar43 = CARRY1((byte)*param_2,bVar7);
                bVar45 = SCARRY1((byte)*param_2,bVar7);
                *(byte *)param_2 = (byte)*param_2 + bVar7;
                if (bVar43) goto code_r0x00402966;
              }
code_r0x004029c6:
              if (bVar45) {
                in_ES = (ushort)puStack_8;
                goto code_r0x00402966;
              }
              *(uint *)((int)param_2 + -0x23) =
                   (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar43;
              uVar12 = *puVar14;
              bVar7 = (byte)puVar14;
              uVar1 = *puVar14;
              uVar23 = (undefined3)((uint)puVar14 >> 8);
              bVar25 = bVar7 + (byte)*puVar14;
              puVar14 = (uint *)CONCAT31(uVar23,bVar25);
              if (SCARRY1(bVar7,(byte)uVar1)) goto code_r0x00402972;
              cVar6 = (char)param_2;
              bVar33 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                       CARRY1(bVar7,(byte)uVar12);
              param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar33,cVar6));
              puVar38 = (uint *)CONCAT31(uVar23,bVar25 + (byte)*puVar14);
              bVar7 = (byte)param_1;
              if (SCARRY1(bVar25,(byte)*puVar14)) {
                *(byte *)param_2 = (byte)*param_2 + bVar7;
                uVar46 = CONCAT44(param_2,(int)puVar38 + -0x1c37211);
                pcVar35 = (char *)((int)puVar38 + -0x1c3720a);
                *pcVar35 = *pcVar35 + bVar33;
                bVar7 = POPCOUNT(*pcVar35);
                goto code_r0x00402984;
              }
              unaff_ESI = (uint *)((int)unaff_ESI +
                                  (-(uint)CARRY1(bVar25,(byte)*puVar14) - *(int *)((int)param_2 + 5)
                                  ));
              bVar43 = SCARRY4((int)puVar38,*puVar38);
              uVar12 = (int)puVar38 + *puVar38;
              uVar46 = CONCAT44(param_2,uVar12);
              if (bVar43) goto code_r0x00402982;
              bVar25 = (byte)uVar12 + 0x8e;
              uVar13 = CONCAT31((int3)(uVar12 >> 8),bVar25 - CARRY4((uint)puVar38,*puVar38));
              *puVar36 = (*puVar36 - uVar13) -
                         (uint)((byte)uVar12 < 0x72 || bVar25 < CARRY4((uint)puVar38,*puVar38));
              pbVar10 = (byte *)(uVar13 - 0x5e);
              bVar25 = *pbVar10;
              *pbVar10 = *pbVar10 + bVar33;
              uVar12 = (uint)CARRY1(bVar25,bVar33);
              uVar1 = uVar13 - 0x32d72;
              puVar14 = (uint *)(uVar1 - uVar12);
              if (SBORROW4(uVar13,0x32d72) != SBORROW4(uVar1,uVar12)) goto code_r0x00402992;
              uVar42 = in_DS;
              if (uVar13 < 0x32d72 || uVar1 < uVar12) {
                *(byte *)unaff_EBP = (byte)*unaff_EBP - (char)((uint)puVar14 >> 8);
                *(byte *)param_2 = (byte)*param_2 + bVar7;
                puVar38 = unaff_ESI + 1;
                out(*unaff_ESI,CONCAT11(bVar33,cVar6));
                *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
                goto code_r0x00402a3e;
              }
              bVar43 = CARRY4((uint)puVar14,*puVar14);
              bVar45 = SCARRY4((int)puVar14,*puVar14);
              puVar14 = (uint *)((int)puVar14 + *puVar14);
              if (!bVar45) {
                uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_ES);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar43;
                bVar25 = (byte)puVar14;
                *(byte *)((int)param_2 + (int)unaff_EBP) =
                     *(byte *)((int)param_2 + (int)unaff_EBP) + bVar25;
                *(byte *)puVar36 = (byte)*puVar36 + cVar6;
                *(byte *)puVar36 = (byte)*puVar36 ^ bVar25;
                bVar27 = (byte)((uint)param_1 >> 8);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar27;
                *(byte *)puVar14 = (byte)*puVar14 + bVar25;
                pbVar15 = (byte *)CONCAT31((int3)((uint)puVar14 >> 8),bVar25 | (byte)*puVar14);
                *(byte *)param_1 = (byte)*param_1 + cVar6;
                bVar37 = *pbVar15;
                uVar30 = (undefined2)((uint)param_1 >> 0x10);
                param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar37,bVar7));
                pbVar15 = pbVar15 + (uint)CARRY1(bVar27,*pbVar15) + *(int *)pbVar15;
                *(byte *)param_2 = (byte)*param_2 + bVar7;
                unaff_EBP = (uint *)((int)unaff_EBP + iRam0355720b);
                pbVar10 = pbVar15 + 0x73;
                bVar25 = *pbVar10;
                *pbVar10 = *pbVar10 + bVar33;
                uVar23 = (undefined3)((uint)pbVar15 >> 8);
                bVar25 = (char)pbVar15 + CARRY1(bVar25,bVar33);
                pcVar35 = (char *)CONCAT31(uVar23,bVar25);
                *(byte *)param_2 = (byte)*param_2 + bVar7;
                if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
                  in_SS = in_ES;
                }
                puVar40 = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x17));
                *pcVar35 = *pcVar35 + bVar25;
                cVar6 = bVar25 + 2;
                puVar14 = (uint *)CONCAT31(uVar23,cVar6);
                if (bVar25 < 0xfe) {
                  *puVar14 = (uint)(*puVar14 + (int)puVar14);
                  goto code_r0x00402a8f;
                }
                *(byte *)puVar14 = (byte)*puVar14 + cVar6;
                uVar12 = *param_2;
                puVar38 = (uint *)((int)unaff_ESI + puVar36[0x19]);
                *(byte *)puVar14 = (byte)*puVar14 + cVar6;
                param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar37 | (byte)*puVar14,
                                                           bVar7 | (byte)uVar12));
                unaff_EDI = puVar40;
                goto code_r0x00402a36;
              }
            } while( true );
          }
        }
        *(byte *)((int)unaff_EBP + 0x13b720b) = *(byte *)((int)unaff_EBP + 0x13b720b) + bVar7;
        pbVar10 = (byte *)((int)puVar14 + 0x73);
        bVar43 = CARRY1(*pbVar10,bVar25);
        *pbVar10 = *pbVar10 + bVar25;
      } while( true );
    }
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    cVar8 = (char)puVar36 - (byte)*unaff_ESI;
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((char)((uint)puVar36 >> 8) +
                                        *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar8) + 0x12)
                                        ,cVar8));
    *pcVar35 = *pcVar35 + cVar6;
    bVar7 = cVar6 + 0x2aU & (byte)*param_2;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x12));
    *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
    puVar14 = (uint *)CONCAT31(uVar23,bVar7 + 0x2a);
    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_DS);
code_r0x00402879:
    cVar6 = (char)puVar36 - (byte)*unaff_ESI;
    unaff_EBX = CONCAT22((short)((uint)puVar36 >> 0x10),
                         CONCAT11((char)((uint)puVar36 >> 8) +
                                  *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar6) + 0x13),cVar6
                                 ));
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
    uVar23 = (undefined3)((uint)puVar14 >> 8);
    bVar7 = (char)puVar14 + 0x2aU & (byte)*param_2;
    pcVar35 = (char *)CONCAT31(uVar23,bVar7);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x13));
    *pcVar35 = *pcVar35 + bVar7;
    in_EAX = (byte *)CONCAT31(uVar23,bVar7 + 0x2a);
  } while( true );
code_r0x00402992:
  pbVar10 = (byte *)((int)puVar14 + 0x2a);
  bVar43 = CARRY1(*pbVar10,bVar33);
  *pbVar10 = *pbVar10 + bVar33;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar14) = *(byte *)(in_GS_OFFSET + (int)puVar14) + (char)puVar14;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                      (char)param_1));
  *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
code_r0x00402a3e:
  uVar23 = (undefined3)((uint)puVar14 >> 8);
  bVar7 = (byte)puVar14 | (byte)*puVar38;
  pcVar35 = (char *)CONCAT31(uVar23,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar35 = *pcVar35 + bVar7;
    cVar6 = bVar7 + 2;
    piVar19 = (int *)CONCAT31(uVar23,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar19 = (char)*piVar19 + cVar6;
      bVar7 = bVar7 + 0x71;
      pcVar11 = (char *)CONCAT31(uVar23,bVar7);
      pcVar35 = (char *)segment(uVar42,(short)puVar36 + (short)puVar38);
      *pcVar35 = *pcVar35 + bVar7;
      uVar12 = unaff_EDI[0x1a];
      *pcVar11 = *pcVar11 + bVar7;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | (byte)uVar12 |
                                          *(byte *)((int)unaff_EDI + 0x69),(char)param_1));
      *pcVar11 = *pcVar11 + bVar7;
      bVar7 = bVar7 | (byte)*param_2;
      pcVar35 = (char *)CONCAT31(uVar23,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
    out(*puVar38,(short)param_2);
  }
  else {
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((char)((uint)puVar36 >> 8) + (byte)puVar36[6],(char)puVar36)
                              );
code_r0x00402a5d:
    *pcVar35 = *pcVar35 + (char)pcVar35;
    piVar19 = (int *)CONCAT31((int3)((uint)pcVar35 >> 8),(char)pcVar35 + 'o');
    unaff_ESI = puVar38;
  }
code_r0x00402a61:
  pcVar35 = (char *)segment(uVar42,(short)puVar36 + (short)unaff_ESI);
  *pcVar35 = *pcVar35 + (char)piVar19;
  cVar6 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)unaff_EDI[0x1a],cVar6));
  *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
  uVar30 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
  piVar16 = (int *)((int)piVar19 + *piVar19);
  puVar38 = unaff_ESI;
  puVar40 = unaff_EDI;
  uVar41 = in_ES;
  if (SCARRY4((int)piVar19,*piVar19)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar6;
  puVar38 = unaff_ESI + (uint)bVar44 * -2 + 1;
  out(*unaff_ESI,uVar30);
code_r0x00402a75:
  bVar7 = (byte)((uint)param_1 >> 8) | (byte)*param_2;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar7,(char)param_1));
  piVar19 = (int *)(uint)(byte)*puVar36;
  *(byte *)puVar38 = (byte)*puVar38 - bVar7;
  puVar40 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
  out(*puVar38,(short)param_2);
  bVar7 = in((short)param_2);
  *(byte *)puVar40 = bVar7;
  *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
  iVar17 = *piVar19;
  cVar6 = in(1);
  puVar14 = (uint *)CONCAT31((int3)((uint)((int)piVar19 + *piVar19) >> 8),cVar6);
  *(char *)puVar14 = (char)*puVar14 + cVar6;
  puVar14 = (uint *)((uint)puVar14 | *puVar14);
  *(byte *)param_1 = (byte)*param_1 + (char)param_2;
  puVar38 = (uint *)((int)puVar38 + (((uint)bVar44 * -8 + 4) - iVar17));
  puVar40 = (uint *)((int)puVar40 + (uint)bVar44 * -2 + 1);
  in_SS = in_ES;
  while( true ) {
    bVar7 = (byte)puVar14 | (byte)*param_2;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7);
    unaff_EDI = puVar40;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar14 = (byte)*puVar14 + bVar7;
code_r0x00402a9b:
    uVar23 = (undefined3)((uint)puVar14 >> 8);
    cVar6 = (char)puVar14 + '\r';
    piVar16 = (int *)CONCAT31(uVar23,cVar6);
    *(uint *)((int)unaff_EBP + 2) = *(uint *)((int)unaff_EBP + 2) | (uint)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    *(byte *)(puVar38 + -0xc800000) = (byte)puVar38[-0xc800000] + (char)param_2;
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    cVar8 = (char)param_1;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar8;
      unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
      out(*puVar38,(short)param_2);
      piVar19 = (int *)((longlong)*piVar16 * 0x7b020a00);
      *(char *)piVar19 =
           (char)*piVar19 - ((longlong)(int)piVar19 != (longlong)*piVar16 * 0x7b020a00);
      pbVar10 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10;
      goto code_r0x00402a61;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    puVar14 = (uint *)CONCAT31(uVar23,(char)puVar14 + ':');
    unaff_ESI = (uint *)((uint)puVar38 | *(uint *)((int)param_2 + -0x79));
    iVar17 = (int)puVar14 + *puVar14;
    if (SCARRY4((int)puVar14,*puVar14)) {
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((char)((uint)puVar36 >> 8) + (byte)unaff_ESI[(int)puVar36]
                                          ,(char)puVar36));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar17;
      puVar40 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar23 = (undefined3)((uint)iVar17 >> 8);
    cVar6 = (char)iVar17 + CARRY4((uint)puVar14,*puVar14);
    piVar19 = (int *)CONCAT31(uVar23,cVar6);
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    bVar43 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar43) && (bVar43)) goto code_r0x00402a61;
    *(char *)piVar19 = (char)*piVar19 + cVar6;
    cVar9 = cVar6 + '(';
    pcVar35 = (char *)CONCAT31(uVar23,cVar9);
    puVar40 = unaff_EDI + (uint)bVar44 * -2 + 1;
    uVar12 = in((short)param_2);
    *unaff_EDI = uVar12;
    *pcVar35 = *pcVar35 + cVar9;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | bRama07b0222,cVar8));
    *pcVar35 = *pcVar35 + cVar9;
    pcVar35 = (char *)CONCAT31(uVar23,cVar6 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar38 = (uint *)((int)(unaff_ESI + (uint)bVar44 * -2 + 1) + (uint)bVar44 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar44 * -2 + 1],(short)param_2);
    bVar7 = (byte)pcVar35;
    *pcVar35 = *pcVar35 + bVar7;
    puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(byte)puVar36 | (byte)*puVar40);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar23 = (undefined3)((uint)pcVar35 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar6 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*param_2;
    piVar19 = (int *)CONCAT31(uVar23,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar19 = (char)*piVar19 + cVar6;
    piVar16 = (int *)CONCAT31(uVar23,cVar6 + '\x17');
    uVar41 = in_ES;
code_r0x00402ae3:
    out(*puVar38,(short)param_2);
    unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1 + (uint)bVar44 * -2 + 1;
    out(puVar38[(uint)bVar44 * -2 + 1],(short)param_2);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
code_r0x00402ae7:
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((byte)((uint)puVar36 >> 8) | (byte)unaff_EBP[-0x18],
                                        (char)puVar36));
    cVar6 = (char)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    uVar23 = (undefined3)((uint)piVar16 >> 8);
    bVar7 = cVar6 + 2;
    puVar14 = (uint *)CONCAT31(uVar23,bVar7);
    in_ES = uVar41;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar14 = (byte)*puVar14 + bVar7;
      cVar6 = cVar6 + '}';
      puVar14 = (uint *)CONCAT31(uVar23,cVar6);
      *(byte *)puVar14 = ((byte)*puVar14 - cVar6) - (0x84 < bVar7);
      pbVar10 = (byte *)((int)param_2 + (int)puVar14);
      *pbVar10 = *pbVar10 + cVar6;
      bVar7 = POPCOUNT(*pbVar10);
      puVar38 = unaff_ESI;
code_r0x00402af9:
      in_ES = uVar41;
      unaff_EDI = puVar40;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        bVar7 = (byte)param_1;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
        unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
        out(*puVar38,(short)param_2);
        uVar12 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'o') +
                 *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar12,bVar7);
        pcVar35 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '(');
        while( true ) {
          uVar12 = *param_2;
          bVar25 = (byte)param_1;
          *(byte *)param_2 = (byte)*param_2 + bVar25;
          pcVar35 = pcVar35 + (uint)CARRY1((byte)uVar12,bVar25) + iRam73280512;
          bVar7 = (byte)pcVar35;
          *pcVar35 = *pcVar35 + bVar7;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((byte)((uint)param_1 >> 8) | bRam7d160243,bVar25));
          bVar44 = ((uint)uStackY_28 & 0x400) != 0;
          in_AF = ((uint)uStackY_28 & 0x10) != 0;
          *pcVar35 = *pcVar35 + bVar7;
          uVar23 = (undefined3)((uint)pcVar35 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar23,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar6 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar23,cVar6) = *(char *)CONCAT31(uVar23,cVar6) + cVar6;
          iVar17 = CONCAT31(uVar23,bVar7 + 0x16);
code_r0x00402b33:
          piVar16 = (int *)(iVar17 + 0xe2802);
          *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)param_1 >> 8);
          uVar41 = in_ES;
          in_ES = in_SS;
          while( true ) {
            bVar25 = (byte)puVar36 | (byte)((uint)param_1 >> 8);
            puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),bVar25);
            *piVar16 = (int)(*piVar16 + (int)piVar16);
            cVar6 = (char)piVar16;
            *(byte *)param_2 = (byte)*param_2 + cVar6;
            if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar16 = (char)*piVar16 + cVar6;
            uVar12 = CONCAT31((int3)((uint)piVar16 >> 8),cVar6 + '\x13');
            puVar14 = (uint *)(uVar12 + 0x19061224 + (uint)(0x1f9edfd < uVar12));
            uVar13 = (uint)(0xe4ffffdd < uVar12 + 0xfe061202 ||
                           CARRY4(uVar12 + 0x19061224,(uint)(0x1f9edfd < uVar12)));
            uVar12 = *unaff_ESI;
            uVar1 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar1 + (int)puVar14) + uVar13);
            bVar7 = POPCOUNT(*unaff_ESI & 0xff);
            puVar38 = unaff_ESI;
            if ((SCARRY4(uVar12,(int)puVar14) != SCARRY4((int)(uVar1 + (int)puVar14),uVar13)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar14;
            *(byte *)puVar14 = (byte)*puVar14 + bVar7;
            iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)param_2 | (byte)*param_2;
            uVar12 = *puVar36;
            *(byte *)puVar36 = (byte)*puVar36 + bVar25;
            pcVar35 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x12') + 0x228b26
                               + *puVar40 + (uint)CARRY1((byte)uVar12,bVar25));
            cVar6 = bVar7 + (byte)*param_1;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar6);
            if (SCARRY1(bVar7,(byte)*param_1) == cVar6 < '\0') break;
            *pcVar35 = *pcVar35 + (char)pcVar35;
            cVar6 = (char)pcVar35 + '\x02';
            pcVar35 = (char *)CONCAT31((int3)((uint)pcVar35 >> 8),cVar6);
            bVar7 = POPCOUNT(cVar6);
            uVar41 = in_ES;
code_r0x00402b7a:
            puVar14 = unaff_ESI;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar35;
              *pcVar35 = *pcVar35 + cVar6;
              uVar23 = (undefined3)((uint)pcVar35 >> 8);
              pcVar35 = (char *)CONCAT31(uVar23,cVar6 + '\x13');
              *(byte *)param_1 = (byte)*param_1 | (byte)param_2;
              *(byte *)puVar40 = (byte)*puVar40 | (byte)param_2;
              *param_2 = (uint)(pcVar35 + *param_2);
              uVar30 = (undefined2)((uint)puVar36 >> 0x10);
              uVar34 = SUB41(puVar36,0);
              cVar8 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + -0x5f);
              puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar34));
              *pcVar35 = *pcVar35 + cVar6 + '\x13';
              piVar16 = (int *)CONCAT31(uVar23,cVar6 + -0x7a);
              uVar12 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)param_1;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar12,(char)param_1) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar16 = (char)*piVar16 + cVar6 + -0x7a;
              cVar9 = cVar6 + -0x78;
              piVar16 = (int *)CONCAT31(uVar23,cVar9);
              uVar4 = uVar41;
              if ((POPCOUNT(cVar9) & 1U) != 0) break;
              *(char *)piVar16 = (char)*piVar16 + cVar9;
              pcVar35 = (char *)CONCAT31(uVar23,cVar6 + -0x65);
              *param_1 = *param_1 | (uint)param_2;
              *puVar40 = *puVar40 | (uint)param_2;
              pbVar10 = (byte *)((int)param_1 + -1);
              cVar8 = cVar8 + *(byte *)((int)puVar36 + -0x5e);
              puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar34));
              *pcVar35 = *pcVar35 + cVar6 + -0x65;
              bVar7 = cVar6 + 10;
              puVar38 = (uint *)CONCAT31(uVar23,bVar7);
              bVar25 = (byte)pbVar10;
              *(byte *)param_2 = (byte)*param_2 + bVar25;
              unaff_ESI = puVar14 + (uint)bVar44 * -2 + 1;
              out(*puVar14,(short)param_2);
              uVar12 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar25;
              uVar2 = (uint)CARRY1((byte)uVar12,bVar25);
              uVar12 = *param_2;
              uVar1 = *param_2;
              pbVar15 = pbVar10 + uVar1 + uVar2;
              uVar5 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar8;
              uVar13 = *param_2;
              unaff_EBP = (uint *)((uint)unaff_EBP | *puVar38);
              *(byte *)puVar38 = (char)*puVar38 + bVar7;
              param_1 = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar15 >> 8) | bRam7d170243,
                                                  (char)pbVar15 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar10,uVar12) ||
                                                  CARRY4((uint)(pbVar10 + uVar1),uVar2))));
              bVar44 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar38 = (char)*puVar38 + bVar7;
              bVar43 = 0xfd < bVar7;
              pcVar35 = (char *)CONCAT31(uVar23,cVar6 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar13);
code_r0x00402bd1:
              uVar12 = *puVar36;
              uVar1 = *puVar36;
              *puVar36 = (uint)((byte *)(uVar1 + (int)param_1) + bVar43);
              bVar7 = POPCOUNT(*puVar36 & 0xff);
              uVar41 = in_SS;
              if ((SCARRY4(uVar12,(int)param_1) != SCARRY4((int)(uVar1 + (int)param_1),(uint)bVar43)
                  ) == (int)*puVar36 < 0) goto code_r0x00402b7a;
              cVar6 = (char)pcVar35;
              *pcVar35 = *pcVar35 + cVar6;
              pcVar35 = (char *)CONCAT31((int3)((uint)pcVar35 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar35 = *pcVar35 + (char)pcVar35;
                pcVar35 = (char *)(CONCAT31((int3)((uint)pcVar35 >> 8),(char)pcVar35 + '\x12') |
                                  *param_2);
                *(byte *)puVar40 = (byte)*puVar40 - (char)param_1;
                *pcVar35 = *pcVar35 + (char)pcVar35;
                puVar14 = (uint *)((int)param_2 - *unaff_ESI);
                bVar7 = (byte)puVar36 | (byte)((uint)param_1 >> 8);
                cVar6 = *pcVar35;
                uVar23 = (undefined3)((uint)pcVar35 >> 8);
                pcVar35 = (char *)CONCAT31(uVar23,cVar6);
                *pcVar35 = *pcVar35 + cVar6;
                pcVar11 = (char *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                           CONCAT11((char)((uint)puVar36 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar35 = *pcVar35 + cVar6;
                bVar43 = false;
                pcVar35 = (char *)(CONCAT31(uVar23,cVar6 + '\x13') | *puVar14);
                do {
                  bVar25 = (byte)param_1;
                  bVar7 = bVar25 + (byte)unaff_ESI[(int)puVar40 * 2];
                  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar7 + bVar43);
                  uVar12 = (uint)(CARRY1(bVar25,(byte)unaff_ESI[(int)puVar40 * 2]) ||
                                 CARRY1(bVar7,bVar43));
                  pcVar18 = pcVar35 + 0x1b000019 + uVar12;
                  piVar19 = (int *)((int)puVar40 * 2 + 0x40000a5);
                  *piVar19 = (int)((int)param_1 +
                                  (uint)((char *)0xe4ffffe6 < pcVar35 ||
                                        CARRY4((uint)(pcVar35 + 0x1b000019),uVar12)) + *piVar19);
                  puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + cRam00009d7d
                                            );
                  uVar23 = (undefined3)((uint)pcVar18 >> 8);
                  bVar7 = (char)pcVar18 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar12 = CONCAT31(uVar23,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar35 = (char *)CONCAT22((short)(uVar12 >> 0x10),
                                             CONCAT11((char)((uint)pcVar18 >> 8) - in_AF,
                                                      (char)uVar12));
                  puVar38 = (uint *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar23,bVar7));
                  while( true ) {
                    *pcVar35 = *pcVar35 + (char)pcVar35;
                    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),
                                               (byte)puVar14 | (byte)*puVar14);
                    puVar40 = (uint *)((uint)puVar40 | (uint)unaff_ESI);
                    uVar12 = (uint)pcVar11 | (uint)unaff_ESI;
                    unaff_EBP = (uint *)((int)puVar38 + 1);
                    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_ES);
                    cVar8 = (char)(pcVar35 + 0x1b000019);
                    uVar23 = (undefined3)((uint)(pcVar35 + 0x1b000019) >> 8);
                    cVar6 = cVar8 + -0x13;
                    pcVar35 = (char *)CONCAT31(uVar23,cVar6);
                    uVar30 = (undefined2)(uVar12 >> 0x10);
                    cVar9 = (char)(uVar12 >> 8) + *(char *)(uVar12 - 0x5e);
                    puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar9,(byte)uVar12));
                    *pcVar35 = *pcVar35 + cVar6;
                    pcVar35 = (char *)(CONCAT31(uVar23,cVar8 + '\x19') | *puVar14);
                    bVar7 = (byte)pcVar35;
                    if ((POPCOUNT((uint)pcVar35 & 0xff) & 1U) != 0) {
                      pbVar10 = (byte *)((int)puVar14 + (int)pcVar35);
                      bVar43 = CARRY1(*pbVar10,bVar7);
                      *pbVar10 = *pbVar10 + bVar7;
                      param_2 = puVar14;
                      goto code_r0x00402bd1;
                    }
                    *pcVar35 = *pcVar35 + bVar7;
                    uVar23 = (undefined3)((uint)pcVar35 >> 8);
                    pcVar11 = (char *)CONCAT31(uVar23,bVar7 + 0x6f);
                    param_2 = (uint *)((int)puVar14 + 1);
                    *pcVar11 = *pcVar11 + bVar7 + 0x6f;
                    bVar25 = (byte)uVar12 | (byte)((uint)pcVar35 >> 8);
                    pcVar35 = (char *)CONCAT31(uVar23,bVar7 + 0x5c);
                    cVar9 = cVar9 + *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),bVar25) + -0x5f);
                    puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar9,bVar25));
                    *pcVar35 = *pcVar35 + bVar7 + 0x5c;
                    pcVar35 = (char *)(CONCAT31(uVar23,bVar7 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar35 & 0xff) & 1U) != 0) {
                      *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)param_1 >> 8);
                      uStackY_28 = (uint *)((uint)uStackY_28._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar35 = *pcVar35 + (char)pcVar35;
                    uVar23 = (undefined3)((uint)pcVar35 >> 8);
                    cVar6 = (char)pcVar35 + 'o';
                    puVar14 = (uint *)((int)puVar14 + 2);
                    *(char *)CONCAT31(uVar23,cVar6) = *(char *)CONCAT31(uVar23,cVar6) + cVar6;
                    pcVar11 = (char *)CONCAT31((int3)((uint)puVar36 >> 8),
                                               bVar25 | (byte)((uint)pcVar35 >> 8));
                    pcVar35 = (char *)(CONCAT31(uVar23,cVar6) | 2);
                    *(byte *)((int)puVar38 + -0x62) = *(byte *)((int)puVar38 + -0x62) + 1;
                    bVar7 = (byte)pcVar35;
                    *pcVar35 = *pcVar35 + bVar7;
                    bVar43 = 0xfd < bVar7;
                    cVar6 = bVar7 + 2;
                    pcVar35 = (char *)CONCAT31(uVar23,cVar6);
                    uVar42 = in_ES;
                    if (SCARRY1(bVar7,'\x02') != cVar6 < '\0') break;
                    *pcVar35 = *pcVar35 + cVar6;
                    bVar25 = bVar7 + 10;
                    pcVar35 = (char *)CONCAT31(uVar23,bVar25);
                    *pcVar35 = *pcVar35 - cVar9;
                    cVar8 = (char)param_1;
                    *(byte *)puVar14 = *(byte *)puVar14 + cVar8;
                    *(byte *)((int)puVar38 + -0x62) = *(byte *)((int)puVar38 + -0x62) + 1;
                    *pcVar35 = *pcVar35 + bVar25;
                    cVar6 = bVar7 + 0xc;
                    pcVar35 = (char *)CONCAT31(uVar23,cVar6);
                    if (SCARRY1(bVar25,'\x02') == cVar6 < '\0') {
                      *pcVar35 = *pcVar35 + cVar6;
                      *(byte *)param_1 = (byte)*param_1 - cVar9;
                      *(byte *)puVar14 = *(byte *)puVar14 + cVar8;
                      cVar6 = (bVar7 + 0x13) - (byte)param_1[0x13];
                      pcVar35 = (char *)CONCAT31(uVar23,cVar6);
                      *pcVar35 = *pcVar35 + cVar6;
                      pcVar18 = (char *)CONCAT31(uVar23,cVar6 + *pcVar35);
                      *pcVar18 = *pcVar18 + cVar6 + *pcVar35;
                      pcVar18 = pcVar18 + *param_1;
                      *pcVar18 = *pcVar18 + (char)pcVar18;
                      LOCK();
                      pcVar35 = *(char **)pcVar18;
                      *(char **)pcVar18 = pcVar18;
                      UNLOCK();
                      *pcVar35 = *pcVar35 + (char)pcVar35;
                      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar35 >> 8),(byte)*param_1);
                      *pbVar10 = *pbVar10 + (byte)*param_1;
                      goto code_r0x00402c8d;
                    }
                    param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),
                                               cVar8 + *pcVar11 + (0xfd < bVar25));
                    *(byte *)puVar40 = (byte)*puVar40 - cVar9;
                    puVar38 = unaff_EBP;
                  }
                } while( true );
              }
              puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                         CONCAT11((char)((uint)puVar36 >> 8) +
                                                  *(byte *)((int)puVar36 + -99),(char)puVar36));
              puVar14 = unaff_ESI;
            }
            *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
            param_2 = (uint *)((int)param_2 - *puVar14);
            unaff_ESI = puVar14;
            uVar41 = in_ES;
            in_ES = uVar4;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          pcVar35 = pcVar35 + -0x7d160243;
        }
        pcVar35 = (char *)CONCAT31(uVar23,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
    uVar12 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
    *puVar40 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar12,(byte)puVar14) + *puVar40);
    puVar38 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar29 = (char)param_1;
      cVar26 = (char)((uint)param_1 >> 8) + (char)((uint)pbVar10 >> 8);
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar26,cVar29));
      cVar6 = (char)pbVar10;
      *pbVar10 = *pbVar10 + cVar6;
      pcVar35 = (char *)((int)pbVar10 * 2 + 0x1a10000);
      cVar9 = (char)((uint)pcVar11 >> 8);
      *pcVar35 = *pcVar35 + cVar9;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      pbVar10[-0x47ffffff] = pbVar10[-0x47ffffff] + cVar9;
      *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
      bVar25 = (byte)puVar14;
      *(byte *)puVar40 = (byte)*puVar40 + bVar25;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + bVar25;
      *pbVar10 = *pbVar10 + cVar6;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar30 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar9 = cVar9 + (byte)unaff_ESI[(int)pcVar11];
      pcVar35 = (char *)CONCAT22(uVar30,CONCAT11(cVar9,(char)pcVar11));
      pcVar35[(int)pbVar10] = pcVar35[(int)pbVar10] + cVar6;
      *(byte *)puVar14 = *(byte *)puVar14 - cVar9;
      *(byte *)puVar14 = *(byte *)puVar14 + cVar29;
      uVar23 = (undefined3)((uint)pbVar10 >> 8);
      bVar7 = cVar6 - *pbVar10;
      *pcVar35 = *pcVar35 + bVar25;
      *(byte *)puVar14 = *(byte *)puVar14 ^ bVar7;
      *(byte *)puVar14 = *(byte *)puVar14 + bVar7;
      *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
      uVar12 = *param_1;
      *(byte *)param_1 = (byte)*param_1 + bVar25;
      cVar8 = bVar7 + *(char *)CONCAT31(uVar23,bVar7) + CARRY1((byte)uVar12,bVar25);
      pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(cVar9 + (byte)puVar38[-0x18],(char)pcVar11));
      *(char *)CONCAT31(uVar23,cVar8) = *(char *)CONCAT31(uVar23,cVar8) + cVar8;
      cVar9 = cVar8 + '\x12';
      pbVar10 = (byte *)CONCAT31(uVar23,cVar9);
      cVar6 = *pcVar11;
      *pcVar11 = *pcVar11 + cVar9;
      if (SCARRY1(cVar6,cVar9) != *pcVar11 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar10;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *(byte *)puVar14 = *(byte *)puVar14 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
    }
    *pbVar10 = *pbVar10 + cVar9;
    pbVar10 = (byte *)CONCAT31(uVar23,cVar8 + '$');
    *pbVar10 = *pbVar10 + cVar26;
    bVar7 = *(byte *)puVar14;
    *(byte *)puVar14 = *(byte *)puVar14 + cVar29;
    uVar41 = in_ES;
    uVar42 = in_DS;
  } while (SCARRY1(bVar7,cVar29) == (char)*(byte *)puVar14 < '\0');
  do {
    cVar6 = (char)pbVar10;
    *pbVar10 = *pbVar10 + cVar6;
    uVar23 = (undefined3)((uint)pbVar10 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar14;
    bVar25 = cVar6 + 0x24;
    cVar9 = (char)((uint)pcVar11 >> 8);
    pcVar11[-0x62] = pcVar11[-0x62] + cVar9;
    *(char *)CONCAT31(uVar23,bVar25) = *(char *)CONCAT31(uVar23,bVar25) + bVar25;
    bVar7 = cVar6 + 0x2fU + (byte)*param_1;
    cVar8 = bVar7 + (0xf4 < bVar25);
    cVar6 = cVar8 + *(char *)CONCAT31(uVar23,cVar8) +
            (CARRY1(cVar6 + 0x2fU,(byte)*param_1) || CARRY1(bVar7,0xf4 < bVar25));
    pcVar35 = (char *)CONCAT31(uVar23,cVar6);
    *pcVar35 = *pcVar35 - (char)puVar14;
    *pcVar35 = *pcVar35 + cVar6;
    pcVar18 = (char *)((int)puVar14 - *puVar14);
    *(byte *)(unaff_ESI + (int)pcVar11) = (byte)unaff_ESI[(int)pcVar11] + cVar9;
    pcVar35[(int)unaff_EBP] = pcVar35[(int)unaff_EBP] + cVar6;
    *pcVar18 = *pcVar18 + (char)param_1;
    pcVar35 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((char)((uint)pbVar10 >> 8) - *pcVar18,cVar6));
    uVar12 = *puVar40;
    *pcVar35 = *pcVar35 - (char)((uint)pcVar18 >> 8);
    *pcVar35 = *pcVar35 + cVar6;
    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar41);
    pbVar15 = (byte *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                               CONCAT11(cVar9 - (byte)*unaff_ESI,(char)pcVar11));
    unaff_EBP = (uint *)((int)unaff_EBP + *(int *)(pbVar15 + (int)param_1));
    puVar36 = (uint *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + (byte)uVar12);
    while( true ) {
      puVar14 = puVar36;
      uVar30 = (undefined2)((uint)pbVar15 >> 0x10);
      bVar37 = (char)((uint)pbVar15 >> 8) + pbVar15[0x18];
      *pcVar35 = *pcVar35 + (char)pcVar35;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar35 >> 8),(char)pcVar35 + 'o');
      cVar6 = (char)param_1;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      uVar12 = *unaff_ESI;
      bVar33 = (byte)((uint)param_1 >> 8);
      bVar7 = *pbVar10;
      pbVar10 = pbVar10 + (uint)CARRY1(bVar33,*pbVar10) + *(int *)pbVar10;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      cVar8 = ((char)pbVar15 - (byte)uVar12) - (byte)*unaff_ESI;
      bVar25 = *(byte *)((int)puVar40 + 0x1a);
      *pbVar10 = *pbVar10 + (char)pbVar10;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11(bVar33 + bVar7 + bVar25 | (byte)*puVar14,cVar6));
      pbVar10 = pbVar10 + *puVar14;
      if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) break;
      *pbVar10 = *pbVar10 + (char)pbVar10;
      bVar7 = (char)pbVar10 + 0x6f;
      pcVar35 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
      pcVar11 = (char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar37,(char)pbVar15)) >> 8),cVar8
                                 ) + -1);
      *pcVar35 = *pcVar35 + bVar7;
      *pcVar35 = *pcVar35 + bVar7;
      *pcVar11 = *pcVar11 + (byte)puVar14;
      *(byte *)((int)pcVar35 * 2) = *(byte *)((int)pcVar35 * 2) ^ bVar7;
      uVar3 = *(undefined6 *)pcVar35;
      uVar41 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar35 = (char *)uVar3;
      *pcVar35 = *pcVar35 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar35 = (char *)((uint)pcVar35 | 0x73110008);
      bVar37 = (byte)((uint)pcVar11 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 - bVar37;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      puVar36 = unaff_ESI + (uint)bVar44 * -2 + 1;
      out(*unaff_ESI,(short)puVar14);
      *pcVar35 = *pcVar35;
      cVar6 = (char)pcVar35;
      *pcVar35 = *pcVar35 + cVar6;
      bVar7 = *(byte *)((int)unaff_EBP + -0x5a);
      uVar30 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar8 = (char)pcVar11;
      *pcVar35 = *pcVar35 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar12 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      param_1 = (uint *)(uVar12 | 0x73110000);
      unaff_ESI = puVar36 + (uint)bVar44 * -2 + 1;
      out(*puVar36,(short)puVar14);
      *(byte *)param_1 = (byte)*param_1;
      bVar33 = (byte)puVar14 | (byte)*puVar40;
      puVar36 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar33);
      *(byte *)param_1 = (byte)*param_1 + cVar6;
      pcVar35 = (char *)(uVar12 | 0x7b1f1609);
      bVar44 = (uVar42 & 0x400) != 0;
      *(uint *)((int)puVar40 + -0x7d) = *(uint *)((int)puVar40 + -0x7d) | (uint)unaff_EBP;
      bVar25 = (byte)pcVar35;
      *pcVar35 = *pcVar35 + bVar25;
      bVar37 = bVar37 | bVar7 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar15 = (byte *)CONCAT22(uVar30,CONCAT11(bVar37,cVar8));
      *pcVar35 = *pcVar35 + bVar25;
      uVar23 = (undefined3)((uint)pcVar35 >> 8);
      unaff_ESI[(int)puVar40 * 2] =
           (uint)((int)puVar36 + (uint)(0xd2 < bVar25) + unaff_ESI[(int)puVar40 * 2]);
      bVar7 = bVar25 + 0x2d ^ *(byte *)CONCAT31(uVar23,bVar25 + 0x2d);
      pcVar35 = (char *)CONCAT31(uVar23,bVar7);
      uVar12 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
      uVar42 = uVar41;
      if (CARRY1((byte)uVar12,bVar7)) {
        *pcVar35 = *pcVar35 + bVar7;
        bVar7 = bVar7 | pcVar35[0x4000019];
        pcVar35 = (char *)CONCAT31(uVar23,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar35 = *pcVar35 + bVar7;
          piVar19 = (int *)CONCAT31(uVar23,bVar7 + 0x28);
          *piVar19 = (int)piVar19 + (uint)(0xd7 < bVar7) + *piVar19;
          bVar27 = (byte)((uint6)uVar3 >> 8);
          *pbVar15 = *pbVar15 + bVar27;
          uVar31 = CONCAT11((byte)((uint)puVar14 >> 8) | bVar37,bVar33);
          puVar36 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),uVar31);
          uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar41);
          bVar33 = in(uVar31);
          pbVar10 = (byte *)CONCAT31(uVar23,bVar33);
          bVar7 = *pbVar10;
          bVar43 = SCARRY1(*pbVar10,bVar33);
          *pbVar10 = *pbVar10 + bVar33;
          bVar25 = *pbVar10;
          puVar14 = unaff_ESI;
          in_SS = uVar41;
          if (!CARRY1(bVar7,bVar33)) goto code_r0x00402e19;
          *pbVar10 = *pbVar10 + bVar33;
          bVar27 = bVar27 | *pbVar10;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar27,cVar6));
          pcVar35 = (char *)CONCAT31(uVar23,bVar33 + *pbVar10);
          *pbVar15 = *pbVar15 + bVar27;
        }
        uVar23 = (undefined3)((uint)pcVar35 >> 8);
        bVar25 = (byte)pcVar35 | (byte)*puVar36;
        pbVar10 = (byte *)CONCAT31(uVar23,bVar25);
        puVar14 = unaff_ESI + (uint)bVar44 * -2 + 1;
        out(*unaff_ESI,(short)puVar36);
        LOCK();
        bVar7 = *pbVar10;
        *pbVar10 = bVar25;
        UNLOCK();
        *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
        piVar19 = (int *)(CONCAT31(uVar23,bVar7) + -0x1b7e07);
        *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
        iVar17 = (int)param_1 - *(int *)pbVar15;
        bVar7 = *(byte *)((int)puVar40 + -0x7a);
        uVar31 = (undefined2)((uint)iVar17 >> 0x10);
        *(char *)piVar19 = *(char *)piVar19 + (char)piVar19;
        bVar25 = (char)((uint)iVar17 >> 8) + bVar7 | *(byte *)((int)puVar40 + 0x17);
        *(char *)piVar19 = *(char *)piVar19 + (char)piVar19;
        uVar23 = (undefined3)(CONCAT22(uVar31,CONCAT11(bVar25,(byte)iVar17)) >> 8);
        bVar7 = (byte)iVar17 | *pbVar15;
        param_1 = (uint *)CONCAT31(uVar23,bVar7);
        pbVar10 = (byte *)((int)piVar19 + *piVar19);
        puVar38 = puVar14;
        if (SCARRY4((int)piVar19,*piVar19)) goto code_r0x00402e0a;
        *(byte *)param_1 = (byte)*param_1 + bVar7;
        *(byte **)pbVar15 = (byte *)(*(int *)pbVar15 + (int)puVar36);
        piVar19 = (int *)CONCAT31(uVar23,bVar7 + 0x27);
        param_1 = (uint *)CONCAT22(uVar31,CONCAT11(bVar25 + *(byte *)((int)puVar40 + -0x79),bVar7));
        *(byte *)piVar19 = (char)*piVar19 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(bVar37 | *(byte *)((int)unaff_EBP + -0x62),cVar8));
  } while( true );
code_r0x00402dff:
  pbVar10 = (byte *)CONCAT22((short)((uint)piVar19 >> 0x10),
                             CONCAT11((byte)((uint)piVar19 >> 8) |
                                      *(byte *)((int)puVar36 + 0x2170411),(byte)piVar19));
  puVar38 = puVar14 + (uint)bVar44 * -2 + 1;
  out(*puVar14,(short)puVar36);
  *pbVar10 = (byte)piVar19;
  *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar10;
  *pbVar10 = *pbVar10 - cVar8;
  *pbVar10 = *pbVar10 + (char)pbVar10;
  bVar43 = false;
  bVar25 = (byte)((uint)param_1 >> 8) | bRam052b0603;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar25,(char)param_1));
  puVar14 = puVar38;
code_r0x00402e19:
  if (bVar25 == 0 || bVar43 != (char)bVar25 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cRam89280411;
  piVar19 = (int *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                            CONCAT11((byte)((uint)pbVar10 >> 8) |
                                     *(byte *)((int)puVar36 + 0x7190411),cRam89280411));
  *(char *)piVar19 = (char)*piVar19 + cRam89280411;
  cVar6 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar36,cVar6));
  puVar14 = (uint *)((int)puVar14 + *piVar19);
  pbVar10 = (byte *)((int)piVar19 + *piVar19);
  bVar25 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar25;
  *(byte *)puVar14 = (byte)*puVar14 + cVar6;
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar25;
  *(byte **)pbVar10 = (byte *)((int)unaff_EBP + (uint)CARRY1(bVar7,bVar25) + *(int *)pbVar10);
  piVar19 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),*pbVar10);
  *(byte *)puVar36 = (byte)*puVar36 + cVar6;
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(byte)puVar36 | (byte)*puVar36);
  pbVar10 = (byte *)((int)puVar38 + -0x43);
  *pbVar10 = *pbVar10 + (char)((uint)puVar36 >> 8);
  puVar36 = puVar38;
  puVar38 = puVar40;
  uVar42 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar40 = puVar38;
  in_SS = in_ES;
  if (SCARRY4((int)piVar19,*piVar19)) goto code_r0x00402e6e;
  iVar17 = *(int *)((int)piVar19 + *piVar19);
  *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
  piVar19 = (int *)(iVar17 + -0x8c6f);
  puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                             CONCAT11((byte)((uint)puVar36 >> 8) | *(byte *)((int)puVar36 + -0x3f),
                                      (char)puVar36));
  pbVar20 = (byte *)((int)piVar19 + *piVar19);
  pbVar10 = pbVar20;
  puVar40 = uStackY_28;
  if (SCARRY4((int)piVar19,*piVar19)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar20 = *pbVar20 + (char)pbVar20;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar36,(char)param_1));
  puVar38 = puVar14 + (uint)bVar44 * -2 + 1;
  out(*puVar14,(short)puVar36);
  puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(char)puVar36 + (byte)*puVar40);
  puVar14 = puVar38 + (uint)bVar44 * -2 + 1;
  out(*puVar38,(short)puVar36);
  uVar42 = in_ES;
  in_SS = uVar41;
code_r0x00402e6e:
  in_ES = uVar42;
  uVar23 = (undefined3)((uint)puVar36 >> 8);
  cVar6 = (char)puVar36 + (byte)*puVar40;
  puVar38 = puVar14 + (uint)bVar44 * -2 + 1;
  out(*puVar14,(short)CONCAT31(uVar23,cVar6));
  puVar36 = (uint *)CONCAT31(uVar23,cVar6 + (byte)*puVar40);
  puVar14 = puVar38 + (uint)bVar44 * -2 + 1;
  out(*puVar38,(short)puVar36);
  pbVar10 = (byte *)0x0;
  puVar38 = puVar40;
code_r0x00402e81:
  puVar40 = puVar38;
  bVar25 = (char)pbVar10 - *pbVar10;
  iVar17 = CONCAT31((int3)((uint)pbVar10 >> 8),bVar25);
  *pbVar15 = *pbVar15 + (char)puVar36;
  pbVar20 = (byte *)(iVar17 * 2);
  *pbVar20 = *pbVar20 ^ bVar25;
  pbVar20 = (byte *)(int)(short)iVar17;
  *pbVar20 = *pbVar20 + bVar25;
  *(byte *)puVar40 = (byte)*puVar40 + (byte)param_1;
  bVar7 = *pbVar20;
  *pbVar20 = *pbVar20 + bVar25;
  *(byte **)(pbVar15 + -0x73) =
       (byte *)((int)puVar14 + (uint)CARRY1(bVar7,bVar25) + *(int *)(pbVar15 + -0x73));
  *pbVar20 = *pbVar20 + bVar25;
  bVar7 = (byte)param_1 | (byte)*puVar36;
  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar7);
  puVar38 = puVar14;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar20 = *pbVar20 + bVar25;
  pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar10 >> 8),bVar25 + 0x2d);
  puVar14[(int)puVar40 * 2] =
       (uint)((int)puVar36 + (uint)(0xd2 < bVar25) + puVar14[(int)puVar40 * 2]);
  puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
  do {
    uVar12 = *puVar14;
    bVar7 = (byte)pbVar10;
    *(byte *)puVar14 = (byte)*puVar14 + bVar7;
    if (!CARRY1((byte)uVar12,bVar7)) break;
    *pbVar10 = *pbVar10 + bVar7;
    bVar7 = bVar7 | pbVar10[0x400001a];
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      uVar23 = (undefined3)((uint)pbVar20 >> 8);
      bVar7 = (byte)pbVar20 | pbVar20[0x400001b];
      pcVar35 = (char *)CONCAT31(uVar23,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar12 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + (byte)param_1;
        *(char *)((int)pcVar35 * 2) =
             *(char *)((int)pcVar35 * 2) - CARRY1((byte)uVar12,(byte)param_1);
        bVar43 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar20 = *pbVar20 + bVar7;
      puVar38 = puVar14;
code_r0x00402eb4:
      uVar23 = (undefined3)((uint)pbVar20 >> 8);
      bVar7 = (char)pbVar20 + 0x6f;
      pcVar35 = (char *)CONCAT31(uVar23,bVar7);
      *(uint **)pcVar35 = puStackY_44;
      uVar12 = *puVar36;
      *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
      puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
      in_DS = uVar41;
      if ((byte)*puVar36 != 0 && SCARRY1((byte)uVar12,(char)param_1) == (char)(byte)*puVar36 < '\0')
      {
        *pcVar35 = *pcVar35 + bVar7;
        bVar25 = (char)pbVar20 + 0x9c;
        pbVar20 = (byte *)CONCAT31(uVar23,bVar25);
        puVar38[(int)puVar40 * 2] =
             (uint)((int)puVar36 + (uint)(0xd2 < bVar7) + puVar38[(int)puVar40 * 2]);
        puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
        uVar12 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar25;
        puVar14 = puVar38;
        if (CARRY1((byte)uVar12,bVar25)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar14 = puVar38 + (uint)bVar44 * -2 + 1;
      out(*puVar38,(short)puVar36);
    }
    cVar6 = (char)pcVar35;
    *pcVar35 = *pcVar35 + cVar6;
    uVar23 = (undefined3)((uint)pcVar35 >> 8);
    bVar7 = cVar6 + 0x6f;
    pcVar35 = (char *)CONCAT31(uVar23,bVar7);
    *(uint **)pcVar35 = puStackY_44;
    uVar12 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + (byte)param_1;
    puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
    *(byte *)(puVar14 + 7) = ((byte)puVar14[7] - bVar37) - CARRY1((byte)uVar12,(byte)param_1);
    *pcVar35 = *pcVar35 + bVar7;
    bVar25 = cVar6 + 0x9c;
    pcVar35 = (char *)CONCAT31(uVar23,bVar25);
    puVar14[(int)puVar40 * 2] =
         (uint)((int)puVar36 + (uint)(0xd2 < bVar7) + puVar14[(int)puVar40 * 2]);
    uVar12 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar25;
    if (!CARRY1((byte)uVar12,bVar25)) goto code_r0x00402e7e;
    *pcVar35 = *pcVar35 + bVar25;
    bVar25 = bVar25 | pcVar35[0x400001c];
    pbVar10 = (byte *)CONCAT31(uVar23,bVar25);
    in_SS = uVar41;
    if ((char)bVar25 < '\x01') goto code_r0x00402f16;
    *pbVar10 = *pbVar10 + bVar25;
    pcVar35 = (char *)CONCAT31(uVar23,bVar25 + 0x6f);
    while( true ) {
      *(uint **)pcVar35 = puStackY_44;
      uVar12 = *puVar36;
      *(byte *)puVar36 = (byte)*puVar36 + (byte)param_1;
      *(uint *)((int)puVar14 + 0x1d) =
           (*(int *)((int)puVar14 + 0x1d) - (int)puVar40) - (uint)CARRY1((byte)uVar12,(byte)param_1)
      ;
      bVar7 = (byte)pcVar35;
      *pcVar35 = *pcVar35 + bVar7;
      bVar25 = bVar7 + 0x2d;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar35 >> 8),bVar25);
      puVar14[(int)puVar40 * 2] =
           (uint)((int)puVar36 + (uint)(0xd2 < bVar7) + puVar14[(int)puVar40 * 2]);
      puStackY_44 = (uint *)CONCAT22((short)((uint)puStackY_44 >> 0x10),uVar41);
      uVar12 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar25;
      if (!CARRY1((byte)uVar12,bVar25)) break;
      *pbVar10 = *pbVar10 + bVar25;
code_r0x00402f16:
      bVar7 = (byte)pbVar10 | pbVar10[0x400001d];
      puVar21 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
      puVar38 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = puVar38;
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        uVar23 = (undefined3)((uint)puVar21 >> 8);
        cVar6 = (char)puVar21 + 'o';
        puVar38 = (uint *)CONCAT31(uVar23,cVar6);
        *puVar38 = (uint)puStackY_44;
        cVar9 = (char)param_1;
        *(byte *)puVar36 = (byte)*puVar36 + cVar9;
        puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
        bVar7 = (byte)((uint)puVar36 >> 8);
        bVar43 = bVar7 < (byte)*puVar14;
        puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar14,(char)puVar36));
        if (bVar43) break;
        bVar43 = CARRY4((uint)puVar38,*puVar38);
        puVar21 = (uint *)((int)puVar38 + *puVar38);
        if (!SCARRY4((int)puVar38,*puVar38)) {
          bVar43 = CARRY4((uint)unaff_EBP,*puVar21);
          unaff_EBP = (uint *)((int)unaff_EBP + *puVar21);
        }
        *puVar21 = (*puVar21 - (int)puVar21) - (uint)bVar43;
        *(byte *)puVar36 = (byte)*puVar36 + cVar9;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((char)((uint)param_1 >> 8) + (byte)*puVar36,
                                            cVar9 - (byte)*puVar36));
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402f3b:
        cVar9 = (char)puVar36;
        *pbVar15 = *pbVar15 + cVar9;
        bVar7 = (byte)puVar21;
        *(byte *)((int)puVar21 * 2) = *(byte *)((int)puVar21 * 2) ^ bVar7;
        *(byte *)puVar21 = (byte)*puVar21 + bVar7;
        *(byte *)puVar21 = (byte)*puVar21 + cVar9;
        uVar12 = *puVar21;
        *(byte *)puVar21 = (byte)*puVar21 + bVar7;
        *puVar36 = (uint)((int)puVar21 + (uint)CARRY1((byte)uVar12,bVar7) + *puVar36);
        pcVar35 = (char *)((uint)puVar21 | *puVar40);
        uVar23 = (undefined3)((uint)pcVar35 >> 8);
        cVar6 = (char)pcVar35 + *pcVar35;
        pcVar35 = (char *)CONCAT31(uVar23,cVar6);
        *pcVar35 = *pcVar35 + cVar6;
        cVar6 = cVar6 + *pcVar35;
        piVar19 = (int *)CONCAT31(uVar23,cVar6);
        *(char *)piVar19 = (char)*piVar19 + cVar6;
        iVar17 = LocalDescriptorTableRegister();
        *piVar19 = iVar17;
        bVar7 = *pbVar15;
        bVar28 = (byte)((uint)param_1 >> 8);
        *pbVar15 = *pbVar15 + bVar28;
        iVar17 = *piVar19;
        uVar31 = (undefined2)((uint)param_1 >> 0x10);
        bVar27 = (byte)param_1;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        puVar38 = puVar14 + (uint)bVar44 * -2 + 1;
        out(*puVar14,(short)puVar36);
        *(byte *)puVar38 = (byte)*puVar38 + cVar6;
        bVar25 = *pbVar15;
        *(byte *)puVar36 = (byte)*puVar36 - bVar37;
        *(byte *)puVar38 = (byte)*puVar38 + cVar6;
        puVar39 = puVar38 + (uint)bVar44 * -2 + 1;
        out(*puVar38,(short)puVar36);
        *(byte *)puVar39 = (byte)*puVar39 + cVar6;
        bVar33 = *pbVar15;
        *(uint *)((int)puVar36 + -0x23) = *(uint *)((int)puVar36 + -0x23) & (uint)puVar39;
        puVar22 = (ushort *)((int)piVar19 + *piVar19);
        if (!SCARRY4((int)piVar19,*piVar19)) {
          *puVar22 = in_DS;
        }
        *(char *)puVar22 = (char)*puVar22 + (char)puVar22;
        uVar32 = CONCAT11((char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + -0x15),cVar9);
        puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),uVar32);
        puVar21 = (uint *)((int)puVar22 + *(int *)puVar22);
        if (!SCARRY4((int)puVar22,*(int *)puVar22)) {
          *(ushort *)puVar21 = in_DS;
        }
        cVar6 = (char)puVar21;
        *(byte *)puVar21 = (byte)*puVar21 + cVar6;
        cVar29 = ((bVar28 - (char)iVar17) - CARRY1(bVar7,bVar28) | bVar25 | bVar33) + (byte)*puVar21
        ;
        param_1 = (uint *)CONCAT22(uVar31,CONCAT11(cVar29,bVar27));
        uVar12 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + bVar27;
        if (CARRY1((byte)uVar12,bVar27)) {
          *(byte *)puVar21 = (byte)*puVar21 + cVar6;
          bVar7 = *(byte *)((int)puVar36 + 6);
          *(byte *)puVar36 = (byte)*puVar36 + bVar27;
          bVar25 = (cVar29 - (byte)*puVar39) + cRam14730307;
          *(byte *)puVar21 = (byte)*puVar21 + cVar6;
          bVar7 = bVar37 | bVar7 | *(byte *)((int)puVar36 + 0x2a);
          uVar12 = *puVar21;
          pbVar10 = (byte *)((int)puVar21 + (uint)CARRY1(bVar25,(byte)*puVar21) + *puVar21);
          *(byte *)puVar36 = (byte)*puVar36 + bVar27;
          cVar6 = cVar8 - (byte)*puVar39;
          cVar8 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar7,cVar8)) >> 8),
                                             cVar6) + 0x1e);
          *pbVar10 = *pbVar10 + (char)pbVar10;
          uVar23 = (undefined3)((uint)pbVar10 >> 8);
          bVar7 = (char)pbVar10 + 0x2aU & (byte)*puVar36;
          *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
          pcVar35 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x1f);
          *pcVar35 = *pcVar35 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
          pcVar35 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x20);
          *pcVar35 = *pcVar35 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
          pcVar35 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x21);
          *pcVar35 = *pcVar35 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
          pcVar35 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x22);
          *pcVar35 = *pcVar35 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
          pcVar35 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
          bVar25 = bVar25 + (byte)uVar12 + *pcVar35;
          uVar24 = CONCAT22(uVar31,CONCAT11(bVar25,bVar27));
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x25);
          *pcVar35 = *pcVar35 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
          pcVar35 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
          pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(
                                                  cVar8,cVar6)) + 0x26),cVar6));
          *pcVar35 = *pcVar35 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
          cVar6 = bVar7 + 0x2a;
          pcVar35 = (char *)CONCAT31(uVar23,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar35 = *pcVar35 + cVar6;
            pbVar10 = (byte *)(CONCAT31(uVar23,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar10;
            bVar33 = (byte)pbVar10;
            *pbVar10 = *pbVar10 + bVar33;
            uVar23 = (undefined3)((uint)pbVar10 >> 8);
            if (!CARRY1(bVar7,bVar33)) {
              if (!SCARRY1(bVar33,'\0')) {
                *pbVar10 = *pbVar10 + bVar33;
                uVar24 = CONCAT22(uVar31,CONCAT11(bVar25 | (byte)*puVar36,bVar27));
                bVar33 = bVar33 & (byte)*puVar36;
                *(char *)CONCAT31(uVar23,bVar33) = *(char *)CONCAT31(uVar23,bVar33) + bVar33;
                pcVar35 = (char *)CONCAT31(uVar23,bVar33 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar35 = (char *)CONCAT31(uVar23,bVar33 + *pcVar11);
              if (SCARRY1(bVar33,*pcVar11) != (char)(bVar33 + *pcVar11) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar33 + *pcVar11;
            pbVar10 = (byte *)CONCAT31(uVar23,bVar7);
            if (SCARRY1(bVar33,*pcVar11) == (char)bVar7 < '\0') {
              pcVar35 = (char *)CONCAT22(uVar31,CONCAT11(bVar25 | (byte)*puVar36,bVar27));
              *pcVar11 = *pcVar11 + cVar9;
              *(byte *)puVar36 = (byte)*puVar36 ^ bVar7;
              *(char *)((int)pbVar10 * 2) = *(char *)((int)pbVar10 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar35 = *pcVar35 + (char)pcVar35;
            uVar23 = (undefined3)((uint)pcVar35 >> 8);
            bVar7 = (char)pcVar35 + 0x2aU & (byte)*puVar36;
            *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
            pcVar35 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
            *pcVar35 = *pcVar35 + bVar7 + 0x2a;
            pcVar35 = (char *)CONCAT31(uVar23,bVar7 + 0x54 & (byte)*puVar36);
code_r0x00403072:
            cVar6 = (char)pcVar35;
            *pcVar35 = *pcVar35 + cVar6;
            uVar23 = (undefined3)((uint)pcVar35 >> 8);
            pcVar35 = (char *)CONCAT31(uVar23,cVar6 + '*');
            *pcVar35 = *pcVar35 + cVar6 + '*';
            bVar7 = cVar6 + 0x54U & (byte)*puVar36;
            *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,in_ES);
            uVar24 = CONCAT22((short)((uint)uVar24 >> 0x10),
                              CONCAT11((char)((uint)uVar24 >> 8) +
                                       *(char *)CONCAT31(uVar23,bVar7 + 0x2a),(char)uVar24));
            *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar9;
            pcVar35 = pcStackY_7c;
code_r0x0040309a:
            cVar6 = (char)pcVar35;
            *pcVar35 = *pcVar35 + cVar6;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,uVar41);
            *pcVar35 = *pcVar35 + cVar6;
            pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar35 >> 8),cVar6 + 0x2aU & (byte)*puVar36);
          }
          cVar6 = (char)pbVar10;
          *pbVar10 = *pbVar10 + cVar6;
          uVar23 = (undefined3)((uint)pbVar10 >> 8);
          cVar8 = cVar6 + '*';
          pcVar35 = (char *)CONCAT31(uVar23,cVar8);
          *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar9;
          *pcVar35 = *pcVar35 + cVar8;
          cVar29 = (char)pcStackY_7c - (byte)*puVar39;
          pcVar11 = (char *)CONCAT22((short)((uint)pcStackY_7c >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_7c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_7c >> 8),
                                                                 cVar29) + 0x34),cVar29));
          *pcVar35 = *pcVar35 + cVar8;
          bVar7 = cVar6 + 0x54U & (byte)*puVar36;
          *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
          pbVar10 = (byte *)CONCAT31(uVar23,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar24 >> 8);
          pcVar35 = (char *)CONCAT22((short)((uint)uVar24 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar10,(char)uVar24));
          pbVar10 = pbVar10 + (uint)CARRY1(bVar7,*pbVar10) + *(int *)pbVar10;
          *(byte *)puVar36 = (byte)*puVar36 + (char)uVar24;
          uVar23 = (undefined3)((uint)pbVar10 >> 8);
          cVar6 = (byte)pbVar10 - *pbVar10;
          piVar19 = (int *)CONCAT31(uVar23,cVar6);
          puVar39 = (uint *)((int)puVar39 + (uint)((byte)pbVar10 < *pbVar10) + *piVar19);
          cVar6 = cVar6 + (char)*piVar19;
          pbVar10 = (byte *)CONCAT31(uVar23,cVar6);
          *pbVar10 = *pbVar10 + cVar6;
code_r0x004030df:
          *pcVar35 = *pcVar35 + cVar9;
          bVar7 = *pbVar10;
          bVar25 = (byte)pbVar10;
          *pbVar10 = *pbVar10 + bVar25;
          *(byte **)(pcVar11 + -0x41) =
               (byte *)((int)puVar39 + (uint)CARRY1(bVar7,bVar25) + *(int *)(pcVar11 + -0x41));
          *pbVar10 = *pbVar10 + bVar25;
          uVar23 = (undefined3)((uint)pbVar10 >> 8);
          bVar25 = bVar25 | (byte)*puVar39;
          *(char *)CONCAT31(uVar23,bVar25) = *(char *)CONCAT31(uVar23,bVar25) + bVar25;
          pcVar35 = (char *)CONCAT31(uVar23,bVar25 + 0x7b);
          *pcVar35 = *pcVar35 + bVar25 + 0x7b;
          pbVar10 = (byte *)((int)puVar39 + CONCAT31(uVar23,bVar25 - 8) + -1);
          *pbVar10 = *pbVar10 + (bVar25 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar14 = puVar39 + (uint)bVar44 * -2 + 1;
        out(*puVar39,uVar32);
        puVar38 = (uint *)((int)unaff_EBP + 1);
        puStackY_44 = unaff_EBP;
      }
      bVar7 = cVar6 - bVar43;
      pbVar10 = (byte *)((int)puVar14 + (int)puVar40 * 2);
      bVar43 = CARRY1(*pbVar10,bVar7);
      *pbVar10 = *pbVar10 + bVar7;
code_r0x00402ef9:
      pcVar35 = (char *)CONCAT31(uVar23,bVar7 - bVar43);
      pbVar10 = (byte *)((int)puVar40 + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10 + (bVar7 - bVar43);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)param_1 = (byte)*param_1 + (char)puVar36;
  puVar38 = puVar36 + 0x2828000;
  bVar7 = (byte)param_1;
  bVar43 = (byte)*puVar38 < bVar7;
  *(byte *)puVar38 = (byte)*puVar38 - bVar7;
  bVar7 = (byte)pbVar10 + *pbVar10;
  piVar19 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7 + bVar43);
  puVar38 = puVar40;
  uVar42 = in_ES;
  if (CARRY1((byte)pbVar10,*pbVar10) || CARRY1(bVar7,bVar43)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar35 = *pcVar35 + bVar25;
  uVar42 = in_ES;
  in_SS = uVar41;
  goto code_r0x00402e6e;
}


