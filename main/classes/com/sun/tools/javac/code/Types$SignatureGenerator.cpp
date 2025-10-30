#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator$InvalidSignatureException.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef MTH
#undef TYPEVAR

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$SignatureGenerator$InvalidSignatureException = ::com::sun::tools::javac::code::Types$SignatureGenerator$InvalidSignatureException;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$SignatureGenerator_FieldInfo_[] = {
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Types$SignatureGenerator, types)},
	{}
};

$MethodInfo _Types$SignatureGenerator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, $PROTECTED, $method(static_cast<void(Types$SignatureGenerator::*)($Types*)>(&Types$SignatureGenerator::init$))},
	{"append", "(C)V", nullptr, $PROTECTED | $ABSTRACT},
	{"append", "([B)V", nullptr, $PROTECTED | $ABSTRACT},
	{"append", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"assembleClassSig", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"assembleParamsSig", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC},
	{"assembleSig", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"assembleSig", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC},
	{"classReference", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PROTECTED},
	{"hasTypeVar", "(Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC},
	{"reportIllegalSignature", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Types$SignatureGenerator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$SignatureGenerator", "com.sun.tools.javac.code.Types", "SignatureGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$SignatureGenerator$InvalidSignatureException", "com.sun.tools.javac.code.Types$SignatureGenerator", "InvalidSignatureException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$SignatureGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Types$SignatureGenerator",
	"java.lang.Object",
	nullptr,
	_Types$SignatureGenerator_FieldInfo_,
	_Types$SignatureGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_Types$SignatureGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$SignatureGenerator($Class* clazz) {
	return $of($alloc(Types$SignatureGenerator));
}

void Types$SignatureGenerator::classReference($Symbol$ClassSymbol* c) {
}

void Types$SignatureGenerator::init$($Types* types) {
	$set(this, types, types);
}

void Types$SignatureGenerator::reportIllegalSignature($Type* t) {
	$throwNew($Types$SignatureGenerator$InvalidSignatureException, t);
}

void Types$SignatureGenerator::assembleSig($Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($Types$25);
	{
		$var($Type$ArrayType, at, nullptr)
		$var($Type$MethodType, mt, nullptr)
		$var($Type$ForAll, ft, nullptr)
		switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(type)->getTag())))->ordinal())) {
		case 3:
			{
				append(u'B');
				break;
			}
		case 5:
			{
				append(u'S');
				break;
			}
		case 4:
			{
				append(u'C');
				break;
			}
		case 6:
			{
				append(u'I');
				break;
			}
		case 7:
			{
				append(u'J');
				break;
			}
		case 8:
			{
				append(u'F');
				break;
			}
		case 9:
			{
				append(u'D');
				break;
			}
		case 10:
			{
				append(u'Z');
				break;
			}
		case 11:
			{
				append(u'V');
				break;
			}
		case 2:
			{
				if (type->isCompound()) {
					reportIllegalSignature(type);
				}
				append(u'L');
				assembleClassSig(type);
				append(u';');
				break;
			}
		case 1:
			{
				$assign(at, $cast($Type$ArrayType, type));
				append(u'[');
				assembleSig($nc(at)->elemtype);
				break;
			}
		case 19:
			{
				$assign(mt, $cast($Type$MethodType, type));
				append(u'(');
				assembleSig($nc(mt)->argtypes$);
				append(u')');
				assembleSig($nc(mt)->restype);
				if (hasTypeVar($nc(mt)->thrown)) {
					{
						$var($List, l, $nc(mt)->thrown);
						for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
							append(u'^');
							assembleSig($cast($Type, l->head));
						}
					}
				}
				break;
			}
		case 14:
			{
				{
					$var($Type$WildcardType, ta, $cast($Type$WildcardType, type));
					switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->get($nc((ta->kind))->ordinal())) {
					case 2:
						{
							append(u'-');
							assembleSig(ta->type);
							break;
						}
					case 1:
						{
							append(u'+');
							assembleSig(ta->type);
							break;
						}
					case 3:
						{
							append(u'*');
							break;
						}
					default:
						{
							$throwNew($AssertionError, $of(ta->kind));
						}
					}
					break;
				}
			}
		case 12:
			{
				if ($nc(($cast($Type$TypeVar, type)))->isCaptured()) {
					reportIllegalSignature(type);
				}
				append(u'T');
				append($nc(type->tsym)->name);
				append(u';');
				break;
			}
		case 18:
			{
				$assign(ft, $cast($Type$ForAll, type));
				assembleParamsSig($nc(ft)->tvars);
				assembleSig($nc(ft)->qtype);
				break;
			}
		default:
			{
				$throwNew($AssertionError, $of($$str({"typeSig "_s, $(type->getTag())})));
			}
		}
	}
}

bool Types$SignatureGenerator::hasTypeVar($List* l$renamed) {
	$var($List, l, l$renamed);
	while ($nc(l)->nonEmpty()) {
		$init($TypeTag);
		if ($nc(($cast($Type, l->head)))->hasTag($TypeTag::TYPEVAR)) {
			return true;
		}
		$assign(l, l->tail);
	}
	return false;
}

void Types$SignatureGenerator::assembleClassSig($Type* type) {
	$useLocalCurrentObjectStackCache();
	$var($Type$ClassType, ct, $cast($Type$ClassType, type));
	$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, $nc(ct)->tsym));
	classReference(c);
	$var($Type, outer, ct->getEnclosingType());
	if ($nc($($nc(outer)->allparams()))->nonEmpty()) {
		$init($Kinds$Kind);
		bool rawOuter = $nc($nc(c)->owner)->kind == $Kinds$Kind::MTH || $nc(c)->name == $nc($nc(this->types)->names)->empty;
		assembleClassSig(rawOuter ? $($nc(this->types)->erasure(outer)) : outer);
		append(rawOuter ? u'$' : u'.');
		$Assert::check($nc(c->flatname)->startsWith($nc($($nc(c->owner)->enclClass()))->flatname));
		$var($Name, var$0, nullptr);
		if (rawOuter) {
			int32_t var$1 = $nc($nc($($nc(c->owner)->enclClass()))->flatname)->getByteLength() + 1;
			$assign(var$0, $nc(c->flatname)->subName(var$1, $nc(c->flatname)->getByteLength()));
		} else {
			$assign(var$0, c->name);
		}
		append(var$0);
	} else {
		append($($ClassFile::externalize($nc(c)->flatname)));
	}
	if ($nc($(ct->getTypeArguments()))->nonEmpty()) {
		append(u'<');
		assembleSig($(ct->getTypeArguments()));
		append(u'>');
	}
}

void Types$SignatureGenerator::assembleParamsSig($List* typarams) {
	$useLocalCurrentObjectStackCache();
	append(u'<');
	{
		$var($List, ts, typarams);
		for (; $nc(ts)->nonEmpty(); $assign(ts, $nc(ts)->tail)) {
			$var($Type$TypeVar, tvar, $cast($Type$TypeVar, ts->head));
			append($nc($nc(tvar)->tsym)->name);
			$var($List, bounds, $nc(this->types)->getBounds(tvar));
			if (((int64_t)($nc($nc(($cast($Type, $nc(bounds)->head)))->tsym)->flags() & (uint64_t)(int64_t)512)) != 0) {
				append(u':');
			}
			{
				$var($List, l, bounds);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					append(u':');
					assembleSig($cast($Type, l->head));
				}
			}
		}
	}
	append(u'>');
}

void Types$SignatureGenerator::assembleSig($List* types) {
	{
		$var($List, ts, types);
		for (; $nc(ts)->nonEmpty(); $assign(ts, $nc(ts)->tail)) {
			assembleSig($cast($Type, ts->head));
		}
	}
}

Types$SignatureGenerator::Types$SignatureGenerator() {
}

$Class* Types$SignatureGenerator::load$($String* name, bool initialize) {
	$loadClass(Types$SignatureGenerator, name, initialize, &_Types$SignatureGenerator_ClassInfo_, allocate$Types$SignatureGenerator);
	return class$;
}

$Class* Types$SignatureGenerator::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com