/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040286a
 * Raw Name    : get_Key
 * Demangled   : get_Key
 * Prototype   : char * get_Key(uint * param_1, undefined4 param_2)
 * Local Vars  : param_1, param_2, pcStackY_78, pcStackY_40, puStackY_2c, puStackY_28, uStackY_24, pcStack_4, uVar1, uVar2, uVar3, uVar4, uVar5, bVar6, cVar7, cVar8, cVar9, in_EAX, pbVar10, pcVar11, uVar12, uVar13, puVar14, pbVar15, piVar16, iVar17, pcVar18, pcVar19, piVar20, pbVar21, puVar22, uVar23, extraout_ECX, extraout_ECX_00, uVar24, bVar25, cVar26, bVar27, bVar28, cVar29, uVar30, uVar31, uVar32, puVar33, bVar34, uVar35, unaff_EBX, pcVar36, puVar37, bVar38, unaff_EBP, unaff_ESI, puVar39, unaff_EDI, puVar40, in_ES, uVar41, uVar42, in_CS, in_SS, in_DS, in_GS_OFFSET, bVar43, in_AF, in_TF, in_IF, bVar44, bVar45, in_NT, uVar46
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

char * __fastcall get_Key(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined4 in_EAX;
  undefined3 uVar23;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  int *piVar20;
  byte *pbVar21;
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
  undefined2 uVar32;
  byte bVar34;
  uint *puVar33;
  undefined1 uVar35;
  byte bVar38;
  int unaff_EBX;
  char *pcVar36;
  uint *puVar37;
  char *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar39;
  uint *unaff_EDI;
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
  byte in_TF;
  byte in_IF;
  bool bVar44;
  bool bVar45;
  byte in_NT;
  undefined8 uVar46;
  char *pcStackY_78;
  char *pcStackY_40;
  uint *puStackY_2c;
  uint *puStackY_28;
  undefined4 uStackY_24;
  char *pcStack_4;
  
  uVar46 = CONCAT44(param_2,in_EAX);
  bVar44 = false;
  do {
    puVar33 = (uint *)((ulonglong)uVar46 >> 0x20);
                    /* .NET CLR Managed Code */
    iVar17 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                      CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x12),
                               (char)unaff_EBX));
    *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
    uVar23 = (undefined3)((ulonglong)uVar46 >> 8);
    bVar6 = (char)uVar46 + 0x2aU & (byte)*puVar33;
    pcVar36 = (char *)CONCAT31(uVar23,bVar6);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x12));
    *pcVar36 = *pcVar36 + bVar6;
    puVar14 = (uint *)CONCAT31(uVar23,bVar6 + 0x2a);
    pcStack_4 = (char *)(uint)in_DS;
get_Value:
    cVar7 = *(char *)(iVar17 + 0x13);
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
    uVar23 = (undefined3)((uint)puVar14 >> 8);
    bVar6 = (char)puVar14 + 0x2aU & (byte)*puVar33;
    pcVar36 = (char *)CONCAT31(uVar23,bVar6);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x13));
    *pcVar36 = *pcVar36 + bVar6;
    pbVar10 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
    bVar6 = (byte)((uint)param_1 >> 8);
    bVar25 = bVar6 + *pbVar10;
    pbVar10 = pbVar10 + (uint)CARRY1(bVar6,*pbVar10) + *(int *)pbVar10;
    *(byte *)puVar33 = (byte)*puVar33 + (char)param_1;
    puVar37 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar17 >> 0x10),
                                               CONCAT11((char)((uint)iVar17 >> 8) + cVar7,
                                                        (char)iVar17)) >> 8),
                               (char)iVar17 - (byte)*unaff_ESI);
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11(bVar25 + *pbVar10,(char)param_1));
    pbVar10 = pbVar10 + (uint)CARRY1(bVar25,*pbVar10) + *(int *)pbVar10;
    uVar41 = in_DS;
code_r0x00402898:
    *(byte *)puVar33 = (byte)*puVar33 + (char)param_1;
    bVar6 = (byte)puVar33;
    uVar30 = CONCAT11((char)((uint)puVar33 >> 8) - (byte)*unaff_ESI,bVar6);
    pbVar15 = (byte *)CONCAT22((short)((uint)puVar33 >> 0x10),uVar30);
    pcVar36 = (char *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((char)((uint)puVar37 >> 8) + (byte)puVar37[-0x19],
                                        (char)puVar37));
    *pbVar10 = *pbVar10 + (char)pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + '\x03');
    puVar33 = unaff_ESI;
    do {
      unaff_ESI = puVar33 + 1;
      out(*puVar33,uVar30);
      pcVar36 = pcVar36 + -1;
      bVar25 = (byte)pbVar10;
      *pbVar10 = *pbVar10 + bVar25;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *pbVar15,(char)param_1));
      *pbVar10 = *pbVar10 + bVar25;
      *pcVar36 = *pcVar36 + bVar6;
      *(byte *)((int)pbVar10 * 2) = *(byte *)((int)pbVar10 * 2) ^ bVar25;
      *pbVar10 = *pbVar10 + bVar25;
      *pbVar10 = *pbVar10 | bVar25;
      bVar43 = CARRY1((byte)*param_1,bVar6);
      *(byte *)param_1 = (byte)*param_1 + bVar6;
      cVar7 = bVar25 + 10 + bVar43;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar7);
      puVar33 = unaff_ESI;
    } while (bVar25 < 0xf6 && !CARRY1(bVar25 + 10,bVar43));
    *pbVar10 = *pbVar10 + cVar7;
    pcVar11 = (char *)((uint)pbVar10 | *unaff_EDI);
    puVar37 = (uint *)CONCAT22((short)((uint)pcVar36 >> 0x10),
                               CONCAT11((char)((uint)pcVar36 >> 8) + unaff_EBP[-100],(char)pcVar36))
    ;
    *pcVar11 = *pcVar11 + (char)pcVar11;
    bVar6 = (char)pcVar11 + 7;
    uVar46 = CONCAT44(pbVar15,CONCAT31((int3)((uint)pcVar11 >> 8),bVar6));
code_r0x004028c8:
    puVar33 = (uint *)((ulonglong)uVar46 >> 0x20);
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
      puVar14 = (uint *)CONCAT31((int3)((ulonglong)uVar46 >> 8),(char)uVar46 + '-');
      unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)puVar33 + 0x3b));
      bVar43 = CARRY4(*puVar14,(uint)puVar14);
      uVar12 = *puVar14;
      *puVar14 = (uint)(*puVar14 + (int)puVar14);
      if (SCARRY4(uVar12,(int)puVar14)) {
        bVar43 = CARRY4(*puVar14,(uint)puVar14);
        bVar45 = SCARRY4(*puVar14,(int)puVar14);
        *puVar14 = (uint)(*puVar14 + (int)puVar14);
        bVar6 = POPCOUNT(*puVar14 & 0xff);
        if (bVar45) goto code_r0x004029be;
        goto code_r0x0040294c;
      }
      do {
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + bVar43);
        *(byte *)puVar33 = (byte)*puVar33 + (char)param_1;
        bVar43 = (POPCOUNT((byte)*puVar33) & 1U) == 0;
        if (bVar43) goto code_r0x004028e2;
code_r0x004028db:
        if (!bVar43) {
          iVar17 = CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 - (byte)*unaff_ESI);
          goto get_Value;
        }
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'r');
        pcStack_4 = unaff_EBP;
code_r0x004028e2:
        uVar12 = *puVar14;
        *puVar14 = (uint)(*puVar14 + (int)puVar14);
        if (SCARRY4(uVar12,(int)puVar14)) {
          if (*puVar14 == 0 || SCARRY4(uVar12,(int)puVar14) != (int)*puVar14 < 0)
          goto code_r0x0040296d;
          goto code_r0x00402957;
        }
        puVar37 = (uint *)((int)puVar37 + -1);
        cVar7 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar7;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) |
                                            *(byte *)((int)param_1 + 0x16d7207),(char)param_1));
        pbVar10 = (byte *)((int)puVar14 + 0x7d);
        bVar6 = *pbVar10;
        bVar34 = (byte)((uint)puVar33 >> 8);
        bVar25 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar34;
        uVar41 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY1(bVar25,bVar34) * 0x800 |
                 (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
                 (ushort)((char)*pbVar10 < '\0') * 0x80 | (ushort)(*pbVar10 == 0) * 0x40 |
                 (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(*pbVar10) & 1U) == 0) * 4 |
                 (ushort)CARRY1(bVar6,bVar34);
        *(byte *)puVar14 = (byte)*puVar14 + cVar7;
        pbVar10 = (byte *)(CONCAT31((int3)((uint)puVar14 >> 8),cVar7 + '+') ^ *unaff_EDI);
        if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) goto code_r0x00402898;
        bVar6 = (byte)pbVar10;
        *pbVar10 = *pbVar10 + bVar6;
        puVar14 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6 + 0x72);
        if (bVar6 < 0x8e && (byte)(bVar6 + 0x72) != '\0') {
          uVar42 = in_CS;
          if (SCARRY1(bVar6,'r')) goto code_r0x00402974;
        }
        else {
          *(byte *)((int)puVar14 + 0x6f) = *(byte *)((int)puVar14 + 0x6f) + bVar34;
        }
code_r0x00402905:
        in_ES = uVar41;
        uVar46 = CONCAT44(puVar33,puVar14);
        puVar37 = (uint *)((int)puVar37 + -1);
        cVar7 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar7;
        bVar6 = (byte)((uint)param_1 >> 8) | (byte)*param_1;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6,(char)param_1));
        if ((char)bVar6 < '\x01') {
          *(byte *)puVar14 = (byte)*puVar14 + cVar7;
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)(unaff_EBP + -100));
          uVar41 = in_ES;
          goto code_r0x00402929;
        }
        *(byte *)puVar14 = (byte)*puVar14 + cVar7;
        uVar41 = 0x291c;
        uVar46 = func_0x7346291c();
        *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
        param_1 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                                   (byte)extraout_ECX | *(byte *)((ulonglong)uVar46 >> 0x20));
        puStackY_28 = (uint *)CONCAT22(puStackY_28._2_2_,in_ES);
        uStackY_24 = puVar37;
        while( true ) {
          pcVar36 = (char *)((int)uVar46 * 2);
          *pcVar36 = *pcVar36 - (char)param_1;
          uVar12 = *puVar37;
          cVar7 = (char)((uint)param_1 >> 8);
          *(byte *)puVar37 = (byte)*puVar37 + cVar7;
          if (SCARRY1((byte)uVar12,cVar7) == (char)(byte)*puVar37 < '\0') {
            pbVar10 = (byte *)((int)unaff_EDI + (int)uVar46);
            *pbVar10 = *pbVar10 + (char)uVar46;
            bVar6 = *pbVar10;
            goto code_r0x004028c8;
          }
code_r0x00402929:
          puVar33 = (uint *)((ulonglong)uVar46 >> 0x20);
          cVar7 = (char)uVar46;
          *(char *)uVar46 = *(char *)uVar46 + cVar7;
          uVar23 = (undefined3)((ulonglong)uVar46 >> 8);
          bVar6 = cVar7 + 7;
          puVar14 = (uint *)CONCAT31(uVar23,bVar6);
          bVar25 = (byte)((ulonglong)uVar46 >> 0x28);
          if ((POPCOUNT(bVar6) & 1U) != 0) break;
          *(byte *)puVar14 = (byte)*puVar14 + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,cVar7 + '3');
          uVar30 = (undefined2)((uint)puVar37 >> 0x10);
          uVar35 = SUB41(puVar37,0);
          bVar6 = (char)((uint)puVar37 >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar6);
          puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar35));
          *pcVar36 = *pcVar36 + cVar7 + '3';
          cVar8 = cVar7 + ':';
          puVar14 = (uint *)CONCAT31(uVar23,cVar8);
          if ((POPCOUNT(cVar8) & 1U) != 0) {
            bVar6 = bVar6 | *(byte *)((int)puVar33 + 7);
            puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar35));
            bVar43 = (POPCOUNT(bVar6) & 1U) == 0;
            goto code_r0x004028db;
          }
          *(byte *)puVar14 = (byte)*puVar14 + cVar8;
          puVar14 = (uint *)(CONCAT31(uVar23,cVar7 + 'b') & 0xffffff72 | 0x2d2b0000);
          pbVar10 = (byte *)((int)puVar14 + 0x72);
          bVar45 = SCARRY1(*pbVar10,bVar25);
          *pbVar10 = *pbVar10 + bVar25;
          bVar6 = POPCOUNT(*pbVar10);
code_r0x0040294c:
          if ((bVar6 & 1) == 0) {
            *(byte *)((int)puVar14 + 0x72) =
                 *(byte *)((int)puVar14 + 0x72) + (char)((uint)puVar33 >> 8);
          }
          else if (bVar45) {
            unaff_EBP = *(char **)unaff_EBP;
            cVar7 = cRamc9721806;
            goto code_r0x004029c4;
          }
          unaff_EBP = (char *)0x7e700001;
          puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,in_SS);
code_r0x00402957:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          cVar7 = (char)puVar14 + '(';
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),cVar7);
          *(byte *)puVar14 = (byte)*puVar14 + cVar7;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar14,
                                              (char)param_1));
          *(byte *)puVar14 = (byte)*puVar14 + cVar7;
          puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                     CONCAT11((byte)((uint)puVar33 >> 8) | (byte)puVar37[0x18],
                                              (char)puVar33));
          unaff_ESI = puStackY_2c;
          unaff_EDI = puStackY_28;
code_r0x00402966:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          bVar6 = (byte)((uint)puVar37 >> 8) | *(byte *)((int)puVar33 + 7);
          puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar6,(char)puVar37));
          if ((POPCOUNT(bVar6) & 1U) != 0) {
            puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + -0x21);
            goto code_r0x00402905;
          }
code_r0x0040296d:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + '~');
          uVar4 = in_SS;
code_r0x00402972:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          uVar42 = in_CS;
          uVar41 = uVar4;
code_r0x00402974:
          bVar6 = 0xe9 < (byte)puVar14;
          in_CS = 0x2d0a;
          uVar46 = func_0x00006128(uVar42);
          puVar33 = (uint *)uVar46;
          piVar20 = (int *)((int)((ulonglong)uVar46 >> 0x20) + -0x3d);
          *piVar20 = (int)((int)unaff_ESI + (uint)bVar6 + *piVar20);
          bVar43 = SCARRY4(*puVar33,(int)puVar33);
          *puVar33 = *puVar33 + (int)puVar33;
          uVar12 = *puVar33;
          param_1 = extraout_ECX_00;
code_r0x00402982:
          bVar6 = POPCOUNT(uVar12 & 0xff);
          if (bVar43) {
            *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
            param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                       CONCAT11((byte)((uint)param_1 >> 8) |
                                                *(byte *)((ulonglong)uVar46 >> 0x20),(char)param_1))
            ;
            goto code_r0x00402991;
          }
code_r0x00402984:
          pcVar36 = (char *)((ulonglong)uVar46 >> 0x20);
          if ((bVar6 & 1) == 0) {
            *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
            *pcVar36 = *pcVar36 + (char)param_1;
            uVar46 = CONCAT44(CONCAT22((short)((ulonglong)uVar46 >> 0x30),
                                       CONCAT11((char)((ulonglong)uVar46 >> 0x28) - pcVar36[0x1f],
                                                (char)((ulonglong)uVar46 >> 0x20))),
                              CONCAT31((int3)((ulonglong)uVar46 >> 8),(char)uVar46 + '('));
code_r0x00402991:
            puVar33 = (uint *)((ulonglong)uVar46 >> 0x20);
            pbVar10 = (byte *)uVar46;
            bVar6 = (byte)uVar46;
            bVar43 = CARRY1(bVar6,*pbVar10);
            puVar14 = (uint *)CONCAT31((int3)((ulonglong)uVar46 >> 8),bVar6 + *pbVar10);
            cVar7 = bVar6 + *pbVar10;
            if (SCARRY1(bVar6,*pbVar10)) goto code_r0x004029c4;
code_r0x00402995:
            puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                       CONCAT11(((char)((uint)puVar33 >> 8) -
                                                *(byte *)((int)puVar33 + 0x6b)) - bVar43,
                                                (char)puVar33));
            bVar6 = (byte)puVar14;
            bVar43 = CARRY1(bVar6,(byte)*puVar14);
            bVar45 = SCARRY1(bVar6,(byte)*puVar14);
            puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar6 + (byte)*puVar14);
            do {
              if (!bVar45) {
                unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar43 + *puVar14);
                pbVar10 = (byte *)((int)puVar14 + *puVar14);
                bVar25 = (byte)pbVar10;
                *pbVar10 = *pbVar10 + bVar25;
                *(byte *)param_1 = (byte)*param_1 + (char)param_1;
                bVar6 = *pbVar10;
                *pbVar10 = *pbVar10 + bVar25;
                *unaff_EDI = (uint)((int)puVar37 + (uint)CARRY1(bVar6,bVar25) + *unaff_EDI);
                *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)param_1;
                uVar23 = (undefined3)((uint)pbVar10 >> 8);
                bVar25 = bVar25 | (byte)*unaff_ESI;
                puVar14 = (uint *)CONCAT31(uVar23,bVar25);
                uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,in_SS);
                uVar12 = *puVar14;
                uVar1 = *puVar14;
                *puVar14 = (uint)(*puVar14 + (int)puVar14);
                if (SCARRY4(uVar1,(int)puVar14)) {
                  *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)puVar37;
                  *(byte *)puVar33 = (byte)*puVar33 + (char)param_1;
                  *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)puVar37;
                }
                else {
                  puStackY_28 = (uint *)CONCAT22(puStackY_28._2_2_,in_ES);
                  in_SS = in_ES;
                  uVar4 = in_ES;
                  if (CARRY4(uVar12,(uint)puVar14)) goto code_r0x00402972;
                  bVar43 = CARRY1(bVar25,(byte)*puVar14);
                  bVar45 = SCARRY1(bVar25,(byte)*puVar14);
                  puVar14 = (uint *)CONCAT31(uVar23,bVar25 + (byte)*puVar14);
code_r0x004029be:
                  if (!bVar45) {
                    puStackY_28 = (uint *)CONCAT22(puStackY_28._2_2_,in_ES);
                    *(byte *)((int)puVar33 + -0x37) =
                         (*(byte *)((int)puVar33 + -0x37) - (char)((uint)puVar33 >> 8)) - bVar43;
                    cVar7 = cRamc9721806;
code_r0x004029c4:
                    cRamc9721806 = cVar7;
                    bVar6 = (byte)puVar14;
                    bVar43 = CARRY1(bVar6,(byte)*puVar14);
                    bVar45 = SCARRY1(bVar6,(byte)*puVar14);
                    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar6 + (byte)*puVar14);
                    goto code_r0x004029c6;
                  }
                }
                bVar6 = (byte)param_1;
                bVar43 = CARRY1((byte)*puVar33,bVar6);
                bVar45 = SCARRY1((byte)*puVar33,bVar6);
                *(byte *)puVar33 = (byte)*puVar33 + bVar6;
                if (bVar43) goto code_r0x00402966;
              }
code_r0x004029c6:
              if (bVar45) {
                in_ES = (ushort)pcStack_4;
                goto code_r0x00402966;
              }
              *(uint *)((int)puVar33 + -0x23) =
                   (*(int *)((int)puVar33 + -0x23) - (int)unaff_ESI) - (uint)bVar43;
              uVar12 = *puVar14;
              bVar25 = (byte)puVar14;
              uVar1 = *puVar14;
              uVar23 = (undefined3)((uint)puVar14 >> 8);
              bVar6 = bVar25 + (byte)*puVar14;
              puVar14 = (uint *)CONCAT31(uVar23,bVar6);
              uVar4 = in_ES;
              if (SCARRY1(bVar25,(byte)uVar1)) goto code_r0x00402972;
              cVar7 = (char)puVar33;
              bVar34 = ((char)((uint)puVar33 >> 8) - *(byte *)((int)puVar33 + -0xf)) -
                       CARRY1(bVar25,(byte)uVar12);
              puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),CONCAT11(bVar34,cVar7));
              puVar39 = (uint *)CONCAT31(uVar23,bVar6 + (byte)*puVar14);
              bVar25 = (byte)param_1;
              uVar41 = in_ES;
              if (SCARRY1(bVar6,(byte)*puVar14)) {
                *(byte *)puVar33 = (byte)*puVar33 + bVar25;
                uVar46 = CONCAT44(puVar33,(int)puVar39 + -0x1c37211);
                pcVar36 = (char *)((int)puVar39 + -0x1c3720a);
                *pcVar36 = *pcVar36 + bVar34;
                bVar6 = POPCOUNT(*pcVar36);
                goto code_r0x00402984;
              }
              unaff_ESI = (uint *)((int)unaff_ESI +
                                  (-(uint)CARRY1(bVar6,(byte)*puVar14) - *(int *)((int)puVar33 + 5))
                                  );
              bVar43 = SCARRY4((int)puVar39,*puVar39);
              uVar12 = (int)puVar39 + *puVar39;
              uVar46 = CONCAT44(puVar33,uVar12);
              if (bVar43) goto code_r0x00402982;
              bVar6 = (byte)uVar12 + 0x8e;
              uVar13 = CONCAT31((int3)(uVar12 >> 8),bVar6 - CARRY4((uint)puVar39,*puVar39));
              *puVar37 = (*puVar37 - uVar13) -
                         (uint)((byte)uVar12 < 0x72 || bVar6 < CARRY4((uint)puVar39,*puVar39));
              pbVar10 = (byte *)(uVar13 - 0x5e);
              bVar6 = *pbVar10;
              *pbVar10 = *pbVar10 + bVar34;
              uVar12 = (uint)CARRY1(bVar6,bVar34);
              uVar1 = uVar13 - 0x32d72;
              puVar14 = (uint *)(uVar1 - uVar12);
              if (SBORROW4(uVar13,0x32d72) != SBORROW4(uVar1,uVar12)) goto code_r0x00402992;
              uVar42 = in_DS;
              if (uVar13 < 0x32d72 || uVar1 < uVar12) {
                *unaff_EBP = *unaff_EBP - (char)((uint)puVar14 >> 8);
                *(byte *)puVar33 = (byte)*puVar33 + bVar25;
                puVar39 = unaff_ESI + 1;
                out(*unaff_ESI,CONCAT11(bVar34,cVar7));
                *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
                goto code_r0x00402a3e;
              }
              bVar43 = CARRY4((uint)puVar14,*puVar14);
              bVar45 = SCARRY4((int)puVar14,*puVar14);
              puVar14 = (uint *)((int)puVar14 + *puVar14);
              if (!bVar45) {
                uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,in_ES);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar43;
                bVar6 = (byte)puVar14;
                *(byte *)((int)puVar33 + (int)unaff_EBP) =
                     *(byte *)((int)puVar33 + (int)unaff_EBP) + bVar6;
                *(byte *)puVar37 = (byte)*puVar37 + cVar7;
                *(byte *)puVar37 = (byte)*puVar37 ^ bVar6;
                bVar27 = (byte)((uint)param_1 >> 8);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar27;
                *(byte *)puVar14 = (byte)*puVar14 + bVar6;
                pbVar15 = (byte *)CONCAT31((int3)((uint)puVar14 >> 8),bVar6 | (byte)*puVar14);
                *(byte *)param_1 = (byte)*param_1 + cVar7;
                bVar38 = *pbVar15;
                uVar30 = (undefined2)((uint)param_1 >> 0x10);
                param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar38,bVar25));
                pbVar15 = pbVar15 + (uint)CARRY1(bVar27,*pbVar15) + *(int *)pbVar15;
                *(byte *)puVar33 = (byte)*puVar33 + bVar25;
                unaff_EBP = unaff_EBP + iRam0355720b;
                pbVar10 = pbVar15 + 0x73;
                bVar6 = *pbVar10;
                *pbVar10 = *pbVar10 + bVar34;
                uVar23 = (undefined3)((uint)pbVar15 >> 8);
                bVar6 = (char)pbVar15 + CARRY1(bVar6,bVar34);
                pcVar36 = (char *)CONCAT31(uVar23,bVar6);
                *(byte *)puVar33 = (byte)*puVar33 + bVar25;
                if ((POPCOUNT((byte)*puVar33) & 1U) == 0) {
                  in_SS = in_ES;
                }
                puVar40 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x17));
                *pcVar36 = *pcVar36 + bVar6;
                cVar7 = bVar6 + 2;
                puVar14 = (uint *)CONCAT31(uVar23,cVar7);
                if (bVar6 < 0xfe) {
                  *puVar14 = (uint)(*puVar14 + (int)puVar14);
                  goto code_r0x00402a8f;
                }
                *(byte *)puVar14 = (byte)*puVar14 + cVar7;
                uVar12 = *puVar33;
                puVar39 = (uint *)((int)unaff_ESI + puVar37[0x19]);
                *(byte *)puVar14 = (byte)*puVar14 + cVar7;
                param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar38 | (byte)*puVar14,
                                                           bVar25 | (byte)uVar12));
                unaff_EDI = puVar40;
                goto code_r0x00402a36;
              }
            } while( true );
          }
        }
        unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar6;
        pbVar10 = (byte *)((int)puVar14 + 0x73);
        bVar43 = CARRY1(*pbVar10,bVar25);
        *pbVar10 = *pbVar10 + bVar25;
      } while( true );
    }
    *(byte *)puVar33 = (byte)*puVar33 + (char)param_1;
    unaff_EBX = CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 - (byte)*unaff_ESI);
  } while( true );
code_r0x00402992:
  pbVar10 = (byte *)((int)puVar14 + 0x2a);
  bVar43 = CARRY1(*pbVar10,bVar34);
  *pbVar10 = *pbVar10 + bVar34;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar14) = *(byte *)(in_GS_OFFSET + (int)puVar14) + (char)puVar14;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                      (char)param_1));
  *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
code_r0x00402a3e:
  uVar23 = (undefined3)((uint)puVar14 >> 8);
  bVar6 = (byte)puVar14 | (byte)*puVar39;
  pcVar36 = (char *)CONCAT31(uVar23,bVar6);
  if ((char)bVar6 < '\0') {
    *pcVar36 = *pcVar36 + bVar6;
    cVar7 = bVar6 + 2;
    piVar20 = (int *)CONCAT31(uVar23,cVar7);
    if ((POPCOUNT(cVar7) & 1U) == 0) {
      *(char *)piVar20 = (char)*piVar20 + cVar7;
      bVar6 = bVar6 + 0x71;
      pcVar11 = (char *)CONCAT31(uVar23,bVar6);
      pcVar36 = (char *)segment(uVar42,(short)puVar37 + (short)puVar39);
      *pcVar36 = *pcVar36 + bVar6;
      uVar12 = unaff_EDI[0x1a];
      *pcVar11 = *pcVar11 + bVar6;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | (byte)uVar12 |
                                          *(byte *)((int)unaff_EDI + 0x69),(char)param_1));
      *pcVar11 = *pcVar11 + bVar6;
      bVar6 = bVar6 | (byte)*puVar33;
      pcVar36 = (char *)CONCAT31(uVar23,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar39 + (uint)bVar44 * -2 + 1;
    out(*puVar39,(short)puVar33);
  }
  else {
    puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((char)((uint)puVar37 >> 8) + (byte)puVar37[6],(char)puVar37)
                              );
code_r0x00402a5d:
    *pcVar36 = *pcVar36 + (char)pcVar36;
    piVar20 = (int *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
    unaff_ESI = puVar39;
  }
code_r0x00402a61:
  pcVar36 = (char *)segment(uVar42,(short)puVar37 + (short)unaff_ESI);
  *pcVar36 = *pcVar36 + (char)piVar20;
  cVar7 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)unaff_EDI[0x1a],cVar7));
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  uVar30 = CONCAT11((byte)((uint)puVar33 >> 8) | *(byte *)((int)puVar33 + 0x65),(char)puVar33);
  puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),uVar30);
  piVar16 = (int *)((int)piVar20 + *piVar20);
  puVar39 = unaff_ESI;
  puVar40 = unaff_EDI;
  uVar41 = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402ae3;
  *(byte *)puVar33 = (byte)*puVar33 + cVar7;
  puVar39 = unaff_ESI + (uint)bVar44 * -2 + 1;
  out(*unaff_ESI,uVar30);
code_r0x00402a75:
  bVar6 = (byte)((uint)param_1 >> 8) | (byte)*puVar33;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6,(char)param_1));
  piVar20 = (int *)(uint)(byte)*puVar37;
  *(byte *)puVar39 = (byte)*puVar39 - bVar6;
  puVar40 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  out(*puVar39,(short)puVar33);
  bVar6 = in((short)puVar33);
  *(byte *)puVar40 = bVar6;
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar33,(char)param_1));
  iVar17 = *piVar20;
  cVar7 = in(1);
  puVar14 = (uint *)CONCAT31((int3)((uint)((int)piVar20 + *piVar20) >> 8),cVar7);
  *(char *)puVar14 = (char)*puVar14 + cVar7;
  puVar14 = (uint *)((uint)puVar14 | *puVar14);
  *(byte *)param_1 = (byte)*param_1 + (char)puVar33;
  puVar39 = (uint *)((int)puVar39 + (((uint)bVar44 * -8 + 4) - iVar17));
  puVar40 = (uint *)((int)puVar40 + (uint)bVar44 * -2 + 1);
  in_SS = in_ES;
  while( true ) {
    bVar6 = (byte)puVar14 | (byte)*puVar33;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar6);
    unaff_EDI = puVar40;
    if ((POPCOUNT(bVar6) & 1U) != 0) break;
    *(byte *)puVar14 = (byte)*puVar14 + bVar6;
code_r0x00402a9b:
    uVar23 = (undefined3)((uint)puVar14 >> 8);
    cVar7 = (char)puVar14 + '\r';
    piVar16 = (int *)CONCAT31(uVar23,cVar7);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar7;
    *(byte *)(puVar39 + -0xc800000) = (byte)puVar39[-0xc800000] + (char)puVar33;
    *(char *)piVar16 = (char)*piVar16 + cVar7;
    *(byte *)puVar33 = (byte)*puVar33 + cVar7;
    cVar8 = (char)param_1;
    if ((POPCOUNT((byte)*puVar33) & 1U) != 0) {
      *(byte *)puVar33 = (byte)*puVar33 + cVar8;
      unaff_ESI = puVar39 + (uint)bVar44 * -2 + 1;
      out(*puVar39,(short)puVar33);
      piVar20 = (int *)((longlong)*piVar16 * 0x7b020a00);
      *(char *)piVar20 =
           (char)*piVar20 - ((longlong)(int)piVar20 != (longlong)*piVar16 * 0x7b020a00);
      pbVar10 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10;
      goto code_r0x00402a61;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar7;
    puVar14 = (uint *)CONCAT31(uVar23,(char)puVar14 + ':');
    unaff_ESI = (uint *)((uint)puVar39 | *(uint *)((int)puVar33 + -0x79));
    iVar17 = (int)puVar14 + *puVar14;
    if (SCARRY4((int)puVar14,*puVar14)) {
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                 CONCAT11((char)((uint)puVar37 >> 8) + (byte)unaff_ESI[(int)puVar37]
                                          ,(char)puVar37));
      *(char *)((int)puVar33 * 2) = *(char *)((int)puVar33 * 2) + (char)iVar17;
      puVar40 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar23 = (undefined3)((uint)iVar17 >> 8);
    cVar7 = (char)iVar17 + CARRY4((uint)puVar14,*puVar14);
    piVar20 = (int *)CONCAT31(uVar23,cVar7);
    *(byte *)puVar33 = (byte)*puVar33 + cVar8;
    bVar43 = (POPCOUNT((byte)*puVar33) & 1U) != 0;
    if ((bVar43) && (bVar43)) goto code_r0x00402a61;
    *(char *)piVar20 = (char)*piVar20 + cVar7;
    cVar9 = cVar7 + '(';
    pcVar36 = (char *)CONCAT31(uVar23,cVar9);
    puVar40 = unaff_EDI + (uint)bVar44 * -2 + 1;
    uVar12 = in((short)puVar33);
    *unaff_EDI = uVar12;
    *pcVar36 = *pcVar36 + cVar9;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | bRama07b0222,cVar8));
    *pcVar36 = *pcVar36 + cVar9;
    pcVar36 = (char *)CONCAT31(uVar23,cVar7 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)puVar33);
    puVar39 = (uint *)((int)(unaff_ESI + (uint)bVar44 * -2 + 1) + (uint)bVar44 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar44 * -2 + 1],(short)puVar33);
    bVar6 = (byte)pcVar36;
    *pcVar36 = *pcVar36 + bVar6;
    puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(byte)puVar37 | (byte)*puVar40);
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar23 = (undefined3)((uint)pcVar36 >> 8);
    bVar6 = bVar6 + in_AF * -6;
    puVar33 = (uint *)((uint)puVar33 ^ *puVar33);
    cVar7 = bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) * -0x60 + (byte)*puVar33;
    piVar20 = (int *)CONCAT31(uVar23,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar20 = (char)*piVar20 + cVar7;
    piVar16 = (int *)CONCAT31(uVar23,cVar7 + '\x17');
    uVar41 = in_ES;
code_r0x00402ae3:
    out(*puVar39,(short)puVar33);
    unaff_ESI = puVar39 + (uint)bVar44 * -2 + 1 + (uint)bVar44 * -2 + 1;
    out(puVar39[(uint)bVar44 * -2 + 1],(short)puVar33);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
code_r0x00402ae7:
    puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((byte)((uint)puVar37 >> 8) | unaff_EBP[-0x60],(char)puVar37)
                              );
    cVar7 = (char)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar7;
    uVar23 = (undefined3)((uint)piVar16 >> 8);
    bVar6 = cVar7 + 2;
    puVar14 = (uint *)CONCAT31(uVar23,bVar6);
    in_ES = uVar41;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(byte *)puVar14 = (byte)*puVar14 + bVar6;
      cVar7 = cVar7 + '}';
      puVar14 = (uint *)CONCAT31(uVar23,cVar7);
      *(byte *)puVar14 = ((byte)*puVar14 - cVar7) - (0x84 < bVar6);
      pbVar10 = (byte *)((int)puVar33 + (int)puVar14);
      *pbVar10 = *pbVar10 + cVar7;
      bVar6 = POPCOUNT(*pbVar10);
      puVar39 = unaff_ESI;
code_r0x00402af9:
      in_ES = uVar41;
      unaff_EDI = puVar40;
      if ((bVar6 & 1) == 0) {
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        bVar6 = (byte)param_1;
        *(byte *)puVar33 = (byte)*puVar33 + bVar6;
        uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,in_SS);
        unaff_ESI = puVar39 + (uint)bVar44 * -2 + 1;
        out(*puVar39,(short)puVar33);
        uVar12 = *puVar33;
        *(byte *)puVar33 = (byte)*puVar33 + bVar6;
        iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'o') +
                 *(int *)((int)puVar33 * 2) + (uint)CARRY1((byte)uVar12,bVar6);
        pcVar36 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '(');
        while( true ) {
          uVar12 = *puVar33;
          bVar25 = (byte)param_1;
          *(byte *)puVar33 = (byte)*puVar33 + bVar25;
          pcVar36 = pcVar36 + (uint)CARRY1((byte)uVar12,bVar25) + iRam73280512;
          bVar6 = (byte)pcVar36;
          *pcVar36 = *pcVar36 + bVar6;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((byte)((uint)param_1 >> 8) | bRam7d160243,bVar25));
          bVar44 = ((uint)uStackY_24 & 0x400) != 0;
          in_AF = ((uint)uStackY_24 & 0x10) != 0;
          *pcVar36 = *pcVar36 + bVar6;
          uVar23 = (undefined3)((uint)pcVar36 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar23,bVar6 + 2) + (uint)(0xfd < bVar6);
          cVar7 = bVar6 + 4;
          if (SCARRY1(bVar6 + 2,'\x02') != cVar7 < '\0') break;
          *(char *)CONCAT31(uVar23,cVar7) = *(char *)CONCAT31(uVar23,cVar7) + cVar7;
          iVar17 = CONCAT31(uVar23,bVar6 + 0x16);
code_r0x00402b33:
          piVar16 = (int *)(iVar17 + 0xe2802);
          *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)param_1 >> 8);
          uVar41 = in_ES;
          in_ES = in_SS;
          while( true ) {
            bVar25 = (byte)puVar37 | (byte)((uint)param_1 >> 8);
            puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),bVar25);
            *piVar16 = (int)(*piVar16 + (int)piVar16);
            cVar7 = (char)piVar16;
            *(byte *)puVar33 = (byte)*puVar33 + cVar7;
            if ((POPCOUNT((byte)*puVar33) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar16 = (char)*piVar16 + cVar7;
            uVar12 = CONCAT31((int3)((uint)piVar16 >> 8),cVar7 + '\x13');
            puVar14 = (uint *)(uVar12 + 0x19061224 + (uint)(0x1f9edfd < uVar12));
            uVar13 = (uint)(0xe4ffffdd < uVar12 + 0xfe061202 ||
                           CARRY4(uVar12 + 0x19061224,(uint)(0x1f9edfd < uVar12)));
            uVar12 = *unaff_ESI;
            uVar1 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar1 + (int)puVar14) + uVar13);
            bVar6 = POPCOUNT(*unaff_ESI & 0xff);
            puVar39 = unaff_ESI;
            if ((SCARRY4(uVar12,(int)puVar14) != SCARRY4((int)(uVar1 + (int)puVar14),uVar13)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar6 = (byte)puVar14;
            *(byte *)puVar14 = (byte)*puVar14 + bVar6;
            iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),bVar6 + 2) + 0x9d7d + (uint)(0xfd < bVar6);
            bVar6 = (byte)puVar33 | (byte)*puVar33;
            uVar12 = *puVar37;
            *(byte *)puVar37 = (byte)*puVar37 + bVar25;
            pcVar36 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x12') + 0x228b26
                               + *puVar40 + (uint)CARRY1((byte)uVar12,bVar25));
            cVar7 = bVar6 + (byte)*param_1;
            puVar33 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),cVar7);
            if (SCARRY1(bVar6,(byte)*param_1) == cVar7 < '\0') break;
            *pcVar36 = *pcVar36 + (char)pcVar36;
            cVar7 = (char)pcVar36 + '\x02';
            pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar7);
            bVar6 = POPCOUNT(cVar7);
            uVar41 = in_ES;
code_r0x00402b7a:
            puVar14 = unaff_ESI;
            if ((bVar6 & 1) != 0) break;
            while( true ) {
              cVar7 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar7;
              uVar23 = (undefined3)((uint)pcVar36 >> 8);
              pcVar36 = (char *)CONCAT31(uVar23,cVar7 + '\x13');
              *(byte *)param_1 = (byte)*param_1 | (byte)puVar33;
              *(byte *)puVar40 = (byte)*puVar40 | (byte)puVar33;
              *puVar33 = (uint)(pcVar36 + *puVar33);
              uVar30 = (undefined2)((uint)puVar37 >> 0x10);
              uVar35 = SUB41(puVar37,0);
              cVar8 = (char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + -0x5f);
              puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar35));
              *pcVar36 = *pcVar36 + cVar7 + '\x13';
              piVar16 = (int *)CONCAT31(uVar23,cVar7 + -0x7a);
              uVar12 = *puVar33;
              *(byte *)puVar33 = (byte)*puVar33 + (char)param_1;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar12,(char)param_1) == (char)(byte)*puVar33 < '\0') break;
              *(char *)piVar16 = (char)*piVar16 + cVar7 + -0x7a;
              cVar9 = cVar7 + -0x78;
              piVar16 = (int *)CONCAT31(uVar23,cVar9);
              uVar4 = uVar41;
              if ((POPCOUNT(cVar9) & 1U) != 0) break;
              *(char *)piVar16 = (char)*piVar16 + cVar9;
              pcVar36 = (char *)CONCAT31(uVar23,cVar7 + -0x65);
              *param_1 = *param_1 | (uint)puVar33;
              *puVar40 = *puVar40 | (uint)puVar33;
              pbVar10 = (byte *)((int)param_1 + -1);
              cVar8 = cVar8 + *(byte *)((int)puVar37 + -0x5e);
              puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar35));
              *pcVar36 = *pcVar36 + cVar7 + -0x65;
              bVar6 = cVar7 + 10;
              puVar39 = (uint *)CONCAT31(uVar23,bVar6);
              bVar25 = (byte)pbVar10;
              *(byte *)puVar33 = (byte)*puVar33 + bVar25;
              unaff_ESI = puVar14 + (uint)bVar44 * -2 + 1;
              out(*puVar14,(short)puVar33);
              uVar12 = *puVar33;
              *(byte *)puVar33 = (byte)*puVar33 + bVar25;
              uVar2 = (uint)CARRY1((byte)uVar12,bVar25);
              uVar12 = *puVar33;
              uVar1 = *puVar33;
              pbVar15 = pbVar10 + uVar1 + uVar2;
              uVar5 = *puVar33;
              cRam130a0000 = cRam130a0000 - cVar8;
              uVar13 = *puVar33;
              unaff_EBP = (char *)((uint)unaff_EBP | *puVar39);
              *(byte *)puVar39 = (char)*puVar39 + bVar6;
              param_1 = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar15 >> 8) | bRam7d170243,
                                                  (char)pbVar15 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar10,uVar12) ||
                                                  CARRY4((uint)(pbVar10 + uVar1),uVar2))));
              bVar44 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar39 = (char)*puVar39 + bVar6;
              bVar43 = 0xfd < bVar6;
              pcVar36 = (char *)CONCAT31(uVar23,cVar7 + '\f');
              puVar33 = (uint *)((uint)puVar33 | uVar13);
code_r0x00402bd1:
              uVar12 = *puVar37;
              uVar1 = *puVar37;
              *puVar37 = (uint)((byte *)(uVar1 + (int)param_1) + bVar43);
              bVar6 = POPCOUNT(*puVar37 & 0xff);
              uVar41 = in_SS;
              if ((SCARRY4(uVar12,(int)param_1) != SCARRY4((int)(uVar1 + (int)param_1),(uint)bVar43)
                  ) == (int)*puVar37 < 0) goto code_r0x00402b7a;
              cVar7 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar7;
              pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar7 + '\x02');
              if (SCARRY1(cVar7,'\x02') == (char)(cVar7 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar36 = *pcVar36 + (char)pcVar36;
                pcVar36 = (char *)(CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + '\x12') |
                                  *puVar33);
                *(byte *)puVar40 = (byte)*puVar40 - (char)param_1;
                *pcVar36 = *pcVar36 + (char)pcVar36;
                puVar33 = (uint *)((int)puVar33 - *unaff_ESI);
                bVar6 = (byte)puVar37 | (byte)((uint)param_1 >> 8);
                cVar7 = *pcVar36;
                uVar23 = (undefined3)((uint)pcVar36 >> 8);
                pcVar36 = (char *)CONCAT31(uVar23,cVar7);
                *pcVar36 = *pcVar36 + cVar7;
                pcVar11 = (char *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                           CONCAT11((char)((uint)puVar37 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),
                                                                       bVar6) + -0x5b),bVar6));
                *pcVar36 = *pcVar36 + cVar7;
                bVar43 = false;
                pcVar36 = (char *)(CONCAT31(uVar23,cVar7 + '\x13') | *puVar33);
                do {
                  bVar25 = (byte)param_1;
                  bVar6 = bVar25 + (byte)unaff_ESI[(int)puVar40 * 2];
                  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar6 + bVar43);
                  uVar12 = (uint)(CARRY1(bVar25,(byte)unaff_ESI[(int)puVar40 * 2]) ||
                                 CARRY1(bVar6,bVar43));
                  pcVar18 = pcVar36 + 0x1b000019 + uVar12;
                  piVar20 = (int *)((int)puVar40 * 2 + 0x40000a5);
                  *piVar20 = (int)((int)param_1 +
                                  (uint)((char *)0xe4ffffe6 < pcVar36 ||
                                        CARRY4((uint)(pcVar36 + 0x1b000019),uVar12)) + *piVar20);
                  puVar33 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),(char)puVar33 + cRam00009d7d
                                            );
                  uVar23 = (undefined3)((uint)pcVar18 >> 8);
                  bVar6 = (char)pcVar18 + 0x12;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  uVar12 = CONCAT31(uVar23,bVar6 + in_AF * -6) & 0xffffff0f;
                  pcVar36 = (char *)CONCAT22((short)(uVar12 >> 0x10),
                                             CONCAT11((char)((uint)pcVar18 >> 8) - in_AF,
                                                      (char)uVar12));
                  pcVar18 = (char *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar23,bVar6));
                  while( true ) {
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    puVar14 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),
                                               (byte)puVar33 | (byte)*puVar33);
                    puVar40 = (uint *)((uint)puVar40 | (uint)unaff_ESI);
                    uVar12 = (uint)pcVar11 | (uint)unaff_ESI;
                    unaff_EBP = pcVar18 + 1;
                    uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,in_ES);
                    cVar8 = (char)(pcVar36 + 0x1b000019);
                    uVar23 = (undefined3)((uint)(pcVar36 + 0x1b000019) >> 8);
                    cVar7 = cVar8 + -0x13;
                    pcVar36 = (char *)CONCAT31(uVar23,cVar7);
                    uVar30 = (undefined2)(uVar12 >> 0x10);
                    cVar9 = (char)(uVar12 >> 8) + *(char *)(uVar12 - 0x5e);
                    puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(cVar9,(byte)uVar12));
                    *pcVar36 = *pcVar36 + cVar7;
                    pcVar36 = (char *)(CONCAT31(uVar23,cVar8 + '\x19') | *puVar14);
                    bVar6 = (byte)pcVar36;
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      pbVar10 = (byte *)((int)puVar14 + (int)pcVar36);
                      bVar43 = CARRY1(*pbVar10,bVar6);
                      *pbVar10 = *pbVar10 + bVar6;
                      puVar33 = puVar14;
                      goto code_r0x00402bd1;
                    }
                    *pcVar36 = *pcVar36 + bVar6;
                    uVar23 = (undefined3)((uint)pcVar36 >> 8);
                    pcVar11 = (char *)CONCAT31(uVar23,bVar6 + 0x6f);
                    puVar33 = (uint *)((int)puVar14 + 1);
                    *pcVar11 = *pcVar11 + bVar6 + 0x6f;
                    bVar25 = (byte)uVar12 | (byte)((uint)pcVar36 >> 8);
                    pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x5c);
                    cVar9 = cVar9 + *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),bVar25) + -0x5f);
                    puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(cVar9,bVar25));
                    *pcVar36 = *pcVar36 + bVar6 + 0x5c;
                    pcVar36 = (char *)(CONCAT31(uVar23,bVar6 + 0x88) | *puVar33);
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)param_1 >> 8);
                      uStackY_24 = (uint *)((uint)uStackY_24._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    uVar23 = (undefined3)((uint)pcVar36 >> 8);
                    cVar7 = (char)pcVar36 + 'o';
                    puVar33 = (uint *)((int)puVar14 + 2);
                    *(char *)CONCAT31(uVar23,cVar7) = *(char *)CONCAT31(uVar23,cVar7) + cVar7;
                    pcVar11 = (char *)CONCAT31((int3)((uint)puVar37 >> 8),
                                               bVar25 | (byte)((uint)pcVar36 >> 8));
                    pcVar36 = (char *)(CONCAT31(uVar23,cVar7) | 2);
                    pcVar18[-0x62] = pcVar18[-0x62] + '\x01';
                    bVar6 = (byte)pcVar36;
                    *pcVar36 = *pcVar36 + bVar6;
                    bVar43 = 0xfd < bVar6;
                    cVar7 = bVar6 + 2;
                    pcVar36 = (char *)CONCAT31(uVar23,cVar7);
                    uVar42 = in_ES;
                    if (SCARRY1(bVar6,'\x02') != cVar7 < '\0') break;
                    *pcVar36 = *pcVar36 + cVar7;
                    bVar25 = bVar6 + 10;
                    pcVar36 = (char *)CONCAT31(uVar23,bVar25);
                    *pcVar36 = *pcVar36 - cVar9;
                    cVar8 = (char)param_1;
                    *(byte *)puVar33 = *(byte *)puVar33 + cVar8;
                    pcVar18[-0x62] = pcVar18[-0x62] + '\x01';
                    *pcVar36 = *pcVar36 + bVar25;
                    cVar7 = bVar6 + 0xc;
                    pcVar36 = (char *)CONCAT31(uVar23,cVar7);
                    if (SCARRY1(bVar25,'\x02') == cVar7 < '\0') {
                      *pcVar36 = *pcVar36 + cVar7;
                      *(byte *)param_1 = (byte)*param_1 - cVar9;
                      *(byte *)puVar33 = *(byte *)puVar33 + cVar8;
                      cVar7 = (bVar6 + 0x13) - (byte)param_1[0x13];
                      pcVar36 = (char *)CONCAT31(uVar23,cVar7);
                      *pcVar36 = *pcVar36 + cVar7;
                      pcVar19 = (char *)CONCAT31(uVar23,cVar7 + *pcVar36);
                      *pcVar19 = *pcVar19 + cVar7 + *pcVar36;
                      pcVar19 = pcVar19 + *param_1;
                      *pcVar19 = *pcVar19 + (char)pcVar19;
                      LOCK();
                      pcVar36 = *(char **)pcVar19;
                      *(char **)pcVar19 = pcVar19;
                      UNLOCK();
                      *pcVar36 = *pcVar36 + (char)pcVar36;
                      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(byte)*param_1);
                      *pbVar10 = *pbVar10 + (byte)*param_1;
                      goto code_r0x00402c8d;
                    }
                    param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),
                                               cVar8 + *pcVar11 + (0xfd < bVar25));
                    *(byte *)puVar40 = (byte)*puVar40 - cVar9;
                    pcVar18 = unaff_EBP;
                  }
                } while( true );
              }
              puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                         CONCAT11((char)((uint)puVar37 >> 8) +
                                                  *(byte *)((int)puVar37 + -99),(char)puVar37));
              puVar14 = unaff_ESI;
            }
            *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
            puVar33 = (uint *)((int)puVar33 - *puVar14);
            unaff_ESI = puVar14;
            uVar41 = in_ES;
            in_ES = uVar4;
          }
          *(byte *)puVar33 = (byte)*puVar33 + (char)param_1;
          pcVar36 = pcVar36 + -0x7d160243;
        }
        pcVar36 = (char *)CONCAT31(uVar23,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar37 = (byte)*puVar37 + (char)param_1;
    uVar12 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
    *puVar40 = (uint)((int)puVar33 + (uint)CARRY1((byte)uVar12,(byte)puVar14) + *puVar40);
    puVar39 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar29 = (char)param_1;
      cVar26 = (char)((uint)param_1 >> 8) + (char)((uint)pbVar10 >> 8);
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar26,cVar29));
      cVar7 = (char)pbVar10;
      *pbVar10 = *pbVar10 + cVar7;
      pcVar36 = (char *)((int)pbVar10 * 2 + 0x1a10000);
      cVar9 = (char)((uint)pcVar11 >> 8);
      *pcVar36 = *pcVar36 + cVar9;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
      pbVar10[-0x47ffffff] = pbVar10[-0x47ffffff] + cVar9;
      *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
      bVar25 = (byte)puVar33;
      *(byte *)puVar40 = (byte)*puVar40 + bVar25;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + bVar25;
      *pbVar10 = *pbVar10 + cVar7;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar30 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar9 = cVar9 + (byte)unaff_ESI[(int)pcVar11];
      pcVar36 = (char *)CONCAT22(uVar30,CONCAT11(cVar9,(char)pcVar11));
      pcVar36[(int)pbVar10] = pcVar36[(int)pbVar10] + cVar7;
      *(byte *)puVar33 = *(byte *)puVar33 - cVar9;
      *(byte *)puVar33 = *(byte *)puVar33 + cVar29;
      uVar23 = (undefined3)((uint)pbVar10 >> 8);
      bVar6 = cVar7 - *pbVar10;
      *pcVar36 = *pcVar36 + bVar25;
      *(byte *)puVar33 = *(byte *)puVar33 ^ bVar6;
      *(byte *)puVar33 = *(byte *)puVar33 + bVar6;
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      uVar12 = *param_1;
      *(byte *)param_1 = (byte)*param_1 + bVar25;
      cVar8 = bVar6 + *(char *)CONCAT31(uVar23,bVar6) + CARRY1((byte)uVar12,bVar25);
      pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(cVar9 + pcVar18[-0x60],(char)pcVar11));
      *(char *)CONCAT31(uVar23,cVar8) = *(char *)CONCAT31(uVar23,cVar8) + cVar8;
      cVar9 = cVar8 + '\x12';
      pbVar10 = (byte *)CONCAT31(uVar23,cVar9);
      cVar7 = *pcVar11;
      *pcVar11 = *pcVar11 + cVar9;
      if (SCARRY1(cVar7,cVar9) != *pcVar11 < '\0') break;
code_r0x00402c8d:
      cVar7 = (char)pbVar10;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
      *(byte *)puVar33 = *(byte *)puVar33 + cVar7;
      *pbVar10 = *pbVar10 + cVar7;
    }
    *pbVar10 = *pbVar10 + cVar9;
    pbVar10 = (byte *)CONCAT31(uVar23,cVar8 + '$');
    *pbVar10 = *pbVar10 + cVar26;
    bVar6 = *(byte *)puVar33;
    *(byte *)puVar33 = *(byte *)puVar33 + cVar29;
    uVar41 = in_DS;
  } while (SCARRY1(bVar6,cVar29) == (char)*(byte *)puVar33 < '\0');
  do {
    cVar7 = (char)pbVar10;
    *pbVar10 = *pbVar10 + cVar7;
    uVar23 = (undefined3)((uint)pbVar10 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar33;
    bVar25 = cVar7 + 0x24;
    cVar9 = (char)((uint)pcVar11 >> 8);
    pcVar11[-0x62] = pcVar11[-0x62] + cVar9;
    *(char *)CONCAT31(uVar23,bVar25) = *(char *)CONCAT31(uVar23,bVar25) + bVar25;
    bVar6 = cVar7 + 0x2fU + (byte)*param_1;
    cVar8 = bVar6 + (0xf4 < bVar25);
    cVar7 = cVar8 + *(char *)CONCAT31(uVar23,cVar8) +
            (CARRY1(cVar7 + 0x2fU,(byte)*param_1) || CARRY1(bVar6,0xf4 < bVar25));
    pcVar36 = (char *)CONCAT31(uVar23,cVar7);
    *pcVar36 = *pcVar36 - (char)puVar33;
    *pcVar36 = *pcVar36 + cVar7;
    pcVar18 = (char *)((int)puVar33 - *puVar33);
    *(byte *)(unaff_ESI + (int)pcVar11) = (byte)unaff_ESI[(int)pcVar11] + cVar9;
    pcVar36[(int)unaff_EBP] = pcVar36[(int)unaff_EBP] + cVar7;
    *pcVar18 = *pcVar18 + (char)param_1;
    pcVar36 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((char)((uint)pbVar10 >> 8) - *pcVar18,cVar7));
    uVar12 = *puVar40;
    *pcVar36 = *pcVar36 - (char)((uint)pcVar18 >> 8);
    *pcVar36 = *pcVar36 + cVar7;
    uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,uVar42);
    pbVar15 = (byte *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                               CONCAT11(cVar9 - (byte)*unaff_ESI,(char)pcVar11));
    unaff_EBP = unaff_EBP + *(int *)(pbVar15 + (int)param_1);
    puVar14 = (uint *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + (byte)uVar12);
    while( true ) {
      puVar33 = puVar14;
      uVar30 = (undefined2)((uint)pbVar15 >> 0x10);
      bVar38 = (char)((uint)pbVar15 >> 8) + pbVar15[0x18];
      *pcVar36 = *pcVar36 + (char)pcVar36;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
      cVar7 = (char)param_1;
      *(byte *)puVar33 = (byte)*puVar33 + cVar7;
      uVar12 = *unaff_ESI;
      bVar34 = (byte)((uint)param_1 >> 8);
      bVar6 = *pbVar10;
      pbVar10 = pbVar10 + (uint)CARRY1(bVar34,*pbVar10) + *(int *)pbVar10;
      *(byte *)puVar33 = (byte)*puVar33 + cVar7;
      cVar8 = ((char)pbVar15 - (byte)uVar12) - (byte)*unaff_ESI;
      bVar25 = *(byte *)((int)puVar40 + 0x1a);
      *pbVar10 = *pbVar10 + (char)pbVar10;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11(bVar34 + bVar6 + bVar25 | (byte)*puVar33,cVar7));
      pbVar10 = pbVar10 + *puVar33;
      if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) break;
      *pbVar10 = *pbVar10 + (char)pbVar10;
      bVar6 = (char)pbVar10 + 0x6f;
      pcVar36 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6);
      pcVar11 = (char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar38,(char)pbVar15)) >> 8),cVar8
                                 ) + -1);
      *pcVar36 = *pcVar36 + bVar6;
      *pcVar36 = *pcVar36 + bVar6;
      *pcVar11 = *pcVar11 + (byte)puVar33;
      *(byte *)((int)pcVar36 * 2) = *(byte *)((int)pcVar36 * 2) ^ bVar6;
      uVar3 = *(undefined6 *)pcVar36;
      uVar42 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar36 = (char *)uVar3;
      *pcVar36 = *pcVar36 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar36 = (char *)((uint)pcVar36 | 0x73110008);
      bVar38 = (byte)((uint)pcVar11 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 - bVar38;
      *(byte *)puVar33 = (byte)*puVar33 + cVar7;
      puVar14 = unaff_ESI + (uint)bVar44 * -2 + 1;
      out(*unaff_ESI,(short)puVar33);
      *pcVar36 = *pcVar36;
      cVar7 = (char)pcVar36;
      *pcVar36 = *pcVar36 + cVar7;
      bVar6 = unaff_EBP[-0x5a];
      uVar30 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar8 = (char)pcVar11;
      *pcVar36 = *pcVar36 + cVar7;
      cVar7 = cVar7 + '\x02';
      uVar12 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar7);
      param_1 = (uint *)(uVar12 | 0x73110000);
      unaff_ESI = puVar14 + (uint)bVar44 * -2 + 1;
      out(*puVar14,(short)puVar33);
      *(byte *)param_1 = (byte)*param_1;
      bVar34 = (byte)puVar33 | (byte)*puVar40;
      puVar14 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),bVar34);
      *(byte *)param_1 = (byte)*param_1 + cVar7;
      pcVar36 = (char *)(uVar12 | 0x7b1f1609);
      bVar44 = (uVar41 & 0x400) != 0;
      *(uint *)((int)puVar40 + -0x7d) = *(uint *)((int)puVar40 + -0x7d) | (uint)unaff_EBP;
      bVar25 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar25;
      bVar38 = bVar38 | bVar6 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar15 = (byte *)CONCAT22(uVar30,CONCAT11(bVar38,cVar8));
      *pcVar36 = *pcVar36 + bVar25;
      uVar23 = (undefined3)((uint)pcVar36 >> 8);
      unaff_ESI[(int)puVar40 * 2] =
           (uint)((int)puVar14 + (uint)(0xd2 < bVar25) + unaff_ESI[(int)puVar40 * 2]);
      bVar6 = bVar25 + 0x2d ^ *(byte *)CONCAT31(uVar23,bVar25 + 0x2d);
      pcVar36 = (char *)CONCAT31(uVar23,bVar6);
      uVar12 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
      uVar41 = uVar42;
      if (CARRY1((byte)uVar12,bVar6)) {
        *pcVar36 = *pcVar36 + bVar6;
        bVar6 = bVar6 | pcVar36[0x4000019];
        pcVar36 = (char *)CONCAT31(uVar23,bVar6);
        if ('\0' < (char)bVar6) {
          *pcVar36 = *pcVar36 + bVar6;
          piVar20 = (int *)CONCAT31(uVar23,bVar6 + 0x28);
          *piVar20 = (int)piVar20 + (uint)(0xd7 < bVar6) + *piVar20;
          bVar27 = (byte)((uint6)uVar3 >> 8);
          *pbVar15 = *pbVar15 + bVar27;
          uVar31 = CONCAT11((byte)((uint)puVar33 >> 8) | bVar38,bVar34);
          puVar14 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),uVar31);
          uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,uVar42);
          bVar34 = in(uVar31);
          pbVar10 = (byte *)CONCAT31(uVar23,bVar34);
          bVar25 = *pbVar10;
          bVar43 = SCARRY1(*pbVar10,bVar34);
          *pbVar10 = *pbVar10 + bVar34;
          bVar6 = *pbVar10;
          puVar33 = unaff_ESI;
          in_SS = uVar42;
          if (!CARRY1(bVar25,bVar34)) goto code_r0x00402e19;
          *pbVar10 = *pbVar10 + bVar34;
          bVar27 = bVar27 | *pbVar10;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar27,cVar7));
          pcVar36 = (char *)CONCAT31(uVar23,bVar34 + *pbVar10);
          *pbVar15 = *pbVar15 + bVar27;
        }
        uVar23 = (undefined3)((uint)pcVar36 >> 8);
        bVar25 = (byte)pcVar36 | (byte)*puVar14;
        pbVar10 = (byte *)CONCAT31(uVar23,bVar25);
        puVar33 = unaff_ESI + (uint)bVar44 * -2 + 1;
        out(*unaff_ESI,(short)puVar14);
        LOCK();
        bVar6 = *pbVar10;
        *pbVar10 = bVar25;
        UNLOCK();
        *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
        piVar20 = (int *)(CONCAT31(uVar23,bVar6) + -0x1b7e07);
        *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
        iVar17 = (int)param_1 - *(int *)pbVar15;
        bVar6 = *(byte *)((int)puVar40 + -0x7a);
        uVar31 = (undefined2)((uint)iVar17 >> 0x10);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        bVar25 = (char)((uint)iVar17 >> 8) + bVar6 | *(byte *)((int)puVar40 + 0x17);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        uVar23 = (undefined3)(CONCAT22(uVar31,CONCAT11(bVar25,(byte)iVar17)) >> 8);
        bVar6 = (byte)iVar17 | *pbVar15;
        param_1 = (uint *)CONCAT31(uVar23,bVar6);
        pbVar10 = (byte *)((int)piVar20 + *piVar20);
        puVar37 = puVar33;
        if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e0a;
        *(byte *)param_1 = (byte)*param_1 + bVar6;
        *(byte **)pbVar15 = (byte *)(*(int *)pbVar15 + (int)puVar14);
        piVar20 = (int *)CONCAT31(uVar23,bVar6 + 0x27);
        param_1 = (uint *)CONCAT22(uVar31,CONCAT11(bVar25 + *(byte *)((int)puVar40 + -0x79),bVar6));
        *(byte *)piVar20 = (char)*piVar20 + bVar6 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(bVar38 | unaff_EBP[-0x62],cVar8));
  } while( true );
code_r0x00402dff:
  pbVar10 = (byte *)CONCAT22((short)((uint)piVar20 >> 0x10),
                             CONCAT11((byte)((uint)piVar20 >> 8) |
                                      *(byte *)((int)puVar14 + 0x2170411),(byte)piVar20));
  puVar37 = puVar33 + (uint)bVar44 * -2 + 1;
  out(*puVar33,(short)puVar14);
  *pbVar10 = (byte)piVar20;
  *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar10;
  *pbVar10 = *pbVar10 - cVar8;
  *pbVar10 = *pbVar10 + (char)pbVar10;
  bVar43 = false;
  bVar6 = (byte)((uint)param_1 >> 8) | bRam052b0603;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6,(char)param_1));
  puVar33 = puVar37;
code_r0x00402e19:
  if (bVar6 == 0 || bVar43 != (char)bVar6 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cRam89280411;
  piVar20 = (int *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                            CONCAT11((byte)((uint)pbVar10 >> 8) |
                                     *(byte *)((int)puVar14 + 0x7190411),cRam89280411));
  *(char *)piVar20 = (char)*piVar20 + cRam89280411;
  cVar7 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar14,cVar7));
  puVar33 = (uint *)((int)puVar33 + *piVar20);
  pbVar10 = (byte *)((int)piVar20 + *piVar20);
  bVar25 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar25;
  *(byte *)puVar33 = (byte)*puVar33 + cVar7;
  bVar6 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar25;
  *(char **)pbVar10 = unaff_EBP + (uint)CARRY1(bVar6,bVar25) + *(int *)pbVar10;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),*pbVar10);
  *(byte *)puVar14 = (byte)*puVar14 + cVar7;
  puVar37 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(byte)puVar14 | (byte)*puVar14);
  pbVar10 = (byte *)((int)puVar37 + -0x43);
  *pbVar10 = *pbVar10 + (char)((uint)puVar14 >> 8);
  puVar14 = puVar37;
  puVar37 = puVar40;
  uVar41 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar40 = puVar37;
  in_SS = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e6e;
  iVar17 = *(int *)((int)piVar20 + *piVar20);
  *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
  piVar20 = (int *)(iVar17 + -0x8c6f);
  puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                             CONCAT11((byte)((uint)puVar14 >> 8) | *(byte *)((int)puVar14 + -0x3f),
                                      (char)puVar14));
  pbVar21 = (byte *)((int)piVar20 + *piVar20);
  pbVar10 = pbVar21;
  puVar40 = uStackY_24;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar21 = *pbVar21 + (char)pbVar21;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar14,(char)param_1));
  puVar37 = puVar33 + (uint)bVar44 * -2 + 1;
  out(*puVar33,(short)puVar14);
  puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + (byte)*puVar40);
  puVar33 = puVar37 + (uint)bVar44 * -2 + 1;
  out(*puVar37,(short)puVar14);
  uVar41 = in_ES;
  in_SS = uVar42;
code_r0x00402e6e:
  in_ES = uVar41;
  uVar23 = (undefined3)((uint)puVar14 >> 8);
  cVar7 = (char)puVar14 + (byte)*puVar40;
  puVar37 = puVar33 + (uint)bVar44 * -2 + 1;
  out(*puVar33,(short)CONCAT31(uVar23,cVar7));
  puVar14 = (uint *)CONCAT31(uVar23,cVar7 + (byte)*puVar40);
  puVar33 = puVar37 + (uint)bVar44 * -2 + 1;
  out(*puVar37,(short)puVar14);
  pbVar10 = (byte *)0x0;
  puVar37 = puVar40;
code_r0x00402e81:
  puVar40 = puVar37;
  bVar25 = (char)pbVar10 - *pbVar10;
  iVar17 = CONCAT31((int3)((uint)pbVar10 >> 8),bVar25);
  *pbVar15 = *pbVar15 + (char)puVar14;
  pbVar21 = (byte *)(iVar17 * 2);
  *pbVar21 = *pbVar21 ^ bVar25;
  pbVar21 = (byte *)(int)(short)iVar17;
  *pbVar21 = *pbVar21 + bVar25;
  *(byte *)puVar40 = (byte)*puVar40 + (byte)param_1;
  bVar6 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar25;
  *(byte **)(pbVar15 + -0x73) =
       (byte *)((int)puVar33 + (uint)CARRY1(bVar6,bVar25) + *(int *)(pbVar15 + -0x73));
  *pbVar21 = *pbVar21 + bVar25;
  bVar6 = (byte)param_1 | (byte)*puVar14;
  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar6);
  puVar37 = puVar33;
  if ((char)bVar6 < '\x01') goto code_r0x00402eb4;
  *pbVar21 = *pbVar21 + bVar25;
  pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar10 >> 8),bVar25 + 0x2d);
  puVar33[(int)puVar40 * 2] =
       (uint)((int)puVar14 + (uint)(0xd2 < bVar25) + puVar33[(int)puVar40 * 2]);
  pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar42);
  do {
    uVar12 = *puVar33;
    bVar6 = (byte)pbVar10;
    *(byte *)puVar33 = (byte)*puVar33 + bVar6;
    if (!CARRY1((byte)uVar12,bVar6)) break;
    *pbVar10 = *pbVar10 + bVar6;
    bVar6 = bVar6 | pbVar10[0x400001a];
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6);
    if ((char)bVar6 < '\x01') {
code_r0x00402ecc:
      *pbVar21 = *pbVar21 + (byte)pbVar21;
      uVar23 = (undefined3)((uint)pbVar21 >> 8);
      bVar6 = (byte)pbVar21 | pbVar21[0x400001b];
      pcVar36 = (char *)CONCAT31(uVar23,bVar6);
      if ((char)bVar6 < '\x01') {
        uVar12 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + (byte)param_1;
        *(char *)((int)pcVar36 * 2) =
             *(char *)((int)pcVar36 * 2) - CARRY1((byte)uVar12,(byte)param_1);
        bVar43 = 0x81 < bVar6;
        bVar6 = bVar6 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar21 = *pbVar21 + bVar6;
      puVar37 = puVar33;
code_r0x00402eb4:
      uVar23 = (undefined3)((uint)pbVar21 >> 8);
      bVar6 = (char)pbVar21 + 0x6f;
      pcVar36 = (char *)CONCAT31(uVar23,bVar6);
      *(char **)pcVar36 = pcStackY_40;
      uVar12 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
      pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar42);
      in_DS = uVar42;
      if ((byte)*puVar14 != 0 && SCARRY1((byte)uVar12,(char)param_1) == (char)(byte)*puVar14 < '\0')
      {
        *pcVar36 = *pcVar36 + bVar6;
        bVar25 = (char)pbVar21 + 0x9c;
        pbVar21 = (byte *)CONCAT31(uVar23,bVar25);
        puVar37[(int)puVar40 * 2] =
             (uint)((int)puVar14 + (uint)(0xd2 < bVar6) + puVar37[(int)puVar40 * 2]);
        pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar42);
        uVar12 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + bVar25;
        puVar33 = puVar37;
        if (CARRY1((byte)uVar12,bVar25)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar33 = puVar37 + (uint)bVar44 * -2 + 1;
      out(*puVar37,(short)puVar14);
    }
    cVar7 = (char)pcVar36;
    *pcVar36 = *pcVar36 + cVar7;
    uVar23 = (undefined3)((uint)pcVar36 >> 8);
    bVar6 = cVar7 + 0x6f;
    pcVar36 = (char *)CONCAT31(uVar23,bVar6);
    *(char **)pcVar36 = pcStackY_40;
    uVar12 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + (byte)param_1;
    pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar42);
    *(byte *)(puVar33 + 7) = ((byte)puVar33[7] - bVar38) - CARRY1((byte)uVar12,(byte)param_1);
    *pcVar36 = *pcVar36 + bVar6;
    bVar25 = cVar7 + 0x9c;
    pcVar36 = (char *)CONCAT31(uVar23,bVar25);
    puVar33[(int)puVar40 * 2] =
         (uint)((int)puVar14 + (uint)(0xd2 < bVar6) + puVar33[(int)puVar40 * 2]);
    uVar12 = *puVar33;
    *(byte *)puVar33 = (byte)*puVar33 + bVar25;
    if (!CARRY1((byte)uVar12,bVar25)) goto code_r0x00402e7e;
    *pcVar36 = *pcVar36 + bVar25;
    bVar25 = bVar25 | pcVar36[0x400001c];
    pbVar10 = (byte *)CONCAT31(uVar23,bVar25);
    in_SS = uVar42;
    if ((char)bVar25 < '\x01') goto code_r0x00402f16;
    *pbVar10 = *pbVar10 + bVar25;
    pcVar36 = (char *)CONCAT31(uVar23,bVar25 + 0x6f);
    while( true ) {
      *(char **)pcVar36 = pcStackY_40;
      uVar12 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + (byte)param_1;
      *(uint *)((int)puVar33 + 0x1d) =
           (*(int *)((int)puVar33 + 0x1d) - (int)puVar40) - (uint)CARRY1((byte)uVar12,(byte)param_1)
      ;
      bVar6 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar6;
      bVar25 = bVar6 + 0x2d;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),bVar25);
      puVar33[(int)puVar40 * 2] =
           (uint)((int)puVar14 + (uint)(0xd2 < bVar6) + puVar33[(int)puVar40 * 2]);
      pcStackY_40 = (char *)CONCAT22((short)((uint)pcStackY_40 >> 0x10),uVar42);
      uVar12 = *puVar33;
      *(byte *)puVar33 = (byte)*puVar33 + bVar25;
      if (!CARRY1((byte)uVar12,bVar25)) break;
      *pbVar10 = *pbVar10 + bVar25;
code_r0x00402f16:
      bVar6 = (byte)pbVar10 | pbVar10[0x400001d];
      puVar37 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6);
      pcVar36 = unaff_EBP;
      if ((char)bVar6 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pcVar36;
        *(byte *)puVar37 = (byte)*puVar37 + (char)puVar37;
        uVar23 = (undefined3)((uint)puVar37 >> 8);
        cVar7 = (char)puVar37 + 'o';
        puVar39 = (uint *)CONCAT31(uVar23,cVar7);
        *puVar39 = (uint)pcStackY_40;
        cVar9 = (char)param_1;
        *(byte *)puVar14 = (byte)*puVar14 + cVar9;
        pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar42);
        bVar6 = (byte)((uint)puVar14 >> 8);
        bVar43 = bVar6 < (byte)*puVar33;
        puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                   CONCAT11(bVar6 - (byte)*puVar33,(char)puVar14));
        if (bVar43) break;
        bVar43 = CARRY4((uint)puVar39,*puVar39);
        puVar37 = (uint *)((int)puVar39 + *puVar39);
        if (!SCARRY4((int)puVar39,*puVar39)) {
          bVar43 = CARRY4((uint)unaff_EBP,*puVar37);
          unaff_EBP = unaff_EBP + *puVar37;
        }
        *puVar37 = (*puVar37 - (int)puVar37) - (uint)bVar43;
        *(byte *)puVar14 = (byte)*puVar14 + cVar9;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((char)((uint)param_1 >> 8) + (byte)*puVar14,
                                            cVar9 - (byte)*puVar14));
        *(byte *)puVar37 = (byte)*puVar37 + (char)puVar37;
code_r0x00402f3b:
        cVar9 = (char)puVar14;
        *pbVar15 = *pbVar15 + cVar9;
        bVar6 = (byte)puVar37;
        *(byte *)((int)puVar37 * 2) = *(byte *)((int)puVar37 * 2) ^ bVar6;
        *(byte *)puVar37 = (byte)*puVar37 + bVar6;
        *(byte *)puVar37 = (byte)*puVar37 + cVar9;
        uVar12 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + bVar6;
        *puVar14 = (uint)((int)puVar37 + (uint)CARRY1((byte)uVar12,bVar6) + *puVar14);
        pcVar36 = (char *)((uint)puVar37 | *puVar40);
        uVar23 = (undefined3)((uint)pcVar36 >> 8);
        cVar7 = (char)pcVar36 + *pcVar36;
        pcVar36 = (char *)CONCAT31(uVar23,cVar7);
        *pcVar36 = *pcVar36 + cVar7;
        cVar7 = cVar7 + *pcVar36;
        piVar20 = (int *)CONCAT31(uVar23,cVar7);
        *(char *)piVar20 = (char)*piVar20 + cVar7;
        iVar17 = LocalDescriptorTableRegister();
        *piVar20 = iVar17;
        bVar6 = *pbVar15;
        bVar28 = (byte)((uint)param_1 >> 8);
        *pbVar15 = *pbVar15 + bVar28;
        iVar17 = *piVar20;
        uVar31 = (undefined2)((uint)param_1 >> 0x10);
        bVar27 = (byte)param_1;
        *(byte *)puVar33 = (byte)*puVar33 + cVar7;
        puVar37 = puVar33 + (uint)bVar44 * -2 + 1;
        out(*puVar33,(short)puVar14);
        *(byte *)puVar37 = (byte)*puVar37 + cVar7;
        bVar25 = *pbVar15;
        *(byte *)puVar14 = (byte)*puVar14 - bVar38;
        *(byte *)puVar37 = (byte)*puVar37 + cVar7;
        puVar39 = puVar37 + (uint)bVar44 * -2 + 1;
        out(*puVar37,(short)puVar14);
        *(byte *)puVar39 = (byte)*puVar39 + cVar7;
        bVar34 = *pbVar15;
        *(uint *)((int)puVar14 + -0x23) = *(uint *)((int)puVar14 + -0x23) & (uint)puVar39;
        puVar22 = (ushort *)((int)piVar20 + *piVar20);
        if (!SCARRY4((int)piVar20,*piVar20)) {
          *puVar22 = in_DS;
        }
        *(char *)puVar22 = (char)*puVar22 + (char)puVar22;
        uVar32 = CONCAT11((char)((uint)puVar14 >> 8) + *(byte *)((int)puVar14 + -0x15),cVar9);
        puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),uVar32);
        puVar37 = (uint *)((int)puVar22 + *(int *)puVar22);
        if (!SCARRY4((int)puVar22,*(int *)puVar22)) {
          *(ushort *)puVar37 = in_DS;
        }
        cVar7 = (char)puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + cVar7;
        cVar29 = ((bVar28 - (char)iVar17) - CARRY1(bVar6,bVar28) | bVar25 | bVar34) + (byte)*puVar37
        ;
        param_1 = (uint *)CONCAT22(uVar31,CONCAT11(cVar29,bVar27));
        uVar12 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + bVar27;
        if (CARRY1((byte)uVar12,bVar27)) {
          *(byte *)puVar37 = (byte)*puVar37 + cVar7;
          bVar6 = *(byte *)((int)puVar14 + 6);
          *(byte *)puVar14 = (byte)*puVar14 + bVar27;
          bVar25 = (cVar29 - (byte)*puVar39) + cRam14730307;
          *(byte *)puVar37 = (byte)*puVar37 + cVar7;
          bVar6 = bVar38 | bVar6 | *(byte *)((int)puVar14 + 0x2a);
          uVar12 = *puVar37;
          pbVar10 = (byte *)((int)puVar37 + (uint)CARRY1(bVar25,(byte)*puVar37) + *puVar37);
          *(byte *)puVar14 = (byte)*puVar14 + bVar27;
          cVar7 = cVar8 - (byte)*puVar39;
          cVar8 = bVar6 + *(char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar6,cVar8)) >> 8),
                                             cVar7) + 0x1e);
          *pbVar10 = *pbVar10 + (char)pbVar10;
          uVar23 = (undefined3)((uint)pbVar10 >> 8);
          bVar6 = (char)pbVar10 + 0x2aU & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x1f);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x20);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x21);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x22);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          bVar25 = bVar25 + (byte)uVar12 + *pcVar36;
          uVar24 = CONCAT22(uVar31,CONCAT11(bVar25,bVar27));
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x25);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(
                                                  cVar8,cVar7)) + 0x26),cVar7));
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          cVar7 = bVar6 + 0x2a;
          pcVar36 = (char *)CONCAT31(uVar23,cVar7);
          if ((POPCOUNT(cVar7) & 1U) == 0) {
            *pcVar36 = *pcVar36 + cVar7;
            pbVar10 = (byte *)(CONCAT31(uVar23,bVar6 + 0x4f) + -0x33282610);
            bVar6 = *pbVar10;
            bVar34 = (byte)pbVar10;
            *pbVar10 = *pbVar10 + bVar34;
            uVar23 = (undefined3)((uint)pbVar10 >> 8);
            if (!CARRY1(bVar6,bVar34)) {
              if (!SCARRY1(bVar34,'\0')) {
                *pbVar10 = *pbVar10 + bVar34;
                uVar24 = CONCAT22(uVar31,CONCAT11(bVar25 | (byte)*puVar14,bVar27));
                bVar34 = bVar34 & (byte)*puVar14;
                *(char *)CONCAT31(uVar23,bVar34) = *(char *)CONCAT31(uVar23,bVar34) + bVar34;
                pcVar36 = (char *)CONCAT31(uVar23,bVar34 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar36 = (char *)CONCAT31(uVar23,bVar34 + *pcVar11);
              if (SCARRY1(bVar34,*pcVar11) != (char)(bVar34 + *pcVar11) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar6 = bVar34 + *pcVar11;
            pbVar10 = (byte *)CONCAT31(uVar23,bVar6);
            if (SCARRY1(bVar34,*pcVar11) == (char)bVar6 < '\0') {
              pcVar36 = (char *)CONCAT22(uVar31,CONCAT11(bVar25 | (byte)*puVar14,bVar27));
              *pcVar11 = *pcVar11 + cVar9;
              *(byte *)puVar14 = (byte)*puVar14 ^ bVar6;
              *(char *)((int)pbVar10 * 2) = *(char *)((int)pbVar10 * 2) + bVar6;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar36 = *pcVar36 + (char)pcVar36;
            uVar23 = (undefined3)((uint)pcVar36 >> 8);
            bVar6 = (char)pcVar36 + 0x2aU & (byte)*puVar14;
            *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
            pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
            *pcVar36 = *pcVar36 + bVar6 + 0x2a;
            pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x54 & (byte)*puVar14);
code_r0x00403072:
            cVar7 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar7;
            uVar23 = (undefined3)((uint)pcVar36 >> 8);
            pcVar36 = (char *)CONCAT31(uVar23,cVar7 + '*');
            *pcVar36 = *pcVar36 + cVar7 + '*';
            bVar6 = cVar7 + 0x54U & (byte)*puVar14;
            *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
            pcStackY_78 = (char *)CONCAT22(pcStackY_78._2_2_,in_ES);
            uVar24 = CONCAT22((short)((uint)uVar24 >> 0x10),
                              CONCAT11((char)((uint)uVar24 >> 8) +
                                       *(char *)CONCAT31(uVar23,bVar6 + 0x2a),(char)uVar24));
            *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar9;
            pcVar36 = pcStackY_78;
code_r0x0040309a:
            cVar7 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar7;
            pcStackY_78 = (char *)CONCAT22(pcStackY_78._2_2_,uVar42);
            *pcVar36 = *pcVar36 + cVar7;
            pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar7 + 0x2aU & (byte)*puVar14);
          }
          cVar7 = (char)pbVar10;
          *pbVar10 = *pbVar10 + cVar7;
          uVar23 = (undefined3)((uint)pbVar10 >> 8);
          cVar8 = cVar7 + '*';
          pcVar36 = (char *)CONCAT31(uVar23,cVar8);
          *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar9;
          *pcVar36 = *pcVar36 + cVar8;
          cVar29 = (char)pcStackY_78 - (byte)*puVar39;
          pcVar11 = (char *)CONCAT22((short)((uint)pcStackY_78 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_78 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_78 >> 8),
                                                                 cVar29) + 0x34),cVar29));
          *pcVar36 = *pcVar36 + cVar8;
          bVar6 = cVar7 + 0x54U & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pbVar10 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
          bVar6 = (byte)((uint)uVar24 >> 8);
          pcVar36 = (char *)CONCAT22((short)((uint)uVar24 >> 0x10),
                                     CONCAT11(bVar6 + *pbVar10,(char)uVar24));
          pbVar10 = pbVar10 + (uint)CARRY1(bVar6,*pbVar10) + *(int *)pbVar10;
          *(byte *)puVar14 = (byte)*puVar14 + (char)uVar24;
          uVar23 = (undefined3)((uint)pbVar10 >> 8);
          cVar7 = (byte)pbVar10 - *pbVar10;
          piVar20 = (int *)CONCAT31(uVar23,cVar7);
          puVar39 = (uint *)((int)puVar39 + (uint)((byte)pbVar10 < *pbVar10) + *piVar20);
          cVar7 = cVar7 + (char)*piVar20;
          pbVar10 = (byte *)CONCAT31(uVar23,cVar7);
          *pbVar10 = *pbVar10 + cVar7;
code_r0x004030df:
          *pcVar36 = *pcVar36 + cVar9;
          bVar6 = *pbVar10;
          bVar25 = (byte)pbVar10;
          *pbVar10 = *pbVar10 + bVar25;
          *(byte **)(pcVar11 + -0x41) =
               (byte *)((int)puVar39 + (uint)CARRY1(bVar6,bVar25) + *(int *)(pcVar11 + -0x41));
          *pbVar10 = *pbVar10 + bVar25;
          uVar23 = (undefined3)((uint)pbVar10 >> 8);
          bVar25 = bVar25 | (byte)*puVar39;
          *(char *)CONCAT31(uVar23,bVar25) = *(char *)CONCAT31(uVar23,bVar25) + bVar25;
          pcVar36 = (char *)CONCAT31(uVar23,bVar25 + 0x7b);
          *pcVar36 = *pcVar36 + bVar25 + 0x7b;
          pbVar10 = (byte *)((int)puVar39 + CONCAT31(uVar23,bVar25 - 8) + -1);
          *pbVar10 = *pbVar10 + (bVar25 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar33 = puVar39 + (uint)bVar44 * -2 + 1;
        out(*puVar39,uVar32);
        pcVar36 = unaff_EBP + 1;
        pcStackY_40 = unaff_EBP;
      }
      bVar6 = cVar7 - bVar43;
      pbVar10 = (byte *)((int)puVar33 + (int)puVar40 * 2);
      bVar43 = CARRY1(*pbVar10,bVar6);
      *pbVar10 = *pbVar10 + bVar6;
code_r0x00402ef9:
      pcVar36 = (char *)CONCAT31(uVar23,bVar6 - bVar43);
      pbVar10 = (byte *)((int)puVar40 + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10 + (bVar6 - bVar43);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)param_1 = (byte)*param_1 + (char)puVar14;
  puVar37 = puVar14 + 0x2828000;
  bVar6 = (byte)param_1;
  bVar43 = (byte)*puVar37 < bVar6;
  *(byte *)puVar37 = (byte)*puVar37 - bVar6;
  bVar6 = (byte)pbVar10 + *pbVar10;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6 + bVar43);
  puVar37 = puVar40;
  uVar41 = in_ES;
  if (CARRY1((byte)pbVar10,*pbVar10) || CARRY1(bVar6,bVar43)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar36 = *pcVar36 + bVar25;
  uVar41 = in_ES;
  in_SS = uVar42;
  goto code_r0x00402e6e;
}


