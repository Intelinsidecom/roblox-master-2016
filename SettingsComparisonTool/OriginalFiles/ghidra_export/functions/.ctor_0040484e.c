/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040484e
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(undefined4 param_1, uint * param_2, uint * param_3, char * param_4, uint * param_5)
 * Local Vars  : in_EAX, uVar6, uVar8, pbVar7, pcVar10, puVar9, puVar12, uVar11, pbVar14, iVar13, pcVar16, piVar15, uVar18, uVar17, puVar20, puVar19, bVar22, iVar21, bVar24, bVar23, uVar26, uVar25, bVar28, cVar27, puVar30, puVar29, iVar32, pbVar31, cVar34, cVar33, pbVar35, unaff_EBX, cVar37, puVar36, cVar39, cVar38, unaff_EBP, ppbVar40, ppbVar42, ppbVar41, puVar43, unaff_ESI, unaff_EDI, puVar44, puVar46, puVar45, in_SS, in_ES, bVar47, in_DS, unaff_retaddr, in_AF, uStack_77, uStack_78, uStack_74, uStack_76, puStack_34, param_1, uStack_38, param_2, puStack_20, param_3, uStack_28, param_4, pbStack_18, param_5, puStack_1c, uStack_10, iStack_14, puStack_8, puStack_c, uVar1, puStack_4, uVar3, uVar2, bVar5, bVar4
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

int __fastcall _ctor(undefined4 param_1,uint *param_2,uint *param_3,char *param_4,uint *param_5)

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
  char cVar27;
  byte bVar28;
  uint *puVar29;
  uint *puVar30;
  byte *pbVar31;
  int iVar32;
  char cVar33;
  char cVar34;
  char cVar37;
  char cVar38;
  char cVar39;
  undefined4 unaff_EBX;
  byte *pbVar35;
  uint *puVar36;
  byte **ppbVar40;
  uint *unaff_EBP;
  byte **ppbVar41;
  byte **ppbVar42;
  char *unaff_ESI;
  uint *puVar43;
  uint *puVar44;
  int unaff_EDI;
  uint *puVar45;
  uint *puVar46;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar47;
  byte in_AF;
  uint *unaff_retaddr;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_38;
  uint *puStack_34;
  undefined2 uStack_28;
  uint *puStack_20;
  uint *puStack_1c;
  byte *pbStack_18;
  int iStack_14;
  undefined4 uStack_10;
  uint *puStack_c;
  uint *puStack_8;
  uint *puStack_4;
  
                    /* .NET CLR Managed Code */
  bVar22 = (char)((uint)param_1 >> 8) + *in_EAX;
  *in_EAX = *in_EAX;
  puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
  cVar33 = (char)unaff_EBX - *unaff_ESI;
  uVar26 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar37 = (char)((uint)unaff_EBX >> 8) +
           *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar33) + 0x73);
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar17 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = (char)in_EAX + 0x2aU & (byte)*param_2;
  iVar13 = *(int *)((int)unaff_EBP + 0x73);
  *(char *)CONCAT31(uVar17,bVar4) = *(char *)CONCAT31(uVar17,bVar4) + bVar4;
  pcVar10 = (char *)CONCAT31(uVar17,bVar4 + 0x2a);
  puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_DS);
  cVar37 = cVar37 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar37,cVar33)) + 0x74);
  puVar46 = (uint *)CONCAT22(uVar26,CONCAT11(cVar37,cVar33));
  *pcVar10 = *pcVar10 + bVar4 + 0x2a;
  bVar4 = bVar4 + 0x54 & (byte)*param_2;
  puVar45 = (uint *)(unaff_EDI + iVar13 + unaff_EBP[0x1d]);
  *(char *)CONCAT31(uVar17,bVar4) = *(char *)CONCAT31(uVar17,bVar4) + bVar4;
  pbVar7 = (byte *)CONCAT31(uVar17,bVar4 + 0x2a);
  puStack_c = (uint *)CONCAT22(puStack_c._2_2_,in_DS);
  puVar29 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar22 + *pbVar7,(char)param_1)
                            );
  pbVar7 = pbVar7 + (uint)CARRY1(bVar22,*pbVar7) + *(int *)pbVar7;
  *(char *)param_2 = (char)*param_2 + (char)param_1;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 - *pbVar7);
  puVar43 = (uint *)(unaff_ESI + (uint)((byte)pbVar7 < *pbVar7) + *(int *)pbVar14);
  uStack_10 = (uint *)CONCAT22(uStack_10._2_2_,in_ES);
  do {
    bVar22 = (byte)pbVar14;
    pbVar14[0x2c000000] = pbVar14[0x2c000000] + bVar22;
    bVar4 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar22;
    *param_2 = (uint)(pbVar14 + (uint)CARRY1(bVar4,bVar22) + *param_2);
    cVar27 = (char)param_2;
    *(byte *)puVar46 = (byte)*puVar46 - cVar27;
    *pbVar14 = *pbVar14 + bVar22;
    puVar44 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar22 | (byte)*puVar46);
    uVar8 = (uint)puVar44 | *puVar44;
    cVar39 = (char)puVar29;
    cVar34 = (char)uVar8;
    *(byte *)puVar43 = (byte)*puVar43 + cVar34;
    uVar17 = (undefined3)(uVar8 >> 8);
    bVar4 = cVar34 + (byte)*puVar46;
    pcVar10 = (char *)CONCAT31(uVar17,bVar4);
    bVar22 = (byte)((uint)puVar29 >> 8);
    uVar25 = (undefined2)((uint)puVar29 >> 0x10);
    if (SCARRY1(cVar34,(byte)*puVar46) == (char)bVar4 < '\0') {
      *(byte *)puVar46 = (byte)*puVar46 - cVar27;
      *pcVar10 = *pcVar10 + bVar4;
      puVar29 = (uint *)CONCAT22(uVar25,CONCAT11(bVar22 | (byte)*param_2,cVar39));
      param_2 = (uint *)((int)param_2 + 1);
      pcVar10 = pcVar10 + *param_2;
      if ((POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0) goto code_r0x00404921;
      pcVar10 = (char *)((uint)pcVar10 | 8);
code_r0x004048de:
      cVar33 = (char)pcVar10;
      *(byte *)puVar43 = (byte)*puVar43 + cVar33;
      *pcVar10 = *pcVar10 + cVar33;
      *(byte **)(pcVar10 + (int)puVar29) = (byte *)(*(int *)(pcVar10 + (int)puVar29) + (int)puVar29)
      ;
      iStack_14 = CONCAT22(iStack_14._2_2_,in_ES);
      bVar4 = *(byte *)((int)puVar46 + 0x75);
      *pcVar10 = *pcVar10 + cVar33;
      pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar33 + 'o');
      puVar43 = (uint *)((int)puVar43 + 1);
      *pcVar10 = *pcVar10 + cVar33 + 'o';
      uStack_10 = (uint *)((uint)uStack_10 & 0xffff0000);
      puVar44 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                 CONCAT11((char)((uint)puVar46 >> 8) + bVar4,(char)puVar46));
      unaff_EBP = puVar46;
      in_SS = in_ES;
code_r0x004048f5:
      puVar46 = puVar44;
      pcVar10 = (char *)((int)((uint)pcVar10 & 0x7e26062d) - *(int *)((uint)pcVar10 & 0x7e26062d));
      *(byte *)param_2 = (byte)*param_2 + (char)puVar29;
      do {
        uRam00c36f08 = SUB41(pcVar10,0);
        while( true ) {
          uVar8 = *puVar43;
          cVar33 = (char)pcVar10;
          *(byte *)puVar43 = (byte)*puVar43 + cVar33;
          uStack_10 = (uint *)CONCAT22(uStack_10._2_2_,in_ES);
          if (SCARRY1((byte)uVar8,cVar33) == (char)(byte)*puVar43 < '\0') {
            pcVar10[(int)unaff_EBP] = pcVar10[(int)unaff_EBP] + cVar33;
            goto code_r0x00404982;
          }
          *pcVar10 = *pcVar10 + cVar33;
          pbVar7 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar33 + '*');
          uStack_10 = (uint *)CONCAT22(uStack_10._2_2_,in_DS);
          bVar4 = (byte)((uint)puVar29 >> 8);
          cVar33 = (char)puVar29;
          bVar22 = bVar4 + *pbVar7;
          pbVar7 = pbVar7 + (uint)CARRY1(bVar4,*pbVar7) + *(int *)pbVar7;
          *(byte *)param_2 = (byte)*param_2 + cVar33;
          cVar37 = (char)puVar46 - (byte)*puVar43;
          bVar4 = *pbVar7;
          puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                     CONCAT11(bVar22 + *pbVar7,cVar33));
          iVar13 = *(int *)pbVar7;
          *(byte *)param_2 = (byte)*param_2 + cVar33;
          pcVar10 = (char *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar22,bVar4) + iVar13) >>
                                           8),(char)(pbVar7 + (uint)CARRY1(bVar22,bVar4) + iVar13) -
                                              *(byte *)((int)param_2 + 3));
          puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                     CONCAT11((char)((uint)puVar46 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)puVar46 >> 8),cVar37)
                                                       + -0x3a),cVar37));
code_r0x00404921:
          bVar4 = (byte)pcVar10;
          *pcVar10 = *pcVar10 + bVar4;
          pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar4 + 0x6f);
          *(byte *)puVar29 = ((byte)*puVar29 - (bVar4 + 0x6f)) - (0x90 < bVar4);
code_r0x00404927:
          *(byte *)param_2 = (byte)*param_2 + (char)puVar29;
          iStack_14 = CONCAT22(iStack_14._2_2_,in_SS);
          *(byte *)puVar29 = (byte)*puVar29 + 1;
          cVar33 = (char)((uint)puVar29 >> 8) - *(byte *)((int)puVar43 + 2);
          puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(cVar33,(char)puVar29));
          if ((POPCOUNT(cVar33) & 1U) == 0) break;
          pcVar10 = pcVar10 + -0x1b7e2606;
          *pcVar10 = *pcVar10 + (char)pcVar10;
          pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar10 >> 8) | (byte)param_2[0x30dbc2],
                                              (char)pcVar10));
        }
code_r0x00404931:
        *pcVar10 = *pcVar10 + (char)pcVar10;
        cVar33 = (char)pcVar10 + '\x02';
        pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar33);
        puVar44 = puVar43;
      } while ((POPCOUNT(cVar33) & 1U) != 0);
      do {
        bVar4 = (byte)pcVar10;
        *pcVar10 = *pcVar10 + bVar4;
        uVar17 = (undefined3)((uint)pcVar10 >> 8);
        piVar15 = (int *)CONCAT31(uVar17,bVar4 + 0x6f);
        *puVar29 = (*puVar29 - (int)piVar15) - (uint)(0x90 < bVar4);
        *(byte *)param_2 = (byte)*param_2 + (char)puVar29;
        iVar13 = *(int *)((int)puVar45 + 0x1a);
        *piVar15 = *piVar15 + (int)piVar15;
        param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*puVar44);
        *(byte *)puVar29 = (byte)*puVar29 + 1;
        bVar4 = (bVar4 + 0x6f) - (char)*piVar15;
        pbVar7 = (byte *)CONCAT31(uVar17,bVar4);
        *pbVar7 = *pbVar7 + bVar4;
        puVar44 = (uint *)((int)puVar44 + *(int *)pbVar7);
        cVar33 = bVar4 + *pbVar7;
        puVar9 = (ushort *)CONCAT31(uVar17,cVar33);
        *puVar9 = *puVar9 + (ushort)CARRY1(bVar4,*pbVar7) * (((ushort)puVar9 & 3) - (*puVar9 & 3));
        *(char *)puVar9 = (char)*puVar9 + cVar33;
        *(char *)puVar9 = (char)*puVar9 + cVar33;
        *(char *)puVar9 = (char)*puVar9 + cVar33;
        puVar45 = (uint *)((int)puVar45 + puVar46[0x1c]);
        unaff_EBP = (uint *)((int)unaff_EBP + iVar13);
code_r0x0040495b:
        cVar33 = (char)puVar9;
        *(char *)puVar9 = (char)*puVar9 + cVar33;
        uVar17 = (undefined3)((uint)puVar9 >> 8);
        cVar37 = cVar33 + '\x02';
        pcVar10 = (char *)CONCAT31(uVar17,cVar37);
        if ((POPCOUNT(cVar37) & 1U) != 0) {
          *param_2 = (uint)(*param_2 + (int)unaff_EBP);
          puVar43 = (uint *)((int)puVar44 + 1);
          out((byte)*puVar44,(short)param_2);
          puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                     CONCAT11((char)((uint)puVar46 >> 8) +
                                              *(byte *)((int)puVar46 + -0x3b),(char)puVar46));
          goto code_r0x00404931;
        }
        *pcVar10 = *pcVar10 + cVar37;
        pbVar7 = (byte *)(CONCAT31(uVar17,cVar33 + '}') + (int)unaff_EBP);
        *pbVar7 = *pbVar7 + cVar33 + '}';
        *param_4 = *param_4 + (char)param_4;
        puVar29 = (uint *)CONCAT22((short)((uint)param_3 >> 0x10),
                                   CONCAT11((byte)((uint)param_3 >> 8) | *(byte *)((int)param_3 * 3)
                                            ,(char)param_3));
        puVar45 = (uint *)(iStack_14 + *(int *)((int)puStack_4 + 0x6f));
        pcVar10 = param_4;
        param_2 = unaff_retaddr;
        puVar46 = puStack_4;
        unaff_EBP = puStack_c;
        puVar44 = uStack_10;
        while( true ) {
          cVar33 = (char)pcVar10;
          *pcVar10 = *pcVar10 + cVar33;
          uVar17 = (undefined3)((uint)pcVar10 >> 8);
          cVar37 = cVar33 + '\x02';
          pcVar10 = (char *)CONCAT31(uVar17,cVar37);
          if ((POPCOUNT(cVar37) & 1U) != 0) break;
          *pcVar10 = *pcVar10 + cVar37;
          pcVar10 = (char *)CONCAT31(uVar17,cVar33 + '}');
          out(*puVar44,(short)param_2);
          *pcVar10 = *pcVar10 + cVar33 + '}';
code_r0x00404982:
          *(char *)param_5 = (char)*param_5 + (char)param_5;
          puVar29 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                                     CONCAT11((byte)((uint)param_4 >> 8) | param_4[(int)puStack_c],
                                              (char)param_4));
          puVar45 = (uint *)((int)uStack_10 + *(int *)((int)unaff_retaddr + 0x71));
          puVar43 = param_5;
          param_2 = param_3;
          puVar46 = unaff_retaddr;
          puVar44 = puStack_c;
          while( true ) {
            cVar33 = (char)puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + cVar33;
            uVar17 = (undefined3)((uint)puVar43 >> 8);
            cVar37 = cVar33 + '\x02';
            puVar9 = (ushort *)CONCAT31(uVar17,cVar37);
            unaff_EBP = puStack_8;
            if ((POPCOUNT(cVar37) & 1U) != 0) goto code_r0x0040495b;
            *(char *)puVar9 = (char)*puVar9 + cVar37;
            bVar22 = cVar33 + 0x7d;
            iVar13 = CONCAT31(uVar17,bVar22);
            pbVar7 = (byte *)(iVar13 + (int)puStack_8);
            bVar4 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar22;
            uVar8 = *puVar29;
            *(byte *)param_2 = (byte)*param_2 + (char)puVar29;
            pcVar10 = (char *)(((iVar13 - uVar8) - (uint)CARRY1(bVar4,bVar22)) + -0x727b0317);
            cVar33 = (char)pcVar10;
            *pcVar10 = *pcVar10 + cVar33;
            uVar17 = (undefined3)((uint)pcVar10 >> 8);
            cVar37 = cVar33 + '\x02';
            pcVar10 = (char *)CONCAT31(uVar17,cVar37);
            if ((POPCOUNT(cVar37) & 1U) != 0) break;
            *pcVar10 = *pcVar10 + cVar37;
            bVar22 = cVar33 + 0x7d;
            iVar13 = CONCAT31(uVar17,bVar22);
            pbVar7 = (byte *)(iVar13 + (int)puStack_8);
            bVar4 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar22;
            puVar43 = (uint *)((iVar13 - *puVar29) - (uint)CARRY1(bVar4,bVar22));
            puVar36 = param_2;
code_r0x004049b4:
            *(byte *)puVar36 = (byte)*puVar36 + (char)puVar29;
            param_2 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),
                                       ((char)puVar36 - (byte)*puVar45) - (byte)*puVar44);
            bVar22 = *(byte *)((int)puVar44 + 0x72);
            *puVar43 = *puVar43 & (uint)puVar29;
            pbVar7 = (byte *)((int)puVar43 + 2);
            *pbVar7 = *pbVar7 + (char)((uint)puVar36 >> 8);
            bVar4 = *pbVar7;
            puVar19 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(char)puVar46 - bVar22);
            puVar36 = puVar44;
            while (puVar46 = puVar19, puVar44 = puVar36, (POPCOUNT(bVar4) & 1U) == 0) {
              cVar33 = (char)puVar43;
              *(byte *)puVar43 = (byte)*puVar43 + cVar33;
              uVar17 = (undefined3)((uint)puVar43 >> 8);
              cVar37 = cVar33 + '\x03';
              pbVar7 = (byte *)CONCAT31(uVar17,cVar37);
              puVar44 = puVar36 + 1;
              out(*puVar36,(short)param_2);
              in_SS = (undefined2)uStack_10;
              *pbVar7 = *pbVar7 + cVar37;
              cVar34 = (char)puVar29;
              puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                         CONCAT11((byte)((uint)puVar29 >> 8) | *pbVar7,cVar34));
              *(int *)pbVar7 = *(int *)pbVar7 - (int)pbVar7;
              *(byte *)param_2 = (byte)*param_2 + cVar34;
              cVar34 = (char)puVar19 - *(byte *)((int)puVar36 + 6);
              puVar46 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),cVar34);
              if ((POPCOUNT(cVar34) & 1U) != 0) {
                pbVar14 = (byte *)((int)puVar45 + (int)puStack_8 * 2);
                *pbVar14 = *pbVar14 + cVar37;
                ppbVar42 = (byte **)puStack_8;
                goto code_r0x00404a51;
              }
              *pbVar7 = *pbVar7 + cVar37;
              puVar43 = (uint *)CONCAT31(uVar17,cVar33 + 'r');
              *(byte *)puVar43 = (byte)*puVar43;
              uStack_10 = (uint *)CONCAT22(uStack_10._2_2_,in_ES);
              do {
                puVar45 = (uint *)((int)puVar45 + puVar46[0x1c]);
                bVar4 = (byte)puVar43;
                *(byte *)puVar43 = (byte)*puVar43 + bVar4;
                uVar17 = (undefined3)((uint)puVar43 >> 8);
                bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
                puVar43 = (uint *)CONCAT31(uVar17,bVar4);
                cVar33 = (char)puVar29;
                *(byte *)param_2 = (byte)*param_2 + cVar33;
                bVar22 = (char)((uint)puVar29 >> 8) - *(byte *)((int)puVar44 + 2);
                puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(bVar22,cVar33));
                puVar36 = param_2;
                if ((POPCOUNT(bVar22) & 1U) != 0) goto code_r0x004049b4;
                *(byte *)puVar43 = (byte)*puVar43 + bVar4;
                bVar5 = bVar4 + 2;
                puVar43 = (uint *)CONCAT31(uVar17,bVar5);
                ppbVar41 = (byte **)puStack_8;
                if ((POPCOUNT(bVar5) & 1U) == 0) goto code_r0x004049f5;
                puVar44 = uStack_10;
              } while (0xfd < bVar4);
              *(byte *)puVar43 = (byte)*puVar43 | bVar5;
              puVar19 = puVar46;
              puVar36 = uStack_10;
              bVar4 = (byte)*puVar43;
            }
          }
        }
        *(byte *)param_2 = (byte)*param_2 + (char)puVar29;
        iStack_14 = CONCAT22(iStack_14._2_2_,in_SS);
      } while( true );
    }
    *pcVar10 = *pcVar10 + bVar4;
    bVar5 = bVar4 + 2;
    pcVar10 = (char *)CONCAT31(uVar17,bVar5);
    if (bVar4 < 0xfe) {
      *(byte *)puVar43 = (byte)*puVar43 + bVar5;
      puVar44 = puVar46;
      goto code_r0x004048f5;
    }
    *pcVar10 = *pcVar10 + bVar5;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)puVar46 + -0x5b)
                                        ,cVar27));
    cVar34 = *pcVar10;
    *pcVar10 = *pcVar10 + bVar5;
    uStack_10 = (uint *)CONCAT22(uStack_10._2_2_,in_ES);
    if (SCARRY1(cVar34,bVar5) == *pcVar10 < '\0') goto code_r0x00404927;
    *pcVar10 = *pcVar10 + bVar5;
    bVar4 = bVar4 + 4;
    pbVar14 = (byte *)CONCAT31(uVar17,bVar4);
    if (0xfd < bVar5) {
      *pbVar14 = *pbVar14 + bVar4;
      pbStack_18 = (byte *)CONCAT22(pbStack_18._2_2_,in_ES);
      bVar4 = bVar4 | (byte)*puVar43;
      pcVar10 = (char *)CONCAT31(uVar17,bVar4);
      *pcVar10 = *pcVar10 + bVar4;
      *puVar46 = (uint)(*puVar46 + (int)puVar29);
      puVar46 = (uint *)CONCAT22(uVar26,CONCAT11(cVar37 + *(byte *)((int)puVar46 + 0x75),cVar33));
      *pcVar10 = *pcVar10 + bVar4;
      pcVar10 = (char *)CONCAT31(uVar17,bVar4 + 0x6f);
      *pcVar10 = *pcVar10 + bVar4 + 0x6f;
      uStack_10 = (uint *)((uint)uStack_10._2_2_ << 0x10);
      pcVar10 = (char *)((int)((uint)pcVar10 & 0x7e26062d) - *(int *)((uint)pcVar10 & 0x7e26062d));
      *(byte *)param_2 = (byte)*param_2 + cVar39;
      uRam00c16f07 = SUB41(pcVar10,0);
      goto code_r0x004048de;
    }
    *pbVar14 = *pbVar14 + bVar4;
    puVar29 = (uint *)CONCAT22(uVar25,CONCAT11(bVar22 | (byte)*param_2,cVar39));
    *(byte *)puVar46 = (byte)*puVar46 + cVar27;
    *(byte *)puVar43 = (byte)*puVar43 ^ bVar4;
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar43;
    *(byte *)puVar43 = (byte)*puVar43 + bVar4;
    uVar17 = (undefined3)((uint)puVar43 >> 8);
    bVar5 = bVar4 + 0x6f;
    pbVar14 = (byte *)CONCAT31(uVar17,bVar5);
    *puVar29 = (*puVar29 - (int)pbVar14) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar33;
    pbVar7 = (byte *)((int)ppbVar41 + *(int *)((int)puVar45 + 0x1a));
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    uVar18 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | (byte)*puVar44;
    param_2 = (uint *)CONCAT31(uVar18,bVar4);
    *(byte *)puVar29 = (byte)*puVar29 + 1;
    cVar37 = bVar5 - *pbVar14;
    puVar44 = (uint *)((int)puVar44 + (-(uint)(bVar5 < *pbVar14) - *(int *)CONCAT31(uVar17,cVar37)))
    ;
    uVar11 = CONCAT31(uVar17,cVar37 + *(char *)CONCAT31(uVar17,cVar37));
    bVar47 = CARRY1(bRam14110000,bVar22);
    bRam14110000 = bRam14110000 + bVar22;
    puVar43 = (uint *)((int)puVar46 + (int)puVar44 * 2);
    uVar8 = *puVar43;
    uVar2 = uVar11 + *puVar43;
    puVar12 = (undefined4 *)(uVar2 + bVar47);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar12 = uVar1;
    iStack_14 = CONCAT22(iStack_14._2_2_,in_ES);
    uVar8 = (uint)(CARRY4(uVar11,uVar8) || CARRY4(uVar2,(uint)bVar47));
    puVar43 = (uint *)((int)puVar12 + uRam7d020511 + uVar8);
    ppbVar40 = &pbStack_18;
    ppbVar42 = &pbStack_18;
    ppbVar41 = &pbStack_18;
    pbStack_18 = pbVar7;
    cVar37 = '\x03';
    do {
      pbVar7 = pbVar7 + -4;
      ppbVar40 = ppbVar40 + -1;
      *ppbVar40 = (byte *)*(undefined4 *)pbVar7;
      cVar37 = cVar37 + -1;
    } while ('\0' < cVar37);
    uStack_10 = (uint *)&pbStack_18;
    pbRam00c82802 =
         (byte *)((int)puVar43 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar12,uRam7d020511) ||
                      CARRY4((int)puVar12 + uRam7d020511,uVar8))));
    uVar8 = *puVar44;
    cVar37 = (char)puVar43;
    *(byte *)puVar44 = (byte)*puVar44 + cVar37;
  } while (SCARRY1((byte)uVar8,cVar37) == (char)(byte)*puVar44 < '\0');
  *(byte *)puVar43 = (byte)*puVar43 + cVar37;
  iVar13 = CONCAT31((int3)((uint)puVar43 >> 8),cVar37 + '\x11') + 0xc57b;
  bVar22 = (byte)iVar13;
  *param_2 = *param_2 ^ (uint)puVar46;
  param_2 = (uint *)CONCAT31(uVar18,bVar4 + (byte)*puVar29);
  iVar13 = (CONCAT31((int3)((uint)iVar13 >> 8),bVar22 + 0x6f) - (uint)(0x90 < bVar22)) + -0x18093a86
  ;
  cVar37 = (char)iVar13;
  uVar17 = (undefined3)((uint)iVar13 >> 8);
  cVar33 = cVar37 + '\x02';
  pbVar7 = (byte *)CONCAT31(uVar17,cVar33);
  if ((POPCOUNT(cVar33) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar7 = *pbVar7 + cVar33;
  pbVar7 = (byte *)CONCAT31(uVar17,cVar37 + 'q');
  ppbVar42 = &pbStack_18;
code_r0x00404a51:
  pbVar14 = pbVar7 + 1;
  cVar33 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar33;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((char)((uint)puVar19 >> 8) - cVar33,cVar34));
  *pbVar14 = *pbVar14 + cVar33;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar29);
  pbVar7 = pbVar7 + 0x757b03;
  pbVar14 = (byte *)((int)puVar45 + (int)ppbVar42 * 2);
  cVar33 = (char)pbVar7;
  *pbVar14 = *pbVar14 + cVar33;
  *pbVar7 = *pbVar7 + cVar33;
  *(byte *)puVar44 = (byte)*puVar44 - (char)((uint)pbVar7 >> 8);
  *pbVar7 = *pbVar7 + cVar33;
  puVar45 = (uint *)((int)puVar45 - *(int *)((int)ppbVar42 + -0x3a));
  *pbVar7 = *pbVar7 + cVar33;
  pbVar7 = (byte *)(CONCAT31((int3)((uint)pbVar7 >> 8),cVar33 + '\x11') + 0x757b02);
  pbVar14 = (byte *)((int)puVar45 + (int)ppbVar42 * 2);
  bVar22 = (byte)pbVar7;
  *pbVar14 = *pbVar14 + bVar22;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar22;
  puStack_34 = (uint *)CONCAT22(puStack_34._2_2_,in_ES);
  pbRam011006fe = pbVar7 + (int)(pbRam011006fe + CARRY1(bVar4,bVar22));
  uVar8 = *puVar44;
  *(byte *)puVar44 = (byte)*puVar44 + bVar22;
  if (!CARRY1((byte)uVar8,bVar22)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar4;
    bVar5 = (byte)puVar29;
    puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                               CONCAT11((byte)((uint)puVar29 >> 8) | *pbVar7,bVar5));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar17 = (undefined3)((uint)pbVar7 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar33 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar10 = (char *)CONCAT31(uVar17,cVar33);
    *pcVar10 = *pcVar10 + cVar33;
    puVar45 = (uint *)((int)puVar45 - *(int *)((int)ppbVar42 + -0x39));
    *pcVar10 = *pcVar10 + cVar33;
    iVar13 = CONCAT31(uVar17,cVar33 + '\x11') + 0xc57b;
    iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar13;
    bVar22 = bVar4 + 0x6f;
    pbVar7 = (byte *)CONCAT31((int3)((uint)iVar13 >> 8),bVar22);
    *puVar29 = (*puVar29 - (int)pbVar7) - (uint)(0x90 < bVar4);
    uVar8 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    pbRam011106fe = pbVar7 + (int)(pbRam011106fe + CARRY1((byte)uVar8,bVar5));
    uVar8 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar22;
    if (!CARRY1((byte)uVar8,bVar22)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    bVar4 = (byte)puVar29;
    bVar22 = (byte)((uint)puVar29 >> 8) | *pbVar7;
    puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(bVar22,bVar4));
    *pbVar7 = *pbVar7 - (char)pbVar7;
    *(byte *)puVar46 = (byte)*puVar46 + bVar22;
    out(*puVar44,(short)param_2);
    *puVar29 = *puVar29 & (uint)pbVar7;
    uVar8 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar4;
    pbVar7 = pbVar7 + (uint)CARRY1((byte)uVar8,bVar4) + puVar44[1];
    *pbVar7 = *pbVar7 + (char)pbVar7;
    *(byte *)puVar29 = (byte)*puVar29 + (char)param_2;
    puVar44 = puVar44 + 1;
    while( true ) {
      out(*puVar44,(short)param_2);
      pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 & (byte)*puVar29);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar29;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar46[5],
                                          (char)param_2));
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      puVar44 = puVar44 + 1;
code_r0x00404ad4:
      puStack_34 = (uint *)CONCAT22(puStack_34._2_2_,in_ES);
      pbVar7 = (byte *)((uint)pbVar7 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar7;
code_r0x00404add:
      bVar4 = (byte)pbVar7;
      uVar17 = (undefined3)((uint)pbVar7 >> 8);
      cVar33 = bVar4 + 8;
      pbVar7 = (byte *)CONCAT31(uVar17,cVar33);
      if (SCARRY1(bVar4,'\b') == cVar33 < '\0') break;
      *pbVar7 = *pbVar7 + cVar33;
      cVar33 = bVar4 + 10;
      piVar15 = (int *)CONCAT31(uVar17,cVar33);
      if ((POPCOUNT(cVar33) & 1U) != 0) {
        *piVar15 = (int)(*piVar15 + (int)piVar15);
        goto code_r0x00404b18;
      }
      *(char *)piVar15 = (char)*piVar15 + cVar33;
      puVar43 = (uint *)CONCAT31(uVar17,bVar4 + 0x7c);
      *puVar43 = *puVar43 & (uint)puVar29;
      *(char *)((int)puVar43 + 0x11) = *(char *)((int)puVar43 + 0x11) + (char)((uint)param_2 >> 8);
      cVar33 = (char)((int)puVar43 + 0xc67b);
      uVar17 = (undefined3)((uint)((int)puVar43 + 0xc67b) >> 8);
      bVar4 = cVar33 + 8;
      pbVar7 = (byte *)CONCAT31(uVar17,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar7 = *pbVar7 + bVar4;
        cRam02060000 = cVar33 + 'w';
        puVar36 = (uint *)CONCAT31(uVar17,cRam02060000);
        *(byte *)puVar36 = (byte)*puVar36 + cRam02060000;
        cVar33 = (char)puVar29;
        puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                   CONCAT11((byte)((uint)puVar29 >> 8) | (byte)*puVar36,cVar33));
        *puVar36 = *puVar36 - (int)puVar36;
        *(byte *)param_2 = (byte)*param_2 + cVar33;
        puVar43 = puVar44 + 1;
        out(*puVar44,(short)param_2);
        puVar44 = puVar43;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar10 = (char *)((uint)puVar36 | *puVar36);
        goto code_r0x00404b89;
      }
      bVar22 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar4;
      *puVar44 = (uint)(pbVar7 + (uint)CARRY1(bVar22,bVar4) + *puVar44);
    }
    *(byte *)puVar44 = (byte)*puVar44 + 1;
    *puVar29 = (uint)(pbVar7 + (uint)(0xf7 < bVar4) + *puVar29);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar36 = (byte)*puVar36 + (char)puVar36;
    puVar43 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(char)puVar36 + 'r');
    piVar15 = (int *)((uint)puVar43 | *puVar43);
    param_2 = puStack_34;
code_r0x00404b18:
    bRam11060000 = (byte)piVar15;
    iVar13 = CONCAT31((int3)((uint)((int)piVar15 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar15 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar13;
    iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),bVar4 + 0x6f);
    *puVar29 = (*puVar29 - iVar13) - (uint)(0x90 < bVar4);
    cVar33 = (char)puVar29;
    *(byte *)param_2 = (byte)*param_2 + cVar33;
    bVar23 = (byte)((uint)puVar46 >> 8);
    bVar5 = (byte)((uint)param_2 >> 8) | bVar23;
    pcVar16 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar5,(byte)param_2));
    piVar15 = (int *)(iVar13 + 0x73060001);
    *(byte *)puVar29 = (byte)*puVar29 & (byte)piVar15;
    *pcVar16 = *pcVar16 + cVar33;
    bVar22 = (byte)((uint)puVar29 >> 8);
    *(byte *)piVar15 = *(char *)piVar15 - bVar22;
    *(byte *)piVar15 = *(char *)piVar15 + (byte)piVar15;
    iVar13 = *piVar15;
    *piVar15 = *piVar15 - (int)piVar15;
    *(byte *)puVar46 = (byte)*puVar46 + bVar22;
    pcVar10 = (char *)((uint)piVar15 | *puVar45);
    *pcVar16 = *pcVar16 - bVar22;
    bVar4 = (byte)pcVar10;
    *pcVar10 = *pcVar10 + bVar4;
    ppbVar42 = (byte **)(((int)ppbVar42 - iVar13) - *(int *)(pcVar10 + ((int)ppbVar42 - iVar13)));
    uVar26 = (undefined2)((uint)puVar46 >> 0x10);
    bVar24 = (byte)puVar46;
    cVar37 = bVar23 + *(byte *)((int)puVar46 + 0x76);
    pbVar7 = (byte *)CONCAT22(uVar26,CONCAT11(cVar37,bVar24));
    *pcVar10 = *pcVar10 + bVar4;
    uVar17 = (undefined3)((uint)pcVar10 >> 8);
    uVar11 = CONCAT31(uVar17,bVar4 + 7);
    puVar43 = (uint *)((int)ppbVar42 + -0x1faeef1);
    uVar8 = *puVar43;
    uVar2 = *puVar43 + uVar11;
    *puVar43 = uVar2 + (0xf8 < bVar4);
    puStack_34 = (uint *)CONCAT22(puStack_34._2_2_,in_ES);
    puVar46 = puStack_34;
    bVar4 = bVar4 + 7 + (byte)*puVar29 +
            (CARRY4(uVar8,uVar11) || CARRY4(uVar2,(uint)(0xf8 < bVar4)));
    puVar36 = (uint *)CONCAT31(uVar17,bVar4);
    uVar8 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    if (CARRY1((byte)uVar8,bVar4)) break;
    *(byte *)puVar36 = (byte)*puVar36 + bVar4;
    puVar46 = (uint *)CONCAT22(uVar26,CONCAT11(cVar37 + pbVar7[0x76],bVar24));
    uStack_38 = in_ES;
  }
  *(byte *)puVar36 = (byte)*puVar36 + bVar4;
  uVar18 = (undefined3)((uint)pcVar16 >> 8);
  bVar28 = (byte)param_2 | *pbVar7;
  param_2 = (uint *)CONCAT31(uVar18,bVar28);
  pcRam2b060000 = (char *)CONCAT31(uVar17,bVar4 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar4 + 0x39)) - (0xd7 < (byte)(bVar4 + 0x11));
  bVar23 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar22;
  puVar43 = puVar44 + 1;
  out(*puVar44,(short)param_2);
  bVar4 = (bVar4 + 0x37) - CARRY1(bVar23,bVar22);
  piVar15 = (int *)CONCAT31(uVar17,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    iVar13 = CONCAT31(uVar17,bVar4 + 0x11) + 0xc77b;
    pcVar10 = (char *)CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + 'r');
    pcVar10[0x28] = pcVar10[0x28] + bVar5;
code_r0x00404b89:
    cVar33 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar33;
    *pcVar10 = *pcVar10 + cVar33;
    *pcVar10 = *pcVar10 + cVar33;
    puVar9 = (ushort *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar33 + 'r');
    uVar6 = (ushort)puVar9 | *puVar9;
    pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),uVar6);
    bRam11060000 = (byte)uVar6;
    out(*puVar43,(short)param_2);
    *pcVar10 = *pcVar10 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar4;
  pbVar14 = (byte *)((int)ppbVar42 - *(int *)((int)puVar45 + 0x21));
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pcVar10 = (char *)CONCAT31(uVar18,bVar28 | *pbVar7);
  puVar45 = puVar44 + 2;
  out(*puVar43,(short)pcVar10);
  uVar8 = *puVar29;
  *pcVar10 = *pcVar10 + cVar33;
  uVar8 = CONCAT31(uVar17,bVar4 & (byte)uVar8) | 0x767b02;
  *(byte *)((int)puVar29 + (int)pcVar10) = *(byte *)((int)puVar29 + (int)pcVar10) + (char)uVar8;
  iVar13 = uVar8 + 0xc67b;
  cVar39 = (char)iVar13;
  uVar17 = (undefined3)((uint)iVar13 >> 8);
  cVar34 = cVar39 + 'r';
  pcVar10 = (char *)CONCAT31(uVar17,cVar34);
  pcVar10[0x28] = pcVar10[0x28] + bVar5;
  *pcVar10 = *pcVar10 + cVar34;
  uVar25 = (undefined2)((uint)puVar29 >> 0x10);
  bVar22 = bVar22 | *(byte *)((int)puStack_34 + -0x5e);
  puVar20 = (uint *)CONCAT22(uVar25,CONCAT11(bVar22,cVar33));
  *pcVar10 = *pcVar10 + cVar34;
  puStack_34 = (uint *)CONCAT22(puStack_34._2_2_,uStack_38);
  puVar43 = (uint *)CONCAT22(uVar26,CONCAT11(cVar37 + pbVar7[0x76],bVar24));
  *pcVar10 = *pcVar10 + cVar34;
  puVar29 = (uint *)CONCAT31(uVar17,cVar39 + -0x1c);
  pcVar10 = (char *)((uint)puVar29 | *puVar29);
  bVar47 = (POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar10;
  puVar29 = puStack_34;
  puVar36 = puVar43;
  pbVar7 = pbVar14;
  puVar19 = puVar46;
  uVar26 = uStack_38;
  if (!bVar47) goto code_r0x00404ca8;
  *pcVar10 = *pcVar10 + cRam02060000;
  puVar29 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cRam02060000 + 'r');
  *puVar29 = *puVar29 & (uint)puVar20;
  *(char *)((int)puVar29 + 0x11) = *(char *)((int)puVar29 + 0x11) + (char)((ushort)uStack_38 >> 8);
  iVar13 = (int)puVar29 + 0xc77b;
  uVar17 = (undefined3)((uint)iVar13 >> 8);
  cRam02060000 = (char)iVar13 + '\t';
  pbVar7 = (byte *)CONCAT31(uVar17,cRam02060000);
  out(*puVar45,uStack_38);
  *pbVar7 = *pbVar7 + cRam02060000;
  puVar19 = (uint *)CONCAT22(uVar25,CONCAT11(bVar22 | *pbVar7,cVar33));
  *(int *)pbVar7 = *(int *)pbVar7 - (int)pbVar7;
  *(byte *)puStack_34 = (byte)*puStack_34 + cVar33;
  out(puVar44[3],uStack_38);
  puVar30 = puStack_34;
  puVar45 = puVar44 + 4;
  uVar26 = uStack_38;
  if ((POPCOUNT((byte)*puStack_34) & 1U) != 0) goto code_r0x00404cca;
  *pbVar7 = *pbVar7 + cRam02060000;
  puVar9 = (ushort *)CONCAT31(uVar17,(char)iVar13 + '{');
  uVar6 = (ushort)puVar9 | *puVar9;
  pcVar10 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),uVar6);
  bVar4 = (byte)uVar6;
  out(puVar44[4],uStack_38);
  pbVar7 = (byte *)((int)puVar19 + 1);
  bRam11060000 = bVar4;
  *pcVar10 = *pcVar10 + bVar4;
  puVar20 = (uint *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                             CONCAT11((byte)((uint)pbVar7 >> 8) | bRam110cde91,(char)pbVar7));
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar4 - 7);
  *puVar46 = (uint)(pcVar10 + (uint)(bVar4 < 7) + *puVar46);
  puVar45 = puVar44 + 6;
  out(puVar44[5],uStack_38);
  puVar29 = (uint *)((int)puStack_34 + 1);
  *pcVar10 = *pcVar10 + (bVar4 - 7);
  puVar36 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar24 | (byte)(uVar6 >> 8));
  do {
    bVar4 = (char)pcVar10 - *pcVar10;
    uVar8 = *puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + bVar4;
    cVar33 = bVar4 - CARRY1((byte)uVar8,bVar4);
    *(byte *)puVar29 = (byte)*puVar29 + cVar33;
    cVar37 = (char)((uint)puVar20 >> 8);
    *(byte *)(puVar46 + 0x673b40) = (byte)puVar46[0x673b40] + cVar37;
    puVar44 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar33);
    *(byte *)puVar44 = (byte)*puVar44 + cVar33;
    *(byte *)puVar29 = (byte)*puVar29 + cVar33;
    puVar36[0x16] = (uint)(puVar36[0x16] + (int)puVar45);
    puVar19 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar20 >> 0x10),
                                               CONCAT11(cVar37 + (char)((uint)pcVar10 >> 8),
                                                        (char)puVar20)) >> 8),
                               (char)puVar20 + *(char *)((int)puVar44 * 2));
    *(byte *)puVar44 = (byte)*puVar44 + cVar33;
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar36;
    puVar30 = puVar29;
    puVar43 = puVar36;
_ctor:
    bVar22 = (byte)((uint)puVar19 >> 8);
    uVar8 = *puVar44;
    bVar4 = (byte)puVar19;
    puVar44 = (uint *)((int)puVar44 + (uint)CARRY1(bVar22,(byte)*puVar44) + *puVar44);
    *(byte *)puVar30 = (byte)*puVar30 + bVar4;
    cVar33 = bVar4 - *(byte *)((int)puVar30 + 3);
    puVar20 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar19 >> 0x10),
                                               CONCAT11(bVar22 + (byte)uVar8,bVar4)) >> 8),cVar33);
    if ((POPCOUNT(cVar33) & 1U) != 0) {
      if (*(byte *)((int)puVar30 + 3) <= bVar4) {
        *puVar44 = (uint)(*puVar44 + (int)puVar44);
        puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),(byte)puVar30 | (byte)*puVar43);
        puVar44 = puVar44 + 0x230e;
        puVar19 = puVar20;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
    cVar33 = (char)puVar44 + '\x02';
    pcVar10 = (char *)CONCAT31((int3)((uint)puVar44 >> 8),cVar33);
    bVar47 = (POPCOUNT(cVar33) & 1U) == 0;
    puVar29 = puVar30;
    puVar36 = puVar43;
    pbVar7 = pbVar14;
    puVar19 = puVar46;
    uVar26 = uStack_28;
code_r0x00404ca8:
    uStack_28 = uVar26;
    puVar44 = puStack_4;
    puVar30 = puStack_c;
    puVar43 = uStack_10;
    pbVar14 = pbStack_18;
    puVar46 = puStack_20;
    if (bVar47) break;
    *(byte *)puVar29 = (byte)*puVar29 + (char)puVar20;
    pbVar14 = pbVar7;
    puVar46 = puVar19;
  } while( true );
  *pcVar10 = *pcVar10 + (char)pcVar10;
  bVar4 = (byte)puStack_4;
  *(byte *)puStack_4 = (byte)*puStack_4 + bVar4;
  puVar19 = (uint *)CONCAT22((short)((uint)puStack_8 >> 0x10),
                             CONCAT11((byte)((uint)puStack_8 >> 8) | (byte)*puStack_c,
                                      (char)puStack_8));
  *(byte *)uStack_10 = (byte)*uStack_10 + (char)uStack_10;
  pbVar7 = (byte *)((int)puVar44 * 2);
  *pbVar7 = *pbVar7 ^ bVar4;
  uVar3 = *(undefined6 *)puVar44;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar7 = (byte *)uVar3;
  bVar22 = (byte)uVar3;
  *pbVar7 = *pbVar7 + bVar22;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar22;
  puVar29 = (uint *)((int)puVar19 + 0x11673);
  uVar8 = *puVar29;
  uVar2 = *puVar29;
  *puVar29 = (uint)((byte *)(uVar2 + (int)puVar30) + CARRY1(bVar4,bVar22));
  puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,uStack_28);
  pbVar7 = pbVar7 + (uint)(CARRY4(uVar8,(uint)puVar30) ||
                          CARRY4(uVar2 + (int)puVar30,(uint)CARRY1(bVar4,bVar22))) +
                    *(int *)((int)puVar19 + (int)puVar30);
  puVar45 = puStack_1c;
  uVar26 = uStack_28;
code_r0x00404cca:
  uStack_28 = uVar26;
  cVar33 = (char)pbVar7 + '\x04';
  puVar44 = (uint *)CONCAT31((int3)((uint)pbVar7 >> 8),cVar33);
  if (SCARRY1((char)pbVar7,'\x04') == cVar33 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
  puVar29 = puVar45 + 1;
  out(*puVar45,(short)puVar30);
  uVar8 = *puVar19;
  uVar2 = *puVar30;
  bVar4 = (byte)puVar19;
  *(byte *)puVar30 = (byte)*puVar30 + bVar4;
  iVar13 = (CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 + '\x03') & uVar8) + iRam00008c38;
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar30;
  pcVar10 = (char *)(iVar13 + (uint)CARRY1((byte)uVar2,bVar4) + 0x1246f);
  uVar17 = (undefined3)((uint)puVar19 >> 8);
  bVar4 = bVar4 | (byte)*puVar30;
  puVar20 = (uint *)CONCAT31(uVar17,bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar10 >> 8);
  puVar44 = (uint *)(CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + *pcVar10) + 0x1fbeef2);
  uVar8 = *puVar44;
  *puVar44 = (uint)(*puVar44 + (int)puVar44);
  if (CARRY4(uVar8,(uint)puVar44)) {
    *puVar44 = (uint)(*puVar44 + (int)puVar44);
    pcVar10 = (char *)CONCAT31(uVar17,bVar4 | bRam00282809);
    cVar33 = (char)((uint)puVar19 >> 8);
    *(byte *)puVar43 = (byte)*puVar43 + cVar33;
    *pcVar10 = *pcVar10 - cVar33;
    *(byte *)puVar44 = *(byte *)puVar44 + (char)puVar44;
    iVar13 = (int)pcVar10 - *puVar43;
    puVar45 = puVar45 + 2;
    out(*puVar29,(short)puVar30);
    *puVar44 = (uint)(*puVar44 + (int)puVar44);
    puVar20 = (uint *)CONCAT22((short)((uint)iVar13 >> 0x10),
                               CONCAT11((byte)((uint)iVar13 >> 8) | bRambf73070b,(char)iVar13));
code_r0x00404d15:
    uVar8 = *puVar44;
    bVar4 = (byte)puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    puVar29 = puVar45 + 1;
    out(*puVar45,(short)puVar30);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar22 = bVar4 + in_AF * '\x06';
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                               bVar22 + (0x90 < (bVar22 & 0xf0) |
                                        CARRY1((byte)uVar8,bVar4) | in_AF * (0xf9 < bVar22)) * '`');
  }
  *puVar44 = (uint)(*puVar44 + (int)puVar44);
  bVar4 = (byte)puVar44 | (byte)*puVar46;
  puVar45 = puVar29 + 1;
  uVar25 = SUB42(puVar30,0);
  out(*puVar29,uVar25);
  *(byte *)puVar20 = (byte)*puVar20 - bVar4;
  uVar8 = *puVar30;
  bVar22 = (byte)puVar20;
  *(byte *)puVar30 = (byte)*puVar30 + bVar22;
  iVar13 = CONCAT31((int3)((uint)puVar44 >> 8),bVar4) + *puVar45 + (uint)CARRY1((byte)uVar8,bVar22);
  pbVar7 = pbVar14 + -*puVar30;
  uVar17 = (undefined3)((uint)iVar13 >> 8);
  cVar33 = (char)iVar13 + (byte)*puVar45 + (pbVar14 < (byte *)*puVar30);
  puVar44 = (uint *)CONCAT31(uVar17,cVar33);
  bVar4 = (byte)((uint)puVar20 >> 8);
  *(byte *)puVar20 = (byte)*puVar20 - bVar4;
  *puVar44 = (uint)(*puVar44 + (int)puVar44);
  bVar22 = bVar22 | *(byte *)((int)puVar30 + (int)puVar44);
  uVar26 = (undefined2)((uint)puVar20 >> 0x10);
  if ((POPCOUNT(bVar22) & 1U) == 0) {
    *(byte *)puVar44 = (byte)*puVar44 + cVar33;
    pcVar10 = (char *)CONCAT31(uVar17,cVar33 + '\x12');
    *pcVar10 = *pcVar10 + bVar4;
    puVar44 = (uint *)CONCAT31(uVar17,(cVar33 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar20 >> 8),bVar22));
    uVar8 = *puVar30;
    *(byte *)puVar30 = (byte)*puVar30 + bVar22;
    if (!CARRY1((byte)uVar8,bVar22)) {
      pbVar14 = (byte *)((uint)puVar44 | *puVar44);
      out(*puVar45,uVar25);
      *pbVar14 = *pbVar14 + (char)pbVar14;
      bVar5 = *pbVar14;
      piVar15 = (int *)CONCAT22(uVar26,CONCAT11(bVar4 | bVar5,bVar22));
      iVar13 = (int)pbVar14 - *piVar15;
      *(byte *)puVar30 = (byte)*puVar30 + bVar22;
      puVar44 = puVar29 + 3;
      out(puVar29[2],uVar25);
      uRam12060000 = (undefined1)iVar13;
      *(char *)((int)piVar15 + iVar13) = *(char *)((int)piVar15 + iVar13) - (bVar4 | bVar5);
      *(byte *)puVar30 = (byte)*puVar30 + bVar22;
      pbVar14 = (byte *)(iVar13 + -0x120edecd);
      *(byte *)puVar44 = (byte)*puVar44 + 1;
      bVar4 = *pbVar14;
      bVar5 = (byte)pbVar14;
      *pbVar14 = *pbVar14 + bVar5;
      pbVar7 = pbVar7 + ((-1 - *(int *)((int)puVar46 + 0x42)) - (uint)CARRY1(bVar4,bVar5));
      *pbVar14 = *pbVar14 + bVar5;
      bVar4 = (byte)puVar43 | (byte)((uint)pbVar14 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar14;
      uVar8 = *puVar30;
      pcVar10 = (char *)(((uint)pbVar14 | 0x11) + 0x511072c);
      puVar45 = puVar29 + 4;
      out(*puVar44,uVar25);
      puVar30 = (uint *)((int)puVar30 + 1);
      *pcVar10 = *pcVar10 + (char)pcVar10;
      bVar5 = (byte)((uint)pcVar10 >> 8);
      puVar43 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar43 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar43 >> 8) | (byte)uVar8,
                                                          bVar4)) >> 8),bVar4 | bVar5);
      uVar17 = (undefined3)((uint)pcVar10 >> 8);
      bVar4 = (char)pcVar10 - *pcVar10;
      pcVar10 = (char *)CONCAT31(uVar17,bVar4);
      *pcVar10 = *pcVar10 + bVar4;
      *(int *)((int)pcVar10 * 2) = (int)(*(int *)((int)pcVar10 * 2) + (int)puVar43);
      *(byte *)puVar30 = *(byte *)puVar30 + bVar4;
      *pbVar7 = *pbVar7 + bVar5;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar8 = CONCAT31(uVar17,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar8;
      pbVar14 = (byte *)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar5 + in_AF,bVar4));
      *(byte *)puVar45 = (byte)*puVar45 + bVar22;
      *pbVar14 = *pbVar14 + bVar4;
      *pbVar14 = *pbVar14 + bVar4;
      bVar47 = CARRY1(bVar4,*pbVar14);
      puVar44 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar4 + *pbVar14);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar43 = (byte)*puVar43 - (char)puVar30;
  }
  *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
  bVar47 = false;
  piVar15 = (int *)CONCAT22(uVar26,CONCAT11(bVar4 | (byte)*puVar30,bVar22));
code_r0x00404d9a:
  do {
    puVar36 = puVar30;
    *puVar44 = (*puVar44 - (int)puVar44) - (uint)bVar47;
    bVar4 = (byte)((uint)piVar15 >> 8);
    uVar26 = (undefined2)((uint)piVar15 >> 0x10);
    bVar22 = (byte)piVar15;
    bVar5 = bVar4 + (byte)iRam00000c00;
    pbVar14 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *(byte *)puVar36 = (byte)*puVar36 + bVar22;
    puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 - (byte)*puVar45);
    bVar4 = *pbVar14;
    puVar44 = (uint *)(pbVar14 + (uint)CARRY1(bVar5,*pbVar14) + *(int *)pbVar14);
    *(byte *)puVar36 = (byte)*puVar36 + bVar22;
    cVar37 = ((bVar5 + bVar4) - (byte)*puVar36) + (byte)*puVar44;
    pcVar10 = (char *)CONCAT22(uVar26,CONCAT11(cVar37,bVar22));
    puVar29 = puVar46 + 1;
    uVar8 = in((short)puVar36);
    *puVar46 = uVar8;
    cVar33 = (char)puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + cVar33;
    uVar17 = (undefined3)((uint)puVar36 >> 8);
    bVar5 = (byte)puVar36 | (byte)*puVar45;
    pcVar16 = (char *)CONCAT31(uVar17,bVar5);
    *pcVar10 = *pcVar10 + '\x01';
    bVar4 = (cVar37 - *pcVar16) + (byte)*puVar44;
    pcVar10 = (char *)CONCAT22(uVar26,CONCAT11(bVar4,bVar22));
    puVar46 = puVar46 + 2;
    uVar8 = in((short)pcVar16);
    *puVar29 = uVar8;
    *(byte *)puVar44 = (byte)*puVar44 + cVar33;
    bVar5 = bVar5 | (byte)*puVar45;
    puVar30 = (uint *)CONCAT31(uVar17,bVar5);
    *pcVar10 = *pcVar10 + '\x01';
    bVar47 = bVar22 < *(byte *)((int)puVar30 + 2);
    cVar37 = bVar22 - *(byte *)((int)puVar30 + 2);
    piVar15 = (int *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar37);
  } while ((POPCOUNT(cVar37) & 1U) != 0);
  *(byte *)puVar44 = (byte)*puVar44 + cVar33;
  bVar22 = cVar33 + 0x7b;
  pbVar14 = (byte *)CONCAT31((int3)((uint)puVar44 >> 8),bVar22);
  *(byte *)((int)puVar43 + (int)pbVar14) = *(byte *)((int)puVar43 + (int)pbVar14) + bVar22;
  puVar29 = puVar45 + 1;
  uVar25 = SUB42(puVar30,0);
  out(*puVar45,uVar25);
  pbVar35 = (byte *)((int)puVar43 + -1);
  *pbVar14 = *pbVar14 + bVar22;
  bVar4 = bVar4 | (byte)*puVar30;
  piVar15 = (int *)CONCAT22(uVar26,CONCAT11(bVar4,cVar37));
  *pbVar14 = *pbVar14 + bVar22;
  *pbVar35 = *pbVar35 + bVar5;
  *pbVar35 = *pbVar35 ^ bVar22;
  *(byte *)puVar30 = (byte)*puVar30 + bVar4;
  *pbVar14 = *pbVar14 + bVar22;
  do {
    bVar23 = (byte)((uint)piVar15 >> 8);
    *(byte *)puVar46 = (byte)*puVar46 + bVar23;
    bVar4 = *pbVar14;
    bVar22 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar22;
    *(byte **)((int)puVar43 + 0x17) =
         (byte *)((int)puVar29 + (uint)CARRY1(bVar4,bVar22) + *(int *)((int)puVar43 + 0x17));
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    uVar18 = (undefined3)((uint)pbVar14 >> 8);
    bVar22 = bVar22 | (byte)*puVar29;
    puVar46 = (uint *)((int)puVar46 + *(int *)(pbVar7 + -0x34));
    *(char *)CONCAT31(uVar18,bVar22) = *(char *)CONCAT31(uVar18,bVar22) + bVar22;
    bVar4 = bVar22 + 2;
    cVar33 = (char)((uint)puVar36 >> 8);
    bVar24 = (byte)piVar15;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar14 = (byte *)CONCAT31(uVar18,bVar22 + 0x15 + (0xfd < bVar22));
      if (0xec < bVar4 || CARRY1(bVar22 + 0x15,0xfd < bVar22)) {
        *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      }
code_r0x00404e60:
      pbVar7 = pbVar7 + -*puVar30;
      bVar4 = *pbVar14;
      *pbVar14 = *pbVar14 + (byte)pbVar14;
      pbVar31 = (byte *)((int)puVar29 + (-(uint)CARRY1(bVar4,(byte)pbVar14) - *(int *)pbVar14));
      pbVar14 = pbVar14 + *(int *)pbVar14;
      puStack_34 = (uint *)CONCAT22(puStack_34._2_2_,in_DS);
      *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      *(char *)piVar15 = (char)*piVar15 + cVar33;
      bVar4 = *pbVar14;
      *pbVar14 = *pbVar14 + (byte)pbVar14;
      *(byte **)(pbVar35 + (int)puVar30) =
           (byte *)((int)puVar30 +
                   (uint)CARRY1(bVar4,(byte)pbVar14) + *(int *)(pbVar35 + (int)puVar30));
      pbVar14 = pbVar14 + 0x73061314;
      *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      uVar18 = (undefined3)((uint)piVar15 >> 8);
      bVar24 = bVar24 | (byte)*puVar30;
      pcVar16 = (char *)CONCAT31(uVar18,bVar24);
      *pbVar14 = *pbVar14 + (char)pbVar14;
      cVar33 = (char)pbVar14 + 'o';
      pcVar10 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar33);
      *pcVar10 = *pcVar10 + cVar33;
      out(*(undefined4 *)pbVar31,uVar25);
      uVar8 = *puVar30;
      *(byte *)puVar30 = (byte)*puVar30 + bVar24;
      pcVar10 = pcVar10 + (uint)CARRY1((byte)uVar8,bVar24) + *puVar46;
      *pcVar10 = *pcVar10 + (char)pcVar10;
      *pcVar16 = *pcVar16 + bVar5;
      puVar29 = (uint *)(pbVar31 + 8);
      out(*(undefined4 *)(pbVar31 + 4),uVar25);
      *(byte *)puVar30 = (byte)*puVar30 + bVar24;
      piVar15 = (int *)((uint)pcVar10 | *puVar46);
      pcVar16[0x390a0000] = pcVar16[0x390a0000] - bVar23;
      pbVar35 = (byte *)0x7000000;
      *(byte *)puVar46 = (byte)*puVar46 - bVar23;
      *piVar15 = *piVar15 + (int)piVar15;
      puVar45 = (uint *)CONCAT31(uVar18,bVar24 | *(byte *)((int)piVar15 + (int)pcVar16));
      *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) - bVar23;
      cRam07000000 = cRam07000000 + bVar23;
      piVar15 = (int *)((uint)piVar15 | 0x777b02);
      pbVar14 = (byte *)((int)puVar46 + (int)pbVar7 * 2);
      bVar47 = SCARRY1(*pbVar14,(char)piVar15);
      *pbVar14 = *pbVar14 + (char)piVar15;
      bVar4 = *pbVar14;
      *(char *)piVar15 = (char)*piVar15;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar18,bVar4) = *(char *)CONCAT31(uVar18,bVar4) + bVar4;
    bVar22 = bVar22 + 0x71;
    pbVar14 = (byte *)CONCAT31(uVar18,bVar22);
    *pbVar14 = *pbVar14;
    *(byte *)puVar29 = (byte)*puVar29 + 1;
    *piVar15 = (*piVar15 - (int)pbVar14) - (uint)(0x90 < bVar4);
    uVar8 = *puVar29;
    *(byte *)puVar29 = (byte)*puVar29 + bVar22;
    if (!CARRY1((byte)uVar8,bVar22)) goto code_r0x00404e60;
    *pbVar14 = *pbVar14 + bVar22;
    uVar26 = (undefined2)((uint)piVar15 >> 0x10);
    bVar23 = bVar23 | *pbVar14;
    pbVar14 = pbVar14 + -*(int *)pbVar14;
    *pbVar35 = *pbVar35 + bVar23;
    cVar37 = bVar24 - *(byte *)((int)puVar30 + 2);
    piVar15 = (int *)CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar23,bVar24)) >> 8),cVar37);
  } while ((POPCOUNT(cVar37) & 1U) != 0);
  cVar34 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar34;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  pcVar10 = (char *)CONCAT31(uVar18,cVar34 + '{');
  out(*puVar29,uVar25);
  *pcVar10 = *pcVar10 + cVar34 + '{';
  bVar22 = cVar34 + 0x7e;
  pbVar14 = (byte *)CONCAT31(uVar18,bVar22);
  puVar29 = puVar45 + 3;
  out(puVar45[2],uVar25);
  pbVar35 = (byte *)((int)puVar43 + -2);
  *pbVar14 = *pbVar14 + bVar22;
  bVar23 = bVar23 | (byte)*puVar30;
  puVar45 = (uint *)CONCAT22(uVar26,CONCAT11(bVar23,cVar37));
  *pbVar14 = *pbVar14 + bVar22;
  *pbVar35 = *pbVar35 + bVar5;
  *pbVar35 = *pbVar35 ^ bVar22;
  *(byte *)puVar30 = (byte)*puVar30 + bVar23;
  *pbVar14 = *pbVar14 + bVar22;
  *pbVar14 = *pbVar14 + cVar33;
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar22;
  puVar43[6] = (uint)((int)puVar29 + (uint)CARRY1(bVar4,bVar22) + puVar43[6]);
  *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
  bVar22 = bVar22 | (byte)*puVar29;
  puVar46 = (uint *)((int)puVar46 + *(int *)(pbVar7 + -0x33));
  *(char *)CONCAT31(uVar18,bVar22) = *(char *)CONCAT31(uVar18,bVar22) + bVar22;
  bVar47 = SCARRY1(bVar22,'\x02');
  bVar4 = bVar22 + 2;
  piVar15 = (int *)CONCAT31(uVar18,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    return CONCAT31(uVar18,bVar22 + 0x71);
  }
code_r0x00404ebf:
  bVar22 = (byte)piVar15;
  uVar18 = (undefined3)((uint)piVar15 >> 8);
  if (bVar4 != 0 && bVar47 == (char)bVar4 < '\0') {
    *(byte *)piVar15 = (char)*piVar15 + bVar22;
    puVar29[(int)puVar46 * 2] =
         (uint)((int)puVar30 + (uint)(0xd2 < bVar22) + puVar29[(int)puVar46 * 2]);
    return CONCAT31(uVar18,bVar22 + 0x2d);
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar4 = *pbVar35;
  *puVar29 = (uint)(*puVar29 + (int)piVar15);
  bVar24 = (byte)((uint)puVar45 >> 8);
  *(byte *)piVar15 = (char)*piVar15 - bVar24;
  *(byte *)piVar15 = (char)*piVar15 + bVar22;
  pbVar14 = (byte *)(CONCAT31(uVar17,bVar5 | bVar4) - *(int *)pbVar35);
  puVar44 = (uint *)CONCAT31(uVar18,bVar22 + 6);
  *(uint *)(pbVar35 + (int)puVar29 * 2) =
       (int)puVar44 + (uint)(0xf9 < bVar22) + *(int *)(pbVar35 + (int)puVar29 * 2);
  *(byte *)puVar45 = (byte)*puVar45 ^ bVar22 + 6;
  bVar22 = (byte)puVar45;
  *pbVar14 = *pbVar14 + bVar22;
  puVar43 = puVar29 + 1;
  uVar26 = SUB42(pbVar14,0);
  out(*puVar29,uVar26);
  *puVar45 = *puVar45 ^ (uint)puVar44;
  *pbVar14 = *pbVar14 + bVar22;
  puVar36 = (uint *)(pbVar35 + -*(int *)pbVar35);
  *(uint *)((int)puVar46 + 0x31) = *(uint *)((int)puVar46 + 0x31) | (uint)pbVar7;
  *puVar44 = *puVar44 + (int)puVar44;
  puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),CONCAT11(bVar24 | (byte)*puVar36,bVar22)
                            );
  *(byte **)(pbVar14 + 0x6e) = (byte *)(*(int *)(pbVar14 + 0x6e) + (int)puVar43);
  piVar15 = (int *)((uint)puVar44 | *puVar44);
  bVar5 = (byte)puVar36;
  *(byte *)puVar46 = (byte)*puVar46 - bVar5;
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar22;
  if (CARRY1(bVar4,bVar22)) {
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    bVar4 = pbVar14[0x11];
    uVar25 = (undefined2)((uint)puVar36 >> 0x10);
    out(*puVar43,uVar26);
    puVar45 = (uint *)((int)puVar45 + 1);
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    bVar28 = (byte)((uint)puVar36 >> 8) | bVar4 | *pbVar14;
    pcVar10 = (char *)((int)piVar15 + -0x21000001);
    bVar4 = (byte)pcVar10 | 0x11;
    uVar17 = (undefined3)((uint)pcVar10 >> 8);
    cVar33 = bVar4 - 7;
    pcVar16 = (char *)CONCAT31(uVar17,cVar33);
    *puVar46 = (uint)(pcVar16 + (uint)(bVar4 < 7) + *puVar46);
    puVar43 = puVar29 + 3;
    out(puVar29[2],uVar26);
    pbVar14 = pbVar14 + 1;
    *pcVar16 = *pcVar16 + cVar33;
    bVar24 = (byte)((uint)pcVar10 >> 8);
    bVar23 = bVar5 | bVar24;
    bVar22 = cVar33 - *pcVar16;
    bVar4 = *(byte *)puVar45;
    *(byte *)puVar45 = *(byte *)puVar45 + bVar22;
    *(char *)CONCAT31(uVar17,bVar22) =
         *(char *)CONCAT31(uVar17,bVar22) + bVar22 + CARRY1(bVar4,bVar22);
    *pbVar14 = *pbVar14 + bVar22;
    *(byte *)puVar43 = (byte)*puVar43 + bVar23;
    bVar4 = (byte)((uint)pbVar14 >> 8);
    *(byte *)puVar45 = *(byte *)puVar45 + bVar22 + CARRY1((byte)pbVar14,bVar4);
    piVar15 = (int *)CONCAT31(uVar17,bVar22);
    *(byte *)piVar15 = (char)*piVar15 + bVar22;
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                               CONCAT11(bVar4 + bVar24,(byte)pbVar14 + bVar4));
    puVar36 = (uint *)CONCAT22(uVar25,CONCAT11(bVar28 + *(char *)(CONCAT31((int3)(CONCAT22(uVar25,
                                                  CONCAT11(bVar28,bVar5)) >> 8),bVar23) + 0x76),
                                               bVar23));
    uStack_28 = puStack_34._0_2_;
code_r0x00404fa4:
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    pcVar10 = (char *)(CONCAT31((int3)((uint)piVar15 >> 8),(char)piVar15 + '(') ^ *puVar45);
    cVar34 = (char)puVar45;
    *pbVar14 = *pbVar14 + cVar34;
    uVar26 = (undefined2)((uint)puVar36 >> 0x10);
    cVar27 = (char)puVar36;
    cVar38 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x75);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    cVar33 = (char)pcVar10 + 'o';
    pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar33);
    *pcVar10 = *pcVar10 + cVar33;
    cVar39 = (char)((uint)puVar45 >> 8);
    *pbVar7 = *pbVar7 - cVar39;
    pbVar14[1] = pbVar14[1] + cVar34;
    pcVar10 = pcVar10 + -0x757b021b;
    cVar33 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar33;
    uVar17 = (undefined3)((uint)pcVar10 >> 8);
    cVar37 = cVar33 + 'o';
    pcVar10 = (char *)CONCAT31(uVar17,cVar37);
    pbVar31 = pbVar14 + 2;
    *pcVar10 = *pcVar10 + cVar37;
    iVar13 = CONCAT22(uVar26,CONCAT11(cVar38 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar38,cVar27)) +
                                                        0x76),cVar27));
    *pcVar10 = *pcVar10 + cVar37;
    pcVar10 = (char *)CONCAT31(uVar17,cVar33 + -0x22);
    puVar29 = (uint *)((int)puVar46 + 1);
    *(byte *)puVar46 = (byte)*puVar43;
    *pcVar10 = *pcVar10 + cVar33 + -0x22;
    *(byte *)((int)puVar45 + (int)pcVar10) =
         *(byte *)((int)puVar45 + (int)pcVar10) - (char)((uint)pbVar31 >> 8);
    *pbVar31 = *pbVar31 + cVar34;
    bVar22 = cVar39 - pbVar14[4];
    pbVar35 = (byte *)((int)puVar43 + 5);
    out(*(undefined4 *)((int)puVar43 + 1),(short)pbVar31);
    puVar43 = (uint *)((uint)(pcVar10 + *(int *)(pcVar10 + iVar13)) ^ 0x280a0001);
    *(byte *)puVar43 = (byte)*puVar43 << 1 | (char)(byte)*puVar43 < '\0';
    *pbVar35 = *pbVar35 + (char)puVar43;
    pbVar35 = pbVar35 + *(int *)(pbVar14 + -0x5c);
    pbVar14 = (byte *)((uint)puVar43 | *puVar43);
    *pbVar35 = *pbVar35 + (char)pbVar14;
    puVar36 = (uint *)CONCAT31((int3)((uint)iVar13 >> 8),cVar27 - (char)pbVar31);
    bVar4 = *pbVar14;
    puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),CONCAT11(bVar22 + *pbVar14,cVar34));
    iVar13 = *(int *)pbVar14;
    *pbVar31 = *pbVar31 + cVar34;
    cVar33 = (char)(pbVar14 + (uint)CARRY1(bVar22,bVar4) + iVar13) + 'r';
    puVar46 = (uint *)CONCAT31((int3)((uint)(pbVar14 + (uint)CARRY1(bVar22,bVar4) + iVar13) >> 8),
                               cVar33);
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),CONCAT11(10,(char)pbVar31));
    *(char *)(puVar46 + 10) = (char)puVar46[10] + '\n';
    *pbVar35 = *pbVar35 + cVar33;
    puVar43 = (uint *)(pbVar35 + *(int *)(pbVar14 + -0x5e));
    uVar8 = *puVar46;
    cVar33 = (char)((uint)puVar46 | uVar8);
    *(byte *)puVar43 = (byte)*puVar43 + cVar33;
    uVar17 = (undefined3)(((uint)puVar46 | uVar8) >> 8);
    cVar37 = cVar33 + (byte)*puVar36;
    puVar46 = (uint *)CONCAT31(uVar17,cVar37);
    if (SCARRY1(cVar33,(byte)*puVar36) == cVar37 < '\0') goto code_r0x00405090;
    *(byte *)puVar46 = (byte)*puVar46 + cVar37;
    piVar15 = (int *)CONCAT31(uVar17,cVar37 + '\x02');
    puVar46 = puVar29;
  }
  else {
    out(2,(char)piVar15);
    if ((POPCOUNT(*pbVar14) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar17 = (undefined3)((uint)piVar15 >> 8);
  cVar33 = (char)piVar15 + '}';
  pbVar35 = (byte *)CONCAT31(uVar17,cVar33);
  pbVar14[(int)pbVar35] = pbVar14[(int)pbVar35] + cVar33;
  pbVar14[0x280a0000] = pbVar14[0x280a0000] - (char)((uint)piVar15 >> 8);
  bVar4 = (byte)puVar45 & 7;
  *pbVar35 = *pbVar35 << bVar4 | *pbVar35 >> 8 - bVar4;
  *(byte *)puVar43 = (byte)*puVar43 + cVar33;
  cVar34 = (char)puVar36 - (byte)*puVar43;
  uVar26 = (undefined2)((uint)puVar36 >> 0x10);
  cVar39 = (char)((uint)puVar36 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar34) + 0x7c);
  pcVar10 = (char *)CONCAT22(uVar26,CONCAT11(cVar39,cVar34));
  *pbVar35 = *pbVar35 + cVar33;
  bVar22 = (char)piVar15 + 0xa7U & *pbVar14;
  puVar29 = (uint *)((int)puVar46 + *(int *)(pbVar7 + 0x7c));
  *(char *)CONCAT31(uVar17,bVar22) = *(char *)CONCAT31(uVar17,bVar22) + bVar22;
  bVar22 = bVar22 + 0x2a;
  pbVar35 = (byte *)CONCAT31(uVar17,bVar22);
  *pbVar35 = *pbVar35 + bVar22;
  *pcVar10 = *pcVar10 + cVar34;
  *pbVar14 = *pbVar14 ^ bVar22;
  *pcVar10 = *pcVar10 + bVar22;
  bVar4 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar22;
  cVar33 = (bVar22 - *pbVar35) - CARRY1(bVar4,bVar22);
  *(byte *)puVar45 = (byte)*puVar45 + (byte)pbVar14;
  cVar39 = cVar39 + pcVar10[0x7b];
  *(char *)CONCAT31(uVar17,cVar33) = *(char *)CONCAT31(uVar17,cVar33) + cVar33;
  pcVar10 = (char *)CONCAT31(uVar17,cVar33 + 'o');
  *pcVar10 = *pcVar10 + cVar33 + 'o';
  pcVar10 = pcVar10 + 0x2ed7fde6;
  cVar37 = (char)pcVar10;
  *pcVar10 = *pcVar10 + cVar37;
  cVar33 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar39,cVar34)) + 0x7b);
  *pcVar10 = *pcVar10 + cVar37;
  piVar15 = (int *)(CONCAT31((int3)((uint)pcVar10 >> 8),cVar37 + 'o') + 0x6f060000);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  bVar22 = (byte)pbVar14 | (byte)*puVar43;
  pbVar31 = (byte *)CONCAT31(uVar18,bVar22);
  uVar8 = CONCAT22(uVar26,CONCAT11(cVar39 + cVar33,cVar34)) | (uint)puVar43;
  uVar17 = (undefined3)((uint)piVar15 >> 8);
  bVar4 = (byte)piVar15 | *pbVar31;
  pbVar35 = (byte *)CONCAT31(uVar17,bVar4);
  cVar33 = (byte)puVar45 - bVar22;
  puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),cVar33);
  *pbVar35 = *pbVar35 + bVar4;
  puVar46 = puVar43 + 1;
  out(*puVar43,(short)pbVar31);
  *pbVar35 = bVar4;
  *pbVar31 = *pbVar31 + cVar33;
  puVar43 = puVar43 + 2;
  out(*puVar46,(short)pbVar31);
  *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
  puVar36 = (uint *)(CONCAT31((int3)(uVar8 >> 8),(char)uVar8 - (char)((uint)pbVar14 >> 8)) |
                    (uint)puVar43);
  pbVar14 = (byte *)CONCAT31(uVar18,(bVar22 | (byte)*puVar43) + (byte)*puVar29);
  cVar33 = bVar4 - (byte)*puVar29;
  puVar46 = (uint *)CONCAT31(uVar17,cVar33 - *(char *)CONCAT31(uVar17,cVar33));
code_r0x00405090:
  *puVar46 = (uint)(pbVar14 + *puVar46);
  cVar33 = (char)puVar46;
  *(byte *)puVar46 = (byte)*puVar46 + cVar33;
  *(byte *)puVar46 = (byte)*puVar46 + cVar33;
  *(byte *)puVar46 = (byte)*puVar46 + cVar33;
  *puVar45 = *puVar45 - (int)pbVar7;
  uVar8 = *puVar43;
  bVar4 = (byte)pbVar14;
  *(byte *)puVar43 = (byte)*puVar43 + bVar4;
  *(byte *)puVar46 = (byte)*puVar46 + cVar33 + CARRY1((byte)uVar8,bVar4);
  *(byte *)puVar45 = (byte)*puVar45 + cVar33;
  uVar8 = *puVar36;
  *(byte *)puVar36 = (byte)*puVar36 + 0x72;
  *(byte *)puVar36 = (byte)*puVar36;
  cVar33 = (char)((uint)pbVar14 >> 8);
  if (SCARRY1((byte)uVar8,'r')) {
    puVar43 = (uint *)((int)puVar43 + *(int *)(pbVar14 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar43 = (byte)*puVar43 + (char)puVar46;
      uVar17 = (undefined3)((uint)puVar46 >> 8);
      cVar37 = (char)puVar46 + (byte)*puVar36;
      pcVar10 = (char *)CONCAT31(uVar17,cVar37);
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((char)((uint)puVar36 >> 8) +
                                          *(byte *)((int)puVar36 + 0x7b),(char)puVar36));
      *pcVar10 = *pcVar10 + cVar37;
      in_AF = 9 < (cVar37 + 0x6fU & 0xf) | in_AF;
      uVar8 = CONCAT31(uVar17,cVar37 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar8;
      piVar15 = (int *)CONCAT22((short)(uVar8 >> 0x10),
                                CONCAT11((char)((uint)puVar46 >> 8) + in_AF,bVar5));
      *piVar15 = *piVar15 + (int)piVar15;
      uVar17 = (undefined3)((uint)piVar15 >> 8);
      bVar5 = bVar5 | *(byte *)(piVar15 + 0x354a);
      bVar5 = bVar5 - *(char *)CONCAT31(uVar17,bVar5);
      pbVar35 = (byte *)CONCAT31(uVar17,bVar5);
      bVar22 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar5;
      puVar43 = (uint *)((int)puVar43 + (-(uint)CARRY1(bVar22,bVar5) - *(int *)pbVar35));
      puVar46 = (uint *)(pbVar35 + 0xfc00);
      *pbVar14 = *pbVar14 + cVar33;
      uVar8 = *puVar46;
      bVar22 = (byte)puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + bVar22;
      uVar11 = (uint)CARRY1((byte)uVar8,bVar22);
      uVar8 = *puVar36;
      uVar2 = *puVar36;
      *puVar36 = (uint)((byte *)(uVar2 + (int)puVar46) + uVar11);
      if (!CARRY4(uVar8,(uint)puVar46) && !CARRY4(uVar2 + (int)puVar46,uVar11)) break;
      *(byte *)puVar46 = (byte)*puVar46 + bVar22;
    }
  }
  uVar8 = (uint)puVar46 | *puVar46;
  uVar26 = SUB42(pbVar14,0);
  *(byte *)puVar43 = (byte)*puVar43 + (char)uVar8;
  piVar15 = (int *)(uVar8 + 0xc1872);
  if (SCARRY4(uVar8,0xc1872)) {
    cVar37 = (char)piVar15;
    *(char *)piVar15 = *(char *)piVar15 + cVar37;
    *pbVar14 = *pbVar14 + cVar37;
    *(char *)piVar15 = *(char *)piVar15 + cVar37;
    *(byte *)puVar36 = (byte)*puVar36 + (char)puVar45;
    *(char *)piVar15 = *(char *)piVar15 + cVar37;
    *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) + bVar4;
    puVar46 = puVar43;
    goto code_r0x00405117;
  }
  do {
    uVar8 = *puVar43;
    bVar4 = (byte)piVar15;
    *(byte *)puVar43 = (byte)*puVar43 + bVar4;
    if (CARRY1((byte)uVar8,bVar4)) {
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      uVar17 = (undefined3)((uint)puVar45 >> 8);
      bVar22 = (byte)puVar45 | bRam396f1609;
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      puVar45 = (uint *)CONCAT31(uVar17,bVar22 | *(byte *)CONCAT31(uVar17,bVar22));
      uVar17 = (undefined3)((uint)piVar15 >> 8);
      bVar4 = bVar4 | *pbVar14;
      pcVar10 = (char *)CONCAT31(uVar17,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar46 = puVar43 + 1;
        out(*puVar43,uVar26);
        uVar8 = CONCAT22((short)((uint)piVar15 >> 0x10),(ushort)bVar4);
        *(byte *)puVar46 = (byte)*puVar46 + bVar4;
        pcVar10 = (char *)(uVar8 | 8);
        cVar37 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x7a);
        puVar44 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(cVar37,(char)puVar36));
        *pcVar10 = *pcVar10 + (char)pcVar10;
        cVar33 = (char)pcVar10 + 'o';
        piVar15 = (int *)CONCAT31((int3)(uVar8 >> 8),cVar33);
        *(char *)piVar15 = (char)*piVar15 + cVar33;
        *(byte *)puVar45 = (byte)*puVar45 + 1;
        puVar43 = puVar43 + 2;
        out(*puVar46,uVar26);
        pbVar14 = (byte *)((uint)pbVar14 ^ uRam08122c04);
        iVar13 = CONCAT31((int3)((uint)(*piVar15 * 0x17070600) >> 8),2);
        *(char *)(iVar13 * 2) = *(char *)(iVar13 * 2) - cVar37;
        do {
          bVar4 = (byte)iVar13;
          *(byte *)puVar43 = (byte)*puVar43 + bVar4;
          bVar47 = CARRY1(bVar4,(byte)*puVar44);
          uVar17 = (undefined3)((uint)iVar13 >> 8);
          cVar33 = bVar4 + (byte)*puVar44;
          pbVar35 = (byte *)CONCAT31(uVar17,cVar33);
          uVar26 = in_DS;
          uVar25 = uStack_74;
          if (SCARRY1(bVar4,(byte)*puVar44) == cVar33 < '\0') goto GenerateStatusText;
          *pbVar35 = *pbVar35 + cVar33;
          uVar8 = CONCAT31(uVar17,cVar33 + '\'') + 0x1ebd9f3;
          uStack_78 = (undefined1)uStack_28;
          uStack_77 = (undefined1)((ushort)uStack_28 >> 8);
          piVar15 = (int *)(uVar8 ^ 0x73060000);
          puVar45 = (uint *)((int)puVar45 + 1);
          *piVar15 = (int)(*piVar15 + (int)piVar15);
          puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                     CONCAT11((byte)((uint)puVar44 >> 8) | pbVar7[0x7e],
                                              (char)puVar44));
          cVar33 = (char)uVar8;
          *(char *)piVar15 = (char)*piVar15 + cVar33;
          uVar8 = CONCAT31((int3)((uint)piVar15 >> 8),cVar33 + '\x02');
          bVar47 = 0xd9f2d2da < uVar8;
          iVar13 = uVar8 + 0x260d2d25;
          pbVar31 = pbVar7;
          do {
            uVar17 = (undefined3)((uint)iVar13 >> 8);
            bVar22 = (char)iVar13 + -2 + bVar47;
            pbVar7 = (byte *)CONCAT31(uVar17,bVar22);
            bVar4 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar22;
            bVar5 = (byte)puVar44;
            uStack_74 = uStack_28;
            if (CARRY1(bVar4,bVar22)) {
              *pbVar7 = *pbVar7 + bVar22;
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11((byte)((uint)puVar44 >> 8) | pbVar31[0x7f],bVar5))
              ;
              *pbVar7 = *pbVar7 + bVar22;
              pbVar35 = (byte *)CONCAT31(uVar17,bVar22 + 0x2a);
              *pbVar35 = *pbVar35 + bVar22 + 0x2a;
              *(byte *)puVar44 = (byte)*puVar44 + (char)pbVar14;
              uVar26 = in_DS;
              while( true ) {
                in_DS = uVar26;
                bVar22 = (byte)pbVar35;
                *pbVar14 = *pbVar14 ^ bVar22;
                *pbVar14 = *pbVar14 + (char)puVar44;
                *pbVar35 = *pbVar35 + bVar22;
                *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)pbVar14 >> 8);
                bVar4 = *pbVar35;
                *pbVar35 = *pbVar35 + bVar22;
                uVar8 = *puVar44;
                uVar2 = *puVar44;
                *puVar44 = (uint)(pbVar35 + uVar2 + CARRY1(bVar4,bVar22));
                uVar17 = (undefined3)((uint)pbVar35 >> 8);
                if (CARRY4(uVar8,(uint)pbVar35) ||
                    CARRY4((uint)(pbVar35 + uVar2),(uint)CARRY1(bVar4,bVar22))) break;
                *(byte *)puVar43 = (byte)*puVar43 + bVar22;
                pcVar10 = (char *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                           CONCAT11((char)((uint)puVar45 >> 8) + *pbVar35,
                                                    (char)puVar45));
                *(byte *)puVar43 = (byte)*puVar43 + bVar22;
                piVar15 = (int *)CONCAT31(uVar17,bVar22 | (byte)*puVar44);
                puVar46 = puVar43;
                while( true ) {
                  puVar43 = puVar46 + 1;
                  out(*puVar46,(short)pbVar14);
                  pbVar14 = pbVar14 + 1;
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  bVar5 = (byte)((uint)pcVar10 >> 8) | *pbVar14;
                  uVar17 = (undefined3)((uint)piVar15 >> 8);
                  bVar22 = (byte)piVar15 ^ *pbVar14;
                  pcVar16 = (char *)CONCAT31(uVar17,bVar22);
                  cRam282b0000 = cRam282b0000 - bVar5;
                  *pcVar16 = *pcVar16 + bVar22;
                  pbVar7 = pbVar31 + -*(int *)pbVar14;
                  uStack_78 = (undefined1)in_DS;
                  uStack_77 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar29 + 0x17);
                  *pcVar16 = *pcVar16 + bVar22;
                  puVar45 = (uint *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                             CONCAT11(bVar5 + bVar4 | *pbVar14,(char)pcVar10));
                  *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
                  *(byte *)((int)pcVar16 * 2) = *(byte *)((int)pcVar16 * 2) ^ bVar22;
                  in_AF = 9 < (bVar22 & 0xf) | in_AF;
                  bVar22 = bVar22 + in_AF * -6;
                  pbVar35 = (byte *)CONCAT31(uVar17,bVar22 + (0x9f < bVar22 | in_AF * (bVar22 < 6))
                                                             * -0x60);
                  *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
                  *(char *)((int)pbVar35 * 2) =
                       *(char *)((int)pbVar35 * 2) + (char)((uint)pbVar14 >> 8);
                  bVar47 = CARRY1((byte)*puVar45,(byte)pbVar14);
                  *(byte *)puVar45 = (byte)*puVar45 + (byte)pbVar14;
                  uVar26 = in_DS;
                  uVar25 = uStack_28;
GenerateStatusText:
                  in_DS = uVar25;
                  pbVar31 = pbVar7;
                  uStack_74 = in_DS;
                  if (!bVar47) break;
                  *pbVar35 = *pbVar35 + (char)pbVar35;
                  iVar13 = CONCAT31((int3)((uint)puVar45 >> 8),(byte)puVar45 | *pbVar14);
                  uVar26 = (undefined2)((uint)puVar44 >> 0x10);
                  cVar34 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar44 + 0x7d);
                  *pbVar35 = *pbVar35 + (char)pbVar35;
                  *(byte *)puVar29 = (byte)*puVar29 - (char)((uint)puVar45 >> 8);
                  iVar13 = iVar13 - *(int *)(iVar13 + 0xb0a0000);
                  cVar33 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar34,(char)puVar44)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar43,(short)pbVar14);
                  pbVar14 = (byte *)CONCAT22(uStack_76,CONCAT11(uStack_77,uStack_78));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar46 = puVar43 + 2;
                  out(puVar43[1],CONCAT11(uStack_77,uStack_78));
                  pbVar31 = pbVar7 + 1;
                  cVar37 = (char)iVar13;
                  pcVar10 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),
                                             CONCAT11((byte)((uint)iVar13 >> 8) |
                                                      *(byte *)((int)puVar29 + 0x46),cVar37));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_28 = CONCAT11(uStack_77,uStack_78);
                  uVar17 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar46,0xf0)) >> 8);
                  piVar15 = (int *)CONCAT31(uVar17,0x5f);
                  puVar29 = (uint *)((int)puVar29 + 1);
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  puVar44 = (uint *)CONCAT22(uVar26,CONCAT11(cVar34 + cVar33 | (byte)puVar43[-0x1e],
                                                             (char)puVar44));
                  *(char *)piVar15 = (char)*piVar15 + '_';
                  puVar43 = (uint *)CONCAT31(uVar17,0x8c);
                  puVar46[(int)puVar29 * 2] = (uint)(pbVar14 + puVar46[(int)puVar29 * 2]);
                  uVar8 = *puVar46;
                  *(byte *)puVar46 = (byte)*puVar46 + 0x8c;
                  if ((byte)uVar8 < 0x74) {
                    *pbVar14 = *pbVar14 + cVar37;
                    *(byte *)puVar44 = (byte)*puVar44 >> 1;
                    *(char *)puVar43 = (char)*puVar43 + -0x74;
                    *puVar43 = (uint)(pbVar31 + *puVar43);
                    *puVar43 = *puVar43 << 1 | (uint)((int)*puVar43 < 0);
                    *pbVar14 = *pbVar14 + cVar37;
                    pbVar7[2] = pbVar7[2] - cVar37;
                    *pbVar14 = *pbVar14 + cVar37;
                    pbVar7 = (byte *)CONCAT31(uVar17,0x83);
                    puVar43 = puVar44;
                    goto code_r0x00405312;
                  }
                  *puVar43 = (uint)(*puVar43 + (int)puVar43);
                  piVar15 = (int *)(CONCAT31(uVar17,(byte)puVar43[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar43[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar15 = (int *)((int)piVar15 + *puVar46);
                }
              }
              *pbVar14 = *pbVar14 + bVar22;
              *(byte *)puVar44 = (byte)*puVar44 - (char)pbVar14;
              *pbVar35 = *pbVar35 + bVar22;
              pbVar7 = (byte *)CONCAT31(uVar17,bVar22 | (byte)*puVar44);
            }
            else {
              cVar33 = (char)puVar45;
              *pbVar14 = *pbVar14 + cVar33;
              *(byte **)pbVar7 = pbVar14 + *(int *)pbVar7;
              *pbVar7 = *pbVar7 + bVar22;
              bVar22 = bVar22 + *pbVar7;
              pbVar7 = (byte *)CONCAT31(uVar17,bVar22);
              if (-1 < (char)bVar22) {
                *(byte *)puVar44 = (byte)*puVar44 + bVar5;
                out(*puVar43,(short)pbVar14);
                pbVar14 = pbVar14 + 1;
                *pbVar7 = *pbVar7 + bVar22;
                puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                                           bVar5 | (byte)((uint)iVar13 >> 8));
                cVar37 = bVar22 - (byte)*puVar45;
                pcVar10 = (char *)CONCAT31(uVar17,cVar37);
                *pcVar10 = *pcVar10 + cVar37 + (bVar22 < (byte)*puVar45);
                *pbVar14 = *pbVar14 + cVar37;
                pcVar10 = (char *)((int)pcVar10 * 2 + 0x79);
                *pcVar10 = *pcVar10 + (char)((uint)pbVar14 >> 8);
                pbVar7 = (byte *)in((short)pbVar14);
                puVar43 = puVar43 + 1;
              }
              *(byte *)puVar43 = (byte)*puVar43 + cVar33;
              *pbVar7 = *pbVar7 + (char)pbVar7;
              *pbVar7 = *pbVar7 + (char)pbVar7;
              uStack_78 = (undefined1)in_DS;
              uStack_77 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar7;
              bVar5 = (byte)((uint)puVar45 >> 8);
              bVar24 = bVar5 + *pbVar7;
              iVar13 = *(int *)pbVar7;
              *pbVar14 = *pbVar14 + cVar33;
              bVar22 = (char)(pbVar7 + (uint)CARRY1(bVar5,bVar4) + iVar13) - (byte)*puVar44;
              pbVar7 = (byte *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar5,bVar4) + iVar13)
                                              >> 8),bVar22);
              *(byte *)puVar44 = (byte)*puVar44 ^ bVar22;
              *pbVar31 = *pbVar31 + (char)puVar44;
              *pbVar7 = *pbVar7 + bVar22;
              *pbVar7 = *pbVar7 + bVar22;
              *pbVar7 = *pbVar7 + bVar22;
              puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                         CONCAT11(bVar24 + *pbVar7,cVar33));
              pbVar7 = pbVar7 + (uint)CARRY1(bVar24,*pbVar7) + *(int *)pbVar7;
              *pbVar14 = *pbVar14 + cVar33;
              puVar43 = (uint *)((int)puVar43 + *(int *)(pbVar14 + 0x3e));
            }
            *(byte *)puVar43 = (byte)*puVar43 + (char)pbVar7;
            cVar33 = (char)pbVar7 + 'r';
            puVar43 = (uint *)((int)puVar43 + -1);
            uVar8 = CONCAT31((int3)((uint)pbVar7 >> 8),cVar33);
            *(byte *)puVar43 = *(byte *)puVar43 + cVar33;
            bVar47 = 0xfff38f8d < uVar8;
            iVar13 = uVar8 + 0xc7072;
            pbVar7 = pbVar31;
          } while (SCARRY4(uVar8,0xc7072));
        } while( true );
      }
      *pcVar10 = *pcVar10 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar35 = (byte *)CONCAT31(uVar17,bVar4);
      bVar22 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar4;
      uVar17 = (undefined3)
               ((uint)(pbVar35 + (uint)CARRY1(bVar22,bVar4) + *(int *)((int)puVar45 + (int)pbVar14))
               >> 8);
      cVar37 = (char)(pbVar35 + (uint)CARRY1(bVar22,bVar4) + *(int *)((int)puVar45 + (int)pbVar14))
               + 'E';
      pcVar10 = (char *)CONCAT31(uVar17,cVar37);
      *pcVar10 = *pcVar10 + cVar37;
      cVar37 = cVar37 + *pcVar10;
      pcVar10 = (char *)CONCAT31(uVar17,cVar37);
      *pcVar10 = *pcVar10 + cVar37;
      puVar46 = (uint *)CONCAT31(uVar17,cVar37 + *pcVar10);
      *(char *)puVar46 = (char)*puVar46 + cVar37 + *pcVar10;
      pbVar35 = (byte *)((uint)puVar46 | *puVar46);
      bVar4 = *pbVar35;
      bVar22 = (byte)pbVar35;
      *pbVar35 = *pbVar35 + bVar22;
      piVar15 = (int *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar22 + CARRY1(bVar4,bVar22));
      puVar46 = puVar43;
code_r0x00405117:
      *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
      puVar36 = (uint *)((int)puVar36 - *puVar36);
      puVar43 = puVar46 + 1;
      out(*puVar46,uVar26);
    }
    *pbVar14 = *pbVar14 + (char)puVar45;
    bVar47 = puVar36 < (uint *)*piVar15;
    puVar36 = (uint *)((int)puVar36 - *piVar15);
    bVar4 = (byte)((uint)puVar45 >> 8);
    *(byte *)((int)puVar29 + 0x39) = (*(byte *)((int)puVar29 + 0x39) - bVar4) - bVar47;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    uVar8 = *puVar36;
    *(int *)((int)puVar29 + 0x39) = *(int *)((int)puVar29 + 0x39) - (int)pbVar7;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar8 | (byte)*puVar36,(char)puVar45));
    *(char *)(piVar15 + 10) = (char)piVar15[10] + cVar33;
  } while( true );
code_r0x004052ee:
  *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
  bVar4 = (char)piVar15 + 0x28;
  pbVar7 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),bVar4);
  *pbVar7 = *pbVar7 ^ bVar4;
  *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)pcVar10 >> 8);
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + (byte)pcVar10;
  piVar15 = (int *)(((uint)pbVar7 | 0x1496f09) + *puVar29 + (uint)CARRY1(bVar4,(byte)pcVar10));
  puVar45 = puVar46 + 1;
  out(*puVar46,(short)pbVar14);
  pbVar35 = pbVar14 + -1;
  *piVar15 = *piVar15 + (int)piVar15;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),(byte)pbVar35 | (byte)*puVar44);
  cVar33 = (char)piVar15 + '\x13';
  pbVar7 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),cVar33);
  puVar43 = puVar44;
  puVar46 = puVar45;
  if ((POPCOUNT(cVar33) & 1U) != 0) {
    *pbVar14 = *pbVar14 - (char)((uint)pbVar35 >> 8);
    *pbVar7 = *pbVar7 + cVar33;
code_r0x00405396:
    bVar4 = *pbVar7;
    bVar22 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar22;
    *puVar45 = (uint)(pbVar7 + (uint)CARRY1(bVar4,bVar22) + *puVar45);
    out(*puVar45,(short)pbVar14);
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    pcVar10 = (char *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                               CONCAT11((byte)((uint)pbVar7 >> 8) | (byte)puVar45[1],bVar22));
    *(char **)((int)puVar29 + -1) = pcVar10 + *(int *)((int)puVar29 + -1);
    out(puVar45[1],(short)pbVar14);
    *pcVar10 = *pcVar10 + bVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar7 = *pbVar7 + (char)pbVar7;
  piVar15 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),(char)pbVar7 + 'o');
  puVar44 = (uint *)((int)puVar43 + -1);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar17 = (undefined3)((uint)pbVar14 >> 8);
  piVar15 = (int *)((int)piVar15 + 0x1b7e);
  bVar5 = (byte)pbVar14 | *(byte *)puVar44 | *(byte *)puVar44;
  iRam04115f2c = iRam04115f2c + (int)piVar15;
  out(*puVar46,(short)CONCAT31(uVar17,bVar5));
  *piVar15 = *piVar15 + (int)piVar15;
  bVar5 = bVar5 | (byte)piVar15;
  iVar32 = CONCAT31(uVar17,bVar5);
  pbVar7 = (byte *)((int)piVar15 - *piVar15);
  cVar33 = (char)pbVar7;
  *pcVar10 = *pcVar10 + cVar33;
  cVar37 = (char)pcVar10 - bVar5;
  *pbVar7 = *pbVar7 + cVar33;
  uVar26 = (undefined2)((uint)pcVar10 >> 0x10);
  bVar22 = (byte)((uint)pcVar10 >> 8) | *pbVar7;
  pbVar31 = pbVar31 + -1;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar4 = *(byte *)(CONCAT22(uVar26,CONCAT11(bVar22,cVar37)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar7;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar31;
  *pbVar7 = *pbVar7 + cVar33;
  bVar4 = bVar22 | bVar4 | *(byte *)puVar44;
  iVar21 = CONCAT22(uVar26,CONCAT11(bVar4,cVar37));
  pbVar35 = (byte *)((uint)(puVar46 + 1) ^ *(uint *)(iVar32 + -0x43));
  iVar13 = *(int *)pbVar7;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  if (SCARRY4(iVar13,(int)pbVar7)) {
    *pbVar7 = *pbVar7 + cVar33;
  }
  pbVar14 = pbVar7 + 0x5674;
  puVar29 = (uint *)((int)puVar29 +
                    (-(uint)((byte *)0xffffa98b < pbVar7) - *(int *)(pbVar35 + -0x7f)));
  bVar22 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar22;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  bVar24 = bVar22 + 0x2d;
  piVar15 = (int *)CONCAT31(uVar18,bVar24);
  *(uint *)(pbVar35 + (int)puVar29 * 8) =
       *(int *)(pbVar35 + (int)puVar29 * 8) + iVar32 + (uint)(0xd2 < bVar22);
  bVar22 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar24;
  if (!CARRY1(bVar22,bVar24)) {
    do {
      pbVar14 = (byte *)(iVar32 + 1);
      bVar22 = (byte)piVar15;
      *(byte *)piVar15 = (char)*piVar15 + bVar22;
      bVar5 = (byte)((uint)piVar15 >> 8);
      bVar24 = (byte)puVar44 | bVar5;
      puVar43 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar24);
      out(*(undefined4 *)pbVar35,(short)pbVar14);
      *(byte *)piVar15 = (char)*piVar15 + bVar22;
      uVar26 = (undefined2)((uint)iVar21 >> 0x10);
      cVar33 = (char)iVar21;
      pbVar7 = (byte *)CONCAT22(uVar26,CONCAT11((byte)((uint)iVar21 >> 8) | *pbVar14,cVar33));
      bVar4 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar22;
      *(byte *)piVar15 = (char)*piVar15 + bVar22 + CARRY1(bVar4,bVar22);
      *pbVar14 = *pbVar14 + bVar22;
      *(byte *)puVar29 = (byte)*puVar29 + bVar5;
      *(int *)((int)piVar15 * 2) =
           *(int *)((int)piVar15 * 2) + CONCAT22(uVar26,CONCAT11(0x1c,cVar33));
      *(byte *)piVar15 = (char)*piVar15 + bVar22;
      cVar37 = (char)pbVar14;
      *(byte *)puVar43 = (byte)*puVar43 + cVar37;
      *(byte *)((int)piVar15 * 2) = *(byte *)((int)piVar15 * 2) ^ bVar22;
      *(byte *)piVar15 = (char)*piVar15 + bVar22;
      pbVar7 = pbVar35 + 8;
      out(*(undefined4 *)(pbVar35 + 4),(short)pbVar14);
      piVar15 = (int *)0xa0a0000;
      *pbVar14 = *pbVar14;
      bVar22 = cVar33 - cVar37;
      iVar21 = CONCAT22(uVar26,CONCAT11((byte)puVar29[0x14] | 0x1c | bRam0ca87216,bVar22));
      *pbVar14 = *pbVar14;
      bVar4 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar22;
      if (!CARRY1(bVar4,bVar22)) {
        piVar15 = (int *)0x1e7b7000;
        bVar4 = (byte)((uint)puVar44 >> 8) | *(byte *)(iVar32 + 3);
        puVar43 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar4,bVar24));
        if (bVar4 != 0) {
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar37 + pbVar7[(int)puVar29 * 8]);
          piVar15 = (int *)0x6d7d7000;
          iVar21 = iVar21 + 1;
        }
      }
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      iVar32 = CONCAT31((int3)((uint)pbVar14 >> 8),(byte)pbVar14 | pbVar7[(int)puVar29 * 8]);
      *(char *)piVar15 = (char)*piVar15;
      piVar15 = (int *)CONCAT31((int3)((uint)piVar15 >> 8),0xf9);
      *puVar29 = (uint)((int)piVar15 + *puVar29 + 1);
      pbVar35 = pbVar35 + 0xc;
      out(*(undefined4 *)pbVar7,(short)iVar32);
      puVar44 = puVar43;
    } while( true );
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar24 = bVar24 | *(byte *)((int)piVar15 + 0x4000081);
  piVar15 = (int *)CONCAT31(uVar18,bVar24);
  if ('\0' < (char)bVar24) {
    *(byte *)piVar15 = (char)*piVar15 + bVar24;
    puVar46 = (uint *)CONCAT31(uVar18,bVar24 + 0x28);
    *puVar46 = *puVar46 ^ (uint)puVar46;
    *(byte *)puVar44 = *(byte *)puVar44 + bVar4;
    cVar33 = (bVar24 + 0x28) - bVar4;
    pcVar10 = (char *)CONCAT31(uVar18,cVar33);
    *pcVar10 = *pcVar10 + cVar33;
    pbVar14 = (byte *)CONCAT31(uVar17,bVar5 | *(byte *)puVar44);
    pcVar16 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + *(byte *)((int)puVar43 + 0x7d),
                                        (char)puVar44));
    *pcVar10 = *pcVar10 + cVar33;
    pbVar7 = (byte *)CONCAT31(uVar18,cVar33 + 0x39U ^ *(byte *)CONCAT31(uVar18,cVar33 + 0x39U));
    *pcVar16 = *pcVar16 + bVar4;
    puVar45 = (uint *)(pbVar35 + 4);
    out(*(undefined4 *)pbVar35,(short)pbVar14);
    goto code_r0x00405396;
  }
  puVar46 = (uint *)(pbVar35 + 4);
  out(*(undefined4 *)pbVar35,(short)iVar32);
  pcVar10 = (char *)(iVar21 + -1);
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pbVar14 = (byte *)CONCAT31(uVar17,bVar5 | *(byte *)puVar44);
  goto code_r0x004052ee;
}


