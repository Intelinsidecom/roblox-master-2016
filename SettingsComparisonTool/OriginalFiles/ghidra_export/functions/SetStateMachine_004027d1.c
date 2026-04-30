/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004027d1
 * Raw Name    : SetStateMachine
 * Demangled   : SetStateMachine
 * Prototype   : void SetStateMachine(byte * param0, byte * param_2, byte * param_3, int param_4)
 * Local Vars  : uVar47, puVar46, uVar49, uVar48, uVar50, in_CS, in_DS, in_SS, bVar51, in_GS_OFFSET, in_TF, in_AF, bVar52, in_IF, in_NT, bVar53, unaff_retaddr, uVar54, pcStackY_7c, puStackY_30, pbStackY_44, uStackY_28, puStackY_2c, uStack_4, uStack_8, uVar2, iVar1, uVar4, pcVar3, bVar6, uVar5, bVar8, cVar7, cVar10, bVar9, uVar11, in_EAX, pcVar13, pbVar12, uVar15, uVar14, piVar17, puVar16, pcVar19, iVar18, piVar21, puVar20, puVar23, pbVar22, iVar25, uVar24, extraout_ECX_00, extraout_ECX, extraout_ECX_02, extraout_ECX_01, cVar27, uVar26, bVar29, param_2, bVar28, param_3, param_4, uVar31, cVar30, uVar33, uVar32, pbVar35, pbVar34, uVar37, puVar36, unaff_EBX, uVar38, puVar40, pcVar39, cVar42, bVar41, param0, pbVar43, unaff_EBP, puVar44, unaff_ESI, puVar45, unaff_EDI
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall SetStateMachine(byte *param0,byte *param_2,byte *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined3 uVar24;
  uint uVar11;
  int3 iVar25;
  char *in_EAX;
  byte *pbVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  int iVar18;
  char *pcVar19;
  uint *puVar20;
  int *piVar21;
  byte *pbVar22;
  ushort *puVar23;
  char cVar27;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar28;
  byte bVar29;
  char cVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined4 uVar26;
  undefined2 uVar33;
  byte *pbVar34;
  undefined3 uVar37;
  byte *pbVar35;
  uint *puVar36;
  undefined1 uVar38;
  byte bVar41;
  undefined4 unaff_EBX;
  char cVar42;
  char *pcVar39;
  uint *puVar40;
  byte *pbVar43;
  byte *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar44;
  byte *unaff_EDI;
  uint *puVar45;
  uint *puVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort in_CS;
  ushort uVar50;
  ushort in_SS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar51;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar52;
  bool bVar53;
  byte in_NT;
  undefined8 uVar54;
  byte *unaff_retaddr;
  char *pcStackY_7c;
  byte *pbStackY_44;
  uint *puStackY_30;
  uint *puStackY_2c;
  undefined4 uStackY_28;
  ushort uStack_8;
  ushort uStack_4;
  
  bVar52 = false;
                    /* .NET CLR Managed Code */
  pbVar12 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)((int)param_2 * 5),
                                      (char)unaff_EBX));
  do {
    pbVar12[(int)in_EAX] = pbVar12[(int)in_EAX] + (char)in_EAX;
    *in_EAX = *in_EAX - (char)pbVar12;
    *param_2 = *param_2 + (char)param0;
    uVar24 = (undefined3)((uint)in_EAX >> 8);
    bVar6 = (char)in_EAX - *in_EAX;
    pbVar35 = (byte *)CONCAT31(uVar24,bVar6);
    *pbVar12 = *pbVar12 + (char)param_2;
    *param_2 = *param_2 ^ bVar6;
    *param_2 = *param_2 + bVar6;
    *pbVar35 = *pbVar35 + bVar6;
    uVar47 = (ushort)unaff_retaddr;
    bVar9 = *pbVar35;
    *pbVar35 = *pbVar35 + bVar6;
    *(byte **)param_2 = param_2 + (uint)CARRY1(bVar9,bVar6) + *(int *)param_2;
    bVar9 = *param_2;
    *param_2 = *param_2 + bVar6;
    if (SCARRY1(bVar9,bVar6) == (char)*param_2 < '\0') {
      pcVar39 = (char *)((uint)pbVar35 | 2);
      unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
      *pcVar39 = *pcVar39 + (char)pcVar39;
      in_SS = (ushort)param_3;
    }
    else {
      *pbVar35 = *pbVar35 + bVar6;
      cVar7 = bVar6 + 0x12;
      pcVar39 = (char *)CONCAT31(uVar24,cVar7);
      bVar9 = *pbVar12;
      *pbVar12 = *pbVar12 + cVar7;
      if (SCARRY1(bVar9,cVar7) != (char)*pbVar12 < '\0') {
        *pcVar39 = *pcVar39 + cVar7;
        cVar7 = bVar6 + 0x24;
        pcVar39 = (char *)CONCAT31(uVar24,cVar7);
        *pcVar39 = *pcVar39 + (char)((uint)param0 >> 8);
        *pcVar39 = *pcVar39 + cVar7;
        bVar41 = (byte)((uint)pbVar12 >> 8) | unaff_EBP[-0x6e];
        pcVar13 = (char *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(bVar41,(char)pbVar12));
        *pcVar39 = *pcVar39 + cVar7;
        cRam0000917d = cRam0000917d + (char)param_2;
        bVar8 = bVar6 + 0x48;
        pcVar13[-0x6e] = pcVar13[-0x6e] + bVar41;
        *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
        bVar9 = bVar6 + 0x53 + *param_3;
        cVar7 = bVar9 + (0xf4 < bVar8);
        cVar7 = cVar7 + *(char *)CONCAT31(uVar24,cVar7) +
                (CARRY1(bVar6 + 0x53,*param_3) || CARRY1(bVar9,0xf4 < bVar8));
        pcVar39 = (char *)CONCAT31(uVar24,cVar7);
        *pcVar13 = *pcVar13 - (char)param_3;
        *pcVar39 = *pcVar39 + cVar7;
        pbVar35 = param_2 + -*(int *)param_2;
        *(char *)((int)pbVar35 * 5) = *(char *)((int)pbVar35 * 5) + bVar41;
        pcVar39[(int)unaff_EBP] = pcVar39[(int)unaff_EBP] + cVar7;
        *pcVar39 = *pcVar39 + cVar7;
        bVar6 = (byte)((uint)param_3 >> 8) | *pbVar35;
        uVar38 = (undefined1)param_4;
        cVar42 = (char)((uint)param_4 >> 8) + *(char *)(param_4 + 0xf);
        *pcVar39 = *pcVar39 + cVar7;
        bVar9 = cVar7 + 0x2aU & *pbVar35;
        iVar18 = *(int *)(unaff_EBP + 0xf);
        *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
        pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
        cVar42 = cVar42 + *(char *)(CONCAT22(param_4._2_2_,CONCAT11(cVar42,uVar38)) + 0x10);
        *pcVar39 = *pcVar39 + bVar9 + 0x2a;
        bVar9 = bVar9 + 0x54 & *pbVar35;
        iVar1 = *(int *)(unaff_EBP + 0x10);
        *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
        pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
        puVar40 = (uint *)CONCAT22(param_4._2_2_,
                                   CONCAT11(cVar42 + *(char *)(CONCAT22(param_4._2_2_,
                                                                        CONCAT11(cVar42,uVar38)) +
                                                              0x11),uVar38));
        *pcVar39 = *pcVar39 + bVar9 + 0x2a;
        bVar9 = bVar9 + 0x54 & *pbVar35;
        puVar45 = (uint *)(unaff_EDI + *(int *)(unaff_EBP + 0x11) + iVar1 + iVar18);
        *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
        pbVar12 = (byte *)CONCAT31(uVar24,bVar9 + 0x2a);
        puVar20 = (uint *)CONCAT22((short)((uint)param_3 >> 0x10),
                                   CONCAT11(bVar6 + *pbVar12,(char)param_3));
        uVar54 = CONCAT44(pbVar35,pbVar12 + (uint)CARRY1(bVar6,*pbVar12) + *(int *)pbVar12);
        do {
          puVar36 = (uint *)((ulonglong)uVar54 >> 0x20);
          *(byte *)puVar36 = (byte)*puVar36 + (char)puVar20;
          cVar7 = (char)puVar40 - (byte)*unaff_ESI;
          iVar18 = CONCAT22((short)((uint)puVar40 >> 0x10),
                            CONCAT11((char)((uint)puVar40 >> 8) +
                                     *(char *)(CONCAT31((int3)((uint)puVar40 >> 8),cVar7) + 0x12),
                                     cVar7));
          *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
          uVar24 = (undefined3)((ulonglong)uVar54 >> 8);
          bVar9 = (char)uVar54 + 0x2aU & (byte)*puVar36;
          pcVar39 = (char *)CONCAT31(uVar24,bVar9);
          puVar45 = (uint *)((int)puVar45 + *(int *)(unaff_EBP + 0x12));
          *pcVar39 = *pcVar39 + bVar9;
          puVar16 = (uint *)CONCAT31(uVar24,bVar9 + 0x2a);
          uStack_8 = in_DS;
get_Value:
          cVar7 = *(char *)(iVar18 + 0x13);
          *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
          uVar24 = (undefined3)((uint)puVar16 >> 8);
          bVar9 = (char)puVar16 + 0x2aU & (byte)*puVar36;
          pcVar39 = (char *)CONCAT31(uVar24,bVar9);
          puVar45 = (uint *)((int)puVar45 + *(int *)(unaff_EBP + 0x13));
          *pcVar39 = *pcVar39 + bVar9;
          pbVar12 = (byte *)CONCAT31(uVar24,bVar9 + 0x2a);
          bVar9 = (byte)((uint)puVar20 >> 8);
          bVar6 = bVar9 + *pbVar12;
          pbVar12 = pbVar12 + (uint)CARRY1(bVar9,*pbVar12) + *(int *)pbVar12;
          *(byte *)puVar36 = (byte)*puVar36 + (char)puVar20;
          puVar40 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar18 >> 0x10),
                                                     CONCAT11((char)((uint)iVar18 >> 8) + cVar7,
                                                              (char)iVar18)) >> 8),
                                     (char)iVar18 - (byte)*unaff_ESI);
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                     CONCAT11(bVar6 + *pbVar12,(char)puVar20));
          pbVar12 = pbVar12 + (uint)CARRY1(bVar6,*pbVar12) + *(int *)pbVar12;
          uVar49 = in_DS;
code_r0x00402898:
          *(byte *)puVar36 = (byte)*puVar36 + (char)puVar20;
          bVar9 = (byte)puVar36;
          uVar31 = CONCAT11((char)((uint)puVar36 >> 8) - (byte)*unaff_ESI,bVar9);
          pbVar35 = (byte *)CONCAT22((short)((uint)puVar36 >> 0x10),uVar31);
          pcVar39 = (char *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                     CONCAT11((char)((uint)puVar40 >> 8) + (byte)puVar40[-0x19],
                                              (char)puVar40));
          *pbVar12 = *pbVar12 + (char)pbVar12;
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + '\x03');
          puVar40 = unaff_ESI;
          do {
            unaff_ESI = puVar40 + 1;
            out(*puVar40,uVar31);
            pcVar39 = pcVar39 + -1;
            bVar6 = (byte)pbVar12;
            *pbVar12 = *pbVar12 + bVar6;
            puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                       CONCAT11((byte)((uint)puVar20 >> 8) | *pbVar35,(char)puVar20)
                                      );
            *pbVar12 = *pbVar12 + bVar6;
            *pcVar39 = *pcVar39 + bVar9;
            *(byte *)((int)pbVar12 * 2) = *(byte *)((int)pbVar12 * 2) ^ bVar6;
            *pbVar12 = *pbVar12 + bVar6;
            *pbVar12 = *pbVar12 | bVar6;
            bVar51 = CARRY1((byte)*puVar20,bVar9);
            *(byte *)puVar20 = (byte)*puVar20 + bVar9;
            cVar7 = bVar6 + 10 + bVar51;
            pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar7);
            puVar40 = unaff_ESI;
          } while (bVar6 < 0xf6 && !CARRY1(bVar6 + 10,bVar51));
          *pbVar12 = *pbVar12 + cVar7;
          pcVar13 = (char *)((uint)pbVar12 | *puVar45);
          puVar40 = (uint *)CONCAT22((short)((uint)pcVar39 >> 0x10),
                                     CONCAT11((char)((uint)pcVar39 >> 8) + unaff_EBP[-100],
                                              (char)pcVar39));
          *pcVar13 = *pcVar13 + (char)pcVar13;
          bVar9 = (char)pcVar13 + 7;
          uVar54 = CONCAT44(pbVar35,CONCAT31((int3)((uint)pcVar13 >> 8),bVar9));
code_r0x004028c8:
          puVar36 = (uint *)((ulonglong)uVar54 >> 0x20);
        } while ((POPCOUNT(bVar9) & 1U) != 0);
        *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
        puVar16 = (uint *)CONCAT31((int3)((ulonglong)uVar54 >> 8),(char)uVar54 + '-');
        unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)puVar36 + 0x3b));
        bVar51 = CARRY4(*puVar16,(uint)puVar16);
        uVar14 = *puVar16;
        *puVar16 = (uint)(*puVar16 + (int)puVar16);
        if (SCARRY4(uVar14,(int)puVar16)) {
          bVar51 = CARRY4(*puVar16,(uint)puVar16);
          bVar53 = SCARRY4(*puVar16,(int)puVar16);
          *puVar16 = (uint)(*puVar16 + (int)puVar16);
          bVar9 = POPCOUNT(*puVar16 & 0xff);
          if (bVar53) goto code_r0x004029be;
          goto code_r0x0040294c;
        }
        do {
          puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),(char)puVar16 + bVar51);
          *(byte *)puVar36 = (byte)*puVar36 + (char)puVar20;
          bVar51 = (POPCOUNT((byte)*puVar36) & 1U) == 0;
          if (bVar51) goto code_r0x004028e2;
code_r0x004028db:
          if (!bVar51) {
            iVar18 = CONCAT31((int3)((uint)puVar40 >> 8),(char)puVar40 - (byte)*unaff_ESI);
            goto get_Value;
          }
          *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
          puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),(char)puVar16 + 'r');
          uStack_8 = (ushort)unaff_EBP;
code_r0x004028e2:
          uVar14 = *puVar16;
          *puVar16 = (uint)(*puVar16 + (int)puVar16);
          if (SCARRY4(uVar14,(int)puVar16)) {
            if (*puVar16 == 0 || SCARRY4(uVar14,(int)puVar16) != (int)*puVar16 < 0)
            goto code_r0x0040296d;
            goto code_r0x00402957;
          }
          puVar40 = (uint *)((int)puVar40 + -1);
          cVar7 = (char)puVar16;
          *(byte *)puVar16 = (byte)*puVar16 + cVar7;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                     CONCAT11((byte)((uint)puVar20 >> 8) |
                                              *(byte *)((int)puVar20 + 0x16d7207),(char)puVar20));
          pbVar12 = (byte *)((int)puVar16 + 0x7d);
          bVar9 = *pbVar12;
          bVar8 = (byte)((uint)puVar36 >> 8);
          bVar6 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar8;
          uVar49 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY1(bVar6,bVar8) * 0x800 |
                   (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
                   (ushort)((char)*pbVar12 < '\0') * 0x80 | (ushort)(*pbVar12 == 0) * 0x40 |
                   (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(*pbVar12) & 1U) == 0) * 4 |
                   (ushort)CARRY1(bVar9,bVar8);
          *(byte *)puVar16 = (byte)*puVar16 + cVar7;
          pbVar12 = (byte *)(CONCAT31((int3)((uint)puVar16 >> 8),cVar7 + '+') ^ *puVar45);
          if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) goto code_r0x00402898;
          bVar9 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar9;
          puVar16 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar9 + 0x72);
          if (bVar9 < 0x8e && (byte)(bVar9 + 0x72) != '\0') {
            uVar50 = in_CS;
            if (SCARRY1(bVar9,'r')) goto code_r0x00402974;
          }
          else {
            *(byte *)((int)puVar16 + 0x6f) = *(byte *)((int)puVar16 + 0x6f) + bVar8;
          }
code_r0x00402905:
          uVar47 = uVar49;
          uVar54 = CONCAT44(puVar36,puVar16);
          puVar40 = (uint *)((int)puVar40 + -1);
          cVar7 = (char)puVar16;
          *(byte *)puVar16 = (byte)*puVar16 + cVar7;
          bVar9 = (byte)((uint)puVar20 >> 8) | (byte)*puVar20;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar9,(char)puVar20));
          if ((char)bVar9 < '\x01') {
            *(byte *)puVar16 = (byte)*puVar16 + cVar7;
            puVar45 = (uint *)((int)puVar45 - *(int *)(unaff_EBP + -100));
            uVar49 = uVar47;
            goto code_r0x00402929;
          }
          *(byte *)puVar16 = (byte)*puVar16 + cVar7;
          uVar49 = 0x291c;
          uVar54 = func_0x7346291c();
          *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
          puVar20 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                                     (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar54 >> 0x20));
          puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,uVar47);
          uStackY_28 = puVar40;
          while( true ) {
            pcVar39 = (char *)((int)uVar54 * 2);
            *pcVar39 = *pcVar39 - (char)puVar20;
            uVar14 = *puVar40;
            cVar7 = (char)((uint)puVar20 >> 8);
            *(byte *)puVar40 = (byte)*puVar40 + cVar7;
            if (SCARRY1((byte)uVar14,cVar7) == (char)(byte)*puVar40 < '\0') {
              pbVar12 = (byte *)((int)puVar45 + (int)uVar54);
              *pbVar12 = *pbVar12 + (char)uVar54;
              bVar9 = *pbVar12;
              goto code_r0x004028c8;
            }
code_r0x00402929:
            puVar36 = (uint *)((ulonglong)uVar54 >> 0x20);
            cVar7 = (char)uVar54;
            *(char *)uVar54 = *(char *)uVar54 + cVar7;
            uVar24 = (undefined3)((ulonglong)uVar54 >> 8);
            bVar9 = cVar7 + 7;
            puVar16 = (uint *)CONCAT31(uVar24,bVar9);
            bVar6 = (byte)((ulonglong)uVar54 >> 0x28);
            if ((POPCOUNT(bVar9) & 1U) != 0) break;
            *(byte *)puVar16 = (byte)*puVar16 + bVar9;
            pcVar39 = (char *)CONCAT31(uVar24,cVar7 + '3');
            uVar31 = (undefined2)((uint)puVar40 >> 0x10);
            uVar38 = SUB41(puVar40,0);
            bVar9 = (char)((uint)puVar40 >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar9);
            puVar40 = (uint *)CONCAT22(uVar31,CONCAT11(bVar9,uVar38));
            *pcVar39 = *pcVar39 + cVar7 + '3';
            cVar42 = cVar7 + ':';
            puVar16 = (uint *)CONCAT31(uVar24,cVar42);
            if ((POPCOUNT(cVar42) & 1U) != 0) {
              bVar9 = bVar9 | *(byte *)((int)puVar36 + 7);
              puVar40 = (uint *)CONCAT22(uVar31,CONCAT11(bVar9,uVar38));
              bVar51 = (POPCOUNT(bVar9) & 1U) == 0;
              goto code_r0x004028db;
            }
            *(byte *)puVar16 = (byte)*puVar16 + cVar42;
            puVar16 = (uint *)(CONCAT31(uVar24,cVar7 + 'b') & 0xffffff72 | 0x2d2b0000);
            pbVar12 = (byte *)((int)puVar16 + 0x72);
            bVar53 = SCARRY1(*pbVar12,bVar6);
            *pbVar12 = *pbVar12 + bVar6;
            bVar9 = POPCOUNT(*pbVar12);
code_r0x0040294c:
            if ((bVar9 & 1) == 0) {
              *(byte *)((int)puVar16 + 0x72) =
                   *(byte *)((int)puVar16 + 0x72) + (char)((uint)puVar36 >> 8);
            }
            else if (bVar53) {
              unaff_EBP = *(byte **)unaff_EBP;
              cVar7 = cRamc9721806;
              goto code_r0x004029c4;
            }
            unaff_EBP = (byte *)0x7e700001;
            puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,in_SS);
code_r0x00402957:
            *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
            cVar7 = (char)puVar16 + '(';
            puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),cVar7);
            *(byte *)puVar16 = (byte)*puVar16 + cVar7;
            puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                       CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar16,
                                                (char)puVar20));
            *(byte *)puVar16 = (byte)*puVar16 + cVar7;
            puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                       CONCAT11((byte)((uint)puVar36 >> 8) | (byte)puVar40[0x18],
                                                (char)puVar36));
            unaff_ESI = puStackY_30;
            puVar45 = puStackY_2c;
code_r0x00402966:
            *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
            bVar9 = (byte)((uint)puVar40 >> 8) | *(byte *)((int)puVar36 + 7);
            puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar9,(char)puVar40))
            ;
            if ((POPCOUNT(bVar9) & 1U) != 0) {
              puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),(char)puVar16 + -0x21);
              goto code_r0x00402905;
            }
code_r0x0040296d:
            *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
            puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),(char)puVar16 + '~');
            uVar48 = in_SS;
code_r0x00402972:
            *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
            uVar50 = in_CS;
            uVar49 = uVar48;
code_r0x00402974:
            bVar9 = 0xe9 < (byte)puVar16;
            in_CS = 0x2d0a;
            uVar54 = func_0x00006128(uVar50);
            puVar20 = (uint *)uVar54;
            piVar21 = (int *)((int)((ulonglong)uVar54 >> 0x20) + -0x3d);
            *piVar21 = (int)((int)unaff_ESI + (uint)bVar9 + *piVar21);
            bVar51 = SCARRY4(*puVar20,(int)puVar20);
            *puVar20 = *puVar20 + (int)puVar20;
            uVar14 = *puVar20;
            puVar20 = extraout_ECX_02;
            uVar48 = uVar47;
code_r0x00402982:
            bVar9 = POPCOUNT(uVar14 & 0xff);
            uVar47 = uVar48;
            if (bVar51) {
              *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
              puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                         CONCAT11((byte)((uint)puVar20 >> 8) |
                                                  *(byte *)((ulonglong)uVar54 >> 0x20),(char)puVar20
                                                 ));
              goto code_r0x00402991;
            }
code_r0x00402984:
            pcVar39 = (char *)((ulonglong)uVar54 >> 0x20);
            if ((bVar9 & 1) == 0) {
              *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
              *pcVar39 = *pcVar39 + (char)puVar20;
              uVar54 = CONCAT44(CONCAT22((short)((ulonglong)uVar54 >> 0x30),
                                         CONCAT11((char)((ulonglong)uVar54 >> 0x28) - pcVar39[0x1f],
                                                  (char)((ulonglong)uVar54 >> 0x20))),
                                CONCAT31((int3)((ulonglong)uVar54 >> 8),(char)uVar54 + '('));
code_r0x00402991:
              puVar36 = (uint *)((ulonglong)uVar54 >> 0x20);
              pbVar12 = (byte *)uVar54;
              bVar9 = (byte)uVar54;
              bVar51 = CARRY1(bVar9,*pbVar12);
              puVar16 = (uint *)CONCAT31((int3)((ulonglong)uVar54 >> 8),bVar9 + *pbVar12);
              uVar48 = uVar47;
              cVar7 = bVar9 + *pbVar12;
              if (SCARRY1(bVar9,*pbVar12)) goto code_r0x004029c4;
code_r0x00402995:
              puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                         CONCAT11(((char)((uint)puVar36 >> 8) -
                                                  *(byte *)((int)puVar36 + 0x6b)) - bVar51,
                                                  (char)puVar36));
              bVar9 = (byte)puVar16;
              bVar51 = CARRY1(bVar9,(byte)*puVar16);
              bVar53 = SCARRY1(bVar9,(byte)*puVar16);
              puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar9 + (byte)*puVar16);
              uVar47 = uVar48;
              do {
                uVar48 = uVar47;
                if (!bVar53) {
                  unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar51 + *puVar16);
                  pbVar12 = (byte *)((int)puVar16 + *puVar16);
                  bVar6 = (byte)pbVar12;
                  *pbVar12 = *pbVar12 + bVar6;
                  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
                  bVar9 = *pbVar12;
                  *pbVar12 = *pbVar12 + bVar6;
                  *puVar45 = (uint)((int)puVar40 + (uint)CARRY1(bVar9,bVar6) + *puVar45);
                  *(uint *)(unaff_EBP + 0x100002b) =
                       *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar20;
                  uVar24 = (undefined3)((uint)pbVar12 >> 8);
                  bVar6 = bVar6 | (byte)*unaff_ESI;
                  puVar16 = (uint *)CONCAT31(uVar24,bVar6);
                  uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
                  uVar14 = *puVar16;
                  uVar11 = *puVar16;
                  *puVar16 = (uint)(*puVar16 + (int)puVar16);
                  if (SCARRY4(uVar11,(int)puVar16)) {
                    *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)puVar40;
                    *(byte *)puVar36 = (byte)*puVar36 + (char)puVar20;
                    *(byte *)puVar45 = (byte)*puVar45 - (char)puVar40;
                  }
                  else {
                    puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,uVar47);
                    in_SS = uVar47;
                    if (CARRY4(uVar14,(uint)puVar16)) goto code_r0x00402972;
                    bVar51 = CARRY1(bVar6,(byte)*puVar16);
                    bVar53 = SCARRY1(bVar6,(byte)*puVar16);
                    puVar16 = (uint *)CONCAT31(uVar24,bVar6 + (byte)*puVar16);
code_r0x004029be:
                    uVar48 = uVar47;
                    if (!bVar53) {
                      puStackY_2c = (uint *)CONCAT22(puStackY_2c._2_2_,uVar47);
                      *(byte *)((int)puVar36 + -0x37) =
                           (*(byte *)((int)puVar36 + -0x37) - (char)((uint)puVar36 >> 8)) - bVar51;
                      cVar7 = cRamc9721806;
code_r0x004029c4:
                      cRamc9721806 = cVar7;
                      bVar9 = (byte)puVar16;
                      bVar51 = CARRY1(bVar9,(byte)*puVar16);
                      bVar53 = SCARRY1(bVar9,(byte)*puVar16);
                      puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar9 + (byte)*puVar16);
                      uVar48 = uVar47;
                      goto code_r0x004029c6;
                    }
                  }
                  bVar9 = (byte)puVar20;
                  bVar51 = CARRY1((byte)*puVar36,bVar9);
                  bVar53 = SCARRY1((byte)*puVar36,bVar9);
                  *(byte *)puVar36 = (byte)*puVar36 + bVar9;
                  uVar47 = uVar48;
                  if (bVar51) goto code_r0x00402966;
                }
code_r0x004029c6:
                uVar47 = uStack_8;
                if (bVar53) goto code_r0x00402966;
                *(uint *)((int)puVar36 + -0x23) =
                     (*(int *)((int)puVar36 + -0x23) - (int)unaff_ESI) - (uint)bVar51;
                uVar14 = *puVar16;
                bVar6 = (byte)puVar16;
                uVar11 = *puVar16;
                uVar24 = (undefined3)((uint)puVar16 >> 8);
                bVar9 = bVar6 + (byte)*puVar16;
                puVar16 = (uint *)CONCAT31(uVar24,bVar9);
                uVar47 = uVar48;
                if (SCARRY1(bVar6,(byte)uVar11)) goto code_r0x00402972;
                cVar7 = (char)puVar36;
                bVar8 = ((char)((uint)puVar36 >> 8) - *(byte *)((int)puVar36 + -0xf)) -
                        CARRY1(bVar6,(byte)uVar14);
                puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar8,cVar7));
                puVar44 = (uint *)CONCAT31(uVar24,bVar9 + (byte)*puVar16);
                bVar6 = (byte)puVar20;
                uVar49 = uVar48;
                if (SCARRY1(bVar9,(byte)*puVar16)) {
                  *(byte *)puVar36 = (byte)*puVar36 + bVar6;
                  uVar54 = CONCAT44(puVar36,(int)puVar44 + -0x1c37211);
                  pcVar39 = (char *)((int)puVar44 + -0x1c3720a);
                  *pcVar39 = *pcVar39 + bVar8;
                  bVar9 = POPCOUNT(*pcVar39);
                  goto code_r0x00402984;
                }
                unaff_ESI = (uint *)((int)unaff_ESI +
                                    (-(uint)CARRY1(bVar9,(byte)*puVar16) -
                                    *(int *)((int)puVar36 + 5)));
                bVar51 = SCARRY4((int)puVar44,*puVar44);
                uVar14 = (int)puVar44 + *puVar44;
                uVar54 = CONCAT44(puVar36,uVar14);
                if (bVar51) goto code_r0x00402982;
                bVar9 = (byte)uVar14 + 0x8e;
                uVar15 = CONCAT31((int3)(uVar14 >> 8),bVar9 - CARRY4((uint)puVar44,*puVar44));
                *puVar40 = (*puVar40 - uVar15) -
                           (uint)((byte)uVar14 < 0x72 || bVar9 < CARRY4((uint)puVar44,*puVar44));
                pbVar12 = (byte *)(uVar15 - 0x5e);
                bVar9 = *pbVar12;
                *pbVar12 = *pbVar12 + bVar8;
                uVar14 = (uint)CARRY1(bVar9,bVar8);
                uVar11 = uVar15 - 0x32d72;
                puVar16 = (uint *)(uVar11 - uVar14);
                if (SBORROW4(uVar15,0x32d72) != SBORROW4(uVar11,uVar14)) goto code_r0x00402992;
                uVar50 = in_DS;
                if (uVar15 < 0x32d72 || uVar11 < uVar14) {
                  *unaff_EBP = *unaff_EBP - (char)((uint)puVar16 >> 8);
                  *(byte *)puVar36 = (byte)*puVar36 + bVar6;
                  puVar44 = unaff_ESI + 1;
                  out(*unaff_ESI,CONCAT11(bVar8,cVar7));
                  *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
                  goto code_r0x00402a3e;
                }
                bVar51 = CARRY4((uint)puVar16,*puVar16);
                bVar53 = SCARRY4((int)puVar16,*puVar16);
                puVar16 = (uint *)((int)puVar16 + *puVar16);
                if (!bVar53) {
                  uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar48);
                  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar51;
                  bVar9 = (byte)puVar16;
                  *(byte *)((int)puVar36 + (int)unaff_EBP) =
                       *(byte *)((int)puVar36 + (int)unaff_EBP) + bVar9;
                  *(byte *)puVar40 = (byte)*puVar40 + cVar7;
                  *(byte *)puVar40 = (byte)*puVar40 ^ bVar9;
                  bVar28 = (byte)((uint)puVar20 >> 8);
                  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar28;
                  *(byte *)puVar16 = (byte)*puVar16 + bVar9;
                  pbVar35 = (byte *)CONCAT31((int3)((uint)puVar16 >> 8),bVar9 | (byte)*puVar16);
                  *(byte *)puVar20 = (byte)*puVar20 + cVar7;
                  bVar41 = *pbVar35;
                  uVar31 = (undefined2)((uint)puVar20 >> 0x10);
                  puVar20 = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar41,bVar6));
                  pbVar35 = pbVar35 + (uint)CARRY1(bVar28,*pbVar35) + *(int *)pbVar35;
                  *(byte *)puVar36 = (byte)*puVar36 + bVar6;
                  unaff_EBP = unaff_EBP + iRam0355720b;
                  pbVar12 = pbVar35 + 0x73;
                  bVar9 = *pbVar12;
                  *pbVar12 = *pbVar12 + bVar8;
                  uVar24 = (undefined3)((uint)pbVar35 >> 8);
                  bVar9 = (char)pbVar35 + CARRY1(bVar9,bVar8);
                  pcVar39 = (char *)CONCAT31(uVar24,bVar9);
                  *(byte *)puVar36 = (byte)*puVar36 + bVar6;
                  if ((POPCOUNT((byte)*puVar36) & 1U) == 0) {
                    in_SS = uVar48;
                  }
                  puVar46 = (uint *)((int)puVar45 + *(int *)(unaff_EBP + 0x17));
                  *pcVar39 = *pcVar39 + bVar9;
                  cVar7 = bVar9 + 2;
                  puVar16 = (uint *)CONCAT31(uVar24,cVar7);
                  if (bVar9 < 0xfe) {
                    *puVar16 = (uint)(*puVar16 + (int)puVar16);
                    goto code_r0x00402a8f;
                  }
                  *(byte *)puVar16 = (byte)*puVar16 + cVar7;
                  uVar14 = *puVar36;
                  puVar44 = (uint *)((int)unaff_ESI + puVar40[0x19]);
                  *(byte *)puVar16 = (byte)*puVar16 + cVar7;
                  puVar20 = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar41 | (byte)*puVar16,
                                                             bVar6 | (byte)uVar14));
                  puVar45 = puVar46;
                  goto code_r0x00402a36;
                }
              } while( true );
            }
          }
          unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar9;
          pbVar12 = (byte *)((int)puVar16 + 0x73);
          bVar51 = CARRY1(*pbVar12,bVar6);
          *pbVar12 = *pbVar12 + bVar6;
        } while( true );
      }
    }
    cVar7 = (char)pcVar39 + '\x02';
    piVar21 = (int *)CONCAT31((int3)((uint)pcVar39 >> 8),cVar7);
    pbVar35 = param0;
    pbVar22 = param_2;
    if (SCARRY1((char)pcVar39,'\x02') != cVar7 < '\0') goto code_r0x00402724;
    while( true ) {
      cVar7 = (char)piVar21;
      *(char *)piVar21 = (char)*piVar21 + cVar7;
      uVar24 = (undefined3)((uint)piVar21 >> 8);
      cVar42 = cVar7 + '\b';
      *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)param_2;
      *param_2 = *param_2 + (char)pbVar35;
      unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
      *(char *)CONCAT31(uVar24,cVar42) = *(char *)CONCAT31(uVar24,cVar42) + cVar42;
      bVar9 = cVar7 + 10;
      pcVar39 = (char *)CONCAT31(uVar24,bVar9);
      if (SCARRY1(cVar42,'\x02') == (char)bVar9 < '\0') break;
      pbVar22 = unaff_EBP + 0x6fe1411;
      bVar51 = CARRY1(*pbVar22,bVar9);
      *pbVar22 = *pbVar22 + bVar9;
      param0 = pbVar35;
code_r0x00402740:
      uVar24 = (undefined3)((uint)pcVar39 >> 8);
      bVar9 = ((char)pcVar39 - *pcVar39) - bVar51;
      puVar45 = (uint *)CONCAT31(uVar24,bVar9);
      uVar14 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar9;
      pbVar35 = param0;
      puVar20 = unaff_ESI;
      uVar49 = in_CS;
      if (CARRY1((byte)uVar14,bVar9)) {
        do {
          *(byte *)puVar45 = (char)*puVar45 + (byte)puVar45;
          uVar24 = (undefined3)((uint)puVar45 >> 8);
          bVar9 = (byte)puVar45 | *(byte *)((int)puVar45 + 0x400000e);
          pcVar39 = (char *)CONCAT31(uVar24,bVar9);
          unaff_ESI = puVar20;
          if ('\0' < (char)bVar9) {
            *pcVar39 = *pcVar39 + bVar9;
            bVar9 = bVar9 + 0x28 | *(byte *)CONCAT31(uVar24,bVar9 + 0x28);
            *pbVar12 = *pbVar12 + (char)((uint)pbVar35 >> 8);
            unaff_ESI = puVar20 + 1;
            out(*puVar20,(short)param_2);
            *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
            pcVar39 = (char *)(uint)(bVar9 | *param_2);
            unaff_retaddr = unaff_EBP;
          }
          bVar9 = (byte)pcVar39 & 0x7b;
          bVar51 = (char)(bVar9 + 0x17) < '\0';
          if (SCARRY1(bVar9,'\x17') == bVar51) {
            pbVar22 = param_3;
            if (SCARRY1(bVar9,'\x17') == bVar51) goto code_r0x00402697;
            goto code_r0x00402700;
          }
          cVar42 = (char)param_3;
          *param_3 = *param_3 + cVar42;
          iVar25 = (int3)((uint)param_3 >> 8);
          cVar7 = cVar42 + '\x02';
          pbVar22 = (byte *)CONCAT31(iVar25,cVar7);
          bVar51 = (POPCOUNT(cVar7) & 1U) == 0;
          param0 = pbVar35;
          in_CS = uVar49;
          if (bVar51) {
            *pbVar22 = *pbVar22 + cVar7;
            cVar42 = cVar42 + '\x04';
            pcVar39 = (char *)CONCAT31(iVar25,cVar42);
            if ((POPCOUNT(cVar42) & 1U) == 0) {
              *pcVar39 = *pcVar39 + cVar42;
              halt_baddata();
            }
            param_2 = (byte *)((int)iVar25 >> 0x17);
          }
          else {
            while( true ) {
              if (!bVar51) goto code_r0x0040269b;
              *pbVar22 = *pbVar22 + (char)pbVar22;
              cVar7 = (char)pbVar22 + '\x02';
              pcVar39 = (char *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar7);
              pbVar22 = unaff_EDI;
              if ((POPCOUNT(cVar7) & 1U) == 0) break;
              while( true ) {
                bVar9 = (byte)pcVar39;
                pbVar12[(int)param_2] = pbVar12[(int)param_2] + bVar9;
                uVar24 = (undefined3)((uint)pcVar39 >> 8);
                bVar6 = bVar9 + 2 + cRam001b15fe + (0xfd < bVar9);
                bVar9 = *pbVar12;
                bVar8 = (byte)pbVar12;
                *pbVar12 = *pbVar12 + bVar8;
                iRam00009a7d = iRam00009a7d + CONCAT31(uVar24,bVar6) + (uint)CARRY1(bVar9,bVar8);
                iVar18 = CONCAT31(uVar24,bVar6 + 2) + 0x917d + (uint)(0xfd < bVar6);
                cVar7 = (char)iVar18;
                uVar24 = (undefined3)((uint)iVar18 >> 8);
                bVar9 = cVar7 + 0x3a;
                param_3 = (byte *)CONCAT31(uVar24,bVar9);
                *param_3 = *param_3 + bVar9;
                uVar37 = (undefined3)((uint)param_2 >> 8);
                bVar6 = (byte)param_2 | *param_2;
                uVar11 = CONCAT31(uVar24,cVar7 + '8');
                uVar14 = uVar11 + 0x1b00001b;
                pcVar39 = (char *)(uVar14 + (1 < bVar9) + *unaff_ESI +
                                  (uint)(0xe4ffffe4 < uVar11 || CARRY4(uVar14,(uint)(1 < bVar9))));
                bVar9 = bVar6 + *param0;
                param_2 = (byte *)CONCAT31(uVar37,bVar9);
                unaff_retaddr = (byte *)(uint)uVar47;
                uVar24 = (undefined3)((uint)pcVar39 >> 8);
                cVar7 = (char)pcVar39;
                if (SCARRY1(bVar6,*param0) == (char)bVar9 < '\0') {
                  unaff_EBP = unaff_EBP + -1;
                  *pcVar39 = *pcVar39 + cVar7;
                  param_2 = (byte *)CONCAT31(uVar37,bVar9 | *pbVar12);
                  bVar51 = 0xd7 < (byte)(cVar7 + 0x12U);
                  pbVar35 = (byte *)CONCAT31(uVar24,cVar7 + ':');
                  goto code_r0x00402674;
                }
                *pcVar39 = *pcVar39 + cVar7;
                pcVar39 = (char *)CONCAT31(uVar24,cVar7 + '\x02');
                uVar31 = (undefined2)((uint)pbVar12 >> 0x10);
                cVar10 = (char)((uint)pbVar12 >> 8) + pbVar12[-0x68];
                pbVar12 = (byte *)CONCAT22(uVar31,CONCAT11(cVar10,bVar8));
                *pcVar39 = *pcVar39 + cVar7 + '\x02';
                bVar6 = cVar7 + 0x2a;
                pbVar35 = (byte *)CONCAT31(uVar24,bVar6);
                *pbVar35 = *pbVar35 | bVar6;
                bVar9 = *pbVar12;
                cVar42 = (char)((uint)param0 >> 8);
                *pbVar12 = *pbVar12 + cVar42;
                uVar49 = in_CS;
                if (SCARRY1(bVar9,cVar42) == (char)*pbVar12 < '\0') goto code_r0x00402680;
                *pbVar35 = *pbVar35 + bVar6;
                bVar9 = cVar7 + 0x2c;
                if ((POPCOUNT(bVar9) & 1U) == 0) break;
                uVar49 = 0x927c;
                uVar54 = func_0x02040000();
                param_2 = (byte *)((ulonglong)uVar54 >> 0x20);
                *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
                iVar18 = CONCAT31((int3)((ulonglong)uVar54 >> 8),(char)uVar54 + '\x12');
                pbVar35 = extraout_ECX_00;
                unaff_EDI = pbVar22;
                uStack_4 = in_CS;
code_r0x00402693:
                cVar7 = (char)iVar18 + '\x02';
                *unaff_EDI = *unaff_EDI - cVar7;
                pbVar22 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),cVar7);
code_r0x00402697:
                *pbVar22 = *pbVar22 + (char)pbVar22;
                param_2 = param_2 + -*unaff_ESI;
                param0 = pbVar35;
                in_CS = uVar49;
code_r0x0040269b:
                pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),
                                           (byte)pbVar12 | (byte)((uint)param0 >> 8));
                iVar18 = GlobalDescriptorTableRegister();
                *(int *)pbVar22 = iVar18;
                cVar7 = (char)pbVar22;
                *param_2 = *param_2 + cVar7;
                if ((POPCOUNT(*param_2) & 1U) != 0) {
code_r0x0040263f:
                  *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                  cVar7 = (char)unaff_EDI + '\x02';
                  pcVar39 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar7);
                  pbVar43 = unaff_EBP;
                  if ((POPCOUNT(cVar7) & 1U) == 0) {
                    *pcVar39 = *pcVar39 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  do {
                    pbVar35 = pbVar12 + (int)param0;
                    bVar9 = *pbVar35;
                    bVar6 = (byte)pcVar39;
                    *pbVar35 = *pbVar35 + bVar6;
                    uVar24 = (undefined3)((uint)pcVar39 >> 8);
                    cVar7 = bVar6 + *param0 + CARRY1(bVar9,bVar6);
                    cVar7 = cVar7 + *(char *)CONCAT31(uVar24,cVar7) +
                            (CARRY1(bVar6,*param0) || CARRY1(bVar6 + *param0,CARRY1(bVar9,bVar6)));
                    pcVar39 = (char *)CONCAT31(uVar24,cVar7);
                    *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar7;
                    *pcVar39 = *pcVar39 + cVar7;
                    iVar18 = *(int *)param_2;
                    pbVar43[(int)pcVar39 * 4] =
                         pbVar43[(int)pcVar39 * 4] + (char)((uint)pbVar12 >> 8);
                    pcVar39[(int)pbVar43] = pcVar39[(int)pbVar43] + cVar7;
                    pbVar34 = param_2 + (-1 - iVar18);
                    *pcVar39 = *pcVar39 + cVar7;
                    param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),
                                              CONCAT11(((byte)((uint)param0 >> 8) | *pbVar34) +
                                                       pbVar22[0x22],(char)param0));
                    *pcVar39 = *pcVar39 + cVar7;
                    bVar8 = (char)pbVar34 - param_2[1 - iVar18];
                    bVar6 = cVar7 - 0xf;
                    pbVar35 = (byte *)CONCAT31(uVar24,bVar6);
                    param_2 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                               CONCAT11((char)((uint)pbVar34 >> 8) +
                                                        *(char *)(CONCAT31((int3)((uint)pbVar34 >> 8
                                                                                 ),bVar8) + -0x3f),
                                                        bVar8));
                    bVar51 = CARRY1(*pbVar35,bVar6);
                    bVar9 = *pbVar35;
                    *pbVar35 = *pbVar35 + bVar6;
                    unaff_EBP = pbVar43;
                    if (SCARRY1(bVar9,bVar6)) goto code_r0x00402674;
                    pbVar12 = pbVar12 + -1;
                    *pbVar35 = *pbVar35 + bVar6;
                    uVar14 = *unaff_ESI;
                    *param0 = *param0 + 1;
                    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),
                                               (bVar8 | (byte)uVar14) - (byte)*unaff_ESI);
                    unaff_ESI = (uint *)((int)unaff_ESI +
                                        (-(uint)(bVar6 < *pbVar35) -
                                        *(int *)CONCAT31(uVar24,bVar6 - *pbVar35)));
                    unaff_EBP = (byte *)CONCAT31(uVar24,bVar6 - *pbVar35);
                    *(byte **)pbVar43 = pbVar43 + *(int *)pbVar43;
                    bVar6 = (byte)pbVar43;
                    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
                    bVar9 = *pbVar43;
                    *pbVar43 = *pbVar43 + bVar6;
                    *(byte **)pbVar22 = param_2 + (uint)CARRY1(bVar9,bVar6) + *(int *)pbVar22;
                    uVar24 = (undefined3)((uint)pbVar43 >> 8);
                    bVar6 = bVar6 | *param_2;
                    pcVar39 = (char *)CONCAT31(uVar24,bVar6);
                    if ((POPCOUNT(bVar6) & 1U) == 0) {
                      *pcVar39 = *pcVar39 + bVar6;
                      bVar9 = bVar6 + 0xd;
                      pbVar35 = (byte *)CONCAT31(uVar24,bVar9);
                      *unaff_ESI = *unaff_ESI | (uint)param_2;
                      if (-1 < (int)*unaff_ESI) goto code_r0x00402678;
                      *pbVar35 = *pbVar35 + bVar9;
                      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar12 >> 8) |
                                                          unaff_EBP[-0x6b],(char)pbVar12));
                      *pbVar35 = *pbVar35 + bVar9;
                      cVar7 = bVar6 + 0xf;
                      pcVar39 = (char *)CONCAT31(uVar24,cVar7);
                      if (SCARRY1(bVar9,'\x02') == cVar7 < '\0') {
                        pcVar39 = pcVar39 + (0xfd < bVar9) + 0x847d;
                        goto code_r0x004025bd;
                      }
                      *pcVar39 = *pcVar39 + cVar7;
                      cVar42 = bVar6 + 0x11;
                      unaff_EDI = (byte *)CONCAT31(uVar24,cVar42);
                      uVar54 = CONCAT44(param_2,unaff_EDI);
                      if (SCARRY1(cVar7,'\x02') != cVar42 < '\0') goto code_r0x0040263f;
                      if ((POPCOUNT(cVar42) & 1U) != 0) goto code_r0x0040255d;
                    }
                    else {
                      *pcVar39 = *pcVar39 + bVar6;
                      uVar54 = CONCAT44(param_2,pcVar39 + 0x12110000);
code_r0x0040255d:
                      while( true ) {
                        pcVar39 = (char *)((ulonglong)uVar54 >> 0x20);
                        piVar21 = (int *)uVar54;
                        *piVar21 = (int)((int)piVar21 + *piVar21);
                        uVar31 = (undefined2)((uint)pbVar12 >> 0x10);
                        uVar38 = SUB41(pbVar12,0);
                        cVar10 = (char)((uint)pbVar12 >> 8) + (char)((ulonglong)uVar54 >> 0x28);
                        pcVar13 = (char *)CONCAT22(uVar31,CONCAT11(cVar10,uVar38));
                        *piVar21 = (int)((int)piVar21 + *piVar21);
                        *pbVar22 = *pbVar22 + (char)((ulonglong)uVar54 >> 0x20);
                        cVar7 = (char)uVar54;
                        *(char *)piVar21 = (char)*piVar21 + cVar7;
                        *(char *)piVar21 = (char)*piVar21 + cVar7;
                        *(char *)piVar21 = (char)*piVar21 + cVar7;
                        *pcVar39 = *pcVar39 + cVar7;
                        *(char *)piVar21 = (char)*piVar21 + cVar7;
                        *pcVar13 = *pcVar13 + cVar7;
                        *(char *)piVar21 = (char)*piVar21 + cVar7;
                        pcVar3 = (code *)swi(1);
                        uVar54 = (*pcVar3)();
                        param_2 = (byte *)((ulonglong)uVar54 >> 0x20);
                        pbVar12 = (byte *)uVar54;
                        bVar9 = *pbVar12;
                        bVar6 = (byte)uVar54;
                        *pbVar12 = *pbVar12 + bVar6;
                        *param_2 = *param_2 + bVar6 + CARRY1(bVar9,bVar6);
                        *pbVar12 = *pbVar12 + bVar6;
                        *pbVar12 = *pbVar12 + bVar6;
                        *pbVar12 = *pbVar12 + bVar6;
                        *pbVar12 = *pbVar12 + bVar6;
                        *pbVar12 = *pbVar12 + bVar6;
                        *pbVar12 = *pbVar12 + bVar6;
                        *pbVar12 = *pbVar12 + bVar6;
                        *pbVar12 = *pbVar12 + bVar6;
                        cVar7 = (char)((ulonglong)uVar54 >> 0x28);
                        *pbVar12 = *pbVar12 + cVar7;
                        bVar9 = *pbVar12;
                        uVar24 = (undefined3)((ulonglong)uVar54 >> 8);
                        pcVar39 = (char *)CONCAT31(uVar24,bVar6 + bVar9);
                        *pcVar39 = *pcVar39 + cVar7;
                        cVar7 = bVar6 + bVar9 + *pcVar39;
                        pcVar39 = (char *)CONCAT31(uVar24,cVar7);
                        cVar42 = (char)((ulonglong)uVar54 >> 0x20);
                        *pbVar22 = *pbVar22 + cVar42;
                        *pcVar39 = *pcVar39 + cVar7;
                        *pcVar39 = *pcVar39 + cVar42;
                        *pcVar39 = *pcVar39 + cVar7;
                        *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
                        cVar10 = cVar10 + unaff_EBP[(int)pcVar39 * 4];
                        pbVar12 = (byte *)CONCAT22(uVar31,CONCAT11(cVar10,uVar38));
                        pbVar12[(int)pcVar39] = pbVar12[(int)pcVar39] + cVar7;
                        *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar7;
                        *param_2 = *param_2 + (char)extraout_ECX;
                        bVar6 = cVar7 - *pcVar39;
                        pcVar39 = (char *)CONCAT31(uVar24,bVar6);
                        *pbVar12 = *pbVar12 + cVar42;
                        *param_2 = *param_2 ^ bVar6;
                        *param_2 = *param_2 + cVar10;
                        *pcVar39 = *pcVar39 + bVar6;
                        cRam12110000 = cRam12110000 + bVar6;
                        bVar9 = *param_2;
                        *param_2 = *param_2 + bVar6;
                        param0 = extraout_ECX;
                        in_SS = uStack_4;
                        if (SCARRY1(bVar9,bVar6) != (char)*param_2 < '\0') break;
                        pbVar12 = (byte *)CONCAT22(uVar31,CONCAT11(cVar10 + unaff_EBP[(int)pcVar39 *
                                                                                      4],uVar38));
                        pbVar22[(int)pcVar39] = pbVar22[(int)pcVar39] + bVar6;
                        *(char *)((int)pcVar39 * 2) = *(char *)((int)pcVar39 * 2) - bVar6;
                        *pcVar39 = *pcVar39 + bVar6;
                        pcVar13 = (char *)CONCAT31(uVar24,bVar6 + *pcVar39);
                        *pcVar13 = *pcVar13 + bVar6 + *pcVar39;
                        uStack_4 = 0x4025;
                        uVar54 = func_0x0f40255d();
                      }
code_r0x004025bd:
                      *pcVar39 = *pcVar39 + (char)pcVar39;
                      pcVar39 = (char *)CONCAT31((int3)((uint)pcVar39 >> 8),(char)pcVar39 + '\x12');
                      *pcVar39 = *pcVar39 + (char)((uint)param0 >> 8);
                      pcVar39 = pcVar39 + -1;
                      cVar7 = (char)pcVar39;
                      *pcVar39 = *pcVar39 + cVar7;
                      bVar9 = (byte)((uint)pbVar12 >> 8) | unaff_EBP[-0x7b];
                      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                                 CONCAT11(bVar9,(char)pbVar12));
                      *pcVar39 = *pcVar39 + cVar7;
                      cRam0000847d = cRam0000847d + (char)param_2;
                      unaff_EDI = (byte *)CONCAT31((int3)((uint)pcVar39 >> 8),cVar7 + '$');
                      pbVar12[-0x7b] = pbVar12[-0x7b] + bVar9;
                    }
                    *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                    pcVar39 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),(char)unaff_EDI + '\v');
                    pbVar43 = unaff_EBP;
                  } while( true );
                }
                *pbVar22 = *pbVar22 + cVar7;
                pcVar39 = (char *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar7 + '\x13');
                pbVar22 = unaff_EDI;
              }
              *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
              bVar6 = cVar7 + 0x59;
              pcVar39 = (char *)CONCAT31(uVar24,bVar6);
              *(char **)param_2 = pcVar39 + (uint)(0xd2 < bVar9) + *(int *)param_2;
              pbVar12 = (byte *)CONCAT22(uVar31,CONCAT11(cVar10 + pbVar12[-0x67],bVar8));
              *pcVar39 = *pcVar39 + bVar6;
              unaff_EDI = (byte *)((CONCAT31(uVar24,cVar7 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar6));
              pbVar35 = param0;
code_r0x00402700:
              *pbVar22 = *pbVar22 + (char)pbVar22;
              cVar7 = (char)pbVar22 + '\x02';
              pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar7);
              bVar51 = (POPCOUNT(cVar7) & 1U) == 0;
              param0 = pbVar35;
              in_CS = uVar49;
            }
          }
          cVar7 = (char)pcVar39;
          *pcVar39 = *pcVar39 + cVar7;
          uVar24 = (undefined3)((uint)pcVar39 >> 8);
          bVar9 = cVar7 + 0x6f;
          piVar21 = (int *)CONCAT31(uVar24,bVar9);
          iVar18 = *piVar21;
          *(byte *)piVar21 = (char)*piVar21 + bVar9;
          param_4 = CONCAT22(param_4._2_2_,uVar47);
          pbVar22 = param_2;
          if ((char)*piVar21 != '\0' && SCARRY1((char)iVar18,bVar9) == (char)*piVar21 < '\0') {
            *(byte *)piVar21 = (char)*piVar21 + bVar9;
            bVar6 = cVar7 + 0x9c;
            piVar21 = (int *)CONCAT31(uVar24,bVar6);
            puVar20 = unaff_ESI + (int)unaff_EDI * 2;
            uVar11 = *puVar20;
            uVar14 = *puVar20;
            *puVar20 = (uint)(param_2 + uVar14 + (0xd2 < bVar9));
            param_3 = (byte *)CONCAT22(param_3._2_2_,uVar47);
            *piVar21 = (*piVar21 - (int)piVar21) -
                       (uint)(CARRY4(uVar11,(uint)param_2) ||
                             CARRY4((uint)(param_2 + uVar14),(uint)(0xd2 < bVar9)));
            uVar14 = *unaff_ESI;
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
            pbVar22 = param_3;
            if (!CARRY1((byte)uVar14,bVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
code_r0x00402724:
          param_3 = pbVar22;
          *(byte *)piVar21 = (char)*piVar21 + (byte)piVar21;
          uVar24 = (undefined3)((uint)piVar21 >> 8);
          bVar9 = (byte)piVar21 | *(byte *)((int)piVar21 + 0x400000d);
          pcVar39 = (char *)CONCAT31(uVar24,bVar9);
          if ((char)bVar9 < '\x01') {
            bVar51 = pcVar39 < (char *)0x6fe1411;
            pcVar39 = pcVar39 + -0x6fe1411;
            goto code_r0x00402740;
          }
          *pcVar39 = *pcVar39 + bVar9;
          bVar8 = bVar9 + 0x28;
          puVar45 = (uint *)CONCAT31(uVar24,bVar8);
          *puVar45 = *puVar45 | (uint)puVar45;
          bVar6 = *pbVar12;
          cVar7 = (char)((uint)param0 >> 8);
          *pbVar12 = *pbVar12 + cVar7;
          pbVar35 = param0;
          puVar20 = unaff_ESI;
          uVar49 = in_CS;
        } while (*pbVar12 == 0 || SCARRY1(bVar6,cVar7) != (char)*pbVar12 < '\0');
        *(byte *)puVar45 = (char)*puVar45 + bVar8;
        pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x55);
        puVar20 = unaff_ESI + (int)unaff_EDI * 2;
        bVar51 = CARRY4(*puVar20,(uint)param_2) ||
                 CARRY4((uint)(param_2 + *puVar20),(uint)(0xd2 < bVar8));
        *puVar20 = (uint)(param_2 + *puVar20 + (0xd2 < bVar8));
        param_3 = (byte *)CONCAT22(param_3._2_2_,uVar47);
        goto code_r0x00402740;
      }
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),
                                 (byte)pbVar12 | (byte)((uint)param_2 >> 8));
      piVar21 = (int *)CONCAT31(uVar24,bVar9 + 2);
    }
    *pcVar39 = *pcVar39 + bVar9;
    *unaff_EDI = *unaff_EDI - (char)param_2;
    *param_2 = *param_2 + (char)pbVar35;
    bVar6 = (cVar7 + '\x11') - *(char *)CONCAT31(uVar24,cVar7 + '\x11');
    pbVar22 = (byte *)CONCAT31(uVar24,bVar6);
    bVar9 = *pbVar22;
    *pbVar22 = *pbVar22 + bVar6;
    param0 = pbVar35 + 1;
    cVar7 = bVar6 - CARRY1(bVar9,bVar6);
    pcVar39 = (char *)CONCAT31(uVar24,cVar7);
    *pcVar39 = *pcVar39 + cVar7;
    *pcVar39 = *pcVar39 + cVar7;
    *pcVar39 = *pcVar39 + cVar7;
    *pcVar39 = *pcVar39 + cVar7;
    pbVar35[2] = pbVar35[2] + (char)((uint)param0 >> 8);
    *pcVar39 = *pcVar39 + cVar7;
    in_EAX = (char *)(*(int *)param0 * 0x170000);
    *in_EAX = *in_EAX;
    *in_EAX = *in_EAX;
    *param0 = *param0;
    pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                               CONCAT11((char)((uint)pbVar12 >> 8) + *(char *)((int)param_2 * 5),
                                        (char)pbVar12));
    in_DS = (ushort)param_3;
  } while( true );
code_r0x00402992:
  pbVar12 = (byte *)((int)puVar16 + 0x2a);
  bVar51 = CARRY1(*pbVar12,bVar8);
  *pbVar12 = *pbVar12 + bVar8;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar16) = *(byte *)(in_GS_OFFSET + (int)puVar16) + (char)puVar16;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | *(byte *)((int)puVar45 + 0x66),
                                      (char)puVar20));
  *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
code_r0x00402a3e:
  uVar24 = (undefined3)((uint)puVar16 >> 8);
  bVar9 = (byte)puVar16 | (byte)*puVar44;
  pcVar39 = (char *)CONCAT31(uVar24,bVar9);
  if ((char)bVar9 < '\0') {
    *pcVar39 = *pcVar39 + bVar9;
    cVar7 = bVar9 + 2;
    piVar21 = (int *)CONCAT31(uVar24,cVar7);
    if ((POPCOUNT(cVar7) & 1U) == 0) {
      *(char *)piVar21 = (char)*piVar21 + cVar7;
      bVar9 = bVar9 + 0x71;
      pcVar13 = (char *)CONCAT31(uVar24,bVar9);
      pcVar39 = (char *)segment(uVar50,(short)puVar40 + (short)puVar44);
      *pcVar39 = *pcVar39 + bVar9;
      uVar14 = puVar45[0x1a];
      *pcVar13 = *pcVar13 + bVar9;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | (byte)uVar14 |
                                          *(byte *)((int)puVar45 + 0x69),(char)puVar20));
      *pcVar13 = *pcVar13 + bVar9;
      bVar9 = bVar9 | (byte)*puVar36;
      pcVar39 = (char *)CONCAT31(uVar24,bVar9);
      if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar44 + (uint)bVar52 * -2 + 1;
    out(*puVar44,(short)puVar36);
  }
  else {
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((char)((uint)puVar40 >> 8) + (byte)puVar40[6],(char)puVar40)
                              );
code_r0x00402a5d:
    *pcVar39 = *pcVar39 + (char)pcVar39;
    piVar21 = (int *)CONCAT31((int3)((uint)pcVar39 >> 8),(char)pcVar39 + 'o');
    unaff_ESI = puVar44;
  }
code_r0x00402a61:
  pcVar39 = (char *)segment(uVar50,(short)puVar40 + (short)unaff_ESI);
  *pcVar39 = *pcVar39 + (char)piVar21;
  cVar7 = (char)puVar20;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)puVar45[0x1a],cVar7));
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  uVar31 = CONCAT11((byte)((uint)puVar36 >> 8) | *(byte *)((int)puVar36 + 0x65),(char)puVar36);
  puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),uVar31);
  piVar17 = (int *)((int)piVar21 + *piVar21);
  puVar44 = unaff_ESI;
  puVar46 = puVar45;
  uVar47 = uVar48;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402ae3;
  *(byte *)puVar36 = (byte)*puVar36 + cVar7;
  puVar44 = unaff_ESI + (uint)bVar52 * -2 + 1;
  out(*unaff_ESI,uVar31);
code_r0x00402a75:
  bVar9 = (byte)((uint)puVar20 >> 8) | (byte)*puVar36;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar9,(char)puVar20));
  piVar21 = (int *)(uint)(byte)*puVar40;
  *(byte *)puVar44 = (byte)*puVar44 - bVar9;
  puVar46 = puVar45;
code_r0x00402a7f:
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  out(*puVar44,(short)puVar36);
  bVar9 = in((short)puVar36);
  *(byte *)puVar46 = bVar9;
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar36,(char)puVar20));
  iVar18 = *piVar21;
  cVar7 = in(1);
  puVar16 = (uint *)CONCAT31((int3)((uint)((int)piVar21 + *piVar21) >> 8),cVar7);
  *(char *)puVar16 = (char)*puVar16 + cVar7;
  puVar16 = (uint *)((uint)puVar16 | *puVar16);
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar36;
  puVar44 = (uint *)((int)puVar44 + (((uint)bVar52 * -8 + 4) - iVar18));
  puVar46 = (uint *)((int)puVar46 + (uint)bVar52 * -2 + 1);
  in_SS = uVar48;
  while( true ) {
    bVar9 = (byte)puVar16 | (byte)*puVar36;
    puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar9);
    puVar45 = puVar46;
    if ((POPCOUNT(bVar9) & 1U) != 0) break;
    *(byte *)puVar16 = (byte)*puVar16 + bVar9;
code_r0x00402a9b:
    uVar24 = (undefined3)((uint)puVar16 >> 8);
    cVar7 = (char)puVar16 + '\r';
    piVar17 = (int *)CONCAT31(uVar24,cVar7);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar17;
    *(char *)piVar17 = (char)*piVar17 + cVar7;
    *(byte *)(puVar44 + -0xc800000) = (byte)puVar44[-0xc800000] + (char)puVar36;
    *(char *)piVar17 = (char)*piVar17 + cVar7;
    *(byte *)puVar36 = (byte)*puVar36 + cVar7;
    cVar42 = (char)puVar20;
    if ((POPCOUNT((byte)*puVar36) & 1U) != 0) {
      *(byte *)puVar36 = (byte)*puVar36 + cVar42;
      unaff_ESI = puVar44 + (uint)bVar52 * -2 + 1;
      out(*puVar44,(short)puVar36);
      piVar21 = (int *)((longlong)*piVar17 * 0x7b020a00);
      *(char *)piVar21 =
           (char)*piVar21 - ((longlong)(int)piVar21 != (longlong)*piVar17 * 0x7b020a00);
      pbVar12 = (byte *)((int)puVar45 + (int)unaff_EBP * 2);
      *pbVar12 = *pbVar12;
      goto code_r0x00402a61;
    }
    *(char *)piVar17 = (char)*piVar17 + cVar7;
    puVar16 = (uint *)CONCAT31(uVar24,(char)puVar16 + ':');
    unaff_ESI = (uint *)((uint)puVar44 | *(uint *)((int)puVar36 + -0x79));
    iVar18 = (int)puVar16 + *puVar16;
    if (SCARRY4((int)puVar16,*puVar16)) {
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((char)((uint)puVar40 >> 8) + (byte)unaff_ESI[(int)puVar40]
                                          ,(char)puVar40));
      *(char *)((int)puVar36 * 2) = *(char *)((int)puVar36 * 2) + (char)iVar18;
      puVar46 = puVar45;
      goto code_r0x00402b33;
    }
    uVar24 = (undefined3)((uint)iVar18 >> 8);
    cVar7 = (char)iVar18 + CARRY4((uint)puVar16,*puVar16);
    piVar21 = (int *)CONCAT31(uVar24,cVar7);
    *(byte *)puVar36 = (byte)*puVar36 + cVar42;
    bVar51 = (POPCOUNT((byte)*puVar36) & 1U) != 0;
    if ((bVar51) && (bVar51)) goto code_r0x00402a61;
    *(char *)piVar21 = (char)*piVar21 + cVar7;
    cVar10 = cVar7 + '(';
    pcVar39 = (char *)CONCAT31(uVar24,cVar10);
    puVar46 = puVar45 + (uint)bVar52 * -2 + 1;
    uVar14 = in((short)puVar36);
    *puVar45 = uVar14;
    *pcVar39 = *pcVar39 + cVar10;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11((byte)((uint)puVar20 >> 8) | bRama07b0222,cVar42));
    *pcVar39 = *pcVar39 + cVar10;
    pcVar39 = (char *)CONCAT31(uVar24,cVar7 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)puVar36);
    puVar44 = (uint *)((int)(unaff_ESI + (uint)bVar52 * -2 + 1) + (uint)bVar52 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar52 * -2 + 1],(short)puVar36);
    bVar9 = (byte)pcVar39;
    *pcVar39 = *pcVar39 + bVar9;
    puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(byte)puVar40 | (byte)*puVar46);
    in_AF = 9 < (bVar9 & 0xf) | in_AF;
    uVar24 = (undefined3)((uint)pcVar39 >> 8);
    bVar9 = bVar9 + in_AF * -6;
    puVar36 = (uint *)((uint)puVar36 ^ *puVar36);
    cVar7 = bVar9 + (0x9f < bVar9 | in_AF * (bVar9 < 6)) * -0x60 + (byte)*puVar36;
    piVar21 = (int *)CONCAT31(uVar24,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar21 = (char)*piVar21 + cVar7;
    piVar17 = (int *)CONCAT31(uVar24,cVar7 + '\x17');
    uVar47 = uVar48;
code_r0x00402ae3:
    out(*puVar44,(short)puVar36);
    unaff_ESI = puVar44 + (uint)bVar52 * -2 + 1 + (uint)bVar52 * -2 + 1;
    out(puVar44[(uint)bVar52 * -2 + 1],(short)puVar36);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
code_r0x00402ae7:
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) | unaff_EBP[-0x60],(char)puVar40)
                              );
    cVar7 = (char)piVar17;
    *(char *)piVar17 = (char)*piVar17 + cVar7;
    uVar24 = (undefined3)((uint)piVar17 >> 8);
    bVar9 = cVar7 + 2;
    puVar16 = (uint *)CONCAT31(uVar24,bVar9);
    uVar48 = uVar47;
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      *(byte *)puVar16 = (byte)*puVar16 + bVar9;
      cVar7 = cVar7 + '}';
      puVar16 = (uint *)CONCAT31(uVar24,cVar7);
      *(byte *)puVar16 = ((byte)*puVar16 - cVar7) - (0x84 < bVar9);
      pbVar12 = (byte *)((int)puVar36 + (int)puVar16);
      *pbVar12 = *pbVar12 + cVar7;
      bVar9 = POPCOUNT(*pbVar12);
      puVar44 = unaff_ESI;
code_r0x00402af9:
      uVar48 = uVar47;
      puVar45 = puVar46;
      if ((bVar9 & 1) == 0) {
        *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
        bVar9 = (byte)puVar20;
        *(byte *)puVar36 = (byte)*puVar36 + bVar9;
        uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,in_SS);
        unaff_ESI = puVar44 + (uint)bVar52 * -2 + 1;
        out(*puVar44,(short)puVar36);
        uVar14 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + bVar9;
        iVar18 = CONCAT31((int3)((uint)puVar16 >> 8),(char)puVar16 + 'o') +
                 *(int *)((int)puVar36 * 2) + (uint)CARRY1((byte)uVar14,bVar9);
        pcVar39 = (char *)CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '(');
        while( true ) {
          uVar14 = *puVar36;
          bVar6 = (byte)puVar20;
          *(byte *)puVar36 = (byte)*puVar36 + bVar6;
          pcVar39 = pcVar39 + (uint)CARRY1((byte)uVar14,bVar6) + iRam73280512;
          bVar9 = (byte)pcVar39;
          *pcVar39 = *pcVar39 + bVar9;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                     CONCAT11((byte)((uint)puVar20 >> 8) | bRam7d160243,bVar6));
          bVar52 = ((uint)uStackY_28 & 0x400) != 0;
          in_AF = ((uint)uStackY_28 & 0x10) != 0;
          *pcVar39 = *pcVar39 + bVar9;
          uVar24 = (undefined3)((uint)pcVar39 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar24,bVar9 + 2) + (uint)(0xfd < bVar9);
          cVar7 = bVar9 + 4;
          if (SCARRY1(bVar9 + 2,'\x02') != cVar7 < '\0') break;
          *(char *)CONCAT31(uVar24,cVar7) = *(char *)CONCAT31(uVar24,cVar7) + cVar7;
          iVar18 = CONCAT31(uVar24,bVar9 + 0x16);
code_r0x00402b33:
          piVar17 = (int *)(iVar18 + 0xe2802);
          *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)puVar20 >> 8);
          uVar47 = uVar48;
          uVar48 = in_SS;
          while( true ) {
            bVar6 = (byte)puVar40 | (byte)((uint)puVar20 >> 8);
            puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar6);
            *piVar17 = (int)(*piVar17 + (int)piVar17);
            cVar7 = (char)piVar17;
            *(byte *)puVar36 = (byte)*puVar36 + cVar7;
            if ((POPCOUNT((byte)*puVar36) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar17 = (char)*piVar17 + cVar7;
            uVar14 = CONCAT31((int3)((uint)piVar17 >> 8),cVar7 + '\x13');
            puVar16 = (uint *)(uVar14 + 0x19061224 + (uint)(0x1f9edfd < uVar14));
            uVar15 = (uint)(0xe4ffffdd < uVar14 + 0xfe061202 ||
                           CARRY4(uVar14 + 0x19061224,(uint)(0x1f9edfd < uVar14)));
            uVar14 = *unaff_ESI;
            uVar11 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar11 + (int)puVar16) + uVar15);
            bVar9 = POPCOUNT(*unaff_ESI & 0xff);
            puVar44 = unaff_ESI;
            if ((SCARRY4(uVar14,(int)puVar16) != SCARRY4((int)(uVar11 + (int)puVar16),uVar15)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar9 = (byte)puVar16;
            *(byte *)puVar16 = (byte)*puVar16 + bVar9;
            iVar18 = CONCAT31((int3)((uint)puVar16 >> 8),bVar9 + 2) + 0x9d7d + (uint)(0xfd < bVar9);
            bVar9 = (byte)puVar36 | (byte)*puVar36;
            uVar14 = *puVar40;
            *(byte *)puVar40 = (byte)*puVar40 + bVar6;
            pcVar39 = (char *)(CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '\x12') + 0x228b26
                               + *puVar46 + (uint)CARRY1((byte)uVar14,bVar6));
            cVar7 = bVar9 + (byte)*puVar20;
            puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),cVar7);
            if (SCARRY1(bVar9,(byte)*puVar20) == cVar7 < '\0') break;
            *pcVar39 = *pcVar39 + (char)pcVar39;
            cVar7 = (char)pcVar39 + '\x02';
            pcVar39 = (char *)CONCAT31((int3)((uint)pcVar39 >> 8),cVar7);
            bVar9 = POPCOUNT(cVar7);
            uVar47 = uVar48;
code_r0x00402b7a:
            puVar45 = unaff_ESI;
            if ((bVar9 & 1) != 0) break;
            while( true ) {
              cVar7 = (char)pcVar39;
              *pcVar39 = *pcVar39 + cVar7;
              uVar24 = (undefined3)((uint)pcVar39 >> 8);
              pcVar39 = (char *)CONCAT31(uVar24,cVar7 + '\x13');
              *(byte *)puVar20 = (byte)*puVar20 | (byte)puVar36;
              *(byte *)puVar46 = (byte)*puVar46 | (byte)puVar36;
              *puVar36 = (uint)(pcVar39 + *puVar36);
              uVar31 = (undefined2)((uint)puVar40 >> 0x10);
              uVar38 = SUB41(puVar40,0);
              cVar42 = (char)((uint)puVar40 >> 8) + *(byte *)((int)puVar40 + -0x5f);
              puVar40 = (uint *)CONCAT22(uVar31,CONCAT11(cVar42,uVar38));
              *pcVar39 = *pcVar39 + cVar7 + '\x13';
              piVar17 = (int *)CONCAT31(uVar24,cVar7 + -0x7a);
              uVar14 = *puVar36;
              *(byte *)puVar36 = (byte)*puVar36 + (char)puVar20;
              uVar49 = in_CS;
              if (SCARRY1((byte)uVar14,(char)puVar20) == (char)(byte)*puVar36 < '\0') break;
              *(char *)piVar17 = (char)*piVar17 + cVar7 + -0x7a;
              cVar10 = cVar7 + -0x78;
              piVar17 = (int *)CONCAT31(uVar24,cVar10);
              uVar49 = uVar47;
              if ((POPCOUNT(cVar10) & 1U) != 0) break;
              *(char *)piVar17 = (char)*piVar17 + cVar10;
              pcVar39 = (char *)CONCAT31(uVar24,cVar7 + -0x65);
              *puVar20 = *puVar20 | (uint)puVar36;
              *puVar46 = *puVar46 | (uint)puVar36;
              pbVar12 = (byte *)((int)puVar20 + -1);
              cVar42 = cVar42 + *(byte *)((int)puVar40 + -0x5e);
              puVar40 = (uint *)CONCAT22(uVar31,CONCAT11(cVar42,uVar38));
              *pcVar39 = *pcVar39 + cVar7 + -0x65;
              bVar9 = cVar7 + 10;
              puVar16 = (uint *)CONCAT31(uVar24,bVar9);
              bVar6 = (byte)pbVar12;
              *(byte *)puVar36 = (byte)*puVar36 + bVar6;
              unaff_ESI = puVar45 + (uint)bVar52 * -2 + 1;
              out(*puVar45,(short)puVar36);
              uVar14 = *puVar36;
              *(byte *)puVar36 = (byte)*puVar36 + bVar6;
              uVar2 = (uint)CARRY1((byte)uVar14,bVar6);
              uVar14 = *puVar36;
              uVar11 = *puVar36;
              pbVar35 = pbVar12 + uVar11 + uVar2;
              uVar5 = *puVar36;
              cRam130a0000 = cRam130a0000 - cVar42;
              uVar15 = *puVar36;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar16);
              *(byte *)puVar16 = (char)*puVar16 + bVar9;
              puVar20 = (uint *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar35 >> 8) | bRam7d170243,
                                                  (char)pbVar35 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar12,uVar14) ||
                                                  CARRY4((uint)(pbVar12 + uVar11),uVar2))));
              bVar52 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar16 = (char)*puVar16 + bVar9;
              bVar51 = 0xfd < bVar9;
              pcVar39 = (char *)CONCAT31(uVar24,cVar7 + '\f');
              puVar36 = (uint *)((uint)puVar36 | uVar15);
code_r0x00402bd1:
              uVar14 = *puVar40;
              uVar11 = *puVar40;
              *puVar40 = (uint)((byte *)(uVar11 + (int)puVar20) + bVar51);
              bVar9 = POPCOUNT(*puVar40 & 0xff);
              uVar47 = in_SS;
              if ((SCARRY4(uVar14,(int)puVar20) !=
                  SCARRY4((int)(uVar11 + (int)puVar20),(uint)bVar51)) == (int)*puVar40 < 0)
              goto code_r0x00402b7a;
              cVar7 = (char)pcVar39;
              *pcVar39 = *pcVar39 + cVar7;
              pcVar39 = (char *)CONCAT31((int3)((uint)pcVar39 >> 8),cVar7 + '\x02');
              if (SCARRY1(cVar7,'\x02') == (char)(cVar7 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar39 = *pcVar39 + (char)pcVar39;
                pcVar39 = (char *)(CONCAT31((int3)((uint)pcVar39 >> 8),(char)pcVar39 + '\x12') |
                                  *puVar36);
                *(byte *)puVar46 = (byte)*puVar46 - (char)puVar20;
                *pcVar39 = *pcVar39 + (char)pcVar39;
                puVar36 = (uint *)((int)puVar36 - *unaff_ESI);
                bVar9 = (byte)puVar40 | (byte)((uint)puVar20 >> 8);
                cVar7 = *pcVar39;
                uVar24 = (undefined3)((uint)pcVar39 >> 8);
                pcVar39 = (char *)CONCAT31(uVar24,cVar7);
                *pcVar39 = *pcVar39 + cVar7;
                pcVar13 = (char *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                           CONCAT11((char)((uint)puVar40 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar40 >> 8),
                                                                       bVar9) + -0x5b),bVar9));
                *pcVar39 = *pcVar39 + cVar7;
                bVar51 = false;
                pcVar39 = (char *)(CONCAT31(uVar24,cVar7 + '\x13') | *puVar36);
                do {
                  bVar6 = (byte)puVar20;
                  bVar9 = bVar6 + (byte)unaff_ESI[(int)puVar46 * 2];
                  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar9 + bVar51);
                  uVar14 = (uint)(CARRY1(bVar6,(byte)unaff_ESI[(int)puVar46 * 2]) ||
                                 CARRY1(bVar9,bVar51));
                  pcVar19 = pcVar39 + 0x1b000019 + uVar14;
                  piVar21 = (int *)((int)puVar46 * 2 + 0x40000a5);
                  *piVar21 = (int)((int)puVar20 +
                                  (uint)((char *)0xe4ffffe6 < pcVar39 ||
                                        CARRY4((uint)(pcVar39 + 0x1b000019),uVar14)) + *piVar21);
                  puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(char)puVar36 + cRam00009d7d
                                            );
                  uVar24 = (undefined3)((uint)pcVar19 >> 8);
                  bVar9 = (char)pcVar19 + 0x12;
                  in_AF = 9 < (bVar9 & 0xf) | in_AF;
                  uVar14 = CONCAT31(uVar24,bVar9 + in_AF * -6) & 0xffffff0f;
                  pcVar39 = (char *)CONCAT22((short)(uVar14 >> 0x10),
                                             CONCAT11((char)((uint)pcVar19 >> 8) - in_AF,
                                                      (char)uVar14));
                  pbVar12 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar24,bVar9));
                  while( true ) {
                    *pcVar39 = *pcVar39 + (char)pcVar39;
                    puVar45 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),
                                               (byte)puVar36 | (byte)*puVar36);
                    puVar46 = (uint *)((uint)puVar46 | (uint)unaff_ESI);
                    uVar14 = (uint)pcVar13 | (uint)unaff_ESI;
                    unaff_EBP = pbVar12 + 1;
                    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar48);
                    cVar7 = (char)(pcVar39 + 0x1b000019);
                    uVar24 = (undefined3)((uint)(pcVar39 + 0x1b000019) >> 8);
                    cVar42 = cVar7 + -0x13;
                    pcVar39 = (char *)CONCAT31(uVar24,cVar42);
                    uVar31 = (undefined2)(uVar14 >> 0x10);
                    cVar10 = (char)(uVar14 >> 8) + *(char *)(uVar14 - 0x5e);
                    puVar40 = (uint *)CONCAT22(uVar31,CONCAT11(cVar10,(byte)uVar14));
                    *pcVar39 = *pcVar39 + cVar42;
                    pcVar39 = (char *)(CONCAT31(uVar24,cVar7 + '\x19') | *puVar45);
                    bVar9 = (byte)pcVar39;
                    if ((POPCOUNT((uint)pcVar39 & 0xff) & 1U) != 0) {
                      pbVar12 = (byte *)((int)puVar45 + (int)pcVar39);
                      bVar51 = CARRY1(*pbVar12,bVar9);
                      *pbVar12 = *pbVar12 + bVar9;
                      puVar36 = puVar45;
                      goto code_r0x00402bd1;
                    }
                    *pcVar39 = *pcVar39 + bVar9;
                    uVar24 = (undefined3)((uint)pcVar39 >> 8);
                    pcVar13 = (char *)CONCAT31(uVar24,bVar9 + 0x6f);
                    puVar36 = (uint *)((int)puVar45 + 1);
                    *pcVar13 = *pcVar13 + bVar9 + 0x6f;
                    bVar6 = (byte)uVar14 | (byte)((uint)pcVar39 >> 8);
                    pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x5c);
                    cVar10 = cVar10 + *(char *)(CONCAT31((int3)((uint)puVar40 >> 8),bVar6) + -0x5f);
                    puVar40 = (uint *)CONCAT22(uVar31,CONCAT11(cVar10,bVar6));
                    *pcVar39 = *pcVar39 + bVar9 + 0x5c;
                    pcVar39 = (char *)(CONCAT31(uVar24,bVar9 + 0x88) | *puVar36);
                    if ((POPCOUNT((uint)pcVar39 & 0xff) & 1U) != 0) {
                      *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)puVar20 >> 8);
                      uStackY_28 = (uint *)((uint)uStackY_28._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar39 = *pcVar39 + (char)pcVar39;
                    uVar24 = (undefined3)((uint)pcVar39 >> 8);
                    cVar7 = (char)pcVar39 + 'o';
                    puVar36 = (uint *)((int)puVar45 + 2);
                    *(char *)CONCAT31(uVar24,cVar7) = *(char *)CONCAT31(uVar24,cVar7) + cVar7;
                    pcVar13 = (char *)CONCAT31((int3)((uint)puVar40 >> 8),
                                               bVar6 | (byte)((uint)pcVar39 >> 8));
                    pcVar39 = (char *)(CONCAT31(uVar24,cVar7) | 2);
                    pbVar12[-0x62] = pbVar12[-0x62] + 1;
                    bVar9 = (byte)pcVar39;
                    *pcVar39 = *pcVar39 + bVar9;
                    bVar51 = 0xfd < bVar9;
                    cVar7 = bVar9 + 2;
                    pcVar39 = (char *)CONCAT31(uVar24,cVar7);
                    uVar50 = uVar48;
                    if (SCARRY1(bVar9,'\x02') != cVar7 < '\0') break;
                    *pcVar39 = *pcVar39 + cVar7;
                    bVar6 = bVar9 + 10;
                    pcVar39 = (char *)CONCAT31(uVar24,bVar6);
                    *pcVar39 = *pcVar39 - cVar10;
                    cVar42 = (char)puVar20;
                    *(byte *)puVar36 = *(byte *)puVar36 + cVar42;
                    pbVar12[-0x62] = pbVar12[-0x62] + 1;
                    *pcVar39 = *pcVar39 + bVar6;
                    cVar7 = bVar9 + 0xc;
                    pcVar39 = (char *)CONCAT31(uVar24,cVar7);
                    if (SCARRY1(bVar6,'\x02') == cVar7 < '\0') {
                      *pcVar39 = *pcVar39 + cVar7;
                      *(byte *)puVar20 = (byte)*puVar20 - cVar10;
                      *(byte *)puVar36 = *(byte *)puVar36 + cVar42;
                      cVar7 = (bVar9 + 0x13) - (byte)puVar20[0x13];
                      pcVar39 = (char *)CONCAT31(uVar24,cVar7);
                      *pcVar39 = *pcVar39 + cVar7;
                      pcVar19 = (char *)CONCAT31(uVar24,cVar7 + *pcVar39);
                      *pcVar19 = *pcVar19 + cVar7 + *pcVar39;
                      pcVar19 = pcVar19 + *puVar20;
                      *pcVar19 = *pcVar19 + (char)pcVar19;
                      LOCK();
                      pcVar39 = *(char **)pcVar19;
                      *(char **)pcVar19 = pcVar19;
                      UNLOCK();
                      *pcVar39 = *pcVar39 + (char)pcVar39;
                      pbVar35 = (byte *)CONCAT31((int3)((uint)pcVar39 >> 8),(byte)*puVar20);
                      *pbVar35 = *pbVar35 + (byte)*puVar20;
                      goto code_r0x00402c8d;
                    }
                    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),
                                               cVar42 + *pcVar13 + (0xfd < bVar6));
                    *(byte *)puVar46 = (byte)*puVar46 - cVar10;
                    pbVar12 = unaff_EBP;
                  }
                } while( true );
              }
              puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                         CONCAT11((char)((uint)puVar40 >> 8) +
                                                  *(byte *)((int)puVar40 + -99),(char)puVar40));
              puVar45 = unaff_ESI;
            }
            *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
            puVar36 = (uint *)((int)puVar36 - *puVar45);
            unaff_ESI = puVar45;
            uVar47 = uVar48;
            uVar48 = uVar49;
          }
          *(byte *)puVar36 = (byte)*puVar36 + (char)puVar20;
          pcVar39 = pcVar39 + -0x7d160243;
        }
        pcVar39 = (char *)CONCAT31(uVar24,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar20;
    uVar14 = *puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + (byte)puVar16;
    *puVar46 = (uint)((int)puVar36 + (uint)CARRY1((byte)uVar14,(byte)puVar16) + *puVar46);
    puVar44 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar30 = (char)puVar20;
      cVar27 = (char)((uint)puVar20 >> 8) + (char)((uint)pbVar35 >> 8);
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(cVar27,cVar30));
      cVar7 = (char)pbVar35;
      *pbVar35 = *pbVar35 + cVar7;
      pcVar39 = (char *)((int)pbVar35 * 2 + 0x1a10000);
      cVar10 = (char)((uint)pcVar13 >> 8);
      *pcVar39 = *pcVar39 + cVar10;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
      pbVar35[-0x47ffffff] = pbVar35[-0x47ffffff] + cVar10;
      *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
      bVar6 = (byte)puVar36;
      *(byte *)puVar46 = (byte)*puVar46 + bVar6;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + bVar6;
      *pbVar35 = *pbVar35 + cVar7;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar31 = (undefined2)((uint)pcVar13 >> 0x10);
      cVar10 = cVar10 + (byte)unaff_ESI[(int)pcVar13];
      pcVar39 = (char *)CONCAT22(uVar31,CONCAT11(cVar10,(char)pcVar13));
      pcVar39[(int)pbVar35] = pcVar39[(int)pbVar35] + cVar7;
      *(byte *)puVar36 = *(byte *)puVar36 - cVar10;
      *(byte *)puVar36 = *(byte *)puVar36 + cVar30;
      uVar24 = (undefined3)((uint)pbVar35 >> 8);
      bVar9 = cVar7 - *pbVar35;
      *pcVar39 = *pcVar39 + bVar6;
      *(byte *)puVar36 = *(byte *)puVar36 ^ bVar9;
      *(byte *)puVar36 = *(byte *)puVar36 + bVar9;
      *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
      uVar14 = *puVar20;
      *(byte *)puVar20 = (byte)*puVar20 + bVar6;
      cVar42 = bVar9 + *(char *)CONCAT31(uVar24,bVar9) + CARRY1((byte)uVar14,bVar6);
      pcVar13 = (char *)CONCAT22(uVar31,CONCAT11(cVar10 + pbVar12[-0x60],(char)pcVar13));
      *(char *)CONCAT31(uVar24,cVar42) = *(char *)CONCAT31(uVar24,cVar42) + cVar42;
      cVar10 = cVar42 + '\x12';
      pbVar35 = (byte *)CONCAT31(uVar24,cVar10);
      cVar7 = *pcVar13;
      *pcVar13 = *pcVar13 + cVar10;
      if (SCARRY1(cVar7,cVar10) != *pcVar13 < '\0') break;
code_r0x00402c8d:
      cVar7 = (char)pbVar35;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
      *(byte *)puVar36 = *(byte *)puVar36 + cVar7;
      *pbVar35 = *pbVar35 + cVar7;
    }
    *pbVar35 = *pbVar35 + cVar10;
    pbVar35 = (byte *)CONCAT31(uVar24,cVar42 + '$');
    *pbVar35 = *pbVar35 + cVar27;
    bVar9 = *(byte *)puVar36;
    *(byte *)puVar36 = *(byte *)puVar36 + cVar30;
    uVar49 = uVar48;
    uVar47 = in_DS;
  } while (SCARRY1(bVar9,cVar30) == (char)*(byte *)puVar36 < '\0');
  do {
    cVar7 = (char)pbVar35;
    *pbVar35 = *pbVar35 + cVar7;
    uVar24 = (undefined3)((uint)pbVar35 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar36;
    bVar6 = cVar7 + 0x24;
    cVar10 = (char)((uint)pcVar13 >> 8);
    pcVar13[-0x62] = pcVar13[-0x62] + cVar10;
    *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
    bVar9 = cVar7 + 0x2fU + (byte)*puVar20;
    cVar42 = bVar9 + (0xf4 < bVar6);
    cVar7 = cVar42 + *(char *)CONCAT31(uVar24,cVar42) +
            (CARRY1(cVar7 + 0x2fU,(byte)*puVar20) || CARRY1(bVar9,0xf4 < bVar6));
    pcVar39 = (char *)CONCAT31(uVar24,cVar7);
    *pcVar39 = *pcVar39 - (char)puVar36;
    *pcVar39 = *pcVar39 + cVar7;
    pcVar19 = (char *)((int)puVar36 - *puVar36);
    *(byte *)(unaff_ESI + (int)pcVar13) = (byte)unaff_ESI[(int)pcVar13] + cVar10;
    pcVar39[(int)unaff_EBP] = pcVar39[(int)unaff_EBP] + cVar7;
    *pcVar19 = *pcVar19 + (char)puVar20;
    pcVar39 = (char *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                               CONCAT11((char)((uint)pbVar35 >> 8) - *pcVar19,cVar7));
    uVar14 = *puVar46;
    *pcVar39 = *pcVar39 - (char)((uint)pcVar19 >> 8);
    *pcVar39 = *pcVar39 + cVar7;
    uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar49);
    pbVar12 = (byte *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                               CONCAT11(cVar10 - (byte)*unaff_ESI,(char)pcVar13));
    unaff_EBP = unaff_EBP + *(int *)(pbVar12 + (int)puVar20);
    puVar45 = (uint *)CONCAT31((int3)((uint)pcVar19 >> 8),(char)pcVar19 + (byte)uVar14);
    while( true ) {
      puVar36 = puVar45;
      uVar31 = (undefined2)((uint)pbVar12 >> 0x10);
      bVar41 = (char)((uint)pbVar12 >> 8) + pbVar12[0x18];
      *pcVar39 = *pcVar39 + (char)pcVar39;
      pbVar35 = (byte *)CONCAT31((int3)((uint)pcVar39 >> 8),(char)pcVar39 + 'o');
      cVar7 = (char)puVar20;
      *(byte *)puVar36 = (byte)*puVar36 + cVar7;
      uVar14 = *unaff_ESI;
      bVar8 = (byte)((uint)puVar20 >> 8);
      bVar9 = *pbVar35;
      pbVar35 = pbVar35 + (uint)CARRY1(bVar8,*pbVar35) + *(int *)pbVar35;
      *(byte *)puVar36 = (byte)*puVar36 + cVar7;
      cVar42 = ((char)pbVar12 - (byte)uVar14) - (byte)*unaff_ESI;
      bVar6 = *(byte *)((int)puVar46 + 0x1a);
      *pbVar35 = *pbVar35 + (char)pbVar35;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11(bVar8 + bVar9 + bVar6 | (byte)*puVar36,cVar7));
      pbVar35 = pbVar35 + *puVar36;
      if ((POPCOUNT((uint)pbVar35 & 0xff) & 1U) != 0) break;
      *pbVar35 = *pbVar35 + (char)pbVar35;
      bVar9 = (char)pbVar35 + 0x6f;
      pcVar39 = (char *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar9);
      pcVar13 = (char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar41,(char)pbVar12)) >> 8),
                                  cVar42) + -1);
      *pcVar39 = *pcVar39 + bVar9;
      *pcVar39 = *pcVar39 + bVar9;
      *pcVar13 = *pcVar13 + (byte)puVar36;
      *(byte *)((int)pcVar39 * 2) = *(byte *)((int)pcVar39 * 2) ^ bVar9;
      uVar4 = *(undefined6 *)pcVar39;
      uVar49 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar39 = (char *)uVar4;
      *pcVar39 = *pcVar39 + (char)uVar4;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar4;
      pcVar39 = (char *)((uint)pcVar39 | 0x73110008);
      bVar41 = (byte)((uint)pcVar13 >> 8);
      *(byte *)puVar46 = (byte)*puVar46 - bVar41;
      *(byte *)puVar36 = (byte)*puVar36 + cVar7;
      puVar45 = unaff_ESI + (uint)bVar52 * -2 + 1;
      out(*unaff_ESI,(short)puVar36);
      *pcVar39 = *pcVar39;
      cVar7 = (char)pcVar39;
      *pcVar39 = *pcVar39 + cVar7;
      bVar9 = unaff_EBP[-0x5a];
      uVar31 = (undefined2)((uint)pcVar13 >> 0x10);
      cVar42 = (char)pcVar13;
      *pcVar39 = *pcVar39 + cVar7;
      cVar7 = cVar7 + '\x02';
      uVar14 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar7);
      puVar20 = (uint *)(uVar14 | 0x73110000);
      unaff_ESI = puVar45 + (uint)bVar52 * -2 + 1;
      out(*puVar45,(short)puVar36);
      *(byte *)puVar20 = (byte)*puVar20;
      bVar8 = (byte)puVar36 | (byte)*puVar46;
      puVar45 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),bVar8);
      *(byte *)puVar20 = (byte)*puVar20 + cVar7;
      pcVar39 = (char *)(uVar14 | 0x7b1f1609);
      bVar52 = (uVar47 & 0x400) != 0;
      *(uint *)((int)puVar46 + -0x7d) = *(uint *)((int)puVar46 + -0x7d) | (uint)unaff_EBP;
      bVar6 = (byte)pcVar39;
      *pcVar39 = *pcVar39 + bVar6;
      bVar41 = bVar41 | bVar9 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar12 = (byte *)CONCAT22(uVar31,CONCAT11(bVar41,cVar42));
      *pcVar39 = *pcVar39 + bVar6;
      uVar24 = (undefined3)((uint)pcVar39 >> 8);
      unaff_ESI[(int)puVar46 * 2] =
           (uint)((int)puVar45 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)puVar46 * 2]);
      bVar9 = bVar6 + 0x2d ^ *(byte *)CONCAT31(uVar24,bVar6 + 0x2d);
      pcVar39 = (char *)CONCAT31(uVar24,bVar9);
      uVar14 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar9;
      uVar47 = uVar49;
      if (CARRY1((byte)uVar14,bVar9)) {
        *pcVar39 = *pcVar39 + bVar9;
        bVar9 = bVar9 | pcVar39[0x4000019];
        pcVar39 = (char *)CONCAT31(uVar24,bVar9);
        if ('\0' < (char)bVar9) {
          *pcVar39 = *pcVar39 + bVar9;
          piVar21 = (int *)CONCAT31(uVar24,bVar9 + 0x28);
          *piVar21 = (int)piVar21 + (uint)(0xd7 < bVar9) + *piVar21;
          bVar28 = (byte)((uint6)uVar4 >> 8);
          *pbVar12 = *pbVar12 + bVar28;
          uVar32 = CONCAT11((byte)((uint)puVar36 >> 8) | bVar41,bVar8);
          puVar45 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),uVar32);
          uStackY_28 = (uint *)CONCAT22(uStackY_28._2_2_,uVar49);
          bVar8 = in(uVar32);
          pbVar35 = (byte *)CONCAT31(uVar24,bVar8);
          bVar6 = *pbVar35;
          bVar51 = SCARRY1(*pbVar35,bVar8);
          *pbVar35 = *pbVar35 + bVar8;
          bVar9 = *pbVar35;
          puVar40 = unaff_ESI;
          in_SS = uVar49;
          if (!CARRY1(bVar6,bVar8)) goto code_r0x00402e19;
          *pbVar35 = *pbVar35 + bVar8;
          bVar28 = bVar28 | *pbVar35;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar28,cVar7));
          pcVar39 = (char *)CONCAT31(uVar24,bVar8 + *pbVar35);
          *pbVar12 = *pbVar12 + bVar28;
        }
        uVar24 = (undefined3)((uint)pcVar39 >> 8);
        bVar6 = (byte)pcVar39 | (byte)*puVar45;
        pbVar35 = (byte *)CONCAT31(uVar24,bVar6);
        puVar40 = unaff_ESI + (uint)bVar52 * -2 + 1;
        out(*unaff_ESI,(short)puVar45);
        LOCK();
        bVar9 = *pbVar35;
        *pbVar35 = bVar6;
        UNLOCK();
        *(byte *)puVar45 = (byte)*puVar45 + (char)puVar20;
        piVar21 = (int *)(CONCAT31(uVar24,bVar9) + -0x1b7e07);
        *(byte *)puVar45 = (byte)*puVar45 + (char)puVar20;
        iVar18 = (int)puVar20 - *(int *)pbVar12;
        bVar9 = *(byte *)((int)puVar46 + -0x7a);
        uVar32 = (undefined2)((uint)iVar18 >> 0x10);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        bVar6 = (char)((uint)iVar18 >> 8) + bVar9 | *(byte *)((int)puVar46 + 0x17);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        uVar24 = (undefined3)(CONCAT22(uVar32,CONCAT11(bVar6,(byte)iVar18)) >> 8);
        bVar9 = (byte)iVar18 | *pbVar12;
        puVar20 = (uint *)CONCAT31(uVar24,bVar9);
        pbVar35 = (byte *)((int)piVar21 + *piVar21);
        puVar36 = puVar40;
        if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e0a;
        *(byte *)puVar20 = (byte)*puVar20 + bVar9;
        *(byte **)pbVar12 = (byte *)(*(int *)pbVar12 + (int)puVar45);
        piVar21 = (int *)CONCAT31(uVar24,bVar9 + 0x27);
        puVar20 = (uint *)CONCAT22(uVar32,CONCAT11(bVar6 + *(byte *)((int)puVar46 + -0x79),bVar9));
        *(byte *)piVar21 = (char)*piVar21 + bVar9 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar13 = (char *)CONCAT22(uVar31,CONCAT11(bVar41 | unaff_EBP[-0x62],cVar42));
  } while( true );
code_r0x00402dff:
  pbVar35 = (byte *)CONCAT22((short)((uint)piVar21 >> 0x10),
                             CONCAT11((byte)((uint)piVar21 >> 8) |
                                      *(byte *)((int)puVar45 + 0x2170411),(byte)piVar21));
  puVar36 = puVar40 + (uint)bVar52 * -2 + 1;
  out(*puVar40,(short)puVar45);
  *pbVar35 = (byte)piVar21;
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar20;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar35;
  *pbVar35 = *pbVar35 - cVar42;
  *pbVar35 = *pbVar35 + (char)pbVar35;
  bVar51 = false;
  bVar9 = (byte)((uint)puVar20 >> 8) | bRam052b0603;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar9,(char)puVar20));
  puVar40 = puVar36;
code_r0x00402e19:
  if (bVar9 == 0 || bVar51 != (char)bVar9 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar35;
  *pbVar35 = *pbVar35 + cRam89280411;
  piVar21 = (int *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                            CONCAT11((byte)((uint)pbVar35 >> 8) |
                                     *(byte *)((int)puVar45 + 0x7190411),cRam89280411));
  *(char *)piVar21 = (char)*piVar21 + cRam89280411;
  cVar7 = (char)puVar20;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar45,cVar7));
  puVar40 = (uint *)((int)puVar40 + *piVar21);
  pbVar35 = (byte *)((int)piVar21 + *piVar21);
  bVar6 = (byte)pbVar35;
  *pbVar35 = *pbVar35 + bVar6;
  *(byte *)puVar40 = (byte)*puVar40 + cVar7;
  bVar9 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar6;
  *(byte **)pbVar35 = unaff_EBP + (uint)CARRY1(bVar9,bVar6) + *(int *)pbVar35;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar35 >> 8),*pbVar35);
  *(byte *)puVar45 = (byte)*puVar45 + cVar7;
  puVar36 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(byte)puVar45 | (byte)*puVar45);
  pbVar35 = (byte *)((int)puVar36 + -0x43);
  *pbVar35 = *pbVar35 + (char)((uint)puVar45 >> 8);
  puVar45 = puVar36;
  puVar36 = puVar46;
  uVar47 = uVar48;
code_r0x00402e42:
  uVar48 = in_SS;
  puVar46 = puVar36;
  in_SS = uVar48;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e6e;
  iVar18 = *(int *)((int)piVar21 + *piVar21);
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar20;
  piVar21 = (int *)(iVar18 + -0x8c6f);
  puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                             CONCAT11((byte)((uint)puVar45 >> 8) | *(byte *)((int)puVar45 + -0x3f),
                                      (char)puVar45));
  pbVar22 = (byte *)((int)piVar21 + *piVar21);
  pbVar35 = pbVar22;
  puVar46 = uStackY_28;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*puVar45,(char)puVar20));
  puVar36 = puVar40 + (uint)bVar52 * -2 + 1;
  out(*puVar40,(short)puVar45);
  puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + (byte)*puVar46);
  puVar40 = puVar36 + (uint)bVar52 * -2 + 1;
  out(*puVar36,(short)puVar45);
  uVar47 = uVar48;
  in_SS = uVar49;
code_r0x00402e6e:
  uVar48 = uVar47;
  uVar24 = (undefined3)((uint)puVar45 >> 8);
  cVar7 = (char)puVar45 + (byte)*puVar46;
  puVar36 = puVar40 + (uint)bVar52 * -2 + 1;
  out(*puVar40,(short)CONCAT31(uVar24,cVar7));
  puVar45 = (uint *)CONCAT31(uVar24,cVar7 + (byte)*puVar46);
  puVar40 = puVar36 + (uint)bVar52 * -2 + 1;
  out(*puVar36,(short)puVar45);
  pbVar35 = (byte *)0x0;
  puVar36 = puVar46;
code_r0x00402e81:
  puVar46 = puVar36;
  bVar6 = (char)pbVar35 - *pbVar35;
  iVar18 = CONCAT31((int3)((uint)pbVar35 >> 8),bVar6);
  *pbVar12 = *pbVar12 + (char)puVar45;
  pbVar22 = (byte *)(iVar18 * 2);
  *pbVar22 = *pbVar22 ^ bVar6;
  pbVar22 = (byte *)(int)(short)iVar18;
  *pbVar22 = *pbVar22 + bVar6;
  *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar20;
  bVar9 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar6;
  *(byte **)(pbVar12 + -0x73) =
       (byte *)((int)puVar40 + (uint)CARRY1(bVar9,bVar6) + *(int *)(pbVar12 + -0x73));
  *pbVar22 = *pbVar22 + bVar6;
  bVar9 = (byte)puVar20 | (byte)*puVar45;
  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar9);
  puVar36 = puVar40;
  if ((char)bVar9 < '\x01') goto code_r0x00402eb4;
  *pbVar22 = *pbVar22 + bVar6;
  pbVar35 = (byte *)CONCAT31((int3)(char)((uint)pbVar35 >> 8),bVar6 + 0x2d);
  puVar40[(int)puVar46 * 2] =
       (uint)((int)puVar45 + (uint)(0xd2 < bVar6) + puVar40[(int)puVar46 * 2]);
  pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar49);
  do {
    uVar14 = *puVar40;
    bVar9 = (byte)pbVar35;
    *(byte *)puVar40 = (byte)*puVar40 + bVar9;
    if (!CARRY1((byte)uVar14,bVar9)) break;
    *pbVar35 = *pbVar35 + bVar9;
    bVar9 = bVar9 | pbVar35[0x400001a];
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar9);
    if ((char)bVar9 < '\x01') {
code_r0x00402ecc:
      *pbVar22 = *pbVar22 + (byte)pbVar22;
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar9 = (byte)pbVar22 | pbVar22[0x400001b];
      pcVar39 = (char *)CONCAT31(uVar24,bVar9);
      if ((char)bVar9 < '\x01') {
        uVar14 = *puVar45;
        *(byte *)puVar45 = (byte)*puVar45 + (byte)puVar20;
        *(char *)((int)pcVar39 * 2) =
             *(char *)((int)pcVar39 * 2) - CARRY1((byte)uVar14,(byte)puVar20);
        bVar51 = 0x81 < bVar9;
        bVar9 = bVar9 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar22 = *pbVar22 + bVar9;
      puVar36 = puVar40;
code_r0x00402eb4:
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar9 = (char)pbVar22 + 0x6f;
      pcVar39 = (char *)CONCAT31(uVar24,bVar9);
      *(byte **)pcVar39 = pbStackY_44;
      uVar14 = *puVar45;
      *(byte *)puVar45 = (byte)*puVar45 + (char)puVar20;
      pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar49);
      in_DS = uVar49;
      if ((byte)*puVar45 != 0 && SCARRY1((byte)uVar14,(char)puVar20) == (char)(byte)*puVar45 < '\0')
      {
        *pcVar39 = *pcVar39 + bVar9;
        bVar6 = (char)pbVar22 + 0x9c;
        pbVar22 = (byte *)CONCAT31(uVar24,bVar6);
        puVar36[(int)puVar46 * 2] =
             (uint)((int)puVar45 + (uint)(0xd2 < bVar9) + puVar36[(int)puVar46 * 2]);
        pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar49);
        uVar14 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + bVar6;
        puVar40 = puVar36;
        if (CARRY1((byte)uVar14,bVar6)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar40 = puVar36 + (uint)bVar52 * -2 + 1;
      out(*puVar36,(short)puVar45);
    }
    cVar7 = (char)pcVar39;
    *pcVar39 = *pcVar39 + cVar7;
    uVar24 = (undefined3)((uint)pcVar39 >> 8);
    bVar9 = cVar7 + 0x6f;
    pcVar39 = (char *)CONCAT31(uVar24,bVar9);
    *(byte **)pcVar39 = pbStackY_44;
    uVar14 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + (byte)puVar20;
    pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar49);
    *(byte *)(puVar40 + 7) = ((byte)puVar40[7] - bVar41) - CARRY1((byte)uVar14,(byte)puVar20);
    *pcVar39 = *pcVar39 + bVar9;
    bVar6 = cVar7 + 0x9c;
    pcVar39 = (char *)CONCAT31(uVar24,bVar6);
    puVar40[(int)puVar46 * 2] =
         (uint)((int)puVar45 + (uint)(0xd2 < bVar9) + puVar40[(int)puVar46 * 2]);
    uVar14 = *puVar40;
    *(byte *)puVar40 = (byte)*puVar40 + bVar6;
    if (!CARRY1((byte)uVar14,bVar6)) goto code_r0x00402e7e;
    *pcVar39 = *pcVar39 + bVar6;
    bVar6 = bVar6 | pcVar39[0x400001c];
    pbVar35 = (byte *)CONCAT31(uVar24,bVar6);
    in_SS = uVar49;
    if ((char)bVar6 < '\x01') goto code_r0x00402f16;
    *pbVar35 = *pbVar35 + bVar6;
    pcVar39 = (char *)CONCAT31(uVar24,bVar6 + 0x6f);
    while( true ) {
      *(byte **)pcVar39 = pbStackY_44;
      uVar14 = *puVar45;
      *(byte *)puVar45 = (byte)*puVar45 + (byte)puVar20;
      *(uint *)((int)puVar40 + 0x1d) =
           (*(int *)((int)puVar40 + 0x1d) - (int)puVar46) - (uint)CARRY1((byte)uVar14,(byte)puVar20)
      ;
      bVar9 = (byte)pcVar39;
      *pcVar39 = *pcVar39 + bVar9;
      bVar6 = bVar9 + 0x2d;
      pbVar35 = (byte *)CONCAT31((int3)((uint)pcVar39 >> 8),bVar6);
      puVar40[(int)puVar46 * 2] =
           (uint)((int)puVar45 + (uint)(0xd2 < bVar9) + puVar40[(int)puVar46 * 2]);
      pbStackY_44 = (byte *)CONCAT22((short)((uint)pbStackY_44 >> 0x10),uVar49);
      uVar14 = *puVar40;
      *(byte *)puVar40 = (byte)*puVar40 + bVar6;
      if (!CARRY1((byte)uVar14,bVar6)) break;
      *pbVar35 = *pbVar35 + bVar6;
code_r0x00402f16:
      bVar9 = (byte)pbVar35 | pbVar35[0x400001d];
      puVar36 = (uint *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar9);
      pbVar35 = unaff_EBP;
      if ((char)bVar9 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar35;
        *(byte *)puVar36 = (byte)*puVar36 + (char)puVar36;
        uVar24 = (undefined3)((uint)puVar36 >> 8);
        cVar7 = (char)puVar36 + 'o';
        puVar16 = (uint *)CONCAT31(uVar24,cVar7);
        *puVar16 = (uint)pbStackY_44;
        cVar10 = (char)puVar20;
        *(byte *)puVar45 = (byte)*puVar45 + cVar10;
        pbStackY_44 = (byte *)CONCAT22(pbStackY_44._2_2_,uVar49);
        bVar9 = (byte)((uint)puVar45 >> 8);
        bVar51 = bVar9 < (byte)*puVar40;
        puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),
                                   CONCAT11(bVar9 - (byte)*puVar40,(char)puVar45));
        if (bVar51) break;
        bVar51 = CARRY4((uint)puVar16,*puVar16);
        puVar36 = (uint *)((int)puVar16 + *puVar16);
        if (!SCARRY4((int)puVar16,*puVar16)) {
          bVar51 = CARRY4((uint)unaff_EBP,*puVar36);
          unaff_EBP = unaff_EBP + *puVar36;
        }
        *puVar36 = (*puVar36 - (int)puVar36) - (uint)bVar51;
        *(byte *)puVar45 = (byte)*puVar45 + cVar10;
        puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                   CONCAT11((char)((uint)puVar20 >> 8) + (byte)*puVar45,
                                            cVar10 - (byte)*puVar45));
        *(byte *)puVar36 = (byte)*puVar36 + (char)puVar36;
code_r0x00402f3b:
        cVar10 = (char)puVar45;
        *pbVar12 = *pbVar12 + cVar10;
        bVar9 = (byte)puVar36;
        *(byte *)((int)puVar36 * 2) = *(byte *)((int)puVar36 * 2) ^ bVar9;
        *(byte *)puVar36 = (byte)*puVar36 + bVar9;
        *(byte *)puVar36 = (byte)*puVar36 + cVar10;
        uVar14 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + bVar9;
        *puVar45 = (uint)((int)puVar36 + (uint)CARRY1((byte)uVar14,bVar9) + *puVar45);
        pcVar39 = (char *)((uint)puVar36 | *puVar46);
        uVar24 = (undefined3)((uint)pcVar39 >> 8);
        cVar7 = (char)pcVar39 + *pcVar39;
        pcVar39 = (char *)CONCAT31(uVar24,cVar7);
        *pcVar39 = *pcVar39 + cVar7;
        cVar7 = cVar7 + *pcVar39;
        piVar21 = (int *)CONCAT31(uVar24,cVar7);
        *(char *)piVar21 = (char)*piVar21 + cVar7;
        iVar18 = LocalDescriptorTableRegister();
        *piVar21 = iVar18;
        bVar9 = *pbVar12;
        bVar29 = (byte)((uint)puVar20 >> 8);
        *pbVar12 = *pbVar12 + bVar29;
        iVar18 = *piVar21;
        uVar32 = (undefined2)((uint)puVar20 >> 0x10);
        bVar28 = (byte)puVar20;
        *(byte *)puVar40 = (byte)*puVar40 + cVar7;
        puVar20 = puVar40 + (uint)bVar52 * -2 + 1;
        out(*puVar40,(short)puVar45);
        *(byte *)puVar20 = (byte)*puVar20 + cVar7;
        bVar6 = *pbVar12;
        *(byte *)puVar45 = (byte)*puVar45 - bVar41;
        *(byte *)puVar20 = (byte)*puVar20 + cVar7;
        puVar16 = puVar20 + (uint)bVar52 * -2 + 1;
        out(*puVar20,(short)puVar45);
        *(byte *)puVar16 = (byte)*puVar16 + cVar7;
        bVar8 = *pbVar12;
        *(uint *)((int)puVar45 + -0x23) = *(uint *)((int)puVar45 + -0x23) & (uint)puVar16;
        puVar23 = (ushort *)((int)piVar21 + *piVar21);
        if (!SCARRY4((int)piVar21,*piVar21)) {
          *puVar23 = in_DS;
        }
        *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
        uVar33 = CONCAT11((char)((uint)puVar45 >> 8) + *(byte *)((int)puVar45 + -0x15),cVar10);
        puVar45 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar33);
        puVar36 = (uint *)((int)puVar23 + *(int *)puVar23);
        if (!SCARRY4((int)puVar23,*(int *)puVar23)) {
          *(ushort *)puVar36 = in_DS;
        }
        cVar7 = (char)puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + cVar7;
        cVar30 = ((bVar29 - (char)iVar18) - CARRY1(bVar9,bVar29) | bVar6 | bVar8) + (byte)*puVar36;
        puVar20 = (uint *)CONCAT22(uVar32,CONCAT11(cVar30,bVar28));
        uVar14 = *puVar45;
        *(byte *)puVar45 = (byte)*puVar45 + bVar28;
        if (CARRY1((byte)uVar14,bVar28)) {
          *(byte *)puVar36 = (byte)*puVar36 + cVar7;
          bVar9 = *(byte *)((int)puVar45 + 6);
          *(byte *)puVar45 = (byte)*puVar45 + bVar28;
          bVar6 = (cVar30 - (byte)*puVar16) + cRam14730307;
          *(byte *)puVar36 = (byte)*puVar36 + cVar7;
          bVar9 = bVar41 | bVar9 | *(byte *)((int)puVar45 + 0x2a);
          uVar14 = *puVar36;
          pbVar12 = (byte *)((int)puVar36 + (uint)CARRY1(bVar6,(byte)*puVar36) + *puVar36);
          *(byte *)puVar45 = (byte)*puVar45 + bVar28;
          cVar7 = cVar42 - (byte)*puVar16;
          cVar42 = bVar9 + *(char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar9,cVar42)) >> 8),
                                              cVar7) + 0x1e);
          *pbVar12 = *pbVar12 + (char)pbVar12;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          bVar9 = (char)pbVar12 + 0x2aU & (byte)*puVar45;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
          cVar42 = cVar42 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar42,cVar7)) + 0x1f);
          *pcVar39 = *pcVar39 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
          cVar42 = cVar42 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar42,cVar7)) + 0x20);
          *pcVar39 = *pcVar39 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
          cVar42 = cVar42 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar42,cVar7)) + 0x21);
          *pcVar39 = *pcVar39 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
          cVar42 = cVar42 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar42,cVar7)) + 0x22);
          *pcVar39 = *pcVar39 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
          bVar6 = bVar6 + (byte)uVar14 + *pcVar39;
          uVar26 = CONCAT22(uVar32,CONCAT11(bVar6,bVar28));
          cVar42 = cVar42 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar42,cVar7)) + 0x25);
          *pcVar39 = *pcVar39 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
          pcVar13 = (char *)CONCAT22(uVar31,CONCAT11(cVar42 + *(char *)(CONCAT22(uVar31,CONCAT11(
                                                  cVar42,cVar7)) + 0x26),cVar7));
          *pcVar39 = *pcVar39 + bVar9 + 0x2a;
          bVar9 = bVar9 + 0x54 & (byte)*puVar45;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          cVar7 = bVar9 + 0x2a;
          pcVar39 = (char *)CONCAT31(uVar24,cVar7);
          if ((POPCOUNT(cVar7) & 1U) == 0) {
            *pcVar39 = *pcVar39 + cVar7;
            pbVar12 = (byte *)(CONCAT31(uVar24,bVar9 + 0x4f) + -0x33282610);
            bVar9 = *pbVar12;
            bVar8 = (byte)pbVar12;
            *pbVar12 = *pbVar12 + bVar8;
            uVar24 = (undefined3)((uint)pbVar12 >> 8);
            if (!CARRY1(bVar9,bVar8)) {
              if (!SCARRY1(bVar8,'\0')) {
                *pbVar12 = *pbVar12 + bVar8;
                uVar26 = CONCAT22(uVar32,CONCAT11(bVar6 | (byte)*puVar45,bVar28));
                bVar8 = bVar8 & (byte)*puVar45;
                *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
                pcVar39 = (char *)CONCAT31(uVar24,bVar8 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar39 = (char *)CONCAT31(uVar24,bVar8 + *pcVar13);
              if (SCARRY1(bVar8,*pcVar13) != (char)(bVar8 + *pcVar13) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar9 = bVar8 + *pcVar13;
            pbVar12 = (byte *)CONCAT31(uVar24,bVar9);
            if (SCARRY1(bVar8,*pcVar13) == (char)bVar9 < '\0') {
              pcVar39 = (char *)CONCAT22(uVar32,CONCAT11(bVar6 | (byte)*puVar45,bVar28));
              *pcVar13 = *pcVar13 + cVar10;
              *(byte *)puVar45 = (byte)*puVar45 ^ bVar9;
              *(char *)((int)pbVar12 * 2) = *(char *)((int)pbVar12 * 2) + bVar9;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar39 = *pcVar39 + (char)pcVar39;
            uVar24 = (undefined3)((uint)pcVar39 >> 8);
            bVar9 = (char)pcVar39 + 0x2aU & (byte)*puVar45;
            *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
            pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
            *pcVar39 = *pcVar39 + bVar9 + 0x2a;
            pcVar39 = (char *)CONCAT31(uVar24,bVar9 + 0x54 & (byte)*puVar45);
code_r0x00403072:
            cVar7 = (char)pcVar39;
            *pcVar39 = *pcVar39 + cVar7;
            uVar24 = (undefined3)((uint)pcVar39 >> 8);
            pcVar39 = (char *)CONCAT31(uVar24,cVar7 + '*');
            *pcVar39 = *pcVar39 + cVar7 + '*';
            bVar9 = cVar7 + 0x54U & (byte)*puVar45;
            *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,uVar48);
            uVar26 = CONCAT22((short)((uint)uVar26 >> 0x10),
                              CONCAT11((char)((uint)uVar26 >> 8) +
                                       *(char *)CONCAT31(uVar24,bVar9 + 0x2a),(char)uVar26));
            *(byte *)(puVar16 + 0x828000) = (byte)puVar16[0x828000] - cVar10;
            pcVar39 = pcStackY_7c;
code_r0x0040309a:
            cVar7 = (char)pcVar39;
            *pcVar39 = *pcVar39 + cVar7;
            pcStackY_7c = (char *)CONCAT22(pcStackY_7c._2_2_,uVar49);
            *pcVar39 = *pcVar39 + cVar7;
            pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar39 >> 8),cVar7 + 0x2aU & (byte)*puVar45);
          }
          cVar7 = (char)pbVar12;
          *pbVar12 = *pbVar12 + cVar7;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          cVar42 = cVar7 + '*';
          pcVar39 = (char *)CONCAT31(uVar24,cVar42);
          *(byte *)(puVar16 + 0x828000) = (byte)puVar16[0x828000] - cVar10;
          *pcVar39 = *pcVar39 + cVar42;
          cVar30 = (char)pcStackY_7c - (byte)*puVar16;
          pcVar13 = (char *)CONCAT22((short)((uint)pcStackY_7c >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_7c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_7c >> 8),
                                                                 cVar30) + 0x34),cVar30));
          *pcVar39 = *pcVar39 + cVar42;
          bVar9 = cVar7 + 0x54U & (byte)*puVar45;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pbVar12 = (byte *)CONCAT31(uVar24,bVar9 + 0x2a);
          bVar9 = (byte)((uint)uVar26 >> 8);
          pcVar39 = (char *)CONCAT22((short)((uint)uVar26 >> 0x10),
                                     CONCAT11(bVar9 + *pbVar12,(char)uVar26));
          pbVar12 = pbVar12 + (uint)CARRY1(bVar9,*pbVar12) + *(int *)pbVar12;
          *(byte *)puVar45 = (byte)*puVar45 + (char)uVar26;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          cVar7 = (byte)pbVar12 - *pbVar12;
          piVar21 = (int *)CONCAT31(uVar24,cVar7);
          puVar16 = (uint *)((int)puVar16 + (uint)((byte)pbVar12 < *pbVar12) + *piVar21);
          cVar7 = cVar7 + (char)*piVar21;
          pbVar12 = (byte *)CONCAT31(uVar24,cVar7);
          *pbVar12 = *pbVar12 + cVar7;
code_r0x004030df:
          *pcVar39 = *pcVar39 + cVar10;
          bVar9 = *pbVar12;
          bVar6 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar6;
          *(byte **)(pcVar13 + -0x41) =
               (byte *)((int)puVar16 + (uint)CARRY1(bVar9,bVar6) + *(int *)(pcVar13 + -0x41));
          *pbVar12 = *pbVar12 + bVar6;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          bVar6 = bVar6 | (byte)*puVar16;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar39 = (char *)CONCAT31(uVar24,bVar6 + 0x7b);
          *pcVar39 = *pcVar39 + bVar6 + 0x7b;
          pbVar12 = (byte *)((int)puVar16 + CONCAT31(uVar24,bVar6 - 8) + -1);
          *pbVar12 = *pbVar12 + (bVar6 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar40 = puVar16 + (uint)bVar52 * -2 + 1;
        out(*puVar16,uVar33);
        pbVar35 = unaff_EBP + 1;
        pbStackY_44 = unaff_EBP;
      }
      bVar9 = cVar7 - bVar51;
      pbVar35 = (byte *)((int)puVar40 + (int)puVar46 * 2);
      bVar51 = CARRY1(*pbVar35,bVar9);
      *pbVar35 = *pbVar35 + bVar9;
code_r0x00402ef9:
      pcVar39 = (char *)CONCAT31(uVar24,bVar9 - bVar51);
      pbVar35 = (byte *)((int)puVar46 + (int)unaff_EBP * 2);
      *pbVar35 = *pbVar35 + (bVar9 - bVar51);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar45;
  puVar36 = puVar45 + 0x2828000;
  bVar9 = (byte)puVar20;
  bVar51 = (byte)*puVar36 < bVar9;
  *(byte *)puVar36 = (byte)*puVar36 - bVar9;
  bVar9 = (byte)pbVar35 + *pbVar35;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar9 + bVar51);
  puVar36 = puVar46;
  uVar47 = uVar48;
  if (CARRY1((byte)pbVar35,*pbVar35) || CARRY1(bVar9,bVar51)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar39 = *pcVar39 + bVar6;
  uVar47 = uVar48;
  in_SS = uVar49;
  goto code_r0x00402e6e;
code_r0x00402674:
  pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),
                             (char)pbVar35 + pbVar35[(int)unaff_EBP] + bVar51);
  unaff_ESI = (uint *)((int)unaff_ESI + -1);
code_r0x00402678:
  *pbVar35 = *pbVar35 + (char)pbVar35;
  param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),
                            CONCAT11((byte)((uint)param0 >> 8) | bRam7d160243,(char)param0));
  uVar49 = in_CS;
code_r0x00402680:
  bVar9 = (byte)param0;
  *param0 = *param0 + bVar9;
  iVar18 = CONCAT31((int3)((uint)param0 >> 8),bVar9 + 2);
  piVar21 = (int *)((int)pbVar22 * 2 + 0x400009a);
  *piVar21 = *piVar21 + iVar18 + (uint)(0xfd < bVar9);
  pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                             CONCAT11((char)((uint)pbVar12 >> 8) + *(char *)((int)param_2 * 5),
                                      (char)pbVar12));
  *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + bVar9 + 2;
  unaff_EDI = pbVar22;
  goto code_r0x00402693;
}


