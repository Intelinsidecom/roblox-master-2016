/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040424d
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(byte * <>1__state, uint * param_2)
 * Local Vars  : pbVar24, puVar23, unaff_EBX, puVar25, pbVar27, pcVar26, bVar29, cVar28, unaff_ESI, unaff_EBP, puVar31, pbVar30, unaff_EDI, pbVar32, in_ES, puVar33, bVar34, in_DS, bVar35, in_AF, unaff_retaddr, bVar36, in_stack_fffffffc, param_2, <>1__state, puStack_24, pcStack_1c, iStack_20, pbStack_10, puStack_14, uVar1, pbStack_8, cVar3, iVar2, bVar5, cVar4, bVar7, bVar6, pcVar8, in_EAX, pbVar10, piVar9, puVar12, pcVar11, uVar14, uVar13, cVar16, uVar15, uVar18, bVar17, uVar20, cVar19, pbVar22, uVar21
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x00404654) */
/* WARNING: Removing unreachable block (ram,0x004045de) */
/* WARNING: Removing unreachable block (ram,0x00404576) */
/* WARNING: Removing unreachable block (ram,0x004046c4) */
/* WARNING: Removing unreachable block (ram,0x004046d0) */
/* WARNING: Removing unreachable block (ram,0x004046e3) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
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
/* WARNING: Removing unreachable block (ram,0x00404c2b) */
/* WARNING: Removing unreachable block (ram,0x00404c32) */
/* WARNING: Removing unreachable block (ram,0x00404c54) */
/* WARNING: Removing unreachable block (ram,0x00404b09) */
/* WARNING: Removing unreachable block (ram,0x00404b85) */
/* WARNING: Removing unreachable block (ram,0x00404b89) */
/* WARNING: Removing unreachable block (ram,0x00404ac4) */
/* WARNING: Removing unreachable block (ram,0x004049bb) */
/* WARNING: Removing unreachable block (ram,0x004049be) */
/* WARNING: Removing unreachable block (ram,0x004048f6) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x00404ca4) */
/* WARNING: Removing unreachable block (ram,0x00404ca8) */
/* WARNING: Removing unreachable block (ram,0x00404caa) */
/* WARNING: Removing unreachable block (ram,0x00404cca) */
/* WARNING: Removing unreachable block (ram,0x00404c75) */
/* WARNING: Removing unreachable block (ram,0x00404c79) */
/* WARNING: Removing unreachable block (ram,0x00404c99) */
/* WARNING: Removing unreachable block (ram,0x00404d13) */
/* WARNING: Removing unreachable block (ram,0x00404cd4) */
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
/* WARNING: Removing unreachable block (ram,0x00405215) */
/* WARNING: Removing unreachable block (ram,0x0040521b) */
/* WARNING: Removing unreachable block (ram,0x0040523b) */
/* WARNING: Removing unreachable block (ram,0x004051c8) */
/* WARNING: Removing unreachable block (ram,0x004051c3) */
/* WARNING: Removing unreachable block (ram,0x004051d6) */
/* WARNING: Removing unreachable block (ram,0x00405244) */
/* WARNING: Removing unreachable block (ram,0x00405251) */
/* WARNING: Removing unreachable block (ram,0x004051ef) */
/* WARNING: Removing unreachable block (ram,0x004051f9) */
/* WARNING: Removing unreachable block (ram,0x00405213) */
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
/* WARNING: Removing unreachable block (ram,0x004050f8) */
/* WARNING: Removing unreachable block (ram,0x00405117) */
/* WARNING: Removing unreachable block (ram,0x004050df) */
/* WARNING: Removing unreachable block (ram,0x004050c9) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */

int __fastcall _ctor(byte *<>1__state,uint *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *in_EAX;
  char *pcVar8;
  undefined3 uVar14;
  int *piVar9;
  char *pcVar11;
  uint3 uVar15;
  undefined1 *puVar12;
  uint uVar13;
  char cVar16;
  byte bVar17;
  undefined2 uVar18;
  char cVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  byte *pbVar22;
  uint *puVar23;
  byte *pbVar24;
  uint *puVar25;
  byte bVar29;
  char *unaff_EBX;
  char *pcVar26;
  byte *pbVar27;
  char *unaff_EBP;
  char *unaff_ESI;
  byte *pbVar30;
  undefined4 *puVar31;
  byte *pbVar32;
  char *unaff_EDI;
  uint *puVar33;
  ushort in_ES;
  ushort in_DS;
  bool bVar34;
  byte in_AF;
  bool bVar35;
  bool bVar36;
  char *unaff_retaddr;
  undefined1 *puStack_24;
  int iStack_20;
  char *pcStack_1c;
  uint *puStack_14;
  byte *pbStack_10;
  byte *pbStack_8;
  char *in_stack_fffffffc;
  byte *pbVar10;
  char cVar28;
  
  bVar35 = false;
code_r0x0040424d:
                    /* .NET CLR Managed Code */
  bVar17 = (byte)((uint)<>1__state >> 8);
  bVar34 = CARRY1(bVar17,*in_EAX);
  <>1__state = (byte *)CONCAT22((short)((uint)<>1__state >> 0x10),
                                CONCAT11(bVar17 + *in_EAX,(char)<>1__state));
  do {
    iVar2 = *(int *)in_EAX;
    *(byte *)param_2 = (byte)*param_2 + (char)<>1__state;
    cVar3 = (char)(in_EAX + (uint)bVar34 + iVar2);
    bVar36 = SCARRY1(cVar3,*unaff_EBX);
    cVar3 = cVar3 + *unaff_EBX;
    piVar9 = (int *)CONCAT31((int3)((uint)(in_EAX + (uint)bVar34 + iVar2) >> 8),cVar3);
    bVar34 = cVar3 < '\0';
    puVar23 = param_2;
    pcVar11 = unaff_EBX;
code_r0x00404255:
    pcVar26 = unaff_ESI;
    bVar17 = (byte)piVar9;
    if (bVar36 == bVar34) {
      <>1__state = (byte *)CONCAT22((short)((uint)<>1__state >> 0x10),
                                    CONCAT11((char)((uint)<>1__state >> 8) + (char)*piVar9,
                                             (char)<>1__state));
      *<>1__state = *<>1__state | bVar17;
      *pcVar26 = *pcVar26 + bVar17;
      *(byte *)piVar9 = (char)*piVar9 + bVar17;
      *piVar9 = (int)(unaff_EBP + *piVar9);
      *(byte *)piVar9 = (char)*piVar9 + bVar17;
      *(byte *)puVar23 = (byte)*puVar23 + bVar17 + (char)*piVar9;
      cVar3 = (char)pcVar26;
      *unaff_EDI = *unaff_EDI + cVar3;
      *pcVar26 = *pcVar26 + cVar3;
      *pcVar26 = *pcVar26 + cVar3;
      pcVar8 = (char *)CONCAT31((int3)((uint)pcVar26 >> 8),cVar3 + *pcVar26);
      unaff_EBX = pcVar11;
      unaff_ESI = pcVar26;
      unaff_retaddr = pcVar26;
    }
    else {
      *(byte *)piVar9 = (char)*piVar9 + bVar17;
      pcVar8 = (char *)CONCAT31((int3)((uint)piVar9 >> 8),(bVar17 + 2) - (char)pcVar11);
code_r0x0040425d:
      cVar3 = (char)pcVar8;
      *pcVar8 = *pcVar8 + cVar3;
      pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar11 >> 8) | unaff_EBP[-0x45],
                                          (char)pcVar11));
      *pcVar8 = *pcVar8 + cVar3;
      out(*pcVar26,(short)puVar23);
      puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + cRam0000ba7d);
      pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar3 + ',');
      bVar34 = (POPCOUNT(cVar3 + ',') & 1U) == 0;
      pcVar26 = pcVar26 + 1;
      while (unaff_EBX = pcVar11, unaff_ESI = pcVar26, bVar34) {
        *pcVar8 = *pcVar8 + (char)pcVar8;
        pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + ',');
        while( true ) {
          pcVar8 = (char *)((uint)pcVar8 | *puVar23);
          unaff_ESI = pcVar26;
          if ((POPCOUNT((uint)pcVar8 & 0xff) & 1U) != 0) goto code_r0x00404238;
          cVar3 = (char)pcVar8;
          *pcVar8 = *pcVar8 + cVar3;
          uVar14 = (undefined3)((uint)pcVar8 >> 8);
          cVar4 = cVar3 + 'o';
          pbVar30 = (byte *)CONCAT31(uVar14,cVar4);
          pbVar22 = (byte *)((int)puVar23 + 1);
          *pbVar30 = *pbVar30 + cVar4;
          uVar18 = (undefined2)((uint)<>1__state >> 0x10);
          cVar16 = (char)<>1__state;
          bVar17 = (byte)((uint)<>1__state >> 8) | *pbVar22;
          <>1__state = (byte *)CONCAT22(uVar18,CONCAT11(bVar17,cVar16));
          unaff_ESI = pcVar26 + 1;
          out(*pcVar26,(short)pbVar22);
          cVar19 = (char)pbVar22 + *unaff_EDI;
          param_2 = (uint *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar19);
          if (SCARRY1((char)pbVar22,*unaff_EDI) == cVar19 < '\0') goto code_r0x00404241;
          *pbVar30 = *pbVar30 + cVar4;
          cVar4 = cVar3 + 'q';
          in_EAX = (byte *)CONCAT31(uVar14,cVar4);
          if ((POPCOUNT(cVar4) & 1U) != 0) goto code_r0x0040424d;
          *in_EAX = *in_EAX + cVar4;
          bVar36 = false;
          piVar9 = (int *)(CONCAT31(uVar14,cVar3 + -99) | *param_2);
          bVar34 = (int)piVar9 < 0;
          puVar23 = param_2;
          pcVar11 = unaff_EBX;
          if ((POPCOUNT((uint)piVar9 & 0xff) & 1U) != 0) goto code_r0x00404255;
          cVar3 = (char)piVar9;
          *(char *)piVar9 = (char)*piVar9 + cVar3;
          uVar14 = (undefined3)((uint)piVar9 >> 8);
          cVar4 = cVar3 + 'o';
          pcVar8 = (char *)CONCAT31(uVar14,cVar4);
          puVar23 = (uint *)((int)param_2 + 1);
          *pcVar8 = *pcVar8 + cVar4;
          bVar17 = bVar17 | *(byte *)puVar23;
          <>1__state = (byte *)CONCAT22(uVar18,CONCAT11(bVar17,cVar16));
          pcVar26 = pcVar26 + 2;
          out(*unaff_ESI,(short)puVar23);
          cVar19 = (char)unaff_EBX + *pcVar8;
          pcVar11 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar19);
          if (SCARRY1((char)unaff_EBX,*pcVar8) == cVar19 < '\0') goto code_r0x0040425d;
          *pcVar8 = *pcVar8 + cVar4;
          cVar4 = cVar3 + 'q';
          pcVar8 = (char *)CONCAT31(uVar14,cVar4);
          bVar34 = (POPCOUNT(cVar4) & 1U) == 0;
          if (!bVar34) break;
          *pcVar8 = *pcVar8 + cVar4;
          pcVar8 = (char *)(CONCAT31(uVar14,cVar3 + -99) | *puVar23);
          cVar3 = (char)pcVar8;
          if ((POPCOUNT((uint)pcVar8 & 0xff) & 1U) == 0) {
            *pcVar8 = *pcVar8 + cVar3;
            uVar14 = (undefined3)((uint)pcVar8 >> 8);
            bVar5 = cVar3 + 0x6f;
            pbVar22 = (byte *)CONCAT31(uVar14,bVar5);
            pbVar24 = (byte *)((int)param_2 + 2);
            *pbVar22 = *pbVar22 + bVar5;
            bVar17 = bVar17 | *pbVar24;
            pcVar8 = (char *)CONCAT22(uVar18,CONCAT11(bVar17,cVar16));
            bVar7 = *pbVar22;
            *pbVar22 = *pbVar22 + bVar5;
            pbVar30 = (byte *)(pcVar26 + (uint)CARRY1(bVar7,bVar5) + *(int *)pbVar22);
            bVar6 = bVar5 + *pbVar22;
            pbVar10 = (byte *)CONCAT31(uVar14,bVar6);
            *pbVar10 = (*pbVar10 - bVar6) - CARRY1(bVar5,*pbVar22);
            *pbVar10 = *pbVar10 + bVar6;
            bVar7 = *pbVar10;
            piVar9 = (int *)CONCAT31(uVar14,bVar6 & bVar7);
            *pcVar8 = *pcVar8 + (char)pbVar24;
            pcVar11[7] = pcVar11[7] + '\x01';
            *piVar9 = *piVar9 + (int)piVar9;
            bVar7 = bVar6 & bVar7 | *pbVar30;
            cVar3 = unaff_EBP[-0x44];
            uVar21 = (undefined2)((uint)unaff_EBX >> 0x10);
            *(char *)CONCAT31(uVar14,bVar7) = *(char *)CONCAT31(uVar14,bVar7) + bVar7;
            pcVar11 = (char *)CONCAT31(uVar14,bVar7 + 6);
            puVar23 = (uint *)(unaff_EDI + *(int *)(unaff_EBP + -0x42));
            *pcVar11 = *pcVar11 + bVar7 + 6;
            pbVar22 = (byte *)CONCAT31(uVar14,bVar7 + 0xc);
            cVar28 = ((char)((uint)unaff_EBX >> 8) + cVar3) - *pbVar24;
            pcVar26 = (char *)CONCAT22(uVar21,CONCAT11(cVar28,cVar19));
            bVar7 = *pbVar22;
            bVar5 = *pbVar22;
            pcVar11 = (char *)CONCAT22(uVar18,CONCAT11(bVar17 + bVar5,cVar16));
            iVar2 = *(int *)pbVar22;
            *pbVar24 = *pbVar24 + cVar16;
            cVar3 = (char)(pbVar22 + (uint)CARRY1(bVar17,bVar7) + iVar2);
            uVar14 = (undefined3)((uint)(pbVar22 + (uint)CARRY1(bVar17,bVar7) + iVar2) >> 8);
            cVar4 = cVar3 + *pcVar26;
            puVar25 = (uint *)CONCAT31(uVar14,cVar4);
            if (SCARRY1(cVar3,*pcVar26) == cVar4 < '\0') {
code_r0x0040431c:
              *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
              func_0x2a4a4325();
              bVar7 = (byte)pbStack_8;
              *pbStack_8 = *pbStack_8 + bVar7;
              bVar17 = *pbStack_8;
              uVar15 = (uint3)((uint)pbStack_8 >> 8);
              piVar9 = (int *)CONCAT31(uVar15,bVar7 - bVar17);
              puVar31 = (undefined4 *)((iStack_20 - *piVar9) - (uint)(bVar7 < *pbStack_8));
              *piVar9 = (int)(*piVar9 + (int)piVar9);
              *(byte *)piVar9 = (char)*piVar9 + (bVar7 - bVar17);
              puVar12 = (undefined1 *)((uint)(uVar15 & 0x21100) << 8);
              *pcStack_1c = *pcStack_1c - (char)puStack_14;
              *(undefined1 *)puVar31 = *(undefined1 *)puVar31;
              uVar18 = SUB42(pbStack_10,0);
              out(*puVar31,uVar18);
              puVar23 = (uint *)(puStack_24 + 1);
              *puStack_24 = *(undefined1 *)(puVar31 + 1);
              *puVar12 = *puVar12;
              out(*(undefined4 *)((int)puVar31 + 5),uVar18);
              *pbStack_10 = *pbStack_10 + 0x25;
              unaff_EBP = (char *)((uint)pcStack_1c | *puStack_14);
              uVar13 = *puVar23;
              out(*(undefined4 *)((int)puVar31 + 9),uVar18);
              *pbStack_10 = *pbStack_10 + 0x25;
              bVar17 = (byte)uVar13 | *(byte *)((int)puVar31 + 0xd);
              out(*(undefined4 *)((int)puVar31 + 0xd),uVar18);
              cVar3 = bVar17 - *(char *)(CONCAT31(uVar15,bVar17) & 0x21100ff);
              pcVar11 = (char *)(CONCAT31(uVar15,cVar3) & 0x21100ff);
              *pbStack_10 = *pbStack_10 + 0x25;
              unaff_EBP[0x70a0000] = unaff_EBP[0x70a0000] - (char)puStack_14;
              pbVar30 = (byte *)((int)puVar31 + 0x15);
              out(*(undefined4 *)((int)puVar31 + 0x11),uVar18);
              *pcVar11 = *pcVar11 + cVar3;
              pbVar10 = (byte *)CONCAT22(0x40,CONCAT11(bRam070adee6 | 0x43,0x26));
              puVar25 = (uint *)(CONCAT31(uVar15,cVar3 + -6) & 0x21100ff);
              pbVar22 = pbStack_10;
              puVar33 = puStack_14;
            }
            else {
              *(char *)puVar25 = (char)*puVar25 + cVar4;
              pcVar8 = (char *)CONCAT31(uVar14,cVar4 + '*');
              cVar28 = cVar28 + pcVar26[0x60];
              *pcVar8 = *pcVar8 + cVar4 + '*';
              cVar3 = cVar4 + '-';
              out(*(undefined4 *)pbVar30,(short)pbVar24);
              *pcVar11 = *pcVar11 + cVar3;
              *pbVar24 = *pbVar24 + cVar16;
              uVar20 = CONCAT11((char)((uint)pbVar24 >> 8) - pbVar30[4],(char)pbVar24);
              pbVar22 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),uVar20);
              cVar28 = cVar28 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar28,cVar19)) + 0x60);
              *(char *)CONCAT31(uVar14,cVar3) = *(char *)CONCAT31(uVar14,cVar3) + cVar3;
              bVar7 = cVar4 + 0x30;
              pcVar11 = (char *)CONCAT31(uVar14,bVar7);
              out(*(undefined4 *)(pbVar30 + 4),uVar20);
              *pcVar11 = *pcVar11 + bVar7;
              pbVar10 = (byte *)CONCAT22(uVar18,CONCAT11(bVar17 + bVar5 | *pbVar22,cVar16));
              pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,(short)unaff_retaddr);
              puVar33 = (uint *)CONCAT22(uVar21,CONCAT11(cVar28 + *(char *)(CONCAT22(uVar21,CONCAT11
                                                  (cVar28,cVar19)) + 0x60),cVar19));
              *pcVar11 = *pcVar11 + bVar7;
              bVar17 = cVar4 + 0x5a;
              puVar25 = (uint *)CONCAT31(uVar14,bVar17);
              pbVar30 = pbVar30 + 9;
              in_stack_fffffffc = unaff_EBP;
              if (bVar7 < 0xd6) {
                *puVar25 = *puVar25 | (uint)puVar25;
                if ((POPCOUNT(*puVar25 & 0xff) & 1U) == 0) goto code_r0x0040431c;
                uVar13 = *puVar25;
                puVar25 = (uint *)CONCAT31(uVar14,bVar17 + (char)*puVar25);
                *puVar25 = (uint)((int)puVar25 + (uint)CARRY1(bVar17,(byte)uVar13) + *puVar25);
              }
            }
            pbStack_8._0_2_ = in_ES;
            pbVar24 = pbVar30 + 4;
            out(*(undefined4 *)pbVar30,(short)pbVar22);
            pbVar30 = pbVar22 + 1;
            *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
            bVar6 = (byte)puVar33 | (byte)((uint)puVar25 >> 8);
            pbVar27 = (byte *)CONCAT31((int3)((uint)puVar33 >> 8),bVar6);
            uVar14 = (undefined3)((uint)puVar25 >> 8);
            bVar5 = (char)puVar25 - (char)*puVar25;
            bVar17 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar5;
            *(char *)CONCAT31(uVar14,bVar5) =
                 *(char *)CONCAT31(uVar14,bVar5) + bVar5 + CARRY1(bVar17,bVar5);
            *pbVar30 = *pbVar30 + bVar5;
            *pbVar10 = *pbVar10 + (char)pbVar30;
            bVar17 = *pbVar24;
            *pbVar24 = *pbVar24 + bVar6;
            bVar7 = 9 < (bVar5 & 0xf) | in_AF;
            bVar5 = bVar5 + bVar7 * -6;
            cVar3 = bVar5 + (0x9f < bVar5 | CARRY1(bVar17,bVar6) | bVar7 * (bVar5 < 6)) * -0x60;
            pcVar11 = (char *)CONCAT31(uVar14,cVar3);
            *pbVar30 = *pbVar30 + (char)pbVar10;
            *pcVar11 = *pcVar11 + cVar3;
            *pcVar11 = *pcVar11 + cVar3;
            puVar25 = (uint *)(pbVar22 + 2);
            uVar13 = CONCAT31(uVar14,cVar3 + *pbVar27) + 0x6128;
            uVar14 = (undefined3)(uVar13 >> 8);
            cVar3 = (char)uVar13 + *(char *)((int)puVar23 * 2 + 0x4000064);
            bVar5 = cVar3 - *(char *)CONCAT31(uVar14,cVar3);
            pbVar30 = (byte *)CONCAT31(uVar14,bVar5);
            bVar17 = *pbVar30;
            *pbVar30 = *pbVar30 + bVar5;
            pbVar24 = pbVar24 + (-(uint)CARRY1(bVar17,bVar5) - *(int *)pbVar30);
            bVar5 = bVar5 + *pbVar30;
            pbVar30 = (byte *)CONCAT31(uVar14,bVar5);
            bVar17 = *pbVar30;
            *pbVar30 = *pbVar30 + bVar5;
            *puVar25 = (uint)(pbVar30 + (uint)CARRY1(bVar17,bVar5) + *puVar25);
            cVar3 = (char)((uint)puVar25 >> 8);
            if ((POPCOUNT(*puVar25 & 0xff) & 1U) != 0) {
              cVar4 = bVar5 - *pbVar10;
              pbVar30 = (byte *)CONCAT31(uVar14,cVar4);
              *pbVar30 = *pbVar30 + cVar4 + (bVar5 < *pbVar10);
              *(byte *)puVar25 = (byte)*puVar25 + cVar4;
              *(byte *)puVar23 = (byte)*puVar23 + cVar3;
              puVar33 = puVar23;
              goto code_r0x00404417;
            }
            *pbVar30 = *pbVar30 + bVar5;
            cVar4 = bVar5 + 0x28;
            pcVar11 = (char *)CONCAT31(uVar14,cVar4);
            uVar1 = in((short)puVar25);
            *puVar23 = uVar1;
            *pcVar11 = *pcVar11 + cVar4;
            bVar17 = pbVar27[(int)pbVar10];
            pcVar11[0x28] = pcVar11[0x28] + cVar3;
            bVar35 = ((ushort)pbStack_8 & 0x400) != 0;
            bVar7 = ((ushort)pbStack_8 & 0x10) != 0;
            *pcVar11 = *pcVar11 + cVar4;
            bVar17 = (byte)((uint)pbVar10 >> 8) | bVar17 | (byte)*puVar25;
            pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),CONCAT11(bVar17,(char)pbVar10)
                                      );
            uVar18 = (undefined2)((uint)puVar33 >> 0x10);
            bVar29 = (char)((uint)puVar33 >> 8) + pbVar27[100];
            pbVar27 = (byte *)CONCAT22(uVar18,CONCAT11(bVar29,bVar6));
            *pcVar11 = *pcVar11 + cVar4;
            pbVar30 = (byte *)CONCAT31(uVar14,bVar5 + 0x50);
            pbVar22[0x23] = pbVar22[0x23] + cVar3;
            pbStack_8._0_2_ = 0;
            pbVar22 = pbVar30 + 2;
            *pbVar22 = *pbVar22 + cVar3;
            puVar33 = puVar23 + 1;
            if ((POPCOUNT(*pbVar22) & 1U) != 0) goto code_r0x00404439;
            *pbVar30 = *pbVar30 + bVar5 + 0x50;
            cVar3 = bVar5 + 0x78;
            pcVar11 = (char *)CONCAT31(uVar14,cVar3);
            bVar7 = (uVar13 & 0x1000) != 0;
            *pcVar11 = *pcVar11 + cVar3;
            puVar25 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),(byte)puVar25 | *pbVar24);
            pbVar27 = (byte *)CONCAT22(uVar18,CONCAT11(bVar29 | pbVar24[0x65],bVar6));
            *pcVar11 = *pcVar11 + cVar3;
            bVar5 = bVar5 + 0x9d;
            pcVar11 = (char *)CONCAT31(uVar14,bVar5);
            puVar25 = (uint *)((uint)puVar25 | *puVar25);
            *pcVar11 = *pcVar11 + bVar17;
            puVar33 = (uint *)((int)puVar23 + (uint)bVar35 * -2 + 5);
            *(byte *)(puVar23 + 1) = bVar5;
            *pcVar11 = *pcVar11 + bVar5;
            bVar5 = bVar5 | (byte)*puVar25;
            pbVar30 = (byte *)CONCAT31(uVar14,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00404454;
            *pbVar30 = *pbVar30 + bVar5;
            cVar3 = bVar5 + 2;
            pbVar30 = (byte *)CONCAT31(uVar14,cVar3);
            *unaff_EBP = *unaff_EBP - bVar6;
            *pbVar24 = *pbVar24 + cVar3;
            pbVar22 = pbVar24 + (uint)bVar35 * -8 + 4;
            out(*(undefined4 *)pbVar24,(short)puVar25);
            puVar23 = (uint *)((int)puVar33 + (uint)bVar35 * -2 + 1);
            pbVar24 = pbVar22 + (uint)bVar35 * -2 + 1;
            *(byte *)puVar33 = *pbVar22;
            *pbVar30 = *pbVar30 + cVar3;
            in_stack_fffffffc = (char *)0x0;
            goto code_r0x004043fe;
          }
          unaff_EBP[(int)&stack0x00000000] = unaff_EBP[(int)&stack0x00000000] + cVar3;
          unaff_EBX = pcVar11;
        }
        puVar23 = (uint *)0x2040000;
      }
    }
    pcVar8 = (char *)((uint)pcVar8 & 0xffffff61);
    cVar3 = (char)pcVar8;
    *unaff_EDI = *unaff_EDI + cVar3;
    *pcVar8 = *pcVar8 + cVar3;
    *pcVar8 = *pcVar8 + cVar3;
code_r0x00404238:
    bVar17 = (char)pcVar8 + *pcVar8;
    pbVar30 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),bVar17);
    *pbVar30 = *pbVar30 & bVar17;
    param_2 = (uint *)((int)puVar23 + -1);
    in_ES = 0;
    *pbVar30 = *pbVar30 + bVar17;
    *pbVar30 = *pbVar30 + bVar17;
    in_stack_fffffffc = (char *)(uint)in_DS;
code_r0x00404241:
    cVar3 = (char)pbVar30;
    *pbVar30 = *pbVar30 + cVar3;
    *unaff_ESI = *unaff_ESI + (char)unaff_EBX;
    unaff_EBX = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x47],
                                          (char)unaff_EBX));
    *pbVar30 = *pbVar30 + cVar3;
    in_EAX = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar3 + '*');
    <>1__state._1_1_ = (byte)((uint)<>1__state >> 8);
    bVar34 = CARRY1(<>1__state._1_1_,*in_EAX);
    <>1__state._2_2_ = (undefined2)((uint)<>1__state >> 0x10);
    <>1__state._0_1_ = SUB41(<>1__state,0);
    <>1__state._1_1_ = <>1__state._1_1_ + *in_EAX;
    <>1__state._0_2_ = CONCAT11(<>1__state._1_1_,<>1__state._0_1_);
    <>1__state = (byte *)CONCAT22(<>1__state._2_2_,<>1__state._0_2_);
  } while( true );
code_r0x004043fe:
  cVar4 = (char)((uint)pbVar10 >> 8);
  pbVar27[-0x21f60000] = pbVar27[-0x21f60000] - cVar4;
  uVar14 = (undefined3)((uint)pbVar30 >> 8);
  cVar3 = ((byte)pbVar30 | *pbVar24) - 6;
  piVar9 = (int *)CONCAT31(uVar14,cVar3);
  pbStack_8._0_2_ = (ushort)in_stack_fffffffc;
  pcVar11 = (char *)((int)piVar9 * 2 + 0x2adc0a00);
  *pcVar11 = *pcVar11 - cVar4;
  *piVar9 = (int)(*piVar9 + (int)puVar25);
  *(char *)piVar9 = (char)*piVar9 + cVar3;
  bVar17 = cVar3 + (char)*piVar9;
  bVar7 = 9 < (bVar17 & 0xf) | bVar7;
  uVar13 = CONCAT31(uVar14,bVar17 + bVar7 * '\x06') & 0xffffff0f;
  pbVar30 = (byte *)CONCAT22((short)(uVar13 >> 0x10),
                             CONCAT11((char)((uint)pbVar30 >> 8) + bVar7,(char)uVar13));
  puVar33 = puVar23;
code_r0x00404417:
  *pbVar24 = *pbVar24 + (char)((uint)pbVar30 >> 8);
  unaff_EBP = (char *)0x17000000;
  *(byte *)puVar25 = (byte)*puVar25 + (char)pbVar10;
  bVar5 = (byte)pbVar30;
  *pbVar30 = *pbVar30 + bVar5;
  bVar17 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar5;
  puVar23 = puVar33;
  if (!CARRY1(bVar17,bVar5)) goto code_r0x00404436;
code_r0x00404423:
  *pbVar30 = *pbVar30 + (byte)pbVar30;
  pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),(byte)pbVar30 | pbVar30[0x4000065]);
  pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),(char)pbVar27 - *pbVar24);
  bVar17 = *pbVar30;
  bVar5 = (byte)((uint)pbVar10 >> 8);
  cVar3 = (char)pbVar10;
  pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),CONCAT11(bVar5 + *pbVar30,cVar3));
  iVar2 = *(int *)pbVar30;
  *(byte *)puVar25 = (byte)*puVar25 + cVar3;
  puVar25 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),
                             CONCAT11((char)((uint)puVar25 >> 8) - *pbVar24,(char)puVar25));
  pbVar30 = pbVar30 + *puVar25 + (uint)CARRY1(bVar5,bVar17) + iVar2;
  puVar33 = puVar23;
  if ((POPCOUNT((uint)pbVar30 & 0xff) & 1U) == 0) {
code_r0x00404439:
    do {
      *pbVar30 = *pbVar30 + (char)pbVar30;
      uVar14 = (undefined3)((uint)pbVar30 >> 8);
      cVar3 = (char)pbVar30 + 'o';
      pcVar11 = (char *)CONCAT31(uVar14,cVar3);
      *(char **)pbVar10 = pcVar11 + *(int *)pbVar10;
      *(byte *)puVar25 = (byte)*puVar25 + (char)pbVar10;
      bVar5 = cVar3 - *pcVar11;
      pbVar30 = (byte *)CONCAT31(uVar14,bVar5);
      *pbVar27 = *pbVar27 + (char)puVar25;
      *pbVar27 = *pbVar27 ^ bVar5;
      pbVar27[0x26000000] = pbVar27[0x26000000] + (char)((uint)pbVar10 >> 8);
      bVar17 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar5;
      *(byte **)(pbVar27 + 0xb) = pbVar24 + (uint)CARRY1(bVar17,bVar5) + *(int *)(pbVar27 + 0xb);
      *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
code_r0x00404454:
      in_stack_fffffffc = (char *)(uint)(ushort)pbStack_8;
      pbVar30 = (byte *)((uint)pbVar30 | 0x1027309);
      uVar13 = *puVar25;
      bVar17 = (byte)pbVar10;
      uVar1 = *puVar25;
      *(byte *)puVar25 = (byte)*puVar25 + bVar17;
      if (SCARRY1((byte)uVar1,bVar17) != (char)(byte)*puVar25 < '\0') {
        *pbVar30 = *pbVar30 + (char)pbVar30;
        *pbVar24 = *pbVar24 + 1;
        puVar23 = (uint *)(CONCAT31((int3)((uint)pbVar30 >> 8),(char)pbVar30 + '\t') | 1);
        bVar7 = *pbVar24;
        bVar5 = (byte)puVar23;
        *pbVar24 = *pbVar24 + bVar5;
        if (CARRY1(bVar7,bVar5)) {
          *puVar23 = *puVar23 + (int)puVar23;
          puVar25 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),
                                     CONCAT11((byte)((uint)puVar25 >> 8) | pbVar27[4],(char)puVar25)
                                    );
        }
        else if (!CARRY1(bVar7,bVar5)) goto code_r0x00404473;
        *puVar23 = *puVar23 + (int)puVar23;
        pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar17 | (byte)*puVar25);
code_r0x00404473:
        uVar18 = (undefined2)((uint)pbVar10 >> 0x10);
        cVar4 = (char)pbVar10;
        bVar7 = (char)((uint)pbVar10 >> 8) + (char)*puVar23;
        uVar13 = *puVar23;
        *pbVar27 = *pbVar27 + bVar7;
        pbVar30 = (byte *)((uint)puVar23 & uVar13 | *puVar33);
        pbVar32 = pbVar24 + (uint)bVar35 * -8 + 4;
        out(*(undefined4 *)pbVar24,(short)puVar25);
        *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
        bVar7 = bVar7 | *pbVar30;
        *pbVar27 = *pbVar27 + bVar7;
        uVar14 = (undefined3)((uint)pbVar30 >> 8);
        pcVar11 = (char *)CONCAT31(uVar14,0xea);
        *(uint *)(pbVar27 + -0x3d) = *(uint *)(pbVar27 + -0x3d) | (uint)puVar33;
        *pcVar11 = *pcVar11 + -0x16;
        pbVar22 = (byte *)CONCAT31(uVar14,0x59);
        *pbVar22 = *pbVar22 + 0x59;
        bVar7 = bVar7 | *pbVar22;
        pbVar10 = (byte *)CONCAT22(uVar18,CONCAT11(bVar7,cVar4));
        *pbVar10 = *pbVar10 | 0x59;
        *(byte *)puVar25 = (byte)*puVar25 + cVar4;
        *pbVar10 = *pbVar10 - cVar4;
        *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
        pbVar22 = pbVar32 + (uint)bVar35 * -8 + 4;
        out(*(undefined4 *)pbVar32,(short)puVar25);
        bVar17 = (byte)*puVar33 | 0x59 | *pbVar10;
        *(byte *)puVar25 = (byte)*puVar25 + cVar4;
        pcVar11 = (char *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                   CONCAT11((char)((uint)pbVar30 >> 8) - (char)pbVar27,bVar17));
        *pcVar11 = *pcVar11 + bVar17;
        cVar3 = (bVar17 | 8) - 2;
        piVar9 = (int *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar3);
        bVar34 = ((ushort)pbStack_8 & 0x400) != 0;
        bVar35 = ((ushort)pbStack_8 & 0x10) != 0;
        *(char *)piVar9 = (char)*piVar9 + cVar3;
        uVar21 = CONCAT11((byte)((uint)puVar25 >> 8) | pbVar27[0xb],(char)puVar25);
        pcVar11 = (char *)CONCAT22((short)((uint)puVar25 >> 0x10),uVar21);
        *piVar9 = (int)(*piVar9 + (int)piVar9);
        bVar7 = bVar7 | *(byte *)((int)puVar33 + -0x2a);
        *(char *)piVar9 = (char)*piVar9 + cVar3;
        pbVar30 = pbVar22 + (uint)bVar34 * -8 + 4;
        out(*(undefined4 *)pbVar22,uVar21);
        *pcVar11 = *pcVar11 + cVar4;
        out(*(undefined4 *)pbVar30,uVar21);
        *pcVar11 = *pcVar11 + cVar4;
        pbVar10 = (byte *)((uint)pcVar11 & 0xffffff00);
        bVar7 = bVar7 | pbVar10[CONCAT22(uVar18,CONCAT11(bVar7,cVar4))];
        pbVar22 = (byte *)CONCAT22(uVar18,CONCAT11(bVar7,cVar4));
        pbVar24 = pbVar30 + (uint)bVar34 * -8 + 4 + (uint)bVar34 * -8 + 4;
        out(*(undefined4 *)(pbVar30 + (uint)bVar34 * -8 + 4),(short)pbVar10);
        bVar17 = *pbVar22;
        puVar23 = (uint *)CONCAT31(0xf80a00,bVar17);
        *pbVar10 = *pbVar10 + cVar4;
        pbVar30 = pbVar24;
        if (*pbVar10 != 0) {
          *(byte *)puVar23 = (byte)*puVar23 + bVar17;
          pbVar22 = (byte *)CONCAT22(uVar18,CONCAT11(bVar7 + (byte)*puVar23,cVar4));
          *pbVar24 = *pbVar24;
          pbVar30 = pbVar24 + (uint)bVar34 * -8 + 4;
          out(*(undefined4 *)pbVar24,(short)pbVar10);
          puVar23 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar33 | *pbVar22);
        }
        *pbVar10 = *pbVar10 + (char)pbVar22;
        pbVar24 = pbVar10;
        if (*pbVar10 == 0) goto code_r0x004044ff;
        do {
          *(byte *)puVar23 = (byte)*puVar23 + (byte)puVar23;
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(char)pbVar22 + (byte)*puVar23);
          pbVar22[0x2a060000] = pbVar22[0x2a060000] - (char)((uint)pbVar10 >> 8);
          *pbVar27 = *pbVar27 + (char)pbVar10;
          *pbVar10 = *pbVar10 ^ (byte)puVar23;
          pbVar24 = pbVar10;
code_r0x004044ff:
          cVar3 = (char)((uint)pbVar22 >> 8);
          *pbVar24 = *pbVar24 + cVar3;
          uVar13 = *puVar23;
          bVar17 = (byte)puVar23;
          *(byte *)puVar23 = (byte)*puVar23 + bVar17;
          bVar7 = 9 < (bVar17 & 0xf) | bVar35;
          uVar14 = (undefined3)((uint)puVar23 >> 8);
          bVar5 = bVar17 + bVar7 * '\x06';
          bVar5 = bVar5 + (0x90 < (bVar5 & 0xf0) |
                          CARRY1((byte)uVar13,bVar17) | bVar7 * (0xf9 < bVar5)) * '`';
          pbVar10 = (byte *)CONCAT31(uVar14,bVar5);
          bVar17 = *pbVar10;
          *pbVar10 = *pbVar10 + bVar5;
          *(byte **)pbVar24 = pbVar10 + (uint)CARRY1(bVar17,bVar5) + *(int *)pbVar24;
          out(*(undefined4 *)pbVar30,(short)pbVar24);
          *pbVar10 = *pbVar10 + bVar5;
          bVar5 = bVar5 - 0xe;
          pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                     CONCAT11(cVar3 + *(byte *)((int)puVar33 + 0x3e),(char)pbVar22))
          ;
          *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
          bVar7 = 9 < (bVar5 & 0xf) | bVar7;
          bVar5 = bVar5 + bVar7 * -6;
          bVar17 = 0x9f < bVar5 | bVar7 * (bVar5 < 6);
          puVar23 = (uint *)CONCAT31(uVar14,bVar5 + bVar17 * -0x60);
          pbVar24[0x5d] = pbVar24[0x5d] + (char)((uint)pbVar24 >> 8) + bVar17;
          *puVar23 = *puVar23 | (uint)puVar23;
          pbVar32 = pbVar30 + (uint)bVar34 * -8 + 4;
          while( true ) {
            bVar34 = ((ushort)pbStack_8 & 0x400) != 0;
            bVar35 = ((ushort)pbStack_8 & 0x10) != 0;
            *(byte *)puVar23 = (char)*puVar23 + (byte)puVar23;
            bVar5 = (byte)pbVar24 | *pbVar32;
            pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar5);
            cVar3 = (char)pbVar22;
            *pbVar22 = *pbVar22 - cVar3;
            *puVar23 = (uint)(*puVar23 + (int)puVar23);
            uVar14 = (undefined3)((uint)puVar23 >> 8);
            bVar7 = (byte)puVar23 | *pbVar10;
            pbVar30 = pbVar32 + (uint)bVar34 * -8 + 4;
            out(*(undefined4 *)pbVar32,(short)pbVar10);
            *(char *)CONCAT31(uVar14,bVar7) = *(char *)CONCAT31(uVar14,bVar7) + bVar7;
            cVar4 = (char)((uint)pbVar22 >> 8);
            *unaff_EBP = *unaff_EBP - cVar4;
            *pbVar10 = *pbVar10 + cVar3;
            bVar17 = bVar7 - 0x17;
            cVar4 = cVar4 + *(byte *)((int)puVar33 + 0x46);
            pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(cVar4,cVar3));
            *(char *)CONCAT31(uVar14,bVar17) = *(char *)CONCAT31(uVar14,bVar17) + bVar17;
            *unaff_EBP = *unaff_EBP - cVar4;
            *pbVar10 = *pbVar10 + cVar3;
            bVar7 = bVar7 - 0x21;
            puVar23 = (uint *)CONCAT31(uVar14,bVar7);
            if (bVar17 < 10) break;
            *puVar23 = *puVar23 | (uint)puVar23;
            *(byte *)puVar23 = (byte)*puVar23 + bVar7;
            pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar24 >> 8) | pbVar10[0x6e],bVar5));
            bVar7 = bVar7 | (byte)*puVar23;
            *(char *)CONCAT31(uVar14,bVar7) = *(char *)CONCAT31(uVar14,bVar7) + bVar7;
            puVar23 = (uint *)CONCAT31(uVar14,bVar7 | *pbVar24);
            pbVar32 = pbVar30;
          }
        } while( true );
      }
      puVar23 = puVar33;
      if (CARRY1((byte)uVar13,bVar17)) goto code_r0x00404423;
code_r0x00404436:
      pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                 CONCAT11((char)((uint)pbVar27 >> 8) + pbVar27[-0x3d],(char)pbVar27)
                                );
    } while( true );
  }
  *pbVar24 = *pbVar24 + (char)pbVar30;
  goto code_r0x004043fe;
}


