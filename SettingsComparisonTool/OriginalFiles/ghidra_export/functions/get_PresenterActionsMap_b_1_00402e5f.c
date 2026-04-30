/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402e5f
 * Raw Name    : <get_PresenterActionsMap>b__1
 * Demangled   : <get_PresenterActionsMap>b__1
 * Prototype   : void <get_PresenterActionsMap>b__1(char * cPresenter, byte * param_2)
 * Local Vars  : param_2, pcStack_54, uStack_18, puStack_10, pbVar1, uVar2, bVar3, bVar4, cVar5, bVar6, piVar7, cPresenter, pbVar8, iVar9, pbVar10, puVar11, puVar12, pcVar13, piVar14, uVar15, uVar16, bVar17, cVar18, bVar19, uVar20, bVar21, cVar22, uVar23, cVar24, unaff_EBX, pcVar25, unaff_EBP, unaff_ESI, unaff_EDI, in_ES, in_SS, in_DS, bVar26
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall <get_PresenterActionsMap>b__1(char *cPresenter,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar16;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar10;
  undefined3 uVar15;
  uint *puVar12;
  char *pcVar13;
  int *piVar14;
  byte bVar17;
  char cVar18;
  byte bVar19;
  byte bVar21;
  undefined2 uVar23;
  char cVar22;
  undefined4 uVar20;
  char cVar24;
  byte *unaff_EBX;
  char *pcVar25;
  uint unaff_EBP;
  byte *unaff_ESI;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar26;
  char *pcStack_54;
  uint uStack_18;
  uint *puStack_10;
  int iVar9;
  uint *puVar11;
  
code_r0x00402e5f:
                    /* .NET CLR Managed Code */
  uVar15 = (undefined3)((uint)param_2 >> 8);
  cVar24 = (char)param_2 + *unaff_ESI;
  pbVar8 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,(short)CONCAT31(uVar15,cVar24));
  param_2 = (byte *)CONCAT31(uVar15,cVar24 + (char)*unaff_EDI);
  unaff_ESI = unaff_ESI + 8;
  out(*(undefined4 *)pbVar8,(short)param_2);
code_r0x00402e6e:
  uVar15 = (undefined3)((uint)param_2 >> 8);
  cVar24 = (char)param_2 + (char)*unaff_EDI;
  pbVar8 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,(short)CONCAT31(uVar15,cVar24));
  param_2 = (byte *)CONCAT31(uVar15,cVar24 + (char)*unaff_EDI);
  unaff_ESI = unaff_ESI + 8;
  out(*(undefined4 *)pbVar8,(short)param_2);
  pbVar8 = (byte *)0x0;
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_ES);
  do {
    bVar3 = (char)pbVar8 - *pbVar8;
    iVar9 = CONCAT31((int3)((uint)pbVar8 >> 8),bVar3);
    *unaff_EBX = *unaff_EBX + (char)param_2;
    pbVar10 = (byte *)(iVar9 * 2);
    *pbVar10 = *pbVar10 ^ bVar3;
    pbVar10 = (byte *)(int)(short)iVar9;
    *pbVar10 = *pbVar10 + bVar3;
    *(byte *)unaff_EDI = (char)*unaff_EDI + (byte)cPresenter;
    bVar17 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar3;
    *(byte **)(unaff_EBX + -0x73) =
         unaff_ESI + (uint)CARRY1(bVar17,bVar3) + *(int *)(unaff_EBX + -0x73);
    *pbVar10 = *pbVar10 + bVar3;
    bVar17 = (byte)cPresenter | *param_2;
    cPresenter = (char *)CONCAT31((int3)((uint)cPresenter >> 8),bVar17);
    uStack_18 = CONCAT22(uStack_18._2_2_,in_SS);
    cVar24 = (char)unaff_EBX;
    bVar6 = (byte)((uint)unaff_EBX >> 8);
    if ((char)bVar17 < '\x01') goto code_r0x00402eb4;
    *pbVar10 = *pbVar10 + bVar3;
    pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar8 >> 8),bVar3 + 0x2d);
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < bVar3) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    pbVar8 = param_2;
    while( true ) {
      bVar17 = *unaff_ESI;
      bVar3 = (byte)pbVar10;
      *unaff_ESI = *unaff_ESI + bVar3;
      param_2 = pbVar8;
      if (!CARRY1(bVar17,bVar3)) break;
      *pbVar10 = *pbVar10 + bVar3;
      bVar3 = bVar3 | pbVar10[0x400001a];
      pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar3);
      if ((char)bVar3 < '\x01') {
code_r0x00402ecc:
        *pbVar8 = *pbVar8 + (byte)pbVar8;
        uVar15 = (undefined3)((uint)pbVar8 >> 8);
        bVar17 = (byte)pbVar8 | pbVar8[0x400001b];
        puVar12 = (uint *)CONCAT31(uVar15,bVar17);
        if ((char)bVar17 < '\x01') {
          bVar3 = *param_2;
          *param_2 = *param_2 + (byte)cPresenter;
          *(char *)((int)puVar12 * 2) = *(char *)((int)puVar12 * 2) - CARRY1(bVar3,(byte)cPresenter)
          ;
          bVar26 = 0x81 < bVar17;
          bVar17 = bVar17 + 0x7e;
          goto code_r0x00402ef9;
        }
      }
      else {
        *pbVar8 = *pbVar8 + bVar3;
        pbVar10 = pbVar8;
code_r0x00402eb4:
        uVar15 = (undefined3)((uint)pbVar10 >> 8);
        bVar3 = (char)pbVar10 + 0x6f;
        puVar12 = (uint *)CONCAT31(uVar15,bVar3);
        *puVar12 = uStack_18;
        bVar17 = *param_2;
        *param_2 = *param_2 + (char)cPresenter;
        uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
        in_SS = in_ES;
        if (*param_2 != 0 && SCARRY1(bVar17,(char)cPresenter) == (char)*param_2 < '\0') {
          *(byte *)puVar12 = (char)*puVar12 + bVar3;
          bVar4 = (char)pbVar10 + 0x9c;
          pbVar8 = (byte *)CONCAT31(uVar15,bVar4);
          *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
               param_2 + (uint)(0xd2 < bVar3) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
          uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
          bVar17 = *unaff_ESI;
          *unaff_ESI = *unaff_ESI + bVar4;
          puVar12 = unaff_EDI;
          if (CARRY1(bVar17,bVar4)) goto code_r0x00402ecc;
          goto code_r0x00402e5a;
        }
        out(*(undefined4 *)unaff_ESI,(short)param_2);
        unaff_ESI = unaff_ESI + 4;
      }
      cVar5 = (char)puVar12;
      *(char *)puVar12 = (char)*puVar12 + cVar5;
      uVar15 = (undefined3)((uint)puVar12 >> 8);
      bVar3 = cVar5 + 0x6f;
      puVar12 = (uint *)CONCAT31(uVar15,bVar3);
      *puVar12 = uStack_18;
      bVar17 = *param_2;
      *param_2 = *param_2 + (byte)cPresenter;
      uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
      unaff_ESI[0x1c] = (unaff_ESI[0x1c] - bVar6) - CARRY1(bVar17,(byte)cPresenter);
      *(byte *)puVar12 = (char)*puVar12 + bVar3;
      bVar4 = cVar5 + 0x9c;
      pcVar13 = (char *)CONCAT31(uVar15,bVar4);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar3) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      bVar17 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + bVar4;
      if (!CARRY1(bVar17,bVar4)) {
        *pcVar13 = *pcVar13 + bVar4;
        goto code_r0x00402e6e;
      }
      *pcVar13 = *pcVar13 + bVar4;
      bVar4 = bVar4 | pcVar13[0x400001c];
      pbVar10 = (byte *)CONCAT31(uVar15,bVar4);
      if ((char)bVar4 < '\x01') goto code_r0x00402f16;
      *pbVar10 = *pbVar10 + bVar4;
      puVar12 = (uint *)CONCAT31(uVar15,bVar4 + 0x6f);
      while( true ) {
        *puVar12 = uStack_18;
        bVar17 = *param_2;
        *param_2 = *param_2 + (byte)cPresenter;
        uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
        *(uint *)(unaff_ESI + 0x1d) =
             (*(int *)(unaff_ESI + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar17,(byte)cPresenter);
        bVar17 = (byte)puVar12;
        *(byte *)puVar12 = (char)*puVar12 + bVar17;
        bVar3 = bVar17 + 0x2d;
        pbVar10 = (byte *)CONCAT31((int3)((uint)puVar12 >> 8),bVar3);
        *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
             param_2 + (uint)(0xd2 < bVar17) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
        bVar17 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + bVar3;
        pbVar8 = param_2;
        if (!CARRY1(bVar17,bVar3)) break;
        *pbVar10 = *pbVar10 + bVar3;
code_r0x00402f16:
        bVar17 = (byte)pbVar10 | pbVar10[0x400001d];
        puVar12 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar17);
        if ((char)bVar17 < '\x01') goto code_r0x00402f3b;
        while( true ) {
          *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
          uVar15 = (undefined3)((uint)puVar12 >> 8);
          cVar5 = (char)puVar12 + 'o';
          puVar11 = (uint *)CONCAT31(uVar15,cVar5);
          *puVar11 = uStack_18;
          cVar18 = (char)cPresenter;
          *param_2 = *param_2 + cVar18;
          uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
          bVar17 = (byte)((uint)param_2 >> 8);
          param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                     CONCAT11(bVar17 - *unaff_ESI,(char)param_2));
          if (bVar17 < *unaff_ESI) break;
          bVar26 = CARRY4((uint)puVar11,*puVar11);
          puVar12 = (uint *)((int)puVar11 + *puVar11);
          if (!SCARRY4((int)puVar11,*puVar11)) {
            bVar26 = CARRY4(unaff_EBP,*puVar12);
            unaff_EBP = unaff_EBP + *puVar12;
          }
          *puVar12 = (*puVar12 - (int)puVar12) - (uint)bVar26;
          *param_2 = *param_2 + cVar18;
          cPresenter = (char *)CONCAT22((short)((uint)cPresenter >> 0x10),
                                        CONCAT11((char)((uint)cPresenter >> 8) + *param_2,
                                                 cVar18 - *param_2));
          *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x00402f3b:
          cVar18 = (char)param_2;
          *unaff_EBX = *unaff_EBX + cVar18;
          bVar17 = (byte)puVar12;
          *(byte *)((int)puVar12 * 2) = *(byte *)((int)puVar12 * 2) ^ bVar17;
          *(byte *)puVar12 = (byte)*puVar12 + bVar17;
          *(byte *)puVar12 = (byte)*puVar12 + cVar18;
          uVar2 = *puVar12;
          *(byte *)puVar12 = (byte)*puVar12 + bVar17;
          *(byte **)param_2 =
               (byte *)((int)puVar12 + (uint)CARRY1((byte)uVar2,bVar17) + *(int *)param_2);
          pcVar13 = (char *)((uint)puVar12 | *unaff_EDI);
          unaff_EBP = unaff_EBP + 1;
          uVar15 = (undefined3)((uint)pcVar13 >> 8);
          cVar5 = (char)pcVar13 + *pcVar13;
          pcVar13 = (char *)CONCAT31(uVar15,cVar5);
          *pcVar13 = *pcVar13 + cVar5;
          cVar5 = cVar5 + *pcVar13;
          piVar7 = (int *)CONCAT31(uVar15,cVar5);
          *(char *)piVar7 = (char)*piVar7 + cVar5;
          iVar9 = LocalDescriptorTableRegister();
          *piVar7 = iVar9;
          bVar17 = *unaff_EBX;
          bVar21 = (byte)((uint)cPresenter >> 8);
          *unaff_EBX = *unaff_EBX + bVar21;
          iVar9 = *piVar7;
          uVar16 = (undefined2)((uint)cPresenter >> 0x10);
          bVar19 = (byte)cPresenter;
          *unaff_ESI = *unaff_ESI + cVar5;
          pbVar8 = unaff_ESI + 4;
          out(*(undefined4 *)unaff_ESI,(short)param_2);
          *pbVar8 = *pbVar8 + cVar5;
          bVar3 = *unaff_EBX;
          *param_2 = *param_2 - bVar6;
          *pbVar8 = *pbVar8 + cVar5;
          pbVar10 = unaff_ESI + 8;
          out(*(undefined4 *)pbVar8,(short)param_2);
          *pbVar10 = *pbVar10 + cVar5;
          bVar4 = *unaff_EBX;
          *(uint *)(param_2 + -0x23) = *(uint *)(param_2 + -0x23) & (uint)pbVar10;
          piVar14 = (int *)((int)piVar7 + *piVar7);
          if (!SCARRY4((int)piVar7,*piVar7)) {
            *(undefined2 *)piVar14 = in_SS;
          }
          *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
          uVar23 = CONCAT11((char)((uint)param_2 >> 8) + param_2[-0x15],cVar18);
          param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar23);
          puVar12 = (uint *)((int)piVar14 + *piVar14);
          if (!SCARRY4((int)piVar14,*piVar14)) {
            *(undefined2 *)puVar12 = in_SS;
          }
          cVar5 = (char)puVar12;
          *(byte *)puVar12 = (byte)*puVar12 + cVar5;
          cVar22 = ((bVar21 - (char)iVar9) - CARRY1(bVar17,bVar21) | bVar3 | bVar4) + (byte)*puVar12
          ;
          cPresenter = (char *)CONCAT22(uVar16,CONCAT11(cVar22,bVar19));
          bVar17 = *param_2;
          *param_2 = *param_2 + bVar19;
          if (CARRY1(bVar17,bVar19)) {
            *(byte *)puVar12 = (byte)*puVar12 + cVar5;
            bVar17 = param_2[6];
            uVar23 = (undefined2)((uint)unaff_EBX >> 0x10);
            *param_2 = *param_2 + bVar19;
            bVar3 = (cVar22 - *pbVar10) + cRam14730307;
            *(byte *)puVar12 = (byte)*puVar12 + cVar5;
            bVar17 = bVar6 | bVar17 | param_2[0x2a];
            uVar2 = *puVar12;
            pbVar8 = (byte *)((int)puVar12 + (uint)CARRY1(bVar3,(byte)*puVar12) + *puVar12);
            *param_2 = *param_2 + bVar19;
            cVar5 = cVar24 - *pbVar10;
            cVar24 = bVar17 + *(char *)(CONCAT31((int3)(CONCAT22(uVar23,CONCAT11(bVar17,cVar24)) >>
                                                       8),cVar5) + 0x1e);
            *pbVar8 = *pbVar8 + (char)pbVar8;
            uVar15 = (undefined3)((uint)pbVar8 >> 8);
            bVar17 = (char)pbVar8 + 0x2aU & *param_2;
            *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
            pcVar13 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar24,cVar5)) + 0x1f);
            *pcVar13 = *pcVar13 + bVar17 + 0x2a;
            bVar17 = bVar17 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
            pcVar13 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar24,cVar5)) + 0x20);
            *pcVar13 = *pcVar13 + bVar17 + 0x2a;
            bVar17 = bVar17 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
            pcVar13 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar24,cVar5)) + 0x21);
            *pcVar13 = *pcVar13 + bVar17 + 0x2a;
            bVar17 = bVar17 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
            pcVar13 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar24,cVar5)) + 0x22);
            *pcVar13 = *pcVar13 + bVar17 + 0x2a;
            bVar17 = bVar17 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
            pcVar13 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
            bVar3 = bVar3 + (byte)uVar2 + *pcVar13;
            uVar20 = CONCAT22(uVar16,CONCAT11(bVar3,bVar19));
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar24,cVar5)) + 0x25);
            *pcVar13 = *pcVar13 + bVar17 + 0x2a;
            bVar17 = bVar17 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
            pcVar13 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
            pcVar25 = (char *)CONCAT22(uVar23,CONCAT11(cVar24 + *(char *)(CONCAT22(uVar23,CONCAT11(
                                                  cVar24,cVar5)) + 0x26),cVar5));
            *pcVar13 = *pcVar13 + bVar17 + 0x2a;
            bVar17 = bVar17 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
            cVar24 = bVar17 + 0x2a;
            pcVar13 = (char *)CONCAT31(uVar15,cVar24);
            if ((POPCOUNT(cVar24) & 1U) == 0) {
              *pcVar13 = *pcVar13 + cVar24;
              pbVar8 = (byte *)(CONCAT31(uVar15,bVar17 + 0x4f) + -0x33282610);
              bVar17 = *pbVar8;
              bVar6 = (byte)pbVar8;
              *pbVar8 = *pbVar8 + bVar6;
              uVar15 = (undefined3)((uint)pbVar8 >> 8);
              if (!CARRY1(bVar17,bVar6)) {
                if (!SCARRY1(bVar6,'\0')) {
                  *pbVar8 = *pbVar8 + bVar6;
                  uVar20 = CONCAT22(uVar16,CONCAT11(bVar3 | *param_2,bVar19));
                  bVar6 = bVar6 & *param_2;
                  *(char *)CONCAT31(uVar15,bVar6) = *(char *)CONCAT31(uVar15,bVar6) + bVar6;
                  pcVar13 = (char *)CONCAT31(uVar15,bVar6 + 0x2a);
                  goto code_r0x00403058;
                }
                pcVar13 = (char *)CONCAT31(uVar15,bVar6 + *pcVar25);
                if (SCARRY1(bVar6,*pcVar25) != (char)(bVar6 + *pcVar25) < '\0')
                goto code_r0x00403072;
                goto code_r0x0040309a;
              }
              bVar17 = bVar6 + *pcVar25;
              pbVar8 = (byte *)CONCAT31(uVar15,bVar17);
              if (SCARRY1(bVar6,*pcVar25) == (char)bVar17 < '\0') {
                pcVar13 = (char *)CONCAT22(uVar16,CONCAT11(bVar3 | *param_2,bVar19));
                *pcVar25 = *pcVar25 + cVar18;
                *param_2 = *param_2 ^ bVar17;
                *(char *)((int)pbVar8 * 2) = *(char *)((int)pbVar8 * 2) + bVar17;
                goto code_r0x004030df;
              }
            }
            else {
code_r0x00403058:
              *pcVar13 = *pcVar13 + (char)pcVar13;
              uVar15 = (undefined3)((uint)pcVar13 >> 8);
              bVar17 = (char)pcVar13 + 0x2aU & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              pcVar13 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
              *pcVar13 = *pcVar13 + bVar17 + 0x2a;
              pcVar13 = (char *)CONCAT31(uVar15,bVar17 + 0x54 & *param_2);
code_r0x00403072:
              cVar24 = (char)pcVar13;
              *pcVar13 = *pcVar13 + cVar24;
              uVar15 = (undefined3)((uint)pcVar13 >> 8);
              pcVar13 = (char *)CONCAT31(uVar15,cVar24 + '*');
              *pcVar13 = *pcVar13 + cVar24 + '*';
              bVar17 = cVar24 + 0x54U & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,in_DS);
              uVar20 = CONCAT22((short)((uint)uVar20 >> 0x10),
                                CONCAT11((char)((uint)uVar20 >> 8) +
                                         *(char *)CONCAT31(uVar15,bVar17 + 0x2a),(char)uVar20));
              unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar18;
              pcVar13 = pcStack_54;
code_r0x0040309a:
              cVar24 = (char)pcVar13;
              *pcVar13 = *pcVar13 + cVar24;
              pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,in_ES);
              *pcVar13 = *pcVar13 + cVar24;
              pbVar8 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar24 + 0x2aU & *param_2);
            }
            cVar24 = (char)pbVar8;
            *pbVar8 = *pbVar8 + cVar24;
            uVar15 = (undefined3)((uint)pbVar8 >> 8);
            cVar5 = cVar24 + '*';
            pcVar13 = (char *)CONCAT31(uVar15,cVar5);
            unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar18;
            *pcVar13 = *pcVar13 + cVar5;
            cVar22 = (char)pcStack_54 - *pbVar10;
            pcVar25 = (char *)CONCAT22((short)((uint)pcStack_54 >> 0x10),
                                       CONCAT11((char)((uint)pcStack_54 >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)pcStack_54 >> 8),
                                                                   cVar22) + 0x34),cVar22));
            *pcVar13 = *pcVar13 + cVar5;
            bVar17 = cVar24 + 0x54U & *param_2;
            *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
            pbVar8 = (byte *)CONCAT31(uVar15,bVar17 + 0x2a);
            bVar17 = (byte)((uint)uVar20 >> 8);
            pcVar13 = (char *)CONCAT22((short)((uint)uVar20 >> 0x10),
                                       CONCAT11(bVar17 + *pbVar8,(char)uVar20));
            pbVar8 = pbVar8 + (uint)CARRY1(bVar17,*pbVar8) + *(int *)pbVar8;
            *param_2 = *param_2 + (char)uVar20;
            uVar15 = (undefined3)((uint)pbVar8 >> 8);
            cVar24 = (byte)pbVar8 - *pbVar8;
            piVar7 = (int *)CONCAT31(uVar15,cVar24);
            pbVar10 = pbVar10 + (uint)((byte)pbVar8 < *pbVar8) + *piVar7;
            cVar24 = cVar24 + (char)*piVar7;
            pbVar8 = (byte *)CONCAT31(uVar15,cVar24);
            *pbVar8 = *pbVar8 + cVar24;
code_r0x004030df:
            *pcVar13 = *pcVar13 + cVar18;
            bVar17 = *pbVar8;
            bVar3 = (byte)pbVar8;
            *pbVar8 = *pbVar8 + bVar3;
            *(byte **)(pcVar25 + -0x41) =
                 pbVar10 + (uint)CARRY1(bVar17,bVar3) + *(int *)(pcVar25 + -0x41);
            *pbVar8 = *pbVar8 + bVar3;
            uVar15 = (undefined3)((uint)pbVar8 >> 8);
            bVar3 = bVar3 | *pbVar10;
            *(char *)CONCAT31(uVar15,bVar3) = *(char *)CONCAT31(uVar15,bVar3) + bVar3;
            pcVar13 = (char *)CONCAT31(uVar15,bVar3 + 0x7b);
            *pcVar13 = *pcVar13 + bVar3 + 0x7b;
            pbVar10[CONCAT31(uVar15,bVar3 - 8) + -1] =
                 pbVar10[CONCAT31(uVar15,bVar3 - 8) + -1] + (bVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          unaff_ESI = unaff_ESI + 0xc;
          out(*(undefined4 *)pbVar10,uVar23);
        }
        bVar17 = cVar5 - (bVar17 < *unaff_ESI);
        pbVar8 = unaff_ESI + (int)unaff_EDI * 2;
        bVar26 = CARRY1(*pbVar8,bVar17);
        *pbVar8 = *pbVar8 + bVar17;
code_r0x00402ef9:
        puVar12 = (uint *)CONCAT31(uVar15,bVar17 - bVar26);
        pcVar13 = (char *)((int)unaff_EDI + unaff_EBP * 2);
        *pcVar13 = *pcVar13 + (bVar17 - bVar26);
      }
    }
    do {
      *cPresenter = *cPresenter + (byte)pbVar8;
      pbVar1 = pbVar8 + 0xa0a0000;
      bVar17 = *pbVar1;
      bVar4 = (byte)cPresenter;
      *pbVar1 = *pbVar1 - bVar4;
      bVar3 = (byte)pbVar10 + *pbVar10;
      bVar6 = bVar3 + (bVar17 < bVar4);
      piVar7 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6);
      if (!CARRY1((byte)pbVar10,*pbVar10) && !CARRY1(bVar3,bVar17 < bVar4)) goto code_r0x00402e42;
      uVar16 = (undefined2)((uint)pbVar10 >> 0x10);
      bVar17 = (byte)((uint)pbVar10 >> 8) | pbVar8[0x2170411];
      pbVar10 = (byte *)CONCAT22(uVar16,CONCAT11(bVar17,bVar6));
      pbVar1 = unaff_ESI + 4;
      out(*(undefined4 *)unaff_ESI,(short)pbVar8);
      *pbVar10 = bVar6;
      *pbVar8 = *pbVar8 + bVar4;
      bRam06180411 = bVar6;
      *pbVar10 = *pbVar10 - cVar24;
      *pbVar10 = *pbVar10 + bVar6;
      uVar23 = (undefined2)((uint)cPresenter >> 0x10);
      bVar3 = (byte)((uint)cPresenter >> 8) | bRam052b0603;
      cPresenter = (char *)CONCAT22(uVar23,CONCAT11(bVar3,bVar4));
      unaff_ESI = pbVar1;
    } while ((char)bVar3 < '\x01');
    *pbVar10 = *pbVar10 + bVar6;
    piVar7 = (int *)CONCAT22(uVar16,CONCAT11(bVar17 | pbVar8[0x7190411],bVar6));
    bRam89280411 = bVar6;
    *(byte *)piVar7 = (char)*piVar7 + bVar6;
    cPresenter = (char *)CONCAT22(uVar23,CONCAT11(bVar3 | *pbVar8,bVar4));
    unaff_ESI = pbVar1 + *piVar7;
    pbVar10 = (byte *)((int)piVar7 + *piVar7);
    bVar3 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar3;
    *unaff_ESI = *unaff_ESI + bVar4;
    bVar17 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar3;
    *(uint *)pbVar10 = *(int *)pbVar10 + unaff_EBP + (uint)CARRY1(bVar17,bVar3);
    piVar7 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),*pbVar10);
    *pbVar8 = *pbVar8 + bVar4;
    param_2 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),(byte)pbVar8 | *pbVar8);
    param_2[-0x43] = param_2[-0x43] + (char)((uint)pbVar8 >> 8);
code_r0x00402e42:
    if (SCARRY4((int)piVar7,*piVar7)) goto code_r0x00402e6e;
    iVar9 = *(int *)((int)piVar7 + *piVar7);
    *param_2 = *param_2 + (char)cPresenter;
    piVar7 = (int *)(iVar9 + -0x8c6f);
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) | param_2[-0x3f],(char)param_2));
    pbVar8 = (byte *)((int)piVar7 + *piVar7);
    puVar12 = puStack_10;
    in_DS = in_ES;
    if (!SCARRY4((int)piVar7,*piVar7)) {
code_r0x00402e5a:
      *pbVar8 = *pbVar8 + (char)pbVar8;
      cPresenter = (char *)CONCAT22((short)((uint)cPresenter >> 0x10),
                                    CONCAT11((byte)((uint)cPresenter >> 8) | *param_2,
                                             (char)cPresenter));
      unaff_EDI = puVar12;
      goto code_r0x00402e5f;
    }
  } while( true );
}


