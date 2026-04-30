/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402862
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 param_1, uint * param_2)
 * Local Vars  : pcStackY_78, param_1, pcStackY_40, param_2, puStackY_2c, puStackY_28, uStackY_24, pcStack_4, uVar1, uVar2, uVar3, uVar4, uVar5, bVar6, cVar7, cVar8, in_EAX, pbVar9, pcVar10, uVar11, uVar12, puVar13, pbVar14, piVar15, iVar16, pcVar17, pcVar18, puVar19, piVar20, pbVar21, puVar22, puVar23, uVar24, extraout_ECX, extraout_ECX_00, uVar25, bVar26, cVar27, bVar28, bVar29, cVar30, uVar31, uVar32, uVar33, bVar34, cVar35, uVar36, unaff_EBX, pcVar37, bVar38, unaff_EBP, unaff_ESI, puVar39, puVar40, unaff_EDI, puVar41, in_ES, uVar42, uVar43, in_CS, in_SS, in_DS, in_GS_OFFSET, bVar44, in_AF, in_TF, in_IF, bVar45, bVar46, in_NT, uVar47
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
  byte bVar6;
  char cVar7;
  char cVar8;
  byte *in_EAX;
  byte *pbVar9;
  undefined3 uVar24;
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
  uint *puVar22;
  ushort *puVar23;
  byte bVar26;
  undefined4 extraout_ECX;
  uint *extraout_ECX_00;
  char cVar27;
  byte bVar28;
  byte bVar29;
  char cVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined4 uVar25;
  byte bVar34;
  undefined2 uVar33;
  char cVar35;
  undefined1 uVar36;
  byte bVar38;
  uint *unaff_EBX;
  char *pcVar37;
  char *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar39;
  uint *puVar40;
  uint *unaff_EDI;
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
  char *pcStackY_78;
  char *pcStackY_40;
  uint *puStackY_2c;
  uint *puStackY_28;
  undefined4 uStackY_24;
  char *pcStack_4;
  
  bVar45 = false;
                    /* .NET CLR Managed Code */
  bVar6 = (byte)((uint)param_1 >> 8);
  puVar19 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6 + *in_EAX,(char)param_1))
  ;
  pbVar9 = in_EAX + (uint)CARRY1(bVar6,*in_EAX) + *(int *)in_EAX;
  do {
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    cVar35 = (char)unaff_EBX - (byte)*unaff_ESI;
    iVar16 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                      CONCAT11((char)((uint)unaff_EBX >> 8) +
                               *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar35) + 0x12),
                               cVar35));
    *pbVar9 = *pbVar9 + (char)pbVar9;
    uVar24 = (undefined3)((uint)pbVar9 >> 8);
    bVar6 = (char)pbVar9 + 0x2aU & (byte)*param_2;
    pcVar37 = (char *)CONCAT31(uVar24,bVar6);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x12));
    *pcVar37 = *pcVar37 + bVar6;
    puVar13 = (uint *)CONCAT31(uVar24,bVar6 + 0x2a);
    pcStack_4 = (char *)(uint)in_DS;
get_Value:
    cVar35 = *(char *)(iVar16 + 0x13);
    *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
    uVar24 = (undefined3)((uint)puVar13 >> 8);
    bVar6 = (char)puVar13 + 0x2aU & (byte)*param_2;
    pcVar37 = (char *)CONCAT31(uVar24,bVar6);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x13));
    *pcVar37 = *pcVar37 + bVar6;
    pbVar9 = (byte *)CONCAT31(uVar24,bVar6 + 0x2a);
    bVar6 = (byte)((uint)puVar19 >> 8);
    bVar26 = bVar6 + *pbVar9;
    pbVar9 = pbVar9 + (uint)CARRY1(bVar6,*pbVar9) + *(int *)pbVar9;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar16 >> 0x10),
                                                 CONCAT11((char)((uint)iVar16 >> 8) + cVar35,
                                                          (char)iVar16)) >> 8),
                                 (char)iVar16 - (byte)*unaff_ESI);
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11(bVar26 + *pbVar9,(char)puVar19));
    pbVar9 = pbVar9 + (uint)CARRY1(bVar26,*pbVar9) + *(int *)pbVar9;
    uVar42 = in_DS;
code_r0x00402898:
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    bVar6 = (byte)param_2;
    uVar31 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar6);
    pbVar14 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar31);
    pcVar37 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[-0x19],
                                        (char)unaff_EBX));
    *pbVar9 = *pbVar9 + (char)pbVar9;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + '\x03');
    puVar13 = unaff_ESI;
    do {
      unaff_ESI = puVar13 + 1;
      out(*puVar13,uVar31);
      pcVar37 = pcVar37 + -1;
      bVar26 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar26;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((byte)((uint)puVar19 >> 8) | *pbVar14,(char)puVar19));
      *pbVar9 = *pbVar9 + bVar26;
      *pcVar37 = *pcVar37 + bVar6;
      *(byte *)((int)pbVar9 * 2) = *(byte *)((int)pbVar9 * 2) ^ bVar26;
      *pbVar9 = *pbVar9 + bVar26;
      *pbVar9 = *pbVar9 | bVar26;
      bVar44 = CARRY1((byte)*puVar19,bVar6);
      *(byte *)puVar19 = (byte)*puVar19 + bVar6;
      cVar35 = bVar26 + 10 + bVar44;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar35);
      puVar13 = unaff_ESI;
    } while (bVar26 < 0xf6 && !CARRY1(bVar26 + 10,bVar44));
    *pbVar9 = *pbVar9 + cVar35;
    pcVar10 = (char *)((uint)pbVar9 | *unaff_EDI);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pcVar37 >> 0x10),
                                 CONCAT11((char)((uint)pcVar37 >> 8) + unaff_EBP[-100],(char)pcVar37
                                         ));
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
      iVar16 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
      goto get_Value;
    }
    *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 + 'r');
    pcStack_4 = unaff_EBP;
code_r0x004028e2:
    uVar11 = *puVar13;
    *puVar13 = (uint)(*puVar13 + (int)puVar13);
    if (SCARRY4(uVar11,(int)puVar13)) {
      if (*puVar13 == 0 || SCARRY4(uVar11,(int)puVar13) != (int)*puVar13 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    unaff_EBX = (uint *)((int)unaff_EBX + -1);
    cVar35 = (char)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + cVar35;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((byte)((uint)puVar19 >> 8) |
                                        *(byte *)((int)puVar19 + 0x16d7207),(char)puVar19));
    pbVar9 = (byte *)((int)puVar13 + 0x7d);
    bVar6 = *pbVar9;
    bVar34 = (byte)((uint)param_2 >> 8);
    bVar26 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar34;
    uVar42 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY1(bVar26,bVar34) * 0x800 |
             (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
             (ushort)((char)*pbVar9 < '\0') * 0x80 | (ushort)(*pbVar9 == 0) * 0x40 |
             (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(*pbVar9) & 1U) == 0) * 4 |
             (ushort)CARRY1(bVar6,bVar34);
    *(byte *)puVar13 = (byte)*puVar13 + cVar35;
    pbVar9 = (byte *)(CONCAT31((int3)((uint)puVar13 >> 8),cVar35 + '+') ^ *unaff_EDI);
    if ((POPCOUNT((uint)pbVar9 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar6 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar6;
    puVar13 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6 + 0x72);
    if (bVar6 < 0x8e && (byte)(bVar6 + 0x72) != '\0') {
      uVar43 = in_CS;
      if (SCARRY1(bVar6,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar13 + 0x6f) = *(byte *)((int)puVar13 + 0x6f) + bVar34;
    }
code_r0x00402905:
    in_ES = uVar42;
    uVar47 = CONCAT44(param_2,puVar13);
    unaff_EBX = (uint *)((int)unaff_EBX + -1);
    cVar35 = (char)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + cVar35;
    bVar6 = (byte)((uint)puVar19 >> 8) | (byte)*puVar19;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar6,(char)puVar19));
    if ((char)bVar6 < '\x01') {
      *(byte *)puVar13 = (byte)*puVar13 + cVar35;
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)(unaff_EBP + -100));
      uVar42 = in_ES;
      goto code_r0x00402929;
    }
    *(byte *)puVar13 = (byte)*puVar13 + cVar35;
    uVar42 = 0x291c;
    uVar47 = func_0x7346291c();
    *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
    puVar19 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                               (byte)extraout_ECX | *(byte *)((ulonglong)uVar47 >> 0x20));
    puStackY_28 = (uint *)CONCAT22(puStackY_28._2_2_,in_ES);
    uStackY_24 = unaff_EBX;
    while( true ) {
      pcVar37 = (char *)((int)uVar47 * 2);
      *pcVar37 = *pcVar37 - (char)puVar19;
      uVar11 = *unaff_EBX;
      cVar35 = (char)((uint)puVar19 >> 8);
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar35;
      if (SCARRY1((byte)uVar11,cVar35) == (char)(byte)*unaff_EBX < '\0') {
        pbVar9 = (byte *)((int)unaff_EDI + (int)uVar47);
        *pbVar9 = *pbVar9 + (char)uVar47;
        bVar6 = *pbVar9;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
      cVar35 = (char)uVar47;
      *(char *)uVar47 = *(char *)uVar47 + cVar35;
      uVar24 = (undefined3)((ulonglong)uVar47 >> 8);
      bVar6 = cVar35 + 7;
      puVar13 = (uint *)CONCAT31(uVar24,bVar6);
      bVar26 = (byte)((ulonglong)uVar47 >> 0x28);
      if ((POPCOUNT(bVar6) & 1U) != 0) break;
      *(byte *)puVar13 = (byte)*puVar13 + bVar6;
      pcVar37 = (char *)CONCAT31(uVar24,cVar35 + '3');
      uVar31 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar36 = SUB41(unaff_EBX,0);
      bVar6 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar6);
      unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(bVar6,uVar36));
      *pcVar37 = *pcVar37 + cVar35 + '3';
      cVar7 = cVar35 + ':';
      puVar13 = (uint *)CONCAT31(uVar24,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) {
        bVar6 = bVar6 | *(byte *)((int)param_2 + 7);
        unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(bVar6,uVar36));
        bVar44 = (POPCOUNT(bVar6) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar13 = (byte)*puVar13 + cVar7;
      puVar13 = (uint *)(CONCAT31(uVar24,cVar35 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar9 = (byte *)((int)puVar13 + 0x72);
      bVar46 = SCARRY1(*pbVar9,bVar26);
      *pbVar9 = *pbVar9 + bVar26;
      bVar6 = POPCOUNT(*pbVar9);
code_r0x0040294c:
      if ((bVar6 & 1) == 0) {
        *(byte *)((int)puVar13 + 0x72) = *(byte *)((int)puVar13 + 0x72) + (char)((uint)param_2 >> 8)
        ;
      }
      else if (bVar46) {
        unaff_EBP = *(char **)unaff_EBP;
        cVar35 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (char *)0x7e700001;
      puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,in_SS);
code_r0x00402957:
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
      cVar35 = (char)puVar13 + '(';
      puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),cVar35);
      *(byte *)puVar13 = (byte)*puVar13 + cVar35;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*puVar13,(char)puVar19)
                                );
      *(byte *)puVar13 = (byte)*puVar13 + cVar35;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[0x18],
                                          (char)param_2));
      unaff_ESI = puStackY_2c;
      unaff_EDI = puStackY_28;
code_r0x00402966:
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
      bVar6 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 7);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar6,(char)unaff_EBX))
      ;
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
      pcVar37 = (char *)((ulonglong)uVar47 >> 0x20);
      if ((bVar6 & 1) == 0) {
        *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
        *pcVar37 = *pcVar37 + (char)puVar19;
        uVar47 = CONCAT44(CONCAT22((short)((ulonglong)uVar47 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar47 >> 0x28) - pcVar37[0x1f],
                                            (char)((ulonglong)uVar47 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar47 >> 8),(char)uVar47 + '('));
code_r0x00402991:
        param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
        pbVar9 = (byte *)uVar47;
        bVar6 = (byte)uVar47;
        bVar44 = CARRY1(bVar6,*pbVar9);
        puVar13 = (uint *)CONCAT31((int3)((ulonglong)uVar47 >> 8),bVar6 + *pbVar9);
        cVar35 = bVar6 + *pbVar9;
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
            bVar26 = (byte)pbVar9;
            *pbVar9 = *pbVar9 + bVar26;
            *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
            bVar6 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar26;
            *unaff_EDI = (uint)((int)unaff_EBX + (uint)CARRY1(bVar6,bVar26) + *unaff_EDI);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar19;
            uVar24 = (undefined3)((uint)pbVar9 >> 8);
            bVar26 = bVar26 | (byte)*unaff_ESI;
            puVar13 = (uint *)CONCAT31(uVar24,bVar26);
            uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,in_SS);
            uVar11 = *puVar13;
            uVar1 = *puVar13;
            *puVar13 = (uint)(*puVar13 + (int)puVar13);
            if (SCARRY4(uVar1,(int)puVar13)) {
              *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)unaff_EBX;
              *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
              *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)unaff_EBX;
            }
            else {
              puStackY_28 = (uint *)CONCAT22(puStackY_28._2_2_,in_ES);
              in_SS = in_ES;
              uVar4 = in_ES;
              if (CARRY4(uVar11,(uint)puVar13)) goto code_r0x00402972;
              bVar44 = CARRY1(bVar26,(byte)*puVar13);
              bVar46 = SCARRY1(bVar26,(byte)*puVar13);
              puVar13 = (uint *)CONCAT31(uVar24,bVar26 + (byte)*puVar13);
code_r0x004029be:
              if (!bVar46) {
                puStackY_28 = (uint *)CONCAT22(puStackY_28._2_2_,in_ES);
                *(byte *)((int)param_2 + -0x37) =
                     (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar44;
                cVar35 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar35;
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
            in_ES = (ushort)pcStack_4;
            goto code_r0x00402966;
          }
          *(uint *)((int)param_2 + -0x23) =
               (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar44;
          uVar11 = *puVar13;
          bVar26 = (byte)puVar13;
          uVar1 = *puVar13;
          uVar24 = (undefined3)((uint)puVar13 >> 8);
          bVar6 = bVar26 + (byte)*puVar13;
          puVar13 = (uint *)CONCAT31(uVar24,bVar6);
          uVar4 = in_ES;
          if (SCARRY1(bVar26,(byte)uVar1)) goto code_r0x00402972;
          cVar35 = (char)param_2;
          bVar34 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                   CARRY1(bVar26,(byte)uVar11);
          param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar34,cVar35));
          puVar39 = (uint *)CONCAT31(uVar24,bVar6 + (byte)*puVar13);
          bVar26 = (byte)puVar19;
          uVar42 = in_ES;
          if (SCARRY1(bVar6,(byte)*puVar13)) {
            *(byte *)param_2 = (byte)*param_2 + bVar26;
            uVar47 = CONCAT44(param_2,(int)puVar39 + -0x1c37211);
            pcVar37 = (char *)((int)puVar39 + -0x1c3720a);
            *pcVar37 = *pcVar37 + bVar34;
            bVar6 = POPCOUNT(*pcVar37);
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
          *unaff_EBX = (*unaff_EBX - uVar12) -
                       (uint)((byte)uVar11 < 0x72 || bVar6 < CARRY4((uint)puVar39,*puVar39));
          pbVar9 = (byte *)(uVar12 - 0x5e);
          bVar6 = *pbVar9;
          *pbVar9 = *pbVar9 + bVar34;
          uVar11 = (uint)CARRY1(bVar6,bVar34);
          uVar1 = uVar12 - 0x32d72;
          puVar13 = (uint *)(uVar1 - uVar11);
          if (SBORROW4(uVar12,0x32d72) != SBORROW4(uVar1,uVar11)) goto code_r0x00402992;
          uVar43 = in_DS;
          if (uVar12 < 0x32d72 || uVar1 < uVar11) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar13 >> 8);
            *(byte *)param_2 = (byte)*param_2 + bVar26;
            puVar39 = unaff_ESI + 1;
            out(*unaff_ESI,CONCAT11(bVar34,cVar35));
            *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
            goto code_r0x00402a3e;
          }
          bVar44 = CARRY4((uint)puVar13,*puVar13);
          bVar46 = SCARRY4((int)puVar13,*puVar13);
          puVar13 = (uint *)((int)puVar13 + *puVar13);
          if (!bVar46) {
            uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,in_ES);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar44;
            bVar6 = (byte)puVar13;
            *(byte *)((int)param_2 + (int)unaff_EBP) =
                 *(byte *)((int)param_2 + (int)unaff_EBP) + bVar6;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar35;
            *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar6;
            bVar28 = (byte)((uint)puVar19 >> 8);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar28;
            *(byte *)puVar13 = (byte)*puVar13 + bVar6;
            pbVar14 = (byte *)CONCAT31((int3)((uint)puVar13 >> 8),bVar6 | (byte)*puVar13);
            *(byte *)puVar19 = (byte)*puVar19 + cVar35;
            bVar38 = *pbVar14;
            uVar31 = (undefined2)((uint)puVar19 >> 0x10);
            puVar19 = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar38,bVar26));
            pbVar14 = pbVar14 + (uint)CARRY1(bVar28,*pbVar14) + *(int *)pbVar14;
            *(byte *)param_2 = (byte)*param_2 + bVar26;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar9 = pbVar14 + 0x73;
            bVar6 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar34;
            uVar24 = (undefined3)((uint)pbVar14 >> 8);
            bVar6 = (char)pbVar14 + CARRY1(bVar6,bVar34);
            pcVar37 = (char *)CONCAT31(uVar24,bVar6);
            *(byte *)param_2 = (byte)*param_2 + bVar26;
            if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
              in_SS = in_ES;
            }
            puVar41 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x17));
            *pcVar37 = *pcVar37 + bVar6;
            cVar35 = bVar6 + 2;
            puVar13 = (uint *)CONCAT31(uVar24,cVar35);
            if (bVar6 < 0xfe) {
              *puVar13 = (uint)(*puVar13 + (int)puVar13);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar13 = (byte)*puVar13 + cVar35;
            uVar11 = *param_2;
            puVar39 = (uint *)((int)unaff_ESI + unaff_EBX[0x19]);
            *(byte *)puVar13 = (byte)*puVar13 + cVar35;
            puVar19 = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar38 | (byte)*puVar13,
                                                       bVar26 | (byte)uVar11));
            unaff_EDI = puVar41;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar6;
    pbVar9 = (byte *)((int)puVar13 + 0x73);
    bVar44 = CARRY1(*pbVar9,bVar26);
    *pbVar9 = *pbVar9 + bVar26;
  } while( true );
code_r0x00402992:
  pbVar9 = (byte *)((int)puVar13 + 0x2a);
  bVar44 = CARRY1(*pbVar9,bVar34);
  *pbVar9 = *pbVar9 + bVar34;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar13) = *(byte *)(in_GS_OFFSET + (int)puVar13) + (char)puVar13;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                      (char)puVar19));
  *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
code_r0x00402a3e:
  uVar24 = (undefined3)((uint)puVar13 >> 8);
  bVar6 = (byte)puVar13 | (byte)*puVar39;
  pcVar37 = (char *)CONCAT31(uVar24,bVar6);
  if ((char)bVar6 < '\0') {
    *pcVar37 = *pcVar37 + bVar6;
    cVar35 = bVar6 + 2;
    piVar20 = (int *)CONCAT31(uVar24,cVar35);
    if ((POPCOUNT(cVar35) & 1U) == 0) {
      *(char *)piVar20 = (char)*piVar20 + cVar35;
      bVar6 = bVar6 + 0x71;
      pcVar10 = (char *)CONCAT31(uVar24,bVar6);
      pcVar37 = (char *)segment(uVar43,(short)unaff_EBX + (short)puVar39);
      *pcVar37 = *pcVar37 + bVar6;
      uVar11 = unaff_EDI[0x1a];
      *pcVar10 = *pcVar10 + bVar6;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((byte)((uint)puVar19 >> 8) | (byte)uVar11 |
                                          *(byte *)((int)unaff_EDI + 0x69),(char)puVar19));
      *pcVar10 = *pcVar10 + bVar6;
      bVar6 = bVar6 | (byte)*param_2;
      pcVar37 = (char *)CONCAT31(uVar24,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
    out(*puVar39,(short)param_2);
  }
  else {
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                          (char)unaff_EBX));
code_r0x00402a5d:
    *pcVar37 = *pcVar37 + (char)pcVar37;
    piVar20 = (int *)CONCAT31((int3)((uint)pcVar37 >> 8),(char)pcVar37 + 'o');
    unaff_ESI = puVar39;
  }
code_r0x00402a61:
  pcVar37 = (char *)segment(uVar43,(short)unaff_EBX + (short)unaff_ESI);
  *pcVar37 = *pcVar37 + (char)piVar20;
  cVar35 = (char)puVar19;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | (byte)unaff_EDI[0x1a],cVar35));
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  uVar31 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar31);
  piVar15 = (int *)((int)piVar20 + *piVar20);
  puVar39 = unaff_ESI;
  puVar41 = unaff_EDI;
  uVar42 = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar35;
  puVar39 = unaff_ESI + (uint)bVar45 * -2 + 1;
  out(*unaff_ESI,uVar31);
code_r0x00402a75:
  bVar6 = (byte)((uint)puVar19 >> 8) | (byte)*param_2;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar6,(char)puVar19));
  piVar20 = (int *)(uint)(byte)*unaff_EBX;
  *(byte *)puVar39 = (byte)*puVar39 - bVar6;
  puVar41 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  out(*puVar39,(short)param_2);
  bVar6 = in((short)param_2);
  *(byte *)puVar41 = bVar6;
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*param_2,(char)puVar19));
  iVar16 = *piVar20;
  cVar35 = in(1);
  puVar13 = (uint *)CONCAT31((int3)((uint)((int)piVar20 + *piVar20) >> 8),cVar35);
  *(char *)puVar13 = (char)*puVar13 + cVar35;
  puVar13 = (uint *)((uint)puVar13 | *puVar13);
  *(byte *)puVar19 = (byte)*puVar19 + (char)param_2;
  puVar39 = (uint *)((int)puVar39 + (((uint)bVar45 * -8 + 4) - iVar16));
  puVar41 = (uint *)((int)puVar41 + (uint)bVar45 * -2 + 1);
  in_SS = in_ES;
  while( true ) {
    bVar6 = (byte)puVar13 | (byte)*param_2;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar6);
    unaff_EDI = puVar41;
    if ((POPCOUNT(bVar6) & 1U) != 0) break;
    *(byte *)puVar13 = (byte)*puVar13 + bVar6;
code_r0x00402a9b:
    uVar24 = (undefined3)((uint)puVar13 >> 8);
    cVar35 = (char)puVar13 + '\r';
    piVar15 = (int *)CONCAT31(uVar24,cVar35);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar15;
    *(char *)piVar15 = (char)*piVar15 + cVar35;
    *(byte *)(puVar39 + -0xc800000) = (byte)puVar39[-0xc800000] + (char)param_2;
    *(char *)piVar15 = (char)*piVar15 + cVar35;
    *(byte *)param_2 = (byte)*param_2 + cVar35;
    cVar7 = (char)puVar19;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar7;
      unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
      out(*puVar39,(short)param_2);
      piVar20 = (int *)((longlong)*piVar15 * 0x7b020a00);
      *(char *)piVar20 =
           (char)*piVar20 - ((longlong)(int)piVar20 != (longlong)*piVar15 * 0x7b020a00);
      pbVar9 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar9 = *pbVar9;
      goto code_r0x00402a61;
    }
    *(char *)piVar15 = (char)*piVar15 + cVar35;
    puVar13 = (uint *)CONCAT31(uVar24,(char)puVar13 + ':');
    unaff_ESI = (uint *)((uint)puVar39 | *(uint *)((int)param_2 + -0x79));
    iVar16 = (int)puVar13 + *puVar13;
    if (SCARRY4((int)puVar13,*puVar13)) {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            (byte)unaff_ESI[(int)unaff_EBX],(char)unaff_EBX));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar16;
      puVar41 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar24 = (undefined3)((uint)iVar16 >> 8);
    cVar35 = (char)iVar16 + CARRY4((uint)puVar13,*puVar13);
    piVar20 = (int *)CONCAT31(uVar24,cVar35);
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    bVar44 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar44) && (bVar44)) goto code_r0x00402a61;
    *(char *)piVar20 = (char)*piVar20 + cVar35;
    cVar8 = cVar35 + '(';
    pcVar37 = (char *)CONCAT31(uVar24,cVar8);
    puVar41 = unaff_EDI + (uint)bVar45 * -2 + 1;
    uVar11 = in((short)param_2);
    *unaff_EDI = uVar11;
    *pcVar37 = *pcVar37 + cVar8;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((byte)((uint)puVar19 >> 8) | bRama07b0222,cVar7));
    *pcVar37 = *pcVar37 + cVar8;
    pcVar37 = (char *)CONCAT31(uVar24,cVar35 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar39 = (uint *)((int)(unaff_ESI + (uint)bVar45 * -2 + 1) + (uint)bVar45 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar45 * -2 + 1],(short)param_2);
    bVar6 = (byte)pcVar37;
    *pcVar37 = *pcVar37 + bVar6;
    unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar41);
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar24 = (undefined3)((uint)pcVar37 >> 8);
    bVar6 = bVar6 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar35 = bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) * -0x60 + (byte)*param_2;
    piVar20 = (int *)CONCAT31(uVar24,cVar35);
    if ((POPCOUNT(cVar35) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar20 = (char)*piVar20 + cVar35;
    piVar15 = (int *)CONCAT31(uVar24,cVar35 + '\x17');
    uVar42 = in_ES;
code_r0x00402ae3:
    out(*puVar39,(short)param_2);
    unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1 + (uint)bVar45 * -2 + 1;
    out(puVar39[(uint)bVar45 * -2 + 1],(short)param_2);
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
code_r0x00402ae7:
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x60],
                                          (char)unaff_EBX));
    cVar35 = (char)piVar15;
    *(char *)piVar15 = (char)*piVar15 + cVar35;
    uVar24 = (undefined3)((uint)piVar15 >> 8);
    bVar6 = cVar35 + 2;
    puVar13 = (uint *)CONCAT31(uVar24,bVar6);
    in_ES = uVar42;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(byte *)puVar13 = (byte)*puVar13 + bVar6;
      cVar35 = cVar35 + '}';
      puVar13 = (uint *)CONCAT31(uVar24,cVar35);
      *(byte *)puVar13 = ((byte)*puVar13 - cVar35) - (0x84 < bVar6);
      pbVar9 = (byte *)((int)param_2 + (int)puVar13);
      *pbVar9 = *pbVar9 + cVar35;
      bVar6 = POPCOUNT(*pbVar9);
      puVar39 = unaff_ESI;
code_r0x00402af9:
      in_ES = uVar42;
      unaff_EDI = puVar41;
      if ((bVar6 & 1) == 0) {
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        bVar6 = (byte)puVar19;
        *(byte *)param_2 = (byte)*param_2 + bVar6;
        uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,in_SS);
        unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
        out(*puVar39,(short)param_2);
        uVar11 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar6;
        iVar16 = CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 + 'o') +
                 *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar11,bVar6);
        pcVar37 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '(');
        while( true ) {
          uVar11 = *param_2;
          bVar26 = (byte)puVar19;
          *(byte *)param_2 = (byte)*param_2 + bVar26;
          pcVar37 = pcVar37 + (uint)CARRY1((byte)uVar11,bVar26) + iRam73280512;
          bVar6 = (byte)pcVar37;
          *pcVar37 = *pcVar37 + bVar6;
          puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                     CONCAT11((byte)((uint)puVar19 >> 8) | bRam7d160243,bVar26));
          bVar45 = ((uint)uStackY_24 & 0x400) != 0;
          in_AF = ((uint)uStackY_24 & 0x10) != 0;
          *pcVar37 = *pcVar37 + bVar6;
          uVar24 = (undefined3)((uint)pcVar37 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar24,bVar6 + 2) + (uint)(0xfd < bVar6);
          cVar35 = bVar6 + 4;
          if (SCARRY1(bVar6 + 2,'\x02') != cVar35 < '\0') break;
          *(char *)CONCAT31(uVar24,cVar35) = *(char *)CONCAT31(uVar24,cVar35) + cVar35;
          iVar16 = CONCAT31(uVar24,bVar6 + 0x16);
code_r0x00402b33:
          piVar15 = (int *)(iVar16 + 0xe2802);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)puVar19 >> 8);
          uVar42 = in_ES;
          in_ES = in_SS;
          while( true ) {
            bVar26 = (byte)unaff_EBX | (byte)((uint)puVar19 >> 8);
            unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar26);
            *piVar15 = (int)(*piVar15 + (int)piVar15);
            cVar35 = (char)piVar15;
            *(byte *)param_2 = (byte)*param_2 + cVar35;
            if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar15 = (char)*piVar15 + cVar35;
            uVar11 = CONCAT31((int3)((uint)piVar15 >> 8),cVar35 + '\x13');
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
            uVar11 = *unaff_EBX;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar26;
            pcVar37 = (char *)(CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x12') + 0x228b26
                               + *puVar41 + (uint)CARRY1((byte)uVar11,bVar26));
            cVar35 = bVar6 + (byte)*puVar19;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar35);
            if (SCARRY1(bVar6,(byte)*puVar19) == cVar35 < '\0') break;
            *pcVar37 = *pcVar37 + (char)pcVar37;
            cVar35 = (char)pcVar37 + '\x02';
            pcVar37 = (char *)CONCAT31((int3)((uint)pcVar37 >> 8),cVar35);
            bVar6 = POPCOUNT(cVar35);
            uVar42 = in_ES;
code_r0x00402b7a:
            puVar13 = unaff_ESI;
            if ((bVar6 & 1) != 0) break;
            while( true ) {
              cVar35 = (char)pcVar37;
              *pcVar37 = *pcVar37 + cVar35;
              uVar24 = (undefined3)((uint)pcVar37 >> 8);
              pcVar37 = (char *)CONCAT31(uVar24,cVar35 + '\x13');
              *(byte *)puVar19 = (byte)*puVar19 | (byte)param_2;
              *(byte *)puVar41 = (byte)*puVar41 | (byte)param_2;
              *param_2 = (uint)(pcVar37 + *param_2);
              uVar31 = (undefined2)((uint)unaff_EBX >> 0x10);
              uVar36 = SUB41(unaff_EBX,0);
              cVar7 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
              unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar7,uVar36));
              *pcVar37 = *pcVar37 + cVar35 + '\x13';
              piVar15 = (int *)CONCAT31(uVar24,cVar35 + -0x7a);
              uVar11 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar11,(char)puVar19) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar15 = (char)*piVar15 + cVar35 + -0x7a;
              cVar8 = cVar35 + -0x78;
              piVar15 = (int *)CONCAT31(uVar24,cVar8);
              uVar4 = uVar42;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *(char *)piVar15 = (char)*piVar15 + cVar8;
              pcVar37 = (char *)CONCAT31(uVar24,cVar35 + -0x65);
              *puVar19 = *puVar19 | (uint)param_2;
              *puVar41 = *puVar41 | (uint)param_2;
              pbVar9 = (byte *)((int)puVar19 + -1);
              cVar7 = cVar7 + *(byte *)((int)unaff_EBX + -0x5e);
              unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar7,uVar36));
              *pcVar37 = *pcVar37 + cVar35 + -0x65;
              bVar6 = cVar35 + 10;
              puVar39 = (uint *)CONCAT31(uVar24,bVar6);
              bVar26 = (byte)pbVar9;
              *(byte *)param_2 = (byte)*param_2 + bVar26;
              unaff_ESI = puVar13 + (uint)bVar45 * -2 + 1;
              out(*puVar13,(short)param_2);
              uVar11 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar26;
              uVar2 = (uint)CARRY1((byte)uVar11,bVar26);
              uVar11 = *param_2;
              uVar1 = *param_2;
              pbVar14 = pbVar9 + uVar1 + uVar2;
              uVar5 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar7;
              uVar12 = *param_2;
              unaff_EBP = (char *)((uint)unaff_EBP | *puVar39);
              *(byte *)puVar39 = (char)*puVar39 + bVar6;
              puVar19 = (uint *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar14 >> 8) | bRam7d170243,
                                                  (char)pbVar14 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar9,uVar11) ||
                                                  CARRY4((uint)(pbVar9 + uVar1),uVar2))));
              bVar45 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar39 = (char)*puVar39 + bVar6;
              bVar44 = 0xfd < bVar6;
              pcVar37 = (char *)CONCAT31(uVar24,cVar35 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar12);
code_r0x00402bd1:
              uVar11 = *unaff_EBX;
              uVar1 = *unaff_EBX;
              *unaff_EBX = (uint)((byte *)(uVar1 + (int)puVar19) + bVar44);
              bVar6 = POPCOUNT(*unaff_EBX & 0xff);
              uVar42 = in_SS;
              if ((SCARRY4(uVar11,(int)puVar19) != SCARRY4((int)(uVar1 + (int)puVar19),(uint)bVar44)
                  ) == (int)*unaff_EBX < 0) goto code_r0x00402b7a;
              cVar35 = (char)pcVar37;
              *pcVar37 = *pcVar37 + cVar35;
              pcVar37 = (char *)CONCAT31((int3)((uint)pcVar37 >> 8),cVar35 + '\x02');
              if (SCARRY1(cVar35,'\x02') == (char)(cVar35 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar37 = *pcVar37 + (char)pcVar37;
                pcVar37 = (char *)(CONCAT31((int3)((uint)pcVar37 >> 8),(char)pcVar37 + '\x12') |
                                  *param_2);
                *(byte *)puVar41 = (byte)*puVar41 - (char)puVar19;
                *pcVar37 = *pcVar37 + (char)pcVar37;
                puVar13 = (uint *)((int)param_2 - *unaff_ESI);
                bVar6 = (byte)unaff_EBX | (byte)((uint)puVar19 >> 8);
                cVar35 = *pcVar37;
                uVar24 = (undefined3)((uint)pcVar37 >> 8);
                pcVar37 = (char *)CONCAT31(uVar24,cVar35);
                *pcVar37 = *pcVar37 + cVar35;
                pcVar10 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                       bVar6) + -0x5b),bVar6));
                *pcVar37 = *pcVar37 + cVar35;
                bVar44 = false;
                pcVar37 = (char *)(CONCAT31(uVar24,cVar35 + '\x13') | *puVar13);
                do {
                  bVar26 = (byte)puVar19;
                  bVar6 = bVar26 + (byte)unaff_ESI[(int)puVar41 * 2];
                  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar6 + bVar44);
                  uVar11 = (uint)(CARRY1(bVar26,(byte)unaff_ESI[(int)puVar41 * 2]) ||
                                 CARRY1(bVar6,bVar44));
                  pcVar17 = pcVar37 + 0x1b000019 + uVar11;
                  piVar20 = (int *)((int)puVar41 * 2 + 0x40000a5);
                  *piVar20 = (int)((int)puVar19 +
                                  (uint)((char *)0xe4ffffe6 < pcVar37 ||
                                        CARRY4((uint)(pcVar37 + 0x1b000019),uVar11)) + *piVar20);
                  puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),(char)puVar13 + cRam00009d7d
                                            );
                  uVar24 = (undefined3)((uint)pcVar17 >> 8);
                  bVar6 = (char)pcVar17 + 0x12;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  uVar11 = CONCAT31(uVar24,bVar6 + in_AF * -6) & 0xffffff0f;
                  pcVar37 = (char *)CONCAT22((short)(uVar11 >> 0x10),
                                             CONCAT11((char)((uint)pcVar17 >> 8) - in_AF,
                                                      (char)uVar11));
                  pcVar17 = (char *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar24,bVar6));
                  while( true ) {
                    *pcVar37 = *pcVar37 + (char)pcVar37;
                    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),
                                               (byte)puVar13 | (byte)*puVar13);
                    puVar41 = (uint *)((uint)puVar41 | (uint)unaff_ESI);
                    uVar11 = (uint)pcVar10 | (uint)unaff_ESI;
                    unaff_EBP = pcVar17 + 1;
                    uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,in_ES);
                    cVar35 = (char)(pcVar37 + 0x1b000019);
                    uVar24 = (undefined3)((uint)(pcVar37 + 0x1b000019) >> 8);
                    cVar7 = cVar35 + -0x13;
                    pcVar37 = (char *)CONCAT31(uVar24,cVar7);
                    uVar31 = (undefined2)(uVar11 >> 0x10);
                    cVar8 = (char)(uVar11 >> 8) + *(char *)(uVar11 - 0x5e);
                    unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar8,(byte)uVar11));
                    *pcVar37 = *pcVar37 + cVar7;
                    pcVar37 = (char *)(CONCAT31(uVar24,cVar35 + '\x19') | *puVar13);
                    bVar6 = (byte)pcVar37;
                    if ((POPCOUNT((uint)pcVar37 & 0xff) & 1U) != 0) {
                      pbVar9 = (byte *)((int)puVar13 + (int)pcVar37);
                      bVar44 = CARRY1(*pbVar9,bVar6);
                      *pbVar9 = *pbVar9 + bVar6;
                      param_2 = puVar13;
                      goto code_r0x00402bd1;
                    }
                    *pcVar37 = *pcVar37 + bVar6;
                    uVar24 = (undefined3)((uint)pcVar37 >> 8);
                    pcVar10 = (char *)CONCAT31(uVar24,bVar6 + 0x6f);
                    param_2 = (uint *)((int)puVar13 + 1);
                    *pcVar10 = *pcVar10 + bVar6 + 0x6f;
                    bVar26 = (byte)uVar11 | (byte)((uint)pcVar37 >> 8);
                    pcVar37 = (char *)CONCAT31(uVar24,bVar6 + 0x5c);
                    cVar8 = cVar8 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar26) + -0x5f)
                    ;
                    unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar8,bVar26));
                    *pcVar37 = *pcVar37 + bVar6 + 0x5c;
                    pcVar37 = (char *)(CONCAT31(uVar24,bVar6 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar37 & 0xff) & 1U) != 0) {
                      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)puVar19 >> 8);
                      uStackY_24 = (uint *)((uint)uStackY_24._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar37 = *pcVar37 + (char)pcVar37;
                    uVar24 = (undefined3)((uint)pcVar37 >> 8);
                    cVar35 = (char)pcVar37 + 'o';
                    puVar13 = (uint *)((int)puVar13 + 2);
                    *(char *)CONCAT31(uVar24,cVar35) = *(char *)CONCAT31(uVar24,cVar35) + cVar35;
                    pcVar10 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                               bVar26 | (byte)((uint)pcVar37 >> 8));
                    pcVar37 = (char *)(CONCAT31(uVar24,cVar35) | 2);
                    pcVar17[-0x62] = pcVar17[-0x62] + '\x01';
                    bVar6 = (byte)pcVar37;
                    *pcVar37 = *pcVar37 + bVar6;
                    bVar44 = 0xfd < bVar6;
                    cVar35 = bVar6 + 2;
                    pcVar37 = (char *)CONCAT31(uVar24,cVar35);
                    uVar43 = in_ES;
                    if (SCARRY1(bVar6,'\x02') != cVar35 < '\0') break;
                    *pcVar37 = *pcVar37 + cVar35;
                    bVar26 = bVar6 + 10;
                    pcVar37 = (char *)CONCAT31(uVar24,bVar26);
                    *pcVar37 = *pcVar37 - cVar8;
                    cVar7 = (char)puVar19;
                    *(byte *)puVar13 = *(byte *)puVar13 + cVar7;
                    pcVar17[-0x62] = pcVar17[-0x62] + '\x01';
                    *pcVar37 = *pcVar37 + bVar26;
                    cVar35 = bVar6 + 0xc;
                    pcVar37 = (char *)CONCAT31(uVar24,cVar35);
                    if (SCARRY1(bVar26,'\x02') == cVar35 < '\0') {
                      *pcVar37 = *pcVar37 + cVar35;
                      *(byte *)puVar19 = (byte)*puVar19 - cVar8;
                      *(byte *)puVar13 = *(byte *)puVar13 + cVar7;
                      cVar35 = (bVar6 + 0x13) - (byte)puVar19[0x13];
                      pcVar37 = (char *)CONCAT31(uVar24,cVar35);
                      *pcVar37 = *pcVar37 + cVar35;
                      pcVar18 = (char *)CONCAT31(uVar24,cVar35 + *pcVar37);
                      *pcVar18 = *pcVar18 + cVar35 + *pcVar37;
                      pcVar18 = pcVar18 + *puVar19;
                      *pcVar18 = *pcVar18 + (char)pcVar18;
                      LOCK();
                      pcVar37 = *(char **)pcVar18;
                      *(char **)pcVar18 = pcVar18;
                      UNLOCK();
                      *pcVar37 = *pcVar37 + (char)pcVar37;
                      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar37 >> 8),(byte)*puVar19);
                      *pbVar9 = *pbVar9 + (byte)*puVar19;
                      goto code_r0x00402c8d;
                    }
                    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),
                                               cVar7 + *pcVar10 + (0xfd < bVar26));
                    *(byte *)puVar41 = (byte)*puVar41 - cVar8;
                    pcVar17 = unaff_EBP;
                  }
                } while( true );
              }
              unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(byte *)((int)unaff_EBX + -99),(char)unaff_EBX)
                                          );
              puVar13 = unaff_ESI;
            }
            *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
            param_2 = (uint *)((int)param_2 - *puVar13);
            unaff_ESI = puVar13;
            uVar42 = in_ES;
            in_ES = uVar4;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
          pcVar37 = pcVar37 + -0x7d160243;
        }
        pcVar37 = (char *)CONCAT31(uVar24,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)puVar19;
    uVar11 = *puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar13;
    *puVar41 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar11,(byte)puVar13) + *puVar41);
    puVar39 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar30 = (char)puVar19;
      cVar27 = (char)((uint)puVar19 >> 8) + (char)((uint)pbVar9 >> 8);
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(cVar27,cVar30));
      cVar35 = (char)pbVar9;
      *pbVar9 = *pbVar9 + cVar35;
      pcVar37 = (char *)((int)pbVar9 * 2 + 0x1a10000);
      cVar8 = (char)((uint)pcVar10 >> 8);
      *pcVar37 = *pcVar37 + cVar8;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
      pbVar9[-0x47ffffff] = pbVar9[-0x47ffffff] + cVar8;
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      bVar26 = (byte)puVar13;
      *(byte *)puVar41 = (byte)*puVar41 + bVar26;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + bVar26;
      *pbVar9 = *pbVar9 + cVar35;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar31 = (undefined2)((uint)pcVar10 >> 0x10);
      cVar8 = cVar8 + (byte)unaff_ESI[(int)pcVar10];
      pcVar37 = (char *)CONCAT22(uVar31,CONCAT11(cVar8,(char)pcVar10));
      pcVar37[(int)pbVar9] = pcVar37[(int)pbVar9] + cVar35;
      *(byte *)puVar13 = *(byte *)puVar13 - cVar8;
      *(byte *)puVar13 = *(byte *)puVar13 + cVar30;
      uVar24 = (undefined3)((uint)pbVar9 >> 8);
      bVar6 = cVar35 - *pbVar9;
      *pcVar37 = *pcVar37 + bVar26;
      *(byte *)puVar13 = *(byte *)puVar13 ^ bVar6;
      *(byte *)puVar13 = *(byte *)puVar13 + bVar6;
      *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
      uVar11 = *puVar19;
      *(byte *)puVar19 = (byte)*puVar19 + bVar26;
      cVar7 = bVar6 + *(char *)CONCAT31(uVar24,bVar6) + CARRY1((byte)uVar11,bVar26);
      pcVar10 = (char *)CONCAT22(uVar31,CONCAT11(cVar8 + pcVar17[-0x60],(char)pcVar10));
      *(char *)CONCAT31(uVar24,cVar7) = *(char *)CONCAT31(uVar24,cVar7) + cVar7;
      cVar8 = cVar7 + '\x12';
      pbVar9 = (byte *)CONCAT31(uVar24,cVar8);
      cVar35 = *pcVar10;
      *pcVar10 = *pcVar10 + cVar8;
      if (SCARRY1(cVar35,cVar8) != *pcVar10 < '\0') break;
code_r0x00402c8d:
      cVar35 = (char)pbVar9;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
      *(byte *)puVar13 = *(byte *)puVar13 + cVar35;
      *pbVar9 = *pbVar9 + cVar35;
    }
    *pbVar9 = *pbVar9 + cVar8;
    pbVar9 = (byte *)CONCAT31(uVar24,cVar7 + '$');
    *pbVar9 = *pbVar9 + cVar27;
    bVar6 = *(byte *)puVar13;
    *(byte *)puVar13 = *(byte *)puVar13 + cVar30;
    uVar42 = in_DS;
  } while (SCARRY1(bVar6,cVar30) == (char)*(byte *)puVar13 < '\0');
  do {
    cVar35 = (char)pbVar9;
    *pbVar9 = *pbVar9 + cVar35;
    uVar24 = (undefined3)((uint)pbVar9 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar13;
    bVar26 = cVar35 + 0x24;
    cVar8 = (char)((uint)pcVar10 >> 8);
    pcVar10[-0x62] = pcVar10[-0x62] + cVar8;
    *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
    bVar6 = cVar35 + 0x2fU + (byte)*puVar19;
    cVar7 = bVar6 + (0xf4 < bVar26);
    cVar35 = cVar7 + *(char *)CONCAT31(uVar24,cVar7) +
             (CARRY1(cVar35 + 0x2fU,(byte)*puVar19) || CARRY1(bVar6,0xf4 < bVar26));
    pcVar37 = (char *)CONCAT31(uVar24,cVar35);
    *pcVar37 = *pcVar37 - (char)puVar13;
    *pcVar37 = *pcVar37 + cVar35;
    pcVar17 = (char *)((int)puVar13 - *puVar13);
    *(byte *)(unaff_ESI + (int)pcVar10) = (byte)unaff_ESI[(int)pcVar10] + cVar8;
    pcVar37[(int)unaff_EBP] = pcVar37[(int)unaff_EBP] + cVar35;
    *pcVar17 = *pcVar17 + (char)puVar19;
    pcVar37 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                               CONCAT11((char)((uint)pbVar9 >> 8) - *pcVar17,cVar35));
    uVar11 = *puVar41;
    *pcVar37 = *pcVar37 - (char)((uint)pcVar17 >> 8);
    *pcVar37 = *pcVar37 + cVar35;
    uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,uVar43);
    pbVar14 = (byte *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                               CONCAT11(cVar8 - (byte)*unaff_ESI,(char)pcVar10));
    unaff_EBP = unaff_EBP + *(int *)(pbVar14 + (int)puVar19);
    puVar39 = (uint *)CONCAT31((int3)((uint)pcVar17 >> 8),(char)pcVar17 + (byte)uVar11);
    while( true ) {
      puVar13 = puVar39;
      uVar31 = (undefined2)((uint)pbVar14 >> 0x10);
      bVar38 = (char)((uint)pbVar14 >> 8) + pbVar14[0x18];
      *pcVar37 = *pcVar37 + (char)pcVar37;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar37 >> 8),(char)pcVar37 + 'o');
      cVar35 = (char)puVar19;
      *(byte *)puVar13 = (byte)*puVar13 + cVar35;
      uVar11 = *unaff_ESI;
      bVar34 = (byte)((uint)puVar19 >> 8);
      bVar6 = *pbVar9;
      pbVar9 = pbVar9 + (uint)CARRY1(bVar34,*pbVar9) + *(int *)pbVar9;
      *(byte *)puVar13 = (byte)*puVar13 + cVar35;
      cVar7 = ((char)pbVar14 - (byte)uVar11) - (byte)*unaff_ESI;
      bVar26 = *(byte *)((int)puVar41 + 0x1a);
      *pbVar9 = *pbVar9 + (char)pbVar9;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11(bVar34 + bVar6 + bVar26 | (byte)*puVar13,cVar35));
      pbVar9 = pbVar9 + *puVar13;
      if ((POPCOUNT((uint)pbVar9 & 0xff) & 1U) != 0) break;
      *pbVar9 = *pbVar9 + (char)pbVar9;
      bVar6 = (char)pbVar9 + 0x6f;
      pcVar37 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
      pcVar10 = (char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar38,(char)pbVar14)) >> 8),cVar7
                                 ) + -1);
      *pcVar37 = *pcVar37 + bVar6;
      *pcVar37 = *pcVar37 + bVar6;
      *pcVar10 = *pcVar10 + (byte)puVar13;
      *(byte *)((int)pcVar37 * 2) = *(byte *)((int)pcVar37 * 2) ^ bVar6;
      uVar3 = *(undefined6 *)pcVar37;
      uVar43 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar37 = (char *)uVar3;
      *pcVar37 = *pcVar37 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar37 = (char *)((uint)pcVar37 | 0x73110008);
      bVar38 = (byte)((uint)pcVar10 >> 8);
      *(byte *)puVar41 = (byte)*puVar41 - bVar38;
      *(byte *)puVar13 = (byte)*puVar13 + cVar35;
      puVar39 = unaff_ESI + (uint)bVar45 * -2 + 1;
      out(*unaff_ESI,(short)puVar13);
      *pcVar37 = *pcVar37;
      cVar35 = (char)pcVar37;
      *pcVar37 = *pcVar37 + cVar35;
      bVar6 = unaff_EBP[-0x5a];
      uVar31 = (undefined2)((uint)pcVar10 >> 0x10);
      cVar7 = (char)pcVar10;
      *pcVar37 = *pcVar37 + cVar35;
      cVar35 = cVar35 + '\x02';
      uVar11 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar35);
      puVar19 = (uint *)(uVar11 | 0x73110000);
      unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
      out(*puVar39,(short)puVar13);
      *(byte *)puVar19 = (byte)*puVar19;
      bVar34 = (byte)puVar13 | (byte)*puVar41;
      puVar39 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar34);
      *(byte *)puVar19 = (byte)*puVar19 + cVar35;
      pcVar37 = (char *)(uVar11 | 0x7b1f1609);
      bVar45 = (uVar42 & 0x400) != 0;
      *(uint *)((int)puVar41 + -0x7d) = *(uint *)((int)puVar41 + -0x7d) | (uint)unaff_EBP;
      bVar26 = (byte)pcVar37;
      *pcVar37 = *pcVar37 + bVar26;
      bVar38 = bVar38 | bVar6 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar14 = (byte *)CONCAT22(uVar31,CONCAT11(bVar38,cVar7));
      *pcVar37 = *pcVar37 + bVar26;
      uVar24 = (undefined3)((uint)pcVar37 >> 8);
      unaff_ESI[(int)puVar41 * 2] =
           (uint)((int)puVar39 + (uint)(0xd2 < bVar26) + unaff_ESI[(int)puVar41 * 2]);
      bVar6 = bVar26 + 0x2d ^ *(byte *)CONCAT31(uVar24,bVar26 + 0x2d);
      pcVar37 = (char *)CONCAT31(uVar24,bVar6);
      uVar11 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
      uVar42 = uVar43;
      if (CARRY1((byte)uVar11,bVar6)) {
        *pcVar37 = *pcVar37 + bVar6;
        bVar6 = bVar6 | pcVar37[0x4000019];
        pcVar37 = (char *)CONCAT31(uVar24,bVar6);
        if ('\0' < (char)bVar6) {
          *pcVar37 = *pcVar37 + bVar6;
          piVar20 = (int *)CONCAT31(uVar24,bVar6 + 0x28);
          *piVar20 = (int)piVar20 + (uint)(0xd7 < bVar6) + *piVar20;
          bVar28 = (byte)((uint6)uVar3 >> 8);
          *pbVar14 = *pbVar14 + bVar28;
          uVar32 = CONCAT11((byte)((uint)puVar13 >> 8) | bVar38,bVar34);
          puVar39 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),uVar32);
          uStackY_24 = (uint *)CONCAT22(uStackY_24._2_2_,uVar43);
          bVar34 = in(uVar32);
          pbVar9 = (byte *)CONCAT31(uVar24,bVar34);
          bVar26 = *pbVar9;
          bVar44 = SCARRY1(*pbVar9,bVar34);
          *pbVar9 = *pbVar9 + bVar34;
          bVar6 = *pbVar9;
          puVar13 = unaff_ESI;
          in_SS = uVar43;
          if (!CARRY1(bVar26,bVar34)) goto code_r0x00402e19;
          *pbVar9 = *pbVar9 + bVar34;
          bVar28 = bVar28 | *pbVar9;
          puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar28,cVar35));
          pcVar37 = (char *)CONCAT31(uVar24,bVar34 + *pbVar9);
          *pbVar14 = *pbVar14 + bVar28;
        }
        uVar24 = (undefined3)((uint)pcVar37 >> 8);
        bVar26 = (byte)pcVar37 | (byte)*puVar39;
        pbVar9 = (byte *)CONCAT31(uVar24,bVar26);
        puVar13 = unaff_ESI + (uint)bVar45 * -2 + 1;
        out(*unaff_ESI,(short)puVar39);
        LOCK();
        bVar6 = *pbVar9;
        *pbVar9 = bVar26;
        UNLOCK();
        *(byte *)puVar39 = (byte)*puVar39 + (char)puVar19;
        piVar20 = (int *)(CONCAT31(uVar24,bVar6) + -0x1b7e07);
        *(byte *)puVar39 = (byte)*puVar39 + (char)puVar19;
        iVar16 = (int)puVar19 - *(int *)pbVar14;
        bVar6 = *(byte *)((int)puVar41 + -0x7a);
        uVar32 = (undefined2)((uint)iVar16 >> 0x10);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        bVar26 = (char)((uint)iVar16 >> 8) + bVar6 | *(byte *)((int)puVar41 + 0x17);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        uVar24 = (undefined3)(CONCAT22(uVar32,CONCAT11(bVar26,(byte)iVar16)) >> 8);
        bVar6 = (byte)iVar16 | *pbVar14;
        puVar19 = (uint *)CONCAT31(uVar24,bVar6);
        pbVar9 = (byte *)((int)piVar20 + *piVar20);
        puVar22 = puVar13;
        if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e0a;
        *(byte *)puVar19 = (byte)*puVar19 + bVar6;
        *(byte **)pbVar14 = (byte *)(*(int *)pbVar14 + (int)puVar39);
        piVar20 = (int *)CONCAT31(uVar24,bVar6 + 0x27);
        puVar19 = (uint *)CONCAT22(uVar32,CONCAT11(bVar26 + *(byte *)((int)puVar41 + -0x79),bVar6));
        *(byte *)piVar20 = (char)*piVar20 + bVar6 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar10 = (char *)CONCAT22(uVar31,CONCAT11(bVar38 | unaff_EBP[-0x62],cVar7));
  } while( true );
code_r0x00402dff:
  pbVar9 = (byte *)CONCAT22((short)((uint)piVar20 >> 0x10),
                            CONCAT11((byte)((uint)piVar20 >> 8) |
                                     *(byte *)((int)puVar39 + 0x2170411),(byte)piVar20));
  puVar22 = puVar13 + (uint)bVar45 * -2 + 1;
  out(*puVar13,(short)puVar39);
  *pbVar9 = (byte)piVar20;
  *(byte *)puVar39 = (byte)*puVar39 + (char)puVar19;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar9;
  *pbVar9 = *pbVar9 - cVar7;
  *pbVar9 = *pbVar9 + (char)pbVar9;
  bVar44 = false;
  bVar6 = (byte)((uint)puVar19 >> 8) | bRam052b0603;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar6,(char)puVar19));
  puVar13 = puVar22;
code_r0x00402e19:
  if (bVar6 == 0 || bVar44 != (char)bVar6 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cRam89280411;
  piVar20 = (int *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                            CONCAT11((byte)((uint)pbVar9 >> 8) | *(byte *)((int)puVar39 + 0x7190411)
                                     ,cRam89280411));
  *(char *)piVar20 = (char)*piVar20 + cRam89280411;
  cVar35 = (char)puVar19;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*puVar39,cVar35));
  puVar13 = (uint *)((int)puVar13 + *piVar20);
  pbVar9 = (byte *)((int)piVar20 + *piVar20);
  bVar26 = (byte)pbVar9;
  *pbVar9 = *pbVar9 + bVar26;
  *(byte *)puVar13 = (byte)*puVar13 + cVar35;
  bVar6 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar26;
  *(char **)pbVar9 = unaff_EBP + (uint)CARRY1(bVar6,bVar26) + *(int *)pbVar9;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),*pbVar9);
  *(byte *)puVar39 = (byte)*puVar39 + cVar35;
  puVar22 = (uint *)CONCAT31((int3)((uint)puVar39 >> 8),(byte)puVar39 | (byte)*puVar39);
  pbVar9 = (byte *)((int)puVar22 + -0x43);
  *pbVar9 = *pbVar9 + (char)((uint)puVar39 >> 8);
  puVar39 = puVar22;
  puVar22 = puVar41;
  uVar42 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar41 = puVar22;
  in_SS = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e6e;
  iVar16 = *(int *)((int)piVar20 + *piVar20);
  *(byte *)puVar39 = (byte)*puVar39 + (char)puVar19;
  piVar20 = (int *)(iVar16 + -0x8c6f);
  puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),
                             CONCAT11((byte)((uint)puVar39 >> 8) | *(byte *)((int)puVar39 + -0x3f),
                                      (char)puVar39));
  pbVar21 = (byte *)((int)piVar20 + *piVar20);
  pbVar9 = pbVar21;
  puVar41 = uStackY_24;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar21 = *pbVar21 + (char)pbVar21;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*puVar39,(char)puVar19));
  puVar22 = puVar13 + (uint)bVar45 * -2 + 1;
  out(*puVar13,(short)puVar39);
  puVar39 = (uint *)CONCAT31((int3)((uint)puVar39 >> 8),(char)puVar39 + (byte)*puVar41);
  puVar13 = puVar22 + (uint)bVar45 * -2 + 1;
  out(*puVar22,(short)puVar39);
  uVar42 = in_ES;
  in_SS = uVar43;
code_r0x00402e6e:
  in_ES = uVar42;
  uVar24 = (undefined3)((uint)puVar39 >> 8);
  cVar35 = (char)puVar39 + (byte)*puVar41;
  puVar22 = puVar13 + (uint)bVar45 * -2 + 1;
  out(*puVar13,(short)CONCAT31(uVar24,cVar35));
  puVar39 = (uint *)CONCAT31(uVar24,cVar35 + (byte)*puVar41);
  puVar13 = puVar22 + (uint)bVar45 * -2 + 1;
  out(*puVar22,(short)puVar39);
  pbVar9 = (byte *)0x0;
  puVar22 = puVar41;
code_r0x00402e81:
  puVar41 = puVar22;
  bVar26 = (char)pbVar9 - *pbVar9;
  iVar16 = CONCAT31((int3)((uint)pbVar9 >> 8),bVar26);
  *pbVar14 = *pbVar14 + (char)puVar39;
  pbVar21 = (byte *)(iVar16 * 2);
  *pbVar21 = *pbVar21 ^ bVar26;
  pbVar21 = (byte *)(int)(short)iVar16;
  *pbVar21 = *pbVar21 + bVar26;
  *(byte *)puVar41 = (byte)*puVar41 + (byte)puVar19;
  bVar6 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar26;
  *(byte **)(pbVar14 + -0x73) =
       (byte *)((int)puVar13 + (uint)CARRY1(bVar6,bVar26) + *(int *)(pbVar14 + -0x73));
  *pbVar21 = *pbVar21 + bVar26;
  bVar6 = (byte)puVar19 | (byte)*puVar39;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar6);
  puVar22 = puVar13;
  if ((char)bVar6 < '\x01') goto code_r0x00402eb4;
  *pbVar21 = *pbVar21 + bVar26;
  pbVar9 = (byte *)CONCAT31((int3)(char)((uint)pbVar9 >> 8),bVar26 + 0x2d);
  puVar13[(int)puVar41 * 2] =
       (uint)((int)puVar39 + (uint)(0xd2 < bVar26) + puVar13[(int)puVar41 * 2]);
  pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar43);
  do {
    uVar11 = *puVar13;
    bVar6 = (byte)pbVar9;
    *(byte *)puVar13 = (byte)*puVar13 + bVar6;
    if (!CARRY1((byte)uVar11,bVar6)) break;
    *pbVar9 = *pbVar9 + bVar6;
    bVar6 = bVar6 | pbVar9[0x400001a];
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
    if ((char)bVar6 < '\x01') {
code_r0x00402ecc:
      *pbVar21 = *pbVar21 + (byte)pbVar21;
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      bVar6 = (byte)pbVar21 | pbVar21[0x400001b];
      pcVar37 = (char *)CONCAT31(uVar24,bVar6);
      if ((char)bVar6 < '\x01') {
        uVar11 = *puVar39;
        *(byte *)puVar39 = (byte)*puVar39 + (byte)puVar19;
        *(char *)((int)pcVar37 * 2) =
             *(char *)((int)pcVar37 * 2) - CARRY1((byte)uVar11,(byte)puVar19);
        bVar44 = 0x81 < bVar6;
        bVar6 = bVar6 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar21 = *pbVar21 + bVar6;
      puVar22 = puVar13;
code_r0x00402eb4:
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      bVar6 = (char)pbVar21 + 0x6f;
      pcVar37 = (char *)CONCAT31(uVar24,bVar6);
      *(char **)pcVar37 = pcStackY_40;
      uVar11 = *puVar39;
      *(byte *)puVar39 = (byte)*puVar39 + (char)puVar19;
      pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar43);
      in_DS = uVar43;
      if ((byte)*puVar39 != 0 && SCARRY1((byte)uVar11,(char)puVar19) == (char)(byte)*puVar39 < '\0')
      {
        *pcVar37 = *pcVar37 + bVar6;
        bVar26 = (char)pbVar21 + 0x9c;
        pbVar21 = (byte *)CONCAT31(uVar24,bVar26);
        puVar22[(int)puVar41 * 2] =
             (uint)((int)puVar39 + (uint)(0xd2 < bVar6) + puVar22[(int)puVar41 * 2]);
        pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar43);
        uVar11 = *puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + bVar26;
        puVar13 = puVar22;
        if (CARRY1((byte)uVar11,bVar26)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar13 = puVar22 + (uint)bVar45 * -2 + 1;
      out(*puVar22,(short)puVar39);
    }
    cVar35 = (char)pcVar37;
    *pcVar37 = *pcVar37 + cVar35;
    uVar24 = (undefined3)((uint)pcVar37 >> 8);
    bVar6 = cVar35 + 0x6f;
    pcVar37 = (char *)CONCAT31(uVar24,bVar6);
    *(char **)pcVar37 = pcStackY_40;
    uVar11 = *puVar39;
    *(byte *)puVar39 = (byte)*puVar39 + (byte)puVar19;
    pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar43);
    *(byte *)(puVar13 + 7) = ((byte)puVar13[7] - bVar38) - CARRY1((byte)uVar11,(byte)puVar19);
    *pcVar37 = *pcVar37 + bVar6;
    bVar26 = cVar35 + 0x9c;
    pcVar37 = (char *)CONCAT31(uVar24,bVar26);
    puVar13[(int)puVar41 * 2] =
         (uint)((int)puVar39 + (uint)(0xd2 < bVar6) + puVar13[(int)puVar41 * 2]);
    uVar11 = *puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + bVar26;
    if (!CARRY1((byte)uVar11,bVar26)) goto code_r0x00402e7e;
    *pcVar37 = *pcVar37 + bVar26;
    bVar26 = bVar26 | pcVar37[0x400001c];
    pbVar9 = (byte *)CONCAT31(uVar24,bVar26);
    in_SS = uVar43;
    if ((char)bVar26 < '\x01') goto code_r0x00402f16;
    *pbVar9 = *pbVar9 + bVar26;
    pcVar37 = (char *)CONCAT31(uVar24,bVar26 + 0x6f);
    while( true ) {
      *(char **)pcVar37 = pcStackY_40;
      uVar11 = *puVar39;
      *(byte *)puVar39 = (byte)*puVar39 + (byte)puVar19;
      *(uint *)((int)puVar13 + 0x1d) =
           (*(int *)((int)puVar13 + 0x1d) - (int)puVar41) - (uint)CARRY1((byte)uVar11,(byte)puVar19)
      ;
      bVar6 = (byte)pcVar37;
      *pcVar37 = *pcVar37 + bVar6;
      bVar26 = bVar6 + 0x2d;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar37 >> 8),bVar26);
      puVar13[(int)puVar41 * 2] =
           (uint)((int)puVar39 + (uint)(0xd2 < bVar6) + puVar13[(int)puVar41 * 2]);
      pcStackY_40 = (char *)CONCAT22((short)((uint)pcStackY_40 >> 0x10),uVar43);
      uVar11 = *puVar13;
      *(byte *)puVar13 = (byte)*puVar13 + bVar26;
      if (!CARRY1((byte)uVar11,bVar26)) break;
      *pbVar9 = *pbVar9 + bVar26;
code_r0x00402f16:
      bVar6 = (byte)pbVar9 | pbVar9[0x400001d];
      puVar22 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
      pcVar37 = unaff_EBP;
      if ((char)bVar6 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pcVar37;
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        uVar24 = (undefined3)((uint)puVar22 >> 8);
        cVar35 = (char)puVar22 + 'o';
        puVar40 = (uint *)CONCAT31(uVar24,cVar35);
        *puVar40 = (uint)pcStackY_40;
        cVar8 = (char)puVar19;
        *(byte *)puVar39 = (byte)*puVar39 + cVar8;
        pcStackY_40 = (char *)CONCAT22(pcStackY_40._2_2_,uVar43);
        bVar6 = (byte)((uint)puVar39 >> 8);
        bVar44 = bVar6 < (byte)*puVar13;
        puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),
                                   CONCAT11(bVar6 - (byte)*puVar13,(char)puVar39));
        if (bVar44) break;
        bVar44 = CARRY4((uint)puVar40,*puVar40);
        puVar22 = (uint *)((int)puVar40 + *puVar40);
        if (!SCARRY4((int)puVar40,*puVar40)) {
          bVar44 = CARRY4((uint)unaff_EBP,*puVar22);
          unaff_EBP = unaff_EBP + *puVar22;
        }
        *puVar22 = (*puVar22 - (int)puVar22) - (uint)bVar44;
        *(byte *)puVar39 = (byte)*puVar39 + cVar8;
        puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                   CONCAT11((char)((uint)puVar19 >> 8) + (byte)*puVar39,
                                            cVar8 - (byte)*puVar39));
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x00402f3b:
        cVar8 = (char)puVar39;
        *pbVar14 = *pbVar14 + cVar8;
        bVar6 = (byte)puVar22;
        *(byte *)((int)puVar22 * 2) = *(byte *)((int)puVar22 * 2) ^ bVar6;
        *(byte *)puVar22 = (byte)*puVar22 + bVar6;
        *(byte *)puVar22 = (byte)*puVar22 + cVar8;
        uVar11 = *puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + bVar6;
        *puVar39 = (uint)((int)puVar22 + (uint)CARRY1((byte)uVar11,bVar6) + *puVar39);
        pcVar37 = (char *)((uint)puVar22 | *puVar41);
        uVar24 = (undefined3)((uint)pcVar37 >> 8);
        cVar35 = (char)pcVar37 + *pcVar37;
        pcVar37 = (char *)CONCAT31(uVar24,cVar35);
        *pcVar37 = *pcVar37 + cVar35;
        cVar35 = cVar35 + *pcVar37;
        piVar20 = (int *)CONCAT31(uVar24,cVar35);
        *(char *)piVar20 = (char)*piVar20 + cVar35;
        iVar16 = LocalDescriptorTableRegister();
        *piVar20 = iVar16;
        bVar6 = *pbVar14;
        bVar29 = (byte)((uint)puVar19 >> 8);
        *pbVar14 = *pbVar14 + bVar29;
        iVar16 = *piVar20;
        uVar32 = (undefined2)((uint)puVar19 >> 0x10);
        bVar28 = (byte)puVar19;
        *(byte *)puVar13 = (byte)*puVar13 + cVar35;
        puVar19 = puVar13 + (uint)bVar45 * -2 + 1;
        out(*puVar13,(short)puVar39);
        *(byte *)puVar19 = (byte)*puVar19 + cVar35;
        bVar26 = *pbVar14;
        *(byte *)puVar39 = (byte)*puVar39 - bVar38;
        *(byte *)puVar19 = (byte)*puVar19 + cVar35;
        puVar40 = puVar19 + (uint)bVar45 * -2 + 1;
        out(*puVar19,(short)puVar39);
        *(byte *)puVar40 = (byte)*puVar40 + cVar35;
        bVar34 = *pbVar14;
        *(uint *)((int)puVar39 + -0x23) = *(uint *)((int)puVar39 + -0x23) & (uint)puVar40;
        puVar23 = (ushort *)((int)piVar20 + *piVar20);
        if (!SCARRY4((int)piVar20,*piVar20)) {
          *puVar23 = in_DS;
        }
        *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
        uVar33 = CONCAT11((char)((uint)puVar39 >> 8) + *(byte *)((int)puVar39 + -0x15),cVar8);
        puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),uVar33);
        puVar22 = (uint *)((int)puVar23 + *(int *)puVar23);
        if (!SCARRY4((int)puVar23,*(int *)puVar23)) {
          *(ushort *)puVar22 = in_DS;
        }
        cVar35 = (char)puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + cVar35;
        cVar30 = ((bVar29 - (char)iVar16) - CARRY1(bVar6,bVar29) | bVar26 | bVar34) + (byte)*puVar22
        ;
        puVar19 = (uint *)CONCAT22(uVar32,CONCAT11(cVar30,bVar28));
        uVar11 = *puVar39;
        *(byte *)puVar39 = (byte)*puVar39 + bVar28;
        if (CARRY1((byte)uVar11,bVar28)) {
          *(byte *)puVar22 = (byte)*puVar22 + cVar35;
          bVar6 = *(byte *)((int)puVar39 + 6);
          *(byte *)puVar39 = (byte)*puVar39 + bVar28;
          bVar26 = (cVar30 - (byte)*puVar40) + cRam14730307;
          *(byte *)puVar22 = (byte)*puVar22 + cVar35;
          bVar6 = bVar38 | bVar6 | *(byte *)((int)puVar39 + 0x2a);
          uVar11 = *puVar22;
          pbVar9 = (byte *)((int)puVar22 + (uint)CARRY1(bVar26,(byte)*puVar22) + *puVar22);
          *(byte *)puVar39 = (byte)*puVar39 + bVar28;
          cVar35 = cVar7 - (byte)*puVar40;
          cVar7 = bVar6 + *(char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar6,cVar7)) >> 8),
                                             cVar35) + 0x1e);
          *pbVar9 = *pbVar9 + (char)pbVar9;
          uVar24 = (undefined3)((uint)pbVar9 >> 8);
          bVar6 = (char)pbVar9 + 0x2aU & (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar37 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar35)) + 0x1f);
          *pcVar37 = *pcVar37 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar37 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar35)) + 0x20);
          *pcVar37 = *pcVar37 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar37 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar35)) + 0x21);
          *pcVar37 = *pcVar37 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar37 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar35)) + 0x22);
          *pcVar37 = *pcVar37 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar37 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          bVar26 = bVar26 + (byte)uVar11 + *pcVar37;
          uVar25 = CONCAT22(uVar32,CONCAT11(bVar26,bVar28));
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar35)) + 0x25);
          *pcVar37 = *pcVar37 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar37 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          pcVar10 = (char *)CONCAT22(uVar31,CONCAT11(cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(
                                                  cVar7,cVar35)) + 0x26),cVar35));
          *pcVar37 = *pcVar37 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          cVar35 = bVar6 + 0x2a;
          pcVar37 = (char *)CONCAT31(uVar24,cVar35);
          if ((POPCOUNT(cVar35) & 1U) == 0) {
            *pcVar37 = *pcVar37 + cVar35;
            pbVar9 = (byte *)(CONCAT31(uVar24,bVar6 + 0x4f) + -0x33282610);
            bVar6 = *pbVar9;
            bVar34 = (byte)pbVar9;
            *pbVar9 = *pbVar9 + bVar34;
            uVar24 = (undefined3)((uint)pbVar9 >> 8);
            if (!CARRY1(bVar6,bVar34)) {
              if (!SCARRY1(bVar34,'\0')) {
                *pbVar9 = *pbVar9 + bVar34;
                uVar25 = CONCAT22(uVar32,CONCAT11(bVar26 | (byte)*puVar39,bVar28));
                bVar34 = bVar34 & (byte)*puVar39;
                *(char *)CONCAT31(uVar24,bVar34) = *(char *)CONCAT31(uVar24,bVar34) + bVar34;
                pcVar37 = (char *)CONCAT31(uVar24,bVar34 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar37 = (char *)CONCAT31(uVar24,bVar34 + *pcVar10);
              if (SCARRY1(bVar34,*pcVar10) != (char)(bVar34 + *pcVar10) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar6 = bVar34 + *pcVar10;
            pbVar9 = (byte *)CONCAT31(uVar24,bVar6);
            if (SCARRY1(bVar34,*pcVar10) == (char)bVar6 < '\0') {
              pcVar37 = (char *)CONCAT22(uVar32,CONCAT11(bVar26 | (byte)*puVar39,bVar28));
              *pcVar10 = *pcVar10 + cVar8;
              *(byte *)puVar39 = (byte)*puVar39 ^ bVar6;
              *(char *)((int)pbVar9 * 2) = *(char *)((int)pbVar9 * 2) + bVar6;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar37 = *pcVar37 + (char)pcVar37;
            uVar24 = (undefined3)((uint)pcVar37 >> 8);
            bVar6 = (char)pcVar37 + 0x2aU & (byte)*puVar39;
            *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
            pcVar37 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
            *pcVar37 = *pcVar37 + bVar6 + 0x2a;
            pcVar37 = (char *)CONCAT31(uVar24,bVar6 + 0x54 & (byte)*puVar39);
code_r0x00403072:
            cVar35 = (char)pcVar37;
            *pcVar37 = *pcVar37 + cVar35;
            uVar24 = (undefined3)((uint)pcVar37 >> 8);
            pcVar37 = (char *)CONCAT31(uVar24,cVar35 + '*');
            *pcVar37 = *pcVar37 + cVar35 + '*';
            bVar6 = cVar35 + 0x54U & (byte)*puVar39;
            *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
            pcStackY_78 = (char *)CONCAT22(pcStackY_78._2_2_,in_ES);
            uVar25 = CONCAT22((short)((uint)uVar25 >> 0x10),
                              CONCAT11((char)((uint)uVar25 >> 8) +
                                       *(char *)CONCAT31(uVar24,bVar6 + 0x2a),(char)uVar25));
            *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar8;
            pcVar37 = pcStackY_78;
code_r0x0040309a:
            cVar35 = (char)pcVar37;
            *pcVar37 = *pcVar37 + cVar35;
            pcStackY_78 = (char *)CONCAT22(pcStackY_78._2_2_,uVar43);
            *pcVar37 = *pcVar37 + cVar35;
            pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar37 >> 8),cVar35 + 0x2aU & (byte)*puVar39);
          }
          cVar35 = (char)pbVar9;
          *pbVar9 = *pbVar9 + cVar35;
          uVar24 = (undefined3)((uint)pbVar9 >> 8);
          cVar7 = cVar35 + '*';
          pcVar37 = (char *)CONCAT31(uVar24,cVar7);
          *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar8;
          *pcVar37 = *pcVar37 + cVar7;
          cVar30 = (char)pcStackY_78 - (byte)*puVar40;
          pcVar10 = (char *)CONCAT22((short)((uint)pcStackY_78 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_78 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_78 >> 8),
                                                                 cVar30) + 0x34),cVar30));
          *pcVar37 = *pcVar37 + cVar7;
          bVar6 = cVar35 + 0x54U & (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pbVar9 = (byte *)CONCAT31(uVar24,bVar6 + 0x2a);
          bVar6 = (byte)((uint)uVar25 >> 8);
          pcVar37 = (char *)CONCAT22((short)((uint)uVar25 >> 0x10),
                                     CONCAT11(bVar6 + *pbVar9,(char)uVar25));
          pbVar9 = pbVar9 + (uint)CARRY1(bVar6,*pbVar9) + *(int *)pbVar9;
          *(byte *)puVar39 = (byte)*puVar39 + (char)uVar25;
          uVar24 = (undefined3)((uint)pbVar9 >> 8);
          cVar35 = (byte)pbVar9 - *pbVar9;
          piVar20 = (int *)CONCAT31(uVar24,cVar35);
          puVar40 = (uint *)((int)puVar40 + (uint)((byte)pbVar9 < *pbVar9) + *piVar20);
          cVar35 = cVar35 + (char)*piVar20;
          pbVar9 = (byte *)CONCAT31(uVar24,cVar35);
          *pbVar9 = *pbVar9 + cVar35;
code_r0x004030df:
          *pcVar37 = *pcVar37 + cVar8;
          bVar6 = *pbVar9;
          bVar26 = (byte)pbVar9;
          *pbVar9 = *pbVar9 + bVar26;
          *(byte **)(pcVar10 + -0x41) =
               (byte *)((int)puVar40 + (uint)CARRY1(bVar6,bVar26) + *(int *)(pcVar10 + -0x41));
          *pbVar9 = *pbVar9 + bVar26;
          uVar24 = (undefined3)((uint)pbVar9 >> 8);
          bVar26 = bVar26 | (byte)*puVar40;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          pcVar37 = (char *)CONCAT31(uVar24,bVar26 + 0x7b);
          *pcVar37 = *pcVar37 + bVar26 + 0x7b;
          pbVar9 = (byte *)((int)puVar40 + CONCAT31(uVar24,bVar26 - 8) + -1);
          *pbVar9 = *pbVar9 + (bVar26 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar13 = puVar40 + (uint)bVar45 * -2 + 1;
        out(*puVar40,uVar33);
        pcVar37 = unaff_EBP + 1;
        pcStackY_40 = unaff_EBP;
      }
      bVar6 = cVar35 - bVar44;
      pbVar9 = (byte *)((int)puVar13 + (int)puVar41 * 2);
      bVar44 = CARRY1(*pbVar9,bVar6);
      *pbVar9 = *pbVar9 + bVar6;
code_r0x00402ef9:
      pcVar37 = (char *)CONCAT31(uVar24,bVar6 - bVar44);
      pbVar9 = (byte *)((int)puVar41 + (int)unaff_EBP * 2);
      *pbVar9 = *pbVar9 + (bVar6 - bVar44);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar39;
  puVar22 = puVar39 + 0x2828000;
  bVar6 = (byte)puVar19;
  bVar44 = (byte)*puVar22 < bVar6;
  *(byte *)puVar22 = (byte)*puVar22 - bVar6;
  bVar6 = (byte)pbVar9 + *pbVar9;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6 + bVar44);
  puVar22 = puVar41;
  uVar42 = in_ES;
  if (CARRY1((byte)pbVar9,*pbVar9) || CARRY1(bVar6,bVar44)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar37 = *pcVar37 + bVar26;
  uVar42 = in_ES;
  in_SS = uVar43;
  goto code_r0x00402e6e;
}


