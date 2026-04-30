/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004049d4
 * Raw Name    : <Execute>b__5
 * Demangled   : <Execute>b__5
 * Prototype   : int <Execute>b__5(uint * x, uint * param_2, undefined4 * param_3, char * param_4, byte * param_5, uint * param_6, int param_7, uint * param_8)
 * Local Vars  : unaff_ESI, ppuVar46, puVar47, unaff_EDI, in_SS, in_ES, bVar48, in_DS, unaff_retaddr, in_AF, uStack_6b, uStack_6c, x, uStack_68, uStack_6a, puStack_28, uStack_2c, puStack_14, uStack_1c, puStack_c, puStack_10, puStack_4, uStack_8, uVar2, uVar1, bVar4, uVar3, cVar6, bVar5, cVar8, cVar7, uVar10, bVar9, puVar11, in_EAX, puVar13, uVar12, iVar15, puVar14, pbVar17, pbVar16, pcVar19, piVar18, pcVar21, puVar20, pcVar23, puVar22, uVar25, uVar24, puVar27, pbVar26, pcVar29, puVar28, bVar31, iVar30, param_2, uVar33, bVar32, param_3, bVar35, param_4, param_5, uVar34, iVar37, param_6, param_7, puVar36, param_8, unaff_EBX, cVar38, puVar40, uVar39, cVar42, cVar41, unaff_EBP, ppuVar43, ppuVar45, puVar44
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

int __fastcall
<Execute>b__5(uint *x,uint *param_2,undefined4 *param_3,char *param_4,byte *param_5,uint *param_6,
             int param_7,uint *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  undefined3 uVar24;
  ushort *puVar11;
  byte *in_EAX;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  int *piVar18;
  char *pcVar19;
  uint *puVar20;
  char *pcVar21;
  uint *puVar22;
  undefined3 uVar25;
  char *pcVar23;
  byte bVar31;
  undefined2 uVar33;
  byte *pbVar26;
  uint *puVar27;
  byte bVar32;
  undefined2 uVar34;
  uint *puVar28;
  char *pcVar29;
  int iVar30;
  byte bVar35;
  uint *puVar36;
  int iVar37;
  char cVar38;
  char cVar41;
  int unaff_EBX;
  char cVar42;
  uint uVar39;
  uint *puVar40;
  undefined4 **ppuVar43;
  undefined4 **unaff_EBP;
  undefined4 *puVar44;
  undefined4 **ppuVar45;
  undefined4 **ppuVar46;
  uint *unaff_ESI;
  uint *unaff_EDI;
  uint *puVar47;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar48;
  byte in_AF;
  uint *unaff_retaddr;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_2c;
  uint *puStack_28;
  undefined2 uStack_1c;
  uint *puStack_14;
  uint *puStack_10;
  undefined4 *puStack_c;
  undefined2 uStack_8;
  uint *puStack_4;
  
                    /* .NET CLR Managed Code */
  pbVar26 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x77),
                                      (char)unaff_EBX));
  do {
    *in_EAX = *in_EAX + (char)in_EAX;
    puVar14 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'o');
    *(byte *)puVar14 = (byte)*puVar14;
    puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
    puVar28 = unaff_ESI;
    do {
      unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar26 + 0x70));
      bVar4 = (byte)puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar4;
      uVar24 = (undefined3)((uint)puVar14 >> 8);
      bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
      puVar14 = (uint *)CONCAT31(uVar24,bVar4);
      cVar7 = (char)x;
      *(byte *)param_2 = (byte)*param_2 + cVar7;
      bVar31 = (char)((uint)x >> 8) - *(byte *)((int)puVar28 + 2);
      x = (uint *)CONCAT22((short)((uint)x >> 0x10),CONCAT11(bVar31,cVar7));
      if ((POPCOUNT(bVar31) & 1U) != 0) goto code_r0x004049b4;
      *(byte *)puVar14 = (byte)*puVar14 + bVar4;
      bVar5 = bVar4 + 2;
      puVar14 = (uint *)CONCAT31(uVar24,bVar5);
      unaff_ESI = puVar28;
      if ((POPCOUNT(bVar5) & 1U) == 0) goto code_r0x004049f5;
      puVar28 = puStack_4;
    } while (0xfd < bVar4);
    *(byte *)puVar14 = (byte)*puVar14 | bVar5;
    bVar4 = (byte)*puVar14;
    puVar36 = param_2;
    ppuVar45 = unaff_EBP;
    while (param_2 = puVar36, unaff_EBP = ppuVar45, (POPCOUNT(bVar4) & 1U) != 0) {
      while( true ) {
        cVar7 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar7;
        uVar24 = (undefined3)((uint)puVar14 >> 8);
        cVar6 = cVar7 + '\x02';
        puVar11 = (ushort *)CONCAT31(uVar24,cVar6);
        bVar4 = (byte)((uint)param_7 >> 8);
        uVar34 = (undefined2)((uint)param_7 >> 0x10);
        puVar14 = puVar28;
        if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar11 = (char)*puVar11 + cVar6;
        bVar5 = cVar7 + 0x7d;
        iVar15 = CONCAT31(uVar24,bVar5);
        pbVar16 = (byte *)(iVar15 + (int)unaff_EBP);
        bVar31 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar5;
        uVar39 = *x;
        *(byte *)param_2 = (byte)*param_2 + (char)x;
        pcVar19 = (char *)(((iVar15 - uVar39) - (uint)CARRY1(bVar31,bVar5)) + -0x727b0317);
        cVar7 = (char)pcVar19;
        *pcVar19 = *pcVar19 + cVar7;
        uVar24 = (undefined3)((uint)pcVar19 >> 8);
        cVar6 = cVar7 + '\x02';
        puVar14 = (uint *)CONCAT31(uVar24,cVar6);
        if ((POPCOUNT(cVar6) & 1U) == 0) break;
        while( true ) {
          cVar7 = (char)puVar14;
          *(char *)puVar14 = (char)*puVar14 + cVar7;
          uVar24 = (undefined3)((uint)puVar14 >> 8);
          cVar6 = cVar7 + '\x02';
          piVar18 = (int *)CONCAT31(uVar24,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) break;
          *(byte *)param_2 = (byte)*param_2 + (char)x;
          uStack_8 = in_SS;
          puVar36 = puVar28;
          puVar28 = unaff_retaddr;
          while( true ) {
            *(byte *)x = (byte)*x + 1;
            uVar24 = (undefined3)((uint)piVar18 >> 8);
            bVar31 = (char)piVar18 - (char)*piVar18;
            pbVar16 = (byte *)CONCAT31(uVar24,bVar31);
            *pbVar16 = *pbVar16 + bVar31;
            puVar14 = (uint *)((int)puVar36 + *(int *)pbVar16);
            cVar7 = bVar31 + *pbVar16;
            puVar11 = (ushort *)CONCAT31(uVar24,cVar7);
            *puVar11 = *puVar11 +
                       (ushort)CARRY1(bVar31,*pbVar16) * (((ushort)puVar11 & 3) - (*puVar11 & 3));
            *(char *)puVar11 = (char)*puVar11 + cVar7;
            *(char *)puVar11 = (char)*puVar11 + cVar7;
            *(char *)puVar11 = (char)*puVar11 + cVar7;
            unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar26 + 0x70));
            unaff_retaddr = puVar28;
code_r0x0040495b:
            puVar28 = unaff_retaddr;
            cVar7 = (char)puVar11;
            *(char *)puVar11 = (char)*puVar11 + cVar7;
            uVar24 = (undefined3)((uint)puVar11 >> 8);
            cVar6 = cVar7 + '\x02';
            pcVar19 = (char *)CONCAT31(uVar24,cVar6);
            if ((POPCOUNT(cVar6) & 1U) == 0) break;
            *param_2 = (uint)(*param_2 + (int)unaff_EBP);
            puVar36 = (uint *)((int)puVar14 + 1);
            out((byte)*puVar14,(short)param_2);
            pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                       CONCAT11((char)((uint)pbVar26 >> 8) + pbVar26[-0x3b],
                                                (char)pbVar26));
            while( true ) {
              cVar7 = (char)pcVar19;
              *pcVar19 = *pcVar19 + cVar7;
              uVar24 = (undefined3)((uint)pcVar19 >> 8);
              bVar31 = cVar7 + 2;
              pcVar19 = (char *)CONCAT31(uVar24,bVar31);
              if ((POPCOUNT(bVar31) & 1U) == 0) break;
              while( true ) {
                bRam00c36f08 = bVar31;
                bVar31 = *(byte *)puVar36;
                cVar7 = (char)pcVar19;
                *(byte *)puVar36 = *(byte *)puVar36 + cVar7;
                puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
                if (SCARRY1(bVar31,cVar7) == (char)*(byte *)puVar36 < '\0') {
                  pcVar19[(int)unaff_EBP] = pcVar19[(int)unaff_EBP] + cVar7;
                  goto code_r0x00404982;
                }
                *pcVar19 = *pcVar19 + cVar7;
                pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar19 >> 8),cVar7 + '*');
                bVar31 = (byte)((uint)x >> 8);
                uVar33 = (undefined2)((uint)x >> 0x10);
                cVar7 = (char)x;
                bVar5 = bVar31 + *pbVar16;
                pbVar16 = pbVar16 + (uint)CARRY1(bVar31,*pbVar16) + *(int *)pbVar16;
                *(byte *)param_2 = (byte)*param_2 + cVar7;
                cVar8 = (char)pbVar26 - *(byte *)puVar36;
                bVar31 = *pbVar16;
                cVar6 = bVar5 + *pbVar16;
                pcVar21 = (char *)CONCAT22(uVar33,CONCAT11(cVar6,cVar7));
                iVar15 = *(int *)pbVar16;
                *(byte *)param_2 = (byte)*param_2 + cVar7;
                uVar24 = (undefined3)((uint)(pbVar16 + (uint)CARRY1(bVar5,bVar31) + iVar15) >> 8);
                bVar31 = (char)(pbVar16 + (uint)CARRY1(bVar5,bVar31) + iVar15) -
                         *(byte *)((int)param_2 + 3);
                pcVar19 = (char *)CONCAT31(uVar24,bVar31);
                pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                           CONCAT11((char)((uint)pbVar26 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)pbVar26 >> 8),
                                                                       cVar8) + -0x3a),cVar8));
                *pcVar19 = *pcVar19 + bVar31;
                pcVar19 = (char *)CONCAT31(uVar24,bVar31 + 0x6f);
                *pcVar21 = (*pcVar21 - (bVar31 + 0x6f)) - (0x90 < bVar31);
                *(byte *)param_2 = (byte)*param_2 + cVar7;
                puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),in_SS);
                *pcVar21 = *pcVar21 + '\x01';
                cVar6 = cVar6 - *(byte *)((int)puVar14 + 3);
                x = (uint *)CONCAT22(uVar33,CONCAT11(cVar6,cVar7));
                if ((POPCOUNT(cVar6) & 1U) == 0) break;
                pcVar19 = pcVar19 + -0x1b7e2606;
                *pcVar19 = *pcVar19 + (char)pcVar19;
                pcVar19 = (char *)CONCAT22((short)((uint)pcVar19 >> 0x10),
                                           CONCAT11((byte)((uint)pcVar19 >> 8) |
                                                    (byte)param_2[0x30dbc2],(char)pcVar19));
                bVar31 = bRam00c36f08;
              }
            }
            *pcVar19 = *pcVar19 + bVar31;
            piVar18 = (int *)CONCAT31(uVar24,cVar7 + 'q');
            *x = (*x - (int)piVar18) - (uint)(0x90 < bVar31);
            *(byte *)param_2 = (byte)*param_2 + (char)x;
            unaff_EBP = (undefined4 **)((int)unaff_EBP + *(int *)((int)unaff_EDI + 0x1a));
            *piVar18 = (int)(*piVar18 + (int)piVar18);
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *(byte *)puVar36);
          }
          *pcVar19 = *pcVar19 + cVar6;
          pcVar19 = (char *)(CONCAT31(uVar24,cVar7 + '}') + (int)unaff_EBP);
          *pcVar19 = *pcVar19 + cVar7 + '}';
          *(char *)param_8 = (char)*param_8 + (char)param_8;
          x = (uint *)CONCAT22(uVar34,CONCAT11(bVar4 | *(byte *)(param_7 * 3),(char)param_7));
          unaff_EDI = (uint *)((int)puStack_4 + *(int *)(param_5 + 0x6f));
          puVar14 = param_8;
          param_2 = param_6;
          pbVar26 = param_5;
          unaff_EBP = (undefined4 **)param_3;
          unaff_retaddr = puVar28;
        }
        *(char *)piVar18 = (char)*piVar18 + cVar6;
        pcVar19 = (char *)CONCAT31(uVar24,cVar7 + '}');
        out(*puVar28,(short)param_2);
        *pcVar19 = *pcVar19 + cVar7 + '}';
        puVar28 = unaff_retaddr;
code_r0x00404982:
        *(char *)param_8 = (char)*param_8 + (char)param_8;
        x = (uint *)CONCAT22(uVar34,CONCAT11(bVar4 | *(byte *)(param_7 + (int)puVar28),(char)param_7
                                            ));
        unaff_EDI = (uint *)((int)puStack_4 + *(int *)(param_5 + 0x71));
        puVar14 = param_8;
        param_2 = param_6;
        pbVar26 = param_5;
        unaff_EBP = (undefined4 **)param_3;
        unaff_retaddr = puVar28;
      }
      *(char *)puVar14 = (char)*puVar14 + cVar6;
      bVar31 = cVar7 + 0x7d;
      iVar15 = CONCAT31(uVar24,bVar31);
      pbVar16 = (byte *)(iVar15 + (int)unaff_EBP);
      bVar4 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar31;
      puVar14 = (uint *)((iVar15 - *x) - (uint)CARRY1(bVar4,bVar31));
code_r0x004049b4:
      *(byte *)param_2 = (byte)*param_2 + (char)x;
      puVar36 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                                 ((char)param_2 - (byte)*unaff_EDI) - (byte)*puVar28);
      pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),
                                 (char)pbVar26 - *(byte *)((int)puVar28 + 0x72));
      *puVar14 = *puVar14 & (uint)x;
      pbVar16 = (byte *)((int)puVar14 + 2);
      *pbVar16 = *pbVar16 + (char)((uint)param_2 >> 8);
      ppuVar45 = unaff_EBP;
      bVar4 = *pbVar16;
    }
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
    cVar7 = (char)puVar14 + '\x03';
    in_EAX = (byte *)CONCAT31((int3)((uint)puVar14 >> 8),cVar7);
    unaff_ESI = puVar28 + 1;
    out(*puVar28,(short)puVar36);
    *in_EAX = *in_EAX + cVar7;
    cVar6 = (char)x;
    x = (uint *)CONCAT22((short)((uint)x >> 0x10),CONCAT11((byte)((uint)x >> 8) | *in_EAX,cVar6));
    *(int *)in_EAX = *(int *)in_EAX - (int)in_EAX;
    *(byte *)puVar36 = (byte)*puVar36 + cVar6;
    cVar6 = (char)pbVar26 - *(byte *)((int)puVar28 + 6);
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar6);
    in_SS = puStack_4._0_2_;
  } while ((POPCOUNT(cVar6) & 1U) == 0);
  pbVar16 = (byte *)((int)unaff_EDI + (int)ppuVar45 * 2);
  *pbVar16 = *pbVar16 + cVar7;
code_r0x00404a51:
  pbVar16 = in_EAX + 1;
  cVar7 = (char)pbVar16;
  *pbVar16 = *pbVar16 + cVar7;
  pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                             CONCAT11((char)((uint)pbVar26 >> 8) - cVar7,(char)pbVar26));
  *pbVar16 = *pbVar16 + cVar7;
  puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(char)puVar36 - (byte)*x);
  pbVar17 = in_EAX + 0x757b03;
  pbVar16 = (byte *)((int)unaff_EDI + (int)ppuVar45 * 2);
  cVar7 = (char)pbVar17;
  *pbVar16 = *pbVar16 + cVar7;
  *pbVar17 = *pbVar17 + cVar7;
  *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)((uint)pbVar17 >> 8);
  *pbVar17 = *pbVar17 + cVar7;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar45 + -0x3a));
  *pbVar17 = *pbVar17 + cVar7;
  pbVar16 = (byte *)(CONCAT31((int3)((uint)pbVar17 >> 8),cVar7 + '\x11') + 0x757b02);
  pbVar17 = (byte *)((int)unaff_EDI + (int)ppuVar45 * 2);
  bVar31 = (byte)pbVar16;
  *pbVar17 = *pbVar17 + bVar31;
  bVar4 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar31;
  puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_ES);
  pbRam011006fe = pbVar16 + (int)(pbRam011006fe + CARRY1(bVar4,bVar31));
  uVar39 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar31;
  ppuVar46 = ppuVar45;
  if (!CARRY1((byte)uVar39,bVar31)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar4;
    bVar5 = (byte)x;
    x = (uint *)CONCAT22((short)((uint)x >> 0x10),CONCAT11((byte)((uint)x >> 8) | *pbVar16,bVar5));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar24 = (undefined3)((uint)pbVar16 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar7 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar19 = (char *)CONCAT31(uVar24,cVar7);
    *pcVar19 = *pcVar19 + cVar7;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar46 + -0x39));
    *pcVar19 = *pcVar19 + cVar7;
    iVar15 = CONCAT31(uVar24,cVar7 + '\x11') + 0xc57b;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x11') + 0xc67b;
    bVar31 = (byte)iVar15;
    bVar4 = bVar31 + 0x6f;
    pbVar16 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar4);
    *x = (*x - (int)pbVar16) - (uint)(0x90 < bVar31);
    uVar39 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + bVar5;
    pbRam011106fe = pbVar16 + (int)(pbRam011106fe + CARRY1((byte)uVar39,bVar5));
    uVar39 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar4;
    if (!CARRY1((byte)uVar39,bVar4)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    bVar4 = (byte)x;
    bVar31 = (byte)((uint)x >> 8) | *pbVar16;
    x = (uint *)CONCAT22((short)((uint)x >> 0x10),CONCAT11(bVar31,bVar4));
    *pbVar16 = *pbVar16 - (char)pbVar16;
    *pbVar26 = *pbVar26 + bVar31;
    out(*unaff_ESI,(short)puVar36);
    *x = *x & (uint)pbVar16;
    uVar39 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + bVar4;
    pbVar16 = pbVar16 + (uint)CARRY1((byte)uVar39,bVar4) + unaff_ESI[1];
    *pbVar16 = *pbVar16 + (char)pbVar16;
    *(byte *)x = (byte)*x + (char)puVar36;
    unaff_ESI = unaff_ESI + 1;
    while( true ) {
      out(*unaff_ESI,(short)puVar36);
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 & (byte)*x);
      *(byte *)puVar36 = (byte)*puVar36 + (char)x;
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((byte)((uint)puVar36 >> 8) | pbVar26[0x14],(char)puVar36))
      ;
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      unaff_ESI = unaff_ESI + 1;
code_r0x00404ad4:
      puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_ES);
      pbVar16 = (byte *)((uint)pbVar16 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar16;
code_r0x00404add:
      bVar4 = (byte)pbVar16;
      uVar24 = (undefined3)((uint)pbVar16 >> 8);
      cVar7 = bVar4 + 8;
      pbVar16 = (byte *)CONCAT31(uVar24,cVar7);
      if (SCARRY1(bVar4,'\b') == cVar7 < '\0') break;
      *pbVar16 = *pbVar16 + cVar7;
      cVar7 = bVar4 + 10;
      piVar18 = (int *)CONCAT31(uVar24,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) {
        *piVar18 = (int)(*piVar18 + (int)piVar18);
        goto code_r0x00404b18;
      }
      *(char *)piVar18 = (char)*piVar18 + cVar7;
      puVar14 = (uint *)CONCAT31(uVar24,bVar4 + 0x7c);
      *puVar14 = *puVar14 & (uint)x;
      *(char *)((int)puVar14 + 0x11) = *(char *)((int)puVar14 + 0x11) + (char)((uint)puVar36 >> 8);
      cVar7 = (char)((int)puVar14 + 0xc67b);
      uVar24 = (undefined3)((uint)((int)puVar14 + 0xc67b) >> 8);
      bVar4 = cVar7 + 8;
      pbVar16 = (byte *)CONCAT31(uVar24,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar16 = *pbVar16 + bVar4;
        cRam02060000 = cVar7 + 'w';
        puVar28 = (uint *)CONCAT31(uVar24,cRam02060000);
        *(byte *)puVar28 = (byte)*puVar28 + cRam02060000;
        cVar7 = (char)x;
        x = (uint *)CONCAT22((short)((uint)x >> 0x10),
                             CONCAT11((byte)((uint)x >> 8) | (byte)*puVar28,cVar7));
        *puVar28 = *puVar28 - (int)puVar28;
        *(byte *)puVar36 = (byte)*puVar36 + cVar7;
        puVar14 = unaff_ESI + 1;
        out(*unaff_ESI,(short)puVar36);
        unaff_ESI = puVar14;
        if ((POPCOUNT((byte)*puVar36) & 1U) == 0) goto code_r0x00404b0f;
        pcVar19 = (char *)((uint)puVar28 | *puVar28);
        goto code_r0x00404b89;
      }
      bVar31 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar4;
      *unaff_ESI = (uint)(pbVar16 + (uint)CARRY1(bVar31,bVar4) + *unaff_ESI);
    }
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    *x = (uint)(pbVar16 + (uint)(0xf7 < bVar4) + *x);
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar4;
    uVar24 = (undefined3)((uint)puVar14 >> 8);
    bVar5 = bVar4 + 0x6f;
    pbVar16 = (byte *)CONCAT31(uVar24,bVar5);
    *x = (*x - (int)pbVar16) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    puVar44 = (undefined4 *)((int)unaff_EBP + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    uVar25 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | (byte)*unaff_ESI;
    param_2 = (uint *)CONCAT31(uVar25,bVar4);
    *(byte *)x = (byte)*x + 1;
    cVar6 = bVar5 - *pbVar16;
    unaff_ESI = (uint *)((int)unaff_ESI +
                        (-(uint)(bVar5 < *pbVar16) - *(int *)CONCAT31(uVar24,cVar6)));
    uVar12 = CONCAT31(uVar24,cVar6 + *(char *)CONCAT31(uVar24,cVar6));
    bVar48 = CARRY1(bRam14110000,bVar31);
    bRam14110000 = bRam14110000 + bVar31;
    uVar39 = *(uint *)(pbVar26 + (int)unaff_ESI * 2);
    uVar2 = uVar12 + *(uint *)(pbVar26 + (int)unaff_ESI * 2);
    puVar13 = (undefined4 *)(uVar2 + bVar48);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar13 = uVar1;
    uVar39 = (uint)(CARRY4(uVar12,uVar39) || CARRY4(uVar2,(uint)bVar48));
    puVar14 = (uint *)((int)puVar13 + uRam7d020511 + uVar39);
    ppuVar43 = &puStack_c;
    ppuVar45 = &puStack_c;
    ppuVar46 = &puStack_c;
    unaff_EBP = &puStack_c;
    puStack_c = puVar44;
    cVar6 = '\x03';
    do {
      puVar44 = puVar44 + -1;
      ppuVar43 = ppuVar43 + -1;
      *ppuVar43 = (undefined4 *)*puVar44;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    puStack_4 = (uint *)&puStack_c;
    pbRam00c82802 =
         (byte *)((int)puVar14 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar13,uRam7d020511) ||
                      CARRY4((int)puVar13 + uRam7d020511,uVar39))));
    uVar39 = *unaff_ESI;
    cVar6 = (char)puVar14;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar6;
  } while (SCARRY1((byte)uVar39,cVar6) == (char)(byte)*unaff_ESI < '\0');
  *(byte *)puVar14 = (byte)*puVar14 + cVar6;
  iVar15 = CONCAT31((int3)((uint)puVar14 >> 8),cVar6 + '\x11') + 0xc57b;
  bVar31 = (byte)iVar15;
  *param_2 = *param_2 ^ (uint)pbVar26;
  puVar36 = (uint *)CONCAT31(uVar25,bVar4 + (byte)*x);
  iVar15 = (CONCAT31((int3)((uint)iVar15 >> 8),bVar31 + 0x6f) - (uint)(0x90 < bVar31)) + -0x18093a86
  ;
  cVar7 = (char)iVar15;
  uVar24 = (undefined3)((uint)iVar15 >> 8);
  cVar6 = cVar7 + '\x02';
  pbVar16 = (byte *)CONCAT31(uVar24,cVar6);
  if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar16 = *pbVar16 + cVar6;
  in_EAX = (byte *)CONCAT31(uVar24,cVar7 + 'q');
  goto code_r0x00404a51;
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar28;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(char)puVar28 + 'r');
    piVar18 = (int *)((uint)puVar14 | *puVar14);
    puVar36 = puStack_28;
code_r0x00404b18:
    bRam11060000 = (byte)piVar18;
    iVar15 = CONCAT31((int3)((uint)((int)piVar18 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar18 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar15;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),bVar4 + 0x6f);
    *x = (*x - iVar15) - (uint)(0x90 < bVar4);
    cVar7 = (char)x;
    *(byte *)puVar36 = (byte)*puVar36 + cVar7;
    bVar32 = (byte)((uint)pbVar26 >> 8);
    bVar5 = (byte)((uint)puVar36 >> 8) | bVar32;
    pcVar21 = (char *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar5,(byte)puVar36));
    piVar18 = (int *)(iVar15 + 0x73060001);
    *(byte *)x = (byte)*x & (byte)piVar18;
    *pcVar21 = *pcVar21 + cVar7;
    bVar31 = (byte)((uint)x >> 8);
    *(byte *)piVar18 = *(char *)piVar18 - bVar31;
    *(byte *)piVar18 = *(char *)piVar18 + (byte)piVar18;
    iVar15 = *piVar18;
    *piVar18 = *piVar18 - (int)piVar18;
    *pbVar26 = *pbVar26 + bVar31;
    pcVar19 = (char *)((uint)piVar18 | *unaff_EDI);
    *pcVar21 = *pcVar21 - bVar31;
    bVar4 = (byte)pcVar19;
    *pcVar19 = *pcVar19 + bVar4;
    ppuVar46 = (undefined4 **)
               (((int)ppuVar46 - iVar15) - *(int *)(pcVar19 + ((int)ppuVar46 - iVar15)));
    uVar34 = (undefined2)((uint)pbVar26 >> 0x10);
    bVar9 = (byte)pbVar26;
    cVar6 = bVar32 + pbVar26[0x76];
    pbVar26 = (byte *)CONCAT22(uVar34,CONCAT11(cVar6,bVar9));
    *pcVar19 = *pcVar19 + bVar4;
    uVar24 = (undefined3)((uint)pcVar19 >> 8);
    uVar12 = CONCAT31(uVar24,bVar4 + 7);
    puVar14 = (uint *)((int)ppuVar46 + -0x1faeef1);
    uVar39 = *puVar14;
    uVar2 = *puVar14 + uVar12;
    *puVar14 = uVar2 + (0xf8 < bVar4);
    puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_ES);
    puVar47 = puStack_28;
    bVar4 = bVar4 + 7 + (byte)*x + (CARRY4(uVar39,uVar12) || CARRY4(uVar2,(uint)(0xf8 < bVar4)));
    puVar28 = (uint *)CONCAT31(uVar24,bVar4);
    uVar39 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar4;
    if (CARRY1((byte)uVar39,bVar4)) break;
    *(byte *)puVar28 = (byte)*puVar28 + bVar4;
    pbVar26 = (byte *)CONCAT22(uVar34,CONCAT11(cVar6 + pbVar26[0x76],bVar9));
    uStack_2c = in_ES;
  }
  *(byte *)puVar28 = (byte)*puVar28 + bVar4;
  uVar25 = (undefined3)((uint)pcVar21 >> 8);
  bVar35 = (byte)puVar36 | *pbVar26;
  puVar36 = (uint *)CONCAT31(uVar25,bVar35);
  pcRam2b060000 = (char *)CONCAT31(uVar24,bVar4 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar4 + 0x39)) - (0xd7 < (byte)(bVar4 + 0x11));
  bVar32 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar31;
  puVar14 = unaff_ESI + 1;
  out(*unaff_ESI,(short)puVar36);
  bVar4 = (bVar4 + 0x37) - CARRY1(bVar32,bVar31);
  piVar18 = (int *)CONCAT31(uVar24,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar4;
    iVar15 = CONCAT31(uVar24,bVar4 + 0x11) + 0xc77b;
    pcVar19 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + 'r');
    pcVar19[0x28] = pcVar19[0x28] + bVar5;
code_r0x00404b89:
    cVar7 = (char)pcVar19;
    *pcVar19 = *pcVar19 + cVar7;
    *pcVar19 = *pcVar19 + cVar7;
    *pcVar19 = *pcVar19 + cVar7;
    puVar11 = (ushort *)CONCAT31((int3)((uint)pcVar19 >> 8),cVar7 + 'r');
    uVar10 = (ushort)puVar11 | *puVar11;
    pcVar19 = (char *)CONCAT22((short)((uint)pcVar19 >> 0x10),uVar10);
    bRam11060000 = (byte)uVar10;
    out(*puVar14,(short)puVar36);
    *pcVar19 = *pcVar19 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar18 = (char)*piVar18 + bVar4;
  puVar44 = (undefined4 *)((int)ppuVar46 - *(int *)((int)unaff_EDI + 0x21));
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pcVar19 = (char *)CONCAT31(uVar25,bVar35 | *pbVar26);
  puVar28 = unaff_ESI + 2;
  out(*puVar14,(short)pcVar19);
  uVar39 = *x;
  *pcVar19 = *pcVar19 + cVar7;
  uVar39 = CONCAT31(uVar24,bVar4 & (byte)uVar39) | 0x767b02;
  *(byte *)((int)x + (int)pcVar19) = *(byte *)((int)x + (int)pcVar19) + (char)uVar39;
  iVar15 = uVar39 + 0xc67b;
  cVar42 = (char)iVar15;
  uVar24 = (undefined3)((uint)iVar15 >> 8);
  cVar8 = cVar42 + 'r';
  pcVar19 = (char *)CONCAT31(uVar24,cVar8);
  pcVar19[0x28] = pcVar19[0x28] + bVar5;
  *pcVar19 = *pcVar19 + cVar8;
  uVar33 = (undefined2)((uint)x >> 0x10);
  bVar31 = bVar31 | *(byte *)((int)puStack_28 + -0x5e);
  puVar27 = (uint *)CONCAT22(uVar33,CONCAT11(bVar31,cVar7));
  *pcVar19 = *pcVar19 + cVar8;
  puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,uStack_2c);
  puVar14 = (uint *)CONCAT22(uVar34,CONCAT11(cVar6 + pbVar26[0x76],bVar9));
  *pcVar19 = *pcVar19 + cVar8;
  puVar36 = (uint *)CONCAT31(uVar24,cVar42 + -0x1c);
  pcVar19 = (char *)((uint)puVar36 | *puVar36);
  bVar48 = (POPCOUNT((uint)pcVar19 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar19;
  puVar36 = puStack_28;
  puVar40 = puVar14;
  puVar13 = puVar44;
  puVar22 = puVar47;
  uVar34 = uStack_2c;
  if (!bVar48) goto code_r0x00404ca8;
  *pcVar19 = *pcVar19 + cRam02060000;
  puVar40 = (uint *)CONCAT31((int3)((uint)pcVar19 >> 8),cRam02060000 + 'r');
  *puVar40 = *puVar40 & (uint)puVar27;
  *(char *)((int)puVar40 + 0x11) = *(char *)((int)puVar40 + 0x11) + (char)((ushort)uStack_2c >> 8);
  iVar15 = (int)puVar40 + 0xc77b;
  uVar24 = (undefined3)((uint)iVar15 >> 8);
  cRam02060000 = (char)iVar15 + '\t';
  pbVar26 = (byte *)CONCAT31(uVar24,cRam02060000);
  out(*puVar28,uStack_2c);
  *pbVar26 = *pbVar26 + cRam02060000;
  puVar22 = (uint *)CONCAT22(uVar33,CONCAT11(bVar31 | *pbVar26,cVar7));
  *(int *)pbVar26 = *(int *)pbVar26 - (int)pbVar26;
  *(byte *)puStack_28 = (byte)*puStack_28 + cVar7;
  out(unaff_ESI[3],uStack_2c);
  puVar28 = unaff_ESI + 4;
  uVar34 = uStack_2c;
  if ((POPCOUNT((byte)*puStack_28) & 1U) != 0) goto code_r0x00404cca;
  *pbVar26 = *pbVar26 + cRam02060000;
  puVar11 = (ushort *)CONCAT31(uVar24,(char)iVar15 + '{');
  uVar10 = (ushort)puVar11 | *puVar11;
  pcVar19 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),uVar10);
  bVar4 = (byte)uVar10;
  out(unaff_ESI[4],uStack_2c);
  pbVar26 = (byte *)((int)puVar22 + 1);
  bRam11060000 = bVar4;
  *pcVar19 = *pcVar19 + bVar4;
  puVar27 = (uint *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                             CONCAT11((byte)((uint)pbVar26 >> 8) | bRam110cde91,(char)pbVar26));
  pcVar19 = (char *)CONCAT31((int3)((uint)pcVar19 >> 8),bVar4 - 7);
  *puVar47 = (uint)(pcVar19 + (uint)(bVar4 < 7) + *puVar47);
  puVar28 = unaff_ESI + 6;
  out(unaff_ESI[5],uStack_2c);
  puVar36 = (uint *)((int)puStack_28 + 1);
  *pcVar19 = *pcVar19 + (bVar4 - 7);
  puVar40 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar9 | (byte)(uVar10 >> 8));
  do {
    bVar4 = (char)pcVar19 - *pcVar19;
    uVar39 = *puVar27;
    *(byte *)puVar27 = (byte)*puVar27 + bVar4;
    cVar7 = bVar4 - CARRY1((byte)uVar39,bVar4);
    *(byte *)puVar36 = (byte)*puVar36 + cVar7;
    cVar6 = (char)((uint)puVar27 >> 8);
    *(byte *)(puVar47 + 0x673b40) = (byte)puVar47[0x673b40] + cVar6;
    puVar20 = (uint *)CONCAT31((int3)((uint)pcVar19 >> 8),cVar7);
    *(byte *)puVar20 = (byte)*puVar20 + cVar7;
    *(byte *)puVar36 = (byte)*puVar36 + cVar7;
    puVar40[0x16] = (uint)(puVar40[0x16] + (int)puVar28);
    puVar22 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar27 >> 0x10),
                                               CONCAT11(cVar6 + (char)((uint)pcVar19 >> 8),
                                                        (char)puVar27)) >> 8),
                               (char)puVar27 + *(char *)((int)puVar20 * 2));
    *(byte *)puVar20 = (byte)*puVar20 + cVar7;
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar40;
    puVar14 = puVar40;
_ctor:
    bVar31 = (byte)((uint)puVar22 >> 8);
    uVar39 = *puVar20;
    bVar4 = (byte)puVar22;
    puVar20 = (uint *)((int)puVar20 + (uint)CARRY1(bVar31,(byte)*puVar20) + *puVar20);
    *(byte *)puVar36 = (byte)*puVar36 + bVar4;
    cVar7 = bVar4 - *(byte *)((int)puVar36 + 3);
    puVar27 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar22 >> 0x10),
                                               CONCAT11(bVar31 + (byte)uVar39,bVar4)) >> 8),cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      if (*(byte *)((int)puVar36 + 3) <= bVar4) {
        *puVar20 = (uint)(*puVar20 + (int)puVar20);
        puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(byte)puVar36 | (byte)*puVar14);
        puVar20 = puVar20 + 0x230e;
        puVar22 = puVar27;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
    cVar7 = (char)puVar20 + '\x02';
    pcVar19 = (char *)CONCAT31((int3)((uint)puVar20 >> 8),cVar7);
    bVar48 = (POPCOUNT(cVar7) & 1U) == 0;
    puVar40 = puVar14;
    puVar13 = puVar44;
    puVar22 = puVar47;
    uVar34 = uStack_1c;
code_r0x00404ca8:
    uStack_1c = uVar34;
    puVar14 = puStack_4;
    puVar44 = puStack_c;
    puVar47 = puStack_14;
    if (bVar48) break;
    *(byte *)puVar36 = (byte)*puVar36 + (char)puVar27;
    puVar44 = puVar13;
    puVar47 = puVar22;
  } while( true );
  *pcVar19 = *pcVar19 + (char)pcVar19;
  *param_4 = *param_4 + (byte)param_4;
  puVar22 = (uint *)CONCAT22((short)((uint)param_3 >> 0x10),
                             CONCAT11((byte)((uint)param_3 >> 8) | (byte)*unaff_retaddr,
                                      (char)param_3));
  *(byte *)puStack_4 = (byte)*puStack_4 + (char)puStack_4;
  *(byte *)((int)param_4 * 2) = *(byte *)((int)param_4 * 2) ^ (byte)param_4;
  uVar3 = *(undefined6 *)param_4;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar26 = (byte *)uVar3;
  bVar31 = (byte)uVar3;
  *pbVar26 = *pbVar26 + bVar31;
  bVar4 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar31;
  puVar28 = (uint *)((int)puVar22 + 0x11673);
  uVar39 = *puVar28;
  uVar2 = *puVar28;
  *puVar28 = (uint)((byte *)(uVar2 + (int)unaff_retaddr) + CARRY1(bVar4,bVar31));
  puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,uStack_1c);
  pbVar26 = pbVar26 + (uint)(CARRY4(uVar39,(uint)unaff_retaddr) ||
                            CARRY4(uVar2 + (int)unaff_retaddr,(uint)CARRY1(bVar4,bVar31))) +
                      *(int *)((int)puVar22 + (int)unaff_retaddr);
  puVar36 = unaff_retaddr;
  puVar28 = puStack_10;
  uVar34 = uStack_1c;
code_r0x00404cca:
  uStack_1c = uVar34;
  cVar7 = (char)pbVar26 + '\x04';
  puVar20 = (uint *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar7);
  if (SCARRY1((char)pbVar26,'\x04') == cVar7 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
  puVar40 = puVar28 + 1;
  out(*puVar28,(short)puVar36);
  uVar39 = *puVar22;
  uVar2 = *puVar36;
  bVar4 = (byte)puVar22;
  *(byte *)puVar36 = (byte)*puVar36 + bVar4;
  iVar15 = (CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 + '\x03') & uVar39) + iRam00008c38;
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar36;
  pcVar19 = (char *)(iVar15 + (uint)CARRY1((byte)uVar2,bVar4) + 0x1246f);
  uVar24 = (undefined3)((uint)puVar22 >> 8);
  bVar4 = bVar4 | (byte)*puVar36;
  puVar27 = (uint *)CONCAT31(uVar24,bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar19 >> 8);
  puVar20 = (uint *)(CONCAT31((int3)((uint)pcVar19 >> 8),(char)pcVar19 + *pcVar19) + 0x1fbeef2);
  uVar39 = *puVar20;
  *puVar20 = (uint)(*puVar20 + (int)puVar20);
  if (CARRY4(uVar39,(uint)puVar20)) {
    *puVar20 = (uint)(*puVar20 + (int)puVar20);
    pcVar19 = (char *)CONCAT31(uVar24,bVar4 | bRam00282809);
    cVar7 = (char)((uint)puVar22 >> 8);
    *(byte *)puVar14 = (byte)*puVar14 + cVar7;
    *pcVar19 = *pcVar19 - cVar7;
    *(byte *)puVar20 = *(byte *)puVar20 + (char)puVar20;
    iVar15 = (int)pcVar19 - *puVar14;
    puVar28 = puVar28 + 2;
    out(*puVar40,(short)puVar36);
    *puVar20 = (uint)(*puVar20 + (int)puVar20);
    puVar27 = (uint *)CONCAT22((short)((uint)iVar15 >> 0x10),
                               CONCAT11((byte)((uint)iVar15 >> 8) | bRambf73070b,(char)iVar15));
code_r0x00404d15:
    uVar39 = *puVar20;
    bVar4 = (byte)puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + bVar4;
    puVar40 = puVar28 + 1;
    out(*puVar28,(short)puVar36);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar31 = bVar4 + in_AF * '\x06';
    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),
                               bVar31 + (0x90 < (bVar31 & 0xf0) |
                                        CARRY1((byte)uVar39,bVar4) | in_AF * (0xf9 < bVar31)) * '`')
    ;
  }
  *puVar20 = (uint)(*puVar20 + (int)puVar20);
  bVar4 = (byte)puVar20 | (byte)*puVar47;
  puVar28 = puVar40 + 1;
  uVar33 = SUB42(puVar36,0);
  out(*puVar40,uVar33);
  *(byte *)puVar27 = (byte)*puVar27 - bVar4;
  uVar39 = *puVar36;
  bVar31 = (byte)puVar27;
  *(byte *)puVar36 = (byte)*puVar36 + bVar31;
  iVar15 = CONCAT31((int3)((uint)puVar20 >> 8),bVar4) + *puVar28 + (uint)CARRY1((byte)uVar39,bVar31)
  ;
  pcVar19 = (char *)((int)puVar44 - *puVar36);
  uVar24 = (undefined3)((uint)iVar15 >> 8);
  cVar7 = (char)iVar15 + (byte)*puVar28 + (puVar44 < (undefined4 *)*puVar36);
  puVar22 = (uint *)CONCAT31(uVar24,cVar7);
  bVar4 = (byte)((uint)puVar27 >> 8);
  *(byte *)puVar27 = (byte)*puVar27 - bVar4;
  *puVar22 = (uint)(*puVar22 + (int)puVar22);
  bVar31 = bVar31 | *(byte *)((int)puVar36 + (int)puVar22);
  uVar34 = (undefined2)((uint)puVar27 >> 0x10);
  if ((POPCOUNT(bVar31) & 1U) == 0) {
    *(byte *)puVar22 = (byte)*puVar22 + cVar7;
    pcVar21 = (char *)CONCAT31(uVar24,cVar7 + '\x12');
    *pcVar21 = *pcVar21 + bVar4;
    puVar22 = (uint *)CONCAT31(uVar24,(cVar7 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar27 >> 8),bVar31));
    uVar39 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + bVar31;
    if (!CARRY1((byte)uVar39,bVar31)) {
      pbVar26 = (byte *)((uint)puVar22 | *puVar22);
      out(*puVar28,uVar33);
      *pbVar26 = *pbVar26 + (char)pbVar26;
      bVar5 = *pbVar26;
      piVar18 = (int *)CONCAT22(uVar34,CONCAT11(bVar4 | bVar5,bVar31));
      iVar15 = (int)pbVar26 - *piVar18;
      *(byte *)puVar36 = (byte)*puVar36 + bVar31;
      puVar22 = puVar40 + 3;
      out(puVar40[2],uVar33);
      uRam12060000 = (undefined1)iVar15;
      *(char *)((int)piVar18 + iVar15) = *(char *)((int)piVar18 + iVar15) - (bVar4 | bVar5);
      *(byte *)puVar36 = (byte)*puVar36 + bVar31;
      pbVar26 = (byte *)(iVar15 + -0x120edecd);
      *(byte *)puVar22 = (byte)*puVar22 + 1;
      bVar4 = *pbVar26;
      bVar5 = (byte)pbVar26;
      *pbVar26 = *pbVar26 + bVar5;
      pcVar19 = pcVar19 + ((-1 - *(int *)((int)puVar47 + 0x42)) - (uint)CARRY1(bVar4,bVar5));
      *pbVar26 = *pbVar26 + bVar5;
      bVar4 = (byte)puVar14 | (byte)((uint)pbVar26 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar26;
      uVar39 = *puVar36;
      pcVar21 = (char *)(((uint)pbVar26 | 0x11) + 0x511072c);
      puVar28 = puVar40 + 4;
      out(*puVar22,uVar33);
      puVar36 = (uint *)((int)puVar36 + 1);
      *pcVar21 = *pcVar21 + (char)pcVar21;
      bVar5 = (byte)((uint)pcVar21 >> 8);
      puVar14 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar14 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar14 >> 8) | (byte)uVar39,
                                                          bVar4)) >> 8),bVar4 | bVar5);
      uVar24 = (undefined3)((uint)pcVar21 >> 8);
      bVar4 = (char)pcVar21 - *pcVar21;
      pcVar21 = (char *)CONCAT31(uVar24,bVar4);
      *pcVar21 = *pcVar21 + bVar4;
      *(int *)((int)pcVar21 * 2) = (int)(*(int *)((int)pcVar21 * 2) + (int)puVar14);
      *(byte *)puVar36 = *(byte *)puVar36 + bVar4;
      *pcVar19 = *pcVar19 + bVar5;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar39 = CONCAT31(uVar24,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar39;
      pbVar26 = (byte *)CONCAT22((short)(uVar39 >> 0x10),CONCAT11(bVar5 + in_AF,bVar4));
      *(byte *)puVar28 = (byte)*puVar28 + bVar31;
      *pbVar26 = *pbVar26 + bVar4;
      *pbVar26 = *pbVar26 + bVar4;
      bVar48 = CARRY1(bVar4,*pbVar26);
      puVar22 = (uint *)CONCAT31((int3)((uint)pbVar26 >> 8),bVar4 + *pbVar26);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar14 = (byte)*puVar14 - (char)puVar36;
  }
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
  bVar48 = false;
  piVar18 = (int *)CONCAT22(uVar34,CONCAT11(bVar4 | (byte)*puVar36,bVar31));
code_r0x00404d9a:
  do {
    puVar40 = puVar36;
    *puVar22 = (*puVar22 - (int)puVar22) - (uint)bVar48;
    bVar4 = (byte)((uint)piVar18 >> 8);
    uVar34 = (undefined2)((uint)piVar18 >> 0x10);
    bVar31 = (byte)piVar18;
    bVar5 = bVar4 + (byte)iRam00000c00;
    pbVar26 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *(byte *)puVar40 = (byte)*puVar40 + bVar31;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 - (byte)*puVar28);
    bVar4 = *pbVar26;
    puVar22 = (uint *)(pbVar26 + (uint)CARRY1(bVar5,*pbVar26) + *(int *)pbVar26);
    *(byte *)puVar40 = (byte)*puVar40 + bVar31;
    cVar6 = ((bVar5 + bVar4) - (byte)*puVar40) + (byte)*puVar22;
    pcVar21 = (char *)CONCAT22(uVar34,CONCAT11(cVar6,bVar31));
    puVar36 = puVar47 + 1;
    uVar39 = in((short)puVar40);
    *puVar47 = uVar39;
    cVar7 = (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + cVar7;
    uVar24 = (undefined3)((uint)puVar40 >> 8);
    bVar5 = (byte)puVar40 | (byte)*puVar28;
    pcVar29 = (char *)CONCAT31(uVar24,bVar5);
    *pcVar21 = *pcVar21 + '\x01';
    bVar4 = (cVar6 - *pcVar29) + (byte)*puVar22;
    pcVar21 = (char *)CONCAT22(uVar34,CONCAT11(bVar4,bVar31));
    puVar47 = puVar47 + 2;
    uVar39 = in((short)pcVar29);
    *puVar36 = uVar39;
    *(byte *)puVar22 = (byte)*puVar22 + cVar7;
    bVar5 = bVar5 | (byte)*puVar28;
    puVar36 = (uint *)CONCAT31(uVar24,bVar5);
    *pcVar21 = *pcVar21 + '\x01';
    bVar48 = bVar31 < *(byte *)((int)puVar36 + 2);
    cVar6 = bVar31 - *(byte *)((int)puVar36 + 2);
    piVar18 = (int *)CONCAT31((int3)((uint)pcVar21 >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  *(byte *)puVar22 = (byte)*puVar22 + cVar7;
  bVar31 = cVar7 + 0x7b;
  pbVar26 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),bVar31);
  *(byte *)((int)puVar14 + (int)pbVar26) = *(byte *)((int)puVar14 + (int)pbVar26) + bVar31;
  puVar22 = puVar28 + 1;
  uVar33 = SUB42(puVar36,0);
  out(*puVar28,uVar33);
  pbVar16 = (byte *)((int)puVar14 + -1);
  *pbVar26 = *pbVar26 + bVar31;
  bVar4 = bVar4 | (byte)*puVar36;
  piVar18 = (int *)CONCAT22(uVar34,CONCAT11(bVar4,cVar6));
  *pbVar26 = *pbVar26 + bVar31;
  *pbVar16 = *pbVar16 + bVar5;
  *pbVar16 = *pbVar16 ^ bVar31;
  *(byte *)puVar36 = (byte)*puVar36 + bVar4;
  *pbVar26 = *pbVar26 + bVar31;
  do {
    bVar32 = (byte)((uint)piVar18 >> 8);
    *(byte *)puVar47 = (byte)*puVar47 + bVar32;
    bVar4 = *pbVar26;
    bVar31 = (byte)pbVar26;
    *pbVar26 = *pbVar26 + bVar31;
    *(byte **)((int)puVar14 + 0x17) =
         (byte *)((int)puVar22 + (uint)CARRY1(bVar4,bVar31) + *(int *)((int)puVar14 + 0x17));
    *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
    uVar25 = (undefined3)((uint)pbVar26 >> 8);
    bVar31 = bVar31 | (byte)*puVar22;
    puVar47 = (uint *)((int)puVar47 + *(int *)(pcVar19 + -0x34));
    *(char *)CONCAT31(uVar25,bVar31) = *(char *)CONCAT31(uVar25,bVar31) + bVar31;
    bVar4 = bVar31 + 2;
    cVar7 = (char)((uint)puVar40 >> 8);
    bVar9 = (byte)piVar18;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar26 = (byte *)CONCAT31(uVar25,bVar31 + 0x15 + (0xfd < bVar31));
      if (0xec < bVar4 || CARRY1(bVar31 + 0x15,0xfd < bVar31)) {
        *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
      }
code_r0x00404e60:
      pcVar19 = pcVar19 + -*puVar36;
      bVar4 = *pbVar26;
      *pbVar26 = *pbVar26 + (byte)pbVar26;
      pbVar17 = (byte *)((int)puVar22 + (-(uint)CARRY1(bVar4,(byte)pbVar26) - *(int *)pbVar26));
      pbVar26 = pbVar26 + *(int *)pbVar26;
      puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_DS);
      *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
      *(char *)piVar18 = (char)*piVar18 + cVar7;
      bVar4 = *pbVar26;
      *pbVar26 = *pbVar26 + (byte)pbVar26;
      *(byte **)(pbVar16 + (int)puVar36) =
           (byte *)((int)puVar36 +
                   (uint)CARRY1(bVar4,(byte)pbVar26) + *(int *)(pbVar16 + (int)puVar36));
      pbVar26 = pbVar26 + 0x73061314;
      *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
      uVar25 = (undefined3)((uint)piVar18 >> 8);
      bVar9 = bVar9 | (byte)*puVar36;
      pcVar29 = (char *)CONCAT31(uVar25,bVar9);
      *pbVar26 = *pbVar26 + (char)pbVar26;
      cVar7 = (char)pbVar26 + 'o';
      pcVar21 = (char *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar7);
      *pcVar21 = *pcVar21 + cVar7;
      out(*(undefined4 *)pbVar17,uVar33);
      uVar39 = *puVar36;
      *(byte *)puVar36 = (byte)*puVar36 + bVar9;
      pcVar21 = pcVar21 + (uint)CARRY1((byte)uVar39,bVar9) + *puVar47;
      *pcVar21 = *pcVar21 + (char)pcVar21;
      *pcVar29 = *pcVar29 + bVar5;
      puVar40 = (uint *)(pbVar17 + 8);
      out(*(undefined4 *)(pbVar17 + 4),uVar33);
      *(byte *)puVar36 = (byte)*puVar36 + bVar9;
      piVar18 = (int *)((uint)pcVar21 | *puVar47);
      pcVar29[0x390a0000] = pcVar29[0x390a0000] - bVar32;
      pbVar16 = (byte *)0x7000000;
      *(byte *)puVar47 = (byte)*puVar47 - bVar32;
      *piVar18 = *piVar18 + (int)piVar18;
      puVar28 = (uint *)CONCAT31(uVar25,bVar9 | *(byte *)((int)piVar18 + (int)pcVar29));
      *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) - bVar32;
      cRam07000000 = cRam07000000 + bVar32;
      piVar18 = (int *)((uint)piVar18 | 0x777b02);
      pbVar26 = (byte *)((int)puVar47 + (int)pcVar19 * 2);
      bVar48 = SCARRY1(*pbVar26,(char)piVar18);
      *pbVar26 = *pbVar26 + (char)piVar18;
      bVar4 = *pbVar26;
      *(char *)piVar18 = (char)*piVar18;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar25,bVar4) = *(char *)CONCAT31(uVar25,bVar4) + bVar4;
    bVar31 = bVar31 + 0x71;
    pbVar26 = (byte *)CONCAT31(uVar25,bVar31);
    *pbVar26 = *pbVar26;
    *(byte *)puVar22 = (byte)*puVar22 + 1;
    *piVar18 = (*piVar18 - (int)pbVar26) - (uint)(0x90 < bVar4);
    uVar39 = *puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + bVar31;
    if (!CARRY1((byte)uVar39,bVar31)) goto code_r0x00404e60;
    *pbVar26 = *pbVar26 + bVar31;
    uVar34 = (undefined2)((uint)piVar18 >> 0x10);
    bVar32 = bVar32 | *pbVar26;
    pbVar26 = pbVar26 + -*(int *)pbVar26;
    *pbVar16 = *pbVar16 + bVar32;
    cVar6 = bVar9 - *(byte *)((int)puVar36 + 2);
    piVar18 = (int *)CONCAT31((int3)(CONCAT22(uVar34,CONCAT11(bVar32,bVar9)) >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  cVar8 = (char)pbVar26;
  *pbVar26 = *pbVar26 + cVar8;
  uVar25 = (undefined3)((uint)pbVar26 >> 8);
  pcVar21 = (char *)CONCAT31(uVar25,cVar8 + '{');
  out(*puVar22,uVar33);
  *pcVar21 = *pcVar21 + cVar8 + '{';
  bVar31 = cVar8 + 0x7e;
  pbVar26 = (byte *)CONCAT31(uVar25,bVar31);
  puVar40 = puVar28 + 3;
  out(puVar28[2],uVar33);
  pbVar16 = (byte *)((int)puVar14 + -2);
  *pbVar26 = *pbVar26 + bVar31;
  bVar32 = bVar32 | (byte)*puVar36;
  puVar28 = (uint *)CONCAT22(uVar34,CONCAT11(bVar32,cVar6));
  *pbVar26 = *pbVar26 + bVar31;
  *pbVar16 = *pbVar16 + bVar5;
  *pbVar16 = *pbVar16 ^ bVar31;
  *(byte *)puVar36 = (byte)*puVar36 + bVar32;
  *pbVar26 = *pbVar26 + bVar31;
  *pbVar26 = *pbVar26 + cVar7;
  bVar4 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar31;
  puVar14[6] = (uint)((int)puVar40 + (uint)CARRY1(bVar4,bVar31) + puVar14[6]);
  *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
  bVar31 = bVar31 | (byte)*puVar40;
  puVar47 = (uint *)((int)puVar47 + *(int *)(pcVar19 + -0x33));
  *(char *)CONCAT31(uVar25,bVar31) = *(char *)CONCAT31(uVar25,bVar31) + bVar31;
  bVar48 = SCARRY1(bVar31,'\x02');
  bVar4 = bVar31 + 2;
  piVar18 = (int *)CONCAT31(uVar25,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar4;
    return CONCAT31(uVar25,bVar31 + 0x71);
  }
code_r0x00404ebf:
  bVar31 = (byte)piVar18;
  uVar25 = (undefined3)((uint)piVar18 >> 8);
  if (bVar4 != 0 && bVar48 == (char)bVar4 < '\0') {
    *(byte *)piVar18 = (char)*piVar18 + bVar31;
    puVar40[(int)puVar47 * 2] =
         (uint)((int)puVar36 + (uint)(0xd2 < bVar31) + puVar40[(int)puVar47 * 2]);
    return CONCAT31(uVar25,bVar31 + 0x2d);
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar4 = *pbVar16;
  *puVar40 = (uint)(*puVar40 + (int)piVar18);
  bVar9 = (byte)((uint)puVar28 >> 8);
  *(byte *)piVar18 = (char)*piVar18 - bVar9;
  *(byte *)piVar18 = (char)*piVar18 + bVar31;
  pbVar26 = (byte *)(CONCAT31(uVar24,bVar5 | bVar4) - *(int *)pbVar16);
  puVar36 = (uint *)CONCAT31(uVar25,bVar31 + 6);
  *(uint *)(pbVar16 + (int)puVar40 * 2) =
       (int)puVar36 + (uint)(0xf9 < bVar31) + *(int *)(pbVar16 + (int)puVar40 * 2);
  *(byte *)puVar28 = (byte)*puVar28 ^ bVar31 + 6;
  bVar31 = (byte)puVar28;
  *pbVar26 = *pbVar26 + bVar31;
  puVar14 = puVar40 + 1;
  uVar34 = SUB42(pbVar26,0);
  out(*puVar40,uVar34);
  *puVar28 = *puVar28 ^ (uint)puVar36;
  *pbVar26 = *pbVar26 + bVar31;
  puVar22 = (uint *)(pbVar16 + -*(int *)pbVar16);
  *(uint *)((int)puVar47 + 0x31) = *(uint *)((int)puVar47 + 0x31) | (uint)pcVar19;
  *puVar36 = *puVar36 + (int)puVar36;
  puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar9 | (byte)*puVar22,bVar31))
  ;
  *(byte **)(pbVar26 + 0x6e) = (byte *)(*(int *)(pbVar26 + 0x6e) + (int)puVar14);
  piVar18 = (int *)((uint)puVar36 | *puVar36);
  bVar5 = (byte)puVar22;
  *(byte *)puVar47 = (byte)*puVar47 - bVar5;
  bVar4 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar31;
  if (CARRY1(bVar4,bVar31)) {
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar4 = pbVar26[0x11];
    uVar33 = (undefined2)((uint)puVar22 >> 0x10);
    out(*puVar14,uVar34);
    puVar28 = (uint *)((int)puVar28 + 1);
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    bVar35 = (byte)((uint)puVar22 >> 8) | bVar4 | *pbVar26;
    pcVar21 = (char *)((int)piVar18 + -0x21000001);
    bVar4 = (byte)pcVar21 | 0x11;
    uVar24 = (undefined3)((uint)pcVar21 >> 8);
    cVar7 = bVar4 - 7;
    pcVar29 = (char *)CONCAT31(uVar24,cVar7);
    *puVar47 = (uint)(pcVar29 + (uint)(bVar4 < 7) + *puVar47);
    puVar14 = puVar40 + 3;
    out(puVar40[2],uVar34);
    pbVar26 = pbVar26 + 1;
    *pcVar29 = *pcVar29 + cVar7;
    bVar9 = (byte)((uint)pcVar21 >> 8);
    bVar32 = bVar5 | bVar9;
    bVar31 = cVar7 - *pcVar29;
    bVar4 = *(byte *)puVar28;
    *(byte *)puVar28 = *(byte *)puVar28 + bVar31;
    *(char *)CONCAT31(uVar24,bVar31) =
         *(char *)CONCAT31(uVar24,bVar31) + bVar31 + CARRY1(bVar4,bVar31);
    *pbVar26 = *pbVar26 + bVar31;
    *(byte *)puVar14 = (byte)*puVar14 + bVar32;
    bVar4 = (byte)((uint)pbVar26 >> 8);
    *(byte *)puVar28 = *(byte *)puVar28 + bVar31 + CARRY1((byte)pbVar26,bVar4);
    piVar18 = (int *)CONCAT31(uVar24,bVar31);
    *(byte *)piVar18 = (char)*piVar18 + bVar31;
    pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                               CONCAT11(bVar4 + bVar9,(byte)pbVar26 + bVar4));
    puVar22 = (uint *)CONCAT22(uVar33,CONCAT11(bVar35 + *(char *)(CONCAT31((int3)(CONCAT22(uVar33,
                                                  CONCAT11(bVar35,bVar5)) >> 8),bVar32) + 0x76),
                                               bVar32));
    uStack_1c = puStack_28._0_2_;
code_r0x00404fa4:
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    pcVar21 = (char *)(CONCAT31((int3)((uint)piVar18 >> 8),(char)piVar18 + '(') ^ *puVar28);
    cVar8 = (char)puVar28;
    *pbVar26 = *pbVar26 + cVar8;
    uVar34 = (undefined2)((uint)puVar22 >> 0x10);
    cVar38 = (char)puVar22;
    cVar41 = (char)((uint)puVar22 >> 8) + *(byte *)((int)puVar22 + 0x75);
    *pcVar21 = *pcVar21 + (char)pcVar21;
    cVar7 = (char)pcVar21 + 'o';
    pcVar21 = (char *)CONCAT31((int3)((uint)pcVar21 >> 8),cVar7);
    *pcVar21 = *pcVar21 + cVar7;
    cVar42 = (char)((uint)puVar28 >> 8);
    *pcVar19 = *pcVar19 - cVar42;
    pbVar26[1] = pbVar26[1] + cVar8;
    pcVar21 = pcVar21 + -0x757b021b;
    cVar7 = (char)pcVar21;
    *pcVar21 = *pcVar21 + cVar7;
    uVar24 = (undefined3)((uint)pcVar21 >> 8);
    cVar6 = cVar7 + 'o';
    pcVar21 = (char *)CONCAT31(uVar24,cVar6);
    pbVar17 = pbVar26 + 2;
    *pcVar21 = *pcVar21 + cVar6;
    iVar15 = CONCAT22(uVar34,CONCAT11(cVar41 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar41,cVar38)) +
                                                        0x76),cVar38));
    *pcVar21 = *pcVar21 + cVar6;
    pcVar21 = (char *)CONCAT31(uVar24,cVar7 + -0x22);
    puVar36 = (uint *)((int)puVar47 + 1);
    *(byte *)puVar47 = (byte)*puVar14;
    *pcVar21 = *pcVar21 + cVar7 + -0x22;
    *(byte *)((int)puVar28 + (int)pcVar21) =
         *(byte *)((int)puVar28 + (int)pcVar21) - (char)((uint)pbVar17 >> 8);
    *pbVar17 = *pbVar17 + cVar8;
    bVar31 = cVar42 - pbVar26[4];
    pbVar16 = (byte *)((int)puVar14 + 5);
    out(*(undefined4 *)((int)puVar14 + 1),(short)pbVar17);
    puVar14 = (uint *)((uint)(pcVar21 + *(int *)(pcVar21 + iVar15)) ^ 0x280a0001);
    *(byte *)puVar14 = (byte)*puVar14 << 1 | (char)(byte)*puVar14 < '\0';
    *pbVar16 = *pbVar16 + (char)puVar14;
    pbVar16 = pbVar16 + *(int *)(pbVar26 + -0x5c);
    pbVar26 = (byte *)((uint)puVar14 | *puVar14);
    *pbVar16 = *pbVar16 + (char)pbVar26;
    puVar22 = (uint *)CONCAT31((int3)((uint)iVar15 >> 8),cVar38 - (char)pbVar17);
    bVar4 = *pbVar26;
    puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar31 + *pbVar26,cVar8));
    iVar15 = *(int *)pbVar26;
    *pbVar17 = *pbVar17 + cVar8;
    cVar7 = (char)(pbVar26 + (uint)CARRY1(bVar31,bVar4) + iVar15) + 'r';
    puVar47 = (uint *)CONCAT31((int3)((uint)(pbVar26 + (uint)CARRY1(bVar31,bVar4) + iVar15) >> 8),
                               cVar7);
    pbVar26 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),CONCAT11(10,(char)pbVar17));
    *(char *)(puVar47 + 10) = (char)puVar47[10] + '\n';
    *pbVar16 = *pbVar16 + cVar7;
    puVar14 = (uint *)(pbVar16 + *(int *)(pbVar26 + -0x5e));
    uVar39 = *puVar47;
    cVar7 = (char)((uint)puVar47 | uVar39);
    *(byte *)puVar14 = (byte)*puVar14 + cVar7;
    uVar24 = (undefined3)(((uint)puVar47 | uVar39) >> 8);
    cVar6 = cVar7 + (byte)*puVar22;
    puVar47 = (uint *)CONCAT31(uVar24,cVar6);
    if (SCARRY1(cVar7,(byte)*puVar22) == cVar6 < '\0') goto code_r0x00405090;
    *(byte *)puVar47 = (byte)*puVar47 + cVar6;
    piVar18 = (int *)CONCAT31(uVar24,cVar6 + '\x02');
    puVar47 = puVar36;
  }
  else {
    out(2,(char)piVar18);
    if ((POPCOUNT(*pbVar26) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar24 = (undefined3)((uint)piVar18 >> 8);
  cVar7 = (char)piVar18 + '}';
  pbVar16 = (byte *)CONCAT31(uVar24,cVar7);
  pbVar26[(int)pbVar16] = pbVar26[(int)pbVar16] + cVar7;
  pbVar26[0x280a0000] = pbVar26[0x280a0000] - (char)((uint)piVar18 >> 8);
  bVar4 = (byte)puVar28 & 7;
  *pbVar16 = *pbVar16 << bVar4 | *pbVar16 >> 8 - bVar4;
  *(byte *)puVar14 = (byte)*puVar14 + cVar7;
  cVar8 = (char)puVar22 - (byte)*puVar14;
  uVar34 = (undefined2)((uint)puVar22 >> 0x10);
  cVar42 = (char)((uint)puVar22 >> 8) + *(char *)(CONCAT31((int3)((uint)puVar22 >> 8),cVar8) + 0x7c)
  ;
  pcVar21 = (char *)CONCAT22(uVar34,CONCAT11(cVar42,cVar8));
  *pbVar16 = *pbVar16 + cVar7;
  bVar31 = (char)piVar18 + 0xa7U & *pbVar26;
  puVar36 = (uint *)((int)puVar47 + *(int *)(pcVar19 + 0x7c));
  *(char *)CONCAT31(uVar24,bVar31) = *(char *)CONCAT31(uVar24,bVar31) + bVar31;
  bVar31 = bVar31 + 0x2a;
  pbVar16 = (byte *)CONCAT31(uVar24,bVar31);
  *pbVar16 = *pbVar16 + bVar31;
  *pcVar21 = *pcVar21 + cVar8;
  *pbVar26 = *pbVar26 ^ bVar31;
  *pcVar21 = *pcVar21 + bVar31;
  bVar4 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar31;
  cVar7 = (bVar31 - *pbVar16) - CARRY1(bVar4,bVar31);
  *(byte *)puVar28 = (byte)*puVar28 + (byte)pbVar26;
  cVar42 = cVar42 + pcVar21[0x7b];
  *(char *)CONCAT31(uVar24,cVar7) = *(char *)CONCAT31(uVar24,cVar7) + cVar7;
  pcVar21 = (char *)CONCAT31(uVar24,cVar7 + 'o');
  *pcVar21 = *pcVar21 + cVar7 + 'o';
  pcVar21 = pcVar21 + 0x2ed7fde6;
  cVar6 = (char)pcVar21;
  *pcVar21 = *pcVar21 + cVar6;
  cVar7 = *(char *)(CONCAT22(uVar34,CONCAT11(cVar42,cVar8)) + 0x7b);
  *pcVar21 = *pcVar21 + cVar6;
  piVar18 = (int *)(CONCAT31((int3)((uint)pcVar21 >> 8),cVar6 + 'o') + 0x6f060000);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar25 = (undefined3)((uint)pbVar26 >> 8);
  bVar31 = (byte)pbVar26 | (byte)*puVar14;
  pbVar17 = (byte *)CONCAT31(uVar25,bVar31);
  uVar39 = CONCAT22(uVar34,CONCAT11(cVar42 + cVar7,cVar8)) | (uint)puVar14;
  uVar24 = (undefined3)((uint)piVar18 >> 8);
  bVar4 = (byte)piVar18 | *pbVar17;
  pbVar16 = (byte *)CONCAT31(uVar24,bVar4);
  cVar7 = (byte)puVar28 - bVar31;
  puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),cVar7);
  *pbVar16 = *pbVar16 + bVar4;
  puVar47 = puVar14 + 1;
  out(*puVar14,(short)pbVar17);
  *pbVar16 = bVar4;
  *pbVar17 = *pbVar17 + cVar7;
  puVar14 = puVar14 + 2;
  out(*puVar47,(short)pbVar17);
  *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
  puVar22 = (uint *)(CONCAT31((int3)(uVar39 >> 8),(char)uVar39 - (char)((uint)pbVar26 >> 8)) |
                    (uint)puVar14);
  pbVar26 = (byte *)CONCAT31(uVar25,(bVar31 | (byte)*puVar14) + (byte)*puVar36);
  cVar7 = bVar4 - (byte)*puVar36;
  puVar47 = (uint *)CONCAT31(uVar24,cVar7 - *(char *)CONCAT31(uVar24,cVar7));
code_r0x00405090:
  *puVar47 = (uint)(pbVar26 + *puVar47);
  cVar7 = (char)puVar47;
  *(byte *)puVar47 = (byte)*puVar47 + cVar7;
  *(byte *)puVar47 = (byte)*puVar47 + cVar7;
  *(byte *)puVar47 = (byte)*puVar47 + cVar7;
  *puVar28 = *puVar28 - (int)pcVar19;
  uVar39 = *puVar14;
  bVar4 = (byte)pbVar26;
  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
  *(byte *)puVar47 = (byte)*puVar47 + cVar7 + CARRY1((byte)uVar39,bVar4);
  *(byte *)puVar28 = (byte)*puVar28 + cVar7;
  uVar39 = *puVar22;
  *(byte *)puVar22 = (byte)*puVar22 + 0x72;
  *(byte *)puVar22 = (byte)*puVar22;
  cVar7 = (char)((uint)pbVar26 >> 8);
  if (SCARRY1((byte)uVar39,'r')) {
    puVar14 = (uint *)((int)puVar14 + *(int *)(pbVar26 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar14 = (byte)*puVar14 + (char)puVar47;
      uVar24 = (undefined3)((uint)puVar47 >> 8);
      cVar6 = (char)puVar47 + (byte)*puVar22;
      pcVar21 = (char *)CONCAT31(uVar24,cVar6);
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                 CONCAT11((char)((uint)puVar22 >> 8) +
                                          *(byte *)((int)puVar22 + 0x7b),(char)puVar22));
      *pcVar21 = *pcVar21 + cVar6;
      in_AF = 9 < (cVar6 + 0x6fU & 0xf) | in_AF;
      uVar39 = CONCAT31(uVar24,cVar6 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar39;
      piVar18 = (int *)CONCAT22((short)(uVar39 >> 0x10),
                                CONCAT11((char)((uint)puVar47 >> 8) + in_AF,bVar5));
      *piVar18 = *piVar18 + (int)piVar18;
      uVar24 = (undefined3)((uint)piVar18 >> 8);
      bVar5 = bVar5 | *(byte *)(piVar18 + 0x354a);
      bVar5 = bVar5 - *(char *)CONCAT31(uVar24,bVar5);
      pbVar16 = (byte *)CONCAT31(uVar24,bVar5);
      bVar31 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar5;
      puVar14 = (uint *)((int)puVar14 + (-(uint)CARRY1(bVar31,bVar5) - *(int *)pbVar16));
      puVar47 = (uint *)(pbVar16 + 0xfc00);
      *pbVar26 = *pbVar26 + cVar7;
      uVar39 = *puVar47;
      bVar31 = (byte)puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + bVar31;
      uVar12 = (uint)CARRY1((byte)uVar39,bVar31);
      uVar39 = *puVar22;
      uVar2 = *puVar22;
      *puVar22 = (uint)((byte *)(uVar2 + (int)puVar47) + uVar12);
      if (!CARRY4(uVar39,(uint)puVar47) && !CARRY4(uVar2 + (int)puVar47,uVar12)) break;
      *(byte *)puVar47 = (byte)*puVar47 + bVar31;
    }
  }
  uVar39 = (uint)puVar47 | *puVar47;
  uVar34 = SUB42(pbVar26,0);
  *(byte *)puVar14 = (byte)*puVar14 + (char)uVar39;
  piVar18 = (int *)(uVar39 + 0xc1872);
  if (SCARRY4(uVar39,0xc1872)) {
    cVar6 = (char)piVar18;
    *(char *)piVar18 = *(char *)piVar18 + cVar6;
    *pbVar26 = *pbVar26 + cVar6;
    *(char *)piVar18 = *(char *)piVar18 + cVar6;
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar28;
    *(char *)piVar18 = *(char *)piVar18 + cVar6;
    *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) + bVar4;
    puVar47 = puVar14;
    goto code_r0x00405117;
  }
  do {
    uVar39 = *puVar14;
    bVar4 = (byte)piVar18;
    *(byte *)puVar14 = (byte)*puVar14 + bVar4;
    if (CARRY1((byte)uVar39,bVar4)) {
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      uVar24 = (undefined3)((uint)puVar28 >> 8);
      bVar31 = (byte)puVar28 | bRam396f1609;
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      puVar28 = (uint *)CONCAT31(uVar24,bVar31 | *(byte *)CONCAT31(uVar24,bVar31));
      uVar24 = (undefined3)((uint)piVar18 >> 8);
      bVar4 = bVar4 | *pbVar26;
      pcVar21 = (char *)CONCAT31(uVar24,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar47 = puVar14 + 1;
        out(*puVar14,uVar34);
        uVar39 = CONCAT22((short)((uint)piVar18 >> 0x10),(ushort)bVar4);
        *(byte *)puVar47 = (byte)*puVar47 + bVar4;
        pcVar21 = (char *)(uVar39 | 8);
        cVar6 = (char)((uint)puVar22 >> 8) + *(byte *)((int)puVar22 + 0x7a);
        puVar40 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(cVar6,(char)puVar22));
        *pcVar21 = *pcVar21 + (char)pcVar21;
        cVar7 = (char)pcVar21 + 'o';
        piVar18 = (int *)CONCAT31((int3)(uVar39 >> 8),cVar7);
        *(char *)piVar18 = (char)*piVar18 + cVar7;
        *(byte *)puVar28 = (byte)*puVar28 + 1;
        puVar14 = puVar14 + 2;
        out(*puVar47,uVar34);
        pbVar26 = (byte *)((uint)pbVar26 ^ uRam08122c04);
        iVar15 = CONCAT31((int3)((uint)(*piVar18 * 0x17070600) >> 8),2);
        *(char *)(iVar15 * 2) = *(char *)(iVar15 * 2) - cVar6;
        do {
          bVar4 = (byte)iVar15;
          *(byte *)puVar14 = (byte)*puVar14 + bVar4;
          bVar48 = CARRY1(bVar4,(byte)*puVar40);
          uVar24 = (undefined3)((uint)iVar15 >> 8);
          cVar7 = bVar4 + (byte)*puVar40;
          pbVar16 = (byte *)CONCAT31(uVar24,cVar7);
          uVar34 = in_DS;
          uVar33 = uStack_68;
          if (SCARRY1(bVar4,(byte)*puVar40) == cVar7 < '\0') goto GenerateStatusText;
          *pbVar16 = *pbVar16 + cVar7;
          uVar39 = CONCAT31(uVar24,cVar7 + '\'') + 0x1ebd9f3;
          uStack_6c = (undefined1)uStack_1c;
          uStack_6b = (undefined1)((ushort)uStack_1c >> 8);
          piVar18 = (int *)(uVar39 ^ 0x73060000);
          puVar28 = (uint *)((int)puVar28 + 1);
          *piVar18 = (int)(*piVar18 + (int)piVar18);
          puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                     CONCAT11((byte)((uint)puVar40 >> 8) | pcVar19[0x7e],
                                              (char)puVar40));
          cVar7 = (char)uVar39;
          *(char *)piVar18 = (char)*piVar18 + cVar7;
          uVar39 = CONCAT31((int3)((uint)piVar18 >> 8),cVar7 + '\x02');
          bVar48 = 0xd9f2d2da < uVar39;
          iVar15 = uVar39 + 0x260d2d25;
          pcVar21 = pcVar19;
          do {
            uVar24 = (undefined3)((uint)iVar15 >> 8);
            bVar31 = (char)iVar15 + -2 + bVar48;
            pbVar16 = (byte *)CONCAT31(uVar24,bVar31);
            bVar4 = *pbVar16;
            *pbVar16 = *pbVar16 + bVar31;
            bVar5 = (byte)puVar40;
            uStack_68 = uStack_1c;
            if (CARRY1(bVar4,bVar31)) {
              *pbVar16 = *pbVar16 + bVar31;
              puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                         CONCAT11((byte)((uint)puVar40 >> 8) | pcVar21[0x7f],bVar5))
              ;
              *pbVar16 = *pbVar16 + bVar31;
              pbVar16 = (byte *)CONCAT31(uVar24,bVar31 + 0x2a);
              *pbVar16 = *pbVar16 + bVar31 + 0x2a;
              *(byte *)puVar40 = (byte)*puVar40 + (char)pbVar26;
              uVar34 = in_DS;
              while( true ) {
                in_DS = uVar34;
                bVar31 = (byte)pbVar16;
                *pbVar26 = *pbVar26 ^ bVar31;
                *pbVar26 = *pbVar26 + (char)puVar40;
                *pbVar16 = *pbVar16 + bVar31;
                *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)pbVar26 >> 8);
                bVar4 = *pbVar16;
                *pbVar16 = *pbVar16 + bVar31;
                uVar2 = *puVar40;
                uVar39 = *puVar40;
                *puVar40 = (uint)(pbVar16 + uVar39 + CARRY1(bVar4,bVar31));
                uVar24 = (undefined3)((uint)pbVar16 >> 8);
                if (CARRY4(uVar2,(uint)pbVar16) ||
                    CARRY4((uint)(pbVar16 + uVar39),(uint)CARRY1(bVar4,bVar31))) break;
                *(byte *)puVar14 = (byte)*puVar14 + bVar31;
                pcVar29 = (char *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                           CONCAT11((char)((uint)puVar28 >> 8) + *pbVar16,
                                                    (char)puVar28));
                *(byte *)puVar14 = (byte)*puVar14 + bVar31;
                piVar18 = (int *)CONCAT31(uVar24,bVar31 | (byte)*puVar40);
                puVar28 = puVar14;
                while( true ) {
                  puVar14 = puVar28 + 1;
                  out(*puVar28,(short)pbVar26);
                  pbVar26 = pbVar26 + 1;
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  bVar5 = (byte)((uint)pcVar29 >> 8) | *pbVar26;
                  uVar24 = (undefined3)((uint)piVar18 >> 8);
                  bVar31 = (byte)piVar18 ^ *pbVar26;
                  pcVar23 = (char *)CONCAT31(uVar24,bVar31);
                  cRam282b0000 = cRam282b0000 - bVar5;
                  *pcVar23 = *pcVar23 + bVar31;
                  pcVar19 = pcVar21 + -*(int *)pbVar26;
                  uStack_6c = (undefined1)in_DS;
                  uStack_6b = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar36 + 0x17);
                  *pcVar23 = *pcVar23 + bVar31;
                  puVar28 = (uint *)CONCAT22((short)((uint)pcVar29 >> 0x10),
                                             CONCAT11(bVar5 + bVar4 | *pbVar26,(char)pcVar29));
                  *(byte *)puVar40 = (byte)*puVar40 + (char)puVar40;
                  *(byte *)((int)pcVar23 * 2) = *(byte *)((int)pcVar23 * 2) ^ bVar31;
                  in_AF = 9 < (bVar31 & 0xf) | in_AF;
                  bVar31 = bVar31 + in_AF * -6;
                  pbVar16 = (byte *)CONCAT31(uVar24,bVar31 + (0x9f < bVar31 | in_AF * (bVar31 < 6))
                                                             * -0x60);
                  *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
                  *(char *)((int)pbVar16 * 2) =
                       *(char *)((int)pbVar16 * 2) + (char)((uint)pbVar26 >> 8);
                  bVar48 = CARRY1((byte)*puVar28,(byte)pbVar26);
                  *(byte *)puVar28 = (byte)*puVar28 + (byte)pbVar26;
                  uVar34 = in_DS;
                  uVar33 = uStack_1c;
GenerateStatusText:
                  in_DS = uVar33;
                  pcVar21 = pcVar19;
                  uStack_68 = in_DS;
                  if (!bVar48) break;
                  *pbVar16 = *pbVar16 + (char)pbVar16;
                  iVar15 = CONCAT31((int3)((uint)puVar28 >> 8),(byte)puVar28 | *pbVar26);
                  uVar34 = (undefined2)((uint)puVar40 >> 0x10);
                  cVar8 = (char)((uint)puVar40 >> 8) + *(byte *)((int)puVar40 + 0x7d);
                  *pbVar16 = *pbVar16 + (char)pbVar16;
                  *(byte *)puVar36 = (byte)*puVar36 - (char)((uint)puVar28 >> 8);
                  iVar15 = iVar15 - *(int *)(iVar15 + 0xb0a0000);
                  cVar7 = *(char *)(CONCAT22(uVar34,CONCAT11(cVar8,(char)puVar40)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar14,(short)pbVar26);
                  pbVar26 = (byte *)CONCAT22(uStack_6a,CONCAT11(uStack_6b,uStack_6c));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar28 = puVar14 + 2;
                  out(puVar14[1],CONCAT11(uStack_6b,uStack_6c));
                  pcVar21 = pcVar19 + 1;
                  cVar6 = (char)iVar15;
                  pcVar29 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),
                                             CONCAT11((byte)((uint)iVar15 >> 8) |
                                                      *(byte *)((int)puVar36 + 0x46),cVar6));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_1c = CONCAT11(uStack_6b,uStack_6c);
                  uVar24 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar28,0xf0)) >> 8);
                  piVar18 = (int *)CONCAT31(uVar24,0x5f);
                  puVar36 = (uint *)((int)puVar36 + 1);
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  puVar40 = (uint *)CONCAT22(uVar34,CONCAT11(cVar8 + cVar7 | (byte)puVar14[-0x1e],
                                                             (char)puVar40));
                  *(char *)piVar18 = (char)*piVar18 + '_';
                  puVar14 = (uint *)CONCAT31(uVar24,0x8c);
                  puVar28[(int)puVar36 * 2] = (uint)(pbVar26 + puVar28[(int)puVar36 * 2]);
                  uVar39 = *puVar28;
                  *(byte *)puVar28 = (byte)*puVar28 + 0x8c;
                  if ((byte)uVar39 < 0x74) {
                    *pbVar26 = *pbVar26 + cVar6;
                    *(byte *)puVar40 = (byte)*puVar40 >> 1;
                    *(char *)puVar14 = (char)*puVar14 + -0x74;
                    *puVar14 = (uint)(pcVar21 + *puVar14);
                    *puVar14 = *puVar14 << 1 | (uint)((int)*puVar14 < 0);
                    *pbVar26 = *pbVar26 + cVar6;
                    pcVar19[2] = pcVar19[2] - cVar6;
                    *pbVar26 = *pbVar26 + cVar6;
                    pbVar16 = (byte *)CONCAT31(uVar24,0x83);
                    puVar14 = puVar40;
                    goto code_r0x00405312;
                  }
                  *puVar14 = (uint)(*puVar14 + (int)puVar14);
                  piVar18 = (int *)(CONCAT31(uVar24,(byte)puVar14[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar14[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar18 = (int *)((int)piVar18 + *puVar28);
                }
              }
              *pbVar26 = *pbVar26 + bVar31;
              *(byte *)puVar40 = (byte)*puVar40 - (char)pbVar26;
              *pbVar16 = *pbVar16 + bVar31;
              pbVar16 = (byte *)CONCAT31(uVar24,bVar31 | (byte)*puVar40);
            }
            else {
              cVar7 = (char)puVar28;
              *pbVar26 = *pbVar26 + cVar7;
              *(byte **)pbVar16 = pbVar26 + *(int *)pbVar16;
              *pbVar16 = *pbVar16 + bVar31;
              bVar31 = bVar31 + *pbVar16;
              pbVar16 = (byte *)CONCAT31(uVar24,bVar31);
              if (-1 < (char)bVar31) {
                *(byte *)puVar40 = (byte)*puVar40 + bVar5;
                out(*puVar14,(short)pbVar26);
                pbVar26 = pbVar26 + 1;
                *pbVar16 = *pbVar16 + bVar31;
                puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                           bVar5 | (byte)((uint)iVar15 >> 8));
                cVar6 = bVar31 - (byte)*puVar28;
                pcVar19 = (char *)CONCAT31(uVar24,cVar6);
                *pcVar19 = *pcVar19 + cVar6 + (bVar31 < (byte)*puVar28);
                *pbVar26 = *pbVar26 + cVar6;
                pcVar19 = (char *)((int)pcVar19 * 2 + 0x79);
                *pcVar19 = *pcVar19 + (char)((uint)pbVar26 >> 8);
                pbVar16 = (byte *)in((short)pbVar26);
                puVar14 = puVar14 + 1;
              }
              *(byte *)puVar14 = (byte)*puVar14 + cVar7;
              *pbVar16 = *pbVar16 + (char)pbVar16;
              *pbVar16 = *pbVar16 + (char)pbVar16;
              uStack_6c = (undefined1)in_DS;
              uStack_6b = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar16;
              bVar9 = (byte)((uint)puVar28 >> 8);
              bVar5 = bVar9 + *pbVar16;
              iVar15 = *(int *)pbVar16;
              *pbVar26 = *pbVar26 + cVar7;
              bVar31 = (char)(pbVar16 + (uint)CARRY1(bVar9,bVar4) + iVar15) - (byte)*puVar40;
              pbVar16 = (byte *)CONCAT31((int3)((uint)(pbVar16 + (uint)CARRY1(bVar9,bVar4) + iVar15)
                                               >> 8),bVar31);
              *(byte *)puVar40 = (byte)*puVar40 ^ bVar31;
              *pcVar21 = *pcVar21 + (char)puVar40;
              *pbVar16 = *pbVar16 + bVar31;
              *pbVar16 = *pbVar16 + bVar31;
              *pbVar16 = *pbVar16 + bVar31;
              puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                         CONCAT11(bVar5 + *pbVar16,cVar7));
              pbVar16 = pbVar16 + (uint)CARRY1(bVar5,*pbVar16) + *(int *)pbVar16;
              *pbVar26 = *pbVar26 + cVar7;
              puVar14 = (uint *)((int)puVar14 + *(int *)(pbVar26 + 0x3e));
            }
            *(byte *)puVar14 = (byte)*puVar14 + (char)pbVar16;
            cVar7 = (char)pbVar16 + 'r';
            puVar14 = (uint *)((int)puVar14 + -1);
            uVar39 = CONCAT31((int3)((uint)pbVar16 >> 8),cVar7);
            *(byte *)puVar14 = *(byte *)puVar14 + cVar7;
            bVar48 = 0xfff38f8d < uVar39;
            iVar15 = uVar39 + 0xc7072;
            pcVar19 = pcVar21;
          } while (SCARRY4(uVar39,0xc7072));
        } while( true );
      }
      *pcVar21 = *pcVar21 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar16 = (byte *)CONCAT31(uVar24,bVar4);
      bVar31 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar4;
      uVar24 = (undefined3)
               ((uint)(pbVar16 + (uint)CARRY1(bVar31,bVar4) + *(int *)((int)puVar28 + (int)pbVar26))
               >> 8);
      cVar6 = (char)(pbVar16 + (uint)CARRY1(bVar31,bVar4) + *(int *)((int)puVar28 + (int)pbVar26)) +
              'E';
      pcVar21 = (char *)CONCAT31(uVar24,cVar6);
      *pcVar21 = *pcVar21 + cVar6;
      cVar6 = cVar6 + *pcVar21;
      pcVar21 = (char *)CONCAT31(uVar24,cVar6);
      *pcVar21 = *pcVar21 + cVar6;
      puVar47 = (uint *)CONCAT31(uVar24,cVar6 + *pcVar21);
      *(char *)puVar47 = (char)*puVar47 + cVar6 + *pcVar21;
      pbVar16 = (byte *)((uint)puVar47 | *puVar47);
      bVar4 = *pbVar16;
      bVar31 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar31;
      piVar18 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar31 + CARRY1(bVar4,bVar31));
      puVar47 = puVar14;
code_r0x00405117:
      *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
      puVar22 = (uint *)((int)puVar22 - *puVar22);
      puVar14 = puVar47 + 1;
      out(*puVar47,uVar34);
    }
    *pbVar26 = *pbVar26 + (char)puVar28;
    bVar48 = puVar22 < (uint *)*piVar18;
    puVar22 = (uint *)((int)puVar22 - *piVar18);
    bVar4 = (byte)((uint)puVar28 >> 8);
    *(byte *)((int)puVar36 + 0x39) = (*(byte *)((int)puVar36 + 0x39) - bVar4) - bVar48;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    uVar39 = *puVar22;
    *(int *)((int)puVar36 + 0x39) = *(int *)((int)puVar36 + 0x39) - (int)pcVar19;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar39 | (byte)*puVar22,(char)puVar28));
    *(char *)(piVar18 + 10) = (char)piVar18[10] + cVar7;
  } while( true );
code_r0x004052ee:
  *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
  bVar4 = (char)piVar18 + 0x28;
  pbVar16 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),bVar4);
  *pbVar16 = *pbVar16 ^ bVar4;
  *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)pcVar29 >> 8);
  bVar4 = *pbVar26;
  *pbVar26 = *pbVar26 + (byte)pcVar29;
  piVar18 = (int *)(((uint)pbVar16 | 0x1496f09) + *puVar36 + (uint)CARRY1(bVar4,(byte)pcVar29));
  puVar47 = puVar28 + 1;
  out(*puVar28,(short)pbVar26);
  pbVar17 = pbVar26 + -1;
  *piVar18 = *piVar18 + (int)piVar18;
  pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | (byte)*puVar40);
  cVar7 = (char)piVar18 + '\x13';
  pbVar16 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),cVar7);
  puVar14 = puVar40;
  puVar28 = puVar47;
  if ((POPCOUNT(cVar7) & 1U) != 0) {
    *pbVar26 = *pbVar26 - (char)((uint)pbVar17 >> 8);
    *pbVar16 = *pbVar16 + cVar7;
code_r0x00405396:
    bVar4 = *pbVar16;
    bVar31 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar31;
    *puVar47 = (uint)(pbVar16 + (uint)CARRY1(bVar4,bVar31) + *puVar47);
    out(*puVar47,(short)pbVar26);
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    pcVar19 = (char *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11((byte)((uint)pbVar16 >> 8) | (byte)puVar47[1],bVar31));
    *(char **)((int)puVar36 + -1) = pcVar19 + *(int *)((int)puVar36 + -1);
    out(puVar47[1],(short)pbVar26);
    *pcVar19 = *pcVar19 + bVar31;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar16 = *pbVar16 + (char)pbVar16;
  piVar18 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + 'o');
  puVar40 = (uint *)((int)puVar14 + -1);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar24 = (undefined3)((uint)pbVar26 >> 8);
  piVar18 = (int *)((int)piVar18 + 0x1b7e);
  bVar5 = (byte)pbVar26 | *(byte *)puVar40 | *(byte *)puVar40;
  iRam04115f2c = iRam04115f2c + (int)piVar18;
  out(*puVar28,(short)CONCAT31(uVar24,bVar5));
  *piVar18 = *piVar18 + (int)piVar18;
  bVar5 = bVar5 | (byte)piVar18;
  iVar37 = CONCAT31(uVar24,bVar5);
  pbVar26 = (byte *)((int)piVar18 - *piVar18);
  cVar7 = (char)pbVar26;
  *pcVar29 = *pcVar29 + cVar7;
  cVar6 = (char)pcVar29 - bVar5;
  *pbVar26 = *pbVar26 + cVar7;
  uVar34 = (undefined2)((uint)pcVar29 >> 0x10);
  bVar31 = (byte)((uint)pcVar29 >> 8) | *pbVar26;
  pcVar21 = pcVar21 + -1;
  *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
  bVar4 = *(byte *)(CONCAT22(uVar34,CONCAT11(bVar31,cVar6)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar26;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar21;
  *pbVar26 = *pbVar26 + cVar7;
  bVar4 = bVar31 | bVar4 | *(byte *)puVar40;
  iVar30 = CONCAT22(uVar34,CONCAT11(bVar4,cVar6));
  pbVar17 = (byte *)((uint)(puVar28 + 1) ^ *(uint *)(iVar37 + -0x43));
  iVar15 = *(int *)pbVar26;
  *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
  if (SCARRY4(iVar15,(int)pbVar26)) {
    *pbVar26 = *pbVar26 + cVar7;
  }
  pbVar16 = pbVar26 + 0x5674;
  puVar36 = (uint *)((int)puVar36 +
                    (-(uint)((byte *)0xffffa98b < pbVar26) - *(int *)(pbVar17 + -0x7f)));
  bVar31 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar31;
  uVar25 = (undefined3)((uint)pbVar16 >> 8);
  bVar9 = bVar31 + 0x2d;
  piVar18 = (int *)CONCAT31(uVar25,bVar9);
  *(uint *)(pbVar17 + (int)puVar36 * 8) =
       *(int *)(pbVar17 + (int)puVar36 * 8) + iVar37 + (uint)(0xd2 < bVar31);
  bVar31 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar9;
  if (!CARRY1(bVar31,bVar9)) {
    do {
      pbVar16 = (byte *)(iVar37 + 1);
      bVar31 = (byte)piVar18;
      *(byte *)piVar18 = (char)*piVar18 + bVar31;
      bVar5 = (byte)((uint)piVar18 >> 8);
      bVar9 = (byte)puVar40 | bVar5;
      puVar14 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar9);
      out(*(undefined4 *)pbVar17,(short)pbVar16);
      *(byte *)piVar18 = (char)*piVar18 + bVar31;
      uVar34 = (undefined2)((uint)iVar30 >> 0x10);
      cVar7 = (char)iVar30;
      pbVar26 = (byte *)CONCAT22(uVar34,CONCAT11((byte)((uint)iVar30 >> 8) | *pbVar16,cVar7));
      bVar4 = *pbVar26;
      *pbVar26 = *pbVar26 + bVar31;
      *(byte *)piVar18 = (char)*piVar18 + bVar31 + CARRY1(bVar4,bVar31);
      *pbVar16 = *pbVar16 + bVar31;
      *(byte *)puVar36 = (byte)*puVar36 + bVar5;
      *(int *)((int)piVar18 * 2) =
           *(int *)((int)piVar18 * 2) + CONCAT22(uVar34,CONCAT11(0x1c,cVar7));
      *(byte *)piVar18 = (char)*piVar18 + bVar31;
      cVar6 = (char)pbVar16;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      *(byte *)((int)piVar18 * 2) = *(byte *)((int)piVar18 * 2) ^ bVar31;
      *(byte *)piVar18 = (char)*piVar18 + bVar31;
      pbVar26 = pbVar17 + 8;
      out(*(undefined4 *)(pbVar17 + 4),(short)pbVar16);
      piVar18 = (int *)0xa0a0000;
      *pbVar16 = *pbVar16;
      bVar31 = cVar7 - cVar6;
      iVar30 = CONCAT22(uVar34,CONCAT11((byte)puVar36[0x14] | 0x1c | bRam0ca87216,bVar31));
      *pbVar16 = *pbVar16;
      bVar4 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar31;
      if (!CARRY1(bVar4,bVar31)) {
        piVar18 = (int *)0x1e7b7000;
        bVar4 = (byte)((uint)puVar40 >> 8) | *(byte *)(iVar37 + 3);
        puVar14 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar4,bVar9));
        if (bVar4 != 0) {
          pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6 + pbVar26[(int)puVar36 * 8]);
          piVar18 = (int *)0x6d7d7000;
          iVar30 = iVar30 + 1;
        }
      }
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      iVar37 = CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | pbVar26[(int)puVar36 * 8]);
      *(char *)piVar18 = (char)*piVar18;
      piVar18 = (int *)CONCAT31((int3)((uint)piVar18 >> 8),0xf9);
      *puVar36 = (uint)((int)piVar18 + *puVar36 + 1);
      pbVar17 = pbVar17 + 0xc;
      out(*(undefined4 *)pbVar26,(short)iVar37);
      puVar40 = puVar14;
    } while( true );
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar9 = bVar9 | *(byte *)((int)piVar18 + 0x4000081);
  piVar18 = (int *)CONCAT31(uVar25,bVar9);
  if ('\0' < (char)bVar9) {
    *(byte *)piVar18 = (char)*piVar18 + bVar9;
    puVar28 = (uint *)CONCAT31(uVar25,bVar9 + 0x28);
    *puVar28 = *puVar28 ^ (uint)puVar28;
    *(byte *)puVar40 = *(byte *)puVar40 + bVar4;
    cVar7 = (bVar9 + 0x28) - bVar4;
    pcVar19 = (char *)CONCAT31(uVar25,cVar7);
    *pcVar19 = *pcVar19 + cVar7;
    pbVar26 = (byte *)CONCAT31(uVar24,bVar5 | *(byte *)puVar40);
    pcVar21 = (char *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((char)((uint)puVar40 >> 8) + *(byte *)((int)puVar14 + 0x7d),
                                        (char)puVar40));
    *pcVar19 = *pcVar19 + cVar7;
    pbVar16 = (byte *)CONCAT31(uVar25,cVar7 + 0x39U ^ *(byte *)CONCAT31(uVar25,cVar7 + 0x39U));
    *pcVar21 = *pcVar21 + bVar4;
    puVar47 = (uint *)(pbVar17 + 4);
    out(*(undefined4 *)pbVar17,(short)pbVar26);
    goto code_r0x00405396;
  }
  puVar28 = (uint *)(pbVar17 + 4);
  out(*(undefined4 *)pbVar17,(short)iVar37);
  pcVar29 = (char *)(iVar30 + -1);
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pbVar26 = (byte *)CONCAT31(uVar24,bVar5 | *(byte *)puVar40);
  goto code_r0x004052ee;
}


