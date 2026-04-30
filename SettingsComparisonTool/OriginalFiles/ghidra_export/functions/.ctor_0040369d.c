/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040369d
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(char * settingsAquirer, int * filename)
 * Local Vars  : puVar27, cVar28, uVar29, unaff_EBX, pbVar30, bVar31, cVar32, bVar33, uVar34, puVar35, puVar36, piVar37, piVar38, puVar39, puVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, unaff_EBP, pbVar55, unaff_ESI, pbVar56, pbVar57, unaff_EDI, puVar58, in_ES, in_CS, in_SS, uVar59, in_DS, uVar60, bVar61, in_AF, in_TF, in_IF, bVar62, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar63, unaff_retaddr, settingsAquirer, filename, puStack_8, puVar1, uVar2, uVar3, pcVar4, uVar5, iVar6, puVar7, bVar8, cVar9, bVar10, cVar11, bVar12, bVar13, bVar14, in_EAX, pbVar15, pcVar16, piVar17, pbVar18, pbVar19, pcVar20, pbVar21, puVar22, uVar23, uVar24, iVar25, extraout_ECX, extraout_ECX_00, uVar26
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x080a0056 : 0x004038cf */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

byte * __fastcall _ctor(char *settingsAquirer,int *filename)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined6 uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined4 in_EAX;
  byte *pbVar15;
  undefined3 uVar23;
  char *pcVar16;
  int *piVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint3 uVar24;
  char *pcVar20;
  byte *pbVar21;
  uint *puVar22;
  int iVar25;
  byte *extraout_ECX;
  undefined3 uVar26;
  byte *extraout_ECX_00;
  undefined1 *puVar27;
  char cVar28;
  undefined1 uVar29;
  byte bVar31;
  byte bVar33;
  byte *unaff_EBX;
  char cVar32;
  byte *pbVar30;
  undefined2 uVar34;
  undefined4 *puVar35;
  undefined2 *puVar36;
  int *piVar37;
  int *piVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined2 *puVar41;
  undefined4 *puVar42;
  undefined2 *puVar43;
  undefined1 *puVar44;
  undefined2 *puVar45;
  undefined2 *puVar46;
  undefined4 *puVar47;
  undefined2 *puVar48;
  undefined2 *puVar49;
  undefined2 *puVar50;
  undefined2 *puVar51;
  undefined1 *puVar52;
  undefined2 *puVar53;
  undefined1 *puVar54;
  char *unaff_EBP;
  byte *pbVar55;
  byte *unaff_ESI;
  byte *pbVar56;
  byte *pbVar57;
  uint *unaff_EDI;
  uint *puVar58;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 uVar59;
  undefined2 in_DS;
  undefined2 uVar60;
  bool bVar61;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar62;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar63;
  undefined2 unaff_retaddr;
  undefined4 *puStack_8;
  
                    /* .NET CLR Managed Code */
  iVar25 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *unaff_EBX + '\x05');
  *(char *)(iVar25 * 2) = *(char *)(iVar25 * 2) - (char)((uint)settingsAquirer >> 8);
  while( true ) {
    settingsAquirer =
         (char *)CONCAT31((int3)((uint)settingsAquirer >> 8),(char)settingsAquirer + *unaff_ESI);
    pbVar15 = (byte *)(CONCAT31((int3)((uint)iVar25 >> 8),(char)iVar25 + '%') + 0x1ebd9f3);
    puStack_8 = (undefined4 *)CONCAT22(puStack_8._2_2_,in_ES);
    bVar8 = (byte)pbVar15;
    bVar61 = CARRY1(*pbVar15,bVar8);
    *pbVar15 = *pbVar15 + bVar8;
    puVar35 = puStack_8 + -1;
    *(undefined2 *)(puStack_8 + -1) = in_ES;
    cVar11 = (char)filename;
    if (bVar61) {
      *pbVar15 = *pbVar15 + bVar8;
      uVar59 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar31 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x47];
      pcVar20 = (char *)CONCAT22(uVar59,CONCAT11(bVar31,(char)unaff_EBX));
      *pbVar15 = *pbVar15 + bVar8;
      uVar23 = (undefined3)((uint)pbVar15 >> 8);
      bVar8 = bVar8 + 0x2a;
      *pcVar20 = *pcVar20 + cVar11;
      pbVar15 = (byte *)((int)CONCAT31(uVar23,bVar8) * 2);
      *pbVar15 = *pbVar15 ^ bVar8;
      bVar8 = bVar8 ^ *(byte *)CONCAT31(uVar23,bVar8);
      pbVar15 = (byte *)CONCAT31(uVar23,bVar8);
      bVar10 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar8;
      *pbVar15 = (*pbVar15 - bVar8) - CARRY1(bVar10,bVar8);
      *settingsAquirer = *settingsAquirer + cVar11;
      unaff_EBX = (byte *)CONCAT22(uVar59,CONCAT11(bVar31 + pcVar20[0x38],(char)unaff_EBX));
      *pbVar15 = *pbVar15 + bVar8;
      cVar9 = bVar8 + 2;
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        pcVar4 = (code *)swi(7);
        uVar63 = (*pcVar4)();
        pbVar15 = extraout_ECX;
        puVar58 = unaff_EDI;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar23,cVar9) = *(char *)CONCAT31(uVar23,cVar9) + cVar9;
      bVar8 = bVar8 + 0x71;
      pbVar15 = (byte *)CONCAT31(uVar23,bVar8);
      in_SS = *(undefined2 *)(puStack_8 + -1);
      *pbVar15 = *pbVar15 + bVar8;
      iVar25 = (int)settingsAquirer - *filename;
      settingsAquirer =
           (char *)CONCAT22((short)((uint)iVar25 >> 0x10),
                            CONCAT11((char)((uint)iVar25 >> 8) + *pbVar15,(char)iVar25));
      unaff_EBP = (char *)*puStack_8;
      bVar61 = CARRY1(*pbVar15,bVar8);
      *pbVar15 = *pbVar15 + bVar8;
      *(undefined2 *)puStack_8 = in_ES;
      *(undefined2 *)(puStack_8 + -1) = in_ES;
    }
    bVar8 = (byte)pbVar15;
    uVar23 = (undefined3)((uint)pbVar15 >> 8);
    if (bVar61) break;
    *(byte *)filename = (char)*filename + (byte)settingsAquirer;
    *(char *)((int)filename + (int)unaff_EBP) = *(char *)((int)filename + (int)unaff_EBP) + bVar8;
    iVar25 = CONCAT31(uVar23,(char)*filename);
    iVar25 = iVar25 + *(int *)(iVar25 + 0x6c28);
  }
  *pbVar15 = *pbVar15 + bVar8;
  uVar24 = (uint3)((uint)settingsAquirer >> 8);
  pbVar57 = (byte *)CONCAT31(uVar24,(byte)settingsAquirer | *unaff_EBX);
  in_SS = *(undefined2 *)puStack_8;
  puVar35 = puStack_8 + 1;
  pbVar56 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,(short)filename);
  puVar58 = (uint *)((int)unaff_EDI + 1);
  *pbVar15 = *pbVar15 + bVar8;
  bVar8 = bVar8 | *(byte *)puVar58;
  pbVar15 = (byte *)CONCAT31(uVar23,bVar8);
  *(byte *)((int)unaff_EDI + 0x6f0a0001) =
       *(byte *)((int)unaff_EDI + 0x6f0a0001) - (char)((uint)settingsAquirer >> 8);
  bRam2a060000 = bVar8;
  *(undefined2 *)puStack_8 = unaff_retaddr;
  cVar28 = (char)unaff_EBX;
  cVar9 = cVar28 - (char)*filename;
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar9);
  if (cVar9 == '\0' || cVar28 < (char)*filename) {
code_r0x00403750:
    uVar63 = CONCAT44(filename,pbVar15);
    unaff_ESI = pbVar56 + 4;
    out(*(undefined4 *)pbVar56,(short)filename);
    bVar10 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar10;
    *pbVar57 = *pbVar57 + (char)unaff_EBX;
    bVar8 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar10;
    *(byte **)(unaff_EBX + -0x49) =
         unaff_ESI + (uint)CARRY1(bVar8,bVar10) + *(int *)(unaff_EBX + -0x49);
    puVar35 = puStack_8;
    in_ES = unaff_retaddr;
  }
  else {
    *pbVar15 = *pbVar15 + bVar8;
    iVar25 = CONCAT31(uVar23,bVar8 + 0x2a);
    unaff_ESI = unaff_ESI + 5;
    cVar9 = (char)((uint)filename >> 8) + *(char *)((int)filename + -0x7b);
    uVar63 = CONCAT44(CONCAT22((short)((uint)filename >> 0x10),CONCAT11(cVar9,cVar11)),iVar25);
    in_ES = *(undefined2 *)puStack_8;
    pcVar20 = (char *)(iVar25 + 0x6f);
    *pcVar20 = *pcVar20 + cVar9;
    pbVar57 = (byte *)((uint)uVar24 << 8);
    do {
      piVar17 = (int *)((ulonglong)uVar63 >> 0x20);
      pcVar20 = (char *)uVar63;
      *(char *)piVar17 = (char)*piVar17;
      if ((char)*piVar17 == '\0') {
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        unaff_retaddr = in_ES;
_ctor:
        filename = (int *)((ulonglong)uVar63 >> 0x20);
        pbVar57 = (byte *)((uint)CONCAT21((short)((uint)pbVar57 >> 0x10),
                                          (char)((uint)pbVar57 >> 8) + *(char *)uVar63) << 8);
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        *(char *)filename = (char)*filename;
        uVar23 = (undefined3)((ulonglong)uVar63 >> 8);
        bVar10 = (char)uVar63 - *(char *)uVar63;
        pbVar15 = (byte *)CONCAT31(uVar23,bVar10);
        bVar8 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar10;
        pbVar56 = unaff_ESI + (uint)CARRY1(bVar8,bVar10) + *(int *)pbVar15;
        pbVar15 = (byte *)CONCAT31(uVar23,bVar10);
        puStack_8 = puVar35;
        goto code_r0x00403750;
      }
      *pcVar20 = *pcVar20 + (char)uVar63;
      *piVar17 = (int)(unaff_EBP + *piVar17);
      unaff_ESI = unaff_ESI + 1;
      uVar63 = CONCAT44(CONCAT22((short)((ulonglong)uVar63 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar63 >> 0x28) +
                                          *(char *)((int)piVar17 + -0x33),
                                          (char)((ulonglong)uVar63 >> 0x20))),pcVar20);
      in_ES = *(undefined2 *)puVar35;
      puVar35 = (undefined4 *)((int)puVar35 + 4);
      pbVar15 = pbVar57;
code_r0x0040371e:
      puVar22 = (uint *)((ulonglong)uVar63 >> 0x20);
      pbVar56 = (byte *)uVar63;
      bVar10 = (byte)((ulonglong)uVar63 >> 0x28);
      pbVar56[0x6f] = pbVar56[0x6f] + bVar10;
      pbVar57 = (byte *)((uint)pbVar15 & 0xffffff00);
      *(char *)puVar22 = (char)*puVar22;
      bVar8 = (byte)uVar63;
      if ((char)*puVar22 != '\0') {
        *pbVar56 = *pbVar56 + bVar8;
        uVar2 = *puVar22;
        *puVar22 = (uint)(unaff_EBP + *puVar22);
        piVar37 = (int *)((int)puVar35 + -4);
        *(byte **)((int)puVar35 + -4) = unaff_ESI;
        if (CARRY4(uVar2,(uint)unaff_EBP)) {
          *pbVar56 = *pbVar56 + bVar8;
          *(undefined2 *)((int)puVar35 + -8) = in_ES;
          puVar1 = puVar22 + 0x1d028000;
          uVar2 = *puVar1;
          *(byte *)puVar1 = (byte)*puVar1 - bVar10;
          *(uint *)pbVar56 = (*(int *)pbVar56 - (int)pbVar56) - (uint)((byte)uVar2 < bVar10);
          *(byte *)puVar22 = (char)*puVar22 + bVar8;
          *unaff_EBP = *unaff_EBP;
          uVar63 = CONCAT44(puVar22,CONCAT31((int3)((ulonglong)uVar63 >> 8),bVar8 + 0x2a));
          puVar36 = (undefined2 *)((int)puVar35 + -0xc);
          puVar35 = (undefined4 *)((int)puVar35 + -0xc);
          *puVar36 = in_DS;
          unaff_retaddr = in_ES;
          goto _ctor;
        }
        bVar61 = false;
        pcVar20 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),*pbVar56);
        goto code_r0x004037a7;
      }
      bVar10 = *pbVar56;
      *pbVar56 = *pbVar56 + bVar8;
      *(uint *)pbVar56 = (*(int *)pbVar56 - (int)pbVar56) - (uint)CARRY1(bVar10,bVar8);
      bVar8 = *pbVar57;
      bVar10 = (byte)((ulonglong)uVar63 >> 0x20);
      *pbVar57 = *pbVar57 + bVar10;
    } while (!CARRY1(bVar8,bVar10));
  }
  pbVar15 = (byte *)uVar63;
  *pbVar15 = *pbVar15 + (char)uVar63;
  bVar61 = CARRY1((byte)((uint)pbVar57 >> 8),*pbVar15);
  *(undefined2 *)((int)puVar35 + -4) = in_SS;
  iVar25 = CONCAT31(0x1f0a00,bVar61 + 'o') + *(int *)(unaff_EBX + (int)unaff_EBP) +
           (uint)(0x90 < bVar61) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar63 >> 0x20);
  pcVar16 = (char *)(CONCAT31((int3)((uint)iVar25 >> 8),(char)iVar25 + -0x66) | *puVar58);
  bVar8 = *(byte *)((int)puVar58 + -0x46);
  pcVar20 = (char *)CONCAT22(0xd0a,(ushort)bVar8 << 8);
  *pcVar16 = *pcVar16 + (char)pcVar16;
  bVar31 = (byte)((ulonglong)uVar63 >> 0x20);
  puVar27 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar63 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar63 >> 0x28) | unaff_EBX[(int)unaff_EBP],bVar31))
  ;
  *pcVar20 = *pcVar20 + (char)pcVar16;
  *unaff_EBP = *unaff_EBP - bVar8;
  *puVar27 = *puVar27;
  pbVar15 = (byte *)(((uint)pcVar16 | 8) + 0x4490f9d8);
  bVar10 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  bVar8 = *unaff_ESI;
  *(uint *)(unaff_ESI + (int)pbVar15) = *(uint *)(unaff_ESI + (int)pbVar15) ^ (uint)pcVar20;
  *pbVar15 = *pbVar15 | bVar10;
  piVar37 = (int *)&uRam2609fffc;
  bVar61 = false;
  uRam2609fffc = in_ES;
  *pbVar15 = *pbVar15 | bVar10;
  uVar63 = CONCAT44(CONCAT31((int3)((uint)puVar27 >> 8),bVar31 | bVar8),pbVar15);
code_r0x004037a7:
  while( true ) {
    pbVar15 = (byte *)((ulonglong)uVar63 >> 0x20);
    uVar59 = (undefined2)((ulonglong)uVar63 >> 0x20);
    out(*(undefined4 *)unaff_ESI,uVar59);
    out(*(undefined4 *)(unaff_ESI + 4),uVar59);
    puVar22 = (uint *)((int)puVar58 + (int)pbVar15);
    uVar2 = *puVar22;
    uVar3 = (uint)uVar63 + *puVar22;
    *puVar22 = uVar3 + bVar61;
    iVar25 = *piVar37 + *(int *)(pcVar20 + (int)pbVar15) +
             (uint)(CARRY4(uVar2,(uint)uVar63) || CARRY4(uVar3,(uint)bVar61));
    cVar11 = (char)iVar25 + '\t';
    pbVar56 = (byte *)CONCAT31((int3)((uint)iVar25 >> 8),cVar11);
    out(uRam260a0000,uVar59);
    uVar59 = (undefined2)piVar37[1];
    *pbVar56 = *pbVar56 + cVar11;
    bVar10 = (byte)((uint)pcVar20 >> 8) | *pbVar15;
    *(undefined2 *)(piVar37 + 1) = in_DS;
    bVar8 = *pbVar56;
    pbVar56 = pbVar56 + (uint)CARRY1(bVar10,*pbVar56) + *(int *)pbVar56;
    *pbVar15 = *pbVar15 + 6;
    cVar9 = (char)unaff_EBX - cRam260a0004;
    pcVar20 = (char *)CONCAT22((short)((uint)pcVar20 >> 0x10),CONCAT11(bVar10 + bVar8 + *pbVar56,6))
    ;
    *pbVar56 = *pbVar56;
    *(undefined2 *)piVar37 = in_ES;
    uVar23 = (undefined3)((uint)pbVar56 >> 8);
    cVar11 = (char)pbVar56 - *pbVar56;
    piVar17 = (int *)CONCAT31(uVar23,cVar11);
    unaff_ESI = (byte *)(&cRam260a0004 + *piVar17);
    bVar8 = cVar11 + (char)*piVar17;
    pcVar16 = (char *)CONCAT31(uVar23,bVar8);
    piVar38 = piVar37 + -1;
    piVar37[-1] = (int)pcVar20;
    *pcVar16 = *pcVar16 + bVar8;
    *pcVar16 = *pcVar16 + bVar8;
    *pcVar16 = *pcVar16 + bVar8;
    bVar61 = CARRY1(*pbVar15,bVar8);
    *pbVar15 = *pbVar15 + bVar8;
    if (bVar61) break;
    in_ES = (undefined2)piVar37[-1];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar9);
    uVar63 = CONCAT44(pbVar15,pcVar16);
  }
  *pcVar16 = *pcVar16 + bVar8;
  pbVar30 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam080a0056,cVar9));
  *pcVar16 = *pcVar16 + bVar8;
  bVar31 = bVar8 + 2;
  *pbVar30 = *pbVar30 - (char)((ulonglong)uVar63 >> 0x20);
  *(char *)CONCAT31(uVar23,bVar31) = *(char *)CONCAT31(uVar23,bVar31) + bVar31;
  uVar26 = (undefined3)((uint)pcVar20 >> 8);
  pbVar56 = (byte *)(CONCAT31(uVar26,*unaff_ESI) | 6);
  bVar10 = 9 < (bVar8 + 0x74 & 0xf) | in_AF;
  bVar12 = bVar8 + 0x74 + bVar10 * '\x06';
  bVar12 = bVar12 + (0x90 < (bVar12 & 0xf0) | 0x8d < bVar31 | bVar10 * (0xf9 < bVar12)) * '`';
  pbVar57 = (byte *)CONCAT31(uVar23,bVar12);
  bVar8 = *pbVar57;
  *pbVar57 = *pbVar57 + bVar12;
  if (!SCARRY1(bVar8,bVar12)) {
    *unaff_ESI = *unaff_ESI + bVar12;
    unaff_ESI = unaff_ESI + *(int *)(pbVar15 + 0x33);
    *pbVar57 = *pbVar57 | bVar12;
    *unaff_ESI = *unaff_ESI + bVar12;
    bVar8 = bVar12 + 0x72;
    piVar37[-2] = (int)pbVar30;
    *(byte *)CONCAT31(uVar23,bVar8) = *(byte *)CONCAT31(uVar23,bVar8) | bVar8;
    *unaff_ESI = *unaff_ESI + bVar8;
    pbVar56 = (byte *)CONCAT31(uVar26,(char)pbVar56 + *unaff_ESI);
    pcVar20 = (char *)CONCAT31(uVar23,bVar12 - 0x11);
    piVar38 = piVar37 + -3;
    piVar37[-3] = (int)pbVar56;
    *pcVar20 = *pcVar20 + (bVar12 - 0x11);
    pbVar57 = (byte *)CONCAT31(uVar23,bVar12 - 0xf);
    puVar58 = (uint *)((int)puVar58 + iRam080a0052);
    *pbVar57 = *pbVar57 + (bVar12 - 0xf);
  }
code_r0x00403825:
  pbVar55 = (byte *)0x80a0000;
  uVar23 = (undefined3)((uint)pbVar57 >> 8);
  cVar11 = (char)pbVar57 + '\x7f';
  pcVar20 = (char *)CONCAT31(uVar23,cVar11);
  *(byte **)((int)piVar38 + -4) = pbVar30;
  *pcVar20 = *pcVar20 + cVar11;
  iVar25 = CONCAT31(uVar23,(char)pbVar57 + -0x7f) + 0x547d;
  cVar9 = (char)iVar25;
  uVar23 = (undefined3)((uint)iVar25 >> 8);
  cVar11 = cVar9 + '*';
  pcVar20 = (char *)CONCAT31(uVar23,cVar11);
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(byte)pbVar15 | *unaff_ESI);
  cVar28 = (char)pbVar30 - *unaff_ESI;
  uVar60 = (undefined2)((uint)pbVar30 >> 0x10);
  cVar32 = (char)((uint)pbVar30 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar30 >> 8),cVar28) + 0x57);
  *pcVar20 = *pcVar20 + cVar11;
  bVar8 = cVar9 + 0x54U & *pbVar15;
  iVar25 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar23,bVar8) = *(char *)CONCAT31(uVar23,bVar8) + bVar8;
  pcVar20 = (char *)CONCAT31(uVar23,bVar8 + 0x2a);
  *(undefined2 *)((int)piVar38 + -8) = in_DS;
  cVar32 = cVar32 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar32,cVar28)) + 0x58);
  *pcVar20 = *pcVar20 + bVar8 + 0x2a;
  bVar31 = bVar8 + 0x54 & *pbVar15;
  iVar6 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar23,bVar31) = *(char *)CONCAT31(uVar23,bVar31) + bVar31;
  pcVar20 = (char *)CONCAT31(uVar23,bVar31 + 0x2a);
  pbVar57 = *(byte **)((int)piVar38 + -8);
  cVar32 = cVar32 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar32,cVar28)) + 0x55);
  *pcVar20 = *pcVar20 + bVar31 + 0x2a;
  pcVar20 = (char *)CONCAT31(uVar23,bVar31 + 0x57);
  pbVar15 = pbVar15 + *(int *)pbVar57;
  *(undefined4 *)((int)piVar38 + -8) = 0x2a;
  cVar32 = cVar32 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar32,cVar28)) + 0x55);
  *pcVar20 = *pcVar20 + bVar31 + 0x57;
  cVar11 = bVar31 - 0x3a;
  pcVar20 = (char *)CONCAT31(uVar23,cVar11);
  *(undefined2 *)((int)piVar38 + -0xc) = uVar59;
  *pcVar20 = *pcVar20 + cVar11;
  bVar8 = *pbVar15;
  cVar9 = (char)pbVar56;
  *(undefined2 *)((int)piVar38 + -0x10) = in_DS;
  pbVar30 = (byte *)CONCAT22(uVar60,CONCAT11(cVar32 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar32,
                                                  cVar28)) + 0x59),cVar28));
  *pcVar20 = *pcVar20 + cVar11;
  bVar13 = bVar31 - 0x10 & *pbVar15;
  puVar58 = (uint *)((int)puVar58 +
                    CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar6 + iVar25);
  *(char *)CONCAT31(uVar23,bVar13) = *(char *)CONCAT31(uVar23,bVar13) + bVar13;
  bVar13 = bVar13 + 0x2a;
  pbVar19 = (byte *)CONCAT31(uVar23,bVar13);
  puVar35 = (undefined4 *)((int)piVar38 + -0x14);
  *(undefined2 *)((int)piVar38 + -0x14) = in_DS;
  bVar31 = *(byte *)((int)puVar58 + 0x17);
  *pbVar19 = *pbVar19 + bVar13;
  bVar12 = *pbVar15;
  puVar40 = (undefined4 *)((int)piVar38 + -0x18);
  *(undefined2 *)((int)piVar38 + -0x18) = in_DS;
  bVar14 = *(byte *)((int)puVar58 + 0x1a);
  *pbVar19 = *pbVar19 + bVar13;
  pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar56 >> 8) | bVar8) + bVar31 | bVar12) +
                                      bVar14 | *pbVar15,cVar9));
  *pbVar30 = *pbVar30 + cVar28;
  *(byte *)((int)pbVar19 * 2) = *(byte *)((int)pbVar19 * 2) ^ bVar13;
  bVar8 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar13;
  bVar31 = *pbVar19;
  *pbVar56 = *pbVar56 + (char)pbVar15;
  bVar8 = ((bVar13 - bVar31) - CARRY1(bVar8,bVar13)) + *pbVar15;
  pbVar19 = (byte *)CONCAT31(uVar23,bVar8);
  if ((POPCOUNT(bVar8) & 1U) != 0) {
    pbVar15 = *(byte **)((int)piVar38 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar19 = *pbVar19 + bVar8;
  cVar11 = (bVar8 + 0x6f) - (0x90 < bVar8);
  pbVar18 = (byte *)CONCAT31(uVar23,cVar11);
  bVar8 = *pbVar15;
  *pbVar15 = *pbVar15 + cVar9;
  if (SCARRY1(bVar8,cVar9) == (char)*pbVar15 < '\0') {
    cRam33100000 = cRam33100000 - cVar11;
    cVar11 = cVar11 + *pbVar15;
    pbVar19 = (byte *)CONCAT31(uVar23,cVar11);
    puVar35 = (undefined4 *)((int)piVar38 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar18 = *pbVar18 + (char)pbVar18;
    while( true ) {
      uVar23 = (undefined3)((uint)pbVar18 >> 8);
      cVar11 = (char)pbVar18 + '\x02';
      pbVar19 = (byte *)CONCAT31(uVar23,cVar11);
      puVar35 = puVar40;
      if ((POPCOUNT(cVar11) & 1U) == 0) break;
code_r0x00403908:
      puVar58 = (uint *)((int)puVar58 - *(int *)pbVar57);
      cVar11 = (char)pbVar19 + *pbVar15;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar11);
code_r0x0040390c:
      cVar9 = (char)pbVar19;
      if ((POPCOUNT(cVar11) & 1U) != 0) {
        *pbVar57 = *pbVar57 + cVar9;
        goto code_r0x00403962;
      }
      *pbVar19 = *pbVar19 + cVar9;
      bVar8 = cVar9 + 2;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar8);
code_r0x00403912:
      bVar61 = (POPCOUNT(bVar8) & 1U) == 0;
      puVar47 = puVar35;
      if (!bVar61) goto code_r0x00403967;
      *pbVar19 = *pbVar19 + (char)pbVar19;
code_r0x00403916:
      bVar14 = (char)pbVar19 + 0x6f;
      pbVar18 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar19 >> 8),bVar14);
      bVar8 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar14;
      bVar12 = *pbVar18;
      bVar31 = *pbVar18;
      puVar47 = (undefined4 *)((int)puVar35 + -4);
      *(undefined2 *)((int)puVar35 + -4) = in_ES;
      if (bVar31 == 0 || SCARRY1(bVar8,bVar14) != (char)bVar12 < '\0') goto code_r0x00403979;
      *pbVar18 = *pbVar18 + bVar14;
      pbVar18 = (byte *)CONCAT31((int3)(char)((uint)pbVar19 >> 8),(char)pbVar19 + -100);
      *(byte **)(pbVar57 + (int)puVar58 * 8) =
           pbVar15 + (uint)(0xd2 < bVar14) + *(int *)(pbVar57 + (int)puVar58 * 8);
      puVar41 = (undefined2 *)((int)puVar35 + -8);
      puVar35 = (undefined4 *)((int)puVar35 + -8);
      *puVar41 = in_ES;
code_r0x00403926:
      puVar40 = puVar35 + 1;
      puVar47 = puVar35 + 1;
      puVar42 = puVar35 + 1;
      *(undefined4 *)pbVar18 = *puVar35;
      bVar8 = *pbVar57;
      bVar31 = (byte)pbVar18;
      *pbVar57 = *pbVar57 + bVar31;
      if (CARRY1(bVar8,bVar31)) {
        *pbVar18 = *pbVar18 + bVar31;
        uVar23 = (undefined3)((uint)pbVar18 >> 8);
        bVar31 = bVar31 | pbVar18[0x400005b];
        pbVar19 = (byte *)CONCAT31(uVar23,bVar31);
        pbVar18 = pbVar57;
        if ((char)bVar31 < '\x01') goto code_r0x00403991;
        *pbVar19 = *pbVar19 + bVar31;
        cVar11 = bVar31 + 0x28;
        pbVar19 = (byte *)CONCAT31(uVar23,cVar11);
        *(byte **)pbVar19 = pbVar19 + (uint)(0xd7 < bVar31) + *(int *)pbVar19;
        bVar8 = *pbVar30;
        bVar31 = (byte)((uint)pbVar56 >> 8);
        *pbVar30 = *pbVar30 + bVar31;
        if (CARRY1(bVar8,bVar31)) {
          *pbVar19 = *pbVar19 + cVar11;
          pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                     CONCAT11(bVar31 | *pbVar19,(char)pbVar56));
          *pbVar57 = *pbVar57 + cVar11;
          pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                     CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x55],
                                              (char)pbVar30));
          *pbVar19 = *pbVar19 + cVar11;
code_r0x00403950:
          uVar23 = (undefined3)((uint)pbVar19 >> 8);
          bVar31 = (char)pbVar19 + 0x6f;
          bVar8 = *(byte *)CONCAT31(uVar23,bVar31);
          *pbVar15 = *pbVar15 + (char)pbVar56;
          pbVar19 = (byte *)CONCAT31(uVar23,(bVar31 & bVar8) + *pbVar57);
          *pbVar56 = *pbVar56 - (char)((uint)pbVar15 >> 8);
          puVar47 = puVar42;
        }
        else {
          *(undefined2 *)puVar35 = in_ES;
code_r0x00403962:
          puVar47 = (undefined4 *)((int)puVar35 + -4);
          *(undefined2 *)((int)puVar35 + -4) = uVar59;
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar19 = *pbVar19 + cVar11;
    puVar35 = (undefined4 *)((int)puVar40 + -4);
    piVar38 = (int *)((int)puVar40 + -4);
    *(byte **)((int)puVar40 + -4) = pbVar56;
    cVar11 = (char)pbVar18 + '.' + *pbVar15;
    pbVar19 = (byte *)CONCAT31(uVar23,cVar11);
    if ((POPCOUNT(cVar11) & 1U) != 0) {
      pbVar18 = pbVar15 + (int)pbVar19;
      *pbVar18 = *pbVar18 + cVar11;
      bVar8 = *pbVar18;
      goto code_r0x00403912;
    }
    *pbVar19 = *pbVar19 + cVar11;
    bVar8 = cVar11 + 2;
    pbVar19 = (byte *)CONCAT31(uVar23,bVar8);
    puVar35 = (undefined4 *)((int)puVar40 + -4);
    if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403916;
    *pbVar19 = *pbVar19 + bVar8;
    cVar9 = cVar11 + 'q';
    piVar17 = (int *)CONCAT31(uVar23,cVar9);
    *piVar17 = (*piVar17 - (int)piVar17) - (uint)(0x90 < bVar8);
    bVar8 = *pbVar30;
    bVar31 = (byte)((uint)pbVar56 >> 8);
    *pbVar30 = *pbVar30 + bVar31;
    if (!CARRY1(bVar8,bVar31)) {
      out(*(undefined4 *)pbVar57,(short)pbVar15);
      bVar8 = (cVar9 - (char)*piVar17) - CARRY1(bVar8,bVar31);
      *pbVar15 = *pbVar15 + (char)pbVar56;
      cVar11 = bVar8 - *(byte *)CONCAT31(uVar23,bVar8);
      unaff_ESI = pbVar57 + ((4 - *(int *)CONCAT31(uVar23,cVar11)) -
                            (uint)(bVar8 < *(byte *)CONCAT31(uVar23,bVar8)));
      pbVar57 = (byte *)CONCAT31(uVar23,cVar11);
      goto code_r0x00403825;
    }
    *(char *)piVar17 = (char)*piVar17 + cVar9;
    uVar60 = (undefined2)((uint)pbVar30 >> 0x10);
    bVar8 = (byte)((uint)pbVar30 >> 8) | bRam080a0056;
    *(char *)piVar17 = (char)*piVar17 + cVar9;
    pcVar20 = (char *)CONCAT31(uVar23,cVar11 + 's');
    pbVar30 = (byte *)CONCAT22(uVar60,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar60,CONCAT11(bVar8,(
                                                  char)pbVar30)) + 0x56),(char)pbVar30));
    *pcVar20 = *pcVar20 + cVar11 + 's';
    bVar8 = cVar11 - 0xf;
    pbVar15 = *(byte **)((int)puVar40 + -4);
    *(char *)CONCAT31(uVar23,bVar8) = *(char *)CONCAT31(uVar23,bVar8) + bVar8;
    bVar31 = cVar11 + 0x1e;
    pbVar18 = (byte *)CONCAT31(uVar23,bVar31);
    *(byte **)(pbVar57 + (int)puVar58 * 8) =
         pbVar15 + (uint)(0xd2 < bVar8) + *(int *)(pbVar57 + (int)puVar58 * 8);
    puVar35 = (undefined4 *)((int)puVar40 + -4);
    puVar42 = (undefined4 *)((int)puVar40 + -4);
    *(undefined2 *)((int)puVar40 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar18;
    bVar8 = *pbVar57;
    *pbVar57 = *pbVar57 + bVar31;
    if (CARRY1(bVar8,bVar31)) {
      *pbVar18 = *pbVar18 + bVar31;
      pbVar19 = (byte *)CONCAT31(uVar23,bVar31 | pbVar18[0x400005a]);
      if ('\0' < (char)(bVar31 | pbVar18[0x400005a])) {
code_r0x004038f6:
        bVar8 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar8;
        uVar23 = (undefined3)((uint)pbVar19 >> 8);
        cVar11 = ((bVar8 + 0x28) - *(char *)CONCAT31(uVar23,bVar8 + 0x28)) - (0xd7 < bVar8);
        pbVar19 = (byte *)CONCAT31(uVar23,cVar11);
        bVar8 = *pbVar30;
        bVar31 = (byte)((uint)pbVar56 >> 8);
        *pbVar30 = *pbVar30 + bVar31;
        if (CARRY1(bVar8,bVar31)) {
          *pbVar19 = *pbVar19 + cVar11;
          pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                     CONCAT11(bVar31 | *pbVar19,(char)pbVar56));
          *pbVar57 = *pbVar57 + cVar11;
          goto code_r0x00403908;
        }
        pbVar18 = pbVar19 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
    puVar39 = (undefined4 *)((int)puVar40 + -8);
    puVar40 = (undefined4 *)((int)puVar40 + -8);
    *puVar39 = 0x80a0000;
  } while( true );
code_r0x0040395a:
  *pbVar19 = *pbVar19 + (char)pbVar19;
  puVar43 = (undefined2 *)((int)puVar47 + -4);
  puVar47 = (undefined4 *)((int)puVar47 + -4);
  *puVar43 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar56;
  pbVar30 = (byte *)((uint)pbVar30 | (uint)pbVar57);
  cVar11 = (char)pbVar19 + '\x02';
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar11);
  bVar61 = (POPCOUNT(cVar11) & 1U) == 0;
code_r0x00403967:
  if (!bVar61) goto code_r0x004039be;
  *pbVar19 = *pbVar19 + (char)pbVar19;
  uVar23 = (undefined3)((uint)pbVar19 >> 8);
  bVar8 = (char)pbVar19 + 0x6f;
  bVar8 = bVar8 & *(byte *)CONCAT31(uVar23,bVar8);
  pbVar18 = (byte *)CONCAT31(uVar23,bVar8);
  *pbVar15 = *pbVar15 + (char)pbVar56;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*puVar58);
  *(byte *)(puVar58 + 0x5c18000) = (byte)puVar58[0x5c18000] - bVar8;
code_r0x00403979:
  do {
    bVar8 = (char)pbVar18 - (byte)*puVar58;
    bVar61 = bVar8 < *pbVar56;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar8 - *pbVar56);
    do {
      cVar11 = (char)pbVar19;
      *pbVar19 = *pbVar19 + cVar11 + bVar61;
      *pbVar19 = *pbVar19 + cVar11;
      *pbVar56 = *pbVar56 + (char)pbVar15;
      pbVar56[0x101c00aa] = pbVar56[0x101c00aa] + (char)pbVar30;
      *pbVar19 = *pbVar19 + cVar11;
      *(byte **)pbVar57 = pbVar30 + *(int *)pbVar57;
      bVar8 = (byte)((uint)pbVar56 >> 8);
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11(bVar8 + *pbVar19,(char)pbVar56));
      pbVar19 = pbVar19 + (uint)CARRY1(bVar8,*pbVar19) + *(int *)pbVar19;
      pbVar18 = pbVar57;
code_r0x00403991:
      cVar11 = (char)pbVar56;
      *pbVar15 = *pbVar15 + cVar11;
      cVar9 = (char)pbVar30 - pbVar18[2];
      pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar9);
      pbVar57 = pbVar18;
      if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040395a;
      *pbVar19 = *pbVar19 + (byte)pbVar19;
      uVar24 = (uint3)((uint)pbVar19 >> 8);
      bVar8 = (byte)pbVar19 | *pbVar30;
      piVar17 = (int *)CONCAT31(uVar24,bVar8);
      bVar31 = (byte)((uint)pbVar56 >> 8);
      bVar12 = (byte)pbVar15;
      if (bVar8 == 0) {
        *(char *)piVar17 = (char)*piVar17;
        puVar47 = (undefined4 *)((int)puVar47 + -*(int *)(pbVar55 + 0x1b000007));
        pbVar57 = pbVar18 + 4;
        out(*(undefined4 *)pbVar18,(short)pbVar15);
        pbVar19 = (byte *)((uint)uVar24 << 8);
        *pbVar15 = *pbVar15 + cVar11;
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar12 - *pbVar30);
        *pbVar30 = *pbVar30;
        *pbVar15 = *pbVar15 + bVar31;
        *pbVar19 = *pbVar19;
        *pbVar30 = *pbVar30 + cVar9;
        *pbVar19 = *pbVar19;
        *(byte **)(pbVar30 + -0x3d) = pbVar57 + *(int *)(pbVar30 + -0x3d);
        break;
      }
      pbVar55 = pbVar55 + -puVar58[9];
      *(byte *)piVar17 = (char)*piVar17 + bVar8;
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),CONCAT11(bVar31 | *pbVar15,cVar11));
      pbVar57 = pbVar18 + *piVar17;
      pcVar20 = (char *)((int)piVar17 + *piVar17);
      bVar31 = (char)pcVar20 - *pcVar20;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),bVar31);
      bVar8 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar31;
      pbVar19 = pbVar19 + (-(uint)CARRY1(bVar8,bVar31) - *(int *)pbVar19);
      bVar61 = CARRY1(*pbVar56,bVar12);
      *pbVar56 = *pbVar56 + bVar12;
    } while (!bVar61);
    *pbVar19 = *pbVar19 + (char)pbVar19;
    pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar56 >> 8),(byte)pbVar56 | *pbVar15);
code_r0x004039be:
    puVar35 = (undefined4 *)((int)puVar47 + -4);
    puVar44 = (undefined1 *)((int)puVar47 + -4);
    *(undefined2 *)((int)puVar47 + -4) = in_ES;
    puVar58 = (uint *)((int)puVar58 + *(int *)(pbVar55 + -0x3c));
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    bVar8 = (byte)pbVar19 | *pbVar15;
    pcVar20 = (char *)CONCAT31(uVar23,bVar8);
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      cVar11 = *pcVar20;
      *pcVar20 = *pcVar20 + bVar8;
      cVar9 = *pcVar20;
      puVar27 = (undefined1 *)((int)puVar47 + -4);
      if (!SCARRY1(cVar11,bVar8)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar35 = (undefined4 *)puVar27;
      cVar11 = (char)pcVar20;
      *pcVar20 = *pcVar20 + cVar11;
      uVar23 = (undefined3)((uint)pcVar20 >> 8);
      bVar8 = cVar11 + 2;
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *(char *)CONCAT31(uVar23,bVar8) = *(char *)CONCAT31(uVar23,bVar8) + bVar8;
        piVar17 = (int *)CONCAT31(uVar23,cVar11 + '*');
        *piVar17 = (*piVar17 - (int)piVar17) - (uint)(0xd7 < bVar8);
        bVar8 = *pbVar15;
        bVar14 = (byte)pbVar56;
        *pbVar15 = *pbVar15 + bVar14;
        out(*(undefined4 *)pbVar57,(short)pbVar15);
        bVar12 = ((cVar11 + '*') - (char)*piVar17) - CARRY1(bVar8,bVar14);
        pbVar19 = (byte *)CONCAT31(uVar23,bVar12);
        *pbVar15 = *pbVar15 + bVar14;
        uVar60 = (undefined2)((uint)pbVar30 >> 0x10);
        uVar29 = SUB41(pbVar30,0);
        cVar11 = (char)((uint)pbVar30 >> 8) - pbVar57[0x1f];
        pbVar30 = (byte *)CONCAT22(uVar60,CONCAT11(cVar11,uVar29));
        *pbVar19 = *pbVar19 + bVar12;
        bVar31 = *pbVar15;
        bVar8 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar12;
        pbVar57 = pbVar57 + ((4 - *(int *)pbVar19) - (uint)CARRY1(bVar8,bVar12));
        pbVar19 = (byte *)CONCAT31(uVar23,bVar12);
        pbVar56 = (byte *)(CONCAT22((short)((uint)pbVar56 >> 0x10),
                                    CONCAT11((byte)((uint)pbVar56 >> 8) | bVar31,bVar14)) + -1);
        bVar8 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar12;
        bVar8 = (bVar12 - *pbVar19) - CARRY1(bVar8,bVar12);
        *pbVar56 = *pbVar56 + (char)pbVar15;
        bVar61 = CARRY1(bVar8,*pbVar15);
        bVar8 = bVar8 + *pbVar15;
        pbVar19 = (byte *)CONCAT31(uVar23,bVar8);
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          *pbVar19 = *pbVar19 + bVar8;
          cVar9 = (bVar8 + 0x6f) - (0x90 < bVar8);
          pbVar18 = (byte *)CONCAT31(uVar23,cVar9);
          bVar8 = *pbVar15;
          *pbVar15 = *pbVar15 + (char)pbVar56;
          if (SCARRY1(bVar8,(char)pbVar56) == (char)*pbVar15 < '\0') goto code_r0x00403aaf;
          *pbVar18 = *pbVar18 + cVar9;
          pcVar20 = (char *)CONCAT31(uVar23,cVar9 + '\x02');
          bVar31 = cVar11 + pbVar30[0x52];
          pbVar30 = (byte *)CONCAT22(uVar60,CONCAT11(bVar31,uVar29));
          *pcVar20 = *pcVar20 + cVar9 + '\x02';
          bVar8 = cVar9 + 4;
          pbVar18 = (byte *)CONCAT31(uVar23,bVar8);
          if ((POPCOUNT(bVar8) & 1U) == 0) {
            *pbVar18 = *pbVar18 + bVar8;
            cVar11 = (cVar9 + 's') - (0x90 < bVar8);
            pcVar20 = (char *)CONCAT31(uVar23,cVar11);
            bVar8 = (byte)((uint)pbVar56 >> 8);
            bVar61 = CARRY1(*pbVar30,bVar8);
            *pbVar30 = *pbVar30 + bVar8;
            pbVar19 = pbVar57;
            if (bVar61) {
              *pcVar20 = *pcVar20 + cVar11;
              pbVar30 = (byte *)CONCAT22(uVar60,CONCAT11(bVar31 | pbVar55[0x5c],uVar29));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          puVar58 = (uint *)((int)puVar58 - *(int *)pbVar18);
          pbVar30 = (byte *)CONCAT22(uVar60,CONCAT11(bVar31 + pbVar30[0x52],uVar29));
code_r0x00403abf:
          *pbVar18 = *pbVar18 + (char)pbVar18;
          cVar11 = (char)pbVar18 + '\x02';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar11);
          bVar61 = (POPCOUNT(cVar11) & 1U) == 0;
          if (!bVar61) goto code_r0x00403b18;
        }
        else {
code_r0x00403aa1:
          if (bVar61) {
            *pbVar19 = *pbVar19 + (byte)pbVar19;
            bVar8 = (byte)pbVar19 | pbVar19[0x400005e];
            pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar8);
            if ('\0' < (char)bVar8) {
              *pbVar18 = *pbVar18 + bVar8;
code_r0x00403aaf:
              cVar11 = (char)pbVar18 + '(';
              pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar11);
              *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
              bVar8 = *pbVar30;
              bVar31 = (byte)((uint)pbVar56 >> 8);
              *pbVar30 = *pbVar30 + bVar31;
              pbVar21 = pbVar55;
              if (!CARRY1(bVar8,bVar31)) goto code_r0x00403ad8;
              *pbVar18 = *pbVar18 + cVar11;
              pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                         CONCAT11(bVar31 | *pbVar30,(char)pbVar56));
              if ((POPCOUNT(*pbVar15 - cVar11) & 1U) != 0) {
                *pbVar57 = *pbVar57 + cVar11;
                goto code_r0x00403b13;
              }
              goto code_r0x00403abf;
            }
            break;
          }
          pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                     CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x53],
                                              (char)pbVar30));
        }
        bVar8 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar8;
        cVar11 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pcVar20 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar11);
        bVar8 = *pbVar30;
        cVar9 = (char)((uint)pbVar56 >> 8);
        *pbVar30 = *pbVar30 + cVar9;
        if (*pbVar30 == 0 || SCARRY1(bVar8,cVar9) != (char)*pbVar30 < '\0') goto code_r0x00403b2c;
        *pcVar20 = *pcVar20 + cVar11;
code_r0x00403ad1:
        *(byte **)(pbVar57 + (int)puVar58 * 8) =
             pbVar15 + (uint)(0xd2 < (byte)pcVar20) + *(int *)(pbVar57 + (int)puVar58 * 8);
        puVar46 = (undefined2 *)((int)puVar35 + -4);
        puVar35 = (undefined4 *)((int)puVar35 + -4);
        *puVar46 = in_ES;
        pbVar18 = pbVar55;
        pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),(byte)pcVar20 + 0x2d);
code_r0x00403ad8:
        pbVar55 = pbVar21;
        bVar8 = *pbVar18;
        bVar31 = (byte)pbVar18;
        *pbVar18 = *pbVar18 + bVar31;
        puVar47 = (undefined4 *)((int)puVar35 + -4);
        *(undefined2 *)((int)puVar35 + -4) = in_ES;
        puVar27 = (undefined1 *)((int)puVar35 + -4);
        if (CARRY1(bVar8,bVar31)) {
          *pbVar18 = *pbVar18 + bVar31;
          bVar31 = bVar31 | pbVar18[0x400005d];
          pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar31);
          pbVar19 = pbVar57;
          if ((char)bVar31 < '\x01') {
            *pbVar18 = *pbVar18 + bVar31;
            pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar56 >> 8) | *pbVar15,(char)pbVar56)
                                      );
            pbVar19 = *(byte **)((int)puVar35 + -4);
            pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                       CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[-0x39],
                                                (char)pbVar30));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar18 = *pbVar18 + (char)pbVar18;
          cVar11 = (char)pbVar18 + '(';
          pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar11);
          *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
          bVar8 = *pbVar30;
          bVar31 = (byte)((uint)pbVar56 >> 8);
          *pbVar30 = *pbVar30 + bVar31;
          pbVar57 = pbVar19;
          if (!CARRY1(bVar8,bVar31)) {
            puVar35 = (undefined4 *)((int)puVar47 + -4);
            *(undefined2 *)((int)puVar47 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar18 = *pbVar18 + cVar11;
          goto code_r0x00403af3;
        }
      }
      else {
        pcVar20 = (char *)CONCAT31(uVar23,bVar8 + *pbVar15);
        pbVar19 = pbVar57;
        if ((POPCOUNT(bVar8 + *pbVar15) & 1U) != 0) goto code_r0x00403ad1;
code_r0x00403a7d:
        cVar11 = (char)pcVar20;
        *pcVar20 = *pcVar20 + cVar11;
        uVar23 = (undefined3)((uint)pcVar20 >> 8);
        cVar9 = cVar11 + '-';
        pbVar21 = (byte *)CONCAT31(uVar23,cVar9);
        pbVar18 = pbVar55;
        pbVar57 = pbVar19;
        if ((POPCOUNT(cVar9 - *pbVar15) & 1U) != 0) goto code_r0x00403ad8;
        *pbVar21 = *pbVar21 + cVar9;
        bVar8 = cVar11 + 0x2f;
        if ((POPCOUNT(bVar8) & 1U) != 0) {
          bVar8 = *pbVar15;
          *pbVar15 = *pbVar15 + (byte)pbVar56;
          *pbVar55 = *pbVar55 - CARRY1(bVar8,(byte)pbVar56);
          pbVar18 = (byte *)CONCAT31(uVar23,cVar11 + -0x53);
          pbVar55 = (byte *)*puVar35;
          puVar47 = puVar35 + 1;
          goto code_r0x00403ae7;
        }
        *(char *)CONCAT31(uVar23,bVar8) = *(char *)CONCAT31(uVar23,bVar8) + bVar8;
        bVar61 = 0x90 < bVar8;
        pcVar20 = (char *)CONCAT31(uVar23,cVar11 + -0x62);
code_r0x00403a8f:
        uVar23 = (undefined3)((uint)pcVar20 >> 8);
        bVar31 = (char)pcVar20 - bVar61;
        pbVar18 = (byte *)CONCAT31(uVar23,bVar31);
        bVar8 = *pbVar30;
        cVar11 = (char)((uint)pbVar56 >> 8);
        *pbVar30 = *pbVar30 + cVar11;
        puVar47 = puVar35;
        pbVar57 = pbVar19;
        if (*pbVar30 != 0 && SCARRY1(bVar8,cVar11) == (char)*pbVar30 < '\0') {
          *pbVar18 = *pbVar18 + bVar31;
          pbVar57 = (byte *)CONCAT31(uVar23,bVar31 + 0x2d);
          *(byte **)(pbVar19 + (int)puVar58 * 8) =
               pbVar15 + (uint)(0xd2 < bVar31) + *(int *)(pbVar19 + (int)puVar58 * 8);
          *(undefined2 *)((int)puVar35 + -4) = in_ES;
          bVar61 = CARRY1(*pbVar19,(byte)pbVar19);
          *pbVar19 = *pbVar19 + (byte)pbVar19;
          puVar45 = (undefined2 *)((int)puVar35 + -8);
          puVar35 = (undefined4 *)((int)puVar35 + -8);
          *puVar45 = in_ES;
          goto code_r0x00403aa1;
        }
code_r0x00403af3:
        pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar56 >> 8) | *pbVar18,(char)pbVar56));
        *pbVar57 = *pbVar57 + (char)pbVar18;
        puVar27 = (undefined1 *)puVar47;
      }
      puVar35 = (undefined4 *)puVar27;
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x55],(char)pbVar30))
      ;
      *pbVar18 = *pbVar18 + (char)pbVar18;
      uVar23 = (undefined3)((uint)pbVar18 >> 8);
      bVar31 = (char)pbVar18 + 0x6f;
      bVar8 = *(byte *)CONCAT31(uVar23,bVar31);
      *pbVar15 = *pbVar15 + (char)pbVar56;
      pbVar18 = (byte *)CONCAT31(uVar23,(bVar31 & bVar8) + *pbVar57);
      *pbVar56 = *pbVar56 - (char)((uint)pbVar15 >> 8);
      break;
    }
    *pcVar20 = *pcVar20 + bVar8;
    *pbVar57 = *pbVar57 + 1;
    uVar5 = *(undefined6 *)CONCAT31(uVar23,bVar8 + 6);
    pbVar18 = (byte *)uVar5;
    bVar8 = *pbVar15;
    bVar31 = (byte)pbVar56;
    *pbVar15 = *pbVar15 + bVar31;
    if (CARRY1(bVar8,bVar31)) {
      *pbVar18 = *pbVar18 + (char)uVar5;
      bVar12 = (byte)((uint)pbVar56 >> 8) | *pbVar18;
      uVar60 = CONCAT11(bVar12,bVar31);
      pbVar18 = pbVar18 + -*(int *)pbVar18;
      bVar8 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar12;
      if (CARRY1(bVar8,bVar12)) {
        cVar9 = (char)pbVar18;
        *pbVar18 = *pbVar18 + cVar9;
        bVar8 = *pbVar15;
        pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                   CONCAT11((char)((uint)pbVar15 >> 8) - pbVar30[-0x3a],
                                            (char)pbVar15));
        *pbVar18 = *pbVar18 + cVar9;
        uVar34 = (undefined2)((uint)pbVar30 >> 0x10);
        bVar33 = (byte)((uint)pbVar30 >> 8) | pbVar15[0x32];
        pcVar20 = (char *)CONCAT22(uVar34,CONCAT11(bVar33,(char)pbVar30));
        cVar11 = *pcVar20;
        puVar44 = (undefined1 *)((int)puVar47 + -8);
        *(undefined2 *)((int)puVar47 + -8) = in_CS;
        cVar11 = cVar9 + cVar11 + '-';
        pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar11);
        *pbVar18 = *pbVar18;
        *(undefined2 *)((int)puVar47 + -0xc) = in_ES;
        bVar14 = *pbVar15;
        uVar59 = *(undefined2 *)((int)puVar47 + -0xc);
        cVar9 = (char)pbVar30 - *pbVar57;
        bVar13 = *(byte *)((int)puVar58 + 0x17);
        *pbVar18 = *pbVar18 + cVar11;
        uVar60 = CONCAT11((bVar12 | bVar8) + bVar13 | *pbVar15,bVar31 - bVar14);
        pbVar30 = (byte *)CONCAT22(uVar34,CONCAT11(bVar33 + *(char *)(CONCAT31((int3)((uint)pcVar20
                                                                                     >> 8),cVar9) +
                                                                     0x4e),cVar9));
        *pbVar18 = *pbVar18 + cVar11;
      }
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),uVar60);
      bVar8 = (byte)pbVar18;
      uVar23 = (undefined3)((uint)pbVar18 >> 8);
      pcVar20 = (char *)CONCAT31(uVar23,bVar8 + 0x28);
      *pcVar20 = (*pcVar20 - (bVar8 + 0x28)) - (0xd7 < bVar8);
      *pbVar15 = *pbVar15 + (char)uVar60;
      bVar31 = bVar8 + 0x1b;
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x4f],(char)pbVar30))
      ;
      *(char *)CONCAT31(uVar23,bVar31) = *(char *)CONCAT31(uVar23,bVar31) + bVar31;
      pcVar16 = (char *)CONCAT31(uVar23,bVar8 + 0x43);
      *pcVar16 = (*pcVar16 - (bVar8 + 0x43)) - (0xd7 < bVar31);
      *pbVar15 = *pbVar15 + (char)uVar60;
      pcVar20 = pcVar16 + -0x6b721c;
      pcVar16 = pcVar16 + -0x6b721a;
      *pcVar16 = *pcVar16 + (char)((uint)pbVar15 >> 8);
      cVar9 = *pcVar16;
      puVar35 = (undefined4 *)puVar44;
code_r0x00403a22:
      puVar27 = (undefined1 *)puVar35;
      if ((POPCOUNT(cVar9) & 1U) == 0) goto code_r0x00403a24;
      bVar8 = *pbVar15;
      *pbVar15 = *pbVar15 + (char)pbVar56;
      if (SCARRY1(bVar8,(char)pbVar56) != (char)*pbVar15 < '\0') {
code_r0x00403a76:
        *pcVar20 = *pcVar20 + (char)pcVar20;
        pcVar20 = (char *)CONCAT31((int3)((uint)pcVar20 >> 8),(char)pcVar20 + '\x02');
        pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                   CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x54],(char)pbVar30
                                           ));
        pbVar19 = pbVar57;
        goto code_r0x00403a7d;
      }
      pbVar18 = pbVar55;
      pbVar21 = (byte *)(pcVar20 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
    uVar59 = *(undefined2 *)((int)puVar47 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar18 = *pbVar18 + (char)pbVar18;
  puVar48 = (undefined2 *)((int)puVar35 + -4);
  puVar35 = (undefined4 *)((int)puVar35 + -4);
  *puVar48 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar56;
  pbVar30 = (byte *)((uint)pbVar30 | (uint)pbVar57);
  cVar11 = (char)pbVar18 + '\x02';
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar11);
  bVar61 = (POPCOUNT(cVar11) & 1U) == 0;
code_r0x00403b18:
  bVar8 = (byte)pbVar19;
  uVar23 = (undefined3)((uint)pbVar19 >> 8);
  if (!bVar61) {
    *pbVar15 = *pbVar15 + (char)pbVar56;
    pbVar18 = (byte *)CONCAT31(uVar23,bVar8 | *pbVar57);
code_r0x00403b73:
    pbVar19 = (byte *)((int)puVar58 + *(int *)(pbVar55 + -0x37));
    *pbVar18 = *pbVar18 + (byte)pbVar18;
    uVar23 = (undefined3)((uint)pbVar18 >> 8);
    bVar8 = (byte)pbVar18 | *pbVar15;
    pcVar20 = (char *)CONCAT31(uVar23,bVar8);
    uVar63 = CONCAT44(pbVar15,pcVar20);
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *pcVar20 = *pcVar20 + bVar8;
      *pbVar57 = *pbVar57 + 1;
      return (byte *)CONCAT31(uVar23,bVar8 + 6);
    }
    bVar8 = *pbVar57;
    *pbVar57 = *pbVar57 + 1;
    pcVar4 = (code *)swi(4);
    if (SCARRY1(bVar8,'\x01')) {
      uVar63 = (*pcVar4)();
      pbVar56 = extraout_ECX_00;
    }
    pbVar15 = (byte *)uVar63;
    *pbVar15 = *pbVar15 + (char)uVar63;
    cVar9 = (char)((ulonglong)uVar63 >> 0x20);
    puVar58 = (uint *)CONCAT22((short)((ulonglong)uVar63 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar63 >> 0x28) | pbVar30[0x2f],cVar9));
    *pbVar15 = *pbVar15 + (char)uVar63;
    cVar11 = (char)pbVar56;
    bVar12 = (byte)((uint)pbVar56 >> 8) | *pbVar15;
    pbVar15 = pbVar15 + *(int *)pbVar15;
    bVar8 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar12;
    bVar31 = (byte)pbVar15;
    if (CARRY1(bVar8,bVar12)) {
      *pbVar15 = *pbVar15 + bVar31;
      bVar12 = bVar12 | (byte)*puVar58;
      *pbVar30 = *pbVar30 - cVar9;
      *pbVar15 = *pbVar15 + bVar31;
      uVar23 = (undefined3)((uint)pbVar15 >> 8);
      bVar31 = bVar31 | (byte)*puVar58;
      puVar22 = (uint *)CONCAT31(uVar23,bVar31);
      bVar61 = CARRY4((uint)pbVar55,*puVar22);
      bVar62 = SCARRY4((int)pbVar55,*puVar22);
      pbVar55 = pbVar55 + *puVar22;
      *(uint *)((int)puVar35 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar62 * 0x800 | (uint)(in_IF & 1) * 0x200 |
           (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar55 < 0) * 0x80 |
           (uint)(pbVar55 == (byte *)0x0) * 0x40 | (uint)(bVar10 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar55 & 0xff) & 1U) == 0) * 4 | (uint)bVar61 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar22 = (char)*puVar22 + bVar31;
      *(undefined2 *)((int)puVar35 + -8) = in_ES;
      cVar9 = (char)pbVar30 - *pbVar57;
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11((char)((uint)pbVar30 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar30 >> 8),cVar9) +
                                                   0x5f),cVar9));
      *(byte *)puVar22 = (char)*puVar22 + bVar31;
      bVar8 = bVar31 + 0x2a & (byte)*puVar58;
      pbVar19 = pbVar19 + *(int *)(pbVar55 + 0x5f);
      *(char *)CONCAT31(uVar23,bVar8) = *(char *)CONCAT31(uVar23,bVar8) + bVar8;
      pbVar15 = (byte *)CONCAT31(uVar23,bVar8 + 0x2a);
      *(byte *)puVar58 = (byte)*puVar58 + 0x28;
      *pbVar15 = *pbVar15 + bVar8 + 0x2a;
      puVar51 = (undefined2 *)((int)puVar35 + -0xc);
      puVar35 = (undefined4 *)((int)puVar35 + -0xc);
      *puVar51 = in_ES;
    }
    else {
      *pbVar57 = *pbVar57 + bVar31;
    }
    pcVar20 = (char *)CONCAT22((short)((uint)pbVar56 >> 0x10),CONCAT11(bVar12,cVar11));
    *pbVar55 = *pbVar55 - bVar12;
    *(byte *)puVar58 = (byte)*puVar58 + cVar11;
    bVar8 = (byte)pbVar15 - 0xb;
    pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar8);
    if (10 < (byte)pbVar15) {
      *pbVar56 = *pbVar56 | bVar8;
      return pbVar56;
    }
    *(byte *)puVar58 = (byte)*puVar58 + cVar11;
    do {
      *(undefined2 *)((int)puVar35 + -4) = in_ES;
      bVar8 = pbVar30[-0x23];
      bVar31 = (byte)pbVar56;
      *pbVar56 = *pbVar56 + bVar31;
      bVar10 = pbVar55[-0x22];
      *pbVar56 = *pbVar56 + bVar31;
      uVar23 = (undefined3)((uint)pbVar56 >> 8);
      bVar31 = bVar31 | *pbVar57;
      pbVar15 = (byte *)CONCAT31(uVar23,bVar31);
      cVar9 = (char)pbVar30 - *pbVar57;
      pbVar30 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar30 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar30 >> 8) + bVar8 |
                                                          bVar10,(char)pbVar30)) >> 8),cVar9);
      cVar11 = (char)pcVar20;
      pcVar20 = (char *)CONCAT22((short)((uint)pcVar20 >> 0x10),
                                 CONCAT11((char)((uint)pcVar20 >> 8) + *pbVar15,cVar11));
      *(byte *)puVar58 = (byte)*puVar58 + cVar11;
      bVar10 = bVar31 - *pbVar15;
      pbVar56 = (byte *)CONCAT31(uVar23,bVar10);
      pbVar57 = pbVar57 + (-(uint)(bVar31 < *pbVar15) - *(int *)pbVar56);
      in_ES = *(undefined2 *)((int)puVar35 + -4);
      puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),(char)puVar58 * '\x02');
      *(byte **)pbVar56 = pbVar56 + *(int *)pbVar56;
      *pbVar19 = *pbVar19 + cVar9;
      bVar8 = *pbVar56;
      *pbVar56 = *pbVar56 + bVar10;
      *puVar58 = (uint)(pbVar56 + (uint)CARRY1(bVar8,bVar10) + *puVar58);
    } while ((POPCOUNT(*puVar58 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar56 = *pbVar56 + (char)pbVar56;
    pcVar20 = (char *)CONCAT31((int3)((uint)pcVar20 >> 8),(byte)pcVar20 | pbVar56[(int)pcVar20]);
    puVar53 = (undefined2 *)((int)puVar35 + -4);
    *(undefined2 *)((int)puVar35 + -4) = uVar59;
    bVar61 = false;
    pbVar56 = (byte *)((uint)pbVar56 & 0xffffff00);
    do {
      pbVar19 = pbVar19 + (-(uint)bVar61 - *(int *)pbVar30);
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar56 >> 8),*pcVar20);
      *pcVar16 = *pcVar16 + *pcVar20;
      pbVar56 = (byte *)CONCAT31((int3)((uint)(pcVar16 +
                                              (pbVar57[0x2000001] < (byte)((uint)pcVar20 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar16 +
                                        (pbVar57[0x2000001] < (byte)((uint)pcVar20 >> 8)) + 0xda7d)
                                 | (byte)*puVar58) + 0x7d);
      pcVar20 = pcVar20 + -1;
      *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar20;
      while( true ) {
        uVar26 = (undefined3)((uint)puVar58 >> 8);
        cVar11 = (char)puVar58 + *(char *)((int)pbVar19 * 2 + 0xa0000e1);
        puVar58 = (uint *)CONCAT31(uVar26,cVar11);
        bVar61 = CARRY1((byte)pbVar56,(byte)*puVar58);
        uVar23 = (undefined3)((uint)pbVar56 >> 8);
        bVar8 = (byte)pbVar56 + (byte)*puVar58;
        pbVar56 = (byte *)CONCAT31(uVar23,bVar8);
        if ((POPCOUNT(bVar8) & 1U) != 0) break;
        *pbVar56 = *pbVar56 + bVar8;
        cVar9 = (char)pcVar20;
        pcVar20 = (char *)CONCAT22((short)((uint)pcVar20 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar20 >> 8) | pbVar19[-0x65],cVar9));
        bVar10 = *pbVar56;
        *pbVar56 = *pbVar56 + bVar8;
        *(undefined2 *)((int)puVar53 + -4) = in_ES;
        if (CARRY1(bVar10,bVar8)) {
          *pbVar56 = *pbVar56 + bVar8;
          pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar30 >> 8) | pbVar55[-0x1d],
                                              (char)pbVar30));
          *pbVar56 = *pbVar56 + bVar8;
          bVar61 = false;
          bVar8 = bVar8 | (byte)*puVar58;
          pcVar16 = (char *)CONCAT31(uVar23,bVar8);
          uVar59 = *(undefined2 *)((int)puVar53 + -4);
          puVar35 = (undefined4 *)puVar53;
          while( true ) {
            bVar10 = (byte)pcVar16;
            uVar23 = (undefined3)((uint)pcVar16 >> 8);
            if (bVar61 == (char)bVar8 < '\0') break;
            *pcVar16 = *pcVar16 + bVar10;
            bVar10 = bVar10 | (byte)*puVar58;
            puVar22 = (uint *)CONCAT31(uVar23,bVar10);
            *pbVar19 = *pbVar19 << 1 | (char)*pbVar19 < '\0';
            uVar2 = *puVar22;
            *(byte *)puVar22 = (byte)*puVar22 + bVar10;
            pbVar55 = pbVar55 + (-(uint)CARRY1((byte)uVar2,bVar10) - *puVar22);
            *puVar22 = *puVar22 << 1 | (uint)((int)*puVar22 < 0);
            while( true ) {
              uVar2 = *puVar58;
              *(byte *)puVar58 = (byte)*puVar58 + (byte)pcVar20;
              uVar60 = *(undefined2 *)puVar35;
              cVar11 = (char)puVar22 + 'o' + CARRY1((byte)uVar2,(byte)pcVar20);
              pcVar16 = (char *)CONCAT31((int3)((uint)puVar22 >> 8),cVar11);
              pcVar20 = (char *)0x20a0000;
              if ((POPCOUNT(cVar11) & 1U) != 0) break;
              *pcVar16 = *pcVar16 + cVar11;
              bVar8 = bRamfe140212;
              pcVar20 = (char *)0x0;
              *(undefined2 *)puVar35 = in_ES;
              uVar23 = (undefined3)((uint)(pcVar16 + -0x732b0000) >> 8);
              bVar10 = in(0);
              puVar22 = (uint *)CONCAT31(uVar23,bVar10);
              uVar2 = *puVar58;
              *(byte *)puVar58 = (byte)*puVar58;
              if (SCARRY1((byte)uVar2,'\0') != (char)(byte)*puVar58 < '\0') {
                *(byte *)puVar22 = (byte)*puVar22 + bVar10;
                bVar10 = bVar10 | (byte)*puVar58;
                puVar22 = (uint *)CONCAT31(uVar23,bVar10);
                if ((POPCOUNT(bVar10) & 1U) == 0) {
                  *(byte *)puVar22 = (byte)*puVar22 + bVar10;
                  pcVar20 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar8 | (byte)*puVar22) << 8);
                  puVar53 = (undefined2 *)((int)puVar35 + -4);
                  *(undefined2 *)((int)puVar35 + -4) = uVar60;
                  *(byte *)puVar22 = (byte)*puVar22 + bVar10;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar22 = (byte)*puVar22 + bVar10;
                puVar22 = (uint *)CONCAT31(uVar23,bVar10 | (byte)*puVar58);
              }
            }
            *(byte *)puVar58 = (byte)*puVar58;
            bVar61 = SCARRY1((char)puVar58,*pbVar19);
            bVar8 = (char)puVar58 + *pbVar19;
            puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar8);
            puVar35 = (undefined4 *)((int)puVar35 + 4);
          }
          if (bVar61 == (char)bVar8 < '\0') {
            *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar20;
            pbVar56 = (byte *)((uint)pcVar16 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar16 = *pcVar16 + bVar10;
          pbVar56 = (byte *)CONCAT31(uVar23,(bVar10 | (byte)*puVar58) + 0x7d);
          pcVar20 = pcVar20 + -1;
          *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar20;
          puVar53 = (undefined2 *)puVar35;
        }
        else {
          *(byte *)puVar58 = (byte)*puVar58 + cVar9;
          puVar58 = (uint *)CONCAT31(uVar26,cVar11 + *(char *)((int)pbVar19 * 2 + 0xa0000e0));
          puVar53 = (undefined2 *)((int)puVar53 + -4);
        }
      }
    } while( true );
  }
  *pbVar19 = *pbVar19 + bVar8;
  bVar8 = bVar8 + 0x6f & *(byte *)CONCAT31(uVar23,bVar8 + 0x6f);
  *pbVar15 = *pbVar15 + (char)pbVar56;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*puVar58);
  *(byte *)(puVar58 + 0x5c18000) = (byte)puVar58[0x5c18000] - bVar8;
  pcVar20 = (char *)CONCAT31(uVar23,bVar8 - (byte)*puVar58);
code_r0x00403b2c:
  bVar8 = (char)pcVar20 - *pcVar20;
  pbVar18 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),bVar8);
  *pbVar18 = *pbVar18 + bVar8;
  *(byte **)pbVar18 = pbVar15 + *(int *)pbVar18;
  *pbVar18 = *pbVar18 + bVar8;
  bVar61 = CARRY1(*pbVar18,bVar8);
  *pbVar18 = *pbVar18 + bVar8;
  puVar27 = (undefined1 *)puVar35;
  pbVar19 = pbVar57;
  while( true ) {
    puVar35 = (undefined4 *)puVar27;
    *(byte **)pbVar18 = pbVar18 + (uint)bVar61 + *(int *)pbVar18;
    bVar10 = ((uint)pbVar18 & 0x1000) != 0;
    puVar58 = puVar58 + 1;
    pbVar18[(int)pbVar15] = pbVar18[(int)pbVar15] + (char)pbVar30;
    *pbVar18 = *pbVar18 + (char)pbVar18;
    *(byte **)pbVar19 = pbVar30 + *(int *)pbVar19;
    bVar8 = (byte)((uint)pbVar56 >> 8);
    cVar11 = (char)pbVar56;
    pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),CONCAT11(bVar8 + *pbVar18,cVar11));
    pbVar18 = pbVar18 + (uint)CARRY1(bVar8,*pbVar18) + *(int *)pbVar18;
    *pbVar15 = *pbVar15 + cVar11;
    cVar11 = (char)pbVar30 - pbVar19[2];
    pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar11);
    pbVar57 = pbVar19;
    if ((POPCOUNT(cVar11) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar18 = *pbVar18 + (byte)pbVar18;
    bVar8 = (byte)pbVar18 | *pbVar30;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar8);
    if (bVar8 != 0) {
      pbVar55 = pbVar55 + -puVar58[9];
      *pbVar21 = *pbVar21 + bVar8;
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar56 >> 8) | *pbVar15,(char)pbVar56));
      pbVar19 = pbVar19 + *(int *)pbVar21;
      pbVar21 = pbVar21 + *(int *)pbVar21;
      uVar23 = (undefined3)((uint)pbVar21 >> 8);
      bVar31 = (char)pbVar21 - *pbVar21;
      pbVar57 = (byte *)CONCAT31(uVar23,bVar31);
      bVar8 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar31;
      pbVar21 = (byte *)CONCAT31(uVar23,bVar31 - CARRY1(bVar8,bVar31));
    }
    bVar8 = *pbVar21;
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    iVar25 = *(int *)(pbVar55 + 0x1b000007);
    iVar6 = -(uint)CARRY1(bVar8,(byte)pbVar21);
    pbVar57 = pbVar19 + 4;
    out(*(undefined4 *)pbVar19,(short)pbVar15);
    pbVar18 = (byte *)(((uint)pbVar21 >> 8) * 0x100);
    *pbVar15 = *pbVar15 + (byte)pbVar56;
    bVar8 = (char)pbVar15 - *pbVar30;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar8);
    *pbVar30 = *pbVar30;
    *pbVar15 = *pbVar15 + (char)((uint)pbVar56 >> 8);
    *pbVar18 = *pbVar18;
    pcVar20 = (char *)(((uint)pbVar21 >> 8) * 0x200);
    *pcVar20 = *pcVar20 + (char)pbVar30;
    bVar61 = CARRY1(*pbVar56,bVar8);
    *pbVar56 = *pbVar56 + bVar8;
    puVar27 = (undefined1 *)((int)puVar35 + (iVar6 - iVar25));
    pbVar19 = pbVar57;
    if (bVar61) {
      *pbVar18 = *pbVar18;
      pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar56 >> 8),(byte)pbVar56 | *pbVar15);
      puVar50 = (undefined2 *)((int)puVar35 + (iVar6 - iVar25) + -4);
      puVar35 = (undefined4 *)((int)puVar35 + (iVar6 - iVar25) + -4);
      *puVar50 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar49 = (undefined2 *)((int)puVar35 + -4);
  puVar35 = (undefined4 *)((int)puVar35 + -4);
  *puVar49 = uVar59;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar55 = pbVar55 + -*puVar22;
  puVar52 = (undefined1 *)((int)puVar53 + 4);
  do {
    bVar8 = (byte)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + bVar8;
    pbVar19 = pbVar19 + -*(int *)(pbVar55 + -0x1a);
    *(byte *)puVar22 = (byte)*puVar22 + bVar8;
    bVar8 = bVar8 | (byte)*puVar58;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar8);
    *(byte *)puVar22 = (byte)*puVar22 | bVar8;
    bVar8 = (byte)*puVar22;
    pbVar55 = (byte *)0x2700001;
    while (puVar53 = (undefined2 *)puVar52, (POPCOUNT(bVar8) & 1U) == 0) {
      do {
        *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
        bVar8 = (byte)puVar22 | (byte)*puVar58;
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar8);
        puVar27 = (undefined1 *)puVar53;
        if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        uVar24 = CONCAT21((short)((uint)pcVar20 >> 0x10),(byte)((uint)pcVar20 >> 8) | bRamfe140212);
        puVar7 = puVar27;
        while( true ) {
          puVar54 = puVar7;
          pcVar20 = (char *)((uint)uVar24 << 8);
          puVar52 = puVar54 + -4;
          puVar53 = (undefined2 *)(puVar54 + -4);
          puVar27 = puVar54 + -4;
          *(undefined2 *)(puVar54 + -4) = in_ES;
          bVar12 = (byte)puVar22;
          *(byte *)puVar22 = (byte)*puVar22 & bVar12;
          bVar31 = *pbVar30;
          bVar14 = (byte)uVar24;
          bVar10 = *pbVar30;
          *pbVar30 = *pbVar30 + bVar14;
          bVar8 = *pbVar30;
          if (!CARRY1(bVar31,bVar14)) break;
          *(byte *)puVar22 = (byte)*puVar22 + bVar12;
          pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar30 >> 8) | bRam026fffe2,
                                              (char)pbVar30));
          *(byte *)puVar22 = (byte)*puVar22 + bVar12;
          bVar12 = bVar12 | (byte)*puVar58;
          puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar12);
          bVar61 = (POPCOUNT(bVar12) & 1U) == 0;
          while( true ) {
            cVar11 = (char)((uint)pbVar30 >> 8);
            uVar59 = (undefined2)((uint)pbVar30 >> 0x10);
            if (!bVar61) {
              *(byte *)puVar58 = (byte)*puVar58;
              pbVar30 = (byte *)CONCAT22(uVar59,CONCAT11(cVar11 + pbVar30[-0x1f],(char)pbVar30));
              goto code_r0x00403d52;
            }
            *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
            uVar60 = (undefined2)((uint)pcVar20 >> 0x10);
            bVar10 = (byte)((uint)pcVar20 >> 8) | (byte)*puVar22;
            uVar24 = CONCAT21(uVar60,bVar10);
            *puVar22 = *puVar22 & (uint)puVar22;
            *pbVar30 = *pbVar30 + bVar10;
            uVar23 = (undefined3)((uint)puVar22 >> 8);
            bVar8 = (char)puVar22 - bVar10;
            pcVar20 = (char *)CONCAT31(uVar23,bVar8);
            *pcVar20 = *pcVar20 + bVar8;
            bVar8 = bVar8 | (byte)*puVar58;
            puVar22 = (uint *)CONCAT31(uVar23,bVar8);
            puVar7 = puVar54 + -4;
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *(byte *)puVar22 = (byte)*puVar22 + bVar8;
            pcVar20 = (char *)((uint)CONCAT21(uVar60,bVar10 | (byte)*puVar22) << 8);
            *puVar22 = *puVar22 - (int)puVar22;
            *(byte *)puVar58 = (byte)*puVar58;
            pbVar30 = (byte *)CONCAT22(uVar59,CONCAT11(cVar11 + pbVar30[-0x1d],(char)pbVar30));
            do {
              *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
              uVar59 = (undefined2)((uint)puVar58 >> 0x10);
              cVar11 = (char)puVar58;
              bVar8 = (byte)((uint)puVar58 >> 8) | pbVar30[-0x17];
              puVar58 = (uint *)CONCAT22(uVar59,CONCAT11(bVar8,cVar11));
              *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
              pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar30 >> 8) | bRam026fffeb,
                                                  (char)pbVar30));
              do {
                *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
                uVar23 = (undefined3)((uint)puVar22 >> 8);
                bVar31 = (byte)puVar22 | (byte)*puVar58;
                pcVar16 = (char *)CONCAT31(uVar23,bVar31);
                bVar10 = pbVar30[-0x16];
                *pcVar16 = *pcVar16 + bVar31;
                pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                           CONCAT11((char)((uint)pbVar30 >> 8) + bVar10 |
                                                    bRam026fffec,(char)pbVar30));
                *pcVar16 = *pcVar16 + bVar31;
                pbVar15 = (byte *)CONCAT31(uVar23,bVar31 | (byte)*puVar58);
                while( true ) {
                  *pbVar15 = *pbVar15 + (byte)pbVar15;
                  uVar23 = (undefined3)((uint)pbVar15 >> 8);
                  bVar10 = (byte)pbVar15 | (byte)*puVar58;
                  puVar22 = (uint *)CONCAT31(uVar23,bVar10);
                  if ((POPCOUNT(bVar10) & 1U) != 0) break;
                  *(byte *)puVar22 = (byte)*puVar22 + bVar10;
                  bVar31 = pbVar19[-0x14];
                  *(byte *)puVar22 = (byte)*puVar22 + bVar10;
                  bVar10 = bVar10 | (byte)*puVar58;
                  pcVar16 = (char *)CONCAT31(uVar23,bVar10);
                  bVar12 = pbVar30[-0x15];
                  *pcVar16 = *pcVar16 + bVar10;
                  pcVar20 = (char *)((uint)CONCAT21((short)((uint)pcVar20 >> 0x10),
                                                    (byte)((uint)pcVar20 >> 8) | bVar31 |
                                                    pbVar19[-0x13]) << 8);
                  *pcVar16 = *pcVar16 + bVar10;
                  pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                             CONCAT11((char)((uint)pbVar30 >> 8) + bVar12 |
                                                      bRam026fffef,(char)pbVar30));
                  *pcVar16 = *pcVar16 + bVar10;
                  pbVar15 = (byte *)CONCAT31(uVar23,bVar10 | (byte)*puVar58);
                  do {
                    do {
                      bVar31 = (byte)pbVar15;
                      *pbVar15 = *pbVar15 + bVar31;
                      cVar28 = (char)pbVar30;
                      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar30 >> 8) | *pbVar15,
                                                          cVar28));
                      *pbVar15 = bVar31;
                      *pbVar15 = *pbVar15 + bVar31;
                      cVar9 = (char)((uint)pcVar20 >> 8) + *pbVar15;
                      pcVar20 = (char *)((uint)CONCAT21((short)((uint)pcVar20 >> 0x10),cVar9) << 8);
                      uVar23 = (undefined3)((uint)pbVar15 >> 8);
                      bVar31 = bVar31 & *pbVar15;
                      pbVar15 = (byte *)CONCAT31(uVar23,bVar31);
                      bVar10 = *pbVar30;
                      *pbVar30 = *pbVar30 + cVar9;
                    } while (SCARRY1(bVar10,cVar9) == (char)*pbVar30 < '\0');
                    *pbVar15 = *pbVar15 + bVar31;
                    bVar31 = bVar31 | (byte)*puVar58;
                    pbVar15 = (byte *)CONCAT31(uVar23,bVar31);
                    if ((POPCOUNT(bVar31) & 1U) == 0) {
                      *pbVar15 = *pbVar15 + bVar31;
                      *pbVar15 = *pbVar15 + bVar31;
                      cVar11 = cVar11 - bVar8;
                      pbVar56 = (byte *)CONCAT31((int3)((uint)puVar58 >> 8),cVar11);
                      *pbVar15 = *pbVar15 + bVar31;
                      bRam0312382b = bRam0312382b | *pbVar56;
                      *(undefined2 *)(puVar54 + -8) = in_ES;
                      while( true ) {
                        bVar10 = (byte)pbVar15;
                        *pbVar15 = *pbVar15 + bVar10;
                        bRam0312382b = bRam0312382b | (pbVar19 + 0x21b0000)[(int)pbVar15];
                        uVar23 = (undefined3)((uint)pbVar15 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar56 = *pbVar56 + bRam0312382b;
                        pbVar15 = (byte *)CONCAT31(uVar23,bVar10 | *pbVar57);
                      }
                      *pbVar15 = *pbVar15 + bVar10;
                      bVar10 = bVar10 | *pbVar57;
                      pcVar20 = (char *)CONCAT31(uVar23,bVar10);
                      out(*(undefined4 *)pbVar57,(short)pbVar56);
                      *pcVar20 = *pcVar20 + bVar10;
                      uVar60 = CONCAT11(bVar8 | bRam6f0a002b,cVar11);
                      pcVar16 = (char *)CONCAT22(uVar59,uVar60);
                      *pcVar20 = *pcVar20 + bVar10;
                      *pcVar16 = *pcVar16 + bRam0312382b;
                      out(*(undefined4 *)(pbVar57 + 4),uVar60);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar28 + *pcVar20);
                  } while (SCARRY1(cVar28,*pcVar20) != (char)(cVar28 + *pcVar20) < '\0');
                }
                uVar2 = *puVar58;
                *(byte *)puVar58 = (byte)*puVar58;
              } while (SCARRY1((byte)uVar2,'\0') != (char)(byte)*puVar58 < '\0');
              *(byte *)puVar58 = (byte)*puVar58;
              *pcVar20 = *pcVar20 - (char)pbVar30;
              *(byte *)puVar22 = (byte)*puVar22 + bVar10;
              bVar10 = bVar10 | (byte)*puVar58;
              puVar22 = (uint *)CONCAT31(uVar23,bVar10);
              bVar61 = (POPCOUNT(bVar10) & 1U) == 0;
            } while (bVar61);
          }
        }
      } while (SCARRY1(bVar10,bVar14));
    }
    *pbVar30 = *pbVar30 + (char)((uint)pcVar20 >> 8);
    *pbVar19 = *pbVar19 - (char)pbVar30;
  } while( true );
}


