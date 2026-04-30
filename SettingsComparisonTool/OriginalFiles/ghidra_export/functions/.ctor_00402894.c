/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402894
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 param_1, uint * param_2)
 * Local Vars  : puStackY_44, pcStackY_7c, puStack_8, uStackY_28, uVar1, puStack_4, uVar3, uVar2, uVar5, uVar4, bVar7, cVar6, bVar9, cVar8, in_EAX, param_1, cVar10, param_2, pcVar12, pbVar11, uVar14, uVar13, pbVar16, puVar15, iVar18, piVar17, puVar20, pcVar19, pbVar22, piVar21, puVar24, puVar23, extraout_ECX, uVar25, uVar26, extraout_ECX_00, bVar28, cVar27, cVar30, bVar29, uVar32, uVar31, bVar34, uVar33, unaff_EBX, uVar35, bVar37, pcVar36, unaff_ESI, unaff_EBP, puVar39, puVar38, puVar40, unaff_EDI, uVar41, in_ES, uVar42, in_CS, in_DS, in_SS, bVar43, in_GS_OFFSET, bVar44, in_AF, uVar46, bVar45
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall _ctor(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  undefined3 uVar25;
  byte *in_EAX;
  byte *pbVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  byte *pbVar16;
  int *piVar17;
  int iVar18;
  char *pcVar19;
  uint *puVar20;
  int *piVar21;
  byte *pbVar22;
  uint *puVar23;
  ushort *puVar24;
  char cVar27;
  undefined4 extraout_ECX;
  uint *extraout_ECX_00;
  byte bVar28;
  byte bVar29;
  char cVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined4 uVar26;
  byte bVar34;
  undefined2 uVar33;
  undefined1 uVar35;
  byte bVar37;
  uint *unaff_EBX;
  char *pcVar36;
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
    puVar20 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11(bVar7 + *in_EAX,(char)param_1));
    pbVar11 = in_EAX + (uint)CARRY1(bVar7,*in_EAX) + *(int *)in_EAX;
code_r0x00402898:
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    bVar7 = (byte)param_2;
    uVar31 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar7);
    pbVar16 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar31);
    pcVar36 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[-0x19],
                                        (char)unaff_EBX));
    *pbVar11 = *pbVar11 + (char)pbVar11;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(char)pbVar11 + '\x03');
    puVar15 = unaff_ESI;
    do {
      unaff_ESI = puVar15 + 1;
      out(*puVar15,uVar31);
      pcVar36 = pcVar36 + -1;
      bVar9 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar9;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | *pbVar16,(char)puVar20));
      *pbVar11 = *pbVar11 + bVar9;
      *pcVar36 = *pcVar36 + bVar7;
      *(byte *)((int)pbVar11 * 2) = *(byte *)((int)pbVar11 * 2) ^ bVar9;
      *pbVar11 = *pbVar11 + bVar9;
      *pbVar11 = *pbVar11 | bVar9;
      bVar43 = CARRY1((byte)*puVar20,bVar7);
      *(byte *)puVar20 = (byte)*puVar20 + bVar7;
      cVar6 = bVar9 + 10 + bVar43;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
      puVar15 = unaff_ESI;
    } while (bVar9 < 0xf6 && !CARRY1(bVar9 + 10,bVar43));
    *pbVar11 = *pbVar11 + cVar6;
    puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
    pcVar12 = (char *)((uint)pbVar11 | *unaff_EDI);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pcVar36 >> 0x10),
                                 CONCAT11((char)((uint)pcVar36 >> 8) + (byte)unaff_EBP[-0x19],
                                          (char)pcVar36));
    *pcVar12 = *pcVar12 + (char)pcVar12;
    bVar7 = (char)pcVar12 + 7;
    uVar46 = CONCAT44(pbVar16,CONCAT31((int3)((uint)pcVar12 >> 8),bVar7));
code_r0x004028c8:
    param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
    pcVar36 = (char *)uVar46;
    uVar25 = (undefined3)((ulonglong)uVar46 >> 8);
    cVar6 = (char)uVar46;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *pcVar36 = *pcVar36 + cVar6;
      puVar15 = (uint *)CONCAT31(uVar25,cVar6 + '-');
      unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
      bVar43 = CARRY4(*puVar15,(uint)puVar15);
      uVar13 = *puVar15;
      *puVar15 = (uint)(*puVar15 + (int)puVar15);
      if (SCARRY4(uVar13,(int)puVar15)) {
        bVar43 = CARRY4(*puVar15,(uint)puVar15);
        bVar45 = SCARRY4(*puVar15,(int)puVar15);
        *puVar15 = (uint)(*puVar15 + (int)puVar15);
        bVar7 = POPCOUNT(*puVar15 & 0xff);
        if (bVar45) goto code_r0x004029be;
        goto code_r0x0040294c;
      }
      do {
        puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + bVar43);
        *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
        bVar43 = (POPCOUNT((byte)*param_2) & 1U) == 0;
        if (bVar43) goto code_r0x004028e2;
code_r0x004028db:
        if (!bVar43) goto code_r0x00402879;
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
        puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + 'r');
        puStack_8 = unaff_EBP;
code_r0x004028e2:
        uVar13 = *puVar15;
        *puVar15 = (uint)(*puVar15 + (int)puVar15);
        if (SCARRY4(uVar13,(int)puVar15)) {
          if (*puVar15 == 0 || SCARRY4(uVar13,(int)puVar15) != (int)*puVar15 < 0)
          goto code_r0x0040296d;
          goto code_r0x00402957;
        }
        unaff_EBX = (uint *)((int)unaff_EBX + -1);
        cVar6 = (char)puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                   CONCAT11((byte)((uint)puVar20 >> 8) |
                                            *(byte *)((int)puVar20 + 0x16d7207),(char)puVar20));
        cVar8 = (char)((uint)param_2 >> 8);
        *(byte *)((int)puVar15 + 0x7d) = *(byte *)((int)puVar15 + 0x7d) + cVar8;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        pbVar11 = (byte *)(CONCAT31((int3)((uint)puVar15 >> 8),cVar6 + '+') ^ *unaff_EDI);
        if ((POPCOUNT((uint)pbVar11 & 0xff) & 1U) != 0) goto code_r0x00402898;
        bVar7 = (byte)pbVar11;
        *pbVar11 = *pbVar11 + bVar7;
        puVar15 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7 + 0x72);
        if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
          uVar42 = in_CS;
          if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
        }
        else {
          *(byte *)((int)puVar15 + 0x6f) = *(byte *)((int)puVar15 + 0x6f) + cVar8;
        }
code_r0x00402905:
        uVar46 = CONCAT44(param_2,puVar15);
        unaff_EBX = (uint *)((int)unaff_EBX + -1);
        cVar6 = (char)puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        bVar7 = (byte)((uint)puVar20 >> 8) | (byte)*puVar20;
        puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,(char)puVar20));
        in_ES = (ushort)puStack_8;
        if ((char)bVar7 < '\x01') {
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          unaff_EDI = (uint *)((int)unaff_EDI - unaff_EBP[-0x19]);
          goto code_r0x00402929;
        }
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        puStack_8 = (uint *)0x40291c;
        uVar46 = func_0x7346291c();
        *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
        puVar20 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                                   (byte)extraout_ECX | *(byte *)((ulonglong)uVar46 >> 0x20));
        puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
        while( true ) {
          pcVar36 = (char *)((int)uVar46 * 2);
          *pcVar36 = *pcVar36 - (char)puVar20;
          uVar13 = *unaff_EBX;
          cVar6 = (char)((uint)puVar20 >> 8);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
          if (SCARRY1((byte)uVar13,cVar6) == (char)(byte)*unaff_EBX < '\0') {
            pbVar11 = (byte *)((int)unaff_EDI + (int)uVar46);
            *pbVar11 = *pbVar11 + (char)uVar46;
            bVar7 = *pbVar11;
            goto code_r0x004028c8;
          }
code_r0x00402929:
          param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
          cVar6 = (char)uVar46;
          *(char *)uVar46 = *(char *)uVar46 + cVar6;
          uVar25 = (undefined3)((ulonglong)uVar46 >> 8);
          bVar7 = cVar6 + 7;
          puVar15 = (uint *)CONCAT31(uVar25,bVar7);
          bVar9 = (byte)((ulonglong)uVar46 >> 0x28);
          if ((POPCOUNT(bVar7) & 1U) != 0) break;
          *(byte *)puVar15 = (byte)*puVar15 + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '3');
          uVar31 = (undefined2)((uint)unaff_EBX >> 0x10);
          uVar35 = SUB41(unaff_EBX,0);
          bVar7 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar7);
          unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(bVar7,uVar35));
          *pcVar36 = *pcVar36 + cVar6 + '3';
          cVar8 = cVar6 + ':';
          puVar15 = (uint *)CONCAT31(uVar25,cVar8);
          if ((POPCOUNT(cVar8) & 1U) != 0) {
            bVar7 = bVar7 | *(byte *)((int)param_2 + 7);
            unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(bVar7,uVar35));
            bVar43 = (POPCOUNT(bVar7) & 1U) == 0;
            goto code_r0x004028db;
          }
          *(byte *)puVar15 = (byte)*puVar15 + cVar8;
          puVar15 = (uint *)(CONCAT31(uVar25,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
          pbVar11 = (byte *)((int)puVar15 + 0x72);
          bVar45 = SCARRY1(*pbVar11,bVar9);
          *pbVar11 = *pbVar11 + bVar9;
          bVar7 = POPCOUNT(*pbVar11);
code_r0x0040294c:
          if ((bVar7 & 1) == 0) {
            *(byte *)((int)puVar15 + 0x72) =
                 *(byte *)((int)puVar15 + 0x72) + (char)((uint)param_2 >> 8);
          }
          else if (bVar45) {
            unaff_EBP = (uint *)*unaff_EBP;
            cVar6 = cRamc9721806;
            goto code_r0x004029c4;
          }
          unaff_EBP = (uint *)0x7e700001;
          puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_SS);
code_r0x00402957:
          *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
          cVar6 = (char)puVar15 + '(';
          puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),cVar6);
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                     CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar15,
                                              (char)puVar20));
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                     CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[0x18],
                                              (char)param_2));
          unaff_ESI = puStack_8;
          unaff_EDI = puStack_4;
code_r0x00402966:
          *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
          bVar7 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 7);
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11(bVar7,(char)unaff_EBX));
          if ((POPCOUNT(bVar7) & 1U) != 0) {
            puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + -0x21);
            goto code_r0x00402905;
          }
code_r0x0040296d:
          *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
          puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + '~');
code_r0x00402972:
          *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
          uVar42 = in_CS;
code_r0x00402974:
          bVar7 = 0xe9 < (byte)puVar15;
          in_CS = 0x2d0a;
          uVar46 = func_0x00006128(uVar42);
          puVar20 = (uint *)uVar46;
          piVar21 = (int *)((int)((ulonglong)uVar46 >> 0x20) + -0x3d);
          *piVar21 = (int)((int)unaff_ESI + (uint)bVar7 + *piVar21);
          bVar43 = SCARRY4(*puVar20,(int)puVar20);
          *puVar20 = *puVar20 + (int)puVar20;
          uVar13 = *puVar20;
          puVar20 = extraout_ECX_00;
code_r0x00402982:
          bVar7 = POPCOUNT(uVar13 & 0xff);
          if (bVar43) {
            *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
            puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                       CONCAT11((byte)((uint)puVar20 >> 8) |
                                                *(byte *)((ulonglong)uVar46 >> 0x20),(char)puVar20))
            ;
            goto code_r0x00402991;
          }
code_r0x00402984:
          pcVar36 = (char *)((ulonglong)uVar46 >> 0x20);
          if ((bVar7 & 1) == 0) {
            *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
            *pcVar36 = *pcVar36 + (char)puVar20;
            uVar46 = CONCAT44(CONCAT22((short)((ulonglong)uVar46 >> 0x30),
                                       CONCAT11((char)((ulonglong)uVar46 >> 0x28) - pcVar36[0x1f],
                                                (char)((ulonglong)uVar46 >> 0x20))),
                              CONCAT31((int3)((ulonglong)uVar46 >> 8),(char)uVar46 + '('));
code_r0x00402991:
            param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
            pbVar11 = (byte *)uVar46;
            bVar7 = (byte)uVar46;
            bVar43 = CARRY1(bVar7,*pbVar11);
            puVar15 = (uint *)CONCAT31((int3)((ulonglong)uVar46 >> 8),bVar7 + *pbVar11);
            cVar6 = bVar7 + *pbVar11;
            if (SCARRY1(bVar7,*pbVar11)) goto code_r0x004029c4;
code_r0x00402995:
            param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                       CONCAT11(((char)((uint)param_2 >> 8) -
                                                *(byte *)((int)param_2 + 0x6b)) - bVar43,
                                                (char)param_2));
            bVar7 = (byte)puVar15;
            bVar43 = CARRY1(bVar7,(byte)*puVar15);
            bVar45 = SCARRY1(bVar7,(byte)*puVar15);
            puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + (byte)*puVar15);
            do {
              if (!bVar45) {
                unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar43 + *puVar15);
                pbVar11 = (byte *)((int)puVar15 + *puVar15);
                bVar9 = (byte)pbVar11;
                *pbVar11 = *pbVar11 + bVar9;
                *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
                bVar7 = *pbVar11;
                *pbVar11 = *pbVar11 + bVar9;
                *unaff_EDI = (uint)((int)unaff_EBX + (uint)CARRY1(bVar7,bVar9) + *unaff_EDI);
                *(uint *)((int)unaff_EBP + 0x100002b) =
                     *(uint *)((int)unaff_EBP + 0x100002b) | (uint)puVar20;
                uVar25 = (undefined3)((uint)pbVar11 >> 8);
                bVar9 = bVar9 | (byte)*unaff_ESI;
                puVar15 = (uint *)CONCAT31(uVar25,bVar9);
                puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_SS);
                uVar13 = *puVar15;
                uVar1 = *puVar15;
                *puVar15 = (uint)(*puVar15 + (int)puVar15);
                if (SCARRY4(uVar1,(int)puVar15)) {
                  *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)unaff_EBX;
                  *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
                  *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)unaff_EBX;
                }
                else {
                  in_SS = in_ES;
                  if (CARRY4(uVar13,(uint)puVar15)) goto code_r0x00402972;
                  bVar43 = CARRY1(bVar9,(byte)*puVar15);
                  bVar45 = SCARRY1(bVar9,(byte)*puVar15);
                  puVar15 = (uint *)CONCAT31(uVar25,bVar9 + (byte)*puVar15);
code_r0x004029be:
                  if (!bVar45) {
                    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_ES);
                    *(byte *)((int)param_2 + -0x37) =
                         (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar43;
                    cVar6 = cRamc9721806;
code_r0x004029c4:
                    cRamc9721806 = cVar6;
                    bVar7 = (byte)puVar15;
                    bVar43 = CARRY1(bVar7,(byte)*puVar15);
                    bVar45 = SCARRY1(bVar7,(byte)*puVar15);
                    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + (byte)*puVar15);
                    goto code_r0x004029c6;
                  }
                }
                bVar7 = (byte)puVar20;
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
              uVar13 = *puVar15;
              bVar9 = (byte)puVar15;
              uVar1 = *puVar15;
              uVar25 = (undefined3)((uint)puVar15 >> 8);
              bVar7 = bVar9 + (byte)*puVar15;
              puVar15 = (uint *)CONCAT31(uVar25,bVar7);
              if (SCARRY1(bVar9,(byte)uVar1)) goto code_r0x00402972;
              cVar6 = (char)param_2;
              bVar34 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                       CARRY1(bVar9,(byte)uVar13);
              param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar34,cVar6));
              puVar38 = (uint *)CONCAT31(uVar25,bVar7 + (byte)*puVar15);
              bVar9 = (byte)puVar20;
              if (SCARRY1(bVar7,(byte)*puVar15)) {
                *(byte *)param_2 = (byte)*param_2 + bVar9;
                uVar46 = CONCAT44(param_2,(int)puVar38 + -0x1c37211);
                pcVar36 = (char *)((int)puVar38 + -0x1c3720a);
                *pcVar36 = *pcVar36 + bVar34;
                bVar7 = POPCOUNT(*pcVar36);
                goto code_r0x00402984;
              }
              unaff_ESI = (uint *)((int)unaff_ESI +
                                  (-(uint)CARRY1(bVar7,(byte)*puVar15) - *(int *)((int)param_2 + 5))
                                  );
              bVar43 = SCARRY4((int)puVar38,*puVar38);
              uVar13 = (int)puVar38 + *puVar38;
              uVar46 = CONCAT44(param_2,uVar13);
              if (bVar43) goto code_r0x00402982;
              bVar7 = (byte)uVar13 + 0x8e;
              uVar14 = CONCAT31((int3)(uVar13 >> 8),bVar7 - CARRY4((uint)puVar38,*puVar38));
              *unaff_EBX = (*unaff_EBX - uVar14) -
                           (uint)((byte)uVar13 < 0x72 || bVar7 < CARRY4((uint)puVar38,*puVar38));
              pbVar11 = (byte *)(uVar14 - 0x5e);
              bVar7 = *pbVar11;
              *pbVar11 = *pbVar11 + bVar34;
              uVar13 = (uint)CARRY1(bVar7,bVar34);
              uVar1 = uVar14 - 0x32d72;
              puVar15 = (uint *)(uVar1 - uVar13);
              if (SBORROW4(uVar14,0x32d72) != SBORROW4(uVar1,uVar13)) goto code_r0x00402992;
              uVar42 = in_DS;
              if (uVar14 < 0x32d72 || uVar1 < uVar13) {
                *(byte *)unaff_EBP = (byte)*unaff_EBP - (char)((uint)puVar15 >> 8);
                *(byte *)param_2 = (byte)*param_2 + bVar9;
                puVar38 = unaff_ESI + 1;
                out(*unaff_ESI,CONCAT11(bVar34,cVar6));
                *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
                goto code_r0x00402a3e;
              }
              bVar43 = CARRY4((uint)puVar15,*puVar15);
              bVar45 = SCARRY4((int)puVar15,*puVar15);
              puVar15 = (uint *)((int)puVar15 + *puVar15);
              if (!bVar45) {
                uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_ES);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar43;
                bVar7 = (byte)puVar15;
                *(byte *)((int)param_2 + (int)unaff_EBP) =
                     *(byte *)((int)param_2 + (int)unaff_EBP) + bVar7;
                *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
                *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar7;
                bVar28 = (byte)((uint)puVar20 >> 8);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar28;
                *(byte *)puVar15 = (byte)*puVar15 + bVar7;
                pbVar16 = (byte *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7 | (byte)*puVar15);
                *(byte *)puVar20 = (byte)*puVar20 + cVar6;
                bVar37 = *pbVar16;
                uVar31 = (undefined2)((uint)puVar20 >> 0x10);
                puVar20 = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar37,bVar9));
                pbVar16 = pbVar16 + (uint)CARRY1(bVar28,*pbVar16) + *(int *)pbVar16;
                *(byte *)param_2 = (byte)*param_2 + bVar9;
                unaff_EBP = (uint *)((int)unaff_EBP + iRam0355720b);
                pbVar11 = pbVar16 + 0x73;
                bVar7 = *pbVar11;
                *pbVar11 = *pbVar11 + bVar34;
                uVar25 = (undefined3)((uint)pbVar16 >> 8);
                bVar7 = (char)pbVar16 + CARRY1(bVar7,bVar34);
                pcVar36 = (char *)CONCAT31(uVar25,bVar7);
                *(byte *)param_2 = (byte)*param_2 + bVar9;
                if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
                  in_SS = in_ES;
                }
                puVar40 = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x17));
                *pcVar36 = *pcVar36 + bVar7;
                cVar6 = bVar7 + 2;
                puVar15 = (uint *)CONCAT31(uVar25,cVar6);
                if (bVar7 < 0xfe) {
                  *puVar15 = (uint)(*puVar15 + (int)puVar15);
                  goto code_r0x00402a8f;
                }
                *(byte *)puVar15 = (byte)*puVar15 + cVar6;
                uVar13 = *param_2;
                puVar38 = (uint *)((int)unaff_ESI + unaff_EBX[0x19]);
                *(byte *)puVar15 = (byte)*puVar15 + cVar6;
                puVar20 = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar37 | (byte)*puVar15,
                                                           bVar9 | (byte)uVar13));
                unaff_EDI = puVar40;
                goto code_r0x00402a36;
              }
            } while( true );
          }
        }
        *(byte *)((int)unaff_EBP + 0x13b720b) = *(byte *)((int)unaff_EBP + 0x13b720b) + bVar7;
        pbVar11 = (byte *)((int)puVar15 + 0x73);
        bVar43 = CARRY1(*pbVar11,bVar9);
        *pbVar11 = *pbVar11 + bVar9;
      } while( true );
    }
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    cVar8 = (char)unaff_EBX - (byte)*unaff_ESI;
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar8) +
                                                   0x12),cVar8));
    *pcVar36 = *pcVar36 + cVar6;
    bVar7 = cVar6 + 0x2aU & (byte)*param_2;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x12));
    *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
    puVar15 = (uint *)CONCAT31(uVar25,bVar7 + 0x2a);
    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_DS);
code_r0x00402879:
    cVar8 = (char)unaff_EBX - (byte)*unaff_ESI;
    cVar6 = *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar8) + 0x13);
    *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
    uVar25 = (undefined3)((uint)puVar15 >> 8);
    bVar7 = (char)puVar15 + 0x2aU & (byte)*param_2;
    pcVar36 = (char *)CONCAT31(uVar25,bVar7);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x13));
    *pcVar36 = *pcVar36 + bVar7;
    pbVar11 = (byte *)CONCAT31(uVar25,bVar7 + 0x2a);
    bVar7 = (byte)((uint)puVar20 >> 8);
    param_1 = CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7 + *pbVar11,(char)puVar20));
    in_EAX = pbVar11 + (uint)CARRY1(bVar7,*pbVar11) + *(int *)pbVar11;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) + cVar6,cVar8
                                                         )) >> 8),cVar8 - (byte)*unaff_ESI);
  } while( true );
code_r0x00402992:
  pbVar11 = (byte *)((int)puVar15 + 0x2a);
  bVar43 = CARRY1(*pbVar11,bVar34);
  *pbVar11 = *pbVar11 + bVar34;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar15) = *(byte *)(in_GS_OFFSET + (int)puVar15) + (char)puVar15;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                      (char)puVar20));
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
code_r0x00402a3e:
  uVar25 = (undefined3)((uint)puVar15 >> 8);
  bVar7 = (byte)puVar15 | (byte)*puVar38;
  pcVar36 = (char *)CONCAT31(uVar25,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar36 = *pcVar36 + bVar7;
    cVar6 = bVar7 + 2;
    piVar21 = (int *)CONCAT31(uVar25,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar21 = (char)*piVar21 + cVar6;
      bVar7 = bVar7 + 0x71;
      pcVar12 = (char *)CONCAT31(uVar25,bVar7);
      pcVar36 = (char *)segment(uVar42,(short)unaff_EBX + (short)puVar38);
      *pcVar36 = *pcVar36 + bVar7;
      uVar13 = unaff_EDI[0x1a];
      *pcVar12 = *pcVar12 + bVar7;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | (byte)uVar13 |
                                          *(byte *)((int)unaff_EDI + 0x69),(char)puVar20));
      *pcVar12 = *pcVar12 + bVar7;
      bVar7 = bVar7 | (byte)*param_2;
      pcVar36 = (char *)CONCAT31(uVar25,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
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
    *pcVar36 = *pcVar36 + (char)pcVar36;
    piVar21 = (int *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
    unaff_ESI = puVar38;
  }
code_r0x00402a61:
  pcVar36 = (char *)segment(uVar42,(short)unaff_EBX + (short)unaff_ESI);
  *pcVar36 = *pcVar36 + (char)piVar21;
  cVar6 = (char)puVar20;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)unaff_EDI[0x1a],cVar6));
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  uVar31 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar31);
  piVar17 = (int *)((int)piVar21 + *piVar21);
  puVar38 = unaff_ESI;
  puVar40 = unaff_EDI;
  uVar41 = in_ES;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar6;
  puVar38 = unaff_ESI + (uint)bVar44 * -2 + 1;
  out(*unaff_ESI,uVar31);
code_r0x00402a75:
  bVar7 = (byte)((uint)puVar20 >> 8) | (byte)*param_2;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,(char)puVar20));
  piVar21 = (int *)(uint)(byte)*unaff_EBX;
  *(byte *)puVar38 = (byte)*puVar38 - bVar7;
  puVar40 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  out(*puVar38,(short)param_2);
  bVar7 = in((short)param_2);
  *(byte *)puVar40 = bVar7;
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*param_2,(char)puVar20));
  iVar18 = *piVar21;
  cVar6 = in(1);
  puVar15 = (uint *)CONCAT31((int3)((uint)((int)piVar21 + *piVar21) >> 8),cVar6);
  *(char *)puVar15 = (char)*puVar15 + cVar6;
  puVar15 = (uint *)((uint)puVar15 | *puVar15);
  *(byte *)puVar20 = (byte)*puVar20 + (char)param_2;
  puVar38 = (uint *)((int)puVar38 + (((uint)bVar44 * -8 + 4) - iVar18));
  puVar40 = (uint *)((int)puVar40 + (uint)bVar44 * -2 + 1);
  in_SS = in_ES;
  while( true ) {
    bVar7 = (byte)puVar15 | (byte)*param_2;
    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7);
    unaff_EDI = puVar40;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar15 = (byte)*puVar15 + bVar7;
code_r0x00402a9b:
    uVar25 = (undefined3)((uint)puVar15 >> 8);
    cVar6 = (char)puVar15 + '\r';
    piVar17 = (int *)CONCAT31(uVar25,cVar6);
    *(uint *)((int)unaff_EBP + 2) = *(uint *)((int)unaff_EBP + 2) | (uint)piVar17;
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    *(byte *)(puVar38 + -0xc800000) = (byte)puVar38[-0xc800000] + (char)param_2;
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    cVar8 = (char)puVar20;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar8;
      unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
      out(*puVar38,(short)param_2);
      piVar21 = (int *)((longlong)*piVar17 * 0x7b020a00);
      *(char *)piVar21 =
           (char)*piVar21 - ((longlong)(int)piVar21 != (longlong)*piVar17 * 0x7b020a00);
      pbVar11 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar11 = *pbVar11;
      goto code_r0x00402a61;
    }
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    puVar15 = (uint *)CONCAT31(uVar25,(char)puVar15 + ':');
    unaff_ESI = (uint *)((uint)puVar38 | *(uint *)((int)param_2 + -0x79));
    iVar18 = (int)puVar15 + *puVar15;
    if (SCARRY4((int)puVar15,*puVar15)) {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            (byte)unaff_ESI[(int)unaff_EBX],(char)unaff_EBX));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar18;
      puVar40 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar25 = (undefined3)((uint)iVar18 >> 8);
    cVar6 = (char)iVar18 + CARRY4((uint)puVar15,*puVar15);
    piVar21 = (int *)CONCAT31(uVar25,cVar6);
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    bVar43 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar43) && (bVar43)) goto code_r0x00402a61;
    *(char *)piVar21 = (char)*piVar21 + cVar6;
    cVar10 = cVar6 + '(';
    pcVar36 = (char *)CONCAT31(uVar25,cVar10);
    puVar40 = unaff_EDI + (uint)bVar44 * -2 + 1;
    uVar13 = in((short)param_2);
    *unaff_EDI = uVar13;
    *pcVar36 = *pcVar36 + cVar10;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11((byte)((uint)puVar20 >> 8) | bRama07b0222,cVar8));
    *pcVar36 = *pcVar36 + cVar10;
    pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar38 = (uint *)((int)(unaff_ESI + (uint)bVar44 * -2 + 1) + (uint)bVar44 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar44 * -2 + 1],(short)param_2);
    bVar7 = (byte)pcVar36;
    *pcVar36 = *pcVar36 + bVar7;
    unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar40);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar25 = (undefined3)((uint)pcVar36 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar6 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*param_2;
    piVar21 = (int *)CONCAT31(uVar25,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar21 = (char)*piVar21 + cVar6;
    piVar17 = (int *)CONCAT31(uVar25,cVar6 + '\x17');
    uVar41 = in_ES;
code_r0x00402ae3:
    out(*puVar38,(short)param_2);
    unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1 + (uint)bVar44 * -2 + 1;
    out(puVar38[(uint)bVar44 * -2 + 1],(short)param_2);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
code_r0x00402ae7:
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) | (byte)unaff_EBP[-0x18],
                                          (char)unaff_EBX));
    cVar6 = (char)piVar17;
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    uVar25 = (undefined3)((uint)piVar17 >> 8);
    bVar7 = cVar6 + 2;
    puVar15 = (uint *)CONCAT31(uVar25,bVar7);
    in_ES = uVar41;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar15 = (byte)*puVar15 + bVar7;
      cVar6 = cVar6 + '}';
      puVar15 = (uint *)CONCAT31(uVar25,cVar6);
      *(byte *)puVar15 = ((byte)*puVar15 - cVar6) - (0x84 < bVar7);
      pbVar11 = (byte *)((int)param_2 + (int)puVar15);
      *pbVar11 = *pbVar11 + cVar6;
      bVar7 = POPCOUNT(*pbVar11);
      puVar38 = unaff_ESI;
code_r0x00402af9:
      in_ES = uVar41;
      unaff_EDI = puVar40;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
        bVar7 = (byte)puVar20;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
        unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
        out(*puVar38,(short)param_2);
        uVar13 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        iVar18 = CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + 'o') +
                 *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar13,bVar7);
        pcVar36 = (char *)CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '(');
        while( true ) {
          uVar13 = *param_2;
          bVar9 = (byte)puVar20;
          *(byte *)param_2 = (byte)*param_2 + bVar9;
          pcVar36 = pcVar36 + (uint)CARRY1((byte)uVar13,bVar9) + iRam73280512;
          bVar7 = (byte)pcVar36;
          *pcVar36 = *pcVar36 + bVar7;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                     CONCAT11((byte)((uint)puVar20 >> 8) | bRam7d160243,bVar9));
          bVar44 = ((uint)uStackY_28 & 0x400) != 0;
          in_AF = ((uint)uStackY_28 & 0x10) != 0;
          *pcVar36 = *pcVar36 + bVar7;
          uVar25 = (undefined3)((uint)pcVar36 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar25,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar6 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar25,cVar6) = *(char *)CONCAT31(uVar25,cVar6) + cVar6;
          iVar18 = CONCAT31(uVar25,bVar7 + 0x16);
code_r0x00402b33:
          piVar17 = (int *)(iVar18 + 0xe2802);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)puVar20 >> 8);
          uVar41 = in_ES;
          in_ES = in_SS;
          while( true ) {
            bVar9 = (byte)unaff_EBX | (byte)((uint)puVar20 >> 8);
            unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar9);
            *piVar17 = (int)(*piVar17 + (int)piVar17);
            cVar6 = (char)piVar17;
            *(byte *)param_2 = (byte)*param_2 + cVar6;
            if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar17 = (char)*piVar17 + cVar6;
            uVar13 = CONCAT31((int3)((uint)piVar17 >> 8),cVar6 + '\x13');
            puVar15 = (uint *)(uVar13 + 0x19061224 + (uint)(0x1f9edfd < uVar13));
            uVar14 = (uint)(0xe4ffffdd < uVar13 + 0xfe061202 ||
                           CARRY4(uVar13 + 0x19061224,(uint)(0x1f9edfd < uVar13)));
            uVar13 = *unaff_ESI;
            uVar1 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar1 + (int)puVar15) + uVar14);
            bVar7 = POPCOUNT(*unaff_ESI & 0xff);
            puVar38 = unaff_ESI;
            if ((SCARRY4(uVar13,(int)puVar15) != SCARRY4((int)(uVar1 + (int)puVar15),uVar14)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar15;
            *(byte *)puVar15 = (byte)*puVar15 + bVar7;
            iVar18 = CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)param_2 | (byte)*param_2;
            uVar13 = *unaff_EBX;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar9;
            pcVar36 = (char *)(CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '\x12') + 0x228b26
                               + *puVar40 + (uint)CARRY1((byte)uVar13,bVar9));
            cVar6 = bVar7 + (byte)*puVar20;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar6);
            if (SCARRY1(bVar7,(byte)*puVar20) == cVar6 < '\0') break;
            *pcVar36 = *pcVar36 + (char)pcVar36;
            cVar6 = (char)pcVar36 + '\x02';
            pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6);
            bVar7 = POPCOUNT(cVar6);
            uVar41 = in_ES;
code_r0x00402b7a:
            puVar15 = unaff_ESI;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar6;
              uVar25 = (undefined3)((uint)pcVar36 >> 8);
              pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '\x13');
              *(byte *)puVar20 = (byte)*puVar20 | (byte)param_2;
              *(byte *)puVar40 = (byte)*puVar40 | (byte)param_2;
              *param_2 = (uint)(pcVar36 + *param_2);
              uVar31 = (undefined2)((uint)unaff_EBX >> 0x10);
              uVar35 = SUB41(unaff_EBX,0);
              cVar8 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
              unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar8,uVar35));
              *pcVar36 = *pcVar36 + cVar6 + '\x13';
              piVar17 = (int *)CONCAT31(uVar25,cVar6 + -0x7a);
              uVar13 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar13,(char)puVar20) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar17 = (char)*piVar17 + cVar6 + -0x7a;
              cVar10 = cVar6 + -0x78;
              piVar17 = (int *)CONCAT31(uVar25,cVar10);
              uVar4 = uVar41;
              if ((POPCOUNT(cVar10) & 1U) != 0) break;
              *(char *)piVar17 = (char)*piVar17 + cVar10;
              pcVar36 = (char *)CONCAT31(uVar25,cVar6 + -0x65);
              *puVar20 = *puVar20 | (uint)param_2;
              *puVar40 = *puVar40 | (uint)param_2;
              pbVar11 = (byte *)((int)puVar20 + -1);
              cVar8 = cVar8 + *(byte *)((int)unaff_EBX + -0x5e);
              unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar8,uVar35));
              *pcVar36 = *pcVar36 + cVar6 + -0x65;
              bVar7 = cVar6 + 10;
              puVar38 = (uint *)CONCAT31(uVar25,bVar7);
              bVar9 = (byte)pbVar11;
              *(byte *)param_2 = (byte)*param_2 + bVar9;
              unaff_ESI = puVar15 + (uint)bVar44 * -2 + 1;
              out(*puVar15,(short)param_2);
              uVar13 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar9;
              uVar2 = (uint)CARRY1((byte)uVar13,bVar9);
              uVar13 = *param_2;
              uVar1 = *param_2;
              pbVar16 = pbVar11 + uVar1 + uVar2;
              uVar5 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar8;
              uVar14 = *param_2;
              unaff_EBP = (uint *)((uint)unaff_EBP | *puVar38);
              *(byte *)puVar38 = (char)*puVar38 + bVar7;
              puVar20 = (uint *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar16 >> 8) | bRam7d170243,
                                                  (char)pbVar16 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar11,uVar13) ||
                                                  CARRY4((uint)(pbVar11 + uVar1),uVar2))));
              bVar44 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar38 = (char)*puVar38 + bVar7;
              bVar43 = 0xfd < bVar7;
              pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar14);
code_r0x00402bd1:
              uVar13 = *unaff_EBX;
              uVar1 = *unaff_EBX;
              *unaff_EBX = (uint)((byte *)(uVar1 + (int)puVar20) + bVar43);
              bVar7 = POPCOUNT(*unaff_EBX & 0xff);
              uVar41 = in_SS;
              if ((SCARRY4(uVar13,(int)puVar20) != SCARRY4((int)(uVar1 + (int)puVar20),(uint)bVar43)
                  ) == (int)*unaff_EBX < 0) goto code_r0x00402b7a;
              cVar6 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar6;
              pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar36 = *pcVar36 + (char)pcVar36;
                pcVar36 = (char *)(CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + '\x12') |
                                  *param_2);
                *(byte *)puVar40 = (byte)*puVar40 - (char)puVar20;
                *pcVar36 = *pcVar36 + (char)pcVar36;
                puVar15 = (uint *)((int)param_2 - *unaff_ESI);
                bVar7 = (byte)unaff_EBX | (byte)((uint)puVar20 >> 8);
                cVar6 = *pcVar36;
                uVar25 = (undefined3)((uint)pcVar36 >> 8);
                pcVar36 = (char *)CONCAT31(uVar25,cVar6);
                *pcVar36 = *pcVar36 + cVar6;
                pcVar12 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar36 = *pcVar36 + cVar6;
                bVar43 = false;
                pcVar36 = (char *)(CONCAT31(uVar25,cVar6 + '\x13') | *puVar15);
                do {
                  bVar9 = (byte)puVar20;
                  bVar7 = bVar9 + (byte)unaff_ESI[(int)puVar40 * 2];
                  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7 + bVar43);
                  uVar13 = (uint)(CARRY1(bVar9,(byte)unaff_ESI[(int)puVar40 * 2]) ||
                                 CARRY1(bVar7,bVar43));
                  pcVar19 = pcVar36 + 0x1b000019 + uVar13;
                  piVar21 = (int *)((int)puVar40 * 2 + 0x40000a5);
                  *piVar21 = (int)((int)puVar20 +
                                  (uint)((char *)0xe4ffffe6 < pcVar36 ||
                                        CARRY4((uint)(pcVar36 + 0x1b000019),uVar13)) + *piVar21);
                  puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + cRam00009d7d
                                            );
                  uVar25 = (undefined3)((uint)pcVar19 >> 8);
                  bVar7 = (char)pcVar19 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar13 = CONCAT31(uVar25,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar36 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                             CONCAT11((char)((uint)pcVar19 >> 8) - in_AF,
                                                      (char)uVar13));
                  puVar38 = (uint *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar25,bVar7));
                  while( true ) {
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),
                                               (byte)puVar15 | (byte)*puVar15);
                    puVar40 = (uint *)((uint)puVar40 | (uint)unaff_ESI);
                    uVar13 = (uint)pcVar12 | (uint)unaff_ESI;
                    unaff_EBP = (uint *)((int)puVar38 + 1);
                    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_ES);
                    cVar8 = (char)(pcVar36 + 0x1b000019);
                    uVar25 = (undefined3)((uint)(pcVar36 + 0x1b000019) >> 8);
                    cVar6 = cVar8 + -0x13;
                    pcVar36 = (char *)CONCAT31(uVar25,cVar6);
                    uVar31 = (undefined2)(uVar13 >> 0x10);
                    cVar10 = (char)(uVar13 >> 8) + *(char *)(uVar13 - 0x5e);
                    unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar10,(byte)uVar13));
                    *pcVar36 = *pcVar36 + cVar6;
                    pcVar36 = (char *)(CONCAT31(uVar25,cVar8 + '\x19') | *puVar15);
                    bVar7 = (byte)pcVar36;
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      pbVar11 = (byte *)((int)puVar15 + (int)pcVar36);
                      bVar43 = CARRY1(*pbVar11,bVar7);
                      *pbVar11 = *pbVar11 + bVar7;
                      param_2 = puVar15;
                      goto code_r0x00402bd1;
                    }
                    *pcVar36 = *pcVar36 + bVar7;
                    uVar25 = (undefined3)((uint)pcVar36 >> 8);
                    pcVar12 = (char *)CONCAT31(uVar25,bVar7 + 0x6f);
                    param_2 = (uint *)((int)puVar15 + 1);
                    *pcVar12 = *pcVar12 + bVar7 + 0x6f;
                    bVar9 = (byte)uVar13 | (byte)((uint)pcVar36 >> 8);
                    pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x5c);
                    cVar10 = cVar10 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar9) + -0x5f
                                               );
                    unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar10,bVar9));
                    *pcVar36 = *pcVar36 + bVar7 + 0x5c;
                    pcVar36 = (char *)(CONCAT31(uVar25,bVar7 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)puVar20 >> 8);
                      uStackY_28 = (uint *)((uint)uStackY_28._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    uVar25 = (undefined3)((uint)pcVar36 >> 8);
                    cVar6 = (char)pcVar36 + 'o';
                    puVar15 = (uint *)((int)puVar15 + 2);
                    *(char *)CONCAT31(uVar25,cVar6) = *(char *)CONCAT31(uVar25,cVar6) + cVar6;
                    pcVar12 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                               bVar9 | (byte)((uint)pcVar36 >> 8));
                    pcVar36 = (char *)(CONCAT31(uVar25,cVar6) | 2);
                    *(byte *)((int)puVar38 + -0x62) = *(byte *)((int)puVar38 + -0x62) + 1;
                    bVar7 = (byte)pcVar36;
                    *pcVar36 = *pcVar36 + bVar7;
                    bVar43 = 0xfd < bVar7;
                    cVar6 = bVar7 + 2;
                    pcVar36 = (char *)CONCAT31(uVar25,cVar6);
                    uVar42 = in_ES;
                    if (SCARRY1(bVar7,'\x02') != cVar6 < '\0') break;
                    *pcVar36 = *pcVar36 + cVar6;
                    bVar9 = bVar7 + 10;
                    pcVar36 = (char *)CONCAT31(uVar25,bVar9);
                    *pcVar36 = *pcVar36 - cVar10;
                    cVar8 = (char)puVar20;
                    *(byte *)puVar15 = *(byte *)puVar15 + cVar8;
                    *(byte *)((int)puVar38 + -0x62) = *(byte *)((int)puVar38 + -0x62) + 1;
                    *pcVar36 = *pcVar36 + bVar9;
                    cVar6 = bVar7 + 0xc;
                    pcVar36 = (char *)CONCAT31(uVar25,cVar6);
                    if (SCARRY1(bVar9,'\x02') == cVar6 < '\0') {
                      *pcVar36 = *pcVar36 + cVar6;
                      *(byte *)puVar20 = (byte)*puVar20 - cVar10;
                      *(byte *)puVar15 = *(byte *)puVar15 + cVar8;
                      cVar6 = (bVar7 + 0x13) - (byte)puVar20[0x13];
                      pcVar36 = (char *)CONCAT31(uVar25,cVar6);
                      *pcVar36 = *pcVar36 + cVar6;
                      pcVar19 = (char *)CONCAT31(uVar25,cVar6 + *pcVar36);
                      *pcVar19 = *pcVar19 + cVar6 + *pcVar36;
                      pcVar19 = pcVar19 + *puVar20;
                      *pcVar19 = *pcVar19 + (char)pcVar19;
                      LOCK();
                      pcVar36 = *(char **)pcVar19;
                      *(char **)pcVar19 = pcVar19;
                      UNLOCK();
                      *pcVar36 = *pcVar36 + (char)pcVar36;
                      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(byte)*puVar20);
                      *pbVar11 = *pbVar11 + (byte)*puVar20;
                      goto code_r0x00402c8d;
                    }
                    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),
                                               cVar8 + *pcVar12 + (0xfd < bVar9));
                    *(byte *)puVar40 = (byte)*puVar40 - cVar10;
                    puVar38 = unaff_EBP;
                  }
                } while( true );
              }
              unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(byte *)((int)unaff_EBX + -99),(char)unaff_EBX)
                                          );
              puVar15 = unaff_ESI;
            }
            *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
            param_2 = (uint *)((int)param_2 - *puVar15);
            unaff_ESI = puVar15;
            uVar41 = in_ES;
            in_ES = uVar4;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
          pcVar36 = pcVar36 + -0x7d160243;
        }
        pcVar36 = (char *)CONCAT31(uVar25,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)puVar20;
    uVar13 = *puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + (byte)puVar15;
    *puVar40 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar13,(byte)puVar15) + *puVar40);
    puVar38 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar30 = (char)puVar20;
      cVar27 = (char)((uint)puVar20 >> 8) + (char)((uint)pbVar11 >> 8);
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(cVar27,cVar30));
      cVar6 = (char)pbVar11;
      *pbVar11 = *pbVar11 + cVar6;
      pcVar36 = (char *)((int)pbVar11 * 2 + 0x1a10000);
      cVar10 = (char)((uint)pcVar12 >> 8);
      *pcVar36 = *pcVar36 + cVar10;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      pbVar11[-0x47ffffff] = pbVar11[-0x47ffffff] + cVar10;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      bVar9 = (byte)puVar15;
      *(byte *)puVar40 = (byte)*puVar40 + bVar9;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + bVar9;
      *pbVar11 = *pbVar11 + cVar6;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar31 = (undefined2)((uint)pcVar12 >> 0x10);
      cVar10 = cVar10 + (byte)unaff_ESI[(int)pcVar12];
      pcVar36 = (char *)CONCAT22(uVar31,CONCAT11(cVar10,(char)pcVar12));
      pcVar36[(int)pbVar11] = pcVar36[(int)pbVar11] + cVar6;
      *(byte *)puVar15 = *(byte *)puVar15 - cVar10;
      *(byte *)puVar15 = *(byte *)puVar15 + cVar30;
      uVar25 = (undefined3)((uint)pbVar11 >> 8);
      bVar7 = cVar6 - *pbVar11;
      *pcVar36 = *pcVar36 + bVar9;
      *(byte *)puVar15 = *(byte *)puVar15 ^ bVar7;
      *(byte *)puVar15 = *(byte *)puVar15 + bVar7;
      *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
      uVar13 = *puVar20;
      *(byte *)puVar20 = (byte)*puVar20 + bVar9;
      cVar8 = bVar7 + *(char *)CONCAT31(uVar25,bVar7) + CARRY1((byte)uVar13,bVar9);
      pcVar12 = (char *)CONCAT22(uVar31,CONCAT11(cVar10 + (byte)puVar38[-0x18],(char)pcVar12));
      *(char *)CONCAT31(uVar25,cVar8) = *(char *)CONCAT31(uVar25,cVar8) + cVar8;
      cVar10 = cVar8 + '\x12';
      pbVar11 = (byte *)CONCAT31(uVar25,cVar10);
      cVar6 = *pcVar12;
      *pcVar12 = *pcVar12 + cVar10;
      if (SCARRY1(cVar6,cVar10) != *pcVar12 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar11;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
      *(byte *)puVar15 = *(byte *)puVar15 + cVar6;
      *pbVar11 = *pbVar11 + cVar6;
    }
    *pbVar11 = *pbVar11 + cVar10;
    pbVar11 = (byte *)CONCAT31(uVar25,cVar8 + '$');
    *pbVar11 = *pbVar11 + cVar27;
    bVar7 = *(byte *)puVar15;
    *(byte *)puVar15 = *(byte *)puVar15 + cVar30;
    uVar41 = in_ES;
    uVar42 = in_DS;
  } while (SCARRY1(bVar7,cVar30) == (char)*(byte *)puVar15 < '\0');
  do {
    cVar6 = (char)pbVar11;
    *pbVar11 = *pbVar11 + cVar6;
    uVar25 = (undefined3)((uint)pbVar11 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar15;
    bVar9 = cVar6 + 0x24;
    cVar10 = (char)((uint)pcVar12 >> 8);
    pcVar12[-0x62] = pcVar12[-0x62] + cVar10;
    *(char *)CONCAT31(uVar25,bVar9) = *(char *)CONCAT31(uVar25,bVar9) + bVar9;
    bVar7 = cVar6 + 0x2fU + (byte)*puVar20;
    cVar8 = bVar7 + (0xf4 < bVar9);
    cVar6 = cVar8 + *(char *)CONCAT31(uVar25,cVar8) +
            (CARRY1(cVar6 + 0x2fU,(byte)*puVar20) || CARRY1(bVar7,0xf4 < bVar9));
    pcVar36 = (char *)CONCAT31(uVar25,cVar6);
    *pcVar36 = *pcVar36 - (char)puVar15;
    *pcVar36 = *pcVar36 + cVar6;
    pcVar19 = (char *)((int)puVar15 - *puVar15);
    *(byte *)(unaff_ESI + (int)pcVar12) = (byte)unaff_ESI[(int)pcVar12] + cVar10;
    pcVar36[(int)unaff_EBP] = pcVar36[(int)unaff_EBP] + cVar6;
    *pcVar19 = *pcVar19 + (char)puVar20;
    pcVar36 = (char *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                               CONCAT11((char)((uint)pbVar11 >> 8) - *pcVar19,cVar6));
    uVar13 = *puVar40;
    *pcVar36 = *pcVar36 - (char)((uint)pcVar19 >> 8);
    *pcVar36 = *pcVar36 + cVar6;
    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar41);
    pbVar16 = (byte *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11(cVar10 - (byte)*unaff_ESI,(char)pcVar12));
    unaff_EBP = (uint *)((int)unaff_EBP + *(int *)(pbVar16 + (int)puVar20));
    puVar38 = (uint *)CONCAT31((int3)((uint)pcVar19 >> 8),(char)pcVar19 + (byte)uVar13);
    while( true ) {
      puVar15 = puVar38;
      uVar31 = (undefined2)((uint)pbVar16 >> 0x10);
      bVar37 = (char)((uint)pbVar16 >> 8) + pbVar16[0x18];
      *pcVar36 = *pcVar36 + (char)pcVar36;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
      cVar6 = (char)puVar20;
      *(byte *)puVar15 = (byte)*puVar15 + cVar6;
      uVar13 = *unaff_ESI;
      bVar34 = (byte)((uint)puVar20 >> 8);
      bVar7 = *pbVar11;
      pbVar11 = pbVar11 + (uint)CARRY1(bVar34,*pbVar11) + *(int *)pbVar11;
      *(byte *)puVar15 = (byte)*puVar15 + cVar6;
      cVar8 = ((char)pbVar16 - (byte)uVar13) - (byte)*unaff_ESI;
      bVar9 = *(byte *)((int)puVar40 + 0x1a);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11(bVar34 + bVar7 + bVar9 | (byte)*puVar15,cVar6));
      pbVar11 = pbVar11 + *puVar15;
      if ((POPCOUNT((uint)pbVar11 & 0xff) & 1U) != 0) break;
      *pbVar11 = *pbVar11 + (char)pbVar11;
      bVar7 = (char)pbVar11 + 0x6f;
      pcVar36 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
      pcVar12 = (char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar37,(char)pbVar16)) >> 8),cVar8
                                 ) + -1);
      *pcVar36 = *pcVar36 + bVar7;
      *pcVar36 = *pcVar36 + bVar7;
      *pcVar12 = *pcVar12 + (byte)puVar15;
      *(byte *)((int)pcVar36 * 2) = *(byte *)((int)pcVar36 * 2) ^ bVar7;
      uVar3 = *(undefined6 *)pcVar36;
      uVar41 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar36 = (char *)uVar3;
      *pcVar36 = *pcVar36 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar36 = (char *)((uint)pcVar36 | 0x73110008);
      bVar37 = (byte)((uint)pcVar12 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 - bVar37;
      *(byte *)puVar15 = (byte)*puVar15 + cVar6;
      puVar38 = unaff_ESI + (uint)bVar44 * -2 + 1;
      out(*unaff_ESI,(short)puVar15);
      *pcVar36 = *pcVar36;
      cVar6 = (char)pcVar36;
      *pcVar36 = *pcVar36 + cVar6;
      bVar7 = *(byte *)((int)unaff_EBP + -0x5a);
      uVar31 = (undefined2)((uint)pcVar12 >> 0x10);
      cVar8 = (char)pcVar12;
      *pcVar36 = *pcVar36 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar13 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      puVar20 = (uint *)(uVar13 | 0x73110000);
      unaff_ESI = puVar38 + (uint)bVar44 * -2 + 1;
      out(*puVar38,(short)puVar15);
      *(byte *)puVar20 = (byte)*puVar20;
      bVar34 = (byte)puVar15 | (byte)*puVar40;
      puVar38 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar34);
      *(byte *)puVar20 = (byte)*puVar20 + cVar6;
      pcVar36 = (char *)(uVar13 | 0x7b1f1609);
      bVar44 = (uVar42 & 0x400) != 0;
      *(uint *)((int)puVar40 + -0x7d) = *(uint *)((int)puVar40 + -0x7d) | (uint)unaff_EBP;
      bVar9 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar9;
      bVar37 = bVar37 | bVar7 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar16 = (byte *)CONCAT22(uVar31,CONCAT11(bVar37,cVar8));
      *pcVar36 = *pcVar36 + bVar9;
      uVar25 = (undefined3)((uint)pcVar36 >> 8);
      unaff_ESI[(int)puVar40 * 2] =
           (uint)((int)puVar38 + (uint)(0xd2 < bVar9) + unaff_ESI[(int)puVar40 * 2]);
      bVar7 = bVar9 + 0x2d ^ *(byte *)CONCAT31(uVar25,bVar9 + 0x2d);
      pcVar36 = (char *)CONCAT31(uVar25,bVar7);
      uVar13 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
      uVar42 = uVar41;
      if (CARRY1((byte)uVar13,bVar7)) {
        *pcVar36 = *pcVar36 + bVar7;
        bVar7 = bVar7 | pcVar36[0x4000019];
        pcVar36 = (char *)CONCAT31(uVar25,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar36 = *pcVar36 + bVar7;
          piVar21 = (int *)CONCAT31(uVar25,bVar7 + 0x28);
          *piVar21 = (int)piVar21 + (uint)(0xd7 < bVar7) + *piVar21;
          bVar28 = (byte)((uint6)uVar3 >> 8);
          *pbVar16 = *pbVar16 + bVar28;
          uVar32 = CONCAT11((byte)((uint)puVar15 >> 8) | bVar37,bVar34);
          puVar38 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),uVar32);
          uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar41);
          bVar34 = in(uVar32);
          pbVar11 = (byte *)CONCAT31(uVar25,bVar34);
          bVar9 = *pbVar11;
          bVar43 = SCARRY1(*pbVar11,bVar34);
          *pbVar11 = *pbVar11 + bVar34;
          bVar7 = *pbVar11;
          puVar15 = unaff_ESI;
          in_SS = uVar41;
          if (!CARRY1(bVar9,bVar34)) goto code_r0x00402e19;
          *pbVar11 = *pbVar11 + bVar34;
          bVar28 = bVar28 | *pbVar11;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar28,cVar6));
          pcVar36 = (char *)CONCAT31(uVar25,bVar34 + *pbVar11);
          *pbVar16 = *pbVar16 + bVar28;
        }
        uVar25 = (undefined3)((uint)pcVar36 >> 8);
        bVar9 = (byte)pcVar36 | (byte)*puVar38;
        pbVar11 = (byte *)CONCAT31(uVar25,bVar9);
        puVar15 = unaff_ESI + (uint)bVar44 * -2 + 1;
        out(*unaff_ESI,(short)puVar38);
        LOCK();
        bVar7 = *pbVar11;
        *pbVar11 = bVar9;
        UNLOCK();
        *(byte *)puVar38 = (byte)*puVar38 + (char)puVar20;
        piVar21 = (int *)(CONCAT31(uVar25,bVar7) + -0x1b7e07);
        *(byte *)puVar38 = (byte)*puVar38 + (char)puVar20;
        iVar18 = (int)puVar20 - *(int *)pbVar16;
        bVar7 = *(byte *)((int)puVar40 + -0x7a);
        uVar32 = (undefined2)((uint)iVar18 >> 0x10);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        bVar9 = (char)((uint)iVar18 >> 8) + bVar7 | *(byte *)((int)puVar40 + 0x17);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        uVar25 = (undefined3)(CONCAT22(uVar32,CONCAT11(bVar9,(byte)iVar18)) >> 8);
        bVar7 = (byte)iVar18 | *pbVar16;
        puVar20 = (uint *)CONCAT31(uVar25,bVar7);
        pbVar11 = (byte *)((int)piVar21 + *piVar21);
        puVar39 = puVar15;
        if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e0a;
        *(byte *)puVar20 = (byte)*puVar20 + bVar7;
        *(byte **)pbVar16 = (byte *)(*(int *)pbVar16 + (int)puVar38);
        piVar21 = (int *)CONCAT31(uVar25,bVar7 + 0x27);
        puVar20 = (uint *)CONCAT22(uVar32,CONCAT11(bVar9 + *(byte *)((int)puVar40 + -0x79),bVar7));
        *(byte *)piVar21 = (char)*piVar21 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar12 = (char *)CONCAT22(uVar31,CONCAT11(bVar37 | *(byte *)((int)unaff_EBP + -0x62),cVar8));
  } while( true );
code_r0x00402dff:
  pbVar11 = (byte *)CONCAT22((short)((uint)piVar21 >> 0x10),
                             CONCAT11((byte)((uint)piVar21 >> 8) |
                                      *(byte *)((int)puVar38 + 0x2170411),(byte)piVar21));
  puVar39 = puVar15 + (uint)bVar44 * -2 + 1;
  out(*puVar15,(short)puVar38);
  *pbVar11 = (byte)piVar21;
  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar20;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar11;
  *pbVar11 = *pbVar11 - cVar8;
  *pbVar11 = *pbVar11 + (char)pbVar11;
  bVar43 = false;
  bVar7 = (byte)((uint)puVar20 >> 8) | bRam052b0603;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,(char)puVar20));
  puVar15 = puVar39;
code_r0x00402e19:
  if (bVar7 == 0 || bVar43 != (char)bVar7 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cRam89280411;
  piVar21 = (int *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                            CONCAT11((byte)((uint)pbVar11 >> 8) |
                                     *(byte *)((int)puVar38 + 0x7190411),cRam89280411));
  *(char *)piVar21 = (char)*piVar21 + cRam89280411;
  cVar6 = (char)puVar20;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar38,cVar6));
  puVar15 = (uint *)((int)puVar15 + *piVar21);
  pbVar11 = (byte *)((int)piVar21 + *piVar21);
  bVar9 = (byte)pbVar11;
  *pbVar11 = *pbVar11 + bVar9;
  *(byte *)puVar15 = (byte)*puVar15 + cVar6;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar9;
  *(byte **)pbVar11 = (byte *)((int)unaff_EBP + (uint)CARRY1(bVar7,bVar9) + *(int *)pbVar11);
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),*pbVar11);
  *(byte *)puVar38 = (byte)*puVar38 + cVar6;
  puVar39 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(byte)puVar38 | (byte)*puVar38);
  pbVar11 = (byte *)((int)puVar39 + -0x43);
  *pbVar11 = *pbVar11 + (char)((uint)puVar38 >> 8);
  puVar38 = puVar39;
  puVar39 = puVar40;
  uVar42 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar40 = puVar39;
  in_SS = in_ES;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e6e;
  iVar18 = *(int *)((int)piVar21 + *piVar21);
  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar20;
  piVar21 = (int *)(iVar18 + -0x8c6f);
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | *(byte *)((int)puVar38 + -0x3f),
                                      (char)puVar38));
  pbVar22 = (byte *)((int)piVar21 + *piVar21);
  pbVar11 = pbVar22;
  puVar40 = uStackY_28;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar38,(char)puVar20));
  puVar39 = puVar15 + (uint)bVar44 * -2 + 1;
  out(*puVar15,(short)puVar38);
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(char)puVar38 + (byte)*puVar40);
  puVar15 = puVar39 + (uint)bVar44 * -2 + 1;
  out(*puVar39,(short)puVar38);
  uVar42 = in_ES;
  in_SS = uVar41;
code_r0x00402e6e:
  in_ES = uVar42;
  uVar25 = (undefined3)((uint)puVar38 >> 8);
  cVar6 = (char)puVar38 + (byte)*puVar40;
  puVar39 = puVar15 + (uint)bVar44 * -2 + 1;
  out(*puVar15,(short)CONCAT31(uVar25,cVar6));
  puVar38 = (uint *)CONCAT31(uVar25,cVar6 + (byte)*puVar40);
  puVar15 = puVar39 + (uint)bVar44 * -2 + 1;
  out(*puVar39,(short)puVar38);
  pbVar11 = (byte *)0x0;
  puVar39 = puVar40;
code_r0x00402e81:
  puVar40 = puVar39;
  bVar9 = (char)pbVar11 - *pbVar11;
  iVar18 = CONCAT31((int3)((uint)pbVar11 >> 8),bVar9);
  *pbVar16 = *pbVar16 + (char)puVar38;
  pbVar22 = (byte *)(iVar18 * 2);
  *pbVar22 = *pbVar22 ^ bVar9;
  pbVar22 = (byte *)(int)(short)iVar18;
  *pbVar22 = *pbVar22 + bVar9;
  *(byte *)puVar40 = (byte)*puVar40 + (byte)puVar20;
  bVar7 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar9;
  *(byte **)(pbVar16 + -0x73) =
       (byte *)((int)puVar15 + (uint)CARRY1(bVar7,bVar9) + *(int *)(pbVar16 + -0x73));
  *pbVar22 = *pbVar22 + bVar9;
  bVar7 = (byte)puVar20 | (byte)*puVar38;
  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7);
  puVar39 = puVar15;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar22 = *pbVar22 + bVar9;
  pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar11 >> 8),bVar9 + 0x2d);
  puVar15[(int)puVar40 * 2] =
       (uint)((int)puVar38 + (uint)(0xd2 < bVar9) + puVar15[(int)puVar40 * 2]);
  puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
  do {
    uVar13 = *puVar15;
    bVar7 = (byte)pbVar11;
    *(byte *)puVar15 = (byte)*puVar15 + bVar7;
    if (!CARRY1((byte)uVar13,bVar7)) break;
    *pbVar11 = *pbVar11 + bVar7;
    bVar7 = bVar7 | pbVar11[0x400001a];
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar22 = *pbVar22 + (byte)pbVar22;
      uVar25 = (undefined3)((uint)pbVar22 >> 8);
      bVar7 = (byte)pbVar22 | pbVar22[0x400001b];
      pcVar36 = (char *)CONCAT31(uVar25,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar13 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + (byte)puVar20;
        *(char *)((int)pcVar36 * 2) =
             *(char *)((int)pcVar36 * 2) - CARRY1((byte)uVar13,(byte)puVar20);
        bVar43 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar22 = *pbVar22 + bVar7;
      puVar39 = puVar15;
code_r0x00402eb4:
      uVar25 = (undefined3)((uint)pbVar22 >> 8);
      bVar7 = (char)pbVar22 + 0x6f;
      pcVar36 = (char *)CONCAT31(uVar25,bVar7);
      *(uint **)pcVar36 = puStackY_44;
      uVar13 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + (char)puVar20;
      puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
      in_DS = uVar41;
      if ((byte)*puVar38 != 0 && SCARRY1((byte)uVar13,(char)puVar20) == (char)(byte)*puVar38 < '\0')
      {
        *pcVar36 = *pcVar36 + bVar7;
        bVar9 = (char)pbVar22 + 0x9c;
        pbVar22 = (byte *)CONCAT31(uVar25,bVar9);
        puVar39[(int)puVar40 * 2] =
             (uint)((int)puVar38 + (uint)(0xd2 < bVar7) + puVar39[(int)puVar40 * 2]);
        puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
        uVar13 = *puVar39;
        *(byte *)puVar39 = (byte)*puVar39 + bVar9;
        puVar15 = puVar39;
        if (CARRY1((byte)uVar13,bVar9)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar15 = puVar39 + (uint)bVar44 * -2 + 1;
      out(*puVar39,(short)puVar38);
    }
    cVar6 = (char)pcVar36;
    *pcVar36 = *pcVar36 + cVar6;
    uVar25 = (undefined3)((uint)pcVar36 >> 8);
    bVar7 = cVar6 + 0x6f;
    pcVar36 = (char *)CONCAT31(uVar25,bVar7);
    *(uint **)pcVar36 = puStackY_44;
    uVar13 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + (byte)puVar20;
    puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
    *(byte *)(puVar15 + 7) = ((byte)puVar15[7] - bVar37) - CARRY1((byte)uVar13,(byte)puVar20);
    *pcVar36 = *pcVar36 + bVar7;
    bVar9 = cVar6 + 0x9c;
    pcVar36 = (char *)CONCAT31(uVar25,bVar9);
    puVar15[(int)puVar40 * 2] =
         (uint)((int)puVar38 + (uint)(0xd2 < bVar7) + puVar15[(int)puVar40 * 2]);
    uVar13 = *puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + bVar9;
    if (!CARRY1((byte)uVar13,bVar9)) goto code_r0x00402e7e;
    *pcVar36 = *pcVar36 + bVar9;
    bVar9 = bVar9 | pcVar36[0x400001c];
    pbVar11 = (byte *)CONCAT31(uVar25,bVar9);
    in_SS = uVar41;
    if ((char)bVar9 < '\x01') goto code_r0x00402f16;
    *pbVar11 = *pbVar11 + bVar9;
    pcVar36 = (char *)CONCAT31(uVar25,bVar9 + 0x6f);
    while( true ) {
      *(uint **)pcVar36 = puStackY_44;
      uVar13 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + (byte)puVar20;
      *(uint *)((int)puVar15 + 0x1d) =
           (*(int *)((int)puVar15 + 0x1d) - (int)puVar40) - (uint)CARRY1((byte)uVar13,(byte)puVar20)
      ;
      bVar7 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar7;
      bVar9 = bVar7 + 0x2d;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),bVar9);
      puVar15[(int)puVar40 * 2] =
           (uint)((int)puVar38 + (uint)(0xd2 < bVar7) + puVar15[(int)puVar40 * 2]);
      puStackY_44 = (uint *)CONCAT22((short)((uint)puStackY_44 >> 0x10),uVar41);
      uVar13 = *puVar15;
      *(byte *)puVar15 = (byte)*puVar15 + bVar9;
      if (!CARRY1((byte)uVar13,bVar9)) break;
      *pbVar11 = *pbVar11 + bVar9;
code_r0x00402f16:
      bVar7 = (byte)pbVar11 | pbVar11[0x400001d];
      puVar23 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
      puVar39 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = puVar39;
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
        uVar25 = (undefined3)((uint)puVar23 >> 8);
        cVar6 = (char)puVar23 + 'o';
        puVar39 = (uint *)CONCAT31(uVar25,cVar6);
        *puVar39 = (uint)puStackY_44;
        cVar10 = (char)puVar20;
        *(byte *)puVar38 = (byte)*puVar38 + cVar10;
        puStackY_44 = (uint *)CONCAT22(puStackY_44._2_2_,uVar41);
        bVar7 = (byte)((uint)puVar38 >> 8);
        bVar43 = bVar7 < (byte)*puVar15;
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar15,(char)puVar38));
        if (bVar43) break;
        bVar43 = CARRY4((uint)puVar39,*puVar39);
        puVar23 = (uint *)((int)puVar39 + *puVar39);
        if (!SCARRY4((int)puVar39,*puVar39)) {
          bVar43 = CARRY4((uint)unaff_EBP,*puVar23);
          unaff_EBP = (uint *)((int)unaff_EBP + *puVar23);
        }
        *puVar23 = (*puVar23 - (int)puVar23) - (uint)bVar43;
        *(byte *)puVar38 = (byte)*puVar38 + cVar10;
        puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                   CONCAT11((char)((uint)puVar20 >> 8) + (byte)*puVar38,
                                            cVar10 - (byte)*puVar38));
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
code_r0x00402f3b:
        cVar10 = (char)puVar38;
        *pbVar16 = *pbVar16 + cVar10;
        bVar7 = (byte)puVar23;
        *(byte *)((int)puVar23 * 2) = *(byte *)((int)puVar23 * 2) ^ bVar7;
        *(byte *)puVar23 = (byte)*puVar23 + bVar7;
        *(byte *)puVar23 = (byte)*puVar23 + cVar10;
        uVar13 = *puVar23;
        *(byte *)puVar23 = (byte)*puVar23 + bVar7;
        *puVar38 = (uint)((int)puVar23 + (uint)CARRY1((byte)uVar13,bVar7) + *puVar38);
        pcVar36 = (char *)((uint)puVar23 | *puVar40);
        uVar25 = (undefined3)((uint)pcVar36 >> 8);
        cVar6 = (char)pcVar36 + *pcVar36;
        pcVar36 = (char *)CONCAT31(uVar25,cVar6);
        *pcVar36 = *pcVar36 + cVar6;
        cVar6 = cVar6 + *pcVar36;
        piVar21 = (int *)CONCAT31(uVar25,cVar6);
        *(char *)piVar21 = (char)*piVar21 + cVar6;
        iVar18 = LocalDescriptorTableRegister();
        *piVar21 = iVar18;
        bVar7 = *pbVar16;
        bVar29 = (byte)((uint)puVar20 >> 8);
        *pbVar16 = *pbVar16 + bVar29;
        iVar18 = *piVar21;
        uVar32 = (undefined2)((uint)puVar20 >> 0x10);
        bVar28 = (byte)puVar20;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        puVar20 = puVar15 + (uint)bVar44 * -2 + 1;
        out(*puVar15,(short)puVar38);
        *(byte *)puVar20 = (byte)*puVar20 + cVar6;
        bVar9 = *pbVar16;
        *(byte *)puVar38 = (byte)*puVar38 - bVar37;
        *(byte *)puVar20 = (byte)*puVar20 + cVar6;
        puVar39 = puVar20 + (uint)bVar44 * -2 + 1;
        out(*puVar20,(short)puVar38);
        *(byte *)puVar39 = (byte)*puVar39 + cVar6;
        bVar34 = *pbVar16;
        *(uint *)((int)puVar38 + -0x23) = *(uint *)((int)puVar38 + -0x23) & (uint)puVar39;
        puVar24 = (ushort *)((int)piVar21 + *piVar21);
        if (!SCARRY4((int)piVar21,*piVar21)) {
          *puVar24 = in_DS;
        }
        *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
        uVar33 = CONCAT11((char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + -0x15),cVar10);
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),uVar33);
        puVar23 = (uint *)((int)puVar24 + *(int *)puVar24);
        if (!SCARRY4((int)puVar24,*(int *)puVar24)) {
          *(ushort *)puVar23 = in_DS;
        }
        cVar6 = (char)puVar23;
        *(byte *)puVar23 = (byte)*puVar23 + cVar6;
        cVar30 = ((bVar29 - (char)iVar18) - CARRY1(bVar7,bVar29) | bVar9 | bVar34) + (byte)*puVar23;
        puVar20 = (uint *)CONCAT22(uVar32,CONCAT11(cVar30,bVar28));
        uVar13 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar28;
        if (CARRY1((byte)uVar13,bVar28)) {
          *(byte *)puVar23 = (byte)*puVar23 + cVar6;
          bVar7 = *(byte *)((int)puVar38 + 6);
          *(byte *)puVar38 = (byte)*puVar38 + bVar28;
          bVar9 = (cVar30 - (byte)*puVar39) + cRam14730307;
          *(byte *)puVar23 = (byte)*puVar23 + cVar6;
          bVar7 = bVar37 | bVar7 | *(byte *)((int)puVar38 + 0x2a);
          uVar13 = *puVar23;
          pbVar11 = (byte *)((int)puVar23 + (uint)CARRY1(bVar9,(byte)*puVar23) + *puVar23);
          *(byte *)puVar38 = (byte)*puVar38 + bVar28;
          cVar6 = cVar8 - (byte)*puVar39;
          cVar8 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar7,cVar8)) >> 8),
                                             cVar6) + 0x1e);
          *pbVar11 = *pbVar11 + (char)pbVar11;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          bVar7 = (char)pbVar11 + 0x2aU & (byte)*puVar38;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar6)) + 0x1f);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar6)) + 0x20);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar6)) + 0x21);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar6)) + 0x22);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          bVar9 = bVar9 + (byte)uVar13 + *pcVar36;
          uVar26 = CONCAT22(uVar32,CONCAT11(bVar9,bVar28));
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar6)) + 0x25);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          pcVar12 = (char *)CONCAT22(uVar31,CONCAT11(cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(
                                                  cVar8,cVar6)) + 0x26),cVar6));
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          cVar6 = bVar7 + 0x2a;
          pcVar36 = (char *)CONCAT31(uVar25,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar36 = *pcVar36 + cVar6;
            pbVar11 = (byte *)(CONCAT31(uVar25,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar11;
            bVar34 = (byte)pbVar11;
            *pbVar11 = *pbVar11 + bVar34;
            uVar25 = (undefined3)((uint)pbVar11 >> 8);
            if (!CARRY1(bVar7,bVar34)) {
              if (!SCARRY1(bVar34,'\0')) {
                *pbVar11 = *pbVar11 + bVar34;
                uVar26 = CONCAT22(uVar32,CONCAT11(bVar9 | (byte)*puVar38,bVar28));
                bVar34 = bVar34 & (byte)*puVar38;
                *(char *)CONCAT31(uVar25,bVar34) = *(char *)CONCAT31(uVar25,bVar34) + bVar34;
                pcVar36 = (char *)CONCAT31(uVar25,bVar34 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar36 = (char *)CONCAT31(uVar25,bVar34 + *pcVar12);
              if (SCARRY1(bVar34,*pcVar12) != (char)(bVar34 + *pcVar12) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar34 + *pcVar12;
            pbVar11 = (byte *)CONCAT31(uVar25,bVar7);
            if (SCARRY1(bVar34,*pcVar12) == (char)bVar7 < '\0') {
              pcVar36 = (char *)CONCAT22(uVar32,CONCAT11(bVar9 | (byte)*puVar38,bVar28));
              *pcVar12 = *pcVar12 + cVar10;
              *(byte *)puVar38 = (byte)*puVar38 ^ bVar7;
              *(char *)((int)pbVar11 * 2) = *(char *)((int)pbVar11 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar36 = *pcVar36 + (char)pcVar36;
            uVar25 = (undefined3)((uint)pcVar36 >> 8);
            bVar7 = (char)pcVar36 + 0x2aU & (byte)*puVar38;
            *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
            pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
            *pcVar36 = *pcVar36 + bVar7 + 0x2a;
            pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x54 & (byte)*puVar38);
code_r0x00403072:
            cVar6 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar6;
            uVar25 = (undefined3)((uint)pcVar36 >> 8);
            pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '*');
            *pcVar36 = *pcVar36 + cVar6 + '*';
            bVar7 = cVar6 + 0x54U & (byte)*puVar38;
            *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,in_ES);
            uVar26 = CONCAT22((short)((uint)uVar26 >> 0x10),
                              CONCAT11((char)((uint)uVar26 >> 8) +
                                       *(char *)CONCAT31(uVar25,bVar7 + 0x2a),(char)uVar26));
            *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar10;
            pcVar36 = pcStackY_7c;
code_r0x0040309a:
            cVar6 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar6;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,uVar41);
            *pcVar36 = *pcVar36 + cVar6;
            pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6 + 0x2aU & (byte)*puVar38);
          }
          cVar6 = (char)pbVar11;
          *pbVar11 = *pbVar11 + cVar6;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          cVar8 = cVar6 + '*';
          pcVar36 = (char *)CONCAT31(uVar25,cVar8);
          *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar10;
          *pcVar36 = *pcVar36 + cVar8;
          cVar30 = (char)pcStackY_7c - (byte)*puVar39;
          pcVar12 = (char *)CONCAT22((short)((uint)pcStackY_7c >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_7c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_7c >> 8),
                                                                 cVar30) + 0x34),cVar30));
          *pcVar36 = *pcVar36 + cVar8;
          bVar7 = cVar6 + 0x54U & (byte)*puVar38;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pbVar11 = (byte *)CONCAT31(uVar25,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar26 >> 8);
          pcVar36 = (char *)CONCAT22((short)((uint)uVar26 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar11,(char)uVar26));
          pbVar11 = pbVar11 + (uint)CARRY1(bVar7,*pbVar11) + *(int *)pbVar11;
          *(byte *)puVar38 = (byte)*puVar38 + (char)uVar26;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          cVar6 = (byte)pbVar11 - *pbVar11;
          piVar21 = (int *)CONCAT31(uVar25,cVar6);
          puVar39 = (uint *)((int)puVar39 + (uint)((byte)pbVar11 < *pbVar11) + *piVar21);
          cVar6 = cVar6 + (char)*piVar21;
          pbVar11 = (byte *)CONCAT31(uVar25,cVar6);
          *pbVar11 = *pbVar11 + cVar6;
code_r0x004030df:
          *pcVar36 = *pcVar36 + cVar10;
          bVar7 = *pbVar11;
          bVar9 = (byte)pbVar11;
          *pbVar11 = *pbVar11 + bVar9;
          *(byte **)(pcVar12 + -0x41) =
               (byte *)((int)puVar39 + (uint)CARRY1(bVar7,bVar9) + *(int *)(pcVar12 + -0x41));
          *pbVar11 = *pbVar11 + bVar9;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          bVar9 = bVar9 | (byte)*puVar39;
          *(char *)CONCAT31(uVar25,bVar9) = *(char *)CONCAT31(uVar25,bVar9) + bVar9;
          pcVar36 = (char *)CONCAT31(uVar25,bVar9 + 0x7b);
          *pcVar36 = *pcVar36 + bVar9 + 0x7b;
          pbVar11 = (byte *)((int)puVar39 + CONCAT31(uVar25,bVar9 - 8) + -1);
          *pbVar11 = *pbVar11 + (bVar9 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar15 = puVar39 + (uint)bVar44 * -2 + 1;
        out(*puVar39,uVar33);
        puVar39 = (uint *)((int)unaff_EBP + 1);
        puStackY_44 = unaff_EBP;
      }
      bVar7 = cVar6 - bVar43;
      pbVar11 = (byte *)((int)puVar15 + (int)puVar40 * 2);
      bVar43 = CARRY1(*pbVar11,bVar7);
      *pbVar11 = *pbVar11 + bVar7;
code_r0x00402ef9:
      pcVar36 = (char *)CONCAT31(uVar25,bVar7 - bVar43);
      pbVar11 = (byte *)((int)puVar40 + (int)unaff_EBP * 2);
      *pbVar11 = *pbVar11 + (bVar7 - bVar43);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar38;
  puVar39 = puVar38 + 0x2828000;
  bVar7 = (byte)puVar20;
  bVar43 = (byte)*puVar39 < bVar7;
  *(byte *)puVar39 = (byte)*puVar39 - bVar7;
  bVar7 = (byte)pbVar11 + *pbVar11;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7 + bVar43);
  puVar39 = puVar40;
  uVar42 = in_ES;
  if (CARRY1((byte)pbVar11,*pbVar11) || CARRY1(bVar7,bVar43)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar36 = *pcVar36 + bVar9;
  uVar42 = in_ES;
  in_SS = uVar41;
  goto code_r0x00402e6e;
}


