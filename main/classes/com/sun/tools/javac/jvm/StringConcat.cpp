#include <com/sun/tools/javac/jvm/StringConcat.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/StringConcat$Indy.h>
#include <com/sun/tools/javac/jvm/StringConcat$IndyConstants.h>
#include <com/sun/tools/javac/jvm/StringConcat$IndyPlain.h>
#include <com/sun/tools/javac/jvm/StringConcat$Inline.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ARRAY
#undef MAX_INDY_CONCAT_ARG_SLOTS
#undef MTH
#undef PLUS
#undef TAG_ARG
#undef TAG_CONST

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $StringConcat$Indy = ::com::sun::tools::javac::jvm::StringConcat$Indy;
using $StringConcat$IndyConstants = ::com::sun::tools::javac::jvm::StringConcat$IndyConstants;
using $StringConcat$IndyPlain = ::com::sun::tools::javac::jvm::StringConcat$IndyPlain;
using $StringConcat$Inline = ::com::sun::tools::javac::jvm::StringConcat$Inline;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $List = ::com::sun::tools::javac::util::List;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _StringConcat_FieldInfo_[] = {
	{"MAX_INDY_CONCAT_ARG_SLOTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcat, MAX_INDY_CONCAT_ARG_SLOTS)},
	{"TAG_ARG", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcat, TAG_ARG)},
	{"TAG_CONST", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcat, TAG_CONST)},
	{"gen", "Lcom/sun/tools/javac/jvm/Gen;", nullptr, $PROTECTED | $FINAL, $field(StringConcat, gen)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PROTECTED | $FINAL, $field(StringConcat, syms)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PROTECTED | $FINAL, $field(StringConcat, names)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PROTECTED | $FINAL, $field(StringConcat, make)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PROTECTED | $FINAL, $field(StringConcat, types)},
	{"sbAppends", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;>;", $PROTECTED | $FINAL, $field(StringConcat, sbAppends)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PROTECTED | $FINAL, $field(StringConcat, rs)},
	{"concatKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/jvm/StringConcat;>;", $PROTECTED | $STATIC | $FINAL, $staticField(StringConcat, concatKey)},
	{}
};

$MethodInfo _StringConcat_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(StringConcat::*)($Context*)>(&StringConcat::init$))},
	{"collect", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PRIVATE, $method(static_cast<$List*(StringConcat::*)($JCTree*,$List*)>(&StringConcat::collect))},
	{"collectAll", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PROTECTED},
	{"collectAll", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PROTECTED},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/jvm/StringConcat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StringConcat*(*)($Context*)>(&StringConcat::instance))},
	{"makeConcat", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/jvm/StringConcat;", nullptr, $PRIVATE | $STATIC, $method(static_cast<StringConcat*(*)($Context*)>(&StringConcat::makeConcat))},
	{"makeConcat", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeConcat", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PUBLIC | $ABSTRACT},
	{"sharpestAccessible", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$InnerClassInfo _StringConcat_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.StringConcat$IndyConstants", "com.sun.tools.javac.jvm.StringConcat", "IndyConstants", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.tools.javac.jvm.StringConcat$IndyPlain", "com.sun.tools.javac.jvm.StringConcat", "IndyPlain", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.jvm.StringConcat$Indy", "com.sun.tools.javac.jvm.StringConcat", "Indy", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.jvm.StringConcat$Inline", "com.sun.tools.javac.jvm.StringConcat", "Inline", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StringConcat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.jvm.StringConcat",
	"java.lang.Object",
	nullptr,
	_StringConcat_FieldInfo_,
	_StringConcat_MethodInfo_,
	nullptr,
	nullptr,
	_StringConcat_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.StringConcat$IndyConstants,com.sun.tools.javac.jvm.StringConcat$IndyPlain,com.sun.tools.javac.jvm.StringConcat$Indy,com.sun.tools.javac.jvm.StringConcat$Inline"
};

$Object* allocate$StringConcat($Class* clazz) {
	return $of($alloc(StringConcat));
}

$Context$Key* StringConcat::concatKey = nullptr;

StringConcat* StringConcat::instance($Context* context) {
	$init(StringConcat);
	$var(StringConcat, instance, $cast(StringConcat, $nc(context)->get(StringConcat::concatKey)));
	if (instance == nullptr) {
		$assign(instance, makeConcat(context));
	}
	return instance;
}

StringConcat* StringConcat::makeConcat($Context* context) {
	$init(StringConcat);
	$useLocalCurrentObjectStackCache();
	$Target* target = $Target::instance(context);
	$var($String, opt, $nc($($Options::instance(context)))->get("stringConcat"_s));
	if ($nc(target)->hasStringConcatFactory()) {
		if (opt == nullptr) {
			$assign(opt, "indyWithConstants"_s);
		}
	} else {
		if (opt != nullptr && !"inline"_s->equals(opt)) {
			$Assert::error("StringConcatFactory-based string concat is requested on a platform that does not support it."_s);
		}
		$assign(opt, "inline"_s);
	}
	{
		$var($String, s3692$, opt);
		int32_t tmp3692$ = -1;
		switch ($nc(s3692$)->hashCode()) {
		case (int32_t)0xB96DA299:
			{
				if (s3692$->equals("inline"_s)) {
					tmp3692$ = 0;
				}
				break;
			}
		case 0x0031647A:
			{
				if (s3692$->equals("indy"_s)) {
					tmp3692$ = 1;
				}
				break;
			}
		case 0x2804E0CF:
			{
				if (s3692$->equals("indyWithConstants"_s)) {
					tmp3692$ = 2;
				}
				break;
			}
		}
		switch (tmp3692$) {
		case 0:
			{
				return $new($StringConcat$Inline, context);
			}
		case 1:
			{
				return $new($StringConcat$IndyPlain, context);
			}
		case 2:
			{
				return $new($StringConcat$IndyConstants, context);
			}
		default:
			{
				$Assert::error($$str({"Unknown stringConcat: "_s, opt}));
				$throwNew($IllegalStateException, $$str({"Unknown stringConcat: "_s, opt}));
			}
		}
	}
}

void StringConcat::init$($Context* context) {
	$nc(context)->put(StringConcat::concatKey, $of(this));
	$set(this, gen, $Gen::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, sbAppends, $new($HashMap));
}

$List* StringConcat::collectAll($JCTree* tree) {
	return collect(tree, $($List::nil()));
}

$List* StringConcat::collectAll($JCTree$JCExpression* lhs, $JCTree$JCExpression* rhs) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($List::nil()))->appendList($(collectAll(lhs)))))->appendList($(collectAll(rhs)));
}

$List* StringConcat::collect($JCTree* tree$renamed, $List* res) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	$assign(tree, $TreeInfo::skipParens(tree));
	$init($JCTree$Tag);
	bool var$0 = $nc(tree)->hasTag($JCTree$Tag::PLUS);
	if (var$0 && $nc(tree->type)->constValue() == nullptr) {
		$var($JCTree$JCBinary, op, $cast($JCTree$JCBinary, tree));
		$init($Kinds$Kind);
		if ($nc(op->operator$)->kind == $Kinds$Kind::MTH && $nc(op->operator$)->opcode == 256) {
			return $nc($($nc(res)->appendList($(collect(op->lhs, res)))))->appendList($(collect(op->rhs, res)));
		}
	}
	return $nc(res)->append(tree);
}

$Type* StringConcat::sharpestAccessible($Type* originalType) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(originalType)->hasTag($TypeTag::ARRAY)) {
		return $nc(this->types)->makeArrayType($(sharpestAccessible($($nc(this->types)->elemtype(originalType)))));
	}
	$var($Type, type, originalType);
	while (true) {
		$var($Env, var$0, $nc(this->gen)->getAttrEnv());
		if (!(!$nc(this->rs)->isAccessible(var$0, $($nc(type)->asElement())))) {
			break;
		}
		{
			$assign(type, $nc(this->types)->supertype(type));
		}
	}
	return type;
}

void clinit$StringConcat($Class* class$) {
	$assignStatic(StringConcat::concatKey, $new($Context$Key));
}

StringConcat::StringConcat() {
}

$Class* StringConcat::load$($String* name, bool initialize) {
	$loadClass(StringConcat, name, initialize, &_StringConcat_ClassInfo_, clinit$StringConcat, allocate$StringConcat);
	return class$;
}

$Class* StringConcat::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com