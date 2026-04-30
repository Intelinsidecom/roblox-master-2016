/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004033d4
 * Raw Name    : PrintErrorReport
 * Demangled   : PrintErrorReport
 * Prototype   : byte * PrintErrorReport(byte * param_1, byte * param_2)
 * Local Vars  : uStack_18, apbStack_10, uStack_4, pcVar1, uVar2, iVar3, uVar4, uVar5, puVar6, bVar7, bVar8, bVar9, cVar10, bVar11, bVar12, bVar13, in_EAX, iVar14, uVar15, pcVar16, piVar17, uVar18, pbVar19, pcVar20, pbVar21, pbVar22, pbVar23, uVar24, uVar25, extraout_ECX, extraout_ECX_00, cVar26, uVar27, cVar28, puVar29, puVar30, uVar31, unaff_EBX, pbVar32, cVar33, bVar34, uVar35, puVar36, puVar37, piVar38, piVar39, puVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, pbVar56, pbVar57, unaff_ESI, puVar58, puVar59, pbVar60, unaff_EDI, puVar61, in_ES, in_CS, in_SS, uVar62, in_DS, uVar63, bVar64, in_AF, in_TF, param_1, in_IF, param_2, bVar65, bVar66, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar67, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x004035f0) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall PrintErrorReport(byte *param_1,byte *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte *in_EAX;
  int iVar14;
  undefined3 uVar24;
  uint uVar15;
  char *pcVar16;
  int *piVar17;
  uint uVar18;
  byte *pbVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint3 uVar25;
  byte *pbVar23;
  char cVar26;
  byte *extraout_ECX;
  undefined3 uVar27;
  byte *extraout_ECX_00;
  char cVar28;
  uint *puVar29;
  undefined1 *puVar30;
  undefined1 uVar31;
  char cVar33;
  byte bVar34;
  byte *unaff_EBX;
  byte *pbVar32;
  undefined2 uVar35;
  undefined4 *puVar36;
  undefined2 *puVar37;
  int *piVar38;
  int *piVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined2 *puVar42;
  undefined4 *puVar43;
  undefined2 *puVar44;
  undefined1 *puVar45;
  undefined2 *puVar46;
  undefined2 *puVar47;
  undefined4 *puVar48;
  undefined2 *puVar49;
  undefined2 *puVar50;
  undefined2 *puVar51;
  undefined2 *puVar52;
  undefined1 *puVar53;
  undefined2 *puVar54;
  undefined1 *puVar55;
  byte *pbVar56;
  byte *pbVar57;
  byte *unaff_ESI;
  uint *puVar58;
  uint *puVar59;
  byte *pbVar60;
  uint *unaff_EDI;
  uint *puVar61;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 uVar62;
  undefined2 in_DS;
  undefined2 uVar63;
  bool bVar64;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar65;
  bool bVar66;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar67;
  uint unaff_retaddr;
  undefined4 uStack_18;
  byte *apbStack_10 [3];
  undefined4 uStack_4;
  
  bVar65 = false;
  do {
                    /* .NET CLR Managed Code */
    param_2[0xa0a0000] = param_2[0xa0a0000] - (char)((uint)in_EAX >> 8);
    uVar5 = uStack_4._2_2_;
    uStack_4 = (byte *)CONCAT22(uStack_4._2_2_,in_ES);
    pbVar56 = uStack_4;
    uVar62 = (undefined2)((uint)param_1 >> 0x10);
    cVar10 = (char)param_1;
    cVar26 = (char)((uint)param_1 >> 8) + *in_EAX;
    param_1 = (byte *)CONCAT22(uVar62,CONCAT11(cVar26,cVar10));
    *in_EAX = *in_EAX + (char)in_EAX;
    uStack_4 = (byte *)((uint)uStack_4._2_2_ << 0x10);
    pbVar19 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    iVar14 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *unaff_EBX) + 0x6128;
    bVar7 = (char)iVar14 + *(char *)((int)unaff_EDI * 2 + 0x400003e);
    pbVar60 = (byte *)CONCAT31((int3)((uint)iVar14 >> 8),bVar7);
    cVar28 = (char)(param_2 + 1) - *unaff_EBX;
    puVar29 = (uint *)CONCAT31((int3)((uint)(param_2 + 1) >> 8),cVar28);
    pbRam2a0a0000 = in_EAX;
    *(byte *)puVar29 = (byte)*puVar29 ^ bVar7;
    *pbVar60 = *pbVar60 + (char)((uint)unaff_EBX >> 8);
    *pbVar60 = *pbVar60 + bVar7;
    *param_1 = *param_1 + cVar28;
    bVar8 = *pbVar60;
    *pbVar60 = *pbVar60 + bVar7;
    *(byte **)(unaff_EBX + -0x41) =
         pbVar19 + (uint)CARRY1(bVar8,bVar7) + *(int *)(unaff_EBX + -0x41);
    uVar18 = unaff_retaddr;
    do {
      *pbVar60 = *pbVar60 + (byte)pbVar60;
      unaff_retaddr = (uVar18 >> 0x10) << 0x10;
      uVar35 = (undefined2)(uVar18 >> 0x10);
      uVar24 = (undefined3)((uint)pbVar60 >> 8);
      bVar8 = (byte)pbVar60 | *pbVar19;
      uVar63 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar31 = SUB41(unaff_EBX,0);
      cVar33 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x69];
      *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
      cVar28 = bVar8 + 0x7d;
      pcVar16 = (char *)CONCAT31(uVar24,cVar28);
      pbVar19[(int)pcVar16] = pbVar19[(int)pcVar16] + cVar28;
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar33,uVar31)) + 0x67);
      *pcVar16 = *pcVar16 + cVar28;
      pcVar16 = (char *)CONCAT31(uVar24,bVar8 - 6);
      puVar58 = (uint *)(pbVar19 + 4);
      out(*(undefined4 *)pbVar19,(short)puVar29);
      *pcVar16 = *pcVar16 + (bVar8 - 6);
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar33,uVar31)) + 0x6b);
      *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
      pcVar16 = (char *)CONCAT31(uVar24,bVar8 + 0x7d);
      pbVar19 = (byte *)((int)puVar58 + (int)pcVar16);
      *pbVar19 = *pbVar19 + bVar8 + 0x7d;
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar33,uVar31)) + 0x6a);
      unaff_EBX = (byte *)CONCAT22(uVar63,CONCAT11(cVar33,uVar31));
      puVar61 = puVar29;
      do {
        cVar28 = (char)pcVar16;
        *pcVar16 = *pcVar16 + cVar28;
        uVar24 = (undefined3)((uint)pcVar16 >> 8);
        bVar8 = cVar28 + 0x7d;
        pcVar20 = (char *)CONCAT31(uVar24,bVar8);
        *(byte *)((int)puVar58 + (int)pcVar20) = *(byte *)((int)puVar58 + (int)pcVar20) + bVar8;
        uVar27 = (undefined3)((uint)puVar61 >> 8);
        bVar7 = (char)puVar61 - *(byte *)((int)puVar61 + 0x457e02);
        puVar29 = (uint *)CONCAT31(uVar27,bVar7);
        pbVar56[0x6fe1411] = pbVar56[0x6fe1411] + bVar8;
        uVar15 = *puVar58;
        uVar4 = *puVar58;
        *(byte *)puVar58 = (byte)*puVar58 + bVar8;
        if (CARRY1((byte)uVar15,bVar8)) {
          *pcVar20 = *pcVar20 + bVar8;
          bVar8 = bVar8 | pcVar20[0x4000045];
          piVar17 = (int *)CONCAT31(uVar24,bVar8);
          if ((char)bVar8 < '\x01') {
            *(byte *)puVar29 = (byte)*puVar29 + bVar8;
            uStack_4._2_2_ = uVar5;
            goto code_r0x004034a0;
          }
          *(byte *)piVar17 = (char)*piVar17 + bVar8;
          bVar8 = bVar8 + 0x6f;
          pcVar20 = (char *)CONCAT31(uVar24,bVar8);
          apbStack_10[0] = (byte *)((uint)apbStack_10[0] & 0xffff0000);
          *pcVar20 = *pcVar20 + bVar8;
          pbVar56 = pbVar56 + -*puVar29;
          *pcVar20 = *pcVar20 + bVar8;
          *unaff_EBX = *unaff_EBX + bVar7;
          *(byte *)((int)pcVar20 * 2) = *(byte *)((int)pcVar20 * 2) ^ bVar8;
          in_AF = 9 < (bVar8 & 0xf) | in_AF;
          uVar15 = CONCAT31(uVar24,bVar8 + in_AF * '\x06') & 0xffffff0f;
          cVar28 = (char)uVar15;
          pcVar16 = (char *)CONCAT22((short)(uVar15 >> 0x10),
                                     CONCAT11((char)((uint)pcVar16 >> 8) + in_AF,cVar28));
          *pcVar16 = *pcVar16 + cVar28;
          cRam72110000 = cRam72110000 + bVar7;
          puVar54 = (undefined2 *)segment(in_SS,(short)apbStack_10 + -2);
          *puVar54 = in_ES;
          pcVar16[0x1a] = pcVar16[0x1a] + (char)((uint)puVar61 >> 8);
          *param_1 = *param_1 + cVar10;
          *puVar29 = (uint)(param_1 + *puVar29);
          cVar33 = cVar33 + unaff_EBX[0x70];
          *param_1 = *param_1 + cVar10;
          uVar24 = (undefined3)((uint)param_1 >> 8);
          bVar8 = cVar10 + 0xa2;
          cVar33 = cVar33 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar33,uVar31)) + 0x6f);
          unaff_EBX = (byte *)CONCAT22(uVar63,CONCAT11(cVar33,uVar31));
          *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
          bVar9 = cVar10 + 0x44;
          piVar17 = (int *)CONCAT31(uVar24,bVar9);
          *(byte *)puVar29 = ((byte)*puVar29 - bVar9) - (0x5d < bVar8);
          if ((POPCOUNT((byte)*puVar29) & 1U) != 0) {
            *(byte *)piVar17 = (char)*piVar17 + bVar9;
            *(byte *)piVar17 = (char)*piVar17 + bVar9;
            *(char *)piVar17 = (char)*piVar17 + cVar33;
            puVar29 = (uint *)CONCAT22((short)((uint)puVar61 >> 0x10),(ushort)bVar7);
            *(byte *)piVar17 = (char)*piVar17 + bVar9;
            param_1 = (byte *)CONCAT22(uVar62,CONCAT11(cVar26 + (char)*piVar17,cVar10));
            in_SS = in_ES;
            pbVar19 = unaff_EBX;
            goto code_r0x00403511;
          }
          *(byte *)piVar17 = (char)*piVar17 + bVar9;
          cVar10 = cVar10 + -0x1a;
          piVar17 = (int *)CONCAT31(uVar24,cVar10);
          pbVar19 = (byte *)((uVar18 >> 0x10) << 0x10);
          *puVar29 = (*puVar29 - (int)piVar17) - (uint)(0x5d < bVar9);
          if ((POPCOUNT(*puVar29 & 0xff) & 1U) != 0) {
            *(byte *)puVar29 = (byte)*puVar29 + cVar10;
            in_SS = in_ES;
            goto code_r0x004034f3;
          }
          *(char *)piVar17 = (char)*piVar17 + cVar10;
          in_SS = in_ES;
          goto code_r0x0040349e;
        }
        pcVar16 = pcVar20;
        puVar61 = puVar29;
      } while (SCARRY1((byte)uVar4,bVar8) == (char)(byte)*puVar58 < '\0');
      *pcVar20 = *pcVar20 + bVar8;
      piVar17 = (int *)CONCAT31(uVar24,cVar28 + -0x59);
      pbVar19 = (byte *)((int)puVar58 + (uint)(0xd5 < bVar8) + *piVar17);
      bVar9 = cVar28 + -0x59 + (char)*piVar17;
      pbVar60 = (byte *)CONCAT31(uVar24,bVar9);
      bVar8 = *pbVar60;
      *pbVar60 = *pbVar60 + bVar9;
      *(byte **)pbVar60 = pbVar60 + (uint)CARRY1(bVar8,bVar9) + *(int *)pbVar60;
      bVar8 = *param_1;
      *param_1 = *param_1 + bVar7;
      uVar18 = unaff_retaddr;
    } while (CARRY1(bVar8,bVar7));
    *pbVar19 = *pbVar19 + bVar9;
    cVar10 = bVar7 - *unaff_EBX;
    param_2 = (byte *)CONCAT31(uVar27,cVar10);
    *param_2 = *param_2 ^ bVar9;
    *unaff_EBX = *unaff_EBX + cVar10;
    *pbVar60 = *pbVar60 + bVar9;
    *(char *)((int)pbVar60 * 2) = *(char *)((int)pbVar60 * 2) + cVar10;
    *param_1 = *param_1 + cVar10;
    in_EAX = pbVar60;
    unaff_ESI = pbVar19;
  } while( true );
code_r0x0040349e:
  uVar35 = (undefined2)((uint)pbVar19 >> 0x10);
  piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + -0x5e);
code_r0x004034a0:
  uStack_4 = (byte *)((uint)uStack_4._2_2_ << 0x10);
  param_1[0x2a0a0000] = param_1[0x2a0a0000] - (char)param_1;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((char)((uint)param_1 >> 8) + (char)*piVar17,(char)param_1));
  bVar8 = (byte)piVar17;
  *(byte *)piVar17 = (char)*piVar17 + bVar8;
  pbVar19 = (byte *)CONCAT22(uVar35,in_ES);
  puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),
                             (char)puVar29 - *(byte *)((int)puVar29 + 0x467e02));
  pbVar56[0x6fe1411] = pbVar56[0x6fe1411] + bVar8;
  uVar18 = *puVar58;
  *(byte *)puVar58 = (byte)*puVar58 + bVar8;
  if (!CARRY1((byte)uVar18,bVar8)) {
    pbVar60 = (byte *)((int)unaff_EDI + (int)pbVar56 * 2);
    *pbVar60 = *pbVar60 + bVar8;
    goto code_r0x004034f3;
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar8;
  uVar24 = (undefined3)((uint)piVar17 >> 8);
  bVar8 = bVar8 | *(byte *)((int)piVar17 + 0x4000046);
  piVar17 = (int *)CONCAT31(uVar24,bVar8);
  if ((char)bVar8 < '\x01') {
code_r0x00403511:
    pbVar56 = pbVar19;
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pbVar19 = (byte *)((uint)pbVar56 & 0xffff0000);
    goto code_r0x004034f3;
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar8;
  pbVar60 = (byte *)CONCAT31(uVar24,bVar8 + 0x6f);
  *pbVar60 = *pbVar60 + bVar8 + 0x6f;
  pbVar56 = pbVar56 + -*puVar29;
  in_SS = in_ES;
  do {
    uStack_4 = (byte *)CONCAT22(uStack_4._2_2_,in_DS);
    bVar8 = *(byte *)((int)unaff_EDI + 0x17);
    *pbVar60 = *pbVar60 + (byte)pbVar60;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((char)((uint)param_1 >> 8) + bVar8 | (byte)*puVar29,
                                        (char)param_1));
    uVar24 = (undefined3)((uint)pbVar60 >> 8);
    bVar8 = (byte)pbVar60 | (byte)*puVar29;
    bVar7 = bVar8 - *(byte *)CONCAT31(uVar24,bVar8);
    puVar58 = (uint *)((int)puVar58 +
                      (uint)(bVar8 < *(byte *)CONCAT31(uVar24,bVar8)) +
                      *(int *)CONCAT31(uVar24,bVar7));
    pbVar60 = (byte *)CONCAT31(uVar24,bVar7);
    *(byte **)pbVar60 = pbVar60 + *(int *)pbVar60;
    *(byte *)puVar58 = (byte)*puVar58 + (char)puVar29;
    bVar8 = *pbVar60;
    *pbVar60 = *pbVar60 + bVar7;
    *puVar29 = (uint)(pbVar60 + (uint)CARRY1(bVar8,bVar7) + *puVar29);
    if ((POPCOUNT(*puVar29 & 0xff) & 1U) != 0) {
      *(byte *)puVar58 = (byte)*puVar58 + 1;
      puVar61 = puVar58;
      goto code_r0x00403529;
    }
    *pbVar60 = *pbVar60 + bVar7;
    piVar17 = (int *)CONCAT31(uVar24,bVar7 + 0x6f);
code_r0x004034f3:
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    *(byte *)puVar58 = (byte)*puVar58 + (char)piVar17;
    pbVar56 = pbVar56 + 1;
    pcVar16 = (char *)((int)((uint)piVar17 | 8) + *(int *)((uint)piVar17 | 8));
    *pcVar16 = *pcVar16 + (char)pcVar16;
    piVar17 = (int *)(pcVar16 + 0x53000000);
    bVar8 = (byte)piVar17;
    *(byte *)piVar17 = (char)*piVar17 + bVar8;
    *unaff_EBX = *unaff_EBX + (char)puVar29;
    *(byte *)piVar17 = (char)*piVar17 + bVar8;
    *pbVar56 = *pbVar56 - (char)unaff_EBX;
    uVar18 = *puVar58;
    *(byte *)puVar58 = (byte)*puVar58 + bVar8;
    if (CARRY1((byte)uVar18,bVar8)) goto code_r0x0040349e;
    uStack_4 = (byte *)CONCAT22(uStack_4._2_2_,in_ES);
    pcVar16[0x5300006f] = pcVar16[0x5300006f] + (char)((uint)puVar29 >> 8);
    pcVar16 = pcVar16 + 0x53000001;
    bVar7 = (byte)pcVar16;
    bRam7e060000 = bVar8;
    *pcVar16 = *pcVar16 + bVar7;
    pbVar60 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar7 + 0x2d);
    puVar58[(int)unaff_EDI * 2] =
         (uint)((int)puVar29 + (uint)(0xd2 < bVar7) + puVar58[(int)unaff_EDI * 2]);
    puVar61 = puVar58;
code_r0x00403529:
    puVar58 = puVar61 + 1;
    out(*puVar61,(short)puVar29);
    bVar8 = *pbVar60;
    bVar7 = (byte)pbVar60;
    *pbVar60 = *pbVar60 + bVar7;
  } while (!CARRY1(bVar8,bVar7));
  *pbVar60 = *pbVar60 + bVar7;
  uVar24 = (undefined3)((uint)pbVar60 >> 8);
  bVar7 = bVar7 | pbVar60[0x4000040];
  pcVar16 = (char *)CONCAT31(uVar24,bVar7);
  if ((char)bVar7 < '\x01') goto code_r0x00403579;
  *pcVar16 = *pcVar16 + bVar7;
  cVar10 = bVar7 + 10;
  pcVar16 = (char *)CONCAT31(uVar24,cVar10);
  puVar61 = puVar58;
  if (cVar10 == '\0' || SCARRY1(bVar7,'\n') != cVar10 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar8 = (byte)pcVar16;
  *pcVar16 = *pcVar16 + bVar8;
  piVar17 = (int *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar8 + 0x2d);
  puVar58[(int)unaff_EDI * 2] =
       (uint)((int)puVar29 + (uint)(0xd2 < bVar8) + puVar58[(int)unaff_EDI * 2]);
  apbStack_10[0] = (byte *)CONCAT22(apbStack_10[0]._2_2_,in_ES);
code_r0x00403549:
  uVar18 = *puVar58;
  bVar8 = (byte)piVar17;
  *(byte *)puVar58 = (byte)*puVar58 + bVar8;
  if (!CARRY1((byte)uVar18,bVar8)) goto code_r0x004034f3;
  *(byte *)piVar17 = (char)*piVar17 + bVar8;
  uVar24 = (undefined3)((uint)piVar17 >> 8);
  bVar8 = bVar8 | *(byte *)((int)piVar17 + 0x4000041);
  if ((char)bVar8 < '\x01') {
    *(byte *)puVar29 = (byte)*puVar29 + (char)param_1;
    *(byte *)puVar29 = (byte)*puVar29;
    pcVar16 = (char *)CONCAT31(uVar24,bVar8 + 0x7e);
    puVar29 = (uint *)((int)puVar29 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
  piVar17 = (int *)CONCAT31(uVar24,bVar8 + 0xb);
  puVar61 = puVar58;
code_r0x0040355b:
  pbVar56 = pbVar56 + -*(int *)((int)puVar61 + 2);
  *pbVar56 = *pbVar56 - (char)unaff_EBX;
  uVar18 = *puVar61;
  bVar8 = (byte)piVar17;
  *(byte *)puVar61 = (byte)*puVar61 + bVar8;
  if (CARRY1((byte)uVar18,bVar8)) goto code_r0x00403548;
code_r0x00403565:
  piVar17 = piVar17 + 0x1ec09c00;
  pbVar60 = (byte *)((int)unaff_EDI + (int)pbVar56 * 2);
  *pbVar60 = *pbVar60 + (char)piVar17;
  *(byte *)puVar61 = (byte)*puVar61 + (char)piVar17 + (char)*piVar17;
  puVar58 = puVar61 + 1;
  out(*puVar61,(short)puVar29);
  pcVar16 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),uRam8c0a0000);
code_r0x00403579:
  *param_1 = *param_1 + (char)pcVar16;
  *(byte *)puVar29 = (byte)*puVar29 - (char)((uint)pcVar16 >> 8);
  puVar61 = puVar58;
code_r0x00403580:
  *(byte *)puVar29 = (byte)*puVar29 + (char)param_1;
  puVar58 = puVar61 + 1;
  out(*puVar61,(short)puVar29);
  bVar8 = (byte)pcVar16;
  puVar29 = (uint *)((int)puVar29 + 1);
  bRam7e060000 = bVar8;
  *pcVar16 = *pcVar16 + bVar8;
  uVar24 = (undefined3)((uint)pcVar16 >> 8);
  bVar7 = bVar8 + 0x2d;
  pcVar16 = (char *)CONCAT31(uVar24,bVar7);
  puVar58[(int)unaff_EDI * 2] =
       (uint)((int)puVar29 + (uint)(0xd2 < bVar8) + puVar58[(int)unaff_EDI * 2]);
  apbStack_10[0] = (byte *)CONCAT22(apbStack_10[0]._2_2_,in_ES);
  uVar18 = *puVar58;
  *(byte *)puVar58 = (byte)*puVar58 + bVar7;
  if (!CARRY1((byte)uVar18,bVar7)) {
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar61 + 0x45),(char)unaff_EBX));
    goto code_r0x0040353f;
  }
  *pcVar16 = *pcVar16 + bVar7;
  bVar7 = bVar7 | pcVar16[0x4000042];
  pcVar16 = (char *)CONCAT31(uVar24,bVar7);
  if ('\0' < (char)bVar7) {
code_r0x004035a1:
    bVar7 = (byte)pcVar16;
    *pcVar16 = *pcVar16 + bVar7;
    uVar24 = (undefined3)((uint)pcVar16 >> 8);
    bVar8 = bVar7 + 10;
    if (bVar8 == 0 || SCARRY1(bVar7,'\n') != (char)bVar8 < '\0') {
      pcVar16 = (char *)CONCAT31(uVar24,bVar7 + 8 + (0xf5 < bVar7));
code_r0x004035e5:
      bVar7 = (byte)pcVar16;
      *pcVar16 = *pcVar16 + bVar7;
      uVar24 = (undefined3)((uint)pcVar16 >> 8);
      bVar8 = bVar7 + 0x2d;
      pcVar16 = (char *)CONCAT31(uVar24,bVar8);
      puVar58[(int)unaff_EDI * 2] =
           (uint)((int)puVar29 + (uint)(0xd2 < bVar7) + puVar58[(int)unaff_EDI * 2]);
      uVar18 = *puVar58;
      *(byte *)puVar58 = (byte)*puVar58 + bVar8;
      if (CARRY1((byte)uVar18,bVar8)) {
        *pcVar16 = *pcVar16 + bVar8;
        bVar8 = bVar8 | pcVar16[0x4000044];
        pbVar19 = (byte *)CONCAT31(uVar24,bVar8);
        if ('\0' < (char)bVar8) {
          *pbVar19 = *pbVar19 + bVar8;
          pbVar19 = (byte *)(CONCAT31(uVar24,bVar8 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar8));
          pbRam2a060000 = pbVar19;
          *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
          *(byte *)puVar29 = (byte)*puVar29 ^ (byte)pbVar19;
          *pbVar19 = *pbVar19 + (char)((uint)param_1 >> 8);
          *pbVar19 = *pbVar19 + (byte)pbVar19;
          puVar61 = unaff_EDI;
          in_SS = in_ES;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),
                                 (byte)param_1 |
                                 *(byte *)((int)(puVar29 + 0xa004000) + (int)unaff_EDI));
      puVar61 = puVar58;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
    bVar7 = bVar7 + 0x37;
    piVar17 = (int *)CONCAT31(uVar24,bVar7);
    puVar58[(int)unaff_EDI * 2] =
         (uint)((int)puVar29 + (uint)(0xd2 < bVar8) + puVar58[(int)unaff_EDI * 2]);
    apbStack_10[0] = (byte *)CONCAT22(apbStack_10[0]._2_2_,in_ES);
    uVar18 = *puVar58;
    *(byte *)puVar58 = (byte)*puVar58 + bVar7;
    puVar61 = puVar58;
    if (!CARRY1((byte)uVar18,bVar7)) goto code_r0x0040355b;
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    bVar7 = bVar7 | *(byte *)((int)piVar17 + 0x4000043);
    pbVar60 = (byte *)CONCAT31(uVar24,bVar7);
    if ((char)bVar7 < '\x01') {
      *pbVar60 = *pbVar60 + bVar7;
      pbVar56 = pbVar56 + -*(int *)((int)unaff_EDI + -0x5d);
      *pbVar60 = *pbVar60 + bVar7;
      uStack_18 = (undefined4 *)((uint)uStack_18._2_2_ << 0x10);
      piVar17 = (int *)CONCAT31(uVar24,bVar7 - *pbVar60);
      puVar58 = (uint *)((int)puVar58 + (-(uint)(bVar7 < *pbVar60) - *piVar17));
      pbVar19 = (byte *)CONCAT31(uVar24,(bVar7 - *pbVar60) + (char)*piVar17);
      apbStack_10[0] = (byte *)0x17000000;
      puVar61 = unaff_EDI;
code_r0x00403615:
      bVar8 = *pbVar19;
      bVar7 = (byte)pbVar19;
      *pbVar19 = *pbVar19 + bVar7;
      *puVar29 = (uint)(pbVar19 + (uint)CARRY1(bVar8,bVar7) + *puVar29);
      unaff_EDI = puVar61;
      if ((POPCOUNT(*puVar29 & 0xff) & 1U) == 0) {
        *pbVar19 = *pbVar19 + bVar7;
        pcVar16 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar7 + 0x28);
        unaff_EDI = puVar61 + 1;
        uVar18 = in((short)puVar29);
        *puVar61 = uVar18;
        *pcVar16 = *pcVar16 + bVar7 + 0x28;
        param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | unaff_EBX[(int)param_1],
                                            (char)param_1));
        pcVar16[0x28] = pcVar16[0x28] + (char)((uint)puVar29 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar60 = *pbVar60 + bVar7;
    uVar18 = CONCAT31(uVar24,bVar7 + 0xb);
    piVar17 = (int *)(uVar18 - *puVar58);
    if (uVar18 < *puVar58) {
      cVar10 = (char)piVar17;
      *(char *)piVar17 = (char)*piVar17 + cVar10;
      uVar62 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar26 = (char)unaff_EBX;
      bVar8 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)puVar29 + 2);
      *pbVar56 = *pbVar56 - cVar26;
      *(byte *)puVar58 = (byte)*puVar58 + cVar10;
      uStack_18 = (undefined4 *)CONCAT22(uStack_18._2_2_,in_ES);
      unaff_EBX = (byte *)CONCAT22(uVar62,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar62,CONCAT11(bVar8,
                                                  cVar26)) + 0x38),cVar26));
      *(char *)piVar17 = (char)*piVar17 + cVar10;
      pcVar16 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),cVar10 + 'o');
      *(byte *)puVar29 = (byte)*puVar29 + (char)param_1;
      *pcVar16 = *pcVar16 - cVar26;
      *pcVar16 = *pcVar16 + cVar10 + 'o';
      unaff_EDI = (uint *)((int)unaff_EDI - puVar58[0x11]);
      goto code_r0x004035e5;
    }
    puVar61 = puVar58 + 1;
    out(*puVar58,(short)puVar29);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar7) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)apbStack_10[0] & 0x4000) != 0;
  bVar65 = ((uint)apbStack_10[0] & 0x400) != 0;
  in_IF = ((uint)apbStack_10[0] & 0x200) != 0;
  in_TF = ((uint)apbStack_10[0] & 0x100) != 0;
  in_AF = ((uint)apbStack_10[0] & 0x10) != 0;
  in_ID = ((uint)apbStack_10[0] & 0x200000) != 0;
  in_AC = ((uint)apbStack_10[0] & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar10 = (char)pcVar16;
  *pcVar16 = *pcVar16 + cVar10;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar29,(char)param_1));
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x3e],
                                        (char)unaff_EBX));
  *pcVar16 = *pcVar16 + cVar10;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar10 + '(');
  cVar10 = (char)((uint)puVar29 >> 8);
  *(byte *)((int)puVar29 + 0x21) = *(byte *)((int)puVar29 + 0x21) + cVar10;
  pbVar60 = pbVar19 + 2;
  *pbVar60 = *pbVar60 + cVar10;
  bVar8 = *pbVar60;
code_r0x00403643:
  cVar10 = (char)pbVar19;
  if ((POPCOUNT(bVar8) & 1U) == 0) {
    *pbVar19 = *pbVar19 + cVar10;
    uVar24 = (undefined3)((uint)pbVar19 >> 8);
    cVar26 = cVar10 + '(';
    pcVar16 = (char *)CONCAT31(uVar24,cVar26);
    in_AF = ((uint)pbVar19 & 0x1000) != 0;
    *pcVar16 = *pcVar16 + cVar26;
    puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),(byte)puVar29 | (byte)*puVar58);
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar58 + 0x3f),(char)unaff_EBX));
    *pcVar16 = *pcVar16 + cVar26;
    pbVar19 = (byte *)CONCAT31(uVar24,cVar10 + 'M');
    puVar29 = (uint *)((uint)puVar29 | *puVar29);
    *pbVar19 = *pbVar19 + (char)((uint)param_1 >> 8);
code_r0x00403659:
    puVar61 = (uint *)((int)unaff_EDI + (uint)bVar65 * -2 + 1);
    bVar8 = (byte)pbVar19;
    *(byte *)unaff_EDI = bVar8;
    *pbVar19 = *pbVar19 + bVar8;
    uVar24 = (undefined3)((uint)pbVar19 >> 8);
    bVar8 = bVar8 | (byte)*puVar29;
    pcVar16 = (char *)CONCAT31(uVar24,bVar8);
    unaff_EDI = puVar61;
    if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x0040369e;
    *pcVar16 = *pcVar16 + bVar8;
    bVar8 = bVar8 + 2;
    *pbVar56 = *pbVar56 - (char)unaff_EBX;
    *(byte *)puVar58 = (byte)*puVar58 + bVar8;
    puVar59 = puVar58 + (uint)bVar65 * -2 + 1;
    out(*puVar58,(short)puVar29);
    unaff_EDI = (uint *)((int)puVar61 + (uint)bVar65 * -2 + 1);
    puVar58 = (uint *)((int)puVar59 + (uint)bVar65 * -2 + 1);
    *(byte *)puVar61 = (byte)*puVar59;
    *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
    cVar26 = (char)((uint)param_1 >> 8);
    unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar26;
    cVar10 = (bVar8 | (byte)*puVar58) - 6;
    piVar17 = (int *)CONCAT31(uVar24,cVar10);
    pcVar16 = (char *)((int)piVar17 * 2 + 0x2adc0a00);
    *pcVar16 = *pcVar16 - cVar26;
    *piVar17 = (int)(*piVar17 + (int)puVar29);
    *(char *)piVar17 = (char)*piVar17 + cVar10;
    bVar8 = cVar10 + (char)*piVar17;
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    uVar18 = CONCAT31(uVar24,bVar8 + in_AF * '\x06') & 0xffffff0f;
    pbVar19 = (byte *)CONCAT22((short)(uVar18 >> 0x10),
                               CONCAT11((char)((uint)pbVar19 >> 8) + in_AF,(char)uVar18));
    pbVar60 = param_1;
  }
  else {
    *(byte *)puVar29 = (byte)*puVar29 + cVar10;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + (char)((uint)puVar29 >> 8);
    pbVar60 = param_1;
  }
  *(byte *)puVar58 = (byte)*puVar58 + (char)((uint)pbVar19 >> 8);
  *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar60;
  bVar7 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar7;
  bVar8 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar7;
  param_1 = pbVar60;
  pbVar56 = apbStack_10[0];
  if (!CARRY1(bVar8,bVar7)) goto code_r0x004036a6;
  *pbVar19 = *pbVar19 + bVar7;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar7 | pbVar19[0x400003f]);
  param_1 = (byte *)CONCAT31((int3)((uint)pbVar60 >> 8),
                             (char)pbVar60 - *(byte *)((int)puVar29 + 0x5040302));
  *(char *)((int)pbVar19 * 2) = *(char *)((int)pbVar19 * 2) - (char)((uint)pbVar60 >> 8);
  while( true ) {
code_r0x004036a6:
    param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(char)param_1 + (byte)*puVar58);
    pbVar19 = (byte *)(CONCAT31((int3)((uint)pbVar19 >> 8),(char)pbVar19 + '%') + 0x1ebd9f3);
    uStack_18 = (undefined4 *)CONCAT22(uStack_18._2_2_,in_ES);
    bVar8 = (byte)pbVar19;
    bVar64 = CARRY1(*pbVar19,bVar8);
    *pbVar19 = *pbVar19 + bVar8;
    puVar36 = uStack_18 + -1;
    *(undefined2 *)(uStack_18 + -1) = in_ES;
    cVar10 = (char)puVar29;
    if (bVar64) {
      *pbVar19 = *pbVar19 + bVar8;
      uVar62 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar9 = (byte)((uint)unaff_EBX >> 8) | pbVar56[0x47];
      pcVar16 = (char *)CONCAT22(uVar62,CONCAT11(bVar9,(char)unaff_EBX));
      *pbVar19 = *pbVar19 + bVar8;
      uVar24 = (undefined3)((uint)pbVar19 >> 8);
      bVar8 = bVar8 + 0x2a;
      *pcVar16 = *pcVar16 + cVar10;
      pbVar19 = (byte *)((int)CONCAT31(uVar24,bVar8) * 2);
      *pbVar19 = *pbVar19 ^ bVar8;
      bVar8 = bVar8 ^ *(byte *)CONCAT31(uVar24,bVar8);
      pbVar19 = (byte *)CONCAT31(uVar24,bVar8);
      bVar7 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar8;
      *pbVar19 = (*pbVar19 - bVar8) - CARRY1(bVar7,bVar8);
      *param_1 = *param_1 + cVar10;
      unaff_EBX = (byte *)CONCAT22(uVar62,CONCAT11(bVar9 + pcVar16[0x38],(char)unaff_EBX));
      *pbVar19 = *pbVar19 + bVar8;
      cVar26 = bVar8 + 2;
      if ((POPCOUNT(cVar26) & 1U) != 0) {
        pcVar1 = (code *)swi(7);
        uVar67 = (*pcVar1)();
        pbVar19 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar24,cVar26) = *(char *)CONCAT31(uVar24,cVar26) + cVar26;
      bVar8 = bVar8 + 0x71;
      pbVar19 = (byte *)CONCAT31(uVar24,bVar8);
      in_SS = *(undefined2 *)(uStack_18 + -1);
      *pbVar19 = *pbVar19 + bVar8;
      iVar14 = (int)param_1 - *puVar29;
      param_1 = (byte *)CONCAT22((short)((uint)iVar14 >> 0x10),
                                 CONCAT11((char)((uint)iVar14 >> 8) + *pbVar19,(char)iVar14));
      pbVar56 = (byte *)*uStack_18;
      bVar64 = CARRY1(*pbVar19,bVar8);
      *pbVar19 = *pbVar19 + bVar8;
      *(undefined2 *)uStack_18 = in_ES;
      *(undefined2 *)(uStack_18 + -1) = in_ES;
    }
    bVar8 = (byte)pbVar19;
    uVar24 = (undefined3)((uint)pbVar19 >> 8);
    if (bVar64) break;
    *(byte *)puVar29 = (byte)*puVar29 + (byte)param_1;
    *(byte *)((int)puVar29 + (int)pbVar56) = *(byte *)((int)puVar29 + (int)pbVar56) + bVar8;
    pcVar16 = (char *)CONCAT31(uVar24,(byte)*puVar29);
code_r0x0040369e:
    pbVar19 = (byte *)(pcVar16 + *(int *)(pcVar16 + 0x6c28));
  }
  *pbVar19 = *pbVar19 + bVar8;
  uVar25 = (uint3)((uint)param_1 >> 8);
  pbVar60 = (byte *)CONCAT31(uVar25,(byte)param_1 | *unaff_EBX);
  in_SS = *(undefined2 *)uStack_18;
  puVar36 = uStack_18 + 1;
  puVar61 = puVar58 + (uint)bVar65 * -2 + 1;
  out(*puVar58,(short)puVar29);
  unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar65 * -2 + 1);
  *pbVar19 = *pbVar19 + bVar8;
  bVar8 = bVar8 | (byte)*unaff_EDI;
  pbVar19 = (byte *)CONCAT31(uVar24,bVar8);
  *(byte *)(unaff_EDI + 0x1bc28000) = (byte)unaff_EDI[0x1bc28000] - (char)((uint)param_1 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar8);
  *(undefined2 *)uStack_18 = apbStack_10[0]._0_2_;
  cVar28 = (char)unaff_EBX;
  cVar26 = cVar28 - (byte)*puVar29;
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar26);
  in_ES = apbStack_10[0]._0_2_;
  if (cVar26 != '\0' && (char)(byte)*puVar29 <= cVar28) {
    *pbVar19 = *pbVar19 + bVar8;
    iVar14 = CONCAT31(uVar24,bVar8 + 0x2a);
    puVar58 = (uint *)((int)puVar61 + 1);
    cVar26 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + -0x7b);
    uVar67 = CONCAT44(CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(cVar26,cVar10)),iVar14);
    in_ES = *(undefined2 *)uStack_18;
    pcVar16 = (char *)(iVar14 + 0x6f);
    *pcVar16 = *pcVar16 + cVar26;
    pbVar60 = (byte *)((uint)uVar25 << 8);
    do {
      piVar17 = (int *)((ulonglong)uVar67 >> 0x20);
      pcVar16 = (char *)uVar67;
      *(char *)piVar17 = (char)*piVar17;
      if ((char)*piVar17 == '\0') {
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
_ctor:
        puVar29 = (uint *)((ulonglong)uVar67 >> 0x20);
        pbVar60 = (byte *)((uint)CONCAT21((short)((uint)pbVar60 >> 0x10),
                                          (char)((uint)pbVar60 >> 8) + *(char *)uVar67) << 8);
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        *(byte *)puVar29 = (byte)*puVar29;
        uVar24 = (undefined3)((ulonglong)uVar67 >> 8);
        bVar7 = (char)uVar67 - *(char *)uVar67;
        pbVar19 = (byte *)CONCAT31(uVar24,bVar7);
        bVar8 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar7;
        puVar61 = (uint *)((int)puVar58 + (uint)CARRY1(bVar8,bVar7) + *(int *)pbVar19);
        pbVar19 = (byte *)CONCAT31(uVar24,bVar7);
        uStack_18 = puVar36;
        break;
      }
      *pcVar16 = *pcVar16 + (char)uVar67;
      *piVar17 = (int)(pbVar56 + *piVar17);
      puVar58 = (uint *)((int)puVar58 + 1);
      uVar67 = CONCAT44(CONCAT22((short)((ulonglong)uVar67 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar67 >> 0x28) +
                                          *(char *)((int)piVar17 + -0x33),
                                          (char)((ulonglong)uVar67 >> 0x20))),pcVar16);
      in_ES = *(undefined2 *)puVar36;
      puVar36 = (undefined4 *)((int)puVar36 + 4);
      pbVar19 = pbVar60;
code_r0x0040371e:
      puVar29 = (uint *)((ulonglong)uVar67 >> 0x20);
      pbVar32 = (byte *)uVar67;
      bVar7 = (byte)((ulonglong)uVar67 >> 0x28);
      pbVar32[0x6f] = pbVar32[0x6f] + bVar7;
      pbVar60 = (byte *)((uint)pbVar19 & 0xffffff00);
      *(char *)puVar29 = (char)*puVar29;
      bVar8 = (byte)uVar67;
      if ((char)*puVar29 != '\0') {
        *pbVar32 = *pbVar32 + bVar8;
        uVar18 = *puVar29;
        *puVar29 = (uint)(pbVar56 + *puVar29);
        piVar38 = (int *)((int)puVar36 + -4);
        *(uint **)((int)puVar36 + -4) = puVar58;
        if (CARRY4(uVar18,(uint)pbVar56)) {
          *pbVar32 = *pbVar32 + bVar8;
          *(undefined2 *)((int)puVar36 + -8) = in_ES;
          puVar61 = puVar29 + 0x1d028000;
          uVar18 = *puVar61;
          *(byte *)puVar61 = (byte)*puVar61 - bVar7;
          *(uint *)pbVar32 = (*(int *)pbVar32 - (int)pbVar32) - (uint)((byte)uVar18 < bVar7);
          *(byte *)puVar29 = (char)*puVar29 + bVar8;
          *pbVar56 = *pbVar56;
          uVar67 = CONCAT44(puVar29,CONCAT31((int3)((ulonglong)uVar67 >> 8),bVar8 + 0x2a));
          puVar37 = (undefined2 *)((int)puVar36 + -0xc);
          puVar36 = (undefined4 *)((int)puVar36 + -0xc);
          *puVar37 = in_DS;
          goto _ctor;
        }
        bVar64 = false;
        pcVar16 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),*pbVar32);
        goto code_r0x004037a7;
      }
      bVar7 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar8;
      *(uint *)pbVar32 = (*(int *)pbVar32 - (int)pbVar32) - (uint)CARRY1(bVar7,bVar8);
      bVar8 = *pbVar60;
      bVar7 = (byte)((ulonglong)uVar67 >> 0x20);
      *pbVar60 = *pbVar60 + bVar7;
      if (CARRY1(bVar8,bVar7)) goto code_r0x0040375a;
    } while( true );
  }
  uVar67 = CONCAT44(puVar29,pbVar19);
  puVar58 = puVar61 + (uint)bVar65 * -2 + 1;
  out(*puVar61,(short)puVar29);
  bVar7 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar7;
  *pbVar60 = *pbVar60 + (char)unaff_EBX;
  bVar8 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar7;
  *(byte **)(unaff_EBX + -0x49) =
       (byte *)((int)puVar58 + (uint)CARRY1(bVar8,bVar7) + *(int *)(unaff_EBX + -0x49));
  puVar36 = uStack_18;
code_r0x0040375a:
  pbVar19 = (byte *)uVar67;
  *pbVar19 = *pbVar19 + (char)uVar67;
  bVar64 = CARRY1((byte)((uint)pbVar60 >> 8),*pbVar19);
  *(undefined2 *)((int)puVar36 + -4) = in_SS;
  iVar14 = CONCAT31(0x1f0a00,bVar64 + 'o') + *(int *)(unaff_EBX + (int)pbVar56) +
           (uint)(0x90 < bVar64) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar67 >> 0x20);
  pcVar20 = (char *)(CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + -0x66) | *unaff_EDI);
  bVar8 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar16 = (char *)CONCAT22(0xd0a,(ushort)bVar8 << 8);
  *pcVar20 = *pcVar20 + (char)pcVar20;
  bVar7 = (byte)((ulonglong)uVar67 >> 0x20);
  puVar30 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar67 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar67 >> 0x28) | unaff_EBX[(int)pbVar56],bVar7));
  *pcVar16 = *pcVar16 + (char)pcVar20;
  *pbVar56 = *pbVar56 - bVar8;
  *puVar30 = *puVar30;
  pbVar19 = (byte *)(((uint)pcVar20 | 8) + 0x4490f9d8);
  bVar8 = (byte)pbVar19;
  *pbVar19 = *pbVar19 + bVar8;
  uVar18 = *puVar58;
  *(uint *)((int)puVar58 + (int)pbVar19) = *(uint *)((int)puVar58 + (int)pbVar19) ^ (uint)pcVar16;
  *pbVar19 = *pbVar19 | bVar8;
  piVar38 = (int *)0x2609fffc;
  bVar64 = false;
  uRam2609fffc = in_ES;
  *pbVar19 = *pbVar19 | bVar8;
  uVar67 = CONCAT44(CONCAT31((int3)((uint)puVar30 >> 8),bVar7 | (byte)uVar18),pbVar19);
code_r0x004037a7:
  while( true ) {
    pbVar19 = (byte *)((ulonglong)uVar67 >> 0x20);
    uVar62 = (undefined2)((ulonglong)uVar67 >> 0x20);
    out(*puVar58,uVar62);
    out(puVar58[(uint)bVar65 * -2 + 1],uVar62);
    puVar29 = (uint *)((int)unaff_EDI + (int)pbVar19);
    uVar18 = *puVar29;
    uVar15 = (uint)uVar67 + *puVar29;
    *puVar29 = uVar15 + bVar64;
    iVar14 = *piVar38 + *(int *)(pcVar16 + (int)pbVar19) +
             (uint)(CARRY4(uVar18,(uint)uVar67) || CARRY4(uVar15,(uint)bVar64));
    cVar10 = (char)iVar14 + '\t';
    pbVar56 = (byte *)CONCAT31((int3)((uint)iVar14 >> 8),cVar10);
    pcVar20 = (char *)((uint)bVar65 * -8 + 0x260a0004);
    out(uRam260a0000,uVar62);
    uVar62 = (undefined2)piVar38[1];
    *pbVar56 = *pbVar56 + cVar10;
    bVar7 = (byte)((uint)pcVar16 >> 8) | *pbVar19;
    *(undefined2 *)(piVar38 + 1) = in_DS;
    bVar8 = *pbVar56;
    pbVar56 = pbVar56 + (uint)CARRY1(bVar7,*pbVar56) + *(int *)pbVar56;
    *pbVar19 = *pbVar19 + 6;
    cVar26 = (char)unaff_EBX - *pcVar20;
    pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),CONCAT11(bVar7 + bVar8 + *pbVar56,6));
    *pbVar56 = *pbVar56;
    *(undefined2 *)piVar38 = in_ES;
    uVar24 = (undefined3)((uint)pbVar56 >> 8);
    cVar10 = (char)pbVar56 - *pbVar56;
    piVar17 = (int *)CONCAT31(uVar24,cVar10);
    puVar58 = (uint *)(pcVar20 + *piVar17);
    bVar8 = cVar10 + (char)*piVar17;
    pcVar20 = (char *)CONCAT31(uVar24,bVar8);
    piVar39 = piVar38 + -1;
    piVar38[-1] = (int)pcVar16;
    *pcVar20 = *pcVar20 + bVar8;
    *pcVar20 = *pcVar20 + bVar8;
    *pcVar20 = *pcVar20 + bVar8;
    bVar64 = CARRY1(*pbVar19,bVar8);
    *pbVar19 = *pbVar19 + bVar8;
    if (bVar64) break;
    in_ES = (undefined2)piVar38[-1];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar26);
    uVar67 = CONCAT44(pbVar19,pcVar20);
  }
  *pcVar20 = *pcVar20 + bVar8;
  pbVar32 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam080a0056,cVar26));
  *pcVar20 = *pcVar20 + bVar8;
  bVar9 = bVar8 + 2;
  *pbVar32 = *pbVar32 - (char)((ulonglong)uVar67 >> 0x20);
  *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
  uVar18 = *puVar58;
  uVar27 = (undefined3)((uint)pcVar16 >> 8);
  pbVar56 = (byte *)(CONCAT31(uVar27,(byte)uVar18) | 6);
  bVar7 = 9 < (bVar8 + 0x74 & 0xf) | in_AF;
  bVar11 = bVar8 + 0x74 + bVar7 * '\x06';
  bVar11 = bVar11 + (0x90 < (bVar11 & 0xf0) | 0x8d < bVar9 | bVar7 * (0xf9 < bVar11)) * '`';
  pbVar60 = (byte *)CONCAT31(uVar24,bVar11);
  bVar8 = *pbVar60;
  *pbVar60 = *pbVar60 + bVar11;
  if (!SCARRY1(bVar8,bVar11)) {
    *(byte *)puVar58 = (byte)*puVar58 + bVar11;
    puVar58 = (uint *)((int)puVar58 + *(int *)(pbVar19 + 0x33));
    *pbVar60 = *pbVar60 | bVar11;
    *(byte *)puVar58 = (byte)*puVar58 + bVar11;
    bVar8 = bVar11 + 0x72;
    piVar38[-2] = (int)pbVar32;
    *(byte *)CONCAT31(uVar24,bVar8) = *(byte *)CONCAT31(uVar24,bVar8) | bVar8;
    *(byte *)puVar58 = (byte)*puVar58 + bVar8;
    pbVar56 = (byte *)CONCAT31(uVar27,((byte)uVar18 | 6) + (byte)*puVar58);
    pcVar16 = (char *)CONCAT31(uVar24,bVar11 - 0x11);
    piVar39 = piVar38 + -3;
    piVar38[-3] = (int)pbVar56;
    *pcVar16 = *pcVar16 + (bVar11 - 0x11);
    pbVar60 = (byte *)CONCAT31(uVar24,bVar11 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar60 = *pbVar60 + (bVar11 - 0xf);
  }
code_r0x00403825:
  pbVar57 = (byte *)0x80a0000;
  uVar24 = (undefined3)((uint)pbVar60 >> 8);
  cVar10 = (char)pbVar60 + '\x7f';
  pcVar16 = (char *)CONCAT31(uVar24,cVar10);
  *(byte **)((int)piVar39 + -4) = pbVar32;
  *pcVar16 = *pcVar16 + cVar10;
  iVar14 = CONCAT31(uVar24,(char)pbVar60 + -0x7f) + 0x547d;
  cVar26 = (char)iVar14;
  uVar24 = (undefined3)((uint)iVar14 >> 8);
  cVar10 = cVar26 + '*';
  pcVar16 = (char *)CONCAT31(uVar24,cVar10);
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),(byte)pbVar19 | (byte)*puVar58);
  cVar28 = (char)pbVar32 - (byte)*puVar58;
  uVar63 = (undefined2)((uint)pbVar32 >> 0x10);
  cVar33 = (char)((uint)pbVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar28) + 0x57);
  *pcVar16 = *pcVar16 + cVar10;
  bVar8 = cVar26 + 0x54U & *pbVar19;
  iVar14 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
  pcVar16 = (char *)CONCAT31(uVar24,bVar8 + 0x2a);
  *(undefined2 *)((int)piVar39 + -8) = in_DS;
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar33,cVar28)) + 0x58);
  *pcVar16 = *pcVar16 + bVar8 + 0x2a;
  bVar9 = bVar8 + 0x54 & *pbVar19;
  iVar3 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
  pcVar16 = (char *)CONCAT31(uVar24,bVar9 + 0x2a);
  pbVar60 = *(byte **)((int)piVar39 + -8);
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar33,cVar28)) + 0x55);
  *pcVar16 = *pcVar16 + bVar9 + 0x2a;
  pcVar16 = (char *)CONCAT31(uVar24,bVar9 + 0x57);
  pbVar19 = pbVar19 + *(int *)pbVar60;
  *(undefined4 *)((int)piVar39 + -8) = 0x2a;
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar33,cVar28)) + 0x55);
  *pcVar16 = *pcVar16 + bVar9 + 0x57;
  cVar10 = bVar9 - 0x3a;
  pcVar16 = (char *)CONCAT31(uVar24,cVar10);
  *(undefined2 *)((int)piVar39 + -0xc) = uVar62;
  *pcVar16 = *pcVar16 + cVar10;
  bVar8 = *pbVar19;
  cVar26 = (char)pbVar56;
  *(undefined2 *)((int)piVar39 + -0x10) = in_DS;
  pbVar32 = (byte *)CONCAT22(uVar63,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar33,
                                                  cVar28)) + 0x59),cVar28));
  *pcVar16 = *pcVar16 + cVar10;
  bVar12 = bVar9 - 0x10 & *pbVar19;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar3 + iVar14);
  *(char *)CONCAT31(uVar24,bVar12) = *(char *)CONCAT31(uVar24,bVar12) + bVar12;
  bVar12 = bVar12 + 0x2a;
  pbVar22 = (byte *)CONCAT31(uVar24,bVar12);
  puVar36 = (undefined4 *)((int)piVar39 + -0x14);
  *(undefined2 *)((int)piVar39 + -0x14) = in_DS;
  bVar9 = *(byte *)((int)unaff_EDI + 0x17);
  *pbVar22 = *pbVar22 + bVar12;
  bVar11 = *pbVar19;
  puVar41 = (undefined4 *)((int)piVar39 + -0x18);
  *(undefined2 *)((int)piVar39 + -0x18) = in_DS;
  bVar13 = *(byte *)((int)unaff_EDI + 0x1a);
  *pbVar22 = *pbVar22 + bVar12;
  pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar56 >> 8) | bVar8) + bVar9 | bVar11) +
                                      bVar13 | *pbVar19,cVar26));
  *pbVar32 = *pbVar32 + cVar28;
  *(byte *)((int)pbVar22 * 2) = *(byte *)((int)pbVar22 * 2) ^ bVar12;
  bVar8 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar12;
  bVar9 = *pbVar22;
  *pbVar56 = *pbVar56 + (char)pbVar19;
  bVar8 = ((bVar12 - bVar9) - CARRY1(bVar8,bVar12)) + *pbVar19;
  pbVar22 = (byte *)CONCAT31(uVar24,bVar8);
  if ((POPCOUNT(bVar8) & 1U) != 0) {
    pbVar19 = *(byte **)((int)piVar39 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar22 = *pbVar22 + bVar8;
  cVar10 = (bVar8 + 0x6f) - (0x90 < bVar8);
  pbVar21 = (byte *)CONCAT31(uVar24,cVar10);
  bVar8 = *pbVar19;
  *pbVar19 = *pbVar19 + cVar26;
  if (SCARRY1(bVar8,cVar26) == (char)*pbVar19 < '\0') {
    cRam33100000 = cRam33100000 - cVar10;
    cVar10 = cVar10 + *pbVar19;
    pbVar22 = (byte *)CONCAT31(uVar24,cVar10);
    puVar36 = (undefined4 *)((int)piVar39 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar21 = *pbVar21 + (char)pbVar21;
code_r0x004038b0:
    uVar24 = (undefined3)((uint)pbVar21 >> 8);
    cVar10 = (char)pbVar21 + '\x02';
    pbVar22 = (byte *)CONCAT31(uVar24,cVar10);
    puVar36 = puVar41;
    if ((POPCOUNT(cVar10) & 1U) != 0) {
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar60);
      cVar10 = (char)pbVar22 + *pbVar19;
      pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar10);
code_r0x0040390c:
      cVar26 = (char)pbVar22;
      if ((POPCOUNT(cVar10) & 1U) == 0) goto code_r0x0040390e;
      *pbVar60 = *pbVar60 + cVar26;
      goto code_r0x00403962;
    }
    *pbVar22 = *pbVar22 + cVar10;
    puVar36 = (undefined4 *)((int)puVar41 + -4);
    piVar39 = (int *)((int)puVar41 + -4);
    *(byte **)((int)puVar41 + -4) = pbVar56;
    cVar10 = (char)pbVar21 + '.' + *pbVar19;
    pbVar22 = (byte *)CONCAT31(uVar24,cVar10);
    if ((POPCOUNT(cVar10) & 1U) != 0) {
      pbVar21 = pbVar19 + (int)pbVar22;
      *pbVar21 = *pbVar21 + cVar10;
      bVar8 = *pbVar21;
      goto code_r0x00403912;
    }
    *pbVar22 = *pbVar22 + cVar10;
    bVar8 = cVar10 + 2;
    pbVar22 = (byte *)CONCAT31(uVar24,bVar8);
    puVar36 = (undefined4 *)((int)puVar41 + -4);
    if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403916;
    *pbVar22 = *pbVar22 + bVar8;
    cVar26 = cVar10 + 'q';
    piVar17 = (int *)CONCAT31(uVar24,cVar26);
    *piVar17 = (*piVar17 - (int)piVar17) - (uint)(0x90 < bVar8);
    bVar8 = *pbVar32;
    bVar9 = (byte)((uint)pbVar56 >> 8);
    *pbVar32 = *pbVar32 + bVar9;
    if (!CARRY1(bVar8,bVar9)) {
      out(*(undefined4 *)pbVar60,(short)pbVar19);
      bVar8 = (cVar26 - (char)*piVar17) - CARRY1(bVar8,bVar9);
      *pbVar19 = *pbVar19 + (char)pbVar56;
      cVar10 = bVar8 - *(byte *)CONCAT31(uVar24,bVar8);
      puVar58 = (uint *)(pbVar60 +
                        ((((uint)bVar65 * -8 + 4) - *(int *)CONCAT31(uVar24,cVar10)) -
                        (uint)(bVar8 < *(byte *)CONCAT31(uVar24,bVar8))));
      pbVar60 = (byte *)CONCAT31(uVar24,cVar10);
      goto code_r0x00403825;
    }
    *(char *)piVar17 = (char)*piVar17 + cVar26;
    uVar63 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar8 = (byte)((uint)pbVar32 >> 8) | bRam080a0056;
    *(char *)piVar17 = (char)*piVar17 + cVar26;
    pcVar16 = (char *)CONCAT31(uVar24,cVar10 + 's');
    pbVar32 = (byte *)CONCAT22(uVar63,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar63,CONCAT11(bVar8,(
                                                  char)pbVar32)) + 0x56),(char)pbVar32));
    *pcVar16 = *pcVar16 + cVar10 + 's';
    bVar8 = cVar10 - 0xf;
    pbVar19 = *(byte **)((int)puVar41 + -4);
    *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
    bVar9 = cVar10 + 0x1e;
    pbVar21 = (byte *)CONCAT31(uVar24,bVar9);
    *(byte **)(pbVar60 + (int)unaff_EDI * 8) =
         pbVar19 + (uint)(0xd2 < bVar8) + *(int *)(pbVar60 + (int)unaff_EDI * 8);
    puVar36 = (undefined4 *)((int)puVar41 + -4);
    puVar43 = (undefined4 *)((int)puVar41 + -4);
    *(undefined2 *)((int)puVar41 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar21;
    bVar8 = *pbVar60;
    *pbVar60 = *pbVar60 + bVar9;
    if (CARRY1(bVar8,bVar9)) {
      *pbVar21 = *pbVar21 + bVar9;
      pbVar22 = (byte *)CONCAT31(uVar24,bVar9 | pbVar21[0x400005a]);
      if ('\0' < (char)(bVar9 | pbVar21[0x400005a])) {
code_r0x004038f6:
        bVar8 = (byte)pbVar22;
        *pbVar22 = *pbVar22 + bVar8;
        uVar24 = (undefined3)((uint)pbVar22 >> 8);
        cVar10 = ((bVar8 + 0x28) - *(char *)CONCAT31(uVar24,bVar8 + 0x28)) - (0xd7 < bVar8);
        pbVar22 = (byte *)CONCAT31(uVar24,cVar10);
        bVar8 = *pbVar32;
        bVar9 = (byte)((uint)pbVar56 >> 8);
        *pbVar32 = *pbVar32 + bVar9;
        if (CARRY1(bVar8,bVar9)) {
          *pbVar22 = *pbVar22 + cVar10;
          pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                     CONCAT11(bVar9 | *pbVar22,(char)pbVar56));
          *pbVar60 = *pbVar60 + cVar10;
          goto code_r0x00403908;
        }
        pbVar21 = pbVar22 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar9 = (char)pbVar22 + 0x6f;
      bVar8 = *(byte *)CONCAT31(uVar24,bVar9);
      *pbVar19 = *pbVar19 + (char)pbVar56;
      pbVar22 = (byte *)CONCAT31(uVar24,(bVar9 & bVar8) + *pbVar60);
      *pbVar56 = *pbVar56 - (char)((uint)pbVar19 >> 8);
      puVar48 = puVar43;
      goto code_r0x0040395a;
    }
    puVar40 = (undefined4 *)((int)puVar41 + -8);
    puVar41 = (undefined4 *)((int)puVar41 + -8);
    *puVar40 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar17 = (char)*piVar17 + bVar8;
  puVar58 = puVar61;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar22 = *pbVar22 + cVar26;
  bVar8 = cVar26 + 2;
  pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar8);
code_r0x00403912:
  bVar64 = (POPCOUNT(bVar8) & 1U) == 0;
  puVar48 = puVar36;
  if (!bVar64) goto code_r0x00403967;
  *pbVar22 = *pbVar22 + (char)pbVar22;
code_r0x00403916:
  bVar13 = (char)pbVar22 + 0x6f;
  pbVar21 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar22 >> 8),bVar13);
  bVar11 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar13;
  bVar9 = *pbVar21;
  bVar8 = *pbVar21;
  puVar48 = (undefined4 *)((int)puVar36 + -4);
  *(undefined2 *)((int)puVar36 + -4) = in_ES;
  if (bVar8 == 0 || SCARRY1(bVar11,bVar13) != (char)bVar9 < '\0') goto code_r0x00403979;
  *pbVar21 = *pbVar21 + bVar13;
  pbVar21 = (byte *)CONCAT31((int3)(char)((uint)pbVar22 >> 8),(char)pbVar22 + -100);
  *(byte **)(pbVar60 + (int)unaff_EDI * 8) =
       pbVar19 + (uint)(0xd2 < bVar13) + *(int *)(pbVar60 + (int)unaff_EDI * 8);
  puVar42 = (undefined2 *)((int)puVar36 + -8);
  puVar36 = (undefined4 *)((int)puVar36 + -8);
  *puVar42 = in_ES;
code_r0x00403926:
  puVar41 = puVar36 + 1;
  puVar48 = puVar36 + 1;
  puVar43 = puVar36 + 1;
  *(undefined4 *)pbVar21 = *puVar36;
  bVar8 = *pbVar60;
  bVar9 = (byte)pbVar21;
  *pbVar60 = *pbVar60 + bVar9;
  if (CARRY1(bVar8,bVar9)) {
    *pbVar21 = *pbVar21 + bVar9;
    uVar24 = (undefined3)((uint)pbVar21 >> 8);
    bVar9 = bVar9 | pbVar21[0x400005b];
    pbVar22 = (byte *)CONCAT31(uVar24,bVar9);
    pbVar21 = pbVar60;
    if ((char)bVar9 < '\x01') goto code_r0x00403991;
    *pbVar22 = *pbVar22 + bVar9;
    cVar10 = bVar9 + 0x28;
    pbVar22 = (byte *)CONCAT31(uVar24,cVar10);
    *(byte **)pbVar22 = pbVar22 + (uint)(0xd7 < bVar9) + *(int *)pbVar22;
    bVar8 = *pbVar32;
    bVar9 = (byte)((uint)pbVar56 >> 8);
    *pbVar32 = *pbVar32 + bVar9;
    if (CARRY1(bVar8,bVar9)) {
      *pbVar22 = *pbVar22 + cVar10;
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11(bVar9 | *pbVar22,(char)pbVar56));
      *pbVar60 = *pbVar60 + cVar10;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar22 = *pbVar22 + cVar10;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar36 = in_ES;
code_r0x00403962:
    puVar48 = (undefined4 *)((int)puVar36 + -4);
    *(undefined2 *)((int)puVar36 + -4) = uVar62;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  puVar44 = (undefined2 *)((int)puVar48 + -4);
  puVar48 = (undefined4 *)((int)puVar48 + -4);
  *puVar44 = in_ES;
  pbVar19[0x16060000] = pbVar19[0x16060000] - (char)pbVar56;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar60);
  cVar10 = (char)pbVar22 + '\x02';
  pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar10);
  bVar64 = (POPCOUNT(cVar10) & 1U) == 0;
code_r0x00403967:
  if (!bVar64) goto code_r0x004039be;
  *pbVar22 = *pbVar22 + (char)pbVar22;
  uVar24 = (undefined3)((uint)pbVar22 >> 8);
  bVar8 = (char)pbVar22 + 0x6f;
  bVar8 = bVar8 & *(byte *)CONCAT31(uVar24,bVar8);
  pbVar21 = (byte *)CONCAT31(uVar24,bVar8);
  *pbVar19 = *pbVar19 + (char)pbVar56;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),(char)pbVar19 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar8;
code_r0x00403979:
  do {
    bVar8 = (char)pbVar21 - (byte)*unaff_EDI;
    bVar64 = bVar8 < *pbVar56;
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar8 - *pbVar56);
    do {
      cVar10 = (char)pbVar22;
      *pbVar22 = *pbVar22 + cVar10 + bVar64;
      *pbVar22 = *pbVar22 + cVar10;
      *pbVar56 = *pbVar56 + (char)pbVar19;
      pbVar56[0x101c00aa] = pbVar56[0x101c00aa] + (char)pbVar32;
      *pbVar22 = *pbVar22 + cVar10;
      *(byte **)pbVar60 = pbVar32 + *(int *)pbVar60;
      bVar8 = (byte)((uint)pbVar56 >> 8);
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11(bVar8 + *pbVar22,(char)pbVar56));
      pbVar22 = pbVar22 + (uint)CARRY1(bVar8,*pbVar22) + *(int *)pbVar22;
      pbVar21 = pbVar60;
code_r0x00403991:
      cVar10 = (char)pbVar56;
      *pbVar19 = *pbVar19 + cVar10;
      cVar26 = (char)pbVar32 - pbVar21[2];
      pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar26);
      pbVar60 = pbVar21;
      if ((POPCOUNT(cVar26) & 1U) != 0) goto code_r0x0040395a;
      *pbVar22 = *pbVar22 + (byte)pbVar22;
      uVar25 = (uint3)((uint)pbVar22 >> 8);
      bVar8 = (byte)pbVar22 | *pbVar32;
      piVar17 = (int *)CONCAT31(uVar25,bVar8);
      bVar9 = (byte)((uint)pbVar56 >> 8);
      bVar11 = (byte)pbVar19;
      if (bVar8 == 0) {
        *(char *)piVar17 = (char)*piVar17;
        puVar48 = (undefined4 *)((int)puVar48 + -*(int *)(pbVar57 + 0x1b000007));
        pbVar60 = pbVar21 + (uint)bVar65 * -8 + 4;
        out(*(undefined4 *)pbVar21,(short)pbVar19);
        pbVar22 = (byte *)((uint)uVar25 << 8);
        *pbVar19 = *pbVar19 + cVar10;
        pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar11 - *pbVar32);
        *pbVar32 = *pbVar32;
        *pbVar19 = *pbVar19 + bVar9;
        *pbVar22 = *pbVar22;
        *pbVar32 = *pbVar32 + cVar26;
        *pbVar22 = *pbVar22;
        *(byte **)(pbVar32 + -0x3d) = pbVar60 + *(int *)(pbVar32 + -0x3d);
        break;
      }
      pbVar57 = pbVar57 + -unaff_EDI[9];
      *(byte *)piVar17 = (char)*piVar17 + bVar8;
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),CONCAT11(bVar9 | *pbVar19,cVar10));
      pbVar60 = pbVar21 + *piVar17;
      pcVar16 = (char *)((int)piVar17 + *piVar17);
      bVar9 = (char)pcVar16 - *pcVar16;
      pbVar22 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar9);
      bVar8 = *pbVar22;
      *pbVar22 = *pbVar22 + bVar9;
      pbVar22 = pbVar22 + (-(uint)CARRY1(bVar8,bVar9) - *(int *)pbVar22);
      bVar64 = CARRY1(*pbVar56,bVar11);
      *pbVar56 = *pbVar56 + bVar11;
    } while (!bVar64);
    *pbVar22 = *pbVar22 + (char)pbVar22;
    pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar56 >> 8),(byte)pbVar56 | *pbVar19);
code_r0x004039be:
    puVar36 = (undefined4 *)((int)puVar48 + -4);
    puVar45 = (undefined1 *)((int)puVar48 + -4);
    *(undefined2 *)((int)puVar48 + -4) = in_ES;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar57 + -0x3c));
    *pbVar22 = *pbVar22 + (byte)pbVar22;
    uVar24 = (undefined3)((uint)pbVar22 >> 8);
    bVar8 = (byte)pbVar22 | *pbVar19;
    pcVar16 = (char *)CONCAT31(uVar24,bVar8);
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      cVar10 = *pcVar16;
      *pcVar16 = *pcVar16 + bVar8;
      cVar26 = *pcVar16;
      puVar30 = (undefined1 *)((int)puVar48 + -4);
      if (!SCARRY1(cVar10,bVar8)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar36 = (undefined4 *)puVar30;
      cVar10 = (char)pcVar16;
      *pcVar16 = *pcVar16 + cVar10;
      uVar24 = (undefined3)((uint)pcVar16 >> 8);
      bVar8 = cVar10 + 2;
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        pcVar16 = (char *)CONCAT31(uVar24,bVar8 + *pbVar19);
        pbVar22 = pbVar60;
        if ((POPCOUNT(bVar8 + *pbVar19) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar60 + (int)unaff_EDI * 8) =
             pbVar19 + (uint)(0xd2 < (byte)pcVar16) + *(int *)(pbVar60 + (int)unaff_EDI * 8);
        puVar47 = (undefined2 *)((int)puVar36 + -4);
        puVar36 = (undefined4 *)((int)puVar36 + -4);
        *puVar47 = in_ES;
        pbVar21 = pbVar57;
        pbVar23 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)pcVar16 + 0x2d);
code_r0x00403ad8:
        pbVar57 = pbVar23;
        bVar8 = *pbVar21;
        bVar9 = (byte)pbVar21;
        *pbVar21 = *pbVar21 + bVar9;
        puVar48 = (undefined4 *)((int)puVar36 + -4);
        *(undefined2 *)((int)puVar36 + -4) = in_ES;
        puVar30 = (undefined1 *)((int)puVar36 + -4);
        if (CARRY1(bVar8,bVar9)) {
          *pbVar21 = *pbVar21 + bVar9;
          bVar9 = bVar9 | pbVar21[0x400005d];
          pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar9);
          pbVar22 = pbVar60;
          if ((char)bVar9 < '\x01') {
            *pbVar21 = *pbVar21 + bVar9;
            pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar56 >> 8) | *pbVar19,(char)pbVar56)
                                      );
            pbVar22 = *(byte **)((int)puVar36 + -4);
            pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                       CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[-0x39],
                                                (char)pbVar32));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar21 = *pbVar21 + (char)pbVar21;
          cVar10 = (char)pbVar21 + '(';
          pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar10);
          *(byte **)pbVar21 = pbVar21 + *(int *)pbVar21;
          bVar8 = *pbVar32;
          bVar9 = (byte)((uint)pbVar56 >> 8);
          *pbVar32 = *pbVar32 + bVar9;
          pbVar60 = pbVar22;
          if (!CARRY1(bVar8,bVar9)) {
            puVar36 = (undefined4 *)((int)puVar48 + -4);
            *(undefined2 *)((int)puVar48 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar21 = *pbVar21 + cVar10;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
      piVar17 = (int *)CONCAT31(uVar24,cVar10 + '*');
      *piVar17 = (*piVar17 - (int)piVar17) - (uint)(0xd7 < bVar8);
      bVar8 = *pbVar19;
      bVar13 = (byte)pbVar56;
      *pbVar19 = *pbVar19 + bVar13;
      out(*(undefined4 *)pbVar60,(short)pbVar19);
      bVar11 = ((cVar10 + '*') - (char)*piVar17) - CARRY1(bVar8,bVar13);
      pbVar22 = (byte *)CONCAT31(uVar24,bVar11);
      *pbVar19 = *pbVar19 + bVar13;
      uVar63 = (undefined2)((uint)pbVar32 >> 0x10);
      uVar31 = SUB41(pbVar32,0);
      cVar10 = (char)((uint)pbVar32 >> 8) - pbVar60[(uint)bVar65 * -8 + 0x1f];
      pbVar32 = (byte *)CONCAT22(uVar63,CONCAT11(cVar10,uVar31));
      *pbVar22 = *pbVar22 + bVar11;
      bVar9 = *pbVar19;
      bVar8 = *pbVar22;
      *pbVar22 = *pbVar22 + bVar11;
      pbVar60 = pbVar60 + ((((uint)bVar65 * -8 + 4) - *(int *)pbVar22) - (uint)CARRY1(bVar8,bVar11))
      ;
      pbVar22 = (byte *)CONCAT31(uVar24,bVar11);
      pbVar56 = (byte *)(CONCAT22((short)((uint)pbVar56 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar56 >> 8) | bVar9,bVar13)) + -1);
      bVar8 = *pbVar22;
      *pbVar22 = *pbVar22 + bVar11;
      bVar8 = (bVar11 - *pbVar22) - CARRY1(bVar8,bVar11);
      *pbVar56 = *pbVar56 + (char)pbVar19;
      bVar64 = CARRY1(bVar8,*pbVar19);
      bVar8 = bVar8 + *pbVar19;
      pbVar22 = (byte *)CONCAT31(uVar24,bVar8);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *pbVar22 = *pbVar22 + bVar8;
        cVar26 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pbVar21 = (byte *)CONCAT31(uVar24,cVar26);
        bVar8 = *pbVar19;
        *pbVar19 = *pbVar19 + (char)pbVar56;
        if (SCARRY1(bVar8,(char)pbVar56) == (char)*pbVar19 < '\0') {
code_r0x00403aaf:
          cVar10 = (char)pbVar21 + '(';
          pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar10);
          *(byte **)pbVar21 = pbVar21 + *(int *)pbVar21;
          bVar8 = *pbVar32;
          bVar9 = (byte)((uint)pbVar56 >> 8);
          *pbVar32 = *pbVar32 + bVar9;
          pbVar23 = pbVar57;
          if (!CARRY1(bVar8,bVar9)) goto code_r0x00403ad8;
          *pbVar21 = *pbVar21 + cVar10;
          pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                     CONCAT11(bVar9 | *pbVar32,(char)pbVar56));
          if ((POPCOUNT(*pbVar19 - cVar10) & 1U) != 0) {
            *pbVar60 = *pbVar60 + cVar10;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar21 = *pbVar21 + cVar26;
          pcVar16 = (char *)CONCAT31(uVar24,cVar26 + '\x02');
          bVar9 = cVar10 + pbVar32[0x52];
          pbVar32 = (byte *)CONCAT22(uVar63,CONCAT11(bVar9,uVar31));
          *pcVar16 = *pcVar16 + cVar26 + '\x02';
          bVar8 = cVar26 + 4;
          pbVar21 = (byte *)CONCAT31(uVar24,bVar8);
          if ((POPCOUNT(bVar8) & 1U) == 0) {
            *pbVar21 = *pbVar21 + bVar8;
            cVar10 = (cVar26 + 's') - (0x90 < bVar8);
            pcVar16 = (char *)CONCAT31(uVar24,cVar10);
            bVar8 = (byte)((uint)pbVar56 >> 8);
            bVar64 = CARRY1(*pbVar32,bVar8);
            *pbVar32 = *pbVar32 + bVar8;
            pbVar22 = pbVar60;
            if (bVar64) {
              *pcVar16 = *pcVar16 + cVar10;
              pbVar32 = (byte *)CONCAT22(uVar63,CONCAT11(bVar9 | pbVar57[0x5c],uVar31));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar21);
          pbVar32 = (byte *)CONCAT22(uVar63,CONCAT11(bVar9 + pbVar32[0x52],uVar31));
        }
        *pbVar21 = *pbVar21 + (char)pbVar21;
        cVar10 = (char)pbVar21 + '\x02';
        pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar10);
        bVar64 = (POPCOUNT(cVar10) & 1U) == 0;
        if (!bVar64) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar8 = (byte)pbVar22;
        *pbVar22 = *pbVar22 + bVar8;
        cVar10 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pcVar16 = (char *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar10);
        bVar8 = *pbVar32;
        cVar26 = (char)((uint)pbVar56 >> 8);
        *pbVar32 = *pbVar32 + cVar26;
        if (*pbVar32 == 0 || SCARRY1(bVar8,cVar26) != (char)*pbVar32 < '\0') goto code_r0x00403b2c;
        *pcVar16 = *pcVar16 + cVar10;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar64) {
        pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                   CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x53],(char)pbVar32
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar22 = *pbVar22 + (byte)pbVar22;
      bVar8 = (byte)pbVar22 | pbVar22[0x400005e];
      pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar8);
      if ('\0' < (char)bVar8) {
        *pbVar21 = *pbVar21 + bVar8;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar16 = *pcVar16 + bVar8;
    *pbVar60 = *pbVar60 + 1;
    uVar2 = *(undefined6 *)CONCAT31(uVar24,bVar8 + 6);
    pbVar21 = (byte *)uVar2;
    bVar8 = *pbVar19;
    bVar9 = (byte)pbVar56;
    *pbVar19 = *pbVar19 + bVar9;
    if (CARRY1(bVar8,bVar9)) {
      *pbVar21 = *pbVar21 + (char)uVar2;
      bVar11 = (byte)((uint)pbVar56 >> 8) | *pbVar21;
      uVar63 = CONCAT11(bVar11,bVar9);
      pbVar21 = pbVar21 + -*(int *)pbVar21;
      bVar8 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar11;
      if (CARRY1(bVar8,bVar11)) {
        cVar26 = (char)pbVar21;
        *pbVar21 = *pbVar21 + cVar26;
        bVar8 = *pbVar19;
        pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                   CONCAT11((char)((uint)pbVar19 >> 8) - pbVar32[-0x3a],
                                            (char)pbVar19));
        *pbVar21 = *pbVar21 + cVar26;
        uVar35 = (undefined2)((uint)pbVar32 >> 0x10);
        bVar34 = (byte)((uint)pbVar32 >> 8) | pbVar19[0x32];
        pcVar16 = (char *)CONCAT22(uVar35,CONCAT11(bVar34,(char)pbVar32));
        cVar10 = *pcVar16;
        puVar45 = (undefined1 *)((int)puVar48 + -8);
        *(undefined2 *)((int)puVar48 + -8) = in_CS;
        cVar10 = cVar26 + cVar10 + '-';
        pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar10);
        *pbVar21 = *pbVar21;
        *(undefined2 *)((int)puVar48 + -0xc) = in_ES;
        bVar13 = *pbVar19;
        uVar62 = *(undefined2 *)((int)puVar48 + -0xc);
        cVar26 = (char)pbVar32 - *pbVar60;
        bVar12 = *(byte *)((int)unaff_EDI + 0x17);
        *pbVar21 = *pbVar21 + cVar10;
        uVar63 = CONCAT11((bVar11 | bVar8) + bVar12 | *pbVar19,bVar9 - bVar13);
        pbVar32 = (byte *)CONCAT22(uVar35,CONCAT11(bVar34 + *(char *)(CONCAT31((int3)((uint)pcVar16
                                                                                     >> 8),cVar26) +
                                                                     0x4e),cVar26));
        *pbVar21 = *pbVar21 + cVar10;
      }
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),uVar63);
      bVar8 = (byte)pbVar21;
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      pcVar16 = (char *)CONCAT31(uVar24,bVar8 + 0x28);
      *pcVar16 = (*pcVar16 - (bVar8 + 0x28)) - (0xd7 < bVar8);
      *pbVar19 = *pbVar19 + (char)uVar63;
      bVar9 = bVar8 + 0x1b;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x4f],(char)pbVar32))
      ;
      *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
      pcVar20 = (char *)CONCAT31(uVar24,bVar8 + 0x43);
      *pcVar20 = (*pcVar20 - (bVar8 + 0x43)) - (0xd7 < bVar9);
      *pbVar19 = *pbVar19 + (char)uVar63;
      pcVar16 = pcVar20 + -0x6b721c;
      pcVar20 = pcVar20 + -0x6b721a;
      *pcVar20 = *pcVar20 + (char)((uint)pbVar19 >> 8);
      cVar26 = *pcVar20;
      puVar36 = (undefined4 *)puVar45;
code_r0x00403a22:
      puVar30 = (undefined1 *)puVar36;
      if ((POPCOUNT(cVar26) & 1U) == 0) goto code_r0x00403a24;
      bVar8 = *pbVar19;
      *pbVar19 = *pbVar19 + (char)pbVar56;
      if (SCARRY1(bVar8,(char)pbVar56) == (char)*pbVar19 < '\0') {
        pbVar21 = pbVar57;
        pbVar23 = (byte *)(pcVar16 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar16 = *pcVar16 + (char)pcVar16;
      pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x02');
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x54],(char)pbVar32))
      ;
      pbVar22 = pbVar60;
code_r0x00403a7d:
      cVar10 = (char)pcVar16;
      *pcVar16 = *pcVar16 + cVar10;
      uVar24 = (undefined3)((uint)pcVar16 >> 8);
      cVar26 = cVar10 + '-';
      pbVar23 = (byte *)CONCAT31(uVar24,cVar26);
      pbVar21 = pbVar57;
      pbVar60 = pbVar22;
      if ((POPCOUNT(cVar26 - *pbVar19) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar23 = *pbVar23 + cVar26;
      bVar8 = cVar10 + 0x2f;
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        bVar8 = *pbVar19;
        *pbVar19 = *pbVar19 + (byte)pbVar56;
        *pbVar57 = *pbVar57 - CARRY1(bVar8,(byte)pbVar56);
        pbVar21 = (byte *)CONCAT31(uVar24,cVar10 + -0x53);
        pbVar57 = (byte *)*puVar36;
        puVar48 = puVar36 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
      bVar64 = 0x90 < bVar8;
      pcVar16 = (char *)CONCAT31(uVar24,cVar10 + -0x62);
code_r0x00403a8f:
      uVar24 = (undefined3)((uint)pcVar16 >> 8);
      bVar9 = (char)pcVar16 - bVar64;
      pbVar21 = (byte *)CONCAT31(uVar24,bVar9);
      bVar8 = *pbVar32;
      cVar10 = (char)((uint)pbVar56 >> 8);
      *pbVar32 = *pbVar32 + cVar10;
      puVar48 = puVar36;
      pbVar60 = pbVar22;
      if (*pbVar32 != 0 && SCARRY1(bVar8,cVar10) == (char)*pbVar32 < '\0') {
        *pbVar21 = *pbVar21 + bVar9;
        pbVar60 = (byte *)CONCAT31(uVar24,bVar9 + 0x2d);
        *(byte **)(pbVar22 + (int)unaff_EDI * 8) =
             pbVar19 + (uint)(0xd2 < bVar9) + *(int *)(pbVar22 + (int)unaff_EDI * 8);
        *(undefined2 *)((int)puVar36 + -4) = in_ES;
        bVar64 = CARRY1(*pbVar22,(byte)pbVar22);
        *pbVar22 = *pbVar22 + (byte)pbVar22;
        puVar46 = (undefined2 *)((int)puVar36 + -8);
        puVar36 = (undefined4 *)((int)puVar36 + -8);
        *puVar46 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar56 >> 8) | *pbVar21,(char)pbVar56));
      *pbVar60 = *pbVar60 + (char)pbVar21;
      puVar30 = (undefined1 *)puVar48;
code_r0x00403afc:
      puVar36 = (undefined4 *)puVar30;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar21 = *pbVar21 + (char)pbVar21;
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      bVar9 = (char)pbVar21 + 0x6f;
      bVar8 = *(byte *)CONCAT31(uVar24,bVar9);
      *pbVar19 = *pbVar19 + (char)pbVar56;
      pbVar21 = (byte *)CONCAT31(uVar24,(bVar9 & bVar8) + *pbVar60);
      *pbVar56 = *pbVar56 - (char)((uint)pbVar19 >> 8);
      break;
    }
    uVar62 = *(undefined2 *)((int)puVar48 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar21 = *pbVar21 + (char)pbVar21;
  puVar49 = (undefined2 *)((int)puVar36 + -4);
  puVar36 = (undefined4 *)((int)puVar36 + -4);
  *puVar49 = in_ES;
  pbVar19[0x16060000] = pbVar19[0x16060000] - (char)pbVar56;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar60);
  cVar10 = (char)pbVar21 + '\x02';
  pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar10);
  bVar64 = (POPCOUNT(cVar10) & 1U) == 0;
code_r0x00403b18:
  bVar8 = (byte)pbVar22;
  uVar24 = (undefined3)((uint)pbVar22 >> 8);
  if (!bVar64) {
    *pbVar19 = *pbVar19 + (char)pbVar56;
    pbVar21 = (byte *)CONCAT31(uVar24,bVar8 | *pbVar60);
code_r0x00403b73:
    pbVar22 = (byte *)((int)unaff_EDI + *(int *)(pbVar57 + -0x37));
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    uVar24 = (undefined3)((uint)pbVar21 >> 8);
    bVar8 = (byte)pbVar21 | *pbVar19;
    pcVar16 = (char *)CONCAT31(uVar24,bVar8);
    uVar67 = CONCAT44(pbVar19,pcVar16);
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *pcVar16 = *pcVar16 + bVar8;
      *pbVar60 = *pbVar60 + 1;
      return (byte *)CONCAT31(uVar24,bVar8 + 6);
    }
    bVar8 = *pbVar60;
    *pbVar60 = *pbVar60 + 1;
    pcVar1 = (code *)swi(4);
    if (SCARRY1(bVar8,'\x01')) {
      uVar67 = (*pcVar1)();
      pbVar56 = extraout_ECX_00;
    }
    pbVar19 = (byte *)uVar67;
    *pbVar19 = *pbVar19 + (char)uVar67;
    cVar26 = (char)((ulonglong)uVar67 >> 0x20);
    puVar29 = (uint *)CONCAT22((short)((ulonglong)uVar67 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar67 >> 0x28) | pbVar32[0x2f],cVar26));
    *pbVar19 = *pbVar19 + (char)uVar67;
    cVar10 = (char)pbVar56;
    bVar11 = (byte)((uint)pbVar56 >> 8) | *pbVar19;
    pbVar19 = pbVar19 + *(int *)pbVar19;
    bVar8 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar11;
    bVar9 = (byte)pbVar19;
    if (CARRY1(bVar8,bVar11)) {
      *pbVar19 = *pbVar19 + bVar9;
      bVar11 = bVar11 | (byte)*puVar29;
      *pbVar32 = *pbVar32 - cVar26;
      *pbVar19 = *pbVar19 + bVar9;
      uVar24 = (undefined3)((uint)pbVar19 >> 8);
      bVar9 = bVar9 | (byte)*puVar29;
      puVar58 = (uint *)CONCAT31(uVar24,bVar9);
      bVar64 = CARRY4((uint)pbVar57,*puVar58);
      bVar66 = SCARRY4((int)pbVar57,*puVar58);
      pbVar57 = pbVar57 + *puVar58;
      *(uint *)((int)puVar36 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar66 * 0x800 | (uint)bVar65 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar57 < 0) * 0x80 |
           (uint)(pbVar57 == (byte *)0x0) * 0x40 | (uint)(bVar7 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar57 & 0xff) & 1U) == 0) * 4 | (uint)bVar64 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar58 = (char)*puVar58 + bVar9;
      *(undefined2 *)((int)puVar36 + -8) = in_ES;
      cVar26 = (char)pbVar32 - *pbVar60;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar26) +
                                                   0x5f),cVar26));
      *(byte *)puVar58 = (char)*puVar58 + bVar9;
      bVar8 = bVar9 + 0x2a & (byte)*puVar29;
      pbVar22 = pbVar22 + *(int *)(pbVar57 + 0x5f);
      *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
      pbVar19 = (byte *)CONCAT31(uVar24,bVar8 + 0x2a);
      *(byte *)puVar29 = (byte)*puVar29 + 0x28;
      *pbVar19 = *pbVar19 + bVar8 + 0x2a;
      puVar52 = (undefined2 *)((int)puVar36 + -0xc);
      puVar36 = (undefined4 *)((int)puVar36 + -0xc);
      *puVar52 = in_ES;
    }
    else {
      *pbVar60 = *pbVar60 + bVar9;
    }
    pcVar16 = (char *)CONCAT22((short)((uint)pbVar56 >> 0x10),CONCAT11(bVar11,cVar10));
    *pbVar57 = *pbVar57 - bVar11;
    *(byte *)puVar29 = (byte)*puVar29 + cVar10;
    bVar8 = (byte)pbVar19 - 0xb;
    pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar8);
    if (10 < (byte)pbVar19) {
      *pbVar56 = *pbVar56 | bVar8;
      return pbVar56;
    }
    *(byte *)puVar29 = (byte)*puVar29 + cVar10;
    do {
      *(undefined2 *)((int)puVar36 + -4) = in_ES;
      bVar8 = pbVar32[-0x23];
      bVar9 = (byte)pbVar56;
      *pbVar56 = *pbVar56 + bVar9;
      bVar7 = pbVar57[-0x22];
      *pbVar56 = *pbVar56 + bVar9;
      uVar24 = (undefined3)((uint)pbVar56 >> 8);
      bVar9 = bVar9 | *pbVar60;
      pbVar19 = (byte *)CONCAT31(uVar24,bVar9);
      cVar26 = (char)pbVar32 - *pbVar60;
      pbVar32 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar32 >> 8) + bVar8 | bVar7
                                                          ,(char)pbVar32)) >> 8),cVar26);
      cVar10 = (char)pcVar16;
      pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                 CONCAT11((char)((uint)pcVar16 >> 8) + *pbVar19,cVar10));
      *(byte *)puVar29 = (byte)*puVar29 + cVar10;
      bVar7 = bVar9 - *pbVar19;
      pbVar56 = (byte *)CONCAT31(uVar24,bVar7);
      pbVar60 = pbVar60 + (-(uint)(bVar9 < *pbVar19) - *(int *)pbVar56);
      in_ES = *(undefined2 *)((int)puVar36 + -4);
      puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),(char)puVar29 * '\x02');
      *(byte **)pbVar56 = pbVar56 + *(int *)pbVar56;
      *pbVar22 = *pbVar22 + cVar26;
      bVar8 = *pbVar56;
      *pbVar56 = *pbVar56 + bVar7;
      *puVar29 = (uint)(pbVar56 + (uint)CARRY1(bVar8,bVar7) + *puVar29);
    } while ((POPCOUNT(*puVar29 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar56 = *pbVar56 + (char)pbVar56;
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)pcVar16 | pbVar56[(int)pcVar16]);
    puVar54 = (undefined2 *)((int)puVar36 + -4);
    *(undefined2 *)((int)puVar36 + -4) = uVar62;
    bVar64 = false;
    pbVar56 = (byte *)((uint)pbVar56 & 0xffffff00);
    do {
      pbVar22 = pbVar22 + (-(uint)bVar64 - *(int *)pbVar32);
      pcVar20 = (char *)CONCAT31((int3)((uint)pbVar56 >> 8),*pcVar16);
      *pcVar20 = *pcVar20 + *pcVar16;
      pbVar56 = (byte *)CONCAT31((int3)((uint)(pcVar20 +
                                              (pbVar60[0x2000001] < (byte)((uint)pcVar16 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar20 +
                                        (pbVar60[0x2000001] < (byte)((uint)pcVar16 >> 8)) + 0xda7d)
                                 | (byte)*puVar29) + 0x7d);
      pcVar16 = pcVar16 + -1;
      *(byte *)puVar29 = (byte)*puVar29 + (char)pcVar16;
      while( true ) {
        uVar27 = (undefined3)((uint)puVar29 >> 8);
        cVar10 = (char)puVar29 + *(char *)((int)pbVar22 * 2 + 0xa0000e1);
        puVar29 = (uint *)CONCAT31(uVar27,cVar10);
        bVar64 = CARRY1((byte)pbVar56,(byte)*puVar29);
        uVar24 = (undefined3)((uint)pbVar56 >> 8);
        bVar8 = (byte)pbVar56 + (byte)*puVar29;
        pbVar56 = (byte *)CONCAT31(uVar24,bVar8);
        if ((POPCOUNT(bVar8) & 1U) != 0) break;
        *pbVar56 = *pbVar56 + bVar8;
        cVar26 = (char)pcVar16;
        pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar16 >> 8) | pbVar22[-0x65],cVar26));
        bVar7 = *pbVar56;
        *pbVar56 = *pbVar56 + bVar8;
        *(undefined2 *)((int)puVar54 + -4) = in_ES;
        if (CARRY1(bVar7,bVar8)) {
          *pbVar56 = *pbVar56 + bVar8;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | pbVar57[-0x1d],
                                              (char)pbVar32));
          *pbVar56 = *pbVar56 + bVar8;
          bVar64 = false;
          bVar8 = bVar8 | (byte)*puVar29;
          pcVar20 = (char *)CONCAT31(uVar24,bVar8);
          uVar62 = *(undefined2 *)((int)puVar54 + -4);
          puVar36 = (undefined4 *)puVar54;
          while( true ) {
            bVar7 = (byte)pcVar20;
            uVar24 = (undefined3)((uint)pcVar20 >> 8);
            if (bVar64 == (char)bVar8 < '\0') break;
            *pcVar20 = *pcVar20 + bVar7;
            bVar7 = bVar7 | (byte)*puVar29;
            puVar58 = (uint *)CONCAT31(uVar24,bVar7);
            *pbVar22 = *pbVar22 << 1 | (char)*pbVar22 < '\0';
            uVar18 = *puVar58;
            *(byte *)puVar58 = (byte)*puVar58 + bVar7;
            pbVar57 = pbVar57 + (-(uint)CARRY1((byte)uVar18,bVar7) - *puVar58);
            *puVar58 = *puVar58 << 1 | (uint)((int)*puVar58 < 0);
            while( true ) {
              uVar18 = *puVar29;
              *(byte *)puVar29 = (byte)*puVar29 + (byte)pcVar16;
              uVar63 = *(undefined2 *)puVar36;
              cVar10 = (char)puVar58 + 'o' + CARRY1((byte)uVar18,(byte)pcVar16);
              pcVar20 = (char *)CONCAT31((int3)((uint)puVar58 >> 8),cVar10);
              pcVar16 = (char *)0x20a0000;
              if ((POPCOUNT(cVar10) & 1U) != 0) break;
              *pcVar20 = *pcVar20 + cVar10;
              bVar8 = bRamfe140212;
              pcVar16 = (char *)0x0;
              *(undefined2 *)puVar36 = in_ES;
              uVar24 = (undefined3)((uint)(pcVar20 + -0x732b0000) >> 8);
              bVar7 = in(0);
              puVar58 = (uint *)CONCAT31(uVar24,bVar7);
              uVar18 = *puVar29;
              *(byte *)puVar29 = (byte)*puVar29;
              if (SCARRY1((byte)uVar18,'\0') != (char)(byte)*puVar29 < '\0') {
                *(byte *)puVar58 = (byte)*puVar58 + bVar7;
                bVar7 = bVar7 | (byte)*puVar29;
                puVar58 = (uint *)CONCAT31(uVar24,bVar7);
                if ((POPCOUNT(bVar7) & 1U) == 0) {
                  *(byte *)puVar58 = (byte)*puVar58 + bVar7;
                  pcVar16 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar8 | (byte)*puVar58) << 8);
                  puVar54 = (undefined2 *)((int)puVar36 + -4);
                  *(undefined2 *)((int)puVar36 + -4) = uVar63;
                  *(byte *)puVar58 = (byte)*puVar58 + bVar7;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar58 = (byte)*puVar58 + bVar7;
                puVar58 = (uint *)CONCAT31(uVar24,bVar7 | (byte)*puVar29);
              }
            }
            *(byte *)puVar29 = (byte)*puVar29;
            bVar64 = SCARRY1((char)puVar29,*pbVar22);
            bVar8 = (char)puVar29 + *pbVar22;
            puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),bVar8);
            puVar36 = (undefined4 *)((int)puVar36 + 4);
          }
          if (bVar64 == (char)bVar8 < '\0') {
            *(byte *)puVar29 = (byte)*puVar29 + (char)pcVar16;
            pbVar56 = (byte *)((uint)pcVar20 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar20 = *pcVar20 + bVar7;
          pbVar56 = (byte *)CONCAT31(uVar24,(bVar7 | (byte)*puVar29) + 0x7d);
          pcVar16 = pcVar16 + -1;
          *(byte *)puVar29 = (byte)*puVar29 + (char)pcVar16;
          puVar54 = (undefined2 *)puVar36;
        }
        else {
          *(byte *)puVar29 = (byte)*puVar29 + cVar26;
          puVar29 = (uint *)CONCAT31(uVar27,cVar10 + *(char *)((int)pbVar22 * 2 + 0xa0000e0));
          puVar54 = (undefined2 *)((int)puVar54 + -4);
        }
      }
    } while( true );
  }
  *pbVar22 = *pbVar22 + bVar8;
  bVar8 = bVar8 + 0x6f & *(byte *)CONCAT31(uVar24,bVar8 + 0x6f);
  *pbVar19 = *pbVar19 + (char)pbVar56;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),(char)pbVar19 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar8;
  pcVar16 = (char *)CONCAT31(uVar24,bVar8 - (byte)*unaff_EDI);
code_r0x00403b2c:
  bVar8 = (char)pcVar16 - *pcVar16;
  pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar8);
  *pbVar21 = *pbVar21 + bVar8;
  *(byte **)pbVar21 = pbVar19 + *(int *)pbVar21;
  *pbVar21 = *pbVar21 + bVar8;
  bVar64 = CARRY1(*pbVar21,bVar8);
  *pbVar21 = *pbVar21 + bVar8;
  puVar30 = (undefined1 *)puVar36;
  pbVar22 = pbVar60;
  while( true ) {
    puVar36 = (undefined4 *)puVar30;
    *(byte **)pbVar21 = pbVar21 + (uint)bVar64 + *(int *)pbVar21;
    bVar7 = ((uint)pbVar21 & 0x1000) != 0;
    unaff_EDI = unaff_EDI + (uint)bVar65 * -2 + 1;
    pbVar21[(int)pbVar19] = pbVar21[(int)pbVar19] + (char)pbVar32;
    *pbVar21 = *pbVar21 + (char)pbVar21;
    *(byte **)pbVar22 = pbVar32 + *(int *)pbVar22;
    bVar8 = (byte)((uint)pbVar56 >> 8);
    cVar10 = (char)pbVar56;
    pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),CONCAT11(bVar8 + *pbVar21,cVar10));
    pbVar21 = pbVar21 + (uint)CARRY1(bVar8,*pbVar21) + *(int *)pbVar21;
    *pbVar19 = *pbVar19 + cVar10;
    cVar10 = (char)pbVar32 - pbVar22[2];
    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar10);
    pbVar60 = pbVar22;
    if ((POPCOUNT(cVar10) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    bVar8 = (byte)pbVar21 | *pbVar32;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar8);
    if (bVar8 != 0) {
      pbVar57 = pbVar57 + -unaff_EDI[9];
      *pbVar23 = *pbVar23 + bVar8;
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar56 >> 8) | *pbVar19,(char)pbVar56));
      pbVar22 = pbVar22 + *(int *)pbVar23;
      pbVar23 = pbVar23 + *(int *)pbVar23;
      uVar24 = (undefined3)((uint)pbVar23 >> 8);
      bVar9 = (char)pbVar23 - *pbVar23;
      pbVar60 = (byte *)CONCAT31(uVar24,bVar9);
      bVar8 = *pbVar60;
      *pbVar60 = *pbVar60 + bVar9;
      pbVar23 = (byte *)CONCAT31(uVar24,bVar9 - CARRY1(bVar8,bVar9));
    }
    bVar8 = *pbVar23;
    *pbVar23 = *pbVar23 + (byte)pbVar23;
    iVar14 = *(int *)(pbVar57 + 0x1b000007);
    iVar3 = -(uint)CARRY1(bVar8,(byte)pbVar23);
    pbVar60 = pbVar22 + (uint)bVar65 * -8 + 4;
    out(*(undefined4 *)pbVar22,(short)pbVar19);
    pbVar21 = (byte *)(((uint)pbVar23 >> 8) * 0x100);
    *pbVar19 = *pbVar19 + (byte)pbVar56;
    bVar8 = (char)pbVar19 - *pbVar32;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar8);
    *pbVar32 = *pbVar32;
    *pbVar19 = *pbVar19 + (char)((uint)pbVar56 >> 8);
    *pbVar21 = *pbVar21;
    pcVar16 = (char *)(((uint)pbVar23 >> 8) * 0x200);
    *pcVar16 = *pcVar16 + (char)pbVar32;
    bVar64 = CARRY1(*pbVar56,bVar8);
    *pbVar56 = *pbVar56 + bVar8;
    puVar30 = (undefined1 *)((int)puVar36 + (iVar3 - iVar14));
    pbVar22 = pbVar60;
    if (bVar64) {
      *pbVar21 = *pbVar21;
      pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar56 >> 8),(byte)pbVar56 | *pbVar19);
      puVar51 = (undefined2 *)((int)puVar36 + (iVar3 - iVar14) + -4);
      puVar36 = (undefined4 *)((int)puVar36 + (iVar3 - iVar14) + -4);
      *puVar51 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar50 = (undefined2 *)((int)puVar36 + -4);
  puVar36 = (undefined4 *)((int)puVar36 + -4);
  *puVar50 = uVar62;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar57 = pbVar57 + -*puVar58;
  puVar53 = (undefined1 *)((int)puVar54 + 4);
  do {
    bVar8 = (byte)puVar58;
    *(byte *)puVar58 = (byte)*puVar58 + bVar8;
    pbVar22 = pbVar22 + -*(int *)(pbVar57 + -0x1a);
    *(byte *)puVar58 = (byte)*puVar58 + bVar8;
    bVar8 = bVar8 | (byte)*puVar29;
    puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar8);
    *(byte *)puVar58 = (byte)*puVar58 | bVar8;
    bVar8 = (byte)*puVar58;
    pbVar57 = (byte *)0x2700001;
    while (puVar54 = (undefined2 *)puVar53, (POPCOUNT(bVar8) & 1U) == 0) {
      do {
        *(byte *)puVar58 = (byte)*puVar58 + (byte)puVar58;
        bVar8 = (byte)puVar58 | (byte)*puVar29;
        puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar8);
        puVar30 = (undefined1 *)puVar54;
        if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
        uVar25 = CONCAT21((short)((uint)pcVar16 >> 0x10),(byte)((uint)pcVar16 >> 8) | bRamfe140212);
        puVar6 = puVar30;
        while( true ) {
          puVar55 = puVar6;
          pcVar16 = (char *)((uint)uVar25 << 8);
          puVar53 = puVar55 + -4;
          puVar54 = (undefined2 *)(puVar55 + -4);
          puVar30 = puVar55 + -4;
          *(undefined2 *)(puVar55 + -4) = in_ES;
          bVar11 = (byte)puVar58;
          *(byte *)puVar58 = (byte)*puVar58 & bVar11;
          bVar7 = *pbVar32;
          bVar13 = (byte)uVar25;
          bVar9 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar13;
          bVar8 = *pbVar32;
          if (!CARRY1(bVar7,bVar13)) break;
          *(byte *)puVar58 = (byte)*puVar58 + bVar11;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffe2,
                                              (char)pbVar32));
          *(byte *)puVar58 = (byte)*puVar58 + bVar11;
          bVar11 = bVar11 | (byte)*puVar29;
          puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar11);
          bVar64 = (POPCOUNT(bVar11) & 1U) == 0;
          while( true ) {
            cVar10 = (char)((uint)pbVar32 >> 8);
            uVar62 = (undefined2)((uint)pbVar32 >> 0x10);
            if (!bVar64) {
              *(byte *)puVar29 = (byte)*puVar29;
              pbVar32 = (byte *)CONCAT22(uVar62,CONCAT11(cVar10 + pbVar32[-0x1f],(char)pbVar32));
              goto code_r0x00403d52;
            }
            *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
            uVar63 = (undefined2)((uint)pcVar16 >> 0x10);
            bVar7 = (byte)((uint)pcVar16 >> 8) | (byte)*puVar58;
            uVar25 = CONCAT21(uVar63,bVar7);
            *puVar58 = *puVar58 & (uint)puVar58;
            *pbVar32 = *pbVar32 + bVar7;
            uVar24 = (undefined3)((uint)puVar58 >> 8);
            bVar8 = (char)puVar58 - bVar7;
            pcVar16 = (char *)CONCAT31(uVar24,bVar8);
            *pcVar16 = *pcVar16 + bVar8;
            bVar8 = bVar8 | (byte)*puVar29;
            puVar58 = (uint *)CONCAT31(uVar24,bVar8);
            puVar6 = puVar55 + -4;
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *(byte *)puVar58 = (byte)*puVar58 + bVar8;
            pcVar16 = (char *)((uint)CONCAT21(uVar63,bVar7 | (byte)*puVar58) << 8);
            *puVar58 = *puVar58 - (int)puVar58;
            *(byte *)puVar29 = (byte)*puVar29;
            pbVar32 = (byte *)CONCAT22(uVar62,CONCAT11(cVar10 + pbVar32[-0x1d],(char)pbVar32));
            do {
              *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
              uVar62 = (undefined2)((uint)puVar29 >> 0x10);
              cVar10 = (char)puVar29;
              bVar8 = (byte)((uint)puVar29 >> 8) | pbVar32[-0x17];
              puVar29 = (uint *)CONCAT22(uVar62,CONCAT11(bVar8,cVar10));
              *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffeb,
                                                  (char)pbVar32));
              do {
                *(byte *)puVar58 = (byte)*puVar58 + (byte)puVar58;
                uVar24 = (undefined3)((uint)puVar58 >> 8);
                bVar9 = (byte)puVar58 | (byte)*puVar29;
                pcVar20 = (char *)CONCAT31(uVar24,bVar9);
                bVar7 = pbVar32[-0x16];
                *pcVar20 = *pcVar20 + bVar9;
                pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                           CONCAT11((char)((uint)pbVar32 >> 8) + bVar7 |
                                                    bRam026fffec,(char)pbVar32));
                *pcVar20 = *pcVar20 + bVar9;
                pbVar19 = (byte *)CONCAT31(uVar24,bVar9 | (byte)*puVar29);
                while( true ) {
                  *pbVar19 = *pbVar19 + (byte)pbVar19;
                  uVar24 = (undefined3)((uint)pbVar19 >> 8);
                  bVar7 = (byte)pbVar19 | (byte)*puVar29;
                  puVar58 = (uint *)CONCAT31(uVar24,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) != 0) break;
                  *(byte *)puVar58 = (byte)*puVar58 + bVar7;
                  bVar9 = pbVar22[-0x14];
                  *(byte *)puVar58 = (byte)*puVar58 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar29;
                  pcVar20 = (char *)CONCAT31(uVar24,bVar7);
                  bVar11 = pbVar32[-0x15];
                  *pcVar20 = *pcVar20 + bVar7;
                  pcVar16 = (char *)((uint)CONCAT21((short)((uint)pcVar16 >> 0x10),
                                                    (byte)((uint)pcVar16 >> 8) | bVar9 |
                                                    pbVar22[-0x13]) << 8);
                  *pcVar20 = *pcVar20 + bVar7;
                  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                             CONCAT11((char)((uint)pbVar32 >> 8) + bVar11 |
                                                      bRam026fffef,(char)pbVar32));
                  *pcVar20 = *pcVar20 + bVar7;
                  pbVar19 = (byte *)CONCAT31(uVar24,bVar7 | (byte)*puVar29);
                  do {
                    do {
                      bVar9 = (byte)pbVar19;
                      *pbVar19 = *pbVar19 + bVar9;
                      cVar28 = (char)pbVar32;
                      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar32 >> 8) | *pbVar19,
                                                          cVar28));
                      *pbVar19 = bVar9;
                      *pbVar19 = *pbVar19 + bVar9;
                      cVar26 = (char)((uint)pcVar16 >> 8) + *pbVar19;
                      pcVar16 = (char *)((uint)CONCAT21((short)((uint)pcVar16 >> 0x10),cVar26) << 8)
                      ;
                      uVar24 = (undefined3)((uint)pbVar19 >> 8);
                      bVar9 = bVar9 & *pbVar19;
                      pbVar19 = (byte *)CONCAT31(uVar24,bVar9);
                      bVar7 = *pbVar32;
                      *pbVar32 = *pbVar32 + cVar26;
                    } while (SCARRY1(bVar7,cVar26) == (char)*pbVar32 < '\0');
                    *pbVar19 = *pbVar19 + bVar9;
                    bVar9 = bVar9 | (byte)*puVar29;
                    pbVar19 = (byte *)CONCAT31(uVar24,bVar9);
                    if ((POPCOUNT(bVar9) & 1U) == 0) {
                      *pbVar19 = *pbVar19 + bVar9;
                      *pbVar19 = *pbVar19 + bVar9;
                      cVar10 = cVar10 - bVar8;
                      pbVar56 = (byte *)CONCAT31((int3)((uint)puVar29 >> 8),cVar10);
                      *pbVar19 = *pbVar19 + bVar9;
                      bRam0312382b = bRam0312382b | *pbVar56;
                      *(undefined2 *)(puVar55 + -8) = in_ES;
                      while( true ) {
                        bVar7 = (byte)pbVar19;
                        *pbVar19 = *pbVar19 + bVar7;
                        bRam0312382b = bRam0312382b | (pbVar22 + 0x21b0000)[(int)pbVar19];
                        uVar24 = (undefined3)((uint)pbVar19 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar56 = *pbVar56 + bRam0312382b;
                        pbVar19 = (byte *)CONCAT31(uVar24,bVar7 | *pbVar60);
                      }
                      *pbVar19 = *pbVar19 + bVar7;
                      bVar7 = bVar7 | *pbVar60;
                      pcVar16 = (char *)CONCAT31(uVar24,bVar7);
                      out(*(undefined4 *)pbVar60,(short)pbVar56);
                      *pcVar16 = *pcVar16 + bVar7;
                      uVar63 = CONCAT11(bVar8 | bRam6f0a002b,cVar10);
                      pcVar20 = (char *)CONCAT22(uVar62,uVar63);
                      *pcVar16 = *pcVar16 + bVar7;
                      *pcVar20 = *pcVar20 + bRam0312382b;
                      out(*(undefined4 *)(pbVar60 + (uint)bVar65 * -8 + 4),uVar63);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar28 + *pcVar16);
                  } while (SCARRY1(cVar28,*pcVar16) != (char)(cVar28 + *pcVar16) < '\0');
                }
                uVar18 = *puVar29;
                *(byte *)puVar29 = (byte)*puVar29;
              } while (SCARRY1((byte)uVar18,'\0') != (char)(byte)*puVar29 < '\0');
              *(byte *)puVar29 = (byte)*puVar29;
              *pcVar16 = *pcVar16 - (char)pbVar32;
              *(byte *)puVar58 = (byte)*puVar58 + bVar7;
              bVar7 = bVar7 | (byte)*puVar29;
              puVar58 = (uint *)CONCAT31(uVar24,bVar7);
              bVar64 = (POPCOUNT(bVar7) & 1U) == 0;
            } while (bVar64);
          }
        }
      } while (SCARRY1(bVar9,bVar13));
    }
    *pbVar32 = *pbVar32 + (char)((uint)pcVar16 >> 8);
    *pbVar22 = *pbVar22 - (char)pbVar32;
  } while( true );
}


