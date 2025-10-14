#ifndef _com_sun_tools_javac_jvm_ByteCodes_h_
#define _com_sun_tools_javac_jvm_ByteCodes_h_
//$ interface com.sun.tools.javac.jvm.ByteCodes
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export ByteCodes : public ::java::lang::Object {
	$interface(ByteCodes, 0, ::java::lang::Object)
public:
	static const int32_t illegal = (-1);
	static const int32_t nop = 0;
	static const int32_t aconst_null = 1;
	static const int32_t iconst_m1 = 2;
	static const int32_t iconst_0 = 3;
	static const int32_t iconst_1 = 4;
	static const int32_t iconst_2 = 5;
	static const int32_t iconst_3 = 6;
	static const int32_t iconst_4 = 7;
	static const int32_t iconst_5 = 8;
	static const int32_t lconst_0 = 9;
	static const int32_t lconst_1 = 10;
	static const int32_t fconst_0 = 11;
	static const int32_t fconst_1 = 12;
	static const int32_t fconst_2 = 13;
	static const int32_t dconst_0 = 14;
	static const int32_t dconst_1 = 15;
	static const int32_t bipush = 16;
	static const int32_t sipush = 17;
	static const int32_t ldc1 = 18;
	static const int32_t ldc2 = 19;
	static const int32_t ldc2w = 20;
	static const int32_t iload = 21;
	static const int32_t lload = 22;
	static const int32_t fload = 23;
	static const int32_t dload = 24;
	static const int32_t aload = 25;
	static const int32_t iload_0 = 26;
	static const int32_t iload_1 = 27;
	static const int32_t iload_2 = 28;
	static const int32_t iload_3 = 29;
	static const int32_t lload_0 = 30;
	static const int32_t lload_1 = 31;
	static const int32_t lload_2 = 32;
	static const int32_t lload_3 = 33;
	static const int32_t fload_0 = 34;
	static const int32_t fload_1 = 35;
	static const int32_t fload_2 = 36;
	static const int32_t fload_3 = 37;
	static const int32_t dload_0 = 38;
	static const int32_t dload_1 = 39;
	static const int32_t dload_2 = 40;
	static const int32_t dload_3 = 41;
	static const int32_t aload_0 = 42;
	static const int32_t aload_1 = 43;
	static const int32_t aload_2 = 44;
	static const int32_t aload_3 = 45;
	static const int32_t iaload = 46;
	static const int32_t laload = 47;
	static const int32_t faload = 48;
	static const int32_t daload = 49;
	static const int32_t aaload = 50;
	static const int32_t baload = 51;
	static const int32_t caload = 52;
	static const int32_t saload = 53;
	static const int32_t istore = 54;
	static const int32_t lstore = 55;
	static const int32_t fstore = 56;
	static const int32_t dstore = 57;
	static const int32_t astore = 58;
	static const int32_t istore_0 = 59;
	static const int32_t istore_1 = 60;
	static const int32_t istore_2 = 61;
	static const int32_t istore_3 = 62;
	static const int32_t lstore_0 = 63;
	static const int32_t lstore_1 = 64;
	static const int32_t lstore_2 = 65;
	static const int32_t lstore_3 = 66;
	static const int32_t fstore_0 = 67;
	static const int32_t fstore_1 = 68;
	static const int32_t fstore_2 = 69;
	static const int32_t fstore_3 = 70;
	static const int32_t dstore_0 = 71;
	static const int32_t dstore_1 = 72;
	static const int32_t dstore_2 = 73;
	static const int32_t dstore_3 = 74;
	static const int32_t astore_0 = 75;
	static const int32_t astore_1 = 76;
	static const int32_t astore_2 = 77;
	static const int32_t astore_3 = 78;
	static const int32_t iastore = 79;
	static const int32_t lastore = 80;
	static const int32_t fastore = 81;
	static const int32_t dastore = 82;
	static const int32_t aastore = 83;
	static const int32_t bastore = 84;
	static const int32_t castore = 85;
	static const int32_t sastore = 86;
	static const int32_t pop = 87;
	static const int32_t pop2 = 88;
	static const int32_t dup = 89;
	static const int32_t dup_x1 = 90;
	static const int32_t dup_x2 = 91;
	static const int32_t dup2 = 92;
	static const int32_t dup2_x1 = 93;
	static const int32_t dup2_x2 = 94;
	static const int32_t swap = 95;
	static const int32_t iadd = 96;
	static const int32_t ladd = 97;
	static const int32_t fadd = 98;
	static const int32_t dadd = 99;
	static const int32_t isub = 100;
	static const int32_t lsub = 101;
	static const int32_t fsub = 102;
	static const int32_t dsub = 103;
	static const int32_t imul = 104;
	static const int32_t lmul = 105;
	static const int32_t fmul = 106;
	static const int32_t dmul = 107;
	static const int32_t idiv = 108;
	static const int32_t ldiv = 109;
	static const int32_t fdiv = 110;
	static const int32_t ddiv = 111;
	static const int32_t imod = 112;
	static const int32_t lmod = 113;
	static const int32_t fmod = 114;
	static const int32_t dmod = 115;
	static const int32_t ineg = 116;
	static const int32_t lneg = 117;
	static const int32_t fneg = 118;
	static const int32_t dneg = 119;
	static const int32_t ishl = 120;
	static const int32_t lshl = 121;
	static const int32_t ishr = 122;
	static const int32_t lshr = 123;
	static const int32_t iushr = 124;
	static const int32_t lushr = 125;
	static const int32_t iand = 126;
	static const int32_t land = 127;
	static const int32_t ior = 128;
	static const int32_t lor = 129;
	static const int32_t ixor = 130;
	static const int32_t lxor = 131;
	static const int32_t iinc = 132;
	static const int32_t i2l = 133;
	static const int32_t i2f = 134;
	static const int32_t i2d = 135;
	static const int32_t l2i = 136;
	static const int32_t l2f = 137;
	static const int32_t l2d = 138;
	static const int32_t f2i = 139;
	static const int32_t f2l = 140;
	static const int32_t f2d = 141;
	static const int32_t d2i = 142;
	static const int32_t d2l = 143;
	static const int32_t d2f = 144;
	static const int32_t int2byte = 145;
	static const int32_t int2char = 146;
	static const int32_t int2short = 147;
	static const int32_t lcmp = 148;
	static const int32_t fcmpl = 149;
	static const int32_t fcmpg = 150;
	static const int32_t dcmpl = 151;
	static const int32_t dcmpg = 152;
	static const int32_t ifeq = 153;
	static const int32_t ifne = 154;
	static const int32_t iflt = 155;
	static const int32_t ifge = 156;
	static const int32_t ifgt = 157;
	static const int32_t ifle = 158;
	static const int32_t if_icmpeq = 159;
	static const int32_t if_icmpne = 160;
	static const int32_t if_icmplt = 161;
	static const int32_t if_icmpge = 162;
	static const int32_t if_icmpgt = 163;
	static const int32_t if_icmple = 164;
	static const int32_t if_acmpeq = 165;
	static const int32_t if_acmpne = 166;
	static const int32_t goto_ = 167;
	static const int32_t jsr = 168;
	static const int32_t ret = 169;
	static const int32_t tableswitch = 170;
	static const int32_t lookupswitch = 171;
	static const int32_t ireturn = 172;
	static const int32_t lreturn = 173;
	static const int32_t freturn = 174;
	static const int32_t dreturn = 175;
	static const int32_t areturn = 176;
	static const int32_t return_ = 177;
	static const int32_t getstatic = 178;
	static const int32_t putstatic = 179;
	static const int32_t getfield = 180;
	static const int32_t putfield = 181;
	static const int32_t invokevirtual = 182;
	static const int32_t invokespecial = 183;
	static const int32_t invokestatic = 184;
	static const int32_t invokeinterface = 185;
	static const int32_t invokedynamic = 186;
	static const int32_t new_ = 187;
	static const int32_t newarray = 188;
	static const int32_t anewarray = 189;
	static const int32_t arraylength = 190;
	static const int32_t athrow = 191;
	static const int32_t checkcast = 192;
	static const int32_t instanceof_ = 193;
	static const int32_t monitorenter = 194;
	static const int32_t monitorexit = 195;
	static const int32_t wide = 196;
	static const int32_t multianewarray = 197;
	static const int32_t if_acmp_null = 198;
	static const int32_t if_acmp_nonnull = 199;
	static const int32_t goto_w = 200;
	static const int32_t jsr_w = 201;
	static const int32_t breakpoint = 202;
	static const int32_t ByteCodeCount = 203;
	static const int32_t string_add = 256;
	static const int32_t bool_not = 257;
	static const int32_t bool_and = 258;
	static const int32_t bool_or = 259;
	static const int32_t ishll = 270;
	static const int32_t lshll = 271;
	static const int32_t ishrl = 272;
	static const int32_t lshrl = 273;
	static const int32_t iushrl = 274;
	static const int32_t lushrl = 275;
	static const int32_t nullchk = 276;
	static const int32_t error = 277;
	static const int32_t dontgoto = jsr;
	static const int32_t preShift = 9;
	static const int32_t preMask = 511; // (1 << preShift) - 1
	static const int32_t INTcode = 0;
	static const int32_t LONGcode = 1;
	static const int32_t FLOATcode = 2;
	static const int32_t DOUBLEcode = 3;
	static const int32_t OBJECTcode = 4;
	static const int32_t BYTEcode = 5;
	static const int32_t CHARcode = 6;
	static const int32_t SHORTcode = 7;
	static const int32_t VOIDcode = 8;
	static const int32_t TypeCodeCount = 9;
	static $StringArray* typecodeNames;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ByteCodes_h_