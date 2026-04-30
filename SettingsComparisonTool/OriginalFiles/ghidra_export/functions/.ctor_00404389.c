/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404389
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(byte * settingsAquirer, uint * filename)
 * Local Vars  : settingsAquirer, filename, uStack_8, uVar1, pcStack_4, cVar3, iVar2, cVar5, bVar4, uVar6, in_EAX, piVar8, pcVar7, uVar10, pbVar9, uVar12, bVar11, cVar14, uVar13, bVar15, unaff_EBX, unaff_ESI, unaff_EBP, pbVar17, pbVar16, pbVar19, pbVar18, puVar20, unaff_EDI, in_ES, puVar21, bVar22, in_AF, bVar23
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

int __fastcall _ctor(byte *settingsAquirer,uint *filename)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined4 in_EAX;
  uint uVar6;
  undefined3 uVar10;
  int *piVar8;
  byte *pbVar9;
  byte bVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  char cVar14;
  byte bVar15;
  byte *unaff_EBX;
  char *unaff_EBP;
  int unaff_ESI;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint *unaff_EDI;
  uint *puVar20;
  uint *puVar21;
  ushort in_ES;
  byte in_AF;
  bool bVar22;
  bool bVar23;
  ushort uStack_8;
  char *pcStack_4;
  char *pcVar7;
  
  bVar22 = false;
                    /* .NET CLR Managed Code */
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *unaff_EBX) + 0x6128;
  pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_ES);
  uVar10 = (undefined3)(uVar6 >> 8);
  cVar3 = (char)uVar6 + *(char *)((int)unaff_EDI * 2 + 0x4000064);
  bVar4 = cVar3 - *(char *)CONCAT31(uVar10,cVar3);
  pbVar9 = (byte *)CONCAT31(uVar10,bVar4);
  bVar11 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar4;
  pbVar16 = (byte *)((unaff_ESI - *(int *)pbVar9) - (uint)CARRY1(bVar11,bVar4));
  bVar4 = bVar4 + *pbVar9;
  pbVar9 = (byte *)CONCAT31(uVar10,bVar4);
  bVar11 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar4;
  *filename = (uint)(pbVar9 + (uint)CARRY1(bVar11,bVar4) + *filename);
  cVar3 = (char)((uint)filename >> 8);
  if ((POPCOUNT(*filename & 0xff) & 1U) != 0) {
    cVar5 = bVar4 - *settingsAquirer;
    pbVar9 = (byte *)CONCAT31(uVar10,cVar5);
    *pbVar9 = *pbVar9 + cVar5 + (bVar4 < *settingsAquirer);
    *(char *)filename = (char)*filename + cVar5;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + cVar3;
    puVar20 = unaff_EDI;
    uStack_8 = in_ES;
    goto code_r0x00404417;
  }
  *pbVar9 = *pbVar9 + bVar4;
  cVar5 = bVar4 + 0x28;
  pcVar7 = (char *)CONCAT31(uVar10,cVar5);
  uVar1 = in((short)filename);
  *unaff_EDI = uVar1;
  *pcVar7 = *pcVar7 + cVar5;
  bVar11 = unaff_EBX[(int)settingsAquirer];
  pcVar7[0x28] = pcVar7[0x28] + cVar3;
  bVar22 = (in_ES & 0x400) != 0;
  in_AF = (in_ES & 0x10) != 0;
  *pcVar7 = *pcVar7 + cVar5;
  bVar11 = (byte)((uint)settingsAquirer >> 8) | bVar11 | (byte)*filename;
  settingsAquirer =
       (byte *)CONCAT22((short)((uint)settingsAquirer >> 0x10),
                        CONCAT11(bVar11,(char)settingsAquirer));
  uVar12 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar14 = (char)unaff_EBX;
  bVar15 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[100];
  unaff_EBX = (byte *)CONCAT22(uVar12,CONCAT11(bVar15,cVar14));
  *pcVar7 = *pcVar7 + cVar5;
  pbVar9 = (byte *)CONCAT31(uVar10,bVar4 + 0x50);
  *(char *)((int)filename + 0x21) = *(char *)((int)filename + 0x21) + cVar3;
  uStack_8 = 0;
  pbVar17 = pbVar9 + 2;
  *pbVar17 = *pbVar17 + cVar3;
  puVar20 = unaff_EDI + 1;
  if ((POPCOUNT(*pbVar17) & 1U) != 0) goto code_r0x00404439;
  *pbVar9 = *pbVar9 + bVar4 + 0x50;
  cVar3 = bVar4 + 0x78;
  pcVar7 = (char *)CONCAT31(uVar10,cVar3);
  in_AF = (uVar6 & 0x1000) != 0;
  *pcVar7 = *pcVar7 + cVar3;
  puVar20 = (uint *)CONCAT31((int3)((uint)filename >> 8),(byte)filename | *pbVar16);
  unaff_EBX = (byte *)CONCAT22(uVar12,CONCAT11(bVar15 | pbVar16[0x65],cVar14));
  *pcVar7 = *pcVar7 + cVar3;
  bVar4 = bVar4 + 0x9d;
  pcVar7 = (char *)CONCAT31(uVar10,bVar4);
  filename = (uint *)((uint)puVar20 | *puVar20);
  *pcVar7 = *pcVar7 + bVar11;
  puVar20 = (uint *)((int)unaff_EDI + (uint)bVar22 * -2 + 5);
  *(byte *)(unaff_EDI + 1) = bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  bVar4 = bVar4 | (byte)*filename;
  pbVar9 = (byte *)CONCAT31(uVar10,bVar4);
  if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00404454;
  *pbVar9 = *pbVar9 + bVar4;
  cVar3 = bVar4 + 2;
  pbVar9 = (byte *)CONCAT31(uVar10,cVar3);
  *unaff_EBP = *unaff_EBP - cVar14;
  *pbVar16 = *pbVar16 + cVar3;
  pbVar17 = pbVar16 + (uint)bVar22 * -8 + 4;
  out(*(undefined4 *)pbVar16,(short)filename);
  puVar21 = (uint *)((int)puVar20 + (uint)bVar22 * -2 + 1);
  pbVar16 = pbVar17 + (uint)bVar22 * -2 + 1;
  *(byte *)puVar20 = *pbVar17;
  *pbVar9 = *pbVar9 + cVar3;
  do {
    cVar5 = (char)((uint)settingsAquirer >> 8);
    unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar5;
    uVar10 = (undefined3)((uint)pbVar9 >> 8);
    cVar3 = ((byte)pbVar9 | *pbVar16) - 6;
    piVar8 = (int *)CONCAT31(uVar10,cVar3);
    uStack_8 = 0;
    pcVar7 = (char *)((int)piVar8 * 2 + 0x2adc0a00);
    *pcVar7 = *pcVar7 - cVar5;
    *piVar8 = (int)(*piVar8 + (int)filename);
    *(char *)piVar8 = (char)*piVar8 + cVar3;
    bVar11 = cVar3 + (char)*piVar8;
    in_AF = 9 < (bVar11 & 0xf) | in_AF;
    uVar6 = CONCAT31(uVar10,bVar11 + in_AF * '\x06') & 0xffffff0f;
    pbVar9 = (byte *)CONCAT22((short)(uVar6 >> 0x10),
                              CONCAT11((char)((uint)pbVar9 >> 8) + in_AF,(char)uVar6));
    puVar20 = puVar21;
code_r0x00404417:
    *pbVar16 = *pbVar16 + (char)((uint)pbVar9 >> 8);
    *(byte *)filename = (byte)*filename + (char)settingsAquirer;
    bVar4 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    bVar11 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    unaff_EBP = pcStack_4;
    puVar21 = puVar20;
    if (!CARRY1(bVar11,bVar4)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar9 = *pbVar9 + (byte)pbVar9;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 | pbVar9[0x4000065]);
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *pbVar16);
    bVar11 = *pbVar9;
    bVar4 = (byte)((uint)settingsAquirer >> 8);
    cVar3 = (char)settingsAquirer;
    settingsAquirer =
         (byte *)CONCAT22((short)((uint)settingsAquirer >> 0x10),CONCAT11(bVar4 + *pbVar9,cVar3));
    iVar2 = *(int *)pbVar9;
    *(byte *)filename = (byte)*filename + cVar3;
    filename = (uint *)CONCAT22((short)((uint)filename >> 0x10),
                                CONCAT11((char)((uint)filename >> 8) - *pbVar16,(char)filename));
    pbVar9 = pbVar9 + *filename + (uint)CARRY1(bVar4,bVar11) + iVar2;
    puVar20 = puVar21;
    if ((POPCOUNT((uint)pbVar9 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar9 = *pbVar9 + (char)pbVar9;
        uVar10 = (undefined3)((uint)pbVar9 >> 8);
        cVar3 = (char)pbVar9 + 'o';
        pcVar7 = (char *)CONCAT31(uVar10,cVar3);
        *(char **)settingsAquirer = pcVar7 + *(int *)settingsAquirer;
        *(byte *)filename = (byte)*filename + (char)settingsAquirer;
        bVar4 = cVar3 - *pcVar7;
        pbVar9 = (byte *)CONCAT31(uVar10,bVar4);
        *unaff_EBX = *unaff_EBX + (char)filename;
        *unaff_EBX = *unaff_EBX ^ bVar4;
        unaff_EBX[0x26000000] = unaff_EBX[0x26000000] + (char)((uint)settingsAquirer >> 8);
        bVar11 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar4;
        *(byte **)(unaff_EBX + 0xb) =
             pbVar16 + (uint)CARRY1(bVar11,bVar4) + *(int *)(unaff_EBX + 0xb);
        *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
code_r0x00404454:
        pbVar9 = (byte *)((uint)pbVar9 | 0x1027309);
        uVar6 = *filename;
        bVar11 = (byte)settingsAquirer;
        uVar1 = *filename;
        *(byte *)filename = (byte)*filename + bVar11;
        if (SCARRY1((byte)uVar1,bVar11) != (char)(byte)*filename < '\0') {
          *pbVar9 = *pbVar9 + (char)pbVar9;
          *pbVar16 = *pbVar16 + 1;
          puVar21 = (uint *)(CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + '\t') | 1);
          bVar4 = *pbVar16;
          bVar15 = (byte)puVar21;
          *pbVar16 = *pbVar16 + bVar15;
          if (CARRY1(bVar4,bVar15)) {
            *puVar21 = *puVar21 + (int)puVar21;
            filename = (uint *)CONCAT22((short)((uint)filename >> 0x10),
                                        CONCAT11((byte)((uint)filename >> 8) | unaff_EBX[4],
                                                 (char)filename));
          }
          else if (!CARRY1(bVar4,bVar15)) goto code_r0x00404473;
          *puVar21 = *puVar21 + (int)puVar21;
          settingsAquirer =
               (byte *)CONCAT31((int3)((uint)settingsAquirer >> 8),bVar11 | (byte)*filename);
code_r0x00404473:
          uVar12 = (undefined2)((uint)settingsAquirer >> 0x10);
          cVar5 = (char)settingsAquirer;
          bVar4 = (char)((uint)settingsAquirer >> 8) + (char)*puVar21;
          uVar6 = *puVar21;
          *unaff_EBX = *unaff_EBX + bVar4;
          pbVar9 = (byte *)((uint)puVar21 & uVar6 | *puVar20);
          pbVar18 = pbVar16 + (uint)bVar22 * -8 + 4;
          out(*(undefined4 *)pbVar16,(short)filename);
          *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
          bVar4 = bVar4 | *pbVar9;
          *unaff_EBX = *unaff_EBX + bVar4;
          uVar10 = (undefined3)((uint)pbVar9 >> 8);
          pcVar7 = (char *)CONCAT31(uVar10,0xea);
          *(uint *)(unaff_EBX + -0x3d) = *(uint *)(unaff_EBX + -0x3d) | (uint)puVar20;
          *pcVar7 = *pcVar7 + -0x16;
          pbVar16 = (byte *)CONCAT31(uVar10,0x59);
          *pbVar16 = *pbVar16 + 0x59;
          bVar4 = bVar4 | *pbVar16;
          pbVar17 = (byte *)CONCAT22(uVar12,CONCAT11(bVar4,cVar5));
          *pbVar17 = *pbVar17 | 0x59;
          *(byte *)filename = (byte)*filename + cVar5;
          *pbVar17 = *pbVar17 - cVar5;
          *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
          pbVar16 = pbVar18 + (uint)bVar22 * -8 + 4;
          out(*(undefined4 *)pbVar18,(short)filename);
          bVar11 = (byte)*puVar20 | 0x59 | *pbVar17;
          *(byte *)filename = (byte)*filename + cVar5;
          pcVar7 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                                    CONCAT11((char)((uint)pbVar9 >> 8) - (char)unaff_EBX,bVar11));
          *pcVar7 = *pcVar7 + bVar11;
          cVar3 = (bVar11 | 8) - 2;
          piVar8 = (int *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar3);
          bVar23 = (uStack_8 & 0x400) != 0;
          bVar22 = (uStack_8 & 0x10) != 0;
          *(char *)piVar8 = (char)*piVar8 + cVar3;
          uVar13 = CONCAT11((byte)((uint)filename >> 8) | unaff_EBX[0xb],(char)filename);
          pcVar7 = (char *)CONCAT22((short)((uint)filename >> 0x10),uVar13);
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          bVar4 = bVar4 | *(byte *)((int)puVar20 + -0x2a);
          *(char *)piVar8 = (char)*piVar8 + cVar3;
          pbVar9 = pbVar16 + (uint)bVar23 * -8 + 4;
          out(*(undefined4 *)pbVar16,uVar13);
          *pcVar7 = *pcVar7 + cVar5;
          out(*(undefined4 *)pbVar9,uVar13);
          *pcVar7 = *pcVar7 + cVar5;
          pbVar17 = (byte *)((uint)pcVar7 & 0xffffff00);
          bVar4 = bVar4 | pbVar17[CONCAT22(uVar12,CONCAT11(bVar4,cVar5))];
          pbVar16 = (byte *)CONCAT22(uVar12,CONCAT11(bVar4,cVar5));
          pbVar18 = pbVar9 + (uint)bVar23 * -8 + 4 + (uint)bVar23 * -8 + 4;
          out(*(undefined4 *)(pbVar9 + (uint)bVar23 * -8 + 4),(short)pbVar17);
          bVar11 = *pbVar16;
          puVar21 = (uint *)CONCAT31(0xf80a00,bVar11);
          *pbVar17 = *pbVar17 + cVar5;
          pbVar9 = pbVar18;
          if (*pbVar17 != 0) {
            *(byte *)puVar21 = (byte)*puVar21 + bVar11;
            pbVar16 = (byte *)CONCAT22(uVar12,CONCAT11(bVar4 + (byte)*puVar21,cVar5));
            *pbVar18 = *pbVar18;
            pbVar9 = pbVar18 + (uint)bVar23 * -8 + 4;
            out(*(undefined4 *)pbVar18,(short)pbVar17);
            puVar21 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar20 | *pbVar16);
          }
          *pbVar17 = *pbVar17 + (char)pbVar16;
          pbVar18 = pbVar17;
          if (*pbVar17 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
            pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + (byte)*puVar21);
            pbVar16[0x2a060000] = pbVar16[0x2a060000] - (char)((uint)pbVar17 >> 8);
            *unaff_EBX = *unaff_EBX + (char)pbVar17;
            *pbVar17 = *pbVar17 ^ (byte)puVar21;
            pbVar18 = pbVar17;
code_r0x004044ff:
            cVar3 = (char)((uint)pbVar16 >> 8);
            *pbVar18 = *pbVar18 + cVar3;
            uVar6 = *puVar21;
            bVar11 = (byte)puVar21;
            *(byte *)puVar21 = (byte)*puVar21 + bVar11;
            bVar4 = 9 < (bVar11 & 0xf) | bVar22;
            uVar10 = (undefined3)((uint)puVar21 >> 8);
            bVar15 = bVar11 + bVar4 * '\x06';
            bVar15 = bVar15 + (0x90 < (bVar15 & 0xf0) |
                              CARRY1((byte)uVar6,bVar11) | bVar4 * (0xf9 < bVar15)) * '`';
            pbVar17 = (byte *)CONCAT31(uVar10,bVar15);
            bVar11 = *pbVar17;
            *pbVar17 = *pbVar17 + bVar15;
            *(byte **)pbVar18 = pbVar17 + (uint)CARRY1(bVar11,bVar15) + *(int *)pbVar18;
            out(*(undefined4 *)pbVar9,(short)pbVar18);
            *pbVar17 = *pbVar17 + bVar15;
            bVar15 = bVar15 - 0xe;
            pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                       CONCAT11(cVar3 + *(byte *)((int)puVar20 + 0x3e),(char)pbVar16
                                               ));
            *(char *)CONCAT31(uVar10,bVar15) = *(char *)CONCAT31(uVar10,bVar15) + bVar15;
            bVar4 = 9 < (bVar15 & 0xf) | bVar4;
            bVar15 = bVar15 + bVar4 * -6;
            bVar11 = 0x9f < bVar15 | bVar4 * (bVar15 < 6);
            puVar21 = (uint *)CONCAT31(uVar10,bVar15 + bVar11 * -0x60);
            pbVar18[0x5d] = pbVar18[0x5d] + (char)((uint)pbVar18 >> 8) + bVar11;
            *puVar21 = *puVar21 | (uint)puVar21;
            pbVar19 = pbVar9 + (uint)bVar23 * -8 + 4;
            while( true ) {
              bVar23 = (uStack_8 & 0x400) != 0;
              bVar22 = (uStack_8 & 0x10) != 0;
              *(byte *)puVar21 = (char)*puVar21 + (byte)puVar21;
              bVar15 = (byte)pbVar18 | *pbVar19;
              pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar15);
              cVar3 = (char)pbVar16;
              *pbVar16 = *pbVar16 - cVar3;
              *puVar21 = (uint)(*puVar21 + (int)puVar21);
              uVar10 = (undefined3)((uint)puVar21 >> 8);
              bVar4 = (byte)puVar21 | *pbVar17;
              pbVar9 = pbVar19 + (uint)bVar23 * -8 + 4;
              out(*(undefined4 *)pbVar19,(short)pbVar17);
              *(char *)CONCAT31(uVar10,bVar4) = *(char *)CONCAT31(uVar10,bVar4) + bVar4;
              cVar5 = (char)((uint)pbVar16 >> 8);
              *unaff_EBP = *unaff_EBP - cVar5;
              *pbVar17 = *pbVar17 + cVar3;
              bVar11 = bVar4 - 0x17;
              cVar5 = cVar5 + *(byte *)((int)puVar20 + 0x46);
              pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),CONCAT11(cVar5,cVar3));
              *(char *)CONCAT31(uVar10,bVar11) = *(char *)CONCAT31(uVar10,bVar11) + bVar11;
              *unaff_EBP = *unaff_EBP - cVar5;
              *pbVar17 = *pbVar17 + cVar3;
              bVar4 = bVar4 - 0x21;
              puVar21 = (uint *)CONCAT31(uVar10,bVar4);
              if (bVar11 < 10) break;
              *puVar21 = *puVar21 | (uint)puVar21;
              *(byte *)puVar21 = (byte)*puVar21 + bVar4;
              pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar18 >> 8) | pbVar17[0x6e],bVar15)
                                        );
              bVar4 = bVar4 | (byte)*puVar21;
              *(char *)CONCAT31(uVar10,bVar4) = *(char *)CONCAT31(uVar10,bVar4) + bVar4;
              puVar21 = (uint *)CONCAT31(uVar10,bVar4 | *pbVar18);
              pbVar19 = pbVar9;
            }
          } while( true );
        }
        puVar21 = puVar20;
        if (CARRY1((byte)uVar6,bVar11)) goto code_r0x00404423;
code_r0x00404436:
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x3d],
                                              (char)unaff_EBX));
      } while( true );
    }
    *pbVar16 = *pbVar16 + (char)pbVar9;
  } while( true );
}


