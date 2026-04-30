/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402d2c
 * Raw Name    : Dispose
 * Demangled   : Dispose
 * Prototype   : void Dispose(byte * param_1, byte * param_2)
 * Local Vars  : param_1, param_2, pcStack_58, uStack_20, uStack_8, puStack_4, uVar1, uVar2, bVar3, cVar4, bVar5, in_EAX, pbVar6, pcVar7, piVar8, pbVar9, puVar10, puVar11, puVar12, uVar13, iVar14, uVar15, bVar16, bVar17, cVar18, uVar19, bVar20, uVar21, cVar22, unaff_EBX, pcVar23, bVar24, cVar25, uVar26, unaff_EBP, unaff_ESI, pbVar27, pbVar28, unaff_EDI, in_ES, in_SS, in_DS, bVar29, bVar30, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall Dispose(byte *param_1,byte *param_2)

{
  undefined6 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char *in_EAX;
  byte *pbVar6;
  char *pcVar7;
  undefined3 uVar13;
  int *piVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  byte bVar16;
  int iVar14;
  byte bVar17;
  char cVar18;
  undefined2 uVar19;
  undefined4 uVar15;
  byte bVar20;
  undefined2 uVar21;
  char cVar22;
  byte bVar24;
  char cVar25;
  byte *unaff_EBX;
  undefined2 uVar26;
  char *pcVar23;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar27;
  byte *pbVar28;
  uint *unaff_EDI;
  ushort in_ES;
  ushort in_SS;
  ushort in_DS;
  bool bVar29;
  bool bVar30;
  ushort unaff_retaddr;
  char *pcStack_58;
  uint uStack_20;
  ushort uStack_8;
  uint *puStack_4;
  
  bVar29 = false;
  do {
                    /* .NET CLR Managed Code */
    unaff_EBP = unaff_EBP + *(int *)(unaff_EBX + (int)param_1);
    while( true ) {
      pbVar9 = param_2;
      uVar26 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar24 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x18];
      *in_EAX = *in_EAX + (char)in_EAX;
      pbVar6 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'o');
      cVar25 = (char)param_1;
      *pbVar9 = *pbVar9 + cVar25;
      bVar20 = *unaff_ESI;
      bVar5 = (byte)((uint)param_1 >> 8);
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + (uint)CARRY1(bVar5,*pbVar6) + *(int *)pbVar6;
      *pbVar9 = *pbVar9 + cVar25;
      cVar22 = ((char)unaff_EBX - bVar20) - *unaff_ESI;
      bVar20 = *(byte *)((int)unaff_EDI + 0x1a);
      *pbVar6 = *pbVar6 + (char)pbVar6;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11(bVar5 + bVar3 + bVar20 | *pbVar9,cVar25));
      pbVar6 = pbVar6 + *(int *)pbVar9;
      uVar13 = (undefined3)((uint)pbVar6 >> 8);
      cVar4 = (char)pbVar6;
      bVar20 = (byte)pbVar9;
      if ((POPCOUNT((uint)pbVar6 & 0xff) & 1U) != 0) break;
      *pbVar6 = *pbVar6 + cVar4;
      bVar3 = cVar4 + 0x6f;
      pcVar7 = (char *)CONCAT31(uVar13,bVar3);
      pcVar23 = (char *)(CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar24,(char)unaff_EBX)) >> 8),
                                  cVar22) + -1);
      *pcVar7 = *pcVar7 + bVar3;
      *pcVar7 = *pcVar7 + bVar3;
      *pcVar23 = *pcVar23 + bVar20;
      *(byte *)((int)pcVar7 * 2) = *(byte *)((int)pcVar7 * 2) ^ bVar3;
      uVar1 = *(undefined6 *)pcVar7;
      in_ES = (ushort)((uint6)uVar1 >> 0x20);
      pcVar7 = (char *)uVar1;
      *pcVar7 = *pcVar7 + (char)uVar1;
      *unaff_ESI = *unaff_ESI + (char)uVar1;
      pcVar7 = (char *)((uint)pcVar7 | 0x73110008);
      bVar24 = (byte)((uint)pcVar23 >> 8);
      *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar24;
      *pbVar9 = *pbVar9 + cVar25;
      pbVar6 = unaff_ESI + (uint)bVar29 * -8 + 4;
      out(*(undefined4 *)unaff_ESI,(short)pbVar9);
      *pcVar7 = *pcVar7;
      cVar4 = (char)pcVar7;
      *pcVar7 = *pcVar7 + cVar4;
      bVar3 = *(byte *)(unaff_EBP - 0x5a);
      uVar26 = (undefined2)((uint)pcVar23 >> 0x10);
      cVar25 = (char)pcVar23;
      *pcVar7 = *pcVar7 + cVar4;
      cVar4 = cVar4 + '\x02';
      uVar2 = CONCAT31((int3)((uint6)uVar1 >> 8),cVar4);
      param_1 = (byte *)(uVar2 | 0x73110000);
      unaff_ESI = pbVar6 + (uint)bVar29 * -8 + 4;
      out(*(undefined4 *)pbVar6,(short)pbVar9);
      *param_1 = *param_1;
      bVar20 = bVar20 | (byte)*unaff_EDI;
      param_2 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar20);
      *param_1 = *param_1 + cVar4;
      pcVar7 = (char *)(uVar2 | 0x7b1f1609);
      bVar29 = (unaff_retaddr & 0x400) != 0;
      *(uint *)((int)unaff_EDI + -0x7d) = *(uint *)((int)unaff_EDI + -0x7d) | unaff_EBP;
      bVar5 = (byte)pcVar7;
      *pcVar7 = *pcVar7 + bVar5;
      bVar24 = bVar24 | bVar3 | unaff_ESI[0x19];
      unaff_EBX = (byte *)CONCAT22(uVar26,CONCAT11(bVar24,cVar25));
      *pcVar7 = *pcVar7 + bVar5;
      uVar13 = (undefined3)((uint)pcVar7 >> 8);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar5) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      bVar5 = bVar5 + 0x2d ^ *(byte *)CONCAT31(uVar13,bVar5 + 0x2d);
      in_EAX = (char *)CONCAT31(uVar13,bVar5);
      bVar3 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + bVar5;
      unaff_retaddr = in_ES;
      if (CARRY1(bVar3,bVar5)) {
        *in_EAX = *in_EAX + bVar5;
        bVar5 = bVar5 | in_EAX[0x4000019];
        pcVar7 = (char *)CONCAT31(uVar13,bVar5);
        if ('\0' < (char)bVar5) {
          *pcVar7 = *pcVar7 + bVar5;
          piVar8 = (int *)CONCAT31(uVar13,bVar5 + 0x28);
          *piVar8 = (int)piVar8 + (uint)(0xd7 < bVar5) + *piVar8;
          bVar16 = (byte)((uint6)uVar1 >> 8);
          *unaff_EBX = *unaff_EBX + bVar16;
          uVar19 = CONCAT11((byte)((uint)pbVar9 >> 8) | bVar24,bVar20);
          param_2 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),uVar19);
          puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
          bVar5 = in(uVar19);
          pbVar9 = (byte *)CONCAT31(uVar13,bVar5);
          bVar20 = *pbVar9;
          bVar30 = SCARRY1(*pbVar9,bVar5);
          *pbVar9 = *pbVar9 + bVar5;
          bVar3 = *pbVar9;
          pbVar6 = unaff_ESI;
          uStack_8 = in_ES;
          if (!CARRY1(bVar20,bVar5)) goto code_r0x00402e19;
          *pbVar9 = *pbVar9 + bVar5;
          bVar16 = bVar16 | *pbVar9;
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar16,cVar4));
          pcVar7 = (char *)CONCAT31(uVar13,bVar5 + *pbVar9);
          *unaff_EBX = *unaff_EBX + bVar16;
        }
        uVar13 = (undefined3)((uint)pcVar7 >> 8);
        bVar3 = (byte)pcVar7 | *param_2;
        pbVar9 = (byte *)CONCAT31(uVar13,bVar3);
        pbVar6 = unaff_ESI + (uint)bVar29 * -8 + 4;
        out(*(undefined4 *)unaff_ESI,(short)param_2);
        LOCK();
        bVar20 = *pbVar9;
        *pbVar9 = bVar3;
        UNLOCK();
        *param_2 = *param_2 + (char)param_1;
        piVar8 = (int *)(CONCAT31(uVar13,bVar20) + -0x1b7e07);
        *param_2 = *param_2 + (char)param_1;
        iVar14 = (int)param_1 - *(int *)unaff_EBX;
        bVar20 = *(byte *)((int)unaff_EDI + -0x7a);
        uVar19 = (undefined2)((uint)iVar14 >> 0x10);
        *(char *)piVar8 = *(char *)piVar8 + (char)piVar8;
        bVar3 = (char)((uint)iVar14 >> 8) + bVar20 | *(byte *)((int)unaff_EDI + 0x17);
        *(char *)piVar8 = *(char *)piVar8 + (char)piVar8;
        uVar13 = (undefined3)(CONCAT22(uVar19,CONCAT11(bVar3,(byte)iVar14)) >> 8);
        bVar20 = (byte)iVar14 | *unaff_EBX;
        param_1 = (byte *)CONCAT31(uVar13,bVar20);
        pbVar9 = (byte *)((int)piVar8 + *piVar8);
        pbVar27 = pbVar6;
        if (SCARRY4((int)piVar8,*piVar8)) goto code_r0x00402e0a;
        *param_1 = *param_1 + bVar20;
        *(byte **)unaff_EBX = param_2 + *(int *)unaff_EBX;
        piVar8 = (int *)CONCAT31(uVar13,bVar20 + 0x27);
        param_1 = (byte *)CONCAT22(uVar19,CONCAT11(bVar3 + *(byte *)((int)unaff_EDI + -0x79),bVar20)
                                  );
        *(byte *)piVar8 = (char)*piVar8 + bVar20 + 0x27;
        goto code_r0x00402dff;
      }
    }
    bVar24 = bVar24 | *(byte *)(unaff_EBP - 0x62);
    iVar14 = CONCAT22(uVar26,CONCAT11(bVar24,cVar22));
    *pbVar6 = *pbVar6 + cVar4;
    cRam00009d7d = cRam00009d7d + bVar20;
    bVar5 = cVar4 + 0x24;
    pcVar7 = (char *)(iVar14 + -0x62);
    *pcVar7 = *pcVar7 + bVar24;
    *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
    bVar3 = cVar4 + 0x2fU + *param_1;
    cVar18 = bVar3 + (0xf4 < bVar5);
    cVar4 = cVar18 + *(char *)CONCAT31(uVar13,cVar18) +
            (CARRY1(cVar4 + 0x2fU,*param_1) || CARRY1(bVar3,0xf4 < bVar5));
    pcVar7 = (char *)CONCAT31(uVar13,cVar4);
    *pcVar7 = *pcVar7 - bVar20;
    *pcVar7 = *pcVar7 + cVar4;
    pbVar9 = pbVar9 + -*(int *)pbVar9;
    unaff_ESI[iVar14 * 4] = unaff_ESI[iVar14 * 4] + bVar24;
    pcVar7[unaff_EBP] = pcVar7[unaff_EBP] + cVar4;
    *pbVar9 = *pbVar9 + cVar25;
    in_EAX = (char *)CONCAT22((short)((uint)pbVar6 >> 0x10),
                              CONCAT11((char)((uint)pbVar6 >> 8) - *pbVar9,cVar4));
    param_2 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + (byte)*unaff_EDI);
    *in_EAX = *in_EAX - (char)((uint)pbVar9 >> 8);
    *in_EAX = *in_EAX + cVar4;
    unaff_EBX = (byte *)CONCAT22(uVar26,CONCAT11(bVar24 - *unaff_ESI,cVar22));
    unaff_retaddr = in_ES;
  } while( true );
code_r0x00402dff:
  pbVar9 = (byte *)CONCAT22((short)((uint)piVar8 >> 0x10),
                            CONCAT11((byte)((uint)piVar8 >> 8) | param_2[0x2170411],(byte)piVar8));
  pbVar27 = pbVar6 + (uint)bVar29 * -8 + 4;
  out(*(undefined4 *)pbVar6,(short)param_2);
  *pbVar9 = (byte)piVar8;
  *param_2 = *param_2 + (char)param_1;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar9;
  *pbVar9 = *pbVar9 - cVar25;
  *pbVar9 = *pbVar9 + (char)pbVar9;
  bVar30 = false;
  bVar3 = (byte)((uint)param_1 >> 8) | bRam052b0603;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar3,(char)param_1));
  pbVar6 = pbVar27;
code_r0x00402e19:
  if (bVar3 == 0 || bVar30 != (char)bVar3 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cRam89280411;
  piVar8 = (int *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                           CONCAT11((byte)((uint)pbVar9 >> 8) | param_2[0x7190411],cRam89280411));
  *(char *)piVar8 = (char)*piVar8 + cRam89280411;
  cVar4 = (char)param_1;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *param_2,cVar4));
  pbVar6 = pbVar6 + *piVar8;
  pbVar9 = (byte *)((int)piVar8 + *piVar8);
  bVar3 = (byte)pbVar9;
  *pbVar9 = *pbVar9 + bVar3;
  *pbVar6 = *pbVar6 + cVar4;
  bVar20 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar3;
  *(uint *)pbVar9 = *(int *)pbVar9 + unaff_EBP + (uint)CARRY1(bVar20,bVar3);
  piVar8 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),*pbVar9);
  *param_2 = *param_2 + cVar4;
  pbVar27 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *param_2);
  pbVar9 = pbVar27 + -0x43;
  *pbVar9 = *pbVar9 + (char)((uint)param_2 >> 8);
  param_2 = pbVar27;
  puVar11 = unaff_EDI;
code_r0x00402e42:
  unaff_EDI = puVar11;
  if (SCARRY4((int)piVar8,*piVar8)) goto code_r0x00402e6e;
  iVar14 = *(int *)((int)piVar8 + *piVar8);
  *param_2 = *param_2 + (char)param_1;
  piVar8 = (int *)(iVar14 + -0x8c6f);
  param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11((byte)((uint)param_2 >> 8) | param_2[-0x3f],(char)param_2));
  pbVar27 = (byte *)((int)piVar8 + *piVar8);
  pbVar9 = pbVar27;
  unaff_EDI = puStack_4;
  in_DS = uStack_8;
  if (SCARRY4((int)piVar8,*piVar8)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar27 = *pbVar27 + (char)pbVar27;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
  pbVar9 = pbVar6 + (uint)bVar29 * -8 + 4;
  out(*(undefined4 *)pbVar6,(short)param_2);
  param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (byte)*unaff_EDI);
  pbVar6 = pbVar9 + (uint)bVar29 * -8 + 4;
  out(*(undefined4 *)pbVar9,(short)param_2);
  uStack_8 = in_ES;
code_r0x00402e6e:
  uVar13 = (undefined3)((uint)param_2 >> 8);
  cVar4 = (char)param_2 + (byte)*unaff_EDI;
  pbVar9 = pbVar6 + (uint)bVar29 * -8 + 4;
  out(*(undefined4 *)pbVar6,(short)CONCAT31(uVar13,cVar4));
  param_2 = (byte *)CONCAT31(uVar13,cVar4 + (byte)*unaff_EDI);
  pbVar6 = pbVar9 + (uint)bVar29 * -8 + 4;
  out(*(undefined4 *)pbVar9,(short)param_2);
  pbVar9 = (byte *)0x0;
  puVar11 = unaff_EDI;
code_r0x00402e81:
  unaff_EDI = puVar11;
  bVar3 = (char)pbVar9 - *pbVar9;
  iVar14 = CONCAT31((int3)((uint)pbVar9 >> 8),bVar3);
  *unaff_EBX = *unaff_EBX + (char)param_2;
  pbVar27 = (byte *)(iVar14 * 2);
  *pbVar27 = *pbVar27 ^ bVar3;
  pbVar27 = (byte *)(int)(short)iVar14;
  *pbVar27 = *pbVar27 + bVar3;
  *(byte *)unaff_EDI = (byte)*unaff_EDI + (byte)param_1;
  bVar20 = *pbVar27;
  *pbVar27 = *pbVar27 + bVar3;
  *(byte **)(unaff_EBX + -0x73) = pbVar6 + (uint)CARRY1(bVar20,bVar3) + *(int *)(unaff_EBX + -0x73);
  *pbVar27 = *pbVar27 + bVar3;
  bVar20 = (byte)param_1 | *param_2;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),bVar20);
  pbVar28 = pbVar6;
  if ((char)bVar20 < '\x01') goto code_r0x00402eb4;
  *pbVar27 = *pbVar27 + bVar3;
  pbVar9 = (byte *)CONCAT31((int3)(char)((uint)pbVar9 >> 8),bVar3 + 0x2d);
  *(byte **)(pbVar6 + (int)unaff_EDI * 8) =
       param_2 + (uint)(0xd2 < bVar3) + *(int *)(pbVar6 + (int)unaff_EDI * 8);
  uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
  do {
    bVar20 = *pbVar6;
    bVar3 = (byte)pbVar9;
    *pbVar6 = *pbVar6 + bVar3;
    if (!CARRY1(bVar20,bVar3)) break;
    *pbVar9 = *pbVar9 + bVar3;
    bVar3 = bVar3 | pbVar9[0x400001a];
    pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar3);
    if ((char)bVar3 < '\x01') {
code_r0x00402ecc:
      *pbVar27 = *pbVar27 + (byte)pbVar27;
      uVar13 = (undefined3)((uint)pbVar27 >> 8);
      bVar20 = (byte)pbVar27 | pbVar27[0x400001b];
      puVar11 = (uint *)CONCAT31(uVar13,bVar20);
      if ((char)bVar20 < '\x01') {
        bVar3 = *param_2;
        *param_2 = *param_2 + (byte)param_1;
        *(char *)((int)puVar11 * 2) = *(char *)((int)puVar11 * 2) - CARRY1(bVar3,(byte)param_1);
        bVar30 = 0x81 < bVar20;
        bVar20 = bVar20 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar27 = *pbVar27 + bVar3;
      pbVar28 = pbVar6;
code_r0x00402eb4:
      uVar13 = (undefined3)((uint)pbVar27 >> 8);
      bVar3 = (char)pbVar27 + 0x6f;
      puVar11 = (uint *)CONCAT31(uVar13,bVar3);
      *puVar11 = uStack_20;
      bVar20 = *param_2;
      *param_2 = *param_2 + (char)param_1;
      uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
      in_SS = in_ES;
      if (*param_2 != 0 && SCARRY1(bVar20,(char)param_1) == (char)*param_2 < '\0') {
        *(byte *)puVar11 = (char)*puVar11 + bVar3;
        bVar5 = (char)pbVar27 + 0x9c;
        pbVar27 = (byte *)CONCAT31(uVar13,bVar5);
        *(byte **)(pbVar28 + (int)unaff_EDI * 8) =
             param_2 + (uint)(0xd2 < bVar3) + *(int *)(pbVar28 + (int)unaff_EDI * 8);
        uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
        bVar20 = *pbVar28;
        *pbVar28 = *pbVar28 + bVar5;
        pbVar6 = pbVar28;
        if (CARRY1(bVar20,bVar5)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      pbVar6 = pbVar28 + (uint)bVar29 * -8 + 4;
      out(*(undefined4 *)pbVar28,(short)param_2);
    }
    cVar4 = (char)puVar11;
    *(char *)puVar11 = (char)*puVar11 + cVar4;
    uVar13 = (undefined3)((uint)puVar11 >> 8);
    bVar3 = cVar4 + 0x6f;
    puVar11 = (uint *)CONCAT31(uVar13,bVar3);
    *puVar11 = uStack_20;
    bVar20 = *param_2;
    *param_2 = *param_2 + (byte)param_1;
    uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
    pbVar6[0x1c] = (pbVar6[0x1c] - bVar24) - CARRY1(bVar20,(byte)param_1);
    *(byte *)puVar11 = (char)*puVar11 + bVar3;
    bVar5 = cVar4 + 0x9c;
    pcVar7 = (char *)CONCAT31(uVar13,bVar5);
    *(byte **)(pbVar6 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < bVar3) + *(int *)(pbVar6 + (int)unaff_EDI * 8);
    bVar20 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar5;
    if (!CARRY1(bVar20,bVar5)) goto code_r0x00402e7e;
    *pcVar7 = *pcVar7 + bVar5;
    bVar5 = bVar5 | pcVar7[0x400001c];
    pbVar9 = (byte *)CONCAT31(uVar13,bVar5);
    uStack_8 = in_ES;
    if ((char)bVar5 < '\x01') goto code_r0x00402f16;
    *pbVar9 = *pbVar9 + bVar5;
    puVar11 = (uint *)CONCAT31(uVar13,bVar5 + 0x6f);
    while( true ) {
      *puVar11 = uStack_20;
      bVar20 = *param_2;
      *param_2 = *param_2 + (byte)param_1;
      *(uint *)(pbVar6 + 0x1d) =
           (*(int *)(pbVar6 + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar20,(byte)param_1);
      bVar20 = (byte)puVar11;
      *(byte *)puVar11 = (char)*puVar11 + bVar20;
      bVar3 = bVar20 + 0x2d;
      pbVar9 = (byte *)CONCAT31((int3)((uint)puVar11 >> 8),bVar3);
      *(byte **)(pbVar6 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar20) + *(int *)(pbVar6 + (int)unaff_EDI * 8);
      uStack_20 = CONCAT22((short)(uStack_20 >> 0x10),in_ES);
      bVar20 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar3;
      if (!CARRY1(bVar20,bVar3)) break;
      *pbVar9 = *pbVar9 + bVar3;
code_r0x00402f16:
      bVar20 = (byte)pbVar9 | pbVar9[0x400001d];
      puVar11 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar20);
      uVar2 = unaff_EBP;
      if ((char)bVar20 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = uVar2;
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        uVar13 = (undefined3)((uint)puVar11 >> 8);
        cVar4 = (char)puVar11 + 'o';
        puVar10 = (uint *)CONCAT31(uVar13,cVar4);
        *puVar10 = uStack_20;
        cVar22 = (char)param_1;
        *param_2 = *param_2 + cVar22;
        uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
        bVar20 = (byte)((uint)param_2 >> 8);
        param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11(bVar20 - *pbVar6,(char)param_2));
        if (bVar20 < *pbVar6) break;
        bVar30 = CARRY4((uint)puVar10,*puVar10);
        puVar11 = (uint *)((int)puVar10 + *puVar10);
        if (!SCARRY4((int)puVar10,*puVar10)) {
          bVar30 = CARRY4(unaff_EBP,*puVar11);
          unaff_EBP = unaff_EBP + *puVar11;
        }
        *puVar11 = (*puVar11 - (int)puVar11) - (uint)bVar30;
        *param_2 = *param_2 + cVar22;
        param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((char)((uint)param_1 >> 8) + *param_2,cVar22 - *param_2)
                                  );
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
code_r0x00402f3b:
        cVar22 = (char)param_2;
        *unaff_EBX = *unaff_EBX + cVar22;
        bVar20 = (byte)puVar11;
        *(byte *)((int)puVar11 * 2) = *(byte *)((int)puVar11 * 2) ^ bVar20;
        *(byte *)puVar11 = (byte)*puVar11 + bVar20;
        *(byte *)puVar11 = (byte)*puVar11 + cVar22;
        uVar2 = *puVar11;
        *(byte *)puVar11 = (byte)*puVar11 + bVar20;
        *(byte **)param_2 =
             (byte *)((int)puVar11 + (uint)CARRY1((byte)uVar2,bVar20) + *(int *)param_2);
        pcVar7 = (char *)((uint)puVar11 | *unaff_EDI);
        uVar13 = (undefined3)((uint)pcVar7 >> 8);
        cVar4 = (char)pcVar7 + *pcVar7;
        pcVar7 = (char *)CONCAT31(uVar13,cVar4);
        *pcVar7 = *pcVar7 + cVar4;
        cVar4 = cVar4 + *pcVar7;
        piVar8 = (int *)CONCAT31(uVar13,cVar4);
        *(char *)piVar8 = (char)*piVar8 + cVar4;
        iVar14 = LocalDescriptorTableRegister();
        *piVar8 = iVar14;
        bVar20 = *unaff_EBX;
        bVar17 = (byte)((uint)param_1 >> 8);
        *unaff_EBX = *unaff_EBX + bVar17;
        iVar14 = *piVar8;
        uVar19 = (undefined2)((uint)param_1 >> 0x10);
        bVar16 = (byte)param_1;
        *pbVar6 = *pbVar6 + cVar4;
        pbVar9 = pbVar6 + (uint)bVar29 * -8 + 4;
        out(*(undefined4 *)pbVar6,(short)param_2);
        *pbVar9 = *pbVar9 + cVar4;
        bVar3 = *unaff_EBX;
        *param_2 = *param_2 - bVar24;
        *pbVar9 = *pbVar9 + cVar4;
        pbVar27 = pbVar9 + (uint)bVar29 * -8 + 4;
        out(*(undefined4 *)pbVar9,(short)param_2);
        *pbVar27 = *pbVar27 + cVar4;
        bVar5 = *unaff_EBX;
        *(uint *)(param_2 + -0x23) = *(uint *)(param_2 + -0x23) & (uint)pbVar27;
        puVar12 = (ushort *)((int)piVar8 + *piVar8);
        if (!SCARRY4((int)piVar8,*piVar8)) {
          *puVar12 = in_SS;
        }
        *(char *)puVar12 = (char)*puVar12 + (char)puVar12;
        uVar21 = CONCAT11((char)((uint)param_2 >> 8) + param_2[-0x15],cVar22);
        param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar21);
        puVar11 = (uint *)((int)puVar12 + *(int *)puVar12);
        if (!SCARRY4((int)puVar12,*(int *)puVar12)) {
          *(ushort *)puVar11 = in_SS;
        }
        cVar4 = (char)puVar11;
        *(byte *)puVar11 = (byte)*puVar11 + cVar4;
        cVar18 = ((bVar17 - (char)iVar14) - CARRY1(bVar20,bVar17) | bVar3 | bVar5) + (byte)*puVar11;
        param_1 = (byte *)CONCAT22(uVar19,CONCAT11(cVar18,bVar16));
        bVar20 = *param_2;
        *param_2 = *param_2 + bVar16;
        if (CARRY1(bVar20,bVar16)) {
          *(byte *)puVar11 = (byte)*puVar11 + cVar4;
          bVar20 = param_2[6];
          *param_2 = *param_2 + bVar16;
          bVar3 = (cVar18 - *pbVar27) + cRam14730307;
          *(byte *)puVar11 = (byte)*puVar11 + cVar4;
          bVar20 = bVar24 | bVar20 | param_2[0x2a];
          uVar2 = *puVar11;
          pbVar6 = (byte *)((int)puVar11 + (uint)CARRY1(bVar3,(byte)*puVar11) + *puVar11);
          *param_2 = *param_2 + bVar16;
          cVar4 = cVar25 - *pbVar27;
          cVar25 = bVar20 + *(char *)(CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar20,cVar25)) >> 8)
                                               ,cVar4) + 0x1e);
          *pbVar6 = *pbVar6 + (char)pbVar6;
          uVar13 = (undefined3)((uint)pbVar6 >> 8);
          bVar20 = (char)pbVar6 + 0x2aU & *param_2;
          *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
          pcVar7 = (char *)CONCAT31(uVar13,bVar20 + 0x2a);
          cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar4)) + 0x1f);
          *pcVar7 = *pcVar7 + bVar20 + 0x2a;
          bVar20 = bVar20 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
          pcVar7 = (char *)CONCAT31(uVar13,bVar20 + 0x2a);
          cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar4)) + 0x20);
          *pcVar7 = *pcVar7 + bVar20 + 0x2a;
          bVar20 = bVar20 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
          pcVar7 = (char *)CONCAT31(uVar13,bVar20 + 0x2a);
          cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar4)) + 0x21);
          *pcVar7 = *pcVar7 + bVar20 + 0x2a;
          bVar20 = bVar20 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
          pcVar7 = (char *)CONCAT31(uVar13,bVar20 + 0x2a);
          cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar4)) + 0x22);
          *pcVar7 = *pcVar7 + bVar20 + 0x2a;
          bVar20 = bVar20 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
          pcVar7 = (char *)CONCAT31(uVar13,bVar20 + 0x2a);
          bVar3 = bVar3 + (byte)uVar2 + *pcVar7;
          uVar15 = CONCAT22(uVar19,CONCAT11(bVar3,bVar16));
          cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar4)) + 0x25);
          *pcVar7 = *pcVar7 + bVar20 + 0x2a;
          bVar20 = bVar20 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
          pcVar7 = (char *)CONCAT31(uVar13,bVar20 + 0x2a);
          pcVar23 = (char *)CONCAT22(uVar26,CONCAT11(cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(
                                                  cVar25,cVar4)) + 0x26),cVar4));
          *pcVar7 = *pcVar7 + bVar20 + 0x2a;
          bVar20 = bVar20 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
          cVar4 = bVar20 + 0x2a;
          pcVar7 = (char *)CONCAT31(uVar13,cVar4);
          if ((POPCOUNT(cVar4) & 1U) == 0) {
            *pcVar7 = *pcVar7 + cVar4;
            pbVar6 = (byte *)(CONCAT31(uVar13,bVar20 + 0x4f) + -0x33282610);
            bVar20 = *pbVar6;
            bVar5 = (byte)pbVar6;
            *pbVar6 = *pbVar6 + bVar5;
            uVar13 = (undefined3)((uint)pbVar6 >> 8);
            if (!CARRY1(bVar20,bVar5)) {
              if (!SCARRY1(bVar5,'\0')) {
                *pbVar6 = *pbVar6 + bVar5;
                uVar15 = CONCAT22(uVar19,CONCAT11(bVar3 | *param_2,bVar16));
                bVar5 = bVar5 & *param_2;
                *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
                pcVar7 = (char *)CONCAT31(uVar13,bVar5 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar7 = (char *)CONCAT31(uVar13,bVar5 + *pcVar23);
              if (SCARRY1(bVar5,*pcVar23) != (char)(bVar5 + *pcVar23) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar20 = bVar5 + *pcVar23;
            pbVar6 = (byte *)CONCAT31(uVar13,bVar20);
            if (SCARRY1(bVar5,*pcVar23) == (char)bVar20 < '\0') {
              pcVar7 = (char *)CONCAT22(uVar19,CONCAT11(bVar3 | *param_2,bVar16));
              *pcVar23 = *pcVar23 + cVar22;
              *param_2 = *param_2 ^ bVar20;
              *(char *)((int)pbVar6 * 2) = *(char *)((int)pbVar6 * 2) + bVar20;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar7 = *pcVar7 + (char)pcVar7;
            uVar13 = (undefined3)((uint)pcVar7 >> 8);
            bVar20 = (char)pcVar7 + 0x2aU & *param_2;
            *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
            pcVar7 = (char *)CONCAT31(uVar13,bVar20 + 0x2a);
            *pcVar7 = *pcVar7 + bVar20 + 0x2a;
            pcVar7 = (char *)CONCAT31(uVar13,bVar20 + 0x54 & *param_2);
code_r0x00403072:
            cVar4 = (char)pcVar7;
            *pcVar7 = *pcVar7 + cVar4;
            uVar13 = (undefined3)((uint)pcVar7 >> 8);
            pcVar7 = (char *)CONCAT31(uVar13,cVar4 + '*');
            *pcVar7 = *pcVar7 + cVar4 + '*';
            bVar20 = cVar4 + 0x54U & *param_2;
            *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
            pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_DS);
            uVar15 = CONCAT22((short)((uint)uVar15 >> 0x10),
                              CONCAT11((char)((uint)uVar15 >> 8) +
                                       *(char *)CONCAT31(uVar13,bVar20 + 0x2a),(char)uVar15));
            pbVar27[0x20a0000] = pbVar27[0x20a0000] - cVar22;
            pcVar7 = pcStack_58;
code_r0x0040309a:
            cVar4 = (char)pcVar7;
            *pcVar7 = *pcVar7 + cVar4;
            pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_ES);
            *pcVar7 = *pcVar7 + cVar4;
            pbVar6 = (byte *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar4 + 0x2aU & *param_2);
          }
          cVar4 = (char)pbVar6;
          *pbVar6 = *pbVar6 + cVar4;
          uVar13 = (undefined3)((uint)pbVar6 >> 8);
          cVar25 = cVar4 + '*';
          pcVar7 = (char *)CONCAT31(uVar13,cVar25);
          pbVar27[0x20a0000] = pbVar27[0x20a0000] - cVar22;
          *pcVar7 = *pcVar7 + cVar25;
          cVar18 = (char)pcStack_58 - *pbVar27;
          pcVar23 = (char *)CONCAT22((short)((uint)pcStack_58 >> 0x10),
                                     CONCAT11((char)((uint)pcStack_58 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_58 >> 8),
                                                                 cVar18) + 0x34),cVar18));
          *pcVar7 = *pcVar7 + cVar25;
          bVar20 = cVar4 + 0x54U & *param_2;
          *(char *)CONCAT31(uVar13,bVar20) = *(char *)CONCAT31(uVar13,bVar20) + bVar20;
          pbVar6 = (byte *)CONCAT31(uVar13,bVar20 + 0x2a);
          bVar20 = (byte)((uint)uVar15 >> 8);
          pcVar7 = (char *)CONCAT22((short)((uint)uVar15 >> 0x10),
                                    CONCAT11(bVar20 + *pbVar6,(char)uVar15));
          pbVar6 = pbVar6 + (uint)CARRY1(bVar20,*pbVar6) + *(int *)pbVar6;
          *param_2 = *param_2 + (char)uVar15;
          uVar13 = (undefined3)((uint)pbVar6 >> 8);
          cVar4 = (byte)pbVar6 - *pbVar6;
          piVar8 = (int *)CONCAT31(uVar13,cVar4);
          pbVar27 = pbVar27 + (uint)((byte)pbVar6 < *pbVar6) + *piVar8;
          cVar4 = cVar4 + (char)*piVar8;
          pbVar6 = (byte *)CONCAT31(uVar13,cVar4);
          *pbVar6 = *pbVar6 + cVar4;
code_r0x004030df:
          *pcVar7 = *pcVar7 + cVar22;
          bVar20 = *pbVar6;
          bVar3 = (byte)pbVar6;
          *pbVar6 = *pbVar6 + bVar3;
          *(byte **)(pcVar23 + -0x41) =
               pbVar27 + (uint)CARRY1(bVar20,bVar3) + *(int *)(pcVar23 + -0x41);
          *pbVar6 = *pbVar6 + bVar3;
          uVar13 = (undefined3)((uint)pbVar6 >> 8);
          bVar3 = bVar3 | *pbVar27;
          *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
          pcVar7 = (char *)CONCAT31(uVar13,bVar3 + 0x7b);
          *pcVar7 = *pcVar7 + bVar3 + 0x7b;
          pbVar27[CONCAT31(uVar13,bVar3 - 8) + -1] =
               pbVar27[CONCAT31(uVar13,bVar3 - 8) + -1] + (bVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar6 = pbVar27 + (uint)bVar29 * -8 + 4;
        out(*(undefined4 *)pbVar27,uVar21);
        uVar2 = unaff_EBP + 1;
        uStack_20 = unaff_EBP;
      }
      bVar20 = cVar4 - (bVar20 < *pbVar6);
      pbVar9 = pbVar6 + (int)unaff_EDI * 2;
      bVar30 = CARRY1(*pbVar9,bVar20);
      *pbVar9 = *pbVar9 + bVar20;
code_r0x00402ef9:
      puVar11 = (uint *)CONCAT31(uVar13,bVar20 - bVar30);
      pbVar9 = (byte *)((int)unaff_EDI + unaff_EBP * 2);
      *pbVar9 = *pbVar9 + (bVar20 - bVar30);
    }
  } while( true );
code_r0x00402e36:
  *param_1 = *param_1 + (char)param_2;
  pbVar27 = param_2 + 0xa0a0000;
  bVar20 = *pbVar27;
  bVar5 = (byte)param_1;
  *pbVar27 = *pbVar27 - bVar5;
  bVar3 = (byte)pbVar9 + *pbVar9;
  piVar8 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar3 + (bVar20 < bVar5));
  puVar11 = unaff_EDI;
  if (CARRY1((byte)pbVar9,*pbVar9) || CARRY1(bVar3,bVar20 < bVar5)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar7 = *pcVar7 + bVar5;
  uStack_8 = in_ES;
  goto code_r0x00402e6e;
}


