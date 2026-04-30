/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040282f
 * Raw Name    : get_PageIndex
 * Demangled   : get_PageIndex
 * Prototype   : int get_PageIndex(undefined4 param_1, uint * param_2)
 * Local Vars  : pcStackY_84, pcStackY_4c, puStackY_38, puStackY_34, uStackY_30, pcStack_10, uVar1, iVar2, uVar3, uVar4, uVar5, uVar6, bVar7, cVar8, cVar9, in_EAX, pbVar10, pcVar11, uVar12, uVar13, puVar14, pbVar15, piVar16, iVar17, pcVar18, pcVar19, puVar20, piVar21, pbVar22, puVar23, uVar24, extraout_ECX, extraout_ECX_00, uVar25, bVar26, cVar27, bVar28, bVar29, cVar30, uVar31, uVar32, uVar33, bVar34, uVar35, unaff_EBX, pcVar36, puVar37, cVar38, bVar39, unaff_EBP, unaff_ESI, puVar40, unaff_EDI, puVar41, param_1, puVar42, in_ES, param_2, uVar43, uVar44, in_CS, in_SS, in_DS, in_GS_OFFSET, bVar45, in_AF, in_TF, in_IF, bVar46, bVar47, in_NT, uVar48
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

int __fastcall get_PageIndex(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined6 uVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  char *in_EAX;
  undefined3 uVar24;
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
  undefined1 uVar35;
  char cVar38;
  byte bVar39;
  int unaff_EBX;
  char *pcVar36;
  uint *puVar37;
  char *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar40;
  int unaff_EDI;
  uint *puVar41;
  uint *puVar42;
  ushort in_ES;
  ushort uVar43;
  ushort uVar44;
  ushort in_CS;
  ushort in_SS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar45;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar46;
  bool bVar47;
  byte in_NT;
  undefined8 uVar48;
  char *pcStackY_84;
  char *pcStackY_4c;
  uint *puStackY_38;
  uint *puStackY_34;
  undefined4 uStackY_30;
  char *pcStack_10;
  
  bVar46 = false;
                    /* .NET CLR Managed Code */
  uVar31 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar35 = (undefined1)unaff_EBX;
  cVar38 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0xf);
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar24 = (undefined3)((uint)in_EAX >> 8);
  bVar7 = (char)in_EAX + 0x2aU & (byte)*param_2;
  iVar17 = *(int *)(unaff_EBP + 0xf);
  *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
  pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
  cVar38 = cVar38 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar38,uVar35)) + 0x10);
  *pcVar36 = *pcVar36 + bVar7 + 0x2a;
  bVar7 = bVar7 + 0x54 & (byte)*param_2;
  iVar2 = *(int *)(unaff_EBP + 0x10);
  *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
  pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
  puVar37 = (uint *)CONCAT22(uVar31,CONCAT11(cVar38 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar38,
                                                  uVar35)) + 0x11),uVar35));
  *pcVar36 = *pcVar36 + bVar7 + 0x2a;
  bVar7 = bVar7 + 0x54 & (byte)*param_2;
  puVar41 = (uint *)(unaff_EDI + iVar17 + iVar2 + *(int *)(unaff_EBP + 0x11));
  *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
  pbVar10 = (byte *)CONCAT31(uVar24,bVar7 + 0x2a);
  bVar7 = (byte)((uint)param_1 >> 8);
  puVar20 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar7 + *pbVar10,(char)param_1)
                            );
  pbVar10 = pbVar10 + (uint)CARRY1(bVar7,*pbVar10) + *(int *)pbVar10;
  do {
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    cVar38 = (char)puVar37 - (byte)*unaff_ESI;
    iVar17 = CONCAT22((short)((uint)puVar37 >> 0x10),
                      CONCAT11((char)((uint)puVar37 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),cVar38) + 0x12),cVar38)
                     );
    *pbVar10 = *pbVar10 + (char)pbVar10;
    uVar24 = (undefined3)((uint)pbVar10 >> 8);
    bVar7 = (char)pbVar10 + 0x2aU & (byte)*param_2;
    pcVar36 = (char *)CONCAT31(uVar24,bVar7);
    puVar41 = (uint *)((int)puVar41 + *(int *)(unaff_EBP + 0x12));
    *pcVar36 = *pcVar36 + bVar7;
    puVar14 = (uint *)CONCAT31(uVar24,bVar7 + 0x2a);
    pcStack_10 = (char *)(uint)in_DS;
get_Value:
    cVar38 = *(char *)(iVar17 + 0x13);
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
    uVar24 = (undefined3)((uint)puVar14 >> 8);
    bVar7 = (char)puVar14 + 0x2aU & (byte)*param_2;
    pcVar36 = (char *)CONCAT31(uVar24,bVar7);
    puVar41 = (uint *)((int)puVar41 + *(int *)(unaff_EBP + 0x13));
    *pcVar36 = *pcVar36 + bVar7;
    pbVar10 = (byte *)CONCAT31(uVar24,bVar7 + 0x2a);
    bVar7 = (byte)((uint)puVar20 >> 8);
    bVar26 = bVar7 + *pbVar10;
    pbVar10 = pbVar10 + (uint)CARRY1(bVar7,*pbVar10) + *(int *)pbVar10;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    puVar37 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar17 >> 0x10),
                                               CONCAT11((char)((uint)iVar17 >> 8) + cVar38,
                                                        (char)iVar17)) >> 8),
                               (char)iVar17 - (byte)*unaff_ESI);
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11(bVar26 + *pbVar10,(char)puVar20));
    pbVar10 = pbVar10 + (uint)CARRY1(bVar26,*pbVar10) + *(int *)pbVar10;
    uVar43 = in_DS;
code_r0x00402898:
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    bVar7 = (byte)param_2;
    uVar31 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar7);
    pbVar15 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar31);
    pcVar36 = (char *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((char)((uint)puVar37 >> 8) + (byte)puVar37[-0x19],
                                        (char)puVar37));
    *pbVar10 = *pbVar10 + (char)pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + '\x03');
    puVar37 = unaff_ESI;
    do {
      unaff_ESI = puVar37 + 1;
      out(*puVar37,uVar31);
      pcVar36 = pcVar36 + -1;
      bVar26 = (byte)pbVar10;
      *pbVar10 = *pbVar10 + bVar26;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | *pbVar15,(char)puVar20));
      *pbVar10 = *pbVar10 + bVar26;
      *pcVar36 = *pcVar36 + bVar7;
      *(byte *)((int)pbVar10 * 2) = *(byte *)((int)pbVar10 * 2) ^ bVar26;
      *pbVar10 = *pbVar10 + bVar26;
      *pbVar10 = *pbVar10 | bVar26;
      bVar45 = CARRY1((byte)*puVar20,bVar7);
      *(byte *)puVar20 = (byte)*puVar20 + bVar7;
      cVar38 = bVar26 + 10 + bVar45;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar38);
      puVar37 = unaff_ESI;
    } while (bVar26 < 0xf6 && !CARRY1(bVar26 + 10,bVar45));
    *pbVar10 = *pbVar10 + cVar38;
    pcVar11 = (char *)((uint)pbVar10 | *puVar41);
    puVar37 = (uint *)CONCAT22((short)((uint)pcVar36 >> 0x10),
                               CONCAT11((char)((uint)pcVar36 >> 8) + unaff_EBP[-100],(char)pcVar36))
    ;
    *pcVar11 = *pcVar11 + (char)pcVar11;
    bVar7 = (char)pcVar11 + 7;
    uVar48 = CONCAT44(pbVar15,CONCAT31((int3)((uint)pcVar11 >> 8),bVar7));
code_r0x004028c8:
    param_2 = (uint *)((ulonglong)uVar48 >> 0x20);
    pbVar10 = (byte *)uVar48;
  } while ((POPCOUNT(bVar7) & 1U) != 0);
  *pbVar10 = *pbVar10 + (char)uVar48;
  puVar14 = (uint *)CONCAT31((int3)((ulonglong)uVar48 >> 8),(char)uVar48 + '-');
  unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
  bVar45 = CARRY4(*puVar14,(uint)puVar14);
  uVar12 = *puVar14;
  *puVar14 = (uint)(*puVar14 + (int)puVar14);
  if (SCARRY4(uVar12,(int)puVar14)) {
    bVar45 = CARRY4(*puVar14,(uint)puVar14);
    bVar47 = SCARRY4(*puVar14,(int)puVar14);
    *puVar14 = (uint)(*puVar14 + (int)puVar14);
    bVar7 = POPCOUNT(*puVar14 & 0xff);
    if (bVar47) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + bVar45);
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    bVar45 = (POPCOUNT((byte)*param_2) & 1U) == 0;
    if (bVar45) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar45) {
      iVar17 = CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 - (byte)*unaff_ESI);
      goto get_Value;
    }
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'r');
    pcStack_10 = unaff_EBP;
code_r0x004028e2:
    uVar12 = *puVar14;
    *puVar14 = (uint)(*puVar14 + (int)puVar14);
    if (SCARRY4(uVar12,(int)puVar14)) {
      if (*puVar14 == 0 || SCARRY4(uVar12,(int)puVar14) != (int)*puVar14 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar37 = (uint *)((int)puVar37 + -1);
    cVar38 = (char)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + cVar38;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11((byte)((uint)puVar20 >> 8) |
                                        *(byte *)((int)puVar20 + 0x16d7207),(char)puVar20));
    pbVar10 = (byte *)((int)puVar14 + 0x7d);
    bVar7 = *pbVar10;
    bVar34 = (byte)((uint)param_2 >> 8);
    bVar26 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar34;
    uVar43 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY1(bVar26,bVar34) * 0x800 |
             (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
             (ushort)((char)*pbVar10 < '\0') * 0x80 | (ushort)(*pbVar10 == 0) * 0x40 |
             (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(*pbVar10) & 1U) == 0) * 4 |
             (ushort)CARRY1(bVar7,bVar34);
    *(byte *)puVar14 = (byte)*puVar14 + cVar38;
    pbVar10 = (byte *)(CONCAT31((int3)((uint)puVar14 >> 8),cVar38 + '+') ^ *puVar41);
    if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    puVar14 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7 + 0x72);
    if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
      uVar44 = in_CS;
      if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar14 + 0x6f) = *(byte *)((int)puVar14 + 0x6f) + bVar34;
    }
code_r0x00402905:
    in_ES = uVar43;
    uVar48 = CONCAT44(param_2,puVar14);
    puVar37 = (uint *)((int)puVar37 + -1);
    cVar38 = (char)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + cVar38;
    bVar7 = (byte)((uint)puVar20 >> 8) | (byte)*puVar20;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,(char)puVar20));
    if ((char)bVar7 < '\x01') {
      *(byte *)puVar14 = (byte)*puVar14 + cVar38;
      puVar41 = (uint *)((int)puVar41 - *(int *)(unaff_EBP + -100));
      uVar43 = in_ES;
      goto code_r0x00402929;
    }
    *(byte *)puVar14 = (byte)*puVar14 + cVar38;
    uVar43 = 0x291c;
    uVar48 = func_0x7346291c();
    *(char *)uVar48 = *(char *)uVar48 + (char)uVar48;
    puVar20 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                               (byte)extraout_ECX | *(byte *)((ulonglong)uVar48 >> 0x20));
    puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,in_ES);
    uStackY_30 = puVar37;
    while( true ) {
      pcVar36 = (char *)((int)uVar48 * 2);
      *pcVar36 = *pcVar36 - (char)puVar20;
      uVar12 = *puVar37;
      cVar38 = (char)((uint)puVar20 >> 8);
      *(byte *)puVar37 = (byte)*puVar37 + cVar38;
      if (SCARRY1((byte)uVar12,cVar38) == (char)(byte)*puVar37 < '\0') {
        pbVar10 = (byte *)((int)puVar41 + (int)uVar48);
        *pbVar10 = *pbVar10 + (char)uVar48;
        bVar7 = *pbVar10;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      param_2 = (uint *)((ulonglong)uVar48 >> 0x20);
      cVar38 = (char)uVar48;
      *(char *)uVar48 = *(char *)uVar48 + cVar38;
      uVar24 = (undefined3)((ulonglong)uVar48 >> 8);
      bVar7 = cVar38 + 7;
      puVar14 = (uint *)CONCAT31(uVar24,bVar7);
      bVar26 = (byte)((ulonglong)uVar48 >> 0x28);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *(byte *)puVar14 = (byte)*puVar14 + bVar7;
      pcVar36 = (char *)CONCAT31(uVar24,cVar38 + '3');
      uVar31 = (undefined2)((uint)puVar37 >> 0x10);
      uVar35 = SUB41(puVar37,0);
      bVar7 = (char)((uint)puVar37 >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar7);
      puVar37 = (uint *)CONCAT22(uVar31,CONCAT11(bVar7,uVar35));
      *pcVar36 = *pcVar36 + cVar38 + '3';
      cVar8 = cVar38 + ':';
      puVar14 = (uint *)CONCAT31(uVar24,cVar8);
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        bVar7 = bVar7 | *(byte *)((int)param_2 + 7);
        puVar37 = (uint *)CONCAT22(uVar31,CONCAT11(bVar7,uVar35));
        bVar45 = (POPCOUNT(bVar7) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar14 = (byte)*puVar14 + cVar8;
      puVar14 = (uint *)(CONCAT31(uVar24,cVar38 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar10 = (byte *)((int)puVar14 + 0x72);
      bVar47 = SCARRY1(*pbVar10,bVar26);
      *pbVar10 = *pbVar10 + bVar26;
      bVar7 = POPCOUNT(*pbVar10);
code_r0x0040294c:
      if ((bVar7 & 1) == 0) {
        *(byte *)((int)puVar14 + 0x72) = *(byte *)((int)puVar14 + 0x72) + (char)((uint)param_2 >> 8)
        ;
      }
      else if (bVar47) {
        unaff_EBP = *(char **)unaff_EBP;
        cVar38 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (char *)0x7e700001;
      puStackY_38 = (uint *)CONCAT22(puStackY_38._2_2_,in_SS);
code_r0x00402957:
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
      cVar38 = (char)puVar14 + '(';
      puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),cVar38);
      *(byte *)puVar14 = (byte)*puVar14 + cVar38;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar14,(char)puVar20)
                                );
      *(byte *)puVar14 = (byte)*puVar14 + cVar38;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar37[0x18],
                                          (char)param_2));
      unaff_ESI = puStackY_38;
      puVar41 = puStackY_34;
code_r0x00402966:
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
      bVar7 = (byte)((uint)puVar37 >> 8) | *(byte *)((int)param_2 + 7);
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar7,(char)puVar37));
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
      puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + '~');
      uVar5 = in_SS;
code_r0x00402972:
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
      uVar44 = in_CS;
      uVar43 = uVar5;
code_r0x00402974:
      bVar7 = 0xe9 < (byte)puVar14;
      in_CS = 0x2d0a;
      uVar48 = func_0x00006128(uVar44);
      puVar20 = (uint *)uVar48;
      piVar21 = (int *)((int)((ulonglong)uVar48 >> 0x20) + -0x3d);
      *piVar21 = (int)((int)unaff_ESI + (uint)bVar7 + *piVar21);
      bVar45 = SCARRY4(*puVar20,(int)puVar20);
      *puVar20 = *puVar20 + (int)puVar20;
      uVar12 = *puVar20;
      puVar20 = extraout_ECX_00;
code_r0x00402982:
      bVar7 = POPCOUNT(uVar12 & 0xff);
      if (bVar45) {
        *(char *)uVar48 = *(char *)uVar48 + (char)uVar48;
        puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                   CONCAT11((byte)((uint)puVar20 >> 8) |
                                            *(byte *)((ulonglong)uVar48 >> 0x20),(char)puVar20));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar36 = (char *)((ulonglong)uVar48 >> 0x20);
      if ((bVar7 & 1) == 0) {
        *(char *)uVar48 = *(char *)uVar48 + (char)uVar48;
        *pcVar36 = *pcVar36 + (char)puVar20;
        uVar48 = CONCAT44(CONCAT22((short)((ulonglong)uVar48 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar48 >> 0x28) - pcVar36[0x1f],
                                            (char)((ulonglong)uVar48 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar48 >> 8),(char)uVar48 + '('));
code_r0x00402991:
        param_2 = (uint *)((ulonglong)uVar48 >> 0x20);
        pbVar10 = (byte *)uVar48;
        bVar7 = (byte)uVar48;
        bVar45 = CARRY1(bVar7,*pbVar10);
        puVar14 = (uint *)CONCAT31((int3)((ulonglong)uVar48 >> 8),bVar7 + *pbVar10);
        cVar38 = bVar7 + *pbVar10;
        if (SCARRY1(bVar7,*pbVar10)) goto code_r0x004029c4;
code_r0x00402995:
        param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11(((char)((uint)param_2 >> 8) -
                                            *(byte *)((int)param_2 + 0x6b)) - bVar45,(char)param_2))
        ;
        bVar7 = (byte)puVar14;
        bVar45 = CARRY1(bVar7,(byte)*puVar14);
        bVar47 = SCARRY1(bVar7,(byte)*puVar14);
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7 + (byte)*puVar14);
        do {
          if (!bVar47) {
            unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar45 + *puVar14);
            pbVar10 = (byte *)((int)puVar14 + *puVar14);
            bVar26 = (byte)pbVar10;
            *pbVar10 = *pbVar10 + bVar26;
            *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
            bVar7 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar26;
            *puVar41 = (uint)((int)puVar37 + (uint)CARRY1(bVar7,bVar26) + *puVar41);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar20;
            uVar24 = (undefined3)((uint)pbVar10 >> 8);
            bVar26 = bVar26 | (byte)*unaff_ESI;
            puVar14 = (uint *)CONCAT31(uVar24,bVar26);
            uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_SS);
            uVar12 = *puVar14;
            uVar1 = *puVar14;
            *puVar14 = (uint)(*puVar14 + (int)puVar14);
            if (SCARRY4(uVar1,(int)puVar14)) {
              *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)puVar37;
              *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
              *(byte *)puVar41 = (byte)*puVar41 - (char)puVar37;
            }
            else {
              puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,in_ES);
              in_SS = in_ES;
              uVar5 = in_ES;
              if (CARRY4(uVar12,(uint)puVar14)) goto code_r0x00402972;
              bVar45 = CARRY1(bVar26,(byte)*puVar14);
              bVar47 = SCARRY1(bVar26,(byte)*puVar14);
              puVar14 = (uint *)CONCAT31(uVar24,bVar26 + (byte)*puVar14);
code_r0x004029be:
              if (!bVar47) {
                puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,in_ES);
                *(byte *)((int)param_2 + -0x37) =
                     (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar45;
                cVar38 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar38;
                bVar7 = (byte)puVar14;
                bVar45 = CARRY1(bVar7,(byte)*puVar14);
                bVar47 = SCARRY1(bVar7,(byte)*puVar14);
                puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7 + (byte)*puVar14);
                goto code_r0x004029c6;
              }
            }
            bVar7 = (byte)puVar20;
            bVar45 = CARRY1((byte)*param_2,bVar7);
            bVar47 = SCARRY1((byte)*param_2,bVar7);
            *(byte *)param_2 = (byte)*param_2 + bVar7;
            if (bVar45) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar47) {
            in_ES = (ushort)pcStack_10;
            goto code_r0x00402966;
          }
          *(uint *)((int)param_2 + -0x23) =
               (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar45;
          uVar12 = *puVar14;
          bVar26 = (byte)puVar14;
          uVar1 = *puVar14;
          uVar24 = (undefined3)((uint)puVar14 >> 8);
          bVar7 = bVar26 + (byte)*puVar14;
          puVar14 = (uint *)CONCAT31(uVar24,bVar7);
          uVar5 = in_ES;
          if (SCARRY1(bVar26,(byte)uVar1)) goto code_r0x00402972;
          cVar38 = (char)param_2;
          bVar34 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                   CARRY1(bVar26,(byte)uVar12);
          param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar34,cVar38));
          puVar40 = (uint *)CONCAT31(uVar24,bVar7 + (byte)*puVar14);
          bVar26 = (byte)puVar20;
          uVar43 = in_ES;
          if (SCARRY1(bVar7,(byte)*puVar14)) {
            *(byte *)param_2 = (byte)*param_2 + bVar26;
            uVar48 = CONCAT44(param_2,(int)puVar40 + -0x1c37211);
            pcVar36 = (char *)((int)puVar40 + -0x1c3720a);
            *pcVar36 = *pcVar36 + bVar34;
            bVar7 = POPCOUNT(*pcVar36);
            goto code_r0x00402984;
          }
          unaff_ESI = (uint *)((int)unaff_ESI +
                              (-(uint)CARRY1(bVar7,(byte)*puVar14) - *(int *)((int)param_2 + 5)));
          bVar45 = SCARRY4((int)puVar40,*puVar40);
          uVar12 = (int)puVar40 + *puVar40;
          uVar48 = CONCAT44(param_2,uVar12);
          if (bVar45) goto code_r0x00402982;
          bVar7 = (byte)uVar12 + 0x8e;
          uVar13 = CONCAT31((int3)(uVar12 >> 8),bVar7 - CARRY4((uint)puVar40,*puVar40));
          *puVar37 = (*puVar37 - uVar13) -
                     (uint)((byte)uVar12 < 0x72 || bVar7 < CARRY4((uint)puVar40,*puVar40));
          pbVar10 = (byte *)(uVar13 - 0x5e);
          bVar7 = *pbVar10;
          *pbVar10 = *pbVar10 + bVar34;
          uVar12 = (uint)CARRY1(bVar7,bVar34);
          uVar1 = uVar13 - 0x32d72;
          puVar14 = (uint *)(uVar1 - uVar12);
          if (SBORROW4(uVar13,0x32d72) != SBORROW4(uVar1,uVar12)) goto code_r0x00402992;
          uVar44 = in_DS;
          if (uVar13 < 0x32d72 || uVar1 < uVar12) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar14 >> 8);
            *(byte *)param_2 = (byte)*param_2 + bVar26;
            puVar40 = unaff_ESI + 1;
            out(*unaff_ESI,CONCAT11(bVar34,cVar38));
            *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
            goto code_r0x00402a3e;
          }
          bVar45 = CARRY4((uint)puVar14,*puVar14);
          bVar47 = SCARRY4((int)puVar14,*puVar14);
          puVar14 = (uint *)((int)puVar14 + *puVar14);
          if (!bVar47) {
            uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_ES);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar45;
            bVar7 = (byte)puVar14;
            *(byte *)((int)param_2 + (int)unaff_EBP) =
                 *(byte *)((int)param_2 + (int)unaff_EBP) + bVar7;
            *(byte *)puVar37 = (byte)*puVar37 + cVar38;
            *(byte *)puVar37 = (byte)*puVar37 ^ bVar7;
            bVar28 = (byte)((uint)puVar20 >> 8);
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar28;
            *(byte *)puVar14 = (byte)*puVar14 + bVar7;
            pbVar15 = (byte *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7 | (byte)*puVar14);
            *(byte *)puVar20 = (byte)*puVar20 + cVar38;
            bVar39 = *pbVar15;
            uVar31 = (undefined2)((uint)puVar20 >> 0x10);
            puVar20 = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar39,bVar26));
            pbVar15 = pbVar15 + (uint)CARRY1(bVar28,*pbVar15) + *(int *)pbVar15;
            *(byte *)param_2 = (byte)*param_2 + bVar26;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar10 = pbVar15 + 0x73;
            bVar7 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar34;
            uVar24 = (undefined3)((uint)pbVar15 >> 8);
            bVar7 = (char)pbVar15 + CARRY1(bVar7,bVar34);
            pcVar36 = (char *)CONCAT31(uVar24,bVar7);
            *(byte *)param_2 = (byte)*param_2 + bVar26;
            if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
              in_SS = in_ES;
            }
            puVar42 = (uint *)((int)puVar41 + *(int *)(unaff_EBP + 0x17));
            *pcVar36 = *pcVar36 + bVar7;
            cVar38 = bVar7 + 2;
            puVar14 = (uint *)CONCAT31(uVar24,cVar38);
            if (bVar7 < 0xfe) {
              *puVar14 = (uint)(*puVar14 + (int)puVar14);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar14 = (byte)*puVar14 + cVar38;
            uVar12 = *param_2;
            puVar40 = (uint *)((int)unaff_ESI + puVar37[0x19]);
            *(byte *)puVar14 = (byte)*puVar14 + cVar38;
            puVar20 = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar39 | (byte)*puVar14,
                                                       bVar26 | (byte)uVar12));
            puVar41 = puVar42;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar7;
    pbVar10 = (byte *)((int)puVar14 + 0x73);
    bVar45 = CARRY1(*pbVar10,bVar26);
    *pbVar10 = *pbVar10 + bVar26;
  } while( true );
code_r0x00402992:
  pbVar10 = (byte *)((int)puVar14 + 0x2a);
  bVar45 = CARRY1(*pbVar10,bVar34);
  *pbVar10 = *pbVar10 + bVar34;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar14) = *(byte *)(in_GS_OFFSET + (int)puVar14) + (char)puVar14;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | *(byte *)((int)puVar41 + 0x66),
                                      (char)puVar20));
  *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
code_r0x00402a3e:
  uVar24 = (undefined3)((uint)puVar14 >> 8);
  bVar7 = (byte)puVar14 | (byte)*puVar40;
  pcVar36 = (char *)CONCAT31(uVar24,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar36 = *pcVar36 + bVar7;
    cVar38 = bVar7 + 2;
    piVar21 = (int *)CONCAT31(uVar24,cVar38);
    if ((POPCOUNT(cVar38) & 1U) == 0) {
      *(char *)piVar21 = (char)*piVar21 + cVar38;
      bVar7 = bVar7 + 0x71;
      pcVar11 = (char *)CONCAT31(uVar24,bVar7);
      pcVar36 = (char *)segment(uVar44,(short)puVar37 + (short)puVar40);
      *pcVar36 = *pcVar36 + bVar7;
      uVar12 = puVar41[0x1a];
      *pcVar11 = *pcVar11 + bVar7;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | (byte)uVar12 |
                                          *(byte *)((int)puVar41 + 0x69),(char)puVar20));
      *pcVar11 = *pcVar11 + bVar7;
      bVar7 = bVar7 | (byte)*param_2;
      pcVar36 = (char *)CONCAT31(uVar24,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar40 + (uint)bVar46 * -2 + 1;
    out(*puVar40,(short)param_2);
  }
  else {
    puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((char)((uint)puVar37 >> 8) + (byte)puVar37[6],(char)puVar37)
                              );
code_r0x00402a5d:
    *pcVar36 = *pcVar36 + (char)pcVar36;
    piVar21 = (int *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
    unaff_ESI = puVar40;
  }
code_r0x00402a61:
  pcVar36 = (char *)segment(uVar44,(short)puVar37 + (short)unaff_ESI);
  *pcVar36 = *pcVar36 + (char)piVar21;
  cVar38 = (char)puVar20;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)puVar41[0x1a],cVar38));
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  uVar31 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar31);
  piVar16 = (int *)((int)piVar21 + *piVar21);
  puVar40 = unaff_ESI;
  puVar42 = puVar41;
  uVar43 = in_ES;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar38;
  puVar40 = unaff_ESI + (uint)bVar46 * -2 + 1;
  out(*unaff_ESI,uVar31);
code_r0x00402a75:
  bVar7 = (byte)((uint)puVar20 >> 8) | (byte)*param_2;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,(char)puVar20));
  piVar21 = (int *)(uint)(byte)*puVar37;
  *(byte *)puVar40 = (byte)*puVar40 - bVar7;
  puVar42 = puVar41;
code_r0x00402a7f:
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  out(*puVar40,(short)param_2);
  bVar7 = in((short)param_2);
  *(byte *)puVar42 = bVar7;
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*param_2,(char)puVar20));
  iVar17 = *piVar21;
  cVar38 = in(1);
  puVar14 = (uint *)CONCAT31((int3)((uint)((int)piVar21 + *piVar21) >> 8),cVar38);
  *(char *)puVar14 = (char)*puVar14 + cVar38;
  puVar14 = (uint *)((uint)puVar14 | *puVar14);
  *(byte *)puVar20 = (byte)*puVar20 + (char)param_2;
  puVar40 = (uint *)((int)puVar40 + (((uint)bVar46 * -8 + 4) - iVar17));
  puVar42 = (uint *)((int)puVar42 + (uint)bVar46 * -2 + 1);
  in_SS = in_ES;
  while( true ) {
    bVar7 = (byte)puVar14 | (byte)*param_2;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar7);
    puVar41 = puVar42;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar14 = (byte)*puVar14 + bVar7;
code_r0x00402a9b:
    uVar24 = (undefined3)((uint)puVar14 >> 8);
    cVar38 = (char)puVar14 + '\r';
    piVar16 = (int *)CONCAT31(uVar24,cVar38);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar38;
    *(byte *)(puVar40 + -0xc800000) = (byte)puVar40[-0xc800000] + (char)param_2;
    *(char *)piVar16 = (char)*piVar16 + cVar38;
    *(byte *)param_2 = (byte)*param_2 + cVar38;
    cVar8 = (char)puVar20;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar8;
      unaff_ESI = puVar40 + (uint)bVar46 * -2 + 1;
      out(*puVar40,(short)param_2);
      piVar21 = (int *)((longlong)*piVar16 * 0x7b020a00);
      *(char *)piVar21 =
           (char)*piVar21 - ((longlong)(int)piVar21 != (longlong)*piVar16 * 0x7b020a00);
      pbVar10 = (byte *)((int)puVar41 + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10;
      goto code_r0x00402a61;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar38;
    puVar14 = (uint *)CONCAT31(uVar24,(char)puVar14 + ':');
    unaff_ESI = (uint *)((uint)puVar40 | *(uint *)((int)param_2 + -0x79));
    iVar17 = (int)puVar14 + *puVar14;
    if (SCARRY4((int)puVar14,*puVar14)) {
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                 CONCAT11((char)((uint)puVar37 >> 8) + (byte)unaff_ESI[(int)puVar37]
                                          ,(char)puVar37));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar17;
      puVar42 = puVar41;
      goto code_r0x00402b33;
    }
    uVar24 = (undefined3)((uint)iVar17 >> 8);
    cVar38 = (char)iVar17 + CARRY4((uint)puVar14,*puVar14);
    piVar21 = (int *)CONCAT31(uVar24,cVar38);
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    bVar45 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar45) && (bVar45)) goto code_r0x00402a61;
    *(char *)piVar21 = (char)*piVar21 + cVar38;
    cVar9 = cVar38 + '(';
    pcVar36 = (char *)CONCAT31(uVar24,cVar9);
    puVar42 = puVar41 + (uint)bVar46 * -2 + 1;
    uVar12 = in((short)param_2);
    *puVar41 = uVar12;
    *pcVar36 = *pcVar36 + cVar9;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11((byte)((uint)puVar20 >> 8) | bRama07b0222,cVar8));
    *pcVar36 = *pcVar36 + cVar9;
    pcVar36 = (char *)CONCAT31(uVar24,cVar38 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar40 = (uint *)((int)(unaff_ESI + (uint)bVar46 * -2 + 1) + (uint)bVar46 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar46 * -2 + 1],(short)param_2);
    bVar7 = (byte)pcVar36;
    *pcVar36 = *pcVar36 + bVar7;
    puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(byte)puVar37 | (byte)*puVar42);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar24 = (undefined3)((uint)pcVar36 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar38 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*param_2;
    piVar21 = (int *)CONCAT31(uVar24,cVar38);
    if ((POPCOUNT(cVar38) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar21 = (char)*piVar21 + cVar38;
    piVar16 = (int *)CONCAT31(uVar24,cVar38 + '\x17');
    uVar43 = in_ES;
code_r0x00402ae3:
    out(*puVar40,(short)param_2);
    unaff_ESI = puVar40 + (uint)bVar46 * -2 + 1 + (uint)bVar46 * -2 + 1;
    out(puVar40[(uint)bVar46 * -2 + 1],(short)param_2);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
code_r0x00402ae7:
    puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((byte)((uint)puVar37 >> 8) | unaff_EBP[-0x60],(char)puVar37)
                              );
    cVar38 = (char)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar38;
    uVar24 = (undefined3)((uint)piVar16 >> 8);
    bVar7 = cVar38 + 2;
    puVar14 = (uint *)CONCAT31(uVar24,bVar7);
    in_ES = uVar43;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar14 = (byte)*puVar14 + bVar7;
      cVar38 = cVar38 + '}';
      puVar14 = (uint *)CONCAT31(uVar24,cVar38);
      *(byte *)puVar14 = ((byte)*puVar14 - cVar38) - (0x84 < bVar7);
      pbVar10 = (byte *)((int)param_2 + (int)puVar14);
      *pbVar10 = *pbVar10 + cVar38;
      bVar7 = POPCOUNT(*pbVar10);
      puVar40 = unaff_ESI;
code_r0x00402af9:
      in_ES = uVar43;
      puVar41 = puVar42;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        bVar7 = (byte)puVar20;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_SS);
        unaff_ESI = puVar40 + (uint)bVar46 * -2 + 1;
        out(*puVar40,(short)param_2);
        uVar12 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'o') +
                 *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar12,bVar7);
        pcVar36 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '(');
        while( true ) {
          uVar12 = *param_2;
          bVar26 = (byte)puVar20;
          *(byte *)param_2 = (byte)*param_2 + bVar26;
          pcVar36 = pcVar36 + (uint)CARRY1((byte)uVar12,bVar26) + iRam73280512;
          bVar7 = (byte)pcVar36;
          *pcVar36 = *pcVar36 + bVar7;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                     CONCAT11((byte)((uint)puVar20 >> 8) | bRam7d160243,bVar26));
          bVar46 = ((uint)uStackY_30 & 0x400) != 0;
          in_AF = ((uint)uStackY_30 & 0x10) != 0;
          *pcVar36 = *pcVar36 + bVar7;
          uVar24 = (undefined3)((uint)pcVar36 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar24,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar38 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar38 < '\0') break;
          *(char *)CONCAT31(uVar24,cVar38) = *(char *)CONCAT31(uVar24,cVar38) + cVar38;
          iVar17 = CONCAT31(uVar24,bVar7 + 0x16);
code_r0x00402b33:
          piVar16 = (int *)(iVar17 + 0xe2802);
          *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)puVar20 >> 8);
          uVar43 = in_ES;
          in_ES = in_SS;
          while( true ) {
            bVar26 = (byte)puVar37 | (byte)((uint)puVar20 >> 8);
            puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),bVar26);
            *piVar16 = (int)(*piVar16 + (int)piVar16);
            cVar38 = (char)piVar16;
            *(byte *)param_2 = (byte)*param_2 + cVar38;
            if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar16 = (char)*piVar16 + cVar38;
            uVar12 = CONCAT31((int3)((uint)piVar16 >> 8),cVar38 + '\x13');
            puVar14 = (uint *)(uVar12 + 0x19061224 + (uint)(0x1f9edfd < uVar12));
            uVar13 = (uint)(0xe4ffffdd < uVar12 + 0xfe061202 ||
                           CARRY4(uVar12 + 0x19061224,(uint)(0x1f9edfd < uVar12)));
            uVar12 = *unaff_ESI;
            uVar1 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar1 + (int)puVar14) + uVar13);
            bVar7 = POPCOUNT(*unaff_ESI & 0xff);
            puVar40 = unaff_ESI;
            if ((SCARRY4(uVar12,(int)puVar14) != SCARRY4((int)(uVar1 + (int)puVar14),uVar13)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar14;
            *(byte *)puVar14 = (byte)*puVar14 + bVar7;
            iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)param_2 | (byte)*param_2;
            uVar12 = *puVar37;
            *(byte *)puVar37 = (byte)*puVar37 + bVar26;
            pcVar36 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x12') + 0x228b26
                               + *puVar42 + (uint)CARRY1((byte)uVar12,bVar26));
            cVar38 = bVar7 + (byte)*puVar20;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar38);
            if (SCARRY1(bVar7,(byte)*puVar20) == cVar38 < '\0') break;
            *pcVar36 = *pcVar36 + (char)pcVar36;
            cVar38 = (char)pcVar36 + '\x02';
            pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar38);
            bVar7 = POPCOUNT(cVar38);
            uVar43 = in_ES;
code_r0x00402b7a:
            puVar41 = unaff_ESI;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar38 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar38;
              uVar24 = (undefined3)((uint)pcVar36 >> 8);
              pcVar36 = (char *)CONCAT31(uVar24,cVar38 + '\x13');
              *(byte *)puVar20 = (byte)*puVar20 | (byte)param_2;
              *(byte *)puVar42 = (byte)*puVar42 | (byte)param_2;
              *param_2 = (uint)(pcVar36 + *param_2);
              uVar31 = (undefined2)((uint)puVar37 >> 0x10);
              uVar35 = SUB41(puVar37,0);
              cVar8 = (char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + -0x5f);
              puVar37 = (uint *)CONCAT22(uVar31,CONCAT11(cVar8,uVar35));
              *pcVar36 = *pcVar36 + cVar38 + '\x13';
              piVar16 = (int *)CONCAT31(uVar24,cVar38 + -0x7a);
              uVar12 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar12,(char)puVar20) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar16 = (char)*piVar16 + cVar38 + -0x7a;
              cVar9 = cVar38 + -0x78;
              piVar16 = (int *)CONCAT31(uVar24,cVar9);
              uVar5 = uVar43;
              if ((POPCOUNT(cVar9) & 1U) != 0) break;
              *(char *)piVar16 = (char)*piVar16 + cVar9;
              pcVar36 = (char *)CONCAT31(uVar24,cVar38 + -0x65);
              *puVar20 = *puVar20 | (uint)param_2;
              *puVar42 = *puVar42 | (uint)param_2;
              pbVar10 = (byte *)((int)puVar20 + -1);
              cVar8 = cVar8 + *(byte *)((int)puVar37 + -0x5e);
              puVar37 = (uint *)CONCAT22(uVar31,CONCAT11(cVar8,uVar35));
              *pcVar36 = *pcVar36 + cVar38 + -0x65;
              bVar7 = cVar38 + 10;
              puVar14 = (uint *)CONCAT31(uVar24,bVar7);
              bVar26 = (byte)pbVar10;
              *(byte *)param_2 = (byte)*param_2 + bVar26;
              unaff_ESI = puVar41 + (uint)bVar46 * -2 + 1;
              out(*puVar41,(short)param_2);
              uVar12 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar26;
              uVar3 = (uint)CARRY1((byte)uVar12,bVar26);
              uVar12 = *param_2;
              uVar1 = *param_2;
              pbVar15 = pbVar10 + uVar1 + uVar3;
              uVar6 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar8;
              uVar13 = *param_2;
              unaff_EBP = (char *)((uint)unaff_EBP | *puVar14);
              *(byte *)puVar14 = (char)*puVar14 + bVar7;
              puVar20 = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar15 >> 8) | bRam7d170243,
                                                  (char)pbVar15 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar10,uVar12) ||
                                                  CARRY4((uint)(pbVar10 + uVar1),uVar3))));
              bVar46 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar14 = (char)*puVar14 + bVar7;
              bVar45 = 0xfd < bVar7;
              pcVar36 = (char *)CONCAT31(uVar24,cVar38 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar13);
code_r0x00402bd1:
              uVar12 = *puVar37;
              uVar1 = *puVar37;
              *puVar37 = (uint)((byte *)(uVar1 + (int)puVar20) + bVar45);
              bVar7 = POPCOUNT(*puVar37 & 0xff);
              uVar43 = in_SS;
              if ((SCARRY4(uVar12,(int)puVar20) != SCARRY4((int)(uVar1 + (int)puVar20),(uint)bVar45)
                  ) == (int)*puVar37 < 0) goto code_r0x00402b7a;
              cVar38 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar38;
              pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar38 + '\x02');
              if (SCARRY1(cVar38,'\x02') == (char)(cVar38 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar36 = *pcVar36 + (char)pcVar36;
                pcVar36 = (char *)(CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + '\x12') |
                                  *param_2);
                *(byte *)puVar42 = (byte)*puVar42 - (char)puVar20;
                *pcVar36 = *pcVar36 + (char)pcVar36;
                puVar41 = (uint *)((int)param_2 - *unaff_ESI);
                bVar7 = (byte)puVar37 | (byte)((uint)puVar20 >> 8);
                cVar38 = *pcVar36;
                uVar24 = (undefined3)((uint)pcVar36 >> 8);
                pcVar36 = (char *)CONCAT31(uVar24,cVar38);
                *pcVar36 = *pcVar36 + cVar38;
                pcVar11 = (char *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                           CONCAT11((char)((uint)puVar37 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar36 = *pcVar36 + cVar38;
                bVar45 = false;
                pcVar36 = (char *)(CONCAT31(uVar24,cVar38 + '\x13') | *puVar41);
                do {
                  bVar26 = (byte)puVar20;
                  bVar7 = bVar26 + (byte)unaff_ESI[(int)puVar42 * 2];
                  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7 + bVar45);
                  uVar12 = (uint)(CARRY1(bVar26,(byte)unaff_ESI[(int)puVar42 * 2]) ||
                                 CARRY1(bVar7,bVar45));
                  pcVar18 = pcVar36 + 0x1b000019 + uVar12;
                  piVar21 = (int *)((int)puVar42 * 2 + 0x40000a5);
                  *piVar21 = (int)((int)puVar20 +
                                  (uint)((char *)0xe4ffffe6 < pcVar36 ||
                                        CARRY4((uint)(pcVar36 + 0x1b000019),uVar12)) + *piVar21);
                  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(char)puVar41 + cRam00009d7d
                                            );
                  uVar24 = (undefined3)((uint)pcVar18 >> 8);
                  bVar7 = (char)pcVar18 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar12 = CONCAT31(uVar24,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar36 = (char *)CONCAT22((short)(uVar12 >> 0x10),
                                             CONCAT11((char)((uint)pcVar18 >> 8) - in_AF,
                                                      (char)uVar12));
                  pcVar18 = (char *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar24,bVar7));
                  while( true ) {
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               (byte)puVar41 | (byte)*puVar41);
                    puVar42 = (uint *)((uint)puVar42 | (uint)unaff_ESI);
                    uVar12 = (uint)pcVar11 | (uint)unaff_ESI;
                    unaff_EBP = pcVar18 + 1;
                    uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_ES);
                    cVar8 = (char)(pcVar36 + 0x1b000019);
                    uVar24 = (undefined3)((uint)(pcVar36 + 0x1b000019) >> 8);
                    cVar38 = cVar8 + -0x13;
                    pcVar36 = (char *)CONCAT31(uVar24,cVar38);
                    uVar31 = (undefined2)(uVar12 >> 0x10);
                    cVar9 = (char)(uVar12 >> 8) + *(char *)(uVar12 - 0x5e);
                    puVar37 = (uint *)CONCAT22(uVar31,CONCAT11(cVar9,(byte)uVar12));
                    *pcVar36 = *pcVar36 + cVar38;
                    pcVar36 = (char *)(CONCAT31(uVar24,cVar8 + '\x19') | *puVar41);
                    bVar7 = (byte)pcVar36;
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      pbVar10 = (byte *)((int)puVar41 + (int)pcVar36);
                      bVar45 = CARRY1(*pbVar10,bVar7);
                      *pbVar10 = *pbVar10 + bVar7;
                      param_2 = puVar41;
                      goto code_r0x00402bd1;
                    }
                    *pcVar36 = *pcVar36 + bVar7;
                    uVar24 = (undefined3)((uint)pcVar36 >> 8);
                    pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x6f);
                    param_2 = (uint *)((int)puVar41 + 1);
                    *pcVar11 = *pcVar11 + bVar7 + 0x6f;
                    bVar26 = (byte)uVar12 | (byte)((uint)pcVar36 >> 8);
                    pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x5c);
                    cVar9 = cVar9 + *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),bVar26) + -0x5f);
                    puVar37 = (uint *)CONCAT22(uVar31,CONCAT11(cVar9,bVar26));
                    *pcVar36 = *pcVar36 + bVar7 + 0x5c;
                    pcVar36 = (char *)(CONCAT31(uVar24,bVar7 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      *(byte *)puVar37 = (byte)*puVar37 + (char)((uint)puVar20 >> 8);
                      uStackY_30 = (uint *)((uint)uStackY_30._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    uVar24 = (undefined3)((uint)pcVar36 >> 8);
                    cVar38 = (char)pcVar36 + 'o';
                    puVar41 = (uint *)((int)puVar41 + 2);
                    *(char *)CONCAT31(uVar24,cVar38) = *(char *)CONCAT31(uVar24,cVar38) + cVar38;
                    pcVar11 = (char *)CONCAT31((int3)((uint)puVar37 >> 8),
                                               bVar26 | (byte)((uint)pcVar36 >> 8));
                    pcVar36 = (char *)(CONCAT31(uVar24,cVar38) | 2);
                    pcVar18[-0x62] = pcVar18[-0x62] + '\x01';
                    bVar7 = (byte)pcVar36;
                    *pcVar36 = *pcVar36 + bVar7;
                    bVar45 = 0xfd < bVar7;
                    cVar38 = bVar7 + 2;
                    pcVar36 = (char *)CONCAT31(uVar24,cVar38);
                    uVar44 = in_ES;
                    if (SCARRY1(bVar7,'\x02') != cVar38 < '\0') break;
                    *pcVar36 = *pcVar36 + cVar38;
                    bVar26 = bVar7 + 10;
                    pcVar36 = (char *)CONCAT31(uVar24,bVar26);
                    *pcVar36 = *pcVar36 - cVar9;
                    cVar8 = (char)puVar20;
                    *(byte *)puVar41 = *(byte *)puVar41 + cVar8;
                    pcVar18[-0x62] = pcVar18[-0x62] + '\x01';
                    *pcVar36 = *pcVar36 + bVar26;
                    cVar38 = bVar7 + 0xc;
                    pcVar36 = (char *)CONCAT31(uVar24,cVar38);
                    if (SCARRY1(bVar26,'\x02') == cVar38 < '\0') {
                      *pcVar36 = *pcVar36 + cVar38;
                      *(byte *)puVar20 = (byte)*puVar20 - cVar9;
                      *(byte *)puVar41 = *(byte *)puVar41 + cVar8;
                      cVar38 = (bVar7 + 0x13) - (byte)puVar20[0x13];
                      pcVar36 = (char *)CONCAT31(uVar24,cVar38);
                      *pcVar36 = *pcVar36 + cVar38;
                      pcVar19 = (char *)CONCAT31(uVar24,cVar38 + *pcVar36);
                      *pcVar19 = *pcVar19 + cVar38 + *pcVar36;
                      pcVar19 = pcVar19 + *puVar20;
                      *pcVar19 = *pcVar19 + (char)pcVar19;
                      LOCK();
                      pcVar36 = *(char **)pcVar19;
                      *(char **)pcVar19 = pcVar19;
                      UNLOCK();
                      *pcVar36 = *pcVar36 + (char)pcVar36;
                      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(byte)*puVar20);
                      *pbVar10 = *pbVar10 + (byte)*puVar20;
                      goto code_r0x00402c8d;
                    }
                    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),
                                               cVar8 + *pcVar11 + (0xfd < bVar26));
                    *(byte *)puVar42 = (byte)*puVar42 - cVar9;
                    pcVar18 = unaff_EBP;
                  }
                } while( true );
              }
              puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                         CONCAT11((char)((uint)puVar37 >> 8) +
                                                  *(byte *)((int)puVar37 + -99),(char)puVar37));
              puVar41 = unaff_ESI;
            }
            *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
            param_2 = (uint *)((int)param_2 - *puVar41);
            unaff_ESI = puVar41;
            uVar43 = in_ES;
            in_ES = uVar5;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
          pcVar36 = pcVar36 + -0x7d160243;
        }
        pcVar36 = (char *)CONCAT31(uVar24,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar20;
    uVar12 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
    *puVar42 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar12,(byte)puVar14) + *puVar42);
    puVar40 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar30 = (char)puVar20;
      cVar27 = (char)((uint)puVar20 >> 8) + (char)((uint)pbVar10 >> 8);
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(cVar27,cVar30));
      cVar38 = (char)pbVar10;
      *pbVar10 = *pbVar10 + cVar38;
      pcVar36 = (char *)((int)pbVar10 * 2 + 0x1a10000);
      cVar9 = (char)((uint)pcVar11 >> 8);
      *pcVar36 = *pcVar36 + cVar9;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
      pbVar10[-0x47ffffff] = pbVar10[-0x47ffffff] + cVar9;
      *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
      bVar26 = (byte)puVar41;
      *(byte *)puVar42 = (byte)*puVar42 + bVar26;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + bVar26;
      *pbVar10 = *pbVar10 + cVar38;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar31 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar9 = cVar9 + (byte)unaff_ESI[(int)pcVar11];
      pcVar36 = (char *)CONCAT22(uVar31,CONCAT11(cVar9,(char)pcVar11));
      pcVar36[(int)pbVar10] = pcVar36[(int)pbVar10] + cVar38;
      *(byte *)puVar41 = *(byte *)puVar41 - cVar9;
      *(byte *)puVar41 = *(byte *)puVar41 + cVar30;
      uVar24 = (undefined3)((uint)pbVar10 >> 8);
      bVar7 = cVar38 - *pbVar10;
      *pcVar36 = *pcVar36 + bVar26;
      *(byte *)puVar41 = *(byte *)puVar41 ^ bVar7;
      *(byte *)puVar41 = *(byte *)puVar41 + bVar7;
      *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
      uVar12 = *puVar20;
      *(byte *)puVar20 = (byte)*puVar20 + bVar26;
      cVar8 = bVar7 + *(char *)CONCAT31(uVar24,bVar7) + CARRY1((byte)uVar12,bVar26);
      pcVar11 = (char *)CONCAT22(uVar31,CONCAT11(cVar9 + pcVar18[-0x60],(char)pcVar11));
      *(char *)CONCAT31(uVar24,cVar8) = *(char *)CONCAT31(uVar24,cVar8) + cVar8;
      cVar9 = cVar8 + '\x12';
      pbVar10 = (byte *)CONCAT31(uVar24,cVar9);
      cVar38 = *pcVar11;
      *pcVar11 = *pcVar11 + cVar9;
      if (SCARRY1(cVar38,cVar9) != *pcVar11 < '\0') break;
code_r0x00402c8d:
      cVar38 = (char)pbVar10;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
      *(byte *)puVar41 = *(byte *)puVar41 + cVar38;
      *pbVar10 = *pbVar10 + cVar38;
    }
    *pbVar10 = *pbVar10 + cVar9;
    pbVar10 = (byte *)CONCAT31(uVar24,cVar8 + '$');
    *pbVar10 = *pbVar10 + cVar27;
    bVar7 = *(byte *)puVar41;
    *(byte *)puVar41 = *(byte *)puVar41 + cVar30;
    uVar43 = in_DS;
  } while (SCARRY1(bVar7,cVar30) == (char)*(byte *)puVar41 < '\0');
  do {
    cVar38 = (char)pbVar10;
    *pbVar10 = *pbVar10 + cVar38;
    uVar24 = (undefined3)((uint)pbVar10 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar41;
    bVar26 = cVar38 + 0x24;
    cVar9 = (char)((uint)pcVar11 >> 8);
    pcVar11[-0x62] = pcVar11[-0x62] + cVar9;
    *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
    bVar7 = cVar38 + 0x2fU + (byte)*puVar20;
    cVar8 = bVar7 + (0xf4 < bVar26);
    cVar38 = cVar8 + *(char *)CONCAT31(uVar24,cVar8) +
             (CARRY1(cVar38 + 0x2fU,(byte)*puVar20) || CARRY1(bVar7,0xf4 < bVar26));
    pcVar36 = (char *)CONCAT31(uVar24,cVar38);
    *pcVar36 = *pcVar36 - (char)puVar41;
    *pcVar36 = *pcVar36 + cVar38;
    pcVar18 = (char *)((int)puVar41 - *puVar41);
    *(byte *)(unaff_ESI + (int)pcVar11) = (byte)unaff_ESI[(int)pcVar11] + cVar9;
    pcVar36[(int)unaff_EBP] = pcVar36[(int)unaff_EBP] + cVar38;
    *pcVar18 = *pcVar18 + (char)puVar20;
    pcVar36 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((char)((uint)pbVar10 >> 8) - *pcVar18,cVar38));
    uVar12 = *puVar42;
    *pcVar36 = *pcVar36 - (char)((uint)pcVar18 >> 8);
    *pcVar36 = *pcVar36 + cVar38;
    uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uVar44);
    pbVar15 = (byte *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                               CONCAT11(cVar9 - (byte)*unaff_ESI,(char)pcVar11));
    unaff_EBP = unaff_EBP + *(int *)(pbVar15 + (int)puVar20);
    puVar37 = (uint *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + (byte)uVar12);
    while( true ) {
      puVar41 = puVar37;
      uVar31 = (undefined2)((uint)pbVar15 >> 0x10);
      bVar39 = (char)((uint)pbVar15 >> 8) + pbVar15[0x18];
      *pcVar36 = *pcVar36 + (char)pcVar36;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
      cVar38 = (char)puVar20;
      *(byte *)puVar41 = (byte)*puVar41 + cVar38;
      uVar12 = *unaff_ESI;
      bVar34 = (byte)((uint)puVar20 >> 8);
      bVar7 = *pbVar10;
      pbVar10 = pbVar10 + (uint)CARRY1(bVar34,*pbVar10) + *(int *)pbVar10;
      *(byte *)puVar41 = (byte)*puVar41 + cVar38;
      cVar8 = ((char)pbVar15 - (byte)uVar12) - (byte)*unaff_ESI;
      bVar26 = *(byte *)((int)puVar42 + 0x1a);
      *pbVar10 = *pbVar10 + (char)pbVar10;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11(bVar34 + bVar7 + bVar26 | (byte)*puVar41,cVar38));
      pbVar10 = pbVar10 + *puVar41;
      if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) break;
      *pbVar10 = *pbVar10 + (char)pbVar10;
      bVar7 = (char)pbVar10 + 0x6f;
      pcVar36 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
      pcVar11 = (char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar39,(char)pbVar15)) >> 8),cVar8
                                 ) + -1);
      *pcVar36 = *pcVar36 + bVar7;
      *pcVar36 = *pcVar36 + bVar7;
      *pcVar11 = *pcVar11 + (byte)puVar41;
      *(byte *)((int)pcVar36 * 2) = *(byte *)((int)pcVar36 * 2) ^ bVar7;
      uVar4 = *(undefined6 *)pcVar36;
      uVar44 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar36 = (char *)uVar4;
      *pcVar36 = *pcVar36 + (char)uVar4;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar4;
      pcVar36 = (char *)((uint)pcVar36 | 0x73110008);
      bVar39 = (byte)((uint)pcVar11 >> 8);
      *(byte *)puVar42 = (byte)*puVar42 - bVar39;
      *(byte *)puVar41 = (byte)*puVar41 + cVar38;
      puVar37 = unaff_ESI + (uint)bVar46 * -2 + 1;
      out(*unaff_ESI,(short)puVar41);
      *pcVar36 = *pcVar36;
      cVar38 = (char)pcVar36;
      *pcVar36 = *pcVar36 + cVar38;
      bVar7 = unaff_EBP[-0x5a];
      uVar31 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar8 = (char)pcVar11;
      *pcVar36 = *pcVar36 + cVar38;
      cVar38 = cVar38 + '\x02';
      uVar12 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar38);
      puVar20 = (uint *)(uVar12 | 0x73110000);
      unaff_ESI = puVar37 + (uint)bVar46 * -2 + 1;
      out(*puVar37,(short)puVar41);
      *(byte *)puVar20 = (byte)*puVar20;
      bVar34 = (byte)puVar41 | (byte)*puVar42;
      puVar37 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar34);
      *(byte *)puVar20 = (byte)*puVar20 + cVar38;
      pcVar36 = (char *)(uVar12 | 0x7b1f1609);
      bVar46 = (uVar43 & 0x400) != 0;
      *(uint *)((int)puVar42 + -0x7d) = *(uint *)((int)puVar42 + -0x7d) | (uint)unaff_EBP;
      bVar26 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar26;
      bVar39 = bVar39 | bVar7 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar15 = (byte *)CONCAT22(uVar31,CONCAT11(bVar39,cVar8));
      *pcVar36 = *pcVar36 + bVar26;
      uVar24 = (undefined3)((uint)pcVar36 >> 8);
      unaff_ESI[(int)puVar42 * 2] =
           (uint)((int)puVar37 + (uint)(0xd2 < bVar26) + unaff_ESI[(int)puVar42 * 2]);
      bVar7 = bVar26 + 0x2d ^ *(byte *)CONCAT31(uVar24,bVar26 + 0x2d);
      pcVar36 = (char *)CONCAT31(uVar24,bVar7);
      uVar12 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
      uVar43 = uVar44;
      if (CARRY1((byte)uVar12,bVar7)) {
        *pcVar36 = *pcVar36 + bVar7;
        bVar7 = bVar7 | pcVar36[0x4000019];
        pcVar36 = (char *)CONCAT31(uVar24,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar36 = *pcVar36 + bVar7;
          piVar21 = (int *)CONCAT31(uVar24,bVar7 + 0x28);
          *piVar21 = (int)piVar21 + (uint)(0xd7 < bVar7) + *piVar21;
          bVar28 = (byte)((uint6)uVar4 >> 8);
          *pbVar15 = *pbVar15 + bVar28;
          uVar32 = CONCAT11((byte)((uint)puVar41 >> 8) | bVar39,bVar34);
          puVar37 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar32);
          uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uVar44);
          bVar34 = in(uVar32);
          pbVar10 = (byte *)CONCAT31(uVar24,bVar34);
          bVar26 = *pbVar10;
          bVar45 = SCARRY1(*pbVar10,bVar34);
          *pbVar10 = *pbVar10 + bVar34;
          bVar7 = *pbVar10;
          puVar41 = unaff_ESI;
          in_SS = uVar44;
          if (!CARRY1(bVar26,bVar34)) goto code_r0x00402e19;
          *pbVar10 = *pbVar10 + bVar34;
          bVar28 = bVar28 | *pbVar10;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar28,cVar38));
          pcVar36 = (char *)CONCAT31(uVar24,bVar34 + *pbVar10);
          *pbVar15 = *pbVar15 + bVar28;
        }
        uVar24 = (undefined3)((uint)pcVar36 >> 8);
        bVar26 = (byte)pcVar36 | (byte)*puVar37;
        pbVar10 = (byte *)CONCAT31(uVar24,bVar26);
        puVar41 = unaff_ESI + (uint)bVar46 * -2 + 1;
        out(*unaff_ESI,(short)puVar37);
        LOCK();
        bVar7 = *pbVar10;
        *pbVar10 = bVar26;
        UNLOCK();
        *(byte *)puVar37 = (byte)*puVar37 + (char)puVar20;
        piVar21 = (int *)(CONCAT31(uVar24,bVar7) + -0x1b7e07);
        *(byte *)puVar37 = (byte)*puVar37 + (char)puVar20;
        iVar17 = (int)puVar20 - *(int *)pbVar15;
        bVar7 = *(byte *)((int)puVar42 + -0x7a);
        uVar32 = (undefined2)((uint)iVar17 >> 0x10);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        bVar26 = (char)((uint)iVar17 >> 8) + bVar7 | *(byte *)((int)puVar42 + 0x17);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        uVar24 = (undefined3)(CONCAT22(uVar32,CONCAT11(bVar26,(byte)iVar17)) >> 8);
        bVar7 = (byte)iVar17 | *pbVar15;
        puVar20 = (uint *)CONCAT31(uVar24,bVar7);
        pbVar10 = (byte *)((int)piVar21 + *piVar21);
        puVar14 = puVar41;
        if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e0a;
        *(byte *)puVar20 = (byte)*puVar20 + bVar7;
        *(byte **)pbVar15 = (byte *)(*(int *)pbVar15 + (int)puVar37);
        piVar21 = (int *)CONCAT31(uVar24,bVar7 + 0x27);
        puVar20 = (uint *)CONCAT22(uVar32,CONCAT11(bVar26 + *(byte *)((int)puVar42 + -0x79),bVar7));
        *(byte *)piVar21 = (char)*piVar21 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar11 = (char *)CONCAT22(uVar31,CONCAT11(bVar39 | unaff_EBP[-0x62],cVar8));
  } while( true );
code_r0x00402dff:
  pbVar10 = (byte *)CONCAT22((short)((uint)piVar21 >> 0x10),
                             CONCAT11((byte)((uint)piVar21 >> 8) |
                                      *(byte *)((int)puVar37 + 0x2170411),(byte)piVar21));
  puVar14 = puVar41 + (uint)bVar46 * -2 + 1;
  out(*puVar41,(short)puVar37);
  *pbVar10 = (byte)piVar21;
  *(byte *)puVar37 = (byte)*puVar37 + (char)puVar20;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar10;
  *pbVar10 = *pbVar10 - cVar8;
  *pbVar10 = *pbVar10 + (char)pbVar10;
  bVar45 = false;
  bVar7 = (byte)((uint)puVar20 >> 8) | bRam052b0603;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar7,(char)puVar20));
  puVar41 = puVar14;
code_r0x00402e19:
  if (bVar7 == 0 || bVar45 != (char)bVar7 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cRam89280411;
  piVar21 = (int *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                            CONCAT11((byte)((uint)pbVar10 >> 8) |
                                     *(byte *)((int)puVar37 + 0x7190411),cRam89280411));
  *(char *)piVar21 = (char)*piVar21 + cRam89280411;
  cVar38 = (char)puVar20;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar37,cVar38));
  puVar41 = (uint *)((int)puVar41 + *piVar21);
  pbVar10 = (byte *)((int)piVar21 + *piVar21);
  bVar26 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar26;
  *(byte *)puVar41 = (byte)*puVar41 + cVar38;
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar26;
  *(char **)pbVar10 = unaff_EBP + (uint)CARRY1(bVar7,bVar26) + *(int *)pbVar10;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),*pbVar10);
  *(byte *)puVar37 = (byte)*puVar37 + cVar38;
  puVar14 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(byte)puVar37 | (byte)*puVar37);
  pbVar10 = (byte *)((int)puVar14 + -0x43);
  *pbVar10 = *pbVar10 + (char)((uint)puVar37 >> 8);
  puVar37 = puVar14;
  puVar14 = puVar42;
  uVar43 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar42 = puVar14;
  in_SS = in_ES;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e6e;
  iVar17 = *(int *)((int)piVar21 + *piVar21);
  *(byte *)puVar37 = (byte)*puVar37 + (char)puVar20;
  piVar21 = (int *)(iVar17 + -0x8c6f);
  puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                             CONCAT11((byte)((uint)puVar37 >> 8) | *(byte *)((int)puVar37 + -0x3f),
                                      (char)puVar37));
  pbVar22 = (byte *)((int)piVar21 + *piVar21);
  pbVar10 = pbVar22;
  puVar42 = uStackY_30;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar37,(char)puVar20));
  puVar14 = puVar41 + (uint)bVar46 * -2 + 1;
  out(*puVar41,(short)puVar37);
  puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 + (byte)*puVar42);
  puVar41 = puVar14 + (uint)bVar46 * -2 + 1;
  out(*puVar14,(short)puVar37);
  uVar43 = in_ES;
  in_SS = uVar44;
code_r0x00402e6e:
  in_ES = uVar43;
  uVar24 = (undefined3)((uint)puVar37 >> 8);
  cVar38 = (char)puVar37 + (byte)*puVar42;
  puVar14 = puVar41 + (uint)bVar46 * -2 + 1;
  out(*puVar41,(short)CONCAT31(uVar24,cVar38));
  puVar37 = (uint *)CONCAT31(uVar24,cVar38 + (byte)*puVar42);
  puVar41 = puVar14 + (uint)bVar46 * -2 + 1;
  out(*puVar14,(short)puVar37);
  pbVar10 = (byte *)0x0;
  puVar14 = puVar42;
code_r0x00402e81:
  puVar42 = puVar14;
  bVar26 = (char)pbVar10 - *pbVar10;
  iVar17 = CONCAT31((int3)((uint)pbVar10 >> 8),bVar26);
  *pbVar15 = *pbVar15 + (char)puVar37;
  pbVar22 = (byte *)(iVar17 * 2);
  *pbVar22 = *pbVar22 ^ bVar26;
  pbVar22 = (byte *)(int)(short)iVar17;
  *pbVar22 = *pbVar22 + bVar26;
  *(byte *)puVar42 = (byte)*puVar42 + (byte)puVar20;
  bVar7 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar26;
  *(byte **)(pbVar15 + -0x73) =
       (byte *)((int)puVar41 + (uint)CARRY1(bVar7,bVar26) + *(int *)(pbVar15 + -0x73));
  *pbVar22 = *pbVar22 + bVar26;
  bVar7 = (byte)puVar20 | (byte)*puVar37;
  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7);
  puVar14 = puVar41;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar22 = *pbVar22 + bVar26;
  pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar10 >> 8),bVar26 + 0x2d);
  puVar41[(int)puVar42 * 2] =
       (uint)((int)puVar37 + (uint)(0xd2 < bVar26) + puVar41[(int)puVar42 * 2]);
  pcStackY_4c = (char *)CONCAT22(pcStackY_4c._2_2_,uVar44);
  do {
    uVar12 = *puVar41;
    bVar7 = (byte)pbVar10;
    *(byte *)puVar41 = (byte)*puVar41 + bVar7;
    if (!CARRY1((byte)uVar12,bVar7)) break;
    *pbVar10 = *pbVar10 + bVar7;
    bVar7 = bVar7 | pbVar10[0x400001a];
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar22 = *pbVar22 + (byte)pbVar22;
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar7 = (byte)pbVar22 | pbVar22[0x400001b];
      pcVar36 = (char *)CONCAT31(uVar24,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar12 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + (byte)puVar20;
        *(char *)((int)pcVar36 * 2) =
             *(char *)((int)pcVar36 * 2) - CARRY1((byte)uVar12,(byte)puVar20);
        bVar45 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar22 = *pbVar22 + bVar7;
      puVar14 = puVar41;
code_r0x00402eb4:
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar7 = (char)pbVar22 + 0x6f;
      pcVar36 = (char *)CONCAT31(uVar24,bVar7);
      *(char **)pcVar36 = pcStackY_4c;
      uVar12 = *puVar37;
      *(byte *)puVar37 = (byte)*puVar37 + (char)puVar20;
      pcStackY_4c = (char *)CONCAT22(pcStackY_4c._2_2_,uVar44);
      in_DS = uVar44;
      if ((byte)*puVar37 != 0 && SCARRY1((byte)uVar12,(char)puVar20) == (char)(byte)*puVar37 < '\0')
      {
        *pcVar36 = *pcVar36 + bVar7;
        bVar26 = (char)pbVar22 + 0x9c;
        pbVar22 = (byte *)CONCAT31(uVar24,bVar26);
        puVar14[(int)puVar42 * 2] =
             (uint)((int)puVar37 + (uint)(0xd2 < bVar7) + puVar14[(int)puVar42 * 2]);
        pcStackY_4c = (char *)CONCAT22(pcStackY_4c._2_2_,uVar44);
        uVar12 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + bVar26;
        puVar41 = puVar14;
        if (CARRY1((byte)uVar12,bVar26)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar41 = puVar14 + (uint)bVar46 * -2 + 1;
      out(*puVar14,(short)puVar37);
    }
    cVar38 = (char)pcVar36;
    *pcVar36 = *pcVar36 + cVar38;
    uVar24 = (undefined3)((uint)pcVar36 >> 8);
    bVar7 = cVar38 + 0x6f;
    pcVar36 = (char *)CONCAT31(uVar24,bVar7);
    *(char **)pcVar36 = pcStackY_4c;
    uVar12 = *puVar37;
    *(byte *)puVar37 = (byte)*puVar37 + (byte)puVar20;
    pcStackY_4c = (char *)CONCAT22(pcStackY_4c._2_2_,uVar44);
    *(byte *)(puVar41 + 7) = ((byte)puVar41[7] - bVar39) - CARRY1((byte)uVar12,(byte)puVar20);
    *pcVar36 = *pcVar36 + bVar7;
    bVar26 = cVar38 + 0x9c;
    pcVar36 = (char *)CONCAT31(uVar24,bVar26);
    puVar41[(int)puVar42 * 2] =
         (uint)((int)puVar37 + (uint)(0xd2 < bVar7) + puVar41[(int)puVar42 * 2]);
    uVar12 = *puVar41;
    *(byte *)puVar41 = (byte)*puVar41 + bVar26;
    if (!CARRY1((byte)uVar12,bVar26)) goto code_r0x00402e7e;
    *pcVar36 = *pcVar36 + bVar26;
    bVar26 = bVar26 | pcVar36[0x400001c];
    pbVar10 = (byte *)CONCAT31(uVar24,bVar26);
    in_SS = uVar44;
    if ((char)bVar26 < '\x01') goto code_r0x00402f16;
    *pbVar10 = *pbVar10 + bVar26;
    pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x6f);
    while( true ) {
      *(char **)pcVar36 = pcStackY_4c;
      uVar12 = *puVar37;
      *(byte *)puVar37 = (byte)*puVar37 + (byte)puVar20;
      *(uint *)((int)puVar41 + 0x1d) =
           (*(int *)((int)puVar41 + 0x1d) - (int)puVar42) - (uint)CARRY1((byte)uVar12,(byte)puVar20)
      ;
      bVar7 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar7;
      bVar26 = bVar7 + 0x2d;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),bVar26);
      puVar41[(int)puVar42 * 2] =
           (uint)((int)puVar37 + (uint)(0xd2 < bVar7) + puVar41[(int)puVar42 * 2]);
      pcStackY_4c = (char *)CONCAT22((short)((uint)pcStackY_4c >> 0x10),uVar44);
      uVar12 = *puVar41;
      *(byte *)puVar41 = (byte)*puVar41 + bVar26;
      if (!CARRY1((byte)uVar12,bVar26)) break;
      *pbVar10 = *pbVar10 + bVar26;
code_r0x00402f16:
      bVar7 = (byte)pbVar10 | pbVar10[0x400001d];
      puVar14 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
      pcVar36 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pcVar36;
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        uVar24 = (undefined3)((uint)puVar14 >> 8);
        cVar38 = (char)puVar14 + 'o';
        puVar40 = (uint *)CONCAT31(uVar24,cVar38);
        *puVar40 = (uint)pcStackY_4c;
        cVar9 = (char)puVar20;
        *(byte *)puVar37 = (byte)*puVar37 + cVar9;
        pcStackY_4c = (char *)CONCAT22(pcStackY_4c._2_2_,uVar44);
        bVar7 = (byte)((uint)puVar37 >> 8);
        bVar45 = bVar7 < (byte)*puVar41;
        puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar41,(char)puVar37));
        if (bVar45) break;
        bVar45 = CARRY4((uint)puVar40,*puVar40);
        puVar14 = (uint *)((int)puVar40 + *puVar40);
        if (!SCARRY4((int)puVar40,*puVar40)) {
          bVar45 = CARRY4((uint)unaff_EBP,*puVar14);
          unaff_EBP = unaff_EBP + *puVar14;
        }
        *puVar14 = (*puVar14 - (int)puVar14) - (uint)bVar45;
        *(byte *)puVar37 = (byte)*puVar37 + cVar9;
        puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                   CONCAT11((char)((uint)puVar20 >> 8) + (byte)*puVar37,
                                            cVar9 - (byte)*puVar37));
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
code_r0x00402f3b:
        cVar9 = (char)puVar37;
        *pbVar15 = *pbVar15 + cVar9;
        bVar7 = (byte)puVar14;
        *(byte *)((int)puVar14 * 2) = *(byte *)((int)puVar14 * 2) ^ bVar7;
        *(byte *)puVar14 = (byte)*puVar14 + bVar7;
        *(byte *)puVar14 = (byte)*puVar14 + cVar9;
        uVar12 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + bVar7;
        *puVar37 = (uint)((int)puVar14 + (uint)CARRY1((byte)uVar12,bVar7) + *puVar37);
        pcVar36 = (char *)((uint)puVar14 | *puVar42);
        uVar24 = (undefined3)((uint)pcVar36 >> 8);
        cVar38 = (char)pcVar36 + *pcVar36;
        pcVar36 = (char *)CONCAT31(uVar24,cVar38);
        *pcVar36 = *pcVar36 + cVar38;
        cVar38 = cVar38 + *pcVar36;
        piVar21 = (int *)CONCAT31(uVar24,cVar38);
        *(char *)piVar21 = (char)*piVar21 + cVar38;
        iVar17 = LocalDescriptorTableRegister();
        *piVar21 = iVar17;
        bVar7 = *pbVar15;
        bVar29 = (byte)((uint)puVar20 >> 8);
        *pbVar15 = *pbVar15 + bVar29;
        iVar17 = *piVar21;
        uVar32 = (undefined2)((uint)puVar20 >> 0x10);
        bVar28 = (byte)puVar20;
        *(byte *)puVar41 = (byte)*puVar41 + cVar38;
        puVar20 = puVar41 + (uint)bVar46 * -2 + 1;
        out(*puVar41,(short)puVar37);
        *(byte *)puVar20 = (byte)*puVar20 + cVar38;
        bVar26 = *pbVar15;
        *(byte *)puVar37 = (byte)*puVar37 - bVar39;
        *(byte *)puVar20 = (byte)*puVar20 + cVar38;
        puVar40 = puVar20 + (uint)bVar46 * -2 + 1;
        out(*puVar20,(short)puVar37);
        *(byte *)puVar40 = (byte)*puVar40 + cVar38;
        bVar34 = *pbVar15;
        *(uint *)((int)puVar37 + -0x23) = *(uint *)((int)puVar37 + -0x23) & (uint)puVar40;
        puVar23 = (ushort *)((int)piVar21 + *piVar21);
        if (!SCARRY4((int)piVar21,*piVar21)) {
          *puVar23 = in_DS;
        }
        *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
        uVar33 = CONCAT11((char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + -0x15),cVar9);
        puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar33);
        puVar14 = (uint *)((int)puVar23 + *(int *)puVar23);
        if (!SCARRY4((int)puVar23,*(int *)puVar23)) {
          *(ushort *)puVar14 = in_DS;
        }
        cVar38 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar38;
        cVar30 = ((bVar29 - (char)iVar17) - CARRY1(bVar7,bVar29) | bVar26 | bVar34) + (byte)*puVar14
        ;
        puVar20 = (uint *)CONCAT22(uVar32,CONCAT11(cVar30,bVar28));
        uVar12 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + bVar28;
        if (CARRY1((byte)uVar12,bVar28)) {
          *(byte *)puVar14 = (byte)*puVar14 + cVar38;
          bVar7 = *(byte *)((int)puVar37 + 6);
          *(byte *)puVar37 = (byte)*puVar37 + bVar28;
          bVar26 = (cVar30 - (byte)*puVar40) + cRam14730307;
          *(byte *)puVar14 = (byte)*puVar14 + cVar38;
          bVar7 = bVar39 | bVar7 | *(byte *)((int)puVar37 + 0x2a);
          uVar12 = *puVar14;
          pbVar10 = (byte *)((int)puVar14 + (uint)CARRY1(bVar26,(byte)*puVar14) + *puVar14);
          *(byte *)puVar37 = (byte)*puVar37 + bVar28;
          cVar38 = cVar8 - (byte)*puVar40;
          cVar8 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar7,cVar8)) >> 8),
                                             cVar38) + 0x1e);
          *pbVar10 = *pbVar10 + (char)pbVar10;
          uVar24 = (undefined3)((uint)pbVar10 >> 8);
          bVar7 = (char)pbVar10 + 0x2aU & (byte)*puVar37;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar38)) + 0x1f);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar38)) + 0x20);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar38)) + 0x21);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar38)) + 0x22);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          bVar26 = bVar26 + (byte)uVar12 + *pcVar36;
          uVar25 = CONCAT22(uVar32,CONCAT11(bVar26,bVar28));
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar8,cVar38)) + 0x25);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          pcVar11 = (char *)CONCAT22(uVar31,CONCAT11(cVar8 + *(char *)(CONCAT22(uVar31,CONCAT11(
                                                  cVar8,cVar38)) + 0x26),cVar38));
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar37;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          cVar38 = bVar7 + 0x2a;
          pcVar36 = (char *)CONCAT31(uVar24,cVar38);
          if ((POPCOUNT(cVar38) & 1U) == 0) {
            *pcVar36 = *pcVar36 + cVar38;
            pbVar10 = (byte *)(CONCAT31(uVar24,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar10;
            bVar34 = (byte)pbVar10;
            *pbVar10 = *pbVar10 + bVar34;
            uVar24 = (undefined3)((uint)pbVar10 >> 8);
            if (!CARRY1(bVar7,bVar34)) {
              if (!SCARRY1(bVar34,'\0')) {
                *pbVar10 = *pbVar10 + bVar34;
                uVar25 = CONCAT22(uVar32,CONCAT11(bVar26 | (byte)*puVar37,bVar28));
                bVar34 = bVar34 & (byte)*puVar37;
                *(char *)CONCAT31(uVar24,bVar34) = *(char *)CONCAT31(uVar24,bVar34) + bVar34;
                pcVar36 = (char *)CONCAT31(uVar24,bVar34 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar36 = (char *)CONCAT31(uVar24,bVar34 + *pcVar11);
              if (SCARRY1(bVar34,*pcVar11) != (char)(bVar34 + *pcVar11) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar34 + *pcVar11;
            pbVar10 = (byte *)CONCAT31(uVar24,bVar7);
            if (SCARRY1(bVar34,*pcVar11) == (char)bVar7 < '\0') {
              pcVar36 = (char *)CONCAT22(uVar32,CONCAT11(bVar26 | (byte)*puVar37,bVar28));
              *pcVar11 = *pcVar11 + cVar9;
              *(byte *)puVar37 = (byte)*puVar37 ^ bVar7;
              *(char *)((int)pbVar10 * 2) = *(char *)((int)pbVar10 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar36 = *pcVar36 + (char)pcVar36;
            uVar24 = (undefined3)((uint)pcVar36 >> 8);
            bVar7 = (char)pcVar36 + 0x2aU & (byte)*puVar37;
            *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
            pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
            *pcVar36 = *pcVar36 + bVar7 + 0x2a;
            pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x54 & (byte)*puVar37);
code_r0x00403072:
            cVar38 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar38;
            uVar24 = (undefined3)((uint)pcVar36 >> 8);
            pcVar36 = (char *)CONCAT31(uVar24,cVar38 + '*');
            *pcVar36 = *pcVar36 + cVar38 + '*';
            bVar7 = cVar38 + 0x54U & (byte)*puVar37;
            *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
            pcStackY_84 = (char *)CONCAT22(pcStackY_84._2_2_,in_ES);
            uVar25 = CONCAT22((short)((uint)uVar25 >> 0x10),
                              CONCAT11((char)((uint)uVar25 >> 8) +
                                       *(char *)CONCAT31(uVar24,bVar7 + 0x2a),(char)uVar25));
            *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar9;
            pcVar36 = pcStackY_84;
code_r0x0040309a:
            cVar38 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar38;
            pcStackY_84 = (char *)CONCAT22(pcStackY_84._2_2_,uVar44);
            *pcVar36 = *pcVar36 + cVar38;
            pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar38 + 0x2aU & (byte)*puVar37);
          }
          cVar38 = (char)pbVar10;
          *pbVar10 = *pbVar10 + cVar38;
          uVar24 = (undefined3)((uint)pbVar10 >> 8);
          cVar8 = cVar38 + '*';
          pcVar36 = (char *)CONCAT31(uVar24,cVar8);
          *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar9;
          *pcVar36 = *pcVar36 + cVar8;
          cVar30 = (char)pcStackY_84 - (byte)*puVar40;
          pcVar11 = (char *)CONCAT22((short)((uint)pcStackY_84 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_84 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_84 >> 8),
                                                                 cVar30) + 0x34),cVar30));
          *pcVar36 = *pcVar36 + cVar8;
          bVar7 = cVar38 + 0x54U & (byte)*puVar37;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pbVar10 = (byte *)CONCAT31(uVar24,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar25 >> 8);
          pcVar36 = (char *)CONCAT22((short)((uint)uVar25 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar10,(char)uVar25));
          pbVar10 = pbVar10 + (uint)CARRY1(bVar7,*pbVar10) + *(int *)pbVar10;
          *(byte *)puVar37 = (byte)*puVar37 + (char)uVar25;
          uVar24 = (undefined3)((uint)pbVar10 >> 8);
          cVar38 = (byte)pbVar10 - *pbVar10;
          piVar21 = (int *)CONCAT31(uVar24,cVar38);
          puVar40 = (uint *)((int)puVar40 + (uint)((byte)pbVar10 < *pbVar10) + *piVar21);
          cVar38 = cVar38 + (char)*piVar21;
          pbVar10 = (byte *)CONCAT31(uVar24,cVar38);
          *pbVar10 = *pbVar10 + cVar38;
code_r0x004030df:
          *pcVar36 = *pcVar36 + cVar9;
          bVar7 = *pbVar10;
          bVar26 = (byte)pbVar10;
          *pbVar10 = *pbVar10 + bVar26;
          *(byte **)(pcVar11 + -0x41) =
               (byte *)((int)puVar40 + (uint)CARRY1(bVar7,bVar26) + *(int *)(pcVar11 + -0x41));
          *pbVar10 = *pbVar10 + bVar26;
          uVar24 = (undefined3)((uint)pbVar10 >> 8);
          bVar26 = bVar26 | (byte)*puVar40;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x7b);
          *pcVar36 = *pcVar36 + bVar26 + 0x7b;
          pbVar10 = (byte *)((int)puVar40 + CONCAT31(uVar24,bVar26 - 8) + -1);
          *pbVar10 = *pbVar10 + (bVar26 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar41 = puVar40 + (uint)bVar46 * -2 + 1;
        out(*puVar40,uVar33);
        pcVar36 = unaff_EBP + 1;
        pcStackY_4c = unaff_EBP;
      }
      bVar7 = cVar38 - bVar45;
      pbVar10 = (byte *)((int)puVar41 + (int)puVar42 * 2);
      bVar45 = CARRY1(*pbVar10,bVar7);
      *pbVar10 = *pbVar10 + bVar7;
code_r0x00402ef9:
      pcVar36 = (char *)CONCAT31(uVar24,bVar7 - bVar45);
      pbVar10 = (byte *)((int)puVar42 + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10 + (bVar7 - bVar45);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar37;
  puVar14 = puVar37 + 0x2828000;
  bVar7 = (byte)puVar20;
  bVar45 = (byte)*puVar14 < bVar7;
  *(byte *)puVar14 = (byte)*puVar14 - bVar7;
  bVar7 = (byte)pbVar10 + *pbVar10;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7 + bVar45);
  puVar14 = puVar42;
  uVar43 = in_ES;
  if (CARRY1((byte)pbVar10,*pbVar10) || CARRY1(bVar7,bVar45)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar36 = *pcVar36 + bVar26;
  uVar43 = in_ES;
  in_SS = uVar44;
  goto code_r0x00402e6e;
}


