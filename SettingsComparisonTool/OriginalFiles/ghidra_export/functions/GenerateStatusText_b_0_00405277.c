/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00405277
 * Raw Name    : <GenerateStatusText>b__0
 * Demangled   : <GenerateStatusText>b__0
 * Prototype   : bool <GenerateStatusText>b__0(undefined4 prop, byte * param_2)
 * Local Vars  : pbVar25, unaff_ESI, in_DS, unaff_EDI, in_AF, bVar26, param_2, unaff_retaddr, uVar1, uStack_2, cVar3, bVar2, in_EAX, bVar4, pcVar6, prop, uVar5, piVar8, puVar7, pbVar10, pbVar9, uVar12, puVar11, cVar14, uVar13, iVar16, uVar15, bVar18, iVar17, bVar20, uVar19, iVar22, pbVar21, cVar23, unaff_EBX, pcVar24, unaff_EBP
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */

bool __fastcall <GenerateStatusText>b__0(undefined4 prop,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined3 uVar12;
  uint uVar5;
  char *in_EAX;
  char *pcVar6;
  uint *puVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined3 uVar13;
  uint *puVar11;
  char cVar14;
  byte bVar18;
  undefined4 uVar15;
  int iVar16;
  undefined2 uVar19;
  int iVar17;
  byte bVar20;
  byte *pbVar21;
  int iVar22;
  char cVar23;
  uint *unaff_EBX;
  char *unaff_EBP;
  char *pcVar24;
  byte *pbVar25;
  byte *unaff_ESI;
  int *unaff_EDI;
  undefined2 in_DS;
  bool bVar26;
  byte in_AF;
  undefined2 unaff_retaddr;
  undefined2 uStack_2;
  
                    /* .NET CLR Managed Code */
  uVar15 = CONCAT22((short)((uint)prop >> 0x10),
                    CONCAT11((char)((uint)prop >> 8) + *in_EAX,(char)prop));
  pcVar6 = in_EAX + -0x282b0000;
  do {
    bVar2 = (byte)pcVar6;
    *pcVar6 = *pcVar6 + bVar2;
    unaff_EBP = unaff_EBP + -*(int *)param_2;
    cVar3 = *(char *)((int)unaff_EDI + 0x17);
    *pcVar6 = *pcVar6 + bVar2;
    pbVar10 = (byte *)CONCAT22((short)((uint)uVar15 >> 0x10),
                               CONCAT11((char)((uint)uVar15 >> 8) + cVar3 | *param_2,(char)uVar15));
    *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)unaff_EBX;
    *(byte *)((int)pcVar6 * 2) = *(byte *)((int)pcVar6 * 2) ^ bVar2;
    in_AF = 9 < (bVar2 & 0xf) | in_AF;
    bVar2 = bVar2 + in_AF * -6;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pcVar6 >> 8),
                              bVar2 + (0x9f < bVar2 | in_AF * (bVar2 < 6)) * -0x60);
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    *(char *)((int)pbVar9 * 2) = *(char *)((int)pbVar9 * 2) + (char)((uint)param_2 >> 8);
    bVar26 = CARRY1(*pbVar10,(byte)param_2);
    *pbVar10 = *pbVar10 + (byte)param_2;
GenerateStatusText:
    pbVar25 = unaff_ESI;
    if (!bVar26) {
      while( true ) {
        bVar18 = (byte)pbVar9;
        *param_2 = *param_2 ^ bVar18;
        *param_2 = *param_2 + (char)unaff_EBX;
        *pbVar9 = *pbVar9 + bVar18;
        *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)param_2 >> 8);
        bVar2 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar18;
        uVar5 = *unaff_EBX;
        uVar1 = *unaff_EBX;
        *unaff_EBX = (uint)(pbVar9 + uVar1 + CARRY1(bVar2,bVar18));
        uVar12 = (undefined3)((uint)pbVar9 >> 8);
        if (!CARRY4(uVar5,(uint)pbVar9) &&
            !CARRY4((uint)(pbVar9 + uVar1),(uint)CARRY1(bVar2,bVar18))) break;
        *param_2 = *param_2 + bVar18;
        *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)param_2;
        *pbVar9 = *pbVar9 + bVar18;
        pbVar9 = (byte *)CONCAT31(uVar12,bVar18 | (byte)*unaff_EBX);
        while( true ) {
          *pbVar25 = *pbVar25 + (char)pbVar9;
          cVar3 = (char)pbVar9 + 'r';
          unaff_ESI = pbVar25 + -1;
          uVar5 = CONCAT31((int3)((uint)pbVar9 >> 8),cVar3);
          *unaff_ESI = *unaff_ESI + cVar3;
          bVar26 = 0xfff38f8d < uVar5;
          iVar16 = uVar5 + 0xc7072;
          if (!SCARRY4(uVar5,0xc7072)) {
            bVar2 = (byte)iVar16;
            *unaff_ESI = *unaff_ESI + bVar2;
            bVar26 = CARRY1(bVar2,(byte)*unaff_EBX);
            uVar12 = (undefined3)((uint)iVar16 >> 8);
            cVar3 = bVar2 + (byte)*unaff_EBX;
            pbVar9 = (byte *)CONCAT31(uVar12,cVar3);
            if (SCARRY1(bVar2,(byte)*unaff_EBX) == cVar3 < '\0') goto GenerateStatusText;
            *pbVar9 = *pbVar9 + cVar3;
            uVar5 = CONCAT31(uVar12,cVar3 + '\'') + 0x1ebd9f3;
            piVar8 = (int *)(uVar5 ^ 0x73060000);
            pbVar10 = pbVar10 + 1;
            *piVar8 = (int)(*piVar8 + (int)piVar8);
            unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x7e],
                                                  (char)unaff_EBX));
            cVar3 = (char)uVar5;
            *(char *)piVar8 = (char)*piVar8 + cVar3;
            uVar5 = CONCAT31((int3)((uint)piVar8 >> 8),cVar3 + '\x02');
            bVar26 = 0xd9f2d2da < uVar5;
            iVar16 = uVar5 + 0x260d2d25;
          }
          uVar12 = (undefined3)((uint)iVar16 >> 8);
          bVar18 = (char)iVar16 + -2 + bVar26;
          pbVar9 = (byte *)CONCAT31(uVar12,bVar18);
          bVar2 = *pbVar9;
          *pbVar9 = *pbVar9 + bVar18;
          bVar20 = (byte)unaff_EBX;
          if (CARRY1(bVar2,bVar18)) break;
          cVar3 = (char)pbVar10;
          *param_2 = *param_2 + cVar3;
          *(byte **)pbVar9 = param_2 + *(int *)pbVar9;
          *pbVar9 = *pbVar9 + bVar18;
          bVar18 = bVar18 + *pbVar9;
          pbVar9 = (byte *)CONCAT31(uVar12,bVar18);
          pbVar21 = unaff_ESI;
          if (-1 < (char)bVar18) {
            *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar20;
            pbVar21 = pbVar25 + 3;
            out(*(undefined4 *)unaff_ESI,(short)param_2);
            param_2 = param_2 + 1;
            *pbVar9 = *pbVar9 + bVar18;
            unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                         bVar20 | (byte)((uint)iVar16 >> 8));
            cVar14 = bVar18 - *pbVar10;
            pcVar6 = (char *)CONCAT31(uVar12,cVar14);
            *pcVar6 = *pcVar6 + cVar14 + (bVar18 < *pbVar10);
            *param_2 = *param_2 + cVar14;
            pcVar6 = (char *)((int)pcVar6 * 2 + 0x79);
            *pcVar6 = *pcVar6 + (char)((uint)param_2 >> 8);
            pbVar9 = (byte *)in((short)param_2);
          }
          *pbVar21 = *pbVar21 + cVar3;
          *pbVar9 = *pbVar9 + (char)pbVar9;
          *pbVar9 = *pbVar9 + (char)pbVar9;
          bVar2 = *pbVar9;
          bVar4 = (byte)((uint)pbVar10 >> 8);
          bVar20 = bVar4 + *pbVar9;
          iVar16 = *(int *)pbVar9;
          *param_2 = *param_2 + cVar3;
          bVar18 = (char)(pbVar9 + (uint)CARRY1(bVar4,bVar2) + iVar16) - (byte)*unaff_EBX;
          pbVar9 = (byte *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar4,bVar2) + iVar16) >> 8)
                                    ,bVar18);
          *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar18;
          *unaff_EBP = *unaff_EBP + (char)unaff_EBX;
          *pbVar9 = *pbVar9 + bVar18;
          *pbVar9 = *pbVar9 + bVar18;
          *pbVar9 = *pbVar9 + bVar18;
          pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),CONCAT11(bVar20 + *pbVar9,cVar3)
                                    );
          pbVar9 = pbVar9 + (uint)CARRY1(bVar20,*pbVar9) + *(int *)pbVar9;
          *param_2 = *param_2 + cVar3;
          pbVar25 = pbVar21 + *(int *)(param_2 + 0x3e);
        }
        *pbVar9 = *pbVar9 + bVar18;
        unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x7f],bVar20)
                                    );
        *pbVar9 = *pbVar9 + bVar18;
        pbVar9 = (byte *)CONCAT31(uVar12,bVar18 + 0x2a);
        *pbVar9 = *pbVar9 + bVar18 + 0x2a;
        *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)param_2;
        pbVar25 = unaff_ESI;
      }
      *pbVar25 = *pbVar25 + bVar18;
      pcVar6 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                                CONCAT11((char)((uint)pbVar10 >> 8) + *pbVar9,(char)pbVar10));
      *pbVar25 = *pbVar25 + bVar18;
      piVar8 = (int *)CONCAT31(uVar12,bVar18 | (byte)*unaff_EBX);
      uVar19 = in_DS;
      goto code_r0x0040526e;
    }
    *pbVar9 = *pbVar9 + (char)pbVar9;
    iVar16 = CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 | *param_2);
    uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar23 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x7d);
    *pbVar9 = *pbVar9 + (char)pbVar9;
    *(char *)unaff_EDI = (char)*unaff_EDI - (char)((uint)pbVar10 >> 8);
    iVar16 = iVar16 - *(int *)(iVar16 + 0xb0a0000);
    cVar3 = *(char *)(CONCAT22(uVar19,CONCAT11(cVar23,(char)unaff_EBX)) + 0x7f);
    cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    param_2 = (byte *)CONCAT22(uStack_2,in_DS);
    iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
    pbVar25 = unaff_ESI + 8;
    out(*(undefined4 *)(unaff_ESI + 4),in_DS);
    pcVar24 = unaff_EBP + 1;
    cVar14 = (char)iVar16;
    pcVar6 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),
                              CONCAT11((byte)((uint)iVar16 >> 8) | *(byte *)((int)unaff_EDI + 0x46),
                                       cVar14));
    iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
    uVar12 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar25,0xf0)) >> 8);
    piVar8 = (int *)CONCAT31(uVar12,0x5f);
    unaff_EDI = (int *)((int)unaff_EDI + 1);
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    unaff_EBX = (uint *)CONCAT22(uVar19,CONCAT11(cVar23 + cVar3 | unaff_ESI[-0x78],(char)unaff_EBX))
    ;
    *(char *)piVar8 = (char)*piVar8 + '_';
    puVar7 = (uint *)CONCAT31(uVar12,0x8c);
    *(byte **)(pbVar25 + (int)unaff_EDI * 8) = param_2 + *(int *)(pbVar25 + (int)unaff_EDI * 8);
    bVar2 = *pbVar25;
    *pbVar25 = *pbVar25 + 0x8c;
    if (bVar2 < 0x74) {
      *param_2 = *param_2 + cVar14;
      *(byte *)unaff_EBX = (byte)*unaff_EBX >> 1;
      *(char *)puVar7 = (char)*puVar7 + -0x74;
      *puVar7 = (uint)(pcVar24 + *puVar7);
      *puVar7 = *puVar7 << 1 | (uint)((int)*puVar7 < 0);
      *param_2 = *param_2 + cVar14;
      unaff_EBP[2] = unaff_EBP[2] - cVar14;
      *param_2 = *param_2 + cVar14;
      pbVar9 = (byte *)CONCAT31(uVar12,0x83);
      puVar7 = unaff_EBX;
      goto code_r0x00405312;
    }
    *puVar7 = (uint)(*puVar7 + (int)puVar7);
    piVar8 = (int *)(CONCAT31(uVar12,(byte)puVar7[0x1000020]) | 0x8c);
    unaff_EBP = pcVar24;
    uVar19 = unaff_retaddr;
    unaff_retaddr = in_DS;
    if ('\0' < (char)((byte)puVar7[0x1000020] | 0x8c)) break;
code_r0x0040526e:
    piVar8 = (int *)((int)piVar8 + *(int *)pbVar25);
    unaff_ESI = pbVar25 + 4;
    out(*(undefined4 *)pbVar25,(short)param_2);
    param_2 = param_2 + 1;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    bVar2 = (byte)((uint)pcVar6 >> 8) | *param_2;
    uVar15 = CONCAT22((short)((uint)pcVar6 >> 0x10),CONCAT11(bVar2,(char)pcVar6));
    pcVar6 = (char *)CONCAT31((int3)((uint)piVar8 >> 8),(byte)piVar8 ^ *param_2);
    cRam282b0000 = cRam282b0000 - bVar2;
    in_DS = uVar19;
  } while( true );
code_r0x004052ee:
  *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
  bVar2 = (char)piVar8 + 0x28;
  pbVar9 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),bVar2);
  *pbVar9 = *pbVar9 ^ bVar2;
  *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)pcVar6 >> 8);
  bVar2 = *param_2;
  *param_2 = *param_2 + (byte)pcVar6;
  piVar8 = (int *)(((uint)pbVar9 | 0x1496f09) + *unaff_EDI + (uint)CARRY1(bVar2,(byte)pcVar6));
  pbVar10 = pbVar25 + 4;
  out(*(undefined4 *)pbVar25,(short)param_2);
  pbVar21 = param_2 + -1;
  *piVar8 = *piVar8 + (int)piVar8;
  param_2 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | (byte)*unaff_EBX);
  cVar3 = (char)piVar8 + '\x13';
  pbVar9 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),cVar3);
  puVar7 = unaff_EBX;
  pbVar25 = pbVar10;
  if ((POPCOUNT(cVar3) & 1U) != 0) {
    *param_2 = *param_2 - (char)((uint)pbVar21 >> 8);
    *pbVar9 = *pbVar9 + cVar3;
code_r0x00405396:
    bVar2 = *pbVar9;
    bVar18 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar18;
    *(byte **)pbVar10 = pbVar9 + (uint)CARRY1(bVar2,bVar18) + *(int *)pbVar10;
    out(*(undefined4 *)pbVar10,(short)param_2);
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    pcVar6 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                              CONCAT11((byte)((uint)pbVar9 >> 8) | pbVar10[4],bVar18));
    *(int *)((int)unaff_EDI + -1) = (int)(pcVar6 + *(int *)((int)unaff_EDI + -1));
    out(*(undefined4 *)(pbVar10 + 4),(short)param_2);
    *pcVar6 = *pcVar6 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar9 = *pbVar9 + (char)pbVar9;
  piVar8 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + 'o');
  unaff_EBX = (uint *)((int)puVar7 + -1);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar12 = (undefined3)((uint)param_2 >> 8);
  piVar8 = (int *)((int)piVar8 + 0x1b7e);
  bVar20 = (byte)param_2 | *(byte *)unaff_EBX | *(byte *)unaff_EBX;
  iRam04115f2c = iRam04115f2c + (int)piVar8;
  out(*(undefined4 *)pbVar25,(short)CONCAT31(uVar12,bVar20));
  *piVar8 = *piVar8 + (int)piVar8;
  bVar20 = bVar20 | (byte)piVar8;
  iVar22 = CONCAT31(uVar12,bVar20);
  pbVar9 = (byte *)((int)piVar8 - *piVar8);
  cVar3 = (char)pbVar9;
  *pcVar6 = *pcVar6 + cVar3;
  cVar14 = (char)pcVar6 - bVar20;
  *pbVar9 = *pbVar9 + cVar3;
  uVar19 = (undefined2)((uint)pcVar6 >> 0x10);
  bVar18 = (byte)((uint)pcVar6 >> 8) | *pbVar9;
  pcVar24 = pcVar24 + -1;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  bVar2 = *(byte *)(CONCAT22(uVar19,CONCAT11(bVar18,cVar14)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar9;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar24;
  *pbVar9 = *pbVar9 + cVar3;
  bVar2 = bVar18 | bVar2 | *(byte *)unaff_EBX;
  iVar17 = CONCAT22(uVar19,CONCAT11(bVar2,cVar14));
  pbVar21 = (byte *)((uint)(pbVar25 + 4) ^ *(uint *)(iVar22 + -0x43));
  iVar16 = *(int *)pbVar9;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  if (SCARRY4(iVar16,(int)pbVar9)) {
    *pbVar9 = *pbVar9 + cVar3;
  }
  pbVar10 = pbVar9 + 0x5674;
  unaff_EDI = (int *)((int)unaff_EDI +
                     (-(uint)((byte *)0xffffa98b < pbVar9) - *(int *)(pbVar21 + -0x7f)));
  bVar18 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar18;
  uVar13 = (undefined3)((uint)pbVar10 >> 8);
  bVar4 = bVar18 + 0x2d;
  piVar8 = (int *)CONCAT31(uVar13,bVar4);
  *(uint *)(pbVar21 + (int)unaff_EDI * 8) =
       *(int *)(pbVar21 + (int)unaff_EDI * 8) + iVar22 + (uint)(0xd2 < bVar18);
  bVar18 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar4;
  if (!CARRY1(bVar18,bVar4)) {
    do {
      pbVar10 = (byte *)(iVar22 + 1);
      bVar18 = (byte)piVar8;
      *(byte *)piVar8 = (char)*piVar8 + bVar18;
      bVar20 = (byte)((uint)piVar8 >> 8);
      bVar4 = (byte)unaff_EBX | bVar20;
      puVar7 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar4);
      out(*(undefined4 *)pbVar21,(short)pbVar10);
      *(byte *)piVar8 = (char)*piVar8 + bVar18;
      uVar19 = (undefined2)((uint)iVar17 >> 0x10);
      cVar3 = (char)iVar17;
      pbVar9 = (byte *)CONCAT22(uVar19,CONCAT11((byte)((uint)iVar17 >> 8) | *pbVar10,cVar3));
      bVar2 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar18;
      *(byte *)piVar8 = (char)*piVar8 + bVar18 + CARRY1(bVar2,bVar18);
      *pbVar10 = *pbVar10 + bVar18;
      *(byte *)unaff_EDI = (char)*unaff_EDI + bVar20;
      *(int *)((int)piVar8 * 2) = *(int *)((int)piVar8 * 2) + CONCAT22(uVar19,CONCAT11(0x1c,cVar3));
      *(byte *)piVar8 = (char)*piVar8 + bVar18;
      cVar14 = (char)pbVar10;
      *(byte *)puVar7 = (byte)*puVar7 + cVar14;
      *(byte *)((int)piVar8 * 2) = *(byte *)((int)piVar8 * 2) ^ bVar18;
      *(byte *)piVar8 = (char)*piVar8 + bVar18;
      pbVar9 = pbVar21 + 8;
      out(*(undefined4 *)(pbVar21 + 4),(short)pbVar10);
      piVar8 = (int *)0xa0a0000;
      *pbVar10 = *pbVar10;
      bVar18 = cVar3 - cVar14;
      iVar17 = CONCAT22(uVar19,CONCAT11(*(byte *)(unaff_EDI + 0x14) | 0x1c | bRam0ca87216,bVar18));
      *pbVar10 = *pbVar10;
      bVar2 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar18;
      if (!CARRY1(bVar2,bVar18)) {
        piVar8 = (int *)0x1e7b7000;
        bVar2 = (byte)((uint)unaff_EBX >> 8) | *(byte *)(iVar22 + 3);
        puVar7 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar2,bVar4));
        if (bVar2 != 0) {
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar14 + pbVar9[(int)unaff_EDI * 8])
          ;
          piVar8 = (int *)0x6d7d7000;
          iVar17 = iVar17 + 1;
        }
      }
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      iVar22 = CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 | pbVar9[(int)unaff_EDI * 8]);
      *(char *)piVar8 = (char)*piVar8;
      piVar8 = (int *)CONCAT31((int3)((uint)piVar8 >> 8),0xf9);
      *unaff_EDI = (int)((int)piVar8 + *unaff_EDI + 1);
      pbVar21 = pbVar21 + 0xc;
      out(*(undefined4 *)pbVar9,(short)iVar22);
      unaff_EBX = puVar7;
    } while( true );
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar4 = bVar4 | *(byte *)((int)piVar8 + 0x4000081);
  piVar8 = (int *)CONCAT31(uVar13,bVar4);
  if ('\0' < (char)bVar4) {
    *(byte *)piVar8 = (char)*piVar8 + bVar4;
    puVar11 = (uint *)CONCAT31(uVar13,bVar4 + 0x28);
    *puVar11 = *puVar11 ^ (uint)puVar11;
    *(byte *)unaff_EBX = *(byte *)unaff_EBX + bVar2;
    cVar3 = (bVar4 + 0x28) - bVar2;
    pcVar6 = (char *)CONCAT31(uVar13,cVar3);
    *pcVar6 = *pcVar6 + cVar3;
    param_2 = (byte *)CONCAT31(uVar12,bVar20 | *(byte *)unaff_EBX);
    pcVar24 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + *(byte *)((int)puVar7 + 0x7d)
                                        ,(char)unaff_EBX));
    *pcVar6 = *pcVar6 + cVar3;
    pbVar9 = (byte *)CONCAT31(uVar13,cVar3 + 0x39U ^ *(byte *)CONCAT31(uVar13,cVar3 + 0x39U));
    *pcVar24 = *pcVar24 + bVar2;
    pbVar10 = pbVar21 + 4;
    out(*(undefined4 *)pbVar21,(short)param_2);
    goto code_r0x00405396;
  }
  pbVar25 = pbVar21 + 4;
  out(*(undefined4 *)pbVar21,(short)iVar22);
  pcVar6 = (char *)(iVar17 + -1);
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  param_2 = (byte *)CONCAT31(uVar12,bVar20 | *(byte *)unaff_EBX);
  goto code_r0x004052ee;
}


