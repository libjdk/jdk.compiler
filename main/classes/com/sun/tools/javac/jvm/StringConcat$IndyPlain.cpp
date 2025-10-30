#include <com/sun/tools/javac/jvm/StringConcat$IndyPlain.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/StringConcat$Indy.h>
#include <com/sun/tools/javac/jvm/StringConcat.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$DynamicMethodSymbol = ::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $StringConcat = ::com::sun::tools::javac::jvm::StringConcat;
using $StringConcat$Indy = ::com::sun::tools::javac::jvm::StringConcat$Indy;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _StringConcat$IndyPlain_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcat$IndyPlain::*)($Context*)>(&StringConcat$IndyPlain::init$))},
	{"doCall", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(static_cast<void(StringConcat$IndyPlain::*)($Type*,$JCDiagnostic$DiagnosticPosition*,$List*)>(&StringConcat$IndyPlain::doCall))},
	{"emit", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;ZLcom/sun/tools/javac/code/Type;)V", $PROTECTED},
	{}
};

$InnerClassInfo _StringConcat$IndyPlain_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.StringConcat$IndyPlain", "com.sun.tools.javac.jvm.StringConcat", "IndyPlain", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.jvm.StringConcat$Indy", "com.sun.tools.javac.jvm.StringConcat", "Indy", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StringConcat$IndyPlain_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.StringConcat$IndyPlain",
	"com.sun.tools.javac.jvm.StringConcat$Indy",
	nullptr,
	nullptr,
	_StringConcat$IndyPlain_MethodInfo_,
	nullptr,
	nullptr,
	_StringConcat$IndyPlain_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.StringConcat"
};

$Object* allocate$StringConcat$IndyPlain($Class* clazz) {
	return $of($alloc(StringConcat$IndyPlain));
}

void StringConcat$IndyPlain::init$($Context* context) {
	$StringConcat$Indy::init$(context);
}

void StringConcat$IndyPlain::emit($JCDiagnostic$DiagnosticPosition* pos, $List* args, bool generateFirstArg, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$var($List, split, this->split(args));
	bool first = true;
	{
		$var($Iterator, i$, $nc(split)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, t, $cast($List, i$->next()));
			{
				$Assert::check(!$nc(t)->isEmpty(), "Arguments list is empty"_s);
				$var($ListBuffer, dynamicArgs, $new($ListBuffer));
				{
					$var($Iterator, i$, $nc(t)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JCTree, arg, $cast($JCTree, i$->next()));
						{
							$var($Object, constVal, $nc($nc(arg)->type)->constValue());
							if (""_s->equals(constVal)) {
								continue;
							}
							if (arg->type == $nc(this->syms)->botType) {
								dynamicArgs->add($nc($($nc(this->types)->boxedClass($nc(this->syms)->voidType)))->type);
							} else {
								dynamicArgs->add($(sharpestAccessible(arg->type)));
							}
							if (!first || generateFirstArg) {
								$nc($($nc(this->gen)->genExpr(arg, arg->type)))->load();
							}
							first = false;
						}
					}
				}
				doCall(type, pos, $(dynamicArgs->toList()));
			}
		}
	}
	if (split->size() > 1) {
		$var($ListBuffer, argTypes, $new($ListBuffer));
		for (int32_t c = 0; c < split->size(); ++c) {
			argTypes->append($nc(this->syms)->stringType);
		}
		doCall(type, pos, $(argTypes->toList()));
	}
}

void StringConcat$IndyPlain::doCall($Type* type, $JCDiagnostic$DiagnosticPosition* pos, $List* dynamicArgTypes) {
	$useLocalCurrentObjectStackCache();
	$var($Type$MethodType, indyType, $new($Type$MethodType, dynamicArgTypes, type, $($List::nil()), $nc(this->syms)->methodClass));
	int32_t prevPos = $nc(this->make)->pos;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->make)->at(pos);
			$var($List, bsm_staticArgs, $List::of($nc(this->syms)->methodHandleLookupType, $nc(this->syms)->stringType, $nc(this->syms)->methodTypeType));
			$var($Symbol, bsm, $nc(this->rs)->resolveInternalMethod(pos, $($nc(this->gen)->getAttrEnv()), $nc(this->syms)->stringConcatFactory, $nc(this->names)->makeConcat, bsm_staticArgs, nullptr));
			$var($Name, var$1, $nc(this->names)->makeConcat);
			$var($Symbol, var$2, static_cast<$Symbol*>($nc(this->syms)->noSymbol));
			$var($Symbol$MethodHandleSymbol, var$3, $nc(($cast($Symbol$MethodSymbol, bsm)))->asHandle());
			$var($Type, var$4, static_cast<$Type*>(indyType));
			$var($Symbol$DynamicMethodSymbol, dynSym, $new($Symbol$DynamicMethodSymbol, var$1, var$2, var$3, var$4, $fcast($PoolConstant$LoadableConstantArray, $($nc($($List::nil()))->toArray($$new($PoolConstant$LoadableConstantArray, 0))))));
			$var($Items$Item, item, $nc($($nc(this->gen)->getItems()))->makeDynamicItem(dynSym));
			$nc(item)->invoke();
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$nc(this->make)->at(prevPos);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

StringConcat$IndyPlain::StringConcat$IndyPlain() {
}

$Class* StringConcat$IndyPlain::load$($String* name, bool initialize) {
	$loadClass(StringConcat$IndyPlain, name, initialize, &_StringConcat$IndyPlain_ClassInfo_, allocate$StringConcat$IndyPlain);
	return class$;
}

$Class* StringConcat$IndyPlain::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com