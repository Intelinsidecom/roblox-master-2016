/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404856
 * Raw Name    : get_GroupsFilter
 * Demangled   : get_GroupsFilter
 * Prototype   : int get_GroupsFilter(undefined4 param_1, uint * param_2, uint * param_3, uint * param_4, char * param_5, uint * param_6)
 * Local Vars  : puVar20, puVar19, bVar22, iVar21, bVar24, bVar23, uVar26, uVar25, puVar28, bVar27, pbVar30, puVar29, uVar32, iVar31, cVar34, cVar33, unaff_EBX, cVar35, puVar37, pbVar36, cVar39, cVar38, ppbVar41, cVar40, ppbVar42, unaff_EBP, unaff_ESI, ppbVar43, puVar45, puVar44, puVar46, unaff_EDI, in_ES, puVar47, in_DS, in_SS, in_AF, bVar48, unaff_retaddr, uStack_74, uStack_72, uStack_73, uStack_34, uStack_70, uStack_24, param_1, puStack_30, param_2, puStack_18, param_3, puStack_1c, iStack_10, param_4, param_5, pbStack_14, param_6, puStack_8, uStack_c, uVar1, puStack_4, uVar3, uVar2, bVar5, bVar4, in_EAX, uVar6, uVar8, pbVar7, pcVar10, puVar9, puVar12, uVar11, pbVar14, iVar13, pcVar16, piVar15, uVar18, uVar17
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
get_GroupsFilter(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4,char *param_5,
                uint *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  char *in_EAX;
  undefined3 uVar17;
  byte *pbVar7;
  uint uVar8;
  ushort *puVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  undefined3 uVar18;
  char *pcVar16;
  byte bVar22;
  undefined2 uVar25;
  uint *puVar19;
  uint *puVar20;
  byte bVar23;
  byte bVar24;
  undefined2 uVar26;
  int iVar21;
  byte bVar27;
  uint *puVar28;
  uint *puVar29;
  byte *pbVar30;
  int iVar31;
  undefined1 uVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar38;
  char cVar39;
  char cVar40;
  int unaff_EBX;
  byte *pbVar36;
  uint *puVar37;
  byte **ppbVar41;
  uint *unaff_EBP;
  byte **ppbVar42;
  byte **ppbVar43;
  int unaff_ESI;
  uint *puVar44;
  uint *puVar45;
  int unaff_EDI;
  uint *puVar46;
  uint *puVar47;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar48;
  byte in_AF;
  uint *unaff_retaddr;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_34;
  uint *puStack_30;
  undefined2 uStack_24;
  uint *puStack_1c;
  uint *puStack_18;
  byte *pbStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint *puStack_8;
  uint *puStack_4;
  
                    /* .NET CLR Managed Code */
  uVar26 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar32 = (undefined1)unaff_EBX;
  cVar38 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x73);
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar17 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = (char)in_EAX + 0x2aU & (byte)*param_2;
  iVar13 = *(int *)((int)unaff_EBP + 0x73);
  *(char *)CONCAT31(uVar17,bVar4) = *(char *)CONCAT31(uVar17,bVar4) + bVar4;
  pcVar10 = (char *)CONCAT31(uVar17,bVar4 + 0x2a);
  puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_DS);
  cVar38 = cVar38 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar38,uVar32)) + 0x74);
  puVar47 = (uint *)CONCAT22(uVar26,CONCAT11(cVar38,uVar32));
  *pcVar10 = *pcVar10 + bVar4 + 0x2a;
  bVar4 = bVar4 + 0x54 & (byte)*param_2;
  puVar46 = (uint *)(unaff_EDI + iVar13 + unaff_EBP[0x1d]);
  *(char *)CONCAT31(uVar17,bVar4) = *(char *)CONCAT31(uVar17,bVar4) + bVar4;
  pbVar7 = (byte *)CONCAT31(uVar17,bVar4 + 0x2a);
  puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_DS);
  bVar4 = (byte)((uint)param_1 >> 8);
  puVar28 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar4 + *pbVar7,(char)param_1))
  ;
  pbVar7 = pbVar7 + (uint)CARRY1(bVar4,*pbVar7) + *(int *)pbVar7;
  *(char *)param_2 = (char)*param_2 + (char)param_1;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 - *pbVar7);
  puVar44 = (uint *)(unaff_ESI + *(int *)pbVar14 + (uint)((byte)pbVar7 < *pbVar7));
  uStack_c = (uint *)CONCAT22(uStack_c._2_2_,in_ES);
  do {
    bVar22 = (byte)pbVar14;
    pbVar14[0x2c000000] = pbVar14[0x2c000000] + bVar22;
    bVar4 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar22;
    *param_2 = (uint)(pbVar14 + (uint)CARRY1(bVar4,bVar22) + *param_2);
    cVar40 = (char)param_2;
    *(byte *)puVar47 = (byte)*puVar47 - cVar40;
    *pbVar14 = *pbVar14 + bVar22;
    puVar45 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar22 | (byte)*puVar47);
    uVar8 = (uint)puVar45 | *puVar45;
    cVar34 = (char)puVar28;
    cVar33 = (char)uVar8;
    *(byte *)puVar44 = (byte)*puVar44 + cVar33;
    uVar17 = (undefined3)(uVar8 >> 8);
    bVar4 = cVar33 + (byte)*puVar47;
    pcVar10 = (char *)CONCAT31(uVar17,bVar4);
    bVar22 = (byte)((uint)puVar28 >> 8);
    uVar25 = (undefined2)((uint)puVar28 >> 0x10);
    if (SCARRY1(cVar33,(byte)*puVar47) == (char)bVar4 < '\0') {
      *(byte *)puVar47 = (byte)*puVar47 - cVar40;
      *pcVar10 = *pcVar10 + bVar4;
      puVar28 = (uint *)CONCAT22(uVar25,CONCAT11(bVar22 | (byte)*param_2,cVar34));
      param_2 = (uint *)((int)param_2 + 1);
      pcVar10 = pcVar10 + *param_2;
      if ((POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0) goto code_r0x00404921;
      pcVar10 = (char *)((uint)pcVar10 | 8);
code_r0x004048de:
      cVar38 = (char)pcVar10;
      *(byte *)puVar44 = (byte)*puVar44 + cVar38;
      *pcVar10 = *pcVar10 + cVar38;
      *(byte **)(pcVar10 + (int)puVar28) = (byte *)(*(int *)(pcVar10 + (int)puVar28) + (int)puVar28)
      ;
      iStack_10 = CONCAT22(iStack_10._2_2_,in_ES);
      bVar4 = *(byte *)((int)puVar47 + 0x75);
      *pcVar10 = *pcVar10 + cVar38;
      pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar38 + 'o');
      puVar44 = (uint *)((int)puVar44 + 1);
      *pcVar10 = *pcVar10 + cVar38 + 'o';
      uStack_c = (uint *)((uint)uStack_c & 0xffff0000);
      puVar45 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                 CONCAT11((char)((uint)puVar47 >> 8) + bVar4,(char)puVar47));
      unaff_EBP = puVar47;
      in_SS = in_ES;
code_r0x004048f5:
      puVar47 = puVar45;
      pcVar10 = (char *)((int)((uint)pcVar10 & 0x7e26062d) - *(int *)((uint)pcVar10 & 0x7e26062d));
      *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
      do {
        uRam00c36f08 = SUB41(pcVar10,0);
        while( true ) {
          uVar8 = *puVar44;
          cVar38 = (char)pcVar10;
          *(byte *)puVar44 = (byte)*puVar44 + cVar38;
          uStack_c = (uint *)CONCAT22(uStack_c._2_2_,in_ES);
          if (SCARRY1((byte)uVar8,cVar38) == (char)(byte)*puVar44 < '\0') {
            pcVar10[(int)unaff_EBP] = pcVar10[(int)unaff_EBP] + cVar38;
            goto code_r0x00404982;
          }
          *pcVar10 = *pcVar10 + cVar38;
          pbVar7 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar38 + '*');
          uStack_c = (uint *)CONCAT22(uStack_c._2_2_,in_DS);
          bVar4 = (byte)((uint)puVar28 >> 8);
          cVar38 = (char)puVar28;
          bVar22 = bVar4 + *pbVar7;
          pbVar7 = pbVar7 + (uint)CARRY1(bVar4,*pbVar7) + *(int *)pbVar7;
          *(byte *)param_2 = (byte)*param_2 + cVar38;
          cVar33 = (char)puVar47 - (byte)*puVar44;
          bVar4 = *pbVar7;
          puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                     CONCAT11(bVar22 + *pbVar7,cVar38));
          iVar13 = *(int *)pbVar7;
          *(byte *)param_2 = (byte)*param_2 + cVar38;
          pcVar10 = (char *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar22,bVar4) + iVar13) >>
                                           8),(char)(pbVar7 + (uint)CARRY1(bVar22,bVar4) + iVar13) -
                                              *(byte *)((int)param_2 + 3));
          puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                     CONCAT11((char)((uint)puVar47 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)puVar47 >> 8),cVar33)
                                                       + -0x3a),cVar33));
code_r0x00404921:
          bVar4 = (byte)pcVar10;
          *pcVar10 = *pcVar10 + bVar4;
          pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar4 + 0x6f);
          *(byte *)puVar28 = ((byte)*puVar28 - (bVar4 + 0x6f)) - (0x90 < bVar4);
code_r0x00404927:
          *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
          iStack_10 = CONCAT22(iStack_10._2_2_,in_SS);
          *(byte *)puVar28 = (byte)*puVar28 + 1;
          cVar38 = (char)((uint)puVar28 >> 8) - *(byte *)((int)puVar44 + 2);
          puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar38,(char)puVar28));
          if ((POPCOUNT(cVar38) & 1U) == 0) break;
          pcVar10 = pcVar10 + -0x1b7e2606;
          *pcVar10 = *pcVar10 + (char)pcVar10;
          pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar10 >> 8) | (byte)param_2[0x30dbc2],
                                              (char)pcVar10));
        }
code_r0x00404931:
        *pcVar10 = *pcVar10 + (char)pcVar10;
        cVar38 = (char)pcVar10 + '\x02';
        pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar38);
        puVar45 = puVar44;
      } while ((POPCOUNT(cVar38) & 1U) != 0);
      do {
        bVar4 = (byte)pcVar10;
        *pcVar10 = *pcVar10 + bVar4;
        uVar17 = (undefined3)((uint)pcVar10 >> 8);
        piVar15 = (int *)CONCAT31(uVar17,bVar4 + 0x6f);
        *puVar28 = (*puVar28 - (int)piVar15) - (uint)(0x90 < bVar4);
        *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
        iVar13 = *(int *)((int)puVar46 + 0x1a);
        *piVar15 = *piVar15 + (int)piVar15;
        param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*puVar45);
        *(byte *)puVar28 = (byte)*puVar28 + 1;
        bVar4 = (bVar4 + 0x6f) - (char)*piVar15;
        pbVar7 = (byte *)CONCAT31(uVar17,bVar4);
        *pbVar7 = *pbVar7 + bVar4;
        puVar45 = (uint *)((int)puVar45 + *(int *)pbVar7);
        cVar38 = bVar4 + *pbVar7;
        puVar9 = (ushort *)CONCAT31(uVar17,cVar38);
        *puVar9 = *puVar9 + (ushort)CARRY1(bVar4,*pbVar7) * (((ushort)puVar9 & 3) - (*puVar9 & 3));
        *(char *)puVar9 = (char)*puVar9 + cVar38;
        *(char *)puVar9 = (char)*puVar9 + cVar38;
        *(char *)puVar9 = (char)*puVar9 + cVar38;
        puVar46 = (uint *)((int)puVar46 + puVar47[0x1c]);
        unaff_EBP = (uint *)((int)unaff_EBP + iVar13);
code_r0x0040495b:
        cVar38 = (char)puVar9;
        *(char *)puVar9 = (char)*puVar9 + cVar38;
        uVar17 = (undefined3)((uint)puVar9 >> 8);
        cVar33 = cVar38 + '\x02';
        pcVar10 = (char *)CONCAT31(uVar17,cVar33);
        if ((POPCOUNT(cVar33) & 1U) != 0) {
          *param_2 = (uint)(*param_2 + (int)unaff_EBP);
          puVar44 = (uint *)((int)puVar45 + 1);
          out((byte)*puVar45,(short)param_2);
          puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                     CONCAT11((char)((uint)puVar47 >> 8) +
                                              *(byte *)((int)puVar47 + -0x3b),(char)puVar47));
          goto code_r0x00404931;
        }
        *pcVar10 = *pcVar10 + cVar33;
        pbVar7 = (byte *)(CONCAT31(uVar17,cVar38 + '}') + (int)unaff_EBP);
        *pbVar7 = *pbVar7 + cVar38 + '}';
        *param_5 = *param_5 + (char)param_5;
        puVar28 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                                   CONCAT11((byte)((uint)param_4 >> 8) | *(byte *)((int)param_4 * 3)
                                            ,(char)param_4));
        puVar46 = (uint *)(iStack_10 + *(int *)((int)unaff_retaddr + 0x6f));
        pcVar10 = param_5;
        param_2 = param_3;
        puVar47 = unaff_retaddr;
        unaff_EBP = puStack_8;
        puVar45 = uStack_c;
        while( true ) {
          cVar38 = (char)pcVar10;
          *pcVar10 = *pcVar10 + cVar38;
          uVar17 = (undefined3)((uint)pcVar10 >> 8);
          cVar33 = cVar38 + '\x02';
          pcVar10 = (char *)CONCAT31(uVar17,cVar33);
          if ((POPCOUNT(cVar33) & 1U) != 0) break;
          *pcVar10 = *pcVar10 + cVar33;
          pcVar10 = (char *)CONCAT31(uVar17,cVar38 + '}');
          out(*puVar45,(short)param_2);
          *pcVar10 = *pcVar10 + cVar38 + '}';
code_r0x00404982:
          *(char *)param_6 = (char)*param_6 + (char)param_6;
          puVar28 = (uint *)CONCAT22((short)((uint)param_5 >> 0x10),
                                     CONCAT11((byte)((uint)param_5 >> 8) | param_5[(int)puStack_8],
                                              (char)param_5));
          puVar46 = (uint *)((int)uStack_c + *(int *)((int)param_3 + 0x71));
          puVar44 = param_6;
          param_2 = param_4;
          puVar47 = param_3;
          puVar45 = puStack_8;
          while( true ) {
            cVar38 = (char)puVar44;
            *(byte *)puVar44 = (byte)*puVar44 + cVar38;
            uVar17 = (undefined3)((uint)puVar44 >> 8);
            cVar33 = cVar38 + '\x02';
            puVar9 = (ushort *)CONCAT31(uVar17,cVar33);
            unaff_EBP = puStack_4;
            if ((POPCOUNT(cVar33) & 1U) != 0) goto code_r0x0040495b;
            *(char *)puVar9 = (char)*puVar9 + cVar33;
            bVar22 = cVar38 + 0x7d;
            iVar13 = CONCAT31(uVar17,bVar22);
            pbVar7 = (byte *)(iVar13 + (int)puStack_4);
            bVar4 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar22;
            uVar8 = *puVar28;
            *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
            pcVar10 = (char *)(((iVar13 - uVar8) - (uint)CARRY1(bVar4,bVar22)) + -0x727b0317);
            cVar38 = (char)pcVar10;
            *pcVar10 = *pcVar10 + cVar38;
            uVar17 = (undefined3)((uint)pcVar10 >> 8);
            cVar33 = cVar38 + '\x02';
            pcVar10 = (char *)CONCAT31(uVar17,cVar33);
            if ((POPCOUNT(cVar33) & 1U) != 0) break;
            *pcVar10 = *pcVar10 + cVar33;
            bVar22 = cVar38 + 0x7d;
            iVar13 = CONCAT31(uVar17,bVar22);
            pbVar7 = (byte *)(iVar13 + (int)puStack_4);
            bVar4 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar22;
            puVar44 = (uint *)((iVar13 - *puVar28) - (uint)CARRY1(bVar4,bVar22));
            puVar37 = param_2;
code_r0x004049b4:
            *(byte *)puVar37 = (byte)*puVar37 + (char)puVar28;
            param_2 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),
                                       ((char)puVar37 - (byte)*puVar46) - (byte)*puVar45);
            bVar22 = *(byte *)((int)puVar45 + 0x72);
            *puVar44 = *puVar44 & (uint)puVar28;
            pbVar7 = (byte *)((int)puVar44 + 2);
            *pbVar7 = *pbVar7 + (char)((uint)puVar37 >> 8);
            bVar4 = *pbVar7;
            puVar19 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 - bVar22);
            puVar37 = puVar45;
            while (puVar47 = puVar19, puVar45 = puVar37, (POPCOUNT(bVar4) & 1U) == 0) {
              cVar38 = (char)puVar44;
              *(byte *)puVar44 = (byte)*puVar44 + cVar38;
              uVar17 = (undefined3)((uint)puVar44 >> 8);
              cVar33 = cVar38 + '\x03';
              pbVar7 = (byte *)CONCAT31(uVar17,cVar33);
              puVar45 = puVar37 + 1;
              out(*puVar37,(short)param_2);
              in_SS = (undefined2)uStack_c;
              *pbVar7 = *pbVar7 + cVar33;
              cVar34 = (char)puVar28;
              puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                         CONCAT11((byte)((uint)puVar28 >> 8) | *pbVar7,cVar34));
              *(int *)pbVar7 = *(int *)pbVar7 - (int)pbVar7;
              *(byte *)param_2 = (byte)*param_2 + cVar34;
              cVar34 = (char)puVar19 - *(byte *)((int)puVar37 + 6);
              puVar47 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),cVar34);
              if ((POPCOUNT(cVar34) & 1U) != 0) {
                pbVar14 = (byte *)((int)puVar46 + (int)puStack_4 * 2);
                *pbVar14 = *pbVar14 + cVar33;
                ppbVar43 = (byte **)puStack_4;
                goto code_r0x00404a51;
              }
              *pbVar7 = *pbVar7 + cVar33;
              puVar44 = (uint *)CONCAT31(uVar17,cVar38 + 'r');
              *(byte *)puVar44 = (byte)*puVar44;
              uStack_c = (uint *)CONCAT22(uStack_c._2_2_,in_ES);
              do {
                puVar46 = (uint *)((int)puVar46 + puVar47[0x1c]);
                bVar4 = (byte)puVar44;
                *(byte *)puVar44 = (byte)*puVar44 + bVar4;
                uVar17 = (undefined3)((uint)puVar44 >> 8);
                bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
                puVar44 = (uint *)CONCAT31(uVar17,bVar4);
                cVar38 = (char)puVar28;
                *(byte *)param_2 = (byte)*param_2 + cVar38;
                bVar22 = (char)((uint)puVar28 >> 8) - *(byte *)((int)puVar45 + 2);
                puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar22,cVar38));
                puVar37 = param_2;
                if ((POPCOUNT(bVar22) & 1U) != 0) goto code_r0x004049b4;
                *(byte *)puVar44 = (byte)*puVar44 + bVar4;
                bVar5 = bVar4 + 2;
                puVar44 = (uint *)CONCAT31(uVar17,bVar5);
                ppbVar42 = (byte **)puStack_4;
                if ((POPCOUNT(bVar5) & 1U) == 0) goto code_r0x004049f5;
                puVar45 = uStack_c;
              } while (0xfd < bVar4);
              *(byte *)puVar44 = (byte)*puVar44 | bVar5;
              puVar19 = puVar47;
              puVar37 = uStack_c;
              bVar4 = (byte)*puVar44;
            }
          }
        }
        *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
        iStack_10 = CONCAT22(iStack_10._2_2_,in_SS);
      } while( true );
    }
    *pcVar10 = *pcVar10 + bVar4;
    bVar5 = bVar4 + 2;
    pcVar10 = (char *)CONCAT31(uVar17,bVar5);
    if (bVar4 < 0xfe) {
      *(byte *)puVar44 = (byte)*puVar44 + bVar5;
      puVar45 = puVar47;
      goto code_r0x004048f5;
    }
    *pcVar10 = *pcVar10 + bVar5;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)puVar47 + -0x5b)
                                        ,cVar40));
    cVar33 = *pcVar10;
    *pcVar10 = *pcVar10 + bVar5;
    uStack_c = (uint *)CONCAT22(uStack_c._2_2_,in_ES);
    if (SCARRY1(cVar33,bVar5) == *pcVar10 < '\0') goto code_r0x00404927;
    *pcVar10 = *pcVar10 + bVar5;
    bVar4 = bVar4 + 4;
    pbVar14 = (byte *)CONCAT31(uVar17,bVar4);
    if (0xfd < bVar5) {
      *pbVar14 = *pbVar14 + bVar4;
      pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
      bVar4 = bVar4 | (byte)*puVar44;
      pcVar10 = (char *)CONCAT31(uVar17,bVar4);
      *pcVar10 = *pcVar10 + bVar4;
      *puVar47 = (uint)(*puVar47 + (int)puVar28);
      puVar47 = (uint *)CONCAT22(uVar26,CONCAT11(cVar38 + *(byte *)((int)puVar47 + 0x75),uVar32));
      *pcVar10 = *pcVar10 + bVar4;
      pcVar10 = (char *)CONCAT31(uVar17,bVar4 + 0x6f);
      *pcVar10 = *pcVar10 + bVar4 + 0x6f;
      uStack_c = (uint *)((uint)uStack_c._2_2_ << 0x10);
      pcVar10 = (char *)((int)((uint)pcVar10 & 0x7e26062d) - *(int *)((uint)pcVar10 & 0x7e26062d));
      *(byte *)param_2 = (byte)*param_2 + cVar34;
      uRam00c16f07 = SUB41(pcVar10,0);
      goto code_r0x004048de;
    }
    *pbVar14 = *pbVar14 + bVar4;
    puVar28 = (uint *)CONCAT22(uVar25,CONCAT11(bVar22 | (byte)*param_2,cVar34));
    *(byte *)puVar47 = (byte)*puVar47 + cVar40;
    *(byte *)puVar44 = (byte)*puVar44 ^ bVar4;
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    uVar17 = (undefined3)((uint)puVar44 >> 8);
    bVar5 = bVar4 + 0x6f;
    pbVar14 = (byte *)CONCAT31(uVar17,bVar5);
    *puVar28 = (*puVar28 - (int)pbVar14) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar38;
    pbVar7 = (byte *)((int)ppbVar42 + *(int *)((int)puVar46 + 0x1a));
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    uVar18 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | (byte)*puVar45;
    param_2 = (uint *)CONCAT31(uVar18,bVar4);
    *(byte *)puVar28 = (byte)*puVar28 + 1;
    cVar33 = bVar5 - *pbVar14;
    puVar45 = (uint *)((int)puVar45 + (-(uint)(bVar5 < *pbVar14) - *(int *)CONCAT31(uVar17,cVar33)))
    ;
    uVar11 = CONCAT31(uVar17,cVar33 + *(char *)CONCAT31(uVar17,cVar33));
    bVar48 = CARRY1(bRam14110000,bVar22);
    bRam14110000 = bRam14110000 + bVar22;
    puVar44 = (uint *)((int)puVar47 + (int)puVar45 * 2);
    uVar8 = *puVar44;
    uVar2 = uVar11 + *puVar44;
    puVar12 = (undefined4 *)(uVar2 + bVar48);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar12 = uVar1;
    iStack_10 = CONCAT22(iStack_10._2_2_,in_ES);
    uVar8 = (uint)(CARRY4(uVar11,uVar8) || CARRY4(uVar2,(uint)bVar48));
    puVar44 = (uint *)((int)puVar12 + uRam7d020511 + uVar8);
    ppbVar41 = &pbStack_14;
    ppbVar43 = &pbStack_14;
    ppbVar42 = &pbStack_14;
    pbStack_14 = pbVar7;
    cVar33 = '\x03';
    do {
      pbVar7 = pbVar7 + -4;
      ppbVar41 = ppbVar41 + -1;
      *ppbVar41 = (byte *)*(undefined4 *)pbVar7;
      cVar33 = cVar33 + -1;
    } while ('\0' < cVar33);
    uStack_c = (uint *)&pbStack_14;
    pbRam00c82802 =
         (byte *)((int)puVar44 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar12,uRam7d020511) ||
                      CARRY4((int)puVar12 + uRam7d020511,uVar8))));
    uVar8 = *puVar45;
    cVar33 = (char)puVar44;
    *(byte *)puVar45 = (byte)*puVar45 + cVar33;
  } while (SCARRY1((byte)uVar8,cVar33) == (char)(byte)*puVar45 < '\0');
  *(byte *)puVar44 = (byte)*puVar44 + cVar33;
  iVar13 = CONCAT31((int3)((uint)puVar44 >> 8),cVar33 + '\x11') + 0xc57b;
  bVar22 = (byte)iVar13;
  *param_2 = *param_2 ^ (uint)puVar47;
  param_2 = (uint *)CONCAT31(uVar18,bVar4 + (byte)*puVar28);
  iVar13 = (CONCAT31((int3)((uint)iVar13 >> 8),bVar22 + 0x6f) - (uint)(0x90 < bVar22)) + -0x18093a86
  ;
  cVar33 = (char)iVar13;
  uVar17 = (undefined3)((uint)iVar13 >> 8);
  cVar38 = cVar33 + '\x02';
  pbVar7 = (byte *)CONCAT31(uVar17,cVar38);
  if ((POPCOUNT(cVar38) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar7 = *pbVar7 + cVar38;
  pbVar7 = (byte *)CONCAT31(uVar17,cVar33 + 'q');
  ppbVar43 = &pbStack_14;
code_r0x00404a51:
  pbVar14 = pbVar7 + 1;
  cVar38 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar38;
  puVar47 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((char)((uint)puVar19 >> 8) - cVar38,cVar34));
  *pbVar14 = *pbVar14 + cVar38;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar28);
  pbVar7 = pbVar7 + 0x757b03;
  pbVar14 = (byte *)((int)puVar46 + (int)ppbVar43 * 2);
  cVar38 = (char)pbVar7;
  *pbVar14 = *pbVar14 + cVar38;
  *pbVar7 = *pbVar7 + cVar38;
  *(byte *)puVar45 = (byte)*puVar45 - (char)((uint)pbVar7 >> 8);
  *pbVar7 = *pbVar7 + cVar38;
  puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar43 + -0x3a));
  *pbVar7 = *pbVar7 + cVar38;
  pbVar7 = (byte *)(CONCAT31((int3)((uint)pbVar7 >> 8),cVar38 + '\x11') + 0x757b02);
  pbVar14 = (byte *)((int)puVar46 + (int)ppbVar43 * 2);
  bVar22 = (byte)pbVar7;
  *pbVar14 = *pbVar14 + bVar22;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar22;
  puStack_30 = (uint *)CONCAT22(puStack_30._2_2_,in_ES);
  pbRam011006fe = pbVar7 + (int)(pbRam011006fe + CARRY1(bVar4,bVar22));
  uVar8 = *puVar45;
  *(byte *)puVar45 = (byte)*puVar45 + bVar22;
  if (!CARRY1((byte)uVar8,bVar22)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar4;
    bVar5 = (byte)puVar28;
    puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                               CONCAT11((byte)((uint)puVar28 >> 8) | *pbVar7,bVar5));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar17 = (undefined3)((uint)pbVar7 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar38 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar10 = (char *)CONCAT31(uVar17,cVar38);
    *pcVar10 = *pcVar10 + cVar38;
    puVar46 = (uint *)((int)puVar46 - *(int *)((int)ppbVar43 + -0x39));
    *pcVar10 = *pcVar10 + cVar38;
    iVar13 = CONCAT31(uVar17,cVar38 + '\x11') + 0xc57b;
    iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x11') + 0xc67b;
    bVar22 = (byte)iVar13;
    bVar4 = bVar22 + 0x6f;
    pbVar7 = (byte *)CONCAT31((int3)((uint)iVar13 >> 8),bVar4);
    *puVar28 = (*puVar28 - (int)pbVar7) - (uint)(0x90 < bVar22);
    uVar8 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    pbRam011106fe = pbVar7 + (int)(pbRam011106fe + CARRY1((byte)uVar8,bVar5));
    uVar8 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar4;
    if (!CARRY1((byte)uVar8,bVar4)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    bVar4 = (byte)puVar28;
    bVar22 = (byte)((uint)puVar28 >> 8) | *pbVar7;
    puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar22,bVar4));
    *pbVar7 = *pbVar7 - (char)pbVar7;
    *(byte *)puVar47 = (byte)*puVar47 + bVar22;
    out(*puVar45,(short)param_2);
    *puVar28 = *puVar28 & (uint)pbVar7;
    uVar8 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar4;
    pbVar7 = pbVar7 + (uint)CARRY1((byte)uVar8,bVar4) + puVar45[1];
    *pbVar7 = *pbVar7 + (char)pbVar7;
    *(byte *)puVar28 = (byte)*puVar28 + (char)param_2;
    puVar45 = puVar45 + 1;
    while( true ) {
      out(*puVar45,(short)param_2);
      pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 & (byte)*puVar28);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar47[5],
                                          (char)param_2));
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      puVar45 = puVar45 + 1;
code_r0x00404ad4:
      puStack_30 = (uint *)CONCAT22(puStack_30._2_2_,in_ES);
      pbVar7 = (byte *)((uint)pbVar7 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar7;
code_r0x00404add:
      bVar4 = (byte)pbVar7;
      uVar17 = (undefined3)((uint)pbVar7 >> 8);
      cVar38 = bVar4 + 8;
      pbVar7 = (byte *)CONCAT31(uVar17,cVar38);
      if (SCARRY1(bVar4,'\b') == cVar38 < '\0') break;
      *pbVar7 = *pbVar7 + cVar38;
      cVar38 = bVar4 + 10;
      piVar15 = (int *)CONCAT31(uVar17,cVar38);
      if ((POPCOUNT(cVar38) & 1U) != 0) {
        *piVar15 = (int)(*piVar15 + (int)piVar15);
        goto code_r0x00404b18;
      }
      *(char *)piVar15 = (char)*piVar15 + cVar38;
      puVar44 = (uint *)CONCAT31(uVar17,bVar4 + 0x7c);
      *puVar44 = *puVar44 & (uint)puVar28;
      *(char *)((int)puVar44 + 0x11) = *(char *)((int)puVar44 + 0x11) + (char)((uint)param_2 >> 8);
      cVar38 = (char)((int)puVar44 + 0xc67b);
      uVar17 = (undefined3)((uint)((int)puVar44 + 0xc67b) >> 8);
      bVar4 = cVar38 + 8;
      pbVar7 = (byte *)CONCAT31(uVar17,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar7 = *pbVar7 + bVar4;
        cRam02060000 = cVar38 + 'w';
        puVar37 = (uint *)CONCAT31(uVar17,cRam02060000);
        *(byte *)puVar37 = (byte)*puVar37 + cRam02060000;
        cVar38 = (char)puVar28;
        puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                   CONCAT11((byte)((uint)puVar28 >> 8) | (byte)*puVar37,cVar38));
        *puVar37 = *puVar37 - (int)puVar37;
        *(byte *)param_2 = (byte)*param_2 + cVar38;
        puVar44 = puVar45 + 1;
        out(*puVar45,(short)param_2);
        puVar45 = puVar44;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar10 = (char *)((uint)puVar37 | *puVar37);
        goto code_r0x00404b89;
      }
      bVar22 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar4;
      *puVar45 = (uint)(pbVar7 + (uint)CARRY1(bVar22,bVar4) + *puVar45);
    }
    *(byte *)puVar45 = (byte)*puVar45 + 1;
    *puVar28 = (uint)(pbVar7 + (uint)(0xf7 < bVar4) + *puVar28);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar37;
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 + 'r');
    piVar15 = (int *)((uint)puVar44 | *puVar44);
    param_2 = puStack_30;
code_r0x00404b18:
    bRam11060000 = (byte)piVar15;
    iVar13 = CONCAT31((int3)((uint)((int)piVar15 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar15 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar13;
    iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),bVar4 + 0x6f);
    *puVar28 = (*puVar28 - iVar13) - (uint)(0x90 < bVar4);
    cVar38 = (char)puVar28;
    *(byte *)param_2 = (byte)*param_2 + cVar38;
    bVar23 = (byte)((uint)puVar47 >> 8);
    bVar5 = (byte)((uint)param_2 >> 8) | bVar23;
    pcVar16 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar5,(byte)param_2));
    piVar15 = (int *)(iVar13 + 0x73060001);
    *(byte *)puVar28 = (byte)*puVar28 & (byte)piVar15;
    *pcVar16 = *pcVar16 + cVar38;
    bVar22 = (byte)((uint)puVar28 >> 8);
    *(byte *)piVar15 = *(char *)piVar15 - bVar22;
    *(byte *)piVar15 = *(char *)piVar15 + (byte)piVar15;
    iVar13 = *piVar15;
    *piVar15 = *piVar15 - (int)piVar15;
    *(byte *)puVar47 = (byte)*puVar47 + bVar22;
    pcVar10 = (char *)((uint)piVar15 | *puVar46);
    *pcVar16 = *pcVar16 - bVar22;
    bVar4 = (byte)pcVar10;
    *pcVar10 = *pcVar10 + bVar4;
    ppbVar43 = (byte **)(((int)ppbVar43 - iVar13) - *(int *)(pcVar10 + ((int)ppbVar43 - iVar13)));
    uVar26 = (undefined2)((uint)puVar47 >> 0x10);
    bVar24 = (byte)puVar47;
    cVar33 = bVar23 + *(byte *)((int)puVar47 + 0x76);
    pbVar7 = (byte *)CONCAT22(uVar26,CONCAT11(cVar33,bVar24));
    *pcVar10 = *pcVar10 + bVar4;
    uVar17 = (undefined3)((uint)pcVar10 >> 8);
    uVar11 = CONCAT31(uVar17,bVar4 + 7);
    puVar44 = (uint *)((int)ppbVar43 + -0x1faeef1);
    uVar8 = *puVar44;
    uVar2 = *puVar44 + uVar11;
    *puVar44 = uVar2 + (0xf8 < bVar4);
    puStack_30 = (uint *)CONCAT22(puStack_30._2_2_,in_ES);
    puVar47 = puStack_30;
    bVar4 = bVar4 + 7 + (byte)*puVar28 +
            (CARRY4(uVar8,uVar11) || CARRY4(uVar2,(uint)(0xf8 < bVar4)));
    puVar37 = (uint *)CONCAT31(uVar17,bVar4);
    uVar8 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar4;
    if (CARRY1((byte)uVar8,bVar4)) break;
    *(byte *)puVar37 = (byte)*puVar37 + bVar4;
    puVar47 = (uint *)CONCAT22(uVar26,CONCAT11(cVar33 + pbVar7[0x76],bVar24));
    uStack_34 = in_ES;
  }
  *(byte *)puVar37 = (byte)*puVar37 + bVar4;
  uVar18 = (undefined3)((uint)pcVar16 >> 8);
  bVar27 = (byte)param_2 | *pbVar7;
  param_2 = (uint *)CONCAT31(uVar18,bVar27);
  pcRam2b060000 = (char *)CONCAT31(uVar17,bVar4 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar4 + 0x39)) - (0xd7 < (byte)(bVar4 + 0x11));
  bVar23 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar22;
  puVar44 = puVar45 + 1;
  out(*puVar45,(short)param_2);
  bVar4 = (bVar4 + 0x37) - CARRY1(bVar23,bVar22);
  piVar15 = (int *)CONCAT31(uVar17,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    iVar13 = CONCAT31(uVar17,bVar4 + 0x11) + 0xc77b;
    pcVar10 = (char *)CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + 'r');
    pcVar10[0x28] = pcVar10[0x28] + bVar5;
code_r0x00404b89:
    cVar38 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar38;
    *pcVar10 = *pcVar10 + cVar38;
    *pcVar10 = *pcVar10 + cVar38;
    puVar9 = (ushort *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar38 + 'r');
    uVar6 = (ushort)puVar9 | *puVar9;
    pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),uVar6);
    bRam11060000 = (byte)uVar6;
    out(*puVar44,(short)param_2);
    *pcVar10 = *pcVar10 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar4;
  pbVar14 = (byte *)((int)ppbVar43 - *(int *)((int)puVar46 + 0x21));
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pcVar10 = (char *)CONCAT31(uVar18,bVar27 | *pbVar7);
  puVar46 = puVar45 + 2;
  out(*puVar44,(short)pcVar10);
  uVar8 = *puVar28;
  *pcVar10 = *pcVar10 + cVar38;
  uVar8 = CONCAT31(uVar17,bVar4 & (byte)uVar8) | 0x767b02;
  *(byte *)((int)puVar28 + (int)pcVar10) = *(byte *)((int)puVar28 + (int)pcVar10) + (char)uVar8;
  iVar13 = uVar8 + 0xc67b;
  cVar40 = (char)iVar13;
  uVar17 = (undefined3)((uint)iVar13 >> 8);
  cVar34 = cVar40 + 'r';
  pcVar10 = (char *)CONCAT31(uVar17,cVar34);
  pcVar10[0x28] = pcVar10[0x28] + bVar5;
  *pcVar10 = *pcVar10 + cVar34;
  uVar25 = (undefined2)((uint)puVar28 >> 0x10);
  bVar22 = bVar22 | *(byte *)((int)puStack_30 + -0x5e);
  puVar20 = (uint *)CONCAT22(uVar25,CONCAT11(bVar22,cVar38));
  *pcVar10 = *pcVar10 + cVar34;
  puStack_30 = (uint *)CONCAT22(puStack_30._2_2_,uStack_34);
  puVar44 = (uint *)CONCAT22(uVar26,CONCAT11(cVar33 + pbVar7[0x76],bVar24));
  *pcVar10 = *pcVar10 + cVar34;
  puVar28 = (uint *)CONCAT31(uVar17,cVar40 + -0x1c);
  pcVar10 = (char *)((uint)puVar28 | *puVar28);
  bVar48 = (POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar10;
  puVar28 = puStack_30;
  puVar37 = puVar44;
  pbVar7 = pbVar14;
  puVar19 = puVar47;
  uVar26 = uStack_34;
  if (!bVar48) goto code_r0x00404ca8;
  *pcVar10 = *pcVar10 + cRam02060000;
  puVar28 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cRam02060000 + 'r');
  *puVar28 = *puVar28 & (uint)puVar20;
  *(char *)((int)puVar28 + 0x11) = *(char *)((int)puVar28 + 0x11) + (char)((ushort)uStack_34 >> 8);
  iVar13 = (int)puVar28 + 0xc77b;
  uVar17 = (undefined3)((uint)iVar13 >> 8);
  cRam02060000 = (char)iVar13 + '\t';
  pbVar7 = (byte *)CONCAT31(uVar17,cRam02060000);
  out(*puVar46,uStack_34);
  *pbVar7 = *pbVar7 + cRam02060000;
  puVar19 = (uint *)CONCAT22(uVar25,CONCAT11(bVar22 | *pbVar7,cVar38));
  *(int *)pbVar7 = *(int *)pbVar7 - (int)pbVar7;
  *(byte *)puStack_30 = (byte)*puStack_30 + cVar38;
  out(puVar45[3],uStack_34);
  puVar29 = puStack_30;
  puVar46 = puVar45 + 4;
  uVar26 = uStack_34;
  if ((POPCOUNT((byte)*puStack_30) & 1U) != 0) goto code_r0x00404cca;
  *pbVar7 = *pbVar7 + cRam02060000;
  puVar9 = (ushort *)CONCAT31(uVar17,(char)iVar13 + '{');
  uVar6 = (ushort)puVar9 | *puVar9;
  pcVar10 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),uVar6);
  bVar4 = (byte)uVar6;
  out(puVar45[4],uStack_34);
  pbVar7 = (byte *)((int)puVar19 + 1);
  bRam11060000 = bVar4;
  *pcVar10 = *pcVar10 + bVar4;
  puVar20 = (uint *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                             CONCAT11((byte)((uint)pbVar7 >> 8) | bRam110cde91,(char)pbVar7));
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar4 - 7);
  *puVar47 = (uint)(pcVar10 + (uint)(bVar4 < 7) + *puVar47);
  puVar46 = puVar45 + 6;
  out(puVar45[5],uStack_34);
  puVar28 = (uint *)((int)puStack_30 + 1);
  *pcVar10 = *pcVar10 + (bVar4 - 7);
  puVar37 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar24 | (byte)(uVar6 >> 8));
  do {
    bVar4 = (char)pcVar10 - *pcVar10;
    uVar8 = *puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + bVar4;
    cVar38 = bVar4 - CARRY1((byte)uVar8,bVar4);
    *(byte *)puVar28 = (byte)*puVar28 + cVar38;
    cVar33 = (char)((uint)puVar20 >> 8);
    *(byte *)(puVar47 + 0x673b40) = (byte)puVar47[0x673b40] + cVar33;
    puVar45 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar38);
    *(byte *)puVar45 = (byte)*puVar45 + cVar38;
    *(byte *)puVar28 = (byte)*puVar28 + cVar38;
    puVar37[0x16] = (uint)(puVar37[0x16] + (int)puVar46);
    puVar19 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar20 >> 0x10),
                                               CONCAT11(cVar33 + (char)((uint)pcVar10 >> 8),
                                                        (char)puVar20)) >> 8),
                               (char)puVar20 + *(char *)((int)puVar45 * 2));
    *(byte *)puVar45 = (byte)*puVar45 + cVar38;
    *(byte *)puVar46 = (byte)*puVar46 + (char)puVar37;
    puVar29 = puVar28;
    puVar44 = puVar37;
_ctor:
    bVar22 = (byte)((uint)puVar19 >> 8);
    uVar8 = *puVar45;
    bVar4 = (byte)puVar19;
    puVar45 = (uint *)((int)puVar45 + (uint)CARRY1(bVar22,(byte)*puVar45) + *puVar45);
    *(byte *)puVar29 = (byte)*puVar29 + bVar4;
    cVar38 = bVar4 - *(byte *)((int)puVar29 + 3);
    puVar20 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar19 >> 0x10),
                                               CONCAT11(bVar22 + (byte)uVar8,bVar4)) >> 8),cVar38);
    if ((POPCOUNT(cVar38) & 1U) != 0) {
      if (*(byte *)((int)puVar29 + 3) <= bVar4) {
        *puVar45 = (uint)(*puVar45 + (int)puVar45);
        puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),(byte)puVar29 | (byte)*puVar44);
        puVar45 = puVar45 + 0x230e;
        puVar19 = puVar20;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
    cVar38 = (char)puVar45 + '\x02';
    pcVar10 = (char *)CONCAT31((int3)((uint)puVar45 >> 8),cVar38);
    bVar48 = (POPCOUNT(cVar38) & 1U) == 0;
    puVar28 = puVar29;
    puVar37 = puVar44;
    pbVar7 = pbVar14;
    puVar19 = puVar47;
    uVar26 = uStack_24;
code_r0x00404ca8:
    uStack_24 = uVar26;
    puVar29 = puStack_8;
    puVar44 = uStack_c;
    pbVar14 = pbStack_14;
    puVar47 = puStack_1c;
    if (bVar48) break;
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar20;
    pbVar14 = pbVar7;
    puVar47 = puVar19;
  } while( true );
  *pcVar10 = *pcVar10 + (char)pcVar10;
  *(byte *)unaff_retaddr = (byte)*unaff_retaddr + (byte)unaff_retaddr;
  puVar19 = (uint *)CONCAT22((short)((uint)puStack_4 >> 0x10),
                             CONCAT11((byte)((uint)puStack_4 >> 8) | (byte)*puStack_8,
                                      (char)puStack_4));
  *(byte *)uStack_c = (byte)*uStack_c + (char)uStack_c;
  *(byte *)((int)unaff_retaddr * 2) = *(byte *)((int)unaff_retaddr * 2) ^ (byte)unaff_retaddr;
  uVar3 = *(undefined6 *)unaff_retaddr;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar7 = (byte *)uVar3;
  bVar22 = (byte)uVar3;
  *pbVar7 = *pbVar7 + bVar22;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar22;
  puVar28 = (uint *)((int)puVar19 + 0x11673);
  uVar8 = *puVar28;
  uVar2 = *puVar28;
  *puVar28 = (uint)((byte *)(uVar2 + (int)puVar29) + CARRY1(bVar4,bVar22));
  puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uStack_24);
  pbVar7 = pbVar7 + (uint)(CARRY4(uVar8,(uint)puVar29) ||
                          CARRY4(uVar2 + (int)puVar29,(uint)CARRY1(bVar4,bVar22))) +
                    *(int *)((int)puVar19 + (int)puVar29);
  puVar46 = puStack_18;
  uVar26 = uStack_24;
code_r0x00404cca:
  uStack_24 = uVar26;
  cVar38 = (char)pbVar7 + '\x04';
  puVar45 = (uint *)CONCAT31((int3)((uint)pbVar7 >> 8),cVar38);
  if (SCARRY1((char)pbVar7,'\x04') == cVar38 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
  puVar28 = puVar46 + 1;
  out(*puVar46,(short)puVar29);
  uVar8 = *puVar19;
  uVar2 = *puVar29;
  bVar4 = (byte)puVar19;
  *(byte *)puVar29 = (byte)*puVar29 + bVar4;
  iVar13 = (CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + '\x03') & uVar8) + iRam00008c38;
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar29;
  pcVar10 = (char *)(iVar13 + (uint)CARRY1((byte)uVar2,bVar4) + 0x1246f);
  uVar17 = (undefined3)((uint)puVar19 >> 8);
  bVar4 = bVar4 | (byte)*puVar29;
  puVar20 = (uint *)CONCAT31(uVar17,bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar10 >> 8);
  puVar45 = (uint *)(CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + *pcVar10) + 0x1fbeef2);
  uVar8 = *puVar45;
  *puVar45 = (uint)(*puVar45 + (int)puVar45);
  if (CARRY4(uVar8,(uint)puVar45)) {
    *puVar45 = (uint)(*puVar45 + (int)puVar45);
    pcVar10 = (char *)CONCAT31(uVar17,bVar4 | bRam00282809);
    cVar38 = (char)((uint)puVar19 >> 8);
    *(byte *)puVar44 = (byte)*puVar44 + cVar38;
    *pcVar10 = *pcVar10 - cVar38;
    *(byte *)puVar45 = *(byte *)puVar45 + (char)puVar45;
    iVar13 = (int)pcVar10 - *puVar44;
    puVar46 = puVar46 + 2;
    out(*puVar28,(short)puVar29);
    *puVar45 = (uint)(*puVar45 + (int)puVar45);
    puVar20 = (uint *)CONCAT22((short)((uint)iVar13 >> 0x10),
                               CONCAT11((byte)((uint)iVar13 >> 8) | bRambf73070b,(char)iVar13));
code_r0x00404d15:
    uVar8 = *puVar45;
    bVar4 = (byte)puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar4;
    puVar28 = puVar46 + 1;
    out(*puVar46,(short)puVar29);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar22 = bVar4 + in_AF * '\x06';
    puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),
                               bVar22 + (0x90 < (bVar22 & 0xf0) |
                                        CARRY1((byte)uVar8,bVar4) | in_AF * (0xf9 < bVar22)) * '`');
  }
  *puVar45 = (uint)(*puVar45 + (int)puVar45);
  bVar4 = (byte)puVar45 | (byte)*puVar47;
  puVar46 = puVar28 + 1;
  uVar25 = SUB42(puVar29,0);
  out(*puVar28,uVar25);
  *(byte *)puVar20 = (byte)*puVar20 - bVar4;
  uVar8 = *puVar29;
  bVar22 = (byte)puVar20;
  *(byte *)puVar29 = (byte)*puVar29 + bVar22;
  iVar13 = CONCAT31((int3)((uint)puVar45 >> 8),bVar4) + *puVar46 + (uint)CARRY1((byte)uVar8,bVar22);
  pbVar7 = pbVar14 + -*puVar29;
  uVar17 = (undefined3)((uint)iVar13 >> 8);
  cVar38 = (char)iVar13 + (byte)*puVar46 + (pbVar14 < (byte *)*puVar29);
  puVar45 = (uint *)CONCAT31(uVar17,cVar38);
  bVar4 = (byte)((uint)puVar20 >> 8);
  *(byte *)puVar20 = (byte)*puVar20 - bVar4;
  *puVar45 = (uint)(*puVar45 + (int)puVar45);
  bVar22 = bVar22 | *(byte *)((int)puVar29 + (int)puVar45);
  uVar26 = (undefined2)((uint)puVar20 >> 0x10);
  if ((POPCOUNT(bVar22) & 1U) == 0) {
    *(byte *)puVar45 = (byte)*puVar45 + cVar38;
    pcVar10 = (char *)CONCAT31(uVar17,cVar38 + '\x12');
    *pcVar10 = *pcVar10 + bVar4;
    puVar45 = (uint *)CONCAT31(uVar17,(cVar38 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar20 >> 8),bVar22));
    uVar8 = *puVar29;
    *(byte *)puVar29 = (byte)*puVar29 + bVar22;
    if (!CARRY1((byte)uVar8,bVar22)) {
      pbVar14 = (byte *)((uint)puVar45 | *puVar45);
      out(*puVar46,uVar25);
      *pbVar14 = *pbVar14 + (char)pbVar14;
      bVar5 = *pbVar14;
      piVar15 = (int *)CONCAT22(uVar26,CONCAT11(bVar4 | bVar5,bVar22));
      iVar13 = (int)pbVar14 - *piVar15;
      *(byte *)puVar29 = (byte)*puVar29 + bVar22;
      puVar45 = puVar28 + 3;
      out(puVar28[2],uVar25);
      uRam12060000 = (undefined1)iVar13;
      *(char *)((int)piVar15 + iVar13) = *(char *)((int)piVar15 + iVar13) - (bVar4 | bVar5);
      *(byte *)puVar29 = (byte)*puVar29 + bVar22;
      pbVar14 = (byte *)(iVar13 + -0x120edecd);
      *(byte *)puVar45 = (byte)*puVar45 + 1;
      bVar4 = *pbVar14;
      bVar5 = (byte)pbVar14;
      *pbVar14 = *pbVar14 + bVar5;
      pbVar7 = pbVar7 + ((-1 - *(int *)((int)puVar47 + 0x42)) - (uint)CARRY1(bVar4,bVar5));
      *pbVar14 = *pbVar14 + bVar5;
      bVar4 = (byte)puVar44 | (byte)((uint)pbVar14 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar14;
      uVar8 = *puVar29;
      pcVar10 = (char *)(((uint)pbVar14 | 0x11) + 0x511072c);
      puVar46 = puVar28 + 4;
      out(*puVar45,uVar25);
      puVar29 = (uint *)((int)puVar29 + 1);
      *pcVar10 = *pcVar10 + (char)pcVar10;
      bVar5 = (byte)((uint)pcVar10 >> 8);
      puVar44 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar44 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar44 >> 8) | (byte)uVar8,
                                                          bVar4)) >> 8),bVar4 | bVar5);
      uVar17 = (undefined3)((uint)pcVar10 >> 8);
      bVar4 = (char)pcVar10 - *pcVar10;
      pcVar10 = (char *)CONCAT31(uVar17,bVar4);
      *pcVar10 = *pcVar10 + bVar4;
      *(int *)((int)pcVar10 * 2) = (int)(*(int *)((int)pcVar10 * 2) + (int)puVar44);
      *(byte *)puVar29 = *(byte *)puVar29 + bVar4;
      *pbVar7 = *pbVar7 + bVar5;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar8 = CONCAT31(uVar17,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar8;
      pbVar14 = (byte *)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar5 + in_AF,bVar4));
      *(byte *)puVar46 = (byte)*puVar46 + bVar22;
      *pbVar14 = *pbVar14 + bVar4;
      *pbVar14 = *pbVar14 + bVar4;
      bVar48 = CARRY1(bVar4,*pbVar14);
      puVar45 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar4 + *pbVar14);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar44 = (byte)*puVar44 - (char)puVar29;
  }
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
  bVar48 = false;
  piVar15 = (int *)CONCAT22(uVar26,CONCAT11(bVar4 | (byte)*puVar29,bVar22));
code_r0x00404d9a:
  do {
    puVar37 = puVar29;
    *puVar45 = (*puVar45 - (int)puVar45) - (uint)bVar48;
    bVar4 = (byte)((uint)piVar15 >> 8);
    uVar26 = (undefined2)((uint)piVar15 >> 0x10);
    bVar22 = (byte)piVar15;
    bVar5 = bVar4 + (byte)iRam00000c00;
    pbVar14 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *(byte *)puVar37 = (byte)*puVar37 + bVar22;
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 - (byte)*puVar46);
    bVar4 = *pbVar14;
    puVar45 = (uint *)(pbVar14 + (uint)CARRY1(bVar5,*pbVar14) + *(int *)pbVar14);
    *(byte *)puVar37 = (byte)*puVar37 + bVar22;
    cVar33 = ((bVar5 + bVar4) - (byte)*puVar37) + (byte)*puVar45;
    pcVar10 = (char *)CONCAT22(uVar26,CONCAT11(cVar33,bVar22));
    puVar28 = puVar47 + 1;
    uVar8 = in((short)puVar37);
    *puVar47 = uVar8;
    cVar38 = (char)puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + cVar38;
    uVar17 = (undefined3)((uint)puVar37 >> 8);
    bVar5 = (byte)puVar37 | (byte)*puVar46;
    pcVar16 = (char *)CONCAT31(uVar17,bVar5);
    *pcVar10 = *pcVar10 + '\x01';
    bVar4 = (cVar33 - *pcVar16) + (byte)*puVar45;
    pcVar10 = (char *)CONCAT22(uVar26,CONCAT11(bVar4,bVar22));
    puVar47 = puVar47 + 2;
    uVar8 = in((short)pcVar16);
    *puVar28 = uVar8;
    *(byte *)puVar45 = (byte)*puVar45 + cVar38;
    bVar5 = bVar5 | (byte)*puVar46;
    puVar29 = (uint *)CONCAT31(uVar17,bVar5);
    *pcVar10 = *pcVar10 + '\x01';
    bVar48 = bVar22 < *(byte *)((int)puVar29 + 2);
    cVar33 = bVar22 - *(byte *)((int)puVar29 + 2);
    piVar15 = (int *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar33);
  } while ((POPCOUNT(cVar33) & 1U) != 0);
  *(byte *)puVar45 = (byte)*puVar45 + cVar38;
  bVar22 = cVar38 + 0x7b;
  pbVar14 = (byte *)CONCAT31((int3)((uint)puVar45 >> 8),bVar22);
  *(byte *)((int)puVar44 + (int)pbVar14) = *(byte *)((int)puVar44 + (int)pbVar14) + bVar22;
  puVar28 = puVar46 + 1;
  uVar25 = SUB42(puVar29,0);
  out(*puVar46,uVar25);
  pbVar36 = (byte *)((int)puVar44 + -1);
  *pbVar14 = *pbVar14 + bVar22;
  bVar4 = bVar4 | (byte)*puVar29;
  piVar15 = (int *)CONCAT22(uVar26,CONCAT11(bVar4,cVar33));
  *pbVar14 = *pbVar14 + bVar22;
  *pbVar36 = *pbVar36 + bVar5;
  *pbVar36 = *pbVar36 ^ bVar22;
  *(byte *)puVar29 = (byte)*puVar29 + bVar4;
  *pbVar14 = *pbVar14 + bVar22;
  do {
    bVar23 = (byte)((uint)piVar15 >> 8);
    *(byte *)puVar47 = (byte)*puVar47 + bVar23;
    bVar4 = *pbVar14;
    bVar22 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar22;
    *(byte **)((int)puVar44 + 0x17) =
         (byte *)((int)puVar28 + (uint)CARRY1(bVar4,bVar22) + *(int *)((int)puVar44 + 0x17));
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    uVar18 = (undefined3)((uint)pbVar14 >> 8);
    bVar22 = bVar22 | (byte)*puVar28;
    puVar47 = (uint *)((int)puVar47 + *(int *)(pbVar7 + -0x34));
    *(char *)CONCAT31(uVar18,bVar22) = *(char *)CONCAT31(uVar18,bVar22) + bVar22;
    bVar4 = bVar22 + 2;
    cVar38 = (char)((uint)puVar37 >> 8);
    bVar24 = (byte)piVar15;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar14 = (byte *)CONCAT31(uVar18,bVar22 + 0x15 + (0xfd < bVar22));
      if (0xec < bVar4 || CARRY1(bVar22 + 0x15,0xfd < bVar22)) {
        *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      }
code_r0x00404e60:
      pbVar7 = pbVar7 + -*puVar29;
      bVar4 = *pbVar14;
      *pbVar14 = *pbVar14 + (byte)pbVar14;
      pbVar30 = (byte *)((int)puVar28 + (-(uint)CARRY1(bVar4,(byte)pbVar14) - *(int *)pbVar14));
      pbVar14 = pbVar14 + *(int *)pbVar14;
      puStack_30 = (uint *)CONCAT22(puStack_30._2_2_,in_DS);
      *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      *(char *)piVar15 = (char)*piVar15 + cVar38;
      bVar4 = *pbVar14;
      *pbVar14 = *pbVar14 + (byte)pbVar14;
      *(byte **)(pbVar36 + (int)puVar29) =
           (byte *)((int)puVar29 +
                   (uint)CARRY1(bVar4,(byte)pbVar14) + *(int *)(pbVar36 + (int)puVar29));
      pbVar14 = pbVar14 + 0x73061314;
      *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      uVar18 = (undefined3)((uint)piVar15 >> 8);
      bVar24 = bVar24 | (byte)*puVar29;
      pcVar16 = (char *)CONCAT31(uVar18,bVar24);
      *pbVar14 = *pbVar14 + (char)pbVar14;
      cVar38 = (char)pbVar14 + 'o';
      pcVar10 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar38);
      *pcVar10 = *pcVar10 + cVar38;
      out(*(undefined4 *)pbVar30,uVar25);
      uVar8 = *puVar29;
      *(byte *)puVar29 = (byte)*puVar29 + bVar24;
      pcVar10 = pcVar10 + (uint)CARRY1((byte)uVar8,bVar24) + *puVar47;
      *pcVar10 = *pcVar10 + (char)pcVar10;
      *pcVar16 = *pcVar16 + bVar5;
      puVar28 = (uint *)(pbVar30 + 8);
      out(*(undefined4 *)(pbVar30 + 4),uVar25);
      *(byte *)puVar29 = (byte)*puVar29 + bVar24;
      piVar15 = (int *)((uint)pcVar10 | *puVar47);
      pcVar16[0x390a0000] = pcVar16[0x390a0000] - bVar23;
      pbVar36 = (byte *)0x7000000;
      *(byte *)puVar47 = (byte)*puVar47 - bVar23;
      *piVar15 = *piVar15 + (int)piVar15;
      puVar46 = (uint *)CONCAT31(uVar18,bVar24 | *(byte *)((int)piVar15 + (int)pcVar16));
      *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) - bVar23;
      cRam07000000 = cRam07000000 + bVar23;
      piVar15 = (int *)((uint)piVar15 | 0x777b02);
      pbVar14 = (byte *)((int)puVar47 + (int)pbVar7 * 2);
      bVar48 = SCARRY1(*pbVar14,(char)piVar15);
      *pbVar14 = *pbVar14 + (char)piVar15;
      bVar4 = *pbVar14;
      *(char *)piVar15 = (char)*piVar15;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar18,bVar4) = *(char *)CONCAT31(uVar18,bVar4) + bVar4;
    bVar22 = bVar22 + 0x71;
    pbVar14 = (byte *)CONCAT31(uVar18,bVar22);
    *pbVar14 = *pbVar14;
    *(byte *)puVar28 = (byte)*puVar28 + 1;
    *piVar15 = (*piVar15 - (int)pbVar14) - (uint)(0x90 < bVar4);
    uVar8 = *puVar28;
    *(byte *)puVar28 = (byte)*puVar28 + bVar22;
    if (!CARRY1((byte)uVar8,bVar22)) goto code_r0x00404e60;
    *pbVar14 = *pbVar14 + bVar22;
    uVar26 = (undefined2)((uint)piVar15 >> 0x10);
    bVar23 = bVar23 | *pbVar14;
    pbVar14 = pbVar14 + -*(int *)pbVar14;
    *pbVar36 = *pbVar36 + bVar23;
    cVar33 = bVar24 - *(byte *)((int)puVar29 + 2);
    piVar15 = (int *)CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar23,bVar24)) >> 8),cVar33);
  } while ((POPCOUNT(cVar33) & 1U) != 0);
  cVar34 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar34;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  pcVar10 = (char *)CONCAT31(uVar18,cVar34 + '{');
  out(*puVar28,uVar25);
  *pcVar10 = *pcVar10 + cVar34 + '{';
  bVar22 = cVar34 + 0x7e;
  pbVar14 = (byte *)CONCAT31(uVar18,bVar22);
  puVar28 = puVar46 + 3;
  out(puVar46[2],uVar25);
  pbVar36 = (byte *)((int)puVar44 + -2);
  *pbVar14 = *pbVar14 + bVar22;
  bVar23 = bVar23 | (byte)*puVar29;
  puVar46 = (uint *)CONCAT22(uVar26,CONCAT11(bVar23,cVar33));
  *pbVar14 = *pbVar14 + bVar22;
  *pbVar36 = *pbVar36 + bVar5;
  *pbVar36 = *pbVar36 ^ bVar22;
  *(byte *)puVar29 = (byte)*puVar29 + bVar23;
  *pbVar14 = *pbVar14 + bVar22;
  *pbVar14 = *pbVar14 + cVar38;
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar22;
  puVar44[6] = (uint)((int)puVar28 + (uint)CARRY1(bVar4,bVar22) + puVar44[6]);
  *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
  bVar22 = bVar22 | (byte)*puVar28;
  puVar47 = (uint *)((int)puVar47 + *(int *)(pbVar7 + -0x33));
  *(char *)CONCAT31(uVar18,bVar22) = *(char *)CONCAT31(uVar18,bVar22) + bVar22;
  bVar48 = SCARRY1(bVar22,'\x02');
  bVar4 = bVar22 + 2;
  piVar15 = (int *)CONCAT31(uVar18,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    return CONCAT31(uVar18,bVar22 + 0x71);
  }
code_r0x00404ebf:
  bVar22 = (byte)piVar15;
  uVar18 = (undefined3)((uint)piVar15 >> 8);
  if (bVar4 != 0 && bVar48 == (char)bVar4 < '\0') {
    *(byte *)piVar15 = (char)*piVar15 + bVar22;
    puVar28[(int)puVar47 * 2] =
         (uint)((int)puVar29 + (uint)(0xd2 < bVar22) + puVar28[(int)puVar47 * 2]);
    return CONCAT31(uVar18,bVar22 + 0x2d);
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar4 = *pbVar36;
  *puVar28 = (uint)(*puVar28 + (int)piVar15);
  bVar24 = (byte)((uint)puVar46 >> 8);
  *(byte *)piVar15 = (char)*piVar15 - bVar24;
  *(byte *)piVar15 = (char)*piVar15 + bVar22;
  pbVar14 = (byte *)(CONCAT31(uVar17,bVar5 | bVar4) - *(int *)pbVar36);
  puVar45 = (uint *)CONCAT31(uVar18,bVar22 + 6);
  *(uint *)(pbVar36 + (int)puVar28 * 2) =
       (int)puVar45 + (uint)(0xf9 < bVar22) + *(int *)(pbVar36 + (int)puVar28 * 2);
  *(byte *)puVar46 = (byte)*puVar46 ^ bVar22 + 6;
  bVar22 = (byte)puVar46;
  *pbVar14 = *pbVar14 + bVar22;
  puVar44 = puVar28 + 1;
  uVar26 = SUB42(pbVar14,0);
  out(*puVar28,uVar26);
  *puVar46 = *puVar46 ^ (uint)puVar45;
  *pbVar14 = *pbVar14 + bVar22;
  puVar37 = (uint *)(pbVar36 + -*(int *)pbVar36);
  *(uint *)((int)puVar47 + 0x31) = *(uint *)((int)puVar47 + 0x31) | (uint)pbVar7;
  *puVar45 = *puVar45 + (int)puVar45;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar24 | (byte)*puVar37,bVar22)
                            );
  *(byte **)(pbVar14 + 0x6e) = (byte *)(*(int *)(pbVar14 + 0x6e) + (int)puVar44);
  piVar15 = (int *)((uint)puVar45 | *puVar45);
  bVar5 = (byte)puVar37;
  *(byte *)puVar47 = (byte)*puVar47 - bVar5;
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar22;
  if (CARRY1(bVar4,bVar22)) {
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    bVar4 = pbVar14[0x11];
    uVar25 = (undefined2)((uint)puVar37 >> 0x10);
    out(*puVar44,uVar26);
    puVar46 = (uint *)((int)puVar46 + 1);
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    bVar27 = (byte)((uint)puVar37 >> 8) | bVar4 | *pbVar14;
    pcVar10 = (char *)((int)piVar15 + -0x21000001);
    bVar4 = (byte)pcVar10 | 0x11;
    uVar17 = (undefined3)((uint)pcVar10 >> 8);
    cVar38 = bVar4 - 7;
    pcVar16 = (char *)CONCAT31(uVar17,cVar38);
    *puVar47 = (uint)(pcVar16 + (uint)(bVar4 < 7) + *puVar47);
    puVar44 = puVar28 + 3;
    out(puVar28[2],uVar26);
    pbVar14 = pbVar14 + 1;
    *pcVar16 = *pcVar16 + cVar38;
    bVar24 = (byte)((uint)pcVar10 >> 8);
    bVar23 = bVar5 | bVar24;
    bVar22 = cVar38 - *pcVar16;
    bVar4 = *(byte *)puVar46;
    *(byte *)puVar46 = *(byte *)puVar46 + bVar22;
    *(char *)CONCAT31(uVar17,bVar22) =
         *(char *)CONCAT31(uVar17,bVar22) + bVar22 + CARRY1(bVar4,bVar22);
    *pbVar14 = *pbVar14 + bVar22;
    *(byte *)puVar44 = (byte)*puVar44 + bVar23;
    bVar4 = (byte)((uint)pbVar14 >> 8);
    *(byte *)puVar46 = *(byte *)puVar46 + bVar22 + CARRY1((byte)pbVar14,bVar4);
    piVar15 = (int *)CONCAT31(uVar17,bVar22);
    *(byte *)piVar15 = (char)*piVar15 + bVar22;
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                               CONCAT11(bVar4 + bVar24,(byte)pbVar14 + bVar4));
    puVar37 = (uint *)CONCAT22(uVar25,CONCAT11(bVar27 + *(char *)(CONCAT31((int3)(CONCAT22(uVar25,
                                                  CONCAT11(bVar27,bVar5)) >> 8),bVar23) + 0x76),
                                               bVar23));
    uStack_24 = puStack_30._0_2_;
code_r0x00404fa4:
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    pcVar10 = (char *)(CONCAT31((int3)((uint)piVar15 >> 8),(char)piVar15 + '(') ^ *puVar46);
    cVar34 = (char)puVar46;
    *pbVar14 = *pbVar14 + cVar34;
    uVar26 = (undefined2)((uint)puVar37 >> 0x10);
    cVar35 = (char)puVar37;
    cVar39 = (char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + 0x75);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    cVar38 = (char)pcVar10 + 'o';
    pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar38);
    *pcVar10 = *pcVar10 + cVar38;
    cVar40 = (char)((uint)puVar46 >> 8);
    *pbVar7 = *pbVar7 - cVar40;
    pbVar14[1] = pbVar14[1] + cVar34;
    pcVar10 = pcVar10 + -0x757b021b;
    cVar38 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar38;
    uVar17 = (undefined3)((uint)pcVar10 >> 8);
    cVar33 = cVar38 + 'o';
    pcVar10 = (char *)CONCAT31(uVar17,cVar33);
    pbVar30 = pbVar14 + 2;
    *pcVar10 = *pcVar10 + cVar33;
    iVar13 = CONCAT22(uVar26,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar39,cVar35)) +
                                                        0x76),cVar35));
    *pcVar10 = *pcVar10 + cVar33;
    pcVar10 = (char *)CONCAT31(uVar17,cVar38 + -0x22);
    puVar28 = (uint *)((int)puVar47 + 1);
    *(byte *)puVar47 = (byte)*puVar44;
    *pcVar10 = *pcVar10 + cVar38 + -0x22;
    *(byte *)((int)puVar46 + (int)pcVar10) =
         *(byte *)((int)puVar46 + (int)pcVar10) - (char)((uint)pbVar30 >> 8);
    *pbVar30 = *pbVar30 + cVar34;
    bVar22 = cVar40 - pbVar14[4];
    pbVar36 = (byte *)((int)puVar44 + 5);
    out(*(undefined4 *)((int)puVar44 + 1),(short)pbVar30);
    puVar44 = (uint *)((uint)(pcVar10 + *(int *)(pcVar10 + iVar13)) ^ 0x280a0001);
    *(byte *)puVar44 = (byte)*puVar44 << 1 | (char)(byte)*puVar44 < '\0';
    *pbVar36 = *pbVar36 + (char)puVar44;
    pbVar36 = pbVar36 + *(int *)(pbVar14 + -0x5c);
    pbVar14 = (byte *)((uint)puVar44 | *puVar44);
    *pbVar36 = *pbVar36 + (char)pbVar14;
    puVar37 = (uint *)CONCAT31((int3)((uint)iVar13 >> 8),cVar35 - (char)pbVar30);
    bVar4 = *pbVar14;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar22 + *pbVar14,cVar34));
    iVar13 = *(int *)pbVar14;
    *pbVar30 = *pbVar30 + cVar34;
    cVar38 = (char)(pbVar14 + (uint)CARRY1(bVar22,bVar4) + iVar13) + 'r';
    puVar47 = (uint *)CONCAT31((int3)((uint)(pbVar14 + (uint)CARRY1(bVar22,bVar4) + iVar13) >> 8),
                               cVar38);
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),CONCAT11(10,(char)pbVar30));
    *(char *)(puVar47 + 10) = (char)puVar47[10] + '\n';
    *pbVar36 = *pbVar36 + cVar38;
    puVar44 = (uint *)(pbVar36 + *(int *)(pbVar14 + -0x5e));
    uVar8 = *puVar47;
    cVar38 = (char)((uint)puVar47 | uVar8);
    *(byte *)puVar44 = (byte)*puVar44 + cVar38;
    uVar17 = (undefined3)(((uint)puVar47 | uVar8) >> 8);
    cVar33 = cVar38 + (byte)*puVar37;
    puVar47 = (uint *)CONCAT31(uVar17,cVar33);
    if (SCARRY1(cVar38,(byte)*puVar37) == cVar33 < '\0') goto code_r0x00405090;
    *(byte *)puVar47 = (byte)*puVar47 + cVar33;
    piVar15 = (int *)CONCAT31(uVar17,cVar33 + '\x02');
    puVar47 = puVar28;
  }
  else {
    out(2,(char)piVar15);
    if ((POPCOUNT(*pbVar14) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar17 = (undefined3)((uint)piVar15 >> 8);
  cVar38 = (char)piVar15 + '}';
  pbVar36 = (byte *)CONCAT31(uVar17,cVar38);
  pbVar14[(int)pbVar36] = pbVar14[(int)pbVar36] + cVar38;
  pbVar14[0x280a0000] = pbVar14[0x280a0000] - (char)((uint)piVar15 >> 8);
  bVar4 = (byte)puVar46 & 7;
  *pbVar36 = *pbVar36 << bVar4 | *pbVar36 >> 8 - bVar4;
  *(byte *)puVar44 = (byte)*puVar44 + cVar38;
  cVar34 = (char)puVar37 - (byte)*puVar44;
  uVar26 = (undefined2)((uint)puVar37 >> 0x10);
  cVar40 = (char)((uint)puVar37 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),cVar34) + 0x7c);
  pcVar10 = (char *)CONCAT22(uVar26,CONCAT11(cVar40,cVar34));
  *pbVar36 = *pbVar36 + cVar38;
  bVar22 = (char)piVar15 + 0xa7U & *pbVar14;
  puVar28 = (uint *)((int)puVar47 + *(int *)(pbVar7 + 0x7c));
  *(char *)CONCAT31(uVar17,bVar22) = *(char *)CONCAT31(uVar17,bVar22) + bVar22;
  bVar22 = bVar22 + 0x2a;
  pbVar36 = (byte *)CONCAT31(uVar17,bVar22);
  *pbVar36 = *pbVar36 + bVar22;
  *pcVar10 = *pcVar10 + cVar34;
  *pbVar14 = *pbVar14 ^ bVar22;
  *pcVar10 = *pcVar10 + bVar22;
  bVar4 = *pbVar36;
  *pbVar36 = *pbVar36 + bVar22;
  cVar38 = (bVar22 - *pbVar36) - CARRY1(bVar4,bVar22);
  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar14;
  cVar40 = cVar40 + pcVar10[0x7b];
  *(char *)CONCAT31(uVar17,cVar38) = *(char *)CONCAT31(uVar17,cVar38) + cVar38;
  pcVar10 = (char *)CONCAT31(uVar17,cVar38 + 'o');
  *pcVar10 = *pcVar10 + cVar38 + 'o';
  pcVar10 = pcVar10 + 0x2ed7fde6;
  cVar33 = (char)pcVar10;
  *pcVar10 = *pcVar10 + cVar33;
  cVar38 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar40,cVar34)) + 0x7b);
  *pcVar10 = *pcVar10 + cVar33;
  piVar15 = (int *)(CONCAT31((int3)((uint)pcVar10 >> 8),cVar33 + 'o') + 0x6f060000);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  bVar22 = (byte)pbVar14 | (byte)*puVar44;
  pbVar30 = (byte *)CONCAT31(uVar18,bVar22);
  uVar8 = CONCAT22(uVar26,CONCAT11(cVar40 + cVar38,cVar34)) | (uint)puVar44;
  uVar17 = (undefined3)((uint)piVar15 >> 8);
  bVar4 = (byte)piVar15 | *pbVar30;
  pbVar36 = (byte *)CONCAT31(uVar17,bVar4);
  cVar38 = (byte)puVar46 - bVar22;
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),cVar38);
  *pbVar36 = *pbVar36 + bVar4;
  puVar47 = puVar44 + 1;
  out(*puVar44,(short)pbVar30);
  *pbVar36 = bVar4;
  *pbVar30 = *pbVar30 + cVar38;
  puVar44 = puVar44 + 2;
  out(*puVar47,(short)pbVar30);
  *(byte **)pbVar36 = pbVar36 + *(int *)pbVar36;
  puVar37 = (uint *)(CONCAT31((int3)(uVar8 >> 8),(char)uVar8 - (char)((uint)pbVar14 >> 8)) |
                    (uint)puVar44);
  pbVar14 = (byte *)CONCAT31(uVar18,(bVar22 | (byte)*puVar44) + (byte)*puVar28);
  cVar38 = bVar4 - (byte)*puVar28;
  puVar47 = (uint *)CONCAT31(uVar17,cVar38 - *(char *)CONCAT31(uVar17,cVar38));
code_r0x00405090:
  *puVar47 = (uint)(pbVar14 + *puVar47);
  cVar38 = (char)puVar47;
  *(byte *)puVar47 = (byte)*puVar47 + cVar38;
  *(byte *)puVar47 = (byte)*puVar47 + cVar38;
  *(byte *)puVar47 = (byte)*puVar47 + cVar38;
  *puVar46 = *puVar46 - (int)pbVar7;
  uVar8 = *puVar44;
  bVar4 = (byte)pbVar14;
  *(byte *)puVar44 = (byte)*puVar44 + bVar4;
  *(byte *)puVar47 = (byte)*puVar47 + cVar38 + CARRY1((byte)uVar8,bVar4);
  *(byte *)puVar46 = (byte)*puVar46 + cVar38;
  uVar8 = *puVar37;
  *(byte *)puVar37 = (byte)*puVar37 + 0x72;
  *(byte *)puVar37 = (byte)*puVar37;
  cVar38 = (char)((uint)pbVar14 >> 8);
  if (SCARRY1((byte)uVar8,'r')) {
    puVar44 = (uint *)((int)puVar44 + *(int *)(pbVar14 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar44 = (byte)*puVar44 + (char)puVar47;
      uVar17 = (undefined3)((uint)puVar47 >> 8);
      cVar33 = (char)puVar47 + (byte)*puVar37;
      pcVar10 = (char *)CONCAT31(uVar17,cVar33);
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                 CONCAT11((char)((uint)puVar37 >> 8) +
                                          *(byte *)((int)puVar37 + 0x7b),(char)puVar37));
      *pcVar10 = *pcVar10 + cVar33;
      in_AF = 9 < (cVar33 + 0x6fU & 0xf) | in_AF;
      uVar8 = CONCAT31(uVar17,cVar33 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar8;
      piVar15 = (int *)CONCAT22((short)(uVar8 >> 0x10),
                                CONCAT11((char)((uint)puVar47 >> 8) + in_AF,bVar5));
      *piVar15 = *piVar15 + (int)piVar15;
      uVar17 = (undefined3)((uint)piVar15 >> 8);
      bVar5 = bVar5 | *(byte *)(piVar15 + 0x354a);
      bVar5 = bVar5 - *(char *)CONCAT31(uVar17,bVar5);
      pbVar36 = (byte *)CONCAT31(uVar17,bVar5);
      bVar22 = *pbVar36;
      *pbVar36 = *pbVar36 + bVar5;
      puVar44 = (uint *)((int)puVar44 + (-(uint)CARRY1(bVar22,bVar5) - *(int *)pbVar36));
      puVar47 = (uint *)(pbVar36 + 0xfc00);
      *pbVar14 = *pbVar14 + cVar38;
      uVar8 = *puVar47;
      bVar22 = (byte)puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + bVar22;
      uVar11 = (uint)CARRY1((byte)uVar8,bVar22);
      uVar8 = *puVar37;
      uVar2 = *puVar37;
      *puVar37 = (uint)((byte *)(uVar2 + (int)puVar47) + uVar11);
      if (!CARRY4(uVar8,(uint)puVar47) && !CARRY4(uVar2 + (int)puVar47,uVar11)) break;
      *(byte *)puVar47 = (byte)*puVar47 + bVar22;
    }
  }
  uVar8 = (uint)puVar47 | *puVar47;
  uVar26 = SUB42(pbVar14,0);
  *(byte *)puVar44 = (byte)*puVar44 + (char)uVar8;
  piVar15 = (int *)(uVar8 + 0xc1872);
  if (SCARRY4(uVar8,0xc1872)) {
    cVar33 = (char)piVar15;
    *(char *)piVar15 = *(char *)piVar15 + cVar33;
    *pbVar14 = *pbVar14 + cVar33;
    *(char *)piVar15 = *(char *)piVar15 + cVar33;
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar46;
    *(char *)piVar15 = *(char *)piVar15 + cVar33;
    *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) + bVar4;
    puVar47 = puVar44;
    goto code_r0x00405117;
  }
  do {
    uVar8 = *puVar44;
    bVar4 = (byte)piVar15;
    *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    if (CARRY1((byte)uVar8,bVar4)) {
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      uVar17 = (undefined3)((uint)puVar46 >> 8);
      bVar22 = (byte)puVar46 | bRam396f1609;
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      puVar46 = (uint *)CONCAT31(uVar17,bVar22 | *(byte *)CONCAT31(uVar17,bVar22));
      uVar17 = (undefined3)((uint)piVar15 >> 8);
      bVar4 = bVar4 | *pbVar14;
      pcVar10 = (char *)CONCAT31(uVar17,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar47 = puVar44 + 1;
        out(*puVar44,uVar26);
        uVar8 = CONCAT22((short)((uint)piVar15 >> 0x10),(ushort)bVar4);
        *(byte *)puVar47 = (byte)*puVar47 + bVar4;
        pcVar10 = (char *)(uVar8 | 8);
        cVar33 = (char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + 0x7a);
        puVar45 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(cVar33,(char)puVar37));
        *pcVar10 = *pcVar10 + (char)pcVar10;
        cVar38 = (char)pcVar10 + 'o';
        piVar15 = (int *)CONCAT31((int3)(uVar8 >> 8),cVar38);
        *(char *)piVar15 = (char)*piVar15 + cVar38;
        *(byte *)puVar46 = (byte)*puVar46 + 1;
        puVar44 = puVar44 + 2;
        out(*puVar47,uVar26);
        pbVar14 = (byte *)((uint)pbVar14 ^ uRam08122c04);
        iVar13 = CONCAT31((int3)((uint)(*piVar15 * 0x17070600) >> 8),2);
        *(char *)(iVar13 * 2) = *(char *)(iVar13 * 2) - cVar33;
        do {
          bVar4 = (byte)iVar13;
          *(byte *)puVar44 = (byte)*puVar44 + bVar4;
          bVar48 = CARRY1(bVar4,(byte)*puVar45);
          uVar17 = (undefined3)((uint)iVar13 >> 8);
          cVar38 = bVar4 + (byte)*puVar45;
          pbVar36 = (byte *)CONCAT31(uVar17,cVar38);
          uVar26 = in_DS;
          uVar25 = uStack_70;
          if (SCARRY1(bVar4,(byte)*puVar45) == cVar38 < '\0') goto GenerateStatusText;
          *pbVar36 = *pbVar36 + cVar38;
          uVar8 = CONCAT31(uVar17,cVar38 + '\'') + 0x1ebd9f3;
          uStack_74 = (undefined1)uStack_24;
          uStack_73 = (undefined1)((ushort)uStack_24 >> 8);
          piVar15 = (int *)(uVar8 ^ 0x73060000);
          puVar46 = (uint *)((int)puVar46 + 1);
          *piVar15 = (int)(*piVar15 + (int)piVar15);
          puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                     CONCAT11((byte)((uint)puVar45 >> 8) | pbVar7[0x7e],
                                              (char)puVar45));
          cVar38 = (char)uVar8;
          *(char *)piVar15 = (char)*piVar15 + cVar38;
          uVar8 = CONCAT31((int3)((uint)piVar15 >> 8),cVar38 + '\x02');
          bVar48 = 0xd9f2d2da < uVar8;
          iVar13 = uVar8 + 0x260d2d25;
          pbVar30 = pbVar7;
          do {
            uVar17 = (undefined3)((uint)iVar13 >> 8);
            bVar22 = (char)iVar13 + -2 + bVar48;
            pbVar7 = (byte *)CONCAT31(uVar17,bVar22);
            bVar4 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar22;
            bVar5 = (byte)puVar45;
            uStack_70 = uStack_24;
            if (CARRY1(bVar4,bVar22)) {
              *pbVar7 = *pbVar7 + bVar22;
              puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                         CONCAT11((byte)((uint)puVar45 >> 8) | pbVar30[0x7f],bVar5))
              ;
              *pbVar7 = *pbVar7 + bVar22;
              pbVar36 = (byte *)CONCAT31(uVar17,bVar22 + 0x2a);
              *pbVar36 = *pbVar36 + bVar22 + 0x2a;
              *(byte *)puVar45 = (byte)*puVar45 + (char)pbVar14;
              uVar26 = in_DS;
              while( true ) {
                in_DS = uVar26;
                bVar22 = (byte)pbVar36;
                *pbVar14 = *pbVar14 ^ bVar22;
                *pbVar14 = *pbVar14 + (char)puVar45;
                *pbVar36 = *pbVar36 + bVar22;
                *(byte *)puVar45 = (byte)*puVar45 + (char)((uint)pbVar14 >> 8);
                bVar4 = *pbVar36;
                *pbVar36 = *pbVar36 + bVar22;
                uVar8 = *puVar45;
                uVar2 = *puVar45;
                *puVar45 = (uint)(pbVar36 + uVar2 + CARRY1(bVar4,bVar22));
                uVar17 = (undefined3)((uint)pbVar36 >> 8);
                if (CARRY4(uVar8,(uint)pbVar36) ||
                    CARRY4((uint)(pbVar36 + uVar2),(uint)CARRY1(bVar4,bVar22))) break;
                *(byte *)puVar44 = (byte)*puVar44 + bVar22;
                pcVar10 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                           CONCAT11((char)((uint)puVar46 >> 8) + *pbVar36,
                                                    (char)puVar46));
                *(byte *)puVar44 = (byte)*puVar44 + bVar22;
                piVar15 = (int *)CONCAT31(uVar17,bVar22 | (byte)*puVar45);
                puVar47 = puVar44;
                while( true ) {
                  puVar44 = puVar47 + 1;
                  out(*puVar47,(short)pbVar14);
                  pbVar14 = pbVar14 + 1;
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  bVar5 = (byte)((uint)pcVar10 >> 8) | *pbVar14;
                  uVar17 = (undefined3)((uint)piVar15 >> 8);
                  bVar22 = (byte)piVar15 ^ *pbVar14;
                  pcVar16 = (char *)CONCAT31(uVar17,bVar22);
                  cRam282b0000 = cRam282b0000 - bVar5;
                  *pcVar16 = *pcVar16 + bVar22;
                  pbVar7 = pbVar30 + -*(int *)pbVar14;
                  uStack_74 = (undefined1)in_DS;
                  uStack_73 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar28 + 0x17);
                  *pcVar16 = *pcVar16 + bVar22;
                  puVar46 = (uint *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                             CONCAT11(bVar5 + bVar4 | *pbVar14,(char)pcVar10));
                  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
                  *(byte *)((int)pcVar16 * 2) = *(byte *)((int)pcVar16 * 2) ^ bVar22;
                  in_AF = 9 < (bVar22 & 0xf) | in_AF;
                  bVar22 = bVar22 + in_AF * -6;
                  pbVar36 = (byte *)CONCAT31(uVar17,bVar22 + (0x9f < bVar22 | in_AF * (bVar22 < 6))
                                                             * -0x60);
                  *(byte **)pbVar36 = pbVar36 + *(int *)pbVar36;
                  *(char *)((int)pbVar36 * 2) =
                       *(char *)((int)pbVar36 * 2) + (char)((uint)pbVar14 >> 8);
                  bVar48 = CARRY1((byte)*puVar46,(byte)pbVar14);
                  *(byte *)puVar46 = (byte)*puVar46 + (byte)pbVar14;
                  uVar26 = in_DS;
                  uVar25 = uStack_24;
GenerateStatusText:
                  in_DS = uVar25;
                  pbVar30 = pbVar7;
                  uStack_70 = in_DS;
                  if (!bVar48) break;
                  *pbVar36 = *pbVar36 + (char)pbVar36;
                  iVar13 = CONCAT31((int3)((uint)puVar46 >> 8),(byte)puVar46 | *pbVar14);
                  uVar26 = (undefined2)((uint)puVar45 >> 0x10);
                  cVar34 = (char)((uint)puVar45 >> 8) + *(byte *)((int)puVar45 + 0x7d);
                  *pbVar36 = *pbVar36 + (char)pbVar36;
                  *(byte *)puVar28 = (byte)*puVar28 - (char)((uint)puVar46 >> 8);
                  iVar13 = iVar13 - *(int *)(iVar13 + 0xb0a0000);
                  cVar38 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar34,(char)puVar45)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar44,(short)pbVar14);
                  pbVar14 = (byte *)CONCAT22(uStack_72,CONCAT11(uStack_73,uStack_74));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar47 = puVar44 + 2;
                  out(puVar44[1],CONCAT11(uStack_73,uStack_74));
                  pbVar30 = pbVar7 + 1;
                  cVar33 = (char)iVar13;
                  pcVar10 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),
                                             CONCAT11((byte)((uint)iVar13 >> 8) |
                                                      *(byte *)((int)puVar28 + 0x46),cVar33));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_24 = CONCAT11(uStack_73,uStack_74);
                  uVar17 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar47,0xf0)) >> 8);
                  piVar15 = (int *)CONCAT31(uVar17,0x5f);
                  puVar28 = (uint *)((int)puVar28 + 1);
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  puVar45 = (uint *)CONCAT22(uVar26,CONCAT11(cVar34 + cVar38 | (byte)puVar44[-0x1e],
                                                             (char)puVar45));
                  *(char *)piVar15 = (char)*piVar15 + '_';
                  puVar44 = (uint *)CONCAT31(uVar17,0x8c);
                  puVar47[(int)puVar28 * 2] = (uint)(pbVar14 + puVar47[(int)puVar28 * 2]);
                  uVar8 = *puVar47;
                  *(byte *)puVar47 = (byte)*puVar47 + 0x8c;
                  if ((byte)uVar8 < 0x74) {
                    *pbVar14 = *pbVar14 + cVar33;
                    *(byte *)puVar45 = (byte)*puVar45 >> 1;
                    *(char *)puVar44 = (char)*puVar44 + -0x74;
                    *puVar44 = (uint)(pbVar30 + *puVar44);
                    *puVar44 = *puVar44 << 1 | (uint)((int)*puVar44 < 0);
                    *pbVar14 = *pbVar14 + cVar33;
                    pbVar7[2] = pbVar7[2] - cVar33;
                    *pbVar14 = *pbVar14 + cVar33;
                    pbVar7 = (byte *)CONCAT31(uVar17,0x83);
                    puVar44 = puVar45;
                    goto code_r0x00405312;
                  }
                  *puVar44 = (uint)(*puVar44 + (int)puVar44);
                  piVar15 = (int *)(CONCAT31(uVar17,(byte)puVar44[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar44[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar15 = (int *)((int)piVar15 + *puVar47);
                }
              }
              *pbVar14 = *pbVar14 + bVar22;
              *(byte *)puVar45 = (byte)*puVar45 - (char)pbVar14;
              *pbVar36 = *pbVar36 + bVar22;
              pbVar7 = (byte *)CONCAT31(uVar17,bVar22 | (byte)*puVar45);
            }
            else {
              cVar38 = (char)puVar46;
              *pbVar14 = *pbVar14 + cVar38;
              *(byte **)pbVar7 = pbVar14 + *(int *)pbVar7;
              *pbVar7 = *pbVar7 + bVar22;
              bVar22 = bVar22 + *pbVar7;
              pbVar7 = (byte *)CONCAT31(uVar17,bVar22);
              if (-1 < (char)bVar22) {
                *(byte *)puVar45 = (byte)*puVar45 + bVar5;
                out(*puVar44,(short)pbVar14);
                pbVar14 = pbVar14 + 1;
                *pbVar7 = *pbVar7 + bVar22;
                puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),
                                           bVar5 | (byte)((uint)iVar13 >> 8));
                cVar33 = bVar22 - (byte)*puVar46;
                pcVar10 = (char *)CONCAT31(uVar17,cVar33);
                *pcVar10 = *pcVar10 + cVar33 + (bVar22 < (byte)*puVar46);
                *pbVar14 = *pbVar14 + cVar33;
                pcVar10 = (char *)((int)pcVar10 * 2 + 0x79);
                *pcVar10 = *pcVar10 + (char)((uint)pbVar14 >> 8);
                pbVar7 = (byte *)in((short)pbVar14);
                puVar44 = puVar44 + 1;
              }
              *(byte *)puVar44 = (byte)*puVar44 + cVar38;
              *pbVar7 = *pbVar7 + (char)pbVar7;
              *pbVar7 = *pbVar7 + (char)pbVar7;
              uStack_74 = (undefined1)in_DS;
              uStack_73 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar7;
              bVar5 = (byte)((uint)puVar46 >> 8);
              bVar24 = bVar5 + *pbVar7;
              iVar13 = *(int *)pbVar7;
              *pbVar14 = *pbVar14 + cVar38;
              bVar22 = (char)(pbVar7 + (uint)CARRY1(bVar5,bVar4) + iVar13) - (byte)*puVar45;
              pbVar7 = (byte *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar5,bVar4) + iVar13)
                                              >> 8),bVar22);
              *(byte *)puVar45 = (byte)*puVar45 ^ bVar22;
              *pbVar30 = *pbVar30 + (char)puVar45;
              *pbVar7 = *pbVar7 + bVar22;
              *pbVar7 = *pbVar7 + bVar22;
              *pbVar7 = *pbVar7 + bVar22;
              puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                         CONCAT11(bVar24 + *pbVar7,cVar38));
              pbVar7 = pbVar7 + (uint)CARRY1(bVar24,*pbVar7) + *(int *)pbVar7;
              *pbVar14 = *pbVar14 + cVar38;
              puVar44 = (uint *)((int)puVar44 + *(int *)(pbVar14 + 0x3e));
            }
            *(byte *)puVar44 = (byte)*puVar44 + (char)pbVar7;
            cVar38 = (char)pbVar7 + 'r';
            puVar44 = (uint *)((int)puVar44 + -1);
            uVar8 = CONCAT31((int3)((uint)pbVar7 >> 8),cVar38);
            *(byte *)puVar44 = *(byte *)puVar44 + cVar38;
            bVar48 = 0xfff38f8d < uVar8;
            iVar13 = uVar8 + 0xc7072;
            pbVar7 = pbVar30;
          } while (SCARRY4(uVar8,0xc7072));
        } while( true );
      }
      *pcVar10 = *pcVar10 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar36 = (byte *)CONCAT31(uVar17,bVar4);
      bVar22 = *pbVar36;
      *pbVar36 = *pbVar36 + bVar4;
      uVar17 = (undefined3)
               ((uint)(pbVar36 + (uint)CARRY1(bVar22,bVar4) + *(int *)((int)puVar46 + (int)pbVar14))
               >> 8);
      cVar33 = (char)(pbVar36 + (uint)CARRY1(bVar22,bVar4) + *(int *)((int)puVar46 + (int)pbVar14))
               + 'E';
      pcVar10 = (char *)CONCAT31(uVar17,cVar33);
      *pcVar10 = *pcVar10 + cVar33;
      cVar33 = cVar33 + *pcVar10;
      pcVar10 = (char *)CONCAT31(uVar17,cVar33);
      *pcVar10 = *pcVar10 + cVar33;
      puVar47 = (uint *)CONCAT31(uVar17,cVar33 + *pcVar10);
      *(char *)puVar47 = (char)*puVar47 + cVar33 + *pcVar10;
      pbVar36 = (byte *)((uint)puVar47 | *puVar47);
      bVar4 = *pbVar36;
      bVar22 = (byte)pbVar36;
      *pbVar36 = *pbVar36 + bVar22;
      piVar15 = (int *)CONCAT31((int3)((uint)pbVar36 >> 8),bVar22 + CARRY1(bVar4,bVar22));
      puVar47 = puVar44;
code_r0x00405117:
      *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
      puVar37 = (uint *)((int)puVar37 - *puVar37);
      puVar44 = puVar47 + 1;
      out(*puVar47,uVar26);
    }
    *pbVar14 = *pbVar14 + (char)puVar46;
    bVar48 = puVar37 < (uint *)*piVar15;
    puVar37 = (uint *)((int)puVar37 - *piVar15);
    bVar4 = (byte)((uint)puVar46 >> 8);
    *(byte *)((int)puVar28 + 0x39) = (*(byte *)((int)puVar28 + 0x39) - bVar4) - bVar48;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    uVar8 = *puVar37;
    *(int *)((int)puVar28 + 0x39) = *(int *)((int)puVar28 + 0x39) - (int)pbVar7;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar8 | (byte)*puVar37,(char)puVar46));
    *(char *)(piVar15 + 10) = (char)piVar15[10] + cVar38;
  } while( true );
code_r0x004052ee:
  *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
  bVar4 = (char)piVar15 + 0x28;
  pbVar7 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),bVar4);
  *pbVar7 = *pbVar7 ^ bVar4;
  *(byte *)puVar45 = (byte)*puVar45 + (char)((uint)pcVar10 >> 8);
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + (byte)pcVar10;
  piVar15 = (int *)(((uint)pbVar7 | 0x1496f09) + *puVar28 + (uint)CARRY1(bVar4,(byte)pcVar10));
  puVar46 = puVar47 + 1;
  out(*puVar47,(short)pbVar14);
  pbVar36 = pbVar14 + -1;
  *piVar15 = *piVar15 + (int)piVar15;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),(byte)pbVar36 | (byte)*puVar45);
  cVar38 = (char)piVar15 + '\x13';
  pbVar7 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),cVar38);
  puVar44 = puVar45;
  puVar47 = puVar46;
  if ((POPCOUNT(cVar38) & 1U) != 0) {
    *pbVar14 = *pbVar14 - (char)((uint)pbVar36 >> 8);
    *pbVar7 = *pbVar7 + cVar38;
code_r0x00405396:
    bVar4 = *pbVar7;
    bVar22 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar22;
    *puVar46 = (uint)(pbVar7 + (uint)CARRY1(bVar4,bVar22) + *puVar46);
    out(*puVar46,(short)pbVar14);
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    pcVar10 = (char *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                               CONCAT11((byte)((uint)pbVar7 >> 8) | (byte)puVar46[1],bVar22));
    *(char **)((int)puVar28 + -1) = pcVar10 + *(int *)((int)puVar28 + -1);
    out(puVar46[1],(short)pbVar14);
    *pcVar10 = *pcVar10 + bVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar7 = *pbVar7 + (char)pbVar7;
  piVar15 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),(char)pbVar7 + 'o');
  puVar45 = (uint *)((int)puVar44 + -1);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar17 = (undefined3)((uint)pbVar14 >> 8);
  piVar15 = (int *)((int)piVar15 + 0x1b7e);
  bVar5 = (byte)pbVar14 | *(byte *)puVar45 | *(byte *)puVar45;
  iRam04115f2c = iRam04115f2c + (int)piVar15;
  out(*puVar47,(short)CONCAT31(uVar17,bVar5));
  *piVar15 = *piVar15 + (int)piVar15;
  bVar5 = bVar5 | (byte)piVar15;
  iVar31 = CONCAT31(uVar17,bVar5);
  pbVar7 = (byte *)((int)piVar15 - *piVar15);
  cVar38 = (char)pbVar7;
  *pcVar10 = *pcVar10 + cVar38;
  cVar33 = (char)pcVar10 - bVar5;
  *pbVar7 = *pbVar7 + cVar38;
  uVar26 = (undefined2)((uint)pcVar10 >> 0x10);
  bVar22 = (byte)((uint)pcVar10 >> 8) | *pbVar7;
  pbVar30 = pbVar30 + -1;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar4 = *(byte *)(CONCAT22(uVar26,CONCAT11(bVar22,cVar33)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar7;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar30;
  *pbVar7 = *pbVar7 + cVar38;
  bVar4 = bVar22 | bVar4 | *(byte *)puVar45;
  iVar21 = CONCAT22(uVar26,CONCAT11(bVar4,cVar33));
  pbVar36 = (byte *)((uint)(puVar47 + 1) ^ *(uint *)(iVar31 + -0x43));
  iVar13 = *(int *)pbVar7;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  if (SCARRY4(iVar13,(int)pbVar7)) {
    *pbVar7 = *pbVar7 + cVar38;
  }
  pbVar14 = pbVar7 + 0x5674;
  puVar28 = (uint *)((int)puVar28 +
                    (-(uint)((byte *)0xffffa98b < pbVar7) - *(int *)(pbVar36 + -0x7f)));
  bVar22 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar22;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  bVar24 = bVar22 + 0x2d;
  piVar15 = (int *)CONCAT31(uVar18,bVar24);
  *(uint *)(pbVar36 + (int)puVar28 * 8) =
       *(int *)(pbVar36 + (int)puVar28 * 8) + iVar31 + (uint)(0xd2 < bVar22);
  bVar22 = *pbVar36;
  *pbVar36 = *pbVar36 + bVar24;
  if (!CARRY1(bVar22,bVar24)) {
    do {
      pbVar14 = (byte *)(iVar31 + 1);
      bVar22 = (byte)piVar15;
      *(byte *)piVar15 = (char)*piVar15 + bVar22;
      bVar5 = (byte)((uint)piVar15 >> 8);
      bVar24 = (byte)puVar45 | bVar5;
      puVar44 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),bVar24);
      out(*(undefined4 *)pbVar36,(short)pbVar14);
      *(byte *)piVar15 = (char)*piVar15 + bVar22;
      uVar26 = (undefined2)((uint)iVar21 >> 0x10);
      cVar38 = (char)iVar21;
      pbVar7 = (byte *)CONCAT22(uVar26,CONCAT11((byte)((uint)iVar21 >> 8) | *pbVar14,cVar38));
      bVar4 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar22;
      *(byte *)piVar15 = (char)*piVar15 + bVar22 + CARRY1(bVar4,bVar22);
      *pbVar14 = *pbVar14 + bVar22;
      *(byte *)puVar28 = (byte)*puVar28 + bVar5;
      *(int *)((int)piVar15 * 2) =
           *(int *)((int)piVar15 * 2) + CONCAT22(uVar26,CONCAT11(0x1c,cVar38));
      *(byte *)piVar15 = (char)*piVar15 + bVar22;
      cVar33 = (char)pbVar14;
      *(byte *)puVar44 = (byte)*puVar44 + cVar33;
      *(byte *)((int)piVar15 * 2) = *(byte *)((int)piVar15 * 2) ^ bVar22;
      *(byte *)piVar15 = (char)*piVar15 + bVar22;
      pbVar7 = pbVar36 + 8;
      out(*(undefined4 *)(pbVar36 + 4),(short)pbVar14);
      piVar15 = (int *)0xa0a0000;
      *pbVar14 = *pbVar14;
      bVar22 = cVar38 - cVar33;
      iVar21 = CONCAT22(uVar26,CONCAT11((byte)puVar28[0x14] | 0x1c | bRam0ca87216,bVar22));
      *pbVar14 = *pbVar14;
      bVar4 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar22;
      if (!CARRY1(bVar4,bVar22)) {
        piVar15 = (int *)0x1e7b7000;
        bVar4 = (byte)((uint)puVar45 >> 8) | *(byte *)(iVar31 + 3);
        puVar44 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),CONCAT11(bVar4,bVar24));
        if (bVar4 != 0) {
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar33 + pbVar7[(int)puVar28 * 8]);
          piVar15 = (int *)0x6d7d7000;
          iVar21 = iVar21 + 1;
        }
      }
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      iVar31 = CONCAT31((int3)((uint)pbVar14 >> 8),(byte)pbVar14 | pbVar7[(int)puVar28 * 8]);
      *(char *)piVar15 = (char)*piVar15;
      piVar15 = (int *)CONCAT31((int3)((uint)piVar15 >> 8),0xf9);
      *puVar28 = (uint)((int)piVar15 + *puVar28 + 1);
      pbVar36 = pbVar36 + 0xc;
      out(*(undefined4 *)pbVar7,(short)iVar31);
      puVar45 = puVar44;
    } while( true );
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar24 = bVar24 | *(byte *)((int)piVar15 + 0x4000081);
  piVar15 = (int *)CONCAT31(uVar18,bVar24);
  if ('\0' < (char)bVar24) {
    *(byte *)piVar15 = (char)*piVar15 + bVar24;
    puVar47 = (uint *)CONCAT31(uVar18,bVar24 + 0x28);
    *puVar47 = *puVar47 ^ (uint)puVar47;
    *(byte *)puVar45 = *(byte *)puVar45 + bVar4;
    cVar38 = (bVar24 + 0x28) - bVar4;
    pcVar10 = (char *)CONCAT31(uVar18,cVar38);
    *pcVar10 = *pcVar10 + cVar38;
    pbVar14 = (byte *)CONCAT31(uVar17,bVar5 | *(byte *)puVar45);
    pcVar16 = (char *)CONCAT22((short)((uint)puVar45 >> 0x10),
                               CONCAT11((char)((uint)puVar45 >> 8) + *(byte *)((int)puVar44 + 0x7d),
                                        (char)puVar45));
    *pcVar10 = *pcVar10 + cVar38;
    pbVar7 = (byte *)CONCAT31(uVar18,cVar38 + 0x39U ^ *(byte *)CONCAT31(uVar18,cVar38 + 0x39U));
    *pcVar16 = *pcVar16 + bVar4;
    puVar46 = (uint *)(pbVar36 + 4);
    out(*(undefined4 *)pbVar36,(short)pbVar14);
    goto code_r0x00405396;
  }
  puVar47 = (uint *)(pbVar36 + 4);
  out(*(undefined4 *)pbVar36,(short)iVar31);
  pcVar10 = (char *)(iVar21 + -1);
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pbVar14 = (byte *)CONCAT31(uVar17,bVar5 | *(byte *)puVar45);
  goto code_r0x004052ee;
}


