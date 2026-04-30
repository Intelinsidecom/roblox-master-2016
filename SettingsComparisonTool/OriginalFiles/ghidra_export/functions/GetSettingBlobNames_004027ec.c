/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004027ec
 * Raw Name    : GetSettingBlobNames
 * Demangled   : GetSettingBlobNames
 * Prototype   : pointer GetSettingBlobNames(byte * reader, byte * param_2, int param_3)
 * Local Vars  : in_DS, in_GS_OFFSET, in_CF, bVar52, in_AF, in_TF, in_IF, bVar53, bVar54, in_NT, uVar55, unaff_retaddr, in_stack_fffffff8, param_2, param_3, reader, pcStackY_80, pbStackY_48, puStackY_34, puStackY_30, uStackY_2c, uStack_c, iVar1, uVar2, pcVar3, uVar4, uVar5, uVar6, cVar7, bVar8, cVar9, bVar10, cVar11, in_EAX, uVar12, pbVar13, pbVar14, pcVar15, uVar16, uVar17, puVar18, piVar19, iVar20, pcVar21, puVar22, piVar23, pbVar24, puVar25, uVar26, iVar27, extraout_ECX, extraout_ECX_00, extraout_ECX_01, extraout_ECX_02, uVar28, cVar29, bVar30, bVar31, cVar32, uVar33, uVar34, uVar35, pbVar36, pbVar37, puVar38, uVar39, uVar40, unaff_EBX, pcVar41, puVar42, bVar43, bVar44, unaff_EBP, unaff_ESI, puVar45, unaff_EDI, puVar46, puVar47, in_ES, uVar48, uVar49, in_CS, uVar50, in_SS, uVar51
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

undefined * __fastcall GetSettingBlobNames(byte *reader,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  ushort uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  undefined3 uVar26;
  uint uVar12;
  byte *pbVar13;
  int3 iVar27;
  char *in_EAX;
  byte *pbVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  int iVar20;
  char *pcVar21;
  uint *puVar22;
  int *piVar23;
  byte *pbVar24;
  ushort *puVar25;
  char cVar29;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar30;
  byte bVar31;
  char cVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  undefined4 uVar28;
  undefined2 uVar35;
  byte *pbVar36;
  undefined3 uVar39;
  byte *pbVar37;
  uint *puVar38;
  undefined1 uVar40;
  byte bVar43;
  byte bVar44;
  undefined4 unaff_EBX;
  char *pcVar41;
  uint *puVar42;
  byte *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar45;
  byte *unaff_EDI;
  uint *puVar46;
  uint *puVar47;
  ushort in_ES;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort in_CS;
  ushort uVar51;
  ushort in_SS;
  ushort in_DS;
  int in_GS_OFFSET;
  char in_CF;
  bool bVar52;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar53;
  bool bVar54;
  byte in_NT;
  undefined8 uVar55;
  byte *unaff_retaddr;
  char *pcStackY_80;
  byte *pbStackY_48;
  uint *puStackY_34;
  uint *puStackY_30;
  undefined4 uStackY_2c;
  ushort uStack_c;
  ushort in_stack_fffffff8;
  
  bVar53 = false;
                    /* .NET CLR Managed Code */
  pbVar14 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *in_EAX + in_CF);
  pbVar37 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBP[-0x6d],
                                      (char)unaff_EBX));
code_r0x004027f1:
  uVar51 = in_SS;
  cVar9 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar9;
  uVar26 = (undefined3)((uint)pbVar14 >> 8);
  cVar7 = cVar9 + '\x12';
  pcVar41 = (char *)CONCAT31(uVar26,cVar7);
  bVar10 = *pbVar37;
  *pbVar37 = *pbVar37 + cVar7;
  pbVar14 = unaff_retaddr;
  if (SCARRY1(bVar10,cVar7) != (char)*pbVar37 < '\0') {
    *pcVar41 = *pcVar41 + cVar7;
    cVar7 = cVar9 + '$';
    pcVar41 = (char *)CONCAT31(uVar26,cVar7);
    *pcVar41 = *pcVar41 + (char)((uint)reader >> 8);
    *pcVar41 = *pcVar41 + cVar7;
    bVar43 = (byte)((uint)pbVar37 >> 8) | unaff_EBP[-0x6e];
    pcVar15 = (char *)CONCAT22((short)((uint)pbVar37 >> 0x10),CONCAT11(bVar43,(char)pbVar37));
    *pcVar41 = *pcVar41 + cVar7;
    cRam0000917d = cRam0000917d + (char)param_2;
    bVar8 = cVar9 + 0x48;
    pcVar15[-0x6e] = pcVar15[-0x6e] + bVar43;
    *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
    bVar10 = cVar9 + 0x53U + *unaff_retaddr;
    cVar7 = bVar10 + (0xf4 < bVar8);
    cVar9 = cVar7 + *(char *)CONCAT31(uVar26,cVar7) +
            (CARRY1(cVar9 + 0x53U,*unaff_retaddr) || CARRY1(bVar10,0xf4 < bVar8));
    pcVar41 = (char *)CONCAT31(uVar26,cVar9);
    *pcVar15 = *pcVar15 - (char)unaff_retaddr;
    *pcVar41 = *pcVar41 + cVar9;
    pbVar37 = param_2 + -*(int *)param_2;
    *(char *)((int)pbVar37 * 5) = *(char *)((int)pbVar37 * 5) + bVar43;
    pcVar41[(int)unaff_EBP] = pcVar41[(int)unaff_EBP] + cVar9;
    *pcVar41 = *pcVar41 + cVar9;
    bVar8 = (byte)((uint)unaff_retaddr >> 8) | *pbVar37;
    uVar40 = (undefined1)param_3;
    cVar7 = (char)((uint)param_3 >> 8) + *(char *)(param_3 + 0xf);
    *pcVar41 = *pcVar41 + cVar9;
    bVar10 = cVar9 + 0x2aU & *pbVar37;
    iVar20 = *(int *)(unaff_EBP + 0xf);
    *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
    pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
    cVar7 = cVar7 + *(char *)(CONCAT22(param_3._2_2_,CONCAT11(cVar7,uVar40)) + 0x10);
    *pcVar41 = *pcVar41 + bVar10 + 0x2a;
    bVar10 = bVar10 + 0x54 & *pbVar37;
    iVar1 = *(int *)(unaff_EBP + 0x10);
    *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
    pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
    puVar42 = (uint *)CONCAT22(param_3._2_2_,
                               CONCAT11(cVar7 + *(char *)(CONCAT22(param_3._2_2_,
                                                                   CONCAT11(cVar7,uVar40)) + 0x11),
                                        uVar40));
    *pcVar41 = *pcVar41 + bVar10 + 0x2a;
    bVar10 = bVar10 + 0x54 & *pbVar37;
    puVar46 = (uint *)(unaff_EDI + *(int *)(unaff_EBP + 0x11) + iVar1 + iVar20);
    *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
    pbVar14 = (byte *)CONCAT31(uVar26,bVar10 + 0x2a);
    puVar22 = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),
                               CONCAT11(bVar8 + *pbVar14,(char)unaff_retaddr));
    uVar55 = CONCAT44(pbVar37,pbVar14 + (uint)CARRY1(bVar8,*pbVar14) + *(int *)pbVar14);
    do {
      puVar38 = (uint *)((ulonglong)uVar55 >> 0x20);
      *(byte *)puVar38 = (byte)*puVar38 + (char)puVar22;
      cVar9 = (char)puVar42 - (byte)*unaff_ESI;
      iVar20 = CONCAT22((short)((uint)puVar42 >> 0x10),
                        CONCAT11((char)((uint)puVar42 >> 8) +
                                 *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),cVar9) + 0x12),cVar9)
                       );
      *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
      uVar26 = (undefined3)((ulonglong)uVar55 >> 8);
      bVar10 = (char)uVar55 + 0x2aU & (byte)*puVar38;
      pcVar41 = (char *)CONCAT31(uVar26,bVar10);
      puVar46 = (uint *)((int)puVar46 + *(int *)(unaff_EBP + 0x12));
      *pcVar41 = *pcVar41 + bVar10;
      puVar18 = (uint *)CONCAT31(uVar26,bVar10 + 0x2a);
      uStack_c = in_DS;
get_Value:
      cVar9 = *(char *)(iVar20 + 0x13);
      *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
      uVar26 = (undefined3)((uint)puVar18 >> 8);
      bVar10 = (char)puVar18 + 0x2aU & (byte)*puVar38;
      pcVar41 = (char *)CONCAT31(uVar26,bVar10);
      puVar46 = (uint *)((int)puVar46 + *(int *)(unaff_EBP + 0x13));
      *pcVar41 = *pcVar41 + bVar10;
      pbVar14 = (byte *)CONCAT31(uVar26,bVar10 + 0x2a);
      bVar10 = (byte)((uint)puVar22 >> 8);
      bVar8 = bVar10 + *pbVar14;
      pbVar14 = pbVar14 + (uint)CARRY1(bVar10,*pbVar14) + *(int *)pbVar14;
      *(byte *)puVar38 = (byte)*puVar38 + (char)puVar22;
      puVar42 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar20 >> 0x10),
                                                 CONCAT11((char)((uint)iVar20 >> 8) + cVar9,
                                                          (char)iVar20)) >> 8),
                                 (char)iVar20 - (byte)*unaff_ESI);
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                 CONCAT11(bVar8 + *pbVar14,(char)puVar22));
      pbVar14 = pbVar14 + (uint)CARRY1(bVar8,*pbVar14) + *(int *)pbVar14;
      uVar50 = in_DS;
code_r0x00402898:
      *(byte *)puVar38 = (byte)*puVar38 + (char)puVar22;
      bVar10 = (byte)puVar38;
      uVar33 = CONCAT11((char)((uint)puVar38 >> 8) - (byte)*unaff_ESI,bVar10);
      pbVar37 = (byte *)CONCAT22((short)((uint)puVar38 >> 0x10),uVar33);
      pcVar41 = (char *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar42[-0x19],
                                          (char)puVar42));
      *pbVar14 = *pbVar14 + (char)pbVar14;
      pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),(char)pbVar14 + '\x03');
      puVar42 = unaff_ESI;
      do {
        unaff_ESI = puVar42 + 1;
        out(*puVar42,uVar33);
        pcVar41 = pcVar41 + -1;
        bVar8 = (byte)pbVar14;
        *pbVar14 = *pbVar14 + bVar8;
        puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                   CONCAT11((byte)((uint)puVar22 >> 8) | *pbVar37,(char)puVar22));
        *pbVar14 = *pbVar14 + bVar8;
        *pcVar41 = *pcVar41 + bVar10;
        *(byte *)((int)pbVar14 * 2) = *(byte *)((int)pbVar14 * 2) ^ bVar8;
        *pbVar14 = *pbVar14 + bVar8;
        *pbVar14 = *pbVar14 | bVar8;
        bVar52 = CARRY1((byte)*puVar22,bVar10);
        *(byte *)puVar22 = (byte)*puVar22 + bVar10;
        cVar9 = bVar8 + 10 + bVar52;
        pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar9);
        puVar42 = unaff_ESI;
      } while (bVar8 < 0xf6 && !CARRY1(bVar8 + 10,bVar52));
      *pbVar14 = *pbVar14 + cVar9;
      pcVar15 = (char *)((uint)pbVar14 | *puVar46);
      puVar42 = (uint *)CONCAT22((short)((uint)pcVar41 >> 0x10),
                                 CONCAT11((char)((uint)pcVar41 >> 8) + unaff_EBP[-100],(char)pcVar41
                                         ));
      *pcVar15 = *pcVar15 + (char)pcVar15;
      bVar10 = (char)pcVar15 + 7;
      uVar55 = CONCAT44(pbVar37,CONCAT31((int3)((uint)pcVar15 >> 8),bVar10));
code_r0x004028c8:
      puVar38 = (uint *)((ulonglong)uVar55 >> 0x20);
    } while ((POPCOUNT(bVar10) & 1U) != 0);
    *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
    puVar18 = (uint *)CONCAT31((int3)((ulonglong)uVar55 >> 8),(char)uVar55 + '-');
    unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)puVar38 + 0x3b));
    bVar52 = CARRY4(*puVar18,(uint)puVar18);
    uVar16 = *puVar18;
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    if (SCARRY4(uVar16,(int)puVar18)) {
      bVar52 = CARRY4(*puVar18,(uint)puVar18);
      bVar54 = SCARRY4(*puVar18,(int)puVar18);
      *puVar18 = (uint)(*puVar18 + (int)puVar18);
      bVar10 = POPCOUNT(*puVar18 & 0xff);
      if (bVar54) goto code_r0x004029be;
      goto code_r0x0040294c;
    }
    do {
      puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + bVar52);
      *(byte *)puVar38 = (byte)*puVar38 + (char)puVar22;
      bVar52 = (POPCOUNT((byte)*puVar38) & 1U) == 0;
      if (bVar52) goto code_r0x004028e2;
code_r0x004028db:
      if (!bVar52) {
        iVar20 = CONCAT31((int3)((uint)puVar42 >> 8),(char)puVar42 - (byte)*unaff_ESI);
        goto get_Value;
      }
      *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
      puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + 'r');
      uStack_c = (ushort)unaff_EBP;
code_r0x004028e2:
      uVar16 = *puVar18;
      *puVar18 = (uint)(*puVar18 + (int)puVar18);
      if (SCARRY4(uVar16,(int)puVar18)) {
        if (*puVar18 == 0 || SCARRY4(uVar16,(int)puVar18) != (int)*puVar18 < 0)
        goto code_r0x0040296d;
        goto code_r0x00402957;
      }
      puVar42 = (uint *)((int)puVar42 + -1);
      cVar9 = (char)puVar18;
      *(byte *)puVar18 = (byte)*puVar18 + cVar9;
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                 CONCAT11((byte)((uint)puVar22 >> 8) |
                                          *(byte *)((int)puVar22 + 0x16d7207),(char)puVar22));
      pbVar14 = (byte *)((int)puVar18 + 0x7d);
      bVar10 = *pbVar14;
      bVar43 = (byte)((uint)puVar38 >> 8);
      bVar8 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar43;
      uVar50 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY1(bVar8,bVar43) * 0x800 |
               (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
               (ushort)((char)*pbVar14 < '\0') * 0x80 | (ushort)(*pbVar14 == 0) * 0x40 |
               (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(*pbVar14) & 1U) == 0) * 4 |
               (ushort)CARRY1(bVar10,bVar43);
      *(byte *)puVar18 = (byte)*puVar18 + cVar9;
      pbVar14 = (byte *)(CONCAT31((int3)((uint)puVar18 >> 8),cVar9 + '+') ^ *puVar46);
      if ((POPCOUNT((uint)pbVar14 & 0xff) & 1U) != 0) goto code_r0x00402898;
      bVar10 = (byte)pbVar14;
      *pbVar14 = *pbVar14 + bVar10;
      puVar18 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar10 + 0x72);
      if (bVar10 < 0x8e && (byte)(bVar10 + 0x72) != '\0') {
        uVar49 = in_CS;
        if (SCARRY1(bVar10,'r')) goto code_r0x00402974;
      }
      else {
        *(byte *)((int)puVar18 + 0x6f) = *(byte *)((int)puVar18 + 0x6f) + bVar43;
      }
code_r0x00402905:
      in_ES = uVar50;
      uVar55 = CONCAT44(puVar38,puVar18);
      puVar42 = (uint *)((int)puVar42 + -1);
      cVar9 = (char)puVar18;
      *(byte *)puVar18 = (byte)*puVar18 + cVar9;
      bVar10 = (byte)((uint)puVar22 >> 8) | (byte)*puVar22;
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(bVar10,(char)puVar22));
      if ((char)bVar10 < '\x01') {
        *(byte *)puVar18 = (byte)*puVar18 + cVar9;
        puVar46 = (uint *)((int)puVar46 - *(int *)(unaff_EBP + -100));
        uVar50 = in_ES;
        goto code_r0x00402929;
      }
      *(byte *)puVar18 = (byte)*puVar18 + cVar9;
      uVar50 = 0x291c;
      uVar55 = func_0x7346291c();
      *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
      puVar22 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                                 (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar55 >> 0x20));
      puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,in_ES);
      uStackY_2c = puVar42;
      while( true ) {
        pcVar41 = (char *)((int)uVar55 * 2);
        *pcVar41 = *pcVar41 - (char)puVar22;
        uVar16 = *puVar42;
        cVar9 = (char)((uint)puVar22 >> 8);
        *(byte *)puVar42 = (byte)*puVar42 + cVar9;
        if (SCARRY1((byte)uVar16,cVar9) == (char)(byte)*puVar42 < '\0') {
          pbVar14 = (byte *)((int)puVar46 + (int)uVar55);
          *pbVar14 = *pbVar14 + (char)uVar55;
          bVar10 = *pbVar14;
          goto code_r0x004028c8;
        }
code_r0x00402929:
        puVar38 = (uint *)((ulonglong)uVar55 >> 0x20);
        cVar9 = (char)uVar55;
        *(char *)uVar55 = *(char *)uVar55 + cVar9;
        uVar26 = (undefined3)((ulonglong)uVar55 >> 8);
        bVar10 = cVar9 + 7;
        puVar18 = (uint *)CONCAT31(uVar26,bVar10);
        bVar8 = (byte)((ulonglong)uVar55 >> 0x28);
        if ((POPCOUNT(bVar10) & 1U) != 0) break;
        *(byte *)puVar18 = (byte)*puVar18 + bVar10;
        pcVar41 = (char *)CONCAT31(uVar26,cVar9 + '3');
        uVar33 = (undefined2)((uint)puVar42 >> 0x10);
        uVar40 = SUB41(puVar42,0);
        bVar10 = (char)((uint)puVar42 >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar10);
        puVar42 = (uint *)CONCAT22(uVar33,CONCAT11(bVar10,uVar40));
        *pcVar41 = *pcVar41 + cVar9 + '3';
        cVar7 = cVar9 + ':';
        puVar18 = (uint *)CONCAT31(uVar26,cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) {
          bVar10 = bVar10 | *(byte *)((int)puVar38 + 7);
          puVar42 = (uint *)CONCAT22(uVar33,CONCAT11(bVar10,uVar40));
          bVar52 = (POPCOUNT(bVar10) & 1U) == 0;
          goto code_r0x004028db;
        }
        *(byte *)puVar18 = (byte)*puVar18 + cVar7;
        puVar18 = (uint *)(CONCAT31(uVar26,cVar9 + 'b') & 0xffffff72 | 0x2d2b0000);
        pbVar14 = (byte *)((int)puVar18 + 0x72);
        bVar54 = SCARRY1(*pbVar14,bVar8);
        *pbVar14 = *pbVar14 + bVar8;
        bVar10 = POPCOUNT(*pbVar14);
code_r0x0040294c:
        if ((bVar10 & 1) == 0) {
          *(byte *)((int)puVar18 + 0x72) =
               *(byte *)((int)puVar18 + 0x72) + (char)((uint)puVar38 >> 8);
        }
        else if (bVar54) {
          unaff_EBP = *(byte **)unaff_EBP;
          cVar9 = cRamc9721806;
          goto code_r0x004029c4;
        }
        unaff_EBP = (byte *)0x7e700001;
        puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,uVar51);
code_r0x00402957:
        *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
        cVar9 = (char)puVar18 + '(';
        puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),cVar9);
        *(byte *)puVar18 = (byte)*puVar18 + cVar9;
        puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                   CONCAT11((byte)((uint)puVar22 >> 8) | (byte)*puVar18,
                                            (char)puVar22));
        *(byte *)puVar18 = (byte)*puVar18 + cVar9;
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                   CONCAT11((byte)((uint)puVar38 >> 8) | (byte)puVar42[0x18],
                                            (char)puVar38));
        unaff_ESI = puStackY_34;
        puVar46 = puStackY_30;
code_r0x00402966:
        *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
        bVar10 = (byte)((uint)puVar42 >> 8) | *(byte *)((int)puVar38 + 7);
        puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar10,(char)puVar42));
        if ((POPCOUNT(bVar10) & 1U) != 0) {
          puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + -0x21);
          goto code_r0x00402905;
        }
code_r0x0040296d:
        *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
        puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + '~');
        uVar48 = uVar51;
code_r0x00402972:
        *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
        uVar49 = in_CS;
        uVar50 = uVar48;
code_r0x00402974:
        bVar10 = 0xe9 < (byte)puVar18;
        in_CS = 0x2d0a;
        uVar55 = func_0x00006128(uVar49);
        puVar22 = (uint *)uVar55;
        piVar23 = (int *)((int)((ulonglong)uVar55 >> 0x20) + -0x3d);
        *piVar23 = (int)((int)unaff_ESI + (uint)bVar10 + *piVar23);
        bVar52 = SCARRY4(*puVar22,(int)puVar22);
        *puVar22 = *puVar22 + (int)puVar22;
        uVar16 = *puVar22;
        puVar22 = extraout_ECX_02;
        uVar48 = in_ES;
code_r0x00402982:
        bVar10 = POPCOUNT(uVar16 & 0xff);
        in_ES = uVar48;
        if (bVar52) {
          *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
          puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                     CONCAT11((byte)((uint)puVar22 >> 8) |
                                              *(byte *)((ulonglong)uVar55 >> 0x20),(char)puVar22));
          goto code_r0x00402991;
        }
code_r0x00402984:
        pcVar41 = (char *)((ulonglong)uVar55 >> 0x20);
        if ((bVar10 & 1) == 0) {
          *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
          *pcVar41 = *pcVar41 + (char)puVar22;
          uVar55 = CONCAT44(CONCAT22((short)((ulonglong)uVar55 >> 0x30),
                                     CONCAT11((char)((ulonglong)uVar55 >> 0x28) - pcVar41[0x1f],
                                              (char)((ulonglong)uVar55 >> 0x20))),
                            CONCAT31((int3)((ulonglong)uVar55 >> 8),(char)uVar55 + '('));
code_r0x00402991:
          puVar38 = (uint *)((ulonglong)uVar55 >> 0x20);
          pbVar14 = (byte *)uVar55;
          bVar10 = (byte)uVar55;
          bVar52 = CARRY1(bVar10,*pbVar14);
          puVar18 = (uint *)CONCAT31((int3)((ulonglong)uVar55 >> 8),bVar10 + *pbVar14);
          uVar48 = in_ES;
          cVar9 = bVar10 + *pbVar14;
          if (SCARRY1(bVar10,*pbVar14)) goto code_r0x004029c4;
code_r0x00402995:
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11(((char)((uint)puVar38 >> 8) -
                                              *(byte *)((int)puVar38 + 0x6b)) - bVar52,(char)puVar38
                                             ));
          bVar10 = (byte)puVar18;
          bVar52 = CARRY1(bVar10,(byte)*puVar18);
          bVar54 = SCARRY1(bVar10,(byte)*puVar18);
          puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar10 + (byte)*puVar18);
          in_ES = uVar48;
          do {
            uVar48 = in_ES;
            if (!bVar54) {
              unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar52 + *puVar18);
              pbVar14 = (byte *)((int)puVar18 + *puVar18);
              bVar8 = (byte)pbVar14;
              *pbVar14 = *pbVar14 + bVar8;
              *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
              bVar10 = *pbVar14;
              *pbVar14 = *pbVar14 + bVar8;
              *puVar46 = (uint)((int)puVar42 + (uint)CARRY1(bVar10,bVar8) + *puVar46);
              *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar22;
              uVar26 = (undefined3)((uint)pbVar14 >> 8);
              bVar8 = bVar8 | (byte)*unaff_ESI;
              puVar18 = (uint *)CONCAT31(uVar26,bVar8);
              uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar51);
              uVar16 = *puVar18;
              uVar12 = *puVar18;
              *puVar18 = (uint)(*puVar18 + (int)puVar18);
              if (SCARRY4(uVar12,(int)puVar18)) {
                *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)puVar42;
                *(byte *)puVar38 = (byte)*puVar38 + (char)puVar22;
                *(byte *)puVar46 = (byte)*puVar46 - (char)puVar42;
              }
              else {
                puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,in_ES);
                uVar51 = in_ES;
                if (CARRY4(uVar16,(uint)puVar18)) goto code_r0x00402972;
                bVar52 = CARRY1(bVar8,(byte)*puVar18);
                bVar54 = SCARRY1(bVar8,(byte)*puVar18);
                puVar18 = (uint *)CONCAT31(uVar26,bVar8 + (byte)*puVar18);
code_r0x004029be:
                uVar48 = in_ES;
                if (!bVar54) {
                  puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,in_ES);
                  *(byte *)((int)puVar38 + -0x37) =
                       (*(byte *)((int)puVar38 + -0x37) - (char)((uint)puVar38 >> 8)) - bVar52;
                  cVar9 = cRamc9721806;
code_r0x004029c4:
                  cRamc9721806 = cVar9;
                  bVar10 = (byte)puVar18;
                  bVar52 = CARRY1(bVar10,(byte)*puVar18);
                  bVar54 = SCARRY1(bVar10,(byte)*puVar18);
                  puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar10 + (byte)*puVar18);
                  uVar48 = in_ES;
                  goto code_r0x004029c6;
                }
              }
              bVar10 = (byte)puVar22;
              bVar52 = CARRY1((byte)*puVar38,bVar10);
              bVar54 = SCARRY1((byte)*puVar38,bVar10);
              *(byte *)puVar38 = (byte)*puVar38 + bVar10;
              in_ES = uVar48;
              if (bVar52) goto code_r0x00402966;
            }
code_r0x004029c6:
            in_ES = uStack_c;
            if (bVar54) goto code_r0x00402966;
            *(uint *)((int)puVar38 + -0x23) =
                 (*(int *)((int)puVar38 + -0x23) - (int)unaff_ESI) - (uint)bVar52;
            uVar16 = *puVar18;
            bVar8 = (byte)puVar18;
            uVar12 = *puVar18;
            uVar26 = (undefined3)((uint)puVar18 >> 8);
            bVar10 = bVar8 + (byte)*puVar18;
            puVar18 = (uint *)CONCAT31(uVar26,bVar10);
            in_ES = uVar48;
            if (SCARRY1(bVar8,(byte)uVar12)) goto code_r0x00402972;
            cVar9 = (char)puVar38;
            bVar43 = ((char)((uint)puVar38 >> 8) - *(byte *)((int)puVar38 + -0xf)) -
                     CARRY1(bVar8,(byte)uVar16);
            puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar43,cVar9));
            puVar45 = (uint *)CONCAT31(uVar26,bVar10 + (byte)*puVar18);
            bVar8 = (byte)puVar22;
            uVar50 = uVar48;
            if (SCARRY1(bVar10,(byte)*puVar18)) {
              *(byte *)puVar38 = (byte)*puVar38 + bVar8;
              uVar55 = CONCAT44(puVar38,(int)puVar45 + -0x1c37211);
              pcVar41 = (char *)((int)puVar45 + -0x1c3720a);
              *pcVar41 = *pcVar41 + bVar43;
              bVar10 = POPCOUNT(*pcVar41);
              goto code_r0x00402984;
            }
            unaff_ESI = (uint *)((int)unaff_ESI +
                                (-(uint)CARRY1(bVar10,(byte)*puVar18) - *(int *)((int)puVar38 + 5)))
            ;
            bVar52 = SCARRY4((int)puVar45,*puVar45);
            uVar16 = (int)puVar45 + *puVar45;
            uVar55 = CONCAT44(puVar38,uVar16);
            if (bVar52) goto code_r0x00402982;
            bVar10 = (byte)uVar16 + 0x8e;
            uVar17 = CONCAT31((int3)(uVar16 >> 8),bVar10 - CARRY4((uint)puVar45,*puVar45));
            *puVar42 = (*puVar42 - uVar17) -
                       (uint)((byte)uVar16 < 0x72 || bVar10 < CARRY4((uint)puVar45,*puVar45));
            pbVar14 = (byte *)(uVar17 - 0x5e);
            bVar10 = *pbVar14;
            *pbVar14 = *pbVar14 + bVar43;
            uVar16 = (uint)CARRY1(bVar10,bVar43);
            uVar12 = uVar17 - 0x32d72;
            puVar18 = (uint *)(uVar12 - uVar16);
            if (SBORROW4(uVar17,0x32d72) != SBORROW4(uVar12,uVar16)) goto code_r0x00402992;
            uVar49 = in_DS;
            if (uVar17 < 0x32d72 || uVar12 < uVar16) {
              *unaff_EBP = *unaff_EBP - (char)((uint)puVar18 >> 8);
              *(byte *)puVar38 = (byte)*puVar38 + bVar8;
              puVar45 = unaff_ESI + 1;
              out(*unaff_ESI,CONCAT11(bVar43,cVar9));
              *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
              goto code_r0x00402a3e;
            }
            bVar52 = CARRY4((uint)puVar18,*puVar18);
            bVar54 = SCARRY4((int)puVar18,*puVar18);
            puVar18 = (uint *)((int)puVar18 + *puVar18);
            if (!bVar54) {
              uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar48);
              *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar52;
              bVar10 = (byte)puVar18;
              *(byte *)((int)puVar38 + (int)unaff_EBP) =
                   *(byte *)((int)puVar38 + (int)unaff_EBP) + bVar10;
              *(byte *)puVar42 = (byte)*puVar42 + cVar9;
              *(byte *)puVar42 = (byte)*puVar42 ^ bVar10;
              bVar30 = (byte)((uint)puVar22 >> 8);
              *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar30;
              *(byte *)puVar18 = (byte)*puVar18 + bVar10;
              pbVar37 = (byte *)CONCAT31((int3)((uint)puVar18 >> 8),bVar10 | (byte)*puVar18);
              *(byte *)puVar22 = (byte)*puVar22 + cVar9;
              bVar44 = *pbVar37;
              uVar33 = (undefined2)((uint)puVar22 >> 0x10);
              puVar22 = (uint *)CONCAT22(uVar33,CONCAT11(bVar30 + bVar44,bVar8));
              pbVar37 = pbVar37 + (uint)CARRY1(bVar30,*pbVar37) + *(int *)pbVar37;
              *(byte *)puVar38 = (byte)*puVar38 + bVar8;
              unaff_EBP = unaff_EBP + iRam0355720b;
              pbVar14 = pbVar37 + 0x73;
              bVar10 = *pbVar14;
              *pbVar14 = *pbVar14 + bVar43;
              uVar26 = (undefined3)((uint)pbVar37 >> 8);
              bVar10 = (char)pbVar37 + CARRY1(bVar10,bVar43);
              pcVar41 = (char *)CONCAT31(uVar26,bVar10);
              *(byte *)puVar38 = (byte)*puVar38 + bVar8;
              if ((POPCOUNT((byte)*puVar38) & 1U) == 0) {
                uVar51 = uVar48;
              }
              puVar47 = (uint *)((int)puVar46 + *(int *)(unaff_EBP + 0x17));
              *pcVar41 = *pcVar41 + bVar10;
              cVar9 = bVar10 + 2;
              puVar18 = (uint *)CONCAT31(uVar26,cVar9);
              if (bVar10 < 0xfe) {
                *puVar18 = (uint)(*puVar18 + (int)puVar18);
                goto code_r0x00402a8f;
              }
              *(byte *)puVar18 = (byte)*puVar18 + cVar9;
              uVar16 = *puVar38;
              puVar45 = (uint *)((int)unaff_ESI + puVar42[0x19]);
              *(byte *)puVar18 = (byte)*puVar18 + cVar9;
              puVar22 = (uint *)CONCAT22(uVar33,CONCAT11(bVar30 + bVar44 | (byte)*puVar18,
                                                         bVar8 | (byte)uVar16));
              puVar46 = puVar47;
              goto code_r0x00402a36;
            }
          } while( true );
        }
      }
      unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar10;
      pbVar14 = (byte *)((int)puVar18 + 0x73);
      bVar52 = CARRY1(*pbVar14,bVar8);
      *pbVar14 = *pbVar14 + bVar8;
    } while( true );
  }
  do {
    cVar9 = (char)pcVar41 + '\x02';
    piVar23 = (int *)CONCAT31((int3)((uint)pcVar41 >> 8),cVar9);
    pbVar24 = reader;
    in_SS = uVar51;
    unaff_retaddr = param_2;
    if (SCARRY1((char)pcVar41,'\x02') != cVar9 < '\0') goto code_r0x00402724;
    while( true ) {
      unaff_retaddr = pbVar14;
      cVar9 = (char)piVar23;
      *(char *)piVar23 = (char)*piVar23 + cVar9;
      uVar26 = (undefined3)((uint)piVar23 >> 8);
      cVar7 = cVar9 + '\b';
      cVar11 = (char)param_2;
      *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar11;
      *param_2 = *param_2 + (char)pbVar24;
      uVar51 = (ushort)unaff_retaddr;
      unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
      *(char *)CONCAT31(uVar26,cVar7) = *(char *)CONCAT31(uVar26,cVar7) + cVar7;
      bVar10 = cVar9 + 10;
      pcVar41 = (char *)CONCAT31(uVar26,bVar10);
      if (SCARRY1(cVar7,'\x02') == (char)bVar10 < '\0') break;
      pbVar14 = unaff_EBP + 0x6fe1411;
      bVar52 = CARRY1(*pbVar14,bVar10);
      *pbVar14 = *pbVar14 + bVar10;
      reader = pbVar24;
      uVar51 = in_SS;
code_r0x00402740:
      uVar26 = (undefined3)((uint)pcVar41 >> 8);
      bVar10 = ((char)pcVar41 - *pcVar41) - bVar52;
      puVar46 = (uint *)CONCAT31(uVar26,bVar10);
      uVar16 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
      pbVar14 = reader;
      puVar22 = unaff_ESI;
      uVar50 = in_CS;
      if (CARRY1((byte)uVar16,bVar10)) {
        do {
          *(byte *)puVar46 = (char)*puVar46 + (byte)puVar46;
          uVar26 = (undefined3)((uint)puVar46 >> 8);
          bVar10 = (byte)puVar46 | *(byte *)((int)puVar46 + 0x400000e);
          pcVar41 = (char *)CONCAT31(uVar26,bVar10);
          unaff_ESI = puVar22;
          if ('\0' < (char)bVar10) {
            *pcVar41 = *pcVar41 + bVar10;
            bVar10 = bVar10 + 0x28 | *(byte *)CONCAT31(uVar26,bVar10 + 0x28);
            *pbVar37 = *pbVar37 + (char)((uint)pbVar14 >> 8);
            unaff_ESI = puVar22 + 1;
            out(*puVar22,(short)param_2);
            *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
            pcVar41 = (char *)(uint)(bVar10 | *param_2);
          }
          bVar10 = (byte)pcVar41 & 0x7b;
          bVar52 = (char)(bVar10 + 0x17) < '\0';
          pbVar24 = unaff_retaddr;
          if (SCARRY1(bVar10,'\x17') == bVar52) {
            pbVar13 = unaff_retaddr;
            if (SCARRY1(bVar10,'\x17') == bVar52) goto code_r0x00402697;
            goto code_r0x00402700;
          }
          cVar7 = (char)unaff_retaddr;
          *unaff_retaddr = *unaff_retaddr + cVar7;
          iVar27 = (int3)((uint)unaff_retaddr >> 8);
          cVar9 = cVar7 + '\x02';
          pbVar13 = (byte *)CONCAT31(iVar27,cVar9);
          bVar52 = (POPCOUNT(cVar9) & 1U) == 0;
          reader = pbVar14;
          in_CS = uVar50;
          if (bVar52) {
            *pbVar13 = *pbVar13 + cVar9;
            cVar7 = cVar7 + '\x04';
            pcVar41 = (char *)CONCAT31(iVar27,cVar7);
            if ((POPCOUNT(cVar7) & 1U) == 0) {
              *pcVar41 = *pcVar41 + cVar7;
              halt_baddata();
            }
            param_2 = (byte *)((int)iVar27 >> 0x17);
          }
          else {
            while( true ) {
              if (!bVar52) goto code_r0x0040269b;
              *pbVar13 = *pbVar13 + (char)pbVar13;
              cVar9 = (char)pbVar13 + '\x02';
              pcVar41 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar9);
              unaff_retaddr = unaff_EDI;
              if ((POPCOUNT(cVar9) & 1U) == 0) break;
              while( true ) {
                bVar10 = (byte)pcVar41;
                pbVar37[(int)param_2] = pbVar37[(int)param_2] + bVar10;
                uVar26 = (undefined3)((uint)pcVar41 >> 8);
                bVar8 = bVar10 + 2 + cRam001b15fe + (0xfd < bVar10);
                bVar10 = *pbVar37;
                bVar43 = (byte)pbVar37;
                *pbVar37 = *pbVar37 + bVar43;
                iRam00009a7d = iRam00009a7d + CONCAT31(uVar26,bVar8) + (uint)CARRY1(bVar10,bVar43);
                iVar20 = CONCAT31(uVar26,bVar8 + 2) + 0x917d + (uint)(0xfd < bVar8);
                cVar9 = (char)iVar20;
                uVar26 = (undefined3)((uint)iVar20 >> 8);
                bVar10 = cVar9 + 0x3a;
                pbVar24 = (byte *)CONCAT31(uVar26,bVar10);
                *pbVar24 = *pbVar24 + bVar10;
                uVar39 = (undefined3)((uint)param_2 >> 8);
                bVar8 = (byte)param_2 | *param_2;
                uVar12 = CONCAT31(uVar26,cVar9 + '8');
                uVar16 = uVar12 + 0x1b00001b;
                pcVar41 = (char *)(uVar16 + (1 < bVar10) + *unaff_ESI +
                                  (uint)(0xe4ffffe4 < uVar12 || CARRY4(uVar16,(uint)(1 < bVar10))));
                bVar10 = bVar8 + *reader;
                param_2 = (byte *)CONCAT31(uVar39,bVar10);
                uVar26 = (undefined3)((uint)pcVar41 >> 8);
                cVar9 = (char)pcVar41;
                if (SCARRY1(bVar8,*reader) == (char)bVar10 < '\0') {
                  unaff_EBP = unaff_EBP + -1;
                  *pcVar41 = *pcVar41 + cVar9;
                  param_2 = (byte *)CONCAT31(uVar39,bVar10 | *pbVar37);
                  bVar52 = 0xd7 < (byte)(cVar9 + 0x12U);
                  pbVar14 = (byte *)CONCAT31(uVar26,cVar9 + ':');
                  goto code_r0x00402674;
                }
                *pcVar41 = *pcVar41 + cVar9;
                pcVar41 = (char *)CONCAT31(uVar26,cVar9 + '\x02');
                uVar33 = (undefined2)((uint)pbVar37 >> 0x10);
                cVar11 = (char)((uint)pbVar37 >> 8) + pbVar37[-0x68];
                pbVar37 = (byte *)CONCAT22(uVar33,CONCAT11(cVar11,bVar43));
                *pcVar41 = *pcVar41 + cVar9 + '\x02';
                bVar8 = cVar9 + 0x2a;
                pbVar14 = (byte *)CONCAT31(uVar26,bVar8);
                *pbVar14 = *pbVar14 | bVar8;
                bVar10 = *pbVar37;
                cVar7 = (char)((uint)reader >> 8);
                *pbVar37 = *pbVar37 + cVar7;
                pbVar13 = unaff_retaddr;
                uVar50 = in_CS;
                if (SCARRY1(bVar10,cVar7) == (char)*pbVar37 < '\0') goto code_r0x00402680;
                *pbVar14 = *pbVar14 + bVar8;
                bVar10 = cVar9 + 0x2c;
                if ((POPCOUNT(bVar10) & 1U) == 0) break;
                uVar50 = 0x927c;
                uVar55 = func_0x02040000(in_CS,in_ES);
                param_2 = (byte *)((ulonglong)uVar55 >> 0x20);
                *(char *)uVar55 = *(char *)uVar55 + (char)uVar55;
                iVar20 = CONCAT31((int3)((ulonglong)uVar55 >> 8),(char)uVar55 + '\x12');
                pbVar14 = extraout_ECX_00;
                unaff_EDI = unaff_retaddr;
code_r0x00402693:
                cVar9 = (char)iVar20 + '\x02';
                *unaff_EDI = *unaff_EDI - cVar9;
                pbVar13 = (byte *)CONCAT31((int3)((uint)iVar20 >> 8),cVar9);
                in_stack_fffffff8 = in_CS;
code_r0x00402697:
                *pbVar13 = *pbVar13 + (char)pbVar13;
                param_2 = param_2 + -*unaff_ESI;
                reader = pbVar14;
                in_CS = uVar50;
code_r0x0040269b:
                pbVar37 = (byte *)CONCAT31((int3)((uint)pbVar37 >> 8),
                                           (byte)pbVar37 | (byte)((uint)reader >> 8));
                uVar28 = GlobalDescriptorTableRegister();
                *(undefined4 *)pbVar13 = uVar28;
                cVar9 = (char)pbVar13;
                *param_2 = *param_2 + cVar9;
                if ((POPCOUNT(*param_2) & 1U) != 0) {
code_r0x0040263f:
                  *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                  cVar9 = (char)unaff_EDI + '\x02';
                  pcVar41 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar9);
                  pbVar24 = unaff_EBP;
                  if ((POPCOUNT(cVar9) & 1U) == 0) {
                    *pcVar41 = *pcVar41 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  do {
                    pbVar14 = pbVar37 + (int)reader;
                    bVar10 = *pbVar14;
                    bVar8 = (byte)pcVar41;
                    *pbVar14 = *pbVar14 + bVar8;
                    uVar26 = (undefined3)((uint)pcVar41 >> 8);
                    cVar9 = bVar8 + *reader + CARRY1(bVar10,bVar8);
                    cVar9 = cVar9 + *(char *)CONCAT31(uVar26,cVar9) +
                            (CARRY1(bVar8,*reader) || CARRY1(bVar8 + *reader,CARRY1(bVar10,bVar8)));
                    pcVar41 = (char *)CONCAT31(uVar26,cVar9);
                    *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar9;
                    *pcVar41 = *pcVar41 + cVar9;
                    iVar20 = *(int *)param_2;
                    pbVar24[(int)pcVar41 * 4] =
                         pbVar24[(int)pcVar41 * 4] + (char)((uint)pbVar37 >> 8);
                    pcVar41[(int)pbVar24] = pcVar41[(int)pbVar24] + cVar9;
                    pbVar36 = param_2 + (-1 - iVar20);
                    *pcVar41 = *pcVar41 + cVar9;
                    reader = (byte *)CONCAT22((short)((uint)reader >> 0x10),
                                              CONCAT11(((byte)((uint)reader >> 8) | *pbVar36) +
                                                       pbVar13[0x22],(char)reader));
                    *pcVar41 = *pcVar41 + cVar9;
                    bVar43 = (char)pbVar36 - param_2[1 - iVar20];
                    bVar8 = cVar9 - 0xf;
                    pbVar14 = (byte *)CONCAT31(uVar26,bVar8);
                    param_2 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                               CONCAT11((char)((uint)pbVar36 >> 8) +
                                                        *(char *)(CONCAT31((int3)((uint)pbVar36 >> 8
                                                                                 ),bVar43) + -0x3f),
                                                        bVar43));
                    bVar52 = CARRY1(*pbVar14,bVar8);
                    bVar10 = *pbVar14;
                    *pbVar14 = *pbVar14 + bVar8;
                    unaff_EBP = pbVar24;
                    unaff_retaddr = pbVar13;
                    if (SCARRY1(bVar10,bVar8)) goto code_r0x00402674;
                    pbVar37 = pbVar37 + -1;
                    *pbVar14 = *pbVar14 + bVar8;
                    uVar16 = *unaff_ESI;
                    *reader = *reader + 1;
                    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),
                                               (bVar43 | (byte)uVar16) - (byte)*unaff_ESI);
                    unaff_ESI = (uint *)((int)unaff_ESI +
                                        (-(uint)(bVar8 < *pbVar14) -
                                        *(int *)CONCAT31(uVar26,bVar8 - *pbVar14)));
                    unaff_EBP = (byte *)CONCAT31(uVar26,bVar8 - *pbVar14);
                    *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
                    bVar8 = (byte)pbVar24;
                    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
                    bVar10 = *pbVar24;
                    *pbVar24 = *pbVar24 + bVar8;
                    *(byte **)pbVar13 = param_2 + (uint)CARRY1(bVar10,bVar8) + *(int *)pbVar13;
                    uVar26 = (undefined3)((uint)pbVar24 >> 8);
                    bVar8 = bVar8 | *param_2;
                    pcVar41 = (char *)CONCAT31(uVar26,bVar8);
                    if ((POPCOUNT(bVar8) & 1U) == 0) {
                      *pcVar41 = *pcVar41 + bVar8;
                      bVar10 = bVar8 + 0xd;
                      pbVar14 = (byte *)CONCAT31(uVar26,bVar10);
                      *unaff_ESI = *unaff_ESI | (uint)param_2;
                      if (-1 < (int)*unaff_ESI) goto code_r0x00402678;
                      *pbVar14 = *pbVar14 + bVar10;
                      pbVar37 = (byte *)CONCAT22((short)((uint)pbVar37 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar37 >> 8) |
                                                          unaff_EBP[-0x6b],(char)pbVar37));
                      *pbVar14 = *pbVar14 + bVar10;
                      cVar9 = bVar8 + 0xf;
                      pcVar41 = (char *)CONCAT31(uVar26,cVar9);
                      if (SCARRY1(bVar10,'\x02') == cVar9 < '\0') {
                        pcVar41 = pcVar41 + (0xfd < bVar10) + 0x847d;
                        goto code_r0x004025bd;
                      }
                      *pcVar41 = *pcVar41 + cVar9;
                      cVar7 = bVar8 + 0x11;
                      unaff_EDI = (byte *)CONCAT31(uVar26,cVar7);
                      uVar55 = CONCAT44(param_2,unaff_EDI);
                      if (SCARRY1(cVar9,'\x02') != cVar7 < '\0') goto code_r0x0040263f;
                      if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040255d;
                    }
                    else {
                      *pcVar41 = *pcVar41 + bVar8;
                      uVar55 = CONCAT44(param_2,pcVar41 + 0x12110000);
code_r0x0040255d:
                      while( true ) {
                        uVar51 = in_stack_fffffff8;
                        pcVar41 = (char *)((ulonglong)uVar55 >> 0x20);
                        piVar23 = (int *)uVar55;
                        *piVar23 = (int)((int)piVar23 + *piVar23);
                        uVar33 = (undefined2)((uint)pbVar37 >> 0x10);
                        uVar40 = SUB41(pbVar37,0);
                        cVar11 = (char)((uint)pbVar37 >> 8) + (char)((ulonglong)uVar55 >> 0x28);
                        pcVar15 = (char *)CONCAT22(uVar33,CONCAT11(cVar11,uVar40));
                        *piVar23 = (int)((int)piVar23 + *piVar23);
                        *pbVar13 = *pbVar13 + (char)((ulonglong)uVar55 >> 0x20);
                        cVar9 = (char)uVar55;
                        *(char *)piVar23 = (char)*piVar23 + cVar9;
                        *(char *)piVar23 = (char)*piVar23 + cVar9;
                        *(char *)piVar23 = (char)*piVar23 + cVar9;
                        *pcVar41 = *pcVar41 + cVar9;
                        *(char *)piVar23 = (char)*piVar23 + cVar9;
                        *pcVar15 = *pcVar15 + cVar9;
                        *(char *)piVar23 = (char)*piVar23 + cVar9;
                        pcVar3 = (code *)swi(1);
                        uVar55 = (*pcVar3)();
                        param_2 = (byte *)((ulonglong)uVar55 >> 0x20);
                        pbVar14 = (byte *)uVar55;
                        bVar10 = *pbVar14;
                        bVar8 = (byte)uVar55;
                        *pbVar14 = *pbVar14 + bVar8;
                        *param_2 = *param_2 + bVar8 + CARRY1(bVar10,bVar8);
                        *pbVar14 = *pbVar14 + bVar8;
                        *pbVar14 = *pbVar14 + bVar8;
                        *pbVar14 = *pbVar14 + bVar8;
                        *pbVar14 = *pbVar14 + bVar8;
                        *pbVar14 = *pbVar14 + bVar8;
                        *pbVar14 = *pbVar14 + bVar8;
                        *pbVar14 = *pbVar14 + bVar8;
                        *pbVar14 = *pbVar14 + bVar8;
                        cVar9 = (char)((ulonglong)uVar55 >> 0x28);
                        *pbVar14 = *pbVar14 + cVar9;
                        bVar10 = *pbVar14;
                        uVar26 = (undefined3)((ulonglong)uVar55 >> 8);
                        pcVar41 = (char *)CONCAT31(uVar26,bVar8 + bVar10);
                        *pcVar41 = *pcVar41 + cVar9;
                        cVar9 = bVar8 + bVar10 + *pcVar41;
                        pcVar41 = (char *)CONCAT31(uVar26,cVar9);
                        cVar7 = (char)((ulonglong)uVar55 >> 0x20);
                        *pbVar13 = *pbVar13 + cVar7;
                        *pcVar41 = *pcVar41 + cVar9;
                        *pcVar41 = *pcVar41 + cVar7;
                        *pcVar41 = *pcVar41 + cVar9;
                        *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
                        cVar11 = cVar11 + unaff_EBP[(int)pcVar41 * 4];
                        pbVar37 = (byte *)CONCAT22(uVar33,CONCAT11(cVar11,uVar40));
                        pbVar37[(int)pcVar41] = pbVar37[(int)pcVar41] + cVar9;
                        *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar9;
                        *param_2 = *param_2 + (char)extraout_ECX;
                        bVar8 = cVar9 - *pcVar41;
                        pcVar41 = (char *)CONCAT31(uVar26,bVar8);
                        *pbVar37 = *pbVar37 + cVar7;
                        *param_2 = *param_2 ^ bVar8;
                        *param_2 = *param_2 + cVar11;
                        *pcVar41 = *pcVar41 + bVar8;
                        cRam12110000 = cRam12110000 + bVar8;
                        bVar10 = *param_2;
                        *param_2 = *param_2 + bVar8;
                        reader = extraout_ECX;
                        in_stack_fffffff8 = uVar51;
                        if (SCARRY1(bVar10,bVar8) != (char)*param_2 < '\0') break;
                        pbVar37 = (byte *)CONCAT22(uVar33,CONCAT11(cVar11 + unaff_EBP[(int)pcVar41 *
                                                                                      4],uVar40));
                        pbVar13[(int)pcVar41] = pbVar13[(int)pcVar41] + bVar8;
                        *(char *)((int)pcVar41 * 2) = *(char *)((int)pcVar41 * 2) - bVar8;
                        *pcVar41 = *pcVar41 + bVar8;
                        pcVar15 = (char *)CONCAT31(uVar26,bVar8 + *pcVar41);
                        *pcVar15 = *pcVar15 + bVar8 + *pcVar41;
                        in_stack_fffffff8 = 0x4025;
                        uVar55 = func_0x0f40255d();
                      }
code_r0x004025bd:
                      *pcVar41 = *pcVar41 + (char)pcVar41;
                      pcVar41 = (char *)CONCAT31((int3)((uint)pcVar41 >> 8),(char)pcVar41 + '\x12');
                      *pcVar41 = *pcVar41 + (char)((uint)reader >> 8);
                      pcVar41 = pcVar41 + -1;
                      cVar9 = (char)pcVar41;
                      *pcVar41 = *pcVar41 + cVar9;
                      bVar10 = (byte)((uint)pbVar37 >> 8) | unaff_EBP[-0x7b];
                      pbVar37 = (byte *)CONCAT22((short)((uint)pbVar37 >> 0x10),
                                                 CONCAT11(bVar10,(char)pbVar37));
                      *pcVar41 = *pcVar41 + cVar9;
                      cRam0000847d = cRam0000847d + (char)param_2;
                      unaff_EDI = (byte *)CONCAT31((int3)((uint)pcVar41 >> 8),cVar9 + '$');
                      pbVar37[-0x7b] = pbVar37[-0x7b] + bVar10;
                    }
                    *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                    pcVar41 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),(char)unaff_EDI + '\v');
                    pbVar24 = unaff_EBP;
                  } while( true );
                }
                *pbVar13 = *pbVar13 + cVar9;
                pcVar41 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar9 + '\x13');
                unaff_retaddr = unaff_EDI;
              }
              *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
              bVar8 = cVar9 + 0x59;
              pcVar41 = (char *)CONCAT31(uVar26,bVar8);
              *(char **)param_2 = pcVar41 + (uint)(0xd2 < bVar10) + *(int *)param_2;
              pbVar37 = (byte *)CONCAT22(uVar33,CONCAT11(cVar11 + pbVar37[-0x67],bVar43));
              *pcVar41 = *pcVar41 + bVar8;
              unaff_EDI = (byte *)((CONCAT31(uVar26,cVar9 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar8));
              pbVar14 = reader;
code_r0x00402700:
              *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
              cVar9 = (char)unaff_retaddr + '\x02';
              pbVar13 = (byte *)CONCAT31((int3)((uint)unaff_retaddr >> 8),cVar9);
              bVar52 = (POPCOUNT(cVar9) & 1U) == 0;
              reader = pbVar14;
              in_CS = uVar50;
            }
          }
          cVar9 = (char)pcVar41;
          *pcVar41 = *pcVar41 + cVar9;
          uVar26 = (undefined3)((uint)pcVar41 >> 8);
          bVar10 = cVar9 + 0x6f;
          piVar23 = (int *)CONCAT31(uVar26,bVar10);
          iVar20 = *piVar23;
          *(byte *)piVar23 = (char)*piVar23 + bVar10;
          param_3 = CONCAT22(param_3._2_2_,in_ES);
          unaff_retaddr = param_2;
          if ((char)*piVar23 != '\0' && SCARRY1((char)iVar20,bVar10) == (char)*piVar23 < '\0') {
            *(byte *)piVar23 = (char)*piVar23 + bVar10;
            bVar8 = cVar9 + 0x9c;
            piVar23 = (int *)CONCAT31(uVar26,bVar8);
            puVar22 = unaff_ESI + (int)unaff_EDI * 2;
            uVar12 = *puVar22;
            uVar16 = *puVar22;
            *puVar22 = (uint)(param_2 + uVar16 + (0xd2 < bVar10));
            *piVar23 = (*piVar23 - (int)piVar23) -
                       (uint)(CARRY4(uVar12,(uint)param_2) ||
                             CARRY4((uint)(param_2 + uVar16),(uint)(0xd2 < bVar10)));
            uVar16 = *unaff_ESI;
            *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
            unaff_retaddr = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),in_ES);
            if (!CARRY1((byte)uVar16,bVar8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
code_r0x00402724:
          *(byte *)piVar23 = (char)*piVar23 + (byte)piVar23;
          uVar26 = (undefined3)((uint)piVar23 >> 8);
          bVar10 = (byte)piVar23 | *(byte *)((int)piVar23 + 0x400000d);
          pcVar41 = (char *)CONCAT31(uVar26,bVar10);
          if ((char)bVar10 < '\x01') {
            bVar52 = pcVar41 < (char *)0x6fe1411;
            pcVar41 = pcVar41 + -0x6fe1411;
            goto code_r0x00402740;
          }
          *pcVar41 = *pcVar41 + bVar10;
          bVar43 = bVar10 + 0x28;
          puVar46 = (uint *)CONCAT31(uVar26,bVar43);
          *puVar46 = *puVar46 | (uint)puVar46;
          bVar8 = *pbVar37;
          cVar9 = (char)((uint)reader >> 8);
          *pbVar37 = *pbVar37 + cVar9;
          pbVar14 = reader;
          puVar22 = unaff_ESI;
          uVar50 = in_CS;
        } while (*pbVar37 == 0 || SCARRY1(bVar8,cVar9) != (char)*pbVar37 < '\0');
        *(byte *)puVar46 = (char)*puVar46 + bVar43;
        pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x55);
        puVar22 = unaff_ESI + (int)unaff_EDI * 2;
        bVar52 = CARRY4(*puVar22,(uint)param_2) ||
                 CARRY4((uint)(param_2 + *puVar22),(uint)(0xd2 < bVar43));
        *puVar22 = (uint)(param_2 + *puVar22 + (0xd2 < bVar43));
        unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
        goto code_r0x00402740;
      }
      pbVar37 = (byte *)CONCAT31((int3)((uint)pbVar37 >> 8),
                                 (byte)pbVar37 | (byte)((uint)param_2 >> 8));
      piVar23 = (int *)CONCAT31(uVar26,bVar10 + 2);
      pbVar24 = reader;
      in_SS = uVar51;
      pbVar14 = unaff_retaddr;
    }
    *pcVar41 = *pcVar41 + bVar10;
    *unaff_EDI = *unaff_EDI - cVar11;
    *param_2 = *param_2 + (char)pbVar24;
    bVar8 = (cVar9 + '\x11') - *(char *)CONCAT31(uVar26,cVar9 + '\x11');
    pbVar14 = (byte *)CONCAT31(uVar26,bVar8);
    bVar10 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar8;
    reader = pbVar24 + 1;
    cVar9 = bVar8 - CARRY1(bVar10,bVar8);
    pcVar41 = (char *)CONCAT31(uVar26,cVar9);
    *pcVar41 = *pcVar41 + cVar9;
    *pcVar41 = *pcVar41 + cVar9;
    *pcVar41 = *pcVar41 + cVar9;
    *pcVar41 = *pcVar41 + cVar9;
    pbVar24[2] = pbVar24[2] + (char)((uint)reader >> 8);
    *pcVar41 = *pcVar41 + cVar9;
    pcVar41 = (char *)(*(int *)reader * 0x170000);
    *pcVar41 = *pcVar41;
    *pcVar41 = *pcVar41;
    *reader = *reader;
    cVar9 = (char)pbVar37;
    pbVar37 = (byte *)CONCAT22((short)((uint)pbVar37 >> 0x10),
                               CONCAT11((char)((uint)pbVar37 >> 8) + *(char *)((int)param_2 * 5),
                                        cVar9));
    pbVar37[(int)pcVar41] = pbVar37[(int)pcVar41];
    *pcVar41 = *pcVar41 - cVar9;
    *param_2 = *param_2 + (char)reader;
    uVar26 = (undefined3)((uint)pcVar41 >> 8);
    bVar8 = -*pcVar41;
    pbVar14 = (byte *)CONCAT31(uVar26,bVar8);
    *pbVar37 = *pbVar37 + cVar11;
    *param_2 = *param_2 ^ bVar8;
    *param_2 = *param_2 + bVar8;
    *pbVar14 = *pbVar14 + bVar8;
    bVar10 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar8;
    *(byte **)param_2 = param_2 + (uint)CARRY1(bVar10,bVar8) + *(int *)param_2;
    bVar10 = *param_2;
    *param_2 = *param_2 + bVar8;
    in_ES = (ushort)param_3;
    in_DS = uVar51;
    if (SCARRY1(bVar10,bVar8) != (char)*param_2 < '\0') goto code_r0x004027f1;
    pcVar41 = (char *)(CONCAT31(uVar26,bVar8) | 2);
    unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
    *pcVar41 = *pcVar41 + (char)pcVar41;
    pbVar14 = unaff_retaddr;
  } while( true );
code_r0x00402992:
  pbVar14 = (byte *)((int)puVar18 + 0x2a);
  bVar52 = CARRY1(*pbVar14,bVar43);
  *pbVar14 = *pbVar14 + bVar43;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar18) = *(byte *)(in_GS_OFFSET + (int)puVar18) + (char)puVar18;
  puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                             CONCAT11((byte)((uint)puVar22 >> 8) | *(byte *)((int)puVar46 + 0x66),
                                      (char)puVar22));
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
code_r0x00402a3e:
  uVar26 = (undefined3)((uint)puVar18 >> 8);
  bVar10 = (byte)puVar18 | (byte)*puVar45;
  pcVar41 = (char *)CONCAT31(uVar26,bVar10);
  if ((char)bVar10 < '\0') {
    *pcVar41 = *pcVar41 + bVar10;
    cVar9 = bVar10 + 2;
    piVar23 = (int *)CONCAT31(uVar26,cVar9);
    if ((POPCOUNT(cVar9) & 1U) == 0) {
      *(char *)piVar23 = (char)*piVar23 + cVar9;
      bVar10 = bVar10 + 0x71;
      pcVar15 = (char *)CONCAT31(uVar26,bVar10);
      pcVar41 = (char *)segment(uVar49,(short)puVar42 + (short)puVar45);
      *pcVar41 = *pcVar41 + bVar10;
      uVar16 = puVar46[0x1a];
      *pcVar15 = *pcVar15 + bVar10;
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                 CONCAT11((byte)((uint)puVar22 >> 8) | (byte)uVar16 |
                                          *(byte *)((int)puVar46 + 0x69),(char)puVar22));
      *pcVar15 = *pcVar15 + bVar10;
      bVar10 = bVar10 | (byte)*puVar38;
      pcVar41 = (char *)CONCAT31(uVar26,bVar10);
      if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar45 + (uint)bVar53 * -2 + 1;
    out(*puVar45,(short)puVar38);
  }
  else {
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((char)((uint)puVar42 >> 8) + (byte)puVar42[6],(char)puVar42)
                              );
code_r0x00402a5d:
    *pcVar41 = *pcVar41 + (char)pcVar41;
    piVar23 = (int *)CONCAT31((int3)((uint)pcVar41 >> 8),(char)pcVar41 + 'o');
    unaff_ESI = puVar45;
  }
code_r0x00402a61:
  pcVar41 = (char *)segment(uVar49,(short)puVar42 + (short)unaff_ESI);
  *pcVar41 = *pcVar41 + (char)piVar23;
  cVar9 = (char)puVar22;
  puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                             CONCAT11((byte)((uint)puVar22 >> 8) | (byte)puVar46[0x1a],cVar9));
  *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
  uVar33 = CONCAT11((byte)((uint)puVar38 >> 8) | *(byte *)((int)puVar38 + 0x65),(char)puVar38);
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),uVar33);
  piVar19 = (int *)((int)piVar23 + *piVar23);
  puVar45 = unaff_ESI;
  puVar47 = puVar46;
  uVar50 = uVar48;
  if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402ae3;
  *(byte *)puVar38 = (byte)*puVar38 + cVar9;
  puVar45 = unaff_ESI + (uint)bVar53 * -2 + 1;
  out(*unaff_ESI,uVar33);
code_r0x00402a75:
  bVar10 = (byte)((uint)puVar22 >> 8) | (byte)*puVar38;
  puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(bVar10,(char)puVar22));
  piVar23 = (int *)(uint)(byte)*puVar42;
  *(byte *)puVar45 = (byte)*puVar45 - bVar10;
  puVar47 = puVar46;
code_r0x00402a7f:
  *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
  out(*puVar45,(short)puVar38);
  bVar10 = in((short)puVar38);
  *(byte *)puVar47 = bVar10;
  *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
  puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                             CONCAT11((byte)((uint)puVar22 >> 8) | (byte)*puVar38,(char)puVar22));
  iVar20 = *piVar23;
  cVar9 = in(1);
  puVar18 = (uint *)CONCAT31((int3)((uint)((int)piVar23 + *piVar23) >> 8),cVar9);
  *(char *)puVar18 = (char)*puVar18 + cVar9;
  puVar18 = (uint *)((uint)puVar18 | *puVar18);
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar38;
  puVar45 = (uint *)((int)puVar45 + (((uint)bVar53 * -8 + 4) - iVar20));
  puVar47 = (uint *)((int)puVar47 + (uint)bVar53 * -2 + 1);
  uVar51 = uVar48;
  while( true ) {
    bVar10 = (byte)puVar18 | (byte)*puVar38;
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar10);
    puVar46 = puVar47;
    if ((POPCOUNT(bVar10) & 1U) != 0) break;
    *(byte *)puVar18 = (byte)*puVar18 + bVar10;
code_r0x00402a9b:
    uVar26 = (undefined3)((uint)puVar18 >> 8);
    cVar9 = (char)puVar18 + '\r';
    piVar19 = (int *)CONCAT31(uVar26,cVar9);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar19;
    *(char *)piVar19 = (char)*piVar19 + cVar9;
    *(byte *)(puVar45 + -0xc800000) = (byte)puVar45[-0xc800000] + (char)puVar38;
    *(char *)piVar19 = (char)*piVar19 + cVar9;
    *(byte *)puVar38 = (byte)*puVar38 + cVar9;
    cVar7 = (char)puVar22;
    if ((POPCOUNT((byte)*puVar38) & 1U) != 0) {
      *(byte *)puVar38 = (byte)*puVar38 + cVar7;
      unaff_ESI = puVar45 + (uint)bVar53 * -2 + 1;
      out(*puVar45,(short)puVar38);
      piVar23 = (int *)((longlong)*piVar19 * 0x7b020a00);
      *(char *)piVar23 =
           (char)*piVar23 - ((longlong)(int)piVar23 != (longlong)*piVar19 * 0x7b020a00);
      pbVar14 = (byte *)((int)puVar46 + (int)unaff_EBP * 2);
      *pbVar14 = *pbVar14;
      goto code_r0x00402a61;
    }
    *(char *)piVar19 = (char)*piVar19 + cVar9;
    puVar18 = (uint *)CONCAT31(uVar26,(char)puVar18 + ':');
    unaff_ESI = (uint *)((uint)puVar45 | *(uint *)((int)puVar38 + -0x79));
    iVar20 = (int)puVar18 + *puVar18;
    if (SCARRY4((int)puVar18,*puVar18)) {
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((char)((uint)puVar42 >> 8) + (byte)unaff_ESI[(int)puVar42]
                                          ,(char)puVar42));
      *(char *)((int)puVar38 * 2) = *(char *)((int)puVar38 * 2) + (char)iVar20;
      puVar47 = puVar46;
      goto code_r0x00402b33;
    }
    uVar26 = (undefined3)((uint)iVar20 >> 8);
    cVar9 = (char)iVar20 + CARRY4((uint)puVar18,*puVar18);
    piVar23 = (int *)CONCAT31(uVar26,cVar9);
    *(byte *)puVar38 = (byte)*puVar38 + cVar7;
    bVar52 = (POPCOUNT((byte)*puVar38) & 1U) != 0;
    if ((bVar52) && (bVar52)) goto code_r0x00402a61;
    *(char *)piVar23 = (char)*piVar23 + cVar9;
    cVar11 = cVar9 + '(';
    pcVar41 = (char *)CONCAT31(uVar26,cVar11);
    puVar47 = puVar46 + (uint)bVar53 * -2 + 1;
    uVar16 = in((short)puVar38);
    *puVar46 = uVar16;
    *pcVar41 = *pcVar41 + cVar11;
    puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                               CONCAT11((byte)((uint)puVar22 >> 8) | bRama07b0222,cVar7));
    *pcVar41 = *pcVar41 + cVar11;
    pcVar41 = (char *)CONCAT31(uVar26,cVar9 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)puVar38);
    puVar45 = (uint *)((int)(unaff_ESI + (uint)bVar53 * -2 + 1) + (uint)bVar53 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar53 * -2 + 1],(short)puVar38);
    bVar10 = (byte)pcVar41;
    *pcVar41 = *pcVar41 + bVar10;
    puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(byte)puVar42 | (byte)*puVar47);
    in_AF = 9 < (bVar10 & 0xf) | in_AF;
    uVar26 = (undefined3)((uint)pcVar41 >> 8);
    bVar10 = bVar10 + in_AF * -6;
    puVar38 = (uint *)((uint)puVar38 ^ *puVar38);
    cVar9 = bVar10 + (0x9f < bVar10 | in_AF * (bVar10 < 6)) * -0x60 + (byte)*puVar38;
    piVar23 = (int *)CONCAT31(uVar26,cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar23 = (char)*piVar23 + cVar9;
    piVar19 = (int *)CONCAT31(uVar26,cVar9 + '\x17');
    uVar50 = uVar48;
code_r0x00402ae3:
    out(*puVar45,(short)puVar38);
    unaff_ESI = puVar45 + (uint)bVar53 * -2 + 1 + (uint)bVar53 * -2 + 1;
    out(puVar45[(uint)bVar53 * -2 + 1],(short)puVar38);
    *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
code_r0x00402ae7:
    puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                               CONCAT11((byte)((uint)puVar42 >> 8) | unaff_EBP[-0x60],(char)puVar42)
                              );
    cVar9 = (char)piVar19;
    *(char *)piVar19 = (char)*piVar19 + cVar9;
    uVar26 = (undefined3)((uint)piVar19 >> 8);
    bVar10 = cVar9 + 2;
    puVar18 = (uint *)CONCAT31(uVar26,bVar10);
    uVar48 = uVar50;
    if ((POPCOUNT(bVar10) & 1U) == 0) {
      *(byte *)puVar18 = (byte)*puVar18 + bVar10;
      cVar9 = cVar9 + '}';
      puVar18 = (uint *)CONCAT31(uVar26,cVar9);
      *(byte *)puVar18 = ((byte)*puVar18 - cVar9) - (0x84 < bVar10);
      pbVar14 = (byte *)((int)puVar38 + (int)puVar18);
      *pbVar14 = *pbVar14 + cVar9;
      bVar10 = POPCOUNT(*pbVar14);
      puVar45 = unaff_ESI;
code_r0x00402af9:
      uVar48 = uVar50;
      puVar46 = puVar47;
      if ((bVar10 & 1) == 0) {
        *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
        bVar10 = (byte)puVar22;
        *(byte *)puVar38 = (byte)*puVar38 + bVar10;
        uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar51);
        unaff_ESI = puVar45 + (uint)bVar53 * -2 + 1;
        out(*puVar45,(short)puVar38);
        uVar16 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar10;
        iVar20 = CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + 'o') +
                 *(int *)((int)puVar38 * 2) + (uint)CARRY1((byte)uVar16,bVar10);
        pcVar41 = (char *)CONCAT31((int3)((uint)iVar20 >> 8),(char)iVar20 + '(');
        while( true ) {
          uVar16 = *puVar38;
          bVar8 = (byte)puVar22;
          *(byte *)puVar38 = (byte)*puVar38 + bVar8;
          pcVar41 = pcVar41 + (uint)CARRY1((byte)uVar16,bVar8) + iRam73280512;
          bVar10 = (byte)pcVar41;
          *pcVar41 = *pcVar41 + bVar10;
          puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                     CONCAT11((byte)((uint)puVar22 >> 8) | bRam7d160243,bVar8));
          bVar53 = ((uint)uStackY_2c & 0x400) != 0;
          in_AF = ((uint)uStackY_2c & 0x10) != 0;
          *pcVar41 = *pcVar41 + bVar10;
          uVar26 = (undefined3)((uint)pcVar41 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar26,bVar10 + 2) + (uint)(0xfd < bVar10);
          cVar9 = bVar10 + 4;
          if (SCARRY1(bVar10 + 2,'\x02') != cVar9 < '\0') break;
          *(char *)CONCAT31(uVar26,cVar9) = *(char *)CONCAT31(uVar26,cVar9) + cVar9;
          iVar20 = CONCAT31(uVar26,bVar10 + 0x16);
code_r0x00402b33:
          piVar19 = (int *)(iVar20 + 0xe2802);
          *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar22 >> 8);
          uVar50 = uVar48;
          uVar48 = uVar51;
          while( true ) {
            bVar8 = (byte)puVar42 | (byte)((uint)puVar22 >> 8);
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar8);
            *piVar19 = (int)(*piVar19 + (int)piVar19);
            cVar9 = (char)piVar19;
            *(byte *)puVar38 = (byte)*puVar38 + cVar9;
            if ((POPCOUNT((byte)*puVar38) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar19 = (char)*piVar19 + cVar9;
            uVar16 = CONCAT31((int3)((uint)piVar19 >> 8),cVar9 + '\x13');
            puVar18 = (uint *)(uVar16 + 0x19061224 + (uint)(0x1f9edfd < uVar16));
            uVar17 = (uint)(0xe4ffffdd < uVar16 + 0xfe061202 ||
                           CARRY4(uVar16 + 0x19061224,(uint)(0x1f9edfd < uVar16)));
            uVar16 = *unaff_ESI;
            uVar12 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar12 + (int)puVar18) + uVar17);
            bVar10 = POPCOUNT(*unaff_ESI & 0xff);
            puVar45 = unaff_ESI;
            if ((SCARRY4(uVar16,(int)puVar18) != SCARRY4((int)(uVar12 + (int)puVar18),uVar17)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar10 = (byte)puVar18;
            *(byte *)puVar18 = (byte)*puVar18 + bVar10;
            iVar20 = CONCAT31((int3)((uint)puVar18 >> 8),bVar10 + 2) + 0x9d7d +
                     (uint)(0xfd < bVar10);
            bVar10 = (byte)puVar38 | (byte)*puVar38;
            uVar16 = *puVar42;
            *(byte *)puVar42 = (byte)*puVar42 + bVar8;
            pcVar41 = (char *)(CONCAT31((int3)((uint)iVar20 >> 8),(char)iVar20 + '\x12') + 0x228b26
                               + *puVar47 + (uint)CARRY1((byte)uVar16,bVar8));
            cVar9 = bVar10 + (byte)*puVar22;
            puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),cVar9);
            if (SCARRY1(bVar10,(byte)*puVar22) == cVar9 < '\0') break;
            *pcVar41 = *pcVar41 + (char)pcVar41;
            cVar9 = (char)pcVar41 + '\x02';
            pcVar41 = (char *)CONCAT31((int3)((uint)pcVar41 >> 8),cVar9);
            bVar10 = POPCOUNT(cVar9);
            uVar50 = uVar48;
code_r0x00402b7a:
            puVar46 = unaff_ESI;
            if ((bVar10 & 1) != 0) break;
            while( true ) {
              cVar9 = (char)pcVar41;
              *pcVar41 = *pcVar41 + cVar9;
              uVar26 = (undefined3)((uint)pcVar41 >> 8);
              pcVar41 = (char *)CONCAT31(uVar26,cVar9 + '\x13');
              *(byte *)puVar22 = (byte)*puVar22 | (byte)puVar38;
              *(byte *)puVar47 = (byte)*puVar47 | (byte)puVar38;
              *puVar38 = (uint)(pcVar41 + *puVar38);
              uVar33 = (undefined2)((uint)puVar42 >> 0x10);
              uVar40 = SUB41(puVar42,0);
              cVar7 = (char)((uint)puVar42 >> 8) + *(byte *)((int)puVar42 + -0x5f);
              puVar42 = (uint *)CONCAT22(uVar33,CONCAT11(cVar7,uVar40));
              *pcVar41 = *pcVar41 + cVar9 + '\x13';
              piVar19 = (int *)CONCAT31(uVar26,cVar9 + -0x7a);
              uVar16 = *puVar38;
              *(byte *)puVar38 = (byte)*puVar38 + (char)puVar22;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar16,(char)puVar22) == (char)(byte)*puVar38 < '\0') break;
              *(char *)piVar19 = (char)*piVar19 + cVar9 + -0x7a;
              cVar11 = cVar9 + -0x78;
              piVar19 = (int *)CONCAT31(uVar26,cVar11);
              uVar5 = uVar50;
              if ((POPCOUNT(cVar11) & 1U) != 0) break;
              *(char *)piVar19 = (char)*piVar19 + cVar11;
              pcVar41 = (char *)CONCAT31(uVar26,cVar9 + -0x65);
              *puVar22 = *puVar22 | (uint)puVar38;
              *puVar47 = *puVar47 | (uint)puVar38;
              pbVar14 = (byte *)((int)puVar22 + -1);
              cVar7 = cVar7 + *(byte *)((int)puVar42 + -0x5e);
              puVar42 = (uint *)CONCAT22(uVar33,CONCAT11(cVar7,uVar40));
              *pcVar41 = *pcVar41 + cVar9 + -0x65;
              bVar10 = cVar9 + 10;
              puVar18 = (uint *)CONCAT31(uVar26,bVar10);
              bVar8 = (byte)pbVar14;
              *(byte *)puVar38 = (byte)*puVar38 + bVar8;
              unaff_ESI = puVar46 + (uint)bVar53 * -2 + 1;
              out(*puVar46,(short)puVar38);
              uVar16 = *puVar38;
              *(byte *)puVar38 = (byte)*puVar38 + bVar8;
              uVar2 = (uint)CARRY1((byte)uVar16,bVar8);
              uVar16 = *puVar38;
              uVar12 = *puVar38;
              pbVar37 = pbVar14 + uVar12 + uVar2;
              uVar6 = *puVar38;
              cRam130a0000 = cRam130a0000 - cVar7;
              uVar17 = *puVar38;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar18);
              *(byte *)puVar18 = (char)*puVar18 + bVar10;
              puVar22 = (uint *)CONCAT22((short)((uint)pbVar37 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar37 >> 8) | bRam7d170243,
                                                  (char)pbVar37 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar14,uVar16) ||
                                                  CARRY4((uint)(pbVar14 + uVar12),uVar2))));
              bVar53 = (uVar51 & 0x400) != 0;
              in_AF = (uVar51 & 0x10) != 0;
              *(byte *)puVar18 = (char)*puVar18 + bVar10;
              bVar52 = 0xfd < bVar10;
              pcVar41 = (char *)CONCAT31(uVar26,cVar9 + '\f');
              puVar38 = (uint *)((uint)puVar38 | uVar17);
code_r0x00402bd1:
              uVar16 = *puVar42;
              uVar12 = *puVar42;
              *puVar42 = (uint)((byte *)(uVar12 + (int)puVar22) + bVar52);
              bVar10 = POPCOUNT(*puVar42 & 0xff);
              uVar50 = uVar51;
              if ((SCARRY4(uVar16,(int)puVar22) !=
                  SCARRY4((int)(uVar12 + (int)puVar22),(uint)bVar52)) == (int)*puVar42 < 0)
              goto code_r0x00402b7a;
              cVar9 = (char)pcVar41;
              *pcVar41 = *pcVar41 + cVar9;
              pcVar41 = (char *)CONCAT31((int3)((uint)pcVar41 >> 8),cVar9 + '\x02');
              if (SCARRY1(cVar9,'\x02') == (char)(cVar9 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar41 = *pcVar41 + (char)pcVar41;
                pcVar41 = (char *)(CONCAT31((int3)((uint)pcVar41 >> 8),(char)pcVar41 + '\x12') |
                                  *puVar38);
                *(byte *)puVar47 = (byte)*puVar47 - (char)puVar22;
                *pcVar41 = *pcVar41 + (char)pcVar41;
                puVar38 = (uint *)((int)puVar38 - *unaff_ESI);
                bVar10 = (byte)puVar42 | (byte)((uint)puVar22 >> 8);
                cVar9 = *pcVar41;
                uVar26 = (undefined3)((uint)pcVar41 >> 8);
                pcVar41 = (char *)CONCAT31(uVar26,cVar9);
                *pcVar41 = *pcVar41 + cVar9;
                pcVar15 = (char *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                           CONCAT11((char)((uint)puVar42 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),
                                                                       bVar10) + -0x5b),bVar10));
                *pcVar41 = *pcVar41 + cVar9;
                bVar52 = false;
                pcVar41 = (char *)(CONCAT31(uVar26,cVar9 + '\x13') | *puVar38);
                do {
                  bVar8 = (byte)puVar22;
                  bVar10 = bVar8 + (byte)unaff_ESI[(int)puVar47 * 2];
                  puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar10 + bVar52);
                  uVar16 = (uint)(CARRY1(bVar8,(byte)unaff_ESI[(int)puVar47 * 2]) ||
                                 CARRY1(bVar10,bVar52));
                  pcVar21 = pcVar41 + 0x1b000019 + uVar16;
                  piVar23 = (int *)((int)puVar47 * 2 + 0x40000a5);
                  *piVar23 = (int)((int)puVar22 +
                                  (uint)((char *)0xe4ffffe6 < pcVar41 ||
                                        CARRY4((uint)(pcVar41 + 0x1b000019),uVar16)) + *piVar23);
                  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(char)puVar38 + cRam00009d7d
                                            );
                  uVar26 = (undefined3)((uint)pcVar21 >> 8);
                  bVar10 = (char)pcVar21 + 0x12;
                  in_AF = 9 < (bVar10 & 0xf) | in_AF;
                  uVar16 = CONCAT31(uVar26,bVar10 + in_AF * -6) & 0xffffff0f;
                  pcVar41 = (char *)CONCAT22((short)(uVar16 >> 0x10),
                                             CONCAT11((char)((uint)pcVar21 >> 8) - in_AF,
                                                      (char)uVar16));
                  pbVar14 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar26,bVar10));
                  while( true ) {
                    *pcVar41 = *pcVar41 + (char)pcVar41;
                    puVar46 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                               (byte)puVar38 | (byte)*puVar38);
                    puVar47 = (uint *)((uint)puVar47 | (uint)unaff_ESI);
                    uVar16 = (uint)pcVar15 | (uint)unaff_ESI;
                    unaff_EBP = pbVar14 + 1;
                    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar48);
                    cVar7 = (char)(pcVar41 + 0x1b000019);
                    uVar26 = (undefined3)((uint)(pcVar41 + 0x1b000019) >> 8);
                    cVar9 = cVar7 + -0x13;
                    pcVar41 = (char *)CONCAT31(uVar26,cVar9);
                    uVar33 = (undefined2)(uVar16 >> 0x10);
                    cVar11 = (char)(uVar16 >> 8) + *(char *)(uVar16 - 0x5e);
                    puVar42 = (uint *)CONCAT22(uVar33,CONCAT11(cVar11,(byte)uVar16));
                    *pcVar41 = *pcVar41 + cVar9;
                    pcVar41 = (char *)(CONCAT31(uVar26,cVar7 + '\x19') | *puVar46);
                    bVar10 = (byte)pcVar41;
                    if ((POPCOUNT((uint)pcVar41 & 0xff) & 1U) != 0) {
                      pbVar14 = (byte *)((int)puVar46 + (int)pcVar41);
                      bVar52 = CARRY1(*pbVar14,bVar10);
                      *pbVar14 = *pbVar14 + bVar10;
                      puVar38 = puVar46;
                      goto code_r0x00402bd1;
                    }
                    *pcVar41 = *pcVar41 + bVar10;
                    uVar26 = (undefined3)((uint)pcVar41 >> 8);
                    pcVar15 = (char *)CONCAT31(uVar26,bVar10 + 0x6f);
                    puVar38 = (uint *)((int)puVar46 + 1);
                    *pcVar15 = *pcVar15 + bVar10 + 0x6f;
                    bVar8 = (byte)uVar16 | (byte)((uint)pcVar41 >> 8);
                    pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x5c);
                    cVar11 = cVar11 + *(char *)(CONCAT31((int3)((uint)puVar42 >> 8),bVar8) + -0x5f);
                    puVar42 = (uint *)CONCAT22(uVar33,CONCAT11(cVar11,bVar8));
                    *pcVar41 = *pcVar41 + bVar10 + 0x5c;
                    pcVar41 = (char *)(CONCAT31(uVar26,bVar10 + 0x88) | *puVar38);
                    if ((POPCOUNT((uint)pcVar41 & 0xff) & 1U) != 0) {
                      *(byte *)puVar42 = (byte)*puVar42 + (char)((uint)puVar22 >> 8);
                      uStackY_2c = (uint *)((uint)uStackY_2c._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar41 = *pcVar41 + (char)pcVar41;
                    uVar26 = (undefined3)((uint)pcVar41 >> 8);
                    cVar9 = (char)pcVar41 + 'o';
                    puVar38 = (uint *)((int)puVar46 + 2);
                    *(char *)CONCAT31(uVar26,cVar9) = *(char *)CONCAT31(uVar26,cVar9) + cVar9;
                    pcVar15 = (char *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               bVar8 | (byte)((uint)pcVar41 >> 8));
                    pcVar41 = (char *)(CONCAT31(uVar26,cVar9) | 2);
                    pbVar14[-0x62] = pbVar14[-0x62] + 1;
                    bVar10 = (byte)pcVar41;
                    *pcVar41 = *pcVar41 + bVar10;
                    bVar52 = 0xfd < bVar10;
                    cVar9 = bVar10 + 2;
                    pcVar41 = (char *)CONCAT31(uVar26,cVar9);
                    uVar49 = uVar48;
                    if (SCARRY1(bVar10,'\x02') != cVar9 < '\0') break;
                    *pcVar41 = *pcVar41 + cVar9;
                    bVar8 = bVar10 + 10;
                    pcVar41 = (char *)CONCAT31(uVar26,bVar8);
                    *pcVar41 = *pcVar41 - cVar11;
                    cVar7 = (char)puVar22;
                    *(byte *)puVar38 = *(byte *)puVar38 + cVar7;
                    pbVar14[-0x62] = pbVar14[-0x62] + 1;
                    *pcVar41 = *pcVar41 + bVar8;
                    cVar9 = bVar10 + 0xc;
                    pcVar41 = (char *)CONCAT31(uVar26,cVar9);
                    if (SCARRY1(bVar8,'\x02') == cVar9 < '\0') {
                      *pcVar41 = *pcVar41 + cVar9;
                      *(byte *)puVar22 = (byte)*puVar22 - cVar11;
                      *(byte *)puVar38 = *(byte *)puVar38 + cVar7;
                      cVar9 = (bVar10 + 0x13) - (byte)puVar22[0x13];
                      pcVar41 = (char *)CONCAT31(uVar26,cVar9);
                      *pcVar41 = *pcVar41 + cVar9;
                      pcVar21 = (char *)CONCAT31(uVar26,cVar9 + *pcVar41);
                      *pcVar21 = *pcVar21 + cVar9 + *pcVar41;
                      pcVar21 = pcVar21 + *puVar22;
                      *pcVar21 = *pcVar21 + (char)pcVar21;
                      LOCK();
                      pcVar41 = *(char **)pcVar21;
                      *(char **)pcVar21 = pcVar21;
                      UNLOCK();
                      *pcVar41 = *pcVar41 + (char)pcVar41;
                      pbVar37 = (byte *)CONCAT31((int3)((uint)pcVar41 >> 8),(byte)*puVar22);
                      *pbVar37 = *pbVar37 + (byte)*puVar22;
                      goto code_r0x00402c8d;
                    }
                    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),
                                               cVar7 + *pcVar15 + (0xfd < bVar8));
                    *(byte *)puVar47 = (byte)*puVar47 - cVar11;
                    pbVar14 = unaff_EBP;
                  }
                } while( true );
              }
              puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                         CONCAT11((char)((uint)puVar42 >> 8) +
                                                  *(byte *)((int)puVar42 + -99),(char)puVar42));
              puVar46 = unaff_ESI;
            }
            *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
            puVar38 = (uint *)((int)puVar38 - *puVar46);
            unaff_ESI = puVar46;
            uVar50 = uVar48;
            uVar48 = uVar5;
          }
          *(byte *)puVar38 = (byte)*puVar38 + (char)puVar22;
          pcVar41 = pcVar41 + -0x7d160243;
        }
        pcVar41 = (char *)CONCAT31(uVar26,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar22;
    uVar16 = *puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + (byte)puVar18;
    *puVar47 = (uint)((int)puVar38 + (uint)CARRY1((byte)uVar16,(byte)puVar18) + *puVar47);
    puVar45 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar32 = (char)puVar22;
      cVar29 = (char)((uint)puVar22 >> 8) + (char)((uint)pbVar37 >> 8);
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(cVar29,cVar32));
      cVar9 = (char)pbVar37;
      *pbVar37 = *pbVar37 + cVar9;
      pcVar41 = (char *)((int)pbVar37 * 2 + 0x1a10000);
      cVar11 = (char)((uint)pcVar15 >> 8);
      *pcVar41 = *pcVar41 + cVar11;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
      pbVar37[-0x47ffffff] = pbVar37[-0x47ffffff] + cVar11;
      *(byte **)pbVar37 = pbVar37 + *(int *)pbVar37;
      bVar8 = (byte)puVar38;
      *(byte *)puVar47 = (byte)*puVar47 + bVar8;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + bVar8;
      *pbVar37 = *pbVar37 + cVar9;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar33 = (undefined2)((uint)pcVar15 >> 0x10);
      cVar11 = cVar11 + (byte)unaff_ESI[(int)pcVar15];
      pcVar41 = (char *)CONCAT22(uVar33,CONCAT11(cVar11,(char)pcVar15));
      pcVar41[(int)pbVar37] = pcVar41[(int)pbVar37] + cVar9;
      *(byte *)puVar38 = *(byte *)puVar38 - cVar11;
      *(byte *)puVar38 = *(byte *)puVar38 + cVar32;
      uVar26 = (undefined3)((uint)pbVar37 >> 8);
      bVar10 = cVar9 - *pbVar37;
      *pcVar41 = *pcVar41 + bVar8;
      *(byte *)puVar38 = *(byte *)puVar38 ^ bVar10;
      *(byte *)puVar38 = *(byte *)puVar38 + bVar10;
      *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
      uVar16 = *puVar22;
      *(byte *)puVar22 = (byte)*puVar22 + bVar8;
      cVar7 = bVar10 + *(char *)CONCAT31(uVar26,bVar10) + CARRY1((byte)uVar16,bVar8);
      pcVar15 = (char *)CONCAT22(uVar33,CONCAT11(cVar11 + pbVar14[-0x60],(char)pcVar15));
      *(char *)CONCAT31(uVar26,cVar7) = *(char *)CONCAT31(uVar26,cVar7) + cVar7;
      cVar11 = cVar7 + '\x12';
      pbVar37 = (byte *)CONCAT31(uVar26,cVar11);
      cVar9 = *pcVar15;
      *pcVar15 = *pcVar15 + cVar11;
      if (SCARRY1(cVar9,cVar11) != *pcVar15 < '\0') break;
code_r0x00402c8d:
      cVar9 = (char)pbVar37;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
      *(byte *)puVar38 = *(byte *)puVar38 + cVar9;
      *pbVar37 = *pbVar37 + cVar9;
    }
    *pbVar37 = *pbVar37 + cVar11;
    pbVar37 = (byte *)CONCAT31(uVar26,cVar7 + '$');
    *pbVar37 = *pbVar37 + cVar29;
    bVar10 = *(byte *)puVar38;
    *(byte *)puVar38 = *(byte *)puVar38 + cVar32;
    uVar50 = in_DS;
  } while (SCARRY1(bVar10,cVar32) == (char)*(byte *)puVar38 < '\0');
  do {
    cVar9 = (char)pbVar37;
    *pbVar37 = *pbVar37 + cVar9;
    uVar26 = (undefined3)((uint)pbVar37 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar38;
    bVar8 = cVar9 + 0x24;
    cVar11 = (char)((uint)pcVar15 >> 8);
    pcVar15[-0x62] = pcVar15[-0x62] + cVar11;
    *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
    bVar10 = cVar9 + 0x2fU + (byte)*puVar22;
    cVar7 = bVar10 + (0xf4 < bVar8);
    cVar9 = cVar7 + *(char *)CONCAT31(uVar26,cVar7) +
            (CARRY1(cVar9 + 0x2fU,(byte)*puVar22) || CARRY1(bVar10,0xf4 < bVar8));
    pcVar41 = (char *)CONCAT31(uVar26,cVar9);
    *pcVar41 = *pcVar41 - (char)puVar38;
    *pcVar41 = *pcVar41 + cVar9;
    pcVar21 = (char *)((int)puVar38 - *puVar38);
    *(byte *)(unaff_ESI + (int)pcVar15) = (byte)unaff_ESI[(int)pcVar15] + cVar11;
    pcVar41[(int)unaff_EBP] = pcVar41[(int)unaff_EBP] + cVar9;
    *pcVar21 = *pcVar21 + (char)puVar22;
    pcVar41 = (char *)CONCAT22((short)((uint)pbVar37 >> 0x10),
                               CONCAT11((char)((uint)pbVar37 >> 8) - *pcVar21,cVar9));
    uVar16 = *puVar47;
    *pcVar41 = *pcVar41 - (char)((uint)pcVar21 >> 8);
    *pcVar41 = *pcVar41 + cVar9;
    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar49);
    pbVar14 = (byte *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                               CONCAT11(cVar11 - (byte)*unaff_ESI,(char)pcVar15));
    unaff_EBP = unaff_EBP + *(int *)(pbVar14 + (int)puVar22);
    puVar46 = (uint *)CONCAT31((int3)((uint)pcVar21 >> 8),(char)pcVar21 + (byte)uVar16);
    while( true ) {
      puVar38 = puVar46;
      uVar33 = (undefined2)((uint)pbVar14 >> 0x10);
      bVar44 = (char)((uint)pbVar14 >> 8) + pbVar14[0x18];
      *pcVar41 = *pcVar41 + (char)pcVar41;
      pbVar37 = (byte *)CONCAT31((int3)((uint)pcVar41 >> 8),(char)pcVar41 + 'o');
      cVar9 = (char)puVar22;
      *(byte *)puVar38 = (byte)*puVar38 + cVar9;
      uVar16 = *unaff_ESI;
      bVar43 = (byte)((uint)puVar22 >> 8);
      bVar10 = *pbVar37;
      pbVar37 = pbVar37 + (uint)CARRY1(bVar43,*pbVar37) + *(int *)pbVar37;
      *(byte *)puVar38 = (byte)*puVar38 + cVar9;
      cVar7 = ((char)pbVar14 - (byte)uVar16) - (byte)*unaff_ESI;
      bVar8 = *(byte *)((int)puVar47 + 0x1a);
      *pbVar37 = *pbVar37 + (char)pbVar37;
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                 CONCAT11(bVar43 + bVar10 + bVar8 | (byte)*puVar38,cVar9));
      pbVar37 = pbVar37 + *puVar38;
      if ((POPCOUNT((uint)pbVar37 & 0xff) & 1U) != 0) break;
      *pbVar37 = *pbVar37 + (char)pbVar37;
      bVar10 = (char)pbVar37 + 0x6f;
      pcVar41 = (char *)CONCAT31((int3)((uint)pbVar37 >> 8),bVar10);
      pcVar15 = (char *)(CONCAT31((int3)(CONCAT22(uVar33,CONCAT11(bVar44,(char)pbVar14)) >> 8),cVar7
                                 ) + -1);
      *pcVar41 = *pcVar41 + bVar10;
      *pcVar41 = *pcVar41 + bVar10;
      *pcVar15 = *pcVar15 + (byte)puVar38;
      *(byte *)((int)pcVar41 * 2) = *(byte *)((int)pcVar41 * 2) ^ bVar10;
      uVar4 = *(undefined6 *)pcVar41;
      uVar49 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar41 = (char *)uVar4;
      *pcVar41 = *pcVar41 + (char)uVar4;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar4;
      pcVar41 = (char *)((uint)pcVar41 | 0x73110008);
      bVar44 = (byte)((uint)pcVar15 >> 8);
      *(byte *)puVar47 = (byte)*puVar47 - bVar44;
      *(byte *)puVar38 = (byte)*puVar38 + cVar9;
      puVar46 = unaff_ESI + (uint)bVar53 * -2 + 1;
      out(*unaff_ESI,(short)puVar38);
      *pcVar41 = *pcVar41;
      cVar9 = (char)pcVar41;
      *pcVar41 = *pcVar41 + cVar9;
      bVar10 = unaff_EBP[-0x5a];
      uVar33 = (undefined2)((uint)pcVar15 >> 0x10);
      cVar7 = (char)pcVar15;
      *pcVar41 = *pcVar41 + cVar9;
      cVar9 = cVar9 + '\x02';
      uVar16 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar9);
      puVar22 = (uint *)(uVar16 | 0x73110000);
      unaff_ESI = puVar46 + (uint)bVar53 * -2 + 1;
      out(*puVar46,(short)puVar38);
      *(byte *)puVar22 = (byte)*puVar22;
      bVar43 = (byte)puVar38 | (byte)*puVar47;
      puVar46 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar43);
      *(byte *)puVar22 = (byte)*puVar22 + cVar9;
      pcVar41 = (char *)(uVar16 | 0x7b1f1609);
      bVar53 = (uVar50 & 0x400) != 0;
      *(uint *)((int)puVar47 + -0x7d) = *(uint *)((int)puVar47 + -0x7d) | (uint)unaff_EBP;
      bVar8 = (byte)pcVar41;
      *pcVar41 = *pcVar41 + bVar8;
      bVar44 = bVar44 | bVar10 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar14 = (byte *)CONCAT22(uVar33,CONCAT11(bVar44,cVar7));
      *pcVar41 = *pcVar41 + bVar8;
      uVar26 = (undefined3)((uint)pcVar41 >> 8);
      unaff_ESI[(int)puVar47 * 2] =
           (uint)((int)puVar46 + (uint)(0xd2 < bVar8) + unaff_ESI[(int)puVar47 * 2]);
      bVar10 = bVar8 + 0x2d ^ *(byte *)CONCAT31(uVar26,bVar8 + 0x2d);
      pcVar41 = (char *)CONCAT31(uVar26,bVar10);
      uVar16 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
      uVar50 = uVar49;
      if (CARRY1((byte)uVar16,bVar10)) {
        *pcVar41 = *pcVar41 + bVar10;
        bVar10 = bVar10 | pcVar41[0x4000019];
        pcVar41 = (char *)CONCAT31(uVar26,bVar10);
        if ('\0' < (char)bVar10) {
          *pcVar41 = *pcVar41 + bVar10;
          piVar23 = (int *)CONCAT31(uVar26,bVar10 + 0x28);
          *piVar23 = (int)piVar23 + (uint)(0xd7 < bVar10) + *piVar23;
          bVar30 = (byte)((uint6)uVar4 >> 8);
          *pbVar14 = *pbVar14 + bVar30;
          uVar34 = CONCAT11((byte)((uint)puVar38 >> 8) | bVar44,bVar43);
          puVar46 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),uVar34);
          uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar49);
          bVar43 = in(uVar34);
          pbVar37 = (byte *)CONCAT31(uVar26,bVar43);
          bVar8 = *pbVar37;
          bVar52 = SCARRY1(*pbVar37,bVar43);
          *pbVar37 = *pbVar37 + bVar43;
          bVar10 = *pbVar37;
          puVar42 = unaff_ESI;
          uVar51 = uVar49;
          if (!CARRY1(bVar8,bVar43)) goto code_r0x00402e19;
          *pbVar37 = *pbVar37 + bVar43;
          bVar30 = bVar30 | *pbVar37;
          puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(bVar30,cVar9));
          pcVar41 = (char *)CONCAT31(uVar26,bVar43 + *pbVar37);
          *pbVar14 = *pbVar14 + bVar30;
        }
        uVar26 = (undefined3)((uint)pcVar41 >> 8);
        bVar8 = (byte)pcVar41 | (byte)*puVar46;
        pbVar37 = (byte *)CONCAT31(uVar26,bVar8);
        puVar42 = unaff_ESI + (uint)bVar53 * -2 + 1;
        out(*unaff_ESI,(short)puVar46);
        LOCK();
        bVar10 = *pbVar37;
        *pbVar37 = bVar8;
        UNLOCK();
        *(byte *)puVar46 = (byte)*puVar46 + (char)puVar22;
        piVar23 = (int *)(CONCAT31(uVar26,bVar10) + -0x1b7e07);
        *(byte *)puVar46 = (byte)*puVar46 + (char)puVar22;
        iVar20 = (int)puVar22 - *(int *)pbVar14;
        bVar10 = *(byte *)((int)puVar47 + -0x7a);
        uVar34 = (undefined2)((uint)iVar20 >> 0x10);
        *(char *)piVar23 = *(char *)piVar23 + (char)piVar23;
        bVar8 = (char)((uint)iVar20 >> 8) + bVar10 | *(byte *)((int)puVar47 + 0x17);
        *(char *)piVar23 = *(char *)piVar23 + (char)piVar23;
        uVar26 = (undefined3)(CONCAT22(uVar34,CONCAT11(bVar8,(byte)iVar20)) >> 8);
        bVar10 = (byte)iVar20 | *pbVar14;
        puVar22 = (uint *)CONCAT31(uVar26,bVar10);
        pbVar37 = (byte *)((int)piVar23 + *piVar23);
        puVar38 = puVar42;
        if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402e0a;
        *(byte *)puVar22 = (byte)*puVar22 + bVar10;
        *(byte **)pbVar14 = (byte *)(*(int *)pbVar14 + (int)puVar46);
        piVar23 = (int *)CONCAT31(uVar26,bVar10 + 0x27);
        puVar22 = (uint *)CONCAT22(uVar34,CONCAT11(bVar8 + *(byte *)((int)puVar47 + -0x79),bVar10));
        *(byte *)piVar23 = (char)*piVar23 + bVar10 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar15 = (char *)CONCAT22(uVar33,CONCAT11(bVar44 | unaff_EBP[-0x62],cVar7));
  } while( true );
code_r0x00402dff:
  pbVar37 = (byte *)CONCAT22((short)((uint)piVar23 >> 0x10),
                             CONCAT11((byte)((uint)piVar23 >> 8) |
                                      *(byte *)((int)puVar46 + 0x2170411),(byte)piVar23));
  puVar38 = puVar42 + (uint)bVar53 * -2 + 1;
  out(*puVar42,(short)puVar46);
  *pbVar37 = (byte)piVar23;
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar22;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar37;
  *pbVar37 = *pbVar37 - cVar7;
  *pbVar37 = *pbVar37 + (char)pbVar37;
  bVar52 = false;
  bVar10 = (byte)((uint)puVar22 >> 8) | bRam052b0603;
  puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),CONCAT11(bVar10,(char)puVar22));
  puVar42 = puVar38;
code_r0x00402e19:
  if (bVar10 == 0 || bVar52 != (char)bVar10 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar37;
  *pbVar37 = *pbVar37 + cRam89280411;
  piVar23 = (int *)CONCAT22((short)((uint)pbVar37 >> 0x10),
                            CONCAT11((byte)((uint)pbVar37 >> 8) |
                                     *(byte *)((int)puVar46 + 0x7190411),cRam89280411));
  *(char *)piVar23 = (char)*piVar23 + cRam89280411;
  cVar9 = (char)puVar22;
  puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                             CONCAT11((byte)((uint)puVar22 >> 8) | (byte)*puVar46,cVar9));
  puVar42 = (uint *)((int)puVar42 + *piVar23);
  pbVar37 = (byte *)((int)piVar23 + *piVar23);
  bVar8 = (byte)pbVar37;
  *pbVar37 = *pbVar37 + bVar8;
  *(byte *)puVar42 = (byte)*puVar42 + cVar9;
  bVar10 = *pbVar37;
  *pbVar37 = *pbVar37 + bVar8;
  *(byte **)pbVar37 = unaff_EBP + (uint)CARRY1(bVar10,bVar8) + *(int *)pbVar37;
  piVar23 = (int *)CONCAT31((int3)((uint)pbVar37 >> 8),*pbVar37);
  *(byte *)puVar46 = (byte)*puVar46 + cVar9;
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(byte)puVar46 | (byte)*puVar46);
  pbVar37 = (byte *)((int)puVar38 + -0x43);
  *pbVar37 = *pbVar37 + (char)((uint)puVar46 >> 8);
  puVar46 = puVar38;
  puVar38 = puVar47;
  uVar50 = uVar48;
code_r0x00402e42:
  uVar48 = uVar51;
  puVar47 = puVar38;
  uVar51 = uVar48;
  if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402e6e;
  iVar20 = *(int *)((int)piVar23 + *piVar23);
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar22;
  piVar23 = (int *)(iVar20 + -0x8c6f);
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((byte)((uint)puVar46 >> 8) | *(byte *)((int)puVar46 + -0x3f),
                                      (char)puVar46));
  pbVar24 = (byte *)((int)piVar23 + *piVar23);
  pbVar37 = pbVar24;
  puVar47 = uStackY_2c;
  if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar24 = *pbVar24 + (char)pbVar24;
  puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                             CONCAT11((byte)((uint)puVar22 >> 8) | (byte)*puVar46,(char)puVar22));
  puVar38 = puVar42 + (uint)bVar53 * -2 + 1;
  out(*puVar42,(short)puVar46);
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(char)puVar46 + (byte)*puVar47);
  puVar42 = puVar38 + (uint)bVar53 * -2 + 1;
  out(*puVar38,(short)puVar46);
  uVar50 = uVar48;
  uVar51 = uVar49;
code_r0x00402e6e:
  uVar48 = uVar50;
  uVar26 = (undefined3)((uint)puVar46 >> 8);
  cVar9 = (char)puVar46 + (byte)*puVar47;
  puVar38 = puVar42 + (uint)bVar53 * -2 + 1;
  out(*puVar42,(short)CONCAT31(uVar26,cVar9));
  puVar46 = (uint *)CONCAT31(uVar26,cVar9 + (byte)*puVar47);
  puVar42 = puVar38 + (uint)bVar53 * -2 + 1;
  out(*puVar38,(short)puVar46);
  pbVar37 = (byte *)0x0;
  puVar38 = puVar47;
code_r0x00402e81:
  puVar47 = puVar38;
  bVar8 = (char)pbVar37 - *pbVar37;
  iVar20 = CONCAT31((int3)((uint)pbVar37 >> 8),bVar8);
  *pbVar14 = *pbVar14 + (char)puVar46;
  pbVar24 = (byte *)(iVar20 * 2);
  *pbVar24 = *pbVar24 ^ bVar8;
  pbVar24 = (byte *)(int)(short)iVar20;
  *pbVar24 = *pbVar24 + bVar8;
  *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar22;
  bVar10 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar8;
  *(byte **)(pbVar14 + -0x73) =
       (byte *)((int)puVar42 + (uint)CARRY1(bVar10,bVar8) + *(int *)(pbVar14 + -0x73));
  *pbVar24 = *pbVar24 + bVar8;
  bVar10 = (byte)puVar22 | (byte)*puVar46;
  puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar10);
  puVar38 = puVar42;
  if ((char)bVar10 < '\x01') goto code_r0x00402eb4;
  *pbVar24 = *pbVar24 + bVar8;
  pbVar37 = (byte *)CONCAT31((int3)(char)((uint)pbVar37 >> 8),bVar8 + 0x2d);
  puVar42[(int)puVar47 * 2] =
       (uint)((int)puVar46 + (uint)(0xd2 < bVar8) + puVar42[(int)puVar47 * 2]);
  pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar49);
  do {
    uVar16 = *puVar42;
    bVar10 = (byte)pbVar37;
    *(byte *)puVar42 = (byte)*puVar42 + bVar10;
    if (!CARRY1((byte)uVar16,bVar10)) break;
    *pbVar37 = *pbVar37 + bVar10;
    bVar10 = bVar10 | pbVar37[0x400001a];
    pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar37 >> 8),bVar10);
    if ((char)bVar10 < '\x01') {
code_r0x00402ecc:
      *pbVar24 = *pbVar24 + (byte)pbVar24;
      uVar26 = (undefined3)((uint)pbVar24 >> 8);
      bVar10 = (byte)pbVar24 | pbVar24[0x400001b];
      pcVar41 = (char *)CONCAT31(uVar26,bVar10);
      if ((char)bVar10 < '\x01') {
        uVar16 = *puVar46;
        *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar22;
        *(char *)((int)pcVar41 * 2) =
             *(char *)((int)pcVar41 * 2) - CARRY1((byte)uVar16,(byte)puVar22);
        bVar52 = 0x81 < bVar10;
        bVar10 = bVar10 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar24 = *pbVar24 + bVar10;
      puVar38 = puVar42;
code_r0x00402eb4:
      uVar26 = (undefined3)((uint)pbVar24 >> 8);
      bVar10 = (char)pbVar24 + 0x6f;
      pcVar41 = (char *)CONCAT31(uVar26,bVar10);
      *(byte **)pcVar41 = pbStackY_48;
      uVar16 = *puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + (char)puVar22;
      pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar49);
      in_DS = uVar49;
      if ((byte)*puVar46 != 0 && SCARRY1((byte)uVar16,(char)puVar22) == (char)(byte)*puVar46 < '\0')
      {
        *pcVar41 = *pcVar41 + bVar10;
        bVar8 = (char)pbVar24 + 0x9c;
        pbVar24 = (byte *)CONCAT31(uVar26,bVar8);
        puVar38[(int)puVar47 * 2] =
             (uint)((int)puVar46 + (uint)(0xd2 < bVar10) + puVar38[(int)puVar47 * 2]);
        pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar49);
        uVar16 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar8;
        puVar42 = puVar38;
        if (CARRY1((byte)uVar16,bVar8)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar42 = puVar38 + (uint)bVar53 * -2 + 1;
      out(*puVar38,(short)puVar46);
    }
    cVar9 = (char)pcVar41;
    *pcVar41 = *pcVar41 + cVar9;
    uVar26 = (undefined3)((uint)pcVar41 >> 8);
    bVar10 = cVar9 + 0x6f;
    pcVar41 = (char *)CONCAT31(uVar26,bVar10);
    *(byte **)pcVar41 = pbStackY_48;
    uVar16 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar22;
    pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar49);
    *(byte *)(puVar42 + 7) = ((byte)puVar42[7] - bVar44) - CARRY1((byte)uVar16,(byte)puVar22);
    *pcVar41 = *pcVar41 + bVar10;
    bVar8 = cVar9 + 0x9c;
    pcVar41 = (char *)CONCAT31(uVar26,bVar8);
    puVar42[(int)puVar47 * 2] =
         (uint)((int)puVar46 + (uint)(0xd2 < bVar10) + puVar42[(int)puVar47 * 2]);
    uVar16 = *puVar42;
    *(byte *)puVar42 = (byte)*puVar42 + bVar8;
    if (!CARRY1((byte)uVar16,bVar8)) goto code_r0x00402e7e;
    *pcVar41 = *pcVar41 + bVar8;
    bVar8 = bVar8 | pcVar41[0x400001c];
    pbVar37 = (byte *)CONCAT31(uVar26,bVar8);
    uVar51 = uVar49;
    if ((char)bVar8 < '\x01') goto code_r0x00402f16;
    *pbVar37 = *pbVar37 + bVar8;
    pcVar41 = (char *)CONCAT31(uVar26,bVar8 + 0x6f);
    while( true ) {
      *(byte **)pcVar41 = pbStackY_48;
      uVar16 = *puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar22;
      *(uint *)((int)puVar42 + 0x1d) =
           (*(int *)((int)puVar42 + 0x1d) - (int)puVar47) - (uint)CARRY1((byte)uVar16,(byte)puVar22)
      ;
      bVar10 = (byte)pcVar41;
      *pcVar41 = *pcVar41 + bVar10;
      bVar8 = bVar10 + 0x2d;
      pbVar37 = (byte *)CONCAT31((int3)((uint)pcVar41 >> 8),bVar8);
      puVar42[(int)puVar47 * 2] =
           (uint)((int)puVar46 + (uint)(0xd2 < bVar10) + puVar42[(int)puVar47 * 2]);
      pbStackY_48 = (byte *)CONCAT22((short)((uint)pbStackY_48 >> 0x10),uVar49);
      uVar16 = *puVar42;
      *(byte *)puVar42 = (byte)*puVar42 + bVar8;
      if (!CARRY1((byte)uVar16,bVar8)) break;
      *pbVar37 = *pbVar37 + bVar8;
code_r0x00402f16:
      bVar10 = (byte)pbVar37 | pbVar37[0x400001d];
      puVar38 = (uint *)CONCAT31((int3)((uint)pbVar37 >> 8),bVar10);
      pbVar37 = unaff_EBP;
      if ((char)bVar10 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar37;
        *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
        uVar26 = (undefined3)((uint)puVar38 >> 8);
        cVar9 = (char)puVar38 + 'o';
        puVar18 = (uint *)CONCAT31(uVar26,cVar9);
        *puVar18 = (uint)pbStackY_48;
        cVar11 = (char)puVar22;
        *(byte *)puVar46 = (byte)*puVar46 + cVar11;
        pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar49);
        bVar10 = (byte)((uint)puVar46 >> 8);
        bVar52 = bVar10 < (byte)*puVar42;
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                   CONCAT11(bVar10 - (byte)*puVar42,(char)puVar46));
        if (bVar52) break;
        bVar52 = CARRY4((uint)puVar18,*puVar18);
        puVar38 = (uint *)((int)puVar18 + *puVar18);
        if (!SCARRY4((int)puVar18,*puVar18)) {
          bVar52 = CARRY4((uint)unaff_EBP,*puVar38);
          unaff_EBP = unaff_EBP + *puVar38;
        }
        *puVar38 = (*puVar38 - (int)puVar38) - (uint)bVar52;
        *(byte *)puVar46 = (byte)*puVar46 + cVar11;
        puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                   CONCAT11((char)((uint)puVar22 >> 8) + (byte)*puVar46,
                                            cVar11 - (byte)*puVar46));
        *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
code_r0x00402f3b:
        cVar11 = (char)puVar46;
        *pbVar14 = *pbVar14 + cVar11;
        bVar10 = (byte)puVar38;
        *(byte *)((int)puVar38 * 2) = *(byte *)((int)puVar38 * 2) ^ bVar10;
        *(byte *)puVar38 = (byte)*puVar38 + bVar10;
        *(byte *)puVar38 = (byte)*puVar38 + cVar11;
        uVar16 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar10;
        *puVar46 = (uint)((int)puVar38 + (uint)CARRY1((byte)uVar16,bVar10) + *puVar46);
        pcVar41 = (char *)((uint)puVar38 | *puVar47);
        uVar26 = (undefined3)((uint)pcVar41 >> 8);
        cVar9 = (char)pcVar41 + *pcVar41;
        pcVar41 = (char *)CONCAT31(uVar26,cVar9);
        *pcVar41 = *pcVar41 + cVar9;
        cVar9 = cVar9 + *pcVar41;
        piVar23 = (int *)CONCAT31(uVar26,cVar9);
        *(char *)piVar23 = (char)*piVar23 + cVar9;
        iVar20 = LocalDescriptorTableRegister();
        *piVar23 = iVar20;
        bVar10 = *pbVar14;
        bVar31 = (byte)((uint)puVar22 >> 8);
        *pbVar14 = *pbVar14 + bVar31;
        iVar20 = *piVar23;
        uVar34 = (undefined2)((uint)puVar22 >> 0x10);
        bVar30 = (byte)puVar22;
        *(byte *)puVar42 = (byte)*puVar42 + cVar9;
        puVar22 = puVar42 + (uint)bVar53 * -2 + 1;
        out(*puVar42,(short)puVar46);
        *(byte *)puVar22 = (byte)*puVar22 + cVar9;
        bVar8 = *pbVar14;
        *(byte *)puVar46 = (byte)*puVar46 - bVar44;
        *(byte *)puVar22 = (byte)*puVar22 + cVar9;
        puVar18 = puVar22 + (uint)bVar53 * -2 + 1;
        out(*puVar22,(short)puVar46);
        *(byte *)puVar18 = (byte)*puVar18 + cVar9;
        bVar43 = *pbVar14;
        *(uint *)((int)puVar46 + -0x23) = *(uint *)((int)puVar46 + -0x23) & (uint)puVar18;
        puVar25 = (ushort *)((int)piVar23 + *piVar23);
        if (!SCARRY4((int)piVar23,*piVar23)) {
          *puVar25 = in_DS;
        }
        *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
        uVar35 = CONCAT11((char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + -0x15),cVar11);
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),uVar35);
        puVar38 = (uint *)((int)puVar25 + *(int *)puVar25);
        if (!SCARRY4((int)puVar25,*(int *)puVar25)) {
          *(ushort *)puVar38 = in_DS;
        }
        cVar9 = (char)puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + cVar9;
        cVar32 = ((bVar31 - (char)iVar20) - CARRY1(bVar10,bVar31) | bVar8 | bVar43) + (byte)*puVar38
        ;
        puVar22 = (uint *)CONCAT22(uVar34,CONCAT11(cVar32,bVar30));
        uVar16 = *puVar46;
        *(byte *)puVar46 = (byte)*puVar46 + bVar30;
        if (CARRY1((byte)uVar16,bVar30)) {
          *(byte *)puVar38 = (byte)*puVar38 + cVar9;
          bVar10 = *(byte *)((int)puVar46 + 6);
          *(byte *)puVar46 = (byte)*puVar46 + bVar30;
          bVar8 = (cVar32 - (byte)*puVar18) + cRam14730307;
          *(byte *)puVar38 = (byte)*puVar38 + cVar9;
          bVar10 = bVar44 | bVar10 | *(byte *)((int)puVar46 + 0x2a);
          uVar16 = *puVar38;
          pbVar14 = (byte *)((int)puVar38 + (uint)CARRY1(bVar8,(byte)*puVar38) + *puVar38);
          *(byte *)puVar46 = (byte)*puVar46 + bVar30;
          cVar9 = cVar7 - (byte)*puVar18;
          cVar7 = bVar10 + *(char *)(CONCAT31((int3)(CONCAT22(uVar33,CONCAT11(bVar10,cVar7)) >> 8),
                                              cVar9) + 0x1e);
          *pbVar14 = *pbVar14 + (char)pbVar14;
          uVar26 = (undefined3)((uint)pbVar14 >> 8);
          bVar10 = (char)pbVar14 + 0x2aU & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
          pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar7,cVar9)) + 0x1f);
          *pcVar41 = *pcVar41 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
          pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar7,cVar9)) + 0x20);
          *pcVar41 = *pcVar41 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
          pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar7,cVar9)) + 0x21);
          *pcVar41 = *pcVar41 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
          pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar7,cVar9)) + 0x22);
          *pcVar41 = *pcVar41 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
          pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
          bVar8 = bVar8 + (byte)uVar16 + *pcVar41;
          uVar28 = CONCAT22(uVar34,CONCAT11(bVar8,bVar30));
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar7,cVar9)) + 0x25);
          *pcVar41 = *pcVar41 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
          pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
          pcVar15 = (char *)CONCAT22(uVar33,CONCAT11(cVar7 + *(char *)(CONCAT22(uVar33,CONCAT11(
                                                  cVar7,cVar9)) + 0x26),cVar9));
          *pcVar41 = *pcVar41 + bVar10 + 0x2a;
          bVar10 = bVar10 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
          cVar9 = bVar10 + 0x2a;
          pcVar41 = (char *)CONCAT31(uVar26,cVar9);
          if ((POPCOUNT(cVar9) & 1U) == 0) {
            *pcVar41 = *pcVar41 + cVar9;
            pbVar14 = (byte *)(CONCAT31(uVar26,bVar10 + 0x4f) + -0x33282610);
            bVar10 = *pbVar14;
            bVar43 = (byte)pbVar14;
            *pbVar14 = *pbVar14 + bVar43;
            uVar26 = (undefined3)((uint)pbVar14 >> 8);
            if (!CARRY1(bVar10,bVar43)) {
              if (!SCARRY1(bVar43,'\0')) {
                *pbVar14 = *pbVar14 + bVar43;
                uVar28 = CONCAT22(uVar34,CONCAT11(bVar8 | (byte)*puVar46,bVar30));
                bVar43 = bVar43 & (byte)*puVar46;
                *(char *)CONCAT31(uVar26,bVar43) = *(char *)CONCAT31(uVar26,bVar43) + bVar43;
                pcVar41 = (char *)CONCAT31(uVar26,bVar43 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar41 = (char *)CONCAT31(uVar26,bVar43 + *pcVar15);
              if (SCARRY1(bVar43,*pcVar15) != (char)(bVar43 + *pcVar15) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar10 = bVar43 + *pcVar15;
            pbVar14 = (byte *)CONCAT31(uVar26,bVar10);
            if (SCARRY1(bVar43,*pcVar15) == (char)bVar10 < '\0') {
              pcVar41 = (char *)CONCAT22(uVar34,CONCAT11(bVar8 | (byte)*puVar46,bVar30));
              *pcVar15 = *pcVar15 + cVar11;
              *(byte *)puVar46 = (byte)*puVar46 ^ bVar10;
              *(char *)((int)pbVar14 * 2) = *(char *)((int)pbVar14 * 2) + bVar10;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar41 = *pcVar41 + (char)pcVar41;
            uVar26 = (undefined3)((uint)pcVar41 >> 8);
            bVar10 = (char)pcVar41 + 0x2aU & (byte)*puVar46;
            *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
            pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
            *pcVar41 = *pcVar41 + bVar10 + 0x2a;
            pcVar41 = (char *)CONCAT31(uVar26,bVar10 + 0x54 & (byte)*puVar46);
code_r0x00403072:
            cVar9 = (char)pcVar41;
            *pcVar41 = *pcVar41 + cVar9;
            uVar26 = (undefined3)((uint)pcVar41 >> 8);
            pcVar41 = (char *)CONCAT31(uVar26,cVar9 + '*');
            *pcVar41 = *pcVar41 + cVar9 + '*';
            bVar10 = cVar9 + 0x54U & (byte)*puVar46;
            *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,uVar48);
            uVar28 = CONCAT22((short)((uint)uVar28 >> 0x10),
                              CONCAT11((char)((uint)uVar28 >> 8) +
                                       *(char *)CONCAT31(uVar26,bVar10 + 0x2a),(char)uVar28));
            *(byte *)(puVar18 + 0x828000) = (byte)puVar18[0x828000] - cVar11;
            pcVar41 = pcStackY_80;
code_r0x0040309a:
            cVar9 = (char)pcVar41;
            *pcVar41 = *pcVar41 + cVar9;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,uVar49);
            *pcVar41 = *pcVar41 + cVar9;
            pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar41 >> 8),cVar9 + 0x2aU & (byte)*puVar46);
          }
          cVar9 = (char)pbVar14;
          *pbVar14 = *pbVar14 + cVar9;
          uVar26 = (undefined3)((uint)pbVar14 >> 8);
          cVar7 = cVar9 + '*';
          pcVar41 = (char *)CONCAT31(uVar26,cVar7);
          *(byte *)(puVar18 + 0x828000) = (byte)puVar18[0x828000] - cVar11;
          *pcVar41 = *pcVar41 + cVar7;
          cVar32 = (char)pcStackY_80 - (byte)*puVar18;
          pcVar15 = (char *)CONCAT22((short)((uint)pcStackY_80 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_80 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_80 >> 8),
                                                                 cVar32) + 0x34),cVar32));
          *pcVar41 = *pcVar41 + cVar7;
          bVar10 = cVar9 + 0x54U & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
          pbVar14 = (byte *)CONCAT31(uVar26,bVar10 + 0x2a);
          bVar10 = (byte)((uint)uVar28 >> 8);
          pcVar41 = (char *)CONCAT22((short)((uint)uVar28 >> 0x10),
                                     CONCAT11(bVar10 + *pbVar14,(char)uVar28));
          pbVar14 = pbVar14 + (uint)CARRY1(bVar10,*pbVar14) + *(int *)pbVar14;
          *(byte *)puVar46 = (byte)*puVar46 + (char)uVar28;
          uVar26 = (undefined3)((uint)pbVar14 >> 8);
          cVar9 = (byte)pbVar14 - *pbVar14;
          piVar23 = (int *)CONCAT31(uVar26,cVar9);
          puVar18 = (uint *)((int)puVar18 + (uint)((byte)pbVar14 < *pbVar14) + *piVar23);
          cVar9 = cVar9 + (char)*piVar23;
          pbVar14 = (byte *)CONCAT31(uVar26,cVar9);
          *pbVar14 = *pbVar14 + cVar9;
code_r0x004030df:
          *pcVar41 = *pcVar41 + cVar11;
          bVar10 = *pbVar14;
          bVar8 = (byte)pbVar14;
          *pbVar14 = *pbVar14 + bVar8;
          *(byte **)(pcVar15 + -0x41) =
               (byte *)((int)puVar18 + (uint)CARRY1(bVar10,bVar8) + *(int *)(pcVar15 + -0x41));
          *pbVar14 = *pbVar14 + bVar8;
          uVar26 = (undefined3)((uint)pbVar14 >> 8);
          bVar8 = bVar8 | (byte)*puVar18;
          *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
          pcVar41 = (char *)CONCAT31(uVar26,bVar8 + 0x7b);
          *pcVar41 = *pcVar41 + bVar8 + 0x7b;
          pbVar14 = (byte *)((int)puVar18 + CONCAT31(uVar26,bVar8 - 8) + -1);
          *pbVar14 = *pbVar14 + (bVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar42 = puVar18 + (uint)bVar53 * -2 + 1;
        out(*puVar18,uVar35);
        pbVar37 = unaff_EBP + 1;
        pbStackY_48 = unaff_EBP;
      }
      bVar10 = cVar9 - bVar52;
      pbVar37 = (byte *)((int)puVar42 + (int)puVar47 * 2);
      bVar52 = CARRY1(*pbVar37,bVar10);
      *pbVar37 = *pbVar37 + bVar10;
code_r0x00402ef9:
      pcVar41 = (char *)CONCAT31(uVar26,bVar10 - bVar52);
      pbVar37 = (byte *)((int)puVar47 + (int)unaff_EBP * 2);
      *pbVar37 = *pbVar37 + (bVar10 - bVar52);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar46;
  puVar38 = puVar46 + 0x2828000;
  bVar10 = (byte)puVar22;
  bVar52 = (byte)*puVar38 < bVar10;
  *(byte *)puVar38 = (byte)*puVar38 - bVar10;
  bVar10 = (byte)pbVar37 + *pbVar37;
  piVar23 = (int *)CONCAT31((int3)((uint)pbVar37 >> 8),bVar10 + bVar52);
  puVar38 = puVar47;
  uVar50 = uVar48;
  if (CARRY1((byte)pbVar37,*pbVar37) || CARRY1(bVar10,bVar52)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar41 = *pcVar41 + bVar8;
  uVar50 = uVar48;
  uVar51 = uVar49;
  goto code_r0x00402e6e;
code_r0x00402674:
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),
                             (char)pbVar14 + pbVar14[(int)unaff_EBP] + bVar52);
  unaff_ESI = (uint *)((int)unaff_ESI + -1);
  pbVar13 = unaff_retaddr;
code_r0x00402678:
  *pbVar14 = *pbVar14 + (char)pbVar14;
  reader = (byte *)CONCAT22((short)((uint)reader >> 0x10),
                            CONCAT11((byte)((uint)reader >> 8) | bRam7d160243,(char)reader));
  uVar50 = in_CS;
code_r0x00402680:
  in_CS = in_stack_fffffff8;
  bVar10 = (byte)reader;
  *reader = *reader + bVar10;
  iVar20 = CONCAT31((int3)((uint)reader >> 8),bVar10 + 2);
  piVar23 = (int *)((int)pbVar13 * 2 + 0x400009a);
  *piVar23 = *piVar23 + iVar20 + (uint)(0xfd < bVar10);
  pbVar37 = (byte *)CONCAT22((short)((uint)pbVar37 >> 0x10),
                             CONCAT11((char)((uint)pbVar37 >> 8) + *(char *)((int)param_2 * 5),
                                      (char)pbVar37));
  *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + bVar10 + 2;
  unaff_EDI = pbVar13;
  goto code_r0x00402693;
}


