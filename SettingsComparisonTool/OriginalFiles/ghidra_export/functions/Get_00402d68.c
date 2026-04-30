/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402d68
 * Raw Name    : Get
 * Demangled   : Get
 * Prototype   : char * Get(byte * ex, byte * param_2)
 * Local Vars  : unaff_EDI, in_ES, in_SS, in_DS, in_CF, bVar30, bVar31, param_2, ex, pcStack_5c, uStack_24, uStack_c, puStack_8, uStack_4, uVar1, uVar2, cVar3, bVar4, in_EAX, pcVar5, piVar6, pbVar7, puVar8, puVar9, puVar10, uVar11, bVar12, iVar13, uVar14, bVar15, bVar16, cVar17, uVar18, bVar19, uVar20, cVar21, unaff_EBX, pcVar22, bVar23, cVar24, uVar25, unaff_EBP, unaff_ESI, pbVar26, pbVar27, pbVar28, pbVar29
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall Get(byte *ex,byte *param_2)

{
  undefined6 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  char *in_EAX;
  char *pcVar5;
  undefined3 uVar11;
  int *piVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar10;
  byte bVar12;
  byte bVar15;
  int iVar13;
  byte bVar16;
  char cVar17;
  undefined2 uVar18;
  undefined4 uVar14;
  byte bVar19;
  undefined2 uVar20;
  char cVar21;
  byte bVar23;
  undefined2 uVar25;
  char *unaff_EBX;
  char cVar24;
  char *pcVar22;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  uint *unaff_EDI;
  ushort in_ES;
  ushort in_SS;
  ushort in_DS;
  bool in_CF;
  bool bVar30;
  bool bVar31;
  char *pcStack_5c;
  uint uStack_24;
  ushort uStack_c;
  uint *puStack_8;
  ushort uStack_4;
  
  bVar30 = false;
                    /* .NET CLR Managed Code */
  if (!in_CF) goto code_r0x00402d55;
  *in_EAX = *in_EAX + (char)in_EAX;
  pbVar27 = param_2;
  uStack_4 = in_ES;
  while( true ) {
    pcVar5 = (char *)((uint)in_EAX | 8);
    bVar23 = (byte)((uint)unaff_EBX >> 8);
    *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar23;
    *pbVar27 = *pbVar27 + (char)ex;
    pbVar26 = unaff_ESI + (uint)bVar30 * -8 + 4;
    out(*(undefined4 *)unaff_ESI,(short)pbVar27);
    *pcVar5 = *pcVar5;
    cVar3 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar3;
    bVar12 = *(byte *)(unaff_EBP - 0x5a);
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar24 = (char)unaff_EBX;
    *pcVar5 = *pcVar5 + cVar3;
    cVar3 = cVar3 + '\x02';
    ex = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),cVar3);
    unaff_ESI = pbVar26 + (uint)bVar30 * -8 + 4;
    out(*(undefined4 *)pbVar26,(short)pbVar27);
    *ex = *ex;
    bVar19 = (byte)pbVar27 | (byte)*unaff_EDI;
    param_2 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),bVar19);
    *ex = *ex + cVar3;
    pcVar5 = (char *)((uint)ex | 0xa1f1609);
    bVar30 = (uStack_4 & 0x400) != 0;
    *(uint *)((int)unaff_EDI + -0x7d) = *(uint *)((int)unaff_EDI + -0x7d) | unaff_EBP;
    bVar4 = (byte)pcVar5;
    *pcVar5 = *pcVar5 + bVar4;
    bVar23 = bVar23 | bVar12 | unaff_ESI[0x19];
    pbVar26 = (byte *)CONCAT22(uVar25,CONCAT11(bVar23,cVar24));
    *pcVar5 = *pcVar5 + bVar4;
    uVar11 = (undefined3)((uint)pcVar5 >> 8);
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < bVar4) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    bVar4 = bVar4 + 0x2d ^ *(byte *)CONCAT31(uVar11,bVar4 + 0x2d);
    pcVar5 = (char *)CONCAT31(uVar11,bVar4);
    bVar12 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar4;
    if (CARRY1(bVar12,bVar4)) break;
    while( true ) {
      uVar25 = (undefined2)((uint)pbVar26 >> 0x10);
      bVar23 = (char)((uint)pbVar26 >> 8) + pbVar26[0x18];
      *pcVar5 = *pcVar5 + (char)pcVar5;
      pbVar27 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),(char)pcVar5 + 'o');
      cVar24 = (char)ex;
      *param_2 = *param_2 + cVar24;
      bVar12 = *unaff_ESI;
      bVar19 = (byte)((uint)ex >> 8);
      bVar4 = *pbVar27;
      pbVar27 = pbVar27 + (uint)CARRY1(bVar19,*pbVar27) + *(int *)pbVar27;
      *param_2 = *param_2 + cVar24;
      cVar21 = ((char)pbVar26 - bVar12) - *unaff_ESI;
      bVar12 = *(byte *)((int)unaff_EDI + 0x1a);
      *pbVar27 = *pbVar27 + (char)pbVar27;
      ex = (byte *)CONCAT22((short)((uint)ex >> 0x10),
                            CONCAT11(bVar19 + bVar4 + bVar12 | *param_2,cVar24));
      pbVar27 = pbVar27 + *(int *)param_2;
      uVar11 = (undefined3)((uint)pbVar27 >> 8);
      cVar3 = (char)pbVar27;
      if ((POPCOUNT((uint)pbVar27 & 0xff) & 1U) == 0) break;
      bVar23 = bVar23 | *(byte *)(unaff_EBP - 0x62);
      iVar13 = CONCAT22(uVar25,CONCAT11(bVar23,cVar21));
      *pbVar27 = *pbVar27 + cVar3;
      cRam00009d7d = cRam00009d7d + (char)param_2;
      bVar4 = cVar3 + 0x24;
      pcVar5 = (char *)(iVar13 + -0x62);
      *pcVar5 = *pcVar5 + bVar23;
      *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4;
      bVar12 = cVar3 + 0x2fU + *ex;
      cVar17 = bVar12 + (0xf4 < bVar4);
      cVar3 = cVar17 + *(char *)CONCAT31(uVar11,cVar17) +
              (CARRY1(cVar3 + 0x2fU,*ex) || CARRY1(bVar12,0xf4 < bVar4));
      pcVar5 = (char *)CONCAT31(uVar11,cVar3);
      *pcVar5 = *pcVar5 - (char)param_2;
      *pcVar5 = *pcVar5 + cVar3;
      pbVar26 = param_2 + -*(int *)param_2;
      unaff_ESI[iVar13 * 4] = unaff_ESI[iVar13 * 4] + bVar23;
      pcVar5[unaff_EBP] = pcVar5[unaff_EBP] + cVar3;
      *pbVar26 = *pbVar26 + cVar24;
      pcVar5 = (char *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                CONCAT11((char)((uint)pbVar27 >> 8) - *pbVar26,cVar3));
      param_2 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(char)pbVar26 + (byte)*unaff_EDI);
      *pcVar5 = *pcVar5 - (char)((uint)pbVar26 >> 8);
      *pcVar5 = *pcVar5 + cVar3;
      pbVar26 = (byte *)CONCAT22(uVar25,CONCAT11(bVar23 - *unaff_ESI,cVar21));
      unaff_EBP = unaff_EBP + *(int *)(pbVar26 + (int)ex);
    }
    *pbVar27 = *pbVar27 + cVar3;
    in_EAX = (char *)CONCAT31(uVar11,cVar3 + 'o');
    unaff_EBX = (char *)(CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar23,(char)pbVar26)) >> 8),
                                  cVar21) + -1);
    uStack_4 = in_ES;
code_r0x00402d55:
    bVar12 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar12;
    ex = (byte *)((uint)ex & 0xff);
    *in_EAX = *in_EAX + bVar12;
    *unaff_EBX = *unaff_EBX + (char)param_2;
    *(byte *)((int)in_EAX * 2) = *(byte *)((int)in_EAX * 2) ^ bVar12;
    uVar1 = *(undefined6 *)in_EAX;
    in_ES = (ushort)((uint6)uVar1 >> 0x20);
    pcVar5 = (char *)uVar1;
    *pcVar5 = *pcVar5 + (char)uVar1;
    in_EAX = (char *)((uint)pcVar5 | 0x73110000);
    *unaff_ESI = *unaff_ESI + (char)uVar1;
    pbVar27 = param_2;
  }
  *pcVar5 = *pcVar5 + bVar4;
  bVar4 = bVar4 | pcVar5[0x4000019];
  pcVar5 = (char *)CONCAT31(uVar11,bVar4);
  if ('\0' < (char)bVar4) {
    *pcVar5 = *pcVar5 + bVar4;
    piVar6 = (int *)CONCAT31(uVar11,bVar4 + 0x28);
    *piVar6 = (int)piVar6 + (uint)(0xd7 < bVar4) + *piVar6;
    bVar15 = (byte)((uint)in_EAX >> 8);
    *pbVar26 = *pbVar26 + bVar15;
    uVar18 = CONCAT11((byte)((uint)pbVar27 >> 8) | bVar23,bVar19);
    param_2 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),uVar18);
    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_ES);
    bVar19 = in(uVar18);
    pbVar7 = (byte *)CONCAT31(uVar11,bVar19);
    bVar12 = *pbVar7;
    bVar31 = SCARRY1(*pbVar7,bVar19);
    *pbVar7 = *pbVar7 + bVar19;
    bVar4 = *pbVar7;
    pbVar27 = unaff_ESI;
    uStack_c = in_ES;
    if (!CARRY1(bVar12,bVar19)) goto code_r0x00402e19;
    *pbVar7 = *pbVar7 + bVar19;
    bVar15 = bVar15 | *pbVar7;
    ex = (byte *)CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar15,cVar3));
    pcVar5 = (char *)CONCAT31(uVar11,bVar19 + *pbVar7);
    *pbVar26 = *pbVar26 + bVar15;
  }
  uVar11 = (undefined3)((uint)pcVar5 >> 8);
  bVar4 = (byte)pcVar5 | *param_2;
  pbVar7 = (byte *)CONCAT31(uVar11,bVar4);
  pbVar27 = unaff_ESI + (uint)bVar30 * -8 + 4;
  out(*(undefined4 *)unaff_ESI,(short)param_2);
  LOCK();
  bVar12 = *pbVar7;
  *pbVar7 = bVar4;
  UNLOCK();
  *param_2 = *param_2 + (char)ex;
  piVar6 = (int *)(CONCAT31(uVar11,bVar12) + -0x1b7e07);
  *param_2 = *param_2 + (char)ex;
  iVar13 = (int)ex - *(int *)pbVar26;
  bVar12 = *(byte *)((int)unaff_EDI + -0x7a);
  uVar18 = (undefined2)((uint)iVar13 >> 0x10);
  *(char *)piVar6 = *(char *)piVar6 + (char)piVar6;
  bVar4 = (char)((uint)iVar13 >> 8) + bVar12 | *(byte *)((int)unaff_EDI + 0x17);
  *(char *)piVar6 = *(char *)piVar6 + (char)piVar6;
  uVar11 = (undefined3)(CONCAT22(uVar18,CONCAT11(bVar4,(byte)iVar13)) >> 8);
  bVar12 = (byte)iVar13 | *pbVar26;
  ex = (byte *)CONCAT31(uVar11,bVar12);
  pbVar7 = (byte *)((int)piVar6 + *piVar6);
  pbVar28 = pbVar27;
  if (SCARRY4((int)piVar6,*piVar6)) goto code_r0x00402e0a;
  *ex = *ex + bVar12;
  *(byte **)pbVar26 = param_2 + *(int *)pbVar26;
  piVar6 = (int *)CONCAT31(uVar11,bVar12 + 0x27);
  ex = (byte *)CONCAT22(uVar18,CONCAT11(bVar4 + *(byte *)((int)unaff_EDI + -0x79),bVar12));
  *(byte *)piVar6 = (char)*piVar6 + bVar12 + 0x27;
code_r0x00402dff:
  pbVar7 = (byte *)CONCAT22((short)((uint)piVar6 >> 0x10),
                            CONCAT11((byte)((uint)piVar6 >> 8) | param_2[0x2170411],(byte)piVar6));
  pbVar28 = pbVar27 + (uint)bVar30 * -8 + 4;
  out(*(undefined4 *)pbVar27,(short)param_2);
  *pbVar7 = (byte)piVar6;
  *param_2 = *param_2 + (char)ex;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar7;
  *pbVar7 = *pbVar7 - cVar24;
  *pbVar7 = *pbVar7 + (char)pbVar7;
  bVar31 = false;
  bVar4 = (byte)((uint)ex >> 8) | bRam052b0603;
  ex = (byte *)CONCAT22((short)((uint)ex >> 0x10),CONCAT11(bVar4,(char)ex));
  pbVar27 = pbVar28;
code_r0x00402e19:
  if (bVar4 == 0 || bVar31 != (char)bVar4 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar7;
  *pbVar7 = *pbVar7 + cRam89280411;
  piVar6 = (int *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                           CONCAT11((byte)((uint)pbVar7 >> 8) | param_2[0x7190411],cRam89280411));
  *(char *)piVar6 = (char)*piVar6 + cRam89280411;
  cVar3 = (char)ex;
  ex = (byte *)CONCAT22((short)((uint)ex >> 0x10),CONCAT11((byte)((uint)ex >> 8) | *param_2,cVar3));
  pbVar27 = pbVar27 + *piVar6;
  pbVar7 = (byte *)((int)piVar6 + *piVar6);
  bVar4 = (byte)pbVar7;
  *pbVar7 = *pbVar7 + bVar4;
  *pbVar27 = *pbVar27 + cVar3;
  bVar12 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar4;
  *(uint *)pbVar7 = *(int *)pbVar7 + unaff_EBP + (uint)CARRY1(bVar12,bVar4);
  piVar6 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),*pbVar7);
  *param_2 = *param_2 + cVar3;
  pbVar28 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *param_2);
  pbVar7 = pbVar28 + -0x43;
  *pbVar7 = *pbVar7 + (char)((uint)param_2 >> 8);
  param_2 = pbVar28;
  puVar9 = unaff_EDI;
code_r0x00402e42:
  unaff_EDI = puVar9;
  if (SCARRY4((int)piVar6,*piVar6)) goto code_r0x00402e6e;
  iVar13 = *(int *)((int)piVar6 + *piVar6);
  *param_2 = *param_2 + (char)ex;
  piVar6 = (int *)(iVar13 + -0x8c6f);
  param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11((byte)((uint)param_2 >> 8) | param_2[-0x3f],(char)param_2));
  pbVar28 = (byte *)((int)piVar6 + *piVar6);
  pbVar7 = pbVar28;
  unaff_EDI = puStack_8;
  in_DS = uStack_c;
  if (SCARRY4((int)piVar6,*piVar6)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar28 = *pbVar28 + (char)pbVar28;
  ex = (byte *)CONCAT22((short)((uint)ex >> 0x10),
                        CONCAT11((byte)((uint)ex >> 8) | *param_2,(char)ex));
  pbVar7 = pbVar27 + (uint)bVar30 * -8 + 4;
  out(*(undefined4 *)pbVar27,(short)param_2);
  param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (byte)*unaff_EDI);
  pbVar27 = pbVar7 + (uint)bVar30 * -8 + 4;
  out(*(undefined4 *)pbVar7,(short)param_2);
  uStack_c = in_ES;
code_r0x00402e6e:
  uVar11 = (undefined3)((uint)param_2 >> 8);
  cVar3 = (char)param_2 + (byte)*unaff_EDI;
  pbVar7 = pbVar27 + (uint)bVar30 * -8 + 4;
  out(*(undefined4 *)pbVar27,(short)CONCAT31(uVar11,cVar3));
  param_2 = (byte *)CONCAT31(uVar11,cVar3 + (byte)*unaff_EDI);
  pbVar27 = pbVar7 + (uint)bVar30 * -8 + 4;
  out(*(undefined4 *)pbVar7,(short)param_2);
  pbVar7 = (byte *)0x0;
  puVar9 = unaff_EDI;
code_r0x00402e81:
  unaff_EDI = puVar9;
  bVar4 = (char)pbVar7 - *pbVar7;
  iVar13 = CONCAT31((int3)((uint)pbVar7 >> 8),bVar4);
  *pbVar26 = *pbVar26 + (char)param_2;
  pbVar28 = (byte *)(iVar13 * 2);
  *pbVar28 = *pbVar28 ^ bVar4;
  pbVar28 = (byte *)(int)(short)iVar13;
  *pbVar28 = *pbVar28 + bVar4;
  *(byte *)unaff_EDI = (byte)*unaff_EDI + (byte)ex;
  bVar12 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar4;
  *(byte **)(pbVar26 + -0x73) = pbVar27 + (uint)CARRY1(bVar12,bVar4) + *(int *)(pbVar26 + -0x73);
  *pbVar28 = *pbVar28 + bVar4;
  bVar12 = (byte)ex | *param_2;
  ex = (byte *)CONCAT31((int3)((uint)ex >> 8),bVar12);
  pbVar29 = pbVar27;
  if ((char)bVar12 < '\x01') goto code_r0x00402eb4;
  *pbVar28 = *pbVar28 + bVar4;
  pbVar7 = (byte *)CONCAT31((int3)(char)((uint)pbVar7 >> 8),bVar4 + 0x2d);
  *(byte **)(pbVar27 + (int)unaff_EDI * 8) =
       param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar27 + (int)unaff_EDI * 8);
  uStack_24 = CONCAT22(uStack_24._2_2_,in_ES);
  do {
    bVar12 = *pbVar27;
    bVar4 = (byte)pbVar7;
    *pbVar27 = *pbVar27 + bVar4;
    if (!CARRY1(bVar12,bVar4)) break;
    *pbVar7 = *pbVar7 + bVar4;
    bVar4 = bVar4 | pbVar7[0x400001a];
    pbVar28 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar4);
    if ((char)bVar4 < '\x01') {
code_r0x00402ecc:
      *pbVar28 = *pbVar28 + (byte)pbVar28;
      uVar11 = (undefined3)((uint)pbVar28 >> 8);
      bVar12 = (byte)pbVar28 | pbVar28[0x400001b];
      puVar9 = (uint *)CONCAT31(uVar11,bVar12);
      if ((char)bVar12 < '\x01') {
        bVar4 = *param_2;
        *param_2 = *param_2 + (byte)ex;
        *(char *)((int)puVar9 * 2) = *(char *)((int)puVar9 * 2) - CARRY1(bVar4,(byte)ex);
        bVar31 = 0x81 < bVar12;
        bVar12 = bVar12 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar28 = *pbVar28 + bVar4;
      pbVar29 = pbVar27;
code_r0x00402eb4:
      uVar11 = (undefined3)((uint)pbVar28 >> 8);
      bVar4 = (char)pbVar28 + 0x6f;
      puVar9 = (uint *)CONCAT31(uVar11,bVar4);
      *puVar9 = uStack_24;
      bVar12 = *param_2;
      *param_2 = *param_2 + (char)ex;
      uStack_24 = CONCAT22(uStack_24._2_2_,in_ES);
      in_SS = in_ES;
      if (*param_2 != 0 && SCARRY1(bVar12,(char)ex) == (char)*param_2 < '\0') {
        *(byte *)puVar9 = (char)*puVar9 + bVar4;
        bVar19 = (char)pbVar28 + 0x9c;
        pbVar28 = (byte *)CONCAT31(uVar11,bVar19);
        *(byte **)(pbVar29 + (int)unaff_EDI * 8) =
             param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar29 + (int)unaff_EDI * 8);
        uStack_24 = CONCAT22(uStack_24._2_2_,in_ES);
        bVar12 = *pbVar29;
        *pbVar29 = *pbVar29 + bVar19;
        pbVar27 = pbVar29;
        if (CARRY1(bVar12,bVar19)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      pbVar27 = pbVar29 + (uint)bVar30 * -8 + 4;
      out(*(undefined4 *)pbVar29,(short)param_2);
    }
    cVar3 = (char)puVar9;
    *(char *)puVar9 = (char)*puVar9 + cVar3;
    uVar11 = (undefined3)((uint)puVar9 >> 8);
    bVar4 = cVar3 + 0x6f;
    puVar9 = (uint *)CONCAT31(uVar11,bVar4);
    *puVar9 = uStack_24;
    bVar12 = *param_2;
    *param_2 = *param_2 + (byte)ex;
    uStack_24 = CONCAT22(uStack_24._2_2_,in_ES);
    pbVar27[0x1c] = (pbVar27[0x1c] - bVar23) - CARRY1(bVar12,(byte)ex);
    *(byte *)puVar9 = (char)*puVar9 + bVar4;
    bVar19 = cVar3 + 0x9c;
    pcVar5 = (char *)CONCAT31(uVar11,bVar19);
    *(byte **)(pbVar27 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar27 + (int)unaff_EDI * 8);
    bVar12 = *pbVar27;
    *pbVar27 = *pbVar27 + bVar19;
    if (!CARRY1(bVar12,bVar19)) goto code_r0x00402e7e;
    *pcVar5 = *pcVar5 + bVar19;
    bVar19 = bVar19 | pcVar5[0x400001c];
    pbVar7 = (byte *)CONCAT31(uVar11,bVar19);
    uStack_c = in_ES;
    if ((char)bVar19 < '\x01') goto code_r0x00402f16;
    *pbVar7 = *pbVar7 + bVar19;
    puVar9 = (uint *)CONCAT31(uVar11,bVar19 + 0x6f);
    while( true ) {
      *puVar9 = uStack_24;
      bVar12 = *param_2;
      *param_2 = *param_2 + (byte)ex;
      *(uint *)(pbVar27 + 0x1d) =
           (*(int *)(pbVar27 + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar12,(byte)ex);
      bVar12 = (byte)puVar9;
      *(byte *)puVar9 = (char)*puVar9 + bVar12;
      bVar4 = bVar12 + 0x2d;
      pbVar7 = (byte *)CONCAT31((int3)((uint)puVar9 >> 8),bVar4);
      *(byte **)(pbVar27 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar12) + *(int *)(pbVar27 + (int)unaff_EDI * 8);
      uStack_24 = CONCAT22((short)(uStack_24 >> 0x10),in_ES);
      bVar12 = *pbVar27;
      *pbVar27 = *pbVar27 + bVar4;
      if (!CARRY1(bVar12,bVar4)) break;
      *pbVar7 = *pbVar7 + bVar4;
code_r0x00402f16:
      bVar12 = (byte)pbVar7 | pbVar7[0x400001d];
      puVar9 = (uint *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar12);
      uVar2 = unaff_EBP;
      if ((char)bVar12 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = uVar2;
        *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
        uVar11 = (undefined3)((uint)puVar9 >> 8);
        cVar3 = (char)puVar9 + 'o';
        puVar8 = (uint *)CONCAT31(uVar11,cVar3);
        *puVar8 = uStack_24;
        cVar21 = (char)ex;
        *param_2 = *param_2 + cVar21;
        uStack_24 = CONCAT22(uStack_24._2_2_,in_ES);
        bVar12 = (byte)((uint)param_2 >> 8);
        param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11(bVar12 - *pbVar27,(char)param_2));
        if (bVar12 < *pbVar27) break;
        bVar31 = CARRY4((uint)puVar8,*puVar8);
        puVar9 = (uint *)((int)puVar8 + *puVar8);
        if (!SCARRY4((int)puVar8,*puVar8)) {
          bVar31 = CARRY4(unaff_EBP,*puVar9);
          unaff_EBP = unaff_EBP + *puVar9;
        }
        *puVar9 = (*puVar9 - (int)puVar9) - (uint)bVar31;
        *param_2 = *param_2 + cVar21;
        ex = (byte *)CONCAT22((short)((uint)ex >> 0x10),
                              CONCAT11((char)((uint)ex >> 8) + *param_2,cVar21 - *param_2));
        *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
code_r0x00402f3b:
        cVar21 = (char)param_2;
        *pbVar26 = *pbVar26 + cVar21;
        bVar12 = (byte)puVar9;
        *(byte *)((int)puVar9 * 2) = *(byte *)((int)puVar9 * 2) ^ bVar12;
        *(byte *)puVar9 = (byte)*puVar9 + bVar12;
        *(byte *)puVar9 = (byte)*puVar9 + cVar21;
        uVar2 = *puVar9;
        *(byte *)puVar9 = (byte)*puVar9 + bVar12;
        *(byte **)param_2 =
             (byte *)((int)puVar9 + (uint)CARRY1((byte)uVar2,bVar12) + *(int *)param_2);
        pcVar5 = (char *)((uint)puVar9 | *unaff_EDI);
        uVar11 = (undefined3)((uint)pcVar5 >> 8);
        cVar3 = (char)pcVar5 + *pcVar5;
        pcVar5 = (char *)CONCAT31(uVar11,cVar3);
        *pcVar5 = *pcVar5 + cVar3;
        cVar3 = cVar3 + *pcVar5;
        piVar6 = (int *)CONCAT31(uVar11,cVar3);
        *(char *)piVar6 = (char)*piVar6 + cVar3;
        iVar13 = LocalDescriptorTableRegister();
        *piVar6 = iVar13;
        bVar12 = *pbVar26;
        bVar16 = (byte)((uint)ex >> 8);
        *pbVar26 = *pbVar26 + bVar16;
        iVar13 = *piVar6;
        uVar18 = (undefined2)((uint)ex >> 0x10);
        bVar15 = (byte)ex;
        *pbVar27 = *pbVar27 + cVar3;
        pbVar7 = pbVar27 + (uint)bVar30 * -8 + 4;
        out(*(undefined4 *)pbVar27,(short)param_2);
        *pbVar7 = *pbVar7 + cVar3;
        bVar4 = *pbVar26;
        *param_2 = *param_2 - bVar23;
        *pbVar7 = *pbVar7 + cVar3;
        pbVar28 = pbVar7 + (uint)bVar30 * -8 + 4;
        out(*(undefined4 *)pbVar7,(short)param_2);
        *pbVar28 = *pbVar28 + cVar3;
        bVar19 = *pbVar26;
        *(uint *)(param_2 + -0x23) = *(uint *)(param_2 + -0x23) & (uint)pbVar28;
        puVar10 = (ushort *)((int)piVar6 + *piVar6);
        if (!SCARRY4((int)piVar6,*piVar6)) {
          *puVar10 = in_SS;
        }
        *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
        uVar20 = CONCAT11((char)((uint)param_2 >> 8) + param_2[-0x15],cVar21);
        param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar20);
        puVar9 = (uint *)((int)puVar10 + *(int *)puVar10);
        if (!SCARRY4((int)puVar10,*(int *)puVar10)) {
          *(ushort *)puVar9 = in_SS;
        }
        cVar3 = (char)puVar9;
        *(byte *)puVar9 = (byte)*puVar9 + cVar3;
        cVar17 = ((bVar16 - (char)iVar13) - CARRY1(bVar12,bVar16) | bVar4 | bVar19) + (byte)*puVar9;
        ex = (byte *)CONCAT22(uVar18,CONCAT11(cVar17,bVar15));
        bVar12 = *param_2;
        *param_2 = *param_2 + bVar15;
        if (CARRY1(bVar12,bVar15)) {
          *(byte *)puVar9 = (byte)*puVar9 + cVar3;
          bVar12 = param_2[6];
          *param_2 = *param_2 + bVar15;
          bVar4 = (cVar17 - *pbVar28) + cRam14730307;
          *(byte *)puVar9 = (byte)*puVar9 + cVar3;
          bVar12 = bVar23 | bVar12 | param_2[0x2a];
          uVar2 = *puVar9;
          pbVar27 = (byte *)((int)puVar9 + (uint)CARRY1(bVar4,(byte)*puVar9) + *puVar9);
          *param_2 = *param_2 + bVar15;
          cVar3 = cVar24 - *pbVar28;
          cVar24 = bVar12 + *(char *)(CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar12,cVar24)) >> 8)
                                               ,cVar3) + 0x1e);
          *pbVar27 = *pbVar27 + (char)pbVar27;
          uVar11 = (undefined3)((uint)pbVar27 >> 8);
          bVar12 = (char)pbVar27 + 0x2aU & *param_2;
          *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
          pcVar5 = (char *)CONCAT31(uVar11,bVar12 + 0x2a);
          cVar24 = cVar24 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar24,cVar3)) + 0x1f);
          *pcVar5 = *pcVar5 + bVar12 + 0x2a;
          bVar12 = bVar12 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
          pcVar5 = (char *)CONCAT31(uVar11,bVar12 + 0x2a);
          cVar24 = cVar24 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar24,cVar3)) + 0x20);
          *pcVar5 = *pcVar5 + bVar12 + 0x2a;
          bVar12 = bVar12 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
          pcVar5 = (char *)CONCAT31(uVar11,bVar12 + 0x2a);
          cVar24 = cVar24 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar24,cVar3)) + 0x21);
          *pcVar5 = *pcVar5 + bVar12 + 0x2a;
          bVar12 = bVar12 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
          pcVar5 = (char *)CONCAT31(uVar11,bVar12 + 0x2a);
          cVar24 = cVar24 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar24,cVar3)) + 0x22);
          *pcVar5 = *pcVar5 + bVar12 + 0x2a;
          bVar12 = bVar12 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
          pcVar5 = (char *)CONCAT31(uVar11,bVar12 + 0x2a);
          bVar4 = bVar4 + (byte)uVar2 + *pcVar5;
          uVar14 = CONCAT22(uVar18,CONCAT11(bVar4,bVar15));
          cVar24 = cVar24 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar24,cVar3)) + 0x25);
          *pcVar5 = *pcVar5 + bVar12 + 0x2a;
          bVar12 = bVar12 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
          pcVar5 = (char *)CONCAT31(uVar11,bVar12 + 0x2a);
          pcVar22 = (char *)CONCAT22(uVar25,CONCAT11(cVar24 + *(char *)(CONCAT22(uVar25,CONCAT11(
                                                  cVar24,cVar3)) + 0x26),cVar3));
          *pcVar5 = *pcVar5 + bVar12 + 0x2a;
          bVar12 = bVar12 + 0x54 & *param_2;
          *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
          cVar3 = bVar12 + 0x2a;
          pcVar5 = (char *)CONCAT31(uVar11,cVar3);
          if ((POPCOUNT(cVar3) & 1U) == 0) {
            *pcVar5 = *pcVar5 + cVar3;
            pbVar27 = (byte *)(CONCAT31(uVar11,bVar12 + 0x4f) + -0x33282610);
            bVar12 = *pbVar27;
            bVar19 = (byte)pbVar27;
            *pbVar27 = *pbVar27 + bVar19;
            uVar11 = (undefined3)((uint)pbVar27 >> 8);
            if (!CARRY1(bVar12,bVar19)) {
              if (!SCARRY1(bVar19,'\0')) {
                *pbVar27 = *pbVar27 + bVar19;
                uVar14 = CONCAT22(uVar18,CONCAT11(bVar4 | *param_2,bVar15));
                bVar19 = bVar19 & *param_2;
                *(char *)CONCAT31(uVar11,bVar19) = *(char *)CONCAT31(uVar11,bVar19) + bVar19;
                pcVar5 = (char *)CONCAT31(uVar11,bVar19 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar5 = (char *)CONCAT31(uVar11,bVar19 + *pcVar22);
              if (SCARRY1(bVar19,*pcVar22) != (char)(bVar19 + *pcVar22) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar12 = bVar19 + *pcVar22;
            pbVar27 = (byte *)CONCAT31(uVar11,bVar12);
            if (SCARRY1(bVar19,*pcVar22) == (char)bVar12 < '\0') {
              pcVar5 = (char *)CONCAT22(uVar18,CONCAT11(bVar4 | *param_2,bVar15));
              *pcVar22 = *pcVar22 + cVar21;
              *param_2 = *param_2 ^ bVar12;
              *(char *)((int)pbVar27 * 2) = *(char *)((int)pbVar27 * 2) + bVar12;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar5 = *pcVar5 + (char)pcVar5;
            uVar11 = (undefined3)((uint)pcVar5 >> 8);
            bVar12 = (char)pcVar5 + 0x2aU & *param_2;
            *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
            pcVar5 = (char *)CONCAT31(uVar11,bVar12 + 0x2a);
            *pcVar5 = *pcVar5 + bVar12 + 0x2a;
            pcVar5 = (char *)CONCAT31(uVar11,bVar12 + 0x54 & *param_2);
code_r0x00403072:
            cVar3 = (char)pcVar5;
            *pcVar5 = *pcVar5 + cVar3;
            uVar11 = (undefined3)((uint)pcVar5 >> 8);
            pcVar5 = (char *)CONCAT31(uVar11,cVar3 + '*');
            *pcVar5 = *pcVar5 + cVar3 + '*';
            bVar12 = cVar3 + 0x54U & *param_2;
            *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
            pcStack_5c = (char *)CONCAT22(pcStack_5c._2_2_,in_DS);
            uVar14 = CONCAT22((short)((uint)uVar14 >> 0x10),
                              CONCAT11((char)((uint)uVar14 >> 8) +
                                       *(char *)CONCAT31(uVar11,bVar12 + 0x2a),(char)uVar14));
            pbVar28[0x20a0000] = pbVar28[0x20a0000] - cVar21;
            pcVar5 = pcStack_5c;
code_r0x0040309a:
            cVar3 = (char)pcVar5;
            *pcVar5 = *pcVar5 + cVar3;
            pcStack_5c = (char *)CONCAT22(pcStack_5c._2_2_,in_ES);
            *pcVar5 = *pcVar5 + cVar3;
            pbVar27 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),cVar3 + 0x2aU & *param_2);
          }
          cVar3 = (char)pbVar27;
          *pbVar27 = *pbVar27 + cVar3;
          uVar11 = (undefined3)((uint)pbVar27 >> 8);
          cVar24 = cVar3 + '*';
          pcVar5 = (char *)CONCAT31(uVar11,cVar24);
          pbVar28[0x20a0000] = pbVar28[0x20a0000] - cVar21;
          *pcVar5 = *pcVar5 + cVar24;
          cVar17 = (char)pcStack_5c - *pbVar28;
          pcVar22 = (char *)CONCAT22((short)((uint)pcStack_5c >> 0x10),
                                     CONCAT11((char)((uint)pcStack_5c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_5c >> 8),
                                                                 cVar17) + 0x34),cVar17));
          *pcVar5 = *pcVar5 + cVar24;
          bVar12 = cVar3 + 0x54U & *param_2;
          *(char *)CONCAT31(uVar11,bVar12) = *(char *)CONCAT31(uVar11,bVar12) + bVar12;
          pbVar27 = (byte *)CONCAT31(uVar11,bVar12 + 0x2a);
          bVar12 = (byte)((uint)uVar14 >> 8);
          pcVar5 = (char *)CONCAT22((short)((uint)uVar14 >> 0x10),
                                    CONCAT11(bVar12 + *pbVar27,(char)uVar14));
          pbVar27 = pbVar27 + (uint)CARRY1(bVar12,*pbVar27) + *(int *)pbVar27;
          *param_2 = *param_2 + (char)uVar14;
          uVar11 = (undefined3)((uint)pbVar27 >> 8);
          cVar3 = (byte)pbVar27 - *pbVar27;
          piVar6 = (int *)CONCAT31(uVar11,cVar3);
          pbVar28 = pbVar28 + (uint)((byte)pbVar27 < *pbVar27) + *piVar6;
          cVar3 = cVar3 + (char)*piVar6;
          pbVar27 = (byte *)CONCAT31(uVar11,cVar3);
          *pbVar27 = *pbVar27 + cVar3;
code_r0x004030df:
          *pcVar5 = *pcVar5 + cVar21;
          bVar12 = *pbVar27;
          bVar4 = (byte)pbVar27;
          *pbVar27 = *pbVar27 + bVar4;
          *(byte **)(pcVar22 + -0x41) =
               pbVar28 + (uint)CARRY1(bVar12,bVar4) + *(int *)(pcVar22 + -0x41);
          *pbVar27 = *pbVar27 + bVar4;
          uVar11 = (undefined3)((uint)pbVar27 >> 8);
          bVar4 = bVar4 | *pbVar28;
          *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4;
          pcVar5 = (char *)CONCAT31(uVar11,bVar4 + 0x7b);
          *pcVar5 = *pcVar5 + bVar4 + 0x7b;
          pbVar28[CONCAT31(uVar11,bVar4 - 8) + -1] =
               pbVar28[CONCAT31(uVar11,bVar4 - 8) + -1] + (bVar4 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar27 = pbVar28 + (uint)bVar30 * -8 + 4;
        out(*(undefined4 *)pbVar28,uVar20);
        uVar2 = unaff_EBP + 1;
        uStack_24 = unaff_EBP;
      }
      bVar12 = cVar3 - (bVar12 < *pbVar27);
      pbVar7 = pbVar27 + (int)unaff_EDI * 2;
      bVar31 = CARRY1(*pbVar7,bVar12);
      *pbVar7 = *pbVar7 + bVar12;
code_r0x00402ef9:
      puVar9 = (uint *)CONCAT31(uVar11,bVar12 - bVar31);
      pbVar7 = (byte *)((int)unaff_EDI + unaff_EBP * 2);
      *pbVar7 = *pbVar7 + (bVar12 - bVar31);
    }
  } while( true );
code_r0x00402e36:
  *ex = *ex + (char)param_2;
  pbVar28 = param_2 + 0xa0a0000;
  bVar12 = *pbVar28;
  bVar19 = (byte)ex;
  *pbVar28 = *pbVar28 - bVar19;
  bVar4 = (byte)pbVar7 + *pbVar7;
  piVar6 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar4 + (bVar12 < bVar19));
  puVar9 = unaff_EDI;
  if (CARRY1((byte)pbVar7,*pbVar7) || CARRY1(bVar4,bVar12 < bVar19)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar5 = *pcVar5 + bVar19;
  uStack_c = in_ES;
  goto code_r0x00402e6e;
}


