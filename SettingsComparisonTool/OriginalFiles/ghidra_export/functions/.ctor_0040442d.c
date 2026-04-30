/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040442d
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(int * param_1, byte * param_2, ushort * param_3)
 * Local Vars  : param_1, param_2, param_3, cVar2, iVar1, bVar4, bVar3, piVar5, in_EAX, pbVar7, uVar6, puVar9, pcVar8, pbVar11, pbVar10, cVar13, uVar12, cVar15, bVar14, uVar17, uVar16, unaff_EBX, bVar18, unaff_ESI, unaff_EBP, pbVar20, pbVar19, in_ES, unaff_EDI, in_AF, bVar21, unaff_retaddr, bVar22
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x00404654) */
/* WARNING: Removing unreachable block (ram,0x004045de) */
/* WARNING: Removing unreachable block (ram,0x00404576) */
/* WARNING: Removing unreachable block (ram,0x004046c4) */
/* WARNING: Removing unreachable block (ram,0x004046d0) */
/* WARNING: Removing unreachable block (ram,0x004046e3) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x0040455f) */
/* WARNING: Removing unreachable block (ram,0x00404580) */
/* WARNING: Removing unreachable block (ram,0x00404585) */
/* WARNING: Removing unreachable block (ram,0x00404592) */
/* WARNING: Removing unreachable block (ram,0x004045b9) */
/* WARNING: Removing unreachable block (ram,0x004045ac) */
/* WARNING: Removing unreachable block (ram,0x004045ba) */
/* WARNING: Removing unreachable block (ram,0x004045bc) */
/* WARNING: Removing unreachable block (ram,0x004045d7) */
/* WARNING: Removing unreachable block (ram,0x00404607) */
/* WARNING: Removing unreachable block (ram,0x004045f7) */
/* WARNING: Removing unreachable block (ram,0x00404606) */
/* WARNING: Removing unreachable block (ram,0x0040460b) */
/* WARNING: Removing unreachable block (ram,0x00404617) */
/* WARNING: Removing unreachable block (ram,0x004045c8) */
/* WARNING: Removing unreachable block (ram,0x004045d2) */
/* WARNING: Removing unreachable block (ram,0x00404620) */
/* WARNING: Removing unreachable block (ram,0x00404634) */
/* WARNING: Removing unreachable block (ram,0x00404638) */
/* WARNING: Removing unreachable block (ram,0x004046a0) */
/* WARNING: Removing unreachable block (ram,0x004046a4) */
/* WARNING: Removing unreachable block (ram,0x004046b2) */
/* WARNING: Removing unreachable block (ram,0x004046c2) */
/* WARNING: Removing unreachable block (ram,0x004046f0) */
/* WARNING: Removing unreachable block (ram,0x004046f2) */
/* WARNING: Removing unreachable block (ram,0x0040470a) */
/* WARNING: Removing unreachable block (ram,0x00404710) */
/* WARNING: Removing unreachable block (ram,0x00404729) */
/* WARNING: Removing unreachable block (ram,0x00404738) */
/* WARNING: Removing unreachable block (ram,0x0040473a) */
/* WARNING: Removing unreachable block (ram,0x00404754) */
/* WARNING: Removing unreachable block (ram,0x0040475f) */
/* WARNING: Removing unreachable block (ram,0x00404777) */
/* WARNING: Removing unreachable block (ram,0x004047ba) */
/* WARNING: Removing unreachable block (ram,0x004047fe) */
/* WARNING: Removing unreachable block (ram,0x004047d4) */
/* WARNING: Removing unreachable block (ram,0x00404869) */
/* WARNING: Removing unreachable block (ram,0x004047f9) */
/* WARNING: Removing unreachable block (ram,0x004047ff) */
/* WARNING: Removing unreachable block (ram,0x00404803) */
/* WARNING: Removing unreachable block (ram,0x00404811) */
/* WARNING: Removing unreachable block (ram,0x0040488e) */
/* WARNING: Removing unreachable block (ram,0x0040481d) */
/* WARNING: Removing unreachable block (ram,0x00404894) */
/* WARNING: Removing unreachable block (ram,0x00404823) */
/* WARNING: Removing unreachable block (ram,0x00404844) */
/* WARNING: Removing unreachable block (ram,0x0040486e) */
/* WARNING: Removing unreachable block (ram,0x004048b6) */
/* WARNING: Removing unreachable block (ram,0x0040486f) */
/* WARNING: Removing unreachable block (ram,0x00404873) */
/* WARNING: Removing unreachable block (ram,0x00404880) */
/* WARNING: Removing unreachable block (ram,0x00404883) */
/* WARNING: Removing unreachable block (ram,0x00404895) */
/* WARNING: Removing unreachable block (ram,0x00404899) */
/* WARNING: Removing unreachable block (ram,0x00404916) */
/* WARNING: Removing unreachable block (ram,0x004048a1) */
/* WARNING: Removing unreachable block (ram,0x004048f3) */
/* WARNING: Removing unreachable block (ram,0x004048a7) */
/* WARNING: Removing unreachable block (ram,0x004048b1) */
/* WARNING: Removing unreachable block (ram,0x004048b7) */
/* WARNING: Removing unreachable block (ram,0x004048ba) */
/* WARNING: Removing unreachable block (ram,0x0040487b) */
/* WARNING: Removing unreachable block (ram,0x004048e7) */
/* WARNING: Removing unreachable block (ram,0x004048de) */
/* WARNING: Removing unreachable block (ram,0x004048f5) */
/* WARNING: Removing unreachable block (ram,0x004048fe) */
/* WARNING: Removing unreachable block (ram,0x00404903) */
/* WARNING: Removing unreachable block (ram,0x0040497f) */
/* WARNING: Removing unreachable block (ram,0x00404908) */
/* WARNING: Removing unreachable block (ram,0x00404921) */
/* WARNING: Removing unreachable block (ram,0x00404927) */
/* WARNING: Removing unreachable block (ram,0x00404931) */
/* WARNING: Removing unreachable block (ram,0x00404937) */
/* WARNING: Removing unreachable block (ram,0x0040495b) */
/* WARNING: Removing unreachable block (ram,0x0040492b) */
/* WARNING: Removing unreachable block (ram,0x00404961) */
/* WARNING: Removing unreachable block (ram,0x00404973) */
/* WARNING: Removing unreachable block (ram,0x00404943) */
/* WARNING: Removing unreachable block (ram,0x00404979) */
/* WARNING: Removing unreachable block (ram,0x00404982) */
/* WARNING: Removing unreachable block (ram,0x0040498b) */
/* WARNING: Removing unreachable block (ram,0x00404991) */
/* WARNING: Removing unreachable block (ram,0x004049a9) */
/* WARNING: Removing unreachable block (ram,0x004049b4) */
/* WARNING: Removing unreachable block (ram,0x004049c2) */
/* WARNING: Removing unreachable block (ram,0x004049c4) */
/* WARNING: Removing unreachable block (ram,0x00404a4e) */
/* WARNING: Removing unreachable block (ram,0x004049d7) */
/* WARNING: Removing unreachable block (ram,0x004049df) */
/* WARNING: Removing unreachable block (ram,0x004049ef) */
/* WARNING: Removing unreachable block (ram,0x004049f5) */
/* WARNING: Removing unreachable block (ram,0x00404a22) */
/* WARNING: Removing unreachable block (ram,0x00404a30) */
/* WARNING: Removing unreachable block (ram,0x00404ac2) */
/* WARNING: Removing unreachable block (ram,0x00404a4d) */
/* WARNING: Removing unreachable block (ram,0x00404a51) */
/* WARNING: Removing unreachable block (ram,0x00404a8a) */
/* WARNING: Removing unreachable block (ram,0x00404ab4) */
/* WARNING: Removing unreachable block (ram,0x00404aca) */
/* WARNING: Removing unreachable block (ram,0x00404ad4) */
/* WARNING: Removing unreachable block (ram,0x00404add) */
/* WARNING: Removing unreachable block (ram,0x00404aac) */
/* WARNING: Removing unreachable block (ram,0x00404ae2) */
/* WARNING: Removing unreachable block (ram,0x00404b5e) */
/* WARNING: Removing unreachable block (ram,0x00404ae8) */
/* WARNING: Removing unreachable block (ram,0x00404afa) */
/* WARNING: Removing unreachable block (ram,0x00404b0f) */
/* WARNING: Removing unreachable block (ram,0x00404b18) */
/* WARNING: Removing unreachable block (ram,0x00404b63) */
/* WARNING: Removing unreachable block (ram,0x00404b79) */
/* WARNING: Removing unreachable block (ram,0x00404bef) */
/* WARNING: Removing unreachable block (ram,0x00404b09) */
/* WARNING: Removing unreachable block (ram,0x00404b85) */
/* WARNING: Removing unreachable block (ram,0x00404b89) */
/* WARNING: Removing unreachable block (ram,0x00404b9e) */
/* WARNING: Removing unreachable block (ram,0x00404ac4) */
/* WARNING: Removing unreachable block (ram,0x004049bb) */
/* WARNING: Removing unreachable block (ram,0x004049be) */
/* WARNING: Removing unreachable block (ram,0x004048f6) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00404c0f) */
/* WARNING: Removing unreachable block (ram,0x00404c32) */
/* WARNING: Removing unreachable block (ram,0x00404c54) */
/* WARNING: Removing unreachable block (ram,0x00404c79) */
/* WARNING: Removing unreachable block (ram,0x00404c99) */
/* WARNING: Removing unreachable block (ram,0x00404d13) */
/* WARNING: Removing unreachable block (ram,0x00404cd4) */
/* WARNING: Removing unreachable block (ram,0x00404ca4) */
/* WARNING: Removing unreachable block (ram,0x00404ca8) */
/* WARNING: Removing unreachable block (ram,0x00404caa) */
/* WARNING: Removing unreachable block (ram,0x00404cca) */
/* WARNING: Removing unreachable block (ram,0x00404cce) */
/* WARNING: Removing unreachable block (ram,0x00404cfa) */
/* WARNING: Removing unreachable block (ram,0x00404d15) */
/* WARNING: Removing unreachable block (ram,0x00404d1a) */
/* WARNING: Removing unreachable block (ram,0x00404d32) */
/* WARNING: Removing unreachable block (ram,0x00404d3e) */
/* WARNING: Removing unreachable block (ram,0x00404da6) */
/* WARNING: Removing unreachable block (ram,0x00404da8) */
/* WARNING: Removing unreachable block (ram,0x00404d9a) */
/* WARNING: Removing unreachable block (ram,0x00404dce) */
/* WARNING: Removing unreachable block (ram,0x00404de7) */
/* WARNING: Removing unreachable block (ram,0x00404e73) */
/* WARNING: Removing unreachable block (ram,0x00404ea6) */
/* WARNING: Removing unreachable block (ram,0x00404e78) */
/* WARNING: Removing unreachable block (ram,0x00404dfc) */
/* WARNING: Removing unreachable block (ram,0x00404e60) */
/* WARNING: Removing unreachable block (ram,0x00404e0d) */
/* WARNING: Removing unreachable block (ram,0x00404e1a) */
/* WARNING: Removing unreachable block (ram,0x00404e48) */
/* WARNING: Removing unreachable block (ram,0x00404ebf) */
/* WARNING: Removing unreachable block (ram,0x00404ec1) */
/* WARNING: Removing unreachable block (ram,0x00404f39) */
/* WARNING: Removing unreachable block (ram,0x00404f6e) */
/* WARNING: Removing unreachable block (ram,0x00404fa0) */
/* WARNING: Removing unreachable block (ram,0x00404fa4) */
/* WARNING: Removing unreachable block (ram,0x00404ff0) */
/* WARNING: Removing unreachable block (ram,0x0040500e) */
/* WARNING: Removing unreachable block (ram,0x00405016) */
/* WARNING: Removing unreachable block (ram,0x00405018) */
/* WARNING: Removing unreachable block (ram,0x0040501a) */
/* WARNING: Removing unreachable block (ram,0x00405036) */
/* WARNING: Removing unreachable block (ram,0x00405090) */
/* WARNING: Removing unreachable block (ram,0x004050d0) */
/* WARNING: Removing unreachable block (ram,0x004050a8) */
/* WARNING: Removing unreachable block (ram,0x004050d3) */
/* WARNING: Removing unreachable block (ram,0x0040510a) */
/* WARNING: Removing unreachable block (ram,0x004050e2) */
/* WARNING: Removing unreachable block (ram,0x004050e8) */
/* WARNING: Removing unreachable block (ram,0x00405172) */
/* WARNING: Removing unreachable block (ram,0x00405212) */
/* WARNING: Removing unreachable block (ram,0x004050f8) */
/* WARNING: Removing unreachable block (ram,0x00405117) */
/* WARNING: Removing unreachable block (ram,0x004050df) */
/* WARNING: Removing unreachable block (ram,0x004050c9) */
/* WARNING: Removing unreachable block (ram,0x00404c75) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405227) */
/* WARNING: Removing unreachable block (ram,0x00405232) */
/* WARNING: Removing unreachable block (ram,0x0040523b) */
/* WARNING: Removing unreachable block (ram,0x004051c8) */
/* WARNING: Removing unreachable block (ram,0x004051c3) */
/* WARNING: Removing unreachable block (ram,0x004051d6) */
/* WARNING: Removing unreachable block (ram,0x00405244) */
/* WARNING: Removing unreachable block (ram,0x00405251) */
/* WARNING: Removing unreachable block (ram,0x004051ef) */
/* WARNING: Removing unreachable block (ram,0x004051f9) */
/* WARNING: Removing unreachable block (ram,0x004051fd) */
/* WARNING: Removing unreachable block (ram,0x00405208) */
/* WARNING: Removing unreachable block (ram,0x00405213) */
/* WARNING: Removing unreachable block (ram,0x00405215) */
/* WARNING: Removing unreachable block (ram,0x0040521b) */
/* WARNING: Removing unreachable block (ram,0x0040525f) */
/* WARNING: Removing unreachable block (ram,0x00405270) */
/* WARNING: Removing unreachable block (ram,0x00405298) */
/* WARNING: Removing unreachable block (ram,0x0040529a) */
/* WARNING: Removing unreachable block (ram,0x0040532c) */
/* WARNING: Removing unreachable block (ram,0x004052e4) */
/* WARNING: Removing unreachable block (ram,0x004052ee) */
/* WARNING: Removing unreachable block (ram,0x0040538f) */
/* WARNING: Removing unreachable block (ram,0x00405312) */
/* WARNING: Removing unreachable block (ram,0x00405368) */
/* WARNING: Removing unreachable block (ram,0x00405357) */
/* WARNING: Removing unreachable block (ram,0x004053bb) */
/* WARNING: Removing unreachable block (ram,0x0040540a) */
/* WARNING: Removing unreachable block (ram,0x00405416) */
/* WARNING: Removing unreachable block (ram,0x00405422) */
/* WARNING: Removing unreachable block (ram,0x004053b2) */
/* WARNING: Removing unreachable block (ram,0x0040536d) */
/* WARNING: Removing unreachable block (ram,0x00405377) */
/* WARNING: Removing unreachable block (ram,0x00405396) */
/* WARNING: Removing unreachable block (ram,0x004052f8) */
/* WARNING: Removing unreachable block (ram,0x0040526e) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */

int __fastcall _ctor(int *param_1,byte *param_2,ushort *param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined3 uVar12;
  int *piVar5;
  uint uVar6;
  byte *in_EAX;
  byte *pbVar7;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  char cVar13;
  byte bVar14;
  char cVar15;
  undefined2 uVar16;
  byte bVar18;
  undefined2 uVar17;
  byte *unaff_EBX;
  ushort *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar19;
  byte *pbVar20;
  uint *unaff_EDI;
  ushort in_ES;
  bool bVar21;
  byte in_AF;
  bool bVar22;
  ushort unaff_retaddr;
  char *pcVar8;
  
  do {
                    /* .NET CLR Managed Code */
    bVar4 = *in_EAX;
    bVar3 = (byte)((uint)param_1 >> 8);
    bVar14 = (byte)param_1;
    cVar13 = bVar3 + *in_EAX;
    param_1 = (int *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar13,bVar14));
    iVar1 = *(int *)in_EAX;
    *param_2 = *param_2 + bVar14;
    uVar16 = (undefined2)((uint)param_2 >> 0x10);
    cVar15 = (char)param_2;
    bVar18 = (char)((uint)param_2 >> 8) - *unaff_ESI;
    param_2 = (byte *)CONCAT22(uVar16,CONCAT11(bVar18,cVar15));
    pbVar7 = in_EAX + *(int *)param_2 + (uint)CARRY1(bVar3,bVar4) + iVar1;
    if ((POPCOUNT((uint)pbVar7 & 0xff) & 1U) == 0) goto code_r0x00404439;
    *unaff_ESI = *unaff_ESI + (byte)pbVar7;
    unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar13;
    uVar12 = (undefined3)((uint)pbVar7 >> 8);
    cVar2 = ((byte)pbVar7 | *unaff_ESI) - 6;
    piVar5 = (int *)CONCAT31(uVar12,cVar2);
    pcVar8 = (char *)((int)piVar5 * 2 + 0x2adc0a00);
    *pcVar8 = *pcVar8 - cVar13;
    *piVar5 = (int)(param_2 + *piVar5);
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    bVar4 = cVar2 + (char)*piVar5;
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar6 = CONCAT31(uVar12,bVar4 + in_AF * '\x06') & 0xffffff0f;
    bVar4 = (byte)uVar6;
    cVar2 = (char)((uint)pbVar7 >> 8) + in_AF;
    pbVar7 = (byte *)CONCAT22((short)(uVar6 >> 0x10),CONCAT11(cVar2,bVar4));
    *unaff_ESI = *unaff_ESI + cVar2;
    *param_2 = *param_2 + bVar14;
    *pbVar7 = *pbVar7 + bVar4;
    bVar21 = CARRY1(*pbVar7,bVar4);
    *pbVar7 = *pbVar7 + bVar4;
    unaff_EBP = param_3;
    in_ES = unaff_retaddr;
    while (!bVar21) {
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x3d],
                                            (char)unaff_EBX));
code_r0x00404439:
      *pbVar7 = *pbVar7 + (char)pbVar7;
      uVar12 = (undefined3)((uint)pbVar7 >> 8);
      cVar2 = (char)pbVar7 + 'o';
      pcVar8 = (char *)CONCAT31(uVar12,cVar2);
      *param_1 = (int)(pcVar8 + *param_1);
      *param_2 = *param_2 + bVar14;
      bVar3 = cVar2 - *pcVar8;
      pbVar7 = (byte *)CONCAT31(uVar12,bVar3);
      *unaff_EBX = *unaff_EBX + cVar15;
      *unaff_EBX = *unaff_EBX ^ bVar3;
      unaff_EBX[0x26000000] = unaff_EBX[0x26000000] + cVar13;
      bVar4 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar3;
      *(byte **)(unaff_EBX + 0xb) =
           unaff_ESI + (uint)CARRY1(bVar4,bVar3) + *(int *)(unaff_EBX + 0xb);
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      pbVar7 = (byte *)((uint)pbVar7 | 0x1027309);
      bVar21 = CARRY1(*param_2,bVar14);
      bVar4 = *param_2;
      *param_2 = *param_2 + bVar14;
      if (SCARRY1(bVar4,bVar14) != (char)*param_2 < '\0') {
        *pbVar7 = *pbVar7 + (char)pbVar7;
        *unaff_ESI = *unaff_ESI + 1;
        puVar9 = (uint *)(CONCAT31((int3)((uint)pbVar7 >> 8),(char)pbVar7 + '\t') | 1);
        bVar4 = *unaff_ESI;
        bVar3 = (byte)puVar9;
        *unaff_ESI = *unaff_ESI + bVar3;
        if (CARRY1(bVar4,bVar3)) {
          *puVar9 = *puVar9 + (int)puVar9;
          param_2 = (byte *)CONCAT22(uVar16,CONCAT11(bVar18 | unaff_EBX[4],cVar15));
        }
        else if (!CARRY1(bVar4,bVar3)) goto code_r0x00404473;
        *puVar9 = *puVar9 + (int)puVar9;
        param_1 = (int *)CONCAT31((int3)((uint)param_1 >> 8),bVar14 | *param_2);
code_r0x00404473:
        uVar16 = (undefined2)((uint)param_1 >> 0x10);
        cVar15 = (char)param_1;
        bVar14 = (char)((uint)param_1 >> 8) + (char)*puVar9;
        uVar6 = *puVar9;
        *unaff_EBX = *unaff_EBX + bVar14;
        pbVar7 = (byte *)((uint)puVar9 & uVar6 | *unaff_EDI);
        out(*(undefined4 *)unaff_ESI,(short)param_2);
        *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
        bVar14 = bVar14 | *pbVar7;
        *unaff_EBX = *unaff_EBX + bVar14;
        uVar12 = (undefined3)((uint)pbVar7 >> 8);
        pcVar8 = (char *)CONCAT31(uVar12,0xea);
        *(uint *)(unaff_EBX + -0x3d) = *(uint *)(unaff_EBX + -0x3d) | (uint)unaff_EDI;
        *pcVar8 = *pcVar8 + -0x16;
        pbVar10 = (byte *)CONCAT31(uVar12,0x59);
        *pbVar10 = *pbVar10 + 0x59;
        bVar14 = bVar14 | *pbVar10;
        pbVar11 = (byte *)CONCAT22(uVar16,CONCAT11(bVar14,cVar15));
        *pbVar11 = *pbVar11 | 0x59;
        *param_2 = *param_2 + cVar15;
        *pbVar11 = *pbVar11 - cVar15;
        *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
        out(*(undefined4 *)(unaff_ESI + 4),(short)param_2);
        bVar4 = (byte)*unaff_EDI | 0x59 | *pbVar11;
        *param_2 = *param_2 + cVar15;
        pcVar8 = (char *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                                  CONCAT11((char)((uint)pbVar7 >> 8) - (char)unaff_EBX,bVar4));
        *pcVar8 = *pcVar8 + bVar4;
        cVar13 = (bVar4 | 8) - 2;
        piVar5 = (int *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar13);
        bVar22 = (in_ES & 0x400) != 0;
        bVar21 = (in_ES & 0x10) != 0;
        *(char *)piVar5 = (char)*piVar5 + cVar13;
        uVar17 = CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[0xb],(char)param_2);
        pcVar8 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),uVar17);
        *piVar5 = (int)(*piVar5 + (int)piVar5);
        bVar14 = bVar14 | *(byte *)((int)unaff_EDI + -0x2a);
        *(char *)piVar5 = (char)*piVar5 + cVar13;
        pbVar7 = unaff_ESI + (uint)bVar22 * -8 + 0xc;
        out(*(undefined4 *)(unaff_ESI + 8),uVar17);
        *pcVar8 = *pcVar8 + cVar15;
        out(*(undefined4 *)pbVar7,uVar17);
        *pcVar8 = *pcVar8 + cVar15;
        pbVar11 = (byte *)((uint)pcVar8 & 0xffffff00);
        bVar14 = bVar14 | pbVar11[CONCAT22(uVar16,CONCAT11(bVar14,cVar15))];
        pbVar10 = (byte *)CONCAT22(uVar16,CONCAT11(bVar14,cVar15));
        pbVar19 = pbVar7 + (uint)bVar22 * -8 + 4 + (uint)bVar22 * -8 + 4;
        out(*(undefined4 *)(pbVar7 + (uint)bVar22 * -8 + 4),(short)pbVar11);
        bVar4 = *pbVar10;
        puVar9 = (uint *)CONCAT31(0xf80a00,bVar4);
        *pbVar11 = *pbVar11 + cVar15;
        pbVar7 = pbVar19;
        if (*pbVar11 != 0) {
          *(byte *)puVar9 = (byte)*puVar9 + bVar4;
          pbVar10 = (byte *)CONCAT22(uVar16,CONCAT11(bVar14 + (byte)*puVar9,cVar15));
          *pbVar19 = *pbVar19;
          pbVar7 = pbVar19 + (uint)bVar22 * -8 + 4;
          out(*(undefined4 *)pbVar19,(short)pbVar11);
          puVar9 = (uint *)CONCAT31(0xf80a00,-(byte)*unaff_EDI | *pbVar10);
        }
        *pbVar11 = *pbVar11 + (char)pbVar10;
        pbVar19 = pbVar11;
        if (*pbVar11 == 0) goto code_r0x004044ff;
        do {
          *(byte *)puVar9 = (byte)*puVar9 + (byte)puVar9;
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + (byte)*puVar9);
          pbVar10[0x2a060000] = pbVar10[0x2a060000] - (char)((uint)pbVar11 >> 8);
          *unaff_EBX = *unaff_EBX + (char)pbVar11;
          *pbVar11 = *pbVar11 ^ (byte)puVar9;
          pbVar19 = pbVar11;
code_r0x004044ff:
          cVar13 = (char)((uint)pbVar10 >> 8);
          *pbVar19 = *pbVar19 + cVar13;
          uVar6 = *puVar9;
          bVar4 = (byte)puVar9;
          *(byte *)puVar9 = (byte)*puVar9 + bVar4;
          bVar14 = 9 < (bVar4 & 0xf) | bVar21;
          uVar12 = (undefined3)((uint)puVar9 >> 8);
          bVar3 = bVar4 + bVar14 * '\x06';
          bVar3 = bVar3 + (0x90 < (bVar3 & 0xf0) |
                          CARRY1((byte)uVar6,bVar4) | bVar14 * (0xf9 < bVar3)) * '`';
          pbVar11 = (byte *)CONCAT31(uVar12,bVar3);
          bVar4 = *pbVar11;
          *pbVar11 = *pbVar11 + bVar3;
          *(byte **)pbVar19 = pbVar11 + (uint)CARRY1(bVar4,bVar3) + *(int *)pbVar19;
          out(*(undefined4 *)pbVar7,(short)pbVar19);
          *pbVar11 = *pbVar11 + bVar3;
          bVar3 = bVar3 - 0xe;
          pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                                     CONCAT11(cVar13 + *(byte *)((int)unaff_EDI + 0x3e),
                                              (char)pbVar10));
          *(char *)CONCAT31(uVar12,bVar3) = *(char *)CONCAT31(uVar12,bVar3) + bVar3;
          bVar14 = 9 < (bVar3 & 0xf) | bVar14;
          bVar3 = bVar3 + bVar14 * -6;
          bVar4 = 0x9f < bVar3 | bVar14 * (bVar3 < 6);
          puVar9 = (uint *)CONCAT31(uVar12,bVar3 + bVar4 * -0x60);
          pbVar19[0x5d] = pbVar19[0x5d] + (char)((uint)pbVar19 >> 8) + bVar4;
          *puVar9 = *puVar9 | (uint)puVar9;
          pbVar20 = pbVar7 + (uint)bVar22 * -8 + 4;
          while( true ) {
            bVar22 = (in_ES & 0x400) != 0;
            bVar21 = (in_ES & 0x10) != 0;
            *(byte *)puVar9 = (char)*puVar9 + (byte)puVar9;
            bVar3 = (byte)pbVar19 | *pbVar20;
            pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar3);
            cVar13 = (char)pbVar10;
            *pbVar10 = *pbVar10 - cVar13;
            *puVar9 = (uint)(*puVar9 + (int)puVar9);
            uVar12 = (undefined3)((uint)puVar9 >> 8);
            bVar14 = (byte)puVar9 | *pbVar11;
            pbVar7 = pbVar20 + (uint)bVar22 * -8 + 4;
            out(*(undefined4 *)pbVar20,(short)pbVar11);
            *(char *)CONCAT31(uVar12,bVar14) = *(char *)CONCAT31(uVar12,bVar14) + bVar14;
            cVar15 = (char)((uint)pbVar10 >> 8);
            *(char *)unaff_EBP = (char)*unaff_EBP - cVar15;
            *pbVar11 = *pbVar11 + cVar13;
            bVar4 = bVar14 - 0x17;
            cVar15 = cVar15 + *(byte *)((int)unaff_EDI + 0x46);
            pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),CONCAT11(cVar15,cVar13));
            *(char *)CONCAT31(uVar12,bVar4) = *(char *)CONCAT31(uVar12,bVar4) + bVar4;
            *(char *)unaff_EBP = (char)*unaff_EBP - cVar15;
            *pbVar11 = *pbVar11 + cVar13;
            bVar14 = bVar14 - 0x21;
            puVar9 = (uint *)CONCAT31(uVar12,bVar14);
            if (bVar4 < 10) break;
            *puVar9 = *puVar9 | (uint)puVar9;
            *(byte *)puVar9 = (byte)*puVar9 + bVar14;
            pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar19 >> 8) | pbVar11[0x6e],bVar3));
            bVar14 = bVar14 | (byte)*puVar9;
            *(char *)CONCAT31(uVar12,bVar14) = *(char *)CONCAT31(uVar12,bVar14) + bVar14;
            puVar9 = (uint *)CONCAT31(uVar12,bVar14 | *pbVar19);
            pbVar20 = pbVar7;
          }
        } while( true );
      }
    }
    *pbVar7 = *pbVar7 + (byte)pbVar7;
    in_EAX = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 | pbVar7[0x4000065]);
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *unaff_ESI);
  } while( true );
}


