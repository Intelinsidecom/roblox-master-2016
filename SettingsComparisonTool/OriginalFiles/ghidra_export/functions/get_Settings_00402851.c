/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402851
 * Raw Name    : get_Settings
 * Demangled   : get_Settings
 * Prototype   : pointer get_Settings(undefined4 param_1, uint * param_2)
 * Local Vars  : pcStackY_7c, pcStackY_44, puStackY_30, puStackY_2c, uStackY_28, pcStack_8, uVar1, uVar2, uVar3, uVar4, uVar5, bVar6, cVar7, cVar8, in_EAX, pbVar9, pcVar10, uVar11, uVar12, puVar13, pbVar14, piVar15, iVar16, pcVar17, pcVar18, puVar19, piVar20, pbVar21, puVar22, uVar23, extraout_ECX, extraout_ECX_00, param_1, uVar24, bVar25, param_2, cVar26, bVar27, bVar28, cVar29, uVar30, uVar31, uVar32, bVar33, cVar34, uVar35, unaff_EBX, pcVar36, puVar37, bVar38, unaff_EBP, unaff_ESI, puVar39, unaff_EDI, puVar40, puVar41, in_ES, uVar42, uVar43, in_CS, in_SS, in_DS, in_GS_OFFSET, bVar44, in_AF, in_TF, in_IF, bVar45, bVar46, in_NT, uVar47
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

undefined * __fastcall get_Settings(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char *in_EAX;
  undefined3 uVar23;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  byte *pbVar14;
  int *piVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  uint *puVar19;
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
  byte bVar33;
  undefined2 uVar32;
  char cVar34;
  undefined1 uVar35;
  byte bVar38;
  int unaff_EBX;
  char *pcVar36;
  uint *puVar37;
  char *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar39;
  int unaff_EDI;
  uint *puVar40;
  uint *puVar41;
  ushort in_ES;
  ushort uVar42;
  ushort uVar43;
  ushort in_CS;
  ushort in_SS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar44;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar45;
  bool bVar46;
  byte in_NT;
  undefined8 uVar47;
  char *pcStackY_7c;
  char *pcStackY_44;
  uint *puStackY_30;
  uint *puStackY_2c;
  undefined4 uStackY_28;
  char *pcStack_8;
  
  bVar45 = false;
                    /* .NET CLR Managed Code */
  puVar37 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x11),
                                      (char)unaff_EBX));
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar23 = (undefined3)((uint)in_EAX >> 8);
  bVar6 = (char)in_EAX + 0x2aU & (byte)*param_2;
  pcVar36 = (char *)CONCAT31(uVar23,bVar6);
  puVar40 = (uint *)(unaff_EDI + *(int *)(unaff_EBP + 0x11));
  *pcVar36 = *pcVar36 + bVar6;
  pbVar9 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
  bVar6 = (byte)((uint)param_1 >> 8);
  puVar19 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6 + *pbVar9,(char)param_1))
  ;
  pbVar9 = pbVar9 + (uint)CARRY1(bVar6,*pbVar9) + *(int *)pbVar9;
  do {
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    cVar34 = (char)puVar37 - (byte)*unaff_ESI;
    iVar16 = CONCAT22((short)((uint)puVar37 >> 0x10),
                      CONCAT11((char)((uint)puVar37 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),cVar34) + 0x12),cVar34)
                     );
    *pbVar9 = *pbVar9 + (char)pbVar9;
    uVar23 = (undefined3)((uint)pbVar9 >> 8);
    bVar6 = (char)pbVar9 + 0x2aU & (byte)*param_2;
    pcVar36 = (char *)CONCAT31(uVar23,bVar6);
    puVar40 = (uint *)((int)puVar40 + *(int *)(unaff_EBP + 0x12));
    *pcVar36 = *pcVar36 + bVar6;
    puVar13 = (uint *)CONCAT31(uVar23,bVar6 + 0x2a);
    pcStack_8 = (char *)(uint)in_DS;
get_Value:
    cVar34 = *(char *)(iVar16 + 0x13);
    *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
    uVar23 = (undefined3)((uint)puVar13 >> 8);
    bVar6 = (char)puVar13 + 0x2aU & (byte)*param_2;
    pcVar36 = (char *)CONCAT31(uVar23,bVar6);
    puVar40 = (uint *)((int)puVar40 + *(int *)(unaff_EBP + 0x13));
    *pcVar36 = *pcVar36 + bVar6;
    pbVar9 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
    bVar6 = (byte)((uint)puVar19 >> 8);
    bVar25 = bVar6 + *pbVar9;
    pbVar9 = pbVar9 + (uint)CARRY1(bVar6,*pbVar9) + *(int *)pbVar9;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    puVar37 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar16 >> 0x10),
                                               CONCAT11((char)((uint)iVar16 >> 8) + cVar34,
                                                        (char)iVar16)) >> 8),
                               (char)iVar16 - (byte)*unaff_ESI);
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11(bVar25 + *pbVar9,(char)puVar19));
    pbVar9 = pbVar9 + (uint)CARRY1(bVar25,*pbVar9) + *(int *)pbVar9;
    uVar42 = in_DS;
code_r0x00402898:
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    bVar6 = (byte)param_2;
    uVar30 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar6);
    pbVar14 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
    pcVar36 = (char *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((char)((uint)puVar37 >> 8) + (byte)puVar37[-0x19],
                                        (char)puVar37));
    *pbVar9 = *pbVar9 + (char)pbVar9;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + '\x03');
    puVar37 = unaff_ESI;
    do {
      unaff_ESI = puVar37 + 1;
      out(*puVar37,uVar30);
      pcVar36 = pcVar36 + -1;
      bVar25 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar25;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((byte)((uint)puVar19 >> 8) | *pbVar14,(char)puVar19));
      *pbVar9 = *pbVar9 + bVar25;
      *pcVar36 = *pcVar36 + bVar6;
      *(byte *)((int)pbVar9 * 2) = *(byte *)((int)pbVar9 * 2) ^ bVar25;
      *pbVar9 = *pbVar9 + bVar25;
      *pbVar9 = *pbVar9 | bVar25;
      bVar44 = CARRY1((byte)*puVar19,bVar6);
      *(byte *)puVar19 = (byte)*puVar19 + bVar6;
      cVar34 = bVar25 + 10 + bVar44;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar34);
      puVar37 = unaff_ESI;
    } while (bVar25 < 0xf6 && !CARRY1(bVar25 + 10,bVar44));
    *pbVar9 = *pbVar9 + cVar34;
    pcVar10 = (char *)((uint)pbVar9 | *puVar40);
    puVar37 = (uint *)CONCAT22((short)((uint)pcVar36 >> 0x10),
                               CONCAT11((char)((uint)pcVar36 >> 8) + unaff_EBP[-100],(char)pcVar36))
    ;
    *pcVar10 = *pcVar10 + (char)pcVar10;
    bVar6 = (char)pcVar10 + 7;
    uVar47 = CONCAT44(pbVar14,CONCAT31((int3)((uint)pcVar10 >> 8),bVar6));
code_r0x004028c8:
    param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
    pbVar9 = (byte *)uVar47;
  } while ((POPCOUNT(bVar6) & 1U) != 0);
  *pbVar9 = *pbVar9 + (char)uVar47;
  puVar13 = (uint *)CONCAT31((int3)((ulonglong)uVar47 >> 8),(char)uVar47 + '-');
  unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
  bVar44 = CARRY4(*puVar13,(uint)puVar13);
  uVar11 = *puVar13;
  *puVar13 = (uint)(*puVar13 + (int)puVar13);
  if (SCARRY4(uVar11,(int)puVar13)) {
    bVar44 = CARRY4(*puVar13,(uint)puVar13);
    bVar46 = SCARRY4(*puVar13,(int)puVar13);
    *puVar13 = (uint)(*puVar13 + (int)puVar13);
    bVar6 = POPCOUNT(*puVar13 & 0xff);
    if (bVar46) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 + bVar44);
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    bVar44 = (POPCOUNT((byte)*param_2) & 1U) == 0;
    if (bVar44) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar44) {
      iVar16 = CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 - (byte)*unaff_ESI);
      goto get_Value;
    }
    *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 + 'r');
    pcStack_8 = unaff_EBP;
code_r0x004028e2:
    uVar11 = *puVar13;
    *puVar13 = (uint)(*puVar13 + (int)puVar13);
    if (SCARRY4(uVar11,(int)puVar13)) {
      if (*puVar13 == 0 || SCARRY4(uVar11,(int)puVar13) != (int)*puVar13 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar37 = (uint *)((int)puVar37 + -1);
    cVar34 = (char)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + cVar34;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((byte)((uint)puVar19 >> 8) |
                                        *(byte *)((int)puVar19 + 0x16d7207),(char)puVar19));
    pbVar9 = (byte *)((int)puVar13 + 0x7d);
    bVar6 = *pbVar9;
    bVar33 = (byte)((uint)param_2 >> 8);
    bVar25 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar33;
    uVar42 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY1(bVar25,bVar33) * 0x800 |
             (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
             (ushort)((char)*pbVar9 < '\0') * 0x80 | (ushort)(*pbVar9 == 0) * 0x40 |
             (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(*pbVar9) & 1U) == 0) * 4 |
             (ushort)CARRY1(bVar6,bVar33);
    *(byte *)puVar13 = (byte)*puVar13 + cVar34;
    pbVar9 = (byte *)(CONCAT31((int3)((uint)puVar13 >> 8),cVar34 + '+') ^ *puVar40);
    if ((POPCOUNT((uint)pbVar9 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar6 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar6;
    puVar13 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6 + 0x72);
    if (bVar6 < 0x8e && (byte)(bVar6 + 0x72) != '\0') {
      uVar43 = in_CS;
      if (SCARRY1(bVar6,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar13 + 0x6f) = *(byte *)((int)puVar13 + 0x6f) + bVar33;
    }
code_r0x00402905:
    in_ES = uVar42;
    uVar47 = CONCAT44(param_2,puVar13);
    puVar37 = (uint *)((int)puVar37 + -1);
    cVar34 = (char)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + cVar34;
    bVar6 = (byte)((uint)puVar19 >> 8) | (byte)*puVar19;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar6,(char)puVar19));
    if ((char)bVar6 < '\x01') {
      *(byte *)puVar13 = (byte)*puVar13 + cVar34;
      puVar40 = (uint *)((int)puVar40 - *(int *)(unaff_EBP + -100));
      uVar42 = in_ES;
      goto code_r0x00402929;
    }
    *(byte *)puVar13 = (byte)*puVar13 + cVar34;
    uVar42 = 0x291c;
    uVar47 = func_0x7346291c();
    *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
    puVar19 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                               (byte)extraout_ECX | *(byte *)((ulonglong)uVar47 >> 0x20));
    puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,in_ES);
    uStackY_28 = puVar37;
    while( true ) {
      pcVar36 = (char *)((int)uVar47 * 2);
      *pcVar36 = *pcVar36 - (char)puVar19;
      uVar11 = *puVar37;
      cVar34 = (char)((uint)puVar19 >> 8);
      *(byte *)puVar37 = (byte)*puVar37 + cVar34;
      if (SCARRY1((byte)uVar11,cVar34) == (char)(byte)*puVar37 < '\0') {
        pbVar9 = (byte *)((int)puVar40 + (int)uVar47);
        *pbVar9 = *pbVar9 + (char)uVar47;
        bVar6 = *pbVar9;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
      cVar34 = (char)uVar47;
      *(char *)uVar47 = *(char *)uVar47 + cVar34;
      uVar23 = (undefined3)((ulonglong)uVar47 >> 8);
      bVar6 = cVar34 + 7;
      puVar13 = (uint *)CONCAT31(uVar23,bVar6);
      bVar25 = (byte)((ulonglong)uVar47 >> 0x28);
      if ((POPCOUNT(bVar6) & 1U) != 0) break;
      *(byte *)puVar13 = (byte)*puVar13 + bVar6;
      pcVar36 = (char *)CONCAT31(uVar23,cVar34 + '3');
      uVar30 = (undefined2)((uint)puVar37 >> 0x10);
      uVar35 = SUB41(puVar37,0);
      bVar6 = (char)((uint)puVar37 >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar6);
      puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar35));
      *pcVar36 = *pcVar36 + cVar34 + '3';
      cVar7 = cVar34 + ':';
      puVar13 = (uint *)CONCAT31(uVar23,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) {
        bVar6 = bVar6 | *(byte *)((int)param_2 + 7);
        puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar35));
        bVar44 = (POPCOUNT(bVar6) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar13 = (byte)*puVar13 + cVar7;
      puVar13 = (uint *)(CONCAT31(uVar23,cVar34 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar9 = (byte *)((int)puVar13 + 0x72);
      bVar46 = SCARRY1(*pbVar9,bVar25);
      *pbVar9 = *pbVar9 + bVar25;
      bVar6 = POPCOUNT(*pbVar9);
code_r0x0040294c:
      if ((bVar6 & 1) == 0) {
        *(byte *)((int)puVar13 + 0x72) = *(byte *)((int)puVar13 + 0x72) + (char)((uint)param_2 >> 8)
        ;
      }
      else if (bVar46) {
        unaff_EBP = *(char **)unaff_EBP;
        cVar34 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (char *)0x7e700001;
      puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,in_SS);
code_r0x00402957:
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
      cVar34 = (char)puVar13 + '(';
      puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),cVar34);
      *(byte *)puVar13 = (byte)*puVar13 + cVar34;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*puVar13,(char)puVar19)
                                );
      *(byte *)puVar13 = (byte)*puVar13 + cVar34;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar37[0x18],
                                          (char)param_2));
      unaff_ESI = puStackY_30;
      puVar40 = puStackY_2c;
code_r0x00402966:
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
      bVar6 = (byte)((uint)puVar37 >> 8) | *(byte *)((int)param_2 + 7);
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar6,(char)puVar37));
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
      puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 + '~');
      uVar4 = in_SS;
code_r0x00402972:
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
      uVar43 = in_CS;
      uVar42 = uVar4;
code_r0x00402974:
      bVar6 = 0xe9 < (byte)puVar13;
      in_CS = 0x2d0a;
      uVar47 = func_0x00006128(uVar43);
      puVar19 = (uint *)uVar47;
      piVar20 = (int *)((int)((ulonglong)uVar47 >> 0x20) + -0x3d);
      *piVar20 = (int)((int)unaff_ESI + (uint)bVar6 + *piVar20);
      bVar44 = SCARRY4(*puVar19,(int)puVar19);
      *puVar19 = *puVar19 + (int)puVar19;
      uVar11 = *puVar19;
      puVar19 = extraout_ECX_00;
code_r0x00402982:
      bVar6 = POPCOUNT(uVar11 & 0xff);
      if (bVar44) {
        *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
        puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                   CONCAT11((byte)((uint)puVar19 >> 8) |
                                            *(byte *)((ulonglong)uVar47 >> 0x20),(char)puVar19));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar36 = (char *)((ulonglong)uVar47 >> 0x20);
      if ((bVar6 & 1) == 0) {
        *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
        *pcVar36 = *pcVar36 + (char)puVar19;
        uVar47 = CONCAT44(CONCAT22((short)((ulonglong)uVar47 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar47 >> 0x28) - pcVar36[0x1f],
                                            (char)((ulonglong)uVar47 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar47 >> 8),(char)uVar47 + '('));
code_r0x00402991:
        param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
        pbVar9 = (byte *)uVar47;
        bVar6 = (byte)uVar47;
        bVar44 = CARRY1(bVar6,*pbVar9);
        puVar13 = (uint *)CONCAT31((int3)((ulonglong)uVar47 >> 8),bVar6 + *pbVar9);
        cVar34 = bVar6 + *pbVar9;
        if (SCARRY1(bVar6,*pbVar9)) goto code_r0x004029c4;
code_r0x00402995:
        param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11(((char)((uint)param_2 >> 8) -
                                            *(byte *)((int)param_2 + 0x6b)) - bVar44,(char)param_2))
        ;
        bVar6 = (byte)puVar13;
        bVar44 = CARRY1(bVar6,(byte)*puVar13);
        bVar46 = SCARRY1(bVar6,(byte)*puVar13);
        puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar6 + (byte)*puVar13);
        do {
          if (!bVar46) {
            unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar44 + *puVar13);
            pbVar9 = (byte *)((int)puVar13 + *puVar13);
            bVar25 = (byte)pbVar9;
            *pbVar9 = *pbVar9 + bVar25;
            *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
            bVar6 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar25;
            *puVar40 = (uint)((int)puVar37 + (uint)CARRY1(bVar6,bVar25) + *puVar40);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar19;
            uVar23 = (undefined3)((uint)pbVar9 >> 8);
            bVar25 = bVar25 | (byte)*unaff_ESI;
            puVar13 = (uint *)CONCAT31(uVar23,bVar25);
            uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
            uVar11 = *puVar13;
            uVar1 = *puVar13;
            *puVar13 = (uint)(*puVar13 + (int)puVar13);
            if (SCARRY4(uVar1,(int)puVar13)) {
              *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)puVar37;
              *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
              *(byte *)puVar40 = (byte)*puVar40 - (char)puVar37;
            }
            else {
              puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,in_ES);
              in_SS = in_ES;
              uVar4 = in_ES;
              if (CARRY4(uVar11,(uint)puVar13)) goto code_r0x00402972;
              bVar44 = CARRY1(bVar25,(byte)*puVar13);
              bVar46 = SCARRY1(bVar25,(byte)*puVar13);
              puVar13 = (uint *)CONCAT31(uVar23,bVar25 + (byte)*puVar13);
code_r0x004029be:
              if (!bVar46) {
                puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,in_ES);
                *(byte *)((int)param_2 + -0x37) =
                     (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar44;
                cVar34 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar34;
                bVar6 = (byte)puVar13;
                bVar44 = CARRY1(bVar6,(byte)*puVar13);
                bVar46 = SCARRY1(bVar6,(byte)*puVar13);
                puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar6 + (byte)*puVar13);
                goto code_r0x004029c6;
              }
            }
            bVar6 = (byte)puVar19;
            bVar44 = CARRY1((byte)*param_2,bVar6);
            bVar46 = SCARRY1((byte)*param_2,bVar6);
            *(byte *)param_2 = (byte)*param_2 + bVar6;
            if (bVar44) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar46) {
            in_ES = (ushort)pcStack_8;
            goto code_r0x00402966;
          }
          *(uint *)((int)param_2 + -0x23) =
               (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar44;
          uVar11 = *puVar13;
          bVar25 = (byte)puVar13;
          uVar1 = *puVar13;
          uVar23 = (undefined3)((uint)puVar13 >> 8);
          bVar6 = bVar25 + (byte)*puVar13;
          puVar13 = (uint *)CONCAT31(uVar23,bVar6);
          uVar4 = in_ES;
          if (SCARRY1(bVar25,(byte)uVar1)) goto code_r0x00402972;
          cVar34 = (char)param_2;
          bVar33 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                   CARRY1(bVar25,(byte)uVar11);
          param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar33,cVar34));
          puVar39 = (uint *)CONCAT31(uVar23,bVar6 + (byte)*puVar13);
          bVar25 = (byte)puVar19;
          uVar42 = in_ES;
          if (SCARRY1(bVar6,(byte)*puVar13)) {
            *(byte *)param_2 = (byte)*param_2 + bVar25;
            uVar47 = CONCAT44(param_2,(int)puVar39 + -0x1c37211);
            pcVar36 = (char *)((int)puVar39 + -0x1c3720a);
            *pcVar36 = *pcVar36 + bVar33;
            bVar6 = POPCOUNT(*pcVar36);
            goto code_r0x00402984;
          }
          unaff_ESI = (uint *)((int)unaff_ESI +
                              (-(uint)CARRY1(bVar6,(byte)*puVar13) - *(int *)((int)param_2 + 5)));
          bVar44 = SCARRY4((int)puVar39,*puVar39);
          uVar11 = (int)puVar39 + *puVar39;
          uVar47 = CONCAT44(param_2,uVar11);
          if (bVar44) goto code_r0x00402982;
          bVar6 = (byte)uVar11 + 0x8e;
          uVar12 = CONCAT31((int3)(uVar11 >> 8),bVar6 - CARRY4((uint)puVar39,*puVar39));
          *puVar37 = (*puVar37 - uVar12) -
                     (uint)((byte)uVar11 < 0x72 || bVar6 < CARRY4((uint)puVar39,*puVar39));
          pbVar9 = (byte *)(uVar12 - 0x5e);
          bVar6 = *pbVar9;
          *pbVar9 = *pbVar9 + bVar33;
          uVar11 = (uint)CARRY1(bVar6,bVar33);
          uVar1 = uVar12 - 0x32d72;
          puVar13 = (uint *)(uVar1 - uVar11);
          if (SBORROW4(uVar12,0x32d72) != SBORROW4(uVar1,uVar11)) goto code_r0x00402992;
          uVar43 = in_DS;
          if (uVar12 < 0x32d72 || uVar1 < uVar11) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar13 >> 8);
            *(byte *)param_2 = (byte)*param_2 + bVar25;
            puVar39 = unaff_ESI + 1;
            out(*unaff_ESI,CONCAT11(bVar33,cVar34));
            *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
            goto code_r0x00402a3e;
          }
          bVar44 = CARRY4((uint)puVar13,*puVar13);
          bVar46 = SCARRY4((int)puVar13,*puVar13);
          puVar13 = (uint *)((int)puVar13 + *puVar13);
          if (!bVar46) {
            uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_ES);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar44;
            bVar6 = (byte)puVar13;
            *(byte *)((int)param_2 + (int)unaff_EBP) =
                 *(byte *)((int)param_2 + (int)unaff_EBP) + bVar6;
            *(byte *)puVar37 = (byte)*puVar37 + cVar34;
            *(byte *)puVar37 = (byte)*puVar37 ^ bVar6;
            bVar27 = (byte)((uint)puVar19 >> 8);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar27;
            *(byte *)puVar13 = (byte)*puVar13 + bVar6;
            pbVar14 = (byte *)CONCAT31((int3)((uint)puVar13 >> 8),bVar6 | (byte)*puVar13);
            *(byte *)puVar19 = (byte)*puVar19 + cVar34;
            bVar38 = *pbVar14;
            uVar30 = (undefined2)((uint)puVar19 >> 0x10);
            puVar19 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar38,bVar25));
            pbVar14 = pbVar14 + (uint)CARRY1(bVar27,*pbVar14) + *(int *)pbVar14;
            *(byte *)param_2 = (byte)*param_2 + bVar25;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar9 = pbVar14 + 0x73;
            bVar6 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar33;
            uVar23 = (undefined3)((uint)pbVar14 >> 8);
            bVar6 = (char)pbVar14 + CARRY1(bVar6,bVar33);
            pcVar36 = (char *)CONCAT31(uVar23,bVar6);
            *(byte *)param_2 = (byte)*param_2 + bVar25;
            if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
              in_SS = in_ES;
            }
            puVar41 = (uint *)((int)puVar40 + *(int *)(unaff_EBP + 0x17));
            *pcVar36 = *pcVar36 + bVar6;
            cVar34 = bVar6 + 2;
            puVar13 = (uint *)CONCAT31(uVar23,cVar34);
            if (bVar6 < 0xfe) {
              *puVar13 = (uint)(*puVar13 + (int)puVar13);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar13 = (byte)*puVar13 + cVar34;
            uVar11 = *param_2;
            puVar39 = (uint *)((int)unaff_ESI + puVar37[0x19]);
            *(byte *)puVar13 = (byte)*puVar13 + cVar34;
            puVar19 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar38 | (byte)*puVar13,
                                                       bVar25 | (byte)uVar11));
            puVar40 = puVar41;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar6;
    pbVar9 = (byte *)((int)puVar13 + 0x73);
    bVar44 = CARRY1(*pbVar9,bVar25);
    *pbVar9 = *pbVar9 + bVar25;
  } while( true );
code_r0x00402992:
  pbVar9 = (byte *)((int)puVar13 + 0x2a);
  bVar44 = CARRY1(*pbVar9,bVar33);
  *pbVar9 = *pbVar9 + bVar33;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar13) = *(byte *)(in_GS_OFFSET + (int)puVar13) + (char)puVar13;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | *(byte *)((int)puVar40 + 0x66),
                                      (char)puVar19));
  *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
code_r0x00402a3e:
  uVar23 = (undefined3)((uint)puVar13 >> 8);
  bVar6 = (byte)puVar13 | (byte)*puVar39;
  pcVar36 = (char *)CONCAT31(uVar23,bVar6);
  if ((char)bVar6 < '\0') {
    *pcVar36 = *pcVar36 + bVar6;
    cVar34 = bVar6 + 2;
    piVar20 = (int *)CONCAT31(uVar23,cVar34);
    if ((POPCOUNT(cVar34) & 1U) == 0) {
      *(char *)piVar20 = (char)*piVar20 + cVar34;
      bVar6 = bVar6 + 0x71;
      pcVar10 = (char *)CONCAT31(uVar23,bVar6);
      pcVar36 = (char *)segment(uVar43,(short)puVar37 + (short)puVar39);
      *pcVar36 = *pcVar36 + bVar6;
      uVar11 = puVar40[0x1a];
      *pcVar10 = *pcVar10 + bVar6;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((byte)((uint)puVar19 >> 8) | (byte)uVar11 |
                                          *(byte *)((int)puVar40 + 0x69),(char)puVar19));
      *pcVar10 = *pcVar10 + bVar6;
      bVar6 = bVar6 | (byte)*param_2;
      pcVar36 = (char *)CONCAT31(uVar23,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
    out(*puVar39,(short)param_2);
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
  pcVar36 = (char *)segment(uVar43,(short)puVar37 + (short)unaff_ESI);
  *pcVar36 = *pcVar36 + (char)piVar20;
  cVar34 = (char)puVar19;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | (byte)puVar40[0x1a],cVar34));
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  uVar30 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
  piVar15 = (int *)((int)piVar20 + *piVar20);
  puVar39 = unaff_ESI;
  puVar41 = puVar40;
  uVar42 = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar34;
  puVar39 = unaff_ESI + (uint)bVar45 * -2 + 1;
  out(*unaff_ESI,uVar30);
code_r0x00402a75:
  bVar6 = (byte)((uint)puVar19 >> 8) | (byte)*param_2;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar6,(char)puVar19));
  piVar20 = (int *)(uint)(byte)*puVar37;
  *(byte *)puVar39 = (byte)*puVar39 - bVar6;
  puVar41 = puVar40;
code_r0x00402a7f:
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  out(*puVar39,(short)param_2);
  bVar6 = in((short)param_2);
  *(byte *)puVar41 = bVar6;
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*param_2,(char)puVar19));
  iVar16 = *piVar20;
  cVar34 = in(1);
  puVar13 = (uint *)CONCAT31((int3)((uint)((int)piVar20 + *piVar20) >> 8),cVar34);
  *(char *)puVar13 = (char)*puVar13 + cVar34;
  puVar13 = (uint *)((uint)puVar13 | *puVar13);
  *(byte *)puVar19 = (byte)*puVar19 + (char)param_2;
  puVar39 = (uint *)((int)puVar39 + (((uint)bVar45 * -8 + 4) - iVar16));
  puVar41 = (uint *)((int)puVar41 + (uint)bVar45 * -2 + 1);
  in_SS = in_ES;
  while( true ) {
    bVar6 = (byte)puVar13 | (byte)*param_2;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar6);
    puVar40 = puVar41;
    if ((POPCOUNT(bVar6) & 1U) != 0) break;
    *(byte *)puVar13 = (byte)*puVar13 + bVar6;
code_r0x00402a9b:
    uVar23 = (undefined3)((uint)puVar13 >> 8);
    cVar34 = (char)puVar13 + '\r';
    piVar15 = (int *)CONCAT31(uVar23,cVar34);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar15;
    *(char *)piVar15 = (char)*piVar15 + cVar34;
    *(byte *)(puVar39 + -0xc800000) = (byte)puVar39[-0xc800000] + (char)param_2;
    *(char *)piVar15 = (char)*piVar15 + cVar34;
    *(byte *)param_2 = (byte)*param_2 + cVar34;
    cVar7 = (char)puVar19;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar7;
      unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
      out(*puVar39,(short)param_2);
      piVar20 = (int *)((longlong)*piVar15 * 0x7b020a00);
      *(char *)piVar20 =
           (char)*piVar20 - ((longlong)(int)piVar20 != (longlong)*piVar15 * 0x7b020a00);
      pbVar9 = (byte *)((int)puVar40 + (int)unaff_EBP * 2);
      *pbVar9 = *pbVar9;
      goto code_r0x00402a61;
    }
    *(char *)piVar15 = (char)*piVar15 + cVar34;
    puVar13 = (uint *)CONCAT31(uVar23,(char)puVar13 + ':');
    unaff_ESI = (uint *)((uint)puVar39 | *(uint *)((int)param_2 + -0x79));
    iVar16 = (int)puVar13 + *puVar13;
    if (SCARRY4((int)puVar13,*puVar13)) {
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                 CONCAT11((char)((uint)puVar37 >> 8) + (byte)unaff_ESI[(int)puVar37]
                                          ,(char)puVar37));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar16;
      puVar41 = puVar40;
      goto code_r0x00402b33;
    }
    uVar23 = (undefined3)((uint)iVar16 >> 8);
    cVar34 = (char)iVar16 + CARRY4((uint)puVar13,*puVar13);
    piVar20 = (int *)CONCAT31(uVar23,cVar34);
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    bVar44 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar44) && (bVar44)) goto code_r0x00402a61;
    *(char *)piVar20 = (char)*piVar20 + cVar34;
    cVar8 = cVar34 + '(';
    pcVar36 = (char *)CONCAT31(uVar23,cVar8);
    puVar41 = puVar40 + (uint)bVar45 * -2 + 1;
    uVar11 = in((short)param_2);
    *puVar40 = uVar11;
    *pcVar36 = *pcVar36 + cVar8;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((byte)((uint)puVar19 >> 8) | bRama07b0222,cVar7));
    *pcVar36 = *pcVar36 + cVar8;
    pcVar36 = (char *)CONCAT31(uVar23,cVar34 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar39 = (uint *)((int)(unaff_ESI + (uint)bVar45 * -2 + 1) + (uint)bVar45 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar45 * -2 + 1],(short)param_2);
    bVar6 = (byte)pcVar36;
    *pcVar36 = *pcVar36 + bVar6;
    puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(byte)puVar37 | (byte)*puVar41);
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar23 = (undefined3)((uint)pcVar36 >> 8);
    bVar6 = bVar6 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar34 = bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) * -0x60 + (byte)*param_2;
    piVar20 = (int *)CONCAT31(uVar23,cVar34);
    if ((POPCOUNT(cVar34) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar20 = (char)*piVar20 + cVar34;
    piVar15 = (int *)CONCAT31(uVar23,cVar34 + '\x17');
    uVar42 = in_ES;
code_r0x00402ae3:
    out(*puVar39,(short)param_2);
    unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1 + (uint)bVar45 * -2 + 1;
    out(puVar39[(uint)bVar45 * -2 + 1],(short)param_2);
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
code_r0x00402ae7:
    puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((byte)((uint)puVar37 >> 8) | unaff_EBP[-0x60],(char)puVar37)
                              );
    cVar34 = (char)piVar15;
    *(char *)piVar15 = (char)*piVar15 + cVar34;
    uVar23 = (undefined3)((uint)piVar15 >> 8);
    bVar6 = cVar34 + 2;
    puVar13 = (uint *)CONCAT31(uVar23,bVar6);
    in_ES = uVar42;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(byte *)puVar13 = (byte)*puVar13 + bVar6;
      cVar34 = cVar34 + '}';
      puVar13 = (uint *)CONCAT31(uVar23,cVar34);
      *(byte *)puVar13 = ((byte)*puVar13 - cVar34) - (0x84 < bVar6);
      pbVar9 = (byte *)((int)param_2 + (int)puVar13);
      *pbVar9 = *pbVar9 + cVar34;
      bVar6 = POPCOUNT(*pbVar9);
      puVar39 = unaff_ESI;
code_r0x00402af9:
      in_ES = uVar42;
      puVar40 = puVar41;
      if ((bVar6 & 1) == 0) {
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        bVar6 = (byte)puVar19;
        *(byte *)param_2 = (byte)*param_2 + bVar6;
        uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
        unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
        out(*puVar39,(short)param_2);
        uVar11 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar6;
        iVar16 = CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 + 'o') +
                 *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar11,bVar6);
        pcVar36 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '(');
        while( true ) {
          uVar11 = *param_2;
          bVar25 = (byte)puVar19;
          *(byte *)param_2 = (byte)*param_2 + bVar25;
          pcVar36 = pcVar36 + (uint)CARRY1((byte)uVar11,bVar25) + iRam73280512;
          bVar6 = (byte)pcVar36;
          *pcVar36 = *pcVar36 + bVar6;
          puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                     CONCAT11((byte)((uint)puVar19 >> 8) | bRam7d160243,bVar25));
          bVar45 = ((uint)uStackY_28 & 0x400) != 0;
          in_AF = ((uint)uStackY_28 & 0x10) != 0;
          *pcVar36 = *pcVar36 + bVar6;
          uVar23 = (undefined3)((uint)pcVar36 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar23,bVar6 + 2) + (uint)(0xfd < bVar6);
          cVar34 = bVar6 + 4;
          if (SCARRY1(bVar6 + 2,'\x02') != cVar34 < '\0') break;
          *(char *)CONCAT31(uVar23,cVar34) = *(char *)CONCAT31(uVar23,cVar34) + cVar34;
          iVar16 = CONCAT31(uVar23,bVar6 + 0x16);
code_r0x00402b33:
          piVar15 = (int *)(iVar16 + 0xe2802);
          *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)puVar19 >> 8);
          uVar42 = in_ES;
          in_ES = in_SS;
          while( true ) {
            bVar25 = (byte)puVar37 | (byte)((uint)puVar19 >> 8);
            puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),bVar25);
            *piVar15 = (int)(*piVar15 + (int)piVar15);
            cVar34 = (char)piVar15;
            *(byte *)param_2 = (byte)*param_2 + cVar34;
            if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar15 = (char)*piVar15 + cVar34;
            uVar11 = CONCAT31((int3)((uint)piVar15 >> 8),cVar34 + '\x13');
            puVar13 = (uint *)(uVar11 + 0x19061224 + (uint)(0x1f9edfd < uVar11));
            uVar12 = (uint)(0xe4ffffdd < uVar11 + 0xfe061202 ||
                           CARRY4(uVar11 + 0x19061224,(uint)(0x1f9edfd < uVar11)));
            uVar11 = *unaff_ESI;
            uVar1 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar1 + (int)puVar13) + uVar12);
            bVar6 = POPCOUNT(*unaff_ESI & 0xff);
            puVar39 = unaff_ESI;
            if ((SCARRY4(uVar11,(int)puVar13) != SCARRY4((int)(uVar1 + (int)puVar13),uVar12)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar6 = (byte)puVar13;
            *(byte *)puVar13 = (byte)*puVar13 + bVar6;
            iVar16 = CONCAT31((int3)((uint)puVar13 >> 8),bVar6 + 2) + 0x9d7d + (uint)(0xfd < bVar6);
            bVar6 = (byte)param_2 | (byte)*param_2;
            uVar11 = *puVar37;
            *(byte *)puVar37 = (byte)*puVar37 + bVar25;
            pcVar36 = (char *)(CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x12') + 0x228b26
                               + *puVar41 + (uint)CARRY1((byte)uVar11,bVar25));
            cVar34 = bVar6 + (byte)*puVar19;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar34);
            if (SCARRY1(bVar6,(byte)*puVar19) == cVar34 < '\0') break;
            *pcVar36 = *pcVar36 + (char)pcVar36;
            cVar34 = (char)pcVar36 + '\x02';
            pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar34);
            bVar6 = POPCOUNT(cVar34);
            uVar42 = in_ES;
code_r0x00402b7a:
            puVar40 = unaff_ESI;
            if ((bVar6 & 1) != 0) break;
            while( true ) {
              cVar34 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar34;
              uVar23 = (undefined3)((uint)pcVar36 >> 8);
              pcVar36 = (char *)CONCAT31(uVar23,cVar34 + '\x13');
              *(byte *)puVar19 = (byte)*puVar19 | (byte)param_2;
              *(byte *)puVar41 = (byte)*puVar41 | (byte)param_2;
              *param_2 = (uint)(pcVar36 + *param_2);
              uVar30 = (undefined2)((uint)puVar37 >> 0x10);
              uVar35 = SUB41(puVar37,0);
              cVar7 = (char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + -0x5f);
              puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(cVar7,uVar35));
              *pcVar36 = *pcVar36 + cVar34 + '\x13';
              piVar15 = (int *)CONCAT31(uVar23,cVar34 + -0x7a);
              uVar11 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar11,(char)puVar19) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar15 = (char)*piVar15 + cVar34 + -0x7a;
              cVar8 = cVar34 + -0x78;
              piVar15 = (int *)CONCAT31(uVar23,cVar8);
              uVar4 = uVar42;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *(char *)piVar15 = (char)*piVar15 + cVar8;
              pcVar36 = (char *)CONCAT31(uVar23,cVar34 + -0x65);
              *puVar19 = *puVar19 | (uint)param_2;
              *puVar41 = *puVar41 | (uint)param_2;
              pbVar9 = (byte *)((int)puVar19 + -1);
              cVar7 = cVar7 + *(byte *)((int)puVar37 + -0x5e);
              puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(cVar7,uVar35));
              *pcVar36 = *pcVar36 + cVar34 + -0x65;
              bVar6 = cVar34 + 10;
              puVar13 = (uint *)CONCAT31(uVar23,bVar6);
              bVar25 = (byte)pbVar9;
              *(byte *)param_2 = (byte)*param_2 + bVar25;
              unaff_ESI = puVar40 + (uint)bVar45 * -2 + 1;
              out(*puVar40,(short)param_2);
              uVar11 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar25;
              uVar2 = (uint)CARRY1((byte)uVar11,bVar25);
              uVar11 = *param_2;
              uVar1 = *param_2;
              pbVar14 = pbVar9 + uVar1 + uVar2;
              uVar5 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar7;
              uVar12 = *param_2;
              unaff_EBP = (char *)((uint)unaff_EBP | *puVar13);
              *(byte *)puVar13 = (char)*puVar13 + bVar6;
              puVar19 = (uint *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar14 >> 8) | bRam7d170243,
                                                  (char)pbVar14 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar9,uVar11) ||
                                                  CARRY4((uint)(pbVar9 + uVar1),uVar2))));
              bVar45 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar13 = (char)*puVar13 + bVar6;
              bVar44 = 0xfd < bVar6;
              pcVar36 = (char *)CONCAT31(uVar23,cVar34 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar12);
code_r0x00402bd1:
              uVar11 = *puVar37;
              uVar1 = *puVar37;
              *puVar37 = (uint)((byte *)(uVar1 + (int)puVar19) + bVar44);
              bVar6 = POPCOUNT(*puVar37 & 0xff);
              uVar42 = in_SS;
              if ((SCARRY4(uVar11,(int)puVar19) != SCARRY4((int)(uVar1 + (int)puVar19),(uint)bVar44)
                  ) == (int)*puVar37 < 0) goto code_r0x00402b7a;
              cVar34 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar34;
              pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar34 + '\x02');
              if (SCARRY1(cVar34,'\x02') == (char)(cVar34 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar36 = *pcVar36 + (char)pcVar36;
                pcVar36 = (char *)(CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + '\x12') |
                                  *param_2);
                *(byte *)puVar41 = (byte)*puVar41 - (char)puVar19;
                *pcVar36 = *pcVar36 + (char)pcVar36;
                puVar40 = (uint *)((int)param_2 - *unaff_ESI);
                bVar6 = (byte)puVar37 | (byte)((uint)puVar19 >> 8);
                cVar34 = *pcVar36;
                uVar23 = (undefined3)((uint)pcVar36 >> 8);
                pcVar36 = (char *)CONCAT31(uVar23,cVar34);
                *pcVar36 = *pcVar36 + cVar34;
                pcVar10 = (char *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                           CONCAT11((char)((uint)puVar37 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),
                                                                       bVar6) + -0x5b),bVar6));
                *pcVar36 = *pcVar36 + cVar34;
                bVar44 = false;
                pcVar36 = (char *)(CONCAT31(uVar23,cVar34 + '\x13') | *puVar40);
                do {
                  bVar25 = (byte)puVar19;
                  bVar6 = bVar25 + (byte)unaff_ESI[(int)puVar41 * 2];
                  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar6 + bVar44);
                  uVar11 = (uint)(CARRY1(bVar25,(byte)unaff_ESI[(int)puVar41 * 2]) ||
                                 CARRY1(bVar6,bVar44));
                  pcVar17 = pcVar36 + 0x1b000019 + uVar11;
                  piVar20 = (int *)((int)puVar41 * 2 + 0x40000a5);
                  *piVar20 = (int)((int)puVar19 +
                                  (uint)((char *)0xe4ffffe6 < pcVar36 ||
                                        CARRY4((uint)(pcVar36 + 0x1b000019),uVar11)) + *piVar20);
                  puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(char)puVar40 + cRam00009d7d
                                            );
                  uVar23 = (undefined3)((uint)pcVar17 >> 8);
                  bVar6 = (char)pcVar17 + 0x12;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  uVar11 = CONCAT31(uVar23,bVar6 + in_AF * -6) & 0xffffff0f;
                  pcVar36 = (char *)CONCAT22((short)(uVar11 >> 0x10),
                                             CONCAT11((char)((uint)pcVar17 >> 8) - in_AF,
                                                      (char)uVar11));
                  pcVar17 = (char *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar23,bVar6));
                  while( true ) {
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                               (byte)puVar40 | (byte)*puVar40);
                    puVar41 = (uint *)((uint)puVar41 | (uint)unaff_ESI);
                    uVar11 = (uint)pcVar10 | (uint)unaff_ESI;
                    unaff_EBP = pcVar17 + 1;
                    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_ES);
                    cVar34 = (char)(pcVar36 + 0x1b000019);
                    uVar23 = (undefined3)((uint)(pcVar36 + 0x1b000019) >> 8);
                    cVar7 = cVar34 + -0x13;
                    pcVar36 = (char *)CONCAT31(uVar23,cVar7);
                    uVar30 = (undefined2)(uVar11 >> 0x10);
                    cVar8 = (char)(uVar11 >> 8) + *(char *)(uVar11 - 0x5e);
                    puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,(byte)uVar11));
                    *pcVar36 = *pcVar36 + cVar7;
                    pcVar36 = (char *)(CONCAT31(uVar23,cVar34 + '\x19') | *puVar40);
                    bVar6 = (byte)pcVar36;
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      pbVar9 = (byte *)((int)puVar40 + (int)pcVar36);
                      bVar44 = CARRY1(*pbVar9,bVar6);
                      *pbVar9 = *pbVar9 + bVar6;
                      param_2 = puVar40;
                      goto code_r0x00402bd1;
                    }
                    *pcVar36 = *pcVar36 + bVar6;
                    uVar23 = (undefined3)((uint)pcVar36 >> 8);
                    pcVar10 = (char *)CONCAT31(uVar23,bVar6 + 0x6f);
                    param_2 = (uint *)((int)puVar40 + 1);
                    *pcVar10 = *pcVar10 + bVar6 + 0x6f;
                    bVar25 = (byte)uVar11 | (byte)((uint)pcVar36 >> 8);
                    pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x5c);
                    cVar8 = cVar8 + *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),bVar25) + -0x5f);
                    puVar37 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,bVar25));
                    *pcVar36 = *pcVar36 + bVar6 + 0x5c;
                    pcVar36 = (char *)(CONCAT31(uVar23,bVar6 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)puVar19 >> 8);
                      uStackY_28 = (uint *)((uint)uStackY_28._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    uVar23 = (undefined3)((uint)pcVar36 >> 8);
                    cVar34 = (char)pcVar36 + 'o';
                    puVar40 = (uint *)((int)puVar40 + 2);
                    *(char *)CONCAT31(uVar23,cVar34) = *(char *)CONCAT31(uVar23,cVar34) + cVar34;
                    pcVar10 = (char *)CONCAT31((int3)((uint)puVar37 >> 8),
                                               bVar25 | (byte)((uint)pcVar36 >> 8));
                    pcVar36 = (char *)(CONCAT31(uVar23,cVar34) | 2);
                    pcVar17[-0x62] = pcVar17[-0x62] + '\x01';
                    bVar6 = (byte)pcVar36;
                    *pcVar36 = *pcVar36 + bVar6;
                    bVar44 = 0xfd < bVar6;
                    cVar34 = bVar6 + 2;
                    pcVar36 = (char *)CONCAT31(uVar23,cVar34);
                    uVar43 = in_ES;
                    if (SCARRY1(bVar6,'\x02') != cVar34 < '\0') break;
                    *pcVar36 = *pcVar36 + cVar34;
                    bVar25 = bVar6 + 10;
                    pcVar36 = (char *)CONCAT31(uVar23,bVar25);
                    *pcVar36 = *pcVar36 - cVar8;
                    cVar7 = (char)puVar19;
                    *(byte *)puVar40 = *(byte *)puVar40 + cVar7;
                    pcVar17[-0x62] = pcVar17[-0x62] + '\x01';
                    *pcVar36 = *pcVar36 + bVar25;
                    cVar34 = bVar6 + 0xc;
                    pcVar36 = (char *)CONCAT31(uVar23,cVar34);
                    if (SCARRY1(bVar25,'\x02') == cVar34 < '\0') {
                      *pcVar36 = *pcVar36 + cVar34;
                      *(byte *)puVar19 = (byte)*puVar19 - cVar8;
                      *(byte *)puVar40 = *(byte *)puVar40 + cVar7;
                      cVar34 = (bVar6 + 0x13) - (byte)puVar19[0x13];
                      pcVar36 = (char *)CONCAT31(uVar23,cVar34);
                      *pcVar36 = *pcVar36 + cVar34;
                      pcVar18 = (char *)CONCAT31(uVar23,cVar34 + *pcVar36);
                      *pcVar18 = *pcVar18 + cVar34 + *pcVar36;
                      pcVar18 = pcVar18 + *puVar19;
                      *pcVar18 = *pcVar18 + (char)pcVar18;
                      LOCK();
                      pcVar36 = *(char **)pcVar18;
                      *(char **)pcVar18 = pcVar18;
                      UNLOCK();
                      *pcVar36 = *pcVar36 + (char)pcVar36;
                      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(byte)*puVar19);
                      *pbVar9 = *pbVar9 + (byte)*puVar19;
                      goto code_r0x00402c8d;
                    }
                    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),
                                               cVar7 + *pcVar10 + (0xfd < bVar25));
                    *(byte *)puVar41 = (byte)*puVar41 - cVar8;
                    pcVar17 = unaff_EBP;
                  }
                } while( true );
              }
              puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                         CONCAT11((char)((uint)puVar37 >> 8) +
                                                  *(byte *)((int)puVar37 + -99),(char)puVar37));
              puVar40 = unaff_ESI;
            }
            *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
            param_2 = (uint *)((int)param_2 - *puVar40);
            unaff_ESI = puVar40;
            uVar42 = in_ES;
            in_ES = uVar4;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
          pcVar36 = pcVar36 + -0x7d160243;
        }
        pcVar36 = (char *)CONCAT31(uVar23,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar19;
    uVar11 = *puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar13;
    *puVar41 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar11,(byte)puVar13) + *puVar41);
    puVar39 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar29 = (char)puVar19;
      cVar26 = (char)((uint)puVar19 >> 8) + (char)((uint)pbVar9 >> 8);
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(cVar26,cVar29));
      cVar34 = (char)pbVar9;
      *pbVar9 = *pbVar9 + cVar34;
      pcVar36 = (char *)((int)pbVar9 * 2 + 0x1a10000);
      cVar8 = (char)((uint)pcVar10 >> 8);
      *pcVar36 = *pcVar36 + cVar8;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
      pbVar9[-0x47ffffff] = pbVar9[-0x47ffffff] + cVar8;
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      bVar25 = (byte)puVar40;
      *(byte *)puVar41 = (byte)*puVar41 + bVar25;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + bVar25;
      *pbVar9 = *pbVar9 + cVar34;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar30 = (undefined2)((uint)pcVar10 >> 0x10);
      cVar8 = cVar8 + (byte)unaff_ESI[(int)pcVar10];
      pcVar36 = (char *)CONCAT22(uVar30,CONCAT11(cVar8,(char)pcVar10));
      pcVar36[(int)pbVar9] = pcVar36[(int)pbVar9] + cVar34;
      *(byte *)puVar40 = *(byte *)puVar40 - cVar8;
      *(byte *)puVar40 = *(byte *)puVar40 + cVar29;
      uVar23 = (undefined3)((uint)pbVar9 >> 8);
      bVar6 = cVar34 - *pbVar9;
      *pcVar36 = *pcVar36 + bVar25;
      *(byte *)puVar40 = *(byte *)puVar40 ^ bVar6;
      *(byte *)puVar40 = *(byte *)puVar40 + bVar6;
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      uVar11 = *puVar19;
      *(byte *)puVar19 = (byte)*puVar19 + bVar25;
      cVar7 = bVar6 + *(char *)CONCAT31(uVar23,bVar6) + CARRY1((byte)uVar11,bVar25);
      pcVar10 = (char *)CONCAT22(uVar30,CONCAT11(cVar8 + pcVar17[-0x60],(char)pcVar10));
      *(char *)CONCAT31(uVar23,cVar7) = *(char *)CONCAT31(uVar23,cVar7) + cVar7;
      cVar8 = cVar7 + '\x12';
      pbVar9 = (byte *)CONCAT31(uVar23,cVar8);
      cVar34 = *pcVar10;
      *pcVar10 = *pcVar10 + cVar8;
      if (SCARRY1(cVar34,cVar8) != *pcVar10 < '\0') break;
code_r0x00402c8d:
      cVar34 = (char)pbVar9;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
      *(byte *)puVar40 = *(byte *)puVar40 + cVar34;
      *pbVar9 = *pbVar9 + cVar34;
    }
    *pbVar9 = *pbVar9 + cVar8;
    pbVar9 = (byte *)CONCAT31(uVar23,cVar7 + '$');
    *pbVar9 = *pbVar9 + cVar26;
    bVar6 = *(byte *)puVar40;
    *(byte *)puVar40 = *(byte *)puVar40 + cVar29;
    uVar42 = in_DS;
  } while (SCARRY1(bVar6,cVar29) == (char)*(byte *)puVar40 < '\0');
  do {
    cVar34 = (char)pbVar9;
    *pbVar9 = *pbVar9 + cVar34;
    uVar23 = (undefined3)((uint)pbVar9 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar40;
    bVar25 = cVar34 + 0x24;
    cVar8 = (char)((uint)pcVar10 >> 8);
    pcVar10[-0x62] = pcVar10[-0x62] + cVar8;
    *(char *)CONCAT31(uVar23,bVar25) = *(char *)CONCAT31(uVar23,bVar25) + bVar25;
    bVar6 = cVar34 + 0x2fU + (byte)*puVar19;
    cVar7 = bVar6 + (0xf4 < bVar25);
    cVar34 = cVar7 + *(char *)CONCAT31(uVar23,cVar7) +
             (CARRY1(cVar34 + 0x2fU,(byte)*puVar19) || CARRY1(bVar6,0xf4 < bVar25));
    pcVar36 = (char *)CONCAT31(uVar23,cVar34);
    *pcVar36 = *pcVar36 - (char)puVar40;
    *pcVar36 = *pcVar36 + cVar34;
    pcVar17 = (char *)((int)puVar40 - *puVar40);
    *(byte *)(unaff_ESI + (int)pcVar10) = (byte)unaff_ESI[(int)pcVar10] + cVar8;
    pcVar36[(int)unaff_EBP] = pcVar36[(int)unaff_EBP] + cVar34;
    *pcVar17 = *pcVar17 + (char)puVar19;
    pcVar36 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                               CONCAT11((char)((uint)pbVar9 >> 8) - *pcVar17,cVar34));
    uVar11 = *puVar41;
    *pcVar36 = *pcVar36 - (char)((uint)pcVar17 >> 8);
    *pcVar36 = *pcVar36 + cVar34;
    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar43);
    pbVar14 = (byte *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                               CONCAT11(cVar8 - (byte)*unaff_ESI,(char)pcVar10));
    unaff_EBP = unaff_EBP + *(int *)(pbVar14 + (int)puVar19);
    puVar37 = (uint *)CONCAT31((int3)((uint)pcVar17 >> 8),(char)pcVar17 + (byte)uVar11);
    while( true ) {
      puVar40 = puVar37;
      uVar30 = (undefined2)((uint)pbVar14 >> 0x10);
      bVar38 = (char)((uint)pbVar14 >> 8) + pbVar14[0x18];
      *pcVar36 = *pcVar36 + (char)pcVar36;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
      cVar34 = (char)puVar19;
      *(byte *)puVar40 = (byte)*puVar40 + cVar34;
      uVar11 = *unaff_ESI;
      bVar33 = (byte)((uint)puVar19 >> 8);
      bVar6 = *pbVar9;
      pbVar9 = pbVar9 + (uint)CARRY1(bVar33,*pbVar9) + *(int *)pbVar9;
      *(byte *)puVar40 = (byte)*puVar40 + cVar34;
      cVar7 = ((char)pbVar14 - (byte)uVar11) - (byte)*unaff_ESI;
      bVar25 = *(byte *)((int)puVar41 + 0x1a);
      *pbVar9 = *pbVar9 + (char)pbVar9;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11(bVar33 + bVar6 + bVar25 | (byte)*puVar40,cVar34));
      pbVar9 = pbVar9 + *puVar40;
      if ((POPCOUNT((uint)pbVar9 & 0xff) & 1U) != 0) break;
      *pbVar9 = *pbVar9 + (char)pbVar9;
      bVar6 = (char)pbVar9 + 0x6f;
      pcVar36 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
      pcVar10 = (char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar38,(char)pbVar14)) >> 8),cVar7
                                 ) + -1);
      *pcVar36 = *pcVar36 + bVar6;
      *pcVar36 = *pcVar36 + bVar6;
      *pcVar10 = *pcVar10 + (byte)puVar40;
      *(byte *)((int)pcVar36 * 2) = *(byte *)((int)pcVar36 * 2) ^ bVar6;
      uVar3 = *(undefined6 *)pcVar36;
      uVar43 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar36 = (char *)uVar3;
      *pcVar36 = *pcVar36 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar36 = (char *)((uint)pcVar36 | 0x73110008);
      bVar38 = (byte)((uint)pcVar10 >> 8);
      *(byte *)puVar41 = (byte)*puVar41 - bVar38;
      *(byte *)puVar40 = (byte)*puVar40 + cVar34;
      puVar37 = unaff_ESI + (uint)bVar45 * -2 + 1;
      out(*unaff_ESI,(short)puVar40);
      *pcVar36 = *pcVar36;
      cVar34 = (char)pcVar36;
      *pcVar36 = *pcVar36 + cVar34;
      bVar6 = unaff_EBP[-0x5a];
      uVar30 = (undefined2)((uint)pcVar10 >> 0x10);
      cVar7 = (char)pcVar10;
      *pcVar36 = *pcVar36 + cVar34;
      cVar34 = cVar34 + '\x02';
      uVar11 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar34);
      puVar19 = (uint *)(uVar11 | 0x73110000);
      unaff_ESI = puVar37 + (uint)bVar45 * -2 + 1;
      out(*puVar37,(short)puVar40);
      *(byte *)puVar19 = (byte)*puVar19;
      bVar33 = (byte)puVar40 | (byte)*puVar41;
      puVar37 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar33);
      *(byte *)puVar19 = (byte)*puVar19 + cVar34;
      pcVar36 = (char *)(uVar11 | 0x7b1f1609);
      bVar45 = (uVar42 & 0x400) != 0;
      *(uint *)((int)puVar41 + -0x7d) = *(uint *)((int)puVar41 + -0x7d) | (uint)unaff_EBP;
      bVar25 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar25;
      bVar38 = bVar38 | bVar6 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar14 = (byte *)CONCAT22(uVar30,CONCAT11(bVar38,cVar7));
      *pcVar36 = *pcVar36 + bVar25;
      uVar23 = (undefined3)((uint)pcVar36 >> 8);
      unaff_ESI[(int)puVar41 * 2] =
           (uint)((int)puVar37 + (uint)(0xd2 < bVar25) + unaff_ESI[(int)puVar41 * 2]);
      bVar6 = bVar25 + 0x2d ^ *(byte *)CONCAT31(uVar23,bVar25 + 0x2d);
      pcVar36 = (char *)CONCAT31(uVar23,bVar6);
      uVar11 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
      uVar42 = uVar43;
      if (CARRY1((byte)uVar11,bVar6)) {
        *pcVar36 = *pcVar36 + bVar6;
        bVar6 = bVar6 | pcVar36[0x4000019];
        pcVar36 = (char *)CONCAT31(uVar23,bVar6);
        if ('\0' < (char)bVar6) {
          *pcVar36 = *pcVar36 + bVar6;
          piVar20 = (int *)CONCAT31(uVar23,bVar6 + 0x28);
          *piVar20 = (int)piVar20 + (uint)(0xd7 < bVar6) + *piVar20;
          bVar27 = (byte)((uint6)uVar3 >> 8);
          *pbVar14 = *pbVar14 + bVar27;
          uVar31 = CONCAT11((byte)((uint)puVar40 >> 8) | bVar38,bVar33);
          puVar37 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),uVar31);
          uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar43);
          bVar33 = in(uVar31);
          pbVar9 = (byte *)CONCAT31(uVar23,bVar33);
          bVar25 = *pbVar9;
          bVar44 = SCARRY1(*pbVar9,bVar33);
          *pbVar9 = *pbVar9 + bVar33;
          bVar6 = *pbVar9;
          puVar40 = unaff_ESI;
          in_SS = uVar43;
          if (!CARRY1(bVar25,bVar33)) goto code_r0x00402e19;
          *pbVar9 = *pbVar9 + bVar33;
          bVar27 = bVar27 | *pbVar9;
          puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar27,cVar34));
          pcVar36 = (char *)CONCAT31(uVar23,bVar33 + *pbVar9);
          *pbVar14 = *pbVar14 + bVar27;
        }
        uVar23 = (undefined3)((uint)pcVar36 >> 8);
        bVar25 = (byte)pcVar36 | (byte)*puVar37;
        pbVar9 = (byte *)CONCAT31(uVar23,bVar25);
        puVar40 = unaff_ESI + (uint)bVar45 * -2 + 1;
        out(*unaff_ESI,(short)puVar37);
        LOCK();
        bVar6 = *pbVar9;
        *pbVar9 = bVar25;
        UNLOCK();
        *(byte *)puVar37 = (byte)*puVar37 + (char)puVar19;
        piVar20 = (int *)(CONCAT31(uVar23,bVar6) + -0x1b7e07);
        *(byte *)puVar37 = (byte)*puVar37 + (char)puVar19;
        iVar16 = (int)puVar19 - *(int *)pbVar14;
        bVar6 = *(byte *)((int)puVar41 + -0x7a);
        uVar31 = (undefined2)((uint)iVar16 >> 0x10);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        bVar25 = (char)((uint)iVar16 >> 8) + bVar6 | *(byte *)((int)puVar41 + 0x17);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        uVar23 = (undefined3)(CONCAT22(uVar31,CONCAT11(bVar25,(byte)iVar16)) >> 8);
        bVar6 = (byte)iVar16 | *pbVar14;
        puVar19 = (uint *)CONCAT31(uVar23,bVar6);
        pbVar9 = (byte *)((int)piVar20 + *piVar20);
        puVar13 = puVar40;
        if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e0a;
        *(byte *)puVar19 = (byte)*puVar19 + bVar6;
        *(byte **)pbVar14 = (byte *)(*(int *)pbVar14 + (int)puVar37);
        piVar20 = (int *)CONCAT31(uVar23,bVar6 + 0x27);
        puVar19 = (uint *)CONCAT22(uVar31,CONCAT11(bVar25 + *(byte *)((int)puVar41 + -0x79),bVar6));
        *(byte *)piVar20 = (char)*piVar20 + bVar6 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar10 = (char *)CONCAT22(uVar30,CONCAT11(bVar38 | unaff_EBP[-0x62],cVar7));
  } while( true );
code_r0x00402dff:
  pbVar9 = (byte *)CONCAT22((short)((uint)piVar20 >> 0x10),
                            CONCAT11((byte)((uint)piVar20 >> 8) |
                                     *(byte *)((int)puVar37 + 0x2170411),(byte)piVar20));
  puVar13 = puVar40 + (uint)bVar45 * -2 + 1;
  out(*puVar40,(short)puVar37);
  *pbVar9 = (byte)piVar20;
  *(byte *)puVar37 = (byte)*puVar37 + (char)puVar19;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar9;
  *pbVar9 = *pbVar9 - cVar7;
  *pbVar9 = *pbVar9 + (char)pbVar9;
  bVar44 = false;
  bVar6 = (byte)((uint)puVar19 >> 8) | bRam052b0603;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar6,(char)puVar19));
  puVar40 = puVar13;
code_r0x00402e19:
  if (bVar6 == 0 || bVar44 != (char)bVar6 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cRam89280411;
  piVar20 = (int *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                            CONCAT11((byte)((uint)pbVar9 >> 8) | *(byte *)((int)puVar37 + 0x7190411)
                                     ,cRam89280411));
  *(char *)piVar20 = (char)*piVar20 + cRam89280411;
  cVar34 = (char)puVar19;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*puVar37,cVar34));
  puVar40 = (uint *)((int)puVar40 + *piVar20);
  pbVar9 = (byte *)((int)piVar20 + *piVar20);
  bVar25 = (byte)pbVar9;
  *pbVar9 = *pbVar9 + bVar25;
  *(byte *)puVar40 = (byte)*puVar40 + cVar34;
  bVar6 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar25;
  *(char **)pbVar9 = unaff_EBP + (uint)CARRY1(bVar6,bVar25) + *(int *)pbVar9;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),*pbVar9);
  *(byte *)puVar37 = (byte)*puVar37 + cVar34;
  puVar13 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(byte)puVar37 | (byte)*puVar37);
  pbVar9 = (byte *)((int)puVar13 + -0x43);
  *pbVar9 = *pbVar9 + (char)((uint)puVar37 >> 8);
  puVar37 = puVar13;
  puVar13 = puVar41;
  uVar42 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar41 = puVar13;
  in_SS = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e6e;
  iVar16 = *(int *)((int)piVar20 + *piVar20);
  *(byte *)puVar37 = (byte)*puVar37 + (char)puVar19;
  piVar20 = (int *)(iVar16 + -0x8c6f);
  puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                             CONCAT11((byte)((uint)puVar37 >> 8) | *(byte *)((int)puVar37 + -0x3f),
                                      (char)puVar37));
  pbVar21 = (byte *)((int)piVar20 + *piVar20);
  pbVar9 = pbVar21;
  puVar41 = uStackY_28;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar21 = *pbVar21 + (char)pbVar21;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*puVar37,(char)puVar19));
  puVar13 = puVar40 + (uint)bVar45 * -2 + 1;
  out(*puVar40,(short)puVar37);
  puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 + (byte)*puVar41);
  puVar40 = puVar13 + (uint)bVar45 * -2 + 1;
  out(*puVar13,(short)puVar37);
  uVar42 = in_ES;
  in_SS = uVar43;
code_r0x00402e6e:
  in_ES = uVar42;
  uVar23 = (undefined3)((uint)puVar37 >> 8);
  cVar34 = (char)puVar37 + (byte)*puVar41;
  puVar13 = puVar40 + (uint)bVar45 * -2 + 1;
  out(*puVar40,(short)CONCAT31(uVar23,cVar34));
  puVar37 = (uint *)CONCAT31(uVar23,cVar34 + (byte)*puVar41);
  puVar40 = puVar13 + (uint)bVar45 * -2 + 1;
  out(*puVar13,(short)puVar37);
  pbVar9 = (byte *)0x0;
  puVar13 = puVar41;
code_r0x00402e81:
  puVar41 = puVar13;
  bVar25 = (char)pbVar9 - *pbVar9;
  iVar16 = CONCAT31((int3)((uint)pbVar9 >> 8),bVar25);
  *pbVar14 = *pbVar14 + (char)puVar37;
  pbVar21 = (byte *)(iVar16 * 2);
  *pbVar21 = *pbVar21 ^ bVar25;
  pbVar21 = (byte *)(int)(short)iVar16;
  *pbVar21 = *pbVar21 + bVar25;
  *(byte *)puVar41 = (byte)*puVar41 + (byte)puVar19;
  bVar6 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar25;
  *(byte **)(pbVar14 + -0x73) =
       (byte *)((int)puVar40 + (uint)CARRY1(bVar6,bVar25) + *(int *)(pbVar14 + -0x73));
  *pbVar21 = *pbVar21 + bVar25;
  bVar6 = (byte)puVar19 | (byte)*puVar37;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar6);
  puVar13 = puVar40;
  if ((char)bVar6 < '\x01') goto code_r0x00402eb4;
  *pbVar21 = *pbVar21 + bVar25;
  pbVar9 = (byte *)CONCAT31((int3)(char)((uint)pbVar9 >> 8),bVar25 + 0x2d);
  puVar40[(int)puVar41 * 2] =
       (uint)((int)puVar37 + (uint)(0xd2 < bVar25) + puVar40[(int)puVar41 * 2]);
  pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
  do {
    uVar11 = *puVar40;
    bVar6 = (byte)pbVar9;
    *(byte *)puVar40 = (byte)*puVar40 + bVar6;
    if (!CARRY1((byte)uVar11,bVar6)) break;
    *pbVar9 = *pbVar9 + bVar6;
    bVar6 = bVar6 | pbVar9[0x400001a];
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
    if ((char)bVar6 < '\x01') {
code_r0x00402ecc:
      *pbVar21 = *pbVar21 + (byte)pbVar21;
      uVar23 = (undefined3)((uint)pbVar21 >> 8);
      bVar6 = (byte)pbVar21 | pbVar21[0x400001b];
      pcVar36 = (char *)CONCAT31(uVar23,bVar6);
      if ((char)bVar6 < '\x01') {
        uVar11 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + (byte)puVar19;
        *(char *)((int)pcVar36 * 2) =
             *(char *)((int)pcVar36 * 2) - CARRY1((byte)uVar11,(byte)puVar19);
        bVar44 = 0x81 < bVar6;
        bVar6 = bVar6 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar21 = *pbVar21 + bVar6;
      puVar13 = puVar40;
code_r0x00402eb4:
      uVar23 = (undefined3)((uint)pbVar21 >> 8);
      bVar6 = (char)pbVar21 + 0x6f;
      pcVar36 = (char *)CONCAT31(uVar23,bVar6);
      *(char **)pcVar36 = pcStackY_44;
      uVar11 = *puVar37;
      *(byte *)puVar37 = (byte)*puVar37 + (char)puVar19;
      pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
      in_DS = uVar43;
      if ((byte)*puVar37 != 0 && SCARRY1((byte)uVar11,(char)puVar19) == (char)(byte)*puVar37 < '\0')
      {
        *pcVar36 = *pcVar36 + bVar6;
        bVar25 = (char)pbVar21 + 0x9c;
        pbVar21 = (byte *)CONCAT31(uVar23,bVar25);
        puVar13[(int)puVar41 * 2] =
             (uint)((int)puVar37 + (uint)(0xd2 < bVar6) + puVar13[(int)puVar41 * 2]);
        pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
        uVar11 = *puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + bVar25;
        puVar40 = puVar13;
        if (CARRY1((byte)uVar11,bVar25)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar40 = puVar13 + (uint)bVar45 * -2 + 1;
      out(*puVar13,(short)puVar37);
    }
    cVar34 = (char)pcVar36;
    *pcVar36 = *pcVar36 + cVar34;
    uVar23 = (undefined3)((uint)pcVar36 >> 8);
    bVar6 = cVar34 + 0x6f;
    pcVar36 = (char *)CONCAT31(uVar23,bVar6);
    *(char **)pcVar36 = pcStackY_44;
    uVar11 = *puVar37;
    *(byte *)puVar37 = (byte)*puVar37 + (byte)puVar19;
    pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
    *(byte *)(puVar40 + 7) = ((byte)puVar40[7] - bVar38) - CARRY1((byte)uVar11,(byte)puVar19);
    *pcVar36 = *pcVar36 + bVar6;
    bVar25 = cVar34 + 0x9c;
    pcVar36 = (char *)CONCAT31(uVar23,bVar25);
    puVar40[(int)puVar41 * 2] =
         (uint)((int)puVar37 + (uint)(0xd2 < bVar6) + puVar40[(int)puVar41 * 2]);
    uVar11 = *puVar40;
    *(byte *)puVar40 = (byte)*puVar40 + bVar25;
    if (!CARRY1((byte)uVar11,bVar25)) goto code_r0x00402e7e;
    *pcVar36 = *pcVar36 + bVar25;
    bVar25 = bVar25 | pcVar36[0x400001c];
    pbVar9 = (byte *)CONCAT31(uVar23,bVar25);
    in_SS = uVar43;
    if ((char)bVar25 < '\x01') goto code_r0x00402f16;
    *pbVar9 = *pbVar9 + bVar25;
    pcVar36 = (char *)CONCAT31(uVar23,bVar25 + 0x6f);
    while( true ) {
      *(char **)pcVar36 = pcStackY_44;
      uVar11 = *puVar37;
      *(byte *)puVar37 = (byte)*puVar37 + (byte)puVar19;
      *(uint *)((int)puVar40 + 0x1d) =
           (*(int *)((int)puVar40 + 0x1d) - (int)puVar41) - (uint)CARRY1((byte)uVar11,(byte)puVar19)
      ;
      bVar6 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar6;
      bVar25 = bVar6 + 0x2d;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),bVar25);
      puVar40[(int)puVar41 * 2] =
           (uint)((int)puVar37 + (uint)(0xd2 < bVar6) + puVar40[(int)puVar41 * 2]);
      pcStackY_44 = (char *)CONCAT22((short)((uint)pcStackY_44 >> 0x10),uVar43);
      uVar11 = *puVar40;
      *(byte *)puVar40 = (byte)*puVar40 + bVar25;
      if (!CARRY1((byte)uVar11,bVar25)) break;
      *pbVar9 = *pbVar9 + bVar25;
code_r0x00402f16:
      bVar6 = (byte)pbVar9 | pbVar9[0x400001d];
      puVar13 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
      pcVar36 = unaff_EBP;
      if ((char)bVar6 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pcVar36;
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        uVar23 = (undefined3)((uint)puVar13 >> 8);
        cVar34 = (char)puVar13 + 'o';
        puVar39 = (uint *)CONCAT31(uVar23,cVar34);
        *puVar39 = (uint)pcStackY_44;
        cVar8 = (char)puVar19;
        *(byte *)puVar37 = (byte)*puVar37 + cVar8;
        pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
        bVar6 = (byte)((uint)puVar37 >> 8);
        bVar44 = bVar6 < (byte)*puVar40;
        puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                   CONCAT11(bVar6 - (byte)*puVar40,(char)puVar37));
        if (bVar44) break;
        bVar44 = CARRY4((uint)puVar39,*puVar39);
        puVar13 = (uint *)((int)puVar39 + *puVar39);
        if (!SCARRY4((int)puVar39,*puVar39)) {
          bVar44 = CARRY4((uint)unaff_EBP,*puVar13);
          unaff_EBP = unaff_EBP + *puVar13;
        }
        *puVar13 = (*puVar13 - (int)puVar13) - (uint)bVar44;
        *(byte *)puVar37 = (byte)*puVar37 + cVar8;
        puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                   CONCAT11((char)((uint)puVar19 >> 8) + (byte)*puVar37,
                                            cVar8 - (byte)*puVar37));
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
code_r0x00402f3b:
        cVar8 = (char)puVar37;
        *pbVar14 = *pbVar14 + cVar8;
        bVar6 = (byte)puVar13;
        *(byte *)((int)puVar13 * 2) = *(byte *)((int)puVar13 * 2) ^ bVar6;
        *(byte *)puVar13 = (byte)*puVar13 + bVar6;
        *(byte *)puVar13 = (byte)*puVar13 + cVar8;
        uVar11 = *puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + bVar6;
        *puVar37 = (uint)((int)puVar13 + (uint)CARRY1((byte)uVar11,bVar6) + *puVar37);
        pcVar36 = (char *)((uint)puVar13 | *puVar41);
        uVar23 = (undefined3)((uint)pcVar36 >> 8);
        cVar34 = (char)pcVar36 + *pcVar36;
        pcVar36 = (char *)CONCAT31(uVar23,cVar34);
        *pcVar36 = *pcVar36 + cVar34;
        cVar34 = cVar34 + *pcVar36;
        piVar20 = (int *)CONCAT31(uVar23,cVar34);
        *(char *)piVar20 = (char)*piVar20 + cVar34;
        iVar16 = LocalDescriptorTableRegister();
        *piVar20 = iVar16;
        bVar6 = *pbVar14;
        bVar28 = (byte)((uint)puVar19 >> 8);
        *pbVar14 = *pbVar14 + bVar28;
        iVar16 = *piVar20;
        uVar31 = (undefined2)((uint)puVar19 >> 0x10);
        bVar27 = (byte)puVar19;
        *(byte *)puVar40 = (byte)*puVar40 + cVar34;
        puVar19 = puVar40 + (uint)bVar45 * -2 + 1;
        out(*puVar40,(short)puVar37);
        *(byte *)puVar19 = (byte)*puVar19 + cVar34;
        bVar25 = *pbVar14;
        *(byte *)puVar37 = (byte)*puVar37 - bVar38;
        *(byte *)puVar19 = (byte)*puVar19 + cVar34;
        puVar39 = puVar19 + (uint)bVar45 * -2 + 1;
        out(*puVar19,(short)puVar37);
        *(byte *)puVar39 = (byte)*puVar39 + cVar34;
        bVar33 = *pbVar14;
        *(uint *)((int)puVar37 + -0x23) = *(uint *)((int)puVar37 + -0x23) & (uint)puVar39;
        puVar22 = (ushort *)((int)piVar20 + *piVar20);
        if (!SCARRY4((int)piVar20,*piVar20)) {
          *puVar22 = in_DS;
        }
        *(char *)puVar22 = (char)*puVar22 + (char)puVar22;
        uVar32 = CONCAT11((char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + -0x15),cVar8);
        puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar32);
        puVar13 = (uint *)((int)puVar22 + *(int *)puVar22);
        if (!SCARRY4((int)puVar22,*(int *)puVar22)) {
          *(ushort *)puVar13 = in_DS;
        }
        cVar34 = (char)puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + cVar34;
        cVar29 = ((bVar28 - (char)iVar16) - CARRY1(bVar6,bVar28) | bVar25 | bVar33) + (byte)*puVar13
        ;
        puVar19 = (uint *)CONCAT22(uVar31,CONCAT11(cVar29,bVar27));
        uVar11 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + bVar27;
        if (CARRY1((byte)uVar11,bVar27)) {
          *(byte *)puVar13 = (byte)*puVar13 + cVar34;
          bVar6 = *(byte *)((int)puVar37 + 6);
          *(byte *)puVar37 = (byte)*puVar37 + bVar27;
          bVar25 = (cVar29 - (byte)*puVar39) + cRam14730307;
          *(byte *)puVar13 = (byte)*puVar13 + cVar34;
          bVar6 = bVar38 | bVar6 | *(byte *)((int)puVar37 + 0x2a);
          uVar11 = *puVar13;
          pbVar9 = (byte *)((int)puVar13 + (uint)CARRY1(bVar25,(byte)*puVar13) + *puVar13);
          *(byte *)puVar37 = (byte)*puVar37 + bVar27;
          cVar34 = cVar7 - (byte)*puVar39;
          cVar7 = bVar6 + *(char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar6,cVar7)) >> 8),
                                             cVar34) + 0x1e);
          *pbVar9 = *pbVar9 + (char)pbVar9;
          uVar23 = (undefined3)((uint)pbVar9 >> 8);
          bVar6 = (char)pbVar9 + 0x2aU & (byte)*puVar37;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar7,cVar34)) + 0x1f);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar7,cVar34)) + 0x20);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar7,cVar34)) + 0x21);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar7,cVar34)) + 0x22);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          bVar25 = bVar25 + (byte)uVar11 + *pcVar36;
          uVar24 = CONCAT22(uVar31,CONCAT11(bVar25,bVar27));
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar7,cVar34)) + 0x25);
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          pcVar10 = (char *)CONCAT22(uVar30,CONCAT11(cVar7 + *(char *)(CONCAT22(uVar30,CONCAT11(
                                                  cVar7,cVar34)) + 0x26),cVar34));
          *pcVar36 = *pcVar36 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          cVar34 = bVar6 + 0x2a;
          pcVar36 = (char *)CONCAT31(uVar23,cVar34);
          if ((POPCOUNT(cVar34) & 1U) == 0) {
            *pcVar36 = *pcVar36 + cVar34;
            pbVar9 = (byte *)(CONCAT31(uVar23,bVar6 + 0x4f) + -0x33282610);
            bVar6 = *pbVar9;
            bVar33 = (byte)pbVar9;
            *pbVar9 = *pbVar9 + bVar33;
            uVar23 = (undefined3)((uint)pbVar9 >> 8);
            if (!CARRY1(bVar6,bVar33)) {
              if (!SCARRY1(bVar33,'\0')) {
                *pbVar9 = *pbVar9 + bVar33;
                uVar24 = CONCAT22(uVar31,CONCAT11(bVar25 | (byte)*puVar37,bVar27));
                bVar33 = bVar33 & (byte)*puVar37;
                *(char *)CONCAT31(uVar23,bVar33) = *(char *)CONCAT31(uVar23,bVar33) + bVar33;
                pcVar36 = (char *)CONCAT31(uVar23,bVar33 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar36 = (char *)CONCAT31(uVar23,bVar33 + *pcVar10);
              if (SCARRY1(bVar33,*pcVar10) != (char)(bVar33 + *pcVar10) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar6 = bVar33 + *pcVar10;
            pbVar9 = (byte *)CONCAT31(uVar23,bVar6);
            if (SCARRY1(bVar33,*pcVar10) == (char)bVar6 < '\0') {
              pcVar36 = (char *)CONCAT22(uVar31,CONCAT11(bVar25 | (byte)*puVar37,bVar27));
              *pcVar10 = *pcVar10 + cVar8;
              *(byte *)puVar37 = (byte)*puVar37 ^ bVar6;
              *(char *)((int)pbVar9 * 2) = *(char *)((int)pbVar9 * 2) + bVar6;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar36 = *pcVar36 + (char)pcVar36;
            uVar23 = (undefined3)((uint)pcVar36 >> 8);
            bVar6 = (char)pcVar36 + 0x2aU & (byte)*puVar37;
            *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
            pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
            *pcVar36 = *pcVar36 + bVar6 + 0x2a;
            pcVar36 = (char *)CONCAT31(uVar23,bVar6 + 0x54 & (byte)*puVar37);
code_r0x00403072:
            cVar34 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar34;
            uVar23 = (undefined3)((uint)pcVar36 >> 8);
            pcVar36 = (char *)CONCAT31(uVar23,cVar34 + '*');
            *pcVar36 = *pcVar36 + cVar34 + '*';
            bVar6 = cVar34 + 0x54U & (byte)*puVar37;
            *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,in_ES);
            uVar24 = CONCAT22((short)((uint)uVar24 >> 0x10),
                              CONCAT11((char)((uint)uVar24 >> 8) +
                                       *(char *)CONCAT31(uVar23,bVar6 + 0x2a),(char)uVar24));
            *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar8;
            pcVar36 = pcStackY_7c;
code_r0x0040309a:
            cVar34 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar34;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,uVar43);
            *pcVar36 = *pcVar36 + cVar34;
            pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar34 + 0x2aU & (byte)*puVar37);
          }
          cVar34 = (char)pbVar9;
          *pbVar9 = *pbVar9 + cVar34;
          uVar23 = (undefined3)((uint)pbVar9 >> 8);
          cVar7 = cVar34 + '*';
          pcVar36 = (char *)CONCAT31(uVar23,cVar7);
          *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar8;
          *pcVar36 = *pcVar36 + cVar7;
          cVar29 = (char)pcStackY_7c - (byte)*puVar39;
          pcVar10 = (char *)CONCAT22((short)((uint)pcStackY_7c >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_7c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_7c >> 8),
                                                                 cVar29) + 0x34),cVar29));
          *pcVar36 = *pcVar36 + cVar7;
          bVar6 = cVar34 + 0x54U & (byte)*puVar37;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pbVar9 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
          bVar6 = (byte)((uint)uVar24 >> 8);
          pcVar36 = (char *)CONCAT22((short)((uint)uVar24 >> 0x10),
                                     CONCAT11(bVar6 + *pbVar9,(char)uVar24));
          pbVar9 = pbVar9 + (uint)CARRY1(bVar6,*pbVar9) + *(int *)pbVar9;
          *(byte *)puVar37 = (byte)*puVar37 + (char)uVar24;
          uVar23 = (undefined3)((uint)pbVar9 >> 8);
          cVar34 = (byte)pbVar9 - *pbVar9;
          piVar20 = (int *)CONCAT31(uVar23,cVar34);
          puVar39 = (uint *)((int)puVar39 + (uint)((byte)pbVar9 < *pbVar9) + *piVar20);
          cVar34 = cVar34 + (char)*piVar20;
          pbVar9 = (byte *)CONCAT31(uVar23,cVar34);
          *pbVar9 = *pbVar9 + cVar34;
code_r0x004030df:
          *pcVar36 = *pcVar36 + cVar8;
          bVar6 = *pbVar9;
          bVar25 = (byte)pbVar9;
          *pbVar9 = *pbVar9 + bVar25;
          *(byte **)(pcVar10 + -0x41) =
               (byte *)((int)puVar39 + (uint)CARRY1(bVar6,bVar25) + *(int *)(pcVar10 + -0x41));
          *pbVar9 = *pbVar9 + bVar25;
          uVar23 = (undefined3)((uint)pbVar9 >> 8);
          bVar25 = bVar25 | (byte)*puVar39;
          *(char *)CONCAT31(uVar23,bVar25) = *(char *)CONCAT31(uVar23,bVar25) + bVar25;
          pcVar36 = (char *)CONCAT31(uVar23,bVar25 + 0x7b);
          *pcVar36 = *pcVar36 + bVar25 + 0x7b;
          pbVar9 = (byte *)((int)puVar39 + CONCAT31(uVar23,bVar25 - 8) + -1);
          *pbVar9 = *pbVar9 + (bVar25 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar40 = puVar39 + (uint)bVar45 * -2 + 1;
        out(*puVar39,uVar32);
        pcVar36 = unaff_EBP + 1;
        pcStackY_44 = unaff_EBP;
      }
      bVar6 = cVar34 - bVar44;
      pbVar9 = (byte *)((int)puVar40 + (int)puVar41 * 2);
      bVar44 = CARRY1(*pbVar9,bVar6);
      *pbVar9 = *pbVar9 + bVar6;
code_r0x00402ef9:
      pcVar36 = (char *)CONCAT31(uVar23,bVar6 - bVar44);
      pbVar9 = (byte *)((int)puVar41 + (int)unaff_EBP * 2);
      *pbVar9 = *pbVar9 + (bVar6 - bVar44);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar37;
  puVar13 = puVar37 + 0x2828000;
  bVar6 = (byte)puVar19;
  bVar44 = (byte)*puVar13 < bVar6;
  *(byte *)puVar13 = (byte)*puVar13 - bVar6;
  bVar6 = (byte)pbVar9 + *pbVar9;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6 + bVar44);
  puVar13 = puVar41;
  uVar42 = in_ES;
  if (CARRY1((byte)pbVar9,*pbVar9) || CARRY1(bVar6,bVar44)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar36 = *pcVar36 + bVar25;
  uVar42 = in_ES;
  in_SS = uVar43;
  goto code_r0x00402e6e;
}


