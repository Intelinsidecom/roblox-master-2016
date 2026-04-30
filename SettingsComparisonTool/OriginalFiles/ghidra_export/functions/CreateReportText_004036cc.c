/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004036cc
 * Raw Name    : CreateReportText
 * Demangled   : CreateReportText
 * Prototype   : byte * CreateReportText(char * reportStyle, int * param_2, byte * param_3)
 * Local Vars  : param_2, param_3, pbStack_34, pbStack_30, pbStack_20, pbStack_10, puVar1, uVar2, uVar3, pcVar4, uVar5, iVar6, uVar7, cVar8, bVar9, cVar10, bVar11, bVar12, in_EAX, pcVar13, pbVar14, piVar15, pbVar16, pbVar17, pcVar18, pbVar19, puVar20, reportStyle, uVar21, uVar22, uVar23, iVar24, extraout_ECX, extraout_ECX_00, bVar25, uVar26, uVar27, puVar28, pbVar29, cVar30, uVar31, unaff_EBX, pbVar32, bVar33, cVar34, bVar35, uVar36, unaff_EBP, unaff_ESI, pbVar37, unaff_EDI, puVar38, in_ES, in_CS, in_SS, in_DS, bVar39, in_AF, uVar40, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */

byte * __fastcall CreateReportText(char *reportStyle,int *param_2,byte *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined6 uVar5;
  int iVar6;
  undefined8 uVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  undefined3 uVar21;
  byte *in_EAX;
  char *pcVar13;
  byte *pbVar14;
  int *piVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint3 uVar22;
  char *pcVar18;
  byte *pbVar19;
  uint *puVar20;
  undefined2 uVar23;
  int iVar24;
  byte *extraout_ECX;
  byte bVar25;
  undefined3 uVar26;
  byte *extraout_ECX_00;
  undefined2 uVar27;
  undefined1 *puVar28;
  byte *pbVar29;
  char cVar30;
  undefined1 uVar31;
  byte bVar33;
  byte bVar35;
  char *unaff_EBX;
  char cVar34;
  byte *pbVar32;
  undefined2 uVar36;
  byte *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar37;
  uint *unaff_EDI;
  uint *puVar38;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar39;
  byte in_AF;
  undefined8 uVar40;
  byte *unaff_retaddr;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *pbStack_20;
  byte *pbStack_10;
  
  do {
    pbVar14 = param_3;
                    /* .NET CLR Managed Code */
    uVar23 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar30 = (char)unaff_EBX;
    bVar33 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x38];
    pbVar17 = (byte *)CONCAT22(uVar23,CONCAT11(bVar33,cVar30));
    cVar10 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar10;
    uVar21 = (undefined3)((uint)in_EAX >> 8);
    cVar8 = cVar10 + '\x02';
    pcVar13 = (char *)CONCAT31(uVar21,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pcVar4 = (code *)swi(7);
      uVar40 = (*pcVar4)();
      pbVar19 = extraout_ECX;
      pbVar14 = unaff_EBP;
      puVar38 = unaff_EDI;
      uVar23 = in_ES;
      in_ES = in_SS;
      goto code_r0x0040371e;
    }
    *pcVar13 = *pcVar13 + cVar8;
    bVar9 = cVar10 + 0x71;
    pbVar19 = (byte *)CONCAT31(uVar21,bVar9);
    in_SS = SUB42(unaff_retaddr,0);
    *pbVar19 = *pbVar19 + bVar9;
    iVar24 = (int)reportStyle - *param_2;
    reportStyle = (char *)CONCAT22((short)((uint)iVar24 >> 0x10),
                                   CONCAT11((char)((uint)iVar24 >> 8) + *pbVar19,(char)iVar24));
    bVar39 = CARRY1(*pbVar19,bVar9);
    *pbVar19 = *pbVar19 + bVar9;
    param_3 = (byte *)CONCAT22(param_3._2_2_,in_ES);
    unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
    do {
      uVar22 = (uint3)((uint)reportStyle >> 8);
      bVar9 = (byte)pbVar19;
      uVar21 = (undefined3)((uint)pbVar19 >> 8);
      bVar25 = (byte)reportStyle;
      cVar10 = (char)param_2;
      if (bVar39) {
        *pbVar19 = *pbVar19 + bVar9;
        pbVar32 = (byte *)CONCAT31(uVar22,bVar25 | *pbVar17);
        uVar23 = SUB42(unaff_retaddr,0);
        pbVar37 = unaff_ESI + 4;
        out(*(undefined4 *)unaff_ESI,(short)param_2);
        puVar38 = (uint *)((int)unaff_EDI + 1);
        *pbVar19 = *pbVar19 + bVar9;
        bVar9 = bVar9 | *(byte *)puVar38;
        pbVar19 = (byte *)CONCAT31(uVar21,bVar9);
        *(byte *)((int)unaff_EDI + 0x6f0a0001) =
             *(byte *)((int)unaff_EDI + 0x6f0a0001) - (char)((uint)reportStyle >> 8);
        param_3 = (byte *)CONCAT22(param_3._2_2_,uVar23);
        cVar8 = cVar30 - (char)*param_2;
        pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),cVar8);
        bRam2a060000 = bVar9;
        if (cVar8 == '\0' || cVar30 < (char)*param_2) goto code_r0x00403750;
        *pbVar19 = *pbVar19 + bVar9;
        iVar24 = CONCAT31(uVar21,bVar9 + 0x2a);
        unaff_ESI = unaff_ESI + 5;
        cVar8 = (char)((uint)param_2 >> 8) + *(char *)((int)param_2 + -0x7b);
        uVar40 = CONCAT44(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar8,cVar10)),iVar24);
        pcVar13 = (char *)(iVar24 + 0x6f);
        *pcVar13 = *pcVar13 + cVar8;
        pbVar32 = (byte *)((uint)uVar22 << 8);
        goto code_r0x00403711;
      }
      *(byte *)param_2 = (char)*param_2 + bVar25;
      *(byte *)((int)param_2 + (int)pbVar14) = *(byte *)((int)param_2 + (int)pbVar14) + bVar9;
      iVar24 = CONCAT31(uVar21,(char)*param_2);
      iVar24 = iVar24 + *(int *)(iVar24 + 0x6c28);
      reportStyle = (char *)CONCAT31(uVar22,bVar25 + *unaff_ESI);
      pbVar19 = (byte *)(CONCAT31((int3)((uint)iVar24 >> 8),(char)iVar24 + '%') + 0x1ebd9f3);
      bVar9 = (byte)pbVar19;
      bVar39 = CARRY1(*pbVar19,bVar9);
      *pbVar19 = *pbVar19 + bVar9;
      unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
    } while (!bVar39);
    *pbVar19 = *pbVar19 + bVar9;
    unaff_EBX = (char *)CONCAT22(uVar23,CONCAT11(bVar33 | pbVar14[0x47],cVar30));
    *pbVar19 = *pbVar19 + bVar9;
    uVar21 = (undefined3)((uint)pbVar19 >> 8);
    bVar9 = bVar9 + 0x2a;
    pbVar19 = (byte *)CONCAT31(uVar21,bVar9);
    *unaff_EBX = *unaff_EBX + cVar10;
    pbVar17 = (byte *)((int)pbVar19 * 2);
    *pbVar17 = *pbVar17 ^ bVar9;
    bVar9 = bVar9 ^ *pbVar19;
    in_EAX = (byte *)CONCAT31(uVar21,bVar9);
    bVar33 = *in_EAX;
    *in_EAX = *in_EAX + bVar9;
    *in_EAX = (*in_EAX - bVar9) - CARRY1(bVar33,bVar9);
    *reportStyle = *reportStyle + cVar10;
    unaff_EBP = pbVar14;
  } while( true );
code_r0x00403711:
  piVar15 = (int *)((ulonglong)uVar40 >> 0x20);
  pcVar13 = (char *)uVar40;
  *(char *)piVar15 = (char)*piVar15;
  if ((char)*piVar15 == '\0') {
    pbVar17 = (byte *)((uint)pbVar17 & 0xffffff00);
_ctor:
    param_2 = (int *)((ulonglong)uVar40 >> 0x20);
    pbVar32 = (byte *)((uint)CONCAT21((short)((uint)pbVar32 >> 0x10),
                                      (char)((uint)pbVar32 >> 8) + *(char *)uVar40) << 8);
    pbVar17 = (byte *)((uint)pbVar17 & 0xffffff00);
    *(char *)param_2 = (char)*param_2;
    uVar21 = (undefined3)((ulonglong)uVar40 >> 8);
    bVar9 = (char)uVar40 - *(char *)uVar40;
    pbVar19 = (byte *)CONCAT31(uVar21,bVar9);
    bVar33 = *pbVar19;
    *pbVar19 = *pbVar19 + bVar9;
    pbVar37 = unaff_ESI + (uint)CARRY1(bVar33,bVar9) + *(int *)pbVar19;
    pbVar19 = (byte *)CONCAT31(uVar21,bVar9);
code_r0x00403750:
    uVar40 = CONCAT44(param_2,pbVar19);
    uVar27 = (undefined2)((uint)unaff_retaddr >> 0x10);
    unaff_ESI = pbVar37 + 4;
    out(*(undefined4 *)pbVar37,(short)param_2);
    bVar9 = (byte)pbVar19;
    *pbVar19 = *pbVar19 + bVar9;
    *pbVar32 = *pbVar32 + (char)pbVar17;
    bVar33 = *pbVar19;
    *pbVar19 = *pbVar19 + bVar9;
    *(byte **)(pbVar17 + -0x49) = unaff_ESI + (uint)CARRY1(bVar33,bVar9) + *(int *)(pbVar17 + -0x49)
    ;
code_r0x0040375a:
    pbVar19 = (byte *)uVar40;
    *pbVar19 = *pbVar19 + (char)uVar40;
    bVar39 = CARRY1((byte)((uint)pbVar32 >> 8),*pbVar19);
    iVar24 = CONCAT31(0x1f0a00,bVar39 + 'o') + *(int *)(pbVar17 + (int)pbVar14) +
             (uint)(0x90 < bVar39) + -1;
    uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar40 >> 0x20);
    pcVar13 = (char *)(CONCAT31((int3)((uint)iVar24 >> 8),(char)iVar24 + -0x66) | *puVar38);
    bVar33 = *(byte *)((int)puVar38 + -0x46);
    pbVar19 = (byte *)CONCAT22(0xd0a,(ushort)bVar33 << 8);
    *pcVar13 = *pcVar13 + (char)pcVar13;
    bVar25 = (byte)((ulonglong)uVar40 >> 0x20);
    puVar28 = (undefined1 *)
              CONCAT22((short)((ulonglong)uVar40 >> 0x30),
                       CONCAT11((byte)((ulonglong)uVar40 >> 0x28) | pbVar17[(int)pbVar14],bVar25));
    *pbVar19 = *pbVar19 + (char)pcVar13;
    *pbVar14 = *pbVar14 - bVar33;
    *puVar28 = *puVar28;
    pbVar37 = (byte *)(((uint)pcVar13 | 8) + 0x4490f9d8);
    bVar9 = (byte)pbVar37;
    *pbVar37 = *pbVar37 + bVar9;
    bVar33 = *unaff_ESI;
    *(uint *)(unaff_ESI + (int)pbVar37) = *(uint *)(unaff_ESI + (int)pbVar37) ^ (uint)pbVar19;
    *pbVar37 = *pbVar37 | bVar9;
    bVar39 = false;
    uRam2609fffc = uVar23;
    *pbVar37 = *pbVar37 | bVar9;
    pbVar14 = (byte *)CONCAT22(uVar27,in_ES);
    uVar40 = CONCAT44(CONCAT31((int3)((uint)puVar28 >> 8),bVar25 | bVar33),pbVar37);
code_r0x004037a7:
    do {
      uVar7 = uVar40;
      uVar27 = uVar23;
      pbVar32 = pbVar17;
      pbVar37 = (byte *)((ulonglong)uVar7 >> 0x20);
      uVar23 = (undefined2)((ulonglong)uVar7 >> 0x20);
      out(*(undefined4 *)unaff_ESI,uVar23);
      out(*(undefined4 *)(unaff_ESI + 4),uVar23);
      puVar20 = (uint *)((int)puVar38 + (int)pbVar37);
      uVar2 = *puVar20;
      uVar3 = (uint)uVar7 + *puVar20;
      *puVar20 = uVar3 + bVar39;
      cVar10 = (char)(pbVar14 +
                     (uint)(CARRY4(uVar2,(uint)uVar7) || CARRY4(uVar3,(uint)bVar39)) +
                     *(int *)(pbVar19 + (int)pbVar37)) + '\t';
      pbVar14 = (byte *)CONCAT31((int3)((uint)(pbVar14 +
                                              (uint)(CARRY4(uVar2,(uint)uVar7) ||
                                                    CARRY4(uVar3,(uint)bVar39)) +
                                              *(int *)(pbVar19 + (int)pbVar37)) >> 8),cVar10);
      out(uRam260a0000,uVar23);
      *pbVar14 = *pbVar14 + cVar10;
      bVar9 = (byte)((uint)pbVar19 >> 8) | *pbVar37;
      bVar33 = *pbVar14;
      pbVar14 = pbVar14 + (uint)CARRY1(bVar9,*pbVar14) + *(int *)pbVar14;
      *pbVar37 = *pbVar37 + 6;
      cVar8 = (char)pbVar32 - cRam260a0004;
      uVar23 = CONCAT11(bVar9 + bVar33 + *pbVar14,6);
      pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),uVar23);
      *pbVar14 = *pbVar14;
      uVar21 = (undefined3)((uint)pbVar14 >> 8);
      cVar10 = (char)pbVar14 - *pbVar14;
      piVar15 = (int *)CONCAT31(uVar21,cVar10);
      unaff_ESI = (byte *)(*piVar15 + 0x260a0004);
      bVar33 = cVar10 + (char)*piVar15;
      pcVar13 = (char *)CONCAT31(uVar21,bVar33);
      *pcVar13 = *pcVar13 + bVar33;
      *pcVar13 = *pcVar13 + bVar33;
      *pcVar13 = *pcVar13 + bVar33;
      bVar39 = CARRY1(*pbVar37,bVar33);
      *pbVar37 = *pbVar37 + bVar33;
      pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar8);
      pbVar14 = pbVar19;
      uVar40 = CONCAT44(pbVar37,pcVar13);
    } while (!bVar39);
    *pcVar13 = *pcVar13 + bVar33;
    pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                               CONCAT11((byte)((uint)pbVar32 >> 8) | bRam080a0056,cVar8));
    *pcVar13 = *pcVar13 + bVar33;
    bVar11 = bVar33 + 2;
    *pbVar32 = *pbVar32 - (char)((ulonglong)uVar7 >> 0x20);
    *(char *)CONCAT31(uVar21,bVar11) = *(char *)CONCAT31(uVar21,bVar11) + bVar11;
    bVar9 = *unaff_ESI;
    uVar26 = (undefined3)((uint)pbVar19 >> 8);
    pbVar14 = (byte *)(CONCAT31(uVar26,bVar9) | 6);
    bVar25 = 9 < (bVar33 + 0x74 & 0xf) | in_AF;
    bVar12 = bVar33 + 0x74 + bVar25 * '\x06';
    bVar12 = bVar12 + (0x90 < (bVar12 & 0xf0) | 0x8d < bVar11 | bVar25 * (0xf9 < bVar12)) * '`';
    pbVar17 = (byte *)CONCAT31(uVar21,bVar12);
    bVar33 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar12;
    if (!SCARRY1(bVar33,bVar12)) {
      *unaff_ESI = *unaff_ESI + bVar12;
      unaff_ESI = unaff_ESI + *(int *)(pbVar37 + 0x33);
      *pbVar17 = *pbVar17 | bVar12;
      *unaff_ESI = *unaff_ESI + bVar12;
      bVar33 = bVar12 + 0x72;
      *(byte *)CONCAT31(uVar21,bVar33) = *(byte *)CONCAT31(uVar21,bVar33) | bVar33;
      *unaff_ESI = *unaff_ESI + bVar33;
      pbVar14 = (byte *)CONCAT31(uVar26,(bVar9 | 6) + *unaff_ESI);
      pcVar13 = (char *)CONCAT31(uVar21,bVar12 - 0x11);
      *pcVar13 = *pcVar13 + (bVar12 - 0x11);
      pbVar17 = (byte *)CONCAT31(uVar21,bVar12 - 0xf);
      puVar38 = (uint *)((int)puVar38 + iRam080a0052);
      *pbVar17 = *pbVar17 + (bVar12 - 0xf);
    }
code_r0x00403825:
    pbVar19 = (byte *)0x80a0000;
    uVar21 = (undefined3)((uint)pbVar17 >> 8);
    cVar10 = (char)pbVar17 + '\x7f';
    pcVar13 = (char *)CONCAT31(uVar21,cVar10);
    *pcVar13 = *pcVar13 + cVar10;
    iVar24 = CONCAT31(uVar21,(char)pbVar17 + -0x7f) + 0x547d;
    cVar8 = (char)iVar24;
    uVar21 = (undefined3)((uint)iVar24 >> 8);
    cVar10 = cVar8 + '*';
    pcVar13 = (char *)CONCAT31(uVar21,cVar10);
    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar37 >> 8),(byte)pbVar37 | *unaff_ESI);
    cVar30 = (char)pbVar32 - *unaff_ESI;
    uVar23 = (undefined2)((uint)pbVar32 >> 0x10);
    cVar34 = (char)((uint)pbVar32 >> 8) +
             *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar30) + 0x57);
    *pcVar13 = *pcVar13 + cVar10;
    bVar33 = cVar8 + 0x54U & *pbVar29;
    iVar24 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
    *(char *)CONCAT31(uVar21,bVar33) = *(char *)CONCAT31(uVar21,bVar33) + bVar33;
    pcVar13 = (char *)CONCAT31(uVar21,bVar33 + 0x2a);
    pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_DS);
    cVar34 = cVar34 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar34,cVar30)) + 0x58);
    *pcVar13 = *pcVar13 + bVar33 + 0x2a;
    bVar9 = bVar33 + 0x54 & *pbVar29;
    iVar6 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
    *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
    pcVar13 = (char *)CONCAT31(uVar21,bVar9 + 0x2a);
    cVar34 = cVar34 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar34,cVar30)) + 0x55);
    *pcVar13 = *pcVar13 + bVar9 + 0x2a;
    pcVar13 = (char *)CONCAT31(uVar21,bVar9 + 0x57);
    pbVar29 = pbVar29 + *(int *)pbStack_10;
    cVar34 = cVar34 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar34,cVar30)) + 0x55);
    *pcVar13 = *pcVar13 + bVar9 + 0x57;
    cVar10 = bVar9 - 0x3a;
    pcVar13 = (char *)CONCAT31(uVar21,cVar10);
    *pcVar13 = *pcVar13 + cVar10;
    bVar33 = *pbVar29;
    cVar8 = (char)pbVar14;
    pbVar32 = (byte *)CONCAT22(uVar23,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar34,
                                                  cVar30)) + 0x59),cVar30));
    *pcVar13 = *pcVar13 + cVar10;
    bVar12 = bVar9 - 0x10 & *pbVar29;
    puVar38 = (uint *)((int)puVar38 +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar6 + iVar24);
    *(char *)CONCAT31(uVar21,bVar12) = *(char *)CONCAT31(uVar21,bVar12) + bVar12;
    bVar12 = bVar12 + 0x2a;
    pbVar17 = (byte *)CONCAT31(uVar21,bVar12);
    bVar9 = *(byte *)((int)puVar38 + 0x17);
    *pbVar17 = *pbVar17 + bVar12;
    bVar25 = *pbVar29;
    pbStack_20 = (byte *)CONCAT22(pbStack_20._2_2_,in_DS);
    bVar11 = *(byte *)((int)puVar38 + 0x1a);
    *pbVar17 = *pbVar17 + bVar12;
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                               CONCAT11((((byte)((uint)pbVar14 >> 8) | bVar33) + bVar9 | bVar25) +
                                        bVar11 | *pbVar29,cVar8));
    *pbVar32 = *pbVar32 + cVar30;
    *(byte *)((int)pbVar17 * 2) = *(byte *)((int)pbVar17 * 2) ^ bVar12;
    bVar33 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar12;
    bVar9 = *pbVar17;
    *pbVar14 = *pbVar14 + (char)pbVar29;
    bVar33 = ((bVar12 - bVar9) - CARRY1(bVar33,bVar12)) + *pbVar29;
    pbVar17 = (byte *)CONCAT31(uVar21,bVar33);
    pbVar37 = pbStack_20;
    if ((POPCOUNT(bVar33) & 1U) != 0) goto code_r0x004038f6;
    *pbVar17 = *pbVar17 + bVar33;
    cVar10 = (bVar33 + 0x6f) - (0x90 < bVar33);
    pbVar16 = (byte *)CONCAT31(uVar21,cVar10);
    bVar33 = *pbVar29;
    *pbVar29 = *pbVar29 + cVar8;
    pbVar37 = pbVar29;
    if (SCARRY1(bVar33,cVar8) == (char)*pbVar29 < '\0') {
      cRam33100000 = cRam33100000 - cVar10;
      cVar10 = cVar10 + *pbVar29;
      pbVar17 = (byte *)CONCAT31(uVar21,cVar10);
      goto code_r0x0040390c;
    }
    do {
      *pbVar16 = *pbVar16 + (char)pbVar16;
      while( true ) {
        uVar21 = (undefined3)((uint)pbVar16 >> 8);
        cVar10 = (char)pbVar16 + '\x02';
        pbVar17 = (byte *)CONCAT31(uVar21,cVar10);
        if ((POPCOUNT(cVar10) & 1U) == 0) break;
code_r0x00403908:
        puVar38 = (uint *)((int)puVar38 - *(int *)pbStack_10);
        cVar10 = (char)pbVar17 + *pbVar37;
        pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),cVar10);
code_r0x0040390c:
        cVar8 = (char)pbVar17;
        if ((POPCOUNT(cVar10) & 1U) != 0) {
          *pbStack_10 = *pbStack_10 + cVar8;
          goto code_r0x0040395a;
        }
        *pbVar17 = *pbVar17 + cVar8;
        bVar33 = cVar8 + 2;
        pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar33);
code_r0x00403912:
        bVar39 = (POPCOUNT(bVar33) & 1U) == 0;
        if (!bVar39) goto code_r0x00403967;
        *pbVar17 = *pbVar17 + (char)pbVar17;
code_r0x00403916:
        bVar9 = (char)pbVar17 + 0x6f;
        pbVar29 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar17 >> 8),bVar9);
        bVar33 = *pbVar29;
        *pbVar29 = *pbVar29 + bVar9;
        if (*pbVar29 == 0 || SCARRY1(bVar33,bVar9) != (char)*pbVar29 < '\0') goto code_r0x00403979;
        *pbVar29 = *pbVar29 + bVar9;
        pbVar16 = (byte *)CONCAT31((int3)(char)((uint)pbVar17 >> 8),(char)pbVar17 + -100);
        *(byte **)(pbStack_10 + (int)puVar38 * 8) =
             pbVar37 + (uint)(0xd2 < bVar9) + *(int *)(pbStack_10 + (int)puVar38 * 8);
code_r0x00403926:
        *(byte **)pbVar16 = pbStack_20;
        bVar33 = *pbStack_10;
        bVar9 = (byte)pbVar16;
        *pbStack_10 = *pbStack_10 + bVar9;
        if (CARRY1(bVar33,bVar9)) {
          *pbVar16 = *pbVar16 + bVar9;
          uVar21 = (undefined3)((uint)pbVar16 >> 8);
          bVar9 = bVar9 | pbVar16[0x400005b];
          pbVar17 = (byte *)CONCAT31(uVar21,bVar9);
          pbVar29 = pbStack_10;
          if ((char)bVar9 < '\x01') goto code_r0x00403991;
          *pbVar17 = *pbVar17 + bVar9;
          cVar10 = bVar9 + 0x28;
          pbVar17 = (byte *)CONCAT31(uVar21,cVar10);
          *(byte **)pbVar17 = pbVar17 + (uint)(0xd7 < bVar9) + *(int *)pbVar17;
          bVar33 = *pbVar32;
          bVar9 = (byte)((uint)pbVar14 >> 8);
          *pbVar32 = *pbVar32 + bVar9;
          if (CARRY1(bVar33,bVar9)) {
            *pbVar17 = *pbVar17 + cVar10;
            pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                       CONCAT11(bVar9 | *pbVar17,(char)pbVar14));
            *pbStack_10 = *pbStack_10 + cVar10;
            pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                       CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],
                                                (char)pbVar32));
            *pbVar17 = *pbVar17 + cVar10;
code_r0x00403950:
            uVar21 = (undefined3)((uint)pbVar17 >> 8);
            bVar9 = (char)pbVar17 + 0x6f;
            bVar33 = *(byte *)CONCAT31(uVar21,bVar9);
            *pbVar37 = *pbVar37 + (char)pbVar14;
            pbVar17 = (byte *)CONCAT31(uVar21,(bVar9 & bVar33) + *pbStack_10);
            *pbVar14 = *pbVar14 - (char)((uint)pbVar37 >> 8);
          }
          goto code_r0x0040395a;
        }
      }
      *pbVar17 = *pbVar17 + cVar10;
      cVar10 = (char)pbVar16 + '.' + *pbVar37;
      pbVar17 = (byte *)CONCAT31(uVar21,cVar10);
      if ((POPCOUNT(cVar10) & 1U) != 0) {
        pbVar29 = pbVar37 + (int)pbVar17;
        *pbVar29 = *pbVar29 + cVar10;
        bVar33 = *pbVar29;
        goto code_r0x00403912;
      }
      *pbVar17 = *pbVar17 + cVar10;
      bVar33 = cVar10 + 2;
      pbVar17 = (byte *)CONCAT31(uVar21,bVar33);
      if ((POPCOUNT(bVar33) & 1U) != 0) goto code_r0x00403916;
      *pbVar17 = *pbVar17 + bVar33;
      cVar8 = cVar10 + 'q';
      piVar15 = (int *)CONCAT31(uVar21,cVar8);
      *piVar15 = (*piVar15 - (int)piVar15) - (uint)(0x90 < bVar33);
      bVar33 = *pbVar32;
      bVar9 = (byte)((uint)pbVar14 >> 8);
      *pbVar32 = *pbVar32 + bVar9;
      if (!CARRY1(bVar33,bVar9)) {
        out(*(undefined4 *)pbStack_10,(short)pbVar37);
        bVar33 = (cVar8 - (char)*piVar15) - CARRY1(bVar33,bVar9);
        *pbVar37 = *pbVar37 + (char)pbVar14;
        cVar10 = bVar33 - *(byte *)CONCAT31(uVar21,bVar33);
        unaff_ESI = pbStack_10 +
                    ((4 - *(int *)CONCAT31(uVar21,cVar10)) -
                    (uint)(bVar33 < *(byte *)CONCAT31(uVar21,bVar33)));
        pbVar17 = (byte *)CONCAT31(uVar21,cVar10);
        pbStack_10 = (byte *)0;
        goto code_r0x00403825;
      }
      *(char *)piVar15 = (char)*piVar15 + cVar8;
      uVar23 = (undefined2)((uint)pbVar32 >> 0x10);
      bVar33 = (byte)((uint)pbVar32 >> 8) | bRam080a0056;
      *(char *)piVar15 = (char)*piVar15 + cVar8;
      pcVar13 = (char *)CONCAT31(uVar21,cVar10 + 's');
      pbVar32 = (byte *)CONCAT22(uVar23,CONCAT11(bVar33 + *(char *)(CONCAT22(uVar23,CONCAT11(bVar33,
                                                  (char)pbVar32)) + 0x56),(char)pbVar32));
      *pcVar13 = *pcVar13 + cVar10 + 's';
      bVar33 = cVar10 - 0xf;
      *(char *)CONCAT31(uVar21,bVar33) = *(char *)CONCAT31(uVar21,bVar33) + bVar33;
      bVar9 = cVar10 + 0x1e;
      pbVar16 = (byte *)CONCAT31(uVar21,bVar9);
      *(byte **)(pbStack_10 + (int)puVar38 * 8) =
           pbVar14 + (uint)(0xd2 < bVar33) + *(int *)(pbStack_10 + (int)puVar38 * 8);
      uVar27 = *(undefined2 *)pbVar16;
      bVar33 = *pbStack_10;
      *pbStack_10 = *pbStack_10 + bVar9;
      pbVar37 = pbVar14;
      if (CARRY1(bVar33,bVar9)) {
        *pbVar16 = *pbVar16 + bVar9;
        pbVar17 = (byte *)CONCAT31(uVar21,bVar9 | pbVar16[0x400005a]);
        if ('\0' < (char)(bVar9 | pbVar16[0x400005a])) {
code_r0x004038f6:
          bVar33 = (byte)pbVar17;
          *pbVar17 = *pbVar17 + bVar33;
          uVar21 = (undefined3)((uint)pbVar17 >> 8);
          cVar10 = ((bVar33 + 0x28) - *(char *)CONCAT31(uVar21,bVar33 + 0x28)) - (0xd7 < bVar33);
          pbVar17 = (byte *)CONCAT31(uVar21,cVar10);
          bVar33 = *pbVar32;
          bVar9 = (byte)((uint)pbVar14 >> 8);
          *pbVar32 = *pbVar32 + bVar9;
          if (CARRY1(bVar33,bVar9)) {
            *pbVar17 = *pbVar17 + cVar10;
            pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                       CONCAT11(bVar9 | *pbVar17,(char)pbVar14));
            *pbStack_10 = *pbStack_10 + cVar10;
            goto code_r0x00403908;
          }
          pbVar16 = pbVar17 + -0x6fe1411;
          goto code_r0x00403926;
        }
        goto code_r0x00403950;
      }
    } while( true );
  }
  *pcVar13 = *pcVar13 + (char)uVar40;
  *piVar15 = (int)(pbVar14 + *piVar15);
  unaff_ESI = unaff_ESI + 1;
  uVar40 = CONCAT44(CONCAT22((short)((ulonglong)uVar40 >> 0x30),
                             CONCAT11((char)((ulonglong)uVar40 >> 0x28) +
                                      *(char *)((int)piVar15 + -0x33),
                                      (char)((ulonglong)uVar40 >> 0x20))),pcVar13);
  pbVar19 = pbVar32;
  uVar23 = param_3._0_2_;
code_r0x0040371e:
  puVar20 = (uint *)((ulonglong)uVar40 >> 0x20);
  pbVar37 = (byte *)uVar40;
  uVar27 = (undefined2)((uint)unaff_retaddr >> 0x10);
  bVar9 = (byte)((ulonglong)uVar40 >> 0x28);
  pbVar37[0x6f] = pbVar37[0x6f] + bVar9;
  pbVar32 = (byte *)((uint)pbVar19 & 0xffffff00);
  *(char *)puVar20 = (char)*puVar20;
  bVar33 = (byte)uVar40;
  if ((char)*puVar20 != '\0') {
    *pbVar37 = *pbVar37 + bVar33;
    uVar2 = *puVar20;
    *puVar20 = (uint)(pbVar14 + *puVar20);
    if (CARRY4(uVar2,(uint)pbVar14)) {
      *pbVar37 = *pbVar37 + bVar33;
      puVar1 = puVar20 + 0x1d028000;
      uVar2 = *puVar1;
      *(byte *)puVar1 = (byte)*puVar1 - bVar9;
      *(uint *)pbVar37 = (*(int *)pbVar37 - (int)pbVar37) - (uint)((byte)uVar2 < bVar9);
      *(byte *)puVar20 = (char)*puVar20 + bVar33;
      *pbVar14 = *pbVar14;
      uVar40 = CONCAT44(puVar20,CONCAT31((int3)((ulonglong)uVar40 >> 8),bVar33 + 0x2a));
      unaff_retaddr = unaff_ESI;
      goto _ctor;
    }
    bVar39 = false;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),*pbVar37);
    pbVar14 = unaff_ESI;
    goto code_r0x004037a7;
  }
  bVar9 = *pbVar37;
  *pbVar37 = *pbVar37 + bVar33;
  *(uint *)pbVar37 = (*(int *)pbVar37 - (int)pbVar37) - (uint)CARRY1(bVar9,bVar33);
  bVar33 = *pbVar32;
  bVar9 = (byte)((ulonglong)uVar40 >> 0x20);
  *pbVar32 = *pbVar32 + bVar9;
  if (CARRY1(bVar33,bVar9)) goto code_r0x0040375a;
  goto code_r0x00403711;
code_r0x0040395a:
  *pbVar17 = *pbVar17 + (char)pbVar17;
  pbVar37[0x16060000] = pbVar37[0x16060000] - (char)pbVar14;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbStack_10);
  cVar10 = (char)pbVar17 + '\x02';
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),cVar10);
  bVar39 = (POPCOUNT(cVar10) & 1U) == 0;
code_r0x00403967:
  if (!bVar39) goto code_r0x004039be;
  *pbVar17 = *pbVar17 + (char)pbVar17;
  uVar21 = (undefined3)((uint)pbVar17 >> 8);
  bVar33 = (char)pbVar17 + 0x6f;
  bVar33 = bVar33 & *(byte *)CONCAT31(uVar21,bVar33);
  pbVar29 = (byte *)CONCAT31(uVar21,bVar33);
  *pbVar37 = *pbVar37 + (char)pbVar14;
  pbVar37 = (byte *)CONCAT31((int3)((uint)pbVar37 >> 8),(char)pbVar37 + (byte)*puVar38);
  *(byte *)(puVar38 + 0x5c18000) = (byte)puVar38[0x5c18000] - bVar33;
code_r0x00403979:
  bVar33 = (char)pbVar29 - (byte)*puVar38;
  bVar39 = bVar33 < *pbVar14;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),bVar33 - *pbVar14);
  do {
    cVar10 = (char)pbVar17;
    *pbVar17 = *pbVar17 + cVar10 + bVar39;
    *pbVar17 = *pbVar17 + cVar10;
    *pbVar14 = *pbVar14 + (char)pbVar37;
    pbVar14[0x101c00aa] = pbVar14[0x101c00aa] + (char)pbVar32;
    *pbVar17 = *pbVar17 + cVar10;
    *(byte **)pbStack_10 = pbVar32 + *(int *)pbStack_10;
    bVar33 = (byte)((uint)pbVar14 >> 8);
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                               CONCAT11(bVar33 + *pbVar17,(char)pbVar14));
    pbVar17 = pbVar17 + (uint)CARRY1(bVar33,*pbVar17) + *(int *)pbVar17;
    pbVar29 = pbStack_10;
code_r0x00403991:
    cVar10 = (char)pbVar14;
    *pbVar37 = *pbVar37 + cVar10;
    cVar8 = (char)pbVar32 - pbVar29[2];
    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar8);
    pbStack_10 = pbVar29;
    if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x0040395a;
    *pbVar17 = *pbVar17 + (byte)pbVar17;
    uVar22 = (uint3)((uint)pbVar17 >> 8);
    bVar33 = (byte)pbVar17 | *pbVar32;
    piVar15 = (int *)CONCAT31(uVar22,bVar33);
    bVar9 = (byte)((uint)pbVar14 >> 8);
    bVar25 = (byte)pbVar37;
    if (bVar33 == 0) {
      *(char *)piVar15 = (char)*piVar15;
      pbStack_10 = pbVar29 + 4;
      out(*(undefined4 *)pbVar29,(short)pbVar37);
      pbVar17 = (byte *)((uint)uVar22 << 8);
      *pbVar37 = *pbVar37 + cVar10;
      pbVar37 = (byte *)CONCAT31((int3)((uint)pbVar37 >> 8),bVar25 - *pbVar32);
      *pbVar32 = *pbVar32;
      *pbVar37 = *pbVar37 + bVar9;
      *pbVar17 = *pbVar17;
      *pbVar32 = *pbVar32 + cVar8;
      *pbVar17 = *pbVar17;
      *(byte **)(pbVar32 + -0x3d) = pbStack_10 + *(int *)(pbVar32 + -0x3d);
      break;
    }
    pbVar19 = pbVar19 + -puVar38[9];
    *(byte *)piVar15 = (char)*piVar15 + bVar33;
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),CONCAT11(bVar9 | *pbVar37,cVar10));
    pbStack_10 = pbVar29 + *piVar15;
    pcVar13 = (char *)((int)piVar15 + *piVar15);
    bVar9 = (char)pcVar13 - *pcVar13;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar9);
    bVar33 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar9;
    pbVar17 = pbVar17 + (-(uint)CARRY1(bVar33,bVar9) - *(int *)pbVar17);
    bVar39 = CARRY1(*pbVar14,bVar25);
    *pbVar14 = *pbVar14 + bVar25;
  } while (!bVar39);
  *pbVar17 = *pbVar17 + (char)pbVar17;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),(byte)pbVar14 | *pbVar37);
code_r0x004039be:
  puVar38 = (uint *)((int)puVar38 + *(int *)(pbVar19 + -0x3c));
  *pbVar17 = *pbVar17 + (byte)pbVar17;
  uVar21 = (undefined3)((uint)pbVar17 >> 8);
  bVar33 = (byte)pbVar17 | *pbVar37;
  pcVar13 = (char *)CONCAT31(uVar21,bVar33);
  if ((POPCOUNT(bVar33) & 1U) == 0) goto code_r0x004039c8;
  cVar10 = *pcVar13;
  *pcVar13 = *pcVar13 + bVar33;
  cVar8 = *pcVar13;
  if (!SCARRY1(cVar10,bVar33)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar13 = *pcVar13 + bVar33;
  *pbStack_10 = *pbStack_10 + 1;
  uVar5 = *(undefined6 *)CONCAT31(uVar21,bVar33 + 6);
  pbVar29 = (byte *)uVar5;
  bVar33 = *pbVar37;
  bVar9 = (byte)pbVar14;
  *pbVar37 = *pbVar37 + bVar9;
  if (!CARRY1(bVar33,bVar9)) goto code_r0x00403979;
  *pbVar29 = *pbVar29 + (char)uVar5;
  bVar25 = (byte)((uint)pbVar14 >> 8) | *pbVar29;
  uVar23 = CONCAT11(bVar25,bVar9);
  pbVar29 = pbVar29 + -*(int *)pbVar29;
  bVar33 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar25;
  if (CARRY1(bVar33,bVar25)) {
    cVar10 = (char)pbVar29;
    *pbVar29 = *pbVar29 + cVar10;
    bVar33 = *pbVar37;
    pbVar37 = (byte *)CONCAT22((short)((uint)pbVar37 >> 0x10),
                               CONCAT11((char)((uint)pbVar37 >> 8) - pbVar32[-0x3a],(char)pbVar37));
    *pbVar29 = *pbVar29 + cVar10;
    uVar36 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar35 = (byte)((uint)pbVar32 >> 8) | pbVar37[0x32];
    pcVar13 = (char *)CONCAT22(uVar36,CONCAT11(bVar35,(char)pbVar32));
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_CS);
    cVar10 = cVar10 + *pcVar13 + '-';
    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar10);
    *pbVar29 = *pbVar29;
    bVar11 = *pbVar37;
    cVar8 = (char)pbVar32 - *pbStack_10;
    bVar12 = *(byte *)((int)puVar38 + 0x17);
    *pbVar29 = *pbVar29 + cVar10;
    uVar23 = CONCAT11((bVar25 | bVar33) + bVar12 | *pbVar37,bVar9 - bVar11);
    pbVar32 = (byte *)CONCAT22(uVar36,CONCAT11(bVar35 + *(char *)(CONCAT31((int3)((uint)pcVar13 >> 8
                                                                                 ),cVar8) + 0x4e),
                                               cVar8));
    *pbVar29 = *pbVar29 + cVar10;
  }
  pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),uVar23);
  bVar33 = (byte)pbVar29;
  uVar21 = (undefined3)((uint)pbVar29 >> 8);
  pcVar13 = (char *)CONCAT31(uVar21,bVar33 + 0x28);
  *pcVar13 = (*pcVar13 - (bVar33 + 0x28)) - (0xd7 < bVar33);
  *pbVar37 = *pbVar37 + (char)uVar23;
  bVar9 = bVar33 + 0x1b;
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                             CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x4f],(char)pbVar32));
  *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
  pcVar18 = (char *)CONCAT31(uVar21,bVar33 + 0x43);
  *pcVar18 = (*pcVar18 - (bVar33 + 0x43)) - (0xd7 < bVar9);
  *pbVar37 = *pbVar37 + (char)uVar23;
  pcVar13 = pcVar18 + -0x6b721c;
  pcVar18 = pcVar18 + -0x6b721a;
  *pcVar18 = *pcVar18 + (char)((uint)pbVar37 >> 8);
  cVar8 = *pcVar18;
code_r0x00403a22:
  if ((POPCOUNT(cVar8) & 1U) == 0) {
code_r0x00403a24:
    cVar10 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar10;
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    bVar33 = cVar10 + 2;
    if ((POPCOUNT(bVar33) & 1U) == 0) {
      *(char *)CONCAT31(uVar21,bVar33) = *(char *)CONCAT31(uVar21,bVar33) + bVar33;
      piVar15 = (int *)CONCAT31(uVar21,cVar10 + '*');
      *piVar15 = (*piVar15 - (int)piVar15) - (uint)(0xd7 < bVar33);
      bVar33 = *pbVar37;
      bVar11 = (byte)pbVar14;
      *pbVar37 = *pbVar37 + bVar11;
      out(*(undefined4 *)pbStack_10,(short)pbVar37);
      bVar25 = ((cVar10 + '*') - (char)*piVar15) - CARRY1(bVar33,bVar11);
      pbVar17 = (byte *)CONCAT31(uVar21,bVar25);
      *pbVar37 = *pbVar37 + bVar11;
      uVar23 = (undefined2)((uint)pbVar32 >> 0x10);
      uVar31 = SUB41(pbVar32,0);
      cVar10 = (char)((uint)pbVar32 >> 8) - pbStack_10[0x1f];
      pbVar32 = (byte *)CONCAT22(uVar23,CONCAT11(cVar10,uVar31));
      *pbVar17 = *pbVar17 + bVar25;
      bVar9 = *pbVar37;
      bVar33 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar25;
      pbStack_10 = pbStack_10 + ((4 - *(int *)pbVar17) - (uint)CARRY1(bVar33,bVar25));
      pbVar17 = (byte *)CONCAT31(uVar21,bVar25);
      pbVar14 = (byte *)(CONCAT22((short)((uint)pbVar14 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar14 >> 8) | bVar9,bVar11)) + -1);
      bVar33 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar25;
      bVar33 = (bVar25 - *pbVar17) - CARRY1(bVar33,bVar25);
      *pbVar14 = *pbVar14 + (char)pbVar37;
      bVar39 = CARRY1(bVar33,*pbVar37);
      bVar33 = bVar33 + *pbVar37;
      pbVar17 = (byte *)CONCAT31(uVar21,bVar33);
      if ((POPCOUNT(bVar33) & 1U) == 0) {
        *pbVar17 = *pbVar17 + bVar33;
        cVar8 = (bVar33 + 0x6f) - (0x90 < bVar33);
        pbVar29 = (byte *)CONCAT31(uVar21,cVar8);
        bVar33 = *pbVar37;
        *pbVar37 = *pbVar37 + (char)pbVar14;
        if (SCARRY1(bVar33,(char)pbVar14) == (char)*pbVar37 < '\0') goto code_r0x00403aaf;
        *pbVar29 = *pbVar29 + cVar8;
        pcVar13 = (char *)CONCAT31(uVar21,cVar8 + '\x02');
        bVar9 = cVar10 + pbVar32[0x52];
        pbVar32 = (byte *)CONCAT22(uVar23,CONCAT11(bVar9,uVar31));
        *pcVar13 = *pcVar13 + cVar8 + '\x02';
        bVar33 = cVar8 + 4;
        pbVar29 = (byte *)CONCAT31(uVar21,bVar33);
        if ((POPCOUNT(bVar33) & 1U) == 0) {
          *pbVar29 = *pbVar29 + bVar33;
          cVar10 = (cVar8 + 's') - (0x90 < bVar33);
          pcVar13 = (char *)CONCAT31(uVar21,cVar10);
          bVar33 = (byte)((uint)pbVar14 >> 8);
          bVar39 = CARRY1(*pbVar32,bVar33);
          *pbVar32 = *pbVar32 + bVar33;
          pbVar17 = pbStack_10;
          if (bVar39) {
            *pcVar13 = *pcVar13 + cVar10;
            pbVar32 = (byte *)CONCAT22(uVar23,CONCAT11(bVar9 | pbVar19[0x5c],uVar31));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        puVar38 = (uint *)((int)puVar38 - *(int *)pbVar29);
        pbVar32 = (byte *)CONCAT22(uVar23,CONCAT11(bVar9 + pbVar32[0x52],uVar31));
code_r0x00403abf:
        *pbVar29 = *pbVar29 + (char)pbVar29;
        cVar10 = (char)pbVar29 + '\x02';
        pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar10);
        bVar39 = (POPCOUNT(cVar10) & 1U) == 0;
        pbStack_30 = pbVar19;
        if (!bVar39) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar39) {
          *pbVar17 = *pbVar17 + (byte)pbVar17;
          bVar33 = (byte)pbVar17 | pbVar17[0x400005e];
          pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar33);
          pbStack_30 = pbVar19;
          if ((char)bVar33 < '\x01') goto code_r0x00403b0b;
          *pbVar29 = *pbVar29 + bVar33;
code_r0x00403aaf:
          cVar10 = (char)pbVar29 + '(';
          pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar10);
          *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
          bVar33 = *pbVar32;
          bVar9 = (byte)((uint)pbVar14 >> 8);
          *pbVar32 = *pbVar32 + bVar9;
          pbVar16 = pbVar19;
          if (!CARRY1(bVar33,bVar9)) goto code_r0x00403ad8;
          *pbVar29 = *pbVar29 + cVar10;
          pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                     CONCAT11(bVar9 | *pbVar32,(char)pbVar14));
          if ((POPCOUNT(*pbVar37 - cVar10) & 1U) != 0) {
            *pbStack_10 = *pbStack_10 + cVar10;
            pbStack_30 = pbVar19;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                   CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x53],(char)pbVar32
                                           ));
      }
      bVar33 = (byte)pbVar17;
      *pbVar17 = *pbVar17 + bVar33;
      cVar10 = (bVar33 + 0x6f) - (0x90 < bVar33);
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),cVar10);
      bVar33 = *pbVar32;
      cVar8 = (char)((uint)pbVar14 >> 8);
      *pbVar32 = *pbVar32 + cVar8;
      pbStack_30 = pbVar19;
      if (*pbVar32 == 0 || SCARRY1(bVar33,cVar8) != (char)*pbVar32 < '\0') goto code_r0x00403b2c;
      *pcVar13 = *pcVar13 + cVar10;
    }
    else {
      pcVar13 = (char *)CONCAT31(uVar21,bVar33 + *pbVar37);
      pbVar17 = pbStack_10;
      if ((POPCOUNT(bVar33 + *pbVar37) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_10 + (int)puVar38 * 8) =
         pbVar37 + (uint)(0xd2 < (byte)pcVar13) + *(int *)(pbStack_10 + (int)puVar38 * 8);
    pbVar29 = pbVar19;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 + 0x2d);
code_r0x00403ad8:
    pbStack_30 = pbVar16;
    bVar33 = *pbVar29;
    bVar9 = (byte)pbVar29;
    *pbVar29 = *pbVar29 + bVar9;
    pbStack_34 = (byte *)CONCAT22(pbStack_34._2_2_,uVar27);
    if (!CARRY1(bVar33,bVar9)) goto code_r0x00403afc;
    *pbVar29 = *pbVar29 + bVar9;
    bVar9 = bVar9 | pbVar29[0x400005d];
    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),bVar9);
    pbVar17 = pbStack_10;
    if ((char)bVar9 < '\x01') {
      *pbVar29 = *pbVar29 + bVar9;
      pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar14 >> 8) | *pbVar37,(char)pbVar14));
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[-0x39],(char)pbVar32)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar29 = *pbVar29 + (char)pbVar29;
    cVar10 = (char)pbVar29 + '(';
    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar10);
    *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
    bVar33 = *pbVar32;
    bVar9 = (byte)((uint)pbVar14 >> 8);
    *pbVar32 = *pbVar32 + bVar9;
    pbStack_10 = pbVar17;
    if (!CARRY1(bVar33,bVar9)) goto code_r0x00403b0b;
    *pbVar29 = *pbVar29 + cVar10;
  }
  else {
    bVar33 = *pbVar37;
    *pbVar37 = *pbVar37 + (char)pbVar14;
    if (SCARRY1(bVar33,(char)pbVar14) == (char)*pbVar37 < '\0') {
      pbVar29 = pbVar19;
      pbVar16 = (byte *)(pcVar13 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '\x02');
    pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                               CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x54],(char)pbVar32));
    pbVar17 = pbStack_10;
code_r0x00403a7d:
    cVar10 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar10;
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    cVar8 = cVar10 + '-';
    pbVar16 = (byte *)CONCAT31(uVar21,cVar8);
    pbVar29 = pbVar19;
    pbStack_10 = pbVar17;
    if ((POPCOUNT(cVar8 - *pbVar37) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar16 = *pbVar16 + cVar8;
    bVar33 = cVar10 + 0x2f;
    if ((POPCOUNT(bVar33) & 1U) != 0) {
      bVar33 = *pbVar37;
      *pbVar37 = *pbVar37 + (byte)pbVar14;
      *pbVar19 = *pbVar19 - CARRY1(bVar33,(byte)pbVar14);
      pbVar29 = (byte *)CONCAT31(uVar21,cVar10 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar21,bVar33) = *(char *)CONCAT31(uVar21,bVar33) + bVar33;
    bVar39 = 0x90 < bVar33;
    pcVar13 = (char *)CONCAT31(uVar21,cVar10 + -0x62);
code_r0x00403a8f:
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    bVar9 = (char)pcVar13 - bVar39;
    pbVar29 = (byte *)CONCAT31(uVar21,bVar9);
    bVar33 = *pbVar32;
    cVar10 = (char)((uint)pbVar14 >> 8);
    *pbVar32 = *pbVar32 + cVar10;
    pbStack_30 = pbVar19;
    pbStack_10 = pbVar17;
    if (*pbVar32 != 0 && SCARRY1(bVar33,cVar10) == (char)*pbVar32 < '\0') {
      *pbVar29 = *pbVar29 + bVar9;
      pbStack_10 = (byte *)CONCAT31(uVar21,bVar9 + 0x2d);
      *(byte **)(pbVar17 + (int)puVar38 * 8) =
           pbVar37 + (uint)(0xd2 < bVar9) + *(int *)(pbVar17 + (int)puVar38 * 8);
      bVar39 = CARRY1(*pbVar17,(byte)pbVar17);
      *pbVar17 = *pbVar17 + (byte)pbVar17;
      goto code_r0x00403aa1;
    }
  }
  pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                             CONCAT11((byte)((uint)pbVar14 >> 8) | *pbVar29,(char)pbVar14));
  *pbStack_10 = *pbStack_10 + (char)pbVar29;
code_r0x00403afc:
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                             CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32));
  *pbVar29 = *pbVar29 + (char)pbVar29;
  uVar21 = (undefined3)((uint)pbVar29 >> 8);
  bVar9 = (char)pbVar29 + 0x6f;
  bVar33 = *(byte *)CONCAT31(uVar21,bVar9);
  *pbVar37 = *pbVar37 + (char)pbVar14;
  pbVar29 = (byte *)CONCAT31(uVar21,(bVar9 & bVar33) + *pbStack_10);
  *pbVar14 = *pbVar14 - (char)((uint)pbVar37 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar29 = *pbVar29 + (byte)pbVar29;
    bVar33 = (byte)pbVar29 | *pbVar32;
    piVar15 = (int *)CONCAT31((int3)((uint)pbVar29 >> 8),bVar33);
    if (bVar33 != 0) {
      pbStack_30 = pbStack_30 + -puVar38[9];
      *(byte *)piVar15 = (char)*piVar15 + bVar33;
      pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar14 >> 8) | *pbVar37,(char)pbVar14));
      pbStack_34 = pbStack_34 + *piVar15;
      pcVar13 = (char *)((int)piVar15 + *piVar15);
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar9 = (char)pcVar13 - *pcVar13;
      pbVar17 = (byte *)CONCAT31(uVar21,bVar9);
      bVar33 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar9;
      piVar15 = (int *)CONCAT31(uVar21,bVar9 - CARRY1(bVar33,bVar9));
    }
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    pbStack_10 = pbStack_34 + 4;
    out(*(undefined4 *)pbStack_34,(short)pbVar37);
    pbVar29 = (byte *)(((uint)piVar15 >> 8) * 0x100);
    *pbVar37 = *pbVar37 + (byte)pbVar14;
    bVar33 = (char)pbVar37 - *pbVar32;
    pbVar37 = (byte *)CONCAT31((int3)((uint)pbVar37 >> 8),bVar33);
    *pbVar32 = *pbVar32;
    *pbVar37 = *pbVar37 + (char)((uint)pbVar14 >> 8);
    *pbVar29 = *pbVar29;
    pcVar13 = (char *)(((uint)piVar15 >> 8) * 0x200);
    *pcVar13 = *pcVar13 + (char)pbVar32;
    bVar39 = CARRY1(*pbVar14,bVar33);
    *pbVar14 = *pbVar14 + bVar33;
    pbStack_34 = pbStack_10;
    if (bVar39) break;
    while( true ) {
      *(byte **)pbVar29 = pbVar29 + (uint)bVar39 + *(int *)pbVar29;
      puVar38 = puVar38 + 1;
      pbVar29[(int)pbVar37] = pbVar29[(int)pbVar37] + (char)pbVar32;
      *pbVar29 = *pbVar29 + (char)pbVar29;
      *(byte **)pbStack_34 = pbVar32 + *(int *)pbStack_34;
      bVar33 = (byte)((uint)pbVar14 >> 8);
      cVar10 = (char)pbVar14;
      pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),CONCAT11(bVar33 + *pbVar29,cVar10));
      pbVar29 = pbVar29 + (uint)CARRY1(bVar33,*pbVar29) + *(int *)pbVar29;
      *pbVar37 = *pbVar37 + cVar10;
      cVar10 = (char)pbVar32 - pbStack_34[2];
      pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar10);
      pbStack_10 = pbStack_34;
      if ((POPCOUNT(cVar10) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar29 = *pbVar29 + (char)pbVar29;
      pbVar37[0x16060000] = pbVar37[0x16060000] - (char)pbVar14;
      pbVar32 = (byte *)((uint)pbVar32 | (uint)pbStack_10);
      cVar10 = (char)pbVar29 + '\x02';
      pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar10);
      bVar39 = (POPCOUNT(cVar10) & 1U) == 0;
code_r0x00403b18:
      bVar33 = (byte)pbVar17;
      uVar21 = (undefined3)((uint)pbVar17 >> 8);
      if (!bVar39) {
        *pbVar37 = *pbVar37 + (char)pbVar14;
        pbVar29 = (byte *)CONCAT31(uVar21,bVar33 | *pbStack_10);
code_r0x00403b73:
        pbVar17 = (byte *)((int)puVar38 + *(int *)(pbStack_30 + -0x37));
        *pbVar29 = *pbVar29 + (byte)pbVar29;
        uVar21 = (undefined3)((uint)pbVar29 >> 8);
        bVar33 = (byte)pbVar29 | *pbVar37;
        pcVar13 = (char *)CONCAT31(uVar21,bVar33);
        uVar40 = CONCAT44(pbVar37,pcVar13);
        if ((POPCOUNT(bVar33) & 1U) == 0) {
          *pcVar13 = *pcVar13 + bVar33;
          *pbStack_10 = *pbStack_10 + 1;
          return (byte *)CONCAT31(uVar21,bVar33 + 6);
        }
        bVar33 = *pbStack_10;
        *pbStack_10 = *pbStack_10 + 1;
        pcVar4 = (code *)swi(4);
        if (SCARRY1(bVar33,'\x01')) {
          uVar40 = (*pcVar4)();
          pbVar14 = extraout_ECX_00;
        }
        pbVar19 = (byte *)uVar40;
        *pbVar19 = *pbVar19 + (char)uVar40;
        cVar8 = (char)((ulonglong)uVar40 >> 0x20);
        puVar38 = (uint *)CONCAT22((short)((ulonglong)uVar40 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar40 >> 0x28) | pbVar32[0x2f],cVar8)
                                  );
        *pbVar19 = *pbVar19 + (char)uVar40;
        cVar10 = (char)pbVar14;
        bVar25 = (byte)((uint)pbVar14 >> 8) | *pbVar19;
        pbVar19 = pbVar19 + *(int *)pbVar19;
        bVar33 = *pbVar32;
        *pbVar32 = *pbVar32 + bVar25;
        bVar9 = (byte)pbVar19;
        if (CARRY1(bVar33,bVar25)) {
          *pbVar19 = *pbVar19 + bVar9;
          bVar25 = bVar25 | (byte)*puVar38;
          *pbVar32 = *pbVar32 - cVar8;
          *pbVar19 = *pbVar19 + bVar9;
          uVar21 = (undefined3)((uint)pbVar19 >> 8);
          bVar9 = bVar9 | (byte)*puVar38;
          piVar15 = (int *)CONCAT31(uVar21,bVar9);
          pbStack_30 = pbStack_30 + *piVar15;
          *(byte *)piVar15 = (char)*piVar15 + bVar9;
          cVar8 = (char)pbVar32 - *pbStack_10;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((char)((uint)pbVar32 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar8) +
                                                       0x5f),cVar8));
          *(byte *)piVar15 = (char)*piVar15 + bVar9;
          bVar33 = bVar9 + 0x2a & (byte)*puVar38;
          pbVar17 = pbVar17 + *(int *)(pbStack_30 + 0x5f);
          *(char *)CONCAT31(uVar21,bVar33) = *(char *)CONCAT31(uVar21,bVar33) + bVar33;
          pbVar19 = (byte *)CONCAT31(uVar21,bVar33 + 0x2a);
          *(byte *)puVar38 = (byte)*puVar38 + 0x28;
          *pbVar19 = *pbVar19 + bVar33 + 0x2a;
        }
        else {
          *pbStack_10 = *pbStack_10 + bVar9;
        }
        pcVar13 = (char *)CONCAT22((short)((uint)pbVar14 >> 0x10),CONCAT11(bVar25,cVar10));
        *pbStack_30 = *pbStack_30 - bVar25;
        *(byte *)puVar38 = (byte)*puVar38 + cVar10;
        bVar33 = (byte)pbVar19 - 0xb;
        pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar33);
        if (10 < (byte)pbVar19) {
          *pbVar14 = *pbVar14 | bVar33;
          return pbVar14;
        }
        *(byte *)puVar38 = (byte)*puVar38 + cVar10;
        do {
          bVar33 = pbVar32[-0x23];
          bVar25 = (byte)pbVar14;
          *pbVar14 = *pbVar14 + bVar25;
          bVar9 = pbStack_30[-0x22];
          *pbVar14 = *pbVar14 + bVar25;
          uVar21 = (undefined3)((uint)pbVar14 >> 8);
          bVar25 = bVar25 | *pbStack_10;
          pbVar19 = (byte *)CONCAT31(uVar21,bVar25);
          cVar8 = (char)pbVar32 - *pbStack_10;
          pbVar32 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar32 >> 8) + bVar33 |
                                                              bVar9,(char)pbVar32)) >> 8),cVar8);
          cVar10 = (char)pcVar13;
          pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                     CONCAT11((char)((uint)pcVar13 >> 8) + *pbVar19,cVar10));
          *(byte *)puVar38 = (byte)*puVar38 + cVar10;
          bVar9 = bVar25 - *pbVar19;
          pbVar14 = (byte *)CONCAT31(uVar21,bVar9);
          pbStack_10 = pbStack_10 + (-(uint)(bVar25 < *pbVar19) - *(int *)pbVar14);
          puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(char)puVar38 * '\x02');
          *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
          *pbVar17 = *pbVar17 + cVar8;
          bVar33 = *pbVar14;
          *pbVar14 = *pbVar14 + bVar9;
          *puVar38 = (uint)(pbVar14 + (uint)CARRY1(bVar33,bVar9) + *puVar38);
        } while ((POPCOUNT(*puVar38 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar14 = *pbVar14 + (char)pbVar14;
        pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | pbVar14[(int)pcVar13])
        ;
        bVar39 = false;
        pbVar14 = (byte *)((uint)pbVar14 & 0xffffff00);
        do {
          pbVar17 = pbVar17 + (-(uint)bVar39 - *(int *)pbVar32);
          pcVar18 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),*pcVar13);
          *pcVar18 = *pcVar18 + *pcVar13;
          pbVar14 = (byte *)CONCAT31((int3)((uint)(pcVar18 +
                                                  (pbStack_10[0x2000001] <
                                                  (byte)((uint)pcVar13 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar18 +
                                            (pbStack_10[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                            0xda7d) | (byte)*puVar38) + 0x7d);
          pcVar13 = pcVar13 + -1;
          *(byte *)puVar38 = (byte)*puVar38 + (char)pcVar13;
          while( true ) {
            uVar26 = (undefined3)((uint)puVar38 >> 8);
            cVar10 = (char)puVar38 + *(char *)((int)pbVar17 * 2 + 0xa0000e1);
            puVar38 = (uint *)CONCAT31(uVar26,cVar10);
            bVar39 = CARRY1((byte)pbVar14,(byte)*puVar38);
            uVar21 = (undefined3)((uint)pbVar14 >> 8);
            bVar33 = (byte)pbVar14 + (byte)*puVar38;
            pbVar14 = (byte *)CONCAT31(uVar21,bVar33);
            if ((POPCOUNT(bVar33) & 1U) != 0) break;
            *pbVar14 = *pbVar14 + bVar33;
            cVar8 = (char)pcVar13;
            pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar13 >> 8) | pbVar17[-0x65],cVar8));
            bVar9 = *pbVar14;
            *pbVar14 = *pbVar14 + bVar33;
            if (CARRY1(bVar9,bVar33)) {
              *pbVar14 = *pbVar14 + bVar33;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | pbStack_30[-0x1d],
                                                  (char)pbVar32));
              *pbVar14 = *pbVar14 + bVar33;
              bVar39 = false;
              bVar33 = bVar33 | (byte)*puVar38;
              pcVar18 = (char *)CONCAT31(uVar21,bVar33);
              while( true ) {
                bVar9 = (byte)pcVar18;
                uVar21 = (undefined3)((uint)pcVar18 >> 8);
                if (bVar39 == (char)bVar33 < '\0') break;
                *pcVar18 = *pcVar18 + bVar9;
                bVar9 = bVar9 | (byte)*puVar38;
                puVar20 = (uint *)CONCAT31(uVar21,bVar9);
                *pbVar17 = *pbVar17 << 1 | (char)*pbVar17 < '\0';
                uVar2 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20 + bVar9;
                pbStack_30 = pbStack_30 + (-(uint)CARRY1((byte)uVar2,bVar9) - *puVar20);
                *puVar20 = *puVar20 << 1 | (uint)((int)*puVar20 < 0);
                while( true ) {
                  uVar2 = *puVar38;
                  *(byte *)puVar38 = (byte)*puVar38 + (byte)pcVar13;
                  cVar10 = (char)puVar20 + 'o' + CARRY1((byte)uVar2,(byte)pcVar13);
                  pcVar18 = (char *)CONCAT31((int3)((uint)puVar20 >> 8),cVar10);
                  pcVar13 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar10) & 1U) != 0) break;
                  *pcVar18 = *pcVar18 + cVar10;
                  bVar33 = bRamfe140212;
                  pcVar13 = (char *)0x0;
                  uVar21 = (undefined3)((uint)(pcVar18 + -0x732b0000) >> 8);
                  bVar9 = in(0);
                  puVar20 = (uint *)CONCAT31(uVar21,bVar9);
                  uVar2 = *puVar38;
                  *(byte *)puVar38 = (byte)*puVar38;
                  if (SCARRY1((byte)uVar2,'\0') != (char)(byte)*puVar38 < '\0') {
                    *(byte *)puVar20 = (byte)*puVar20 + bVar9;
                    bVar9 = bVar9 | (byte)*puVar38;
                    puVar20 = (uint *)CONCAT31(uVar21,bVar9);
                    if ((POPCOUNT(bVar9) & 1U) == 0) {
                      *(byte *)puVar20 = (byte)*puVar20 + bVar9;
                      pcVar13 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar33 | (byte)*puVar20) << 8)
                      ;
                      *(byte *)puVar20 = (byte)*puVar20 + bVar9;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar20 = (byte)*puVar20 + bVar9;
                    puVar20 = (uint *)CONCAT31(uVar21,bVar9 | (byte)*puVar38);
                  }
                }
                *(byte *)puVar38 = (byte)*puVar38;
                bVar39 = SCARRY1((char)puVar38,*pbVar17);
                bVar33 = (char)puVar38 + *pbVar17;
                puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar33);
              }
              if (bVar39 == (char)bVar33 < '\0') {
                *(byte *)puVar38 = (byte)*puVar38 + (char)pcVar13;
                pbVar14 = (byte *)((uint)pcVar18 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar18 = *pcVar18 + bVar9;
              pbVar14 = (byte *)CONCAT31(uVar21,(bVar9 | (byte)*puVar38) + 0x7d);
              pcVar13 = pcVar13 + -1;
              *(byte *)puVar38 = (byte)*puVar38 + (char)pcVar13;
            }
            else {
              *(byte *)puVar38 = (byte)*puVar38 + cVar8;
              puVar38 = (uint *)CONCAT31(uVar26,cVar10 + *(char *)((int)pbVar17 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar17 = *pbVar17 + bVar33;
      bVar33 = bVar33 + 0x6f & *(byte *)CONCAT31(uVar21,bVar33 + 0x6f);
      *pbVar37 = *pbVar37 + (char)pbVar14;
      pbVar37 = (byte *)CONCAT31((int3)((uint)pbVar37 >> 8),(char)pbVar37 + (byte)*puVar38);
      *(byte *)(puVar38 + 0x5c18000) = (byte)puVar38[0x5c18000] - bVar33;
      pcVar13 = (char *)CONCAT31(uVar21,bVar33 - (byte)*puVar38);
code_r0x00403b2c:
      bVar33 = (char)pcVar13 - *pcVar13;
      pbVar29 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar33);
      *pbVar29 = *pbVar29 + bVar33;
      *(byte **)pbVar29 = pbVar37 + *(int *)pbVar29;
      *pbVar29 = *pbVar29 + bVar33;
      bVar39 = CARRY1(*pbVar29,bVar33);
      *pbVar29 = *pbVar29 + bVar33;
      pbStack_34 = pbStack_10;
    }
  }
  *pbVar29 = *pbVar29;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),(byte)pbVar14 | *pbVar37);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_30 = pbStack_30 + -*puVar20;
  do {
    bVar33 = (byte)puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + bVar33;
    pbVar17 = pbVar17 + -*(int *)(pbStack_30 + -0x1a);
    *(byte *)puVar20 = (byte)*puVar20 + bVar33;
    bVar33 = bVar33 | (byte)*puVar38;
    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar33);
    *(byte *)puVar20 = (byte)*puVar20 | bVar33;
    bVar33 = (byte)*puVar20;
    pbStack_30 = (byte *)0x2700001;
    while ((POPCOUNT(bVar33) & 1U) == 0) {
      do {
        *(byte *)puVar20 = (byte)*puVar20 + (byte)puVar20;
        bVar33 = (byte)puVar20 | (byte)*puVar38;
        puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar33);
        if ((POPCOUNT(bVar33) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
        uVar22 = CONCAT21((short)((uint)pcVar13 >> 0x10),(byte)((uint)pcVar13 >> 8) | bRamfe140212);
        while( true ) {
          pcVar13 = (char *)((uint)uVar22 << 8);
          bVar11 = (byte)puVar20;
          *(byte *)puVar20 = (byte)*puVar20 & bVar11;
          bVar25 = *pbVar32;
          bVar12 = (byte)uVar22;
          bVar9 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar12;
          bVar33 = *pbVar32;
          if (!CARRY1(bVar25,bVar12)) break;
          *(byte *)puVar20 = (byte)*puVar20 + bVar11;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffe2,
                                              (char)pbVar32));
          *(byte *)puVar20 = (byte)*puVar20 + bVar11;
          bVar11 = bVar11 | (byte)*puVar38;
          puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar11);
          bVar39 = (POPCOUNT(bVar11) & 1U) == 0;
          while( true ) {
            cVar10 = (char)((uint)pbVar32 >> 8);
            uVar23 = (undefined2)((uint)pbVar32 >> 0x10);
            if (!bVar39) {
              *(byte *)puVar38 = (byte)*puVar38;
              pbVar32 = (byte *)CONCAT22(uVar23,CONCAT11(cVar10 + pbVar32[-0x1f],(char)pbVar32));
              goto code_r0x00403d52;
            }
            *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
            uVar27 = (undefined2)((uint)pcVar13 >> 0x10);
            bVar9 = (byte)((uint)pcVar13 >> 8) | (byte)*puVar20;
            uVar22 = CONCAT21(uVar27,bVar9);
            *puVar20 = *puVar20 & (uint)puVar20;
            *pbVar32 = *pbVar32 + bVar9;
            uVar21 = (undefined3)((uint)puVar20 >> 8);
            bVar33 = (char)puVar20 - bVar9;
            pcVar13 = (char *)CONCAT31(uVar21,bVar33);
            *pcVar13 = *pcVar13 + bVar33;
            bVar33 = bVar33 | (byte)*puVar38;
            puVar20 = (uint *)CONCAT31(uVar21,bVar33);
            if ((POPCOUNT(bVar33) & 1U) != 0) break;
            *(byte *)puVar20 = (byte)*puVar20 + bVar33;
            pcVar13 = (char *)((uint)CONCAT21(uVar27,bVar9 | (byte)*puVar20) << 8);
            *puVar20 = *puVar20 - (int)puVar20;
            *(byte *)puVar38 = (byte)*puVar38;
            pbVar32 = (byte *)CONCAT22(uVar23,CONCAT11(cVar10 + pbVar32[-0x1d],(char)pbVar32));
            do {
              *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
              uVar23 = (undefined2)((uint)puVar38 >> 0x10);
              cVar10 = (char)puVar38;
              bVar33 = (byte)((uint)puVar38 >> 8) | pbVar32[-0x17];
              puVar38 = (uint *)CONCAT22(uVar23,CONCAT11(bVar33,cVar10));
              *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffeb,
                                                  (char)pbVar32));
              do {
                *(byte *)puVar20 = (byte)*puVar20 + (byte)puVar20;
                uVar21 = (undefined3)((uint)puVar20 >> 8);
                bVar25 = (byte)puVar20 | (byte)*puVar38;
                pcVar18 = (char *)CONCAT31(uVar21,bVar25);
                bVar9 = pbVar32[-0x16];
                *pcVar18 = *pcVar18 + bVar25;
                pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                           CONCAT11((char)((uint)pbVar32 >> 8) + bVar9 |
                                                    bRam026fffec,(char)pbVar32));
                *pcVar18 = *pcVar18 + bVar25;
                pbVar14 = (byte *)CONCAT31(uVar21,bVar25 | (byte)*puVar38);
                while( true ) {
                  *pbVar14 = *pbVar14 + (byte)pbVar14;
                  uVar21 = (undefined3)((uint)pbVar14 >> 8);
                  bVar9 = (byte)pbVar14 | (byte)*puVar38;
                  puVar20 = (uint *)CONCAT31(uVar21,bVar9);
                  if ((POPCOUNT(bVar9) & 1U) != 0) break;
                  *(byte *)puVar20 = (byte)*puVar20 + bVar9;
                  bVar25 = pbVar17[-0x14];
                  *(byte *)puVar20 = (byte)*puVar20 + bVar9;
                  bVar9 = bVar9 | (byte)*puVar38;
                  pcVar18 = (char *)CONCAT31(uVar21,bVar9);
                  bVar11 = pbVar32[-0x15];
                  *pcVar18 = *pcVar18 + bVar9;
                  pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),
                                                    (byte)((uint)pcVar13 >> 8) | bVar25 |
                                                    pbVar17[-0x13]) << 8);
                  *pcVar18 = *pcVar18 + bVar9;
                  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                             CONCAT11((char)((uint)pbVar32 >> 8) + bVar11 |
                                                      bRam026fffef,(char)pbVar32));
                  *pcVar18 = *pcVar18 + bVar9;
                  pbVar14 = (byte *)CONCAT31(uVar21,bVar9 | (byte)*puVar38);
                  do {
                    do {
                      bVar25 = (byte)pbVar14;
                      *pbVar14 = *pbVar14 + bVar25;
                      cVar30 = (char)pbVar32;
                      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar32 >> 8) | *pbVar14,
                                                          cVar30));
                      *pbVar14 = bVar25;
                      *pbVar14 = *pbVar14 + bVar25;
                      cVar8 = (char)((uint)pcVar13 >> 8) + *pbVar14;
                      pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),cVar8) << 8);
                      uVar21 = (undefined3)((uint)pbVar14 >> 8);
                      bVar25 = bVar25 & *pbVar14;
                      pbVar14 = (byte *)CONCAT31(uVar21,bVar25);
                      bVar9 = *pbVar32;
                      *pbVar32 = *pbVar32 + cVar8;
                    } while (SCARRY1(bVar9,cVar8) == (char)*pbVar32 < '\0');
                    *pbVar14 = *pbVar14 + bVar25;
                    bVar25 = bVar25 | (byte)*puVar38;
                    pbVar14 = (byte *)CONCAT31(uVar21,bVar25);
                    if ((POPCOUNT(bVar25) & 1U) == 0) {
                      *pbVar14 = *pbVar14 + bVar25;
                      *pbVar14 = *pbVar14 + bVar25;
                      cVar10 = cVar10 - bVar33;
                      pbVar19 = (byte *)CONCAT31((int3)((uint)puVar38 >> 8),cVar10);
                      *pbVar14 = *pbVar14 + bVar25;
                      bRam0312382b = bRam0312382b | *pbVar19;
                      while( true ) {
                        bVar9 = (byte)pbVar14;
                        *pbVar14 = *pbVar14 + bVar9;
                        bRam0312382b = bRam0312382b | (pbVar17 + 0x21b0000)[(int)pbVar14];
                        uVar21 = (undefined3)((uint)pbVar14 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar19 = *pbVar19 + bRam0312382b;
                        pbVar14 = (byte *)CONCAT31(uVar21,bVar9 | *pbStack_10);
                      }
                      *pbVar14 = *pbVar14 + bVar9;
                      bVar9 = bVar9 | *pbStack_10;
                      pcVar13 = (char *)CONCAT31(uVar21,bVar9);
                      out(*(undefined4 *)pbStack_10,(short)pbVar19);
                      *pcVar13 = *pcVar13 + bVar9;
                      uVar27 = CONCAT11(bVar33 | bRam6f0a002b,cVar10);
                      pcVar18 = (char *)CONCAT22(uVar23,uVar27);
                      *pcVar13 = *pcVar13 + bVar9;
                      *pcVar18 = *pcVar18 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_10 + 4),uVar27);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar30 + *pcVar13);
                  } while (SCARRY1(cVar30,*pcVar13) != (char)(cVar30 + *pcVar13) < '\0');
                }
                uVar2 = *puVar38;
                *(byte *)puVar38 = (byte)*puVar38;
              } while (SCARRY1((byte)uVar2,'\0') != (char)(byte)*puVar38 < '\0');
              *(byte *)puVar38 = (byte)*puVar38;
              *pcVar13 = *pcVar13 - (char)pbVar32;
              *(byte *)puVar20 = (byte)*puVar20 + bVar9;
              bVar9 = bVar9 | (byte)*puVar38;
              puVar20 = (uint *)CONCAT31(uVar21,bVar9);
              bVar39 = (POPCOUNT(bVar9) & 1U) == 0;
            } while (bVar39);
          }
        }
      } while (SCARRY1(bVar9,bVar12));
    }
    *pbVar32 = *pbVar32 + (char)((uint)pcVar13 >> 8);
    *pbVar17 = *pbVar17 - (char)pbVar32;
  } while( true );
}


