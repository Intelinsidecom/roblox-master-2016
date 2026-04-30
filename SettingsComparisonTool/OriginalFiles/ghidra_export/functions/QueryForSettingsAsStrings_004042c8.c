/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004042c8
 * Raw Name    : QueryForSettingsAsStrings
 * Demangled   : QueryForSettingsAsStrings
 * Prototype   : int QueryForSettingsAsStrings(undefined4 tableName, char * param_2)
 * Local Vars  : piVar9, puVar10, uVar11, pbVar12, uVar13, uVar14, cVar15, iVar16, bVar17, uVar18, uVar19, uVar20, puVar21, uVar22, bVar23, unaff_EBX, pcVar24, pbVar25, cVar26, bVar27, unaff_EBP, unaff_ESI, pbVar28, puVar29, pbVar30, pbVar31, pbVar32, unaff_EDI, puVar33, puVar34, in_ES, in_AF, bVar35, bVar36, unaff_retaddr, in_stack_fffffffc, param_2, puStack_24, iStack_20, pcStack_1c, puStack_14, pbStack_10, iStack_c, pbStack_8, uVar1, uVar2, bVar3, cVar4, cVar5, bVar6, tableName, in_EAX, pcVar7, pcVar8
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

int __fastcall QueryForSettingsAsStrings(undefined4 tableName,char *param_2)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  int *in_EAX;
  undefined3 uVar13;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint uVar11;
  byte *pbVar12;
  char cVar15;
  byte bVar17;
  undefined2 uVar18;
  int iVar16;
  undefined2 uVar19;
  undefined2 uVar20;
  uint *puVar21;
  undefined1 uVar22;
  byte bVar23;
  byte bVar27;
  int unaff_EBX;
  char *pcVar24;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar28;
  undefined4 *puVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  int unaff_EDI;
  uint *puVar33;
  uint *puVar34;
  ushort in_ES;
  byte in_AF;
  bool bVar35;
  bool bVar36;
  undefined2 unaff_retaddr;
  undefined1 *puStack_24;
  int iStack_20;
  char *pcStack_1c;
  uint *puStack_14;
  byte *pbStack_10;
  int iStack_c;
  byte *pbStack_8;
  char *in_stack_fffffffc;
  uint3 uVar14;
  byte *pbVar25;
  char cVar26;
  
                    /* .NET CLR Managed Code */
  bVar35 = false;
  *(char *)(unaff_EBX + 7) = *(char *)(unaff_EBX + 7) + '\x01';
  *in_EAX = *in_EAX + (int)in_EAX;
  uVar13 = (undefined3)((uint)in_EAX >> 8);
  bVar3 = (byte)in_EAX | *unaff_ESI;
  cVar4 = unaff_EBP[-0x44];
  uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar22 = (undefined1)unaff_EBX;
  *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
  pcVar7 = (char *)CONCAT31(uVar13,bVar3 + 6);
  puVar33 = (uint *)(unaff_EDI + *(int *)(unaff_EBP + -0x42));
  *pcVar7 = *pcVar7 + bVar3 + 6;
  pbVar28 = (byte *)CONCAT31(uVar13,bVar3 + 0xc);
  cVar26 = ((char)((uint)unaff_EBX >> 8) + cVar4) - *param_2;
  pcVar24 = (char *)CONCAT22(uVar20,CONCAT11(cVar26,uVar22));
  bVar3 = *pbVar28;
  bVar6 = (byte)((uint)tableName >> 8);
  uVar18 = (undefined2)((uint)tableName >> 0x10);
  cVar15 = (char)tableName;
  bVar17 = bVar6 + *pbVar28;
  pcVar7 = (char *)CONCAT22(uVar18,CONCAT11(bVar17,cVar15));
  iVar16 = *(int *)pbVar28;
  *param_2 = *param_2 + cVar15;
  cVar5 = (char)(pbVar28 + (uint)CARRY1(bVar6,bVar3) + iVar16);
  uVar13 = (undefined3)((uint)(pbVar28 + (uint)CARRY1(bVar6,bVar3) + iVar16) >> 8);
  cVar4 = cVar5 + *pcVar24;
  puVar21 = (uint *)CONCAT31(uVar13,cVar4);
  if (SCARRY1(cVar5,*pcVar24) != cVar4 < '\0') {
    *(char *)puVar21 = (char)*puVar21 + cVar4;
    pcVar8 = (char *)CONCAT31(uVar13,cVar4 + '*');
    cVar26 = cVar26 + pcVar24[0x60];
    *pcVar8 = *pcVar8 + cVar4 + '*';
    cVar5 = cVar4 + '-';
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    *pcVar7 = *pcVar7 + cVar5;
    *param_2 = *param_2 + cVar15;
    uVar19 = CONCAT11((char)((uint)param_2 >> 8) - unaff_ESI[4],(char)param_2);
    pbVar31 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar19);
    cVar26 = cVar26 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar26,uVar22)) + 0x60);
    *(char *)CONCAT31(uVar13,cVar5) = *(char *)CONCAT31(uVar13,cVar5) + cVar5;
    bVar3 = cVar4 + 0x30;
    pcVar7 = (char *)CONCAT31(uVar13,bVar3);
    out(*(undefined4 *)(unaff_ESI + 4),uVar19);
    *pcVar7 = *pcVar7 + bVar3;
    pbVar12 = (byte *)CONCAT22(uVar18,CONCAT11(bVar17 | *pbVar31,cVar15));
    pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,unaff_retaddr);
    puVar34 = (uint *)CONCAT22(uVar20,CONCAT11(cVar26 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar26,
                                                  uVar22)) + 0x60),uVar22));
    *pcVar7 = *pcVar7 + bVar3;
    bVar6 = cVar4 + 0x5a;
    puVar21 = (uint *)CONCAT31(uVar13,bVar6);
    pbVar28 = unaff_ESI + 9;
    uVar2 = in_ES;
    in_stack_fffffffc = unaff_EBP;
    if (0xd5 < bVar3) goto code_r0x0040436f;
    *puVar21 = *puVar21 | (uint)puVar21;
    if ((POPCOUNT(*puVar21 & 0xff) & 1U) != 0) {
      uVar11 = *puVar21;
      puVar21 = (uint *)CONCAT31(uVar13,bVar6 + (char)*puVar21);
      *puVar21 = (uint)((int)puVar21 + (uint)CARRY1(bVar6,(byte)uVar11) + *puVar21);
      uVar2 = in_ES;
      goto code_r0x0040436f;
    }
  }
  *(char *)puVar21 = (char)*puVar21 + (char)puVar21;
  func_0x2a4a4325();
  bVar6 = (byte)pbStack_8;
  *pbStack_8 = *pbStack_8 + bVar6;
  bVar3 = *pbStack_8;
  uVar14 = (uint3)((uint)pbStack_8 >> 8);
  piVar9 = (int *)CONCAT31(uVar14,bVar6 - bVar3);
  puVar29 = (undefined4 *)((iStack_20 - *piVar9) - (uint)(bVar6 < *pbStack_8));
  *piVar9 = (int)(*piVar9 + (int)piVar9);
  *(byte *)piVar9 = (char)*piVar9 + (bVar6 - bVar3);
  puVar10 = (undefined1 *)((uint)(uVar14 & 0x21100) << 8);
  *pcStack_1c = *pcStack_1c - (char)puStack_14;
  *(undefined1 *)puVar29 = *(undefined1 *)puVar29;
  uVar18 = SUB42(pbStack_10,0);
  out(*puVar29,uVar18);
  puVar33 = (uint *)(puStack_24 + 1);
  *puStack_24 = *(undefined1 *)(puVar29 + 1);
  *puVar10 = *puVar10;
  out(*(undefined4 *)((int)puVar29 + 5),uVar18);
  cVar5 = (char)iStack_c;
  *pbStack_10 = *pbStack_10 + cVar5;
  unaff_EBP = (char *)((uint)pcStack_1c | *puStack_14);
  uVar11 = *puVar33;
  out(*(undefined4 *)((int)puVar29 + 9),uVar18);
  *pbStack_10 = *pbStack_10 + cVar5;
  bVar3 = (byte)uVar11 | *(byte *)((int)puVar29 + 0xd);
  out(*(undefined4 *)((int)puVar29 + 0xd),uVar18);
  cVar4 = bVar3 - *(char *)(CONCAT31(uVar14,bVar3) & 0x21100ff);
  pcVar7 = (char *)(CONCAT31(uVar14,cVar4) & 0x21100ff);
  *pbStack_10 = *pbStack_10 + cVar5;
  unaff_EBP[0x70a0000] = unaff_EBP[0x70a0000] - (char)puStack_14;
  pbVar28 = (byte *)((int)puVar29 + 0x15);
  out(*(undefined4 *)((int)puVar29 + 0x11),uVar18);
  iVar16 = iStack_c + 1;
  *pcVar7 = *pcVar7 + cVar4;
  pbVar12 = (byte *)CONCAT22((short)((uint)iVar16 >> 0x10),
                             CONCAT11((byte)((uint)iVar16 >> 8) | bRam070adee6,(char)iVar16));
  puVar21 = (uint *)(CONCAT31(uVar14,cVar4 + -6) & 0x21100ff);
  pbVar31 = pbStack_10;
  puVar34 = puStack_14;
  uVar2 = in_ES;
code_r0x0040436f:
  pbStack_8._0_2_ = uVar2;
  pbVar30 = pbVar28 + 4;
  out(*(undefined4 *)pbVar28,(short)pbVar31);
  pbVar28 = pbVar31 + 1;
  *(char *)puVar21 = (char)*puVar21 + (char)puVar21;
  bVar23 = (byte)puVar34 | (byte)((uint)puVar21 >> 8);
  pbVar25 = (byte *)CONCAT31((int3)((uint)puVar34 >> 8),bVar23);
  uVar13 = (undefined3)((uint)puVar21 >> 8);
  bVar17 = (char)puVar21 - (char)*puVar21;
  bVar3 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar17;
  *(char *)CONCAT31(uVar13,bVar17) =
       *(char *)CONCAT31(uVar13,bVar17) + bVar17 + CARRY1(bVar3,bVar17);
  *pbVar28 = *pbVar28 + bVar17;
  *pbVar12 = *pbVar12 + (char)pbVar28;
  bVar3 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar23;
  bVar6 = 9 < (bVar17 & 0xf) | in_AF;
  bVar17 = bVar17 + bVar6 * -6;
  cVar4 = bVar17 + (0x9f < bVar17 | CARRY1(bVar3,bVar23) | bVar6 * (bVar17 < 6)) * -0x60;
  pcVar7 = (char *)CONCAT31(uVar13,cVar4);
  *pbVar28 = *pbVar28 + (char)pbVar12;
  *pcVar7 = *pcVar7 + cVar4;
  *pcVar7 = *pcVar7 + cVar4;
  puVar21 = (uint *)(pbVar31 + 2);
  uVar11 = CONCAT31(uVar13,cVar4 + *pbVar25) + 0x6128;
  uVar13 = (undefined3)(uVar11 >> 8);
  cVar4 = (char)uVar11 + *(char *)((int)puVar33 * 2 + 0x4000064);
  bVar17 = cVar4 - *(char *)CONCAT31(uVar13,cVar4);
  pbVar28 = (byte *)CONCAT31(uVar13,bVar17);
  bVar3 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar17;
  pbVar30 = pbVar30 + (-(uint)CARRY1(bVar3,bVar17) - *(int *)pbVar28);
  bVar17 = bVar17 + *pbVar28;
  pbVar28 = (byte *)CONCAT31(uVar13,bVar17);
  bVar3 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar17;
  *puVar21 = (uint)(pbVar28 + (uint)CARRY1(bVar3,bVar17) + *puVar21);
  cVar4 = (char)((uint)puVar21 >> 8);
  if ((POPCOUNT(*puVar21 & 0xff) & 1U) != 0) {
    cVar5 = bVar17 - *pbVar12;
    pbVar28 = (byte *)CONCAT31(uVar13,cVar5);
    *pbVar28 = *pbVar28 + cVar5 + (bVar17 < *pbVar12);
    *(byte *)puVar21 = (byte)*puVar21 + cVar5;
    *(byte *)puVar33 = (byte)*puVar33 + cVar4;
    puVar34 = puVar33;
    goto code_r0x00404417;
  }
  *pbVar28 = *pbVar28 + bVar17;
  cVar5 = bVar17 + 0x28;
  pcVar7 = (char *)CONCAT31(uVar13,cVar5);
  uVar1 = in((short)puVar21);
  *puVar33 = uVar1;
  *pcVar7 = *pcVar7 + cVar5;
  bVar3 = pbVar25[(int)pbVar12];
  pcVar7[0x28] = pcVar7[0x28] + cVar4;
  bVar35 = ((ushort)pbStack_8 & 0x400) != 0;
  bVar6 = ((ushort)pbStack_8 & 0x10) != 0;
  *pcVar7 = *pcVar7 + cVar5;
  bVar3 = (byte)((uint)pbVar12 >> 8) | bVar3 | (byte)*puVar21;
  pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(bVar3,(char)pbVar12));
  uVar18 = (undefined2)((uint)puVar34 >> 0x10);
  bVar27 = (char)((uint)puVar34 >> 8) + pbVar25[100];
  pbVar25 = (byte *)CONCAT22(uVar18,CONCAT11(bVar27,bVar23));
  *pcVar7 = *pcVar7 + cVar5;
  pbVar28 = (byte *)CONCAT31(uVar13,bVar17 + 0x50);
  pbVar31[0x23] = pbVar31[0x23] + cVar4;
  pbStack_8._0_2_ = 0;
  pbVar31 = pbVar28 + 2;
  *pbVar31 = *pbVar31 + cVar4;
  puVar34 = puVar33 + 1;
  if ((POPCOUNT(*pbVar31) & 1U) != 0) goto code_r0x00404439;
  *pbVar28 = *pbVar28 + bVar17 + 0x50;
  cVar4 = bVar17 + 0x78;
  pcVar7 = (char *)CONCAT31(uVar13,cVar4);
  bVar6 = (uVar11 & 0x1000) != 0;
  *pcVar7 = *pcVar7 + cVar4;
  puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(byte)puVar21 | *pbVar30);
  pbVar25 = (byte *)CONCAT22(uVar18,CONCAT11(bVar27 | pbVar30[0x65],bVar23));
  *pcVar7 = *pcVar7 + cVar4;
  bVar17 = bVar17 + 0x9d;
  pcVar7 = (char *)CONCAT31(uVar13,bVar17);
  puVar21 = (uint *)((uint)puVar21 | *puVar21);
  *pcVar7 = *pcVar7 + bVar3;
  puVar34 = (uint *)((int)puVar33 + (uint)bVar35 * -2 + 5);
  *(byte *)(puVar33 + 1) = bVar17;
  *pcVar7 = *pcVar7 + bVar17;
  bVar17 = bVar17 | (byte)*puVar21;
  pbVar28 = (byte *)CONCAT31(uVar13,bVar17);
  if ((POPCOUNT(bVar17) & 1U) != 0) goto code_r0x00404454;
  *pbVar28 = *pbVar28 + bVar17;
  cVar4 = bVar17 + 2;
  pbVar28 = (byte *)CONCAT31(uVar13,cVar4);
  *unaff_EBP = *unaff_EBP - bVar23;
  *pbVar30 = *pbVar30 + cVar4;
  pbVar31 = pbVar30 + (uint)bVar35 * -8 + 4;
  out(*(undefined4 *)pbVar30,(short)puVar21);
  puVar33 = (uint *)((int)puVar34 + (uint)bVar35 * -2 + 1);
  pbVar30 = pbVar31 + (uint)bVar35 * -2 + 1;
  *(byte *)puVar34 = *pbVar31;
  *pbVar28 = *pbVar28 + cVar4;
  in_stack_fffffffc = (char *)0x0;
  do {
    cVar5 = (char)((uint)pbVar12 >> 8);
    pbVar25[-0x21f60000] = pbVar25[-0x21f60000] - cVar5;
    uVar13 = (undefined3)((uint)pbVar28 >> 8);
    cVar4 = ((byte)pbVar28 | *pbVar30) - 6;
    piVar9 = (int *)CONCAT31(uVar13,cVar4);
    pbStack_8._0_2_ = (ushort)in_stack_fffffffc;
    pcVar7 = (char *)((int)piVar9 * 2 + 0x2adc0a00);
    *pcVar7 = *pcVar7 - cVar5;
    *piVar9 = (int)(*piVar9 + (int)puVar21);
    *(char *)piVar9 = (char)*piVar9 + cVar4;
    bVar3 = cVar4 + (char)*piVar9;
    bVar6 = 9 < (bVar3 & 0xf) | bVar6;
    uVar11 = CONCAT31(uVar13,bVar3 + bVar6 * '\x06') & 0xffffff0f;
    pbVar28 = (byte *)CONCAT22((short)(uVar11 >> 0x10),
                               CONCAT11((char)((uint)pbVar28 >> 8) + bVar6,(char)uVar11));
    puVar34 = puVar33;
code_r0x00404417:
    *pbVar30 = *pbVar30 + (char)((uint)pbVar28 >> 8);
    unaff_EBP = (char *)0x17000000;
    *(byte *)puVar21 = (byte)*puVar21 + (char)pbVar12;
    bVar17 = (byte)pbVar28;
    *pbVar28 = *pbVar28 + bVar17;
    bVar3 = *pbVar28;
    *pbVar28 = *pbVar28 + bVar17;
    puVar33 = puVar34;
    if (!CARRY1(bVar3,bVar17)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar28 = *pbVar28 + (byte)pbVar28;
    pbVar28 = (byte *)CONCAT31((int3)((uint)pbVar28 >> 8),(byte)pbVar28 | pbVar28[0x4000065]);
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(char)pbVar25 - *pbVar30);
    bVar3 = *pbVar28;
    bVar17 = (byte)((uint)pbVar12 >> 8);
    cVar4 = (char)pbVar12;
    pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(bVar17 + *pbVar28,cVar4));
    iVar16 = *(int *)pbVar28;
    *(byte *)puVar21 = (byte)*puVar21 + cVar4;
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11((char)((uint)puVar21 >> 8) - *pbVar30,(char)puVar21));
    pbVar28 = pbVar28 + *puVar21 + (uint)CARRY1(bVar17,bVar3) + iVar16;
    puVar34 = puVar33;
    if ((POPCOUNT((uint)pbVar28 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar28 = *pbVar28 + (char)pbVar28;
        uVar13 = (undefined3)((uint)pbVar28 >> 8);
        cVar4 = (char)pbVar28 + 'o';
        pcVar7 = (char *)CONCAT31(uVar13,cVar4);
        *(char **)pbVar12 = pcVar7 + *(int *)pbVar12;
        *(byte *)puVar21 = (byte)*puVar21 + (char)pbVar12;
        bVar17 = cVar4 - *pcVar7;
        pbVar28 = (byte *)CONCAT31(uVar13,bVar17);
        *pbVar25 = *pbVar25 + (char)puVar21;
        *pbVar25 = *pbVar25 ^ bVar17;
        pbVar25[0x26000000] = pbVar25[0x26000000] + (char)((uint)pbVar12 >> 8);
        bVar3 = *pbVar28;
        *pbVar28 = *pbVar28 + bVar17;
        *(byte **)(pbVar25 + 0xb) = pbVar30 + (uint)CARRY1(bVar3,bVar17) + *(int *)(pbVar25 + 0xb);
        *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
code_r0x00404454:
        in_stack_fffffffc = (char *)(uint)(ushort)pbStack_8;
        pbVar28 = (byte *)((uint)pbVar28 | 0x1027309);
        uVar11 = *puVar21;
        bVar3 = (byte)pbVar12;
        uVar1 = *puVar21;
        *(byte *)puVar21 = (byte)*puVar21 + bVar3;
        if (SCARRY1((byte)uVar1,bVar3) != (char)(byte)*puVar21 < '\0') {
          *pbVar28 = *pbVar28 + (char)pbVar28;
          *pbVar30 = *pbVar30 + 1;
          puVar33 = (uint *)(CONCAT31((int3)((uint)pbVar28 >> 8),(char)pbVar28 + '\t') | 1);
          bVar6 = *pbVar30;
          bVar17 = (byte)puVar33;
          *pbVar30 = *pbVar30 + bVar17;
          if (CARRY1(bVar6,bVar17)) {
            *puVar33 = *puVar33 + (int)puVar33;
            puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                       CONCAT11((byte)((uint)puVar21 >> 8) | pbVar25[4],
                                                (char)puVar21));
          }
          else if (!CARRY1(bVar6,bVar17)) goto code_r0x00404473;
          *puVar33 = *puVar33 + (int)puVar33;
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar3 | (byte)*puVar21);
code_r0x00404473:
          uVar18 = (undefined2)((uint)pbVar12 >> 0x10);
          cVar5 = (char)pbVar12;
          bVar6 = (char)((uint)pbVar12 >> 8) + (char)*puVar33;
          uVar11 = *puVar33;
          *pbVar25 = *pbVar25 + bVar6;
          pbVar28 = (byte *)((uint)puVar33 & uVar11 | *puVar34);
          pbVar32 = pbVar30 + (uint)bVar35 * -8 + 4;
          out(*(undefined4 *)pbVar30,(short)puVar21);
          *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
          bVar6 = bVar6 | *pbVar28;
          *pbVar25 = *pbVar25 + bVar6;
          uVar13 = (undefined3)((uint)pbVar28 >> 8);
          pcVar7 = (char *)CONCAT31(uVar13,0xea);
          *(uint *)(pbVar25 + -0x3d) = *(uint *)(pbVar25 + -0x3d) | (uint)puVar34;
          *pcVar7 = *pcVar7 + -0x16;
          pbVar31 = (byte *)CONCAT31(uVar13,0x59);
          *pbVar31 = *pbVar31 + 0x59;
          bVar6 = bVar6 | *pbVar31;
          pbVar12 = (byte *)CONCAT22(uVar18,CONCAT11(bVar6,cVar5));
          *pbVar12 = *pbVar12 | 0x59;
          *(byte *)puVar21 = (byte)*puVar21 + cVar5;
          *pbVar12 = *pbVar12 - cVar5;
          *(byte **)pbVar31 = pbVar31 + *(int *)pbVar31;
          pbVar31 = pbVar32 + (uint)bVar35 * -8 + 4;
          out(*(undefined4 *)pbVar32,(short)puVar21);
          bVar3 = (byte)*puVar34 | 0x59 | *pbVar12;
          *(byte *)puVar21 = (byte)*puVar21 + cVar5;
          pcVar7 = (char *)CONCAT22((short)((uint)pbVar28 >> 0x10),
                                    CONCAT11((char)((uint)pbVar28 >> 8) - (char)pbVar25,bVar3));
          *pcVar7 = *pcVar7 + bVar3;
          cVar4 = (bVar3 | 8) - 2;
          piVar9 = (int *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar4);
          bVar36 = ((ushort)pbStack_8 & 0x400) != 0;
          bVar35 = ((ushort)pbStack_8 & 0x10) != 0;
          *(char *)piVar9 = (char)*piVar9 + cVar4;
          uVar20 = CONCAT11((byte)((uint)puVar21 >> 8) | pbVar25[0xb],(char)puVar21);
          pcVar7 = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),uVar20);
          *piVar9 = (int)(*piVar9 + (int)piVar9);
          bVar6 = bVar6 | *(byte *)((int)puVar34 + -0x2a);
          *(char *)piVar9 = (char)*piVar9 + cVar4;
          pbVar28 = pbVar31 + (uint)bVar36 * -8 + 4;
          out(*(undefined4 *)pbVar31,uVar20);
          *pcVar7 = *pcVar7 + cVar5;
          out(*(undefined4 *)pbVar28,uVar20);
          *pcVar7 = *pcVar7 + cVar5;
          pbVar12 = (byte *)((uint)pcVar7 & 0xffffff00);
          bVar6 = bVar6 | pbVar12[CONCAT22(uVar18,CONCAT11(bVar6,cVar5))];
          pbVar31 = (byte *)CONCAT22(uVar18,CONCAT11(bVar6,cVar5));
          pbVar30 = pbVar28 + (uint)bVar36 * -8 + 4 + (uint)bVar36 * -8 + 4;
          out(*(undefined4 *)(pbVar28 + (uint)bVar36 * -8 + 4),(short)pbVar12);
          bVar3 = *pbVar31;
          puVar33 = (uint *)CONCAT31(0xf80a00,bVar3);
          *pbVar12 = *pbVar12 + cVar5;
          pbVar28 = pbVar30;
          if (*pbVar12 != 0) {
            *(byte *)puVar33 = (byte)*puVar33 + bVar3;
            pbVar31 = (byte *)CONCAT22(uVar18,CONCAT11(bVar6 + (byte)*puVar33,cVar5));
            *pbVar30 = *pbVar30;
            pbVar28 = pbVar30 + (uint)bVar36 * -8 + 4;
            out(*(undefined4 *)pbVar30,(short)pbVar12);
            puVar33 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar34 | *pbVar31);
          }
          *pbVar12 = *pbVar12 + (char)pbVar31;
          pbVar30 = pbVar12;
          if (*pbVar12 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar33 = (byte)*puVar33 + (byte)puVar33;
            pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),(char)pbVar31 + (byte)*puVar33);
            pbVar31[0x2a060000] = pbVar31[0x2a060000] - (char)((uint)pbVar12 >> 8);
            *pbVar25 = *pbVar25 + (char)pbVar12;
            *pbVar12 = *pbVar12 ^ (byte)puVar33;
            pbVar30 = pbVar12;
code_r0x004044ff:
            cVar4 = (char)((uint)pbVar31 >> 8);
            *pbVar30 = *pbVar30 + cVar4;
            uVar11 = *puVar33;
            bVar3 = (byte)puVar33;
            *(byte *)puVar33 = (byte)*puVar33 + bVar3;
            bVar6 = 9 < (bVar3 & 0xf) | bVar35;
            uVar13 = (undefined3)((uint)puVar33 >> 8);
            bVar17 = bVar3 + bVar6 * '\x06';
            bVar17 = bVar17 + (0x90 < (bVar17 & 0xf0) |
                              CARRY1((byte)uVar11,bVar3) | bVar6 * (0xf9 < bVar17)) * '`';
            pbVar12 = (byte *)CONCAT31(uVar13,bVar17);
            bVar3 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar17;
            *(byte **)pbVar30 = pbVar12 + (uint)CARRY1(bVar3,bVar17) + *(int *)pbVar30;
            out(*(undefined4 *)pbVar28,(short)pbVar30);
            *pbVar12 = *pbVar12 + bVar17;
            bVar17 = bVar17 - 0xe;
            pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                       CONCAT11(cVar4 + *(byte *)((int)puVar34 + 0x3e),(char)pbVar31
                                               ));
            *(char *)CONCAT31(uVar13,bVar17) = *(char *)CONCAT31(uVar13,bVar17) + bVar17;
            bVar6 = 9 < (bVar17 & 0xf) | bVar6;
            bVar17 = bVar17 + bVar6 * -6;
            bVar3 = 0x9f < bVar17 | bVar6 * (bVar17 < 6);
            puVar33 = (uint *)CONCAT31(uVar13,bVar17 + bVar3 * -0x60);
            pbVar30[0x5d] = pbVar30[0x5d] + (char)((uint)pbVar30 >> 8) + bVar3;
            *puVar33 = *puVar33 | (uint)puVar33;
            pbVar32 = pbVar28 + (uint)bVar36 * -8 + 4;
            while( true ) {
              bVar36 = ((ushort)pbStack_8 & 0x400) != 0;
              bVar35 = ((ushort)pbStack_8 & 0x10) != 0;
              *(byte *)puVar33 = (char)*puVar33 + (byte)puVar33;
              bVar17 = (byte)pbVar30 | *pbVar32;
              pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),bVar17);
              cVar4 = (char)pbVar31;
              *pbVar31 = *pbVar31 - cVar4;
              *puVar33 = (uint)(*puVar33 + (int)puVar33);
              uVar13 = (undefined3)((uint)puVar33 >> 8);
              bVar6 = (byte)puVar33 | *pbVar12;
              pbVar28 = pbVar32 + (uint)bVar36 * -8 + 4;
              out(*(undefined4 *)pbVar32,(short)pbVar12);
              *(char *)CONCAT31(uVar13,bVar6) = *(char *)CONCAT31(uVar13,bVar6) + bVar6;
              cVar5 = (char)((uint)pbVar31 >> 8);
              *unaff_EBP = *unaff_EBP - cVar5;
              *pbVar12 = *pbVar12 + cVar4;
              bVar3 = bVar6 - 0x17;
              cVar5 = cVar5 + *(byte *)((int)puVar34 + 0x46);
              pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),CONCAT11(cVar5,cVar4));
              *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
              *unaff_EBP = *unaff_EBP - cVar5;
              *pbVar12 = *pbVar12 + cVar4;
              bVar6 = bVar6 - 0x21;
              puVar33 = (uint *)CONCAT31(uVar13,bVar6);
              if (bVar3 < 10) break;
              *puVar33 = *puVar33 | (uint)puVar33;
              *(byte *)puVar33 = (byte)*puVar33 + bVar6;
              pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar30 >> 8) | pbVar12[0x6e],bVar17)
                                        );
              bVar6 = bVar6 | (byte)*puVar33;
              *(char *)CONCAT31(uVar13,bVar6) = *(char *)CONCAT31(uVar13,bVar6) + bVar6;
              puVar33 = (uint *)CONCAT31(uVar13,bVar6 | *pbVar30);
              pbVar32 = pbVar28;
            }
          } while( true );
        }
        puVar33 = puVar34;
        if (CARRY1((byte)uVar11,bVar3)) goto code_r0x00404423;
code_r0x00404436:
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[-0x3d],
                                            (char)pbVar25));
      } while( true );
    }
    *pbVar30 = *pbVar30 + (char)pbVar28;
  } while( true );
}


