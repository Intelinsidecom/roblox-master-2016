/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402996
 * Raw Name    : GetApiKey
 * Demangled   : GetApiKey
 * Prototype   : char * GetApiKey(uint * param_1, uint * param_2, uint * param_3, uint * param_4)
 * Local Vars  : pcStack_54, puStack_1c, uVar1, uVar2, uVar3, uVar4, bVar5, bVar6, cVar7, cVar8, in_EAX, pbVar9, uVar10, uVar11, pbVar12, piVar13, puVar14, iVar15, pcVar16, pcVar17, piVar18, pbVar19, puVar20, puVar21, puVar22, uVar23, param_1, uVar24, extraout_ECX, param_2, extraout_ECX_00, param_3, param_4, uVar25, cVar26, bVar27, bVar28, cVar29, uVar30, bVar31, uVar32, unaff_EBX, pcVar33, cVar34, bVar35, uVar36, unaff_EBP, unaff_ESI, puVar37, puVar38, unaff_EDI, puVar39, in_ES, uVar40, uVar41, in_CS, in_SS, in_DS, uVar42, in_GS_OFFSET, in_CF, bVar43, in_AF, in_TF, in_IF, bVar44, bVar45, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar46, unaff_retaddr, in_stack_0000001c
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

char * __fastcall GetApiKey(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined3 uVar23;
  uint *in_EAX;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  int *piVar18;
  byte *pbVar19;
  uint *puVar20;
  uint *puVar21;
  ushort *puVar22;
  undefined1 uVar24;
  char cVar26;
  undefined2 uVar30;
  undefined4 extraout_ECX;
  uint *extraout_ECX_00;
  byte bVar27;
  byte bVar28;
  char cVar29;
  undefined4 uVar25;
  byte bVar31;
  undefined2 uVar32;
  char cVar34;
  uint *unaff_EBX;
  byte bVar35;
  undefined2 uVar36;
  char *pcVar33;
  uint *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar37;
  uint *puVar38;
  uint *unaff_EDI;
  uint *puVar39;
  ushort uVar40;
  ushort in_ES;
  ushort uVar41;
  ushort in_CS;
  ushort in_SS;
  ushort in_DS;
  ushort uVar42;
  int in_GS_OFFSET;
  bool in_CF;
  bool bVar43;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar44;
  bool bVar45;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar46;
  uint *unaff_retaddr;
  ushort in_stack_0000001c;
  char *pcStack_54;
  uint *puStack_1c;
  
  bVar44 = false;
  uVar40 = in_ES;
                    /* .NET CLR Managed Code */
  if (!in_CF) {
    do {
      bVar6 = (byte)in_EAX;
      bVar43 = CARRY1(bVar6,(byte)*in_EAX);
      bVar45 = SCARRY1(bVar6,(byte)*in_EAX);
      in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6 + (byte)*in_EAX);
code_r0x0040299a:
      in_ES = uVar40;
      if (bVar45) goto code_r0x004029c6;
      unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar43 + *in_EAX);
      pbVar9 = (byte *)((int)in_EAX + *in_EAX);
      bVar5 = (byte)pbVar9;
      *pbVar9 = *pbVar9 + bVar5;
      *(byte *)param_1 = (byte)*param_1 + (char)param_1;
      bVar6 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar5;
      *unaff_EDI = (uint)((int)unaff_EBX + (uint)CARRY1(bVar6,bVar5) + *unaff_EDI);
      *(uint *)((int)unaff_EBP + 0x100002b) = *(uint *)((int)unaff_EBP + 0x100002b) | (uint)param_1;
      uVar23 = (undefined3)((uint)pbVar9 >> 8);
      bVar5 = bVar5 | (byte)*unaff_ESI;
      in_EAX = (uint *)CONCAT31(uVar23,bVar5);
      unaff_retaddr = (uint *)((uint)unaff_retaddr & 0xffff0000);
      uVar10 = *in_EAX;
      uVar1 = *in_EAX;
      *in_EAX = (uint)(*in_EAX + (int)in_EAX);
      if (SCARRY4(uVar1,(int)in_EAX)) {
        *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)unaff_EBX;
        *(byte *)param_2 = (byte)*param_2 + (char)param_1;
        *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)unaff_EBX;
        goto code_r0x00402962;
      }
      in_SS = uVar40;
      if (CARRY4(uVar10,(uint)in_EAX)) goto code_r0x00402971;
      bVar43 = CARRY1(bVar5,(byte)*in_EAX);
      bVar45 = SCARRY1(bVar5,(byte)*in_EAX);
      in_EAX = (uint *)CONCAT31(uVar23,bVar5 + (byte)*in_EAX);
code_r0x004029be:
      in_ES = uVar40;
      if (!bVar45) {
        param_3 = (uint *)CONCAT22(param_3._2_2_,uVar40);
        *(byte *)((int)param_2 + -0x37) =
             (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar43;
        cVar7 = cRamc9721806;
        goto code_r0x004029c4;
      }
code_r0x00402962:
      bVar6 = (byte)param_1;
      bVar43 = CARRY1((byte)*param_2,bVar6);
      bVar45 = SCARRY1((byte)*param_2,bVar6);
      *(byte *)param_2 = (byte)*param_2 + bVar6;
      uVar40 = in_ES;
      if (!bVar43) goto code_r0x004029c6;
code_r0x00402966:
      cVar7 = (char)in_EAX;
      *(byte *)in_EAX = (byte)*in_EAX + cVar7;
      bVar6 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 7);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar6,(char)unaff_EBX))
      ;
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        bVar43 = SBORROW1(cVar7,'!');
        bVar6 = cVar7 - 0x21;
        in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6);
        goto code_r0x0040290b;
      }
code_r0x0040296d:
      *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
      in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '~');
code_r0x00402971:
      param_3 = (uint *)CONCAT22(param_3._2_2_,in_SS);
code_r0x00402972:
      *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
code_r0x00402974:
      bVar6 = 0xe9 < (byte)in_EAX;
      unaff_retaddr = (uint *)((uint)unaff_retaddr & 0xffff0000);
      in_CS = 0x2d0a;
      uVar46 = func_0x00006128();
      puVar37 = (uint *)uVar46;
      piVar18 = (int *)((int)((ulonglong)uVar46 >> 0x20) + -0x3d);
      *piVar18 = (int)((int)unaff_ESI + (uint)bVar6 + *piVar18);
      bVar43 = SCARRY4(*puVar37,(int)puVar37);
      *puVar37 = *puVar37 + (int)puVar37;
      uVar10 = *puVar37;
      param_1 = extraout_ECX_00;
      in_ES = uVar40;
code_r0x00402982:
      bVar6 = POPCOUNT(uVar10 & 0xff);
      if (!bVar43) goto code_r0x00402984;
      *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) |
                                          *(byte *)((ulonglong)uVar46 >> 0x20),(char)param_1));
      uVar40 = in_ES;
      while( true ) {
        param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
        pbVar9 = (byte *)uVar46;
        bVar6 = (byte)uVar46;
        bVar43 = CARRY1(bVar6,*pbVar9);
        in_EAX = (uint *)CONCAT31((int3)((ulonglong)uVar46 >> 8),bVar6 + *pbVar9);
        cVar7 = bVar6 + *pbVar9;
        if (!SCARRY1(bVar6,*pbVar9)) break;
code_r0x004029c4:
        cRamc9721806 = cVar7;
        bVar6 = (byte)in_EAX;
        bVar43 = CARRY1(bVar6,(byte)*in_EAX);
        bVar45 = SCARRY1(bVar6,(byte)*in_EAX);
        in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6 + (byte)*in_EAX);
        in_ES = uVar40;
code_r0x004029c6:
        uVar40 = in_stack_0000001c;
        if (bVar45) goto code_r0x00402966;
        param_3 = (uint *)CONCAT22(param_3._2_2_,in_ES);
        *(uint *)((int)param_2 + -0x23) =
             (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar43;
        uVar10 = *in_EAX;
        bVar5 = (byte)in_EAX;
        uVar1 = *in_EAX;
        uVar23 = (undefined3)((uint)in_EAX >> 8);
        bVar6 = bVar5 + (byte)*in_EAX;
        in_EAX = (uint *)CONCAT31(uVar23,bVar6);
        uVar40 = in_ES;
        if (SCARRY1(bVar5,(byte)uVar1)) goto code_r0x00402972;
        param_3 = (uint *)CONCAT22(param_3._2_2_,in_ES);
        cVar7 = (char)param_2;
        bVar5 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                CARRY1(bVar5,(byte)uVar10);
        uVar30 = CONCAT11(bVar5,cVar7);
        param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
        puVar37 = (uint *)CONCAT31(uVar23,bVar6 + (byte)*in_EAX);
        if (!SCARRY1(bVar6,(byte)*in_EAX)) {
          param_3 = (uint *)CONCAT22(param_3._2_2_,in_ES);
          unaff_ESI = (uint *)((int)unaff_ESI +
                              (-(uint)CARRY1(bVar6,(byte)*in_EAX) - *(int *)((int)param_2 + 5)));
          bVar43 = SCARRY4((int)puVar37,*puVar37);
          uVar10 = (int)puVar37 + *puVar37;
          uVar46 = CONCAT44(param_2,uVar10);
          if (bVar43) goto code_r0x00402982;
          bVar6 = (byte)uVar10 + 0x8e;
          uVar11 = CONCAT31((int3)(uVar10 >> 8),bVar6 - CARRY4((uint)puVar37,*puVar37));
          *unaff_EBX = (*unaff_EBX - uVar11) -
                       (uint)((byte)uVar10 < 0x72 || bVar6 < CARRY4((uint)puVar37,*puVar37));
          pbVar9 = (byte *)(uVar11 - 0x5e);
          bVar6 = *pbVar9;
          *pbVar9 = *pbVar9 + bVar5;
          param_3 = (uint *)CONCAT22(param_3._2_2_,in_ES);
          uVar10 = (uint)CARRY1(bVar6,bVar5);
          uVar1 = uVar11 - 0x32d72;
          in_EAX = (uint *)(uVar1 - uVar10);
          if (SBORROW4(uVar11,0x32d72) != SBORROW4(uVar1,uVar10)) {
            pbVar9 = (byte *)((int)in_EAX + 0x2a);
            bVar43 = CARRY1(*pbVar9,bVar5);
            *pbVar9 = *pbVar9 + bVar5;
            break;
          }
          param_3 = (uint *)CONCAT22(param_3._2_2_,in_ES);
          uVar36 = (undefined2)((uint)unaff_retaddr >> 0x10);
          unaff_retaddr = (uint *)CONCAT22(uVar36,in_DS);
          if (uVar11 < 0x32d72 || uVar1 < uVar10) {
            *(char *)unaff_EBP = (char)*unaff_EBP - (char)((uint)in_EAX >> 8);
            *(byte *)param_2 = (byte)*param_2 + (char)param_1;
            puVar37 = unaff_ESI + 1;
            out(*unaff_ESI,uVar30);
            *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
            goto code_r0x00402a3e;
          }
          bVar43 = CARRY4((uint)in_EAX,*in_EAX);
          bVar45 = SCARRY4((int)in_EAX,*in_EAX);
          in_EAX = (uint *)((int)in_EAX + *in_EAX);
          if (bVar45) goto code_r0x0040299a;
          unaff_retaddr = (uint *)CONCAT22(uVar36,in_ES);
          *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar43;
          *(byte *)((int)param_2 + (int)unaff_EBP) =
               *(byte *)((int)param_2 + (int)unaff_EBP) + (byte)in_EAX;
          *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
          *(byte *)unaff_EBX = (byte)*unaff_EBX ^ (byte)in_EAX;
          goto code_r0x00402a03;
        }
        *(byte *)param_2 = (byte)*param_2 + (char)param_1;
        uVar46 = CONCAT44(param_2,(int)puVar37 + -0x1c37211);
        pcVar16 = (char *)((int)puVar37 + -0x1c3720a);
        *pcVar16 = *pcVar16 + bVar5;
        bVar6 = POPCOUNT(*pcVar16);
code_r0x00402984:
        pcVar16 = (char *)((ulonglong)uVar46 >> 0x20);
        uVar40 = in_ES;
        if ((bVar6 & 1) != 0) {
code_r0x00402922:
          pcVar16 = (char *)((int)uVar46 * 2);
          *pcVar16 = *pcVar16 - (char)param_1;
          uVar10 = *unaff_EBX;
          cVar7 = (char)((uint)param_1 >> 8);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
          if (SCARRY1((byte)uVar10,cVar7) == (char)(byte)*unaff_EBX < '\0') {
            pbVar9 = (byte *)((int)unaff_EDI + (int)uVar46);
            *pbVar9 = *pbVar9 + (char)uVar46;
            bVar6 = *pbVar9;
            goto code_r0x004028c8;
          }
          do {
            param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
            cVar7 = (char)uVar46;
            *(char *)uVar46 = *(char *)uVar46 + cVar7;
            uVar23 = (undefined3)((ulonglong)uVar46 >> 8);
            bVar6 = cVar7 + 7;
            in_EAX = (uint *)CONCAT31(uVar23,bVar6);
            bVar5 = (byte)((ulonglong)uVar46 >> 0x28);
            if ((POPCOUNT(bVar6) & 1U) != 0) {
              *(char *)((int)unaff_EBP + 0x13b720b) = *(char *)((int)unaff_EBP + 0x13b720b) + bVar6;
              pbVar9 = (byte *)((int)in_EAX + 0x73);
              bVar43 = CARRY1(*pbVar9,bVar5);
              *pbVar9 = *pbVar9 + bVar5;
              goto code_r0x004028d5;
            }
            *(byte *)in_EAX = (byte)*in_EAX + bVar6;
            pcVar16 = (char *)CONCAT31(uVar23,cVar7 + '3');
            uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
            uVar24 = SUB41(unaff_EBX,0);
            bVar6 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar6)
            ;
            unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar24));
            *pcVar16 = *pcVar16 + cVar7 + '3';
            cVar34 = cVar7 + ':';
            in_EAX = (uint *)CONCAT31(uVar23,cVar34);
            if ((POPCOUNT(cVar34) & 1U) == 0) {
              *(byte *)in_EAX = (byte)*in_EAX + cVar34;
              in_EAX = (uint *)(CONCAT31(uVar23,cVar7 + 'b') & 0xffffff72 | 0x2d2b0000);
              pbVar9 = (byte *)((int)in_EAX + 0x72);
              bVar45 = SCARRY1(*pbVar9,bVar5);
              *pbVar9 = *pbVar9 + bVar5;
              bVar6 = POPCOUNT(*pbVar9);
code_r0x0040294c:
              if ((bVar6 & 1) == 0) {
                *(byte *)((int)in_EAX + 0x72) =
                     *(byte *)((int)in_EAX + 0x72) + (char)((uint)param_2 >> 8);
              }
              else if (bVar45) {
                unaff_EBP = (uint *)*unaff_EBP;
                cVar7 = cRamc9721806;
                goto code_r0x004029c4;
              }
              unaff_EBP = (uint *)0x7e700001;
              param_3 = (uint *)CONCAT22(param_3._2_2_,in_SS);
code_r0x00402957:
              *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
              cVar7 = (char)in_EAX + '(';
              in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),cVar7);
              *(byte *)in_EAX = (byte)*in_EAX + cVar7;
              param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                         CONCAT11((byte)((uint)param_1 >> 8) | (byte)*in_EAX,
                                                  (char)param_1));
              *(byte *)in_EAX = (byte)*in_EAX + cVar7;
              param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                         CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[0x18]
                                                  ,(char)param_2));
              unaff_ESI = param_3;
              unaff_EDI = param_4;
              goto code_r0x00402966;
            }
            bVar6 = bVar6 | *(byte *)((int)param_2 + 7);
            unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar24));
            bVar43 = (POPCOUNT(bVar6) & 1U) == 0;
code_r0x004028db:
            if (!bVar43) {
              iVar15 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
              goto get_Value;
            }
            *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
            in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'r');
            puVar37 = unaff_EBX;
            param_3 = unaff_EBP;
            while( true ) {
              uVar10 = *in_EAX;
              *in_EAX = (uint)(*in_EAX + (int)in_EAX);
              if (SCARRY4(uVar10,(int)in_EAX)) {
                unaff_EBX = puVar37;
                if (*in_EAX != 0 && SCARRY4(uVar10,(int)in_EAX) == (int)*in_EAX < 0)
                goto code_r0x00402957;
                goto code_r0x0040296d;
              }
              unaff_EBX = (uint *)((int)puVar37 + -1);
              cVar7 = (char)in_EAX;
              *(byte *)in_EAX = (byte)*in_EAX + cVar7;
              uVar30 = (undefined2)((uint)param_1 >> 0x10);
              uVar24 = SUB41(param_1,0);
              bVar6 = (byte)((uint)param_1 >> 8) | *(byte *)((int)param_1 + 0x16d7207);
              param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar24));
              pbVar9 = (byte *)((int)in_EAX + 0x7d);
              bVar31 = *pbVar9;
              bVar35 = (byte)((uint)param_2 >> 8);
              bVar5 = *pbVar9;
              *pbVar9 = *pbVar9 + bVar35;
              param_3 = (uint *)((uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar5,bVar35) * 0x800 |
                                 (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                                 (uint)((char)*pbVar9 < '\0') * 0x80 | (uint)(*pbVar9 == 0) * 0x40 |
                                 (uint)(in_AF & 1) * 0x10 |
                                 (uint)((POPCOUNT(*pbVar9) & 1U) == 0) * 4 |
                                 (uint)CARRY1(bVar31,bVar35) | (uint)(in_ID & 1) * 0x200000 |
                                 (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
                                (uint)(in_AC & 1) * 0x40000);
              *(byte *)in_EAX = (byte)*in_EAX + cVar7;
              pbVar9 = (byte *)(CONCAT31((int3)((uint)in_EAX >> 8),cVar7 + '+') ^ *unaff_EDI);
              if ((POPCOUNT((uint)pbVar9 & 0xff) & 1U) == 0) break;
              while( true ) {
                *(byte *)param_2 = (byte)*param_2 + (char)param_1;
                bVar6 = (byte)param_2;
                uVar30 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar6);
                pbVar12 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
                pcVar16 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    (byte)unaff_EBX[-0x19],(char)unaff_EBX));
                *pbVar9 = *pbVar9 + (char)pbVar9;
                pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + '\x03');
                puVar37 = unaff_ESI;
                do {
                  unaff_ESI = puVar37 + 1;
                  out(*puVar37,uVar30);
                  pcVar16 = pcVar16 + -1;
                  bVar5 = (byte)pbVar9;
                  *pbVar9 = *pbVar9 + bVar5;
                  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                             CONCAT11((byte)((uint)param_1 >> 8) | *pbVar12,
                                                      (char)param_1));
                  *pbVar9 = *pbVar9 + bVar5;
                  *pcVar16 = *pcVar16 + bVar6;
                  *(byte *)((int)pbVar9 * 2) = *(byte *)((int)pbVar9 * 2) ^ bVar5;
                  *pbVar9 = *pbVar9 + bVar5;
                  *pbVar9 = *pbVar9 | bVar5;
                  bVar43 = CARRY1((byte)*param_1,bVar6);
                  *(byte *)param_1 = (byte)*param_1 + bVar6;
                  cVar7 = bVar5 + 10 + bVar43;
                  pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar7);
                  puVar37 = unaff_ESI;
                } while (bVar5 < 0xf6 && !CARRY1(bVar5 + 10,bVar43));
                *pbVar9 = *pbVar9 + cVar7;
                unaff_retaddr = (uint *)((uint)unaff_retaddr & 0xffff0000);
                pcVar33 = (char *)((uint)pbVar9 | *unaff_EDI);
                unaff_EBX = (uint *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                             CONCAT11((char)((uint)pcVar16 >> 8) +
                                                      (char)unaff_EBP[-0x19],(char)pcVar16));
                *pcVar33 = *pcVar33 + (char)pcVar33;
                bVar6 = (char)pcVar33 + 7;
                uVar46 = CONCAT44(pbVar12,CONCAT31((int3)((uint)pcVar33 >> 8),bVar6));
code_r0x004028c8:
                param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
                pcVar16 = (char *)uVar46;
                uVar23 = (undefined3)((ulonglong)uVar46 >> 8);
                cVar7 = (char)uVar46;
                if ((POPCOUNT(bVar6) & 1U) == 0) break;
                *(byte *)param_2 = (byte)*param_2 + (char)param_1;
                cVar34 = (char)unaff_EBX - (byte)*unaff_ESI;
                iVar15 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                  CONCAT11((char)((uint)unaff_EBX >> 8) +
                                           *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar34) +
                                                    0x12),cVar34));
                *pcVar16 = *pcVar16 + cVar7;
                bVar6 = cVar7 + 0x2aU & (byte)*param_2;
                unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x12));
                *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
                in_EAX = (uint *)CONCAT31(uVar23,bVar6 + 0x2a);
                param_4 = (uint *)CONCAT22(param_4._2_2_,in_DS);
get_Value:
                cVar7 = *(char *)(iVar15 + 0x13);
                *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
                uVar23 = (undefined3)((uint)in_EAX >> 8);
                bVar6 = (char)in_EAX + 0x2aU & (byte)*param_2;
                pcVar16 = (char *)CONCAT31(uVar23,bVar6);
                unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x13));
                *pcVar16 = *pcVar16 + bVar6;
                pbVar9 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
                param_3 = (uint *)CONCAT22(param_3._2_2_,in_DS);
                bVar6 = (byte)((uint)param_1 >> 8);
                bVar5 = bVar6 + *pbVar9;
                pbVar9 = pbVar9 + (uint)CARRY1(bVar6,*pbVar9) + *(int *)pbVar9;
                *(byte *)param_2 = (byte)*param_2 + (char)param_1;
                unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar15 >> 0x10),
                                                             CONCAT11((char)((uint)iVar15 >> 8) +
                                                                      cVar7,(char)iVar15)) >> 8),
                                             (char)iVar15 - (byte)*unaff_ESI);
                param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                           CONCAT11(bVar5 + *pbVar9,(char)param_1));
                pbVar9 = pbVar9 + (uint)CARRY1(bVar5,*pbVar9) + *(int *)pbVar9;
              }
              *pcVar16 = *pcVar16 + cVar7;
              in_EAX = (uint *)CONCAT31(uVar23,cVar7 + '-');
              unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
              bVar43 = CARRY4(*in_EAX,(uint)in_EAX);
              uVar10 = *in_EAX;
              *in_EAX = (uint)(*in_EAX + (int)in_EAX);
              if (SCARRY4(uVar10,(int)in_EAX)) {
                bVar43 = CARRY4(*in_EAX,(uint)in_EAX);
                bVar45 = SCARRY4(*in_EAX,(int)in_EAX);
                *in_EAX = (uint)(*in_EAX + (int)in_EAX);
                bVar6 = POPCOUNT(*in_EAX & 0xff);
                if (!bVar45) goto code_r0x0040294c;
                goto code_r0x004029be;
              }
code_r0x004028d5:
              in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + bVar43);
              *(byte *)param_2 = (byte)*param_2 + (char)param_1;
              bVar43 = (POPCOUNT((byte)*param_2) & 1U) == 0;
              puVar37 = unaff_EBX;
              if (!bVar43) goto code_r0x004028db;
            }
            bVar5 = (byte)pbVar9;
            *pbVar9 = *pbVar9 + bVar5;
            cVar7 = bVar5 + 0x72;
            in_EAX = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar7);
            if (bVar5 < 0x8e && cVar7 != '\0') {
              if (SCARRY1(bVar5,'r')) goto code_r0x00402974;
            }
            else {
              *(byte *)((int)in_EAX + 0x6f) = *(byte *)((int)in_EAX + 0x6f) + bVar35;
            }
            unaff_EBX = (uint *)((int)puVar37 + -2);
            *(byte *)in_EAX = (byte)*in_EAX + cVar7;
            bVar43 = false;
            bVar6 = bVar6 | (byte)*param_1;
            param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar24));
code_r0x0040290b:
            uVar46 = CONCAT44(param_2,in_EAX);
            if (bVar6 != 0 && bVar43 == (char)bVar6 < '\0') goto code_r0x0040290e;
            *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
            unaff_EDI = (uint *)((int)unaff_EDI - unaff_EBP[-0x19]);
            uVar40 = (ushort)param_4;
          } while( true );
        }
        *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
        *pcVar16 = *pcVar16 + (char)param_1;
        uVar46 = CONCAT44(CONCAT22((short)((ulonglong)uVar46 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar46 >> 0x28) - pcVar16[0x1f],
                                            (char)((ulonglong)uVar46 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar46 >> 8),(char)uVar46 + '('));
      }
      param_2._1_1_ = (char)((uint)param_2 >> 8);
      param_2._2_2_ = (undefined2)((uint)param_2 >> 0x10);
      param_2._0_1_ = SUB41(param_2,0);
      param_2._1_1_ = (param_2._1_1_ - *(char *)((int)param_2 + 0x6b)) - bVar43;
      param_2._0_2_ = CONCAT11(param_2._1_1_,param_2._0_1_);
      param_2 = (uint *)CONCAT22(param_2._2_2_,param_2._0_2_);
    } while( true );
  }
code_r0x00402a03:
  bVar35 = (byte)((uint)param_1 >> 8);
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar35;
  *(byte *)in_EAX = (byte)*in_EAX + (byte)in_EAX;
  pbVar12 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX | (byte)*in_EAX);
  *(byte *)param_1 = (byte)*param_1 + (char)param_2;
  bVar5 = *pbVar12;
  uVar30 = (undefined2)((uint)param_1 >> 0x10);
  bVar31 = (byte)param_1;
  param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar35 + bVar5,bVar31));
  pbVar12 = pbVar12 + (uint)CARRY1(bVar35,*pbVar12) + *(int *)pbVar12;
  *(byte *)param_2 = (byte)*param_2 + bVar31;
  unaff_EBP = (uint *)((int)unaff_EBP + iRam0355720b);
  pbVar9 = pbVar12 + 0x73;
  bVar6 = *pbVar9;
  bVar27 = (byte)((uint)param_2 >> 8);
  *pbVar9 = *pbVar9 + bVar27;
  uVar23 = (undefined3)((uint)pbVar12 >> 8);
  bVar6 = (char)pbVar12 + CARRY1(bVar6,bVar27);
  pcVar16 = (char *)CONCAT31(uVar23,bVar6);
  *(byte *)param_2 = (byte)*param_2 + bVar31;
  if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
    in_SS = (ushort)unaff_retaddr;
  }
  puVar39 = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x17));
  *pcVar16 = *pcVar16 + bVar6;
  cVar7 = bVar6 + 2;
  in_EAX = (uint *)CONCAT31(uVar23,cVar7);
  if (bVar6 < 0xfe) {
    *in_EAX = (uint)(*in_EAX + (int)in_EAX);
    goto code_r0x00402a8f;
  }
  *(byte *)in_EAX = (byte)*in_EAX + cVar7;
  uVar10 = *param_2;
  puVar37 = (uint *)((int)unaff_ESI + unaff_EBX[0x19]);
  *(byte *)in_EAX = (byte)*in_EAX + cVar7;
  param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar35 + bVar5 | (byte)*in_EAX,bVar31 | (byte)uVar10));
  unaff_EDI = puVar39;
  do {
    *(byte *)(in_GS_OFFSET + (int)in_EAX) = *(byte *)(in_GS_OFFSET + (int)in_EAX) + (char)in_EAX;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) |
                                        *(byte *)((int)unaff_EDI + 0x66),(char)param_1));
    *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
code_r0x00402a3e:
    uVar23 = (undefined3)((uint)in_EAX >> 8);
    bVar6 = (byte)in_EAX | (byte)*puVar37;
    pcVar16 = (char *)CONCAT31(uVar23,bVar6);
    if ((char)bVar6 < '\0') {
      *pcVar16 = *pcVar16 + bVar6;
      cVar7 = bVar6 + 2;
      piVar18 = (int *)CONCAT31(uVar23,cVar7);
      if ((POPCOUNT(cVar7) & 1U) == 0) {
        *(char *)piVar18 = (char)*piVar18 + cVar7;
        bVar6 = bVar6 + 0x71;
        pcVar33 = (char *)CONCAT31(uVar23,bVar6);
        pcVar16 = (char *)segment(in_DS,(short)unaff_EBX + (short)puVar37);
        *pcVar16 = *pcVar16 + bVar6;
        uVar10 = unaff_EDI[0x1a];
        *pcVar33 = *pcVar33 + bVar6;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | (byte)uVar10 |
                                            *(byte *)((int)unaff_EDI + 0x69),(char)param_1));
        *pcVar33 = *pcVar33 + bVar6;
        bVar6 = bVar6 | (byte)*param_2;
        pcVar16 = (char *)CONCAT31(uVar23,bVar6);
        if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00402a75;
        goto code_r0x00402a5d;
      }
      unaff_ESI = puVar37 + (uint)bVar44 * -2 + 1;
      out(*puVar37,(short)param_2);
    }
    else {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                            (char)unaff_EBX));
code_r0x00402a5d:
      *pcVar16 = *pcVar16 + (char)pcVar16;
      piVar18 = (int *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + 'o');
      unaff_ESI = puVar37;
    }
code_r0x00402a61:
    pcVar16 = (char *)segment(in_DS,(short)unaff_EBX + (short)unaff_ESI);
    *pcVar16 = *pcVar16 + (char)piVar18;
    cVar7 = (char)param_1;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | (byte)unaff_EDI[0x1a],cVar7));
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    uVar30 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
    piVar13 = (int *)((int)piVar18 + *piVar18);
    puVar37 = unaff_ESI;
    puVar39 = unaff_EDI;
    uVar40 = in_ES;
    if (SCARRY4((int)piVar18,*piVar18)) goto code_r0x00402ae3;
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    puVar37 = unaff_ESI + (uint)bVar44 * -2 + 1;
    out(*unaff_ESI,uVar30);
code_r0x00402a75:
    bVar6 = (byte)((uint)param_1 >> 8) | (byte)*param_2;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6,(char)param_1));
    piVar18 = (int *)(uint)(byte)*unaff_EBX;
    *(byte *)puVar37 = (byte)*puVar37 - bVar6;
    puVar39 = unaff_EDI;
code_r0x00402a7f:
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    out(*puVar37,(short)param_2);
    bVar6 = in((short)param_2);
    *(byte *)puVar39 = bVar6;
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
    iVar15 = *piVar18;
    cVar7 = in(1);
    puVar14 = (uint *)CONCAT31((int3)((uint)((int)piVar18 + *piVar18) >> 8),cVar7);
    *(char *)puVar14 = (char)*puVar14 + cVar7;
    in_EAX = (uint *)((uint)puVar14 | *puVar14);
    *(byte *)param_1 = (byte)*param_1 + (char)param_2;
    puVar37 = (uint *)((int)puVar37 + (((uint)bVar44 * -8 + 4) - iVar15));
    puVar39 = (uint *)((int)puVar39 + (uint)bVar44 * -2 + 1);
    in_SS = in_ES;
    while( true ) {
      bVar6 = (byte)in_EAX | (byte)*param_2;
      in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6);
      unaff_EDI = puVar39;
      if ((POPCOUNT(bVar6) & 1U) != 0) break;
      *(byte *)in_EAX = (byte)*in_EAX + bVar6;
code_r0x00402a9b:
      uVar23 = (undefined3)((uint)in_EAX >> 8);
      cVar7 = (char)in_EAX + '\r';
      piVar13 = (int *)CONCAT31(uVar23,cVar7);
      *(uint *)((int)unaff_EBP + 2) = *(uint *)((int)unaff_EBP + 2) | (uint)piVar13;
      *(char *)piVar13 = (char)*piVar13 + cVar7;
      *(byte *)(puVar37 + -0xc800000) = (byte)puVar37[-0xc800000] + (char)param_2;
      *(char *)piVar13 = (char)*piVar13 + cVar7;
      *(byte *)param_2 = (byte)*param_2 + cVar7;
      cVar34 = (char)param_1;
      if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
        *(byte *)param_2 = (byte)*param_2 + cVar34;
        unaff_ESI = puVar37 + (uint)bVar44 * -2 + 1;
        out(*puVar37,(short)param_2);
        piVar18 = (int *)((longlong)*piVar13 * 0x7b020a00);
        *(char *)piVar18 =
             (char)*piVar18 - ((longlong)(int)piVar18 != (longlong)*piVar13 * 0x7b020a00);
        pbVar9 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
        *pbVar9 = *pbVar9;
        goto code_r0x00402a61;
      }
      *(char *)piVar13 = (char)*piVar13 + cVar7;
      puVar39 = (uint *)CONCAT31(uVar23,(char)in_EAX + ':');
      unaff_ESI = (uint *)((uint)puVar37 | *(uint *)((int)param_2 + -0x79));
      iVar15 = (int)puVar39 + *puVar39;
      if (SCARRY4((int)puVar39,*puVar39)) {
        unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              (byte)unaff_ESI[(int)unaff_EBX],(char)unaff_EBX));
        *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar15;
        puVar39 = unaff_EDI;
        goto code_r0x00402b33;
      }
      uVar23 = (undefined3)((uint)iVar15 >> 8);
      cVar7 = (char)iVar15 + CARRY4((uint)puVar39,*puVar39);
      piVar18 = (int *)CONCAT31(uVar23,cVar7);
      *(byte *)param_2 = (byte)*param_2 + cVar34;
      bVar43 = (POPCOUNT((byte)*param_2) & 1U) != 0;
      if ((bVar43) && (bVar43)) goto code_r0x00402a61;
      *(char *)piVar18 = (char)*piVar18 + cVar7;
      cVar8 = cVar7 + '(';
      pcVar16 = (char *)CONCAT31(uVar23,cVar8);
      puVar39 = unaff_EDI + (uint)bVar44 * -2 + 1;
      uVar10 = in((short)param_2);
      *unaff_EDI = uVar10;
      *pcVar16 = *pcVar16 + cVar8;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | bRama07b0222,cVar34));
      *pcVar16 = *pcVar16 + cVar8;
      pcVar16 = (char *)CONCAT31(uVar23,cVar7 + '>');
code_r0x00402ad2:
      out(*unaff_ESI,(short)param_2);
      puVar37 = (uint *)((int)(unaff_ESI + (uint)bVar44 * -2 + 1) + (uint)bVar44 * -2 + 1);
      out((byte)unaff_ESI[(uint)bVar44 * -2 + 1],(short)param_2);
      bVar6 = (byte)pcVar16;
      *pcVar16 = *pcVar16 + bVar6;
      unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar39);
      in_AF = 9 < (bVar6 & 0xf) | in_AF;
      uVar23 = (undefined3)((uint)pcVar16 >> 8);
      bVar6 = bVar6 + in_AF * -6;
      param_2 = (uint *)((uint)param_2 ^ *param_2);
      cVar7 = bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) * -0x60 + (byte)*param_2;
      piVar18 = (int *)CONCAT31(uVar23,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00402a7f;
      *(char *)piVar18 = (char)*piVar18 + cVar7;
      piVar13 = (int *)CONCAT31(uVar23,cVar7 + '\x17');
      uVar40 = in_ES;
code_r0x00402ae3:
      out(*puVar37,(short)param_2);
      unaff_ESI = puVar37 + (uint)bVar44 * -2 + 1 + (uint)bVar44 * -2 + 1;
      out(puVar37[(uint)bVar44 * -2 + 1],(short)param_2);
      *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
code_r0x00402ae7:
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | (byte)unaff_EBP[-0x18],
                                            (char)unaff_EBX));
      cVar7 = (char)piVar13;
      *(char *)piVar13 = (char)*piVar13 + cVar7;
      uVar23 = (undefined3)((uint)piVar13 >> 8);
      bVar6 = cVar7 + 2;
      in_EAX = (uint *)CONCAT31(uVar23,bVar6);
      in_ES = uVar40;
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *(byte *)in_EAX = (byte)*in_EAX + bVar6;
        cVar7 = cVar7 + '}';
        in_EAX = (uint *)CONCAT31(uVar23,cVar7);
        *(byte *)in_EAX = ((byte)*in_EAX - cVar7) - (0x84 < bVar6);
        pbVar9 = (byte *)((int)param_2 + (int)in_EAX);
        *pbVar9 = *pbVar9 + cVar7;
        bVar6 = POPCOUNT(*pbVar9);
        puVar37 = unaff_ESI;
code_r0x00402af9:
        in_ES = uVar40;
        unaff_EDI = puVar39;
        if ((bVar6 & 1) == 0) {
          *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
          bVar6 = (byte)param_1;
          *(byte *)param_2 = (byte)*param_2 + bVar6;
          unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
          unaff_ESI = puVar37 + (uint)bVar44 * -2 + 1;
          out(*puVar37,(short)param_2);
          uVar10 = *param_2;
          *(byte *)param_2 = (byte)*param_2 + bVar6;
          iVar15 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'o') +
                   *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar10,bVar6);
          pcVar16 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '(');
          while( true ) {
            uVar10 = *param_2;
            bVar5 = (byte)param_1;
            *(byte *)param_2 = (byte)*param_2 + bVar5;
            pcVar16 = pcVar16 + (uint)CARRY1((byte)uVar10,bVar5) + iRam73280512;
            bVar6 = (byte)pcVar16;
            *pcVar16 = *pcVar16 + bVar6;
            param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                       CONCAT11((byte)((uint)param_1 >> 8) | bRam7d160243,bVar5));
            bVar44 = ((uint)unaff_retaddr & 0x400) != 0;
            in_AF = ((uint)unaff_retaddr & 0x10) != 0;
            *pcVar16 = *pcVar16 + bVar6;
            uVar23 = (undefined3)((uint)pcVar16 >> 8);
            iRam0000a37d = iRam0000a37d + CONCAT31(uVar23,bVar6 + 2) + (uint)(0xfd < bVar6);
            cVar7 = bVar6 + 4;
            if (SCARRY1(bVar6 + 2,'\x02') != cVar7 < '\0') break;
            *(char *)CONCAT31(uVar23,cVar7) = *(char *)CONCAT31(uVar23,cVar7) + cVar7;
            iVar15 = CONCAT31(uVar23,bVar6 + 0x16);
code_r0x00402b33:
            piVar13 = (int *)(iVar15 + 0xe2802);
            *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)param_1 >> 8);
            uVar40 = in_ES;
            in_ES = in_SS;
            while( true ) {
              bVar5 = (byte)unaff_EBX | (byte)((uint)param_1 >> 8);
              unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar5);
              *piVar13 = (int)(*piVar13 + (int)piVar13);
              cVar7 = (char)piVar13;
              *(byte *)param_2 = (byte)*param_2 + cVar7;
              if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
              *(char *)piVar13 = (char)*piVar13 + cVar7;
              uVar10 = CONCAT31((int3)((uint)piVar13 >> 8),cVar7 + '\x13');
              in_EAX = (uint *)(uVar10 + 0x19061224 + (uint)(0x1f9edfd < uVar10));
              uVar11 = (uint)(0xe4ffffdd < uVar10 + 0xfe061202 ||
                             CARRY4(uVar10 + 0x19061224,(uint)(0x1f9edfd < uVar10)));
              uVar10 = *unaff_ESI;
              uVar1 = *unaff_ESI;
              *unaff_ESI = (uint)((byte *)(uVar1 + (int)in_EAX) + uVar11);
              bVar6 = POPCOUNT(*unaff_ESI & 0xff);
              puVar37 = unaff_ESI;
              if ((SCARRY4(uVar10,(int)in_EAX) != SCARRY4((int)(uVar1 + (int)in_EAX),uVar11)) ==
                  (int)*unaff_ESI < 0) goto code_r0x00402af9;
              bVar6 = (byte)in_EAX;
              *(byte *)in_EAX = (byte)*in_EAX + bVar6;
              iVar15 = CONCAT31((int3)((uint)in_EAX >> 8),bVar6 + 2) + 0x9d7d + (uint)(0xfd < bVar6)
              ;
              bVar6 = (byte)param_2 | (byte)*param_2;
              uVar10 = *unaff_EBX;
              *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar5;
              pcVar16 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x12') +
                                 0x228b26 + *puVar39 + (uint)CARRY1((byte)uVar10,bVar5));
              cVar7 = bVar6 + (byte)*param_1;
              param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar7);
              if (SCARRY1(bVar6,(byte)*param_1) == cVar7 < '\0') break;
              *pcVar16 = *pcVar16 + (char)pcVar16;
              cVar7 = (char)pcVar16 + '\x02';
              pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar7);
              bVar6 = POPCOUNT(cVar7);
              uVar40 = in_ES;
code_r0x00402b7a:
              puVar37 = unaff_ESI;
              if ((bVar6 & 1) != 0) break;
              while( true ) {
                cVar7 = (char)pcVar16;
                *pcVar16 = *pcVar16 + cVar7;
                uVar23 = (undefined3)((uint)pcVar16 >> 8);
                pcVar16 = (char *)CONCAT31(uVar23,cVar7 + '\x13');
                *(byte *)param_1 = (byte)*param_1 | (byte)param_2;
                *(byte *)puVar39 = (byte)*puVar39 | (byte)param_2;
                *param_2 = (uint)(pcVar16 + *param_2);
                uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
                uVar24 = SUB41(unaff_EBX,0);
                cVar34 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
                unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar34,uVar24));
                *pcVar16 = *pcVar16 + cVar7 + '\x13';
                piVar13 = (int *)CONCAT31(uVar23,cVar7 + -0x7a);
                uVar10 = *param_2;
                *(byte *)param_2 = (byte)*param_2 + (char)param_1;
                uVar41 = in_CS;
                if (SCARRY1((byte)uVar10,(char)param_1) == (char)(byte)*param_2 < '\0') break;
                *(char *)piVar13 = (char)*piVar13 + cVar7 + -0x7a;
                cVar8 = cVar7 + -0x78;
                piVar13 = (int *)CONCAT31(uVar23,cVar8);
                uVar41 = uVar40;
                if ((POPCOUNT(cVar8) & 1U) != 0) break;
                *(char *)piVar13 = (char)*piVar13 + cVar8;
                pcVar16 = (char *)CONCAT31(uVar23,cVar7 + -0x65);
                *param_1 = *param_1 | (uint)param_2;
                *puVar39 = *puVar39 | (uint)param_2;
                pbVar9 = (byte *)((int)param_1 + -1);
                cVar34 = cVar34 + *(byte *)((int)unaff_EBX + -0x5e);
                unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar34,uVar24));
                *pcVar16 = *pcVar16 + cVar7 + -0x65;
                bVar6 = cVar7 + 10;
                puVar14 = (uint *)CONCAT31(uVar23,bVar6);
                bVar5 = (byte)pbVar9;
                *(byte *)param_2 = (byte)*param_2 + bVar5;
                unaff_ESI = puVar37 + (uint)bVar44 * -2 + 1;
                out(*puVar37,(short)param_2);
                uVar10 = *param_2;
                *(byte *)param_2 = (byte)*param_2 + bVar5;
                uVar2 = (uint)CARRY1((byte)uVar10,bVar5);
                uVar10 = *param_2;
                uVar1 = *param_2;
                pbVar12 = pbVar9 + uVar1 + uVar2;
                uVar4 = *param_2;
                cRam130a0000 = cRam130a0000 - cVar34;
                uVar11 = *param_2;
                unaff_EBP = (uint *)((uint)unaff_EBP | *puVar14);
                *(byte *)puVar14 = (char)*puVar14 + bVar6;
                param_1 = (uint *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                           CONCAT11((byte)((uint)pbVar12 >> 8) | bRam7d170243,
                                                    (char)pbVar12 + (byte)uVar4 +
                                                    (CARRY4((uint)pbVar9,uVar10) ||
                                                    CARRY4((uint)(pbVar9 + uVar1),uVar2))));
                bVar44 = (in_SS & 0x400) != 0;
                in_AF = (in_SS & 0x10) != 0;
                *(byte *)puVar14 = (char)*puVar14 + bVar6;
                bVar43 = 0xfd < bVar6;
                pcVar16 = (char *)CONCAT31(uVar23,cVar7 + '\f');
                param_2 = (uint *)((uint)param_2 | uVar11);
code_r0x00402bd1:
                uVar10 = *unaff_EBX;
                uVar1 = *unaff_EBX;
                *unaff_EBX = (uint)((byte *)(uVar1 + (int)param_1) + bVar43);
                bVar6 = POPCOUNT(*unaff_EBX & 0xff);
                uVar40 = in_SS;
                if ((SCARRY4(uVar10,(int)param_1) !=
                    SCARRY4((int)(uVar1 + (int)param_1),(uint)bVar43)) == (int)*unaff_EBX < 0)
                goto code_r0x00402b7a;
                cVar7 = (char)pcVar16;
                *pcVar16 = *pcVar16 + cVar7;
                pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar7 + '\x02');
                if (SCARRY1(cVar7,'\x02') == (char)(cVar7 + '\x02') < '\0') {
code_r0x00402bdb:
                  *pcVar16 = *pcVar16 + (char)pcVar16;
                  pcVar16 = (char *)(CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x12') |
                                    *param_2);
                  *(byte *)puVar39 = (byte)*puVar39 - (char)param_1;
                  *pcVar16 = *pcVar16 + (char)pcVar16;
                  puVar37 = (uint *)((int)param_2 - *unaff_ESI);
                  bVar6 = (byte)unaff_EBX | (byte)((uint)param_1 >> 8);
                  cVar7 = *pcVar16;
                  uVar23 = (undefined3)((uint)pcVar16 >> 8);
                  pcVar16 = (char *)CONCAT31(uVar23,cVar7);
                  *pcVar16 = *pcVar16 + cVar7;
                  pcVar33 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8
                                                                               ),bVar6) + -0x5b),
                                                      bVar6));
                  *pcVar16 = *pcVar16 + cVar7;
                  bVar43 = false;
                  pcVar16 = (char *)(CONCAT31(uVar23,cVar7 + '\x13') | *puVar37);
                  do {
                    bVar5 = (byte)param_1;
                    bVar6 = bVar5 + (byte)unaff_ESI[(int)puVar39 * 2];
                    param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar6 + bVar43);
                    uVar10 = (uint)(CARRY1(bVar5,(byte)unaff_ESI[(int)puVar39 * 2]) ||
                                   CARRY1(bVar6,bVar43));
                    pcVar17 = pcVar16 + 0x1b000019 + uVar10;
                    piVar18 = (int *)((int)puVar39 * 2 + 0x40000a5);
                    *piVar18 = (int)((int)param_1 +
                                    (uint)((char *)0xe4ffffe6 < pcVar16 ||
                                          CARRY4((uint)(pcVar16 + 0x1b000019),uVar10)) + *piVar18);
                    puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),
                                               (char)puVar37 + cRam00009d7d);
                    uVar23 = (undefined3)((uint)pcVar17 >> 8);
                    bVar6 = (char)pcVar17 + 0x12;
                    in_AF = 9 < (bVar6 & 0xf) | in_AF;
                    uVar10 = CONCAT31(uVar23,bVar6 + in_AF * -6) & 0xffffff0f;
                    pcVar16 = (char *)CONCAT22((short)(uVar10 >> 0x10),
                                               CONCAT11((char)((uint)pcVar17 >> 8) - in_AF,
                                                        (char)uVar10));
                    puVar14 = (uint *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar23,bVar6));
                    while( true ) {
                      *pcVar16 = *pcVar16 + (char)pcVar16;
                      puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),
                                                 (byte)puVar37 | (byte)*puVar37);
                      puVar39 = (uint *)((uint)puVar39 | (uint)unaff_ESI);
                      uVar10 = (uint)pcVar33 | (uint)unaff_ESI;
                      unaff_EBP = (uint *)((int)puVar14 + 1);
                      uVar40 = (ushort)((uint)unaff_retaddr >> 0x10);
                      unaff_retaddr = (uint *)CONCAT22(uVar40,in_ES);
                      cVar7 = (char)(pcVar16 + 0x1b000019);
                      uVar23 = (undefined3)((uint)(pcVar16 + 0x1b000019) >> 8);
                      cVar34 = cVar7 + -0x13;
                      pcVar16 = (char *)CONCAT31(uVar23,cVar34);
                      uVar30 = (undefined2)(uVar10 >> 0x10);
                      cVar8 = (char)(uVar10 >> 8) + *(char *)(uVar10 - 0x5e);
                      unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,(byte)uVar10));
                      *pcVar16 = *pcVar16 + cVar34;
                      pcVar16 = (char *)(CONCAT31(uVar23,cVar7 + '\x19') | *puVar37);
                      bVar6 = (byte)pcVar16;
                      if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0) {
                        pbVar9 = (byte *)((int)puVar37 + (int)pcVar16);
                        bVar43 = CARRY1(*pbVar9,bVar6);
                        *pbVar9 = *pbVar9 + bVar6;
                        param_2 = puVar37;
                        goto code_r0x00402bd1;
                      }
                      *pcVar16 = *pcVar16 + bVar6;
                      uVar23 = (undefined3)((uint)pcVar16 >> 8);
                      pcVar33 = (char *)CONCAT31(uVar23,bVar6 + 0x6f);
                      param_2 = (uint *)((int)puVar37 + 1);
                      *pcVar33 = *pcVar33 + bVar6 + 0x6f;
                      bVar5 = (byte)uVar10 | (byte)((uint)pcVar16 >> 8);
                      pcVar16 = (char *)CONCAT31(uVar23,bVar6 + 0x5c);
                      cVar8 = cVar8 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar5) + -0x5f
                                               );
                      unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,bVar5));
                      *pcVar16 = *pcVar16 + bVar6 + 0x5c;
                      pcVar16 = (char *)(CONCAT31(uVar23,bVar6 + 0x88) | *param_2);
                      if ((POPCOUNT((uint)pcVar16 & 0xff) & 1U) != 0) {
                        *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)param_1 >> 8);
                        unaff_retaddr = (uint *)((uint)uVar40 << 0x10);
                        goto code_r0x00402bdb;
                      }
                      *pcVar16 = *pcVar16 + (char)pcVar16;
                      uVar23 = (undefined3)((uint)pcVar16 >> 8);
                      cVar7 = (char)pcVar16 + 'o';
                      puVar37 = (uint *)((int)puVar37 + 2);
                      *(char *)CONCAT31(uVar23,cVar7) = *(char *)CONCAT31(uVar23,cVar7) + cVar7;
                      pcVar33 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                 bVar5 | (byte)((uint)pcVar16 >> 8));
                      pcVar16 = (char *)(CONCAT31(uVar23,cVar7) | 2);
                      *(char *)((int)puVar14 + -0x62) = *(char *)((int)puVar14 + -0x62) + '\x01';
                      bVar6 = (byte)pcVar16;
                      *pcVar16 = *pcVar16 + bVar6;
                      bVar43 = 0xfd < bVar6;
                      cVar7 = bVar6 + 2;
                      pcVar16 = (char *)CONCAT31(uVar23,cVar7);
                      in_DS = in_ES;
                      if (SCARRY1(bVar6,'\x02') != cVar7 < '\0') break;
                      *pcVar16 = *pcVar16 + cVar7;
                      bVar5 = bVar6 + 10;
                      pcVar16 = (char *)CONCAT31(uVar23,bVar5);
                      *pcVar16 = *pcVar16 - cVar8;
                      cVar34 = (char)param_1;
                      *(byte *)puVar37 = *(byte *)puVar37 + cVar34;
                      *(char *)((int)puVar14 + -0x62) = *(char *)((int)puVar14 + -0x62) + '\x01';
                      *pcVar16 = *pcVar16 + bVar5;
                      cVar7 = bVar6 + 0xc;
                      pcVar16 = (char *)CONCAT31(uVar23,cVar7);
                      if (SCARRY1(bVar5,'\x02') == cVar7 < '\0') {
                        *pcVar16 = *pcVar16 + cVar7;
                        *(byte *)param_1 = (byte)*param_1 - cVar8;
                        *(byte *)puVar37 = *(byte *)puVar37 + cVar34;
                        cVar7 = (bVar6 + 0x13) - (byte)param_1[0x13];
                        pcVar16 = (char *)CONCAT31(uVar23,cVar7);
                        *pcVar16 = *pcVar16 + cVar7;
                        pcVar17 = (char *)CONCAT31(uVar23,cVar7 + *pcVar16);
                        *pcVar17 = *pcVar17 + cVar7 + *pcVar16;
                        pcVar17 = pcVar17 + *param_1;
                        *pcVar17 = *pcVar17 + (char)pcVar17;
                        LOCK();
                        pcVar16 = *(char **)pcVar17;
                        *(char **)pcVar17 = pcVar17;
                        UNLOCK();
                        *pcVar16 = *pcVar16 + (char)pcVar16;
                        pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)*param_1);
                        *pbVar9 = *pbVar9 + (byte)*param_1;
                        goto code_r0x00402c8d;
                      }
                      param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),
                                                 cVar34 + *pcVar33 + (0xfd < bVar5));
                      *(byte *)puVar39 = (byte)*puVar39 - cVar8;
                      puVar14 = unaff_EBP;
                    }
                  } while( true );
                }
                unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(byte *)((int)unaff_EBX + -99),
                                                      (char)unaff_EBX));
                puVar37 = unaff_ESI;
              }
              *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
              param_2 = (uint *)((int)param_2 - *puVar37);
              unaff_ESI = puVar37;
              uVar40 = in_ES;
              in_ES = uVar41;
            }
            *(byte *)param_2 = (byte)*param_2 + (char)param_1;
            pcVar16 = pcVar16 + -0x7d160243;
          }
          pcVar16 = (char *)CONCAT31(uVar23,uRam16040000);
          goto code_r0x00402ad2;
        }
        goto code_r0x00402a9b;
      }
code_r0x00402a8f:
      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)param_1;
      uVar10 = *in_EAX;
      *(byte *)in_EAX = (byte)*in_EAX + (byte)in_EAX;
      *puVar39 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar10,(byte)in_EAX) + *puVar39);
      puVar37 = unaff_ESI;
    }
  } while( true );
code_r0x0040290e:
  *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
  uVar46 = func_0x7346291c();
  *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
  param_1 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                             (byte)extraout_ECX | *(byte *)((ulonglong)uVar46 >> 0x20));
  param_4 = (uint *)CONCAT22(0x40,(ushort)param_4);
  uVar40 = (ushort)param_4;
  goto code_r0x00402922;
  do {
    while( true ) {
      cVar29 = (char)param_1;
      cVar26 = (char)((uint)param_1 >> 8) + (char)((uint)pbVar9 >> 8);
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar26,cVar29));
      cVar7 = (char)pbVar9;
      *pbVar9 = *pbVar9 + cVar7;
      pcVar16 = (char *)((int)pbVar9 * 2 + 0x1a10000);
      cVar8 = (char)((uint)pcVar33 >> 8);
      *pcVar16 = *pcVar16 + cVar8;
      *pbVar9 = *pbVar9 + cVar7;
      uVar40 = (ushort)param_3;
      *pbVar9 = *pbVar9 + cVar7;
      *pbVar9 = *pbVar9 + cVar7;
      *pbVar9 = *pbVar9 + cVar7;
      *pbVar9 = *pbVar9 + cVar7;
      *pbVar9 = *pbVar9 + cVar7;
      *pbVar9 = *pbVar9 + cVar7;
      *pbVar9 = *pbVar9 + cVar7;
      pbVar9[-0x47ffffff] = pbVar9[-0x47ffffff] + cVar8;
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      bVar5 = (byte)puVar37;
      *(byte *)puVar39 = (byte)*puVar39 + bVar5;
      *pbVar9 = *pbVar9 + cVar7;
      *pbVar9 = *pbVar9 + bVar5;
      *pbVar9 = *pbVar9 + cVar7;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar30 = (undefined2)((uint)pcVar33 >> 0x10);
      cVar8 = cVar8 + (byte)unaff_ESI[(int)pcVar33];
      pcVar16 = (char *)CONCAT22(uVar30,CONCAT11(cVar8,(char)pcVar33));
      pcVar16[(int)pbVar9] = pcVar16[(int)pbVar9] + cVar7;
      *(byte *)puVar37 = *(byte *)puVar37 - cVar8;
      *(byte *)puVar37 = *(byte *)puVar37 + cVar29;
      uVar23 = (undefined3)((uint)pbVar9 >> 8);
      bVar6 = cVar7 - *pbVar9;
      *pcVar16 = *pcVar16 + bVar5;
      *(byte *)puVar37 = *(byte *)puVar37 ^ bVar6;
      *(byte *)puVar37 = *(byte *)puVar37 + bVar6;
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      uVar10 = *param_1;
      *(byte *)param_1 = (byte)*param_1 + bVar5;
      cVar34 = bVar6 + *(char *)CONCAT31(uVar23,bVar6) + CARRY1((byte)uVar10,bVar5);
      pcVar33 = (char *)CONCAT22(uVar30,CONCAT11(cVar8 + (char)puVar14[-0x18],(char)pcVar33));
      *(char *)CONCAT31(uVar23,cVar34) = *(char *)CONCAT31(uVar23,cVar34) + cVar34;
      cVar8 = cVar34 + '\x12';
      pbVar9 = (byte *)CONCAT31(uVar23,cVar8);
      cVar7 = *pcVar33;
      *pcVar33 = *pcVar33 + cVar8;
      if (SCARRY1(cVar7,cVar8) != *pcVar33 < '\0') break;
code_r0x00402c8d:
      cVar7 = (char)pbVar9;
      *pbVar9 = *pbVar9 + cVar7;
      *pbVar9 = *pbVar9 + cVar7;
      *pbVar9 = *pbVar9 + cVar7;
      *(byte *)puVar37 = *(byte *)puVar37 + cVar7;
      *pbVar9 = *pbVar9 + cVar7;
    }
    *pbVar9 = *pbVar9 + cVar8;
    pbVar9 = (byte *)CONCAT31(uVar23,cVar34 + '$');
    *pbVar9 = *pbVar9 + cVar26;
    bVar6 = *(byte *)puVar37;
    *(byte *)puVar37 = *(byte *)puVar37 + cVar29;
    uVar41 = in_ES;
  } while (SCARRY1(bVar6,cVar29) == (char)*(byte *)puVar37 < '\0');
  do {
    cVar7 = (char)pbVar9;
    *pbVar9 = *pbVar9 + cVar7;
    uVar23 = (undefined3)((uint)pbVar9 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar37;
    bVar5 = cVar7 + 0x24;
    cVar8 = (char)((uint)pcVar33 >> 8);
    pcVar33[-0x62] = pcVar33[-0x62] + cVar8;
    *(char *)CONCAT31(uVar23,bVar5) = *(char *)CONCAT31(uVar23,bVar5) + bVar5;
    bVar6 = cVar7 + 0x2fU + (byte)*param_1;
    cVar34 = bVar6 + (0xf4 < bVar5);
    cVar7 = cVar34 + *(char *)CONCAT31(uVar23,cVar34) +
            (CARRY1(cVar7 + 0x2fU,(byte)*param_1) || CARRY1(bVar6,0xf4 < bVar5));
    pcVar16 = (char *)CONCAT31(uVar23,cVar7);
    *pcVar16 = *pcVar16 - (char)puVar37;
    *pcVar16 = *pcVar16 + cVar7;
    pcVar17 = (char *)((int)puVar37 - *puVar37);
    *(byte *)(unaff_ESI + (int)pcVar33) = (byte)unaff_ESI[(int)pcVar33] + cVar8;
    pcVar16[(int)unaff_EBP] = pcVar16[(int)unaff_EBP] + cVar7;
    *pcVar17 = *pcVar17 + (char)param_1;
    pcVar16 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                               CONCAT11((char)((uint)pbVar9 >> 8) - *pcVar17,cVar7));
    uVar10 = *puVar39;
    *pcVar16 = *pcVar16 - (char)((uint)pcVar17 >> 8);
    *pcVar16 = *pcVar16 + cVar7;
    uVar30 = (undefined2)((uint)unaff_retaddr >> 0x10);
    unaff_retaddr = (uint *)CONCAT22(uVar30,uVar41);
    pbVar12 = (byte *)CONCAT22((short)((uint)pcVar33 >> 0x10),
                               CONCAT11(cVar8 - (byte)*unaff_ESI,(char)pcVar33));
    unaff_EBP = (uint *)((int)unaff_EBP + *(int *)(pbVar12 + (int)param_1));
    puVar14 = (uint *)CONCAT31((int3)((uint)pcVar17 >> 8),(char)pcVar17 + (byte)uVar10);
    while( true ) {
      puVar37 = puVar14;
      uVar36 = (undefined2)((uint)pbVar12 >> 0x10);
      bVar35 = (char)((uint)pbVar12 >> 8) + pbVar12[0x18];
      *pcVar16 = *pcVar16 + (char)pcVar16;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + 'o');
      cVar7 = (char)param_1;
      *(byte *)puVar37 = (byte)*puVar37 + cVar7;
      uVar10 = *unaff_ESI;
      bVar31 = (byte)((uint)param_1 >> 8);
      bVar6 = *pbVar9;
      pbVar9 = pbVar9 + (uint)CARRY1(bVar31,*pbVar9) + *(int *)pbVar9;
      *(byte *)puVar37 = (byte)*puVar37 + cVar7;
      cVar34 = ((char)pbVar12 - (byte)uVar10) - (byte)*unaff_ESI;
      bVar5 = *(byte *)((int)puVar39 + 0x1a);
      *pbVar9 = *pbVar9 + (char)pbVar9;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11(bVar31 + bVar6 + bVar5 | (byte)*puVar37,cVar7));
      pbVar9 = pbVar9 + *puVar37;
      if ((POPCOUNT((uint)pbVar9 & 0xff) & 1U) != 0) break;
      *pbVar9 = *pbVar9 + (char)pbVar9;
      bVar6 = (char)pbVar9 + 0x6f;
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
      pcVar33 = (char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar35,(char)pbVar12)) >> 8),
                                  cVar34) + -1);
      *pcVar16 = *pcVar16 + bVar6;
      *pcVar16 = *pcVar16 + bVar6;
      *pcVar33 = *pcVar33 + (byte)puVar37;
      *(byte *)((int)pcVar16 * 2) = *(byte *)((int)pcVar16 * 2) ^ bVar6;
      uVar3 = *(undefined6 *)pcVar16;
      uVar41 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar16 = (char *)uVar3;
      *pcVar16 = *pcVar16 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar16 = (char *)((uint)pcVar16 | 0x73110008);
      bVar35 = (byte)((uint)pcVar33 >> 8);
      *(byte *)puVar39 = (byte)*puVar39 - bVar35;
      *(byte *)puVar37 = (byte)*puVar37 + cVar7;
      puVar14 = unaff_ESI + (uint)bVar44 * -2 + 1;
      out(*unaff_ESI,(short)puVar37);
      *pcVar16 = *pcVar16;
      cVar7 = (char)pcVar16;
      *pcVar16 = *pcVar16 + cVar7;
      bVar6 = *(byte *)((int)unaff_EBP + -0x5a);
      uVar36 = (undefined2)((uint)pcVar33 >> 0x10);
      cVar34 = (char)pcVar33;
      *pcVar16 = *pcVar16 + cVar7;
      cVar7 = cVar7 + '\x02';
      uVar10 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar7);
      param_1 = (uint *)(uVar10 | 0x73110000);
      unaff_ESI = puVar14 + (uint)bVar44 * -2 + 1;
      out(*puVar14,(short)puVar37);
      *(byte *)param_1 = (byte)*param_1;
      bVar31 = (byte)puVar37 | (byte)*puVar39;
      puVar14 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),bVar31);
      *(byte *)param_1 = (byte)*param_1 + cVar7;
      pcVar16 = (char *)(uVar10 | 0x7b1f1609);
      bVar44 = ((uint)param_3 & 0x400) != 0;
      *(uint *)((int)puVar39 + -0x7d) = *(uint *)((int)puVar39 + -0x7d) | (uint)unaff_EBP;
      bVar5 = (byte)pcVar16;
      *pcVar16 = *pcVar16 + bVar5;
      bVar35 = bVar35 | bVar6 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar12 = (byte *)CONCAT22(uVar36,CONCAT11(bVar35,cVar34));
      *pcVar16 = *pcVar16 + bVar5;
      uVar23 = (undefined3)((uint)pcVar16 >> 8);
      unaff_ESI[(int)puVar39 * 2] =
           (uint)((int)puVar14 + (uint)(0xd2 < bVar5) + unaff_ESI[(int)puVar39 * 2]);
      param_3 = (uint *)(uint)uVar41;
      bVar6 = bVar5 + 0x2d ^ *(byte *)CONCAT31(uVar23,bVar5 + 0x2d);
      pcVar16 = (char *)CONCAT31(uVar23,bVar6);
      uVar10 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
      if (CARRY1((byte)uVar10,bVar6)) {
        *pcVar16 = *pcVar16 + bVar6;
        bVar6 = bVar6 | pcVar16[0x4000019];
        pcVar16 = (char *)CONCAT31(uVar23,bVar6);
        if ('\0' < (char)bVar6) {
          *pcVar16 = *pcVar16 + bVar6;
          piVar18 = (int *)CONCAT31(uVar23,bVar6 + 0x28);
          *piVar18 = (int)piVar18 + (uint)(0xd7 < bVar6) + *piVar18;
          bVar27 = (byte)((uint6)uVar3 >> 8);
          *pbVar12 = *pbVar12 + bVar27;
          uVar32 = CONCAT11((byte)((uint)puVar37 >> 8) | bVar35,bVar31);
          puVar14 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar32);
          unaff_retaddr = (uint *)CONCAT22(uVar30,uVar41);
          bVar31 = in(uVar32);
          pbVar9 = (byte *)CONCAT31(uVar23,bVar31);
          bVar6 = *pbVar9;
          bVar43 = SCARRY1(*pbVar9,bVar31);
          *pbVar9 = *pbVar9 + bVar31;
          bVar5 = *pbVar9;
          puVar37 = unaff_ESI;
          in_SS = uVar41;
          if (!CARRY1(bVar6,bVar31)) goto code_r0x00402e19;
          *pbVar9 = *pbVar9 + bVar31;
          bVar27 = bVar27 | *pbVar9;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar27,cVar7));
          pcVar16 = (char *)CONCAT31(uVar23,bVar31 + *pbVar9);
          *pbVar12 = *pbVar12 + bVar27;
        }
        uVar23 = (undefined3)((uint)pcVar16 >> 8);
        bVar5 = (byte)pcVar16 | (byte)*puVar14;
        pbVar9 = (byte *)CONCAT31(uVar23,bVar5);
        puVar37 = unaff_ESI + (uint)bVar44 * -2 + 1;
        out(*unaff_ESI,(short)puVar14);
        LOCK();
        bVar6 = *pbVar9;
        *pbVar9 = bVar5;
        UNLOCK();
        *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
        piVar18 = (int *)(CONCAT31(uVar23,bVar6) + -0x1b7e07);
        *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
        iVar15 = (int)param_1 - *(int *)pbVar12;
        bVar6 = *(byte *)((int)puVar39 + -0x7a);
        uVar30 = (undefined2)((uint)iVar15 >> 0x10);
        *(char *)piVar18 = *(char *)piVar18 + (char)piVar18;
        bVar5 = (char)((uint)iVar15 >> 8) + bVar6 | *(byte *)((int)puVar39 + 0x17);
        *(char *)piVar18 = *(char *)piVar18 + (char)piVar18;
        uVar23 = (undefined3)(CONCAT22(uVar30,CONCAT11(bVar5,(byte)iVar15)) >> 8);
        bVar6 = (byte)iVar15 | *pbVar12;
        param_1 = (uint *)CONCAT31(uVar23,bVar6);
        pbVar9 = (byte *)((int)piVar18 + *piVar18);
        puVar20 = puVar37;
        if (SCARRY4((int)piVar18,*piVar18)) goto code_r0x00402e0a;
        *(byte *)param_1 = (byte)*param_1 + bVar6;
        *(byte **)pbVar12 = (byte *)(*(int *)pbVar12 + (int)puVar14);
        piVar18 = (int *)CONCAT31(uVar23,bVar6 + 0x27);
        param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar5 + *(byte *)((int)puVar39 + -0x79),bVar6));
        *(byte *)piVar18 = (char)*piVar18 + bVar6 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar33 = (char *)CONCAT22(uVar36,CONCAT11(bVar35 | *(byte *)((int)unaff_EBP + -0x62),cVar34));
  } while( true );
code_r0x00402dff:
  pbVar9 = (byte *)CONCAT22((short)((uint)piVar18 >> 0x10),
                            CONCAT11((byte)((uint)piVar18 >> 8) |
                                     *(byte *)((int)puVar14 + 0x2170411),(byte)piVar18));
  puVar20 = puVar37 + (uint)bVar44 * -2 + 1;
  out(*puVar37,(short)puVar14);
  *pbVar9 = (byte)piVar18;
  *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar9;
  *pbVar9 = *pbVar9 - cVar34;
  *pbVar9 = *pbVar9 + (char)pbVar9;
  bVar43 = false;
  bVar5 = (byte)((uint)param_1 >> 8) | bRam052b0603;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar5,(char)param_1));
  puVar37 = puVar20;
code_r0x00402e19:
  if (bVar5 == 0 || bVar43 != (char)bVar5 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cRam89280411;
  piVar18 = (int *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                            CONCAT11((byte)((uint)pbVar9 >> 8) | *(byte *)((int)puVar14 + 0x7190411)
                                     ,cRam89280411));
  *(char *)piVar18 = (char)*piVar18 + cRam89280411;
  cVar7 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar14,cVar7));
  puVar37 = (uint *)((int)puVar37 + *piVar18);
  pbVar9 = (byte *)((int)piVar18 + *piVar18);
  bVar5 = (byte)pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  *(byte *)puVar37 = (byte)*puVar37 + cVar7;
  bVar6 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  *(char **)pbVar9 = (char *)((int)unaff_EBP + (uint)CARRY1(bVar6,bVar5) + *(int *)pbVar9);
  piVar18 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),*pbVar9);
  *(byte *)puVar14 = (byte)*puVar14 + cVar7;
  puVar20 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(byte)puVar14 | (byte)*puVar14);
  pbVar9 = (byte *)((int)puVar20 + -0x43);
  *pbVar9 = *pbVar9 + (char)((uint)puVar14 >> 8);
  puVar14 = puVar20;
  puVar20 = puVar39;
  uVar42 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar39 = puVar20;
  in_SS = in_ES;
  if (SCARRY4((int)piVar18,*piVar18)) goto code_r0x00402e6e;
  iVar15 = *(int *)((int)piVar18 + *piVar18);
  *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
  piVar18 = (int *)(iVar15 + -0x8c6f);
  puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                             CONCAT11((byte)((uint)puVar14 >> 8) | *(byte *)((int)puVar14 + -0x3f),
                                      (char)puVar14));
  pbVar19 = (byte *)((int)piVar18 + *piVar18);
  pbVar9 = pbVar19;
  puVar39 = unaff_retaddr;
  if (SCARRY4((int)piVar18,*piVar18)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar19 = *pbVar19 + (char)pbVar19;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar14,(char)param_1));
  puVar20 = puVar37 + (uint)bVar44 * -2 + 1;
  out(*puVar37,(short)puVar14);
  puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + (byte)*puVar39);
  puVar37 = puVar20 + (uint)bVar44 * -2 + 1;
  out(*puVar20,(short)puVar14);
  uVar42 = in_ES;
  in_SS = uVar41;
code_r0x00402e6e:
  in_ES = uVar42;
  uVar23 = (undefined3)((uint)puVar14 >> 8);
  cVar7 = (char)puVar14 + (byte)*puVar39;
  puVar20 = puVar37 + (uint)bVar44 * -2 + 1;
  out(*puVar37,(short)CONCAT31(uVar23,cVar7));
  puVar14 = (uint *)CONCAT31(uVar23,cVar7 + (byte)*puVar39);
  puVar37 = puVar20 + (uint)bVar44 * -2 + 1;
  out(*puVar20,(short)puVar14);
  pbVar9 = (byte *)0x0;
  puVar20 = puVar39;
code_r0x00402e81:
  puVar39 = puVar20;
  bVar5 = (char)pbVar9 - *pbVar9;
  iVar15 = CONCAT31((int3)((uint)pbVar9 >> 8),bVar5);
  *pbVar12 = *pbVar12 + (char)puVar14;
  pbVar19 = (byte *)(iVar15 * 2);
  *pbVar19 = *pbVar19 ^ bVar5;
  pbVar19 = (byte *)(int)(short)iVar15;
  *pbVar19 = *pbVar19 + bVar5;
  *(byte *)puVar39 = (byte)*puVar39 + (byte)param_1;
  bVar6 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar5;
  *(byte **)(pbVar12 + -0x73) =
       (byte *)((int)puVar37 + (uint)CARRY1(bVar6,bVar5) + *(int *)(pbVar12 + -0x73));
  *pbVar19 = *pbVar19 + bVar5;
  bVar6 = (byte)param_1 | (byte)*puVar14;
  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar6);
  puVar20 = puVar37;
  if ((char)bVar6 < '\x01') goto code_r0x00402eb4;
  *pbVar19 = *pbVar19 + bVar5;
  pbVar9 = (byte *)CONCAT31((int3)(char)((uint)pbVar9 >> 8),bVar5 + 0x2d);
  puVar37[(int)puVar39 * 2] =
       (uint)((int)puVar14 + (uint)(0xd2 < bVar5) + puVar37[(int)puVar39 * 2]);
  puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar41);
  do {
    uVar10 = *puVar37;
    bVar6 = (byte)pbVar9;
    *(byte *)puVar37 = (byte)*puVar37 + bVar6;
    if (!CARRY1((byte)uVar10,bVar6)) break;
    *pbVar9 = *pbVar9 + bVar6;
    bVar6 = bVar6 | pbVar9[0x400001a];
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
    if ((char)bVar6 < '\x01') {
code_r0x00402ecc:
      *pbVar19 = *pbVar19 + (byte)pbVar19;
      uVar23 = (undefined3)((uint)pbVar19 >> 8);
      bVar6 = (byte)pbVar19 | pbVar19[0x400001b];
      pcVar16 = (char *)CONCAT31(uVar23,bVar6);
      if ((char)bVar6 < '\x01') {
        uVar10 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + (byte)param_1;
        *(char *)((int)pcVar16 * 2) =
             *(char *)((int)pcVar16 * 2) - CARRY1((byte)uVar10,(byte)param_1);
        bVar43 = 0x81 < bVar6;
        bVar6 = bVar6 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar19 = *pbVar19 + bVar6;
      puVar20 = puVar37;
code_r0x00402eb4:
      uVar23 = (undefined3)((uint)pbVar19 >> 8);
      bVar6 = (char)pbVar19 + 0x6f;
      pcVar16 = (char *)CONCAT31(uVar23,bVar6);
      *(uint **)pcVar16 = puStack_1c;
      uVar10 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + (char)param_1;
      puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar41);
      uVar40 = uVar41;
      if ((byte)*puVar14 != 0 && SCARRY1((byte)uVar10,(char)param_1) == (char)(byte)*puVar14 < '\0')
      {
        *pcVar16 = *pcVar16 + bVar6;
        bVar5 = (char)pbVar19 + 0x9c;
        pbVar19 = (byte *)CONCAT31(uVar23,bVar5);
        puVar20[(int)puVar39 * 2] =
             (uint)((int)puVar14 + (uint)(0xd2 < bVar6) + puVar20[(int)puVar39 * 2]);
        puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar41);
        uVar10 = *puVar20;
        *(byte *)puVar20 = (byte)*puVar20 + bVar5;
        puVar37 = puVar20;
        if (CARRY1((byte)uVar10,bVar5)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar37 = puVar20 + (uint)bVar44 * -2 + 1;
      out(*puVar20,(short)puVar14);
    }
    cVar7 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar7;
    uVar23 = (undefined3)((uint)pcVar16 >> 8);
    bVar6 = cVar7 + 0x6f;
    pcVar16 = (char *)CONCAT31(uVar23,bVar6);
    *(uint **)pcVar16 = puStack_1c;
    uVar10 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + (byte)param_1;
    puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar41);
    *(byte *)(puVar37 + 7) = ((byte)puVar37[7] - bVar35) - CARRY1((byte)uVar10,(byte)param_1);
    *pcVar16 = *pcVar16 + bVar6;
    bVar5 = cVar7 + 0x9c;
    pcVar16 = (char *)CONCAT31(uVar23,bVar5);
    puVar37[(int)puVar39 * 2] =
         (uint)((int)puVar14 + (uint)(0xd2 < bVar6) + puVar37[(int)puVar39 * 2]);
    uVar10 = *puVar37;
    *(byte *)puVar37 = (byte)*puVar37 + bVar5;
    if (!CARRY1((byte)uVar10,bVar5)) goto code_r0x00402e7e;
    *pcVar16 = *pcVar16 + bVar5;
    bVar5 = bVar5 | pcVar16[0x400001c];
    pbVar9 = (byte *)CONCAT31(uVar23,bVar5);
    in_SS = uVar41;
    if ((char)bVar5 < '\x01') goto code_r0x00402f16;
    *pbVar9 = *pbVar9 + bVar5;
    pcVar16 = (char *)CONCAT31(uVar23,bVar5 + 0x6f);
    while( true ) {
      *(uint **)pcVar16 = puStack_1c;
      uVar10 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + (byte)param_1;
      *(uint *)((int)puVar37 + 0x1d) =
           (*(int *)((int)puVar37 + 0x1d) - (int)puVar39) - (uint)CARRY1((byte)uVar10,(byte)param_1)
      ;
      bVar6 = (byte)pcVar16;
      *pcVar16 = *pcVar16 + bVar6;
      bVar5 = bVar6 + 0x2d;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar5);
      puVar37[(int)puVar39 * 2] =
           (uint)((int)puVar14 + (uint)(0xd2 < bVar6) + puVar37[(int)puVar39 * 2]);
      puStack_1c = (uint *)CONCAT22((short)((uint)puStack_1c >> 0x10),uVar41);
      uVar10 = *puVar37;
      *(byte *)puVar37 = (byte)*puVar37 + bVar5;
      if (!CARRY1((byte)uVar10,bVar5)) break;
      *pbVar9 = *pbVar9 + bVar5;
code_r0x00402f16:
      bVar6 = (byte)pbVar9 | pbVar9[0x400001d];
      puVar21 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
      puVar20 = unaff_EBP;
      if ((char)bVar6 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = puVar20;
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        uVar23 = (undefined3)((uint)puVar21 >> 8);
        cVar7 = (char)puVar21 + 'o';
        puVar20 = (uint *)CONCAT31(uVar23,cVar7);
        *puVar20 = (uint)puStack_1c;
        cVar8 = (char)param_1;
        *(byte *)puVar14 = (byte)*puVar14 + cVar8;
        puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar41);
        bVar6 = (byte)((uint)puVar14 >> 8);
        bVar43 = bVar6 < (byte)*puVar37;
        puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                   CONCAT11(bVar6 - (byte)*puVar37,(char)puVar14));
        if (bVar43) break;
        bVar43 = CARRY4((uint)puVar20,*puVar20);
        puVar21 = (uint *)((int)puVar20 + *puVar20);
        if (!SCARRY4((int)puVar20,*puVar20)) {
          bVar43 = CARRY4((uint)unaff_EBP,*puVar21);
          unaff_EBP = (uint *)((int)unaff_EBP + *puVar21);
        }
        *puVar21 = (*puVar21 - (int)puVar21) - (uint)bVar43;
        *(byte *)puVar14 = (byte)*puVar14 + cVar8;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((char)((uint)param_1 >> 8) + (byte)*puVar14,
                                            cVar8 - (byte)*puVar14));
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402f3b:
        cVar8 = (char)puVar14;
        *pbVar12 = *pbVar12 + cVar8;
        bVar6 = (byte)puVar21;
        *(byte *)((int)puVar21 * 2) = *(byte *)((int)puVar21 * 2) ^ bVar6;
        *(byte *)puVar21 = (byte)*puVar21 + bVar6;
        *(byte *)puVar21 = (byte)*puVar21 + cVar8;
        uVar10 = *puVar21;
        *(byte *)puVar21 = (byte)*puVar21 + bVar6;
        *puVar14 = (uint)((int)puVar21 + (uint)CARRY1((byte)uVar10,bVar6) + *puVar14);
        pcVar16 = (char *)((uint)puVar21 | *puVar39);
        uVar23 = (undefined3)((uint)pcVar16 >> 8);
        cVar7 = (char)pcVar16 + *pcVar16;
        pcVar16 = (char *)CONCAT31(uVar23,cVar7);
        *pcVar16 = *pcVar16 + cVar7;
        cVar7 = cVar7 + *pcVar16;
        piVar18 = (int *)CONCAT31(uVar23,cVar7);
        *(char *)piVar18 = (char)*piVar18 + cVar7;
        iVar15 = LocalDescriptorTableRegister();
        *piVar18 = iVar15;
        bVar6 = *pbVar12;
        bVar28 = (byte)((uint)param_1 >> 8);
        *pbVar12 = *pbVar12 + bVar28;
        iVar15 = *piVar18;
        uVar30 = (undefined2)((uint)param_1 >> 0x10);
        bVar27 = (byte)param_1;
        *(byte *)puVar37 = (byte)*puVar37 + cVar7;
        puVar20 = puVar37 + (uint)bVar44 * -2 + 1;
        out(*puVar37,(short)puVar14);
        *(byte *)puVar20 = (byte)*puVar20 + cVar7;
        bVar5 = *pbVar12;
        *(byte *)puVar14 = (byte)*puVar14 - bVar35;
        *(byte *)puVar20 = (byte)*puVar20 + cVar7;
        puVar38 = puVar20 + (uint)bVar44 * -2 + 1;
        out(*puVar20,(short)puVar14);
        *(byte *)puVar38 = (byte)*puVar38 + cVar7;
        bVar31 = *pbVar12;
        *(uint *)((int)puVar14 + -0x23) = *(uint *)((int)puVar14 + -0x23) & (uint)puVar38;
        puVar22 = (ushort *)((int)piVar18 + *piVar18);
        if (!SCARRY4((int)piVar18,*piVar18)) {
          *puVar22 = uVar40;
        }
        *(char *)puVar22 = (char)*puVar22 + (char)puVar22;
        uVar32 = CONCAT11((char)((uint)puVar14 >> 8) + *(byte *)((int)puVar14 + -0x15),cVar8);
        puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),uVar32);
        puVar21 = (uint *)((int)puVar22 + *(int *)puVar22);
        if (!SCARRY4((int)puVar22,*(int *)puVar22)) {
          *(ushort *)puVar21 = uVar40;
        }
        cVar7 = (char)puVar21;
        *(byte *)puVar21 = (byte)*puVar21 + cVar7;
        cVar29 = ((bVar28 - (char)iVar15) - CARRY1(bVar6,bVar28) | bVar5 | bVar31) + (byte)*puVar21;
        param_1 = (uint *)CONCAT22(uVar30,CONCAT11(cVar29,bVar27));
        uVar10 = *puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + bVar27;
        if (CARRY1((byte)uVar10,bVar27)) {
          *(byte *)puVar21 = (byte)*puVar21 + cVar7;
          bVar6 = *(byte *)((int)puVar14 + 6);
          *(byte *)puVar14 = (byte)*puVar14 + bVar27;
          bVar5 = (cVar29 - (byte)*puVar38) + cRam14730307;
          *(byte *)puVar21 = (byte)*puVar21 + cVar7;
          bVar6 = bVar35 | bVar6 | *(byte *)((int)puVar14 + 0x2a);
          uVar10 = *puVar21;
          pbVar9 = (byte *)((int)puVar21 + (uint)CARRY1(bVar5,(byte)*puVar21) + *puVar21);
          *(byte *)puVar14 = (byte)*puVar14 + bVar27;
          cVar7 = cVar34 - (byte)*puVar38;
          cVar34 = bVar6 + *(char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar6,cVar34)) >> 8),
                                              cVar7) + 0x1e);
          *pbVar9 = *pbVar9 + (char)pbVar9;
          uVar23 = (undefined3)((uint)pbVar9 >> 8);
          bVar6 = (char)pbVar9 + 0x2aU & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar16 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar7)) + 0x1f);
          *pcVar16 = *pcVar16 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar16 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar7)) + 0x20);
          *pcVar16 = *pcVar16 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar16 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar7)) + 0x21);
          *pcVar16 = *pcVar16 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar16 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar7)) + 0x22);
          *pcVar16 = *pcVar16 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar16 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          bVar5 = bVar5 + (byte)uVar10 + *pcVar16;
          uVar25 = CONCAT22(uVar30,CONCAT11(bVar5,bVar27));
          cVar34 = cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar34,cVar7)) + 0x25);
          *pcVar16 = *pcVar16 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pcVar16 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
          pcVar33 = (char *)CONCAT22(uVar36,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar36,CONCAT11(
                                                  cVar34,cVar7)) + 0x26),cVar7));
          *pcVar16 = *pcVar16 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          cVar7 = bVar6 + 0x2a;
          pcVar16 = (char *)CONCAT31(uVar23,cVar7);
          if ((POPCOUNT(cVar7) & 1U) == 0) {
            *pcVar16 = *pcVar16 + cVar7;
            pbVar9 = (byte *)(CONCAT31(uVar23,bVar6 + 0x4f) + -0x33282610);
            bVar6 = *pbVar9;
            bVar31 = (byte)pbVar9;
            *pbVar9 = *pbVar9 + bVar31;
            uVar23 = (undefined3)((uint)pbVar9 >> 8);
            if (!CARRY1(bVar6,bVar31)) {
              if (!SCARRY1(bVar31,'\0')) {
                *pbVar9 = *pbVar9 + bVar31;
                uVar25 = CONCAT22(uVar30,CONCAT11(bVar5 | (byte)*puVar14,bVar27));
                bVar31 = bVar31 & (byte)*puVar14;
                *(char *)CONCAT31(uVar23,bVar31) = *(char *)CONCAT31(uVar23,bVar31) + bVar31;
                pcVar16 = (char *)CONCAT31(uVar23,bVar31 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar16 = (char *)CONCAT31(uVar23,bVar31 + *pcVar33);
              if (SCARRY1(bVar31,*pcVar33) != (char)(bVar31 + *pcVar33) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar6 = bVar31 + *pcVar33;
            pbVar9 = (byte *)CONCAT31(uVar23,bVar6);
            if (SCARRY1(bVar31,*pcVar33) == (char)bVar6 < '\0') {
              pcVar16 = (char *)CONCAT22(uVar30,CONCAT11(bVar5 | (byte)*puVar14,bVar27));
              *pcVar33 = *pcVar33 + cVar8;
              *(byte *)puVar14 = (byte)*puVar14 ^ bVar6;
              *(char *)((int)pbVar9 * 2) = *(char *)((int)pbVar9 * 2) + bVar6;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar16 = *pcVar16 + (char)pcVar16;
            uVar23 = (undefined3)((uint)pcVar16 >> 8);
            bVar6 = (char)pcVar16 + 0x2aU & (byte)*puVar14;
            *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
            pcVar16 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
            *pcVar16 = *pcVar16 + bVar6 + 0x2a;
            pcVar16 = (char *)CONCAT31(uVar23,bVar6 + 0x54 & (byte)*puVar14);
code_r0x00403072:
            cVar7 = (char)pcVar16;
            *pcVar16 = *pcVar16 + cVar7;
            uVar23 = (undefined3)((uint)pcVar16 >> 8);
            pcVar16 = (char *)CONCAT31(uVar23,cVar7 + '*');
            *pcVar16 = *pcVar16 + cVar7 + '*';
            bVar6 = cVar7 + 0x54U & (byte)*puVar14;
            *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
            pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,in_ES);
            uVar25 = CONCAT22((short)((uint)uVar25 >> 0x10),
                              CONCAT11((char)((uint)uVar25 >> 8) +
                                       *(char *)CONCAT31(uVar23,bVar6 + 0x2a),(char)uVar25));
            *(byte *)(puVar38 + 0x828000) = (byte)puVar38[0x828000] - cVar8;
            pcVar16 = pcStack_54;
code_r0x0040309a:
            cVar7 = (char)pcVar16;
            *pcVar16 = *pcVar16 + cVar7;
            pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,uVar41);
            *pcVar16 = *pcVar16 + cVar7;
            pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar7 + 0x2aU & (byte)*puVar14);
          }
          cVar7 = (char)pbVar9;
          *pbVar9 = *pbVar9 + cVar7;
          uVar23 = (undefined3)((uint)pbVar9 >> 8);
          cVar34 = cVar7 + '*';
          pcVar16 = (char *)CONCAT31(uVar23,cVar34);
          *(byte *)(puVar38 + 0x828000) = (byte)puVar38[0x828000] - cVar8;
          *pcVar16 = *pcVar16 + cVar34;
          cVar29 = (char)pcStack_54 - (byte)*puVar38;
          pcVar33 = (char *)CONCAT22((short)((uint)pcStack_54 >> 0x10),
                                     CONCAT11((char)((uint)pcStack_54 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_54 >> 8),
                                                                 cVar29) + 0x34),cVar29));
          *pcVar16 = *pcVar16 + cVar34;
          bVar6 = cVar7 + 0x54U & (byte)*puVar14;
          *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
          pbVar9 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
          bVar6 = (byte)((uint)uVar25 >> 8);
          pcVar16 = (char *)CONCAT22((short)((uint)uVar25 >> 0x10),
                                     CONCAT11(bVar6 + *pbVar9,(char)uVar25));
          pbVar9 = pbVar9 + (uint)CARRY1(bVar6,*pbVar9) + *(int *)pbVar9;
          *(byte *)puVar14 = (byte)*puVar14 + (char)uVar25;
          uVar23 = (undefined3)((uint)pbVar9 >> 8);
          cVar7 = (byte)pbVar9 - *pbVar9;
          piVar18 = (int *)CONCAT31(uVar23,cVar7);
          puVar38 = (uint *)((int)puVar38 + (uint)((byte)pbVar9 < *pbVar9) + *piVar18);
          cVar7 = cVar7 + (char)*piVar18;
          pbVar9 = (byte *)CONCAT31(uVar23,cVar7);
          *pbVar9 = *pbVar9 + cVar7;
code_r0x004030df:
          *pcVar16 = *pcVar16 + cVar8;
          bVar6 = *pbVar9;
          bVar5 = (byte)pbVar9;
          *pbVar9 = *pbVar9 + bVar5;
          *(byte **)(pcVar33 + -0x41) =
               (byte *)((int)puVar38 + (uint)CARRY1(bVar6,bVar5) + *(int *)(pcVar33 + -0x41));
          *pbVar9 = *pbVar9 + bVar5;
          uVar23 = (undefined3)((uint)pbVar9 >> 8);
          bVar5 = bVar5 | (byte)*puVar38;
          *(char *)CONCAT31(uVar23,bVar5) = *(char *)CONCAT31(uVar23,bVar5) + bVar5;
          pcVar16 = (char *)CONCAT31(uVar23,bVar5 + 0x7b);
          *pcVar16 = *pcVar16 + bVar5 + 0x7b;
          pbVar9 = (byte *)((int)puVar38 + CONCAT31(uVar23,bVar5 - 8) + -1);
          *pbVar9 = *pbVar9 + (bVar5 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar37 = puVar38 + (uint)bVar44 * -2 + 1;
        out(*puVar38,uVar32);
        puVar20 = (uint *)((int)unaff_EBP + 1);
        puStack_1c = unaff_EBP;
      }
      bVar6 = cVar7 - bVar43;
      pbVar9 = (byte *)((int)puVar37 + (int)puVar39 * 2);
      bVar43 = CARRY1(*pbVar9,bVar6);
      *pbVar9 = *pbVar9 + bVar6;
code_r0x00402ef9:
      pcVar16 = (char *)CONCAT31(uVar23,bVar6 - bVar43);
      pbVar9 = (byte *)((int)puVar39 + (int)unaff_EBP * 2);
      *pbVar9 = *pbVar9 + (bVar6 - bVar43);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)param_1 = (byte)*param_1 + (char)puVar14;
  puVar20 = puVar14 + 0x2828000;
  bVar6 = (byte)param_1;
  bVar43 = (byte)*puVar20 < bVar6;
  *(byte *)puVar20 = (byte)*puVar20 - bVar6;
  bVar6 = (byte)pbVar9 + *pbVar9;
  piVar18 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6 + bVar43);
  puVar20 = puVar39;
  uVar42 = in_ES;
  if (CARRY1((byte)pbVar9,*pbVar9) || CARRY1(bVar6,bVar43)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar16 = *pcVar16 + bVar5;
  uVar42 = in_ES;
  in_SS = uVar41;
  goto code_r0x00402e6e;
}


