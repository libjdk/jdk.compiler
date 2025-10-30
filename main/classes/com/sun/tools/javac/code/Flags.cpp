#include <com/sun/tools/javac/code/Flags.h>

#include <com/sun/tools/javac/code/Flags$Flag.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <javax/lang/model/element/Modifier.h>
#include <jcpp.h>

#undef ABSTRACT
#undef ACC_BRIDGE
#undef ACC_MODULE
#undef ACC_SUPER
#undef ACC_VARARGS
#undef ACYCLIC
#undef ACYCLIC_ANN
#undef ANNOTATION
#undef ANONCONSTR
#undef ANONCONSTR_BASED
#undef AUTOMATIC_MODULE
#undef AUXILIARY
#undef BAD_OVERRIDE
#undef BLOCK
#undef BODY_ONLY_FINALIZE
#undef BRIDGE
#undef CLASH
#undef CLASS_SEEN
#undef COMPACT_RECORD_CONSTRUCTOR
#undef COMPOUND
#undef DEFAULT
#undef DEPRECATED
#undef DEPRECATED_ANNOTATION
#undef DEPRECATED_REMOVAL
#undef EFFECTIVELY_FINAL
#undef ENUM
#undef EXISTS
#undef FINAL
#undef GENERATEDCONSTR
#undef GENERATED_MEMBER
#undef HASINIT
#undef HAS_RESOURCE
#undef HYPOTHETICAL
#undef INTERFACE
#undef LAMBDA_METHOD
#undef LOCKED
#undef MANDATED
#undef MATCH_BINDING
#undef MATCH_BINDING_TO_OUTER
#undef MODULE
#undef NAME_FILLED
#undef NATIVE
#undef NON_SEALED
#undef NOOUTERTHIS
#undef NOT_IN_PROFILE
#undef PARAMETER
#undef POTENTIALLY_AMBIGUOUS
#undef PREVIEW_API
#undef PREVIEW_REFLECTIVE
#undef PRIVATE
#undef PROPRIETARY
#undef PROTECTED
#undef PUBLIC
#undef RECORD
#undef RECOVERABLE
#undef SEALED
#undef SIGNATURE_POLYMORPHIC
#undef SOURCE_SEEN
#undef STATIC
#undef STRICTFP
#undef SUPER_OWNER_ATTRIBUTED
#undef SYNCHRONIZED
#undef SYNTHETIC
#undef SYSTEM_MODULE
#undef THROWS
#undef TRANSIENT
#undef TYPE_TRANSLATED
#undef UNATTRIBUTED
#undef UNINITIALIZED_FIELD
#undef UNION
#undef VALUE_BASED
#undef VARARGS
#undef VOLATILE

using $Flags$FlagArray = $Array<::com::sun::tools::javac::code::Flags$Flag>;
using $Flags$Flag = ::com::sun::tools::javac::code::Flags$Flag;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Modifier = ::javax::lang::model::element::Modifier;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Flags_FieldInfo_[] = {
	{"PUBLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, PUBLIC)},
	{"PRIVATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, PRIVATE)},
	{"PROTECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, PROTECTED)},
	{"STATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, STATIC)},
	{"FINAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, FINAL)},
	{"SYNCHRONIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, SYNCHRONIZED)},
	{"VOLATILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, VOLATILE)},
	{"TRANSIENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, TRANSIENT)},
	{"NATIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, NATIVE)},
	{"INTERFACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, INTERFACE)},
	{"ABSTRACT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ABSTRACT)},
	{"STRICTFP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, STRICTFP)},
	{"SYNTHETIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, SYNTHETIC)},
	{"ANNOTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ANNOTATION)},
	{"ENUM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ENUM)},
	{"MANDATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, MANDATED)},
	{"StandardFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, StandardFlags)},
	{"ACC_SUPER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ACC_SUPER)},
	{"ACC_BRIDGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ACC_BRIDGE)},
	{"ACC_VARARGS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ACC_VARARGS)},
	{"ACC_MODULE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ACC_MODULE)},
	{"DEPRECATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, DEPRECATED)},
	{"HASINIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, HASINIT)},
	{"BLOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, BLOCK)},
	{"NOOUTERTHIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, NOOUTERTHIS)},
	{"EXISTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, EXISTS)},
	{"COMPOUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, COMPOUND)},
	{"CLASS_SEEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, CLASS_SEEN)},
	{"SOURCE_SEEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, SOURCE_SEEN)},
	{"LOCKED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, LOCKED)},
	{"UNATTRIBUTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, UNATTRIBUTED)},
	{"ANONCONSTR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ANONCONSTR)},
	{"SUPER_OWNER_ATTRIBUTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, SUPER_OWNER_ATTRIBUTED)},
	{"ACYCLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ACYCLIC)},
	{"BRIDGE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, BRIDGE)},
	{"PARAMETER", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, PARAMETER)},
	{"VARARGS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, VARARGS)},
	{"ACYCLIC_ANN", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ACYCLIC_ANN)},
	{"GENERATEDCONSTR", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, GENERATEDCONSTR)},
	{"HYPOTHETICAL", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, HYPOTHETICAL)},
	{"PROPRIETARY", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, PROPRIETARY)},
	{"UNION", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, UNION)},
	{"RECOVERABLE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, RECOVERABLE)},
	{"EFFECTIVELY_FINAL", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, EFFECTIVELY_FINAL)},
	{"CLASH", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, CLASH)},
	{"DEFAULT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, DEFAULT)},
	{"AUXILIARY", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, AUXILIARY)},
	{"NOT_IN_PROFILE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, NOT_IN_PROFILE)},
	{"BAD_OVERRIDE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, BAD_OVERRIDE)},
	{"SIGNATURE_POLYMORPHIC", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, SIGNATURE_POLYMORPHIC)},
	{"THROWS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, THROWS)},
	{"POTENTIALLY_AMBIGUOUS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, POTENTIALLY_AMBIGUOUS)},
	{"LAMBDA_METHOD", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, LAMBDA_METHOD)},
	{"TYPE_TRANSLATED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, TYPE_TRANSLATED)},
	{"MODULE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, MODULE)},
	{"AUTOMATIC_MODULE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, AUTOMATIC_MODULE)},
	{"HAS_RESOURCE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, HAS_RESOURCE)},
	{"NAME_FILLED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, NAME_FILLED)},
	{"SYSTEM_MODULE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, SYSTEM_MODULE)},
	{"VALUE_BASED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, VALUE_BASED)},
	{"DEPRECATED_ANNOTATION", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, DEPRECATED_ANNOTATION)},
	{"DEPRECATED_REMOVAL", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, DEPRECATED_REMOVAL)},
	{"PREVIEW_API", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, PREVIEW_API)},
	{"ANONCONSTR_BASED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ANONCONSTR_BASED)},
	{"BODY_ONLY_FINALIZE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, BODY_ONLY_FINALIZE)},
	{"PREVIEW_REFLECTIVE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, PREVIEW_REFLECTIVE)},
	{"MATCH_BINDING", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, MATCH_BINDING)},
	{"MATCH_BINDING_TO_OUTER", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, MATCH_BINDING_TO_OUTER)},
	{"RECORD", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, RECORD)},
	{"COMPACT_RECORD_CONSTRUCTOR", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, COMPACT_RECORD_CONSTRUCTOR)},
	{"UNINITIALIZED_FIELD", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, UNINITIALIZED_FIELD)},
	{"GENERATED_MEMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, GENERATED_MEMBER)},
	{"SEALED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, SEALED)},
	{"NON_SEALED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, NON_SEALED)},
	{"AccessFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, AccessFlags)},
	{"LocalClassFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, LocalClassFlags)},
	{"StaticLocalFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, StaticLocalFlags)},
	{"MemberClassFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, MemberClassFlags)},
	{"MemberStaticClassFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, MemberStaticClassFlags)},
	{"ClassFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ClassFlags)},
	{"InterfaceVarFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, InterfaceVarFlags)},
	{"VarFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, VarFlags)},
	{"ConstructorFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ConstructorFlags)},
	{"InterfaceMethodFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, InterfaceMethodFlags)},
	{"MethodFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, MethodFlags)},
	{"RecordMethodFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, RecordMethodFlags)},
	{"ExtendedStandardFlags", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ExtendedStandardFlags)},
	{"ExtendedMemberClassFlags", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ExtendedMemberClassFlags)},
	{"ExtendedMemberStaticClassFlags", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ExtendedMemberStaticClassFlags)},
	{"ExtendedClassFlags", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ExtendedClassFlags)},
	{"ModifierFlags", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ModifierFlags)},
	{"InterfaceMethodMask", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, InterfaceMethodMask)},
	{"AnnotationTypeElementMask", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, AnnotationTypeElementMask)},
	{"LocalVarFlags", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, LocalVarFlags)},
	{"ReceiverParamFlags", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Flags, ReceiverParamFlags)},
	{"modifierSets", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Flags, modifierSets)},
	{}
};

$MethodInfo _Flags_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Flags::*)()>(&Flags::init$))},
	{"asFlagSet", "(J)Ljava/util/EnumSet;", "(J)Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Flags$Flag;>;", $PUBLIC | $STATIC, $method(static_cast<$EnumSet*(*)(int64_t)>(&Flags::asFlagSet))},
	{"asModifierSet", "(J)Ljava/util/Set;", "(J)Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)(int64_t)>(&Flags::asModifierSet))},
	{"isConstant", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Symbol$VarSymbol*)>(&Flags::isConstant))},
	{"isEnum", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Symbol*)>(&Flags::isEnum))},
	{"isStatic", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Symbol*)>(&Flags::isStatic))},
	{"toString", "(J)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int64_t)>(&Flags::toString))},
	{}
};

$InnerClassInfo _Flags_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Flags$Flag", "com.sun.tools.javac.code.Flags", "Flag", $PUBLIC | $STATIC | $ENUM},
	{}
};

$ClassInfo _Flags_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Flags",
	"java.lang.Object",
	nullptr,
	_Flags_FieldInfo_,
	_Flags_MethodInfo_,
	nullptr,
	nullptr,
	_Flags_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Flags$Flag,com.sun.tools.javac.code.Flags$Flag$1"
};

$Object* allocate$Flags($Class* clazz) {
	return $of($alloc(Flags));
}

$Map* Flags::modifierSets = nullptr;

void Flags::init$() {
}

$String* Flags::toString(int64_t flags) {
	$init(Flags);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($String, sep, ""_s);
	{
		$var($Iterator, i$, $nc($(asFlagSet(flags)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$Flags$Flag* flag = $cast($Flags$Flag, i$->next());
			{
				buf->append(sep);
				buf->append($of(flag));
				$assign(sep, " "_s);
			}
		}
	}
	return buf->toString();
}

$EnumSet* Flags::asFlagSet(int64_t flags) {
	$init(Flags);
	$useLocalCurrentObjectStackCache();
	$load($Flags$Flag);
	$var($EnumSet, flagSet, $EnumSet::noneOf($Flags$Flag::class$));
	{
		$var($Flags$FlagArray, arr$, $Flags$Flag::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Flags$Flag* flag = arr$->get(i$);
			{
				if (((int64_t)(flags & (uint64_t)$nc(flag)->value)) != 0) {
					$nc(flagSet)->add(flag);
					flags &= (uint64_t)~flag->value;
				}
			}
		}
	}
	$Assert::check(flags == 0);
	return flagSet;
}

$Set* Flags::asModifierSet(int64_t flags) {
	$init(Flags);
	$useLocalCurrentObjectStackCache();
	$var($Set, modifiers, $cast($Set, $nc(Flags::modifierSets)->get($($Long::valueOf(flags)))));
	if (modifiers == nullptr) {
		$load($Modifier);
		$assign(modifiers, $EnumSet::noneOf($Modifier::class$));
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::PUBLIC))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::PUBLIC);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::PROTECTED))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::PROTECTED);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::PRIVATE))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::PRIVATE);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::ABSTRACT))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::ABSTRACT);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::STATIC))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::STATIC);
		}
		if (0 != ((int64_t)(flags & (uint64_t)Flags::SEALED))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::SEALED);
		}
		if (0 != ((int64_t)(flags & (uint64_t)Flags::NON_SEALED))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::NON_SEALED);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::FINAL))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::FINAL);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::TRANSIENT))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::TRANSIENT);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::VOLATILE))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::VOLATILE);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::SYNCHRONIZED))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::SYNCHRONIZED);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::NATIVE))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::NATIVE);
		}
		if (0 != ((int64_t)(flags & (uint64_t)(int64_t)Flags::STRICTFP))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::STRICTFP);
		}
		if (0 != ((int64_t)(flags & (uint64_t)Flags::DEFAULT))) {
			$init($Modifier);
			$nc(modifiers)->add($Modifier::DEFAULT);
		}
		$assign(modifiers, $Collections::unmodifiableSet(modifiers));
		$nc(Flags::modifierSets)->put($($Long::valueOf(flags)), modifiers);
	}
	return modifiers;
}

bool Flags::isStatic($Symbol* symbol) {
	$init(Flags);
	return ((int64_t)($nc(symbol)->flags() & (uint64_t)(int64_t)Flags::STATIC)) != 0;
}

bool Flags::isEnum($Symbol* symbol) {
	$init(Flags);
	return ((int64_t)($nc(symbol)->flags() & (uint64_t)(int64_t)Flags::ENUM)) != 0;
}

bool Flags::isConstant($Symbol$VarSymbol* symbol) {
	$init(Flags);
	return $nc(symbol)->getConstValue() != nullptr;
}

void clinit$Flags($Class* class$) {
	$assignStatic(Flags::modifierSets, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap, 64))));
}

Flags::Flags() {
}

$Class* Flags::load$($String* name, bool initialize) {
	$loadClass(Flags, name, initialize, &_Flags_ClassInfo_, clinit$Flags, allocate$Flags);
	return class$;
}

$Class* Flags::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com