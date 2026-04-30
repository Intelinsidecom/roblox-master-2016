/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004033e8
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(byte * settingsAquirer, byte * filename)
 * Local Vars  : uStack_1c, pbStack_14, apbStack_c, pbStack_4, pcVar1, settingsAquirer, uVar2, filename, iVar3, uVar4, puVar5, bVar6, bVar7, bVar8, cVar9, bVar10, bVar11, bVar12, in_EAX, iVar13, uVar14, pcVar15, piVar16, pbVar17, pcVar18, pbVar19, pbVar20, pbVar21, pbVar22, uVar23, uVar24, extraout_ECX, extraout_ECX_00, cVar25, uVar26, cVar27, puVar28, puVar29, uVar30, unaff_EBX, pbVar31, cVar32, cVar33, bVar34, uVar35, puVar36, puVar37, piVar38, piVar39, puVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, unaff_EBP, pbVar56, unaff_ESI, puVar57, puVar58, pbVar59, unaff_EDI, puVar60, in_ES, in_CS, in_SS, uVar61, in_DS, uVar62, bVar63, in_AF, in_TF, in_IF, bVar64, bVar65, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar66
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

byte * __fastcall _ctor(byte *settingsAquirer,byte *filename)

{
  code *pcVar1;
  undefined6 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte *in_EAX;
  int iVar13;
  undefined3 uVar23;
  uint uVar14;
  char *pcVar15;
  int *piVar16;
  byte *pbVar17;
  char *pcVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint3 uVar24;
  byte *pbVar22;
  char cVar25;
  byte *extraout_ECX;
  undefined3 uVar26;
  byte *extraout_ECX_00;
  char cVar27;
  uint *puVar28;
  undefined1 *puVar29;
  undefined1 uVar30;
  char cVar32;
  byte bVar34;
  byte *unaff_EBX;
  char cVar33;
  byte *pbVar31;
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
  byte *unaff_EBP;
  byte *pbVar56;
  byte *unaff_ESI;
  uint *puVar57;
  uint *puVar58;
  byte *pbVar59;
  uint *unaff_EDI;
  uint *puVar60;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 uVar61;
  undefined2 in_DS;
  undefined2 uVar62;
  bool bVar63;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar64;
  bool bVar65;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar66;
  undefined4 uStack_1c;
  byte *pbStack_14;
  byte *apbStack_c [2];
  byte *pbStack_4;
  
  bVar64 = false;
  do {
                    /* .NET CLR Managed Code */
    iVar13 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *unaff_EBX) + 0x6128;
    pbStack_4 = (byte *)((uint)pbStack_4 & 0xffff0000);
    bVar6 = (char)iVar13 + *(char *)((int)unaff_EDI * 2 + 0x400003e);
    in_EAX = (byte *)CONCAT31((int3)((uint)iVar13 >> 8),bVar6);
    cVar27 = (char)filename - *unaff_EBX;
    puVar28 = (uint *)CONCAT31((int3)((uint)filename >> 8),cVar27);
    *(byte *)puVar28 = (byte)*puVar28 ^ bVar6;
    *in_EAX = *in_EAX + (char)((uint)unaff_EBX >> 8);
    *in_EAX = *in_EAX + bVar6;
    *settingsAquirer = *settingsAquirer + cVar27;
    bVar7 = *in_EAX;
    *in_EAX = *in_EAX + bVar6;
    *(byte **)(unaff_EBX + -0x41) =
         unaff_ESI + (uint)CARRY1(bVar7,bVar6) + *(int *)(unaff_EBX + -0x41);
    pbVar17 = unaff_ESI;
    do {
      *in_EAX = *in_EAX + (byte)in_EAX;
      uVar23 = (undefined3)((uint)in_EAX >> 8);
      bVar7 = (byte)in_EAX | *pbVar17;
      uVar61 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar30 = SUB41(unaff_EBX,0);
      cVar32 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x69];
      *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
      cVar27 = bVar7 + 0x7d;
      pcVar15 = (char *)CONCAT31(uVar23,cVar27);
      pbVar17[(int)pcVar15] = pbVar17[(int)pcVar15] + cVar27;
      cVar32 = cVar32 + *(char *)(CONCAT22(uVar61,CONCAT11(cVar32,uVar30)) + 0x67);
      *pcVar15 = *pcVar15 + cVar27;
      pcVar15 = (char *)CONCAT31(uVar23,bVar7 - 6);
      puVar57 = (uint *)(pbVar17 + 4);
      out(*(undefined4 *)pbVar17,(short)puVar28);
      *pcVar15 = *pcVar15 + (bVar7 - 6);
      cVar32 = cVar32 + *(char *)(CONCAT22(uVar61,CONCAT11(cVar32,uVar30)) + 0x6b);
      *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
      pcVar15 = (char *)CONCAT31(uVar23,bVar7 + 0x7d);
      pbVar17 = (byte *)((int)puVar57 + (int)pcVar15);
      *pbVar17 = *pbVar17 + bVar7 + 0x7d;
      cVar32 = cVar32 + *(char *)(CONCAT22(uVar61,CONCAT11(cVar32,uVar30)) + 0x6a);
      unaff_EBX = (byte *)CONCAT22(uVar61,CONCAT11(cVar32,uVar30));
      puVar60 = puVar28;
      do {
        cVar27 = (char)pcVar15;
        *pcVar15 = *pcVar15 + cVar27;
        uVar23 = (undefined3)((uint)pcVar15 >> 8);
        bVar7 = cVar27 + 0x7d;
        pcVar18 = (char *)CONCAT31(uVar23,bVar7);
        *(byte *)((int)puVar57 + (int)pcVar18) = *(byte *)((int)puVar57 + (int)pcVar18) + bVar7;
        uVar26 = (undefined3)((uint)puVar60 >> 8);
        bVar6 = (char)puVar60 - *(byte *)((int)puVar60 + 0x457e02);
        puVar28 = (uint *)CONCAT31(uVar26,bVar6);
        unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar7;
        uVar14 = *puVar57;
        uVar4 = *puVar57;
        *(byte *)puVar57 = (byte)*puVar57 + bVar7;
        cVar9 = (char)settingsAquirer;
        cVar25 = (char)((uint)settingsAquirer >> 8);
        uVar62 = (undefined2)((uint)settingsAquirer >> 0x10);
        cVar33 = (char)((uint)pcVar15 >> 8);
        if (CARRY1((byte)uVar14,bVar7)) {
          *pcVar18 = *pcVar18 + bVar7;
          bVar7 = bVar7 | pcVar18[0x4000045];
          piVar16 = (int *)CONCAT31(uVar23,bVar7);
          if ((char)bVar7 < '\x01') {
            *(byte *)puVar28 = (byte)*puVar28 + bVar7;
            goto code_r0x004034a0;
          }
          *(byte *)piVar16 = (char)*piVar16 + bVar7;
          bVar7 = bVar7 + 0x6f;
          pcVar15 = (char *)CONCAT31(uVar23,bVar7);
          *pcVar15 = *pcVar15 + bVar7;
          unaff_EBP = unaff_EBP + -*puVar28;
          *pcVar15 = *pcVar15 + bVar7;
          *unaff_EBX = *unaff_EBX + bVar6;
          *(byte *)((int)pcVar15 * 2) = *(byte *)((int)pcVar15 * 2) ^ bVar7;
          in_AF = 9 < (bVar7 & 0xf) | in_AF;
          uVar14 = CONCAT31(uVar23,bVar7 + in_AF * '\x06') & 0xffffff0f;
          cVar27 = (char)uVar14;
          pcVar15 = (char *)CONCAT22((short)(uVar14 >> 0x10),CONCAT11(cVar33 + in_AF,cVar27));
          *pcVar15 = *pcVar15 + cVar27;
          cRam72110000 = cRam72110000 + bVar6;
          puVar54 = (undefined2 *)segment(in_SS,(short)apbStack_c + -2);
          *puVar54 = in_ES;
          pcVar15[0x1a] = pcVar15[0x1a] + (char)((uint)puVar60 >> 8);
          *settingsAquirer = *settingsAquirer + cVar9;
          *puVar28 = (uint)(settingsAquirer + *puVar28);
          cVar32 = cVar32 + unaff_EBX[0x70];
          *settingsAquirer = *settingsAquirer + cVar9;
          uVar23 = (undefined3)((uint)settingsAquirer >> 8);
          bVar7 = cVar9 + 0xa2;
          cVar32 = cVar32 + *(char *)(CONCAT22(uVar61,CONCAT11(cVar32,uVar30)) + 0x6f);
          unaff_EBX = (byte *)CONCAT22(uVar61,CONCAT11(cVar32,uVar30));
          *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
          bVar8 = cVar9 + 0x44;
          piVar16 = (int *)CONCAT31(uVar23,bVar8);
          *(byte *)puVar28 = ((byte)*puVar28 - bVar8) - (0x5d < bVar7);
          if ((POPCOUNT((byte)*puVar28) & 1U) != 0) {
            *(byte *)piVar16 = (char)*piVar16 + bVar8;
            *(byte *)piVar16 = (char)*piVar16 + bVar8;
            *(char *)piVar16 = (char)*piVar16 + cVar32;
            puVar28 = (uint *)CONCAT22((short)((uint)puVar60 >> 0x10),(ushort)bVar6);
            *(byte *)piVar16 = (char)*piVar16 + bVar8;
            settingsAquirer = (byte *)CONCAT22(uVar62,CONCAT11(cVar25 + (char)*piVar16,cVar9));
            in_SS = in_ES;
            pbStack_4 = unaff_EBX;
            goto code_r0x00403511;
          }
          *(byte *)piVar16 = (char)*piVar16 + bVar8;
          cVar9 = cVar9 + -0x1a;
          piVar16 = (int *)CONCAT31(uVar23,cVar9);
          pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_ES);
          *puVar28 = (*puVar28 - (int)piVar16) - (uint)(0x5d < bVar8);
          if ((POPCOUNT(*puVar28 & 0xff) & 1U) != 0) {
            *(byte *)puVar28 = (byte)*puVar28 + cVar9;
            in_SS = in_ES;
            goto code_r0x004034f3;
          }
          *(char *)piVar16 = (char)*piVar16 + cVar9;
          in_SS = in_ES;
          goto code_r0x0040349e;
        }
        pcVar15 = pcVar18;
        puVar60 = puVar28;
      } while (SCARRY1((byte)uVar4,bVar7) == (char)(byte)*puVar57 < '\0');
      *pcVar18 = *pcVar18 + bVar7;
      piVar16 = (int *)CONCAT31(uVar23,cVar27 + -0x59);
      pbVar17 = (byte *)((int)puVar57 + (uint)(0xd5 < bVar7) + *piVar16);
      bVar8 = cVar27 + -0x59 + (char)*piVar16;
      in_EAX = (byte *)CONCAT31(uVar23,bVar8);
      bVar7 = *in_EAX;
      *in_EAX = *in_EAX + bVar8;
      *(byte **)in_EAX = in_EAX + (uint)CARRY1(bVar7,bVar8) + *(int *)in_EAX;
      bVar7 = *settingsAquirer;
      *settingsAquirer = *settingsAquirer + bVar6;
    } while (CARRY1(bVar7,bVar6));
    *pbVar17 = *pbVar17 + bVar8;
    cVar27 = bVar6 - *unaff_EBX;
    pbVar19 = (byte *)CONCAT31(uVar26,cVar27);
    *pbVar19 = *pbVar19 ^ bVar8;
    *unaff_EBX = *unaff_EBX + cVar27;
    *in_EAX = *in_EAX + bVar8;
    *(char *)((int)in_EAX * 2) = *(char *)((int)in_EAX * 2) + cVar27;
    *settingsAquirer = *settingsAquirer + cVar27;
    pbVar19[0xa0a0000] = pbVar19[0xa0a0000] - cVar33;
    apbStack_c[0] = (byte *)CONCAT22(apbStack_c[0]._2_2_,in_ES);
    settingsAquirer = (byte *)CONCAT22(uVar62,CONCAT11(cVar25 + *in_EAX,cVar9));
    *in_EAX = *in_EAX + bVar8;
    unaff_ESI = pbVar17 + 4;
    out(*(undefined4 *)pbVar17,(short)pbVar19);
    filename = pbVar19 + 1;
    unaff_EBP = apbStack_c[0];
    pbRam2a0a0000 = in_EAX;
  } while( true );
code_r0x0040349e:
  piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + -0x5e);
code_r0x004034a0:
  settingsAquirer[0x2a0a0000] = settingsAquirer[0x2a0a0000] - (char)settingsAquirer;
  settingsAquirer =
       (byte *)CONCAT22((short)((uint)settingsAquirer >> 0x10),
                        CONCAT11((char)((uint)settingsAquirer >> 8) + (char)*piVar16,
                                 (char)settingsAquirer));
  bVar7 = (byte)piVar16;
  *(byte *)piVar16 = (char)*piVar16 + bVar7;
  pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_ES);
  puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),
                             (char)puVar28 - *(byte *)((int)puVar28 + 0x467e02));
  unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar7;
  uVar14 = *puVar57;
  *(byte *)puVar57 = (byte)*puVar57 + bVar7;
  if (!CARRY1((byte)uVar14,bVar7)) {
    pbVar17 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
    *pbVar17 = *pbVar17 + bVar7;
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar7;
  uVar23 = (undefined3)((uint)piVar16 >> 8);
  bVar7 = bVar7 | *(byte *)((int)piVar16 + 0x4000046);
  piVar16 = (int *)CONCAT31(uVar23,bVar7);
  if ((char)bVar7 < '\x01') {
code_r0x00403511:
    unaff_EBP = pbStack_4;
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar7;
  pbVar17 = (byte *)CONCAT31(uVar23,bVar7 + 0x6f);
  *pbVar17 = *pbVar17 + bVar7 + 0x6f;
  unaff_EBP = unaff_EBP + -*puVar28;
  in_SS = in_ES;
  do {
    bVar7 = *(byte *)((int)unaff_EDI + 0x17);
    *pbVar17 = *pbVar17 + (byte)pbVar17;
    settingsAquirer =
         (byte *)CONCAT22((short)((uint)settingsAquirer >> 0x10),
                          CONCAT11((char)((uint)settingsAquirer >> 8) + bVar7 | (byte)*puVar28,
                                   (char)settingsAquirer));
    uVar23 = (undefined3)((uint)pbVar17 >> 8);
    bVar7 = (byte)pbVar17 | (byte)*puVar28;
    bVar6 = bVar7 - *(byte *)CONCAT31(uVar23,bVar7);
    puVar57 = (uint *)((int)puVar57 +
                      (uint)(bVar7 < *(byte *)CONCAT31(uVar23,bVar7)) +
                      *(int *)CONCAT31(uVar23,bVar6));
    pbVar17 = (byte *)CONCAT31(uVar23,bVar6);
    *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
    *(byte *)puVar57 = (byte)*puVar57 + (char)puVar28;
    bVar7 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar6;
    *puVar28 = (uint)(pbVar17 + (uint)CARRY1(bVar7,bVar6) + *puVar28);
    if ((POPCOUNT(*puVar28 & 0xff) & 1U) != 0) {
      *(byte *)puVar57 = (byte)*puVar57 + 1;
      puVar60 = puVar57;
      goto code_r0x00403529;
    }
    *pbVar17 = *pbVar17 + bVar6;
    piVar16 = (int *)CONCAT31(uVar23,bVar6 + 0x6f);
code_r0x004034f3:
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    *(byte *)puVar57 = (byte)*puVar57 + (char)piVar16;
    unaff_EBP = unaff_EBP + 1;
    pcVar15 = (char *)((int)((uint)piVar16 | 8) + *(int *)((uint)piVar16 | 8));
    *pcVar15 = *pcVar15 + (char)pcVar15;
    piVar16 = (int *)(pcVar15 + 0x53000000);
    bVar7 = (byte)piVar16;
    *(byte *)piVar16 = (char)*piVar16 + bVar7;
    *unaff_EBX = *unaff_EBX + (char)puVar28;
    *(byte *)piVar16 = (char)*piVar16 + bVar7;
    *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
    uVar14 = *puVar57;
    *(byte *)puVar57 = (byte)*puVar57 + bVar7;
    if (CARRY1((byte)uVar14,bVar7)) goto code_r0x0040349e;
    pcVar15[0x5300006f] = pcVar15[0x5300006f] + (char)((uint)puVar28 >> 8);
    pcVar15 = pcVar15 + 0x53000001;
    bVar6 = (byte)pcVar15;
    bRam7e060000 = bVar7;
    *pcVar15 = *pcVar15 + bVar6;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar6 + 0x2d);
    puVar57[(int)unaff_EDI * 2] =
         (uint)((int)puVar28 + (uint)(0xd2 < bVar6) + puVar57[(int)unaff_EDI * 2]);
    puVar60 = puVar57;
code_r0x00403529:
    puVar57 = puVar60 + 1;
    out(*puVar60,(short)puVar28);
    bVar7 = *pbVar17;
    bVar6 = (byte)pbVar17;
    *pbVar17 = *pbVar17 + bVar6;
  } while (!CARRY1(bVar7,bVar6));
  *pbVar17 = *pbVar17 + bVar6;
  uVar23 = (undefined3)((uint)pbVar17 >> 8);
  bVar6 = bVar6 | pbVar17[0x4000040];
  pcVar15 = (char *)CONCAT31(uVar23,bVar6);
  if ((char)bVar6 < '\x01') goto code_r0x00403579;
  *pcVar15 = *pcVar15 + bVar6;
  cVar27 = bVar6 + 10;
  pcVar15 = (char *)CONCAT31(uVar23,cVar27);
  puVar60 = puVar57;
  if (cVar27 == '\0' || SCARRY1(bVar6,'\n') != cVar27 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar7 = (byte)pcVar15;
  *pcVar15 = *pcVar15 + bVar7;
  piVar16 = (int *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar7 + 0x2d);
  puVar57[(int)unaff_EDI * 2] =
       (uint)((int)puVar28 + (uint)(0xd2 < bVar7) + puVar57[(int)unaff_EDI * 2]);
  pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
code_r0x00403549:
  uVar14 = *puVar57;
  bVar7 = (byte)piVar16;
  *(byte *)puVar57 = (byte)*puVar57 + bVar7;
  if (!CARRY1((byte)uVar14,bVar7)) goto code_r0x004034f3;
  *(byte *)piVar16 = (char)*piVar16 + bVar7;
  uVar23 = (undefined3)((uint)piVar16 >> 8);
  bVar7 = bVar7 | *(byte *)((int)piVar16 + 0x4000041);
  if ((char)bVar7 < '\x01') {
    *(byte *)puVar28 = (byte)*puVar28 + (char)settingsAquirer;
    *(byte *)puVar28 = (byte)*puVar28;
    pcVar15 = (char *)CONCAT31(uVar23,bVar7 + 0x7e);
    puVar28 = (uint *)((int)puVar28 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
  piVar16 = (int *)CONCAT31(uVar23,bVar7 + 0xb);
  puVar60 = puVar57;
code_r0x0040355b:
  unaff_EBP = unaff_EBP + -*(int *)((int)puVar60 + 2);
  *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
  uVar14 = *puVar60;
  bVar7 = (byte)piVar16;
  *(byte *)puVar60 = (byte)*puVar60 + bVar7;
  if (CARRY1((byte)uVar14,bVar7)) goto code_r0x00403548;
code_r0x00403565:
  piVar16 = piVar16 + 0x1ec09c00;
  pbVar17 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
  *pbVar17 = *pbVar17 + (char)piVar16;
  *(byte *)puVar60 = (byte)*puVar60 + (char)piVar16 + (char)*piVar16;
  puVar57 = puVar60 + 1;
  out(*puVar60,(short)puVar28);
  pcVar15 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),uRam8c0a0000);
code_r0x00403579:
  *settingsAquirer = *settingsAquirer + (char)pcVar15;
  *(byte *)puVar28 = (byte)*puVar28 - (char)((uint)pcVar15 >> 8);
  puVar60 = puVar57;
code_r0x00403580:
  *(byte *)puVar28 = (byte)*puVar28 + (char)settingsAquirer;
  puVar57 = puVar60 + 1;
  out(*puVar60,(short)puVar28);
  bVar7 = (byte)pcVar15;
  puVar28 = (uint *)((int)puVar28 + 1);
  bRam7e060000 = bVar7;
  *pcVar15 = *pcVar15 + bVar7;
  uVar23 = (undefined3)((uint)pcVar15 >> 8);
  bVar6 = bVar7 + 0x2d;
  pcVar15 = (char *)CONCAT31(uVar23,bVar6);
  puVar57[(int)unaff_EDI * 2] =
       (uint)((int)puVar28 + (uint)(0xd2 < bVar7) + puVar57[(int)unaff_EDI * 2]);
  pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
  uVar14 = *puVar57;
  *(byte *)puVar57 = (byte)*puVar57 + bVar6;
  if (!CARRY1((byte)uVar14,bVar6)) {
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar60 + 0x45),(char)unaff_EBX));
    goto code_r0x0040353f;
  }
  *pcVar15 = *pcVar15 + bVar6;
  bVar6 = bVar6 | pcVar15[0x4000042];
  pcVar15 = (char *)CONCAT31(uVar23,bVar6);
  if ('\0' < (char)bVar6) {
code_r0x004035a1:
    bVar6 = (byte)pcVar15;
    *pcVar15 = *pcVar15 + bVar6;
    uVar23 = (undefined3)((uint)pcVar15 >> 8);
    bVar7 = bVar6 + 10;
    if (bVar7 == 0 || SCARRY1(bVar6,'\n') != (char)bVar7 < '\0') {
      pcVar15 = (char *)CONCAT31(uVar23,bVar6 + 8 + (0xf5 < bVar6));
code_r0x004035e5:
      bVar6 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar6;
      uVar23 = (undefined3)((uint)pcVar15 >> 8);
      bVar7 = bVar6 + 0x2d;
      pcVar15 = (char *)CONCAT31(uVar23,bVar7);
      puVar57[(int)unaff_EDI * 2] =
           (uint)((int)puVar28 + (uint)(0xd2 < bVar6) + puVar57[(int)unaff_EDI * 2]);
      uVar14 = *puVar57;
      *(byte *)puVar57 = (byte)*puVar57 + bVar7;
      if (CARRY1((byte)uVar14,bVar7)) {
        *pcVar15 = *pcVar15 + bVar7;
        bVar7 = bVar7 | pcVar15[0x4000044];
        pbVar17 = (byte *)CONCAT31(uVar23,bVar7);
        if ('\0' < (char)bVar7) {
          *pbVar17 = *pbVar17 + bVar7;
          pbVar17 = (byte *)(CONCAT31(uVar23,bVar7 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar7));
          pbRam2a060000 = pbVar17;
          *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
          *(byte *)puVar28 = (byte)*puVar28 ^ (byte)pbVar17;
          *pbVar17 = *pbVar17 + (char)((uint)settingsAquirer >> 8);
          *pbVar17 = *pbVar17 + (byte)pbVar17;
          puVar60 = unaff_EDI;
          in_SS = in_ES;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      settingsAquirer =
           (byte *)CONCAT31((int3)((uint)settingsAquirer >> 8),
                            (byte)settingsAquirer |
                            *(byte *)((int)(puVar28 + 0xa004000) + (int)unaff_EDI));
      puVar60 = puVar57;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
    bVar6 = bVar6 + 0x37;
    piVar16 = (int *)CONCAT31(uVar23,bVar6);
    puVar57[(int)unaff_EDI * 2] =
         (uint)((int)puVar28 + (uint)(0xd2 < bVar7) + puVar57[(int)unaff_EDI * 2]);
    pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
    uVar14 = *puVar57;
    *(byte *)puVar57 = (byte)*puVar57 + bVar6;
    puVar60 = puVar57;
    if (!CARRY1((byte)uVar14,bVar6)) goto code_r0x0040355b;
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    bVar6 = bVar6 | *(byte *)((int)piVar16 + 0x4000043);
    pbVar17 = (byte *)CONCAT31(uVar23,bVar6);
    if ((char)bVar6 < '\x01') {
      *pbVar17 = *pbVar17 + bVar6;
      unaff_EBP = unaff_EBP + -*(int *)((int)unaff_EDI + -0x5d);
      *pbVar17 = *pbVar17 + bVar6;
      uStack_1c = (undefined4 *)((uint)uStack_1c._2_2_ << 0x10);
      piVar16 = (int *)CONCAT31(uVar23,bVar6 - *pbVar17);
      puVar57 = (uint *)((int)puVar57 + (-(uint)(bVar6 < *pbVar17) - *piVar16));
      pbVar17 = (byte *)CONCAT31(uVar23,(bVar6 - *pbVar17) + (char)*piVar16);
      pbStack_14 = (byte *)0x17000000;
      puVar60 = unaff_EDI;
code_r0x00403615:
      bVar7 = *pbVar17;
      bVar6 = (byte)pbVar17;
      *pbVar17 = *pbVar17 + bVar6;
      *puVar28 = (uint)(pbVar17 + (uint)CARRY1(bVar7,bVar6) + *puVar28);
      unaff_EDI = puVar60;
      if ((POPCOUNT(*puVar28 & 0xff) & 1U) == 0) {
        *pbVar17 = *pbVar17 + bVar6;
        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar6 + 0x28);
        unaff_EDI = puVar60 + 1;
        uVar14 = in((short)puVar28);
        *puVar60 = uVar14;
        *pcVar15 = *pcVar15 + bVar6 + 0x28;
        settingsAquirer =
             (byte *)CONCAT22((short)((uint)settingsAquirer >> 0x10),
                              CONCAT11((byte)((uint)settingsAquirer >> 8) |
                                       unaff_EBX[(int)settingsAquirer],(char)settingsAquirer));
        pcVar15[0x28] = pcVar15[0x28] + (char)((uint)puVar28 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar17 = *pbVar17 + bVar6;
    uVar14 = CONCAT31(uVar23,bVar6 + 0xb);
    piVar16 = (int *)(uVar14 - *puVar57);
    if (uVar14 < *puVar57) {
      cVar27 = (char)piVar16;
      *(char *)piVar16 = (char)*piVar16 + cVar27;
      uVar61 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar32 = (char)unaff_EBX;
      bVar7 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)puVar28 + 2);
      *unaff_EBP = *unaff_EBP - cVar32;
      *(byte *)puVar57 = (byte)*puVar57 + cVar27;
      uStack_1c = (undefined4 *)CONCAT22(uStack_1c._2_2_,in_ES);
      unaff_EBX = (byte *)CONCAT22(uVar61,CONCAT11(bVar7 + *(char *)(CONCAT22(uVar61,CONCAT11(bVar7,
                                                  cVar32)) + 0x38),cVar32));
      *(char *)piVar16 = (char)*piVar16 + cVar27;
      pcVar15 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cVar27 + 'o');
      *(byte *)puVar28 = (byte)*puVar28 + (char)settingsAquirer;
      *pcVar15 = *pcVar15 - cVar32;
      *pcVar15 = *pcVar15 + cVar27 + 'o';
      unaff_EDI = (uint *)((int)unaff_EDI - puVar57[0x11]);
      goto code_r0x004035e5;
    }
    puVar60 = puVar57 + 1;
    out(*puVar57,(short)puVar28);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar6) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_14 & 0x4000) != 0;
  bVar64 = ((uint)pbStack_14 & 0x400) != 0;
  in_IF = ((uint)pbStack_14 & 0x200) != 0;
  in_TF = ((uint)pbStack_14 & 0x100) != 0;
  in_AF = ((uint)pbStack_14 & 0x10) != 0;
  in_ID = ((uint)pbStack_14 & 0x200000) != 0;
  in_AC = ((uint)pbStack_14 & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar27 = (char)pcVar15;
  *pcVar15 = *pcVar15 + cVar27;
  settingsAquirer =
       (byte *)CONCAT22((short)((uint)settingsAquirer >> 0x10),
                        CONCAT11((byte)((uint)settingsAquirer >> 8) | (byte)*puVar28,
                                 (char)settingsAquirer));
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x3e],
                                        (char)unaff_EBX));
  *pcVar15 = *pcVar15 + cVar27;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar27 + '(');
  cVar27 = (char)((uint)puVar28 >> 8);
  *(byte *)((int)puVar28 + 0x21) = *(byte *)((int)puVar28 + 0x21) + cVar27;
  pbVar19 = pbVar17 + 2;
  *pbVar19 = *pbVar19 + cVar27;
  bVar7 = *pbVar19;
code_r0x00403643:
  cVar27 = (char)pbVar17;
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *pbVar17 = *pbVar17 + cVar27;
    uVar23 = (undefined3)((uint)pbVar17 >> 8);
    cVar32 = cVar27 + '(';
    pcVar15 = (char *)CONCAT31(uVar23,cVar32);
    in_AF = ((uint)pbVar17 & 0x1000) != 0;
    *pcVar15 = *pcVar15 + cVar32;
    puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(byte)puVar28 | (byte)*puVar57);
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar57 + 0x3f),(char)unaff_EBX));
    *pcVar15 = *pcVar15 + cVar32;
    pbVar17 = (byte *)CONCAT31(uVar23,cVar27 + 'M');
    puVar28 = (uint *)((uint)puVar28 | *puVar28);
    *pbVar17 = *pbVar17 + (char)((uint)settingsAquirer >> 8);
code_r0x00403659:
    puVar60 = (uint *)((int)unaff_EDI + (uint)bVar64 * -2 + 1);
    bVar7 = (byte)pbVar17;
    *(byte *)unaff_EDI = bVar7;
    *pbVar17 = *pbVar17 + bVar7;
    uVar23 = (undefined3)((uint)pbVar17 >> 8);
    bVar7 = bVar7 | (byte)*puVar28;
    pcVar15 = (char *)CONCAT31(uVar23,bVar7);
    unaff_EDI = puVar60;
    if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x0040369e;
    *pcVar15 = *pcVar15 + bVar7;
    bVar7 = bVar7 + 2;
    *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
    *(byte *)puVar57 = (byte)*puVar57 + bVar7;
    puVar58 = puVar57 + (uint)bVar64 * -2 + 1;
    out(*puVar57,(short)puVar28);
    unaff_EDI = (uint *)((int)puVar60 + (uint)bVar64 * -2 + 1);
    puVar57 = (uint *)((int)puVar58 + (uint)bVar64 * -2 + 1);
    *(byte *)puVar60 = (byte)*puVar58;
    *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
    cVar32 = (char)((uint)settingsAquirer >> 8);
    unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar32;
    cVar27 = (bVar7 | (byte)*puVar57) - 6;
    piVar16 = (int *)CONCAT31(uVar23,cVar27);
    pcVar15 = (char *)((int)piVar16 * 2 + 0x2adc0a00);
    *pcVar15 = *pcVar15 - cVar32;
    *piVar16 = (int)(*piVar16 + (int)puVar28);
    *(char *)piVar16 = (char)*piVar16 + cVar27;
    bVar7 = cVar27 + (char)*piVar16;
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar14 = CONCAT31(uVar23,bVar7 + in_AF * '\x06') & 0xffffff0f;
    pbVar17 = (byte *)CONCAT22((short)(uVar14 >> 0x10),
                               CONCAT11((char)((uint)pbVar17 >> 8) + in_AF,(char)uVar14));
    pbVar19 = settingsAquirer;
  }
  else {
    *(byte *)puVar28 = (byte)*puVar28 + cVar27;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + (char)((uint)puVar28 >> 8);
    pbVar19 = settingsAquirer;
  }
  *(byte *)puVar57 = (byte)*puVar57 + (char)((uint)pbVar17 >> 8);
  *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar19;
  bVar6 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  bVar7 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  settingsAquirer = pbVar19;
  unaff_EBP = pbStack_14;
  if (!CARRY1(bVar7,bVar6)) goto code_r0x004036a6;
  *pbVar17 = *pbVar17 + bVar6;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar6 | pbVar17[0x400003f]);
  settingsAquirer =
       (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),
                        (char)pbVar19 - *(byte *)((int)puVar28 + 0x5040302));
  *(char *)((int)pbVar17 * 2) = *(char *)((int)pbVar17 * 2) - (char)((uint)pbVar19 >> 8);
  while( true ) {
code_r0x004036a6:
    settingsAquirer =
         (byte *)CONCAT31((int3)((uint)settingsAquirer >> 8),(char)settingsAquirer + (byte)*puVar57)
    ;
    pbVar17 = (byte *)(CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + '%') + 0x1ebd9f3);
    uStack_1c = (undefined4 *)CONCAT22(uStack_1c._2_2_,in_ES);
    bVar7 = (byte)pbVar17;
    bVar63 = CARRY1(*pbVar17,bVar7);
    *pbVar17 = *pbVar17 + bVar7;
    puVar36 = uStack_1c + -1;
    *(undefined2 *)(uStack_1c + -1) = in_ES;
    cVar27 = (char)puVar28;
    if (bVar63) {
      *pbVar17 = *pbVar17 + bVar7;
      uVar61 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar8 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x47];
      pcVar15 = (char *)CONCAT22(uVar61,CONCAT11(bVar8,(char)unaff_EBX));
      *pbVar17 = *pbVar17 + bVar7;
      uVar23 = (undefined3)((uint)pbVar17 >> 8);
      bVar7 = bVar7 + 0x2a;
      *pcVar15 = *pcVar15 + cVar27;
      pbVar17 = (byte *)((int)CONCAT31(uVar23,bVar7) * 2);
      *pbVar17 = *pbVar17 ^ bVar7;
      bVar7 = bVar7 ^ *(byte *)CONCAT31(uVar23,bVar7);
      pbVar17 = (byte *)CONCAT31(uVar23,bVar7);
      bVar6 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar7;
      *pbVar17 = (*pbVar17 - bVar7) - CARRY1(bVar6,bVar7);
      *settingsAquirer = *settingsAquirer + cVar27;
      unaff_EBX = (byte *)CONCAT22(uVar61,CONCAT11(bVar8 + pcVar15[0x38],(char)unaff_EBX));
      *pbVar17 = *pbVar17 + bVar7;
      cVar32 = bVar7 + 2;
      if ((POPCOUNT(cVar32) & 1U) != 0) {
        pcVar1 = (code *)swi(7);
        uVar66 = (*pcVar1)();
        pbVar17 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar23,cVar32) = *(char *)CONCAT31(uVar23,cVar32) + cVar32;
      bVar7 = bVar7 + 0x71;
      pbVar17 = (byte *)CONCAT31(uVar23,bVar7);
      in_SS = *(undefined2 *)(uStack_1c + -1);
      *pbVar17 = *pbVar17 + bVar7;
      iVar13 = (int)settingsAquirer - *puVar28;
      settingsAquirer =
           (byte *)CONCAT22((short)((uint)iVar13 >> 0x10),
                            CONCAT11((char)((uint)iVar13 >> 8) + *pbVar17,(char)iVar13));
      unaff_EBP = (byte *)*uStack_1c;
      bVar63 = CARRY1(*pbVar17,bVar7);
      *pbVar17 = *pbVar17 + bVar7;
      *(undefined2 *)uStack_1c = in_ES;
      *(undefined2 *)(uStack_1c + -1) = in_ES;
    }
    bVar7 = (byte)pbVar17;
    uVar23 = (undefined3)((uint)pbVar17 >> 8);
    if (bVar63) break;
    *(byte *)puVar28 = (byte)*puVar28 + (byte)settingsAquirer;
    *(byte *)((int)puVar28 + (int)unaff_EBP) = *(byte *)((int)puVar28 + (int)unaff_EBP) + bVar7;
    pcVar15 = (char *)CONCAT31(uVar23,(byte)*puVar28);
code_r0x0040369e:
    pbVar17 = (byte *)(pcVar15 + *(int *)(pcVar15 + 0x6c28));
  }
  *pbVar17 = *pbVar17 + bVar7;
  uVar24 = (uint3)((uint)settingsAquirer >> 8);
  pbVar19 = (byte *)CONCAT31(uVar24,(byte)settingsAquirer | *unaff_EBX);
  in_SS = *(undefined2 *)uStack_1c;
  puVar36 = uStack_1c + 1;
  puVar60 = puVar57 + (uint)bVar64 * -2 + 1;
  out(*puVar57,(short)puVar28);
  unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar64 * -2 + 1);
  *pbVar17 = *pbVar17 + bVar7;
  bVar7 = bVar7 | (byte)*unaff_EDI;
  pbVar17 = (byte *)CONCAT31(uVar23,bVar7);
  *(byte *)(unaff_EDI + 0x1bc28000) =
       (byte)unaff_EDI[0x1bc28000] - (char)((uint)settingsAquirer >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar7);
  *(undefined2 *)uStack_1c = pbStack_14._0_2_;
  cVar32 = (char)unaff_EBX;
  cVar9 = cVar32 - (byte)*puVar28;
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar9);
  if (cVar9 != '\0' && (char)(byte)*puVar28 <= cVar32) {
    *pbVar17 = *pbVar17 + bVar7;
    iVar13 = CONCAT31(uVar23,bVar7 + 0x2a);
    puVar57 = (uint *)((int)puVar60 + 1);
    cVar32 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + -0x7b);
    uVar66 = CONCAT44(CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar32,cVar27)),iVar13);
    in_ES = *(undefined2 *)uStack_1c;
    pcVar15 = (char *)(iVar13 + 0x6f);
    *pcVar15 = *pcVar15 + cVar32;
    pbVar19 = (byte *)((uint)uVar24 << 8);
    do {
      piVar16 = (int *)((ulonglong)uVar66 >> 0x20);
      pcVar15 = (char *)uVar66;
      *(char *)piVar16 = (char)*piVar16;
      if ((char)*piVar16 == '\0') {
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        pbStack_14._0_2_ = in_ES;
_ctor:
        puVar28 = (uint *)((ulonglong)uVar66 >> 0x20);
        pbVar19 = (byte *)((uint)CONCAT21((short)((uint)pbVar19 >> 0x10),
                                          (char)((uint)pbVar19 >> 8) + *(char *)uVar66) << 8);
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        *(byte *)puVar28 = (byte)*puVar28;
        uVar23 = (undefined3)((ulonglong)uVar66 >> 8);
        bVar6 = (char)uVar66 - *(char *)uVar66;
        pbVar17 = (byte *)CONCAT31(uVar23,bVar6);
        bVar7 = *pbVar17;
        *pbVar17 = *pbVar17 + bVar6;
        puVar60 = (uint *)((int)puVar57 + (uint)CARRY1(bVar7,bVar6) + *(int *)pbVar17);
        pbVar17 = (byte *)CONCAT31(uVar23,bVar6);
        uStack_1c = puVar36;
        break;
      }
      *pcVar15 = *pcVar15 + (char)uVar66;
      *piVar16 = (int)(unaff_EBP + *piVar16);
      puVar57 = (uint *)((int)puVar57 + 1);
      uVar66 = CONCAT44(CONCAT22((short)((ulonglong)uVar66 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar66 >> 0x28) +
                                          *(char *)((int)piVar16 + -0x33),
                                          (char)((ulonglong)uVar66 >> 0x20))),pcVar15);
      in_ES = *(undefined2 *)puVar36;
      puVar36 = (undefined4 *)((int)puVar36 + 4);
      pbVar17 = pbVar19;
code_r0x0040371e:
      puVar28 = (uint *)((ulonglong)uVar66 >> 0x20);
      pbVar59 = (byte *)uVar66;
      bVar6 = (byte)((ulonglong)uVar66 >> 0x28);
      pbVar59[0x6f] = pbVar59[0x6f] + bVar6;
      pbVar19 = (byte *)((uint)pbVar17 & 0xffffff00);
      *(char *)puVar28 = (char)*puVar28;
      bVar7 = (byte)uVar66;
      if ((char)*puVar28 != '\0') {
        *pbVar59 = *pbVar59 + bVar7;
        uVar14 = *puVar28;
        *puVar28 = (uint)(unaff_EBP + *puVar28);
        piVar38 = (int *)((int)puVar36 + -4);
        *(uint **)((int)puVar36 + -4) = puVar57;
        if (CARRY4(uVar14,(uint)unaff_EBP)) {
          *pbVar59 = *pbVar59 + bVar7;
          *(undefined2 *)((int)puVar36 + -8) = in_ES;
          puVar60 = puVar28 + 0x1d028000;
          uVar14 = *puVar60;
          *(byte *)puVar60 = (byte)*puVar60 - bVar6;
          *(uint *)pbVar59 = (*(int *)pbVar59 - (int)pbVar59) - (uint)((byte)uVar14 < bVar6);
          *(byte *)puVar28 = (char)*puVar28 + bVar7;
          *unaff_EBP = *unaff_EBP;
          uVar66 = CONCAT44(puVar28,CONCAT31((int3)((ulonglong)uVar66 >> 8),bVar7 + 0x2a));
          puVar37 = (undefined2 *)((int)puVar36 + -0xc);
          puVar36 = (undefined4 *)((int)puVar36 + -0xc);
          *puVar37 = in_DS;
          pbStack_14._0_2_ = in_ES;
          goto _ctor;
        }
        bVar63 = false;
        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),*pbVar59);
        goto code_r0x004037a7;
      }
      bVar6 = *pbVar59;
      *pbVar59 = *pbVar59 + bVar7;
      *(uint *)pbVar59 = (*(int *)pbVar59 - (int)pbVar59) - (uint)CARRY1(bVar6,bVar7);
      bVar7 = *pbVar19;
      bVar6 = (byte)((ulonglong)uVar66 >> 0x20);
      *pbVar19 = *pbVar19 + bVar6;
      if (CARRY1(bVar7,bVar6)) goto code_r0x0040375a;
    } while( true );
  }
  uVar66 = CONCAT44(puVar28,pbVar17);
  puVar57 = puVar60 + (uint)bVar64 * -2 + 1;
  out(*puVar60,(short)puVar28);
  bVar6 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  *pbVar19 = *pbVar19 + (char)unaff_EBX;
  bVar7 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  *(byte **)(unaff_EBX + -0x49) =
       (byte *)((int)puVar57 + (uint)CARRY1(bVar7,bVar6) + *(int *)(unaff_EBX + -0x49));
  puVar36 = uStack_1c;
  in_ES = pbStack_14._0_2_;
code_r0x0040375a:
  pbVar17 = (byte *)uVar66;
  *pbVar17 = *pbVar17 + (char)uVar66;
  bVar63 = CARRY1((byte)((uint)pbVar19 >> 8),*pbVar17);
  *(undefined2 *)((int)puVar36 + -4) = in_SS;
  iVar13 = CONCAT31(0x1f0a00,bVar63 + 'o') + *(int *)(unaff_EBX + (int)unaff_EBP) +
           (uint)(0x90 < bVar63) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar66 >> 0x20);
  pcVar18 = (char *)(CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + -0x66) | *unaff_EDI);
  bVar7 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar15 = (char *)CONCAT22(0xd0a,(ushort)bVar7 << 8);
  *pcVar18 = *pcVar18 + (char)pcVar18;
  bVar6 = (byte)((ulonglong)uVar66 >> 0x20);
  puVar29 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar66 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar66 >> 0x28) | unaff_EBX[(int)unaff_EBP],bVar6));
  *pcVar15 = *pcVar15 + (char)pcVar18;
  *unaff_EBP = *unaff_EBP - bVar7;
  *puVar29 = *puVar29;
  pbVar17 = (byte *)(((uint)pcVar18 | 8) + 0x4490f9d8);
  bVar7 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar7;
  uVar14 = *puVar57;
  *(uint *)((int)puVar57 + (int)pbVar17) = *(uint *)((int)puVar57 + (int)pbVar17) ^ (uint)pcVar15;
  *pbVar17 = *pbVar17 | bVar7;
  piVar38 = (int *)0x2609fffc;
  bVar63 = false;
  uRam2609fffc = in_ES;
  *pbVar17 = *pbVar17 | bVar7;
  uVar66 = CONCAT44(CONCAT31((int3)((uint)puVar29 >> 8),bVar6 | (byte)uVar14),pbVar17);
code_r0x004037a7:
  while( true ) {
    pbVar17 = (byte *)((ulonglong)uVar66 >> 0x20);
    uVar61 = (undefined2)((ulonglong)uVar66 >> 0x20);
    out(*puVar57,uVar61);
    out(puVar57[(uint)bVar64 * -2 + 1],uVar61);
    puVar28 = (uint *)((int)unaff_EDI + (int)pbVar17);
    uVar14 = *puVar28;
    uVar4 = (uint)uVar66 + *puVar28;
    *puVar28 = uVar4 + bVar63;
    iVar13 = *piVar38 + *(int *)(pcVar15 + (int)pbVar17) +
             (uint)(CARRY4(uVar14,(uint)uVar66) || CARRY4(uVar4,(uint)bVar63));
    cVar27 = (char)iVar13 + '\t';
    pbVar19 = (byte *)CONCAT31((int3)((uint)iVar13 >> 8),cVar27);
    pcVar18 = (char *)((uint)bVar64 * -8 + 0x260a0004);
    out(uRam260a0000,uVar61);
    uVar61 = (undefined2)piVar38[1];
    *pbVar19 = *pbVar19 + cVar27;
    bVar6 = (byte)((uint)pcVar15 >> 8) | *pbVar17;
    *(undefined2 *)(piVar38 + 1) = in_DS;
    bVar7 = *pbVar19;
    pbVar19 = pbVar19 + (uint)CARRY1(bVar6,*pbVar19) + *(int *)pbVar19;
    *pbVar17 = *pbVar17 + 6;
    cVar32 = (char)unaff_EBX - *pcVar18;
    pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),CONCAT11(bVar6 + bVar7 + *pbVar19,6));
    *pbVar19 = *pbVar19;
    *(undefined2 *)piVar38 = in_ES;
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    cVar27 = (char)pbVar19 - *pbVar19;
    piVar16 = (int *)CONCAT31(uVar23,cVar27);
    puVar57 = (uint *)(pcVar18 + *piVar16);
    bVar7 = cVar27 + (char)*piVar16;
    pcVar18 = (char *)CONCAT31(uVar23,bVar7);
    piVar39 = piVar38 + -1;
    piVar38[-1] = (int)pcVar15;
    *pcVar18 = *pcVar18 + bVar7;
    *pcVar18 = *pcVar18 + bVar7;
    *pcVar18 = *pcVar18 + bVar7;
    bVar63 = CARRY1(*pbVar17,bVar7);
    *pbVar17 = *pbVar17 + bVar7;
    if (bVar63) break;
    in_ES = (undefined2)piVar38[-1];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar32);
    uVar66 = CONCAT44(pbVar17,pcVar18);
  }
  *pcVar18 = *pcVar18 + bVar7;
  pbVar31 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam080a0056,cVar32));
  *pcVar18 = *pcVar18 + bVar7;
  bVar8 = bVar7 + 2;
  *pbVar31 = *pbVar31 - (char)((ulonglong)uVar66 >> 0x20);
  *(char *)CONCAT31(uVar23,bVar8) = *(char *)CONCAT31(uVar23,bVar8) + bVar8;
  uVar14 = *puVar57;
  uVar26 = (undefined3)((uint)pcVar15 >> 8);
  pbVar19 = (byte *)(CONCAT31(uVar26,(byte)uVar14) | 6);
  bVar6 = 9 < (bVar7 + 0x74 & 0xf) | in_AF;
  bVar10 = bVar7 + 0x74 + bVar6 * '\x06';
  bVar10 = bVar10 + (0x90 < (bVar10 & 0xf0) | 0x8d < bVar8 | bVar6 * (0xf9 < bVar10)) * '`';
  pbVar59 = (byte *)CONCAT31(uVar23,bVar10);
  bVar7 = *pbVar59;
  *pbVar59 = *pbVar59 + bVar10;
  if (!SCARRY1(bVar7,bVar10)) {
    *(byte *)puVar57 = (byte)*puVar57 + bVar10;
    puVar57 = (uint *)((int)puVar57 + *(int *)(pbVar17 + 0x33));
    *pbVar59 = *pbVar59 | bVar10;
    *(byte *)puVar57 = (byte)*puVar57 + bVar10;
    bVar7 = bVar10 + 0x72;
    piVar38[-2] = (int)pbVar31;
    *(byte *)CONCAT31(uVar23,bVar7) = *(byte *)CONCAT31(uVar23,bVar7) | bVar7;
    *(byte *)puVar57 = (byte)*puVar57 + bVar7;
    pbVar19 = (byte *)CONCAT31(uVar26,((byte)uVar14 | 6) + (byte)*puVar57);
    pcVar15 = (char *)CONCAT31(uVar23,bVar10 - 0x11);
    piVar39 = piVar38 + -3;
    piVar38[-3] = (int)pbVar19;
    *pcVar15 = *pcVar15 + (bVar10 - 0x11);
    pbVar59 = (byte *)CONCAT31(uVar23,bVar10 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar59 = *pbVar59 + (bVar10 - 0xf);
  }
code_r0x00403825:
  pbVar56 = (byte *)0x80a0000;
  uVar23 = (undefined3)((uint)pbVar59 >> 8);
  cVar27 = (char)pbVar59 + '\x7f';
  pcVar15 = (char *)CONCAT31(uVar23,cVar27);
  *(byte **)((int)piVar39 + -4) = pbVar31;
  *pcVar15 = *pcVar15 + cVar27;
  iVar13 = CONCAT31(uVar23,(char)pbVar59 + -0x7f) + 0x547d;
  cVar32 = (char)iVar13;
  uVar23 = (undefined3)((uint)iVar13 >> 8);
  cVar27 = cVar32 + '*';
  pcVar15 = (char *)CONCAT31(uVar23,cVar27);
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | (byte)*puVar57);
  cVar9 = (char)pbVar31 - (byte)*puVar57;
  uVar62 = (undefined2)((uint)pbVar31 >> 0x10);
  cVar33 = (char)((uint)pbVar31 >> 8) + *(char *)(CONCAT31((int3)((uint)pbVar31 >> 8),cVar9) + 0x57)
  ;
  *pcVar15 = *pcVar15 + cVar27;
  bVar7 = cVar32 + 0x54U & *pbVar17;
  iVar13 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
  pcVar15 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
  *(undefined2 *)((int)piVar39 + -8) = in_DS;
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,cVar9)) + 0x58);
  *pcVar15 = *pcVar15 + bVar7 + 0x2a;
  bVar8 = bVar7 + 0x54 & *pbVar17;
  iVar3 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar23,bVar8) = *(char *)CONCAT31(uVar23,bVar8) + bVar8;
  pcVar15 = (char *)CONCAT31(uVar23,bVar8 + 0x2a);
  pbVar59 = *(byte **)((int)piVar39 + -8);
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,cVar9)) + 0x55);
  *pcVar15 = *pcVar15 + bVar8 + 0x2a;
  pcVar15 = (char *)CONCAT31(uVar23,bVar8 + 0x57);
  pbVar17 = pbVar17 + *(int *)pbVar59;
  *(undefined4 *)((int)piVar39 + -8) = 0x2a;
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,cVar9)) + 0x55);
  *pcVar15 = *pcVar15 + bVar8 + 0x57;
  cVar27 = bVar8 - 0x3a;
  pcVar15 = (char *)CONCAT31(uVar23,cVar27);
  *(undefined2 *)((int)piVar39 + -0xc) = uVar61;
  *pcVar15 = *pcVar15 + cVar27;
  bVar7 = *pbVar17;
  cVar32 = (char)pbVar19;
  *(undefined2 *)((int)piVar39 + -0x10) = in_DS;
  pbVar31 = (byte *)CONCAT22(uVar62,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,
                                                  cVar9)) + 0x59),cVar9));
  *pcVar15 = *pcVar15 + cVar27;
  bVar11 = bVar8 - 0x10 & *pbVar17;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar3 + iVar13);
  *(char *)CONCAT31(uVar23,bVar11) = *(char *)CONCAT31(uVar23,bVar11) + bVar11;
  bVar11 = bVar11 + 0x2a;
  pbVar21 = (byte *)CONCAT31(uVar23,bVar11);
  puVar36 = (undefined4 *)((int)piVar39 + -0x14);
  *(undefined2 *)((int)piVar39 + -0x14) = in_DS;
  bVar8 = *(byte *)((int)unaff_EDI + 0x17);
  *pbVar21 = *pbVar21 + bVar11;
  bVar10 = *pbVar17;
  puVar41 = (undefined4 *)((int)piVar39 + -0x18);
  *(undefined2 *)((int)piVar39 + -0x18) = in_DS;
  bVar12 = *(byte *)((int)unaff_EDI + 0x1a);
  *pbVar21 = *pbVar21 + bVar11;
  pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar19 >> 8) | bVar7) + bVar8 | bVar10) +
                                      bVar12 | *pbVar17,cVar32));
  *pbVar31 = *pbVar31 + cVar9;
  *(byte *)((int)pbVar21 * 2) = *(byte *)((int)pbVar21 * 2) ^ bVar11;
  bVar7 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar11;
  bVar8 = *pbVar21;
  *pbVar19 = *pbVar19 + (char)pbVar17;
  bVar7 = ((bVar11 - bVar8) - CARRY1(bVar7,bVar11)) + *pbVar17;
  pbVar21 = (byte *)CONCAT31(uVar23,bVar7);
  if ((POPCOUNT(bVar7) & 1U) != 0) {
    pbVar17 = *(byte **)((int)piVar39 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar21 = *pbVar21 + bVar7;
  cVar27 = (bVar7 + 0x6f) - (0x90 < bVar7);
  pbVar20 = (byte *)CONCAT31(uVar23,cVar27);
  bVar7 = *pbVar17;
  *pbVar17 = *pbVar17 + cVar32;
  if (SCARRY1(bVar7,cVar32) == (char)*pbVar17 < '\0') {
    cRam33100000 = cRam33100000 - cVar27;
    cVar27 = cVar27 + *pbVar17;
    pbVar21 = (byte *)CONCAT31(uVar23,cVar27);
    puVar36 = (undefined4 *)((int)piVar39 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar20 = *pbVar20 + (char)pbVar20;
code_r0x004038b0:
    uVar23 = (undefined3)((uint)pbVar20 >> 8);
    cVar27 = (char)pbVar20 + '\x02';
    pbVar21 = (byte *)CONCAT31(uVar23,cVar27);
    puVar36 = puVar41;
    if ((POPCOUNT(cVar27) & 1U) != 0) {
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar59);
      cVar27 = (char)pbVar21 + *pbVar17;
      pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar27);
code_r0x0040390c:
      cVar32 = (char)pbVar21;
      if ((POPCOUNT(cVar27) & 1U) == 0) goto code_r0x0040390e;
      *pbVar59 = *pbVar59 + cVar32;
      goto code_r0x00403962;
    }
    *pbVar21 = *pbVar21 + cVar27;
    puVar36 = (undefined4 *)((int)puVar41 + -4);
    piVar39 = (int *)((int)puVar41 + -4);
    *(byte **)((int)puVar41 + -4) = pbVar19;
    cVar27 = (char)pbVar20 + '.' + *pbVar17;
    pbVar21 = (byte *)CONCAT31(uVar23,cVar27);
    if ((POPCOUNT(cVar27) & 1U) != 0) {
      pbVar20 = pbVar17 + (int)pbVar21;
      *pbVar20 = *pbVar20 + cVar27;
      bVar7 = *pbVar20;
      goto code_r0x00403912;
    }
    *pbVar21 = *pbVar21 + cVar27;
    bVar7 = cVar27 + 2;
    pbVar21 = (byte *)CONCAT31(uVar23,bVar7);
    puVar36 = (undefined4 *)((int)puVar41 + -4);
    if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403916;
    *pbVar21 = *pbVar21 + bVar7;
    cVar32 = cVar27 + 'q';
    piVar16 = (int *)CONCAT31(uVar23,cVar32);
    *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0x90 < bVar7);
    bVar7 = *pbVar31;
    bVar8 = (byte)((uint)pbVar19 >> 8);
    *pbVar31 = *pbVar31 + bVar8;
    if (!CARRY1(bVar7,bVar8)) {
      out(*(undefined4 *)pbVar59,(short)pbVar17);
      bVar7 = (cVar32 - (char)*piVar16) - CARRY1(bVar7,bVar8);
      *pbVar17 = *pbVar17 + (char)pbVar19;
      cVar27 = bVar7 - *(byte *)CONCAT31(uVar23,bVar7);
      puVar57 = (uint *)(pbVar59 +
                        ((((uint)bVar64 * -8 + 4) - *(int *)CONCAT31(uVar23,cVar27)) -
                        (uint)(bVar7 < *(byte *)CONCAT31(uVar23,bVar7))));
      pbVar59 = (byte *)CONCAT31(uVar23,cVar27);
      goto code_r0x00403825;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar32;
    uVar62 = (undefined2)((uint)pbVar31 >> 0x10);
    bVar7 = (byte)((uint)pbVar31 >> 8) | bRam080a0056;
    *(char *)piVar16 = (char)*piVar16 + cVar32;
    pcVar15 = (char *)CONCAT31(uVar23,cVar27 + 's');
    pbVar31 = (byte *)CONCAT22(uVar62,CONCAT11(bVar7 + *(char *)(CONCAT22(uVar62,CONCAT11(bVar7,(
                                                  char)pbVar31)) + 0x56),(char)pbVar31));
    *pcVar15 = *pcVar15 + cVar27 + 's';
    bVar7 = cVar27 - 0xf;
    pbVar17 = *(byte **)((int)puVar41 + -4);
    *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
    bVar8 = cVar27 + 0x1e;
    pbVar20 = (byte *)CONCAT31(uVar23,bVar8);
    *(byte **)(pbVar59 + (int)unaff_EDI * 8) =
         pbVar17 + (uint)(0xd2 < bVar7) + *(int *)(pbVar59 + (int)unaff_EDI * 8);
    puVar36 = (undefined4 *)((int)puVar41 + -4);
    puVar43 = (undefined4 *)((int)puVar41 + -4);
    *(undefined2 *)((int)puVar41 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar20;
    bVar7 = *pbVar59;
    *pbVar59 = *pbVar59 + bVar8;
    if (CARRY1(bVar7,bVar8)) {
      *pbVar20 = *pbVar20 + bVar8;
      pbVar21 = (byte *)CONCAT31(uVar23,bVar8 | pbVar20[0x400005a]);
      if ('\0' < (char)(bVar8 | pbVar20[0x400005a])) {
code_r0x004038f6:
        bVar7 = (byte)pbVar21;
        *pbVar21 = *pbVar21 + bVar7;
        uVar23 = (undefined3)((uint)pbVar21 >> 8);
        cVar27 = ((bVar7 + 0x28) - *(char *)CONCAT31(uVar23,bVar7 + 0x28)) - (0xd7 < bVar7);
        pbVar21 = (byte *)CONCAT31(uVar23,cVar27);
        bVar7 = *pbVar31;
        bVar8 = (byte)((uint)pbVar19 >> 8);
        *pbVar31 = *pbVar31 + bVar8;
        if (CARRY1(bVar7,bVar8)) {
          *pbVar21 = *pbVar21 + cVar27;
          pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar21,(char)pbVar19));
          *pbVar59 = *pbVar59 + cVar27;
          goto code_r0x00403908;
        }
        pbVar20 = pbVar21 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar23 = (undefined3)((uint)pbVar21 >> 8);
      bVar8 = (char)pbVar21 + 0x6f;
      bVar7 = *(byte *)CONCAT31(uVar23,bVar8);
      *pbVar17 = *pbVar17 + (char)pbVar19;
      pbVar21 = (byte *)CONCAT31(uVar23,(bVar8 & bVar7) + *pbVar59);
      *pbVar19 = *pbVar19 - (char)((uint)pbVar17 >> 8);
      puVar48 = puVar43;
      goto code_r0x0040395a;
    }
    puVar40 = (undefined4 *)((int)puVar41 + -8);
    puVar41 = (undefined4 *)((int)puVar41 + -8);
    *puVar40 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar16 = (char)*piVar16 + bVar7;
  puVar57 = puVar60;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar21 = *pbVar21 + cVar32;
  bVar7 = cVar32 + 2;
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar7);
code_r0x00403912:
  bVar63 = (POPCOUNT(bVar7) & 1U) == 0;
  puVar48 = puVar36;
  if (!bVar63) goto code_r0x00403967;
  *pbVar21 = *pbVar21 + (char)pbVar21;
code_r0x00403916:
  bVar12 = (char)pbVar21 + 0x6f;
  pbVar20 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar21 >> 8),bVar12);
  bVar10 = *pbVar20;
  *pbVar20 = *pbVar20 + bVar12;
  bVar8 = *pbVar20;
  bVar7 = *pbVar20;
  puVar48 = (undefined4 *)((int)puVar36 + -4);
  *(undefined2 *)((int)puVar36 + -4) = in_ES;
  if (bVar7 == 0 || SCARRY1(bVar10,bVar12) != (char)bVar8 < '\0') goto code_r0x00403979;
  *pbVar20 = *pbVar20 + bVar12;
  pbVar20 = (byte *)CONCAT31((int3)(char)((uint)pbVar21 >> 8),(char)pbVar21 + -100);
  *(byte **)(pbVar59 + (int)unaff_EDI * 8) =
       pbVar17 + (uint)(0xd2 < bVar12) + *(int *)(pbVar59 + (int)unaff_EDI * 8);
  puVar42 = (undefined2 *)((int)puVar36 + -8);
  puVar36 = (undefined4 *)((int)puVar36 + -8);
  *puVar42 = in_ES;
code_r0x00403926:
  puVar41 = puVar36 + 1;
  puVar48 = puVar36 + 1;
  puVar43 = puVar36 + 1;
  *(undefined4 *)pbVar20 = *puVar36;
  bVar7 = *pbVar59;
  bVar8 = (byte)pbVar20;
  *pbVar59 = *pbVar59 + bVar8;
  if (CARRY1(bVar7,bVar8)) {
    *pbVar20 = *pbVar20 + bVar8;
    uVar23 = (undefined3)((uint)pbVar20 >> 8);
    bVar8 = bVar8 | pbVar20[0x400005b];
    pbVar21 = (byte *)CONCAT31(uVar23,bVar8);
    pbVar20 = pbVar59;
    if ((char)bVar8 < '\x01') goto code_r0x00403991;
    *pbVar21 = *pbVar21 + bVar8;
    cVar27 = bVar8 + 0x28;
    pbVar21 = (byte *)CONCAT31(uVar23,cVar27);
    *(byte **)pbVar21 = pbVar21 + (uint)(0xd7 < bVar8) + *(int *)pbVar21;
    bVar7 = *pbVar31;
    bVar8 = (byte)((uint)pbVar19 >> 8);
    *pbVar31 = *pbVar31 + bVar8;
    if (CARRY1(bVar7,bVar8)) {
      *pbVar21 = *pbVar21 + cVar27;
      pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                 CONCAT11(bVar8 | *pbVar21,(char)pbVar19));
      *pbVar59 = *pbVar59 + cVar27;
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x55],(char)pbVar31))
      ;
      *pbVar21 = *pbVar21 + cVar27;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar36 = in_ES;
code_r0x00403962:
    puVar48 = (undefined4 *)((int)puVar36 + -4);
    *(undefined2 *)((int)puVar36 + -4) = uVar61;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar21 = *pbVar21 + (char)pbVar21;
  puVar44 = (undefined2 *)((int)puVar48 + -4);
  puVar48 = (undefined4 *)((int)puVar48 + -4);
  *puVar44 = in_ES;
  pbVar17[0x16060000] = pbVar17[0x16060000] - (char)pbVar19;
  pbVar31 = (byte *)((uint)pbVar31 | (uint)pbVar59);
  cVar27 = (char)pbVar21 + '\x02';
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar27);
  bVar63 = (POPCOUNT(cVar27) & 1U) == 0;
code_r0x00403967:
  if (!bVar63) goto code_r0x004039be;
  *pbVar21 = *pbVar21 + (char)pbVar21;
  uVar23 = (undefined3)((uint)pbVar21 >> 8);
  bVar7 = (char)pbVar21 + 0x6f;
  bVar7 = bVar7 & *(byte *)CONCAT31(uVar23,bVar7);
  pbVar20 = (byte *)CONCAT31(uVar23,bVar7);
  *pbVar17 = *pbVar17 + (char)pbVar19;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar7;
code_r0x00403979:
  do {
    bVar7 = (char)pbVar20 - (byte)*unaff_EDI;
    bVar63 = bVar7 < *pbVar19;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar7 - *pbVar19);
    do {
      cVar27 = (char)pbVar21;
      *pbVar21 = *pbVar21 + cVar27 + bVar63;
      *pbVar21 = *pbVar21 + cVar27;
      *pbVar19 = *pbVar19 + (char)pbVar17;
      pbVar19[0x101c00aa] = pbVar19[0x101c00aa] + (char)pbVar31;
      *pbVar21 = *pbVar21 + cVar27;
      *(byte **)pbVar59 = pbVar31 + *(int *)pbVar59;
      bVar7 = (byte)((uint)pbVar19 >> 8);
      pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                 CONCAT11(bVar7 + *pbVar21,(char)pbVar19));
      pbVar21 = pbVar21 + (uint)CARRY1(bVar7,*pbVar21) + *(int *)pbVar21;
      pbVar20 = pbVar59;
code_r0x00403991:
      cVar27 = (char)pbVar19;
      *pbVar17 = *pbVar17 + cVar27;
      cVar32 = (char)pbVar31 - pbVar20[2];
      pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar32);
      pbVar59 = pbVar20;
      if ((POPCOUNT(cVar32) & 1U) != 0) goto code_r0x0040395a;
      *pbVar21 = *pbVar21 + (byte)pbVar21;
      uVar24 = (uint3)((uint)pbVar21 >> 8);
      bVar7 = (byte)pbVar21 | *pbVar31;
      piVar16 = (int *)CONCAT31(uVar24,bVar7);
      bVar8 = (byte)((uint)pbVar19 >> 8);
      bVar10 = (byte)pbVar17;
      if (bVar7 == 0) {
        *(char *)piVar16 = (char)*piVar16;
        puVar48 = (undefined4 *)((int)puVar48 + -*(int *)(pbVar56 + 0x1b000007));
        pbVar59 = pbVar20 + (uint)bVar64 * -8 + 4;
        out(*(undefined4 *)pbVar20,(short)pbVar17);
        pbVar21 = (byte *)((uint)uVar24 << 8);
        *pbVar17 = *pbVar17 + cVar27;
        pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar10 - *pbVar31);
        *pbVar31 = *pbVar31;
        *pbVar17 = *pbVar17 + bVar8;
        *pbVar21 = *pbVar21;
        *pbVar31 = *pbVar31 + cVar32;
        *pbVar21 = *pbVar21;
        *(byte **)(pbVar31 + -0x3d) = pbVar59 + *(int *)(pbVar31 + -0x3d);
        break;
      }
      pbVar56 = pbVar56 + -unaff_EDI[9];
      *(byte *)piVar16 = (char)*piVar16 + bVar7;
      pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),CONCAT11(bVar8 | *pbVar17,cVar27));
      pbVar59 = pbVar20 + *piVar16;
      pcVar15 = (char *)((int)piVar16 + *piVar16);
      bVar8 = (char)pcVar15 - *pcVar15;
      pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar8);
      bVar7 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar8;
      pbVar21 = pbVar21 + (-(uint)CARRY1(bVar7,bVar8) - *(int *)pbVar21);
      bVar63 = CARRY1(*pbVar19,bVar10);
      *pbVar19 = *pbVar19 + bVar10;
    } while (!bVar63);
    *pbVar21 = *pbVar21 + (char)pbVar21;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),(byte)pbVar19 | *pbVar17);
code_r0x004039be:
    puVar36 = (undefined4 *)((int)puVar48 + -4);
    puVar45 = (undefined1 *)((int)puVar48 + -4);
    *(undefined2 *)((int)puVar48 + -4) = in_ES;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar56 + -0x3c));
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    uVar23 = (undefined3)((uint)pbVar21 >> 8);
    bVar7 = (byte)pbVar21 | *pbVar17;
    pcVar15 = (char *)CONCAT31(uVar23,bVar7);
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      cVar27 = *pcVar15;
      *pcVar15 = *pcVar15 + bVar7;
      cVar32 = *pcVar15;
      puVar29 = (undefined1 *)((int)puVar48 + -4);
      if (!SCARRY1(cVar27,bVar7)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar36 = (undefined4 *)puVar29;
      cVar27 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar27;
      uVar23 = (undefined3)((uint)pcVar15 >> 8);
      bVar7 = cVar27 + 2;
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        pcVar15 = (char *)CONCAT31(uVar23,bVar7 + *pbVar17);
        pbVar21 = pbVar59;
        if ((POPCOUNT(bVar7 + *pbVar17) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar59 + (int)unaff_EDI * 8) =
             pbVar17 + (uint)(0xd2 < (byte)pcVar15) + *(int *)(pbVar59 + (int)unaff_EDI * 8);
        puVar47 = (undefined2 *)((int)puVar36 + -4);
        puVar36 = (undefined4 *)((int)puVar36 + -4);
        *puVar47 = in_ES;
        pbVar20 = pbVar56;
        pbVar22 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 + 0x2d);
code_r0x00403ad8:
        pbVar56 = pbVar22;
        bVar7 = *pbVar20;
        bVar8 = (byte)pbVar20;
        *pbVar20 = *pbVar20 + bVar8;
        puVar48 = (undefined4 *)((int)puVar36 + -4);
        *(undefined2 *)((int)puVar36 + -4) = in_ES;
        puVar29 = (undefined1 *)((int)puVar36 + -4);
        if (CARRY1(bVar7,bVar8)) {
          *pbVar20 = *pbVar20 + bVar8;
          bVar8 = bVar8 | pbVar20[0x400005d];
          pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar8);
          pbVar21 = pbVar59;
          if ((char)bVar8 < '\x01') {
            *pbVar20 = *pbVar20 + bVar8;
            pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar19 >> 8) | *pbVar17,(char)pbVar19)
                                      );
            pbVar21 = *(byte **)((int)puVar36 + -4);
            pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                       CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[-0x39],
                                                (char)pbVar31));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar20 = *pbVar20 + (char)pbVar20;
          cVar27 = (char)pbVar20 + '(';
          pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar27);
          *(byte **)pbVar20 = pbVar20 + *(int *)pbVar20;
          bVar7 = *pbVar31;
          bVar8 = (byte)((uint)pbVar19 >> 8);
          *pbVar31 = *pbVar31 + bVar8;
          pbVar59 = pbVar21;
          if (!CARRY1(bVar7,bVar8)) {
            puVar36 = (undefined4 *)((int)puVar48 + -4);
            *(undefined2 *)((int)puVar48 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar20 = *pbVar20 + cVar27;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
      piVar16 = (int *)CONCAT31(uVar23,cVar27 + '*');
      *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0xd7 < bVar7);
      bVar7 = *pbVar17;
      bVar12 = (byte)pbVar19;
      *pbVar17 = *pbVar17 + bVar12;
      out(*(undefined4 *)pbVar59,(short)pbVar17);
      bVar10 = ((cVar27 + '*') - (char)*piVar16) - CARRY1(bVar7,bVar12);
      pbVar21 = (byte *)CONCAT31(uVar23,bVar10);
      *pbVar17 = *pbVar17 + bVar12;
      uVar62 = (undefined2)((uint)pbVar31 >> 0x10);
      uVar30 = SUB41(pbVar31,0);
      cVar27 = (char)((uint)pbVar31 >> 8) - pbVar59[(uint)bVar64 * -8 + 0x1f];
      pbVar31 = (byte *)CONCAT22(uVar62,CONCAT11(cVar27,uVar30));
      *pbVar21 = *pbVar21 + bVar10;
      bVar8 = *pbVar17;
      bVar7 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar10;
      pbVar59 = pbVar59 + ((((uint)bVar64 * -8 + 4) - *(int *)pbVar21) - (uint)CARRY1(bVar7,bVar10))
      ;
      pbVar21 = (byte *)CONCAT31(uVar23,bVar10);
      pbVar19 = (byte *)(CONCAT22((short)((uint)pbVar19 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar19 >> 8) | bVar8,bVar12)) + -1);
      bVar7 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar10;
      bVar7 = (bVar10 - *pbVar21) - CARRY1(bVar7,bVar10);
      *pbVar19 = *pbVar19 + (char)pbVar17;
      bVar63 = CARRY1(bVar7,*pbVar17);
      bVar7 = bVar7 + *pbVar17;
      pbVar21 = (byte *)CONCAT31(uVar23,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar21 = *pbVar21 + bVar7;
        cVar32 = (bVar7 + 0x6f) - (0x90 < bVar7);
        pbVar20 = (byte *)CONCAT31(uVar23,cVar32);
        bVar7 = *pbVar17;
        *pbVar17 = *pbVar17 + (char)pbVar19;
        if (SCARRY1(bVar7,(char)pbVar19) == (char)*pbVar17 < '\0') {
code_r0x00403aaf:
          cVar27 = (char)pbVar20 + '(';
          pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar27);
          *(byte **)pbVar20 = pbVar20 + *(int *)pbVar20;
          bVar7 = *pbVar31;
          bVar8 = (byte)((uint)pbVar19 >> 8);
          *pbVar31 = *pbVar31 + bVar8;
          pbVar22 = pbVar56;
          if (!CARRY1(bVar7,bVar8)) goto code_r0x00403ad8;
          *pbVar20 = *pbVar20 + cVar27;
          pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar31,(char)pbVar19));
          if ((POPCOUNT(*pbVar17 - cVar27) & 1U) != 0) {
            *pbVar59 = *pbVar59 + cVar27;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar20 = *pbVar20 + cVar32;
          pcVar15 = (char *)CONCAT31(uVar23,cVar32 + '\x02');
          bVar8 = cVar27 + pbVar31[0x52];
          pbVar31 = (byte *)CONCAT22(uVar62,CONCAT11(bVar8,uVar30));
          *pcVar15 = *pcVar15 + cVar32 + '\x02';
          bVar7 = cVar32 + 4;
          pbVar20 = (byte *)CONCAT31(uVar23,bVar7);
          if ((POPCOUNT(bVar7) & 1U) == 0) {
            *pbVar20 = *pbVar20 + bVar7;
            cVar27 = (cVar32 + 's') - (0x90 < bVar7);
            pcVar15 = (char *)CONCAT31(uVar23,cVar27);
            bVar7 = (byte)((uint)pbVar19 >> 8);
            bVar63 = CARRY1(*pbVar31,bVar7);
            *pbVar31 = *pbVar31 + bVar7;
            pbVar21 = pbVar59;
            if (bVar63) {
              *pcVar15 = *pcVar15 + cVar27;
              pbVar31 = (byte *)CONCAT22(uVar62,CONCAT11(bVar8 | pbVar56[0x5c],uVar30));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar20);
          pbVar31 = (byte *)CONCAT22(uVar62,CONCAT11(bVar8 + pbVar31[0x52],uVar30));
        }
        *pbVar20 = *pbVar20 + (char)pbVar20;
        cVar27 = (char)pbVar20 + '\x02';
        pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar27);
        bVar63 = (POPCOUNT(cVar27) & 1U) == 0;
        if (!bVar63) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar7 = (byte)pbVar21;
        *pbVar21 = *pbVar21 + bVar7;
        cVar27 = (bVar7 + 0x6f) - (0x90 < bVar7);
        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar27);
        bVar7 = *pbVar31;
        cVar32 = (char)((uint)pbVar19 >> 8);
        *pbVar31 = *pbVar31 + cVar32;
        if (*pbVar31 == 0 || SCARRY1(bVar7,cVar32) != (char)*pbVar31 < '\0') goto code_r0x00403b2c;
        *pcVar15 = *pcVar15 + cVar27;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar63) {
        pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                   CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x53],(char)pbVar31
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar21 = *pbVar21 + (byte)pbVar21;
      bVar7 = (byte)pbVar21 | pbVar21[0x400005e];
      pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar7);
      if ('\0' < (char)bVar7) {
        *pbVar20 = *pbVar20 + bVar7;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar15 = *pcVar15 + bVar7;
    *pbVar59 = *pbVar59 + 1;
    uVar2 = *(undefined6 *)CONCAT31(uVar23,bVar7 + 6);
    pbVar20 = (byte *)uVar2;
    bVar7 = *pbVar17;
    bVar8 = (byte)pbVar19;
    *pbVar17 = *pbVar17 + bVar8;
    if (CARRY1(bVar7,bVar8)) {
      *pbVar20 = *pbVar20 + (char)uVar2;
      bVar10 = (byte)((uint)pbVar19 >> 8) | *pbVar20;
      uVar62 = CONCAT11(bVar10,bVar8);
      pbVar20 = pbVar20 + -*(int *)pbVar20;
      bVar7 = *pbVar31;
      *pbVar31 = *pbVar31 + bVar10;
      if (CARRY1(bVar7,bVar10)) {
        cVar32 = (char)pbVar20;
        *pbVar20 = *pbVar20 + cVar32;
        bVar7 = *pbVar17;
        pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                   CONCAT11((char)((uint)pbVar17 >> 8) - pbVar31[-0x3a],
                                            (char)pbVar17));
        *pbVar20 = *pbVar20 + cVar32;
        uVar35 = (undefined2)((uint)pbVar31 >> 0x10);
        bVar34 = (byte)((uint)pbVar31 >> 8) | pbVar17[0x32];
        pcVar15 = (char *)CONCAT22(uVar35,CONCAT11(bVar34,(char)pbVar31));
        cVar27 = *pcVar15;
        puVar45 = (undefined1 *)((int)puVar48 + -8);
        *(undefined2 *)((int)puVar48 + -8) = in_CS;
        cVar27 = cVar32 + cVar27 + '-';
        pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar27);
        *pbVar20 = *pbVar20;
        *(undefined2 *)((int)puVar48 + -0xc) = in_ES;
        bVar12 = *pbVar17;
        uVar61 = *(undefined2 *)((int)puVar48 + -0xc);
        cVar32 = (char)pbVar31 - *pbVar59;
        bVar11 = *(byte *)((int)unaff_EDI + 0x17);
        *pbVar20 = *pbVar20 + cVar27;
        uVar62 = CONCAT11((bVar10 | bVar7) + bVar11 | *pbVar17,bVar8 - bVar12);
        pbVar31 = (byte *)CONCAT22(uVar35,CONCAT11(bVar34 + *(char *)(CONCAT31((int3)((uint)pcVar15
                                                                                     >> 8),cVar32) +
                                                                     0x4e),cVar32));
        *pbVar20 = *pbVar20 + cVar27;
      }
      pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),uVar62);
      bVar7 = (byte)pbVar20;
      uVar23 = (undefined3)((uint)pbVar20 >> 8);
      pcVar15 = (char *)CONCAT31(uVar23,bVar7 + 0x28);
      *pcVar15 = (*pcVar15 - (bVar7 + 0x28)) - (0xd7 < bVar7);
      *pbVar17 = *pbVar17 + (char)uVar62;
      bVar8 = bVar7 + 0x1b;
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x4f],(char)pbVar31))
      ;
      *(char *)CONCAT31(uVar23,bVar8) = *(char *)CONCAT31(uVar23,bVar8) + bVar8;
      pcVar18 = (char *)CONCAT31(uVar23,bVar7 + 0x43);
      *pcVar18 = (*pcVar18 - (bVar7 + 0x43)) - (0xd7 < bVar8);
      *pbVar17 = *pbVar17 + (char)uVar62;
      pcVar15 = pcVar18 + -0x6b721c;
      pcVar18 = pcVar18 + -0x6b721a;
      *pcVar18 = *pcVar18 + (char)((uint)pbVar17 >> 8);
      cVar32 = *pcVar18;
      puVar36 = (undefined4 *)puVar45;
code_r0x00403a22:
      puVar29 = (undefined1 *)puVar36;
      if ((POPCOUNT(cVar32) & 1U) == 0) goto code_r0x00403a24;
      bVar7 = *pbVar17;
      *pbVar17 = *pbVar17 + (char)pbVar19;
      if (SCARRY1(bVar7,(char)pbVar19) == (char)*pbVar17 < '\0') {
        pbVar20 = pbVar56;
        pbVar22 = (byte *)(pcVar15 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar15 = *pcVar15 + (char)pcVar15;
      pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x02');
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x54],(char)pbVar31))
      ;
      pbVar21 = pbVar59;
code_r0x00403a7d:
      cVar27 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar27;
      uVar23 = (undefined3)((uint)pcVar15 >> 8);
      cVar32 = cVar27 + '-';
      pbVar22 = (byte *)CONCAT31(uVar23,cVar32);
      pbVar20 = pbVar56;
      pbVar59 = pbVar21;
      if ((POPCOUNT(cVar32 - *pbVar17) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar22 = *pbVar22 + cVar32;
      bVar7 = cVar27 + 0x2f;
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        bVar7 = *pbVar17;
        *pbVar17 = *pbVar17 + (byte)pbVar19;
        *pbVar56 = *pbVar56 - CARRY1(bVar7,(byte)pbVar19);
        pbVar20 = (byte *)CONCAT31(uVar23,cVar27 + -0x53);
        pbVar56 = (byte *)*puVar36;
        puVar48 = puVar36 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
      bVar63 = 0x90 < bVar7;
      pcVar15 = (char *)CONCAT31(uVar23,cVar27 + -0x62);
code_r0x00403a8f:
      uVar23 = (undefined3)((uint)pcVar15 >> 8);
      bVar8 = (char)pcVar15 - bVar63;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar8);
      bVar7 = *pbVar31;
      cVar27 = (char)((uint)pbVar19 >> 8);
      *pbVar31 = *pbVar31 + cVar27;
      puVar48 = puVar36;
      pbVar59 = pbVar21;
      if (*pbVar31 != 0 && SCARRY1(bVar7,cVar27) == (char)*pbVar31 < '\0') {
        *pbVar20 = *pbVar20 + bVar8;
        pbVar59 = (byte *)CONCAT31(uVar23,bVar8 + 0x2d);
        *(byte **)(pbVar21 + (int)unaff_EDI * 8) =
             pbVar17 + (uint)(0xd2 < bVar8) + *(int *)(pbVar21 + (int)unaff_EDI * 8);
        *(undefined2 *)((int)puVar36 + -4) = in_ES;
        bVar63 = CARRY1(*pbVar21,(byte)pbVar21);
        *pbVar21 = *pbVar21 + (byte)pbVar21;
        puVar46 = (undefined2 *)((int)puVar36 + -8);
        puVar36 = (undefined4 *)((int)puVar36 + -8);
        *puVar46 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar19 >> 8) | *pbVar20,(char)pbVar19));
      *pbVar59 = *pbVar59 + (char)pbVar20;
      puVar29 = (undefined1 *)puVar48;
code_r0x00403afc:
      puVar36 = (undefined4 *)puVar29;
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x55],(char)pbVar31))
      ;
      *pbVar20 = *pbVar20 + (char)pbVar20;
      uVar23 = (undefined3)((uint)pbVar20 >> 8);
      bVar8 = (char)pbVar20 + 0x6f;
      bVar7 = *(byte *)CONCAT31(uVar23,bVar8);
      *pbVar17 = *pbVar17 + (char)pbVar19;
      pbVar20 = (byte *)CONCAT31(uVar23,(bVar8 & bVar7) + *pbVar59);
      *pbVar19 = *pbVar19 - (char)((uint)pbVar17 >> 8);
      break;
    }
    uVar61 = *(undefined2 *)((int)puVar48 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar20 = *pbVar20 + (char)pbVar20;
  puVar49 = (undefined2 *)((int)puVar36 + -4);
  puVar36 = (undefined4 *)((int)puVar36 + -4);
  *puVar49 = in_ES;
  pbVar17[0x16060000] = pbVar17[0x16060000] - (char)pbVar19;
  pbVar31 = (byte *)((uint)pbVar31 | (uint)pbVar59);
  cVar27 = (char)pbVar20 + '\x02';
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar27);
  bVar63 = (POPCOUNT(cVar27) & 1U) == 0;
code_r0x00403b18:
  bVar7 = (byte)pbVar21;
  uVar23 = (undefined3)((uint)pbVar21 >> 8);
  if (!bVar63) {
    *pbVar17 = *pbVar17 + (char)pbVar19;
    pbVar20 = (byte *)CONCAT31(uVar23,bVar7 | *pbVar59);
code_r0x00403b73:
    pbVar21 = (byte *)((int)unaff_EDI + *(int *)(pbVar56 + -0x37));
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    uVar23 = (undefined3)((uint)pbVar20 >> 8);
    bVar7 = (byte)pbVar20 | *pbVar17;
    pcVar15 = (char *)CONCAT31(uVar23,bVar7);
    uVar66 = CONCAT44(pbVar17,pcVar15);
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *pcVar15 = *pcVar15 + bVar7;
      *pbVar59 = *pbVar59 + 1;
      return (byte *)CONCAT31(uVar23,bVar7 + 6);
    }
    bVar7 = *pbVar59;
    *pbVar59 = *pbVar59 + 1;
    pcVar1 = (code *)swi(4);
    if (SCARRY1(bVar7,'\x01')) {
      uVar66 = (*pcVar1)();
      pbVar19 = extraout_ECX_00;
    }
    pbVar17 = (byte *)uVar66;
    *pbVar17 = *pbVar17 + (char)uVar66;
    cVar32 = (char)((ulonglong)uVar66 >> 0x20);
    puVar28 = (uint *)CONCAT22((short)((ulonglong)uVar66 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar66 >> 0x28) | pbVar31[0x2f],cVar32));
    *pbVar17 = *pbVar17 + (char)uVar66;
    cVar27 = (char)pbVar19;
    bVar10 = (byte)((uint)pbVar19 >> 8) | *pbVar17;
    pbVar17 = pbVar17 + *(int *)pbVar17;
    bVar7 = *pbVar31;
    *pbVar31 = *pbVar31 + bVar10;
    bVar8 = (byte)pbVar17;
    if (CARRY1(bVar7,bVar10)) {
      *pbVar17 = *pbVar17 + bVar8;
      bVar10 = bVar10 | (byte)*puVar28;
      *pbVar31 = *pbVar31 - cVar32;
      *pbVar17 = *pbVar17 + bVar8;
      uVar23 = (undefined3)((uint)pbVar17 >> 8);
      bVar8 = bVar8 | (byte)*puVar28;
      puVar57 = (uint *)CONCAT31(uVar23,bVar8);
      bVar63 = CARRY4((uint)pbVar56,*puVar57);
      bVar65 = SCARRY4((int)pbVar56,*puVar57);
      pbVar56 = pbVar56 + *puVar57;
      *(uint *)((int)puVar36 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar65 * 0x800 | (uint)bVar64 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar56 < 0) * 0x80 |
           (uint)(pbVar56 == (byte *)0x0) * 0x40 | (uint)(bVar6 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar56 & 0xff) & 1U) == 0) * 4 | (uint)bVar63 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar57 = (char)*puVar57 + bVar8;
      *(undefined2 *)((int)puVar36 + -8) = in_ES;
      cVar32 = (char)pbVar31 - *pbVar59;
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar31 >> 8),cVar32) +
                                                   0x5f),cVar32));
      *(byte *)puVar57 = (char)*puVar57 + bVar8;
      bVar7 = bVar8 + 0x2a & (byte)*puVar28;
      pbVar21 = pbVar21 + *(int *)(pbVar56 + 0x5f);
      *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
      pbVar17 = (byte *)CONCAT31(uVar23,bVar7 + 0x2a);
      *(byte *)puVar28 = (byte)*puVar28 + 0x28;
      *pbVar17 = *pbVar17 + bVar7 + 0x2a;
      puVar52 = (undefined2 *)((int)puVar36 + -0xc);
      puVar36 = (undefined4 *)((int)puVar36 + -0xc);
      *puVar52 = in_ES;
    }
    else {
      *pbVar59 = *pbVar59 + bVar8;
    }
    pcVar15 = (char *)CONCAT22((short)((uint)pbVar19 >> 0x10),CONCAT11(bVar10,cVar27));
    *pbVar56 = *pbVar56 - bVar10;
    *(byte *)puVar28 = (byte)*puVar28 + cVar27;
    bVar7 = (byte)pbVar17 - 0xb;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar7);
    if (10 < (byte)pbVar17) {
      *pbVar19 = *pbVar19 | bVar7;
      return pbVar19;
    }
    *(byte *)puVar28 = (byte)*puVar28 + cVar27;
    do {
      *(undefined2 *)((int)puVar36 + -4) = in_ES;
      bVar7 = pbVar31[-0x23];
      bVar8 = (byte)pbVar19;
      *pbVar19 = *pbVar19 + bVar8;
      bVar6 = pbVar56[-0x22];
      *pbVar19 = *pbVar19 + bVar8;
      uVar23 = (undefined3)((uint)pbVar19 >> 8);
      bVar8 = bVar8 | *pbVar59;
      pbVar17 = (byte *)CONCAT31(uVar23,bVar8);
      cVar32 = (char)pbVar31 - *pbVar59;
      pbVar31 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar31 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar31 >> 8) + bVar7 | bVar6
                                                          ,(char)pbVar31)) >> 8),cVar32);
      cVar27 = (char)pcVar15;
      pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                 CONCAT11((char)((uint)pcVar15 >> 8) + *pbVar17,cVar27));
      *(byte *)puVar28 = (byte)*puVar28 + cVar27;
      bVar6 = bVar8 - *pbVar17;
      pbVar19 = (byte *)CONCAT31(uVar23,bVar6);
      pbVar59 = pbVar59 + (-(uint)(bVar8 < *pbVar17) - *(int *)pbVar19);
      in_ES = *(undefined2 *)((int)puVar36 + -4);
      puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(char)puVar28 * '\x02');
      *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
      *pbVar21 = *pbVar21 + cVar32;
      bVar7 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar6;
      *puVar28 = (uint)(pbVar19 + (uint)CARRY1(bVar7,bVar6) + *puVar28);
    } while ((POPCOUNT(*puVar28 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar19 = *pbVar19 + (char)pbVar19;
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | pbVar19[(int)pcVar15]);
    puVar54 = (undefined2 *)((int)puVar36 + -4);
    *(undefined2 *)((int)puVar36 + -4) = uVar61;
    bVar63 = false;
    pbVar19 = (byte *)((uint)pbVar19 & 0xffffff00);
    do {
      pbVar21 = pbVar21 + (-(uint)bVar63 - *(int *)pbVar31);
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),*pcVar15);
      *pcVar18 = *pcVar18 + *pcVar15;
      pbVar19 = (byte *)CONCAT31((int3)((uint)(pcVar18 +
                                              (pbVar59[0x2000001] < (byte)((uint)pcVar15 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar18 +
                                        (pbVar59[0x2000001] < (byte)((uint)pcVar15 >> 8)) + 0xda7d)
                                 | (byte)*puVar28) + 0x7d);
      pcVar15 = pcVar15 + -1;
      *(byte *)puVar28 = (byte)*puVar28 + (char)pcVar15;
      while( true ) {
        uVar26 = (undefined3)((uint)puVar28 >> 8);
        cVar27 = (char)puVar28 + *(char *)((int)pbVar21 * 2 + 0xa0000e1);
        puVar28 = (uint *)CONCAT31(uVar26,cVar27);
        bVar63 = CARRY1((byte)pbVar19,(byte)*puVar28);
        uVar23 = (undefined3)((uint)pbVar19 >> 8);
        bVar7 = (byte)pbVar19 + (byte)*puVar28;
        pbVar19 = (byte *)CONCAT31(uVar23,bVar7);
        if ((POPCOUNT(bVar7) & 1U) != 0) break;
        *pbVar19 = *pbVar19 + bVar7;
        cVar32 = (char)pcVar15;
        pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar15 >> 8) | pbVar21[-0x65],cVar32));
        bVar6 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar7;
        *(undefined2 *)((int)puVar54 + -4) = in_ES;
        if (CARRY1(bVar6,bVar7)) {
          *pbVar19 = *pbVar19 + bVar7;
          pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar31 >> 8) | pbVar56[-0x1d],
                                              (char)pbVar31));
          *pbVar19 = *pbVar19 + bVar7;
          bVar63 = false;
          bVar7 = bVar7 | (byte)*puVar28;
          pcVar18 = (char *)CONCAT31(uVar23,bVar7);
          uVar61 = *(undefined2 *)((int)puVar54 + -4);
          puVar36 = (undefined4 *)puVar54;
          while( true ) {
            bVar6 = (byte)pcVar18;
            uVar23 = (undefined3)((uint)pcVar18 >> 8);
            if (bVar63 == (char)bVar7 < '\0') break;
            *pcVar18 = *pcVar18 + bVar6;
            bVar6 = bVar6 | (byte)*puVar28;
            puVar57 = (uint *)CONCAT31(uVar23,bVar6);
            *pbVar21 = *pbVar21 << 1 | (char)*pbVar21 < '\0';
            uVar14 = *puVar57;
            *(byte *)puVar57 = (byte)*puVar57 + bVar6;
            pbVar56 = pbVar56 + (-(uint)CARRY1((byte)uVar14,bVar6) - *puVar57);
            *puVar57 = *puVar57 << 1 | (uint)((int)*puVar57 < 0);
            while( true ) {
              uVar14 = *puVar28;
              *(byte *)puVar28 = (byte)*puVar28 + (byte)pcVar15;
              uVar62 = *(undefined2 *)puVar36;
              cVar27 = (char)puVar57 + 'o' + CARRY1((byte)uVar14,(byte)pcVar15);
              pcVar18 = (char *)CONCAT31((int3)((uint)puVar57 >> 8),cVar27);
              pcVar15 = (char *)0x20a0000;
              if ((POPCOUNT(cVar27) & 1U) != 0) break;
              *pcVar18 = *pcVar18 + cVar27;
              bVar7 = bRamfe140212;
              pcVar15 = (char *)0x0;
              *(undefined2 *)puVar36 = in_ES;
              uVar23 = (undefined3)((uint)(pcVar18 + -0x732b0000) >> 8);
              bVar6 = in(0);
              puVar57 = (uint *)CONCAT31(uVar23,bVar6);
              uVar14 = *puVar28;
              *(byte *)puVar28 = (byte)*puVar28;
              if (SCARRY1((byte)uVar14,'\0') != (char)(byte)*puVar28 < '\0') {
                *(byte *)puVar57 = (byte)*puVar57 + bVar6;
                bVar6 = bVar6 | (byte)*puVar28;
                puVar57 = (uint *)CONCAT31(uVar23,bVar6);
                if ((POPCOUNT(bVar6) & 1U) == 0) {
                  *(byte *)puVar57 = (byte)*puVar57 + bVar6;
                  pcVar15 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar7 | (byte)*puVar57) << 8);
                  puVar54 = (undefined2 *)((int)puVar36 + -4);
                  *(undefined2 *)((int)puVar36 + -4) = uVar62;
                  *(byte *)puVar57 = (byte)*puVar57 + bVar6;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar57 = (byte)*puVar57 + bVar6;
                puVar57 = (uint *)CONCAT31(uVar23,bVar6 | (byte)*puVar28);
              }
            }
            *(byte *)puVar28 = (byte)*puVar28;
            bVar63 = SCARRY1((char)puVar28,*pbVar21);
            bVar7 = (char)puVar28 + *pbVar21;
            puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),bVar7);
            puVar36 = (undefined4 *)((int)puVar36 + 4);
          }
          if (bVar63 == (char)bVar7 < '\0') {
            *(byte *)puVar28 = (byte)*puVar28 + (char)pcVar15;
            pbVar19 = (byte *)((uint)pcVar18 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar18 = *pcVar18 + bVar6;
          pbVar19 = (byte *)CONCAT31(uVar23,(bVar6 | (byte)*puVar28) + 0x7d);
          pcVar15 = pcVar15 + -1;
          *(byte *)puVar28 = (byte)*puVar28 + (char)pcVar15;
          puVar54 = (undefined2 *)puVar36;
        }
        else {
          *(byte *)puVar28 = (byte)*puVar28 + cVar32;
          puVar28 = (uint *)CONCAT31(uVar26,cVar27 + *(char *)((int)pbVar21 * 2 + 0xa0000e0));
          puVar54 = (undefined2 *)((int)puVar54 + -4);
        }
      }
    } while( true );
  }
  *pbVar21 = *pbVar21 + bVar7;
  bVar7 = bVar7 + 0x6f & *(byte *)CONCAT31(uVar23,bVar7 + 0x6f);
  *pbVar17 = *pbVar17 + (char)pbVar19;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar7;
  pcVar15 = (char *)CONCAT31(uVar23,bVar7 - (byte)*unaff_EDI);
code_r0x00403b2c:
  bVar7 = (char)pcVar15 - *pcVar15;
  pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar7);
  *pbVar20 = *pbVar20 + bVar7;
  *(byte **)pbVar20 = pbVar17 + *(int *)pbVar20;
  *pbVar20 = *pbVar20 + bVar7;
  bVar63 = CARRY1(*pbVar20,bVar7);
  *pbVar20 = *pbVar20 + bVar7;
  puVar29 = (undefined1 *)puVar36;
  pbVar21 = pbVar59;
  while( true ) {
    puVar36 = (undefined4 *)puVar29;
    *(byte **)pbVar20 = pbVar20 + (uint)bVar63 + *(int *)pbVar20;
    bVar6 = ((uint)pbVar20 & 0x1000) != 0;
    unaff_EDI = unaff_EDI + (uint)bVar64 * -2 + 1;
    pbVar20[(int)pbVar17] = pbVar20[(int)pbVar17] + (char)pbVar31;
    *pbVar20 = *pbVar20 + (char)pbVar20;
    *(byte **)pbVar21 = pbVar31 + *(int *)pbVar21;
    bVar7 = (byte)((uint)pbVar19 >> 8);
    cVar27 = (char)pbVar19;
    pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),CONCAT11(bVar7 + *pbVar20,cVar27));
    pbVar20 = pbVar20 + (uint)CARRY1(bVar7,*pbVar20) + *(int *)pbVar20;
    *pbVar17 = *pbVar17 + cVar27;
    cVar27 = (char)pbVar31 - pbVar21[2];
    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar27);
    pbVar59 = pbVar21;
    if ((POPCOUNT(cVar27) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    bVar7 = (byte)pbVar20 | *pbVar31;
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar7);
    if (bVar7 != 0) {
      pbVar56 = pbVar56 + -unaff_EDI[9];
      *pbVar22 = *pbVar22 + bVar7;
      pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar19 >> 8) | *pbVar17,(char)pbVar19));
      pbVar21 = pbVar21 + *(int *)pbVar22;
      pbVar22 = pbVar22 + *(int *)pbVar22;
      uVar23 = (undefined3)((uint)pbVar22 >> 8);
      bVar8 = (char)pbVar22 - *pbVar22;
      pbVar59 = (byte *)CONCAT31(uVar23,bVar8);
      bVar7 = *pbVar59;
      *pbVar59 = *pbVar59 + bVar8;
      pbVar22 = (byte *)CONCAT31(uVar23,bVar8 - CARRY1(bVar7,bVar8));
    }
    bVar7 = *pbVar22;
    *pbVar22 = *pbVar22 + (byte)pbVar22;
    iVar13 = *(int *)(pbVar56 + 0x1b000007);
    iVar3 = -(uint)CARRY1(bVar7,(byte)pbVar22);
    pbVar59 = pbVar21 + (uint)bVar64 * -8 + 4;
    out(*(undefined4 *)pbVar21,(short)pbVar17);
    pbVar20 = (byte *)(((uint)pbVar22 >> 8) * 0x100);
    *pbVar17 = *pbVar17 + (byte)pbVar19;
    bVar7 = (char)pbVar17 - *pbVar31;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar7);
    *pbVar31 = *pbVar31;
    *pbVar17 = *pbVar17 + (char)((uint)pbVar19 >> 8);
    *pbVar20 = *pbVar20;
    pcVar15 = (char *)(((uint)pbVar22 >> 8) * 0x200);
    *pcVar15 = *pcVar15 + (char)pbVar31;
    bVar63 = CARRY1(*pbVar19,bVar7);
    *pbVar19 = *pbVar19 + bVar7;
    puVar29 = (undefined1 *)((int)puVar36 + (iVar3 - iVar13));
    pbVar21 = pbVar59;
    if (bVar63) {
      *pbVar20 = *pbVar20;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),(byte)pbVar19 | *pbVar17);
      puVar51 = (undefined2 *)((int)puVar36 + (iVar3 - iVar13) + -4);
      puVar36 = (undefined4 *)((int)puVar36 + (iVar3 - iVar13) + -4);
      *puVar51 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar50 = (undefined2 *)((int)puVar36 + -4);
  puVar36 = (undefined4 *)((int)puVar36 + -4);
  *puVar50 = uVar61;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar56 = pbVar56 + -*puVar57;
  puVar53 = (undefined1 *)((int)puVar54 + 4);
  do {
    bVar7 = (byte)puVar57;
    *(byte *)puVar57 = (byte)*puVar57 + bVar7;
    pbVar21 = pbVar21 + -*(int *)(pbVar56 + -0x1a);
    *(byte *)puVar57 = (byte)*puVar57 + bVar7;
    bVar7 = bVar7 | (byte)*puVar28;
    puVar57 = (uint *)CONCAT31((int3)((uint)puVar57 >> 8),bVar7);
    *(byte *)puVar57 = (byte)*puVar57 | bVar7;
    bVar7 = (byte)*puVar57;
    pbVar56 = (byte *)0x2700001;
    while (puVar54 = (undefined2 *)puVar53, (POPCOUNT(bVar7) & 1U) == 0) {
      do {
        *(byte *)puVar57 = (byte)*puVar57 + (byte)puVar57;
        bVar7 = (byte)puVar57 | (byte)*puVar28;
        puVar57 = (uint *)CONCAT31((int3)((uint)puVar57 >> 8),bVar7);
        puVar29 = (undefined1 *)puVar54;
        if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar57 = (byte)*puVar57 + (char)puVar57;
        uVar24 = CONCAT21((short)((uint)pcVar15 >> 0x10),(byte)((uint)pcVar15 >> 8) | bRamfe140212);
        puVar5 = puVar29;
        while( true ) {
          puVar55 = puVar5;
          pcVar15 = (char *)((uint)uVar24 << 8);
          puVar53 = puVar55 + -4;
          puVar54 = (undefined2 *)(puVar55 + -4);
          puVar29 = puVar55 + -4;
          *(undefined2 *)(puVar55 + -4) = in_ES;
          bVar10 = (byte)puVar57;
          *(byte *)puVar57 = (byte)*puVar57 & bVar10;
          bVar6 = *pbVar31;
          bVar12 = (byte)uVar24;
          bVar8 = *pbVar31;
          *pbVar31 = *pbVar31 + bVar12;
          bVar7 = *pbVar31;
          if (!CARRY1(bVar6,bVar12)) break;
          *(byte *)puVar57 = (byte)*puVar57 + bVar10;
          pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar31 >> 8) | bRam026fffe2,
                                              (char)pbVar31));
          *(byte *)puVar57 = (byte)*puVar57 + bVar10;
          bVar10 = bVar10 | (byte)*puVar28;
          puVar57 = (uint *)CONCAT31((int3)((uint)puVar57 >> 8),bVar10);
          bVar63 = (POPCOUNT(bVar10) & 1U) == 0;
          while( true ) {
            cVar27 = (char)((uint)pbVar31 >> 8);
            uVar61 = (undefined2)((uint)pbVar31 >> 0x10);
            if (!bVar63) {
              *(byte *)puVar28 = (byte)*puVar28;
              pbVar31 = (byte *)CONCAT22(uVar61,CONCAT11(cVar27 + pbVar31[-0x1f],(char)pbVar31));
              goto code_r0x00403d52;
            }
            *(byte *)puVar57 = (byte)*puVar57 + (char)puVar57;
            uVar62 = (undefined2)((uint)pcVar15 >> 0x10);
            bVar6 = (byte)((uint)pcVar15 >> 8) | (byte)*puVar57;
            uVar24 = CONCAT21(uVar62,bVar6);
            *puVar57 = *puVar57 & (uint)puVar57;
            *pbVar31 = *pbVar31 + bVar6;
            uVar23 = (undefined3)((uint)puVar57 >> 8);
            bVar7 = (char)puVar57 - bVar6;
            pcVar15 = (char *)CONCAT31(uVar23,bVar7);
            *pcVar15 = *pcVar15 + bVar7;
            bVar7 = bVar7 | (byte)*puVar28;
            puVar57 = (uint *)CONCAT31(uVar23,bVar7);
            puVar5 = puVar55 + -4;
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *(byte *)puVar57 = (byte)*puVar57 + bVar7;
            pcVar15 = (char *)((uint)CONCAT21(uVar62,bVar6 | (byte)*puVar57) << 8);
            *puVar57 = *puVar57 - (int)puVar57;
            *(byte *)puVar28 = (byte)*puVar28;
            pbVar31 = (byte *)CONCAT22(uVar61,CONCAT11(cVar27 + pbVar31[-0x1d],(char)pbVar31));
            do {
              *(byte *)puVar57 = (byte)*puVar57 + (char)puVar57;
              uVar61 = (undefined2)((uint)puVar28 >> 0x10);
              cVar27 = (char)puVar28;
              bVar7 = (byte)((uint)puVar28 >> 8) | pbVar31[-0x17];
              puVar28 = (uint *)CONCAT22(uVar61,CONCAT11(bVar7,cVar27));
              *(byte *)puVar57 = (byte)*puVar57 + (char)puVar57;
              pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar31 >> 8) | bRam026fffeb,
                                                  (char)pbVar31));
              do {
                *(byte *)puVar57 = (byte)*puVar57 + (byte)puVar57;
                uVar23 = (undefined3)((uint)puVar57 >> 8);
                bVar8 = (byte)puVar57 | (byte)*puVar28;
                pcVar18 = (char *)CONCAT31(uVar23,bVar8);
                bVar6 = pbVar31[-0x16];
                *pcVar18 = *pcVar18 + bVar8;
                pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                           CONCAT11((char)((uint)pbVar31 >> 8) + bVar6 |
                                                    bRam026fffec,(char)pbVar31));
                *pcVar18 = *pcVar18 + bVar8;
                pbVar17 = (byte *)CONCAT31(uVar23,bVar8 | (byte)*puVar28);
                while( true ) {
                  *pbVar17 = *pbVar17 + (byte)pbVar17;
                  uVar23 = (undefined3)((uint)pbVar17 >> 8);
                  bVar6 = (byte)pbVar17 | (byte)*puVar28;
                  puVar57 = (uint *)CONCAT31(uVar23,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar57 = (byte)*puVar57 + bVar6;
                  bVar8 = pbVar21[-0x14];
                  *(byte *)puVar57 = (byte)*puVar57 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar28;
                  pcVar18 = (char *)CONCAT31(uVar23,bVar6);
                  bVar10 = pbVar31[-0x15];
                  *pcVar18 = *pcVar18 + bVar6;
                  pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),
                                                    (byte)((uint)pcVar15 >> 8) | bVar8 |
                                                    pbVar21[-0x13]) << 8);
                  *pcVar18 = *pcVar18 + bVar6;
                  pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                             CONCAT11((char)((uint)pbVar31 >> 8) + bVar10 |
                                                      bRam026fffef,(char)pbVar31));
                  *pcVar18 = *pcVar18 + bVar6;
                  pbVar17 = (byte *)CONCAT31(uVar23,bVar6 | (byte)*puVar28);
                  do {
                    do {
                      bVar8 = (byte)pbVar17;
                      *pbVar17 = *pbVar17 + bVar8;
                      cVar9 = (char)pbVar31;
                      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar31 >> 8) | *pbVar17,
                                                          cVar9));
                      *pbVar17 = bVar8;
                      *pbVar17 = *pbVar17 + bVar8;
                      cVar32 = (char)((uint)pcVar15 >> 8) + *pbVar17;
                      pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),cVar32) << 8)
                      ;
                      uVar23 = (undefined3)((uint)pbVar17 >> 8);
                      bVar8 = bVar8 & *pbVar17;
                      pbVar17 = (byte *)CONCAT31(uVar23,bVar8);
                      bVar6 = *pbVar31;
                      *pbVar31 = *pbVar31 + cVar32;
                    } while (SCARRY1(bVar6,cVar32) == (char)*pbVar31 < '\0');
                    *pbVar17 = *pbVar17 + bVar8;
                    bVar8 = bVar8 | (byte)*puVar28;
                    pbVar17 = (byte *)CONCAT31(uVar23,bVar8);
                    if ((POPCOUNT(bVar8) & 1U) == 0) {
                      *pbVar17 = *pbVar17 + bVar8;
                      *pbVar17 = *pbVar17 + bVar8;
                      cVar27 = cVar27 - bVar7;
                      pbVar19 = (byte *)CONCAT31((int3)((uint)puVar28 >> 8),cVar27);
                      *pbVar17 = *pbVar17 + bVar8;
                      bRam0312382b = bRam0312382b | *pbVar19;
                      *(undefined2 *)(puVar55 + -8) = in_ES;
                      while( true ) {
                        bVar6 = (byte)pbVar17;
                        *pbVar17 = *pbVar17 + bVar6;
                        bRam0312382b = bRam0312382b | (pbVar21 + 0x21b0000)[(int)pbVar17];
                        uVar23 = (undefined3)((uint)pbVar17 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar19 = *pbVar19 + bRam0312382b;
                        pbVar17 = (byte *)CONCAT31(uVar23,bVar6 | *pbVar59);
                      }
                      *pbVar17 = *pbVar17 + bVar6;
                      bVar6 = bVar6 | *pbVar59;
                      pcVar15 = (char *)CONCAT31(uVar23,bVar6);
                      out(*(undefined4 *)pbVar59,(short)pbVar19);
                      *pcVar15 = *pcVar15 + bVar6;
                      uVar62 = CONCAT11(bVar7 | bRam6f0a002b,cVar27);
                      pcVar18 = (char *)CONCAT22(uVar61,uVar62);
                      *pcVar15 = *pcVar15 + bVar6;
                      *pcVar18 = *pcVar18 + bRam0312382b;
                      out(*(undefined4 *)(pbVar59 + (uint)bVar64 * -8 + 4),uVar62);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar9 + *pcVar15);
                  } while (SCARRY1(cVar9,*pcVar15) != (char)(cVar9 + *pcVar15) < '\0');
                }
                uVar14 = *puVar28;
                *(byte *)puVar28 = (byte)*puVar28;
              } while (SCARRY1((byte)uVar14,'\0') != (char)(byte)*puVar28 < '\0');
              *(byte *)puVar28 = (byte)*puVar28;
              *pcVar15 = *pcVar15 - (char)pbVar31;
              *(byte *)puVar57 = (byte)*puVar57 + bVar6;
              bVar6 = bVar6 | (byte)*puVar28;
              puVar57 = (uint *)CONCAT31(uVar23,bVar6);
              bVar63 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar63);
          }
        }
      } while (SCARRY1(bVar8,bVar12));
    }
    *pbVar31 = *pbVar31 + (char)((uint)pcVar15 >> 8);
    *pbVar21 = *pbVar21 - (char)pbVar31;
  } while( true );
}


