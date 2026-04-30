/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004043a8
 * Raw Name    : PrintReport
 * Demangled   : PrintReport
 * Prototype   : int PrintReport(byte * param_1, uint * param_2, ushort * param_3)
 * Local Vars  : uVar2, uVar1, cVar4, cVar3, in_EAX, bVar5, piVar7, pcVar6, pbVar9, uVar8, pbVar11, piVar10, bVar13, uVar12, uVar15, uVar14, cVar17, cVar16, iVar18, unaff_EBX, cVar20, pbVar19, unaff_EBP, bVar21, pbVar22, unaff_ESI, pbVar24, pbVar23, puVar25, unaff_EDI, in_ES, puVar26, bVar28, bVar27, unaff_retaddr, param_1, param_2, param_3
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
/* WARNING: Removing unreachable block (ram,0x00404380) */
/* WARNING: Removing unreachable block (ram,0x0040440f) */
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

int __fastcall PrintReport(byte *param_1,uint *param_2,ushort *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  char *in_EAX;
  undefined3 uVar12;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  byte bVar13;
  undefined2 uVar14;
  char cVar16;
  undefined2 uVar15;
  char cVar17;
  char cVar20;
  int unaff_EBX;
  byte bVar21;
  byte *pbVar19;
  ushort *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined4 *unaff_EDI;
  uint *puVar25;
  uint *puVar26;
  ushort in_ES;
  bool bVar27;
  bool bVar28;
  ushort unaff_retaddr;
  char *pcVar6;
  byte *pbVar11;
  int iVar18;
  
                    /* .NET CLR Managed Code */
  uVar14 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar17 = (char)unaff_EBX;
  cVar20 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 100);
  iVar18 = CONCAT22(uVar14,CONCAT11(cVar20,cVar17));
  cVar4 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar4;
  uVar12 = (undefined3)((uint)in_EAX >> 8);
  cVar3 = cVar4 + '(';
  pcVar6 = (char *)CONCAT31(uVar12,cVar3);
  uVar1 = in((short)param_2);
  *unaff_EDI = uVar1;
  *pcVar6 = *pcVar6 + cVar3;
  bVar13 = param_1[iVar18];
  cVar16 = (char)((uint)param_2 >> 8);
  pcVar6[0x28] = pcVar6[0x28] + cVar16;
  bVar28 = (in_ES & 0x400) != 0;
  bVar27 = (in_ES & 0x10) != 0;
  *pcVar6 = *pcVar6 + cVar3;
  bVar13 = (byte)((uint)param_1 >> 8) | bVar13 | (byte)*param_2;
  piVar10 = (int *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar13,(char)param_1));
  bVar21 = cVar20 + *(char *)(iVar18 + 100);
  pbVar19 = (byte *)CONCAT22(uVar14,CONCAT11(bVar21,cVar17));
  *pcVar6 = *pcVar6 + cVar3;
  pbVar9 = (byte *)CONCAT31(uVar12,cVar4 + 'P');
  *(char *)((int)param_2 + 0x21) = *(char *)((int)param_2 + 0x21) + cVar16;
  pbVar22 = pbVar9 + 2;
  *pbVar22 = *pbVar22 + cVar16;
  puVar25 = unaff_EDI + 1;
  if ((POPCOUNT(*pbVar22) & 1U) != 0) goto code_r0x00404439;
  *pbVar9 = *pbVar9 + cVar4 + 'P';
  cVar3 = cVar4 + 'x';
  pcVar6 = (char *)CONCAT31(uVar12,cVar3);
  bVar27 = ((uint)in_EAX & 0x1000) != 0;
  *pcVar6 = *pcVar6 + cVar3;
  puVar25 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *unaff_ESI);
  pbVar19 = (byte *)CONCAT22(uVar14,CONCAT11(bVar21 | unaff_ESI[0x65],cVar17));
  *pcVar6 = *pcVar6 + cVar3;
  bVar21 = cVar4 + 0x9d;
  pcVar6 = (char *)CONCAT31(uVar12,bVar21);
  param_2 = (uint *)((uint)puVar25 | *puVar25);
  *pcVar6 = *pcVar6 + bVar13;
  puVar25 = (uint *)((int)unaff_EDI + (uint)bVar28 * -2 + 5);
  *(byte *)(unaff_EDI + 1) = bVar21;
  *pcVar6 = *pcVar6 + bVar21;
  bVar21 = bVar21 | (byte)*param_2;
  pbVar9 = (byte *)CONCAT31(uVar12,bVar21);
  if ((POPCOUNT(bVar21) & 1U) != 0) goto code_r0x00404454;
  *pbVar9 = *pbVar9 + bVar21;
  cVar4 = bVar21 + 2;
  pbVar9 = (byte *)CONCAT31(uVar12,cVar4);
  *(char *)unaff_EBP = (char)*unaff_EBP - cVar17;
  *unaff_ESI = *unaff_ESI + cVar4;
  pbVar22 = unaff_ESI + (uint)bVar28 * -8 + 4;
  out(*(undefined4 *)unaff_ESI,(short)param_2);
  puVar26 = (uint *)((int)puVar25 + (uint)bVar28 * -2 + 1);
  unaff_ESI = pbVar22 + (uint)bVar28 * -2 + 1;
  *(byte *)puVar25 = *pbVar22;
  *pbVar9 = *pbVar9 + cVar4;
  do {
    cVar3 = (char)((uint)piVar10 >> 8);
    pbVar19[-0x21f60000] = pbVar19[-0x21f60000] - cVar3;
    uVar12 = (undefined3)((uint)pbVar9 >> 8);
    cVar4 = ((byte)pbVar9 | *unaff_ESI) - 6;
    piVar7 = (int *)CONCAT31(uVar12,cVar4);
    pcVar6 = (char *)((int)piVar7 * 2 + 0x2adc0a00);
    *pcVar6 = *pcVar6 - cVar3;
    *piVar7 = (int)(*piVar7 + (int)param_2);
    *(char *)piVar7 = (char)*piVar7 + cVar4;
    bVar13 = cVar4 + (char)*piVar7;
    bVar27 = (bool)(9 < (bVar13 & 0xf) | bVar27);
    uVar8 = CONCAT31(uVar12,bVar13 + bVar27 * '\x06') & 0xffffff0f;
    bVar21 = (byte)uVar8;
    cVar4 = (char)((uint)pbVar9 >> 8) + bVar27;
    pbVar9 = (byte *)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(cVar4,bVar21));
    *unaff_ESI = *unaff_ESI + cVar4;
    *(byte *)param_2 = (byte)*param_2 + (char)piVar10;
    *pbVar9 = *pbVar9 + bVar21;
    bVar13 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar21;
    unaff_EBP = param_3;
    puVar25 = puVar26;
    if (!CARRY1(bVar13,bVar21)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar9 = *pbVar9 + (byte)pbVar9;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 | pbVar9[0x4000065]);
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),(char)pbVar19 - *unaff_ESI);
    bVar13 = *pbVar9;
    bVar21 = (byte)((uint)piVar10 >> 8);
    cVar4 = (char)piVar10;
    piVar10 = (int *)CONCAT22((short)((uint)piVar10 >> 0x10),CONCAT11(bVar21 + *pbVar9,cVar4));
    iVar18 = *(int *)pbVar9;
    *(byte *)param_2 = (byte)*param_2 + cVar4;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - *unaff_ESI,(char)param_2));
    pbVar9 = pbVar9 + *param_2 + (uint)CARRY1(bVar21,bVar13) + iVar18;
    puVar25 = puVar26;
    if ((POPCOUNT((uint)pbVar9 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar9 = *pbVar9 + (char)pbVar9;
        uVar12 = (undefined3)((uint)pbVar9 >> 8);
        cVar4 = (char)pbVar9 + 'o';
        pcVar6 = (char *)CONCAT31(uVar12,cVar4);
        *piVar10 = (int)(pcVar6 + *piVar10);
        *(byte *)param_2 = (byte)*param_2 + (char)piVar10;
        bVar21 = cVar4 - *pcVar6;
        pbVar9 = (byte *)CONCAT31(uVar12,bVar21);
        *pbVar19 = *pbVar19 + (char)param_2;
        *pbVar19 = *pbVar19 ^ bVar21;
        pbVar19[0x26000000] = pbVar19[0x26000000] + (char)((uint)piVar10 >> 8);
        bVar13 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar21;
        *(byte **)(pbVar19 + 0xb) =
             unaff_ESI + (uint)CARRY1(bVar13,bVar21) + *(int *)(pbVar19 + 0xb);
        *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
code_r0x00404454:
        pbVar9 = (byte *)((uint)pbVar9 | 0x1027309);
        uVar8 = *param_2;
        bVar13 = (byte)piVar10;
        uVar2 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar13;
        if (SCARRY1((byte)uVar2,bVar13) != (char)(byte)*param_2 < '\0') {
          *pbVar9 = *pbVar9 + (char)pbVar9;
          *unaff_ESI = *unaff_ESI + 1;
          puVar26 = (uint *)(CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + '\t') | 1);
          bVar21 = *unaff_ESI;
          bVar5 = (byte)puVar26;
          *unaff_ESI = *unaff_ESI + bVar5;
          if (CARRY1(bVar21,bVar5)) {
            *puVar26 = *puVar26 + (int)puVar26;
            param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                       CONCAT11((byte)((uint)param_2 >> 8) | pbVar19[4],
                                                (char)param_2));
          }
          else if (!CARRY1(bVar21,bVar5)) goto code_r0x00404473;
          *puVar26 = *puVar26 + (int)puVar26;
          piVar10 = (int *)CONCAT31((int3)((uint)piVar10 >> 8),bVar13 | (byte)*param_2);
code_r0x00404473:
          uVar14 = (undefined2)((uint)piVar10 >> 0x10);
          cVar3 = (char)piVar10;
          bVar21 = (char)((uint)piVar10 >> 8) + (char)*puVar26;
          uVar8 = *puVar26;
          *pbVar19 = *pbVar19 + bVar21;
          pbVar22 = (byte *)((uint)puVar26 & uVar8 | *puVar25);
          pbVar23 = unaff_ESI + (uint)bVar28 * -8 + 4;
          out(*(undefined4 *)unaff_ESI,(short)param_2);
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          bVar21 = bVar21 | *pbVar22;
          *pbVar19 = *pbVar19 + bVar21;
          uVar12 = (undefined3)((uint)pbVar22 >> 8);
          pcVar6 = (char *)CONCAT31(uVar12,0xea);
          *(uint *)(pbVar19 + -0x3d) = *(uint *)(pbVar19 + -0x3d) | (uint)puVar25;
          *pcVar6 = *pcVar6 + -0x16;
          pbVar9 = (byte *)CONCAT31(uVar12,0x59);
          *pbVar9 = *pbVar9 + 0x59;
          bVar21 = bVar21 | *pbVar9;
          pbVar11 = (byte *)CONCAT22(uVar14,CONCAT11(bVar21,cVar3));
          *pbVar11 = *pbVar11 | 0x59;
          *(byte *)param_2 = (byte)*param_2 + cVar3;
          *pbVar11 = *pbVar11 - cVar3;
          *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
          pbVar9 = pbVar23 + (uint)bVar28 * -8 + 4;
          out(*(undefined4 *)pbVar23,(short)param_2);
          bVar13 = (byte)*puVar25 | 0x59 | *pbVar11;
          *(byte *)param_2 = (byte)*param_2 + cVar3;
          pcVar6 = (char *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                    CONCAT11((char)((uint)pbVar22 >> 8) - (char)pbVar19,bVar13));
          *pcVar6 = *pcVar6 + bVar13;
          cVar4 = (bVar13 | 8) - 2;
          piVar10 = (int *)CONCAT31((int3)((uint)pcVar6 >> 8),cVar4);
          bVar28 = (unaff_retaddr & 0x400) != 0;
          bVar27 = (unaff_retaddr & 0x10) != 0;
          *(char *)piVar10 = (char)*piVar10 + cVar4;
          uVar15 = CONCAT11((byte)((uint)param_2 >> 8) | pbVar19[0xb],(char)param_2);
          pcVar6 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),uVar15);
          *piVar10 = (int)(*piVar10 + (int)piVar10);
          bVar21 = bVar21 | *(byte *)((int)puVar25 + -0x2a);
          *(char *)piVar10 = (char)*piVar10 + cVar4;
          pbVar22 = pbVar9 + (uint)bVar28 * -8 + 4;
          out(*(undefined4 *)pbVar9,uVar15);
          *pcVar6 = *pcVar6 + cVar3;
          out(*(undefined4 *)pbVar22,uVar15);
          *pcVar6 = *pcVar6 + cVar3;
          pbVar11 = (byte *)((uint)pcVar6 & 0xffffff00);
          bVar21 = bVar21 | pbVar11[CONCAT22(uVar14,CONCAT11(bVar21,cVar3))];
          pbVar9 = (byte *)CONCAT22(uVar14,CONCAT11(bVar21,cVar3));
          pbVar23 = pbVar22 + (uint)bVar28 * -8 + 4 + (uint)bVar28 * -8 + 4;
          out(*(undefined4 *)(pbVar22 + (uint)bVar28 * -8 + 4),(short)pbVar11);
          bVar13 = *pbVar9;
          puVar26 = (uint *)CONCAT31(0xf80a00,bVar13);
          *pbVar11 = *pbVar11 + cVar3;
          pbVar22 = pbVar23;
          if (*pbVar11 != 0) {
            *(byte *)puVar26 = (byte)*puVar26 + bVar13;
            pbVar9 = (byte *)CONCAT22(uVar14,CONCAT11(bVar21 + (byte)*puVar26,cVar3));
            *pbVar23 = *pbVar23;
            pbVar22 = pbVar23 + (uint)bVar28 * -8 + 4;
            out(*(undefined4 *)pbVar23,(short)pbVar11);
            puVar26 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar25 | *pbVar9);
          }
          *pbVar11 = *pbVar11 + (char)pbVar9;
          pbVar23 = pbVar11;
          if (*pbVar11 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar26 = (byte)*puVar26 + (byte)puVar26;
            pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + (byte)*puVar26);
            pbVar9[0x2a060000] = pbVar9[0x2a060000] - (char)((uint)pbVar11 >> 8);
            *pbVar19 = *pbVar19 + (char)pbVar11;
            *pbVar11 = *pbVar11 ^ (byte)puVar26;
            pbVar23 = pbVar11;
code_r0x004044ff:
            cVar4 = (char)((uint)pbVar9 >> 8);
            *pbVar23 = *pbVar23 + cVar4;
            uVar8 = *puVar26;
            bVar13 = (byte)puVar26;
            *(byte *)puVar26 = (byte)*puVar26 + bVar13;
            bVar21 = 9 < (bVar13 & 0xf) | bVar27;
            uVar12 = (undefined3)((uint)puVar26 >> 8);
            bVar5 = bVar13 + bVar21 * '\x06';
            bVar5 = bVar5 + (0x90 < (bVar5 & 0xf0) |
                            CARRY1((byte)uVar8,bVar13) | bVar21 * (0xf9 < bVar5)) * '`';
            pbVar11 = (byte *)CONCAT31(uVar12,bVar5);
            bVar13 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar5;
            *(byte **)pbVar23 = pbVar11 + (uint)CARRY1(bVar13,bVar5) + *(int *)pbVar23;
            out(*(undefined4 *)pbVar22,(short)pbVar23);
            *pbVar11 = *pbVar11 + bVar5;
            bVar5 = bVar5 - 0xe;
            pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                                      CONCAT11(cVar4 + *(byte *)((int)puVar25 + 0x3e),(char)pbVar9))
            ;
            *(char *)CONCAT31(uVar12,bVar5) = *(char *)CONCAT31(uVar12,bVar5) + bVar5;
            bVar21 = 9 < (bVar5 & 0xf) | bVar21;
            bVar5 = bVar5 + bVar21 * -6;
            bVar13 = 0x9f < bVar5 | bVar21 * (bVar5 < 6);
            puVar26 = (uint *)CONCAT31(uVar12,bVar5 + bVar13 * -0x60);
            pbVar23[0x5d] = pbVar23[0x5d] + (char)((uint)pbVar23 >> 8) + bVar13;
            *puVar26 = *puVar26 | (uint)puVar26;
            pbVar24 = pbVar22 + (uint)bVar28 * -8 + 4;
            while( true ) {
              bVar28 = (unaff_retaddr & 0x400) != 0;
              bVar27 = (unaff_retaddr & 0x10) != 0;
              *(byte *)puVar26 = (char)*puVar26 + (byte)puVar26;
              bVar5 = (byte)pbVar23 | *pbVar24;
              pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),bVar5);
              cVar4 = (char)pbVar9;
              *pbVar9 = *pbVar9 - cVar4;
              *puVar26 = (uint)(*puVar26 + (int)puVar26);
              uVar12 = (undefined3)((uint)puVar26 >> 8);
              bVar21 = (byte)puVar26 | *pbVar11;
              pbVar22 = pbVar24 + (uint)bVar28 * -8 + 4;
              out(*(undefined4 *)pbVar24,(short)pbVar11);
              *(char *)CONCAT31(uVar12,bVar21) = *(char *)CONCAT31(uVar12,bVar21) + bVar21;
              cVar3 = (char)((uint)pbVar9 >> 8);
              *(char *)unaff_EBP = (char)*unaff_EBP - cVar3;
              *pbVar11 = *pbVar11 + cVar4;
              bVar13 = bVar21 - 0x17;
              cVar3 = cVar3 + *(byte *)((int)puVar25 + 0x46);
              pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),CONCAT11(cVar3,cVar4));
              *(char *)CONCAT31(uVar12,bVar13) = *(char *)CONCAT31(uVar12,bVar13) + bVar13;
              *(char *)unaff_EBP = (char)*unaff_EBP - cVar3;
              *pbVar11 = *pbVar11 + cVar4;
              bVar21 = bVar21 - 0x21;
              puVar26 = (uint *)CONCAT31(uVar12,bVar21);
              if (bVar13 < 10) break;
              *puVar26 = *puVar26 | (uint)puVar26;
              *(byte *)puVar26 = (byte)*puVar26 + bVar21;
              pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar23 >> 8) | pbVar11[0x6e],bVar5))
              ;
              bVar21 = bVar21 | (byte)*puVar26;
              *(char *)CONCAT31(uVar12,bVar21) = *(char *)CONCAT31(uVar12,bVar21) + bVar21;
              puVar26 = (uint *)CONCAT31(uVar12,bVar21 | *pbVar23);
              pbVar24 = pbVar22;
            }
          } while( true );
        }
        puVar26 = puVar25;
        if (CARRY1((byte)uVar8,bVar13)) goto code_r0x00404423;
code_r0x00404436:
        pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                   CONCAT11((char)((uint)pbVar19 >> 8) + pbVar19[-0x3d],
                                            (char)pbVar19));
      } while( true );
    }
    *unaff_ESI = *unaff_ESI + (char)pbVar9;
  } while( true );
}


