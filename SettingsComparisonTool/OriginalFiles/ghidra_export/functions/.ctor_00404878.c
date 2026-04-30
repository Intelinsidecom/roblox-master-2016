/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404878
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(undefined4 param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, char * param_7, uint * param_8)
 * Local Vars  : puVar45, unaff_ESI, unaff_EDI, puVar46, in_ES, puVar47, in_DS, in_SS, in_AF, bVar48, unaff_retaddr, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, uStack_6c, uStack_6a, uStack_6b, uStack_2c, uStack_68, uStack_1c, puStack_28, puStack_10, puStack_14, iStack_8, puStack_c, uVar1, uStack_4, uVar3, uVar2, bVar5, bVar4, in_EAX, uVar6, uVar8, pbVar7, pcVar10, puVar9, puVar12, uVar11, pbVar14, iVar13, pcVar16, piVar15, uVar18, pcVar17, puVar20, uVar19, puVar22, puVar21, iVar24, pcVar23, cVar26, bVar25, bVar28, bVar27, uVar30, uVar29, puVar32, bVar31, iVar34, pbVar33, cVar36, cVar35, unaff_EBX, cVar37, cVar39, puVar38, ppuVar41, cVar40, ppuVar42, unaff_EBP, ppuVar44, puVar43
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */

int __fastcall
_ctor(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
     char *param_7,uint *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  byte *in_EAX;
  byte *pbVar7;
  uint uVar8;
  undefined3 uVar18;
  ushort *puVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  char *pcVar16;
  undefined3 uVar19;
  char *pcVar17;
  byte bVar25;
  char cVar26;
  undefined2 uVar29;
  uint *puVar20;
  uint *puVar21;
  byte bVar27;
  undefined2 uVar30;
  uint *puVar22;
  byte bVar28;
  char *pcVar23;
  int iVar24;
  byte bVar31;
  uint *puVar32;
  byte *pbVar33;
  int iVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar39;
  char cVar40;
  uint *unaff_EBX;
  uint *puVar38;
  undefined4 **ppuVar41;
  uint *unaff_EBP;
  undefined4 **ppuVar42;
  undefined4 *puVar43;
  undefined4 **ppuVar44;
  int unaff_ESI;
  uint *puVar45;
  uint *puVar46;
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
  int iStack_8;
  undefined4 uStack_4;
  
                    /* .NET CLR Managed Code */
  bVar4 = (byte)((uint)param_1 >> 8);
  puVar32 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar4 + *in_EAX,(char)param_1))
  ;
  pbVar7 = in_EAX + (uint)CARRY1(bVar4,*in_EAX) + *(int *)in_EAX;
  *(char *)param_2 = (char)*param_2 + (char)param_1;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 - *pbVar7);
  puVar45 = (uint *)(unaff_ESI + *(int *)pbVar14 + (uint)((byte)pbVar7 < *pbVar7));
  uStack_4 = (uint *)CONCAT22(uStack_4._2_2_,in_ES);
  do {
    bVar25 = (byte)pbVar14;
    pbVar14[0x2c000000] = pbVar14[0x2c000000] + bVar25;
    bVar4 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar25;
    *param_2 = (uint)(pbVar14 + (uint)CARRY1(bVar4,bVar25) + *param_2);
    cVar36 = (char)param_2;
    *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar36;
    *pbVar14 = *pbVar14 + bVar25;
    puVar46 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar25 | (byte)*unaff_EBX);
    uVar8 = (uint)puVar46 | *puVar46;
    cVar35 = (char)puVar32;
    cVar26 = (char)uVar8;
    *(byte *)puVar45 = (byte)*puVar45 + cVar26;
    uVar18 = (undefined3)(uVar8 >> 8);
    bVar4 = cVar26 + (byte)*unaff_EBX;
    pcVar10 = (char *)CONCAT31(uVar18,bVar4);
    bVar25 = (byte)((uint)puVar32 >> 8);
    uVar30 = (undefined2)((uint)puVar32 >> 0x10);
    if (SCARRY1(cVar26,(byte)*unaff_EBX) == (char)bVar4 < '\0') {
      *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar36;
      *pcVar10 = *pcVar10 + bVar4;
      puVar32 = (uint *)CONCAT22(uVar30,CONCAT11(bVar25 | (byte)*param_2,cVar35));
      param_2 = (uint *)((int)param_2 + 1);
      pcVar10 = pcVar10 + *param_2;
      if ((POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0) goto code_r0x00404921;
      pcVar10 = (char *)((uint)pcVar10 | 8);
code_r0x004048de:
      cVar26 = (char)pcVar10;
      *(byte *)puVar45 = (byte)*puVar45 + cVar26;
      *pcVar10 = *pcVar10 + cVar26;
      *(byte **)(pcVar10 + (int)puVar32) = (byte *)(*(int *)(pcVar10 + (int)puVar32) + (int)puVar32)
      ;
      iStack_8 = CONCAT22(iStack_8._2_2_,in_ES);
      bVar4 = *(byte *)((int)unaff_EBX + 0x75);
      *pcVar10 = *pcVar10 + cVar26;
      pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar26 + 'o');
      puVar45 = (uint *)((int)puVar45 + 1);
      *pcVar10 = *pcVar10 + cVar26 + 'o';
      uStack_4 = (uint *)((uint)uStack_4 & 0xffff0000);
      puVar46 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4,(char)unaff_EBX));
      unaff_EBP = unaff_EBX;
      in_SS = in_ES;
code_r0x004048f5:
      unaff_EBX = puVar46;
      pcVar10 = (char *)((int)((uint)pcVar10 & 0x7e26062d) - *(int *)((uint)pcVar10 & 0x7e26062d));
      *(byte *)param_2 = (byte)*param_2 + (char)puVar32;
      do {
        uRam00c36f08 = SUB41(pcVar10,0);
        while( true ) {
          uVar8 = *puVar45;
          cVar26 = (char)pcVar10;
          *(byte *)puVar45 = (byte)*puVar45 + cVar26;
          uStack_4 = (uint *)CONCAT22(uStack_4._2_2_,in_ES);
          if (SCARRY1((byte)uVar8,cVar26) == (char)(byte)*puVar45 < '\0') {
            pcVar10[(int)unaff_EBP] = pcVar10[(int)unaff_EBP] + cVar26;
            goto code_r0x00404982;
          }
          *pcVar10 = *pcVar10 + cVar26;
          pbVar7 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar26 + '*');
          uStack_4 = (uint *)CONCAT22(uStack_4._2_2_,in_DS);
          bVar4 = (byte)((uint)puVar32 >> 8);
          cVar26 = (char)puVar32;
          bVar25 = bVar4 + *pbVar7;
          pbVar7 = pbVar7 + (uint)CARRY1(bVar4,*pbVar7) + *(int *)pbVar7;
          *(byte *)param_2 = (byte)*param_2 + cVar26;
          cVar35 = (char)unaff_EBX - (byte)*puVar45;
          bVar4 = *pbVar7;
          puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                     CONCAT11(bVar25 + *pbVar7,cVar26));
          iVar13 = *(int *)pbVar7;
          *(byte *)param_2 = (byte)*param_2 + cVar26;
          pcVar10 = (char *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar25,bVar4) + iVar13) >>
                                           8),(char)(pbVar7 + (uint)CARRY1(bVar25,bVar4) + iVar13) -
                                              *(byte *)((int)param_2 + 3));
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar35) + -0x3a),cVar35));
code_r0x00404921:
          bVar4 = (byte)pcVar10;
          *pcVar10 = *pcVar10 + bVar4;
          pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar4 + 0x6f);
          *(byte *)puVar32 = ((byte)*puVar32 - (bVar4 + 0x6f)) - (0x90 < bVar4);
code_r0x00404927:
          *(byte *)param_2 = (byte)*param_2 + (char)puVar32;
          iStack_8 = CONCAT22(iStack_8._2_2_,in_SS);
          *(byte *)puVar32 = (byte)*puVar32 + 1;
          cVar26 = (char)((uint)puVar32 >> 8) - *(byte *)((int)puVar45 + 2);
          puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(cVar26,(char)puVar32));
          if ((POPCOUNT(cVar26) & 1U) == 0) break;
          pcVar10 = pcVar10 + -0x1b7e2606;
          *pcVar10 = *pcVar10 + (char)pcVar10;
          pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar10 >> 8) | (byte)param_2[0x30dbc2],
                                              (char)pcVar10));
        }
code_r0x00404931:
        *pcVar10 = *pcVar10 + (char)pcVar10;
        cVar26 = (char)pcVar10 + '\x02';
        pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar26);
        puVar46 = puVar45;
      } while ((POPCOUNT(cVar26) & 1U) != 0);
      do {
        bVar4 = (byte)pcVar10;
        *pcVar10 = *pcVar10 + bVar4;
        uVar18 = (undefined3)((uint)pcVar10 >> 8);
        piVar15 = (int *)CONCAT31(uVar18,bVar4 + 0x6f);
        *puVar32 = (*puVar32 - (int)piVar15) - (uint)(0x90 < bVar4);
        *(byte *)param_2 = (byte)*param_2 + (char)puVar32;
        iVar13 = *(int *)((int)unaff_EDI + 0x1a);
        *piVar15 = *piVar15 + (int)piVar15;
        param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*puVar46);
        *(byte *)puVar32 = (byte)*puVar32 + 1;
        bVar4 = (bVar4 + 0x6f) - (char)*piVar15;
        pbVar7 = (byte *)CONCAT31(uVar18,bVar4);
        *pbVar7 = *pbVar7 + bVar4;
        puVar46 = (uint *)((int)puVar46 + *(int *)pbVar7);
        cVar26 = bVar4 + *pbVar7;
        puVar9 = (ushort *)CONCAT31(uVar18,cVar26);
        *puVar9 = *puVar9 + (ushort)CARRY1(bVar4,*pbVar7) * (((ushort)puVar9 & 3) - (*puVar9 & 3));
        *(char *)puVar9 = (char)*puVar9 + cVar26;
        *(char *)puVar9 = (char)*puVar9 + cVar26;
        *(char *)puVar9 = (char)*puVar9 + cVar26;
        unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
        unaff_EBP = (uint *)((int)unaff_EBP + iVar13);
code_r0x0040495b:
        cVar26 = (char)puVar9;
        *(char *)puVar9 = (char)*puVar9 + cVar26;
        uVar18 = (undefined3)((uint)puVar9 >> 8);
        cVar35 = cVar26 + '\x02';
        pcVar10 = (char *)CONCAT31(uVar18,cVar35);
        if ((POPCOUNT(cVar35) & 1U) != 0) {
          *param_2 = (uint)(*param_2 + (int)unaff_EBP);
          puVar45 = (uint *)((int)puVar46 + 1);
          out((byte)*puVar46,(short)param_2);
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
          goto code_r0x00404931;
        }
        *pcVar10 = *pcVar10 + cVar35;
        pbVar7 = (byte *)(CONCAT31(uVar18,cVar26 + '}') + (int)unaff_EBP);
        *pbVar7 = *pbVar7 + cVar26 + '}';
        *param_7 = *param_7 + (char)param_7;
        puVar32 = (uint *)CONCAT22((short)((uint)param_6 >> 0x10),
                                   CONCAT11((byte)((uint)param_6 >> 8) | *(byte *)((int)param_6 * 3)
                                            ,(char)param_6));
        unaff_EDI = (uint *)(iStack_8 + *(int *)((int)param_4 + 0x6f));
        pcVar10 = param_7;
        param_2 = param_5;
        unaff_EBX = param_4;
        unaff_EBP = unaff_retaddr;
        puVar46 = uStack_4;
        while( true ) {
          cVar26 = (char)pcVar10;
          *pcVar10 = *pcVar10 + cVar26;
          uVar18 = (undefined3)((uint)pcVar10 >> 8);
          cVar35 = cVar26 + '\x02';
          pcVar10 = (char *)CONCAT31(uVar18,cVar35);
          if ((POPCOUNT(cVar35) & 1U) != 0) break;
          *pcVar10 = *pcVar10 + cVar35;
          pcVar10 = (char *)CONCAT31(uVar18,cVar26 + '}');
          out(*puVar46,(short)param_2);
          *pcVar10 = *pcVar10 + cVar26 + '}';
code_r0x00404982:
          *(char *)param_8 = (char)*param_8 + (char)param_8;
          puVar32 = (uint *)CONCAT22((short)((uint)param_7 >> 0x10),
                                     CONCAT11((byte)((uint)param_7 >> 8) |
                                              param_7[(int)unaff_retaddr],(char)param_7));
          unaff_EDI = (uint *)((int)uStack_4 + *(int *)((int)param_5 + 0x71));
          puVar45 = param_8;
          param_2 = param_6;
          unaff_EBX = param_5;
          puVar46 = unaff_retaddr;
          while( true ) {
            cVar26 = (char)puVar45;
            *(byte *)puVar45 = (byte)*puVar45 + cVar26;
            uVar18 = (undefined3)((uint)puVar45 >> 8);
            cVar35 = cVar26 + '\x02';
            puVar9 = (ushort *)CONCAT31(uVar18,cVar35);
            unaff_EBP = param_3;
            if ((POPCOUNT(cVar35) & 1U) != 0) goto code_r0x0040495b;
            *(char *)puVar9 = (char)*puVar9 + cVar35;
            bVar25 = cVar26 + 0x7d;
            iVar13 = CONCAT31(uVar18,bVar25);
            pbVar7 = (byte *)(iVar13 + (int)param_3);
            bVar4 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar25;
            uVar8 = *puVar32;
            *(byte *)param_2 = (byte)*param_2 + (char)puVar32;
            pcVar10 = (char *)(((iVar13 - uVar8) - (uint)CARRY1(bVar4,bVar25)) + -0x727b0317);
            cVar26 = (char)pcVar10;
            *pcVar10 = *pcVar10 + cVar26;
            uVar18 = (undefined3)((uint)pcVar10 >> 8);
            cVar35 = cVar26 + '\x02';
            pcVar10 = (char *)CONCAT31(uVar18,cVar35);
            if ((POPCOUNT(cVar35) & 1U) != 0) break;
            *pcVar10 = *pcVar10 + cVar35;
            bVar25 = cVar26 + 0x7d;
            iVar13 = CONCAT31(uVar18,bVar25);
            pbVar7 = (byte *)(iVar13 + (int)param_3);
            bVar4 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar25;
            puVar45 = (uint *)((iVar13 - *puVar32) - (uint)CARRY1(bVar4,bVar25));
            puVar22 = param_2;
code_r0x004049b4:
            *(byte *)puVar22 = (byte)*puVar22 + (char)puVar32;
            param_2 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),
                                       ((char)puVar22 - (byte)*unaff_EDI) - (byte)*puVar46);
            bVar25 = *(byte *)((int)puVar46 + 0x72);
            *puVar45 = *puVar45 & (uint)puVar32;
            pbVar7 = (byte *)((int)puVar45 + 2);
            *pbVar7 = *pbVar7 + (char)((uint)puVar22 >> 8);
            bVar4 = *pbVar7;
            puVar47 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar25);
            puVar22 = puVar46;
            while (unaff_EBX = puVar47, puVar46 = puVar22, (POPCOUNT(bVar4) & 1U) == 0) {
              cVar26 = (char)puVar45;
              *(byte *)puVar45 = (byte)*puVar45 + cVar26;
              uVar18 = (undefined3)((uint)puVar45 >> 8);
              cVar35 = cVar26 + '\x03';
              pbVar7 = (byte *)CONCAT31(uVar18,cVar35);
              puVar46 = puVar22 + 1;
              out(*puVar22,(short)param_2);
              in_SS = (undefined2)uStack_4;
              *pbVar7 = *pbVar7 + cVar35;
              cVar36 = (char)puVar32;
              puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                         CONCAT11((byte)((uint)puVar32 >> 8) | *pbVar7,cVar36));
              *(int *)pbVar7 = *(int *)pbVar7 - (int)pbVar7;
              *(byte *)param_2 = (byte)*param_2 + cVar36;
              cVar36 = (char)puVar47 - *(byte *)((int)puVar22 + 6);
              unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),cVar36);
              if ((POPCOUNT(cVar36) & 1U) != 0) {
                pbVar14 = (byte *)((int)unaff_EDI + (int)param_3 * 2);
                *pbVar14 = *pbVar14 + cVar35;
                ppuVar44 = (undefined4 **)param_3;
                goto code_r0x00404a51;
              }
              *pbVar7 = *pbVar7 + cVar35;
              puVar45 = (uint *)CONCAT31(uVar18,cVar26 + 'r');
              *(byte *)puVar45 = (byte)*puVar45;
              uStack_4 = (uint *)CONCAT22(uStack_4._2_2_,in_ES);
              do {
                unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
                bVar4 = (byte)puVar45;
                *(byte *)puVar45 = (byte)*puVar45 + bVar4;
                uVar18 = (undefined3)((uint)puVar45 >> 8);
                bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
                puVar45 = (uint *)CONCAT31(uVar18,bVar4);
                cVar26 = (char)puVar32;
                *(byte *)param_2 = (byte)*param_2 + cVar26;
                bVar25 = (char)((uint)puVar32 >> 8) - *(byte *)((int)puVar46 + 2);
                puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(bVar25,cVar26));
                puVar22 = param_2;
                if ((POPCOUNT(bVar25) & 1U) != 0) goto code_r0x004049b4;
                *(byte *)puVar45 = (byte)*puVar45 + bVar4;
                bVar5 = bVar4 + 2;
                puVar45 = (uint *)CONCAT31(uVar18,bVar5);
                ppuVar42 = (undefined4 **)param_3;
                if ((POPCOUNT(bVar5) & 1U) == 0) goto code_r0x004049f5;
                puVar46 = uStack_4;
              } while (0xfd < bVar4);
              *(byte *)puVar45 = (byte)*puVar45 | bVar5;
              puVar47 = unaff_EBX;
              puVar22 = uStack_4;
              bVar4 = (byte)*puVar45;
            }
          }
        }
        *(byte *)param_2 = (byte)*param_2 + (char)puVar32;
        iStack_8 = CONCAT22(iStack_8._2_2_,in_SS);
      } while( true );
    }
    *pcVar10 = *pcVar10 + bVar4;
    bVar5 = bVar4 + 2;
    pcVar10 = (char *)CONCAT31(uVar18,bVar5);
    if (bVar4 < 0xfe) {
      *(byte *)puVar45 = (byte)*puVar45 + bVar5;
      puVar46 = unaff_EBX;
      goto code_r0x004048f5;
    }
    *pcVar10 = *pcVar10 + bVar5;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) |
                                        *(byte *)((int)unaff_EBX + -0x5b),cVar36));
    cVar26 = *pcVar10;
    *pcVar10 = *pcVar10 + bVar5;
    uStack_4 = (uint *)CONCAT22(uStack_4._2_2_,in_ES);
    if (SCARRY1(cVar26,bVar5) == *pcVar10 < '\0') goto code_r0x00404927;
    *pcVar10 = *pcVar10 + bVar5;
    bVar4 = bVar4 + 4;
    pbVar14 = (byte *)CONCAT31(uVar18,bVar4);
    if (0xfd < bVar5) {
      *pbVar14 = *pbVar14 + bVar4;
      puStack_c = (undefined4 *)CONCAT22(puStack_c._2_2_,in_ES);
      bVar4 = bVar4 | (byte)*puVar45;
      pcVar10 = (char *)CONCAT31(uVar18,bVar4);
      *pcVar10 = *pcVar10 + bVar4;
      *unaff_EBX = (uint)(*unaff_EBX + (int)puVar32);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
      *pcVar10 = *pcVar10 + bVar4;
      pcVar10 = (char *)CONCAT31(uVar18,bVar4 + 0x6f);
      *pcVar10 = *pcVar10 + bVar4 + 0x6f;
      uStack_4 = (uint *)((uint)uStack_4._2_2_ << 0x10);
      pcVar10 = (char *)((int)((uint)pcVar10 & 0x7e26062d) - *(int *)((uint)pcVar10 & 0x7e26062d));
      *(byte *)param_2 = (byte)*param_2 + cVar35;
      uRam00c16f07 = SUB41(pcVar10,0);
      goto code_r0x004048de;
    }
    *pbVar14 = *pbVar14 + bVar4;
    puVar32 = (uint *)CONCAT22(uVar30,CONCAT11(bVar25 | (byte)*param_2,cVar35));
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar36;
    *(byte *)puVar45 = (byte)*puVar45 ^ bVar4;
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar4;
    uVar18 = (undefined3)((uint)puVar45 >> 8);
    bVar5 = bVar4 + 0x6f;
    pbVar7 = (byte *)CONCAT31(uVar18,bVar5);
    *puVar32 = (*puVar32 - (int)pbVar7) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar26;
    puVar43 = (undefined4 *)((int)ppuVar42 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    uVar19 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | (byte)*puVar46;
    param_2 = (uint *)CONCAT31(uVar19,bVar4);
    *(byte *)puVar32 = (byte)*puVar32 + 1;
    cVar35 = bVar5 - *pbVar7;
    puVar46 = (uint *)((int)puVar46 + (-(uint)(bVar5 < *pbVar7) - *(int *)CONCAT31(uVar18,cVar35)));
    uVar11 = CONCAT31(uVar18,cVar35 + *(char *)CONCAT31(uVar18,cVar35));
    bVar48 = CARRY1(bRam14110000,bVar25);
    bRam14110000 = bRam14110000 + bVar25;
    puVar45 = (uint *)((int)unaff_EBX + (int)puVar46 * 2);
    uVar8 = *puVar45;
    uVar2 = uVar11 + *puVar45;
    puVar12 = (undefined4 *)(uVar2 + bVar48);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar12 = uVar1;
    iStack_8 = CONCAT22(iStack_8._2_2_,in_ES);
    uVar8 = (uint)(CARRY4(uVar11,uVar8) || CARRY4(uVar2,(uint)bVar48));
    puVar45 = (uint *)((int)puVar12 + uRam7d020511 + uVar8);
    ppuVar41 = &puStack_c;
    ppuVar44 = &puStack_c;
    ppuVar42 = &puStack_c;
    puStack_c = puVar43;
    cVar35 = '\x03';
    do {
      puVar43 = puVar43 + -1;
      ppuVar41 = ppuVar41 + -1;
      *ppuVar41 = (undefined4 *)*puVar43;
      cVar35 = cVar35 + -1;
    } while ('\0' < cVar35);
    uStack_4 = (uint *)&puStack_c;
    pbRam00c82802 =
         (byte *)((int)puVar45 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar12,uRam7d020511) ||
                      CARRY4((int)puVar12 + uRam7d020511,uVar8))));
    uVar8 = *puVar46;
    cVar35 = (char)puVar45;
    *(byte *)puVar46 = (byte)*puVar46 + cVar35;
  } while (SCARRY1((byte)uVar8,cVar35) == (char)(byte)*puVar46 < '\0');
  *(byte *)puVar45 = (byte)*puVar45 + cVar35;
  iVar13 = CONCAT31((int3)((uint)puVar45 >> 8),cVar35 + '\x11') + 0xc57b;
  bVar25 = (byte)iVar13;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar19,bVar4 + (byte)*puVar32);
  iVar13 = (CONCAT31((int3)((uint)iVar13 >> 8),bVar25 + 0x6f) - (uint)(0x90 < bVar25)) + -0x18093a86
  ;
  cVar35 = (char)iVar13;
  uVar18 = (undefined3)((uint)iVar13 >> 8);
  cVar26 = cVar35 + '\x02';
  pbVar7 = (byte *)CONCAT31(uVar18,cVar26);
  if ((POPCOUNT(cVar26) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar7 = *pbVar7 + cVar26;
  pbVar7 = (byte *)CONCAT31(uVar18,cVar35 + 'q');
  ppuVar44 = &puStack_c;
code_r0x00404a51:
  pbVar14 = pbVar7 + 1;
  cVar26 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar26;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                               CONCAT11((char)((uint)puVar47 >> 8) - cVar26,cVar36));
  *pbVar14 = *pbVar14 + cVar26;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar32);
  pbVar7 = pbVar7 + 0x757b03;
  pbVar14 = (byte *)((int)unaff_EDI + (int)ppuVar44 * 2);
  cVar26 = (char)pbVar7;
  *pbVar14 = *pbVar14 + cVar26;
  *pbVar7 = *pbVar7 + cVar26;
  *(byte *)puVar46 = (byte)*puVar46 - (char)((uint)pbVar7 >> 8);
  *pbVar7 = *pbVar7 + cVar26;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar44 + -0x3a));
  *pbVar7 = *pbVar7 + cVar26;
  pbVar7 = (byte *)(CONCAT31((int3)((uint)pbVar7 >> 8),cVar26 + '\x11') + 0x757b02);
  pbVar14 = (byte *)((int)unaff_EDI + (int)ppuVar44 * 2);
  bVar25 = (byte)pbVar7;
  *pbVar14 = *pbVar14 + bVar25;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar25;
  puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_ES);
  pbRam011006fe = pbVar7 + (int)(pbRam011006fe + CARRY1(bVar4,bVar25));
  uVar8 = *puVar46;
  *(byte *)puVar46 = (byte)*puVar46 + bVar25;
  if (!CARRY1((byte)uVar8,bVar25)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar4;
    bVar5 = (byte)puVar32;
    puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                               CONCAT11((byte)((uint)puVar32 >> 8) | *pbVar7,bVar5));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar18 = (undefined3)((uint)pbVar7 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar26 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar10 = (char *)CONCAT31(uVar18,cVar26);
    *pcVar10 = *pcVar10 + cVar26;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar44 + -0x39));
    *pcVar10 = *pcVar10 + cVar26;
    iVar13 = CONCAT31(uVar18,cVar26 + '\x11') + 0xc57b;
    iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar13;
    bVar25 = bVar4 + 0x6f;
    pbVar7 = (byte *)CONCAT31((int3)((uint)iVar13 >> 8),bVar25);
    *puVar32 = (*puVar32 - (int)pbVar7) - (uint)(0x90 < bVar4);
    uVar8 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    pbRam011106fe = pbVar7 + (int)(pbRam011106fe + CARRY1((byte)uVar8,bVar5));
    uVar8 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar25;
    if (!CARRY1((byte)uVar8,bVar25)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    bVar4 = (byte)puVar32;
    bVar25 = (byte)((uint)puVar32 >> 8) | *pbVar7;
    puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(bVar25,bVar4));
    *pbVar7 = *pbVar7 - (char)pbVar7;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar25;
    out(*puVar46,(short)param_2);
    *puVar32 = *puVar32 & (uint)pbVar7;
    uVar8 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar4;
    pbVar7 = pbVar7 + (uint)CARRY1((byte)uVar8,bVar4) + puVar46[1];
    *pbVar7 = *pbVar7 + (char)pbVar7;
    *(byte *)puVar32 = (byte)*puVar32 + (char)param_2;
    puVar46 = puVar46 + 1;
    while( true ) {
      out(*puVar46,(short)param_2);
      pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 & (byte)*puVar32);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar32;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[5],
                                          (char)param_2));
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      puVar46 = puVar46 + 1;
code_r0x00404ad4:
      puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_ES);
      pbVar7 = (byte *)((uint)pbVar7 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar7;
code_r0x00404add:
      bVar4 = (byte)pbVar7;
      uVar18 = (undefined3)((uint)pbVar7 >> 8);
      cVar26 = bVar4 + 8;
      pbVar7 = (byte *)CONCAT31(uVar18,cVar26);
      if (SCARRY1(bVar4,'\b') == cVar26 < '\0') break;
      *pbVar7 = *pbVar7 + cVar26;
      cVar26 = bVar4 + 10;
      piVar15 = (int *)CONCAT31(uVar18,cVar26);
      if ((POPCOUNT(cVar26) & 1U) != 0) {
        *piVar15 = (int)(*piVar15 + (int)piVar15);
        goto code_r0x00404b18;
      }
      *(char *)piVar15 = (char)*piVar15 + cVar26;
      puVar45 = (uint *)CONCAT31(uVar18,bVar4 + 0x7c);
      *puVar45 = *puVar45 & (uint)puVar32;
      *(char *)((int)puVar45 + 0x11) = *(char *)((int)puVar45 + 0x11) + (char)((uint)param_2 >> 8);
      cVar26 = (char)((int)puVar45 + 0xc67b);
      uVar18 = (undefined3)((uint)((int)puVar45 + 0xc67b) >> 8);
      bVar4 = cVar26 + 8;
      pbVar7 = (byte *)CONCAT31(uVar18,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar7 = *pbVar7 + bVar4;
        cRam02060000 = cVar26 + 'w';
        puVar22 = (uint *)CONCAT31(uVar18,cRam02060000);
        *(byte *)puVar22 = (byte)*puVar22 + cRam02060000;
        cVar26 = (char)puVar32;
        puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                   CONCAT11((byte)((uint)puVar32 >> 8) | (byte)*puVar22,cVar26));
        *puVar22 = *puVar22 - (int)puVar22;
        *(byte *)param_2 = (byte)*param_2 + cVar26;
        puVar45 = puVar46 + 1;
        out(*puVar46,(short)param_2);
        puVar46 = puVar45;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar10 = (char *)((uint)puVar22 | *puVar22);
        goto code_r0x00404b89;
      }
      bVar25 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar4;
      *puVar46 = (uint)(pbVar7 + (uint)CARRY1(bVar25,bVar4) + *puVar46);
    }
    *(byte *)puVar46 = (byte)*puVar46 + 1;
    *puVar32 = (uint)(pbVar7 + (uint)(0xf7 < bVar4) + *puVar32);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    puVar45 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + 'r');
    piVar15 = (int *)((uint)puVar45 | *puVar45);
    param_2 = puStack_28;
code_r0x00404b18:
    bRam11060000 = (byte)piVar15;
    iVar13 = CONCAT31((int3)((uint)((int)piVar15 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar15 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar13;
    iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),bVar4 + 0x6f);
    *puVar32 = (*puVar32 - iVar13) - (uint)(0x90 < bVar4);
    cVar26 = (char)puVar32;
    *(byte *)param_2 = (byte)*param_2 + cVar26;
    bVar27 = (byte)((uint)unaff_EBX >> 8);
    bVar5 = (byte)((uint)param_2 >> 8) | bVar27;
    pcVar16 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar5,(byte)param_2));
    piVar15 = (int *)(iVar13 + 0x73060001);
    *(byte *)puVar32 = (byte)*puVar32 & (byte)piVar15;
    *pcVar16 = *pcVar16 + cVar26;
    bVar25 = (byte)((uint)puVar32 >> 8);
    *(byte *)piVar15 = *(char *)piVar15 - bVar25;
    *(byte *)piVar15 = *(char *)piVar15 + (byte)piVar15;
    iVar13 = *piVar15;
    *piVar15 = *piVar15 - (int)piVar15;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar25;
    pcVar10 = (char *)((uint)piVar15 | *unaff_EDI);
    *pcVar16 = *pcVar16 - bVar25;
    bVar4 = (byte)pcVar10;
    *pcVar10 = *pcVar10 + bVar4;
    ppuVar44 = (undefined4 **)
               (((int)ppuVar44 - iVar13) - *(int *)(pcVar10 + ((int)ppuVar44 - iVar13)));
    uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar28 = (byte)unaff_EBX;
    cVar35 = bVar27 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar7 = (byte *)CONCAT22(uVar30,CONCAT11(cVar35,bVar28));
    *pcVar10 = *pcVar10 + bVar4;
    uVar18 = (undefined3)((uint)pcVar10 >> 8);
    uVar11 = CONCAT31(uVar18,bVar4 + 7);
    puVar45 = (uint *)((int)ppuVar44 + -0x1faeef1);
    uVar8 = *puVar45;
    uVar2 = *puVar45 + uVar11;
    *puVar45 = uVar2 + (0xf8 < bVar4);
    puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_ES);
    puVar47 = puStack_28;
    bVar4 = bVar4 + 7 + (byte)*puVar32 +
            (CARRY4(uVar8,uVar11) || CARRY4(uVar2,(uint)(0xf8 < bVar4)));
    puVar22 = (uint *)CONCAT31(uVar18,bVar4);
    uVar8 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar4;
    if (CARRY1((byte)uVar8,bVar4)) break;
    *(byte *)puVar22 = (byte)*puVar22 + bVar4;
    unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar35 + pbVar7[0x76],bVar28));
    uStack_2c = in_ES;
  }
  *(byte *)puVar22 = (byte)*puVar22 + bVar4;
  uVar19 = (undefined3)((uint)pcVar16 >> 8);
  bVar31 = (byte)param_2 | *pbVar7;
  param_2 = (uint *)CONCAT31(uVar19,bVar31);
  pcRam2b060000 = (char *)CONCAT31(uVar18,bVar4 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar4 + 0x39)) - (0xd7 < (byte)(bVar4 + 0x11));
  bVar27 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar25;
  puVar45 = puVar46 + 1;
  out(*puVar46,(short)param_2);
  bVar4 = (bVar4 + 0x37) - CARRY1(bVar27,bVar25);
  piVar15 = (int *)CONCAT31(uVar18,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    iVar13 = CONCAT31(uVar18,bVar4 + 0x11) + 0xc77b;
    pcVar10 = (char *)CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + 'r');
    pcVar10[0x28] = pcVar10[0x28] + bVar5;
code_r0x00404b89:
    cVar26 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar26;
    *pcVar10 = *pcVar10 + cVar26;
    *pcVar10 = *pcVar10 + cVar26;
    puVar9 = (ushort *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar26 + 'r');
    uVar6 = (ushort)puVar9 | *puVar9;
    pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),uVar6);
    bRam11060000 = (byte)uVar6;
    out(*puVar45,(short)param_2);
    *pcVar10 = *pcVar10 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar4;
  puVar43 = (undefined4 *)((int)ppuVar44 - *(int *)((int)unaff_EDI + 0x21));
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pcVar10 = (char *)CONCAT31(uVar19,bVar31 | *pbVar7);
  puVar22 = puVar46 + 2;
  out(*puVar45,(short)pcVar10);
  uVar8 = *puVar32;
  *pcVar10 = *pcVar10 + cVar26;
  uVar8 = CONCAT31(uVar18,bVar4 & (byte)uVar8) | 0x767b02;
  *(byte *)((int)puVar32 + (int)pcVar10) = *(byte *)((int)puVar32 + (int)pcVar10) + (char)uVar8;
  iVar13 = uVar8 + 0xc67b;
  cVar40 = (char)iVar13;
  uVar18 = (undefined3)((uint)iVar13 >> 8);
  cVar36 = cVar40 + 'r';
  pcVar10 = (char *)CONCAT31(uVar18,cVar36);
  pcVar10[0x28] = pcVar10[0x28] + bVar5;
  *pcVar10 = *pcVar10 + cVar36;
  uVar29 = (undefined2)((uint)puVar32 >> 0x10);
  bVar25 = bVar25 | *(byte *)((int)puStack_28 + -0x5e);
  puVar21 = (uint *)CONCAT22(uVar29,CONCAT11(bVar25,cVar26));
  *pcVar10 = *pcVar10 + cVar36;
  puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,uStack_2c);
  puVar45 = (uint *)CONCAT22(uVar30,CONCAT11(cVar35 + pbVar7[0x76],bVar28));
  *pcVar10 = *pcVar10 + cVar36;
  puVar32 = (uint *)CONCAT31(uVar18,cVar40 + -0x1c);
  pcVar10 = (char *)((uint)puVar32 | *puVar32);
  bVar48 = (POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar10;
  puVar32 = puStack_28;
  puVar38 = puVar45;
  puVar12 = puVar43;
  puVar20 = puVar47;
  uVar30 = uStack_2c;
  if (!bVar48) goto code_r0x00404ca8;
  *pcVar10 = *pcVar10 + cRam02060000;
  puVar38 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cRam02060000 + 'r');
  *puVar38 = *puVar38 & (uint)puVar21;
  *(char *)((int)puVar38 + 0x11) = *(char *)((int)puVar38 + 0x11) + (char)((ushort)uStack_2c >> 8);
  iVar13 = (int)puVar38 + 0xc77b;
  uVar18 = (undefined3)((uint)iVar13 >> 8);
  cRam02060000 = (char)iVar13 + '\t';
  pbVar7 = (byte *)CONCAT31(uVar18,cRam02060000);
  out(*puVar22,uStack_2c);
  *pbVar7 = *pbVar7 + cRam02060000;
  puVar20 = (uint *)CONCAT22(uVar29,CONCAT11(bVar25 | *pbVar7,cVar26));
  *(int *)pbVar7 = *(int *)pbVar7 - (int)pbVar7;
  *(byte *)puStack_28 = (byte)*puStack_28 + cVar26;
  out(puVar46[3],uStack_2c);
  puVar22 = puVar46 + 4;
  uVar30 = uStack_2c;
  if ((POPCOUNT((byte)*puStack_28) & 1U) != 0) goto code_r0x00404cca;
  *pbVar7 = *pbVar7 + cRam02060000;
  puVar9 = (ushort *)CONCAT31(uVar18,(char)iVar13 + '{');
  uVar6 = (ushort)puVar9 | *puVar9;
  pcVar10 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),uVar6);
  bVar4 = (byte)uVar6;
  out(puVar46[4],uStack_2c);
  pbVar7 = (byte *)((int)puVar20 + 1);
  bRam11060000 = bVar4;
  *pcVar10 = *pcVar10 + bVar4;
  puVar21 = (uint *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                             CONCAT11((byte)((uint)pbVar7 >> 8) | bRam110cde91,(char)pbVar7));
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar4 - 7);
  *puVar47 = (uint)(pcVar10 + (uint)(bVar4 < 7) + *puVar47);
  puVar22 = puVar46 + 6;
  out(puVar46[5],uStack_2c);
  puVar32 = (uint *)((int)puStack_28 + 1);
  *pcVar10 = *pcVar10 + (bVar4 - 7);
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),bVar28 | (byte)(uVar6 >> 8));
  do {
    bVar4 = (char)pcVar10 - *pcVar10;
    uVar8 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar4;
    cVar26 = bVar4 - CARRY1((byte)uVar8,bVar4);
    *(byte *)puVar32 = (byte)*puVar32 + cVar26;
    cVar35 = (char)((uint)puVar21 >> 8);
    *(byte *)(puVar47 + 0x673b40) = (byte)puVar47[0x673b40] + cVar35;
    puVar46 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar26);
    *(byte *)puVar46 = (byte)*puVar46 + cVar26;
    *(byte *)puVar32 = (byte)*puVar32 + cVar26;
    puVar38[0x16] = (uint)(puVar38[0x16] + (int)puVar22);
    puVar20 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar21 >> 0x10),
                                               CONCAT11(cVar35 + (char)((uint)pcVar10 >> 8),
                                                        (char)puVar21)) >> 8),
                               (char)puVar21 + *(char *)((int)puVar46 * 2));
    *(byte *)puVar46 = (byte)*puVar46 + cVar26;
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar38;
    puVar45 = puVar38;
_ctor:
    bVar25 = (byte)((uint)puVar20 >> 8);
    uVar8 = *puVar46;
    bVar4 = (byte)puVar20;
    puVar46 = (uint *)((int)puVar46 + (uint)CARRY1(bVar25,(byte)*puVar46) + *puVar46);
    *(byte *)puVar32 = (byte)*puVar32 + bVar4;
    cVar26 = bVar4 - *(byte *)((int)puVar32 + 3);
    puVar21 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar20 >> 0x10),
                                               CONCAT11(bVar25 + (byte)uVar8,bVar4)) >> 8),cVar26);
    if ((POPCOUNT(cVar26) & 1U) != 0) {
      if (*(byte *)((int)puVar32 + 3) <= bVar4) {
        *puVar46 = (uint)(*puVar46 + (int)puVar46);
        puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),(byte)puVar32 | (byte)*puVar45);
        puVar46 = puVar46 + 0x230e;
        puVar20 = puVar21;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
    cVar26 = (char)puVar46 + '\x02';
    pcVar10 = (char *)CONCAT31((int3)((uint)puVar46 >> 8),cVar26);
    bVar48 = (POPCOUNT(cVar26) & 1U) == 0;
    puVar38 = puVar45;
    puVar12 = puVar43;
    puVar20 = puVar47;
    uVar30 = uStack_1c;
code_r0x00404ca8:
    uStack_1c = uVar30;
    puVar45 = uStack_4;
    puVar43 = puStack_c;
    puVar47 = puStack_14;
    if (bVar48) break;
    *(byte *)puVar32 = (byte)*puVar32 + (char)puVar21;
    puVar43 = puVar12;
    puVar47 = puVar20;
  } while( true );
  *pcVar10 = *pcVar10 + (char)pcVar10;
  *(byte *)param_4 = (char)*param_4 + (byte)param_4;
  puVar20 = (uint *)CONCAT22((short)((uint)param_3 >> 0x10),
                             CONCAT11((byte)((uint)param_3 >> 8) | (byte)*unaff_retaddr,
                                      (char)param_3));
  *(byte *)uStack_4 = (byte)*uStack_4 + (char)uStack_4;
  *(byte *)((int)param_4 * 2) = *(byte *)((int)param_4 * 2) ^ (byte)param_4;
  uVar3 = *(undefined6 *)param_4;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar7 = (byte *)uVar3;
  bVar25 = (byte)uVar3;
  *pbVar7 = *pbVar7 + bVar25;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar25;
  puVar32 = (uint *)((int)puVar20 + 0x11673);
  uVar8 = *puVar32;
  uVar2 = *puVar32;
  *puVar32 = (uint)((byte *)(uVar2 + (int)unaff_retaddr) + CARRY1(bVar4,bVar25));
  puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,uStack_1c);
  pbVar7 = pbVar7 + (uint)(CARRY4(uVar8,(uint)unaff_retaddr) ||
                          CARRY4(uVar2 + (int)unaff_retaddr,(uint)CARRY1(bVar4,bVar25))) +
                    *(int *)((int)puVar20 + (int)unaff_retaddr);
  puVar32 = unaff_retaddr;
  puVar22 = puStack_10;
  uVar30 = uStack_1c;
code_r0x00404cca:
  uStack_1c = uVar30;
  cVar26 = (char)pbVar7 + '\x04';
  puVar46 = (uint *)CONCAT31((int3)((uint)pbVar7 >> 8),cVar26);
  if (SCARRY1((char)pbVar7,'\x04') == cVar26 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
  puVar38 = puVar22 + 1;
  out(*puVar22,(short)puVar32);
  uVar8 = *puVar20;
  uVar2 = *puVar32;
  bVar4 = (byte)puVar20;
  *(byte *)puVar32 = (byte)*puVar32 + bVar4;
  iVar13 = (CONCAT31((int3)((uint)puVar46 >> 8),(char)puVar46 + '\x03') & uVar8) + iRam00008c38;
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar32;
  pcVar10 = (char *)(iVar13 + (uint)CARRY1((byte)uVar2,bVar4) + 0x1246f);
  uVar18 = (undefined3)((uint)puVar20 >> 8);
  bVar4 = bVar4 | (byte)*puVar32;
  puVar21 = (uint *)CONCAT31(uVar18,bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar10 >> 8);
  puVar46 = (uint *)(CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + *pcVar10) + 0x1fbeef2);
  uVar8 = *puVar46;
  *puVar46 = (uint)(*puVar46 + (int)puVar46);
  if (CARRY4(uVar8,(uint)puVar46)) {
    *puVar46 = (uint)(*puVar46 + (int)puVar46);
    pcVar10 = (char *)CONCAT31(uVar18,bVar4 | bRam00282809);
    cVar26 = (char)((uint)puVar20 >> 8);
    *(byte *)puVar45 = (byte)*puVar45 + cVar26;
    *pcVar10 = *pcVar10 - cVar26;
    *(byte *)puVar46 = *(byte *)puVar46 + (char)puVar46;
    iVar13 = (int)pcVar10 - *puVar45;
    puVar22 = puVar22 + 2;
    out(*puVar38,(short)puVar32);
    *puVar46 = (uint)(*puVar46 + (int)puVar46);
    puVar21 = (uint *)CONCAT22((short)((uint)iVar13 >> 0x10),
                               CONCAT11((byte)((uint)iVar13 >> 8) | bRambf73070b,(char)iVar13));
code_r0x00404d15:
    uVar8 = *puVar46;
    bVar4 = (byte)puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar4;
    puVar38 = puVar22 + 1;
    out(*puVar22,(short)puVar32);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar25 = bVar4 + in_AF * '\x06';
    puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),
                               bVar25 + (0x90 < (bVar25 & 0xf0) |
                                        CARRY1((byte)uVar8,bVar4) | in_AF * (0xf9 < bVar25)) * '`');
  }
  *puVar46 = (uint)(*puVar46 + (int)puVar46);
  bVar4 = (byte)puVar46 | (byte)*puVar47;
  puVar22 = puVar38 + 1;
  uVar29 = SUB42(puVar32,0);
  out(*puVar38,uVar29);
  *(byte *)puVar21 = (byte)*puVar21 - bVar4;
  uVar8 = *puVar32;
  bVar25 = (byte)puVar21;
  *(byte *)puVar32 = (byte)*puVar32 + bVar25;
  iVar13 = CONCAT31((int3)((uint)puVar46 >> 8),bVar4) + *puVar22 + (uint)CARRY1((byte)uVar8,bVar25);
  pcVar10 = (char *)((int)puVar43 - *puVar32);
  uVar18 = (undefined3)((uint)iVar13 >> 8);
  cVar26 = (char)iVar13 + (byte)*puVar22 + (puVar43 < (undefined4 *)*puVar32);
  puVar46 = (uint *)CONCAT31(uVar18,cVar26);
  bVar4 = (byte)((uint)puVar21 >> 8);
  *(byte *)puVar21 = (byte)*puVar21 - bVar4;
  *puVar46 = (uint)(*puVar46 + (int)puVar46);
  bVar25 = bVar25 | *(byte *)((int)puVar32 + (int)puVar46);
  uVar30 = (undefined2)((uint)puVar21 >> 0x10);
  if ((POPCOUNT(bVar25) & 1U) == 0) {
    *(byte *)puVar46 = (byte)*puVar46 + cVar26;
    pcVar16 = (char *)CONCAT31(uVar18,cVar26 + '\x12');
    *pcVar16 = *pcVar16 + bVar4;
    puVar46 = (uint *)CONCAT31(uVar18,(cVar26 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar21 >> 8),bVar25));
    uVar8 = *puVar32;
    *(byte *)puVar32 = (byte)*puVar32 + bVar25;
    if (!CARRY1((byte)uVar8,bVar25)) {
      pbVar7 = (byte *)((uint)puVar46 | *puVar46);
      out(*puVar22,uVar29);
      *pbVar7 = *pbVar7 + (char)pbVar7;
      bVar5 = *pbVar7;
      piVar15 = (int *)CONCAT22(uVar30,CONCAT11(bVar4 | bVar5,bVar25));
      iVar13 = (int)pbVar7 - *piVar15;
      *(byte *)puVar32 = (byte)*puVar32 + bVar25;
      puVar46 = puVar38 + 3;
      out(puVar38[2],uVar29);
      uRam12060000 = (undefined1)iVar13;
      *(char *)((int)piVar15 + iVar13) = *(char *)((int)piVar15 + iVar13) - (bVar4 | bVar5);
      *(byte *)puVar32 = (byte)*puVar32 + bVar25;
      pbVar7 = (byte *)(iVar13 + -0x120edecd);
      *(byte *)puVar46 = (byte)*puVar46 + 1;
      bVar4 = *pbVar7;
      bVar5 = (byte)pbVar7;
      *pbVar7 = *pbVar7 + bVar5;
      pcVar10 = pcVar10 + ((-1 - *(int *)((int)puVar47 + 0x42)) - (uint)CARRY1(bVar4,bVar5));
      *pbVar7 = *pbVar7 + bVar5;
      bVar4 = (byte)puVar45 | (byte)((uint)pbVar7 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar7;
      uVar8 = *puVar32;
      pcVar16 = (char *)(((uint)pbVar7 | 0x11) + 0x511072c);
      puVar22 = puVar38 + 4;
      out(*puVar46,uVar29);
      puVar32 = (uint *)((int)puVar32 + 1);
      *pcVar16 = *pcVar16 + (char)pcVar16;
      bVar5 = (byte)((uint)pcVar16 >> 8);
      puVar45 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar45 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar45 >> 8) | (byte)uVar8,
                                                          bVar4)) >> 8),bVar4 | bVar5);
      uVar18 = (undefined3)((uint)pcVar16 >> 8);
      bVar4 = (char)pcVar16 - *pcVar16;
      pcVar16 = (char *)CONCAT31(uVar18,bVar4);
      *pcVar16 = *pcVar16 + bVar4;
      *(int *)((int)pcVar16 * 2) = (int)(*(int *)((int)pcVar16 * 2) + (int)puVar45);
      *(byte *)puVar32 = *(byte *)puVar32 + bVar4;
      *pcVar10 = *pcVar10 + bVar5;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar8 = CONCAT31(uVar18,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar8;
      pbVar7 = (byte *)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar5 + in_AF,bVar4));
      *(byte *)puVar22 = (byte)*puVar22 + bVar25;
      *pbVar7 = *pbVar7 + bVar4;
      *pbVar7 = *pbVar7 + bVar4;
      bVar48 = CARRY1(bVar4,*pbVar7);
      puVar46 = (uint *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar4 + *pbVar7);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar45 = (byte)*puVar45 - (char)puVar32;
  }
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
  bVar48 = false;
  piVar15 = (int *)CONCAT22(uVar30,CONCAT11(bVar4 | (byte)*puVar32,bVar25));
code_r0x00404d9a:
  do {
    puVar38 = puVar32;
    *puVar46 = (*puVar46 - (int)puVar46) - (uint)bVar48;
    bVar4 = (byte)((uint)piVar15 >> 8);
    uVar30 = (undefined2)((uint)piVar15 >> 0x10);
    bVar25 = (byte)piVar15;
    bVar5 = bVar4 + (byte)iRam00000c00;
    pbVar7 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *(byte *)puVar38 = (byte)*puVar38 + bVar25;
    puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 - (byte)*puVar22);
    bVar4 = *pbVar7;
    puVar46 = (uint *)(pbVar7 + (uint)CARRY1(bVar5,*pbVar7) + *(int *)pbVar7);
    *(byte *)puVar38 = (byte)*puVar38 + bVar25;
    cVar35 = ((bVar5 + bVar4) - (byte)*puVar38) + (byte)*puVar46;
    pcVar16 = (char *)CONCAT22(uVar30,CONCAT11(cVar35,bVar25));
    puVar32 = puVar47 + 1;
    uVar8 = in((short)puVar38);
    *puVar47 = uVar8;
    cVar26 = (char)puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + cVar26;
    uVar18 = (undefined3)((uint)puVar38 >> 8);
    bVar5 = (byte)puVar38 | (byte)*puVar22;
    pcVar23 = (char *)CONCAT31(uVar18,bVar5);
    *pcVar16 = *pcVar16 + '\x01';
    bVar4 = (cVar35 - *pcVar23) + (byte)*puVar46;
    pcVar16 = (char *)CONCAT22(uVar30,CONCAT11(bVar4,bVar25));
    puVar47 = puVar47 + 2;
    uVar8 = in((short)pcVar23);
    *puVar32 = uVar8;
    *(byte *)puVar46 = (byte)*puVar46 + cVar26;
    bVar5 = bVar5 | (byte)*puVar22;
    puVar32 = (uint *)CONCAT31(uVar18,bVar5);
    *pcVar16 = *pcVar16 + '\x01';
    bVar48 = bVar25 < *(byte *)((int)puVar32 + 2);
    cVar35 = bVar25 - *(byte *)((int)puVar32 + 2);
    piVar15 = (int *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar35);
  } while ((POPCOUNT(cVar35) & 1U) != 0);
  *(byte *)puVar46 = (byte)*puVar46 + cVar26;
  bVar25 = cVar26 + 0x7b;
  pbVar7 = (byte *)CONCAT31((int3)((uint)puVar46 >> 8),bVar25);
  *(byte *)((int)puVar45 + (int)pbVar7) = *(byte *)((int)puVar45 + (int)pbVar7) + bVar25;
  puVar46 = puVar22 + 1;
  uVar29 = SUB42(puVar32,0);
  out(*puVar22,uVar29);
  pbVar14 = (byte *)((int)puVar45 + -1);
  *pbVar7 = *pbVar7 + bVar25;
  bVar4 = bVar4 | (byte)*puVar32;
  piVar15 = (int *)CONCAT22(uVar30,CONCAT11(bVar4,cVar35));
  *pbVar7 = *pbVar7 + bVar25;
  *pbVar14 = *pbVar14 + bVar5;
  *pbVar14 = *pbVar14 ^ bVar25;
  *(byte *)puVar32 = (byte)*puVar32 + bVar4;
  *pbVar7 = *pbVar7 + bVar25;
  do {
    bVar27 = (byte)((uint)piVar15 >> 8);
    *(byte *)puVar47 = (byte)*puVar47 + bVar27;
    bVar4 = *pbVar7;
    bVar25 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar25;
    *(byte **)((int)puVar45 + 0x17) =
         (byte *)((int)puVar46 + (uint)CARRY1(bVar4,bVar25) + *(int *)((int)puVar45 + 0x17));
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    uVar19 = (undefined3)((uint)pbVar7 >> 8);
    bVar25 = bVar25 | (byte)*puVar46;
    puVar47 = (uint *)((int)puVar47 + *(int *)(pcVar10 + -0x34));
    *(char *)CONCAT31(uVar19,bVar25) = *(char *)CONCAT31(uVar19,bVar25) + bVar25;
    bVar4 = bVar25 + 2;
    cVar26 = (char)((uint)puVar38 >> 8);
    bVar28 = (byte)piVar15;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar7 = (byte *)CONCAT31(uVar19,bVar25 + 0x15 + (0xfd < bVar25));
      if (0xec < bVar4 || CARRY1(bVar25 + 0x15,0xfd < bVar25)) {
        *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      }
code_r0x00404e60:
      pcVar10 = pcVar10 + -*puVar32;
      bVar4 = *pbVar7;
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      pbVar33 = (byte *)((int)puVar46 + (-(uint)CARRY1(bVar4,(byte)pbVar7) - *(int *)pbVar7));
      pbVar7 = pbVar7 + *(int *)pbVar7;
      puStack_28 = (uint *)CONCAT22(puStack_28._2_2_,in_DS);
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      *(char *)piVar15 = (char)*piVar15 + cVar26;
      bVar4 = *pbVar7;
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      *(byte **)(pbVar14 + (int)puVar32) =
           (byte *)((int)puVar32 +
                   (uint)CARRY1(bVar4,(byte)pbVar7) + *(int *)(pbVar14 + (int)puVar32));
      pbVar7 = pbVar7 + 0x73061314;
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      uVar19 = (undefined3)((uint)piVar15 >> 8);
      bVar28 = bVar28 | (byte)*puVar32;
      pcVar23 = (char *)CONCAT31(uVar19,bVar28);
      *pbVar7 = *pbVar7 + (char)pbVar7;
      cVar26 = (char)pbVar7 + 'o';
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar7 >> 8),cVar26);
      *pcVar16 = *pcVar16 + cVar26;
      out(*(undefined4 *)pbVar33,uVar29);
      uVar8 = *puVar32;
      *(byte *)puVar32 = (byte)*puVar32 + bVar28;
      pcVar16 = pcVar16 + (uint)CARRY1((byte)uVar8,bVar28) + *puVar47;
      *pcVar16 = *pcVar16 + (char)pcVar16;
      *pcVar23 = *pcVar23 + bVar5;
      puVar46 = (uint *)(pbVar33 + 8);
      out(*(undefined4 *)(pbVar33 + 4),uVar29);
      *(byte *)puVar32 = (byte)*puVar32 + bVar28;
      piVar15 = (int *)((uint)pcVar16 | *puVar47);
      pcVar23[0x390a0000] = pcVar23[0x390a0000] - bVar27;
      pbVar14 = (byte *)0x7000000;
      *(byte *)puVar47 = (byte)*puVar47 - bVar27;
      *piVar15 = *piVar15 + (int)piVar15;
      puVar22 = (uint *)CONCAT31(uVar19,bVar28 | *(byte *)((int)piVar15 + (int)pcVar23));
      *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) - bVar27;
      cRam07000000 = cRam07000000 + bVar27;
      piVar15 = (int *)((uint)piVar15 | 0x777b02);
      pbVar7 = (byte *)((int)puVar47 + (int)pcVar10 * 2);
      bVar48 = SCARRY1(*pbVar7,(char)piVar15);
      *pbVar7 = *pbVar7 + (char)piVar15;
      bVar4 = *pbVar7;
      *(char *)piVar15 = (char)*piVar15;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar19,bVar4) = *(char *)CONCAT31(uVar19,bVar4) + bVar4;
    bVar25 = bVar25 + 0x71;
    pbVar7 = (byte *)CONCAT31(uVar19,bVar25);
    *pbVar7 = *pbVar7;
    *(byte *)puVar46 = (byte)*puVar46 + 1;
    *piVar15 = (*piVar15 - (int)pbVar7) - (uint)(0x90 < bVar4);
    uVar8 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar25;
    if (!CARRY1((byte)uVar8,bVar25)) goto code_r0x00404e60;
    *pbVar7 = *pbVar7 + bVar25;
    uVar30 = (undefined2)((uint)piVar15 >> 0x10);
    bVar27 = bVar27 | *pbVar7;
    pbVar7 = pbVar7 + -*(int *)pbVar7;
    *pbVar14 = *pbVar14 + bVar27;
    cVar35 = bVar28 - *(byte *)((int)puVar32 + 2);
    piVar15 = (int *)CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar27,bVar28)) >> 8),cVar35);
  } while ((POPCOUNT(cVar35) & 1U) != 0);
  cVar36 = (char)pbVar7;
  *pbVar7 = *pbVar7 + cVar36;
  uVar19 = (undefined3)((uint)pbVar7 >> 8);
  pcVar16 = (char *)CONCAT31(uVar19,cVar36 + '{');
  out(*puVar46,uVar29);
  *pcVar16 = *pcVar16 + cVar36 + '{';
  bVar25 = cVar36 + 0x7e;
  pbVar7 = (byte *)CONCAT31(uVar19,bVar25);
  puVar46 = puVar22 + 3;
  out(puVar22[2],uVar29);
  pbVar14 = (byte *)((int)puVar45 + -2);
  *pbVar7 = *pbVar7 + bVar25;
  bVar27 = bVar27 | (byte)*puVar32;
  puVar22 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27,cVar35));
  *pbVar7 = *pbVar7 + bVar25;
  *pbVar14 = *pbVar14 + bVar5;
  *pbVar14 = *pbVar14 ^ bVar25;
  *(byte *)puVar32 = (byte)*puVar32 + bVar27;
  *pbVar7 = *pbVar7 + bVar25;
  *pbVar7 = *pbVar7 + cVar26;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar25;
  puVar45[6] = (uint)((int)puVar46 + (uint)CARRY1(bVar4,bVar25) + puVar45[6]);
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar25 = bVar25 | (byte)*puVar46;
  puVar47 = (uint *)((int)puVar47 + *(int *)(pcVar10 + -0x33));
  *(char *)CONCAT31(uVar19,bVar25) = *(char *)CONCAT31(uVar19,bVar25) + bVar25;
  bVar48 = SCARRY1(bVar25,'\x02');
  bVar4 = bVar25 + 2;
  piVar15 = (int *)CONCAT31(uVar19,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    return CONCAT31(uVar19,bVar25 + 0x71);
  }
code_r0x00404ebf:
  bVar25 = (byte)piVar15;
  uVar19 = (undefined3)((uint)piVar15 >> 8);
  if (bVar4 != 0 && bVar48 == (char)bVar4 < '\0') {
    *(byte *)piVar15 = (char)*piVar15 + bVar25;
    puVar46[(int)puVar47 * 2] =
         (uint)((int)puVar32 + (uint)(0xd2 < bVar25) + puVar46[(int)puVar47 * 2]);
    return CONCAT31(uVar19,bVar25 + 0x2d);
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar4 = *pbVar14;
  *puVar46 = (uint)(*puVar46 + (int)piVar15);
  bVar28 = (byte)((uint)puVar22 >> 8);
  *(byte *)piVar15 = (char)*piVar15 - bVar28;
  *(byte *)piVar15 = (char)*piVar15 + bVar25;
  pbVar7 = (byte *)(CONCAT31(uVar18,bVar5 | bVar4) - *(int *)pbVar14);
  puVar32 = (uint *)CONCAT31(uVar19,bVar25 + 6);
  *(uint *)(pbVar14 + (int)puVar46 * 2) =
       (int)puVar32 + (uint)(0xf9 < bVar25) + *(int *)(pbVar14 + (int)puVar46 * 2);
  *(byte *)puVar22 = (byte)*puVar22 ^ bVar25 + 6;
  bVar25 = (byte)puVar22;
  *pbVar7 = *pbVar7 + bVar25;
  puVar45 = puVar46 + 1;
  uVar30 = SUB42(pbVar7,0);
  out(*puVar46,uVar30);
  *puVar22 = *puVar22 ^ (uint)puVar32;
  *pbVar7 = *pbVar7 + bVar25;
  puVar38 = (uint *)(pbVar14 + -*(int *)pbVar14);
  *(uint *)((int)puVar47 + 0x31) = *(uint *)((int)puVar47 + 0x31) | (uint)pcVar10;
  *puVar32 = *puVar32 + (int)puVar32;
  puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(bVar28 | (byte)*puVar38,bVar25)
                            );
  *(byte **)(pbVar7 + 0x6e) = (byte *)(*(int *)(pbVar7 + 0x6e) + (int)puVar45);
  piVar15 = (int *)((uint)puVar32 | *puVar32);
  bVar5 = (byte)puVar38;
  *(byte *)puVar47 = (byte)*puVar47 - bVar5;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar25;
  if (CARRY1(bVar4,bVar25)) {
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    bVar4 = pbVar7[0x11];
    uVar29 = (undefined2)((uint)puVar38 >> 0x10);
    out(*puVar45,uVar30);
    puVar22 = (uint *)((int)puVar22 + 1);
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    bVar31 = (byte)((uint)puVar38 >> 8) | bVar4 | *pbVar7;
    pcVar16 = (char *)((int)piVar15 + -0x21000001);
    bVar4 = (byte)pcVar16 | 0x11;
    uVar18 = (undefined3)((uint)pcVar16 >> 8);
    cVar26 = bVar4 - 7;
    pcVar23 = (char *)CONCAT31(uVar18,cVar26);
    *puVar47 = (uint)(pcVar23 + (uint)(bVar4 < 7) + *puVar47);
    puVar45 = puVar46 + 3;
    out(puVar46[2],uVar30);
    pbVar7 = pbVar7 + 1;
    *pcVar23 = *pcVar23 + cVar26;
    bVar28 = (byte)((uint)pcVar16 >> 8);
    bVar27 = bVar5 | bVar28;
    bVar25 = cVar26 - *pcVar23;
    bVar4 = *(byte *)puVar22;
    *(byte *)puVar22 = *(byte *)puVar22 + bVar25;
    *(char *)CONCAT31(uVar18,bVar25) =
         *(char *)CONCAT31(uVar18,bVar25) + bVar25 + CARRY1(bVar4,bVar25);
    *pbVar7 = *pbVar7 + bVar25;
    *(byte *)puVar45 = (byte)*puVar45 + bVar27;
    bVar4 = (byte)((uint)pbVar7 >> 8);
    *(byte *)puVar22 = *(byte *)puVar22 + bVar25 + CARRY1((byte)pbVar7,bVar4);
    piVar15 = (int *)CONCAT31(uVar18,bVar25);
    *(byte *)piVar15 = (char)*piVar15 + bVar25;
    pbVar7 = (byte *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                              CONCAT11(bVar4 + bVar28,(byte)pbVar7 + bVar4));
    puVar38 = (uint *)CONCAT22(uVar29,CONCAT11(bVar31 + *(char *)(CONCAT31((int3)(CONCAT22(uVar29,
                                                  CONCAT11(bVar31,bVar5)) >> 8),bVar27) + 0x76),
                                               bVar27));
    uStack_1c = puStack_28._0_2_;
code_r0x00404fa4:
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    pcVar16 = (char *)(CONCAT31((int3)((uint)piVar15 >> 8),(char)piVar15 + '(') ^ *puVar22);
    cVar36 = (char)puVar22;
    *pbVar7 = *pbVar7 + cVar36;
    uVar30 = (undefined2)((uint)puVar38 >> 0x10);
    cVar37 = (char)puVar38;
    cVar39 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x75);
    *pcVar16 = *pcVar16 + (char)pcVar16;
    cVar26 = (char)pcVar16 + 'o';
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar26);
    *pcVar16 = *pcVar16 + cVar26;
    cVar40 = (char)((uint)puVar22 >> 8);
    *pcVar10 = *pcVar10 - cVar40;
    pbVar7[1] = pbVar7[1] + cVar36;
    pcVar16 = pcVar16 + -0x757b021b;
    cVar26 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar26;
    uVar18 = (undefined3)((uint)pcVar16 >> 8);
    cVar35 = cVar26 + 'o';
    pcVar16 = (char *)CONCAT31(uVar18,cVar35);
    pbVar33 = pbVar7 + 2;
    *pcVar16 = *pcVar16 + cVar35;
    iVar13 = CONCAT22(uVar30,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar39,cVar37)) +
                                                        0x76),cVar37));
    *pcVar16 = *pcVar16 + cVar35;
    pcVar16 = (char *)CONCAT31(uVar18,cVar26 + -0x22);
    puVar32 = (uint *)((int)puVar47 + 1);
    *(byte *)puVar47 = (byte)*puVar45;
    *pcVar16 = *pcVar16 + cVar26 + -0x22;
    *(byte *)((int)puVar22 + (int)pcVar16) =
         *(byte *)((int)puVar22 + (int)pcVar16) - (char)((uint)pbVar33 >> 8);
    *pbVar33 = *pbVar33 + cVar36;
    bVar25 = cVar40 - pbVar7[4];
    pbVar14 = (byte *)((int)puVar45 + 5);
    out(*(undefined4 *)((int)puVar45 + 1),(short)pbVar33);
    puVar45 = (uint *)((uint)(pcVar16 + *(int *)(pcVar16 + iVar13)) ^ 0x280a0001);
    *(byte *)puVar45 = (byte)*puVar45 << 1 | (char)(byte)*puVar45 < '\0';
    *pbVar14 = *pbVar14 + (char)puVar45;
    pbVar14 = pbVar14 + *(int *)(pbVar7 + -0x5c);
    pbVar7 = (byte *)((uint)puVar45 | *puVar45);
    *pbVar14 = *pbVar14 + (char)pbVar7;
    puVar38 = (uint *)CONCAT31((int3)((uint)iVar13 >> 8),cVar37 - (char)pbVar33);
    bVar4 = *pbVar7;
    puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(bVar25 + *pbVar7,cVar36));
    iVar13 = *(int *)pbVar7;
    *pbVar33 = *pbVar33 + cVar36;
    cVar26 = (char)(pbVar7 + (uint)CARRY1(bVar25,bVar4) + iVar13) + 'r';
    puVar46 = (uint *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar25,bVar4) + iVar13) >> 8),
                               cVar26);
    pbVar7 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),CONCAT11(10,(char)pbVar33));
    *(char *)(puVar46 + 10) = (char)puVar46[10] + '\n';
    *pbVar14 = *pbVar14 + cVar26;
    puVar45 = (uint *)(pbVar14 + *(int *)(pbVar7 + -0x5e));
    uVar8 = *puVar46;
    cVar26 = (char)((uint)puVar46 | uVar8);
    *(byte *)puVar45 = (byte)*puVar45 + cVar26;
    uVar18 = (undefined3)(((uint)puVar46 | uVar8) >> 8);
    cVar35 = cVar26 + (byte)*puVar38;
    puVar46 = (uint *)CONCAT31(uVar18,cVar35);
    if (SCARRY1(cVar26,(byte)*puVar38) == cVar35 < '\0') goto code_r0x00405090;
    *(byte *)puVar46 = (byte)*puVar46 + cVar35;
    piVar15 = (int *)CONCAT31(uVar18,cVar35 + '\x02');
    puVar47 = puVar32;
  }
  else {
    out(2,(char)piVar15);
    if ((POPCOUNT(*pbVar7) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar18 = (undefined3)((uint)piVar15 >> 8);
  cVar26 = (char)piVar15 + '}';
  pbVar14 = (byte *)CONCAT31(uVar18,cVar26);
  pbVar7[(int)pbVar14] = pbVar7[(int)pbVar14] + cVar26;
  pbVar7[0x280a0000] = pbVar7[0x280a0000] - (char)((uint)piVar15 >> 8);
  bVar4 = (byte)puVar22 & 7;
  *pbVar14 = *pbVar14 << bVar4 | *pbVar14 >> 8 - bVar4;
  *(byte *)puVar45 = (byte)*puVar45 + cVar26;
  cVar36 = (char)puVar38 - (byte)*puVar45;
  uVar30 = (undefined2)((uint)puVar38 >> 0x10);
  cVar40 = (char)((uint)puVar38 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar38 >> 8),cVar36) + 0x7c);
  pcVar16 = (char *)CONCAT22(uVar30,CONCAT11(cVar40,cVar36));
  *pbVar14 = *pbVar14 + cVar26;
  bVar25 = (char)piVar15 + 0xa7U & *pbVar7;
  puVar32 = (uint *)((int)puVar47 + *(int *)(pcVar10 + 0x7c));
  *(char *)CONCAT31(uVar18,bVar25) = *(char *)CONCAT31(uVar18,bVar25) + bVar25;
  bVar25 = bVar25 + 0x2a;
  pbVar14 = (byte *)CONCAT31(uVar18,bVar25);
  *pbVar14 = *pbVar14 + bVar25;
  *pcVar16 = *pcVar16 + cVar36;
  *pbVar7 = *pbVar7 ^ bVar25;
  *pcVar16 = *pcVar16 + bVar25;
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar25;
  cVar26 = (bVar25 - *pbVar14) - CARRY1(bVar4,bVar25);
  *(byte *)puVar22 = (byte)*puVar22 + (byte)pbVar7;
  cVar40 = cVar40 + pcVar16[0x7b];
  *(char *)CONCAT31(uVar18,cVar26) = *(char *)CONCAT31(uVar18,cVar26) + cVar26;
  pcVar16 = (char *)CONCAT31(uVar18,cVar26 + 'o');
  *pcVar16 = *pcVar16 + cVar26 + 'o';
  pcVar16 = pcVar16 + 0x2ed7fde6;
  cVar35 = (char)pcVar16;
  *pcVar16 = *pcVar16 + cVar35;
  cVar26 = *(char *)(CONCAT22(uVar30,CONCAT11(cVar40,cVar36)) + 0x7b);
  *pcVar16 = *pcVar16 + cVar35;
  piVar15 = (int *)(CONCAT31((int3)((uint)pcVar16 >> 8),cVar35 + 'o') + 0x6f060000);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar19 = (undefined3)((uint)pbVar7 >> 8);
  bVar25 = (byte)pbVar7 | (byte)*puVar45;
  pbVar33 = (byte *)CONCAT31(uVar19,bVar25);
  uVar8 = CONCAT22(uVar30,CONCAT11(cVar40 + cVar26,cVar36)) | (uint)puVar45;
  uVar18 = (undefined3)((uint)piVar15 >> 8);
  bVar4 = (byte)piVar15 | *pbVar33;
  pbVar14 = (byte *)CONCAT31(uVar18,bVar4);
  cVar26 = (byte)puVar22 - bVar25;
  puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),cVar26);
  *pbVar14 = *pbVar14 + bVar4;
  puVar46 = puVar45 + 1;
  out(*puVar45,(short)pbVar33);
  *pbVar14 = bVar4;
  *pbVar33 = *pbVar33 + cVar26;
  puVar45 = puVar45 + 2;
  out(*puVar46,(short)pbVar33);
  *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
  puVar38 = (uint *)(CONCAT31((int3)(uVar8 >> 8),(char)uVar8 - (char)((uint)pbVar7 >> 8)) |
                    (uint)puVar45);
  pbVar7 = (byte *)CONCAT31(uVar19,(bVar25 | (byte)*puVar45) + (byte)*puVar32);
  cVar26 = bVar4 - (byte)*puVar32;
  puVar46 = (uint *)CONCAT31(uVar18,cVar26 - *(char *)CONCAT31(uVar18,cVar26));
code_r0x00405090:
  *puVar46 = (uint)(pbVar7 + *puVar46);
  cVar26 = (char)puVar46;
  *(byte *)puVar46 = (byte)*puVar46 + cVar26;
  *(byte *)puVar46 = (byte)*puVar46 + cVar26;
  *(byte *)puVar46 = (byte)*puVar46 + cVar26;
  *puVar22 = *puVar22 - (int)pcVar10;
  uVar8 = *puVar45;
  bVar4 = (byte)pbVar7;
  *(byte *)puVar45 = (byte)*puVar45 + bVar4;
  *(byte *)puVar46 = (byte)*puVar46 + cVar26 + CARRY1((byte)uVar8,bVar4);
  *(byte *)puVar22 = (byte)*puVar22 + cVar26;
  uVar8 = *puVar38;
  *(byte *)puVar38 = (byte)*puVar38 + 0x72;
  *(byte *)puVar38 = (byte)*puVar38;
  cVar26 = (char)((uint)pbVar7 >> 8);
  if (SCARRY1((byte)uVar8,'r')) {
    puVar45 = (uint *)((int)puVar45 + *(int *)(pbVar7 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar45 = (byte)*puVar45 + (char)puVar46;
      uVar18 = (undefined3)((uint)puVar46 >> 8);
      cVar35 = (char)puVar46 + (byte)*puVar38;
      pcVar16 = (char *)CONCAT31(uVar18,cVar35);
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11((char)((uint)puVar38 >> 8) +
                                          *(byte *)((int)puVar38 + 0x7b),(char)puVar38));
      *pcVar16 = *pcVar16 + cVar35;
      in_AF = 9 < (cVar35 + 0x6fU & 0xf) | in_AF;
      uVar8 = CONCAT31(uVar18,cVar35 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar8;
      piVar15 = (int *)CONCAT22((short)(uVar8 >> 0x10),
                                CONCAT11((char)((uint)puVar46 >> 8) + in_AF,bVar5));
      *piVar15 = *piVar15 + (int)piVar15;
      uVar18 = (undefined3)((uint)piVar15 >> 8);
      bVar5 = bVar5 | *(byte *)(piVar15 + 0x354a);
      bVar5 = bVar5 - *(char *)CONCAT31(uVar18,bVar5);
      pbVar14 = (byte *)CONCAT31(uVar18,bVar5);
      bVar25 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar5;
      puVar45 = (uint *)((int)puVar45 + (-(uint)CARRY1(bVar25,bVar5) - *(int *)pbVar14));
      puVar46 = (uint *)(pbVar14 + 0xfc00);
      *pbVar7 = *pbVar7 + cVar26;
      uVar8 = *puVar46;
      bVar25 = (byte)puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + bVar25;
      uVar11 = (uint)CARRY1((byte)uVar8,bVar25);
      uVar8 = *puVar38;
      uVar2 = *puVar38;
      *puVar38 = (uint)((byte *)(uVar2 + (int)puVar46) + uVar11);
      if (!CARRY4(uVar8,(uint)puVar46) && !CARRY4(uVar2 + (int)puVar46,uVar11)) break;
      *(byte *)puVar46 = (byte)*puVar46 + bVar25;
    }
  }
  uVar8 = (uint)puVar46 | *puVar46;
  uVar30 = SUB42(pbVar7,0);
  *(byte *)puVar45 = (byte)*puVar45 + (char)uVar8;
  piVar15 = (int *)(uVar8 + 0xc1872);
  if (SCARRY4(uVar8,0xc1872)) {
    cVar35 = (char)piVar15;
    *(char *)piVar15 = *(char *)piVar15 + cVar35;
    *pbVar7 = *pbVar7 + cVar35;
    *(char *)piVar15 = *(char *)piVar15 + cVar35;
    *(byte *)puVar38 = (byte)*puVar38 + (char)puVar22;
    *(char *)piVar15 = *(char *)piVar15 + cVar35;
    *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) + bVar4;
    puVar46 = puVar45;
    goto code_r0x00405117;
  }
  do {
    uVar8 = *puVar45;
    bVar4 = (byte)piVar15;
    *(byte *)puVar45 = (byte)*puVar45 + bVar4;
    if (CARRY1((byte)uVar8,bVar4)) {
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      uVar18 = (undefined3)((uint)puVar22 >> 8);
      bVar25 = (byte)puVar22 | bRam396f1609;
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      puVar22 = (uint *)CONCAT31(uVar18,bVar25 | *(byte *)CONCAT31(uVar18,bVar25));
      uVar18 = (undefined3)((uint)piVar15 >> 8);
      bVar4 = bVar4 | *pbVar7;
      pcVar16 = (char *)CONCAT31(uVar18,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar46 = puVar45 + 1;
        out(*puVar45,uVar30);
        uVar8 = CONCAT22((short)((uint)piVar15 >> 0x10),(ushort)bVar4);
        *(byte *)puVar46 = (byte)*puVar46 + bVar4;
        pcVar16 = (char *)(uVar8 | 8);
        cVar35 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x7a);
        puVar47 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(cVar35,(char)puVar38));
        *pcVar16 = *pcVar16 + (char)pcVar16;
        cVar26 = (char)pcVar16 + 'o';
        piVar15 = (int *)CONCAT31((int3)(uVar8 >> 8),cVar26);
        *(char *)piVar15 = (char)*piVar15 + cVar26;
        *(byte *)puVar22 = (byte)*puVar22 + 1;
        puVar45 = puVar45 + 2;
        out(*puVar46,uVar30);
        pbVar7 = (byte *)((uint)pbVar7 ^ uRam08122c04);
        iVar13 = CONCAT31((int3)((uint)(*piVar15 * 0x17070600) >> 8),2);
        *(char *)(iVar13 * 2) = *(char *)(iVar13 * 2) - cVar35;
        do {
          bVar4 = (byte)iVar13;
          *(byte *)puVar45 = (byte)*puVar45 + bVar4;
          bVar48 = CARRY1(bVar4,(byte)*puVar47);
          uVar18 = (undefined3)((uint)iVar13 >> 8);
          cVar26 = bVar4 + (byte)*puVar47;
          pbVar14 = (byte *)CONCAT31(uVar18,cVar26);
          uVar30 = in_DS;
          uVar29 = uStack_68;
          if (SCARRY1(bVar4,(byte)*puVar47) == cVar26 < '\0') goto GenerateStatusText;
          *pbVar14 = *pbVar14 + cVar26;
          uVar8 = CONCAT31(uVar18,cVar26 + '\'') + 0x1ebd9f3;
          uStack_6c = (undefined1)uStack_1c;
          uStack_6b = (undefined1)((ushort)uStack_1c >> 8);
          piVar15 = (int *)(uVar8 ^ 0x73060000);
          puVar22 = (uint *)((int)puVar22 + 1);
          *piVar15 = (int)(*piVar15 + (int)piVar15);
          puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                     CONCAT11((byte)((uint)puVar47 >> 8) | pcVar10[0x7e],
                                              (char)puVar47));
          cVar26 = (char)uVar8;
          *(char *)piVar15 = (char)*piVar15 + cVar26;
          uVar8 = CONCAT31((int3)((uint)piVar15 >> 8),cVar26 + '\x02');
          bVar48 = 0xd9f2d2da < uVar8;
          iVar13 = uVar8 + 0x260d2d25;
          pcVar16 = pcVar10;
          do {
            uVar18 = (undefined3)((uint)iVar13 >> 8);
            bVar25 = (char)iVar13 + -2 + bVar48;
            pbVar14 = (byte *)CONCAT31(uVar18,bVar25);
            bVar4 = *pbVar14;
            *pbVar14 = *pbVar14 + bVar25;
            bVar5 = (byte)puVar47;
            uStack_68 = uStack_1c;
            if (CARRY1(bVar4,bVar25)) {
              *pbVar14 = *pbVar14 + bVar25;
              puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                         CONCAT11((byte)((uint)puVar47 >> 8) | pcVar16[0x7f],bVar5))
              ;
              *pbVar14 = *pbVar14 + bVar25;
              pbVar14 = (byte *)CONCAT31(uVar18,bVar25 + 0x2a);
              *pbVar14 = *pbVar14 + bVar25 + 0x2a;
              *(byte *)puVar47 = (byte)*puVar47 + (char)pbVar7;
              uVar30 = in_DS;
              while( true ) {
                in_DS = uVar30;
                bVar25 = (byte)pbVar14;
                *pbVar7 = *pbVar7 ^ bVar25;
                *pbVar7 = *pbVar7 + (char)puVar47;
                *pbVar14 = *pbVar14 + bVar25;
                *(byte *)puVar47 = (byte)*puVar47 + (char)((uint)pbVar7 >> 8);
                bVar4 = *pbVar14;
                *pbVar14 = *pbVar14 + bVar25;
                uVar8 = *puVar47;
                uVar2 = *puVar47;
                *puVar47 = (uint)(pbVar14 + uVar2 + CARRY1(bVar4,bVar25));
                uVar18 = (undefined3)((uint)pbVar14 >> 8);
                if (CARRY4(uVar8,(uint)pbVar14) ||
                    CARRY4((uint)(pbVar14 + uVar2),(uint)CARRY1(bVar4,bVar25))) break;
                *(byte *)puVar45 = (byte)*puVar45 + bVar25;
                pcVar23 = (char *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                           CONCAT11((char)((uint)puVar22 >> 8) + *pbVar14,
                                                    (char)puVar22));
                *(byte *)puVar45 = (byte)*puVar45 + bVar25;
                piVar15 = (int *)CONCAT31(uVar18,bVar25 | (byte)*puVar47);
                puVar46 = puVar45;
                while( true ) {
                  puVar45 = puVar46 + 1;
                  out(*puVar46,(short)pbVar7);
                  pbVar7 = pbVar7 + 1;
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  bVar5 = (byte)((uint)pcVar23 >> 8) | *pbVar7;
                  uVar18 = (undefined3)((uint)piVar15 >> 8);
                  bVar25 = (byte)piVar15 ^ *pbVar7;
                  pcVar17 = (char *)CONCAT31(uVar18,bVar25);
                  cRam282b0000 = cRam282b0000 - bVar5;
                  *pcVar17 = *pcVar17 + bVar25;
                  pcVar10 = pcVar16 + -*(int *)pbVar7;
                  uStack_6c = (undefined1)in_DS;
                  uStack_6b = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar32 + 0x17);
                  *pcVar17 = *pcVar17 + bVar25;
                  puVar22 = (uint *)CONCAT22((short)((uint)pcVar23 >> 0x10),
                                             CONCAT11(bVar5 + bVar4 | *pbVar7,(char)pcVar23));
                  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
                  *(byte *)((int)pcVar17 * 2) = *(byte *)((int)pcVar17 * 2) ^ bVar25;
                  in_AF = 9 < (bVar25 & 0xf) | in_AF;
                  bVar25 = bVar25 + in_AF * -6;
                  pbVar14 = (byte *)CONCAT31(uVar18,bVar25 + (0x9f < bVar25 | in_AF * (bVar25 < 6))
                                                             * -0x60);
                  *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
                  *(char *)((int)pbVar14 * 2) =
                       *(char *)((int)pbVar14 * 2) + (char)((uint)pbVar7 >> 8);
                  bVar48 = CARRY1((byte)*puVar22,(byte)pbVar7);
                  *(byte *)puVar22 = (byte)*puVar22 + (byte)pbVar7;
                  uVar30 = in_DS;
                  uVar29 = uStack_1c;
GenerateStatusText:
                  in_DS = uVar29;
                  pcVar16 = pcVar10;
                  uStack_68 = in_DS;
                  if (!bVar48) break;
                  *pbVar14 = *pbVar14 + (char)pbVar14;
                  iVar13 = CONCAT31((int3)((uint)puVar22 >> 8),(byte)puVar22 | *pbVar7);
                  uVar30 = (undefined2)((uint)puVar47 >> 0x10);
                  cVar36 = (char)((uint)puVar47 >> 8) + *(byte *)((int)puVar47 + 0x7d);
                  *pbVar14 = *pbVar14 + (char)pbVar14;
                  *(byte *)puVar32 = (byte)*puVar32 - (char)((uint)puVar22 >> 8);
                  iVar13 = iVar13 - *(int *)(iVar13 + 0xb0a0000);
                  cVar26 = *(char *)(CONCAT22(uVar30,CONCAT11(cVar36,(char)puVar47)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar45,(short)pbVar7);
                  pbVar7 = (byte *)CONCAT22(uStack_6a,CONCAT11(uStack_6b,uStack_6c));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar46 = puVar45 + 2;
                  out(puVar45[1],CONCAT11(uStack_6b,uStack_6c));
                  pcVar16 = pcVar10 + 1;
                  cVar35 = (char)iVar13;
                  pcVar23 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),
                                             CONCAT11((byte)((uint)iVar13 >> 8) |
                                                      *(byte *)((int)puVar32 + 0x46),cVar35));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_1c = CONCAT11(uStack_6b,uStack_6c);
                  uVar18 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar46,0xf0)) >> 8);
                  piVar15 = (int *)CONCAT31(uVar18,0x5f);
                  puVar32 = (uint *)((int)puVar32 + 1);
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  puVar47 = (uint *)CONCAT22(uVar30,CONCAT11(cVar36 + cVar26 | (byte)puVar45[-0x1e],
                                                             (char)puVar47));
                  *(char *)piVar15 = (char)*piVar15 + '_';
                  puVar45 = (uint *)CONCAT31(uVar18,0x8c);
                  puVar46[(int)puVar32 * 2] = (uint)(pbVar7 + puVar46[(int)puVar32 * 2]);
                  uVar8 = *puVar46;
                  *(byte *)puVar46 = (byte)*puVar46 + 0x8c;
                  if ((byte)uVar8 < 0x74) {
                    *pbVar7 = *pbVar7 + cVar35;
                    *(byte *)puVar47 = (byte)*puVar47 >> 1;
                    *(char *)puVar45 = (char)*puVar45 + -0x74;
                    *puVar45 = (uint)(pcVar16 + *puVar45);
                    *puVar45 = *puVar45 << 1 | (uint)((int)*puVar45 < 0);
                    *pbVar7 = *pbVar7 + cVar35;
                    pcVar10[2] = pcVar10[2] - cVar35;
                    *pbVar7 = *pbVar7 + cVar35;
                    pbVar14 = (byte *)CONCAT31(uVar18,0x83);
                    puVar45 = puVar47;
                    goto code_r0x00405312;
                  }
                  *puVar45 = (uint)(*puVar45 + (int)puVar45);
                  piVar15 = (int *)(CONCAT31(uVar18,(byte)puVar45[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar45[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar15 = (int *)((int)piVar15 + *puVar46);
                }
              }
              *pbVar7 = *pbVar7 + bVar25;
              *(byte *)puVar47 = (byte)*puVar47 - (char)pbVar7;
              *pbVar14 = *pbVar14 + bVar25;
              pbVar14 = (byte *)CONCAT31(uVar18,bVar25 | (byte)*puVar47);
            }
            else {
              cVar26 = (char)puVar22;
              *pbVar7 = *pbVar7 + cVar26;
              *(byte **)pbVar14 = pbVar7 + *(int *)pbVar14;
              *pbVar14 = *pbVar14 + bVar25;
              bVar25 = bVar25 + *pbVar14;
              pbVar14 = (byte *)CONCAT31(uVar18,bVar25);
              if (-1 < (char)bVar25) {
                *(byte *)puVar47 = (byte)*puVar47 + bVar5;
                out(*puVar45,(short)pbVar7);
                pbVar7 = pbVar7 + 1;
                *pbVar14 = *pbVar14 + bVar25;
                puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),
                                           bVar5 | (byte)((uint)iVar13 >> 8));
                cVar35 = bVar25 - (byte)*puVar22;
                pcVar10 = (char *)CONCAT31(uVar18,cVar35);
                *pcVar10 = *pcVar10 + cVar35 + (bVar25 < (byte)*puVar22);
                *pbVar7 = *pbVar7 + cVar35;
                pcVar10 = (char *)((int)pcVar10 * 2 + 0x79);
                *pcVar10 = *pcVar10 + (char)((uint)pbVar7 >> 8);
                pbVar14 = (byte *)in((short)pbVar7);
                puVar45 = puVar45 + 1;
              }
              *(byte *)puVar45 = (byte)*puVar45 + cVar26;
              *pbVar14 = *pbVar14 + (char)pbVar14;
              *pbVar14 = *pbVar14 + (char)pbVar14;
              uStack_6c = (undefined1)in_DS;
              uStack_6b = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar14;
              bVar5 = (byte)((uint)puVar22 >> 8);
              bVar28 = bVar5 + *pbVar14;
              iVar13 = *(int *)pbVar14;
              *pbVar7 = *pbVar7 + cVar26;
              bVar25 = (char)(pbVar14 + (uint)CARRY1(bVar5,bVar4) + iVar13) - (byte)*puVar47;
              pbVar14 = (byte *)CONCAT31((int3)((uint)(pbVar14 + (uint)CARRY1(bVar5,bVar4) + iVar13)
                                               >> 8),bVar25);
              *(byte *)puVar47 = (byte)*puVar47 ^ bVar25;
              *pcVar16 = *pcVar16 + (char)puVar47;
              *pbVar14 = *pbVar14 + bVar25;
              *pbVar14 = *pbVar14 + bVar25;
              *pbVar14 = *pbVar14 + bVar25;
              puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                         CONCAT11(bVar28 + *pbVar14,cVar26));
              pbVar14 = pbVar14 + (uint)CARRY1(bVar28,*pbVar14) + *(int *)pbVar14;
              *pbVar7 = *pbVar7 + cVar26;
              puVar45 = (uint *)((int)puVar45 + *(int *)(pbVar7 + 0x3e));
            }
            *(byte *)puVar45 = (byte)*puVar45 + (char)pbVar14;
            cVar26 = (char)pbVar14 + 'r';
            puVar45 = (uint *)((int)puVar45 + -1);
            uVar8 = CONCAT31((int3)((uint)pbVar14 >> 8),cVar26);
            *(byte *)puVar45 = *(byte *)puVar45 + cVar26;
            bVar48 = 0xfff38f8d < uVar8;
            iVar13 = uVar8 + 0xc7072;
            pcVar10 = pcVar16;
          } while (SCARRY4(uVar8,0xc7072));
        } while( true );
      }
      *pcVar16 = *pcVar16 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar14 = (byte *)CONCAT31(uVar18,bVar4);
      bVar25 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar4;
      uVar18 = (undefined3)
               ((uint)(pbVar14 + (uint)CARRY1(bVar25,bVar4) + *(int *)((int)puVar22 + (int)pbVar7))
               >> 8);
      cVar35 = (char)(pbVar14 + (uint)CARRY1(bVar25,bVar4) + *(int *)((int)puVar22 + (int)pbVar7)) +
               'E';
      pcVar16 = (char *)CONCAT31(uVar18,cVar35);
      *pcVar16 = *pcVar16 + cVar35;
      cVar35 = cVar35 + *pcVar16;
      pcVar16 = (char *)CONCAT31(uVar18,cVar35);
      *pcVar16 = *pcVar16 + cVar35;
      puVar46 = (uint *)CONCAT31(uVar18,cVar35 + *pcVar16);
      *(char *)puVar46 = (char)*puVar46 + cVar35 + *pcVar16;
      pbVar14 = (byte *)((uint)puVar46 | *puVar46);
      bVar4 = *pbVar14;
      bVar25 = (byte)pbVar14;
      *pbVar14 = *pbVar14 + bVar25;
      piVar15 = (int *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar25 + CARRY1(bVar4,bVar25));
      puVar46 = puVar45;
code_r0x00405117:
      *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
      puVar38 = (uint *)((int)puVar38 - *puVar38);
      puVar45 = puVar46 + 1;
      out(*puVar46,uVar30);
    }
    *pbVar7 = *pbVar7 + (char)puVar22;
    bVar48 = puVar38 < (uint *)*piVar15;
    puVar38 = (uint *)((int)puVar38 - *piVar15);
    bVar4 = (byte)((uint)puVar22 >> 8);
    *(byte *)((int)puVar32 + 0x39) = (*(byte *)((int)puVar32 + 0x39) - bVar4) - bVar48;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    uVar8 = *puVar38;
    *(int *)((int)puVar32 + 0x39) = *(int *)((int)puVar32 + 0x39) - (int)pcVar10;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar8 | (byte)*puVar38,(char)puVar22));
    *(char *)(piVar15 + 10) = (char)piVar15[10] + cVar26;
  } while( true );
code_r0x004052ee:
  *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
  bVar4 = (char)piVar15 + 0x28;
  pbVar14 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),bVar4);
  *pbVar14 = *pbVar14 ^ bVar4;
  *(byte *)puVar47 = (byte)*puVar47 + (char)((uint)pcVar23 >> 8);
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + (byte)pcVar23;
  piVar15 = (int *)(((uint)pbVar14 | 0x1496f09) + *puVar32 + (uint)CARRY1(bVar4,(byte)pcVar23));
  puVar22 = puVar46 + 1;
  out(*puVar46,(short)pbVar7);
  pbVar33 = pbVar7 + -1;
  *piVar15 = *piVar15 + (int)piVar15;
  pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),(byte)pbVar33 | (byte)*puVar47);
  cVar26 = (char)piVar15 + '\x13';
  pbVar14 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),cVar26);
  puVar45 = puVar47;
  puVar46 = puVar22;
  if ((POPCOUNT(cVar26) & 1U) != 0) {
    *pbVar7 = *pbVar7 - (char)((uint)pbVar33 >> 8);
    *pbVar14 = *pbVar14 + cVar26;
code_r0x00405396:
    bVar4 = *pbVar14;
    bVar25 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar25;
    *puVar22 = (uint)(pbVar14 + (uint)CARRY1(bVar4,bVar25) + *puVar22);
    out(*puVar22,(short)pbVar7);
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    pcVar10 = (char *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                               CONCAT11((byte)((uint)pbVar14 >> 8) | (byte)puVar22[1],bVar25));
    *(char **)((int)puVar32 + -1) = pcVar10 + *(int *)((int)puVar32 + -1);
    out(puVar22[1],(short)pbVar7);
    *pcVar10 = *pcVar10 + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar14 = *pbVar14 + (char)pbVar14;
  piVar15 = (int *)CONCAT31((int3)((uint)pbVar14 >> 8),(char)pbVar14 + 'o');
  puVar47 = (uint *)((int)puVar45 + -1);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar18 = (undefined3)((uint)pbVar7 >> 8);
  piVar15 = (int *)((int)piVar15 + 0x1b7e);
  bVar5 = (byte)pbVar7 | *(byte *)puVar47 | *(byte *)puVar47;
  iRam04115f2c = iRam04115f2c + (int)piVar15;
  out(*puVar46,(short)CONCAT31(uVar18,bVar5));
  *piVar15 = *piVar15 + (int)piVar15;
  bVar5 = bVar5 | (byte)piVar15;
  iVar34 = CONCAT31(uVar18,bVar5);
  pbVar7 = (byte *)((int)piVar15 - *piVar15);
  cVar26 = (char)pbVar7;
  *pcVar23 = *pcVar23 + cVar26;
  cVar35 = (char)pcVar23 - bVar5;
  *pbVar7 = *pbVar7 + cVar26;
  uVar30 = (undefined2)((uint)pcVar23 >> 0x10);
  bVar25 = (byte)((uint)pcVar23 >> 8) | *pbVar7;
  pcVar16 = pcVar16 + -1;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar4 = *(byte *)(CONCAT22(uVar30,CONCAT11(bVar25,cVar35)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar7;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar16;
  *pbVar7 = *pbVar7 + cVar26;
  bVar4 = bVar25 | bVar4 | *(byte *)puVar47;
  iVar24 = CONCAT22(uVar30,CONCAT11(bVar4,cVar35));
  pbVar33 = (byte *)((uint)(puVar46 + 1) ^ *(uint *)(iVar34 + -0x43));
  iVar13 = *(int *)pbVar7;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  if (SCARRY4(iVar13,(int)pbVar7)) {
    *pbVar7 = *pbVar7 + cVar26;
  }
  pbVar14 = pbVar7 + 0x5674;
  puVar32 = (uint *)((int)puVar32 +
                    (-(uint)((byte *)0xffffa98b < pbVar7) - *(int *)(pbVar33 + -0x7f)));
  bVar25 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar25;
  uVar19 = (undefined3)((uint)pbVar14 >> 8);
  bVar28 = bVar25 + 0x2d;
  piVar15 = (int *)CONCAT31(uVar19,bVar28);
  *(uint *)(pbVar33 + (int)puVar32 * 8) =
       *(int *)(pbVar33 + (int)puVar32 * 8) + iVar34 + (uint)(0xd2 < bVar25);
  bVar25 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar28;
  if (!CARRY1(bVar25,bVar28)) {
    do {
      pbVar14 = (byte *)(iVar34 + 1);
      bVar25 = (byte)piVar15;
      *(byte *)piVar15 = (char)*piVar15 + bVar25;
      bVar5 = (byte)((uint)piVar15 >> 8);
      bVar28 = (byte)puVar47 | bVar5;
      puVar45 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),bVar28);
      out(*(undefined4 *)pbVar33,(short)pbVar14);
      *(byte *)piVar15 = (char)*piVar15 + bVar25;
      uVar30 = (undefined2)((uint)iVar24 >> 0x10);
      cVar26 = (char)iVar24;
      pbVar7 = (byte *)CONCAT22(uVar30,CONCAT11((byte)((uint)iVar24 >> 8) | *pbVar14,cVar26));
      bVar4 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar25;
      *(byte *)piVar15 = (char)*piVar15 + bVar25 + CARRY1(bVar4,bVar25);
      *pbVar14 = *pbVar14 + bVar25;
      *(byte *)puVar32 = (byte)*puVar32 + bVar5;
      *(int *)((int)piVar15 * 2) =
           *(int *)((int)piVar15 * 2) + CONCAT22(uVar30,CONCAT11(0x1c,cVar26));
      *(byte *)piVar15 = (char)*piVar15 + bVar25;
      cVar35 = (char)pbVar14;
      *(byte *)puVar45 = (byte)*puVar45 + cVar35;
      *(byte *)((int)piVar15 * 2) = *(byte *)((int)piVar15 * 2) ^ bVar25;
      *(byte *)piVar15 = (char)*piVar15 + bVar25;
      pbVar7 = pbVar33 + 8;
      out(*(undefined4 *)(pbVar33 + 4),(short)pbVar14);
      piVar15 = (int *)0xa0a0000;
      *pbVar14 = *pbVar14;
      bVar25 = cVar26 - cVar35;
      iVar24 = CONCAT22(uVar30,CONCAT11((byte)puVar32[0x14] | 0x1c | bRam0ca87216,bVar25));
      *pbVar14 = *pbVar14;
      bVar4 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar25;
      if (!CARRY1(bVar4,bVar25)) {
        piVar15 = (int *)0x1e7b7000;
        bVar4 = (byte)((uint)puVar47 >> 8) | *(byte *)(iVar34 + 3);
        puVar45 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar4,bVar28));
        if (bVar4 != 0) {
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar35 + pbVar7[(int)puVar32 * 8]);
          piVar15 = (int *)0x6d7d7000;
          iVar24 = iVar24 + 1;
        }
      }
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      iVar34 = CONCAT31((int3)((uint)pbVar14 >> 8),(byte)pbVar14 | pbVar7[(int)puVar32 * 8]);
      *(char *)piVar15 = (char)*piVar15;
      piVar15 = (int *)CONCAT31((int3)((uint)piVar15 >> 8),0xf9);
      *puVar32 = (uint)((int)piVar15 + *puVar32 + 1);
      pbVar33 = pbVar33 + 0xc;
      out(*(undefined4 *)pbVar7,(short)iVar34);
      puVar47 = puVar45;
    } while( true );
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar28 = bVar28 | *(byte *)((int)piVar15 + 0x4000081);
  piVar15 = (int *)CONCAT31(uVar19,bVar28);
  if ('\0' < (char)bVar28) {
    *(byte *)piVar15 = (char)*piVar15 + bVar28;
    puVar46 = (uint *)CONCAT31(uVar19,bVar28 + 0x28);
    *puVar46 = *puVar46 ^ (uint)puVar46;
    *(byte *)puVar47 = *(byte *)puVar47 + bVar4;
    cVar26 = (bVar28 + 0x28) - bVar4;
    pcVar10 = (char *)CONCAT31(uVar19,cVar26);
    *pcVar10 = *pcVar10 + cVar26;
    pbVar7 = (byte *)CONCAT31(uVar18,bVar5 | *(byte *)puVar47);
    pcVar16 = (char *)CONCAT22((short)((uint)puVar47 >> 0x10),
                               CONCAT11((char)((uint)puVar47 >> 8) + *(byte *)((int)puVar45 + 0x7d),
                                        (char)puVar47));
    *pcVar10 = *pcVar10 + cVar26;
    pbVar14 = (byte *)CONCAT31(uVar19,cVar26 + 0x39U ^ *(byte *)CONCAT31(uVar19,cVar26 + 0x39U));
    *pcVar16 = *pcVar16 + bVar4;
    puVar22 = (uint *)(pbVar33 + 4);
    out(*(undefined4 *)pbVar33,(short)pbVar7);
    goto code_r0x00405396;
  }
  puVar46 = (uint *)(pbVar33 + 4);
  out(*(undefined4 *)pbVar33,(short)iVar34);
  pcVar23 = (char *)(iVar24 + -1);
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pbVar7 = (byte *)CONCAT31(uVar18,bVar5 | *(byte *)puVar47);
  goto code_r0x004052ee;
}


