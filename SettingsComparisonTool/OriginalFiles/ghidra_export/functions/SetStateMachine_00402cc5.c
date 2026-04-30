/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402cc5
 * Raw Name    : SetStateMachine
 * Demangled   : SetStateMachine
 * Prototype   : void SetStateMachine(byte * param0, byte * param_2)
 * Local Vars  : param_2, uStack_20, pcStack_58, puStack_4, uStack_8, uVar2, uVar1, cVar4, bVar3, cVar6, cVar5, in_EAX, bVar7, piVar9, pcVar8, puVar11, pbVar10, puVar13, puVar12, uVar15, pbVar14, uVar17, iVar16, bVar19, cVar18, cVar21, bVar20, bVar23, uVar22, pbVar25, uVar24, pcVar26, unaff_EBX, bVar28, cVar27, unaff_EBP, uVar29, pbVar30, unaff_ESI, pbVar32, pbVar31, in_ES, unaff_EDI, in_DS, in_SS, bVar34, bVar33, unaff_retaddr, param0
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall SetStateMachine(byte *param0,byte *param_2)

{
  undefined6 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte *in_EAX;
  undefined3 uVar15;
  char *pcVar8;
  int *piVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  ushort *puVar13;
  byte *pbVar14;
  char cVar18;
  byte bVar19;
  int iVar16;
  byte bVar20;
  char cVar21;
  undefined2 uVar22;
  undefined4 uVar17;
  byte bVar23;
  undefined2 uVar24;
  byte *pbVar25;
  char cVar27;
  char *unaff_EBX;
  byte bVar28;
  undefined2 uVar29;
  char *pcVar26;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  uint *unaff_EDI;
  ushort in_ES;
  ushort in_SS;
  ushort in_DS;
  bool bVar33;
  bool bVar34;
  ushort unaff_retaddr;
  char *pcStack_58;
  uint uStack_20;
  ushort uStack_8;
  uint *puStack_4;
  
  bVar33 = false;
  do {
                    /* .NET CLR Managed Code */
    uVar29 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar27 = (char)((uint)unaff_EBX >> 8) + unaff_ESI[(int)unaff_EBX * 4];
    pcVar8 = (char *)CONCAT22(uVar29,CONCAT11(cVar27,(char)unaff_EBX));
    pcVar8[(int)in_EAX] = pcVar8[(int)in_EAX] + (char)in_EAX;
    *param_2 = *param_2 - cVar27;
    cVar21 = (char)param0;
    *param_2 = *param_2 + cVar21;
    uVar15 = (undefined3)((uint)in_EAX >> 8);
    bVar3 = (char)in_EAX - *in_EAX;
    bVar23 = (byte)param_2;
    *pcVar8 = *pcVar8 + bVar23;
    *param_2 = *param_2 ^ bVar3;
    *param_2 = *param_2 + bVar3;
    *(char *)CONCAT31(uVar15,bVar3) = *(char *)CONCAT31(uVar15,bVar3) + bVar3;
    bVar7 = *param0;
    *param0 = *param0 + bVar23;
    cVar4 = bVar3 + *(char *)CONCAT31(uVar15,bVar3) + CARRY1(bVar7,bVar23);
    cVar27 = cVar27 + *(char *)(unaff_EBP - 0x61);
    unaff_EBX = (char *)CONCAT22(uVar29,CONCAT11(cVar27,(char)unaff_EBX));
    *(char *)CONCAT31(uVar15,cVar4) = *(char *)CONCAT31(uVar15,cVar4) + cVar4;
    cVar5 = cVar4 + '\x12';
    in_EAX = (byte *)CONCAT31(uVar15,cVar5);
    cVar6 = *unaff_EBX;
    *unaff_EBX = *unaff_EBX + cVar5;
    cVar18 = (char)((uint)param0 >> 8);
    if (SCARRY1(cVar6,cVar5) == *unaff_EBX < '\0') {
      *in_EAX = *in_EAX + cVar5;
      *in_EAX = *in_EAX + cVar5;
      *in_EAX = *in_EAX + cVar5;
      *param_2 = *param_2 + cVar5;
      *in_EAX = *in_EAX + cVar5;
    }
    else {
      *in_EAX = *in_EAX + cVar5;
      in_EAX = (byte *)CONCAT31(uVar15,cVar4 + '$');
      *in_EAX = *in_EAX + cVar18;
      bVar7 = *param_2;
      *param_2 = *param_2 + cVar21;
      if (SCARRY1(bVar7,cVar21) != (char)*param_2 < '\0') {
        do {
          cVar6 = (char)in_EAX;
          *in_EAX = *in_EAX + cVar6;
          uVar15 = (undefined3)((uint)in_EAX >> 8);
          cRam00009d7d = cRam00009d7d + (char)param_2;
          bVar3 = cVar6 + 0x24;
          cVar5 = (char)((uint)unaff_EBX >> 8);
          unaff_EBX[-0x62] = unaff_EBX[-0x62] + cVar5;
          *(char *)CONCAT31(uVar15,bVar3) = *(char *)CONCAT31(uVar15,bVar3) + bVar3;
          bVar7 = cVar6 + 0x2fU + *param0;
          cVar4 = bVar7 + (0xf4 < bVar3);
          cVar6 = cVar4 + *(char *)CONCAT31(uVar15,cVar4) +
                  (CARRY1(cVar6 + 0x2fU,*param0) || CARRY1(bVar7,0xf4 < bVar3));
          pcVar8 = (char *)CONCAT31(uVar15,cVar6);
          *pcVar8 = *pcVar8 - (char)param_2;
          *pcVar8 = *pcVar8 + cVar6;
          pbVar25 = param_2 + -*(int *)param_2;
          unaff_ESI[(int)unaff_EBX * 4] = unaff_ESI[(int)unaff_EBX * 4] + cVar5;
          pcVar8[unaff_EBP] = pcVar8[unaff_EBP] + cVar6;
          *pbVar25 = *pbVar25 + (char)param0;
          pcVar8 = (char *)CONCAT22((short)((uint)in_EAX >> 0x10),
                                    CONCAT11((char)((uint)in_EAX >> 8) - *pbVar25,cVar6));
          uVar2 = *unaff_EDI;
          *pcVar8 = *pcVar8 - (char)((uint)pbVar25 >> 8);
          *pcVar8 = *pcVar8 + cVar6;
          puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
          pbVar14 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11(cVar5 - *unaff_ESI,(char)unaff_EBX));
          unaff_EBP = unaff_EBP + *(int *)(pbVar14 + (int)param0);
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(char)pbVar25 + (byte)uVar2);
          while( true ) {
            param_2 = pbVar25;
            uVar29 = (undefined2)((uint)pbVar14 >> 0x10);
            bVar28 = (char)((uint)pbVar14 >> 8) + pbVar14[0x18];
            *pcVar8 = *pcVar8 + (char)pcVar8;
            pbVar25 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + 'o');
            cVar6 = (char)param0;
            *param_2 = *param_2 + cVar6;
            bVar7 = *unaff_ESI;
            bVar23 = (byte)((uint)param0 >> 8);
            bVar3 = *pbVar25;
            pbVar25 = pbVar25 + (uint)CARRY1(bVar23,*pbVar25) + *(int *)pbVar25;
            *param_2 = *param_2 + cVar6;
            cVar4 = ((char)pbVar14 - bVar7) - *unaff_ESI;
            bVar7 = *(byte *)((int)unaff_EDI + 0x1a);
            *pbVar25 = *pbVar25 + (char)pbVar25;
            param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),
                                      CONCAT11(bVar23 + bVar3 + bVar7 | *param_2,cVar6));
            in_EAX = pbVar25 + *(int *)param_2;
            if ((POPCOUNT((uint)in_EAX & 0xff) & 1U) != 0) break;
            *in_EAX = *in_EAX + (char)in_EAX;
            bVar7 = (char)in_EAX + 0x6f;
            pcVar8 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
            pcVar26 = (char *)(CONCAT31((int3)(CONCAT22(uVar29,CONCAT11(bVar28,(char)pbVar14)) >> 8)
                                        ,cVar4) + -1);
            *pcVar8 = *pcVar8 + bVar7;
            *pcVar8 = *pcVar8 + bVar7;
            *pcVar26 = *pcVar26 + (byte)param_2;
            *(byte *)((int)pcVar8 * 2) = *(byte *)((int)pcVar8 * 2) ^ bVar7;
            uVar1 = *(undefined6 *)pcVar8;
            in_ES = (ushort)((uint6)uVar1 >> 0x20);
            pcVar8 = (char *)uVar1;
            *pcVar8 = *pcVar8 + (char)uVar1;
            *unaff_ESI = *unaff_ESI + (char)uVar1;
            pcVar8 = (char *)((uint)pcVar8 | 0x73110008);
            bVar28 = (byte)((uint)pcVar26 >> 8);
            *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar28;
            *param_2 = *param_2 + cVar6;
            pbVar25 = unaff_ESI + (uint)bVar33 * -8 + 4;
            out(*(undefined4 *)unaff_ESI,(short)param_2);
            *pcVar8 = *pcVar8;
            cVar6 = (char)pcVar8;
            *pcVar8 = *pcVar8 + cVar6;
            bVar7 = *(byte *)(unaff_EBP - 0x5a);
            uVar29 = (undefined2)((uint)pcVar26 >> 0x10);
            cVar4 = (char)pcVar26;
            *pcVar8 = *pcVar8 + cVar6;
            cVar6 = cVar6 + '\x02';
            uVar2 = CONCAT31((int3)((uint6)uVar1 >> 8),cVar6);
            param0 = (byte *)(uVar2 | 0x73110000);
            unaff_ESI = pbVar25 + (uint)bVar33 * -8 + 4;
            out(*(undefined4 *)pbVar25,(short)param_2);
            *param0 = *param0;
            bVar23 = (byte)param_2 | (byte)*unaff_EDI;
            pbVar25 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar23);
            *param0 = *param0 + cVar6;
            pcVar8 = (char *)(uVar2 | 0x7b1f1609);
            bVar33 = (unaff_retaddr & 0x400) != 0;
            *(uint *)((int)unaff_EDI + -0x7d) = *(uint *)((int)unaff_EDI + -0x7d) | unaff_EBP;
            bVar3 = (byte)pcVar8;
            *pcVar8 = *pcVar8 + bVar3;
            bVar28 = bVar28 | bVar7 | unaff_ESI[0x19];
            pbVar14 = (byte *)CONCAT22(uVar29,CONCAT11(bVar28,cVar4));
            *pcVar8 = *pcVar8 + bVar3;
            uVar15 = (undefined3)((uint)pcVar8 >> 8);
            *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
                 pbVar25 + (uint)(0xd2 < bVar3) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
            bVar3 = bVar3 + 0x2d ^ *(byte *)CONCAT31(uVar15,bVar3 + 0x2d);
            pcVar8 = (char *)CONCAT31(uVar15,bVar3);
            bVar7 = *unaff_ESI;
            *unaff_ESI = *unaff_ESI + bVar3;
            unaff_retaddr = in_ES;
            if (CARRY1(bVar7,bVar3)) {
              *pcVar8 = *pcVar8 + bVar3;
              bVar3 = bVar3 | pcVar8[0x4000019];
              pcVar8 = (char *)CONCAT31(uVar15,bVar3);
              if ('\0' < (char)bVar3) {
                *pcVar8 = *pcVar8 + bVar3;
                piVar9 = (int *)CONCAT31(uVar15,bVar3 + 0x28);
                *piVar9 = (int)piVar9 + (uint)(0xd7 < bVar3) + *piVar9;
                bVar19 = (byte)((uint6)uVar1 >> 8);
                *pbVar14 = *pbVar14 + bVar19;
                uVar22 = CONCAT11((byte)((uint)param_2 >> 8) | bVar28,bVar23);
                pbVar25 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar22);
                puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
                bVar23 = in(uVar22);
                pbVar10 = (byte *)CONCAT31(uVar15,bVar23);
                bVar7 = *pbVar10;
                bVar34 = SCARRY1(*pbVar10,bVar23);
                *pbVar10 = *pbVar10 + bVar23;
                bVar3 = *pbVar10;
                pbVar30 = unaff_ESI;
                uStack_8 = in_ES;
                if (!CARRY1(bVar7,bVar23)) goto code_r0x00402e19;
                *pbVar10 = *pbVar10 + bVar23;
                bVar19 = bVar19 | *pbVar10;
                param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),CONCAT11(bVar19,cVar6));
                pcVar8 = (char *)CONCAT31(uVar15,bVar23 + *pbVar10);
                *pbVar14 = *pbVar14 + bVar19;
              }
              uVar15 = (undefined3)((uint)pcVar8 >> 8);
              bVar3 = (byte)pcVar8 | *pbVar25;
              pbVar10 = (byte *)CONCAT31(uVar15,bVar3);
              pbVar30 = unaff_ESI + (uint)bVar33 * -8 + 4;
              out(*(undefined4 *)unaff_ESI,(short)pbVar25);
              LOCK();
              bVar7 = *pbVar10;
              *pbVar10 = bVar3;
              UNLOCK();
              *pbVar25 = *pbVar25 + (char)param0;
              piVar9 = (int *)(CONCAT31(uVar15,bVar7) + -0x1b7e07);
              *pbVar25 = *pbVar25 + (char)param0;
              iVar16 = (int)param0 - *(int *)pbVar14;
              bVar7 = *(byte *)((int)unaff_EDI + -0x7a);
              uVar22 = (undefined2)((uint)iVar16 >> 0x10);
              *(char *)piVar9 = *(char *)piVar9 + (char)piVar9;
              bVar3 = (char)((uint)iVar16 >> 8) + bVar7 | *(byte *)((int)unaff_EDI + 0x17);
              *(char *)piVar9 = *(char *)piVar9 + (char)piVar9;
              uVar15 = (undefined3)(CONCAT22(uVar22,CONCAT11(bVar3,(byte)iVar16)) >> 8);
              bVar7 = (byte)iVar16 | *pbVar14;
              param0 = (byte *)CONCAT31(uVar15,bVar7);
              pbVar10 = (byte *)((int)piVar9 + *piVar9);
              pbVar31 = pbVar30;
              if (SCARRY4((int)piVar9,*piVar9)) goto code_r0x00402e0a;
              *param0 = *param0 + bVar7;
              *(byte **)pbVar14 = pbVar25 + *(int *)pbVar14;
              piVar9 = (int *)CONCAT31(uVar15,bVar7 + 0x27);
              param0 = (byte *)CONCAT22(uVar22,CONCAT11(bVar3 + *(byte *)((int)unaff_EDI + -0x79),
                                                        bVar7));
              *(byte *)piVar9 = (char)*piVar9 + bVar7 + 0x27;
              goto code_r0x00402dff;
            }
          }
          unaff_EBX = (char *)CONCAT22(uVar29,CONCAT11(bVar28 | *(byte *)(unaff_EBP - 0x62),cVar4));
        } while( true );
      }
    }
    param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),
                              CONCAT11(cVar18 + (char)((uint)in_EAX >> 8),cVar21));
    cVar6 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar6;
    pcVar8 = (char *)((int)in_EAX * 2 + 0x1a10000);
    *pcVar8 = *pcVar8 + cVar27;
    *in_EAX = *in_EAX + cVar6;
    *in_EAX = *in_EAX + cVar6;
    *in_EAX = *in_EAX + cVar6;
    *in_EAX = *in_EAX + cVar6;
    *in_EAX = *in_EAX + cVar6;
    *in_EAX = *in_EAX + cVar6;
    *in_EAX = *in_EAX + cVar6;
    *in_EAX = *in_EAX + cVar6;
    in_EAX[-0x47ffffff] = in_EAX[-0x47ffffff] + cVar27;
    *(byte **)in_EAX = in_EAX + *(int *)in_EAX;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + bVar23;
    *in_EAX = *in_EAX + cVar6;
    *in_EAX = *in_EAX + bVar23;
    *in_EAX = *in_EAX + cVar6;
    *(byte **)unaff_ESI = unaff_ESI + *(int *)unaff_ESI;
    in_SS = unaff_retaddr;
  } while( true );
code_r0x00402dff:
  pbVar10 = (byte *)CONCAT22((short)((uint)piVar9 >> 0x10),
                             CONCAT11((byte)((uint)piVar9 >> 8) | pbVar25[0x2170411],(byte)piVar9));
  pbVar31 = pbVar30 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar30,(short)pbVar25);
  *pbVar10 = (byte)piVar9;
  *pbVar25 = *pbVar25 + (char)param0;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar10;
  *pbVar10 = *pbVar10 - cVar4;
  *pbVar10 = *pbVar10 + (char)pbVar10;
  bVar34 = false;
  bVar3 = (byte)((uint)param0 >> 8) | bRam052b0603;
  param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),CONCAT11(bVar3,(char)param0));
  pbVar30 = pbVar31;
code_r0x00402e19:
  if (bVar3 == 0 || bVar34 != (char)bVar3 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cRam89280411;
  piVar9 = (int *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                           CONCAT11((byte)((uint)pbVar10 >> 8) | pbVar25[0x7190411],cRam89280411));
  *(char *)piVar9 = (char)*piVar9 + cRam89280411;
  cVar6 = (char)param0;
  param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),
                            CONCAT11((byte)((uint)param0 >> 8) | *pbVar25,cVar6));
  pbVar30 = pbVar30 + *piVar9;
  pbVar10 = (byte *)((int)piVar9 + *piVar9);
  bVar3 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar3;
  *pbVar30 = *pbVar30 + cVar6;
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar3;
  *(uint *)pbVar10 = *(int *)pbVar10 + unaff_EBP + (uint)CARRY1(bVar7,bVar3);
  piVar9 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),*pbVar10);
  *pbVar25 = *pbVar25 + cVar6;
  pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 | *pbVar25);
  pbVar10 = pbVar31 + -0x43;
  *pbVar10 = *pbVar10 + (char)((uint)pbVar25 >> 8);
  pbVar25 = pbVar31;
  puVar12 = unaff_EDI;
code_r0x00402e42:
  unaff_EDI = puVar12;
  if (SCARRY4((int)piVar9,*piVar9)) goto code_r0x00402e6e;
  iVar16 = *(int *)((int)piVar9 + *piVar9);
  *pbVar25 = *pbVar25 + (char)param0;
  piVar9 = (int *)(iVar16 + -0x8c6f);
  pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                             CONCAT11((byte)((uint)pbVar25 >> 8) | pbVar25[-0x3f],(char)pbVar25));
  pbVar31 = (byte *)((int)piVar9 + *piVar9);
  pbVar10 = pbVar31;
  unaff_EDI = puStack_4;
  in_DS = uStack_8;
  if (SCARRY4((int)piVar9,*piVar9)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar31 = *pbVar31 + (char)pbVar31;
  param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),
                            CONCAT11((byte)((uint)param0 >> 8) | *pbVar25,(char)param0));
  pbVar10 = pbVar30 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar30,(short)pbVar25);
  pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(char)pbVar25 + (byte)*unaff_EDI);
  pbVar30 = pbVar10 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar10,(short)pbVar25);
  uStack_8 = in_ES;
code_r0x00402e6e:
  uVar15 = (undefined3)((uint)pbVar25 >> 8);
  cVar6 = (char)pbVar25 + (byte)*unaff_EDI;
  pbVar10 = pbVar30 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar30,(short)CONCAT31(uVar15,cVar6));
  pbVar25 = (byte *)CONCAT31(uVar15,cVar6 + (byte)*unaff_EDI);
  pbVar30 = pbVar10 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar10,(short)pbVar25);
  pbVar10 = (byte *)0x0;
  puVar12 = unaff_EDI;
code_r0x00402e81:
  unaff_EDI = puVar12;
  bVar3 = (char)pbVar10 - *pbVar10;
  iVar16 = CONCAT31((int3)((uint)pbVar10 >> 8),bVar3);
  *pbVar14 = *pbVar14 + (char)pbVar25;
  pbVar31 = (byte *)(iVar16 * 2);
  *pbVar31 = *pbVar31 ^ bVar3;
  pbVar31 = (byte *)(int)(short)iVar16;
  *pbVar31 = *pbVar31 + bVar3;
  *(byte *)unaff_EDI = (byte)*unaff_EDI + (byte)param0;
  bVar7 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar3;
  *(byte **)(pbVar14 + -0x73) = pbVar30 + (uint)CARRY1(bVar7,bVar3) + *(int *)(pbVar14 + -0x73);
  *pbVar31 = *pbVar31 + bVar3;
  bVar7 = (byte)param0 | *pbVar25;
  param0 = (byte *)CONCAT31((int3)((uint)param0 >> 8),bVar7);
  pbVar32 = pbVar30;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar31 = *pbVar31 + bVar3;
  pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar10 >> 8),bVar3 + 0x2d);
  *(byte **)(pbVar30 + (int)unaff_EDI * 8) =
       pbVar25 + (uint)(0xd2 < bVar3) + *(int *)(pbVar30 + (int)unaff_EDI * 8);
  uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
  do {
    bVar7 = *pbVar30;
    bVar3 = (byte)pbVar10;
    *pbVar30 = *pbVar30 + bVar3;
    if (!CARRY1(bVar7,bVar3)) break;
    *pbVar10 = *pbVar10 + bVar3;
    bVar3 = bVar3 | pbVar10[0x400001a];
    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar3);
    if ((char)bVar3 < '\x01') {
code_r0x00402ecc:
      *pbVar31 = *pbVar31 + (byte)pbVar31;
      uVar15 = (undefined3)((uint)pbVar31 >> 8);
      bVar7 = (byte)pbVar31 | pbVar31[0x400001b];
      puVar12 = (uint *)CONCAT31(uVar15,bVar7);
      if ((char)bVar7 < '\x01') {
        bVar3 = *pbVar25;
        *pbVar25 = *pbVar25 + (byte)param0;
        *(char *)((int)puVar12 * 2) = *(char *)((int)puVar12 * 2) - CARRY1(bVar3,(byte)param0);
        bVar34 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar31 = *pbVar31 + bVar3;
      pbVar32 = pbVar30;
code_r0x00402eb4:
      uVar15 = (undefined3)((uint)pbVar31 >> 8);
      bVar3 = (char)pbVar31 + 0x6f;
      puVar12 = (uint *)CONCAT31(uVar15,bVar3);
      *puVar12 = uStack_20;
      bVar7 = *pbVar25;
      *pbVar25 = *pbVar25 + (char)param0;
      uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
      in_SS = in_ES;
      if (*pbVar25 != 0 && SCARRY1(bVar7,(char)param0) == (char)*pbVar25 < '\0') {
        *(byte *)puVar12 = (char)*puVar12 + bVar3;
        bVar23 = (char)pbVar31 + 0x9c;
        pbVar31 = (byte *)CONCAT31(uVar15,bVar23);
        *(byte **)(pbVar32 + (int)unaff_EDI * 8) =
             pbVar25 + (uint)(0xd2 < bVar3) + *(int *)(pbVar32 + (int)unaff_EDI * 8);
        uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
        bVar7 = *pbVar32;
        *pbVar32 = *pbVar32 + bVar23;
        pbVar30 = pbVar32;
        if (CARRY1(bVar7,bVar23)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      pbVar30 = pbVar32 + (uint)bVar33 * -8 + 4;
      out(*(undefined4 *)pbVar32,(short)pbVar25);
    }
    cVar6 = (char)puVar12;
    *(char *)puVar12 = (char)*puVar12 + cVar6;
    uVar15 = (undefined3)((uint)puVar12 >> 8);
    bVar3 = cVar6 + 0x6f;
    puVar12 = (uint *)CONCAT31(uVar15,bVar3);
    *puVar12 = uStack_20;
    bVar7 = *pbVar25;
    *pbVar25 = *pbVar25 + (byte)param0;
    uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
    pbVar30[0x1c] = (pbVar30[0x1c] - bVar28) - CARRY1(bVar7,(byte)param0);
    *(byte *)puVar12 = (char)*puVar12 + bVar3;
    bVar23 = cVar6 + 0x9c;
    pcVar8 = (char *)CONCAT31(uVar15,bVar23);
    *(byte **)(pbVar30 + (int)unaff_EDI * 8) =
         pbVar25 + (uint)(0xd2 < bVar3) + *(int *)(pbVar30 + (int)unaff_EDI * 8);
    bVar7 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar23;
    if (!CARRY1(bVar7,bVar23)) goto code_r0x00402e7e;
    *pcVar8 = *pcVar8 + bVar23;
    bVar23 = bVar23 | pcVar8[0x400001c];
    pbVar10 = (byte *)CONCAT31(uVar15,bVar23);
    uStack_8 = in_ES;
    if ((char)bVar23 < '\x01') goto code_r0x00402f16;
    *pbVar10 = *pbVar10 + bVar23;
    puVar12 = (uint *)CONCAT31(uVar15,bVar23 + 0x6f);
    while( true ) {
      *puVar12 = uStack_20;
      bVar7 = *pbVar25;
      *pbVar25 = *pbVar25 + (byte)param0;
      *(uint *)(pbVar30 + 0x1d) =
           (*(int *)(pbVar30 + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar7,(byte)param0);
      bVar7 = (byte)puVar12;
      *(byte *)puVar12 = (char)*puVar12 + bVar7;
      bVar3 = bVar7 + 0x2d;
      pbVar10 = (byte *)CONCAT31((int3)((uint)puVar12 >> 8),bVar3);
      *(byte **)(pbVar30 + (int)unaff_EDI * 8) =
           pbVar25 + (uint)(0xd2 < bVar7) + *(int *)(pbVar30 + (int)unaff_EDI * 8);
      uStack_20 = CONCAT22((short)(uStack_20 >> 0x10),in_ES);
      bVar7 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar3;
      if (!CARRY1(bVar7,bVar3)) break;
      *pbVar10 = *pbVar10 + bVar3;
code_r0x00402f16:
      bVar7 = (byte)pbVar10 | pbVar10[0x400001d];
      puVar12 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar7);
      uVar2 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = uVar2;
        *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
        uVar15 = (undefined3)((uint)puVar12 >> 8);
        cVar6 = (char)puVar12 + 'o';
        puVar11 = (uint *)CONCAT31(uVar15,cVar6);
        *puVar11 = uStack_20;
        cVar5 = (char)param0;
        *pbVar25 = *pbVar25 + cVar5;
        uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
        bVar7 = (byte)((uint)pbVar25 >> 8);
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11(bVar7 - *pbVar30,(char)pbVar25));
        if (bVar7 < *pbVar30) break;
        bVar34 = CARRY4((uint)puVar11,*puVar11);
        puVar12 = (uint *)((int)puVar11 + *puVar11);
        if (!SCARRY4((int)puVar11,*puVar11)) {
          bVar34 = CARRY4(unaff_EBP,*puVar12);
          unaff_EBP = unaff_EBP + *puVar12;
        }
        *puVar12 = (*puVar12 - (int)puVar12) - (uint)bVar34;
        *pbVar25 = *pbVar25 + cVar5;
        param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),
                                  CONCAT11((char)((uint)param0 >> 8) + *pbVar25,cVar5 - *pbVar25));
        *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x00402f3b:
        cVar5 = (char)pbVar25;
        *pbVar14 = *pbVar14 + cVar5;
        bVar7 = (byte)puVar12;
        *(byte *)((int)puVar12 * 2) = *(byte *)((int)puVar12 * 2) ^ bVar7;
        *(byte *)puVar12 = (byte)*puVar12 + bVar7;
        *(byte *)puVar12 = (byte)*puVar12 + cVar5;
        uVar2 = *puVar12;
        *(byte *)puVar12 = (byte)*puVar12 + bVar7;
        *(byte **)pbVar25 =
             (byte *)((int)puVar12 + (uint)CARRY1((byte)uVar2,bVar7) + *(int *)pbVar25);
        pcVar8 = (char *)((uint)puVar12 | *unaff_EDI);
        uVar15 = (undefined3)((uint)pcVar8 >> 8);
        cVar6 = (char)pcVar8 + *pcVar8;
        pcVar8 = (char *)CONCAT31(uVar15,cVar6);
        *pcVar8 = *pcVar8 + cVar6;
        cVar6 = cVar6 + *pcVar8;
        piVar9 = (int *)CONCAT31(uVar15,cVar6);
        *(char *)piVar9 = (char)*piVar9 + cVar6;
        iVar16 = LocalDescriptorTableRegister();
        *piVar9 = iVar16;
        bVar7 = *pbVar14;
        bVar20 = (byte)((uint)param0 >> 8);
        *pbVar14 = *pbVar14 + bVar20;
        iVar16 = *piVar9;
        uVar22 = (undefined2)((uint)param0 >> 0x10);
        bVar19 = (byte)param0;
        *pbVar30 = *pbVar30 + cVar6;
        pbVar10 = pbVar30 + (uint)bVar33 * -8 + 4;
        out(*(undefined4 *)pbVar30,(short)pbVar25);
        *pbVar10 = *pbVar10 + cVar6;
        bVar3 = *pbVar14;
        *pbVar25 = *pbVar25 - bVar28;
        *pbVar10 = *pbVar10 + cVar6;
        pbVar31 = pbVar10 + (uint)bVar33 * -8 + 4;
        out(*(undefined4 *)pbVar10,(short)pbVar25);
        *pbVar31 = *pbVar31 + cVar6;
        bVar23 = *pbVar14;
        *(uint *)(pbVar25 + -0x23) = *(uint *)(pbVar25 + -0x23) & (uint)pbVar31;
        puVar13 = (ushort *)((int)piVar9 + *piVar9);
        if (!SCARRY4((int)piVar9,*piVar9)) {
          *puVar13 = in_SS;
        }
        *(char *)puVar13 = (char)*puVar13 + (char)puVar13;
        uVar24 = CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[-0x15],cVar5);
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),uVar24);
        puVar12 = (uint *)((int)puVar13 + *(int *)puVar13);
        if (!SCARRY4((int)puVar13,*(int *)puVar13)) {
          *(ushort *)puVar12 = in_SS;
        }
        cVar6 = (char)puVar12;
        *(byte *)puVar12 = (byte)*puVar12 + cVar6;
        cVar21 = ((bVar20 - (char)iVar16) - CARRY1(bVar7,bVar20) | bVar3 | bVar23) + (byte)*puVar12;
        param0 = (byte *)CONCAT22(uVar22,CONCAT11(cVar21,bVar19));
        bVar7 = *pbVar25;
        *pbVar25 = *pbVar25 + bVar19;
        if (CARRY1(bVar7,bVar19)) {
          *(byte *)puVar12 = (byte)*puVar12 + cVar6;
          bVar7 = pbVar25[6];
          *pbVar25 = *pbVar25 + bVar19;
          bVar3 = (cVar21 - *pbVar31) + cRam14730307;
          *(byte *)puVar12 = (byte)*puVar12 + cVar6;
          bVar7 = bVar28 | bVar7 | pbVar25[0x2a];
          uVar2 = *puVar12;
          pbVar14 = (byte *)((int)puVar12 + (uint)CARRY1(bVar3,(byte)*puVar12) + *puVar12);
          *pbVar25 = *pbVar25 + bVar19;
          cVar6 = cVar4 - *pbVar31;
          cVar4 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar29,CONCAT11(bVar7,cVar4)) >> 8),
                                             cVar6) + 0x1e);
          *pbVar14 = *pbVar14 + (char)pbVar14;
          uVar15 = (undefined3)((uint)pbVar14 >> 8);
          bVar7 = (char)pbVar14 + 0x2aU & *pbVar25;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar8 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          cVar4 = cVar4 + *(char *)(CONCAT22(uVar29,CONCAT11(cVar4,cVar6)) + 0x1f);
          *pcVar8 = *pcVar8 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar25;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar8 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          cVar4 = cVar4 + *(char *)(CONCAT22(uVar29,CONCAT11(cVar4,cVar6)) + 0x20);
          *pcVar8 = *pcVar8 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar25;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar8 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          cVar4 = cVar4 + *(char *)(CONCAT22(uVar29,CONCAT11(cVar4,cVar6)) + 0x21);
          *pcVar8 = *pcVar8 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar25;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar8 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          cVar4 = cVar4 + *(char *)(CONCAT22(uVar29,CONCAT11(cVar4,cVar6)) + 0x22);
          *pcVar8 = *pcVar8 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar25;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar8 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          bVar3 = bVar3 + (byte)uVar2 + *pcVar8;
          uVar17 = CONCAT22(uVar22,CONCAT11(bVar3,bVar19));
          cVar4 = cVar4 + *(char *)(CONCAT22(uVar29,CONCAT11(cVar4,cVar6)) + 0x25);
          *pcVar8 = *pcVar8 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar25;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar8 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          pcVar26 = (char *)CONCAT22(uVar29,CONCAT11(cVar4 + *(char *)(CONCAT22(uVar29,CONCAT11(
                                                  cVar4,cVar6)) + 0x26),cVar6));
          *pcVar8 = *pcVar8 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar25;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          cVar6 = bVar7 + 0x2a;
          pcVar8 = (char *)CONCAT31(uVar15,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar8 = *pcVar8 + cVar6;
            pbVar14 = (byte *)(CONCAT31(uVar15,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar14;
            bVar23 = (byte)pbVar14;
            *pbVar14 = *pbVar14 + bVar23;
            uVar15 = (undefined3)((uint)pbVar14 >> 8);
            if (!CARRY1(bVar7,bVar23)) {
              if (!SCARRY1(bVar23,'\0')) {
                *pbVar14 = *pbVar14 + bVar23;
                uVar17 = CONCAT22(uVar22,CONCAT11(bVar3 | *pbVar25,bVar19));
                bVar23 = bVar23 & *pbVar25;
                *(char *)CONCAT31(uVar15,bVar23) = *(char *)CONCAT31(uVar15,bVar23) + bVar23;
                pcVar8 = (char *)CONCAT31(uVar15,bVar23 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar8 = (char *)CONCAT31(uVar15,bVar23 + *pcVar26);
              if (SCARRY1(bVar23,*pcVar26) != (char)(bVar23 + *pcVar26) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar23 + *pcVar26;
            pbVar14 = (byte *)CONCAT31(uVar15,bVar7);
            if (SCARRY1(bVar23,*pcVar26) == (char)bVar7 < '\0') {
              pcVar8 = (char *)CONCAT22(uVar22,CONCAT11(bVar3 | *pbVar25,bVar19));
              *pcVar26 = *pcVar26 + cVar5;
              *pbVar25 = *pbVar25 ^ bVar7;
              *(char *)((int)pbVar14 * 2) = *(char *)((int)pbVar14 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar8 = *pcVar8 + (char)pcVar8;
            uVar15 = (undefined3)((uint)pcVar8 >> 8);
            bVar7 = (char)pcVar8 + 0x2aU & *pbVar25;
            *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
            pcVar8 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
            *pcVar8 = *pcVar8 + bVar7 + 0x2a;
            pcVar8 = (char *)CONCAT31(uVar15,bVar7 + 0x54 & *pbVar25);
code_r0x00403072:
            cVar6 = (char)pcVar8;
            *pcVar8 = *pcVar8 + cVar6;
            uVar15 = (undefined3)((uint)pcVar8 >> 8);
            pcVar8 = (char *)CONCAT31(uVar15,cVar6 + '*');
            *pcVar8 = *pcVar8 + cVar6 + '*';
            bVar7 = cVar6 + 0x54U & *pbVar25;
            *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
            pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_DS);
            uVar17 = CONCAT22((short)((uint)uVar17 >> 0x10),
                              CONCAT11((char)((uint)uVar17 >> 8) +
                                       *(char *)CONCAT31(uVar15,bVar7 + 0x2a),(char)uVar17));
            pbVar31[0x20a0000] = pbVar31[0x20a0000] - cVar5;
            pcVar8 = pcStack_58;
code_r0x0040309a:
            cVar6 = (char)pcVar8;
            *pcVar8 = *pcVar8 + cVar6;
            pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_ES);
            *pcVar8 = *pcVar8 + cVar6;
            pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar6 + 0x2aU & *pbVar25);
          }
          cVar6 = (char)pbVar14;
          *pbVar14 = *pbVar14 + cVar6;
          uVar15 = (undefined3)((uint)pbVar14 >> 8);
          cVar4 = cVar6 + '*';
          pcVar8 = (char *)CONCAT31(uVar15,cVar4);
          pbVar31[0x20a0000] = pbVar31[0x20a0000] - cVar5;
          *pcVar8 = *pcVar8 + cVar4;
          cVar21 = (char)pcStack_58 - *pbVar31;
          pcVar26 = (char *)CONCAT22((short)((uint)pcStack_58 >> 0x10),
                                     CONCAT11((char)((uint)pcStack_58 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_58 >> 8),
                                                                 cVar21) + 0x34),cVar21));
          *pcVar8 = *pcVar8 + cVar4;
          bVar7 = cVar6 + 0x54U & *pbVar25;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pbVar14 = (byte *)CONCAT31(uVar15,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar17 >> 8);
          pcVar8 = (char *)CONCAT22((short)((uint)uVar17 >> 0x10),
                                    CONCAT11(bVar7 + *pbVar14,(char)uVar17));
          pbVar14 = pbVar14 + (uint)CARRY1(bVar7,*pbVar14) + *(int *)pbVar14;
          *pbVar25 = *pbVar25 + (char)uVar17;
          uVar15 = (undefined3)((uint)pbVar14 >> 8);
          cVar6 = (byte)pbVar14 - *pbVar14;
          piVar9 = (int *)CONCAT31(uVar15,cVar6);
          pbVar31 = pbVar31 + (uint)((byte)pbVar14 < *pbVar14) + *piVar9;
          cVar6 = cVar6 + (char)*piVar9;
          pbVar14 = (byte *)CONCAT31(uVar15,cVar6);
          *pbVar14 = *pbVar14 + cVar6;
code_r0x004030df:
          *pcVar8 = *pcVar8 + cVar5;
          bVar7 = *pbVar14;
          bVar3 = (byte)pbVar14;
          *pbVar14 = *pbVar14 + bVar3;
          *(byte **)(pcVar26 + -0x41) =
               pbVar31 + (uint)CARRY1(bVar7,bVar3) + *(int *)(pcVar26 + -0x41);
          *pbVar14 = *pbVar14 + bVar3;
          uVar15 = (undefined3)((uint)pbVar14 >> 8);
          bVar3 = bVar3 | *pbVar31;
          *(char *)CONCAT31(uVar15,bVar3) = *(char *)CONCAT31(uVar15,bVar3) + bVar3;
          pcVar8 = (char *)CONCAT31(uVar15,bVar3 + 0x7b);
          *pcVar8 = *pcVar8 + bVar3 + 0x7b;
          pbVar31[CONCAT31(uVar15,bVar3 - 8) + -1] =
               pbVar31[CONCAT31(uVar15,bVar3 - 8) + -1] + (bVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar30 = pbVar31 + (uint)bVar33 * -8 + 4;
        out(*(undefined4 *)pbVar31,uVar24);
        uVar2 = unaff_EBP + 1;
        uStack_20 = unaff_EBP;
      }
      bVar7 = cVar6 - (bVar7 < *pbVar30);
      pbVar10 = pbVar30 + (int)unaff_EDI * 2;
      bVar34 = CARRY1(*pbVar10,bVar7);
      *pbVar10 = *pbVar10 + bVar7;
code_r0x00402ef9:
      puVar12 = (uint *)CONCAT31(uVar15,bVar7 - bVar34);
      pbVar10 = (byte *)((int)unaff_EDI + unaff_EBP * 2);
      *pbVar10 = *pbVar10 + (bVar7 - bVar34);
    }
  } while( true );
code_r0x00402e36:
  *param0 = *param0 + (char)pbVar25;
  pbVar31 = pbVar25 + 0xa0a0000;
  bVar7 = *pbVar31;
  bVar23 = (byte)param0;
  *pbVar31 = *pbVar31 - bVar23;
  bVar3 = (byte)pbVar10 + *pbVar10;
  piVar9 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar3 + (bVar7 < bVar23));
  puVar12 = unaff_EDI;
  if (CARRY1((byte)pbVar10,*pbVar10) || CARRY1(bVar3,bVar7 < bVar23)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar8 = *pcVar8 + bVar23;
  uStack_8 = in_ES;
  goto code_r0x00402e6e;
}


