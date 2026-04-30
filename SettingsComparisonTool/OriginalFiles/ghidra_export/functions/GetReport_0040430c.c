/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040430c
 * Raw Name    : GetReport
 * Demangled   : GetReport
 * Prototype   : int GetReport(byte * param_1, uint * param_2, ushort param_3)
 * Local Vars  : pbVar27, pbVar26, puVar28, unaff_EDI, in_ES, puVar29, bVar30, in_AF, unaff_retaddr, bVar31, iStack_18, param_1, param_2, puStack_1c, param_3, puStack_c, pcStack_14, uVar1, puStack_8, bVar3, iVar2, bVar5, bVar4, cVar7, cVar6, piVar8, in_EAX, pcVar10, puVar9, pbVar12, uVar11, uVar14, uVar13, uVar16, uVar15, puVar18, pcVar17, unaff_EBX, bVar19, bVar21, pbVar20, unaff_ESI, unaff_EBP, puVar23, puVar22, pbVar25, pbVar24
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

int __fastcall GetReport(byte *param_1,uint *param_2,ushort param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char *in_EAX;
  undefined3 uVar13;
  int *piVar8;
  undefined1 *puVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  undefined2 uVar15;
  undefined2 uVar16;
  char *pcVar17;
  uint *puVar18;
  byte bVar19;
  byte bVar21;
  int unaff_EBX;
  char *unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  uint *unaff_EDI;
  uint *puVar28;
  uint *puVar29;
  ushort in_ES;
  byte in_AF;
  bool bVar30;
  bool bVar31;
  byte *unaff_retaddr;
  undefined1 *puStack_1c;
  int iStack_18;
  char *pcStack_14;
  uint *puStack_c;
  uint *puStack_8;
  uint3 uVar14;
  byte *pbVar20;
  
  bVar30 = false;
                    /* .NET CLR Managed Code */
  puVar28 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x60),
                                      (char)unaff_EBX));
  bVar4 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar4;
  uVar13 = (undefined3)((uint)in_EAX >> 8);
  bVar3 = bVar4 + 0x2a;
  puVar18 = (uint *)CONCAT31(uVar13,bVar3);
  puVar22 = (undefined4 *)(unaff_ESI + 1);
  if (bVar4 < 0xd6) {
    *puVar18 = *puVar18 | (uint)puVar18;
    if ((POPCOUNT(*puVar18 & 0xff) & 1U) == 0) {
      *(byte *)puVar18 = (char)*puVar18 + bVar3;
      func_0x2a4a4325();
      bVar3 = (byte)unaff_retaddr;
      *unaff_retaddr = *unaff_retaddr + bVar3;
      bVar4 = *unaff_retaddr;
      uVar14 = (uint3)((uint)unaff_retaddr >> 8);
      piVar8 = (int *)CONCAT31(uVar14,bVar3 - bVar4);
      puVar23 = (undefined4 *)((iStack_18 - *piVar8) - (uint)(bVar3 < *unaff_retaddr));
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      *(byte *)piVar8 = (char)*piVar8 + (bVar3 - bVar4);
      puVar9 = (undefined1 *)((uint)(uVar14 & 0x21100) << 8);
      *pcStack_14 = *pcStack_14 - (char)puStack_c;
      *(undefined1 *)puVar23 = *(undefined1 *)puVar23;
      uVar15 = SUB42(puStack_8,0);
      out(*puVar23,uVar15);
      unaff_EDI = (uint *)(puStack_1c + 1);
      *puStack_1c = *(undefined1 *)(puVar23 + 1);
      *puVar9 = *puVar9;
      out(*(undefined4 *)((int)puVar23 + 5),uVar15);
      *(char *)puStack_8 = (char)*puStack_8 + '%';
      unaff_EBP = (char *)((uint)pcStack_14 | *puStack_c);
      uVar11 = *unaff_EDI;
      out(*(undefined4 *)((int)puVar23 + 9),uVar15);
      *(char *)puStack_8 = (char)*puStack_8 + '%';
      bVar4 = (byte)uVar11 | *(byte *)((int)puVar23 + 0xd);
      out(*(undefined4 *)((int)puVar23 + 0xd),uVar15);
      cVar6 = bVar4 - *(char *)(CONCAT31(uVar14,bVar4) & 0x21100ff);
      pcVar10 = (char *)(CONCAT31(uVar14,cVar6) & 0x21100ff);
      *(char *)puStack_8 = (char)*puStack_8 + '%';
      unaff_EBP[0x70a0000] = unaff_EBP[0x70a0000] - (char)puStack_c;
      puVar22 = (undefined4 *)((int)puVar23 + 0x15);
      out(*(undefined4 *)((int)puVar23 + 0x11),uVar15);
      *pcVar10 = *pcVar10 + cVar6;
      param_1 = (byte *)CONCAT22(0x40,CONCAT11(bRam070adee6 | 0x43,0x26));
      puVar18 = (uint *)(CONCAT31(uVar14,cVar6 + -6) & 0x21100ff);
      param_2 = puStack_8;
      puVar28 = puStack_c;
    }
    else {
      uVar11 = *puVar18;
      puVar18 = (uint *)CONCAT31(uVar13,bVar3 + (char)*puVar18);
      *puVar18 = (uint)((int)puVar18 + (uint)CARRY1(bVar3,(byte)uVar11) + *puVar18);
    }
  }
  pbVar24 = (byte *)(puVar22 + 1);
  out(*puVar22,(short)param_2);
  pcVar17 = (char *)((int)param_2 + 1);
  *(char *)puVar18 = (char)*puVar18 + (char)puVar18;
  bVar19 = (byte)puVar28 | (byte)((uint)puVar18 >> 8);
  pbVar20 = (byte *)CONCAT31((int3)((uint)puVar28 >> 8),bVar19);
  uVar13 = (undefined3)((uint)puVar18 >> 8);
  bVar5 = (char)puVar18 - (char)*puVar18;
  bVar4 = *param_1;
  *param_1 = *param_1 + bVar5;
  *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5 + CARRY1(bVar4,bVar5);
  *pcVar17 = *pcVar17 + bVar5;
  *param_1 = *param_1 + (char)pcVar17;
  bVar4 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar19;
  bVar3 = 9 < (bVar5 & 0xf) | in_AF;
  bVar5 = bVar5 + bVar3 * -6;
  cVar6 = bVar5 + (0x9f < bVar5 | CARRY1(bVar4,bVar19) | bVar3 * (bVar5 < 6)) * -0x60;
  pcVar10 = (char *)CONCAT31(uVar13,cVar6);
  *pcVar17 = *pcVar17 + (char)param_1;
  *pcVar10 = *pcVar10 + cVar6;
  *pcVar10 = *pcVar10 + cVar6;
  puVar18 = (uint *)((int)param_2 + 2);
  uVar11 = CONCAT31(uVar13,cVar6 + *pbVar20) + 0x6128;
  uVar13 = (undefined3)(uVar11 >> 8);
  cVar6 = (char)uVar11 + *(char *)((int)unaff_EDI * 2 + 0x4000064);
  bVar5 = cVar6 - *(char *)CONCAT31(uVar13,cVar6);
  pbVar12 = (byte *)CONCAT31(uVar13,bVar5);
  bVar4 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar5;
  pbVar24 = pbVar24 + (-(uint)CARRY1(bVar4,bVar5) - *(int *)pbVar12);
  bVar5 = bVar5 + *pbVar12;
  pbVar12 = (byte *)CONCAT31(uVar13,bVar5);
  bVar4 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar5;
  *puVar18 = (uint)(pbVar12 + (uint)CARRY1(bVar4,bVar5) + *puVar18);
  cVar6 = (char)((uint)puVar18 >> 8);
  if ((POPCOUNT(*puVar18 & 0xff) & 1U) != 0) {
    cVar7 = bVar5 - *param_1;
    pbVar12 = (byte *)CONCAT31(uVar13,cVar7);
    *pbVar12 = *pbVar12 + cVar7 + (bVar5 < *param_1);
    *(byte *)puVar18 = *(byte *)puVar18 + cVar7;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + cVar6;
    puVar28 = unaff_EDI;
    goto code_r0x00404417;
  }
  *pbVar12 = *pbVar12 + bVar5;
  cVar7 = bVar5 + 0x28;
  pcVar10 = (char *)CONCAT31(uVar13,cVar7);
  uVar1 = in((short)puVar18);
  *unaff_EDI = uVar1;
  *pcVar10 = *pcVar10 + cVar7;
  bVar4 = pbVar20[(int)param_1];
  pcVar10[0x28] = pcVar10[0x28] + cVar6;
  bVar30 = (in_ES & 0x400) != 0;
  bVar3 = (in_ES & 0x10) != 0;
  *pcVar10 = *pcVar10 + cVar7;
  bVar4 = (byte)((uint)param_1 >> 8) | bVar4 | *(byte *)puVar18;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar4,(char)param_1));
  uVar15 = (undefined2)((uint)puVar28 >> 0x10);
  bVar21 = (char)((uint)puVar28 >> 8) + pbVar20[100];
  pbVar20 = (byte *)CONCAT22(uVar15,CONCAT11(bVar21,bVar19));
  *pcVar10 = *pcVar10 + cVar7;
  pbVar12 = (byte *)CONCAT31(uVar13,bVar5 + 0x50);
  *(char *)((int)param_2 + 0x23) = *(char *)((int)param_2 + 0x23) + cVar6;
  in_ES = 0;
  pbVar25 = pbVar12 + 2;
  *pbVar25 = *pbVar25 + cVar6;
  puVar28 = unaff_EDI + 1;
  if ((POPCOUNT(*pbVar25) & 1U) != 0) goto code_r0x00404439;
  *pbVar12 = *pbVar12 + bVar5 + 0x50;
  cVar6 = bVar5 + 0x78;
  pcVar10 = (char *)CONCAT31(uVar13,cVar6);
  bVar3 = (uVar11 & 0x1000) != 0;
  *pcVar10 = *pcVar10 + cVar6;
  puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),(byte)puVar18 | *pbVar24);
  pbVar20 = (byte *)CONCAT22(uVar15,CONCAT11(bVar21 | pbVar24[0x65],bVar19));
  *pcVar10 = *pcVar10 + cVar6;
  bVar5 = bVar5 + 0x9d;
  pcVar10 = (char *)CONCAT31(uVar13,bVar5);
  puVar18 = (uint *)((uint)puVar18 | *puVar18);
  *pcVar10 = *pcVar10 + bVar4;
  puVar28 = (uint *)((int)unaff_EDI + (uint)bVar30 * -2 + 5);
  *(byte *)(unaff_EDI + 1) = bVar5;
  *pcVar10 = *pcVar10 + bVar5;
  bVar5 = bVar5 | (byte)*puVar18;
  pbVar12 = (byte *)CONCAT31(uVar13,bVar5);
  if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00404454;
  *pbVar12 = *pbVar12 + bVar5;
  cVar6 = bVar5 + 2;
  pbVar12 = (byte *)CONCAT31(uVar13,cVar6);
  *unaff_EBP = *unaff_EBP - bVar19;
  *pbVar24 = *pbVar24 + cVar6;
  pbVar25 = pbVar24 + (uint)bVar30 * -8 + 4;
  out(*(undefined4 *)pbVar24,(short)puVar18);
  puVar29 = (uint *)((int)puVar28 + (uint)bVar30 * -2 + 1);
  pbVar24 = pbVar25 + (uint)bVar30 * -2 + 1;
  *(byte *)puVar28 = *pbVar25;
  *pbVar12 = *pbVar12 + cVar6;
  param_3 = in_ES;
  do {
    cVar7 = (char)((uint)param_1 >> 8);
    pbVar20[-0x21f60000] = pbVar20[-0x21f60000] - cVar7;
    uVar13 = (undefined3)((uint)pbVar12 >> 8);
    cVar6 = ((byte)pbVar12 | *pbVar24) - 6;
    piVar8 = (int *)CONCAT31(uVar13,cVar6);
    pcVar10 = (char *)((int)piVar8 * 2 + 0x2adc0a00);
    *pcVar10 = *pcVar10 - cVar7;
    *piVar8 = (int)(*piVar8 + (int)puVar18);
    *(char *)piVar8 = (char)*piVar8 + cVar6;
    bVar4 = cVar6 + (char)*piVar8;
    bVar3 = 9 < (bVar4 & 0xf) | bVar3;
    uVar11 = CONCAT31(uVar13,bVar4 + bVar3 * '\x06') & 0xffffff0f;
    pbVar12 = (byte *)CONCAT22((short)(uVar11 >> 0x10),
                               CONCAT11((char)((uint)pbVar12 >> 8) + bVar3,(char)uVar11));
    puVar28 = puVar29;
    in_ES = param_3;
code_r0x00404417:
    *pbVar24 = *pbVar24 + (char)((uint)pbVar12 >> 8);
    unaff_EBP = (char *)0x17000000;
    *(byte *)puVar18 = (byte)*puVar18 + (char)param_1;
    bVar5 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar5;
    bVar4 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar5;
    puVar29 = puVar28;
    if (!CARRY1(bVar4,bVar5)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(byte)pbVar12 | pbVar12[0x4000065]);
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),(char)pbVar20 - *pbVar24);
    bVar4 = *pbVar12;
    bVar5 = (byte)((uint)param_1 >> 8);
    cVar6 = (char)param_1;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar5 + *pbVar12,cVar6));
    iVar2 = *(int *)pbVar12;
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                               CONCAT11((char)((uint)puVar18 >> 8) - *pbVar24,(char)puVar18));
    pbVar12 = pbVar12 + *puVar18 + (uint)CARRY1(bVar5,bVar4) + iVar2;
    puVar28 = puVar29;
    if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar12 = *pbVar12 + (char)pbVar12;
        uVar13 = (undefined3)((uint)pbVar12 >> 8);
        cVar6 = (char)pbVar12 + 'o';
        pcVar10 = (char *)CONCAT31(uVar13,cVar6);
        *(char **)param_1 = pcVar10 + *(int *)param_1;
        *(byte *)puVar18 = (byte)*puVar18 + (char)param_1;
        bVar5 = cVar6 - *pcVar10;
        pbVar12 = (byte *)CONCAT31(uVar13,bVar5);
        *pbVar20 = *pbVar20 + (char)puVar18;
        *pbVar20 = *pbVar20 ^ bVar5;
        pbVar20[0x26000000] = pbVar20[0x26000000] + (char)((uint)param_1 >> 8);
        bVar4 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar5;
        *(byte **)(pbVar20 + 0xb) = pbVar24 + (uint)CARRY1(bVar4,bVar5) + *(int *)(pbVar20 + 0xb);
        *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
code_r0x00404454:
        pbVar12 = (byte *)((uint)pbVar12 | 0x1027309);
        uVar11 = *puVar18;
        bVar4 = (byte)param_1;
        uVar1 = *puVar18;
        *(byte *)puVar18 = (byte)*puVar18 + bVar4;
        if (SCARRY1((byte)uVar1,bVar4) != (char)(byte)*puVar18 < '\0') {
          *pbVar12 = *pbVar12 + (char)pbVar12;
          *pbVar24 = *pbVar24 + 1;
          puVar29 = (uint *)(CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + '\t') | 1);
          bVar3 = *pbVar24;
          bVar5 = (byte)puVar29;
          *pbVar24 = *pbVar24 + bVar5;
          if (CARRY1(bVar3,bVar5)) {
            *puVar29 = *puVar29 + (int)puVar29;
            puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                       CONCAT11((byte)((uint)puVar18 >> 8) | pbVar20[4],
                                                (char)puVar18));
          }
          else if (!CARRY1(bVar3,bVar5)) goto code_r0x00404473;
          *puVar29 = *puVar29 + (int)puVar29;
          param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),bVar4 | (byte)*puVar18);
code_r0x00404473:
          uVar15 = (undefined2)((uint)param_1 >> 0x10);
          cVar7 = (char)param_1;
          bVar3 = (char)((uint)param_1 >> 8) + (char)*puVar29;
          uVar11 = *puVar29;
          *pbVar20 = *pbVar20 + bVar3;
          pbVar12 = (byte *)((uint)puVar29 & uVar11 | *puVar28);
          pbVar26 = pbVar24 + (uint)bVar30 * -8 + 4;
          out(*(undefined4 *)pbVar24,(short)puVar18);
          *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
          bVar3 = bVar3 | *pbVar12;
          *pbVar20 = *pbVar20 + bVar3;
          uVar13 = (undefined3)((uint)pbVar12 >> 8);
          pcVar10 = (char *)CONCAT31(uVar13,0xea);
          *(uint *)(pbVar20 + -0x3d) = *(uint *)(pbVar20 + -0x3d) | (uint)puVar28;
          *pcVar10 = *pcVar10 + -0x16;
          pbVar24 = (byte *)CONCAT31(uVar13,0x59);
          *pbVar24 = *pbVar24 + 0x59;
          bVar3 = bVar3 | *pbVar24;
          pbVar25 = (byte *)CONCAT22(uVar15,CONCAT11(bVar3,cVar7));
          *pbVar25 = *pbVar25 | 0x59;
          *(byte *)puVar18 = (byte)*puVar18 + cVar7;
          *pbVar25 = *pbVar25 - cVar7;
          *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
          pbVar24 = pbVar26 + (uint)bVar30 * -8 + 4;
          out(*(undefined4 *)pbVar26,(short)puVar18);
          bVar4 = (byte)*puVar28 | 0x59 | *pbVar25;
          *(byte *)puVar18 = (byte)*puVar18 + cVar7;
          pcVar10 = (char *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                     CONCAT11((char)((uint)pbVar12 >> 8) - (char)pbVar20,bVar4));
          *pcVar10 = *pcVar10 + bVar4;
          cVar6 = (bVar4 | 8) - 2;
          piVar8 = (int *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6);
          bVar31 = (in_ES & 0x400) != 0;
          bVar30 = (in_ES & 0x10) != 0;
          *(char *)piVar8 = (char)*piVar8 + cVar6;
          uVar16 = CONCAT11((byte)((uint)puVar18 >> 8) | pbVar20[0xb],(char)puVar18);
          pcVar10 = (char *)CONCAT22((short)((uint)puVar18 >> 0x10),uVar16);
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          bVar3 = bVar3 | *(byte *)((int)puVar28 + -0x2a);
          *(char *)piVar8 = (char)*piVar8 + cVar6;
          pbVar26 = pbVar24 + (uint)bVar31 * -8 + 4;
          out(*(undefined4 *)pbVar24,uVar16);
          *pcVar10 = *pcVar10 + cVar7;
          out(*(undefined4 *)pbVar26,uVar16);
          *pcVar10 = *pcVar10 + cVar7;
          pbVar25 = (byte *)((uint)pcVar10 & 0xffffff00);
          bVar3 = bVar3 | pbVar25[CONCAT22(uVar15,CONCAT11(bVar3,cVar7))];
          pbVar12 = (byte *)CONCAT22(uVar15,CONCAT11(bVar3,cVar7));
          pbVar27 = pbVar26 + (uint)bVar31 * -8 + 4 + (uint)bVar31 * -8 + 4;
          out(*(undefined4 *)(pbVar26 + (uint)bVar31 * -8 + 4),(short)pbVar25);
          bVar4 = *pbVar12;
          puVar18 = (uint *)CONCAT31(0xf80a00,bVar4);
          *pbVar25 = *pbVar25 + cVar7;
          pbVar24 = pbVar27;
          if (*pbVar25 != 0) {
            *(byte *)puVar18 = (byte)*puVar18 + bVar4;
            pbVar12 = (byte *)CONCAT22(uVar15,CONCAT11(bVar3 + (byte)*puVar18,cVar7));
            *pbVar27 = *pbVar27;
            pbVar24 = pbVar27 + (uint)bVar31 * -8 + 4;
            out(*(undefined4 *)pbVar27,(short)pbVar25);
            puVar18 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar28 | *pbVar12);
          }
          *pbVar25 = *pbVar25 + (char)pbVar12;
          pbVar26 = pbVar25;
          if (*pbVar25 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar18 = (byte)*puVar18 + (byte)puVar18;
            pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + (byte)*puVar18);
            pbVar12[0x2a060000] = pbVar12[0x2a060000] - (char)((uint)pbVar25 >> 8);
            *pbVar20 = *pbVar20 + (char)pbVar25;
            *pbVar25 = *pbVar25 ^ (byte)puVar18;
            pbVar26 = pbVar25;
code_r0x004044ff:
            cVar6 = (char)((uint)pbVar12 >> 8);
            *pbVar26 = *pbVar26 + cVar6;
            uVar11 = *puVar18;
            bVar4 = (byte)puVar18;
            *(byte *)puVar18 = (byte)*puVar18 + bVar4;
            bVar3 = 9 < (bVar4 & 0xf) | bVar30;
            uVar13 = (undefined3)((uint)puVar18 >> 8);
            bVar5 = bVar4 + bVar3 * '\x06';
            bVar5 = bVar5 + (0x90 < (bVar5 & 0xf0) |
                            CARRY1((byte)uVar11,bVar4) | bVar3 * (0xf9 < bVar5)) * '`';
            pbVar25 = (byte *)CONCAT31(uVar13,bVar5);
            bVar4 = *pbVar25;
            *pbVar25 = *pbVar25 + bVar5;
            *(byte **)pbVar26 = pbVar25 + (uint)CARRY1(bVar4,bVar5) + *(int *)pbVar26;
            out(*(undefined4 *)pbVar24,(short)pbVar26);
            *pbVar25 = *pbVar25 + bVar5;
            bVar5 = bVar5 - 0xe;
            pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                       CONCAT11(cVar6 + *(byte *)((int)puVar28 + 0x3e),(char)pbVar12
                                               ));
            *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
            bVar3 = 9 < (bVar5 & 0xf) | bVar3;
            bVar5 = bVar5 + bVar3 * -6;
            bVar4 = 0x9f < bVar5 | bVar3 * (bVar5 < 6);
            puVar18 = (uint *)CONCAT31(uVar13,bVar5 + bVar4 * -0x60);
            pbVar26[0x5d] = pbVar26[0x5d] + (char)((uint)pbVar26 >> 8) + bVar4;
            *puVar18 = *puVar18 | (uint)puVar18;
            pbVar27 = pbVar24 + (uint)bVar31 * -8 + 4;
            while( true ) {
              bVar31 = (in_ES & 0x400) != 0;
              bVar30 = (in_ES & 0x10) != 0;
              *(byte *)puVar18 = (char)*puVar18 + (byte)puVar18;
              bVar5 = (byte)pbVar26 | *pbVar27;
              pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),bVar5);
              cVar6 = (char)pbVar12;
              *pbVar12 = *pbVar12 - cVar6;
              *puVar18 = (uint)(*puVar18 + (int)puVar18);
              uVar13 = (undefined3)((uint)puVar18 >> 8);
              bVar3 = (byte)puVar18 | *pbVar25;
              pbVar24 = pbVar27 + (uint)bVar31 * -8 + 4;
              out(*(undefined4 *)pbVar27,(short)pbVar25);
              *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
              cVar7 = (char)((uint)pbVar12 >> 8);
              *unaff_EBP = *unaff_EBP - cVar7;
              *pbVar25 = *pbVar25 + cVar6;
              bVar4 = bVar3 - 0x17;
              cVar7 = cVar7 + *(byte *)((int)puVar28 + 0x46);
              pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(cVar7,cVar6));
              *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
              *unaff_EBP = *unaff_EBP - cVar7;
              *pbVar25 = *pbVar25 + cVar6;
              bVar3 = bVar3 - 0x21;
              puVar18 = (uint *)CONCAT31(uVar13,bVar3);
              if (bVar4 < 10) break;
              *puVar18 = *puVar18 | (uint)puVar18;
              *(byte *)puVar18 = (byte)*puVar18 + bVar3;
              pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar26 >> 8) | pbVar25[0x6e],bVar5))
              ;
              bVar3 = bVar3 | (byte)*puVar18;
              *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
              puVar18 = (uint *)CONCAT31(uVar13,bVar3 | *pbVar26);
              pbVar27 = pbVar24;
            }
          } while( true );
        }
        puVar29 = puVar28;
        param_3 = in_ES;
        if (CARRY1((byte)uVar11,bVar4)) goto code_r0x00404423;
code_r0x00404436:
        pbVar20 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                   CONCAT11((char)((uint)pbVar20 >> 8) + pbVar20[-0x3d],
                                            (char)pbVar20));
      } while( true );
    }
    *pbVar24 = *pbVar24 + (char)pbVar12;
  } while( true );
}


