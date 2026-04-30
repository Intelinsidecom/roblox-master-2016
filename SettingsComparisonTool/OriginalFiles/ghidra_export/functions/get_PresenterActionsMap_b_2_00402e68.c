/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402e68
 * Raw Name    : <get_PresenterActionsMap>b__2
 * Demangled   : <get_PresenterActionsMap>b__2
 * Prototype   : void <get_PresenterActionsMap>b__2(char * fPresenter, byte * param_2)
 * Local Vars  : pcStack_50, uStack_14, puStack_c, pbVar1, uVar2, bVar3, bVar4, cVar5, bVar6, piVar7, pbVar8, iVar9, pbVar10, fPresenter, puVar11, puVar12, pcVar13, piVar14, param_2, pbVar15, uVar16, uVar17, bVar18, cVar19, bVar20, uVar21, bVar22, cVar23, uVar24, cVar25, unaff_EBX, pcVar26, unaff_EBP, unaff_ESI, unaff_EDI, in_ES, in_SS, in_DS, uVar27, bVar28, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall <get_PresenterActionsMap>b__2(char *fPresenter,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar17;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar10;
  undefined3 uVar16;
  uint *puVar12;
  char *pcVar13;
  int *piVar14;
  byte *pbVar15;
  byte bVar18;
  char cVar19;
  byte bVar20;
  byte bVar22;
  undefined2 uVar24;
  char cVar23;
  undefined4 uVar21;
  char cVar25;
  byte *unaff_EBX;
  char *pcVar26;
  uint unaff_EBP;
  byte *unaff_ESI;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 uVar27;
  bool bVar28;
  undefined2 unaff_retaddr;
  char *pcStack_50;
  uint uStack_14;
  uint *puStack_c;
  int iVar9;
  uint *puVar11;
  
code_r0x00402e68:
                    /* .NET CLR Managed Code */
  param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
  pbVar15 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,(short)param_2);
  uVar27 = in_DS;
  in_DS = unaff_retaddr;
code_r0x00402e6e:
  uVar16 = (undefined3)((uint)param_2 >> 8);
  cVar25 = (char)param_2 + (char)*unaff_EDI;
  pbVar8 = pbVar15 + 4;
  out(*(undefined4 *)pbVar15,(short)CONCAT31(uVar16,cVar25));
  param_2 = (byte *)CONCAT31(uVar16,cVar25 + (char)*unaff_EDI);
  pbVar15 = pbVar15 + 8;
  out(*(undefined4 *)pbVar8,(short)param_2);
  pbVar8 = (byte *)0x0;
  puStack_c = (uint *)CONCAT22(puStack_c._2_2_,in_ES);
  do {
    bVar3 = (char)pbVar8 - *pbVar8;
    iVar9 = CONCAT31((int3)((uint)pbVar8 >> 8),bVar3);
    *unaff_EBX = *unaff_EBX + (char)param_2;
    pbVar10 = (byte *)(iVar9 * 2);
    *pbVar10 = *pbVar10 ^ bVar3;
    pbVar10 = (byte *)(int)(short)iVar9;
    *pbVar10 = *pbVar10 + bVar3;
    *(byte *)unaff_EDI = (char)*unaff_EDI + (byte)fPresenter;
    bVar18 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar3;
    *(byte **)(unaff_EBX + -0x73) =
         pbVar15 + (uint)CARRY1(bVar18,bVar3) + *(int *)(unaff_EBX + -0x73);
    *pbVar10 = *pbVar10 + bVar3;
    bVar18 = (byte)fPresenter | *param_2;
    fPresenter = (char *)CONCAT31((int3)((uint)fPresenter >> 8),bVar18);
    uStack_14 = CONCAT22(uStack_14._2_2_,in_SS);
    cVar25 = (char)unaff_EBX;
    bVar6 = (byte)((uint)unaff_EBX >> 8);
    uVar17 = in_DS;
    if ((char)bVar18 < '\x01') goto code_r0x00402eb4;
    *pbVar10 = *pbVar10 + bVar3;
    pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar8 >> 8),bVar3 + 0x2d);
    *(byte **)(pbVar15 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < bVar3) + *(int *)(pbVar15 + (int)unaff_EDI * 8);
    pbVar8 = param_2;
    while( true ) {
      bVar18 = *pbVar15;
      bVar3 = (byte)pbVar10;
      *pbVar15 = *pbVar15 + bVar3;
      param_2 = pbVar8;
      if (!CARRY1(bVar18,bVar3)) break;
      *pbVar10 = *pbVar10 + bVar3;
      bVar3 = bVar3 | pbVar10[0x400001a];
      pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar3);
      uVar17 = in_DS;
      if ((char)bVar3 < '\x01') {
code_r0x00402ecc:
        *pbVar8 = *pbVar8 + (byte)pbVar8;
        uVar16 = (undefined3)((uint)pbVar8 >> 8);
        bVar18 = (byte)pbVar8 | pbVar8[0x400001b];
        puVar12 = (uint *)CONCAT31(uVar16,bVar18);
        if ((char)bVar18 < '\x01') {
          bVar3 = *param_2;
          *param_2 = *param_2 + (byte)fPresenter;
          *(char *)((int)puVar12 * 2) = *(char *)((int)puVar12 * 2) - CARRY1(bVar3,(byte)fPresenter)
          ;
          bVar28 = 0x81 < bVar18;
          bVar18 = bVar18 + 0x7e;
          in_DS = uVar17;
          goto code_r0x00402ef9;
        }
      }
      else {
        *pbVar8 = *pbVar8 + bVar3;
        pbVar10 = pbVar8;
code_r0x00402eb4:
        uVar16 = (undefined3)((uint)pbVar10 >> 8);
        bVar3 = (char)pbVar10 + 0x6f;
        puVar12 = (uint *)CONCAT31(uVar16,bVar3);
        *puVar12 = uStack_14;
        bVar18 = *param_2;
        *param_2 = *param_2 + (char)fPresenter;
        uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
        in_SS = in_ES;
        if (*param_2 != 0 && SCARRY1(bVar18,(char)fPresenter) == (char)*param_2 < '\0') {
          *(byte *)puVar12 = (char)*puVar12 + bVar3;
          bVar4 = (char)pbVar10 + 0x9c;
          pbVar8 = (byte *)CONCAT31(uVar16,bVar4);
          *(byte **)(pbVar15 + (int)unaff_EDI * 8) =
               param_2 + (uint)(0xd2 < bVar3) + *(int *)(pbVar15 + (int)unaff_EDI * 8);
          uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
          bVar18 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar4;
          puVar12 = unaff_EDI;
          in_DS = uVar27;
          if (CARRY1(bVar18,bVar4)) goto code_r0x00402ecc;
          goto code_r0x00402e5a;
        }
        out(*(undefined4 *)pbVar15,(short)param_2);
        pbVar15 = pbVar15 + 4;
      }
      cVar5 = (char)puVar12;
      *(char *)puVar12 = (char)*puVar12 + cVar5;
      uVar16 = (undefined3)((uint)puVar12 >> 8);
      bVar3 = cVar5 + 0x6f;
      puVar12 = (uint *)CONCAT31(uVar16,bVar3);
      *puVar12 = uStack_14;
      bVar18 = *param_2;
      *param_2 = *param_2 + (byte)fPresenter;
      uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
      pbVar15[0x1c] = (pbVar15[0x1c] - bVar6) - CARRY1(bVar18,(byte)fPresenter);
      *(byte *)puVar12 = (char)*puVar12 + bVar3;
      bVar4 = cVar5 + 0x9c;
      pcVar13 = (char *)CONCAT31(uVar16,bVar4);
      *(byte **)(pbVar15 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar3) + *(int *)(pbVar15 + (int)unaff_EDI * 8);
      bVar18 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar4;
      in_DS = in_ES;
      if (!CARRY1(bVar18,bVar4)) {
        *pcVar13 = *pcVar13 + bVar4;
        goto code_r0x00402e6e;
      }
      *pcVar13 = *pcVar13 + bVar4;
      bVar4 = bVar4 | pcVar13[0x400001c];
      pbVar10 = (byte *)CONCAT31(uVar16,bVar4);
      if ((char)bVar4 < '\x01') goto code_r0x00402f16;
      *pbVar10 = *pbVar10 + bVar4;
      puVar12 = (uint *)CONCAT31(uVar16,bVar4 + 0x6f);
      while( true ) {
        *puVar12 = uStack_14;
        bVar18 = *param_2;
        *param_2 = *param_2 + (byte)fPresenter;
        uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
        *(uint *)(pbVar15 + 0x1d) =
             (*(int *)(pbVar15 + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar18,(byte)fPresenter);
        bVar18 = (byte)puVar12;
        *(byte *)puVar12 = (char)*puVar12 + bVar18;
        bVar3 = bVar18 + 0x2d;
        pbVar10 = (byte *)CONCAT31((int3)((uint)puVar12 >> 8),bVar3);
        *(byte **)(pbVar15 + (int)unaff_EDI * 8) =
             param_2 + (uint)(0xd2 < bVar18) + *(int *)(pbVar15 + (int)unaff_EDI * 8);
        bVar18 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar3;
        pbVar8 = param_2;
        if (!CARRY1(bVar18,bVar3)) break;
        *pbVar10 = *pbVar10 + bVar3;
code_r0x00402f16:
        bVar18 = (byte)pbVar10 | pbVar10[0x400001d];
        puVar12 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar18);
        if ((char)bVar18 < '\x01') goto code_r0x00402f3b;
        while( true ) {
          *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
          uVar16 = (undefined3)((uint)puVar12 >> 8);
          cVar5 = (char)puVar12 + 'o';
          puVar11 = (uint *)CONCAT31(uVar16,cVar5);
          *puVar11 = uStack_14;
          cVar19 = (char)fPresenter;
          *param_2 = *param_2 + cVar19;
          uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
          bVar18 = (byte)((uint)param_2 >> 8);
          param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                     CONCAT11(bVar18 - *pbVar15,(char)param_2));
          if (bVar18 < *pbVar15) break;
          bVar28 = CARRY4((uint)puVar11,*puVar11);
          puVar12 = (uint *)((int)puVar11 + *puVar11);
          if (!SCARRY4((int)puVar11,*puVar11)) {
            bVar28 = CARRY4(unaff_EBP,*puVar12);
            unaff_EBP = unaff_EBP + *puVar12;
          }
          *puVar12 = (*puVar12 - (int)puVar12) - (uint)bVar28;
          *param_2 = *param_2 + cVar19;
          fPresenter = (char *)CONCAT22((short)((uint)fPresenter >> 0x10),
                                        CONCAT11((char)((uint)fPresenter >> 8) + *param_2,
                                                 cVar19 - *param_2));
          *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x00402f3b:
          cVar19 = (char)param_2;
          *unaff_EBX = *unaff_EBX + cVar19;
          bVar18 = (byte)puVar12;
          *(byte *)((int)puVar12 * 2) = *(byte *)((int)puVar12 * 2) ^ bVar18;
          *(byte *)puVar12 = (byte)*puVar12 + bVar18;
          *(byte *)puVar12 = (byte)*puVar12 + cVar19;
          uVar2 = *puVar12;
          *(byte *)puVar12 = (byte)*puVar12 + bVar18;
          *(byte **)param_2 =
               (byte *)((int)puVar12 + (uint)CARRY1((byte)uVar2,bVar18) + *(int *)param_2);
          pcVar13 = (char *)((uint)puVar12 | *unaff_EDI);
          unaff_EBP = unaff_EBP + 1;
          uVar16 = (undefined3)((uint)pcVar13 >> 8);
          cVar5 = (char)pcVar13 + *pcVar13;
          pcVar13 = (char *)CONCAT31(uVar16,cVar5);
          *pcVar13 = *pcVar13 + cVar5;
          cVar5 = cVar5 + *pcVar13;
          piVar7 = (int *)CONCAT31(uVar16,cVar5);
          *(char *)piVar7 = (char)*piVar7 + cVar5;
          iVar9 = LocalDescriptorTableRegister();
          *piVar7 = iVar9;
          bVar18 = *unaff_EBX;
          bVar22 = (byte)((uint)fPresenter >> 8);
          *unaff_EBX = *unaff_EBX + bVar22;
          iVar9 = *piVar7;
          uVar17 = (undefined2)((uint)fPresenter >> 0x10);
          bVar20 = (byte)fPresenter;
          *pbVar15 = *pbVar15 + cVar5;
          pbVar8 = pbVar15 + 4;
          out(*(undefined4 *)pbVar15,(short)param_2);
          *pbVar8 = *pbVar8 + cVar5;
          bVar3 = *unaff_EBX;
          *param_2 = *param_2 - bVar6;
          *pbVar8 = *pbVar8 + cVar5;
          pbVar10 = pbVar15 + 8;
          out(*(undefined4 *)pbVar8,(short)param_2);
          *pbVar10 = *pbVar10 + cVar5;
          bVar4 = *unaff_EBX;
          *(uint *)(param_2 + -0x23) = *(uint *)(param_2 + -0x23) & (uint)pbVar10;
          piVar14 = (int *)((int)piVar7 + *piVar7);
          if (!SCARRY4((int)piVar7,*piVar7)) {
            *(undefined2 *)piVar14 = in_SS;
          }
          *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
          uVar24 = CONCAT11((char)((uint)param_2 >> 8) + param_2[-0x15],cVar19);
          param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar24);
          puVar12 = (uint *)((int)piVar14 + *piVar14);
          if (!SCARRY4((int)piVar14,*piVar14)) {
            *(undefined2 *)puVar12 = in_SS;
          }
          cVar5 = (char)puVar12;
          *(byte *)puVar12 = (byte)*puVar12 + cVar5;
          cVar23 = ((bVar22 - (char)iVar9) - CARRY1(bVar18,bVar22) | bVar3 | bVar4) + (byte)*puVar12
          ;
          fPresenter = (char *)CONCAT22(uVar17,CONCAT11(cVar23,bVar20));
          bVar18 = *param_2;
          *param_2 = *param_2 + bVar20;
          if (CARRY1(bVar18,bVar20)) {
            *(byte *)puVar12 = (byte)*puVar12 + cVar5;
            bVar18 = param_2[6];
            uVar24 = (undefined2)((uint)unaff_EBX >> 0x10);
            *param_2 = *param_2 + bVar20;
            bVar3 = (cVar23 - *pbVar10) + cRam14730307;
            *(byte *)puVar12 = (byte)*puVar12 + cVar5;
            bVar18 = bVar6 | bVar18 | param_2[0x2a];
            uVar2 = *puVar12;
            pbVar8 = (byte *)((int)puVar12 + (uint)CARRY1(bVar3,(byte)*puVar12) + *puVar12);
            *param_2 = *param_2 + bVar20;
            cVar5 = cVar25 - *pbVar10;
            cVar25 = bVar18 + *(char *)(CONCAT31((int3)(CONCAT22(uVar24,CONCAT11(bVar18,cVar25)) >>
                                                       8),cVar5) + 0x1e);
            *pbVar8 = *pbVar8 + (char)pbVar8;
            uVar16 = (undefined3)((uint)pbVar8 >> 8);
            bVar18 = (char)pbVar8 + 0x2aU & *param_2;
            *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
            pcVar13 = (char *)CONCAT31(uVar16,bVar18 + 0x2a);
            cVar25 = cVar25 + *(char *)(CONCAT22(uVar24,CONCAT11(cVar25,cVar5)) + 0x1f);
            *pcVar13 = *pcVar13 + bVar18 + 0x2a;
            bVar18 = bVar18 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
            pcVar13 = (char *)CONCAT31(uVar16,bVar18 + 0x2a);
            cVar25 = cVar25 + *(char *)(CONCAT22(uVar24,CONCAT11(cVar25,cVar5)) + 0x20);
            *pcVar13 = *pcVar13 + bVar18 + 0x2a;
            bVar18 = bVar18 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
            pcVar13 = (char *)CONCAT31(uVar16,bVar18 + 0x2a);
            cVar25 = cVar25 + *(char *)(CONCAT22(uVar24,CONCAT11(cVar25,cVar5)) + 0x21);
            *pcVar13 = *pcVar13 + bVar18 + 0x2a;
            bVar18 = bVar18 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
            pcVar13 = (char *)CONCAT31(uVar16,bVar18 + 0x2a);
            cVar25 = cVar25 + *(char *)(CONCAT22(uVar24,CONCAT11(cVar25,cVar5)) + 0x22);
            *pcVar13 = *pcVar13 + bVar18 + 0x2a;
            bVar18 = bVar18 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
            pcVar13 = (char *)CONCAT31(uVar16,bVar18 + 0x2a);
            bVar3 = bVar3 + (byte)uVar2 + *pcVar13;
            uVar21 = CONCAT22(uVar17,CONCAT11(bVar3,bVar20));
            cVar25 = cVar25 + *(char *)(CONCAT22(uVar24,CONCAT11(cVar25,cVar5)) + 0x25);
            *pcVar13 = *pcVar13 + bVar18 + 0x2a;
            bVar18 = bVar18 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
            pcVar13 = (char *)CONCAT31(uVar16,bVar18 + 0x2a);
            pcVar26 = (char *)CONCAT22(uVar24,CONCAT11(cVar25 + *(char *)(CONCAT22(uVar24,CONCAT11(
                                                  cVar25,cVar5)) + 0x26),cVar5));
            *pcVar13 = *pcVar13 + bVar18 + 0x2a;
            bVar18 = bVar18 + 0x54 & *param_2;
            *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
            cVar25 = bVar18 + 0x2a;
            pcVar13 = (char *)CONCAT31(uVar16,cVar25);
            if ((POPCOUNT(cVar25) & 1U) == 0) {
              *pcVar13 = *pcVar13 + cVar25;
              pbVar8 = (byte *)(CONCAT31(uVar16,bVar18 + 0x4f) + -0x33282610);
              bVar18 = *pbVar8;
              bVar6 = (byte)pbVar8;
              *pbVar8 = *pbVar8 + bVar6;
              uVar16 = (undefined3)((uint)pbVar8 >> 8);
              if (!CARRY1(bVar18,bVar6)) {
                if (!SCARRY1(bVar6,'\0')) {
                  *pbVar8 = *pbVar8 + bVar6;
                  uVar21 = CONCAT22(uVar17,CONCAT11(bVar3 | *param_2,bVar20));
                  bVar6 = bVar6 & *param_2;
                  *(char *)CONCAT31(uVar16,bVar6) = *(char *)CONCAT31(uVar16,bVar6) + bVar6;
                  pcVar13 = (char *)CONCAT31(uVar16,bVar6 + 0x2a);
                  goto code_r0x00403058;
                }
                pcVar13 = (char *)CONCAT31(uVar16,bVar6 + *pcVar26);
                if (SCARRY1(bVar6,*pcVar26) != (char)(bVar6 + *pcVar26) < '\0')
                goto code_r0x00403072;
                goto code_r0x0040309a;
              }
              bVar18 = bVar6 + *pcVar26;
              pbVar8 = (byte *)CONCAT31(uVar16,bVar18);
              if (SCARRY1(bVar6,*pcVar26) == (char)bVar18 < '\0') {
                pcVar13 = (char *)CONCAT22(uVar17,CONCAT11(bVar3 | *param_2,bVar20));
                *pcVar26 = *pcVar26 + cVar19;
                *param_2 = *param_2 ^ bVar18;
                *(char *)((int)pbVar8 * 2) = *(char *)((int)pbVar8 * 2) + bVar18;
                goto code_r0x004030df;
              }
            }
            else {
code_r0x00403058:
              *pcVar13 = *pcVar13 + (char)pcVar13;
              uVar16 = (undefined3)((uint)pcVar13 >> 8);
              bVar18 = (char)pcVar13 + 0x2aU & *param_2;
              *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
              pcVar13 = (char *)CONCAT31(uVar16,bVar18 + 0x2a);
              *pcVar13 = *pcVar13 + bVar18 + 0x2a;
              pcVar13 = (char *)CONCAT31(uVar16,bVar18 + 0x54 & *param_2);
code_r0x00403072:
              cVar25 = (char)pcVar13;
              *pcVar13 = *pcVar13 + cVar25;
              uVar16 = (undefined3)((uint)pcVar13 >> 8);
              pcVar13 = (char *)CONCAT31(uVar16,cVar25 + '*');
              *pcVar13 = *pcVar13 + cVar25 + '*';
              bVar18 = cVar25 + 0x54U & *param_2;
              *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
              pcStack_50 = (char *)CONCAT22(pcStack_50._2_2_,uVar27);
              uVar21 = CONCAT22((short)((uint)uVar21 >> 0x10),
                                CONCAT11((char)((uint)uVar21 >> 8) +
                                         *(char *)CONCAT31(uVar16,bVar18 + 0x2a),(char)uVar21));
              pbVar15[0x20a0008] = pbVar15[0x20a0008] - cVar19;
              pcVar13 = pcStack_50;
code_r0x0040309a:
              cVar25 = (char)pcVar13;
              *pcVar13 = *pcVar13 + cVar25;
              pcStack_50 = (char *)CONCAT22(pcStack_50._2_2_,in_ES);
              *pcVar13 = *pcVar13 + cVar25;
              pbVar8 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar25 + 0x2aU & *param_2);
            }
            cVar25 = (char)pbVar8;
            *pbVar8 = *pbVar8 + cVar25;
            uVar16 = (undefined3)((uint)pbVar8 >> 8);
            cVar5 = cVar25 + '*';
            pcVar13 = (char *)CONCAT31(uVar16,cVar5);
            pbVar15[0x20a0008] = pbVar15[0x20a0008] - cVar19;
            *pcVar13 = *pcVar13 + cVar5;
            cVar23 = (char)pcStack_50 - *pbVar10;
            pcVar26 = (char *)CONCAT22((short)((uint)pcStack_50 >> 0x10),
                                       CONCAT11((char)((uint)pcStack_50 >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)pcStack_50 >> 8),
                                                                   cVar23) + 0x34),cVar23));
            *pcVar13 = *pcVar13 + cVar5;
            bVar18 = cVar25 + 0x54U & *param_2;
            *(char *)CONCAT31(uVar16,bVar18) = *(char *)CONCAT31(uVar16,bVar18) + bVar18;
            pbVar15 = (byte *)CONCAT31(uVar16,bVar18 + 0x2a);
            bVar18 = (byte)((uint)uVar21 >> 8);
            pcVar13 = (char *)CONCAT22((short)((uint)uVar21 >> 0x10),
                                       CONCAT11(bVar18 + *pbVar15,(char)uVar21));
            pbVar15 = pbVar15 + (uint)CARRY1(bVar18,*pbVar15) + *(int *)pbVar15;
            *param_2 = *param_2 + (char)uVar21;
            uVar16 = (undefined3)((uint)pbVar15 >> 8);
            cVar25 = (byte)pbVar15 - *pbVar15;
            piVar7 = (int *)CONCAT31(uVar16,cVar25);
            pbVar10 = pbVar10 + (uint)((byte)pbVar15 < *pbVar15) + *piVar7;
            cVar25 = cVar25 + (char)*piVar7;
            pbVar8 = (byte *)CONCAT31(uVar16,cVar25);
            *pbVar8 = *pbVar8 + cVar25;
code_r0x004030df:
            *pcVar13 = *pcVar13 + cVar19;
            bVar18 = *pbVar8;
            bVar3 = (byte)pbVar8;
            *pbVar8 = *pbVar8 + bVar3;
            *(byte **)(pcVar26 + -0x41) =
                 pbVar10 + (uint)CARRY1(bVar18,bVar3) + *(int *)(pcVar26 + -0x41);
            *pbVar8 = *pbVar8 + bVar3;
            uVar16 = (undefined3)((uint)pbVar8 >> 8);
            bVar3 = bVar3 | *pbVar10;
            *(char *)CONCAT31(uVar16,bVar3) = *(char *)CONCAT31(uVar16,bVar3) + bVar3;
            pcVar13 = (char *)CONCAT31(uVar16,bVar3 + 0x7b);
            *pcVar13 = *pcVar13 + bVar3 + 0x7b;
            pbVar10[CONCAT31(uVar16,bVar3 - 8) + -1] =
                 pbVar10[CONCAT31(uVar16,bVar3 - 8) + -1] + (bVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          pbVar15 = pbVar15 + 0xc;
          out(*(undefined4 *)pbVar10,uVar24);
        }
        bVar18 = cVar5 - (bVar18 < *pbVar15);
        pbVar8 = pbVar15 + (int)unaff_EDI * 2;
        bVar28 = CARRY1(*pbVar8,bVar18);
        *pbVar8 = *pbVar8 + bVar18;
code_r0x00402ef9:
        puVar12 = (uint *)CONCAT31(uVar16,bVar18 - bVar28);
        pcVar13 = (char *)((int)unaff_EDI + unaff_EBP * 2);
        *pcVar13 = *pcVar13 + (bVar18 - bVar28);
      }
    }
    do {
      *fPresenter = *fPresenter + (byte)pbVar8;
      pbVar1 = pbVar8 + 0xa0a0000;
      bVar18 = *pbVar1;
      bVar4 = (byte)fPresenter;
      *pbVar1 = *pbVar1 - bVar4;
      bVar3 = (byte)pbVar10 + *pbVar10;
      bVar6 = bVar3 + (bVar18 < bVar4);
      piVar7 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6);
      if (!CARRY1((byte)pbVar10,*pbVar10) && !CARRY1(bVar3,bVar18 < bVar4)) goto code_r0x00402e42;
      uVar17 = (undefined2)((uint)pbVar10 >> 0x10);
      bVar18 = (byte)((uint)pbVar10 >> 8) | pbVar8[0x2170411];
      pbVar10 = (byte *)CONCAT22(uVar17,CONCAT11(bVar18,bVar6));
      pbVar1 = pbVar15 + 4;
      out(*(undefined4 *)pbVar15,(short)pbVar8);
      *pbVar10 = bVar6;
      *pbVar8 = *pbVar8 + bVar4;
      bRam06180411 = bVar6;
      *pbVar10 = *pbVar10 - cVar25;
      *pbVar10 = *pbVar10 + bVar6;
      uVar24 = (undefined2)((uint)fPresenter >> 0x10);
      bVar3 = (byte)((uint)fPresenter >> 8) | bRam052b0603;
      fPresenter = (char *)CONCAT22(uVar24,CONCAT11(bVar3,bVar4));
      pbVar15 = pbVar1;
    } while ((char)bVar3 < '\x01');
    *pbVar10 = *pbVar10 + bVar6;
    piVar7 = (int *)CONCAT22(uVar17,CONCAT11(bVar18 | pbVar8[0x7190411],bVar6));
    bRam89280411 = bVar6;
    *(byte *)piVar7 = (char)*piVar7 + bVar6;
    fPresenter = (char *)CONCAT22(uVar24,CONCAT11(bVar3 | *pbVar8,bVar4));
    pbVar15 = pbVar1 + *piVar7;
    pbVar10 = (byte *)((int)piVar7 + *piVar7);
    bVar3 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar3;
    *pbVar15 = *pbVar15 + bVar4;
    bVar18 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar3;
    *(uint *)pbVar10 = *(int *)pbVar10 + unaff_EBP + (uint)CARRY1(bVar18,bVar3);
    piVar7 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),*pbVar10);
    *pbVar8 = *pbVar8 + bVar4;
    param_2 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),(byte)pbVar8 | *pbVar8);
    param_2[-0x43] = param_2[-0x43] + (char)((uint)pbVar8 >> 8);
code_r0x00402e42:
    if (SCARRY4((int)piVar7,*piVar7)) goto code_r0x00402e6e;
    iVar9 = *(int *)((int)piVar7 + *piVar7);
    *param_2 = *param_2 + (char)fPresenter;
    piVar7 = (int *)(iVar9 + -0x8c6f);
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) | param_2[-0x3f],(char)param_2));
    pbVar8 = (byte *)((int)piVar7 + *piVar7);
    puVar12 = puStack_c;
    uVar27 = in_DS;
    if (!SCARRY4((int)piVar7,*piVar7)) {
code_r0x00402e5a:
      *pbVar8 = *pbVar8 + (char)pbVar8;
      fPresenter = (char *)CONCAT22((short)((uint)fPresenter >> 0x10),
                                    CONCAT11((byte)((uint)fPresenter >> 8) | *param_2,
                                             (char)fPresenter));
      unaff_ESI = pbVar15 + 4;
      out(*(undefined4 *)pbVar15,(short)param_2);
      unaff_EDI = puVar12;
      unaff_retaddr = in_ES;
      goto code_r0x00402e68;
    }
  } while( true );
}


