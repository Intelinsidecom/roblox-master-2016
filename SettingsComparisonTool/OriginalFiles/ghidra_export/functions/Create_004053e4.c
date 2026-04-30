/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004053e4
 * Raw Name    : Create
 * Demangled   : Create
 * Prototype   : pointer Create(undefined4 possibleOptions, byte * param_2)
 * Local Vars  : param_2, uStack_1f, pbStack_23, uStack_1c, uStack_1d, uStack_19, uStack_1b, uVar1, pcStack_18, uVar3, uVar2, pbVar5, uVar4, cVar7, cVar6, puVar8, in_EAX, piVar10, pcVar9, pbVar12, iVar11, uVar14, uVar13, puVar16, bVar15, pbVar18, pcVar17, bVar20, uVar19, uVar22, uVar21, cVar24, bVar23, uVar26, bVar25, pbVar28, pcVar27, uVar30, cVar29, bVar32, bVar31, unaff_EBX, bVar33, pbVar35, pcVar34, cVar37, bVar36, unaff_EBP, uVar38, unaff_ESI, uVar39, unaff_EDI, puVar40, bVar41, in_ES, in_ST0, in_AF, possibleOptions
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004054da) overlaps instruction at (ram,0x004054d9)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */

undefined * __fastcall Create(undefined4 possibleOptions,byte *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint5 uVar3;
  uint uVar4;
  byte *pbVar5;
  char cVar6;
  char cVar7;
  byte *in_EAX;
  uint *puVar8;
  char *pcVar9;
  int *piVar10;
  undefined3 uVar14;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar15;
  undefined2 uVar21;
  uint *puVar16;
  char *pcVar17;
  byte *pbVar18;
  uint uVar19;
  byte bVar23;
  char cVar24;
  byte bVar25;
  char cVar29;
  uint uVar26;
  char *pcVar27;
  undefined3 uVar30;
  byte *pbVar28;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar36;
  char cVar37;
  char *unaff_EBX;
  char *pcVar34;
  undefined3 uVar38;
  byte *unaff_EBP;
  uint uVar39;
  byte *unaff_ESI;
  undefined1 *puVar40;
  int *unaff_EDI;
  undefined2 in_ES;
  bool bVar41;
  byte in_AF;
  float10 in_ST0;
  byte *pbStack_23;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  char *pcStack_18;
  byte bVar20;
  undefined2 uVar22;
  byte *pbVar35;
  
                    /* .NET CLR Managed Code */
  iVar11 = unaff_EDI[-0x12];
  *in_EAX = *in_EAX + (char)in_EAX;
  iVar11 = CONCAT31((int3)(CONCAT22((short)((uint)possibleOptions >> 0x10),
                                    CONCAT11((char)((uint)possibleOptions >> 8) + (char)iVar11,
                                             (byte)possibleOptions)) >> 8),
                    (byte)possibleOptions | *param_2);
  while( true ) {
    pbVar12 = (byte *)((int)in_EAX * 2);
    *pbVar12 = *pbVar12 >> 1 | *pbVar12 << 7;
    cVar7 = (char)in_EAX;
    *param_2 = *param_2 + cVar7;
    bVar15 = (char)iVar11 - (char)param_2;
    *in_EAX = *in_EAX + cVar7;
    bVar36 = *(byte *)(unaff_EDI + 0x14);
    *(byte **)in_EAX = in_EAX + *(int *)in_EAX;
    puVar16 = (uint *)CONCAT22((short)((uint)iVar11 >> 0x10),
                               CONCAT11((byte)((uint)iVar11 >> 8) | bVar36 | bRam0ca87216,bVar15));
    in_EAX[6] = in_EAX[6] + (char)((uint)param_2 >> 8);
    *param_2 = *param_2 - (char)((uint)in_EAX >> 8);
    bVar36 = *param_2;
    *param_2 = *param_2 + bVar15;
    if (!CARRY1(bVar36,bVar15)) {
      in_EAX = (byte *)((uint)in_EAX | 0x16737000);
      *(byte **)in_EAX = in_EAX + *(int *)in_EAX;
      bVar36 = (byte)((uint)unaff_EBX >> 8) | param_2[2];
      unaff_EBX = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar36,(char)unaff_EBX)
                                  );
      if (bVar36 != 0) {
        *in_EAX = *in_EAX + cVar7;
        param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),
                                   (char)param_2 + unaff_ESI[(int)unaff_EDI * 8]);
        in_EAX = (byte *)((uint)in_EAX ^ 0x73060000);
        puVar16 = (uint *)((int)puVar16 + 1);
      }
    }
    *(byte **)in_EAX = in_EAX + *(int *)in_EAX;
    bVar23 = (byte)param_2 | unaff_ESI[(int)unaff_EDI * 8];
    iVar11 = CONCAT31((int3)((uint)param_2 >> 8),bVar23);
    bVar36 = *in_EAX;
    bVar15 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar15;
    uVar14 = (undefined3)((uint)in_EAX >> 8);
    bVar31 = (byte)((uint)puVar16 >> 8);
    bVar33 = (byte)((uint)in_EAX >> 8);
    if (CARRY1(bVar36,bVar15)) break;
    in_ST0 = in_ST0 * (float10)*(short *)((int)puVar16 + iVar11);
    bVar23 = bVar15 - 7;
    pcVar9 = (char *)CONCAT31(uVar14,bVar23);
    *unaff_EDI = (int)(pcVar9 + (uint)(bVar15 < 7) + *unaff_EDI);
    out(*(undefined4 *)unaff_ESI,(short)iVar11);
    param_2 = (byte *)(iVar11 + 1);
    *pcVar9 = *pcVar9 + bVar23;
    unaff_EBX = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | bVar33);
    pbVar12 = unaff_ESI + 8;
    out(*(undefined4 *)(unaff_ESI + 4),(short)param_2);
    *pcVar9 = *pcVar9 + bVar23;
    uVar21 = (undefined2)((uint)puVar16 >> 0x10);
    pbVar28 = (byte *)CONCAT22(uVar21,CONCAT11(bVar31 | *param_2,(char)puVar16));
    bVar36 = *pbVar28;
    *pbVar28 = *pbVar28 + bVar23;
    *pcVar9 = *pcVar9 + bVar23 + CARRY1(bVar36,bVar23);
    *param_2 = *param_2 + bVar23;
    *(byte *)unaff_EDI = (char)*unaff_EDI + bVar33;
    iVar11 = CONCAT22(uVar21,CONCAT11(0x1c,(char)puVar16));
    *(int *)((int)pcVar9 * 2) = *(int *)((int)pcVar9 * 2) + iVar11;
    *pcVar9 = *pcVar9 + bVar23;
    *unaff_EBX = *unaff_EBX + (char)param_2;
    *(byte *)((int)pcVar9 * 2) = *(byte *)((int)pcVar9 * 2) ^ bVar23;
    *pcVar9 = *pcVar9 + bVar23;
    cRam02110000 = cRam02110000 + (char)((uint)param_2 >> 8);
    unaff_ESI = unaff_ESI + 0xc;
    out(*(undefined4 *)pbVar12,(short)param_2);
    in_EAX = (byte *)0xa0a0000;
  }
  *in_EAX = *in_EAX + bVar15;
  bVar36 = unaff_EBX[-0x27];
  *in_EAX = *in_EAX + bVar15;
  bVar15 = bVar15 - *in_EAX;
  piVar10 = (int *)CONCAT31(uVar14,bVar15);
  pcStack_18 = unaff_EBX;
  uVar26 = CONCAT22((short)((uint)param_2 >> 0x10),
                    CONCAT11((byte)((uint)param_2 >> 8) | bVar36,bVar23)) + 1;
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  *(byte *)piVar10 = (char)*piVar10 + bVar15;
  *(byte *)piVar10 = (char)*piVar10 + bVar15;
  puVar8 = (uint *)CONCAT31(uVar14,bVar15);
  uVar4 = *puVar8;
  *(byte *)puVar8 = (byte)*puVar8 + bVar15;
  cVar7 = (char)((uint)unaff_EBX >> 8);
  if (CARRY1((byte)uVar4,bVar15) || (byte)*puVar8 == 0) {
    *(byte *)puVar8 = (byte)*puVar8 + bVar15;
    uVar26 = uVar26 & *(uint *)(unaff_EBP + 0x53);
  }
  else {
    *unaff_ESI = *unaff_ESI ^ bVar31;
    puVar40 = (undefined1 *)((uint)unaff_ESI ^ *puVar8 ^ *puVar16);
    *(byte *)puVar8 = (byte)*puVar8 + bVar15;
    cRam00006c00 = cRam00006c00 + bVar15;
    pcVar9 = (char *)(CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar33 + (char)uVar26,bVar15))
                     ^ 0x7e230000);
    *pcVar9 = *pcVar9 + bVar15;
    pcVar9 = pcVar9 + 1;
    bVar15 = (byte)pcVar9;
    *pcVar9 = *pcVar9 + bVar15;
    bVar36 = 9 < (bVar15 & 0xf) | in_AF;
    bVar15 = bVar15 + bVar36 * -6;
    cVar6 = bVar15 + (0x9f < bVar15 | bVar36 * (bVar15 < 6)) * -0x60;
    puVar8 = (uint *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6);
    *(byte *)puVar8 = (byte)*puVar8 + cVar6;
    uVar26 = uVar26 & *(uint *)(unaff_EBX + 0x74);
    unaff_ESI = puVar40 + 1;
    out(*puVar40,(short)uVar26);
    *(byte *)puVar8 = (byte)*puVar8 + cVar6;
    *(byte *)puVar8 = (byte)*puVar8 + cVar7;
    *(byte *)puVar8 = (byte)*puVar8 + cVar6;
    uStack_1b = (undefined2)((uint)unaff_EBX >> 8);
    uStack_19 = (undefined1)((uint)unaff_EBX >> 0x18);
  }
  *(byte *)((int)puVar8 + 0x73) = *(byte *)((int)puVar8 + 0x73) + (char)(uVar26 >> 8);
  uVar4 = *puVar8;
  bVar36 = (byte)puVar8;
  *(byte *)puVar8 = (byte)*puVar8 + bVar36;
  *(byte *)puVar8 = (byte)*puVar8 + bVar36 + CARRY1((byte)uVar4,bVar36);
  *(byte *)puVar8 = (byte)*puVar8 + bVar36;
  piVar10 = (int *)((uint)puVar8 & *(uint *)((int)unaff_EDI + 0x55));
  pcVar17 = (char *)((int)puVar16 + -1);
  bVar15 = (byte)piVar10;
  *(byte *)piVar10 = (char)*piVar10 + bVar15;
  pbVar12 = (byte *)((int)piVar10 + -0x13ffff8d);
  bVar36 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar15;
  pcVar9 = (char *)((int)piVar10 + (-(uint)CARRY1(bVar36,bVar15) - *piVar10));
  *unaff_EBX = *unaff_EBX + (char)((uint)pcVar9 >> 8);
  pcVar27 = (char *)(uVar26 + 1);
  pbVar35 = (byte *)((int)unaff_EDI + 1);
  cVar6 = in((short)pcVar27);
  *(char *)unaff_EDI = cVar6;
  pbVar28 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,(short)pcVar27);
  cRam001e090b = (char)pcVar9;
  *pcVar9 = *pcVar9 + cRam001e090b;
  *pcVar9 = *pcVar9 + cRam001e090b;
  *pcVar9 = *pcVar9 + cRam001e090b;
  cRam001e090b = cRam001e090b + *pcVar9;
  pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cRam001e090b);
  *pcVar17 = *pcVar17 + cRam001e090b;
  uStack_1f = SUB42(pbVar35,0);
  uVar21 = uStack_1f;
  *pcVar9 = *pcVar9 + cRam001e090b;
  piVar10 = (int *)((uint)pcVar9 & 0x160033);
  bVar15 = (byte)piVar10;
  *pcVar17 = *pcVar17 + bVar15;
  *(byte *)piVar10 = (char)*piVar10 + bVar15;
  *pcVar17 = *pcVar17 + cVar7;
  *(byte *)piVar10 = (char)*piVar10 + bVar15;
  pcVar34 = unaff_EBX + 1;
  *(byte *)piVar10 = (char)*piVar10 + bVar15;
  bVar23 = (byte)pcVar17;
  uVar22 = (undefined2)((uint)pcVar17 >> 0x10);
  bVar20 = (char)((uint)pcVar17 >> 8) + bVar23;
  pbVar18 = (byte *)CONCAT22(uVar22,CONCAT11(bVar20,bVar23));
  *(byte *)piVar10 = (char)*piVar10 + bVar15;
  cVar29 = (char)pcVar34;
  *pcVar34 = *pcVar34 + cVar29;
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  pbVar12 = (byte *)CONCAT22((short)((uint)piVar10 >> 0x10),CONCAT11(bVar15,bVar15));
  *pbVar12 = *pbVar12 + bVar15;
  *(char *)((int)pbVar12 * 2) = *(char *)((int)pbVar12 * 2) + cVar29;
  *pbVar12 = *pbVar12 + bVar15;
  uStack_1f = CONCAT11(bVar15,bVar15);
  uStack_1d = (undefined1)((uint)piVar10 >> 0x10);
  uStack_1c = 0;
  *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
  cVar24 = (char)pcVar27;
  cRamf1000000 = cRamf1000000 + cVar24;
  *pbVar12 = *pbVar12 + bVar15;
  bVar33 = (byte)((uint)pcVar27 >> 8);
  cRam14000000 = cRam14000000 + bVar33;
  *pbVar12 = *pbVar12 + bVar15;
  *pcVar34 = *pcVar34 + bVar33;
  *pbVar12 = *pbVar12 + bVar15;
  *pcVar27 = *pcVar27 + cVar24;
  bVar36 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar15;
  uVar14 = (undefined3)((uint)pbVar12 >> 8);
  cVar7 = bVar15 + CARRY1(bVar36,bVar15);
  pcVar9 = (char *)CONCAT31(uVar14,cVar7);
  *pcVar9 = *pcVar9 + cVar7;
  pbStack_23 = pbVar35;
  *pcVar9 = *pcVar9 + cVar7;
  *pbVar18 = *pbVar18 + cVar7;
  *pcVar9 = *pcVar9 + cVar7;
  *pbVar35 = *pbVar35 + cVar7;
  *pcVar9 = *pcVar9 + cVar7;
  *pbVar28 = *pbVar28 + cVar24;
  *pcVar9 = *pcVar9 + cVar7;
  *pcVar27 = *pcVar27 + cVar24;
  *pcVar9 = *pcVar9 + cVar7;
  *pcVar27 = *pcVar27 + bVar33;
  *pcVar9 = *pcVar9 + cVar7;
  cRam00000000 = cRam00000000 + bVar23;
  *pcVar27 = *pcVar27 + bVar23;
  *pbVar18 = *pbVar18 + cVar7;
  *pcVar9 = *pcVar9 + cVar7;
  *pcVar9 = *pcVar9 + cVar7;
  *pbVar28 = *pbVar28 + cVar7;
  *pbVar18 = *pbVar18 + bVar15;
  pcVar9 = (char *)CONCAT31(uVar14,cVar7 + ' ');
  *pcVar9 = *pcVar9 + bVar20;
  iVar11 = CONCAT31(uVar14,cVar7 + '@');
  pbVar12 = (byte *)((int)&pbStack_23 + iVar11);
  bVar36 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar33;
  pbVar5 = pbStack_23;
  cVar6 = ((cVar7 + '@') - pbVar28[iVar11]) - CARRY1(bVar36,bVar33);
  *pbVar28 = *pbVar28 + (char)((uint)pcVar34 >> 8);
  pcVar9 = (char *)(CONCAT31(uVar14,cVar6 + '$') + 4);
  *pcVar9 = *pcVar9 + cVar29;
  pcVar9 = unaff_EBX + 2;
  cVar6 = cVar6 + '*';
  pbVar12 = (byte *)(CONCAT31(uVar14,cVar6) + 4);
  bVar36 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar33;
  cVar7 = pcVar27[(int)pbVar18];
  *(char *)((int)unaff_EDI + 0x6048c05) = *(char *)((int)unaff_EDI + 0x6048c05) + bVar15;
  cVar37 = (char)((uint)pcVar9 >> 8);
  cVar29 = bVar33 + cVar37;
  iVar11 = CONCAT22((short)((uint)pcVar27 >> 0x10),CONCAT11(cVar29,cVar24));
  *pbVar28 = *pbVar28 + (char)pcVar9;
  *pbVar35 = *pbVar28;
  uVar38 = (undefined3)((uint)pcVar9 >> 8);
  bVar31 = (char)pcVar9 + cVar29;
  pbStack_23 = (byte *)CONCAT22(pbStack_23._2_2_,in_ES);
  pcVar17 = (char *)(CONCAT31(uVar14,((cVar6 - cVar7) - CARRY1(bVar36,bVar33)) + ' ') + 0x160d31);
  *pcVar17 = *pcVar17 + cVar29;
  *(undefined2 *)(iVar11 * 2) = in_ES;
  pcVar9 = (char *)(CONCAT31(uVar38,bVar31) + 0x6089308);
  bVar15 = (byte)((uint)pcVar17 >> 8);
  *pcVar9 = *pcVar9 + bVar15;
  uVar30 = (undefined3)((uint)iVar11 >> 8);
  cVar24 = cVar24 + (char)pcVar17;
  pbVar12 = (byte *)CONCAT31(uVar30,cVar24);
  *pbVar12 = *pbVar12 | bVar31;
  uVar14 = (undefined3)((uint)pcVar17 >> 8);
  cVar7 = (char)pcVar17 + '\x06';
  iVar11 = CONCAT31(uVar14,cVar7);
  pcVar9 = (char *)CONCAT31(uVar30,cVar24 + bVar15);
  (&stack0x08efffdf)[iVar11] = (&stack0x08efffdf)[iVar11] | bVar23;
  cVar7 = cVar7 - *(char *)(iVar11 + 0xe05ab05);
  pbVar18[0x11] = pbVar18[0x11] + cVar7;
  *(undefined2 *)(CONCAT31(uVar14,cVar7) + 0xe05ab05) = in_ES;
  pbVar5[0x12] = pbVar5[0x12] + cVar7;
  bVar32 = bVar31 + *pcVar9 + (CONCAT31(uVar14,cVar7) < 0xd4000612);
  pbVar35 = (byte *)CONCAT31(uVar38,bVar32);
  bVar36 = cVar7 + 6U + bVar23 + CARRY1(cVar7 + 6U,bVar23) + 0x20;
  iVar11 = CONCAT31(uVar14,bVar36 + bVar15) + (uint)CARRY1(bVar36,bVar15);
  pbVar28 = (byte *)((uint)pcVar9 | _uRam0e05ab05);
  pcVar9 = (char *)(iVar11 + -0x4bc4ea02);
  bVar25 = (byte)pbVar28;
  *pbVar28 = *pbVar28 + bVar25;
  _uRam0e05ab05 = CONCAT22(uRam0e05ab07,(short)ROUND(in_ST0));
  *pcVar9 = *pcVar9 + (char)((uint)pcVar9 >> 8);
  iVar11 = iVar11 + -0x1d24e9f4;
  pbVar18[-0x68fa54e9] = pbVar18[-0x68fa54e9] + bVar23;
  unaff_EBP[0x6000017] = unaff_EBP[0x6000017] + bVar32;
  bVar31 = (char)((uint)iVar11 >> 8) + bVar23 + bVar20;
  uVar14 = CONCAT21((short)((uint)iVar11 >> 0x10),bVar31);
  cVar7 = uRam0e05ab05._1_1_;
  pbStack_23 = (byte *)CONCAT22(pbStack_23._2_2_,in_ES);
  bVar36 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar23;
  *pbVar28 = (*pbVar28 - bVar32) - CARRY1(bVar36,bVar23);
  pbVar12 = (byte *)CONCAT31(uVar14,cVar7 + '\x06');
  bVar36 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar31;
  pbVar12 = pbVar5 + 0x18bf0006 + (int)pbVar28;
  bVar15 = *pbVar12;
  bVar33 = *pbVar12;
  *pbVar12 = (bVar33 - bVar20) - CARRY1(bVar36,bVar31);
  iVar11 = CONCAT31(uVar14,((cVar7 + '\x06') - pbVar18[0xe05ab07]) -
                           (bVar15 < bVar20 || (byte)(bVar33 - bVar20) < CARRY1(bVar36,bVar31)));
  bVar36 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar23;
  uVar26 = ((int)unaff_EBP - (int)pbVar5) - (uint)CARRY1(bVar36,bVar23);
  *pbVar28 = (*pbVar28 - bVar23) -
             (unaff_EBP < pbVar5 ||
             (uint)((int)unaff_EBP - (int)pbVar5) < (uint)CARRY1(bVar36,bVar23));
  bVar36 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar32;
  *(uint *)(&stack0x199affe3 + iVar11) =
       (*(int *)(&stack0x199affe3 + iVar11) - (int)pbVar18) - (uint)CARRY1(bVar36,bVar32);
  *(int *)pbVar5 = iVar11;
  uVar14 = (undefined3)((uint)(iVar11 + 0x19d30006) >> 8);
  *(uint *)(pbVar5 + 0x1a14000a + (int)pbVar28) =
       (*(int *)(pbVar5 + 0x1a14000a + (int)pbVar28) - uVar26) - (uint)CARRY1(bVar20,bVar32);
  bVar36 = (byte)uRam0e05ab07;
  pcVar9 = (char *)(CONCAT31(uVar14,(byte)uRam0e05ab07) + 0x6048c1a);
  *pcVar9 = *pcVar9 + bVar20 + bVar32;
  uVar30 = (undefined3)((uint)pbVar28 >> 8);
  bVar15 = bVar25 + bVar36;
  pbVar12 = (byte *)CONCAT31(uVar30,bVar15);
  bVar36 = ((bVar20 + bVar32) - (pbVar5 + 0x1aeb000a)[(int)pbVar12]) - CARRY1(bVar25,bVar36);
  puVar16 = (uint *)CONCAT31(uVar14,uRam0e05ab07._1_1_);
  *puVar16 = *puVar16 << (bVar23 & 0x1f) | *puVar16 >> 0x20 - (bVar23 & 0x1f);
  pbVar12[0x61b971b] = pbVar12[0x61b971b] + bVar36;
  cVar6 = bVar36 + bVar23;
  uVar19 = CONCAT22(uVar22,CONCAT11(cVar6,bVar23));
  uVar4 = uVar26 - *(uint *)(pbVar35 + -0x1afff9fb);
  uVar39 = uVar4 - CARRY1(bVar36,bVar23);
  uVar26 = (uint)(uVar26 < *(uint *)(pbVar35 + -0x1afff9fb) || uVar4 < CARRY1(bVar36,bVar23));
  uVar4 = *(uint *)(pbVar5 + 0x10b8000a + (int)pbVar12);
  uVar1 = uVar39 - *(uint *)(pbVar5 + 0x10b8000a + (int)pbVar12);
  uVar13 = puVar16[0x5016ac9];
  bVar36 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar32;
  uVar13 = (CONCAT31((int3)((uint)((int)puVar16 + 0x600001b) >> 8),
                     ((char)((int)puVar16 + 0x600001b) - (char)uVar13) -
                     (uVar39 < uVar4 || uVar1 < uVar26)) + -0x16041a) - (uint)CARRY1(bVar36,bVar32);
  bRam00061d20 = bRam00061d20 ^ bVar32;
  pbVar5[4] = bRam0e05ab09;
  uVar3 = CONCAT14(uVar13 < 0xa041a,uRam000a041a);
  uVar2 = (ulonglong)(uVar3 >> (bVar23 & 0x1f)) | (ulonglong)uVar3 << 0x21 - (bVar23 & 0x1f);
  uRam000a041a = (undefined4)uVar2;
  bVar41 = (uVar2 & 0x100000000) != 0;
  bVar33 = bVar32 + bRam0e05ab0a + bVar41;
  uVar4 = (uint)(CARRY1(bVar32,bRam0e05ab0a) || CARRY1(bVar32 + bRam0e05ab0a,bVar41));
  uVar39 = (uVar13 + 0xe1b6fbd4) - uVar4;
  uVar4 = (uint)(uVar13 - 0xa041a < 0x1e3f0012 || uVar13 + 0xe1b6fbd4 < uVar4);
  uVar13 = uVar39 + 0xe1a4ffee;
  iVar11 = ((uVar13 - uVar4) + -0x1e9f0006) - (uint)(uVar39 < 0x1e5b0012 || uVar13 < uVar4);
  pbStack_23 = (byte *)CONCAT22(pbStack_23._2_2_,uVar21);
  bRam0e05ab0a = bRam0e05ab0a | bVar33;
  pcVar9 = (char *)(CONCAT31(uVar38,bVar33) + 0x615f91f);
  *pcVar9 = *pcVar9 + bVar23;
  cRam141ba429 = cRam141ba429 + cVar37;
  bVar31 = (byte)iVar11;
  uVar14 = (undefined3)((uint)iVar11 >> 8);
  bVar36 = bVar31 + bVar15;
  pcVar17 = (char *)CONCAT31(uVar14,bVar36);
  cVar7 = (bVar33 - *(char *)(CONCAT31(uVar38,bVar33) + 0xe05ab0a)) - CARRY1(bVar31,bVar15);
  *pcVar17 = *pcVar17 + bVar15;
  *pbVar12 = *pbVar12 & bVar36;
  pcVar9 = (char *)(uVar19 - 0x74);
  *pcVar9 = *pcVar9 + cVar6;
  pcVar9 = (char *)((uVar1 - uVar26) + 0x1a217921);
  *pcVar9 = *pcVar9 + cVar7 + ' ';
  pcVar17[0x1a217921] = pcVar17[0x1a217921] + bVar15;
  pbVar12[0x6217921] = pbVar12[0x6217921] + cVar37;
  pbVar12[0x6041a21] = pbVar12[0x6041a21] + (char)((uint)pbVar28 >> 8);
  puVar16 = (uint *)CONCAT31(uVar30,bVar15 + bVar23);
  *puVar16 = *puVar16 & (uint)pcVar17;
  bVar36 = bVar36 * '\x02';
  iVar11 = CONCAT31(uVar14,bVar36);
  *(uint *)(&stack0x2210ffff + CONCAT31(uVar38,cVar7 + '&')) =
       *(uint *)(&stack0x2210ffff + CONCAT31(uVar38,cVar7 + '&')) & uVar19;
  bRam0ecf0006 = bRam0ecf0006 & bVar36;
  pbVar5[0x27] = pbVar5[0x27] + bVar23;
  pcVar9 = (char *)(iVar11 + 0xe048c22);
  *pcVar9 = *pcVar9 + bVar15 + bVar23;
  pcVar9 = (char *)(iVar11 + 0x618fd22);
  *pcVar9 = *pcVar9 + cVar6;
  bRam2524000a = bRam2524000a & bVar36 + bVar23;
  bRam000a05ab = bRam000a05ab & 0x9d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


