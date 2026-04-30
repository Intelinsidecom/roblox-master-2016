/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004042e1
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(undefined4 report, char * param_2)
 * Local Vars  : uVar10, puVar9, report, uVar12, uVar11, iVar14, cVar13, uVar16, bVar15, pbVar18, uVar17, uVar20, puVar19, unaff_EBX, bVar21, cVar23, pbVar22, uVar25, bVar24, unaff_ESI, unaff_EBP, puVar27, puVar26, pbVar29, pbVar28, pbVar31, pbVar30, puVar32, unaff_EDI, in_ES, puVar33, in_AF, in_DS, bVar35, bVar34, in_stack_fffffffc, unaff_retaddr, param_2, iStack_20, puStack_24, puStack_14, pcStack_1c, iStack_c, pbStack_10, uVar1, pbStack_8, cVar3, cVar2, bVar5, bVar4, pcVar6, in_EAX, piVar8, pcVar7
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

int __fastcall _ctor(undefined4 report,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte *in_EAX;
  undefined3 uVar11;
  char *pcVar6;
  int *piVar8;
  undefined1 *puVar9;
  uint uVar10;
  char cVar13;
  byte bVar15;
  undefined2 uVar16;
  int iVar14;
  undefined2 uVar17;
  byte *pbVar18;
  uint *puVar19;
  undefined1 uVar20;
  byte bVar21;
  char cVar23;
  byte bVar24;
  char *unaff_EBX;
  undefined2 uVar25;
  char *unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar26;
  undefined4 *puVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  uint *unaff_EDI;
  uint *puVar32;
  uint *puVar33;
  ushort in_ES;
  undefined2 in_DS;
  byte in_AF;
  bool bVar34;
  bool bVar35;
  ushort unaff_retaddr;
  undefined1 *puStack_24;
  int iStack_20;
  char *pcStack_1c;
  uint *puStack_14;
  byte *pbStack_10;
  int iStack_c;
  byte *pbStack_8;
  char *in_stack_fffffffc;
  char *pcVar7;
  uint3 uVar12;
  byte *pbVar22;
  
  bVar34 = false;
                    /* .NET CLR Managed Code */
  bVar4 = *in_EAX;
  bVar5 = (byte)((uint)report >> 8);
  uVar16 = (undefined2)((uint)report >> 0x10);
  cVar13 = (char)report;
  bVar15 = bVar5 + *in_EAX;
  pcVar7 = (char *)CONCAT22(uVar16,CONCAT11(bVar15,cVar13));
  iVar14 = *(int *)in_EAX;
  *param_2 = *param_2 + cVar13;
  cVar3 = (char)(in_EAX + (uint)CARRY1(bVar5,bVar4) + iVar14);
  uVar11 = (undefined3)((uint)(in_EAX + (uint)CARRY1(bVar5,bVar4) + iVar14) >> 8);
  cVar2 = cVar3 + *unaff_EBX;
  puVar19 = (uint *)CONCAT31(uVar11,cVar2);
  if (SCARRY1(cVar3,*unaff_EBX) != cVar2 < '\0') {
    *(char *)puVar19 = (char)*puVar19 + cVar2;
    pcVar6 = (char *)CONCAT31(uVar11,cVar2 + '*');
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar20 = SUB41(unaff_EBX,0);
    cVar23 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x60];
    *pcVar6 = *pcVar6 + cVar2 + '*';
    cVar3 = cVar2 + '-';
    out(*unaff_ESI,(short)param_2);
    *pcVar7 = *pcVar7 + cVar3;
    *param_2 = *param_2 + cVar13;
    uVar17 = CONCAT11((char)((uint)param_2 >> 8) - *(char *)(unaff_ESI + 1),(char)param_2);
    pbVar29 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar17);
    cVar23 = cVar23 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar23,uVar20)) + 0x60);
    *(char *)CONCAT31(uVar11,cVar3) = *(char *)CONCAT31(uVar11,cVar3) + cVar3;
    bVar4 = cVar2 + 0x30;
    pcVar7 = (char *)CONCAT31(uVar11,bVar4);
    out(unaff_ESI[1],uVar17);
    *pcVar7 = *pcVar7 + bVar4;
    pbVar30 = (byte *)CONCAT22(uVar16,CONCAT11(bVar15 | *pbVar29,cVar13));
    pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_DS);
    puVar32 = (uint *)CONCAT22(uVar25,CONCAT11(cVar23 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar23,
                                                  uVar20)) + 0x60),uVar20));
    *pcVar7 = *pcVar7 + bVar4;
    bVar5 = cVar2 + 0x5a;
    puVar19 = (uint *)CONCAT31(uVar11,bVar5);
    puVar26 = (undefined4 *)((int)unaff_ESI + 9);
    unaff_retaddr = in_ES;
    in_stack_fffffffc = unaff_EBP;
    if (0xd5 < bVar4) goto code_r0x0040436f;
    *puVar19 = *puVar19 | (uint)puVar19;
    unaff_retaddr = in_ES;
    if ((POPCOUNT(*puVar19 & 0xff) & 1U) != 0) {
      uVar10 = *puVar19;
      puVar19 = (uint *)CONCAT31(uVar11,bVar5 + (char)*puVar19);
      *puVar19 = (uint)((int)puVar19 + (uint)CARRY1(bVar5,(byte)uVar10) + *puVar19);
      unaff_retaddr = in_ES;
      goto code_r0x0040436f;
    }
  }
  *(char *)puVar19 = (char)*puVar19 + (char)puVar19;
  func_0x2a4a4325();
  bVar5 = (byte)pbStack_8;
  *pbStack_8 = *pbStack_8 + bVar5;
  bVar4 = *pbStack_8;
  uVar12 = (uint3)((uint)pbStack_8 >> 8);
  piVar8 = (int *)CONCAT31(uVar12,bVar5 - bVar4);
  puVar27 = (undefined4 *)((iStack_20 - *piVar8) - (uint)(bVar5 < *pbStack_8));
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  *(byte *)piVar8 = (char)*piVar8 + (bVar5 - bVar4);
  puVar9 = (undefined1 *)((uint)(uVar12 & 0x21100) << 8);
  *pcStack_1c = *pcStack_1c - (char)puStack_14;
  *(undefined1 *)puVar27 = *(undefined1 *)puVar27;
  uVar16 = SUB42(pbStack_10,0);
  out(*puVar27,uVar16);
  unaff_EDI = (uint *)(puStack_24 + 1);
  *puStack_24 = *(undefined1 *)(puVar27 + 1);
  *puVar9 = *puVar9;
  out(*(undefined4 *)((int)puVar27 + 5),uVar16);
  cVar3 = (char)iStack_c;
  *pbStack_10 = *pbStack_10 + cVar3;
  unaff_EBP = (char *)((uint)pcStack_1c | *puStack_14);
  uVar10 = *unaff_EDI;
  out(*(undefined4 *)((int)puVar27 + 9),uVar16);
  *pbStack_10 = *pbStack_10 + cVar3;
  bVar4 = (byte)uVar10 | *(byte *)((int)puVar27 + 0xd);
  out(*(undefined4 *)((int)puVar27 + 0xd),uVar16);
  cVar2 = bVar4 - *(char *)(CONCAT31(uVar12,bVar4) & 0x21100ff);
  pcVar7 = (char *)(CONCAT31(uVar12,cVar2) & 0x21100ff);
  *pbStack_10 = *pbStack_10 + cVar3;
  unaff_EBP[0x70a0000] = unaff_EBP[0x70a0000] - (char)puStack_14;
  puVar26 = (undefined4 *)((int)puVar27 + 0x15);
  out(*(undefined4 *)((int)puVar27 + 0x11),uVar16);
  iVar14 = iStack_c + 1;
  *pcVar7 = *pcVar7 + cVar2;
  pbVar30 = (byte *)CONCAT22((short)((uint)iVar14 >> 0x10),
                             CONCAT11((byte)((uint)iVar14 >> 8) | bRam070adee6,(char)iVar14));
  puVar19 = (uint *)(CONCAT31(uVar12,cVar2 + -6) & 0x21100ff);
  pbVar29 = pbStack_10;
  puVar32 = puStack_14;
code_r0x0040436f:
  pbStack_8._0_2_ = unaff_retaddr;
  pbVar28 = (byte *)(puVar26 + 1);
  out(*puVar26,(short)pbVar29);
  pbVar18 = pbVar29 + 1;
  *(char *)puVar19 = (char)*puVar19 + (char)puVar19;
  bVar21 = (byte)puVar32 | (byte)((uint)puVar19 >> 8);
  pbVar22 = (byte *)CONCAT31((int3)((uint)puVar32 >> 8),bVar21);
  uVar11 = (undefined3)((uint)puVar19 >> 8);
  bVar15 = (char)puVar19 - (char)*puVar19;
  bVar4 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar15;
  *(char *)CONCAT31(uVar11,bVar15) =
       *(char *)CONCAT31(uVar11,bVar15) + bVar15 + CARRY1(bVar4,bVar15);
  *pbVar18 = *pbVar18 + bVar15;
  *pbVar30 = *pbVar30 + (char)pbVar18;
  bVar4 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar21;
  bVar5 = 9 < (bVar15 & 0xf) | in_AF;
  bVar15 = bVar15 + bVar5 * -6;
  cVar2 = bVar15 + (0x9f < bVar15 | CARRY1(bVar4,bVar21) | bVar5 * (bVar15 < 6)) * -0x60;
  pcVar7 = (char *)CONCAT31(uVar11,cVar2);
  *pbVar18 = *pbVar18 + (char)pbVar30;
  *pcVar7 = *pcVar7 + cVar2;
  *pcVar7 = *pcVar7 + cVar2;
  puVar19 = (uint *)(pbVar29 + 2);
  uVar10 = CONCAT31(uVar11,cVar2 + *pbVar22) + 0x6128;
  uVar11 = (undefined3)(uVar10 >> 8);
  cVar2 = (char)uVar10 + *(char *)((int)unaff_EDI * 2 + 0x4000064);
  bVar15 = cVar2 - *(char *)CONCAT31(uVar11,cVar2);
  pbVar18 = (byte *)CONCAT31(uVar11,bVar15);
  bVar4 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar15;
  pbVar28 = pbVar28 + (-(uint)CARRY1(bVar4,bVar15) - *(int *)pbVar18);
  bVar15 = bVar15 + *pbVar18;
  pbVar18 = (byte *)CONCAT31(uVar11,bVar15);
  bVar4 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar15;
  *puVar19 = (uint)(pbVar18 + (uint)CARRY1(bVar4,bVar15) + *puVar19);
  cVar2 = (char)((uint)puVar19 >> 8);
  if ((POPCOUNT(*puVar19 & 0xff) & 1U) != 0) {
    cVar3 = bVar15 - *pbVar30;
    pbVar18 = (byte *)CONCAT31(uVar11,cVar3);
    *pbVar18 = *pbVar18 + cVar3 + (bVar15 < *pbVar30);
    *(byte *)puVar19 = (byte)*puVar19 + cVar3;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + cVar2;
    puVar32 = unaff_EDI;
    goto code_r0x00404417;
  }
  *pbVar18 = *pbVar18 + bVar15;
  cVar3 = bVar15 + 0x28;
  pcVar7 = (char *)CONCAT31(uVar11,cVar3);
  uVar1 = in((short)puVar19);
  *unaff_EDI = uVar1;
  *pcVar7 = *pcVar7 + cVar3;
  bVar4 = pbVar22[(int)pbVar30];
  pcVar7[0x28] = pcVar7[0x28] + cVar2;
  bVar34 = ((ushort)pbStack_8 & 0x400) != 0;
  bVar5 = ((ushort)pbStack_8 & 0x10) != 0;
  *pcVar7 = *pcVar7 + cVar3;
  bVar4 = (byte)((uint)pbVar30 >> 8) | bVar4 | (byte)*puVar19;
  pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),CONCAT11(bVar4,(char)pbVar30));
  uVar16 = (undefined2)((uint)puVar32 >> 0x10);
  bVar24 = (char)((uint)puVar32 >> 8) + pbVar22[100];
  pbVar22 = (byte *)CONCAT22(uVar16,CONCAT11(bVar24,bVar21));
  *pcVar7 = *pcVar7 + cVar3;
  pbVar18 = (byte *)CONCAT31(uVar11,bVar15 + 0x50);
  pbVar29[0x23] = pbVar29[0x23] + cVar2;
  pbStack_8._0_2_ = 0;
  pbVar29 = pbVar18 + 2;
  *pbVar29 = *pbVar29 + cVar2;
  puVar32 = unaff_EDI + 1;
  if ((POPCOUNT(*pbVar29) & 1U) != 0) goto code_r0x00404439;
  *pbVar18 = *pbVar18 + bVar15 + 0x50;
  cVar2 = bVar15 + 0x78;
  pcVar7 = (char *)CONCAT31(uVar11,cVar2);
  bVar5 = (uVar10 & 0x1000) != 0;
  *pcVar7 = *pcVar7 + cVar2;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(byte)puVar19 | *pbVar28);
  pbVar22 = (byte *)CONCAT22(uVar16,CONCAT11(bVar24 | pbVar28[0x65],bVar21));
  *pcVar7 = *pcVar7 + cVar2;
  bVar15 = bVar15 + 0x9d;
  pcVar7 = (char *)CONCAT31(uVar11,bVar15);
  puVar19 = (uint *)((uint)puVar19 | *puVar19);
  *pcVar7 = *pcVar7 + bVar4;
  puVar32 = (uint *)((int)unaff_EDI + (uint)bVar34 * -2 + 5);
  *(byte *)(unaff_EDI + 1) = bVar15;
  *pcVar7 = *pcVar7 + bVar15;
  bVar15 = bVar15 | (byte)*puVar19;
  pbVar18 = (byte *)CONCAT31(uVar11,bVar15);
  if ((POPCOUNT(bVar15) & 1U) != 0) goto code_r0x00404454;
  *pbVar18 = *pbVar18 + bVar15;
  cVar2 = bVar15 + 2;
  pbVar18 = (byte *)CONCAT31(uVar11,cVar2);
  *unaff_EBP = *unaff_EBP - bVar21;
  *pbVar28 = *pbVar28 + cVar2;
  pbVar29 = pbVar28 + (uint)bVar34 * -8 + 4;
  out(*(undefined4 *)pbVar28,(short)puVar19);
  puVar33 = (uint *)((int)puVar32 + (uint)bVar34 * -2 + 1);
  pbVar28 = pbVar29 + (uint)bVar34 * -2 + 1;
  *(byte *)puVar32 = *pbVar29;
  *pbVar18 = *pbVar18 + cVar2;
  in_stack_fffffffc = (char *)0x0;
  do {
    cVar3 = (char)((uint)pbVar30 >> 8);
    pbVar22[-0x21f60000] = pbVar22[-0x21f60000] - cVar3;
    uVar11 = (undefined3)((uint)pbVar18 >> 8);
    cVar2 = ((byte)pbVar18 | *pbVar28) - 6;
    piVar8 = (int *)CONCAT31(uVar11,cVar2);
    pbStack_8._0_2_ = (ushort)in_stack_fffffffc;
    pcVar7 = (char *)((int)piVar8 * 2 + 0x2adc0a00);
    *pcVar7 = *pcVar7 - cVar3;
    *piVar8 = (int)(*piVar8 + (int)puVar19);
    *(char *)piVar8 = (char)*piVar8 + cVar2;
    bVar4 = cVar2 + (char)*piVar8;
    bVar5 = 9 < (bVar4 & 0xf) | bVar5;
    uVar10 = CONCAT31(uVar11,bVar4 + bVar5 * '\x06') & 0xffffff0f;
    pbVar18 = (byte *)CONCAT22((short)(uVar10 >> 0x10),
                               CONCAT11((char)((uint)pbVar18 >> 8) + bVar5,(char)uVar10));
    puVar32 = puVar33;
code_r0x00404417:
    *pbVar28 = *pbVar28 + (char)((uint)pbVar18 >> 8);
    unaff_EBP = (char *)0x17000000;
    *(byte *)puVar19 = (byte)*puVar19 + (char)pbVar30;
    bVar15 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar15;
    bVar4 = *pbVar18;
    *pbVar18 = *pbVar18 + bVar15;
    puVar33 = puVar32;
    if (!CARRY1(bVar4,bVar15)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar18 = *pbVar18 + (byte)pbVar18;
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),(byte)pbVar18 | pbVar18[0x4000065]);
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(char)pbVar22 - *pbVar28);
    bVar4 = *pbVar18;
    bVar15 = (byte)((uint)pbVar30 >> 8);
    cVar2 = (char)pbVar30;
    pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),CONCAT11(bVar15 + *pbVar18,cVar2));
    iVar14 = *(int *)pbVar18;
    *(byte *)puVar19 = (byte)*puVar19 + cVar2;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((char)((uint)puVar19 >> 8) - *pbVar28,(char)puVar19));
    pbVar18 = pbVar18 + *puVar19 + (uint)CARRY1(bVar15,bVar4) + iVar14;
    puVar32 = puVar33;
    if ((POPCOUNT((uint)pbVar18 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar18 = *pbVar18 + (char)pbVar18;
        uVar11 = (undefined3)((uint)pbVar18 >> 8);
        cVar2 = (char)pbVar18 + 'o';
        pcVar7 = (char *)CONCAT31(uVar11,cVar2);
        *(char **)pbVar30 = pcVar7 + *(int *)pbVar30;
        *(byte *)puVar19 = (byte)*puVar19 + (char)pbVar30;
        bVar15 = cVar2 - *pcVar7;
        pbVar18 = (byte *)CONCAT31(uVar11,bVar15);
        *pbVar22 = *pbVar22 + (char)puVar19;
        *pbVar22 = *pbVar22 ^ bVar15;
        pbVar22[0x26000000] = pbVar22[0x26000000] + (char)((uint)pbVar30 >> 8);
        bVar4 = *pbVar18;
        *pbVar18 = *pbVar18 + bVar15;
        *(byte **)(pbVar22 + 0xb) = pbVar28 + (uint)CARRY1(bVar4,bVar15) + *(int *)(pbVar22 + 0xb);
        *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
code_r0x00404454:
        in_stack_fffffffc = (char *)(uint)(ushort)pbStack_8;
        pbVar18 = (byte *)((uint)pbVar18 | 0x1027309);
        uVar10 = *puVar19;
        bVar4 = (byte)pbVar30;
        uVar1 = *puVar19;
        *(byte *)puVar19 = (byte)*puVar19 + bVar4;
        if (SCARRY1((byte)uVar1,bVar4) != (char)(byte)*puVar19 < '\0') {
          *pbVar18 = *pbVar18 + (char)pbVar18;
          *pbVar28 = *pbVar28 + 1;
          puVar33 = (uint *)(CONCAT31((int3)((uint)pbVar18 >> 8),(char)pbVar18 + '\t') | 1);
          bVar5 = *pbVar28;
          bVar15 = (byte)puVar33;
          *pbVar28 = *pbVar28 + bVar15;
          if (CARRY1(bVar5,bVar15)) {
            *puVar33 = *puVar33 + (int)puVar33;
            puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                       CONCAT11((byte)((uint)puVar19 >> 8) | pbVar22[4],
                                                (char)puVar19));
          }
          else if (!CARRY1(bVar5,bVar15)) goto code_r0x00404473;
          *puVar33 = *puVar33 + (int)puVar33;
          pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),bVar4 | (byte)*puVar19);
code_r0x00404473:
          uVar16 = (undefined2)((uint)pbVar30 >> 0x10);
          cVar3 = (char)pbVar30;
          bVar5 = (char)((uint)pbVar30 >> 8) + (char)*puVar33;
          uVar10 = *puVar33;
          *pbVar22 = *pbVar22 + bVar5;
          pbVar29 = (byte *)((uint)puVar33 & uVar10 | *puVar32);
          pbVar18 = pbVar28 + (uint)bVar34 * -8 + 4;
          out(*(undefined4 *)pbVar28,(short)puVar19);
          *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
          bVar5 = bVar5 | *pbVar29;
          *pbVar22 = *pbVar22 + bVar5;
          uVar11 = (undefined3)((uint)pbVar29 >> 8);
          pcVar7 = (char *)CONCAT31(uVar11,0xea);
          *(uint *)(pbVar22 + -0x3d) = *(uint *)(pbVar22 + -0x3d) | (uint)puVar32;
          *pcVar7 = *pcVar7 + -0x16;
          pbVar30 = (byte *)CONCAT31(uVar11,0x59);
          *pbVar30 = *pbVar30 + 0x59;
          bVar5 = bVar5 | *pbVar30;
          pbVar28 = (byte *)CONCAT22(uVar16,CONCAT11(bVar5,cVar3));
          *pbVar28 = *pbVar28 | 0x59;
          *(byte *)puVar19 = (byte)*puVar19 + cVar3;
          *pbVar28 = *pbVar28 - cVar3;
          *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
          pbVar30 = pbVar18 + (uint)bVar34 * -8 + 4;
          out(*(undefined4 *)pbVar18,(short)puVar19);
          bVar4 = (byte)*puVar32 | 0x59 | *pbVar28;
          *(byte *)puVar19 = (byte)*puVar19 + cVar3;
          pcVar7 = (char *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                    CONCAT11((char)((uint)pbVar29 >> 8) - (char)pbVar22,bVar4));
          *pcVar7 = *pcVar7 + bVar4;
          cVar2 = (bVar4 | 8) - 2;
          piVar8 = (int *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar2);
          bVar35 = ((ushort)pbStack_8 & 0x400) != 0;
          bVar34 = ((ushort)pbStack_8 & 0x10) != 0;
          *(char *)piVar8 = (char)*piVar8 + cVar2;
          uVar17 = CONCAT11((byte)((uint)puVar19 >> 8) | pbVar22[0xb],(char)puVar19);
          pcVar7 = (char *)CONCAT22((short)((uint)puVar19 >> 0x10),uVar17);
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          bVar5 = bVar5 | *(byte *)((int)puVar32 + -0x2a);
          *(char *)piVar8 = (char)*piVar8 + cVar2;
          pbVar29 = pbVar30 + (uint)bVar35 * -8 + 4;
          out(*(undefined4 *)pbVar30,uVar17);
          *pcVar7 = *pcVar7 + cVar3;
          out(*(undefined4 *)pbVar29,uVar17);
          *pcVar7 = *pcVar7 + cVar3;
          pbVar28 = (byte *)((uint)pcVar7 & 0xffffff00);
          bVar5 = bVar5 | pbVar28[CONCAT22(uVar16,CONCAT11(bVar5,cVar3))];
          pbVar30 = (byte *)CONCAT22(uVar16,CONCAT11(bVar5,cVar3));
          pbVar18 = pbVar29 + (uint)bVar35 * -8 + 4 + (uint)bVar35 * -8 + 4;
          out(*(undefined4 *)(pbVar29 + (uint)bVar35 * -8 + 4),(short)pbVar28);
          bVar4 = *pbVar30;
          puVar19 = (uint *)CONCAT31(0xf80a00,bVar4);
          *pbVar28 = *pbVar28 + cVar3;
          pbVar29 = pbVar18;
          if (*pbVar28 != 0) {
            *(byte *)puVar19 = (byte)*puVar19 + bVar4;
            pbVar30 = (byte *)CONCAT22(uVar16,CONCAT11(bVar5 + (byte)*puVar19,cVar3));
            *pbVar18 = *pbVar18;
            pbVar29 = pbVar18 + (uint)bVar35 * -8 + 4;
            out(*(undefined4 *)pbVar18,(short)pbVar28);
            puVar19 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar32 | *pbVar30);
          }
          *pbVar28 = *pbVar28 + (char)pbVar30;
          pbVar18 = pbVar28;
          if (*pbVar28 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
            pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),(char)pbVar30 + (byte)*puVar19);
            pbVar30[0x2a060000] = pbVar30[0x2a060000] - (char)((uint)pbVar28 >> 8);
            *pbVar22 = *pbVar22 + (char)pbVar28;
            *pbVar28 = *pbVar28 ^ (byte)puVar19;
            pbVar18 = pbVar28;
code_r0x004044ff:
            cVar2 = (char)((uint)pbVar30 >> 8);
            *pbVar18 = *pbVar18 + cVar2;
            uVar10 = *puVar19;
            bVar4 = (byte)puVar19;
            *(byte *)puVar19 = (byte)*puVar19 + bVar4;
            bVar5 = 9 < (bVar4 & 0xf) | bVar34;
            uVar11 = (undefined3)((uint)puVar19 >> 8);
            bVar15 = bVar4 + bVar5 * '\x06';
            bVar15 = bVar15 + (0x90 < (bVar15 & 0xf0) |
                              CARRY1((byte)uVar10,bVar4) | bVar5 * (0xf9 < bVar15)) * '`';
            pbVar28 = (byte *)CONCAT31(uVar11,bVar15);
            bVar4 = *pbVar28;
            *pbVar28 = *pbVar28 + bVar15;
            *(byte **)pbVar18 = pbVar28 + (uint)CARRY1(bVar4,bVar15) + *(int *)pbVar18;
            out(*(undefined4 *)pbVar29,(short)pbVar18);
            *pbVar28 = *pbVar28 + bVar15;
            bVar15 = bVar15 - 0xe;
            pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                       CONCAT11(cVar2 + *(byte *)((int)puVar32 + 0x3e),(char)pbVar30
                                               ));
            *(char *)CONCAT31(uVar11,bVar15) = *(char *)CONCAT31(uVar11,bVar15) + bVar15;
            bVar5 = 9 < (bVar15 & 0xf) | bVar5;
            bVar15 = bVar15 + bVar5 * -6;
            bVar4 = 0x9f < bVar15 | bVar5 * (bVar15 < 6);
            puVar19 = (uint *)CONCAT31(uVar11,bVar15 + bVar4 * -0x60);
            pbVar18[0x5d] = pbVar18[0x5d] + (char)((uint)pbVar18 >> 8) + bVar4;
            *puVar19 = *puVar19 | (uint)puVar19;
            pbVar31 = pbVar29 + (uint)bVar35 * -8 + 4;
            while( true ) {
              bVar35 = ((ushort)pbStack_8 & 0x400) != 0;
              bVar34 = ((ushort)pbStack_8 & 0x10) != 0;
              *(byte *)puVar19 = (char)*puVar19 + (byte)puVar19;
              bVar15 = (byte)pbVar18 | *pbVar31;
              pbVar28 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar15);
              cVar2 = (char)pbVar30;
              *pbVar30 = *pbVar30 - cVar2;
              *puVar19 = (uint)(*puVar19 + (int)puVar19);
              uVar11 = (undefined3)((uint)puVar19 >> 8);
              bVar5 = (byte)puVar19 | *pbVar28;
              pbVar29 = pbVar31 + (uint)bVar35 * -8 + 4;
              out(*(undefined4 *)pbVar31,(short)pbVar28);
              *(char *)CONCAT31(uVar11,bVar5) = *(char *)CONCAT31(uVar11,bVar5) + bVar5;
              cVar3 = (char)((uint)pbVar30 >> 8);
              *unaff_EBP = *unaff_EBP - cVar3;
              *pbVar28 = *pbVar28 + cVar2;
              bVar4 = bVar5 - 0x17;
              cVar3 = cVar3 + *(byte *)((int)puVar32 + 0x46);
              pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),CONCAT11(cVar3,cVar2));
              *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4;
              *unaff_EBP = *unaff_EBP - cVar3;
              *pbVar28 = *pbVar28 + cVar2;
              bVar5 = bVar5 - 0x21;
              puVar19 = (uint *)CONCAT31(uVar11,bVar5);
              if (bVar4 < 10) break;
              *puVar19 = *puVar19 | (uint)puVar19;
              *(byte *)puVar19 = (byte)*puVar19 + bVar5;
              pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar18 >> 8) | pbVar28[0x6e],bVar15)
                                        );
              bVar5 = bVar5 | (byte)*puVar19;
              *(char *)CONCAT31(uVar11,bVar5) = *(char *)CONCAT31(uVar11,bVar5) + bVar5;
              puVar19 = (uint *)CONCAT31(uVar11,bVar5 | *pbVar18);
              pbVar31 = pbVar29;
            }
          } while( true );
        }
        puVar33 = puVar32;
        if (CARRY1((byte)uVar10,bVar4)) goto code_r0x00404423;
code_r0x00404436:
        pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                   CONCAT11((char)((uint)pbVar22 >> 8) + pbVar22[-0x3d],
                                            (char)pbVar22));
      } while( true );
    }
    *pbVar28 = *pbVar28 + (char)pbVar18;
  } while( true );
}


