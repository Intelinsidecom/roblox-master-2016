/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040488c
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(undefined4 compareOptions, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, uint * param_7, char * param_8, uint * param_9)
 * Local Vars  : uStack_67, uStack_68, uStack_64, uStack_66, puStack_24, compareOptions, uStack_28, puStack_10, uStack_18, puStack_8, puStack_c, uVar1, iStack_4, uVar3, uVar2, bVar5, bVar4, uVar7, bVar6, puVar8, in_EAX, puVar10, pbVar9, uVar12, pcVar11, iVar14, puVar13, piVar16, pbVar15, pcVar18, pcVar17, uVar20, uVar19, pcVar22, puVar21, bVar24, iVar23, bVar26, cVar25, param_2, uVar28, param_3, uVar27, param_4, pbVar30, bVar29, param_5, cVar32, param_6, iVar31, param_7, cVar34, param_8, cVar33, param_9, puVar35, unaff_EBX, cVar37, uVar36, ppuVar39, cVar38, ppuVar40, unaff_EBP, ppuVar42, puVar41, puVar43, unaff_ESI, puVar45, puVar44, puVar46, unaff_EDI, in_ES, puVar47, in_DS, in_SS, in_AF, bVar48, ppuVar49, unaff_retaddr
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
_ctor(undefined4 compareOptions,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
     uint *param_6,uint *param_7,char *param_8,uint *param_9)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  byte *in_EAX;
  uint *puVar8;
  undefined3 uVar19;
  byte *pbVar9;
  ushort *puVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  byte *pbVar15;
  int *piVar16;
  char *pcVar17;
  undefined3 uVar20;
  char *pcVar18;
  byte bVar24;
  char cVar25;
  undefined2 uVar27;
  uint *puVar21;
  byte bVar26;
  undefined2 uVar28;
  char *pcVar22;
  int iVar23;
  byte bVar29;
  byte *pbVar30;
  int iVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar37;
  uint *unaff_EBX;
  uint *puVar35;
  char cVar38;
  uint uVar36;
  undefined4 **ppuVar39;
  uint *unaff_EBP;
  undefined4 **ppuVar40;
  undefined4 *puVar41;
  undefined4 **ppuVar42;
  int unaff_ESI;
  uint *puVar43;
  uint *puVar44;
  uint *puVar45;
  uint *unaff_EDI;
  uint *puVar46;
  uint *puVar47;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar48;
  byte in_AF;
  undefined4 **unaff_retaddr;
  undefined4 **ppuVar49;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_28;
  uint *puStack_24;
  undefined2 uStack_18;
  uint *puStack_10;
  uint *puStack_c;
  undefined4 *puStack_8;
  int iStack_4;
  
                    /* .NET CLR Managed Code */
  bVar4 = (byte)((uint)compareOptions >> 8);
  puVar47 = (uint *)CONCAT22((short)((uint)compareOptions >> 0x10),
                             CONCAT11(bVar4 + *in_EAX,(char)compareOptions));
  puVar8 = (uint *)(in_EAX + (uint)CARRY1(bVar4,*in_EAX) + *(int *)in_EAX);
  *(char *)param_2 = (char)*param_2 + (char)compareOptions;
  puVar43 = (uint *)(unaff_ESI + param_2[0xf]);
  do {
    uVar36 = *puVar8;
    cVar32 = (char)puVar47;
    cVar25 = (char)((uint)puVar8 | uVar36);
    *(byte *)puVar43 = (byte)*puVar43 + cVar25;
    uVar19 = (undefined3)(((uint)puVar8 | uVar36) >> 8);
    bVar4 = cVar25 + (byte)*unaff_EBX;
    pcVar11 = (char *)CONCAT31(uVar19,bVar4);
    bVar24 = (byte)((uint)puVar47 >> 8);
    uVar28 = (undefined2)((uint)puVar47 >> 0x10);
    cVar33 = (char)param_2;
    if (SCARRY1(cVar25,(byte)*unaff_EBX) == (char)bVar4 < '\0') {
      *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar33;
      *pcVar11 = *pcVar11 + bVar4;
      puVar47 = (uint *)CONCAT22(uVar28,CONCAT11(bVar24 | (byte)*param_2,cVar32));
      param_2 = (uint *)((int)param_2 + 1);
      pcVar11 = pcVar11 + *param_2;
      if ((POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0) goto code_r0x00404921;
      pcVar11 = (char *)((uint)pcVar11 | 8);
      unaff_EBP = unaff_EBX;
code_r0x004048de:
      cVar25 = (char)pcVar11;
      *(byte *)puVar43 = (byte)*puVar43 + cVar25;
      *pcVar11 = *pcVar11 + cVar25;
      *(byte **)(pcVar11 + (int)puVar47) = (byte *)(*(int *)(pcVar11 + (int)puVar47) + (int)puVar47)
      ;
      iStack_4 = CONCAT22(iStack_4._2_2_,in_ES);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBP >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBP >> 8) +
                                            *(byte *)((int)unaff_EBP + 0x75),(char)unaff_EBP));
      *pcVar11 = *pcVar11 + cVar25;
      pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar25 + 'o');
      puVar43 = (uint *)((int)puVar43 + 1);
      *pcVar11 = *pcVar11 + cVar25 + 'o';
      unaff_retaddr = (undefined4 **)((uint)unaff_retaddr & 0xffff0000);
      in_SS = in_ES;
code_r0x004048f5:
      pcVar11 = (char *)((int)((uint)pcVar11 & 0x7e26062d) - *(int *)((uint)pcVar11 & 0x7e26062d));
      *(byte *)param_2 = (byte)*param_2 + (char)puVar47;
      do {
        uRam00c36f08 = SUB41(pcVar11,0);
        while( true ) {
          uVar36 = *puVar43;
          cVar25 = (char)pcVar11;
          *(byte *)puVar43 = (byte)*puVar43 + cVar25;
          uVar28 = (undefined2)((uint)unaff_retaddr >> 0x10);
          unaff_retaddr = (undefined4 **)CONCAT22(uVar28,in_ES);
          if (SCARRY1((byte)uVar36,cVar25) == (char)(byte)*puVar43 < '\0') {
            pcVar11[(int)unaff_EBP] = pcVar11[(int)unaff_EBP] + cVar25;
            goto code_r0x00404982;
          }
          *pcVar11 = *pcVar11 + cVar25;
          pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar25 + '*');
          unaff_retaddr = (undefined4 **)CONCAT22(uVar28,in_DS);
          bVar4 = (byte)((uint)puVar47 >> 8);
          cVar25 = (char)puVar47;
          bVar24 = bVar4 + *pbVar9;
          pbVar9 = pbVar9 + (uint)CARRY1(bVar4,*pbVar9) + *(int *)pbVar9;
          *(byte *)param_2 = (byte)*param_2 + cVar25;
          cVar32 = (char)unaff_EBX - (byte)*puVar43;
          bVar4 = *pbVar9;
          puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                     CONCAT11(bVar24 + *pbVar9,cVar25));
          iVar14 = *(int *)pbVar9;
          *(byte *)param_2 = (byte)*param_2 + cVar25;
          pcVar11 = (char *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar24,bVar4) + iVar14) >>
                                           8),(char)(pbVar9 + (uint)CARRY1(bVar24,bVar4) + iVar14) -
                                              *(byte *)((int)param_2 + 3));
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar32) + -0x3a),cVar32));
code_r0x00404921:
          bVar4 = (byte)pcVar11;
          *pcVar11 = *pcVar11 + bVar4;
          pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar4 + 0x6f);
          *(byte *)puVar47 = ((byte)*puVar47 - (bVar4 + 0x6f)) - (0x90 < bVar4);
code_r0x00404927:
          *(byte *)param_2 = (byte)*param_2 + (char)puVar47;
          iStack_4 = CONCAT22(iStack_4._2_2_,in_SS);
          *(byte *)puVar47 = (byte)*puVar47 + 1;
          cVar25 = (char)((uint)puVar47 >> 8) - *(byte *)((int)puVar43 + 2);
          puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(cVar25,(char)puVar47));
          if ((POPCOUNT(cVar25) & 1U) == 0) break;
          pcVar11 = pcVar11 + -0x1b7e2606;
          *pcVar11 = *pcVar11 + (char)pcVar11;
          pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar11 >> 8) | (byte)param_2[0x30dbc2],
                                              (char)pcVar11));
        }
code_r0x00404931:
        *pcVar11 = *pcVar11 + (char)pcVar11;
        cVar25 = (char)pcVar11 + '\x02';
        pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar25);
      } while ((POPCOUNT(cVar25) & 1U) != 0);
      do {
        bVar4 = (byte)pcVar11;
        *pcVar11 = *pcVar11 + bVar4;
        uVar19 = (undefined3)((uint)pcVar11 >> 8);
        piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x6f);
        *puVar47 = (*puVar47 - (int)piVar16) - (uint)(0x90 < bVar4);
        *(byte *)param_2 = (byte)*param_2 + (char)puVar47;
        iVar14 = *(int *)((int)unaff_EDI + 0x1a);
        *piVar16 = *piVar16 + (int)piVar16;
        param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*puVar43);
        *(byte *)puVar47 = (byte)*puVar47 + 1;
        bVar4 = (bVar4 + 0x6f) - (char)*piVar16;
        pbVar9 = (byte *)CONCAT31(uVar19,bVar4);
        *pbVar9 = *pbVar9 + bVar4;
        iVar23 = *(int *)pbVar9;
        cVar25 = bVar4 + *pbVar9;
        puVar10 = (ushort *)CONCAT31(uVar19,cVar25);
        *puVar10 = *puVar10 +
                   (ushort)CARRY1(bVar4,*pbVar9) * (((ushort)puVar10 & 3) - (*puVar10 & 3));
        *(char *)puVar10 = (char)*puVar10 + cVar25;
        *(char *)puVar10 = (char)*puVar10 + cVar25;
        *(char *)puVar10 = (char)*puVar10 + cVar25;
        unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
        unaff_EBP = (uint *)((int)unaff_EBP + iVar14);
        puVar8 = (uint *)((int)puVar43 + iVar23);
code_r0x0040495b:
        puVar43 = (uint *)unaff_retaddr;
        cVar25 = (char)puVar10;
        *(char *)puVar10 = (char)*puVar10 + cVar25;
        uVar19 = (undefined3)((uint)puVar10 >> 8);
        cVar32 = cVar25 + '\x02';
        pcVar11 = (char *)CONCAT31(uVar19,cVar32);
        unaff_retaddr = (undefined4 **)puVar43;
        if ((POPCOUNT(cVar32) & 1U) != 0) {
          *param_2 = (uint)(*param_2 + (int)unaff_EBP);
          puVar43 = (uint *)((int)puVar8 + 1);
          out((byte)*puVar8,(short)param_2);
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
          goto code_r0x00404931;
        }
        *pcVar11 = *pcVar11 + cVar32;
        pbVar9 = (byte *)(CONCAT31(uVar19,cVar25 + '}') + (int)unaff_EBP);
        *pbVar9 = *pbVar9 + cVar25 + '}';
        *param_8 = *param_8 + (char)param_8;
        puVar47 = (uint *)CONCAT22((short)((uint)param_7 >> 0x10),
                                   CONCAT11((byte)((uint)param_7 >> 8) | *(byte *)((int)param_7 * 3)
                                            ,(char)param_7));
        unaff_EDI = (uint *)(iStack_4 + *(int *)((int)param_5 + 0x6f));
        pcVar11 = param_8;
        param_2 = param_6;
        unaff_EBX = param_5;
        unaff_EBP = param_3;
        while( true ) {
          cVar25 = (char)pcVar11;
          *pcVar11 = *pcVar11 + cVar25;
          uVar19 = (undefined3)((uint)pcVar11 >> 8);
          cVar32 = cVar25 + '\x02';
          pcVar11 = (char *)CONCAT31(uVar19,cVar32);
          if ((POPCOUNT(cVar32) & 1U) != 0) break;
          *pcVar11 = *pcVar11 + cVar32;
          pcVar11 = (char *)CONCAT31(uVar19,cVar25 + '}');
          out(*puVar43,(short)param_2);
          *pcVar11 = *pcVar11 + cVar25 + '}';
code_r0x00404982:
          *(char *)param_9 = (char)*param_9 + (char)param_9;
          puVar47 = (uint *)CONCAT22((short)((uint)param_8 >> 0x10),
                                     CONCAT11((byte)((uint)param_8 >> 8) | param_8[(int)param_3],
                                              (char)param_8));
          unaff_EDI = (uint *)((int)unaff_retaddr + *(int *)((int)param_6 + 0x71));
          puVar8 = param_9;
          param_2 = param_7;
          unaff_EBX = param_6;
          puVar43 = param_3;
          while( true ) {
            cVar25 = (char)puVar8;
            *(byte *)puVar8 = (byte)*puVar8 + cVar25;
            uVar19 = (undefined3)((uint)puVar8 >> 8);
            cVar32 = cVar25 + '\x02';
            puVar10 = (ushort *)CONCAT31(uVar19,cVar32);
            unaff_EBP = param_4;
            puVar8 = puVar43;
            if ((POPCOUNT(cVar32) & 1U) != 0) goto code_r0x0040495b;
            *(char *)puVar10 = (char)*puVar10 + cVar32;
            bVar24 = cVar25 + 0x7d;
            iVar14 = CONCAT31(uVar19,bVar24);
            pbVar9 = (byte *)(iVar14 + (int)param_4);
            bVar4 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar24;
            uVar36 = *puVar47;
            *(byte *)param_2 = (byte)*param_2 + (char)puVar47;
            pcVar11 = (char *)(((iVar14 - uVar36) - (uint)CARRY1(bVar4,bVar24)) + -0x727b0317);
            cVar25 = (char)pcVar11;
            *pcVar11 = *pcVar11 + cVar25;
            uVar19 = (undefined3)((uint)pcVar11 >> 8);
            cVar32 = cVar25 + '\x02';
            pcVar11 = (char *)CONCAT31(uVar19,cVar32);
            if ((POPCOUNT(cVar32) & 1U) != 0) break;
            *pcVar11 = *pcVar11 + cVar32;
            bVar24 = cVar25 + 0x7d;
            iVar14 = CONCAT31(uVar19,bVar24);
            pbVar9 = (byte *)(iVar14 + (int)param_4);
            bVar4 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar24;
            puVar8 = (uint *)((iVar14 - *puVar47) - (uint)CARRY1(bVar4,bVar24));
            puVar46 = param_2;
            puVar44 = puVar43;
code_r0x004049b4:
            puVar43 = puVar44;
            *(byte *)puVar46 = (byte)*puVar46 + (char)puVar47;
            param_2 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),
                                       ((char)puVar46 - (byte)*unaff_EDI) - (byte)*puVar43);
            bVar24 = *(byte *)((int)puVar43 + 0x72);
            *puVar8 = *puVar8 & (uint)puVar47;
            pbVar9 = (byte *)((int)puVar8 + 2);
            *pbVar9 = *pbVar9 + (char)((uint)puVar46 >> 8);
            bVar4 = *pbVar9;
            puVar35 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar24);
            while (unaff_EBX = puVar35, (POPCOUNT(bVar4) & 1U) == 0) {
              cVar25 = (char)puVar8;
              *(byte *)puVar8 = (byte)*puVar8 + cVar25;
              uVar19 = (undefined3)((uint)puVar8 >> 8);
              cVar32 = cVar25 + '\x03';
              pbVar9 = (byte *)CONCAT31(uVar19,cVar32);
              puVar44 = puVar43 + 1;
              out(*puVar43,(short)param_2);
              in_SS = SUB42(unaff_retaddr,0);
              *pbVar9 = *pbVar9 + cVar32;
              cVar33 = (char)puVar47;
              puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                         CONCAT11((byte)((uint)puVar47 >> 8) | *pbVar9,cVar33));
              *(int *)pbVar9 = *(int *)pbVar9 - (int)pbVar9;
              *(byte *)param_2 = (byte)*param_2 + cVar33;
              cVar33 = (char)puVar35 - *(byte *)((int)puVar43 + 6);
              unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar35 >> 8),cVar33);
              if ((POPCOUNT(cVar33) & 1U) != 0) {
                pbVar15 = (byte *)((int)unaff_EDI + (int)param_4 * 2);
                *pbVar15 = *pbVar15 + cVar32;
                ppuVar42 = (undefined4 **)param_4;
                goto code_r0x00404a51;
              }
              *pbVar9 = *pbVar9 + cVar32;
              puVar8 = (uint *)CONCAT31(uVar19,cVar25 + 'r');
              *(byte *)puVar8 = (byte)*puVar8;
              puVar43 = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
              do {
                unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
                bVar4 = (byte)puVar8;
                *(byte *)puVar8 = (byte)*puVar8 + bVar4;
                uVar19 = (undefined3)((uint)puVar8 >> 8);
                bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
                puVar8 = (uint *)CONCAT31(uVar19,bVar4);
                cVar25 = (char)puVar47;
                *(byte *)param_2 = (byte)*param_2 + cVar25;
                bVar24 = (char)((uint)puVar47 >> 8) - *(byte *)((int)puVar44 + 2);
                puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar24,cVar25));
                puVar46 = param_2;
                unaff_retaddr = (undefined4 **)puVar43;
                if ((POPCOUNT(bVar24) & 1U) != 0) goto code_r0x004049b4;
                *(byte *)puVar8 = (byte)*puVar8 + bVar4;
                bVar5 = bVar4 + 2;
                puVar8 = (uint *)CONCAT31(uVar19,bVar5);
                ppuVar40 = (undefined4 **)param_4;
                if ((POPCOUNT(bVar5) & 1U) == 0) goto code_r0x004049f5;
                puVar44 = puVar43;
              } while (0xfd < bVar4);
              *(byte *)puVar8 = (byte)*puVar8 | bVar5;
              puVar35 = unaff_EBX;
              bVar4 = (byte)*puVar8;
            }
          }
        }
        *(byte *)param_2 = (byte)*param_2 + (char)puVar47;
        iStack_4 = CONCAT22(iStack_4._2_2_,in_SS);
      } while( true );
    }
    *pcVar11 = *pcVar11 + bVar4;
    bVar5 = bVar4 + 2;
    pcVar11 = (char *)CONCAT31(uVar19,bVar5);
    if (bVar4 < 0xfe) {
      *(byte *)puVar43 = (byte)*puVar43 + bVar5;
      goto code_r0x004048f5;
    }
    *pcVar11 = *pcVar11 + bVar5;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) |
                                        *(byte *)((int)unaff_EBX + -0x5b),cVar33));
    cVar25 = *pcVar11;
    *pcVar11 = *pcVar11 + bVar5;
    uVar7 = (ushort)((uint)unaff_retaddr >> 0x10);
    unaff_retaddr = (undefined4 **)CONCAT22(uVar7,in_ES);
    if (SCARRY1(cVar25,bVar5) == *pcVar11 < '\0') goto code_r0x00404927;
    *pcVar11 = *pcVar11 + bVar5;
    bVar4 = bVar4 + 4;
    pbVar9 = (byte *)CONCAT31(uVar19,bVar4);
    if (0xfd < bVar5) {
      *pbVar9 = *pbVar9 + bVar4;
      puStack_8 = (undefined4 *)CONCAT22(puStack_8._2_2_,in_ES);
      bVar4 = bVar4 | (byte)*puVar43;
      pcVar11 = (char *)CONCAT31(uVar19,bVar4);
      *pcVar11 = *pcVar11 + bVar4;
      *unaff_EBX = (uint)(*unaff_EBX + (int)puVar47);
      bVar24 = *(byte *)((int)unaff_EBX + 0x75);
      *pcVar11 = *pcVar11 + bVar4;
      pcVar11 = (char *)CONCAT31(uVar19,bVar4 + 0x6f);
      *pcVar11 = *pcVar11 + bVar4 + 0x6f;
      unaff_retaddr = (undefined4 **)((uint)uVar7 << 0x10);
      pcVar11 = (char *)((int)((uint)pcVar11 & 0x7e26062d) - *(int *)((uint)pcVar11 & 0x7e26062d));
      *(byte *)param_2 = (byte)*param_2 + cVar32;
      uRam00c16f07 = SUB41(pcVar11,0);
      unaff_EBP = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + bVar24,(char)unaff_EBX));
      goto code_r0x004048de;
    }
    *pbVar9 = *pbVar9 + bVar4;
    puVar47 = (uint *)CONCAT22(uVar28,CONCAT11(bVar24 | (byte)*param_2,cVar32));
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar33;
    *(byte *)puVar43 = (byte)*puVar43 ^ bVar4;
    pbVar9[0x2c000000] = pbVar9[0x2c000000] + bVar4;
    bVar24 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    *param_2 = (uint)(pbVar9 + (uint)CARRY1(bVar24,bVar4) + *param_2);
    *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar33;
    *pbVar9 = *pbVar9 + bVar4;
    puVar8 = (uint *)CONCAT31(uVar19,bVar4 | (byte)*unaff_EBX);
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar8;
    *(byte *)puVar8 = (byte)*puVar8 + bVar4;
    uVar19 = (undefined3)((uint)puVar8 >> 8);
    bVar5 = bVar4 + 0x6f;
    pbVar9 = (byte *)CONCAT31(uVar19,bVar5);
    *puVar47 = (*puVar47 - (int)pbVar9) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar25;
    puVar41 = (undefined4 *)((int)ppuVar40 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    uVar20 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | (byte)*puVar44;
    param_2 = (uint *)CONCAT31(uVar20,bVar4);
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    cVar32 = bVar5 - *pbVar9;
    puVar44 = (uint *)((int)puVar44 + (-(uint)(bVar5 < *pbVar9) - *(int *)CONCAT31(uVar19,cVar32)));
    uVar12 = CONCAT31(uVar19,cVar32 + *(char *)CONCAT31(uVar19,cVar32));
    bVar48 = CARRY1(bRam14110000,bVar24);
    bRam14110000 = bRam14110000 + bVar24;
    puVar43 = (uint *)((int)unaff_EBX + (int)puVar44 * 2);
    uVar36 = *puVar43;
    uVar2 = uVar12 + *puVar43;
    puVar13 = (undefined4 *)(uVar2 + bVar48);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar13 = uVar1;
    iStack_4 = CONCAT22(iStack_4._2_2_,in_ES);
    uVar36 = (uint)(CARRY4(uVar12,uVar36) || CARRY4(uVar2,(uint)bVar48));
    puVar8 = (uint *)((int)puVar13 + uRam7d020511 + uVar36);
    unaff_retaddr = &puStack_8;
    ppuVar49 = &puStack_8;
    ppuVar39 = &puStack_8;
    ppuVar42 = &puStack_8;
    ppuVar40 = &puStack_8;
    puStack_8 = puVar41;
    cVar32 = '\x03';
    do {
      puVar41 = puVar41 + -1;
      ppuVar39 = ppuVar39 + -1;
      *ppuVar39 = (undefined4 *)*puVar41;
      cVar32 = cVar32 + -1;
    } while ('\0' < cVar32);
    pbRam00c82802 =
         (byte *)((int)puVar8 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar13,uRam7d020511) ||
                      CARRY4((int)puVar13 + uRam7d020511,uVar36))));
    uVar36 = *puVar44;
    cVar32 = (char)puVar8;
    *(byte *)puVar44 = (byte)*puVar44 + cVar32;
  } while (SCARRY1((byte)uVar36,cVar32) == (char)(byte)*puVar44 < '\0');
  *(byte *)puVar8 = (byte)*puVar8 + cVar32;
  iVar14 = CONCAT31((int3)((uint)puVar8 >> 8),cVar32 + '\x11') + 0xc57b;
  bVar24 = (byte)iVar14;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar20,bVar4 + (byte)*puVar47);
  iVar14 = (CONCAT31((int3)((uint)iVar14 >> 8),bVar24 + 0x6f) - (uint)(0x90 < bVar24)) + -0x18093a86
  ;
  cVar32 = (char)iVar14;
  uVar19 = (undefined3)((uint)iVar14 >> 8);
  cVar25 = cVar32 + '\x02';
  pbVar9 = (byte *)CONCAT31(uVar19,cVar25);
  if ((POPCOUNT(cVar25) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar9 = *pbVar9 + cVar25;
  pbVar9 = (byte *)CONCAT31(uVar19,cVar32 + 'q');
  ppuVar42 = &puStack_8;
code_r0x00404a51:
  pbVar15 = pbVar9 + 1;
  cVar25 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cVar25;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar35 >> 0x10),
                               CONCAT11((char)((uint)puVar35 >> 8) - cVar25,cVar33));
  *pbVar15 = *pbVar15 + cVar25;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar47);
  pbVar9 = pbVar9 + 0x757b03;
  pbVar15 = (byte *)((int)unaff_EDI + (int)ppuVar42 * 2);
  cVar25 = (char)pbVar9;
  *pbVar15 = *pbVar15 + cVar25;
  *pbVar9 = *pbVar9 + cVar25;
  *(byte *)puVar44 = (byte)*puVar44 - (char)((uint)pbVar9 >> 8);
  *pbVar9 = *pbVar9 + cVar25;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar42 + -0x3a));
  *pbVar9 = *pbVar9 + cVar25;
  pbVar9 = (byte *)(CONCAT31((int3)((uint)pbVar9 >> 8),cVar25 + '\x11') + 0x757b02);
  pbVar15 = (byte *)((int)unaff_EDI + (int)ppuVar42 * 2);
  bVar24 = (byte)pbVar9;
  *pbVar15 = *pbVar15 + bVar24;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar24;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
  pbRam011006fe = pbVar9 + (int)(pbRam011006fe + CARRY1(bVar4,bVar24));
  uVar36 = *puVar44;
  *(byte *)puVar44 = (byte)*puVar44 + bVar24;
  ppuVar49 = unaff_retaddr;
  if (!CARRY1((byte)uVar36,bVar24)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    bVar5 = (byte)puVar47;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                               CONCAT11((byte)((uint)puVar47 >> 8) | *pbVar9,bVar5));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar19 = (undefined3)((uint)pbVar9 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar25 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar11 = (char *)CONCAT31(uVar19,cVar25);
    *pcVar11 = *pcVar11 + cVar25;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar42 + -0x39));
    *pcVar11 = *pcVar11 + cVar25;
    iVar14 = CONCAT31(uVar19,cVar25 + '\x11') + 0xc57b;
    iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '\x11') + 0xc67b;
    bVar24 = (byte)iVar14;
    bVar4 = bVar24 + 0x6f;
    pbVar9 = (byte *)CONCAT31((int3)((uint)iVar14 >> 8),bVar4);
    *puVar47 = (*puVar47 - (int)pbVar9) - (uint)(0x90 < bVar24);
    uVar36 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    pbRam011106fe = pbVar9 + (int)(pbRam011106fe + CARRY1((byte)uVar36,bVar5));
    uVar36 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    if (!CARRY1((byte)uVar36,bVar4)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    bVar4 = (byte)puVar47;
    bVar24 = (byte)((uint)puVar47 >> 8) | *pbVar9;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar24,bVar4));
    *pbVar9 = *pbVar9 - (char)pbVar9;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar24;
    out(*puVar44,(short)param_2);
    *puVar47 = *puVar47 & (uint)pbVar9;
    uVar36 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar4;
    pbVar9 = pbVar9 + (uint)CARRY1((byte)uVar36,bVar4) + puVar44[1];
    *pbVar9 = *pbVar9 + (char)pbVar9;
    *(byte *)puVar47 = (byte)*puVar47 + (char)param_2;
    puVar44 = puVar44 + 1;
    while( true ) {
      out(*puVar44,(short)param_2);
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 & (byte)*puVar47);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar47;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[5],
                                          (char)param_2));
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      puVar44 = puVar44 + 1;
code_r0x00404ad4:
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
      pbVar9 = (byte *)((uint)pbVar9 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar9;
code_r0x00404add:
      bVar4 = (byte)pbVar9;
      uVar19 = (undefined3)((uint)pbVar9 >> 8);
      cVar25 = bVar4 + 8;
      pbVar9 = (byte *)CONCAT31(uVar19,cVar25);
      if (SCARRY1(bVar4,'\b') == cVar25 < '\0') break;
      *pbVar9 = *pbVar9 + cVar25;
      cVar25 = bVar4 + 10;
      piVar16 = (int *)CONCAT31(uVar19,cVar25);
      if ((POPCOUNT(cVar25) & 1U) != 0) {
        *piVar16 = (int)(*piVar16 + (int)piVar16);
        goto code_r0x00404b18;
      }
      *(char *)piVar16 = (char)*piVar16 + cVar25;
      puVar43 = (uint *)CONCAT31(uVar19,bVar4 + 0x7c);
      *puVar43 = *puVar43 & (uint)puVar47;
      *(char *)((int)puVar43 + 0x11) = *(char *)((int)puVar43 + 0x11) + (char)((uint)param_2 >> 8);
      cVar25 = (char)((int)puVar43 + 0xc67b);
      uVar19 = (undefined3)((uint)((int)puVar43 + 0xc67b) >> 8);
      bVar4 = cVar25 + 8;
      pbVar9 = (byte *)CONCAT31(uVar19,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar9 = *pbVar9 + bVar4;
        cRam02060000 = cVar25 + 'w';
        puVar8 = (uint *)CONCAT31(uVar19,cRam02060000);
        *(byte *)puVar8 = (byte)*puVar8 + cRam02060000;
        cVar25 = (char)puVar47;
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                   CONCAT11((byte)((uint)puVar47 >> 8) | (byte)*puVar8,cVar25));
        *puVar8 = *puVar8 - (int)puVar8;
        *(byte *)param_2 = (byte)*param_2 + cVar25;
        puVar43 = puVar44 + 1;
        out(*puVar44,(short)param_2);
        puVar44 = puVar43;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar11 = (char *)((uint)puVar8 | *puVar8);
        goto code_r0x00404b89;
      }
      bVar24 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar4;
      *puVar44 = (uint)(pbVar9 + (uint)CARRY1(bVar24,bVar4) + *puVar44);
    }
    *(byte *)puVar44 = (byte)*puVar44 + 1;
    *puVar47 = (uint)(pbVar9 + (uint)(0xf7 < bVar4) + *puVar47);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar8 = (byte)*puVar8 + (char)puVar8;
    puVar43 = (uint *)CONCAT31((int3)((uint)puVar8 >> 8),(char)puVar8 + 'r');
    piVar16 = (int *)((uint)puVar43 | *puVar43);
    param_2 = puStack_24;
code_r0x00404b18:
    bRam11060000 = (byte)piVar16;
    iVar14 = CONCAT31((int3)((uint)((int)piVar16 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar16 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar14;
    iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),bVar4 + 0x6f);
    *puVar47 = (*puVar47 - iVar14) - (uint)(0x90 < bVar4);
    cVar25 = (char)puVar47;
    *(byte *)param_2 = (byte)*param_2 + cVar25;
    bVar26 = (byte)((uint)unaff_EBX >> 8);
    bVar5 = (byte)((uint)param_2 >> 8) | bVar26;
    pcVar17 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar5,(byte)param_2));
    piVar16 = (int *)(iVar14 + 0x73060001);
    *(byte *)puVar47 = (byte)*puVar47 & (byte)piVar16;
    *pcVar17 = *pcVar17 + cVar25;
    bVar24 = (byte)((uint)puVar47 >> 8);
    *(byte *)piVar16 = *(char *)piVar16 - bVar24;
    *(byte *)piVar16 = *(char *)piVar16 + (byte)piVar16;
    iVar14 = *piVar16;
    *piVar16 = *piVar16 - (int)piVar16;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar24;
    pcVar11 = (char *)((uint)piVar16 | *unaff_EDI);
    *pcVar17 = *pcVar17 - bVar24;
    bVar4 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar4;
    ppuVar42 = (undefined4 **)
               (((int)ppuVar42 - iVar14) - *(int *)(pcVar11 + ((int)ppuVar42 - iVar14)));
    uVar28 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar6 = (byte)unaff_EBX;
    cVar32 = bVar26 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar9 = (byte *)CONCAT22(uVar28,CONCAT11(cVar32,bVar6));
    *pcVar11 = *pcVar11 + bVar4;
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    uVar12 = CONCAT31(uVar19,bVar4 + 7);
    puVar43 = (uint *)((int)ppuVar42 + -0x1faeef1);
    uVar36 = *puVar43;
    uVar2 = *puVar43 + uVar12;
    *puVar43 = uVar2 + (0xf8 < bVar4);
    puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
    puVar46 = puStack_24;
    bVar4 = bVar4 + 7 + (byte)*puVar47 +
            (CARRY4(uVar36,uVar12) || CARRY4(uVar2,(uint)(0xf8 < bVar4)));
    puVar8 = (uint *)CONCAT31(uVar19,bVar4);
    uVar36 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    if (CARRY1((byte)uVar36,bVar4)) break;
    *(byte *)puVar8 = (byte)*puVar8 + bVar4;
    unaff_EBX = (uint *)CONCAT22(uVar28,CONCAT11(cVar32 + pbVar9[0x76],bVar6));
    uStack_28 = in_ES;
  }
  *(byte *)puVar8 = (byte)*puVar8 + bVar4;
  uVar20 = (undefined3)((uint)pcVar17 >> 8);
  bVar29 = (byte)param_2 | *pbVar9;
  param_2 = (uint *)CONCAT31(uVar20,bVar29);
  pcRam2b060000 = (char *)CONCAT31(uVar19,bVar4 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar4 + 0x39)) - (0xd7 < (byte)(bVar4 + 0x11));
  bVar26 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar24;
  puVar43 = puVar44 + 1;
  out(*puVar44,(short)param_2);
  bVar4 = (bVar4 + 0x37) - CARRY1(bVar26,bVar24);
  piVar16 = (int *)CONCAT31(uVar19,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar4;
    iVar14 = CONCAT31(uVar19,bVar4 + 0x11) + 0xc77b;
    pcVar11 = (char *)CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + 'r');
    pcVar11[0x28] = pcVar11[0x28] + bVar5;
code_r0x00404b89:
    cVar25 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar25;
    *pcVar11 = *pcVar11 + cVar25;
    *pcVar11 = *pcVar11 + cVar25;
    puVar10 = (ushort *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar25 + 'r');
    uVar7 = (ushort)puVar10 | *puVar10;
    pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),uVar7);
    bRam11060000 = (byte)uVar7;
    out(*puVar43,(short)param_2);
    *pcVar11 = *pcVar11 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar4;
  puVar41 = (undefined4 *)((int)ppuVar42 - *(int *)((int)unaff_EDI + 0x21));
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pcVar11 = (char *)CONCAT31(uVar20,bVar29 | *pbVar9);
  puVar8 = puVar44 + 2;
  out(*puVar43,(short)pcVar11);
  uVar36 = *puVar47;
  *pcVar11 = *pcVar11 + cVar25;
  uVar36 = CONCAT31(uVar19,bVar4 & (byte)uVar36) | 0x767b02;
  *(byte *)((int)puVar47 + (int)pcVar11) = *(byte *)((int)puVar47 + (int)pcVar11) + (char)uVar36;
  iVar14 = uVar36 + 0xc67b;
  cVar38 = (char)iVar14;
  uVar19 = (undefined3)((uint)iVar14 >> 8);
  cVar33 = cVar38 + 'r';
  pcVar11 = (char *)CONCAT31(uVar19,cVar33);
  pcVar11[0x28] = pcVar11[0x28] + bVar5;
  *pcVar11 = *pcVar11 + cVar33;
  uVar27 = (undefined2)((uint)puVar47 >> 0x10);
  bVar24 = bVar24 | *(byte *)((int)puStack_24 + -0x5e);
  puVar21 = (uint *)CONCAT22(uVar27,CONCAT11(bVar24,cVar25));
  *pcVar11 = *pcVar11 + cVar33;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,uStack_28);
  puVar47 = (uint *)CONCAT22(uVar28,CONCAT11(cVar32 + pbVar9[0x76],bVar6));
  *pcVar11 = *pcVar11 + cVar33;
  puVar43 = (uint *)CONCAT31(uVar19,cVar38 + -0x1c);
  pcVar11 = (char *)((uint)puVar43 | *puVar43);
  bVar48 = (POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar11;
  puVar43 = puStack_24;
  puVar13 = puVar41;
  puVar35 = puVar46;
  uVar28 = uStack_28;
  if (!bVar48) goto code_r0x00404ca8;
  *pcVar11 = *pcVar11 + cRam02060000;
  puVar35 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cRam02060000 + 'r');
  *puVar35 = *puVar35 & (uint)puVar21;
  *(char *)((int)puVar35 + 0x11) = *(char *)((int)puVar35 + 0x11) + (char)((ushort)uStack_28 >> 8);
  iVar14 = (int)puVar35 + 0xc77b;
  uVar19 = (undefined3)((uint)iVar14 >> 8);
  cRam02060000 = (char)iVar14 + '\t';
  pbVar9 = (byte *)CONCAT31(uVar19,cRam02060000);
  out(*puVar8,uStack_28);
  *pbVar9 = *pbVar9 + cRam02060000;
  puVar35 = (uint *)CONCAT22(uVar27,CONCAT11(bVar24 | *pbVar9,cVar25));
  *(int *)pbVar9 = *(int *)pbVar9 - (int)pbVar9;
  *(byte *)puStack_24 = (byte)*puStack_24 + cVar25;
  out(puVar44[3],uStack_28);
  puVar8 = puVar44 + 4;
  uVar28 = uStack_28;
  if ((POPCOUNT((byte)*puStack_24) & 1U) != 0) goto code_r0x00404cca;
  *pbVar9 = *pbVar9 + cRam02060000;
  puVar10 = (ushort *)CONCAT31(uVar19,(char)iVar14 + '{');
  uVar7 = (ushort)puVar10 | *puVar10;
  pcVar11 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),uVar7);
  bVar4 = (byte)uVar7;
  out(puVar44[4],uStack_28);
  pbVar9 = (byte *)((int)puVar35 + 1);
  bRam11060000 = bVar4;
  *pcVar11 = *pcVar11 + bVar4;
  puVar21 = (uint *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                             CONCAT11((byte)((uint)pbVar9 >> 8) | bRam110cde91,(char)pbVar9));
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar4 - 7);
  *puVar46 = (uint)(pcVar11 + (uint)(bVar4 < 7) + *puVar46);
  puVar8 = puVar44 + 6;
  out(puVar44[5],uStack_28);
  puVar43 = (uint *)((int)puStack_24 + 1);
  *pcVar11 = *pcVar11 + (bVar4 - 7);
  puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),bVar6 | (byte)(uVar7 >> 8));
  do {
    bVar4 = (char)pcVar11 - *pcVar11;
    uVar36 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar4;
    cVar25 = bVar4 - CARRY1((byte)uVar36,bVar4);
    *(byte *)puVar43 = (byte)*puVar43 + cVar25;
    cVar32 = (char)((uint)puVar21 >> 8);
    *(byte *)(puVar46 + 0x673b40) = (byte)puVar46[0x673b40] + cVar32;
    puVar44 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar25);
    *(byte *)puVar44 = (byte)*puVar44 + cVar25;
    *(byte *)puVar43 = (byte)*puVar43 + cVar25;
    puVar47[0x16] = (uint)(puVar47[0x16] + (int)puVar8);
    puVar35 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar21 >> 0x10),
                                               CONCAT11(cVar32 + (char)((uint)pcVar11 >> 8),
                                                        (char)puVar21)) >> 8),
                               (char)puVar21 + *(char *)((int)puVar44 * 2));
    *(byte *)puVar44 = (byte)*puVar44 + cVar25;
    *(byte *)puVar8 = (byte)*puVar8 + (char)puVar47;
_ctor:
    bVar24 = (byte)((uint)puVar35 >> 8);
    uVar36 = *puVar44;
    bVar4 = (byte)puVar35;
    puVar44 = (uint *)((int)puVar44 + (uint)CARRY1(bVar24,(byte)*puVar44) + *puVar44);
    *(byte *)puVar43 = (byte)*puVar43 + bVar4;
    cVar25 = bVar4 - *(byte *)((int)puVar43 + 3);
    puVar21 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar35 >> 0x10),
                                               CONCAT11(bVar24 + (byte)uVar36,bVar4)) >> 8),cVar25);
    if ((POPCOUNT(cVar25) & 1U) != 0) {
      if (*(byte *)((int)puVar43 + 3) <= bVar4) {
        *puVar44 = (uint)(*puVar44 + (int)puVar44);
        puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(byte)puVar43 | (byte)*puVar47);
        puVar44 = puVar44 + 0x230e;
        puVar35 = puVar21;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
    cVar25 = (char)puVar44 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)puVar44 >> 8),cVar25);
    bVar48 = (POPCOUNT(cVar25) & 1U) == 0;
    puVar13 = puVar41;
    puVar35 = puVar46;
    uVar28 = uStack_18;
code_r0x00404ca8:
    uStack_18 = uVar28;
    puVar41 = puStack_8;
    puVar46 = puStack_10;
    if (bVar48) break;
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar21;
    puVar41 = puVar13;
    puVar46 = puVar35;
  } while( true );
  *pcVar11 = *pcVar11 + (char)pcVar11;
  *(byte *)param_5 = (char)*param_5 + (byte)param_5;
  puVar35 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                             CONCAT11((byte)((uint)param_4 >> 8) | (byte)*param_3,(char)param_4));
  *(byte *)ppuVar49 = (byte)*ppuVar49 + (char)ppuVar49;
  *(byte *)((int)param_5 * 2) = *(byte *)((int)param_5 * 2) ^ (byte)param_5;
  uVar3 = *(undefined6 *)param_5;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar9 = (byte *)uVar3;
  bVar24 = (byte)uVar3;
  *pbVar9 = *pbVar9 + bVar24;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar24;
  puVar43 = (uint *)((int)puVar35 + 0x11673);
  uVar36 = *puVar43;
  uVar2 = *puVar43;
  *puVar43 = uVar2 + (int)param_3 + (uint)CARRY1(bVar4,bVar24);
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uStack_18);
  pbVar9 = pbVar9 + (uint)(CARRY4(uVar36,(uint)param_3) ||
                          CARRY4(uVar2 + (int)param_3,(uint)CARRY1(bVar4,bVar24))) +
                    *(int *)((int)puVar35 + (int)param_3);
  puVar43 = param_3;
  puVar47 = (uint *)ppuVar49;
  puVar8 = puStack_c;
  uVar28 = uStack_18;
code_r0x00404cca:
  uStack_18 = uVar28;
  cVar25 = (char)pbVar9 + '\x04';
  puVar44 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar25);
  if (SCARRY1((char)pbVar9,'\x04') == cVar25 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
  puVar45 = puVar8 + 1;
  out(*puVar8,(short)puVar43);
  uVar36 = *puVar35;
  uVar2 = *puVar43;
  bVar4 = (byte)puVar35;
  *(byte *)puVar43 = (byte)*puVar43 + bVar4;
  iVar14 = (CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 + '\x03') & uVar36) + iRam00008c38;
  *(byte *)puVar35 = (byte)*puVar35 + (char)puVar43;
  pcVar11 = (char *)(iVar14 + (uint)CARRY1((byte)uVar2,bVar4) + 0x1246f);
  uVar19 = (undefined3)((uint)puVar35 >> 8);
  bVar4 = bVar4 | (byte)*puVar43;
  puVar21 = (uint *)CONCAT31(uVar19,bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar11 >> 8);
  puVar44 = (uint *)(CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + *pcVar11) + 0x1fbeef2);
  uVar36 = *puVar44;
  *puVar44 = (uint)(*puVar44 + (int)puVar44);
  if (CARRY4(uVar36,(uint)puVar44)) {
    *puVar44 = (uint)(*puVar44 + (int)puVar44);
    pcVar11 = (char *)CONCAT31(uVar19,bVar4 | bRam00282809);
    cVar25 = (char)((uint)puVar35 >> 8);
    *(byte *)puVar47 = (byte)*puVar47 + cVar25;
    *pcVar11 = *pcVar11 - cVar25;
    *(byte *)puVar44 = *(byte *)puVar44 + (char)puVar44;
    iVar14 = (int)pcVar11 - *puVar47;
    puVar8 = puVar8 + 2;
    out(*puVar45,(short)puVar43);
    *puVar44 = (uint)(*puVar44 + (int)puVar44);
    puVar21 = (uint *)CONCAT22((short)((uint)iVar14 >> 0x10),
                               CONCAT11((byte)((uint)iVar14 >> 8) | bRambf73070b,(char)iVar14));
code_r0x00404d15:
    uVar36 = *puVar44;
    bVar4 = (byte)puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    puVar45 = puVar8 + 1;
    out(*puVar8,(short)puVar43);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar24 = bVar4 + in_AF * '\x06';
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                               bVar24 + (0x90 < (bVar24 & 0xf0) |
                                        CARRY1((byte)uVar36,bVar4) | in_AF * (0xf9 < bVar24)) * '`')
    ;
  }
  *puVar44 = (uint)(*puVar44 + (int)puVar44);
  bVar4 = (byte)puVar44 | (byte)*puVar46;
  puVar8 = puVar45 + 1;
  uVar27 = SUB42(puVar43,0);
  out(*puVar45,uVar27);
  *(byte *)puVar21 = (byte)*puVar21 - bVar4;
  uVar36 = *puVar43;
  bVar24 = (byte)puVar21;
  *(byte *)puVar43 = (byte)*puVar43 + bVar24;
  iVar14 = CONCAT31((int3)((uint)puVar44 >> 8),bVar4) + *puVar8 + (uint)CARRY1((byte)uVar36,bVar24);
  pcVar11 = (char *)((int)puVar41 - *puVar43);
  uVar19 = (undefined3)((uint)iVar14 >> 8);
  cVar25 = (char)iVar14 + (byte)*puVar8 + (puVar41 < (undefined4 *)*puVar43);
  puVar44 = (uint *)CONCAT31(uVar19,cVar25);
  bVar4 = (byte)((uint)puVar21 >> 8);
  *(byte *)puVar21 = (byte)*puVar21 - bVar4;
  *puVar44 = (uint)(*puVar44 + (int)puVar44);
  bVar24 = bVar24 | *(byte *)((int)puVar43 + (int)puVar44);
  uVar28 = (undefined2)((uint)puVar21 >> 0x10);
  if ((POPCOUNT(bVar24) & 1U) == 0) {
    *(byte *)puVar44 = (byte)*puVar44 + cVar25;
    pcVar17 = (char *)CONCAT31(uVar19,cVar25 + '\x12');
    *pcVar17 = *pcVar17 + bVar4;
    puVar44 = (uint *)CONCAT31(uVar19,(cVar25 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar21 >> 8),bVar24));
    uVar36 = *puVar43;
    *(byte *)puVar43 = (byte)*puVar43 + bVar24;
    if (!CARRY1((byte)uVar36,bVar24)) {
      pbVar9 = (byte *)((uint)puVar44 | *puVar44);
      out(*puVar8,uVar27);
      *pbVar9 = *pbVar9 + (char)pbVar9;
      bVar5 = *pbVar9;
      piVar16 = (int *)CONCAT22(uVar28,CONCAT11(bVar4 | bVar5,bVar24));
      iVar14 = (int)pbVar9 - *piVar16;
      *(byte *)puVar43 = (byte)*puVar43 + bVar24;
      puVar44 = puVar45 + 3;
      out(puVar45[2],uVar27);
      uRam12060000 = (undefined1)iVar14;
      *(char *)((int)piVar16 + iVar14) = *(char *)((int)piVar16 + iVar14) - (bVar4 | bVar5);
      *(byte *)puVar43 = (byte)*puVar43 + bVar24;
      pbVar9 = (byte *)(iVar14 + -0x120edecd);
      *(byte *)puVar44 = (byte)*puVar44 + 1;
      bVar4 = *pbVar9;
      bVar5 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar5;
      pcVar11 = pcVar11 + ((-1 - *(int *)((int)puVar46 + 0x42)) - (uint)CARRY1(bVar4,bVar5));
      *pbVar9 = *pbVar9 + bVar5;
      bVar4 = (byte)puVar47 | (byte)((uint)pbVar9 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar9;
      uVar36 = *puVar43;
      pcVar17 = (char *)(((uint)pbVar9 | 0x11) + 0x511072c);
      puVar8 = puVar45 + 4;
      out(*puVar44,uVar27);
      puVar43 = (uint *)((int)puVar43 + 1);
      *pcVar17 = *pcVar17 + (char)pcVar17;
      bVar5 = (byte)((uint)pcVar17 >> 8);
      puVar47 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar47 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar47 >> 8) | (byte)uVar36,
                                                          bVar4)) >> 8),bVar4 | bVar5);
      uVar19 = (undefined3)((uint)pcVar17 >> 8);
      bVar4 = (char)pcVar17 - *pcVar17;
      pcVar17 = (char *)CONCAT31(uVar19,bVar4);
      *pcVar17 = *pcVar17 + bVar4;
      *(int *)((int)pcVar17 * 2) = (int)(*(int *)((int)pcVar17 * 2) + (int)puVar47);
      *(byte *)puVar43 = *(byte *)puVar43 + bVar4;
      *pcVar11 = *pcVar11 + bVar5;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar36 = CONCAT31(uVar19,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar36;
      pbVar9 = (byte *)CONCAT22((short)(uVar36 >> 0x10),CONCAT11(bVar5 + in_AF,bVar4));
      *(byte *)puVar8 = (byte)*puVar8 + bVar24;
      *pbVar9 = *pbVar9 + bVar4;
      *pbVar9 = *pbVar9 + bVar4;
      bVar48 = CARRY1(bVar4,*pbVar9);
      puVar44 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar4 + *pbVar9);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar47 = (byte)*puVar47 - (char)puVar43;
  }
  *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
  bVar48 = false;
  piVar16 = (int *)CONCAT22(uVar28,CONCAT11(bVar4 | (byte)*puVar43,bVar24));
code_r0x00404d9a:
  do {
    puVar35 = puVar43;
    *puVar44 = (*puVar44 - (int)puVar44) - (uint)bVar48;
    bVar4 = (byte)((uint)piVar16 >> 8);
    uVar28 = (undefined2)((uint)piVar16 >> 0x10);
    bVar24 = (byte)piVar16;
    bVar5 = bVar4 + (byte)iRam00000c00;
    pbVar9 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *(byte *)puVar35 = (byte)*puVar35 + bVar24;
    puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 - (byte)*puVar8);
    bVar4 = *pbVar9;
    puVar44 = (uint *)(pbVar9 + (uint)CARRY1(bVar5,*pbVar9) + *(int *)pbVar9);
    *(byte *)puVar35 = (byte)*puVar35 + bVar24;
    cVar32 = ((bVar5 + bVar4) - (byte)*puVar35) + (byte)*puVar44;
    pcVar17 = (char *)CONCAT22(uVar28,CONCAT11(cVar32,bVar24));
    puVar43 = puVar46 + 1;
    uVar36 = in((short)puVar35);
    *puVar46 = uVar36;
    cVar25 = (char)puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + cVar25;
    uVar19 = (undefined3)((uint)puVar35 >> 8);
    bVar5 = (byte)puVar35 | (byte)*puVar8;
    pcVar22 = (char *)CONCAT31(uVar19,bVar5);
    *pcVar17 = *pcVar17 + '\x01';
    bVar4 = (cVar32 - *pcVar22) + (byte)*puVar44;
    pcVar17 = (char *)CONCAT22(uVar28,CONCAT11(bVar4,bVar24));
    puVar46 = puVar46 + 2;
    uVar36 = in((short)pcVar22);
    *puVar43 = uVar36;
    *(byte *)puVar44 = (byte)*puVar44 + cVar25;
    bVar5 = bVar5 | (byte)*puVar8;
    puVar43 = (uint *)CONCAT31(uVar19,bVar5);
    *pcVar17 = *pcVar17 + '\x01';
    bVar48 = bVar24 < *(byte *)((int)puVar43 + 2);
    cVar32 = bVar24 - *(byte *)((int)puVar43 + 2);
    piVar16 = (int *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar32);
  } while ((POPCOUNT(cVar32) & 1U) != 0);
  *(byte *)puVar44 = (byte)*puVar44 + cVar25;
  bVar24 = cVar25 + 0x7b;
  pbVar9 = (byte *)CONCAT31((int3)((uint)puVar44 >> 8),bVar24);
  *(byte *)((int)puVar47 + (int)pbVar9) = *(byte *)((int)puVar47 + (int)pbVar9) + bVar24;
  puVar44 = puVar8 + 1;
  uVar27 = SUB42(puVar43,0);
  out(*puVar8,uVar27);
  pbVar15 = (byte *)((int)puVar47 + -1);
  *pbVar9 = *pbVar9 + bVar24;
  bVar4 = bVar4 | (byte)*puVar43;
  piVar16 = (int *)CONCAT22(uVar28,CONCAT11(bVar4,cVar32));
  *pbVar9 = *pbVar9 + bVar24;
  *pbVar15 = *pbVar15 + bVar5;
  *pbVar15 = *pbVar15 ^ bVar24;
  *(byte *)puVar43 = (byte)*puVar43 + bVar4;
  *pbVar9 = *pbVar9 + bVar24;
  do {
    bVar26 = (byte)((uint)piVar16 >> 8);
    *(byte *)puVar46 = (byte)*puVar46 + bVar26;
    bVar4 = *pbVar9;
    bVar24 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar24;
    *(byte **)((int)puVar47 + 0x17) =
         (byte *)((int)puVar44 + (uint)CARRY1(bVar4,bVar24) + *(int *)((int)puVar47 + 0x17));
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    uVar20 = (undefined3)((uint)pbVar9 >> 8);
    bVar24 = bVar24 | (byte)*puVar44;
    puVar46 = (uint *)((int)puVar46 + *(int *)(pcVar11 + -0x34));
    *(char *)CONCAT31(uVar20,bVar24) = *(char *)CONCAT31(uVar20,bVar24) + bVar24;
    bVar4 = bVar24 + 2;
    cVar25 = (char)((uint)puVar35 >> 8);
    bVar6 = (byte)piVar16;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar9 = (byte *)CONCAT31(uVar20,bVar24 + 0x15 + (0xfd < bVar24));
      if (0xec < bVar4 || CARRY1(bVar24 + 0x15,0xfd < bVar24)) {
        *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      }
code_r0x00404e60:
      pcVar11 = pcVar11 + -*puVar43;
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      pbVar30 = (byte *)((int)puVar44 + (-(uint)CARRY1(bVar4,(byte)pbVar9) - *(int *)pbVar9));
      pbVar9 = pbVar9 + *(int *)pbVar9;
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_DS);
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      *(char *)piVar16 = (char)*piVar16 + cVar25;
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      *(byte **)(pbVar15 + (int)puVar43) =
           (byte *)((int)puVar43 +
                   (uint)CARRY1(bVar4,(byte)pbVar9) + *(int *)(pbVar15 + (int)puVar43));
      pbVar9 = pbVar9 + 0x73061314;
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      uVar20 = (undefined3)((uint)piVar16 >> 8);
      bVar6 = bVar6 | (byte)*puVar43;
      pcVar22 = (char *)CONCAT31(uVar20,bVar6);
      *pbVar9 = *pbVar9 + (char)pbVar9;
      cVar25 = (char)pbVar9 + 'o';
      pcVar17 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar25);
      *pcVar17 = *pcVar17 + cVar25;
      out(*(undefined4 *)pbVar30,uVar27);
      uVar36 = *puVar43;
      *(byte *)puVar43 = (byte)*puVar43 + bVar6;
      pcVar17 = pcVar17 + (uint)CARRY1((byte)uVar36,bVar6) + *puVar46;
      *pcVar17 = *pcVar17 + (char)pcVar17;
      *pcVar22 = *pcVar22 + bVar5;
      puVar44 = (uint *)(pbVar30 + 8);
      out(*(undefined4 *)(pbVar30 + 4),uVar27);
      *(byte *)puVar43 = (byte)*puVar43 + bVar6;
      piVar16 = (int *)((uint)pcVar17 | *puVar46);
      pcVar22[0x390a0000] = pcVar22[0x390a0000] - bVar26;
      pbVar15 = (byte *)0x7000000;
      *(byte *)puVar46 = (byte)*puVar46 - bVar26;
      *piVar16 = *piVar16 + (int)piVar16;
      puVar8 = (uint *)CONCAT31(uVar20,bVar6 | *(byte *)((int)piVar16 + (int)pcVar22));
      *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) - bVar26;
      cRam07000000 = cRam07000000 + bVar26;
      piVar16 = (int *)((uint)piVar16 | 0x777b02);
      pbVar9 = (byte *)((int)puVar46 + (int)pcVar11 * 2);
      bVar48 = SCARRY1(*pbVar9,(char)piVar16);
      *pbVar9 = *pbVar9 + (char)piVar16;
      bVar4 = *pbVar9;
      *(char *)piVar16 = (char)*piVar16;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar20,bVar4) = *(char *)CONCAT31(uVar20,bVar4) + bVar4;
    bVar24 = bVar24 + 0x71;
    pbVar9 = (byte *)CONCAT31(uVar20,bVar24);
    *pbVar9 = *pbVar9;
    *(byte *)puVar44 = (byte)*puVar44 + 1;
    *piVar16 = (*piVar16 - (int)pbVar9) - (uint)(0x90 < bVar4);
    uVar36 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar24;
    if (!CARRY1((byte)uVar36,bVar24)) goto code_r0x00404e60;
    *pbVar9 = *pbVar9 + bVar24;
    uVar28 = (undefined2)((uint)piVar16 >> 0x10);
    bVar26 = bVar26 | *pbVar9;
    pbVar9 = pbVar9 + -*(int *)pbVar9;
    *pbVar15 = *pbVar15 + bVar26;
    cVar32 = bVar6 - *(byte *)((int)puVar43 + 2);
    piVar16 = (int *)CONCAT31((int3)(CONCAT22(uVar28,CONCAT11(bVar26,bVar6)) >> 8),cVar32);
  } while ((POPCOUNT(cVar32) & 1U) != 0);
  cVar33 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cVar33;
  uVar20 = (undefined3)((uint)pbVar9 >> 8);
  pcVar17 = (char *)CONCAT31(uVar20,cVar33 + '{');
  out(*puVar44,uVar27);
  *pcVar17 = *pcVar17 + cVar33 + '{';
  bVar24 = cVar33 + 0x7e;
  pbVar9 = (byte *)CONCAT31(uVar20,bVar24);
  puVar44 = puVar8 + 3;
  out(puVar8[2],uVar27);
  pbVar15 = (byte *)((int)puVar47 + -2);
  *pbVar9 = *pbVar9 + bVar24;
  bVar26 = bVar26 | (byte)*puVar43;
  puVar8 = (uint *)CONCAT22(uVar28,CONCAT11(bVar26,cVar32));
  *pbVar9 = *pbVar9 + bVar24;
  *pbVar15 = *pbVar15 + bVar5;
  *pbVar15 = *pbVar15 ^ bVar24;
  *(byte *)puVar43 = (byte)*puVar43 + bVar26;
  *pbVar9 = *pbVar9 + bVar24;
  *pbVar9 = *pbVar9 + cVar25;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar24;
  puVar47[6] = (uint)((int)puVar44 + (uint)CARRY1(bVar4,bVar24) + puVar47[6]);
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  bVar24 = bVar24 | (byte)*puVar44;
  puVar46 = (uint *)((int)puVar46 + *(int *)(pcVar11 + -0x33));
  *(char *)CONCAT31(uVar20,bVar24) = *(char *)CONCAT31(uVar20,bVar24) + bVar24;
  bVar48 = SCARRY1(bVar24,'\x02');
  bVar4 = bVar24 + 2;
  piVar16 = (int *)CONCAT31(uVar20,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar4;
    return CONCAT31(uVar20,bVar24 + 0x71);
  }
code_r0x00404ebf:
  bVar24 = (byte)piVar16;
  uVar20 = (undefined3)((uint)piVar16 >> 8);
  if (bVar4 != 0 && bVar48 == (char)bVar4 < '\0') {
    *(byte *)piVar16 = (char)*piVar16 + bVar24;
    puVar44[(int)puVar46 * 2] =
         (uint)((int)puVar43 + (uint)(0xd2 < bVar24) + puVar44[(int)puVar46 * 2]);
    return CONCAT31(uVar20,bVar24 + 0x2d);
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar4 = *pbVar15;
  *puVar44 = (uint)(*puVar44 + (int)piVar16);
  bVar6 = (byte)((uint)puVar8 >> 8);
  *(byte *)piVar16 = (char)*piVar16 - bVar6;
  *(byte *)piVar16 = (char)*piVar16 + bVar24;
  pbVar9 = (byte *)(CONCAT31(uVar19,bVar5 | bVar4) - *(int *)pbVar15);
  puVar47 = (uint *)CONCAT31(uVar20,bVar24 + 6);
  *(uint *)(pbVar15 + (int)puVar44 * 2) =
       (int)puVar47 + (uint)(0xf9 < bVar24) + *(int *)(pbVar15 + (int)puVar44 * 2);
  *(byte *)puVar8 = (byte)*puVar8 ^ bVar24 + 6;
  bVar24 = (byte)puVar8;
  *pbVar9 = *pbVar9 + bVar24;
  puVar43 = puVar44 + 1;
  uVar28 = SUB42(pbVar9,0);
  out(*puVar44,uVar28);
  *puVar8 = *puVar8 ^ (uint)puVar47;
  *pbVar9 = *pbVar9 + bVar24;
  puVar35 = (uint *)(pbVar15 + -*(int *)pbVar15);
  *(uint *)((int)puVar46 + 0x31) = *(uint *)((int)puVar46 + 0x31) | (uint)pcVar11;
  *puVar47 = *puVar47 + (int)puVar47;
  puVar8 = (uint *)CONCAT22((short)((uint)puVar8 >> 0x10),CONCAT11(bVar6 | (byte)*puVar35,bVar24));
  *(byte **)(pbVar9 + 0x6e) = (byte *)(*(int *)(pbVar9 + 0x6e) + (int)puVar43);
  piVar16 = (int *)((uint)puVar47 | *puVar47);
  bVar5 = (byte)puVar35;
  *(byte *)puVar46 = (byte)*puVar46 - bVar5;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar24;
  if (CARRY1(bVar4,bVar24)) {
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar4 = pbVar9[0x11];
    uVar27 = (undefined2)((uint)puVar35 >> 0x10);
    out(*puVar43,uVar28);
    puVar8 = (uint *)((int)puVar8 + 1);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar29 = (byte)((uint)puVar35 >> 8) | bVar4 | *pbVar9;
    pcVar17 = (char *)((int)piVar16 + -0x21000001);
    bVar4 = (byte)pcVar17 | 0x11;
    uVar19 = (undefined3)((uint)pcVar17 >> 8);
    cVar25 = bVar4 - 7;
    pcVar22 = (char *)CONCAT31(uVar19,cVar25);
    *puVar46 = (uint)(pcVar22 + (uint)(bVar4 < 7) + *puVar46);
    puVar43 = puVar44 + 3;
    out(puVar44[2],uVar28);
    pbVar9 = pbVar9 + 1;
    *pcVar22 = *pcVar22 + cVar25;
    bVar6 = (byte)((uint)pcVar17 >> 8);
    bVar26 = bVar5 | bVar6;
    bVar24 = cVar25 - *pcVar22;
    bVar4 = *(byte *)puVar8;
    *(byte *)puVar8 = *(byte *)puVar8 + bVar24;
    *(char *)CONCAT31(uVar19,bVar24) =
         *(char *)CONCAT31(uVar19,bVar24) + bVar24 + CARRY1(bVar4,bVar24);
    *pbVar9 = *pbVar9 + bVar24;
    *(byte *)puVar43 = (byte)*puVar43 + bVar26;
    bVar4 = (byte)((uint)pbVar9 >> 8);
    *(byte *)puVar8 = *(byte *)puVar8 + bVar24 + CARRY1((byte)pbVar9,bVar4);
    piVar16 = (int *)CONCAT31(uVar19,bVar24);
    *(byte *)piVar16 = (char)*piVar16 + bVar24;
    pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                              CONCAT11(bVar4 + bVar6,(byte)pbVar9 + bVar4));
    puVar35 = (uint *)CONCAT22(uVar27,CONCAT11(bVar29 + *(char *)(CONCAT31((int3)(CONCAT22(uVar27,
                                                  CONCAT11(bVar29,bVar5)) >> 8),bVar26) + 0x76),
                                               bVar26));
    uStack_18 = puStack_24._0_2_;
code_r0x00404fa4:
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    pcVar17 = (char *)(CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + '(') ^ *puVar8);
    cVar33 = (char)puVar8;
    *pbVar9 = *pbVar9 + cVar33;
    uVar28 = (undefined2)((uint)puVar35 >> 0x10);
    cVar34 = (char)puVar35;
    cVar37 = (char)((uint)puVar35 >> 8) + *(byte *)((int)puVar35 + 0x75);
    *pcVar17 = *pcVar17 + (char)pcVar17;
    cVar25 = (char)pcVar17 + 'o';
    pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar25);
    *pcVar17 = *pcVar17 + cVar25;
    cVar38 = (char)((uint)puVar8 >> 8);
    *pcVar11 = *pcVar11 - cVar38;
    pbVar9[1] = pbVar9[1] + cVar33;
    pcVar17 = pcVar17 + -0x757b021b;
    cVar25 = (char)pcVar17;
    *pcVar17 = *pcVar17 + cVar25;
    uVar19 = (undefined3)((uint)pcVar17 >> 8);
    cVar32 = cVar25 + 'o';
    pcVar17 = (char *)CONCAT31(uVar19,cVar32);
    pbVar30 = pbVar9 + 2;
    *pcVar17 = *pcVar17 + cVar32;
    iVar14 = CONCAT22(uVar28,CONCAT11(cVar37 + *(char *)(CONCAT22(uVar28,CONCAT11(cVar37,cVar34)) +
                                                        0x76),cVar34));
    *pcVar17 = *pcVar17 + cVar32;
    pcVar17 = (char *)CONCAT31(uVar19,cVar25 + -0x22);
    puVar47 = (uint *)((int)puVar46 + 1);
    *(byte *)puVar46 = (byte)*puVar43;
    *pcVar17 = *pcVar17 + cVar25 + -0x22;
    *(byte *)((int)puVar8 + (int)pcVar17) =
         *(byte *)((int)puVar8 + (int)pcVar17) - (char)((uint)pbVar30 >> 8);
    *pbVar30 = *pbVar30 + cVar33;
    bVar24 = cVar38 - pbVar9[4];
    pbVar15 = (byte *)((int)puVar43 + 5);
    out(*(undefined4 *)((int)puVar43 + 1),(short)pbVar30);
    puVar43 = (uint *)((uint)(pcVar17 + *(int *)(pcVar17 + iVar14)) ^ 0x280a0001);
    *(byte *)puVar43 = (byte)*puVar43 << 1 | (char)(byte)*puVar43 < '\0';
    *pbVar15 = *pbVar15 + (char)puVar43;
    pbVar15 = pbVar15 + *(int *)(pbVar9 + -0x5c);
    pbVar9 = (byte *)((uint)puVar43 | *puVar43);
    *pbVar15 = *pbVar15 + (char)pbVar9;
    puVar35 = (uint *)CONCAT31((int3)((uint)iVar14 >> 8),cVar34 - (char)pbVar30);
    bVar4 = *pbVar9;
    puVar8 = (uint *)CONCAT22((short)((uint)puVar8 >> 0x10),CONCAT11(bVar24 + *pbVar9,cVar33));
    iVar14 = *(int *)pbVar9;
    *pbVar30 = *pbVar30 + cVar33;
    cVar25 = (char)(pbVar9 + (uint)CARRY1(bVar24,bVar4) + iVar14) + 'r';
    puVar44 = (uint *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar24,bVar4) + iVar14) >> 8),
                               cVar25);
    pbVar9 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),CONCAT11(10,(char)pbVar30));
    *(char *)(puVar44 + 10) = (char)puVar44[10] + '\n';
    *pbVar15 = *pbVar15 + cVar25;
    puVar43 = (uint *)(pbVar15 + *(int *)(pbVar9 + -0x5e));
    uVar36 = *puVar44;
    cVar25 = (char)((uint)puVar44 | uVar36);
    *(byte *)puVar43 = (byte)*puVar43 + cVar25;
    uVar19 = (undefined3)(((uint)puVar44 | uVar36) >> 8);
    cVar32 = cVar25 + (byte)*puVar35;
    puVar44 = (uint *)CONCAT31(uVar19,cVar32);
    if (SCARRY1(cVar25,(byte)*puVar35) == cVar32 < '\0') goto code_r0x00405090;
    *(byte *)puVar44 = (byte)*puVar44 + cVar32;
    piVar16 = (int *)CONCAT31(uVar19,cVar32 + '\x02');
    puVar46 = puVar47;
  }
  else {
    out(2,(char)piVar16);
    if ((POPCOUNT(*pbVar9) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar19 = (undefined3)((uint)piVar16 >> 8);
  cVar25 = (char)piVar16 + '}';
  pbVar15 = (byte *)CONCAT31(uVar19,cVar25);
  pbVar9[(int)pbVar15] = pbVar9[(int)pbVar15] + cVar25;
  pbVar9[0x280a0000] = pbVar9[0x280a0000] - (char)((uint)piVar16 >> 8);
  bVar4 = (byte)puVar8 & 7;
  *pbVar15 = *pbVar15 << bVar4 | *pbVar15 >> 8 - bVar4;
  *(byte *)puVar43 = (byte)*puVar43 + cVar25;
  cVar33 = (char)puVar35 - (byte)*puVar43;
  uVar28 = (undefined2)((uint)puVar35 >> 0x10);
  cVar38 = (char)((uint)puVar35 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar35 >> 8),cVar33) + 0x7c);
  pcVar17 = (char *)CONCAT22(uVar28,CONCAT11(cVar38,cVar33));
  *pbVar15 = *pbVar15 + cVar25;
  bVar24 = (char)piVar16 + 0xa7U & *pbVar9;
  puVar47 = (uint *)((int)puVar46 + *(int *)(pcVar11 + 0x7c));
  *(char *)CONCAT31(uVar19,bVar24) = *(char *)CONCAT31(uVar19,bVar24) + bVar24;
  bVar24 = bVar24 + 0x2a;
  pbVar15 = (byte *)CONCAT31(uVar19,bVar24);
  *pbVar15 = *pbVar15 + bVar24;
  *pcVar17 = *pcVar17 + cVar33;
  *pbVar9 = *pbVar9 ^ bVar24;
  *pcVar17 = *pcVar17 + bVar24;
  bVar4 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar24;
  cVar25 = (bVar24 - *pbVar15) - CARRY1(bVar4,bVar24);
  *(byte *)puVar8 = (byte)*puVar8 + (byte)pbVar9;
  cVar38 = cVar38 + pcVar17[0x7b];
  *(char *)CONCAT31(uVar19,cVar25) = *(char *)CONCAT31(uVar19,cVar25) + cVar25;
  pcVar17 = (char *)CONCAT31(uVar19,cVar25 + 'o');
  *pcVar17 = *pcVar17 + cVar25 + 'o';
  pcVar17 = pcVar17 + 0x2ed7fde6;
  cVar32 = (char)pcVar17;
  *pcVar17 = *pcVar17 + cVar32;
  cVar25 = *(char *)(CONCAT22(uVar28,CONCAT11(cVar38,cVar33)) + 0x7b);
  *pcVar17 = *pcVar17 + cVar32;
  piVar16 = (int *)(CONCAT31((int3)((uint)pcVar17 >> 8),cVar32 + 'o') + 0x6f060000);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar20 = (undefined3)((uint)pbVar9 >> 8);
  bVar24 = (byte)pbVar9 | (byte)*puVar43;
  pbVar30 = (byte *)CONCAT31(uVar20,bVar24);
  uVar36 = CONCAT22(uVar28,CONCAT11(cVar38 + cVar25,cVar33)) | (uint)puVar43;
  uVar19 = (undefined3)((uint)piVar16 >> 8);
  bVar4 = (byte)piVar16 | *pbVar30;
  pbVar15 = (byte *)CONCAT31(uVar19,bVar4);
  cVar25 = (byte)puVar8 - bVar24;
  puVar8 = (uint *)CONCAT31((int3)((uint)puVar8 >> 8),cVar25);
  *pbVar15 = *pbVar15 + bVar4;
  puVar44 = puVar43 + 1;
  out(*puVar43,(short)pbVar30);
  *pbVar15 = bVar4;
  *pbVar30 = *pbVar30 + cVar25;
  puVar43 = puVar43 + 2;
  out(*puVar44,(short)pbVar30);
  *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
  puVar35 = (uint *)(CONCAT31((int3)(uVar36 >> 8),(char)uVar36 - (char)((uint)pbVar9 >> 8)) |
                    (uint)puVar43);
  pbVar9 = (byte *)CONCAT31(uVar20,(bVar24 | (byte)*puVar43) + (byte)*puVar47);
  cVar25 = bVar4 - (byte)*puVar47;
  puVar44 = (uint *)CONCAT31(uVar19,cVar25 - *(char *)CONCAT31(uVar19,cVar25));
code_r0x00405090:
  *puVar44 = (uint)(pbVar9 + *puVar44);
  cVar25 = (char)puVar44;
  *(byte *)puVar44 = (byte)*puVar44 + cVar25;
  *(byte *)puVar44 = (byte)*puVar44 + cVar25;
  *(byte *)puVar44 = (byte)*puVar44 + cVar25;
  *puVar8 = *puVar8 - (int)pcVar11;
  uVar36 = *puVar43;
  bVar4 = (byte)pbVar9;
  *(byte *)puVar43 = (byte)*puVar43 + bVar4;
  *(byte *)puVar44 = (byte)*puVar44 + cVar25 + CARRY1((byte)uVar36,bVar4);
  *(byte *)puVar8 = (byte)*puVar8 + cVar25;
  uVar36 = *puVar35;
  *(byte *)puVar35 = (byte)*puVar35 + 0x72;
  *(byte *)puVar35 = (byte)*puVar35;
  cVar25 = (char)((uint)pbVar9 >> 8);
  if (SCARRY1((byte)uVar36,'r')) {
    puVar43 = (uint *)((int)puVar43 + *(int *)(pbVar9 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar43 = (byte)*puVar43 + (char)puVar44;
      uVar19 = (undefined3)((uint)puVar44 >> 8);
      cVar32 = (char)puVar44 + (byte)*puVar35;
      pcVar17 = (char *)CONCAT31(uVar19,cVar32);
      puVar35 = (uint *)CONCAT22((short)((uint)puVar35 >> 0x10),
                                 CONCAT11((char)((uint)puVar35 >> 8) +
                                          *(byte *)((int)puVar35 + 0x7b),(char)puVar35));
      *pcVar17 = *pcVar17 + cVar32;
      in_AF = 9 < (cVar32 + 0x6fU & 0xf) | in_AF;
      uVar36 = CONCAT31(uVar19,cVar32 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar36;
      piVar16 = (int *)CONCAT22((short)(uVar36 >> 0x10),
                                CONCAT11((char)((uint)puVar44 >> 8) + in_AF,bVar5));
      *piVar16 = *piVar16 + (int)piVar16;
      uVar19 = (undefined3)((uint)piVar16 >> 8);
      bVar5 = bVar5 | *(byte *)(piVar16 + 0x354a);
      bVar5 = bVar5 - *(char *)CONCAT31(uVar19,bVar5);
      pbVar15 = (byte *)CONCAT31(uVar19,bVar5);
      bVar24 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar5;
      puVar43 = (uint *)((int)puVar43 + (-(uint)CARRY1(bVar24,bVar5) - *(int *)pbVar15));
      puVar44 = (uint *)(pbVar15 + 0xfc00);
      *pbVar9 = *pbVar9 + cVar25;
      uVar36 = *puVar44;
      bVar24 = (byte)puVar44;
      *(byte *)puVar44 = (byte)*puVar44 + bVar24;
      uVar12 = (uint)CARRY1((byte)uVar36,bVar24);
      uVar36 = *puVar35;
      uVar2 = *puVar35;
      *puVar35 = (uint)((byte *)(uVar2 + (int)puVar44) + uVar12);
      if (!CARRY4(uVar36,(uint)puVar44) && !CARRY4(uVar2 + (int)puVar44,uVar12)) break;
      *(byte *)puVar44 = (byte)*puVar44 + bVar24;
    }
  }
  uVar36 = (uint)puVar44 | *puVar44;
  uVar28 = SUB42(pbVar9,0);
  *(byte *)puVar43 = (byte)*puVar43 + (char)uVar36;
  piVar16 = (int *)(uVar36 + 0xc1872);
  if (SCARRY4(uVar36,0xc1872)) {
    cVar32 = (char)piVar16;
    *(char *)piVar16 = *(char *)piVar16 + cVar32;
    *pbVar9 = *pbVar9 + cVar32;
    *(char *)piVar16 = *(char *)piVar16 + cVar32;
    *(byte *)puVar35 = (byte)*puVar35 + (char)puVar8;
    *(char *)piVar16 = *(char *)piVar16 + cVar32;
    *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) + bVar4;
    puVar44 = puVar43;
    goto code_r0x00405117;
  }
  do {
    uVar36 = *puVar43;
    bVar4 = (byte)piVar16;
    *(byte *)puVar43 = (byte)*puVar43 + bVar4;
    if (CARRY1((byte)uVar36,bVar4)) {
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      uVar19 = (undefined3)((uint)puVar8 >> 8);
      bVar24 = (byte)puVar8 | bRam396f1609;
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      puVar8 = (uint *)CONCAT31(uVar19,bVar24 | *(byte *)CONCAT31(uVar19,bVar24));
      uVar19 = (undefined3)((uint)piVar16 >> 8);
      bVar4 = bVar4 | *pbVar9;
      pcVar17 = (char *)CONCAT31(uVar19,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar44 = puVar43 + 1;
        out(*puVar43,uVar28);
        uVar36 = CONCAT22((short)((uint)piVar16 >> 0x10),(ushort)bVar4);
        *(byte *)puVar44 = (byte)*puVar44 + bVar4;
        pcVar17 = (char *)(uVar36 | 8);
        cVar32 = (char)((uint)puVar35 >> 8) + *(byte *)((int)puVar35 + 0x7a);
        puVar46 = (uint *)CONCAT22((short)((uint)puVar35 >> 0x10),CONCAT11(cVar32,(char)puVar35));
        *pcVar17 = *pcVar17 + (char)pcVar17;
        cVar25 = (char)pcVar17 + 'o';
        piVar16 = (int *)CONCAT31((int3)(uVar36 >> 8),cVar25);
        *(char *)piVar16 = (char)*piVar16 + cVar25;
        *(byte *)puVar8 = (byte)*puVar8 + 1;
        puVar43 = puVar43 + 2;
        out(*puVar44,uVar28);
        pbVar9 = (byte *)((uint)pbVar9 ^ uRam08122c04);
        iVar14 = CONCAT31((int3)((uint)(*piVar16 * 0x17070600) >> 8),2);
        *(char *)(iVar14 * 2) = *(char *)(iVar14 * 2) - cVar32;
        do {
          bVar4 = (byte)iVar14;
          *(byte *)puVar43 = (byte)*puVar43 + bVar4;
          bVar48 = CARRY1(bVar4,(byte)*puVar46);
          uVar19 = (undefined3)((uint)iVar14 >> 8);
          cVar25 = bVar4 + (byte)*puVar46;
          pbVar15 = (byte *)CONCAT31(uVar19,cVar25);
          uVar28 = in_DS;
          uVar27 = uStack_64;
          if (SCARRY1(bVar4,(byte)*puVar46) == cVar25 < '\0') goto GenerateStatusText;
          *pbVar15 = *pbVar15 + cVar25;
          uVar36 = CONCAT31(uVar19,cVar25 + '\'') + 0x1ebd9f3;
          uStack_68 = (undefined1)uStack_18;
          uStack_67 = (undefined1)((ushort)uStack_18 >> 8);
          piVar16 = (int *)(uVar36 ^ 0x73060000);
          puVar8 = (uint *)((int)puVar8 + 1);
          *piVar16 = (int)(*piVar16 + (int)piVar16);
          puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                     CONCAT11((byte)((uint)puVar46 >> 8) | pcVar11[0x7e],
                                              (char)puVar46));
          cVar25 = (char)uVar36;
          *(char *)piVar16 = (char)*piVar16 + cVar25;
          uVar36 = CONCAT31((int3)((uint)piVar16 >> 8),cVar25 + '\x02');
          bVar48 = 0xd9f2d2da < uVar36;
          iVar14 = uVar36 + 0x260d2d25;
          pcVar17 = pcVar11;
          do {
            uVar19 = (undefined3)((uint)iVar14 >> 8);
            bVar24 = (char)iVar14 + -2 + bVar48;
            pbVar15 = (byte *)CONCAT31(uVar19,bVar24);
            bVar4 = *pbVar15;
            *pbVar15 = *pbVar15 + bVar24;
            bVar5 = (byte)puVar46;
            uStack_64 = uStack_18;
            if (CARRY1(bVar4,bVar24)) {
              *pbVar15 = *pbVar15 + bVar24;
              puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                         CONCAT11((byte)((uint)puVar46 >> 8) | pcVar17[0x7f],bVar5))
              ;
              *pbVar15 = *pbVar15 + bVar24;
              pbVar15 = (byte *)CONCAT31(uVar19,bVar24 + 0x2a);
              *pbVar15 = *pbVar15 + bVar24 + 0x2a;
              *(byte *)puVar46 = (byte)*puVar46 + (char)pbVar9;
              uVar28 = in_DS;
              while( true ) {
                in_DS = uVar28;
                bVar24 = (byte)pbVar15;
                *pbVar9 = *pbVar9 ^ bVar24;
                *pbVar9 = *pbVar9 + (char)puVar46;
                *pbVar15 = *pbVar15 + bVar24;
                *(byte *)puVar46 = (byte)*puVar46 + (char)((uint)pbVar9 >> 8);
                bVar4 = *pbVar15;
                *pbVar15 = *pbVar15 + bVar24;
                uVar36 = *puVar46;
                uVar2 = *puVar46;
                *puVar46 = (uint)(pbVar15 + uVar2 + CARRY1(bVar4,bVar24));
                uVar19 = (undefined3)((uint)pbVar15 >> 8);
                if (CARRY4(uVar36,(uint)pbVar15) ||
                    CARRY4((uint)(pbVar15 + uVar2),(uint)CARRY1(bVar4,bVar24))) break;
                *(byte *)puVar43 = (byte)*puVar43 + bVar24;
                pcVar22 = (char *)CONCAT22((short)((uint)puVar8 >> 0x10),
                                           CONCAT11((char)((uint)puVar8 >> 8) + *pbVar15,
                                                    (char)puVar8));
                *(byte *)puVar43 = (byte)*puVar43 + bVar24;
                piVar16 = (int *)CONCAT31(uVar19,bVar24 | (byte)*puVar46);
                puVar8 = puVar43;
                while( true ) {
                  puVar43 = puVar8 + 1;
                  out(*puVar8,(short)pbVar9);
                  pbVar9 = pbVar9 + 1;
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  bVar5 = (byte)((uint)pcVar22 >> 8) | *pbVar9;
                  uVar19 = (undefined3)((uint)piVar16 >> 8);
                  bVar24 = (byte)piVar16 ^ *pbVar9;
                  pcVar18 = (char *)CONCAT31(uVar19,bVar24);
                  cRam282b0000 = cRam282b0000 - bVar5;
                  *pcVar18 = *pcVar18 + bVar24;
                  pcVar11 = pcVar17 + -*(int *)pbVar9;
                  uStack_68 = (undefined1)in_DS;
                  uStack_67 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar47 + 0x17);
                  *pcVar18 = *pcVar18 + bVar24;
                  puVar8 = (uint *)CONCAT22((short)((uint)pcVar22 >> 0x10),
                                            CONCAT11(bVar5 + bVar4 | *pbVar9,(char)pcVar22));
                  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
                  *(byte *)((int)pcVar18 * 2) = *(byte *)((int)pcVar18 * 2) ^ bVar24;
                  in_AF = 9 < (bVar24 & 0xf) | in_AF;
                  bVar24 = bVar24 + in_AF * -6;
                  pbVar15 = (byte *)CONCAT31(uVar19,bVar24 + (0x9f < bVar24 | in_AF * (bVar24 < 6))
                                                             * -0x60);
                  *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
                  *(char *)((int)pbVar15 * 2) =
                       *(char *)((int)pbVar15 * 2) + (char)((uint)pbVar9 >> 8);
                  bVar48 = CARRY1((byte)*puVar8,(byte)pbVar9);
                  *(byte *)puVar8 = (byte)*puVar8 + (byte)pbVar9;
                  uVar28 = in_DS;
                  uVar27 = uStack_18;
GenerateStatusText:
                  in_DS = uVar27;
                  pcVar17 = pcVar11;
                  uStack_64 = in_DS;
                  if (!bVar48) break;
                  *pbVar15 = *pbVar15 + (char)pbVar15;
                  iVar14 = CONCAT31((int3)((uint)puVar8 >> 8),(byte)puVar8 | *pbVar9);
                  uVar28 = (undefined2)((uint)puVar46 >> 0x10);
                  cVar33 = (char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + 0x7d);
                  *pbVar15 = *pbVar15 + (char)pbVar15;
                  *(byte *)puVar47 = (byte)*puVar47 - (char)((uint)puVar8 >> 8);
                  iVar14 = iVar14 - *(int *)(iVar14 + 0xb0a0000);
                  cVar25 = *(char *)(CONCAT22(uVar28,CONCAT11(cVar33,(char)puVar46)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar43,(short)pbVar9);
                  pbVar9 = (byte *)CONCAT22(uStack_66,CONCAT11(uStack_67,uStack_68));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar8 = puVar43 + 2;
                  out(puVar43[1],CONCAT11(uStack_67,uStack_68));
                  pcVar17 = pcVar11 + 1;
                  cVar32 = (char)iVar14;
                  pcVar22 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),
                                             CONCAT11((byte)((uint)iVar14 >> 8) |
                                                      *(byte *)((int)puVar47 + 0x46),cVar32));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_18 = CONCAT11(uStack_67,uStack_68);
                  uVar19 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar8,0xf0)) >> 8);
                  piVar16 = (int *)CONCAT31(uVar19,0x5f);
                  puVar47 = (uint *)((int)puVar47 + 1);
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  puVar46 = (uint *)CONCAT22(uVar28,CONCAT11(cVar33 + cVar25 | (byte)puVar43[-0x1e],
                                                             (char)puVar46));
                  *(char *)piVar16 = (char)*piVar16 + '_';
                  puVar43 = (uint *)CONCAT31(uVar19,0x8c);
                  puVar8[(int)puVar47 * 2] = (uint)(pbVar9 + puVar8[(int)puVar47 * 2]);
                  uVar36 = *puVar8;
                  *(byte *)puVar8 = (byte)*puVar8 + 0x8c;
                  if ((byte)uVar36 < 0x74) {
                    *pbVar9 = *pbVar9 + cVar32;
                    *(byte *)puVar46 = (byte)*puVar46 >> 1;
                    *(char *)puVar43 = (char)*puVar43 + -0x74;
                    *puVar43 = (uint)(pcVar17 + *puVar43);
                    *puVar43 = *puVar43 << 1 | (uint)((int)*puVar43 < 0);
                    *pbVar9 = *pbVar9 + cVar32;
                    pcVar11[2] = pcVar11[2] - cVar32;
                    *pbVar9 = *pbVar9 + cVar32;
                    pbVar15 = (byte *)CONCAT31(uVar19,0x83);
                    puVar43 = puVar46;
                    goto code_r0x00405312;
                  }
                  *puVar43 = (uint)(*puVar43 + (int)puVar43);
                  piVar16 = (int *)(CONCAT31(uVar19,(byte)puVar43[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar43[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar16 = (int *)((int)piVar16 + *puVar8);
                }
              }
              *pbVar9 = *pbVar9 + bVar24;
              *(byte *)puVar46 = (byte)*puVar46 - (char)pbVar9;
              *pbVar15 = *pbVar15 + bVar24;
              pbVar15 = (byte *)CONCAT31(uVar19,bVar24 | (byte)*puVar46);
            }
            else {
              cVar25 = (char)puVar8;
              *pbVar9 = *pbVar9 + cVar25;
              *(byte **)pbVar15 = pbVar9 + *(int *)pbVar15;
              *pbVar15 = *pbVar15 + bVar24;
              bVar24 = bVar24 + *pbVar15;
              pbVar15 = (byte *)CONCAT31(uVar19,bVar24);
              if (-1 < (char)bVar24) {
                *(byte *)puVar46 = (byte)*puVar46 + bVar5;
                out(*puVar43,(short)pbVar9);
                pbVar9 = pbVar9 + 1;
                *pbVar15 = *pbVar15 + bVar24;
                puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),
                                           bVar5 | (byte)((uint)iVar14 >> 8));
                cVar32 = bVar24 - (byte)*puVar8;
                pcVar11 = (char *)CONCAT31(uVar19,cVar32);
                *pcVar11 = *pcVar11 + cVar32 + (bVar24 < (byte)*puVar8);
                *pbVar9 = *pbVar9 + cVar32;
                pcVar11 = (char *)((int)pcVar11 * 2 + 0x79);
                *pcVar11 = *pcVar11 + (char)((uint)pbVar9 >> 8);
                pbVar15 = (byte *)in((short)pbVar9);
                puVar43 = puVar43 + 1;
              }
              *(byte *)puVar43 = (byte)*puVar43 + cVar25;
              *pbVar15 = *pbVar15 + (char)pbVar15;
              *pbVar15 = *pbVar15 + (char)pbVar15;
              uStack_68 = (undefined1)in_DS;
              uStack_67 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar15;
              bVar6 = (byte)((uint)puVar8 >> 8);
              bVar5 = bVar6 + *pbVar15;
              iVar14 = *(int *)pbVar15;
              *pbVar9 = *pbVar9 + cVar25;
              bVar24 = (char)(pbVar15 + (uint)CARRY1(bVar6,bVar4) + iVar14) - (byte)*puVar46;
              pbVar15 = (byte *)CONCAT31((int3)((uint)(pbVar15 + (uint)CARRY1(bVar6,bVar4) + iVar14)
                                               >> 8),bVar24);
              *(byte *)puVar46 = (byte)*puVar46 ^ bVar24;
              *pcVar17 = *pcVar17 + (char)puVar46;
              *pbVar15 = *pbVar15 + bVar24;
              *pbVar15 = *pbVar15 + bVar24;
              *pbVar15 = *pbVar15 + bVar24;
              puVar8 = (uint *)CONCAT22((short)((uint)puVar8 >> 0x10),
                                        CONCAT11(bVar5 + *pbVar15,cVar25));
              pbVar15 = pbVar15 + (uint)CARRY1(bVar5,*pbVar15) + *(int *)pbVar15;
              *pbVar9 = *pbVar9 + cVar25;
              puVar43 = (uint *)((int)puVar43 + *(int *)(pbVar9 + 0x3e));
            }
            *(byte *)puVar43 = (byte)*puVar43 + (char)pbVar15;
            cVar25 = (char)pbVar15 + 'r';
            puVar43 = (uint *)((int)puVar43 + -1);
            uVar36 = CONCAT31((int3)((uint)pbVar15 >> 8),cVar25);
            *(byte *)puVar43 = *(byte *)puVar43 + cVar25;
            bVar48 = 0xfff38f8d < uVar36;
            iVar14 = uVar36 + 0xc7072;
            pcVar11 = pcVar17;
          } while (SCARRY4(uVar36,0xc7072));
        } while( true );
      }
      *pcVar17 = *pcVar17 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar15 = (byte *)CONCAT31(uVar19,bVar4);
      bVar24 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar4;
      uVar19 = (undefined3)
               ((uint)(pbVar15 + (uint)CARRY1(bVar24,bVar4) + *(int *)((int)puVar8 + (int)pbVar9))
               >> 8);
      cVar32 = (char)(pbVar15 + (uint)CARRY1(bVar24,bVar4) + *(int *)((int)puVar8 + (int)pbVar9)) +
               'E';
      pcVar17 = (char *)CONCAT31(uVar19,cVar32);
      *pcVar17 = *pcVar17 + cVar32;
      cVar32 = cVar32 + *pcVar17;
      pcVar17 = (char *)CONCAT31(uVar19,cVar32);
      *pcVar17 = *pcVar17 + cVar32;
      puVar44 = (uint *)CONCAT31(uVar19,cVar32 + *pcVar17);
      *(char *)puVar44 = (char)*puVar44 + cVar32 + *pcVar17;
      pbVar15 = (byte *)((uint)puVar44 | *puVar44);
      bVar4 = *pbVar15;
      bVar24 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar24;
      piVar16 = (int *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar24 + CARRY1(bVar4,bVar24));
      puVar44 = puVar43;
code_r0x00405117:
      *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
      puVar35 = (uint *)((int)puVar35 - *puVar35);
      puVar43 = puVar44 + 1;
      out(*puVar44,uVar28);
    }
    *pbVar9 = *pbVar9 + (char)puVar8;
    bVar48 = puVar35 < (uint *)*piVar16;
    puVar35 = (uint *)((int)puVar35 - *piVar16);
    bVar4 = (byte)((uint)puVar8 >> 8);
    *(byte *)((int)puVar47 + 0x39) = (*(byte *)((int)puVar47 + 0x39) - bVar4) - bVar48;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    uVar36 = *puVar35;
    *(int *)((int)puVar47 + 0x39) = *(int *)((int)puVar47 + 0x39) - (int)pcVar11;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    puVar8 = (uint *)CONCAT22((short)((uint)puVar8 >> 0x10),
                              CONCAT11(bVar4 | (byte)uVar36 | (byte)*puVar35,(char)puVar8));
    *(char *)(piVar16 + 10) = (char)piVar16[10] + cVar25;
  } while( true );
code_r0x004052ee:
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  bVar4 = (char)piVar16 + 0x28;
  pbVar15 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),bVar4);
  *pbVar15 = *pbVar15 ^ bVar4;
  *(byte *)puVar46 = (byte)*puVar46 + (char)((uint)pcVar22 >> 8);
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + (byte)pcVar22;
  piVar16 = (int *)(((uint)pbVar15 | 0x1496f09) + *puVar47 + (uint)CARRY1(bVar4,(byte)pcVar22));
  puVar44 = puVar8 + 1;
  out(*puVar8,(short)pbVar9);
  pbVar30 = pbVar9 + -1;
  *piVar16 = *piVar16 + (int)piVar16;
  pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),(byte)pbVar30 | (byte)*puVar46);
  cVar25 = (char)piVar16 + '\x13';
  pbVar15 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),cVar25);
  puVar43 = puVar46;
  puVar8 = puVar44;
  if ((POPCOUNT(cVar25) & 1U) != 0) {
    *pbVar9 = *pbVar9 - (char)((uint)pbVar30 >> 8);
    *pbVar15 = *pbVar15 + cVar25;
code_r0x00405396:
    bVar4 = *pbVar15;
    bVar24 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar24;
    *puVar44 = (uint)(pbVar15 + (uint)CARRY1(bVar4,bVar24) + *puVar44);
    out(*puVar44,(short)pbVar9);
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    pcVar11 = (char *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                               CONCAT11((byte)((uint)pbVar15 >> 8) | (byte)puVar44[1],bVar24));
    *(char **)((int)puVar47 + -1) = pcVar11 + *(int *)((int)puVar47 + -1);
    out(puVar44[1],(short)pbVar9);
    *pcVar11 = *pcVar11 + bVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar15 = *pbVar15 + (char)pbVar15;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + 'o');
  puVar46 = (uint *)((int)puVar43 + -1);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar19 = (undefined3)((uint)pbVar9 >> 8);
  piVar16 = (int *)((int)piVar16 + 0x1b7e);
  bVar5 = (byte)pbVar9 | *(byte *)puVar46 | *(byte *)puVar46;
  iRam04115f2c = iRam04115f2c + (int)piVar16;
  out(*puVar8,(short)CONCAT31(uVar19,bVar5));
  *piVar16 = *piVar16 + (int)piVar16;
  bVar5 = bVar5 | (byte)piVar16;
  iVar31 = CONCAT31(uVar19,bVar5);
  pbVar9 = (byte *)((int)piVar16 - *piVar16);
  cVar25 = (char)pbVar9;
  *pcVar22 = *pcVar22 + cVar25;
  cVar32 = (char)pcVar22 - bVar5;
  *pbVar9 = *pbVar9 + cVar25;
  uVar28 = (undefined2)((uint)pcVar22 >> 0x10);
  bVar24 = (byte)((uint)pcVar22 >> 8) | *pbVar9;
  pcVar17 = pcVar17 + -1;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  bVar4 = *(byte *)(CONCAT22(uVar28,CONCAT11(bVar24,cVar32)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar9;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar17;
  *pbVar9 = *pbVar9 + cVar25;
  bVar4 = bVar24 | bVar4 | *(byte *)puVar46;
  iVar23 = CONCAT22(uVar28,CONCAT11(bVar4,cVar32));
  pbVar30 = (byte *)((uint)(puVar8 + 1) ^ *(uint *)(iVar31 + -0x43));
  iVar14 = *(int *)pbVar9;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  if (SCARRY4(iVar14,(int)pbVar9)) {
    *pbVar9 = *pbVar9 + cVar25;
  }
  pbVar15 = pbVar9 + 0x5674;
  puVar47 = (uint *)((int)puVar47 +
                    (-(uint)((byte *)0xffffa98b < pbVar9) - *(int *)(pbVar30 + -0x7f)));
  bVar24 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar24;
  uVar20 = (undefined3)((uint)pbVar15 >> 8);
  bVar6 = bVar24 + 0x2d;
  piVar16 = (int *)CONCAT31(uVar20,bVar6);
  *(uint *)(pbVar30 + (int)puVar47 * 8) =
       *(int *)(pbVar30 + (int)puVar47 * 8) + iVar31 + (uint)(0xd2 < bVar24);
  bVar24 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar6;
  if (!CARRY1(bVar24,bVar6)) {
    do {
      pbVar15 = (byte *)(iVar31 + 1);
      bVar24 = (byte)piVar16;
      *(byte *)piVar16 = (char)*piVar16 + bVar24;
      bVar5 = (byte)((uint)piVar16 >> 8);
      bVar6 = (byte)puVar46 | bVar5;
      puVar43 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),bVar6);
      out(*(undefined4 *)pbVar30,(short)pbVar15);
      *(byte *)piVar16 = (char)*piVar16 + bVar24;
      uVar28 = (undefined2)((uint)iVar23 >> 0x10);
      cVar25 = (char)iVar23;
      pbVar9 = (byte *)CONCAT22(uVar28,CONCAT11((byte)((uint)iVar23 >> 8) | *pbVar15,cVar25));
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar24;
      *(byte *)piVar16 = (char)*piVar16 + bVar24 + CARRY1(bVar4,bVar24);
      *pbVar15 = *pbVar15 + bVar24;
      *(byte *)puVar47 = (byte)*puVar47 + bVar5;
      *(int *)((int)piVar16 * 2) =
           *(int *)((int)piVar16 * 2) + CONCAT22(uVar28,CONCAT11(0x1c,cVar25));
      *(byte *)piVar16 = (char)*piVar16 + bVar24;
      cVar32 = (char)pbVar15;
      *(byte *)puVar43 = (byte)*puVar43 + cVar32;
      *(byte *)((int)piVar16 * 2) = *(byte *)((int)piVar16 * 2) ^ bVar24;
      *(byte *)piVar16 = (char)*piVar16 + bVar24;
      pbVar9 = pbVar30 + 8;
      out(*(undefined4 *)(pbVar30 + 4),(short)pbVar15);
      piVar16 = (int *)0xa0a0000;
      *pbVar15 = *pbVar15;
      bVar24 = cVar25 - cVar32;
      iVar23 = CONCAT22(uVar28,CONCAT11((byte)puVar47[0x14] | 0x1c | bRam0ca87216,bVar24));
      *pbVar15 = *pbVar15;
      bVar4 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar24;
      if (!CARRY1(bVar4,bVar24)) {
        piVar16 = (int *)0x1e7b7000;
        bVar4 = (byte)((uint)puVar46 >> 8) | *(byte *)(iVar31 + 3);
        puVar43 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar4,bVar6));
        if (bVar4 != 0) {
          pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar32 + pbVar9[(int)puVar47 * 8]);
          piVar16 = (int *)0x6d7d7000;
          iVar23 = iVar23 + 1;
        }
      }
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      iVar31 = CONCAT31((int3)((uint)pbVar15 >> 8),(byte)pbVar15 | pbVar9[(int)puVar47 * 8]);
      *(char *)piVar16 = (char)*piVar16;
      piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),0xf9);
      *puVar47 = (uint)((int)piVar16 + *puVar47 + 1);
      pbVar30 = pbVar30 + 0xc;
      out(*(undefined4 *)pbVar9,(short)iVar31);
      puVar46 = puVar43;
    } while( true );
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar6 = bVar6 | *(byte *)((int)piVar16 + 0x4000081);
  piVar16 = (int *)CONCAT31(uVar20,bVar6);
  if ('\0' < (char)bVar6) {
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    puVar8 = (uint *)CONCAT31(uVar20,bVar6 + 0x28);
    *puVar8 = *puVar8 ^ (uint)puVar8;
    *(byte *)puVar46 = *(byte *)puVar46 + bVar4;
    cVar25 = (bVar6 + 0x28) - bVar4;
    pcVar11 = (char *)CONCAT31(uVar20,cVar25);
    *pcVar11 = *pcVar11 + cVar25;
    pbVar9 = (byte *)CONCAT31(uVar19,bVar5 | *(byte *)puVar46);
    pcVar17 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11((char)((uint)puVar46 >> 8) + *(byte *)((int)puVar43 + 0x7d),
                                        (char)puVar46));
    *pcVar11 = *pcVar11 + cVar25;
    pbVar15 = (byte *)CONCAT31(uVar20,cVar25 + 0x39U ^ *(byte *)CONCAT31(uVar20,cVar25 + 0x39U));
    *pcVar17 = *pcVar17 + bVar4;
    puVar44 = (uint *)(pbVar30 + 4);
    out(*(undefined4 *)pbVar30,(short)pbVar9);
    goto code_r0x00405396;
  }
  puVar8 = (uint *)(pbVar30 + 4);
  out(*(undefined4 *)pbVar30,(short)iVar31);
  pcVar22 = (char *)(iVar23 + -1);
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pbVar9 = (byte *)CONCAT31(uVar19,bVar5 | *(byte *)puVar46);
  goto code_r0x004052ee;
}


