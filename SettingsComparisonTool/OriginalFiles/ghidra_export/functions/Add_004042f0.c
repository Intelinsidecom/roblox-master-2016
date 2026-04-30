/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004042f0
 * Raw Name    : Add
 * Demangled   : Add
 * Prototype   : int Add(char * line, char * param_2)
 * Local Vars  : bVar21, uVar20, pbVar22, unaff_EBX, bVar24, line, cVar23, unaff_ESI, unaff_EBP, puVar26, puVar25, pbVar28, pbVar27, pbVar30, pbVar29, puVar31, unaff_EDI, in_ES, puVar32, in_AF, in_DS, bVar34, bVar33, param_2, iStack_20, puStack_24, puStack_14, pcStack_1c, pbStack_8, pbStack_10, uVar2, iVar1, cVar4, uVar3, bVar6, bVar5, cVar8, bVar7, pcVar9, in_EAX, puVar11, piVar10, uVar13, pcVar12, uVar15, uVar14, uVar17, uVar16, puVar19, pbVar18
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

int __fastcall Add(char *line,char *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char *in_EAX;
  undefined3 uVar14;
  int *piVar10;
  undefined1 *puVar11;
  char *pcVar12;
  uint uVar13;
  undefined2 uVar16;
  undefined2 uVar17;
  byte *pbVar18;
  uint *puVar19;
  undefined1 uVar20;
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
  byte *pbVar30;
  uint *unaff_EDI;
  uint *puVar31;
  uint *puVar32;
  ushort in_ES;
  undefined2 in_DS;
  byte in_AF;
  bool bVar33;
  bool bVar34;
  undefined1 *puStack_24;
  int iStack_20;
  char *pcStack_1c;
  uint *puStack_14;
  byte *pbStack_10;
  byte *pbStack_8;
  char *pcVar9;
  uint3 uVar15;
  byte *pbVar22;
  
  bVar33 = false;
                    /* .NET CLR Managed Code */
  uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar20 = (undefined1)unaff_EBX;
  cVar23 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x60);
  cVar8 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar8;
  uVar14 = (undefined3)((uint)in_EAX >> 8);
  cVar4 = cVar8 + '\x03';
  out(*unaff_ESI,(short)param_2);
  *line = *line + cVar4;
  *param_2 = *param_2 + (char)line;
  uVar16 = CONCAT11((char)((uint)param_2 >> 8) - *(char *)(unaff_ESI + 1),(char)param_2);
  pbVar28 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar16);
  cVar23 = cVar23 + *(char *)(CONCAT22(uVar17,CONCAT11(cVar23,uVar20)) + 0x60);
  *(char *)CONCAT31(uVar14,cVar4) = *(char *)CONCAT31(uVar14,cVar4) + cVar4;
  bVar5 = cVar8 + 6;
  pcVar9 = (char *)CONCAT31(uVar14,bVar5);
  out(unaff_ESI[1],uVar16);
  *pcVar9 = *pcVar9 + bVar5;
  pbVar29 = (byte *)CONCAT22((short)((uint)line >> 0x10),
                             CONCAT11((byte)((uint)line >> 8) | *pbVar28,(char)line));
  pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_DS);
  puVar31 = (uint *)CONCAT22(uVar17,CONCAT11(cVar23 + *(char *)(CONCAT22(uVar17,CONCAT11(cVar23,
                                                  uVar20)) + 0x60),uVar20));
  *pcVar9 = *pcVar9 + bVar5;
  bVar6 = cVar8 + 0x30;
  puVar19 = (uint *)CONCAT31(uVar14,bVar6);
  puVar25 = (undefined4 *)((int)unaff_ESI + 9);
  pcVar9 = unaff_EBP;
  uVar3 = in_ES;
  if (bVar5 < 0xd6) {
    *puVar19 = *puVar19 | (uint)puVar19;
    if ((POPCOUNT(*puVar19 & 0xff) & 1U) == 0) {
      *(byte *)puVar19 = (char)*puVar19 + bVar6;
      func_0x2a4a4325();
      bVar6 = (byte)in_DS;
      *pbStack_8 = *pbStack_8 + bVar6;
      bVar5 = *pbStack_8;
      uVar15 = (uint3)((uint)pbStack_8 >> 8);
      piVar10 = (int *)CONCAT31(uVar15,bVar6 - bVar5);
      puVar26 = (undefined4 *)((iStack_20 - *piVar10) - (uint)(bVar6 < *pbStack_8));
      *piVar10 = (int)(*piVar10 + (int)piVar10);
      *(byte *)piVar10 = (char)*piVar10 + (bVar6 - bVar5);
      puVar11 = (undefined1 *)((uint)(uVar15 & 0x21100) << 8);
      *pcStack_1c = *pcStack_1c - (char)puStack_14;
      *(undefined1 *)puVar26 = *(undefined1 *)puVar26;
      uVar16 = SUB42(pbStack_10,0);
      out(*puVar26,uVar16);
      unaff_EDI = (uint *)(puStack_24 + 1);
      *puStack_24 = *(undefined1 *)(puVar26 + 1);
      *puVar11 = *puVar11;
      out(*(undefined4 *)((int)puVar26 + 5),uVar16);
      *pbStack_10 = *pbStack_10 + 0x25;
      uVar13 = *puStack_14;
      uVar2 = *unaff_EDI;
      out(*(undefined4 *)((int)puVar26 + 9),uVar16);
      *pbStack_10 = *pbStack_10 + 0x25;
      bVar5 = (byte)uVar2 | *(byte *)((int)puVar26 + 0xd);
      out(*(undefined4 *)((int)puVar26 + 0xd),uVar16);
      cVar8 = bVar5 - *(char *)(CONCAT31(uVar15,bVar5) & 0x21100ff);
      pcVar12 = (char *)(CONCAT31(uVar15,cVar8) & 0x21100ff);
      *pbStack_10 = *pbStack_10 + 0x25;
      pcVar9 = (char *)((uint)pcStack_1c | uVar13) + 0x70a0000;
      *pcVar9 = *pcVar9 - (char)puStack_14;
      puVar25 = (undefined4 *)((int)puVar26 + 0x15);
      out(*(undefined4 *)((int)puVar26 + 0x11),uVar16);
      *pcVar12 = *pcVar12 + cVar8;
      pbVar29 = (byte *)CONCAT22(0x40,CONCAT11(bRam070adee6 | 0x43,0x26));
      puVar19 = (uint *)(CONCAT31(uVar15,cVar8 + -6) & 0x21100ff);
      pbVar28 = pbStack_10;
      puVar31 = puStack_14;
      pcVar9 = (char *)((uint)pcStack_1c | uVar13);
      uVar3 = in_ES;
    }
    else {
      uVar13 = *puVar19;
      puVar19 = (uint *)CONCAT31(uVar14,bVar6 + (char)*puVar19);
      *puVar19 = (uint)((int)puVar19 + (uint)CARRY1(bVar6,(byte)uVar13) + *puVar19);
      uVar3 = in_ES;
    }
  }
  pbStack_8._0_2_ = uVar3;
  pbVar27 = (byte *)(puVar25 + 1);
  out(*puVar25,(short)pbVar28);
  pbVar18 = pbVar28 + 1;
  *(char *)puVar19 = (char)*puVar19 + (char)puVar19;
  bVar21 = (byte)puVar31 | (byte)((uint)puVar19 >> 8);
  pbVar22 = (byte *)CONCAT31((int3)((uint)puVar31 >> 8),bVar21);
  uVar14 = (undefined3)((uint)puVar19 >> 8);
  bVar7 = (char)puVar19 - (char)*puVar19;
  bVar5 = *pbVar29;
  *pbVar29 = *pbVar29 + bVar7;
  *(char *)CONCAT31(uVar14,bVar7) = *(char *)CONCAT31(uVar14,bVar7) + bVar7 + CARRY1(bVar5,bVar7);
  *pbVar18 = *pbVar18 + bVar7;
  *pbVar29 = *pbVar29 + (char)pbVar18;
  bVar5 = *pbVar27;
  *pbVar27 = *pbVar27 + bVar21;
  bVar6 = 9 < (bVar7 & 0xf) | in_AF;
  bVar7 = bVar7 + bVar6 * -6;
  cVar8 = bVar7 + (0x9f < bVar7 | CARRY1(bVar5,bVar21) | bVar6 * (bVar7 < 6)) * -0x60;
  pcVar12 = (char *)CONCAT31(uVar14,cVar8);
  *pbVar18 = *pbVar18 + (char)pbVar29;
  *pcVar12 = *pcVar12 + cVar8;
  *pcVar12 = *pcVar12 + cVar8;
  puVar19 = (uint *)(pbVar28 + 2);
  uVar13 = CONCAT31(uVar14,cVar8 + *pbVar22) + 0x6128;
  uVar14 = (undefined3)(uVar13 >> 8);
  cVar8 = (char)uVar13 + *(char *)((int)unaff_EDI * 2 + 0x4000064);
  bVar7 = cVar8 - *(char *)CONCAT31(uVar14,cVar8);
  pbVar18 = (byte *)CONCAT31(uVar14,bVar7);
  bVar5 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar7;
  pbVar27 = pbVar27 + (-(uint)CARRY1(bVar5,bVar7) - *(int *)pbVar18);
  bVar7 = bVar7 + *pbVar18;
  pbVar18 = (byte *)CONCAT31(uVar14,bVar7);
  bVar5 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar7;
  *puVar19 = (uint)(pbVar18 + (uint)CARRY1(bVar5,bVar7) + *puVar19);
  cVar8 = (char)((uint)puVar19 >> 8);
  if ((POPCOUNT(*puVar19 & 0xff) & 1U) != 0) {
    cVar4 = bVar7 - *pbVar29;
    pbVar18 = (byte *)CONCAT31(uVar14,cVar4);
    *pbVar18 = *pbVar18 + cVar4 + (bVar7 < *pbVar29);
    *(byte *)puVar19 = (byte)*puVar19 + cVar4;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + cVar8;
    puVar31 = unaff_EDI;
    goto code_r0x00404417;
  }
  *pbVar18 = *pbVar18 + bVar7;
  cVar4 = bVar7 + 0x28;
  pcVar12 = (char *)CONCAT31(uVar14,cVar4);
  uVar2 = in((short)puVar19);
  *unaff_EDI = uVar2;
  *pcVar12 = *pcVar12 + cVar4;
  bVar5 = pbVar22[(int)pbVar29];
  pcVar12[0x28] = pcVar12[0x28] + cVar8;
  bVar33 = ((ushort)pbStack_8 & 0x400) != 0;
  bVar6 = ((ushort)pbStack_8 & 0x10) != 0;
  *pcVar12 = *pcVar12 + cVar4;
  bVar5 = (byte)((uint)pbVar29 >> 8) | bVar5 | (byte)*puVar19;
  pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),CONCAT11(bVar5,(char)pbVar29));
  uVar16 = (undefined2)((uint)puVar31 >> 0x10);
  bVar24 = (char)((uint)puVar31 >> 8) + pbVar22[100];
  pbVar22 = (byte *)CONCAT22(uVar16,CONCAT11(bVar24,bVar21));
  *pcVar12 = *pcVar12 + cVar4;
  pbVar18 = (byte *)CONCAT31(uVar14,bVar7 + 0x50);
  pbVar28[0x23] = pbVar28[0x23] + cVar8;
  pbStack_8._0_2_ = 0;
  pbVar28 = pbVar18 + 2;
  *pbVar28 = *pbVar28 + cVar8;
  puVar31 = unaff_EDI + 1;
  if ((POPCOUNT(*pbVar28) & 1U) != 0) goto code_r0x00404439;
  *pbVar18 = *pbVar18 + bVar7 + 0x50;
  cVar8 = bVar7 + 0x78;
  pcVar12 = (char *)CONCAT31(uVar14,cVar8);
  bVar6 = (uVar13 & 0x1000) != 0;
  *pcVar12 = *pcVar12 + cVar8;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(byte)puVar19 | *pbVar27);
  pbVar22 = (byte *)CONCAT22(uVar16,CONCAT11(bVar24 | pbVar27[0x65],bVar21));
  *pcVar12 = *pcVar12 + cVar8;
  bVar7 = bVar7 + 0x9d;
  pcVar12 = (char *)CONCAT31(uVar14,bVar7);
  puVar19 = (uint *)((uint)puVar19 | *puVar19);
  *pcVar12 = *pcVar12 + bVar5;
  puVar31 = (uint *)((int)unaff_EDI + (uint)bVar33 * -2 + 5);
  *(byte *)(unaff_EDI + 1) = bVar7;
  *pcVar12 = *pcVar12 + bVar7;
  bVar7 = bVar7 | (byte)*puVar19;
  pbVar18 = (byte *)CONCAT31(uVar14,bVar7);
  if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00404454;
  *pbVar18 = *pbVar18 + bVar7;
  cVar8 = bVar7 + 2;
  pbVar18 = (byte *)CONCAT31(uVar14,cVar8);
  *pcVar9 = *pcVar9 - bVar21;
  *pbVar27 = *pbVar27 + cVar8;
  pbVar28 = pbVar27 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar27,(short)puVar19);
  puVar32 = (uint *)((int)puVar31 + (uint)bVar33 * -2 + 1);
  pbVar27 = pbVar28 + (uint)bVar33 * -2 + 1;
  *(byte *)puVar31 = *pbVar28;
  *pbVar18 = *pbVar18 + cVar8;
  unaff_EBP = (char *)0x0;
  do {
    cVar4 = (char)((uint)pbVar29 >> 8);
    pbVar22[-0x21f60000] = pbVar22[-0x21f60000] - cVar4;
    uVar14 = (undefined3)((uint)pbVar18 >> 8);
    cVar8 = ((byte)pbVar18 | *pbVar27) - 6;
    piVar10 = (int *)CONCAT31(uVar14,cVar8);
    pbStack_8._0_2_ = (ushort)unaff_EBP;
    pcVar9 = (char *)((int)piVar10 * 2 + 0x2adc0a00);
    *pcVar9 = *pcVar9 - cVar4;
    *piVar10 = (int)(*piVar10 + (int)puVar19);
    *(char *)piVar10 = (char)*piVar10 + cVar8;
    bVar5 = cVar8 + (char)*piVar10;
    bVar6 = 9 < (bVar5 & 0xf) | bVar6;
    uVar13 = CONCAT31(uVar14,bVar5 + bVar6 * '\x06') & 0xffffff0f;
    pbVar18 = (byte *)CONCAT22((short)(uVar13 >> 0x10),
                               CONCAT11((char)((uint)pbVar18 >> 8) + bVar6,(char)uVar13));
    puVar31 = puVar32;
code_r0x00404417:
    *pbVar27 = *pbVar27 + (char)((uint)pbVar18 >> 8);
    pcVar9 = (char *)0x17000000;
    *(byte *)puVar19 = (byte)*puVar19 + (char)pbVar29;
    bVar7 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar7;
    bVar5 = *pbVar18;
    *pbVar18 = *pbVar18 + bVar7;
    puVar32 = puVar31;
    if (!CARRY1(bVar5,bVar7)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar18 = *pbVar18 + (byte)pbVar18;
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),(byte)pbVar18 | pbVar18[0x4000065]);
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(char)pbVar22 - *pbVar27);
    bVar5 = *pbVar18;
    bVar7 = (byte)((uint)pbVar29 >> 8);
    cVar8 = (char)pbVar29;
    pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),CONCAT11(bVar7 + *pbVar18,cVar8));
    iVar1 = *(int *)pbVar18;
    *(byte *)puVar19 = (byte)*puVar19 + cVar8;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((char)((uint)puVar19 >> 8) - *pbVar27,(char)puVar19));
    pbVar18 = pbVar18 + *puVar19 + (uint)CARRY1(bVar7,bVar5) + iVar1;
    puVar31 = puVar32;
    if ((POPCOUNT((uint)pbVar18 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar18 = *pbVar18 + (char)pbVar18;
        uVar14 = (undefined3)((uint)pbVar18 >> 8);
        cVar8 = (char)pbVar18 + 'o';
        pcVar12 = (char *)CONCAT31(uVar14,cVar8);
        *(char **)pbVar29 = pcVar12 + *(int *)pbVar29;
        *(byte *)puVar19 = (byte)*puVar19 + (char)pbVar29;
        bVar7 = cVar8 - *pcVar12;
        pbVar18 = (byte *)CONCAT31(uVar14,bVar7);
        *pbVar22 = *pbVar22 + (char)puVar19;
        *pbVar22 = *pbVar22 ^ bVar7;
        pbVar22[0x26000000] = pbVar22[0x26000000] + (char)((uint)pbVar29 >> 8);
        bVar5 = *pbVar18;
        *pbVar18 = *pbVar18 + bVar7;
        *(byte **)(pbVar22 + 0xb) = pbVar27 + (uint)CARRY1(bVar5,bVar7) + *(int *)(pbVar22 + 0xb);
        *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
code_r0x00404454:
        unaff_EBP = (char *)(uint)(ushort)pbStack_8;
        pbVar18 = (byte *)((uint)pbVar18 | 0x1027309);
        uVar13 = *puVar19;
        bVar5 = (byte)pbVar29;
        uVar2 = *puVar19;
        *(byte *)puVar19 = (byte)*puVar19 + bVar5;
        if (SCARRY1((byte)uVar2,bVar5) != (char)(byte)*puVar19 < '\0') {
          *pbVar18 = *pbVar18 + (char)pbVar18;
          *pbVar27 = *pbVar27 + 1;
          puVar32 = (uint *)(CONCAT31((int3)((uint)pbVar18 >> 8),(char)pbVar18 + '\t') | 1);
          bVar6 = *pbVar27;
          bVar7 = (byte)puVar32;
          *pbVar27 = *pbVar27 + bVar7;
          if (CARRY1(bVar6,bVar7)) {
            *puVar32 = *puVar32 + (int)puVar32;
            puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                       CONCAT11((byte)((uint)puVar19 >> 8) | pbVar22[4],
                                                (char)puVar19));
          }
          else if (!CARRY1(bVar6,bVar7)) goto code_r0x00404473;
          *puVar32 = *puVar32 + (int)puVar32;
          pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),bVar5 | (byte)*puVar19);
code_r0x00404473:
          uVar16 = (undefined2)((uint)pbVar29 >> 0x10);
          cVar4 = (char)pbVar29;
          bVar6 = (char)((uint)pbVar29 >> 8) + (char)*puVar32;
          uVar13 = *puVar32;
          *pbVar22 = *pbVar22 + bVar6;
          pbVar28 = (byte *)((uint)puVar32 & uVar13 | *puVar31);
          pbVar18 = pbVar27 + (uint)bVar33 * -8 + 4;
          out(*(undefined4 *)pbVar27,(short)puVar19);
          *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
          bVar6 = bVar6 | *pbVar28;
          *pbVar22 = *pbVar22 + bVar6;
          uVar14 = (undefined3)((uint)pbVar28 >> 8);
          pcVar12 = (char *)CONCAT31(uVar14,0xea);
          *(uint *)(pbVar22 + -0x3d) = *(uint *)(pbVar22 + -0x3d) | (uint)puVar31;
          *pcVar12 = *pcVar12 + -0x16;
          pbVar29 = (byte *)CONCAT31(uVar14,0x59);
          *pbVar29 = *pbVar29 + 0x59;
          bVar6 = bVar6 | *pbVar29;
          pbVar27 = (byte *)CONCAT22(uVar16,CONCAT11(bVar6,cVar4));
          *pbVar27 = *pbVar27 | 0x59;
          *(byte *)puVar19 = (byte)*puVar19 + cVar4;
          *pbVar27 = *pbVar27 - cVar4;
          *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
          pbVar29 = pbVar18 + (uint)bVar33 * -8 + 4;
          out(*(undefined4 *)pbVar18,(short)puVar19);
          bVar5 = (byte)*puVar31 | 0x59 | *pbVar27;
          *(byte *)puVar19 = (byte)*puVar19 + cVar4;
          pcVar12 = (char *)CONCAT22((short)((uint)pbVar28 >> 0x10),
                                     CONCAT11((char)((uint)pbVar28 >> 8) - (char)pbVar22,bVar5));
          *pcVar12 = *pcVar12 + bVar5;
          cVar8 = (bVar5 | 8) - 2;
          piVar10 = (int *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8);
          bVar34 = ((ushort)pbStack_8 & 0x400) != 0;
          bVar33 = ((ushort)pbStack_8 & 0x10) != 0;
          *(char *)piVar10 = (char)*piVar10 + cVar8;
          uVar17 = CONCAT11((byte)((uint)puVar19 >> 8) | pbVar22[0xb],(char)puVar19);
          pcVar12 = (char *)CONCAT22((short)((uint)puVar19 >> 0x10),uVar17);
          *piVar10 = (int)(*piVar10 + (int)piVar10);
          bVar6 = bVar6 | *(byte *)((int)puVar31 + -0x2a);
          *(char *)piVar10 = (char)*piVar10 + cVar8;
          pbVar28 = pbVar29 + (uint)bVar34 * -8 + 4;
          out(*(undefined4 *)pbVar29,uVar17);
          *pcVar12 = *pcVar12 + cVar4;
          out(*(undefined4 *)pbVar28,uVar17);
          *pcVar12 = *pcVar12 + cVar4;
          pbVar27 = (byte *)((uint)pcVar12 & 0xffffff00);
          bVar6 = bVar6 | pbVar27[CONCAT22(uVar16,CONCAT11(bVar6,cVar4))];
          pbVar29 = (byte *)CONCAT22(uVar16,CONCAT11(bVar6,cVar4));
          pbVar18 = pbVar28 + (uint)bVar34 * -8 + 4 + (uint)bVar34 * -8 + 4;
          out(*(undefined4 *)(pbVar28 + (uint)bVar34 * -8 + 4),(short)pbVar27);
          bVar5 = *pbVar29;
          puVar19 = (uint *)CONCAT31(0xf80a00,bVar5);
          *pbVar27 = *pbVar27 + cVar4;
          pbVar28 = pbVar18;
          if (*pbVar27 != 0) {
            *(byte *)puVar19 = (byte)*puVar19 + bVar5;
            pbVar29 = (byte *)CONCAT22(uVar16,CONCAT11(bVar6 + (byte)*puVar19,cVar4));
            *pbVar18 = *pbVar18;
            pbVar28 = pbVar18 + (uint)bVar34 * -8 + 4;
            out(*(undefined4 *)pbVar18,(short)pbVar27);
            puVar19 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar31 | *pbVar29);
          }
          *pbVar27 = *pbVar27 + (char)pbVar29;
          pbVar18 = pbVar27;
          if (*pbVar27 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
            pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),(char)pbVar29 + (byte)*puVar19);
            pbVar29[0x2a060000] = pbVar29[0x2a060000] - (char)((uint)pbVar27 >> 8);
            *pbVar22 = *pbVar22 + (char)pbVar27;
            *pbVar27 = *pbVar27 ^ (byte)puVar19;
            pbVar18 = pbVar27;
code_r0x004044ff:
            cVar8 = (char)((uint)pbVar29 >> 8);
            *pbVar18 = *pbVar18 + cVar8;
            uVar13 = *puVar19;
            bVar5 = (byte)puVar19;
            *(byte *)puVar19 = (byte)*puVar19 + bVar5;
            bVar6 = 9 < (bVar5 & 0xf) | bVar33;
            uVar14 = (undefined3)((uint)puVar19 >> 8);
            bVar7 = bVar5 + bVar6 * '\x06';
            bVar7 = bVar7 + (0x90 < (bVar7 & 0xf0) |
                            CARRY1((byte)uVar13,bVar5) | bVar6 * (0xf9 < bVar7)) * '`';
            pbVar27 = (byte *)CONCAT31(uVar14,bVar7);
            bVar5 = *pbVar27;
            *pbVar27 = *pbVar27 + bVar7;
            *(byte **)pbVar18 = pbVar27 + (uint)CARRY1(bVar5,bVar7) + *(int *)pbVar18;
            out(*(undefined4 *)pbVar28,(short)pbVar18);
            *pbVar27 = *pbVar27 + bVar7;
            bVar7 = bVar7 - 0xe;
            pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                       CONCAT11(cVar8 + *(byte *)((int)puVar31 + 0x3e),(char)pbVar29
                                               ));
            *(char *)CONCAT31(uVar14,bVar7) = *(char *)CONCAT31(uVar14,bVar7) + bVar7;
            bVar6 = 9 < (bVar7 & 0xf) | bVar6;
            bVar7 = bVar7 + bVar6 * -6;
            bVar5 = 0x9f < bVar7 | bVar6 * (bVar7 < 6);
            puVar19 = (uint *)CONCAT31(uVar14,bVar7 + bVar5 * -0x60);
            pbVar18[0x5d] = pbVar18[0x5d] + (char)((uint)pbVar18 >> 8) + bVar5;
            *puVar19 = *puVar19 | (uint)puVar19;
            pbVar30 = pbVar28 + (uint)bVar34 * -8 + 4;
            while( true ) {
              bVar34 = ((ushort)pbStack_8 & 0x400) != 0;
              bVar33 = ((ushort)pbStack_8 & 0x10) != 0;
              *(byte *)puVar19 = (char)*puVar19 + (byte)puVar19;
              bVar7 = (byte)pbVar18 | *pbVar30;
              pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar7);
              cVar8 = (char)pbVar29;
              *pbVar29 = *pbVar29 - cVar8;
              *puVar19 = (uint)(*puVar19 + (int)puVar19);
              uVar14 = (undefined3)((uint)puVar19 >> 8);
              bVar6 = (byte)puVar19 | *pbVar27;
              pbVar28 = pbVar30 + (uint)bVar34 * -8 + 4;
              out(*(undefined4 *)pbVar30,(short)pbVar27);
              *(char *)CONCAT31(uVar14,bVar6) = *(char *)CONCAT31(uVar14,bVar6) + bVar6;
              cVar4 = (char)((uint)pbVar29 >> 8);
              *pcVar9 = *pcVar9 - cVar4;
              *pbVar27 = *pbVar27 + cVar8;
              bVar5 = bVar6 - 0x17;
              cVar4 = cVar4 + *(byte *)((int)puVar31 + 0x46);
              pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),CONCAT11(cVar4,cVar8));
              *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
              *pcVar9 = *pcVar9 - cVar4;
              *pbVar27 = *pbVar27 + cVar8;
              bVar6 = bVar6 - 0x21;
              puVar19 = (uint *)CONCAT31(uVar14,bVar6);
              if (bVar5 < 10) break;
              *puVar19 = *puVar19 | (uint)puVar19;
              *(byte *)puVar19 = (byte)*puVar19 + bVar6;
              pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar18 >> 8) | pbVar27[0x6e],bVar7))
              ;
              bVar6 = bVar6 | (byte)*puVar19;
              *(char *)CONCAT31(uVar14,bVar6) = *(char *)CONCAT31(uVar14,bVar6) + bVar6;
              puVar19 = (uint *)CONCAT31(uVar14,bVar6 | *pbVar18);
              pbVar30 = pbVar28;
            }
          } while( true );
        }
        puVar32 = puVar31;
        if (CARRY1((byte)uVar13,bVar5)) goto code_r0x00404423;
code_r0x00404436:
        pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                   CONCAT11((char)((uint)pbVar22 >> 8) + pbVar22[-0x3d],
                                            (char)pbVar22));
      } while( true );
    }
    *pbVar27 = *pbVar27 + (char)pbVar18;
  } while( true );
}


