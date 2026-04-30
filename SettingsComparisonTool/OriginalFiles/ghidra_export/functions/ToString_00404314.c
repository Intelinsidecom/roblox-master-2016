/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404314
 * Raw Name    : ToString
 * Demangled   : ToString
 * Prototype   : int ToString(byte * param_1, uint * param_2, ushort param_3)
 * Local Vars  : puVar26, unaff_EDI, in_ES, puVar27, in_AF, in_CF, bVar29, bVar28, unaff_retaddr, bVar30, param_1, param_2, param_3, iStack_18, puStack_1c, puStack_c, pcStack_14, uVar1, puStack_8, bVar3, iVar2, cVar5, bVar4, in_EAX, cVar6, puVar8, piVar7, uVar10, pcVar9, uVar12, pbVar11, uVar14, uVar13, pcVar16, uVar15, bVar18, puVar17, pbVar19, unaff_EBX, unaff_EBP, bVar20, puVar21, unaff_ESI, pbVar23, pbVar22, pbVar25, pbVar24
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

int __fastcall ToString(byte *param_1,uint *param_2,ushort param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  uint *in_EAX;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined3 uVar13;
  uint uVar10;
  byte *pbVar11;
  undefined2 uVar14;
  undefined2 uVar15;
  char *pcVar16;
  uint *puVar17;
  byte bVar18;
  byte bVar20;
  uint *unaff_EBX;
  char *unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint *unaff_EDI;
  uint *puVar26;
  uint *puVar27;
  ushort in_ES;
  bool in_CF;
  byte in_AF;
  byte bVar28;
  bool bVar29;
  bool bVar30;
  byte *unaff_retaddr;
  undefined1 *puStack_1c;
  int iStack_18;
  char *pcStack_14;
  uint *puStack_c;
  uint *puStack_8;
  uint3 uVar12;
  byte *pbVar19;
  
  bVar29 = false;
                    /* .NET CLR Managed Code */
  if (!in_CF) {
    *in_EAX = *in_EAX | (uint)in_EAX;
    bVar3 = (byte)in_EAX;
    if ((POPCOUNT(*in_EAX & 0xff) & 1U) == 0) {
      *(byte *)in_EAX = (char)*in_EAX + bVar3;
      func_0x2a4a4325();
      bVar28 = (byte)unaff_retaddr;
      *unaff_retaddr = *unaff_retaddr + bVar28;
      bVar3 = *unaff_retaddr;
      uVar12 = (uint3)((uint)unaff_retaddr >> 8);
      piVar7 = (int *)CONCAT31(uVar12,bVar28 - bVar3);
      puVar21 = (undefined4 *)((iStack_18 - *piVar7) - (uint)(bVar28 < *unaff_retaddr));
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      *(byte *)piVar7 = (char)*piVar7 + (bVar28 - bVar3);
      puVar8 = (undefined1 *)((uint)(uVar12 & 0x21100) << 8);
      *pcStack_14 = *pcStack_14 - (char)puStack_c;
      *(undefined1 *)puVar21 = *(undefined1 *)puVar21;
      uVar14 = SUB42(puStack_8,0);
      out(*puVar21,uVar14);
      unaff_EDI = (uint *)(puStack_1c + 1);
      *puStack_1c = *(undefined1 *)(puVar21 + 1);
      *puVar8 = *puVar8;
      out(*(undefined4 *)((int)puVar21 + 5),uVar14);
      *(char *)puStack_8 = (char)*puStack_8 + '%';
      unaff_EBP = (char *)((uint)pcStack_14 | *puStack_c);
      uVar10 = *unaff_EDI;
      out(*(undefined4 *)((int)puVar21 + 9),uVar14);
      *(char *)puStack_8 = (char)*puStack_8 + '%';
      bVar3 = (byte)uVar10 | *(byte *)((int)puVar21 + 0xd);
      out(*(undefined4 *)((int)puVar21 + 0xd),uVar14);
      cVar5 = bVar3 - *(char *)(CONCAT31(uVar12,bVar3) & 0x21100ff);
      pcVar9 = (char *)(CONCAT31(uVar12,cVar5) & 0x21100ff);
      *(char *)puStack_8 = (char)*puStack_8 + '%';
      unaff_EBP[0x70a0000] = unaff_EBP[0x70a0000] - (char)puStack_c;
      unaff_ESI = (undefined4 *)((int)puVar21 + 0x15);
      out(*(undefined4 *)((int)puVar21 + 0x11),uVar14);
      *pcVar9 = *pcVar9 + cVar5;
      param_1 = (byte *)CONCAT22(0x40,CONCAT11(bRam070adee6 | 0x43,0x26));
      in_EAX = (uint *)(CONCAT31(uVar12,cVar5 + -6) & 0x21100ff);
      param_2 = puStack_8;
      unaff_EBX = puStack_c;
    }
    else {
      uVar10 = *in_EAX;
      in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar3 + (char)*in_EAX);
      *in_EAX = (uint)((int)in_EAX + (uint)CARRY1(bVar3,(byte)uVar10) + *in_EAX);
    }
  }
  pbVar22 = (byte *)(unaff_ESI + 1);
  out(*unaff_ESI,(short)param_2);
  pcVar16 = (char *)((int)param_2 + 1);
  *(char *)in_EAX = (char)*in_EAX + (char)in_EAX;
  bVar18 = (byte)unaff_EBX | (byte)((uint)in_EAX >> 8);
  pbVar19 = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar18);
  uVar13 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = (char)in_EAX - (char)*in_EAX;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar4;
  *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4 + CARRY1(bVar3,bVar4);
  *pcVar16 = *pcVar16 + bVar4;
  *param_1 = *param_1 + (char)pcVar16;
  bVar3 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar18;
  bVar28 = 9 < (bVar4 & 0xf) | in_AF;
  bVar4 = bVar4 + bVar28 * -6;
  cVar5 = bVar4 + (0x9f < bVar4 | CARRY1(bVar3,bVar18) | bVar28 * (bVar4 < 6)) * -0x60;
  pcVar9 = (char *)CONCAT31(uVar13,cVar5);
  *pcVar16 = *pcVar16 + (char)param_1;
  *pcVar9 = *pcVar9 + cVar5;
  *pcVar9 = *pcVar9 + cVar5;
  puVar17 = (uint *)((int)param_2 + 2);
  uVar10 = CONCAT31(uVar13,cVar5 + *pbVar19) + 0x6128;
  uVar13 = (undefined3)(uVar10 >> 8);
  cVar5 = (char)uVar10 + *(char *)((int)unaff_EDI * 2 + 0x4000064);
  bVar4 = cVar5 - *(char *)CONCAT31(uVar13,cVar5);
  pbVar11 = (byte *)CONCAT31(uVar13,bVar4);
  bVar3 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  pbVar22 = pbVar22 + (-(uint)CARRY1(bVar3,bVar4) - *(int *)pbVar11);
  bVar4 = bVar4 + *pbVar11;
  pbVar11 = (byte *)CONCAT31(uVar13,bVar4);
  bVar3 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  *puVar17 = (uint)(pbVar11 + (uint)CARRY1(bVar3,bVar4) + *puVar17);
  cVar5 = (char)((uint)puVar17 >> 8);
  if ((POPCOUNT(*puVar17 & 0xff) & 1U) != 0) {
    cVar6 = bVar4 - *param_1;
    pbVar11 = (byte *)CONCAT31(uVar13,cVar6);
    *pbVar11 = *pbVar11 + cVar6 + (bVar4 < *param_1);
    *(byte *)puVar17 = *(byte *)puVar17 + cVar6;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + cVar5;
    puVar26 = unaff_EDI;
    goto code_r0x00404417;
  }
  *pbVar11 = *pbVar11 + bVar4;
  cVar6 = bVar4 + 0x28;
  pcVar9 = (char *)CONCAT31(uVar13,cVar6);
  uVar1 = in((short)puVar17);
  *unaff_EDI = uVar1;
  *pcVar9 = *pcVar9 + cVar6;
  bVar3 = pbVar19[(int)param_1];
  pcVar9[0x28] = pcVar9[0x28] + cVar5;
  bVar29 = (in_ES & 0x400) != 0;
  bVar28 = (in_ES & 0x10) != 0;
  *pcVar9 = *pcVar9 + cVar6;
  bVar3 = (byte)((uint)param_1 >> 8) | bVar3 | *(byte *)puVar17;
  param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar3,(char)param_1));
  uVar14 = (undefined2)((uint)unaff_EBX >> 0x10);
  bVar20 = (char)((uint)unaff_EBX >> 8) + pbVar19[100];
  pbVar19 = (byte *)CONCAT22(uVar14,CONCAT11(bVar20,bVar18));
  *pcVar9 = *pcVar9 + cVar6;
  pbVar11 = (byte *)CONCAT31(uVar13,bVar4 + 0x50);
  *(char *)((int)param_2 + 0x23) = *(char *)((int)param_2 + 0x23) + cVar5;
  in_ES = 0;
  pbVar23 = pbVar11 + 2;
  *pbVar23 = *pbVar23 + cVar5;
  puVar26 = unaff_EDI + 1;
  if ((POPCOUNT(*pbVar23) & 1U) != 0) goto code_r0x00404439;
  *pbVar11 = *pbVar11 + bVar4 + 0x50;
  cVar5 = bVar4 + 0x78;
  pcVar9 = (char *)CONCAT31(uVar13,cVar5);
  bVar28 = (uVar10 & 0x1000) != 0;
  *pcVar9 = *pcVar9 + cVar5;
  puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),(byte)puVar17 | *pbVar22);
  pbVar19 = (byte *)CONCAT22(uVar14,CONCAT11(bVar20 | pbVar22[0x65],bVar18));
  *pcVar9 = *pcVar9 + cVar5;
  bVar4 = bVar4 + 0x9d;
  pcVar9 = (char *)CONCAT31(uVar13,bVar4);
  puVar17 = (uint *)((uint)puVar17 | *puVar17);
  *pcVar9 = *pcVar9 + bVar3;
  puVar26 = (uint *)((int)unaff_EDI + (uint)bVar29 * -2 + 5);
  *(byte *)(unaff_EDI + 1) = bVar4;
  *pcVar9 = *pcVar9 + bVar4;
  bVar4 = bVar4 | (byte)*puVar17;
  pbVar11 = (byte *)CONCAT31(uVar13,bVar4);
  if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00404454;
  *pbVar11 = *pbVar11 + bVar4;
  cVar5 = bVar4 + 2;
  pbVar11 = (byte *)CONCAT31(uVar13,cVar5);
  *unaff_EBP = *unaff_EBP - bVar18;
  *pbVar22 = *pbVar22 + cVar5;
  pbVar23 = pbVar22 + (uint)bVar29 * -8 + 4;
  out(*(undefined4 *)pbVar22,(short)puVar17);
  puVar27 = (uint *)((int)puVar26 + (uint)bVar29 * -2 + 1);
  pbVar22 = pbVar23 + (uint)bVar29 * -2 + 1;
  *(byte *)puVar26 = *pbVar23;
  *pbVar11 = *pbVar11 + cVar5;
  param_3 = in_ES;
  do {
    cVar6 = (char)((uint)param_1 >> 8);
    pbVar19[-0x21f60000] = pbVar19[-0x21f60000] - cVar6;
    uVar13 = (undefined3)((uint)pbVar11 >> 8);
    cVar5 = ((byte)pbVar11 | *pbVar22) - 6;
    piVar7 = (int *)CONCAT31(uVar13,cVar5);
    pcVar9 = (char *)((int)piVar7 * 2 + 0x2adc0a00);
    *pcVar9 = *pcVar9 - cVar6;
    *piVar7 = (int)(*piVar7 + (int)puVar17);
    *(char *)piVar7 = (char)*piVar7 + cVar5;
    bVar3 = cVar5 + (char)*piVar7;
    bVar28 = 9 < (bVar3 & 0xf) | bVar28;
    uVar10 = CONCAT31(uVar13,bVar3 + bVar28 * '\x06') & 0xffffff0f;
    pbVar11 = (byte *)CONCAT22((short)(uVar10 >> 0x10),
                               CONCAT11((char)((uint)pbVar11 >> 8) + bVar28,(char)uVar10));
    puVar26 = puVar27;
    in_ES = param_3;
code_r0x00404417:
    *pbVar22 = *pbVar22 + (char)((uint)pbVar11 >> 8);
    unaff_EBP = (char *)0x17000000;
    *(byte *)puVar17 = (byte)*puVar17 + (char)param_1;
    bVar4 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar4;
    bVar3 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar4;
    puVar27 = puVar26;
    if (!CARRY1(bVar3,bVar4)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar11 = *pbVar11 + (byte)pbVar11;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 | pbVar11[0x4000065]);
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),(char)pbVar19 - *pbVar22);
    bVar3 = *pbVar11;
    bVar4 = (byte)((uint)param_1 >> 8);
    cVar5 = (char)param_1;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar4 + *pbVar11,cVar5));
    iVar2 = *(int *)pbVar11;
    *(byte *)puVar17 = (byte)*puVar17 + cVar5;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11((char)((uint)puVar17 >> 8) - *pbVar22,(char)puVar17));
    pbVar11 = pbVar11 + *puVar17 + (uint)CARRY1(bVar4,bVar3) + iVar2;
    puVar26 = puVar27;
    if ((POPCOUNT((uint)pbVar11 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar11 = *pbVar11 + (char)pbVar11;
        uVar13 = (undefined3)((uint)pbVar11 >> 8);
        cVar5 = (char)pbVar11 + 'o';
        pcVar9 = (char *)CONCAT31(uVar13,cVar5);
        *(char **)param_1 = pcVar9 + *(int *)param_1;
        *(byte *)puVar17 = (byte)*puVar17 + (char)param_1;
        bVar4 = cVar5 - *pcVar9;
        pbVar11 = (byte *)CONCAT31(uVar13,bVar4);
        *pbVar19 = *pbVar19 + (char)puVar17;
        *pbVar19 = *pbVar19 ^ bVar4;
        pbVar19[0x26000000] = pbVar19[0x26000000] + (char)((uint)param_1 >> 8);
        bVar3 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar4;
        *(byte **)(pbVar19 + 0xb) = pbVar22 + (uint)CARRY1(bVar3,bVar4) + *(int *)(pbVar19 + 0xb);
        *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
code_r0x00404454:
        pbVar11 = (byte *)((uint)pbVar11 | 0x1027309);
        uVar10 = *puVar17;
        bVar3 = (byte)param_1;
        uVar1 = *puVar17;
        *(byte *)puVar17 = (byte)*puVar17 + bVar3;
        if (SCARRY1((byte)uVar1,bVar3) != (char)(byte)*puVar17 < '\0') {
          *pbVar11 = *pbVar11 + (char)pbVar11;
          *pbVar22 = *pbVar22 + 1;
          puVar27 = (uint *)(CONCAT31((int3)((uint)pbVar11 >> 8),(char)pbVar11 + '\t') | 1);
          bVar28 = *pbVar22;
          bVar4 = (byte)puVar27;
          *pbVar22 = *pbVar22 + bVar4;
          if (CARRY1(bVar28,bVar4)) {
            *puVar27 = *puVar27 + (int)puVar27;
            puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                       CONCAT11((byte)((uint)puVar17 >> 8) | pbVar19[4],
                                                (char)puVar17));
          }
          else if (!CARRY1(bVar28,bVar4)) goto code_r0x00404473;
          *puVar27 = *puVar27 + (int)puVar27;
          param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),bVar3 | (byte)*puVar17);
code_r0x00404473:
          uVar14 = (undefined2)((uint)param_1 >> 0x10);
          cVar6 = (char)param_1;
          bVar28 = (char)((uint)param_1 >> 8) + (char)*puVar27;
          uVar10 = *puVar27;
          *pbVar19 = *pbVar19 + bVar28;
          pbVar11 = (byte *)((uint)puVar27 & uVar10 | *puVar26);
          pbVar24 = pbVar22 + (uint)bVar29 * -8 + 4;
          out(*(undefined4 *)pbVar22,(short)puVar17);
          *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
          bVar28 = bVar28 | *pbVar11;
          *pbVar19 = *pbVar19 + bVar28;
          uVar13 = (undefined3)((uint)pbVar11 >> 8);
          pcVar9 = (char *)CONCAT31(uVar13,0xea);
          *(uint *)(pbVar19 + -0x3d) = *(uint *)(pbVar19 + -0x3d) | (uint)puVar26;
          *pcVar9 = *pcVar9 + -0x16;
          pbVar22 = (byte *)CONCAT31(uVar13,0x59);
          *pbVar22 = *pbVar22 + 0x59;
          bVar28 = bVar28 | *pbVar22;
          pbVar23 = (byte *)CONCAT22(uVar14,CONCAT11(bVar28,cVar6));
          *pbVar23 = *pbVar23 | 0x59;
          *(byte *)puVar17 = (byte)*puVar17 + cVar6;
          *pbVar23 = *pbVar23 - cVar6;
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          pbVar22 = pbVar24 + (uint)bVar29 * -8 + 4;
          out(*(undefined4 *)pbVar24,(short)puVar17);
          bVar3 = (byte)*puVar26 | 0x59 | *pbVar23;
          *(byte *)puVar17 = (byte)*puVar17 + cVar6;
          pcVar9 = (char *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                                    CONCAT11((char)((uint)pbVar11 >> 8) - (char)pbVar19,bVar3));
          *pcVar9 = *pcVar9 + bVar3;
          cVar5 = (bVar3 | 8) - 2;
          piVar7 = (int *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5);
          bVar30 = (in_ES & 0x400) != 0;
          bVar29 = (in_ES & 0x10) != 0;
          *(char *)piVar7 = (char)*piVar7 + cVar5;
          uVar15 = CONCAT11((byte)((uint)puVar17 >> 8) | pbVar19[0xb],(char)puVar17);
          pcVar9 = (char *)CONCAT22((short)((uint)puVar17 >> 0x10),uVar15);
          *piVar7 = (int)(*piVar7 + (int)piVar7);
          bVar28 = bVar28 | *(byte *)((int)puVar26 + -0x2a);
          *(char *)piVar7 = (char)*piVar7 + cVar5;
          pbVar24 = pbVar22 + (uint)bVar30 * -8 + 4;
          out(*(undefined4 *)pbVar22,uVar15);
          *pcVar9 = *pcVar9 + cVar6;
          out(*(undefined4 *)pbVar24,uVar15);
          *pcVar9 = *pcVar9 + cVar6;
          pbVar23 = (byte *)((uint)pcVar9 & 0xffffff00);
          bVar28 = bVar28 | pbVar23[CONCAT22(uVar14,CONCAT11(bVar28,cVar6))];
          pbVar11 = (byte *)CONCAT22(uVar14,CONCAT11(bVar28,cVar6));
          pbVar25 = pbVar24 + (uint)bVar30 * -8 + 4 + (uint)bVar30 * -8 + 4;
          out(*(undefined4 *)(pbVar24 + (uint)bVar30 * -8 + 4),(short)pbVar23);
          bVar3 = *pbVar11;
          puVar17 = (uint *)CONCAT31(0xf80a00,bVar3);
          *pbVar23 = *pbVar23 + cVar6;
          pbVar22 = pbVar25;
          if (*pbVar23 != 0) {
            *(byte *)puVar17 = (byte)*puVar17 + bVar3;
            pbVar11 = (byte *)CONCAT22(uVar14,CONCAT11(bVar28 + (byte)*puVar17,cVar6));
            *pbVar25 = *pbVar25;
            pbVar22 = pbVar25 + (uint)bVar30 * -8 + 4;
            out(*(undefined4 *)pbVar25,(short)pbVar23);
            puVar17 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar26 | *pbVar11);
          }
          *pbVar23 = *pbVar23 + (char)pbVar11;
          pbVar24 = pbVar23;
          if (*pbVar23 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar17;
            pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(char)pbVar11 + (byte)*puVar17);
            pbVar11[0x2a060000] = pbVar11[0x2a060000] - (char)((uint)pbVar23 >> 8);
            *pbVar19 = *pbVar19 + (char)pbVar23;
            *pbVar23 = *pbVar23 ^ (byte)puVar17;
            pbVar24 = pbVar23;
code_r0x004044ff:
            cVar5 = (char)((uint)pbVar11 >> 8);
            *pbVar24 = *pbVar24 + cVar5;
            uVar10 = *puVar17;
            bVar3 = (byte)puVar17;
            *(byte *)puVar17 = (byte)*puVar17 + bVar3;
            bVar28 = 9 < (bVar3 & 0xf) | bVar29;
            uVar13 = (undefined3)((uint)puVar17 >> 8);
            bVar4 = bVar3 + bVar28 * '\x06';
            bVar4 = bVar4 + (0x90 < (bVar4 & 0xf0) |
                            CARRY1((byte)uVar10,bVar3) | bVar28 * (0xf9 < bVar4)) * '`';
            pbVar23 = (byte *)CONCAT31(uVar13,bVar4);
            bVar3 = *pbVar23;
            *pbVar23 = *pbVar23 + bVar4;
            *(byte **)pbVar24 = pbVar23 + (uint)CARRY1(bVar3,bVar4) + *(int *)pbVar24;
            out(*(undefined4 *)pbVar22,(short)pbVar24);
            *pbVar23 = *pbVar23 + bVar4;
            bVar4 = bVar4 - 0xe;
            pbVar11 = (byte *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                                       CONCAT11(cVar5 + *(byte *)((int)puVar26 + 0x3e),(char)pbVar11
                                               ));
            *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
            bVar28 = 9 < (bVar4 & 0xf) | bVar28;
            bVar4 = bVar4 + bVar28 * -6;
            bVar3 = 0x9f < bVar4 | bVar28 * (bVar4 < 6);
            puVar17 = (uint *)CONCAT31(uVar13,bVar4 + bVar3 * -0x60);
            pbVar24[0x5d] = pbVar24[0x5d] + (char)((uint)pbVar24 >> 8) + bVar3;
            *puVar17 = *puVar17 | (uint)puVar17;
            pbVar25 = pbVar22 + (uint)bVar30 * -8 + 4;
            while( true ) {
              bVar30 = (in_ES & 0x400) != 0;
              bVar29 = (in_ES & 0x10) != 0;
              *(byte *)puVar17 = (char)*puVar17 + (byte)puVar17;
              bVar4 = (byte)pbVar24 | *pbVar25;
              pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar4);
              cVar5 = (char)pbVar11;
              *pbVar11 = *pbVar11 - cVar5;
              *puVar17 = (uint)(*puVar17 + (int)puVar17);
              uVar13 = (undefined3)((uint)puVar17 >> 8);
              bVar28 = (byte)puVar17 | *pbVar23;
              pbVar22 = pbVar25 + (uint)bVar30 * -8 + 4;
              out(*(undefined4 *)pbVar25,(short)pbVar23);
              *(char *)CONCAT31(uVar13,bVar28) = *(char *)CONCAT31(uVar13,bVar28) + bVar28;
              cVar6 = (char)((uint)pbVar11 >> 8);
              *unaff_EBP = *unaff_EBP - cVar6;
              *pbVar23 = *pbVar23 + cVar5;
              bVar3 = bVar28 - 0x17;
              cVar6 = cVar6 + *(byte *)((int)puVar26 + 0x46);
              pbVar11 = (byte *)CONCAT22((short)((uint)pbVar11 >> 0x10),CONCAT11(cVar6,cVar5));
              *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
              *unaff_EBP = *unaff_EBP - cVar6;
              *pbVar23 = *pbVar23 + cVar5;
              bVar28 = bVar28 - 0x21;
              puVar17 = (uint *)CONCAT31(uVar13,bVar28);
              if (bVar3 < 10) break;
              *puVar17 = *puVar17 | (uint)puVar17;
              *(byte *)puVar17 = (byte)*puVar17 + bVar28;
              pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar24 >> 8) | pbVar23[0x6e],bVar4))
              ;
              bVar28 = bVar28 | (byte)*puVar17;
              *(char *)CONCAT31(uVar13,bVar28) = *(char *)CONCAT31(uVar13,bVar28) + bVar28;
              puVar17 = (uint *)CONCAT31(uVar13,bVar28 | *pbVar24);
              pbVar25 = pbVar22;
            }
          } while( true );
        }
        puVar27 = puVar26;
        param_3 = in_ES;
        if (CARRY1((byte)uVar10,bVar3)) goto code_r0x00404423;
code_r0x00404436:
        pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                   CONCAT11((char)((uint)pbVar19 >> 8) + pbVar19[-0x3d],
                                            (char)pbVar19));
      } while( true );
    }
    *pbVar22 = *pbVar22 + (char)pbVar11;
  } while( true );
}


