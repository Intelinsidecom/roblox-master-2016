/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004042fe
 * Raw Name    : Add
 * Demangled   : Add
 * Prototype   : int Add(undefined4 lines, uint * param_2)
 * Local Vars  : bVar21, puVar20, pbVar22, unaff_EBX, bVar24, cVar23, lines, unaff_ESI, unaff_EBP, puVar26, puVar25, pbVar28, pbVar27, unaff_EDI, pbVar29, puVar31, puVar30, in_DS, in_ES, bVar32, in_AF, bVar33, param_2, iStack_20, puStack_24, puStack_14, pcStack_1c, pbStack_8, puStack_10, uVar2, iVar1, bVar4, uVar3, bVar6, bVar5, in_EAX, cVar7, piVar9, pcVar8, pcVar11, puVar10, pbVar13, uVar12, uVar15, pbVar14, uVar17, uVar16, pcVar19, uVar18
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

int __fastcall Add(undefined4 lines,uint *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char *in_EAX;
  undefined3 uVar15;
  int *piVar9;
  undefined1 *puVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined2 uVar17;
  undefined2 uVar18;
  char *pcVar19;
  uint *puVar20;
  byte bVar21;
  char cVar23;
  byte bVar24;
  int unaff_EBX;
  char *unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar25;
  undefined4 *puVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  uint *unaff_EDI;
  uint *puVar30;
  uint *puVar31;
  ushort in_ES;
  undefined2 in_DS;
  byte in_AF;
  bool bVar32;
  bool bVar33;
  undefined1 *puStack_24;
  int iStack_20;
  char *pcStack_1c;
  uint *puStack_14;
  uint *puStack_10;
  byte *pbStack_8;
  char *pcVar8;
  uint3 uVar16;
  byte *pbVar22;
  
  bVar32 = false;
                    /* .NET CLR Managed Code */
  uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar23 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x60);
  cVar7 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar7;
  uVar15 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = cVar7 + 3;
  pcVar8 = (char *)CONCAT31(uVar15,bVar4);
  out(*unaff_ESI,(short)param_2);
  *pcVar8 = *pcVar8 + bVar4;
  pbVar14 = (byte *)CONCAT22((short)((uint)lines >> 0x10),
                             CONCAT11((byte)((uint)lines >> 8) | (byte)*param_2,(char)lines));
  pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_DS);
  puVar30 = (uint *)CONCAT22(uVar17,CONCAT11(cVar23 + *(char *)(CONCAT22(uVar17,CONCAT11(cVar23,(
                                                  char)unaff_EBX)) + 0x60),(char)unaff_EBX));
  *pcVar8 = *pcVar8 + bVar4;
  bVar5 = cVar7 + 0x2d;
  puVar20 = (uint *)CONCAT31(uVar15,bVar5);
  puVar25 = (undefined4 *)((int)unaff_ESI + 5);
  pcVar8 = unaff_EBP;
  uVar3 = in_ES;
  if (bVar4 < 0xd6) {
    *puVar20 = *puVar20 | (uint)puVar20;
    if ((POPCOUNT(*puVar20 & 0xff) & 1U) == 0) {
      *(byte *)puVar20 = (char)*puVar20 + bVar5;
      func_0x2a4a4325();
      bVar5 = (byte)in_DS;
      *pbStack_8 = *pbStack_8 + bVar5;
      bVar4 = *pbStack_8;
      uVar16 = (uint3)((uint)pbStack_8 >> 8);
      piVar9 = (int *)CONCAT31(uVar16,bVar5 - bVar4);
      puVar26 = (undefined4 *)((iStack_20 - *piVar9) - (uint)(bVar5 < *pbStack_8));
      *piVar9 = (int)(*piVar9 + (int)piVar9);
      *(byte *)piVar9 = (char)*piVar9 + (bVar5 - bVar4);
      puVar10 = (undefined1 *)((uint)(uVar16 & 0x21100) << 8);
      *pcStack_1c = *pcStack_1c - (char)puStack_14;
      *(undefined1 *)puVar26 = *(undefined1 *)puVar26;
      uVar17 = SUB42(puStack_10,0);
      out(*puVar26,uVar17);
      unaff_EDI = (uint *)(puStack_24 + 1);
      *puStack_24 = *(undefined1 *)(puVar26 + 1);
      *puVar10 = *puVar10;
      out(*(undefined4 *)((int)puVar26 + 5),uVar17);
      *(char *)puStack_10 = (char)*puStack_10 + '%';
      uVar12 = *puStack_14;
      uVar2 = *unaff_EDI;
      out(*(undefined4 *)((int)puVar26 + 9),uVar17);
      *(char *)puStack_10 = (char)*puStack_10 + '%';
      bVar4 = (byte)uVar2 | *(byte *)((int)puVar26 + 0xd);
      out(*(undefined4 *)((int)puVar26 + 0xd),uVar17);
      cVar7 = bVar4 - *(char *)(CONCAT31(uVar16,bVar4) & 0x21100ff);
      pcVar11 = (char *)(CONCAT31(uVar16,cVar7) & 0x21100ff);
      *(char *)puStack_10 = (char)*puStack_10 + '%';
      pcVar8 = (char *)((uint)pcStack_1c | uVar12) + 0x70a0000;
      *pcVar8 = *pcVar8 - (char)puStack_14;
      puVar25 = (undefined4 *)((int)puVar26 + 0x15);
      out(*(undefined4 *)((int)puVar26 + 0x11),uVar17);
      *pcVar11 = *pcVar11 + cVar7;
      pbVar14 = (byte *)CONCAT22(0x40,CONCAT11(bRam070adee6 | 0x43,0x26));
      puVar20 = (uint *)(CONCAT31(uVar16,cVar7 + -6) & 0x21100ff);
      param_2 = puStack_10;
      puVar30 = puStack_14;
      pcVar8 = (char *)((uint)pcStack_1c | uVar12);
      uVar3 = in_ES;
    }
    else {
      uVar12 = *puVar20;
      puVar20 = (uint *)CONCAT31(uVar15,bVar5 + (char)*puVar20);
      *puVar20 = (uint)((int)puVar20 + (uint)CARRY1(bVar5,(byte)uVar12) + *puVar20);
      uVar3 = in_ES;
    }
  }
  pbStack_8._0_2_ = uVar3;
  pbVar27 = (byte *)(puVar25 + 1);
  out(*puVar25,(short)param_2);
  pcVar19 = (char *)((int)param_2 + 1);
  *(char *)puVar20 = (char)*puVar20 + (char)puVar20;
  bVar21 = (byte)puVar30 | (byte)((uint)puVar20 >> 8);
  pbVar22 = (byte *)CONCAT31((int3)((uint)puVar30 >> 8),bVar21);
  uVar15 = (undefined3)((uint)puVar20 >> 8);
  bVar6 = (char)puVar20 - (char)*puVar20;
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar6;
  *(char *)CONCAT31(uVar15,bVar6) = *(char *)CONCAT31(uVar15,bVar6) + bVar6 + CARRY1(bVar4,bVar6);
  *pcVar19 = *pcVar19 + bVar6;
  *pbVar14 = *pbVar14 + (char)pcVar19;
  bVar4 = *pbVar27;
  *pbVar27 = *pbVar27 + bVar21;
  bVar5 = 9 < (bVar6 & 0xf) | in_AF;
  bVar6 = bVar6 + bVar5 * -6;
  cVar7 = bVar6 + (0x9f < bVar6 | CARRY1(bVar4,bVar21) | bVar5 * (bVar6 < 6)) * -0x60;
  pcVar11 = (char *)CONCAT31(uVar15,cVar7);
  *pcVar19 = *pcVar19 + (char)pbVar14;
  *pcVar11 = *pcVar11 + cVar7;
  *pcVar11 = *pcVar11 + cVar7;
  puVar20 = (uint *)((int)param_2 + 2);
  uVar12 = CONCAT31(uVar15,cVar7 + *pbVar22) + 0x6128;
  uVar15 = (undefined3)(uVar12 >> 8);
  cVar7 = (char)uVar12 + *(char *)((int)unaff_EDI * 2 + 0x4000064);
  bVar6 = cVar7 - *(char *)CONCAT31(uVar15,cVar7);
  pbVar13 = (byte *)CONCAT31(uVar15,bVar6);
  bVar4 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar6;
  pbVar27 = pbVar27 + (-(uint)CARRY1(bVar4,bVar6) - *(int *)pbVar13);
  bVar6 = bVar6 + *pbVar13;
  pbVar13 = (byte *)CONCAT31(uVar15,bVar6);
  bVar4 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar6;
  *puVar20 = (uint)(pbVar13 + (uint)CARRY1(bVar4,bVar6) + *puVar20);
  cVar7 = (char)((uint)puVar20 >> 8);
  if ((POPCOUNT(*puVar20 & 0xff) & 1U) != 0) {
    cVar23 = bVar6 - *pbVar14;
    pbVar13 = (byte *)CONCAT31(uVar15,cVar23);
    *pbVar13 = *pbVar13 + cVar23 + (bVar6 < *pbVar14);
    *(byte *)puVar20 = *(byte *)puVar20 + cVar23;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + cVar7;
    puVar30 = unaff_EDI;
    goto code_r0x00404417;
  }
  *pbVar13 = *pbVar13 + bVar6;
  cVar23 = bVar6 + 0x28;
  pcVar11 = (char *)CONCAT31(uVar15,cVar23);
  uVar2 = in((short)puVar20);
  *unaff_EDI = uVar2;
  *pcVar11 = *pcVar11 + cVar23;
  bVar4 = pbVar22[(int)pbVar14];
  pcVar11[0x28] = pcVar11[0x28] + cVar7;
  bVar32 = ((ushort)pbStack_8 & 0x400) != 0;
  bVar5 = ((ushort)pbStack_8 & 0x10) != 0;
  *pcVar11 = *pcVar11 + cVar23;
  bVar4 = (byte)((uint)pbVar14 >> 8) | bVar4 | *(byte *)puVar20;
  pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),CONCAT11(bVar4,(char)pbVar14));
  uVar17 = (undefined2)((uint)puVar30 >> 0x10);
  bVar24 = (char)((uint)puVar30 >> 8) + pbVar22[100];
  pbVar22 = (byte *)CONCAT22(uVar17,CONCAT11(bVar24,bVar21));
  *pcVar11 = *pcVar11 + cVar23;
  pbVar13 = (byte *)CONCAT31(uVar15,bVar6 + 0x50);
  *(char *)((int)param_2 + 0x23) = *(char *)((int)param_2 + 0x23) + cVar7;
  pbStack_8._0_2_ = 0;
  pbVar28 = pbVar13 + 2;
  *pbVar28 = *pbVar28 + cVar7;
  puVar30 = unaff_EDI + 1;
  if ((POPCOUNT(*pbVar28) & 1U) != 0) goto code_r0x00404439;
  *pbVar13 = *pbVar13 + bVar6 + 0x50;
  cVar7 = bVar6 + 0x78;
  pcVar11 = (char *)CONCAT31(uVar15,cVar7);
  bVar5 = (uVar12 & 0x1000) != 0;
  *pcVar11 = *pcVar11 + cVar7;
  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(byte)puVar20 | *pbVar27);
  pbVar22 = (byte *)CONCAT22(uVar17,CONCAT11(bVar24 | pbVar27[0x65],bVar21));
  *pcVar11 = *pcVar11 + cVar7;
  bVar6 = bVar6 + 0x9d;
  pcVar11 = (char *)CONCAT31(uVar15,bVar6);
  puVar20 = (uint *)((uint)puVar20 | *puVar20);
  *pcVar11 = *pcVar11 + bVar4;
  puVar30 = (uint *)((int)unaff_EDI + (uint)bVar32 * -2 + 5);
  *(byte *)(unaff_EDI + 1) = bVar6;
  *pcVar11 = *pcVar11 + bVar6;
  bVar6 = bVar6 | (byte)*puVar20;
  pbVar13 = (byte *)CONCAT31(uVar15,bVar6);
  if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00404454;
  *pbVar13 = *pbVar13 + bVar6;
  cVar7 = bVar6 + 2;
  pbVar13 = (byte *)CONCAT31(uVar15,cVar7);
  *pcVar8 = *pcVar8 - bVar21;
  *pbVar27 = *pbVar27 + cVar7;
  pbVar28 = pbVar27 + (uint)bVar32 * -8 + 4;
  out(*(undefined4 *)pbVar27,(short)puVar20);
  puVar31 = (uint *)((int)puVar30 + (uint)bVar32 * -2 + 1);
  pbVar27 = pbVar28 + (uint)bVar32 * -2 + 1;
  *(byte *)puVar30 = *pbVar28;
  *pbVar13 = *pbVar13 + cVar7;
  unaff_EBP = (char *)0x0;
  do {
    cVar23 = (char)((uint)pbVar14 >> 8);
    pbVar22[-0x21f60000] = pbVar22[-0x21f60000] - cVar23;
    uVar15 = (undefined3)((uint)pbVar13 >> 8);
    cVar7 = ((byte)pbVar13 | *pbVar27) - 6;
    piVar9 = (int *)CONCAT31(uVar15,cVar7);
    pbStack_8._0_2_ = (ushort)unaff_EBP;
    pcVar8 = (char *)((int)piVar9 * 2 + 0x2adc0a00);
    *pcVar8 = *pcVar8 - cVar23;
    *piVar9 = (int)(*piVar9 + (int)puVar20);
    *(char *)piVar9 = (char)*piVar9 + cVar7;
    bVar4 = cVar7 + (char)*piVar9;
    bVar5 = 9 < (bVar4 & 0xf) | bVar5;
    uVar12 = CONCAT31(uVar15,bVar4 + bVar5 * '\x06') & 0xffffff0f;
    pbVar13 = (byte *)CONCAT22((short)(uVar12 >> 0x10),
                               CONCAT11((char)((uint)pbVar13 >> 8) + bVar5,(char)uVar12));
    puVar30 = puVar31;
code_r0x00404417:
    *pbVar27 = *pbVar27 + (char)((uint)pbVar13 >> 8);
    pcVar8 = (char *)0x17000000;
    *(byte *)puVar20 = (byte)*puVar20 + (char)pbVar14;
    bVar6 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    bVar4 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    puVar31 = puVar30;
    if (!CARRY1(bVar4,bVar6)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar13 = *pbVar13 + (byte)pbVar13;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),(byte)pbVar13 | pbVar13[0x4000065]);
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(char)pbVar22 - *pbVar27);
    bVar4 = *pbVar13;
    bVar6 = (byte)((uint)pbVar14 >> 8);
    cVar7 = (char)pbVar14;
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),CONCAT11(bVar6 + *pbVar13,cVar7));
    iVar1 = *(int *)pbVar13;
    *(byte *)puVar20 = (byte)*puVar20 + cVar7;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11((char)((uint)puVar20 >> 8) - *pbVar27,(char)puVar20));
    pbVar13 = pbVar13 + *puVar20 + (uint)CARRY1(bVar6,bVar4) + iVar1;
    puVar30 = puVar31;
    if ((POPCOUNT((uint)pbVar13 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar13 = *pbVar13 + (char)pbVar13;
        uVar15 = (undefined3)((uint)pbVar13 >> 8);
        cVar7 = (char)pbVar13 + 'o';
        pcVar11 = (char *)CONCAT31(uVar15,cVar7);
        *(char **)pbVar14 = pcVar11 + *(int *)pbVar14;
        *(byte *)puVar20 = (byte)*puVar20 + (char)pbVar14;
        bVar6 = cVar7 - *pcVar11;
        pbVar13 = (byte *)CONCAT31(uVar15,bVar6);
        *pbVar22 = *pbVar22 + (char)puVar20;
        *pbVar22 = *pbVar22 ^ bVar6;
        pbVar22[0x26000000] = pbVar22[0x26000000] + (char)((uint)pbVar14 >> 8);
        bVar4 = *pbVar13;
        *pbVar13 = *pbVar13 + bVar6;
        *(byte **)(pbVar22 + 0xb) = pbVar27 + (uint)CARRY1(bVar4,bVar6) + *(int *)(pbVar22 + 0xb);
        *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
code_r0x00404454:
        unaff_EBP = (char *)(uint)(ushort)pbStack_8;
        pbVar13 = (byte *)((uint)pbVar13 | 0x1027309);
        uVar12 = *puVar20;
        bVar4 = (byte)pbVar14;
        uVar2 = *puVar20;
        *(byte *)puVar20 = (byte)*puVar20 + bVar4;
        if (SCARRY1((byte)uVar2,bVar4) != (char)(byte)*puVar20 < '\0') {
          *pbVar13 = *pbVar13 + (char)pbVar13;
          *pbVar27 = *pbVar27 + 1;
          puVar31 = (uint *)(CONCAT31((int3)((uint)pbVar13 >> 8),(char)pbVar13 + '\t') | 1);
          bVar5 = *pbVar27;
          bVar6 = (byte)puVar31;
          *pbVar27 = *pbVar27 + bVar6;
          if (CARRY1(bVar5,bVar6)) {
            *puVar31 = *puVar31 + (int)puVar31;
            puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                       CONCAT11((byte)((uint)puVar20 >> 8) | pbVar22[4],
                                                (char)puVar20));
          }
          else if (!CARRY1(bVar5,bVar6)) goto code_r0x00404473;
          *puVar31 = *puVar31 + (int)puVar31;
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar4 | (byte)*puVar20);
code_r0x00404473:
          uVar17 = (undefined2)((uint)pbVar14 >> 0x10);
          cVar23 = (char)pbVar14;
          bVar5 = (char)((uint)pbVar14 >> 8) + (char)*puVar31;
          uVar12 = *puVar31;
          *pbVar22 = *pbVar22 + bVar5;
          pbVar14 = (byte *)((uint)puVar31 & uVar12 | *puVar30);
          pbVar28 = pbVar27 + (uint)bVar32 * -8 + 4;
          out(*(undefined4 *)pbVar27,(short)puVar20);
          *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
          bVar5 = bVar5 | *pbVar14;
          *pbVar22 = *pbVar22 + bVar5;
          uVar15 = (undefined3)((uint)pbVar14 >> 8);
          pcVar11 = (char *)CONCAT31(uVar15,0xea);
          *(uint *)(pbVar22 + -0x3d) = *(uint *)(pbVar22 + -0x3d) | (uint)puVar30;
          *pcVar11 = *pcVar11 + -0x16;
          pbVar27 = (byte *)CONCAT31(uVar15,0x59);
          *pbVar27 = *pbVar27 + 0x59;
          bVar5 = bVar5 | *pbVar27;
          pbVar13 = (byte *)CONCAT22(uVar17,CONCAT11(bVar5,cVar23));
          *pbVar13 = *pbVar13 | 0x59;
          *(byte *)puVar20 = (byte)*puVar20 + cVar23;
          *pbVar13 = *pbVar13 - cVar23;
          *(byte **)pbVar27 = pbVar27 + *(int *)pbVar27;
          pbVar27 = pbVar28 + (uint)bVar32 * -8 + 4;
          out(*(undefined4 *)pbVar28,(short)puVar20);
          bVar4 = (byte)*puVar30 | 0x59 | *pbVar13;
          *(byte *)puVar20 = (byte)*puVar20 + cVar23;
          pcVar11 = (char *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                     CONCAT11((char)((uint)pbVar14 >> 8) - (char)pbVar22,bVar4));
          *pcVar11 = *pcVar11 + bVar4;
          cVar7 = (bVar4 | 8) - 2;
          piVar9 = (int *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar7);
          bVar33 = ((ushort)pbStack_8 & 0x400) != 0;
          bVar32 = ((ushort)pbStack_8 & 0x10) != 0;
          *(char *)piVar9 = (char)*piVar9 + cVar7;
          uVar18 = CONCAT11((byte)((uint)puVar20 >> 8) | pbVar22[0xb],(char)puVar20);
          pcVar11 = (char *)CONCAT22((short)((uint)puVar20 >> 0x10),uVar18);
          *piVar9 = (int)(*piVar9 + (int)piVar9);
          bVar5 = bVar5 | *(byte *)((int)puVar30 + -0x2a);
          *(char *)piVar9 = (char)*piVar9 + cVar7;
          pbVar14 = pbVar27 + (uint)bVar33 * -8 + 4;
          out(*(undefined4 *)pbVar27,uVar18);
          *pcVar11 = *pcVar11 + cVar23;
          out(*(undefined4 *)pbVar14,uVar18);
          *pcVar11 = *pcVar11 + cVar23;
          pbVar13 = (byte *)((uint)pcVar11 & 0xffffff00);
          bVar5 = bVar5 | pbVar13[CONCAT22(uVar17,CONCAT11(bVar5,cVar23))];
          pbVar27 = (byte *)CONCAT22(uVar17,CONCAT11(bVar5,cVar23));
          pbVar28 = pbVar14 + (uint)bVar33 * -8 + 4 + (uint)bVar33 * -8 + 4;
          out(*(undefined4 *)(pbVar14 + (uint)bVar33 * -8 + 4),(short)pbVar13);
          bVar4 = *pbVar27;
          puVar20 = (uint *)CONCAT31(0xf80a00,bVar4);
          *pbVar13 = *pbVar13 + cVar23;
          pbVar14 = pbVar28;
          if (*pbVar13 != 0) {
            *(byte *)puVar20 = (byte)*puVar20 + bVar4;
            pbVar27 = (byte *)CONCAT22(uVar17,CONCAT11(bVar5 + (byte)*puVar20,cVar23));
            *pbVar28 = *pbVar28;
            pbVar14 = pbVar28 + (uint)bVar33 * -8 + 4;
            out(*(undefined4 *)pbVar28,(short)pbVar13);
            puVar20 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar30 | *pbVar27);
          }
          *pbVar13 = *pbVar13 + (char)pbVar27;
          pbVar28 = pbVar13;
          if (*pbVar13 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar20 = (byte)*puVar20 + (byte)puVar20;
            pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),(char)pbVar27 + (byte)*puVar20);
            pbVar27[0x2a060000] = pbVar27[0x2a060000] - (char)((uint)pbVar13 >> 8);
            *pbVar22 = *pbVar22 + (char)pbVar13;
            *pbVar13 = *pbVar13 ^ (byte)puVar20;
            pbVar28 = pbVar13;
code_r0x004044ff:
            cVar7 = (char)((uint)pbVar27 >> 8);
            *pbVar28 = *pbVar28 + cVar7;
            uVar12 = *puVar20;
            bVar4 = (byte)puVar20;
            *(byte *)puVar20 = (byte)*puVar20 + bVar4;
            bVar5 = 9 < (bVar4 & 0xf) | bVar32;
            uVar15 = (undefined3)((uint)puVar20 >> 8);
            bVar6 = bVar4 + bVar5 * '\x06';
            bVar6 = bVar6 + (0x90 < (bVar6 & 0xf0) |
                            CARRY1((byte)uVar12,bVar4) | bVar5 * (0xf9 < bVar6)) * '`';
            pbVar13 = (byte *)CONCAT31(uVar15,bVar6);
            bVar4 = *pbVar13;
            *pbVar13 = *pbVar13 + bVar6;
            *(byte **)pbVar28 = pbVar13 + (uint)CARRY1(bVar4,bVar6) + *(int *)pbVar28;
            out(*(undefined4 *)pbVar14,(short)pbVar28);
            *pbVar13 = *pbVar13 + bVar6;
            bVar6 = bVar6 - 0xe;
            pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                       CONCAT11(cVar7 + *(byte *)((int)puVar30 + 0x3e),(char)pbVar27
                                               ));
            *(char *)CONCAT31(uVar15,bVar6) = *(char *)CONCAT31(uVar15,bVar6) + bVar6;
            bVar5 = 9 < (bVar6 & 0xf) | bVar5;
            bVar6 = bVar6 + bVar5 * -6;
            bVar4 = 0x9f < bVar6 | bVar5 * (bVar6 < 6);
            puVar20 = (uint *)CONCAT31(uVar15,bVar6 + bVar4 * -0x60);
            pbVar28[0x5d] = pbVar28[0x5d] + (char)((uint)pbVar28 >> 8) + bVar4;
            *puVar20 = *puVar20 | (uint)puVar20;
            pbVar29 = pbVar14 + (uint)bVar33 * -8 + 4;
            while( true ) {
              bVar33 = ((ushort)pbStack_8 & 0x400) != 0;
              bVar32 = ((ushort)pbStack_8 & 0x10) != 0;
              *(byte *)puVar20 = (char)*puVar20 + (byte)puVar20;
              bVar6 = (byte)pbVar28 | *pbVar29;
              pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar28 >> 8),bVar6);
              cVar7 = (char)pbVar27;
              *pbVar27 = *pbVar27 - cVar7;
              *puVar20 = (uint)(*puVar20 + (int)puVar20);
              uVar15 = (undefined3)((uint)puVar20 >> 8);
              bVar5 = (byte)puVar20 | *pbVar13;
              pbVar14 = pbVar29 + (uint)bVar33 * -8 + 4;
              out(*(undefined4 *)pbVar29,(short)pbVar13);
              *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
              cVar23 = (char)((uint)pbVar27 >> 8);
              *pcVar8 = *pcVar8 - cVar23;
              *pbVar13 = *pbVar13 + cVar7;
              bVar4 = bVar5 - 0x17;
              cVar23 = cVar23 + *(byte *)((int)puVar30 + 0x46);
              pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),CONCAT11(cVar23,cVar7));
              *(char *)CONCAT31(uVar15,bVar4) = *(char *)CONCAT31(uVar15,bVar4) + bVar4;
              *pcVar8 = *pcVar8 - cVar23;
              *pbVar13 = *pbVar13 + cVar7;
              bVar5 = bVar5 - 0x21;
              puVar20 = (uint *)CONCAT31(uVar15,bVar5);
              if (bVar4 < 10) break;
              *puVar20 = *puVar20 | (uint)puVar20;
              *(byte *)puVar20 = (byte)*puVar20 + bVar5;
              pbVar28 = (byte *)CONCAT22((short)((uint)pbVar28 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar28 >> 8) | pbVar13[0x6e],bVar6))
              ;
              bVar5 = bVar5 | (byte)*puVar20;
              *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
              puVar20 = (uint *)CONCAT31(uVar15,bVar5 | *pbVar28);
              pbVar29 = pbVar14;
            }
          } while( true );
        }
        puVar31 = puVar30;
        if (CARRY1((byte)uVar12,bVar4)) goto code_r0x00404423;
code_r0x00404436:
        pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                   CONCAT11((char)((uint)pbVar22 >> 8) + pbVar22[-0x3d],
                                            (char)pbVar22));
      } while( true );
    }
    *pbVar27 = *pbVar27 + (char)pbVar13;
  } while( true );
}


