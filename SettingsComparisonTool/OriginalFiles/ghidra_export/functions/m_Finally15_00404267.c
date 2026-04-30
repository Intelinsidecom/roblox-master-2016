/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404267
 * Raw Name    : <>m__Finally15
 * Demangled   : <>m__Finally15
 * Prototype   : int <>m__Finally15(byte * param_1, uint * param_2)
 * Local Vars  : puVar24, pbVar23, pcVar25, unaff_EBX, cVar27, pbVar26, unaff_EBP, bVar28, pbVar29, unaff_ESI, pbVar31, puVar30, puVar32, unaff_EDI, in_ES, puVar33, bVar34, in_DS, bVar35, in_AF, unaff_retaddr, bVar36, in_stack_fffffffc, param_1, param_2, puStack_24, pcStack_1c, iStack_20, pbStack_10, puStack_14, uVar1, pbStack_8, cVar3, iVar2, bVar5, cVar4, in_EAX, bVar6, piVar8, pcVar7, pcVar10, pbVar9, uVar12, puVar11, uVar14, uVar13, bVar16, cVar15, uVar18, bVar17, uVar20, cVar19, pbVar22, uVar21
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

int __fastcall <>m__Finally15(byte *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined4 in_EAX;
  char *pcVar7;
  undefined3 uVar13;
  int *piVar8;
  char *pcVar10;
  uint3 uVar14;
  undefined1 *puVar11;
  uint uVar12;
  char cVar15;
  byte bVar16;
  byte bVar17;
  undefined2 uVar18;
  char cVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint *puVar24;
  byte bVar28;
  char *unaff_EBX;
  char *pcVar25;
  byte *pbVar26;
  char *unaff_EBP;
  char *unaff_ESI;
  byte *pbVar29;
  undefined4 *puVar30;
  byte *pbVar31;
  char *unaff_EDI;
  uint *puVar32;
  uint *puVar33;
  ushort in_ES;
  undefined2 in_DS;
  bool bVar34;
  byte in_AF;
  bool bVar35;
  bool bVar36;
  undefined2 unaff_retaddr;
  undefined1 *puStack_24;
  int iStack_20;
  char *pcStack_1c;
  uint *puStack_14;
  byte *pbStack_10;
  byte *pbStack_8;
  char *in_stack_fffffffc;
  byte *pbVar9;
  char cVar27;
  
  bVar35 = false;
code_r0x00404267:
                    /* .NET CLR Managed Code */
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cRam0000ba7d);
  cVar3 = (char)in_EAX + '\x02';
  pcVar7 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar3);
  bVar34 = (POPCOUNT(cVar3) & 1U) == 0;
  do {
    pcVar25 = unaff_EBX;
    if (!bVar34) {
      pcVar7 = (char *)((uint)pcVar7 & 0xffffff61);
      *unaff_EDI = *unaff_EDI + (char)pcVar7;
      pcVar10 = unaff_ESI;
      goto code_r0x00404234;
    }
    *pcVar7 = *pcVar7 + (char)pcVar7;
    pcVar7 = (char *)CONCAT31((int3)((uint)pcVar7 >> 8),(char)pcVar7 + ',');
    while( true ) {
      pcVar7 = (char *)((uint)pcVar7 | *param_2);
      pcVar10 = unaff_ESI;
      if ((POPCOUNT((uint)pcVar7 & 0xff) & 1U) != 0) goto code_r0x00404238;
      cVar3 = (char)pcVar7;
      *pcVar7 = *pcVar7 + cVar3;
      uVar13 = (undefined3)((uint)pcVar7 >> 8);
      cVar4 = cVar3 + 'o';
      pbVar29 = (byte *)CONCAT31(uVar13,cVar4);
      pbVar22 = (byte *)((int)param_2 + 1);
      *pbVar29 = *pbVar29 + cVar4;
      uVar18 = (undefined2)((uint)param_1 >> 0x10);
      cVar15 = (char)param_1;
      bVar16 = (byte)((uint)param_1 >> 8) | *pbVar22;
      param_1 = (byte *)CONCAT22(uVar18,CONCAT11(bVar16,cVar15));
      pcVar10 = unaff_ESI + 1;
      out(*unaff_ESI,(short)pbVar22);
      cVar19 = (char)pbVar22 + *unaff_EDI;
      puVar32 = (uint *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar19);
      cVar27 = (char)pcVar25;
      if (SCARRY1((char)pbVar22,*unaff_EDI) == cVar19 < '\0') {
        *pbVar29 = *pbVar29 + cVar4;
        *pcVar10 = *pcVar10 + cVar27;
        goto System_Collections_IEnumerator_get_Current;
      }
      *pbVar29 = *pbVar29 + cVar4;
      cVar4 = cVar3 + 'q';
      pbVar29 = (byte *)CONCAT31(uVar13,cVar4);
      if ((POPCOUNT(cVar4) & 1U) != 0) {
        param_1 = (byte *)CONCAT22(uVar18,CONCAT11(bVar16 + *pbVar29,cVar15));
        goto System_Collections_IEnumerator_get_Current;
      }
      *pbVar29 = *pbVar29 + cVar4;
      bVar36 = false;
      piVar8 = (int *)(CONCAT31(uVar13,cVar3 + -99) | *puVar32);
      bVar34 = (int)piVar8 < 0;
      param_2 = puVar32;
      unaff_EBX = pcVar25;
      if ((POPCOUNT((uint)piVar8 & 0xff) & 1U) != 0) goto code_r0x00404255;
      cVar3 = (char)piVar8;
      *(char *)piVar8 = (char)*piVar8 + cVar3;
      uVar13 = (undefined3)((uint)piVar8 >> 8);
      cVar4 = cVar3 + 'o';
      pcVar7 = (char *)CONCAT31(uVar13,cVar4);
      param_2 = (uint *)((int)puVar32 + 1);
      *pcVar7 = *pcVar7 + cVar4;
      bVar6 = *(byte *)param_2;
      param_1 = (byte *)CONCAT22(uVar18,CONCAT11(bVar16 | bVar6,cVar15));
      unaff_ESI = unaff_ESI + 2;
      out(*pcVar10,(short)param_2);
      cVar19 = cVar27 + *pcVar7;
      unaff_EBX = (char *)CONCAT31((int3)((uint)pcVar25 >> 8),cVar19);
      if (SCARRY1(cVar27,*pcVar7) == cVar19 < '\0') goto code_r0x0040425d;
      *pcVar7 = *pcVar7 + cVar4;
      cVar4 = cVar3 + 'q';
      pcVar7 = (char *)CONCAT31(uVar13,cVar4);
      bVar34 = (POPCOUNT(cVar4) & 1U) == 0;
      if (!bVar34) break;
      *pcVar7 = *pcVar7 + cVar4;
      pcVar7 = (char *)(CONCAT31(uVar13,cVar3 + -99) | *param_2);
      cVar3 = (char)pcVar7;
      if ((POPCOUNT((uint)pcVar7 & 0xff) & 1U) == 0) {
        *pcVar7 = *pcVar7 + cVar3;
        uVar13 = (undefined3)((uint)pcVar7 >> 8);
        bVar5 = cVar3 + 0x6f;
        pbVar22 = (byte *)CONCAT31(uVar13,bVar5);
        pbVar23 = (byte *)((int)puVar32 + 2);
        *pbVar22 = *pbVar22 + bVar5;
        bVar17 = bVar16 | bVar6 | *pbVar23;
        pcVar7 = (char *)CONCAT22(uVar18,CONCAT11(bVar17,cVar15));
        bVar16 = *pbVar22;
        *pbVar22 = *pbVar22 + bVar5;
        pbVar29 = (byte *)(unaff_ESI + (uint)CARRY1(bVar16,bVar5) + *(int *)pbVar22);
        bVar6 = bVar5 + *pbVar22;
        pbVar9 = (byte *)CONCAT31(uVar13,bVar6);
        *pbVar9 = (*pbVar9 - bVar6) - CARRY1(bVar5,*pbVar22);
        *pbVar9 = *pbVar9 + bVar6;
        bVar16 = *pbVar9;
        piVar8 = (int *)CONCAT31(uVar13,bVar6 & bVar16);
        *pcVar7 = *pcVar7 + (char)pbVar23;
        unaff_EBX[7] = unaff_EBX[7] + '\x01';
        *piVar8 = *piVar8 + (int)piVar8;
        bVar16 = bVar6 & bVar16 | *pbVar29;
        cVar3 = unaff_EBP[-0x44];
        uVar21 = (undefined2)((uint)pcVar25 >> 0x10);
        *(char *)CONCAT31(uVar13,bVar16) = *(char *)CONCAT31(uVar13,bVar16) + bVar16;
        pcVar7 = (char *)CONCAT31(uVar13,bVar16 + 6);
        puVar32 = (uint *)(unaff_EDI + *(int *)(unaff_EBP + -0x42));
        *pcVar7 = *pcVar7 + bVar16 + 6;
        pbVar22 = (byte *)CONCAT31(uVar13,bVar16 + 0xc);
        cVar27 = ((char)((uint)pcVar25 >> 8) + cVar3) - *pbVar23;
        pcVar25 = (char *)CONCAT22(uVar21,CONCAT11(cVar27,cVar19));
        bVar16 = *pbVar22;
        bVar6 = *pbVar22;
        pcVar7 = (char *)CONCAT22(uVar18,CONCAT11(bVar17 + bVar6,cVar15));
        iVar2 = *(int *)pbVar22;
        *pbVar23 = *pbVar23 + cVar15;
        cVar4 = (char)(pbVar22 + (uint)CARRY1(bVar17,bVar16) + iVar2);
        uVar13 = (undefined3)((uint)(pbVar22 + (uint)CARRY1(bVar17,bVar16) + iVar2) >> 8);
        cVar3 = cVar4 + *pcVar25;
        puVar24 = (uint *)CONCAT31(uVar13,cVar3);
        if (SCARRY1(cVar4,*pcVar25) == cVar3 < '\0') {
code_r0x0040431c:
          *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
          func_0x2a4a4325();
          bVar6 = (byte)pbStack_8;
          *pbStack_8 = *pbStack_8 + bVar6;
          bVar16 = *pbStack_8;
          uVar14 = (uint3)((uint)pbStack_8 >> 8);
          piVar8 = (int *)CONCAT31(uVar14,bVar6 - bVar16);
          puVar30 = (undefined4 *)((iStack_20 - *piVar8) - (uint)(bVar6 < *pbStack_8));
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          *(byte *)piVar8 = (char)*piVar8 + (bVar6 - bVar16);
          puVar11 = (undefined1 *)((uint)(uVar14 & 0x21100) << 8);
          *pcStack_1c = *pcStack_1c - (char)puStack_14;
          *(undefined1 *)puVar30 = *(undefined1 *)puVar30;
          uVar18 = SUB42(pbStack_10,0);
          out(*puVar30,uVar18);
          puVar32 = (uint *)(puStack_24 + 1);
          *puStack_24 = *(undefined1 *)(puVar30 + 1);
          *puVar11 = *puVar11;
          out(*(undefined4 *)((int)puVar30 + 5),uVar18);
          *pbStack_10 = *pbStack_10 + 0x25;
          unaff_EBP = (char *)((uint)pcStack_1c | *puStack_14);
          uVar12 = *puVar32;
          out(*(undefined4 *)((int)puVar30 + 9),uVar18);
          *pbStack_10 = *pbStack_10 + 0x25;
          bVar16 = (byte)uVar12 | *(byte *)((int)puVar30 + 0xd);
          out(*(undefined4 *)((int)puVar30 + 0xd),uVar18);
          cVar3 = bVar16 - *(char *)(CONCAT31(uVar14,bVar16) & 0x21100ff);
          pcVar7 = (char *)(CONCAT31(uVar14,cVar3) & 0x21100ff);
          *pbStack_10 = *pbStack_10 + 0x25;
          unaff_EBP[0x70a0000] = unaff_EBP[0x70a0000] - (char)puStack_14;
          pbVar29 = (byte *)((int)puVar30 + 0x15);
          out(*(undefined4 *)((int)puVar30 + 0x11),uVar18);
          *pcVar7 = *pcVar7 + cVar3;
          pbVar9 = (byte *)CONCAT22(0x40,CONCAT11(bRam070adee6 | 0x43,0x26));
          puVar24 = (uint *)(CONCAT31(uVar14,cVar3 + -6) & 0x21100ff);
          pbVar22 = pbStack_10;
          puVar33 = puStack_14;
        }
        else {
          *(char *)puVar24 = (char)*puVar24 + cVar3;
          pcVar10 = (char *)CONCAT31(uVar13,cVar3 + '*');
          cVar27 = cVar27 + pcVar25[0x60];
          *pcVar10 = *pcVar10 + cVar3 + '*';
          cVar4 = cVar3 + '-';
          out(*(undefined4 *)pbVar29,(short)pbVar23);
          *pcVar7 = *pcVar7 + cVar4;
          *pbVar23 = *pbVar23 + cVar15;
          uVar20 = CONCAT11((char)((uint)pbVar23 >> 8) - pbVar29[4],(char)pbVar23);
          pbVar22 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),uVar20);
          cVar27 = cVar27 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar27,cVar19)) + 0x60);
          *(char *)CONCAT31(uVar13,cVar4) = *(char *)CONCAT31(uVar13,cVar4) + cVar4;
          bVar16 = cVar3 + 0x30;
          pcVar7 = (char *)CONCAT31(uVar13,bVar16);
          out(*(undefined4 *)(pbVar29 + 4),uVar20);
          *pcVar7 = *pcVar7 + bVar16;
          pbVar9 = (byte *)CONCAT22(uVar18,CONCAT11(bVar17 + bVar6 | *pbVar22,cVar15));
          pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,unaff_retaddr);
          puVar33 = (uint *)CONCAT22(uVar21,CONCAT11(cVar27 + *(char *)(CONCAT22(uVar21,CONCAT11(
                                                  cVar27,cVar19)) + 0x60),cVar19));
          *pcVar7 = *pcVar7 + bVar16;
          bVar6 = cVar3 + 0x5a;
          puVar24 = (uint *)CONCAT31(uVar13,bVar6);
          pbVar29 = pbVar29 + 9;
          in_stack_fffffffc = unaff_EBP;
          if (bVar16 < 0xd6) {
            *puVar24 = *puVar24 | (uint)puVar24;
            if ((POPCOUNT(*puVar24 & 0xff) & 1U) == 0) goto code_r0x0040431c;
            uVar12 = *puVar24;
            puVar24 = (uint *)CONCAT31(uVar13,bVar6 + (char)*puVar24);
            *puVar24 = (uint)((int)puVar24 + (uint)CARRY1(bVar6,(byte)uVar12) + *puVar24);
          }
        }
        pbStack_8._0_2_ = in_ES;
        pbVar23 = pbVar29 + 4;
        out(*(undefined4 *)pbVar29,(short)pbVar22);
        pbVar29 = pbVar22 + 1;
        *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
        bVar17 = (byte)puVar33 | (byte)((uint)puVar24 >> 8);
        pbVar26 = (byte *)CONCAT31((int3)((uint)puVar33 >> 8),bVar17);
        uVar13 = (undefined3)((uint)puVar24 >> 8);
        bVar5 = (char)puVar24 - (char)*puVar24;
        bVar16 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar5;
        *(char *)CONCAT31(uVar13,bVar5) =
             *(char *)CONCAT31(uVar13,bVar5) + bVar5 + CARRY1(bVar16,bVar5);
        *pbVar29 = *pbVar29 + bVar5;
        *pbVar9 = *pbVar9 + (char)pbVar29;
        bVar16 = *pbVar23;
        *pbVar23 = *pbVar23 + bVar17;
        bVar6 = 9 < (bVar5 & 0xf) | in_AF;
        bVar5 = bVar5 + bVar6 * -6;
        cVar3 = bVar5 + (0x9f < bVar5 | CARRY1(bVar16,bVar17) | bVar6 * (bVar5 < 6)) * -0x60;
        pcVar7 = (char *)CONCAT31(uVar13,cVar3);
        *pbVar29 = *pbVar29 + (char)pbVar9;
        *pcVar7 = *pcVar7 + cVar3;
        *pcVar7 = *pcVar7 + cVar3;
        puVar24 = (uint *)(pbVar22 + 2);
        uVar12 = CONCAT31(uVar13,cVar3 + *pbVar26) + 0x6128;
        uVar13 = (undefined3)(uVar12 >> 8);
        cVar3 = (char)uVar12 + *(char *)((int)puVar32 * 2 + 0x4000064);
        bVar5 = cVar3 - *(char *)CONCAT31(uVar13,cVar3);
        pbVar29 = (byte *)CONCAT31(uVar13,bVar5);
        bVar16 = *pbVar29;
        *pbVar29 = *pbVar29 + bVar5;
        pbVar23 = pbVar23 + (-(uint)CARRY1(bVar16,bVar5) - *(int *)pbVar29);
        bVar5 = bVar5 + *pbVar29;
        pbVar29 = (byte *)CONCAT31(uVar13,bVar5);
        bVar16 = *pbVar29;
        *pbVar29 = *pbVar29 + bVar5;
        *puVar24 = (uint)(pbVar29 + (uint)CARRY1(bVar16,bVar5) + *puVar24);
        cVar3 = (char)((uint)puVar24 >> 8);
        if ((POPCOUNT(*puVar24 & 0xff) & 1U) != 0) {
          cVar4 = bVar5 - *pbVar9;
          pbVar29 = (byte *)CONCAT31(uVar13,cVar4);
          *pbVar29 = *pbVar29 + cVar4 + (bVar5 < *pbVar9);
          *(byte *)puVar24 = (byte)*puVar24 + cVar4;
          *(byte *)puVar32 = (byte)*puVar32 + cVar3;
          puVar33 = puVar32;
          goto code_r0x00404417;
        }
        *pbVar29 = *pbVar29 + bVar5;
        cVar4 = bVar5 + 0x28;
        pcVar7 = (char *)CONCAT31(uVar13,cVar4);
        uVar1 = in((short)puVar24);
        *puVar32 = uVar1;
        *pcVar7 = *pcVar7 + cVar4;
        bVar16 = pbVar26[(int)pbVar9];
        pcVar7[0x28] = pcVar7[0x28] + cVar3;
        bVar35 = ((ushort)pbStack_8 & 0x400) != 0;
        bVar6 = ((ushort)pbStack_8 & 0x10) != 0;
        *pcVar7 = *pcVar7 + cVar4;
        bVar16 = (byte)((uint)pbVar9 >> 8) | bVar16 | (byte)*puVar24;
        pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),CONCAT11(bVar16,(char)pbVar9));
        uVar18 = (undefined2)((uint)puVar33 >> 0x10);
        bVar28 = (char)((uint)puVar33 >> 8) + pbVar26[100];
        pbVar26 = (byte *)CONCAT22(uVar18,CONCAT11(bVar28,bVar17));
        *pcVar7 = *pcVar7 + cVar4;
        pbVar29 = (byte *)CONCAT31(uVar13,bVar5 + 0x50);
        pbVar22[0x23] = pbVar22[0x23] + cVar3;
        pbStack_8._0_2_ = 0;
        pbVar22 = pbVar29 + 2;
        *pbVar22 = *pbVar22 + cVar3;
        puVar33 = puVar32 + 1;
        if ((POPCOUNT(*pbVar22) & 1U) != 0) goto code_r0x00404439;
        *pbVar29 = *pbVar29 + bVar5 + 0x50;
        cVar3 = bVar5 + 0x78;
        pcVar7 = (char *)CONCAT31(uVar13,cVar3);
        bVar6 = (uVar12 & 0x1000) != 0;
        *pcVar7 = *pcVar7 + cVar3;
        puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(byte)puVar24 | *pbVar23);
        pbVar26 = (byte *)CONCAT22(uVar18,CONCAT11(bVar28 | pbVar23[0x65],bVar17));
        *pcVar7 = *pcVar7 + cVar3;
        bVar5 = bVar5 + 0x9d;
        pcVar7 = (char *)CONCAT31(uVar13,bVar5);
        puVar24 = (uint *)((uint)puVar24 | *puVar24);
        *pcVar7 = *pcVar7 + bVar16;
        puVar33 = (uint *)((int)puVar32 + (uint)bVar35 * -2 + 5);
        *(byte *)(puVar32 + 1) = bVar5;
        *pcVar7 = *pcVar7 + bVar5;
        bVar5 = bVar5 | (byte)*puVar24;
        pbVar29 = (byte *)CONCAT31(uVar13,bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00404454;
        *pbVar29 = *pbVar29 + bVar5;
        cVar3 = bVar5 + 2;
        pbVar29 = (byte *)CONCAT31(uVar13,cVar3);
        *unaff_EBP = *unaff_EBP - bVar17;
        *pbVar23 = *pbVar23 + cVar3;
        pbVar22 = pbVar23 + (uint)bVar35 * -8 + 4;
        out(*(undefined4 *)pbVar23,(short)puVar24);
        puVar32 = (uint *)((int)puVar33 + (uint)bVar35 * -2 + 1);
        pbVar23 = pbVar22 + (uint)bVar35 * -2 + 1;
        *(byte *)puVar33 = *pbVar22;
        *pbVar29 = *pbVar29 + cVar3;
        in_stack_fffffffc = (char *)0x0;
        goto code_r0x004043fe;
      }
      unaff_EBP[(int)&stack0x00000000] = unaff_EBP[(int)&stack0x00000000] + cVar3;
      pcVar25 = unaff_EBX;
    }
    param_2 = (uint *)0x2040000;
  } while( true );
code_r0x00404255:
  while (unaff_ESI = pcVar10, bVar16 = (byte)piVar8, bVar36 == bVar34) {
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((char)((uint)param_1 >> 8) + (char)*piVar8,(char)param_1));
    *param_1 = *param_1 | bVar16;
    *unaff_ESI = *unaff_ESI + bVar16;
    *(byte *)piVar8 = (char)*piVar8 + bVar16;
    *piVar8 = (int)(unaff_EBP + *piVar8);
    *(byte *)piVar8 = (char)*piVar8 + bVar16;
    *(byte *)param_2 = (byte)*param_2 + bVar16 + (char)*piVar8;
    cVar3 = (char)unaff_ESI;
    *unaff_EDI = *unaff_EDI + cVar3;
    *unaff_ESI = *unaff_ESI + cVar3;
    *unaff_ESI = *unaff_ESI + cVar3;
    pcVar7 = (char *)CONCAT31((int3)((uint)unaff_ESI >> 8),cVar3 + *unaff_ESI);
    pcVar25 = unaff_EBX;
    pcVar10 = unaff_ESI;
code_r0x00404234:
    *pcVar7 = *pcVar7 + (char)pcVar7;
    *pcVar7 = *pcVar7 + (char)pcVar7;
code_r0x00404238:
    bVar16 = (char)pcVar7 + *pcVar7;
    pbVar29 = (byte *)CONCAT31((int3)((uint)pcVar7 >> 8),bVar16);
    *pbVar29 = *pbVar29 & bVar16;
    puVar32 = (uint *)((int)param_2 + -1);
    in_stack_fffffffc = (char *)0x0;
    in_ES = 0;
    *pbVar29 = *pbVar29 + bVar16;
    *pbVar29 = *pbVar29 + bVar16;
    unaff_retaddr = in_DS;
System_Collections_IEnumerator_get_Current:
    unaff_EBX = (char *)CONCAT22((short)((uint)pcVar25 >> 0x10),
                                 CONCAT11((char)((uint)pcVar25 >> 8) + pcVar25[-0x47],(char)pcVar25)
                                );
    *pbVar29 = *pbVar29 + (char)pbVar29;
    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),(char)pbVar29 + '*');
    bVar16 = *pbVar29;
    bVar6 = (byte)((uint)param_1 >> 8);
    cVar3 = (char)param_1;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6 + *pbVar29,cVar3));
    iVar2 = *(int *)pbVar29;
    *(byte *)puVar32 = (byte)*puVar32 + cVar3;
    cVar4 = (char)(pbVar29 + (uint)CARRY1(bVar6,bVar16) + iVar2);
    cVar3 = cVar4 + *unaff_EBX;
    piVar8 = (int *)CONCAT31((int3)((uint)(pbVar29 + (uint)CARRY1(bVar6,bVar16) + iVar2) >> 8),cVar3
                            );
    bVar34 = cVar3 < '\0';
    param_2 = puVar32;
    bVar36 = SCARRY1(cVar4,*unaff_EBX);
  }
  *(byte *)piVar8 = (char)*piVar8 + bVar16;
  pcVar7 = (char *)CONCAT31((int3)((uint)piVar8 >> 8),(bVar16 + 2) - (char)unaff_EBX);
code_r0x0040425d:
  cVar3 = (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar3;
  unaff_EBX = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x45],
                                        (char)unaff_EBX));
  *pcVar7 = *pcVar7 + cVar3;
  in_EAX = CONCAT31((int3)((uint)pcVar7 >> 8),cVar3 + '*');
  param_2._0_2_ = SUB42(param_2,0);
  out(*unaff_ESI,param_2._0_2_);
  unaff_ESI = unaff_ESI + 1;
  goto code_r0x00404267;
code_r0x004043fe:
  cVar4 = (char)((uint)pbVar9 >> 8);
  pbVar26[-0x21f60000] = pbVar26[-0x21f60000] - cVar4;
  uVar13 = (undefined3)((uint)pbVar29 >> 8);
  cVar3 = ((byte)pbVar29 | *pbVar23) - 6;
  piVar8 = (int *)CONCAT31(uVar13,cVar3);
  pbStack_8._0_2_ = (ushort)in_stack_fffffffc;
  pcVar7 = (char *)((int)piVar8 * 2 + 0x2adc0a00);
  *pcVar7 = *pcVar7 - cVar4;
  *piVar8 = (int)(*piVar8 + (int)puVar24);
  *(char *)piVar8 = (char)*piVar8 + cVar3;
  bVar16 = cVar3 + (char)*piVar8;
  bVar6 = 9 < (bVar16 & 0xf) | bVar6;
  uVar12 = CONCAT31(uVar13,bVar16 + bVar6 * '\x06') & 0xffffff0f;
  pbVar29 = (byte *)CONCAT22((short)(uVar12 >> 0x10),
                             CONCAT11((char)((uint)pbVar29 >> 8) + bVar6,(char)uVar12));
  puVar33 = puVar32;
code_r0x00404417:
  *pbVar23 = *pbVar23 + (char)((uint)pbVar29 >> 8);
  unaff_EBP = (char *)0x17000000;
  *(byte *)puVar24 = (byte)*puVar24 + (char)pbVar9;
  bVar5 = (byte)pbVar29;
  *pbVar29 = *pbVar29 + bVar5;
  bVar16 = *pbVar29;
  *pbVar29 = *pbVar29 + bVar5;
  puVar32 = puVar33;
  if (!CARRY1(bVar16,bVar5)) goto code_r0x00404436;
code_r0x00404423:
  *pbVar29 = *pbVar29 + (byte)pbVar29;
  pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),(byte)pbVar29 | pbVar29[0x4000065]);
  pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(char)pbVar26 - *pbVar23);
  bVar16 = *pbVar29;
  bVar5 = (byte)((uint)pbVar9 >> 8);
  cVar3 = (char)pbVar9;
  pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),CONCAT11(bVar5 + *pbVar29,cVar3));
  iVar2 = *(int *)pbVar29;
  *(byte *)puVar24 = (byte)*puVar24 + cVar3;
  puVar24 = (uint *)CONCAT22((short)((uint)puVar24 >> 0x10),
                             CONCAT11((char)((uint)puVar24 >> 8) - *pbVar23,(char)puVar24));
  pbVar29 = pbVar29 + *puVar24 + (uint)CARRY1(bVar5,bVar16) + iVar2;
  puVar33 = puVar32;
  if ((POPCOUNT((uint)pbVar29 & 0xff) & 1U) == 0) {
code_r0x00404439:
    do {
      *pbVar29 = *pbVar29 + (char)pbVar29;
      uVar13 = (undefined3)((uint)pbVar29 >> 8);
      cVar3 = (char)pbVar29 + 'o';
      pcVar7 = (char *)CONCAT31(uVar13,cVar3);
      *(char **)pbVar9 = pcVar7 + *(int *)pbVar9;
      *(byte *)puVar24 = (byte)*puVar24 + (char)pbVar9;
      bVar5 = cVar3 - *pcVar7;
      pbVar29 = (byte *)CONCAT31(uVar13,bVar5);
      *pbVar26 = *pbVar26 + (char)puVar24;
      *pbVar26 = *pbVar26 ^ bVar5;
      pbVar26[0x26000000] = pbVar26[0x26000000] + (char)((uint)pbVar9 >> 8);
      bVar16 = *pbVar29;
      *pbVar29 = *pbVar29 + bVar5;
      *(byte **)(pbVar26 + 0xb) = pbVar23 + (uint)CARRY1(bVar16,bVar5) + *(int *)(pbVar26 + 0xb);
      *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
code_r0x00404454:
      in_stack_fffffffc = (char *)(uint)(ushort)pbStack_8;
      pbVar29 = (byte *)((uint)pbVar29 | 0x1027309);
      uVar12 = *puVar24;
      bVar16 = (byte)pbVar9;
      uVar1 = *puVar24;
      *(byte *)puVar24 = (byte)*puVar24 + bVar16;
      if (SCARRY1((byte)uVar1,bVar16) != (char)(byte)*puVar24 < '\0') {
        *pbVar29 = *pbVar29 + (char)pbVar29;
        *pbVar23 = *pbVar23 + 1;
        puVar32 = (uint *)(CONCAT31((int3)((uint)pbVar29 >> 8),(char)pbVar29 + '\t') | 1);
        bVar6 = *pbVar23;
        bVar5 = (byte)puVar32;
        *pbVar23 = *pbVar23 + bVar5;
        if (CARRY1(bVar6,bVar5)) {
          *puVar32 = *puVar32 + (int)puVar32;
          puVar24 = (uint *)CONCAT22((short)((uint)puVar24 >> 0x10),
                                     CONCAT11((byte)((uint)puVar24 >> 8) | pbVar26[4],(char)puVar24)
                                    );
        }
        else if (!CARRY1(bVar6,bVar5)) goto code_r0x00404473;
        *puVar32 = *puVar32 + (int)puVar32;
        pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar16 | (byte)*puVar24);
code_r0x00404473:
        uVar18 = (undefined2)((uint)pbVar9 >> 0x10);
        cVar4 = (char)pbVar9;
        bVar6 = (char)((uint)pbVar9 >> 8) + (char)*puVar32;
        uVar12 = *puVar32;
        *pbVar26 = *pbVar26 + bVar6;
        pbVar29 = (byte *)((uint)puVar32 & uVar12 | *puVar33);
        pbVar31 = pbVar23 + (uint)bVar35 * -8 + 4;
        out(*(undefined4 *)pbVar23,(short)puVar24);
        *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
        bVar6 = bVar6 | *pbVar29;
        *pbVar26 = *pbVar26 + bVar6;
        uVar13 = (undefined3)((uint)pbVar29 >> 8);
        pcVar7 = (char *)CONCAT31(uVar13,0xea);
        *(uint *)(pbVar26 + -0x3d) = *(uint *)(pbVar26 + -0x3d) | (uint)puVar33;
        *pcVar7 = *pcVar7 + -0x16;
        pbVar22 = (byte *)CONCAT31(uVar13,0x59);
        *pbVar22 = *pbVar22 + 0x59;
        bVar6 = bVar6 | *pbVar22;
        pbVar9 = (byte *)CONCAT22(uVar18,CONCAT11(bVar6,cVar4));
        *pbVar9 = *pbVar9 | 0x59;
        *(byte *)puVar24 = (byte)*puVar24 + cVar4;
        *pbVar9 = *pbVar9 - cVar4;
        *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
        pbVar22 = pbVar31 + (uint)bVar35 * -8 + 4;
        out(*(undefined4 *)pbVar31,(short)puVar24);
        bVar16 = (byte)*puVar33 | 0x59 | *pbVar9;
        *(byte *)puVar24 = (byte)*puVar24 + cVar4;
        pcVar7 = (char *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                  CONCAT11((char)((uint)pbVar29 >> 8) - (char)pbVar26,bVar16));
        *pcVar7 = *pcVar7 + bVar16;
        cVar3 = (bVar16 | 8) - 2;
        piVar8 = (int *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar3);
        bVar34 = ((ushort)pbStack_8 & 0x400) != 0;
        bVar35 = ((ushort)pbStack_8 & 0x10) != 0;
        *(char *)piVar8 = (char)*piVar8 + cVar3;
        uVar21 = CONCAT11((byte)((uint)puVar24 >> 8) | pbVar26[0xb],(char)puVar24);
        pcVar7 = (char *)CONCAT22((short)((uint)puVar24 >> 0x10),uVar21);
        *piVar8 = (int)(*piVar8 + (int)piVar8);
        bVar6 = bVar6 | *(byte *)((int)puVar33 + -0x2a);
        *(char *)piVar8 = (char)*piVar8 + cVar3;
        pbVar29 = pbVar22 + (uint)bVar34 * -8 + 4;
        out(*(undefined4 *)pbVar22,uVar21);
        *pcVar7 = *pcVar7 + cVar4;
        out(*(undefined4 *)pbVar29,uVar21);
        *pcVar7 = *pcVar7 + cVar4;
        pbVar9 = (byte *)((uint)pcVar7 & 0xffffff00);
        bVar6 = bVar6 | pbVar9[CONCAT22(uVar18,CONCAT11(bVar6,cVar4))];
        pbVar22 = (byte *)CONCAT22(uVar18,CONCAT11(bVar6,cVar4));
        pbVar23 = pbVar29 + (uint)bVar34 * -8 + 4 + (uint)bVar34 * -8 + 4;
        out(*(undefined4 *)(pbVar29 + (uint)bVar34 * -8 + 4),(short)pbVar9);
        bVar16 = *pbVar22;
        puVar32 = (uint *)CONCAT31(0xf80a00,bVar16);
        *pbVar9 = *pbVar9 + cVar4;
        pbVar29 = pbVar23;
        if (*pbVar9 != 0) {
          *(byte *)puVar32 = (byte)*puVar32 + bVar16;
          pbVar22 = (byte *)CONCAT22(uVar18,CONCAT11(bVar6 + (byte)*puVar32,cVar4));
          *pbVar23 = *pbVar23;
          pbVar29 = pbVar23 + (uint)bVar34 * -8 + 4;
          out(*(undefined4 *)pbVar23,(short)pbVar9);
          puVar32 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar33 | *pbVar22);
        }
        *pbVar9 = *pbVar9 + (char)pbVar22;
        pbVar23 = pbVar9;
        if (*pbVar9 == 0) goto code_r0x004044ff;
        do {
          *(byte *)puVar32 = (byte)*puVar32 + (byte)puVar32;
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(char)pbVar22 + (byte)*puVar32);
          pbVar22[0x2a060000] = pbVar22[0x2a060000] - (char)((uint)pbVar9 >> 8);
          *pbVar26 = *pbVar26 + (char)pbVar9;
          *pbVar9 = *pbVar9 ^ (byte)puVar32;
          pbVar23 = pbVar9;
code_r0x004044ff:
          cVar3 = (char)((uint)pbVar22 >> 8);
          *pbVar23 = *pbVar23 + cVar3;
          uVar12 = *puVar32;
          bVar16 = (byte)puVar32;
          *(byte *)puVar32 = (byte)*puVar32 + bVar16;
          bVar6 = 9 < (bVar16 & 0xf) | bVar35;
          uVar13 = (undefined3)((uint)puVar32 >> 8);
          bVar5 = bVar16 + bVar6 * '\x06';
          bVar5 = bVar5 + (0x90 < (bVar5 & 0xf0) |
                          CARRY1((byte)uVar12,bVar16) | bVar6 * (0xf9 < bVar5)) * '`';
          pbVar9 = (byte *)CONCAT31(uVar13,bVar5);
          bVar16 = *pbVar9;
          *pbVar9 = *pbVar9 + bVar5;
          *(byte **)pbVar23 = pbVar9 + (uint)CARRY1(bVar16,bVar5) + *(int *)pbVar23;
          out(*(undefined4 *)pbVar29,(short)pbVar23);
          *pbVar9 = *pbVar9 + bVar5;
          bVar5 = bVar5 - 0xe;
          pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                     CONCAT11(cVar3 + *(byte *)((int)puVar33 + 0x3e),(char)pbVar22))
          ;
          *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
          bVar6 = 9 < (bVar5 & 0xf) | bVar6;
          bVar5 = bVar5 + bVar6 * -6;
          bVar16 = 0x9f < bVar5 | bVar6 * (bVar5 < 6);
          puVar32 = (uint *)CONCAT31(uVar13,bVar5 + bVar16 * -0x60);
          pbVar23[0x5d] = pbVar23[0x5d] + (char)((uint)pbVar23 >> 8) + bVar16;
          *puVar32 = *puVar32 | (uint)puVar32;
          pbVar31 = pbVar29 + (uint)bVar34 * -8 + 4;
          while( true ) {
            bVar34 = ((ushort)pbStack_8 & 0x400) != 0;
            bVar35 = ((ushort)pbStack_8 & 0x10) != 0;
            *(byte *)puVar32 = (char)*puVar32 + (byte)puVar32;
            bVar5 = (byte)pbVar23 | *pbVar31;
            pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),bVar5);
            cVar3 = (char)pbVar22;
            *pbVar22 = *pbVar22 - cVar3;
            *puVar32 = (uint)(*puVar32 + (int)puVar32);
            uVar13 = (undefined3)((uint)puVar32 >> 8);
            bVar6 = (byte)puVar32 | *pbVar9;
            pbVar29 = pbVar31 + (uint)bVar34 * -8 + 4;
            out(*(undefined4 *)pbVar31,(short)pbVar9);
            *(char *)CONCAT31(uVar13,bVar6) = *(char *)CONCAT31(uVar13,bVar6) + bVar6;
            cVar4 = (char)((uint)pbVar22 >> 8);
            *unaff_EBP = *unaff_EBP - cVar4;
            *pbVar9 = *pbVar9 + cVar3;
            bVar16 = bVar6 - 0x17;
            cVar4 = cVar4 + *(byte *)((int)puVar33 + 0x46);
            pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(cVar4,cVar3));
            *(char *)CONCAT31(uVar13,bVar16) = *(char *)CONCAT31(uVar13,bVar16) + bVar16;
            *unaff_EBP = *unaff_EBP - cVar4;
            *pbVar9 = *pbVar9 + cVar3;
            bVar6 = bVar6 - 0x21;
            puVar32 = (uint *)CONCAT31(uVar13,bVar6);
            if (bVar16 < 10) break;
            *puVar32 = *puVar32 | (uint)puVar32;
            *(byte *)puVar32 = (byte)*puVar32 + bVar6;
            pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar23 >> 8) | pbVar9[0x6e],bVar5));
            bVar6 = bVar6 | (byte)*puVar32;
            *(char *)CONCAT31(uVar13,bVar6) = *(char *)CONCAT31(uVar13,bVar6) + bVar6;
            puVar32 = (uint *)CONCAT31(uVar13,bVar6 | *pbVar23);
            pbVar31 = pbVar29;
          }
        } while( true );
      }
      puVar32 = puVar33;
      if (CARRY1((byte)uVar12,bVar16)) goto code_r0x00404423;
code_r0x00404436:
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                 CONCAT11((char)((uint)pbVar26 >> 8) + pbVar26[-0x3d],(char)pbVar26)
                                );
    } while( true );
  }
  *pbVar23 = *pbVar23 + (char)pbVar29;
  goto code_r0x004043fe;
}


