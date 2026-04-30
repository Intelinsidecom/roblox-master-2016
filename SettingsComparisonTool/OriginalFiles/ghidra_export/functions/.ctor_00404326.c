/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404326
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(int settingsAquirer, char * reportBuffer, undefined4 param_3, uint * param_4, char * param_5, ushort * param_6, byte * param_7)
 * Local Vars  : cVar5, param_3, bVar4, param_4, param_5, puVar7, param_6, piVar6, param_7, uVar9, pcVar8, pbVar11, pbVar10, uVar13, uVar12, cVar15, settingsAquirer, iVar14, reportBuffer, uVar17, uVar16, puVar19, pcVar18, bVar21, bVar20, puVar23, puVar22, pbVar25, pbVar24, puVar27, pbVar26, in_ES, puVar28, bVar29, in_AF, bVar31, bVar30, unaff_retaddr, uVar1, cVar3, bVar2
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

int _ctor(int settingsAquirer,char *reportBuffer,undefined4 param_3,uint *param_4,char *param_5,
         ushort *param_6,byte *param_7)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  int *piVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined3 uVar13;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  char cVar15;
  int iVar14;
  undefined2 uVar16;
  undefined2 uVar17;
  char *pcVar18;
  uint *puVar19;
  byte bVar20;
  byte bVar21;
  ushort *puVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  uint *puVar27;
  uint *puVar28;
  ushort in_ES;
  byte in_AF;
  byte bVar29;
  bool bVar30;
  bool bVar31;
  undefined1 *unaff_retaddr;
  uint3 uVar12;
  
                    /* .NET CLR Managed Code */
  bVar30 = false;
  bVar29 = (byte)param_7;
  *param_7 = *param_7 + bVar29;
  bVar2 = *param_7;
  uVar12 = (uint3)((uint)param_7 >> 8);
  piVar6 = (int *)CONCAT31(uVar12,bVar29 - bVar2);
  puVar23 = (undefined4 *)((settingsAquirer - *piVar6) - (uint)(bVar29 < *param_7));
  *piVar6 = (int)(*piVar6 + (int)piVar6);
  *(byte *)piVar6 = (char)*piVar6 + (bVar29 - bVar2);
  puVar7 = (undefined1 *)((uint)(uVar12 & 0x21100) << 8);
  bVar20 = (byte)param_4;
  *reportBuffer = *reportBuffer - bVar20;
  *(undefined1 *)puVar23 = *(undefined1 *)puVar23;
  uVar17 = SUB42(param_5,0);
  out(*puVar23,uVar17);
  puVar27 = (uint *)(unaff_retaddr + 1);
  *unaff_retaddr = *(undefined1 *)(puVar23 + 1);
  *puVar7 = *puVar7;
  out(*(undefined4 *)((int)puVar23 + 5),uVar17);
  cVar15 = (char)param_6;
  *param_5 = *param_5 + cVar15;
  puVar22 = (ushort *)((uint)reportBuffer | *param_4);
  uVar9 = *puVar27;
  out(*(undefined4 *)((int)puVar23 + 9),uVar17);
  *param_5 = *param_5 + cVar15;
  bVar2 = (byte)uVar9 | *(byte *)((int)puVar23 + 0xd);
  out(*(undefined4 *)((int)puVar23 + 0xd),uVar17);
  cVar3 = bVar2 - *(char *)(CONCAT31(uVar12,bVar2) & 0x21100ff);
  pcVar8 = (char *)(CONCAT31(uVar12,cVar3) & 0x21100ff);
  *param_5 = *param_5 + cVar15;
  *(byte *)(puVar22 + 0x3850000) = (char)puVar22[0x3850000] - bVar20;
  out(*(undefined4 *)((int)puVar23 + 0x11),uVar17);
  iVar14 = (int)param_6 + 1;
  *pcVar8 = *pcVar8 + cVar3;
  uVar16 = (undefined2)((uint)iVar14 >> 0x10);
  cVar15 = (char)iVar14;
  bRam070adee6 = (byte)((uint)iVar14 >> 8) | bRam070adee6;
  pbVar11 = (byte *)CONCAT22(uVar16,CONCAT11(bRam070adee6,cVar15));
  cVar3 = cVar3 + -6;
  pcVar8 = (char *)(CONCAT31(uVar12,cVar3) & 0x21100ff);
  pbVar24 = (byte *)((int)puVar23 + 0x19);
  out(*(undefined4 *)((int)puVar23 + 0x15),uVar17);
  pcVar18 = param_5 + 1;
  *pcVar8 = *pcVar8 + cVar3;
  bVar4 = cVar3 - *pcVar8;
  pcVar8 = (char *)(CONCAT31(uVar12,bVar4) & 0x21100ff);
  bVar2 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  *pcVar8 = *pcVar8 + bVar4 + CARRY1(bVar2,bVar4);
  *pcVar18 = *pcVar18 + bVar4;
  *pbVar11 = *pbVar11 + (char)pcVar18;
  bVar2 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar20;
  bVar29 = 9 < (bVar4 & 0xf) | in_AF;
  bVar4 = bVar4 + bVar29 * -6;
  cVar3 = bVar4 + (0x9f < bVar4 | CARRY1(bVar2,bVar20) | bVar29 * (bVar4 < 6)) * -0x60;
  pcVar8 = (char *)(CONCAT31(uVar12,cVar3) & 0x21100ff);
  *pcVar18 = *pcVar18 + cVar15;
  *pcVar8 = *pcVar8 + cVar3;
  *pcVar8 = *pcVar8 + cVar3;
  puVar19 = (uint *)(param_5 + 2);
  iVar14 = (CONCAT31(uVar12,cVar3 + (char)*param_4) & 0x21100ff) + 0x6128;
  param_6 = (ushort *)CONCAT22(param_6._2_2_,in_ES);
  uVar13 = (undefined3)((uint)iVar14 >> 8);
  cVar3 = (char)iVar14 + *(char *)((int)puVar27 * 2 + 0x4000064);
  bVar4 = cVar3 - *(char *)CONCAT31(uVar13,cVar3);
  pbVar10 = (byte *)CONCAT31(uVar13,bVar4);
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  pbVar24 = pbVar24 + (-(uint)CARRY1(bVar2,bVar4) - *(int *)pbVar10);
  bVar4 = bVar4 + *pbVar10;
  pbVar10 = (byte *)CONCAT31(uVar13,bVar4);
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  *puVar19 = (uint)(pbVar10 + (uint)CARRY1(bVar2,bVar4) + *puVar19);
  cVar3 = (char)((uint)puVar19 >> 8);
  if ((POPCOUNT(*puVar19 & 0xff) & 1U) != 0) {
    cVar15 = bVar4 - *pbVar11;
    pbVar10 = (byte *)CONCAT31(uVar13,cVar15);
    *pbVar10 = *pbVar10 + cVar15 + (bVar4 < *pbVar11);
    *(byte *)puVar19 = (byte)*puVar19 + cVar15;
    *(byte *)puVar27 = (byte)*puVar27 + cVar3;
    param_5._0_2_ = in_ES;
    goto code_r0x00404417;
  }
  *pbVar10 = *pbVar10 + bVar4;
  cVar5 = bVar4 + 0x28;
  pcVar8 = (char *)CONCAT31(uVar13,cVar5);
  uVar9 = in((short)puVar19);
  *puVar27 = uVar9;
  *pcVar8 = *pcVar8 + cVar5;
  bVar2 = *(byte *)((int)param_4 + (int)pbVar11);
  pcVar8[0x28] = pcVar8[0x28] + cVar3;
  bVar30 = (in_ES & 0x400) != 0;
  bVar29 = (in_ES & 0x10) != 0;
  *pcVar8 = *pcVar8 + cVar5;
  bVar2 = bRam070adee6 | bVar2 | (byte)*puVar19;
  pbVar11 = (byte *)CONCAT22(uVar16,CONCAT11(bVar2,cVar15));
  bVar21 = (char)((uint)param_4 >> 8) + (char)param_4[0x19];
  param_4 = (uint *)CONCAT22(param_4._2_2_,CONCAT11(bVar21,bVar20));
  *pcVar8 = *pcVar8 + cVar5;
  pbVar10 = (byte *)CONCAT31(uVar13,bVar4 + 0x50);
  param_5[0x23] = param_5[0x23] + cVar3;
  param_5._0_2_ = 0;
  pbVar25 = pbVar10 + 2;
  *pbVar25 = *pbVar25 + cVar3;
  puVar27 = (uint *)(unaff_retaddr + 5);
  if ((POPCOUNT(*pbVar25) & 1U) != 0) goto code_r0x00404439;
  *pbVar10 = *pbVar10 + bVar4 + 0x50;
  cVar3 = bVar4 + 0x78;
  pcVar8 = (char *)CONCAT31(uVar13,cVar3);
  bVar29 = 0;
  *pcVar8 = *pcVar8 + cVar3;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(byte)puVar19 | *pbVar24);
  param_4 = (uint *)CONCAT22(param_4._2_2_,CONCAT11(bVar21 | pbVar24[0x65],bVar20));
  *pcVar8 = *pcVar8 + cVar3;
  bVar4 = bVar4 + 0x9d;
  pcVar8 = (char *)CONCAT31(uVar13,bVar4);
  puVar19 = (uint *)((uint)puVar19 | *puVar19);
  *pcVar8 = *pcVar8 + bVar2;
  puVar27 = (uint *)(unaff_retaddr + (uint)bVar30 * -2 + 6);
  unaff_retaddr[5] = bVar4;
  *pcVar8 = *pcVar8 + bVar4;
  bVar4 = bVar4 | (byte)*puVar19;
  pbVar10 = (byte *)CONCAT31(uVar13,bVar4);
  if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00404454;
  *pbVar10 = *pbVar10 + bVar4;
  cVar3 = bVar4 + 2;
  pbVar10 = (byte *)CONCAT31(uVar13,cVar3);
  *(byte *)puVar22 = (char)*puVar22 - bVar20;
  *pbVar24 = *pbVar24 + cVar3;
  pbVar25 = pbVar24 + (uint)bVar30 * -8 + 4;
  out(*(undefined4 *)pbVar24,(short)puVar19);
  puVar28 = (uint *)((int)puVar27 + (uint)bVar30 * -2 + 1);
  pbVar24 = pbVar25 + (uint)bVar30 * -2 + 1;
  *(byte *)puVar27 = *pbVar25;
  *pbVar10 = *pbVar10 + cVar3;
  do {
    cVar15 = (char)((uint)pbVar11 >> 8);
    *(byte *)(param_4 + -0x87d8000) = (byte)param_4[-0x87d8000] - cVar15;
    uVar13 = (undefined3)((uint)pbVar10 >> 8);
    cVar3 = ((byte)pbVar10 | *pbVar24) - 6;
    piVar6 = (int *)CONCAT31(uVar13,cVar3);
    param_5._0_2_ = 0;
    pcVar8 = (char *)((int)piVar6 * 2 + 0x2adc0a00);
    *pcVar8 = *pcVar8 - cVar15;
    *piVar6 = (int)(*piVar6 + (int)puVar19);
    *(char *)piVar6 = (char)*piVar6 + cVar3;
    bVar2 = cVar3 + (char)*piVar6;
    bVar29 = 9 < (bVar2 & 0xf) | bVar29;
    uVar9 = CONCAT31(uVar13,bVar2 + bVar29 * '\x06') & 0xffffff0f;
    pbVar10 = (byte *)CONCAT22((short)(uVar9 >> 0x10),
                               CONCAT11((char)((uint)pbVar10 >> 8) + bVar29,(char)uVar9));
    puVar27 = puVar28;
code_r0x00404417:
    *pbVar24 = *pbVar24 + (char)((uint)pbVar10 >> 8);
    *(byte *)puVar19 = (byte)*puVar19 + (char)pbVar11;
    bVar4 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    bVar2 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    puVar22 = param_6;
    puVar28 = puVar27;
    if (!CARRY1(bVar2,bVar4)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar10 = *pbVar10 + (byte)pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 | pbVar10[0x4000065]);
    param_4 = (uint *)CONCAT31((int3)((uint)param_4 >> 8),(char)param_4 - *pbVar24);
    bVar2 = *pbVar10;
    bVar4 = (byte)((uint)pbVar11 >> 8);
    cVar3 = (char)pbVar11;
    pbVar11 = (byte *)CONCAT22((short)((uint)pbVar11 >> 0x10),CONCAT11(bVar4 + *pbVar10,cVar3));
    iVar14 = *(int *)pbVar10;
    *(byte *)puVar19 = (byte)*puVar19 + cVar3;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((char)((uint)puVar19 >> 8) - *pbVar24,(char)puVar19));
    pbVar10 = pbVar10 + *puVar19 + (uint)CARRY1(bVar4,bVar2) + iVar14;
    puVar27 = puVar28;
    if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar10 = *pbVar10 + (char)pbVar10;
        uVar13 = (undefined3)((uint)pbVar10 >> 8);
        cVar3 = (char)pbVar10 + 'o';
        pcVar8 = (char *)CONCAT31(uVar13,cVar3);
        *(char **)pbVar11 = pcVar8 + *(int *)pbVar11;
        *(byte *)puVar19 = (byte)*puVar19 + (char)pbVar11;
        bVar4 = cVar3 - *pcVar8;
        pbVar10 = (byte *)CONCAT31(uVar13,bVar4);
        *(byte *)param_4 = (byte)*param_4 + (char)puVar19;
        *(byte *)param_4 = (byte)*param_4 ^ bVar4;
        *(byte *)(param_4 + 0x9800000) = (byte)param_4[0x9800000] + (char)((uint)pbVar11 >> 8);
        bVar2 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar4;
        *(byte **)((int)param_4 + 0xb) =
             pbVar24 + (uint)CARRY1(bVar2,bVar4) + *(int *)((int)param_4 + 0xb);
        *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
code_r0x00404454:
        pbVar10 = (byte *)((uint)pbVar10 | 0x1027309);
        uVar9 = *puVar19;
        bVar2 = (byte)pbVar11;
        uVar1 = *puVar19;
        *(byte *)puVar19 = (byte)*puVar19 + bVar2;
        if (SCARRY1((byte)uVar1,bVar2) != (char)(byte)*puVar19 < '\0') {
          *pbVar10 = *pbVar10 + (char)pbVar10;
          *pbVar24 = *pbVar24 + 1;
          puVar28 = (uint *)(CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + '\t') | 1);
          bVar29 = *pbVar24;
          bVar4 = (byte)puVar28;
          *pbVar24 = *pbVar24 + bVar4;
          if (CARRY1(bVar29,bVar4)) {
            *puVar28 = *puVar28 + (int)puVar28;
            puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                       CONCAT11((byte)((uint)puVar19 >> 8) | (byte)param_4[1],
                                                (char)puVar19));
          }
          else if (!CARRY1(bVar29,bVar4)) goto code_r0x00404473;
          *puVar28 = *puVar28 + (int)puVar28;
          pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar2 | (byte)*puVar19);
code_r0x00404473:
          uVar16 = (undefined2)((uint)pbVar11 >> 0x10);
          cVar15 = (char)pbVar11;
          bVar29 = (char)((uint)pbVar11 >> 8) + (char)*puVar28;
          uVar9 = *puVar28;
          *(byte *)param_4 = (byte)*param_4 + bVar29;
          pbVar10 = (byte *)((uint)puVar28 & uVar9 | *puVar27);
          pbVar25 = pbVar24 + (uint)bVar30 * -8 + 4;
          out(*(undefined4 *)pbVar24,(short)puVar19);
          *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
          bVar29 = bVar29 | *pbVar10;
          *(byte *)param_4 = (byte)*param_4 + bVar29;
          uVar13 = (undefined3)((uint)pbVar10 >> 8);
          pcVar8 = (char *)CONCAT31(uVar13,0xea);
          *(uint *)((int)param_4 + -0x3d) = *(uint *)((int)param_4 + -0x3d) | (uint)puVar27;
          *pcVar8 = *pcVar8 + -0x16;
          pbVar24 = (byte *)CONCAT31(uVar13,0x59);
          *pbVar24 = *pbVar24 + 0x59;
          bVar29 = bVar29 | *pbVar24;
          pbVar11 = (byte *)CONCAT22(uVar16,CONCAT11(bVar29,cVar15));
          *pbVar11 = *pbVar11 | 0x59;
          *(byte *)puVar19 = (byte)*puVar19 + cVar15;
          *pbVar11 = *pbVar11 - cVar15;
          *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
          pbVar24 = pbVar25 + (uint)bVar30 * -8 + 4;
          out(*(undefined4 *)pbVar25,(short)puVar19);
          bVar2 = (byte)*puVar27 | 0x59 | *pbVar11;
          *(byte *)puVar19 = (byte)*puVar19 + cVar15;
          pcVar8 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                                    CONCAT11((char)((uint)pbVar10 >> 8) - (char)param_4,bVar2));
          *pcVar8 = *pcVar8 + bVar2;
          cVar3 = (bVar2 | 8) - 2;
          piVar6 = (int *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar3);
          bVar31 = ((ushort)param_5 & 0x400) != 0;
          bVar30 = ((ushort)param_5 & 0x10) != 0;
          *(char *)piVar6 = (char)*piVar6 + cVar3;
          uVar17 = CONCAT11((byte)((uint)puVar19 >> 8) | *(byte *)((int)param_4 + 0xb),(char)puVar19
                           );
          pcVar8 = (char *)CONCAT22((short)((uint)puVar19 >> 0x10),uVar17);
          *piVar6 = (int)(*piVar6 + (int)piVar6);
          bVar29 = bVar29 | *(byte *)((int)puVar27 + -0x2a);
          *(char *)piVar6 = (char)*piVar6 + cVar3;
          pbVar25 = pbVar24 + (uint)bVar31 * -8 + 4;
          out(*(undefined4 *)pbVar24,uVar17);
          *pcVar8 = *pcVar8 + cVar15;
          out(*(undefined4 *)pbVar25,uVar17);
          *pcVar8 = *pcVar8 + cVar15;
          pbVar11 = (byte *)((uint)pcVar8 & 0xffffff00);
          bVar29 = bVar29 | pbVar11[CONCAT22(uVar16,CONCAT11(bVar29,cVar15))];
          pbVar10 = (byte *)CONCAT22(uVar16,CONCAT11(bVar29,cVar15));
          pbVar26 = pbVar25 + (uint)bVar31 * -8 + 4 + (uint)bVar31 * -8 + 4;
          out(*(undefined4 *)(pbVar25 + (uint)bVar31 * -8 + 4),(short)pbVar11);
          bVar2 = *pbVar10;
          puVar19 = (uint *)CONCAT31(0xf80a00,bVar2);
          *pbVar11 = *pbVar11 + cVar15;
          pbVar24 = pbVar26;
          if (*pbVar11 != 0) {
            *(byte *)puVar19 = (byte)*puVar19 + bVar2;
            pbVar10 = (byte *)CONCAT22(uVar16,CONCAT11(bVar29 + (byte)*puVar19,cVar15));
            *pbVar26 = *pbVar26;
            pbVar24 = pbVar26 + (uint)bVar31 * -8 + 4;
            out(*(undefined4 *)pbVar26,(short)pbVar11);
            puVar19 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar27 | *pbVar10);
          }
          *pbVar11 = *pbVar11 + (char)pbVar10;
          pbVar25 = pbVar11;
          if (*pbVar11 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
            pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + (byte)*puVar19);
            pbVar10[0x2a060000] = pbVar10[0x2a060000] - (char)((uint)pbVar11 >> 8);
            *(byte *)param_4 = (byte)*param_4 + (char)pbVar11;
            *pbVar11 = *pbVar11 ^ (byte)puVar19;
            pbVar25 = pbVar11;
code_r0x004044ff:
            cVar3 = (char)((uint)pbVar10 >> 8);
            *pbVar25 = *pbVar25 + cVar3;
            uVar9 = *puVar19;
            bVar2 = (byte)puVar19;
            *(byte *)puVar19 = (byte)*puVar19 + bVar2;
            bVar29 = 9 < (bVar2 & 0xf) | bVar30;
            uVar13 = (undefined3)((uint)puVar19 >> 8);
            bVar4 = bVar2 + bVar29 * '\x06';
            bVar4 = bVar4 + (0x90 < (bVar4 & 0xf0) |
                            CARRY1((byte)uVar9,bVar2) | bVar29 * (0xf9 < bVar4)) * '`';
            pbVar11 = (byte *)CONCAT31(uVar13,bVar4);
            bVar2 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar4;
            *(byte **)pbVar25 = pbVar11 + (uint)CARRY1(bVar2,bVar4) + *(int *)pbVar25;
            out(*(undefined4 *)pbVar24,(short)pbVar25);
            *pbVar11 = *pbVar11 + bVar4;
            bVar4 = bVar4 - 0xe;
            pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                                       CONCAT11(cVar3 + *(byte *)((int)puVar27 + 0x3e),(char)pbVar10
                                               ));
            *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
            bVar29 = 9 < (bVar4 & 0xf) | bVar29;
            bVar4 = bVar4 + bVar29 * -6;
            bVar2 = 0x9f < bVar4 | bVar29 * (bVar4 < 6);
            puVar19 = (uint *)CONCAT31(uVar13,bVar4 + bVar2 * -0x60);
            pbVar25[0x5d] = pbVar25[0x5d] + (char)((uint)pbVar25 >> 8) + bVar2;
            *puVar19 = *puVar19 | (uint)puVar19;
            pbVar26 = pbVar24 + (uint)bVar31 * -8 + 4;
            while( true ) {
              bVar31 = ((ushort)param_5 & 0x400) != 0;
              bVar30 = ((ushort)param_5 & 0x10) != 0;
              *(byte *)puVar19 = (char)*puVar19 + (byte)puVar19;
              bVar4 = (byte)pbVar25 | *pbVar26;
              pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar4);
              cVar3 = (char)pbVar10;
              *pbVar10 = *pbVar10 - cVar3;
              *puVar19 = (uint)(*puVar19 + (int)puVar19);
              uVar13 = (undefined3)((uint)puVar19 >> 8);
              bVar29 = (byte)puVar19 | *pbVar11;
              pbVar24 = pbVar26 + (uint)bVar31 * -8 + 4;
              out(*(undefined4 *)pbVar26,(short)pbVar11);
              *(char *)CONCAT31(uVar13,bVar29) = *(char *)CONCAT31(uVar13,bVar29) + bVar29;
              cVar15 = (char)((uint)pbVar10 >> 8);
              *(char *)puVar22 = (char)*puVar22 - cVar15;
              *pbVar11 = *pbVar11 + cVar3;
              bVar2 = bVar29 - 0x17;
              cVar15 = cVar15 + *(byte *)((int)puVar27 + 0x46);
              pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),CONCAT11(cVar15,cVar3));
              *(char *)CONCAT31(uVar13,bVar2) = *(char *)CONCAT31(uVar13,bVar2) + bVar2;
              *(char *)puVar22 = (char)*puVar22 - cVar15;
              *pbVar11 = *pbVar11 + cVar3;
              bVar29 = bVar29 - 0x21;
              puVar19 = (uint *)CONCAT31(uVar13,bVar29);
              if (bVar2 < 10) break;
              *puVar19 = *puVar19 | (uint)puVar19;
              *(byte *)puVar19 = (byte)*puVar19 + bVar29;
              pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar25 >> 8) | pbVar11[0x6e],bVar4))
              ;
              bVar29 = bVar29 | (byte)*puVar19;
              *(char *)CONCAT31(uVar13,bVar29) = *(char *)CONCAT31(uVar13,bVar29) + bVar29;
              puVar19 = (uint *)CONCAT31(uVar13,bVar29 | *pbVar25);
              pbVar26 = pbVar24;
            }
          } while( true );
        }
        puVar28 = puVar27;
        if (CARRY1((byte)uVar9,bVar2)) goto code_r0x00404423;
code_r0x00404436:
        param_4 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                                   CONCAT11((char)((uint)param_4 >> 8) +
                                            *(byte *)((int)param_4 + -0x3d),(char)param_4));
      } while( true );
    }
    *pbVar24 = *pbVar24 + (char)pbVar10;
  } while( true );
}


