/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402859
 * Raw Name    : set_Settings
 * Demangled   : set_Settings
 * Prototype   : void set_Settings(uint * value, uint * param_2)
 * Local Vars  : pcStackY_84, puStackY_4c, uStackY_30, puStack_10, uVar1, uVar2, uVar3, uVar4, uVar5, cVar6, bVar7, bVar8, value, cVar9, cVar10, in_EAX, pbVar11, pcVar12, uVar13, uVar14, puVar15, pbVar16, piVar17, iVar18, pcVar19, piVar20, pbVar21, puVar22, puVar23, puVar24, uVar25, extraout_ECX, extraout_ECX_00, uVar26, bVar27, cVar28, bVar29, bVar30, cVar31, param_2, uVar32, uVar33, uVar34, uVar35, unaff_EBX, pcVar36, bVar37, unaff_EBP, unaff_ESI, puVar38, unaff_EDI, puVar39, in_ES, uVar40, in_CS, uVar41, in_SS, in_DS, in_GS_OFFSET, bVar42, in_AF, in_TF, in_IF, bVar43, bVar44, in_NT, puVar45, uVar46, in_stack_fffffff4
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall set_Settings(uint *value,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  undefined4 in_EAX;
  undefined3 uVar25;
  byte *pbVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  byte *pbVar16;
  int *piVar17;
  int iVar18;
  char *pcVar19;
  int *piVar20;
  byte *pbVar21;
  uint *puVar22;
  uint *puVar23;
  ushort *puVar24;
  byte bVar27;
  undefined4 extraout_ECX;
  uint *extraout_ECX_00;
  char cVar28;
  byte bVar29;
  byte bVar30;
  char cVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined4 uVar26;
  undefined2 uVar34;
  undefined1 uVar35;
  byte bVar37;
  uint *unaff_EBX;
  char *pcVar36;
  uint *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar38;
  uint *unaff_EDI;
  uint *puVar39;
  ushort in_ES;
  ushort uVar40;
  ushort in_CS;
  ushort uVar41;
  ushort in_SS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar42;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar43;
  bool bVar44;
  byte in_NT;
  uint *puVar45;
  undefined8 uVar46;
  char *pcStackY_84;
  uint *puStackY_4c;
  undefined4 uStackY_30;
  uint *puStack_10;
  uint *in_stack_fffffff4;
  
  bVar43 = false;
                    /* .NET CLR Managed Code */
  uVar25 = (undefined3)((uint)in_EAX >> 8);
  cVar6 = (char)in_EAX + (byte)*unaff_EBX;
  pcVar36 = (char *)CONCAT31(uVar25,cVar6);
  if (SCARRY1((char)in_EAX,(byte)*unaff_EBX) == cVar6 < '\0') {
    *(byte *)((int)param_2 + (int)unaff_EBP) = *(byte *)((int)param_2 + (int)unaff_EBP) + cVar6;
    goto code_r0x00402871;
  }
  *pcVar36 = *pcVar36 + cVar6;
  pbVar11 = (byte *)CONCAT31(uVar25,cVar6 + '*');
  bVar7 = (byte)((uint)value >> 8);
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar7 + *pbVar11,(char)value));
  pbVar11 = pbVar11 + (uint)CARRY1(bVar7,*pbVar11) + *(int *)pbVar11;
  do {
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    cVar6 = (char)unaff_EBX - (byte)*unaff_ESI;
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6) +
                                                   0x12),cVar6));
    *pbVar11 = *pbVar11 + (char)pbVar11;
    pcVar36 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),(char)pbVar11 + '*');
code_r0x00402871:
    uVar25 = (undefined3)((uint)pcVar36 >> 8);
    bVar7 = (byte)pcVar36 & (byte)*param_2;
    pcVar36 = (char *)CONCAT31(uVar25,bVar7);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x12));
    *pcVar36 = *pcVar36 + bVar7;
    puVar15 = (uint *)CONCAT31(uVar25,bVar7 + 0x2a);
get_Value:
    bVar7 = *(byte *)((int)unaff_EBX + 0x13);
    *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
    uVar25 = (undefined3)((uint)puVar15 >> 8);
    bVar8 = (char)puVar15 + 0x2aU & (byte)*param_2;
    pcVar36 = (char *)CONCAT31(uVar25,bVar8);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x13));
    *pcVar36 = *pcVar36 + bVar8;
    pbVar11 = (byte *)CONCAT31(uVar25,bVar8 + 0x2a);
    puVar45 = (uint *)(uint)in_DS;
    bVar8 = (byte)((uint)value >> 8);
    bVar27 = bVar8 + *pbVar11;
    pbVar11 = pbVar11 + (uint)CARRY1(bVar8,*pbVar11) + *(int *)pbVar11;
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7,
                                                          (char)unaff_EBX)) >> 8),
                                 (char)unaff_EBX - (byte)*unaff_ESI);
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar27 + *pbVar11,(char)value));
    pbVar11 = pbVar11 + (uint)CARRY1(bVar27,*pbVar11) + *(int *)pbVar11;
code_r0x00402898:
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    bVar7 = (byte)param_2;
    uVar32 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar7);
    pbVar16 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar32);
    pcVar36 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[-0x19],
                                        (char)unaff_EBX));
    *pbVar11 = *pbVar11 + (char)pbVar11;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(char)pbVar11 + '\x03');
    puVar15 = unaff_ESI;
    do {
      unaff_ESI = puVar15 + 1;
      out(*puVar15,uVar32);
      pcVar36 = pcVar36 + -1;
      bVar8 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar8;
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | *pbVar16,(char)value));
      *pbVar11 = *pbVar11 + bVar8;
      *pcVar36 = *pcVar36 + bVar7;
      *(byte *)((int)pbVar11 * 2) = *(byte *)((int)pbVar11 * 2) ^ bVar8;
      *pbVar11 = *pbVar11 + bVar8;
      *pbVar11 = *pbVar11 | bVar8;
      bVar42 = CARRY1((byte)*value,bVar7);
      *(byte *)value = (byte)*value + bVar7;
      cVar6 = bVar8 + 10 + bVar42;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
      puVar15 = unaff_ESI;
    } while (bVar8 < 0xf6 && !CARRY1(bVar8 + 10,bVar42));
    *pbVar11 = *pbVar11 + cVar6;
    in_stack_fffffff4 = (uint *)CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),in_ES);
    pcVar12 = (char *)((uint)pbVar11 | *unaff_EDI);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pcVar36 >> 0x10),
                                 CONCAT11((char)((uint)pcVar36 >> 8) + (byte)unaff_EBP[-0x19],
                                          (char)pcVar36));
    *pcVar12 = *pcVar12 + (char)pcVar12;
    bVar7 = (char)pcVar12 + 7;
    uVar46 = CONCAT44(pbVar16,CONCAT31((int3)((uint)pcVar12 >> 8),bVar7));
code_r0x004028c8:
    param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
    pbVar11 = (byte *)uVar46;
  } while ((POPCOUNT(bVar7) & 1U) != 0);
  *pbVar11 = *pbVar11 + (char)uVar46;
  puVar15 = (uint *)CONCAT31((int3)((ulonglong)uVar46 >> 8),(char)uVar46 + '-');
  unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
  bVar42 = CARRY4(*puVar15,(uint)puVar15);
  uVar13 = *puVar15;
  *puVar15 = (uint)(*puVar15 + (int)puVar15);
  if (SCARRY4(uVar13,(int)puVar15)) {
    bVar42 = CARRY4(*puVar15,(uint)puVar15);
    bVar44 = SCARRY4(*puVar15,(int)puVar15);
    *puVar15 = (uint)(*puVar15 + (int)puVar15);
    bVar7 = POPCOUNT(*puVar15 & 0xff);
    if (bVar44) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + bVar42);
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    bVar42 = (POPCOUNT((byte)*param_2) & 1U) == 0;
    if (bVar42) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar42) {
      unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
      goto get_Value;
    }
    *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + 'r');
    puStack_10 = unaff_EBP;
code_r0x004028e2:
    uVar13 = *puVar15;
    *puVar15 = (uint)(*puVar15 + (int)puVar15);
    if (SCARRY4(uVar13,(int)puVar15)) {
      if (*puVar15 == 0 || SCARRY4(uVar13,(int)puVar15) != (int)*puVar15 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    unaff_EBX = (uint *)((int)unaff_EBX + -1);
    cVar6 = (char)puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + cVar6;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                             CONCAT11((byte)((uint)value >> 8) | *(byte *)((int)value + 0x16d7207),
                                      (char)value));
    pbVar11 = (byte *)((int)puVar15 + 0x7d);
    bVar7 = *pbVar11;
    bVar27 = (byte)((uint)param_2 >> 8);
    bVar8 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar27;
    puVar45 = (uint *)((uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar8,bVar27) * 0x800 |
                       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                       (uint)((char)*pbVar11 < '\0') * 0x80 | (uint)(*pbVar11 == 0) * 0x40 |
                       (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar11) & 1U) == 0) * 4 |
                      (uint)CARRY1(bVar7,bVar27));
    *(byte *)puVar15 = (byte)*puVar15 + cVar6;
    pbVar11 = (byte *)(CONCAT31((int3)((uint)puVar15 >> 8),cVar6 + '+') ^ *unaff_EDI);
    if ((POPCOUNT((uint)pbVar11 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar7 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar7;
    puVar15 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7 + 0x72);
    if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
      uVar41 = in_CS;
      if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar15 + 0x6f) = *(byte *)((int)puVar15 + 0x6f) + bVar27;
    }
code_r0x00402905:
    uVar46 = CONCAT44(param_2,puVar15);
    unaff_EBX = (uint *)((int)unaff_EBX + -1);
    cVar6 = (char)puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + cVar6;
    bVar7 = (byte)((uint)value >> 8) | (byte)*value;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar7,(char)value));
    in_ES = (ushort)puStack_10;
    if ((char)bVar7 < '\x01') {
      *(byte *)puVar15 = (byte)*puVar15 + cVar6;
      unaff_EDI = (uint *)((int)unaff_EDI - unaff_EBP[-0x19]);
      goto code_r0x00402929;
    }
    *(byte *)puVar15 = (byte)*puVar15 + cVar6;
    puStack_10 = (uint *)0x40291c;
    uVar46 = func_0x7346291c(in_stack_fffffff4,puVar45);
    *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
    value = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                             (byte)extraout_ECX | *(byte *)((ulonglong)uVar46 >> 0x20));
    in_stack_fffffff4 = (uint *)CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),in_ES);
    puVar45 = unaff_EBX;
    while( true ) {
      pcVar36 = (char *)((int)uVar46 * 2);
      *pcVar36 = *pcVar36 - (char)value;
      uVar13 = *unaff_EBX;
      cVar6 = (char)((uint)value >> 8);
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
      bVar8 = (byte)((ulonglong)uVar46 >> 0x28);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *(byte *)puVar15 = (byte)*puVar15 + bVar7;
      pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '3');
      uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar35 = SUB41(unaff_EBX,0);
      bVar7 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar7);
      unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(bVar7,uVar35));
      *pcVar36 = *pcVar36 + cVar6 + '3';
      cVar9 = cVar6 + ':';
      puVar15 = (uint *)CONCAT31(uVar25,cVar9);
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        bVar7 = bVar7 | *(byte *)((int)param_2 + 7);
        unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(bVar7,uVar35));
        bVar42 = (POPCOUNT(bVar7) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar15 = (byte)*puVar15 + cVar9;
      puVar15 = (uint *)(CONCAT31(uVar25,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar11 = (byte *)((int)puVar15 + 0x72);
      bVar44 = SCARRY1(*pbVar11,bVar8);
      *pbVar11 = *pbVar11 + bVar8;
      bVar7 = POPCOUNT(*pbVar11);
code_r0x0040294c:
      if ((bVar7 & 1) == 0) {
        *(byte *)((int)puVar15 + 0x72) = *(byte *)((int)puVar15 + 0x72) + (char)((uint)param_2 >> 8)
        ;
      }
      else if (bVar44) {
        unaff_EBP = (uint *)*unaff_EBP;
        cVar6 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (uint *)0x7e700001;
      puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_SS);
code_r0x00402957:
      unaff_EDI = in_stack_fffffff4;
      *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
      cVar6 = (char)puVar15 + '(';
      puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),cVar6);
      *(byte *)puVar15 = (byte)*puVar15 + cVar6;
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | (byte)*puVar15,(char)value));
      *(byte *)puVar15 = (byte)*puVar15 + cVar6;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[0x18],
                                          (char)param_2));
      unaff_ESI = puStack_10;
      in_stack_fffffff4 = unaff_EDI;
code_r0x00402966:
      *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
      bVar7 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 7);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar7,(char)unaff_EBX))
      ;
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
      puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + '~');
code_r0x00402972:
      *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
      uVar41 = in_CS;
code_r0x00402974:
      bVar7 = 0xe9 < (byte)puVar15;
      in_CS = 0x2d0a;
      uVar46 = func_0x00006128(uVar41);
      puVar15 = (uint *)uVar46;
      piVar20 = (int *)((int)((ulonglong)uVar46 >> 0x20) + -0x3d);
      *piVar20 = (int)((int)unaff_ESI + (uint)bVar7 + *piVar20);
      bVar42 = SCARRY4(*puVar15,(int)puVar15);
      *puVar15 = *puVar15 + (int)puVar15;
      uVar13 = *puVar15;
      value = extraout_ECX_00;
code_r0x00402982:
      bVar7 = POPCOUNT(uVar13 & 0xff);
      if (bVar42) {
        *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
        value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                 CONCAT11((byte)((uint)value >> 8) |
                                          *(byte *)((ulonglong)uVar46 >> 0x20),(char)value));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar36 = (char *)((ulonglong)uVar46 >> 0x20);
      if ((bVar7 & 1) == 0) {
        *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
        *pcVar36 = *pcVar36 + (char)value;
        uVar46 = CONCAT44(CONCAT22((short)((ulonglong)uVar46 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar46 >> 0x28) - pcVar36[0x1f],
                                            (char)((ulonglong)uVar46 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar46 >> 8),(char)uVar46 + '('));
code_r0x00402991:
        param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
        pbVar11 = (byte *)uVar46;
        bVar7 = (byte)uVar46;
        bVar42 = CARRY1(bVar7,*pbVar11);
        puVar15 = (uint *)CONCAT31((int3)((ulonglong)uVar46 >> 8),bVar7 + *pbVar11);
        cVar6 = bVar7 + *pbVar11;
        if (SCARRY1(bVar7,*pbVar11)) goto code_r0x004029c4;
code_r0x00402995:
        param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11(((char)((uint)param_2 >> 8) -
                                            *(byte *)((int)param_2 + 0x6b)) - bVar42,(char)param_2))
        ;
        bVar7 = (byte)puVar15;
        bVar42 = CARRY1(bVar7,(byte)*puVar15);
        bVar44 = SCARRY1(bVar7,(byte)*puVar15);
        puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + (byte)*puVar15);
        do {
          if (!bVar44) {
            unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar42 + *puVar15);
            pbVar11 = (byte *)((int)puVar15 + *puVar15);
            bVar8 = (byte)pbVar11;
            *pbVar11 = *pbVar11 + bVar8;
            *(byte *)value = (byte)*value + (char)value;
            bVar7 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar8;
            *unaff_EDI = (uint)((int)unaff_EBX + (uint)CARRY1(bVar7,bVar8) + *unaff_EDI);
            *(uint *)((int)unaff_EBP + 0x100002b) =
                 *(uint *)((int)unaff_EBP + 0x100002b) | (uint)value;
            uVar25 = (undefined3)((uint)pbVar11 >> 8);
            bVar8 = bVar8 | (byte)*unaff_ESI;
            puVar15 = (uint *)CONCAT31(uVar25,bVar8);
            in_stack_fffffff4 = (uint *)CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),in_SS);
            uVar13 = *puVar15;
            uVar1 = *puVar15;
            *puVar15 = (uint)(*puVar15 + (int)puVar15);
            if (SCARRY4(uVar1,(int)puVar15)) {
              *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)unaff_EBX;
              *(byte *)param_2 = (byte)*param_2 + (char)value;
              *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)unaff_EBX;
            }
            else {
              in_SS = in_ES;
              if (CARRY4(uVar13,(uint)puVar15)) goto code_r0x00402972;
              bVar42 = CARRY1(bVar8,(byte)*puVar15);
              bVar44 = SCARRY1(bVar8,(byte)*puVar15);
              puVar15 = (uint *)CONCAT31(uVar25,bVar8 + (byte)*puVar15);
code_r0x004029be:
              if (!bVar44) {
                puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
                *(byte *)((int)param_2 + -0x37) =
                     (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar42;
                cVar6 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar6;
                bVar7 = (byte)puVar15;
                bVar42 = CARRY1(bVar7,(byte)*puVar15);
                bVar44 = SCARRY1(bVar7,(byte)*puVar15);
                puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + (byte)*puVar15);
                goto code_r0x004029c6;
              }
            }
            bVar7 = (byte)value;
            bVar42 = CARRY1((byte)*param_2,bVar7);
            bVar44 = SCARRY1((byte)*param_2,bVar7);
            *(byte *)param_2 = (byte)*param_2 + bVar7;
            if (bVar42) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar44) {
            in_ES = (ushort)puStack_10;
            goto code_r0x00402966;
          }
          *(uint *)((int)param_2 + -0x23) =
               (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar42;
          uVar13 = *puVar15;
          bVar7 = (byte)puVar15;
          uVar1 = *puVar15;
          uVar25 = (undefined3)((uint)puVar15 >> 8);
          bVar8 = bVar7 + (byte)*puVar15;
          puVar15 = (uint *)CONCAT31(uVar25,bVar8);
          if (SCARRY1(bVar7,(byte)uVar1)) goto code_r0x00402972;
          cVar6 = (char)param_2;
          bVar27 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                   CARRY1(bVar7,(byte)uVar13);
          param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar27,cVar6));
          puVar39 = (uint *)CONCAT31(uVar25,bVar8 + (byte)*puVar15);
          bVar7 = (byte)value;
          if (SCARRY1(bVar8,(byte)*puVar15)) {
            *(byte *)param_2 = (byte)*param_2 + bVar7;
            uVar46 = CONCAT44(param_2,(int)puVar39 + -0x1c37211);
            pcVar36 = (char *)((int)puVar39 + -0x1c3720a);
            *pcVar36 = *pcVar36 + bVar27;
            bVar7 = POPCOUNT(*pcVar36);
            goto code_r0x00402984;
          }
          unaff_ESI = (uint *)((int)unaff_ESI +
                              (-(uint)CARRY1(bVar8,(byte)*puVar15) - *(int *)((int)param_2 + 5)));
          bVar42 = SCARRY4((int)puVar39,*puVar39);
          uVar13 = (int)puVar39 + *puVar39;
          uVar46 = CONCAT44(param_2,uVar13);
          if (bVar42) goto code_r0x00402982;
          bVar8 = (byte)uVar13 + 0x8e;
          uVar14 = CONCAT31((int3)(uVar13 >> 8),bVar8 - CARRY4((uint)puVar39,*puVar39));
          *unaff_EBX = (*unaff_EBX - uVar14) -
                       (uint)((byte)uVar13 < 0x72 || bVar8 < CARRY4((uint)puVar39,*puVar39));
          pbVar11 = (byte *)(uVar14 - 0x5e);
          bVar8 = *pbVar11;
          *pbVar11 = *pbVar11 + bVar27;
          uVar13 = (uint)CARRY1(bVar8,bVar27);
          uVar1 = uVar14 - 0x32d72;
          puVar15 = (uint *)(uVar1 - uVar13);
          if (SBORROW4(uVar14,0x32d72) != SBORROW4(uVar1,uVar13)) goto code_r0x00402992;
          uVar41 = in_DS;
          if (uVar14 < 0x32d72 || uVar1 < uVar13) {
            *(byte *)unaff_EBP = (byte)*unaff_EBP - (char)((uint)puVar15 >> 8);
            *(byte *)param_2 = (byte)*param_2 + bVar7;
            puVar45 = unaff_ESI + 1;
            out(*unaff_ESI,CONCAT11(bVar27,cVar6));
            *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
            goto code_r0x00402a3e;
          }
          bVar42 = CARRY4((uint)puVar15,*puVar15);
          bVar44 = SCARRY4((int)puVar15,*puVar15);
          puVar15 = (uint *)((int)puVar15 + *puVar15);
          if (!bVar44) {
            uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_ES);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar42;
            bVar8 = (byte)puVar15;
            *(byte *)((int)param_2 + (int)unaff_EBP) =
                 *(byte *)((int)param_2 + (int)unaff_EBP) + bVar8;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
            *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar8;
            bVar29 = (byte)((uint)value >> 8);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar29;
            *(byte *)puVar15 = (byte)*puVar15 + bVar8;
            pbVar16 = (byte *)CONCAT31((int3)((uint)puVar15 >> 8),bVar8 | (byte)*puVar15);
            *(byte *)value = (byte)*value + cVar6;
            bVar37 = *pbVar16;
            uVar32 = (undefined2)((uint)value >> 0x10);
            value = (uint *)CONCAT22(uVar32,CONCAT11(bVar29 + bVar37,bVar7));
            pbVar16 = pbVar16 + (uint)CARRY1(bVar29,*pbVar16) + *(int *)pbVar16;
            *(byte *)param_2 = (byte)*param_2 + bVar7;
            unaff_EBP = (uint *)((int)unaff_EBP + iRam0355720b);
            pbVar11 = pbVar16 + 0x73;
            bVar8 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar27;
            uVar25 = (undefined3)((uint)pbVar16 >> 8);
            bVar8 = (char)pbVar16 + CARRY1(bVar8,bVar27);
            pcVar36 = (char *)CONCAT31(uVar25,bVar8);
            *(byte *)param_2 = (byte)*param_2 + bVar7;
            if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
              in_SS = in_ES;
            }
            puVar39 = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x17));
            *pcVar36 = *pcVar36 + bVar8;
            cVar6 = bVar8 + 2;
            puVar15 = (uint *)CONCAT31(uVar25,cVar6);
            if (bVar8 < 0xfe) {
              *puVar15 = (uint)(*puVar15 + (int)puVar15);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar15 = (byte)*puVar15 + cVar6;
            uVar13 = *param_2;
            puVar45 = (uint *)((int)unaff_ESI + unaff_EBX[0x19]);
            *(byte *)puVar15 = (byte)*puVar15 + cVar6;
            value = (uint *)CONCAT22(uVar32,CONCAT11(bVar29 + bVar37 | (byte)*puVar15,
                                                     bVar7 | (byte)uVar13));
            unaff_EDI = puVar39;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    *(byte *)((int)unaff_EBP + 0x13b720b) = *(byte *)((int)unaff_EBP + 0x13b720b) + bVar7;
    pbVar11 = (byte *)((int)puVar15 + 0x73);
    bVar42 = CARRY1(*pbVar11,bVar8);
    *pbVar11 = *pbVar11 + bVar8;
  } while( true );
code_r0x00402992:
  pbVar11 = (byte *)((int)puVar15 + 0x2a);
  bVar42 = CARRY1(*pbVar11,bVar27);
  *pbVar11 = *pbVar11 + bVar27;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar15) = *(byte *)(in_GS_OFFSET + (int)puVar15) + (char)puVar15;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                    (char)value));
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
code_r0x00402a3e:
  uVar25 = (undefined3)((uint)puVar15 >> 8);
  bVar7 = (byte)puVar15 | (byte)*puVar45;
  pcVar36 = (char *)CONCAT31(uVar25,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar36 = *pcVar36 + bVar7;
    cVar6 = bVar7 + 2;
    piVar20 = (int *)CONCAT31(uVar25,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar20 = (char)*piVar20 + cVar6;
      bVar7 = bVar7 + 0x71;
      pcVar12 = (char *)CONCAT31(uVar25,bVar7);
      pcVar36 = (char *)segment(uVar41,(short)unaff_EBX + (short)puVar45);
      *pcVar36 = *pcVar36 + bVar7;
      uVar13 = unaff_EDI[0x1a];
      *pcVar12 = *pcVar12 + bVar7;
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | (byte)uVar13 |
                                        *(byte *)((int)unaff_EDI + 0x69),(char)value));
      *pcVar12 = *pcVar12 + bVar7;
      bVar7 = bVar7 | (byte)*param_2;
      pcVar36 = (char *)CONCAT31(uVar25,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1;
    out(*puVar45,(short)param_2);
  }
  else {
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                          (char)unaff_EBX));
code_r0x00402a5d:
    *pcVar36 = *pcVar36 + (char)pcVar36;
    piVar20 = (int *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
    unaff_ESI = puVar45;
  }
code_r0x00402a61:
  pcVar36 = (char *)segment(uVar41,(short)unaff_EBX + (short)unaff_ESI);
  *pcVar36 = *pcVar36 + (char)piVar20;
  cVar6 = (char)value;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | (byte)unaff_EDI[0x1a],cVar6));
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  uVar32 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar32);
  piVar17 = (int *)((int)piVar20 + *piVar20);
  puVar45 = unaff_ESI;
  puVar39 = unaff_EDI;
  uVar40 = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar6;
  puVar45 = unaff_ESI + (uint)bVar43 * -2 + 1;
  out(*unaff_ESI,uVar32);
code_r0x00402a75:
  bVar7 = (byte)((uint)value >> 8) | (byte)*param_2;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar7,(char)value));
  piVar20 = (int *)(uint)(byte)*unaff_EBX;
  *(byte *)puVar45 = (byte)*puVar45 - bVar7;
  puVar39 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  out(*puVar45,(short)param_2);
  bVar7 = in((short)param_2);
  *(byte *)puVar39 = bVar7;
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | (byte)*param_2,(char)value));
  iVar18 = *piVar20;
  cVar6 = in(1);
  puVar15 = (uint *)CONCAT31((int3)((uint)((int)piVar20 + *piVar20) >> 8),cVar6);
  *(char *)puVar15 = (char)*puVar15 + cVar6;
  puVar15 = (uint *)((uint)puVar15 | *puVar15);
  *(byte *)value = (byte)*value + (char)param_2;
  puVar45 = (uint *)((int)puVar45 + (((uint)bVar43 * -8 + 4) - iVar18));
  puVar39 = (uint *)((int)puVar39 + (uint)bVar43 * -2 + 1);
  in_SS = in_ES;
  while( true ) {
    bVar7 = (byte)puVar15 | (byte)*param_2;
    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7);
    unaff_EDI = puVar39;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar15 = (byte)*puVar15 + bVar7;
code_r0x00402a9b:
    uVar25 = (undefined3)((uint)puVar15 >> 8);
    cVar6 = (char)puVar15 + '\r';
    piVar17 = (int *)CONCAT31(uVar25,cVar6);
    *(uint *)((int)unaff_EBP + 2) = *(uint *)((int)unaff_EBP + 2) | (uint)piVar17;
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    *(byte *)(puVar45 + -0xc800000) = (byte)puVar45[-0xc800000] + (char)param_2;
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    cVar9 = (char)value;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar9;
      unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1;
      out(*puVar45,(short)param_2);
      piVar20 = (int *)((longlong)*piVar17 * 0x7b020a00);
      *(char *)piVar20 =
           (char)*piVar20 - ((longlong)(int)piVar20 != (longlong)*piVar17 * 0x7b020a00);
      pbVar11 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar11 = *pbVar11;
      goto code_r0x00402a61;
    }
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    puVar15 = (uint *)CONCAT31(uVar25,(char)puVar15 + ':');
    unaff_ESI = (uint *)((uint)puVar45 | *(uint *)((int)param_2 + -0x79));
    iVar18 = (int)puVar15 + *puVar15;
    if (SCARRY4((int)puVar15,*puVar15)) {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            (byte)unaff_ESI[(int)unaff_EBX],(char)unaff_EBX));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar18;
      puVar39 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar25 = (undefined3)((uint)iVar18 >> 8);
    cVar6 = (char)iVar18 + CARRY4((uint)puVar15,*puVar15);
    piVar20 = (int *)CONCAT31(uVar25,cVar6);
    *(byte *)param_2 = (byte)*param_2 + cVar9;
    bVar42 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar42) && (bVar42)) goto code_r0x00402a61;
    *(char *)piVar20 = (char)*piVar20 + cVar6;
    cVar10 = cVar6 + '(';
    pcVar36 = (char *)CONCAT31(uVar25,cVar10);
    puVar39 = unaff_EDI + (uint)bVar43 * -2 + 1;
    uVar13 = in((short)param_2);
    *unaff_EDI = uVar13;
    *pcVar36 = *pcVar36 + cVar10;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                             CONCAT11((byte)((uint)value >> 8) | bRama07b0222,cVar9));
    *pcVar36 = *pcVar36 + cVar10;
    pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar45 = (uint *)((int)(unaff_ESI + (uint)bVar43 * -2 + 1) + (uint)bVar43 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar43 * -2 + 1],(short)param_2);
    bVar7 = (byte)pcVar36;
    *pcVar36 = *pcVar36 + bVar7;
    unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar39);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar25 = (undefined3)((uint)pcVar36 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar6 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*param_2;
    piVar20 = (int *)CONCAT31(uVar25,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar20 = (char)*piVar20 + cVar6;
    piVar17 = (int *)CONCAT31(uVar25,cVar6 + '\x17');
    uVar40 = in_ES;
code_r0x00402ae3:
    out(*puVar45,(short)param_2);
    unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1 + (uint)bVar43 * -2 + 1;
    out(puVar45[(uint)bVar43 * -2 + 1],(short)param_2);
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
    in_ES = uVar40;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar15 = (byte)*puVar15 + bVar7;
      cVar6 = cVar6 + '}';
      puVar15 = (uint *)CONCAT31(uVar25,cVar6);
      *(byte *)puVar15 = ((byte)*puVar15 - cVar6) - (0x84 < bVar7);
      pbVar11 = (byte *)((int)param_2 + (int)puVar15);
      *pbVar11 = *pbVar11 + cVar6;
      bVar7 = POPCOUNT(*pbVar11);
      puVar45 = unaff_ESI;
code_r0x00402af9:
      in_ES = uVar40;
      unaff_EDI = puVar39;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
        bVar7 = (byte)value;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_SS);
        unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1;
        out(*puVar45,(short)param_2);
        uVar13 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        iVar18 = CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + 'o') +
                 *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar13,bVar7);
        pcVar36 = (char *)CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '(');
        while( true ) {
          uVar13 = *param_2;
          bVar8 = (byte)value;
          *(byte *)param_2 = (byte)*param_2 + bVar8;
          pcVar36 = pcVar36 + (uint)CARRY1((byte)uVar13,bVar8) + iRam73280512;
          bVar7 = (byte)pcVar36;
          *pcVar36 = *pcVar36 + bVar7;
          value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11((byte)((uint)value >> 8) | bRam7d160243,bVar8));
          bVar43 = ((uint)uStackY_30 & 0x400) != 0;
          in_AF = ((uint)uStackY_30 & 0x10) != 0;
          *pcVar36 = *pcVar36 + bVar7;
          uVar25 = (undefined3)((uint)pcVar36 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar25,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar6 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar25,cVar6) = *(char *)CONCAT31(uVar25,cVar6) + cVar6;
          iVar18 = CONCAT31(uVar25,bVar7 + 0x16);
code_r0x00402b33:
          piVar17 = (int *)(iVar18 + 0xe2802);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)value >> 8);
          uVar40 = in_ES;
          in_ES = in_SS;
          while( true ) {
            bVar8 = (byte)unaff_EBX | (byte)((uint)value >> 8);
            unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar8);
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
            puVar45 = unaff_ESI;
            if ((SCARRY4(uVar13,(int)puVar15) != SCARRY4((int)(uVar1 + (int)puVar15),uVar14)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar15;
            *(byte *)puVar15 = (byte)*puVar15 + bVar7;
            iVar18 = CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)param_2 | (byte)*param_2;
            uVar13 = *unaff_EBX;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar8;
            pcVar36 = (char *)(CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '\x12') + 0x228b26
                               + *puVar39 + (uint)CARRY1((byte)uVar13,bVar8));
            cVar6 = bVar7 + (byte)*value;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar6);
            if (SCARRY1(bVar7,(byte)*value) == cVar6 < '\0') break;
            *pcVar36 = *pcVar36 + (char)pcVar36;
            cVar6 = (char)pcVar36 + '\x02';
            pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6);
            bVar7 = POPCOUNT(cVar6);
            uVar40 = in_ES;
code_r0x00402b7a:
            puVar15 = unaff_ESI;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar6;
              uVar25 = (undefined3)((uint)pcVar36 >> 8);
              pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '\x13');
              *(byte *)value = (byte)*value | (byte)param_2;
              *(byte *)puVar39 = (byte)*puVar39 | (byte)param_2;
              *param_2 = (uint)(pcVar36 + *param_2);
              uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
              uVar35 = SUB41(unaff_EBX,0);
              cVar9 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
              unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(cVar9,uVar35));
              *pcVar36 = *pcVar36 + cVar6 + '\x13';
              piVar17 = (int *)CONCAT31(uVar25,cVar6 + -0x7a);
              uVar13 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)value;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar13,(char)value) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar17 = (char)*piVar17 + cVar6 + -0x7a;
              cVar10 = cVar6 + -0x78;
              piVar17 = (int *)CONCAT31(uVar25,cVar10);
              uVar4 = uVar40;
              if ((POPCOUNT(cVar10) & 1U) != 0) break;
              *(char *)piVar17 = (char)*piVar17 + cVar10;
              pcVar36 = (char *)CONCAT31(uVar25,cVar6 + -0x65);
              *value = *value | (uint)param_2;
              *puVar39 = *puVar39 | (uint)param_2;
              pbVar11 = (byte *)((int)value + -1);
              cVar9 = cVar9 + *(byte *)((int)unaff_EBX + -0x5e);
              unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(cVar9,uVar35));
              *pcVar36 = *pcVar36 + cVar6 + -0x65;
              bVar7 = cVar6 + 10;
              puVar45 = (uint *)CONCAT31(uVar25,bVar7);
              bVar8 = (byte)pbVar11;
              *(byte *)param_2 = (byte)*param_2 + bVar8;
              unaff_ESI = puVar15 + (uint)bVar43 * -2 + 1;
              out(*puVar15,(short)param_2);
              uVar13 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar8;
              uVar2 = (uint)CARRY1((byte)uVar13,bVar8);
              uVar13 = *param_2;
              uVar1 = *param_2;
              pbVar16 = pbVar11 + uVar1 + uVar2;
              uVar5 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar9;
              uVar14 = *param_2;
              unaff_EBP = (uint *)((uint)unaff_EBP | *puVar45);
              *(byte *)puVar45 = (char)*puVar45 + bVar7;
              value = (uint *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar16 >> 8) | bRam7d170243,
                                                (char)pbVar16 + (byte)uVar5 +
                                                (CARRY4((uint)pbVar11,uVar13) ||
                                                CARRY4((uint)(pbVar11 + uVar1),uVar2))));
              bVar43 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar45 = (char)*puVar45 + bVar7;
              bVar42 = 0xfd < bVar7;
              pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar14);
code_r0x00402bd1:
              uVar13 = *unaff_EBX;
              uVar1 = *unaff_EBX;
              *unaff_EBX = (uint)((byte *)(uVar1 + (int)value) + bVar42);
              bVar7 = POPCOUNT(*unaff_EBX & 0xff);
              uVar40 = in_SS;
              if ((SCARRY4(uVar13,(int)value) != SCARRY4((int)(uVar1 + (int)value),(uint)bVar42)) ==
                  (int)*unaff_EBX < 0) goto code_r0x00402b7a;
              cVar6 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar6;
              pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar36 = *pcVar36 + (char)pcVar36;
                pcVar36 = (char *)(CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + '\x12') |
                                  *param_2);
                *(byte *)puVar39 = (byte)*puVar39 - (char)value;
                *pcVar36 = *pcVar36 + (char)pcVar36;
                puVar15 = (uint *)((int)param_2 - *unaff_ESI);
                bVar7 = (byte)unaff_EBX | (byte)((uint)value >> 8);
                cVar6 = *pcVar36;
                uVar25 = (undefined3)((uint)pcVar36 >> 8);
                pcVar36 = (char *)CONCAT31(uVar25,cVar6);
                *pcVar36 = *pcVar36 + cVar6;
                pcVar12 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar36 = *pcVar36 + cVar6;
                bVar42 = false;
                pcVar36 = (char *)(CONCAT31(uVar25,cVar6 + '\x13') | *puVar15);
                do {
                  bVar8 = (byte)value;
                  bVar7 = bVar8 + (byte)unaff_ESI[(int)puVar39 * 2];
                  value = (uint *)CONCAT31((int3)((uint)value >> 8),bVar7 + bVar42);
                  uVar13 = (uint)(CARRY1(bVar8,(byte)unaff_ESI[(int)puVar39 * 2]) ||
                                 CARRY1(bVar7,bVar42));
                  pcVar19 = pcVar36 + 0x1b000019 + uVar13;
                  piVar20 = (int *)((int)puVar39 * 2 + 0x40000a5);
                  *piVar20 = (int)((int)value +
                                  (uint)((char *)0xe4ffffe6 < pcVar36 ||
                                        CARRY4((uint)(pcVar36 + 0x1b000019),uVar13)) + *piVar20);
                  puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + cRam00009d7d
                                            );
                  uVar25 = (undefined3)((uint)pcVar19 >> 8);
                  bVar7 = (char)pcVar19 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar13 = CONCAT31(uVar25,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar36 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                             CONCAT11((char)((uint)pcVar19 >> 8) - in_AF,
                                                      (char)uVar13));
                  puVar45 = (uint *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar25,bVar7));
                  while( true ) {
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),
                                               (byte)puVar15 | (byte)*puVar15);
                    puVar39 = (uint *)((uint)puVar39 | (uint)unaff_ESI);
                    uVar13 = (uint)pcVar12 | (uint)unaff_ESI;
                    unaff_EBP = (uint *)((int)puVar45 + 1);
                    uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_ES);
                    cVar6 = (char)(pcVar36 + 0x1b000019);
                    uVar25 = (undefined3)((uint)(pcVar36 + 0x1b000019) >> 8);
                    cVar9 = cVar6 + -0x13;
                    pcVar36 = (char *)CONCAT31(uVar25,cVar9);
                    uVar32 = (undefined2)(uVar13 >> 0x10);
                    cVar10 = (char)(uVar13 >> 8) + *(char *)(uVar13 - 0x5e);
                    unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(cVar10,(byte)uVar13));
                    *pcVar36 = *pcVar36 + cVar9;
                    pcVar36 = (char *)(CONCAT31(uVar25,cVar6 + '\x19') | *puVar15);
                    bVar7 = (byte)pcVar36;
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      pbVar11 = (byte *)((int)puVar15 + (int)pcVar36);
                      bVar42 = CARRY1(*pbVar11,bVar7);
                      *pbVar11 = *pbVar11 + bVar7;
                      param_2 = puVar15;
                      goto code_r0x00402bd1;
                    }
                    *pcVar36 = *pcVar36 + bVar7;
                    uVar25 = (undefined3)((uint)pcVar36 >> 8);
                    pcVar12 = (char *)CONCAT31(uVar25,bVar7 + 0x6f);
                    param_2 = (uint *)((int)puVar15 + 1);
                    *pcVar12 = *pcVar12 + bVar7 + 0x6f;
                    bVar8 = (byte)uVar13 | (byte)((uint)pcVar36 >> 8);
                    pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x5c);
                    cVar10 = cVar10 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar8) + -0x5f
                                               );
                    unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(cVar10,bVar8));
                    *pcVar36 = *pcVar36 + bVar7 + 0x5c;
                    pcVar36 = (char *)(CONCAT31(uVar25,bVar7 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)value >> 8);
                      uStackY_30 = (uint *)((uint)uStackY_30._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    uVar25 = (undefined3)((uint)pcVar36 >> 8);
                    cVar6 = (char)pcVar36 + 'o';
                    puVar15 = (uint *)((int)puVar15 + 2);
                    *(char *)CONCAT31(uVar25,cVar6) = *(char *)CONCAT31(uVar25,cVar6) + cVar6;
                    pcVar12 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                               bVar8 | (byte)((uint)pcVar36 >> 8));
                    pcVar36 = (char *)(CONCAT31(uVar25,cVar6) | 2);
                    *(byte *)((int)puVar45 + -0x62) = *(byte *)((int)puVar45 + -0x62) + 1;
                    bVar7 = (byte)pcVar36;
                    *pcVar36 = *pcVar36 + bVar7;
                    bVar42 = 0xfd < bVar7;
                    cVar6 = bVar7 + 2;
                    pcVar36 = (char *)CONCAT31(uVar25,cVar6);
                    uVar41 = in_ES;
                    if (SCARRY1(bVar7,'\x02') != cVar6 < '\0') break;
                    *pcVar36 = *pcVar36 + cVar6;
                    bVar8 = bVar7 + 10;
                    pcVar36 = (char *)CONCAT31(uVar25,bVar8);
                    *pcVar36 = *pcVar36 - cVar10;
                    cVar9 = (char)value;
                    *(byte *)puVar15 = *(byte *)puVar15 + cVar9;
                    *(byte *)((int)puVar45 + -0x62) = *(byte *)((int)puVar45 + -0x62) + 1;
                    *pcVar36 = *pcVar36 + bVar8;
                    cVar6 = bVar7 + 0xc;
                    pcVar36 = (char *)CONCAT31(uVar25,cVar6);
                    if (SCARRY1(bVar8,'\x02') == cVar6 < '\0') {
                      *pcVar36 = *pcVar36 + cVar6;
                      *(byte *)value = (byte)*value - cVar10;
                      *(byte *)puVar15 = *(byte *)puVar15 + cVar9;
                      cVar6 = (bVar7 + 0x13) - (byte)value[0x13];
                      pcVar36 = (char *)CONCAT31(uVar25,cVar6);
                      *pcVar36 = *pcVar36 + cVar6;
                      pcVar19 = (char *)CONCAT31(uVar25,cVar6 + *pcVar36);
                      *pcVar19 = *pcVar19 + cVar6 + *pcVar36;
                      pcVar19 = pcVar19 + *value;
                      *pcVar19 = *pcVar19 + (char)pcVar19;
                      LOCK();
                      pcVar36 = *(char **)pcVar19;
                      *(char **)pcVar19 = pcVar19;
                      UNLOCK();
                      *pcVar36 = *pcVar36 + (char)pcVar36;
                      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(byte)*value);
                      *pbVar11 = *pbVar11 + (byte)*value;
                      goto code_r0x00402c8d;
                    }
                    value = (uint *)CONCAT31((int3)((uint)value >> 8),
                                             cVar9 + *pcVar12 + (0xfd < bVar8));
                    *(byte *)puVar39 = (byte)*puVar39 - cVar10;
                    puVar45 = unaff_EBP;
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
            uVar40 = in_ES;
            in_ES = uVar4;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)value;
          pcVar36 = pcVar36 + -0x7d160243;
        }
        pcVar36 = (char *)CONCAT31(uVar25,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)value;
    uVar13 = *puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + (byte)puVar15;
    *puVar39 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar13,(byte)puVar15) + *puVar39);
    puVar45 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar31 = (char)value;
      cVar28 = (char)((uint)value >> 8) + (char)((uint)pbVar11 >> 8);
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(cVar28,cVar31));
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
      bVar8 = (byte)puVar15;
      *(byte *)puVar39 = (byte)*puVar39 + bVar8;
      *pbVar11 = *pbVar11 + cVar6;
      *pbVar11 = *pbVar11 + bVar8;
      *pbVar11 = *pbVar11 + cVar6;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar32 = (undefined2)((uint)pcVar12 >> 0x10);
      cVar10 = cVar10 + (byte)unaff_ESI[(int)pcVar12];
      pcVar36 = (char *)CONCAT22(uVar32,CONCAT11(cVar10,(char)pcVar12));
      pcVar36[(int)pbVar11] = pcVar36[(int)pbVar11] + cVar6;
      *(byte *)puVar15 = *(byte *)puVar15 - cVar10;
      *(byte *)puVar15 = *(byte *)puVar15 + cVar31;
      uVar25 = (undefined3)((uint)pbVar11 >> 8);
      bVar7 = cVar6 - *pbVar11;
      *pcVar36 = *pcVar36 + bVar8;
      *(byte *)puVar15 = *(byte *)puVar15 ^ bVar7;
      *(byte *)puVar15 = *(byte *)puVar15 + bVar7;
      *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
      uVar13 = *value;
      *(byte *)value = (byte)*value + bVar8;
      cVar9 = bVar7 + *(char *)CONCAT31(uVar25,bVar7) + CARRY1((byte)uVar13,bVar8);
      pcVar12 = (char *)CONCAT22(uVar32,CONCAT11(cVar10 + (byte)puVar45[-0x18],(char)pcVar12));
      *(char *)CONCAT31(uVar25,cVar9) = *(char *)CONCAT31(uVar25,cVar9) + cVar9;
      cVar10 = cVar9 + '\x12';
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
    pbVar11 = (byte *)CONCAT31(uVar25,cVar9 + '$');
    *pbVar11 = *pbVar11 + cVar28;
    bVar7 = *(byte *)puVar15;
    *(byte *)puVar15 = *(byte *)puVar15 + cVar31;
    uVar40 = in_ES;
    uVar41 = in_DS;
  } while (SCARRY1(bVar7,cVar31) == (char)*(byte *)puVar15 < '\0');
  do {
    cVar6 = (char)pbVar11;
    *pbVar11 = *pbVar11 + cVar6;
    uVar25 = (undefined3)((uint)pbVar11 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar15;
    bVar8 = cVar6 + 0x24;
    cVar10 = (char)((uint)pcVar12 >> 8);
    pcVar12[-0x62] = pcVar12[-0x62] + cVar10;
    *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
    bVar7 = cVar6 + 0x2fU + (byte)*value;
    cVar9 = bVar7 + (0xf4 < bVar8);
    cVar6 = cVar9 + *(char *)CONCAT31(uVar25,cVar9) +
            (CARRY1(cVar6 + 0x2fU,(byte)*value) || CARRY1(bVar7,0xf4 < bVar8));
    pcVar36 = (char *)CONCAT31(uVar25,cVar6);
    *pcVar36 = *pcVar36 - (char)puVar15;
    *pcVar36 = *pcVar36 + cVar6;
    pcVar19 = (char *)((int)puVar15 - *puVar15);
    *(byte *)(unaff_ESI + (int)pcVar12) = (byte)unaff_ESI[(int)pcVar12] + cVar10;
    pcVar36[(int)unaff_EBP] = pcVar36[(int)unaff_EBP] + cVar6;
    *pcVar19 = *pcVar19 + (char)value;
    pcVar36 = (char *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                               CONCAT11((char)((uint)pbVar11 >> 8) - *pcVar19,cVar6));
    uVar13 = *puVar39;
    *pcVar36 = *pcVar36 - (char)((uint)pcVar19 >> 8);
    *pcVar36 = *pcVar36 + cVar6;
    uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uVar40);
    pbVar16 = (byte *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11(cVar10 - (byte)*unaff_ESI,(char)pcVar12));
    unaff_EBP = (uint *)((int)unaff_EBP + *(int *)(pbVar16 + (int)value));
    puVar45 = (uint *)CONCAT31((int3)((uint)pcVar19 >> 8),(char)pcVar19 + (byte)uVar13);
    while( true ) {
      puVar15 = puVar45;
      uVar32 = (undefined2)((uint)pbVar16 >> 0x10);
      bVar37 = (char)((uint)pbVar16 >> 8) + pbVar16[0x18];
      *pcVar36 = *pcVar36 + (char)pcVar36;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
      cVar6 = (char)value;
      *(byte *)puVar15 = (byte)*puVar15 + cVar6;
      uVar13 = *unaff_ESI;
      bVar27 = (byte)((uint)value >> 8);
      bVar7 = *pbVar11;
      pbVar11 = pbVar11 + (uint)CARRY1(bVar27,*pbVar11) + *(int *)pbVar11;
      *(byte *)puVar15 = (byte)*puVar15 + cVar6;
      cVar9 = ((char)pbVar16 - (byte)uVar13) - (byte)*unaff_ESI;
      bVar8 = *(byte *)((int)puVar39 + 0x1a);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11(bVar27 + bVar7 + bVar8 | (byte)*puVar15,cVar6));
      pbVar11 = pbVar11 + *puVar15;
      if ((POPCOUNT((uint)pbVar11 & 0xff) & 1U) != 0) break;
      *pbVar11 = *pbVar11 + (char)pbVar11;
      bVar7 = (char)pbVar11 + 0x6f;
      pcVar36 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
      pcVar12 = (char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar37,(char)pbVar16)) >> 8),cVar9
                                 ) + -1);
      *pcVar36 = *pcVar36 + bVar7;
      *pcVar36 = *pcVar36 + bVar7;
      *pcVar12 = *pcVar12 + (byte)puVar15;
      *(byte *)((int)pcVar36 * 2) = *(byte *)((int)pcVar36 * 2) ^ bVar7;
      uVar3 = *(undefined6 *)pcVar36;
      uVar40 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar36 = (char *)uVar3;
      *pcVar36 = *pcVar36 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar36 = (char *)((uint)pcVar36 | 0x73110008);
      bVar37 = (byte)((uint)pcVar12 >> 8);
      *(byte *)puVar39 = (byte)*puVar39 - bVar37;
      *(byte *)puVar15 = (byte)*puVar15 + cVar6;
      puVar45 = unaff_ESI + (uint)bVar43 * -2 + 1;
      out(*unaff_ESI,(short)puVar15);
      *pcVar36 = *pcVar36;
      cVar6 = (char)pcVar36;
      *pcVar36 = *pcVar36 + cVar6;
      bVar7 = *(byte *)((int)unaff_EBP + -0x5a);
      uVar32 = (undefined2)((uint)pcVar12 >> 0x10);
      cVar9 = (char)pcVar12;
      *pcVar36 = *pcVar36 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar13 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      value = (uint *)(uVar13 | 0x73110000);
      unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1;
      out(*puVar45,(short)puVar15);
      *(byte *)value = (byte)*value;
      bVar27 = (byte)puVar15 | (byte)*puVar39;
      puVar45 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar27);
      *(byte *)value = (byte)*value + cVar6;
      pcVar36 = (char *)(uVar13 | 0x7b1f1609);
      bVar43 = (uVar41 & 0x400) != 0;
      *(uint *)((int)puVar39 + -0x7d) = *(uint *)((int)puVar39 + -0x7d) | (uint)unaff_EBP;
      bVar8 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar8;
      bVar37 = bVar37 | bVar7 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar16 = (byte *)CONCAT22(uVar32,CONCAT11(bVar37,cVar9));
      *pcVar36 = *pcVar36 + bVar8;
      uVar25 = (undefined3)((uint)pcVar36 >> 8);
      unaff_ESI[(int)puVar39 * 2] =
           (uint)((int)puVar45 + (uint)(0xd2 < bVar8) + unaff_ESI[(int)puVar39 * 2]);
      bVar7 = bVar8 + 0x2d ^ *(byte *)CONCAT31(uVar25,bVar8 + 0x2d);
      pcVar36 = (char *)CONCAT31(uVar25,bVar7);
      uVar13 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
      uVar41 = uVar40;
      if (CARRY1((byte)uVar13,bVar7)) {
        *pcVar36 = *pcVar36 + bVar7;
        bVar7 = bVar7 | pcVar36[0x4000019];
        pcVar36 = (char *)CONCAT31(uVar25,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar36 = *pcVar36 + bVar7;
          piVar20 = (int *)CONCAT31(uVar25,bVar7 + 0x28);
          *piVar20 = (int)piVar20 + (uint)(0xd7 < bVar7) + *piVar20;
          bVar29 = (byte)((uint6)uVar3 >> 8);
          *pbVar16 = *pbVar16 + bVar29;
          uVar33 = CONCAT11((byte)((uint)puVar15 >> 8) | bVar37,bVar27);
          puVar45 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),uVar33);
          uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uVar40);
          bVar27 = in(uVar33);
          pbVar11 = (byte *)CONCAT31(uVar25,bVar27);
          bVar8 = *pbVar11;
          bVar42 = SCARRY1(*pbVar11,bVar27);
          *pbVar11 = *pbVar11 + bVar27;
          bVar7 = *pbVar11;
          puVar15 = unaff_ESI;
          in_SS = uVar40;
          if (!CARRY1(bVar8,bVar27)) goto code_r0x00402e19;
          *pbVar11 = *pbVar11 + bVar27;
          bVar29 = bVar29 | *pbVar11;
          value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar29,cVar6));
          pcVar36 = (char *)CONCAT31(uVar25,bVar27 + *pbVar11);
          *pbVar16 = *pbVar16 + bVar29;
        }
        uVar25 = (undefined3)((uint)pcVar36 >> 8);
        bVar8 = (byte)pcVar36 | (byte)*puVar45;
        pbVar11 = (byte *)CONCAT31(uVar25,bVar8);
        puVar15 = unaff_ESI + (uint)bVar43 * -2 + 1;
        out(*unaff_ESI,(short)puVar45);
        LOCK();
        bVar7 = *pbVar11;
        *pbVar11 = bVar8;
        UNLOCK();
        *(byte *)puVar45 = (byte)*puVar45 + (char)value;
        piVar20 = (int *)(CONCAT31(uVar25,bVar7) + -0x1b7e07);
        *(byte *)puVar45 = (byte)*puVar45 + (char)value;
        iVar18 = (int)value - *(int *)pbVar16;
        bVar7 = *(byte *)((int)puVar39 + -0x7a);
        uVar33 = (undefined2)((uint)iVar18 >> 0x10);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        bVar8 = (char)((uint)iVar18 >> 8) + bVar7 | *(byte *)((int)puVar39 + 0x17);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        uVar25 = (undefined3)(CONCAT22(uVar33,CONCAT11(bVar8,(byte)iVar18)) >> 8);
        bVar7 = (byte)iVar18 | *pbVar16;
        value = (uint *)CONCAT31(uVar25,bVar7);
        pbVar11 = (byte *)((int)piVar20 + *piVar20);
        puVar22 = puVar15;
        if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e0a;
        *(byte *)value = (byte)*value + bVar7;
        *(byte **)pbVar16 = (byte *)(*(int *)pbVar16 + (int)puVar45);
        piVar20 = (int *)CONCAT31(uVar25,bVar7 + 0x27);
        value = (uint *)CONCAT22(uVar33,CONCAT11(bVar8 + *(byte *)((int)puVar39 + -0x79),bVar7));
        *(byte *)piVar20 = (char)*piVar20 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar12 = (char *)CONCAT22(uVar32,CONCAT11(bVar37 | *(byte *)((int)unaff_EBP + -0x62),cVar9));
  } while( true );
code_r0x00402dff:
  pbVar11 = (byte *)CONCAT22((short)((uint)piVar20 >> 0x10),
                             CONCAT11((byte)((uint)piVar20 >> 8) |
                                      *(byte *)((int)puVar45 + 0x2170411),(byte)piVar20));
  puVar22 = puVar15 + (uint)bVar43 * -2 + 1;
  out(*puVar15,(short)puVar45);
  *pbVar11 = (byte)piVar20;
  *(byte *)puVar45 = (byte)*puVar45 + (char)value;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar11;
  *pbVar11 = *pbVar11 - cVar9;
  *pbVar11 = *pbVar11 + (char)pbVar11;
  bVar42 = false;
  bVar7 = (byte)((uint)value >> 8) | bRam052b0603;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar7,(char)value));
  puVar15 = puVar22;
code_r0x00402e19:
  if (bVar7 == 0 || bVar42 != (char)bVar7 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cRam89280411;
  piVar20 = (int *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                            CONCAT11((byte)((uint)pbVar11 >> 8) |
                                     *(byte *)((int)puVar45 + 0x7190411),cRam89280411));
  *(char *)piVar20 = (char)*piVar20 + cRam89280411;
  cVar6 = (char)value;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | (byte)*puVar45,cVar6));
  puVar15 = (uint *)((int)puVar15 + *piVar20);
  pbVar11 = (byte *)((int)piVar20 + *piVar20);
  bVar8 = (byte)pbVar11;
  *pbVar11 = *pbVar11 + bVar8;
  *(byte *)puVar15 = (byte)*puVar15 + cVar6;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar8;
  *(byte **)pbVar11 = (byte *)((int)unaff_EBP + (uint)CARRY1(bVar7,bVar8) + *(int *)pbVar11);
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),*pbVar11);
  *(byte *)puVar45 = (byte)*puVar45 + cVar6;
  puVar22 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(byte)puVar45 | (byte)*puVar45);
  pbVar11 = (byte *)((int)puVar22 + -0x43);
  *pbVar11 = *pbVar11 + (char)((uint)puVar45 >> 8);
  puVar45 = puVar22;
  puVar22 = puVar39;
  uVar41 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar39 = puVar22;
  in_SS = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e6e;
  iVar18 = *(int *)((int)piVar20 + *piVar20);
  *(byte *)puVar45 = (byte)*puVar45 + (char)value;
  piVar20 = (int *)(iVar18 + -0x8c6f);
  puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                             CONCAT11((byte)((uint)puVar45 >> 8) | *(byte *)((int)puVar45 + -0x3f),
                                      (char)puVar45));
  pbVar21 = (byte *)((int)piVar20 + *piVar20);
  pbVar11 = pbVar21;
  puVar39 = uStackY_30;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar21 = *pbVar21 + (char)pbVar21;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | (byte)*puVar45,(char)value));
  puVar22 = puVar15 + (uint)bVar43 * -2 + 1;
  out(*puVar15,(short)puVar45);
  puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + (byte)*puVar39);
  puVar15 = puVar22 + (uint)bVar43 * -2 + 1;
  out(*puVar22,(short)puVar45);
  uVar41 = in_ES;
  in_SS = uVar40;
code_r0x00402e6e:
  in_ES = uVar41;
  uVar25 = (undefined3)((uint)puVar45 >> 8);
  cVar6 = (char)puVar45 + (byte)*puVar39;
  puVar22 = puVar15 + (uint)bVar43 * -2 + 1;
  out(*puVar15,(short)CONCAT31(uVar25,cVar6));
  puVar45 = (uint *)CONCAT31(uVar25,cVar6 + (byte)*puVar39);
  puVar15 = puVar22 + (uint)bVar43 * -2 + 1;
  out(*puVar22,(short)puVar45);
  pbVar11 = (byte *)0x0;
  puVar22 = puVar39;
code_r0x00402e81:
  puVar39 = puVar22;
  bVar8 = (char)pbVar11 - *pbVar11;
  iVar18 = CONCAT31((int3)((uint)pbVar11 >> 8),bVar8);
  *pbVar16 = *pbVar16 + (char)puVar45;
  pbVar21 = (byte *)(iVar18 * 2);
  *pbVar21 = *pbVar21 ^ bVar8;
  pbVar21 = (byte *)(int)(short)iVar18;
  *pbVar21 = *pbVar21 + bVar8;
  *(byte *)puVar39 = (byte)*puVar39 + (byte)value;
  bVar7 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar8;
  *(byte **)(pbVar16 + -0x73) =
       (byte *)((int)puVar15 + (uint)CARRY1(bVar7,bVar8) + *(int *)(pbVar16 + -0x73));
  *pbVar21 = *pbVar21 + bVar8;
  bVar7 = (byte)value | (byte)*puVar45;
  value = (uint *)CONCAT31((int3)((uint)value >> 8),bVar7);
  puVar22 = puVar15;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar21 = *pbVar21 + bVar8;
  pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar11 >> 8),bVar8 + 0x2d);
  puVar15[(int)puVar39 * 2] =
       (uint)((int)puVar45 + (uint)(0xd2 < bVar8) + puVar15[(int)puVar39 * 2]);
  puStackY_4c = (uint *)CONCAT22(puStackY_4c._2_2_,uVar40);
  do {
    uVar13 = *puVar15;
    bVar7 = (byte)pbVar11;
    *(byte *)puVar15 = (byte)*puVar15 + bVar7;
    if (!CARRY1((byte)uVar13,bVar7)) break;
    *pbVar11 = *pbVar11 + bVar7;
    bVar7 = bVar7 | pbVar11[0x400001a];
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar21 = *pbVar21 + (byte)pbVar21;
      uVar25 = (undefined3)((uint)pbVar21 >> 8);
      bVar7 = (byte)pbVar21 | pbVar21[0x400001b];
      pcVar36 = (char *)CONCAT31(uVar25,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar13 = *puVar45;
        *(byte *)puVar45 = (byte)*puVar45 + (byte)value;
        *(char *)((int)pcVar36 * 2) = *(char *)((int)pcVar36 * 2) - CARRY1((byte)uVar13,(byte)value)
        ;
        bVar42 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar21 = *pbVar21 + bVar7;
      puVar22 = puVar15;
code_r0x00402eb4:
      uVar25 = (undefined3)((uint)pbVar21 >> 8);
      bVar7 = (char)pbVar21 + 0x6f;
      pcVar36 = (char *)CONCAT31(uVar25,bVar7);
      *(uint **)pcVar36 = puStackY_4c;
      uVar13 = *puVar45;
      *(byte *)puVar45 = (byte)*puVar45 + (char)value;
      puStackY_4c = (uint *)CONCAT22(puStackY_4c._2_2_,uVar40);
      in_DS = uVar40;
      if ((byte)*puVar45 != 0 && SCARRY1((byte)uVar13,(char)value) == (char)(byte)*puVar45 < '\0') {
        *pcVar36 = *pcVar36 + bVar7;
        bVar8 = (char)pbVar21 + 0x9c;
        pbVar21 = (byte *)CONCAT31(uVar25,bVar8);
        puVar22[(int)puVar39 * 2] =
             (uint)((int)puVar45 + (uint)(0xd2 < bVar7) + puVar22[(int)puVar39 * 2]);
        puStackY_4c = (uint *)CONCAT22(puStackY_4c._2_2_,uVar40);
        uVar13 = *puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + bVar8;
        puVar15 = puVar22;
        if (CARRY1((byte)uVar13,bVar8)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar15 = puVar22 + (uint)bVar43 * -2 + 1;
      out(*puVar22,(short)puVar45);
    }
    cVar6 = (char)pcVar36;
    *pcVar36 = *pcVar36 + cVar6;
    uVar25 = (undefined3)((uint)pcVar36 >> 8);
    bVar7 = cVar6 + 0x6f;
    pcVar36 = (char *)CONCAT31(uVar25,bVar7);
    *(uint **)pcVar36 = puStackY_4c;
    uVar13 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + (byte)value;
    puStackY_4c = (uint *)CONCAT22(puStackY_4c._2_2_,uVar40);
    *(byte *)(puVar15 + 7) = ((byte)puVar15[7] - bVar37) - CARRY1((byte)uVar13,(byte)value);
    *pcVar36 = *pcVar36 + bVar7;
    bVar8 = cVar6 + 0x9c;
    pcVar36 = (char *)CONCAT31(uVar25,bVar8);
    puVar15[(int)puVar39 * 2] =
         (uint)((int)puVar45 + (uint)(0xd2 < bVar7) + puVar15[(int)puVar39 * 2]);
    uVar13 = *puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + bVar8;
    if (!CARRY1((byte)uVar13,bVar8)) goto code_r0x00402e7e;
    *pcVar36 = *pcVar36 + bVar8;
    bVar8 = bVar8 | pcVar36[0x400001c];
    pbVar11 = (byte *)CONCAT31(uVar25,bVar8);
    in_SS = uVar40;
    if ((char)bVar8 < '\x01') goto code_r0x00402f16;
    *pbVar11 = *pbVar11 + bVar8;
    pcVar36 = (char *)CONCAT31(uVar25,bVar8 + 0x6f);
    while( true ) {
      *(uint **)pcVar36 = puStackY_4c;
      uVar13 = *puVar45;
      *(byte *)puVar45 = (byte)*puVar45 + (byte)value;
      *(uint *)((int)puVar15 + 0x1d) =
           (*(int *)((int)puVar15 + 0x1d) - (int)puVar39) - (uint)CARRY1((byte)uVar13,(byte)value);
      bVar7 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar7;
      bVar8 = bVar7 + 0x2d;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),bVar8);
      puVar15[(int)puVar39 * 2] =
           (uint)((int)puVar45 + (uint)(0xd2 < bVar7) + puVar15[(int)puVar39 * 2]);
      puStackY_4c = (uint *)CONCAT22((short)((uint)puStackY_4c >> 0x10),uVar40);
      uVar13 = *puVar15;
      *(byte *)puVar15 = (byte)*puVar15 + bVar8;
      if (!CARRY1((byte)uVar13,bVar8)) break;
      *pbVar11 = *pbVar11 + bVar8;
code_r0x00402f16:
      bVar7 = (byte)pbVar11 | pbVar11[0x400001d];
      puVar23 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
      puVar22 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = puVar22;
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
        uVar25 = (undefined3)((uint)puVar23 >> 8);
        cVar6 = (char)puVar23 + 'o';
        puVar22 = (uint *)CONCAT31(uVar25,cVar6);
        *puVar22 = (uint)puStackY_4c;
        cVar10 = (char)value;
        *(byte *)puVar45 = (byte)*puVar45 + cVar10;
        puStackY_4c = (uint *)CONCAT22(puStackY_4c._2_2_,uVar40);
        bVar7 = (byte)((uint)puVar45 >> 8);
        bVar42 = bVar7 < (byte)*puVar15;
        puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar15,(char)puVar45));
        if (bVar42) break;
        bVar42 = CARRY4((uint)puVar22,*puVar22);
        puVar23 = (uint *)((int)puVar22 + *puVar22);
        if (!SCARRY4((int)puVar22,*puVar22)) {
          bVar42 = CARRY4((uint)unaff_EBP,*puVar23);
          unaff_EBP = (uint *)((int)unaff_EBP + *puVar23);
        }
        *puVar23 = (*puVar23 - (int)puVar23) - (uint)bVar42;
        *(byte *)puVar45 = (byte)*puVar45 + cVar10;
        value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                 CONCAT11((char)((uint)value >> 8) + (byte)*puVar45,
                                          cVar10 - (byte)*puVar45));
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
code_r0x00402f3b:
        cVar10 = (char)puVar45;
        *pbVar16 = *pbVar16 + cVar10;
        bVar7 = (byte)puVar23;
        *(byte *)((int)puVar23 * 2) = *(byte *)((int)puVar23 * 2) ^ bVar7;
        *(byte *)puVar23 = (byte)*puVar23 + bVar7;
        *(byte *)puVar23 = (byte)*puVar23 + cVar10;
        uVar13 = *puVar23;
        *(byte *)puVar23 = (byte)*puVar23 + bVar7;
        *puVar45 = (uint)((int)puVar23 + (uint)CARRY1((byte)uVar13,bVar7) + *puVar45);
        pcVar36 = (char *)((uint)puVar23 | *puVar39);
        uVar25 = (undefined3)((uint)pcVar36 >> 8);
        cVar6 = (char)pcVar36 + *pcVar36;
        pcVar36 = (char *)CONCAT31(uVar25,cVar6);
        *pcVar36 = *pcVar36 + cVar6;
        cVar6 = cVar6 + *pcVar36;
        piVar20 = (int *)CONCAT31(uVar25,cVar6);
        *(char *)piVar20 = (char)*piVar20 + cVar6;
        iVar18 = LocalDescriptorTableRegister();
        *piVar20 = iVar18;
        bVar7 = *pbVar16;
        bVar30 = (byte)((uint)value >> 8);
        *pbVar16 = *pbVar16 + bVar30;
        iVar18 = *piVar20;
        uVar33 = (undefined2)((uint)value >> 0x10);
        bVar29 = (byte)value;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        puVar22 = puVar15 + (uint)bVar43 * -2 + 1;
        out(*puVar15,(short)puVar45);
        *(byte *)puVar22 = (byte)*puVar22 + cVar6;
        bVar8 = *pbVar16;
        *(byte *)puVar45 = (byte)*puVar45 - bVar37;
        *(byte *)puVar22 = (byte)*puVar22 + cVar6;
        puVar38 = puVar22 + (uint)bVar43 * -2 + 1;
        out(*puVar22,(short)puVar45);
        *(byte *)puVar38 = (byte)*puVar38 + cVar6;
        bVar27 = *pbVar16;
        *(uint *)((int)puVar45 + -0x23) = *(uint *)((int)puVar45 + -0x23) & (uint)puVar38;
        puVar24 = (ushort *)((int)piVar20 + *piVar20);
        if (!SCARRY4((int)piVar20,*piVar20)) {
          *puVar24 = in_DS;
        }
        *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
        uVar34 = CONCAT11((char)((uint)puVar45 >> 8) + *(byte *)((int)puVar45 + -0x15),cVar10);
        puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar34);
        puVar23 = (uint *)((int)puVar24 + *(int *)puVar24);
        if (!SCARRY4((int)puVar24,*(int *)puVar24)) {
          *(ushort *)puVar23 = in_DS;
        }
        cVar6 = (char)puVar23;
        *(byte *)puVar23 = (byte)*puVar23 + cVar6;
        cVar31 = ((bVar30 - (char)iVar18) - CARRY1(bVar7,bVar30) | bVar8 | bVar27) + (byte)*puVar23;
        value = (uint *)CONCAT22(uVar33,CONCAT11(cVar31,bVar29));
        uVar13 = *puVar45;
        *(byte *)puVar45 = (byte)*puVar45 + bVar29;
        if (CARRY1((byte)uVar13,bVar29)) {
          *(byte *)puVar23 = (byte)*puVar23 + cVar6;
          bVar7 = *(byte *)((int)puVar45 + 6);
          *(byte *)puVar45 = (byte)*puVar45 + bVar29;
          bVar8 = (cVar31 - (byte)*puVar38) + cRam14730307;
          *(byte *)puVar23 = (byte)*puVar23 + cVar6;
          bVar7 = bVar37 | bVar7 | *(byte *)((int)puVar45 + 0x2a);
          uVar13 = *puVar23;
          pbVar11 = (byte *)((int)puVar23 + (uint)CARRY1(bVar8,(byte)*puVar23) + *puVar23);
          *(byte *)puVar45 = (byte)*puVar45 + bVar29;
          cVar6 = cVar9 - (byte)*puVar38;
          cVar9 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar7,cVar9)) >> 8),
                                             cVar6) + 0x1e);
          *pbVar11 = *pbVar11 + (char)pbVar11;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          bVar7 = (char)pbVar11 + 0x2aU & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar9,cVar6)) + 0x1f);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar9,cVar6)) + 0x20);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar9,cVar6)) + 0x21);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar9,cVar6)) + 0x22);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          bVar8 = bVar8 + (byte)uVar13 + *pcVar36;
          uVar26 = CONCAT22(uVar33,CONCAT11(bVar8,bVar29));
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar9,cVar6)) + 0x25);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          pcVar12 = (char *)CONCAT22(uVar32,CONCAT11(cVar9 + *(char *)(CONCAT22(uVar32,CONCAT11(
                                                  cVar9,cVar6)) + 0x26),cVar6));
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          cVar6 = bVar7 + 0x2a;
          pcVar36 = (char *)CONCAT31(uVar25,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar36 = *pcVar36 + cVar6;
            pbVar11 = (byte *)(CONCAT31(uVar25,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar11;
            bVar27 = (byte)pbVar11;
            *pbVar11 = *pbVar11 + bVar27;
            uVar25 = (undefined3)((uint)pbVar11 >> 8);
            if (!CARRY1(bVar7,bVar27)) {
              if (!SCARRY1(bVar27,'\0')) {
                *pbVar11 = *pbVar11 + bVar27;
                uVar26 = CONCAT22(uVar33,CONCAT11(bVar8 | (byte)*puVar45,bVar29));
                bVar27 = bVar27 & (byte)*puVar45;
                *(char *)CONCAT31(uVar25,bVar27) = *(char *)CONCAT31(uVar25,bVar27) + bVar27;
                pcVar36 = (char *)CONCAT31(uVar25,bVar27 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar36 = (char *)CONCAT31(uVar25,bVar27 + *pcVar12);
              if (SCARRY1(bVar27,*pcVar12) != (char)(bVar27 + *pcVar12) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar27 + *pcVar12;
            pbVar11 = (byte *)CONCAT31(uVar25,bVar7);
            if (SCARRY1(bVar27,*pcVar12) == (char)bVar7 < '\0') {
              pcVar36 = (char *)CONCAT22(uVar33,CONCAT11(bVar8 | (byte)*puVar45,bVar29));
              *pcVar12 = *pcVar12 + cVar10;
              *(byte *)puVar45 = (byte)*puVar45 ^ bVar7;
              *(char *)((int)pbVar11 * 2) = *(char *)((int)pbVar11 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar36 = *pcVar36 + (char)pcVar36;
            uVar25 = (undefined3)((uint)pcVar36 >> 8);
            bVar7 = (char)pcVar36 + 0x2aU & (byte)*puVar45;
            *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
            pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
            *pcVar36 = *pcVar36 + bVar7 + 0x2a;
            pcVar36 = (char *)CONCAT31(uVar25,bVar7 + 0x54 & (byte)*puVar45);
code_r0x00403072:
            cVar6 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar6;
            uVar25 = (undefined3)((uint)pcVar36 >> 8);
            pcVar36 = (char *)CONCAT31(uVar25,cVar6 + '*');
            *pcVar36 = *pcVar36 + cVar6 + '*';
            bVar7 = cVar6 + 0x54U & (byte)*puVar45;
            *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
            pcStackY_84 = (char *)CONCAT22(pcStackY_84._2_2_,in_ES);
            uVar26 = CONCAT22((short)((uint)uVar26 >> 0x10),
                              CONCAT11((char)((uint)uVar26 >> 8) +
                                       *(char *)CONCAT31(uVar25,bVar7 + 0x2a),(char)uVar26));
            *(byte *)(puVar38 + 0x828000) = (byte)puVar38[0x828000] - cVar10;
            pcVar36 = pcStackY_84;
code_r0x0040309a:
            cVar6 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar6;
            pcStackY_84 = (char *)CONCAT22(pcStackY_84._2_2_,uVar40);
            *pcVar36 = *pcVar36 + cVar6;
            pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6 + 0x2aU & (byte)*puVar45);
          }
          cVar6 = (char)pbVar11;
          *pbVar11 = *pbVar11 + cVar6;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          cVar9 = cVar6 + '*';
          pcVar36 = (char *)CONCAT31(uVar25,cVar9);
          *(byte *)(puVar38 + 0x828000) = (byte)puVar38[0x828000] - cVar10;
          *pcVar36 = *pcVar36 + cVar9;
          cVar31 = (char)pcStackY_84 - (byte)*puVar38;
          pcVar12 = (char *)CONCAT22((short)((uint)pcStackY_84 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_84 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_84 >> 8),
                                                                 cVar31) + 0x34),cVar31));
          *pcVar36 = *pcVar36 + cVar9;
          bVar7 = cVar6 + 0x54U & (byte)*puVar45;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pbVar11 = (byte *)CONCAT31(uVar25,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar26 >> 8);
          pcVar36 = (char *)CONCAT22((short)((uint)uVar26 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar11,(char)uVar26));
          pbVar11 = pbVar11 + (uint)CARRY1(bVar7,*pbVar11) + *(int *)pbVar11;
          *(byte *)puVar45 = (byte)*puVar45 + (char)uVar26;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          cVar6 = (byte)pbVar11 - *pbVar11;
          piVar20 = (int *)CONCAT31(uVar25,cVar6);
          puVar38 = (uint *)((int)puVar38 + (uint)((byte)pbVar11 < *pbVar11) + *piVar20);
          cVar6 = cVar6 + (char)*piVar20;
          pbVar11 = (byte *)CONCAT31(uVar25,cVar6);
          *pbVar11 = *pbVar11 + cVar6;
code_r0x004030df:
          *pcVar36 = *pcVar36 + cVar10;
          bVar7 = *pbVar11;
          bVar8 = (byte)pbVar11;
          *pbVar11 = *pbVar11 + bVar8;
          *(byte **)(pcVar12 + -0x41) =
               (byte *)((int)puVar38 + (uint)CARRY1(bVar7,bVar8) + *(int *)(pcVar12 + -0x41));
          *pbVar11 = *pbVar11 + bVar8;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          bVar8 = bVar8 | (byte)*puVar38;
          *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
          pcVar36 = (char *)CONCAT31(uVar25,bVar8 + 0x7b);
          *pcVar36 = *pcVar36 + bVar8 + 0x7b;
          pbVar11 = (byte *)((int)puVar38 + CONCAT31(uVar25,bVar8 - 8) + -1);
          *pbVar11 = *pbVar11 + (bVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar15 = puVar38 + (uint)bVar43 * -2 + 1;
        out(*puVar38,uVar34);
        puVar22 = (uint *)((int)unaff_EBP + 1);
        puStackY_4c = unaff_EBP;
      }
      bVar7 = cVar6 - bVar42;
      pbVar11 = (byte *)((int)puVar15 + (int)puVar39 * 2);
      bVar42 = CARRY1(*pbVar11,bVar7);
      *pbVar11 = *pbVar11 + bVar7;
code_r0x00402ef9:
      pcVar36 = (char *)CONCAT31(uVar25,bVar7 - bVar42);
      pbVar11 = (byte *)((int)puVar39 + (int)unaff_EBP * 2);
      *pbVar11 = *pbVar11 + (bVar7 - bVar42);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)value = (byte)*value + (char)puVar45;
  puVar22 = puVar45 + 0x2828000;
  bVar7 = (byte)value;
  bVar42 = (byte)*puVar22 < bVar7;
  *(byte *)puVar22 = (byte)*puVar22 - bVar7;
  bVar7 = (byte)pbVar11 + *pbVar11;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7 + bVar42);
  puVar22 = puVar39;
  uVar41 = in_ES;
  if (CARRY1((byte)pbVar11,*pbVar11) || CARRY1(bVar7,bVar42)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar36 = *pcVar36 + bVar8;
  uVar41 = in_ES;
  in_SS = uVar40;
  goto code_r0x00402e6e;
}


