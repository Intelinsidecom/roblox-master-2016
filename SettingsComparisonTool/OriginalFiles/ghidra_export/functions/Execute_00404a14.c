/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404a14
 * Raw Name    : Execute
 * Demangled   : Execute
 * Prototype   : int Execute(uint * param_1, uint * param_2, uint * param_3, undefined4 param_4, char * param_5)
 * Local Vars  : uStack_42, uStack_64, uStack_40, uStack_41, uStack_28, uStack_3e, uStack_18, puStack_24, pbStack_c, puStack_10, uVar1, apuStack_8, uVar3, uVar2, cVar5, bVar4, bVar7, cVar6, in_EAX, uVar8, pcVar10, uVar9, pcVar12, iVar11, piVar14, pbVar13, puVar16, puVar15, pbVar18, pbVar17, pcVar20, puVar19, uVar22, uVar21, iVar24, pcVar23, bVar26, bVar25, uVar28, uVar27, bVar30, cVar29, pbVar32, puVar31, bVar34, iVar33, unaff_EBX, cVar35, pbVar37, ppuVar36, uVar39, puVar38, cVar41, cVar40, ppuVar42, unaff_EBP, puVar44, ppuVar43, unaff_ESI, puVar45, puVar46, unaff_EDI, in_DS, in_ES, bVar47, in_CF, in_AF, param_1, param_2, param_3, param_4, param_5, uStack_68, uStack_66, uStack_67
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall Execute(uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,char *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 in_EAX;
  char *pcVar10;
  int iVar11;
  undefined3 uVar21;
  char *pcVar12;
  byte *pbVar13;
  int *piVar14;
  ushort *puVar15;
  uint *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint *puVar19;
  undefined3 uVar22;
  char *pcVar20;
  byte bVar25;
  byte bVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  char *pcVar23;
  int iVar24;
  char cVar29;
  byte bVar30;
  byte bVar34;
  uint *puVar31;
  byte *pbVar32;
  int iVar33;
  char cVar35;
  char cVar40;
  char *unaff_EBX;
  undefined4 **ppuVar36;
  byte *pbVar37;
  uint *puVar38;
  char cVar41;
  uint uVar39;
  undefined4 *unaff_EBP;
  undefined4 **ppuVar42;
  undefined4 **ppuVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  byte *unaff_ESI;
  uint *unaff_EDI;
  uint *puVar46;
  undefined2 in_ES;
  undefined2 in_DS;
  char in_CF;
  bool bVar47;
  byte in_AF;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined2 uStack_28;
  uint *puStack_24;
  undefined2 uStack_18;
  uint *puStack_10;
  byte *pbStack_c;
  undefined4 *apuStack_8 [2];
  
                    /* .NET CLR Managed Code */
  bVar4 = (char)in_EAX + '\x13' + in_CF;
  bVar47 = 0x8c < bVar4;
  puVar44 = (undefined4 *)CONCAT31((int3)((uint)in_EAX >> 8),bVar4 + 0x73);
  while( true ) {
    uVar1 = GlobalDescriptorTableRegister();
    *puVar44 = uVar1;
    pcVar10 = (char *)((int)puVar44 + uRam7d020511 + (uint)bVar47);
    ppuVar36 = apuStack_8;
    ppuVar43 = apuStack_8;
    ppuVar42 = apuStack_8;
    apuStack_8[0] = unaff_EBP;
    cVar6 = '\x03';
    do {
      unaff_EBP = unaff_EBP + -1;
      ppuVar36 = ppuVar36 + -1;
      *ppuVar36 = (undefined4 *)*unaff_EBP;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    pcRam00c82802 =
         pcVar10 + (int)(pcRam00c82802 +
                        (CARRY4((uint)puVar44,uRam7d020511) ||
                        CARRY4((int)puVar44 + uRam7d020511,(uint)bVar47)));
    bVar4 = *unaff_ESI;
    bVar7 = (byte)pcVar10;
    *unaff_ESI = *unaff_ESI + bVar7;
    uVar21 = (undefined3)((uint)pcVar10 >> 8);
    uVar22 = (undefined3)((uint)param_2 >> 8);
    if (SCARRY1(bVar4,bVar7) != (char)*unaff_ESI < '\0') break;
    *pcVar10 = *pcVar10 + bVar7;
    bVar4 = bVar7 + 0x6f;
    pbVar13 = (byte *)CONCAT31(uVar21,bVar4);
    *param_1 = (*param_1 - (int)pbVar13) - (uint)(0x90 < bVar7);
    *(char *)param_2 = (char)*param_2 + (char)param_1;
    unaff_EBP = (undefined4 *)((int)apuStack_8 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    param_2 = (uint *)CONCAT31(uVar22,(byte)param_2 | *unaff_ESI);
    *(char *)param_1 = (char)*param_1 + '\x01';
    cVar6 = bVar4 - *pbVar13;
    unaff_ESI = unaff_ESI + (-(uint)(bVar4 < *pbVar13) - *(int *)CONCAT31(uVar21,cVar6));
    uVar9 = CONCAT31(uVar21,cVar6 + *(char *)CONCAT31(uVar21,cVar6));
    bVar4 = (byte)((uint)param_1 >> 8);
    bVar47 = CARRY1(bRam14110000,bVar4);
    bRam14110000 = bRam14110000 + bVar4;
    uVar39 = (uint)bVar47;
    uVar2 = uVar9 + *(uint *)(unaff_EBX + (int)unaff_ESI * 2);
    bVar47 = CARRY4(uVar9,*(uint *)(unaff_EBX + (int)unaff_ESI * 2)) || CARRY4(uVar2,uVar39);
    puVar44 = (undefined4 *)(uVar2 + uVar39);
  }
  *pcVar10 = *pcVar10 + bVar7;
  iVar11 = CONCAT31(uVar21,bVar7 + 0x11) + 0xc57b;
  bVar4 = (byte)iVar11;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  cVar29 = (byte)param_2 + (char)*param_1;
  puVar31 = (uint *)CONCAT31(uVar22,cVar29);
  iVar11 = (CONCAT31((int3)((uint)iVar11 >> 8),bVar4 + 0x6f) - (uint)(0x90 < bVar4)) + -0x18093a86;
  cVar6 = (char)iVar11;
  uVar21 = (undefined3)((uint)iVar11 >> 8);
  cVar5 = cVar6 + '\x02';
  pbVar13 = (byte *)CONCAT31(uVar21,cVar5);
  if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar13 = *pbVar13 + cVar5;
  iVar11 = CONCAT31(uVar21,cVar6 + 'q');
  pcVar10 = (char *)(iVar11 + 1);
  cVar6 = (char)pcVar10;
  *pcVar10 = *pcVar10 + cVar6;
  unaff_EBX = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) - cVar6,(char)unaff_EBX));
  *pcVar10 = *pcVar10 + cVar6;
  puVar31 = (uint *)CONCAT31(uVar22,cVar29 - (char)*param_1);
  pcVar12 = (char *)(iVar11 + 0x757b03);
  pcVar10 = (char *)((int)unaff_EDI + (int)apuStack_8 * 2);
  cVar6 = (char)pcVar12;
  *pcVar10 = *pcVar10 + cVar6;
  *pcVar12 = *pcVar12 + cVar6;
  *unaff_ESI = *unaff_ESI - (char)((uint)pcVar12 >> 8);
  *pcVar12 = *pcVar12 + cVar6;
  unaff_EDI = (uint *)((int)unaff_EDI - CONCAT22(uStack_40,CONCAT11(uStack_41,uStack_42)));
  *pcVar12 = *pcVar12 + cVar6;
  pbVar13 = (byte *)(CONCAT31((int3)((uint)pcVar12 >> 8),cVar6 + '\x11') + 0x757b02);
  pcVar10 = (char *)((int)unaff_EDI + (int)apuStack_8 * 2);
  bVar7 = (byte)pbVar13;
  *pcVar10 = *pcVar10 + bVar7;
  bVar4 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar7;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
  pbRam011006fe = pbVar13 + (int)(pbRam011006fe + CARRY1(bVar4,bVar7));
  bVar4 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + bVar7;
  if (!CARRY1(bVar4,bVar7)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar4;
    bVar25 = (byte)param_1;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | *pbVar13,bVar25));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar21 = (undefined3)((uint)pbVar13 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar6 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar10 = (char *)CONCAT31(uVar21,cVar6);
    *pcVar10 = *pcVar10 + cVar6;
    unaff_EDI = (uint *)((int)unaff_EDI - CONCAT13(uStack_3e,CONCAT21(uStack_40,uStack_41)));
    *pcVar10 = *pcVar10 + cVar6;
    iVar11 = CONCAT31(uVar21,cVar6 + '\x11') + 0xc57b;
    iVar11 = CONCAT31((int3)((uint)iVar11 >> 8),(char)iVar11 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar11;
    bVar7 = bVar4 + 0x6f;
    pbVar13 = (byte *)CONCAT31((int3)((uint)iVar11 >> 8),bVar7);
    *param_1 = (*param_1 - (int)pbVar13) - (uint)(0x90 < bVar4);
    uVar39 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar25;
    pbRam011106fe = pbVar13 + (int)(pbRam011106fe + CARRY1((byte)uVar39,bVar25));
    bVar4 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar7;
    if (!CARRY1(bVar4,bVar7)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    bVar4 = (byte)param_1;
    bVar7 = (byte)((uint)param_1 >> 8) | *pbVar13;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar7,bVar4));
    *pbVar13 = *pbVar13 - (char)pbVar13;
    *unaff_EBX = *unaff_EBX + bVar7;
    out(*(undefined4 *)unaff_ESI,(short)puVar31);
    *param_1 = *param_1 & (uint)pbVar13;
    uVar39 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar4;
    pbVar13 = pbVar13 + (uint)CARRY1((byte)uVar39,bVar4) + *(int *)(unaff_ESI + 4);
    *pbVar13 = *pbVar13 + (char)pbVar13;
    *(byte *)param_1 = (byte)*param_1 + (char)puVar31;
    pbVar18 = unaff_ESI + 4;
    while( true ) {
      unaff_ESI = pbVar18 + 4;
      out(*(undefined4 *)pbVar18,(short)puVar31);
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),(byte)pbVar13 & (byte)*param_1);
      *(byte *)puVar31 = (byte)*puVar31 + (char)param_1;
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((byte)((uint)puVar31 >> 8) | unaff_EBX[0x14],(char)puVar31
                                         ));
      *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
code_r0x00404ad4:
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
      pbVar13 = (byte *)((uint)pbVar13 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar13;
code_r0x00404add:
      bVar4 = (byte)pbVar13;
      uVar21 = (undefined3)((uint)pbVar13 >> 8);
      cVar6 = bVar4 + 8;
      pbVar13 = (byte *)CONCAT31(uVar21,cVar6);
      if (SCARRY1(bVar4,'\b') == cVar6 < '\0') break;
      *pbVar13 = *pbVar13 + cVar6;
      cVar6 = bVar4 + 10;
      piVar14 = (int *)CONCAT31(uVar21,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        *piVar14 = (int)(*piVar14 + (int)piVar14);
        goto code_r0x00404b18;
      }
      *(char *)piVar14 = (char)*piVar14 + cVar6;
      puVar19 = (uint *)CONCAT31(uVar21,bVar4 + 0x7c);
      *puVar19 = *puVar19 & (uint)param_1;
      *(char *)((int)puVar19 + 0x11) = *(char *)((int)puVar19 + 0x11) + (char)((uint)puVar31 >> 8);
      cVar6 = (char)((int)puVar19 + 0xc67b);
      uVar21 = (undefined3)((uint)((int)puVar19 + 0xc67b) >> 8);
      bVar4 = cVar6 + 8;
      pbVar13 = (byte *)CONCAT31(uVar21,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar13 = *pbVar13 + bVar4;
        cRam02060000 = cVar6 + 'w';
        puVar19 = (uint *)CONCAT31(uVar21,cRam02060000);
        *(byte *)puVar19 = (byte)*puVar19 + cRam02060000;
        cVar6 = (char)param_1;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar19,cVar6));
        *puVar19 = *puVar19 - (int)puVar19;
        *(byte *)puVar31 = (byte)*puVar31 + cVar6;
        pbVar13 = unaff_ESI + 4;
        out(*(undefined4 *)unaff_ESI,(short)puVar31);
        unaff_ESI = pbVar13;
        if ((POPCOUNT((byte)*puVar31) & 1U) == 0) goto code_r0x00404b0f;
        pcVar10 = (char *)((uint)puVar19 | *puVar19);
        goto code_r0x00404b89;
      }
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar4;
      *(byte **)unaff_ESI = pbVar13 + (uint)CARRY1(bVar7,bVar4) + *(int *)unaff_ESI;
      pbVar18 = unaff_ESI;
    }
    *unaff_ESI = *unaff_ESI + 1;
    *param_1 = (uint)(pbVar13 + (uint)(0xf7 < bVar4) + *param_1);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    puVar31 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + 'r');
    piVar14 = (int *)((uint)puVar31 | *puVar31);
    puVar31 = puStack_24;
    ppuVar42 = ppuVar43;
code_r0x00404b18:
    bRam11060000 = (byte)piVar14;
    iVar11 = CONCAT31((int3)((uint)((int)piVar14 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar14 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar11;
    iVar11 = CONCAT31((int3)((uint)iVar11 >> 8),bVar4 + 0x6f);
    *param_1 = (*param_1 - iVar11) - (uint)(0x90 < bVar4);
    cVar6 = (char)param_1;
    *(byte *)puVar31 = (byte)*puVar31 + cVar6;
    bVar7 = (byte)((uint)unaff_EBX >> 8);
    bVar34 = (byte)((uint)puVar31 >> 8) | bVar7;
    pcVar12 = (char *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar34,(byte)puVar31));
    piVar14 = (int *)(iVar11 + 0x73060001);
    *(byte *)param_1 = (byte)*param_1 & (byte)piVar14;
    *pcVar12 = *pcVar12 + cVar6;
    bVar25 = (byte)((uint)param_1 >> 8);
    *(byte *)piVar14 = *(char *)piVar14 - bVar25;
    *(byte *)piVar14 = *(char *)piVar14 + (byte)piVar14;
    iVar11 = *piVar14;
    *piVar14 = *piVar14 - (int)piVar14;
    *unaff_EBX = *unaff_EBX + bVar25;
    pcVar10 = (char *)((uint)piVar14 | *unaff_EDI);
    *pcVar12 = *pcVar12 - bVar25;
    bVar4 = (byte)pcVar10;
    *pcVar10 = *pcVar10 + bVar4;
    ppuVar43 = (undefined4 **)
               (((int)ppuVar42 - iVar11) - *(int *)(pcVar10 + ((int)ppuVar42 - iVar11)));
    uVar28 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar26 = (byte)unaff_EBX;
    cVar5 = bVar7 + unaff_EBX[0x76];
    pbVar18 = (byte *)CONCAT22(uVar28,CONCAT11(cVar5,bVar26));
    *pcVar10 = *pcVar10 + bVar4;
    uVar21 = (undefined3)((uint)pcVar10 >> 8);
    uVar9 = CONCAT31(uVar21,bVar4 + 7);
    puVar19 = (uint *)((int)ppuVar43 + -0x1faeef1);
    uVar39 = *puVar19;
    uVar2 = *puVar19 + uVar9;
    *puVar19 = uVar2 + (0xf8 < bVar4);
    puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
    puVar46 = puStack_24;
    bVar7 = bVar4 + 7 + (byte)*param_1 +
            (CARRY4(uVar39,uVar9) || CARRY4(uVar2,(uint)(0xf8 < bVar4)));
    puVar19 = (uint *)CONCAT31(uVar21,bVar7);
    bVar4 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar7;
    if (CARRY1(bVar4,bVar7)) break;
    *(byte *)puVar19 = (byte)*puVar19 + bVar7;
    unaff_EBX = (char *)CONCAT22(uVar28,CONCAT11(cVar5 + pbVar18[0x76],bVar26));
    uStack_28 = in_ES;
  }
  *(byte *)puVar19 = (byte)*puVar19 + bVar7;
  uVar22 = (undefined3)((uint)pcVar12 >> 8);
  bVar30 = (byte)puVar31 | *pbVar18;
  puVar31 = (uint *)CONCAT31(uVar22,bVar30);
  pcRam2b060000 = (char *)CONCAT31(uVar21,bVar7 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar7 + 0x39)) - (0xd7 < (byte)(bVar7 + 0x11));
  bVar4 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar25;
  pbVar13 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,(short)puVar31);
  bVar4 = (bVar7 + 0x37) - CARRY1(bVar4,bVar25);
  piVar14 = (int *)CONCAT31(uVar21,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar14 = (char)*piVar14 + bVar4;
    iVar11 = CONCAT31(uVar21,bVar4 + 0x11) + 0xc77b;
    pcVar10 = (char *)CONCAT31((int3)((uint)iVar11 >> 8),(char)iVar11 + 'r');
    pcVar10[0x28] = pcVar10[0x28] + bVar34;
code_r0x00404b89:
    cVar6 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar6;
    *pcVar10 = *pcVar10 + cVar6;
    *pcVar10 = *pcVar10 + cVar6;
    puVar15 = (ushort *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6 + 'r');
    uVar8 = (ushort)puVar15 | *puVar15;
    pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*(undefined4 *)pbVar13,(short)puVar31);
    *pcVar10 = *pcVar10 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar14 = (char)*piVar14 + bVar4;
  puVar44 = (undefined4 *)((int)ppuVar43 + -*(int *)((int)unaff_EDI + 0x21));
  *piVar14 = (int)(*piVar14 + (int)piVar14);
  pcVar10 = (char *)CONCAT31(uVar22,bVar30 | *pbVar18);
  pbVar17 = unaff_ESI + 8;
  out(*(undefined4 *)pbVar13,(short)pcVar10);
  uVar39 = *param_1;
  *pcVar10 = *pcVar10 + cVar6;
  uVar39 = CONCAT31(uVar21,bVar4 & (byte)uVar39) | 0x767b02;
  *(byte *)((int)param_1 + (int)pcVar10) = *(byte *)((int)param_1 + (int)pcVar10) + (char)uVar39;
  iVar11 = uVar39 + 0xc67b;
  cVar41 = (char)iVar11;
  uVar21 = (undefined3)((uint)iVar11 >> 8);
  cVar29 = cVar41 + 'r';
  pcVar10 = (char *)CONCAT31(uVar21,cVar29);
  pcVar10[0x28] = pcVar10[0x28] + bVar34;
  *pcVar10 = *pcVar10 + cVar29;
  uVar27 = (undefined2)((uint)param_1 >> 0x10);
  bVar25 = bVar25 | *(byte *)((int)puStack_24 + -0x5e);
  puVar38 = (uint *)CONCAT22(uVar27,CONCAT11(bVar25,cVar6));
  *pcVar10 = *pcVar10 + cVar29;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,uStack_28);
  ppuVar36 = (undefined4 **)CONCAT22(uVar28,CONCAT11(cVar5 + pbVar18[0x76],bVar26));
  *pcVar10 = *pcVar10 + cVar29;
  puVar31 = (uint *)CONCAT31(uVar21,cVar41 + -0x1c);
  pcVar10 = (char *)((uint)puVar31 | *puVar31);
  bVar47 = (POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar10;
  puVar31 = puStack_24;
  puVar45 = puVar44;
  puVar19 = puVar46;
  uVar28 = uStack_28;
  if (!bVar47) goto code_r0x00404ca8;
  *pcVar10 = *pcVar10 + cRam02060000;
  puVar19 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cRam02060000 + 'r');
  *puVar19 = *puVar19 & (uint)puVar38;
  *(char *)((int)puVar19 + 0x11) = *(char *)((int)puVar19 + 0x11) + (char)((ushort)uStack_28 >> 8);
  iVar11 = (int)puVar19 + 0xc77b;
  uVar21 = (undefined3)((uint)iVar11 >> 8);
  cRam02060000 = (char)iVar11 + '\t';
  pbVar13 = (byte *)CONCAT31(uVar21,cRam02060000);
  out(*(undefined4 *)pbVar17,uStack_28);
  *pbVar13 = *pbVar13 + cRam02060000;
  puVar19 = (uint *)CONCAT22(uVar27,CONCAT11(bVar25 | *pbVar13,cVar6));
  *(int *)pbVar13 = *(int *)pbVar13 - (int)pbVar13;
  *(byte *)puStack_24 = (byte)*puStack_24 + cVar6;
  out(*(undefined4 *)(unaff_ESI + 0xc),uStack_28);
  pbVar17 = unaff_ESI + 0x10;
  uVar28 = uStack_28;
  if ((POPCOUNT((byte)*puStack_24) & 1U) != 0) goto code_r0x00404cca;
  *pbVar13 = *pbVar13 + cRam02060000;
  puVar15 = (ushort *)CONCAT31(uVar21,(char)iVar11 + '{');
  uVar8 = (ushort)puVar15 | *puVar15;
  pcVar10 = (char *)CONCAT22((short)((uint)iVar11 >> 0x10),uVar8);
  bVar4 = (byte)uVar8;
  out(*(undefined4 *)(unaff_ESI + 0x10),uStack_28);
  pbVar13 = (byte *)((int)puVar19 + 1);
  bRam11060000 = bVar4;
  *pcVar10 = *pcVar10 + bVar4;
  puVar38 = (uint *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                             CONCAT11((byte)((uint)pbVar13 >> 8) | bRam110cde91,(char)pbVar13));
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar4 - 7);
  *puVar46 = (uint)(pcVar10 + (uint)(bVar4 < 7) + *puVar46);
  pbVar17 = unaff_ESI + 0x18;
  out(*(undefined4 *)(unaff_ESI + 0x14),uStack_28);
  puVar31 = (uint *)((int)puStack_24 + 1);
  *pcVar10 = *pcVar10 + (bVar4 - 7);
  ppuVar36 = (undefined4 **)CONCAT31((int3)((uint)ppuVar36 >> 8),bVar26 | (byte)(uVar8 >> 8));
  do {
    bVar4 = (char)pcVar10 - *pcVar10;
    uVar39 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + bVar4;
    cVar6 = bVar4 - CARRY1((byte)uVar39,bVar4);
    *(byte *)puVar31 = (byte)*puVar31 + cVar6;
    cVar5 = (char)((uint)puVar38 >> 8);
    *(byte *)(puVar46 + 0x673b40) = (byte)puVar46[0x673b40] + cVar5;
    puVar16 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6);
    *(byte *)puVar16 = (byte)*puVar16 + cVar6;
    *(byte *)puVar31 = (byte)*puVar31 + cVar6;
    *(byte **)((int)ppuVar36 + 0x58) = pbVar17 + *(int *)((int)ppuVar36 + 0x58);
    puVar19 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar38 >> 0x10),
                                               CONCAT11(cVar5 + (char)((uint)pcVar10 >> 8),
                                                        (char)puVar38)) >> 8),
                               (char)puVar38 + *(char *)((int)puVar16 * 2));
    *(byte *)puVar16 = (byte)*puVar16 + cVar6;
    *pbVar17 = *pbVar17 + (char)ppuVar36;
_ctor:
    bVar7 = (byte)((uint)puVar19 >> 8);
    uVar39 = *puVar16;
    bVar4 = (byte)puVar19;
    puVar16 = (uint *)((int)puVar16 + (uint)CARRY1(bVar7,(byte)*puVar16) + *puVar16);
    *(byte *)puVar31 = (byte)*puVar31 + bVar4;
    cVar6 = bVar4 - *(byte *)((int)puVar31 + 3);
    puVar38 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar19 >> 0x10),
                                               CONCAT11(bVar7 + (byte)uVar39,bVar4)) >> 8),cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      if (*(byte *)((int)puVar31 + 3) <= bVar4) {
        *puVar16 = (uint)(*puVar16 + (int)puVar16);
        puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | *(byte *)ppuVar36);
        puVar16 = puVar16 + 0x230e;
        puVar19 = puVar38;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
    cVar6 = (char)puVar16 + '\x02';
    pcVar10 = (char *)CONCAT31((int3)((uint)puVar16 >> 8),cVar6);
    bVar47 = (POPCOUNT(cVar6) & 1U) == 0;
    puVar45 = puVar44;
    puVar19 = puVar46;
    uVar28 = uStack_18;
code_r0x00404ca8:
    uStack_18 = uVar28;
    puVar44 = apuStack_8[0];
    puVar46 = puStack_10;
    if (bVar47) break;
    *(byte *)puVar31 = (byte)*puVar31 + (char)puVar38;
    puVar44 = puVar45;
    puVar46 = puVar19;
  } while( true );
  *pcVar10 = *pcVar10 + (char)pcVar10;
  *param_5 = *param_5 + (byte)param_5;
  puVar19 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                             CONCAT11((byte)((uint)param_4 >> 8) | (byte)*param_3,(char)param_4));
                    /* WARNING: Ignoring partial resolution of indirect */
  apuStack_8[0]._0_1_ = (char)apuStack_8[0] + (char)apuStack_8;
  *(byte *)((int)param_5 * 2) = *(byte *)((int)param_5 * 2) ^ (byte)param_5;
  uVar3 = *(undefined6 *)param_5;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar13 = (byte *)uVar3;
  bVar7 = (byte)uVar3;
  *pbVar13 = *pbVar13 + bVar7;
  bVar4 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar7;
  puVar31 = (uint *)((int)puVar19 + 0x11673);
  uVar39 = *puVar31;
  uVar2 = *puVar31;
  *puVar31 = uVar2 + (int)param_3 + (uint)CARRY1(bVar4,bVar7);
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uStack_18);
  pbVar13 = pbVar13 + (uint)(CARRY4(uVar39,(uint)param_3) ||
                            CARRY4(uVar2 + (int)param_3,(uint)CARRY1(bVar4,bVar7))) +
                      *(int *)((int)puVar19 + (int)param_3);
  puVar31 = param_3;
  ppuVar36 = apuStack_8;
  pbVar17 = pbStack_c;
  uVar28 = uStack_18;
code_r0x00404cca:
  uStack_18 = uVar28;
  cVar6 = (char)pbVar13 + '\x04';
  puVar16 = (uint *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar6);
  if (SCARRY1((char)pbVar13,'\x04') == cVar6 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
  pbVar13 = pbVar17 + 4;
  out(*(undefined4 *)pbVar17,(short)puVar31);
  uVar39 = *puVar19;
  uVar2 = *puVar31;
  bVar4 = (byte)puVar19;
  *(byte *)puVar31 = (byte)*puVar31 + bVar4;
  iVar11 = (CONCAT31((int3)((uint)puVar16 >> 8),(char)puVar16 + '\x03') & uVar39) + iRam00008c38;
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar31;
  pcVar10 = (char *)(iVar11 + (uint)CARRY1((byte)uVar2,bVar4) + 0x1246f);
  uVar21 = (undefined3)((uint)puVar19 >> 8);
  bVar4 = bVar4 | (byte)*puVar31;
  puVar38 = (uint *)CONCAT31(uVar21,bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar10 >> 8);
  puVar16 = (uint *)(CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + *pcVar10) + 0x1fbeef2);
  uVar39 = *puVar16;
  *puVar16 = (uint)(*puVar16 + (int)puVar16);
  if (CARRY4(uVar39,(uint)puVar16)) {
    *puVar16 = (uint)(*puVar16 + (int)puVar16);
    pcVar10 = (char *)CONCAT31(uVar21,bVar4 | bRam00282809);
    cVar6 = (char)((uint)puVar19 >> 8);
    *(byte *)ppuVar36 = *(byte *)ppuVar36 + cVar6;
    *pcVar10 = *pcVar10 - cVar6;
    *(byte *)puVar16 = *(byte *)puVar16 + (char)puVar16;
    iVar11 = (int)pcVar10 - (int)*ppuVar36;
    pbVar17 = pbVar17 + 8;
    out(*(undefined4 *)pbVar13,(short)puVar31);
    *puVar16 = (uint)(*puVar16 + (int)puVar16);
    puVar38 = (uint *)CONCAT22((short)((uint)iVar11 >> 0x10),
                               CONCAT11((byte)((uint)iVar11 >> 8) | bRambf73070b,(char)iVar11));
code_r0x00404d15:
    uVar39 = *puVar16;
    bVar4 = (byte)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + bVar4;
    pbVar13 = pbVar17 + 4;
    out(*(undefined4 *)pbVar17,(short)puVar31);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar7 = bVar4 + in_AF * '\x06';
    puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),
                               bVar7 + (0x90 < (bVar7 & 0xf0) |
                                       CARRY1((byte)uVar39,bVar4) | in_AF * (0xf9 < bVar7)) * '`');
  }
  *puVar16 = (uint)(*puVar16 + (int)puVar16);
  bVar4 = (byte)puVar16 | (byte)*puVar46;
  pbVar18 = pbVar13 + 4;
  uVar27 = SUB42(puVar31,0);
  out(*(undefined4 *)pbVar13,uVar27);
  *(byte *)puVar38 = (byte)*puVar38 - bVar4;
  uVar39 = *puVar31;
  bVar7 = (byte)puVar38;
  *(byte *)puVar31 = (byte)*puVar31 + bVar7;
  iVar11 = CONCAT31((int3)((uint)puVar16 >> 8),bVar4) + *(int *)pbVar18 +
           (uint)CARRY1((byte)uVar39,bVar7);
  pcVar10 = (char *)((int)puVar44 - *puVar31);
  uVar21 = (undefined3)((uint)iVar11 >> 8);
  cVar6 = (char)iVar11 + *pbVar18 + (puVar44 < (undefined4 *)*puVar31);
  puVar19 = (uint *)CONCAT31(uVar21,cVar6);
  bVar4 = (byte)((uint)puVar38 >> 8);
  *(byte *)puVar38 = (byte)*puVar38 - bVar4;
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  bVar7 = bVar7 | *(byte *)((int)puVar31 + (int)puVar19);
  uVar28 = (undefined2)((uint)puVar38 >> 0x10);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)puVar19 = (byte)*puVar19 + cVar6;
    pcVar12 = (char *)CONCAT31(uVar21,cVar6 + '\x12');
    *pcVar12 = *pcVar12 + bVar4;
    puVar19 = (uint *)CONCAT31(uVar21,(cVar6 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar38 >> 8),bVar7));
    uVar39 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar7;
    if (!CARRY1((byte)uVar39,bVar7)) {
      pbVar17 = (byte *)((uint)puVar19 | *puVar19);
      out(*(undefined4 *)pbVar18,uVar27);
      *pbVar17 = *pbVar17 + (char)pbVar17;
      bVar25 = *pbVar17;
      piVar14 = (int *)CONCAT22(uVar28,CONCAT11(bVar4 | bVar25,bVar7));
      iVar11 = (int)pbVar17 - *piVar14;
      *(byte *)puVar31 = (byte)*puVar31 + bVar7;
      pbVar17 = pbVar13 + 0xc;
      out(*(undefined4 *)(pbVar13 + 8),uVar27);
      uRam12060000 = (undefined1)iVar11;
      *(char *)((int)piVar14 + iVar11) = *(char *)((int)piVar14 + iVar11) - (bVar4 | bVar25);
      *(byte *)puVar31 = (byte)*puVar31 + bVar7;
      pbVar18 = (byte *)(iVar11 + -0x120edecd);
      *pbVar17 = *pbVar17 + 1;
      bVar4 = *pbVar18;
      bVar25 = (byte)pbVar18;
      *pbVar18 = *pbVar18 + bVar25;
      pcVar10 = pcVar10 + ((-1 - *(int *)((int)puVar46 + 0x42)) - (uint)CARRY1(bVar4,bVar25));
      *pbVar18 = *pbVar18 + bVar25;
      bVar4 = (byte)ppuVar36 | (byte)((uint)pbVar18 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar18;
      uVar39 = *puVar31;
      pcVar12 = (char *)(((uint)pbVar18 | 0x11) + 0x511072c);
      pbVar18 = pbVar13 + 0x10;
      out(*(undefined4 *)pbVar17,uVar27);
      puVar31 = (uint *)((int)puVar31 + 1);
      *pcVar12 = *pcVar12 + (char)pcVar12;
      bVar25 = (byte)((uint)pcVar12 >> 8);
      ppuVar36 = (undefined4 **)
                 CONCAT31((int3)(CONCAT22((short)((uint)ppuVar36 >> 0x10),
                                          CONCAT11((byte)((uint)ppuVar36 >> 8) | (byte)uVar39,bVar4)
                                         ) >> 8),bVar4 | bVar25);
      uVar21 = (undefined3)((uint)pcVar12 >> 8);
      bVar4 = (char)pcVar12 - *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar21,bVar4);
      *pcVar12 = *pcVar12 + bVar4;
      *(int *)((int)pcVar12 * 2) = (int)((int)ppuVar36 + *(int *)((int)pcVar12 * 2));
      *(byte *)puVar31 = *(byte *)puVar31 + bVar4;
      *pcVar10 = *pcVar10 + bVar25;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar39 = CONCAT31(uVar21,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar39;
      pbVar13 = (byte *)CONCAT22((short)(uVar39 >> 0x10),CONCAT11(bVar25 + in_AF,bVar4));
      *pbVar18 = *pbVar18 + bVar7;
      *pbVar13 = *pbVar13 + bVar4;
      *pbVar13 = *pbVar13 + bVar4;
      bVar47 = CARRY1(bVar4,*pbVar13);
      puVar19 = (uint *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar4 + *pbVar13);
      goto code_r0x00404d9a;
    }
    *(byte *)ppuVar36 = *(byte *)ppuVar36 - (char)puVar31;
  }
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
  bVar47 = false;
  piVar14 = (int *)CONCAT22(uVar28,CONCAT11(bVar4 | (byte)*puVar31,bVar7));
code_r0x00404d9a:
  do {
    puVar38 = puVar31;
    *puVar19 = (*puVar19 - (int)puVar19) - (uint)bVar47;
    bVar4 = (byte)((uint)piVar14 >> 8);
    uVar28 = (undefined2)((uint)piVar14 >> 0x10);
    bVar7 = (byte)piVar14;
    bVar25 = bVar4 + (byte)iRam00000c00;
    pbVar13 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *(byte *)puVar38 = (byte)*puVar38 + bVar7;
    ppuVar36 = (undefined4 **)CONCAT31((int3)((uint)ppuVar36 >> 8),(char)ppuVar36 - *pbVar18);
    bVar4 = *pbVar13;
    puVar19 = (uint *)(pbVar13 + (uint)CARRY1(bVar25,*pbVar13) + *(int *)pbVar13);
    *(byte *)puVar38 = (byte)*puVar38 + bVar7;
    cVar5 = ((bVar25 + bVar4) - (byte)*puVar38) + (byte)*puVar19;
    pcVar12 = (char *)CONCAT22(uVar28,CONCAT11(cVar5,bVar7));
    puVar31 = puVar46 + 1;
    uVar39 = in((short)puVar38);
    *puVar46 = uVar39;
    cVar6 = (char)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + cVar6;
    uVar21 = (undefined3)((uint)puVar38 >> 8);
    bVar25 = (byte)puVar38 | *pbVar18;
    pcVar23 = (char *)CONCAT31(uVar21,bVar25);
    *pcVar12 = *pcVar12 + '\x01';
    bVar4 = (cVar5 - *pcVar23) + (byte)*puVar19;
    pcVar12 = (char *)CONCAT22(uVar28,CONCAT11(bVar4,bVar7));
    puVar46 = puVar46 + 2;
    uVar39 = in((short)pcVar23);
    *puVar31 = uVar39;
    *(byte *)puVar19 = (byte)*puVar19 + cVar6;
    bVar25 = bVar25 | *pbVar18;
    puVar31 = (uint *)CONCAT31(uVar21,bVar25);
    *pcVar12 = *pcVar12 + '\x01';
    bVar47 = bVar7 < *(byte *)((int)puVar31 + 2);
    cVar5 = bVar7 - *(byte *)((int)puVar31 + 2);
    piVar14 = (int *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar5);
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  *(byte *)puVar19 = (byte)*puVar19 + cVar6;
  bVar7 = cVar6 + 0x7b;
  pbVar17 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),bVar7);
  *(byte *)((int)ppuVar36 + (int)pbVar17) = *(byte *)((int)ppuVar36 + (int)pbVar17) + bVar7;
  pbVar13 = pbVar18 + 4;
  uVar27 = SUB42(puVar31,0);
  out(*(undefined4 *)pbVar18,uVar27);
  pbVar37 = (byte *)((int)ppuVar36 + -1);
  *pbVar17 = *pbVar17 + bVar7;
  bVar4 = bVar4 | (byte)*puVar31;
  piVar14 = (int *)CONCAT22(uVar28,CONCAT11(bVar4,cVar5));
  *pbVar17 = *pbVar17 + bVar7;
  *pbVar37 = *pbVar37 + bVar25;
  *pbVar37 = *pbVar37 ^ bVar7;
  *(byte *)puVar31 = (byte)*puVar31 + bVar4;
  *pbVar17 = *pbVar17 + bVar7;
  do {
    bVar26 = (byte)((uint)piVar14 >> 8);
    *(byte *)puVar46 = (byte)*puVar46 + bVar26;
    bVar4 = *pbVar17;
    bVar7 = (byte)pbVar17;
    *pbVar17 = *pbVar17 + bVar7;
    *(byte **)((int)ppuVar36 + 0x17) =
         pbVar13 + (uint)CARRY1(bVar4,bVar7) + *(int *)((int)ppuVar36 + 0x17);
    *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
    uVar22 = (undefined3)((uint)pbVar17 >> 8);
    bVar7 = bVar7 | *pbVar13;
    puVar46 = (uint *)((int)puVar46 + *(int *)(pcVar10 + -0x34));
    *(char *)CONCAT31(uVar22,bVar7) = *(char *)CONCAT31(uVar22,bVar7) + bVar7;
    bVar4 = bVar7 + 2;
    cVar6 = (char)((uint)puVar38 >> 8);
    bVar34 = (byte)piVar14;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar17 = (byte *)CONCAT31(uVar22,bVar7 + 0x15 + (0xfd < bVar7));
      if (0xec < bVar4 || CARRY1(bVar7 + 0x15,0xfd < bVar7)) {
        *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
      }
code_r0x00404e60:
      pcVar10 = pcVar10 + -*puVar31;
      bVar4 = *pbVar17;
      *pbVar17 = *pbVar17 + (byte)pbVar17;
      pbVar13 = pbVar13 + (-(uint)CARRY1(bVar4,(byte)pbVar17) - *(int *)pbVar17);
      pbVar17 = pbVar17 + *(int *)pbVar17;
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_DS);
      *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
      *(char *)piVar14 = (char)*piVar14 + cVar6;
      bVar4 = *pbVar17;
      *pbVar17 = *pbVar17 + (byte)pbVar17;
      *(byte **)(pbVar37 + (int)puVar31) =
           (byte *)((int)puVar31 +
                   (uint)CARRY1(bVar4,(byte)pbVar17) + *(int *)(pbVar37 + (int)puVar31));
      pbVar17 = pbVar17 + 0x73061314;
      *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
      uVar22 = (undefined3)((uint)piVar14 >> 8);
      bVar34 = bVar34 | (byte)*puVar31;
      pcVar23 = (char *)CONCAT31(uVar22,bVar34);
      *pbVar17 = *pbVar17 + (char)pbVar17;
      cVar6 = (char)pbVar17 + 'o';
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),cVar6);
      *pcVar12 = *pcVar12 + cVar6;
      out(*(undefined4 *)pbVar13,uVar27);
      uVar39 = *puVar31;
      *(byte *)puVar31 = (byte)*puVar31 + bVar34;
      pcVar12 = pcVar12 + (uint)CARRY1((byte)uVar39,bVar34) + *puVar46;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      *pcVar23 = *pcVar23 + bVar25;
      pbVar17 = pbVar13 + 8;
      out(*(undefined4 *)(pbVar13 + 4),uVar27);
      *(byte *)puVar31 = (byte)*puVar31 + bVar34;
      piVar14 = (int *)((uint)pcVar12 | *puVar46);
      pcVar23[0x390a0000] = pcVar23[0x390a0000] - bVar26;
      pbVar18 = (byte *)&cRam07000000;
      *(byte *)puVar46 = (byte)*puVar46 - bVar26;
      *piVar14 = *piVar14 + (int)piVar14;
      puVar19 = (uint *)CONCAT31(uVar22,bVar34 | *(byte *)((int)piVar14 + (int)pcVar23));
      *(char *)((int)piVar14 * 2) = *(char *)((int)piVar14 * 2) - bVar26;
      cRam07000000 = cRam07000000 + bVar26;
      piVar14 = (int *)((uint)piVar14 | 0x777b02);
      pbVar13 = (byte *)((int)puVar46 + (int)pcVar10 * 2);
      bVar47 = SCARRY1(*pbVar13,(char)piVar14);
      *pbVar13 = *pbVar13 + (char)piVar14;
      bVar4 = *pbVar13;
      *(char *)piVar14 = (char)*piVar14;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar22,bVar4) = *(char *)CONCAT31(uVar22,bVar4) + bVar4;
    bVar7 = bVar7 + 0x71;
    pbVar17 = (byte *)CONCAT31(uVar22,bVar7);
    *pbVar17 = *pbVar17;
    *pbVar13 = *pbVar13 + 1;
    *piVar14 = (*piVar14 - (int)pbVar17) - (uint)(0x90 < bVar4);
    bVar4 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar7;
    if (!CARRY1(bVar4,bVar7)) goto code_r0x00404e60;
    *pbVar17 = *pbVar17 + bVar7;
    uVar28 = (undefined2)((uint)piVar14 >> 0x10);
    bVar26 = bVar26 | *pbVar17;
    pbVar17 = pbVar17 + -*(int *)pbVar17;
    *pbVar37 = *pbVar37 + bVar26;
    cVar5 = bVar34 - *(byte *)((int)puVar31 + 2);
    piVar14 = (int *)CONCAT31((int3)(CONCAT22(uVar28,CONCAT11(bVar26,bVar34)) >> 8),cVar5);
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  cVar29 = (char)pbVar17;
  *pbVar17 = *pbVar17 + cVar29;
  uVar22 = (undefined3)((uint)pbVar17 >> 8);
  pcVar12 = (char *)CONCAT31(uVar22,cVar29 + '{');
  out(*(undefined4 *)pbVar13,uVar27);
  *pcVar12 = *pcVar12 + cVar29 + '{';
  bVar7 = cVar29 + 0x7e;
  pbVar13 = (byte *)CONCAT31(uVar22,bVar7);
  pbVar17 = pbVar18 + 0xc;
  out(*(undefined4 *)(pbVar18 + 8),uVar27);
  pbVar18 = (byte *)((int)ppuVar36 + -2);
  *pbVar13 = *pbVar13 + bVar7;
  bVar26 = bVar26 | (byte)*puVar31;
  puVar19 = (uint *)CONCAT22(uVar28,CONCAT11(bVar26,cVar5));
  *pbVar13 = *pbVar13 + bVar7;
  *pbVar18 = *pbVar18 + bVar25;
  *pbVar18 = *pbVar18 ^ bVar7;
  *(byte *)puVar31 = (byte)*puVar31 + bVar26;
  *pbVar13 = *pbVar13 + bVar7;
  *pbVar13 = *pbVar13 + cVar6;
  bVar4 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar7;
  *(byte **)((int)ppuVar36 + 0x18) =
       pbVar17 + (uint)CARRY1(bVar4,bVar7) + *(int *)((int)ppuVar36 + 0x18);
  *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
  bVar7 = bVar7 | *pbVar17;
  puVar46 = (uint *)((int)puVar46 + *(int *)(pcVar10 + -0x33));
  *(char *)CONCAT31(uVar22,bVar7) = *(char *)CONCAT31(uVar22,bVar7) + bVar7;
  bVar47 = SCARRY1(bVar7,'\x02');
  bVar4 = bVar7 + 2;
  piVar14 = (int *)CONCAT31(uVar22,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar14 = (char)*piVar14 + bVar4;
    return CONCAT31(uVar22,bVar7 + 0x71);
  }
code_r0x00404ebf:
  bVar7 = (byte)piVar14;
  uVar22 = (undefined3)((uint)piVar14 >> 8);
  if (bVar4 != 0 && bVar47 == (char)bVar4 < '\0') {
    *(byte *)piVar14 = (char)*piVar14 + bVar7;
    *(byte **)(pbVar17 + (int)puVar46 * 8) =
         (byte *)((int)puVar31 + (uint)(0xd2 < bVar7) + *(int *)(pbVar17 + (int)puVar46 * 8));
    return CONCAT31(uVar22,bVar7 + 0x2d);
  }
  *piVar14 = (int)(*piVar14 + (int)piVar14);
  bVar4 = *pbVar18;
  *(char **)pbVar17 = (char *)(*(int *)pbVar17 + (int)piVar14);
  bVar34 = (byte)((uint)puVar19 >> 8);
  *(byte *)piVar14 = (char)*piVar14 - bVar34;
  *(byte *)piVar14 = (char)*piVar14 + bVar7;
  pbVar37 = (byte *)(CONCAT31(uVar21,bVar25 | bVar4) - *(int *)pbVar18);
  puVar31 = (uint *)CONCAT31(uVar22,bVar7 + 6);
  *(uint *)(pbVar18 + (int)pbVar17 * 2) =
       (int)puVar31 + (uint)(0xf9 < bVar7) + *(int *)(pbVar18 + (int)pbVar17 * 2);
  *(byte *)puVar19 = (byte)*puVar19 ^ bVar7 + 6;
  bVar7 = (byte)puVar19;
  *pbVar37 = *pbVar37 + bVar7;
  pbVar13 = pbVar17 + 4;
  uVar28 = SUB42(pbVar37,0);
  out(*(undefined4 *)pbVar17,uVar28);
  *puVar19 = *puVar19 ^ (uint)puVar31;
  *pbVar37 = *pbVar37 + bVar7;
  puVar38 = (uint *)(pbVar18 + -*(int *)pbVar18);
  *(uint *)((int)puVar46 + 0x31) = *(uint *)((int)puVar46 + 0x31) | (uint)pcVar10;
  *puVar31 = *puVar31 + (int)puVar31;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar34 | (byte)*puVar38,bVar7))
  ;
  *(byte **)(pbVar37 + 0x6e) = pbVar13 + *(int *)(pbVar37 + 0x6e);
  piVar14 = (int *)((uint)puVar31 | *puVar31);
  bVar25 = (byte)puVar38;
  *(byte *)puVar46 = (byte)*puVar46 - bVar25;
  bVar4 = *pbVar37;
  *pbVar37 = *pbVar37 + bVar7;
  if (CARRY1(bVar4,bVar7)) {
    *piVar14 = (int)(*piVar14 + (int)piVar14);
    bVar4 = pbVar37[0x11];
    uVar27 = (undefined2)((uint)puVar38 >> 0x10);
    out(*(undefined4 *)pbVar13,uVar28);
    puVar19 = (uint *)((int)puVar19 + 1);
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    bVar30 = (byte)((uint)puVar38 >> 8) | bVar4 | *pbVar37;
    pcVar12 = (char *)((int)piVar14 + -0x21000001);
    bVar4 = (byte)pcVar12 | 0x11;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    cVar6 = bVar4 - 7;
    pcVar23 = (char *)CONCAT31(uVar21,cVar6);
    *puVar46 = (uint)(pcVar23 + (uint)(bVar4 < 7) + *puVar46);
    pbVar13 = pbVar17 + 0xc;
    out(*(undefined4 *)(pbVar17 + 8),uVar28);
    pbVar37 = pbVar37 + 1;
    *pcVar23 = *pcVar23 + cVar6;
    bVar34 = (byte)((uint)pcVar12 >> 8);
    bVar26 = bVar25 | bVar34;
    bVar7 = cVar6 - *pcVar23;
    bVar4 = *(byte *)puVar19;
    *(byte *)puVar19 = *(byte *)puVar19 + bVar7;
    *(char *)CONCAT31(uVar21,bVar7) = *(char *)CONCAT31(uVar21,bVar7) + bVar7 + CARRY1(bVar4,bVar7);
    *pbVar37 = *pbVar37 + bVar7;
    *pbVar13 = *pbVar13 + bVar26;
    bVar4 = (byte)((uint)pbVar37 >> 8);
    *(byte *)puVar19 = *(byte *)puVar19 + bVar7 + CARRY1((byte)pbVar37,bVar4);
    piVar14 = (int *)CONCAT31(uVar21,bVar7);
    *(byte *)piVar14 = (char)*piVar14 + bVar7;
    pbVar37 = (byte *)CONCAT22((short)((uint)pbVar37 >> 0x10),
                               CONCAT11(bVar4 + bVar34,(byte)pbVar37 + bVar4));
    puVar38 = (uint *)CONCAT22(uVar27,CONCAT11(bVar30 + *(char *)(CONCAT31((int3)(CONCAT22(uVar27,
                                                  CONCAT11(bVar30,bVar25)) >> 8),bVar26) + 0x76),
                                               bVar26));
    uStack_18 = puStack_24._0_2_;
code_r0x00404fa4:
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    pcVar12 = (char *)(CONCAT31((int3)((uint)piVar14 >> 8),(char)piVar14 + '(') ^ *puVar19);
    cVar29 = (char)puVar19;
    *pbVar37 = *pbVar37 + cVar29;
    uVar28 = (undefined2)((uint)puVar38 >> 0x10);
    cVar35 = (char)puVar38;
    cVar40 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x75);
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar6 = (char)pcVar12 + 'o';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar6);
    *pcVar12 = *pcVar12 + cVar6;
    cVar41 = (char)((uint)puVar19 >> 8);
    *pcVar10 = *pcVar10 - cVar41;
    pbVar37[1] = pbVar37[1] + cVar29;
    pcVar12 = pcVar12 + -0x757b021b;
    cVar6 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar6;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    cVar5 = cVar6 + 'o';
    pcVar12 = (char *)CONCAT31(uVar21,cVar5);
    pbVar17 = pbVar37 + 2;
    *pcVar12 = *pcVar12 + cVar5;
    iVar11 = CONCAT22(uVar28,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar28,CONCAT11(cVar40,cVar35)) +
                                                        0x76),cVar35));
    *pcVar12 = *pcVar12 + cVar5;
    pcVar12 = (char *)CONCAT31(uVar21,cVar6 + -0x22);
    puVar31 = (uint *)((int)puVar46 + 1);
    *(byte *)puVar46 = *pbVar13;
    *pcVar12 = *pcVar12 + cVar6 + -0x22;
    *(byte *)((int)puVar19 + (int)pcVar12) =
         *(byte *)((int)puVar19 + (int)pcVar12) - (char)((uint)pbVar17 >> 8);
    *pbVar17 = *pbVar17 + cVar29;
    bVar7 = cVar41 - pbVar37[4];
    pbVar18 = pbVar13 + 5;
    out(*(undefined4 *)(pbVar13 + 1),(short)pbVar17);
    puVar46 = (uint *)((uint)(pcVar12 + *(int *)(pcVar12 + iVar11)) ^ 0x280a0001);
    *(byte *)puVar46 = (byte)*puVar46 << 1 | (char)(byte)*puVar46 < '\0';
    *pbVar18 = *pbVar18 + (char)puVar46;
    pbVar18 = pbVar18 + *(int *)(pbVar37 + -0x5c);
    pbVar13 = (byte *)((uint)puVar46 | *puVar46);
    *pbVar18 = *pbVar18 + (char)pbVar13;
    puVar38 = (uint *)CONCAT31((int3)((uint)iVar11 >> 8),cVar35 - (char)pbVar17);
    bVar4 = *pbVar13;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar7 + *pbVar13,cVar29));
    iVar11 = *(int *)pbVar13;
    *pbVar17 = *pbVar17 + cVar29;
    cVar6 = (char)(pbVar13 + (uint)CARRY1(bVar7,bVar4) + iVar11) + 'r';
    puVar46 = (uint *)CONCAT31((int3)((uint)(pbVar13 + (uint)CARRY1(bVar7,bVar4) + iVar11) >> 8),
                               cVar6);
    pbVar37 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),CONCAT11(10,(char)pbVar17));
    *(char *)(puVar46 + 10) = (char)puVar46[10] + '\n';
    *pbVar18 = *pbVar18 + cVar6;
    pbVar13 = pbVar18 + *(int *)(pbVar37 + -0x5e);
    uVar39 = *puVar46;
    cVar6 = (char)((uint)puVar46 | uVar39);
    *pbVar13 = *pbVar13 + cVar6;
    uVar21 = (undefined3)(((uint)puVar46 | uVar39) >> 8);
    cVar5 = cVar6 + (byte)*puVar38;
    puVar46 = (uint *)CONCAT31(uVar21,cVar5);
    uStack_28 = uStack_18;
    if (SCARRY1(cVar6,(byte)*puVar38) == cVar5 < '\0') goto code_r0x00405090;
    *(byte *)puVar46 = (byte)*puVar46 + cVar5;
    piVar14 = (int *)CONCAT31(uVar21,cVar5 + '\x02');
    puVar46 = puVar31;
  }
  else {
    out(2,(char)piVar14);
    uStack_28 = uStack_18;
    if ((POPCOUNT(*pbVar37) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar21 = (undefined3)((uint)piVar14 >> 8);
  cVar6 = (char)piVar14 + '}';
  pbVar18 = (byte *)CONCAT31(uVar21,cVar6);
  pbVar37[(int)pbVar18] = pbVar37[(int)pbVar18] + cVar6;
  pbVar37[0x280a0000] = pbVar37[0x280a0000] - (char)((uint)piVar14 >> 8);
  bVar4 = (byte)puVar19 & 7;
  *pbVar18 = *pbVar18 << bVar4 | *pbVar18 >> 8 - bVar4;
  *pbVar13 = *pbVar13 + cVar6;
  cVar29 = (char)puVar38 - *pbVar13;
  uVar28 = (undefined2)((uint)puVar38 >> 0x10);
  cVar41 = (char)((uint)puVar38 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar38 >> 8),cVar29) + 0x7c);
  pcVar12 = (char *)CONCAT22(uVar28,CONCAT11(cVar41,cVar29));
  *pbVar18 = *pbVar18 + cVar6;
  bVar7 = (char)piVar14 + 0xa7U & *pbVar37;
  puVar31 = (uint *)((int)puVar46 + *(int *)(pcVar10 + 0x7c));
  *(char *)CONCAT31(uVar21,bVar7) = *(char *)CONCAT31(uVar21,bVar7) + bVar7;
  bVar7 = bVar7 + 0x2a;
  pbVar18 = (byte *)CONCAT31(uVar21,bVar7);
  *pbVar18 = *pbVar18 + bVar7;
  *pcVar12 = *pcVar12 + cVar29;
  *pbVar37 = *pbVar37 ^ bVar7;
  *pcVar12 = *pcVar12 + bVar7;
  bVar4 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar7;
  cVar6 = (bVar7 - *pbVar18) - CARRY1(bVar4,bVar7);
  *(byte *)puVar19 = (byte)*puVar19 + (byte)pbVar37;
  cVar41 = cVar41 + pcVar12[0x7b];
  *(char *)CONCAT31(uVar21,cVar6) = *(char *)CONCAT31(uVar21,cVar6) + cVar6;
  pcVar12 = (char *)CONCAT31(uVar21,cVar6 + 'o');
  *pcVar12 = *pcVar12 + cVar6 + 'o';
  pcVar12 = pcVar12 + 0x2ed7fde6;
  cVar5 = (char)pcVar12;
  *pcVar12 = *pcVar12 + cVar5;
  cVar6 = *(char *)(CONCAT22(uVar28,CONCAT11(cVar41,cVar29)) + 0x7b);
  *pcVar12 = *pcVar12 + cVar5;
  piVar14 = (int *)(CONCAT31((int3)((uint)pcVar12 >> 8),cVar5 + 'o') + 0x6f060000);
  *piVar14 = *piVar14 + (int)piVar14;
  uVar22 = (undefined3)((uint)pbVar37 >> 8);
  bVar7 = (byte)pbVar37 | *pbVar13;
  pbVar32 = (byte *)CONCAT31(uVar22,bVar7);
  uVar39 = CONCAT22(uVar28,CONCAT11(cVar41 + cVar6,cVar29)) | (uint)pbVar13;
  uVar21 = (undefined3)((uint)piVar14 >> 8);
  bVar4 = (byte)piVar14 | *pbVar32;
  pbVar17 = (byte *)CONCAT31(uVar21,bVar4);
  cVar6 = (byte)puVar19 - bVar7;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),cVar6);
  *pbVar17 = *pbVar17 + bVar4;
  pbVar18 = pbVar13 + 4;
  out(*(undefined4 *)pbVar13,(short)pbVar32);
  *pbVar17 = bVar4;
  *pbVar32 = *pbVar32 + cVar6;
  pbVar13 = pbVar13 + 8;
  out(*(undefined4 *)pbVar18,(short)pbVar32);
  *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
  puVar38 = (uint *)(CONCAT31((int3)(uVar39 >> 8),(char)uVar39 - (char)((uint)pbVar37 >> 8)) |
                    (uint)pbVar13);
  pbVar37 = (byte *)CONCAT31(uVar22,(bVar7 | *pbVar13) + (byte)*puVar31);
  cVar6 = bVar4 - (byte)*puVar31;
  puVar46 = (uint *)CONCAT31(uVar21,cVar6 - *(char *)CONCAT31(uVar21,cVar6));
code_r0x00405090:
  *puVar46 = (uint)(pbVar37 + *puVar46);
  cVar6 = (char)puVar46;
  *(byte *)puVar46 = (byte)*puVar46 + cVar6;
  *(byte *)puVar46 = (byte)*puVar46 + cVar6;
  *(byte *)puVar46 = (byte)*puVar46 + cVar6;
  *puVar19 = *puVar19 - (int)pcVar10;
  bVar4 = *pbVar13;
  bVar7 = (byte)pbVar37;
  *pbVar13 = *pbVar13 + bVar7;
  *(byte *)puVar46 = (byte)*puVar46 + cVar6 + CARRY1(bVar4,bVar7);
  *(byte *)puVar19 = (byte)*puVar19 + cVar6;
  uVar39 = *puVar38;
  *(byte *)puVar38 = (byte)*puVar38 + 0x72;
  *(byte *)puVar38 = (byte)*puVar38;
  cVar6 = (char)((uint)pbVar37 >> 8);
  if (SCARRY1((byte)uVar39,'r')) {
    pbVar13 = pbVar13 + *(int *)(pbVar37 + -10);
  }
  else {
    while( true ) {
      *pbVar13 = *pbVar13 + (char)puVar46;
      uVar21 = (undefined3)((uint)puVar46 >> 8);
      cVar5 = (char)puVar46 + (byte)*puVar38;
      pcVar12 = (char *)CONCAT31(uVar21,cVar5);
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11((char)((uint)puVar38 >> 8) +
                                          *(byte *)((int)puVar38 + 0x7b),(char)puVar38));
      *pcVar12 = *pcVar12 + cVar5;
      in_AF = 9 < (cVar5 + 0x6fU & 0xf) | in_AF;
      uVar39 = CONCAT31(uVar21,cVar5 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar25 = (byte)uVar39;
      piVar14 = (int *)CONCAT22((short)(uVar39 >> 0x10),
                                CONCAT11((char)((uint)puVar46 >> 8) + in_AF,bVar25));
      *piVar14 = *piVar14 + (int)piVar14;
      uVar21 = (undefined3)((uint)piVar14 >> 8);
      bVar25 = bVar25 | *(byte *)(piVar14 + 0x354a);
      bVar25 = bVar25 - *(char *)CONCAT31(uVar21,bVar25);
      pbVar18 = (byte *)CONCAT31(uVar21,bVar25);
      bVar4 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar25;
      pbVar13 = pbVar13 + (-(uint)CARRY1(bVar4,bVar25) - *(int *)pbVar18);
      puVar46 = (uint *)(pbVar18 + 0xfc00);
      *pbVar37 = *pbVar37 + cVar6;
      uVar39 = *puVar46;
      bVar4 = (byte)puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + bVar4;
      uVar9 = (uint)CARRY1((byte)uVar39,bVar4);
      uVar39 = *puVar38;
      uVar2 = *puVar38;
      *puVar38 = (uint)((byte *)(uVar2 + (int)puVar46) + uVar9);
      if (!CARRY4(uVar39,(uint)puVar46) && !CARRY4(uVar2 + (int)puVar46,uVar9)) break;
      *(byte *)puVar46 = (byte)*puVar46 + bVar4;
    }
  }
  uVar39 = (uint)puVar46 | *puVar46;
  uVar28 = SUB42(pbVar37,0);
  *pbVar13 = *pbVar13 + (char)uVar39;
  piVar14 = (int *)(uVar39 + 0xc1872);
  if (SCARRY4(uVar39,0xc1872)) {
    cVar5 = (char)piVar14;
    *(char *)piVar14 = *(char *)piVar14 + cVar5;
    *pbVar37 = *pbVar37 + cVar5;
    *(char *)piVar14 = *(char *)piVar14 + cVar5;
    *(byte *)puVar38 = (byte)*puVar38 + (char)puVar19;
    *(char *)piVar14 = *(char *)piVar14 + cVar5;
    *(char *)((int)piVar14 * 2) = *(char *)((int)piVar14 * 2) + bVar7;
    pbVar18 = pbVar13;
    goto code_r0x00405117;
  }
  do {
    bVar4 = *pbVar13;
    bVar7 = (byte)piVar14;
    *pbVar13 = *pbVar13 + bVar7;
    if (CARRY1(bVar4,bVar7)) {
      *piVar14 = (int)(*piVar14 + (int)piVar14);
      uVar21 = (undefined3)((uint)puVar19 >> 8);
      bVar4 = (byte)puVar19 | bRam396f1609;
      *piVar14 = (int)(*piVar14 + (int)piVar14);
      puVar19 = (uint *)CONCAT31(uVar21,bVar4 | *(byte *)CONCAT31(uVar21,bVar4));
      uVar21 = (undefined3)((uint)piVar14 >> 8);
      bVar7 = bVar7 | *pbVar37;
      pcVar12 = (char *)CONCAT31(uVar21,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        pbVar18 = pbVar13 + 4;
        out(*(undefined4 *)pbVar13,uVar28);
        uVar39 = CONCAT22((short)((uint)piVar14 >> 0x10),(ushort)bVar7);
        *pbVar18 = *pbVar18 + bVar7;
        pcVar12 = (char *)(uVar39 | 8);
        cVar5 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x7a);
        puVar46 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(cVar5,(char)puVar38));
        *pcVar12 = *pcVar12 + (char)pcVar12;
        cVar6 = (char)pcVar12 + 'o';
        piVar14 = (int *)CONCAT31((int3)(uVar39 >> 8),cVar6);
        *(char *)piVar14 = (char)*piVar14 + cVar6;
        *(byte *)puVar19 = (byte)*puVar19 + 1;
        pbVar13 = pbVar13 + 8;
        out(*(undefined4 *)pbVar18,uVar28);
        pbVar37 = (byte *)((uint)pbVar37 ^ uRam08122c04);
        iVar11 = CONCAT31((int3)((uint)(*piVar14 * 0x17070600) >> 8),2);
        *(char *)(iVar11 * 2) = *(char *)(iVar11 * 2) - cVar5;
        do {
          bVar4 = (byte)iVar11;
          *pbVar13 = *pbVar13 + bVar4;
          bVar47 = CARRY1(bVar4,(byte)*puVar46);
          uVar21 = (undefined3)((uint)iVar11 >> 8);
          cVar6 = bVar4 + (byte)*puVar46;
          pbVar18 = (byte *)CONCAT31(uVar21,cVar6);
          uVar28 = in_DS;
          uVar27 = uStack_64;
          if (SCARRY1(bVar4,(byte)*puVar46) == cVar6 < '\0') goto GenerateStatusText;
          *pbVar18 = *pbVar18 + cVar6;
          uVar39 = CONCAT31(uVar21,cVar6 + '\'') + 0x1ebd9f3;
          uStack_68 = (undefined1)uStack_28;
          uStack_67 = (undefined1)((ushort)uStack_28 >> 8);
          piVar14 = (int *)(uVar39 ^ 0x73060000);
          puVar19 = (uint *)((int)puVar19 + 1);
          *piVar14 = (int)(*piVar14 + (int)piVar14);
          puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                     CONCAT11((byte)((uint)puVar46 >> 8) | pcVar10[0x7e],
                                              (char)puVar46));
          cVar6 = (char)uVar39;
          *(char *)piVar14 = (char)*piVar14 + cVar6;
          uVar39 = CONCAT31((int3)((uint)piVar14 >> 8),cVar6 + '\x02');
          bVar47 = 0xd9f2d2da < uVar39;
          iVar11 = uVar39 + 0x260d2d25;
          pcVar12 = pcVar10;
          do {
            uVar21 = (undefined3)((uint)iVar11 >> 8);
            bVar7 = (char)iVar11 + -2 + bVar47;
            pbVar18 = (byte *)CONCAT31(uVar21,bVar7);
            bVar4 = *pbVar18;
            *pbVar18 = *pbVar18 + bVar7;
            bVar25 = (byte)puVar46;
            uStack_64 = uStack_28;
            if (CARRY1(bVar4,bVar7)) {
              *pbVar18 = *pbVar18 + bVar7;
              puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                         CONCAT11((byte)((uint)puVar46 >> 8) | pcVar12[0x7f],bVar25)
                                        );
              *pbVar18 = *pbVar18 + bVar7;
              pbVar18 = (byte *)CONCAT31(uVar21,bVar7 + 0x2a);
              *pbVar18 = *pbVar18 + bVar7 + 0x2a;
              *(byte *)puVar46 = (byte)*puVar46 + (char)pbVar37;
              uVar28 = in_DS;
              while( true ) {
                in_DS = uVar28;
                bVar7 = (byte)pbVar18;
                *pbVar37 = *pbVar37 ^ bVar7;
                *pbVar37 = *pbVar37 + (char)puVar46;
                *pbVar18 = *pbVar18 + bVar7;
                *(byte *)puVar46 = (byte)*puVar46 + (char)((uint)pbVar37 >> 8);
                bVar4 = *pbVar18;
                *pbVar18 = *pbVar18 + bVar7;
                uVar39 = *puVar46;
                uVar2 = *puVar46;
                *puVar46 = (uint)(pbVar18 + uVar2 + CARRY1(bVar4,bVar7));
                uVar21 = (undefined3)((uint)pbVar18 >> 8);
                if (CARRY4(uVar39,(uint)pbVar18) ||
                    CARRY4((uint)(pbVar18 + uVar2),(uint)CARRY1(bVar4,bVar7))) break;
                *pbVar13 = *pbVar13 + bVar7;
                pcVar23 = (char *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                           CONCAT11((char)((uint)puVar19 >> 8) + *pbVar18,
                                                    (char)puVar19));
                *pbVar13 = *pbVar13 + bVar7;
                piVar14 = (int *)CONCAT31(uVar21,bVar7 | (byte)*puVar46);
                pbVar18 = pbVar13;
                while( true ) {
                  pbVar13 = pbVar18 + 4;
                  out(*(undefined4 *)pbVar18,(short)pbVar37);
                  pbVar37 = pbVar37 + 1;
                  *piVar14 = (int)(*piVar14 + (int)piVar14);
                  bVar25 = (byte)((uint)pcVar23 >> 8) | *pbVar37;
                  uVar21 = (undefined3)((uint)piVar14 >> 8);
                  bVar7 = (byte)piVar14 ^ *pbVar37;
                  pcVar20 = (char *)CONCAT31(uVar21,bVar7);
                  cRam282b0000 = cRam282b0000 - bVar25;
                  *pcVar20 = *pcVar20 + bVar7;
                  pcVar10 = pcVar12 + -*(int *)pbVar37;
                  uStack_68 = (undefined1)in_DS;
                  uStack_67 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar31 + 0x17);
                  *pcVar20 = *pcVar20 + bVar7;
                  puVar19 = (uint *)CONCAT22((short)((uint)pcVar23 >> 0x10),
                                             CONCAT11(bVar25 + bVar4 | *pbVar37,(char)pcVar23));
                  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
                  *(byte *)((int)pcVar20 * 2) = *(byte *)((int)pcVar20 * 2) ^ bVar7;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  bVar7 = bVar7 + in_AF * -6;
                  pbVar18 = (byte *)CONCAT31(uVar21,bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
                  *(char *)((int)pbVar18 * 2) =
                       *(char *)((int)pbVar18 * 2) + (char)((uint)pbVar37 >> 8);
                  bVar47 = CARRY1((byte)*puVar19,(byte)pbVar37);
                  *(byte *)puVar19 = (byte)*puVar19 + (byte)pbVar37;
                  uVar28 = in_DS;
                  uVar27 = uStack_28;
GenerateStatusText:
                  in_DS = uVar27;
                  pcVar12 = pcVar10;
                  uStack_64 = in_DS;
                  if (!bVar47) break;
                  *pbVar18 = *pbVar18 + (char)pbVar18;
                  iVar11 = CONCAT31((int3)((uint)puVar19 >> 8),(byte)puVar19 | *pbVar37);
                  uVar28 = (undefined2)((uint)puVar46 >> 0x10);
                  cVar29 = (char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + 0x7d);
                  *pbVar18 = *pbVar18 + (char)pbVar18;
                  *(byte *)puVar31 = (byte)*puVar31 - (char)((uint)puVar19 >> 8);
                  iVar11 = iVar11 - *(int *)(&uRam0b0a0000 + iVar11);
                  cVar6 = *(char *)(CONCAT22(uVar28,CONCAT11(cVar29,(char)puVar46)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar13,(short)pbVar37);
                  pbVar37 = (byte *)CONCAT22(uStack_66,CONCAT11(uStack_67,uStack_68));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar18 = pbVar13 + 8;
                  out(*(undefined4 *)(pbVar13 + 4),CONCAT11(uStack_67,uStack_68));
                  pcVar12 = pcVar10 + 1;
                  cVar5 = (char)iVar11;
                  pcVar23 = (char *)CONCAT22((short)((uint)iVar11 >> 0x10),
                                             CONCAT11((byte)((uint)iVar11 >> 8) |
                                                      *(byte *)((int)puVar31 + 0x46),cVar5));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_28 = CONCAT11(uStack_67,uStack_68);
                  uVar21 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar18,0xf0)) >> 8);
                  piVar14 = (int *)CONCAT31(uVar21,0x5f);
                  puVar31 = (uint *)((int)puVar31 + 1);
                  *piVar14 = (int)(*piVar14 + (int)piVar14);
                  puVar46 = (uint *)CONCAT22(uVar28,CONCAT11(cVar29 + cVar6 | pbVar13[-0x78],
                                                             (char)puVar46));
                  *(char *)piVar14 = (char)*piVar14 + '_';
                  puVar19 = (uint *)CONCAT31(uVar21,0x8c);
                  *(byte **)(pbVar18 + (int)puVar31 * 8) =
                       pbVar37 + *(int *)(pbVar18 + (int)puVar31 * 8);
                  bVar4 = *pbVar18;
                  *pbVar18 = *pbVar18 + 0x8c;
                  if (bVar4 < 0x74) {
                    *pbVar37 = *pbVar37 + cVar5;
                    *(byte *)puVar46 = (byte)*puVar46 >> 1;
                    *(char *)puVar19 = (char)*puVar19 + -0x74;
                    *puVar19 = (uint)(pcVar12 + *puVar19);
                    *puVar19 = *puVar19 << 1 | (uint)((int)*puVar19 < 0);
                    *pbVar37 = *pbVar37 + cVar5;
                    pcVar10[2] = pcVar10[2] - cVar5;
                    *pbVar37 = *pbVar37 + cVar5;
                    pbVar13 = (byte *)CONCAT31(uVar21,0x83);
                    puVar19 = puVar46;
                    goto code_r0x00405312;
                  }
                  *puVar19 = (uint)(*puVar19 + (int)puVar19);
                  piVar14 = (int *)(CONCAT31(uVar21,(byte)puVar19[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar19[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar14 = (int *)((int)piVar14 + *(int *)pbVar18);
                }
              }
              *pbVar37 = *pbVar37 + bVar7;
              *(byte *)puVar46 = (byte)*puVar46 - (char)pbVar37;
              *pbVar18 = *pbVar18 + bVar7;
              pbVar18 = (byte *)CONCAT31(uVar21,bVar7 | (byte)*puVar46);
            }
            else {
              cVar6 = (char)puVar19;
              *pbVar37 = *pbVar37 + cVar6;
              *(byte **)pbVar18 = pbVar37 + *(int *)pbVar18;
              *pbVar18 = *pbVar18 + bVar7;
              bVar7 = bVar7 + *pbVar18;
              pbVar18 = (byte *)CONCAT31(uVar21,bVar7);
              if (-1 < (char)bVar7) {
                *(byte *)puVar46 = (byte)*puVar46 + bVar25;
                out(*(undefined4 *)pbVar13,(short)pbVar37);
                pbVar37 = pbVar37 + 1;
                *pbVar18 = *pbVar18 + bVar7;
                puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),
                                           bVar25 | (byte)((uint)iVar11 >> 8));
                cVar5 = bVar7 - (byte)*puVar19;
                pcVar10 = (char *)CONCAT31(uVar21,cVar5);
                *pcVar10 = *pcVar10 + cVar5 + (bVar7 < (byte)*puVar19);
                *pbVar37 = *pbVar37 + cVar5;
                pcVar10 = (char *)((int)pcVar10 * 2 + 0x79);
                *pcVar10 = *pcVar10 + (char)((uint)pbVar37 >> 8);
                pbVar18 = (byte *)in((short)pbVar37);
                pbVar13 = pbVar13 + 4;
              }
              *pbVar13 = *pbVar13 + cVar6;
              *pbVar18 = *pbVar18 + (char)pbVar18;
              *pbVar18 = *pbVar18 + (char)pbVar18;
              uStack_68 = (undefined1)in_DS;
              uStack_67 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar18;
              bVar34 = (byte)((uint)puVar19 >> 8);
              bVar25 = bVar34 + *pbVar18;
              iVar11 = *(int *)pbVar18;
              *pbVar37 = *pbVar37 + cVar6;
              bVar7 = (char)(pbVar18 + (uint)CARRY1(bVar34,bVar4) + iVar11) - (byte)*puVar46;
              pbVar18 = (byte *)CONCAT31((int3)((uint)(pbVar18 + (uint)CARRY1(bVar34,bVar4) + iVar11
                                                      ) >> 8),bVar7);
              *(byte *)puVar46 = (byte)*puVar46 ^ bVar7;
              *pcVar12 = *pcVar12 + (char)puVar46;
              *pbVar18 = *pbVar18 + bVar7;
              *pbVar18 = *pbVar18 + bVar7;
              *pbVar18 = *pbVar18 + bVar7;
              puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                         CONCAT11(bVar25 + *pbVar18,cVar6));
              pbVar18 = pbVar18 + (uint)CARRY1(bVar25,*pbVar18) + *(int *)pbVar18;
              *pbVar37 = *pbVar37 + cVar6;
              pbVar13 = pbVar13 + *(int *)(pbVar37 + 0x3e);
            }
            *pbVar13 = *pbVar13 + (char)pbVar18;
            cVar6 = (char)pbVar18 + 'r';
            pbVar13 = pbVar13 + -1;
            uVar39 = CONCAT31((int3)((uint)pbVar18 >> 8),cVar6);
            *pbVar13 = *pbVar13 + cVar6;
            bVar47 = 0xfff38f8d < uVar39;
            iVar11 = uVar39 + 0xc7072;
            pcVar10 = pcVar12;
          } while (SCARRY4(uVar39,0xc7072));
        } while( true );
      }
      *pcVar12 = *pcVar12 + bVar7;
      bVar7 = bVar7 + 0x6f;
      pbVar18 = (byte *)CONCAT31(uVar21,bVar7);
      bVar4 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar7;
      uVar21 = (undefined3)
               ((uint)(pbVar18 + (uint)CARRY1(bVar4,bVar7) + *(int *)((int)puVar19 + (int)pbVar37))
               >> 8);
      cVar5 = (char)(pbVar18 + (uint)CARRY1(bVar4,bVar7) + *(int *)((int)puVar19 + (int)pbVar37)) +
              'E';
      pcVar12 = (char *)CONCAT31(uVar21,cVar5);
      *pcVar12 = *pcVar12 + cVar5;
      cVar5 = cVar5 + *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar21,cVar5);
      *pcVar12 = *pcVar12 + cVar5;
      puVar46 = (uint *)CONCAT31(uVar21,cVar5 + *pcVar12);
      *(char *)puVar46 = (char)*puVar46 + cVar5 + *pcVar12;
      pbVar18 = (byte *)((uint)puVar46 | *puVar46);
      bVar4 = *pbVar18;
      bVar7 = (byte)pbVar18;
      *pbVar18 = *pbVar18 + bVar7;
      piVar14 = (int *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar7 + CARRY1(bVar4,bVar7));
      pbVar18 = pbVar13;
code_r0x00405117:
      *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
      puVar38 = (uint *)((int)puVar38 - *puVar38);
      pbVar13 = pbVar18 + 4;
      out(*(undefined4 *)pbVar18,uVar28);
    }
    *pbVar37 = *pbVar37 + (char)puVar19;
    bVar47 = puVar38 < (uint *)*piVar14;
    puVar38 = (uint *)((int)puVar38 - *piVar14);
    bVar4 = (byte)((uint)puVar19 >> 8);
    *(byte *)((int)puVar31 + 0x39) = (*(byte *)((int)puVar31 + 0x39) - bVar4) - bVar47;
    *piVar14 = (int)(*piVar14 + (int)piVar14);
    uVar39 = *puVar38;
    *(int *)((int)puVar31 + 0x39) = *(int *)((int)puVar31 + 0x39) - (int)pcVar10;
    *piVar14 = (int)(*piVar14 + (int)piVar14);
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar39 | (byte)*puVar38,(char)puVar19));
    *(char *)(piVar14 + 10) = (char)piVar14[10] + cVar6;
  } while( true );
code_r0x004052ee:
  *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
  bVar4 = (char)piVar14 + 0x28;
  pbVar13 = (byte *)CONCAT31((int3)((uint)piVar14 >> 8),bVar4);
  *pbVar13 = *pbVar13 ^ bVar4;
  *(byte *)puVar46 = (byte)*puVar46 + (char)((uint)pcVar23 >> 8);
  bVar4 = *pbVar37;
  *pbVar37 = *pbVar37 + (byte)pcVar23;
  piVar14 = (int *)(((uint)pbVar13 | 0x1496f09) + *puVar31 + (uint)CARRY1(bVar4,(byte)pcVar23));
  pbVar17 = pbVar18 + 4;
  out(*(undefined4 *)pbVar18,(short)pbVar37);
  pbVar32 = pbVar37 + -1;
  *piVar14 = *piVar14 + (int)piVar14;
  pbVar37 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),(byte)pbVar32 | (byte)*puVar46);
  cVar6 = (char)piVar14 + '\x13';
  pbVar13 = (byte *)CONCAT31((int3)((uint)piVar14 >> 8),cVar6);
  puVar19 = puVar46;
  pbVar18 = pbVar17;
  if ((POPCOUNT(cVar6) & 1U) != 0) {
    *pbVar37 = *pbVar37 - (char)((uint)pbVar32 >> 8);
    *pbVar13 = *pbVar13 + cVar6;
code_r0x00405396:
    bVar4 = *pbVar13;
    bVar7 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar7;
    *(byte **)pbVar17 = pbVar13 + (uint)CARRY1(bVar4,bVar7) + *(int *)pbVar17;
    out(*(undefined4 *)pbVar17,(short)pbVar37);
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    pcVar10 = (char *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                               CONCAT11((byte)((uint)pbVar13 >> 8) | pbVar17[4],bVar7));
    *(char **)((int)puVar31 + -1) = pcVar10 + *(int *)((int)puVar31 + -1);
    out(*(undefined4 *)(pbVar17 + 4),(short)pbVar37);
    *pcVar10 = *pcVar10 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar13 = *pbVar13 + (char)pbVar13;
  piVar14 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),(char)pbVar13 + 'o');
  puVar46 = (uint *)((int)puVar19 + -1);
  *piVar14 = *piVar14 + (int)piVar14;
  uVar21 = (undefined3)((uint)pbVar37 >> 8);
  piVar14 = (int *)((int)piVar14 + 0x1b7e);
  bVar25 = (byte)pbVar37 | *(byte *)puVar46 | *(byte *)puVar46;
  iRam04115f2c = iRam04115f2c + (int)piVar14;
  out(*(undefined4 *)pbVar18,(short)CONCAT31(uVar21,bVar25));
  *piVar14 = *piVar14 + (int)piVar14;
  bVar25 = bVar25 | (byte)piVar14;
  iVar33 = CONCAT31(uVar21,bVar25);
  pbVar13 = (byte *)((int)piVar14 - *piVar14);
  cVar6 = (char)pbVar13;
  *pcVar23 = *pcVar23 + cVar6;
  cVar5 = (char)pcVar23 - bVar25;
  *pbVar13 = *pbVar13 + cVar6;
  uVar28 = (undefined2)((uint)pcVar23 >> 0x10);
  bVar7 = (byte)((uint)pcVar23 >> 8) | *pbVar13;
  pcVar12 = pcVar12 + -1;
  *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
  bVar4 = *(byte *)(CONCAT22(uVar28,CONCAT11(bVar7,cVar5)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar13;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar12;
  *pbVar13 = *pbVar13 + cVar6;
  bVar4 = bVar7 | bVar4 | *(byte *)puVar46;
  iVar24 = CONCAT22(uVar28,CONCAT11(bVar4,cVar5));
  pbVar32 = (byte *)((uint)(pbVar18 + 4) ^ *(uint *)(iVar33 + -0x43));
  iVar11 = *(int *)pbVar13;
  *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
  if (SCARRY4(iVar11,(int)pbVar13)) {
    *pbVar13 = *pbVar13 + cVar6;
  }
  pbVar18 = pbVar13 + 0x5674;
  puVar31 = (uint *)((int)puVar31 +
                    (-(uint)((byte *)0xffffa98b < pbVar13) - *(int *)(pbVar32 + -0x7f)));
  bVar7 = (byte)pbVar18;
  *pbVar18 = *pbVar18 + bVar7;
  uVar22 = (undefined3)((uint)pbVar18 >> 8);
  bVar34 = bVar7 + 0x2d;
  piVar14 = (int *)CONCAT31(uVar22,bVar34);
  *(uint *)(pbVar32 + (int)puVar31 * 8) =
       *(int *)(pbVar32 + (int)puVar31 * 8) + iVar33 + (uint)(0xd2 < bVar7);
  bVar7 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  if (!CARRY1(bVar7,bVar34)) {
    do {
      pbVar18 = (byte *)(iVar33 + 1);
      bVar7 = (byte)piVar14;
      *(byte *)piVar14 = (char)*piVar14 + bVar7;
      bVar25 = (byte)((uint)piVar14 >> 8);
      bVar34 = (byte)puVar46 | bVar25;
      puVar19 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),bVar34);
      out(*(undefined4 *)pbVar32,(short)pbVar18);
      *(byte *)piVar14 = (char)*piVar14 + bVar7;
      uVar28 = (undefined2)((uint)iVar24 >> 0x10);
      cVar6 = (char)iVar24;
      pbVar13 = (byte *)CONCAT22(uVar28,CONCAT11((byte)((uint)iVar24 >> 8) | *pbVar18,cVar6));
      bVar4 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar7;
      *(byte *)piVar14 = (char)*piVar14 + bVar7 + CARRY1(bVar4,bVar7);
      *pbVar18 = *pbVar18 + bVar7;
      *(byte *)puVar31 = (byte)*puVar31 + bVar25;
      *(int *)((int)piVar14 * 2) =
           *(int *)((int)piVar14 * 2) + CONCAT22(uVar28,CONCAT11(0x1c,cVar6));
      *(byte *)piVar14 = (char)*piVar14 + bVar7;
      cVar5 = (char)pbVar18;
      *(byte *)puVar19 = (byte)*puVar19 + cVar5;
      *(byte *)((int)piVar14 * 2) = *(byte *)((int)piVar14 * 2) ^ bVar7;
      *(byte *)piVar14 = (char)*piVar14 + bVar7;
      pbVar13 = pbVar32 + 8;
      out(*(undefined4 *)(pbVar32 + 4),(short)pbVar18);
      piVar14 = &uRam0a0a0000;
      *pbVar18 = *pbVar18;
      bVar7 = cVar6 - cVar5;
      iVar24 = CONCAT22(uVar28,CONCAT11((byte)puVar31[0x14] | 0x1c | bRam0ca87216,bVar7));
      *pbVar18 = *pbVar18;
      bVar4 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar7;
      if (!CARRY1(bVar4,bVar7)) {
        piVar14 = &uRam1e7b7000;
        bVar4 = (byte)((uint)puVar46 >> 8) | *(byte *)(iVar33 + 3);
        puVar19 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar4,bVar34));
        if (bVar4 != 0) {
          pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar5 + pbVar13[(int)puVar31 * 8]);
          piVar14 = (int *)0x6d7d7000;
          iVar24 = iVar24 + 1;
        }
      }
      *piVar14 = *piVar14 + (int)piVar14;
      iVar33 = CONCAT31((int3)((uint)pbVar18 >> 8),(byte)pbVar18 | pbVar13[(int)puVar31 * 8]);
      *(char *)piVar14 = (char)*piVar14;
      piVar14 = (int *)CONCAT31((int3)((uint)piVar14 >> 8),0xf9);
      *puVar31 = (uint)((int)piVar14 + *puVar31 + 1);
      pbVar32 = pbVar32 + 0xc;
      out(*(undefined4 *)pbVar13,(short)iVar33);
      puVar46 = puVar19;
    } while( true );
  }
  *piVar14 = (int)(*piVar14 + (int)piVar14);
  bVar34 = bVar34 | *(byte *)((int)piVar14 + 0x4000081);
  piVar14 = (int *)CONCAT31(uVar22,bVar34);
  if ('\0' < (char)bVar34) {
    *(byte *)piVar14 = (char)*piVar14 + bVar34;
    puVar38 = (uint *)CONCAT31(uVar22,bVar34 + 0x28);
    *puVar38 = *puVar38 ^ (uint)puVar38;
    *(byte *)puVar46 = *(byte *)puVar46 + bVar4;
    cVar6 = (bVar34 + 0x28) - bVar4;
    pcVar10 = (char *)CONCAT31(uVar22,cVar6);
    *pcVar10 = *pcVar10 + cVar6;
    pbVar37 = (byte *)CONCAT31(uVar21,bVar25 | *(byte *)puVar46);
    pcVar12 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11((char)((uint)puVar46 >> 8) + *(byte *)((int)puVar19 + 0x7d),
                                        (char)puVar46));
    *pcVar10 = *pcVar10 + cVar6;
    pbVar13 = (byte *)CONCAT31(uVar22,cVar6 + 0x39U ^ *(byte *)CONCAT31(uVar22,cVar6 + 0x39U));
    *pcVar12 = *pcVar12 + bVar4;
    pbVar17 = pbVar32 + 4;
    out(*(undefined4 *)pbVar32,(short)pbVar37);
    goto code_r0x00405396;
  }
  pbVar18 = pbVar32 + 4;
  out(*(undefined4 *)pbVar32,(short)iVar33);
  pcVar23 = (char *)(iVar24 + -1);
  *piVar14 = (int)(*piVar14 + (int)piVar14);
  pbVar37 = (byte *)CONCAT31(uVar21,bVar25 | *(byte *)puVar46);
  goto code_r0x004052ee;
}


