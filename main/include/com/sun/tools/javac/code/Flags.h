#ifndef _com_sun_tools_javac_code_Flags_h_
#define _com_sun_tools_javac_code_Flags_h_
//$ class com.sun.tools.javac.code.Flags
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ABSTRACT")
#undef ABSTRACT
#pragma push_macro("ACC_BRIDGE")
#undef ACC_BRIDGE
#pragma push_macro("ACC_MODULE")
#undef ACC_MODULE
#pragma push_macro("ACC_SUPER")
#undef ACC_SUPER
#pragma push_macro("ACC_VARARGS")
#undef ACC_VARARGS
#pragma push_macro("ACYCLIC")
#undef ACYCLIC
#pragma push_macro("ACYCLIC_ANN")
#undef ACYCLIC_ANN
#pragma push_macro("ANNOTATION")
#undef ANNOTATION
#pragma push_macro("ANONCONSTR")
#undef ANONCONSTR
#pragma push_macro("ANONCONSTR_BASED")
#undef ANONCONSTR_BASED
#pragma push_macro("AUTOMATIC_MODULE")
#undef AUTOMATIC_MODULE
#pragma push_macro("AUXILIARY")
#undef AUXILIARY
#pragma push_macro("BAD_OVERRIDE")
#undef BAD_OVERRIDE
#pragma push_macro("BLOCK")
#undef BLOCK
#pragma push_macro("BODY_ONLY_FINALIZE")
#undef BODY_ONLY_FINALIZE
#pragma push_macro("BRIDGE")
#undef BRIDGE
#pragma push_macro("CLASH")
#undef CLASH
#pragma push_macro("CLASS_SEEN")
#undef CLASS_SEEN
#pragma push_macro("COMPACT_RECORD_CONSTRUCTOR")
#undef COMPACT_RECORD_CONSTRUCTOR
#pragma push_macro("COMPOUND")
#undef COMPOUND
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("DEPRECATED")
#undef DEPRECATED
#pragma push_macro("DEPRECATED_ANNOTATION")
#undef DEPRECATED_ANNOTATION
#pragma push_macro("DEPRECATED_REMOVAL")
#undef DEPRECATED_REMOVAL
#pragma push_macro("EFFECTIVELY_FINAL")
#undef EFFECTIVELY_FINAL
#pragma push_macro("ENUM")
#undef ENUM
#pragma push_macro("EXISTS")
#undef EXISTS
#pragma push_macro("FINAL")
#undef FINAL
#pragma push_macro("GENERATEDCONSTR")
#undef GENERATEDCONSTR
#pragma push_macro("GENERATED_MEMBER")
#undef GENERATED_MEMBER
#pragma push_macro("HASINIT")
#undef HASINIT
#pragma push_macro("HAS_RESOURCE")
#undef HAS_RESOURCE
#pragma push_macro("HYPOTHETICAL")
#undef HYPOTHETICAL
#pragma push_macro("INTERFACE")
#undef INTERFACE
#pragma push_macro("LAMBDA_METHOD")
#undef LAMBDA_METHOD
#pragma push_macro("LOCKED")
#undef LOCKED
#pragma push_macro("MANDATED")
#undef MANDATED
#pragma push_macro("MATCH_BINDING")
#undef MATCH_BINDING
#pragma push_macro("MATCH_BINDING_TO_OUTER")
#undef MATCH_BINDING_TO_OUTER
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("NAME_FILLED")
#undef NAME_FILLED
#pragma push_macro("NATIVE")
#undef NATIVE
#pragma push_macro("NON_SEALED")
#undef NON_SEALED
#pragma push_macro("NOOUTERTHIS")
#undef NOOUTERTHIS
#pragma push_macro("NOT_IN_PROFILE")
#undef NOT_IN_PROFILE
#pragma push_macro("PARAMETER")
#undef PARAMETER
#pragma push_macro("POTENTIALLY_AMBIGUOUS")
#undef POTENTIALLY_AMBIGUOUS
#pragma push_macro("PREVIEW_API")
#undef PREVIEW_API
#pragma push_macro("PREVIEW_REFLECTIVE")
#undef PREVIEW_REFLECTIVE
#pragma push_macro("PRIVATE")
#undef PRIVATE
#pragma push_macro("PROPRIETARY")
#undef PROPRIETARY
#pragma push_macro("PROTECTED")
#undef PROTECTED
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("RECORD")
#undef RECORD
#pragma push_macro("RECOVERABLE")
#undef RECOVERABLE
#pragma push_macro("SEALED")
#undef SEALED
#pragma push_macro("SIGNATURE_POLYMORPHIC")
#undef SIGNATURE_POLYMORPHIC
#pragma push_macro("SOURCE_SEEN")
#undef SOURCE_SEEN
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("STRICTFP")
#undef STRICTFP
#pragma push_macro("SUPER_OWNER_ATTRIBUTED")
#undef SUPER_OWNER_ATTRIBUTED
#pragma push_macro("SYNCHRONIZED")
#undef SYNCHRONIZED
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC
#pragma push_macro("SYSTEM_MODULE")
#undef SYSTEM_MODULE
#pragma push_macro("THROWS")
#undef THROWS
#pragma push_macro("TRANSIENT")
#undef TRANSIENT
#pragma push_macro("TYPE_TRANSLATED")
#undef TYPE_TRANSLATED
#pragma push_macro("UNATTRIBUTED")
#undef UNATTRIBUTED
#pragma push_macro("UNINITIALIZED_FIELD")
#undef UNINITIALIZED_FIELD
#pragma push_macro("UNION")
#undef UNION
#pragma push_macro("VALUE_BASED")
#undef VALUE_BASED
#pragma push_macro("VARARGS")
#undef VARARGS
#pragma push_macro("VOLATILE")
#undef VOLATILE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$VarSymbol;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Flags : public ::java::lang::Object {
	$class(Flags, 0, ::java::lang::Object)
public:
	Flags();
	void init$();
	static ::java::util::EnumSet* asFlagSet(int64_t flags);
	static ::java::util::Set* asModifierSet(int64_t flags);
	static bool isConstant(::com::sun::tools::javac::code::Symbol$VarSymbol* symbol);
	static bool isEnum(::com::sun::tools::javac::code::Symbol* symbol);
	static bool isStatic(::com::sun::tools::javac::code::Symbol* symbol);
	using ::java::lang::Object::toString;
	static $String* toString(int64_t flags);
	static const int32_t PUBLIC = 1;
	static const int32_t PRIVATE = 2; // 1 << 1
	static const int32_t PROTECTED = 4; // 1 << 2
	static const int32_t STATIC = 8; // 1 << 3
	static const int32_t FINAL = 16; // 1 << 4
	static const int32_t SYNCHRONIZED = 32; // 1 << 5
	static const int32_t VOLATILE = 64; // 1 << 6
	static const int32_t TRANSIENT = 128; // 1 << 7
	static const int32_t NATIVE = 256; // 1 << 8
	static const int32_t INTERFACE = 512; // 1 << 9
	static const int32_t ABSTRACT = 1024; // 1 << 10
	static const int32_t STRICTFP = 2048; // 1 << 11
	static const int32_t SYNTHETIC = 4096; // 1 << 12
	static const int32_t ANNOTATION = 8192; // 1 << 13
	static const int32_t ENUM = 16384; // 1 << 14
	static const int32_t MANDATED = 32768; // 1 << 15
	static const int32_t StandardFlags = 4095;
	static const int32_t ACC_SUPER = 32;
	static const int32_t ACC_BRIDGE = 64;
	static const int32_t ACC_VARARGS = 128;
	static const int32_t ACC_MODULE = 32768;
	static const int32_t DEPRECATED = 131072; // 1 << 17
	static const int32_t HASINIT = 262144; // 1 << 18
	static const int32_t BLOCK = 1048576; // 1 << 20
	static const int32_t NOOUTERTHIS = 4194304; // 1 << 22
	static const int32_t EXISTS = 8388608; // 1 << 23
	static const int32_t COMPOUND = 16777216; // 1 << 24
	static const int32_t CLASS_SEEN = 33554432; // 1 << 25
	static const int32_t SOURCE_SEEN = 67108864; // 1 << 26
	static const int32_t LOCKED = 0x08000000; // 1 << 27
	static const int32_t UNATTRIBUTED = 0x10000000; // 1 << 28
	static const int32_t ANONCONSTR = 0x20000000; // 1 << 29
	static const int32_t SUPER_OWNER_ATTRIBUTED = 0x20000000; // 1 << 29
	static const int32_t ACYCLIC = 0x40000000; // 1 << 30
	static const int64_t BRIDGE = 2147483648; // (int64_t)1 << 31
	static const int64_t PARAMETER = 8589934592; // (int64_t)1 << 33
	static const int64_t VARARGS = 17179869184; // (int64_t)1 << 34
	static const int64_t ACYCLIC_ANN = 34359738368; // (int64_t)1 << 35
	static const int64_t GENERATEDCONSTR = 68719476736; // (int64_t)1 << 36
	static const int64_t HYPOTHETICAL = 137438953472; // (int64_t)1 << 37
	static const int64_t PROPRIETARY = 274877906944; // (int64_t)1 << 38
	static const int64_t UNION = 549755813888; // (int64_t)1 << 39
	static const int64_t RECOVERABLE = 1099511627776; // (int64_t)1 << 40
	static const int64_t EFFECTIVELY_FINAL = 2199023255552; // (int64_t)1 << 41
	static const int64_t CLASH = 4398046511104; // (int64_t)1 << 42
	static const int64_t DEFAULT = 8796093022208; // (int64_t)1 << 43
	static const int64_t AUXILIARY = 17592186044416; // (int64_t)1 << 44
	static const int64_t NOT_IN_PROFILE = 35184372088832; // (int64_t)1 << 45
	static const int64_t BAD_OVERRIDE = 35184372088832; // (int64_t)1 << 45
	static const int64_t SIGNATURE_POLYMORPHIC = 70368744177664; // (int64_t)1 << 46
	static const int64_t THROWS = 140737488355328; // (int64_t)1 << 47
	static const int64_t POTENTIALLY_AMBIGUOUS = 281474976710656; // (int64_t)1 << 48
	static const int64_t LAMBDA_METHOD = 562949953421312; // (int64_t)1 << 49
	static const int64_t TYPE_TRANSLATED = 1125899906842624; // (int64_t)1 << 50
	static const int64_t MODULE = 2251799813685248; // (int64_t)1 << 51
	static const int64_t AUTOMATIC_MODULE = 4503599627370496; // (int64_t)1 << 52
	static const int64_t HAS_RESOURCE = 4503599627370496; // (int64_t)1 << 52
	static const int64_t NAME_FILLED = 4503599627370496; // (int64_t)1 << 52
	static const int64_t SYSTEM_MODULE = 9007199254740992; // (int64_t)1 << 53
	static const int64_t VALUE_BASED = 9007199254740992; // (int64_t)1 << 53
	static const int64_t DEPRECATED_ANNOTATION = 18014398509481984; // (int64_t)1 << 54
	static const int64_t DEPRECATED_REMOVAL = 36028797018963968; // (int64_t)1 << 55
	static const int64_t PREVIEW_API = 72057594037927936; // (int64_t)1 << 56
	static const int64_t ANONCONSTR_BASED = 0x0200000000000000; // (int64_t)1 << 57
	static const int64_t BODY_ONLY_FINALIZE = 131072; // (int64_t)1 << 17
	static const int64_t PREVIEW_REFLECTIVE = 0x0400000000000000; // (int64_t)1 << 58
	static const int64_t MATCH_BINDING = 0x0800000000000000; // (int64_t)1 << 59
	static const int64_t MATCH_BINDING_TO_OUTER = 0x1000000000000000; // (int64_t)1 << 60
	static const int64_t RECORD = 0x2000000000000000; // (int64_t)1 << 61
	static const int64_t COMPACT_RECORD_CONSTRUCTOR = 2251799813685248; // (int64_t)1 << 51
	static const int64_t UNINITIALIZED_FIELD = 2251799813685248; // (int64_t)1 << 51
	static const int32_t GENERATED_MEMBER = 16777216; // 1 << 24
	static const int64_t SEALED = 0x4000000000000000; // (int64_t)1 << 62
	static const int64_t NON_SEALED = 0x8000000000000000; // (int64_t)1 << 63
	static const int32_t AccessFlags = 7; // PUBLIC | PROTECTED | PRIVATE
	static const int32_t LocalClassFlags = 23568; // FINAL | ABSTRACT | STRICTFP | ENUM | SYNTHETIC
	static const int32_t StaticLocalFlags = 24088; // LocalClassFlags | STATIC | INTERFACE
	static const int32_t MemberClassFlags = 24087; // LocalClassFlags | INTERFACE | AccessFlags
	static const int32_t MemberStaticClassFlags = 24095; // MemberClassFlags | STATIC
	static const int32_t ClassFlags = 32273; // LocalClassFlags | INTERFACE | PUBLIC | ANNOTATION
	static const int32_t InterfaceVarFlags = 25; // FINAL | STATIC | PUBLIC
	static const int32_t VarFlags = 16607; // AccessFlags | FINAL | STATIC | VOLATILE | TRANSIENT | ENUM
	static const int32_t ConstructorFlags = AccessFlags;
	static const int32_t InterfaceMethodFlags = 1025; // ABSTRACT | PUBLIC
	static const int32_t MethodFlags = 3391; // AccessFlags | ABSTRACT | STATIC | NATIVE | SYNCHRONIZED | FINAL | STRICTFP
	static const int32_t RecordMethodFlags = 3135; // AccessFlags | ABSTRACT | STATIC | SYNCHRONIZED | FINAL | STRICTFP
	static const int64_t ExtendedStandardFlags = 0xC000080000000FFF; // (int64_t)StandardFlags | DEFAULT | SEALED | NON_SEALED
	static const int64_t ExtendedMemberClassFlags = 0xC000000000005E17; // (int64_t)MemberClassFlags | SEALED | NON_SEALED
	static const int64_t ExtendedMemberStaticClassFlags = 0xC000000000005E1F; // (int64_t)MemberStaticClassFlags | SEALED | NON_SEALED
	static const int64_t ExtendedClassFlags = 0xC000000000007E11; // (int64_t)ClassFlags | SEALED | NON_SEALED
	static const int64_t ModifierFlags = 0xC000080000000DFF; // ((int64_t)StandardFlags & ~INTERFACE) | DEFAULT | SEALED | NON_SEALED
	static const int64_t InterfaceMethodMask = 8796093025291; // ABSTRACT | PRIVATE | STATIC | PUBLIC | STRICTFP | DEFAULT
	static const int64_t AnnotationTypeElementMask = 1025; // ABSTRACT | PUBLIC
	static const int64_t LocalVarFlags = 8589934608; // FINAL | PARAMETER
	static const int64_t ReceiverParamFlags = PARAMETER;
	static ::java::util::Map* modifierSets;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ABSTRACT")
#pragma pop_macro("ACC_BRIDGE")
#pragma pop_macro("ACC_MODULE")
#pragma pop_macro("ACC_SUPER")
#pragma pop_macro("ACC_VARARGS")
#pragma pop_macro("ACYCLIC")
#pragma pop_macro("ACYCLIC_ANN")
#pragma pop_macro("ANNOTATION")
#pragma pop_macro("ANONCONSTR")
#pragma pop_macro("ANONCONSTR_BASED")
#pragma pop_macro("AUTOMATIC_MODULE")
#pragma pop_macro("AUXILIARY")
#pragma pop_macro("BAD_OVERRIDE")
#pragma pop_macro("BLOCK")
#pragma pop_macro("BODY_ONLY_FINALIZE")
#pragma pop_macro("BRIDGE")
#pragma pop_macro("CLASH")
#pragma pop_macro("CLASS_SEEN")
#pragma pop_macro("COMPACT_RECORD_CONSTRUCTOR")
#pragma pop_macro("COMPOUND")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("DEPRECATED")
#pragma pop_macro("DEPRECATED_ANNOTATION")
#pragma pop_macro("DEPRECATED_REMOVAL")
#pragma pop_macro("EFFECTIVELY_FINAL")
#pragma pop_macro("ENUM")
#pragma pop_macro("EXISTS")
#pragma pop_macro("FINAL")
#pragma pop_macro("GENERATEDCONSTR")
#pragma pop_macro("GENERATED_MEMBER")
#pragma pop_macro("HASINIT")
#pragma pop_macro("HAS_RESOURCE")
#pragma pop_macro("HYPOTHETICAL")
#pragma pop_macro("INTERFACE")
#pragma pop_macro("LAMBDA_METHOD")
#pragma pop_macro("LOCKED")
#pragma pop_macro("MANDATED")
#pragma pop_macro("MATCH_BINDING")
#pragma pop_macro("MATCH_BINDING_TO_OUTER")
#pragma pop_macro("MODULE")
#pragma pop_macro("NAME_FILLED")
#pragma pop_macro("NATIVE")
#pragma pop_macro("NON_SEALED")
#pragma pop_macro("NOOUTERTHIS")
#pragma pop_macro("NOT_IN_PROFILE")
#pragma pop_macro("PARAMETER")
#pragma pop_macro("POTENTIALLY_AMBIGUOUS")
#pragma pop_macro("PREVIEW_API")
#pragma pop_macro("PREVIEW_REFLECTIVE")
#pragma pop_macro("PRIVATE")
#pragma pop_macro("PROPRIETARY")
#pragma pop_macro("PROTECTED")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("RECORD")
#pragma pop_macro("RECOVERABLE")
#pragma pop_macro("SEALED")
#pragma pop_macro("SIGNATURE_POLYMORPHIC")
#pragma pop_macro("SOURCE_SEEN")
#pragma pop_macro("STATIC")
#pragma pop_macro("STRICTFP")
#pragma pop_macro("SUPER_OWNER_ATTRIBUTED")
#pragma pop_macro("SYNCHRONIZED")
#pragma pop_macro("SYNTHETIC")
#pragma pop_macro("SYSTEM_MODULE")
#pragma pop_macro("THROWS")
#pragma pop_macro("TRANSIENT")
#pragma pop_macro("TYPE_TRANSLATED")
#pragma pop_macro("UNATTRIBUTED")
#pragma pop_macro("UNINITIALIZED_FIELD")
#pragma pop_macro("UNION")
#pragma pop_macro("VALUE_BASED")
#pragma pop_macro("VARARGS")
#pragma pop_macro("VOLATILE")

#endif // _com_sun_tools_javac_code_Flags_h_