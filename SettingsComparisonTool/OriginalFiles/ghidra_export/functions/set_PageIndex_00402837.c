/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402837
 * Raw Name    : set_PageIndex
 * Demangled   : set_PageIndex
 * Prototype   : void set_PageIndex(undefined4 value, uint * param_2)
 * Local Vars  : value, pcStackY_7c, pcStackY_44, puStackY_30, puStackY_2c, uStackY_28, pcStack_8, uVar1, uVar2, uVar3, uVar4, uVar5, cVar6, bVar7, cVar8, cVar9, in_EAX, pbVar10, pcVar11, uVar12, uVar13, puVar14, pbVar15, piVar16, iVar17, pcVar18, pcVar19, puVar20, piVar21, pbVar22, puVar23, puVar24, uVar25, extraout_ECX, extraout_ECX_00, uVar26, bVar27, cVar28, bVar29, bVar30, cVar31, uVar32, uVar33, uVar34, bVar35, uVar36, unaff_EBX, pcVar37, bVar38, unaff_EBP, unaff_ESI, puVar39, puVar40, unaff_EDI, param_2, puVar41, in_ES, uVar42, uVar43, in_CS, in_SS, in_DS, in_GS_OFFSET, in_AF, in_TF, in_IF, bVar44, bVar45, bVar46, in_NT, uVar47
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall set_PageIndex(undefined4 value,uint *param_2)

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
  undefined4 in_EAX;
  undefined3 uVar25;
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
  uint *puVar20;
  int *piVar21;
  byte *pbVar22;
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
  byte bVar35;
  undefined2 uVar34;
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
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar44;
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
  
  bVar44 = false;
                    /* .NET CLR Managed Code */
  bVar7 = (byte)in_EAX;
  bVar45 = SCARRY1(bVar7,(byte)*unaff_EBX);
  uVar25 = (undefined3)((uint)in_EAX >> 8);
  cVar6 = bVar7 + (byte)*unaff_EBX;
  pbVar10 = (byte *)CONCAT31(uVar25,cVar6);
  if (bVar45 == cVar6 < '\0') {
    if (bVar45 == cVar6 < '\0') {
      *(byte **)pbVar10 = pbVar10 + (uint)CARRY1(bVar7,(byte)*unaff_EBX) + *(int *)pbVar10;
      *(char *)((int)param_2 + (int)unaff_EBP) = *(char *)((int)param_2 + (int)unaff_EBP) + cVar6;
      goto code_r0x00402861;
    }
  }
  else {
    *pbVar10 = *pbVar10 + cVar6;
    pcVar37 = (char *)CONCAT31(uVar25,cVar6 + '*');
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[4],
                                          (char)unaff_EBX));
    *pcVar37 = *pcVar37 + cVar6 + '*';
    pbVar10 = (byte *)CONCAT31(uVar25,cVar6 + 0x54U & (byte)*param_2);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x10));
  }
  cVar6 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar6;
  uVar25 = (undefined3)((uint)pbVar10 >> 8);
  pcVar37 = (char *)CONCAT31(uVar25,cVar6 + '*');
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(byte *)((int)unaff_EBX + 0x11),(char)unaff_EBX));
  *pcVar37 = *pcVar37 + cVar6 + '*';
  bVar7 = cVar6 + 0x54U & (byte)*param_2;
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x11));
  *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
  pbVar10 = (byte *)CONCAT31(uVar25,bVar7 + 0x2a);
code_r0x00402861:
  bVar7 = (byte)((uint)value >> 8);
  puVar20 = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar7 + *pbVar10,(char)value));
  pbVar10 = pbVar10 + (uint)CARRY1(bVar7,*pbVar10) + *(int *)pbVar10;
  do {
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    cVar6 = (char)unaff_EBX - (byte)*unaff_ESI;
    iVar17 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                      CONCAT11((char)((uint)unaff_EBX >> 8) +
                               *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6) + 0x12),cVar6)
                     );
    *pbVar10 = *pbVar10 + (char)pbVar10;
    uVar25 = (undefined3)((uint)pbVar10 >> 8);
    bVar7 = (char)pbVar10 + 0x2aU & (byte)*param_2;
    pcVar37 = (char *)CONCAT31(uVar25,bVar7);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x12));
    *pcVar37 = *pcVar37 + bVar7;
    puVar14 = (uint *)CONCAT31(uVar25,bVar7 + 0x2a);
    pcStack_8 = (char *)(uint)in_DS;
get_Value:
    cVar6 = *(char *)(iVar17 + 0x13);
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
    uVar25 = (undefined3)((uint)puVar14 >> 8);
    bVar7 = (char)puVar14 + 0x2aU & (byte)*param_2;
    pcVar37 = (char *)CONCAT31(uVar25,bVar7);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x13));
    *pcVar37 = *pcVar37 + bVar7;
    pbVar10 = (byte *)CONCAT31(uVar25,bVar7 + 0x2a);
    bVar7 = (byte)((uint)puVar20 >> 8);
    bVar27 = bVar7 + *pbVar10;
    pbVar10 = pbVar10 + (uint)CARRY1(bVar7,*pbVar10) + *(int *)pbVar10;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar17 >> 0x10),
                                                 CONCAT11((char)((uint)iVar17 >> 8) + cVar6,
                                                          (char)iVar17)) >> 8),
                                 (char)iVar17 - (byte)*unaff_ESI);
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11(bVar27 + *pbVar10,(char)puVar20));
    pbVar10 = pbVar10 + (uint)CARRY1(bVar27,*pbVar10) + *(int *)pbVar10;
    uVar42 = in_DS;
code_r0x00402898:
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    bVar7 = (byte)param_2;
    uVar32 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar7);
    pbVar15 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar32);
    pcVar37 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[-0x19],
                                        (char)unaff_EBX));
    *pbVar10 = *pbVar10 + (char)pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + '\x03');
    puVar14 = unaff_ESI;
    do {
      unaff_ESI = puVar14 + 1;
      out(*puVar14,uVar32);
      pcVar37 = pcVar37 + -1;
      bVar27 = (byte)pbVar10;
      *pbVar10 = *pbVar10 + bVar27;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | *pbVar15,(char)puVar20));
      *pbVar10 = *pbVar10 + bVar27;
      *pcVar37 = *pcVar37 + bVar7;
      *(byte *)((int)pbVar10 * 2) = *(byte *)((int)pbVar10 * 2) ^ bVar27;
      *pbVar10 = *pbVar10 + bVar27;
      *pbVar10 = *pbVar10 | bVar27;
      bVar45 = CARRY1((byte)*puVar20,bVar7);
      *(byte *)puVar20 = (byte)*puVar20 + bVar7;
      cVar6 = bVar27 + 10 + bVar45;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar6);
      puVar14 = unaff_ESI;
    } while (bVar27 < 0xf6 && !CARRY1(bVar27 + 10,bVar45));
    *pbVar10 = *pbVar10 + cVar6;
    pcVar11 = (char *)((uint)pbVar10 | *unaff_EDI);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pcVar37 >> 0x10),
                                 CONCAT11((char)((uint)pcVar37 >> 8) + unaff_EBP[-100],(char)pcVar37
                                         ));
    *pcVar11 = *pcVar11 + (char)pcVar11;
    bVar7 = (char)pcVar11 + 7;
    uVar47 = CONCAT44(pbVar15,CONCAT31((int3)((uint)pcVar11 >> 8),bVar7));
code_r0x004028c8:
    param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
    pbVar10 = (byte *)uVar47;
  } while ((POPCOUNT(bVar7) & 1U) != 0);
  *pbVar10 = *pbVar10 + (char)uVar47;
  puVar14 = (uint *)CONCAT31((int3)((ulonglong)uVar47 >> 8),(char)uVar47 + '-');
  unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
  bVar45 = CARRY4(*puVar14,(uint)puVar14);
  uVar12 = *puVar14;
  *puVar14 = (uint)(*puVar14 + (int)puVar14);
  if (SCARRY4(uVar12,(int)puVar14)) {
    bVar45 = CARRY4(*puVar14,(uint)puVar14);
    bVar46 = SCARRY4(*puVar14,(int)puVar14);
    *puVar14 = (uint)(*puVar14 + (int)puVar14);
    bVar7 = POPCOUNT(*puVar14 & 0xff);
    if (bVar46) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + bVar45);
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    bVar45 = (POPCOUNT((byte)*param_2) & 1U) == 0;
    if (bVar45) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar45) {
      iVar17 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
      goto get_Value;
    }
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'r');
    pcStack_8 = unaff_EBP;
code_r0x004028e2:
    uVar12 = *puVar14;
    *puVar14 = (uint)(*puVar14 + (int)puVar14);
    if (SCARRY4(uVar12,(int)puVar14)) {
      if (*puVar14 == 0 || SCARRY4(uVar12,(int)puVar14) != (int)*puVar14 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    unaff_EBX = (uint *)((int)unaff_EBX + -1);
    cVar6 = (char)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + cVar6;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11((byte)((uint)puVar20 >> 8) |
                                        *(byte *)((int)puVar20 + 0x16d7207),(char)puVar20));
    pbVar10 = (byte *)((int)puVar14 + 0x7d);
    bVar7 = *pbVar10;
    bVar35 = (byte)((uint)param_2 >> 8);
    bVar27 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar35;
    uVar42 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY1(bVar27,bVar35) * 0x800 |
             (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
             (ushort)((char)*pbVar10 < '\0') * 0x80 | (ushort)(*pbVar10 == 0) * 0x40 |
             (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(*pbVar10) & 1U) == 0) * 4 |
             (ushort)CARRY1(bVar7,bVar35);
    *(byte *)puVar14 = (byte)*puVar14 + cVar6;
    pbVar10 = (byte *)(CONCAT31((int3)((uint)puVar14 >> 8),cVar6 + '+') ^ *unaff_EDI);
    if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    puVar14 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7 + 0x72);
    if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
      uVar43 = in_CS;
      if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar14 + 0x6f) = *(byte *)((int)puVar14 + 0x6f) + bVar35;
    }
code_r0x00402905:
    in_ES = uVar42;
    uVar47 = CONCAT44(param_2,puVar14);
    unaff_EBX = (uint *)((int)unaff_EBX + -1);
    cVar6 = (char)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + cVar6;
    bVar7 = (byte)((uint)puVar20 >> 8) | (byte)*puVar20;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,(char)puVar20));
    if ((char)bVar7 < '\x01') {
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)(unaff_EBP + -100));
      uVar42 = in_ES;
      goto code_r0x00402929;
    }
    *(byte *)puVar14 = (byte)*puVar14 + cVar6;
    uVar42 = 0x291c;
    uVar47 = func_0x7346291c();
    *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
    puVar20 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                               (byte)extraout_ECX | *(byte *)((ulonglong)uVar47 >> 0x20));
    puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,in_ES);
    uStackY_28 = unaff_EBX;
    while( true ) {
      pcVar37 = (char *)((int)uVar47 * 2);
      *pcVar37 = *pcVar37 - (char)puVar20;
      uVar12 = *unaff_EBX;
      cVar6 = (char)((uint)puVar20 >> 8);
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
      if (SCARRY1((byte)uVar12,cVar6) == (char)(byte)*unaff_EBX < '\0') {
        pbVar10 = (byte *)((int)unaff_EDI + (int)uVar47);
        *pbVar10 = *pbVar10 + (char)uVar47;
        bVar7 = *pbVar10;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
      cVar6 = (char)uVar47;
      *(char *)uVar47 = *(char *)uVar47 + cVar6;
      uVar25 = (undefined3)((ulonglong)uVar47 >> 8);
      bVar7 = cVar6 + 7;
      puVar14 = (uint *)CONCAT31(uVar25,bVar7);
      bVar27 = (byte)((ulonglong)uVar47 >> 0x28);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *(byte *)puVar14 = (byte)*puVar14 + bVar7;
      pcVar37 = (char *)CONCAT31(uVar25,cVar6 + '3');
      uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar36 = SUB41(unaff_EBX,0);
      bVar7 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar7);
      unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(bVar7,uVar36));
      *pcVar37 = *pcVar37 + cVar6 + '3';
      cVar8 = cVar6 + ':';
      puVar14 = (uint *)CONCAT31(uVar25,cVar8);
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        bVar7 = bVar7 | *(byte *)((int)param_2 + 7);
        unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(bVar7,uVar36));
        bVar45 = (POPCOUNT(bVar7) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar14 = (byte)*puVar14 + cVar8;
      puVar14 = (uint *)(CONCAT31(uVar25,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar10 = (byte *)((int)puVar14 + 0x72);
      bVar46 = SCARRY1(*pbVar10,bVar27);
      *pbVar10 = *pbVar10 + bVar27;
      bVar7 = POPCOUNT(*pbVar10);
code_r0x0040294c:
      if ((bVar7 & 1) == 0) {
        *(byte *)((int)puVar14 + 0x72) = *(byte *)((int)puVar14 + 0x72) + (char)((uint)param_2 >> 8)
        ;
      }
      else if (bVar46) {
        unaff_EBP = *(char **)unaff_EBP;
        cVar6 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (char *)0x7e700001;
      puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,in_SS);
code_r0x00402957:
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
      cVar6 = (char)puVar14 + '(';
      puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),cVar6);
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar14,(char)puVar20)
                                );
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[0x18],
                                          (char)param_2));
      unaff_ESI = puStackY_30;
      unaff_EDI = puStackY_2c;
code_r0x00402966:
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
      bVar7 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 7);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar7,(char)unaff_EBX))
      ;
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
      puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + '~');
      uVar4 = in_SS;
code_r0x00402972:
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
      uVar43 = in_CS;
      uVar42 = uVar4;
code_r0x00402974:
      bVar7 = 0xe9 < (byte)puVar14;
      in_CS = 0x2d0a;
      uVar47 = func_0x00006128(uVar43);
      puVar20 = (uint *)uVar47;
      piVar21 = (int *)((int)((ulonglong)uVar47 >> 0x20) + -0x3d);
      *piVar21 = (int)((int)unaff_ESI + (uint)bVar7 + *piVar21);
      bVar45 = SCARRY4(*puVar20,(int)puVar20);
      *puVar20 = *puVar20 + (int)puVar20;
      uVar12 = *puVar20;
      puVar20 = extraout_ECX_00;
code_r0x00402982:
      bVar7 = POPCOUNT(uVar12 & 0xff);
      if (bVar45) {
        *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
        puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                   CONCAT11((byte)((uint)puVar20 >> 8) |
                                            *(byte *)((ulonglong)uVar47 >> 0x20),(char)puVar20));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar37 = (char *)((ulonglong)uVar47 >> 0x20);
      if ((bVar7 & 1) == 0) {
        *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
        *pcVar37 = *pcVar37 + (char)puVar20;
        uVar47 = CONCAT44(CONCAT22((short)((ulonglong)uVar47 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar47 >> 0x28) - pcVar37[0x1f],
                                            (char)((ulonglong)uVar47 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar47 >> 8),(char)uVar47 + '('));
code_r0x00402991:
        param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
        pbVar10 = (byte *)uVar47;
        bVar7 = (byte)uVar47;
        bVar45 = CARRY1(bVar7,*pbVar10);
        puVar14 = (uint *)CONCAT31((int3)((ulonglong)uVar47 >> 8),bVar7 + *pbVar10);
        cVar6 = bVar7 + *pbVar10;
        if (SCARRY1(bVar7,*pbVar10)) goto code_r0x004029c4;
code_r0x00402995:
        param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11(((char)((uint)param_2 >> 8) -
                                            *(byte *)((int)param_2 + 0x6b)) - bVar45,(char)param_2))
        ;
        bVar7 = (byte)puVar14;
        bVar45 = CARRY1(bVar7,(byte)*puVar14);
        bVar46 = SCARRY1(bVar7,(byte)*puVar14);
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7 + (byte)*puVar14);
        do {
          if (!bVar46) {
            unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar45 + *puVar14);
            pbVar10 = (byte *)((int)puVar14 + *puVar14);
            bVar27 = (byte)pbVar10;
            *pbVar10 = *pbVar10 + bVar27;
            *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
            bVar7 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar27;
            *unaff_EDI = (uint)((int)unaff_EBX + (uint)CARRY1(bVar7,bVar27) + *unaff_EDI);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar20;
            uVar25 = (undefined3)((uint)pbVar10 >> 8);
            bVar27 = bVar27 | (byte)*unaff_ESI;
            puVar14 = (uint *)CONCAT31(uVar25,bVar27);
            uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
            uVar12 = *puVar14;
            uVar1 = *puVar14;
            *puVar14 = (uint)(*puVar14 + (int)puVar14);
            if (SCARRY4(uVar1,(int)puVar14)) {
              *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)unaff_EBX;
              *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
              *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)unaff_EBX;
            }
            else {
              puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,in_ES);
              in_SS = in_ES;
              uVar4 = in_ES;
              if (CARRY4(uVar12,(uint)puVar14)) goto code_r0x00402972;
              bVar45 = CARRY1(bVar27,(byte)*puVar14);
              bVar46 = SCARRY1(bVar27,(byte)*puVar14);
              puVar14 = (uint *)CONCAT31(uVar25,bVar27 + (byte)*puVar14);
code_r0x004029be:
              if (!bVar46) {
                puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,in_ES);
                *(byte *)((int)param_2 + -0x37) =
                     (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar45;
                cVar6 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar6;
                bVar7 = (byte)puVar14;
                bVar45 = CARRY1(bVar7,(byte)*puVar14);
                bVar46 = SCARRY1(bVar7,(byte)*puVar14);
                puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7 + (byte)*puVar14);
                goto code_r0x004029c6;
              }
            }
            bVar7 = (byte)puVar20;
            bVar45 = CARRY1((byte)*param_2,bVar7);
            bVar46 = SCARRY1((byte)*param_2,bVar7);
            *(byte *)param_2 = (byte)*param_2 + bVar7;
            if (bVar45) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar46) {
            in_ES = (ushort)pcStack_8;
            goto code_r0x00402966;
          }
          *(uint *)((int)param_2 + -0x23) =
               (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar45;
          uVar12 = *puVar14;
          bVar27 = (byte)puVar14;
          uVar1 = *puVar14;
          uVar25 = (undefined3)((uint)puVar14 >> 8);
          bVar7 = bVar27 + (byte)*puVar14;
          puVar14 = (uint *)CONCAT31(uVar25,bVar7);
          uVar4 = in_ES;
          if (SCARRY1(bVar27,(byte)uVar1)) goto code_r0x00402972;
          cVar6 = (char)param_2;
          bVar35 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                   CARRY1(bVar27,(byte)uVar12);
          param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar35,cVar6));
          puVar39 = (uint *)CONCAT31(uVar25,bVar7 + (byte)*puVar14);
          bVar27 = (byte)puVar20;
          uVar42 = in_ES;
          if (SCARRY1(bVar7,(byte)*puVar14)) {
            *(byte *)param_2 = (byte)*param_2 + bVar27;
            uVar47 = CONCAT44(param_2,(int)puVar39 + -0x1c37211);
            pcVar37 = (char *)((int)puVar39 + -0x1c3720a);
            *pcVar37 = *pcVar37 + bVar35;
            bVar7 = POPCOUNT(*pcVar37);
            goto code_r0x00402984;
          }
          unaff_ESI = (uint *)((int)unaff_ESI +
                              (-(uint)CARRY1(bVar7,(byte)*puVar14) - *(int *)((int)param_2 + 5)));
          bVar45 = SCARRY4((int)puVar39,*puVar39);
          uVar12 = (int)puVar39 + *puVar39;
          uVar47 = CONCAT44(param_2,uVar12);
          if (bVar45) goto code_r0x00402982;
          bVar7 = (byte)uVar12 + 0x8e;
          uVar13 = CONCAT31((int3)(uVar12 >> 8),bVar7 - CARRY4((uint)puVar39,*puVar39));
          *unaff_EBX = (*unaff_EBX - uVar13) -
                       (uint)((byte)uVar12 < 0x72 || bVar7 < CARRY4((uint)puVar39,*puVar39));
          pbVar10 = (byte *)(uVar13 - 0x5e);
          bVar7 = *pbVar10;
          *pbVar10 = *pbVar10 + bVar35;
          uVar12 = (uint)CARRY1(bVar7,bVar35);
          uVar1 = uVar13 - 0x32d72;
          puVar14 = (uint *)(uVar1 - uVar12);
          if (SBORROW4(uVar13,0x32d72) != SBORROW4(uVar1,uVar12)) goto code_r0x00402992;
          uVar43 = in_DS;
          if (uVar13 < 0x32d72 || uVar1 < uVar12) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar14 >> 8);
            *(byte *)param_2 = (byte)*param_2 + bVar27;
            puVar39 = unaff_ESI + 1;
            out(*unaff_ESI,CONCAT11(bVar35,cVar6));
            *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
            goto code_r0x00402a3e;
          }
          bVar45 = CARRY4((uint)puVar14,*puVar14);
          bVar46 = SCARRY4((int)puVar14,*puVar14);
          puVar14 = (uint *)((int)puVar14 + *puVar14);
          if (!bVar46) {
            uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_ES);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar45;
            bVar7 = (byte)puVar14;
            *(byte *)((int)param_2 + (int)unaff_EBP) =
                 *(byte *)((int)param_2 + (int)unaff_EBP) + bVar7;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
            *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar7;
            bVar29 = (byte)((uint)puVar20 >> 8);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar29;
            *(byte *)puVar14 = (byte)*puVar14 + bVar7;
            pbVar15 = (byte *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7 | (byte)*puVar14);
            *(byte *)puVar20 = (byte)*puVar20 + cVar6;
            bVar38 = *pbVar15;
            uVar32 = (undefined2)((uint)puVar20 >> 0x10);
            puVar20 = (uint *)CONCAT22(uVar32,CONCAT11(bVar29 + bVar38,bVar27));
            pbVar15 = pbVar15 + (uint)CARRY1(bVar29,*pbVar15) + *(int *)pbVar15;
            *(byte *)param_2 = (byte)*param_2 + bVar27;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar10 = pbVar15 + 0x73;
            bVar7 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar35;
            uVar25 = (undefined3)((uint)pbVar15 >> 8);
            bVar7 = (char)pbVar15 + CARRY1(bVar7,bVar35);
            pcVar37 = (char *)CONCAT31(uVar25,bVar7);
            *(byte *)param_2 = (byte)*param_2 + bVar27;
            if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
              in_SS = in_ES;
            }
            puVar41 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x17));
            *pcVar37 = *pcVar37 + bVar7;
            cVar6 = bVar7 + 2;
            puVar14 = (uint *)CONCAT31(uVar25,cVar6);
            if (bVar7 < 0xfe) {
              *puVar14 = (uint)(*puVar14 + (int)puVar14);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar14 = (byte)*puVar14 + cVar6;
            uVar12 = *param_2;
            puVar39 = (uint *)((int)unaff_ESI + unaff_EBX[0x19]);
            *(byte *)puVar14 = (byte)*puVar14 + cVar6;
            puVar20 = (uint *)CONCAT22(uVar32,CONCAT11(bVar29 + bVar38 | (byte)*puVar14,
                                                       bVar27 | (byte)uVar12));
            unaff_EDI = puVar41;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar7;
    pbVar10 = (byte *)((int)puVar14 + 0x73);
    bVar45 = CARRY1(*pbVar10,bVar27);
    *pbVar10 = *pbVar10 + bVar27;
  } while( true );
code_r0x00402992:
  pbVar10 = (byte *)((int)puVar14 + 0x2a);
  bVar45 = CARRY1(*pbVar10,bVar35);
  *pbVar10 = *pbVar10 + bVar35;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar14) = *(byte *)(in_GS_OFFSET + (int)puVar14) + (char)puVar14;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                      (char)puVar20));
  *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
code_r0x00402a3e:
  uVar25 = (undefined3)((uint)puVar14 >> 8);
  bVar7 = (byte)puVar14 | (byte)*puVar39;
  pcVar37 = (char *)CONCAT31(uVar25,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar37 = *pcVar37 + bVar7;
    cVar6 = bVar7 + 2;
    piVar21 = (int *)CONCAT31(uVar25,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar21 = (char)*piVar21 + cVar6;
      bVar7 = bVar7 + 0x71;
      pcVar11 = (char *)CONCAT31(uVar25,bVar7);
      pcVar37 = (char *)segment(uVar43,(short)unaff_EBX + (short)puVar39);
      *pcVar37 = *pcVar37 + bVar7;
      uVar12 = unaff_EDI[0x1a];
      *pcVar11 = *pcVar11 + bVar7;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | (byte)uVar12 |
                                          *(byte *)((int)unaff_EDI + 0x69),(char)puVar20));
      *pcVar11 = *pcVar11 + bVar7;
      bVar7 = bVar7 | (byte)*param_2;
      pcVar37 = (char *)CONCAT31(uVar25,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar39 + (uint)bVar44 * -2 + 1;
    out(*puVar39,(short)param_2);
  }
  else {
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                          (char)unaff_EBX));
code_r0x00402a5d:
    *pcVar37 = *pcVar37 + (char)pcVar37;
    piVar21 = (int *)CONCAT31((int3)((uint)pcVar37 >> 8),(char)pcVar37 + 'o');
    unaff_ESI = puVar39;
  }
code_r0x00402a61:
  pcVar37 = (char *)segment(uVar43,(short)unaff_EBX + (short)unaff_ESI);
  *pcVar37 = *pcVar37 + (char)piVar21;
  cVar6 = (char)puVar20;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)unaff_EDI[0x1a],cVar6));
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  uVar32 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar32);
  piVar16 = (int *)((int)piVar21 + *piVar21);
  puVar39 = unaff_ESI;
  puVar41 = unaff_EDI;
  uVar42 = in_ES;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar6;
  puVar39 = unaff_ESI + (uint)bVar44 * -2 + 1;
  out(*unaff_ESI,uVar32);
code_r0x00402a75:
  bVar7 = (byte)((uint)puVar20 >> 8) | (byte)*param_2;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,(char)puVar20));
  piVar21 = (int *)(uint)(byte)*unaff_EBX;
  *(byte *)puVar39 = (byte)*puVar39 - bVar7;
  puVar41 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  out(*puVar39,(short)param_2);
  bVar7 = in((short)param_2);
  *(byte *)puVar41 = bVar7;
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*param_2,(char)puVar20));
  iVar17 = *piVar21;
  cVar6 = in(1);
  puVar14 = (uint *)CONCAT31((int3)((uint)((int)piVar21 + *piVar21) >> 8),cVar6);
  *(char *)puVar14 = (char)*puVar14 + cVar6;
  puVar14 = (uint *)((uint)puVar14 | *puVar14);
  *(byte *)puVar20 = (byte)*puVar20 + (char)param_2;
  puVar39 = (uint *)((int)puVar39 + (((uint)bVar44 * -8 + 4) - iVar17));
  puVar41 = (uint *)((int)puVar41 + (uint)bVar44 * -2 + 1);
  in_SS = in_ES;
  while( true ) {
    bVar7 = (byte)puVar14 | (byte)*param_2;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7);
    unaff_EDI = puVar41;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar14 = (byte)*puVar14 + bVar7;
code_r0x00402a9b:
    uVar25 = (undefined3)((uint)puVar14 >> 8);
    cVar6 = (char)puVar14 + '\r';
    piVar16 = (int *)CONCAT31(uVar25,cVar6);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    *(byte *)(puVar39 + -0xc800000) = (byte)puVar39[-0xc800000] + (char)param_2;
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    cVar8 = (char)puVar20;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar8;
      unaff_ESI = puVar39 + (uint)bVar44 * -2 + 1;
      out(*puVar39,(short)param_2);
      piVar21 = (int *)((longlong)*piVar16 * 0x7b020a00);
      *(char *)piVar21 =
           (char)*piVar21 - ((longlong)(int)piVar21 != (longlong)*piVar16 * 0x7b020a00);
      pbVar10 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10;
      goto code_r0x00402a61;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    puVar14 = (uint *)CONCAT31(uVar25,(char)puVar14 + ':');
    unaff_ESI = (uint *)((uint)puVar39 | *(uint *)((int)param_2 + -0x79));
    iVar17 = (int)puVar14 + *puVar14;
    if (SCARRY4((int)puVar14,*puVar14)) {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            (byte)unaff_ESI[(int)unaff_EBX],(char)unaff_EBX));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar17;
      puVar41 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar25 = (undefined3)((uint)iVar17 >> 8);
    cVar6 = (char)iVar17 + CARRY4((uint)puVar14,*puVar14);
    piVar21 = (int *)CONCAT31(uVar25,cVar6);
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    bVar45 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar45) && (bVar45)) goto code_r0x00402a61;
    *(char *)piVar21 = (char)*piVar21 + cVar6;
    cVar9 = cVar6 + '(';
    pcVar37 = (char *)CONCAT31(uVar25,cVar9);
    puVar41 = unaff_EDI + (uint)bVar44 * -2 + 1;
    uVar12 = in((short)param_2);
    *unaff_EDI = uVar12;
    *pcVar37 = *pcVar37 + cVar9;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11((byte)((uint)puVar20 >> 8) | bRama07b0222,cVar8));
    *pcVar37 = *pcVar37 + cVar9;
    pcVar37 = (char *)CONCAT31(uVar25,cVar6 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar39 = (uint *)((int)(unaff_ESI + (uint)bVar44 * -2 + 1) + (uint)bVar44 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar44 * -2 + 1],(short)param_2);
    bVar7 = (byte)pcVar37;
    *pcVar37 = *pcVar37 + bVar7;
    unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar41);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar25 = (undefined3)((uint)pcVar37 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar6 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*param_2;
    piVar21 = (int *)CONCAT31(uVar25,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar21 = (char)*piVar21 + cVar6;
    piVar16 = (int *)CONCAT31(uVar25,cVar6 + '\x17');
    uVar42 = in_ES;
code_r0x00402ae3:
    out(*puVar39,(short)param_2);
    unaff_ESI = puVar39 + (uint)bVar44 * -2 + 1 + (uint)bVar44 * -2 + 1;
    out(puVar39[(uint)bVar44 * -2 + 1],(short)param_2);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
code_r0x00402ae7:
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x60],
                                          (char)unaff_EBX));
    cVar6 = (char)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    uVar25 = (undefined3)((uint)piVar16 >> 8);
    bVar7 = cVar6 + 2;
    puVar14 = (uint *)CONCAT31(uVar25,bVar7);
    in_ES = uVar42;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar14 = (byte)*puVar14 + bVar7;
      cVar6 = cVar6 + '}';
      puVar14 = (uint *)CONCAT31(uVar25,cVar6);
      *(byte *)puVar14 = ((byte)*puVar14 - cVar6) - (0x84 < bVar7);
      pbVar10 = (byte *)((int)param_2 + (int)puVar14);
      *pbVar10 = *pbVar10 + cVar6;
      bVar7 = POPCOUNT(*pbVar10);
      puVar39 = unaff_ESI;
code_r0x00402af9:
      in_ES = uVar42;
      unaff_EDI = puVar41;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        bVar7 = (byte)puVar20;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
        unaff_ESI = puVar39 + (uint)bVar44 * -2 + 1;
        out(*puVar39,(short)param_2);
        uVar12 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'o') +
                 *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar12,bVar7);
        pcVar37 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '(');
        while( true ) {
          uVar12 = *param_2;
          bVar27 = (byte)puVar20;
          *(byte *)param_2 = (byte)*param_2 + bVar27;
          pcVar37 = pcVar37 + (uint)CARRY1((byte)uVar12,bVar27) + iRam73280512;
          bVar7 = (byte)pcVar37;
          *pcVar37 = *pcVar37 + bVar7;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                     CONCAT11((byte)((uint)puVar20 >> 8) | bRam7d160243,bVar27));
          bVar44 = ((uint)uStackY_28 & 0x400) != 0;
          in_AF = ((uint)uStackY_28 & 0x10) != 0;
          *pcVar37 = *pcVar37 + bVar7;
          uVar25 = (undefined3)((uint)pcVar37 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar25,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar6 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar25,cVar6) = *(char *)CONCAT31(uVar25,cVar6) + cVar6;
          iVar17 = CONCAT31(uVar25,bVar7 + 0x16);
code_r0x00402b33:
          piVar16 = (int *)(iVar17 + 0xe2802);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)puVar20 >> 8);
          uVar42 = in_ES;
          in_ES = in_SS;
          while( true ) {
            bVar27 = (byte)unaff_EBX | (byte)((uint)puVar20 >> 8);
            unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar27);
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
            puVar39 = unaff_ESI;
            if ((SCARRY4(uVar12,(int)puVar14) != SCARRY4((int)(uVar1 + (int)puVar14),uVar13)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar14;
            *(byte *)puVar14 = (byte)*puVar14 + bVar7;
            iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)param_2 | (byte)*param_2;
            uVar12 = *unaff_EBX;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar27;
            pcVar37 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x12') + 0x228b26
                               + *puVar41 + (uint)CARRY1((byte)uVar12,bVar27));
            cVar6 = bVar7 + (byte)*puVar20;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar6);
            if (SCARRY1(bVar7,(byte)*puVar20) == cVar6 < '\0') break;
            *pcVar37 = *pcVar37 + (char)pcVar37;
            cVar6 = (char)pcVar37 + '\x02';
            pcVar37 = (char *)CONCAT31((int3)((uint)pcVar37 >> 8),cVar6);
            bVar7 = POPCOUNT(cVar6);
            uVar42 = in_ES;
code_r0x00402b7a:
            puVar14 = unaff_ESI;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar37;
              *pcVar37 = *pcVar37 + cVar6;
              uVar25 = (undefined3)((uint)pcVar37 >> 8);
              pcVar37 = (char *)CONCAT31(uVar25,cVar6 + '\x13');
              *(byte *)puVar20 = (byte)*puVar20 | (byte)param_2;
              *(byte *)puVar41 = (byte)*puVar41 | (byte)param_2;
              *param_2 = (uint)(pcVar37 + *param_2);
              uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
              uVar36 = SUB41(unaff_EBX,0);
              cVar8 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
              unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(cVar8,uVar36));
              *pcVar37 = *pcVar37 + cVar6 + '\x13';
              piVar16 = (int *)CONCAT31(uVar25,cVar6 + -0x7a);
              uVar12 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar12,(char)puVar20) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar16 = (char)*piVar16 + cVar6 + -0x7a;
              cVar9 = cVar6 + -0x78;
              piVar16 = (int *)CONCAT31(uVar25,cVar9);
              uVar4 = uVar42;
              if ((POPCOUNT(cVar9) & 1U) != 0) break;
              *(char *)piVar16 = (char)*piVar16 + cVar9;
              pcVar37 = (char *)CONCAT31(uVar25,cVar6 + -0x65);
              *puVar20 = *puVar20 | (uint)param_2;
              *puVar41 = *puVar41 | (uint)param_2;
              pbVar10 = (byte *)((int)puVar20 + -1);
              cVar8 = cVar8 + *(byte *)((int)unaff_EBX + -0x5e);
              unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(cVar8,uVar36));
              *pcVar37 = *pcVar37 + cVar6 + -0x65;
              bVar7 = cVar6 + 10;
              puVar39 = (uint *)CONCAT31(uVar25,bVar7);
              bVar27 = (byte)pbVar10;
              *(byte *)param_2 = (byte)*param_2 + bVar27;
              unaff_ESI = puVar14 + (uint)bVar44 * -2 + 1;
              out(*puVar14,(short)param_2);
              uVar12 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar27;
              uVar2 = (uint)CARRY1((byte)uVar12,bVar27);
              uVar12 = *param_2;
              uVar1 = *param_2;
              pbVar15 = pbVar10 + uVar1 + uVar2;
              uVar5 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar8;
              uVar13 = *param_2;
              unaff_EBP = (char *)((uint)unaff_EBP | *puVar39);
              *(byte *)puVar39 = (char)*puVar39 + bVar7;
              puVar20 = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar15 >> 8) | bRam7d170243,
                                                  (char)pbVar15 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar10,uVar12) ||
                                                  CARRY4((uint)(pbVar10 + uVar1),uVar2))));
              bVar44 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar39 = (char)*puVar39 + bVar7;
              bVar45 = 0xfd < bVar7;
              pcVar37 = (char *)CONCAT31(uVar25,cVar6 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar13);
code_r0x00402bd1:
              uVar12 = *unaff_EBX;
              uVar1 = *unaff_EBX;
              *unaff_EBX = (uint)((byte *)(uVar1 + (int)puVar20) + bVar45);
              bVar7 = POPCOUNT(*unaff_EBX & 0xff);
              uVar42 = in_SS;
              if ((SCARRY4(uVar12,(int)puVar20) != SCARRY4((int)(uVar1 + (int)puVar20),(uint)bVar45)
                  ) == (int)*unaff_EBX < 0) goto code_r0x00402b7a;
              cVar6 = (char)pcVar37;
              *pcVar37 = *pcVar37 + cVar6;
              pcVar37 = (char *)CONCAT31((int3)((uint)pcVar37 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar37 = *pcVar37 + (char)pcVar37;
                pcVar37 = (char *)(CONCAT31((int3)((uint)pcVar37 >> 8),(char)pcVar37 + '\x12') |
                                  *param_2);
                *(byte *)puVar41 = (byte)*puVar41 - (char)puVar20;
                *pcVar37 = *pcVar37 + (char)pcVar37;
                puVar14 = (uint *)((int)param_2 - *unaff_ESI);
                bVar7 = (byte)unaff_EBX | (byte)((uint)puVar20 >> 8);
                cVar6 = *pcVar37;
                uVar25 = (undefined3)((uint)pcVar37 >> 8);
                pcVar37 = (char *)CONCAT31(uVar25,cVar6);
                *pcVar37 = *pcVar37 + cVar6;
                pcVar11 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar37 = *pcVar37 + cVar6;
                bVar45 = false;
                pcVar37 = (char *)(CONCAT31(uVar25,cVar6 + '\x13') | *puVar14);
                do {
                  bVar27 = (byte)puVar20;
                  bVar7 = bVar27 + (byte)unaff_ESI[(int)puVar41 * 2];
                  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7 + bVar45);
                  uVar12 = (uint)(CARRY1(bVar27,(byte)unaff_ESI[(int)puVar41 * 2]) ||
                                 CARRY1(bVar7,bVar45));
                  pcVar18 = pcVar37 + 0x1b000019 + uVar12;
                  piVar21 = (int *)((int)puVar41 * 2 + 0x40000a5);
                  *piVar21 = (int)((int)puVar20 +
                                  (uint)((char *)0xe4ffffe6 < pcVar37 ||
                                        CARRY4((uint)(pcVar37 + 0x1b000019),uVar12)) + *piVar21);
                  puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + cRam00009d7d
                                            );
                  uVar25 = (undefined3)((uint)pcVar18 >> 8);
                  bVar7 = (char)pcVar18 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar12 = CONCAT31(uVar25,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar37 = (char *)CONCAT22((short)(uVar12 >> 0x10),
                                             CONCAT11((char)((uint)pcVar18 >> 8) - in_AF,
                                                      (char)uVar12));
                  pcVar18 = (char *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar25,bVar7));
                  while( true ) {
                    *pcVar37 = *pcVar37 + (char)pcVar37;
                    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),
                                               (byte)puVar14 | (byte)*puVar14);
                    puVar41 = (uint *)((uint)puVar41 | (uint)unaff_ESI);
                    uVar12 = (uint)pcVar11 | (uint)unaff_ESI;
                    unaff_EBP = pcVar18 + 1;
                    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_ES);
                    cVar8 = (char)(pcVar37 + 0x1b000019);
                    uVar25 = (undefined3)((uint)(pcVar37 + 0x1b000019) >> 8);
                    cVar6 = cVar8 + -0x13;
                    pcVar37 = (char *)CONCAT31(uVar25,cVar6);
                    uVar32 = (undefined2)(uVar12 >> 0x10);
                    cVar9 = (char)(uVar12 >> 8) + *(char *)(uVar12 - 0x5e);
                    unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(cVar9,(byte)uVar12));
                    *pcVar37 = *pcVar37 + cVar6;
                    pcVar37 = (char *)(CONCAT31(uVar25,cVar8 + '\x19') | *puVar14);
                    bVar7 = (byte)pcVar37;
                    if ((POPCOUNT((uint)pcVar37 & 0xff) & 1U) != 0) {
                      pbVar10 = (byte *)((int)puVar14 + (int)pcVar37);
                      bVar45 = CARRY1(*pbVar10,bVar7);
                      *pbVar10 = *pbVar10 + bVar7;
                      param_2 = puVar14;
                      goto code_r0x00402bd1;
                    }
                    *pcVar37 = *pcVar37 + bVar7;
                    uVar25 = (undefined3)((uint)pcVar37 >> 8);
                    pcVar11 = (char *)CONCAT31(uVar25,bVar7 + 0x6f);
                    param_2 = (uint *)((int)puVar14 + 1);
                    *pcVar11 = *pcVar11 + bVar7 + 0x6f;
                    bVar27 = (byte)uVar12 | (byte)((uint)pcVar37 >> 8);
                    pcVar37 = (char *)CONCAT31(uVar25,bVar7 + 0x5c);
                    cVar9 = cVar9 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar27) + -0x5f)
                    ;
                    unaff_EBX = (uint *)CONCAT22(uVar32,CONCAT11(cVar9,bVar27));
                    *pcVar37 = *pcVar37 + bVar7 + 0x5c;
                    pcVar37 = (char *)(CONCAT31(uVar25,bVar7 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar37 & 0xff) & 1U) != 0) {
                      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)puVar20 >> 8);
                      uStackY_28 = (uint *)((uint)uStackY_28._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar37 = *pcVar37 + (char)pcVar37;
                    uVar25 = (undefined3)((uint)pcVar37 >> 8);
                    cVar6 = (char)pcVar37 + 'o';
                    puVar14 = (uint *)((int)puVar14 + 2);
                    *(char *)CONCAT31(uVar25,cVar6) = *(char *)CONCAT31(uVar25,cVar6) + cVar6;
                    pcVar11 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                               bVar27 | (byte)((uint)pcVar37 >> 8));
                    pcVar37 = (char *)(CONCAT31(uVar25,cVar6) | 2);
                    pcVar18[-0x62] = pcVar18[-0x62] + '\x01';
                    bVar7 = (byte)pcVar37;
                    *pcVar37 = *pcVar37 + bVar7;
                    bVar45 = 0xfd < bVar7;
                    cVar6 = bVar7 + 2;
                    pcVar37 = (char *)CONCAT31(uVar25,cVar6);
                    uVar43 = in_ES;
                    if (SCARRY1(bVar7,'\x02') != cVar6 < '\0') break;
                    *pcVar37 = *pcVar37 + cVar6;
                    bVar27 = bVar7 + 10;
                    pcVar37 = (char *)CONCAT31(uVar25,bVar27);
                    *pcVar37 = *pcVar37 - cVar9;
                    cVar8 = (char)puVar20;
                    *(byte *)puVar14 = *(byte *)puVar14 + cVar8;
                    pcVar18[-0x62] = pcVar18[-0x62] + '\x01';
                    *pcVar37 = *pcVar37 + bVar27;
                    cVar6 = bVar7 + 0xc;
                    pcVar37 = (char *)CONCAT31(uVar25,cVar6);
                    if (SCARRY1(bVar27,'\x02') == cVar6 < '\0') {
                      *pcVar37 = *pcVar37 + cVar6;
                      *(byte *)puVar20 = (byte)*puVar20 - cVar9;
                      *(byte *)puVar14 = *(byte *)puVar14 + cVar8;
                      cVar6 = (bVar7 + 0x13) - (byte)puVar20[0x13];
                      pcVar37 = (char *)CONCAT31(uVar25,cVar6);
                      *pcVar37 = *pcVar37 + cVar6;
                      pcVar19 = (char *)CONCAT31(uVar25,cVar6 + *pcVar37);
                      *pcVar19 = *pcVar19 + cVar6 + *pcVar37;
                      pcVar19 = pcVar19 + *puVar20;
                      *pcVar19 = *pcVar19 + (char)pcVar19;
                      LOCK();
                      pcVar37 = *(char **)pcVar19;
                      *(char **)pcVar19 = pcVar19;
                      UNLOCK();
                      *pcVar37 = *pcVar37 + (char)pcVar37;
                      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar37 >> 8),(byte)*puVar20);
                      *pbVar10 = *pbVar10 + (byte)*puVar20;
                      goto code_r0x00402c8d;
                    }
                    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),
                                               cVar8 + *pcVar11 + (0xfd < bVar27));
                    *(byte *)puVar41 = (byte)*puVar41 - cVar9;
                    pcVar18 = unaff_EBP;
                  }
                } while( true );
              }
              unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(byte *)((int)unaff_EBX + -99),(char)unaff_EBX)
                                          );
              puVar14 = unaff_ESI;
            }
            *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
            param_2 = (uint *)((int)param_2 - *puVar14);
            unaff_ESI = puVar14;
            uVar42 = in_ES;
            in_ES = uVar4;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
          pcVar37 = pcVar37 + -0x7d160243;
        }
        pcVar37 = (char *)CONCAT31(uVar25,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)puVar20;
    uVar12 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
    *puVar41 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar12,(byte)puVar14) + *puVar41);
    puVar39 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar31 = (char)puVar20;
      cVar28 = (char)((uint)puVar20 >> 8) + (char)((uint)pbVar10 >> 8);
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(cVar28,cVar31));
      cVar6 = (char)pbVar10;
      *pbVar10 = *pbVar10 + cVar6;
      pcVar37 = (char *)((int)pbVar10 * 2 + 0x1a10000);
      cVar9 = (char)((uint)pcVar11 >> 8);
      *pcVar37 = *pcVar37 + cVar9;
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
      bVar27 = (byte)puVar14;
      *(byte *)puVar41 = (byte)*puVar41 + bVar27;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + bVar27;
      *pbVar10 = *pbVar10 + cVar6;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar32 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar9 = cVar9 + (byte)unaff_ESI[(int)pcVar11];
      pcVar37 = (char *)CONCAT22(uVar32,CONCAT11(cVar9,(char)pcVar11));
      pcVar37[(int)pbVar10] = pcVar37[(int)pbVar10] + cVar6;
      *(byte *)puVar14 = *(byte *)puVar14 - cVar9;
      *(byte *)puVar14 = *(byte *)puVar14 + cVar31;
      uVar25 = (undefined3)((uint)pbVar10 >> 8);
      bVar7 = cVar6 - *pbVar10;
      *pcVar37 = *pcVar37 + bVar27;
      *(byte *)puVar14 = *(byte *)puVar14 ^ bVar7;
      *(byte *)puVar14 = *(byte *)puVar14 + bVar7;
      *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
      uVar12 = *puVar20;
      *(byte *)puVar20 = (byte)*puVar20 + bVar27;
      cVar8 = bVar7 + *(char *)CONCAT31(uVar25,bVar7) + CARRY1((byte)uVar12,bVar27);
      pcVar11 = (char *)CONCAT22(uVar32,CONCAT11(cVar9 + pcVar18[-0x60],(char)pcVar11));
      *(char *)CONCAT31(uVar25,cVar8) = *(char *)CONCAT31(uVar25,cVar8) + cVar8;
      cVar9 = cVar8 + '\x12';
      pbVar10 = (byte *)CONCAT31(uVar25,cVar9);
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
    pbVar10 = (byte *)CONCAT31(uVar25,cVar8 + '$');
    *pbVar10 = *pbVar10 + cVar28;
    bVar7 = *(byte *)puVar14;
    *(byte *)puVar14 = *(byte *)puVar14 + cVar31;
    uVar42 = in_DS;
  } while (SCARRY1(bVar7,cVar31) == (char)*(byte *)puVar14 < '\0');
  do {
    cVar6 = (char)pbVar10;
    *pbVar10 = *pbVar10 + cVar6;
    uVar25 = (undefined3)((uint)pbVar10 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar14;
    bVar27 = cVar6 + 0x24;
    cVar9 = (char)((uint)pcVar11 >> 8);
    pcVar11[-0x62] = pcVar11[-0x62] + cVar9;
    *(char *)CONCAT31(uVar25,bVar27) = *(char *)CONCAT31(uVar25,bVar27) + bVar27;
    bVar7 = cVar6 + 0x2fU + (byte)*puVar20;
    cVar8 = bVar7 + (0xf4 < bVar27);
    cVar6 = cVar8 + *(char *)CONCAT31(uVar25,cVar8) +
            (CARRY1(cVar6 + 0x2fU,(byte)*puVar20) || CARRY1(bVar7,0xf4 < bVar27));
    pcVar37 = (char *)CONCAT31(uVar25,cVar6);
    *pcVar37 = *pcVar37 - (char)puVar14;
    *pcVar37 = *pcVar37 + cVar6;
    pcVar18 = (char *)((int)puVar14 - *puVar14);
    *(byte *)(unaff_ESI + (int)pcVar11) = (byte)unaff_ESI[(int)pcVar11] + cVar9;
    pcVar37[(int)unaff_EBP] = pcVar37[(int)unaff_EBP] + cVar6;
    *pcVar18 = *pcVar18 + (char)puVar20;
    pcVar37 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((char)((uint)pbVar10 >> 8) - *pcVar18,cVar6));
    uVar12 = *puVar41;
    *pcVar37 = *pcVar37 - (char)((uint)pcVar18 >> 8);
    *pcVar37 = *pcVar37 + cVar6;
    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar43);
    pbVar15 = (byte *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                               CONCAT11(cVar9 - (byte)*unaff_ESI,(char)pcVar11));
    unaff_EBP = unaff_EBP + *(int *)(pbVar15 + (int)puVar20);
    puVar39 = (uint *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + (byte)uVar12);
    while( true ) {
      puVar14 = puVar39;
      uVar32 = (undefined2)((uint)pbVar15 >> 0x10);
      bVar38 = (char)((uint)pbVar15 >> 8) + pbVar15[0x18];
      *pcVar37 = *pcVar37 + (char)pcVar37;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar37 >> 8),(char)pcVar37 + 'o');
      cVar6 = (char)puVar20;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      uVar12 = *unaff_ESI;
      bVar35 = (byte)((uint)puVar20 >> 8);
      bVar7 = *pbVar10;
      pbVar10 = pbVar10 + (uint)CARRY1(bVar35,*pbVar10) + *(int *)pbVar10;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      cVar8 = ((char)pbVar15 - (byte)uVar12) - (byte)*unaff_ESI;
      bVar27 = *(byte *)((int)puVar41 + 0x1a);
      *pbVar10 = *pbVar10 + (char)pbVar10;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11(bVar35 + bVar7 + bVar27 | (byte)*puVar14,cVar6));
      pbVar10 = pbVar10 + *puVar14;
      if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) break;
      *pbVar10 = *pbVar10 + (char)pbVar10;
      bVar7 = (char)pbVar10 + 0x6f;
      pcVar37 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
      pcVar11 = (char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar38,(char)pbVar15)) >> 8),cVar8
                                 ) + -1);
      *pcVar37 = *pcVar37 + bVar7;
      *pcVar37 = *pcVar37 + bVar7;
      *pcVar11 = *pcVar11 + (byte)puVar14;
      *(byte *)((int)pcVar37 * 2) = *(byte *)((int)pcVar37 * 2) ^ bVar7;
      uVar3 = *(undefined6 *)pcVar37;
      uVar43 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar37 = (char *)uVar3;
      *pcVar37 = *pcVar37 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar37 = (char *)((uint)pcVar37 | 0x73110008);
      bVar38 = (byte)((uint)pcVar11 >> 8);
      *(byte *)puVar41 = (byte)*puVar41 - bVar38;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      puVar39 = unaff_ESI + (uint)bVar44 * -2 + 1;
      out(*unaff_ESI,(short)puVar14);
      *pcVar37 = *pcVar37;
      cVar6 = (char)pcVar37;
      *pcVar37 = *pcVar37 + cVar6;
      bVar7 = unaff_EBP[-0x5a];
      uVar32 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar8 = (char)pcVar11;
      *pcVar37 = *pcVar37 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar12 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      puVar20 = (uint *)(uVar12 | 0x73110000);
      unaff_ESI = puVar39 + (uint)bVar44 * -2 + 1;
      out(*puVar39,(short)puVar14);
      *(byte *)puVar20 = (byte)*puVar20;
      bVar35 = (byte)puVar14 | (byte)*puVar41;
      puVar39 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar35);
      *(byte *)puVar20 = (byte)*puVar20 + cVar6;
      pcVar37 = (char *)(uVar12 | 0x7b1f1609);
      bVar44 = (uVar42 & 0x400) != 0;
      *(uint *)((int)puVar41 + -0x7d) = *(uint *)((int)puVar41 + -0x7d) | (uint)unaff_EBP;
      bVar27 = (byte)pcVar37;
      *pcVar37 = *pcVar37 + bVar27;
      bVar38 = bVar38 | bVar7 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar15 = (byte *)CONCAT22(uVar32,CONCAT11(bVar38,cVar8));
      *pcVar37 = *pcVar37 + bVar27;
      uVar25 = (undefined3)((uint)pcVar37 >> 8);
      unaff_ESI[(int)puVar41 * 2] =
           (uint)((int)puVar39 + (uint)(0xd2 < bVar27) + unaff_ESI[(int)puVar41 * 2]);
      bVar7 = bVar27 + 0x2d ^ *(byte *)CONCAT31(uVar25,bVar27 + 0x2d);
      pcVar37 = (char *)CONCAT31(uVar25,bVar7);
      uVar12 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
      uVar42 = uVar43;
      if (CARRY1((byte)uVar12,bVar7)) {
        *pcVar37 = *pcVar37 + bVar7;
        bVar7 = bVar7 | pcVar37[0x4000019];
        pcVar37 = (char *)CONCAT31(uVar25,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar37 = *pcVar37 + bVar7;
          piVar21 = (int *)CONCAT31(uVar25,bVar7 + 0x28);
          *piVar21 = (int)piVar21 + (uint)(0xd7 < bVar7) + *piVar21;
          bVar29 = (byte)((uint6)uVar3 >> 8);
          *pbVar15 = *pbVar15 + bVar29;
          uVar33 = CONCAT11((byte)((uint)puVar14 >> 8) | bVar38,bVar35);
          puVar39 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),uVar33);
          uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar43);
          bVar35 = in(uVar33);
          pbVar10 = (byte *)CONCAT31(uVar25,bVar35);
          bVar27 = *pbVar10;
          bVar45 = SCARRY1(*pbVar10,bVar35);
          *pbVar10 = *pbVar10 + bVar35;
          bVar7 = *pbVar10;
          puVar14 = unaff_ESI;
          in_SS = uVar43;
          if (!CARRY1(bVar27,bVar35)) goto code_r0x00402e19;
          *pbVar10 = *pbVar10 + bVar35;
          bVar29 = bVar29 | *pbVar10;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar29,cVar6));
          pcVar37 = (char *)CONCAT31(uVar25,bVar35 + *pbVar10);
          *pbVar15 = *pbVar15 + bVar29;
        }
        uVar25 = (undefined3)((uint)pcVar37 >> 8);
        bVar27 = (byte)pcVar37 | (byte)*puVar39;
        pbVar10 = (byte *)CONCAT31(uVar25,bVar27);
        puVar14 = unaff_ESI + (uint)bVar44 * -2 + 1;
        out(*unaff_ESI,(short)puVar39);
        LOCK();
        bVar7 = *pbVar10;
        *pbVar10 = bVar27;
        UNLOCK();
        *(byte *)puVar39 = (byte)*puVar39 + (char)puVar20;
        piVar21 = (int *)(CONCAT31(uVar25,bVar7) + -0x1b7e07);
        *(byte *)puVar39 = (byte)*puVar39 + (char)puVar20;
        iVar17 = (int)puVar20 - *(int *)pbVar15;
        bVar7 = *(byte *)((int)puVar41 + -0x7a);
        uVar33 = (undefined2)((uint)iVar17 >> 0x10);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        bVar27 = (char)((uint)iVar17 >> 8) + bVar7 | *(byte *)((int)puVar41 + 0x17);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        uVar25 = (undefined3)(CONCAT22(uVar33,CONCAT11(bVar27,(byte)iVar17)) >> 8);
        bVar7 = (byte)iVar17 | *pbVar15;
        puVar20 = (uint *)CONCAT31(uVar25,bVar7);
        pbVar10 = (byte *)((int)piVar21 + *piVar21);
        puVar23 = puVar14;
        if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e0a;
        *(byte *)puVar20 = (byte)*puVar20 + bVar7;
        *(byte **)pbVar15 = (byte *)(*(int *)pbVar15 + (int)puVar39);
        piVar21 = (int *)CONCAT31(uVar25,bVar7 + 0x27);
        puVar20 = (uint *)CONCAT22(uVar33,CONCAT11(bVar27 + *(byte *)((int)puVar41 + -0x79),bVar7));
        *(byte *)piVar21 = (char)*piVar21 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar11 = (char *)CONCAT22(uVar32,CONCAT11(bVar38 | unaff_EBP[-0x62],cVar8));
  } while( true );
code_r0x00402dff:
  pbVar10 = (byte *)CONCAT22((short)((uint)piVar21 >> 0x10),
                             CONCAT11((byte)((uint)piVar21 >> 8) |
                                      *(byte *)((int)puVar39 + 0x2170411),(byte)piVar21));
  puVar23 = puVar14 + (uint)bVar44 * -2 + 1;
  out(*puVar14,(short)puVar39);
  *pbVar10 = (byte)piVar21;
  *(byte *)puVar39 = (byte)*puVar39 + (char)puVar20;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar10;
  *pbVar10 = *pbVar10 - cVar8;
  *pbVar10 = *pbVar10 + (char)pbVar10;
  bVar45 = false;
  bVar7 = (byte)((uint)puVar20 >> 8) | bRam052b0603;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,(char)puVar20));
  puVar14 = puVar23;
code_r0x00402e19:
  if (bVar7 == 0 || bVar45 != (char)bVar7 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cRam89280411;
  piVar21 = (int *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                            CONCAT11((byte)((uint)pbVar10 >> 8) |
                                     *(byte *)((int)puVar39 + 0x7190411),cRam89280411));
  *(char *)piVar21 = (char)*piVar21 + cRam89280411;
  cVar6 = (char)puVar20;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar39,cVar6));
  puVar14 = (uint *)((int)puVar14 + *piVar21);
  pbVar10 = (byte *)((int)piVar21 + *piVar21);
  bVar27 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar27;
  *(byte *)puVar14 = (byte)*puVar14 + cVar6;
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar27;
  *(char **)pbVar10 = unaff_EBP + (uint)CARRY1(bVar7,bVar27) + *(int *)pbVar10;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),*pbVar10);
  *(byte *)puVar39 = (byte)*puVar39 + cVar6;
  puVar23 = (uint *)CONCAT31((int3)((uint)puVar39 >> 8),(byte)puVar39 | (byte)*puVar39);
  pbVar10 = (byte *)((int)puVar23 + -0x43);
  *pbVar10 = *pbVar10 + (char)((uint)puVar39 >> 8);
  puVar39 = puVar23;
  puVar23 = puVar41;
  uVar42 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar41 = puVar23;
  in_SS = in_ES;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e6e;
  iVar17 = *(int *)((int)piVar21 + *piVar21);
  *(byte *)puVar39 = (byte)*puVar39 + (char)puVar20;
  piVar21 = (int *)(iVar17 + -0x8c6f);
  puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),
                             CONCAT11((byte)((uint)puVar39 >> 8) | *(byte *)((int)puVar39 + -0x3f),
                                      (char)puVar39));
  pbVar22 = (byte *)((int)piVar21 + *piVar21);
  pbVar10 = pbVar22;
  puVar41 = uStackY_28;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar39,(char)puVar20));
  puVar23 = puVar14 + (uint)bVar44 * -2 + 1;
  out(*puVar14,(short)puVar39);
  puVar39 = (uint *)CONCAT31((int3)((uint)puVar39 >> 8),(char)puVar39 + (byte)*puVar41);
  puVar14 = puVar23 + (uint)bVar44 * -2 + 1;
  out(*puVar23,(short)puVar39);
  uVar42 = in_ES;
  in_SS = uVar43;
code_r0x00402e6e:
  in_ES = uVar42;
  uVar25 = (undefined3)((uint)puVar39 >> 8);
  cVar6 = (char)puVar39 + (byte)*puVar41;
  puVar23 = puVar14 + (uint)bVar44 * -2 + 1;
  out(*puVar14,(short)CONCAT31(uVar25,cVar6));
  puVar39 = (uint *)CONCAT31(uVar25,cVar6 + (byte)*puVar41);
  puVar14 = puVar23 + (uint)bVar44 * -2 + 1;
  out(*puVar23,(short)puVar39);
  pbVar10 = (byte *)0x0;
  puVar23 = puVar41;
code_r0x00402e81:
  puVar41 = puVar23;
  bVar27 = (char)pbVar10 - *pbVar10;
  iVar17 = CONCAT31((int3)((uint)pbVar10 >> 8),bVar27);
  *pbVar15 = *pbVar15 + (char)puVar39;
  pbVar22 = (byte *)(iVar17 * 2);
  *pbVar22 = *pbVar22 ^ bVar27;
  pbVar22 = (byte *)(int)(short)iVar17;
  *pbVar22 = *pbVar22 + bVar27;
  *(byte *)puVar41 = (byte)*puVar41 + (byte)puVar20;
  bVar7 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar27;
  *(byte **)(pbVar15 + -0x73) =
       (byte *)((int)puVar14 + (uint)CARRY1(bVar7,bVar27) + *(int *)(pbVar15 + -0x73));
  *pbVar22 = *pbVar22 + bVar27;
  bVar7 = (byte)puVar20 | (byte)*puVar39;
  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7);
  puVar23 = puVar14;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar22 = *pbVar22 + bVar27;
  pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar10 >> 8),bVar27 + 0x2d);
  puVar14[(int)puVar41 * 2] =
       (uint)((int)puVar39 + (uint)(0xd2 < bVar27) + puVar14[(int)puVar41 * 2]);
  pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
  do {
    uVar12 = *puVar14;
    bVar7 = (byte)pbVar10;
    *(byte *)puVar14 = (byte)*puVar14 + bVar7;
    if (!CARRY1((byte)uVar12,bVar7)) break;
    *pbVar10 = *pbVar10 + bVar7;
    bVar7 = bVar7 | pbVar10[0x400001a];
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar22 = *pbVar22 + (byte)pbVar22;
      uVar25 = (undefined3)((uint)pbVar22 >> 8);
      bVar7 = (byte)pbVar22 | pbVar22[0x400001b];
      pcVar37 = (char *)CONCAT31(uVar25,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar12 = *puVar39;
        *(byte *)puVar39 = (byte)*puVar39 + (byte)puVar20;
        *(char *)((int)pcVar37 * 2) =
             *(char *)((int)pcVar37 * 2) - CARRY1((byte)uVar12,(byte)puVar20);
        bVar45 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar22 = *pbVar22 + bVar7;
      puVar23 = puVar14;
code_r0x00402eb4:
      uVar25 = (undefined3)((uint)pbVar22 >> 8);
      bVar7 = (char)pbVar22 + 0x6f;
      pcVar37 = (char *)CONCAT31(uVar25,bVar7);
      *(char **)pcVar37 = pcStackY_44;
      uVar12 = *puVar39;
      *(byte *)puVar39 = (byte)*puVar39 + (char)puVar20;
      pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
      in_DS = uVar43;
      if ((byte)*puVar39 != 0 && SCARRY1((byte)uVar12,(char)puVar20) == (char)(byte)*puVar39 < '\0')
      {
        *pcVar37 = *pcVar37 + bVar7;
        bVar27 = (char)pbVar22 + 0x9c;
        pbVar22 = (byte *)CONCAT31(uVar25,bVar27);
        puVar23[(int)puVar41 * 2] =
             (uint)((int)puVar39 + (uint)(0xd2 < bVar7) + puVar23[(int)puVar41 * 2]);
        pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
        uVar12 = *puVar23;
        *(byte *)puVar23 = (byte)*puVar23 + bVar27;
        puVar14 = puVar23;
        if (CARRY1((byte)uVar12,bVar27)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar14 = puVar23 + (uint)bVar44 * -2 + 1;
      out(*puVar23,(short)puVar39);
    }
    cVar6 = (char)pcVar37;
    *pcVar37 = *pcVar37 + cVar6;
    uVar25 = (undefined3)((uint)pcVar37 >> 8);
    bVar7 = cVar6 + 0x6f;
    pcVar37 = (char *)CONCAT31(uVar25,bVar7);
    *(char **)pcVar37 = pcStackY_44;
    uVar12 = *puVar39;
    *(byte *)puVar39 = (byte)*puVar39 + (byte)puVar20;
    pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
    *(byte *)(puVar14 + 7) = ((byte)puVar14[7] - bVar38) - CARRY1((byte)uVar12,(byte)puVar20);
    *pcVar37 = *pcVar37 + bVar7;
    bVar27 = cVar6 + 0x9c;
    pcVar37 = (char *)CONCAT31(uVar25,bVar27);
    puVar14[(int)puVar41 * 2] =
         (uint)((int)puVar39 + (uint)(0xd2 < bVar7) + puVar14[(int)puVar41 * 2]);
    uVar12 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar27;
    if (!CARRY1((byte)uVar12,bVar27)) goto code_r0x00402e7e;
    *pcVar37 = *pcVar37 + bVar27;
    bVar27 = bVar27 | pcVar37[0x400001c];
    pbVar10 = (byte *)CONCAT31(uVar25,bVar27);
    in_SS = uVar43;
    if ((char)bVar27 < '\x01') goto code_r0x00402f16;
    *pbVar10 = *pbVar10 + bVar27;
    pcVar37 = (char *)CONCAT31(uVar25,bVar27 + 0x6f);
    while( true ) {
      *(char **)pcVar37 = pcStackY_44;
      uVar12 = *puVar39;
      *(byte *)puVar39 = (byte)*puVar39 + (byte)puVar20;
      *(uint *)((int)puVar14 + 0x1d) =
           (*(int *)((int)puVar14 + 0x1d) - (int)puVar41) - (uint)CARRY1((byte)uVar12,(byte)puVar20)
      ;
      bVar7 = (byte)pcVar37;
      *pcVar37 = *pcVar37 + bVar7;
      bVar27 = bVar7 + 0x2d;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar37 >> 8),bVar27);
      puVar14[(int)puVar41 * 2] =
           (uint)((int)puVar39 + (uint)(0xd2 < bVar7) + puVar14[(int)puVar41 * 2]);
      pcStackY_44 = (char *)CONCAT22((short)((uint)pcStackY_44 >> 0x10),uVar43);
      uVar12 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar27;
      if (!CARRY1((byte)uVar12,bVar27)) break;
      *pbVar10 = *pbVar10 + bVar27;
code_r0x00402f16:
      bVar7 = (byte)pbVar10 | pbVar10[0x400001d];
      puVar23 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
      pcVar37 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pcVar37;
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
        uVar25 = (undefined3)((uint)puVar23 >> 8);
        cVar6 = (char)puVar23 + 'o';
        puVar40 = (uint *)CONCAT31(uVar25,cVar6);
        *puVar40 = (uint)pcStackY_44;
        cVar9 = (char)puVar20;
        *(byte *)puVar39 = (byte)*puVar39 + cVar9;
        pcStackY_44 = (char *)CONCAT22(pcStackY_44._2_2_,uVar43);
        bVar7 = (byte)((uint)puVar39 >> 8);
        bVar45 = bVar7 < (byte)*puVar14;
        puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar14,(char)puVar39));
        if (bVar45) break;
        bVar45 = CARRY4((uint)puVar40,*puVar40);
        puVar23 = (uint *)((int)puVar40 + *puVar40);
        if (!SCARRY4((int)puVar40,*puVar40)) {
          bVar45 = CARRY4((uint)unaff_EBP,*puVar23);
          unaff_EBP = unaff_EBP + *puVar23;
        }
        *puVar23 = (*puVar23 - (int)puVar23) - (uint)bVar45;
        *(byte *)puVar39 = (byte)*puVar39 + cVar9;
        puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                   CONCAT11((char)((uint)puVar20 >> 8) + (byte)*puVar39,
                                            cVar9 - (byte)*puVar39));
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
code_r0x00402f3b:
        cVar9 = (char)puVar39;
        *pbVar15 = *pbVar15 + cVar9;
        bVar7 = (byte)puVar23;
        *(byte *)((int)puVar23 * 2) = *(byte *)((int)puVar23 * 2) ^ bVar7;
        *(byte *)puVar23 = (byte)*puVar23 + bVar7;
        *(byte *)puVar23 = (byte)*puVar23 + cVar9;
        uVar12 = *puVar23;
        *(byte *)puVar23 = (byte)*puVar23 + bVar7;
        *puVar39 = (uint)((int)puVar23 + (uint)CARRY1((byte)uVar12,bVar7) + *puVar39);
        pcVar37 = (char *)((uint)puVar23 | *puVar41);
        uVar25 = (undefined3)((uint)pcVar37 >> 8);
        cVar6 = (char)pcVar37 + *pcVar37;
        pcVar37 = (char *)CONCAT31(uVar25,cVar6);
        *pcVar37 = *pcVar37 + cVar6;
        cVar6 = cVar6 + *pcVar37;
        piVar21 = (int *)CONCAT31(uVar25,cVar6);
        *(char *)piVar21 = (char)*piVar21 + cVar6;
        iVar17 = LocalDescriptorTableRegister();
        *piVar21 = iVar17;
        bVar7 = *pbVar15;
        bVar30 = (byte)((uint)puVar20 >> 8);
        *pbVar15 = *pbVar15 + bVar30;
        iVar17 = *piVar21;
        uVar33 = (undefined2)((uint)puVar20 >> 0x10);
        bVar29 = (byte)puVar20;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        puVar20 = puVar14 + (uint)bVar44 * -2 + 1;
        out(*puVar14,(short)puVar39);
        *(byte *)puVar20 = (byte)*puVar20 + cVar6;
        bVar27 = *pbVar15;
        *(byte *)puVar39 = (byte)*puVar39 - bVar38;
        *(byte *)puVar20 = (byte)*puVar20 + cVar6;
        puVar40 = puVar20 + (uint)bVar44 * -2 + 1;
        out(*puVar20,(short)puVar39);
        *(byte *)puVar40 = (byte)*puVar40 + cVar6;
        bVar35 = *pbVar15;
        *(uint *)((int)puVar39 + -0x23) = *(uint *)((int)puVar39 + -0x23) & (uint)puVar40;
        puVar24 = (ushort *)((int)piVar21 + *piVar21);
        if (!SCARRY4((int)piVar21,*piVar21)) {
          *puVar24 = in_DS;
        }
        *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
        uVar34 = CONCAT11((char)((uint)puVar39 >> 8) + *(byte *)((int)puVar39 + -0x15),cVar9);
        puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),uVar34);
        puVar23 = (uint *)((int)puVar24 + *(int *)puVar24);
        if (!SCARRY4((int)puVar24,*(int *)puVar24)) {
          *(ushort *)puVar23 = in_DS;
        }
        cVar6 = (char)puVar23;
        *(byte *)puVar23 = (byte)*puVar23 + cVar6;
        cVar31 = ((bVar30 - (char)iVar17) - CARRY1(bVar7,bVar30) | bVar27 | bVar35) + (byte)*puVar23
        ;
        puVar20 = (uint *)CONCAT22(uVar33,CONCAT11(cVar31,bVar29));
        uVar12 = *puVar39;
        *(byte *)puVar39 = (byte)*puVar39 + bVar29;
        if (CARRY1((byte)uVar12,bVar29)) {
          *(byte *)puVar23 = (byte)*puVar23 + cVar6;
          bVar7 = *(byte *)((int)puVar39 + 6);
          *(byte *)puVar39 = (byte)*puVar39 + bVar29;
          bVar27 = (cVar31 - (byte)*puVar40) + cRam14730307;
          *(byte *)puVar23 = (byte)*puVar23 + cVar6;
          bVar7 = bVar38 | bVar7 | *(byte *)((int)puVar39 + 0x2a);
          uVar12 = *puVar23;
          pbVar10 = (byte *)((int)puVar23 + (uint)CARRY1(bVar27,(byte)*puVar23) + *puVar23);
          *(byte *)puVar39 = (byte)*puVar39 + bVar29;
          cVar6 = cVar8 - (byte)*puVar40;
          cVar8 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar7,cVar8)) >> 8),
                                             cVar6) + 0x1e);
          *pbVar10 = *pbVar10 + (char)pbVar10;
          uVar25 = (undefined3)((uint)pbVar10 >> 8);
          bVar7 = (char)pbVar10 + 0x2aU & (byte)*puVar39;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar37 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar8,cVar6)) + 0x1f);
          *pcVar37 = *pcVar37 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar37 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar8,cVar6)) + 0x20);
          *pcVar37 = *pcVar37 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar37 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar8,cVar6)) + 0x21);
          *pcVar37 = *pcVar37 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar37 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar8,cVar6)) + 0x22);
          *pcVar37 = *pcVar37 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar37 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          bVar27 = bVar27 + (byte)uVar12 + *pcVar37;
          uVar26 = CONCAT22(uVar33,CONCAT11(bVar27,bVar29));
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar8,cVar6)) + 0x25);
          *pcVar37 = *pcVar37 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar37 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          pcVar11 = (char *)CONCAT22(uVar32,CONCAT11(cVar8 + *(char *)(CONCAT22(uVar32,CONCAT11(
                                                  cVar8,cVar6)) + 0x26),cVar6));
          *pcVar37 = *pcVar37 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar39;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          cVar6 = bVar7 + 0x2a;
          pcVar37 = (char *)CONCAT31(uVar25,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar37 = *pcVar37 + cVar6;
            pbVar10 = (byte *)(CONCAT31(uVar25,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar10;
            bVar35 = (byte)pbVar10;
            *pbVar10 = *pbVar10 + bVar35;
            uVar25 = (undefined3)((uint)pbVar10 >> 8);
            if (!CARRY1(bVar7,bVar35)) {
              if (!SCARRY1(bVar35,'\0')) {
                *pbVar10 = *pbVar10 + bVar35;
                uVar26 = CONCAT22(uVar33,CONCAT11(bVar27 | (byte)*puVar39,bVar29));
                bVar35 = bVar35 & (byte)*puVar39;
                *(char *)CONCAT31(uVar25,bVar35) = *(char *)CONCAT31(uVar25,bVar35) + bVar35;
                pcVar37 = (char *)CONCAT31(uVar25,bVar35 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar37 = (char *)CONCAT31(uVar25,bVar35 + *pcVar11);
              if (SCARRY1(bVar35,*pcVar11) != (char)(bVar35 + *pcVar11) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar35 + *pcVar11;
            pbVar10 = (byte *)CONCAT31(uVar25,bVar7);
            if (SCARRY1(bVar35,*pcVar11) == (char)bVar7 < '\0') {
              pcVar37 = (char *)CONCAT22(uVar33,CONCAT11(bVar27 | (byte)*puVar39,bVar29));
              *pcVar11 = *pcVar11 + cVar9;
              *(byte *)puVar39 = (byte)*puVar39 ^ bVar7;
              *(char *)((int)pbVar10 * 2) = *(char *)((int)pbVar10 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar37 = *pcVar37 + (char)pcVar37;
            uVar25 = (undefined3)((uint)pcVar37 >> 8);
            bVar7 = (char)pcVar37 + 0x2aU & (byte)*puVar39;
            *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
            pcVar37 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
            *pcVar37 = *pcVar37 + bVar7 + 0x2a;
            pcVar37 = (char *)CONCAT31(uVar25,bVar7 + 0x54 & (byte)*puVar39);
code_r0x00403072:
            cVar6 = (char)pcVar37;
            *pcVar37 = *pcVar37 + cVar6;
            uVar25 = (undefined3)((uint)pcVar37 >> 8);
            pcVar37 = (char *)CONCAT31(uVar25,cVar6 + '*');
            *pcVar37 = *pcVar37 + cVar6 + '*';
            bVar7 = cVar6 + 0x54U & (byte)*puVar39;
            *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,in_ES);
            uVar26 = CONCAT22((short)((uint)uVar26 >> 0x10),
                              CONCAT11((char)((uint)uVar26 >> 8) +
                                       *(char *)CONCAT31(uVar25,bVar7 + 0x2a),(char)uVar26));
            *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar9;
            pcVar37 = pcStackY_7c;
code_r0x0040309a:
            cVar6 = (char)pcVar37;
            *pcVar37 = *pcVar37 + cVar6;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,uVar43);
            *pcVar37 = *pcVar37 + cVar6;
            pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar37 >> 8),cVar6 + 0x2aU & (byte)*puVar39);
          }
          cVar6 = (char)pbVar10;
          *pbVar10 = *pbVar10 + cVar6;
          uVar25 = (undefined3)((uint)pbVar10 >> 8);
          cVar8 = cVar6 + '*';
          pcVar37 = (char *)CONCAT31(uVar25,cVar8);
          *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar9;
          *pcVar37 = *pcVar37 + cVar8;
          cVar31 = (char)pcStackY_7c - (byte)*puVar40;
          pcVar11 = (char *)CONCAT22((short)((uint)pcStackY_7c >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_7c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_7c >> 8),
                                                                 cVar31) + 0x34),cVar31));
          *pcVar37 = *pcVar37 + cVar8;
          bVar7 = cVar6 + 0x54U & (byte)*puVar39;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pbVar10 = (byte *)CONCAT31(uVar25,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar26 >> 8);
          pcVar37 = (char *)CONCAT22((short)((uint)uVar26 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar10,(char)uVar26));
          pbVar10 = pbVar10 + (uint)CARRY1(bVar7,*pbVar10) + *(int *)pbVar10;
          *(byte *)puVar39 = (byte)*puVar39 + (char)uVar26;
          uVar25 = (undefined3)((uint)pbVar10 >> 8);
          cVar6 = (byte)pbVar10 - *pbVar10;
          piVar21 = (int *)CONCAT31(uVar25,cVar6);
          puVar40 = (uint *)((int)puVar40 + (uint)((byte)pbVar10 < *pbVar10) + *piVar21);
          cVar6 = cVar6 + (char)*piVar21;
          pbVar10 = (byte *)CONCAT31(uVar25,cVar6);
          *pbVar10 = *pbVar10 + cVar6;
code_r0x004030df:
          *pcVar37 = *pcVar37 + cVar9;
          bVar7 = *pbVar10;
          bVar27 = (byte)pbVar10;
          *pbVar10 = *pbVar10 + bVar27;
          *(byte **)(pcVar11 + -0x41) =
               (byte *)((int)puVar40 + (uint)CARRY1(bVar7,bVar27) + *(int *)(pcVar11 + -0x41));
          *pbVar10 = *pbVar10 + bVar27;
          uVar25 = (undefined3)((uint)pbVar10 >> 8);
          bVar27 = bVar27 | (byte)*puVar40;
          *(char *)CONCAT31(uVar25,bVar27) = *(char *)CONCAT31(uVar25,bVar27) + bVar27;
          pcVar37 = (char *)CONCAT31(uVar25,bVar27 + 0x7b);
          *pcVar37 = *pcVar37 + bVar27 + 0x7b;
          pbVar10 = (byte *)((int)puVar40 + CONCAT31(uVar25,bVar27 - 8) + -1);
          *pbVar10 = *pbVar10 + (bVar27 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar14 = puVar40 + (uint)bVar44 * -2 + 1;
        out(*puVar40,uVar34);
        pcVar37 = unaff_EBP + 1;
        pcStackY_44 = unaff_EBP;
      }
      bVar7 = cVar6 - bVar45;
      pbVar10 = (byte *)((int)puVar14 + (int)puVar41 * 2);
      bVar45 = CARRY1(*pbVar10,bVar7);
      *pbVar10 = *pbVar10 + bVar7;
code_r0x00402ef9:
      pcVar37 = (char *)CONCAT31(uVar25,bVar7 - bVar45);
      pbVar10 = (byte *)((int)puVar41 + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10 + (bVar7 - bVar45);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar39;
  puVar23 = puVar39 + 0x2828000;
  bVar7 = (byte)puVar20;
  bVar45 = (byte)*puVar23 < bVar7;
  *(byte *)puVar23 = (byte)*puVar23 - bVar7;
  bVar7 = (byte)pbVar10 + *pbVar10;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7 + bVar45);
  puVar23 = puVar41;
  uVar42 = in_ES;
  if (CARRY1((byte)pbVar10,*pbVar10) || CARRY1(bVar7,bVar45)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar37 = *pcVar37 + bVar27;
  uVar42 = in_ES;
  in_SS = uVar43;
  goto code_r0x00402e6e;
}


