/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404283
 * Raw Name    : <>m__Finally16
 * Demangled   : <>m__Finally16
 * Prototype   : int <>m__Finally16(byte * param_1, byte * param_2)
 * Local Vars  : cVar18, uVar17, uVar20, uVar19, pbVar22, puVar21, unaff_EBX, cVar23, pbVar25, pcVar24, bVar27, cVar26, unaff_ESI, unaff_EBP, puVar29, pbVar28, pbVar31, pbVar30, puVar32, unaff_EDI, in_ES, puVar33, in_AF, in_DS, bVar35, bVar34, unaff_retaddr, bVar36, in_stack_fffffffc, param_1, param_2, puStack_24, pcStack_1c, iStack_20, pbStack_10, puStack_14, uVar1, pbStack_8, bVar3, iVar2, bVar5, bVar4, in_EAX, cVar6, pcVar8, piVar7, pcVar10, pbVar9, uVar12, puVar11, uVar14, uVar13, bVar16, cVar15
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

int __fastcall <>m__Finally16(byte *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *in_EAX;
  undefined3 uVar13;
  int *piVar7;
  char *pcVar8;
  char *pcVar10;
  uint3 uVar14;
  undefined1 *puVar11;
  uint uVar12;
  char cVar15;
  byte bVar16;
  undefined2 uVar17;
  char cVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  uint *puVar21;
  byte *pbVar22;
  char cVar23;
  char cVar26;
  byte bVar27;
  char *unaff_EBX;
  byte *pbVar25;
  char *unaff_EBP;
  char *unaff_ESI;
  byte *pbVar28;
  undefined4 *puVar29;
  byte *pbVar30;
  byte *pbVar31;
  char *unaff_EDI;
  uint *puVar32;
  uint *puVar33;
  ushort in_ES;
  ushort in_DS;
  byte in_AF;
  bool bVar34;
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
  byte *pbVar9;
  char *pcVar24;
  
  bVar35 = false;
  while( true ) {
                    /* .NET CLR Managed Code */
    cVar18 = (char)param_2 + *unaff_EDI;
    puVar32 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar18);
    cVar6 = (char)in_EAX;
    cVar26 = (char)unaff_EBX;
    if (SCARRY1((char)param_2,*unaff_EDI) == cVar18 < '\0') {
      *in_EAX = *in_EAX + cVar6;
      *unaff_ESI = *unaff_ESI + cVar26;
      goto System_Collections_IEnumerator_get_Current;
    }
    *in_EAX = *in_EAX + cVar6;
    uVar13 = (undefined3)((uint)in_EAX >> 8);
    cVar18 = cVar6 + '\x02';
    in_EAX = (byte *)CONCAT31(uVar13,cVar18);
    cVar15 = (char)param_1;
    bVar16 = (byte)((uint)param_1 >> 8);
    uVar17 = (undefined2)((uint)param_1 >> 0x10);
    if ((POPCOUNT(cVar18) & 1U) != 0) {
      param_1 = (byte *)CONCAT22(uVar17,CONCAT11(bVar16 + *in_EAX,cVar15));
      goto System_Collections_IEnumerator_get_Current;
    }
    *in_EAX = *in_EAX + cVar18;
    bVar36 = false;
    piVar7 = (int *)(CONCAT31(uVar13,cVar6 + '.') | *puVar32);
    bVar34 = (int)piVar7 < 0;
    puVar21 = puVar32;
    pcVar24 = unaff_EBX;
    pcVar10 = unaff_ESI;
    if ((POPCOUNT((uint)piVar7 & 0xff) & 1U) != 0) goto code_r0x00404255;
    cVar6 = (char)piVar7;
    *(char *)piVar7 = (char)*piVar7 + cVar6;
    uVar13 = (undefined3)((uint)piVar7 >> 8);
    cVar18 = cVar6 + 'o';
    pcVar8 = (char *)CONCAT31(uVar13,cVar18);
    puVar21 = (uint *)((int)puVar32 + 1);
    *pcVar8 = *pcVar8 + cVar18;
    bVar16 = bVar16 | *(byte *)puVar21;
    param_1 = (byte *)CONCAT22(uVar17,CONCAT11(bVar16,cVar15));
    pcVar10 = unaff_ESI + 1;
    out(*unaff_ESI,(short)puVar21);
    cVar23 = cVar26 + *pcVar8;
    pcVar24 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar23);
    if (SCARRY1(cVar26,*pcVar8) == cVar23 < '\0') goto code_r0x0040425d;
    *pcVar8 = *pcVar8 + cVar18;
    cVar18 = cVar6 + 'q';
    pcVar8 = (char *)CONCAT31(uVar13,cVar18);
    bVar34 = (POPCOUNT(cVar18) & 1U) == 0;
    if (!bVar34) {
      puVar21 = (uint *)0x2040000;
      goto code_r0x0040426f;
    }
    *pcVar8 = *pcVar8 + cVar18;
    pcVar8 = (char *)(CONCAT31(uVar13,cVar6 + -99) | *puVar21);
    if ((POPCOUNT((uint)pcVar8 & 0xff) & 1U) == 0) break;
code_r0x00404272:
    unaff_EBP[(int)&stack0x00000000] = unaff_EBP[(int)&stack0x00000000] + (char)pcVar8;
    pcVar8 = (char *)((uint)pcVar8 | *puVar21);
    if ((POPCOUNT((uint)pcVar8 & 0xff) & 1U) != 0) {
      do {
        bVar16 = (char)pcVar8 + *pcVar8;
        in_EAX = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),bVar16);
        *in_EAX = *in_EAX & bVar16;
        puVar32 = (uint *)((int)puVar21 + -1);
        in_ES = 0;
        *in_EAX = *in_EAX + bVar16;
        *in_EAX = *in_EAX + bVar16;
        in_stack_fffffffc = (char *)(uint)in_DS;
        unaff_EBX = pcVar24;
        unaff_ESI = pcVar10;
System_Collections_IEnumerator_get_Current:
        pcVar24 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x47],
                                            (char)unaff_EBX));
        *in_EAX = *in_EAX + (char)in_EAX;
        pbVar28 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '*');
        bVar16 = *pbVar28;
        bVar5 = (byte)((uint)param_1 >> 8);
        cVar6 = (char)param_1;
        param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar5 + *pbVar28,cVar6));
        iVar2 = *(int *)pbVar28;
        *(byte *)puVar32 = (byte)*puVar32 + cVar6;
        cVar6 = (char)(pbVar28 + (uint)CARRY1(bVar5,bVar16) + iVar2);
        bVar36 = SCARRY1(cVar6,*pcVar24);
        cVar6 = cVar6 + *pcVar24;
        piVar7 = (int *)CONCAT31((int3)((uint)(pbVar28 + (uint)CARRY1(bVar5,bVar16) + iVar2) >> 8),
                                 cVar6);
        bVar34 = cVar6 < '\0';
        puVar21 = puVar32;
        pcVar10 = unaff_ESI;
code_r0x00404255:
        bVar16 = (byte)piVar7;
        if (bVar36 == bVar34) {
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((char)((uint)param_1 >> 8) + (char)*piVar7,
                                              (char)param_1));
          *param_1 = *param_1 | bVar16;
          *pcVar10 = *pcVar10 + bVar16;
          *(byte *)piVar7 = (char)*piVar7 + bVar16;
          *piVar7 = (int)(unaff_EBP + *piVar7);
          *(byte *)piVar7 = (char)*piVar7 + bVar16;
          *(byte *)puVar21 = (byte)*puVar21 + bVar16 + (char)*piVar7;
          cVar6 = (char)pcVar10;
          *unaff_EDI = *unaff_EDI + cVar6;
          *pcVar10 = *pcVar10 + cVar6;
          *pcVar10 = *pcVar10 + cVar6;
          pcVar8 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6 + *pcVar10);
          unaff_retaddr = pcVar10;
        }
        else {
          *(byte *)piVar7 = (char)*piVar7 + bVar16;
          pcVar8 = (char *)CONCAT31((int3)((uint)piVar7 >> 8),(bVar16 + 2) - (char)pcVar24);
code_r0x0040425d:
          cVar6 = (char)pcVar8;
          *pcVar8 = *pcVar8 + cVar6;
          pcVar24 = (char *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar24 >> 8) | unaff_EBP[-0x45],
                                              (char)pcVar24));
          *pcVar8 = *pcVar8 + cVar6;
          out(*pcVar10,(short)puVar21);
          puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + cRam0000ba7d);
          pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar6 + ',');
          bVar34 = (POPCOUNT(cVar6 + ',') & 1U) == 0;
          pcVar10 = pcVar10 + 1;
code_r0x0040426f:
          if (bVar34) goto code_r0x00404271;
        }
        pcVar8 = (char *)((uint)pcVar8 & 0xffffff61);
        cVar6 = (char)pcVar8;
        *unaff_EDI = *unaff_EDI + cVar6;
        *pcVar8 = *pcVar8 + cVar6;
        *pcVar8 = *pcVar8 + cVar6;
      } while( true );
    }
    *pcVar8 = *pcVar8 + (char)pcVar8;
    cVar6 = (char)pcVar8 + 'o';
    in_EAX = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar6);
    param_2 = (byte *)((int)puVar21 + 1);
    *in_EAX = *in_EAX + cVar6;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
    unaff_ESI = pcVar10 + 1;
    param_2._0_2_ = SUB42(param_2,0);
    out(*pcVar10,param_2._0_2_);
    unaff_EBX = pcVar24;
  }
  *pcVar8 = *pcVar8 + (char)pcVar8;
  uVar13 = (undefined3)((uint)pcVar8 >> 8);
  bVar3 = (char)pcVar8 + 0x6f;
  pbVar30 = (byte *)CONCAT31(uVar13,bVar3);
  pbVar22 = (byte *)((int)puVar32 + 2);
  *pbVar30 = *pbVar30 + bVar3;
  bVar16 = bVar16 | *pbVar22;
  pcVar8 = (char *)CONCAT22(uVar17,CONCAT11(bVar16,cVar15));
  bVar5 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar3;
  pbVar28 = (byte *)(pcVar10 + (uint)CARRY1(bVar5,bVar3) + *(int *)pbVar30);
  bVar4 = bVar3 + *pbVar30;
  pbVar9 = (byte *)CONCAT31(uVar13,bVar4);
  *pbVar9 = (*pbVar9 - bVar4) - CARRY1(bVar3,*pbVar30);
  *pbVar9 = *pbVar9 + bVar4;
  bVar5 = *pbVar9;
  piVar7 = (int *)CONCAT31(uVar13,bVar4 & bVar5);
  *pcVar8 = *pcVar8 + (char)pbVar22;
  pcVar24[7] = pcVar24[7] + '\x01';
  *piVar7 = *piVar7 + (int)piVar7;
  bVar5 = bVar4 & bVar5 | *pbVar28;
  cVar6 = unaff_EBP[-0x44];
  uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
  *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
  pcVar10 = (char *)CONCAT31(uVar13,bVar5 + 6);
  puVar32 = (uint *)(unaff_EDI + *(int *)(unaff_EBP + -0x42));
  *pcVar10 = *pcVar10 + bVar5 + 6;
  pbVar30 = (byte *)CONCAT31(uVar13,bVar5 + 0xc);
  cVar26 = ((char)((uint)unaff_EBX >> 8) + cVar6) - *pbVar22;
  pcVar24 = (char *)CONCAT22(uVar20,CONCAT11(cVar26,cVar23));
  bVar3 = *pbVar30;
  bVar5 = *pbVar30;
  pcVar10 = (char *)CONCAT22(uVar17,CONCAT11(bVar16 + bVar5,cVar15));
  iVar2 = *(int *)pbVar30;
  *pbVar22 = *pbVar22 + cVar15;
  cVar18 = (char)(pbVar30 + (uint)CARRY1(bVar16,bVar3) + iVar2);
  uVar13 = (undefined3)((uint)(pbVar30 + (uint)CARRY1(bVar16,bVar3) + iVar2) >> 8);
  cVar6 = cVar18 + *pcVar24;
  puVar21 = (uint *)CONCAT31(uVar13,cVar6);
  if (SCARRY1(cVar18,*pcVar24) != cVar6 < '\0') {
    *(char *)puVar21 = (char)*puVar21 + cVar6;
    pcVar8 = (char *)CONCAT31(uVar13,cVar6 + '*');
    cVar26 = cVar26 + pcVar24[0x60];
    *pcVar8 = *pcVar8 + cVar6 + '*';
    cVar18 = cVar6 + '-';
    out(*(undefined4 *)pbVar28,(short)pbVar22);
    *pcVar10 = *pcVar10 + cVar18;
    *pbVar22 = *pbVar22 + cVar15;
    uVar19 = CONCAT11((char)((uint)pbVar22 >> 8) - pbVar28[4],(char)pbVar22);
    pbVar30 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),uVar19);
    cVar26 = cVar26 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar26,cVar23)) + 0x60);
    *(char *)CONCAT31(uVar13,cVar18) = *(char *)CONCAT31(uVar13,cVar18) + cVar18;
    bVar3 = cVar6 + 0x30;
    pcVar10 = (char *)CONCAT31(uVar13,bVar3);
    out(*(undefined4 *)(pbVar28 + 4),uVar19);
    *pcVar10 = *pcVar10 + bVar3;
    pbVar9 = (byte *)CONCAT22(uVar17,CONCAT11(bVar16 + bVar5 | *pbVar30,cVar15));
    pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,(short)unaff_retaddr);
    puVar33 = (uint *)CONCAT22(uVar20,CONCAT11(cVar26 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar26,
                                                  cVar23)) + 0x60),cVar23));
    *pcVar10 = *pcVar10 + bVar3;
    bVar16 = cVar6 + 0x5a;
    puVar21 = (uint *)CONCAT31(uVar13,bVar16);
    pbVar28 = pbVar28 + 9;
    in_stack_fffffffc = unaff_EBP;
    if (0xd5 < bVar3) goto code_r0x0040436f;
    *puVar21 = *puVar21 | (uint)puVar21;
    if ((POPCOUNT(*puVar21 & 0xff) & 1U) != 0) {
      uVar12 = *puVar21;
      puVar21 = (uint *)CONCAT31(uVar13,bVar16 + (char)*puVar21);
      *puVar21 = (uint)((int)puVar21 + (uint)CARRY1(bVar16,(byte)uVar12) + *puVar21);
      goto code_r0x0040436f;
    }
  }
  *(char *)puVar21 = (char)*puVar21 + (char)puVar21;
  func_0x2a4a4325();
  bVar5 = (byte)pbStack_8;
  *pbStack_8 = *pbStack_8 + bVar5;
  bVar16 = *pbStack_8;
  uVar14 = (uint3)((uint)pbStack_8 >> 8);
  piVar7 = (int *)CONCAT31(uVar14,bVar5 - bVar16);
  puVar29 = (undefined4 *)((iStack_20 - *piVar7) - (uint)(bVar5 < *pbStack_8));
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  *(byte *)piVar7 = (char)*piVar7 + (bVar5 - bVar16);
  puVar11 = (undefined1 *)((uint)(uVar14 & 0x21100) << 8);
  *pcStack_1c = *pcStack_1c - (char)puStack_14;
  *(undefined1 *)puVar29 = *(undefined1 *)puVar29;
  uVar17 = SUB42(pbStack_10,0);
  out(*puVar29,uVar17);
  puVar32 = (uint *)(puStack_24 + 1);
  *puStack_24 = *(undefined1 *)(puVar29 + 1);
  *puVar11 = *puVar11;
  out(*(undefined4 *)((int)puVar29 + 5),uVar17);
  *pbStack_10 = *pbStack_10 + 0x25;
  unaff_EBP = (char *)((uint)pcStack_1c | *puStack_14);
  uVar12 = *puVar32;
  out(*(undefined4 *)((int)puVar29 + 9),uVar17);
  *pbStack_10 = *pbStack_10 + 0x25;
  bVar16 = (byte)uVar12 | *(byte *)((int)puVar29 + 0xd);
  out(*(undefined4 *)((int)puVar29 + 0xd),uVar17);
  cVar6 = bVar16 - *(char *)(CONCAT31(uVar14,bVar16) & 0x21100ff);
  pcVar10 = (char *)(CONCAT31(uVar14,cVar6) & 0x21100ff);
  *pbStack_10 = *pbStack_10 + 0x25;
  unaff_EBP[0x70a0000] = unaff_EBP[0x70a0000] - (char)puStack_14;
  pbVar28 = (byte *)((int)puVar29 + 0x15);
  out(*(undefined4 *)((int)puVar29 + 0x11),uVar17);
  *pcVar10 = *pcVar10 + cVar6;
  pbVar9 = (byte *)CONCAT22(0x40,CONCAT11(bRam070adee6 | 0x43,0x26));
  puVar21 = (uint *)(CONCAT31(uVar14,cVar6 + -6) & 0x21100ff);
  pbVar30 = pbStack_10;
  puVar33 = puStack_14;
code_r0x0040436f:
  pbStack_8._0_2_ = in_ES;
  pbVar22 = pbVar28 + 4;
  out(*(undefined4 *)pbVar28,(short)pbVar30);
  pbVar28 = pbVar30 + 1;
  *(char *)puVar21 = (char)*puVar21 + (char)puVar21;
  bVar4 = (byte)puVar33 | (byte)((uint)puVar21 >> 8);
  pbVar25 = (byte *)CONCAT31((int3)((uint)puVar33 >> 8),bVar4);
  uVar13 = (undefined3)((uint)puVar21 >> 8);
  bVar3 = (char)puVar21 - (char)*puVar21;
  bVar16 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar3;
  *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3 + CARRY1(bVar16,bVar3);
  *pbVar28 = *pbVar28 + bVar3;
  *pbVar9 = *pbVar9 + (char)pbVar28;
  bVar16 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar4;
  bVar5 = 9 < (bVar3 & 0xf) | in_AF;
  bVar3 = bVar3 + bVar5 * -6;
  cVar6 = bVar3 + (0x9f < bVar3 | CARRY1(bVar16,bVar4) | bVar5 * (bVar3 < 6)) * -0x60;
  pcVar10 = (char *)CONCAT31(uVar13,cVar6);
  *pbVar28 = *pbVar28 + (char)pbVar9;
  *pcVar10 = *pcVar10 + cVar6;
  *pcVar10 = *pcVar10 + cVar6;
  puVar21 = (uint *)(pbVar30 + 2);
  uVar12 = CONCAT31(uVar13,cVar6 + *pbVar25) + 0x6128;
  uVar13 = (undefined3)(uVar12 >> 8);
  cVar6 = (char)uVar12 + *(char *)((int)puVar32 * 2 + 0x4000064);
  bVar3 = cVar6 - *(char *)CONCAT31(uVar13,cVar6);
  pbVar28 = (byte *)CONCAT31(uVar13,bVar3);
  bVar16 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar3;
  pbVar22 = pbVar22 + (-(uint)CARRY1(bVar16,bVar3) - *(int *)pbVar28);
  bVar3 = bVar3 + *pbVar28;
  pbVar28 = (byte *)CONCAT31(uVar13,bVar3);
  bVar16 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar3;
  *puVar21 = (uint)(pbVar28 + (uint)CARRY1(bVar16,bVar3) + *puVar21);
  cVar6 = (char)((uint)puVar21 >> 8);
  if ((POPCOUNT(*puVar21 & 0xff) & 1U) != 0) {
    cVar18 = bVar3 - *pbVar9;
    pbVar28 = (byte *)CONCAT31(uVar13,cVar18);
    *pbVar28 = *pbVar28 + cVar18 + (bVar3 < *pbVar9);
    *(byte *)puVar21 = (byte)*puVar21 + cVar18;
    *(byte *)puVar32 = (byte)*puVar32 + cVar6;
    puVar33 = puVar32;
    goto code_r0x00404417;
  }
  *pbVar28 = *pbVar28 + bVar3;
  cVar18 = bVar3 + 0x28;
  pcVar10 = (char *)CONCAT31(uVar13,cVar18);
  uVar1 = in((short)puVar21);
  *puVar32 = uVar1;
  *pcVar10 = *pcVar10 + cVar18;
  bVar16 = pbVar25[(int)pbVar9];
  pcVar10[0x28] = pcVar10[0x28] + cVar6;
  bVar35 = ((ushort)pbStack_8 & 0x400) != 0;
  bVar5 = ((ushort)pbStack_8 & 0x10) != 0;
  *pcVar10 = *pcVar10 + cVar18;
  bVar16 = (byte)((uint)pbVar9 >> 8) | bVar16 | (byte)*puVar21;
  pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),CONCAT11(bVar16,(char)pbVar9));
  uVar17 = (undefined2)((uint)puVar33 >> 0x10);
  bVar27 = (char)((uint)puVar33 >> 8) + pbVar25[100];
  pbVar25 = (byte *)CONCAT22(uVar17,CONCAT11(bVar27,bVar4));
  *pcVar10 = *pcVar10 + cVar18;
  pbVar28 = (byte *)CONCAT31(uVar13,bVar3 + 0x50);
  pbVar30[0x23] = pbVar30[0x23] + cVar6;
  pbStack_8._0_2_ = 0;
  pbVar30 = pbVar28 + 2;
  *pbVar30 = *pbVar30 + cVar6;
  puVar33 = puVar32 + 1;
  if ((POPCOUNT(*pbVar30) & 1U) != 0) goto code_r0x00404439;
  *pbVar28 = *pbVar28 + bVar3 + 0x50;
  cVar6 = bVar3 + 0x78;
  pcVar10 = (char *)CONCAT31(uVar13,cVar6);
  bVar5 = (uVar12 & 0x1000) != 0;
  *pcVar10 = *pcVar10 + cVar6;
  puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(byte)puVar21 | *pbVar22);
  pbVar25 = (byte *)CONCAT22(uVar17,CONCAT11(bVar27 | pbVar22[0x65],bVar4));
  *pcVar10 = *pcVar10 + cVar6;
  bVar3 = bVar3 + 0x9d;
  pcVar10 = (char *)CONCAT31(uVar13,bVar3);
  puVar21 = (uint *)((uint)puVar21 | *puVar21);
  *pcVar10 = *pcVar10 + bVar16;
  puVar33 = (uint *)((int)puVar32 + (uint)bVar35 * -2 + 5);
  *(byte *)(puVar32 + 1) = bVar3;
  *pcVar10 = *pcVar10 + bVar3;
  bVar3 = bVar3 | (byte)*puVar21;
  pbVar28 = (byte *)CONCAT31(uVar13,bVar3);
  if ((POPCOUNT(bVar3) & 1U) != 0) goto code_r0x00404454;
  *pbVar28 = *pbVar28 + bVar3;
  cVar6 = bVar3 + 2;
  pbVar28 = (byte *)CONCAT31(uVar13,cVar6);
  *unaff_EBP = *unaff_EBP - bVar4;
  *pbVar22 = *pbVar22 + cVar6;
  pbVar30 = pbVar22 + (uint)bVar35 * -8 + 4;
  out(*(undefined4 *)pbVar22,(short)puVar21);
  puVar32 = (uint *)((int)puVar33 + (uint)bVar35 * -2 + 1);
  pbVar22 = pbVar30 + (uint)bVar35 * -2 + 1;
  *(byte *)puVar33 = *pbVar30;
  *pbVar28 = *pbVar28 + cVar6;
  in_stack_fffffffc = (char *)0x0;
  do {
    cVar18 = (char)((uint)pbVar9 >> 8);
    pbVar25[-0x21f60000] = pbVar25[-0x21f60000] - cVar18;
    uVar13 = (undefined3)((uint)pbVar28 >> 8);
    cVar6 = ((byte)pbVar28 | *pbVar22) - 6;
    piVar7 = (int *)CONCAT31(uVar13,cVar6);
    pbStack_8._0_2_ = (ushort)in_stack_fffffffc;
    pcVar10 = (char *)((int)piVar7 * 2 + 0x2adc0a00);
    *pcVar10 = *pcVar10 - cVar18;
    *piVar7 = (int)(*piVar7 + (int)puVar21);
    *(char *)piVar7 = (char)*piVar7 + cVar6;
    bVar16 = cVar6 + (char)*piVar7;
    bVar5 = 9 < (bVar16 & 0xf) | bVar5;
    uVar12 = CONCAT31(uVar13,bVar16 + bVar5 * '\x06') & 0xffffff0f;
    pbVar28 = (byte *)CONCAT22((short)(uVar12 >> 0x10),
                               CONCAT11((char)((uint)pbVar28 >> 8) + bVar5,(char)uVar12));
    puVar33 = puVar32;
code_r0x00404417:
    *pbVar22 = *pbVar22 + (char)((uint)pbVar28 >> 8);
    unaff_EBP = (char *)0x17000000;
    *(byte *)puVar21 = (byte)*puVar21 + (char)pbVar9;
    bVar3 = (byte)pbVar28;
    *pbVar28 = *pbVar28 + bVar3;
    bVar16 = *pbVar28;
    *pbVar28 = *pbVar28 + bVar3;
    puVar32 = puVar33;
    if (!CARRY1(bVar16,bVar3)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar28 = *pbVar28 + (byte)pbVar28;
    pbVar28 = (byte *)CONCAT31((int3)((uint)pbVar28 >> 8),(byte)pbVar28 | pbVar28[0x4000065]);
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(char)pbVar25 - *pbVar22);
    bVar16 = *pbVar28;
    bVar3 = (byte)((uint)pbVar9 >> 8);
    cVar6 = (char)pbVar9;
    pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),CONCAT11(bVar3 + *pbVar28,cVar6));
    iVar2 = *(int *)pbVar28;
    *(byte *)puVar21 = (byte)*puVar21 + cVar6;
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11((char)((uint)puVar21 >> 8) - *pbVar22,(char)puVar21));
    pbVar28 = pbVar28 + *puVar21 + (uint)CARRY1(bVar3,bVar16) + iVar2;
    puVar33 = puVar32;
    if ((POPCOUNT((uint)pbVar28 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar28 = *pbVar28 + (char)pbVar28;
        uVar13 = (undefined3)((uint)pbVar28 >> 8);
        cVar6 = (char)pbVar28 + 'o';
        pcVar10 = (char *)CONCAT31(uVar13,cVar6);
        *(char **)pbVar9 = pcVar10 + *(int *)pbVar9;
        *(byte *)puVar21 = (byte)*puVar21 + (char)pbVar9;
        bVar3 = cVar6 - *pcVar10;
        pbVar28 = (byte *)CONCAT31(uVar13,bVar3);
        *pbVar25 = *pbVar25 + (char)puVar21;
        *pbVar25 = *pbVar25 ^ bVar3;
        pbVar25[0x26000000] = pbVar25[0x26000000] + (char)((uint)pbVar9 >> 8);
        bVar16 = *pbVar28;
        *pbVar28 = *pbVar28 + bVar3;
        *(byte **)(pbVar25 + 0xb) = pbVar22 + (uint)CARRY1(bVar16,bVar3) + *(int *)(pbVar25 + 0xb);
        *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
code_r0x00404454:
        in_stack_fffffffc = (char *)(uint)(ushort)pbStack_8;
        pbVar28 = (byte *)((uint)pbVar28 | 0x1027309);
        uVar12 = *puVar21;
        bVar16 = (byte)pbVar9;
        uVar1 = *puVar21;
        *(byte *)puVar21 = (byte)*puVar21 + bVar16;
        if (SCARRY1((byte)uVar1,bVar16) != (char)(byte)*puVar21 < '\0') {
          *pbVar28 = *pbVar28 + (char)pbVar28;
          *pbVar22 = *pbVar22 + 1;
          puVar32 = (uint *)(CONCAT31((int3)((uint)pbVar28 >> 8),(char)pbVar28 + '\t') | 1);
          bVar5 = *pbVar22;
          bVar3 = (byte)puVar32;
          *pbVar22 = *pbVar22 + bVar3;
          if (CARRY1(bVar5,bVar3)) {
            *puVar32 = *puVar32 + (int)puVar32;
            puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                       CONCAT11((byte)((uint)puVar21 >> 8) | pbVar25[4],
                                                (char)puVar21));
          }
          else if (!CARRY1(bVar5,bVar3)) goto code_r0x00404473;
          *puVar32 = *puVar32 + (int)puVar32;
          pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar16 | (byte)*puVar21);
code_r0x00404473:
          uVar17 = (undefined2)((uint)pbVar9 >> 0x10);
          cVar18 = (char)pbVar9;
          bVar5 = (char)((uint)pbVar9 >> 8) + (char)*puVar32;
          uVar12 = *puVar32;
          *pbVar25 = *pbVar25 + bVar5;
          pbVar28 = (byte *)((uint)puVar32 & uVar12 | *puVar33);
          pbVar31 = pbVar22 + (uint)bVar35 * -8 + 4;
          out(*(undefined4 *)pbVar22,(short)puVar21);
          *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
          bVar5 = bVar5 | *pbVar28;
          *pbVar25 = *pbVar25 + bVar5;
          uVar13 = (undefined3)((uint)pbVar28 >> 8);
          pcVar10 = (char *)CONCAT31(uVar13,0xea);
          *(uint *)(pbVar25 + -0x3d) = *(uint *)(pbVar25 + -0x3d) | (uint)puVar33;
          *pcVar10 = *pcVar10 + -0x16;
          pbVar30 = (byte *)CONCAT31(uVar13,0x59);
          *pbVar30 = *pbVar30 + 0x59;
          bVar5 = bVar5 | *pbVar30;
          pbVar9 = (byte *)CONCAT22(uVar17,CONCAT11(bVar5,cVar18));
          *pbVar9 = *pbVar9 | 0x59;
          *(byte *)puVar21 = (byte)*puVar21 + cVar18;
          *pbVar9 = *pbVar9 - cVar18;
          *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
          pbVar30 = pbVar31 + (uint)bVar35 * -8 + 4;
          out(*(undefined4 *)pbVar31,(short)puVar21);
          bVar16 = (byte)*puVar33 | 0x59 | *pbVar9;
          *(byte *)puVar21 = (byte)*puVar21 + cVar18;
          pcVar10 = (char *)CONCAT22((short)((uint)pbVar28 >> 0x10),
                                     CONCAT11((char)((uint)pbVar28 >> 8) - (char)pbVar25,bVar16));
          *pcVar10 = *pcVar10 + bVar16;
          cVar6 = (bVar16 | 8) - 2;
          piVar7 = (int *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6);
          bVar34 = ((ushort)pbStack_8 & 0x400) != 0;
          bVar35 = ((ushort)pbStack_8 & 0x10) != 0;
          *(char *)piVar7 = (char)*piVar7 + cVar6;
          uVar20 = CONCAT11((byte)((uint)puVar21 >> 8) | pbVar25[0xb],(char)puVar21);
          pcVar10 = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),uVar20);
          *piVar7 = (int)(*piVar7 + (int)piVar7);
          bVar5 = bVar5 | *(byte *)((int)puVar33 + -0x2a);
          *(char *)piVar7 = (char)*piVar7 + cVar6;
          pbVar28 = pbVar30 + (uint)bVar34 * -8 + 4;
          out(*(undefined4 *)pbVar30,uVar20);
          *pcVar10 = *pcVar10 + cVar18;
          out(*(undefined4 *)pbVar28,uVar20);
          *pcVar10 = *pcVar10 + cVar18;
          pbVar9 = (byte *)((uint)pcVar10 & 0xffffff00);
          bVar5 = bVar5 | pbVar9[CONCAT22(uVar17,CONCAT11(bVar5,cVar18))];
          pbVar30 = (byte *)CONCAT22(uVar17,CONCAT11(bVar5,cVar18));
          pbVar22 = pbVar28 + (uint)bVar34 * -8 + 4 + (uint)bVar34 * -8 + 4;
          out(*(undefined4 *)(pbVar28 + (uint)bVar34 * -8 + 4),(short)pbVar9);
          bVar16 = *pbVar30;
          puVar32 = (uint *)CONCAT31(0xf80a00,bVar16);
          *pbVar9 = *pbVar9 + cVar18;
          pbVar28 = pbVar22;
          if (*pbVar9 != 0) {
            *(byte *)puVar32 = (byte)*puVar32 + bVar16;
            pbVar30 = (byte *)CONCAT22(uVar17,CONCAT11(bVar5 + (byte)*puVar32,cVar18));
            *pbVar22 = *pbVar22;
            pbVar28 = pbVar22 + (uint)bVar34 * -8 + 4;
            out(*(undefined4 *)pbVar22,(short)pbVar9);
            puVar32 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar33 | *pbVar30);
          }
          *pbVar9 = *pbVar9 + (char)pbVar30;
          pbVar22 = pbVar9;
          if (*pbVar9 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar32 = (byte)*puVar32 + (byte)puVar32;
            pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),(char)pbVar30 + (byte)*puVar32);
            pbVar30[0x2a060000] = pbVar30[0x2a060000] - (char)((uint)pbVar9 >> 8);
            *pbVar25 = *pbVar25 + (char)pbVar9;
            *pbVar9 = *pbVar9 ^ (byte)puVar32;
            pbVar22 = pbVar9;
code_r0x004044ff:
            cVar6 = (char)((uint)pbVar30 >> 8);
            *pbVar22 = *pbVar22 + cVar6;
            uVar12 = *puVar32;
            bVar16 = (byte)puVar32;
            *(byte *)puVar32 = (byte)*puVar32 + bVar16;
            bVar5 = 9 < (bVar16 & 0xf) | bVar35;
            uVar13 = (undefined3)((uint)puVar32 >> 8);
            bVar3 = bVar16 + bVar5 * '\x06';
            bVar3 = bVar3 + (0x90 < (bVar3 & 0xf0) |
                            CARRY1((byte)uVar12,bVar16) | bVar5 * (0xf9 < bVar3)) * '`';
            pbVar9 = (byte *)CONCAT31(uVar13,bVar3);
            bVar16 = *pbVar9;
            *pbVar9 = *pbVar9 + bVar3;
            *(byte **)pbVar22 = pbVar9 + (uint)CARRY1(bVar16,bVar3) + *(int *)pbVar22;
            out(*(undefined4 *)pbVar28,(short)pbVar22);
            *pbVar9 = *pbVar9 + bVar3;
            bVar3 = bVar3 - 0xe;
            pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                       CONCAT11(cVar6 + *(byte *)((int)puVar33 + 0x3e),(char)pbVar30
                                               ));
            *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
            bVar5 = 9 < (bVar3 & 0xf) | bVar5;
            bVar3 = bVar3 + bVar5 * -6;
            bVar16 = 0x9f < bVar3 | bVar5 * (bVar3 < 6);
            puVar32 = (uint *)CONCAT31(uVar13,bVar3 + bVar16 * -0x60);
            pbVar22[0x5d] = pbVar22[0x5d] + (char)((uint)pbVar22 >> 8) + bVar16;
            *puVar32 = *puVar32 | (uint)puVar32;
            pbVar31 = pbVar28 + (uint)bVar34 * -8 + 4;
            while( true ) {
              bVar34 = ((ushort)pbStack_8 & 0x400) != 0;
              bVar35 = ((ushort)pbStack_8 & 0x10) != 0;
              *(byte *)puVar32 = (char)*puVar32 + (byte)puVar32;
              bVar3 = (byte)pbVar22 | *pbVar31;
              pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar3);
              cVar6 = (char)pbVar30;
              *pbVar30 = *pbVar30 - cVar6;
              *puVar32 = (uint)(*puVar32 + (int)puVar32);
              uVar13 = (undefined3)((uint)puVar32 >> 8);
              bVar5 = (byte)puVar32 | *pbVar9;
              pbVar28 = pbVar31 + (uint)bVar34 * -8 + 4;
              out(*(undefined4 *)pbVar31,(short)pbVar9);
              *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
              cVar18 = (char)((uint)pbVar30 >> 8);
              *unaff_EBP = *unaff_EBP - cVar18;
              *pbVar9 = *pbVar9 + cVar6;
              bVar16 = bVar5 - 0x17;
              cVar18 = cVar18 + *(byte *)((int)puVar33 + 0x46);
              pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),CONCAT11(cVar18,cVar6));
              *(char *)CONCAT31(uVar13,bVar16) = *(char *)CONCAT31(uVar13,bVar16) + bVar16;
              *unaff_EBP = *unaff_EBP - cVar18;
              *pbVar9 = *pbVar9 + cVar6;
              bVar5 = bVar5 - 0x21;
              puVar32 = (uint *)CONCAT31(uVar13,bVar5);
              if (bVar16 < 10) break;
              *puVar32 = *puVar32 | (uint)puVar32;
              *(byte *)puVar32 = (byte)*puVar32 + bVar5;
              pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar22 >> 8) | pbVar9[0x6e],bVar3));
              bVar5 = bVar5 | (byte)*puVar32;
              *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
              puVar32 = (uint *)CONCAT31(uVar13,bVar5 | *pbVar22);
              pbVar31 = pbVar28;
            }
          } while( true );
        }
        puVar32 = puVar33;
        if (CARRY1((byte)uVar12,bVar16)) goto code_r0x00404423;
code_r0x00404436:
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((char)((uint)pbVar25 >> 8) + pbVar25[-0x3d],
                                            (char)pbVar25));
      } while( true );
    }
    *pbVar22 = *pbVar22 + (char)pbVar28;
  } while( true );
code_r0x00404271:
  *pcVar8 = *pcVar8 + (char)pcVar8;
  pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + ',');
  goto code_r0x00404272;
}


