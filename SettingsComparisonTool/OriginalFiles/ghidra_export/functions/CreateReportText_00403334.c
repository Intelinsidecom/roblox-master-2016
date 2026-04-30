/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403334
 * Raw Name    : CreateReportText
 * Demangled   : CreateReportText
 * Prototype   : byte * CreateReportText(undefined4 reportStyle, byte * param_2, char * param_3)
 * Local Vars  : uStack_24, pbStack_1c, auStack_14, uStack_10, uStack_c, uStack_8, pbStack_4, pcVar1, uVar2, iVar3, uVar4, uVar5, puVar6, bVar7, bVar8, cVar9, bVar10, bVar11, bVar12, bVar13, in_EAX, param_2, pbVar14, iVar15, param_3, pbVar16, uVar17, pcVar18, piVar19, pcVar20, pbVar21, pbVar22, pbVar23, pbVar24, uVar25, uVar26, extraout_ECX, extraout_ECX_00, cVar27, uVar28, puVar29, puVar30, uVar31, sVar32, unaff_EBX, cVar33, cVar34, bVar35, uVar36, puVar37, puVar38, piVar39, piVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, pbVar57, unaff_ESI, pbVar58, puVar59, puVar60, unaff_EDI, puVar61, in_ES, in_CS, in_SS, uVar62, in_DS, uVar63, in_GS_OFFSET, bVar64, in_AF, in_TF, in_IF, bVar65, bVar66, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar67, unaff_retaddr, reportStyle
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

byte * __fastcall CreateReportText(undefined4 reportStyle,byte *param_2,char *param_3)

{
  code *pcVar1;
  undefined6 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte *in_EAX;
  byte *pbVar14;
  undefined3 uVar25;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  char *pcVar18;
  int *piVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint3 uVar26;
  byte *pbVar24;
  char cVar27;
  byte *extraout_ECX;
  undefined3 uVar28;
  byte *extraout_ECX_00;
  uint *puVar29;
  undefined1 *puVar30;
  undefined1 uVar31;
  short sVar32;
  char cVar33;
  char cVar34;
  byte bVar35;
  byte *unaff_EBX;
  undefined2 uVar36;
  undefined4 *puVar37;
  undefined2 *puVar38;
  int *piVar39;
  int *piVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined2 *puVar43;
  undefined4 *puVar44;
  undefined2 *puVar45;
  undefined1 *puVar46;
  undefined2 *puVar47;
  undefined2 *puVar48;
  undefined4 *puVar49;
  undefined2 *puVar50;
  undefined2 *puVar51;
  undefined2 *puVar52;
  undefined2 *puVar53;
  undefined1 *puVar54;
  undefined2 *puVar55;
  undefined1 *puVar56;
  byte *pbVar57;
  byte *unaff_ESI;
  byte *pbVar58;
  uint *puVar59;
  uint *puVar60;
  uint *unaff_EDI;
  uint *puVar61;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 uVar62;
  undefined2 in_DS;
  undefined2 uVar63;
  int in_GS_OFFSET;
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
  char *unaff_retaddr;
  undefined4 uStack_24;
  byte *pbStack_1c;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  byte *pbStack_4;
  
  bVar65 = false;
                    /* .NET CLR Managed Code */
  pbVar21 = (byte *)CONCAT22((short)((uint)reportStyle >> 0x10),
                             CONCAT11((char)((uint)reportStyle >> 8) + *in_EAX,(char)reportStyle));
  bVar64 = CARRY1(*in_EAX,(byte)in_EAX);
  *in_EAX = *in_EAX + (byte)in_EAX;
  do {
    pcVar18 = param_3;
    if (bVar64) {
      *in_EAX = *in_EAX + (char)in_EAX;
      pbVar16 = unaff_ESI;
    }
    else {
      pbVar14 = in_EAX + 0x7b027000;
      pbVar16 = (byte *)((int)unaff_EDI + (int)unaff_retaddr * 2);
      *pbVar16 = *pbVar16 + (char)pbVar14;
      uVar25 = (undefined3)((uint)pbVar14 >> 8);
      *unaff_ESI = *unaff_ESI + (char)pbVar14 + *pbVar14;
      cVar9 = cRam8c0a0000;
      uVar63 = SUB42(param_2,0);
      out(*(undefined4 *)unaff_ESI,uVar63);
      puVar29 = (uint *)CONCAT31(uVar25,cRam8c0a0000);
      *pbVar21 = *pbVar21 + cRam8c0a0000;
      *param_2 = *param_2 - (char)((uint)pbVar14 >> 8);
      cVar33 = (char)pbVar21;
      *param_2 = *param_2 + cVar33;
      pbVar16 = unaff_ESI + 8;
      out(*(undefined4 *)(unaff_ESI + 4),uVar63);
      cRam03060000 = cVar9;
      unaff_EDI = (uint *)((uint)unaff_EDI ^ *puVar29);
      uVar62 = (undefined2)((uint)pbVar21 >> 0x10);
      cVar27 = (char)((uint)pbVar21 >> 8) + (char)*puVar29;
      pbVar21 = (byte *)CONCAT22(uVar62,CONCAT11(cVar27,cVar33));
      *(char *)puVar29 = (char)*puVar29 + cVar9;
      param_3 = (char *)CONCAT22(param_3._2_2_,in_ES);
      cVar34 = (char)unaff_EBX;
      sVar32 = CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x38],cVar34);
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),sVar32);
      *(char *)puVar29 = (char)*puVar29 + cVar9;
      bVar7 = cVar9 + 'o' + *(char *)CONCAT31(uVar25,cVar9 + 'o');
      pbVar14 = (byte *)CONCAT31(uVar25,bVar7);
      bVar10 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar7;
      if (*pbVar16 == 0 || SCARRY1(bVar10,bVar7) != (char)*pbVar16 < '\0') goto code_r0x004033b0;
      *pbVar14 = *pbVar14 + bVar7;
      bVar8 = bVar7 + 0x2d;
      in_EAX = (byte *)CONCAT31(uVar25,bVar8);
      *(byte **)(pbVar16 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar7) + *(int *)(pbVar16 + (int)unaff_EDI * 8);
      pbVar14 = (byte *)segment(in_DS,sVar32 + (short)pbVar16);
      bVar10 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar8;
      pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_ES);
      pbVar57 = pbStack_4;
      unaff_retaddr = pcVar18;
      in_SS = in_ES;
      if (CARRY1(bVar10,bVar8)) {
        *in_EAX = *in_EAX + bVar8;
        bVar64 = false;
        bVar8 = bVar8 | in_EAX[0x400003b];
        pbVar23 = (byte *)CONCAT31(uVar25,bVar8);
        pbVar58 = pbVar16;
        if ('\0' < (char)bVar8) {
          *pbVar23 = *pbVar23 + bVar8;
          iVar15 = CONCAT31(uVar25,bVar8 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar8);
          iRam02060000 = iVar15;
          *(byte *)unaff_EDI = (byte)*unaff_EDI - cVar34;
          *pbVar16 = *pbVar16 + (char)iVar15;
          bVar7 = (char)iVar15 - 0x25;
          pbVar14 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar7);
          pbVar21 = (byte *)CONCAT22(uVar62,CONCAT11(cVar27 + *pbVar14,cVar33));
          bVar10 = *pbVar14;
          *pbVar14 = *pbVar14 + bVar7;
          pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_ES);
          if (CARRY1(bVar10,bVar7)) goto code_r0x004033e7;
          pbVar23 = pbVar14 + 2;
          *pbVar23 = *pbVar23 + (char)((uint)param_2 >> 8);
          uStack_8 = in_ES;
          if ((POPCOUNT(*pbVar23) & 1U) != 0) goto _ctor;
code_r0x004033b0:
          *pbVar14 = *pbVar14 + (char)pbVar14;
          cVar9 = (char)pbVar14 + 'o';
          pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar9);
          *pbVar16 = *pbVar16 + cVar9;
          *(undefined2 *)unaff_EBX = in_ES;
          *pbVar21 = *pbVar21 + cVar9;
          *param_2 = *param_2 - (char)((uint)pbVar14 >> 8);
          bVar64 = CARRY1(*param_2,(byte)pbVar21);
          *param_2 = *param_2 + (byte)pbVar21;
          pbVar58 = unaff_ESI + 0xc;
          out(*(undefined4 *)pbVar16,uVar63);
          pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,cVar9);
        }
        pbVar58 = pbVar58 + (uint)bVar64 + *(int *)pbVar23;
        piVar19 = (int *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 + *pbVar23);
        pbVar16 = (byte *)((int)piVar19 + (uint)CARRY1((byte)pbVar23,*pbVar23) + *piVar19);
        bVar10 = *pbVar16;
        bVar7 = (byte)pbVar16;
        *pbVar16 = *pbVar16 + bVar7;
        pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7 + CARRY1(bVar10,bVar7));
        do {
          *pbVar21 = *pbVar21 + (char)param_2;
          param_2[0xa0a0000] = param_2[0xa0a0000] - (char)((uint)pbVar14 >> 8);
          uStack_10 = (byte *)CONCAT22(uStack_10._2_2_,in_ES);
          pbVar57 = uStack_10;
          pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                     CONCAT11((char)((uint)pbVar21 >> 8) + *pbVar14,(char)pbVar21));
          *pbVar14 = *pbVar14 + (char)pbVar14;
          uStack_10 = (byte *)((uint)uStack_10._2_2_ << 0x10);
          pbVar16 = pbVar58 + 4;
          out(*(undefined4 *)pbVar58,(short)param_2);
          pbRam2a0a0000 = pbVar14;
code_r0x004033e7:
          param_2 = param_2 + 1;
          pbVar58 = pbVar16;
_ctor:
          uVar5 = uStack_c._2_2_;
          iVar15 = CONCAT31((int3)((uint)pbVar14 >> 8),(char)pbVar14 + *unaff_EBX) + 0x6128;
          uStack_c = (byte *)((uint)uStack_c._2_2_ << 0x10);
          bVar7 = (char)iVar15 + *(char *)((int)unaff_EDI * 2 + 0x400003e);
          pbVar14 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar7);
          cVar9 = (char)param_2 - *unaff_EBX;
          puVar29 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar9);
          *(byte *)puVar29 = (byte)*puVar29 ^ bVar7;
          *pbVar14 = *pbVar14 + (char)((uint)unaff_EBX >> 8);
          *pbVar14 = *pbVar14 + bVar7;
          *pbVar21 = *pbVar21 + cVar9;
          bVar10 = *pbVar14;
          *pbVar14 = *pbVar14 + bVar7;
          *(byte **)(unaff_EBX + -0x41) =
               pbVar58 + (uint)CARRY1(bVar10,bVar7) + *(int *)(unaff_EBX + -0x41);
          do {
            *pbVar14 = *pbVar14 + (byte)pbVar14;
            uVar25 = (undefined3)((uint)pbVar14 >> 8);
            bVar10 = (byte)pbVar14 | *pbVar58;
            uVar62 = (undefined2)((uint)unaff_EBX >> 0x10);
            uVar31 = SUB41(unaff_EBX,0);
            cVar33 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x69];
            *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
            cVar9 = bVar10 + 0x7d;
            pcVar18 = (char *)CONCAT31(uVar25,cVar9);
            pbVar58[(int)pcVar18] = pbVar58[(int)pcVar18] + cVar9;
            cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,uVar31)) + 0x67);
            *pcVar18 = *pcVar18 + cVar9;
            pcVar18 = (char *)CONCAT31(uVar25,bVar10 - 6);
            puVar59 = (uint *)(pbVar58 + 4);
            out(*(undefined4 *)pbVar58,(short)puVar29);
            *pcVar18 = *pcVar18 + (bVar10 - 6);
            cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,uVar31)) + 0x6b);
            *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
            pcVar18 = (char *)CONCAT31(uVar25,bVar10 + 0x7d);
            pbVar16 = (byte *)((int)puVar59 + (int)pcVar18);
            *pbVar16 = *pbVar16 + bVar10 + 0x7d;
            cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,uVar31)) + 0x6a);
            unaff_EBX = (byte *)CONCAT22(uVar62,CONCAT11(cVar33,uVar31));
            puVar61 = puVar29;
            do {
              cVar9 = (char)pcVar18;
              *pcVar18 = *pcVar18 + cVar9;
              uVar25 = (undefined3)((uint)pcVar18 >> 8);
              bVar10 = cVar9 + 0x7d;
              pcVar20 = (char *)CONCAT31(uVar25,bVar10);
              *(byte *)((int)puVar59 + (int)pcVar20) =
                   *(byte *)((int)puVar59 + (int)pcVar20) + bVar10;
              uVar28 = (undefined3)((uint)puVar61 >> 8);
              bVar7 = (char)puVar61 - *(byte *)((int)puVar61 + 0x457e02);
              puVar29 = (uint *)CONCAT31(uVar28,bVar7);
              pbVar57[0x6fe1411] = pbVar57[0x6fe1411] + bVar10;
              uVar17 = *puVar59;
              uVar4 = *puVar59;
              *(byte *)puVar59 = (byte)*puVar59 + bVar10;
              if (CARRY1((byte)uVar17,bVar10)) {
                *pcVar20 = *pcVar20 + bVar10;
                bVar10 = bVar10 | pcVar20[0x4000045];
                piVar19 = (int *)CONCAT31(uVar25,bVar10);
                if ((char)bVar10 < '\x01') {
                  *(byte *)puVar29 = (byte)*puVar29 + bVar10;
                  uStack_c._2_2_ = uVar5;
                  goto code_r0x004034a0;
                }
                *(byte *)piVar19 = (char)*piVar19 + bVar10;
                bVar10 = bVar10 + 0x6f;
                pcVar20 = (char *)CONCAT31(uVar25,bVar10);
                *pcVar20 = *pcVar20 + bVar10;
                pbVar57 = pbVar57 + -*puVar29;
                *pcVar20 = *pcVar20 + bVar10;
                *unaff_EBX = *unaff_EBX + bVar7;
                *(byte *)((int)pcVar20 * 2) = *(byte *)((int)pcVar20 * 2) ^ bVar10;
                in_AF = 9 < (bVar10 & 0xf) | in_AF;
                uVar17 = CONCAT31(uVar25,bVar10 + in_AF * '\x06') & 0xffffff0f;
                cVar9 = (char)uVar17;
                pcVar18 = (char *)CONCAT22((short)(uVar17 >> 0x10),
                                           CONCAT11((char)((uint)pcVar18 >> 8) + in_AF,cVar9));
                *pcVar18 = *pcVar18 + cVar9;
                cRam72110000 = cRam72110000 + bVar7;
                puVar55 = (undefined2 *)segment(in_ES,(short)auStack_14 + -2);
                *puVar55 = in_ES;
                pcVar18[0x1a] = pcVar18[0x1a] + (char)((uint)puVar61 >> 8);
                cVar9 = (char)pbVar21;
                *pbVar21 = *pbVar21 + cVar9;
                *puVar29 = (uint)(pbVar21 + *puVar29);
                pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_ES);
                cVar33 = cVar33 + unaff_EBX[0x70];
                *pbVar21 = *pbVar21 + cVar9;
                uVar25 = (undefined3)((uint)pbVar21 >> 8);
                bVar10 = cVar9 + 0xa2;
                cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,uVar31)) + 0x6f);
                unaff_EBX = (byte *)CONCAT22(uVar62,CONCAT11(cVar33,uVar31));
                *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
                bVar8 = cVar9 + 0x44;
                piVar19 = (int *)CONCAT31(uVar25,bVar8);
                *(byte *)puVar29 = ((byte)*puVar29 - bVar8) - (0x5d < bVar10);
                if ((POPCOUNT((byte)*puVar29) & 1U) != 0) {
                  *(byte *)piVar19 = (char)*piVar19 + bVar8;
                  *(byte *)piVar19 = (char)*piVar19 + bVar8;
                  *(char *)piVar19 = (char)*piVar19 + cVar33;
                  puVar29 = (uint *)CONCAT22((short)((uint)puVar61 >> 0x10),(ushort)bVar7);
                  *(byte *)piVar19 = (char)*piVar19 + bVar8;
                  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                             CONCAT11((char)((uint)pbVar21 >> 8) + (char)*piVar19,
                                                      cVar9));
                  uStack_c = unaff_EBX;
                  uStack_8 = in_ES;
                  goto code_r0x00403511;
                }
                *(byte *)piVar19 = (char)*piVar19 + bVar8;
                cVar9 = cVar9 + -0x1a;
                piVar19 = (int *)CONCAT31(uVar25,cVar9);
                uStack_c = (byte *)CONCAT22(uVar5,in_ES);
                *puVar29 = (*puVar29 - (int)piVar19) - (uint)(0x5d < bVar8);
                if ((POPCOUNT(*puVar29 & 0xff) & 1U) != 0) {
                  *(byte *)puVar29 = (byte)*puVar29 + cVar9;
                  uStack_8 = in_ES;
                  goto code_r0x004034f3;
                }
                *(char *)piVar19 = (char)*piVar19 + cVar9;
                uStack_8 = in_ES;
                goto code_r0x0040349e;
              }
              pcVar18 = pcVar20;
              puVar61 = puVar29;
            } while (SCARRY1((byte)uVar4,bVar10) == (char)(byte)*puVar59 < '\0');
            *pcVar20 = *pcVar20 + bVar10;
            piVar19 = (int *)CONCAT31(uVar25,cVar9 + -0x59);
            pbVar58 = (byte *)((int)puVar59 + (uint)(0xd5 < bVar10) + *piVar19);
            bVar8 = cVar9 + -0x59 + (char)*piVar19;
            pbVar14 = (byte *)CONCAT31(uVar25,bVar8);
            bVar10 = *pbVar14;
            *pbVar14 = *pbVar14 + bVar8;
            *(byte **)pbVar14 = pbVar14 + (uint)CARRY1(bVar10,bVar8) + *(int *)pbVar14;
            bVar10 = *pbVar21;
            *pbVar21 = *pbVar21 + bVar7;
          } while (CARRY1(bVar10,bVar7));
          *pbVar58 = *pbVar58 + bVar8;
          cVar9 = bVar7 - *unaff_EBX;
          param_2 = (byte *)CONCAT31(uVar28,cVar9);
          *param_2 = *param_2 ^ bVar8;
          *unaff_EBX = *unaff_EBX + cVar9;
          *pbVar14 = *pbVar14 + bVar8;
          *(char *)((int)pbVar14 * 2) = *(char *)((int)pbVar14 * 2) + cVar9;
        } while( true );
      }
    }
    cVar9 = (char)in_EAX + 'o';
    piVar19 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),cVar9);
    *pbVar16 = *pbVar16 + cVar9;
    *(undefined2 *)unaff_EBX = in_SS;
    *pbVar21 = *pbVar21 + cVar9;
    *pbVar21 = *pbVar21 - (char)unaff_EBX;
    *(char *)piVar19 = (char)*piVar19 + cVar9;
    bVar10 = *(byte *)((int)unaff_EDI + -0x5e);
    *(char *)piVar19 = (char)*piVar19 + cVar9;
    pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_ES);
    iVar15 = *piVar19;
    *(char *)(in_GS_OFFSET + (int)piVar19) = *(char *)(in_GS_OFFSET + (int)piVar19) + cVar9;
    in_EAX = (byte *)&uStack_8;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11(((byte)((uint)pbVar21 >> 8) | bVar10) + (char)iVar15 +
                                        *param_2,(char)pbVar21 - *param_2));
    *(char *)piVar19 = (char)*piVar19 + cVar9;
    unaff_ESI = pbVar16 + *piVar19;
    uStack_8._0_1_ = (byte)in_ES;
    bVar10 = (byte)&uStack_8;
    uStack_8 = CONCAT11((char)((ushort)in_ES >> 8),(byte)uStack_8 + bVar10 * '\x03');
    *param_2 = *param_2 + bVar10;
    *unaff_retaddr = *unaff_retaddr - (char)unaff_EBX;
    bVar64 = CARRY1(*unaff_ESI,bVar10);
    *unaff_ESI = *unaff_ESI + bVar10;
  } while( true );
code_r0x0040349e:
  piVar19 = (int *)CONCAT31((int3)((uint)piVar19 >> 8),(char)piVar19 + -0x5e);
code_r0x004034a0:
  uStack_10 = (byte *)((uint)uStack_10._2_2_ << 0x10);
  pbVar21[0x2a0a0000] = pbVar21[0x2a0a0000] - (char)pbVar21;
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((char)((uint)pbVar21 >> 8) + (char)*piVar19,(char)pbVar21));
  bVar10 = (byte)piVar19;
  *(byte *)piVar19 = (char)*piVar19 + bVar10;
  uStack_c = (byte *)CONCAT22(uStack_c._2_2_,in_ES);
  puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),
                             (char)puVar29 - *(byte *)((int)puVar29 + 0x467e02));
  pbVar57[0x6fe1411] = pbVar57[0x6fe1411] + bVar10;
  uVar17 = *puVar59;
  *(byte *)puVar59 = (byte)*puVar59 + bVar10;
  if (!CARRY1((byte)uVar17,bVar10)) {
    pbVar16 = (byte *)((int)unaff_EDI + (int)pbVar57 * 2);
    *pbVar16 = *pbVar16 + bVar10;
    goto code_r0x004034f3;
  }
  *(byte *)piVar19 = (char)*piVar19 + bVar10;
  uVar25 = (undefined3)((uint)piVar19 >> 8);
  bVar10 = bVar10 | *(byte *)((int)piVar19 + 0x4000046);
  piVar19 = (int *)CONCAT31(uVar25,bVar10);
  if ((char)bVar10 < '\x01') {
code_r0x00403511:
    pbVar57 = uStack_c;
    *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
    uStack_c = (byte *)CONCAT22(uStack_c._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar19 = (char)*piVar19 + bVar10;
  pbVar16 = (byte *)CONCAT31(uVar25,bVar10 + 0x6f);
  *pbVar16 = *pbVar16 + bVar10 + 0x6f;
  pbVar57 = pbVar57 + -*puVar29;
  do {
    uStack_10 = (byte *)CONCAT22(uStack_10._2_2_,in_DS);
    bVar10 = *(byte *)((int)unaff_EDI + 0x17);
    *pbVar16 = *pbVar16 + (byte)pbVar16;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar21 >> 8) + bVar10 | (byte)*puVar29,
                                        (char)pbVar21));
    uVar25 = (undefined3)((uint)pbVar16 >> 8);
    bVar10 = (byte)pbVar16 | (byte)*puVar29;
    bVar7 = bVar10 - *(byte *)CONCAT31(uVar25,bVar10);
    puVar59 = (uint *)((int)puVar59 +
                      (uint)(bVar10 < *(byte *)CONCAT31(uVar25,bVar10)) +
                      *(int *)CONCAT31(uVar25,bVar7));
    pbVar16 = (byte *)CONCAT31(uVar25,bVar7);
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    *(byte *)puVar59 = (byte)*puVar59 + (char)puVar29;
    bVar10 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar7;
    *puVar29 = (uint)(pbVar16 + (uint)CARRY1(bVar10,bVar7) + *puVar29);
    if ((POPCOUNT(*puVar29 & 0xff) & 1U) != 0) {
      *(byte *)puVar59 = (byte)*puVar59 + 1;
      puVar61 = puVar59;
      goto code_r0x00403529;
    }
    *pbVar16 = *pbVar16 + bVar7;
    piVar19 = (int *)CONCAT31(uVar25,bVar7 + 0x6f);
code_r0x004034f3:
    *piVar19 = (int)(*piVar19 + (int)piVar19);
    *(byte *)puVar59 = (byte)*puVar59 + (char)piVar19;
    pbVar57 = pbVar57 + 1;
    pcVar18 = (char *)((int)((uint)piVar19 | 8) + *(int *)((uint)piVar19 | 8));
    *pcVar18 = *pcVar18 + (char)pcVar18;
    piVar19 = (int *)(pcVar18 + 0x53000000);
    bVar10 = (byte)piVar19;
    *(byte *)piVar19 = (char)*piVar19 + bVar10;
    *unaff_EBX = *unaff_EBX + (char)puVar29;
    *(byte *)piVar19 = (char)*piVar19 + bVar10;
    *pbVar57 = *pbVar57 - (char)unaff_EBX;
    uVar17 = *puVar59;
    *(byte *)puVar59 = (byte)*puVar59 + bVar10;
    if (CARRY1((byte)uVar17,bVar10)) goto code_r0x0040349e;
    uStack_10 = (byte *)CONCAT22(uStack_10._2_2_,in_ES);
    pcVar18[0x5300006f] = pcVar18[0x5300006f] + (char)((uint)puVar29 >> 8);
    pcVar18 = pcVar18 + 0x53000001;
    bVar7 = (byte)pcVar18;
    bRam7e060000 = bVar10;
    *pcVar18 = *pcVar18 + bVar7;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar7 + 0x2d);
    puVar59[(int)unaff_EDI * 2] =
         (uint)((int)puVar29 + (uint)(0xd2 < bVar7) + puVar59[(int)unaff_EDI * 2]);
    puVar61 = puVar59;
code_r0x00403529:
    puVar59 = puVar61 + 1;
    out(*puVar61,(short)puVar29);
    bVar10 = *pbVar16;
    bVar7 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar7;
  } while (!CARRY1(bVar10,bVar7));
  *pbVar16 = *pbVar16 + bVar7;
  uVar25 = (undefined3)((uint)pbVar16 >> 8);
  bVar7 = bVar7 | pbVar16[0x4000040];
  pcVar18 = (char *)CONCAT31(uVar25,bVar7);
  uVar62 = in_ES;
  if ((char)bVar7 < '\x01') goto code_r0x00403579;
  *pcVar18 = *pcVar18 + bVar7;
  cVar9 = bVar7 + 10;
  pcVar18 = (char *)CONCAT31(uVar25,cVar9);
  puVar61 = puVar59;
  if (cVar9 == '\0' || SCARRY1(bVar7,'\n') != cVar9 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar10 = (byte)pcVar18;
  *pcVar18 = *pcVar18 + bVar10;
  piVar19 = (int *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar10 + 0x2d);
  puVar59[(int)unaff_EDI * 2] =
       (uint)((int)puVar29 + (uint)(0xd2 < bVar10) + puVar59[(int)unaff_EDI * 2]);
  pbStack_1c = (byte *)CONCAT22(pbStack_1c._2_2_,in_ES);
code_r0x00403549:
  uVar17 = *puVar59;
  bVar10 = (byte)piVar19;
  *(byte *)puVar59 = (byte)*puVar59 + bVar10;
  if (!CARRY1((byte)uVar17,bVar10)) goto code_r0x004034f3;
  *(byte *)piVar19 = (char)*piVar19 + bVar10;
  uVar25 = (undefined3)((uint)piVar19 >> 8);
  bVar10 = bVar10 | *(byte *)((int)piVar19 + 0x4000041);
  if ((char)bVar10 < '\x01') {
    *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar21;
    *(byte *)puVar29 = (byte)*puVar29;
    pcVar18 = (char *)CONCAT31(uVar25,bVar10 + 0x7e);
    puVar29 = (uint *)((int)puVar29 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
  piVar19 = (int *)CONCAT31(uVar25,bVar10 + 0xb);
  puVar61 = puVar59;
code_r0x0040355b:
  pbVar57 = pbVar57 + -*(int *)((int)puVar61 + 2);
  *pbVar57 = *pbVar57 - (char)unaff_EBX;
  uVar17 = *puVar61;
  bVar10 = (byte)piVar19;
  *(byte *)puVar61 = (byte)*puVar61 + bVar10;
  if (CARRY1((byte)uVar17,bVar10)) goto code_r0x00403548;
code_r0x00403565:
  piVar19 = piVar19 + 0x1ec09c00;
  pbVar16 = (byte *)((int)unaff_EDI + (int)pbVar57 * 2);
  *pbVar16 = *pbVar16 + (char)piVar19;
  *(byte *)puVar61 = (byte)*puVar61 + (char)piVar19 + (char)*piVar19;
  puVar59 = puVar61 + 1;
  out(*puVar61,(short)puVar29);
  pcVar18 = (char *)CONCAT31((int3)((uint)piVar19 >> 8),cRam8c0a0000);
code_r0x00403579:
  *pbVar21 = *pbVar21 + (char)pcVar18;
  *(byte *)puVar29 = (byte)*puVar29 - (char)((uint)pcVar18 >> 8);
  puVar61 = puVar59;
code_r0x00403580:
  *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar21;
  puVar59 = puVar61 + 1;
  out(*puVar61,(short)puVar29);
  bVar10 = (byte)pcVar18;
  puVar29 = (uint *)((int)puVar29 + 1);
  bRam7e060000 = bVar10;
  *pcVar18 = *pcVar18 + bVar10;
  uVar25 = (undefined3)((uint)pcVar18 >> 8);
  bVar7 = bVar10 + 0x2d;
  pcVar18 = (char *)CONCAT31(uVar25,bVar7);
  puVar59[(int)unaff_EDI * 2] =
       (uint)((int)puVar29 + (uint)(0xd2 < bVar10) + puVar59[(int)unaff_EDI * 2]);
  pbStack_1c = (byte *)CONCAT22(pbStack_1c._2_2_,in_ES);
  uVar17 = *puVar59;
  *(byte *)puVar59 = (byte)*puVar59 + bVar7;
  if (!CARRY1((byte)uVar17,bVar7)) {
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar61 + 0x45),(char)unaff_EBX));
    goto code_r0x0040353f;
  }
  *pcVar18 = *pcVar18 + bVar7;
  bVar7 = bVar7 | pcVar18[0x4000042];
  pcVar18 = (char *)CONCAT31(uVar25,bVar7);
  if ('\0' < (char)bVar7) {
code_r0x004035a1:
    bVar7 = (byte)pcVar18;
    *pcVar18 = *pcVar18 + bVar7;
    uVar25 = (undefined3)((uint)pcVar18 >> 8);
    bVar10 = bVar7 + 10;
    if (bVar10 == 0 || SCARRY1(bVar7,'\n') != (char)bVar10 < '\0') {
      pcVar18 = (char *)CONCAT31(uVar25,bVar7 + 8 + (0xf5 < bVar7));
code_r0x004035e5:
      bVar7 = (byte)pcVar18;
      *pcVar18 = *pcVar18 + bVar7;
      uVar25 = (undefined3)((uint)pcVar18 >> 8);
      bVar10 = bVar7 + 0x2d;
      pcVar18 = (char *)CONCAT31(uVar25,bVar10);
      puVar59[(int)unaff_EDI * 2] =
           (uint)((int)puVar29 + (uint)(0xd2 < bVar7) + puVar59[(int)unaff_EDI * 2]);
      uVar17 = *puVar59;
      *(byte *)puVar59 = (byte)*puVar59 + bVar10;
      if (CARRY1((byte)uVar17,bVar10)) {
        *pcVar18 = *pcVar18 + bVar10;
        bVar10 = bVar10 | pcVar18[0x4000044];
        pbVar16 = (byte *)CONCAT31(uVar25,bVar10);
        if ('\0' < (char)bVar10) {
          *pbVar16 = *pbVar16 + bVar10;
          pbVar16 = (byte *)(CONCAT31(uVar25,bVar10 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar10));
          pbRam2a060000 = pbVar16;
          *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
          *(byte *)puVar29 = (byte)*puVar29 ^ (byte)pbVar16;
          *pbVar16 = *pbVar16 + (char)((uint)pbVar21 >> 8);
          *pbVar16 = *pbVar16 + (byte)pbVar16;
          puVar61 = unaff_EDI;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),
                                 (byte)pbVar21 |
                                 *(byte *)((int)(puVar29 + 0xa004000) + (int)unaff_EDI));
      puVar61 = puVar59;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
    bVar7 = bVar7 + 0x37;
    piVar19 = (int *)CONCAT31(uVar25,bVar7);
    puVar59[(int)unaff_EDI * 2] =
         (uint)((int)puVar29 + (uint)(0xd2 < bVar10) + puVar59[(int)unaff_EDI * 2]);
    pbStack_1c = (byte *)CONCAT22(pbStack_1c._2_2_,in_ES);
    uVar17 = *puVar59;
    *(byte *)puVar59 = (byte)*puVar59 + bVar7;
    puVar61 = puVar59;
    if (!CARRY1((byte)uVar17,bVar7)) goto code_r0x0040355b;
    *(byte *)piVar19 = (char)*piVar19 + bVar7;
    bVar7 = bVar7 | *(byte *)((int)piVar19 + 0x4000043);
    pbVar16 = (byte *)CONCAT31(uVar25,bVar7);
    if ((char)bVar7 < '\x01') {
      *pbVar16 = *pbVar16 + bVar7;
      pbVar57 = pbVar57 + -*(int *)((int)unaff_EDI + -0x5d);
      *pbVar16 = *pbVar16 + bVar7;
      uStack_24 = (undefined4 *)((uint)uStack_24._2_2_ << 0x10);
      piVar19 = (int *)CONCAT31(uVar25,bVar7 - *pbVar16);
      puVar59 = (uint *)((int)puVar59 + (-(uint)(bVar7 < *pbVar16) - *piVar19));
      pbVar16 = (byte *)CONCAT31(uVar25,(bVar7 - *pbVar16) + (char)*piVar19);
      pbStack_1c = (byte *)0x17000000;
      puVar61 = unaff_EDI;
code_r0x00403615:
      bVar10 = *pbVar16;
      bVar7 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar7;
      *puVar29 = (uint)(pbVar16 + (uint)CARRY1(bVar10,bVar7) + *puVar29);
      unaff_EDI = puVar61;
      if ((POPCOUNT(*puVar29 & 0xff) & 1U) == 0) {
        *pbVar16 = *pbVar16 + bVar7;
        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7 + 0x28);
        unaff_EDI = puVar61 + 1;
        uVar17 = in((short)puVar29);
        *puVar61 = uVar17;
        *pcVar18 = *pcVar18 + bVar7 + 0x28;
        pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar21 >> 8) | unaff_EBX[(int)pbVar21],
                                            (char)pbVar21));
        pcVar18[0x28] = pcVar18[0x28] + (char)((uint)puVar29 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar16 = *pbVar16 + bVar7;
    uVar17 = CONCAT31(uVar25,bVar7 + 0xb);
    piVar19 = (int *)(uVar17 - *puVar59);
    if (uVar17 < *puVar59) {
      cVar9 = (char)piVar19;
      *(char *)piVar19 = (char)*piVar19 + cVar9;
      uVar63 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar33 = (char)unaff_EBX;
      bVar10 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)puVar29 + 2);
      *pbVar57 = *pbVar57 - cVar33;
      *(byte *)puVar59 = (byte)*puVar59 + cVar9;
      uStack_24 = (undefined4 *)CONCAT22(uStack_24._2_2_,in_ES);
      unaff_EBX = (byte *)CONCAT22(uVar63,CONCAT11(bVar10 + *(char *)(CONCAT22(uVar63,CONCAT11(
                                                  bVar10,cVar33)) + 0x38),cVar33));
      *(char *)piVar19 = (char)*piVar19 + cVar9;
      pcVar18 = (char *)CONCAT31((int3)((uint)piVar19 >> 8),cVar9 + 'o');
      *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar21;
      *pcVar18 = *pcVar18 - cVar33;
      *pcVar18 = *pcVar18 + cVar9 + 'o';
      unaff_EDI = (uint *)((int)unaff_EDI - puVar59[0x11]);
      goto code_r0x004035e5;
    }
    puVar61 = puVar59 + 1;
    out(*puVar59,(short)puVar29);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar7) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_1c & 0x4000) != 0;
  bVar65 = ((uint)pbStack_1c & 0x400) != 0;
  in_IF = ((uint)pbStack_1c & 0x200) != 0;
  in_TF = ((uint)pbStack_1c & 0x100) != 0;
  in_AF = ((uint)pbStack_1c & 0x10) != 0;
  in_ID = ((uint)pbStack_1c & 0x200000) != 0;
  in_AC = ((uint)pbStack_1c & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar9 = (char)pcVar18;
  *pcVar18 = *pcVar18 + cVar9;
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((byte)((uint)pbVar21 >> 8) | (byte)*puVar29,(char)pbVar21));
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x3e],
                                        (char)unaff_EBX));
  *pcVar18 = *pcVar18 + cVar9;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar9 + '(');
  cVar9 = (char)((uint)puVar29 >> 8);
  *(byte *)((int)puVar29 + 0x21) = *(byte *)((int)puVar29 + 0x21) + cVar9;
  pbVar14 = pbVar16 + 2;
  *pbVar14 = *pbVar14 + cVar9;
  bVar10 = *pbVar14;
code_r0x00403643:
  cVar9 = (char)pbVar16;
  if ((POPCOUNT(bVar10) & 1U) == 0) {
    *pbVar16 = *pbVar16 + cVar9;
    uVar25 = (undefined3)((uint)pbVar16 >> 8);
    cVar33 = cVar9 + '(';
    pcVar18 = (char *)CONCAT31(uVar25,cVar33);
    in_AF = ((uint)pbVar16 & 0x1000) != 0;
    *pcVar18 = *pcVar18 + cVar33;
    puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),(byte)puVar29 | (byte)*puVar59);
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar59 + 0x3f),(char)unaff_EBX));
    *pcVar18 = *pcVar18 + cVar33;
    pbVar16 = (byte *)CONCAT31(uVar25,cVar9 + 'M');
    puVar29 = (uint *)((uint)puVar29 | *puVar29);
    *pbVar16 = *pbVar16 + (char)((uint)pbVar21 >> 8);
code_r0x00403659:
    puVar61 = (uint *)((int)unaff_EDI + (uint)bVar65 * -2 + 1);
    bVar10 = (byte)pbVar16;
    *(byte *)unaff_EDI = bVar10;
    *pbVar16 = *pbVar16 + bVar10;
    uVar25 = (undefined3)((uint)pbVar16 >> 8);
    bVar10 = bVar10 | (byte)*puVar29;
    pcVar18 = (char *)CONCAT31(uVar25,bVar10);
    unaff_EDI = puVar61;
    if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x0040369e;
    *pcVar18 = *pcVar18 + bVar10;
    bVar10 = bVar10 + 2;
    *pbVar57 = *pbVar57 - (char)unaff_EBX;
    *(byte *)puVar59 = (byte)*puVar59 + bVar10;
    puVar60 = puVar59 + (uint)bVar65 * -2 + 1;
    out(*puVar59,(short)puVar29);
    unaff_EDI = (uint *)((int)puVar61 + (uint)bVar65 * -2 + 1);
    puVar59 = (uint *)((int)puVar60 + (uint)bVar65 * -2 + 1);
    *(byte *)puVar61 = (byte)*puVar60;
    *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
    cVar33 = (char)((uint)pbVar21 >> 8);
    unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar33;
    cVar9 = (bVar10 | (byte)*puVar59) - 6;
    piVar19 = (int *)CONCAT31(uVar25,cVar9);
    pcVar18 = (char *)((int)piVar19 * 2 + 0x2adc0a00);
    *pcVar18 = *pcVar18 - cVar33;
    *piVar19 = (int)(*piVar19 + (int)puVar29);
    *(char *)piVar19 = (char)*piVar19 + cVar9;
    bVar10 = cVar9 + (char)*piVar19;
    in_AF = 9 < (bVar10 & 0xf) | in_AF;
    uVar17 = CONCAT31(uVar25,bVar10 + in_AF * '\x06') & 0xffffff0f;
    pbVar16 = (byte *)CONCAT22((short)(uVar17 >> 0x10),
                               CONCAT11((char)((uint)pbVar16 >> 8) + in_AF,(char)uVar17));
    pbVar14 = pbVar21;
  }
  else {
    *(byte *)puVar29 = (byte)*puVar29 + cVar9;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + (char)((uint)puVar29 >> 8);
    pbVar14 = pbVar21;
  }
  *(byte *)puVar59 = (byte)*puVar59 + (char)((uint)pbVar16 >> 8);
  *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar14;
  bVar7 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  bVar10 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  pbVar21 = pbVar14;
  pbVar57 = pbStack_1c;
  if (!CARRY1(bVar10,bVar7)) goto code_r0x004036a6;
  *pbVar16 = *pbVar16 + bVar7;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7 | pbVar16[0x400003f]);
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),
                             (char)pbVar14 - *(byte *)((int)puVar29 + 0x5040302));
  *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) - (char)((uint)pbVar14 >> 8);
  while( true ) {
code_r0x004036a6:
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(char)pbVar21 + (byte)*puVar59);
    pbVar16 = (byte *)(CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + '%') + 0x1ebd9f3);
    uStack_24 = (undefined4 *)CONCAT22(uStack_24._2_2_,in_ES);
    bVar10 = (byte)pbVar16;
    bVar64 = CARRY1(*pbVar16,bVar10);
    *pbVar16 = *pbVar16 + bVar10;
    puVar37 = uStack_24 + -1;
    *(undefined2 *)(uStack_24 + -1) = in_ES;
    cVar9 = (char)puVar29;
    if (bVar64) {
      *pbVar16 = *pbVar16 + bVar10;
      uVar63 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar8 = (byte)((uint)unaff_EBX >> 8) | pbVar57[0x47];
      pcVar18 = (char *)CONCAT22(uVar63,CONCAT11(bVar8,(char)unaff_EBX));
      *pbVar16 = *pbVar16 + bVar10;
      uVar25 = (undefined3)((uint)pbVar16 >> 8);
      bVar10 = bVar10 + 0x2a;
      *pcVar18 = *pcVar18 + cVar9;
      pbVar16 = (byte *)((int)CONCAT31(uVar25,bVar10) * 2);
      *pbVar16 = *pbVar16 ^ bVar10;
      bVar10 = bVar10 ^ *(byte *)CONCAT31(uVar25,bVar10);
      pbVar16 = (byte *)CONCAT31(uVar25,bVar10);
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar10;
      *pbVar16 = (*pbVar16 - bVar10) - CARRY1(bVar7,bVar10);
      *pbVar21 = *pbVar21 + cVar9;
      unaff_EBX = (byte *)CONCAT22(uVar63,CONCAT11(bVar8 + pcVar18[0x38],(char)unaff_EBX));
      *pbVar16 = *pbVar16 + bVar10;
      cVar33 = bVar10 + 2;
      if ((POPCOUNT(cVar33) & 1U) != 0) {
        pcVar1 = (code *)swi(7);
        uVar67 = (*pcVar1)();
        pbVar21 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar25,cVar33) = *(char *)CONCAT31(uVar25,cVar33) + cVar33;
      bVar10 = bVar10 + 0x71;
      pbVar16 = (byte *)CONCAT31(uVar25,bVar10);
      uVar62 = *(undefined2 *)(uStack_24 + -1);
      *pbVar16 = *pbVar16 + bVar10;
      iVar15 = (int)pbVar21 - *puVar29;
      pbVar21 = (byte *)CONCAT22((short)((uint)iVar15 >> 0x10),
                                 CONCAT11((char)((uint)iVar15 >> 8) + *pbVar16,(char)iVar15));
      pbVar57 = (byte *)*uStack_24;
      bVar64 = CARRY1(*pbVar16,bVar10);
      *pbVar16 = *pbVar16 + bVar10;
      *(undefined2 *)uStack_24 = in_ES;
      *(undefined2 *)(uStack_24 + -1) = in_ES;
    }
    bVar10 = (byte)pbVar16;
    uVar25 = (undefined3)((uint)pbVar16 >> 8);
    if (bVar64) break;
    *(byte *)puVar29 = (byte)*puVar29 + (byte)pbVar21;
    *(byte *)((int)puVar29 + (int)pbVar57) = *(byte *)((int)puVar29 + (int)pbVar57) + bVar10;
    pcVar18 = (char *)CONCAT31(uVar25,(byte)*puVar29);
code_r0x0040369e:
    pbVar16 = (byte *)(pcVar18 + *(int *)(pcVar18 + 0x6c28));
  }
  *pbVar16 = *pbVar16 + bVar10;
  uVar26 = (uint3)((uint)pbVar21 >> 8);
  pbVar14 = (byte *)CONCAT31(uVar26,(byte)pbVar21 | *unaff_EBX);
  uVar62 = *(undefined2 *)uStack_24;
  puVar37 = uStack_24 + 1;
  puVar61 = puVar59 + (uint)bVar65 * -2 + 1;
  out(*puVar59,(short)puVar29);
  unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar65 * -2 + 1);
  *pbVar16 = *pbVar16 + bVar10;
  bVar10 = bVar10 | (byte)*unaff_EDI;
  pbVar16 = (byte *)CONCAT31(uVar25,bVar10);
  *(byte *)(unaff_EDI + 0x1bc28000) = (byte)unaff_EDI[0x1bc28000] - (char)((uint)pbVar21 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar10);
  *(undefined2 *)uStack_24 = pbStack_1c._0_2_;
  cVar27 = (char)unaff_EBX;
  cVar33 = cVar27 - (byte)*puVar29;
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar33);
  if (cVar33 != '\0' && (char)(byte)*puVar29 <= cVar27) {
    *pbVar16 = *pbVar16 + bVar10;
    iVar15 = CONCAT31(uVar25,bVar10 + 0x2a);
    puVar59 = (uint *)((int)puVar61 + 1);
    cVar33 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + -0x7b);
    uVar67 = CONCAT44(CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(cVar33,cVar9)),iVar15);
    in_ES = *(undefined2 *)uStack_24;
    pcVar18 = (char *)(iVar15 + 0x6f);
    *pcVar18 = *pcVar18 + cVar33;
    pbVar14 = (byte *)((uint)uVar26 << 8);
    do {
      piVar19 = (int *)((ulonglong)uVar67 >> 0x20);
      pcVar18 = (char *)uVar67;
      *(char *)piVar19 = (char)*piVar19;
      if ((char)*piVar19 == '\0') {
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        pbStack_1c._0_2_ = in_ES;
_ctor:
        puVar29 = (uint *)((ulonglong)uVar67 >> 0x20);
        pbVar14 = (byte *)((uint)CONCAT21((short)((uint)pbVar14 >> 0x10),
                                          (char)((uint)pbVar14 >> 8) + *(char *)uVar67) << 8);
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        *(byte *)puVar29 = (byte)*puVar29;
        uVar25 = (undefined3)((ulonglong)uVar67 >> 8);
        bVar7 = (char)uVar67 - *(char *)uVar67;
        pbVar21 = (byte *)CONCAT31(uVar25,bVar7);
        bVar10 = *pbVar21;
        *pbVar21 = *pbVar21 + bVar7;
        puVar61 = (uint *)((int)puVar59 + (uint)CARRY1(bVar10,bVar7) + *(int *)pbVar21);
        pbVar16 = (byte *)CONCAT31(uVar25,bVar7);
        uStack_24 = puVar37;
        break;
      }
      *pcVar18 = *pcVar18 + (char)uVar67;
      *piVar19 = (int)(pbVar57 + *piVar19);
      puVar59 = (uint *)((int)puVar59 + 1);
      uVar67 = CONCAT44(CONCAT22((short)((ulonglong)uVar67 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar67 >> 0x28) +
                                          *(char *)((int)piVar19 + -0x33),
                                          (char)((ulonglong)uVar67 >> 0x20))),pcVar18);
      in_ES = *(undefined2 *)puVar37;
      puVar37 = (undefined4 *)((int)puVar37 + 4);
      pbVar21 = pbVar14;
code_r0x0040371e:
      puVar29 = (uint *)((ulonglong)uVar67 >> 0x20);
      pbVar16 = (byte *)uVar67;
      bVar7 = (byte)((ulonglong)uVar67 >> 0x28);
      pbVar16[0x6f] = pbVar16[0x6f] + bVar7;
      pbVar14 = (byte *)((uint)pbVar21 & 0xffffff00);
      *(char *)puVar29 = (char)*puVar29;
      bVar10 = (byte)uVar67;
      if ((char)*puVar29 != '\0') {
        *pbVar16 = *pbVar16 + bVar10;
        uVar17 = *puVar29;
        *puVar29 = (uint)(pbVar57 + *puVar29);
        piVar39 = (int *)((int)puVar37 + -4);
        *(uint **)((int)puVar37 + -4) = puVar59;
        if (CARRY4(uVar17,(uint)pbVar57)) {
          *pbVar16 = *pbVar16 + bVar10;
          *(undefined2 *)((int)puVar37 + -8) = in_ES;
          puVar61 = puVar29 + 0x1d028000;
          uVar17 = *puVar61;
          *(byte *)puVar61 = (byte)*puVar61 - bVar7;
          *(uint *)pbVar16 = (*(int *)pbVar16 - (int)pbVar16) - (uint)((byte)uVar17 < bVar7);
          *(byte *)puVar29 = (char)*puVar29 + bVar10;
          *pbVar57 = *pbVar57;
          uVar67 = CONCAT44(puVar29,CONCAT31((int3)((ulonglong)uVar67 >> 8),bVar10 + 0x2a));
          puVar38 = (undefined2 *)((int)puVar37 + -0xc);
          puVar37 = (undefined4 *)((int)puVar37 + -0xc);
          *puVar38 = in_DS;
          pbStack_1c._0_2_ = in_ES;
          goto _ctor;
        }
        bVar64 = false;
        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar21 >> 8),*pbVar16);
        goto code_r0x004037a7;
      }
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar10;
      *(uint *)pbVar16 = (*(int *)pbVar16 - (int)pbVar16) - (uint)CARRY1(bVar7,bVar10);
      bVar10 = *pbVar14;
      bVar7 = (byte)((ulonglong)uVar67 >> 0x20);
      *pbVar14 = *pbVar14 + bVar7;
      if (CARRY1(bVar10,bVar7)) goto code_r0x0040375a;
    } while( true );
  }
  uVar67 = CONCAT44(puVar29,pbVar16);
  puVar59 = puVar61 + (uint)bVar65 * -2 + 1;
  out(*puVar61,(short)puVar29);
  bVar7 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  *pbVar14 = *pbVar14 + (char)unaff_EBX;
  bVar10 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  *(byte **)(unaff_EBX + -0x49) =
       (byte *)((int)puVar59 + (uint)CARRY1(bVar10,bVar7) + *(int *)(unaff_EBX + -0x49));
  puVar37 = uStack_24;
  in_ES = pbStack_1c._0_2_;
code_r0x0040375a:
  pbVar21 = (byte *)uVar67;
  *pbVar21 = *pbVar21 + (char)uVar67;
  bVar64 = CARRY1((byte)((uint)pbVar14 >> 8),*pbVar21);
  *(undefined2 *)((int)puVar37 + -4) = uVar62;
  iVar15 = CONCAT31(0x1f0a00,bVar64 + 'o') + *(int *)(unaff_EBX + (int)pbVar57) +
           (uint)(0x90 < bVar64) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar67 >> 0x20);
  pcVar20 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + -0x66) | *unaff_EDI);
  bVar10 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar18 = (char *)CONCAT22(0xd0a,(ushort)bVar10 << 8);
  *pcVar20 = *pcVar20 + (char)pcVar20;
  bVar7 = (byte)((ulonglong)uVar67 >> 0x20);
  puVar30 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar67 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar67 >> 0x28) | unaff_EBX[(int)pbVar57],bVar7));
  *pcVar18 = *pcVar18 + (char)pcVar20;
  *pbVar57 = *pbVar57 - bVar10;
  *puVar30 = *puVar30;
  pbVar21 = (byte *)(((uint)pcVar20 | 8) + 0x4490f9d8);
  bVar10 = (byte)pbVar21;
  *pbVar21 = *pbVar21 + bVar10;
  uVar17 = *puVar59;
  *(uint *)((int)puVar59 + (int)pbVar21) = *(uint *)((int)puVar59 + (int)pbVar21) ^ (uint)pcVar18;
  *pbVar21 = *pbVar21 | bVar10;
  piVar39 = (int *)0x2609fffc;
  bVar64 = false;
  uRam2609fffc = in_ES;
  *pbVar21 = *pbVar21 | bVar10;
  uVar67 = CONCAT44(CONCAT31((int3)((uint)puVar30 >> 8),bVar7 | (byte)uVar17),pbVar21);
code_r0x004037a7:
  while( true ) {
    pbVar21 = (byte *)((ulonglong)uVar67 >> 0x20);
    uVar62 = (undefined2)((ulonglong)uVar67 >> 0x20);
    out(*puVar59,uVar62);
    out(puVar59[(uint)bVar65 * -2 + 1],uVar62);
    puVar29 = (uint *)((int)unaff_EDI + (int)pbVar21);
    uVar17 = *puVar29;
    uVar4 = (uint)uVar67 + *puVar29;
    *puVar29 = uVar4 + bVar64;
    iVar15 = *piVar39 + *(int *)(pcVar18 + (int)pbVar21) +
             (uint)(CARRY4(uVar17,(uint)uVar67) || CARRY4(uVar4,(uint)bVar64));
    cVar9 = (char)iVar15 + '\t';
    pbVar16 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),cVar9);
    pcVar20 = (char *)((uint)bVar65 * -8 + 0x260a0004);
    out(uRam260a0000,uVar62);
    uVar62 = (undefined2)piVar39[1];
    *pbVar16 = *pbVar16 + cVar9;
    bVar7 = (byte)((uint)pcVar18 >> 8) | *pbVar21;
    *(undefined2 *)(piVar39 + 1) = in_DS;
    bVar10 = *pbVar16;
    pbVar16 = pbVar16 + (uint)CARRY1(bVar7,*pbVar16) + *(int *)pbVar16;
    *pbVar21 = *pbVar21 + 6;
    cVar33 = (char)unaff_EBX - *pcVar20;
    pcVar18 = (char *)CONCAT22((short)((uint)pcVar18 >> 0x10),CONCAT11(bVar7 + bVar10 + *pbVar16,6))
    ;
    *pbVar16 = *pbVar16;
    *(undefined2 *)piVar39 = in_ES;
    uVar25 = (undefined3)((uint)pbVar16 >> 8);
    cVar9 = (char)pbVar16 - *pbVar16;
    piVar19 = (int *)CONCAT31(uVar25,cVar9);
    puVar59 = (uint *)(pcVar20 + *piVar19);
    bVar10 = cVar9 + (char)*piVar19;
    pcVar20 = (char *)CONCAT31(uVar25,bVar10);
    piVar40 = piVar39 + -1;
    piVar39[-1] = (int)pcVar18;
    *pcVar20 = *pcVar20 + bVar10;
    *pcVar20 = *pcVar20 + bVar10;
    *pcVar20 = *pcVar20 + bVar10;
    bVar64 = CARRY1(*pbVar21,bVar10);
    *pbVar21 = *pbVar21 + bVar10;
    if (bVar64) break;
    in_ES = (undefined2)piVar39[-1];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar33);
    uVar67 = CONCAT44(pbVar21,pcVar20);
  }
  *pcVar20 = *pcVar20 + bVar10;
  pbVar57 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam080a0056,cVar33));
  *pcVar20 = *pcVar20 + bVar10;
  bVar8 = bVar10 + 2;
  *pbVar57 = *pbVar57 - (char)((ulonglong)uVar67 >> 0x20);
  *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
  uVar17 = *puVar59;
  uVar28 = (undefined3)((uint)pcVar18 >> 8);
  pbVar16 = (byte *)(CONCAT31(uVar28,(byte)uVar17) | 6);
  bVar7 = 9 < (bVar10 + 0x74 & 0xf) | in_AF;
  bVar11 = bVar10 + 0x74 + bVar7 * '\x06';
  bVar11 = bVar11 + (0x90 < (bVar11 & 0xf0) | 0x8d < bVar8 | bVar7 * (0xf9 < bVar11)) * '`';
  pbVar14 = (byte *)CONCAT31(uVar25,bVar11);
  bVar10 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar11;
  if (!SCARRY1(bVar10,bVar11)) {
    *(byte *)puVar59 = (byte)*puVar59 + bVar11;
    puVar59 = (uint *)((int)puVar59 + *(int *)(pbVar21 + 0x33));
    *pbVar14 = *pbVar14 | bVar11;
    *(byte *)puVar59 = (byte)*puVar59 + bVar11;
    bVar10 = bVar11 + 0x72;
    piVar39[-2] = (int)pbVar57;
    *(byte *)CONCAT31(uVar25,bVar10) = *(byte *)CONCAT31(uVar25,bVar10) | bVar10;
    *(byte *)puVar59 = (byte)*puVar59 + bVar10;
    pbVar16 = (byte *)CONCAT31(uVar28,((byte)uVar17 | 6) + (byte)*puVar59);
    pcVar18 = (char *)CONCAT31(uVar25,bVar11 - 0x11);
    piVar40 = piVar39 + -3;
    piVar39[-3] = (int)pbVar16;
    *pcVar18 = *pcVar18 + (bVar11 - 0x11);
    pbVar14 = (byte *)CONCAT31(uVar25,bVar11 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar14 = *pbVar14 + (bVar11 - 0xf);
  }
code_r0x00403825:
  pbVar58 = (byte *)0x80a0000;
  uVar25 = (undefined3)((uint)pbVar14 >> 8);
  cVar9 = (char)pbVar14 + '\x7f';
  pcVar18 = (char *)CONCAT31(uVar25,cVar9);
  *(byte **)((int)piVar40 + -4) = pbVar57;
  *pcVar18 = *pcVar18 + cVar9;
  iVar15 = CONCAT31(uVar25,(char)pbVar14 + -0x7f) + 0x547d;
  cVar33 = (char)iVar15;
  uVar25 = (undefined3)((uint)iVar15 >> 8);
  cVar9 = cVar33 + '*';
  pcVar18 = (char *)CONCAT31(uVar25,cVar9);
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | (byte)*puVar59);
  cVar27 = (char)pbVar57 - (byte)*puVar59;
  uVar63 = (undefined2)((uint)pbVar57 >> 0x10);
  cVar34 = (char)((uint)pbVar57 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar57 >> 8),cVar27) + 0x57);
  *pcVar18 = *pcVar18 + cVar9;
  bVar10 = cVar33 + 0x54U & *pbVar21;
  iVar15 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
  pcVar18 = (char *)CONCAT31(uVar25,bVar10 + 0x2a);
  *(undefined2 *)((int)piVar40 + -8) = in_DS;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar34,cVar27)) + 0x58);
  *pcVar18 = *pcVar18 + bVar10 + 0x2a;
  bVar8 = bVar10 + 0x54 & *pbVar21;
  iVar3 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
  pcVar18 = (char *)CONCAT31(uVar25,bVar8 + 0x2a);
  pbVar14 = *(byte **)((int)piVar40 + -8);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar34,cVar27)) + 0x55);
  *pcVar18 = *pcVar18 + bVar8 + 0x2a;
  pcVar18 = (char *)CONCAT31(uVar25,bVar8 + 0x57);
  pbVar21 = pbVar21 + *(int *)pbVar14;
  *(undefined4 *)((int)piVar40 + -8) = 0x2a;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar34,cVar27)) + 0x55);
  *pcVar18 = *pcVar18 + bVar8 + 0x57;
  cVar9 = bVar8 - 0x3a;
  pcVar18 = (char *)CONCAT31(uVar25,cVar9);
  *(undefined2 *)((int)piVar40 + -0xc) = uVar62;
  *pcVar18 = *pcVar18 + cVar9;
  bVar10 = *pbVar21;
  cVar33 = (char)pbVar16;
  *(undefined2 *)((int)piVar40 + -0x10) = in_DS;
  pbVar57 = (byte *)CONCAT22(uVar63,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar63,CONCAT11(cVar34,
                                                  cVar27)) + 0x59),cVar27));
  *pcVar18 = *pcVar18 + cVar9;
  bVar12 = bVar8 - 0x10 & *pbVar21;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar3 + iVar15);
  *(char *)CONCAT31(uVar25,bVar12) = *(char *)CONCAT31(uVar25,bVar12) + bVar12;
  bVar12 = bVar12 + 0x2a;
  pbVar23 = (byte *)CONCAT31(uVar25,bVar12);
  puVar37 = (undefined4 *)((int)piVar40 + -0x14);
  *(undefined2 *)((int)piVar40 + -0x14) = in_DS;
  bVar8 = *(byte *)((int)unaff_EDI + 0x17);
  *pbVar23 = *pbVar23 + bVar12;
  bVar11 = *pbVar21;
  puVar42 = (undefined4 *)((int)piVar40 + -0x18);
  *(undefined2 *)((int)piVar40 + -0x18) = in_DS;
  bVar13 = *(byte *)((int)unaff_EDI + 0x1a);
  *pbVar23 = *pbVar23 + bVar12;
  pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar16 >> 8) | bVar10) + bVar8 | bVar11) +
                                      bVar13 | *pbVar21,cVar33));
  *pbVar57 = *pbVar57 + cVar27;
  *(byte *)((int)pbVar23 * 2) = *(byte *)((int)pbVar23 * 2) ^ bVar12;
  bVar10 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar12;
  bVar8 = *pbVar23;
  *pbVar16 = *pbVar16 + (char)pbVar21;
  bVar10 = ((bVar12 - bVar8) - CARRY1(bVar10,bVar12)) + *pbVar21;
  pbVar23 = (byte *)CONCAT31(uVar25,bVar10);
  if ((POPCOUNT(bVar10) & 1U) != 0) {
    pbVar21 = *(byte **)((int)piVar40 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar23 = *pbVar23 + bVar10;
  cVar9 = (bVar10 + 0x6f) - (0x90 < bVar10);
  pbVar22 = (byte *)CONCAT31(uVar25,cVar9);
  bVar10 = *pbVar21;
  *pbVar21 = *pbVar21 + cVar33;
  if (SCARRY1(bVar10,cVar33) == (char)*pbVar21 < '\0') {
    cRam33100000 = cRam33100000 - cVar9;
    cVar9 = cVar9 + *pbVar21;
    pbVar23 = (byte *)CONCAT31(uVar25,cVar9);
    puVar37 = (undefined4 *)((int)piVar40 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar22 = *pbVar22 + (char)pbVar22;
code_r0x004038b0:
    uVar25 = (undefined3)((uint)pbVar22 >> 8);
    cVar9 = (char)pbVar22 + '\x02';
    pbVar23 = (byte *)CONCAT31(uVar25,cVar9);
    puVar37 = puVar42;
    if ((POPCOUNT(cVar9) & 1U) != 0) {
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar14);
      cVar9 = (char)pbVar23 + *pbVar21;
      pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar9);
code_r0x0040390c:
      cVar33 = (char)pbVar23;
      if ((POPCOUNT(cVar9) & 1U) == 0) goto code_r0x0040390e;
      *pbVar14 = *pbVar14 + cVar33;
      goto code_r0x00403962;
    }
    *pbVar23 = *pbVar23 + cVar9;
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    piVar40 = (int *)((int)puVar42 + -4);
    *(byte **)((int)puVar42 + -4) = pbVar16;
    cVar9 = (char)pbVar22 + '.' + *pbVar21;
    pbVar23 = (byte *)CONCAT31(uVar25,cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) {
      pbVar22 = pbVar21 + (int)pbVar23;
      *pbVar22 = *pbVar22 + cVar9;
      bVar10 = *pbVar22;
      goto code_r0x00403912;
    }
    *pbVar23 = *pbVar23 + cVar9;
    bVar10 = cVar9 + 2;
    pbVar23 = (byte *)CONCAT31(uVar25,bVar10);
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x00403916;
    *pbVar23 = *pbVar23 + bVar10;
    cVar33 = cVar9 + 'q';
    piVar19 = (int *)CONCAT31(uVar25,cVar33);
    *piVar19 = (*piVar19 - (int)piVar19) - (uint)(0x90 < bVar10);
    bVar10 = *pbVar57;
    bVar8 = (byte)((uint)pbVar16 >> 8);
    *pbVar57 = *pbVar57 + bVar8;
    if (!CARRY1(bVar10,bVar8)) {
      out(*(undefined4 *)pbVar14,(short)pbVar21);
      bVar10 = (cVar33 - (char)*piVar19) - CARRY1(bVar10,bVar8);
      *pbVar21 = *pbVar21 + (char)pbVar16;
      cVar9 = bVar10 - *(byte *)CONCAT31(uVar25,bVar10);
      puVar59 = (uint *)(pbVar14 +
                        ((((uint)bVar65 * -8 + 4) - *(int *)CONCAT31(uVar25,cVar9)) -
                        (uint)(bVar10 < *(byte *)CONCAT31(uVar25,bVar10))));
      pbVar14 = (byte *)CONCAT31(uVar25,cVar9);
      goto code_r0x00403825;
    }
    *(char *)piVar19 = (char)*piVar19 + cVar33;
    uVar63 = (undefined2)((uint)pbVar57 >> 0x10);
    bVar10 = (byte)((uint)pbVar57 >> 8) | bRam080a0056;
    *(char *)piVar19 = (char)*piVar19 + cVar33;
    pcVar18 = (char *)CONCAT31(uVar25,cVar9 + 's');
    pbVar57 = (byte *)CONCAT22(uVar63,CONCAT11(bVar10 + *(char *)(CONCAT22(uVar63,CONCAT11(bVar10,(
                                                  char)pbVar57)) + 0x56),(char)pbVar57));
    *pcVar18 = *pcVar18 + cVar9 + 's';
    bVar10 = cVar9 - 0xf;
    pbVar21 = *(byte **)((int)puVar42 + -4);
    *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
    bVar8 = cVar9 + 0x1e;
    pbVar22 = (byte *)CONCAT31(uVar25,bVar8);
    *(byte **)(pbVar14 + (int)unaff_EDI * 8) =
         pbVar21 + (uint)(0xd2 < bVar10) + *(int *)(pbVar14 + (int)unaff_EDI * 8);
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    puVar44 = (undefined4 *)((int)puVar42 + -4);
    *(undefined2 *)((int)puVar42 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar22;
    bVar10 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar8;
    if (CARRY1(bVar10,bVar8)) {
      *pbVar22 = *pbVar22 + bVar8;
      pbVar23 = (byte *)CONCAT31(uVar25,bVar8 | pbVar22[0x400005a]);
      if ('\0' < (char)(bVar8 | pbVar22[0x400005a])) {
code_r0x004038f6:
        bVar10 = (byte)pbVar23;
        *pbVar23 = *pbVar23 + bVar10;
        uVar25 = (undefined3)((uint)pbVar23 >> 8);
        cVar9 = ((bVar10 + 0x28) - *(char *)CONCAT31(uVar25,bVar10 + 0x28)) - (0xd7 < bVar10);
        pbVar23 = (byte *)CONCAT31(uVar25,cVar9);
        bVar10 = *pbVar57;
        bVar8 = (byte)((uint)pbVar16 >> 8);
        *pbVar57 = *pbVar57 + bVar8;
        if (CARRY1(bVar10,bVar8)) {
          *pbVar23 = *pbVar23 + cVar9;
          pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar23,(char)pbVar16));
          *pbVar14 = *pbVar14 + cVar9;
          goto code_r0x00403908;
        }
        pbVar22 = pbVar23 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar25 = (undefined3)((uint)pbVar23 >> 8);
      bVar8 = (char)pbVar23 + 0x6f;
      bVar10 = *(byte *)CONCAT31(uVar25,bVar8);
      *pbVar21 = *pbVar21 + (char)pbVar16;
      pbVar23 = (byte *)CONCAT31(uVar25,(bVar8 & bVar10) + *pbVar14);
      *pbVar16 = *pbVar16 - (char)((uint)pbVar21 >> 8);
      puVar49 = puVar44;
      goto code_r0x0040395a;
    }
    puVar41 = (undefined4 *)((int)puVar42 + -8);
    puVar42 = (undefined4 *)((int)puVar42 + -8);
    *puVar41 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar19 = (char)*piVar19 + bVar10;
  puVar59 = puVar61;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar23 = *pbVar23 + cVar33;
  bVar10 = cVar33 + 2;
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),bVar10);
code_r0x00403912:
  bVar64 = (POPCOUNT(bVar10) & 1U) == 0;
  puVar49 = puVar37;
  if (!bVar64) goto code_r0x00403967;
  *pbVar23 = *pbVar23 + (char)pbVar23;
code_r0x00403916:
  bVar13 = (char)pbVar23 + 0x6f;
  pbVar22 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar23 >> 8),bVar13);
  bVar8 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar13;
  bVar11 = *pbVar22;
  bVar10 = *pbVar22;
  puVar49 = (undefined4 *)((int)puVar37 + -4);
  *(undefined2 *)((int)puVar37 + -4) = in_ES;
  if (bVar10 == 0 || SCARRY1(bVar8,bVar13) != (char)bVar11 < '\0') goto code_r0x00403979;
  *pbVar22 = *pbVar22 + bVar13;
  pbVar22 = (byte *)CONCAT31((int3)(char)((uint)pbVar23 >> 8),(char)pbVar23 + -100);
  *(byte **)(pbVar14 + (int)unaff_EDI * 8) =
       pbVar21 + (uint)(0xd2 < bVar13) + *(int *)(pbVar14 + (int)unaff_EDI * 8);
  puVar43 = (undefined2 *)((int)puVar37 + -8);
  puVar37 = (undefined4 *)((int)puVar37 + -8);
  *puVar43 = in_ES;
code_r0x00403926:
  puVar42 = puVar37 + 1;
  puVar49 = puVar37 + 1;
  puVar44 = puVar37 + 1;
  *(undefined4 *)pbVar22 = *puVar37;
  bVar10 = *pbVar14;
  bVar8 = (byte)pbVar22;
  *pbVar14 = *pbVar14 + bVar8;
  if (CARRY1(bVar10,bVar8)) {
    *pbVar22 = *pbVar22 + bVar8;
    uVar25 = (undefined3)((uint)pbVar22 >> 8);
    bVar8 = bVar8 | pbVar22[0x400005b];
    pbVar23 = (byte *)CONCAT31(uVar25,bVar8);
    pbVar22 = pbVar14;
    if ((char)bVar8 < '\x01') goto code_r0x00403991;
    *pbVar23 = *pbVar23 + bVar8;
    cVar9 = bVar8 + 0x28;
    pbVar23 = (byte *)CONCAT31(uVar25,cVar9);
    *(byte **)pbVar23 = pbVar23 + (uint)(0xd7 < bVar8) + *(int *)pbVar23;
    bVar10 = *pbVar57;
    bVar8 = (byte)((uint)pbVar16 >> 8);
    *pbVar57 = *pbVar57 + bVar8;
    if (CARRY1(bVar10,bVar8)) {
      *pbVar23 = *pbVar23 + cVar9;
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                 CONCAT11(bVar8 | *pbVar23,(char)pbVar16));
      *pbVar14 = *pbVar14 + cVar9;
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                 CONCAT11((char)((uint)pbVar57 >> 8) + pbVar57[0x55],(char)pbVar57))
      ;
      *pbVar23 = *pbVar23 + cVar9;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar37 = in_ES;
code_r0x00403962:
    puVar49 = (undefined4 *)((int)puVar37 + -4);
    *(undefined2 *)((int)puVar37 + -4) = uVar62;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar23 = *pbVar23 + (char)pbVar23;
  puVar45 = (undefined2 *)((int)puVar49 + -4);
  puVar49 = (undefined4 *)((int)puVar49 + -4);
  *puVar45 = in_ES;
  pbVar21[0x16060000] = pbVar21[0x16060000] - (char)pbVar16;
  pbVar57 = (byte *)((uint)pbVar57 | (uint)pbVar14);
  cVar9 = (char)pbVar23 + '\x02';
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar9);
  bVar64 = (POPCOUNT(cVar9) & 1U) == 0;
code_r0x00403967:
  if (!bVar64) goto code_r0x004039be;
  *pbVar23 = *pbVar23 + (char)pbVar23;
  uVar25 = (undefined3)((uint)pbVar23 >> 8);
  bVar10 = (char)pbVar23 + 0x6f;
  bVar10 = bVar10 & *(byte *)CONCAT31(uVar25,bVar10);
  pbVar22 = (byte *)CONCAT31(uVar25,bVar10);
  *pbVar21 = *pbVar21 + (char)pbVar16;
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(char)pbVar21 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar10;
code_r0x00403979:
  do {
    bVar10 = (char)pbVar22 - (byte)*unaff_EDI;
    bVar64 = bVar10 < *pbVar16;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar10 - *pbVar16);
    do {
      cVar9 = (char)pbVar23;
      *pbVar23 = *pbVar23 + cVar9 + bVar64;
      *pbVar23 = *pbVar23 + cVar9;
      *pbVar16 = *pbVar16 + (char)pbVar21;
      pbVar16[0x101c00aa] = pbVar16[0x101c00aa] + (char)pbVar57;
      *pbVar23 = *pbVar23 + cVar9;
      *(byte **)pbVar14 = pbVar57 + *(int *)pbVar14;
      bVar10 = (byte)((uint)pbVar16 >> 8);
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                 CONCAT11(bVar10 + *pbVar23,(char)pbVar16));
      pbVar23 = pbVar23 + (uint)CARRY1(bVar10,*pbVar23) + *(int *)pbVar23;
      pbVar22 = pbVar14;
code_r0x00403991:
      cVar9 = (char)pbVar16;
      *pbVar21 = *pbVar21 + cVar9;
      cVar33 = (char)pbVar57 - pbVar22[2];
      pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),cVar33);
      pbVar14 = pbVar22;
      if ((POPCOUNT(cVar33) & 1U) != 0) goto code_r0x0040395a;
      *pbVar23 = *pbVar23 + (byte)pbVar23;
      uVar26 = (uint3)((uint)pbVar23 >> 8);
      bVar10 = (byte)pbVar23 | *pbVar57;
      piVar19 = (int *)CONCAT31(uVar26,bVar10);
      bVar8 = (byte)((uint)pbVar16 >> 8);
      bVar11 = (byte)pbVar21;
      if (bVar10 == 0) {
        *(char *)piVar19 = (char)*piVar19;
        puVar49 = (undefined4 *)((int)puVar49 + -*(int *)(pbVar58 + 0x1b000007));
        pbVar14 = pbVar22 + (uint)bVar65 * -8 + 4;
        out(*(undefined4 *)pbVar22,(short)pbVar21);
        pbVar23 = (byte *)((uint)uVar26 << 8);
        *pbVar21 = *pbVar21 + cVar9;
        pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar11 - *pbVar57);
        *pbVar57 = *pbVar57;
        *pbVar21 = *pbVar21 + bVar8;
        *pbVar23 = *pbVar23;
        *pbVar57 = *pbVar57 + cVar33;
        *pbVar23 = *pbVar23;
        *(byte **)(pbVar57 + -0x3d) = pbVar14 + *(int *)(pbVar57 + -0x3d);
        break;
      }
      pbVar58 = pbVar58 + -unaff_EDI[9];
      *(byte *)piVar19 = (char)*piVar19 + bVar10;
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),CONCAT11(bVar8 | *pbVar21,cVar9));
      pbVar14 = pbVar22 + *piVar19;
      pcVar18 = (char *)((int)piVar19 + *piVar19);
      bVar8 = (char)pcVar18 - *pcVar18;
      pbVar23 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar8);
      bVar10 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar8;
      pbVar23 = pbVar23 + (-(uint)CARRY1(bVar10,bVar8) - *(int *)pbVar23);
      bVar64 = CARRY1(*pbVar16,bVar11);
      *pbVar16 = *pbVar16 + bVar11;
    } while (!bVar64);
    *pbVar23 = *pbVar23 + (char)pbVar23;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | *pbVar21);
code_r0x004039be:
    puVar37 = (undefined4 *)((int)puVar49 + -4);
    puVar46 = (undefined1 *)((int)puVar49 + -4);
    *(undefined2 *)((int)puVar49 + -4) = in_ES;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar58 + -0x3c));
    *pbVar23 = *pbVar23 + (byte)pbVar23;
    uVar25 = (undefined3)((uint)pbVar23 >> 8);
    bVar10 = (byte)pbVar23 | *pbVar21;
    pcVar18 = (char *)CONCAT31(uVar25,bVar10);
    if ((POPCOUNT(bVar10) & 1U) != 0) {
      cVar9 = *pcVar18;
      *pcVar18 = *pcVar18 + bVar10;
      cVar33 = *pcVar18;
      puVar30 = (undefined1 *)((int)puVar49 + -4);
      if (!SCARRY1(cVar9,bVar10)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar37 = (undefined4 *)puVar30;
      cVar9 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar9;
      uVar25 = (undefined3)((uint)pcVar18 >> 8);
      bVar10 = cVar9 + 2;
      if ((POPCOUNT(bVar10) & 1U) != 0) {
        pcVar18 = (char *)CONCAT31(uVar25,bVar10 + *pbVar21);
        pbVar23 = pbVar14;
        if ((POPCOUNT(bVar10 + *pbVar21) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar14 + (int)unaff_EDI * 8) =
             pbVar21 + (uint)(0xd2 < (byte)pcVar18) + *(int *)(pbVar14 + (int)unaff_EDI * 8);
        puVar48 = (undefined2 *)((int)puVar37 + -4);
        puVar37 = (undefined4 *)((int)puVar37 + -4);
        *puVar48 = in_ES;
        pbVar22 = pbVar58;
        pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),(byte)pcVar18 + 0x2d);
code_r0x00403ad8:
        pbVar58 = pbVar24;
        bVar10 = *pbVar22;
        bVar8 = (byte)pbVar22;
        *pbVar22 = *pbVar22 + bVar8;
        puVar49 = (undefined4 *)((int)puVar37 + -4);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        puVar30 = (undefined1 *)((int)puVar37 + -4);
        if (CARRY1(bVar10,bVar8)) {
          *pbVar22 = *pbVar22 + bVar8;
          bVar8 = bVar8 | pbVar22[0x400005d];
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar8);
          pbVar23 = pbVar14;
          if ((char)bVar8 < '\x01') {
            *pbVar22 = *pbVar22 + bVar8;
            pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar16 >> 8) | *pbVar21,(char)pbVar16)
                                      );
            pbVar23 = *(byte **)((int)puVar37 + -4);
            pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                       CONCAT11((char)((uint)pbVar57 >> 8) + pbVar57[-0x39],
                                                (char)pbVar57));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar22 = *pbVar22 + (char)pbVar22;
          cVar9 = (char)pbVar22 + '(';
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          bVar10 = *pbVar57;
          bVar8 = (byte)((uint)pbVar16 >> 8);
          *pbVar57 = *pbVar57 + bVar8;
          pbVar14 = pbVar23;
          if (!CARRY1(bVar10,bVar8)) {
            puVar37 = (undefined4 *)((int)puVar49 + -4);
            *(undefined2 *)((int)puVar49 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar22 = *pbVar22 + cVar9;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
      piVar19 = (int *)CONCAT31(uVar25,cVar9 + '*');
      *piVar19 = (*piVar19 - (int)piVar19) - (uint)(0xd7 < bVar10);
      bVar10 = *pbVar21;
      bVar13 = (byte)pbVar16;
      *pbVar21 = *pbVar21 + bVar13;
      out(*(undefined4 *)pbVar14,(short)pbVar21);
      bVar11 = ((cVar9 + '*') - (char)*piVar19) - CARRY1(bVar10,bVar13);
      pbVar23 = (byte *)CONCAT31(uVar25,bVar11);
      *pbVar21 = *pbVar21 + bVar13;
      uVar63 = (undefined2)((uint)pbVar57 >> 0x10);
      uVar31 = SUB41(pbVar57,0);
      cVar9 = (char)((uint)pbVar57 >> 8) - pbVar14[(uint)bVar65 * -8 + 0x1f];
      pbVar57 = (byte *)CONCAT22(uVar63,CONCAT11(cVar9,uVar31));
      *pbVar23 = *pbVar23 + bVar11;
      bVar8 = *pbVar21;
      bVar10 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar11;
      pbVar14 = pbVar14 + ((((uint)bVar65 * -8 + 4) - *(int *)pbVar23) - (uint)CARRY1(bVar10,bVar11)
                          );
      pbVar23 = (byte *)CONCAT31(uVar25,bVar11);
      pbVar16 = (byte *)(CONCAT22((short)((uint)pbVar16 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar16 >> 8) | bVar8,bVar13)) + -1);
      bVar10 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar11;
      bVar10 = (bVar11 - *pbVar23) - CARRY1(bVar10,bVar11);
      *pbVar16 = *pbVar16 + (char)pbVar21;
      bVar64 = CARRY1(bVar10,*pbVar21);
      bVar10 = bVar10 + *pbVar21;
      pbVar23 = (byte *)CONCAT31(uVar25,bVar10);
      if ((POPCOUNT(bVar10) & 1U) == 0) {
        *pbVar23 = *pbVar23 + bVar10;
        cVar33 = (bVar10 + 0x6f) - (0x90 < bVar10);
        pbVar22 = (byte *)CONCAT31(uVar25,cVar33);
        bVar10 = *pbVar21;
        *pbVar21 = *pbVar21 + (char)pbVar16;
        if (SCARRY1(bVar10,(char)pbVar16) == (char)*pbVar21 < '\0') {
code_r0x00403aaf:
          cVar9 = (char)pbVar22 + '(';
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          bVar10 = *pbVar57;
          bVar8 = (byte)((uint)pbVar16 >> 8);
          *pbVar57 = *pbVar57 + bVar8;
          pbVar24 = pbVar58;
          if (!CARRY1(bVar10,bVar8)) goto code_r0x00403ad8;
          *pbVar22 = *pbVar22 + cVar9;
          pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar57,(char)pbVar16));
          if ((POPCOUNT(*pbVar21 - cVar9) & 1U) != 0) {
            *pbVar14 = *pbVar14 + cVar9;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar22 = *pbVar22 + cVar33;
          pcVar18 = (char *)CONCAT31(uVar25,cVar33 + '\x02');
          bVar8 = cVar9 + pbVar57[0x52];
          pbVar57 = (byte *)CONCAT22(uVar63,CONCAT11(bVar8,uVar31));
          *pcVar18 = *pcVar18 + cVar33 + '\x02';
          bVar10 = cVar33 + 4;
          pbVar22 = (byte *)CONCAT31(uVar25,bVar10);
          if ((POPCOUNT(bVar10) & 1U) == 0) {
            *pbVar22 = *pbVar22 + bVar10;
            cVar9 = (cVar33 + 's') - (0x90 < bVar10);
            pcVar18 = (char *)CONCAT31(uVar25,cVar9);
            bVar10 = (byte)((uint)pbVar16 >> 8);
            bVar64 = CARRY1(*pbVar57,bVar10);
            *pbVar57 = *pbVar57 + bVar10;
            pbVar23 = pbVar14;
            if (bVar64) {
              *pcVar18 = *pcVar18 + cVar9;
              pbVar57 = (byte *)CONCAT22(uVar63,CONCAT11(bVar8 | pbVar58[0x5c],uVar31));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar22);
          pbVar57 = (byte *)CONCAT22(uVar63,CONCAT11(bVar8 + pbVar57[0x52],uVar31));
        }
        *pbVar22 = *pbVar22 + (char)pbVar22;
        cVar9 = (char)pbVar22 + '\x02';
        pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
        bVar64 = (POPCOUNT(cVar9) & 1U) == 0;
        if (!bVar64) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar10 = (byte)pbVar23;
        *pbVar23 = *pbVar23 + bVar10;
        cVar9 = (bVar10 + 0x6f) - (0x90 < bVar10);
        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar9);
        bVar10 = *pbVar57;
        cVar33 = (char)((uint)pbVar16 >> 8);
        *pbVar57 = *pbVar57 + cVar33;
        if (*pbVar57 == 0 || SCARRY1(bVar10,cVar33) != (char)*pbVar57 < '\0') goto code_r0x00403b2c;
        *pcVar18 = *pcVar18 + cVar9;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar64) {
        pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                   CONCAT11((char)((uint)pbVar57 >> 8) + pbVar57[0x53],(char)pbVar57
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar23 = *pbVar23 + (byte)pbVar23;
      bVar10 = (byte)pbVar23 | pbVar23[0x400005e];
      pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),bVar10);
      if ('\0' < (char)bVar10) {
        *pbVar22 = *pbVar22 + bVar10;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar18 = *pcVar18 + bVar10;
    *pbVar14 = *pbVar14 + 1;
    uVar2 = *(undefined6 *)CONCAT31(uVar25,bVar10 + 6);
    pbVar22 = (byte *)uVar2;
    bVar10 = *pbVar21;
    bVar8 = (byte)pbVar16;
    *pbVar21 = *pbVar21 + bVar8;
    if (CARRY1(bVar10,bVar8)) {
      *pbVar22 = *pbVar22 + (char)uVar2;
      bVar11 = (byte)((uint)pbVar16 >> 8) | *pbVar22;
      uVar63 = CONCAT11(bVar11,bVar8);
      pbVar22 = pbVar22 + -*(int *)pbVar22;
      bVar10 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar11;
      if (CARRY1(bVar10,bVar11)) {
        cVar33 = (char)pbVar22;
        *pbVar22 = *pbVar22 + cVar33;
        bVar10 = *pbVar21;
        pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                   CONCAT11((char)((uint)pbVar21 >> 8) - pbVar57[-0x3a],
                                            (char)pbVar21));
        *pbVar22 = *pbVar22 + cVar33;
        uVar36 = (undefined2)((uint)pbVar57 >> 0x10);
        bVar35 = (byte)((uint)pbVar57 >> 8) | pbVar21[0x32];
        pcVar18 = (char *)CONCAT22(uVar36,CONCAT11(bVar35,(char)pbVar57));
        cVar9 = *pcVar18;
        puVar46 = (undefined1 *)((int)puVar49 + -8);
        *(undefined2 *)((int)puVar49 + -8) = in_CS;
        cVar9 = cVar33 + cVar9 + '-';
        pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
        *pbVar22 = *pbVar22;
        *(undefined2 *)((int)puVar49 + -0xc) = in_ES;
        bVar13 = *pbVar21;
        uVar62 = *(undefined2 *)((int)puVar49 + -0xc);
        cVar33 = (char)pbVar57 - *pbVar14;
        bVar12 = *(byte *)((int)unaff_EDI + 0x17);
        *pbVar22 = *pbVar22 + cVar9;
        uVar63 = CONCAT11((bVar11 | bVar10) + bVar12 | *pbVar21,bVar8 - bVar13);
        pbVar57 = (byte *)CONCAT22(uVar36,CONCAT11(bVar35 + *(char *)(CONCAT31((int3)((uint)pcVar18
                                                                                     >> 8),cVar33) +
                                                                     0x4e),cVar33));
        *pbVar22 = *pbVar22 + cVar9;
      }
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),uVar63);
      bVar10 = (byte)pbVar22;
      uVar25 = (undefined3)((uint)pbVar22 >> 8);
      pcVar18 = (char *)CONCAT31(uVar25,bVar10 + 0x28);
      *pcVar18 = (*pcVar18 - (bVar10 + 0x28)) - (0xd7 < bVar10);
      *pbVar21 = *pbVar21 + (char)uVar63;
      bVar8 = bVar10 + 0x1b;
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                 CONCAT11((char)((uint)pbVar57 >> 8) + pbVar57[0x4f],(char)pbVar57))
      ;
      *(char *)CONCAT31(uVar25,bVar8) = *(char *)CONCAT31(uVar25,bVar8) + bVar8;
      pcVar20 = (char *)CONCAT31(uVar25,bVar10 + 0x43);
      *pcVar20 = (*pcVar20 - (bVar10 + 0x43)) - (0xd7 < bVar8);
      *pbVar21 = *pbVar21 + (char)uVar63;
      pcVar18 = pcVar20 + -0x6b721c;
      pcVar20 = pcVar20 + -0x6b721a;
      *pcVar20 = *pcVar20 + (char)((uint)pbVar21 >> 8);
      cVar33 = *pcVar20;
      puVar37 = (undefined4 *)puVar46;
code_r0x00403a22:
      puVar30 = (undefined1 *)puVar37;
      if ((POPCOUNT(cVar33) & 1U) == 0) goto code_r0x00403a24;
      bVar10 = *pbVar21;
      *pbVar21 = *pbVar21 + (char)pbVar16;
      if (SCARRY1(bVar10,(char)pbVar16) == (char)*pbVar21 < '\0') {
        pbVar22 = pbVar58;
        pbVar24 = (byte *)(pcVar18 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar18 = *pcVar18 + (char)pcVar18;
      pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x02');
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                 CONCAT11((char)((uint)pbVar57 >> 8) + pbVar57[0x54],(char)pbVar57))
      ;
      pbVar23 = pbVar14;
code_r0x00403a7d:
      cVar9 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar9;
      uVar25 = (undefined3)((uint)pcVar18 >> 8);
      cVar33 = cVar9 + '-';
      pbVar24 = (byte *)CONCAT31(uVar25,cVar33);
      pbVar22 = pbVar58;
      pbVar14 = pbVar23;
      if ((POPCOUNT(cVar33 - *pbVar21) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar24 = *pbVar24 + cVar33;
      bVar10 = cVar9 + 0x2f;
      if ((POPCOUNT(bVar10) & 1U) != 0) {
        bVar10 = *pbVar21;
        *pbVar21 = *pbVar21 + (byte)pbVar16;
        *pbVar58 = *pbVar58 - CARRY1(bVar10,(byte)pbVar16);
        pbVar22 = (byte *)CONCAT31(uVar25,cVar9 + -0x53);
        pbVar58 = (byte *)*puVar37;
        puVar49 = puVar37 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
      bVar64 = 0x90 < bVar10;
      pcVar18 = (char *)CONCAT31(uVar25,cVar9 + -0x62);
code_r0x00403a8f:
      uVar25 = (undefined3)((uint)pcVar18 >> 8);
      bVar8 = (char)pcVar18 - bVar64;
      pbVar22 = (byte *)CONCAT31(uVar25,bVar8);
      bVar10 = *pbVar57;
      cVar9 = (char)((uint)pbVar16 >> 8);
      *pbVar57 = *pbVar57 + cVar9;
      puVar49 = puVar37;
      pbVar14 = pbVar23;
      if (*pbVar57 != 0 && SCARRY1(bVar10,cVar9) == (char)*pbVar57 < '\0') {
        *pbVar22 = *pbVar22 + bVar8;
        pbVar14 = (byte *)CONCAT31(uVar25,bVar8 + 0x2d);
        *(byte **)(pbVar23 + (int)unaff_EDI * 8) =
             pbVar21 + (uint)(0xd2 < bVar8) + *(int *)(pbVar23 + (int)unaff_EDI * 8);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        bVar64 = CARRY1(*pbVar23,(byte)pbVar23);
        *pbVar23 = *pbVar23 + (byte)pbVar23;
        puVar47 = (undefined2 *)((int)puVar37 + -8);
        puVar37 = (undefined4 *)((int)puVar37 + -8);
        *puVar47 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar16 >> 8) | *pbVar22,(char)pbVar16));
      *pbVar14 = *pbVar14 + (char)pbVar22;
      puVar30 = (undefined1 *)puVar49;
code_r0x00403afc:
      puVar37 = (undefined4 *)puVar30;
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                 CONCAT11((char)((uint)pbVar57 >> 8) + pbVar57[0x55],(char)pbVar57))
      ;
      *pbVar22 = *pbVar22 + (char)pbVar22;
      uVar25 = (undefined3)((uint)pbVar22 >> 8);
      bVar8 = (char)pbVar22 + 0x6f;
      bVar10 = *(byte *)CONCAT31(uVar25,bVar8);
      *pbVar21 = *pbVar21 + (char)pbVar16;
      pbVar22 = (byte *)CONCAT31(uVar25,(bVar8 & bVar10) + *pbVar14);
      *pbVar16 = *pbVar16 - (char)((uint)pbVar21 >> 8);
      break;
    }
    uVar62 = *(undefined2 *)((int)puVar49 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  puVar50 = (undefined2 *)((int)puVar37 + -4);
  puVar37 = (undefined4 *)((int)puVar37 + -4);
  *puVar50 = in_ES;
  pbVar21[0x16060000] = pbVar21[0x16060000] - (char)pbVar16;
  pbVar57 = (byte *)((uint)pbVar57 | (uint)pbVar14);
  cVar9 = (char)pbVar22 + '\x02';
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
  bVar64 = (POPCOUNT(cVar9) & 1U) == 0;
code_r0x00403b18:
  bVar10 = (byte)pbVar23;
  uVar25 = (undefined3)((uint)pbVar23 >> 8);
  if (!bVar64) {
    *pbVar21 = *pbVar21 + (char)pbVar16;
    pbVar22 = (byte *)CONCAT31(uVar25,bVar10 | *pbVar14);
code_r0x00403b73:
    pbVar23 = (byte *)((int)unaff_EDI + *(int *)(pbVar58 + -0x37));
    *pbVar22 = *pbVar22 + (byte)pbVar22;
    uVar25 = (undefined3)((uint)pbVar22 >> 8);
    bVar10 = (byte)pbVar22 | *pbVar21;
    pcVar18 = (char *)CONCAT31(uVar25,bVar10);
    uVar67 = CONCAT44(pbVar21,pcVar18);
    if ((POPCOUNT(bVar10) & 1U) == 0) {
      *pcVar18 = *pcVar18 + bVar10;
      *pbVar14 = *pbVar14 + 1;
      return (byte *)CONCAT31(uVar25,bVar10 + 6);
    }
    bVar10 = *pbVar14;
    *pbVar14 = *pbVar14 + 1;
    pcVar1 = (code *)swi(4);
    if (SCARRY1(bVar10,'\x01')) {
      uVar67 = (*pcVar1)();
      pbVar16 = extraout_ECX_00;
    }
    pbVar21 = (byte *)uVar67;
    *pbVar21 = *pbVar21 + (char)uVar67;
    cVar33 = (char)((ulonglong)uVar67 >> 0x20);
    puVar29 = (uint *)CONCAT22((short)((ulonglong)uVar67 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar67 >> 0x28) | pbVar57[0x2f],cVar33));
    *pbVar21 = *pbVar21 + (char)uVar67;
    cVar9 = (char)pbVar16;
    bVar11 = (byte)((uint)pbVar16 >> 8) | *pbVar21;
    pbVar21 = pbVar21 + *(int *)pbVar21;
    bVar10 = *pbVar57;
    *pbVar57 = *pbVar57 + bVar11;
    bVar8 = (byte)pbVar21;
    if (CARRY1(bVar10,bVar11)) {
      *pbVar21 = *pbVar21 + bVar8;
      bVar11 = bVar11 | (byte)*puVar29;
      *pbVar57 = *pbVar57 - cVar33;
      *pbVar21 = *pbVar21 + bVar8;
      uVar25 = (undefined3)((uint)pbVar21 >> 8);
      bVar8 = bVar8 | (byte)*puVar29;
      puVar59 = (uint *)CONCAT31(uVar25,bVar8);
      bVar64 = CARRY4((uint)pbVar58,*puVar59);
      bVar66 = SCARRY4((int)pbVar58,*puVar59);
      pbVar58 = pbVar58 + *puVar59;
      *(uint *)((int)puVar37 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar66 * 0x800 | (uint)bVar65 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar58 < 0) * 0x80 |
           (uint)(pbVar58 == (byte *)0x0) * 0x40 | (uint)(bVar7 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar58 & 0xff) & 1U) == 0) * 4 | (uint)bVar64 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar59 = (char)*puVar59 + bVar8;
      *(undefined2 *)((int)puVar37 + -8) = in_ES;
      cVar33 = (char)pbVar57 - *pbVar14;
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                 CONCAT11((char)((uint)pbVar57 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar57 >> 8),cVar33) +
                                                   0x5f),cVar33));
      *(byte *)puVar59 = (char)*puVar59 + bVar8;
      bVar10 = bVar8 + 0x2a & (byte)*puVar29;
      pbVar23 = pbVar23 + *(int *)(pbVar58 + 0x5f);
      *(char *)CONCAT31(uVar25,bVar10) = *(char *)CONCAT31(uVar25,bVar10) + bVar10;
      pbVar21 = (byte *)CONCAT31(uVar25,bVar10 + 0x2a);
      *(byte *)puVar29 = (byte)*puVar29 + 0x28;
      *pbVar21 = *pbVar21 + bVar10 + 0x2a;
      puVar53 = (undefined2 *)((int)puVar37 + -0xc);
      puVar37 = (undefined4 *)((int)puVar37 + -0xc);
      *puVar53 = in_ES;
    }
    else {
      *pbVar14 = *pbVar14 + bVar8;
    }
    pcVar18 = (char *)CONCAT22((short)((uint)pbVar16 >> 0x10),CONCAT11(bVar11,cVar9));
    *pbVar58 = *pbVar58 - bVar11;
    *(byte *)puVar29 = (byte)*puVar29 + cVar9;
    bVar10 = (byte)pbVar21 - 0xb;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar10);
    if (10 < (byte)pbVar21) {
      *pbVar16 = *pbVar16 | bVar10;
      return pbVar16;
    }
    *(byte *)puVar29 = (byte)*puVar29 + cVar9;
    do {
      *(undefined2 *)((int)puVar37 + -4) = in_ES;
      bVar10 = pbVar57[-0x23];
      bVar8 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar8;
      bVar7 = pbVar58[-0x22];
      *pbVar16 = *pbVar16 + bVar8;
      uVar25 = (undefined3)((uint)pbVar16 >> 8);
      bVar8 = bVar8 | *pbVar14;
      pbVar21 = (byte *)CONCAT31(uVar25,bVar8);
      cVar33 = (char)pbVar57 - *pbVar14;
      pbVar57 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar57 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar57 >> 8) + bVar10 |
                                                          bVar7,(char)pbVar57)) >> 8),cVar33);
      cVar9 = (char)pcVar18;
      pcVar18 = (char *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                                 CONCAT11((char)((uint)pcVar18 >> 8) + *pbVar21,cVar9));
      *(byte *)puVar29 = (byte)*puVar29 + cVar9;
      bVar7 = bVar8 - *pbVar21;
      pbVar16 = (byte *)CONCAT31(uVar25,bVar7);
      pbVar14 = pbVar14 + (-(uint)(bVar8 < *pbVar21) - *(int *)pbVar16);
      in_ES = *(undefined2 *)((int)puVar37 + -4);
      puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),(char)puVar29 * '\x02');
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      *pbVar23 = *pbVar23 + cVar33;
      bVar10 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar7;
      *puVar29 = (uint)(pbVar16 + (uint)CARRY1(bVar10,bVar7) + *puVar29);
    } while ((POPCOUNT(*puVar29 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar16 = *pbVar16 + (char)pbVar16;
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),(byte)pcVar18 | pbVar16[(int)pcVar18]);
    puVar55 = (undefined2 *)((int)puVar37 + -4);
    *(undefined2 *)((int)puVar37 + -4) = uVar62;
    bVar64 = false;
    pbVar16 = (byte *)((uint)pbVar16 & 0xffffff00);
    do {
      pbVar23 = pbVar23 + (-(uint)bVar64 - *(int *)pbVar57);
      pcVar20 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),*pcVar18);
      *pcVar20 = *pcVar20 + *pcVar18;
      pbVar16 = (byte *)CONCAT31((int3)((uint)(pcVar20 +
                                              (pbVar14[0x2000001] < (byte)((uint)pcVar18 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar20 +
                                        (pbVar14[0x2000001] < (byte)((uint)pcVar18 >> 8)) + 0xda7d)
                                 | (byte)*puVar29) + 0x7d);
      pcVar18 = pcVar18 + -1;
      *(byte *)puVar29 = (byte)*puVar29 + (char)pcVar18;
      while( true ) {
        uVar28 = (undefined3)((uint)puVar29 >> 8);
        cVar9 = (char)puVar29 + *(char *)((int)pbVar23 * 2 + 0xa0000e1);
        puVar29 = (uint *)CONCAT31(uVar28,cVar9);
        bVar64 = CARRY1((byte)pbVar16,(byte)*puVar29);
        uVar25 = (undefined3)((uint)pbVar16 >> 8);
        bVar10 = (byte)pbVar16 + (byte)*puVar29;
        pbVar16 = (byte *)CONCAT31(uVar25,bVar10);
        if ((POPCOUNT(bVar10) & 1U) != 0) break;
        *pbVar16 = *pbVar16 + bVar10;
        cVar33 = (char)pcVar18;
        pcVar18 = (char *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar18 >> 8) | pbVar23[-0x65],cVar33));
        bVar7 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar10;
        *(undefined2 *)((int)puVar55 + -4) = in_ES;
        if (CARRY1(bVar7,bVar10)) {
          *pbVar16 = *pbVar16 + bVar10;
          pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar57 >> 8) | pbVar58[-0x1d],
                                              (char)pbVar57));
          *pbVar16 = *pbVar16 + bVar10;
          bVar64 = false;
          bVar10 = bVar10 | (byte)*puVar29;
          pcVar20 = (char *)CONCAT31(uVar25,bVar10);
          uVar62 = *(undefined2 *)((int)puVar55 + -4);
          puVar37 = (undefined4 *)puVar55;
          while( true ) {
            bVar7 = (byte)pcVar20;
            uVar25 = (undefined3)((uint)pcVar20 >> 8);
            if (bVar64 == (char)bVar10 < '\0') break;
            *pcVar20 = *pcVar20 + bVar7;
            bVar7 = bVar7 | (byte)*puVar29;
            puVar59 = (uint *)CONCAT31(uVar25,bVar7);
            *pbVar23 = *pbVar23 << 1 | (char)*pbVar23 < '\0';
            uVar17 = *puVar59;
            *(byte *)puVar59 = (byte)*puVar59 + bVar7;
            pbVar58 = pbVar58 + (-(uint)CARRY1((byte)uVar17,bVar7) - *puVar59);
            *puVar59 = *puVar59 << 1 | (uint)((int)*puVar59 < 0);
            while( true ) {
              uVar17 = *puVar29;
              *(byte *)puVar29 = (byte)*puVar29 + (byte)pcVar18;
              uVar63 = *(undefined2 *)puVar37;
              cVar9 = (char)puVar59 + 'o' + CARRY1((byte)uVar17,(byte)pcVar18);
              pcVar20 = (char *)CONCAT31((int3)((uint)puVar59 >> 8),cVar9);
              pcVar18 = (char *)0x20a0000;
              if ((POPCOUNT(cVar9) & 1U) != 0) break;
              *pcVar20 = *pcVar20 + cVar9;
              bVar10 = bRamfe140212;
              pcVar18 = (char *)0x0;
              *(undefined2 *)puVar37 = in_ES;
              uVar25 = (undefined3)((uint)(pcVar20 + -0x732b0000) >> 8);
              bVar7 = in(0);
              puVar59 = (uint *)CONCAT31(uVar25,bVar7);
              uVar17 = *puVar29;
              *(byte *)puVar29 = (byte)*puVar29;
              if (SCARRY1((byte)uVar17,'\0') != (char)(byte)*puVar29 < '\0') {
                *(byte *)puVar59 = (byte)*puVar59 + bVar7;
                bVar7 = bVar7 | (byte)*puVar29;
                puVar59 = (uint *)CONCAT31(uVar25,bVar7);
                if ((POPCOUNT(bVar7) & 1U) == 0) {
                  *(byte *)puVar59 = (byte)*puVar59 + bVar7;
                  pcVar18 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar10 | (byte)*puVar59) << 8);
                  puVar55 = (undefined2 *)((int)puVar37 + -4);
                  *(undefined2 *)((int)puVar37 + -4) = uVar63;
                  *(byte *)puVar59 = (byte)*puVar59 + bVar7;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar59 = (byte)*puVar59 + bVar7;
                puVar59 = (uint *)CONCAT31(uVar25,bVar7 | (byte)*puVar29);
              }
            }
            *(byte *)puVar29 = (byte)*puVar29;
            bVar64 = SCARRY1((char)puVar29,*pbVar23);
            bVar10 = (char)puVar29 + *pbVar23;
            puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),bVar10);
            puVar37 = (undefined4 *)((int)puVar37 + 4);
          }
          if (bVar64 == (char)bVar10 < '\0') {
            *(byte *)puVar29 = (byte)*puVar29 + (char)pcVar18;
            pbVar16 = (byte *)((uint)pcVar20 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar20 = *pcVar20 + bVar7;
          pbVar16 = (byte *)CONCAT31(uVar25,(bVar7 | (byte)*puVar29) + 0x7d);
          pcVar18 = pcVar18 + -1;
          *(byte *)puVar29 = (byte)*puVar29 + (char)pcVar18;
          puVar55 = (undefined2 *)puVar37;
        }
        else {
          *(byte *)puVar29 = (byte)*puVar29 + cVar33;
          puVar29 = (uint *)CONCAT31(uVar28,cVar9 + *(char *)((int)pbVar23 * 2 + 0xa0000e0));
          puVar55 = (undefined2 *)((int)puVar55 + -4);
        }
      }
    } while( true );
  }
  *pbVar23 = *pbVar23 + bVar10;
  bVar10 = bVar10 + 0x6f & *(byte *)CONCAT31(uVar25,bVar10 + 0x6f);
  *pbVar21 = *pbVar21 + (char)pbVar16;
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(char)pbVar21 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar10;
  pcVar18 = (char *)CONCAT31(uVar25,bVar10 - (byte)*unaff_EDI);
code_r0x00403b2c:
  bVar10 = (char)pcVar18 - *pcVar18;
  pbVar22 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar10);
  *pbVar22 = *pbVar22 + bVar10;
  *(byte **)pbVar22 = pbVar21 + *(int *)pbVar22;
  *pbVar22 = *pbVar22 + bVar10;
  bVar64 = CARRY1(*pbVar22,bVar10);
  *pbVar22 = *pbVar22 + bVar10;
  puVar30 = (undefined1 *)puVar37;
  pbVar23 = pbVar14;
  while( true ) {
    puVar37 = (undefined4 *)puVar30;
    *(byte **)pbVar22 = pbVar22 + (uint)bVar64 + *(int *)pbVar22;
    bVar7 = ((uint)pbVar22 & 0x1000) != 0;
    unaff_EDI = unaff_EDI + (uint)bVar65 * -2 + 1;
    pbVar22[(int)pbVar21] = pbVar22[(int)pbVar21] + (char)pbVar57;
    *pbVar22 = *pbVar22 + (char)pbVar22;
    *(byte **)pbVar23 = pbVar57 + *(int *)pbVar23;
    bVar10 = (byte)((uint)pbVar16 >> 8);
    cVar9 = (char)pbVar16;
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),CONCAT11(bVar10 + *pbVar22,cVar9));
    pbVar22 = pbVar22 + (uint)CARRY1(bVar10,*pbVar22) + *(int *)pbVar22;
    *pbVar21 = *pbVar21 + cVar9;
    cVar9 = (char)pbVar57 - pbVar23[2];
    pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),cVar9);
    pbVar14 = pbVar23;
    if ((POPCOUNT(cVar9) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar22 = *pbVar22 + (byte)pbVar22;
    bVar10 = (byte)pbVar22 | *pbVar57;
    pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar10);
    if (bVar10 != 0) {
      pbVar58 = pbVar58 + -unaff_EDI[9];
      *pbVar24 = *pbVar24 + bVar10;
      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar16 >> 8) | *pbVar21,(char)pbVar16));
      pbVar23 = pbVar23 + *(int *)pbVar24;
      pbVar24 = pbVar24 + *(int *)pbVar24;
      uVar25 = (undefined3)((uint)pbVar24 >> 8);
      bVar8 = (char)pbVar24 - *pbVar24;
      pbVar14 = (byte *)CONCAT31(uVar25,bVar8);
      bVar10 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar8;
      pbVar24 = (byte *)CONCAT31(uVar25,bVar8 - CARRY1(bVar10,bVar8));
    }
    bVar10 = *pbVar24;
    *pbVar24 = *pbVar24 + (byte)pbVar24;
    iVar15 = *(int *)(pbVar58 + 0x1b000007);
    iVar3 = -(uint)CARRY1(bVar10,(byte)pbVar24);
    pbVar14 = pbVar23 + (uint)bVar65 * -8 + 4;
    out(*(undefined4 *)pbVar23,(short)pbVar21);
    pbVar22 = (byte *)(((uint)pbVar24 >> 8) * 0x100);
    *pbVar21 = *pbVar21 + (byte)pbVar16;
    bVar10 = (char)pbVar21 - *pbVar57;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),bVar10);
    *pbVar57 = *pbVar57;
    *pbVar21 = *pbVar21 + (char)((uint)pbVar16 >> 8);
    *pbVar22 = *pbVar22;
    pcVar18 = (char *)(((uint)pbVar24 >> 8) * 0x200);
    *pcVar18 = *pcVar18 + (char)pbVar57;
    bVar64 = CARRY1(*pbVar16,bVar10);
    *pbVar16 = *pbVar16 + bVar10;
    puVar30 = (undefined1 *)((int)puVar37 + (iVar3 - iVar15));
    pbVar23 = pbVar14;
    if (bVar64) {
      *pbVar22 = *pbVar22;
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | *pbVar21);
      puVar52 = (undefined2 *)((int)puVar37 + (iVar3 - iVar15) + -4);
      puVar37 = (undefined4 *)((int)puVar37 + (iVar3 - iVar15) + -4);
      *puVar52 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar51 = (undefined2 *)((int)puVar37 + -4);
  puVar37 = (undefined4 *)((int)puVar37 + -4);
  *puVar51 = uVar62;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar58 = pbVar58 + -*puVar59;
  puVar54 = (undefined1 *)((int)puVar55 + 4);
  do {
    bVar10 = (byte)puVar59;
    *(byte *)puVar59 = (byte)*puVar59 + bVar10;
    pbVar23 = pbVar23 + -*(int *)(pbVar58 + -0x1a);
    *(byte *)puVar59 = (byte)*puVar59 + bVar10;
    bVar10 = bVar10 | (byte)*puVar29;
    puVar59 = (uint *)CONCAT31((int3)((uint)puVar59 >> 8),bVar10);
    *(byte *)puVar59 = (byte)*puVar59 | bVar10;
    bVar10 = (byte)*puVar59;
    pbVar58 = (byte *)0x2700001;
    while (puVar55 = (undefined2 *)puVar54, (POPCOUNT(bVar10) & 1U) == 0) {
      do {
        *(byte *)puVar59 = (byte)*puVar59 + (byte)puVar59;
        bVar10 = (byte)puVar59 | (byte)*puVar29;
        puVar59 = (uint *)CONCAT31((int3)((uint)puVar59 >> 8),bVar10);
        puVar30 = (undefined1 *)puVar55;
        if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar59 = (byte)*puVar59 + (char)puVar59;
        uVar26 = CONCAT21((short)((uint)pcVar18 >> 0x10),(byte)((uint)pcVar18 >> 8) | bRamfe140212);
        puVar6 = puVar30;
        while( true ) {
          puVar56 = puVar6;
          pcVar18 = (char *)((uint)uVar26 << 8);
          puVar54 = puVar56 + -4;
          puVar55 = (undefined2 *)(puVar56 + -4);
          puVar30 = puVar56 + -4;
          *(undefined2 *)(puVar56 + -4) = in_ES;
          bVar11 = (byte)puVar59;
          *(byte *)puVar59 = (byte)*puVar59 & bVar11;
          bVar7 = *pbVar57;
          bVar13 = (byte)uVar26;
          bVar8 = *pbVar57;
          *pbVar57 = *pbVar57 + bVar13;
          bVar10 = *pbVar57;
          if (!CARRY1(bVar7,bVar13)) break;
          *(byte *)puVar59 = (byte)*puVar59 + bVar11;
          pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar57 >> 8) | bRam026fffe2,
                                              (char)pbVar57));
          *(byte *)puVar59 = (byte)*puVar59 + bVar11;
          bVar11 = bVar11 | (byte)*puVar29;
          puVar59 = (uint *)CONCAT31((int3)((uint)puVar59 >> 8),bVar11);
          bVar64 = (POPCOUNT(bVar11) & 1U) == 0;
          while( true ) {
            cVar9 = (char)((uint)pbVar57 >> 8);
            uVar62 = (undefined2)((uint)pbVar57 >> 0x10);
            if (!bVar64) {
              *(byte *)puVar29 = (byte)*puVar29;
              pbVar57 = (byte *)CONCAT22(uVar62,CONCAT11(cVar9 + pbVar57[-0x1f],(char)pbVar57));
              goto code_r0x00403d52;
            }
            *(byte *)puVar59 = (byte)*puVar59 + (char)puVar59;
            uVar63 = (undefined2)((uint)pcVar18 >> 0x10);
            bVar7 = (byte)((uint)pcVar18 >> 8) | (byte)*puVar59;
            uVar26 = CONCAT21(uVar63,bVar7);
            *puVar59 = *puVar59 & (uint)puVar59;
            *pbVar57 = *pbVar57 + bVar7;
            uVar25 = (undefined3)((uint)puVar59 >> 8);
            bVar10 = (char)puVar59 - bVar7;
            pcVar18 = (char *)CONCAT31(uVar25,bVar10);
            *pcVar18 = *pcVar18 + bVar10;
            bVar10 = bVar10 | (byte)*puVar29;
            puVar59 = (uint *)CONCAT31(uVar25,bVar10);
            puVar6 = puVar56 + -4;
            if ((POPCOUNT(bVar10) & 1U) != 0) break;
            *(byte *)puVar59 = (byte)*puVar59 + bVar10;
            pcVar18 = (char *)((uint)CONCAT21(uVar63,bVar7 | (byte)*puVar59) << 8);
            *puVar59 = *puVar59 - (int)puVar59;
            *(byte *)puVar29 = (byte)*puVar29;
            pbVar57 = (byte *)CONCAT22(uVar62,CONCAT11(cVar9 + pbVar57[-0x1d],(char)pbVar57));
            do {
              *(byte *)puVar59 = (byte)*puVar59 + (char)puVar59;
              uVar62 = (undefined2)((uint)puVar29 >> 0x10);
              cVar9 = (char)puVar29;
              bVar10 = (byte)((uint)puVar29 >> 8) | pbVar57[-0x17];
              puVar29 = (uint *)CONCAT22(uVar62,CONCAT11(bVar10,cVar9));
              *(byte *)puVar59 = (byte)*puVar59 + (char)puVar59;
              pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar57 >> 8) | bRam026fffeb,
                                                  (char)pbVar57));
              do {
                *(byte *)puVar59 = (byte)*puVar59 + (byte)puVar59;
                uVar25 = (undefined3)((uint)puVar59 >> 8);
                bVar8 = (byte)puVar59 | (byte)*puVar29;
                pcVar20 = (char *)CONCAT31(uVar25,bVar8);
                bVar7 = pbVar57[-0x16];
                *pcVar20 = *pcVar20 + bVar8;
                pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                           CONCAT11((char)((uint)pbVar57 >> 8) + bVar7 |
                                                    bRam026fffec,(char)pbVar57));
                *pcVar20 = *pcVar20 + bVar8;
                pbVar21 = (byte *)CONCAT31(uVar25,bVar8 | (byte)*puVar29);
                while( true ) {
                  *pbVar21 = *pbVar21 + (byte)pbVar21;
                  uVar25 = (undefined3)((uint)pbVar21 >> 8);
                  bVar7 = (byte)pbVar21 | (byte)*puVar29;
                  puVar59 = (uint *)CONCAT31(uVar25,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) != 0) break;
                  *(byte *)puVar59 = (byte)*puVar59 + bVar7;
                  bVar8 = pbVar23[-0x14];
                  *(byte *)puVar59 = (byte)*puVar59 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar29;
                  pcVar20 = (char *)CONCAT31(uVar25,bVar7);
                  bVar11 = pbVar57[-0x15];
                  *pcVar20 = *pcVar20 + bVar7;
                  pcVar18 = (char *)((uint)CONCAT21((short)((uint)pcVar18 >> 0x10),
                                                    (byte)((uint)pcVar18 >> 8) | bVar8 |
                                                    pbVar23[-0x13]) << 8);
                  *pcVar20 = *pcVar20 + bVar7;
                  pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                             CONCAT11((char)((uint)pbVar57 >> 8) + bVar11 |
                                                      bRam026fffef,(char)pbVar57));
                  *pcVar20 = *pcVar20 + bVar7;
                  pbVar21 = (byte *)CONCAT31(uVar25,bVar7 | (byte)*puVar29);
                  do {
                    do {
                      bVar8 = (byte)pbVar21;
                      *pbVar21 = *pbVar21 + bVar8;
                      cVar27 = (char)pbVar57;
                      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar57 >> 8) | *pbVar21,
                                                          cVar27));
                      *pbVar21 = bVar8;
                      *pbVar21 = *pbVar21 + bVar8;
                      cVar33 = (char)((uint)pcVar18 >> 8) + *pbVar21;
                      pcVar18 = (char *)((uint)CONCAT21((short)((uint)pcVar18 >> 0x10),cVar33) << 8)
                      ;
                      uVar25 = (undefined3)((uint)pbVar21 >> 8);
                      bVar8 = bVar8 & *pbVar21;
                      pbVar21 = (byte *)CONCAT31(uVar25,bVar8);
                      bVar7 = *pbVar57;
                      *pbVar57 = *pbVar57 + cVar33;
                    } while (SCARRY1(bVar7,cVar33) == (char)*pbVar57 < '\0');
                    *pbVar21 = *pbVar21 + bVar8;
                    bVar8 = bVar8 | (byte)*puVar29;
                    pbVar21 = (byte *)CONCAT31(uVar25,bVar8);
                    if ((POPCOUNT(bVar8) & 1U) == 0) {
                      *pbVar21 = *pbVar21 + bVar8;
                      *pbVar21 = *pbVar21 + bVar8;
                      cVar9 = cVar9 - bVar10;
                      pbVar16 = (byte *)CONCAT31((int3)((uint)puVar29 >> 8),cVar9);
                      *pbVar21 = *pbVar21 + bVar8;
                      bRam0312382b = bRam0312382b | *pbVar16;
                      *(undefined2 *)(puVar56 + -8) = in_ES;
                      while( true ) {
                        bVar7 = (byte)pbVar21;
                        *pbVar21 = *pbVar21 + bVar7;
                        bRam0312382b = bRam0312382b | (pbVar23 + 0x21b0000)[(int)pbVar21];
                        uVar25 = (undefined3)((uint)pbVar21 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar16 = *pbVar16 + bRam0312382b;
                        pbVar21 = (byte *)CONCAT31(uVar25,bVar7 | *pbVar14);
                      }
                      *pbVar21 = *pbVar21 + bVar7;
                      bVar7 = bVar7 | *pbVar14;
                      pcVar18 = (char *)CONCAT31(uVar25,bVar7);
                      out(*(undefined4 *)pbVar14,(short)pbVar16);
                      *pcVar18 = *pcVar18 + bVar7;
                      uVar63 = CONCAT11(bVar10 | bRam6f0a002b,cVar9);
                      pcVar20 = (char *)CONCAT22(uVar62,uVar63);
                      *pcVar18 = *pcVar18 + bVar7;
                      *pcVar20 = *pcVar20 + bRam0312382b;
                      out(*(undefined4 *)(pbVar14 + (uint)bVar65 * -8 + 4),uVar63);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),cVar27 + *pcVar18);
                  } while (SCARRY1(cVar27,*pcVar18) != (char)(cVar27 + *pcVar18) < '\0');
                }
                uVar17 = *puVar29;
                *(byte *)puVar29 = (byte)*puVar29;
              } while (SCARRY1((byte)uVar17,'\0') != (char)(byte)*puVar29 < '\0');
              *(byte *)puVar29 = (byte)*puVar29;
              *pcVar18 = *pcVar18 - (char)pbVar57;
              *(byte *)puVar59 = (byte)*puVar59 + bVar7;
              bVar7 = bVar7 | (byte)*puVar29;
              puVar59 = (uint *)CONCAT31(uVar25,bVar7);
              bVar64 = (POPCOUNT(bVar7) & 1U) == 0;
            } while (bVar64);
          }
        }
      } while (SCARRY1(bVar8,bVar13));
    }
    *pbVar57 = *pbVar57 + (char)((uint)pcVar18 >> 8);
    *pbVar23 = *pbVar23 - (char)pbVar57;
  } while( true );
}


