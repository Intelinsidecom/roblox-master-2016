/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040433c
 * Raw Name    : PrintReport
 * Demangled   : PrintReport
 * Prototype   : int PrintReport(undefined4 param_1, uint * param_2)
 * Local Vars  : uStack_8, uVar1, pcStack_4, cVar3, bVar2, cVar5, bVar4, pcVar6, in_EAX, piVar8, uVar7, pbVar10, pbVar9, cVar12, uVar11, uVar14, iVar13, pcVar16, uVar15, bVar18, puVar17, pbVar19, unaff_EBX, pcVar21, bVar20, pbVar22, unaff_ESI, pbVar24, pbVar23, param_1, puVar25, param_2, unaff_EDI, in_ES, puVar26, bVar27, in_AF, bVar29, bVar28, unaff_retaddr
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

int __fastcall PrintReport(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  char *in_EAX;
  undefined3 uVar11;
  uint uVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  char cVar12;
  int iVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  char *pcVar16;
  uint *puVar17;
  byte bVar18;
  byte bVar20;
  uint *unaff_EBX;
  char *pcVar21;
  undefined4 *unaff_ESI;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 *unaff_EDI;
  uint *puVar25;
  uint *puVar26;
  ushort in_ES;
  byte in_AF;
  byte bVar27;
  bool bVar28;
  bool bVar29;
  uint unaff_retaddr;
  ushort uStack_8;
  char *pcStack_4;
  char *pcVar6;
  byte *pbVar19;
  
  bVar28 = false;
                    /* .NET CLR Managed Code */
  cVar5 = *in_EAX;
  cVar12 = (char)param_1;
  cVar3 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar3;
  uVar15 = SUB42(param_2,0);
  out(*unaff_ESI,uVar15);
  puVar25 = (uint *)(unaff_EDI + 1);
  *unaff_EDI = *(undefined1 *)(unaff_ESI + 1);
  *in_EAX = *in_EAX + cVar3;
  out(*(undefined4 *)((int)unaff_ESI + 5),uVar15);
  *(char *)param_2 = (char)*param_2 + cVar12;
  pcVar21 = (char *)(unaff_retaddr | *unaff_EBX);
  uVar7 = *puVar25;
  uVar11 = (undefined3)((uint)in_EAX >> 8);
  out(*(undefined4 *)((int)unaff_ESI + 9),uVar15);
  *(char *)param_2 = (char)*param_2 + cVar12;
  bVar2 = cVar3 + (byte)uVar7 | *(byte *)((int)unaff_ESI + 0xd);
  out(*(undefined4 *)((int)unaff_ESI + 0xd),uVar15);
  cVar3 = bVar2 - *(char *)CONCAT31(uVar11,bVar2);
  *(char *)param_2 = (char)*param_2 + cVar12;
  pcVar21[0x70a0000] = pcVar21[0x70a0000] - (byte)unaff_EBX;
  out(*(undefined4 *)((int)unaff_ESI + 0x11),uVar15);
  iVar13 = CONCAT22((short)((uint)param_1 >> 0x10),
                    CONCAT11((char)((uint)param_1 >> 8) + cVar5,cVar12)) + 1;
  *(char *)CONCAT31(uVar11,cVar3) = *(char *)CONCAT31(uVar11,cVar3) + cVar3;
  uVar14 = (undefined2)((uint)iVar13 >> 0x10);
  cVar12 = (char)iVar13;
  bRam070adee6 = (byte)((uint)iVar13 >> 8) | bRam070adee6;
  pbVar10 = (byte *)CONCAT22(uVar14,CONCAT11(bRam070adee6,cVar12));
  cVar3 = cVar3 + -6;
  pcVar6 = (char *)CONCAT31(uVar11,cVar3);
  pbVar22 = (byte *)((int)unaff_ESI + 0x19);
  out(*(undefined4 *)((int)unaff_ESI + 0x15),uVar15);
  pcVar16 = (char *)((int)param_2 + 1);
  *pcVar6 = *pcVar6 + cVar3;
  bVar18 = (byte)unaff_EBX | (byte)((uint)in_EAX >> 8);
  pbVar19 = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar18);
  bVar4 = cVar3 - *pcVar6;
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4 + CARRY1(bVar2,bVar4);
  *pcVar16 = *pcVar16 + bVar4;
  *pbVar10 = *pbVar10 + (char)pcVar16;
  bVar2 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar18;
  bVar27 = 9 < (bVar4 & 0xf) | in_AF;
  bVar4 = bVar4 + bVar27 * -6;
  cVar5 = bVar4 + (0x9f < bVar4 | CARRY1(bVar2,bVar18) | bVar27 * (bVar4 < 6)) * -0x60;
  pcVar6 = (char *)CONCAT31(uVar11,cVar5);
  *pcVar16 = *pcVar16 + cVar12;
  *pcVar6 = *pcVar6 + cVar5;
  *pcVar6 = *pcVar6 + cVar5;
  puVar17 = (uint *)((int)param_2 + 2);
  uVar7 = CONCAT31(uVar11,cVar5 + *pbVar19) + 0x6128;
  pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_ES);
  uVar11 = (undefined3)(uVar7 >> 8);
  cVar5 = (char)uVar7 + *(char *)((int)puVar25 * 2 + 0x4000064);
  bVar4 = cVar5 - *(char *)CONCAT31(uVar11,cVar5);
  pbVar9 = (byte *)CONCAT31(uVar11,bVar4);
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar4;
  pbVar22 = pbVar22 + (-(uint)CARRY1(bVar2,bVar4) - *(int *)pbVar9);
  bVar4 = bVar4 + *pbVar9;
  pbVar9 = (byte *)CONCAT31(uVar11,bVar4);
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar4;
  *puVar17 = (uint)(pbVar9 + (uint)CARRY1(bVar2,bVar4) + *puVar17);
  cVar5 = (char)((uint)puVar17 >> 8);
  if ((POPCOUNT(*puVar17 & 0xff) & 1U) != 0) {
    cVar3 = bVar4 - *pbVar10;
    pbVar9 = (byte *)CONCAT31(uVar11,cVar3);
    *pbVar9 = *pbVar9 + cVar3 + (bVar4 < *pbVar10);
    *(byte *)puVar17 = *(byte *)puVar17 + cVar3;
    *(byte *)puVar25 = (byte)*puVar25 + cVar5;
    uStack_8 = in_ES;
    goto code_r0x00404417;
  }
  *pbVar9 = *pbVar9 + bVar4;
  cVar3 = bVar4 + 0x28;
  pcVar6 = (char *)CONCAT31(uVar11,cVar3);
  uVar1 = in((short)puVar17);
  *puVar25 = uVar1;
  *pcVar6 = *pcVar6 + cVar3;
  bVar2 = pbVar19[(int)pbVar10];
  pcVar6[0x28] = pcVar6[0x28] + cVar5;
  bVar28 = (in_ES & 0x400) != 0;
  bVar27 = (in_ES & 0x10) != 0;
  *pcVar6 = *pcVar6 + cVar3;
  bVar2 = bRam070adee6 | bVar2 | *(byte *)puVar17;
  pbVar10 = (byte *)CONCAT22(uVar14,CONCAT11(bVar2,cVar12));
  uVar14 = (undefined2)((uint)unaff_EBX >> 0x10);
  bVar20 = (char)((uint)unaff_EBX >> 8) + pbVar19[100];
  pbVar19 = (byte *)CONCAT22(uVar14,CONCAT11(bVar20,bVar18));
  *pcVar6 = *pcVar6 + cVar3;
  pbVar9 = (byte *)CONCAT31(uVar11,bVar4 + 0x50);
  *(char *)((int)param_2 + 0x23) = *(char *)((int)param_2 + 0x23) + cVar5;
  uStack_8 = 0;
  pbVar23 = pbVar9 + 2;
  *pbVar23 = *pbVar23 + cVar5;
  puVar25 = (uint *)(unaff_EDI + 5);
  if ((POPCOUNT(*pbVar23) & 1U) != 0) goto code_r0x00404439;
  *pbVar9 = *pbVar9 + bVar4 + 0x50;
  cVar5 = bVar4 + 0x78;
  pcVar6 = (char *)CONCAT31(uVar11,cVar5);
  bVar27 = (uVar7 & 0x1000) != 0;
  *pcVar6 = *pcVar6 + cVar5;
  puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),(byte)puVar17 | *pbVar22);
  pbVar19 = (byte *)CONCAT22(uVar14,CONCAT11(bVar20 | pbVar22[0x65],bVar18));
  *pcVar6 = *pcVar6 + cVar5;
  bVar4 = bVar4 + 0x9d;
  pcVar6 = (char *)CONCAT31(uVar11,bVar4);
  puVar17 = (uint *)((uint)puVar17 | *puVar17);
  *pcVar6 = *pcVar6 + bVar2;
  puVar25 = (uint *)(unaff_EDI + (uint)bVar28 * -2 + 6);
  unaff_EDI[5] = bVar4;
  *pcVar6 = *pcVar6 + bVar4;
  bVar4 = bVar4 | (byte)*puVar17;
  pbVar9 = (byte *)CONCAT31(uVar11,bVar4);
  if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00404454;
  *pbVar9 = *pbVar9 + bVar4;
  cVar5 = bVar4 + 2;
  pbVar9 = (byte *)CONCAT31(uVar11,cVar5);
  *pcVar21 = *pcVar21 - bVar18;
  *pbVar22 = *pbVar22 + cVar5;
  pbVar23 = pbVar22 + (uint)bVar28 * -8 + 4;
  out(*(undefined4 *)pbVar22,(short)puVar17);
  puVar26 = (uint *)((int)puVar25 + (uint)bVar28 * -2 + 1);
  pbVar22 = pbVar23 + (uint)bVar28 * -2 + 1;
  *(byte *)puVar25 = *pbVar23;
  *pbVar9 = *pbVar9 + cVar5;
  do {
    cVar3 = (char)((uint)pbVar10 >> 8);
    pbVar19[-0x21f60000] = pbVar19[-0x21f60000] - cVar3;
    uVar11 = (undefined3)((uint)pbVar9 >> 8);
    cVar5 = ((byte)pbVar9 | *pbVar22) - 6;
    piVar8 = (int *)CONCAT31(uVar11,cVar5);
    uStack_8 = 0;
    pcVar21 = (char *)((int)piVar8 * 2 + 0x2adc0a00);
    *pcVar21 = *pcVar21 - cVar3;
    *piVar8 = (int)(*piVar8 + (int)puVar17);
    *(char *)piVar8 = (char)*piVar8 + cVar5;
    bVar2 = cVar5 + (char)*piVar8;
    bVar27 = 9 < (bVar2 & 0xf) | bVar27;
    uVar7 = CONCAT31(uVar11,bVar2 + bVar27 * '\x06') & 0xffffff0f;
    pbVar9 = (byte *)CONCAT22((short)(uVar7 >> 0x10),
                              CONCAT11((char)((uint)pbVar9 >> 8) + bVar27,(char)uVar7));
    puVar25 = puVar26;
code_r0x00404417:
    *pbVar22 = *pbVar22 + (char)((uint)pbVar9 >> 8);
    *(byte *)puVar17 = (byte)*puVar17 + (char)pbVar10;
    bVar4 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    bVar2 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    pcVar21 = pcStack_4;
    puVar26 = puVar25;
    if (!CARRY1(bVar2,bVar4)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar9 = *pbVar9 + (byte)pbVar9;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 | pbVar9[0x4000065]);
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),(char)pbVar19 - *pbVar22);
    bVar2 = *pbVar9;
    bVar4 = (byte)((uint)pbVar10 >> 8);
    cVar5 = (char)pbVar10;
    pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),CONCAT11(bVar4 + *pbVar9,cVar5));
    iVar13 = *(int *)pbVar9;
    *(byte *)puVar17 = (byte)*puVar17 + cVar5;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11((char)((uint)puVar17 >> 8) - *pbVar22,(char)puVar17));
    pbVar9 = pbVar9 + *puVar17 + (uint)CARRY1(bVar4,bVar2) + iVar13;
    puVar25 = puVar26;
    if ((POPCOUNT((uint)pbVar9 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar9 = *pbVar9 + (char)pbVar9;
        uVar11 = (undefined3)((uint)pbVar9 >> 8);
        cVar5 = (char)pbVar9 + 'o';
        pcVar6 = (char *)CONCAT31(uVar11,cVar5);
        *(char **)pbVar10 = pcVar6 + *(int *)pbVar10;
        *(byte *)puVar17 = (byte)*puVar17 + (char)pbVar10;
        bVar4 = cVar5 - *pcVar6;
        pbVar9 = (byte *)CONCAT31(uVar11,bVar4);
        *pbVar19 = *pbVar19 + (char)puVar17;
        *pbVar19 = *pbVar19 ^ bVar4;
        pbVar19[0x26000000] = pbVar19[0x26000000] + (char)((uint)pbVar10 >> 8);
        bVar2 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar4;
        *(byte **)(pbVar19 + 0xb) = pbVar22 + (uint)CARRY1(bVar2,bVar4) + *(int *)(pbVar19 + 0xb);
        *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
code_r0x00404454:
        pbVar9 = (byte *)((uint)pbVar9 | 0x1027309);
        uVar7 = *puVar17;
        bVar2 = (byte)pbVar10;
        uVar1 = *puVar17;
        *(byte *)puVar17 = (byte)*puVar17 + bVar2;
        if (SCARRY1((byte)uVar1,bVar2) != (char)(byte)*puVar17 < '\0') {
          *pbVar9 = *pbVar9 + (char)pbVar9;
          *pbVar22 = *pbVar22 + 1;
          puVar26 = (uint *)(CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + '\t') | 1);
          bVar27 = *pbVar22;
          bVar4 = (byte)puVar26;
          *pbVar22 = *pbVar22 + bVar4;
          if (CARRY1(bVar27,bVar4)) {
            *puVar26 = *puVar26 + (int)puVar26;
            puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                       CONCAT11((byte)((uint)puVar17 >> 8) | pbVar19[4],
                                                (char)puVar17));
          }
          else if (!CARRY1(bVar27,bVar4)) goto code_r0x00404473;
          *puVar26 = *puVar26 + (int)puVar26;
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar2 | (byte)*puVar17);
code_r0x00404473:
          uVar14 = (undefined2)((uint)pbVar10 >> 0x10);
          cVar3 = (char)pbVar10;
          bVar27 = (char)((uint)pbVar10 >> 8) + (char)*puVar26;
          uVar7 = *puVar26;
          *pbVar19 = *pbVar19 + bVar27;
          pbVar9 = (byte *)((uint)puVar26 & uVar7 | *puVar25);
          pbVar23 = pbVar22 + (uint)bVar28 * -8 + 4;
          out(*(undefined4 *)pbVar22,(short)puVar17);
          *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
          bVar27 = bVar27 | *pbVar9;
          *pbVar19 = *pbVar19 + bVar27;
          uVar11 = (undefined3)((uint)pbVar9 >> 8);
          pcVar6 = (char *)CONCAT31(uVar11,0xea);
          *(uint *)(pbVar19 + -0x3d) = *(uint *)(pbVar19 + -0x3d) | (uint)puVar25;
          *pcVar6 = *pcVar6 + -0x16;
          pbVar22 = (byte *)CONCAT31(uVar11,0x59);
          *pbVar22 = *pbVar22 + 0x59;
          bVar27 = bVar27 | *pbVar22;
          pbVar10 = (byte *)CONCAT22(uVar14,CONCAT11(bVar27,cVar3));
          *pbVar10 = *pbVar10 | 0x59;
          *(byte *)puVar17 = (byte)*puVar17 + cVar3;
          *pbVar10 = *pbVar10 - cVar3;
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          pbVar22 = pbVar23 + (uint)bVar28 * -8 + 4;
          out(*(undefined4 *)pbVar23,(short)puVar17);
          bVar2 = (byte)*puVar25 | 0x59 | *pbVar10;
          *(byte *)puVar17 = (byte)*puVar17 + cVar3;
          pcVar6 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                                    CONCAT11((char)((uint)pbVar9 >> 8) - (char)pbVar19,bVar2));
          *pcVar6 = *pcVar6 + bVar2;
          cVar5 = (bVar2 | 8) - 2;
          piVar8 = (int *)CONCAT31((int3)((uint)pcVar6 >> 8),cVar5);
          bVar29 = (uStack_8 & 0x400) != 0;
          bVar28 = (uStack_8 & 0x10) != 0;
          *(char *)piVar8 = (char)*piVar8 + cVar5;
          uVar15 = CONCAT11((byte)((uint)puVar17 >> 8) | pbVar19[0xb],(char)puVar17);
          pcVar6 = (char *)CONCAT22((short)((uint)puVar17 >> 0x10),uVar15);
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          bVar27 = bVar27 | *(byte *)((int)puVar25 + -0x2a);
          *(char *)piVar8 = (char)*piVar8 + cVar5;
          pbVar23 = pbVar22 + (uint)bVar29 * -8 + 4;
          out(*(undefined4 *)pbVar22,uVar15);
          *pcVar6 = *pcVar6 + cVar3;
          out(*(undefined4 *)pbVar23,uVar15);
          *pcVar6 = *pcVar6 + cVar3;
          pbVar10 = (byte *)((uint)pcVar6 & 0xffffff00);
          bVar27 = bVar27 | pbVar10[CONCAT22(uVar14,CONCAT11(bVar27,cVar3))];
          pbVar9 = (byte *)CONCAT22(uVar14,CONCAT11(bVar27,cVar3));
          pbVar24 = pbVar23 + (uint)bVar29 * -8 + 4 + (uint)bVar29 * -8 + 4;
          out(*(undefined4 *)(pbVar23 + (uint)bVar29 * -8 + 4),(short)pbVar10);
          bVar2 = *pbVar9;
          puVar17 = (uint *)CONCAT31(0xf80a00,bVar2);
          *pbVar10 = *pbVar10 + cVar3;
          pbVar22 = pbVar24;
          if (*pbVar10 != 0) {
            *(byte *)puVar17 = (byte)*puVar17 + bVar2;
            pbVar9 = (byte *)CONCAT22(uVar14,CONCAT11(bVar27 + (byte)*puVar17,cVar3));
            *pbVar24 = *pbVar24;
            pbVar22 = pbVar24 + (uint)bVar29 * -8 + 4;
            out(*(undefined4 *)pbVar24,(short)pbVar10);
            puVar17 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar25 | *pbVar9);
          }
          *pbVar10 = *pbVar10 + (char)pbVar9;
          pbVar23 = pbVar10;
          if (*pbVar10 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar17;
            pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + (byte)*puVar17);
            pbVar9[0x2a060000] = pbVar9[0x2a060000] - (char)((uint)pbVar10 >> 8);
            *pbVar19 = *pbVar19 + (char)pbVar10;
            *pbVar10 = *pbVar10 ^ (byte)puVar17;
            pbVar23 = pbVar10;
code_r0x004044ff:
            cVar5 = (char)((uint)pbVar9 >> 8);
            *pbVar23 = *pbVar23 + cVar5;
            uVar7 = *puVar17;
            bVar2 = (byte)puVar17;
            *(byte *)puVar17 = (byte)*puVar17 + bVar2;
            bVar27 = 9 < (bVar2 & 0xf) | bVar28;
            uVar11 = (undefined3)((uint)puVar17 >> 8);
            bVar4 = bVar2 + bVar27 * '\x06';
            bVar4 = bVar4 + (0x90 < (bVar4 & 0xf0) |
                            CARRY1((byte)uVar7,bVar2) | bVar27 * (0xf9 < bVar4)) * '`';
            pbVar10 = (byte *)CONCAT31(uVar11,bVar4);
            bVar2 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar4;
            *(byte **)pbVar23 = pbVar10 + (uint)CARRY1(bVar2,bVar4) + *(int *)pbVar23;
            out(*(undefined4 *)pbVar22,(short)pbVar23);
            *pbVar10 = *pbVar10 + bVar4;
            bVar4 = bVar4 - 0xe;
            pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                                      CONCAT11(cVar5 + *(byte *)((int)puVar25 + 0x3e),(char)pbVar9))
            ;
            *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4;
            bVar27 = 9 < (bVar4 & 0xf) | bVar27;
            bVar4 = bVar4 + bVar27 * -6;
            bVar2 = 0x9f < bVar4 | bVar27 * (bVar4 < 6);
            puVar17 = (uint *)CONCAT31(uVar11,bVar4 + bVar2 * -0x60);
            pbVar23[0x5d] = pbVar23[0x5d] + (char)((uint)pbVar23 >> 8) + bVar2;
            *puVar17 = *puVar17 | (uint)puVar17;
            pbVar24 = pbVar22 + (uint)bVar29 * -8 + 4;
            while( true ) {
              bVar29 = (uStack_8 & 0x400) != 0;
              bVar28 = (uStack_8 & 0x10) != 0;
              *(byte *)puVar17 = (char)*puVar17 + (byte)puVar17;
              bVar4 = (byte)pbVar23 | *pbVar24;
              pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),bVar4);
              cVar5 = (char)pbVar9;
              *pbVar9 = *pbVar9 - cVar5;
              *puVar17 = (uint)(*puVar17 + (int)puVar17);
              uVar11 = (undefined3)((uint)puVar17 >> 8);
              bVar27 = (byte)puVar17 | *pbVar10;
              pbVar22 = pbVar24 + (uint)bVar29 * -8 + 4;
              out(*(undefined4 *)pbVar24,(short)pbVar10);
              *(char *)CONCAT31(uVar11,bVar27) = *(char *)CONCAT31(uVar11,bVar27) + bVar27;
              cVar3 = (char)((uint)pbVar9 >> 8);
              *pcVar21 = *pcVar21 - cVar3;
              *pbVar10 = *pbVar10 + cVar5;
              bVar2 = bVar27 - 0x17;
              cVar3 = cVar3 + *(byte *)((int)puVar25 + 0x46);
              pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),CONCAT11(cVar3,cVar5));
              *(char *)CONCAT31(uVar11,bVar2) = *(char *)CONCAT31(uVar11,bVar2) + bVar2;
              *pcVar21 = *pcVar21 - cVar3;
              *pbVar10 = *pbVar10 + cVar5;
              bVar27 = bVar27 - 0x21;
              puVar17 = (uint *)CONCAT31(uVar11,bVar27);
              if (bVar2 < 10) break;
              *puVar17 = *puVar17 | (uint)puVar17;
              *(byte *)puVar17 = (byte)*puVar17 + bVar27;
              pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar23 >> 8) | pbVar10[0x6e],bVar4))
              ;
              bVar27 = bVar27 | (byte)*puVar17;
              *(char *)CONCAT31(uVar11,bVar27) = *(char *)CONCAT31(uVar11,bVar27) + bVar27;
              puVar17 = (uint *)CONCAT31(uVar11,bVar27 | *pbVar23);
              pbVar24 = pbVar22;
            }
          } while( true );
        }
        puVar26 = puVar25;
        if (CARRY1((byte)uVar7,bVar2)) goto code_r0x00404423;
code_r0x00404436:
        pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                   CONCAT11((char)((uint)pbVar19 >> 8) + pbVar19[-0x3d],
                                            (char)pbVar19));
      } while( true );
    }
    *pbVar22 = *pbVar22 + (char)pbVar9;
  } while( true );
}


