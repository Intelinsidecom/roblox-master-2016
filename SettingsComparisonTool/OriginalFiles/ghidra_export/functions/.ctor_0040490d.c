/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040490d
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(uint * param_1, uint * param_2, byte * param_3, byte * param_4, uint * param_5, uint * param_6, uint * param_7, char * param_8, uint * param_9)
 * Local Vars  : param_1, param_2, param_3, param_4, uStack_67, param_5, uStack_68, param_6, uStack_64, param_7, uStack_66, param_8, puStack_24, param_9, uStack_28, puStack_10, uStack_18, pbStack_8, pbStack_c, uVar1, iStack_4, uVar3, uVar2, cVar5, bVar4, cVar7, bVar6, in_EAX, uVar8, puVar10, pbVar9, puVar12, pcVar11, puVar14, uVar13, pbVar16, iVar15, puVar18, piVar17, puVar20, pbVar19, uVar22, pcVar21, iVar24, uVar23, cVar26, bVar25, uVar28, bVar27, bVar30, uVar29, bVar32, iVar31, cVar34, cVar33, pbVar35, unaff_EBX, uVar37, puVar36, ppbVar39, cVar38, ppbVar40, unaff_EBP, pbVar42, ppbVar41, pbVar43, unaff_ESI, puVar44, unaff_EDI, in_SS, in_ES, bVar45, in_DS, unaff_retaddr, in_AF, ppbVar46
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
_ctor(uint *param_1,uint *param_2,byte *param_3,byte *param_4,uint *param_5,uint *param_6,
     uint *param_7,char *param_8,uint *param_9)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  byte *in_EAX;
  byte *pbVar9;
  undefined3 uVar22;
  ushort *puVar10;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  byte *pbVar16;
  int *piVar17;
  uint *puVar18;
  byte *pbVar19;
  uint *puVar20;
  undefined3 uVar23;
  char *pcVar21;
  byte bVar25;
  char cVar26;
  byte bVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  int iVar24;
  byte bVar30;
  byte bVar32;
  int iVar31;
  char cVar33;
  char cVar34;
  char cVar38;
  uint *unaff_EBX;
  byte *pbVar35;
  uint *puVar36;
  uint uVar37;
  byte **ppbVar39;
  byte *unaff_EBP;
  byte **ppbVar40;
  byte **ppbVar41;
  byte *pbVar42;
  byte *unaff_ESI;
  byte *pbVar43;
  uint *unaff_EDI;
  uint *puVar44;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar45;
  byte in_AF;
  byte **unaff_retaddr;
  byte **ppbVar46;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_28;
  uint *puStack_24;
  undefined2 uStack_18;
  uint *puStack_10;
  byte *pbStack_c;
  byte *pbStack_8;
  int iStack_4;
  
  do {
                    /* .NET CLR Managed Code */
    bVar4 = (byte)((uint)param_1 >> 8);
    uVar28 = (undefined2)((uint)param_1 >> 0x10);
    cVar5 = (char)param_1;
    bVar25 = bVar4 + *in_EAX;
    pbVar9 = in_EAX + (uint)CARRY1(bVar4,*in_EAX) + *(int *)in_EAX;
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    cVar33 = (char)unaff_EBX - *unaff_ESI;
    bVar4 = *pbVar9;
    cVar26 = bVar25 + *pbVar9;
    pcVar21 = (char *)CONCAT22(uVar28,CONCAT11(cVar26,cVar5));
    iVar15 = *(int *)pbVar9;
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    uVar22 = (undefined3)((uint)(pbVar9 + (uint)CARRY1(bVar25,bVar4) + iVar15) >> 8);
    bVar4 = (char)(pbVar9 + (uint)CARRY1(bVar25,bVar4) + iVar15) - *(byte *)((int)param_2 + 3);
    pcVar11 = (char *)CONCAT31(uVar22,bVar4);
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar33) +
                                                   -0x3a),cVar33));
    *pcVar11 = *pcVar11 + bVar4;
    pcVar11 = (char *)CONCAT31(uVar22,bVar4 + 0x6f);
    *pcVar21 = (*pcVar21 - (bVar4 + 0x6f)) - (0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    iStack_4 = CONCAT22(iStack_4._2_2_,in_SS);
    *pcVar21 = *pcVar21 + '\x01';
    cVar26 = cVar26 - unaff_ESI[2];
    param_1 = (uint *)CONCAT22(uVar28,CONCAT11(cVar26,cVar5));
    if ((POPCOUNT(cVar26) & 1U) != 0) {
      pcVar11 = pcVar11 + -0x1b7e2606;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar11 >> 8) | (byte)param_2[0x30dbc2],
                                          (char)pcVar11));
      cVar5 = cRam00c36f08;
      goto code_r0x00404903;
    }
code_r0x00404931:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar5 = (char)pcVar11 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5);
    pbVar9 = unaff_ESI;
    if ((POPCOUNT(cVar5) & 1U) == 0) goto code_r0x00404937;
code_r0x00404903:
    cRam00c36f08 = cVar5;
    bVar4 = *unaff_ESI;
    cVar5 = (char)pcVar11;
    *unaff_ESI = *unaff_ESI + cVar5;
    uVar28 = (undefined2)((uint)unaff_retaddr >> 0x10);
    unaff_retaddr = (byte **)CONCAT22(uVar28,in_ES);
    if (SCARRY1(bVar4,cVar5) == (char)*unaff_ESI < '\0') {
      pcVar11[(int)unaff_EBP] = pcVar11[(int)unaff_EBP] + cVar5;
      do {
        *(char *)param_9 = (char)*param_9 + (char)param_9;
        param_1 = (uint *)CONCAT22((short)((uint)param_8 >> 0x10),
                                   CONCAT11((byte)((uint)param_8 >> 8) | param_8[(int)param_3],
                                            (char)param_8));
        unaff_EDI = (uint *)((int)unaff_retaddr + *(int *)((int)param_6 + 0x71));
        puVar12 = param_9;
        param_2 = param_7;
        unaff_EBX = param_6;
        pbVar9 = param_3;
        while( true ) {
          cVar5 = (char)puVar12;
          *(byte *)puVar12 = (byte)*puVar12 + cVar5;
          uVar22 = (undefined3)((uint)puVar12 >> 8);
          cVar26 = cVar5 + '\x02';
          puVar10 = (ushort *)CONCAT31(uVar22,cVar26);
          unaff_EBP = param_4;
          pbVar43 = pbVar9;
          if ((POPCOUNT(cVar26) & 1U) != 0) goto code_r0x0040495b;
          *(char *)puVar10 = (char)*puVar10 + cVar26;
          bVar25 = cVar5 + 0x7d;
          iVar15 = CONCAT31(uVar22,bVar25);
          pbVar43 = param_4 + iVar15;
          bVar4 = *pbVar43;
          *pbVar43 = *pbVar43 + bVar25;
          uVar37 = *param_1;
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          pcVar11 = (char *)(((iVar15 - uVar37) - (uint)CARRY1(bVar4,bVar25)) + -0x727b0317);
          cVar5 = (char)pcVar11;
          *pcVar11 = *pcVar11 + cVar5;
          uVar22 = (undefined3)((uint)pcVar11 >> 8);
          cVar26 = cVar5 + '\x02';
          pcVar11 = (char *)CONCAT31(uVar22,cVar26);
          if ((POPCOUNT(cVar26) & 1U) != 0) break;
          *pcVar11 = *pcVar11 + cVar26;
          bVar25 = cVar5 + 0x7d;
          iVar15 = CONCAT31(uVar22,bVar25);
          pbVar43 = param_4 + iVar15;
          bVar4 = *pbVar43;
          *pbVar43 = *pbVar43 + bVar25;
          puVar12 = (uint *)((iVar15 - *param_1) - (uint)CARRY1(bVar4,bVar25));
          puVar44 = param_2;
          pbVar43 = pbVar9;
code_r0x004049b4:
          pbVar9 = pbVar43;
          *(byte *)puVar44 = (byte)*puVar44 + (char)param_1;
          param_2 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                                     ((char)puVar44 - (byte)*unaff_EDI) - *pbVar9);
          bVar25 = pbVar9[0x72];
          *puVar12 = *puVar12 & (uint)param_1;
          pbVar43 = (byte *)((int)puVar12 + 2);
          *pbVar43 = *pbVar43 + (char)((uint)puVar44 >> 8);
          bVar4 = *pbVar43;
          puVar20 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar25);
          while (unaff_EBX = puVar20, (POPCOUNT(bVar4) & 1U) == 0) {
            cVar5 = (char)puVar12;
            *(byte *)puVar12 = (byte)*puVar12 + cVar5;
            uVar22 = (undefined3)((uint)puVar12 >> 8);
            cVar26 = cVar5 + '\x03';
            pbVar16 = (byte *)CONCAT31(uVar22,cVar26);
            pbVar43 = pbVar9 + 4;
            out(*(undefined4 *)pbVar9,(short)param_2);
            in_SS = SUB42(unaff_retaddr,0);
            *pbVar16 = *pbVar16 + cVar26;
            cVar33 = (char)param_1;
            param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                       CONCAT11((byte)((uint)param_1 >> 8) | *pbVar16,cVar33));
            *(int *)pbVar16 = *(int *)pbVar16 - (int)pbVar16;
            *(byte *)param_2 = (byte)*param_2 + cVar33;
            cVar33 = (char)puVar20 - pbVar9[6];
            unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),cVar33);
            if ((POPCOUNT(cVar33) & 1U) != 0) {
              pbVar9 = (byte *)((int)unaff_EDI + (int)param_4 * 2);
              *pbVar9 = *pbVar9 + cVar26;
              ppbVar41 = (byte **)param_4;
              goto code_r0x00404a51;
            }
            *pbVar16 = *pbVar16 + cVar26;
            puVar12 = (uint *)CONCAT31(uVar22,cVar5 + 'r');
            *(byte *)puVar12 = (byte)*puVar12;
            pbVar9 = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
            do {
              unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
              bVar4 = (byte)puVar12;
              *(byte *)puVar12 = (byte)*puVar12 + bVar4;
              uVar22 = (undefined3)((uint)puVar12 >> 8);
              bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
              puVar12 = (uint *)CONCAT31(uVar22,bVar4);
              cVar5 = (char)param_1;
              *(byte *)param_2 = (byte)*param_2 + cVar5;
              bVar25 = (char)((uint)param_1 >> 8) - pbVar43[2];
              param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar25,cVar5));
              puVar44 = param_2;
              unaff_retaddr = (byte **)pbVar9;
              if ((POPCOUNT(bVar25) & 1U) != 0) goto code_r0x004049b4;
              *(byte *)puVar12 = (byte)*puVar12 + bVar4;
              bVar6 = bVar4 + 2;
              puVar12 = (uint *)CONCAT31(uVar22,bVar6);
              ppbVar40 = (byte **)param_4;
              if ((POPCOUNT(bVar6) & 1U) == 0) goto code_r0x004049f5;
              pbVar43 = pbVar9;
            } while (0xfd < bVar4);
            *(byte *)puVar12 = (byte)*puVar12 | bVar6;
            puVar20 = unaff_EBX;
            bVar4 = (byte)*puVar12;
          }
        }
        while( true ) {
          cVar5 = (char)pcVar11;
          *pcVar11 = *pcVar11 + cVar5;
          uVar22 = (undefined3)((uint)pcVar11 >> 8);
          cVar26 = cVar5 + '\x02';
          pcVar11 = (char *)CONCAT31(uVar22,cVar26);
          if ((POPCOUNT(cVar26) & 1U) == 0) break;
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          iStack_4 = CONCAT22(iStack_4._2_2_,in_SS);
code_r0x00404937:
          bVar4 = (byte)pcVar11;
          *pcVar11 = *pcVar11 + bVar4;
          uVar22 = (undefined3)((uint)pcVar11 >> 8);
          piVar17 = (int *)CONCAT31(uVar22,bVar4 + 0x6f);
          *param_1 = (*param_1 - (int)piVar17) - (uint)(0x90 < bVar4);
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          iVar15 = *(int *)((int)unaff_EDI + 0x1a);
          *piVar17 = *piVar17 + (int)piVar17;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar9);
          *(byte *)param_1 = (byte)*param_1 + 1;
          bVar4 = (bVar4 + 0x6f) - (char)*piVar17;
          pbVar43 = (byte *)CONCAT31(uVar22,bVar4);
          *pbVar43 = *pbVar43 + bVar4;
          iVar24 = *(int *)pbVar43;
          cVar5 = bVar4 + *pbVar43;
          puVar10 = (ushort *)CONCAT31(uVar22,cVar5);
          *puVar10 = *puVar10 +
                     (ushort)CARRY1(bVar4,*pbVar43) * (((ushort)puVar10 & 3) - (*puVar10 & 3));
          *(char *)puVar10 = (char)*puVar10 + cVar5;
          *(char *)puVar10 = (char)*puVar10 + cVar5;
          *(char *)puVar10 = (char)*puVar10 + cVar5;
          unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
          unaff_EBP = unaff_EBP + iVar15;
          pbVar43 = pbVar9 + iVar24;
code_r0x0040495b:
          pbVar9 = (byte *)unaff_retaddr;
          cVar5 = (char)puVar10;
          *(char *)puVar10 = (char)*puVar10 + cVar5;
          uVar22 = (undefined3)((uint)puVar10 >> 8);
          cVar26 = cVar5 + '\x02';
          pcVar11 = (char *)CONCAT31(uVar22,cVar26);
          unaff_retaddr = (byte **)pbVar9;
          if ((POPCOUNT(cVar26) & 1U) != 0) {
            *param_2 = (uint)(unaff_EBP + *param_2);
            unaff_ESI = pbVar43 + 1;
            out(*pbVar43,(short)param_2);
            unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                  *(char *)((int)unaff_EBX + -0x3b),(char)unaff_EBX)
                                        );
            goto code_r0x00404931;
          }
          *pcVar11 = *pcVar11 + cVar26;
          unaff_EBP[CONCAT31(uVar22,cVar5 + '}')] =
               unaff_EBP[CONCAT31(uVar22,cVar5 + '}')] + cVar5 + '}';
          *param_8 = *param_8 + (char)param_8;
          param_1 = (uint *)CONCAT22((short)((uint)param_7 >> 0x10),
                                     CONCAT11((byte)((uint)param_7 >> 8) |
                                              *(byte *)((int)param_7 * 3),(char)param_7));
          unaff_EDI = (uint *)(iStack_4 + *(int *)((int)param_5 + 0x6f));
          pcVar11 = param_8;
          param_2 = param_6;
          unaff_EBX = param_5;
          unaff_EBP = param_3;
        }
        *pcVar11 = *pcVar11 + cVar26;
        pcVar11 = (char *)CONCAT31(uVar22,cVar5 + '}');
        out(*(undefined4 *)pbVar9,(short)param_2);
        *pcVar11 = *pcVar11 + cVar5 + '}';
      } while( true );
    }
    *pcVar11 = *pcVar11 + cVar5;
    in_EAX = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5 + '*');
    unaff_retaddr = (byte **)CONCAT22(uVar28,in_DS);
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar4;
    uVar22 = (undefined3)((uint)puVar12 >> 8);
    bVar6 = bVar4 + 0x6f;
    pbVar16 = (byte *)CONCAT31(uVar22,bVar6);
    *param_1 = (*param_1 - (int)pbVar16) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    pbVar9 = (byte *)((int)ppbVar40 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    uVar23 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | *pbVar43;
    param_2 = (uint *)CONCAT31(uVar23,bVar4);
    *(byte *)param_1 = (byte)*param_1 + 1;
    cVar26 = bVar6 - *pbVar16;
    pbVar43 = pbVar43 + (-(uint)(bVar6 < *pbVar16) - *(int *)CONCAT31(uVar22,cVar26));
    uVar13 = CONCAT31(uVar22,cVar26 + *(char *)CONCAT31(uVar22,cVar26));
    bVar45 = CARRY1(bRam14110000,bVar25);
    bRam14110000 = bRam14110000 + bVar25;
    puVar12 = (uint *)((int)unaff_EBX + (int)pbVar43 * 2);
    uVar37 = *puVar12;
    uVar2 = uVar13 + *puVar12;
    puVar14 = (undefined4 *)(uVar2 + bVar45);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar14 = uVar1;
    iStack_4 = CONCAT22(iStack_4._2_2_,in_ES);
    uVar37 = (uint)(CARRY4(uVar13,uVar37) || CARRY4(uVar2,(uint)bVar45));
    puVar12 = (uint *)((int)puVar14 + uRam7d020511 + uVar37);
    unaff_retaddr = &pbStack_8;
    ppbVar46 = &pbStack_8;
    ppbVar39 = &pbStack_8;
    ppbVar41 = &pbStack_8;
    ppbVar40 = &pbStack_8;
    pbStack_8 = pbVar9;
    cVar26 = '\x03';
    do {
      pbVar9 = pbVar9 + -4;
      ppbVar39 = ppbVar39 + -1;
      *ppbVar39 = (byte *)*(undefined4 *)pbVar9;
      cVar26 = cVar26 + -1;
    } while ('\0' < cVar26);
    pbRam00c82802 =
         (byte *)((int)puVar12 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar14,uRam7d020511) ||
                      CARRY4((int)puVar14 + uRam7d020511,uVar37))));
    bVar6 = *pbVar43;
    cVar26 = (char)puVar12;
    *pbVar43 = *pbVar43 + cVar26;
  } while (SCARRY1(bVar6,cVar26) == (char)*pbVar43 < '\0');
  *(byte *)puVar12 = (byte)*puVar12 + cVar26;
  iVar15 = CONCAT31((int3)((uint)puVar12 >> 8),cVar26 + '\x11') + 0xc57b;
  bVar25 = (byte)iVar15;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar23,bVar4 + (byte)*param_1);
  iVar15 = (CONCAT31((int3)((uint)iVar15 >> 8),bVar25 + 0x6f) - (uint)(0x90 < bVar25)) + -0x18093a86
  ;
  cVar26 = (char)iVar15;
  uVar22 = (undefined3)((uint)iVar15 >> 8);
  cVar5 = cVar26 + '\x02';
  pbVar9 = (byte *)CONCAT31(uVar22,cVar5);
  if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar9 = *pbVar9 + cVar5;
  pbVar16 = (byte *)CONCAT31(uVar22,cVar26 + 'q');
  ppbVar41 = &pbStack_8;
code_r0x00404a51:
  pbVar9 = pbVar16 + 1;
  cVar5 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cVar5;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11((char)((uint)puVar20 >> 8) - cVar5,cVar33));
  *pbVar9 = *pbVar9 + cVar5;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*param_1);
  pbVar16 = pbVar16 + 0x757b03;
  pbVar9 = (byte *)((int)unaff_EDI + (int)ppbVar41 * 2);
  cVar5 = (char)pbVar16;
  *pbVar9 = *pbVar9 + cVar5;
  *pbVar16 = *pbVar16 + cVar5;
  *pbVar43 = *pbVar43 - (char)((uint)pbVar16 >> 8);
  *pbVar16 = *pbVar16 + cVar5;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppbVar41 + -0x3a));
  *pbVar16 = *pbVar16 + cVar5;
  pbVar9 = (byte *)(CONCAT31((int3)((uint)pbVar16 >> 8),cVar5 + '\x11') + 0x757b02);
  pbVar16 = (byte *)((int)unaff_EDI + (int)ppbVar41 * 2);
  bVar25 = (byte)pbVar9;
  *pbVar16 = *pbVar16 + bVar25;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar25;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
  pbRam011006fe = pbVar9 + (int)(pbRam011006fe + CARRY1(bVar4,bVar25));
  bVar4 = *pbVar43;
  *pbVar43 = *pbVar43 + bVar25;
  ppbVar46 = unaff_retaddr;
  if (!CARRY1(bVar4,bVar25)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    bVar6 = (byte)param_1;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | *pbVar9,bVar6));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar22 = (undefined3)((uint)pbVar9 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar5 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar11 = (char *)CONCAT31(uVar22,cVar5);
    *pcVar11 = *pcVar11 + cVar5;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppbVar41 + -0x39));
    *pcVar11 = *pcVar11 + cVar5;
    iVar15 = CONCAT31(uVar22,cVar5 + '\x11') + 0xc57b;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar15;
    bVar25 = bVar4 + 0x6f;
    pbVar9 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar25);
    *param_1 = (*param_1 - (int)pbVar9) - (uint)(0x90 < bVar4);
    uVar37 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    pbRam011106fe = pbVar9 + (int)(pbRam011106fe + CARRY1((byte)uVar37,bVar6));
    bVar4 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar25;
    if (!CARRY1(bVar4,bVar25)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    bVar4 = (byte)param_1;
    bVar25 = (byte)((uint)param_1 >> 8) | *pbVar9;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar25,bVar4));
    *pbVar9 = *pbVar9 - (char)pbVar9;
    *(byte *)unaff_EBX = (char)*unaff_EBX + bVar25;
    out(*(undefined4 *)pbVar43,(short)param_2);
    *param_1 = *param_1 & (uint)pbVar9;
    uVar37 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar4;
    pbVar9 = pbVar9 + (uint)CARRY1((byte)uVar37,bVar4) + *(int *)(pbVar43 + 4);
    *pbVar9 = *pbVar9 + (char)pbVar9;
    *(byte *)param_1 = (byte)*param_1 + (char)param_2;
    pbVar43 = pbVar43 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar43,(short)param_2);
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 & (byte)*param_1);
      *(byte *)param_2 = (byte)*param_2 + (char)param_1;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[5],
                                          (char)param_2));
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      pbVar43 = pbVar43 + 4;
code_r0x00404ad4:
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
      pbVar9 = (byte *)((uint)pbVar9 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar9;
code_r0x00404add:
      bVar4 = (byte)pbVar9;
      uVar22 = (undefined3)((uint)pbVar9 >> 8);
      cVar5 = bVar4 + 8;
      pbVar9 = (byte *)CONCAT31(uVar22,cVar5);
      if (SCARRY1(bVar4,'\b') == cVar5 < '\0') break;
      *pbVar9 = *pbVar9 + cVar5;
      cVar5 = bVar4 + 10;
      piVar17 = (int *)CONCAT31(uVar22,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      puVar12 = (uint *)CONCAT31(uVar22,bVar4 + 0x7c);
      *puVar12 = *puVar12 & (uint)param_1;
      *(char *)((int)puVar12 + 0x11) = *(char *)((int)puVar12 + 0x11) + (char)((uint)param_2 >> 8);
      cVar5 = (char)((int)puVar12 + 0xc67b);
      uVar22 = (undefined3)((uint)((int)puVar12 + 0xc67b) >> 8);
      bVar4 = cVar5 + 8;
      pbVar9 = (byte *)CONCAT31(uVar22,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar9 = *pbVar9 + bVar4;
        cRam02060000 = cVar5 + 'w';
        puVar12 = (uint *)CONCAT31(uVar22,cRam02060000);
        *(byte *)puVar12 = (byte)*puVar12 + cRam02060000;
        cVar5 = (char)param_1;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar12,cVar5));
        *puVar12 = *puVar12 - (int)puVar12;
        *(byte *)param_2 = (byte)*param_2 + cVar5;
        pbVar9 = pbVar43 + 4;
        out(*(undefined4 *)pbVar43,(short)param_2);
        pbVar43 = pbVar9;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar11 = (char *)((uint)puVar12 | *puVar12);
        goto code_r0x00404b89;
      }
      bVar25 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar4;
      *(byte **)pbVar43 = pbVar9 + (uint)CARRY1(bVar25,bVar4) + *(int *)pbVar43;
    }
    *pbVar43 = *pbVar43 + 1;
    *param_1 = (uint)(pbVar9 + (uint)(0xf7 < bVar4) + *param_1);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),(char)puVar12 + 'r');
    piVar17 = (int *)((uint)puVar12 | *puVar12);
    param_2 = puStack_24;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar15 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar15;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),bVar4 + 0x6f);
    *param_1 = (*param_1 - iVar15) - (uint)(0x90 < bVar4);
    cVar5 = (char)param_1;
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    bVar25 = (byte)((uint)unaff_EBX >> 8);
    bVar32 = (byte)((uint)param_2 >> 8) | bVar25;
    pcVar21 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar32,(byte)param_2));
    piVar17 = (int *)(iVar15 + 0x73060001);
    *(byte *)param_1 = (byte)*param_1 & (byte)piVar17;
    *pcVar21 = *pcVar21 + cVar5;
    bVar6 = (byte)((uint)param_1 >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar6;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar15 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *(byte *)unaff_EBX = (char)*unaff_EBX + bVar6;
    pcVar11 = (char *)((uint)piVar17 | *unaff_EDI);
    *pcVar21 = *pcVar21 - bVar6;
    bVar4 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar4;
    ppbVar41 = (byte **)(((int)ppbVar41 - iVar15) - *(int *)(pcVar11 + ((int)ppbVar41 - iVar15)));
    uVar28 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar27 = (byte)unaff_EBX;
    cVar26 = bVar25 + *(char *)((int)unaff_EBX + 0x76);
    pbVar16 = (byte *)CONCAT22(uVar28,CONCAT11(cVar26,bVar27));
    *pcVar11 = *pcVar11 + bVar4;
    uVar22 = (undefined3)((uint)pcVar11 >> 8);
    uVar13 = CONCAT31(uVar22,bVar4 + 7);
    puVar12 = (uint *)((int)ppbVar41 + -0x1faeef1);
    uVar37 = *puVar12;
    uVar2 = *puVar12 + uVar13;
    *puVar12 = uVar2 + (0xf8 < bVar4);
    puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
    puVar44 = puStack_24;
    bVar25 = bVar4 + 7 + (byte)*param_1 +
             (CARRY4(uVar37,uVar13) || CARRY4(uVar2,(uint)(0xf8 < bVar4)));
    puVar12 = (uint *)CONCAT31(uVar22,bVar25);
    bVar4 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar25;
    if (CARRY1(bVar4,bVar25)) break;
    *(byte *)puVar12 = (byte)*puVar12 + bVar25;
    unaff_EBX = (uint *)CONCAT22(uVar28,CONCAT11(cVar26 + pbVar16[0x76],bVar27));
    uStack_28 = in_ES;
  }
  *(byte *)puVar12 = (byte)*puVar12 + bVar25;
  uVar23 = (undefined3)((uint)pcVar21 >> 8);
  bVar30 = (byte)param_2 | *pbVar16;
  param_2 = (uint *)CONCAT31(uVar23,bVar30);
  pcRam2b060000 = (char *)CONCAT31(uVar22,bVar25 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar25 + 0x39)) - (0xd7 < (byte)(bVar25 + 0x11));
  bVar4 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar6;
  pbVar9 = pbVar43 + 4;
  out(*(undefined4 *)pbVar43,(short)param_2);
  bVar4 = (bVar25 + 0x37) - CARRY1(bVar4,bVar6);
  piVar17 = (int *)CONCAT31(uVar22,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    iVar15 = CONCAT31(uVar22,bVar4 + 0x11) + 0xc77b;
    pcVar11 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + 'r');
    pcVar11[0x28] = pcVar11[0x28] + bVar32;
code_r0x00404b89:
    cVar5 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar5;
    *pcVar11 = *pcVar11 + cVar5;
    *pcVar11 = *pcVar11 + cVar5;
    puVar10 = (ushort *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5 + 'r');
    uVar8 = (ushort)puVar10 | *puVar10;
    pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*(undefined4 *)pbVar9,(short)param_2);
    *pcVar11 = *pcVar11 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar4;
  pbVar19 = (byte *)((int)ppbVar41 + -*(int *)((int)unaff_EDI + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar11 = (char *)CONCAT31(uVar23,bVar30 | *pbVar16);
  pbVar42 = pbVar43 + 8;
  out(*(undefined4 *)pbVar9,(short)pcVar11);
  uVar37 = *param_1;
  *pcVar11 = *pcVar11 + cVar5;
  uVar37 = CONCAT31(uVar22,bVar4 & (byte)uVar37) | 0x767b02;
  *(byte *)((int)param_1 + (int)pcVar11) = *(byte *)((int)param_1 + (int)pcVar11) + (char)uVar37;
  iVar15 = uVar37 + 0xc67b;
  cVar33 = (char)iVar15;
  uVar22 = (undefined3)((uint)iVar15 >> 8);
  cVar7 = cVar33 + 'r';
  pcVar11 = (char *)CONCAT31(uVar22,cVar7);
  pcVar11[0x28] = pcVar11[0x28] + bVar32;
  *pcVar11 = *pcVar11 + cVar7;
  uVar29 = (undefined2)((uint)param_1 >> 0x10);
  bVar6 = bVar6 | *(byte *)((int)puStack_24 + -0x5e);
  puVar36 = (uint *)CONCAT22(uVar29,CONCAT11(bVar6,cVar5));
  *pcVar11 = *pcVar11 + cVar7;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,uStack_28);
  pbVar9 = (byte *)CONCAT22(uVar28,CONCAT11(cVar26 + pbVar16[0x76],bVar27));
  *pcVar11 = *pcVar11 + cVar7;
  puVar12 = (uint *)CONCAT31(uVar22,cVar33 + -0x1c);
  pcVar11 = (char *)((uint)puVar12 | *puVar12);
  bVar45 = (POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar11;
  puVar12 = puStack_24;
  pbVar16 = pbVar19;
  puVar20 = puVar44;
  uVar28 = uStack_28;
  if (!bVar45) goto code_r0x00404ca8;
  *pcVar11 = *pcVar11 + cRam02060000;
  puVar20 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cRam02060000 + 'r');
  *puVar20 = *puVar20 & (uint)puVar36;
  *(char *)((int)puVar20 + 0x11) = *(char *)((int)puVar20 + 0x11) + (char)((ushort)uStack_28 >> 8);
  iVar15 = (int)puVar20 + 0xc77b;
  uVar22 = (undefined3)((uint)iVar15 >> 8);
  cRam02060000 = (char)iVar15 + '\t';
  pbVar16 = (byte *)CONCAT31(uVar22,cRam02060000);
  out(*(undefined4 *)pbVar42,uStack_28);
  *pbVar16 = *pbVar16 + cRam02060000;
  puVar20 = (uint *)CONCAT22(uVar29,CONCAT11(bVar6 | *pbVar16,cVar5));
  *(int *)pbVar16 = *(int *)pbVar16 - (int)pbVar16;
  *(byte *)puStack_24 = (byte)*puStack_24 + cVar5;
  out(*(undefined4 *)(pbVar43 + 0xc),uStack_28);
  pbVar42 = pbVar43 + 0x10;
  uVar28 = uStack_28;
  if ((POPCOUNT((byte)*puStack_24) & 1U) != 0) goto code_r0x00404cca;
  *pbVar16 = *pbVar16 + cRam02060000;
  puVar10 = (ushort *)CONCAT31(uVar22,(char)iVar15 + '{');
  uVar8 = (ushort)puVar10 | *puVar10;
  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),uVar8);
  bVar4 = (byte)uVar8;
  out(*(undefined4 *)(pbVar43 + 0x10),uStack_28);
  pbVar16 = (byte *)((int)puVar20 + 1);
  bRam11060000 = bVar4;
  *pcVar11 = *pcVar11 + bVar4;
  puVar36 = (uint *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                             CONCAT11((byte)((uint)pbVar16 >> 8) | bRam110cde91,(char)pbVar16));
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar4 - 7);
  *puVar44 = (uint)(pcVar11 + (uint)(bVar4 < 7) + *puVar44);
  pbVar42 = pbVar43 + 0x18;
  out(*(undefined4 *)(pbVar43 + 0x14),uStack_28);
  puVar12 = (uint *)((int)puStack_24 + 1);
  *pcVar11 = *pcVar11 + (bVar4 - 7);
  pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar27 | (byte)(uVar8 >> 8));
  do {
    bVar4 = (char)pcVar11 - *pcVar11;
    uVar37 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + bVar4;
    cVar5 = bVar4 - CARRY1((byte)uVar37,bVar4);
    *(byte *)puVar12 = (byte)*puVar12 + cVar5;
    cVar26 = (char)((uint)puVar36 >> 8);
    *(byte *)(puVar44 + 0x673b40) = (byte)puVar44[0x673b40] + cVar26;
    puVar18 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5);
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    *(byte *)puVar12 = (byte)*puVar12 + cVar5;
    *(byte **)(pbVar9 + 0x58) = pbVar42 + *(int *)(pbVar9 + 0x58);
    puVar20 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar36 >> 0x10),
                                               CONCAT11(cVar26 + (char)((uint)pcVar11 >> 8),
                                                        (char)puVar36)) >> 8),
                               (char)puVar36 + *(char *)((int)puVar18 * 2));
    *(byte *)puVar18 = (byte)*puVar18 + cVar5;
    *pbVar42 = *pbVar42 + (char)pbVar9;
_ctor:
    bVar25 = (byte)((uint)puVar20 >> 8);
    uVar37 = *puVar18;
    bVar4 = (byte)puVar20;
    puVar18 = (uint *)((int)puVar18 + (uint)CARRY1(bVar25,(byte)*puVar18) + *puVar18);
    *(byte *)puVar12 = (byte)*puVar12 + bVar4;
    cVar5 = bVar4 - *(byte *)((int)puVar12 + 3);
    puVar36 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar20 >> 0x10),
                                               CONCAT11(bVar25 + (byte)uVar37,bVar4)) >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      if (*(byte *)((int)puVar12 + 3) <= bVar4) {
        *puVar18 = (uint)(*puVar18 + (int)puVar18);
        puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),(byte)puVar12 | *pbVar9);
        puVar18 = puVar18 + 0x230e;
        puVar20 = puVar36;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
    cVar5 = (char)puVar18 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar5);
    bVar45 = (POPCOUNT(cVar5) & 1U) == 0;
    pbVar16 = pbVar19;
    puVar20 = puVar44;
    uVar28 = uStack_18;
code_r0x00404ca8:
    uStack_18 = uVar28;
    pbVar19 = pbStack_8;
    puVar44 = puStack_10;
    if (bVar45) break;
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar36;
    pbVar19 = pbVar16;
    puVar44 = puVar20;
  } while( true );
  *pcVar11 = *pcVar11 + (char)pcVar11;
  *(byte *)param_5 = (char)*param_5 + (byte)param_5;
  puVar20 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                             CONCAT11((byte)((uint)param_4 >> 8) | *param_3,(char)param_4));
  *(byte *)ppbVar46 = *(byte *)ppbVar46 + (char)ppbVar46;
  *(byte *)((int)param_5 * 2) = *(byte *)((int)param_5 * 2) ^ (byte)param_5;
  uVar3 = *(undefined6 *)param_5;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar16 = (byte *)uVar3;
  bVar25 = (byte)uVar3;
  *pbVar16 = *pbVar16 + bVar25;
  bVar4 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar25;
  puVar12 = (uint *)((int)puVar20 + 0x11673);
  uVar37 = *puVar12;
  uVar2 = *puVar12;
  *puVar12 = (uint)(param_3 + uVar2 + CARRY1(bVar4,bVar25));
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uStack_18);
  pbVar16 = pbVar16 + (uint)(CARRY4(uVar37,(uint)param_3) ||
                            CARRY4((uint)(param_3 + uVar2),(uint)CARRY1(bVar4,bVar25))) +
                      *(int *)((int)puVar20 + (int)param_3);
  puVar12 = (uint *)param_3;
  pbVar9 = (byte *)ppbVar46;
  pbVar42 = pbStack_c;
  uVar28 = uStack_18;
code_r0x00404cca:
  uStack_18 = uVar28;
  cVar5 = (char)pbVar16 + '\x04';
  puVar18 = (uint *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar5);
  if (SCARRY1((char)pbVar16,'\x04') == cVar5 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  pbVar43 = pbVar42 + 4;
  out(*(undefined4 *)pbVar42,(short)puVar12);
  uVar37 = *puVar20;
  uVar2 = *puVar12;
  bVar4 = (byte)puVar20;
  *(byte *)puVar12 = (byte)*puVar12 + bVar4;
  iVar15 = (CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + '\x03') & uVar37) + iRam00008c38;
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar12;
  pcVar11 = (char *)(iVar15 + (uint)CARRY1((byte)uVar2,bVar4) + 0x1246f);
  uVar22 = (undefined3)((uint)puVar20 >> 8);
  bVar4 = bVar4 | (byte)*puVar12;
  puVar36 = (uint *)CONCAT31(uVar22,bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar11 >> 8);
  puVar18 = (uint *)(CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + *pcVar11) + 0x1fbeef2);
  uVar37 = *puVar18;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  if (CARRY4(uVar37,(uint)puVar18)) {
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    pcVar11 = (char *)CONCAT31(uVar22,bVar4 | bRam00282809);
    cVar5 = (char)((uint)puVar20 >> 8);
    *pbVar9 = *pbVar9 + cVar5;
    *pcVar11 = *pcVar11 - cVar5;
    *(byte *)puVar18 = *(byte *)puVar18 + (char)puVar18;
    iVar15 = (int)pcVar11 - *(int *)pbVar9;
    pbVar42 = pbVar42 + 8;
    out(*(undefined4 *)pbVar43,(short)puVar12);
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    puVar36 = (uint *)CONCAT22((short)((uint)iVar15 >> 0x10),
                               CONCAT11((byte)((uint)iVar15 >> 8) | bRambf73070b,(char)iVar15));
code_r0x00404d15:
    uVar37 = *puVar18;
    bVar4 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar4;
    pbVar43 = pbVar42 + 4;
    out(*(undefined4 *)pbVar42,(short)puVar12);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar25 = bVar4 + in_AF * '\x06';
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),
                               bVar25 + (0x90 < (bVar25 & 0xf0) |
                                        CARRY1((byte)uVar37,bVar4) | in_AF * (0xf9 < bVar25)) * '`')
    ;
  }
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar4 = (byte)puVar18 | (byte)*puVar44;
  pbVar16 = pbVar43 + 4;
  uVar29 = SUB42(puVar12,0);
  out(*(undefined4 *)pbVar43,uVar29);
  *(byte *)puVar36 = (byte)*puVar36 - bVar4;
  uVar37 = *puVar12;
  bVar25 = (byte)puVar36;
  *(byte *)puVar12 = (byte)*puVar12 + bVar25;
  iVar15 = CONCAT31((int3)((uint)puVar18 >> 8),bVar4) + *(int *)pbVar16 +
           (uint)CARRY1((byte)uVar37,bVar25);
  pbVar42 = pbVar19 + -*puVar12;
  uVar22 = (undefined3)((uint)iVar15 >> 8);
  cVar5 = (char)iVar15 + *pbVar16 + (pbVar19 < (byte *)*puVar12);
  puVar20 = (uint *)CONCAT31(uVar22,cVar5);
  bVar4 = (byte)((uint)puVar36 >> 8);
  *(byte *)puVar36 = (byte)*puVar36 - bVar4;
  *puVar20 = (uint)(*puVar20 + (int)puVar20);
  bVar25 = bVar25 | *(byte *)((int)puVar12 + (int)puVar20);
  uVar28 = (undefined2)((uint)puVar36 >> 0x10);
  if ((POPCOUNT(bVar25) & 1U) == 0) {
    *(byte *)puVar20 = (byte)*puVar20 + cVar5;
    pcVar11 = (char *)CONCAT31(uVar22,cVar5 + '\x12');
    *pcVar11 = *pcVar11 + bVar4;
    puVar20 = (uint *)CONCAT31(uVar22,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar36 >> 8),bVar25));
    uVar37 = *puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar25;
    if (!CARRY1((byte)uVar37,bVar25)) {
      pbVar19 = (byte *)((uint)puVar20 | *puVar20);
      out(*(undefined4 *)pbVar16,uVar29);
      *pbVar19 = *pbVar19 + (char)pbVar19;
      bVar6 = *pbVar19;
      piVar17 = (int *)CONCAT22(uVar28,CONCAT11(bVar4 | bVar6,bVar25));
      iVar15 = (int)pbVar19 - *piVar17;
      *(byte *)puVar12 = (byte)*puVar12 + bVar25;
      pbVar19 = pbVar43 + 0xc;
      out(*(undefined4 *)(pbVar43 + 8),uVar29);
      uRam12060000 = (undefined1)iVar15;
      *(char *)((int)piVar17 + iVar15) = *(char *)((int)piVar17 + iVar15) - (bVar4 | bVar6);
      *(byte *)puVar12 = (byte)*puVar12 + bVar25;
      pbVar16 = (byte *)(iVar15 + -0x120edecd);
      *pbVar19 = *pbVar19 + 1;
      bVar4 = *pbVar16;
      bVar6 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar6;
      pbVar42 = pbVar42 + ((-1 - *(int *)((int)puVar44 + 0x42)) - (uint)CARRY1(bVar4,bVar6));
      *pbVar16 = *pbVar16 + bVar6;
      bVar4 = (byte)pbVar9 | (byte)((uint)pbVar16 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar16;
      uVar37 = *puVar12;
      pcVar11 = (char *)(((uint)pbVar16 | 0x11) + 0x511072c);
      pbVar16 = pbVar43 + 0x10;
      out(*(undefined4 *)pbVar19,uVar29);
      puVar12 = (uint *)((int)puVar12 + 1);
      *pcVar11 = *pcVar11 + (char)pcVar11;
      bVar6 = (byte)((uint)pcVar11 >> 8);
      pbVar9 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar9 >> 0x10),
                                                CONCAT11((byte)((uint)pbVar9 >> 8) | (byte)uVar37,
                                                         bVar4)) >> 8),bVar4 | bVar6);
      uVar22 = (undefined3)((uint)pcVar11 >> 8);
      bVar4 = (char)pcVar11 - *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar22,bVar4);
      *pcVar11 = *pcVar11 + bVar4;
      *(int *)((int)pcVar11 * 2) = (int)(pbVar9 + *(int *)((int)pcVar11 * 2));
      *(byte *)puVar12 = *(byte *)puVar12 + bVar4;
      *pbVar42 = *pbVar42 + bVar6;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar22,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar37;
      pbVar43 = (byte *)CONCAT22((short)(uVar37 >> 0x10),CONCAT11(bVar6 + in_AF,bVar4));
      *pbVar16 = *pbVar16 + bVar25;
      *pbVar43 = *pbVar43 + bVar4;
      *pbVar43 = *pbVar43 + bVar4;
      bVar45 = CARRY1(bVar4,*pbVar43);
      puVar20 = (uint *)CONCAT31((int3)((uint)pbVar43 >> 8),bVar4 + *pbVar43);
      goto code_r0x00404d9a;
    }
    *pbVar9 = *pbVar9 - (char)puVar12;
  }
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
  bVar45 = false;
  piVar17 = (int *)CONCAT22(uVar28,CONCAT11(bVar4 | (byte)*puVar12,bVar25));
code_r0x00404d9a:
  do {
    puVar36 = puVar12;
    *puVar20 = (*puVar20 - (int)puVar20) - (uint)bVar45;
    bVar4 = (byte)((uint)piVar17 >> 8);
    uVar28 = (undefined2)((uint)piVar17 >> 0x10);
    bVar25 = (byte)piVar17;
    bVar6 = bVar4 + (byte)iRam00000c00;
    pbVar43 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *(byte *)puVar36 = (byte)*puVar36 + bVar25;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 - *pbVar16);
    bVar4 = *pbVar43;
    puVar20 = (uint *)(pbVar43 + (uint)CARRY1(bVar6,*pbVar43) + *(int *)pbVar43);
    *(byte *)puVar36 = (byte)*puVar36 + bVar25;
    cVar26 = ((bVar6 + bVar4) - (byte)*puVar36) + (byte)*puVar20;
    pcVar11 = (char *)CONCAT22(uVar28,CONCAT11(cVar26,bVar25));
    puVar12 = puVar44 + 1;
    uVar37 = in((short)puVar36);
    *puVar44 = uVar37;
    cVar5 = (char)puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + cVar5;
    uVar22 = (undefined3)((uint)puVar36 >> 8);
    bVar6 = (byte)puVar36 | *pbVar16;
    pcVar21 = (char *)CONCAT31(uVar22,bVar6);
    *pcVar11 = *pcVar11 + '\x01';
    bVar4 = (cVar26 - *pcVar21) + (byte)*puVar20;
    pcVar11 = (char *)CONCAT22(uVar28,CONCAT11(bVar4,bVar25));
    puVar44 = puVar44 + 2;
    uVar37 = in((short)pcVar21);
    *puVar12 = uVar37;
    *(byte *)puVar20 = (byte)*puVar20 + cVar5;
    bVar6 = bVar6 | *pbVar16;
    puVar12 = (uint *)CONCAT31(uVar22,bVar6);
    *pcVar11 = *pcVar11 + '\x01';
    bVar45 = bVar25 < *(byte *)((int)puVar12 + 2);
    cVar26 = bVar25 - *(byte *)((int)puVar12 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar26);
  } while ((POPCOUNT(cVar26) & 1U) != 0);
  *(byte *)puVar20 = (byte)*puVar20 + cVar5;
  bVar25 = cVar5 + 0x7b;
  pbVar19 = (byte *)CONCAT31((int3)((uint)puVar20 >> 8),bVar25);
  pbVar9[(int)pbVar19] = pbVar9[(int)pbVar19] + bVar25;
  pbVar43 = pbVar16 + 4;
  uVar29 = SUB42(puVar12,0);
  out(*(undefined4 *)pbVar16,uVar29);
  pbVar35 = pbVar9 + -1;
  *pbVar19 = *pbVar19 + bVar25;
  bVar4 = bVar4 | (byte)*puVar12;
  piVar17 = (int *)CONCAT22(uVar28,CONCAT11(bVar4,cVar26));
  *pbVar19 = *pbVar19 + bVar25;
  *pbVar35 = *pbVar35 + bVar6;
  *pbVar35 = *pbVar35 ^ bVar25;
  *(byte *)puVar12 = (byte)*puVar12 + bVar4;
  *pbVar19 = *pbVar19 + bVar25;
  do {
    bVar27 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar44 = (byte)*puVar44 + bVar27;
    bVar4 = *pbVar19;
    bVar25 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar25;
    *(byte **)(pbVar9 + 0x17) = pbVar43 + (uint)CARRY1(bVar4,bVar25) + *(int *)(pbVar9 + 0x17);
    *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    bVar25 = bVar25 | *pbVar43;
    puVar44 = (uint *)((int)puVar44 + *(int *)(pbVar42 + -0x34));
    *(char *)CONCAT31(uVar23,bVar25) = *(char *)CONCAT31(uVar23,bVar25) + bVar25;
    bVar4 = bVar25 + 2;
    cVar5 = (char)((uint)puVar36 >> 8);
    bVar32 = (byte)piVar17;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar19 = (byte *)CONCAT31(uVar23,bVar25 + 0x15 + (0xfd < bVar25));
      if (0xec < bVar4 || CARRY1(bVar25 + 0x15,0xfd < bVar25)) {
        *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
      }
code_r0x00404e60:
      pbVar42 = pbVar42 + -*puVar12;
      bVar4 = *pbVar19;
      *pbVar19 = *pbVar19 + (byte)pbVar19;
      pbVar43 = pbVar43 + (-(uint)CARRY1(bVar4,(byte)pbVar19) - *(int *)pbVar19);
      pbVar19 = pbVar19 + *(int *)pbVar19;
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_DS);
      *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      bVar4 = *pbVar19;
      *pbVar19 = *pbVar19 + (byte)pbVar19;
      *(byte **)(pbVar35 + (int)puVar12) =
           (byte *)((int)puVar12 +
                   (uint)CARRY1(bVar4,(byte)pbVar19) + *(int *)(pbVar35 + (int)puVar12));
      pbVar19 = pbVar19 + 0x73061314;
      *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
      uVar23 = (undefined3)((uint)piVar17 >> 8);
      bVar32 = bVar32 | (byte)*puVar12;
      pcVar21 = (char *)CONCAT31(uVar23,bVar32);
      *pbVar19 = *pbVar19 + (char)pbVar19;
      cVar5 = (char)pbVar19 + 'o';
      pcVar11 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar5);
      *pcVar11 = *pcVar11 + cVar5;
      out(*(undefined4 *)pbVar43,uVar29);
      uVar37 = *puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + bVar32;
      pcVar11 = pcVar11 + (uint)CARRY1((byte)uVar37,bVar32) + *puVar44;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      *pcVar21 = *pcVar21 + bVar6;
      pbVar19 = pbVar43 + 8;
      out(*(undefined4 *)(pbVar43 + 4),uVar29);
      *(byte *)puVar12 = (byte)*puVar12 + bVar32;
      piVar17 = (int *)((uint)pcVar11 | *puVar44);
      pcVar21[0x390a0000] = pcVar21[0x390a0000] - bVar27;
      pbVar43 = (byte *)0x7000000;
      *(byte *)puVar44 = (byte)*puVar44 - bVar27;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar20 = (uint *)CONCAT31(uVar23,bVar32 | *(byte *)((int)piVar17 + (int)pcVar21));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar27;
      cRam07000000 = cRam07000000 + bVar27;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar9 = (byte *)((int)puVar44 + (int)pbVar42 * 2);
      bVar45 = SCARRY1(*pbVar9,(char)piVar17);
      *pbVar9 = *pbVar9 + (char)piVar17;
      bVar4 = *pbVar9;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar23,bVar4) = *(char *)CONCAT31(uVar23,bVar4) + bVar4;
    bVar25 = bVar25 + 0x71;
    pbVar19 = (byte *)CONCAT31(uVar23,bVar25);
    *pbVar19 = *pbVar19;
    *pbVar43 = *pbVar43 + 1;
    *piVar17 = (*piVar17 - (int)pbVar19) - (uint)(0x90 < bVar4);
    bVar4 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar25;
    if (!CARRY1(bVar4,bVar25)) goto code_r0x00404e60;
    *pbVar19 = *pbVar19 + bVar25;
    uVar28 = (undefined2)((uint)piVar17 >> 0x10);
    bVar27 = bVar27 | *pbVar19;
    pbVar19 = pbVar19 + -*(int *)pbVar19;
    *pbVar35 = *pbVar35 + bVar27;
    cVar26 = bVar32 - *(byte *)((int)puVar12 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar28,CONCAT11(bVar27,bVar32)) >> 8),cVar26);
  } while ((POPCOUNT(cVar26) & 1U) != 0);
  cVar33 = (char)pbVar19;
  *pbVar19 = *pbVar19 + cVar33;
  uVar23 = (undefined3)((uint)pbVar19 >> 8);
  pcVar11 = (char *)CONCAT31(uVar23,cVar33 + '{');
  out(*(undefined4 *)pbVar43,uVar29);
  *pcVar11 = *pcVar11 + cVar33 + '{';
  bVar25 = cVar33 + 0x7e;
  pbVar35 = (byte *)CONCAT31(uVar23,bVar25);
  pbVar19 = pbVar16 + 0xc;
  out(*(undefined4 *)(pbVar16 + 8),uVar29);
  pbVar43 = pbVar9 + -2;
  *pbVar35 = *pbVar35 + bVar25;
  bVar27 = bVar27 | (byte)*puVar12;
  puVar20 = (uint *)CONCAT22(uVar28,CONCAT11(bVar27,cVar26));
  *pbVar35 = *pbVar35 + bVar25;
  *pbVar43 = *pbVar43 + bVar6;
  *pbVar43 = *pbVar43 ^ bVar25;
  *(byte *)puVar12 = (byte)*puVar12 + bVar27;
  *pbVar35 = *pbVar35 + bVar25;
  *pbVar35 = *pbVar35 + cVar5;
  bVar4 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar25;
  *(byte **)(pbVar9 + 0x18) = pbVar19 + (uint)CARRY1(bVar4,bVar25) + *(int *)(pbVar9 + 0x18);
  *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
  bVar25 = bVar25 | *pbVar19;
  puVar44 = (uint *)((int)puVar44 + *(int *)(pbVar42 + -0x33));
  *(char *)CONCAT31(uVar23,bVar25) = *(char *)CONCAT31(uVar23,bVar25) + bVar25;
  bVar45 = SCARRY1(bVar25,'\x02');
  bVar4 = bVar25 + 2;
  piVar17 = (int *)CONCAT31(uVar23,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    return CONCAT31(uVar23,bVar25 + 0x71);
  }
code_r0x00404ebf:
  bVar25 = (byte)piVar17;
  uVar23 = (undefined3)((uint)piVar17 >> 8);
  if (bVar4 != 0 && bVar45 == (char)bVar4 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar25;
    *(byte **)(pbVar19 + (int)puVar44 * 8) =
         (byte *)((int)puVar12 + (uint)(0xd2 < bVar25) + *(int *)(pbVar19 + (int)puVar44 * 8));
    return CONCAT31(uVar23,bVar25 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar4 = *pbVar43;
  *(char **)pbVar19 = (char *)(*(int *)pbVar19 + (int)piVar17);
  bVar32 = (byte)((uint)puVar20 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar32;
  *(byte *)piVar17 = (char)*piVar17 + bVar25;
  pbVar16 = (byte *)(CONCAT31(uVar22,bVar6 | bVar4) - *(int *)pbVar43);
  puVar12 = (uint *)CONCAT31(uVar23,bVar25 + 6);
  *(uint *)(pbVar43 + (int)pbVar19 * 2) =
       (int)puVar12 + (uint)(0xf9 < bVar25) + *(int *)(pbVar43 + (int)pbVar19 * 2);
  *(byte *)puVar20 = (byte)*puVar20 ^ bVar25 + 6;
  bVar25 = (byte)puVar20;
  *pbVar16 = *pbVar16 + bVar25;
  pbVar9 = pbVar19 + 4;
  uVar28 = SUB42(pbVar16,0);
  out(*(undefined4 *)pbVar19,uVar28);
  *puVar20 = *puVar20 ^ (uint)puVar12;
  *pbVar16 = *pbVar16 + bVar25;
  puVar36 = (uint *)(pbVar43 + -*(int *)pbVar43);
  *(uint *)((int)puVar44 + 0x31) = *(uint *)((int)puVar44 + 0x31) | (uint)pbVar42;
  *puVar12 = *puVar12 + (int)puVar12;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar32 | (byte)*puVar36,bVar25)
                            );
  *(byte **)(pbVar16 + 0x6e) = pbVar9 + *(int *)(pbVar16 + 0x6e);
  piVar17 = (int *)((uint)puVar12 | *puVar12);
  bVar6 = (byte)puVar36;
  *(byte *)puVar44 = (byte)*puVar44 - bVar6;
  bVar4 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar25;
  if (CARRY1(bVar4,bVar25)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar4 = pbVar16[0x11];
    uVar29 = (undefined2)((uint)puVar36 >> 0x10);
    out(*(undefined4 *)pbVar9,uVar28);
    puVar20 = (uint *)((int)puVar20 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar30 = (byte)((uint)puVar36 >> 8) | bVar4 | *pbVar16;
    pcVar11 = (char *)((int)piVar17 + -0x21000001);
    bVar4 = (byte)pcVar11 | 0x11;
    uVar22 = (undefined3)((uint)pcVar11 >> 8);
    cVar5 = bVar4 - 7;
    pcVar21 = (char *)CONCAT31(uVar22,cVar5);
    *puVar44 = (uint)(pcVar21 + (uint)(bVar4 < 7) + *puVar44);
    pbVar9 = pbVar19 + 0xc;
    out(*(undefined4 *)(pbVar19 + 8),uVar28);
    pbVar16 = pbVar16 + 1;
    *pcVar21 = *pcVar21 + cVar5;
    bVar32 = (byte)((uint)pcVar11 >> 8);
    bVar27 = bVar6 | bVar32;
    bVar25 = cVar5 - *pcVar21;
    bVar4 = *(byte *)puVar20;
    *(byte *)puVar20 = *(byte *)puVar20 + bVar25;
    *(char *)CONCAT31(uVar22,bVar25) =
         *(char *)CONCAT31(uVar22,bVar25) + bVar25 + CARRY1(bVar4,bVar25);
    *pbVar16 = *pbVar16 + bVar25;
    *pbVar9 = *pbVar9 + bVar27;
    bVar4 = (byte)((uint)pbVar16 >> 8);
    *(byte *)puVar20 = *(byte *)puVar20 + bVar25 + CARRY1((byte)pbVar16,bVar4);
    piVar17 = (int *)CONCAT31(uVar22,bVar25);
    *(byte *)piVar17 = (char)*piVar17 + bVar25;
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11(bVar4 + bVar32,(byte)pbVar16 + bVar4));
    puVar36 = (uint *)CONCAT22(uVar29,CONCAT11(bVar30 + *(char *)(CONCAT31((int3)(CONCAT22(uVar29,
                                                  CONCAT11(bVar30,bVar6)) >> 8),bVar27) + 0x76),
                                               bVar27));
    uStack_18 = puStack_24._0_2_;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar11 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar20);
    cVar33 = (char)puVar20;
    *pbVar16 = *pbVar16 + cVar33;
    uVar28 = (undefined2)((uint)puVar36 >> 0x10);
    cVar34 = (char)puVar36;
    cVar38 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x75);
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar5 = (char)pcVar11 + 'o';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar5);
    *pcVar11 = *pcVar11 + cVar5;
    cVar7 = (char)((uint)puVar20 >> 8);
    *pbVar42 = *pbVar42 - cVar7;
    pbVar16[1] = pbVar16[1] + cVar33;
    pcVar11 = pcVar11 + -0x757b021b;
    cVar5 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar5;
    uVar22 = (undefined3)((uint)pcVar11 >> 8);
    cVar26 = cVar5 + 'o';
    pcVar11 = (char *)CONCAT31(uVar22,cVar26);
    pbVar19 = pbVar16 + 2;
    *pcVar11 = *pcVar11 + cVar26;
    iVar15 = CONCAT22(uVar28,CONCAT11(cVar38 + *(char *)(CONCAT22(uVar28,CONCAT11(cVar38,cVar34)) +
                                                        0x76),cVar34));
    *pcVar11 = *pcVar11 + cVar26;
    pcVar11 = (char *)CONCAT31(uVar22,cVar5 + -0x22);
    puVar12 = (uint *)((int)puVar44 + 1);
    *(byte *)puVar44 = *pbVar9;
    *pcVar11 = *pcVar11 + cVar5 + -0x22;
    *(byte *)((int)puVar20 + (int)pcVar11) =
         *(byte *)((int)puVar20 + (int)pcVar11) - (char)((uint)pbVar19 >> 8);
    *pbVar19 = *pbVar19 + cVar33;
    bVar25 = cVar7 - pbVar16[4];
    pbVar43 = pbVar9 + 5;
    out(*(undefined4 *)(pbVar9 + 1),(short)pbVar19);
    puVar44 = (uint *)((uint)(pcVar11 + *(int *)(pcVar11 + iVar15)) ^ 0x280a0001);
    *(byte *)puVar44 = (byte)*puVar44 << 1 | (char)(byte)*puVar44 < '\0';
    *pbVar43 = *pbVar43 + (char)puVar44;
    pbVar43 = pbVar43 + *(int *)(pbVar16 + -0x5c);
    pbVar9 = (byte *)((uint)puVar44 | *puVar44);
    *pbVar43 = *pbVar43 + (char)pbVar9;
    puVar36 = (uint *)CONCAT31((int3)((uint)iVar15 >> 8),cVar34 - (char)pbVar19);
    bVar4 = *pbVar9;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar25 + *pbVar9,cVar33));
    iVar15 = *(int *)pbVar9;
    *pbVar19 = *pbVar19 + cVar33;
    cVar5 = (char)(pbVar9 + (uint)CARRY1(bVar25,bVar4) + iVar15) + 'r';
    puVar44 = (uint *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar25,bVar4) + iVar15) >> 8),
                               cVar5);
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),CONCAT11(10,(char)pbVar19));
    *(char *)(puVar44 + 10) = (char)puVar44[10] + '\n';
    *pbVar43 = *pbVar43 + cVar5;
    pbVar9 = pbVar43 + *(int *)(pbVar16 + -0x5e);
    uVar37 = *puVar44;
    cVar5 = (char)((uint)puVar44 | uVar37);
    *pbVar9 = *pbVar9 + cVar5;
    uVar22 = (undefined3)(((uint)puVar44 | uVar37) >> 8);
    cVar26 = cVar5 + (byte)*puVar36;
    puVar44 = (uint *)CONCAT31(uVar22,cVar26);
    if (SCARRY1(cVar5,(byte)*puVar36) == cVar26 < '\0') goto code_r0x00405090;
    *(byte *)puVar44 = (byte)*puVar44 + cVar26;
    piVar17 = (int *)CONCAT31(uVar22,cVar26 + '\x02');
    puVar44 = puVar12;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar16) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar22 = (undefined3)((uint)piVar17 >> 8);
  cVar5 = (char)piVar17 + '}';
  pbVar43 = (byte *)CONCAT31(uVar22,cVar5);
  pbVar16[(int)pbVar43] = pbVar16[(int)pbVar43] + cVar5;
  pbVar16[0x280a0000] = pbVar16[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar4 = (byte)puVar20 & 7;
  *pbVar43 = *pbVar43 << bVar4 | *pbVar43 >> 8 - bVar4;
  *pbVar9 = *pbVar9 + cVar5;
  cVar33 = (char)puVar36 - *pbVar9;
  uVar28 = (undefined2)((uint)puVar36 >> 0x10);
  cVar7 = (char)((uint)puVar36 >> 8) + *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar33) + 0x7c)
  ;
  pcVar11 = (char *)CONCAT22(uVar28,CONCAT11(cVar7,cVar33));
  *pbVar43 = *pbVar43 + cVar5;
  bVar25 = (char)piVar17 + 0xa7U & *pbVar16;
  puVar12 = (uint *)((int)puVar44 + *(int *)(pbVar42 + 0x7c));
  *(char *)CONCAT31(uVar22,bVar25) = *(char *)CONCAT31(uVar22,bVar25) + bVar25;
  bVar25 = bVar25 + 0x2a;
  pbVar43 = (byte *)CONCAT31(uVar22,bVar25);
  *pbVar43 = *pbVar43 + bVar25;
  *pcVar11 = *pcVar11 + cVar33;
  *pbVar16 = *pbVar16 ^ bVar25;
  *pcVar11 = *pcVar11 + bVar25;
  bVar4 = *pbVar43;
  *pbVar43 = *pbVar43 + bVar25;
  cVar5 = (bVar25 - *pbVar43) - CARRY1(bVar4,bVar25);
  *(byte *)puVar20 = (byte)*puVar20 + (byte)pbVar16;
  cVar7 = cVar7 + pcVar11[0x7b];
  *(char *)CONCAT31(uVar22,cVar5) = *(char *)CONCAT31(uVar22,cVar5) + cVar5;
  pcVar11 = (char *)CONCAT31(uVar22,cVar5 + 'o');
  *pcVar11 = *pcVar11 + cVar5 + 'o';
  pcVar11 = pcVar11 + 0x2ed7fde6;
  cVar26 = (char)pcVar11;
  *pcVar11 = *pcVar11 + cVar26;
  cVar5 = *(char *)(CONCAT22(uVar28,CONCAT11(cVar7,cVar33)) + 0x7b);
  *pcVar11 = *pcVar11 + cVar26;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar11 >> 8),cVar26 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar23 = (undefined3)((uint)pbVar16 >> 8);
  bVar25 = (byte)pbVar16 | *pbVar9;
  pbVar35 = (byte *)CONCAT31(uVar23,bVar25);
  uVar37 = CONCAT22(uVar28,CONCAT11(cVar7 + cVar5,cVar33)) | (uint)pbVar9;
  uVar22 = (undefined3)((uint)piVar17 >> 8);
  bVar4 = (byte)piVar17 | *pbVar35;
  pbVar19 = (byte *)CONCAT31(uVar22,bVar4);
  cVar5 = (byte)puVar20 - bVar25;
  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),cVar5);
  *pbVar19 = *pbVar19 + bVar4;
  pbVar43 = pbVar9 + 4;
  out(*(undefined4 *)pbVar9,(short)pbVar35);
  *pbVar19 = bVar4;
  *pbVar35 = *pbVar35 + cVar5;
  pbVar9 = pbVar9 + 8;
  out(*(undefined4 *)pbVar43,(short)pbVar35);
  *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
  puVar36 = (uint *)(CONCAT31((int3)(uVar37 >> 8),(char)uVar37 - (char)((uint)pbVar16 >> 8)) |
                    (uint)pbVar9);
  pbVar16 = (byte *)CONCAT31(uVar23,(bVar25 | *pbVar9) + (byte)*puVar12);
  cVar5 = bVar4 - (byte)*puVar12;
  puVar44 = (uint *)CONCAT31(uVar22,cVar5 - *(char *)CONCAT31(uVar22,cVar5));
code_r0x00405090:
  *puVar44 = (uint)(pbVar16 + *puVar44);
  cVar5 = (char)puVar44;
  *(byte *)puVar44 = (byte)*puVar44 + cVar5;
  *(byte *)puVar44 = (byte)*puVar44 + cVar5;
  *(byte *)puVar44 = (byte)*puVar44 + cVar5;
  *puVar20 = *puVar20 - (int)pbVar42;
  bVar4 = *pbVar9;
  bVar25 = (byte)pbVar16;
  *pbVar9 = *pbVar9 + bVar25;
  *(byte *)puVar44 = (byte)*puVar44 + cVar5 + CARRY1(bVar4,bVar25);
  *(byte *)puVar20 = (byte)*puVar20 + cVar5;
  uVar37 = *puVar36;
  *(byte *)puVar36 = (byte)*puVar36 + 0x72;
  *(byte *)puVar36 = (byte)*puVar36;
  cVar5 = (char)((uint)pbVar16 >> 8);
  if (SCARRY1((byte)uVar37,'r')) {
    pbVar9 = pbVar9 + *(int *)(pbVar16 + -10);
  }
  else {
    while( true ) {
      *pbVar9 = *pbVar9 + (char)puVar44;
      uVar22 = (undefined3)((uint)puVar44 >> 8);
      cVar26 = (char)puVar44 + (byte)*puVar36;
      pcVar11 = (char *)CONCAT31(uVar22,cVar26);
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((char)((uint)puVar36 >> 8) +
                                          *(byte *)((int)puVar36 + 0x7b),(char)puVar36));
      *pcVar11 = *pcVar11 + cVar26;
      in_AF = 9 < (cVar26 + 0x6fU & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar22,cVar26 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar37;
      piVar17 = (int *)CONCAT22((short)(uVar37 >> 0x10),
                                CONCAT11((char)((uint)puVar44 >> 8) + in_AF,bVar6));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar22 = (undefined3)((uint)piVar17 >> 8);
      bVar6 = bVar6 | *(byte *)(piVar17 + 0x354a);
      bVar6 = bVar6 - *(char *)CONCAT31(uVar22,bVar6);
      pbVar43 = (byte *)CONCAT31(uVar22,bVar6);
      bVar4 = *pbVar43;
      *pbVar43 = *pbVar43 + bVar6;
      pbVar9 = pbVar9 + (-(uint)CARRY1(bVar4,bVar6) - *(int *)pbVar43);
      puVar44 = (uint *)(pbVar43 + 0xfc00);
      *pbVar16 = *pbVar16 + cVar5;
      uVar37 = *puVar44;
      bVar4 = (byte)puVar44;
      *(byte *)puVar44 = (byte)*puVar44 + bVar4;
      uVar13 = (uint)CARRY1((byte)uVar37,bVar4);
      uVar37 = *puVar36;
      uVar2 = *puVar36;
      *puVar36 = (uint)((byte *)(uVar2 + (int)puVar44) + uVar13);
      if (!CARRY4(uVar37,(uint)puVar44) && !CARRY4(uVar2 + (int)puVar44,uVar13)) break;
      *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    }
  }
  uVar37 = (uint)puVar44 | *puVar44;
  uVar28 = SUB42(pbVar16,0);
  *pbVar9 = *pbVar9 + (char)uVar37;
  piVar17 = (int *)(uVar37 + 0xc1872);
  if (SCARRY4(uVar37,0xc1872)) {
    cVar26 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar26;
    *pbVar16 = *pbVar16 + cVar26;
    *(char *)piVar17 = *(char *)piVar17 + cVar26;
    *(byte *)puVar36 = (byte)*puVar36 + (char)puVar20;
    *(char *)piVar17 = *(char *)piVar17 + cVar26;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar25;
    pbVar43 = pbVar9;
    goto code_r0x00405117;
  }
  do {
    bVar4 = *pbVar9;
    bVar25 = (byte)piVar17;
    *pbVar9 = *pbVar9 + bVar25;
    if (CARRY1(bVar4,bVar25)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar22 = (undefined3)((uint)puVar20 >> 8);
      bVar4 = (byte)puVar20 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar20 = (uint *)CONCAT31(uVar22,bVar4 | *(byte *)CONCAT31(uVar22,bVar4));
      uVar22 = (undefined3)((uint)piVar17 >> 8);
      bVar25 = bVar25 | *pbVar16;
      pcVar11 = (char *)CONCAT31(uVar22,bVar25);
      if ((POPCOUNT(bVar25) & 1U) != 0) {
        pbVar43 = pbVar9 + 4;
        out(*(undefined4 *)pbVar9,uVar28);
        uVar37 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar25);
        *pbVar43 = *pbVar43 + bVar25;
        pcVar11 = (char *)(uVar37 | 8);
        cVar26 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x7a);
        puVar44 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(cVar26,(char)puVar36));
        *pcVar11 = *pcVar11 + (char)pcVar11;
        cVar5 = (char)pcVar11 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar37 >> 8),cVar5);
        *(char *)piVar17 = (char)*piVar17 + cVar5;
        *(byte *)puVar20 = (byte)*puVar20 + 1;
        pbVar9 = pbVar9 + 8;
        out(*(undefined4 *)pbVar43,uVar28);
        pbVar16 = (byte *)((uint)pbVar16 ^ uRam08122c04);
        iVar15 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar15 * 2) = *(char *)(iVar15 * 2) - cVar26;
        do {
          bVar4 = (byte)iVar15;
          *pbVar9 = *pbVar9 + bVar4;
          bVar45 = CARRY1(bVar4,(byte)*puVar44);
          uVar22 = (undefined3)((uint)iVar15 >> 8);
          cVar5 = bVar4 + (byte)*puVar44;
          pbVar43 = (byte *)CONCAT31(uVar22,cVar5);
          uVar28 = in_DS;
          uVar29 = uStack_64;
          if (SCARRY1(bVar4,(byte)*puVar44) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar43 = *pbVar43 + cVar5;
          uVar37 = CONCAT31(uVar22,cVar5 + '\'') + 0x1ebd9f3;
          uStack_68 = (undefined1)uStack_18;
          uStack_67 = (undefined1)((ushort)uStack_18 >> 8);
          piVar17 = (int *)(uVar37 ^ 0x73060000);
          puVar20 = (uint *)((int)puVar20 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                     CONCAT11((byte)((uint)puVar44 >> 8) | pbVar42[0x7e],
                                              (char)puVar44));
          cVar5 = (char)uVar37;
          *(char *)piVar17 = (char)*piVar17 + cVar5;
          uVar37 = CONCAT31((int3)((uint)piVar17 >> 8),cVar5 + '\x02');
          bVar45 = 0xd9f2d2da < uVar37;
          iVar15 = uVar37 + 0x260d2d25;
          pbVar19 = pbVar42;
          do {
            uVar22 = (undefined3)((uint)iVar15 >> 8);
            bVar25 = (char)iVar15 + -2 + bVar45;
            pbVar43 = (byte *)CONCAT31(uVar22,bVar25);
            bVar4 = *pbVar43;
            *pbVar43 = *pbVar43 + bVar25;
            bVar6 = (byte)puVar44;
            uStack_64 = uStack_18;
            if (CARRY1(bVar4,bVar25)) {
              *pbVar43 = *pbVar43 + bVar25;
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11((byte)((uint)puVar44 >> 8) | pbVar19[0x7f],bVar6))
              ;
              *pbVar43 = *pbVar43 + bVar25;
              pbVar43 = (byte *)CONCAT31(uVar22,bVar25 + 0x2a);
              *pbVar43 = *pbVar43 + bVar25 + 0x2a;
              *(byte *)puVar44 = (byte)*puVar44 + (char)pbVar16;
              uVar28 = in_DS;
              while( true ) {
                in_DS = uVar28;
                bVar25 = (byte)pbVar43;
                *pbVar16 = *pbVar16 ^ bVar25;
                *pbVar16 = *pbVar16 + (char)puVar44;
                *pbVar43 = *pbVar43 + bVar25;
                *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)pbVar16 >> 8);
                bVar4 = *pbVar43;
                *pbVar43 = *pbVar43 + bVar25;
                uVar37 = *puVar44;
                uVar2 = *puVar44;
                *puVar44 = (uint)(pbVar43 + uVar2 + CARRY1(bVar4,bVar25));
                uVar22 = (undefined3)((uint)pbVar43 >> 8);
                if (CARRY4(uVar37,(uint)pbVar43) ||
                    CARRY4((uint)(pbVar43 + uVar2),(uint)CARRY1(bVar4,bVar25))) break;
                *pbVar9 = *pbVar9 + bVar25;
                pcVar11 = (char *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                           CONCAT11((char)((uint)puVar20 >> 8) + *pbVar43,
                                                    (char)puVar20));
                *pbVar9 = *pbVar9 + bVar25;
                piVar17 = (int *)CONCAT31(uVar22,bVar25 | (byte)*puVar44);
                pbVar43 = pbVar9;
                while( true ) {
                  pbVar9 = pbVar43 + 4;
                  out(*(undefined4 *)pbVar43,(short)pbVar16);
                  pbVar16 = pbVar16 + 1;
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  bVar6 = (byte)((uint)pcVar11 >> 8) | *pbVar16;
                  uVar22 = (undefined3)((uint)piVar17 >> 8);
                  bVar25 = (byte)piVar17 ^ *pbVar16;
                  pcVar21 = (char *)CONCAT31(uVar22,bVar25);
                  cRam282b0000 = cRam282b0000 - bVar6;
                  *pcVar21 = *pcVar21 + bVar25;
                  pbVar42 = pbVar19 + -*(int *)pbVar16;
                  uStack_68 = (undefined1)in_DS;
                  uStack_67 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar12 + 0x17);
                  *pcVar21 = *pcVar21 + bVar25;
                  puVar20 = (uint *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                             CONCAT11(bVar6 + bVar4 | *pbVar16,(char)pcVar11));
                  *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
                  *(byte *)((int)pcVar21 * 2) = *(byte *)((int)pcVar21 * 2) ^ bVar25;
                  in_AF = 9 < (bVar25 & 0xf) | in_AF;
                  bVar25 = bVar25 + in_AF * -6;
                  pbVar43 = (byte *)CONCAT31(uVar22,bVar25 + (0x9f < bVar25 | in_AF * (bVar25 < 6))
                                                             * -0x60);
                  *(byte **)pbVar43 = pbVar43 + *(int *)pbVar43;
                  *(char *)((int)pbVar43 * 2) =
                       *(char *)((int)pbVar43 * 2) + (char)((uint)pbVar16 >> 8);
                  bVar45 = CARRY1((byte)*puVar20,(byte)pbVar16);
                  *(byte *)puVar20 = (byte)*puVar20 + (byte)pbVar16;
                  uVar28 = in_DS;
                  uVar29 = uStack_18;
GenerateStatusText:
                  in_DS = uVar29;
                  pbVar19 = pbVar42;
                  uStack_64 = in_DS;
                  if (!bVar45) break;
                  *pbVar43 = *pbVar43 + (char)pbVar43;
                  iVar15 = CONCAT31((int3)((uint)puVar20 >> 8),(byte)puVar20 | *pbVar16);
                  uVar28 = (undefined2)((uint)puVar44 >> 0x10);
                  cVar33 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar44 + 0x7d);
                  *pbVar43 = *pbVar43 + (char)pbVar43;
                  *(byte *)puVar12 = (byte)*puVar12 - (char)((uint)puVar20 >> 8);
                  iVar15 = iVar15 - *(int *)(iVar15 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar28,CONCAT11(cVar33,(char)puVar44)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar9,(short)pbVar16);
                  pbVar16 = (byte *)CONCAT22(uStack_66,CONCAT11(uStack_67,uStack_68));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar43 = pbVar9 + 8;
                  out(*(undefined4 *)(pbVar9 + 4),CONCAT11(uStack_67,uStack_68));
                  pbVar19 = pbVar42 + 1;
                  cVar26 = (char)iVar15;
                  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),
                                             CONCAT11((byte)((uint)iVar15 >> 8) |
                                                      *(byte *)((int)puVar12 + 0x46),cVar26));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_18 = CONCAT11(uStack_67,uStack_68);
                  uVar22 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar43,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar22,0x5f);
                  puVar12 = (uint *)((int)puVar12 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar44 = (uint *)CONCAT22(uVar28,CONCAT11(cVar33 + cVar5 | pbVar9[-0x78],
                                                             (char)puVar44));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar20 = (uint *)CONCAT31(uVar22,0x8c);
                  *(byte **)(pbVar43 + (int)puVar12 * 8) =
                       pbVar16 + *(int *)(pbVar43 + (int)puVar12 * 8);
                  bVar4 = *pbVar43;
                  *pbVar43 = *pbVar43 + 0x8c;
                  if (bVar4 < 0x74) {
                    *pbVar16 = *pbVar16 + cVar26;
                    *(byte *)puVar44 = (byte)*puVar44 >> 1;
                    *(char *)puVar20 = (char)*puVar20 + -0x74;
                    *puVar20 = (uint)(pbVar19 + *puVar20);
                    *puVar20 = *puVar20 << 1 | (uint)((int)*puVar20 < 0);
                    *pbVar16 = *pbVar16 + cVar26;
                    pbVar42[2] = pbVar42[2] - cVar26;
                    *pbVar16 = *pbVar16 + cVar26;
                    pbVar9 = (byte *)CONCAT31(uVar22,0x83);
                    puVar20 = puVar44;
                    goto code_r0x00405312;
                  }
                  *puVar20 = (uint)(*puVar20 + (int)puVar20);
                  piVar17 = (int *)(CONCAT31(uVar22,(byte)puVar20[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar20[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar17 = (int *)((int)piVar17 + *(int *)pbVar43);
                }
              }
              *pbVar16 = *pbVar16 + bVar25;
              *(byte *)puVar44 = (byte)*puVar44 - (char)pbVar16;
              *pbVar43 = *pbVar43 + bVar25;
              pbVar43 = (byte *)CONCAT31(uVar22,bVar25 | (byte)*puVar44);
            }
            else {
              cVar5 = (char)puVar20;
              *pbVar16 = *pbVar16 + cVar5;
              *(byte **)pbVar43 = pbVar16 + *(int *)pbVar43;
              *pbVar43 = *pbVar43 + bVar25;
              bVar25 = bVar25 + *pbVar43;
              pbVar43 = (byte *)CONCAT31(uVar22,bVar25);
              if (-1 < (char)bVar25) {
                *(byte *)puVar44 = (byte)*puVar44 + bVar6;
                out(*(undefined4 *)pbVar9,(short)pbVar16);
                pbVar16 = pbVar16 + 1;
                *pbVar43 = *pbVar43 + bVar25;
                puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                                           bVar6 | (byte)((uint)iVar15 >> 8));
                cVar26 = bVar25 - (byte)*puVar20;
                pcVar11 = (char *)CONCAT31(uVar22,cVar26);
                *pcVar11 = *pcVar11 + cVar26 + (bVar25 < (byte)*puVar20);
                *pbVar16 = *pbVar16 + cVar26;
                pcVar11 = (char *)((int)pcVar11 * 2 + 0x79);
                *pcVar11 = *pcVar11 + (char)((uint)pbVar16 >> 8);
                pbVar43 = (byte *)in((short)pbVar16);
                pbVar9 = pbVar9 + 4;
              }
              *pbVar9 = *pbVar9 + cVar5;
              *pbVar43 = *pbVar43 + (char)pbVar43;
              *pbVar43 = *pbVar43 + (char)pbVar43;
              uStack_68 = (undefined1)in_DS;
              uStack_67 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar43;
              bVar32 = (byte)((uint)puVar20 >> 8);
              bVar6 = bVar32 + *pbVar43;
              iVar15 = *(int *)pbVar43;
              *pbVar16 = *pbVar16 + cVar5;
              bVar25 = (char)(pbVar43 + (uint)CARRY1(bVar32,bVar4) + iVar15) - (byte)*puVar44;
              pbVar43 = (byte *)CONCAT31((int3)((uint)(pbVar43 + (uint)CARRY1(bVar32,bVar4) + iVar15
                                                      ) >> 8),bVar25);
              *(byte *)puVar44 = (byte)*puVar44 ^ bVar25;
              *pbVar19 = *pbVar19 + (char)puVar44;
              *pbVar43 = *pbVar43 + bVar25;
              *pbVar43 = *pbVar43 + bVar25;
              *pbVar43 = *pbVar43 + bVar25;
              puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                         CONCAT11(bVar6 + *pbVar43,cVar5));
              pbVar43 = pbVar43 + (uint)CARRY1(bVar6,*pbVar43) + *(int *)pbVar43;
              *pbVar16 = *pbVar16 + cVar5;
              pbVar9 = pbVar9 + *(int *)(pbVar16 + 0x3e);
            }
            *pbVar9 = *pbVar9 + (char)pbVar43;
            cVar5 = (char)pbVar43 + 'r';
            pbVar9 = pbVar9 + -1;
            uVar37 = CONCAT31((int3)((uint)pbVar43 >> 8),cVar5);
            *pbVar9 = *pbVar9 + cVar5;
            bVar45 = 0xfff38f8d < uVar37;
            iVar15 = uVar37 + 0xc7072;
            pbVar42 = pbVar19;
          } while (SCARRY4(uVar37,0xc7072));
        } while( true );
      }
      *pcVar11 = *pcVar11 + bVar25;
      bVar25 = bVar25 + 0x6f;
      pbVar43 = (byte *)CONCAT31(uVar22,bVar25);
      bVar4 = *pbVar43;
      *pbVar43 = *pbVar43 + bVar25;
      uVar22 = (undefined3)
               ((uint)(pbVar43 + (uint)CARRY1(bVar4,bVar25) + *(int *)((int)puVar20 + (int)pbVar16))
               >> 8);
      cVar26 = (char)(pbVar43 + (uint)CARRY1(bVar4,bVar25) + *(int *)((int)puVar20 + (int)pbVar16))
               + 'E';
      pcVar11 = (char *)CONCAT31(uVar22,cVar26);
      *pcVar11 = *pcVar11 + cVar26;
      cVar26 = cVar26 + *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar22,cVar26);
      *pcVar11 = *pcVar11 + cVar26;
      puVar44 = (uint *)CONCAT31(uVar22,cVar26 + *pcVar11);
      *(char *)puVar44 = (char)*puVar44 + cVar26 + *pcVar11;
      pbVar43 = (byte *)((uint)puVar44 | *puVar44);
      bVar4 = *pbVar43;
      bVar25 = (byte)pbVar43;
      *pbVar43 = *pbVar43 + bVar25;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar43 >> 8),bVar25 + CARRY1(bVar4,bVar25));
      pbVar43 = pbVar9;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar36 = (uint *)((int)puVar36 - *puVar36);
      pbVar9 = pbVar43 + 4;
      out(*(undefined4 *)pbVar43,uVar28);
    }
    *pbVar16 = *pbVar16 + (char)puVar20;
    bVar45 = puVar36 < (uint *)*piVar17;
    puVar36 = (uint *)((int)puVar36 - *piVar17);
    bVar4 = (byte)((uint)puVar20 >> 8);
    *(byte *)((int)puVar12 + 0x39) = (*(byte *)((int)puVar12 + 0x39) - bVar4) - bVar45;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar37 = *puVar36;
    *(int *)((int)puVar12 + 0x39) = *(int *)((int)puVar12 + 0x39) - (int)pbVar42;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar37 | (byte)*puVar36,(char)puVar20));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar4 = (char)piVar17 + 0x28;
  pbVar9 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar4);
  *pbVar9 = *pbVar9 ^ bVar4;
  *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)pcVar11 >> 8);
  bVar4 = *pbVar16;
  *pbVar16 = *pbVar16 + (byte)pcVar11;
  piVar17 = (int *)(((uint)pbVar9 | 0x1496f09) + *puVar12 + (uint)CARRY1(bVar4,(byte)pcVar11));
  pbVar42 = pbVar43 + 4;
  out(*(undefined4 *)pbVar43,(short)pbVar16);
  pbVar35 = pbVar16 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),(byte)pbVar35 | (byte)*puVar44);
  cVar5 = (char)piVar17 + '\x13';
  pbVar9 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar5);
  puVar20 = puVar44;
  pbVar43 = pbVar42;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar16 = *pbVar16 - (char)((uint)pbVar35 >> 8);
    *pbVar9 = *pbVar9 + cVar5;
code_r0x00405396:
    bVar4 = *pbVar9;
    bVar25 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar25;
    *(byte **)pbVar42 = pbVar9 + (uint)CARRY1(bVar4,bVar25) + *(int *)pbVar42;
    out(*(undefined4 *)pbVar42,(short)pbVar16);
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    pcVar11 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                               CONCAT11((byte)((uint)pbVar9 >> 8) | pbVar42[4],bVar25));
    *(char **)((int)puVar12 + -1) = pcVar11 + *(int *)((int)puVar12 + -1);
    out(*(undefined4 *)(pbVar42 + 4),(short)pbVar16);
    *pcVar11 = *pcVar11 + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar9 = *pbVar9 + (char)pbVar9;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + 'o');
  puVar44 = (uint *)((int)puVar20 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar22 = (undefined3)((uint)pbVar16 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar6 = (byte)pbVar16 | *(byte *)puVar44 | *(byte *)puVar44;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*(undefined4 *)pbVar43,(short)CONCAT31(uVar22,bVar6));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar6 = bVar6 | (byte)piVar17;
  iVar31 = CONCAT31(uVar22,bVar6);
  pbVar9 = (byte *)((int)piVar17 - *piVar17);
  cVar5 = (char)pbVar9;
  *pcVar11 = *pcVar11 + cVar5;
  cVar26 = (char)pcVar11 - bVar6;
  *pbVar9 = *pbVar9 + cVar5;
  uVar28 = (undefined2)((uint)pcVar11 >> 0x10);
  bVar25 = (byte)((uint)pcVar11 >> 8) | *pbVar9;
  pbVar19 = pbVar19 + -1;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  bVar4 = *(byte *)(CONCAT22(uVar28,CONCAT11(bVar25,cVar26)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar9;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar19;
  *pbVar9 = *pbVar9 + cVar5;
  bVar4 = bVar25 | bVar4 | *(byte *)puVar44;
  iVar24 = CONCAT22(uVar28,CONCAT11(bVar4,cVar26));
  pbVar35 = (byte *)((uint)(pbVar43 + 4) ^ *(uint *)(iVar31 + -0x43));
  iVar15 = *(int *)pbVar9;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  if (SCARRY4(iVar15,(int)pbVar9)) {
    *pbVar9 = *pbVar9 + cVar5;
  }
  pbVar43 = pbVar9 + 0x5674;
  puVar12 = (uint *)((int)puVar12 +
                    (-(uint)((byte *)0xffffa98b < pbVar9) - *(int *)(pbVar35 + -0x7f)));
  bVar25 = (byte)pbVar43;
  *pbVar43 = *pbVar43 + bVar25;
  uVar23 = (undefined3)((uint)pbVar43 >> 8);
  bVar32 = bVar25 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar23,bVar32);
  *(uint *)(pbVar35 + (int)puVar12 * 8) =
       *(int *)(pbVar35 + (int)puVar12 * 8) + iVar31 + (uint)(0xd2 < bVar25);
  bVar25 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar32;
  if (!CARRY1(bVar25,bVar32)) {
    do {
      pbVar43 = (byte *)(iVar31 + 1);
      bVar25 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar25;
      bVar6 = (byte)((uint)piVar17 >> 8);
      bVar32 = (byte)puVar44 | bVar6;
      puVar20 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar32);
      out(*(undefined4 *)pbVar35,(short)pbVar43);
      *(byte *)piVar17 = (char)*piVar17 + bVar25;
      uVar28 = (undefined2)((uint)iVar24 >> 0x10);
      cVar5 = (char)iVar24;
      pbVar9 = (byte *)CONCAT22(uVar28,CONCAT11((byte)((uint)iVar24 >> 8) | *pbVar43,cVar5));
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar25;
      *(byte *)piVar17 = (char)*piVar17 + bVar25 + CARRY1(bVar4,bVar25);
      *pbVar43 = *pbVar43 + bVar25;
      *(byte *)puVar12 = (byte)*puVar12 + bVar6;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar28,CONCAT11(0x1c,cVar5));
      *(byte *)piVar17 = (char)*piVar17 + bVar25;
      cVar26 = (char)pbVar43;
      *(byte *)puVar20 = (byte)*puVar20 + cVar26;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar25;
      *(byte *)piVar17 = (char)*piVar17 + bVar25;
      pbVar9 = pbVar35 + 8;
      out(*(undefined4 *)(pbVar35 + 4),(short)pbVar43);
      piVar17 = (int *)0xa0a0000;
      *pbVar43 = *pbVar43;
      bVar25 = cVar5 - cVar26;
      iVar24 = CONCAT22(uVar28,CONCAT11((byte)puVar12[0x14] | 0x1c | bRam0ca87216,bVar25));
      *pbVar43 = *pbVar43;
      bVar4 = *pbVar43;
      *pbVar43 = *pbVar43 + bVar25;
      if (!CARRY1(bVar4,bVar25)) {
        piVar17 = (int *)0x1e7b7000;
        bVar4 = (byte)((uint)puVar44 >> 8) | *(byte *)(iVar31 + 3);
        puVar20 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar4,bVar32));
        if (bVar4 != 0) {
          pbVar43 = (byte *)CONCAT31((int3)((uint)pbVar43 >> 8),cVar26 + pbVar9[(int)puVar12 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar24 = iVar24 + 1;
        }
      }
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      iVar31 = CONCAT31((int3)((uint)pbVar43 >> 8),(byte)pbVar43 | pbVar9[(int)puVar12 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar12 = (uint)((int)piVar17 + *puVar12 + 1);
      pbVar35 = pbVar35 + 0xc;
      out(*(undefined4 *)pbVar9,(short)iVar31);
      puVar44 = puVar20;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar32 = bVar32 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar23,bVar32);
  if ('\0' < (char)bVar32) {
    *(byte *)piVar17 = (char)*piVar17 + bVar32;
    puVar36 = (uint *)CONCAT31(uVar23,bVar32 + 0x28);
    *puVar36 = *puVar36 ^ (uint)puVar36;
    *(byte *)puVar44 = *(byte *)puVar44 + bVar4;
    cVar5 = (bVar32 + 0x28) - bVar4;
    pcVar11 = (char *)CONCAT31(uVar23,cVar5);
    *pcVar11 = *pcVar11 + cVar5;
    pbVar16 = (byte *)CONCAT31(uVar22,bVar6 | *(byte *)puVar44);
    pcVar21 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + *(byte *)((int)puVar20 + 0x7d),
                                        (char)puVar44));
    *pcVar11 = *pcVar11 + cVar5;
    pbVar9 = (byte *)CONCAT31(uVar23,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar23,cVar5 + 0x39U));
    *pcVar21 = *pcVar21 + bVar4;
    pbVar42 = pbVar35 + 4;
    out(*(undefined4 *)pbVar35,(short)pbVar16);
    goto code_r0x00405396;
  }
  pbVar43 = pbVar35 + 4;
  out(*(undefined4 *)pbVar35,(short)iVar31);
  pcVar11 = (char *)(iVar24 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar16 = (byte *)CONCAT31(uVar22,bVar6 | *(byte *)puVar44);
  goto code_r0x004052ee;
}


