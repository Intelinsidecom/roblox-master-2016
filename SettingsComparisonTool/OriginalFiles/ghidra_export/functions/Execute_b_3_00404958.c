/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404958
 * Raw Name    : <Execute>b__3
 * Demangled   : <Execute>b__3
 * Prototype   : int <Execute>b__3(uint * s, uint * param_2, uint * param_3, undefined4 * param_4, char * param_5, byte * param_6, uint * param_7, int param_8, char * param_9, int param_10, uint * param_11, undefined4 * * param_12, undefined4 param_13, byte * param_14, uint * param_15, int param_16, uint * param_17)
 * Local Vars  : param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12, param_13, param_14, param_15, param_16, param_17, uStack_67, uStack_68, uStack_64, uStack_66, puStack_24, uStack_28, puStack_10, uStack_18, apuStack_8, puStack_c, uVar2, uVar1, cVar4, s, uVar3, bVar6, bVar5, cVar8, bVar7, in_EAX, uVar9, puVar11, pcVar10, puVar13, uVar12, pbVar15, iVar14, piVar17, pbVar16, pcVar19, puVar18, uVar21, pcVar20, pbVar23, uVar22, puVar25, puVar24, iVar27, pcVar26, bVar29, bVar28, uVar31, uVar30, iVar33, bVar32, cVar35, cVar34, puVar36, unaff_EBX, puVar38, uVar37, cVar40, cVar39, unaff_EBP, ppuVar41, ppuVar43, puVar42, puVar44, unaff_ESI, unaff_EDI, puVar45, in_ES, puVar46, in_DS, in_SS, in_AF, bVar47, ppuVar48, unaff_retaddr
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
<Execute>b__3(uint *s,uint *param_2,uint *param_3,undefined4 *param_4,char *param_5,byte *param_6,
             uint *param_7,int param_8,char *param_9,int param_10,uint *param_11,
             undefined4 **param_12,undefined4 param_13,byte *param_14,uint *param_15,int param_16,
             uint *param_17)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  undefined3 uVar21;
  ushort *in_EAX;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  ushort *puVar18;
  char *pcVar19;
  undefined3 uVar22;
  char *pcVar20;
  byte bVar28;
  undefined2 uVar30;
  undefined2 uVar31;
  byte *pbVar23;
  uint *puVar24;
  uint *puVar25;
  byte bVar29;
  char *pcVar26;
  int iVar27;
  byte bVar32;
  int iVar33;
  char cVar34;
  char cVar35;
  char cVar39;
  byte *unaff_EBX;
  uint *puVar36;
  char cVar40;
  uint uVar37;
  uint *puVar38;
  undefined4 **ppuVar41;
  undefined4 **unaff_EBP;
  undefined4 *puVar42;
  undefined4 **ppuVar43;
  uint *unaff_ESI;
  uint *puVar44;
  uint *puVar45;
  uint *unaff_EDI;
  uint *puVar46;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar47;
  byte in_AF;
  undefined4 **unaff_retaddr;
  undefined4 **ppuVar48;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_28;
  uint *puStack_24;
  undefined2 uStack_18;
  uint *puStack_10;
  uint *puStack_c;
  undefined4 *apuStack_8 [2];
  
  do {
                    /* .NET CLR Managed Code */
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBX + 0x70));
code_r0x0040495b:
    cVar8 = (char)in_EAX;
    *(char *)in_EAX = (char)*in_EAX + cVar8;
    uVar21 = (undefined3)((uint)in_EAX >> 8);
    cVar4 = cVar8 + '\x02';
    pcVar10 = (char *)CONCAT31(uVar21,cVar4);
    if ((POPCOUNT(cVar4) & 1U) == 0) {
      *pcVar10 = *pcVar10 + cVar4;
      pcVar10 = (char *)(CONCAT31(uVar21,cVar8 + '}') + (int)unaff_EBP);
      *pcVar10 = *pcVar10 + cVar8 + '}';
      *param_9 = *param_9 + (char)param_9;
      s = (uint *)CONCAT22((short)((uint)param_8 >> 0x10),
                           CONCAT11((byte)((uint)param_8 >> 8) | *(byte *)(param_8 * 3),
                                    (char)param_8));
      unaff_EDI = (uint *)((int)unaff_retaddr + *(int *)(param_6 + 0x6f));
      pcVar10 = param_9;
      param_2 = param_7;
      unaff_EBX = param_6;
      unaff_EBP = (undefined4 **)param_4;
      unaff_ESI = param_3;
      while( true ) {
        cVar8 = (char)pcVar10;
        *pcVar10 = *pcVar10 + cVar8;
        uVar21 = (undefined3)((uint)pcVar10 >> 8);
        cVar4 = cVar8 + '\x02';
        piVar17 = (int *)CONCAT31(uVar21,cVar4);
        if ((POPCOUNT(cVar4) & 1U) != 0) break;
        *(char *)piVar17 = (char)*piVar17 + cVar4;
        pcVar10 = (char *)CONCAT31(uVar21,cVar8 + '}');
        out(*unaff_ESI,(short)param_2);
        *pcVar10 = *pcVar10 + cVar8 + '}';
code_r0x00404982:
        *(char *)param_17 = (char)*param_17 + (char)param_17;
        s = (uint *)CONCAT22((short)((uint)param_16 >> 0x10),
                             CONCAT11((byte)((uint)param_16 >> 8) |
                                      *(byte *)(param_16 + (int)param_11),(char)param_16));
        unaff_EDI = (uint *)(param_10 + *(int *)(param_14 + 0x71));
        puVar11 = param_17;
        param_2 = param_15;
        unaff_EBX = param_14;
        unaff_ESI = param_11;
        while( true ) {
          cVar8 = (char)puVar11;
          *(byte *)puVar11 = (byte)*puVar11 + cVar8;
          uVar21 = (undefined3)((uint)puVar11 >> 8);
          cVar4 = cVar8 + '\x02';
          in_EAX = (ushort *)CONCAT31(uVar21,cVar4);
          unaff_EBP = param_12;
          if ((POPCOUNT(cVar4) & 1U) != 0) goto code_r0x0040495b;
          *(char *)in_EAX = (char)*in_EAX + cVar4;
          bVar5 = cVar8 + 0x7d;
          iVar14 = CONCAT31(uVar21,bVar5);
          pbVar23 = (byte *)(iVar14 + (int)param_12);
          bVar6 = *pbVar23;
          *pbVar23 = *pbVar23 + bVar5;
          uVar37 = *s;
          *(byte *)param_2 = (byte)*param_2 + (char)s;
          pcVar10 = (char *)(((iVar14 - uVar37) - (uint)CARRY1(bVar6,bVar5)) + -0x727b0317);
          cVar8 = (char)pcVar10;
          *pcVar10 = *pcVar10 + cVar8;
          uVar21 = (undefined3)((uint)pcVar10 >> 8);
          cVar4 = cVar8 + '\x02';
          pcVar10 = (char *)CONCAT31(uVar21,cVar4);
          if ((POPCOUNT(cVar4) & 1U) != 0) break;
          *pcVar10 = *pcVar10 + cVar4;
          bVar5 = cVar8 + 0x7d;
          iVar14 = CONCAT31(uVar21,bVar5);
          pbVar23 = (byte *)(iVar14 + (int)param_12);
          bVar6 = *pbVar23;
          *pbVar23 = *pbVar23 + bVar5;
          puVar11 = (uint *)((iVar14 - *s) - (uint)CARRY1(bVar6,bVar5));
          puVar25 = param_2;
          puVar44 = unaff_ESI;
code_r0x004049b4:
          unaff_ESI = puVar44;
          *(byte *)puVar25 = (byte)*puVar25 + (char)s;
          param_2 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),
                                     ((char)puVar25 - (byte)*unaff_EDI) - (byte)*unaff_ESI);
          bVar5 = *(byte *)((int)unaff_ESI + 0x72);
          *puVar11 = *puVar11 & (uint)s;
          pbVar23 = (byte *)((int)puVar11 + 2);
          *pbVar23 = *pbVar23 + (char)((uint)puVar25 >> 8);
          bVar6 = *pbVar23;
          pbVar23 = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar5);
          while (unaff_EBX = pbVar23, (POPCOUNT(bVar6) & 1U) == 0) {
            cVar8 = (char)puVar11;
            *(byte *)puVar11 = (byte)*puVar11 + cVar8;
            uVar21 = (undefined3)((uint)puVar11 >> 8);
            cVar4 = cVar8 + '\x03';
            pbVar16 = (byte *)CONCAT31(uVar21,cVar4);
            puVar44 = unaff_ESI + 1;
            out(*unaff_ESI,(short)param_2);
            in_SS = SUB42(unaff_retaddr,0);
            *pbVar16 = *pbVar16 + cVar4;
            cVar34 = (char)s;
            s = (uint *)CONCAT22((short)((uint)s >> 0x10),
                                 CONCAT11((byte)((uint)s >> 8) | *pbVar16,cVar34));
            *(int *)pbVar16 = *(int *)pbVar16 - (int)pbVar16;
            *(byte *)param_2 = (byte)*param_2 + cVar34;
            cVar34 = (char)pbVar23 - *(byte *)((int)unaff_ESI + 6);
            unaff_EBX = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar34);
            if ((POPCOUNT(cVar34) & 1U) != 0) {
              pbVar15 = (byte *)((int)unaff_EDI + (int)param_12 * 2);
              *pbVar15 = *pbVar15 + cVar4;
              goto code_r0x00404a51;
            }
            *pbVar16 = *pbVar16 + cVar4;
            puVar11 = (uint *)CONCAT31(uVar21,cVar8 + 'r');
            *(byte *)puVar11 = (byte)*puVar11;
            unaff_ESI = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
            do {
              unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBX + 0x70));
              bVar6 = (byte)puVar11;
              *(byte *)puVar11 = (byte)*puVar11 + bVar6;
              uVar21 = (undefined3)((uint)puVar11 >> 8);
              bVar6 = (bVar6 + 0x6e) - (0x90 < bVar6);
              puVar11 = (uint *)CONCAT31(uVar21,bVar6);
              cVar8 = (char)s;
              *(byte *)param_2 = (byte)*param_2 + cVar8;
              bVar5 = (char)((uint)s >> 8) - *(byte *)((int)puVar44 + 2);
              s = (uint *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar5,cVar8));
              puVar25 = param_2;
              unaff_retaddr = (undefined4 **)unaff_ESI;
              if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x004049b4;
              *(byte *)puVar11 = (byte)*puVar11 + bVar6;
              bVar7 = bVar6 + 2;
              puVar11 = (uint *)CONCAT31(uVar21,bVar7);
              if ((POPCOUNT(bVar7) & 1U) == 0) goto code_r0x004049f5;
              puVar44 = unaff_ESI;
            } while (0xfd < bVar6);
            *(byte *)puVar11 = (byte)*puVar11 | bVar7;
            pbVar23 = unaff_EBX;
            bVar6 = (byte)*puVar11;
          }
        }
      }
      *(byte *)param_2 = (byte)*param_2 + (char)s;
      param_9 = (char *)CONCAT22(param_9._2_2_,in_SS);
      puVar11 = unaff_ESI;
    }
    else {
      *param_2 = *param_2 + (int)unaff_EBP;
      puVar11 = (uint *)((int)unaff_ESI + 1);
      out((byte)*unaff_ESI,(short)param_2);
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x3b],
                                            (char)unaff_EBX));
      while( true ) {
        cVar8 = (char)pcVar10;
        *pcVar10 = *pcVar10 + cVar8;
        uVar21 = (undefined3)((uint)pcVar10 >> 8);
        bVar6 = cVar8 + 2;
        pcVar10 = (char *)CONCAT31(uVar21,bVar6);
        if ((POPCOUNT(bVar6) & 1U) == 0) break;
        while( true ) {
          bRam00c36f08 = bVar6;
          bVar6 = *(byte *)puVar11;
          cVar8 = (char)pcVar10;
          *(byte *)puVar11 = *(byte *)puVar11 + cVar8;
          param_10 = CONCAT22(param_10._2_2_,in_ES);
          if (SCARRY1(bVar6,cVar8) == (char)*(byte *)puVar11 < '\0') {
            pcVar10[(int)unaff_EBP] = pcVar10[(int)unaff_EBP] + cVar8;
            goto code_r0x00404982;
          }
          *pcVar10 = *pcVar10 + cVar8;
          pbVar23 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar8 + '*');
          param_9 = (char *)CONCAT22(param_9._2_2_,in_DS);
          bVar6 = (byte)((uint)s >> 8);
          uVar30 = (undefined2)((uint)s >> 0x10);
          cVar8 = (char)s;
          bVar5 = bVar6 + *pbVar23;
          pbVar23 = pbVar23 + (uint)CARRY1(bVar6,*pbVar23) + *(int *)pbVar23;
          *(byte *)param_2 = (byte)*param_2 + cVar8;
          cVar34 = (char)unaff_EBX - *(byte *)puVar11;
          bVar6 = *pbVar23;
          cVar4 = bVar5 + *pbVar23;
          pcVar19 = (char *)CONCAT22(uVar30,CONCAT11(cVar4,cVar8));
          iVar14 = *(int *)pbVar23;
          *(byte *)param_2 = (byte)*param_2 + cVar8;
          uVar21 = (undefined3)((uint)(pbVar23 + (uint)CARRY1(bVar5,bVar6) + iVar14) >> 8);
          bVar6 = (char)(pbVar23 + (uint)CARRY1(bVar5,bVar6) + iVar14) - *(byte *)((int)param_2 + 3)
          ;
          pcVar10 = (char *)CONCAT31(uVar21,bVar6);
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   cVar34) + -0x3a),cVar34));
          *pcVar10 = *pcVar10 + bVar6;
          pcVar10 = (char *)CONCAT31(uVar21,bVar6 + 0x6f);
          *pcVar19 = (*pcVar19 - (bVar6 + 0x6f)) - (0x90 < bVar6);
          *(byte *)param_2 = (byte)*param_2 + cVar8;
          param_11 = (uint *)CONCAT22(param_11._2_2_,in_SS);
          *pcVar19 = *pcVar19 + '\x01';
          cVar4 = cVar4 - *(byte *)((int)unaff_ESI + 3);
          s = (uint *)CONCAT22(uVar30,CONCAT11(cVar4,cVar8));
          if ((POPCOUNT(cVar4) & 1U) == 0) break;
          pcVar10 = pcVar10 + -0x1b7e2606;
          *pcVar10 = *pcVar10 + (char)pcVar10;
          pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar10 >> 8) | (byte)param_2[0x30dbc2],
                                              (char)pcVar10));
          bVar6 = bRam00c36f08;
        }
      }
      *pcVar10 = *pcVar10 + bVar6;
      piVar17 = (int *)CONCAT31(uVar21,cVar8 + 'q');
      *s = (*s - (int)piVar17) - (uint)(0x90 < bVar6);
      *(byte *)param_2 = (byte)*param_2 + (char)s;
      unaff_EBP = (undefined4 **)((int)unaff_EBP + *(int *)((int)unaff_EDI + 0x1a));
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *(byte *)puVar11);
    }
    *(byte *)s = (byte)*s + 1;
    uVar21 = (undefined3)((uint)piVar17 >> 8);
    bVar6 = (char)piVar17 - (char)*piVar17;
    pbVar23 = (byte *)CONCAT31(uVar21,bVar6);
    *pbVar23 = *pbVar23 + bVar6;
    unaff_ESI = (uint *)((int)puVar11 + *(int *)pbVar23);
    cVar8 = bVar6 + *pbVar23;
    in_EAX = (ushort *)CONCAT31(uVar21,cVar8);
    *in_EAX = *in_EAX + (ushort)CARRY1(bVar6,*pbVar23) * (((ushort)in_EAX & 3) - (*in_EAX & 3));
    *(char *)in_EAX = (char)*in_EAX + cVar8;
    *(char *)in_EAX = (char)*in_EAX + cVar8;
    *(char *)in_EAX = (char)*in_EAX + cVar8;
  } while( true );
code_r0x004049f5:
  do {
    bVar6 = (byte)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar6;
    uVar21 = (undefined3)((uint)puVar11 >> 8);
    bVar7 = bVar6 + 0x6f;
    pbVar16 = (byte *)CONCAT31(uVar21,bVar7);
    *s = (*s - (int)pbVar16) - (uint)(0x90 < bVar6);
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    puVar42 = (undefined4 *)((int)param_12 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    uVar22 = (undefined3)((uint)param_2 >> 8);
    bVar6 = (byte)param_2 | (byte)*puVar44;
    param_2 = (uint *)CONCAT31(uVar22,bVar6);
    *(byte *)s = (byte)*s + 1;
    cVar4 = bVar7 - *pbVar16;
    puVar44 = (uint *)((int)puVar44 + (-(uint)(bVar7 < *pbVar16) - *(int *)CONCAT31(uVar21,cVar4)));
    uVar12 = CONCAT31(uVar21,cVar4 + *(char *)CONCAT31(uVar21,cVar4));
    bVar47 = CARRY1(bRam14110000,bVar5);
    bRam14110000 = bRam14110000 + bVar5;
    uVar37 = *(uint *)(unaff_EBX + (int)puVar44 * 2);
    uVar2 = uVar12 + *(uint *)(unaff_EBX + (int)puVar44 * 2);
    puVar13 = (undefined4 *)(uVar2 + bVar47);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar13 = uVar1;
    uVar37 = (uint)(CARRY4(uVar12,uVar37) || CARRY4(uVar2,(uint)bVar47));
    puVar11 = (uint *)((int)puVar13 + uRam7d020511 + uVar37);
    unaff_retaddr = apuStack_8;
    ppuVar48 = apuStack_8;
    ppuVar41 = apuStack_8;
    ppuVar43 = apuStack_8;
    param_12 = apuStack_8;
    apuStack_8[0] = puVar42;
    cVar4 = '\x03';
    do {
      puVar42 = puVar42 + -1;
      ppuVar41 = ppuVar41 + -1;
      *ppuVar41 = (undefined4 *)*puVar42;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    pbRam00c82802 =
         (byte *)((int)puVar11 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar13,uRam7d020511) ||
                      CARRY4((int)puVar13 + uRam7d020511,uVar37))));
    uVar37 = *puVar44;
    cVar4 = (char)puVar11;
    *(byte *)puVar44 = (byte)*puVar44 + cVar4;
  } while (SCARRY1((byte)uVar37,cVar4) == (char)(byte)*puVar44 < '\0');
  *(byte *)puVar11 = (byte)*puVar11 + cVar4;
  iVar14 = CONCAT31((int3)((uint)puVar11 >> 8),cVar4 + '\x11') + 0xc57b;
  bVar5 = (byte)iVar14;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar22,bVar6 + (byte)*s);
  iVar14 = (CONCAT31((int3)((uint)iVar14 >> 8),bVar5 + 0x6f) - (uint)(0x90 < bVar5)) + -0x18093a86;
  cVar4 = (char)iVar14;
  uVar21 = (undefined3)((uint)iVar14 >> 8);
  cVar8 = cVar4 + '\x02';
  pbVar16 = (byte *)CONCAT31(uVar21,cVar8);
  if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar16 = *pbVar16 + cVar8;
  pbVar16 = (byte *)CONCAT31(uVar21,cVar4 + 'q');
  param_12 = apuStack_8;
code_r0x00404a51:
  pbVar15 = pbVar16 + 1;
  cVar8 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cVar8;
  unaff_EBX = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) - cVar8,cVar34));
  *pbVar15 = *pbVar15 + cVar8;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*s);
  pbVar16 = pbVar16 + 0x757b03;
  pbVar23 = (byte *)((int)unaff_EDI + (int)param_12 * 2);
  cVar8 = (char)pbVar16;
  *pbVar23 = *pbVar23 + cVar8;
  *pbVar16 = *pbVar16 + cVar8;
  *(byte *)puVar44 = (byte)*puVar44 - (char)((uint)pbVar16 >> 8);
  *pbVar16 = *pbVar16 + cVar8;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)param_12 + -0x3a));
  *pbVar16 = *pbVar16 + cVar8;
  pbVar16 = (byte *)(CONCAT31((int3)((uint)pbVar16 >> 8),cVar8 + '\x11') + 0x757b02);
  pbVar23 = (byte *)((int)unaff_EDI + (int)param_12 * 2);
  bVar5 = (byte)pbVar16;
  *pbVar23 = *pbVar23 + bVar5;
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar5;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
  pbRam011006fe = pbVar16 + (int)(pbRam011006fe + CARRY1(bVar6,bVar5));
  uVar37 = *puVar44;
  *(byte *)puVar44 = (byte)*puVar44 + bVar5;
  ppuVar43 = param_12;
  ppuVar48 = unaff_retaddr;
  if (!CARRY1((byte)uVar37,bVar5)) goto code_r0x00404add;
  do {
    bVar6 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar6;
    bVar7 = (byte)s;
    s = (uint *)CONCAT22((short)((uint)s >> 0x10),CONCAT11((byte)((uint)s >> 8) | *pbVar16,bVar7));
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar21 = (undefined3)((uint)pbVar16 >> 8);
    bVar6 = bVar6 + in_AF * '\x06';
    cVar8 = bVar6 + (0x90 < (bVar6 & 0xf0) | in_AF * (0xf9 < bVar6)) * '`';
    pcVar10 = (char *)CONCAT31(uVar21,cVar8);
    *pcVar10 = *pcVar10 + cVar8;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar43 + -0x39));
    *pcVar10 = *pcVar10 + cVar8;
    iVar14 = CONCAT31(uVar21,cVar8 + '\x11') + 0xc57b;
    iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '\x11') + 0xc67b;
    bVar5 = (byte)iVar14;
    bVar6 = bVar5 + 0x6f;
    pbVar16 = (byte *)CONCAT31((int3)((uint)iVar14 >> 8),bVar6);
    *s = (*s - (int)pbVar16) - (uint)(0x90 < bVar5);
    uVar37 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar7;
    pbRam011106fe = pbVar16 + (int)(pbRam011106fe + CARRY1((byte)uVar37,bVar7));
    uVar37 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar6;
    if (!CARRY1((byte)uVar37,bVar6)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    bVar6 = (byte)s;
    bVar5 = (byte)((uint)s >> 8) | *pbVar16;
    s = (uint *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar5,bVar6));
    *pbVar16 = *pbVar16 - (char)pbVar16;
    *unaff_EBX = *unaff_EBX + bVar5;
    out(*puVar44,(short)param_2);
    *s = *s & (uint)pbVar16;
    uVar37 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    pbVar16 = pbVar16 + (uint)CARRY1((byte)uVar37,bVar6) + puVar44[1];
    *pbVar16 = *pbVar16 + (char)pbVar16;
    *(byte *)s = (byte)*s + (char)param_2;
    puVar44 = puVar44 + 1;
    while( true ) {
      out(*puVar44,(short)param_2);
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 & (byte)*s);
      *(byte *)param_2 = (byte)*param_2 + (char)s;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[0x14],(char)param_2
                                         ));
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      puVar44 = puVar44 + 1;
code_r0x00404ad4:
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
      pbVar16 = (byte *)((uint)pbVar16 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar16;
code_r0x00404add:
      bVar6 = (byte)pbVar16;
      uVar21 = (undefined3)((uint)pbVar16 >> 8);
      cVar8 = bVar6 + 8;
      pbVar16 = (byte *)CONCAT31(uVar21,cVar8);
      if (SCARRY1(bVar6,'\b') == cVar8 < '\0') break;
      *pbVar16 = *pbVar16 + cVar8;
      cVar8 = bVar6 + 10;
      piVar17 = (int *)CONCAT31(uVar21,cVar8);
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      puVar11 = (uint *)CONCAT31(uVar21,bVar6 + 0x7c);
      *puVar11 = *puVar11 & (uint)s;
      *(char *)((int)puVar11 + 0x11) = *(char *)((int)puVar11 + 0x11) + (char)((uint)param_2 >> 8);
      cVar8 = (char)((int)puVar11 + 0xc67b);
      uVar21 = (undefined3)((uint)((int)puVar11 + 0xc67b) >> 8);
      bVar6 = cVar8 + 8;
      pbVar16 = (byte *)CONCAT31(uVar21,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar16 = *pbVar16 + bVar6;
        cRam02060000 = cVar8 + 'w';
        puVar25 = (uint *)CONCAT31(uVar21,cRam02060000);
        *(byte *)puVar25 = (byte)*puVar25 + cRam02060000;
        cVar8 = (char)s;
        s = (uint *)CONCAT22((short)((uint)s >> 0x10),
                             CONCAT11((byte)((uint)s >> 8) | (byte)*puVar25,cVar8));
        *puVar25 = *puVar25 - (int)puVar25;
        *(byte *)param_2 = (byte)*param_2 + cVar8;
        puVar11 = puVar44 + 1;
        out(*puVar44,(short)param_2);
        puVar44 = puVar11;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar10 = (char *)((uint)puVar25 | *puVar25);
        goto code_r0x00404b89;
      }
      bVar5 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar6;
      *puVar44 = (uint)(pbVar16 + (uint)CARRY1(bVar5,bVar6) + *puVar44);
    }
    *(byte *)puVar44 = (byte)*puVar44 + 1;
    *s = (uint)(pbVar16 + (uint)(0xf7 < bVar6) + *s);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + 'r');
    piVar17 = (int *)((uint)puVar11 | *puVar11);
    param_2 = puStack_24;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar14 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar6 = (byte)iVar14;
    iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),bVar6 + 0x6f);
    *s = (*s - iVar14) - (uint)(0x90 < bVar6);
    cVar8 = (char)s;
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    bVar28 = (byte)((uint)unaff_EBX >> 8);
    bVar7 = (byte)((uint)param_2 >> 8) | bVar28;
    pcVar19 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar7,(byte)param_2));
    piVar17 = (int *)(iVar14 + 0x73060001);
    *(byte *)s = (byte)*s & (byte)piVar17;
    *pcVar19 = *pcVar19 + cVar8;
    bVar5 = (byte)((uint)s >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar5;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar14 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *unaff_EBX = *unaff_EBX + bVar5;
    pcVar10 = (char *)((uint)piVar17 | *unaff_EDI);
    *pcVar19 = *pcVar19 - bVar5;
    bVar6 = (byte)pcVar10;
    *pcVar10 = *pcVar10 + bVar6;
    ppuVar43 = (undefined4 **)
               (((int)ppuVar43 - iVar14) - *(int *)(pcVar10 + ((int)ppuVar43 - iVar14)));
    uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar29 = (byte)unaff_EBX;
    cVar4 = bVar28 + unaff_EBX[0x76];
    pbVar23 = (byte *)CONCAT22(uVar30,CONCAT11(cVar4,bVar29));
    *pcVar10 = *pcVar10 + bVar6;
    uVar21 = (undefined3)((uint)pcVar10 >> 8);
    uVar12 = CONCAT31(uVar21,bVar6 + 7);
    puVar11 = (uint *)((int)ppuVar43 + -0x1faeef1);
    uVar37 = *puVar11;
    uVar2 = *puVar11 + uVar12;
    *puVar11 = uVar2 + (0xf8 < bVar6);
    puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
    puVar46 = puStack_24;
    bVar6 = bVar6 + 7 + (byte)*s + (CARRY4(uVar37,uVar12) || CARRY4(uVar2,(uint)(0xf8 < bVar6)));
    puVar25 = (uint *)CONCAT31(uVar21,bVar6);
    uVar37 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar6;
    if (CARRY1((byte)uVar37,bVar6)) break;
    *(byte *)puVar25 = (byte)*puVar25 + bVar6;
    unaff_EBX = (byte *)CONCAT22(uVar30,CONCAT11(cVar4 + pbVar23[0x76],bVar29));
    uStack_28 = in_ES;
  }
  *(byte *)puVar25 = (byte)*puVar25 + bVar6;
  uVar22 = (undefined3)((uint)pcVar19 >> 8);
  bVar32 = (byte)param_2 | *pbVar23;
  param_2 = (uint *)CONCAT31(uVar22,bVar32);
  pcRam2b060000 = (char *)CONCAT31(uVar21,bVar6 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar6 + 0x39)) - (0xd7 < (byte)(bVar6 + 0x11));
  bVar28 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar5;
  puVar11 = puVar44 + 1;
  out(*puVar44,(short)param_2);
  bVar6 = (bVar6 + 0x37) - CARRY1(bVar28,bVar5);
  piVar17 = (int *)CONCAT31(uVar21,bVar6);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar6;
    iVar14 = CONCAT31(uVar21,bVar6 + 0x11) + 0xc77b;
    pcVar10 = (char *)CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + 'r');
    pcVar10[0x28] = pcVar10[0x28] + bVar7;
code_r0x00404b89:
    cVar8 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar8;
    *pcVar10 = *pcVar10 + cVar8;
    *pcVar10 = *pcVar10 + cVar8;
    puVar18 = (ushort *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar8 + 'r');
    uVar9 = (ushort)puVar18 | *puVar18;
    pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),uVar9);
    bRam11060000 = (byte)uVar9;
    out(*puVar11,(short)param_2);
    *pcVar10 = *pcVar10 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar6;
  puVar42 = (undefined4 *)((int)ppuVar43 - *(int *)((int)unaff_EDI + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar10 = (char *)CONCAT31(uVar22,bVar32 | *pbVar23);
  puVar25 = puVar44 + 2;
  out(*puVar11,(short)pcVar10);
  uVar37 = *s;
  *pcVar10 = *pcVar10 + cVar8;
  uVar37 = CONCAT31(uVar21,bVar6 & (byte)uVar37) | 0x767b02;
  *(byte *)((int)s + (int)pcVar10) = *(byte *)((int)s + (int)pcVar10) + (char)uVar37;
  iVar14 = uVar37 + 0xc67b;
  cVar40 = (char)iVar14;
  uVar21 = (undefined3)((uint)iVar14 >> 8);
  cVar34 = cVar40 + 'r';
  pcVar10 = (char *)CONCAT31(uVar21,cVar34);
  pcVar10[0x28] = pcVar10[0x28] + bVar7;
  *pcVar10 = *pcVar10 + cVar34;
  uVar31 = (undefined2)((uint)s >> 0x10);
  bVar5 = bVar5 | *(byte *)((int)puStack_24 + -0x5e);
  puVar24 = (uint *)CONCAT22(uVar31,CONCAT11(bVar5,cVar8));
  *pcVar10 = *pcVar10 + cVar34;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,uStack_28);
  puVar38 = (uint *)CONCAT22(uVar30,CONCAT11(cVar4 + pbVar23[0x76],bVar29));
  *pcVar10 = *pcVar10 + cVar34;
  puVar11 = (uint *)CONCAT31(uVar21,cVar40 + -0x1c);
  pcVar10 = (char *)((uint)puVar11 | *puVar11);
  bVar47 = (POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar10;
  puVar11 = puStack_24;
  puVar13 = puVar42;
  puVar36 = puVar46;
  uVar30 = uStack_28;
  if (!bVar47) goto code_r0x00404ca8;
  *pcVar10 = *pcVar10 + cRam02060000;
  puVar36 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cRam02060000 + 'r');
  *puVar36 = *puVar36 & (uint)puVar24;
  *(char *)((int)puVar36 + 0x11) = *(char *)((int)puVar36 + 0x11) + (char)((ushort)uStack_28 >> 8);
  iVar14 = (int)puVar36 + 0xc77b;
  uVar21 = (undefined3)((uint)iVar14 >> 8);
  cRam02060000 = (char)iVar14 + '\t';
  pbVar23 = (byte *)CONCAT31(uVar21,cRam02060000);
  out(*puVar25,uStack_28);
  *pbVar23 = *pbVar23 + cRam02060000;
  puVar36 = (uint *)CONCAT22(uVar31,CONCAT11(bVar5 | *pbVar23,cVar8));
  *(int *)pbVar23 = *(int *)pbVar23 - (int)pbVar23;
  *(byte *)puStack_24 = (byte)*puStack_24 + cVar8;
  out(puVar44[3],uStack_28);
  puVar25 = puVar44 + 4;
  uVar30 = uStack_28;
  if ((POPCOUNT((byte)*puStack_24) & 1U) != 0) goto code_r0x00404cca;
  *pbVar23 = *pbVar23 + cRam02060000;
  puVar18 = (ushort *)CONCAT31(uVar21,(char)iVar14 + '{');
  uVar9 = (ushort)puVar18 | *puVar18;
  pcVar10 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),uVar9);
  bVar6 = (byte)uVar9;
  out(puVar44[4],uStack_28);
  pbVar23 = (byte *)((int)puVar36 + 1);
  bRam11060000 = bVar6;
  *pcVar10 = *pcVar10 + bVar6;
  puVar24 = (uint *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((byte)((uint)pbVar23 >> 8) | bRam110cde91,(char)pbVar23));
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar6 - 7);
  *puVar46 = (uint)(pcVar10 + (uint)(bVar6 < 7) + *puVar46);
  puVar25 = puVar44 + 6;
  out(puVar44[5],uStack_28);
  puVar11 = (uint *)((int)puStack_24 + 1);
  *pcVar10 = *pcVar10 + (bVar6 - 7);
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar29 | (byte)(uVar9 >> 8));
  do {
    bVar6 = (char)pcVar10 - *pcVar10;
    uVar37 = *puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + bVar6;
    cVar8 = bVar6 - CARRY1((byte)uVar37,bVar6);
    *(byte *)puVar11 = (byte)*puVar11 + cVar8;
    cVar4 = (char)((uint)puVar24 >> 8);
    *(byte *)(puVar46 + 0x673b40) = (byte)puVar46[0x673b40] + cVar4;
    puVar44 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar8);
    *(byte *)puVar44 = (byte)*puVar44 + cVar8;
    *(byte *)puVar11 = (byte)*puVar11 + cVar8;
    puVar38[0x16] = (uint)(puVar38[0x16] + (int)puVar25);
    puVar36 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar24 >> 0x10),
                                               CONCAT11(cVar4 + (char)((uint)pcVar10 >> 8),
                                                        (char)puVar24)) >> 8),
                               (char)puVar24 + *(char *)((int)puVar44 * 2));
    *(byte *)puVar44 = (byte)*puVar44 + cVar8;
    *(byte *)puVar25 = (byte)*puVar25 + (char)puVar38;
_ctor:
    bVar5 = (byte)((uint)puVar36 >> 8);
    uVar37 = *puVar44;
    bVar6 = (byte)puVar36;
    puVar44 = (uint *)((int)puVar44 + (uint)CARRY1(bVar5,(byte)*puVar44) + *puVar44);
    *(byte *)puVar11 = (byte)*puVar11 + bVar6;
    cVar8 = bVar6 - *(byte *)((int)puVar11 + 3);
    puVar24 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar36 >> 0x10),
                                               CONCAT11(bVar5 + (byte)uVar37,bVar6)) >> 8),cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      if (*(byte *)((int)puVar11 + 3) <= bVar6) {
        *puVar44 = (uint)(*puVar44 + (int)puVar44);
        puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),(byte)puVar11 | (byte)*puVar38);
        puVar44 = puVar44 + 0x230e;
        puVar36 = puVar24;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
    cVar8 = (char)puVar44 + '\x02';
    pcVar10 = (char *)CONCAT31((int3)((uint)puVar44 >> 8),cVar8);
    bVar47 = (POPCOUNT(cVar8) & 1U) == 0;
    puVar13 = puVar42;
    puVar36 = puVar46;
    uVar30 = uStack_18;
code_r0x00404ca8:
    uStack_18 = uVar30;
    puVar42 = apuStack_8[0];
    puVar46 = puStack_10;
    if (bVar47) break;
    *(byte *)puVar11 = (byte)*puVar11 + (char)puVar24;
    puVar42 = puVar13;
    puVar46 = puVar36;
  } while( true );
  *pcVar10 = *pcVar10 + (char)pcVar10;
  *param_5 = *param_5 + (byte)param_5;
  puVar36 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                             CONCAT11((byte)((uint)param_4 >> 8) | (byte)*param_3,(char)param_4));
  *(byte *)ppuVar48 = (byte)*ppuVar48 + (char)ppuVar48;
  *(byte *)((int)param_5 * 2) = *(byte *)((int)param_5 * 2) ^ (byte)param_5;
  uVar3 = *(undefined6 *)param_5;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar23 = (byte *)uVar3;
  bVar5 = (byte)uVar3;
  *pbVar23 = *pbVar23 + bVar5;
  bVar6 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar5;
  puVar11 = (uint *)((int)puVar36 + 0x11673);
  uVar37 = *puVar11;
  uVar2 = *puVar11;
  *puVar11 = uVar2 + (int)param_3 + (uint)CARRY1(bVar6,bVar5);
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uStack_18);
  pbVar23 = pbVar23 + (uint)(CARRY4(uVar37,(uint)param_3) ||
                            CARRY4(uVar2 + (int)param_3,(uint)CARRY1(bVar6,bVar5))) +
                      *(int *)((int)puVar36 + (int)param_3);
  puVar11 = param_3;
  puVar38 = (uint *)ppuVar48;
  puVar25 = puStack_c;
  uVar30 = uStack_18;
code_r0x00404cca:
  uStack_18 = uVar30;
  cVar8 = (char)pbVar23 + '\x04';
  puVar44 = (uint *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar8);
  if (SCARRY1((char)pbVar23,'\x04') == cVar8 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
  puVar45 = puVar25 + 1;
  out(*puVar25,(short)puVar11);
  uVar37 = *puVar36;
  uVar2 = *puVar11;
  bVar6 = (byte)puVar36;
  *(byte *)puVar11 = (byte)*puVar11 + bVar6;
  iVar14 = (CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 + '\x03') & uVar37) + iRam00008c38;
  *(byte *)puVar36 = (byte)*puVar36 + (char)puVar11;
  pcVar10 = (char *)(iVar14 + (uint)CARRY1((byte)uVar2,bVar6) + 0x1246f);
  uVar21 = (undefined3)((uint)puVar36 >> 8);
  bVar6 = bVar6 | (byte)*puVar11;
  puVar24 = (uint *)CONCAT31(uVar21,bVar6);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar10 >> 8);
  puVar44 = (uint *)(CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + *pcVar10) + 0x1fbeef2);
  uVar37 = *puVar44;
  *puVar44 = (uint)(*puVar44 + (int)puVar44);
  if (CARRY4(uVar37,(uint)puVar44)) {
    *puVar44 = (uint)(*puVar44 + (int)puVar44);
    pcVar10 = (char *)CONCAT31(uVar21,bVar6 | bRam00282809);
    cVar8 = (char)((uint)puVar36 >> 8);
    *(byte *)puVar38 = (byte)*puVar38 + cVar8;
    *pcVar10 = *pcVar10 - cVar8;
    *(byte *)puVar44 = *(byte *)puVar44 + (char)puVar44;
    iVar14 = (int)pcVar10 - *puVar38;
    puVar25 = puVar25 + 2;
    out(*puVar45,(short)puVar11);
    *puVar44 = (uint)(*puVar44 + (int)puVar44);
    puVar24 = (uint *)CONCAT22((short)((uint)iVar14 >> 0x10),
                               CONCAT11((byte)((uint)iVar14 >> 8) | bRambf73070b,(char)iVar14));
code_r0x00404d15:
    uVar37 = *puVar44;
    bVar6 = (byte)puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar6;
    puVar45 = puVar25 + 1;
    out(*puVar25,(short)puVar11);
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    bVar5 = bVar6 + in_AF * '\x06';
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                               bVar5 + (0x90 < (bVar5 & 0xf0) |
                                       CARRY1((byte)uVar37,bVar6) | in_AF * (0xf9 < bVar5)) * '`');
  }
  *puVar44 = (uint)(*puVar44 + (int)puVar44);
  bVar6 = (byte)puVar44 | (byte)*puVar46;
  puVar25 = puVar45 + 1;
  uVar31 = SUB42(puVar11,0);
  out(*puVar45,uVar31);
  *(byte *)puVar24 = (byte)*puVar24 - bVar6;
  uVar37 = *puVar11;
  bVar5 = (byte)puVar24;
  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
  iVar14 = CONCAT31((int3)((uint)puVar44 >> 8),bVar6) + *puVar25 + (uint)CARRY1((byte)uVar37,bVar5);
  pcVar10 = (char *)((int)puVar42 - *puVar11);
  uVar21 = (undefined3)((uint)iVar14 >> 8);
  cVar8 = (char)iVar14 + (byte)*puVar25 + (puVar42 < (undefined4 *)*puVar11);
  puVar44 = (uint *)CONCAT31(uVar21,cVar8);
  bVar6 = (byte)((uint)puVar24 >> 8);
  *(byte *)puVar24 = (byte)*puVar24 - bVar6;
  *puVar44 = (uint)(*puVar44 + (int)puVar44);
  bVar5 = bVar5 | *(byte *)((int)puVar11 + (int)puVar44);
  uVar30 = (undefined2)((uint)puVar24 >> 0x10);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)puVar44 = (byte)*puVar44 + cVar8;
    pcVar19 = (char *)CONCAT31(uVar21,cVar8 + '\x12');
    *pcVar19 = *pcVar19 + bVar6;
    puVar44 = (uint *)CONCAT31(uVar21,(cVar8 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar24 >> 8),bVar5));
    uVar37 = *puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar5;
    if (!CARRY1((byte)uVar37,bVar5)) {
      pbVar23 = (byte *)((uint)puVar44 | *puVar44);
      out(*puVar25,uVar31);
      *pbVar23 = *pbVar23 + (char)pbVar23;
      bVar7 = *pbVar23;
      piVar17 = (int *)CONCAT22(uVar30,CONCAT11(bVar6 | bVar7,bVar5));
      iVar14 = (int)pbVar23 - *piVar17;
      *(byte *)puVar11 = (byte)*puVar11 + bVar5;
      puVar44 = puVar45 + 3;
      out(puVar45[2],uVar31);
      uRam12060000 = (undefined1)iVar14;
      *(char *)((int)piVar17 + iVar14) = *(char *)((int)piVar17 + iVar14) - (bVar6 | bVar7);
      *(byte *)puVar11 = (byte)*puVar11 + bVar5;
      pbVar23 = (byte *)(iVar14 + -0x120edecd);
      *(byte *)puVar44 = (byte)*puVar44 + 1;
      bVar6 = *pbVar23;
      bVar7 = (byte)pbVar23;
      *pbVar23 = *pbVar23 + bVar7;
      pcVar10 = pcVar10 + ((-1 - *(int *)((int)puVar46 + 0x42)) - (uint)CARRY1(bVar6,bVar7));
      *pbVar23 = *pbVar23 + bVar7;
      bVar6 = (byte)puVar38 | (byte)((uint)pbVar23 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar23;
      uVar37 = *puVar11;
      pcVar19 = (char *)(((uint)pbVar23 | 0x11) + 0x511072c);
      puVar25 = puVar45 + 4;
      out(*puVar44,uVar31);
      puVar11 = (uint *)((int)puVar11 + 1);
      *pcVar19 = *pcVar19 + (char)pcVar19;
      bVar7 = (byte)((uint)pcVar19 >> 8);
      puVar38 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar38 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar38 >> 8) | (byte)uVar37,
                                                          bVar6)) >> 8),bVar6 | bVar7);
      uVar21 = (undefined3)((uint)pcVar19 >> 8);
      bVar6 = (char)pcVar19 - *pcVar19;
      pcVar19 = (char *)CONCAT31(uVar21,bVar6);
      *pcVar19 = *pcVar19 + bVar6;
      *(int *)((int)pcVar19 * 2) = (int)(*(int *)((int)pcVar19 * 2) + (int)puVar38);
      *(byte *)puVar11 = *(byte *)puVar11 + bVar6;
      *pcVar10 = *pcVar10 + bVar7;
      in_AF = 9 < (bVar6 & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar21,bVar6 + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar37;
      pbVar23 = (byte *)CONCAT22((short)(uVar37 >> 0x10),CONCAT11(bVar7 + in_AF,bVar6));
      *(byte *)puVar25 = (byte)*puVar25 + bVar5;
      *pbVar23 = *pbVar23 + bVar6;
      *pbVar23 = *pbVar23 + bVar6;
      bVar47 = CARRY1(bVar6,*pbVar23);
      puVar44 = (uint *)CONCAT31((int3)((uint)pbVar23 >> 8),bVar6 + *pbVar23);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar38 = (byte)*puVar38 - (char)puVar11;
  }
  *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
  bVar47 = false;
  piVar17 = (int *)CONCAT22(uVar30,CONCAT11(bVar6 | (byte)*puVar11,bVar5));
code_r0x00404d9a:
  do {
    puVar36 = puVar11;
    *puVar44 = (*puVar44 - (int)puVar44) - (uint)bVar47;
    bVar6 = (byte)((uint)piVar17 >> 8);
    uVar30 = (undefined2)((uint)piVar17 >> 0x10);
    bVar5 = (byte)piVar17;
    bVar7 = bVar6 + (byte)iRam00000c00;
    pbVar23 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar6,(byte)iRam00000c00));
    *(byte *)puVar36 = (byte)*puVar36 + bVar5;
    puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(char)puVar38 - (byte)*puVar25);
    bVar6 = *pbVar23;
    puVar44 = (uint *)(pbVar23 + (uint)CARRY1(bVar7,*pbVar23) + *(int *)pbVar23);
    *(byte *)puVar36 = (byte)*puVar36 + bVar5;
    cVar4 = ((bVar7 + bVar6) - (byte)*puVar36) + (byte)*puVar44;
    pcVar19 = (char *)CONCAT22(uVar30,CONCAT11(cVar4,bVar5));
    puVar11 = puVar46 + 1;
    uVar37 = in((short)puVar36);
    *puVar46 = uVar37;
    cVar8 = (char)puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + cVar8;
    uVar21 = (undefined3)((uint)puVar36 >> 8);
    bVar7 = (byte)puVar36 | (byte)*puVar25;
    pcVar26 = (char *)CONCAT31(uVar21,bVar7);
    *pcVar19 = *pcVar19 + '\x01';
    bVar6 = (cVar4 - *pcVar26) + (byte)*puVar44;
    pcVar19 = (char *)CONCAT22(uVar30,CONCAT11(bVar6,bVar5));
    puVar46 = puVar46 + 2;
    uVar37 = in((short)pcVar26);
    *puVar11 = uVar37;
    *(byte *)puVar44 = (byte)*puVar44 + cVar8;
    bVar7 = bVar7 | (byte)*puVar25;
    puVar11 = (uint *)CONCAT31(uVar21,bVar7);
    *pcVar19 = *pcVar19 + '\x01';
    bVar47 = bVar5 < *(byte *)((int)puVar11 + 2);
    cVar4 = bVar5 - *(byte *)((int)puVar11 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar19 >> 8),cVar4);
  } while ((POPCOUNT(cVar4) & 1U) != 0);
  *(byte *)puVar44 = (byte)*puVar44 + cVar8;
  bVar5 = cVar8 + 0x7b;
  pbVar23 = (byte *)CONCAT31((int3)((uint)puVar44 >> 8),bVar5);
  *(byte *)((int)puVar38 + (int)pbVar23) = *(byte *)((int)puVar38 + (int)pbVar23) + bVar5;
  puVar44 = puVar25 + 1;
  uVar31 = SUB42(puVar11,0);
  out(*puVar25,uVar31);
  pbVar16 = (byte *)((int)puVar38 + -1);
  *pbVar23 = *pbVar23 + bVar5;
  bVar6 = bVar6 | (byte)*puVar11;
  piVar17 = (int *)CONCAT22(uVar30,CONCAT11(bVar6,cVar4));
  *pbVar23 = *pbVar23 + bVar5;
  *pbVar16 = *pbVar16 + bVar7;
  *pbVar16 = *pbVar16 ^ bVar5;
  *(byte *)puVar11 = (byte)*puVar11 + bVar6;
  *pbVar23 = *pbVar23 + bVar5;
  do {
    bVar28 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar46 = (byte)*puVar46 + bVar28;
    bVar6 = *pbVar23;
    bVar5 = (byte)pbVar23;
    *pbVar23 = *pbVar23 + bVar5;
    *(byte **)((int)puVar38 + 0x17) =
         (byte *)((int)puVar44 + (uint)CARRY1(bVar6,bVar5) + *(int *)((int)puVar38 + 0x17));
    *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
    uVar22 = (undefined3)((uint)pbVar23 >> 8);
    bVar5 = bVar5 | (byte)*puVar44;
    puVar46 = (uint *)((int)puVar46 + *(int *)(pcVar10 + -0x34));
    *(char *)CONCAT31(uVar22,bVar5) = *(char *)CONCAT31(uVar22,bVar5) + bVar5;
    bVar6 = bVar5 + 2;
    cVar8 = (char)((uint)puVar36 >> 8);
    bVar29 = (byte)piVar17;
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      pbVar23 = (byte *)CONCAT31(uVar22,bVar5 + 0x15 + (0xfd < bVar5));
      if (0xec < bVar6 || CARRY1(bVar5 + 0x15,0xfd < bVar5)) {
        *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
      }
code_r0x00404e60:
      pcVar10 = pcVar10 + -*puVar11;
      bVar6 = *pbVar23;
      *pbVar23 = *pbVar23 + (byte)pbVar23;
      pbVar15 = (byte *)((int)puVar44 + (-(uint)CARRY1(bVar6,(byte)pbVar23) - *(int *)pbVar23));
      pbVar23 = pbVar23 + *(int *)pbVar23;
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_DS);
      *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      bVar6 = *pbVar23;
      *pbVar23 = *pbVar23 + (byte)pbVar23;
      *(byte **)(pbVar16 + (int)puVar11) =
           (byte *)((int)puVar11 +
                   (uint)CARRY1(bVar6,(byte)pbVar23) + *(int *)(pbVar16 + (int)puVar11));
      pbVar23 = pbVar23 + 0x73061314;
      *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
      uVar22 = (undefined3)((uint)piVar17 >> 8);
      bVar29 = bVar29 | (byte)*puVar11;
      pcVar26 = (char *)CONCAT31(uVar22,bVar29);
      *pbVar23 = *pbVar23 + (char)pbVar23;
      cVar8 = (char)pbVar23 + 'o';
      pcVar19 = (char *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar8);
      *pcVar19 = *pcVar19 + cVar8;
      out(*(undefined4 *)pbVar15,uVar31);
      uVar37 = *puVar11;
      *(byte *)puVar11 = (byte)*puVar11 + bVar29;
      pcVar19 = pcVar19 + (uint)CARRY1((byte)uVar37,bVar29) + *puVar46;
      *pcVar19 = *pcVar19 + (char)pcVar19;
      *pcVar26 = *pcVar26 + bVar7;
      puVar44 = (uint *)(pbVar15 + 8);
      out(*(undefined4 *)(pbVar15 + 4),uVar31);
      *(byte *)puVar11 = (byte)*puVar11 + bVar29;
      piVar17 = (int *)((uint)pcVar19 | *puVar46);
      pcVar26[0x390a0000] = pcVar26[0x390a0000] - bVar28;
      pbVar16 = (byte *)0x7000000;
      *(byte *)puVar46 = (byte)*puVar46 - bVar28;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar25 = (uint *)CONCAT31(uVar22,bVar29 | *(byte *)((int)piVar17 + (int)pcVar26));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar28;
      cRam07000000 = cRam07000000 + bVar28;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar23 = (byte *)((int)puVar46 + (int)pcVar10 * 2);
      bVar47 = SCARRY1(*pbVar23,(char)piVar17);
      *pbVar23 = *pbVar23 + (char)piVar17;
      bVar6 = *pbVar23;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
    bVar5 = bVar5 + 0x71;
    pbVar23 = (byte *)CONCAT31(uVar22,bVar5);
    *pbVar23 = *pbVar23;
    *(byte *)puVar44 = (byte)*puVar44 + 1;
    *piVar17 = (*piVar17 - (int)pbVar23) - (uint)(0x90 < bVar6);
    uVar37 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar5;
    if (!CARRY1((byte)uVar37,bVar5)) goto code_r0x00404e60;
    *pbVar23 = *pbVar23 + bVar5;
    uVar30 = (undefined2)((uint)piVar17 >> 0x10);
    bVar28 = bVar28 | *pbVar23;
    pbVar23 = pbVar23 + -*(int *)pbVar23;
    *pbVar16 = *pbVar16 + bVar28;
    cVar4 = bVar29 - *(byte *)((int)puVar11 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar28,bVar29)) >> 8),cVar4);
  } while ((POPCOUNT(cVar4) & 1U) != 0);
  cVar34 = (char)pbVar23;
  *pbVar23 = *pbVar23 + cVar34;
  uVar22 = (undefined3)((uint)pbVar23 >> 8);
  pcVar19 = (char *)CONCAT31(uVar22,cVar34 + '{');
  out(*puVar44,uVar31);
  *pcVar19 = *pcVar19 + cVar34 + '{';
  bVar5 = cVar34 + 0x7e;
  pbVar23 = (byte *)CONCAT31(uVar22,bVar5);
  puVar44 = puVar25 + 3;
  out(puVar25[2],uVar31);
  pbVar16 = (byte *)((int)puVar38 + -2);
  *pbVar23 = *pbVar23 + bVar5;
  bVar28 = bVar28 | (byte)*puVar11;
  puVar25 = (uint *)CONCAT22(uVar30,CONCAT11(bVar28,cVar4));
  *pbVar23 = *pbVar23 + bVar5;
  *pbVar16 = *pbVar16 + bVar7;
  *pbVar16 = *pbVar16 ^ bVar5;
  *(byte *)puVar11 = (byte)*puVar11 + bVar28;
  *pbVar23 = *pbVar23 + bVar5;
  *pbVar23 = *pbVar23 + cVar8;
  bVar6 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar5;
  puVar38[6] = (uint)((int)puVar44 + (uint)CARRY1(bVar6,bVar5) + puVar38[6]);
  *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
  bVar5 = bVar5 | (byte)*puVar44;
  puVar46 = (uint *)((int)puVar46 + *(int *)(pcVar10 + -0x33));
  *(char *)CONCAT31(uVar22,bVar5) = *(char *)CONCAT31(uVar22,bVar5) + bVar5;
  bVar47 = SCARRY1(bVar5,'\x02');
  bVar6 = bVar5 + 2;
  piVar17 = (int *)CONCAT31(uVar22,bVar6);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar6;
    return CONCAT31(uVar22,bVar5 + 0x71);
  }
code_r0x00404ebf:
  bVar5 = (byte)piVar17;
  uVar22 = (undefined3)((uint)piVar17 >> 8);
  if (bVar6 != 0 && bVar47 == (char)bVar6 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    puVar44[(int)puVar46 * 2] =
         (uint)((int)puVar11 + (uint)(0xd2 < bVar5) + puVar44[(int)puVar46 * 2]);
    return CONCAT31(uVar22,bVar5 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar6 = *pbVar16;
  *puVar44 = (uint)(*puVar44 + (int)piVar17);
  bVar29 = (byte)((uint)puVar25 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar29;
  *(byte *)piVar17 = (char)*piVar17 + bVar5;
  pbVar23 = (byte *)(CONCAT31(uVar21,bVar7 | bVar6) - *(int *)pbVar16);
  puVar38 = (uint *)CONCAT31(uVar22,bVar5 + 6);
  *(uint *)(pbVar16 + (int)puVar44 * 2) =
       (int)puVar38 + (uint)(0xf9 < bVar5) + *(int *)(pbVar16 + (int)puVar44 * 2);
  *(byte *)puVar25 = (byte)*puVar25 ^ bVar5 + 6;
  bVar5 = (byte)puVar25;
  *pbVar23 = *pbVar23 + bVar5;
  puVar11 = puVar44 + 1;
  uVar30 = SUB42(pbVar23,0);
  out(*puVar44,uVar30);
  *puVar25 = *puVar25 ^ (uint)puVar38;
  *pbVar23 = *pbVar23 + bVar5;
  puVar36 = (uint *)(pbVar16 + -*(int *)pbVar16);
  *(uint *)((int)puVar46 + 0x31) = *(uint *)((int)puVar46 + 0x31) | (uint)pcVar10;
  *puVar38 = *puVar38 + (int)puVar38;
  puVar25 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),CONCAT11(bVar29 | (byte)*puVar36,bVar5))
  ;
  *(byte **)(pbVar23 + 0x6e) = (byte *)(*(int *)(pbVar23 + 0x6e) + (int)puVar11);
  piVar17 = (int *)((uint)puVar38 | *puVar38);
  bVar7 = (byte)puVar36;
  *(byte *)puVar46 = (byte)*puVar46 - bVar7;
  bVar6 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar5;
  if (CARRY1(bVar6,bVar5)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar6 = pbVar23[0x11];
    uVar31 = (undefined2)((uint)puVar36 >> 0x10);
    out(*puVar11,uVar30);
    puVar25 = (uint *)((int)puVar25 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar32 = (byte)((uint)puVar36 >> 8) | bVar6 | *pbVar23;
    pcVar19 = (char *)((int)piVar17 + -0x21000001);
    bVar6 = (byte)pcVar19 | 0x11;
    uVar21 = (undefined3)((uint)pcVar19 >> 8);
    cVar8 = bVar6 - 7;
    pcVar26 = (char *)CONCAT31(uVar21,cVar8);
    *puVar46 = (uint)(pcVar26 + (uint)(bVar6 < 7) + *puVar46);
    puVar11 = puVar44 + 3;
    out(puVar44[2],uVar30);
    pbVar23 = pbVar23 + 1;
    *pcVar26 = *pcVar26 + cVar8;
    bVar29 = (byte)((uint)pcVar19 >> 8);
    bVar28 = bVar7 | bVar29;
    bVar5 = cVar8 - *pcVar26;
    bVar6 = *(byte *)puVar25;
    *(byte *)puVar25 = *(byte *)puVar25 + bVar5;
    *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5 + CARRY1(bVar6,bVar5);
    *pbVar23 = *pbVar23 + bVar5;
    *(byte *)puVar11 = (byte)*puVar11 + bVar28;
    bVar6 = (byte)((uint)pbVar23 >> 8);
    *(byte *)puVar25 = *(byte *)puVar25 + bVar5 + CARRY1((byte)pbVar23,bVar6);
    piVar17 = (int *)CONCAT31(uVar21,bVar5);
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11(bVar6 + bVar29,(byte)pbVar23 + bVar6));
    puVar36 = (uint *)CONCAT22(uVar31,CONCAT11(bVar32 + *(char *)(CONCAT31((int3)(CONCAT22(uVar31,
                                                  CONCAT11(bVar32,bVar7)) >> 8),bVar28) + 0x76),
                                               bVar28));
    uStack_18 = puStack_24._0_2_;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar19 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar25);
    cVar34 = (char)puVar25;
    *pbVar23 = *pbVar23 + cVar34;
    uVar30 = (undefined2)((uint)puVar36 >> 0x10);
    cVar35 = (char)puVar36;
    cVar39 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x75);
    *pcVar19 = *pcVar19 + (char)pcVar19;
    cVar8 = (char)pcVar19 + 'o';
    pcVar19 = (char *)CONCAT31((int3)((uint)pcVar19 >> 8),cVar8);
    *pcVar19 = *pcVar19 + cVar8;
    cVar40 = (char)((uint)puVar25 >> 8);
    *pcVar10 = *pcVar10 - cVar40;
    pbVar23[1] = pbVar23[1] + cVar34;
    pcVar19 = pcVar19 + -0x757b021b;
    cVar8 = (char)pcVar19;
    *pcVar19 = *pcVar19 + cVar8;
    uVar21 = (undefined3)((uint)pcVar19 >> 8);
    cVar4 = cVar8 + 'o';
    pcVar19 = (char *)CONCAT31(uVar21,cVar4);
    pbVar15 = pbVar23 + 2;
    *pcVar19 = *pcVar19 + cVar4;
    iVar14 = CONCAT22(uVar30,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar39,cVar35)) +
                                                        0x76),cVar35));
    *pcVar19 = *pcVar19 + cVar4;
    pcVar19 = (char *)CONCAT31(uVar21,cVar8 + -0x22);
    puVar44 = (uint *)((int)puVar46 + 1);
    *(byte *)puVar46 = (byte)*puVar11;
    *pcVar19 = *pcVar19 + cVar8 + -0x22;
    *(byte *)((int)puVar25 + (int)pcVar19) =
         *(byte *)((int)puVar25 + (int)pcVar19) - (char)((uint)pbVar15 >> 8);
    *pbVar15 = *pbVar15 + cVar34;
    bVar5 = cVar40 - pbVar23[4];
    pbVar16 = (byte *)((int)puVar11 + 5);
    out(*(undefined4 *)((int)puVar11 + 1),(short)pbVar15);
    puVar11 = (uint *)((uint)(pcVar19 + *(int *)(pcVar19 + iVar14)) ^ 0x280a0001);
    *(byte *)puVar11 = (byte)*puVar11 << 1 | (char)(byte)*puVar11 < '\0';
    *pbVar16 = *pbVar16 + (char)puVar11;
    pbVar16 = pbVar16 + *(int *)(pbVar23 + -0x5c);
    pbVar23 = (byte *)((uint)puVar11 | *puVar11);
    *pbVar16 = *pbVar16 + (char)pbVar23;
    puVar36 = (uint *)CONCAT31((int3)((uint)iVar14 >> 8),cVar35 - (char)pbVar15);
    bVar6 = *pbVar23;
    puVar25 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),CONCAT11(bVar5 + *pbVar23,cVar34));
    iVar14 = *(int *)pbVar23;
    *pbVar15 = *pbVar15 + cVar34;
    cVar8 = (char)(pbVar23 + (uint)CARRY1(bVar5,bVar6) + iVar14) + 'r';
    puVar46 = (uint *)CONCAT31((int3)((uint)(pbVar23 + (uint)CARRY1(bVar5,bVar6) + iVar14) >> 8),
                               cVar8);
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),CONCAT11(10,(char)pbVar15));
    *(char *)(puVar46 + 10) = (char)puVar46[10] + '\n';
    *pbVar16 = *pbVar16 + cVar8;
    puVar11 = (uint *)(pbVar16 + *(int *)(pbVar23 + -0x5e));
    uVar37 = *puVar46;
    cVar8 = (char)((uint)puVar46 | uVar37);
    *(byte *)puVar11 = (byte)*puVar11 + cVar8;
    uVar21 = (undefined3)(((uint)puVar46 | uVar37) >> 8);
    cVar4 = cVar8 + (byte)*puVar36;
    puVar46 = (uint *)CONCAT31(uVar21,cVar4);
    if (SCARRY1(cVar8,(byte)*puVar36) == cVar4 < '\0') goto code_r0x00405090;
    *(byte *)puVar46 = (byte)*puVar46 + cVar4;
    piVar17 = (int *)CONCAT31(uVar21,cVar4 + '\x02');
    puVar46 = puVar44;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar23) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar21 = (undefined3)((uint)piVar17 >> 8);
  cVar8 = (char)piVar17 + '}';
  pbVar16 = (byte *)CONCAT31(uVar21,cVar8);
  pbVar23[(int)pbVar16] = pbVar23[(int)pbVar16] + cVar8;
  pbVar23[0x280a0000] = pbVar23[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar6 = (byte)puVar25 & 7;
  *pbVar16 = *pbVar16 << bVar6 | *pbVar16 >> 8 - bVar6;
  *(byte *)puVar11 = (byte)*puVar11 + cVar8;
  cVar34 = (char)puVar36 - (byte)*puVar11;
  uVar30 = (undefined2)((uint)puVar36 >> 0x10);
  cVar40 = (char)((uint)puVar36 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar34) + 0x7c);
  pcVar19 = (char *)CONCAT22(uVar30,CONCAT11(cVar40,cVar34));
  *pbVar16 = *pbVar16 + cVar8;
  bVar5 = (char)piVar17 + 0xa7U & *pbVar23;
  puVar44 = (uint *)((int)puVar46 + *(int *)(pcVar10 + 0x7c));
  *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
  bVar5 = bVar5 + 0x2a;
  pbVar16 = (byte *)CONCAT31(uVar21,bVar5);
  *pbVar16 = *pbVar16 + bVar5;
  *pcVar19 = *pcVar19 + cVar34;
  *pbVar23 = *pbVar23 ^ bVar5;
  *pcVar19 = *pcVar19 + bVar5;
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar5;
  cVar8 = (bVar5 - *pbVar16) - CARRY1(bVar6,bVar5);
  *(byte *)puVar25 = (byte)*puVar25 + (byte)pbVar23;
  cVar40 = cVar40 + pcVar19[0x7b];
  *(char *)CONCAT31(uVar21,cVar8) = *(char *)CONCAT31(uVar21,cVar8) + cVar8;
  pcVar19 = (char *)CONCAT31(uVar21,cVar8 + 'o');
  *pcVar19 = *pcVar19 + cVar8 + 'o';
  pcVar19 = pcVar19 + 0x2ed7fde6;
  cVar4 = (char)pcVar19;
  *pcVar19 = *pcVar19 + cVar4;
  cVar8 = *(char *)(CONCAT22(uVar30,CONCAT11(cVar40,cVar34)) + 0x7b);
  *pcVar19 = *pcVar19 + cVar4;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar19 >> 8),cVar4 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar22 = (undefined3)((uint)pbVar23 >> 8);
  bVar5 = (byte)pbVar23 | (byte)*puVar11;
  pbVar15 = (byte *)CONCAT31(uVar22,bVar5);
  uVar37 = CONCAT22(uVar30,CONCAT11(cVar40 + cVar8,cVar34)) | (uint)puVar11;
  uVar21 = (undefined3)((uint)piVar17 >> 8);
  bVar6 = (byte)piVar17 | *pbVar15;
  pbVar16 = (byte *)CONCAT31(uVar21,bVar6);
  cVar8 = (byte)puVar25 - bVar5;
  puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),cVar8);
  *pbVar16 = *pbVar16 + bVar6;
  puVar46 = puVar11 + 1;
  out(*puVar11,(short)pbVar15);
  *pbVar16 = bVar6;
  *pbVar15 = *pbVar15 + cVar8;
  puVar11 = puVar11 + 2;
  out(*puVar46,(short)pbVar15);
  *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
  puVar36 = (uint *)(CONCAT31((int3)(uVar37 >> 8),(char)uVar37 - (char)((uint)pbVar23 >> 8)) |
                    (uint)puVar11);
  pbVar23 = (byte *)CONCAT31(uVar22,(bVar5 | (byte)*puVar11) + (byte)*puVar44);
  cVar8 = bVar6 - (byte)*puVar44;
  puVar46 = (uint *)CONCAT31(uVar21,cVar8 - *(char *)CONCAT31(uVar21,cVar8));
code_r0x00405090:
  *puVar46 = (uint)(pbVar23 + *puVar46);
  cVar8 = (char)puVar46;
  *(byte *)puVar46 = (byte)*puVar46 + cVar8;
  *(byte *)puVar46 = (byte)*puVar46 + cVar8;
  *(byte *)puVar46 = (byte)*puVar46 + cVar8;
  *puVar25 = *puVar25 - (int)pcVar10;
  uVar37 = *puVar11;
  bVar6 = (byte)pbVar23;
  *(byte *)puVar11 = (byte)*puVar11 + bVar6;
  *(byte *)puVar46 = (byte)*puVar46 + cVar8 + CARRY1((byte)uVar37,bVar6);
  *(byte *)puVar25 = (byte)*puVar25 + cVar8;
  uVar37 = *puVar36;
  *(byte *)puVar36 = (byte)*puVar36 + 0x72;
  *(byte *)puVar36 = (byte)*puVar36;
  cVar8 = (char)((uint)pbVar23 >> 8);
  if (SCARRY1((byte)uVar37,'r')) {
    puVar11 = (uint *)((int)puVar11 + *(int *)(pbVar23 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar11 = (byte)*puVar11 + (char)puVar46;
      uVar21 = (undefined3)((uint)puVar46 >> 8);
      cVar4 = (char)puVar46 + (byte)*puVar36;
      pcVar19 = (char *)CONCAT31(uVar21,cVar4);
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((char)((uint)puVar36 >> 8) +
                                          *(byte *)((int)puVar36 + 0x7b),(char)puVar36));
      *pcVar19 = *pcVar19 + cVar4;
      in_AF = 9 < (cVar4 + 0x6fU & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar21,cVar4 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar37;
      piVar17 = (int *)CONCAT22((short)(uVar37 >> 0x10),
                                CONCAT11((char)((uint)puVar46 >> 8) + in_AF,bVar7));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar21 = (undefined3)((uint)piVar17 >> 8);
      bVar7 = bVar7 | *(byte *)(piVar17 + 0x354a);
      bVar7 = bVar7 - *(char *)CONCAT31(uVar21,bVar7);
      pbVar16 = (byte *)CONCAT31(uVar21,bVar7);
      bVar5 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar7;
      puVar11 = (uint *)((int)puVar11 + (-(uint)CARRY1(bVar5,bVar7) - *(int *)pbVar16));
      puVar46 = (uint *)(pbVar16 + 0xfc00);
      *pbVar23 = *pbVar23 + cVar8;
      uVar37 = *puVar46;
      bVar5 = (byte)puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + bVar5;
      uVar12 = (uint)CARRY1((byte)uVar37,bVar5);
      uVar37 = *puVar36;
      uVar2 = *puVar36;
      *puVar36 = (uint)((byte *)(uVar2 + (int)puVar46) + uVar12);
      if (!CARRY4(uVar37,(uint)puVar46) && !CARRY4(uVar2 + (int)puVar46,uVar12)) break;
      *(byte *)puVar46 = (byte)*puVar46 + bVar5;
    }
  }
  uVar37 = (uint)puVar46 | *puVar46;
  uVar30 = SUB42(pbVar23,0);
  *(byte *)puVar11 = (byte)*puVar11 + (char)uVar37;
  piVar17 = (int *)(uVar37 + 0xc1872);
  if (SCARRY4(uVar37,0xc1872)) {
    cVar4 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar4;
    *pbVar23 = *pbVar23 + cVar4;
    *(char *)piVar17 = *(char *)piVar17 + cVar4;
    *(byte *)puVar36 = (byte)*puVar36 + (char)puVar25;
    *(char *)piVar17 = *(char *)piVar17 + cVar4;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar6;
    puVar46 = puVar11;
    goto code_r0x00405117;
  }
  do {
    uVar37 = *puVar11;
    bVar6 = (byte)piVar17;
    *(byte *)puVar11 = (byte)*puVar11 + bVar6;
    if (CARRY1((byte)uVar37,bVar6)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar21 = (undefined3)((uint)puVar25 >> 8);
      bVar5 = (byte)puVar25 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar25 = (uint *)CONCAT31(uVar21,bVar5 | *(byte *)CONCAT31(uVar21,bVar5));
      uVar21 = (undefined3)((uint)piVar17 >> 8);
      bVar6 = bVar6 | *pbVar23;
      pcVar19 = (char *)CONCAT31(uVar21,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        puVar46 = puVar11 + 1;
        out(*puVar11,uVar30);
        uVar37 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar6);
        *(byte *)puVar46 = (byte)*puVar46 + bVar6;
        pcVar19 = (char *)(uVar37 | 8);
        cVar4 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x7a);
        puVar38 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(cVar4,(char)puVar36));
        *pcVar19 = *pcVar19 + (char)pcVar19;
        cVar8 = (char)pcVar19 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar37 >> 8),cVar8);
        *(char *)piVar17 = (char)*piVar17 + cVar8;
        *(byte *)puVar25 = (byte)*puVar25 + 1;
        puVar11 = puVar11 + 2;
        out(*puVar46,uVar30);
        pbVar23 = (byte *)((uint)pbVar23 ^ uRam08122c04);
        iVar14 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar14 * 2) = *(char *)(iVar14 * 2) - cVar4;
        do {
          bVar6 = (byte)iVar14;
          *(byte *)puVar11 = (byte)*puVar11 + bVar6;
          bVar47 = CARRY1(bVar6,(byte)*puVar38);
          uVar21 = (undefined3)((uint)iVar14 >> 8);
          cVar8 = bVar6 + (byte)*puVar38;
          pbVar16 = (byte *)CONCAT31(uVar21,cVar8);
          uVar30 = in_DS;
          uVar31 = uStack_64;
          if (SCARRY1(bVar6,(byte)*puVar38) == cVar8 < '\0') goto GenerateStatusText;
          *pbVar16 = *pbVar16 + cVar8;
          uVar37 = CONCAT31(uVar21,cVar8 + '\'') + 0x1ebd9f3;
          uStack_68 = (undefined1)uStack_18;
          uStack_67 = (undefined1)((ushort)uStack_18 >> 8);
          piVar17 = (int *)(uVar37 ^ 0x73060000);
          puVar25 = (uint *)((int)puVar25 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11((byte)((uint)puVar38 >> 8) | pcVar10[0x7e],
                                              (char)puVar38));
          cVar8 = (char)uVar37;
          *(char *)piVar17 = (char)*piVar17 + cVar8;
          uVar37 = CONCAT31((int3)((uint)piVar17 >> 8),cVar8 + '\x02');
          bVar47 = 0xd9f2d2da < uVar37;
          iVar14 = uVar37 + 0x260d2d25;
          pcVar19 = pcVar10;
          do {
            uVar21 = (undefined3)((uint)iVar14 >> 8);
            bVar5 = (char)iVar14 + -2 + bVar47;
            pbVar16 = (byte *)CONCAT31(uVar21,bVar5);
            bVar6 = *pbVar16;
            *pbVar16 = *pbVar16 + bVar5;
            bVar7 = (byte)puVar38;
            uStack_64 = uStack_18;
            if (CARRY1(bVar6,bVar5)) {
              *pbVar16 = *pbVar16 + bVar5;
              puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                         CONCAT11((byte)((uint)puVar38 >> 8) | pcVar19[0x7f],bVar7))
              ;
              *pbVar16 = *pbVar16 + bVar5;
              pbVar16 = (byte *)CONCAT31(uVar21,bVar5 + 0x2a);
              *pbVar16 = *pbVar16 + bVar5 + 0x2a;
              *(byte *)puVar38 = (byte)*puVar38 + (char)pbVar23;
              uVar30 = in_DS;
              while( true ) {
                in_DS = uVar30;
                bVar5 = (byte)pbVar16;
                *pbVar23 = *pbVar23 ^ bVar5;
                *pbVar23 = *pbVar23 + (char)puVar38;
                *pbVar16 = *pbVar16 + bVar5;
                *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pbVar23 >> 8);
                bVar6 = *pbVar16;
                *pbVar16 = *pbVar16 + bVar5;
                uVar2 = *puVar38;
                uVar37 = *puVar38;
                *puVar38 = (uint)(pbVar16 + uVar37 + CARRY1(bVar6,bVar5));
                uVar21 = (undefined3)((uint)pbVar16 >> 8);
                if (CARRY4(uVar2,(uint)pbVar16) ||
                    CARRY4((uint)(pbVar16 + uVar37),(uint)CARRY1(bVar6,bVar5))) break;
                *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                pcVar26 = (char *)CONCAT22((short)((uint)puVar25 >> 0x10),
                                           CONCAT11((char)((uint)puVar25 >> 8) + *pbVar16,
                                                    (char)puVar25));
                *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                piVar17 = (int *)CONCAT31(uVar21,bVar5 | (byte)*puVar38);
                puVar25 = puVar11;
                while( true ) {
                  puVar11 = puVar25 + 1;
                  out(*puVar25,(short)pbVar23);
                  pbVar23 = pbVar23 + 1;
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  bVar7 = (byte)((uint)pcVar26 >> 8) | *pbVar23;
                  uVar21 = (undefined3)((uint)piVar17 >> 8);
                  bVar5 = (byte)piVar17 ^ *pbVar23;
                  pcVar20 = (char *)CONCAT31(uVar21,bVar5);
                  cRam282b0000 = cRam282b0000 - bVar7;
                  *pcVar20 = *pcVar20 + bVar5;
                  pcVar10 = pcVar19 + -*(int *)pbVar23;
                  uStack_68 = (undefined1)in_DS;
                  uStack_67 = (undefined1)((ushort)in_DS >> 8);
                  bVar6 = *(byte *)((int)puVar44 + 0x17);
                  *pcVar20 = *pcVar20 + bVar5;
                  puVar25 = (uint *)CONCAT22((short)((uint)pcVar26 >> 0x10),
                                             CONCAT11(bVar7 + bVar6 | *pbVar23,(char)pcVar26));
                  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
                  *(byte *)((int)pcVar20 * 2) = *(byte *)((int)pcVar20 * 2) ^ bVar5;
                  in_AF = 9 < (bVar5 & 0xf) | in_AF;
                  bVar5 = bVar5 + in_AF * -6;
                  pbVar16 = (byte *)CONCAT31(uVar21,bVar5 + (0x9f < bVar5 | in_AF * (bVar5 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
                  *(char *)((int)pbVar16 * 2) =
                       *(char *)((int)pbVar16 * 2) + (char)((uint)pbVar23 >> 8);
                  bVar47 = CARRY1((byte)*puVar25,(byte)pbVar23);
                  *(byte *)puVar25 = (byte)*puVar25 + (byte)pbVar23;
                  uVar30 = in_DS;
                  uVar31 = uStack_18;
GenerateStatusText:
                  in_DS = uVar31;
                  pcVar19 = pcVar10;
                  uStack_64 = in_DS;
                  if (!bVar47) break;
                  *pbVar16 = *pbVar16 + (char)pbVar16;
                  iVar14 = CONCAT31((int3)((uint)puVar25 >> 8),(byte)puVar25 | *pbVar23);
                  uVar30 = (undefined2)((uint)puVar38 >> 0x10);
                  cVar34 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x7d);
                  *pbVar16 = *pbVar16 + (char)pbVar16;
                  *(byte *)puVar44 = (byte)*puVar44 - (char)((uint)puVar25 >> 8);
                  iVar14 = iVar14 - *(int *)(iVar14 + 0xb0a0000);
                  cVar8 = *(char *)(CONCAT22(uVar30,CONCAT11(cVar34,(char)puVar38)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar11,(short)pbVar23);
                  pbVar23 = (byte *)CONCAT22(uStack_66,CONCAT11(uStack_67,uStack_68));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar25 = puVar11 + 2;
                  out(puVar11[1],CONCAT11(uStack_67,uStack_68));
                  pcVar19 = pcVar10 + 1;
                  cVar4 = (char)iVar14;
                  pcVar26 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),
                                             CONCAT11((byte)((uint)iVar14 >> 8) |
                                                      *(byte *)((int)puVar44 + 0x46),cVar4));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_18 = CONCAT11(uStack_67,uStack_68);
                  uVar21 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar25,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar21,0x5f);
                  puVar44 = (uint *)((int)puVar44 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar38 = (uint *)CONCAT22(uVar30,CONCAT11(cVar34 + cVar8 | (byte)puVar11[-0x1e],
                                                             (char)puVar38));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar11 = (uint *)CONCAT31(uVar21,0x8c);
                  puVar25[(int)puVar44 * 2] = (uint)(pbVar23 + puVar25[(int)puVar44 * 2]);
                  uVar37 = *puVar25;
                  *(byte *)puVar25 = (byte)*puVar25 + 0x8c;
                  if ((byte)uVar37 < 0x74) {
                    *pbVar23 = *pbVar23 + cVar4;
                    *(byte *)puVar38 = (byte)*puVar38 >> 1;
                    *(char *)puVar11 = (char)*puVar11 + -0x74;
                    *puVar11 = (uint)(pcVar19 + *puVar11);
                    *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
                    *pbVar23 = *pbVar23 + cVar4;
                    pcVar10[2] = pcVar10[2] - cVar4;
                    *pbVar23 = *pbVar23 + cVar4;
                    pbVar16 = (byte *)CONCAT31(uVar21,0x83);
                    puVar11 = puVar38;
                    goto code_r0x00405312;
                  }
                  *puVar11 = (uint)(*puVar11 + (int)puVar11);
                  piVar17 = (int *)(CONCAT31(uVar21,(byte)puVar11[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar11[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar17 = (int *)((int)piVar17 + *puVar25);
                }
              }
              *pbVar23 = *pbVar23 + bVar5;
              *(byte *)puVar38 = (byte)*puVar38 - (char)pbVar23;
              *pbVar16 = *pbVar16 + bVar5;
              pbVar16 = (byte *)CONCAT31(uVar21,bVar5 | (byte)*puVar38);
            }
            else {
              cVar8 = (char)puVar25;
              *pbVar23 = *pbVar23 + cVar8;
              *(byte **)pbVar16 = pbVar23 + *(int *)pbVar16;
              *pbVar16 = *pbVar16 + bVar5;
              bVar5 = bVar5 + *pbVar16;
              pbVar16 = (byte *)CONCAT31(uVar21,bVar5);
              if (-1 < (char)bVar5) {
                *(byte *)puVar38 = (byte)*puVar38 + bVar7;
                out(*puVar11,(short)pbVar23);
                pbVar23 = pbVar23 + 1;
                *pbVar16 = *pbVar16 + bVar5;
                puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                           bVar7 | (byte)((uint)iVar14 >> 8));
                cVar4 = bVar5 - (byte)*puVar25;
                pcVar10 = (char *)CONCAT31(uVar21,cVar4);
                *pcVar10 = *pcVar10 + cVar4 + (bVar5 < (byte)*puVar25);
                *pbVar23 = *pbVar23 + cVar4;
                pcVar10 = (char *)((int)pcVar10 * 2 + 0x79);
                *pcVar10 = *pcVar10 + (char)((uint)pbVar23 >> 8);
                pbVar16 = (byte *)in((short)pbVar23);
                puVar11 = puVar11 + 1;
              }
              *(byte *)puVar11 = (byte)*puVar11 + cVar8;
              *pbVar16 = *pbVar16 + (char)pbVar16;
              *pbVar16 = *pbVar16 + (char)pbVar16;
              uStack_68 = (undefined1)in_DS;
              uStack_67 = (undefined1)((ushort)in_DS >> 8);
              bVar6 = *pbVar16;
              bVar7 = (byte)((uint)puVar25 >> 8);
              bVar29 = bVar7 + *pbVar16;
              iVar14 = *(int *)pbVar16;
              *pbVar23 = *pbVar23 + cVar8;
              bVar5 = (char)(pbVar16 + (uint)CARRY1(bVar7,bVar6) + iVar14) - (byte)*puVar38;
              pbVar16 = (byte *)CONCAT31((int3)((uint)(pbVar16 + (uint)CARRY1(bVar7,bVar6) + iVar14)
                                               >> 8),bVar5);
              *(byte *)puVar38 = (byte)*puVar38 ^ bVar5;
              *pcVar19 = *pcVar19 + (char)puVar38;
              *pbVar16 = *pbVar16 + bVar5;
              *pbVar16 = *pbVar16 + bVar5;
              *pbVar16 = *pbVar16 + bVar5;
              puVar25 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),
                                         CONCAT11(bVar29 + *pbVar16,cVar8));
              pbVar16 = pbVar16 + (uint)CARRY1(bVar29,*pbVar16) + *(int *)pbVar16;
              *pbVar23 = *pbVar23 + cVar8;
              puVar11 = (uint *)((int)puVar11 + *(int *)(pbVar23 + 0x3e));
            }
            *(byte *)puVar11 = (byte)*puVar11 + (char)pbVar16;
            cVar8 = (char)pbVar16 + 'r';
            puVar11 = (uint *)((int)puVar11 + -1);
            uVar37 = CONCAT31((int3)((uint)pbVar16 >> 8),cVar8);
            *(byte *)puVar11 = *(byte *)puVar11 + cVar8;
            bVar47 = 0xfff38f8d < uVar37;
            iVar14 = uVar37 + 0xc7072;
            pcVar10 = pcVar19;
          } while (SCARRY4(uVar37,0xc7072));
        } while( true );
      }
      *pcVar19 = *pcVar19 + bVar6;
      bVar6 = bVar6 + 0x6f;
      pbVar16 = (byte *)CONCAT31(uVar21,bVar6);
      bVar5 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar6;
      uVar21 = (undefined3)
               ((uint)(pbVar16 + (uint)CARRY1(bVar5,bVar6) + *(int *)((int)puVar25 + (int)pbVar23))
               >> 8);
      cVar4 = (char)(pbVar16 + (uint)CARRY1(bVar5,bVar6) + *(int *)((int)puVar25 + (int)pbVar23)) +
              'E';
      pcVar19 = (char *)CONCAT31(uVar21,cVar4);
      *pcVar19 = *pcVar19 + cVar4;
      cVar4 = cVar4 + *pcVar19;
      pcVar19 = (char *)CONCAT31(uVar21,cVar4);
      *pcVar19 = *pcVar19 + cVar4;
      puVar46 = (uint *)CONCAT31(uVar21,cVar4 + *pcVar19);
      *(char *)puVar46 = (char)*puVar46 + cVar4 + *pcVar19;
      pbVar16 = (byte *)((uint)puVar46 | *puVar46);
      bVar6 = *pbVar16;
      bVar5 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar5;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar5 + CARRY1(bVar6,bVar5));
      puVar46 = puVar11;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar36 = (uint *)((int)puVar36 - *puVar36);
      puVar11 = puVar46 + 1;
      out(*puVar46,uVar30);
    }
    *pbVar23 = *pbVar23 + (char)puVar25;
    bVar47 = puVar36 < (uint *)*piVar17;
    puVar36 = (uint *)((int)puVar36 - *piVar17);
    bVar6 = (byte)((uint)puVar25 >> 8);
    *(byte *)((int)puVar44 + 0x39) = (*(byte *)((int)puVar44 + 0x39) - bVar6) - bVar47;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar37 = *puVar36;
    *(int *)((int)puVar44 + 0x39) = *(int *)((int)puVar44 + 0x39) - (int)pcVar10;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar25 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),
                               CONCAT11(bVar6 | (byte)uVar37 | (byte)*puVar36,(char)puVar25));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar8;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar6 = (char)piVar17 + 0x28;
  pbVar16 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar6);
  *pbVar16 = *pbVar16 ^ bVar6;
  *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pcVar26 >> 8);
  bVar6 = *pbVar23;
  *pbVar23 = *pbVar23 + (byte)pcVar26;
  piVar17 = (int *)(((uint)pbVar16 | 0x1496f09) + *puVar44 + (uint)CARRY1(bVar6,(byte)pcVar26));
  puVar46 = puVar25 + 1;
  out(*puVar25,(short)pbVar23);
  pbVar15 = pbVar23 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(byte)pbVar15 | (byte)*puVar38);
  cVar8 = (char)piVar17 + '\x13';
  pbVar16 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar8);
  puVar11 = puVar38;
  puVar25 = puVar46;
  if ((POPCOUNT(cVar8) & 1U) != 0) {
    *pbVar23 = *pbVar23 - (char)((uint)pbVar15 >> 8);
    *pbVar16 = *pbVar16 + cVar8;
code_r0x00405396:
    bVar6 = *pbVar16;
    bVar5 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar5;
    *puVar46 = (uint)(pbVar16 + (uint)CARRY1(bVar6,bVar5) + *puVar46);
    out(*puVar46,(short)pbVar23);
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    pcVar10 = (char *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11((byte)((uint)pbVar16 >> 8) | (byte)puVar46[1],bVar5));
    *(char **)((int)puVar44 + -1) = pcVar10 + *(int *)((int)puVar44 + -1);
    out(puVar46[1],(short)pbVar23);
    *pcVar10 = *pcVar10 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar16 = *pbVar16 + (char)pbVar16;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + 'o');
  puVar38 = (uint *)((int)puVar11 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar21 = (undefined3)((uint)pbVar23 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar7 = (byte)pbVar23 | *(byte *)puVar38 | *(byte *)puVar38;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*puVar25,(short)CONCAT31(uVar21,bVar7));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar7 = bVar7 | (byte)piVar17;
  iVar33 = CONCAT31(uVar21,bVar7);
  pbVar23 = (byte *)((int)piVar17 - *piVar17);
  cVar8 = (char)pbVar23;
  *pcVar26 = *pcVar26 + cVar8;
  cVar4 = (char)pcVar26 - bVar7;
  *pbVar23 = *pbVar23 + cVar8;
  uVar30 = (undefined2)((uint)pcVar26 >> 0x10);
  bVar5 = (byte)((uint)pcVar26 >> 8) | *pbVar23;
  pcVar19 = pcVar19 + -1;
  *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
  bVar6 = *(byte *)(CONCAT22(uVar30,CONCAT11(bVar5,cVar4)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar23;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar19;
  *pbVar23 = *pbVar23 + cVar8;
  bVar6 = bVar5 | bVar6 | *(byte *)puVar38;
  iVar27 = CONCAT22(uVar30,CONCAT11(bVar6,cVar4));
  pbVar15 = (byte *)((uint)(puVar25 + 1) ^ *(uint *)(iVar33 + -0x43));
  iVar14 = *(int *)pbVar23;
  *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
  if (SCARRY4(iVar14,(int)pbVar23)) {
    *pbVar23 = *pbVar23 + cVar8;
  }
  pbVar16 = pbVar23 + 0x5674;
  puVar44 = (uint *)((int)puVar44 +
                    (-(uint)((byte *)0xffffa98b < pbVar23) - *(int *)(pbVar15 + -0x7f)));
  bVar5 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar5;
  uVar22 = (undefined3)((uint)pbVar16 >> 8);
  bVar29 = bVar5 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar22,bVar29);
  *(uint *)(pbVar15 + (int)puVar44 * 8) =
       *(int *)(pbVar15 + (int)puVar44 * 8) + iVar33 + (uint)(0xd2 < bVar5);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar29;
  if (!CARRY1(bVar5,bVar29)) {
    do {
      pbVar16 = (byte *)(iVar33 + 1);
      bVar5 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar5;
      bVar7 = (byte)((uint)piVar17 >> 8);
      bVar29 = (byte)puVar38 | bVar7;
      puVar11 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar29);
      out(*(undefined4 *)pbVar15,(short)pbVar16);
      *(byte *)piVar17 = (char)*piVar17 + bVar5;
      uVar30 = (undefined2)((uint)iVar27 >> 0x10);
      cVar8 = (char)iVar27;
      pbVar23 = (byte *)CONCAT22(uVar30,CONCAT11((byte)((uint)iVar27 >> 8) | *pbVar16,cVar8));
      bVar6 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar5;
      *(byte *)piVar17 = (char)*piVar17 + bVar5 + CARRY1(bVar6,bVar5);
      *pbVar16 = *pbVar16 + bVar5;
      *(byte *)puVar44 = (byte)*puVar44 + bVar7;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar30,CONCAT11(0x1c,cVar8));
      *(byte *)piVar17 = (char)*piVar17 + bVar5;
      cVar4 = (char)pbVar16;
      *(byte *)puVar11 = (byte)*puVar11 + cVar4;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar5;
      *(byte *)piVar17 = (char)*piVar17 + bVar5;
      pbVar23 = pbVar15 + 8;
      out(*(undefined4 *)(pbVar15 + 4),(short)pbVar16);
      piVar17 = (int *)0xa0a0000;
      *pbVar16 = *pbVar16;
      bVar5 = cVar8 - cVar4;
      iVar27 = CONCAT22(uVar30,CONCAT11((byte)puVar44[0x14] | 0x1c | bRam0ca87216,bVar5));
      *pbVar16 = *pbVar16;
      bVar6 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar5;
      if (!CARRY1(bVar6,bVar5)) {
        piVar17 = (int *)0x1e7b7000;
        bVar6 = (byte)((uint)puVar38 >> 8) | *(byte *)(iVar33 + 3);
        puVar11 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar6,bVar29));
        if (bVar6 != 0) {
          pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar4 + pbVar23[(int)puVar44 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar27 = iVar27 + 1;
        }
      }
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      iVar33 = CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | pbVar23[(int)puVar44 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar44 = (uint)((int)piVar17 + *puVar44 + 1);
      pbVar15 = pbVar15 + 0xc;
      out(*(undefined4 *)pbVar23,(short)iVar33);
      puVar38 = puVar11;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar29 = bVar29 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar22,bVar29);
  if ('\0' < (char)bVar29) {
    *(byte *)piVar17 = (char)*piVar17 + bVar29;
    puVar25 = (uint *)CONCAT31(uVar22,bVar29 + 0x28);
    *puVar25 = *puVar25 ^ (uint)puVar25;
    *(byte *)puVar38 = *(byte *)puVar38 + bVar6;
    cVar8 = (bVar29 + 0x28) - bVar6;
    pcVar10 = (char *)CONCAT31(uVar22,cVar8);
    *pcVar10 = *pcVar10 + cVar8;
    pbVar23 = (byte *)CONCAT31(uVar21,bVar7 | *(byte *)puVar38);
    pcVar19 = (char *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((char)((uint)puVar38 >> 8) + *(byte *)((int)puVar11 + 0x7d),
                                        (char)puVar38));
    *pcVar10 = *pcVar10 + cVar8;
    pbVar16 = (byte *)CONCAT31(uVar22,cVar8 + 0x39U ^ *(byte *)CONCAT31(uVar22,cVar8 + 0x39U));
    *pcVar19 = *pcVar19 + bVar6;
    puVar46 = (uint *)(pbVar15 + 4);
    out(*(undefined4 *)pbVar15,(short)pbVar23);
    goto code_r0x00405396;
  }
  puVar25 = (uint *)(pbVar15 + 4);
  out(*(undefined4 *)pbVar15,(short)iVar33);
  pcVar26 = (char *)(iVar27 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar23 = (byte *)CONCAT31(uVar21,bVar7 | *(byte *)puVar38);
  goto code_r0x004052ee;
}


